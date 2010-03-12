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
* Description:  Constants for compiler.
*
*/


#include <stdio.h>
#include <wchar.h>

#include "SDCGlobals.h"
#include "SDCIIDConstants.h"
#include "SDCInput.h"
#include "SDCCompat.h"

// Make std namespace available for compatibility
namespace std {}
using namespace std;

//////////////////////////////////////////////////////////////////////
// Globals
//////////////////////////////////////////////////////////////////////

vector<TSDCIIDEntry*> gIIDVector;

//////////////////////////////////////////////////////////////////////
// Constants
//////////////////////////////////////////////////////////////////////

struct TSDCIIDDefaultEntry
    {
    const wchar_t* iName;
    int iMajor;
    int iMinor;
    };

TSDCIIDDefaultEntry gDefaultIIDList[] = {
#include "AknsConvertedConstants_NR.inl"
    { NULL, 0, 0 }
    };

//////////////////////////////////////////////////////////////////////
// Methods
//////////////////////////////////////////////////////////////////////

void SDCIIDConstants::Initialize( const char* aFilename )
    {
    // Copy default items to the vector
    TSDCIIDDefaultEntry* defEntry = gDefaultIIDList;
    while( defEntry->iName )
        {
        TSDCIIDEntry* newEntry = new TSDCIIDEntry;
        wcscpy( newEntry->iName, defEntry->iName );
        newEntry->iMajor = defEntry->iMajor;
        newEntry->iMinor = defEntry->iMinor;
        gIIDVector.push_back( newEntry );

        defEntry = defEntry+1;
        }

    // If no file given, return
    if( (!aFilename) || (strlen(aFilename)<1) ) return;

    printf("NOTE: Reading item ID extensions from %s\n", aFilename );

    CSDCInput input;
    input.Open( aFilename );

    while( input.NextTokenAllowLF() )
        {
        if( sd_wcscasecmp( input.iToken, L"IID" ) == 0 )
            {
            // Parse string token
            input.NextStringToken();
            wchar_t nameBuf[256];
            wcscpy( nameBuf, input.iToken );
            // Parse major token
            input.NextToken();
            int major = input.ConvertToNumber( input.iToken );
            // Parse minor token
            input.NextToken();
            int minor = input.ConvertToNumber( input.iToken );

            TSDCIIDEntry* newEntry = new TSDCIIDEntry;
            wcscpy( newEntry->iName, nameBuf );
            newEntry->iMajor = major;
            newEntry->iMinor = minor;
            gIIDVector.push_back( newEntry );

            /*char debugBuf[512];
            CSDCInput::ConvertToAscii( debugBuf, nameBuf );
            printf("DEBUG: \"%s\" %i %i\n", debugBuf, major, minor );*/
            }
        else throw CSDCException( ESDCParseError, "IID token expected" );
        }

    printf("NOTE: Item ID extensions read and appended.\n\n");
    }

SDCIIDConstants::~SDCIIDConstants()
    {
    while( gIIDVector.size()>0 )
        {
        delete gIIDVector.back();
        gIIDVector.pop_back();
        }
    }

const TSDCIIDEntry* SDCIIDConstants::Find( const wchar_t* aName )
    {
    for( unsigned int i=0; i<gIIDVector.size(); i++ )
        {
        if( sd_wcscasecmp( aName, gIIDVector[i]->iName ) == 0 )
            return gIIDVector[i];
        }
    return NULL;
    }

const TSDCIIDEntry* SDCIIDConstants::FindPlain( const wchar_t* aName )
    {
    wchar_t buf[512];
    wcscpy( buf, L"KAknsIID" );
    wcscat( buf, aName );
    return Find( buf );
    }

const TSDCIIDEntry* SDCIIDConstants::FindBmpName( const wchar_t* aName )
    {
    wchar_t buf[512];

    wcscpy( buf, L"" );
    const wchar_t* p = aName;

    // Strip the separator to allow compound members to be named correctly
    const wchar_t* separator = wcsstr( aName, L"%" );
    if( separator )
        {
        char warningBuf[512];
        CSDCInput::ConvertToAscii( warningBuf, aName );
        printf( "WARNING: Restriction stripped for IID match (%s)\n", warningBuf );
        p = separator + 1;
        }

    while( *p )
        {
        if( *p == L'.' ) break;
        if( *p != L'_' )
            {
            wcsncat( buf, p, 1 );
            }
        p = p+1;
        };
    return FindPlain( buf );
    }

// End of file
