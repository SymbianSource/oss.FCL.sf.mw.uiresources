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
# Description:  Use the CDL Compiler to generate the layout instance DLL. This file is named "ALL"
#  to signify that all layouts are included into the DLL. Each product must modify this file to include
#  only the instances and packages that it requires.
#

include layoutConfig.mk

do_nothing :
	@rem do_nothing

MAKMAKE : make_gen_dir
	@rem
	@rem the DLL
	@rem
	@CdlCompiler dll \
		-p$(gen_dir) \
		\
		-laknlayout2.lib \
		-laknlayout2scalable.lib \
		-laknlayout2adaptation.lib \
		-lcdlengine.lib \
		\
		-s..\decodelib\Aknlayout2adaptationdecode.cpp \
		\
		LayoutInst 0x101fe2aa \
		\
		@common_instances.txt

BLD : do_nothing

CLEAN : 

LIB : do_nothing

CLEANLIB : do_nothing

RESOURCE : do_nothing

FREEZE : do_nothing

SAVESPACE : do_nothing

RELEASABLES : do_nothing

FINAL : do_nothing
