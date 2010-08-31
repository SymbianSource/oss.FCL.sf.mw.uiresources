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
* Description:  Implementation of class CAknIconSrv.
*
*/



// INCLUDE FILES

#include <e32svr.h>
#include <e32property.h>
#include <fbs.h>
#include <gdi.h>
#include <bitdev.h>
#include <mifconvdefs.h>

#ifdef PRECACHELOG
#include <flogger.h>
#endif
#include "AknIconSrv.h"
#include "AknIconSrvScheduler.h"
#include "AknIconSrvSession.h"
#include "AknIconSrvDef.h"
#include "AknIconSrvIconItem.h"
#include "AknIconFormatHandler.h"
#include "AknIconFormatHandlerFactory.h"
#include "AknIconLoader.h"
#include "AknIconSrvCache.h"
#include "AknIconSrvPanic.h"
#include "AknIconUtils.h"
#include "AknIconDataPreserver.h"
#include "AknIconDataItem.h"
#include "AknIconSrvUtils.h"
#include "AknIconFileNameCache.h"
#include "akniconconfig.h"
#include "AknIconTraces.h"

#include "AknBitmap.h"
#include <centralrepository.h>
#include <UikonInternalPSKeys.h>    // KUikLayoutState
#include <AvkonInternalCRKeys.h>    // KAknQwertyInputModeActive
#include <avkondomainpskeys.h>      // KAknPowerMenuStatus
#include <bitdev.h>

#include "SvgtRasterizerKeyDefs.hrh"
// CONSTANTS

const TUid KZiUdbProterty = {0x101F8614};
const TInt KZiUdbPropertyKey = 1;
const TUid KT9UdbProterty = {0x101F8615};
const TInt KT9UdbPropertyKey = 1;

const TInt KIconItemArrayGranularity = 4;

// Value -1 is used to indicate 'automatic' layout ID detection.        
const TInt KAvkonAutomaticLayoutDetectionValue = -1;

_LIT( KAvkonIconFileName, "z:\\resource\\apps\\avkon2.mif" );
_LIT( KAknIconServerStartupSemaphore, "AknIconSem" );

// ================= MEMBER FUNCTIONS =======================

CAknIconServer::CAknIconServer()
    : CServer2( CActive::EPriorityStandard ),
    iIconItems( KIconItemArrayGranularity )
    {
    }

// Create and start a new server.
CAknIconServer* CAknIconServer::NewL()
    {
    CAknIconServer* server = new( ELeave ) CAknIconServer;
    CleanupStack::PushL( server );
    server->ConstructL();
    CleanupStack::Pop();
    return server;
    }

void CAknIconServer::ConstructL()
    {    
    User::LeaveIfError( iFsSession.Connect() );
    User::LeaveIfError( RFbsSession::Connect() );
    User::LeaveIfError( Start( KAknIconSrvName ) );

    iFileNameCache = CAknIconFileNameCache::NewL();
    iIconDataPreserver = CAknIconDataPreserver::NewL( *this );

    
    _LIT_SECURITY_POLICY_PASS(KPassReadPolicy);
    _LIT_SECURITY_POLICY_PASS(KPassWritePolicy);

    _LIT_SECURITY_POLICY_C1(KWriteDDPolicy, ECapabilityWriteDeviceData);
    _LIT_SECURITY_POLICY_C1(KWriteTUPolicy, ECapabilityTrustedUI);
    
    TInt err1  = RProperty::Define(KCRUidAvkon,       KAknQwertyInputModeActive, RProperty::EInt, KPassReadPolicy, KWriteDDPolicy);
    TInt err2  = RProperty::Define(KPSUidUikon,       KUikLayoutState,           RProperty::EInt, KPassReadPolicy, KWriteDDPolicy);
    TInt err3  = RProperty::Define(KPSUidUikon,       KUikOOMWatchdogStatus,     RProperty::EInt, KPassReadPolicy, KPassWritePolicy);
    TInt err4  = RProperty::Define(KPSUidUikon,       KUikVideoCallTopApp,       RProperty::EInt, KPassReadPolicy, KWriteDDPolicy);
    TInt err5  = RProperty::Define(KPSUidUikon,       KUikFFSFreeLevel,          RProperty::EInt, KPassReadPolicy, KWriteTUPolicy);
    TInt err6  = RProperty::Define(KPSUidUikon,       KUikMmcFFSFreeLevel,       RProperty::EInt, KPassReadPolicy, KWriteTUPolicy);
    TInt err7  = RProperty::Define(KPSUidUikon,       KUikGlobalNotesAllowed,    RProperty::EInt, KPassReadPolicy, KWriteDDPolicy);
    TInt err8  = RProperty::Define(KZiUdbProterty,    KZiUdbPropertyKey,         RProperty::EInt, KPassReadPolicy, KPassWritePolicy);
    TInt err9  = RProperty::Define(KT9UdbProterty,    KT9UdbPropertyKey,         RProperty::EInt, KPassReadPolicy, KPassWritePolicy);
    TInt err10 = RProperty::Define(KPSUidAvkonDomain, KAknPowerMenuStatus,       RProperty::EInt, KPassReadPolicy, KWriteDDPolicy);
    TInt err11 = RProperty::Define(KPSUidAvkonDomain, KAknEndKeyEvent,           RProperty::EInt, KPassReadPolicy, KWriteDDPolicy);         

    TInt err12 = RProperty::Define(KSvgtPropertyCategory, ESvgtPropertyBool,     RProperty::EInt);         
    
    RProperty::Set( KSvgtPropertyCategory, ESvgtPropertyBool, ETrue );
    
#ifdef _DEBUG
    RDebug::Print(_L("xxxx KAknQwertyInputModeActive err=%d"), err1);
    RDebug::Print(_L("xxxx KUikLayoutState           err=%d"), err2);
    RDebug::Print(_L("xxxx KUikOOMWatchdogStatus     err=%d"), err3);
    RDebug::Print(_L("xxxx KUikVideoCallTopApp       err=%d"), err4);
    RDebug::Print(_L("xxxx KUikFFSFreeLevel          err=%d"), err5);
    RDebug::Print(_L("xxxx KUikMmcFFSFreeLevel       err=%d"), err6);
    RDebug::Print(_L("xxxx KUikGlobalNotesAllowed    err=%d"), err7);
    RDebug::Print(_L("xxxx KZiUdbProterty            err=%d"), err8);
    RDebug::Print(_L("xxxx KT9UdbProterty            err=%d"), err9);
    RDebug::Print(_L("xxxx KAknPowerMenuStatus       err=%d"), err10);
    RDebug::Print(_L("xxxx KAknEndKeyEvent           err=%d"), err11);

    RDebug::Print(_L("xxxx ESvgtPropertyBool         err=%d"), err12);
#endif
    
    CRepository* repository = NULL;
    TRAPD(ret, repository = CRepository::NewL(KCRUidAvkon));
    if (ret == KErrNone)
        {
        // Reset value of KAknLayoutId on the boot.
        // Return value ignored.
        ret = repository->Set(KAknLayoutId, KAvkonAutomaticLayoutDetectionValue); 
        }
    delete repository;
    repository = NULL;     
         
#ifdef _NGATESTING

    do {

    iConfigIconType = -1;

    TRAPD(leaveError, LoadConfigurationL(iFsSession));

		if(leaveError!=KErrNone)
		{
			#ifdef _DEBUG
		RDebug::Print(_L("xxxx LoadConfigurationL err=%d"), leaveError);
		#endif
		}

    } while (0);

#endif
    iThreadLaunchStatus = KRequestPending;
    // This launches SVG precache thread, if required.

    iCache = CAknIconSrvCache::NewL( *this );
    User::WaitForRequest( iThreadLaunchStatus );
    }

