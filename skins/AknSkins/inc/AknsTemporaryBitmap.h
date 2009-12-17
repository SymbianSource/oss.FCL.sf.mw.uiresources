/*
* Copyright (c) 2004-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Defines an internal class CAknsTemporaryBitmap which
*                encapsulates a single temporary bitmap entry.
*
*/


#ifndef AKNSTEMPORARYBITMAP_H
#define AKNSTEMPORARYBITMAP_H

// INCLUDES
#include <AknsItemData.h>

// FORWARD DECLARATIONS
class CFbsBitmapDevice;
class CFbsBitGc;

// CLASS DECLARATION

/**
* Temporary bitmap class.
*
* @since 2.6
*
* @internal
*/
NONSHARABLE_CLASS(CAknsTemporaryBitmap) : public CBase
    {
    public: // Construction and destruction

        /**
        * Two-phased constructor.
        *
        * @par Exceptions:
        *   If construction fails, leaves with an error code.
        *
        * @internal
        */
        static CAknsTemporaryBitmap* NewL( const TAknsItemID& aID,
            const TSize& aSize, const TInt aKey, const TBool aMorphing, const TSize& aLayoutSize );

        /**
        * C++ constructor.
        *
        * @internal
        */
        CAknsTemporaryBitmap( const TAknsItemID& aID, const TSize& aSize,
            const TInt aKey, const TSize& aLayoutSize );

        /**
        * Destructor.
        *
        * @internal
        */
        virtual ~CAknsTemporaryBitmap();

    public: // New functions

        /**
        * Returns the bitmap member.
        *
        * @internal
        */
        CFbsBitmap* Bitmap();

        /**
        * Returns the mask member.
        *
        * @internal
        */
        CFbsBitmap* Mask();

        /**
        * Returns the members as item data object.
        *
        * @internal
        */
        CAknsMaskedBitmapItemData* ItemData();

        /**
        * Returns the morphing property value.
        *
        * @internal
        */
        TBool IsMorphing();

        /**
        * Activates GC for the given member.
        *
        * @internal
        */
        CFbsBitGc* ActivateGcL( const TDisplayMode aMode,
            const TBool aMask = EFalse );

        /**
        * Releases the GC.
        *
        * @internal
        */
        void ReleaseGc();

        /**
        * Determines the order of two CAknsTemporaryBitmap objects.
        * Order is determined based on the item ID of the object, as described
        * in TAknsItemID::LinearOrder(), object key, and size.
        *
        * @param aFirst First object to be compared.
        *
        * @param aSecond Second object to be compared.
        *
        * @return 0 if the two objects are equal, negative value if the first
        *   object is less than the second and positive value if the first
        *   object is greater than the second.
        *
        * @internal
        */
        static TInt LinearOrder(
            const CAknsTemporaryBitmap& aFirst,
            const CAknsTemporaryBitmap& aSecond );

    private: // Construction

        /**
        * ConstructL method.
        *
        * @internal
        */
        void ConstructL();

    private: // Data members

        TAknsItemID iID;
        TSize iSize;
        TInt iKey;
        CAknsMaskedBitmapItemData* iData;
        CFbsBitmapDevice* iDev;
        CFbsBitGc* iGc;
        TBool iMorphing;
        TSize iLayoutSize;

    };

#endif // AKNSTEMPORARYBITMAP_H

// End of File
