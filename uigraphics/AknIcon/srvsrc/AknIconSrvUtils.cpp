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
* Description:  Implementation of class AknIconSrvUtils.
*
*/



// INCLUDE FILES

#include <fbs.h>
#include <gdi.h>
#include <bitdev.h>
#include <mifconvdefs.h>

#include "AknIconSrvUtils.h"
#include "AknIconFormatHandler.h"
#include "AknIconLoader.h"
#include "AknIconSrv.h"
#include "AknIconFormatHandlerFactory.h"
#include "AknIconSrvDef.h"

#include "AknBitmap.h"
// CONSTANTS

// ================= MEMBER FUNCTIONS ==========================================

TPtrC8 AknIconSrvUtils::InitIconDataAndHandlerLC(
    CAknIconLoader* aLoader,
    RPointerArray<MAknIconFormatHandler>& aHandlerList,
    MAknIconFormatHandler*& aHandler,
    const TAknIconParams& aParams,
    TBool aAnimated )
    {
    CleanupStack::PushL( TCleanupItem( CleanupFreeIcon, aLoader ) );

    if ( aLoader->IconAnimatedL( aParams.iBitmapId ) && !aAnimated )
        {
        User::Leave( KAknIconSrvCodeAnimated );
        }

    TInt type = aLoader->IconTypeL( aParams.iBitmapId );
    
#ifdef _NGATESTING        
    type = aLoader->GetDerivedIconTypeL(type);
#endif
    
    // Check if handler is already present, if so then return with same pointer
    for ( TInt lIndex = 0; lIndex < aHandlerList.Count(); lIndex++ )
        {
        if ( aHandlerList[ lIndex ]->IconFormatType() == type )
            {
            aHandler = aHandlerList[ lIndex ]; 
            break;
            }
        }

    // No Handler found, create one and add to list
    if ( !aHandler )
        {
        aHandler = AknIconFormatHandlerFactory::NewIconFormatHandlerL( type );
        aHandlerList.Append( aHandler );
        aHandler->SetAnimated( aAnimated );
        }

    return aLoader->IconL( aParams.iBitmapId );
    }

TPtrC8 AknIconSrvUtils::InitIconDataAndHandlerLC(
    CAknIconLoader* aLoader,
    MAknIconFormatHandler*& aHandler,
    TInt aIconId,
    TBool aAnimated )
    {
    CleanupStack::PushL( TCleanupItem( CleanupFreeIcon, aLoader ) );

    if ( aLoader->IconAnimatedL( aIconId ) && !aAnimated )
        {
        User::Leave( KAknIconSrvCodeAnimated );
        }

    TInt type = aLoader->IconTypeL( aIconId );
#ifdef _NGATESTING        
    type = aLoader->GetDerivedIconTypeL(type);
#endif
    if ( !aHandler )
        {
        aHandler = AknIconFormatHandlerFactory::NewIconFormatHandlerL( type );
        aHandler->SetAnimated( aAnimated );
        }

    return aLoader->IconL( aIconId );
    }

// -----------------------------------------------------------------------------
// AknIconSrvUtils::RenderPreparedIconL
// -----------------------------------------------------------------------------
//
TAknContentDimensions AknIconSrvUtils::RenderPreparedIconL(
    MAknIconFormatHandler& aHandler,
    CFbsBitmap* aBitmap,
    CFbsBitmap* aMask, // may be NULL
    TDisplayMode aBitmapDepth,
    TDisplayMode aPreferredDepth,
    const TSize& aSize,
    TScaleMode aMode,
    TInt aRotationAngle,
    TRgb aColor,
    TInt /*aBitmapId*/,
    TInt /*aMaskId*/,
    TBool isAppIcon)
    {
    TSize resultSize( aSize );
    CAknBitmap* aknIcon = CAknBitmap::DynamicCast(aBitmap);

    TAknContentDimensions dimensions;
    TBool dimensionsRetrieved = EFalse;

    if ( aMode == EAspectRatioPreservedAndUnusedSpaceRemoved )
        {
        if ( !resultSize.iWidth || !resultSize.iHeight )
            {
            resultSize.iWidth = 0;
            resultSize.iHeight = 0;
            }
        else
            {
            aHandler.GetContentDimensionsL( dimensions );
            dimensionsRetrieved = ETrue;
            GetAspectRatioPreservedSize( dimensions, resultSize );
            }
        }
    
    TDisplayMode definedDepth = aBitmapDepth;
    // Change display mode to the closest one supported by the engine.
    aHandler.SupportedDisplayMode( aBitmapDepth, aPreferredDepth );    

    CFbsBitmap* renderBitmap = aBitmap;

    // If EGray256 mode was defined, and the engine did not support it,
    // render the icon first in a temporary bitmap.

    if ( definedDepth == EGray256 && definedDepth != aBitmapDepth )
        {
        renderBitmap = new( ELeave ) CFbsBitmap;
        CleanupStack::PushL( renderBitmap );
        }

    aHandler.SetScaleMode( aMode );
    aHandler.SetRotation( aRotationAngle );
    aknIcon = CAknBitmap::DynamicCast(aBitmap);
    aHandler.RenderPreparedIconL(renderBitmap, aMask ,resultSize, aBitmapDepth, EGray256,aColor, isAppIcon);

    // Copy from temp. render bitmap to real bitmap,
    // and convert display depth to EGray256.
    if ( renderBitmap != aBitmap )
        {
        User::LeaveIfError( aBitmap->Create( resultSize, EGray256 ) );

        CFbsBitmapDevice* dev = CFbsBitmapDevice::NewL( aBitmap );
        CleanupStack::PushL( dev );
        CFbsBitGc* gc = NULL;
        User::LeaveIfError( dev->CreateContext( gc ) );
        CleanupStack::PushL( gc );

        gc->BitBlt( TPoint( 0, 0 ), renderBitmap );

        CleanupStack::PopAndDestroy( 3 ); // renderBitmap, dev, gc
        }

    if ( !dimensionsRetrieved )
        {
        aHandler.GetContentDimensionsL( dimensions );
        }

    return dimensions;
    }

