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
* Description:  Alpha Blend provides functionality to combine masked images with
*                Porter-Duff operations.
*
*/


// INCLUDE FILES
#include "AknsRlEffectPluginAlphaBlend.h"
#include "AknsRlEffectUtil.h"
#include "AknsRlExpand.h"

// =================== INTERNAL IMPL. OF ALPHA BLEND ===========================

// "clean" Porter-Duff alpha blend implementation for reference
//TUint8 AknsRlAlphaBlend::Blend( const TAknsRlAlphaBlendMode aMode,
//                                const TUint8 aColorA,
//                                const TUint8 aAlphaA,
//                                const TUint8 aColorB,
//                                const TUint8 aAlphaB )
//    {
//    TInt colorA = (aAlphaA * aColorA) >> 8;
//    TInt colorB = (aAlphaB * aColorB) >> 8;
//
//    // No need to do clamping, results are always in range [0, 255]
//    switch(aMode)
//        {
//        case EAknsRlAlphaBlendAOverB:
//            return TUint8( colorA + ((colorB * (255 - aAlphaA)) >> 8) );
//        case EAknsRlAlphaBlendBOverA:
//            return TUint8( ((colorA * (255 - aAlphaB)) >> 8) + colorB );
//        case EAknsRlAlphaBlendAInB:
//            return TUint8( (colorA * aAlphaB) >> 8 );
//        case EAknsRlAlphaBlendBInA:
//            return TUint8( (colorB * aAlphaA) >> 8 );
//        case EAknsRlAlphaBlendAOutB:
//            return TUint8( (colorA * (255 - aAlphaB)) >> 8 );
//        case EAknsRlAlphaBlendBOutA:
//            return TUint8( (colorB * (255 - aAlphaA)) >> 8 );
//        case EAknsRlAlphaBlendAAtopB:
//            return TUint8( (colorA * (aAlphaB) + colorB * (255 - aAlphaA)) >> 8 );
//        case EAknsRlAlphaBlendBAtopA:
//            return TUint8( (colorA * (255 - aAlphaB) + colorB * (aAlphaA)) >> 8 );
//        case EAknsRlAlphaBlendAXorB:
//            return TUint8( (colorA * (255 - aAlphaB) + colorB * (255 - aAlphaA)) >> 8 );
//        default:
//            break;
//        }
//
//    return 0;
//    }

/**
* Template implementation of AlphaBlend. Pitch is the number of data elements
* to skip before moving to next line. The next parameters are passed to blend
* functions:
* aW      Bitmap width in pixels
* aH      Bitmap height in pixels
* aT      Target bitmap data address
* aPT     Target bitmap scanline pitch
* aA      Source bitmap A data address
* aPA     Source bitmap A scanline pitch
* aMA     Source bitmap A mask data address
* aPMA    Source bitmap A mask scanline pitch
* aB      Source bitmap B data address
* aPB     Source bitmap B scanline pitch
* aMB     Source bitmap B mask data address
* aPMA    Source bitmap B mask scanline pitch
*
* Inside methods local variables have the following roles:
* x   The current pixel's x position
* y   The current pixel's y position
* r   The resulting red color component
* g   The resulting green color component
* b   The resulting blue color component
* sa  Currently processed source A color component
* sb  Currently processed source B color component
* ma  Mask A value for current pixel position
* mb  Mask B value for current pixel position
* ca  A RGB color value for current pixel position
* cb  B RGB color value for current pixel position
*/
template <class T, TInt X, TInt R, TInt G, TInt B>
class AknsRlAlpha
    {
    public:

    static void AoverB( TInt aW, TInt aH, T* aT, TInt aPT,
                        const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                        const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB );

    static void BoverA( TInt aW, TInt aH, T* aT, TInt aPT,
                        const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                        const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB );

    // Bitmap B is not accessed -> aB and aPB not required
    static void AinB( TInt aW, TInt aH, T* aT, TInt aPT,
                      const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                      const TUint8* aMB, TInt aPMB );

    // Bitmap A is not accessed -> aA and aPA not required
    static void BinA( TInt aW, TInt aH, T* aT, TInt aPT,
                      const TUint8* aMA, TInt aPMA,
                      const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB );

    // Bitmap B is not accessed -> aB and aPB not required
    static void AoutB( TInt aW, TInt aH, T* aT, TInt aPT,
                       const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                       const TUint8* aMB, TInt aPMB );

    // Bitmap A is not accessed -> aA and aPA not required
    static void BoutA( TInt aW, TInt aH, T* aT, TInt aPT,
                       const TUint8* aMA, TInt aPMA,
                       const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB );

    static void AatopB( TInt aW, TInt aH, T* aT, TInt aPT,
                        const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                        const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB );

    static void BatopA( TInt aW, TInt aH, T* aT, TInt aPT,
                        const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                        const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB );

    static void AxorB( TInt aW, TInt aH, T* aT, TInt aPT,
                       const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                       const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB );
    }; // End of AknsRlAlpha

