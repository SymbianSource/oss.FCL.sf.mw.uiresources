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
TMPROOT:=$(subst \,/,$(EPOCROOT))
EPOCROOT:=$(patsubst %/,%,$(TMPROOT))/

include $(EPOCROOT)epoc32/tools/shell/$(notdir $(basename $(SHELL))).mk

SOURCE_COPY=$(EPOCROOT)epoc32/release/$(PLATFORM)/$(CFG)/ELOCL.DLL
TARGET_COPY=$(EPOCROOT)epoc32/release/$(PLATFORM)/$(CFG)/ELOCL.LOC

$(TARGET_COPY) : $(SOURCE_COPY)
	$(call cpfeature,"$(SOURCE_COPY)","$(TARGET_COPY)")

MAKMAKE BLD SAVESPACE FREEZE LIB CLEANLIB RESOURCE :
	@echo Nothing to do for "$@"
	
CLEAN :
	-$(call remove,$(TARGET_COPY))

RELEASABLES :
	@echo $(TARGET_COPY)

LINT :
	echo Nothing to do

# it is safer to execute the command here since during the parallel build, it is possible that elocl.dll 
# may not be generated yet
FINAL : $(TARGET_COPY)
