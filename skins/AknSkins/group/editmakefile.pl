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
#print "$ARGV[0]\n";
#print "$ARGV[1]\n";
#print "$ARGV[2]\n";

open(FILE, "$ARGV[0]") or die "can't open file $ARGV[0] : $!\n";
while ($line = <FILE>)
	{
	$line = "$ARGV[2]\n" if $line =~ /^$ARGV[1]/;
	push(@newfile, $line);
	};

close(FILE);
#print "finished reading file.... now writing to file\n";
open(FILE2, ">$ARGV[0]") or die "can't write to file $ARGV[0] : $!\n";
foreach $part (@newfile)
	{
	print FILE2 "$part";
#print "$part";
	};
close(FILE2);

#print "FINISHED \n";