CAknIconServer::~CAknIconServer()
    {
    iIconItems.ResetAndDestroy();

    delete iAvkonIconLoader;
    delete iOtherIconLoader;
    delete iCurrentIconFile;
    delete iCache;
    delete iIconDataPreserver;    
    delete iFileNameCache;
    
    iHandlerList.ResetAndDestroy();
    RFbsSession::Disconnect();
    iFsSession.Close();
    }

// -----------------------------------------------------------------------------
// CAknIconServer::NewSessionL()
// -----------------------------------------------------------------------------

CSession2* CAknIconServer::NewSessionL(
    const TVersion& /*aVersion*/, const RMessage2& /*aMessage*/) const
    {
    return new( ELeave ) CAknIconSrvSession( );
    }

// -----------------------------------------------------------------------------
// CAknIconServer::RetrieveOrCreateSharedIconL
// -----------------------------------------------------------------------------
//
const CAknIconSrvIconItem* CAknIconServer::RetrieveOrCreateSharedIconL()
    {
    #ifdef __AKNICON_TRACES
    RDebug::Print(_L("AKNICON start"));
    #endif
    
    TAknIconParams info;
    TPckg<TAknIconParams> infoPack( info );
    TRAPD( err, Message().ReadL( 0, infoPack ) );
	if ( err != KErrNone ) 
    	{
    	((CAknIconSrvSession*)(Message().Session()))->SetClientPanicCode(EBadDescriptor);
    	User::Leave(KAknIconSrvCodePanicClient);
    	}
	
    TAknIconSrvReturnData retData;
    TPckg<TAknIconSrvReturnData> dataPack( retData );

    CAknIconSrvIconItem* item = NULL;

#ifdef __AKNICON_TRACES
    info.PrintInfo();
#endif     
#ifdef PRECACHE2
     // bitmap handles of precached icons need to be duplicated
     while(iNewPrecachedItems.Count())
        {
        #ifdef __AKNICON_TRACES
        RDebug::Printf("Precache add,%d",iNewPrecachedItems.Count());
        #endif
        
        CAknIconSrvIconItem* item = iNewPrecachedItems[0];
        CFbsBitmap* bitmap = new (ELeave) CFbsBitmap;
        CleanupStack::PushL(bitmap);
        TInt err1 = bitmap->Duplicate(item->iBitmap->Handle());
        iFreePrecacheBitmapHandles.AppendL(item->iBitmap);
        CleanupStack::Pop();
        
        item->iBitmap = bitmap;
        CFbsBitmap* mask = NULL;
        if (item->iMask)
            {
            mask = new (ELeave) CFbsBitmap;
            CleanupStack::PushL(mask);
            TInt err2 = mask->Duplicate(item->iMask->Handle());
            iFreePrecacheBitmapHandles.AppendL(item->iMask);
            CleanupStack::Pop();
            item->iMask = mask;
            }

            
        err1 = iIconItems.InsertInOrder( item, CAknIconSrvIconItem::LinearOrder );
        if (err1 == KErrAlreadyExists)
            {
            iNewPrecachedItems.Remove(0);
                    
            #ifdef __AKNICON_TRACES
            RDebug::Printf("precache warning, already exists!");
            #endif
            
            TInt index = iIconItems.FindInOrder(item, CAknIconSrvIconItem::LinearOrder );
            CAknIconSrvIconItem* foundItem = iIconItems[index];
            
            foundItem->iPrecacheItem = ETrue;
            
            //Set this item to be cached
            if(foundItem->IsExcludedFromCache())
                {
                foundItem->SetCached();
                }
            
            //Item not in use and hence in Dynamic cache
            //Move item from dynamic cache to precache    
            if( foundItem->iUserCount == 0)
                {
                iCache->DynamicToPrecache( *foundItem);    
                }
            else
                {
                }
            delete item;
            }
        else if (err1 == KErrNone)
            {
            iNewPrecachedItems.Remove(0);
            
            #ifdef __AKNICON_TRACES
            RDebug::Print(_L("precache load,%S,%d,%d,%d,%d,%d,%d,%d"),
                 item->iFileName,
                 item->iBitmapId,
                 item->iMaskId,
                 item->iSize.iWidth,
                 item->iSize.iHeight,
                 item->iModeAndFlags & 0xffff,
                 item->iRotationAngle,
                 item->iColor.Internal());
            #endif    
                 
            iCurrentIndex = iIconItems.FindInOrder(item, CAknIconSrvIconItem::LinearOrder );
            // delete icon, so it will be moved to icon cache
            if (DeleteOrCacheUnusedIcon(item) == EFalse)
                {
                AknIconConfig::CompressIfPreferred(bitmap, mask,iCompression);
                }
            else
                {
	            #ifdef __AKNICON_TRACES
	            RDebug::Printf("Did not insert into dynamic cache, deleting item");
	            #endif
                }
            }
        else
            {
            
            #ifdef __AKNICON_TRACES
            RDebug::Printf("precache warning, Unable to insert into iIconItems");
            #endif
            // No point continuing if one item insertion fails, as
            // following requests would result in same error.
            break;
            }
        }
        
     if (iPrecacheComplete)
        {
        iPreCacheThread.Resume();
        iPrecacheComplete = EFalse;
        }
#endif
    TInt index = RetrieveIcon( info );
    if ( index >= 0 )
        {
        item = iIconItems[index];

        item->iUserCount++;
        if ( info.iMaskId >= 0 )
            {
            // Also mask increases user count.
            item->iUserCount++;
            }

#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknIconServer::RetrieveOrCreateSharedIconL: existing item=%x, info=%x"), this, item, &info);
#endif   
            
        }
    // Not found in current icon item list
    else
        {
        // MBM icon case
        if ( info.IsMbmIcon() )
            {
            Message().ReadL( 1, dataPack );
            item = CreateMbmIconL( info, retData );
            }

        // MIF icon case
        else
            {

            item = iIconDataPreserver->CreateIconL( info );

            if ( !item )
                {
                item = CreateIconL( info );
                }
            
             //PrecacheCache tool
            #ifdef PRECACHELOG                 

            
            _LIT( KFileLoggingDir, "AknIconPreCacher" );
            _LIT( KFileLog, "Traces.txt" );
                     


            _LIT(lMsg, "AKNICON load,%S,%d,%d,%d,%d,%d,%d,%d,%d");
            RFileLogger::WriteFormat(KFileLoggingDir, KFileLog, EFileLoggingModeAppend, lMsg,
            &info.iFileName,
                     info.iBitmapId,
                     info.iMaskId,
                     info.iSize.iWidth,
                     info.iSize.iHeight,
                     info.iMode,
                     info.iRotationAngle,
                     info.iColor.Internal(),
                     info.IsCompressionDisabled());                 
                     
                
               
                    
            #endif
            //PrecacheCache tool
                }
       
       
        if ( info.iAppIcon )
            {
            if ( info.IsMbmIcon() )
                {
                AknIconSrvUtils::EnsureValidSizeL(item->iBitmap, item->iMask);   
                }
           #ifndef __NVG
		else 
		    {
		    ReCreateSvgL(info,item);
		    } 
           #endif /*__NVG*/
            }
       
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknIconServer::RetrieveOrCreateSharedIconL: new item=%x, info=%x"), this, item, &info);
#endif   
        CleanupStack::PushL( item );

        // Apply icon color here, if requested.
        ApplyIconColorL( item, info.iColor );

        // Call CompressIfPreferred if bitmap compression is not
        // disabled for the icon
        if (!item->IsCompressionDisabled())
            {
            AknIconConfig::CompressIfPreferred(item->iBitmap, item->iMask,iCompression);     
            }               

        User::LeaveIfError( 
            iIconItems.InsertInOrder( item, CAknIconSrvIconItem::LinearOrder ) );

        CleanupStack::Pop(); // item
        }

    // No leaving code allowed in the end of the function!
    // Otherwise icon item's user count is increased but never decreased,
    // because an error code is returned to the client.

    retData.iBitmapHandle = item->iBitmap->Handle();
    if ( item->iMask )
        {
        retData.iMaskHandle = item->iMask->Handle();
        }

    retData.iContentDimensions = item->iDimensions;

    // Remove item from cache because it is now used by someone.
    iCache->RemoveIfCached( *item );
    
    #ifdef __AKNICON_TRACES
    RDebug::Print(_L("AKNICON loaded,%S,%d,%d"),&info.iFileName,info.iBitmapId,item->iBitmap->Handle());
    #endif
    // Set if the icon will be cached dynamically after it is not used
    // Note that if the icon was excluded from cache earlier it will remain
    // excluded for its lifetime.
    if (info.IsExcludedFromCache())
        {
        item->ExcludeFromCache();    
        }

    // This does not leave as long as the descriptor is valid in the client side.
    Message().WriteL( 1, dataPack );

    return item;
    }

