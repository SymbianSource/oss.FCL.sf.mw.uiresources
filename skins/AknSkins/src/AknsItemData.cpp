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
* Description:  Base class for item data classes.
*
*/


// INCLUDE FILES

#include <fbs.h>
#include <AknsItemDef.h> // For TAknsAppIconInfo
#include <aknenv.h>

#include <AknsItemData.h>
#include <AknsImageAttributeData.h>

#include "AknsDebug.h"
#include <AknsConstants.h>

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsItemData::CAknsItemData
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsItemData::CAknsItemData( const TAknsItemType aType )
    : iType( aType )
    {
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsItemData::~CAknsItemData()
    {
    }

// -----------------------------------------------------------------------------
// CAknsItemData::SetType
// (commented in the header).
// -----------------------------------------------------------------------------
//
void CAknsItemData::SetType( const TAknsItemType aType )
    {
    iType = aType;
    }

// -----------------------------------------------------------------------------
// CAknsItemData::Type
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TAknsItemType CAknsItemData::Type() const
    {
    return iType;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsImageItemData::CAknsImageItemData
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsImageItemData::CAknsImageItemData( const TAknsItemType aType )
    : CAknsItemData( aType ) // CBase initializes: iAttributeData( NULL )
    {
    iParentIID = KAknsIIDNone;
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsImageItemData::~CAknsImageItemData()
    {
    delete iAttributeData;
    }

// -----------------------------------------------------------------------------
// CAknsImageItemData::SetAttributesL
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsImageItemData::SetAttributesL(
    const TAknsImageAttributeData& aAttributes )
    {
    if( !iAttributeData )
        {
        iAttributeData = new (ELeave) TAknsImageAttributeData;
        }

    iAttributeData->Set( aAttributes );
    }

// -----------------------------------------------------------------------------
// CAknsImageItemData::SetParentIID
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsImageItemData::SetParentIID(const TAknsItemID& aIID)
    {
    iParentIID = aIID;
    }

// -----------------------------------------------------------------------------
// CAknsImageItemData::SetDrawRect
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsImageItemData::SetDrawRect(const TRect& aRect)
    {
    iDrawRect = aRect;
    }

// -----------------------------------------------------------------------------
// CAknsImageItemData::ParentIID
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TAknsItemID CAknsImageItemData::ParentIID()
    {
    return iParentIID;
    }

// -----------------------------------------------------------------------------
// CAknsImageItemData::DrawRect
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TRect CAknsImageItemData::DrawRect()
    {
    return iDrawRect;
    }

// -----------------------------------------------------------------------------
// CAknsImageItemData::Attributes
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C const TAknsImageAttributeData* CAknsImageItemData::Attributes() const
    {
    return iAttributeData;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsBitmapItemData::CAknsBitmapItemData
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsBitmapItemData::CAknsBitmapItemData( const TAknsItemType aType )
    : CAknsImageItemData( aType ) // CBase initializes: iBitmap( NULL )
    {
    }

// -----------------------------------------------------------------------------
// CAknsBitmapItemData::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsBitmapItemData* CAknsBitmapItemData::NewL()
    {
    return new (ELeave) CAknsBitmapItemData( EAknsITBitmap );
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsBitmapItemData::~CAknsBitmapItemData()
    {
    delete iBitmap;
    }

// -----------------------------------------------------------------------------
// CAknsBitmapItemData::SetBitmap
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBitmapItemData::SetBitmap( CFbsBitmap* aBitmap )
    {
    iBitmap = aBitmap;
    }

// -----------------------------------------------------------------------------
// CAknsBitmapItemData::DestroyAndSetBitmap
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBitmapItemData::DestroyAndSetBitmap( CFbsBitmap* aBitmap )
    {
    delete iBitmap;
    iBitmap = aBitmap;
    }

// -----------------------------------------------------------------------------
// CAknsBitmapItemData::Bitmap
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C CFbsBitmap* CAknsBitmapItemData::Bitmap()
    {
    return iBitmap;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsMaskedBitmapItemData::CAknsMaskedBitmapItemData
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsMaskedBitmapItemData::CAknsMaskedBitmapItemData( const TAknsItemType aType )
    : CAknsBitmapItemData( aType )
    // CBase initializes: iMask(NULL)
    {
    }

// -----------------------------------------------------------------------------
// CAknsMaskedBitmapItemData::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsMaskedBitmapItemData* CAknsMaskedBitmapItemData::NewL()
    {
    return new (ELeave) CAknsMaskedBitmapItemData( EAknsITMaskedBitmap );
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsMaskedBitmapItemData::~CAknsMaskedBitmapItemData()
    {
    delete iMask;
    }

// -----------------------------------------------------------------------------
// CAknsMaskedBitmapItemData::SetMask
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsMaskedBitmapItemData::SetMask( CFbsBitmap* aMask )
    {
    iMask = aMask;
    }

// -----------------------------------------------------------------------------
// CAknsMaskedBitmapItemData::DestroyAndSetMask
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsMaskedBitmapItemData::DestroyAndSetMask( CFbsBitmap* aMask )
    {
    delete iMask;
    iMask = aMask;
    }

// -----------------------------------------------------------------------------
// CAknsMaskedBitmapItemData::Mask
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C CFbsBitmap* CAknsMaskedBitmapItemData::Mask()
    {
    return iMask;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsColorTableItemData::CAknsColorTableItemData( const TAknsItemType aType )
    : CAknsImageItemData( aType )
    // CBase initializes: iColorArray( NULL ), iColorArraySize( 0 )
    {
    }

// -----------------------------------------------------------------------------
// CAknsColorTableItemData::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsColorTableItemData* CAknsColorTableItemData::NewL()
    {
    return new (ELeave) CAknsColorTableItemData( EAknsITColorTable );
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsColorTableItemData::~CAknsColorTableItemData()
    {
    delete [] iColorArray;
    iColorArraySize = 0;
    }

// -----------------------------------------------------------------------------
// CAknsColorTableItemData::SetColorsL
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsColorTableItemData::SetColorsL( const TInt aNumberOfColors,
    const TAknsColorTableEntry* aColors )
    {
    delete [] iColorArray;
    iColorArray = NULL;
    iColorArraySize = 0;

    iColorArray = new (ELeave) TAknsColorTableEntry[ //lint !e119 ELeave ok
        static_cast<TUint>(aNumberOfColors) ];
    Mem::Copy( iColorArray, aColors,
        static_cast<TInt>(sizeof(TAknsColorTableEntry))*aNumberOfColors );
    iColorArraySize = aNumberOfColors;
    }

// -----------------------------------------------------------------------------
// CAknsColorTableItemData::ColorIndexed
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsColorTableItemData::ColorIndexed( const TInt aIndex ) const
    {
    __ASSERT_DEBUG( iColorArray, AKNS_DEBUG_PANIC( EAknsDPanicNotInitialized ) );
    __ASSERT_DEBUG( aIndex>=0, AKNS_DEBUG_PANIC( EAknsDPanicInvalidParameter ) );
    __ASSERT_DEBUG( aIndex<iColorArraySize, AKNS_DEBUG_PANIC( EAknsDPanicInvalidParameter ) );

    return iColorArray[ aIndex ].iIndex;
    }

// -----------------------------------------------------------------------------
// CAknsColorTableItemData::ColorRgb
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TRgb CAknsColorTableItemData::ColorRgb( const TInt aIndex ) const
    {
    __ASSERT_DEBUG( iColorArray, AKNS_DEBUG_PANIC( EAknsDPanicNotInitialized ) );
    __ASSERT_DEBUG( aIndex>=0, AKNS_DEBUG_PANIC( EAknsDPanicInvalidParameter ) );
    __ASSERT_DEBUG( aIndex<iColorArraySize, AKNS_DEBUG_PANIC( EAknsDPanicInvalidParameter ) );

    return iColorArray[ aIndex ].iRgb;
    }

// -----------------------------------------------------------------------------
// CAknsColorTableItemData::GetColorL
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsColorTableItemData::GetColorL(
    const TInt aIndex, TRgb& aColor ) const
    {
    if( !iColorArray )
        {
        User::Leave( KErrArgument );
        }
    if( (aIndex<0) || (aIndex>=iColorArraySize) )
        {
        User::Leave( KErrNotFound );
        }

    TInt indexed = ColorIndexed( aIndex );
    if( indexed >= 0 )
        {
        aColor = CAknEnv::AvkonColor( indexed );
        }
    else
        {
        aColor = ColorRgb( aIndex );
        }
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsImageTableItemData::CAknsImageTableItemData( const TAknsItemType aType )
    : CAknsImageItemData( aType )
    // CBase initializes: iNumberOfImages(0), iImageArray( NULL )
    {
    }

// -----------------------------------------------------------------------------
// CAknsImageTableItemData::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsImageTableItemData* CAknsImageTableItemData::NewL()
    {
    return new (ELeave) CAknsImageTableItemData( EAknsITImageTable );
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsImageTableItemData::~CAknsImageTableItemData()
    {
    delete [] iImageArray;
    }

// -----------------------------------------------------------------------------
// CAknsImageTableItemData::SetImagesL
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsImageTableItemData::SetImagesL( const TInt aNumberOfImages,
    const TAknsItemID* aImages )
    {
    delete [] iImageArray;
    iImageArray = NULL;
    iNumberOfImages = 0;

    iImageArray = new (ELeave) TAknsItemID[ //lint !e119 ELeave ok
        static_cast<TUint>(aNumberOfImages) ];
    iNumberOfImages = aNumberOfImages;
    Mem::Copy( iImageArray, aImages,
        static_cast<TInt>(sizeof(TAknsItemID))*aNumberOfImages );
    }

// -----------------------------------------------------------------------------
// CAknsImageTableItemData::ImageIID
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TAknsItemID CAknsImageTableItemData::ImageIID( const TInt aIndex ) const
    {
    return iImageArray[aIndex];
    }

// -----------------------------------------------------------------------------
// CAknsImageTableItemData::Images
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TAknsItemID* CAknsImageTableItemData::Images() const
    {
    return iImageArray;
    } //lint !e1763 Member exposed intentionally

// -----------------------------------------------------------------------------
// CAknsImageTableItemData::NumberOfImages
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsImageTableItemData::NumberOfImages() const
    {
    return iNumberOfImages;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsBmpAnimItemData::CAknsBmpAnimItemData( const TAknsItemType aType )
    : CAknsImageTableItemData( aType ), iFrameInterval( -1 )
    // CBase initializes: iFrameArray(NULL), iLastFrameBackground(EFalse),
    // iPlayMode(0), iFlash(EFalse)
    {
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemData::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsBmpAnimItemData* CAknsBmpAnimItemData::NewL()
    {
    return new (ELeave) CAknsBmpAnimItemData( EAknsITBmpAnim );
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsBmpAnimItemData::~CAknsBmpAnimItemData()
    {
    delete [] iFrameArray;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemData::SetFrameInfosL
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBmpAnimItemData::SetFrameInfosL(
    const TAknsBmpAnimFrameInfo* aFrameInfos )
    {
    delete [] iFrameArray;
    iFrameArray = NULL;

    iFrameArray = new (ELeave) TAknsBmpAnimFrameInfo[ //lint !e119 ELeave ok
        static_cast<TUint>(iNumberOfImages) ];

    Mem::Copy( iFrameArray, aFrameInfos,
        static_cast<TInt>(sizeof(TAknsBmpAnimFrameInfo))*iNumberOfImages );
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemData::FrameInfos
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TAknsBmpAnimFrameInfo* CAknsBmpAnimItemData::FrameInfos() const
    {
    return iFrameArray;
    } //lint !e1763 Member exposed intentionally

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemData::SetLastFrameBackground
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBmpAnimItemData::SetLastFrameBackground( TBool aLastFrameBg )
    {
    iLastFrameBackground = aLastFrameBg;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemData::LastFrameBackground
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsBmpAnimItemData::LastFrameBackground() const
    {
    return iLastFrameBackground;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemData::SetFrameInterval
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBmpAnimItemData::SetFrameInterval( const TInt16 aFrameInterval )
    {
    iFrameInterval = aFrameInterval;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemData::FrameInterval
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TInt16 CAknsBmpAnimItemData::FrameInterval() const
    {
    return iFrameInterval;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemData::SetPlayMode
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBmpAnimItemData::SetPlayMode( const TInt16 aPlayMode )
    {
    iPlayMode = aPlayMode;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemData::PlayMode
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TInt16 CAknsBmpAnimItemData::PlayMode() const
    {
    return iPlayMode;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemData::SetFlash
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsBmpAnimItemData::SetFlash( const TBool aFlash )
    {
    iFlash = aFlash;
    }

// -----------------------------------------------------------------------------
// CAknsBmpAnimItemData::Flash
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsBmpAnimItemData::Flash() const
    {
    return iFlash;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsStringItemData::CAknsStringItemData( const TAknsItemType aType )
    : CAknsItemData( aType )
    // CBase initializes iString(NULL)
    {
    }

// -----------------------------------------------------------------------------
// CAknsStringItemData::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsStringItemData* CAknsStringItemData::NewL()
    {
    return new (ELeave) CAknsStringItemData( EAknsITString );
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsStringItemData::~CAknsStringItemData()
    {
    delete iString;
    }

// -----------------------------------------------------------------------------
// CAknsStringItemData::SetStringL
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsStringItemData::SetStringL( const TDesC& aValue )
    {
    HBufC* temp = aValue.AllocL();
    delete iString;
    iString = temp;
    temp = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsStringItemData::String
// (commented in the header).
// -----------------------------------------------------------------------------
//
EXPORT_C const TDesC& CAknsStringItemData::String() const
    {
    return *iString;
    } //lint !e1763 Member exposed intentionally

//  End of File
