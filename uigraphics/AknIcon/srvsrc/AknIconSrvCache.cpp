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
* Description:   Dynamic bitmap caching, SVG DOM tree precaching.
*
*/



// INCLUDE FILES
#include <e32std.h>
#include <fbs.h>
#include <barsread.h>
#include <barsc.h>
// Skin server client
#include <AknsSrvClient.h>
#include <akniconsrv.rsg>
#include <mifconvdefs.h>
#include <mifconvdefs.h>

#include "AknIconSrvCache.h"
#include "AknIconSrv.h"
#include "AknIconSrvIconItem.h"
#include "AknIconSrvPanic.h"
#include "AknIconSrvScheduler.h"
#include "AknIconTraces.h"

#ifdef PRECACHE2
#include "AknIconSrvPrecacher.h"
#endif


// CONSTANTS

// Contains cache configuration, non localized resource file.

_LIT( KAknIconResourceFile, "z:\\resource\\akniconsrv.rsc" );
#ifdef PRECACHE2
_LIT( KPrecacheThreadName2, "AknIconPrecache2" );
#endif

// ================= MEMBER FUNCTIONS ==========================================

CAknIconSrvCache::CAknIconSrvCache( CAknIconServer& aServer ) : 
 iDynamicallyCached( 8 ), iServer( aServer )
    {
    }

CAknIconSrvCache::~CAknIconSrvCache()
    {
    iDynamicallyCached.Close();
    iPrecache.Close();
    

    }

CAknIconSrvCache* CAknIconSrvCache::NewL( CAknIconServer& aServer )
    {
    CAknIconSrvCache* self = new( ELeave ) CAknIconSrvCache( aServer );
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop();

    return self;
    }

TDisplayMode MapConfigToDspMode(TInt aValue)
    {
    if ( aValue == 0 ) // value documented in the resource file
        {
        return EColor64K;
        }
    else if ( aValue == 2 ) // value documented in the resource file
        {
        return EColor16MU;
        }
    // Default to EColor16M, which is fastest to render alpha-blended.
    else
        {
        return EColor16M;
        }
    }

TDisplayMode MapConfigToMaskMode(TInt aValue)
    {
    if ( aValue == 0 ) // value documented in the resource file
        {
        return EGray2;
        }
    // Default to EGray256
    else
        {
        return EGray256;
        }
    }

TInt ReadConfigValue32L(const RResourceFile& aFile, TInt aResourceId)
    {
    TInt var;
    TPckg<TInt> pack( var );
    aFile.ReadL( pack, aResourceId );
    return var;
    }

#ifdef PRECACHE2
void DoPrecache2L( TAny* aParameters )
    {
    CAknIconSrvPrecacher* cacher = NULL;
    cacher = CAknIconSrvPrecacher::NewL(*(static_cast<CAknIconServer*>( aParameters )) );
    cacher->Start();
    delete cacher;
    }

GLDEF_C TInt PrecacheThreadFunction2( TAny* aParameters )
    {
    
    CTrapCleanup* cleanup = CTrapCleanup::New();
    CActiveScheduler* scheduler = new CActiveScheduler;
    if(!scheduler)
        {
        delete cleanup;
        return KErrBadHandle;
        }
    CActiveScheduler::Install( scheduler );
    TInt err = KErrNone;
    TRAP(err,DoPrecache2L(aParameters));
    delete scheduler;
    delete cleanup;
    

    
    return err;
    }
#endif // PRECACHE2
void CAknIconSrvCache::ConstructL()
    {
#ifdef PRECACHE2
    User::LeaveIfError( iServer.iPreCacheThread.Create(
        KPrecacheThreadName2,
        PrecacheThreadFunction2,
        0x2000, // stack size
        NULL, // uses caller thread's heap
        (TAny*)&iServer ) );
    iServer.iPreCacheThread.SetPriority(KPreCache2Priority);
    iServer.iPreCacheThread.Resume();
#endif // PRECACHE2
    // Read resource file configuration.
    RResourceFile file;
    // Also prepare to the case that the resource file does not exist.
    TRAPD( err, file.OpenL( iServer.FsSession(), KAknIconResourceFile ) );

  
    

    if ( err == KErrNone )
        {
        CleanupClosePushL( file );

        // Read bitmap compression config and set server variable.
        TUint8 var1;
        TPckg<TUint8> pack1( var1 );
        file.ReadL( pack1, R_COMPRESS_BITMAPS );
        iServer.iCompression = var1;

        // read bitmap depth configs and set the server values
        TInt value = ReadConfigValue32L(file, R_PREFERRED_ICON_DEPTH);
        iServer.iIconMode = MapConfigToDspMode(value);

        value = ReadConfigValue32L(file, R_PREFERRED_ICON_MASK_DEPTH);
        iServer.iIconMaskMode = MapConfigToMaskMode(value);
        
        value = ReadConfigValue32L(file, R_PREFERRED_PHOTO_DEPTH);
        iServer.iPhotoMode = MapConfigToDspMode(value);

        value = ReadConfigValue32L(file, R_PREFERRED_VIDEO_DEPTH);
        iServer.iVideoMode = MapConfigToDspMode(value);

        value = ReadConfigValue32L(file, R_PREFERRED_OFFSCREEN_DEPTH);
        iServer.iOffscreenMode = MapConfigToDspMode(value);

        value = ReadConfigValue32L(file, R_PREFERRED_OFFSCREEN_MASK_DEPTH);
        iServer.iOffscreenMaskMode = MapConfigToMaskMode(value);




        TPckg<TInt> pack3( iConfiguredMaxDynamicCacheSize );
        file.ReadL( pack3, R_MAX_DYNAMIC_CACHE_SIZE );
        EnableCache( ETrue );



        CleanupStack::PopAndDestroy( 1); // file
        }
    

        // If no thread launched, complete request immediately.
        TRequestStatus* status = &( iServer.ThreadLaunchStatus() );
        User::RequestComplete( status, KErrNone );
       

        
    }





