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
* Description:    CSvgtFbsRasterizer implementation.
*
*/

#include "SvgtFbsRasterizer.h"
#include "fbsrasterizerpanics.h"
#include "SvgtRegisteredBitmap.h"
#include "svgtgraphicsinterface.h"
#include <e32std.h>
#include <nvg.h>
#include <AknIconHeader.h>
#include <AknIconUtils.h>
#include <vgcontext.h>
#include <e32cmn.h>
#include <bitstd.h>
#include <bitdev.h>

#include "SvgtRasterizerOOMPropertyMonitor.h"

TBool operator==(const CFbsRasterizer::TBitmapDesc& aBitmapDesc1, 
				 const CFbsRasterizer::TBitmapDesc& aBitmapDesc2)
	{
	return ((&aBitmapDesc1 == &aBitmapDesc2)
			|| (aBitmapDesc1.iSizeInPixels == aBitmapDesc2.iSizeInPixels
				&& aBitmapDesc1.iDispMode == aBitmapDesc2.iDispMode
				&& aBitmapDesc1.iDataType == aBitmapDesc2.iDataType
				&& aBitmapDesc1.iData == aBitmapDesc2.iData
				&& aBitmapDesc1.iDataSize == aBitmapDesc2.iDataSize));	
	}

void CleanupVGImage( TAny* aObj )
    {
    VGImage * imageToDestroy = reinterpret_cast<VGImage *>(aObj); 
    if (imageToDestroy && *imageToDestroy != VG_INVALID_HANDLE)
        {
        vgDestroyImage(*imageToDestroy);
        }
    }

/** Create a new rasterizer.
@return A pointer to a newly constructed CFbsRasterizer object if successful,
or NULL if no memory is available.
 */
EXPORT_C CFbsRasterizer* CSvgtFbsRasterizer::New()
	{
	CSvgtFbsRasterizer* self = new CSvgtFbsRasterizer;
	if ( self )
	    {
	    self->InitializeRasterizer();
	    }
	return self;
	}

/** Constructor */
CSvgtFbsRasterizer::CSvgtFbsRasterizer()
:iRegisteredBmps(_FOFF(CSvgtRegisteredBitmap, iLink)), iRecentBmps(_FOFF(CSvgtRegisteredBitmap, iLink))
	            {

	            }

CSvgtFbsRasterizer::~CSvgtFbsRasterizer()
    {
    while (!iRegisteredBmps.IsEmpty())
        {
        delete iRegisteredBmps.First();
        }
    while (!iRecentBmps.IsEmpty())
        {
        delete iRecentBmps.First();
        }
    
    delete iNvgEngine;
    delete iGraphicsInterface;
    if ( iMatricesUpdated )
        {
        RestoreMatrices();
        }
    delete iMonitor;//OOM
    }

void CSvgtFbsRasterizer::ChangeCacheLimit( TBool aChangeCacheLimit )//OOM
    {
    iCacheLimit = KMaxRecentBmpCacheSize;

    if(aChangeCacheLimit)
        {
        RProcess currentProcess;
        iCacheLimit = GetCacheLimit(currentProcess.SecureId());
        }
    }

/** Register a bitmap with this rasterizer for rendering. In this example the extended 
bitmap data is just a buffer that is copied when BeginBitmap() is called and deleted when
EndBitmap() is called for the same bitmap. The only display modes supported by this example
raterizer are EColor16MU and EColor16MA
*/
void CSvgtFbsRasterizer::BeginBitmap(TInt64 aBitmapId, const TBitmapDesc& aBitmapDesc, const TRegion* aRegionOfInterest)
	{
	TRAPD(beginErr, DoBeginBitmapL(aBitmapId, aBitmapDesc, aRegionOfInterest));
	// If there is error in begin, the consecutive fulction calls should be invalid.
	iIsRasterizerValidState = ( beginErr == KErrNone); 
	}

