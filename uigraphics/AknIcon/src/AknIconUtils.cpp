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
#include <e32base.h>
#include <fbs.h>
#include <e32math.h>
#include <bitdev.h>
#include <mifconvdefs.h>
#include "AknIconUtils.h"
#include "AknIconManager.h"
#include "AknSourceBitmapIconManager.h"
#include "AknFileHandleIconManager.h"
#include "AknFileProviderIconManager.h"
#include "AknBitmap.h"
#include "AknIconSrvTlsData.h"
#include "AknIconPanic.h"
#include "AknIconTraces.h"
#include "AknInternalIconUtils.h"


// CONSTANTS

_LIT( KAvkonIconFileName, "Z:\\Resource\\Apps\\avkon2.mbm" );

// ============================ MEMBER FUNCTIONS ===============================

EXPORT_C CAknIcon* CAknIcon::NewL()
    {
    return new( ELeave ) CAknIcon;
    }

CAknIcon::~CAknIcon()
    {
    delete iBitmap;
    delete iMask;
    }

EXPORT_C CFbsBitmap* CAknIcon::Bitmap() const
    {
    return iBitmap;
    }

EXPORT_C CFbsBitmap* CAknIcon::Mask() const
    {
    return iMask;
    }

EXPORT_C void CAknIcon::SetBitmap( CFbsBitmap* aBitmap )
    {
    iBitmap = aBitmap;
    }

EXPORT_C void CAknIcon::SetMask( CFbsBitmap* aMask )
    {
    iMask = aMask;
    }

// -----------------------------------------------------------------------------
// AknIconUtils::CreateIconL
// -----------------------------------------------------------------------------
//
EXPORT_C void AknIconUtils::CreateIconL(
    CFbsBitmap*& aBitmap,
    CFbsBitmap*& aMask,
    const TDesC& aFileName,
    TInt aBitmapId,
    TInt aMaskId )
    {
    CreateIconLC(
        aBitmap,
        aMask,
        aFileName,
        aBitmapId,
        aMaskId );

    CleanupStack::Pop( 2 );
    }

// -----------------------------------------------------------------------------
// AknIconUtils::CreateIconLC
// -----------------------------------------------------------------------------
//
EXPORT_C void AknIconUtils::CreateIconLC(
    CFbsBitmap*& aBitmap,
    CFbsBitmap*& aMask,
    const TDesC& aFileName,
    TInt aBitmapId,
    TInt aMaskId )
    {    
    CreateIconLC(
        aBitmap,
        aMask,
        aFileName,
        aBitmapId,
        aMaskId,
        NULL );
    }

// -----------------------------------------------------------------------------
// AknIconUtils::CreateIconL
// -----------------------------------------------------------------------------
//
EXPORT_C CFbsBitmap* AknIconUtils::CreateIconL(
    const TDesC& aFileName,
    TInt aBitmapId )
    {
    CFbsBitmap* bitmap;
    CFbsBitmap* mask;

    AknIconUtils::CreateIconL(
        bitmap,
        mask,
        aFileName,
        aBitmapId,
        -1 );

    return bitmap;
    }

// -----------------------------------------------------------------------------
// AknIconUtils::CreateIconL
// -----------------------------------------------------------------------------
//
EXPORT_C void AknIconUtils::CreateIconL(
    CFbsBitmap*& aBitmap,
    CFbsBitmap*& aMask,
    MAknIconFileProvider& aFileProvider,
    TInt aBitmapId,
    TInt aMaskId )
    {
    CreateIconLC(
        aBitmap,
        aMask,
        aFileProvider,
        aBitmapId,
        aMaskId );

    CleanupStack::Pop( 2 );
    }

// -----------------------------------------------------------------------------
// AknIconUtils::CreateIconL
// -----------------------------------------------------------------------------
//
EXPORT_C void AknIconUtils::CreateIconLC(
    CFbsBitmap*& aBitmap,
    CFbsBitmap*& aMask,
    MAknIconFileProvider& aFileProvider,
    TInt aBitmapId,
    TInt aMaskId )
    {
    __ASSERT_ALWAYS( &aFileProvider,
        User::Panic( KAknIconPanicCategory, EInvalidParameter ) );
    
    CreateIconLC(
        aBitmap,
        aMask,
        KNullDesC(), // filename comes from aFile,
        aBitmapId,
        aMaskId,
        &aFileProvider );
    }

// -----------------------------------------------------------------------------
// AknIconUtils::CreateIconL
// -----------------------------------------------------------------------------
//
EXPORT_C CFbsBitmap* AknIconUtils::CreateIconL(
    MAknIconFileProvider& aFileProvider,
    TInt aBitmapId )
    {
    CFbsBitmap* bitmap;
    CFbsBitmap* mask;

    CreateIconL(
        bitmap,
        mask,
        aFileProvider,
        aBitmapId,
        -1 );

    return bitmap;
    }

