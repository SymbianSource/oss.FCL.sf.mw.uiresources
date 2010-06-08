#
# Copyright (c) 2006, 2009 Nokia Corporation and/or its subsidiary(-ies).
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
# Description:   use the CDL Compiler to process the CDL files, 
#  generating client headers and internal headers
#
TMPROOT:=$(subst \,/,$(EPOCROOT))
EPOCROOT:=$(patsubst %/,%,$(TMPROOT))/

MYSHELL:=$(notdir $(basename $(SHELL)))
include $(EPOCROOT)epoc32/tools/shell/$(MYSHELL).mk

CDLCOMPILER:=$(EPOCROOT)epoc32/tools/CdlCompiler.exe

do_nothing :
	@echo do_nothing

# Please note the CDLCOMPILER doesn't seems to accept the forward slashes below; 
# so just left without changing \ to /.
MAKMAKE : 
	$(CDLCOMPILER) client -p$(subst /,\,$(EPOCROOT)epoc32\include\platform\mw) $(subst /,\,$(EPOCROOT)epoc32\include\platform\mw\MifHeader.cdl)

BLD : do_nothing

CLEAN :
	-$(call remove,$(EPOCROOT)epoc32/include/platform/mw/mifheader.cdl.h)	
	-$(call remove,$(EPOCROOT)epoc32/include/platform/mw/mifheader.cdl.common.h)	
	-$(call remove,$(EPOCROOT)epoc32/include/platform/mw/mifheader.cdl.common.hrh)	

LIB : do_nothing

CLEANLIB : do_nothing

RESOURCE : do_nothing

FREEZE : do_nothing

SAVESPACE : do_nothing

RELEASABLES :
	@echo $(EPOCROOT)epoc32/include/platform/mw/mifheader.cdl.h
	@echo $(EPOCROOT)epoc32/include/platform/mw/mifheader.cdl.common.h
	@echo $(EPOCROOT)epoc32/include/platform/mw/mifheader.cdl.common.hrh

FINAL : do_nothing
