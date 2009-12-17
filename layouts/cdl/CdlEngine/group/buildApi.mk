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

do_nothing :
	@rem do_nothing

MAKMAKE :
	@CdlCompiler client -p.\buildtemp ..\..\..\..\uiresources_plat\cdl_api\inc\userpckg.cdl

BLD : do_nothing

CLEAN :
	@rmdir /s/q buildtemp

LIB : do_nothing

CLEANLIB : do_nothing

RESOURCE : do_nothing

FREEZE : do_nothing

SAVESPACE : do_nothing

RELEASABLES :
	@echo ..\..\..\..\uiresources_plat\cdl_api\inc\userpckg.cdl.h
	@echo ..\..\..\..\uiresources_plat\cdl_api\inc\userpckg.cdl.common.h

FINAL : do_nothing