// -----------------------------------------------------------------------------
// CAknIconServer::FreeBitmapL
//
// Note: This function can only leave when an ASSERT fails. During normal 
//       conditions it should never leave.
// -----------------------------------------------------------------------------
//
const CAknIconSrvIconItem* CAknIconServer::FreeBitmapL()
    {
    TAknIconParams info;
    TPckg<TAknIconParams> paramPack( info );
    TRAPD( err, Message().ReadL( 0, paramPack ) );

    __ASSERT_ALWAYS( err == KErrNone, 
       (
       ((CAknIconSrvSession*)(Message().Session()))->SetClientPanicCode(EBadDescriptor),
       User::Leave( KAknIconSrvCodePanicClient ) // leave to prevent possible server crash
       ));
       

    iCurrentIndex = RetrieveIcon( info );

    __ASSERT_ALWAYS( iCurrentIndex >= 0, 
        (
        ((CAknIconSrvSession*)(Message().Session()))->SetClientPanicCode(EIconNotFound),
        User::Leave( KAknIconSrvCodePanicClient ) // leave to prevent possible server crash
        ));

    CAknIconSrvIconItem* item = iIconItems[iCurrentIndex];
		  if (info.IsExcludedFromCache())
        {
        item->ExcludeFromCache();    
        }    

    item->iUserCount--;
    
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknIconServer::FreeBitmapL: item=%x, user count=%d"), this, item, item->iUserCount);
#endif 
    
    DeleteOrCacheUnusedIcon( item );

    // It is safe to return also a pointer to a deleted item.
    return item;
    }

