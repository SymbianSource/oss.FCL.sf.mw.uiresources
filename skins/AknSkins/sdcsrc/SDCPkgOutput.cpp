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
* Description:  Package output.
*
*/

#include "SDCGlobals.h"
#include "SDCPkgOutput.h"
#include "SDCException.h"
#include "SDCInput.h"
#include "aknsconstants.hrh"
#include "SDCCompat.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CSDCPkgOutput::CSDCPkgOutput()
    {

    }

CSDCPkgOutput::~CSDCPkgOutput()
    {

    }

//////////////////////////////////////////////////////////////////////
// Other methods
//////////////////////////////////////////////////////////////////////

void CSDCPkgOutput::Output( CSDCData* aData, const char* aSkinName,
    const char* aPkgFilename, const char* aDrmDefFilename )
    {
    bool drm = false;
    if( aDrmDefFilename && (strlen(aDrmDefFilename)>0) )
        {
        drm = true;
        }

    TSDCPID storagePid = aData->iParentPid;
    if( (storagePid.iPID1==0) && (storagePid.iPID2==0) )
        {
        storagePid = aData->iPid;
        }

    FILE* file = fopen( aPkgFilename, "wt" );
    if( !file ) throw CSDCException( ESDCFileOpenError, "Can not open PKG output file for writing" );

    FILE* drmFile = NULL;
    if( drm )
        {
        drmFile = fopen( aDrmDefFilename, "wt" );
        if( !drmFile ) throw CSDCException( ESDCFileOpenError, "Can not open DRM def output file for writing" );

        fprintf( drmFile, "skin\n");
        }

    fprintf( file, "; File created with SkinCompiler v%i.%i.%i\n;\n", gPlatformMajor, gPlatformMinor, gVersionMinor );
    fprintf( file, ";\n; Installation file for %s skin\n;\n", aSkinName );
    fprintf( file, "&EN\n" );

    fprintf( file, ";\n; Package header\n;\n" );

    // real uid is given, assume signed package generation
    if( aData->iPid.iPID2 == 0 )
        {
        fprintf( file, "#{\"%s\"},(%#010x),1,0,0\n", aSkinName, aData->iPid.iPID1 );
        }
    else
        {
        fprintf( file, "#{\"%s\"},(0xA00000EB),1,0,0,TYPE=SP\n", aSkinName );
        }
    fprintf( file, ";\n; Supports Series 60 v3.x\n; This line indicates that this installation is for the Series 60 platform v3.x\n; This line must appear _exactly_ as shown below in the sis file\n; If this line is missing or incorrect, the sis file will not be able\n; to be installed on Series 60 v3.x platforms\n;\n" );
    fprintf( file, "[0x101f7961], 0, 0, 0, {\"Series60v3.0\"}\n" );
    fprintf( file, ";\n; Supports Series 60 v5.x\n; This line indicates that this installation is for the Series 60 platform v5.x\n; This line must appear _exactly_ as shown below in the sis file\n; If this line is missing or incorrect, the sis file will not be able\n; to be installed on Series 60 v5.x platforms\n;\n" );
    fprintf( file, "[0x1028315F], 0, 0, 0, {\"Series60v5.0\"}\n" );
    fprintf( file, ";\n; Requires Series 60 Skins Support\n;\n" );
    fprintf( file, "(0xA00000EB), 0, 0, 0, {\"Series60SkinsSupport\"}\n");

    if( aData->IsScalable() )
        {
        fprintf( file, ";\n; Requires Series 60 Scalable Skins Support\n;\n" );
        fprintf( file, "(0x10207113), 0, 0, 0, {\"Series60ScalableSkinsSupport\"}\n");
        }


    fprintf( file, ";\n; Non-localised vendor name\n;\n" );
    if (wcslen(aData->iAuthor) == 0)
    {
        fprintf( file, ":\"Unknown Vendor\"\n" );
    }
    else
    {
        char vendorBuf[512];
        CSDCInput::ConvertToAscii( vendorBuf, aData->iAuthor );
        fprintf( file, ":\"%s\"\n", vendorBuf );
    }

    fprintf( file, ";\n; Localised vendor name\n;\n" );
    fprintf( file, "%%{\"Vendor-EN\"}\n" );

    fprintf( file, ";\n; Files to install\n;\n");

    char trgPath[256];

    if( storagePid.iPID2 == 0 )
        {
        sprintf( trgPath, "!:\\resource\\skins\\%08x", storagePid.iPID1 );
        }
    else
        {
        sprintf( trgPath, "!:\\resource\\skins\\%08x%08x", storagePid.iPID1, storagePid.iPID2 );
        }

    fprintf( file, "\"%s.mbm\" - \"%s\\%s.mbm\"\n", aSkinName, trgPath, aSkinName );
    if( aData->IsScalable() )
        {
        fprintf( file, "\"%s.mif\" - \"%s\\%s.mif\"\n", aSkinName, trgPath, aSkinName );
        }

    if( storagePid.iPID2 == 0 )
        {
        sprintf( trgPath, "!:\\private\\10207114\\import\\%08x", storagePid.iPID1 );
        }
    else
        {
        sprintf( trgPath, "!:\\private\\10207114\\import\\%08x%08x", storagePid.iPID1, storagePid.iPID2 );
        }

    if( drm )
        {
        fprintf( file, ";SKN file %s.skn moved to DRM definition file\n", aSkinName );
        fprintf( drmFile, "%s.skn\n", aSkinName );
        }
    else
        {
        fprintf( file, "\"%s.skn\" - \"%s\\%s.skn\"\n", aSkinName, trgPath, aSkinName );
        }

    // Append a dummy ini file
    if( storagePid.iPID2 == 0 )
        {
        fprintf( file, ";Dummy entry for the possible skin .ini file, so that it gets removed on uninstall\n");
        fprintf( file, "\"\" - \"!:\\private\\10207114\\import\\%08x\\%08x.ini\",FN\n",storagePid.iPID1,storagePid.iPID1 );
        }
    else
        {
        fprintf( file, ";Dummy entry for the possible skin .ini file, so that it gets removed on uninstall\n");
        fprintf( file, "\"\" - \"!:\\private\\10207114\\import\\%08x%08x\\%08x%08x.ini\",FN\n",storagePid.iPID1,storagePid.iPID2,storagePid.iPID1,storagePid.iPID2 );
        }


    vector<wchar_t*> soundFiles;
    unsigned int i;
    for( i=0; i<aData->iStringDefVector.size(); i++ )
        {
        TSDCStringDef* entry = aData->iStringDefVector[i];
        if( entry->iIID.iMajor == EAknsMajorSound )
            {
            bool alreadyAppended = false;
            for( unsigned int a=0; a<soundFiles.size(); a++ )
                {
                if( ! sd_wcscasecmp( entry->iString, soundFiles[a] ) )
                    {
                    alreadyAppended = true;
                    }
                }
            if( !alreadyAppended )
                {
                soundFiles.push_back( entry->iString );
                }
            }
        }

    char buffer[512];
    for( i=0; i<soundFiles.size(); i++ )
        {
        if( i==0 )
            {
            fprintf( file, ";\n; Sound files\n;\n");
            }
        CSDCInput::ConvertToAscii( buffer, soundFiles[i] );
        if( drm )
            {
            fprintf( file, ";Sound file %s moved to DRM definition file\n", buffer );
            fprintf( drmFile, "%s\n", buffer );
            }
        else
            {
            fprintf( file, "\"%s\" - \"%s\\%s\"\n", buffer, trgPath, buffer );
            }
        }

    fprintf( file, ";\n; End of file\n;\n" );
    fclose( file );
    if( drmFile ) fclose( drmFile );

    }

// End of file
