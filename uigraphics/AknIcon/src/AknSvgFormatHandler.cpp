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
#include <mifconvdefs.h> // For definition of EIconFormatSVG
#include "AknSvgFormatHandler.h"
#include "AknIconObserver.h"
#include "AknIconSrvPanic.h"
#include "AknIconTraces.h"
#include <SVGRendererId.h>

// CONSTANTS


// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::CAknSvgFormatHandler
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknSvgFormatHandler::CAknSvgFormatHandler(TSize aBitmapSize,TDisplayMode aBitmapDspMode,TDisplayMode aMaskDspMode)
    :iBitmapSize(aBitmapSize),
    iBitmapDspMode(aBitmapDspMode),
    iMaskDspMode(aMaskDspMode)	    
    {       
	}

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::ConstructL
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::ConstructL()
    {
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x Calling ConstructL - iSvgEngine: %x"), this, iSvgEngine);
#endif            
    }

CAknSvgFormatHandler* CAknSvgFormatHandler::NewL(TInt /*aType*/,TSize aBitmapSize,TDisplayMode aBitmapDspMode,TDisplayMode aMaskDspMode)
    {
    CAknSvgFormatHandler* self = new( ELeave ) CAknSvgFormatHandler(aBitmapSize,aBitmapDspMode,aMaskDspMode);
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop();
    return self;
    }