// -----------------------------------------------------------------------------
// CAknIconServer::PreserveIconDataL
// -----------------------------------------------------------------------------
//
const CAknIconDataItem* CAknIconServer::PreserveIconDataL()
    {
    TAknIconParams params;
    TPckg<TAknIconParams> paramsPack( params );
    TRAPD( err, Message().ReadL( 0, paramsPack ) );
	if ( err != KErrNone ) 
    	{
    	((CAknIconSrvSession*)(Message().Session()))->SetClientPanicCode(EBadDescriptor);
    	User::Leave(KAknIconSrvCodePanicClient);
    	}

    return iIconDataPreserver->PreserveIconDataL( params );
    }

// -----------------------------------------------------------------------------
// CAknIconServer::UnpreserveIconDataL
//
// Note: This function can only leave when an ASSERT fails. During normal 
//       conditions it should never leave.
// -----------------------------------------------------------------------------
//
const CAknIconDataItem* CAknIconServer::UnpreserveIconDataL()
    {
    TAknIconParams params;
    TPckg<TAknIconParams> paramsPack( params );

    TRAPD( err, Message().ReadL( 0, paramsPack ) );
	if ( err != KErrNone ) 
    	{
    	((CAknIconSrvSession*)(Message().Session()))->SetClientPanicCode(EBadDescriptor);
    	User::Leave(KAknIconSrvCodePanicClient);
    	}
    	

    return iIconDataPreserver->UnpreserveIconData( params, 1, Message());
    }

// -----------------------------------------------------------------------------
// CAknIconServer::GetContentDimensionsL
// -----------------------------------------------------------------------------
//
void CAknIconServer::GetContentDimensionsL()
    {
    TAknIconParams params;
    TPckg<TAknIconParams> paramsPack( params );
    TRAPD( err, Message().ReadL( 0, paramsPack ) );
	if ( err != KErrNone ) 
    	{
    	((CAknIconSrvSession*)(Message().Session()))->SetClientPanicCode(EBadDescriptor);
    	User::Leave(KAknIconSrvCodePanicClient);
    	}

    TAknContentDimensions dimensions;

    iIconDataPreserver->GetContentDimensionsL( params, dimensions );

    TPckg<TAknContentDimensions> dimensionsPack( dimensions );
    Message().WriteL( 1, dimensionsPack );
    }

// -----------------------------------------------------------------------------
// CAknIconServer::CleanupSessionIconItem
// -----------------------------------------------------------------------------
//
void CAknIconServer::CleanupSessionIconItem( 
    const TAknIconSrvSessionIconItem& aItem )
    {
    TAknIconParams info;
    aItem.iIcon->GetInfo( info );

    iCurrentIndex = RetrieveIcon( info );

    // The icon must be found otherwise there is a coding error
    // in server side.
    __ASSERT_DEBUG( iCurrentIndex >= 0, 
        User::Panic( KAknIconPanicCategory, EIconNotFound ));

    if (iCurrentIndex >= 0)
        {
    CAknIconSrvIconItem* item = iIconItems[iCurrentIndex];

    item->iUserCount -= aItem.iUserCount; 
    DeleteOrCacheUnusedIcon( item );
        }
    }

// -----------------------------------------------------------------------------
// CAknIconServer::CleanupSessionPreservedItem
// -----------------------------------------------------------------------------
//
void CAknIconServer::CleanupSessionPreservedItem( 
    const TAknIconSrvSessionPreservedItem& aItem )
    {
    TAknIconParams info;
    aItem.iDataItem->GetInfo( info );
    iIconDataPreserver->UnpreserveIconData( info, aItem.iUserCount, Message() );
    }

// -----------------------------------------------------------------------------
// CAknIconServer::RemoveCachedItem
// -----------------------------------------------------------------------------
//
void CAknIconServer::RemoveCachedItem( const CAknIconSrvIconItem& aItem )
    {
    TInt index = iIconItems.FindInOrder(
        &aItem, CAknIconSrvIconItem::LinearOrder );

    __ASSERT_DEBUG( index >= 0,
        User::Panic( KAknIconSrvPanicCategory, ESrvPanicIconNotFound ) );

    __ASSERT_DEBUG( aItem.iUserCount == 0,
        User::Panic( KAknIconSrvPanicCategory, ESrvPanicCachedItemUserCountNonZero ) );

    __ASSERT_DEBUG( index != iCurrentIndex,
        User::Panic( KAknIconSrvPanicCategory, ESrvPanicCurrentIconItemDeleted ) );

    iIconItems.Remove( index );
    delete &aItem;

    // Array has changed, so have to keep iCurrentIndex valid. It is used in
    // another function, which calls this function.
    if ( index < iCurrentIndex )
        {
        iCurrentIndex--;
        }
    }



// -----------------------------------------------------------------------------
// CAknIconServer::InvalidateItemsCachedFromSkin
// -----------------------------------------------------------------------------
//
void CAknIconServer::InvalidateItemsCachedFromSkin()
    {
    for ( TInt i = iIconItems.Count() - 1 ; i >= 0 ; i-- )
        {
        CAknIconSrvIconItem* item = iIconItems[i];

        if ( item->IsCachedFromSkin() )
            {
            item->ClearPermanentlyCached();

            if ( item->iUserCount == 0 )
                {
                iIconItems.Remove( i );
                delete item;
                }
            }
        }
    }



// -----------------------------------------------------------------------------
// CAknIconServer::ResetDynamicallyChangingAllocations
// -----------------------------------------------------------------------------
//
void CAknIconServer::ResetDynamicallyChangingAllocations()
    {
#ifdef _DEBUG
    // Reset dynamic cache
    iCurrentIndex = -1;
    iCache->ResetDynamicCache();

    // Reset dynamically changing icon loader
    delete iCurrentIconFile;
    iCurrentIconFile = NULL;
    delete iOtherIconLoader;
    iOtherIconLoader = NULL;

#endif // _DEBUG
    }

// -----------------------------------------------------------------------------
// CAknIconServer::SetPreferredIconDisplayMode
// -----------------------------------------------------------------------------
//
#ifdef _DEBUG
void CAknIconServer::SetPreferredIconDisplayMode( TDisplayMode aMode )
    {
    iIconMode = aMode;
    }