// -----------------------------------------------------------------------------
// AknIconUtils::PreserveIconData
// -----------------------------------------------------------------------------
//
EXPORT_C void AknIconUtils::PreserveIconData( CFbsBitmap* aBitmap )
    {
    if ( IsAknBitmap( aBitmap ) )
        {
        static_cast<CAknBitmap*>( aBitmap )->Manager()->PreserveIconData();
        }
    }

// -----------------------------------------------------------------------------
// AknIconUtils::DestroyIconData
// -----------------------------------------------------------------------------
//
EXPORT_C void AknIconUtils::DestroyIconData( CFbsBitmap* aBitmap )
    {
    if ( IsAknBitmap( aBitmap ) )
        {
        static_cast<CAknBitmap*>( aBitmap )->Manager()->DestroyIconData();
        }
    }

// -----------------------------------------------------------------------------
// AknIconUtils::SetSize
// -----------------------------------------------------------------------------
//
EXPORT_C TInt AknIconUtils::SetSize(
    CFbsBitmap* aBitmap,
    const TSize& aSize,
    TScaleMode aMode )
    {
    TInt ret = KErrNone;
    
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: aBitmap=%x Calling AknIconUtils::SetSize - Icon size (%d,%d), Mode=%d"),
                   aBitmap, aSize.iWidth, aSize.iHeight, aMode);
#endif    

    if ( IsAknBitmap( aBitmap ) )
        {
        CAknBitmap* bmp = static_cast<CAknBitmap*>(aBitmap);
        CAknIconManager* man = bmp->Manager();
        ret = man->InitializeIcon(
                aSize, aMode );
        }

#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: aBitmap=%x AknIconUtils::SetSize called - return: %d"), aBitmap, ret);
#endif           
    return ret;
    }


// -----------------------------------------------------------------------------
// AknIconUtils::SetSizeAndRotation
// -----------------------------------------------------------------------------
//
EXPORT_C TInt AknIconUtils::SetSizeAndRotation(
    CFbsBitmap* aBitmap,
    const TSize& aSize,
    TScaleMode aMode,
    TInt aAngle )
    {
    TInt ret = KErrNone;
    
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: aBitmap=%x Calling AknIconUtils::SetSizeAndRotation - Icon size (%d,%d), Mode=%d, Angle=%d"),
                   aBitmap, aSize.iWidth, aSize.iHeight, aMode, aAngle);
#endif 

    if ( IsAknBitmap( aBitmap ) )
        {
        ret = static_cast<CAknBitmap*>( aBitmap )->Manager()->InitializeIcon(
            aSize, aMode, aAngle );
        }
        
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: aBitmap=%x AknIconUtils::SetSizeAndRotation called - return: %d"), aBitmap, ret);
#endif 
    return ret;
    }

// -----------------------------------------------------------------------------
// AknIconUtils::SetObserver
// -----------------------------------------------------------------------------
//
EXPORT_C void AknIconUtils::SetObserver(
    CFbsBitmap* aBitmap,
    MAknIconObserver* aObserver )
    {
    if ( IsAknBitmap( aBitmap ) )
        {
        static_cast<CAknBitmap*>( aBitmap )->Manager()->SetObserver( aObserver );
        }
    }

// -----------------------------------------------------------------------------
// AknIconUtils::AvkonIconFileName
// -----------------------------------------------------------------------------
//
EXPORT_C const TDesC& AknIconUtils::AvkonIconFileName()
    {
    return KAvkonIconFileName();
    }

// -----------------------------------------------------------------------------
// AknIconUtils::ValidateLogicalAppIconId
// -----------------------------------------------------------------------------
//
EXPORT_C void AknIconUtils::ValidateLogicalAppIconId( 
    const TDesC& aIconFileName,
    TInt& aBitmapId,
    TInt& aMaskId )
    {
    if ( IsMifFile( aIconFileName ) )
        {
        aBitmapId += KMifIdFirst;
        aMaskId += KMifIdFirst;
        }
    }

// -----------------------------------------------------------------------------
// AknIconUtils::IsMifFile
// -----------------------------------------------------------------------------
//
EXPORT_C TBool AknIconUtils::IsMifFile( const TDesC& aIconFileName )
    {
    return aIconFileName.Right( KExtensionLength ).CompareF( KMifExtension ) == 0;
    }

// -----------------------------------------------------------------------------
// AknIconUtils::IsMifIcon
// -----------------------------------------------------------------------------
//
EXPORT_C TBool AknIconUtils::IsMifIcon( const CFbsBitmap* aBitmap )
    {
    TBool ret = EFalse;
    if ( IsAknBitmap( aBitmap ) )
        {
        ret = !(static_cast<const CAknBitmap*>(aBitmap)->Manager()->IsMbmIcon());
        }
    return ret;
    }

// -----------------------------------------------------------------------------
// AknIconUtils::GetContentDimensions
// -----------------------------------------------------------------------------
//
EXPORT_C TInt AknIconUtils::GetContentDimensions(
    CFbsBitmap* aBitmap,
    TSize& aContentDimensions )
    {
    TAknContentDimensions contentDimensions;
   	TInt ret = GetContentDimensions(aBitmap,contentDimensions);
   	aContentDimensions.SetSize(contentDimensions.iWidth,contentDimensions.iHeight);
    return ret;
    }
    
