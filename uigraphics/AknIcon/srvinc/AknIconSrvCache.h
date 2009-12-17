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



#ifndef AKN_ICON_SRV_CACHE_H
#define AKN_ICON_SRV_CACHE_H

//  INCLUDES
#include <e32base.h>
#include <AknsSrvClient.h>

// CONSTANTS

// FORWARD DECLARATIONS
class CAknIconServer;
class CAknIconSrvIconItem;
class CAknIconSrvPrecacheItem;
class TResourceReader;
class CAknsBitmapItemDef;

// FUNCTION PROTOTYPES
GLREF_C TInt PrecacheThreadFunction( TAny* aParameters );

// CLASS DECLARATION

/**
* Icon cache configuration (static and dynamic).
*/
NONSHARABLE_CLASS(CAknIconSrvCache) : public CBase
    { 
    public:  // Constructors and destructor

        static CAknIconSrvCache* NewL( CAknIconServer& aServer );
        virtual ~CAknIconSrvCache();

    public:  // New methods


        // Dynamic bitmap caching
        TBool CacheUnusedIcon( CAknIconSrvIconItem& aItem );
        void RemoveIfCached( CAknIconSrvIconItem& aItem );
        void DynamicToPrecache( CAknIconSrvIconItem& aItem );
        // Other utility methods
        inline RThread PrecacheThread();
        inline RPointerArray<CAknIconSrvPrecacheItem>& PrecacheItems();


        void EnableCache( TBool aEnable );

        // For debug only
        void ResetDynamicCache();

    private: // New methods

        static TInt IconDataSize( CAknIconSrvIconItem& aItem );

        CAknIconSrvCache( CAknIconServer& aServer );
        void ConstructL();
        void UpdateDynamicCacheSize();        

    private:     // data


        TInt iConfiguredMaxDynamicCacheSize;
        TInt iMaxDynamicCacheSize;

        // Dynamic cache info
        TInt iDynamicCacheSize;
        RPointerArray<CAknIconSrvIconItem> iDynamicallyCached;

        // Precache info
        // size of all items in precache
        TInt iPrecacheSize;
        // items marked to be precached
        RPointerArray<CAknIconSrvIconItem> iPrecache;
        
        CAknIconServer& iServer;
#ifdef PRECACHE2
        RThread iPrecacheThread2;
#endif

        
    };


#endif // AKN_ICON_SRV_CACHE_H

// Enf of File
