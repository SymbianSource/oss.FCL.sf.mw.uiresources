#
# Copyright (c) 2003-2008 Nokia Corporation and/or its subsidiary(-ies).
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
# Description:  use the CDL Compiler to process the CDL files, 
#  generating client headers and internal headers
#

include LayoutConfig.mk

do_nothing :
	@rem do_nothing

MAKMAKE : make_gen_dir
	@rem
	@rem dummy instances so that adaptation layer has necessary instance headers
	@rem
	@CdlCompiler instance -p$(gen_dir) ..\cdl\AknLayout.cdl _dummyakn
	@CdlCompiler instance -p$(gen_dir) ..\cdl\AknApacLayout.cdl _dummyaknapac
	@CdlCompiler instance -p$(gen_dir) ..\cdl\AppLayout.cdl _dummyapp
	@CdlCompiler instance -p$(gen_dir) ..\cdl\AppApacLayout.cdl _dummyappapac
	@CdlCompiler instance -p$(gen_dir) ..\cdl\skinLayout.cdl _dummyskin
	@-del $(gen_dir)\_dummy*.*

BLD : do_nothing

CLEAN : 
	@rmdir /s/q buildtemp

LIB : do_nothing

CLEANLIB : do_nothing

RESOURCE :
	@rem
	@rem package interface
	@rem
	@CdlCompiler client -p.\buildtemp ..\cdl\LayoutPack.cdl
	@rem
	@rem layout interfaces
	@rem
	@CdlCompiler client -p.\buildtemp ..\cdl\AknLayout.cdl
	@CdlCompiler client -p.\buildtemp ..\cdl\AknApacLayout.cdl
	@CdlCompiler client -p.\buildtemp ..\cdl\AppLayout.cdl
	@CdlCompiler client -p.\buildtemp ..\cdl\AppApacLayout.cdl
	@CdlCompiler client -p.\buildtemp ..\cdl\SkinLayout.cdl
	@CdlCompiler client -p.\buildtemp ..\cdl\AknLayoutScalable_Avkon.cdl
	@CdlCompiler client -p.\buildtemp ..\cdl\AknLayoutScalable_Apps.cdl
	@CdlCompiler client -p.\buildtemp ..\cdl\AknLayoutScalable_UiAccel.cdl
	@rem
	@rem font interfaces
	@rem
	@CdlCompiler client -p.\buildtemp ..\cdl\CdlFont.cdl
	@rem
	@rem layout metadata interfaces
	@rem
	@CdlCompiler client -p.\buildtemp ..\cdl\LayoutMetaData.cdl
	@CdlCompiler client -p.\buildtemp ..\cdl\displaylayoutmetrics.cdl

FREEZE : do_nothing

SAVESPACE : do_nothing

RELEASABLES :
	@echo .\buildtemp\LayoutPack.cdl.h
	@echo .\buildtemp\LayoutPack.cdl.common.h
	@echo .\buildtemp\AknLayout.cdl.h
	@echo .\buildtemp\AknLayout.cdl.common.h
	@echo .\buildtemp\AknApacLayout.cdl.h
	@echo .\buildtemp\AknApacLayout.cdl.common.h
	@echo .\buildtemp\AppLayout.cdl.h
	@echo .\buildtemp\AppLayout.cdl.common.h
	@echo .\buildtemp\AppApacLayout.cdl.h
	@echo .\buildtemp\AppApacLayout.cdl.common.h
	@echo .\buildtemp\SkinLayout.cdl.h
	@echo .\buildtemp\SkinLayout.cdl.common.h
	@echo .\buildtemp\AknLayoutScalable_Avkon.cdl.h
	@echo .\buildtemp\AknLayoutScalable_Avkon.cdl.common.h
	@echo .\buildtemp\AknLayoutScalable_Apps.cdl.h
	@echo .\buildtemp\AknLayoutScalable_Apps.cdl.common.h
	@echo .\buildtemp\AknLayoutScalable_UiAccel.cdl.h
	@echo .\buildtemp\AknLayoutScalable_UiAccel.cdl.common.h
	@echo .\buildtemp\CdlFont.cdl.h
	@echo .\buildtemp\CdlFont.cdl.common.h
	@echo .\buildtemp\LayoutMetaData.cdl.h
	@echo .\buildtemp\LayoutMetaData.cdl.common.h
	@echo .\buildtemp\displaylayoutmetrics.cdl.h
	@echo .\buildtemp\displaylayoutmetrics.cdl.common.h

FINAL : do_nothing
