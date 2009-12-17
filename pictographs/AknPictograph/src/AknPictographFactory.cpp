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
* Description:  Pictograph drawer
*
*/



// INCLUDE FILES
#include "AknPictographFactory.h"
#include "AknPictographConstants.h"
#include "AknPictographDefinitions.h"
#include "AknStaticPictographDefKey.h"
#include "AknAnimatedPictographDefKey.h"

#include <fbs.h>
#include <gdi.h>
#include <bitdev.h>




// CONSTANTS

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// AknPictographFactory::SupportedPictographCodesL
// -----------------------------------------------------------------------------
//
HBufC* AknPictographFactory::SupportedPictographCodesL()
    {
    // static pictographs
    const TAknStaticPictographDefinition* staticTable = 
        TheStaticPictographDefinitions;

    // animated pictographs
    const TAknAnimatedPictographDefinition* animatedTable = 
        TheAnimatedPictographDefinitions;

    TInt numPictographs = KAknPictographStaticPictographsCount +
                          KAknPictographAnimatedPictographsCount;

    RArray<TUint> array( numPictographs );
    CleanupClosePushL( array );

    // append static pictograph codes
    for ( TInt i = 0 ; i < KAknPictographStaticPictographsCount ; i++ )
        {
        User::LeaveIfError( array.Append( staticTable[i].iCode ) );
        }

    // append animated pictograph codes
    for ( TInt j = 0 ; j < KAknPictographAnimatedPictographsCount ; j++ )
        {
        User::LeaveIfError( array.Append( animatedTable[j].iCode ) );
        }

    // sort
    array.Sort();

    // copy to descriptor
    HBufC* buf = HBufC::NewMaxL( numPictographs );
    TText* codes = const_cast<TText*>( buf->Ptr() );

    for ( TInt k = 0 ; k < numPictographs ; k++ )
        {
        codes[k] = static_cast<TText>( array[k] );
        }

    CleanupStack::PopAndDestroy(); // array
    return buf;
    }

// -----------------------------------------------------------------------------
// AknPictographFactory::StaticPictographData
// -----------------------------------------------------------------------------
//
TInt AknPictographFactory::StaticPictographData( 
    TText aCode, TAknPictographHeight aHeight, TAknPictographData& aData )
    {
    // Search static pictograph table.
    TAknStaticPictographDefKey staticDefKey;
    staticDefKey.SetPtr( &aCode );
    TInt pos;

    TInt ret = User::BinarySearch( KAknPictographStaticPictographsCount,
                                   staticDefKey,
                                   pos );

    const TAknStaticPictographDefinition* def = NULL;

    if ( ret == KErrNone )
        {
        def = &( TheStaticPictographDefinitions[pos] );

        TUint index = 0;
        ret = GetArrayIndexForHeight(aHeight,index);

        if ( ret == KErrNone )
            {
            aData.iOffset = def->iMetrics[index].iX;
            aData.iSize.iWidth = def->iMetrics[index].iWidth;
            aData.iSize.iHeight = def->iMetrics[index].iHeight;
            aData.iAnimated = EFalse;
            }
        }

    return ret;
    }

// -----------------------------------------------------------------------------
// AknPictographFactory::AnimatedPictographData
// -----------------------------------------------------------------------------
//
TInt AknPictographFactory::AnimatedPictographData(
    TText aCode,
    TAknPictographHeight aHeight,
    TUint aCounter,
    TAknPictographData& aData )
    {
    // Search animated pictograph table.
    TAknAnimatedPictographDefKey animatedDefKey;
    animatedDefKey.SetPtr( &aCode );
    TInt pos;

    TInt ret = User::BinarySearch( KAknPictographAnimatedPictographsCount,
                                   animatedDefKey,
                                   pos );

    const TAknAnimatedPictographDefinition* def = NULL;

    if ( ret == KErrNone )
        {
        def = &( TheAnimatedPictographDefinitions[pos] );


        TUint index = 0;
        ret = GetArrayIndexForHeight(aHeight,index);

        if ( ret == KErrNone )
            {
            TInt frame = aCounter % def->iFramesDefinitions[index].iFrames;

            const TAknPictographMetrics* metrics = def->iFramesDefinitions[index].iMetrics;
            aData.iOffset = metrics[frame].iX;
            aData.iSize.iWidth = metrics[frame].iWidth;
            aData.iSize.iHeight = metrics[frame].iHeight;
            aData.iAnimated = ETrue;
            }
        }

    return ret;
    }

// -----------------------------------------------------------------------------
// AknPictographFactory::StaticPictographTable
// -----------------------------------------------------------------------------
//
const TAknStaticPictographDefinition* 
    AknPictographFactory::StaticPictographTable()
    {
    return TheStaticPictographDefinitions;
    }

// -----------------------------------------------------------------------------
// AknPictographFactory::AnimatedPictographTable
// -----------------------------------------------------------------------------
//
const TAknAnimatedPictographDefinition* 
    AknPictographFactory::AnimatedPictographTable()
    {
    return TheAnimatedPictographDefinitions;
    }

