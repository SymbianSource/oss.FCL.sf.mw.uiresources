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
* Description:  Item definition base class.
*
*/


#ifndef AKNSSRVITEMDEF_H
#define AKNSSRVITEMDEF_H

//  INCLUDES
#include <AknsItemID.h>
#include <AknsPkgID.h>
#include <AknsItemDef.h>

// CLASS DECLARATIONS

/**
* Type enumeration for TAknsSrvMPPtr
*
* @since 2.0
*/
enum TAknsSrvMPPtrType
    {
    EAknsSrvMPPtrAbsoluteROM        = 4,
    EAknsSrvMPPtrAbsoluteRAM        = 2,
    EAknsSrvMPPtrBaseRelativeRAM    = 3
    };

/**
* Multipurpose pointer template.
*
* @since 2.0
*/
template<class T> struct TAknsSrvMPPtr
    {
    /**
    * The type of the multipurpose pointer.
    */
    TAknsSrvMPPtrType iPtrType;

    /**
    * The address or offset (depending on the type) of the pointer.
    */
    T iAddressOrOffset;

    /**
    * Converts the value of the multipurpose pointer to the concrete address
    * using the given base address for relative values.
    *
    * @param aBase Base address, used if the type of the pointer is relative.
    *
    * @return The concrete address.
    *
    * @since 2.0
    */
    inline T Address( const TAny* aBase ) const
        {
        if( iPtrType == EAknsSrvMPPtrBaseRelativeRAM )
            {
            TInt retValue = (TInt)iAddressOrOffset + (TInt)aBase;
            // Server panic constants not available, values used instead:
            __ASSERT_DEBUG( retValue%4==0, User::Panic(
                _L("AknSkinServer"), 7 ) );
            // Offset, const qualifiers intentionally ignored
            return reinterpret_cast<T>( retValue );
            }
        // Otherwise used as address
        return iAddressOrOffset;
        };
    };

/**
*  Server item definition structure for typed item definitions.
*
*  @since 2.0
*/
struct TAknsSrvDef
    {
    public:
        // IID
        TAknsItemID iID;
        // Item type (determines the type of iDef).
        TAknsItemType iType;
        // Pointer to item definition.
        TAknsSrvMPPtr<const TAny*> iDef;
        //Hash next
        TInt iHashNext;
    };

/**
*  Server item definition structure for bitmaps.
*
*  @since 2.0
*/
struct TAknsSrvBitmapDef
    {
    public:
        // Bitmap filename.
        TAknsSrvMPPtr<const TText*> iFilename;
        // Index in bitmap file.
        TInt iIndex;

        // Image attributes.
        TInt iImageAttributes;
        // Image alignment.
        TInt iImageAlignment;
        // X-coordinate.
        TInt iImageCoordX;
        // Y-coordinate.
        TInt iImageCoordY;
        // Width of the size.
        TInt iImageSizeW;
        // Height of the size
        TInt iImageSizeH;
    };

/**
*  Server item definition structure for masked bitmaps.
*
*  @since 2.0
*/
struct TAknsSrvMaskedBitmapDef
    {
    public:
        // Bitmap filename.
        TAknsSrvMPPtr<const TText*> iFilename;
        // Index in bitmap file.
        TInt iIndex;
        // Index of mask in bitmap file.
        TInt iMaskIndex;

        // Image attributes.
        TInt iImageAttributes;
        // Image alignment.
        TInt iImageAlignment;
        // X-coordinate.
        TInt iImageCoordX;
        // Y-coordinate.
        TInt iImageCoordY;
        // Width of the size.
        TInt iImageSizeW;
        // Height of the size
        TInt iImageSizeH;
    };

/**
*  Server item definition structure for color tables.
*
*  @since 2.0
*/
struct TAknsSrvColorTableDef
    {
    public:
        // Number of colors
        TInt iNumberOfColors;
        // Color array
        TAknsSrvMPPtr<const TAknsColorTableEntry*> iColors;

        // Image attributes.
        TInt iImageAttributes;
        // Image alignment.
        TInt iImageAlignment;
        // X-coordinate.
        TInt iImageCoordX;
        // Y-coordinate.
        TInt iImageCoordY;
        // Width of the size.
        TInt iImageSizeW;
        // Height of the size
        TInt iImageSizeH;
    };

/**
* Server item definition structure for image tables.
*
* @since 2.0
*/
struct TAknsSrvImageTableDef
    {
    public:
        // Number of images
        TInt iNumberOfImages;
        // Image information array
        TAknsSrvMPPtr<const TAknsItemID*> iImages;

        // Image attributes.
        TInt iImageAttributes;
        // Image alignment.
        TInt iImageAlignment;
        // X-coordinate.
        TInt iImageCoordX;
        // Y-coordinate.
        TInt iImageCoordY;
        // Width of the size.
        TInt iImageSizeW;
        // Height of the size
        TInt iImageSizeH;
    };

