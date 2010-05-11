/*
* Copyright (c) 2003-2008 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
*
* Description:  ?Description
*
*/


// INCLUDE FILES

#include <sys/time.h>
#include <unistd.h>
#include <cstdlib>
#include <string>

#include "SDCGlobals.h"
#include "SDCReader.h"
#include "SDCMBMOutput.h"
#include "SDCInlOutput.h"
#include "SDCBinOutput.h"
#include "SDCPkgOutput.h"
#include "SDCIIDConstants.h"
#include "SDCDebugOutput.h"
#include "SDCCompat.h"

// LOCAL VARIABLES

static char sourceFile[512];
static char skinName[512];
static char mbmPath[512];
static char sknPath[512];
static char dllPath[512];
static char iidFile[512];
static bool forceSystem = false;
static bool forceNormal = false;
static bool drmEnabled = false;

// SANITY CHECKS

// To ensure skin binary compatibility, 2.6 must NOT support
// scalable skins. Similarly, 2.8 and 3.0 must support scalable skins.
// 2.7 is considered a part of 2.8 branch.
//
// Do not change these (such a compiler is major compatibility risk).
// Alter your build configuration instead.
//
#if defined(__SERIES60_26__)
  #if defined(RD_ENHANCED_SKINNING) || defined(RD_SCALABLE_UI)
    #error S60 release 2.6 detected, but enhanced skinning or scalable UI is enabled! This combination is invalid, and would produce incompatible binaries.
  #endif
#endif
#if defined(__SERIES60_27__) || defined(__SERIES60_28__) || defined(__SERIES60_30__) || defined(__SERIES60_31__)
  #if !defined(RD_ENHANCED_SKINNING) || !defined(RD_SCALABLE_UI)
    #error S60 release 2.8/3.0 detected, but either enhanced skinning or scalable UI is not enabled! This combination is invalid, and would produce incompatible binaries.
  #endif
#endif

//////////////////////////////////////////////////////////////////////
// Functions
//////////////////////////////////////////////////////////////////////

void Syntax()
    {
    printf("Syntax: AknSkinDescCompiler [options] input skinname\n\n");
    printf("Where   options    [-mpath] [-tpath] [-spath] [-ifile]\n");
    printf("        input:     Input file in ASCII or UTF-16 format.\n");
    printf("                   Example: MySkin.txt\n");
    printf("        skinname:  Skin name used as filename prefix.\n");
    printf("                   Example: MySkin\n");
    printf("Options -mpath:    Path for MBM/MIF generation list.\n");
    printf("                   Example: -m..\\mbmlist\\\n");
    printf("        -tpath:    Path for SKN (and possible PKG) target.\n");
    printf("                   Example: -t..\\output\\\n");
    printf("        -spath:    Path for system skin CPP and MMP.\n");
    printf("                   Example: -s..\\dllsrc\\\n");
    printf("        -ifile:    Item ID extension list.\n");
    printf("                   Example: -iNewPhoneIIDs.txt\n");
    printf("        --drm      Suppress SKN and sounds from PKG file.\n");
    }

void AppendBackslash( char* aBuf )
    {
    if( strlen( aBuf ) > 0 )
        {
        if( aBuf[ strlen(aBuf)-1 ] != '/' ) strcat( aBuf, "/" );
        }
    }

bool ParseArguments( int argc, char** argv )
    {
    strcpy( sourceFile, "" );
    strcpy( skinName, "" );
    strcpy( mbmPath, "" );
    strcpy( sknPath, "" );
    strcpy( dllPath, "" );
    strcpy( iidFile, "" );

    int fileParam = 0;
    for( int i=1; i<argc; i++ )
        {
        if( sd_strcasecmp( "--drm", argv[i] ) == 0 )
            {
            drmEnabled = true;
            }
        else if( sd_strcasecmp( "--forcesystem", argv[i] ) == 0 )
            {
            forceSystem = true;
            }
        else if( sd_strcasecmp( "--forcenormal", argv[i] ) == 0 )
            {
            forceNormal = true;
            }
        else if( sd_strncasecmp( "-m", argv[i], 2 ) == 0 )
            {
            strcpy( mbmPath, argv[i]+2 );
            AppendBackslash( mbmPath );
            }
        else if( sd_strncasecmp( "-t", argv[i], 2 ) == 0 )
            {
            strcpy( sknPath, argv[i]+2 );
            AppendBackslash( sknPath );
            }
        else if( sd_strncasecmp( "-s", argv[i], 2 ) == 0 )
            {
            strcpy( dllPath, argv[i]+2 );
            AppendBackslash( dllPath );
            }
        else if( sd_strncasecmp( "-i", argv[i], 2 ) == 0 )
            {
            strcpy( iidFile, argv[i]+2 );
            }
        else
            {
            if( fileParam == 0 )
                {
                strcpy( sourceFile, argv[i] );
                fileParam++;
                }
            else if( fileParam == 1 )
                {
                strcpy( skinName, argv[i] );
                fileParam++;
                }
            }
        }

    if( fileParam != 2 ) return false;
    return true;
    }

