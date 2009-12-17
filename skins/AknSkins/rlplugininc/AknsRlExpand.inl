/*
* Copyright (c) 2006 Nokia Corporation and/or its subsidiary(-ies).
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


#ifndef AKNSRLEXPAND_INL
#define AKNSRLEXPAND_INL

// -----------------------------------------------------------------------------
// CAknsRlScanlines::Config8L
// -----------------------------------------------------------------------------
//
inline void CAknsRlScanlines::Config8L( TAknsRlScanIndex aScan,
                                        TUint32 aWidth,
                                        TUint8 aValue )
    {
    iScans[ aScan ].Color8L( aWidth, aValue );
    }

// -----------------------------------------------------------------------------
// CAknsRlScanlines::Config16L
// -----------------------------------------------------------------------------
//
inline void CAknsRlScanlines::Config16L( TAknsRlScanIndex aScan,
                                         TUint32 aWidth,
                                         TUint16 aValue )
    {
    iScans[ aScan ].Color16L( aWidth, aValue );
    }

// -----------------------------------------------------------------------------
// CAknsRlScanlines::Config32L
// -----------------------------------------------------------------------------
//
inline void CAknsRlScanlines::Config32L( TAknsRlScanIndex aScan,
                                         TUint32 aWidth,
                                         TUint32 aValue )
    {
    iScans[ aScan ].Color32L( aWidth, aValue );
    }

// -----------------------------------------------------------------------------
// CAknsRlScanlines::Config8L
// -----------------------------------------------------------------------------
//
inline void CAknsRlScanlines::Config8L( TAknsRlScanIndex aScan,
                                        TInt aWidth,
                                        const CFbsBitmap& aBitmap )
    {
    iScans[ aScan ].Bitmap8L( aWidth, aBitmap );
    }

// -----------------------------------------------------------------------------
// CAknsRlScanlines::Config16L
// -----------------------------------------------------------------------------
//
inline void CAknsRlScanlines::Config16L( TAknsRlScanIndex aScan,
                                         TInt aWidth,
                                         const CFbsBitmap& aBitmap  )
    {
    iScans[ aScan ].Bitmap16L( aWidth, aBitmap );
    }

// -----------------------------------------------------------------------------
// CAknsRlScanlines::Config32L
// -----------------------------------------------------------------------------
//
inline void CAknsRlScanlines::Config32L( TAknsRlScanIndex aScan,
                                         TInt aWidth,
                                         const CFbsBitmap& aBitmap  )
    {
    iScans[ aScan ].Bitmap32L( aWidth, aBitmap );
    }

// -----------------------------------------------------------------------------
// CAknsRlScanlines::Mem8
// -----------------------------------------------------------------------------
//
inline TUint8* CAknsRlScanlines::Mem8( TAknsRlScanIndex aScan ) const
    {
    return (TUint8*)iScans[ aScan ].iMem32;
    }

// -----------------------------------------------------------------------------
// CAknsRlScanlines::Mem16
// -----------------------------------------------------------------------------
//
inline TUint16* CAknsRlScanlines::Mem16( TAknsRlScanIndex aScan ) const
    {
    return (TUint16*)iScans[ aScan ].iMem32;
    }

// -----------------------------------------------------------------------------
// CAknsRlScanlines::Mem32
// -----------------------------------------------------------------------------
//
inline TUint32* CAknsRlScanlines::Mem32( TAknsRlScanIndex aScan ) const
    {
    return iScans[ aScan ].iMem32;
    }

// -----------------------------------------------------------------------------
// CAknsRlScanlines::Pitch
// -----------------------------------------------------------------------------
//
inline TInt CAknsRlScanlines::Pitch( TAknsRlScanIndex aScan ) const
    {
    return iScans[ aScan ].iPitch;
    }

#endif // AKNSRLEXPAND_INL
