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
* Description:  ChannelBlend provides functionality to combine bitmaps arithmetically.
*
*/


// INCLUDE FILES
#include "AknsRlEffectPluginChannelBlend.h"
#include "AknsRlEffectUtil.h"
#include "AknsRlExpand.h"

// ==================== TEMPLATE IMPL. OF CHANNEL BLEND ========================
/**
* Template implementation of ChannelBlend. It is assumed that arithmetic
* shifting is supported -> negative values are shifted correctly. Pitch is the
* number of data elements to skip before moving to next line. Note that all
* non-masked cases are also done with the alpha blended version (masks are
* constants in that case).
*
* The next parameters are passed to blend functions:
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
* aFactor The blend factor between A and B on the output.
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
class AknsRlBlend
    {
    public:
    static void Normal( TInt aW, TInt aH, T* aT, TInt aPT,
                        const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                        const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                        TInt aFactor );

    static void Darken( TInt aW, TInt aH, T* aT, TInt aPT,
                        const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                        const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                        TInt aFactor );

    static void Lighten( TInt aW, TInt aH, T* aT, TInt aPT,
                         const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                         const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                         TInt aFactor );

    static void Multiply( TInt aW, TInt aH, T* aT, TInt aPT,
                          const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                          const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                          TInt aFactor );

    static void Screen( TInt aW, TInt aH, T* aT, TInt aPT,
                        const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                        const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                        TInt aFactor );

    static void Overlay( TInt aW, TInt aH, T* aT, TInt aPT,
                         const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                         const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                         TInt aFactor );

    static void HardLight( TInt aW, TInt aH, T* aT, TInt aPT,
                           const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                           const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                           TInt aFactor );

    static void SoftLight( TInt aW, TInt aH, T* aT, TInt aPT,
                           const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                           const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                           TInt aFactor );

    static void Difference( TInt aW, TInt aH, T* aT, TInt aPT,
                            const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                            const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                            TInt aFactor );

    static void Dodge( TInt aW, TInt aH, T* aT, TInt aPT,
                       const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                       const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                       TInt aFactor );

    static void Burn( TInt aW, TInt aH, T* aT, TInt aPT,
                      const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                      const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                      TInt aFactor );
    };

// -----------------------------------------------------------------------------
// AknsRlBlend::Normal
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlBlend<T,X,R,G,B>::Normal( TInt aW, TInt aH, T* aT, TInt aPT,
                                     const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                     const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                     TInt aFactor )
    {
    TInt x, y, r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            r = ( sb * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            // AlphaBlend red (BoverA)
            r = ((mb * r)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            g = ( sb * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            // AlphaBlend green (BoverA)
            g = ((mb * g)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            b = ( sb * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;
            // AlphaBlend blue (BoverA)
            b = ((mb * b)>>8) + ((sa * (255 - mb)) >> 8);

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlBlend::Darken
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlBlend<T,X,R,G,B>::Darken( TInt aW, TInt aH, T* aT, TInt aPT,
                                     const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                     const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                     TInt aFactor )
    {
    TInt x, y, r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            if( sa < sb )
                r = ( sa * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                r = ( sb * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            // AlphaBlend red (BoverA)
            r = ((mb * r)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            if( sa < sb )
                g = ( sa * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                g = ( sb * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            // AlphaBlend green (BoverA)
            g = ((mb * g)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            if( sa < sb )
                b = ( sa * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                b = ( sb * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;
            // AlphaBlend blue (BoverA)
            b = ((mb * b)>>8) + ((sa * (255 - mb)) >> 8);

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlBlend::Lighten
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlBlend<T,X,R,G,B>::Lighten( TInt aW, TInt aH, T* aT, TInt aPT,
                                      const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                      const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                      TInt aFactor )
    {
    TInt x, y, r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            if( sa > sb )
                r = ( sa * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                r = ( sb * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            // AlphaBlend red (BoverA)
            r = ((mb * r)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            if( sa > sb )
                g = ( sa * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                g = ( sb * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            // AlphaBlend green (BoverA)
            g = ((mb * g)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            if( sa > sb )
                b = ( sa * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                b = ( sb * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;
            // AlphaBlend blue (BoverA)
            b = ((mb * b)>>8) + ((sa * (255 - mb)) >> 8);

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlBlend::Multiply
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlBlend<T,X,R,G,B>::Multiply( TInt aW, TInt aH, T* aT, TInt aPT,
                                       const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                       const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                       TInt aFactor )
    {
    TInt x, y, r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            r = ( (( sa * sb ) >> 8) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            // AlphaBlend red (BoverA)
            r = ((mb * r)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            g = ( (( sa * sb ) >> 8) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            // AlphaBlend green (BoverA)
            g = ((mb * g)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            b = ( (( sa * sb ) >> 8) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;
            // AlphaBlend blue (BoverA)
            b = ((mb * b)>>8) + ((sa * (255 - mb)) >> 8);

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlBlend::Screen
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlBlend<T,X,R,G,B>::Screen( TInt aW, TInt aH, T* aT, TInt aPT,
                                     const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                     const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                     TInt aFactor )
    {
    TInt x, y, r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            r = ( (255 - ((( 255 - sa ) * ( 255 - sb )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            // AlphaBlend red (BoverA)
            r = ((mb * r)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            g = ( (255 - ((( 255 - sa ) * ( 255 - sb )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            // AlphaBlend green (BoverA)
            g = ((mb * g)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            b = ( (255 - ((( 255 - sa ) * ( 255 - sb )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;
            // AlphaBlend blue (BoverA)
            b = ((mb * b)>>8) + ((sa * (255 - mb)) >> 8);

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlBlend::Overlay
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlBlend<T,X,R,G,B>::Overlay( TInt aW, TInt aH, T* aT, TInt aPT,
                                      const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                      const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                      TInt aFactor )
    {
    TInt x, y, r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            if( sa < 127 )
                r = ( (2 * (( sa * sb ) >> 8)) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                r = ( (255 - 2 * ((( 255 - sa ) * ( 255 - sb )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            // AlphaBlend red (BoverA)
            r = ((mb * r)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            if( sa < 127 )
                g = ( (2 * (( sa * sb ) >> 8)) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                g = ( (255 - 2 * ((( 255 - sa ) * ( 255 - sb )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            // AlphaBlend green (BoverA)
            g = ((mb * g)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            if( sa < 127 )
                b = ( (2 * (( sa * sb ) >> 8)) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                b = ( (255 - 2 * ((( 255 - sa ) * ( 255 - sb )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;
            // AlphaBlend blue (BoverA)
            b = ((mb * b)>>8) + ((sa * (255 - mb)) >> 8);

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlBlend::HardLight
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlBlend<T,X,R,G,B>::HardLight( TInt aW, TInt aH, T* aT, TInt aPT,
                                        const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                        const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                        TInt aFactor )
    {
    TInt x, y, r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            if( sb < 127 )
                r = ( (2 * (( sa * sb ) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                r = ( (255 - 2 * ((( 255 - sa ) * ( 255 - sb )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            // AlphaBlend red (BoverA)
            r = ((mb * r)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            if( sb < 127 )
                g = ( (2 * (( sa * sb ) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                g = ( (255 - 2 * ((( 255 - sa ) * ( 255 - sb )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            // AlphaBlend green (BoverA)
            g = ((mb * g)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            if( sb < 127 )
                b = ( (2 * (( sa * sb ) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                b = ( (255 - 2 * ((( 255 - sa ) * ( 255 - sb )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;
            // AlphaBlend blue (BoverA)
            b = ((mb * b)>>8) + ((sa * (255 - mb)) >> 8);

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlBlend::SoftLight
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlBlend<T,X,R,G,B>::SoftLight( TInt aW, TInt aH, T* aT, TInt aPT,
                                        const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                        const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                        TInt aFactor )
    {
    TInt x, y, r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            r = ( (2 * (( sa * sb ) >> 8 ) + (( sa * sa ) >> 8 ) - 2 * (( sa * (( sa * sb ) >> 8 )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            // AlphaBlend red (BoverA)
            r = ((mb * r)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            g = ( (2 * (( sa * sb ) >> 8 ) + (( sa * sa ) >> 8 ) - 2 * (( sa * (( sa * sb ) >> 8 )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            // AlphaBlend green (BoverA)
            g = ((mb * g)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            b = ( (2 * (( sa * sb ) >> 8 ) + (( sa * sa ) >> 8 ) - 2 * (( sa * (( sa * sb ) >> 8 )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;
            // AlphaBlend blue (BoverA)
            b = ((mb * b)>>8) + ((sa * (255 - mb)) >> 8);

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlBlend::Difference
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlBlend<T,X,R,G,B>::Difference( TInt aW, TInt aH, T* aT, TInt aPT,
                                         const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                         const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                         TInt aFactor )
    {
    TInt x, y, r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            r = ( (sa - sb) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( r < 0 ) r = -r;
            if( r > 255 ) r = 255;
            // AlphaBlend red (BoverA)
            r = ((mb * r)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            g = ( (sa - sb) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( g < 0 ) g = -g;
            if( g > 255 ) g = 255;
            // AlphaBlend green (BoverA)
            g = ((mb * g)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            b = ( (sa - sb) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( b < 0 ) b = -b;
            if( b > 255 ) b = 255;
            // AlphaBlend blue (BoverA)
            b = ((mb * b)>>8) + ((sa * (255 - mb)) >> 8);

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }

    }

// -----------------------------------------------------------------------------
// AknsRlBlend::Dodge
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlBlend<T,X,R,G,B>::Dodge( TInt aW, TInt aH, T* aT, TInt aPT,
                                    const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                    const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                    TInt aFactor )
    {
    TInt x, y, r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            if( 255 == sb )
                r = ( 255 * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                {
                r = ( sa << 8 ) / ( 255 - sb );
                if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
                r = ( r * aFactor + ( 255 - aFactor ) * sa ) >> 8;
                }
            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            // AlphaBlend red (BoverA)
            r = ((mb * r)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            if( 255 == sb )
                g = ( 255 * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                {
                g = ( sa << 8 ) / ( 255 - sb );
                if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
                g = ( g * aFactor + ( 255 - aFactor ) * sa ) >> 8;
                }
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            // AlphaBlend green (BoverA)
            g = ((mb * g)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            if( 255 == sb )
                b = ( 255 * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                {
                b = ( sa << 8 ) / ( 255 - sb );
                if( b < 0 ) b = 0; else if( b > 255 ) b = 255;
                b = ( b * aFactor + ( 255 - aFactor ) * sa ) >> 8;
                }
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;
            // AlphaBlend blue (BoverA)
            b = ((mb * b)>>8) + ((sa * (255 - mb)) >> 8);

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// -----------------------------------------------------------------------------
// AknsRlBlend::Burn
// -----------------------------------------------------------------------------
//
template <class T, TInt X, TInt R, TInt G, TInt B>
void AknsRlBlend<T,X,R,G,B>::Burn( TInt aW, TInt aH, T* aT, TInt aPT,
                                   const T* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                   const T* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                   TInt aFactor )
    {
    TInt x, y, r, g, b, sa, sb, ma, mb, ca, cb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB; ca = *aA; cb = *aB;

            sa = (ma * AknsRlRgb<T,X,R,G,B>::R8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::R8(cb)) >> 8;
            if( 0 == sb )
                r = 0; // This makes burn work as in Paint Shop Pro
            else
                {
                r = 255 - ((( 255 - sa ) << 8 ) / sb );
                if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
                r = ( r * aFactor + ( 255 - aFactor ) * sa ) >> 8;
                }
            if( r < 0 ) r = 0; else if( r > 255 ) r = 255;
            // AlphaBlend red (BoverA)
            r = ((mb * r)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::G8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::G8(cb)) >> 8;
            if( 0 == sb )
                g = 0; // This makes burn work as in Paint Shop Pro
            else
                {
                g = 255 - ((( 255 - sa ) << 8 ) / sb );
                if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
                g = ( g * aFactor + ( 255 - aFactor ) * sa ) >> 8;
                }
            if( g < 0 ) g = 0; else if( g > 255 ) g = 255;
            // AlphaBlend green (BoverA)
            g = ((mb * g)>>8) + ((sa * (255 - mb)) >> 8);

            sa = (ma * AknsRlRgb<T,X,R,G,B>::B8(ca)) >> 8;
            sb = (mb * AknsRlRgb<T,X,R,G,B>::B8(cb)) >> 8;
            if( 0 == sb )
                b = 0; // This makes burn work as in Paint Shop Pro
            else
                {
                b = 255 - ((( 255 - sa ) << 8 ) / sb );
                if( b < 0 ) b = 0; else if( b > 255 ) b = 255;
                b = ( b * aFactor + ( 255 - aFactor ) * sa ) >> 8;
                }
            if( b < 0 ) b = 0; else if( b > 255 ) b = 255;
            // AlphaBlend blue (BoverA)
            b = ((mb * b)>>8) + ((sa * (255 - mb)) >> 8);

            AknsRlRgb<T,X,R,G,B>::SetRgb8( aT, r, g, b );

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    }

// ==================== GRAYSCALE IMPL. OF CHANNEL BLEND =======================
/**
* See RGB implementation above for comments.
*/
NONSHARABLE_CLASS(AknsRlBlendGray)
    {
    public:
    static void Normal( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                        const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                        const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                        TInt aFactor );

    static void Darken( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                        const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                        const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                        TInt aFactor );

    static void Lighten( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                         const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                         const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                         TInt aFactor );

    static void Multiply( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                          const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                          const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                          TInt aFactor );

    static void Screen( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                        const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                        const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                        TInt aFactor );

    static void Overlay( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                         const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                         const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                         TInt aFactor );

    static void HardLight( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                           const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                           const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                           TInt aFactor );

    static void SoftLight( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                           const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                           const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                           TInt aFactor );

    static void Difference( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                            const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                            const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                            TInt aFactor );

    static void Dodge( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                       const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                       const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                       TInt aFactor );

    static void Burn( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                      const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                      const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                      TInt aFactor );
    };

