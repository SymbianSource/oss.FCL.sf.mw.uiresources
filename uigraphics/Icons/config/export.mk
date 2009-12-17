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
# Description:  uiresources_uigraphics_Icons's actual configuration export makefile
#

MAKEFILE = /sf/mw/uiresources/uigraphics/icons/config/export.mk
$(call push,MAKEFILE_STACK,$(MAKEFILE))

icons_config 	:: icons-content

icons-content :  
	cd \epoc32\s60\icons && unzip -o \sf\mw\uiresources\uigraphics\Icons\data\Skin_Green.zip
	cd \epoc32\s60\icons && unzip -o \sf\mw\uiresources\uigraphics\Icons\data\Icons.zip
	cd \epoc32\s60\icons && unzip -o \sf\mw\uiresources\uigraphics\Icons\data\A_H.zip



$(call popout,MAKEFILE_STACK) 
