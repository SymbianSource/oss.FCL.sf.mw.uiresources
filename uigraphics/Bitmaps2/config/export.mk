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
# Description:  uiresources_uigraphics_Bitmaps2's actual configuration export makefile
#

MAKEFILE = /sf/mw/uiresources/uigraphics/bitmaps2/config/export.mk
$(call push,MAKEFILE_STACK,$(MAKEFILE))


bitmaps_config 		:: bitmaps2-content
bitmaps2-content 	:  
	cd \epoc32\s60\bitmaps && unzip -o \sf\mw\uiresources\uigraphics\bitmaps2\data\bitmaps2.zip
	cd \epoc32\s60\bitmaps && unzip -o \sf\mw\uiresources\uigraphics\bitmaps2\data\a_h.zip


$(call popout,MAKEFILE_STACK) 