// -----------------------------------------------------------------------------
// AknsRlBlendGray::Normal
// -----------------------------------------------------------------------------
//
void AknsRlBlendGray::Normal( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                              const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                              const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                              TInt aFactor )
    {
    /*lint -save -e702 */ // Arithmetic shifting assumed
    TInt x, y, s, sa, sb, ma, mb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB;

            sa = (ma * (*aA)) >> 8;
            sb = (mb * (*aB)) >> 8;
            s = ( sb * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( s < 0 ) s = 0; else if( s > 255 ) s = 255;
            // AlphaBlend shade (BoverA)
            *aT = ((mb * s)>>8) + ((sa * (255 - mb)) >> 8);

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    /*lint -restore */
    }

// -----------------------------------------------------------------------------
// AknsRlBlendGray::Darken
// -----------------------------------------------------------------------------
//
void AknsRlBlendGray::Darken( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                              const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                              const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                              TInt aFactor )
    {
    /*lint -save -e702 */ // Arithmetic shifting assumed
    TInt x, y, s, sa, sb, ma, mb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB;

            sa = (ma * (*aA)) >> 8;
            sb = (mb * (*aB)) >> 8;
            if( sa < sb )
                s = ( sa * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                s = ( sb * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( s < 0 ) s = 0; else if( s > 255 ) s = 255;
            // AlphaBlend shade (BoverA)
            *aT = ((mb * s)>>8) + ((sa * (255 - mb)) >> 8);

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    /*lint -restore */
    }

// -----------------------------------------------------------------------------
// AknsRlBlendGray::Lighten
// -----------------------------------------------------------------------------
//
void AknsRlBlendGray::Lighten( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                               const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                               const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                               TInt aFactor )
    {
    /*lint -save -e702 */ // Arithmetic shifting assumed
    TInt x, y, s, sa, sb, ma, mb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB;

            sa = (ma * (*aA)) >> 8;
            sb = (mb * (*aB)) >> 8;
            if( sa > sb )
                s = ( sa * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                s = ( sb * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( s < 0 ) s = 0; else if( s > 255 ) s = 255;
            // AlphaBlend shade (BoverA)
            *aT = ((mb * s)>>8) + ((sa * (255 - mb)) >> 8);

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    /*lint -restore */
    }

// -----------------------------------------------------------------------------
// AknsRlBlendGray::Multiply
// -----------------------------------------------------------------------------
//
void AknsRlBlendGray::Multiply( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                                const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                TInt aFactor )
    {
    /*lint -save -e702 */ // Arithmetic shifting assumed
    TInt x, y, s, sa, sb, ma, mb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB;

            sa = (ma * (*aA)) >> 8;
            sb = (mb * (*aB)) >> 8;
            s = ( (( sa * sb ) >> 8) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( s < 0 ) s = 0; else if( s > 255 ) s = 255;
            // AlphaBlend shade (BoverA)
            *aT = ((mb * s)>>8) + ((sa * (255 - mb)) >> 8);

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    /*lint -restore */
    }

// -----------------------------------------------------------------------------
// AknsRlBlendGray::Screen
// -----------------------------------------------------------------------------
//
void AknsRlBlendGray::Screen( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                              const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                              const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                              TInt aFactor )
    {
    /*lint -save -e702 */ // Arithmetic shifting assumed
    TInt x, y, s, sa, sb, ma, mb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB;

            sa = (ma * (*aA)) >> 8;
            sb = (mb * (*aB)) >> 8;
            s = ( (255 - ((( 255 - sa ) * ( 255 - sb )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( s < 0 ) s = 0; else if( s > 255 ) s = 255;
            // AlphaBlend shade (BoverA)
            *aT = ((mb * s)>>8) + ((sa * (255 - mb)) >> 8);

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    /*lint -restore */
    }

// -----------------------------------------------------------------------------
// AknsRlBlendGray::Overlay
// -----------------------------------------------------------------------------
//
void AknsRlBlendGray::Overlay( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                               const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                               const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                               TInt aFactor )
    {
    /*lint -save -e702 */ // Arithmetic shifting assumed
    TInt x, y, s, sa, sb, ma, mb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB;

            sa = (ma * (*aA)) >> 8;
            sb = (mb * (*aB)) >> 8;
            if( sa < 127 )
                s = ( (2 * (( sa * sb ) >> 8)) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                s = ( (255 - 2 * ((( 255 - sa ) * ( 255 - sb )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( s < 0 ) s = 0; else if( s > 255 ) s = 255;
            // AlphaBlend shade (BoverA)
            *aT = ((mb * s)>>8) + ((sa * (255 - mb)) >> 8);

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    /*lint -restore */
    }

// -----------------------------------------------------------------------------
// AknsRlBlendGray::HardLight
// -----------------------------------------------------------------------------
//
void AknsRlBlendGray::HardLight( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                                 const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                 const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                 TInt aFactor )
    {
    /*lint -save -e702 */ // Arithmetic shifting assumed
    TInt x, y, s, sa, sb, ma, mb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB;

            sa = (ma * (*aA)) >> 8;
            sb = (mb * (*aB)) >> 8;
            if( sb < 127 )
                s = ( (2 * (( sa * sb ) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                s = ( (255 - 2 * ((( 255 - sa ) * ( 255 - sb )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( s < 0 ) s = 0; else if( s > 255 ) s = 255;
            // AlphaBlend shade (BoverA)
            *aT = ((mb * s)>>8) + ((sa * (255 - mb)) >> 8);

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    /*lint -restore */
    }

// -----------------------------------------------------------------------------
// AknsRlBlendGray::SoftLight
// -----------------------------------------------------------------------------
//
void AknsRlBlendGray::SoftLight( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                                 const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                 const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                 TInt aFactor )
    {
    /*lint -save -e702 */ // Arithmetic shifting assumed
    TInt x, y, s, sa, sb, ma, mb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB;

            sa = (ma * (*aA)) >> 8;
            sb = (mb * (*aB)) >> 8;
            s = ( (2 * (( sa * sb ) >> 8 ) + (( sa * sa ) >> 8 ) - 2 * (( sa * (( sa * sb ) >> 8 )) >> 8 )) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( s < 0 ) s = 0; else if( s > 255 ) s = 255;
            // AlphaBlend shade (BoverA)
            *aT = ((mb * s)>>8) + ((sa * (255 - mb)) >> 8);

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    /*lint -restore */
    }

// -----------------------------------------------------------------------------
// AknsRlBlendGray::Difference
// -----------------------------------------------------------------------------
//
void AknsRlBlendGray::Difference( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                                  const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                                  const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                                  TInt aFactor )
    {
    /*lint -save -e702 */ // Arithmetic shifting assumed
    TInt x, y, s, sa, sb, ma, mb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB;

            sa = (ma * (*aA)) >> 8;
            sb = (mb * (*aB)) >> 8;
            s = ( (sa - sb) * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            if( s < 0 ) s = -s;
            if( s > 255 ) s = 255;
            // AlphaBlend shade (BoverA)
            *aT = ((mb * s)>>8) + ((sa * (255 - mb)) >> 8);

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    /*lint -restore */
    }

// -----------------------------------------------------------------------------
// AknsRlBlendGray::Dodge
// -----------------------------------------------------------------------------
//
void AknsRlBlendGray::Dodge( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                             const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                             const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                             TInt aFactor )
    {
    /*lint -save -e702 */ // Arithmetic shifting assumed
    TInt x, y, s, sa, sb, ma, mb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB;

            sa = (ma * (*aA)) >> 8;
            sb = (mb * (*aB)) >> 8;
            if( 255 == sb )
                s = ( 255 * aFactor + ( 255 - aFactor ) * sa ) >> 8;
            else
                {
                s = ( sa << 8 ) / ( 255 - sb );
                if( s < 0 ) s = 0; else if( s > 255 ) s = 255;
                s = ( s * aFactor + ( 255 - aFactor ) * sa ) >> 8;
                }
            if( s < 0 ) s = 0; else if( s > 255 ) s = 255;
            // AlphaBlend shade (BoverA)
            *aT = ((mb * s)>>8) + ((sa * (255 - mb)) >> 8);

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    /*lint -restore */
    }

// -----------------------------------------------------------------------------
// AknsRlBlendGray::Burn
// -----------------------------------------------------------------------------
//
void AknsRlBlendGray::Burn( TInt aW, TInt aH, TUint8* aT, TInt aPT,
                            const TUint8* aA, TInt aPA, const TUint8* aMA, TInt aPMA,
                            const TUint8* aB, TInt aPB, const TUint8* aMB, TInt aPMB,
                            TInt aFactor )
    {
    /*lint -save -e702 */ // Arithmetic shifting assumed
    TInt x, y, s, sa, sb, ma, mb;
    for( y= 0; y < aH; y++ )
        {
        for( x=0; x < aW; x++ )
            {
            ma = *aMA; mb = *aMB;

            sa = (ma * (*aA)) >> 8;
            sb = (mb * (*aB)) >> 8;
            if( 0 == sb )
                s = 0; // This makes burn work as in Paint Shop Pro
            else
                {
                s = 255 - ((( 255 - sa ) << 8 ) / sb );
                if( s < 0 ) s = 0; else if( s > 255 ) s = 255;
                s = ( s * aFactor + ( 255 - aFactor ) * sa ) >> 8;
                }
            if( s < 0 ) s = 0; else if( s > 255 ) s = 255;
            // AlphaBlend shade (BoverA)
            *aT = ((mb * s)>>8) + ((sa * (255 - mb)) >> 8);

            aT++; aA++; aMA++; aB++; aMB++;
            }

        aT += aPT; aA += aPA; aMA += aPMA; aB += aPB; aMB += aPMB;
        }
    /*lint -restore */
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginChannelBlend::CAknsRlEffectPluginChannelBlend
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginChannelBlend::CAknsRlEffectPluginChannelBlend()
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginChannelBlend::~CAknsRlEffectPluginChannelBlend()
    {
    iContext = NULL; // Removes lint nag
    delete iScans; //lint !e1551 No exception thrown
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginChannelBlend::EffectUid
// -----------------------------------------------------------------------------
//
TUid CAknsRlEffectPluginChannelBlend::EffectUid() const
    {
    return TUid::Uid( KAknsRlEffectPluginChannelBlendUID );
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginChannelBlend::Effect
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsRlEffectPluginChannelBlend::Effect( const TInt aInterface )
    {
    if( aInterface == KAknsRlEffectPluginInterfaceEffect )
        return this;
    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginChannelBlend::InitializeL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginChannelBlend::InitializeL()
    {
    delete iScans;
    iScans = NULL;

    iScans = CAknsRlScanlines::NewL();
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginChannelBlend::Release
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginChannelBlend::Release()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginChannelBlend::ActivateL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginChannelBlend::ActivateL( MAknsRlEffectContext* aContext )
    {
    if( !aContext ) // We absolutely need the context
        {
        User::Leave( KErrArgument );
        }

    iContext = aContext;
    iBlendMode = EAknsRlChannelBlendNormal;
    iBlendFactor = 255;
    iFlags = 0;

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
// CAknsRlEffectPluginChannelBlend::Deactivate
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginChannelBlend::Deactivate()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginChannelBlend::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginChannelBlend::SetParametersL( MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        // Fetch blend mode value
        if( param->iName->Compare( KAknsRlEffectChannelBlendMode ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            if( param->iNumber < EAknsRlChannelBlendNormal ||
                param->iNumber > EAknsRlChannelBlendBurn )
                User::Leave( KErrArgument );

            iBlendMode = param->iNumber;
            }
        // Fetch blend factor value
        else if( param->iName->Compare( KAknsRlEffectChannelBlendBlendFactor ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iBlendFactor = param->iNumber;
            }
        // Fetch Color A constant values
        else if( param->iName->Compare( KAknsRlEffectChannelBlendARed ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantAColor );
            iARed = TUint8( param->iNumber );
            }
        else if( param->iName->Compare( KAknsRlEffectChannelBlendAGreen ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantAColor );
            iAGreen = TUint8( param->iNumber );
            }
        else if( param->iName->Compare( KAknsRlEffectChannelBlendABlue ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantAColor );
            iABlue = TUint8( param->iNumber );
            }
        // Fetch Color B constant values
        else if( param->iName->Compare( KAknsRlEffectChannelBlendBRed ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantBColor );
            iBRed = TUint8( param->iNumber );
            }
        else if( param->iName->Compare( KAknsRlEffectChannelBlendBGreen ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantBColor );
            iBGreen = TUint8( param->iNumber );
            }
        else if( param->iName->Compare( KAknsRlEffectChannelBlendBBlue ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantBColor );
            iBBlue = TUint8( param->iNumber );
            }
        // Fetch Mask A constant value
        else if( param->iName->Compare( KAknsRlEffectChannelBlendAMask ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantAMask );
            iAMask = TUint8( param->iNumber );
            }
        // Fetch Mask B constant value
        else if( param->iName->Compare( KAknsRlEffectChannelBlendBMask ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iFlags = TUint8( iFlags | EConstantBMask );
            iBMask = TUint8( param->iNumber );
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginChannelBlend::GetCapabilities
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginChannelBlend::GetCapabilities( TAknsRlEffectCaps& aCaps )
    {
    // In all cases we can handle RGBOnly and RGBA output layers (alpha is
    // simply cleared to white if it exists).
    aCaps.iOutputLayerSupport = KAknsRlLayerRGBOnly | KAknsRlLayerRGBA;

    // In all cases we can handle RGBA and RGBOnly input layers.
    aCaps.iInputLayerASupport = KAknsRlLayerRGBA | KAknsRlLayerRGBOnly;
    aCaps.iInputLayerBSupport = KAknsRlLayerRGBA | KAknsRlLayerRGBOnly;

    // If both mask and color are constant we can handle None as input layer
    if( (iFlags & EConstantAMask) && (iFlags & EConstantAColor) )
        aCaps.iInputLayerASupport = aCaps.iInputLayerASupport | KAknsRlLayerNone;

    if( (iFlags & EConstantBMask) && (iFlags & EConstantBColor) )
        aCaps.iInputLayerBSupport = aCaps.iInputLayerBSupport | KAknsRlLayerNone;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginChannelBlend::Render
// -----------------------------------------------------------------------------
//
TInt CAknsRlEffectPluginChannelBlend::Render(
        const TAknsRlRenderOpParam& aParam )
    {
    TRAPD( err, DoRenderL( aParam ) );
    return err;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginChannelBlend::DoRenderL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginChannelBlend::DoRenderL(
        const TAknsRlRenderOpParam& aParam )
    {
    if( !iContext ) // We absolutely need the context
        {
        User::Leave( KErrBadHandle );
        }

    //---------------------------------
    // Step 1: Prepare layer query

    // We need to process alpha if mask constant is set or if both input
    // layers have the alpha status set.
    TBool useAlpha = EFalse;
    if( ( iFlags & EConstantAMask ) || ( iFlags & EConstantBMask ) ||
        ( ( aParam.iInputLayerAStatus & KAknsRlLayerRGBA ) &&
          ( aParam.iInputLayerBStatus & KAknsRlLayerRGBA ) ) )
        {
        useAlpha = ETrue;
        }

    // In some cases we need not to query layer A or B
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
        // No need to query A if only constant color is used or color and
        // mask are both constants.
        if( ( ( iFlags & EConstantAColor ) && !useAlpha ) ||
            ( ( iFlags & EConstantAColor ) && ( iFlags & EConstantAMask ) ) )
            queryA = EFalse;
        else
            queryA = ETrue;

        // No need to query B if only constant color is used or color and
        // mask are both constants.
        if( ( ( iFlags & EConstantBColor ) && !useAlpha ) ||
            ( ( iFlags & EConstantBColor ) && ( iFlags & EConstantBMask ) ) )
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

    // We have queried the layers, check that alpha bitmaps are ok (if needed)
    if( useAlpha && !( iFlags & EConstantAMask ) )
        {
        if( !dataA.iAlphaBitmap ) // We need the mask A bitmap
            User::Leave( KErrBadHandle );

        if( EGray256 != dataA.iAlphaBitmap->DisplayMode() )
            User::Leave( KErrArgument );
        }

    if( useAlpha && !( iFlags & EConstantBMask ) )
        {
        if( !dataB.iAlphaBitmap ) // We need the mask B bitmap
            User::Leave( KErrBadHandle );

        if( EGray256 != dataB.iAlphaBitmap->DisplayMode() )
            User::Leave( KErrArgument );
        }

    // If we got this far:
    // 1. We know if alpha/masks should be processed
    // 2. We know used display mode, same on all layers
    // 3. Relevant layers have been queried and are ready to be used
    // 4. Alpha bitmaps are ok (if needed)

    // Clear the target alpha if it exists
    if( useAlpha && dataT.iAlphaGc )
        {
        dataT.iAlphaGc->SetBrushColor( KRgbWhite );
        dataT.iAlphaGc->Clear();
        }

    //---------------------------
    // Step 3: Process the filter
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

    if( useAlpha )
        {
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
        }
    else // Non-masked mode, use alpha 255 for MA and MB
        {
        iScans->Config8L( AknsRlIMA, size.iWidth, 255 );
        iScans->Config8L( AknsRlIMB, size.iWidth, 255 );
        }

    // Color mode specific step
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

        typedef AknsRlBlend<TUint16,0,5,6,5> Blend16; // For brevity
        // For brevity and maintainability, all blend functions share the same
        // signature -> function pointer can be used
        void (*blendfn)( TInt, TInt, TUint16*, TInt, const TUint16*, TInt,
                         const TUint8*, TInt, const TUint16*, TInt,
                         const TUint8*, TInt, TInt ) = NULL;

        switch( iBlendMode )
            {
            case EAknsRlChannelBlendNormal:
                blendfn = Blend16::Normal;
                break;
            case EAknsRlChannelBlendDarken:
                blendfn = Blend16::Darken;
                break;
            case EAknsRlChannelBlendLighten:
                blendfn = Blend16::Lighten;
                break;
            case EAknsRlChannelBlendMultiply:
                blendfn = Blend16::Multiply;
                break;
            case EAknsRlChannelBlendScreen:
                blendfn = Blend16::Screen;
                break;
            case EAknsRlChannelBlendOverlay:
                blendfn = Blend16::Overlay;
                break;
            case EAknsRlChannelBlendHardLight:
                blendfn = Blend16::HardLight;
                break;
            case EAknsRlChannelBlendSoftLight:
                blendfn = Blend16::SoftLight;
                break;
            case EAknsRlChannelBlendDifference:
                blendfn = Blend16::Difference;
                break;
            case EAknsRlChannelBlendDodge:
                blendfn = Blend16::Dodge;
                break;
            case EAknsRlChannelBlendBurn:
                blendfn = Blend16::Burn;
                break;
            default:
                break;
            }

        // Apply the blend
        if( blendfn )
            {
            blendfn( size.iWidth, size.iHeight, ptrT, pitchT,
                     iScans->Mem16(AknsRlIA), iScans->Pitch(AknsRlIA),
                     iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                     iScans->Mem16(AknsRlIB), iScans->Pitch(AknsRlIB),
                     iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB),
                     iBlendFactor );
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

        typedef AknsRlBlend<TUint32,8,8,8,8> Blend32; // For brevity
        // For brevity and maintainability, all blend functions share the same
        // signature -> function pointer can be used
        void (*blendfn)( TInt, TInt, TUint32*, TInt, const TUint32*, TInt,
                         const TUint8*, TInt, const TUint32*, TInt,
                         const TUint8*, TInt, TInt ) = NULL;

        switch( iBlendMode )
            {
            case EAknsRlChannelBlendNormal:
                blendfn = Blend32::Normal;
                break;
            case EAknsRlChannelBlendDarken:
                blendfn = Blend32::Darken;
                break;
            case EAknsRlChannelBlendLighten:
                blendfn = Blend32::Lighten;
                break;
            case EAknsRlChannelBlendMultiply:
                blendfn = Blend32::Multiply;
                break;
            case EAknsRlChannelBlendScreen:
                blendfn = Blend32::Screen;
                break;
            case EAknsRlChannelBlendOverlay:
                blendfn = Blend32::Overlay;
                break;
            case EAknsRlChannelBlendHardLight:
                blendfn = Blend32::HardLight;
                break;
            case EAknsRlChannelBlendSoftLight:
                blendfn = Blend32::SoftLight;
                break;
            case EAknsRlChannelBlendDifference:
                blendfn = Blend32::Difference;
                break;
            case EAknsRlChannelBlendDodge:
                blendfn = Blend32::Dodge;
                break;
            case EAknsRlChannelBlendBurn:
                blendfn = Blend32::Burn;
                break;
            default:
                break;
            }

        // Apply the blend
        if( blendfn )
            {
            blendfn( size.iWidth, size.iHeight, ptrT, pitchT,
                     iScans->Mem32(AknsRlIA), iScans->Pitch(AknsRlIA),
                     iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                     iScans->Mem32(AknsRlIB), iScans->Pitch(AknsRlIB),
                     iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB),
                     iBlendFactor );
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

        typedef AknsRlBlendGray BlendG; // For brevity
        // For brevity and maintainability, all blend functions share the same
        // signature -> function pointer can be used
        void (*blendfn)( TInt, TInt, TUint8*, TInt, const TUint8*, TInt,
                         const TUint8*, TInt, const TUint8*, TInt,
                         const TUint8*, TInt, TInt ) = NULL;

        switch( iBlendMode )
            {
            case EAknsRlChannelBlendNormal:
                blendfn = BlendG::Normal;
                break;
            case EAknsRlChannelBlendDarken:
                blendfn = BlendG::Darken;
                break;
            case EAknsRlChannelBlendLighten:
                blendfn = BlendG::Lighten;
                break;
            case EAknsRlChannelBlendMultiply:
                blendfn = BlendG::Multiply;
                break;
            case EAknsRlChannelBlendScreen:
                blendfn = BlendG::Screen;
                break;
            case EAknsRlChannelBlendOverlay:
                blendfn = BlendG::Overlay;
                break;
            case EAknsRlChannelBlendHardLight:
                blendfn = BlendG::HardLight;
                break;
            case EAknsRlChannelBlendSoftLight:
                blendfn = BlendG::SoftLight;
                break;
            case EAknsRlChannelBlendDifference:
                blendfn = BlendG::Difference;
                break;
            case EAknsRlChannelBlendDodge:
                blendfn = BlendG::Dodge;
                break;
            case EAknsRlChannelBlendBurn:
                blendfn = BlendG::Burn;
                break;
            default:
                break;
            }

        // Apply the blend
        if( blendfn )
            {
            blendfn( size.iWidth, size.iHeight, ptrT, pitchT,
                     iScans->Mem8(AknsRlIA), iScans->Pitch(AknsRlIA),
                     iScans->Mem8(AknsRlIMA), iScans->Pitch(AknsRlIMA),
                     iScans->Mem8(AknsRlIB), iScans->Pitch(AknsRlIB),
                     iScans->Mem8(AknsRlIMB), iScans->Pitch(AknsRlIMB),
                     iBlendFactor );
            }
        }

    CleanupStack::Pop(); // Heap lock cleanup item

    // Unlock the global bitmap heap
    dataT.iRGBBitmap->UnlockHeap( ETrue );
    }

// End of File
