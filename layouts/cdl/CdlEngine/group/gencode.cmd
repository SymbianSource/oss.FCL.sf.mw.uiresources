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

setlocal

if not exist buildtemp md buildtemp

make -f buildapi.mk MAKMAKE
make -f buildapi.mk RESOURCE
make -f buildapi.mk LIB
make -f buildapi.mk BLD

call xcopy /yuce .\buildtemp\*.* ..\..\..\..\uiresources_plat\cdl_api\inc

:end
endlocal