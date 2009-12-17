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
* Description:  Bitmap store.
*
*/


// INCLUDE FILES

#include <fbs.h>

#include "AknsSrvBitmapStore.h"
#include "AknsDebug.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsSrvBitmapStore::~CAknsSrvBitmapStore()
    {
    iBitmapArray.ResetAndDestroy();
#if defined(_DEBUG)
    iCacheSize = 0;
#endif
    }

// -----------------------------------------------------------------------------
// C++ default constructor.
// -----------------------------------------------------------------------------
//
CAknsSrvBitmapStore::CAknsSrvBitmapStore()
    {
    }

// -----------------------------------------------------------------------------
// Store bitmap.
// -----------------------------------------------------------------------------
//
void CAknsSrvBitmapStore::StoreBitmap(const CFbsBitmap* aBitmap)
    {
    iBitmapArray.Append(aBitmap);
#if defined(_DEBUG)
    iCacheSize+=aBitmap->Header().iBitmapSize;
    AKNS_TRACE_INFO2("Scalable gfx cache size after STORE: %d bytes, itemcount (incl. masks): %d",
        iCacheSize, iBitmapArray.Count());
#endif
    }

// -----------------------------------------------------------------------------
// Destroy bitmap.
// -----------------------------------------------------------------------------
//
void CAknsSrvBitmapStore::DestroyBitmaps()
    {
    iBitmapArray.ResetAndDestroy();
#if defined(_DEBUG)
    iCacheSize = 0;
#endif
    }

// -----------------------------------------------------------------------------
// Remove stored bitmap.
// -----------------------------------------------------------------------------
//
void CAknsSrvBitmapStore::RemoveStoredBitmap(const TInt aBmpHandle)
    {
    if (aBmpHandle)
        {
        CFbsBitmap* bmp = NULL;
        for (TInt bodycount = 0; bodycount < iBitmapArray.Count(); bodycount++)
            {
            bmp = iBitmapArray[bodycount];
            if (bmp->Handle() == aBmpHandle)
                {
#if defined(_DEBUG)
                iCacheSize-=bmp->Header().iBitmapSize;
                AKNS_TRACE_INFO2("Scalable gfx cache size after REMOVE: %d bytes, itemcount (incl. masks): %d",
                    iCacheSize, iBitmapArray.Count()-1);
#endif
                iBitmapArray.Remove(bodycount);
                bodycount--;
                delete bmp;
                }
            }
        }
    }

// End of File
