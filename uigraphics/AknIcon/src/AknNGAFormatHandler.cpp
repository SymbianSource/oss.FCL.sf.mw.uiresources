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
* Description:  Format Handler for NGA(will create an extended bitmap)
 *
*/



// INCLUDE FILES
#include <e32math.h>
#include <fbs.h>
#include <mifconvdefs.h> // For definition of EIconFormatSVG
#include "AknNGAFormatHandler.h"
#include "AknIconObserver.h"
#include "AknIconSrvPanic.h"
#include "AknIconTraces.h"
#include "AknBitmap.h"
#include "AknIconManager.h"
#include "AknIconHeader.h"
#include <SVGRendererId.h>

// CONSTANTS


// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknNGAFormatHandler::CAknNGAFormatHandler
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknNGAFormatHandler::CAknNGAFormatHandler(TSize aBitmapSize,TDisplayMode aBitmapDspMode,TDisplayMode aMaskDspMode):iBitmapSize(aBitmapSize),
iBitmapDspMode(aBitmapDspMode),
iMaskDspMode(aMaskDspMode)	    
	        {       
	        iData = 0;
	        }

// -----------------------------------------------------------------------------
// CAknNGAFormatHandler::ConstructL
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::ConstructL(TInt /*aType*/)
    {
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x Calling ConstructL - iSvgEngine: %x"), this, iSvgEngine);
#endif            
    }

CAknNGAFormatHandler* CAknNGAFormatHandler::NewL(TInt aType,TSize aBitmapSize,TDisplayMode aBitmapDspMode,TDisplayMode aMaskDspMode)
    {
    CAknNGAFormatHandler* self = new( ELeave ) CAknNGAFormatHandler(aBitmapSize,aBitmapDspMode,aMaskDspMode);
    CleanupStack::PushL( self );
    self->ConstructL(aType);
    CleanupStack::Pop();
    return self;
    }

// Destructor
CAknNGAFormatHandler::~CAknNGAFormatHandler()
    {
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x Calling ~CAknNGAFormatHandler - iSvgEngine: %x"), this, iSvgEngine);
#endif        
    delete iSvgEngine;
    delete iDummyBitmap;
    delete iData;
    }

// -----------------------------------------------------------------------------
// CAknNGAFormatHandler::SetScaleMode
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::SetScaleMode( TScaleMode aMode )
    {
    iMode = aMode;
    }

// -----------------------------------------------------------------------------
// CAknNGAFormatHandler::SetRotation
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::SetRotation( TInt aAngle )
    {
    iAngle = aAngle;
    }

// -----------------------------------------------------------------------------
// CAknNGAFormatHandler::GetContentDimensionsL
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::GetContentDimensionsL( TAknContentDimensions& aContentDimensions )
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
// CAknNGAFormatHandler::InitializeEngineL
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::InitializeEngineL()
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
            }
#ifdef __AKNICON_TRACES
        RDebug::Print( _L("AknIcon: %x In InitializeEngineL - iDummyBitmap: %x"), this, iDummyBitmap);
#endif    
        iSvgEngine = CSvgEngineInterfaceImpl::NewL( iDummyBitmap, this, spec,ESVGRendererTLV );
        iSvgEngine->SetBackgroundColor( 0xFFFFFFFF );
        // No DRM check needed.
        iSvgEngine->SetDRMMode( EFalse );
        }
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x InitializeEngineL called - iSvgEngine: %x"), this, iSvgEngine);
#endif                            
    }