// -----------------------------------------------------------------------------
// AknIconUtils::GetContentDimensions
// -----------------------------------------------------------------------------
//
EXPORT_C TInt AknIconUtils::GetContentDimensions(
    CFbsBitmap* aBitmap,
    TAknContentDimensions& aContentDimensions )
    {
    __ASSERT_DEBUG( aBitmap, 
        User::Panic( KAknIconPanicCategory, EInvalidParameter ) );

    TInt ret = KErrNone;

    if ( IsAknBitmap( aBitmap ) )
        {
        ret = static_cast<CAknBitmap*>( aBitmap )->Manager()->
            GetContentDimensions( aContentDimensions );
        }
    else
        {
        aContentDimensions.SetDimensions(aBitmap->SizeInPixels());
        }

    return ret;
    }

// -----------------------------------------------------------------------------
// AknIconUtils::CreateIconL
// -----------------------------------------------------------------------------
//
EXPORT_C CAknIcon* AknIconUtils::CreateIconL( CAknIcon* aSourceIcon )
    {
    // Take ownership of aSourceIcon
    CleanupStack::PushL( aSourceIcon );
    TBool masked = reinterpret_cast<TBool>( aSourceIcon->Mask() );

    CAknIconManager* manager =
        new( ELeave ) CAknSourceBitmapIconManager( aSourceIcon );
    CleanupStack::Pop(); // aSourceIcon
    CleanupStack::PushL( manager );

    CFbsBitmap* bitmap = CAknBitmap::NewL( *manager );
    CleanupStack::Pop(); // manager - deleted from bitmap destructor from now on.
    CleanupStack::PushL( bitmap );

    CFbsBitmap* mask = NULL;

    if ( masked )
        {
        mask = CAknBitmap::NewL( *manager );
        }

    // Push also mask in cleanup stack always, even if NULL.
    CleanupStack::PushL( mask );

    manager->SetBitmap( static_cast<CAknBitmap*>( bitmap ) );
    manager->SetMask( static_cast<CAknBitmap*>( mask ) );

    // Bitmap icons are loaded during this call.
    // Scalable icons are set to valid CFbsBitmap handles of empty bitmaps.
    manager->PreinitializeIconL();

    CAknIcon* resultIcon = CAknIcon::NewL();
    resultIcon->SetBitmap( bitmap );
    resultIcon->SetMask( mask );
    
    CleanupStack::Pop( 2 ); // bitmap, mask
    return resultIcon;
    }

// -----------------------------------------------------------------------------
// AknIconUtils::CreateIconL
// -----------------------------------------------------------------------------
//
EXPORT_C CFbsBitmap* AknIconUtils::CreateIconL( CFbsBitmap* aSourceBitmap )
    {
    CleanupStack::PushL( aSourceBitmap );
    CAknIcon* sourceIcon = CAknIcon::NewL();
    CleanupStack::Pop(); // aSourceBitmap
    sourceIcon->SetBitmap( aSourceBitmap );

    CAknIcon* resultIcon = CreateIconL( sourceIcon );
    CFbsBitmap* resultBitmap = resultIcon->Bitmap();
    resultIcon->SetBitmap( NULL );
    delete resultIcon;
    return resultBitmap;
    }

// -----------------------------------------------------------------------------
// AknIconUtils::SetIconColor
// -----------------------------------------------------------------------------
//
EXPORT_C void AknIconUtils::SetIconColor( CFbsBitmap* aBitmap, const TRgb aColor )
    {
    __ASSERT_DEBUG( aBitmap,
        User::Panic( KAknIconPanicCategory, EInvalidParameter ) );

    // If value 0xFF000000 is supplied, change it to 0x00000000 (same RGB value),
    // since 0xFF000000 is reserved to indicate that the color is not defined.
    if ( aColor == KColorNotDefined ) // 0xFF000000
        {
        *const_cast<TRgb*>( &aColor ) = TRgb( 0x00000000 );
        }

    if ( IsAknBitmap( aBitmap ) )
        {
        static_cast<CAknBitmap*>( aBitmap )->Manager()->SetIconColor( aColor );
        }
    }

// -----------------------------------------------------------------------------
// AknIconUtils::ExcludeFromCache
// -----------------------------------------------------------------------------
//
EXPORT_C void AknIconUtils::ExcludeFromCache( CFbsBitmap* aBitmap )
    {
    __ASSERT_DEBUG( aBitmap,
        User::Panic( KAknIconPanicCategory, EInvalidParameter ) );
        
    if ( IsAknBitmap( aBitmap ) )
        {
        static_cast<CAknBitmap*>( aBitmap )->Manager()->ExcludeFromCache();
        }
    }
    
