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
# Description:  uses ecopyfile command to copy files for hand coded CDL 
#  instances. This is required as CDLCompiler requires all source to be in the same 
#  directory.
#

include layoutconfig.mk

$($(wildcard ../adaptationlayer/adaptation_layer_*))

ADAPTATIONLAYERFILES=$(notdir $(wildcard ../adaptationlayer/adaptation_layer_*))
$(ADAPTATIONLAYERFILES $(ADAPTATIONLAYERFILES))

$($(wildcard ../layoutmetadata/layoutmetadata*))
LAYOUTMETADATAFILES=$(notdir $(wildcard ../layoutmetadata/layoutmetadata*))
$(LAYOUTMETADATAFILES $(LAYOUTMETADATAFILES))

$(gen_dir $(gen_dir))

$(gen_dir)/% : ../adaptationlayer/%
	perl -S ecopyfile.pl $< $@

$(gen_dir)/% : ../layoutmetadata/%
	perl -S ecopyfile.pl $< $@

$(MAKMAKE : $(addprefix $(gen_dir)/,$(ADAPTATIONLAYERFILES) $(LAYOUTMETADATAFILES)))
MAKMAKE : $(addprefix $(gen_dir)/,$(ADAPTATIONLAYERFILES) $(LAYOUTMETADATAFILES))

BLD : ;

CLEAN :

LIB : ;

CLEANLIB : ;

RESOURCE : ;

FREEZE : ;

SAVESPACE : ;

RELEASABLES : ;

FINAL : ;