// -----------------------------------------------------------------------------
// CAknNGAFormatHandler::PrepareIconL
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::PrepareIconL( const TDesC8& aIconData, TInt& aHandle )
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
// CAknNGAFormatHandler::UsePreparedIconL
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::UsePreparedIconL( TInt aHandle )
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
// CAknNGAFormatHandler::RenderPreparedIconL
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::RenderPreparedIconL(
        CFbsBitmap* aBitmap,
        CFbsBitmap* aMask,TSize Bitmapsize,TDisplayMode Bitmapdepth,TDisplayMode Maskdepth, TRgb aColor, TBool aMarginFlag )
    {
    __ASSERT_DEBUG( iSvgEngine,
            User::Panic( KAknIconSrvPanicCategory, ESrvPanicSvgEngineMissing ) );
    
    iMask = aMask;
    
    iBitmapSize=Bitmapsize;
    iBitmapDspMode=Bitmapdepth;
    iMaskDspMode=Maskdepth;        
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
        iSvgEngine->Rotate(angle, Bitmapsize.iWidth / 2, Bitmapsize.iHeight / 2);
        }
    else
        {
        iSvgEngine->Rotate(0.0f, Bitmapsize.iWidth / 2, Bitmapsize.iHeight / 2);
        }
    
    
    SetEngineScaleMode();
    MSvgError* aError = NULL;
    iSvgEngine->ChooseViewBoxIfNotSet( iHandle );
    
    FormCommonHeader(aBitmap, EFalse, aColor, aMarginFlag);

    TPtr8 lPtr( iData->Des() );
    iSvgEngine->Start(aError,&lPtr);
    TRAPD(err,LeaveIfErrorL(aError));
    if ( err != KErrNone || !iAnimated )
        {
        // SVG engine cannot handle the situation, where the bitmap given in UseDom
        // is deleted before next UseDom call, this is a workaround for it.
        LeaveIfErrorL( iSvgEngine->UseDom( iHandle,aBitmap,aMask,iBitmapSize,iBitmapDspMode,iMaskDspMode) );
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
// CAknNGAFormatHandler::UnprepareIcon
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::UnprepareIcon( TInt aHandle )
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
// CAknNGAFormatHandler::SetAnimated
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::SetAnimated( TBool aAnimated )
    {
    iAnimated = aAnimated;
    }

// -----------------------------------------------------------------------------
// CAknNGAFormatHandler::IconFormatType
// -----------------------------------------------------------------------------
//
TInt CAknNGAFormatHandler::IconFormatType()
    {
    return EIconFormatNGA;
    }

// -----------------------------------------------------------------------------
// CAknNGAFormatHandler::SetObserver
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::SetObserver( MAknIconChangeObserver* aObserver )
    {
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x Calling SetObserver - aObserver: %x"), this, aObserver);
#endif        
    iObserver = aObserver;
    }


// -----------------------------------------------------------------------------
// CAknNGAFormatHandler::CheckHandleActivatedL
// -----------------------------------------------------------------------------
//

void CAknNGAFormatHandler::CheckHandleActivatedL( CFbsBitmap* aBitmap, CFbsBitmap* aMask )
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
            LeaveIfErrorL( iSvgEngine->UseDom( iHandle,aBitmap,aMask,iBitmapSize,iBitmapDspMode,iMaskDspMode ) );
            
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
// CAknNGAFormatHandler::SupportedDisplayMode
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::SupportedDisplayMode(
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
// CAknNGAFormatHandler::UpdateScreen
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::UpdateScreen()
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
// CAknNGAFormatHandler::ScriptCall
// -----------------------------------------------------------------------------
//
TBool CAknNGAFormatHandler::ScriptCall(
        const TDesC& /*aScript*/,
        CSvgElementImpl* /*aCallerElement*/ )
    {
    return EFalse;
    }

// -----------------------------------------------------------------------------
// CAknNGAFormatHandler::FetchImage
// -----------------------------------------------------------------------------
//

TInt CAknNGAFormatHandler::FetchImage(
        const TDesC& /*aUri*/, RFs& /*aSession*/, RFile& /*aFileHandle*/ )
    {
    return KErrNotSupported;
    }


// -----------------------------------------------------------------------------
// CAknNGAFormatHandler::SetEngineScaleMode
// -----------------------------------------------------------------------------
//

void CAknNGAFormatHandler::SetEngineScaleMode()
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
// CAknNGAFormatHandler::UpdatePresentation
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::UpdatePresentation(
        const TInt32& /*aNoOfAnimation*/ )
    {
    }

// -----------------------------------------------------------------------------
// CAknNGAFormatHandler::UpdatePresentation
// -----------------------------------------------------------------------------
//    
TInt CAknNGAFormatHandler::FetchFont( const TDesC& /*aUri*/, RFs& /*aSession*/, RFile& /*aFileHandle*/ )
    {
    return KErrNotSupported;
    }

// -----------------------------------------------------------------------------
// CAknNGAFormatHandler::LeaveIfErrorL
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::LeaveIfErrorL( MSvgError* aError )
    {
    User::LeaveIfNull( aError );
    if ( aError->HasError() && !aError->IsWarning() )
        {
        User::LeaveIfError( SvgErrorToSymbianError( aError->ErrorCode() ) );
        }
    }

// -----------------------------------------------------------------------------
// CAknNGAFormatHandler::SvgErrorToSymbianError
// -----------------------------------------------------------------------------
//
TInt CAknNGAFormatHandler::SvgErrorToSymbianError( const TSvgErrorCode aError )
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
// CAknNGAFormatHandler::CleanupNullMaskPointer
// -----------------------------------------------------------------------------
//
void CAknNGAFormatHandler::CleanupNullMaskPointer( TAny* aParam )
    {
    static_cast<CAknNGAFormatHandler*>( aParam )->iMask = NULL;
    }

void CAknNGAFormatHandler::FormCommonHeader(const CFbsBitmap *aBitmap, TBool isMask,TRgb aColor, TBool aMarginFlag)
    {
    if(!iData)
        iData = HBufC8::New(KIconHeaderLength);
    
    TPtr8 tmpBufPtr (iData->Des());
    tmpBufPtr.SetLength(KIconHeaderLength);
    TAknIconHeader iconheader(tmpBufPtr);
    iconheader.Initialize(); 
    
    iconheader.SetRotation(iAngle);
    
    iconheader.SetIconColor(aColor.Value());
 
    iconheader.SetScaleMode(iMode);
   
    if(aMarginFlag)
    iconheader.SetMarginCorrection(ETrue);
    
    iconheader.SetIsMask(isMask);
    
    iconheader.SetBitmapId(aBitmap->Handle());
    }

//  End of File