void CSvgtFbsRasterizer::DoBeginBitmapL(TInt64 aBitmapId, const TBitmapDesc& aBitmapDesc,
        const TRegion* /* aRegionOfInterest */)
    {
    // Check that the passed extended bitmap description is valid
    if ((aBitmapDesc.iSizeInPixels.iWidth <= 0) || (aBitmapDesc.iSizeInPixels.iHeight <= 0)
            || (aBitmapDesc.iDataType != KUidNvgProprietaryFormat)
            || (!aBitmapDesc.iData )
            || (aBitmapDesc.iDataSize <= 0))
        {
        return;
        }
    // Check if the bitmap is already registered
    CSvgtRegisteredBitmap* foundRegBmp = RegisteredBitmap(aBitmapId);
    if (!foundRegBmp)
        {
        // Not registered: check if the bitmap is in the cache of recently used bitmaps
        foundRegBmp = RecentBitmap(aBitmapId);
        if (foundRegBmp)
            {
            // Take the bitmap out of the cache and put it in the list of registered bitmaps
            foundRegBmp->iLink.Deque();
            iTotalRecentBmpSize -= foundRegBmp->DataSize();
            iRegisteredBmps.AddLast(*foundRegBmp);
            }
        }
    if (foundRegBmp)
        {
        // This bitmap is already registered, just increment its reference count and return
        foundRegBmp->iRefCount++;
        return;
        }
    
    CSvgtRegisteredBitmap* regBmp = new CSvgtRegisteredBitmap(aBitmapId);
    if (!regBmp)
        {
        return;
        }
    TRAPD(err, RenderL(aBitmapDesc, *regBmp));
    if (err != KErrNone)
        {
        delete regBmp;
        return;
        }
    // Success
    iRegisteredBmps.AddLast(*regBmp);
    regBmp->iRefCount = 1;
    }

/** Unregister an extended bitmap from this rasterizer. 
@see CFbsRasterizer::EndBitmap()
@see BeginBitmap()
 */
void CSvgtFbsRasterizer::EndBitmap(TInt64 aBitmapId)
	{
	CSvgtRegisteredBitmap* regBmp = RegisteredBitmap(aBitmapId);
	    if (regBmp)
	        {
	        if (--regBmp->iRefCount == 0)
	            {
            // Put unregistered bitmap in the cache of recently used bitmaps if wholly pre-rendered
            // and there is an active scheduler to add the idle-time clean-up active object to

            regBmp->iLink.Deque();
            if (regBmp->DataSize() <= iCacheLimit)
                {
                iRecentBmps.AddFirst(*regBmp);
                iTotalRecentBmpSize += regBmp->DataSize();
                }
            else
                {
                delete regBmp; // deleting the registered bitmap in a case when raster bitmap size is bigger than cache
                }	
                
            // Delete the least recently used bitmaps if the maximum size of the cache is exceeded
            while (iTotalRecentBmpSize > iCacheLimit)
                {
                regBmp = iRecentBmps.Last();
                iTotalRecentBmpSize -= regBmp->DataSize();
                delete regBmp;
                }
            }
        }
    }

/** Return a scanline from the passed extended bitmap given it's bitmap id. 
 */
const TUint32* CSvgtFbsRasterizer::ScanLine(TInt64 aBitmapId, const TPoint& aPixel, TInt aLength)
	{
	CSvgtRegisteredBitmap* regBmp = RegisteredBitmap(aBitmapId);
    if (!regBmp)
        {
        return NULL;
        }
    if (!TRect(regBmp->SizeInPixels()).Contains(aPixel)
        || (aLength > (regBmp->SizeInPixels().iWidth - aPixel.iX)))
        {
        return NULL;
        }

    return PtrAdd(regBmp->DataAddress(), aPixel.iY * regBmp->DataStride());
	}

/**  No extension interaces are available, KErrNotSupported for all aInterfaceId passed.
@see CFbsRasterizer::GetInterface()
 */
