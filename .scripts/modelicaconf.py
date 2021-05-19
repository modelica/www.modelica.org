#!/usr/bin/env python3

import glob
import os
import pathlib

year = 2017

for root, dir, files in os.walk("../ModelicaConference%d/proceedings/html" % year):
  for f in files:
    path = os.path.join(root, f)
    path2 = path.replace("../ModelicaConference%d/proceedings/html" % year, "events/modelica%d/proceedings/html" % year)
    if path2.endswith(".md"):
      path2 = path2.replace(".md", ".html")
    path3 = path2.replace("events/modelica%d/" % year,"")
    if path2.endswith(".html"):
      pathlib.Path(os.path.dirname(path2)).mkdir(parents=True, exist_ok=True)
      with open(path2, "w") as fout:
        fout.write("""<!DOCTYPE html>
  <meta charset="utf-8">
  <title>Redirecting to https://%d.international.conference.modelica.org/%s</title>
  <meta http-equiv="refresh" content="0; URL=https://%d.international.conference.modelica.org/%s">
  <link rel="canonical" href="https://%d.international.conference.modelica.org/%s">
  """ % (year,path3,year,path3,year,path3))
    if path2.endswith(".pdf"):
      pathlib.Path(path2).mkdir(parents=True, exist_ok=True)
      with open(path2 + "/index.html", "w") as fout:
        fout.write("""<!DOCTYPE html>
  <meta charset="utf-8">
  <title>Redirecting to https://%d.international.conference.modelica.org/%s</title>
  <meta http-equiv="refresh" content="0; URL=https://%d.international.conference.modelica.org/%s">
  <link rel="canonical" href="https://%d.international.conference.modelica.org/%s">
  """ % (year,path3,year,path3,year,path3))
    