//////////////////////////////////////////////////////////////////////
// GeneratePID
//////////////////////////////////////////////////////////////////////

void GeneratePID( CSDCData* data )
    {
	struct timeval sysTime;
	gettimeofday( &sysTime, NULL);
	// 100-nanosecond
	unsigned long long currentTime;
	// get the 100-nanosecond number at time of UTC
	currentTime = ( sysTime.tv_usec + mktime(gmtime(&sysTime.tv_sec)) * SEC_TO_USEC ) * USEC_TO_100NANOSEC;

	struct tm startTime;
	// initialize startTime
	memset(&startTime,0,sizeof(startTime));
	startTime.tm_year = 2003 - 1900;
	startTime.tm_mon = 0;
	startTime.tm_mday = 1;
	startTime.tm_hour = 0;
	startTime.tm_min = 0;
	startTime.tm_sec = 0;
	time_t secTime = mktime( &startTime );
	// 100-nanosecond
	unsigned long long epochTime;
	// get the 100-nanosecond number at time @20030101 00:00:00
	epochTime = ( secTime * SEC_TO_USEC ) * USEC_TO_100NANOSEC;

	unsigned long long timeStamp;
	timeStamp = currentTime - epochTime;
	timeStamp = timeStamp >> 20;

	unsigned int highPart = static_cast<unsigned int>((currentTime >> 32) );
	unsigned int lowPart = static_cast<unsigned int>( currentTime );
	srand( gInput.iHash ^ highPart ^ lowPart );

	// Timestamp
	data->iPid.iPID2 = static_cast<int>(timeStamp);
	if( data->iPid.iPID2 == 0 ) data->iPid.iPID2 += 1;

	// Random number
	data->iPid.iPID1 = rand();
	data->iPid.iPID1 = data->iPid.iPID1 << 8;
	data->iPid.iPID1 ^= rand();
	data->iPid.iPID1 = data->iPid.iPID1 << 8;
	data->iPid.iPID1 ^= rand();
	data->iPid.iPID1 = data->iPid.iPID1 << 8;
	data->iPid.iPID1 ^= rand();

    }

//////////////////////////////////////////////////////////////////////
// Main function
//////////////////////////////////////////////////////////////////////

