@echo off
#
# Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
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
@echo on

setlocal

python gencode.py

#if not exist buildtemp md buildtemp

#set target=%1
#if "%target%"=="" goto build

#for /F %%i in (makefiles.txt) do make -f %%i %target%
#goto end

#:build
#call gencode MAKMAKE
#call gencode RESOURCE
#call gencode LIB
#call gencode BLD

#call xcopy /yuce .\buildtemp\*.* ..\..\..\uiresources_plat\layout_data_api\inc
#call xcopy /yuce .\buildtemp\*.* ..\generated_inc

#:end
endlocal
