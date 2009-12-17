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
* Description:  Defines the public client side interface class to access the
                 Skin Server and the skin change observer class to listen for
                 skin changes in the system.
*
*/


#ifndef AKNSSRVCLIENT_H
#define AKNSSRVCLIENT_H

//  INCLUDES
#include <e32base.h>
#include <badesca.h>
#include <AknsItemDef.h>
#include <AknsItemID.h>
#include <AknsSrvSkinInformationPkg.h>

#include "AknsSrvChunkLookup.h"

// DATA TYPES

/**
* Reasons for panicing client thread.
*
* @since 2.0
*/
enum TAknSkinSrvPanic
    {
    EAknsSrvBadRequest              = 0,
    EAknsSrvNotConnected            = 2,
    EAknsSrvNotifyHandlerMissing    = 3,
    EAknsSrvNoActiveScheduler       = 4,
    EAknsSrvCannotCreateSharedChunk = 6,
    EAknsSrvBadAlignment            = 8,
    EAknsSrvFatalMergeFailure       = 10,
    EAknsSrvCannotAdjustChunk       = 12,
    EAknsSrvTooManyItemDefs         = 14,
    EAknsSrvCannotRestoreDefaults   = 16,
    EAknsSrvNotifyListImbalance     = 18,
    EAknsSrvInvalidMessageHandle    = 20,
    EAknsSrvInvalidBuildConf        = 22,
    EAknsSrvFatalDRMFailure         = 24
    };

enum TAknsSrvInifileType
    {
    EAknsSrvInifileSSWP,
    EAknsSrvInifileSSSS,
    };

enum TAknsSrcScreenMode
   {
   EAknsSrcScrModeNone      = 0,
   EAknsSrvScrModePortrait  = 1,
   EAknsSrvScrModeLandscape = 2,
   EAknsSrvScrModeSquare    = 3
   };

/**
* Skin server panic category string.
*
* @since 2.0
*/
_LIT( KAknSkinSrvPanicCategory, "AknSkinServer" );

/**
* Enumeration of skin item definition classes.
*
* @since 2.0
*/
enum TAknsItemDefClass
    {
    /**
    * Skin item definition class enumeration value for bitmaps,
    * including layout backgrounds but excluding application icons.
    */
    EAknsItemDefClassBitmaps = 1,

    /**
    * Skin item definition class enumeration value for application icons.
    */
    EAknsItemDefClassAppIcons = 2,

    /**
    * Skin item definition class enumeration value for color sets.
    */
    EAknsItemDefClassColorSets = 4
    };

/**
* Skin package change reason codes used by
* @c MAknsSkinChangeObserver::SkinPackageChanged
*
* @since 2.5
*/
enum TAknsSkinStatusPackageChangeReason
    {
    /**
    * Enumeration value that indicates change in skin package list.
    *
    * @since 2.5
    */
    EAknsSkinStatusPackageListUpdate        = 1
    };

/**
* Skin configuration change reason codes used by
* @c MAknsSkinChangeObserver::SkinConfigurationChanged
*
* @since 2.5
*/
enum TAknsSkinStatusConfigurationChangeReason
    {
    /**
    * Enumeration value that indicates completion of skin content merge,
    * i.e. the new configuration is available for reading.
    *
    * @since 2.5
    */
    EAknsSkinStatusConfigurationMerged      = 1,

    /**
    * Enumeration value that indicates completion of event propagation
    * to clients, i.e. the new configuration has been deployed to
    * the registered clients.
    *
    * @since 2.5
    */
    EAknsSkinStatusConfigurationDeployed    = 2,

    /**
    * Enumeration value that indicates unsuccessful completion of
    * skin activation because of an out-of-memory condition.
    *
    * @since 2.5
    */
    EAknsSkinStatusConfigurationFailedOOM   = 3,

    /**
    * Enumeration value that indicates unsuccessful completion of
    * skin activation because of a corrupted skin package.
    *
    * @since 2.5
    */
    EAknsSkinStatusConfigurationFailedCorrupt = 4,
    /**
    * Enumeration value that indicates a change in the
    * state of the morphing skin items
    *
    * @since 3.0
    */
    EAknsSkinStatusMorphingStateChange = 5,
    EAknsSkinStatusWallpaperChanged = 6,
    
    /**
    * Enumeration value that indicates a change in the
    * state of animation Background
    *
    * @since 5.2
    */    
    EAknsSkinStatusAnimBackgroundChanged = 7,
	
	EAknsSkinStatusSlideSetWallpaperChanged = 8
    
    };

// CONSTANTS

_LIT( KAknsSrvRAMBitmapName, "RAM:BmpHandle");

// CLASS DECLARATION

