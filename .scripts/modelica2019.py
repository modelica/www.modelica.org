#!/usr/bin/env python3

import glob
import os
import pathlib

for root, dir, files in os.walk("../ModelicaConference2019/proceedings/html"):
  for f in files:
    path = os.path.join(root, f)
    path2 = path.replace("../ModelicaConference2019/proceedings/html", "events/modelica2019/proceedings/html")
    if path2.endswith(".md"):
      path2 = path2.replace(".md", ".html")
    path3 = path2.replace("events/modelica2019/","")
    if path2.endswith(".html"):
      pathlib.Path(os.path.dirname(path2)).mkdir(parents=True, exist_ok=True)
      with open(path2, "w") as fout:
        fout.write("""<!DOCTYPE html>
  <meta charset="utf-8">
  <title>Redirecting to https://2019.international.conference.modelica.org/%s</title>
  <meta http-equiv="refresh" content="0; URL=https://2019.international.conference.modelica.org/%s">
  <link rel="canonical" href="https://2019.international.conference.modelica.org/%s">
  """ % (path3,path3,path3))
    if path2.endswith(".pdf"):
      pathlib.Path(path2).mkdir(parents=True, exist_ok=True)
      with open(path2 + "/index.html", "w") as fout:
        fout.write("""<!DOCTYPE html>
  <meta charset="utf-8">
  <title>Redirecting to https://2019.international.conference.modelica.org/%s</title>
  <meta http-equiv="refresh" content="0; URL=https://2019.international.conference.modelica.org/%s">
  <link rel="canonical" href="https://2019.international.conference.modelica.org/%s">
  """ % (path3,path3,path3))
    
