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
* Description:  Defines an internal class CAknsAppSkinInstanceCacheEntry which
*                encapsulates a single skin instance cache entry.
*
*/


#ifndef AKNSASICACHEENTRY_H
#define AKNSASICACHEENTRY_H

//  INCLUDES
#include <AknsItemData.h>

// CLASS DECLARATION

/**
* Item data cache entry used by CAknsAppSkinInstance.
* CAknsAppSkinInstanceCacheEntry encapsulates single cache item. It provides
* explicit reference counting, but the caller is responsible of calling
* appropriate methods and also destructing the cache entry when it is no longer
* referenced.
*
* This is an internal class that contains no exported functions.
* The class is not intended for derivation outside the library.
*
* @since 2.0
*
* @internal
*/
NONSHARABLE_CLASS(CAknsAppSkinInstanceCacheEntry) : public CBase
    {
    public: // Construction and destruction

        /**
        * C++ constructor.
        *
        * @param aID Item ID of the new cache item.
        *
        * @param aData Pointer to item data. Ownership is transferred to
        *   CAknsAppSkinInstanceCacheEntry instance. @c NULL value is valid.
        *
        * @internal
        */
        CAknsAppSkinInstanceCacheEntry( const TAknsItemID& aID,
            CAknsItemData* aData );

        /**
        * Two-phased constructor.
        *
        * @param aID Item ID of the new cache item.
        *
        * @param aData Pointer to item data. Ownership is transferred to
        *   CAknsAppSkinInstanceCacheEntry instance. @c NULL value is valid.
        *
        * @return Newly constructed CAknsAppSkinInstanceCacheEntry object.
        *
        * @par Exceptions:
        *   If construction fails, leaves with an error code.
        *
        * @internal
        */
        static CAknsAppSkinInstanceCacheEntry* NewL(
            const TAknsItemID& aID, CAknsItemData* aData );

        /**
        * Destructor.
        * Deletes iData member.
        *
        * @internal
        */
        virtual ~CAknsAppSkinInstanceCacheEntry();

    public: // New functions

        /**
        * Returns the item ID of this cache entry.
        *
        * @return Item ID.
        *
        * @internal
        */
        inline TAknsItemID ID() const;

        /**
        * Returns item data associated with this cache entry.
        *
        * @return Pointer to item data. CAknsAppSkinInstanceCacheEntry still
        *   owns the item data object and controls its lifetime.
        *
        * @internal
        */
        inline CAknsItemData* Data();

        /**
        * Destroys the old item data (if any) and sets a new one.
        *
        * @param aData New item data to be associated with this cache entry.
        *   Ownership of item data is transferred to
        *   CAknsAppSkinInstanceCacheEntry instance.
        *
        * @internal
        */
        inline void DestroyAndSetData( CAknsItemData* aData );

        /**
        * Increases reference counter by one.
        *
        * @internal
        */
        void IncreaseRefCount();

        /**
        * Decreases reference counter by one.
        * Caller is resposible of deleting the cache item when reference count
        * drops to zero. This can be checked by calling
        * CAknsAppSkinInstanceCacheEntry::IsReferenced().
        *
        * @par Exceptions:
        *   While this function may not leave and does not delete object, it
        *   may panic if reference count becomes negative.
        *
        * @internal
        */
        void DecreaseRefCount();

        /**
        * Tells whether the cache item is referenced.
        *
        * @return ETrue if reference count is positive, EFalse otherwise.
        *
        * @internal
        */
        TBool IsReferenced() const;

        /**
        * Determines the order of two CAknsAppSkinInstanceCacheEntry objects.
        * Order is determined based on the item ID of the object, as described
        * in TAknsItemID::LinearOrder().
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
            const CAknsAppSkinInstanceCacheEntry& aFirst,
            const CAknsAppSkinInstanceCacheEntry& aSecond );

    private: // Data members

        TAknsItemID iID;        //!< Item ID.
        TInt iRefCount;         //!< Reference counter.
        CAknsItemData* iData;   //!< Pointer to item data.

    };

// INLINED MEMBERS
#include "AknsASICacheEntry.inl"

#endif      // AKNSASICACHEENTRY_H

// End of File
