/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
* Description: 
*
*/



// INCLUDE FILES
#include <mifconvdefs.h>
#include <bldvariant.hrh>
#include "AknIconFormatHandlerFactory.h"
#include "AknIconTraces.h"

#ifdef __SVGT
#include "AknSvgFormatHandler.h"
#endif // __SVGT
#include "AknNGAFormatHandler.h"

#ifdef __NVG
#include "AknNvgFormatHandler.h"
#endif // __NVG

// CONSTANTS

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// AknIconFormatHandlerFactory::NewIconFormatHandlerL
// -----------------------------------------------------------------------------
//
MAknIconFormatHandler* AknIconFormatHandlerFactory::NewIconFormatHandlerL(
    const TInt aType,TSize aBitmapSize,TDisplayMode aBitmapDspMode,TDisplayMode aMaskDspMode )
    {
    MAknIconFormatHandler* handler = NULL;

    switch ( aType )
        {
#ifdef __NVG
        case EIconFormatNVG:
            handler = CAknNvgFormatHandler::NewL();
            break;
#endif // __NVG
#ifdef __SVGT
        case EIconFormatSVG:
#ifndef __ONLYNGAICON
            handler = CAknSvgFormatHandler::NewL(EIconFormatSVG, aBitmapSize, aBitmapDspMode, aMaskDspMode);
            break;
#endif 
#endif // __SVGT
        case EIconFormatNGA:
            handler = CAknNGAFormatHandler::NewL(EIconFormatNGA, aBitmapSize, aBitmapDspMode, aMaskDspMode);
            break;
        default:
            break;
        }

    if ( !handler )
        {
        User::Leave( KErrNotSupported );
        }

    return handler;
    }

//  End of File  
