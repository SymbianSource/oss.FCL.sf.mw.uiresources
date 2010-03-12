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
* Description:  Debugging output.
*
*/

#include "SDCGlobals.h"
#include "SDCDebugOutput.h"

#include <stdio.h>
#include <wchar.h>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CSDCDebugOutput::CSDCDebugOutput()
    {
    }

CSDCDebugOutput::~CSDCDebugOutput()
    {
    }

//////////////////////////////////////////////////////////////////////
// Other methods
//////////////////////////////////////////////////////////////////////

void CSDCDebugOutput::Output( CSDCData* aData )
    {
    unsigned int i;

    wprintf(L"\nSkin content\n");
    wprintf(L"  PID=0x%08x 0x%08x\n", aData->iPid.iPID2, aData->iPid.iPID1 );
    wprintf(L"  Type=%i\n", aData->iSkinType);
    for( i=0; i<aData->iNameVector.size(); i++ )
        {
        wprintf(L"  %i=\"%s\"\n", aData->iNameVector[i]->iLanguageID, aData->iNameVector[i]->iName );
        }

    wprintf(L"MBM file\n");

    for( i=0; i<aData->iMbmVector.size(); i++ )
        {
        TSDCMBMEntry* entry = aData->iMbmVector[i];
        wprintf(L"  %i %s\n", entry->iColorDepth, entry->iSourceFilename );
        }

    wprintf(L"Bitmap definitions\n");

    for( i=0; i<aData->iBitmapDefVector.size(); i++ )
        {
        TSDCBitmapDef* entry = aData->iBitmapDefVector[i];
        wprintf(L"  (0x%x,0x%x) = %i,%i [%i coords=(%i,%i) size=(%i,%i) align=%i] ",
            entry->iIID.iMajor, entry->iIID.iMinor,
            entry->iMBMIndex, entry->iMaskMBMIndex,
            entry->iAttributes.iAttributeFlags,
            entry->iAttributes.iCoordX, entry->iAttributes.iCoordY,
            entry->iAttributes.iSizeW, entry->iAttributes.iSizeH, entry->iAttributes.iAlignmentFlags );
        if( entry->iAppIconBitmap ) wprintf(L"(appicon)");
        wprintf(L"\n");
        }

    wprintf(L"Color table definitions\n");
    for( i=0; i<aData->iColorTableDefVector.size(); i++ )
        {
        TSDCColorTableDef* entry = aData->iColorTableDefVector[i];
        wprintf(L"  (0x%x,0x%x) = ", entry->iIID.iMajor, entry->iIID.iMinor );

        for( unsigned int a=0; a<entry->iColors.size(); a++ )
            wprintf(L"[%i,0x%x] ", entry->iColors[a].iIndex, entry->iColors[a].iRgb );

        wprintf(L"\n");
        }

    wprintf(L"Frame definitions\n");
    for( i=0; i<aData->iFrameDefVector.size(); i++ )
        {
        TSDCFrameDef* entry = aData->iFrameDefVector[i];
        wprintf(L"  (0x%x,0x%x) = ", entry->iIID.iMajor, entry->iIID.iMinor );

        for( unsigned int a=0; a<entry->iElements.size(); a++ )
            wprintf(L"[0x%x,0x%x] ", entry->iElements[a].iMajor, entry->iElements[a].iMinor );

        wprintf(L"\n");
        }

    wprintf(L"Application icon  definitions\n");
    for( i=0; i<aData->iAppIconDefVector.size(); i++ )
        {
        TSDCAppIconDef* entry = aData->iAppIconDefVector[i];
        wprintf(L"  (0x%x,0x%x) = ", entry->iIID.iMajor, entry->iIID.iMinor );

        for( unsigned int a=0; a<entry->iIcons.size(); a++ )
            wprintf(L"[0x%x,0x%x] ", entry->iIcons[a].iMajor, entry->iIcons[a].iMinor );

        wprintf(L"\n");
        }
    }

// End of file
