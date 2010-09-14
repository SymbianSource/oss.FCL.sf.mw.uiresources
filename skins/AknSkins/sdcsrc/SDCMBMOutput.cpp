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
* Description:  Multipart bitmap file output.
*
*/

#include "SDCGlobals.h"
#include "SDCMBMOutput.h"
#include "SDCException.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CSDCMBMOutput::CSDCMBMOutput()
    {

    }

CSDCMBMOutput::~CSDCMBMOutput()
    {

    }

//////////////////////////////////////////////////////////////////////
// Other methods
//////////////////////////////////////////////////////////////////////

void CSDCMBMOutput::Output( CSDCData* aData, const char* aBaseName, const char* aBmconvTxtFilename )
    {
    FILE* file = fopen( aBmconvTxtFilename, "wt" );
    if( !file ) throw CSDCException( ESDCFileOpenError, "Text output file for bmconv can not be opened" );

    if( aData->IsScalable() )
        {
        fprintf( file, "-E\n" );
        }
    else
        {
        fprintf( file, "%s.mbm\n", aBaseName );
        }

    for( unsigned int i=0; i<aData->iMbmVector.size(); i++ )
        {
        TSDCMBMEntry* entry = aData->iMbmVector[i];
        if( (entry->iIndex>=16384) && (!aData->IsScalable()) )
            {
            throw CSDCException( ESDCContentError, "SVG icons require scalable skin" );
            }

        if( aData->IsScalable() )
            {
            switch( entry->iColorDepth )
                {
                case ESDCColorDepth1:   fprintf( file, "-1"   ); break;
                case ESDCColorDepth2:   fprintf( file, "-2"   ); break;
                case ESDCColorDepth4:   fprintf( file, "-4"   ); break;
                case ESDCColorDepth8:   fprintf( file, "-8"   ); break;
                case ESDCColorDepthC4:  fprintf( file, "-c4"  ); break;
                case ESDCColorDepthC8:  fprintf( file, "-c8"  ); break;
                case ESDCColorDepthC12: fprintf( file, "-c12" ); break;
                case ESDCColorDepthC16: fprintf( file, "-c16" ); break;
                case ESDCColorDepthC24: fprintf( file, "-c24" ); break;
                case ESDCColorDepthC32: fprintf( file, "-c32" ); break;
                default:
                    throw CSDCException( ESDCUnknownError, "Unknown color depth value used internally" );
                }
            switch( entry->iMaskColorDepth )
                {
                case ESDCColorDepthNone: break;
                case ESDCColorDepth1: fprintf( file, ",1" ); break;
                case ESDCColorDepth2: fprintf( file, ",2" ); break;
                case ESDCColorDepth4: fprintf( file, ",4" ); break;
                case ESDCColorDepth8: fprintf( file, ",8" ); break;
                default:
                    throw CSDCException( ESDCUnknownError, "Unknown color depth value used internally" );
                }
            fprintf( file, " " );
            if ( entry->iSvgAnim )
                {
                fprintf( file, "-A " );
                }
            char pathBuf[512];
            gInput.ConvertToAscii( pathBuf, entry->iSourcePath );
            char buf[512];
            gInput.ConvertToAscii( buf, entry->iSourceFilename );
            fprintf( file, "%s%s\n", pathBuf, buf );
            }
        else
            {
            switch( entry->iColorDepth )
                {
                case ESDCColorDepth1:   fprintf( file, "-1"   ); break;
                case ESDCColorDepth2:   fprintf( file, "-2"   ); break;
                case ESDCColorDepth4:   fprintf( file, "-4"   ); break;
                case ESDCColorDepth8:   fprintf( file, "-8"   ); break;
                case ESDCColorDepthC4:  fprintf( file, "-c4"  ); break;
                case ESDCColorDepthC8:  fprintf( file, "-c8"  ); break;
                case ESDCColorDepthC12: fprintf( file, "-c12" ); break;
                case ESDCColorDepthC16: fprintf( file, "-c16" ); break;
                case ESDCColorDepthC24: fprintf( file, "-c24" ); break;
                case ESDCColorDepthC32: fprintf( file, "-c32" ); break;
                default:
                    throw CSDCException( ESDCUnknownError, "Unknown color depth value used internally" );
                }
            char pathBuf[512];
            gInput.ConvertToAscii( pathBuf, entry->iSourcePath );
            char buf[512];
            gInput.ConvertToAscii( buf, entry->iSourceFilename );
            fprintf( file, "%s%s\n", pathBuf, buf );

            switch( entry->iMaskColorDepth )
                {
                case ESDCColorDepthNone: continue;
                case ESDCColorDepth1: fprintf( file, "-1" ); break;
                case ESDCColorDepth2: fprintf( file, "-2" ); break;
                case ESDCColorDepth4: fprintf( file, "-4" ); break;
                case ESDCColorDepth8: fprintf( file, "-8" ); break;
                default:
                    throw CSDCException( ESDCUnknownError, "Unknown color depth value used internally" );
                }
            gInput.ConvertToAscii( pathBuf, entry->iSourcePath );
            gInput.ConvertToAscii( buf, entry->iMaskSourceFilename );
            fprintf( file, "%s%s\n", pathBuf, buf );
            }
        }

    fclose( file );
    }

// End of file
