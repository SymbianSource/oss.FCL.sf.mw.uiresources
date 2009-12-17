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
* Description:  
*
*/



// INCLUDE FILES
#include "AknPictographConstants.h"
#include <e32std.h>

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknPictographAnimator::Start
// -----------------------------------------------------------------------------
//
inline void CAknPictographAnimator::Start()
    {
    iAnimatedClients++;

    if ( !iTimer->IsActive() )
        {
        iTimer->Start( 
            KAknPictographAnimationDelay,
            KAknPictographAnimationDelay,
            TCallBack( TimerCallBack, this ) );
        }
    }   

// -----------------------------------------------------------------------------
// CAknPictographAnimator::Stop
// -----------------------------------------------------------------------------
//
inline void CAknPictographAnimator::Stop()
    {
    iAnimatedClients--;

    __ASSERT_DEBUG( iAnimatedClients >= 0, User::Invariant() );

    if ( iAnimatedClients == 0 )
        {
        iTimer->Cancel();
        }
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::Counter
// -----------------------------------------------------------------------------
//
inline TUint CAknPictographAnimator::Counter()
    {
    return iCounter;
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::Bitmaps
// -----------------------------------------------------------------------------
//
inline RPointerArray<CFbsBitmap>* CAknPictographAnimator::Bitmaps()
    {
    return iBitmaps;
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::Masks
// -----------------------------------------------------------------------------
//
inline RPointerArray<CFbsBitmap>* CAknPictographAnimator::Masks()
    {
    return iMasks;
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::WhiteBitmap
// -----------------------------------------------------------------------------
//
inline CFbsBitmap* CAknPictographAnimator::WhiteBitmap()
    {
    return iWhiteBitmap;
    }

// -----------------------------------------------------------------------------
// CAknPictographAnimator::WhiteBitmapMask
// -----------------------------------------------------------------------------
//
inline CFbsBitmap* CAknPictographAnimator::WhiteBitmapMask()
    {
    return iWhiteBitmapMask;
    }


// CAknPictographAnimator::WhiteBitmapMaskGc
// -----------------------------------------------------------------------------
//
inline CFbsBitGc* CAknPictographAnimator::WhiteBitmapMaskGc()
    {
    return iWhiteBitmapMaskGc;
    }

//  End of File  
