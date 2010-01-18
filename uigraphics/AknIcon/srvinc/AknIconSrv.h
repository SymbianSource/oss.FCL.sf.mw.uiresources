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
*
*/


#ifndef AKN_ICON_SERVER_H
#define AKN_ICON_SERVER_H

//  INCLUDES
#include <e32base.h>
#include <s32file.h>
#include <fbs.h>
#include <AknIconUtils.h>
// CONSTANTS

// needed for creating server thread in WINS.
const TInt KAknIconSrvMinHeapSize = 0x10000;
const TInt KAknIconSrvMaxHeapSize = 0x4000000;

// opcodes used in message passing between client and server
enum TAknIconServRequest
    {
    ERetrieveOrCreateSharedIcon,
    EFreeBitmap,
    EGetContentDimensions,
    EPreserveIconData,
    EDestroyIconData,
    EGetInitData,
    EAknIconServRequestEnableCache,
    // For debug
    EServerHeapMark,
    EServerHeapMarkEnd,
    EServerHeapFailNext,
    EServerHeapFailNextIncreasing,
    EServerHeapReset,
    EServerResetDynamicallyChangingAllocations,
    EServerHeapUsed,
    EServerSetPreferredIconDisplayMode
    };

// return codes to client side (not actual errors)
const TInt KAknIconSrvCodeAnimated    = -100;
const TInt KAknIconSrvCodePanicClient = -101; // The AknIconSrv client has been panicked

_LIT( KAknIconSrvName, "!AknIconServer" );
_LIT( KAknIconSrvExe, "AknIconSrv.exe" );
_LIT( KAknIconLibName, "AknIcon.dll" );

// FUNCTION PROTOTYPES

// function to start the server thread/process
GLREF_C TInt StartServer();
// function to signal server startup semaphore
GLREF_C void SignalClient();

// FORWARD DECLARATIONS
class CAknIconSrvIconItem;
struct TAknIconParams;
class CAknIconLoader;
struct TAknIconSrvSessionIconItem;
struct TAknIconSrvSessionPreservedItem;
class CAknIconSrvCache;
class CAknIconSrvPrecacheItem;
class CAknIconSrvRequest;
class CAknIconSrvPrecacher;
struct TAknIconSrvReturnData;
struct TAknIconInitData;
class CAknIconDataPreserver;
class MAknIconFormatHandler;
class CAknIconDataItem;
class CAknIconFileNameCache;

// CLASS DECLARATION

