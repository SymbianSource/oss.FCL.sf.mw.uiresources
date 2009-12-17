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
# Description:  Copies zoom factor configuration file to ..\generated directory.
#               Zoom levels specified in LayoutZoomFactorConfig.txt are added 
#               to the layout dll
#

include layoutConfig.mk

do_nothing :
	@rem do_nothing

MAKMAKE : make_gen_dir
	@call perl -S ecopyfile.pl LayoutZoomFactorConfig.txt $(gen_dir)\LayoutZoomFactorConfig.txt

BLD : do_nothing

CLEAN :

LIB : do_nothing

CLEANLIB : do_nothing

RESOURCE : do_nothing

FREEZE : do_nothing

SAVESPACE : do_nothing

RELEASABLES : do_nothing

FINAL : do_nothing