// -----------------------------------------------------------------------------
// CAknIconSrvCache::CacheUnusedIcon
// 
// Caches an icon (in bitmap form) that has just become unused.
// -----------------------------------------------------------------------------
//
TBool CAknIconSrvCache::CacheUnusedIcon( CAknIconSrvIconItem& aItem )
    {
    // If cache size is set to zero, return EFalse always.
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknIconSrvCache::CacheUnusedIcon: iMaxDynamicCacheSize=%d"), this, iMaxDynamicCacheSize);
#endif        
    if ( !iMaxDynamicCacheSize )
        {           
        return EFalse;
        }

    TBool ret = EFalse;
    TInt lCacheSize  = iDynamicCacheSize + iPrecacheSize ;
    TInt iconDataSize = IconDataSize( aItem );
    if ( iconDataSize <= iMaxDynamicCacheSize )
        { 
        // If reached max size of the dynamic cache UpdateDynamicCacheSize.
        
        if (lCacheSize + iconDataSize > iMaxDynamicCacheSize)
            {
            UpdateDynamicCacheSize();
            }
           
        // If reached max size of the dynamic cache, 
        // remove older cached items.
        while ( iDynamicallyCached.Count() > 0 && 
                lCacheSize + iconDataSize > iMaxDynamicCacheSize )
            {
            CAknIconSrvIconItem* oldest = iDynamicallyCached[0];

            iDynamicCacheSize -= IconDataSize( *oldest );
            iDynamicallyCached.Remove( 0 );
            iServer.RemoveCachedItem( *oldest );
            
            if (!iDynamicallyCached.Count())
                {
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknIconSrvCache::CacheUnusedIcon: reset iDynamicCacheSize=%d to 0"), this, iDynamicCacheSize);
#endif                
                iDynamicCacheSize = 0;
                }
            lCacheSize = iDynamicCacheSize + iPrecacheSize ;
            }
        // If dynamic cache is empty  
        // but precache size is greater than maxcachesize
        // and Precache has some items
        // and the new item to be added is a precache item
        // delete the older precache items
        if (iDynamicallyCached.Count() == 0)
            {
            while ( iPrecacheSize + iconDataSize > iMaxDynamicCacheSize 
             && iPrecache.Count() > 0
             && aItem.iPrecacheItem)
                {
                CAknIconSrvIconItem* oldest = iPrecache[0];
    
                iPrecacheSize -= IconDataSize( *oldest );
                iPrecache.Remove( 0 );
                iServer.RemoveCachedItem( *oldest );
                
                if (!iPrecache.Count())
                    {
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknIconSrvCache::CacheUnusedIcon: reset iDynamicCacheSize=%d to 0"), this, iPrecacheSize);
#endif                
                    iPrecacheSize = 0;
                    }
               
                }
            }
        
        // this check is needed for one case only
        // if the cache is filled with precache items, dynamic cache is empty
        // and a non precache item wants to be put in cache 
        // then dont put it
        //Insert into dynamicCache or Precache
        if(lCacheSize + iconDataSize <= iMaxDynamicCacheSize )
            {
            TInt lError;
            if(aItem.iPrecacheItem)
                {
                lError = iPrecache.Append(&aItem);
                }
            else
                {
                lError = iDynamicallyCached.Append(&aItem);
                }
                
            // If no error encountered in insertion 
            // set icon as cached
            if(lError == KErrNone)
                {
                aItem.SetCached();
                if(aItem.iPrecacheItem)
                    {
                    iPrecacheSize += iconDataSize;
                    }
                else
                    {
                    iDynamicCacheSize += iconDataSize;
                    }
                ret = ETrue;
                }
            }            
        }

    // If return ETrue, the server keeps the icon loaded even though the user
    // count went to zero.
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknIconSrvCache::CacheUnusedIcon: ret=%d"), this, ret);
#endif       
    return ret;
    }

