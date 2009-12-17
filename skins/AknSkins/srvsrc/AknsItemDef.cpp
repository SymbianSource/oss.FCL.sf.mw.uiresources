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
* Description:  Defines the public skin item definition classes for all known
                 skin item types.
*
*/


// INCLUDE FILES
#include <AknsItemDef.h>
#include <AknsImageAttributeData.h>

#include "AknsDebug.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsItemDef::CAknsItemDef
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsItemDef::CAknsItemDef( const TAknsItemID& aID )
    : iType( EAknsITUnknown ), iID( aID ), iSpare1( 0 ), iSpare2( 0 )
    {
    }

// -----------------------------------------------------------------------------
// CAknsItemDef::CAknsItemDef
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsItemDef::CAknsItemDef( const TAknsItemType aType, const TAknsItemID& aID )
    : iType( aType ), iID( aID ), iSpare1( 0 ), iSpare2( 0 )
    {
    }

// -----------------------------------------------------------------------------
// CAknsItemDef::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsItemDef* CAknsItemDef::NewL( const TAknsItemID& aID )
    {
    CAknsItemDef* self = new (ELeave) CAknsItemDef( aID );

    return self;
    }

// -----------------------------------------------------------------------------
// Destructor.
// Since CAknsAppSkinInstance is allowed to instantiate this class is stack,
// the destructor must be exported.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsItemDef::~CAknsItemDef()
    {
    }

// -----------------------------------------------------------------------------
// CAknsItemDef::Type
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TAknsItemType CAknsItemDef::Type() const
    {
    return iType;
    }

// -----------------------------------------------------------------------------
// CAknsItemDef::ID
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TAknsItemID CAknsItemDef::ID() const
    {
    return iID;
    }

// -----------------------------------------------------------------------------
// CAknsItemDef::LinearOrder
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsItemDef::LinearOrder(
    const CAknsItemDef& aFirst, const CAknsItemDef& aSecond )
    {
    return TAknsItemID::LinearOrder( aFirst.iID, aSecond.iID );
    }

// -----------------------------------------------------------------------------
// CAknsItemDef::Reserved1
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsItemDef::Reserved1()
    {
    }

