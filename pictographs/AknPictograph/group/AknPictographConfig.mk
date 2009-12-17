#
# Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
#    Builds pictograph bitmaps.
#
CONFIG_DIR=vodafone

# Dir for generated files
GENERATED_DIR=..\generated

#Dummy text
DUMMY_TEXT=// Don't delete this file! Will be overridden during build.

CONFIGURE :
	@perl AknPictographConfig.pl $(CONFIG_DIR)

# This dummy filecreation is needed to avoid makefile dependency problems
# The valid files will be generated later during the build process	
FILE_EXPORT :
	@if not exist $(GENERATED_DIR) md $(GENERATED_DIR)
	@echo $(DUMMY_TEXT) > $(GENERATED_DIR)\AknPictographDefinitions.h
	@echo $(DUMMY_TEXT) > $(GENERATED_DIR)\AknPictographRange.h
	@echo $(DUMMY_TEXT) > $(GENERATED_DIR)\aknpictographconfig.h	

do_nothing :
	@rem do_nothing

#
# The targets invoked by bld...
#

MAKMAKE : do_nothing

FINAL : do_nothing

BLD : do_nothing

SAVESPACE : do_nothing

RESOURCE : $(TARGETDIR) FILE_EXPORT CONFIGURE


CLEAN_GENERATED_DIR : 
	-@erase /q $(GENERATED_DIR)\*.*

CLEAN : CLEAN_GENERATED_DIR FILE_EXPORT

FREEZE : do_nothing

LIB : do_nothing

CLEANLIB : do_nothing

RELEASABLES : do_nothing

