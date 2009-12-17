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
#    Extracts the zip files located under \s60\Bitmaps2
#

# NOT USED ANYMORE, extracting happens in export phase.

# I had to use forward slash / instead of back slash \.
# Back slash didn't work because it resulted in
# \s60\Bitmaps2\data*.zip which break the whole unzip process
CONFIGURE :
	@unzip -o -qq ../data/*.zip -d ..

	@if not exist "\epoc32" md "\epoc32"
	@if not exist "\epoc32\s60" md "\epoc32\s60"
	@if not exist "\epoc32\s60\bitmaps" md "\epoc32\s60\bitmaps"
	unzip -o -qq ../data/*.zip -d \epoc32\s60\bitmaps

do_nothing :
	@rem do_nothing

#
# The targets invoked by bld...
#

MAKMAKE : do_nothing

FINAL : do_nothing

BLD : do_nothing

SAVESPACE : do_nothing

RESOURCE : CONFIGURE

CLEAN : do_nothing

FREEZE : do_nothing

LIB : do_nothing

CLEANLIB : do_nothing

RELEASABLES : do_nothing