/**
*  The server class, an active object.
*  Contains an instance of RServer, a handle to the kernel server
*  representation which is used to receive messages. 
*/
NONSHARABLE_CLASS(CAknIconServer) : public CServer2
    { 
    public:  // Constructors and destructor

        /**
        * constructs and starts the server.
        */
        static CAknIconServer* NewL();

        virtual ~CAknIconServer();

    public:

        /**
        * Opens a new session to the server.
        *
        * @param aVersion required version of the server.
        *
        * @return pointer to a new session
        *
        * Leaves if:
        * - Out of memory (KErrNoMemory)
        */
		CSession2* NewSessionL( const TVersion& aVersion, const RMessage2& aMessage ) const;

        /**
        * Server bootstrap code.
        */
        IMPORT_C static TInt ThreadStart();

        const CAknIconSrvIconItem* RetrieveOrCreateSharedIconL();
        const CAknIconSrvIconItem* FreeBitmapL();

        const CAknIconDataItem* PreserveIconDataL();
        const CAknIconDataItem* UnpreserveIconDataL();

        void GetContentDimensionsL();

        void CleanupSessionIconItem( 
            const TAknIconSrvSessionIconItem& aItem );
        void CleanupSessionPreservedItem(
            const TAknIconSrvSessionPreservedItem& aItem );

        void RemoveCachedItem( const CAknIconSrvIconItem& aItem );

        inline RFs& FsSession();
        inline TRequestStatus& ThreadLaunchStatus();
        inline CAknIconSrvPrecacher& Precacher();
        inline TDisplayMode IconDepth() const;

        /* Clears "permanently cached" flag from the items that are premanently cached
        *  according to the currently active skin. Deletes them from the icon item array,
        *  if no-one is using them.
        */
        void InvalidateItemsCachedFromSkin();


        /*
        * For debug only.
        */
        void ResetDynamicallyChangingAllocations();
        void SetPreferredIconDisplayMode( TDisplayMode aMode );

        /*
        * Gets information of handles to an empty bitmap used in error cases
        * and the configuration data from the resource file.
        */
        void GetInitData( TAknIconInitData& aData ) const;

        CAknIconLoader* InitIconLoaderL( const TDesC& aFileName, RFile* aFile );
        
        /**
        * Releases the icon loader if a backup/restore operation is going on.
        */
        void IconLoaderUsed();
        
        /**
        * Cleanup item function for making sure that the used icon file is properly
        * closed after use to avoid problems with e.g. uninstallations or backup/restore.
        */
        static void CleanupIconLoader( TAny* aServer );
        
        /**
        * Returns the file handle that is transferred from the client side
        * and adopted by the current session object.
        * If a file handle is not supplied by the client, this returns
        * a closed file handle.
        * Caller of this method does not need to close this file handle.
        */
        RFile& RetrieveFileHandleL();
        inline CAknIconFileNameCache& IconFileNameCache();

        /*
        * Enable or disable the cache.
        */
		void EnableCache(TBool aEnable);
		
		/**
        * Loads icon data and initializes icon format handler.
        * The returned icon format handler is owned by the 
        * CAknIconServer object.
        */
		TPtrC8 InitIconDataAndHandlerLC(
            const TAknIconParams& aParams,
            CAknIconLoader*& aLoader,
            MAknIconFormatHandler*& aHandler );

    private: // New methods

        TInt RetrieveIcon( const TAknIconParams& aInfo );
        


        CAknIconSrvIconItem* CreateIconL( const TAknIconParams& aInfo );

        CAknIconSrvIconItem* CreateMbmIconL( 
            const TAknIconParams& aInfo,
            const TAknIconSrvReturnData& aHandles );

        static void ApplyIconColorL( CAknIconSrvIconItem* aItem, const TRgb aColor );
        
        /*
        * Returns ETrue if aItem is deleted otherwise EFalse.  
        */
        TBool DeleteOrCacheUnusedIcon(CAknIconSrvIconItem* aItem);

        void ReCreateSvgL( TAknIconParams& aInfo, CAknIconSrvIconItem *& aItem); 
    private:

        CAknIconServer();
        void ConstructL();

    private:     // data

        // Configuration data from the resource file.
        TInt iCompression;
        TDisplayMode iIconMode;
        TDisplayMode iIconMaskMode;
        
        TDisplayMode iPhotoMode;
        TDisplayMode iVideoMode;
        
        TDisplayMode iOffscreenMode;
        TDisplayMode iOffscreenMaskMode;
        // ---

        RFs iFsSession;
        
        RPointerArray<CAknIconSrvIconItem> iIconItems;

        // List of Icon Format Handlers
        // Shared with other classes must be deleted at last.
        RPointerArray<MAknIconFormatHandler> iHandlerList;

        // Always icon loader for avkon icon file.
        CAknIconLoader* iAvkonIconLoader;

        // Icon loader for previously accessed other icon file.
        CAknIconLoader* iOtherIconLoader;
        HBufC* iCurrentIconFile;

        TInt iCurrentIndex; // Helper to keep array index valid.

        CAknIconDataPreserver* iIconDataPreserver;

        // Cache configuration
        CAknIconSrvCache* iCache;
        
        // ---------------------------------------------------------------------
        // Precache thread writes to the following member variables.
        // ---------------------------------------------------------------------

        TRequestStatus iThreadLaunchStatus;
        // Cached information of icon file names
        CAknIconFileNameCache* iFileNameCache;
#ifdef PRECACHE2
        // All precached items are copied to this array
        RPointerArray<CAknIconSrvIconItem> iNewPrecachedItems;
        
        // This list of bitmaps is used to keep track of bitmaps which are valid in precache 
        RPointerArray<CFbsBitmap> iFreePrecacheBitmapHandles;
        
        //Used to indicate if all the items in the resource file have been parsed
        TBool iPrecacheComplete;
        
        //Thread in which the precaching occurs
        RThread iPreCacheThread;
        
#endif

    private:

        friend class CAknIconSrvPrecacher;
        friend class CAknIconSrvCache;
        
#ifdef _NGATESTING        
        void LoadConfigurationL(RFs& aFs);
        TInt32      iConfigIconType;
        TFileName   iNGADirectory;
#endif
    };

#include "AknIconSrv.inl"

#endif // AKN_ICON_SERVER_H

// Enf of File
