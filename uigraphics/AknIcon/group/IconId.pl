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

my $KAknsConstants_h =   "\\epoc32\\include\\middleware\\AknsConstants.h";
my $KAknsConstants_hrh = "\\epoc32\\include\\middleware\\AknsConstants.hrh";

if ($#ARGV != 2)
    {
    die "usage: MIFList-file build-path out-file\n";
    }

my @mifList = ReadMifList($ARGV[0]);
my $path = $ARGV[1];
open (OUTFILE, ">$ARGV[2]") || die "Couldn't open $ARGV[2] for output\n";
print OUTFILE "Icon ID,file name,SVG name,Skin ID major,Skin ID minor\n";

(my $mifName,my $mifPath) = SplitPath($ARGV[0]);

my %skins = ReadAknsConstants_h($path.$KAknsConstants_h);
my %skinIDVals = ReadAknsConstants_hrh($path.$KAknsConstants_hrh);

for my $k (0 .. $#mifList)
    {
    (my $name,my $path) = SplitPath($mifList[$k]);
    my $iconId = 2* $k + 16384;
    $name =~ s/_//g;
    if ($name =~ m/(\S+)\.(\S+)/) #remove extension
        {
        $name =$1;
        }
    #print "$k,$name,$path\n";
    if (exists $skins{$name})
        {
        my $major = $skins{$name}[0];
        my $minor = $skins{$name}[1];
        my $majorVal = -1;
        if (exists $skinIDVals{$major})
            {
            $majorVal = $skinIDVals{$major};
            }
        else
            {
            print "not found major $major\n";
            }
        my $minorVal = -1;
        if (exists $skinIDVals{$minor})
            {
            $minorVal = $skinIDVals{$minor};
            }
        else
            {
            print "not found minor $minor\n";
            }
        printf(OUTFILE "%d,%s,%s,0x%x,0x%x\n",$iconId,$mifName,$mifList[$k],$majorVal,$minorVal);
        #print "found,$majorVal,$minorVal\n";
        }
    else
        {
        #print "not found $name\n";
        }
    }

my $incPath = $path . "\\epoc32\\include";
opendir DIR,$incPath;
my @files = readdir DIR;
foreach my $f (@files)
    {
    if ($f =~ /(\S+)\.mbg\z/i)
        {
        my $fName = lc(embm . $1);
        my %list = ReadMbg($incPath . "\\" . $f);
        foreach my $k (keys %list)
            {
            my $svgName = lc($k);
            my $iconId = $list{$k};
            my $ind = index($svgName,$fName);
            if ($ind >= 0)
                {
                $ind += length($fName);
                my $svg = substr($svgName,$ind);
                $svg =~ s/_//g;
                if (exists $skins{$svg})
                    {
                    my $major = $skins{$svg}[0];
                    my $minor = $skins{$svg}[1];
                    my $majorVal = -1;
                    if (exists $skinIDVals{$major})
                        {
                        $majorVal = $skinIDVals{$major};
                        }
                    else
                        {
                        print "not found major $major\n";
                        }
                    my $minorVal = -1;
                    if (exists $skinIDVals{$minor})
                        {
                        $minorVal = $skinIDVals{$minor};
                        }
                    else
                        {
                        print "not found minor $minor\n";
                        }
                    printf(OUTFILE "%d,%s,%s,0x%x,0x%x\n",$iconId,$f,$k,$majorVal,$minorVal);
                    #print "found,$majorVal,$minorVal\n";
                    }
                else
                    {
                    #print "not found $svg\n";
                    }
                }
            else
                {
                print "not found,$svgName,$fName\n";
                }
            }
        }
    }
close DIR;

    
close OUTFILE;

exit(0);

sub ReadMifList
    {
    my $file = shift;
    my @mifList;
    open (INFILE, "<$file") || die "Couldn't open $file for input\n";
    while (my $line=<INFILE>)
        {
        #if ($line =~ m/\S+\s+(\S+)(\.svg)/)
        if ($line =~ m/\S+\s+(\S+)/)
            {
            push(@mifList,$1);
            }
        #else
        #    {
        #    print "$line\n";
        #    }
        }
    close INFILE;
    return @mifList;
    }
    
sub ReadMbg
    {
    my $file = shift;
    my %mifList;
    open (INFILE, "<$file") || die "Couldn't open $file for input\n";
    while (my $line=<INFILE>)
        {
        if ($line =~ m/(\S+)\s*=\s*(\d+),/)
            {
            $mifList{$1}=$2;
            }
        #else
        #    {
        #    print "$line\n";
        #    }
        }
    close INFILE;
    return %mifList;
    }
    
sub ReadAknsConstants_h
    {
    my $file = shift;
    my %list;
    my $state = 0;
    my $name;
    open (INFILE, "<$file") || die "Couldn't open $file for input\n";
    while (my $line=<INFILE>)
        {
        if ($line =~ m/TAknsItemID\s+KAknsIID(\S+)\s*=/)
            {
            $state = 1;
            $name = lc($1);
            }
        else
            {
            if ($state == 1)
                {
                if ($line =~ m/\{\s*(\S+)\s*,\s*(\S+)\s*\}/)
                    {
                    $list{$name}[0] = $1;
                    $list{$name}[1] = $2;
                    }
                $state = 0;
                }
            }
        }
    close INFILE;
    return %list;
    }
    
sub ReadAknsConstants_hrh
    {
    my $file = shift;
    my %list;
    my $state = 0;
    my $name;
    open (INFILE, "<$file") || die "Couldn't open $file for input\n";
    while (my $line=<INFILE>)
        {
        if ($line =~ m/\s*(\S+)\s*=\s*(\S+)(,|\s+)/)
            {
            my $n = $1;
            my $val = hex($2);
            $list{$n} = $val;
            #print "$n,$val\n";
            }
        }
    close INFILE;
    return %list;
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