// -----------------------------------------------------------------------------
// AknIconUtils::DisableCompression
// -----------------------------------------------------------------------------
//
EXPORT_C  void AknIconUtils::DisableCompression( CFbsBitmap* aBitmap )
    {
  __ASSERT_DEBUG( aBitmap,
        User::Panic( KAknIconPanicCategory, EInvalidParameter ) );
        
    if ( IsAknBitmap( aBitmap ) )
        {
        static_cast<CAknBitmap*>( aBitmap )->Manager()->DisableCompression();
        }  
    }

// -----------------------------------------------------------------------------
// AknIconUtils::IsAknBitmap
// -----------------------------------------------------------------------------
//
TBool AknIconUtils::IsAknBitmap( const CFbsBitmap* aBitmap )
    {
    return AknInternalIconUtils::IsAknBitmap(aBitmap);
    }

// -----------------------------------------------------------------------------
// AknIconUtils::RotateAndScaleBitmapL
// -----------------------------------------------------------------------------
//
void AknIconUtils::RotateAndScaleBitmapL(
    const TRect& aTrgRect,
    CFbsBitmap* aTrgBitmap, 
    CFbsBitmap* aSrcBitmap,
    TInt aAngle )
    {
    aAngle = aAngle % 360;
    if (aAngle < 0)
        {
        aAngle+=360;
        }
    
    if( !aSrcBitmap ) User::Leave( KErrArgument );
    if( !aTrgBitmap ) User::Leave( KErrArgument );
    if( aSrcBitmap->DisplayMode() != aTrgBitmap->DisplayMode() ) 
        User::Leave( KErrArgument );
    
    TSize trgBitmapSize = aTrgBitmap->SizeInPixels();

    // calculate the valid drawing area
    TRect drawRect = aTrgRect;
    drawRect.Intersection(TRect(TPoint(0,0),trgBitmapSize));
    
    if( drawRect.IsEmpty() ) return;


    TSize srcSize = aSrcBitmap->SizeInPixels();

    const TInt centerX = srcSize.iWidth / 2;
    const TInt centerY = srcSize.iHeight / 2;

    const TInt trgWidth = aTrgRect.Width();
    const TInt trgHeight = aTrgRect.Height();

    TInt scalefactor;
    const TInt xscalefactor = (srcSize.iWidth << 16) / trgWidth;
    const TInt yscalefactor = (srcSize.iHeight << 16) / trgHeight;
    
    if (xscalefactor < yscalefactor)
        {
        scalefactor = yscalefactor;
        }
    else
        {
        scalefactor = xscalefactor;
        }
    
    TBool srcTemporary = EFalse;
    TBool hardMask = EFalse;
    
    if( aSrcBitmap->IsRomBitmap() )
        {
        srcTemporary = ETrue;
        }
        
    TBool fallbackOnly = EFalse;
    TDisplayMode displayMode = aSrcBitmap->DisplayMode();
    TUint8 fillColor = 0;
    switch( displayMode )
        {
        case EGray2:
            srcTemporary = ETrue;
            hardMask = ETrue;
            fillColor = 0xff; // white
            break;
        case EGray4:
        case EGray16:
        case EColor16:
        case EColor16M:
        case ERgb:
            fallbackOnly = ETrue;
            break;
        case EColor256:
            fillColor = 0xff; // should be black in our indexed palette....
        case EGray256:
        case EColor4K:
        case EColor64K:
        case EColor16MA:
        case EColor16MU:
            // These are the supported modes
            break;
        default:
            fallbackOnly = ETrue;
        }
        
    if( fallbackOnly )
        {
        User::Leave(KErrNotSupported);
        }
        
    // Heap lock for FBServ large chunk to prevent background
    // compression of aSrcBitmap after if IsCompressedInRAM returns EFalse
    aSrcBitmap->LockHeapLC( ETrue ); // fbsheaplock
    TBool fbsHeapLock = ETrue;
    if( aSrcBitmap->IsCompressedInRAM() )
        {
        srcTemporary = ETrue;
        }    
    
    CFbsBitmap* realSource = aSrcBitmap;
    CFbsBitmap* realTarget = aTrgBitmap;
    if( srcTemporary )
        {
        CleanupStack::PopAndDestroy(); // fbsheaplock
        fbsHeapLock = EFalse;

        realSource = new (ELeave) CFbsBitmap();
        CleanupStack::PushL( realSource );
        if (hardMask)
            {
            realTarget = new (ELeave) CFbsBitmap();
            CleanupStack::PushL(realTarget);
            User::LeaveIfError( realSource->Create( srcSize, EGray256 ) );
            displayMode = EGray256;
            User::LeaveIfError( realTarget->Create( aTrgBitmap->SizeInPixels(), EGray256));
            }
        else
            {
            User::LeaveIfError( realSource->Create( srcSize, aSrcBitmap->DisplayMode() ) );
            }
        
        CFbsBitmapDevice* dev = CFbsBitmapDevice::NewL( realSource );
        CleanupStack::PushL( dev );
        CFbsBitGc* gc = NULL;
        User::LeaveIfError( dev->CreateContext( gc ) );
        CleanupStack::PushL( gc );
        gc->BitBlt( TPoint(0,0), aSrcBitmap );
        CleanupStack::PopAndDestroy(2); // dev, gc
        }
        
    if (!fbsHeapLock)
        {
        // Heap lock for FBServ large chunk is only needed with large bitmaps.
        if ( realSource->IsLargeBitmap() || realTarget->IsLargeBitmap() )
            {
            realTarget->LockHeapLC( ETrue ); // fbsheaplock
            }
        else
            {
            CleanupStack::PushL( (TAny*)NULL );
            }
        }
        
    TUint32* srcAddress = realSource->DataAddress();
    TUint32* trgAddress = realTarget->DataAddress();
    
    TReal realsin;
    TReal realcos;
    
    User::LeaveIfError(Math::Sin( realsin, ((2*KPi)/360)*aAngle));
    User::LeaveIfError(Math::Cos( realcos, ((2*KPi)/360)*aAngle));
    
    const TInt sin = ((TInt)(realsin*scalefactor));
    const TInt cos = ((TInt)(realcos*scalefactor));
    
    
    const TInt xx = trgWidth/2;
    const TInt yy = trgHeight/2;
    
    TInt x = 0;
    TInt y = 0;
    TInt u = 0;
    TInt v = 0;
    
    const TInt drawWidth  = drawRect.Width();
    const TInt drawHeight = drawRect.Height();
    
    TRect offsetRect(aTrgRect.iTl,drawRect.iTl);
    const TInt yOffset = offsetRect.Height();
    const TInt vOffset = -sin * offsetRect.Width();
    const TInt uOffset = cos * offsetRect.Width();

    
    if( (displayMode==EGray256) || (displayMode==EColor256) )
        {
        TInt srcScanLen8 = CFbsBitmap::ScanLineLength(srcSize.iWidth, displayMode);
        TInt trgScanLen8 = CFbsBitmap::ScanLineLength(trgBitmapSize.iWidth, displayMode);
        TUint8* srcAddr8 = reinterpret_cast<TUint8*>(srcAddress);
        TUint8* trgAddr8 = reinterpret_cast<TUint8*>(trgAddress);

        // skip left and top margins in the beginning
        trgAddr8 += trgScanLen8 * drawRect.iTl.iY + drawRect.iTl.iX;

        for (y = 0; y < drawHeight; y++)
            {
            u = (-xx) * cos + (y + yOffset - yy) * sin + (centerX<<16) + uOffset;
            v = (y + yOffset - yy) * cos - (-xx) * sin + (centerY<<16) + vOffset;
            for (x = 0; x < drawWidth; x++)
                {
                if ( ((u>>16)>=srcSize.iWidth) || ((v>>16)>=srcSize.iHeight) || ((u>>16)<0) || ((v>>16)<0)) 
                    {
                    *trgAddr8++ = fillColor;
                    }
                else
                    {            	
                    *trgAddr8++ = srcAddr8[(u>>16)+(((v>>16))*srcScanLen8)];
                    }
                u+=cos;
                v-=sin;
                }
            trgAddr8 += trgScanLen8 - drawWidth;
            }
        }
    else if( displayMode == EColor64K || displayMode == EColor4K)
        {
        TInt srcScanLen16 = CFbsBitmap::ScanLineLength(srcSize.iWidth, displayMode) /2;
        TInt trgScanLen16 = CFbsBitmap::ScanLineLength(trgBitmapSize.iWidth, displayMode) /2;
        TUint16* srcAddr16 = reinterpret_cast<TUint16*>(srcAddress);
        TUint16* trgAddr16 = reinterpret_cast<TUint16*>(trgAddress);

        // skip left and top margins in the beginning
        trgAddr16 += trgScanLen16 * drawRect.iTl.iY + drawRect.iTl.iX;

        for (y = 0; y <drawHeight; y++)
            {
            u = (-xx) * cos + (y + yOffset - yy) * sin + (centerX<<16) + uOffset;
            v = (y + yOffset - yy) * cos - (-xx) * sin + (centerY<<16) + vOffset;
            for (x = 0; x < drawWidth; x++)
                {
                if ( ((u>>16)>=srcSize.iWidth) || ((v>>16)>=srcSize.iHeight) || ((u>>16)<0) || ((v>>16)<0)) 
                    {
                    *trgAddr16++ = 0;
                    }
                else
                    {
                    *trgAddr16++ = srcAddr16[(u>>16)+(((v>>16))*srcScanLen16)];
                    }
                u+=cos;
                v-=sin;
                }
            trgAddr16 += trgScanLen16 - drawWidth;
            }        
        }
    else if( displayMode == EColor16MU || displayMode == EColor16MA)
        {
        TInt srcScanLen32 = CFbsBitmap::ScanLineLength(srcSize.iWidth, displayMode) /4;
        TInt trgScanLen32 = CFbsBitmap::ScanLineLength(trgBitmapSize.iWidth, displayMode) /4;
        TUint32* srcAddr32 = srcAddress;
        TUint32* trgAddr32 = trgAddress;
        
        // skip left and top margins in the beginning
        trgAddr32 += trgScanLen32 * drawRect.iTl.iY + drawRect.iTl.iX;

        for (y = 0; y < drawHeight; y++)
            {
            u = (-xx) * cos + (y + yOffset - yy) * sin + (centerX<<16) + uOffset;
            v = (y + yOffset - yy) * cos - (-xx) * sin + (centerY<<16) + vOffset;
            for (x = 0; x < drawWidth; x++)
                {
                if ( ((u>>16)>=srcSize.iWidth) || ((v>>16)>=srcSize.iHeight) || ((u>>16)<0) || ((v>>16)<0)) 
                    {
                    *trgAddr32++ = 0;
                    }
                else
                    {
                    *trgAddr32++ = srcAddr32[(u>>16)+(((v>>16))*srcScanLen32)];
                    } 
                u+=cos;
                v-=sin;
                }
            trgAddr32 += trgScanLen32 - drawWidth;
            }
        }
    else
        {
        User::Leave( KErrUnknown );
        }
    
    CleanupStack::PopAndDestroy(); // fbsheaplock
    
    if( srcTemporary )
        {
        if (hardMask)
            {
            CFbsBitmapDevice* dev = CFbsBitmapDevice::NewL( aTrgBitmap );
            CleanupStack::PushL( dev );
            CFbsBitGc* gc = NULL;
            User::LeaveIfError( dev->CreateContext( gc ) );
            CleanupStack::PushL( gc );  
            gc->BitBlt( TPoint(0,0), realTarget );
            CleanupStack::PopAndDestroy(3); // dev, gc, realtarget
            }
        CleanupStack::PopAndDestroy(); // realSource
        }
    }