/**
* An user implementable interface class to handle the skin change
* notifications.
*
* @since 2.0
*/
class MAknsSkinChangeObserver
    {
    public:

        /**
        * Called by the skin server when skin content is changed and the
        * connected client wants to be informed.
        *
        * @since 2.0
        */
        virtual void SkinContentChanged() = 0;

        /**
        * Called by the skin server to indicate that the current skin
        * configuration has changed.
        *
        * @param aReason Reason code.
        *
        * @since 2.5
        */
        virtual void SkinConfigurationChanged(
            const TAknsSkinStatusConfigurationChangeReason aReason ) = 0;

        /**
        * Called by the skin server to indicate that the available
        * skin packages have changed.
        *
        * @param aReason Reason code.
        *
        * @since 2.5
        */
        virtual void SkinPackageChanged(
            const TAknsSkinStatusPackageChangeReason aReason ) = 0;

        /**
        * Called by the skin server to ask for local cache cleanup.
        *
        * @since 3.1
        *
        */
        virtual void FlushLocalCaches() {};
    };

// FORWARD DECLARATIONS

class CAknsSkinChangeHandler;
struct TAknsSrvClientMemberData;

// CLASS DECLARATION

/**
* The client side interface class for the skins server
* Provides functionality to change the system skin, to retrieve skin content
* definitions from the server and to listen for skin change events.
*
* @lib AknSkinSrv.lib
*
* @since 2.0
*/
class RAknsSrvSession : public RSessionBase
    {
    public:

        /**
        * C++ default constructor.
        */
        IMPORT_C RAknsSrvSession();

        /**
        * Starts the server if it's not allready started and creates a new
        * session.
        *
        * @since 2.0
        *
        * @param aObserver Skin change observer.
        * @param aPriority Observer priority.
        *
        * @return KErrNone if connection was succesfull, or otherwise one of
        *   the standard system wide error codes.
        */
        IMPORT_C TInt Connect( MAknsSkinChangeObserver* aObserver = NULL,
            TInt aPriority = CActive::EPriorityStandard );

        /**
        * Closes the session.
        *
        * @since 2.0
        *
        */
        IMPORT_C void Close(); //lint !e1511 Hiding allowed

        /**
        * Enables the servers skin change notifications mechanism. If the skin
        * definitions have changed, or there are pending notification events,
        * SkinContentChanged() is called for all sessions.
        * The function affects all sessions.
        *
        * @since 2.0
        *
        */
        IMPORT_C void EnableSkinChangeNotify();


        /**
        * Disables the servers skin change notification mechanism. After this
        * call no notification events are generated until a subsequent
        * EnableSkinChangeNotify() is called. The function affects all sessions.
        *
        * @since 2.0
        *
        */
        IMPORT_C void DisableSkinChangeNotify();

        /**
        * Notifies the server that the skin client has encountered an error
        * while doing a skin change. After this call the server falls back to
        * the system default skin and ignores any calls to this funcion to
        * avoid infite loop.
        *
        * @since 2.0
        *
        * @param aErrorCode Error code.
        */
        IMPORT_C void ClientError(TInt aErrorCode = 0);

        /**
        * Sets all the active item definition sets (including all the classes).
        * Item definition sets of the skin with the given package ID are
        * activated and clients are notified about the skin change.
        *
        * @since 2.0
        *
        * @param aPID Package ID of the skin to be activated.
        *
        * @return KErrNone if succesfull or one of the system wide error codes.
        */
        IMPORT_C TInt SetAllDefinitionSets( const TAknsPkgID aPID );

        /**
        * Retrieves skin information for all the available skins packages
        * in specified location. After a call to this function, the ownewship
        * of the array and the items in it is transferred to the caller.
        *
        * @since 2.0
        *
        * @param aLocation the location from where to look for the skin
        *   packages. Default value is phone (i.e., c and z drives).
        *
        * @return A pointer to an array containing pointers to
        *   CAknsSrvSkinInformationPkg instances, or an empty array if no skin
        *   packages were found in the specified location. If the same skin
        *   was found multiple times, only the first match is included in the
        *   array.
        *
        * @par Exceptions:
        *   If enumeration failed, method leaves with an error code.
        */
        IMPORT_C CArrayPtr<CAknsSrvSkinInformationPkg>*
            EnumerateSkinPackagesL(
            TAknSkinSrvSkinPackageLocation aLocation = EAknsSrvPhone );

        /**
        * Creates a chunk lookup object.
        *
        * @since 2.0
        *
        * @return Newly created chunk lookup object.
        *
        * @par Exceptions:
        *   If construction fails, method leaves with an error code.
        */
        IMPORT_C CAknsSrvChunkLookup* CreateChunkLookupL();

        /**
        * Sets the idle state wallpaper.
        *
        * @since 2.0
        *
        * @param aFilename a fully qualified path(incl. path + filename)
        *   to the mbm file containing the wallpaper
        * @param aIndex the index of the bitmap in the mbm file
        * @param aMaskIndex the index of the mask bitmap in the mbm file
        *
        * @return If the call fails, one of the system wide error codes is
        *   returned.
        */
        IMPORT_C TInt SetIdleWallpaper(const TDesC& aFilename);

        /**
        * Stores a duplicate of the given bitmap (optionally with mask).
        *
        * @param aIID Item ID used as a key.
        *
        * @param aType Layout type used as a key.
        *
        * @param aBmp Pointer to a bitmap. Must be non-NULL. No ownership
        *   is transferred.
        *
        * @param aMask Pointer to a mask, or @c NULL. No ownership is
        *   transferred.
        *
        * @since 2.8
        */
        IMPORT_C TInt StoreScalableGraphics(const TAknsItemID& aIID,
            const TInt aType, const TSize& aLayoutSize, const CFbsBitmap* aBmp,
            const CFbsBitmap* aMask, TBool aMorphing = EFalse );

        /**
        * Instructs the server to cleanup any stored layout bitmaps.
        *
        * @return Error code.
        *
        * @since 2.8
        */
        IMPORT_C TInt ClearScalableGraphics();

        /**
        * Acknowledges the skin change notification.
        *
        * @return Error code.
        *
        * @since 2.7
        */
        TInt AcknowledgeSkinChangeNotification();

        IMPORT_C TInt DeleteSkin(const TAknsPkgID aPID, TAknSkinSrvSkinPackageLocation aLocation );
        IMPORT_C TInt CopySkin(const TAknsPkgID aPID, TAknSkinSrvSkinPackageLocation aSourceLocation, TAknSkinSrvSkinPackageLocation aDestLocation);
        IMPORT_C TInt OpenBitmapFile( const TDesC& aFilename, TInt &aFileHandle);
        IMPORT_C TInt OpenInifile(const TAknsPkgID aPID, TAknSkinSrvSkinPackageLocation aLocation, TInt& aFilehandle, TBool aWriteToFile);
        IMPORT_C TInt CopySoundFile(const TDesC& aSourceFilename, const TDesC& aTargetFilename);
        IMPORT_C void DecodeWallpaperImageL(const TDesC& aFilename, const TSize& aTargetSize, CFbsBitmap*& aBitmap, CFbsBitmap*& aMask);
        IMPORT_C TInt OpenImageInifile(TAknsSrvInifileType aType, TInt& aFilehandle);
        IMPORT_C TInt SetSlideSetWallpaper(const CDesCArray& aFilenameArray);
#if defined(RD_SLIDESHOW_WALLPAPER)
        void DoWriteInifileL(const CDesCArray& aFilenameArray);
#endif
        IMPORT_C void FreeUnnecessaryLayoutBitmaps(TAknsSrcScreenMode aMode);

        /*
        * Checks if AppArc has been configured using CenRep for this application UID. If so, skinned icon graphics are NOT
        * created when calling AknsUtils::CreateAppIconLC. Instead, configured icon (which is defined in the 
        * AppArc's CenRep file) is used. Note that icon configuration can wary depending on active language.
        *
        * @since 5.0
        *
        * @param aAppUid - Application UID of application to be checked.
        * @return zero, if no cenrep-based configuration is used.
        * Non-zero is returned, if application UID is configured using AppArc's CenRep file.
        */
        IMPORT_C TInt CheckIconConfiguration( TUid aAppUid );
        
        /**
        * Add one wallpaper.
        *
        * @param aFilename a fully qualified path(incl. path + filename)
        *   of the wallpaper
        * @param aTargetSize - Decoded size. 
        * if not set, Both portait and landscape(base on screen size) will be decoded. 
        */       
        IMPORT_C void AddWallpaperL( const TDesC& aFilename, const TSize& aTargetSize );
        
        /**
        * Remove one decoded wallpaper.
        *
        * @param aFilename a fully qualified path(incl. path + filename)
        *   of the wallpaper
        */        
        IMPORT_C void RemoveWallpaper( const TDesC& aFilename );
        
        /**
        * Remove all decoded wallpaper.
        */
        IMPORT_C void RemoveAllWallpapers( );
        
        /**
        * Get a decoded wallpaper.
        */
        IMPORT_C  CFbsBitmap* WallpaperImageL( const TDesC& aFilename );

    private: // Reserved exports

        /**
        * Reserved for future use.
        *
        * @since 2.0
        *
        * @return Always returns zero.
        */
        IMPORT_C TInt Reserved1();

        /**
        * Reserved for future use.
        *
        * @since 2.0
        *
        * @return Always returns zero.
        */
        IMPORT_C TInt Reserved2();

        /**
        * Reserved for future use.
        *
        * @since 2.0
        *
        * @return Always returns zero.
        */
        IMPORT_C TInt Reserved3();

        /**
        * Reserved for future use.
        *
        * @since 2.0
        */
        IMPORT_C void Reserved4();

    private:

        /**
        * Gets the server version.
        */
        TVersion Version() const;

        /**
        * Cancels send operation.
        */
        void SendCancel();

        /**
        * Completes event handling.
        */
        void EventHandled();

    private: // Data

        // Holds member variables of this class.
        TAknsSrvClientMemberData* iMemberData;

    private: // Friend classes
        friend class CAknsSkinChangeHandler;

    };

#endif // AKNSSRVCLIENT_H

// End of File
