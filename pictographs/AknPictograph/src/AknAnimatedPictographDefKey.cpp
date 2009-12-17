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
* Description:  Animated pictograph definition key used for binary search.
*
*/


// INCLUDE FILES
#include    "AknAnimatedPictographDefKey.h"
#include    "AknPictographFactory.h"
#include    <e32std.h>

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// Constructor
// -----------------------------------------------------------------------------
//
TAknAnimatedPictographDefKey::TAknAnimatedPictographDefKey() :
    TKey( _FOFF( TAknAnimatedPictographDefinition, iCode ), ECmpTUint16 )
    {
    }

// -----------------------------------------------------------------------------
// TAknAnimatedPictographDefKey::At
// Implements At() according to the protocol.
// -----------------------------------------------------------------------------
//
TAny* TAknAnimatedPictographDefKey::At( TInt aIndex ) const
    {
    const TUint8* ret;
    if ( aIndex == KIndexPtr )
        {
        ret = reinterpret_cast<const TUint8*>( iPtr );
        }
    else
        {
        ret = reinterpret_cast<const TUint8*>( 
            &( AknPictographFactory::AnimatedPictographTable()[aIndex] ) );
        }
    ret += iKeyOffset;
    return const_cast<TUint8*>( ret );
    }

//  End of File  
