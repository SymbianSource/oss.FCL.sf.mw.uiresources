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
* Description:   CSvgtGraphicsInterface class.
*
*/

#ifndef SVGTGRAPHICSINTERFACE_H
#define SVGTGRAPHICSINTERFACE_H

#include <e32base.h>
#include <e32std.h>
#include <fbs.h>
#include "MVGImageBinder.h"
#include "SvgtRegisteredBitmap.h"

NONSHARABLE_CLASS (CSvgtGraphicsInterface) : public CBase, public MVGImageBinder
    {
public:
    virtual void InitializeL(const TSize aSurfaceSize) = 0;
    virtual void CopyBitmapL(CFbsBitmap* aPixMap, CFbsBitmap* aMask) = 0;
    static CSvgtGraphicsInterface * CreateImplementationL();
    };

#endif