TInt CSvgtFbsRasterizer::GetInterface(TUid aInterfaceId, TAny*& aInterface)
    {
    aInterface = NULL;
    TInt err = KErrNone;

    switch (aInterfaceId.iUid)
        {
        case KUidFbsRasterizerClearCache:
            aInterface = static_cast<MFbsRasterizerClearCache*>(this);
            break;
        case KUidEnableSvgtRasterizer:
            aInterface = static_cast<MSvgtRasterizerCacheLimitHandler*>(this);
            break;
        default:
            err = KErrExtensionNotSupported;                        
            break;
        }

    return err;


    }


/** Gets a bitmap that has been registered with this rasterizer.

@param aBitmapId The ID of the bitmap to check for.

@return A pointer to the registered bitmap if found, NULL otherwise.
 */
CSvgtRegisteredBitmap* CSvgtFbsRasterizer::RegisteredBitmap(TInt64 aBitmapId)
    {
    TDblQueIter<CSvgtRegisteredBitmap> iter(iRegisteredBmps);
    while (CSvgtRegisteredBitmap* regBmp = iter++)
        {
        if (regBmp->iBitmapId == aBitmapId)
            {
            return regBmp;
            }
        }
    return NULL;
    }

/** Gets a bitmap that has been recently used with this rasterizer.

@param aBitmapId The ID of the bitmap to check for.

@return A pointer to the recently used bitmap if found, NULL otherwise.
 */
CSvgtRegisteredBitmap* CSvgtFbsRasterizer::RecentBitmap(TInt64 aBitmapId)
    {
    TDblQueIter<CSvgtRegisteredBitmap> iter(iRecentBmps);
    while (CSvgtRegisteredBitmap* regBmp = iter++)
        {
        if (regBmp->iBitmapId == aBitmapId)
            {
            return regBmp;
            }
        }
    return NULL;
    }

void CSvgtFbsRasterizer::InitializeRasterizer()
    {
    TBool cacheEnabled=TRUE;
    RProperty::Get(KSvgtPropertyCategory, ESvgtPropertyBool, cacheEnabled);
    iCacheLimit = KMaxRecentBmpCacheSize;
    if(cacheEnabled)
        {
        RProcess currentProcess;
        iCacheLimit = GetCacheLimit(currentProcess.SecureId());
        }
    TRAPD(err, iMonitor = CSvgtRasterizerOOMPropertyMonitor::NewL());
    iIsRasterizerValidState = ( err == KErrNone);
    }

void CSvgtFbsRasterizer::RenderBitmapL(CSvgtRegisteredBitmap& aPixMap, CFbsBitmap * aMask, 
                                        const TBitmapDesc& aBitmapDesc, TPtr8& aDataPtr8, TAknIconHeader& aIconHeader)
    {
    TSize newSize = aBitmapDesc.iSizeInPixels;
    UpdateMatrices();
    iMatricesUpdated = ETrue;

    TBool isMargin = aIconHeader.IsMarginCorrection();
    
    VGImage vgImage = VG_INVALID_HANDLE;
        
    if (isMargin)
        {
        vgImage = vgCreateImage((VGImageFormat)  VG_sRGBA_8888_PRE , aBitmapDesc.iSizeInPixels.iWidth,
                                    aBitmapDesc.iSizeInPixels.iHeight, VG_IMAGE_QUALITY_NONANTIALIASED);
        if (vgImage == VG_INVALID_HANDLE)
            {
            User::LeaveIfError(MapOpenVgErrorCodeToSymbian(vgGetError()));
            }
        CleanupStack::PushL( TCleanupItem( CleanupVGImage, &vgImage ) );
        iGraphicsInterface->BindClientBuffer(vgImage);
        }
    User::LeaveIfError(iNvgEngine->DrawNvg(aDataPtr8, newSize, &aPixMap, aMask));
   
    if(isMargin)
        {
        iGraphicsInterface->UnBindClientBuffer(); 
        newSize = ApplyMarginL(vgImage, aBitmapDesc.iSizeInPixels);
        if(newSize!=aBitmapDesc.iSizeInPixels)
        		{
        		User::LeaveIfError(iNvgEngine->DrawNvg(aDataPtr8, newSize, &aPixMap, aMask));
       		  }
       	else
       		  {
       		  vgDrawImage(vgImage);
       		  User::LeaveIfError(MapOpenVgErrorCodeToSymbian(vgGetError()));
            }
        	
        CleanupStack::PopAndDestroy();
        }
    iGraphicsInterface->CopyBitmapL(&aPixMap, aMask);
    
    TUint32 iconColor = aIconHeader.GetIconColor();
    
    if (iconColor & 0xFFFFFF)
        {
        CFbsBitmapDevice* dev = CFbsBitmapDevice::NewL( &aPixMap );
        CleanupStack::PushL( dev );
        CFbsBitGc* gc = NULL;
        User::LeaveIfError( dev->CreateContext( gc ) );
        CleanupStack::PushL( gc );
        TRgb color(iconColor);          
        gc->SetBrushColor( color );
        gc->SetPenStyle( CGraphicsContext::ENullPen );
        gc->SetBrushStyle( CGraphicsContext::ESolidBrush );
        // Fill icon with the given color, mask defines the icon shape.
        TPoint origin(0, 0);
        if (newSize != aBitmapDesc.iSizeInPixels)
            {
            origin = TPoint((aBitmapDesc.iSizeInPixels.iWidth - newSize.iWidth)/2 , (aBitmapDesc.iSizeInPixels.iHeight - newSize.iHeight)/2  );
            }
        gc->DrawRect( TRect( origin, newSize ) );
        CleanupStack::PopAndDestroy( 2 ); // dev, gc
        }
    }