// -----------------------------------------------------------------------------
// AknIconSrvUtils::GetAspectRatioPreservedSize
// -----------------------------------------------------------------------------
//
void AknIconSrvUtils::GetAspectRatioPreservedSize(
    const TAknContentDimensions& aDimensions,
    TSize& aSize )
    {
    if ( !aDimensions.iWidth || !aDimensions.iHeight )
        {
        aSize.iWidth = 0;
        aSize.iHeight = 0;
        }
    else
        {
        if ( aSize.iWidth > KMaxTInt16 )
            {
            aSize.iWidth = KMaxTInt16;
            }
        if ( aSize.iHeight > KMaxTInt16 )
            {
            aSize.iHeight = KMaxTInt16;
            }

        TReal32 xScaleFactor = (TReal32)(aSize.iWidth) / aDimensions.iWidth;
        TReal32 yScaleFactor = (TReal32)(aSize.iHeight) / aDimensions.iHeight;

        if ( xScaleFactor > yScaleFactor )
            {
            TReal32 width = aDimensions.iWidth * yScaleFactor; 
            aSize.iWidth = width;
            if ( width - aSize.iWidth > 0 ) //rounding
                {
                aSize.iWidth++;
                }
            }
        else
            {
            TReal32 height = aDimensions.iHeight * xScaleFactor;
            aSize.iHeight = height;
            if ( height - aSize.iHeight > 0 ) //rounding
                {
                aSize.iHeight++;
                }
            }
        }
    }
    
// -----------------------------------------------------------------------------
// AknIconSrvUtils::GetAspectRatioPreservedSize
// -----------------------------------------------------------------------------
//
void AknIconSrvUtils::GetAspectRatioPreservedSize(
    const TSize& aDimensions,
    TSize& aSize,
    TBool aFitToOriginalSize )
    {
    if ( !aDimensions.iWidth || !aDimensions.iHeight )
        {
        aSize.iWidth = 0;
        aSize.iHeight = 0;
        }
    else
        {
        if ( aSize.iWidth > KMaxTInt16 )
            {
            aSize.iWidth = KMaxTInt16;
            }
        if ( aSize.iHeight > KMaxTInt16 )
            {
            aSize.iHeight = KMaxTInt16;
            }

        TInt xScaleFactor = (aSize.iWidth << 16) / aDimensions.iWidth;
        TInt yScaleFactor = (aSize.iHeight << 16) / aDimensions.iHeight;
        
        
        TBool chooseWidthScaling = (xScaleFactor > yScaleFactor);
        
        if (!aFitToOriginalSize)
            {
            chooseWidthScaling = !chooseWidthScaling;
            }

        if ( chooseWidthScaling )
            {
            aSize.iWidth = aDimensions.iWidth * yScaleFactor;
            TBool rounding = aSize.iWidth & 0x8000;

            aSize.iWidth >>= 16;
            if ( rounding )
                {
                aSize.iWidth++;
                }
            }
        else
            {
            aSize.iHeight = aDimensions.iHeight * xScaleFactor;
            TBool rounding = aSize.iHeight & 0x8000;
            
            aSize.iHeight >>= 16;
            if ( rounding )
                {
                aSize.iHeight++;
                }
            }
        }
    }    

