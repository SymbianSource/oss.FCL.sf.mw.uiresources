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
* Description:  Utility class for effects.
*
*/


// INCLUDE FILES
#include <e32base.h>

#include "AknsRlEffectUtil.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// AknsRlUtil::Median9
// -----------------------------------------------------------------------------
//
#define AKNS_RL_EFFECT_SORT(a, b) { if((a) > (b)) { temp=(a); (a) = (b); (b) = temp; } }
TUint8 AknsRlUtil::Median9( TUint8 aArray[9] )
    {
    TUint8 temp; // Defined for AKNS_RL_EFFECT_SORT macro
    AKNS_RL_EFFECT_SORT(aArray[1], aArray[2]); AKNS_RL_EFFECT_SORT(aArray[4], aArray[5]); AKNS_RL_EFFECT_SORT(aArray[7], aArray[8]);
    AKNS_RL_EFFECT_SORT(aArray[0], aArray[1]); AKNS_RL_EFFECT_SORT(aArray[3], aArray[4]); AKNS_RL_EFFECT_SORT(aArray[6], aArray[7]);
    AKNS_RL_EFFECT_SORT(aArray[1], aArray[2]); AKNS_RL_EFFECT_SORT(aArray[4], aArray[5]); AKNS_RL_EFFECT_SORT(aArray[7], aArray[8]);
    AKNS_RL_EFFECT_SORT(aArray[0], aArray[3]); AKNS_RL_EFFECT_SORT(aArray[5], aArray[8]); AKNS_RL_EFFECT_SORT(aArray[4], aArray[7]);
    AKNS_RL_EFFECT_SORT(aArray[3], aArray[6]); AKNS_RL_EFFECT_SORT(aArray[1], aArray[4]); AKNS_RL_EFFECT_SORT(aArray[2], aArray[5]);
    AKNS_RL_EFFECT_SORT(aArray[4], aArray[7]); AKNS_RL_EFFECT_SORT(aArray[4], aArray[2]); AKNS_RL_EFFECT_SORT(aArray[6], aArray[4]);
    AKNS_RL_EFFECT_SORT(aArray[4], aArray[2]);

    return(aArray[4]);
    }

// -----------------------------------------------------------------------------
// AknsRlChannelBlend::Blend
// -----------------------------------------------------------------------------
//
TUint8 AknsRlChannelBlend::Blend( const TAknsRlChannelBlendMode aMode,
                                  const TInt aFactor,
                                  const TUint8 aA,
                                  const TUint8 aB )
    {
    // Some calculations will result in negative values, res must be signed
    TInt res = 0;

    // Note: It is assumed that arithmetic shifting is supported
    // -> negative values are shifted correctly

    switch(aMode)
        {
        case EAknsRlChannelBlendNormal:
            {
            res = aB;
            }
            break;
        case EAknsRlChannelBlendDarken:
            {
            if( aA < aB )
                res = aA;
            else
                res = aB;
            }
            break;
        case EAknsRlChannelBlendLighten:
            {
            if( aA > aB )
                res = aA;
            else
                res = aB;
            }
            break;
        case EAknsRlChannelBlendMultiply:
            {
            res = ( aA * aB ) >> 8;
            }
            break;
        case EAknsRlChannelBlendScreen:
            {
            res = 255 - ((( 255 - aA ) * ( 255 - aB )) >> 8 ); //lint !e702 Arithmetic shifting assumed
            }
            break;
        case EAknsRlChannelBlendOverlay:
            {
            if( aA < 127 )
                res = 2 * (( aA * aB ) >> 8);
            else
                res = 255 - 2 * ((( 255 - aA ) * ( 255 - aB )) >> 8 ); //lint !e702 Arithmetic shifting assumed
            }
            break;
        case EAknsRlChannelBlendHardLight:
            {
            if( aB < 127 )
                res = 2 * (( aA * aB ) >> 8 );
            else
                res = 255 - 2 * ((( 255 - aA ) * ( 255 - aB )) >> 8 ); //lint !e702 Arithmetic shifting assumed
            }
            break;
        case EAknsRlChannelBlendSoftLight:
            {
            res = 2 * (( aA * aB ) >> 8 ) + (( aA * aA ) >> 8 ) - 2 * (( aA * (( aA * aB ) >> 8 )) >> 8 ); //lint !e702 Arithmetic shifting assumed
            }
            break;
        case EAknsRlChannelBlendDifference:
            {
            res = aA - aB;
            if( res < 0 )
                res = -res;
            }
            break;
        case EAknsRlChannelBlendDodge:
            {
            if( 255 == aB )
                res = 255;
            else
                {
                res = ( aA << 8 ) / ( 255 - aB );

                // Do clamping here to prevent artefacts in blending
                if( res < 0 )
                    res = 0;
                if( res > 255 )
                    res = 255;
                }
            }
            break;
        case EAknsRlChannelBlendBurn:
            {
            if( 0 == aB )
                res = 0; // This makes burn work as in Paint Shop Pro
            else
                {
                res = 255 - ((( 255 - aA ) << 8 ) / aB );

                // Do clamping here to prevent artefacts in blending
                if( res < 0 )
                    res = 0;
                if( res > 255 )
                    res = 255;
                }
            }
            break;
        default:
            break;
        }

    // Blend between result and the original value
    res = ( res * aFactor + ( 255 - aFactor ) * aA ) >> 8; //lint !e702 Arithmetic shifting assumed

    // Clamp the result to range [0, 255]
    if( res < 0 )
        return 0;
    if( res > 255 )
        return 255;

    return TUint8(res);
    }

// End of file.
