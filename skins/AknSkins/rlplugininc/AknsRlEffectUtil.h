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
* Description:  Utility class for effects.
*
*/


#ifndef AKNSRLEFFECTUTIL_H
#define AKNSRLEFFECTUTIL_H

// CONSTANTS
const TUint32 KAknsRlMaskA8888 = 0xFF000000;
const TUint32 KAknsRlMaskR8888 = 0x00FF0000;
const TUint32 KAknsRlMaskG8888 = 0x0000FF00;
const TUint32 KAknsRlMaskB8888 = 0x000000FF;

const TUint16 KAknsRlMaskA565 = 0x0000;
const TUint16 KAknsRlMaskR565 = 0xF800;
const TUint16 KAknsRlMaskG565 = 0x07E0;
const TUint16 KAknsRlMaskB565 = 0x001F;

/**
* Porter-Duff alpha blend modes (modes None, A, B dropped because they
* are pointless).
*/
enum TAknsRlAlphaBlendMode
    {
    EAknsRlAlphaBlendAOverB = 0,
    EAknsRlAlphaBlendBOverA = 1,
    EAknsRlAlphaBlendAInB   = 2,
    EAknsRlAlphaBlendBInA   = 3,
    EAknsRlAlphaBlendAOutB  = 4,
    EAknsRlAlphaBlendBOutA  = 5,
    EAknsRlAlphaBlendAAtopB = 6,
    EAknsRlAlphaBlendBAtopA = 7,
    EAknsRlAlphaBlendAXorB  = 8
    };

/**
* Channel blend modes.
*/
enum TAknsRlChannelBlendMode
    {
    EAknsRlChannelBlendNormal       = 0,
    EAknsRlChannelBlendDarken       = 1,
    EAknsRlChannelBlendLighten      = 2,
    EAknsRlChannelBlendMultiply     = 3,
    EAknsRlChannelBlendScreen       = 4,
    EAknsRlChannelBlendOverlay      = 5,
    EAknsRlChannelBlendHardLight    = 6,
    EAknsRlChannelBlendSoftLight    = 7,
    EAknsRlChannelBlendDifference   = 8,
    EAknsRlChannelBlendDodge        = 9,
    EAknsRlChannelBlendBurn         = 10
    };

// CLASS DECLARATION(S)

//----------------------------------------------------------------------------
/**
* A dummy template for accessing rgb color channels.
*/
template <class T, TInt x, TInt r, TInt g, TInt b>
class AknsRlRgb
    {
    protected:
        inline AknsRlRgb() {} // Trivial, inlined here
    };

//----------------------------------------------------------------------------
/**
* Explicit specialization for 32-bit XRGB (8888) color
*/
template <>
class AknsRlRgb<TUint32, 8,8,8,8>
    {
    public:
    static inline TUint8 R8( const TUint32 aVal );
    static inline TUint8 G8( const TUint32 aVal );
    static inline TUint8 B8( const TUint32 aVal );
    static inline void SetRgb8( TUint32* aIn, const TUint8 aR,
                                const TUint8 aG, const TUint8 aB );
    static inline void SetRgb8LessG( TUint32* aIn, const TUint aR,
                                     const TUint aG, const TUint aB );
    };

//----------------------------------------------------------------------------
/**
* Explicit specialization for 16-bit RGB (565) color
*/
template <>
class AknsRlRgb<TUint16, 0,5,6,5>
    {
    public:
    static inline TUint8 R8( const TUint16 aVal );
    static inline TUint8 G8( const TUint16 aVal );
    static inline TUint8 B8( const TUint16 aVal );
    static inline void SetRgb8( TUint16* aIn, const TUint8 aR,
                                const TUint8 aG, const TUint8 aB );
    static inline void SetRgb8LessG( TUint16* aIn, const TUint aR,
                                     const TUint aG, const TUint aB );
    };

//----------------------------------------------------------------------------
/**
* Collection of shared utilities.
*/
class AknsRlUtil
    {
    public:
        /**
        * Grayscales the provided color.
        * @param aR Red value, in range [0, 255]
        * @param aG Green value, in range [0, 255]
        * @param aB Blue value, in range [0, 255]
        * @return The grayscale shade
        */
        static inline TUint8 Grayscale( const TUint8 aR,
                                        const TUint8 aG,
                                        const TUint8 aB );

        /**
        * @return maximum of (aA, aB)
        */
        static inline TInt Max( TInt aA, TInt aB );

        /**
        * @return minimum of (aA, aB)
        */
        static inline TInt Min( TInt aA, TInt aB);

        /**
        * Searches the median value of the provided array. Optimal median
        * search medhod used, see reference:
        * Nicolas Devillard: Fast Median Search: an ANSI C implementation,
        * July 1998
        */
        static TUint8 Median9( TUint8 aArray[9] );
    };

//----------------------------------------------------------------------------
/**
* Channel blending implementation.
*/
class AknsRlChannelBlend
    {
    public:

    static TUint8 Blend( const TAknsRlChannelBlendMode aMode,
                         const TInt aFactor,
                         const TUint8 aA,
                         const TUint8 aB );
    };

// INLINED MEMBERS
#include "AknsRlEffectUtil.inl"

#endif // AKNSRLEFFECTUTIL_H