// -----------------------------------------------------------------------------
// AknIconSrvUtils::ScaleBitmapIconL
// -----------------------------------------------------------------------------
//
TBool AknIconSrvUtils::ScaleBitmapIconL(
    const TSize& aSize,
    const TScaleMode aMode,
    const TInt aAngle,
    const TRgb aColor,
    CFbsBitmap* aSourceBitmap,
    CFbsBitmap* aSourceMask,
    CFbsBitmap* aTargetBitmap,
    CFbsBitmap* aTargetMask )
    {
    TSize scaledSize( aSize );
    TSize originalSize(aSourceBitmap->SizeInPixels());
    TBool colorIcon = aColor != KColorNotDefined;
    
    // Find out the scaled size according to the given scale mode.
    // Note:In scaling mode EAspectRatioPreservedSlice no need to calculate scaledSize for color icons.
    if ( aMode != EAspectRatioNotPreserved && (aMode != EAspectRatioPreservedSlice || !colorIcon))
        {
        AknIconSrvUtils::GetAspectRatioPreservedSize( originalSize, scaledSize, aMode != EAspectRatioPreservedSlice );
        }

    const TSize& bitmapSize =
        aMode == EAspectRatioPreservedAndUnusedSpaceRemoved ?
        scaledSize : aSize;    

    TDisplayMode colorDepth = colorIcon ?
        EColor64K : aSourceBitmap->DisplayMode();

    User::LeaveIfError( aTargetBitmap->Create( bitmapSize, colorDepth ) );
    
    // Icon should be centered, so calculate x and y margins.
    TInt xMargin = ( bitmapSize.iWidth - scaledSize.iWidth ) / 2;
    TInt yMargin = ( bitmapSize.iHeight - scaledSize.iHeight ) / 2;

    // Target rect inside the target bitmap.
    TRect targetRect( xMargin, yMargin,
        xMargin + scaledSize.iWidth, yMargin + scaledSize.iHeight );

    // Decide if fallback should be forced in ScaleBitmapExtL calls
    TBool forceFallBack = EFalse;
    if ( !colorIcon && aSourceBitmap && !aAngle )
        {
        forceFallBack = AknIconUtils::DoesScaleBitmapUseFallBack( aSourceBitmap );
        }
    if ( aSourceMask && aTargetMask && !aAngle )
        {
        forceFallBack = forceFallBack || AknIconUtils::DoesScaleBitmapUseFallBack( aSourceMask );
        }

    // If color icon, just fill the bitmap with the defined color.
    if ( colorIcon )
        {
        CFbsBitmapDevice* dev = CFbsBitmapDevice::NewL( aTargetBitmap );
        CleanupStack::PushL( dev );
        CFbsBitGc* gc = NULL;
        User::LeaveIfError( dev->CreateContext( gc ) );
        CleanupStack::PushL( gc );
        
        gc->SetBrushColor( aColor );
        gc->SetPenStyle( CGraphicsContext::ENullPen );
        gc->SetBrushStyle( CGraphicsContext::ESolidBrush );
        // Fill icon with the given color, mask defines the icon shape.
        gc->DrawRect( TRect( TPoint( 0, 0 ), bitmapSize ) );

        CleanupStack::PopAndDestroy( 2 ); // dev, gc
        }

    // Otherwise, perform bitmap scaling and rotation as required.
    else
        {
        if ( !aAngle )
            {
            AknIconUtils::ScaleBitmapExtL( targetRect, aTargetBitmap, aSourceBitmap, forceFallBack );
            }
        else
            {
            AknIconUtils::RotateAndScaleBitmapL( 
                targetRect,
                aTargetBitmap,
                aSourceBitmap,
                aAngle );
            }
        }

    // Optional mask is always scaled and rotated as required.
    if ( aSourceMask && aTargetMask)
        {
        User::LeaveIfError(aTargetMask->Create( bitmapSize, aSourceMask->DisplayMode() ) );
            

        // If target mode is EAspectRatioPreserved, there may be unused parts
        // in the bitmap, so need to initialize soft masks black before scaling.
        if ( aMode == EAspectRatioPreserved && aTargetMask->DisplayMode() == EGray256 )
            {
            CFbsBitmapDevice* dev = CFbsBitmapDevice::NewL( aTargetMask );
            CleanupStack::PushL( dev );
            CFbsBitGc* gc = NULL;
            User::LeaveIfError( dev->CreateContext( gc ) );
            CleanupStack::PushL( gc );
            gc->SetBrushColor( KRgbBlack );
            gc->SetBrushStyle( CGraphicsContext::ESolidBrush );
            gc->Clear();
            CleanupStack::PopAndDestroy(2); // dev, gc
            }

        if ( !aAngle )
            {
            AknIconUtils::ScaleBitmapExtL( targetRect, aTargetMask, aSourceMask, forceFallBack );
            }
        else
            {
            AknIconUtils::RotateAndScaleBitmapL( 
                targetRect,
                aTargetMask,
                aSourceMask,
                aAngle );
            }
        }

    return colorIcon;    
    }