#else
void CAknIconServer::SetPreferredIconDisplayMode( TDisplayMode /*aMode*/ )
    {
    }
#endif

// -----------------------------------------------------------------------------
// CAknIconServer::GetInitData
// -----------------------------------------------------------------------------
//
void CAknIconServer::GetInitData(
    TAknIconInitData& aData ) const
    {
    aData.iCompression = iCompression;
    aData.iIconMode = iIconMode;
    aData.iIconMaskMode = iIconMaskMode;
    aData.iPhotoMode = iPhotoMode;
    aData.iVideoMode = iVideoMode;
    aData.iOffscreenMode = iOffscreenMode;
    aData.iOffscreenMaskMode = iOffscreenMaskMode;
    }

// -----------------------------------------------------------------------------
// CAknIconServer::RetrieveIcon
// -----------------------------------------------------------------------------
//
TInt CAknIconServer::RetrieveIcon( const TAknIconParams& aInfo )
    {
    // Can be constructed in stack with this constructor.
    CAknIconSrvIconItem compareItem( aInfo );

    return iIconItems.FindInOrder(
        &compareItem, CAknIconSrvIconItem::LinearOrder );
    }



// -----------------------------------------------------------------------------
// CAknIconServer::CreateIconL
// -----------------------------------------------------------------------------
//
CAknIconSrvIconItem* CAknIconServer::CreateIconL(
    const TAknIconParams& aInfo )
    {
    CFbsBitmap* bitmap = new (ELeave) CFbsBitmap;
    CleanupStack::PushL( bitmap );

    CFbsBitmap* mask = NULL;

    if ( aInfo.iMaskId >= 0 )
        {
        mask = new (ELeave) CFbsBitmap;
        CleanupStack::PushL( mask );
        }
    MAknIconFormatHandler* handler = NULL;
    CAknIconLoader* loader = NULL;

    TInt handle;

    TDisplayMode bitmapDepth;    

    // Makes sure that the icon loader is released when required.

    CleanupStack::PushL( TCleanupItem( CleanupIconLoader, this ) );    

    TPtrC8 iconData = InitIconDataAndHandlerLC(aInfo, loader, handler);        

    bitmapDepth = (TDisplayMode)loader->IconDepthL( aInfo.iBitmapId );    

    handler->PrepareIconL( iconData, handle );

    // CleanupIconLoader, InitIconDataAndHandlerLC
    CleanupStack::PopAndDestroy( 2 ); 

    TAknContentDimensions dimensions;

    TRAPD( err,
        {
        handler->UsePreparedIconL( handle );

            dimensions = AknIconSrvUtils::RenderPreparedIconL(

                    *handler,

                    bitmap,

                    mask,

                    bitmapDepth,

                    iIconMode,

                    aInfo.iSize,

                    (TScaleMode)aInfo.iMode,

                    aInfo.iRotationAngle,

                    aInfo.iColor,

                    aInfo.iBitmapId,

                    aInfo.iMaskId,

                    aInfo.iAppIcon);

            } );

    

    // Below is the code to retrieve the actual rendering size of the icon as per normalizations done above in RenderPreparedIconL

    TSize iconSize(aInfo.iSize);

    if ( aInfo.iMode == EAspectRatioPreservedAndUnusedSpaceRemoved )

        {

        if ( iconSize.iWidth!=0 && iconSize.iHeight!=0 )

            {

            AknIconSrvUtils::GetAspectRatioPreservedSize( dimensions, iconSize );

            }

        }        

    

    handler->UnprepareIcon( handle );

    User::LeaveIfError( err );

    // Create item definition and insert in the array.
    CAknIconSrvIconItem* item = 
        CAknIconSrvIconItem::NewL( aInfo, bitmap, mask, dimensions, IconFileNameCache() );

    CleanupStack::Pop(); // bitmap
    if ( mask )
        {
        CleanupStack::Pop(); // mask
        }

    return item;
    }

// -----------------------------------------------------------------------------
// CAknIconServer::CreateMbmIconL
// -----------------------------------------------------------------------------
//
CAknIconSrvIconItem* CAknIconServer::CreateMbmIconL( 
    const TAknIconParams& aInfo,
    const TAknIconSrvReturnData& aRetData )
    {
    // Create a new bitmap to be stretched to the given size.
    CFbsBitmap* bitmap = new (ELeave) CFbsBitmap;
    CleanupStack::PushL( bitmap );

    CFbsBitmap* loadedBitmap = new( ELeave ) CFbsBitmap;
    CleanupStack::PushL( loadedBitmap );

    // Duplicate the loaded bitmap in this thread.
    User::LeaveIfError( loadedBitmap->Duplicate( aRetData.iBitmapHandle ) );

    CFbsBitmap* mask = NULL;
    CFbsBitmap* loadedMask = NULL;

    if ( aInfo.iMaskId >= 0 )
        {
        // Create a new mask to be stretched to the given size.
        mask = new (ELeave) CFbsBitmap;
        CleanupStack::PushL( mask );

        loadedMask = new( ELeave ) CFbsBitmap;
        CleanupStack::PushL( loadedMask );

        User::LeaveIfError( loadedMask->Duplicate( aRetData.iMaskHandle ) );
        }

    // Perform scaling and color filling if required
    TBool colorIcon = AknIconSrvUtils::ScaleBitmapIconL(
        aInfo.iSize,
        (TScaleMode)aInfo.iMode,
        aInfo.iRotationAngle,
        aInfo.iColor,
        loadedBitmap,
        loadedMask,
        bitmap,
        mask );

    // Create item definition and insert in the array.
    // Content dimensions of bitmap icons are not stored in server side,
    // so use (-1,-1).
    CAknIconSrvIconItem* item = 
        CAknIconSrvIconItem::NewL( aInfo, 
                                   bitmap,
                                   mask,
                                   TAknContentDimensions( -1, -1 ),
                                   IconFileNameCache() );

    // Set information of the applied color.
    if ( colorIcon )
        {
        item->iColor = aInfo.iColor;
        }

    // Set info that this is an MBM icon. They are not cached the same
    // way SVG icons are.
    item->SetMbmIcon();

    CleanupStack::PopAndDestroy(); // loadedBitmap
    CleanupStack::Pop(); // bitmap
    if ( mask )
        {
        CleanupStack::PopAndDestroy(); // loadedMask
        CleanupStack::Pop(); // mask
        }

    return item;
    }

