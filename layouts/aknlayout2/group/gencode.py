#
# Copyright (c) 2005 Nokia Corporation and/or its subsidiary(-ies).
# All rights reserved.
# This component and the accompanying materials are made available
# under the terms of "Eclipse Public License v1.0"
# which accompanies this distribution, and is available
# at the URL "http://www.eclipse.org/legal/epl-v10.html".
#
# Initial Contributors:
# Nokia Corporation - initial contribution.
#
# Contributors:
#
# Description:
#

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
# for file in filelist:
#     shutil.copy(file, "../../../uiresources_plat/layout_data_api/inc")

for file in filelist:
    shutil.copy(file, "../generated_inc")
