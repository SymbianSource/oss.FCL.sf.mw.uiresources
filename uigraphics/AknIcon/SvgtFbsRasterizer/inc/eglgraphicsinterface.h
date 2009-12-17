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
* Description:   CEGLGraphicsInterface class.
*
*/

#ifndef EGLGRAPHICSINTERFACE_H
#define EGLGRAPHICSINTERFACE_H

#include "svgtgraphicsinterface.h"
#include <fbs.h>
#include <egl.h>

NONSHARABLE_CLASS (CEGLGraphicsInterface) : public CSvgtGraphicsInterface
    {
public:
    CEGLGraphicsInterface();
    ~CEGLGraphicsInterface();
public:
    void InitializeL(const TSize aSurfaceSize);
    void CopyBitmapL(CFbsBitmap* aPixMap, CFbsBitmap* aMask);
public:
    TInt   BindClientBuffer(TUint aBuffer);
    TInt   UnBindClientBuffer();
    
private:
    TInt MapEGLErrorCodeToSymbian(TInt aEglErrorCode);
    void Terminate();
private:
    TBool eglInitialized;
    /** Display where the window surface resides. */
    EGLDisplay  iEglDisplay;
    /** Window surface where the rendering is blitted to. */
    EGLSurface  iEglSurface;
    /** rendering context. */
    EGLContext  iEglContext;
    /** Describes the format, type and size of the color buffers and ancillary buffers for EGLSurface. */
    EGLConfig iConfig;
    
    EGLSurface iEglPbufSurface;
    EGLSurface iSavedDrawSurface;
    EGLSurface iSavedReadSurface;
    EGLContext iSavedContext;
   };

#endif
