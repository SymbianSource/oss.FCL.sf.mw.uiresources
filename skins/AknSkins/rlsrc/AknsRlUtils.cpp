/*
* Copyright (c) 2005-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Rendering library static utility class.
*
*/


// INCLUDE FILES
#include "AknsRlUtils.h"

#include <AknUtils.h>
#include <skinlayout.cdl.h>
#include <AknsSkinInstance.h>
#include <AknsConstants.h>

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// AknsRlUtils::IsPopupCenter
// -----------------------------------------------------------------------------
//
EXPORT_C TBool AknsRlUtils::IsPopupCenter( const TAknsItemID& aIID )
    {
    if( (aIID == KAknsIIDQsnFrPopupCenter)
        || (aIID == KAknsIIDQsnFrPopupCenterMenu)
        || (aIID == KAknsIIDQsnFrPopupCenterNote)
        || (aIID == KAknsIIDQsnFrPopupCenterQuery)
        || (aIID == KAknsIIDQsnFrPopupCenterFind)
        || (aIID == KAknsIIDQsnFrPopupCenterSnote)
        || (aIID == KAknsIIDQsnFrPopupCenterFswap) )
        {
        return ETrue;
        }

    return EFalse;
    }

// -----------------------------------------------------------------------------
// AknsRlUtils::GetPopupFrameDimensions
// -----------------------------------------------------------------------------
//
EXPORT_C void AknsRlUtils::GetPopupFrameDimensions(
    TSize& aTlSize, TSize& aBrSize )
    {
    // This parent is imaginary, we are just interested in frame corner
    // dimensions
    TRect imaginaryParent( 0, 0, 1024, 1024 );

    TAknLayoutRect topLeft;
    topLeft.LayoutRect( imaginaryParent,
        SkinLayout::Popup_windows_skin_placing__frame_general__Line_2());

    TAknLayoutRect bottomRight;
    bottomRight.LayoutRect( imaginaryParent,
        SkinLayout::Popup_windows_skin_placing__frame_general__Line_5());

    aTlSize = topLeft.Rect().Size();
    aBrSize = bottomRight.Rect().Size();
    }

// End of File
