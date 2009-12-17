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
# AddPicto.pl
#
# Creates pictograph data (empty characters) in BDF format

use strict;

if (@ARGV != 4)
    {
    print "Usage: AddPicto.pl <filename> <pixel width> <start code> <end code>";
    exit( 0 );
    }

open (FILE, ">>$ARGV[0]") || die "Couldn't open $ARGV[0]\n";

my ($dwidth) = $ARGV[1];
my ($swidth) = int($dwidth * 1000 / 12 + 0.5);
my ($code) = hex($ARGV[2]);
my ($end) = hex($ARGV[3]);

while ($code <= $end )
    {
    my ($hexval) = sprintf("%X", $code);
    print FILE "STARTCHAR picto_$hexval\n";
    print FILE "ENCODING $code\n";
    print FILE "SWIDTH $swidth 0\n";
    print FILE "DWIDTH $dwidth 0\n";
    print FILE "BBX 0 0 0 2\n";
    print FILE "BITMAP\n";
    print FILE "ENDCHAR\n";
    $code++;
    }

close FILE;
exit( 0 );
