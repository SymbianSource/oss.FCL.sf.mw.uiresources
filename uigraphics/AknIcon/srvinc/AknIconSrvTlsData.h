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




#ifndef AKN_ICON_SRV_TLS_DATA_H
#define AKN_ICON_SRV_TLS_DATA_H

//  INCLUDES

#include <e32std.h>
#include <f32file.h>
#include "AknIconSrvClient.h"
#include "AknIconSrvDef.h"

// FORWARD DECLARATIONS
class CAknIconLoader;
class CAknIconLocationInfo;
class CAknIconFileNameCache;

// CLASS DECLARATION

/**
* TLS data. It has a connected client to AknIconServer.
*/
NONSHARABLE_CLASS(CAknIconSrvTlsData) :
    public CBase
    {
    public:  // Constructors and destructor

        /**
        * Creates TLS data and installs it in TLS.
        */
        static void CreateSingletonL();

        ~CAknIconSrvTlsData();

    public: // New functions

        /**
        * Initializes icon loader for the given file.
        */
        void InitIconLoaderL( const TDesC& aFileName, RFile* aFile );
        
        inline CAknIconLoader* IconLoader();

        inline const TAknIconInitData& InitData() const;
        
        /**
        * Connects the file server session if not already connected,
        * and returns it. The file server session should always be
        * accessed via this method, to ensure that it is connected.
        */
        RFs& FsSessionL();

        TInt GetIconLocationInfo(
            const TDesC& aFileName, TInt16& aBitmapId, TInt16& aMaskId );

        void StoreIconLocationInfoL( CAknIconLocationInfo* aInfo );
        
        inline CAknIconFileNameCache& IconFileNameCache();

    private:

        CAknIconSrvTlsData();
        void ConstructL();

    public: // Data

        RAknIconSrvClient iIconSession;
        TAknIconInitData iInitData;

        RArray<TUint> iPointers;

        HBufC* iFileName;
        CAknIconLoader* iLoader;

        // Cached information of the icon locations (MIF/MBM) in the used icon files
        RPointerArray<CAknIconLocationInfo> iIconLocations;
                
        // Cached information of icon file names
        CAknIconFileNameCache* iFileNameCache;
        
    private: // Data

        RFs iFsSession;
    };
    
#include "AknIconSrvTlsData.inl"

#endif      // AKN_ICON_SRV_TLS_DATA_H   
            
// End of File