// -----------------------------------------------------------------------------
// CAknIconSrvCache::UpdateDynamicCacheSize
// 
// Updates iDynamicCacheSize because its value could be deteriorated over time
// due to background bitmap compression.
// -----------------------------------------------------------------------------
//    
void CAknIconSrvCache::UpdateDynamicCacheSize()
    {
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknIconSrvCache::UpdateDynamicCacheSize: old iDynamicCacheSize=%d, iServer.iCompression=%d"), this, iDynamicCacheSize, iServer.iCompression);
#endif 
    // Recalculate iDynamicCacheSize only if bitmap compression is enabled
    if (iServer.iCompression)
        {
        iDynamicCacheSize = 0;
        for(TInt i = 0; i < iDynamicallyCached.Count(); i++)
            {
            iDynamicCacheSize += IconDataSize(*iDynamicallyCached[i]);
            }    
        }
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknIconSrvCache::UpdateDynamicCacheSize: new iDynamicCacheSize=%d"), this, iDynamicCacheSize);
#endif 
        
    }
// -----------------------------------------------------------------------------
// CAknIconSrvCache::RemoveIfCached
// -----------------------------------------------------------------------------
//
void CAknIconSrvCache::RemoveIfCached( CAknIconSrvIconItem& aItem )
    {
    if ( aItem.IsCached() )
        {
        // search for item in iDynamicallyCached & iPrecache
        TInt lDynamicIndex = iDynamicallyCached.Find( &aItem );
        TInt lPrecacheIndex = iPrecache.Find(&aItem);
        
        __ASSERT_DEBUG( lDynamicIndex >= 0 || lPrecacheIndex >= 0, 
            User::Panic( KAknIconSrvPanicCategory, ESrvPanicCacheCorrupt ) );

        if(lDynamicIndex >= 0)
            {
            iDynamicallyCached.Remove( lDynamicIndex );
            iDynamicCacheSize -= IconDataSize( aItem );
            }
        else if(lPrecacheIndex >= 0)
            {
            iPrecache.Remove(lPrecacheIndex);
            iPrecacheSize -= IconDataSize(aItem);
            }
        
        aItem.ClearCached();
        }
    }

// -----------------------------------------------------------------------------
// CAknIconSrvCache::DynamicToPrecache
// -----------------------------------------------------------------------------
//
void CAknIconSrvCache::DynamicToPrecache( CAknIconSrvIconItem& aItem )
    {
    if ( aItem.IsCached() )
        {
        // search for item in iDynamicallyCached 
        TInt lDynamicIndex = iDynamicallyCached.Find( &aItem );
        if(lDynamicIndex >= 0)
            {
            CAknIconSrvIconItem* moveItem = iDynamicallyCached[lDynamicIndex];
            
            if (iPrecache.Append(moveItem) == KErrNone)
                {
                iPrecacheSize += IconDataSize(aItem);
            
                iDynamicallyCached.Remove( lDynamicIndex );
                iDynamicCacheSize -= IconDataSize( aItem );
                }
            }
        }
       
    }



// -----------------------------------------------------------------------------
// CAknIconSrvCache::ResetDynamicCache
// -----------------------------------------------------------------------------
//
void CAknIconSrvCache::ResetDynamicCache()
    {
#ifdef _DEBUG

    EnableCache( EFalse );

#endif // _DEBUG
    }

// -----------------------------------------------------------------------------
// CAknIconSrvCache::IconDataSize
// -----------------------------------------------------------------------------
//
TInt CAknIconSrvCache::IconDataSize( CAknIconSrvIconItem& aItem )
    {
    TInt byteSize = aItem.iBitmap->Header().iBitmapSize;

    if ( aItem.iMask )
        {
        byteSize += aItem.iMask->Header().iBitmapSize;
        }

    return byteSize;
    }




// -----------------------------------------------------------------------------
// CAknIconSrvCache::EnableCache
// -----------------------------------------------------------------------------
//
void CAknIconSrvCache::EnableCache( TBool aEnable )
	{
	if ( aEnable )
		{
		// enable the cache by setting the configured max cache size.
        iMaxDynamicCacheSize = iConfiguredMaxDynamicCacheSize;
		}
	else
		{
		// disable the cache by removing all dynamically cached
		// icons and setting the max cache size to zero, which will
		// prevent further icons from being added.
	    while ( iDynamicallyCached.Count() )
	        {
	        CAknIconSrvIconItem* item = iDynamicallyCached[0];
	        iDynamicallyCached.Remove( 0 );
	        iServer.RemoveCachedItem( *item );
	        }

	    iDynamicCacheSize = 0;
	    
	    while(iPrecache.Count())
	        {
	        CAknIconSrvIconItem* item = iPrecache[0];
	        iPrecache.Remove( 0 );
	        iServer.RemoveCachedItem( *item );
	        
	        }
	    iPrecacheSize = 0;
	    
	    iMaxDynamicCacheSize = 0;
	    
	    
		}
	}

//  End of File  
