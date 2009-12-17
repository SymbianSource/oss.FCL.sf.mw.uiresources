/*
* Copyright (c) 2005 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  ?Description
*
*/


#ifndef AKNSRLEFFECTUTIL_INL
#define AKNSRLEFFECTUTIL_INL

// This file should not be directly included, it is included by default in
// AknsRlEffectUtil.h

//----------------------------------------------------------------------------
// Inline implementation for AknsRlRgb<TUint32, 8,8,8,8> methods
inline TUint8 AknsRlRgb<TUint32, 8,8,8,8>::R8( const TUint32 aVal )
    {
    return TUint8((aVal >> 16) & 0xFF);
    }

inline TUint8 AknsRlRgb<TUint32, 8,8,8,8>::G8( const TUint32 aVal )
    {
    return TUint8((aVal >> 8 ) & 0xFF);
    }

inline TUint8 AknsRlRgb<TUint32, 8,8,8,8>::B8( const TUint32 aVal )
    {
    return TUint8((aVal) & 0xFF);
    }

inline void AknsRlRgb<TUint32, 8,8,8,8>::SetRgb8(
    TUint32* aIn, const TUint8 aR, const TUint8 aG, const TUint8 aB )
    {
    *aIn = (KAknsRlMaskA8888 | (aR << 16) | (aG << 8) | aB);
    }

inline void AknsRlRgb<TUint32, 8,8,8,8>::SetRgb8LessG(
    TUint32* aIn, const TUint aR, const TUint aG, const TUint aB )
    {
    *aIn = (KAknsRlMaskA8888 | (aR << 16) | (aG << 8) | aB);
    }

//----------------------------------------------------------------------------
// Inline implementation for AknsRlRgb<TUint16, 0,5,6,5> methods
inline TUint8 AknsRlRgb<TUint16, 0,5,6,5>::R8( const TUint16 aVal )
    {
    return TUint8(((aVal >> 11) & 0x1F) << 3);
    }

inline TUint8 AknsRlRgb<TUint16, 0,5,6,5>::G8( const TUint16 aVal )
    {
    return TUint8(((aVal >> 5) & 0x3F) << 2);
    }

inline TUint8 AknsRlRgb<TUint16, 0,5,6,5>::B8( const TUint16 aVal )
    {
    return TUint8(((aVal ) & 0x1F) << 3);
    }

inline void AknsRlRgb<TUint16, 0,5,6,5>::SetRgb8(
    TUint16* aIn, const TUint8 aR, const TUint8 aG, const TUint8 aB )
    {
    *aIn = TUint16((((aR >> 3) & 0x1F) << 11) |
                   (((aG >> 2) & 0x3F) <<  5) |
                   (((aB >> 3) & 0x1F)      )  );

    }

inline void AknsRlRgb<TUint16, 0,5,6,5>::SetRgb8LessG(
    TUint16* aIn, const TUint aR, const TUint aG, const TUint aB )
    {
    // this version does the rounding so green won't dominate in recursive algorithms
    *aIn = TUint16(((((aR+4) >> 3) & 0x1F) << 11) |
                   ((((aG+1) >> 2) & 0x3F) <<  5) |
                   ((((aB+4) >> 3) & 0x1F)      )  );
    }

//----------------------------------------------------------------------------
// AknsRlUtil inline implementations
inline TUint8 AknsRlUtil::Grayscale( const TUint8 aR,
                                     const TUint8 aG,
                                     const TUint8 aB )
    {
    return TUint8( ( 77  * aR + 150 * aG + 28  * aB ) >> 8);
    }

inline TInt AknsRlUtil::Max( TInt aA, TInt aB )
    {
    if( aA > aB )
        return aA;
    return aB;
    }

inline TInt AknsRlUtil::Min( TInt aA, TInt aB)
    {
    if( aA < aB )
        return aA;
    return aB;
    }

#endif // AKNSRLEFFECTUTIL_INL
