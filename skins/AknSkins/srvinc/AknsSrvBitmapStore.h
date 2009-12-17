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
* Description:  Bitmap stpre.
*
*/


#ifndef AKNSSRVBITMAPSTORE_H
#define AKNSSRVBITMAPSTORE_H

#include <e32std.h>

#include "AknsSrvBitmapStore.h"
#include <fbs.h>

NONSHARABLE_CLASS(CAknsSrvBitmapStore) : public CBase
    {
    public:        
        CAknsSrvBitmapStore();
        ~CAknsSrvBitmapStore();

    public:
        void StoreBitmap(const CFbsBitmap* aBitmap);
        void RemoveStoredBitmap(const TInt aBmpHandle);
        void DestroyBitmaps();

    private:
        // Array of bitmaps.
        RPointerArray<CFbsBitmap> iBitmapArray;

#if defined(_DEBUG)
        TUint32 iCacheSize;
#endif
    };

#endif // AKNSSRVBITMAPSTORE_H

// End of File