// Destructor
CAknSvgFormatHandler::~CAknSvgFormatHandler()
    {
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x Calling ~CAknSvgFormatHandler - iSvgEngine: %x"), this, iSvgEngine);
#endif        
    delete iSvgEngine;
    delete iDummyBitmap;
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::SetScaleMode
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::SetScaleMode( TScaleMode aMode )
    {
    iMode = aMode;
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::SetRotation
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::SetRotation( TInt aAngle )
    {
    iAngle = aAngle;
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::GetContentDimensionsL
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::GetContentDimensionsL( TAknContentDimensions& aContentDimensions )
    {
    __ASSERT_DEBUG( iSvgEngine, 
        User::Panic( KAknIconSrvPanicCategory, ESrvPanicSvgEngineMissing ) );
    
    CheckHandleActivatedL( NULL, NULL );

    iSvgEngine->ContentDimensions(aContentDimensions.iWidth,aContentDimensions.iHeight);

    if ( aContentDimensions.iWidth <= 0 || aContentDimensions.iHeight <= 0 )
        {
        User::Leave( KErrNotFound );
        }
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::InitializeEngineL
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::InitializeEngineL()
    {
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x Calling InitializeEngineL - iSvgEngine: %x"), this, iSvgEngine);
#endif    
    if ( !iSvgEngine )
        {
        TFontSpec spec;

        if ( !iDummyBitmap )
            {
            // Have to give some bitmap to the engine in the constructor.
            iDummyBitmap = new( ELeave ) CFbsBitmap;
//            User::LeaveIfError( iDummyBitmap->Create( TSize( 0, 0 ), EGray2 ) );
            }
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x In InitializeEngineL - iDummyBitmap: %x"), this, iDummyBitmap);
#endif    
        iSvgEngine = CSvgEngineInterfaceImpl::NewL( iDummyBitmap, this, spec, ESVGRendererSW );
        iSvgEngine->SetBackgroundColor( 0 );
        // No DRM check needed.
        iSvgEngine->SetDRMMode( EFalse );
        }
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x InitializeEngineL called - iSvgEngine: %x"), this, iSvgEngine);
#endif                            
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::PrepareIconL
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::PrepareIconL( const TDesC8& aIconData, TInt& aHandle )
    {
    InitializeEngineL();

    TInt handle = -1;

#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x Calling PrepareDom"), this );
#endif

    LeaveIfErrorL( iSvgEngine->PrepareDom( aIconData, handle ) );

#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x PrepareDom called - handle = %d"), this, handle );
#endif

    aHandle = handle;
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::UsePreparedIconL
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::UsePreparedIconL( TInt aHandle )
    {
    __ASSERT_DEBUG( iSvgEngine, 
        User::Panic( KAknIconSrvPanicCategory, ESrvPanicSvgEngineMissing ) );

    if ( aHandle != iHandle )
        {
        iHandle = aHandle;
        iHandleActivationStatus = ENotActivated;
        }
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::RenderPreparedIconL
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::RenderPreparedIconL(
    CFbsBitmap* aBitmap,
    CFbsBitmap* aMask, TSize aBitmapsize ,TDisplayMode aBitmapdepth,
    TDisplayMode aMaskdepth, TRgb /*aColor*/,TBool /*aMarginFlag*/)
    {
    __ASSERT_DEBUG( iSvgEngine,
        User::Panic( KAknIconSrvPanicCategory, ESrvPanicSvgEngineMissing ) );

    iMask           = aMask;
    iBitmapSize     = aBitmapsize;
    iBitmapDspMode  = aBitmapdepth;
    iMaskDspMode    = aMaskdepth; 
    // Make sure iMask is NULL'ed if a leave occurs so that an invalid pointer
    // is not left there.
    CleanupStack::PushL( TCleanupItem( CleanupNullMaskPointer, this ) );

    CheckHandleActivatedL( aBitmap, aMask );

    TReal32 angle = 0;
    TSize size;

    if ( iAngle && !iAnimated )
        {
        // SVG engine wants rotation angle as TReal32 and in radians.
        angle = (TReal32)iAngle / (TReal32)(360 / 2 / (TReal32)KPi);
        
        iSvgEngine->Rotate( angle, aBitmapsize.iWidth / 2, aBitmapsize.iHeight / 2 );
        }
        
    SetEngineScaleMode();
    MSvgError* aError = NULL;
    iSvgEngine->ChooseViewBoxIfNotSet( iHandle );
    iSvgEngine->Start(aError);
    TRAPD(err,LeaveIfErrorL(aError));

    if ( err != KErrNone || !iAnimated )
        {
        // SVG engine cannot handle the situation, where the bitmap given in UseDom
        // is deleted before next UseDom call, this is a workaround for it.
        LeaveIfErrorL( iSvgEngine->UseDom( iHandle,NULL,NULL,TSize(0,0),ENone,ENone ) );
        iHandleActivationStatus = EActivated;

        // Undo any rotation, so that the situation is resetted for the
        // next request with different parameters.
        if ( iAngle )
            {
            iSvgEngine->Rotate( -angle, size.iWidth / 2, size.iHeight / 2 );
            }
            
        User::LeaveIfError(err);
            
        CleanupStack::PopAndDestroy(); // CleanupNullMaskPointer
        }
    else
        {
        CleanupStack::Pop(); // Keep mask pointer if animated.
        }        
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::UnprepareIcon
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::UnprepareIcon( TInt aHandle )
    {
    __ASSERT_DEBUG( iSvgEngine, 
        User::Panic( KAknIconSrvPanicCategory, ESrvPanicSvgEngineMissing ) );

#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x Calling DeleteDom - handle = %d"), this, aHandle );
#endif

    iSvgEngine->DeleteDom( aHandle );

    if ( aHandle == iHandle )
        {
        iHandleActivationStatus = ENotActivated;
        }
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::SetAnimated
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::SetAnimated( TBool aAnimated )
    {
    iAnimated = aAnimated;
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::IconFormatType
// -----------------------------------------------------------------------------
//
TInt CAknSvgFormatHandler::IconFormatType()
    {
    return EIconFormatSVG;
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::SetObserver
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::SetObserver( MAknIconChangeObserver* aObserver )
    {
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x Calling SetObserver - aObserver: %x"), this, aObserver);
#endif        
    iObserver = aObserver;
    }


// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::CheckHandleActivatedL
// -----------------------------------------------------------------------------
//

void CAknSvgFormatHandler::CheckHandleActivatedL( CFbsBitmap* aBitmap, CFbsBitmap* aMask )
    {
    if ( !aBitmap )
        {
        if ( iHandleActivationStatus == ENotActivated )
            {
#ifdef __AKNICON_TRACES
            RDebug::Print(
                _L("AknIcon: %x Calling UseDom - Handle = %d, Bitmap ptr = %x, Mask ptr = %x"),
                this, iHandle, aBitmap, aMask );
#endif

/*NGA reverse*/            LeaveIfErrorL( iSvgEngine->UseDom( iHandle,aBitmap,aMask,iBitmapSize,iBitmapDspMode,iMaskDspMode ) );
#ifdef __AKNICON_TRACES
            RDebug::Print(
                _L("AknIcon: %x UseDom called - Handle = %d, Bitmap ptr = %x, Mask ptr = %x"),
                this, iHandle, aBitmap, aMask );
#endif

            iHandleActivationStatus = EActivated;
            }
        }
    else
        {
        if ( iHandleActivationStatus != EActivatedWithFrameBuffer || iAnimated )
            {
#ifdef __AKNICON_TRACES
            RDebug::Print(
                _L("AknIcon: %x Calling UseDom - Handle = %d, Bitmap ptr = %x, Mask ptr = %x"),
                this, iHandle, aBitmap, aMask );
#endif
            
            LeaveIfErrorL( iSvgEngine->UseDom( iHandle,aBitmap,aMask,iBitmapSize,iBitmapDspMode,iMaskDspMode ) );

#ifdef __AKNICON_TRACES
            RDebug::Print(
                _L("AknIcon: %x UseDom called - Handle = %d, Bitmap ptr = %x, Mask ptr = %x"),
                this, iHandle, aBitmap, aMask );
#endif

            iHandleActivationStatus = EActivatedWithFrameBuffer;
            }
        }
    }


// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::SupportedDisplayMode
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::SupportedDisplayMode(
    TDisplayMode& aMode, TDisplayMode aPreferredMode )
    {
    // Modes currently supported by SVG engine are:
    // EGray2, EColor4K, EColor64K, EColor16M
    if ( aMode != EGray2 )
        {
        aMode = aPreferredMode;
        }
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::UpdateScreen
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::UpdateScreen()
    {
    if ( iObserver )
        {
        iObserver->BitmapChanged();
        }
    else if (iAnimated)
    	{
    	iSvgEngine->Stop();
    	}
    else
        {
        // skip
        }
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::ScriptCall
// -----------------------------------------------------------------------------
//
TBool CAknSvgFormatHandler::ScriptCall(
    const TDesC& /*aScript*/,
    CSvgElementImpl* /*aCallerElement*/ )
    {
    return EFalse;
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::FetchImage
// -----------------------------------------------------------------------------
//

TInt CAknSvgFormatHandler::FetchImage(
    const TDesC& /*aUri*/, RFs& /*aSession*/, RFile& /*aFileHandle*/ )
    {
    return KErrNotSupported;
    }


// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::SetEngineScaleMode
// -----------------------------------------------------------------------------
//

void CAknSvgFormatHandler::SetEngineScaleMode()
    {
    TSvgPreserveAspectAlignType alignTypeValue = ESvgPreserveAspectRatio_XmidYmid;
    TSvgMeetOrSliceType meetOrSliceTypeValue = ESvgMeetOrSlice_Meet;
    switch ( iMode )
        {
        case EAspectRatioPreserved: // fall through
            {
            // use default
            break;
            }
        // Ensures SVG content fully covers            
        // the area of the icon whilst preserving aspect ratio.
        case EAspectRatioPreservedSlice:
            {
            // alignTypeValue use default
            meetOrSliceTypeValue = ESvgMeetOrSlice_Slice;
            break;
            } 
        // EAspectRatioPreservedAndUnusedSpaceRemoved is mapped to
        // the same values as EAspectRatioNotPreserved
        // because we already have a frame buffer
        // with the dimensions that preserves the aspect ratio.
        // This mapping ensures that SVG engine does not calculate aspect
        // ratio twice and potentially resulting in precision loss.
        case EAspectRatioPreservedAndUnusedSpaceRemoved:                        
        case EAspectRatioNotPreserved:
            {            
            alignTypeValue = ESvgPreserveAspectRatio_None;
            // meetOrSliceTypeValue use default
            break;
            }
        default:
            {
            __ASSERT_DEBUG( 0, User::Invariant() );
            }
        }        
    iSvgEngine->SetPreserveAspectRatio( NULL, alignTypeValue, meetOrSliceTypeValue, ETrue);        
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::UpdatePresentation
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::UpdatePresentation(
    const TInt32& /*aNoOfAnimation*/ )
    {
    }
    
// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::UpdatePresentation
// -----------------------------------------------------------------------------
//    
TInt CAknSvgFormatHandler::FetchFont( const TDesC& /*aUri*/, RFs& /*aSession*/, RFile& /*aFileHandle*/ )
    {
    return KErrNotSupported;
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::LeaveIfErrorL
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::LeaveIfErrorL( MSvgError* aError )
    {
    User::LeaveIfNull( aError );
    if ( aError->HasError() && !aError->IsWarning() )
        {
        User::Leave( SvgErrorToSymbianError( aError->ErrorCode() ) );
        }
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::SvgErrorToSymbianError
// -----------------------------------------------------------------------------
//
TInt CAknSvgFormatHandler::SvgErrorToSymbianError( const TSvgErrorCode aError )
    {
    // most common mapping...
    TInt ret = KErrGeneral;

    switch ( aError )
        {
        case ESvgNoError:
            ret = KErrNone;
            break;
        case ESvgFileNotFound:
            ret = KErrNotFound;
            break;
        case ESvgDocumentNotValid: // fall through
        case ESvgDocumentNotAvailable:
            break;
        case ESvgNoMemory:
            ret = KErrNoMemory;
            break;
        case ESvgDiskFull:
            ret = KErrDiskFull;
            break;
        case ESvgUnknown: // fall through
        case ESvgMissingRequiredAttribute: // fall through
        case ESvgInvalidAttributeValue: // fall through
        default:
            break;
        }

    return ret;
    }

// -----------------------------------------------------------------------------
// CAknSvgFormatHandler::CleanupNullMaskPointer
// -----------------------------------------------------------------------------
//
void CAknSvgFormatHandler::CleanupNullMaskPointer( TAny* aParam )
    {
    static_cast<CAknSvgFormatHandler*>( aParam )->iMask = NULL;
    }

