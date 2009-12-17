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
* Description:  Defines an internal static factory class AknsItemDataFactory.
*
*/


#ifndef AKNSITEMDATAFACTORY_H
#define AKNSITEMDATAFACTORY_H

//  INCLUDES
#include <AknsItemData.h>
#include <AknsItemDef.h>

// FORWARD DECLARATIONS
struct TAknsImageAttributeData;

// CLASS DECLARATION

/**
* Static factory class that creates item data objects based on item definitions.
*
* This is an internal static class with no exported functions.
* The class is not intended for derivation outside the library.
*
* @since 2.0
*
* @internal
*/
class AknsItemDataFactory
    {
    public: // New functions

        /**
        * Creates new item data object specified by given item definition.
        *
        * @param aDef Item definition that specifies the item data to be
        *   constructed.
        *
        * @return Newly created item data. Type of the item data matches
        *   the one of the given item definition and pointer can be
        *   casted to the corresponding derived type.
        *
        * @par Exceptions:
        *   If construction fails, leaves with an error code.
        *
        * @internal
        */
        static CAknsItemData* CreateL( const CAknsItemDef* aDef );

    protected: // New functions

        /**
        * Creates a bitmap item data object. This is an internal method used by
        * AknsItemDataFactory::CreateL() to construct item data objects of type
        * ::EAknsITBitmap.
        *
        * @param aFilename Filename of the MBM file.
        *
        * @param aIndex Index of the bitmap in the file.
        *
        * @param aAttributes Image attributes.
        *
        * @return Newly created bitmap item data object.
        *
        * @par Exceptions:
        *   If construction fails, leaves with an error code.
        *
        * @internal
        */
        static CAknsBitmapItemData* CreateBitmapL(
            const TDesC& aFilename, const TInt aIndex,
            const TAknsImageAttributeData* aAttributes );

        /**
        * Creates a masked bitmap item data object. This is an internal method
        * used by AknsItemDataFactory::CreateL() to construct item data objects
        * of type ::EAknsITMaskedBitmap.
        *
        * @param aFilename Filename of the MBM file.
        *
        * @param aIndex Index of the bitmap in the file.
        *
        * @param aMaskIndex Index of the bitmap mask in the file.
        *
        * @param aAttributes Image attributes.
        *
        * @return Newly created masked bitmap item data object.
        *
        * @par Exceptions:
        *   If construction fails, leaves with an error code.
        *
        * @internal
        */
        static CAknsMaskedBitmapItemData* CreateMaskedBitmapL(
            const TDesC& aFilename, const TInt aIndex, const TInt aMaskIndex,
            const TAknsImageAttributeData* aAttributes );

        /**
        * Creates a color table item data object. This is an internal method
        * used by AknsItemDataFactory::CreateL() to construct item data objects
        * of type ::EAknsITColorTable.
        *
        * @param aNumberOfColors Number of colors in color table.
        *
        * @param aColors Pointer to the first color.
        *
        * @param aAttributes Image attributes.
        *
        * @return Newly created color table item data object.
        *
        * @par Exceptions:
        *   If construction fails, leaves with an error code.
        *
        * @internal
        */
        static CAknsColorTableItemData* CreateColorTableL(
            const TInt aNumberOfColors, const TAknsColorTableEntry* aColors,
            const TAknsImageAttributeData* aAttributes );

        /**
        * Creates an image table item data object. This is an internal
        * method used by AknsItemDataFactory::CreateL() to construct item
        * data objects of type
        * ::EAknsITImageTable.
        *
        * @param aNumberOfImages Number of images in the array.
        *
        * @param aImages Pointer to the first image item ID.
        *
        * @param aAttributes Image attributes.
        *
        * @return Newly created image table item data object.
        *
        * @par Exceptions:
        *   If construction fails, leaves with an error code.
        *
        * @internal
        */
        static CAknsImageTableItemData* CreateImageTableL(
            const TInt aNumberOfImages, const TAknsItemID* aImages,
            const TAknsImageAttributeData* aAttributes );

        /**
        * Creates a bitmap animation item data object. This is an internal
        * method used by AknsItemDataFactory::CreateL() to construct item
        * data objects of type
        * ::EAknsITBmpAnim.
        *
        * @param aNumberOfImages Number of images in the array.
        *
        * @param aImages Pointer to the first image item ID.
        *
        * @param aFrameInfos Pointer to the first frame entry.
        *
        * @param aLastFrameBg Boolean value.
        *
        * @param aFrameInterval TInt16 value.
        *
        * @param aPlayMode TInt16 value.
        *
        * @param aFlash Boolean value.
        *
        * @param aAttributes Image attributes.
        *
        * @return Newly created bitmap animation item data object.
        *
        * @par Exceptions:
        *   If construction fails, leaves with an error code.
        *
        * @internal
        */
        static CAknsBmpAnimItemData* CreateBmpAnimL(
            const TInt aNumberOfImages, const TAknsItemID* aImages,
            const TAknsBmpAnimFrameInfo* aFrameInfos,
            const TBool aLastFrameBg, const TInt16 aFrameInterval,
            const TInt16 aPlayMode, const TBool aFlash,
            const TAknsImageAttributeData* aAttributes );

        /**
        * Creates a string item data object. This is an internal method
        * used by AknsItemDataDataFactory::CreateL() to construct item
        * data objects of type
        * ::EAknsITString.
        *
        * @since 2.6
        *
        * @param aString The string value.
        *
        * @par Exceptions:
        *   If construction fails, leaves with an error code.
        *
        * @internal
        */
        static CAknsStringItemData* CreateStringL(
            const TDesC& aString );

        /**
        * Creates an effect queue item data object. This is an internal method
        * used by AknsItemDataDataFactory::CreateL() to construct item
        * data objects of type
        * ::EAknsITEffectQueue.
        *
        * @since 2.8
        *
        * @param aDef item definition to base the effect queue item data object.
        *
        * @par Exceptions:
        *   If construction fails, leaves with an error code.
        *
        * @internal
        */
        static CAknsEffectQueueItemData* CreateEffectQueueL(
            const CAknsEffectQueueItemDef* aDef );

        /**
        * Creates an animation item data object. This is an internal method
        * used by AknsItemDataDataFactory::CreateL() to construct item data
        * objects of type
        * ::EAknsITAnimation.
        *
        * @since 3.0
        *
        * @par Exceptions:
        *   If construction fails, leaves with an error code.
        *
        * @internal
        */
        static CAknsAnimationItemData* CreateAnimationL(
            const CAknsAnimationItemDef* aDef );

        /**
        * Internal utility method for setting image attributes.
        *
        * @param aItemData Image item data object.
        *
        * @param aAttributes Attributes to be set. If @c NULL is given,
        *   default attributes are set.
        */
        static void SetAttributesL( CAknsImageItemData* aItemData,
            const TAknsImageAttributeData* aAttributes );

    private: // Prohibited constructors and destructor

        // Static class, prohibited.
        AknsItemDataFactory();
        // Static class, prohibited.
        ~AknsItemDataFactory();

    };

#endif // AKNSITEMDATAFACTORY_H

// End of File
