#!/usr/bin/python

import os
import os.path
import shutil
import glob

if not os.path.exists('buildtemp'):
      os.mkdir('buildtemp')

f = open('makefiles.txt','r')
for line in f:
    line = line.rstrip()
    if line != "" :
        for target in ['MAKMAKE', 'RESOURCE', 'LIB', 'BLD']:
            parameter = "-f " + line +' '+target
	    os.system("make" + " " +  parameter)

f.close()


filelist=glob.glob("./buildtemp/*.*")
for file in filelist:
    shutil.copy(file, "../../../uiresources_plat/layout_data_api/inc")

for file in filelist:
    shutil.copy(file, "../generated_inc")
