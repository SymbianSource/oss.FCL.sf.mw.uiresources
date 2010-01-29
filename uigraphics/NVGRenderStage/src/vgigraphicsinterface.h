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
* Description:   CVGIGraphicsInterface class.
*
*/

#ifndef VGIGRAPHICSINTERFACE_H
#define VGIGRAPHICSINTERFACE_H

#include <e32base.h>
#include <e32std.h>
#include <fbs.h>
#include "MVGImageBinder.h"

NONSHARABLE_CLASS (CVGIGraphicsInterface) : public CBase, public MVGImageBinder
    {
public:
    CVGIGraphicsInterface();
    ~CVGIGraphicsInterface();
public:
    void InitializeL(const TSize aSurfaceSize);
    void CopyBitmapL(CFbsBitmap* aPixMap, CFbsBitmap* aMask);
public:
    TInt BindClientBuffer(TUint aBuffer);
    TInt UnBindClientBuffer();
private:
    void Terminate();
    };

#endif
