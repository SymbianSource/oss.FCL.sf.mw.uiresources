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
* Description:  Expands basic effect set.
*
*/


#ifndef AKNSRLEXPAND_H
#define AKNSRLEXPAND_H

// CONSTANTS
enum TAknsRlScanIndex
    {
    AknsRlIA  = 0, // Index for A
    AknsRlIB  = 1, // Index for B
    AknsRlIMA = 2, // Index for mask A
    AknsRlIMB = 3  // Index for mask B
    };

// FUNCTIONS
template<class T>
void BitmapData( const CFbsBitmap& aBitmap, TInt aWidth, T*& aPtr, TInt& aPitch )
    {

    aPtr = reinterpret_cast<T*>(aBitmap.DataAddress());
    // ScanLineLength returns bytes
    TInt scanW  = CFbsBitmap::ScanLineLength( aWidth, aBitmap.DisplayMode()) / sizeof(T);
    aPitch = scanW - aWidth;
    }

/**
* CleanupStack item to unlock bitmap heap in leave situations.
*/
static void AknsRlLockCleanup( TAny* aItem )
    {
    CFbsBitmap* bmp = static_cast<CFbsBitmap*>( aItem );
    bmp->UnlockHeap( ETrue );
    }

// CLASS DECLARATION(S)
/**
* Used for accessing constant color scanlines and bitmap scanlines via the same
* interface. Memory is allocated to constant color scanlines, bitmap data is
* only referenced.
*/
NONSHARABLE_CLASS( CAknsRlScanline )
    {
    friend class CAknsRlScanlines;

    private:
        CAknsRlScanline();
        ~CAknsRlScanline();

        void DeleteMem();
        TUint32 BytesToDwords( TUint32 aBytes ) const;
        void AllocateL( TUint32 aDwords );

        void Color8L( TInt aWidth, TUint8 aValue );
        void Color16L( TInt aWidth, TUint16 aValue );
        void Color32L( TInt aWidth, TUint32 aValue );

        void Bitmap8L( TInt aWidth, const CFbsBitmap& aBitmap );
        void Bitmap16L( TInt aWidth, const CFbsBitmap& aBitmap );
        void Bitmap32L( TInt aWidth, const CFbsBitmap& aBitmap );

    private:
        TUint32 iSize; // In bytes
        TInt iPitch;
        TBool iMemOwned;
        TUint32* iMem32;
    };

/**
* Scanline cache for RgbA, MaskA, RgbB, MaskB layers.
*/
NONSHARABLE_CLASS( CAknsRlScanlines ): public CBase
    {
    private:
        CAknsRlScanlines();

    public:
        static CAknsRlScanlines* NewL();
        ~CAknsRlScanlines();

        inline void Config8L( TAknsRlScanIndex aScan, TUint32 aWidth, TUint8 aValue );
        inline void Config16L( TAknsRlScanIndex aScan, TUint32 aWidth, TUint16 aValue );
        inline void Config32L( TAknsRlScanIndex aScan, TUint32 aWidth, TUint32 aValue );

        inline void Config8L( TAknsRlScanIndex aScan, TInt aWidth, const CFbsBitmap& aBitmap );
        inline void Config16L( TAknsRlScanIndex aScan, TInt aWidth, const CFbsBitmap& aBitmap  );
        inline void Config32L( TAknsRlScanIndex aScan, TInt aWidth, const CFbsBitmap& aBitmap  );

        inline TUint8* Mem8( TAknsRlScanIndex aScan ) const;
        inline TUint16* Mem16( TAknsRlScanIndex aScan ) const;
        inline TUint32* Mem32( TAknsRlScanIndex aScan ) const;

        inline TInt Pitch( TAknsRlScanIndex aScan ) const;

    private:
        CAknsRlScanline iScans[4];
    };

// INLINED MEMBERS
#include "AknsRlExpand.inl"

#endif // AKNSRLEXPAND_H