// -----------------------------------------------------------------------------
// AknIconUtils::ScaleBitmapL
// -----------------------------------------------------------------------------
//
EXPORT_C void AknIconUtils::ScaleBitmapL(
    const TRect& aTrgRect,
    CFbsBitmap* aTrgBitmap, 
    CFbsBitmap* aSrcBitmap )
    {
    AknIconUtils::ScaleBitmapExtL( aTrgRect, aTrgBitmap, aSrcBitmap, EFalse );
    }
        
// -----------------------------------------------------------------------------
// AknIconUtils::DoesScaleBitmapUseFallBack
// -----------------------------------------------------------------------------
//
TBool AknIconUtils::DoesScaleBitmapUseFallBack( 
        CFbsBitmap* aSrcBitmap )
    {
    if ( !aSrcBitmap  )
        {
        return EFalse;
        }

    TBool fallbackOnly = EFalse;
    TDisplayMode displayMode = aSrcBitmap->DisplayMode();
    switch( displayMode )
        {
        case EGray2:
        case EGray4:
        case EGray16:
        case EColor16:
        case EColor16M:
        case ERgb:
            fallbackOnly = ETrue;
            break;
        case EGray256:
        case EColor4K:
        case EColor64K:
        case EColor256:
        case EColor16MU:
       	case EColor16MA:
            // These are the supported modes
            break;
        default:
            fallbackOnly = ETrue;
        }
    return fallbackOnly;
    }

