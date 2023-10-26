#!/usr/bin/env python3

"""
generate HTML overview of a GitHub user's repositories

results are sent to STDOUT

Usage:

  $ ./list_repos
"""

import os
import sys
import re
import requests
import semver

GHAUTH = os.environ.get("GITHUB_AUTH")
if GHAUTH:
    CLIENT_ID_mo = ""
    CLIENT_SECRET_mo = ""
    CLIENT_ID_3rd = ""
    CLIENT_SECRET_3rd = ""
    CLIENT_ID_dep = ""
    CLIENT_SECRET_dep = ""
else:
    CLIENT_ID_mo = os.environ["CLIENT_ID_mo"]
    CLIENT_SECRET_mo = os.environ["CLIENT_SECRET_mo"]
    CLIENT_ID_3rd = os.environ["CLIENT_ID_3rd"]
    CLIENT_SECRET_3rd = os.environ["CLIENT_SECRET_3rd"]
    CLIENT_ID_dep = os.environ["CLIENT_ID_dep"]
    CLIENT_SECRET_dep = os.environ["CLIENT_SECRET_dep"]

fout = open("impact-libraries.html", "w")

# The libraries to load from the modelica repo; limited because the repo contains non-libraries
MA_libs_whitelist = ["ModelicaStandardLibrary", "Modelica_Synchronous", "VehicleInterfaces", "Modelica-Compliance", "Modelica_LinearSystems2"]

HEAD = """<!doctype html>
<html>
<head>
    <title>List of repositories</title>
    <link type="text/css" href="impact-libraries_files/bootstrap.min.css" rel="stylesheet">
    <link type="text/css" href="impact-libraries_files/bootstrap-theme.min.css" rel="stylesheet">
    <link type="text/css" href="impact-libraries_files/libs.css" rel="stylesheet">
</head>
<body>
    <dl>
        <dt>Colour-code for download buttons:<br></dt>
        <dd><span class="btn btn-small btn-success">MA Library<br>(standard conforming)</span>&nbsp;
            <span class="btn btn-small btn-warning">MA Library<br>(not yet standard conforming)</span>&nbsp;
            <span class="btn btn-small btn-danger">MA Library<br>(deprecated)</span>&nbsp;
            <span class="btn btn-small btn-info">User Library<br>(with license)</span>&nbsp;
            <span class="btn btn-small btn-default">User Library<br>(<strong>no</strong> license)</span>&nbsp;
            <span class="btn btn-small btn-default disabled">No official release yet<br>(development version might be available)</span>
        </dd>
    <dl>
    <table class="table table-condensed table-striped">
"""
TABLE_HEAD = """
        <thead>
            <tr>
                <th colspan="4" class="heading">%s</th>
            </tr>
            <tr>
                <th>Name</th>
                <th>Description</th>
                <th>Last Release</th>
                <th>Last Active</th>
            </tr>
        </thead>
"""
ROW = """
            <tr>
                <td>%s</td>
                <td>%s</td>
                <td>%s</td>
                <td>%s</td>
            </tr>
"""
TAIL = """
    </table>
<script type="text/javascript" src="js/jquery.min.js"></script>
<script type="text/javascript" src="js/moment.min.js"></script>
<script type="text/javascript">
   $(function() {
       var computeFromNow = function(elem) {
           var text = elem.text();
           var fromNow = moment(text, 'YYYY-MM-DD').fromNow();
           elem.text(fromNow);
       };
       $(".relative").each(function(i) { computeFromNow($(this)); })
   });
</script>
</body>
</html>
"""

class HTTPException(Exception):
    pass


def main(args):
    try:
        repos_standard = []
        repos_other = []
        global MA_libs_whitelist
        for repo in get_repo_details("modelica", CLIENT_ID_mo, CLIENT_SECRET_mo, whitelist=MA_libs_whitelist):
            if "(standard conforming)" in repo["desc"]:
                repos_standard.append(repo)
            else:
                repos_other.append(repo)

        fout.write(HEAD.strip())

        fout.write(render(repos_standard, "Standard conforming libraries developed by the MA").rstrip())
        fout.write(render(repos_other, "Other libraries developed by the MA").rstrip())
        fout.write(render(get_repo_details("modelica-3rdparty", CLIENT_ID_3rd, CLIENT_SECRET_3rd),
                     "Free libraries (provided by users)").rstrip())
        fout.write(render(get_repo_details("modelica-deprecated", CLIENT_ID_dep, CLIENT_SECRET_dep),
                     "Older libraries developed by the MA (deprecated)").rstrip())
        fout.write(TAIL.rstrip())

    except HTTPException as exc:
        sys.stderr.write("ERROR: %s\n" % exc.message)
        return False

    return True