void CSvgtFbsRasterizer::RenderMaskL(CSvgtRegisteredBitmap& aPixMap, CFbsBitmap * aMask, 
                                      const TBitmapDesc& aBitmapDesc, TPtr8& aDataPtr8, TAknIconHeader& aIconHeader)
    {
    UpdateMatrices();
    iMatricesUpdated = ETrue;
    TBool isMargin = aIconHeader.IsMarginCorrection();
    
    VGImage vgImage = VG_INVALID_HANDLE;
    if (isMargin)
        {
        vgImage = vgCreateImage((VGImageFormat)  VG_sRGBA_8888_PRE , aBitmapDesc.iSizeInPixels.iWidth, 
                                     aBitmapDesc.iSizeInPixels.iHeight, VG_IMAGE_QUALITY_NONANTIALIASED);
        if (vgImage == VG_INVALID_HANDLE)
            {
            User::LeaveIfError(MapOpenVgErrorCodeToSymbian(vgGetError()));
            }
        CleanupStack::PushL( TCleanupItem( CleanupVGImage, &vgImage ) );
        iGraphicsInterface->BindClientBuffer(vgImage);
        }
        
    VGfloat color[4] = { 0.0f, 0.0f, 0.0f, 0.0f };
    vgSeti(VG_SCISSORING, VG_FALSE);
    vgSetfv(VG_CLEAR_COLOR, 4, color);
    vgClear(0, 0, aBitmapDesc.iSizeInPixels.iWidth, aBitmapDesc.iSizeInPixels.iHeight);

    User::LeaveIfError(iNvgEngine->DrawNvg(aDataPtr8, aBitmapDesc.iSizeInPixels, &aPixMap, aMask));
    if (isMargin)
        {
        iGraphicsInterface->UnBindClientBuffer();
        TSize newSize = ApplyMarginL(vgImage, aBitmapDesc.iSizeInPixels);
        if(newSize!=aBitmapDesc.iSizeInPixels)
        		{
        		User::LeaveIfError(iNvgEngine->DrawNvg(aDataPtr8, newSize, &aPixMap, aMask));
       		  }
       	else
       		  {
       		  vgDrawImage(vgImage);
       		  User::LeaveIfError(MapOpenVgErrorCodeToSymbian(vgGetError()));
            }
        CleanupStack::PopAndDestroy();
        }
    
    TSize bitmapSize = aPixMap.SizeInPixels();

    const TInt KOriginalFilterMasks = vgGeti( VG_FILTER_CHANNEL_MASK );
    vgSeti( VG_FILTER_CHANNEL_MASK, VG_ALPHA );

    const TInt KStride = CFbsBitmap::ScanLineLength(bitmapSize.iWidth, aPixMap.DisplayMode());
    VGImageFormat format = ( aPixMap.DisplayMode() == EGray256 ) ? VG_A_8 : VG_BW_1;
    
    aPixMap.BeginDataAccess();
    TUint * data = (TUint*)((TUint)aPixMap.DataAddress() + ( KStride * ( aPixMap.SizeInPixels().iHeight - 1  ) ) );
    vgReadPixels( data, -KStride, format, 0, 0, bitmapSize.iWidth, bitmapSize.iHeight );
    aPixMap.EndDataAccess();

    vgSeti( VG_FILTER_CHANNEL_MASK, KOriginalFilterMasks );

    }