// -----------------------------------------------------------------------------
// AknIconUtils::ScaleBitmapExtL
// -----------------------------------------------------------------------------
//
void AknIconUtils::ScaleBitmapExtL(
    const TRect& aTrgRect,
    CFbsBitmap* aTrgBitmap, 
    CFbsBitmap* aSrcBitmap,
    TBool aForceFallBack )
    {
    if( !aSrcBitmap ) User::Leave( KErrArgument );
    if( !aTrgBitmap ) User::Leave( KErrArgument );
    if( aSrcBitmap->DisplayMode() != aTrgBitmap->DisplayMode() ) 
        User::Leave( KErrArgument );

    TSize trgBitmapSize = aTrgBitmap->SizeInPixels();
    
    // calculate the valid drawing area
    TRect drawRect = aTrgRect;
    drawRect.Intersection(TRect(TPoint(0,0),trgBitmapSize));
    
    if( drawRect.IsEmpty() ) return;
    
    TSize srcSize = aSrcBitmap->SizeInPixels();


    TBool srcTemporary = EFalse;
    if( aSrcBitmap->IsRomBitmap() )
        {
        srcTemporary = ETrue;
        }
        
    TBool fallbackOnly = 
        aForceFallBack || 
        DoesScaleBitmapUseFallBack( aSrcBitmap );
        
    TDisplayMode displayMode = aSrcBitmap->DisplayMode();

    // VRa: This line always forces fallback
    // fallbackOnly = ETrue;

    if( fallbackOnly )
        {
        CFbsBitmapDevice* dev = CFbsBitmapDevice::NewL( aTrgBitmap );
        CleanupStack::PushL( dev );
        CFbsBitGc* gc = NULL;
        User::LeaveIfError( dev->CreateContext( gc ) );
        CleanupStack::PushL( gc );
        // aTrgRect is used because DrawBitmap handles clipping automatically
        gc->DrawBitmap( aTrgRect, aSrcBitmap ); 
        CleanupStack::PopAndDestroy(2); // dev, gc
        return;
        }
       
    // Heap lock for FBServ large chunk to prevent background
    // compression of aSrcBitmap after if IsCompressedInRAM returns EFalse
    aSrcBitmap->LockHeapLC( ETrue ); // fbsheaplock
    TBool fbsHeapLock = ETrue;        
    if( aSrcBitmap->IsCompressedInRAM() )
        {
        srcTemporary = ETrue;
        }
    
    CFbsBitmap* realSource = aSrcBitmap;
    if( srcTemporary )
        {
        CleanupStack::PopAndDestroy(); // fbsheaplock
        fbsHeapLock = EFalse;
        
        realSource = new (ELeave) CFbsBitmap();
        CleanupStack::PushL( realSource );
        User::LeaveIfError( realSource->Create( srcSize, aSrcBitmap->DisplayMode() ) );
        CFbsBitmapDevice* dev = CFbsBitmapDevice::NewL( realSource );
        CleanupStack::PushL( dev );
        CFbsBitGc* gc = NULL;
        User::LeaveIfError( dev->CreateContext( gc ) );
        CleanupStack::PushL( gc );
        gc->BitBlt( TPoint(0,0), aSrcBitmap );
        CleanupStack::PopAndDestroy(2); // dev, gc
        }
        
    if (!fbsHeapLock)
        {
        // Heap lock for FBServ large chunk is only needed with large bitmaps.
        if ( realSource->IsLargeBitmap() || aTrgBitmap->IsLargeBitmap() )
            {
            aTrgBitmap->LockHeapLC( ETrue ); // fbsheaplock
            }
        else
            {
            CleanupStack::PushL( (TAny*)NULL );
            }
        }

    TUint32* srcAddress = realSource->DataAddress();
    TUint32* trgAddress = aTrgBitmap->DataAddress();
 
    const TInt xSkip = (srcSize.iWidth << 8) / aTrgRect.Width();
    const TInt ySkip = (srcSize.iHeight << 8) / aTrgRect.Height();
    
    const TInt drawWidth  = drawRect.Width();
    const TInt drawHeight = drawRect.Height();
    
    TRect offsetRect(aTrgRect.iTl,drawRect.iTl);
    const TInt yPosOffset = ySkip * offsetRect.Height();
    const TInt xPosOffset = xSkip * offsetRect.Width();


    if( (displayMode==EGray256) || (displayMode==EColor256) )
        {
        TInt srcScanLen8 = CFbsBitmap::ScanLineLength(srcSize.iWidth, displayMode);
        TInt trgScanLen8 = CFbsBitmap::ScanLineLength(trgBitmapSize.iWidth, displayMode);

        TUint8* trgAddress8 = reinterpret_cast<TUint8*>(trgAddress);

        TInt yPos = yPosOffset;
        // skip left and top margins in the beginning
        trgAddress8 += trgScanLen8 * drawRect.iTl.iY + drawRect.iTl.iX;

        for( TInt y=0; y<drawHeight; y++ ) 
            {
            TUint8* srcAddress8 = reinterpret_cast<TUint8*>(srcAddress) +
                (srcScanLen8*(yPos>>8));

            TInt xPos = xPosOffset;
            for( TInt x=0; x<drawWidth; x++ )
                {
                *(trgAddress8++) = srcAddress8[xPos>>8];
                xPos += xSkip;
                }

            yPos += ySkip;

            trgAddress8 += trgScanLen8 - drawWidth;
            }
        }
    else if ( displayMode == EColor4K || displayMode == EColor64K )
        {
        TInt srcScanLen16 = CFbsBitmap::ScanLineLength(srcSize.iWidth, displayMode) /2;
        TInt trgScanLen16 = CFbsBitmap::ScanLineLength(trgBitmapSize.iWidth, displayMode) /2;

        TUint16* trgAddress16 = reinterpret_cast<TUint16*>(trgAddress);

        TInt yPos = yPosOffset;
        // skip left and top margins in the beginning
        trgAddress16 += trgScanLen16 * drawRect.iTl.iY + drawRect.iTl.iX;

        for( TInt y=0; y<drawHeight; y++ ) 
            {
            TUint16* srcAddress16 = reinterpret_cast<TUint16*>(srcAddress) +
                (srcScanLen16*(yPos>>8));

            TInt xPos = xPosOffset;
            for( TInt x=0; x<drawWidth; x++ )
                {
                *(trgAddress16++) = srcAddress16[xPos>>8];
                xPos += xSkip;
                }

            yPos += ySkip;

            trgAddress16 += trgScanLen16 - drawWidth;
            }
        }
    else if( displayMode == EColor16MU || displayMode == EColor16MA)
        {
        TInt srcScanLen32 = CFbsBitmap::ScanLineLength(srcSize.iWidth, displayMode) /4;
        TInt trgScanLen32 = CFbsBitmap::ScanLineLength(trgBitmapSize.iWidth, displayMode) /4;

        TUint32* trgAddress32 = reinterpret_cast<TUint32*>(trgAddress);

        TInt yPos = yPosOffset;
        // skip left and top margins in the beginning
        trgAddress32 += trgScanLen32 * drawRect.iTl.iY + drawRect.iTl.iX;
        
        for( TInt y=0; y<drawHeight; y++ ) 
            {
            TUint32* srcAddress32 = reinterpret_cast<TUint32*>(srcAddress) +
                (srcScanLen32*(yPos>>8));

            TInt xPos = xPosOffset;
            for( TInt x=0; x<drawWidth; x++ )
                {
                *(trgAddress32++) = srcAddress32[xPos>>8];
                xPos += xSkip;
                }

            yPos += ySkip;

            trgAddress32 += trgScanLen32 - drawWidth;
            }
        }
    else
        {
        User::Leave( KErrUnknown );
        }

    CleanupStack::PopAndDestroy(); // fbsheaplock

    if( srcTemporary )
        {
        CleanupStack::PopAndDestroy(); // realSource
        }
    }

