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

PARENT_DIR1 = $(CURDIR)\..\..\ 
PARENT_DIR  = $(subst /,\,$(PARENT_DIR1))
    
    
# set defaults for variables
RESOURCE_FILES_DIR=resource

# possible values: 'non_xip' or 'xip'
#
# This variable should be configured based on whether the device has XIP (NOR) or
# Non-XIP (NAND) ROM memory. It only affects the total memory consumption (ROM and RAM).
# To save ROM (but lose RAM), it can be set to 'non_xip' even if the device has XIP ROM. 
# For exact details, refer to the design document.
ROM_TYPE=non_xip


ifeq (WINS,$(findstring WINS, $(PLATFORM)))
TARGET_CORE_DIR=\epoc32\release\$(PLATFORM)\$(CFG)\z
else
TARGET_CORE_DIR=\epoc32\Data\z
endif
TARGETDIR=$(TARGET_CORE_DIR)\$(RESOURCE_FILES_DIR)

# generate final bitmap list
CONFIG_FILES:=$(notdir $(wildcard ../config/picto??.ini))
BITMAP_FILES:=$(CONFIG_FILES:picto%.ini=AknPictograph%.mbm)
BITMAP_MASK_FILES:=$(CONFIG_FILES:picto%.ini=AknPictographMask%.mbm)
FINAL_BITMAP_FILES:= \
	$(addprefix $(TARGETDIR)\,$(BITMAP_FILES)) \
	$(addprefix $(TARGETDIR)\,$(BITMAP_MASK_FILES))
FINAL_BITMAP_FILES_CLEAN:= \
	$(addprefix $(TARGET_CORE_DIR)\resource\,$(BITMAP_FILES)) \
	$(addprefix $(TARGET_CORE_DIR)\resource\,$(BITMAP_MASK_FILES))

$(TARGETDIR) :
	@if not exist $(TARGETDIR) md $(TARGETDIR)

BITMAPBUILDER :
	@.\AknPictographBitmapsBuild.cmd $(ROM_TYPE) "$(PARENT_DIR)" $(TARGETDIR)

do_nothing :
	@rem do_nothing

#
# The targets invoked by bld...
#

MAKMAKE : do_nothing

FINAL : do_nothing

BLD : do_nothing

SAVESPACE : do_nothing

RESOURCE : $(TARGETDIR) BITMAPBUILDER

CLEAN : 
	-@erase /q $(FINAL_BITMAP_FILES)
	-@erase /q $(FINAL_BITMAP_FILES_CLEAN)	
	@cd ..\tools\AknPictoBitmapBuilder\group&& \
	@abld reallyclean&& \
	@cd ..\..\..\group
	
	
FREEZE : do_nothing

LIB : do_nothing

CLEANLIB : do_nothing

RELEASABLES :
	@echo $(FINAL_BITMAP_FILES)
	
	
	

