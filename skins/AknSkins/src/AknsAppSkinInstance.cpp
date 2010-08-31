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
* Description:  Defines an internal concrete class CAknsAppSkinInstance and
*                related types. This class encapsulates the concrete skin
*                instance which is a singleton in thread scope.
*
*/ 


// INCLUDE FILES
#ifdef SYMBIAN_ENABLE_SPLIT_HEADERS
#include <uikon/eikdefconst.h>
#endif
#include "AknsCppPreface.h"

#include <eikenv.h>
#include <eikappui.h>
#include <eikapp.h>
#include <AknCapServerDefs.h>

#include <centralrepository.h>
#include <AknSkinsInternalCRKeys.h>
#include <apgcli.h>

#include <AknsItemData.h>
#include <AknsImageAttributeData.h>
#include <AknsItemDef.h>
#include <AknsConstants.h>
#include <AknsUtils.h>

#include "AknsAppSkinInstance.h"
#include "AknsItemDataFactory.h"
#include "AknsASICacheEntry.h"
#include "AknsTemporaryBitmap.h"
#include "AknsScalabilityUtils.h"
#include "AknsRlDefaultRenderer.h"
#include "AknsRlMasterLayout.h"
#include "AknsDebug.h"
#include <pslninternalcrkeys.h>

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::CAknsAppSkinInstance
// C++ default constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsAppSkinInstance::CAknsAppSkinInstance() :
    CCoeStatic( KAknsSkinInstanceTls, EThread ), iChangeEventsEnabled( ETrue ),
    iChangeEventPending( EFalse ), iAppConfigurationCenrepNotUsed( EFalse )
    // CBase initializes: iChunkLookup(0), iRenderer(0), iMasterLayout(0),
    //                    iVariantHlAnimStatus(0)
    {
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::ContructL
// EPOC default constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::ConstructL()
    {
    User::LeaveIfError( iSession.Connect( this ) );
    iChunkLookup = iSession.CreateChunkLookupL();
    iRenderer = CAknsRlDefaultRenderer::NewL(&iSession);
    iMasterLayout = CAknsRlMasterLayout::NewL();

    InitPslnCenrepL();
    
    InitAnimBackgroundL( );
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::InitAnimBackgroundL
// Initalize Animation background State
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::InitAnimBackgroundL( )
    {
    CRepository* theme = CRepository::NewL(KCRUidThemes);
    iAnimBgState = EFalse;
    
    TInt value = KMaxTInt;
    TInt err = theme->Get( KThemesAnimBackgroundSupport, value );
    delete theme;
    
    if( !err && !value )
        {
        iAnimBgState = ETrue;
        }
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::AnimBackgroundState
// Get Animation background State
// -----------------------------------------------------------------------------
//
TBool CAknsAppSkinInstance::AnimBackgroundState( ) const
    {
    return iAnimBgState;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::InitPslnCenrepL
// Get Psln Cenrep
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::InitPslnCenrepL( TBool aOnlyWP )
    {
    CRepository* rep = CRepository::NewL( KCRUidPersonalisation );
    CleanupStack::PushL( rep );

    TInt err = 0;
    if ( !aOnlyWP )
        {
        TInt value = 0;
        // Product variant's animation status is read-only -> can be safely cached
        // for fast access.
        err = rep->Get( KPslnHighlightAnimationEnabled, value );
    
        if( err || !value )
            {
            iVariantHlAnimStatus = EFalse;
            }
        else // No error and enable flag was set
            {
            iVariantHlAnimStatus = ETrue;
            }
        }
    
    iWallpaperDefined = EFalse;
    TFileName name;
    err = rep->Get( KPslnIdleBackgroundImagePath, name );
    if ( !err && name.Length())
        {
        iWallpaperDefined = ETrue;
        }

    CleanupStack::PopAndDestroy( rep );
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::WallpaperType
// Get wallpaper type
// -----------------------------------------------------------------------------
//
TBool CAknsAppSkinInstance::WallpaperDefined( ) const
    {
    return iWallpaperDefined;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::CreateSingletonL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::CreateSingletonL()
    {
    AKNS_TRACE_INFO("CAknsAppSkinInstance::CreateSingletonL");
    CAknsAppSkinInstance* self = new (ELeave) CAknsAppSkinInstance;

    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop( self );
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsAppSkinInstance::~CAknsAppSkinInstance()
    {
    AKNS_TRACE_INFO("CAknsAppSkinInstance::destructor");
    iLocalItemDefArray.ResetAndDestroy();
    iCache.ResetAndDestroy();
    iControlPositionList.Close();
    iPointerStoreList.Close();
    iTmpBmpArray.ResetAndDestroy();
    iLayoutBmpArray.ResetAndDestroy();
    iSession.Close();
    delete iChunkLookup;
    delete iRenderer;
    delete iMasterLayout;
    if (iCachedApaSession)
        {
        iCachedApaSession->Close();
        }
    delete iCachedApaSession;
    } //lint !e1740 Debug variables not freed

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::RootDataContext()
// (documented in the header).
// -----------------------------------------------------------------------------
//
MAknsDataContext* CAknsAppSkinInstance::RootDataContext()
    {
    return static_cast<MAknsDataContext*>(this);
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::GetCachedItemData
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsItemData* CAknsAppSkinInstance::GetCachedItemData( const TAknsItemID& aID,
    const TAknsItemType aType )
    {
    AKNS_TRACE_INFO3("CAknsAppSkinInstance::GetCachedItemData %i,%i %i",
        aID.iMajor,aID.iMinor,aType);
    CAknsAppSkinInstanceCacheEntry* cacheEntry = FindFromCache( aID );

    if( !cacheEntry )
        {
        AKNS_TRACE_INFO("CAknsAppSkinInstance::GetCachedItemData MISS");
        TRAPD(result, (cacheEntry=LookupCreateAndCacheL( aID, aType )) );
        if( result != KErrNone )
            {
            AKNS_TRACE_ERROR1("CAknsAppSkinInstance::GetCachedItemData ERROR %i", result );
            if( result == KErrNoMemory )
                {
                HandleClientError( EAknsClientErrorOOM );
                }
            else
                {
                HandleClientError( EAknsClientErrorUnspecified );
                }
            return NULL;
            }
        if( !cacheEntry )
            {
            return NULL;
            }
        }
    else
        {
        if( !cacheEntry->Data() )
            {
            // Cache entry without data is a cached miss
            AKNS_TRACE_INFO("CAknsAppSkinInstance:GetCachedItemData CACHED MISS");
            return NULL;
            }
        if( !AknsUtils::IsDerivedType( aType, cacheEntry->Data()->Type()) )
            {
            AKNS_TRACE_INFO("CAknsAppSkinInstance::GetCachedItemData TYPE MISMATCH");
            return NULL;
            }
        }

    return cacheEntry->Data();
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::GetCachedItemData
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsItemData* CAknsAppSkinInstance::GetCachedItemData( const TAknsItemID& aID )
    {
    return GetCachedItemData( aID, EAknsITUnknown );
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::CreateUncachedItemDataL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsItemData* CAknsAppSkinInstance::CreateUncachedItemDataL(
    const TAknsItemID& aID, const TAknsItemType aType )
    {
    AKNS_TRACE_INFO3("CAknsAppSkinInstance::CreateUncachedItemData %i,%i %i",
        aID.iMajor,aID.iMinor,aType);

    return LookupAndCreateL( aID, aType );
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::CreateUncachedItemDataL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsItemData* CAknsAppSkinInstance::CreateUncachedItemDataL(
    const TAknsItemID& aID )
    {
    AKNS_TRACE_INFO2("CAknsAppSkinInstance::CreateUncachedItemData %i,%i",
        aID.iMajor,aID.iMinor);

    return LookupAndCreateL( aID, EAknsITUnknown );
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::SetLocalItemDefL()
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::SetLocalItemDefL( CAknsItemDef* aDef )
    {
    AKNS_TRACE_INFO("CAknsAppSkinInstance::SetLocalItemDef");
    __ASSERT_DEBUG( aDef, AKNS_DEBUG_PANIC(EAknsDPanicInvalidParameter) );

    TInt index;
    if( iLocalItemDefArray.FindInOrder( aDef, index,
        CAknsItemDef::LinearOrder ) == KErrNone )
        {
        CAknsItemDef* oldEntry = iLocalItemDefArray[index];
        iLocalItemDefArray.Remove( index );
        delete oldEntry;

        CleanupStack::PushL( aDef );
        User::LeaveIfError(
            iLocalItemDefArray.InsertInOrder( aDef,
            CAknsItemDef::LinearOrder ) );
        CleanupStack::Pop( aDef );
        }
    else
        {
        CleanupStack::PushL( aDef );
        User::LeaveIfError(
            iLocalItemDefArray.InsertInOrder( aDef,
            CAknsItemDef::LinearOrder ) );
        CleanupStack::Pop( aDef );
        }

    UpdateCachedItemL( FindFromCache(aDef->ID()), EFalse );

    iLayoutBmpArray.ResetAndDestroy();
    NotifyItemDefChange();
    }

void CAknsAppSkinInstance::RemoveLocalItemDefs()
    {
    iLocalItemDefArray.ResetAndDestroy();
    iCache.ResetAndDestroy();
    iTmpBmpArray.ResetAndDestroy();
    iLayoutBmpArray.ResetAndDestroy();
    NotifyItemDefChange();
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::SetChangeEventsEnabled()
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::SetChangeEventsEnabled( TBool aEnabled )
    {
    iChangeEventsEnabled = aEnabled;

    if( iChangeEventPending )
        {
        NotifyItemDefChange();
        }
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::NotifyClientError()
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::NotifyClientError( const TAknsClientError aError )
    {
    AKNS_TRACE_ERROR1("CAknsAppSkinInstance::NotifyClientError %i", aError );
    HandleClientError( aError );
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::SkinChangeReason()
// (documented in the header).
// -----------------------------------------------------------------------------
//
TAknsSkinChangeReason CAknsAppSkinInstance::SkinChangeReason()
    {
    return iLastChangeReason;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::ReserveItemL()
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::ReserveItemL( const TAknsItemID& aID )
    {
    CAknsAppSkinInstanceCacheEntry* entry = FindFromCache( aID );

    if( entry )
        {
        AKNS_TRACE_INFO2("CAknsAppSkinInstance::ReserveItemL %i,%i ref++",
            aID.iMajor, aID.iMinor);
        entry->IncreaseRefCount();
        }
    else
        {
        AKNS_TRACE_INFO2("CAknsAppSkinInstance::ReserveItemL %i,%i NEW",
            aID.iMajor, aID.iMinor);
        // Since the misses are cached as well, there is no reason to leave if
        // not found.
        LookupCreateAndCacheL( aID, EAknsITUnknown );
        }
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::ReleaseItem()
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::ReleaseItem( const TAknsItemID& aID )
    {
    CAknsAppSkinInstanceCacheEntry* entry = FindFromCache( aID );

    //Comment out for BUG:UKAL-7JY8FD
    //__ASSERT_DEBUG( entry, AKNS_DEBUG_PANIC(EAknsDPanicReleaseUnderflow) );

    // For release builds, play it safe
    if( !entry ) //lint !e774 Necessary for UREL
        {
        return;
        }

    AKNS_TRACE_INFO2("CAknsAppSkinInstance::ReleaseItem %i,%i ref--",
        aID.iMajor, aID.iMinor);
    entry->DecreaseRefCount();

    if( !entry->IsReferenced() )
        {
        AKNS_TRACE_INFO2("CAknsAppSkinInstance::ReleaseItem %i,%i DELETE",
            aID.iMajor, aID.iMinor);
        RemoveAndDestroyFromCache( aID );
        }
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::FlushLocalCaches()
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::FlushLocalCaches()
    {
    iTmpBmpArray.ResetAndDestroy();
    iCache.ResetAndDestroy();
    iLayoutBmpArray.ResetAndDestroy();
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::SkinContentChanged
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::SkinContentChanged()
    {
    iUpdateInProgress = ETrue;

    // Reset temporary bitmaps first
    iTmpBmpArray.ResetAndDestroy();

    // Reset cache
    iCache.ResetAndDestroy();

    // Layout bmp reset and notifications are done in SkinConfigurationChanged
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::SkinConfigurationChanged
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::SkinConfigurationChanged(
    const TAknsSkinStatusConfigurationChangeReason aReason )
    {
    if( aReason == EAknsSkinStatusConfigurationDeployed )
        {
        // All clients have now processed SkinContentChanged
        // and server has cleared layout bitmaps

        // Cache is reset - clear layout bitmaps from client
        iLayoutBmpArray.ResetAndDestroy();

        // Update completed
        iUpdateInProgress = EFalse;
        iLastChangeReason = ENormalSkinChange;
        // Finally, notify
        NotifyItemDefChange();
        }
    else if( aReason == EAknsSkinStatusMorphingStateChange )
        {
        // @TODO Only selective update is actually needed
        iUpdateInProgress = ETrue;
        iLayoutBmpArray.ResetAndDestroy();
        iUpdateInProgress = EFalse;
        iLastChangeReason = EMorphingStateChange;
        NotifyItemDefChange(EFalse);
        }
    else if (aReason == EAknsSkinStatusWallpaperChanged )
        {
        TRAP_IGNORE( InitPslnCenrepL( ETrue ));
        iUpdateInProgress = ETrue;
        RemoveAndDestroyFromCache( KAknsIIDWallpaper );
        iLayoutBmpArray.ResetAndDestroy();
        iUpdateInProgress = EFalse;
        iLastChangeReason = EWallpaperChange;
        //NotifyItemDefChange(EFalse);
        }
    else if ( aReason == EAknsSkinStatusAnimBackgroundChanged )
        {
        TRAP_IGNORE( InitAnimBackgroundL( ) );
        NotifyItemDefChange(EFalse);
        }    
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::SkinPackageChanged
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::SkinPackageChanged(
    const TAknsSkinStatusPackageChangeReason /*aReason*/ )
    {
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::DebugLocalItemDefCount
// (documented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsAppSkinInstance::DebugLocalItemDefCount)
EXPORT_C TInt CAknsAppSkinInstance::DebugLocalItemDefCount()
    {
    return iLocalItemDefArray.Count();
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::DebugCacheCount
// (documented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsAppSkinInstance::DebugCacheCount)
EXPORT_C TInt CAknsAppSkinInstance::DebugCacheCount()
    {
    return iCache.Count();
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::DebugHookClientErrors
// (documented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsAppSkinInstance::DebugHookClientErrors)
EXPORT_C void CAknsAppSkinInstance::DebugHookClientErrors(
    void (*aCallback)(TAny*), TAny* aParam )
    {
    iDebugErrorCallback = aCallback;
    iDebugErrorCallbackParam = aParam;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::DebugHookChangeNotifications
// (documented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsAppSkinInstance::DebugHookChangeNotifications)
EXPORT_C void CAknsAppSkinInstance::DebugHookChangeNotifications(
    void (*aCallback)(TAny*), TAny* aParam )
    {
    iDebugChangeCallback = aCallback;
    iDebugChangeCallbackParam = aParam;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::DebugReset
// (documented in the header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsAppSkinInstance::DebugReset)
EXPORT_C void CAknsAppSkinInstance::DebugReset()
    {
    iLocalItemDefArray.ResetAndDestroy();
    iCache.ResetAndDestroy();
    iControlPositionList.Reset();
    iPointerStoreList.Reset();
    iTmpBmpArray.ResetAndDestroy();
    iLayoutBmpArray.ResetAndDestroy();
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::UpdateCachedItemL()
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::UpdateCachedItemL(
    CAknsAppSkinInstanceCacheEntry* aCacheEntry, const TBool aRemoveIfNotFound )
    {
    AKNS_TRACE_INFO("CAknsAppSkinInstance::UpdateCachedItemL");
    if( !aCacheEntry )
        {
        return;
        }

    AKNS_TRACE_INFO2("CAknsAppSkinInstance::UpdateCachedItemL cache update %i,%i",
        aCacheEntry->ID().iMajor, aCacheEntry->ID().iMinor );

    TInt createStatus = KErrNone;
    CAknsItemData* newData = NULL;
    TRAP( createStatus,
        ( newData = LookupAndCreateL( aCacheEntry->ID(),
        EAknsITUnknown ) ) );

    if( createStatus == KErrNone )
        {
        if( newData || (!aRemoveIfNotFound) )
            {
            aCacheEntry->DestroyAndSetData( newData );
            }
        else
            {
            AKNS_TRACE_INFO("CAknsAppSkinInstance::UpdateCachedItemL cache REMOVE");
            RemoveAndDestroyFromCache( aCacheEntry->ID() );
            }
        }
    else
        {
        AKNS_TRACE_INFO("CAknsAppSkinInstance::UpdateCachedItemL cache DELETE");
        RemoveAndDestroyFromCache( aCacheEntry->ID() );
        }

    User::LeaveIfError( createStatus );
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::NotifyItemDefChange()
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::NotifyItemDefChange(TBool aFgOnly)
    {
    if( iChangeEventsEnabled )
        {
        iChangeEventPending = EFalse;

        if( iDebugChangeCallback )
            {
            (*iDebugChangeCallback)( iDebugChangeCallbackParam );
            }
        else
            {
            TInt focusWgroup;
            TInt currentGroup;

            CEikonEnv* env = CEikonEnv::Static();

            if (aFgOnly)
                {
                focusWgroup = env->WsSession().GetFocusWindowGroup();
                currentGroup = env->RootWin().Identifier();
                TUid appdlluid = KNullUid;
                CEikAppUi* appui = (CEikAppUi*)(env->AppUi());
                CEikApplication* app = NULL;
                if (appui)
                    {
                    app = appui->Application();
                    }
                if (app)
                    {
                    appdlluid = app->AppDllUid();
                    }
                if ( appdlluid != KAknCapServerUid && (focusWgroup != currentGroup))
                    {
                    return;
                    }
                if (appui)
                    {
                    TRAP_IGNORE(
                        appui->ReportResourceChangedToAppL(KAknsMessageSkinChange);
                        appui->ReportResourceChangedToAppL(KEikMessageColorSchemeChange);
                        );
                    return;
                    }
                }
            else
                {
                CEikAppUi* appui = (CEikAppUi*)(env->AppUi());
                if (appui)
                    {
                    TRAP_IGNORE(
                            appui->ReportResourceChangedToAppL(KAknsMessageSkinChange);
                            appui->ReportResourceChangedToAppL(KEikMessageColorSchemeChange); );
                    return;
                    }
                else
                    {
                    TWsEvent event;
                    event.SetType(KUidValueAknsSkinChangeEvent);

                    env->WsSession().SendEventToWindowGroup(
                        env->RootWin().Identifier(), event);

                    event.SetType(KUidValueEikColorSchemeChangeEvent);
                    env->WsSession().SendEventToWindowGroup(
                        env->RootWin().Identifier(), event);
                    }
                }
            RedrawScreen();
            }
        }
    else
        {
        iChangeEventPending = ETrue;
        }
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::RedrawScreen()
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::RedrawScreen() const
    {
    /*CEikAppUi* appUi = CEikonEnv::Static()->EikAppUi();
    TBool faded = appUi->IsFaded();

    // Toggle fade (and toggle it back to the original state). This ensures
    // that the whole screen is properly redrawn, even if there are backed up
    // windows.
    appUi->SetFaded( !faded ); //lint !e730 Intentional
    appUi->SetFaded( faded );*/
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::LookupCreateAndCacheL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsAppSkinInstanceCacheEntry* CAknsAppSkinInstance::LookupCreateAndCacheL(
    const TAknsItemID& aID, const TAknsItemType aType )
    {
    AKNS_TRACE_INFO3("CAknsAppSkinInstance::LookupCreateAndCacheL %i,%i %i",
        aID.iMajor,aID.iMinor,aType);
    CAknsAppSkinInstanceCacheEntry* entry;

    CAknsItemData* itemData = LookupAndCreateL( aID, aType );
    if( !itemData )
        {
        if( aType == EAknsITUnknown )
            {
            // Create an entry for miss only for unknown type
            entry = new (ELeave) CAknsAppSkinInstanceCacheEntry( aID, NULL );
            entry->IncreaseRefCount();
            }
        else
            {
            // Do not create an entry for typed miss, otherwise we might hide
            // a real item
            return NULL;
            }
        }
    else
        {
        CleanupStack::PushL( itemData );
        entry = new (ELeave) CAknsAppSkinInstanceCacheEntry( aID, itemData );
        CleanupStack::Pop( itemData ); //itemData is now owned by cache entry
        }

    entry->IncreaseRefCount();

    CleanupStack::PushL( entry );
    User::LeaveIfError( iCache.InsertInOrder( entry,
        CAknsAppSkinInstanceCacheEntry::LinearOrder ) );
    CleanupStack::Pop( entry );

    if( !itemData )
        {
        // For cache miss, return NULL
        return NULL;
        }

    return entry;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::LookupAndCreateL()
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsItemData* CAknsAppSkinInstance::LookupAndCreateL( const TAknsItemID& aID,
    const TAknsItemType aType )
    {
    AKNS_TRACE_INFO3("CAknsAppSkinInstance::LookupAndCreateL %i,%i %i",
        aID.iMajor,aID.iMinor,aType);
    CAknsItemDef* itemDef = NULL;

    // CAknsItemDef is not actually a complex class, and therefore can be
    // instantiated as stack object without problems.
    CAknsItemDef itemToFind( aID );
    TInt index;

    // FindInOrder does not store pointer to item, address to stack object
    // provided intentionally
    if( iLocalItemDefArray.FindInOrder( &itemToFind, index,
        CAknsItemDef::LinearOrder ) == KErrNone )
        {
        itemDef = iLocalItemDefArray[ index ];
        }

    if( itemDef )
        {
        if( !AknsUtils::IsDerivedType( aType, itemDef->Type() ) )
            {
            AKNS_TRACE_INFO("CAknsAppSkinInstance::LookupAndCreateL LTYPE MISMATCH");
            return NULL;
            }

        return AknsItemDataFactory::CreateL( itemDef );
        }

    itemDef = iChunkLookup->LookupAndCreateDefL( aID );

    // Do any post-processing that might be needed
    itemDef = AknsScalabilityUtils::ProcessDefL( itemDef );

    if( itemDef )
        {
        CleanupStack::PushL( itemDef );
        }
    else
        {
        return NULL;
        }

    CAknsItemData* itemData = NULL;
    if( AknsUtils::IsDerivedType( aType, itemDef->Type() ) )
        {
        itemData = AknsItemDataFactory::CreateL( itemDef );
        }
    else
        {
        AKNS_TRACE_INFO("CAknsAppSkinInstance::LookupAndCreateL TYPE MISMATCH");
        }

    CleanupStack::PopAndDestroy( itemDef );

    return itemData;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::FindFromCache()
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsAppSkinInstanceCacheEntry* CAknsAppSkinInstance::FindFromCache(
    const TAknsItemID& aID )
    {
    CAknsAppSkinInstanceCacheEntry* entry = NULL;
    TInt index;

    // CAknsAppSkinInstanceCacheEntry is not a complex object (until data
    // has been set). It can be instantiated into stack.
    CAknsAppSkinInstanceCacheEntry entryToFind( aID, NULL );

    // FindInOrder does not store pointer to search criteria, address of a stack
    // object provided intentionally.
    if( iCache.FindInOrder( &entryToFind, index,
        CAknsAppSkinInstanceCacheEntry::LinearOrder ) == KErrNone )
        {
        entry = iCache[index];
        }

    return entry;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::RemoveAndDestroyFromCache
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::RemoveAndDestroyFromCache( const TAknsItemID& aID )
    {
    AKNS_TRACE_INFO2("CAknsAppSkinInstance::RemoveAndDestroyFromCache %i,%i",
        aID.iMajor,aID.iMinor);
    CAknsAppSkinInstanceCacheEntry* entry = NULL;
    TInt index;

    CAknsAppSkinInstanceCacheEntry entryToFind( aID, NULL );

    if( iCache.FindInOrder( &entryToFind, index,
        CAknsAppSkinInstanceCacheEntry::LinearOrder ) == KErrNone )
        {
        entry = iCache[index];
        iCache.Remove( index );
        delete entry;
        }
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::HandleClientError
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::HandleClientError(
    const TAknsClientError aError )
    {
    if( iDebugErrorCallback )
        {
        (*iDebugErrorCallback)( iDebugErrorCallbackParam );
        }
    else
        {
        iSession.ClientError( aError );
        }
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::LookupDef
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsItemDef* CAknsAppSkinInstance::LookupDef( TBool& aOwnershipTransfer,
    const TAknsItemID& aID, const TAknsItemType aType )
    {
    AKNS_TRACE_INFO3("CAknsAppSkinInstance::LookupDef %i,%i %i",
        aID.iMajor,aID.iMinor,aType);

    CAknsItemDef* itemDef = NULL;
    aOwnershipTransfer = EFalse;

    // CAknsItemDef is not actually a complex class, and therefore can be
    // instantiated as stack object without problems.
    CAknsItemDef itemToFind( aID );
    TInt index;

    // FindInOrder does not store pointer to item, address to stack object
    // provided intentionally
    if( iLocalItemDefArray.FindInOrder( &itemToFind, index,
        CAknsItemDef::LinearOrder ) == KErrNone )
        {
        itemDef = iLocalItemDefArray[ index ];
        }

    if( itemDef )
        {
        if( !AknsUtils::IsDerivedType( aType, itemDef->Type() ) )
            {
            AKNS_TRACE_INFO("CAknsAppSkinInstance::LookupDef LTYPE MISMATCH");
            return NULL;
            }

        return itemDef;
        }

    TRAP_IGNORE( itemDef = iChunkLookup->LookupAndCreateDefL( aID ) );

    if( (!itemDef) ||
        (!AknsUtils::IsDerivedType( aType, itemDef->Type() )) )
        {
        delete itemDef;
        return NULL;
        }

    aOwnershipTransfer = ETrue;
    return itemDef;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::GetTemporaryBitmapL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsTemporaryBitmap* CAknsAppSkinInstance::GetTemporaryBitmapL(
    const TAknsItemID& aID, const TSize& aSize )
    {
    TInt index( 0 );
    CAknsTemporaryBitmap itemToFind( aID, aSize, 0,TSize(0,0) );
    if( iTmpBmpArray.FindInOrder( &itemToFind, index,
        CAknsTemporaryBitmap::LinearOrder ) == KErrNone )
        {
        return iTmpBmpArray[index];
        }

    CAknsBitmapItemData* bmpData = static_cast<CAknsBitmapItemData*>(
        GetCachedItemData( aID, EAknsITBitmap ) );
    if( !bmpData )
        {
        return NULL;
        }

    CFbsBitmap* bitmap = bmpData->Bitmap();
    CFbsBitmap* mask = NULL;
    if( AknsUtils::IsDerivedType( EAknsITMaskedBitmap,
        bmpData->Type() ) )
        {
        mask = static_cast<CAknsMaskedBitmapItemData*>(bmpData)->Mask();
        }

    CAknsTemporaryBitmap* tmpBmp = CAknsTemporaryBitmap::NewL(
        aID, aSize, 0, EFalse, TSize(0,0) );
    CleanupStack::PushL( tmpBmp );

    if( bitmap )
        {
        tmpBmp->ActivateGcL( bitmap->DisplayMode(), EFalse )->
            DrawBitmap( TRect( TPoint(0,0), aSize ), bitmap );
        tmpBmp->ReleaseGc();
        }
    if( mask )
        {
        tmpBmp->ActivateGcL( mask->DisplayMode(), ETrue )->
            DrawBitmap( TRect( TPoint(0,0), aSize ), mask );
        tmpBmp->ReleaseGc();
        }

    User::LeaveIfError(
        iTmpBmpArray.InsertInOrder( tmpBmp,
        CAknsTemporaryBitmap::LinearOrder ) );
    CleanupStack::Pop( tmpBmp );

    return tmpBmp;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::DefaultRenderer
// (documented in the header).
// -----------------------------------------------------------------------------
//
MAknsRlRenderer* CAknsAppSkinInstance::DefaultRenderer()
    {
    return iRenderer;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::MasterLayout
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsRlMasterLayout* CAknsAppSkinInstance::MasterLayout()
    {
    return iMasterLayout;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::UpdateLocalLayoutBitmapToServer
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::UpdateLocalLayoutBitmapToServerL(
    const TAknsItemID& aID, const TInt aLayout, const TSize& aLayoutSize,
    CFbsBitmap* aBitmap, CFbsBitmap* aMask, const TBool aMorphing )
    {
    TInt storeErr = iSession.StoreScalableGraphics( aID, aLayout, aLayoutSize,
        aBitmap, aMask, aMorphing );
    if( storeErr )
        {
        AKNS_TRACE_ERROR1("CAknsAppSkinInstance::ULLBTS Srv store failed %i", storeErr );
        User::Leave( storeErr );
        }
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::UpdateLocalLayoutBitmapFromServer
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::UpdateLocalLayoutBitmapFromServerL(
    const TAknsItemID& aID, const TInt aLayout, const TSize& aLayoutSize )
    {
    // Ensure space for 2 items
    CleanupStack::PushL(static_cast<TAny*>(NULL));
    CleanupStack::PushL(static_cast<TAny*>(NULL));
    CleanupStack::Pop(2);

    CAknsTemporaryBitmap* tmpBmp = NULL;
    CAknsTemporaryBitmap itemToFind( aID, TSize(0,0), aLayout, aLayoutSize );
    TInt index = iLayoutBmpArray.FindInOrder( &itemToFind,
        CAknsTemporaryBitmap::LinearOrder );
    if( index>=0 )
        {
        tmpBmp = iLayoutBmpArray[index];
        }

    if (tmpBmp && tmpBmp->ItemData()->ParentIID() != KAknsIIDNone)
        {
        // Draw from parent, nothing can be found from the server...
        return;
        }

    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;
    TBool morphing( EFalse );
    if( tmpBmp )
        {
        // Detach, ownership is transferred in lookup
        bitmap = tmpBmp->ItemData()->Bitmap();
        tmpBmp->ItemData()->SetBitmap(NULL);
        mask = tmpBmp->ItemData()->Mask();
        tmpBmp->ItemData()->SetMask(NULL);
        }
    // @TODO Morphing property must be fetched from the chunk as well!
    iChunkLookup->LookupAndCreateScalableItemL( aID, aLayout,
        aLayoutSize, bitmap, mask, morphing );
    // These pushes are safe
    CleanupStack::PushL(bitmap); // (1)
    CleanupStack::PushL(mask); // (2)

    if( !bitmap )
        {
        // Server-side item does not exist
        // Must leave to remove the item!
        User::Leave( KErrNotFound );
        }

    // Create, if local item does not exist yet
    if( !tmpBmp )
        {
        tmpBmp = CAknsTemporaryBitmap::NewL(
            aID, TSize(0,0), aLayout, morphing, aLayoutSize );
        CleanupStack::PushL( tmpBmp ); // (3)
        User::LeaveIfError(
            iLayoutBmpArray.InsertInOrder( tmpBmp,
            CAknsTemporaryBitmap::LinearOrder ) );
        CleanupStack::Pop( tmpBmp ); // (2)
        index = iLayoutBmpArray.FindInOrder( &itemToFind,
            CAknsTemporaryBitmap::LinearOrder );
        if( index == KErrNotFound )
            {
            AKNS_TRACE_ERROR("CAknsAppSkinInstance::ULLBFS Local data item vanished!");
            User::Leave( KErrUnknown );
            }
        }

    tmpBmp->ItemData()->SetType( EAknsITMaskedBitmap );
    // Ownership is transferred
    tmpBmp->ItemData()->DestroyAndSetBitmap( bitmap );
    tmpBmp->ItemData()->DestroyAndSetMask( mask );
    CleanupStack::Pop(2); // mask, bitmap (0)

    if( !mask )
        {
        tmpBmp->ItemData()->SetType( EAknsITBitmap );
        }

    TAknsImageAttributeData attributes;
    // Disable backward compatibility, size should be already correct
    attributes.iAttributes = EAknsImageAttributeNBC;
    tmpBmp->ItemData()->SetAttributesL( attributes );
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::AddLayoutBitmapL
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::AddLayoutBitmapL( const TAknsItemID& aID,
    CAknsMaskedBitmapItemData* aData, const TInt aLayout,
    const TSize& aLayoutSize, const TBool aMorphing, const TBool aLocalItem )
    {
    TBool store = ETrue;
    CleanupStack::PushL( aData );

    CAknsTemporaryBitmap* tmpBmp = CAknsTemporaryBitmap::NewL(
        aID, TSize(0,0), aLayout, aMorphing, aLayoutSize );
    CleanupStack::PushL( tmpBmp );

    // Set and detach
    tmpBmp->ItemData()->DestroyAndSetBitmap( aData->Bitmap() );
    aData->SetBitmap( NULL );
    tmpBmp->ItemData()->DestroyAndSetMask( aData->Mask() );
    aData->SetMask( NULL );

    // If there is no mask, change type to bitmap
    if( !tmpBmp->Mask() )
        {
        tmpBmp->ItemData()->SetType( EAknsITBitmap );
        }

    if (aData->ParentIID() != KAknsIIDNone)
        {
        store = EFalse;
        tmpBmp->ItemData()->SetParentIID(aData->ParentIID());
        tmpBmp->ItemData()->SetDrawRect(aData->DrawRect());
        }

    // Attributes
    if( aData->Attributes() )
        {
        tmpBmp->ItemData()->SetAttributesL( *aData->Attributes() );
        }

    User::LeaveIfError(
        iLayoutBmpArray.InsertInOrder( tmpBmp,
        CAknsTemporaryBitmap::LinearOrder ) );
    CleanupStack::Pop( tmpBmp );

    CleanupStack::PopAndDestroy( aData );
    if (store && !aLocalItem)
        {
        UpdateLocalLayoutBitmapToServerL( aID, aLayout, aLayoutSize,
        tmpBmp->ItemData()->Bitmap(), tmpBmp->ItemData()->Mask(),
        aMorphing );
        }
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::GetLayoutBitmap
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsImageItemData* CAknsAppSkinInstance::GetLayoutBitmap(
    const TAknsItemID& aID, const TSize& aLayoutSize, const TInt aLayout, TBool& aMorphingOut,  const TBool& aLocalItem )
    {
    aMorphingOut = EFalse;

    TInt updateErr( KErrNone );
    // Postpone error handling
    if (!aLocalItem)
        {
    TRAP( updateErr,
        UpdateLocalLayoutBitmapFromServerL( aID, aLayout, aLayoutSize ) );

#if defined(_DEBUG)
        if( updateErr )
            {
            AKNS_TRACE_INFO1("CAknsAppSkinInstance::GetLayoutBitmap Srv update failed %i", updateErr );
            }
#endif
        }
    TInt index( 0 );
    CAknsTemporaryBitmap itemToFind( aID, TSize(0,0), aLayout, aLayoutSize );
    if( iLayoutBmpArray.FindInOrder( &itemToFind, index,
        CAknsTemporaryBitmap::LinearOrder ) != KErrNone )
        {
        // No local data instance found, return NULL regardless of updateErr
        return NULL;
        }

    CAknsTemporaryBitmap* entry = iLayoutBmpArray[index];

    if( updateErr && entry->ItemData()->ParentIID() == KAknsIIDNone)
        {
        // Entry must be removed and destroyed if update failed
        AKNS_TRACE_ERROR2("CAknsAppSkinInstance::GetLayoutBitmap Removing %x %x for update failure", aID.iMajor, aID.iMinor );
        iLayoutBmpArray.Remove(index);
        delete entry;
        return NULL;
        }

    aMorphingOut = entry->IsMorphing();
    return entry->ItemData();
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::BeginRender
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::BeginRender()
    {
    iChunkLookup->BeginRender();
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::EndRender
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsAppSkinInstance::EndRender()
    {
    iChunkLookup->EndRender();
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::IsUpdateInProgress
// (documented in the header).
// -----------------------------------------------------------------------------
//
TBool CAknsAppSkinInstance::IsUpdateInProgress()
    {
    return iUpdateInProgress;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::VariantHighlightAnimationEnabled
// (documented in the header).
// -----------------------------------------------------------------------------
//
TBool CAknsAppSkinInstance::VariantHighlightAnimationEnabled()
    {
    return iVariantHlAnimStatus;
    }

// -----------------------------------------------------------------------------
// CAknsAppSkinInstance::IsIconConfiguredL
// (documented in the header).
// -----------------------------------------------------------------------------
//
TBool CAknsAppSkinInstance::IsIconConfiguredL( TUid aAppUid )
    {
    if ( iAppConfigurationCenrepNotUsed )
        {
        return EFalse;
        }
    TInt ret = iSession.CheckIconConfiguration( aAppUid );
    // Error codes mean:
    //   KErrNotFound - no cenrep file in the device.
    //   KErrAlreadyExists - there is double definition of some key in the cenrep file.
    if ( ret == KErrNotFound || ret == KErrAlreadyExists )
        {
        iAppConfigurationCenrepNotUsed = ETrue;
        }
    if ( ret > 0 )
        {
        return ETrue;
        }
    return EFalse;
    }

//  End of File
