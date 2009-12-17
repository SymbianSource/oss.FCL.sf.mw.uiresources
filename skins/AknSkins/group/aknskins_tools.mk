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
    curpath = $(CURDIR) 
    curpath2 = $(subst :, ,$(curpath)) 
    curpath3 = $(word $(words $(curpath2)),$(curpath2))
    curpath4 = $(subst /,\,$(curpath3))
    
do_nothing :
	@rem do_nothing

MAKMAKE :
    @perl editmakefile.pl "\epoc32\BUILD$(curpath4)\AKNSKINDESCCOMPILER\TOOLS\AKNSKINDESCCOMPILER.TOOLS" "CLFLAGS = "
	  @perl editmakefile.pl "\epoc32\BUILD$(curpath4)\AKNSKINDESCCOMPILER_NR\TOOLS\AKNSKINDESCCOMPILER_NR.TOOLS" "CLFLAGS = "
	  @perl editmakefile.pl "\epoc32\BUILD\S60\MW\UIRESOURCES\SKINS\GROUP\AKNSKINDESCCOMPILER\TOOLS\AKNSKINDESCCOMPILER.TOOLS" "CLFLAGS = "
	  @perl editmakefile.pl "\epoc32\BUILD\S60\MW\UIRESOURCES\SKINS\GROUP\AKNSKINDESCCOMPILER_NR\TOOLS\AKNSKINDESCCOMPILER_NR.TOOLS" "CLFLAGS = "
	  @perl editmakefile.pl "\epoc32\BUILD\S60\MW\UIRESOURCES\GROUP\AKNSKINDESCCOMPILER\TOOLS\AKNSKINDESCCOMPILER.TOOLS" "CLFLAGS = "
	  @perl editmakefile.pl "\epoc32\BUILD\S60\MW\UIRESOURCES\GROUP\AKNSKINDESCCOMPILER_NR\TOOLS\AKNSKINDESCCOMPILER_NR.TOOLS" "CLFLAGS = "
	
BLD : do_nothing

CLEAN : do_nothing

LIB : do_nothing

CLEANLIB : do_nothing

RESOURCE : do_nothing

FREEZE : do_nothing

SAVESPACE : do_nothing

RELEASABLES : do_nothing

FINAL : do_nothing

