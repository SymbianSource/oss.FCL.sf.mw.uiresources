/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   CSvgtRegisteredBitmap class.
*
*/

#ifndef SVGTREGISTEREDBITMAP_H
#define SVGTREGISTEREDBITMAP_H
#include <e32std.h>
#include <fbs.h>
#include <graphics/fbsrasterizer.h>
/** Class for holding information about an extended bitmap registered with this rasterizer.
     */
NONSHARABLE_CLASS (CSvgtRegisteredBitmap) : public CFbsBitmap
    {
    public:
        
        CSvgtRegisteredBitmap(TInt64 aBitmapId);
        ~CSvgtRegisteredBitmap();
        
    public:
        
        TInt64 iBitmapId;
        TDblQueLink iLink;
        /** The number of times the bitmap with the ID aBitmapId is currently registered with this
            rasterizer or zero for recently used bitmaps.
        */
        TInt iRefCount;
    };

#endif
