/*
* Copyright (c) 2002-2007 Nokia Corporation and/or its subsidiary(-ies).
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


#ifndef AKNSAPPSKININSTANCE_H
#define AKNSAPPSKININSTANCE_H

//  INCLUDES
#include <coemain.h>

#include <AknsSkinInstance.h>
#include <AknsSrvClient.h>

// FORWARD DECLARATIONS
class CAknsAppSkinInstanceCacheEntry;
class CAknsTemporaryBitmap;
class MAknsRlRenderer;
class CAknsRlDefaultRenderer;
class CAknsRlMasterLayout;
class RApaLsSession;

// DATA TYPES

/**
* Simple pointer array data type for item definitions.
*
* @internal
*/
typedef RPointerArray<CAknsItemDef> RAknsItemDefPointerArray;

/**
* Control position list entry.
*
* @internal
*/
struct TAknsControlPositionEntry
    {
    TUint iKey;
    TPoint iScreenPos;
    };

/**
* Pointer store list entry.
*
* @internal
*/
struct TAknsPointerStoreEntry
    {
    TUint iKey;
    TAny* iValue;
    };

/**
* Simple pointer array data type for cache entries.
*
* @internal
*/
typedef RPointerArray<CAknsAppSkinInstanceCacheEntry>
    RAknsAppSkinInstanceCacheEntryPointerArray;

/**
* Simple pointer array data type for temporary bitmap entries.
*
* @since 2.6
*
* @internal
*/
typedef RPointerArray<CAknsTemporaryBitmap>
    RAknsAppSkinInstanceTemporaryBitmapArray;

// CLASS DECLARATION