LOCAL_C TInt CheckTransparency(const CFbsBitmap* aBmp, TDes8& aBuffer, TInt aMask, TDisplayMode aMode)
    {
    // Note: The following calculations use the below notation.
    //
    //     Ha = Actual height of the bitmap
    //     hTa = Height of the transparent region at the bottom of the bitmap
    //     hNT = Height of the non-transparent region in the bitmap
    //     Therefore, Ha = hNT + 2 * hTa
    // 
    //     hNTN = New height of the non-transparent region after accomodating 
    //            for the 12% transparent margins(bottom)
    //       HaN = New needed height of the bitmap to adjust the transparent area 
    //           at the bottom to 12%
    //     R = Ratio of hNTN / hNT 
    //     C = 2 * hTa
    //     HaN = Ha * R - C * R + C
    //
    //     This means that if the transparent margins are already 12% then 
    //     R becomes 1 in the above equation and it reduces to 
    //         HaN = Ha
    //     If R becomes > 1 i.e. hNTN > hNT, then it would be clipped to 1.
    const TSize& sz = aBmp->SizeInPixels();	
	const TInt lValidMargin = sz.iHeight * 12 / 100; 
    
    const TInt Ha = sz.iHeight;
    TInt hTa = 0;
    TInt hNT = 0;
    TInt C = 0;
    TInt hNTN = Ha - 2.0 * 0.12 * Ha;
    TReal R = 1.0;
    TInt HaN = Ha;

	switch(aMode)
	   {
	   case EGray256: // for mask 
	      {
	      const TInt lastColumn = sz.iWidth - 1;
	   	  const TUint8* ptr8 = reinterpret_cast<const TUint8*> (aBuffer.Ptr());
	      for ( TInt curRow = 0; curRow < lValidMargin; curRow++ )
		     {
		     const TInt y = (sz.iHeight - 1) - curRow; // h - 1 is the last line
		     aBmp->GetScanLine(aBuffer, TPoint(0, y), sz.iWidth, aMode);
		     for ( TInt s = lastColumn; s >= 0; --s )
			   {
			   TUint8 lPixel = aBuffer[s];
			   if ( aBuffer[s] & (TUint8)aMask ) //note that mask is inverted
			      {
				  hTa = curRow;
				  hNT = Ha - 2 * hTa;
				  C = 2 * hTa;
				  R = ( ( (TReal)hNTN / (TReal)hNT ) > 1.0 ) ? 1 : (TReal)hNTN / (TReal)hNT;
				  HaN = Ha * R - C * R + C;
			//	  HaN =( 0.88 * Ha) + hTa;
			      return( HaN );
				  }
			   }
		     }	
	   	  }
	   		
	   break;
	   case EColor16MA:
	   	  {
	   	  const TInt lastColumn = aBuffer.MaxLength() / sizeof(TUint32) - 1;
	   	  const TUint32* ptr = reinterpret_cast<const TUint32*> (aBuffer.Ptr());
	      for ( TInt curRow = 0; curRow < lValidMargin; curRow++ )
		     {
		     const TInt y = (sz.iHeight - 1) - curRow; // h - 1 is the last line
		     aBmp->GetScanLine(aBuffer, TPoint(0, y), sz.iWidth, aMode);
		     for ( TInt s = lastColumn; s >= 0; --s )
			    {
			    if ( ptr[s] & aMask ) //note that mask is inverted
				   {
				   hTa = curRow;
				   hNT = Ha - 2 * hTa;
				   C = 2 * hTa;
				   R = ( ( (TReal)hNTN / (TReal)hNT ) > 1.0 ) ? 1 : (TReal)hNTN / (TReal)hNT;
				   HaN = Ha * R - C * R + C;
			//	   HaN =( 0.88 * Ha) + hTa;
			       return( HaN );
                   }
			    }
		     }
	
	   	   }
	   break;
	   default:
	   break;
		
	   }

    return HaN;
    }