// -----------------------------------------------------------------------------
// AknsRlAlpha::AoverB
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlAlpha<T,X,R,G,B>::AoverB( TInt aW, TInt aH, T* aT, TInt aPT,
                                     const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                     const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            r = sa + ((sb * (255 - ma)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            g = sa + ((sb * (255 - ma)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            b = sa + ((sb * (255 - ma)) >> 8);

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlpha::BoverA
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlAlpha<T,X,R,G,B>::BoverA( TInt aW, TInt aH, T* aT, TInt aPT,
                                     const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                     const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            r = sb + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            g = sb + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            b = sb + ((sa * (255 - mb)) >> 8);

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlpha::AinB
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlAlpha<T,X,R,G,B>::AinB( TInt aW, TInt aH, T* aT, TInt aPT,
                                   const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                   const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint r, g, b, sa, ma, mb, ca;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            r = (sa * mb) >> 8;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            g = (sa * mb) >> 8;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            b = (sa * mb) >> 8;

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlpha::BinA
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlAlpha<T,X,R,G,B>::BinA( TInt aW, TInt aH, T* aT, TInt aPT,
                                   const TUint8* aMA, TInt aPMA,
                                   const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint r, g, b, sb, ma, mb, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; cb = *aB;

            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            r = (sb * ma) >> 8;

            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            g = (sb * ma) >> 8;

            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            b = (sb * ma) >> 8;

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aMA++; aB++; aMB++;
            }

        aT += aPT; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlpha::AoutB
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlAlpha<T,X,R,G,B>::AoutB( TInt aW, TInt aH, T* aT, TInt aPT,
                                    const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                    const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint r, g, b, sa, ma, mb, ca;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            r = (sa * (255 - mb)) >> 8;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            g = (sa * (255 - mb)) >> 8;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            b = (sa * (255 - mb)) >> 8;

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlpha::BoutA
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlAlpha<T,X,R,G,B>::BoutA( TInt aW, TInt aH, T* aT, TInt aPT,
                                    const TUint8* aMA, TInt aPMA,
                                    const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint r, g, b, sb, ma, mb, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; cb = *aB;

            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            r = (sb * (255 - ma)) >> 8;

            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            g = (sb * (255 - ma)) >> 8;

            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            b = (sb * (255 - ma)) >> 8;

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aMA++; aB++; aMB++;
            }

        aT += aPT; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlpha::AatopB
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlAlpha<T,X,R,G,B>::AatopB( TInt aW, TInt aH, T* aT, TInt aPT,
                                     const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                     const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            r = (sa * mb + sb * (255 - ma)) >> 8;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            g = (sa * mb + sb * (255 - ma)) >> 8;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            b = (sa * mb + sb * (255 - ma)) >> 8;

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlpha::BatopA
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlAlpha<T,X,R,G,B>::BatopA( TInt aW, TInt aH, T* aT, TInt aPT,
                                     const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                     const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            r = (sa * (255 - mb) + sb * ma) >> 8;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            g = (sa * (255 - mb) + sb * ma) >> 8;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            b = (sa * (255 - mb) + sb * ma) >> 8;

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlpha::AxorB
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlAlpha<T,X,R,G,B>::AxorB( TInt aW, TInt aH, T* aT, TInt aPT,
                                    const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                    const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            r = (sa * (255 - mb) + sb * (255 - ma)) >> 8;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            g = (sa * (255 - mb) + sb * (255 - ma)) >> 8;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            b = (sa * (255 - mb) + sb * (255 - ma)) >> 8;

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// ============== INTERNAL IMPL. OF GRAYSCALE ALPHA BLEND ======================
/**
* See RGB implementation above for comments.
*/
NONSHARABLE_CLASS(AknsRlAlphaGray)
    {
    public:

    static void AoverB( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                        const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                        const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB );

    static void BoverA( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                        const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                        const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB );

    static void AinB( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                      const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                      const TUint8* aMB, TInt aPMB );

    static void BinA( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                      const TUint8* aMA, TInt aPMA,
                      const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB );

    static void AoutB( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                       const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                       const TUint8* aMB, TInt aPMB );

    static void BoutA( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                       const TUint8* aMA, TInt aPMA,
                       const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB );

    static void AatopB( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                        const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                        const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB );

    static void BatopA( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                        const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                        const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB );

    static void AxorB( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                       const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                       const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB );

    }; // End of AknsRlAlphaGray

// -----------------------------------------------------------------------------
// AknsRlAlphaGray::AoverB
// -----------------------------------------------------------------------------
//
void AknsRlAlphaGray::AoverB( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                              const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                              const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB )
    {
    TInt x, y, ca;
    TUint cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ca = ((*aMA) * (*aA)) >> 8;
            cb = ((*aMB) * (*aB)) >> 8;
            *aT = ca + ((cb * (255 - (*aMA))) >> 8);
            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlphaGray::BoverA
// -----------------------------------------------------------------------------
//
void AknsRlAlphaGray::BoverA( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                              const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                              const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ca = ((*aMA) * (*aA)) >> 8;
            cb = ((*aMB) * (*aB)) >> 8;
            *aT = cb + ((ca * (255 - (*aMB))) >> 8);
            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlphaGray::AinB
// -----------------------------------------------------------------------------
//
void AknsRlAlphaGray::AinB( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                            const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                            const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint ca;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ca = ((*aMA) * (*aA)) >> 8;
            *aT = (ca * (*aMB)) >> 8;
            aT++; aA++; aMA++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlphaGray::BinA
// -----------------------------------------------------------------------------
//
void AknsRlAlphaGray::BinA( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                            const TUint8* aMA, TInt aPMA,
                            const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            cb = ((*aMB) * (*aB)) >> 8;
            *aT = (cb * (*aMA)) >> 8;
            aT++; aMA++; aB++; aMB++;
            }

        aT += aPT; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlphaGray::AoutB
// -----------------------------------------------------------------------------
//
void AknsRlAlphaGray::AoutB( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                             const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                             const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint ca;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ca = ((*aMA) * (*aA)) >> 8;
            *aT = (ca * (255 - (*aMB))) >> 8;
            aT++; aA++; aMA++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlphaGray::BoutA
// -----------------------------------------------------------------------------
//
void AknsRlAlphaGray::BoutA( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                             const TUint8* aMA, TInt aPMA,
                             const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            cb = ((*aMB) * (*aB)) >> 8;
            *aT = (cb * (255 - (*aMA))) >> 8;
            aT++; aMA++; aB++; aMB++;
            }

        aT += aPT; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlphaGray::AatopB
// -----------------------------------------------------------------------------
//
void AknsRlAlphaGray::AatopB( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                              const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                              const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ca = ((*aMA) * (*aA)) >> 8;
            cb = ((*aMB) * (*aB)) >> 8;
            *aT = (ca * (*aMB) + cb * (255 - (*aMA))) >> 8;
            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlphaGray::BatopA
// -----------------------------------------------------------------------------
//
void AknsRlAlphaGray::BatopA( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                              const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                              const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ca = ((*aMA) * (*aA)) >> 8;
            cb = ((*aMB) * (*aB)) >> 8;
            *aT = (ca * (255 - (*aMB)) + cb * (*aMA)) >> 8;
            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlAlphaGray::AxorB
// -----------------------------------------------------------------------------
//
void AknsRlAlphaGray::AxorB( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                             const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                             const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB )
    {
    TInt x, y;
    TUint ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ca = ((*aMA) * (*aA)) >> 8;
            cb = ((*aMB) * (*aB)) >> 8;
            *aT = (ca * (255 - (*aMB)) + cb * (255 - (*aMA))) >> 8;
            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAlphaBlend::CAknsRlEffectPluginAlphaBlend
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginAlphaBlend::CAknsRlEffectPluginAlphaBlend()
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginAlphaBlend::~CAknsRlEffectPluginAlphaBlend()
    {
    iContext = NULL; // Removes lint nag
    delete iScans; //lint !e1551 No exception thrown
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAlphaBlend::EffectUid
// -----------------------------------------------------------------------------
//
TUid CAknsRlEffectPluginAlphaBlend::EffectUid() const
    {
    return TUid::Uid( KAknsRlEffectPluginAlphaBlendUID );
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAlphaBlend::Effect
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsRlEffectPluginAlphaBlend::Effect( const TInt aInterface )
    {
    if( aInterface == KAknsRlEffectPluginInterfaceEffect )
        return this;
    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAlphaBlend::InitializeL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginAlphaBlend::InitializeL()
    {
    iContext = NULL;

    delete iScans;
    iScans = NULL;

    iScans = CAknsRlScanlines::NewL();
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAlphaBlend::Release
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginAlphaBlend::Release()
    {
    delete iScans;
    iScans = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAlphaBlend::ActivateL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginAlphaBlend::ActivateL( MAknsRlEffectContext* aContext )
    {
    if( !aContext ) // We absolutely need the context
        {
        User::Leave( KErrArgument );
        }

    iContext = aContext;

    iFlags = 0;

    iBlendMode = EAknsRlAlphaBlendAOverB;

    iARed   = 255;
    iAGreen = 255;
    iABlue  = 255;

    iBRed   = 255;
    iBGreen = 255;
    iBBlue  = 255;

    iAMask  = 255;
    iBMask  = 255;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAlphaBlend::Deactivate
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginAlphaBlend::Deactivate()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAlphaBlend::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginAlphaBlend::SetParametersL( MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        // Fetch blend mode values
        if( param->iName->Compare( KAknsRlEffectAlphaBlendMode ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            if( param->iNumber < EAknsRlAlphaBlendAOverB ||
                param->iNumber > EAknsRlAlphaBlendAXorB )
                User::Leave( KErrArgument );

            iBlendMode = TUint8( param->iNumber );
            }
        // Fetch Color A constant values
        else if( param->iName->Compare( KAknsRlEffectAlphaBlendARed ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantAColor );
            iARed = TUint8( param->iNumber );
            }
        else if( param->iName->Compare( KAknsRlEffectAlphaBlendAGreen ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantAColor );
            iAGreen = TUint8( param->iNumber );
            }
        else if( param->iName->Compare( KAknsRlEffectAlphaBlendABlue ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantAColor );
            iABlue = TUint8( param->iNumber );
            }
        // Fetch Color B constant values
        else if( param->iName->Compare( KAknsRlEffectAlphaBlendBRed ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantBColor );
            iBRed = TUint8( param->iNumber );
            }
        else if( param->iName->Compare( KAknsRlEffectAlphaBlendBGreen ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantBColor );
            iBGreen = TUint8( param->iNumber );
            }
        else if( param->iName->Compare( KAknsRlEffectAlphaBlendBBlue ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantBColor );
            iBBlue = TUint8( param->iNumber );
            }
        // Fetch Mask A constant value
        else if( param->iName->Compare( KAknsRlEffectAlphaBlendAMask ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantAMask );
            iAMask = TUint8( param->iNumber );
            }
        // Fetch Mask B constant value
        else if( param->iName->Compare( KAknsRlEffectAlphaBlendBMask ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantBMask );
            iBMask = TUint8( param->iNumber );
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAlphaBlend::GetCapabilities
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginAlphaBlend::GetCapabilities( TAknsRlEffectCaps& aCaps )
    {
    // In all cases we can handle RGBOnly and RGBA output layers (alpha is
    // simply cleared to white if it exists).
    aCaps.iOutputLayerSupport = KAknsRlLayerRGBOnly | KAknsRlLayerRGBA;

    // In all cases we can handle RGBA input layers.
    aCaps.iInputLayerASupport = KAknsRlLayerRGBA;
    aCaps.iInputLayerBSupport = KAknsRlLayerRGBA;

    // If mask is constant we can handle RGBOnly as input layer
    if( iFlags & EConstantAMask )
        aCaps.iInputLayerASupport = aCaps.iInputLayerASupport | KAknsRlLayerRGBOnly;

    if( iFlags & EConstantBMask )
        aCaps.iInputLayerBSupport = aCaps.iInputLayerBSupport | KAknsRlLayerRGBOnly;

    // If both mask and color are constant we can handle None as input layer
    if( (iFlags & EConstantAMask) && (iFlags & EConstantAColor) )
        aCaps.iInputLayerASupport = aCaps.iInputLayerASupport | KAknsRlLayerNone;

    if( (iFlags & EConstantBMask) && (iFlags & EConstantBColor) )
        aCaps.iInputLayerBSupport = aCaps.iInputLayerBSupport | KAknsRlLayerNone;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAlphaBlend::Render
// -----------------------------------------------------------------------------
//
TInt CAknsRlEffectPluginAlphaBlend::Render( const TAknsRlRenderOpParam& aParam )
    {
    TRAPD( err, DoRenderL( aParam ) );
    return err;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginAlphaBlend::DoRenderL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginAlphaBlend::DoRenderL( const TAknsRlRenderOpParam& aParam )
    {
    if( !iContext ) // We absolutely need the context
        {
        User::Leave( KErrBadHandle );
        }

    //---------------------------------
    // Step 1: Prepare layer query

    // In some cases involving constants we need not to query layer A or B
    TBool queryA = EFalse;
    TBool queryB = EFalse;

    // If constants are not defined we need to query both A and B
    if( 0 == iFlags )
        {
        queryA = ETrue;
        queryB = ETrue;
        }
    else // Constant flags were defined, queries may depend on constants
        {
        // No need to query A if constant color and constant mask are used
        if( ( iFlags & EConstantAColor ) && ( iFlags & EConstantAMask ) )
            queryA = EFalse;
        else
            queryA = ETrue;

        // No need to query B if constant color and constant mask are used
        if( ( iFlags & EConstantBColor ) && ( iFlags & EConstantBMask ) )
            queryB = EFalse;
        else
            queryB = ETrue;
        }

    //---------------------------------
    // Step 2: Do layer query

    TAknsRlLayerData dataT;
    TAknsRlLayerData dataA;
    TAknsRlLayerData dataB;

    TDisplayMode modeT = ENone;
    TDisplayMode modeA = ENone;
    TDisplayMode modeB = ENone;

    // We need to query the output layer in any case
    if( !( ( aParam.iOutputLayerStatus & KAknsRlLayerRGBOnly ) ||
           ( aParam.iOutputLayerStatus & KAknsRlLayerRGBA ) ) )
        User::Leave( KErrArgument ); // The output must be some sort of RGB layer

    iContext->GetLayerDataL( dataT, aParam.iOutputLayerIndex,
                             aParam.iOutputLayerStatus, EFalse );

    if( !dataT.iRGBBitmap ) // The target bitmap must exist
        User::Leave( KErrBadHandle );

    modeT = dataT.iRGBBitmap->DisplayMode();

    // Check for non-supported display modes
    if( modeT != EColor64K && modeT != EColor16MU && modeT != EGray256 )
        User::Leave( KErrArgument );

    // Query layer A
    if( queryA )
        {
        iContext->GetLayerDataL( dataA, aParam.iInputLayerAIndex,
                                 aParam.iInputLayerAStatus, EFalse );

        // If we don't use constant color A check that the bitmap is ok
        if( !( iFlags & EConstantAColor ) )
            {
            if( !dataA.iRGBBitmap ) // We need the bitmap A
                User::Leave( KErrBadHandle );

            modeA = dataA.iRGBBitmap->DisplayMode();

            if( modeT != modeA ) // Display mode must match target
                User::Leave( KErrArgument );
            }
        }

    // Query layer B
    if( queryB )
        {
        iContext->GetLayerDataL( dataB, aParam.iInputLayerBIndex,
                                 aParam.iInputLayerBStatus, EFalse );

        // If we don't use constant color B check that the bitmap is ok
        if( !( iFlags & EConstantBColor ) )
            {
            if( !dataB.iRGBBitmap ) // We need the bitmap B
                User::Leave( KErrBadHandle );

            modeB = dataB.iRGBBitmap->DisplayMode();

            if( modeT != modeB ) // Display mode must match target
                User::Leave( KErrArgument );
            }
        }

    // Check that alpha bitmaps are ok
    if( !( iFlags & EConstantAMask ) )
        {
        if( !dataA.iAlphaBitmap ) // We need the mask A bitmap
            User::Leave( KErrBadHandle );

        if( EGray256 != dataA.iAlphaBitmap->DisplayMode() )
            User::Leave( KErrArgument );
        }

    if( !( iFlags & EConstantBMask ) )
        {
        if( !dataB.iAlphaBitmap ) // We need the mask B bitmap
            User::Leave( KErrBadHandle );

        if( EGray256 != dataB.iAlphaBitmap->DisplayMode() )
            User::Leave( KErrArgument );
        }

    // If we got this far:
    // 1. We know used display mode, same on all layers
    // 2. Relevant layers have been queried and are ready to be used
    // 3. Alpha bitmaps are ok (if needed)

    // Clear the target alpha if it exists
    if( dataT.iAlphaGc )
        {
        dataT.iAlphaGc->SetBrushColor( KRgbWhite );
        dataT.iAlphaGc->Clear();
        }

    TSize size = dataT.iRGBBitmap->SizeInPixels();

    // Lock the global bitmap heap
    dataT.iRGBBitmap->LockHeap( ETrue );
    CleanupStack::PushL( TCleanupItem( AknsRlLockCleanup, dataT.iRGBBitmap ) );

    // Leaves are ok because the cleanup item will take care of unlocking the
    // bitmap heap.

    // Mask scanlines are the same for all color modes, we can prepare them
    // here
    if ( !iScans )
        {
        User::Leave( KErrNotReady );
        }
    if( iFlags & EConstantAMask ) // MA is a constant
        {
        iScans->Config8L( AknsRlIMA, size.iWidth, iAMask );
        }
    else // MA is bitmap
        {
        iScans->Config8L( AknsRlIMA, size.iWidth, *dataA.iAlphaBitmap );
        }

    if( iFlags & EConstantBMask ) // MB is a constant
        {
        iScans->Config8L( AknsRlIMB, size.iWidth, iBMask );
        }
    else // MB is bitmap
        {
        iScans->Config8L( AknsRlIMB, size.iWidth, *dataB.iAlphaBitmap );
        }

    //---------------------------
    // Step 3: Process the filter
    if( EColor64K == modeT )
        {
        TUint16* ptrT = NULL; TInt pitchT = 0;

        // Target is always bitmap
        BitmapData( *dataT.iRGBBitmap, size.iWidth, ptrT, pitchT );

        if( iFlags & EConstantAColor ) // A is a constant
            {
            TUint16 color;
            AknsRlRgb<TUint16,0,5,6,5>::SetRgb8( &color, iARed, iAGreen, iABlue );
            iScans->Config16L( AknsRlIA, size.iWidth, color );
            }
        else // A is bitmap
            {
            iScans->Config16L( AknsRlIA, size.iWidth, *dataA.iRGBBitmap );
            }

        if( iFlags & EConstantBColor ) // B is a constant
            {
            TUint16 color;
            AknsRlRgb<TUint16,0,5,6,5>::SetRgb8( &color, iBRed, iBGreen, iBBlue );
            iScans->Config16L( AknsRlIB, size.iWidth, color );
            }
        else // B is bitmap
            {
            iScans->Config16L( AknsRlIB, size.iWidth, *dataB.iRGBBitmap );
            }

        typedef AknsRlAlpha<TUint16,0,5,6,5> Alpha16; // For brevity

        switch( iBlendMode )
            {
            case EAknsRlAlphaBlendAOverB:
                Alpha16::AoverB( size.iWidth, size.iHeight, ptrT, pitchT,
                                 iScans->Mem16(AknsRlIA), iScans->Pitch(AknsRlIA),
                                 iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                 iScans->Mem16(AknsRlIB), iScans->Pitch(AknsRlIB),
                                 iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendBOverA:
                Alpha16::BoverA( size.iWidth, size.iHeight, ptrT, pitchT,
                                 iScans->Mem16(AknsRlIA), iScans->Pitch(AknsRlIA),
                                 iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                 iScans->Mem16(AknsRlIB), iScans->Pitch(AknsRlIB),
                                 iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendAInB:
                Alpha16::AinB( size.iWidth, size.iHeight, ptrT, pitchT,
                               iScans->Mem16(AknsRlIA), iScans->Pitch(AknsRlIA),
                               iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                               iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendBInA:
                Alpha16::BinA( size.iWidth, size.iHeight, ptrT, pitchT,
                               iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                               iScans->Mem16(AknsRlIB), iScans->Pitch(AknsRlIB),
                               iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendAOutB:
                Alpha16::AoutB( size.iWidth, size.iHeight, ptrT, pitchT,
                                iScans->Mem16(AknsRlIA), iScans->Pitch(AknsRlIA),
                                iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendBOutA:
                Alpha16::BoutA( size.iWidth, size.iHeight, ptrT, pitchT,
                                iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                iScans->Mem16(AknsRlIB), iScans->Pitch(AknsRlIB),
                                iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendAAtopB:
                Alpha16::AatopB( size.iWidth, size.iHeight, ptrT, pitchT,
                                 iScans->Mem16(AknsRlIA), iScans->Pitch(AknsRlIA),
                                 iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                 iScans->Mem16(AknsRlIB), iScans->Pitch(AknsRlIB),
                                 iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendBAtopA:
                Alpha16::BatopA( size.iWidth, size.iHeight, ptrT, pitchT,
                                 iScans->Mem16(AknsRlIA), iScans->Pitch(AknsRlIA),
                                 iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                 iScans->Mem16(AknsRlIB), iScans->Pitch(AknsRlIB),
                                 iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendAXorB:
                Alpha16::AxorB( size.iWidth, size.iHeight, ptrT, pitchT,
                                iScans->Mem16(AknsRlIA), iScans->Pitch(AknsRlIA),
                                iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                iScans->Mem16(AknsRlIB), iScans->Pitch(AknsRlIB),
                                iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            default:
                break;
            }
        }
    else if( EColor16MU == modeT )
        {
        TUint32* ptrT = NULL; TInt pitchT = 0;

        // Target is always bitmap
        BitmapData( *dataT.iRGBBitmap, size.iWidth, ptrT, pitchT );

        if( iFlags & EConstantAColor ) // A is a constant
            {
            TUint32 color;
            AknsRlRgb<TUint32,8,8,8,8>::SetRgb8( &color, iARed, iAGreen, iABlue );
            iScans->Config32L( AknsRlIA, size.iWidth, color );
            }
        else // A is bitmap
            {
            iScans->Config32L( AknsRlIA, size.iWidth, *dataA.iRGBBitmap );
            }

        if( iFlags & EConstantBColor ) // B is a constant
            {
            TUint32 color;
            AknsRlRgb<TUint32,8,8,8,8>::SetRgb8( &color, iBRed, iBGreen, iBBlue );
            iScans->Config32L( AknsRlIB, size.iWidth, color );
            }
        else // B is bitmap
            {
            iScans->Config32L( AknsRlIB, size.iWidth, *dataB.iRGBBitmap );
            }

        typedef AknsRlAlpha<TUint32,8,8,8,8> Alpha32; // For brevity

        switch( iBlendMode )
            {
            case EAknsRlAlphaBlendAOverB:
                Alpha32::AoverB( size.iWidth, size.iHeight, ptrT, pitchT,
                                 iScans->Mem32(AknsRlIA), iScans->Pitch(AknsRlIA),
                                 iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                 iScans->Mem32(AknsRlIB), iScans->Pitch(AknsRlIB),
                                 iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendBOverA:
                Alpha32::BoverA( size.iWidth, size.iHeight, ptrT, pitchT,
                                 iScans->Mem32(AknsRlIA), iScans->Pitch(AknsRlIA),
                                 iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                 iScans->Mem32(AknsRlIB), iScans->Pitch(AknsRlIB),
                                 iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendAInB:
                Alpha32::AinB( size.iWidth, size.iHeight, ptrT, pitchT,
                               iScans->Mem32(AknsRlIA), iScans->Pitch(AknsRlIA),
                               iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                               iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendBInA:
                Alpha32::BinA( size.iWidth, size.iHeight, ptrT, pitchT,
                               iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                               iScans->Mem32(AknsRlIB), iScans->Pitch(AknsRlIB),
                               iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendAOutB:
                Alpha32::AoutB( size.iWidth, size.iHeight, ptrT, pitchT,
                                iScans->Mem32(AknsRlIA), iScans->Pitch(AknsRlIA),
                                iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendBOutA:
                Alpha32::BoutA( size.iWidth, size.iHeight, ptrT, pitchT,
                                iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                iScans->Mem32(AknsRlIB), iScans->Pitch(AknsRlIB),
                                iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendAAtopB:
                Alpha32::AatopB( size.iWidth, size.iHeight, ptrT, pitchT,
                                 iScans->Mem32(AknsRlIA), iScans->Pitch(AknsRlIA),
                                 iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                 iScans->Mem32(AknsRlIB), iScans->Pitch(AknsRlIB),
                                 iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendBAtopA:
                Alpha32::BatopA( size.iWidth, size.iHeight, ptrT, pitchT,
                                 iScans->Mem32(AknsRlIA), iScans->Pitch(AknsRlIA),
                                 iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                 iScans->Mem32(AknsRlIB), iScans->Pitch(AknsRlIB),
                                 iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendAXorB:
                Alpha32::AxorB( size.iWidth, size.iHeight, ptrT, pitchT,
                                iScans->Mem32(AknsRlIA), iScans->Pitch(AknsRlIA),
                                iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                iScans->Mem32(AknsRlIB), iScans->Pitch(AknsRlIB),
                                iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            default:
                break;
            }
        }
    else if( EGray256 == modeT )
        {
        TUint8* ptrT = NULL; TInt pitchT = 0;

        // Target is always bitmap
        BitmapData( *dataT.iRGBBitmap, size.iWidth, ptrT, pitchT );

        if( iFlags & EConstantAColor ) // A is a constant
            {
            iScans->Config8L( AknsRlIA, size.iWidth,
                              AknsRlUtil::Grayscale( iARed, iAGreen, iABlue ) );
            }
        else // A is bitmap
            {
            iScans->Config8L( AknsRlIA, size.iWidth, *dataA.iRGBBitmap );
            }

        if( iFlags & EConstantBColor ) // B is a constant
            {
            iScans->Config8L( AknsRlIB, size.iWidth,
                              AknsRlUtil::Grayscale( iBRed, iBGreen, iBBlue ) );
            }
        else // B is bitmap
            {
            iScans->Config8L( AknsRlIB, size.iWidth, *dataB.iRGBBitmap );
            }

        typedef AknsRlAlphaGray AlphaG; // For brevity

        switch( iBlendMode )
            {
            case EAknsRlAlphaBlendAOverB:
                AlphaG::AoverB( size.iWidth, size.iHeight, ptrT, pitchT,
                                iScans->Mem8(AknsRlIA), iScans->Pitch(AknsRlIA),
                                iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                iScans->Mem8(AknsRlIB), iScans->Pitch(AknsRlIB),
                                iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendBOverA:
                AlphaG::BoverA( size.iWidth, size.iHeight, ptrT, pitchT,
                                iScans->Mem8(AknsRlIA), iScans->Pitch(AknsRlIA),
                                iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                iScans->Mem8(AknsRlIB), iScans->Pitch(AknsRlIB),
                                iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendAInB:
                AlphaG::AinB( size.iWidth, size.iHeight, ptrT, pitchT,
                              iScans->Mem8(AknsRlIA), iScans->Pitch(AknsRlIA),
                              iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                              iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendBInA:
                AlphaG::BinA( size.iWidth, size.iHeight, ptrT, pitchT,
                              iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                              iScans->Mem8(AknsRlIB), iScans->Pitch(AknsRlIB),
                              iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendAOutB:
                AlphaG::AoutB( size.iWidth, size.iHeight, ptrT, pitchT,
                               iScans->Mem8(AknsRlIA), iScans->Pitch(AknsRlIA),
                               iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                               iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendBOutA:
                AlphaG::BoutA( size.iWidth, size.iHeight, ptrT, pitchT,
                               iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                               iScans->Mem8(AknsRlIB), iScans->Pitch(AknsRlIB),
                               iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendAAtopB:
                AlphaG::AatopB( size.iWidth, size.iHeight, ptrT, pitchT,
                                iScans->Mem8(AknsRlIA), iScans->Pitch(AknsRlIA),
                                iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                iScans->Mem8(AknsRlIB), iScans->Pitch(AknsRlIB),
                                iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendBAtopA:
                AlphaG::BatopA( size.iWidth, size.iHeight, ptrT, pitchT,
                                iScans->Mem8(AknsRlIA), iScans->Pitch(AknsRlIA),
                                iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                                iScans->Mem8(AknsRlIB), iScans->Pitch(AknsRlIB),
                                iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            case EAknsRlAlphaBlendAXorB:
                AlphaG::AxorB( size.iWidth, size.iHeight, ptrT, pitchT,
                               iScans->Mem8(AknsRlIA), iScans->Pitch(AknsRlIA),
                               iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                               iScans->Mem8(AknsRlIB), iScans->Pitch(AknsRlIB),
                               iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB) );
                break;
            default:
                break;
            }
        }

    CleanupStack::Pop(); // Heap lock cleanup item

    // Unlock the global bitmap heap
    dataT.iRGBBitmap->UnlockHeap( ETrue );
    }

// End of File