// -----------------------------------------------------------------------------
// CAknIconServer::ApplyIconColorL()
// -----------------------------------------------------------------------------
//
void CAknIconServer::ApplyIconColorL(
    CAknIconSrvIconItem* aItem, const TRgb aColor )
    {
    // If a color is defined in given parameters,
    // create a new icon with that color, if not already done.
    if ( aColor != KColorNotDefined && 
         aColor != aItem->iColor )
        {
#if 0        
        TSize size = aItem->iBitmap->SizeInPixels();

        CFbsBitmap* colorBitmap = new (ELeave) CFbsBitmap;
        CleanupStack::PushL( colorBitmap );
        User::LeaveIfError( colorBitmap->Create( size, EColor64K ) );

        CFbsBitmapDevice* dev = CFbsBitmapDevice::NewL( colorBitmap );
        CleanupStack::PushL( dev );
        CFbsBitGc* gc = NULL;
        User::LeaveIfError( dev->CreateContext( gc ) );
        CleanupStack::PushL( gc );
        
        gc->SetBrushColor( aColor );
        gc->SetPenStyle( CGraphicsContext::ENullPen );
        gc->SetBrushStyle( CGraphicsContext::ESolidBrush );
        // Fill icon with the given color, mask defines the icon shape.
        gc->DrawRect( TRect( TPoint( 0, 0 ), size ) );

        CleanupStack::PopAndDestroy( 2 ); // dev, gc

        // Change color bitmap in item.
        delete aItem->iBitmap;
        aItem->iBitmap = colorBitmap;
        CleanupStack::Pop(); // colorBitmap

#endif
        // Update information of the applied color in the item
        aItem->iColor = aColor;
        }
    }
    
// -----------------------------------------------------------------------------
// CAknIconServer::DeleteOrCacheUnusedIcon()
//
// Note: iCurrentIndex must be set to the index of aItem in array iIconItems
//       before using this function.
// -----------------------------------------------------------------------------
//
TBool CAknIconServer::DeleteOrCacheUnusedIcon(CAknIconSrvIconItem* aItem)
    {
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknIconServer::DeleteOrCacheUnusedIcon: item=%x"), this, aItem);
#endif       
    
    TBool ret = EFalse;
    if ( aItem->iUserCount == 0  && !aItem->IsPermanentlyCached() )
        {
        // Note, CacheUnusedIcon potentially changes iIconItems,
        // but it takes care of modifying iCurrentIndex accordingly.
        
        if ( aItem->IsExcludedFromCache() || // Do not cache if the icon is excluded from cache...
             aItem->IsMbmIcon() || // Do not cache bitmap icons...
             aItem->iRotationAngle != 0 || // Do not cache rotated icons...
             !iCache->CacheUnusedIcon( *aItem ) )
            {
            iIconItems.Remove( iCurrentIndex );
            delete aItem;
            ret = ETrue;
            }
        }
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknIconServer::DeleteOrCacheUnusedIcon: item=%x, ret=%d"), this, aItem,ret);
#endif       
        
    return ret;       
    }

// -----------------------------------------------------------------------------
// CAknIconServer::RetrieveFileHandleL()
// -----------------------------------------------------------------------------
//
RFile& CAknIconServer::RetrieveFileHandleL()
    {
    CSession2* session = Message().Session();
    return static_cast<CAknIconSrvSession*>( session )->AdoptedFileHandle(); 
    }

// -----------------------------------------------------------------------------
// CAknIconServer::ThreadStart()
// -----------------------------------------------------------------------------

EXPORT_C TInt CAknIconServer::ThreadStart()
    {
    // Rename own thread
	User::RenameThread( KAknIconSrvName );

    CAknIconServer* server = NULL;

    CTrapCleanup* cleanup = CTrapCleanup::New();
    CActiveScheduler* scheduler = new CAknIconSrvScheduler;

    TInt err = KErrNone;

    if ( cleanup && scheduler )
        {
        CActiveScheduler::Install( scheduler );
        TRAP( err,
            {
            server = CAknIconServer::NewL(); // adds server in scheduler
            } );
        }
    else
        {
        err = KErrNoMemory;
        }

    if ( err != KErrNone )
        {
        delete cleanup;
        delete scheduler;
        }

    // signal that we've started
    SignalClient();
    
    // start fielding requests from clients
    if ( err == KErrNone )
        {
        CActiveScheduler::Start();

        // comes here if server gets shut down
        delete scheduler;
        delete cleanup;
        delete server;
        }

    // thread/process exit
    return err;
    }

// -----------------------------------------------------------------------------
// CAknIconServer::InitIconLoaderL
// -----------------------------------------------------------------------------
//
CAknIconLoader* CAknIconServer::InitIconLoaderL(
    const TDesC& aFileName, RFile* aFile )
    {
    CAknIconLoader* loader = NULL;

    if ( aFileName.CompareF( KAvkonIconFileName ) == 0 )
        {
        if ( !iAvkonIconLoader )
            {
            iAvkonIconLoader = CAknIconLoader::NewL( iFsSession, KAvkonIconFileName );
#ifdef _NGATESTING

            iAvkonIconLoader->SetIconTypeConfig(iConfigIconType, iNGADirectory);

#endif
            }
        loader = iAvkonIconLoader;
        }

    // If not Avkon icon file, check that we got the correct file open.
    else if ( !iCurrentIconFile || iCurrentIconFile->CompareF( aFileName ) != 0 )
        {
        delete iCurrentIconFile;
        iCurrentIconFile = NULL;

        delete iOtherIconLoader;
        iOtherIconLoader = NULL;
        
        if ( aFile )
            {
            iOtherIconLoader = CAknIconLoader::NewL( *aFile );
            }
        else
            {
            iOtherIconLoader = CAknIconLoader::NewL( iFsSession, aFileName );
            }

#ifdef _NGATESTING

        iOtherIconLoader->SetIconTypeConfig(iConfigIconType, iNGADirectory);

#endif
        iCurrentIconFile = aFileName.AllocL();
        loader = iOtherIconLoader;
        }

    else
        {
        // Icon file loader exists.

        loader = iOtherIconLoader;
        
        // Re-open the file if it is not ROM based file
        if (iCurrentIconFile->Left(KDriveLength).CompareF(KDriveZ))
            {
            if ( aFile )
                {
                loader->OpenFileL( *aFile );
                }
            else
                {
                loader->OpenFileL( iFsSession, aFileName );
                }
            }
        }

    return loader;
    }