// -----------------------------------------------------------------------------
// AknIconUtils::CreateIconLC
// -----------------------------------------------------------------------------
//
void AknIconUtils::CreateIconLC(
    CFbsBitmap*& aBitmap,
    CFbsBitmap*& aMask,
    const TDesC& aFileName,
    TInt aBitmapId,
    TInt aMaskId,
    MAknIconFileProvider* aFileProvider )
    {
    // Assert that given parameters are valid.

    __ASSERT_DEBUG( aBitmapId >= 0 && 
        aBitmapId <= KMaxTInt16 && aMaskId <= KMaxTInt16,
            User::Panic( KAknIconPanicCategory, EInvalidParameter ) );

#ifdef _DEBUG
    if ( aBitmapId >= KMifIdFirst )
        {
        // If bitmap id is in MIF range, also mask id must be there.
        __ASSERT_DEBUG( aMaskId >= KMifIdFirst || aMaskId < 0,
            User::Panic( KAknIconPanicCategory, EInvalidParameter ) );
        }
    else
        {
        // If bitmap id is in MBM range, also mask id must be there.
        __ASSERT_DEBUG( aMaskId < KMifIdFirst || aMaskId < 0,
            User::Panic( KAknIconPanicCategory, EInvalidParameter ) );
        }
#endif // _DEBUG

#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: AknIconUtils::CreateIconLC - aFileName=%S aBitmapId=%d, aMaskId=%d "), &aFileName, aBitmapId, aMaskId);
#endif

    CAknIconManager* manager = NULL;
    
    // Currently, no leaving code allowed in this function before this point,
    // because that could cause aFileProvider->Finished() not being called and
    // could cause a memory leak.
    
    if ( aFileProvider )
        {
        manager = CAknFileProviderIconManager::NewL(
            *aFileProvider, (TInt16)aBitmapId, (TInt16)aMaskId );
        }
    else
        {
        manager = CAknIconManager::NewL(
            aFileName, (TInt16)aBitmapId, (TInt16)aMaskId );
        }
        
    CleanupStack::PushL( manager );
    CFbsBitmap* bitmap = CAknBitmap::NewL( *manager );

    CleanupStack::Pop(); // manager - deleted from bitmap destructor from now on.
    CleanupStack::PushL( bitmap );

    CFbsBitmap* mask = NULL;

    if ( aMaskId >= 0 )
        {
        mask = CAknBitmap::NewL( *manager );
        }

    // Push also mask in cleanup stack always, even if NULL.
    CleanupStack::PushL( mask );

    manager->SetBitmap( static_cast<CAknBitmap*>( bitmap ) );
    manager->SetMask( static_cast<CAknBitmap*>( mask ) );
    
    // Bitmap icons are loaded during this call.
    // Scalable icons are set to valid CFbsBitmap handles of empty bitmaps.
    manager->PreinitializeIconL();

    aBitmap = bitmap;
    aMask = mask;
    }

EXPORT_C void AknInternalIconUtils::SetAppIcon(CFbsBitmap* aBmp)
	{
	CAknBitmap* bmp = CAknBitmap::DynamicCast(aBmp);
	if(bmp != NULL)
		{
		CAknIconManager* man = bmp->Manager();
		if ( !man->IsDefaultIconDirUsed() )
		    {
		    bmp->SetAppIcon();    
		    }
		}
	}

TBool AknInternalIconUtils::IsAknBitmap( const CFbsBitmap* aBitmap )
    {
   	return CAknBitmap::DynamicCast(const_cast<CFbsBitmap*>(aBitmap)) != NULL;                   
    }

//  End of File