/**
* Server item definition structure for bitmap animations.
*
* @since 2.0
*/
struct TAknsSrvBmpAnimDef
    {
    public:
        // Number of images
        TInt iNumberOfImages;
        // Image information array
        TAknsSrvMPPtr<const TAknsItemID*> iImages;
        // Frame property array
        TAknsSrvMPPtr<const TAknsBmpAnimFrameInfo*> iFrameInfos;
        // Frame interval
        TInt16 iFrameInterval;
        // Play mode
        TInt16 iPlayMode;
        // Flash flag
        TBool iFlash;
        // Last frame background flag
        TBool iLastFrameBackground;

        // Image attributes.
        TInt iImageAttributes;
        // Image alignment.
        TInt iImageAlignment;
        // X-coordinate.
        TInt iImageCoordX;
        // Y-coordinate.
        TInt iImageCoordY;
        // Width of the size.
        TInt iImageSizeW;
        // Height of the size
        TInt iImageSizeH;
    };

/**
*  Server item definition structure for strings.
*
*  @since 2.6
*/
struct TAknsSrvStringDef
    {
    public:
        // String value.
        TAknsSrvMPPtr<const TText*> iString;
    };

/**
*
*
* @since 2.8
*/
struct TAknsSrvEffectParameterDef
    {
    public:
        TUint32 iParameterLength;
        TUint32 iParameterType;
        // parameter data after this
    };

/**
* Note that since 3.0 this structure is also used for AnimationCommands.
*
* @since 2.8
*/
struct TAknsSrvEffectDef
    {
    public:
        TUid iEffectUid;
        TUint32 iInputLayerAIndex;
        TUint32 iInputLayerAMode;
        TUint32 iInputLayerBIndex;
        TUint32 iInputLayerBMode;
        TUint32 iOutputLayerIndex;
        TUint32 iOutputLayerMode;
        TUint32 iEffectParameterCount;
        TUint32 iEffectSize;
        // parameter data after this...
    };

/**
*
*
* @since 2.8
*/
struct TAknsSrvEffectQueueDef
    {
    public:
        TUint32 iEffectQueueSize;
        TUint32 iInputLayerIndex;
        TUint32 iInputLayerMode;
        TUint32 iOutputLayerIndex;
        TUint32 iOutputLayerMode;
        TUint32 iEffectCount;
        TUint32 iRefMajor;
        TUint32 iRefMinor;
        // effect data after this
    };

/**
* @since 3.0
*/
struct TAknsSrvEffectAnimDef
    {
    public:
        TUint32 iEffectAnimSize;
        TUint32 iInputLayerIndex;
        TUint32 iInputLayerMode;
        TUint32 iOutputLayerIndex;
        TUint32 iOutputLayerMode;
        TUint32 iMinInterval;
        TUint32 iAnimType;
        TUint32 iPreprocessCount;
        TUint32 iAnimCommandCount;
        TUint32 iAnimValueCount;
        TUint32 iTimingModelCount;
        TUint32 iSizeBoundCount;
    };

/**
* @since 3.0
*/
struct TAknsSrvParamGroupDef
    {
    public:
        TUint32 iGroupSize;
        TUint32 iParameterCount;
        TUint32 iValueA;
        TUint32 iValueB;
        // parameter data after this...
    };

/**
*
*
* @since 2.8
*/
struct TAknsSrvScalableItemDef
    {
    public:
        TAknsItemID iID;
        TUint32 iBitmapHandle;
        TUint32 iMaskHandle;
        TInt iLayoutType;
        TBool isMorphing;
        TTime iTimeStamp;
        TSize iLayoutSize;
    };

/**
*  Server definition structure for item definition set classes.
*
*  @since 2.0
*/
struct TAknsSrvClassDef
    {
    public:
        // Definition table (may be NULL if zero definitions)
        const TAknsSrvDef* iDefTable;
        // Number of definitions
        TInt iNumberOfDefs;
    };

/**
*  Server definition structure for whole skins.
*
*  @since 2.0
*/
struct TAknsSrvSkinDef
    {
    public:
        // Skin package ID
        TAknsPkgID iPID;
        // Bitmap class
        const TAknsSrvClassDef* iBitmapClass;
        // Application icon class
        const TAknsSrvClassDef* iAppIconClass;
        // Color set class
        const TAknsSrvClassDef* iColorSetClass;
        // Color set skin package ID (if iColorSetClass is NULL)
        TAknsPkgID iColorSetPID;
        // Language override skin package ID
        TAknsPkgID iLanguageOverridePID;
    };

#endif      // AKNSSRVITEMDEF_H

// End of File