TInt AknIconSrvUtils::CheckMaskTransparencyL(const CFbsBitmap* aBmp)
	{
	const TSize& sz = aBmp->SizeInPixels();
	HBufC8* buffer = HBufC8::NewLC(sz.iWidth);
	TPtr8 ptr = buffer->Des();
	const TInt h = CheckTransparency(aBmp, ptr, 0xFF, EGray256);
	CleanupStack::PopAndDestroy();
	return h;
	}
	
TInt AknIconSrvUtils::CheckAlphaTransparencyL(const CFbsBitmap* aBmp)
	{
	const TSize& sz = aBmp->SizeInPixels();
	HBufC8* buffer = HBufC8::NewLC(sz.iWidth * sizeof(TUint32));
	TPtr8 ptr = buffer->Des();
	const TInt h = CheckTransparency(aBmp, ptr, 0xFF000000, EColor16MA);
	CleanupStack::PopAndDestroy();
	return h;
	}	

LOCAL_C void ScaleL(const TRect& aRect, CFbsBitmap* aBmp, TUint32 aFillColor, TBool aForceFb)	
	{	
	CFbsBitmap* bmp = new (ELeave) CFbsBitmap();
	CleanupStack::PushL(bmp);
	User::LeaveIfError(bmp->Create(aRect.Size(), aBmp->DisplayMode()));
	AknIconUtils::ScaleBitmapExtL( 
            TRect(TPoint(0, 0), aRect.Size()),
            bmp,
            aBmp,
            aForceFb);

      
	CFbsBitmapDevice* dev = CFbsBitmapDevice::NewL(aBmp);
	CleanupStack::PushL(dev);
	CFbsBitGc* con = NULL;
	dev->CreateContext(con);
	CleanupStack::PushL(con);
	con->SetBrushColor( 0 );
	con->Clear();
	con->SetPenStyle(CGraphicsContext::ESolidPen);
	con->SetBrushStyle(CGraphicsContext::ESolidBrush);
	con->SetPenColor(aFillColor);
	con->SetBrushColor(aFillColor);
	const TSize sz = aBmp->SizeInPixels();
	con->DrawRect(TRect(TPoint(0, 0), aBmp->SizeInPixels()));
	con->BitBlt(aRect.iTl, bmp);
	CleanupStack::PopAndDestroy(3);
	}




void AknIconSrvUtils::EnsureValidSizeL( CFbsBitmap* aBitmap, CFbsBitmap* aMask )
	{
	if ( aBitmap == NULL ) 
	    return;
	CFbsBitmap* iBitmap = aBitmap;
	CFbsBitmap* iMask = NULL;
	if ( aMask )
	    {
	    iMask = aMask;
	    }
	TInt  validHeight;
	if(iMask != NULL)
		{
		SEpocBitmapHeader lBmpHeaderMask = iMask->Header();
		if ( lBmpHeaderMask.iBitsPerPixel != 8 ) 	
			{
			return;
		    }
		validHeight = CheckMaskTransparencyL(iMask);
		}
	else
		{
		SEpocBitmapHeader lBmpHeaderBitmap = iBitmap->Header();
		if ( lBmpHeaderBitmap.iBitsPerPixel != 32 )
			{
			return;
			}
		validHeight = CheckAlphaTransparencyL(iBitmap);
		}
	
	const TSize& size = iBitmap->SizeInPixels();
				
	if(validHeight == size.iHeight)
		return;
	
	const TInt KOffSet = 16;
	
	//scale image down, leaving margins on sides
	//then using fixed point math to get width
	const TInt hmul = (validHeight << KOffSet) / size.iHeight;
	const TInt validWidth =  (size.iWidth * hmul + (1 << (KOffSet - 1))) >> KOffSet;  // sz * mul + 0.5
	const TSize sz(validWidth, validHeight);

	//centrify it
	TRect rect(TPoint((size.iWidth - sz.iWidth) >> 1, (size.iHeight - sz.iHeight) >> 1), sz);

	//it look better if even when centrified
	rect.iTl.iX &= ~1; 
	rect.iBr.iX |= 1;
	
	TBool forceFb = 
	    AknIconUtils::DoesScaleBitmapUseFallBack( iBitmap );
	
	if(iMask != NULL)
		{
		forceFb = forceFb || AknIconUtils::DoesScaleBitmapUseFallBack( iMask );
		const TUint32 maskBytes = iMask->DisplayMode() != EGray256 ? 0xFFFFFFFFF : 0x0;
		::ScaleL(rect, iMask, maskBytes, forceFb);
		}
	
	::ScaleL(rect, iBitmap, 0xFF000000, forceFb);
	
	}  

// End of File
