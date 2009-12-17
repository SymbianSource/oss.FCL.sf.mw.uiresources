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



#ifndef AKN_ICON_SRV_ICON_ITEM_H
#define AKN_ICON_SRV_ICON_ITEM_H

// INCLUDES
#include <e32base.h>
#include <gdi.h>
#include <AknIconUtils.h>

// FORWARD DECLARATIONS

struct TAknIconParams;
class CFbsBitmap;
class CAknIconFileNameCache;

// CONSTANTS

// CLASS DEFINITIONS

NONSHARABLE_CLASS(CAknIconSrvIconItem) : public CBase
    {
    public: // Constructor and destructor

        /**
        * @param aInfo info
        * @param aBitmap ownership transferred to this object
        * @param aMask ownership transferred to this object
        * @param aDimensions content dimensions of the icon
        * @param aFileNameCache file name cache passed by the caller
        *                       for retrieving/storing icon file name
        */
        static CAknIconSrvIconItem* NewL(
            const TAknIconParams& aInfo,
            CFbsBitmap* aBitmap,
            CFbsBitmap* aMask,
            const TAknContentDimensions& aDimensions,
            CAknIconFileNameCache& aFileNameCache );

        /**
        * Constructor for compare items.
        */
        CAknIconSrvIconItem( const TAknIconParams& aInfo );

        ~CAknIconSrvIconItem();

    public: // New functions

        static TInt LinearOrder(
            const CAknIconSrvIconItem& aFirst,
            const CAknIconSrvIconItem& aSecond );

        void GetInfo( TAknIconParams& aInfo ) const;

        inline TBool IsCached() const;
        inline void SetCached();
        inline void ClearCached();

        inline TBool IsPermanentlyCached() const;
        inline void SetPermanentlyCached();
        inline void ClearPermanentlyCached();

        inline TBool IsCachedFromSkin() const;
        inline void SetCachedFromSkin();
        inline void ClearCachedFromSkin();

        inline TBool IsMbmIcon() const;
        inline void SetMbmIcon();
        
        inline TBool IsExcludedFromCache() const;
        inline void ExcludeFromCache();
        
        inline TBool IsCompressionDisabled() const;
        inline void DisableCompression();

    private: // Private constructors

        CAknIconSrvIconItem();

        void ConstructL(
            const TAknIconParams& aInfo,
            CFbsBitmap* aBitmap,
            CFbsBitmap* aMask,
            const TAknContentDimensions& aDimensions,
            CAknIconFileNameCache& aFileNameCache );

    public: // Data
    
        enum TFlags
            {
            // Flags must not use the low 16 bits.
            EFlagCached                  = 0x00010000, // dynamic cache
            EFlagPermanentlyCached       = 0x00020000, // always cached
            EFlagCachedFromSkin          = 0x00040000,
            EFlagMbmIcon                 = 0x00080000,
            EFlagExcludeFromCache        = 0x00100000, // do not cache dynamically
            EFlagDisableCompression      = 0x00200000  // disable bitmap compression
            };
    
        HBufC* iFileName; // not owned
        const TDesC* iFileNameRef; // used by compare items
        TInt16 iBitmapId;
        TInt16 iMaskId;
        TSize iSize;
        TInt iModeAndFlags; // mode in low 16 bits, flags in high 16 bits.
        TInt iRotationAngle;
        TInt iUserCount;
        CFbsBitmap* iBitmap;
        CFbsBitmap* iMask;
        // For color skinning
        TRgb iColor;
        // Info of the content dimensions of the icon is stored here.
        TAknContentDimensions iDimensions;
        TBool iAppIcon; // set true for application icon
        
        // indicates if the icon is marked to be precached
        TBool iPrecacheItem;
    };

#include "AknIconSrvIconItem.inl"

#endif // AKN_ICON_SRV_ICON_ITEM_H

// End of File
