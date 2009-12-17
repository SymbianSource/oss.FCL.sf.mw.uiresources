/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:
*
*/

#ifndef AKNSSRVBITMAPRENDERER_H
#define AKNSSRVBITMAPRENDERER_H

#include "AknsSrvItemDef.h"

class CFbsBitmap;


class MAknsSrvBitmapRenderer
    {
    public:
        virtual CFbsBitmap* RenderBitmap(TAknsSrvDef& aItemDef, TAknsSrvBitmapDef& aBitmapDef) = 0;
        virtual CFbsBitmap* RenderMaskedBitmap(TAknsSrvDef& aItemDef, TAknsSrvMaskedBitmapDef& aBitmapDef) = 0;
        virtual void StoreBitmap(const CFbsBitmap* aBitmap) = 0;
    };

#endif