// -----------------------------------------------------------------------------
// CAknsItemDef::Reserved2
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsItemDef::Reserved2()
    {
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsImageItemDef::CAknsImageItemDef
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsImageItemDef::CAknsImageItemDef(
    const TAknsItemType aType, const TAknsItemID& aID )
    : CAknsItemDef( aType, aID )
    {
    }

// -----------------------------------------------------------------------------
// CAknsImageItemDef::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsImageItemDef* CAknsImageItemDef::NewL(
    const TAknsItemID& aID )
    {
    CAknsImageItemDef* self = new (ELeave) CAknsImageItemDef(
        EAknsITImage, aID );

    return self;
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsImageItemDef::~CAknsImageItemDef()
    {
    delete iAttributeData;
    }

// -----------------------------------------------------------------------------
// CAknsImageItemDef::SetAttributesL
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsImageItemDef::SetAttributesL(
    const TAknsImageAttributeData& aAttributes )
    {
    if( !iAttributeData )
        {
        iAttributeData = new (ELeave) TAknsImageAttributeData();
        }

    iAttributeData->Set( aAttributes );
    }

// -----------------------------------------------------------------------------
// CAknsImageItemDef::Attributes
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C const TAknsImageAttributeData* CAknsImageItemDef::Attributes() const
    {
    return iAttributeData;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsBitmapItemDef::CAknsBitmapItemDef
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsBitmapItemDef::CAknsBitmapItemDef(
    const TAknsItemType aType, const TAknsItemID& aID, const TInt aIndex )
    : CAknsImageItemDef( aType, aID ), iFilenameBuf(NULL), iIndex(aIndex)
    {
    }

// -----------------------------------------------------------------------------
// CAknsBitmapItemDef::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsBitmapItemDef* CAknsBitmapItemDef::NewL(
    const TAknsItemID& aID, const TDesC& aFilename, const TInt aIndex )
    {
    CAknsBitmapItemDef* self = new (ELeave) CAknsBitmapItemDef(
        EAknsITBitmap, aID, aIndex );
    CleanupStack::PushL(self);

    self->SetFilenameL( aFilename );

    CleanupStack::Pop();
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsBitmapItemDef::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsBitmapItemDef* CAknsBitmapItemDef::NewL( const TAknsItemID& aID )
    {
    return new (ELeave) CAknsBitmapItemDef( EAknsITBitmap, aID, 0 );
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsBitmapItemDef::~CAknsBitmapItemDef()
    {
    delete iFilenameBuf;
    }

// -----------------------------------------------------------------------------
// CAknsBitmapItemDef::SetFilename
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBitmapItemDef::SetFilename( const TDesC& aFilename )
    {
    delete iFilenameBuf;
    iFilenameBuf = NULL;

    iFilename.Set( aFilename );
    }

// -----------------------------------------------------------------------------
// CAknsBitmapItemDef::SetFilenameL
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBitmapItemDef::SetFilenameL( const TDesC& aFilename )
    {
    HBufC* temp = aFilename.AllocL();
    delete iFilenameBuf;
    iFilenameBuf = temp;
    iFilename.Set( *iFilenameBuf );
    temp = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsBitmapItemDef::Filename
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C const TDesC& CAknsBitmapItemDef::Filename() const
    {
    return iFilename;
    }

// -----------------------------------------------------------------------------
// CAknsBitmapItemDef::SetIndex
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBitmapItemDef::SetIndex( const TInt aIndex )
    {
    iIndex = aIndex;
    }

// -----------------------------------------------------------------------------
// CAknsBitmapItemDef::Index
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsBitmapItemDef::Index() const
    {
    return iIndex;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsMaskedBitmapItemDef::CAknsMaskedBitmapItemDef
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsMaskedBitmapItemDef::CAknsMaskedBitmapItemDef(
    const TAknsItemType aType, const TAknsItemID& aID, const TInt aIndex,
    const TInt aMaskIndex )
    : CAknsBitmapItemDef( aType, aID, aIndex ), iMaskIndex( aMaskIndex )
    {
    }

// -----------------------------------------------------------------------------
// CAknsMaskedBitmapItemDef::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsMaskedBitmapItemDef* CAknsMaskedBitmapItemDef::NewL(
    const TAknsItemID& aID, const TDesC& aFilename, const TInt aIndex,
    const TInt aMaskIndex)
    {
    CAknsMaskedBitmapItemDef* self = new (ELeave) CAknsMaskedBitmapItemDef(
        EAknsITMaskedBitmap, aID, aIndex, aMaskIndex );
    CleanupStack::PushL(self);

    self->SetFilenameL( aFilename );

    CleanupStack::Pop();
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsMaskedBitmapItemDef::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsMaskedBitmapItemDef* CAknsMaskedBitmapItemDef::NewL(
    const TAknsItemID& aID )
    {
    return new (ELeave) CAknsMaskedBitmapItemDef( EAknsITMaskedBitmap,
        aID, 0, 0 );
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsMaskedBitmapItemDef::~CAknsMaskedBitmapItemDef()
    {
    }

// -----------------------------------------------------------------------------
// CAknsMaskedBitmapItemDef::SetMaskIndex
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsMaskedBitmapItemDef::SetMaskIndex( const TInt aMaskIndex )
    {
    iMaskIndex = aMaskIndex;
    }

// -----------------------------------------------------------------------------
// CAknsMaskedBitmapItemDef::MaskIndex
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsMaskedBitmapItemDef::MaskIndex() const
    {
    return iMaskIndex;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsColorTableItemDef::CAknsColorTableItemDef
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsColorTableItemDef::CAknsColorTableItemDef( const TAknsItemType aType,
    const TAknsItemID& aID )
    : CAknsImageItemDef( aType, aID ), iColorArray( NULL ),
    iInternalColorArray( NULL ), iNumberOfColors( 0 )
    {
    }

// -----------------------------------------------------------------------------
// CAknsColorTableItemDef::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsColorTableItemDef* CAknsColorTableItemDef::NewL(
    const TAknsItemID& aID, const TInt aNumberOfColors,
    const TAknsColorTableEntry *const aColors )
    {
    CAknsColorTableItemDef* self = new (ELeave) CAknsColorTableItemDef(
        EAknsITColorTable, aID );

    self->SetColors( aNumberOfColors, aColors );

    return self;
    }

// -----------------------------------------------------------------------------
// CAknsColorTableItemDef::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsColorTableItemDef* CAknsColorTableItemDef::NewL(
    const TAknsItemID& aID )
    {
    return new (ELeave) CAknsColorTableItemDef( EAknsITColorTable, aID );
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsColorTableItemDef::~CAknsColorTableItemDef()
    {
    delete [] iInternalColorArray;
    iColorArray = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsColorTableItemDef::SetColors
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsColorTableItemDef::SetColors( const TInt aNumberOfColors,
    const TAknsColorTableEntry *const aColors )
    {
    delete [] iInternalColorArray;
    iInternalColorArray = NULL;

    iNumberOfColors = aNumberOfColors;
    iColorArray = aColors;
    }

// -----------------------------------------------------------------------------
// CAknsColorTableItemDef::SetColorsL
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsColorTableItemDef::SetColorsL( const TInt aNumberOfColors,
    const TAknsColorTableEntry *const aColors )
    {
    delete [] iInternalColorArray;
    iInternalColorArray = NULL;

    iInternalColorArray = new (ELeave) TAknsColorTableEntry[ //lint !e119 ELeave
        static_cast<TUint>(aNumberOfColors) ];

    Mem::Copy( iInternalColorArray, aColors,
        static_cast<TInt>(sizeof(TAknsColorTableEntry))*aNumberOfColors );

    iNumberOfColors = aNumberOfColors;
    iColorArray = iInternalColorArray;
    }

// -----------------------------------------------------------------------------
// CAknsColorTableItemDef::Colors
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C const TAknsColorTableEntry* CAknsColorTableItemDef::Colors() const
    {
    return iColorArray;
    }

// -----------------------------------------------------------------------------
// CAknsColorTableItemDef::NumberOfColors
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsColorTableItemDef::NumberOfColors() const
    {
    return iNumberOfColors;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsImageTableItemDef::CAknsImageTableItemDef
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsImageTableItemDef::CAknsImageTableItemDef( const TAknsItemType aType,
    const TAknsItemID& aID )
    : CAknsImageItemDef( aType, aID ), iImageArray( NULL ),
    iInternalImageArray( NULL ), iNumberOfImages( 0 )
    {
    }

// -----------------------------------------------------------------------------
// CAknsImageTableItemDef::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsImageTableItemDef* CAknsImageTableItemDef::NewL(
    const TAknsItemID& aID, const TInt aNumberOfImages,
    const TAknsItemID *const aImages )
    {
    CAknsImageTableItemDef* self = new (ELeave) CAknsImageTableItemDef(
        EAknsITImageTable, aID );

    self->SetImages( aNumberOfImages, aImages );

    return self;
    }

// -----------------------------------------------------------------------------
// CAknsImageTableItemDef::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsImageTableItemDef* CAknsImageTableItemDef::NewL(
    const TAknsItemID& aID )
    {
    return new (ELeave) CAknsImageTableItemDef( EAknsITImageTable, aID );
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsImageTableItemDef::~CAknsImageTableItemDef()
    {
    delete [] iInternalImageArray;
    iImageArray = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsImageTableItemDef::SetImages
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsImageTableItemDef::SetImages( const TInt aNumberOfImages,
    const TAknsItemID *const aImages )
    {
    delete [] iInternalImageArray;
    iInternalImageArray = NULL;

    iNumberOfImages = aNumberOfImages;
    iImageArray = aImages;
    }

// -----------------------------------------------------------------------------
// CAknsImageTableItemDef::SetImagesL
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsImageTableItemDef::SetImagesL( const TInt aNumberOfImages,
    const TAknsItemID *const aImages)
    {
    delete [] iInternalImageArray;
    iInternalImageArray = NULL;

    iInternalImageArray = new (ELeave) TAknsItemID[ //lint !e119 ELeave
        static_cast<TUint>(aNumberOfImages) ];

    Mem::Copy( iInternalImageArray, aImages,
        static_cast<TInt>(sizeof(TAknsItemID))*aNumberOfImages );

    iNumberOfImages= aNumberOfImages;
    iImageArray = iInternalImageArray;
    }

// -----------------------------------------------------------------------------
// CAknsImageTableItemDef::Images
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C const TAknsItemID* CAknsImageTableItemDef::Images() const
    {
    return iImageArray;
    }

// -----------------------------------------------------------------------------
// CAknsImageTableItemDef::NumberOfImages
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsImageTableItemDef::NumberOfImages() const
    {
    return iNumberOfImages;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemDef::CAknsBmpAnimItemDef
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsBmpAnimItemDef::CAknsBmpAnimItemDef( const TAknsItemType aType,
    const TAknsItemID& aID )
    : CAknsImageTableItemDef( aType, aID ), iFrameArray( NULL ),
    iInternalFrameArray( NULL ), iLastFrameBackground( EFalse ),
    iFrameInterval( -1 ), iPlayMode( 0 ), iFlash( EFalse )
    {
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemDef::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsBmpAnimItemDef* CAknsBmpAnimItemDef::NewL(
    const TAknsItemID& aID, const TInt aNumberOfImages,
    const TAknsItemID *const aImages,
    const TAknsBmpAnimFrameInfo *const aFrameInfos )
    {
    CAknsBmpAnimItemDef* self = new (ELeave) CAknsBmpAnimItemDef(
        EAknsITBmpAnim, aID );

    self->SetImages( aNumberOfImages, aImages );
    self->SetFrameInfos( aFrameInfos );

    return self;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemDef::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsBmpAnimItemDef* CAknsBmpAnimItemDef::NewL(
    const TAknsItemID& aID )
    {
    return new (ELeave) CAknsBmpAnimItemDef( EAknsITBmpAnim, aID );
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsBmpAnimItemDef::~CAknsBmpAnimItemDef()
    {
    delete [] iInternalFrameArray;
    iFrameArray = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemDef::SetFrameInfos
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBmpAnimItemDef::SetFrameInfos(
    const TAknsBmpAnimFrameInfo *const aFrameInfos )
    {
    delete [] iInternalFrameArray;
    iInternalFrameArray = NULL;

    iFrameArray = aFrameInfos;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemDef::SetImagesL
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBmpAnimItemDef::SetFrameInfosL(
    const TAknsBmpAnimFrameInfo *const aFrameInfos )
    {
    delete [] iInternalFrameArray;
    iInternalFrameArray = NULL;

    iInternalFrameArray = new (ELeave) TAknsBmpAnimFrameInfo[ //lint !e119 ELeave
        static_cast<TUint>(iNumberOfImages) ];

    Mem::Copy( iInternalFrameArray, aFrameInfos,
        static_cast<TInt>(sizeof(TAknsBmpAnimFrameInfo))*iNumberOfImages );

    iFrameArray = iInternalFrameArray;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemDef::FrameInfos
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C const TAknsBmpAnimFrameInfo* CAknsBmpAnimItemDef::FrameInfos() const
    {
    return iFrameArray;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemDef::SetLastFrameBackground
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBmpAnimItemDef::SetLastFrameBackground( TBool aLastFrameBg )
    {
    iLastFrameBackground = aLastFrameBg;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemDef::LastFrameBackground
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsBmpAnimItemDef::LastFrameBackground() const
    {
    return iLastFrameBackground;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemDef::SetFrameInterval
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBmpAnimItemDef::SetFrameInterval( const TInt16 aFrameInterval )
    {
    iFrameInterval = aFrameInterval;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemDef::FrameInterval
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TInt16 CAknsBmpAnimItemDef::FrameInterval() const
    {
    return iFrameInterval;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemDef::SetPlayMode
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBmpAnimItemDef::SetPlayMode( const TInt16 aPlayMode )
    {
    iPlayMode = aPlayMode;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemDef::PlayMode
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TInt16 CAknsBmpAnimItemDef::PlayMode() const
    {
    return iPlayMode;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemDef::SetFlash
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBmpAnimItemDef::SetFlash( const TBool aFlash )
    {
    iFlash = aFlash;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemDef::Flash
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsBmpAnimItemDef::Flash() const
    {
    return iFlash;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsStringItemDef::CAknsStringItemDef
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsStringItemDef::CAknsStringItemDef(
    const TAknsItemType aType, const TAknsItemID& aID )
    : CAknsItemDef( aType, aID ) // iString( NULL )
    {
    }

// -----------------------------------------------------------------------------
// CAknsStringItemDef::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsStringItemDef* CAknsStringItemDef::NewL(
    const TAknsItemID& aID )
    {
    CAknsStringItemDef* self = new (ELeave) CAknsStringItemDef(
        EAknsITString, aID );

    return self;
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsStringItemDef::~CAknsStringItemDef()
    {
    delete iString;
    }

// -----------------------------------------------------------------------------
// CAknsStringItemDef::SetStringL
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsStringItemDef::SetStringL( const TDesC& aString )
    {
    HBufC* temp = aString.AllocL();
    delete iString;
    iString = temp;
    temp = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsStringItemDef::String
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C const TDesC& CAknsStringItemDef::String() const
    {
    return *iString;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsEffectParamDef* CAknsEffectParamDef::NewL()
    {
    CAknsEffectParamDef* self = new (ELeave) CAknsEffectParamDef;
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::CAknsEffectParamDef
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsEffectParamDef::CAknsEffectParamDef()
    {
    }

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
CAknsEffectParamDef::~CAknsEffectParamDef()
    {
    delete iParamName;
    delete iParamString;
    delete iFilename;
    }

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectParamDef::SetType(TUint32 aType)
    {
    iParamType = aType;
    }

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TUint32 CAknsEffectParamDef::GetType()
    {
    return iParamType;
    }

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectParamDef::SetNameL(const TDesC& aName)
    {
    iParamName = aName.AllocL();
    }

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C const TDesC* CAknsEffectParamDef::GetName()
    {
    return iParamName;
    }

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectParamDef::SetValue(TUint32 aParam)
    {
    iParam = aParam;
    }

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectParamDef::SetValueL(const TDesC& aParam)
    {
    iParamString = aParam.AllocL();
    }

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectParamDef::SetValueL(const TDesC& aFilename,
    TUint32 aBitmapIndex, TUint32 aMaskIndex)
    {
    iFilename = aFilename.AllocL();
    iBitmapIndex = aBitmapIndex;
    iMaskIndex = aMaskIndex;
    }

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TUint32 CAknsEffectParamDef::GetNumber()
    {
    return iParam;
    }

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C const TDesC* CAknsEffectParamDef::GetString()
    {
    return iParamString;
    }

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C const TDesC* CAknsEffectParamDef::GetFilename()
    {
    return iFilename;
    }

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TUint32 CAknsEffectParamDef::GetBitmapIndex()
    {
    return iBitmapIndex;
    }

// -----------------------------------------------------------------------------
// CAknsEffectParamDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TUint32 CAknsEffectParamDef::GetMaskIndex()
    {
    return iMaskIndex;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsEffectItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsEffectItemDef* CAknsEffectItemDef::NewL()
    {
    CAknsEffectItemDef* self = new (ELeave) CAknsEffectItemDef;
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsEffectItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
CAknsEffectItemDef::~CAknsEffectItemDef()
    {
    iParamArray.ResetAndDestroy();
    }

// -----------------------------------------------------------------------------
// CAknsEffectItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
CAknsEffectItemDef::CAknsEffectItemDef()
    {
    }

// -----------------------------------------------------------------------------
// CAknsEffectItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectItemDef::SetEffectUid( const TUid aUid )
    {
    iUid = aUid;
    }

// -----------------------------------------------------------------------------
// CAknsEffectItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TUid CAknsEffectItemDef::EffectUid() const
    {
    return iUid;
    }

// -----------------------------------------------------------------------------
// CAknsEffectItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectItemDef::AddParameterL(CAknsEffectParamDef* aParam)
    {
    iParamArray.AppendL(aParam);
    }

// -----------------------------------------------------------------------------
// CAknsEffectItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsEffectParamDef* CAknsEffectItemDef::GetParameter(
    TInt32 aIndex) const
    {
    return iParamArray[aIndex];
    }

// -----------------------------------------------------------------------------
// CAknsEffectItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsEffectItemDef::ParameterCount() const
    {
    return iParamArray.Count();
    }

// -----------------------------------------------------------------------------
// CAknsEffectItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectItemDef::SetLayerIndexesAndModes(
    TUint32 aInputLayerAIndex, TUint32 aInputLayerAMode,
    TUint32 aInputLayerBIndex, TUint32 aInputLayerBMode,
    TUint32 aOutputLayerIndex, TUint32 aOutputLayerMode )
    {
    iInputLayerAIndex = aInputLayerAIndex;
    iInputLayerAMode = aInputLayerAMode;
    iInputLayerBIndex = aInputLayerBIndex;
    iInputLayerBMode = aInputLayerBMode;
    iOutputLayerIndex = aOutputLayerIndex;
    iOutputLayerMode = aOutputLayerMode;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsEffectQueueItemDef* CAknsEffectQueueItemDef::NewL(const TAknsItemID& aID)
    {
    CAknsEffectQueueItemDef* self =
        new (ELeave) CAknsEffectQueueItemDef(EAknsITEffectQueue, aID);
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
CAknsEffectQueueItemDef::CAknsEffectQueueItemDef(
    const TAknsItemType aType, const TAknsItemID& aID)
    : CAknsItemDef( aType, aID )
    {
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
CAknsEffectQueueItemDef::~CAknsEffectQueueItemDef()
    {
    iEffectArray.ResetAndDestroy();
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectQueueItemDef::AddEffectL(CAknsEffectItemDef* aEffect)
    {
    iEffectArray.AppendL(aEffect);
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsEffectItemDef* CAknsEffectQueueItemDef::GetEffect(
    TInt32 aIndex ) const
    {
    return iEffectArray[aIndex];
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TUint32 CAknsEffectQueueItemDef::EffectCount() const
    {
    return iEffectArray.Count();
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectQueueItemDef::SetLayerIndexesAndModes(
    TUint32 aInputLayerIndex, TUint32 aInputLayerMode,
    TUint32 aOutputLayerIndex, TUint32 aOutputLayerMode )
    {
    iInputLayerMode = aInputLayerIndex;
    iInputLayerMode = aInputLayerMode;
    iOutputLayerIndex = aOutputLayerIndex;
    iOutputLayerMode = aOutputLayerMode;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemDef::
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectQueueItemDef::SetReference(const TAknsItemID& aID)
    {
    iReference = aID;
    }

// =============================================================================
// Animation related definitions
// =============================================================================

// ============================ MEMBER FUNCTIONS ===============================
EXPORT_C CAknsSizeBoundParamDef* CAknsSizeBoundParamDef::NewL()
    {
    CAknsSizeBoundParamDef* self = new (ELeave) CAknsSizeBoundParamDef();
    return self;
    }

CAknsSizeBoundParamDef::~CAknsSizeBoundParamDef()
    {
    delete iName;
    }

EXPORT_C void CAknsSizeBoundParamDef::SetDataL( const TDesC& aName,
                        TUint32 aAnimationValueId,
                        TUint32 aParamFlags )
    {
    iName             = aName.AllocL();
    iAnimationValueId = aAnimationValueId;
    iParamFlags       = aParamFlags;
    }

EXPORT_C const TDesC* CAknsSizeBoundParamDef::Name() const
    {
    return iName;
    }

EXPORT_C TUint32 CAknsSizeBoundParamDef::AnimationValueId() const
    {
    return iAnimationValueId;
    }

EXPORT_C TUint32 CAknsSizeBoundParamDef::ParamFlags() const
    {
    return iParamFlags;
    }

CAknsSizeBoundParamDef::CAknsSizeBoundParamDef()
    {
    // Derived from CBase -> members zeroed
    }

// ============================ MEMBER FUNCTIONS ===============================
EXPORT_C CAknsNamedReferenceDef* CAknsNamedReferenceDef::NewL()
    {
    CAknsNamedReferenceDef* self = new (ELeave) CAknsNamedReferenceDef();
    return self;
    }

CAknsNamedReferenceDef::~CAknsNamedReferenceDef()
    {
    delete iName;
    }

EXPORT_C void CAknsNamedReferenceDef::SetDataL( const TDesC& aName,
                                                TUint32 aAnimationValueId )
    {
    iName = aName.AllocL();
    iAnimationValueId = aAnimationValueId;
    }

EXPORT_C const TDesC* CAknsNamedReferenceDef::Name() const
    {
    return iName;
    }

EXPORT_C TUint32 CAknsNamedReferenceDef::AnimationValueId() const
    {
    return iAnimationValueId;
    }

CAknsNamedReferenceDef::CAknsNamedReferenceDef()
    {
    // Derived from CBase -> members zeroed
    }

// ============================ MEMBER FUNCTIONS ===============================
EXPORT_C CAknsTimingModelDef* CAknsTimingModelDef::NewL()
    {
    CAknsTimingModelDef* self = new (ELeave) CAknsTimingModelDef();
    return self;
    }

CAknsTimingModelDef::~CAknsTimingModelDef()
    {
    iParamArray.ResetAndDestroy();
    }

EXPORT_C void CAknsTimingModelDef::SetTimingModelUid( const TUid aUid )
    {
    iTimingModelUid = aUid;
    }

EXPORT_C TUid CAknsTimingModelDef::TimingModelUid() const
    {
    return iTimingModelUid;
    }

EXPORT_C void CAknsTimingModelDef::AddParameterL( CAknsEffectParamDef* aParam )
    {
    iParamArray.AppendL( aParam );
    }

EXPORT_C CAknsEffectParamDef* CAknsTimingModelDef::Parameter( TInt32 aIndex ) const
    {
    return iParamArray[ aIndex ];
    }

EXPORT_C TInt CAknsTimingModelDef::ParameterCount() const
    {
    return iParamArray.Count();
    }

CAknsTimingModelDef::CAknsTimingModelDef()
    {
    // Derived from CBase -> members zeroed
    }

// ============================ MEMBER FUNCTIONS ===============================
EXPORT_C CAknsAnimationValueDef* CAknsAnimationValueDef::NewL()
    {
    CAknsAnimationValueDef* self = new (ELeave) CAknsAnimationValueDef();
    return self;
    }

CAknsAnimationValueDef::~CAknsAnimationValueDef()
    {
    iParamArray.ResetAndDestroy();
    }

EXPORT_C void CAknsAnimationValueDef::SetAnimationValueUid( const TUid aUid )
    {
    iAnimationValueUid = aUid;
    }

EXPORT_C TUid CAknsAnimationValueDef::AnimationValueUid() const
    {
    return iAnimationValueUid;
    }

EXPORT_C void CAknsAnimationValueDef::SetTimingModelId( TUint32 aId )
    {
    iTimingModelId = aId;
    }

EXPORT_C TUint32 CAknsAnimationValueDef::TimingModelId() const
    {
    return iTimingModelId;
    }

EXPORT_C void CAknsAnimationValueDef::AddParameterL( CAknsEffectParamDef* aParam )
    {
    iParamArray.AppendL( aParam );
    }

EXPORT_C CAknsEffectParamDef* CAknsAnimationValueDef::Parameter(
    TInt32 aIndex ) const
    {
    return iParamArray[ aIndex ];
    }

EXPORT_C TInt CAknsAnimationValueDef::ParameterCount() const
    {
    return iParamArray.Count();
    }

CAknsAnimationValueDef::CAknsAnimationValueDef()
    {
    // Derived from CBase -> members zeroed
    }

// ============================ MEMBER FUNCTIONS ===============================
EXPORT_C CAknsAnimationCommandItemDef* CAknsAnimationCommandItemDef::NewL()
    {
    CAknsAnimationCommandItemDef* self
        = new (ELeave) CAknsAnimationCommandItemDef();
    return self;
    }

CAknsAnimationCommandItemDef::~CAknsAnimationCommandItemDef()
    {
    iNamedReferenceArray.ResetAndDestroy();
    }

EXPORT_C void CAknsAnimationCommandItemDef::AddNamedReferenceL(
    CAknsNamedReferenceDef* aRef )
    {
    iNamedReferenceArray.AppendL( aRef );
    }

EXPORT_C CAknsNamedReferenceDef* CAknsAnimationCommandItemDef::NamedReference(
    TInt32 aIndex ) const
    {
    return iNamedReferenceArray[ aIndex ];
    }

EXPORT_C TInt CAknsAnimationCommandItemDef::NamedReferenceCount() const
    {
    return iNamedReferenceArray.Count();
    }

CAknsAnimationCommandItemDef::CAknsAnimationCommandItemDef()
    {
    // Derived from CBase -> members zeroed
    }

// ============================ MEMBER FUNCTIONS ===============================
EXPORT_C CAknsAnimationItemDef* CAknsAnimationItemDef::NewL(
    const TAknsItemID& aID )
    {
    CAknsAnimationItemDef* self =
        new (ELeave) CAknsAnimationItemDef( EAknsITAnimation, aID );
    return self;
    }

CAknsAnimationItemDef::~CAknsAnimationItemDef()
    {
    iPreprocessCommandArray.ResetAndDestroy();
    iCommandArray.ResetAndDestroy();
    iAnimationValueArray.ResetAndDestroy();
    iTimingModelArray.ResetAndDestroy();
    iSizeBoundParamArray.ResetAndDestroy();
    }

EXPORT_C void CAknsAnimationItemDef::SetLayerIndexesAndModes(
    TUint32 aInputLayerIndex, TUint32 aInputLayerMode,
    TUint32 aOutputLayerIndex, TUint32 aOutputLayerMode )
    {
    iInputLayerIndex  = aInputLayerIndex;
    iInputLayerMode   = aInputLayerMode;
    iOutputLayerIndex = aOutputLayerIndex;
    iOutputLayerMode  = aOutputLayerMode;
    }

EXPORT_C void CAknsAnimationItemDef::SetMinInterval( TUint32 aMinInterval )
    {
    iMinInterval = aMinInterval;
    }

EXPORT_C TUint32 CAknsAnimationItemDef::MinInterval() const
    {
    return iMinInterval;
    }

EXPORT_C void CAknsAnimationItemDef::SetMorphing( TBool aMorphing )
    {
    iMorphing = aMorphing;
    }

EXPORT_C TBool CAknsAnimationItemDef::Morphing() const
    {
    return iMorphing;
    }

EXPORT_C void CAknsAnimationItemDef::AddPreprocessCommandL(
    CAknsEffectItemDef* aItemDef )
    {
    iPreprocessCommandArray.AppendL( aItemDef );
    }

EXPORT_C CAknsEffectItemDef* CAknsAnimationItemDef::PreprocessCommand(
    TInt32 aIndex ) const
    {
    return iPreprocessCommandArray[ aIndex ];
    }

EXPORT_C TInt CAknsAnimationItemDef::PreprocessCommandCount() const
    {
    return iPreprocessCommandArray.Count();
    }

EXPORT_C void CAknsAnimationItemDef::AddAnimationCommandItemL(
    CAknsAnimationCommandItemDef* aCommand )
    {
    iCommandArray.AppendL( aCommand );
    }

EXPORT_C CAknsAnimationCommandItemDef* CAknsAnimationItemDef::AnimationCommandItem(
    TInt32 aIndex ) const
    {
    return iCommandArray[ aIndex ];
    }

EXPORT_C TInt CAknsAnimationItemDef::AnimationCommandItemCount() const
    {
    return iCommandArray.Count();
    }

EXPORT_C void CAknsAnimationItemDef::AddAnimationValueL(
    CAknsAnimationValueDef* aValue )
    {
    iAnimationValueArray.AppendL( aValue );
    }

EXPORT_C CAknsAnimationValueDef* CAknsAnimationItemDef::AnimationValue(
    TInt32 aIndex ) const
    {
    return iAnimationValueArray[ aIndex ];
    }

EXPORT_C TInt CAknsAnimationItemDef::AnimationValueCount() const
    {
    return iAnimationValueArray.Count();
    }

EXPORT_C void CAknsAnimationItemDef::AddTimingModelL( CAknsTimingModelDef* aModel )
    {
    iTimingModelArray.AppendL( aModel );
    }

EXPORT_C CAknsTimingModelDef* CAknsAnimationItemDef::TimingModel(
    TInt32 aIndex ) const
    {
    return iTimingModelArray[ aIndex ];
    }

EXPORT_C TInt CAknsAnimationItemDef::TimingModelCount() const
    {
    return iTimingModelArray.Count();
    }

EXPORT_C void CAknsAnimationItemDef::AddSizeBoundParamL(
    CAknsSizeBoundParamDef* aParam )
    {
    iSizeBoundParamArray.AppendL( aParam );
    }

EXPORT_C CAknsSizeBoundParamDef* CAknsAnimationItemDef::SizeBoundParam(
    TInt32 aIndex ) const
    {
    return iSizeBoundParamArray[ aIndex ];
    }

EXPORT_C TInt CAknsAnimationItemDef::SizeBoundParamCount() const
    {
    return iSizeBoundParamArray.Count();
    }

CAknsAnimationItemDef::CAknsAnimationItemDef( const TAknsItemType aType,
                                              const TAknsItemID& aID ):
    CAknsItemDef( aType, aID )
    {
    // Derived from CBase -> members zeroed
    }

//  End of File