// -----------------------------------------------------------------------------
// CAknIconServer::IconLoaderUsed
// -----------------------------------------------------------------------------
//
void CAknIconServer::IconLoaderUsed()
    {
    // Close the file only if it is not ROM based file
    if ( iOtherIconLoader && (!iCurrentIconFile ||
         iCurrentIconFile->Left(KDriveLength).CompareF(KDriveZ)))
        {
        iOtherIconLoader->CloseFile();        
        }
    }   

// -----------------------------------------------------------------------------
// CAknIconServer::CleanupIconLoader
// -----------------------------------------------------------------------------
//
void CAknIconServer::CleanupIconLoader( TAny* aServer )
    {
    static_cast<CAknIconServer*>( aServer )->IconLoaderUsed();
    }

// -----------------------------------------------------------------------------
// CAknIconServer::EnableCache
// -----------------------------------------------------------------------------
//
void CAknIconServer::EnableCache(TBool aEnable)
	{
#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknIconServer::EnableCache: %d"), this, aEnable);
#endif   
	
    iCurrentIndex = -1;
	iCache->EnableCache(aEnable);
	
    RProperty::Set(KSvgtPropertyCategory, ESvgtPropertyBool, aEnable );

	}

// -----------------------------------------------------------------------------
// CAknIconServer::InitIconDataAndHandlerLC
// -----------------------------------------------------------------------------
//
TPtrC8 CAknIconServer::InitIconDataAndHandlerLC(
    const TAknIconParams& aParams,
    CAknIconLoader*& aLoader,
    MAknIconFormatHandler*& aHandler  )
    {
    TFileName filename;
    if ( aParams.IsDefaultIconDirUsed() )
        {
        filename = KAknIconDefaultDir;
        }

    filename.Append( aParams.iFileName );

    // Adopt file handle if supplied by client.    
    RFile* filePtr = NULL;
    RFile& file = RetrieveFileHandleL();
    
    if ( file.SubSessionHandle() )
        {
        filePtr = &file;
        }
    
    aLoader = InitIconLoaderL( filename, filePtr );

    MAknIconFormatHandler* lHandler = NULL;
    TPtrC8 iconData = AknIconSrvUtils::InitIconDataAndHandlerLC(
        aLoader,
        iHandlerList,
        lHandler,
            aParams,
        EFalse );
    aHandler = lHandler;
    return iconData;
    }


// -----------------------------------------------------------------------------
// ThreadFunction()
// Needed only in WINS build
// -----------------------------------------------------------------------------

#if defined(__WINS__) && !defined(EKA2)

GLDEF_C TInt ThreadFunction( TAny* /*aThreadParams*/ )
    {
    // increase dll's user count so it can't get unloaded when the client
    // application terminates

    RLibrary lib;
    lib.Load( KAknIconLibName );

    return CAknIconServer::ThreadStart();
    }

#endif

// -----------------------------------------------------------------------------
// StartServer()
// Create the server thread/process
// -----------------------------------------------------------------------------
//
GLDEF_C TInt StartServer()
    {
    TInt ret = KErrNone;

    RSemaphore startupSemaphore;
    ret = startupSemaphore.CreateGlobal( KAknIconServerStartupSemaphore, 0 );

    if ( ret == KErrAlreadyExists )
        {
        // The server is starting up, but has not yet started 
        if ( startupSemaphore.OpenGlobal( KAknIconServerStartupSemaphore ) == 
             KErrNone )
            {
            startupSemaphore.Wait(); // wait until the server has started up.
            startupSemaphore.Close();
            }

        // Return info to the client that the server was already started.
        return ret;
        }

    // launch server process
    RProcess server;
    ret = server.Create(
        KAknIconSrvExe,
        KNullDesC,
        TUidType( KNullUid, KNullUid, KNullUid ),
        EOwnerThread );

    if ( ret == KErrNone )
        {        	    
        server.Resume();
        server.Close();

        startupSemaphore.Wait(); // wait until the server has started up.
        }

    startupSemaphore.Close();
    return ret;
    }

// -----------------------------------------------------------------------------
// SignalClient()
// -----------------------------------------------------------------------------
//
GLDEF_C void SignalClient()
    {
    RSemaphore startupSemaphore;
    if ( startupSemaphore.OpenGlobal(
         KAknIconServerStartupSemaphore ) == KErrNone )
        {
        //Signal the client:The server might have started up successfully or not
        startupSemaphore.Signal();
        startupSemaphore.Close();
        }
    else
        {
        // Something fundamentally wrong.
        User::Invariant();
        }
    }

	

