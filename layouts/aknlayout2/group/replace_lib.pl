#
# Copyright (c) 2006 Nokia Corporation and/or its subsidiary(-ies).
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
# Description:  Create a copy of cdlengine.lib, in order to support compatibility for old layout system.
#

# Some Avkon components and applications still access the layout APIs by using the legacy 
# macros from the .lag file, which are supported by the AknLayout2 system. Part of the compatibility 
# support for that feature involves making the copy of CDLEngine.lib, as the original components 
# link to AknLayout.lib.

use File::Copy;

copy("$ARGV[0]/$ARGV[1]","$ARGV[0]/$ARGV[2]") or die "$ARGV[1] cannot be copied.";
