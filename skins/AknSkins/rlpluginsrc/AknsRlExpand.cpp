/*
* Copyright (c) 2006-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Expands basic effect set.
*
*/


// INCLUDE FILES
#include <fbs.h>

#include "AknsRlExpand.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlScanline::CAknsRlScanline
// -----------------------------------------------------------------------------
//
CAknsRlScanline::CAknsRlScanline():
    iSize( 0 ), iPitch( 0 ), iMemOwned( EFalse ), iMem32( NULL )
    {}

// -----------------------------------------------------------------------------
// CAknsRlScanline::~CAknsRlScanline
// -----------------------------------------------------------------------------
//
CAknsRlScanline::~CAknsRlScanline()
    {
    DeleteMem(); //lint !e1551 No exception thrown
    }

// -----------------------------------------------------------------------------
// CAknsRlScanline::DeleteMem
// -----------------------------------------------------------------------------
//
void CAknsRlScanline::DeleteMem()
    {
    if( iMemOwned )
        {
        delete [] iMem32;
        }

    iMem32 = NULL;
    iMemOwned = EFalse;
    iSize = 0;
    iPitch = 0;
    }

// -----------------------------------------------------------------------------
// CAknsRlScanline::BytesToDwords
// -----------------------------------------------------------------------------
//
TUint32 CAknsRlScanline::BytesToDwords( TUint32 aBytes ) const
    {
    // Smallest number of dwords that can contain all of the bytes
    return ( aBytes + 3 ) >> 2;
    }

// -----------------------------------------------------------------------------
// CAknsRlScanline::AllocateL
// -----------------------------------------------------------------------------
//
void CAknsRlScanline::AllocateL( TUint32 aDwords )
    {
    if( iSize == aDwords && iMemOwned )
        {
        return; // Buffer size already ok
        }

    if( iMemOwned )
        {
        delete [] iMem32;
        }

    iMem32 = NULL;
    iMem32 = new TUint32[ aDwords ]; //lint !e119 Quite enough params

    if( !iMem32 )
        {
        User::Leave( KErrNoMemory );
        }

    iMemOwned = ETrue;
    iSize = aDwords;
    iPitch = 0;
    }

// -----------------------------------------------------------------------------
// CAknsRlScanline::Color8L
// -----------------------------------------------------------------------------
//
void CAknsRlScanline::Color8L( TInt aWidth, TUint8 aValue )
    {
    AllocateL( BytesToDwords( aWidth * sizeof( TUint8 ) ) );

    TUint8* mem = (TUint8*) iMem32;
    for( TInt i=0; i < aWidth; i++ )
        mem[i] = aValue;

    iPitch = -aWidth;
    }

// -----------------------------------------------------------------------------
// CAknsRlScanline::Color16L
// -----------------------------------------------------------------------------
//
void CAknsRlScanline::Color16L( TInt aWidth, TUint16 aValue )
    {
    AllocateL( BytesToDwords( aWidth * sizeof( TUint16 ) ) );

    TUint16* mem = (TUint16*) iMem32;
    for( TInt i=0; i < aWidth; i++ )
        mem[i] = aValue;

    iPitch = -aWidth;
    }

// -----------------------------------------------------------------------------
// CAknsRlScanline::Color32L
// -----------------------------------------------------------------------------
//
void CAknsRlScanline::Color32L( TInt aWidth, TUint32 aValue )
    {
    AllocateL( aWidth );

    for( TInt i=0; i < aWidth; i++ )
        iMem32[i] = aValue;

    iPitch = -aWidth;
    }

// -----------------------------------------------------------------------------
// CAknsRlScanline::Bitmap8L
// -----------------------------------------------------------------------------
//
void CAknsRlScanline::Bitmap8L( TInt aWidth, const CFbsBitmap& aBitmap )
    {
    DeleteMem();

    iMem32 = aBitmap.DataAddress(); //lint !e672 !e423 Referencing only
    // ScanLineLength returns bytes
    TInt scanW  = CFbsBitmap::ScanLineLength( aWidth, aBitmap.DisplayMode()) /
                  TInt( sizeof(TUint8) );
    iPitch = scanW - aWidth;
    }

// -----------------------------------------------------------------------------
// CAknsRlScanline::Bitmap16L
// -----------------------------------------------------------------------------
//
void CAknsRlScanline::Bitmap16L( TInt aWidth, const CFbsBitmap& aBitmap )
    {
    DeleteMem();

    iMem32 = aBitmap.DataAddress(); //lint !e672 !e423 Referencing only
    // ScanLineLength returns bytes
    TInt scanW  = CFbsBitmap::ScanLineLength( aWidth, aBitmap.DisplayMode()) /
                  TInt( sizeof(TUint16) );
    iPitch = scanW - aWidth;
    }

// -----------------------------------------------------------------------------
// CAknsRlScanline::Bitmap32L
// -----------------------------------------------------------------------------
//
void CAknsRlScanline::Bitmap32L( TInt aWidth, const CFbsBitmap& aBitmap )
    {
    DeleteMem();

    iMem32 = aBitmap.DataAddress(); //lint !e672 !e423 Referencing only
    // ScanLineLength returns bytes
    TInt scanW  = CFbsBitmap::ScanLineLength( aWidth, aBitmap.DisplayMode()) /
                  TInt( sizeof(TUint32) );
    iPitch = scanW - aWidth;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ constructor.
// -----------------------------------------------------------------------------
//
CAknsRlScanlines::CAknsRlScanlines()
    {}

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsRlScanlines::~CAknsRlScanlines()
    {}

// -----------------------------------------------------------------------------
// Symbian two-phased constructor.
// -----------------------------------------------------------------------------
//
CAknsRlScanlines* CAknsRlScanlines::NewL()
    {
    CAknsRlScanlines* self = new(ELeave) CAknsRlScanlines();
    return self;
    }

// End of file