void CAknIconServer::ReCreateSvgL( TAknIconParams& aInfo, CAknIconSrvIconItem *& aItem)   	
    {
    
    if ( !aItem )
        {
        return;
        }
    
    CFbsBitmap* iBitmap = aItem->iBitmap;
	CFbsBitmap* iMask = NULL;
	if ( aItem->iMask )
	    {
	    iMask = aItem->iMask;
	    }
	TInt  validHeight;
	if(iMask != NULL)
		{
		SEpocBitmapHeader lBmpHeaderMask = iMask->Header();
		if ( lBmpHeaderMask.iBitsPerPixel != 8 ) 	
			{
			return;
		    }
		validHeight = AknIconSrvUtils::CheckMaskTransparencyL(iMask);
		}
	else
		{
		SEpocBitmapHeader lBmpHeaderBitmap = iBitmap->Header();
		if ( lBmpHeaderBitmap.iBitsPerPixel != 32 )
			{
			return;
			}
		validHeight = AknIconSrvUtils::CheckAlphaTransparencyL(iBitmap);
		}
	
	const TSize& size = iBitmap->SizeInPixels();
				
	if(validHeight == size.iHeight)
		return;
	
	const TInt KOffSet = 16;
	
	//scale image down, leaving margins on sides
	//then using fixed point math to get width
	const TInt hmul = (validHeight << KOffSet) / size.iHeight;
	const TInt validWidth =  (size.iWidth * hmul + (1 << (KOffSet - 1))) >> KOffSet;  // sz * mul + 0.5
	        
    TSize lActual = aInfo.iSize;  // store the original size request by clien  
	const TSize sz(validHeight, validWidth);
    aInfo.iSize = sz;    // valid size after doing transparency operations
    
 //   TRect rect(TPoint((size.iWidth - sz.iWidth) >> 1, 0), sz);
    TRect rect(TPoint((size.iWidth - sz.iWidth) >> 1, (size.iHeight - sz.iHeight) >> 1), sz);
//	TRect rect(TPoint((size.iWidth - validWidth) >> 1, (size.iHeight - validHeight) >> 1), sz);

	//it look better if even when centrified
	rect.iTl.iX &= ~1; 
	rect.iBr.iX |= 1;
	
    CAknIconSrvIconItem *lItem = CreateIconL(aInfo); // recreate the svg bmp with valid size.
    if ( !lItem )
    	{
    	return;
    	}
    CFbsBitmapDevice* dev = CFbsBitmapDevice::NewL(aItem->iBitmap);
	CleanupStack::PushL(dev);
	CFbsBitGc* con = NULL;
	dev->CreateContext(con);
	CleanupStack::PushL(con);
	con->SetBrushColor( 0 );
	con->Clear();
	con->SetPenStyle(CGraphicsContext::ESolidPen);
	con->SetBrushStyle(CGraphicsContext::ESolidBrush);
	TUint32 lFillColor = 0xFF000000;
	con->SetPenColor(lFillColor);
	con->SetBrushColor(lFillColor);
	con->DrawRect(TRect(TPoint(0, 0), aItem->iBitmap->SizeInPixels()));
	con->BitBlt(rect.iTl, lItem->iBitmap);
	CleanupStack::PopAndDestroy(2);
    
    if ( lItem->iMask )
    	{
    	CFbsBitmapDevice* dev = CFbsBitmapDevice::NewL(aItem->iMask);
		CleanupStack::PushL(dev);
		CFbsBitGc* con = NULL;
		dev->CreateContext(con);
		CleanupStack::PushL(con);
		con->SetBrushColor( 0 );
		con->Clear();
		con->SetPenStyle(CGraphicsContext::ESolidPen);
		con->SetBrushStyle(CGraphicsContext::ESolidBrush);
		lFillColor = lItem->iMask->DisplayMode() != EGray256 ? 0xFFFFFFFFF : 0x0;
		con->SetPenColor(lFillColor);
		con->SetBrushColor(lFillColor);			
		con->DrawRect(TRect(TPoint(0, 0), aItem->iMask->SizeInPixels()));
		con->BitBlt(rect.iTl, lItem->iMask);
		CleanupStack::PopAndDestroy(2);	
    	}
   
    delete lItem;
    lItem = NULL;
    aItem->iSize = lActual; // store actual size requested by the client
                                // so that search can be done successfully.
    }

#ifdef _NGATESTING

void CAknIconServer::LoadConfigurationL(RFs& aFs)
    {
    // if the icon type is svg, check if NGA enabled and set type as EIconFormatNGA
#ifdef __ONLYNGAICON
    iConfigIconType = EIconFormatNGA;
    (void)aFs;
#else
    // check for the configuration files
    _LIT(KICONTYPECONFIGFILE, "c:\\icontype.cfg"); // TODO: find appropriate place
    /*
     * sample configuration files is attached below
     * 
     * ICONTYPE=3
     * NGAICONDIR=c:\Data\nvg_mif
     */
    RFile   lFile;
    
    if (lFile.Open(aFs, KICONTYPECONFIGFILE , EFileRead) == KErrNone)
        {
        CleanupClosePushL(lFile);
        TInt sekpoint = 0;
        lFile.Seek( ESeekStart, sekpoint );
        TInt fileSize = 0;
        User::LeaveIfError(lFile.Size( fileSize ));
        
        HBufC8 * lConfigData = HBufC8::NewLC( fileSize );
        
        TPtr8 lptr = lConfigData->Des();
        lFile.Read(lptr, fileSize);
        
        TLex8 lLexObj(lptr);
        lLexObj.SkipSpaceAndMark();
        
        TChar aChar;
        
        do
            {
            aChar = lLexObj.Get();
            }
        while ( aChar != '\n' &&
                aChar != ' '  &&
                aChar != '\r' &&
                aChar != '\t' &&
                aChar != '=');
        
        lLexObj.UnGet();
        TPtrC8 kw1 = lLexObj.MarkedToken();
        lLexObj.SkipSpace();
        if (lLexObj.Get() != '=')
            {
            User::Leave(KErrCorrupt);
            }
        
        lLexObj.SkipSpace();
        lLexObj.Val(iConfigIconType);
        
        lLexObj.SkipSpaceAndMark();
        do
            {
            aChar = lLexObj.Get();
            }
        while ( aChar != '\n' &&
                aChar != ' '  &&
                aChar != '\r' &&
                aChar != '\t' &&
                aChar != '=');
        
        lLexObj.UnGet();
        TPtrC8 kw2 = lLexObj.MarkedToken();
        lLexObj.SkipSpace();
        if (lLexObj.Get() != '=')
            {
            User::Leave(KErrCorrupt);
            }
        lLexObj.SkipSpace();
        
        iNGADirectory.Copy(lLexObj.NextToken());
        CleanupStack::PopAndDestroy();
        CleanupStack::PopAndDestroy();
        }
    else
        {
        iConfigIconType = EIconFormatNGA;
        }
#endif
    }
#endif
