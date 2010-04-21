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
* Description:    CVGIGraphicsInterface implementation.
*
*/

#include "vgigraphicsinterface.h"
#include <vgcontext_symbian.h>

CVGIGraphicsInterface::CVGIGraphicsInterface()
    {
    }

CVGIGraphicsInterface::~CVGIGraphicsInterface()
    {
    Terminate();
    }

void CVGIGraphicsInterface::InitializeL(TSize aSurfaceSize)
    {
        
    TInt err = VGISymbianInitialize( aSurfaceSize, VGI_COLORSPACE_SRGB );
    
    if ((err != KErrNone) && (err != KErrAlreadyExists))
        {
        User::Leave(err);
        }
    VGISymbianResize(aSurfaceSize);
    }

void CVGIGraphicsInterface::CopyBitmapL(CFbsBitmap* aPixMap, CFbsBitmap* aMask)
    {
    TInt error;
    if( !aMask )
        {
        error = VGISymbianCopyToBitmap(aPixMap, aMask, VGI_SKIP_TRANSPARENT_PIXELS);
        }
    else
        {
        error = VGISymbianCopyToBitmap(aPixMap, aMask, VGI_COPY_TRANSPARENT_PIXELS);
        }
    User::LeaveIfError(error);
    }

void CVGIGraphicsInterface::Terminate()
    {
    VGISymbianTerminate();
    }

TInt CVGIGraphicsInterface::BindClientBuffer(TUint aBuffer)
    {
        return VGISymbianBindToImage(aBuffer);
    }

TInt CVGIGraphicsInterface::UnBindClientBuffer()
    {
    return VGISymbianUnBindImage();
    }
