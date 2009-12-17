/*
* Copyright (c) 2003-2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Chunk Lookup.
*
*/


#ifndef AKNSSRVCHUNKLOOKUP_H
#define AKNSSRVCHUNKLOOKUP_H

// INCLUDES

#include <e32std.h>
#include <e32base.h>
#include <AknsItemDef.h>

// FORWARD DECLARATIONS
struct TAknsSrvItemDef;

/**
* A class for looking up and creating item definitions stored in the
* shared memory chunk.
*
* @since 2.0
*/
NONSHARABLE_CLASS(CAknsSrvChunkLookup) : public CBase
    {
    public: // Construction and destruction

        /**
        * SymbianOS two-phased constructor.
        *
        * @since 2.0
        *
        * @return A new instance of CAknsSrvChunkLookup.
        *
        * @par Exceptions:
        *   If the construction fails, the leaves with one of the system wide
        *   error codes.
        */
        static CAknsSrvChunkLookup* NewL();

        /**
        * Default C++ destructor.
        */
        virtual ~CAknsSrvChunkLookup();

    public: // New methods

        /**
        * Returns item definition object matching the given item ID.
        * Performs lookup for the given item ID and returns an instance of one
        * of the subclasses of CAknsItemDef matching the given ID. If the call
        * is successfull, ownership of the item definition object is transferred
        * to the caller.
        *
        * @since 2.0
        *
        * @param aID Item ID to be searched.
        *
        * @return Pointer to the item definition object now owned by the caller,
        *   or @c NULL if there was no match for the given IID.
        *
        * @par Exceptions:
        *   If construction of the item definition object failed, method leaves
        *   with an error code.
        */
        IMPORT_C CAknsItemDef* LookupAndCreateDefL( const TAknsItemID& aID );

        /**
        * Returns stored scalable bitmaps and optionally its mask if it
        * was stored. The ownership of the returned bitmap (and mask, if any)
        * is transferred to the caller.
        *
        * Optionally, the caller can give the current copy of the bitmap and
        * mask as aBitmap and aMask parameters. If the currently stored
        * scalable bitmaps have the same handles, they are not re-duplicated.
        * The ownership of the given bitmaps is transferred to chunk lookup.
        *
        * @since 2.8
        *
        * @param aID Item ID to be searched.
        *
        * @param aLayout The layout id type for the searhed item.
        *
        * @param aBitmap Current bitmap or @c NULL. Ownership is transferred.
        *   After return, contains the newly duplicated bitmap, or @c NULL if
        *   not found. Ownership is transferred.
        *
        * @param aMask Current mask or @c NULL. Ownership is transferred.
        *   After return, contains the newly duplicated mask, or @c NULL if
        *   not found. Ownership is transferred.
        */
        IMPORT_C void LookupAndCreateScalableItemL( const TAknsItemID& aID,
            const TInt aLayout, const TSize& aLayoutSize, CFbsBitmap*& aBitmap,
            CFbsBitmap*& aMask, TInt& aMorphing);

        /**
        * Blocks write access to the shared memory chunk.
        *
        * @since 2.0
        */
        void BeginRead();

        /**
        * Allows write access to the shared memory chunk.
        *
        * @since 2.0
        */
        void EndRead();

        /**
        * Blocks all rendering.
        *
        * @since 2.8
        */
        IMPORT_C void BeginRender();

        /**
        * Allows rendering.
        *
        * @since 2.8
        */
        IMPORT_C void EndRender();

    private: // Reserved exports

        /**
        * Reserved for future use.
        *
        * @since 2.0
        *
        * @return Always returns zero.
        */
        IMPORT_C TInt Reserved();

    protected: // New methods

        /**
        * Creates an item definition object (or leaves) based on the given
        * item definition structure.
        *
        * Note that this method does not use the semaphore, and is therefore
        * unprotected.
        *
        * @param aID Item ID of the item.
        *
        * @param aType Type of the definition.
        *
        * @param aDef Pointer to the definition.
        *
        * @param aBasePtr Chunk base pointer.
        *
        * @return Newly construction item definition object, or @c NULL if
        *   aDef was @c NULL.
        *
        * @since 2.0
        */
        CAknsItemDef* CreateUnprotectedL( const TAknsItemID& aID,
            const TAny* aDef, const TAknsItemType aType,
            const TAny* aBasePtr );

        /**
        * Returns stored scalable bitmaps and optionally its mask if it
        * was stored.
        *
        * Note that this method does not use the semaphore, and is therefore
        * unprotected.
        *
        * @since 2.8
        */
        void LookupAndCreateScalableItemUnprotectedL( const TAknsItemID& aID,
            const TInt aLayout, const TSize& aLayoutSize, CFbsBitmap*& aBitmap,
            CFbsBitmap*& aMask, TInt& aMorphing);

        /**
        *
        * @since 3.0
        */
        CAknsEffectQueueItemDef* CreateEffectQueueL( const TAknsItemID& aID,
            const TAny* aDefPtr, const TAny* aBasePtr );

        /**
        *
        * @since 3.0
        */
        CAknsAnimationItemDef* CreateAnimationL( const TAknsItemID& aID,
            const TAny* aDefPtr, const TAny* aBasePtr );

        /**
        * @since 3.0
        */
        CAknsEffectItemDef* CreateEffectL( const TUint8* aData,
            const TBool aIsAnimationCommand, const TAny* aBasePtr );

        /**
        * @since 3.0
        */
        CAknsEffectParamDef* CreateParameterL( const TUint8* aData, const TAny* aBasePtr );

        /**
        * @since 3.0
        */
        TUint32 CreateParameterL( CAknsEffectParamDef*& aDef,
                                  const TUint32 aOffset,
                                  const TAny* aDefPtr,
                                  const TAny* aBasePtr );

        /**
        * @since 3.0
        */
        TUint32 CreateEffectL( CAknsEffectItemDef*& aDef,
                               const TUint32 aOffset,
                               const TAny* aDefPtr,
                               const TAny* aBasePtr,
                               const TBool aIsAnimationCommand );

    protected: // Protected constructors

        /**
        * Default C++ constructor
        */
        CAknsSrvChunkLookup();

        /**
        * Second-phase constructor.
        */
        void ConstructL();

    private: // Data

        RChunk iSharedChunk;
        RSemaphore iWaitSema;
        RMutex iRenderMutex;

    };

#endif // AKNSSRVCHUNKLOOKUP_H

// End of file.