/**
* Concrete application skin instance.
* Application skin instance is a thread-singleton class that implements
* MAknsSkinInstance (and also MAknsDataContext to provide root data
* context).
*
* This is an internal class that contains no exported functions.
* The class is not intended for derivation outside the library.
*
* @since 2.0
*
* @internal
*/
NONSHARABLE_CLASS(CAknsAppSkinInstance) :
    public CCoeStatic, public MAknsSkinInstance, public MAknsDataContext,
    public MAknsSkinChangeObserver
    {
    protected: // Protected constructor

        /**
        * C++ default constructor.
        *
        * @internal
        */
        CAknsAppSkinInstance();

    public: // Constructors and destructors

        /**
        * Creates application skin instance singleton.
        *
        * @par Exceptions:
        *   If construction fails, leaves with an error code.
        *
        * @internal
        */
        static void CreateSingletonL();

        /**
        * Destructor.
        *
        * @internal
        */
        virtual ~CAknsAppSkinInstance();

    public: // Functions from MAknsSkinInstance - Item data

        /**
        * @copydoc MAknsSkinInstance::RootDataContext()
        */
        MAknsDataContext* RootDataContext();

        /**
        * @copydoc MAknsSkinInstance::GetCachedItemData(TAknsItemID,TAknsItemType)
        */
        CAknsItemData* GetCachedItemData( const TAknsItemID& aID,
            const TAknsItemType aType );

        /**
        * @copydoc MAknsSkinInstance::GetCachedItemData(TAknsItemID)
        */
        CAknsItemData* GetCachedItemData( const TAknsItemID& aID );

        /**
        * @copydoc MAknsSkinInstance::CreateUncachedItemDataL(TAknsItemID,TAknsItemType)
        */
        CAknsItemData* CreateUncachedItemDataL( const TAknsItemID& aID,
            const TAknsItemType aType );

        /**
        * @copydoc MAknsSkinInstance::CreateUncachedItemDataL(TAknsItemID)
        */
        CAknsItemData* CreateUncachedItemDataL( const TAknsItemID& aID );

    public: // Functions from MAknsSkinInstance - Item definitions

        /**
        * @copydoc MAknsSkinInstance::SetLocalItemDefL()
        */
        void SetLocalItemDefL( CAknsItemDef* aDef );

        /**
        * @copydoc MAknsSkinInstance::SetChangeEventsEnabled()
        */
        void SetChangeEventsEnabled( TBool aEnabled );

    public: // Functions from MAknsSkinInstance - Error handling

        /**
        * @copydoc MAknsSkinInstance::NotifyClientError();
        */
        void NotifyClientError( const TAknsClientError aError );

    public: // Functions fro MAknsSkinInstance - Querying the change reason
        /**
        * @copydoc MAknsSkinInstance::SkinChangeReason()
        */
        TAknsSkinChangeReason SkinChangeReason();

    public: // Functions fro MAknsSkinInstance - removing local item defs
        /**
        * @copydoc MAknsSkinInstance::RemoveLocalItemDefs()
        */
        void RemoveLocalItemDefs();

    public: // Functions from MAknsDataContext

        /**
        * @copydoc MAknsDataContext::ReserveItemL()
        */
        void ReserveItemL( const TAknsItemID& aID );

        /**
        * @copydoc MAknsDataContext::ReleaseItem()
        */
        void ReleaseItem( const TAknsItemID& aID );

    public: // Functions from MAknsSkinChangeObserver

        void FlushLocalCaches();
        /**
        * @copydoc MAknsSkinChangeObserver::SkinContentChanged()
        */
        void SkinContentChanged();

        /**
        * @copydoc MAknsSkinChangeObserver::SkinConfigurationChanged()
        */
        void SkinConfigurationChanged(
            const TAknsSkinStatusConfigurationChangeReason aReason );

        /**
        * @copydoc MAknsSkinChangeObserver::SkinPackageChanged()
        */
        void SkinPackageChanged(
            const TAknsSkinStatusPackageChangeReason aReason );

    public: // New functions - Testing

        /**
        * Returns the current count of local item definition list.
        */
        IMPORT_C TInt DebugLocalItemDefCount();

        /**
        * Returns the current count of item data cache.
        */
        IMPORT_C TInt DebugCacheCount();

        /**
        * Disables server error notification and registers observer.
        */
        IMPORT_C void DebugHookClientErrors( void (*aCallback)(TAny*), TAny* aParam );

        /**
        * Disables change notification and registers observer.
        */
        IMPORT_C void DebugHookChangeNotifications( void (*aCallback)(TAny*), TAny* aParam );

        /**
        * Resets the internal state.
        */
        IMPORT_C void DebugReset();

    protected:  // New functions

        /**
        * Updates cached item.
        * This method should be called when an item definition changes.
        * If item data (for the specified IID) is in the ASI cache,
        * it is reconstructed. Type of the new item definition must
        * match the existing cached item, if one exists.
        *
        * @param aCacheEntry Cache entry to be updated.
        *
        * @param aRemoveIfNotFound Boolean flag to indicate whether
        *   the cache item should be removed if no new definition is found.
        *
        * @par Exceptions:
        *   If item data creation fails, leaves with an error code.
        *   Cached item (if any) is automatically destroyed.
        *
        * @internal
        */
        void UpdateCachedItemL( CAknsAppSkinInstanceCacheEntry* aCacheEntry,
            const TBool aRemoveIfNotFound );

        /**
        * Notifies the application that an item definition has changed.
        * Sends skin resource change event to the window group of the
        * current application. Also redraws the screen (if there are items
        * in cache) to enable controls
        * that use cached items to update their appearance.
        *
        * @internal
        */
        void NotifyItemDefChange(TBool aFgOnly = EFalse);

        /**
        * Redraws the screen.
        *
        * @internal
        */
        void RedrawScreen() const;

        /**
        * Finds item definition for specified item, creates item data for
        * it and inserts it into the cache.
        *
        * @param aID Item ID to be cached.
        * @param aType Type of the item. EAknsITUnknown if any type is
        *   acceptable.
        *
        * @return Pointer to cache entry. Application skin instance still
        *   owns the cache entry object and controls its lifetime.
        *   @c NULL value is returned if no item definition is found.
        *
        * @par Exceptions:
        *   If creation fails, leaves with an error code.
        *
        * @internal
        */
        CAknsAppSkinInstanceCacheEntry* LookupCreateAndCacheL(
            const TAknsItemID& aID, const TAknsItemType aType );

        /**
        * Finds item definition for specified item and creates an independent
        * item data for it.
        *
        * @param aID Item ID matching the item data to be created.
        * @param aType Type of the item. EAknsITUnknown if any type is
        *   acceptable.
        *
        * @return Newly created item data instance for the specified item.
        *   Ownership of the item data is transferred to the caller.
        *   @c NULL value is returned if no item definition is found.
        *
        * @par Exceptions:
        *   If creation fails, leaves with an error code.
        *
        * @internal
        */
        CAknsItemData* LookupAndCreateL( const TAknsItemID& aID,
            const TAknsItemType aType );

        /**
        * Finds specified item from cache.
        *
        * @param aID Item ID to be found.
        *
        * @return Pointer to cache entry or @c NULL if none found.
        *   Application skin instance still owns the cache entry and controls
        *   its lifetime.
        *
        * @internal
        */
        CAknsAppSkinInstanceCacheEntry* FindFromCache( const TAknsItemID& aID );

        /**
        * Removes specified item from cache and destroys it.
        *
        * @param aID Item ID to be removed and destroyed.
        *
        * @internal
        */
        void RemoveAndDestroyFromCache( const TAknsItemID& aID );

        /**
        * Handles the client error condition.
        *
        * @param aError Type of the error.
        *
        * @internal
        */
        void HandleClientError( const TAknsClientError aError );

        /**
        * Finds the specified item definition, but does not construct the
        * item data object.
        *
        * @since 2.1
        *
        * @param aOwnershipTransfer Output parameter that is assigned to
        *   ETrue if the caller should destroy the returned definition
        *   object.
        *
        * @param aID Item ID of the item definition to be retrieved.
        *
        * @param aType Type (or base type) of the item definition to be
        *   retrieved.
        *
        * @return Pointer to the item definition object or @c NULL if
        *   not found. The caller must observe aOwnershipTransfer
        *   value to determine whether the object should be destroyed.
        *
        * @internal
        */
        CAknsItemDef* LookupDef( TBool& aOwnershipTransfer,
            const TAknsItemID& aID, const TAknsItemType aType );

        /**
        *
        * @since 2.8
        *
        * @internal
        */
        void UpdateLocalLayoutBitmapToServerL( const TAknsItemID& aID,
            const TInt aLayout, const TSize& aLayoutSize, CFbsBitmap* aBitmap,
            CFbsBitmap* aMask, const TBool aMorphing );

        /**
        *
        * @since 2.8
        *
        * @internal
        */
        void UpdateLocalLayoutBitmapFromServerL( const TAknsItemID& aID,
            const TInt aLayout, const TSize& aLayoutSize );

    public: // New methods

        /**
        * Retrieves (and creates if necessary) a temporary bitmap
        * for the given item ID and given size.
        *
        * @since 2.6
        *
        * @internal
        */
        CAknsTemporaryBitmap* GetTemporaryBitmapL(
            const TAknsItemID& aID, const TSize& aSize );

        /**
        * Retrieves a non-owned pointer to the renderer.
        *
        * @since 2.8
        *
        * @internal
        */
        MAknsRlRenderer* DefaultRenderer();

        /**
        * Retrieves a non-owned pointer to the master layout.
        *
        * @since 2.8
        *
        * @internal
        */
        CAknsRlMasterLayout* MasterLayout();

        /**
        * Adds a layout bitmap, ownership transferred.
        *
        * @since 2.8
        *
        * @internal
        */
        void AddLayoutBitmapL(
            const TAknsItemID& aID, CAknsMaskedBitmapItemData* aData,
            const TInt aLayout, const TSize& aLayoutSize,
            const TBool aMorphing, const TBool aLocalItem );

        /**
        * Retrieves a layout bitmap, ownership not transferred.
        *
        * @since 2.8
        *
        * @internal
        */
        CAknsImageItemData* GetLayoutBitmap( const TAknsItemID& aID,
            const TSize& aLayoutSize, const TInt aLayout, TBool& aMorphingOut, const TBool& aLocalItem );

        /**
        * Begins rendering. EndRender must be called to free the mutex
        * after rendering completes.
        *
        * @since 2.8
        *
        * @internal
        */
        void BeginRender();

        /**
        * Ends rendering. BeginRender must have been called, otherwise
        * the mutex state will be corrupted.
        *
        * @since 2.8
        *
        * @internal
        */
        void EndRender();

        /**
        * From base class MAknsSkinChangeObserver.
        * @copydoc MAknsSkinChangeObserver::IsUpdateInProgress()
        */
        TBool IsUpdateInProgress();

        /**
        * The product variant status of highlight animation.
        *
        * @return ETrue if product supports highlight animations, EFalse if
        *         highlight animations should not be used.
        * @since 3.1
        * @internal
        */
        TBool VariantHighlightAnimationEnabled();

        /**
        * Checks if the given AppUid icon has been configured with AppArc cenrep configuration file.
        * @param aAppUid application UID to check
        * @return ETrue if the icon is configured with the cenrep file, otherwise EFalse.
        */
        TBool IsIconConfiguredL( TUid aAppUid );

        /**
        * Get Current Animation Backgournd State.
        * @return ETrue if the Animation Backgournd is ON, otherwise EFalse.
        */       
        TBool AnimBackgroundState( ) const;
        
        /**
        * Get if wallpaper defined.
        * @return if wallpaper defined.
        */       
        TBool WallpaperDefined( ) const;

    private: // Private ConstructL

        /**
        * By default Symbian OS constructor is private.
        */
        void ConstructL();
        
		/**
        * Read Animation Backgournd State
        */
        void InitAnimBackgroundL( );

        /**
        * Read Psln Cenrep
        */
        void InitPslnCenrepL( TBool aOnlyWP = EFalse );

    protected: // Data

        /**
        * Local item definition array.
        */
        RAknsItemDefPointerArray iLocalItemDefArray;

        /**
        * Cache entry array.
        */
        RAknsAppSkinInstanceCacheEntryPointerArray iCache;

        /**
        * Flag indicating whether change events are enabled.
        */
        TBool iChangeEventsEnabled;

        /**
        * Flag indicating whether there is a pending change event.
        */
        TBool iChangeEventPending;

        /**
        * Skin server session.
        */
        RAknsSrvSession iSession;

        /**
        * Internal control position list used by AknsUtils.
        */
        RArray<TAknsControlPositionEntry> iControlPositionList;

        /**
        * Internal pointer store used by AknsUtils.
        */
        RArray<TAknsPointerStoreEntry> iPointerStoreList;

        /**
        * Chunk lookup instance.
        */
        CAknsSrvChunkLookup* iChunkLookup;

        /**
        * Temporary bitmap array.
        */
        RAknsAppSkinInstanceTemporaryBitmapArray iTmpBmpArray;

        /**
        * Default renderer instance.
        */
        CAknsRlDefaultRenderer* iRenderer;

        /**
        * Master layout instance.
        */
        CAknsRlMasterLayout* iMasterLayout;

        /**
        * Layout bitmap array.
        */
        RAknsAppSkinInstanceTemporaryBitmapArray iLayoutBmpArray;

        /**
        * Update status
        */
        TBool iUpdateInProgress;

        /**
        * Product variant enable/disable status for highlight animations.
        */
        TBool iVariantHlAnimStatus;

        /**
        * Cached AppArc server session
        */
        RApaLsSession* iCachedApaSession;

        /**
        * The last skin change reason
        */
        TAknsSkinChangeReason iLastChangeReason;

        /**
        * Are the application icons configured with cenrep?
        *
        */
        TBool iAppConfigurationCenrepNotUsed;
        
        /**
        * Animation Background State
        */
        TBool iAnimBgState;
        
        /**
        * Wallpaper Type
        */
        TBool iWallpaperDefined;

    private: // Data

        /**
        * Debug hook for client errors
        */
        void (*iDebugErrorCallback)(TAny*);
        TAny* iDebugErrorCallbackParam;

        /**
        * Debug hook for change notifications
        */
        void (*iDebugChangeCallback)(TAny*);
        TAny* iDebugChangeCallbackParam;

    public: // Friend classes

        friend class AknsUtils;
        friend class AknsPointerStore;
        friend class AknsItemDataFactory;
        friend class AknsScalabilityUtils;
        friend class CAknsAlAnimatorBmp; // To access iSession
    };

#endif // AKNSAPPSKININSTANCE_H

// End of File