def get_repo_details(username, clientId, clientSecret, whitelist=None):
    uri_template_pattern = re.compile(r"{.*?}")
    pager = "?per_page=100"
    req = _get("https://api.github.com/users/%s/repos" %
                username, clientId, clientSecret, pager)
    repos = []
    for repo in req.json():
        if whitelist is not None:
            if repo["name"] not in whitelist:
                continue
        '''
        If Github pages with custom domain is set then homepage uses that so give preference to html_url.
        For example ModelicaStandardLibrary uses Github Pages with custom domain so if we use homepage then the download link is wrong.
        '''
        data = {
            "owner": repo["owner"]["login"],
            "name": repo["name"],
            "desc": repo.get("description") if repo.get("description") is not None else "",
            "url": repo["html_url"] or repo["homepage"],
            "updated_at": re.sub('T.*', '', repo["updated_at"]),
            "pushed_at": re.sub('T.*', '', repo["pushed_at"])
        }
        tags_url = uri_template_pattern.sub("", repo["tags_url"])
        try:
            tag_name, tag_date = _get_last_tag(tags_url, clientId, clientSecret)
            release_link = ('%s/releases/tag/%s'
                            % (data["url"], tag_name))
            data["last_tag"] = {
                "name": tag_name,
                "date": tag_date,
                "url": release_link
            }

        except TypeError:
            data["last_tag"] = False

        commits_url = uri_template_pattern.sub("", repo["commits_url"])
        repos.append(data)

    return repos


def render(repos, title):
    out = [TABLE_HEAD % title]
    out.append("        <tbody>")
    for repo in repos:
        if repo["owner"] == "modelica":
            if "(standard conforming)" in repo["desc"]:
                btn_type = "btn-success"
            else:
                btn_type = "btn-warning"
        elif repo["owner"] == "modelica-3rdparty":
            if "(unlicensed)" in repo["desc"]:
                btn_type = "btn-default"
            else:
                btn_type = "btn-info"
        elif repo["owner"] == "modelica-deprecated":
            btn_type = "btn-danger"

        link = ('<a target="_blank" href="%s">%s</a>' %
                (repo["url"], repo["name"]))  # TODO: sanitize

        if repo["last_tag"]:
            tag_link = ('<a class="btn btn-sm %s" target=_blank href="%s">'
                        '<i class="glyphicon glyphicon-download-alt icon-white"></i>'
                        '&nbsp;&nbsp;%s<br>'
                        '(<span class="relative" title="%s">%s</span>)</a>'
                        % (btn_type,
                           repo["last_tag"]["url"],
                           repo["last_tag"]["name"],
                           repo["last_tag"]["date"],
                           repo["last_tag"]["date"]))  # TODO: sanitize
        else:
            tag_link = '<a class="btn btn-default btn-sm disabled" href="#">N/A</a>'

        if repo["updated_at"] > repo["pushed_at"]:
            date_stamp = repo["updated_at"]
        else:
            date_stamp = repo["pushed_at"]
        last_active = ('<span class="relative" title="%s">%s</span>' %
                       (date_stamp, date_stamp))
        out.append(ROW % (link, repo["desc"], tag_link, last_active))

    out.append("        </tbody>")
    return '\n'.join(out)  # TODO: might as well yield each entry in `out`


def _get_last_tag(tags_url, clientId, clientSecret):
    res = _get(tags_url, clientId, clientSecret)
    try:
        data_all = res.json()
        data_ref = data_all[0]
        data = data_ref
        for i in range(0, len(data_all)-1):
            data_test = data_all[i+1]
            try:
                if semver.match(re.sub('^v', '', data_ref["name"]),
                                ">="+re.sub('^v', '', data_test["name"])):
                    data = data_ref
                else:
                    data_ref = data_test
            except ValueError:
                # in case of non-semver we take the last version and exit
                data = data_ref
        data["commit_date"] = _get_commit_date(data["commit"]["url"], clientId, clientSecret)
        return data["name"], data["commit_date"]
    except (IndexError, KeyError):
        return False


def _get_commit_date(commit_url, clientId, clientSecret):
    res = _get(commit_url, clientId, clientSecret)
    try:
        data = res.json()
        return re.sub('T.*', '', data["commit"]["author"]["date"])
    except (IndexError, KeyError):
        return False


def _get(url, clientId, clientSecret, pager=""):
    sys.stderr.write("retrieving %s%s\n" % (url, pager))
    if GHAUTH:
        headers = {'Authorization': 'token ' + GHAUTH}
        req = requests.get("%s%s" % (url, pager), headers=headers)
    else:
        req = requests.get("%s%s" % (url, pager), auth=(clientId, clientSecret))
    if not req.status_code == 200:
        raise HTTPException("failed to retrieve %s" % url)
    return req


if __name__ == "__main__":
    status = not main(sys.argv)
    sys.exit(status)
