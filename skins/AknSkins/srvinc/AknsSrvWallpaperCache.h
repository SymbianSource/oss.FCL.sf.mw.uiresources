/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
*
*/


#ifndef AKNSSRVWALLPAPERCACHE_H
#define AKNSSRVWALLPAPERCACHE_H

// INCLUDE FILES
#include <e32std.h>
#include <fbs.h>

// FORWARD DECLARATIONS
struct TAknsSrvWallpaper
    {
    CFbsBitmap* iPortrait;
    CFbsBitmap* iPortraitMask;
    CFbsBitmap* iLandscape;
    CFbsBitmap* iLandscapeMask;
    TFileName   iName;
    };
    
    
const TInt KAknsWallpaperCacheSize = 6;

// CLASS DECLARATION

NONSHARABLE_CLASS( CAknsSrvWallpaperCache )
    {
public:
    /**
    * Symbian constructor.
    */    
    static CAknsSrvWallpaperCache* NewL( TInt aCacheSize );
    
    /**
    * Destructor.
    */
    virtual ~CAknsSrvWallpaperCache();
    
    /**
    * Add a image to wallpaper cache
    */
    TAknsSrvWallpaper* AddL( RFs& aRFs, const TDesC& aFileName, 
                   const TSize aTargetSize, const TSize aMaxSize);
    
    /**
    * Remove a image from wallpaper cache
    */    
    void Remove( const TDesC& aFileName );

    /**
    * Check if a image is in wallpaper cache
    */ 
    TBool IsCached( const TDesC& aFileName );

    /**
    * Reset wallpaper cache
    */ 
    void ResetAndDestory( );
    
private:
    
    /**
    * Symbian 2nd phase constructor.
    */
    void ConstructL( TInt aCacheSize );
    /**
    * Constructor.
    */
    CAknsSrvWallpaperCache();

    /**
    * Destory one TAknsSrvWallpaper item
    */
    void DestoryItem( TAknsSrvWallpaper& aItem );

    /**
    * Reset one TAknsSrvWallpaper item
    */
    void ZeroItem( TAknsSrvWallpaper& aItem );

    /**
    * Remove the oldest wallpaper from cache
    */
    void RemoveOldestItem();
    
    /**
    * Get cached image
    */    
    TAknsSrvWallpaper* CachedImage( const TDesC& aFileName );
    
    /**
    * Try Decode image
    */
    void TryDecodeImageL( RFs& aRFs,const TDesC& aFileName );
    
private:

    /**
    * Wallpaper cache
    */
    RPointerArray<TAknsSrvWallpaper> iCache;
   
    /**
    * Wallpaper cache size
    */
    TInt iCacheSize;
    
    /**
    * Portait wallpaper size
    */
    TSize iPrtSize;
    
    /**
    * Landscape wallpaper size
    */
    TSize iLscSize;
    };

#endif

// End of File
