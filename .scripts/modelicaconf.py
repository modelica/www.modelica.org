#!/usr/bin/env python3

import glob
import os
import pathlib

year = 2015

for root, dir, files in os.walk("../ModelicaConference%d/proceedings/html" % year):
  for f in files:
    path = os.path.join(root, f)
    path2 = path.replace("../ModelicaConference%d/proceedings/html" % year, "events/modelica%d/proceedings/html" % year)
    if path2.endswith(".md"):
      path2 = path2.replace(".md", ".html")
    path3 = path2.replace("events/modelica%d/" % year,"")
    url = "https://%d.international.conference.modelica.org/%s" % (year,path3)
    if path2.endswith(".html"):
      pathlib.Path(os.path.dirname(path2)).mkdir(parents=True, exist_ok=True)
      path4 = path2
    if path2.endswith(".pdf"):
      pathlib.Path(path2).mkdir(parents=True, exist_ok=True)
      path4 = path2 + "/index.html"    
    with open(path4, "w") as fout:
      fout.write("""<!DOCTYPE html>
  <meta charset="utf-8">
  <title>Redirecting to %s</title>
  <meta http-equiv="refresh" content="0; URL=%s">
  <link rel="canonical" href="%s">
  """ % (url,url,url))
