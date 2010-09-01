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

# ======================================================================
# Makefile for Jing Skin
# ======================================================================

# Name of the skin (used in source filename and directories)
AKNSSKINNAME = jing
# Real name (used in file names)
AKNSSKINREALNAME = jing
# UID of the skin (used in directory and file names)
AKNSSKINUID = 2000B12E

# ======================================================================
# Usually nothing to change below this line
# Makefile template: (special, scalable skin located in ROM)
# ======================================================================

AKNSSRCDIR = ..\srcdata\$(AKNSSKINNAME)
AKNSGENDIR = ..\..\generated\$(AKNSSKINNAME)
EMPTYFILE = ..\..\group\EmptyFile.dat

AKNSDATAGENDIR = $(AKNSGENDIR)\data

AKNSCOMPILER = \epoc32\tools\AknSkinDescCompiler_NR
ERASE = @erase 2>>nul
UNZIP = @unzip -o -qq

USERELEASETREE = NO

ifeq "WINS" "$(PLATFORM)"
USERELEASETREE = YES
endif
ifeq "WINSCW" "$(PLATFORM)"
USERELEASETREE = YES
endif

ifeq "YES" "$(USERELEASETREE)"
ifeq "UDEB" "$(CFG)"
AKNSTARGETDIR = \epoc32\release\$(PLATFORM)\udeb\z\private\10207114\import\$(AKNSSKINUID)
AKNSBMPTARGETDIR = \epoc32\release\$(PLATFORM)\udeb\z\resource\skins\$(AKNSSKINUID)
else
AKNSTARGETDIR = \epoc32\release\$(PLATFORM)\urel\z\private\10207114\import\$(AKNSSKINUID)
AKNSBMPTARGETDIR = \epoc32\release\$(PLATFORM)\urel\z\resource\skins\$(AKNSSKINUID)
endif
else
AKNSTARGETDIR = \epoc32\data\z\private\10207114\import\$(AKNSSKINUID)
AKNSBMPTARGETDIR = \epoc32\data\z\resource\skins\$(AKNSSKINUID)
endif

do_nothing :
	@rem do_nothing

MAKMAKE :
	cd $(AKNSSRCDIR) && \
	$(UNZIP) "$(AKNSSKINREALNAME).zip" && \
	perl -S emkdir.pl $(AKNSGENDIR) && \
	perl -S emkdir.pl $(AKNSDATAGENDIR) && \
	perl -S emkdir.pl $(AKNSTARGETDIR) && \
	perl -S emkdir.pl $(AKNSBMPTARGETDIR) && \
	$(AKNSCOMPILER) -m$(AKNSDATAGENDIR) -t$(AKNSDATAGENDIR) $(AKNSSKINNAME).txt $(AKNSSKINREALNAME)

BLD : do_nothing

CLEAN :
	cd $(AKNSSRCDIR) && \
	$(ERASE) "$(AKNSDATAGENDIR)\$(AKNSSKINREALNAME)_MIFList.txt" && \
	$(ERASE) "$(AKNSDATAGENDIR)\$(AKNSSKINREALNAME).mbm" && \
	$(ERASE) "$(AKNSDATAGENDIR)\$(AKNSSKINREALNAME).mif" && \
	$(ERASE) "$(AKNSDATAGENDIR)\$(AKNSSKINREALNAME).skn" && \
	$(ERASE) "$(AKNSDATAGENDIR)\$(AKNSSKINREALNAME).pkg" && \
	$(ERASE) "$(AKNSDATAGENDIR)\$(AKNSSKINREALNAME).sis" && \
	$(ERASE) "$(AKNSTARGETDIR)\$(AKNSSKINREALNAME).sis" && \
	$(ERASE) "$(AKNSBMPTARGETDIR)\$(AKNSSKINREALNAME).mbm" && \
    $(ERASE) "$(AKNSBMPTARGETDIR)\$(AKNSSKINREALNAME).mif"
	

LIB : do_nothing

CLEANLIB : do_nothing

RESOURCE :
	cd $(AKNSSRCDIR) && \
	perl -S ecopyfile.pl $(EMPTYFILE) $(AKNSSKINREALNAME).mbm && \
	perl -S ecopyfile.pl $(EMPTYFILE) $(AKNSSKINREALNAME).mif && \
	mifconv $(AKNSSKINREALNAME).mif /F$(AKNSDATAGENDIR)\$(AKNSSKINREALNAME)_MIFList.txt && \
	perl -S ecopyfile.pl $(AKNSSKINREALNAME).mbm $(AKNSDATAGENDIR)\$(AKNSSKINREALNAME).mbm && \
	perl -S ecopyfile.pl $(AKNSSKINREALNAME).mif $(AKNSDATAGENDIR)\$(AKNSSKINREALNAME).mif && \
	$(ERASE) $(AKNSSKINREALNAME).mbm && \
	$(ERASE) $(AKNSSKINREALNAME).mif

FREEZE : do_nothing

SAVESPACE : do_nothing

RELEASABLES : do_nothing

FINAL :
	cd $(AKNSSRCDIR) && \
	perl -S emkdir.pl $(AKNSTARGETDIR)  && \
	perl -S ecopyfile.pl $(AKNSDATAGENDIR)\$(AKNSSKINREALNAME).mbm $(AKNSBMPTARGETDIR)\$(AKNSSKINREALNAME).mbm && \
	perl -S ecopyfile.pl $(AKNSDATAGENDIR)\$(AKNSSKINREALNAME).mif $(AKNSBMPTARGETDIR)\$(AKNSSKINREALNAME).mif && \
	perl -S ecopyfile.pl $(AKNSDATAGENDIR)\$(AKNSSKINREALNAME).skn $(AKNSTARGETDIR)\$(AKNSSKINREALNAME).skn
