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

if ($#ARGV != 2)
    {
    die "usage: iconlist iconloads out-file\n";
    }

my %iconList = ReadIconList($ARGV[0]);
my @iconLoads = ReadIconLoads($ARGV[1]);

my @result;
my $count = 0;
open (OUTFILE, ">$ARGV[2]") || die "Couldn't open $ARGV[2] for output\n";
for my $k (0 .. $#iconLoads)
    {
    my $name = $iconLoads[$k][0];
    my $bitmapId = 16384+$iconLoads[$k][1];
    my $maskId = 16384+$iconLoads[$k][2];
    
    $result[$count][2] = $name;
    $result[$count][3] = $bitmapId;
    $result[$count][4] = $maskId;
    $result[$count][5] = $iconLoads[$k][3];
    $result[$count][6] = $iconLoads[$k][4];
    $result[$count][7] = $iconLoads[$k][5];
    $result[$count][8] = $iconLoads[$k][6];
    $result[$count][9] = $iconLoads[$k][7];
    if (exists $iconList{$name}{$bitmapId})
        {
        #print "$name,$bitmapId\n";
        my $major = $iconList{$name}{$bitmapId}[1];
        my $minor = $iconList{$name}{$bitmapId}[2];
        $result[$count][0] = $major;
        $result[$count][1] = $minor;
        if ($name eq "series60skin")
            {
            #try to find out fallback file
            my $mask = 0;
            if ($result[$count][4] >= 0)
                {
                $mask = 1;
                }
            $result[$count][2] = "";
            $result[$count][3] = -1;
            $result[$count][4] = -1;
            foreach my $f (keys %iconList)
                {
                if ($f eq "series60skin")
                    {
                    }
                else
                    {
                    for my $id ( keys %{ $iconList{$f} } )
                        {
                        if (($iconList{$f}{$id}[1] eq $major) && ($iconList{$f}{$id}[2] eq $minor))
                            {
                            $result[$count][2] = $f;
                            $result[$count][3] = $id;
                            if ($mask)
                                {
                                $result[$count][4] = $id + 1;
                                }
                            }
                        }
                    }
                }
            }
        $count += 1;
        }
    else
        {
        $result[$count][0] = -1;
        $result[$count][1] = -1;
        if ($name eq "series60skin")
            {
            print "skin ID not found from $name,$bitmapId, cannot store to precache\n";
            }
        else
            {
            print "skin ID not found from $name,$bitmapId\n";
            $count += 1;
            }
        }
    }

for my $k (0 .. $#result)
    {
    if ($result[$count][8] == 0 && $result[$count][9] == 0) # rotation and color
        {
        if (length($result[$k][2]) > 0)
            {
            my $temp = $result[$k][2];
            if ($temp eq "avkon")
                {
                $temp = "avkon2";
                }
            $result[$k][2] = "z:\\\\resource\\\\apps\\\\" . $temp . ".mif";
            }
        print OUTFILE "ICON2\n";
        print OUTFILE "    {\n";
        print OUTFILE "    skin_id_major = $result[$k][0];\n";
        print OUTFILE "    skin_id_minor = $result[$k][1];\n";
        print OUTFILE "    fallback_icon_file = \"$result[$k][2]\";\n";
        print OUTFILE "    fallback_icon_id = $result[$k][3];\n";
        print OUTFILE "    fallback_mask_id = $result[$k][4];\n";
        print OUTFILE "    icon_width = $result[$k][5];\n";
        print OUTFILE "    icon_height = $result[$k][6];\n";
        print OUTFILE "    icon_mode = $result[$k][7];\n";
        print OUTFILE "    },\n";
        }
    }

close OUTFILE;
exit(0);

sub ReadIconList
    {
    my $file = shift;
    my %iconList;
    open (INFILE, "<$file") || die "Couldn't open $file for input\n";
    my $line = <INFILE>; # ignore heading line
    while ($line=<INFILE>)
        {
        chomp($line);
        my @array = split(/,/,$line);
        my $iconId = $array[0];
        my $name = lc($array[1]);
        if ($name =~ m/\Aseries60skin/)
            {
            $name = "series60skin";
            }
        else
            {
            if ($name =~ m/(\S+)\.(\S+)/) #remove extension
                {
                $name =$1;
                }
            }
        $iconList{$name}{$iconId}[0] = $array[2]; # filename
        $iconList{$name}{$iconId}[1] = $array[3]; # major id
        $iconList{$name}{$iconId}[2] = $array[4]; # minor id
        #print "add,$name,$iconId\n";
        }
    close INFILE;
    return %iconList;
    }

sub ReadIconLoads
    {
    my $file = shift;
    my @iconLoads;
    open (INFILE, "<$file") || die "Couldn't open $file for input\n";
    my $count = 0;
    while ($line=<INFILE>)
        {
        $line =~ s/'//g;
        if ($line =~ m/AKNICON load,(.*)/)
            {
            my @array = split(/,/,$1);
            my $name = lc($array[0]);
            ($name,my $path) = SplitPath($name);
            if ($name =~ m/(\S+)\.(\S+)/) #remove extension
                {
                $name =$1;
                }
            if ($name eq "avkon2")
                {
                $name = "avkon";
                }
            $iconLoads[$count][0] = $name;
            $iconLoads[$count][1] = $array[1];
            $iconLoads[$count][2] = $array[2];
            $iconLoads[$count][3] = $array[3]; #width
            $iconLoads[$count][4] = $array[4]; #height
            $iconLoads[$count][5] = $array[5];
            $iconLoads[$count][6] = $array[6];
            $iconLoads[$count][7] = $array[7];
            $iconLoads[$count][8] = $array[8]; # DisableCompression

            if ($iconLoads[$count][6] != 0)
                {
                print "cannot precache because rotation is not zero, rotation = $iconLoads[$count][6]\n";
                }
            elsif ($iconLoads[$count][7] != 0)
                {
                print "cannot precache because color is not zero, color = $iconLoads[$count][7]\n";
                }
            elsif ($iconLoads[$count][8])
                {
                print "cannot precache because compression is disabled, compression = $iconLoads[$count][8]\n";
                }
            elsif ($iconLoads[$count][3] == 0 || $iconLoads[$count][4] == 0)
                {
                print "cannot precache because icon size is zero, width = $iconLoads[$count][3], height = $iconLoads[$count][4]\n";
                }
            else
                {
                $count++;
                }
            }
        }
    close INFILE;
    return @iconLoads;
    }

# take a full path name as input, return name and path
sub SplitPath {
    if ($_[0] =~ m/\\((\w|[.]|[-])+)(\z)/)
        {
        return $1,$`;
        }
    else
        {
        return $_[0];
        }
    }