int main( int argc, char** argv )
    {
    printf("======================================================================\n");
    printf("Skin Compiler v%i.%i.%i ("__DATE__") for S60 Platform.\nCopyright (c) 2003-2008 Nokia. All rights reserved.\n", gPlatformMajor, gPlatformMinor, gVersionMinor );
    printf("======================================================================\n");

    printf("\n");

    if( !ParseArguments( argc, argv ) )
        {
        Syntax();
        return 1;
        }

    try
        {
        SDCIIDConstants::Initialize( iidFile );
        }
    catch( CSDCException e )
        {
        e.Print();
        printf("\nItem ID extension list is invalid, INITIALIZATION FAILED!\n");
        return 3;
        }

    printf("Phase 0: Parameter summary.\n");
    printf("  Source file: %s\n", sourceFile );
    printf("  Skin name: %s\n", skinName );
    if( strlen(mbmPath)>0 ) printf("  MBM/MIF list path: %s\n", mbmPath );
    if( strlen(sknPath)>0 ) printf("  SKN output path: %s\n", sknPath );
    if( strlen(dllPath)>0 ) printf("  System skin output path: %s\n", dllPath );
    if( forceSystem ) printf("  Forcing skin type to be SYSTEM\n");
    if( forceNormal ) printf("  Forcing skin type to be NORMAL\n");
    if( drmEnabled ) printf("  DRM compatibility mode, PKG generation will be altered\n");


    CSDCData* data = NULL;
    bool error = false;
    try
        {
        data = new CSDCData();

        printf("\nPhase 1: Input parsing.\n");
        printf("  Opening source file %s ...\n", sourceFile );
        gInput.Open( sourceFile );
        printf("  Parsing file ...\n");
        data->SetBmpPath( L"./" );
        CSDCReader reader( data );
        reader.Parse();
        printf("  Completed.\n");
        gInput.iLineNumber = -1;

        if( forceSystem )
            {
            if( data->IsScalable() )
                printf("WARNING: Scalable skin, force parameter has no effect.\n");
            else
                data->iSkinType |= 0x1;
            }
        if( forceNormal )
            {
            if( data->IsScalable() )
                printf("WARNING: Scalable skin, force parameter has no effect.\n");
            else
                if( (data->iSkinType&0x1) != 0 ) data->iSkinType^=0x1;
            }

        bool systemSkin = false;
        printf("NOTE: Skintype: " );
        if( data->IsScalable() )
            {
            printf("Scalable ");
            }
        else if( (data->iSkinType & 0x1) != 0 )
            {
            printf("System ");
            systemSkin = true;
            }
        else
            {
            printf("Normal ");
            }
        if( (data->iSkinType & 0x2) != 0 )
            {
            printf("LangOverride=");
            switch( data->iSkinType & 0xff00 )
                {
                case 0x100: printf("AH "); break;
                default: printf("Unknown "); break;
                }

            printf("Parent=0x%08x 0x%08x", data->iParentPid.iPID2, data->iParentPid.iPID1 );
            }
        printf("\n");

        if( systemSkin )
            {
            throw new CSDCException( ESDCContentError, "System skins are no longer supported, please use scalable skin type instead" );
            }

        if( (data->iAHOverridePid.iPID1!=0) || (data->iAHOverridePid.iPID1!=0) )
            {
            printf("NOTE: Associated A&H override is: 0x%08x 0x%08x", data->iAHOverridePid.iPID2, data->iAHOverridePid.iPID1 );
            }

        if( (data->iPid.iPID1==0) && (data->iPid.iPID2==0) )
            {
            GeneratePID( data );
            printf("NOTE: Generated package ID for this skin is 0x%08x 0x%08x\n", data->iPid.iPID2, data->iPid.iPID1 );
            }


        printf("\nPhase 2: Output for MBM/MIF generation.\n");
        char namebuf[512];
        strcpy( namebuf, skinName );
        char namebuf2[512];
        strcpy( namebuf2, mbmPath );
        strcat( namebuf2, skinName );
        if( data->IsScalable() )
            {
            strcat( namebuf2, "_MIFList.txt" );
            }
        else
            {
            strcat( namebuf2, "_MBMList.txt" );
            }
        printf("  Writing MBM/MIF list for %s to %s ...\n", namebuf, namebuf2 );
        CSDCMBMOutput mbmOutput;
        mbmOutput.Output( data, namebuf, namebuf2 );
        printf("  Completed.\n");

        printf("\nPhase 3: Output for skin content.\n");
        if( systemSkin )
            {
            strcpy( namebuf, dllPath );
            strcat( namebuf, skinName );
            strcat( namebuf, "_ContentDLL.cpp" );
            strcpy( namebuf2, dllPath );
            strcat( namebuf2, skinName );
            strcat( namebuf2, "_ContentDLL.mmp" );
            printf("  Writing CPP and MMP files for %s to %s and %s ...\n", skinName, namebuf, namebuf2 );
            CSDCInlOutput inlOutput;
            inlOutput.Output( data, skinName, namebuf, namebuf2 );
            printf("  Completed.\n");
            }
        else
            {
            if( strlen(dllPath)>0 )
                {
                printf("WARNING: System skin CPP/MMP path not used.\n");
                }
            printf("  Skipping CPP and MMP file creation (non-system skin).\n");
            }

        strcpy( namebuf, sknPath );
        strcat( namebuf, skinName );
        strcat( namebuf, ".skn" );
        strcpy( namebuf2, skinName );
        printf("  Writing SKN file (that uses MBM/MIF %s) to %s ...\n", namebuf2, namebuf );
        CSDCBinOutput binOutput;
        binOutput.Output( data, namebuf2, namebuf, systemSkin );
        printf("  Completed.\n");

        if( !systemSkin )
            {
            strcpy( namebuf, sknPath );
            strcat( namebuf, skinName );
            strcat( namebuf, ".pkg" );
            if( drmEnabled )
                {
                strcpy( namebuf2, sknPath );
                strcat( namebuf2, "datafiles.def" );
                }
            else
                {
                strcpy( namebuf2, "" );
                }
            printf("  Writing PKG file for %s to %s ", skinName, namebuf );
            if( drmEnabled ) printf("\n    and DRM definition file to %s ", namebuf2 );
            printf("...\n" );
            CSDCPkgOutput pkgOutput;
            pkgOutput.Output( data, skinName, namebuf, namebuf2 );
            printf("  Completed.\n");
            }
        else
            {
            printf("  Skipping PKG file creation (system skin).\n");
            }
        }
    catch( CSDCException e )
        {
        printf("\n----------------------------------------------------------------------\n");

        e.Print();
        error = true;

        printf("----------------------------------------------------------------------\n");
        }
    delete data;

    printf("\n======================================================================\n");

    if( error )
        {
        printf("\nAborted, ERRORS ENCOUNTERED!\n");
        printf("\n======================================================================\n");
        return 2;
        }

    printf("\nCompleted successfully.\n");
    printf("\n======================================================================\n");
    return 0;
    }

// End of file
