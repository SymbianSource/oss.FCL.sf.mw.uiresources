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
* Description:  Context for frames.
*
*/


// INCLUDE FILES
#include "AknsCppPreface.h"

#include <AknsFrameBackgroundControlContext.h>
#include <AknsItemData.h>
#include <AknsUtils.h>
#include <AknsDrawUtils.h>

#include "AknsBackgroundLayout.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsFrameBackgroundControlContext::CAknsFrameBackgroundControlContext
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsFrameBackgroundControlContext::CAknsFrameBackgroundControlContext() :
    CAknsLayeredBackgroundControlContext(),
    iInnerRect(0,0,1,1), iOuterRect(0,0,1,1), iSingleElementFrame( EFalse )
    {
    iFrameID = KAknsIIDNone;
    iCenterID = KAknsIIDDefault;
    }

// -----------------------------------------------------------------------------
// CAknsFrameBackgroundControlContext::ConstructL
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknsFrameBackgroundControlContext::ConstructL(
    const TAknsItemID& aFrameID, const TRect& aOuterRect,
    const TRect& aInnerRect, const TBool aParentAbsolute )
    {
    CAknsLayeredBackgroundControlContext::ConstructL( TRect(0,0,1,1),
        aParentAbsolute, KAknsIIDNone, EAknsFrameElementsN );

    SetFrameRects( aOuterRect, aInnerRect );
    SetFrame( aFrameID );
    }

// -----------------------------------------------------------------------------
// CAknsFrameBackgroundControlContext::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsFrameBackgroundControlContext::NewL)
EXPORT_C CAknsFrameBackgroundControlContext*
    CAknsFrameBackgroundControlContext::NewL(
    const TAknsItemID& aFrameID, const TRect& aOuterRect,
    const TRect& aInnerRect, const TBool aParentAbsolute )
    {
    CAknsFrameBackgroundControlContext* self =
        new( ELeave ) CAknsFrameBackgroundControlContext();

    CleanupStack::PushL( self );
    self->ConstructL( aFrameID, aOuterRect, aInnerRect, aParentAbsolute );
    CleanupStack::Pop( self );

    return self;
    }

// -----------------------------------------------------------------------------
// CAknsFrameBackgroundControlContext::~CAknsFrameBackgroundControlContext
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsFrameBackgroundControlContext::~CAknsFrameBackgroundControlContext()
    {
    }

// -----------------------------------------------------------------------------
// CAknsFrameBackgroundControlContext::SetFrame
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsFrameBackgroundControlContext::SetFrame(
    const TAknsItemID& aFrameID )
    {
    iFrameID = aFrameID;
    iCenterID = KAknsIIDDefault;

    TInt i;

    for( i=0; i<EAknsFrameElementsN; i++ )
        {
        SetLayerImage( i, KAknsIIDNone );
        }

    MAknsSkinInstance* skin = AknsUtils::SkinInstance();
    if( !skin )
        {
        return;
        }

    CAknsImageItemData* imgData = static_cast<CAknsImageItemData*>(
        skin->GetCachedItemData( aFrameID, EAknsITImage ) );
    if( !imgData )
        {
        return;
        }

    //lint --e{961} Valid logic
    if( AknsUtils::IsDerivedType( EAknsITBitmap, imgData->Type() ) )
        {
        iSingleElementFrame = ETrue;

        SetLayerImage( 0, aFrameID );
        }
    else if( AknsUtils::IsDerivedType( EAknsITImageTable, imgData->Type() ) )
        {
        iSingleElementFrame = EFalse;

        CAknsImageTableItemData* itData =
            static_cast<CAknsImageTableItemData*>(imgData);
        if( itData->NumberOfImages()!=9 )
            {
            return;
            }

        SetLayerImage( 0, itData->ImageIID( EAknsFrameIndexCenter ) );
        for( i=0; i<EAknsFrameElementsN-1; i++ )
            {
            SetLayerImage( i+1, itData->ImageIID( i ) );
            }
        }
    // Since we can not leave, just tolerate the unsupported type

    UpdateFrame();
    }

