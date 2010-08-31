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
# Description:  make file for removing EFF font files and freetype rasterizer 
#

TARGETDIR=\EPOC32\DATA\Z
TARGETDIRCFG=\EPOC32\RELEASE\$(PLATFORM)\$(CFG)

do_nothing :
	@rem do_nothing

#
# Remove any gt files that we do not want
#
MAKMAKE :
	@if exist $(TARGETDIR)\RESOURCE\FONTS\ncrbiu.ttf	 erase /F $(TARGETDIR)\RESOURCE\FONTS\ncrbiu.ttf
	@if exist $(TARGETDIR)\RESOURCE\FONTS\ncrbru.ttf	 erase /F $(TARGETDIR)\RESOURCE\FONTS\ncrbru.ttf
	@if exist $(TARGETDIR)\RESOURCE\FONTS\ncrriu.ttf	 erase /F $(TARGETDIR)\RESOURCE\FONTS\ncrriu.ttf
	@if exist $(TARGETDIR)\RESOURCE\FONTS\ncrrru.ttf	 erase /F $(TARGETDIR)\RESOURCE\FONTS\ncrrru.ttf
	@if exist $(TARGETDIR)\RESOURCE\FONTS\ntmbiu.ttf	 erase /F $(TARGETDIR)\RESOURCE\FONTS\ntmbiu.ttf
	@if exist $(TARGETDIR)\RESOURCE\FONTS\ntmbru.ttf	 erase /F $(TARGETDIR)\RESOURCE\FONTS\ntmbru.ttf
	@if exist $(TARGETDIR)\RESOURCE\FONTS\ntmriu.ttf	 erase /F $(TARGETDIR)\RESOURCE\FONTS\ntmriu.ttf
	@if exist $(TARGETDIR)\RESOURCE\FONTS\ntmrru.ttf	 erase /F $(TARGETDIR)\RESOURCE\FONTS\ntmrru.ttf
	@if exist $(TARGETDIR)\RESOURCE\FONTS\swabiu.ttf	 erase /F $(TARGETDIR)\RESOURCE\FONTS\swabiu.ttf
	@if exist $(TARGETDIR)\RESOURCE\FONTS\swabru.ttf	 erase /F $(TARGETDIR)\RESOURCE\FONTS\swabru.ttf
	@if exist $(TARGETDIR)\RESOURCE\FONTS\swariu.ttf	 erase /F $(TARGETDIR)\RESOURCE\FONTS\swariu.ttf
	@if exist $(TARGETDIR)\RESOURCE\FONTS\swarru.ttf	 erase /F $(TARGETDIR)\RESOURCE\FONTS\swarru.ttf
	@if exist $(TARGETDIR)\RESOURCE\FONTS\unicode.gdr	 erase /F $(TARGETDIR)\RESOURCE\FONTS\unicode.gdr
	@if exist $(TARGETDIR)\RESOURCE\FONTS\unicode_minus_cjk.gdr	  erase /F $(TARGETDIR)\RESOURCE\FONTS\unicode_minus_cjk.gdr
	@if exist $(TARGETDIR)\RESOURCE\FONTS\unicode_most_basic.gdr	  erase /F $(TARGETDIR)\RESOURCE\FONTS\unicode_most_basic.gdr
	@if exist $(TARGETDIR)\RESOURCE\PLUGINS\freetype.RSC erase /F $(TARGETDIR)\RESOURCE\PLUGINS\freetype.RSC
	

ifeq (WINSCW,$(findstring WINSCW, $(PLATFORM)))
RESOURCE :
	@rem CFG
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\eon14.gdr 	erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\eon14.gdr
	@if exist $(TARGETDIRCFG)\Freetype.dll	erase /F $(TARGETDIRCFG)\Freetype.dll
	@if exist $(TARGETDIRCFG)\Freetype.dll.map	erase /F $(TARGETDIRCFG)\Freetype.dll.map
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\PLUGINS\freetype.RSC erase /F $(TARGETDIRCFG)\Z\RESOURCE\PLUGINS\freetype.RSC
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ncrbiu.ttf	erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ncrbiu.ttf
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ncrbru.ttf	erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ncrbru.ttf
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ncrriu.ttf	erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ncrriu.ttf
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ncrrru.ttf	erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ncrrru.ttf
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ntmbiu.ttf	erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ntmbiu.ttf
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ntmbru.ttf	erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ntmbru.ttf
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ntmriu.ttf	erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ntmriu.ttf
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ntmrru.ttf	erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\ntmrru.ttf
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\swabiu.ttf	erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\swabiu.ttf
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\swabru.ttf	erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\swabru.ttf
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\swariu.ttf	erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\swariu.ttf
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\swarru.ttf	erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\swarru.ttf
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\unicode.gdr	erase /F $(TARGETDIRCFG)\unicode.gdr
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\unicode_minus_cjk.gdr    erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\unicode_minus_cjk.gdr
	@if exist $(TARGETDIRCFG)\Z\RESOURCE\FONTS\unicode_most_basic.gdr   erase /F $(TARGETDIRCFG)\Z\RESOURCE\FONTS\unicode_most_basic.gdr
else
ifeq (ARMV5,$(findstring ARMV5, $(PLATFORM)))
RESOURCE :
	@rem CFG
	@if exist $(TARGETDIRCFG)\Freetype.dll	erase /F $(TARGETDIRCFG)\Freetype.dll
	@if exist $(TARGETDIRCFG)\Freetype.dll.map	erase /F $(TARGETDIRCFG)\Freetype.dll.map
else
RESOURCE : do_nothing
endif
endif

CLEAN : do_nothing

LIB : do_nothing

CLEANLIB : do_nothing

BLD : do_nothing

FREEZE : do_nothing

SAVESPACE : do_nothing

RELEASABLES :do_nothing

FINAL : do_nothing

