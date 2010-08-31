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
* Description:  Wallpaper Cache
*/

// INCLUDE FILES
#include <e32base.h>
#include "AknsSrvWallpaperCache.h"
#include "aknssrvwallpaperscaling.h"


/**
* Symbian constructor.
*/ 
CAknsSrvWallpaperCache* CAknsSrvWallpaperCache::NewL( TInt aCacheSize )
    {
    CAknsSrvWallpaperCache* self =  new(ELeave) CAknsSrvWallpaperCache( );
    CleanupStack::PushL( self );
    self->ConstructL( aCacheSize );
    CleanupStack::Pop( self );
    return self;
    }

/**
* Constructor.
*/
CAknsSrvWallpaperCache::CAknsSrvWallpaperCache( )
    {    
    }

/**
* Symbian 2nd phase constructor.
*/
void CAknsSrvWallpaperCache::ConstructL( TInt aCacheSize )
    {
    iCacheSize = aCacheSize;
    }

/**
* Destructor.
*/
CAknsSrvWallpaperCache::~CAknsSrvWallpaperCache( )
    {
    ResetAndDestory();
    }

/**
* Add a image to wallpaper cache
*/
TAknsSrvWallpaper* CAknsSrvWallpaperCache::AddL( RFs& aRFs, const TDesC& aFileName, 
        const TSize aTrgSize, const TSize aMaxSize )
    {
    if ( aTrgSize ==  TSize(-1, -1) )
        {
        TryDecodeImageL( aRFs,aFileName );
        return NULL;
        }
    
    TBool cached = EFalse;
    TAknsSrvWallpaper* wp = NULL;
    
    wp = CachedImage( aFileName );
    if ( !wp )
        {
        wp = new TAknsSrvWallpaper;
        ZeroItem ( *wp );
        }
    else
        {
        cached = ETrue;
        }

    
    _LIT( KSvgFileExt, ".svg" );
    TBool isSvgFormat = aFileName.Right(4).CompareF( KSvgFileExt ) == 0;
    
    TBool needDecodePortrait = EFalse;
    TBool needDecodeLandscape = EFalse;    

    if( aTrgSize.iHeight >= aTrgSize.iWidth ) //Portait
        {
        if ( aTrgSize != iPrtSize || ( !wp->iPortrait && !wp->iPortraitMask) )
            {
            needDecodePortrait = ETrue;
            iPrtSize = aTrgSize;
            }
        }
    else //Landscape
        {
        if ( aTrgSize != iLscSize || ( !wp->iLandscape && !wp->iLandscapeMask ) )
            {
            needDecodeLandscape = ETrue;
            iLscSize = aTrgSize;
            }
        }
    
    if( isSvgFormat )   
        {
        if( needDecodePortrait )
            {
            CAknsSrvSVGImageDecoder* svgdecoder = CAknsSrvSVGImageDecoder::NewL();
            CleanupStack::PushL( svgdecoder );
            svgdecoder->DecodeImageL(
                aFileName,
                aTrgSize,
                wp->iPortrait,
                wp->iPortraitMask );
            CleanupStack::PopAndDestroy( svgdecoder );
            }
        if( needDecodeLandscape )
            {
            CAknsSrvSVGImageDecoder* svgdecoder = CAknsSrvSVGImageDecoder::NewL();
            CleanupStack::PushL( svgdecoder );
            svgdecoder->DecodeImageL(
                aFileName,
                aTrgSize,
                wp->iLandscape,
                wp->iLandscapeMask );
            CleanupStack::PopAndDestroy( svgdecoder );
            }
        }
    else
        {
        if( needDecodePortrait )
            {
            CAknsSrvImageConverter::DecodeImageL(
                aRFs,
                aFileName,
                aTrgSize,
                wp->iPortrait,
                wp->iPortraitMask,
                aMaxSize );
            }
        if( needDecodeLandscape )
            {
            CAknsSrvImageConverter::DecodeImageL(
                aRFs,
                aFileName,
                aTrgSize,
                wp->iLandscape,
                wp->iLandscapeMask,
                aMaxSize );
            }
        }
    wp->iName.Copy( aFileName );
    if ( !cached )
        {
        RemoveOldestItem();        
        iCache.Append( wp );
        }
    return wp;
    }

/**
* Try Decode image
*/ 
void CAknsSrvWallpaperCache::TryDecodeImageL( RFs& aRFs,const TDesC& aFileName )
    {
    if ( CachedImage( aFileName ) )
        {
        return;
        }
    _LIT( KSvgFileExt, ".svg" );
    TBool isSvgFormat = (aFileName.Right(4).CompareF( KSvgFileExt ) == 0);
    if ( !isSvgFormat )
        {
        CFbsBitmap* bitmap = NULL;
        CFbsBitmap* mask = NULL;
        CAknsSrvImageConverter::DecodeImageL(
            aRFs,
            aFileName,
            TSize(-1,-1),
            bitmap,
            mask,
            TSize(4000,4000) );
        delete bitmap;
        delete mask;
        }
    }

/**
* Remove a image from wallpaper cache
*/ 
void CAknsSrvWallpaperCache::Remove( const TDesC& aFileName )
    {
    for ( int i =0;i < iCache.Count();i++ )
        {
        if ( !iCache[i]->iName.Compare( aFileName ) )
            {
            DestoryItem( *iCache[i] );
            iCache.Remove(i);
            }
        }
    }

/**
* Reset wallpaper cache
*/ 
void CAknsSrvWallpaperCache::ResetAndDestory( )
    {
    for ( int i =0; i < iCache.Count(); i++ )
        {
        DestoryItem( *iCache[i] );
        }
    iCache.Reset();
    }

/**
* Destory one TAknsSrvWallpaper item
*/ 
void CAknsSrvWallpaperCache::DestoryItem( TAknsSrvWallpaper& aItem )
    {    
    delete aItem.iPortrait;
    delete aItem.iPortraitMask;
    delete aItem.iLandscape;
    delete aItem.iLandscapeMask;
   
    ZeroItem( aItem );
    }

/**
* Reset one TAknsSrvWallpaper item
*/
void CAknsSrvWallpaperCache::ZeroItem( TAknsSrvWallpaper& aItem )
    {
    aItem.iPortrait = NULL;
    aItem.iPortraitMask = NULL;
    aItem.iLandscape = NULL;
    aItem.iLandscapeMask = NULL;
    
    aItem.iName.Zero();
    }

/**
* Remove the oldest wallpaper from cache
*/
void CAknsSrvWallpaperCache::RemoveOldestItem()
    {
    if ( iCache.Count()>0 && iCache.Count() == iCacheSize )
        {
        DestoryItem( *iCache[0] );
        iCache.Remove(0);
        }
    }

/**
* Check if a image is in wallpaper cache
*/ 
TBool CAknsSrvWallpaperCache::IsCached( const TDesC& aFileName )
    {
    if ( CachedImage( aFileName ) )
        {
        return ETrue;
        }
    return EFalse;
    }

/**
* Find in cache
*/ 
TAknsSrvWallpaper* CAknsSrvWallpaperCache::CachedImage( const TDesC& aFileName )
    {
    TAknsSrvWallpaper* ret = NULL;
    for ( int i =0;i < iCache.Count();i++ )
        {
        if ( !iCache[i]->iName.Compare( aFileName ))
            {
            ret = iCache[i];
            }
        }
    return ret;
    }


//  End of File
