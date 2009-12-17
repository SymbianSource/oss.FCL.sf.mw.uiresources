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
* Description:  Static pictograph definition key used for binary search.
*
*/


// INCLUDE FILES
#include    "AknStaticPictographDefKey.h"
#include    "AknPictographFactory.h"
#include    <e32std.h>

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// Constructor
// -----------------------------------------------------------------------------
//
TAknStaticPictographDefKey::TAknStaticPictographDefKey() :
    TKey( _FOFF( TAknStaticPictographDefinition, iCode ), ECmpTUint16 )
    {
    }

// -----------------------------------------------------------------------------
// TAknStaticPictographDefKey::At
// Implements At() according to the protocol.
// -----------------------------------------------------------------------------
//
TAny* TAknStaticPictographDefKey::At( TInt aIndex ) const
    {
    const TUint8* ret;
    if ( aIndex == KIndexPtr )
        {
        ret = reinterpret_cast<const TUint8*>( iPtr );
        }
    else
        {
        ret = reinterpret_cast<const TUint8*>( 
            &( AknPictographFactory::StaticPictographTable()[aIndex] ) );
        }
    ret += iKeyOffset;
    return const_cast<TUint8*>( ret );
    }

//  End of File  