void CSvgtFbsRasterizer::RenderL( const TBitmapDesc& aBitmapDesc, CSvgtRegisteredBitmap& aBitmap  )
    {
    
    iIsRasterizerValidState = EFalse;

    User::LeaveIfError(aBitmap.Create(aBitmapDesc.iSizeInPixels, aBitmapDesc.iDispMode));
    
    if (!iGraphicsInterface)
        {
        iGraphicsInterface = CSvgtGraphicsInterface::CreateImplementationL();
        }
    
    iGraphicsInterface->InitializeL(aBitmapDesc.iSizeInPixels);
    iIsRasterizerValidState  = ETrue;

    TPtr8 bmpDataPtr8((TUint8*)aBitmapDesc.iData, aBitmapDesc.iDataSize);
    
    if (!iNvgEngine)
        {
        iNvgEngine = CNvgEngine::NewL();
        }
        
    iNvgEngine->SetVGImageBinder(iGraphicsInterface);
    
    TUint8 *temp = (TUint8 *)bmpDataPtr8.Ptr();
    TPtr8 IconHeaderPtr(temp, KIconHeaderLength, KIconHeaderLength);

    TAknIconHeader iconheader(IconHeaderPtr);
    //skipping header bytes
    temp = temp + KIconHeaderLength;
    TPtr8 newDataPtr8(temp, (bmpDataPtr8.MaxLength() - KIconHeaderLength), (bmpDataPtr8.MaxLength() - KIconHeaderLength));

    CFbsBitmap* mask = NULL;
    
    VGfloat color[4] = { 1.0f, 1.0f, 1.0f, 0.0f };
    vgSeti(VG_SCISSORING, VG_FALSE);
    vgSetfv(VG_CLEAR_COLOR, 4, color);
    vgClear(0, 0, aBitmapDesc.iSizeInPixels.iWidth, aBitmapDesc.iSizeInPixels.iHeight);

    vgSeti(VG_MATRIX_MODE, VG_MATRIX_IMAGE_USER_TO_SURFACE);
    vgLoadIdentity();

    vgSeti(VG_MATRIX_MODE, VG_MATRIX_PATH_USER_TO_SURFACE);
    vgLoadIdentity();

    TInt rotAngle = iconheader.GetRotation();
    // setting the rotation angle
    iNvgEngine->Rotate(-rotAngle,  aBitmapDesc.iSizeInPixels.iWidth >> 1,aBitmapDesc.iSizeInPixels.iHeight >>1);
    
    //setting preserve aspect ratio
    TNvgAlignStatusType alignTypeValue = ENvgPreserveAspectRatio_XmidYmid;
    TNvgMeetOrSliceType meetOrSliceTypeValue = ENvgMeet;
    
    switch ( iconheader.GetScaleMode() )
        {
        case EAspectRatioPreserved: // fall through
            {
            // use default
            break;
            }
            // Ensures NVG content fully covers the area of the icon whilst preserving aspect ratio.
        case EAspectRatioPreservedSlice:
            {
            // alignTypeValue use default
            meetOrSliceTypeValue = ENvgSlice;
            break;
            } 
            /* EAspectRatioPreservedAndUnusedSpaceRemoved is mapped to the same values as EAspectRatioNotPreserved
             * because we already have a frame buffer with the dimensions that preserves the aspect ratio.
             * This mapping ensures that NVG engine does not calculate aspect ratio twice and potentially resulting in precision loss.*/
        case EAspectRatioPreservedAndUnusedSpaceRemoved:                        
        case EAspectRatioNotPreserved:
            {            
            alignTypeValue = ENvgPreserveAspectRatio_None;
            // meetOrSliceTypeValue use default
            break;
            }
        default:
            {
            User::Leave(KErrCorrupt);
            }
        }    
    iNvgEngine->SetPreserveAspectRatio(alignTypeValue, meetOrSliceTypeValue);

    iMatricesUpdated = EFalse;
    if (iconheader.IsMask())
        {
        RenderMaskL(aBitmap, mask, aBitmapDesc, newDataPtr8, iconheader);
        }
    else
        {
        RenderBitmapL(aBitmap, mask, aBitmapDesc, newDataPtr8, iconheader);
        }
    
    if ( iMatricesUpdated )
        {
        RestoreMatrices();
        iMatricesUpdated = EFalse;
        }
       iNvgEngine->ResetNvgState();
    }

