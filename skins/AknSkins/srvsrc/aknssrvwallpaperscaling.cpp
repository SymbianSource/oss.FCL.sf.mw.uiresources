/*
* Copyright (c) 2006-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Image decoding and scaling utility class.
*
*/


// INCLUDE FILES
#include <e32math.h>
#include <centralrepository.h>
#include <SVGEngineInterfaceImpl.h>

#include "aknssrvwallpaperscaling.h"
#include <aknswallpaperconfprivatecrkeys.h>
#include <AknsSrvVariant.hrh>
#include <IclExtJpegApi.h>
// CONSTANTS
// Default small image zooming to fullscreen threshold value.
const TReal KAknsSrvDefaultSmallImageThreshold = 0.33f;

// Extension for gif file.
//_LIT( KAknsSkinSrvGifFileExt, ".gif" );

// Extension for jpg file.
_LIT( KAknsSkinSrvJpegFileExt1, ".jpg" );
_LIT( KAknsSkinSrvJpegFileExt2, ".jpeg" );


// -----------------------------------------------------------------------------
// Map SVG specific errors to Symbian error codes.
// -----------------------------------------------------------------------------
//
TInt SvgErrorToSymbianError( const TSvgErrorCode aError )
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
// CAknsSrvSVGImageDecoder::NewL
// -----------------------------------------------------------------------------
//
CAknsSrvSVGImageDecoder* CAknsSrvSVGImageDecoder::NewL()
    {
    CAknsSrvSVGImageDecoder* self = new (ELeave) CAknsSrvSVGImageDecoder;
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSVGImageDecoder::NewL
// -----------------------------------------------------------------------------
//
void CAknsSrvSVGImageDecoder::DecodeImageL(
    const TDesC& aFilename,
    const TSize& aTargetSize,
    CFbsBitmap*& aBitmap,
    CFbsBitmap*& aMask )
    {
    // create frame and frame mask buffers
    iBitmap = new( ELeave ) CFbsBitmap;
    User::LeaveIfError( iBitmap->Create( aTargetSize, EColor64K ) );

    iMask = new( ELeave ) CFbsBitmap;
    User::LeaveIfError( iMask->Create( aTargetSize, EGray256 ) );

    // Load and render SVG file
    TInt handle = 0;
    LeaveIfErrorL( iSvgEngine->PrepareDom( aFilename, handle ) );
    LeaveIfErrorL( iSvgEngine->UseDom( handle, iBitmap, iMask ) );
    iSvgEngine->SetPreserveAspectRatio(
        NULL,
        ESvgPreserveAspectRatio_XmidYmid,
        ESvgMeetOrSlice_Meet,
        ETrue);
    // render frame and frame mask
    iSvgEngine->Start();
    LeaveIfErrorL( iSvgEngine->UseDom( handle, NULL ) );
    LeaveIfErrorL( iSvgEngine->DeleteDom( handle ) );
    aBitmap = iBitmap;
    iBitmap = NULL;
    aMask = iMask;
    iMask = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSVGImageDecoder::NewL
// -----------------------------------------------------------------------------
//
CAknsSrvSVGImageDecoder::~CAknsSrvSVGImageDecoder()
    {
    delete iDummyBitmap;
    delete iSvgEngine;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSVGImageDecoder::CAknsSrvSVGImageDecoder
// -----------------------------------------------------------------------------
//
CAknsSrvSVGImageDecoder::CAknsSrvSVGImageDecoder()
    {
    }

// -----------------------------------------------------------------------------
// CAknsSrvSVGImageDecoder::ConstructL
// -----------------------------------------------------------------------------
//
void CAknsSrvSVGImageDecoder::ConstructL()
    {
    // Initialize SVG engine
    TFontSpec spec;
    if ( !iDummyBitmap )
        {
        // Have to give some bitmap to the engine in the constructor.
        iDummyBitmap = new( ELeave ) CFbsBitmap;
        User::LeaveIfError( iDummyBitmap->Create( TSize( 0, 0 ), EGray2 ) );
        }
    iSvgEngine = CSvgEngineInterfaceImpl::NewL( iDummyBitmap, this, spec );
    iSvgEngine->SetBackgroundColor( 0 );
    // No DRM check needed.
    iSvgEngine->SetDRMMode( EFalse );
    }

// -----------------------------------------------------------------------------
// CAknsSrvSVGImageDecoder::LeaveIfErrorL
// -----------------------------------------------------------------------------
//
void CAknsSrvSVGImageDecoder::LeaveIfErrorL( MSvgError* aError )
    {
    if ( !aError )
        {
        User::Leave( KErrGeneral );
        }
    if ( aError->HasError() && !aError->IsWarning() )
        {
        User::Leave( SvgErrorToSymbianError( aError->ErrorCode() ) );
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvSVGImageDecoder::ScriptCall
// -----------------------------------------------------------------------------
//
TBool CAknsSrvSVGImageDecoder::ScriptCall(
    const TDesC& /*aScript*/,
    CSvgElementImpl* /*aCallerElement*/ )
    {
    return EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSVGImageDecoder::UpdatePresentation
// -----------------------------------------------------------------------------
//
void CAknsSrvSVGImageDecoder::UpdatePresentation(
    const TInt32& /*aNoOfAnimation*/ )
    {
    }

// -----------------------------------------------------------------------------
// CAknsSrvSVGImageDecoder::FetchFont
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSVGImageDecoder::FetchFont( const TDesC& /*aUri*/, RFs& /*aSession*/, RFile& /*aFileHandle*/ )
    {
    return KErrNotSupported;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSVGImageDecoder::FetchImage
// -----------------------------------------------------------------------------
//
TInt CAknsSrvSVGImageDecoder::FetchImage(
    const TDesC& /*aUri*/, RFs& /*aSession*/, RFile& /*aFileHandle*/ )
    {
    return KErrNotSupported;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSVGImageDecoder::UpdateScreen
// -----------------------------------------------------------------------------
//
void CAknsSrvSVGImageDecoder::UpdateScreen()
    {
    }

// -----------------------------------------------------------------------------
// CAknsSrvImageConverter::CAknsSrvImageConverter
// -----------------------------------------------------------------------------
//
CAknsSrvImageConverter::CAknsSrvImageConverter() :
    CActive(CActive::EPriorityStandard)
    {
    }

// -----------------------------------------------------------------------------
// CAknsSrvImageConverter::~CAknsSrvImageConverter
// -----------------------------------------------------------------------------
//
CAknsSrvImageConverter::~CAknsSrvImageConverter()
    {
    Cancel();
    delete iBitmapScaler;
    iBitmapScaler = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsSrvImageConverter::NewL
// -----------------------------------------------------------------------------
//
CAknsSrvImageConverter* CAknsSrvImageConverter::NewL()
    {
    CAknsSrvImageConverter* self = new (ELeave) CAknsSrvImageConverter;
    CleanupStack::PushL(self);
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsSrvImageConverter::ConstructL
// -----------------------------------------------------------------------------
//
void CAknsSrvImageConverter::ConstructL()
    {
    iBitmapScaler = CBitmapScaler::NewL();
    CActiveScheduler::Add(this);
    }

// -----------------------------------------------------------------------------
// CAknsSrvImageConverter::BeginWait
// -----------------------------------------------------------------------------
//
void CAknsSrvImageConverter::BeginWait()
    {
    if ( iWaitActive || iWait.IsStarted() )
        {
        return;
        }
    else
        {
        iWaitActive = ETrue;
        iWait.Start();
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvImageConverter::EndWait
// -----------------------------------------------------------------------------
//
void CAknsSrvImageConverter::EndWait()
    {
    if (!iWaitActive)
        {
        return;
        }
    else
        {
        iWaitActive = EFalse;
        iWait.AsyncStop();
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvImageConverter::RunL
// -----------------------------------------------------------------------------
//
void CAknsSrvImageConverter::RunL()
    {
    iConversionError = iStatus.Int();
    EndWait();
    }

// -----------------------------------------------------------------------------
// CAknsSrvImageConverter::DoCancel
// -----------------------------------------------------------------------------
//
void CAknsSrvImageConverter::DoCancel()
    {
    if (iBitmapScaler)
        {
        iBitmapScaler->Cancel();
        }
    }

// Axis-selection enumeration.
enum TPLSelection
    {
    EPlX,
    EPlY
    };

// Result struct.
struct TCalcStruct
    {
    TPLSelection iPlSelector; // 0 = x, 1 = y
    TReal32 iCropMul;
    TReal32 iStretchMul;
    TReal32 iZoomMul;
    };


// -----------------------------------------------------------------------------
// GetScreenSizeL - Calculates screensize.
// -----------------------------------------------------------------------------
//
TSize GetScreenSizeL()
    {
    RWsSession wsSession;
    User::LeaveIfError(wsSession.Connect());
    CleanupClosePushL(wsSession);
    CWsScreenDevice* sc = new (ELeave) CWsScreenDevice(wsSession);
    CleanupStack::PushL(sc);
    sc->Construct();

    TSize screensize(0,0);
    TPixelsAndRotation currentSize;
    TPixelsAndRotation defaultSize;

    // Fetch all screen modes, and pick the system's active one.
    // We need to use system's screenmode, since default (i.e. foreground)
    // can be different (e.g. client in landscape mode, system in portrait).
    RArray<TInt> screenModes;
    sc->GetScreenSizeModeList(&screenModes);
    TInt currentScreenMode = sc->CurrentScreenMode();
    if ( currentScreenMode >= 0 && currentScreenMode <= screenModes.Count() -1 )
        {
        sc->GetScreenModeSizeAndRotation( screenModes[currentScreenMode], currentSize );
        // Let's assume that first mode is the default.
        sc->GetScreenModeSizeAndRotation( screenModes[0], defaultSize );

        // Check if the client is in different mode than default.
        TBool clientRotated = EFalse;
        if (( currentSize.iRotation == CFbsBitGc::EGraphicsOrientationRotated90 ||
              currentSize.iRotation == CFbsBitGc::EGraphicsOrientationRotated270 ) && 
            ( defaultSize.iRotation == CFbsBitGc::EGraphicsOrientationNormal ||
              defaultSize.iRotation == CFbsBitGc::EGraphicsOrientationRotated180 ))
            {
            clientRotated = ETrue;
            }
        if (( currentSize.iRotation == CFbsBitGc::EGraphicsOrientationNormal ||
              currentSize.iRotation == CFbsBitGc::EGraphicsOrientationRotated180 ) && 
            ( defaultSize.iRotation == CFbsBitGc::EGraphicsOrientationRotated90 ||
              defaultSize.iRotation == CFbsBitGc::EGraphicsOrientationRotated270 ))
            {
            clientRotated = ETrue;
            }

        // If client is in different screen mode than the system - flip values.
        if ( clientRotated )
            {            
            screensize.iWidth = currentSize.iPixelSize.iHeight;
            screensize.iHeight = currentSize.iPixelSize.iWidth;
            }
        else
            {
            screensize = currentSize.iPixelSize;
            }
        }
    else
        {
        // Some problem with layout - use foremost screen size.
        screensize = sc->SizeInPixels();
        }
    screenModes.Reset();
    screenModes.Close();

    CleanupStack::PopAndDestroy(2);// screendevice, wssession
    return screensize;
    }

// -----------------------------------------------------------------------------
// GetWallpaperParametersL - Gets wallpaper parameters.
// -----------------------------------------------------------------------------
//
void GetWallpaperParametersL(
    TReal& aMaxCropFactor, TReal& aMaxStretchFactor,
    TInt& aScalePriority,
    TSize& aScreenSize,
    TReal& aMaxZoomThreshold )
    {
    aScreenSize = GetScreenSizeL();
    // Fetch the wallpaper configuration values from central repository.
    CRepository* wpRepository = CRepository::NewL( KCRUidWallpaperConfiguration );
    CleanupStack::PushL( wpRepository );
    TInt crError = KErrNone;
    if (aScreenSize.iWidth > aScreenSize.iHeight)
        {
        //Landscape
        crError = wpRepository->Get( KWpConfLandscapeMaxCropFactor, aMaxCropFactor );
        if ( crError == KErrNone )
            {
            crError = wpRepository->Get( KWpConfLandscapeMaxStretchFactor, aMaxStretchFactor );
            }
        if ( crError == KErrNone )
            {
            crError = wpRepository->Get( KWpConfLandscapeScalePriority, aScalePriority );
            }
        if ( crError == KErrNone )
            {
            crError = wpRepository->Get( KWpConfSmallImageZoomThreshold, aMaxZoomThreshold );
            }
        }
    else
        {
        //Portrait
        crError = wpRepository->Get( KWpConfPortraitMaxCropFactor, aMaxCropFactor );
        if ( crError == KErrNone )
            {
            crError = wpRepository->Get( KWpConfPortaitMaxStretchFactor, aMaxStretchFactor );
            }
        if ( crError == KErrNone )
            {
            crError = wpRepository->Get( KWpConfPortraitScalePriority, aScalePriority );
            }
        if ( crError == KErrNone )
            {
            crError = wpRepository->Get( KWpConfSmallImageZoomThreshold, aMaxZoomThreshold );
            }
        }
        
    CleanupStack::PopAndDestroy( wpRepository );
    }

// -----------------------------------------------------------------------------
// CalculateScaleFactor - calculates the scaling factors (for cropping, zooming
//   and scaling).
// -----------------------------------------------------------------------------
//
TCalcStruct CalculateScaleFactor(
    TSize aOriginalSize, TSize aTargetSize, TSize& aScreenSize )
    {
    TCalcStruct result;
    TReal maxCropfactor = 0.0f;
    TReal maxStretchFactor = 0.0f;
    TInt scalePriority = EPrioCrop;
    TReal maxZoomThreshold = 0.0f;

    // Fetch the wallpaper configuration values from central repository.
    TRAP_IGNORE(
        GetWallpaperParametersL(
            maxCropfactor,
            maxStretchFactor,
            scalePriority,
            aScreenSize,
            maxZoomThreshold ) );

    result.iPlSelector = EPlX;
    result.iCropMul = 1.0f;
    result.iStretchMul = 1.0f;
    result.iZoomMul = 1.0f;

    if ( (aOriginalSize.iWidth <= aTargetSize.iWidth) &&
         (aOriginalSize.iHeight <= aTargetSize.iHeight) && 
         (scalePriority != EPrioNHDWallpaper) )
        {
        // source fits completely to the target -> bail out no scaling needed
        return result;
        }
    result.iCropMul = 1.0f - maxCropfactor;
    result.iStretchMul = 1.0f - maxStretchFactor;

    TReal32 originalAspect;
    TReal32 targetAspect;

    TReal32 plTargetLen;
    TReal32 plZoomedTargetLen;
    TReal32 plOriginalLen;

    originalAspect = (TReal32)aOriginalSize.iWidth/(TReal32)aOriginalSize.iHeight;
    targetAspect = (TReal32)aTargetSize.iWidth/(TReal32)aTargetSize.iHeight;

    if (originalAspect>targetAspect)
        {
        result.iPlSelector = EPlX;
        plTargetLen = (TReal32)aOriginalSize.iHeight * targetAspect;
        plZoomedTargetLen = aTargetSize.iWidth;
        plOriginalLen = aOriginalSize.iWidth;
        }
    else
        {
        result.iPlSelector = EPlY;
        plOriginalLen = aOriginalSize.iHeight;
        plTargetLen = (TReal32)aOriginalSize.iWidth / targetAspect;
        plZoomedTargetLen = aTargetSize.iHeight;
        }
        
    if (scalePriority == EPrioNHDWallpaper)
        {
        if( ( aOriginalSize.iWidth < aTargetSize.iWidth * maxZoomThreshold ) &&
            ( aOriginalSize.iHeight < aTargetSize.iHeight * maxZoomThreshold ) ) 
            {
            result.iPlSelector = EPlX;
            result.iCropMul = 1.0f;
            result.iStretchMul = 1.0f;
            result.iZoomMul = 1.0f;
            }
        else if( ( aOriginalSize.iWidth >= aTargetSize.iWidth * maxZoomThreshold ) &&
            ( aOriginalSize.iHeight >= aTargetSize.iHeight * maxZoomThreshold ) )
            {
            result.iStretchMul = 1.0f;
            
            result.iCropMul = plTargetLen / plOriginalLen;
            result.iZoomMul = plZoomedTargetLen / plTargetLen;
            }
        else
            {
            result.iStretchMul = 1.0f;
            result.iZoomMul = 1.0f;
                
            result.iCropMul = plZoomedTargetLen / plOriginalLen;
            }
            
        return result;
        }
        
        
    TReal32 reqMul = plTargetLen / plOriginalLen;
    if (reqMul < ( result.iCropMul * result.iStretchMul ) )
        {
        result.iZoomMul = plZoomedTargetLen /
            ( result.iCropMul * result.iStretchMul * plOriginalLen );
        return result;
        }

    result.iZoomMul = plZoomedTargetLen / (reqMul*plOriginalLen);
    if (scalePriority == EPrioStretch)
        {
        result.iCropMul = reqMul / result.iStretchMul;
        }
    else if (scalePriority == EPrioCrop)
        {
        result.iStretchMul = reqMul / result.iCropMul;
        if ( result.iStretchMul > 1.0f )
            {
            // Since stretch is not going to be performed, we can use the available
            // "space" for decreasing the cropped area.
            result.iCropMul = result.iCropMul * result.iStretchMul;
            }
        if ( result.iZoomMul > 1.0f )
            {
            // Since zooming is not going to be performed, we can use the available
            // "space" for decreasing the cropped area.
            result.iCropMul = result.iCropMul * result.iZoomMul;
            }
        }
    else
        {
        TReal reqMulSqr;
        Math::Sqrt( reqMulSqr,reqMul );
        if ( (reqMulSqr >= ( result.iStretchMul ) ) &&
             (reqMulSqr >= ( result.iCropMul ) ) )
            {
            result.iCropMul = reqMulSqr;
            result.iStretchMul = reqMul / result.iCropMul;
            }
        else
            {
            if ( maxCropfactor > maxStretchFactor )
                {
                result.iCropMul = reqMul / result.iStretchMul;
                }
            else
                {
                result.iStretchMul = reqMul / result.iCropMul;
                }
            }
        }
    return result;
    }

// -----------------------------------------------------------------------------
// CAknsSrvImageConverter::ScaleAndCropImageL
// -----------------------------------------------------------------------------
//
void CAknsSrvImageConverter::ScaleAndCropImageL(
    CFbsBitmap*& aBitmap, const TSize& aTargetSize )
    {
    TSize bitmapsize = aBitmap->SizeInPixels();
    TSize screenSize;

    TCalcStruct calcres =
        CalculateScaleFactor( aBitmap->SizeInPixels(), aTargetSize, screenSize );

    if ( calcres.iCropMul == 1.0f &&
         calcres.iStretchMul == 1.0f &&
         calcres.iZoomMul == 1.0f )
        {
#ifdef RD_FULLSCREEN_WALLPAPER
        if ( screenSize.iHeight == 0 ||
             screenSize.iWidth == 0 )
            {
            // error in getting screensize, bail out.
            return;
            }
        TReal32 imageScreenRatio =
            ((TReal32) bitmapsize.iHeight * (TReal32) bitmapsize.iWidth) /
            ((TReal32) screenSize.iHeight * (TReal32) screenSize.iWidth);

        TReal threshold = KAknsSrvDefaultSmallImageThreshold;
        TInt crError = KErrNone;
        CRepository* wpRepository = NULL;
        wpRepository = CRepository::NewL( KCRUidWallpaperConfiguration );
        CleanupStack::PushL( wpRepository );
        crError = wpRepository->Get( KWpConfSmallImageZoomThreshold, threshold );
        if ( crError != KErrNone )
            {
            // Error - use default value.
            threshold = KAknsSrvDefaultSmallImageThreshold;
            }
        CleanupStack::PopAndDestroy( wpRepository );

        if ( imageScreenRatio < threshold )
            {
            // image is so small that zooming will not look good enough
            return;
            }
        // If image does not fit, or screensize is corrupted, don't do anything.
        if ( bitmapsize.iHeight > screenSize.iHeight ||
             bitmapsize.iWidth > screenSize.iWidth )
            {
            // no scaling required, bail out
            return;
            }
        // Image is smaller than screen - zoom.
        TReal32 ratioX = ( (TReal32)bitmapsize.iWidth / (TReal32)screenSize.iWidth );
        TReal32 ratioY = ( (TReal32)bitmapsize.iHeight / (TReal32)screenSize.iHeight );
        if ( ratioX > ratioY )
            {
            calcres.iZoomMul = 1.0f / ( (TReal32)bitmapsize.iWidth / (TReal32)screenSize.iWidth );
            }
        else
            {
            calcres.iZoomMul = 1.0f / ( (TReal32)bitmapsize.iHeight / (TReal32)screenSize.iHeight );
            }
#else
        // no scaling required, bail out
        return;
#endif // RD_FULLSCREEN_WALLPAPER
        }

    TSize scaleSize = bitmapsize;
    if (calcres.iCropMul < 1.0f)
        {
        // Crop first.
        TSize cropSize = bitmapsize;

        if (calcres.iPlSelector == EPlX)
            {
            cropSize.iWidth = (TInt)(calcres.iCropMul*(TReal32)bitmapsize.iWidth+0.5f);
            }
        else
            {
            cropSize.iHeight = (TInt)(calcres.iCropMul*(TReal32)bitmapsize.iHeight+0.5f);
            }

        CFbsBitmap* newbmp = new (ELeave) CFbsBitmap;
        CleanupStack::PushL(newbmp);
        newbmp->Create(cropSize, aBitmap->DisplayMode());
        CFbsBitmapDevice* bmpdev = CFbsBitmapDevice::NewL(newbmp);
        CleanupStack::PushL(bmpdev);
        CFbsBitGc* bmpcxt;
        User::LeaveIfError(bmpdev->CreateContext(bmpcxt));
        CleanupStack::PushL(bmpcxt);
        bmpcxt->BitBlt(TPoint(0,0), aBitmap,
            TRect((bitmapsize.iWidth-cropSize.iWidth)/2,
            (bitmapsize.iHeight-cropSize.iHeight)/2,
            (bitmapsize.iWidth+cropSize.iWidth)/2,
            (bitmapsize.iHeight+cropSize.iHeight)/2));
        CleanupStack::PopAndDestroy(2); // bmpdev, bmpcxt
        aBitmap->Reset();
        User::LeaveIfError( aBitmap->Duplicate( newbmp->Handle() ) );
        bitmapsize = aBitmap->SizeInPixels();
        scaleSize = bitmapsize;
        CleanupStack::PopAndDestroy( newbmp );
        }

    if (calcres.iStretchMul < 1.0f)
        {
        if (calcres.iPlSelector == EPlX)
            {
            scaleSize.iWidth = (TInt)((TReal32)bitmapsize.iWidth*calcres.iStretchMul+0.5f);
            }
        else
            {
            scaleSize.iHeight = (TInt)((TReal32)bitmapsize.iHeight*calcres.iStretchMul+0.5f);
            }
        }
#ifdef RD_FULLSCREEN_WALLPAPER
   // Finally zoom.
    scaleSize.iHeight =(TInt)(calcres.iZoomMul*(TReal32)scaleSize.iHeight+0.5f);
    scaleSize.iWidth =(TInt)(calcres.iZoomMul*(TReal32)scaleSize.iWidth+0.5f);
#else
    if (calcres.iZoomMul < 1.0f)
        {
        scaleSize.iHeight =(TInt)(calcres.iZoomMul*(TReal32)scaleSize.iHeight+0.5f);
        scaleSize.iWidth =(TInt)(calcres.iZoomMul*(TReal32)scaleSize.iWidth+0.5f);
        }
#endif // RD_FULLSCREEN_WALLPAPER

    if (scaleSize != bitmapsize)
        {
        iBitmapScaler->Scale(&iStatus, *aBitmap, scaleSize, EFalse);
        SetActive();
        BeginWait();
        User::LeaveIfError(iConversionError);
        }
    }

// -----------------------------------------------------------------------------
// DivAndRoundUp - divides and rounds up.
// -----------------------------------------------------------------------------
//
TInt DivAndRoundUp( const TInt aNumber, const TInt aDivider )
    {
    TInt result = aNumber/aDivider;
    if( aNumber%aDivider )
        {
        result+=1;
        }
    return result;
    }

// -----------------------------------------------------------------------------
// CAknsSrvImageConverter::DecodeImageL
// -----------------------------------------------------------------------------
//
void CAknsSrvImageConverter::DecodeImageL(
    RFs& aRFs, const TDesC& aFilename,
    const TSize& aTargetSize,
    CFbsBitmap*& aBitmap, CFbsBitmap*& aMask ,
    const TSize& aMaxSize)
    {
    TSize realsize = aTargetSize;
    TBool testDecode = (realsize == TSize(-1,-1));
    if ( testDecode )
        {
        realsize = TSize(10,10);
        }
    
    CImageDecoder* decoder = NULL;
    
    if ( ((aFilename).Right(4).CompareF( KAknsSkinSrvJpegFileExt1 ) == 0) 
        || ((aFilename).Right(5).CompareF( KAknsSkinSrvJpegFileExt2 ) == 0) )
    	{
        TRAPD( err, {decoder = CExtJpegDecoder::FileNewL( CExtJpegDecoder::EHwImplementation,
                           aRFs, aFilename,CImageDecoder::EOptionAlwaysThread );});
        if ( err != KErrNone )
            {
            decoder = CImageDecoder::FileNewL( aRFs,aFilename,
							CImageDecoder::EOptionAlwaysThread,KImageTypeJPGUid);
            }
        }
     else
         {
         decoder = CImageDecoder::FileNewL( aRFs, aFilename,CImageDecoder::EOptionAlwaysThread);
         }
        
    CleanupStack::PushL(decoder);
    TFrameInfo frameinfo = decoder->FrameInfo();
    TDisplayMode mode;
    
    TSize imageSize = decoder->FrameInfo(0).iOverallSizeInPixels;
	if( imageSize.iWidth*imageSize.iHeight > aMaxSize.iWidth*aMaxSize.iHeight  )
		{
        // Image too large 
        User::Leave( KErrTooBig );
		} 

    if (frameinfo.iFlags & TFrameInfo::ECanDither)
        {
        if ( testDecode )
            {
            mode = EColor256;
            }
        else
            {
            mode = EColor64K;
            }
        }
    else
        {
        mode = frameinfo.iFrameDisplayMode;
        }

    TSize bitmapsize = frameinfo.iOverallSizeInPixels;
    //Comment out for BUG ECLG-7NCFUG
//    TBool skipReSizing = EFalse;
//    TInt frameCount = decoder->FrameCount();
//    if ( ((aFilename).Right(4).CompareF( KAknsSkinSrvGifFileExt ) == 0) && frameCount > 1 )
//        {
//       skipReSizing = ETrue;
//        }

//    // Skip resizing for animated gifs.
//    if ( !skipReSizing )
//        {
        if (bitmapsize.iWidth  >= realsize.iWidth*2&&
            bitmapsize.iHeight >= realsize.iHeight*2)
            {
            // 1/2 size
            bitmapsize.iWidth = DivAndRoundUp(frameinfo.iOverallSizeInPixels.iWidth, 2);
            bitmapsize.iHeight = DivAndRoundUp(frameinfo.iOverallSizeInPixels.iHeight, 2);
            if (bitmapsize.iWidth  >= realsize.iWidth*2&&
                bitmapsize.iHeight >= realsize.iHeight*2)
                {
                // 1/4 size
                bitmapsize.iWidth = DivAndRoundUp(frameinfo.iOverallSizeInPixels.iWidth, 4);
                bitmapsize.iHeight = DivAndRoundUp(frameinfo.iOverallSizeInPixels.iHeight, 4);
                if (bitmapsize.iWidth  >= realsize.iWidth*2&&
                    bitmapsize.iHeight >= realsize.iHeight*2)
                    {
                    // 1/8 size
                    bitmapsize.iWidth = DivAndRoundUp(frameinfo.iOverallSizeInPixels.iWidth, 8);
                    bitmapsize.iHeight = DivAndRoundUp(frameinfo.iOverallSizeInPixels.iHeight, 8);
                    }
                }
            }
//        }

    aBitmap = new (ELeave) CFbsBitmap;
    User::LeaveIfError(aBitmap->Create(bitmapsize, mode));
    CleanupStack::PushL(aBitmap);
    // Does the image contain some kind of mask
    if (frameinfo.iFlags & TFrameInfo::ETransparencyPossible)
        {
        aMask = new (ELeave) CFbsBitmap;
        // alpha channel mask
        if (frameinfo.iFlags & TFrameInfo::EAlphaChannel)
            {
            User::LeaveIfError(aMask->Create(bitmapsize, EGray256));
            }
        // normal 1 bit mask
        else
            {
            User::LeaveIfError(aMask->Create(bitmapsize, EGray2));
            }
        CleanupStack::PushL(aMask);
        }

    TRequestStatus status;
    if (aMask)
        {
        decoder->Convert(&status, *aBitmap, *aMask,0);
        }
    else
        {
        decoder->Convert(&status, *aBitmap,0);
        }

    User::WaitForRequest(status);
    if ( status.Int() || testDecode )
        {
        if (aMask)
            {
            CleanupStack::Pop(2); // bitmap, mask
            }
        else
            {
            CleanupStack::Pop( aBitmap );
            }
        CleanupStack::PopAndDestroy( decoder );

        delete aBitmap;
        delete aMask;
        aBitmap = NULL;
        aMask = NULL;
        User::Heap().Compress();

        // Test decode successful.
        if ( testDecode && !status.Int() )
            {
            return;
            }
        // Decode (test or normal) failed.
        else
            {
            User::Leave(status.Int());
            }
        }

    // Skip image scale&crop with test decode.
    if ( !testDecode )
        {
        CAknsSrvImageConverter* converter = CAknsSrvImageConverter::NewL();
        CleanupStack::PushL(converter);
        converter->ScaleAndCropImageL(aBitmap, aTargetSize );
        if (aMask)
            {
            converter->ScaleAndCropImageL(aMask, aTargetSize );
            }
        CleanupStack::PopAndDestroy(converter);

        if (aMask)
            {
            CleanupStack::Pop(2); // bitmap, mask
            }
        else
            {
            CleanupStack::Pop( aBitmap );
            }
        CleanupStack::PopAndDestroy( decoder );
        }
    // Compress the heap after image conversion as
    // image decoder seems to leave heap uncompressed
    User::Heap().Compress();
    }

// End of file
