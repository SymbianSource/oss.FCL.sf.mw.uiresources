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
#include <e32math.h>
#include <fbs.h>
#include <mifconvdefs.h> // For definition of EIconFormatNVG

#include "AknNvgFormatHandler.h"
#include "AknIconObserver.h"
#include "AknIconSrvPanic.h"
#include "AknIconTraces.h"
#include <flogger.h>
#include "AknIconManager.h"
#include "AknIconHeader.h"

// CONSTANTS


// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::CAknNvgFormatHandler
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknNvgFormatHandler::CAknNvgFormatHandler():iMode(EAspectRatioPreserved),iAngle(0)
	{
	iData = 0x00;
	}

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::ConstructL
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknNvgFormatHandler::ConstructL()
    {
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x Calling ConstructL - iSvgEngine: %x"), this, iSvgEngine);
#endif            
    }

CAknNvgFormatHandler* CAknNvgFormatHandler::NewL()
    {
    CAknNvgFormatHandler* self = new( ELeave ) CAknNvgFormatHandler();
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop();
    return self;
    }

// Destructor
CAknNvgFormatHandler::~CAknNvgFormatHandler()
    {
	iIconData.Close();
	delete iData;
    delete iDummyBitmap;
    delete iNvgEngine;
    }

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::SetScaleMode
// -----------------------------------------------------------------------------
//
void CAknNvgFormatHandler::SetScaleMode( TScaleMode aMode )
    {
    iMode = aMode;
    }

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::SetRotation
// -----------------------------------------------------------------------------
//
void CAknNvgFormatHandler::SetRotation( TInt aAngle )
    {
    iAngle = aAngle;
    }

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::GetContentDimensionsL
// -----------------------------------------------------------------------------
//
void CAknNvgFormatHandler::GetContentDimensionsL(
        TAknContentDimensions& aContentDimensions)
    {
    if ( iNvgEngine && iData)
        {
        TSize lSize = iNvgEngine->ContentDimensions(iData->Des().MidTPtr(KIconHeaderLength) );
        aContentDimensions.SetDimensions( lSize );
        }    
    }

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::InitializeEngineL
// -----------------------------------------------------------------------------
//
void CAknNvgFormatHandler::InitializeEngineL()
    {
    if ( !iNvgEngine)
        {
        iNvgEngine = CNvgEngine::NewL( );
        }
	
    }

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::PrepareIconL
// -----------------------------------------------------------------------------
//
void CAknNvgFormatHandler::PrepareIconL( const TDesC8& aIconData, TInt& aHandle )
    {
    InitializeEngineL();

    TInt handle = 1;


    if (iData)
        {
        delete iData;
        iData = NULL;
        }
    
    iData = HBufC8::NewL(aIconData.Size()+KIconHeaderLength);

    TPtr8 lPtr(iData->Des() );
    TUint8 header[KIconHeaderLength]=
        {
        0
        };

    lPtr.Append(header, KIconHeaderLength);

    lPtr.Append(aIconData);

    aHandle = handle;
    }

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::UsePreparedIconL
// -----------------------------------------------------------------------------
//
void CAknNvgFormatHandler::UsePreparedIconL(TInt /*aHandle */)
    {
  
    }

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::RenderPreparedIconL
// -----------------------------------------------------------------------------
//
void CAknNvgFormatHandler::RenderPreparedIconL(CFbsBitmap* aBitmap,
        CFbsBitmap* aMask, TSize Bitmapsize, TDisplayMode Bitmapdepth,
        TDisplayMode Maskdepth, TRgb aColor, TBool aMarginFlag)
    {
    if(!iData)
        User::Leave(KErrNotFound);
    FormCommonHeader(aBitmap, EFalse, aColor, aMarginFlag);
    aBitmap->CreateExtendedBitmap(Bitmapsize, Bitmapdepth,
            KUidNvgProprietaryFormat, iData->Ptr(), iData->Length());

    if (aMask)
        {
        FormCommonHeader(0, ETrue, 0, 0);
        aMask->CreateExtendedBitmap(Bitmapsize, Maskdepth,
                KUidNvgProprietaryFormat, iData->Ptr(), iData->Length());
        }
    }

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::UnprepareIcon
// -----------------------------------------------------------------------------
//
void CAknNvgFormatHandler::UnprepareIcon( TInt /*aHandle*/ )
    {
    delete iData;
    iData = NULL;
    }

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::SetAnimated
// -----------------------------------------------------------------------------
//
void CAknNvgFormatHandler::SetAnimated( TBool aAnimated )
    {
    iAnimated = aAnimated;
    }

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::IconFormatType
// -----------------------------------------------------------------------------
//
TInt CAknNvgFormatHandler::IconFormatType()
    {
    return EIconFormatNVG;
    }    

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::SetObserver
// -----------------------------------------------------------------------------
//
void CAknNvgFormatHandler::SetObserver( MAknIconChangeObserver* aObserver )
    {
	
    iObserver = aObserver;
    }

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::CheckHandleActivatedL
// -----------------------------------------------------------------------------
//

void CAknNvgFormatHandler::CheckHandleActivatedL( CFbsBitmap* /*aBitmap*/, CFbsBitmap * /*aMask*/ )
    {      
    }

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::SupportedDisplayMode
// -----------------------------------------------------------------------------
//
void CAknNvgFormatHandler::SupportedDisplayMode(
    TDisplayMode& aMode, TDisplayMode aPreferredMode )
    {
    // Modes currently supported by SVG engine are:
    // EGray2, EColor4K, EColor64K, EColor16M
//    if ( aMode != EGray2 ) EASK-824CMD:VGISymbianCopyToBitmap fails for bitmaps with EGray2 display modes.Modifying to create bitmaps with supported displaymodes
        {
        aMode = aPreferredMode;
        }
    }

// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::SetEngineScaleMode
// -----------------------------------------------------------------------------
//

void CAknNvgFormatHandler::SetEngineScaleMode()
    {
   
    }
    
// -----------------------------------------------------------------------------
// CAknNvgFormatHandler::CleanupNullMaskPointer
// -----------------------------------------------------------------------------
//    
//
void CAknNvgFormatHandler::CleanupNullMaskPointer(TAny* aParam)
    {
    static_cast<CAknNvgFormatHandler*>( aParam )->iMask = NULL;
    }

void CAknNvgFormatHandler::FormCommonHeader(const CFbsBitmap *aBitmap,
        TBool isMask, TRgb aColor, TBool aMarginFlag)
    {

    TPtr8 tmpBufPtr(iData->Des());
   
    TAknIconHeader iconheader(tmpBufPtr);
    
    if(isMask)
             {
             iconheader.SetIsMask(ETrue);
             return;
             }
    
    iconheader.Initialize();
    
    iconheader.SetRotation(iAngle);

    iconheader.SetIconColor(aColor.Value());

    iconheader.SetScaleMode(iMode);
    
    if(aMarginFlag)
    iconheader.SetMarginCorrection(ETrue);

    iconheader.SetIsMask(EFalse);

    iconheader.SetBitmapId(aBitmap->Handle());
    }


//  End of File