void CSvgtFbsRasterizer::UpdateMatrices()
    {
    iUserStrokePaint = vgGetPaint(VG_STROKE_PATH);
    
    iUserFillPaint = vgGetPaint(VG_FILL_PATH);
    
    iMatrixMode = vgGeti(VG_MATRIX_MODE);
    
    vgSeti(VG_MATRIX_MODE, VG_MATRIX_PATH_USER_TO_SURFACE);
    
    vgGetMatrix(iPathMatrix);
    
    vgSeti(VG_MATRIX_MODE, VG_MATRIX_IMAGE_USER_TO_SURFACE);
    
    vgGetMatrix(iImageMatrix);
    
    vgSeti(VG_MATRIX_MODE, VG_MATRIX_FILL_PAINT_TO_USER);
    
    vgGetMatrix(iFillPaintMatrix);
    
    vgSeti(VG_MATRIX_MODE, VG_MATRIX_STROKE_PAINT_TO_USER);
    
    vgGetMatrix(iStrokePaintMatrix);
    
    vgSeti(VG_MATRIX_MODE, iMatrixMode);
    
    }

void CSvgtFbsRasterizer::RestoreMatrices()
    {
    vgSeti(VG_MATRIX_MODE, VG_MATRIX_PATH_USER_TO_SURFACE);
    
    vgLoadMatrix(iPathMatrix);
    
    vgSeti(VG_MATRIX_MODE, VG_MATRIX_IMAGE_USER_TO_SURFACE);
    
    vgLoadMatrix(iImageMatrix);
    
    vgSeti(VG_MATRIX_MODE, VG_MATRIX_FILL_PAINT_TO_USER);
    
    vgLoadMatrix(iFillPaintMatrix);
    
    vgSeti(VG_MATRIX_MODE, VG_MATRIX_STROKE_PAINT_TO_USER);
    
    vgLoadMatrix(iStrokePaintMatrix);
    
    vgSeti(VG_MATRIX_MODE, iMatrixMode);
    
    vgSetPaint(iUserStrokePaint, VG_STROKE_PATH);
    
    vgSetPaint(iUserFillPaint, VG_FILL_PATH);
    }


