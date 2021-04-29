#!/usr/bin/env python3

import os
import fnmatch

for root, dir, files in os.walk("."):
  if ".git" in root:
    continue
  for f in files:
    if f.endswith(".html"):
      path = os.path.join(root, f)
      with open(path) as fin:
        lines = fin.readlines()
        found = False
        for (needle, ndel) in [
            ('    <li id="siteaction-user_login"><a\n',3),
            ('    <li id="siteaction-accessibility"><a\n',3),
            ('    <li id="siteaction-imprint"><a\n',3),
            ('<div id="cse-search-form" style="width: 100%;">Loading</div>\n',1),
            # ('<div id="portletwrapper-706c6f6e652e7269676874636f6c756d6e0a636f6e746578740a2f506c6f6e650a6e657773"\n',63),
            ('<div id="portal-colophon">\n',16)
          ]:
          if needle in lines:
            found = True
            ix = lines.index(needle)
            del lines[ix:ix+ndel]
        for (needle, replace) in [('See also <a href="#">Imprint</a>.', '')]:
          for i in range(1,len(lines)):
            if needle in lines[i]:
              found = True
              lines[i] = lines[i].replace(needle, "")
            
      if found:
        with open(path, "w") as fout:
          for line in lines:
            fout.write(line)
  #print(root)
  #print("")
  #for items in fnmatch.filter(files, "*"):
  #        print("..." + items)
  #print("")