// -----------------------------------------------------------------------------
// CAknsFrameBackgroundControlContext::SetFrameRects
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsFrameBackgroundControlContext::SetFrameRects(
    const TRect& aOuterRect,
    const TRect& aInnerRect )
    {
    iOuterRect = aOuterRect;
    iInnerRect = aInnerRect;

    // Center
    // Center layer rectangle handled by UpdateFrame

    // Corners
    SetLayerRect( EAknsFrameIndexTl+1,
        TRect( aOuterRect.iTl, aInnerRect.iTl ) );
    SetLayerRect( EAknsFrameIndexTr+1,
        TRect( aInnerRect.iBr.iX, aOuterRect.iTl.iY,
        aOuterRect.iBr.iX, aInnerRect.iTl.iY ) );
    SetLayerRect( EAknsFrameIndexBl+1,
        TRect( aOuterRect.iTl.iX, aInnerRect.iBr.iY,
        aInnerRect.iTl.iX, aOuterRect.iBr.iY ) );
    SetLayerRect( EAknsFrameIndexBr+1,
        TRect( aInnerRect.iBr, aOuterRect.iBr ) );

    // Sides
    TRect sideRect( aInnerRect.iTl.iX, aOuterRect.iTl.iY,
        aInnerRect.iBr.iX, aInnerRect.iTl.iY );
    SetLayerRect( EAknsFrameIndexT+1, sideRect );
    sideRect.SetRect( aInnerRect.iTl.iX, aInnerRect.iBr.iY,
        aInnerRect.iBr.iX, aOuterRect.iBr.iY );
    SetLayerRect( EAknsFrameIndexB+1, sideRect );
    sideRect.SetRect( aOuterRect.iTl.iX, aInnerRect.iTl.iY,
        aInnerRect.iTl.iX, aInnerRect.iBr.iY );
    SetLayerRect( EAknsFrameIndexL+1, sideRect );
    sideRect.SetRect( aInnerRect.iBr.iX, aInnerRect.iTl.iY,
        aOuterRect.iBr.iX, aInnerRect.iBr.iY );
    SetLayerRect( EAknsFrameIndexR+1, sideRect );

    UpdateFrame();
    }

// -----------------------------------------------------------------------------
// CAknsFrameBackgroundControlContext::SetCenter
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsFrameBackgroundControlContext::SetCenter)
EXPORT_C void CAknsFrameBackgroundControlContext::SetCenter(
    const TAknsItemID& aID )
    {
    iCenterID = aID;
    iLayout->iImageID = aID;
    }

// -----------------------------------------------------------------------------
// CAknsFrameBackgroundControlContext::SetFramePartRect
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsFrameBackgroundControlContext::SetFramePartRect)
EXPORT_C void CAknsFrameBackgroundControlContext::SetFramePartRect(
    const TRect& aRect,
    const TAknsFrameElementIndex aFrameElement )
    {
    if( aFrameElement == EAknsFrameIndexCenter )
        {
        iInnerRect = aRect;
        // Center layer rectangle handled by UpdateFrame
        }
    else
        {
        //lint --e{961} Valid logic
        if( aFrameElement == EAknsFrameIndexTl )
            {
            iOuterRect.iTl = aRect.iTl;
            }
        else if( aFrameElement == EAknsFrameIndexBr )
            {
            iOuterRect.iBr = aRect.iBr;
            }
        // None of the other cases change outer rect

        SetLayerRect( aFrameElement+1 , aRect );
        }

    UpdateFrame();
    }

// -----------------------------------------------------------------------------
// CAknsFrameBackgroundControlContext::IsCompatibleWithType
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
TBool CAknsFrameBackgroundControlContext::IsCompatibleWithType(
    const TAknsControlContextType aType ) const
    {
    switch( aType )
        {
        case EAknsControlContextTypeUnknown:
        case EAknsControlContextTypeBasic:
        case EAknsControlContextTypeLayered:
        case EAknsControlContextTypeFrame:
            return ETrue;

        case EAknsControlContextTypeListBox:
            break;
        }

    return EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsFrameBackgroundControlContext::UpdateContext
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
TInt CAknsFrameBackgroundControlContext::UpdateContext()
    {
    SetFrame( iFrameID );
    if( (!iSingleElementFrame) && (iCenterID!=KAknsIIDDefault) )
        {
        SetCenter( iCenterID );
        }

    return 0;
    }

// -----------------------------------------------------------------------------
// CAknsFrameBackgroundControlContext::UpdateFrame
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
void CAknsFrameBackgroundControlContext::UpdateFrame()
    {
    if( iSingleElementFrame )
        {
        iLayout->iNext = NULL;
        SetLayerRect( 0, iOuterRect );
        }
    else
        {
        iLayout->iNext = &(iLayoutArray[0]);
        SetLayerRect( 0, iInnerRect );
        }

    MAknsSkinInstance* skininstance = AknsUtils::SkinInstance();
    AknsDrawUtils::PrepareFrame( skininstance,
        iOuterRect, iInnerRect,
        iFrameID, iCenterID);
    }

//  End of File
