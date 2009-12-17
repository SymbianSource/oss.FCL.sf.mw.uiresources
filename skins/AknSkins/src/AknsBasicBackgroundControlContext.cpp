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
* Description:  Defines a public class CAknsBasicBackgroundControlContext.
*
*/


// INCLUDE FILES
#include "AknsCppPreface.h"
#include <AknsBasicBackgroundControlContext.h>
#include "AknsBackgroundLayout.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsBasicBackgroundControlContext::CAknsBasicBackgroundControlContext()
    // CBase initializes: iLayout(NULL), iParentContext(NULL)
    {
    }

// -----------------------------------------------------------------------------
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknsBasicBackgroundControlContext::ConstructL(
    const TRect& aRect, TBool aParentAbsolute, const TAknsItemID& aImageID )
    {
    iLayout = new (ELeave) TAknsBackground;
    iLayout->iParentAbsolute = aParentAbsolute;
    iLayout->iParentPos = TPoint(0,0);
    iLayout->iRect = aRect;
    iLayout->iImageID = aImageID;
    }

// -----------------------------------------------------------------------------
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsBasicBackgroundControlContext::NewL)
EXPORT_C CAknsBasicBackgroundControlContext*
    CAknsBasicBackgroundControlContext::NewL(
    const TAknsItemID& aImageID,
    const TRect& aRect,
    TBool aParentAbsolute )
    {
    CAknsBasicBackgroundControlContext* self =
        new( ELeave ) CAknsBasicBackgroundControlContext();

    CleanupStack::PushL( self );
    self->ConstructL( aRect, aParentAbsolute, aImageID );
    CleanupStack::Pop( self );

    return self;
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsBasicBackgroundControlContext::~CAknsBasicBackgroundControlContext()
    {
    delete iLayout;
    }

// -----------------------------------------------------------------------------
// CAknsBasicBackgroundControlContext::SetBitmap
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsBasicBackgroundControlContext::SetBitmap)
EXPORT_C void CAknsBasicBackgroundControlContext::SetBitmap(
    const TAknsItemID& aID )
    {
    iLayout->iImageID = aID;
    }

// -----------------------------------------------------------------------------
// CAknsBasicBackgroundControlContext::SetRect
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsBasicBackgroundControlContext::SetRect)
EXPORT_C void CAknsBasicBackgroundControlContext::SetRect( const TRect& aRect )
    {
    iLayout->iRect = aRect;
    }

// -----------------------------------------------------------------------------
// CAknsBasicBackgroundControlContext::SetParentPos
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsBasicBackgroundControlContext::SetParentPos)
EXPORT_C void CAknsBasicBackgroundControlContext::SetParentPos(
    const TPoint& aPos )
    {
    if( iLayout->iParentAbsolute )
        {
        iLayout->iParentPos = aPos;
        }
    }

// -----------------------------------------------------------------------------
// CAknsBasicBackgroundControlContext::SetParentContext
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsBasicBackgroundControlContext::SetParentContext)
EXPORT_C void CAknsBasicBackgroundControlContext::SetParentContext(
    MAknsControlContext* aParentContext )
    {
    iParentContext = aParentContext;
    }

// -----------------------------------------------------------------------------
// CAknsBasicBackgroundControlContext::SupplySkinParameter
// -----------------------------------------------------------------------------
//
TInt CAknsBasicBackgroundControlContext::SupplySkinParameter(
    TAknsCCParameter /*aParam*/ )
    {
    return 0;
    }

// -----------------------------------------------------------------------------
// CAknsBasicBackgroundControlContext::SupplySkinObject
// -----------------------------------------------------------------------------
//
TAny* CAknsBasicBackgroundControlContext::SupplySkinObject(
    TAknsCCObject aObject )
    {
    switch( aObject )
        {
        case EAknsCCOBackground:
            return iLayout;
        case EAknsCCOParentContext:
            return iParentContext;
        default:
            break;
        }

    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsBasicBackgroundControlContext::IsCompatibleWithType
// -----------------------------------------------------------------------------
//
TBool CAknsBasicBackgroundControlContext::IsCompatibleWithType(
    const TAknsControlContextType aType ) const
    {
    switch( aType )
        {
        case EAknsControlContextTypeUnknown:
        case EAknsControlContextTypeBasic:
            return ETrue;

#ifdef RD_FULLSCREEN_WALLPAPER
        case EAknsControlContextTypeCombined:
#endif //RD_FULLSCREEN_WALLPAPER
        case EAknsControlContextTypeLayered:
        case EAknsControlContextTypeListBox:
        case EAknsControlContextTypeFrame:
            break;
        }

    return EFalse;
    }

//  End of File
