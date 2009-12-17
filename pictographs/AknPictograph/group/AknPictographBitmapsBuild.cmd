@echo off
rem
rem Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
rem All rights reserved.
rem This component and the accompanying materials are made available
rem under the terms of "Eclipse Public License v1.0"
rem which accompanies this distribution, and is available
rem at the URL "http://www.eclipse.org/legal/epl-v10.html".
rem
rem Initial Contributors:
rem Nokia Corporation - initial contribution.
rem
rem Contributors:
rem
rem Description:
rem
@echo on
@echo off
rem %1 is rom_type: xip/non_xip
rem %2 is parent directory of AknPictograph
rem %3 is targetdir for final mbm files

cd .\..\tools\AknPictoBitmapBuilder\group&&^
bldmake bldfiles&&^
abld build winscw urel&&^
cd .\..\..\..\group&&^
echo Building pictograph bitmaps...&&^
echo \epoc32\release\winscw\urel\AknPictoBitmapBuilder.exe  -Dnogui -D_epoc_drive_a=%~dp2 -- 1&&^
\epoc32\release\winscw\urel\AknPictoBitmapBuilder.exe  -Dnogui -D_epoc_drive_a=%~dp2 -- 1&&^
.\..\generated\buildbitmaps.cmd %1 %2 %3