TSize CSvgtFbsRasterizer::ApplyMarginL(VGImage aVgImage, TSize aSize)
    {
    HBufC8* buf = HBufC8::NewL(aSize.iWidth* sizeof(TUint32));
    TUint32* ptr = (TUint32*)(buf->Des()).Ptr();
    
    const TInt validMargin = aSize.iHeight * 12 / 100;
    
    const TInt Ha = aSize.iHeight;
    TInt hTa = 0;
    TInt hNT = 0;
    TInt C = 0;
    TInt hNTN = Ha - 2.0 * 0.12 * Ha;   
    TReal R = 1.0;
    TInt HaN = Ha;
    
    const TInt lastColumn = aSize.iWidth - 1;
    for ( TInt curRow = 0; curRow < validMargin; curRow++ )
        {
        const TInt y = (aSize.iHeight - 1) - curRow; // h - 1 is the last line
        
        vgGetImageSubData(aVgImage, ptr, sizeof(TUint)*aSize.iWidth, VG_sRGBA_8888_PRE, 0, y, aSize.iWidth, 1);
                                
        for ( TInt s = lastColumn; s >= 0; --s )
            {
            if ( ptr[s] & 0x000000FF ) 
                {
                hTa = curRow;
                hNT = Ha - 2 * hTa;
                C = 2 * hTa;
                R = ( ( (TReal)hNTN / (TReal)hNT ) > 1.0 ) ? 1 : (TReal)hNTN / (TReal)hNT;
                HaN = Ha * R - C * R + C;
                curRow = validMargin; // to exit the outer loop
                break; // to exit the inner
                }
            
            }
        }
    
    delete buf;
        
    if(aSize.iHeight > HaN)
        {
        
        VGfloat color[4] = { 1.0f, 1.0f, 1.0f, 0.0f }; 
        
        vgSetfv(VG_CLEAR_COLOR, 4, color);
        vgClear(0, 0, aSize.iWidth,aSize.iHeight);
        
        vgSeti(VG_MATRIX_MODE, VG_MATRIX_PATH_USER_TO_SURFACE);   
        VGfloat Hr = (VGfloat)HaN/(aSize.iHeight);
        
        TInt WaN = aSize.iWidth*Hr;
        
        VGfloat Tx = (aSize.iHeight-HaN)/2;
        VGfloat Ty = (aSize.iWidth-WaN)/2;
        vgTranslate(Tx,Ty);
        
        return( TSize(HaN,WaN));    
        }
    return aSize;
    
    }



TInt CSvgtFbsRasterizer::MapOpenVgErrorCodeToSymbian(TInt aErrorCode)
    {
    switch( aErrorCode )
        {
        case VGI_OK:
            return KErrNone;
            
        case VGI_ERROR_OUT_OF_MEMORY:
            return KErrNoMemory;
            
        case VGI_ERROR_INVALID_ARGUMENTS:
            return KErrArgument;
            
        case VGI_ERROR_ALREADY_EXISTS:
            return KErrAlreadyExists;
            
        case VGI_ERROR_COLORSPACE_NOT_SUPPORTED:
            return KErrNotSupported;
            
        case VGI_ERROR_NOT_SUPPORTED:
            return KErrNotSupported;

        case VGI_ERROR_ILLEGAL_IMAGE_HANDLE:
            return KErrBadHandle;

        case VGI_ERROR_IMAGE_IN_USE:
            return KErrInUse;

        case VGI_ERROR_ILLEGAL_OPERATION:
            return KErrPermissionDenied;

        default:
            return KErrUnknown;
        }

    }

TInt CSvgtFbsRasterizer::GetCacheLimit(TUid aProcessUID) const
{
    TInt cacheLimit = KMaxRecentBmpCacheSize;
    
    RProcess currentProcess;
    
    if(aProcessUID == TUid::Uid(0x10003B20)) // Alf 
        {
        cacheLimit = 0x600000; 
        }
    else if(aProcessUID == TUid::Uid(0x10281855)) // Peninputserver
        {
        cacheLimit = 0x133333;
        }
    
    return cacheLimit;
}
void CSvgtFbsRasterizer::ClearCache()//OOM 
    {
    CSvgtRegisteredBitmap* regBmp=NULL;
    if(iCacheLimit>KMaxRecentBmpCacheSize)
        { 
        while (!iRecentBmps.IsEmpty()&&(iTotalRecentBmpSize > KMaxRecentBmpCacheSize))
            {
            regBmp = iRecentBmps.Last();
            iTotalRecentBmpSize -= regBmp->DataSize();
            delete regBmp;
            }
        }
    }