// -----------------------------------------------------------------------------
// AknPictographFactory::LoadBitmapsL
// -----------------------------------------------------------------------------
//
void AknPictographFactory::LoadBitmapsL(
            RPointerArray<CFbsBitmap>*& aBitmaps,
            RPointerArray<CFbsBitmap>*& aMasks
            )
    {
    // Allocates array object and sets proper granularity values
    aBitmaps = new(ELeave) RPointerArray<CFbsBitmap>(KAknPictographSupportedHeightsCount);
    aMasks = new(ELeave) RPointerArray<CFbsBitmap>(KAknPictographSupportedHeightsCount);

    TFileName filename;
    CFbsBitmap* bitmap = NULL;

    // Loads supported bitamps and masks
    for (TInt i = 0; i < KAknPictographSupportedHeightsCount; i++)
        {
        // Load bitmap and append to aBitmaps
        filename = KBitmapFileNameBase;
        filename.AppendNum( TAknPictographSupportedHeightsNumbers[i] );
        filename.Append( KExtension );
        bitmap = new( ELeave ) CFbsBitmap;
        CleanupStack::PushL( bitmap );
        User::LeaveIfError( aBitmaps->Append(bitmap) );
        CleanupStack::Pop( bitmap );
        User::LeaveIfError( bitmap->Load( filename ) );

        // Load bitmap mask and append to aBitmaps
        filename = KMaskFileNameBase;
        filename.AppendNum( TAknPictographSupportedHeightsNumbers[i] );
        filename.Append( KExtension );
        bitmap = new( ELeave ) CFbsBitmap;
        CleanupStack::PushL( bitmap );
        User::LeaveIfError( aMasks->Append(bitmap) );
        CleanupStack::Pop( bitmap );
        User::LeaveIfError( bitmap->Load( filename ) );
        }
    }

// -----------------------------------------------------------------------------
// AknPictographFactory::CreateWhiteBitmapsL
// -----------------------------------------------------------------------------
//
void AknPictographFactory::CreateWhiteBitmapsL(
            CFbsBitmap*& aBitmap,
            CFbsBitmap*& aMask,
            CFbsBitmapDevice*& aMaskBitmapDevice,
            CFbsBitGc*& aMaskGc
            )
    {
    __ASSERT_DEBUG( KAknPictographSupportedHeightsCount > 0, User::Invariant() );
    // Note: TAknPictographSupportedHeightsNumbers should contain height numbers
    // ascending order
    // The size estimate below is derived from the heights of the biggest supported pictograph
    const TInt sideLenght = TAknPictographSupportedHeightsNumbers[KAknPictographSupportedHeightsCount-1]*2;
    const TSize whiteBitmapSize(sideLenght,sideLenght);

    // create white bitmap
    CFbsBitmap* bitmap = new (ELeave) CFbsBitmap();
    CleanupStack::PushL(bitmap);
    User::LeaveIfError( bitmap->Create( whiteBitmapSize, EGray2 ) );
    CFbsBitmapDevice* bitmapDev = CFbsBitmapDevice::NewL( bitmap );
    CleanupStack::PushL( bitmapDev );
    CFbsBitGc* bitmapGc = NULL;
    User::LeaveIfError( bitmapDev->CreateContext( bitmapGc ) );
    CleanupStack::PushL( bitmapGc );

    // fill the whole bitmap with white color
    bitmapGc->SetBrushColor(KRgbWhite);
    bitmapGc->SetBrushStyle(CGraphicsContext::ESolidBrush);
    bitmapGc->Clear();
    CleanupStack::PopAndDestroy(2); // bitmapDev, bitmapGc

    // create the mask (to be filled later)
    CFbsBitmap* mask = new (ELeave) CFbsBitmap();
    CleanupStack::PushL(mask);
    User::LeaveIfError( mask->Create( whiteBitmapSize, EGray2 ) );
    CFbsBitmapDevice* maskDev = CFbsBitmapDevice::NewL( mask );
    CleanupStack::PushL( maskDev );
    CFbsBitGc* maskGc = NULL;
    User::LeaveIfError( maskDev->CreateContext( maskGc ) );

    // fill the whole are of mask with white color
    maskGc->SetBrushColor(KRgbWhite);
    maskGc->SetBrushStyle(CGraphicsContext::ESolidBrush);
    maskGc->Clear();

    CleanupStack::Pop(3); // bitmap, mask, maskDev
    aBitmap = bitmap;
    aMask = mask;
    aMaskBitmapDevice = maskDev;
    aMaskGc = maskGc;
    }

// -----------------------------------------------------------------------------
// AknPictographFactory::GetArrayIndexForHeight
// -----------------------------------------------------------------------------
//
TInt AknPictographFactory::GetArrayIndexForHeight(
            TAknPictographHeight aHeight,
            TUint& aIndex
            )
    {
    TInt ret = KErrNotSupported;

    for (TInt i = 0; i < KAknPictographSupportedHeightsCount; i++)
        {
        if (TAknPictographSupportedHeights[i] == aHeight)
            {
            aIndex = i;
            ret = KErrNone;
            break;
            }
        }
    return ret;
    }

// -----------------------------------------------------------------------------
// AknPictographFactory::SelectPictographHeightForFont
// -----------------------------------------------------------------------------
//
TInt AknPictographFactory::SelectPictographHeightForFont(
            const CFont& aFont,
            TAknPictographHeight& aHeight
            )
    {
    TInt ret = KErrNotSupported;
    TInt fontHeight = aFont.HeightInPixels();
    TInt i;

    // Search for the first height that is bigger
    // Note: TAknPictographSupportedHeightsNumbers should contain height numbers
    // ascending order
    for (i = 0; i < KAknPictographSupportedHeightsCount; i++)
        {
        if ((TUint)fontHeight < TAknPictographSupportedHeightsNumbers[i])
            {
            break;
            }
        }

    // The previous height should be the best match
    // Use the biggest supported pictograph height in case the font height is
    // bigger
    TInt index = i-1;
    if (index >= 0)
        {
        aHeight = TAknPictographSupportedHeights[index];
        ret = KErrNone;
        }

    return ret;
    }



//  End of File  
