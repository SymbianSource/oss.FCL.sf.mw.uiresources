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
 * Description:   CEGLGraphicsInterface implementation.
 *
 */

#include "eglgraphicsinterface.h"
#include <egl.h>

CEGLGraphicsInterface::CEGLGraphicsInterface ()
    {
    eglInitialized = EFalse;
    }

CEGLGraphicsInterface::~CEGLGraphicsInterface ()
    {
    Terminate();
    }

void CEGLGraphicsInterface::InitializeL(const TSize aSurfaceSize)
    {
    if (eglInitialized)
        return;
    
    iEglDisplay = eglGetDisplay( EGL_DEFAULT_DISPLAY );
    if (iEglDisplay == EGL_NO_DISPLAY)
        {
        User::Leave(MapEGLErrorCodeToSymbian(eglGetError()));
        }
    
    if ( eglInitialize( iEglDisplay, 0, 0 ) == EGL_FALSE )
        {
        User::Leave(MapEGLErrorCodeToSymbian(eglGetError()));
        }
    
    if ( eglBindAPI(EGL_OPENVG_API) == EGL_FALSE)
        {
        User::Leave(MapEGLErrorCodeToSymbian(eglGetError()));
        }

    EGLConfig *configList = 0;
    EGLint numOfConfigs = 0;
    EGLint configSize = 0;

    if (eglGetConfigs(iEglDisplay, configList, configSize, &numOfConfigs) == EGL_FALSE)
        {
        User::Leave(MapEGLErrorCodeToSymbian(eglGetError()));
        }
    
    if ( !numOfConfigs )
        {
        User::Leave(MapEGLErrorCodeToSymbian(eglGetError()));
        }
    
    configSize = numOfConfigs;

    configList = new (ELeave) EGLConfig[configSize];
    
    const EGLint attribList[] =
    {
            EGL_RENDERABLE_TYPE,
            EGL_OPENVG_BIT,
            EGL_SURFACE_TYPE,
            EGL_PBUFFER_BIT,
            EGL_RED_SIZE,    8,
            EGL_GREEN_SIZE,   8,
            EGL_BLUE_SIZE,   8,
            EGL_ALPHA_SIZE,   8,
            EGL_NONE
    };

    if (eglChooseConfig(iEglDisplay, attribList, configList, configSize,
            &numOfConfigs) == EGL_FALSE)
        {
        delete[] configList;
        User::Leave(MapEGLErrorCodeToSymbian(eglGetError()));
        }

    iConfig = configList[0];

    delete[] configList;

    const EGLint attribList2[] =
    {
            EGL_WIDTH, aSurfaceSize.iWidth,
            EGL_HEIGHT, aSurfaceSize.iHeight,
            EGL_NONE
    };

    iEglSurface = eglCreatePbufferSurface(iEglDisplay, iConfig, attribList2);
    if (iEglSurface == EGL_NO_SURFACE)
        {
        User::Leave(MapEGLErrorCodeToSymbian(eglGetError()));
        }

    iEglContext = eglCreateContext(iEglDisplay, iConfig, EGL_NO_CONTEXT, NULL );
    if (iEglContext == EGL_NO_CONTEXT)
        {
        User::Leave(MapEGLErrorCodeToSymbian(eglGetError()));
        }
    
    if (eglMakeCurrent(iEglDisplay, iEglSurface, iEglSurface, iEglContext)== EGL_FALSE)
        {
        User::Leave(MapEGLErrorCodeToSymbian(eglGetError()));
        }
    eglInitialized = ETrue;
    }

void CEGLGraphicsInterface::CopyBitmapL(CFbsBitmap* aPixMap, CFbsBitmap* )
    {
    if (eglCopyBuffers(iEglDisplay, eglGetCurrentSurface(EGL_READ), aPixMap) == EGL_FALSE)
        {
        User::Leave(MapEGLErrorCodeToSymbian(eglGetError()));
        }
    aPixMap->SetDisplayMode(aPixMap->DisplayMode());
    }


void CEGLGraphicsInterface::Terminate()
    {
    if (iEglDisplay != EGL_NO_DISPLAY)
        {
        eglMakeCurrent(iEglDisplay, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT );
        if (iEglContext)
            {
            eglDestroyContext(iEglDisplay, iEglContext);
            iEglContext = EGL_NO_CONTEXT;
            }
        if (iEglSurface)
            {
            eglDestroySurface(iEglDisplay, iEglSurface);
            iEglSurface = EGL_NO_SURFACE;
            }
        eglTerminate(iEglDisplay);
        eglReleaseThread();
        iEglDisplay = EGL_NO_DISPLAY;
        }
    }

TInt CEGLGraphicsInterface::BindClientBuffer(TUint aBuffer)
    {
    // Save current context and surfaces
    iSavedContext = eglGetCurrentContext();
    iSavedDrawSurface = eglGetCurrentSurface(EGL_DRAW);
    iSavedReadSurface = eglGetCurrentSurface(EGL_READ);
    
    if ( eglMakeCurrent( iEglDisplay,  EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT ) == EGL_FALSE )
        {
        return MapEGLErrorCodeToSymbian(eglGetError());
        }

    const EGLint attribList2[] = {  EGL_NONE };
    iEglPbufSurface = eglCreatePbufferFromClientBuffer(iEglDisplay, EGL_OPENVG_IMAGE, (EGLClientBuffer)aBuffer,  iConfig, attribList2);
    
    if ( iEglPbufSurface == EGL_NO_SURFACE )
        {
        return MapEGLErrorCodeToSymbian(eglGetError());
        }

    if ( eglMakeCurrent( iEglDisplay,    iEglPbufSurface ,  iEglPbufSurface ,iEglContext ) == EGL_FALSE )
        {
        return MapEGLErrorCodeToSymbian(eglGetError());
        }
    return KErrNone;
    }

TInt CEGLGraphicsInterface::UnBindClientBuffer()
    {
    if ( eglMakeCurrent(iEglDisplay, EGL_NO_SURFACE, EGL_NO_SURFACE, iEglContext) == EGL_FALSE )
        {
        return MapEGLErrorCodeToSymbian(eglGetError());
        }

    if(iEglPbufSurface)
        {    
        eglDestroySurface(iEglDisplay, iEglPbufSurface);
        iEglPbufSurface = EGL_NO_SURFACE;
        }

    if ( eglMakeCurrent( iEglDisplay,  iSavedDrawSurface, iSavedReadSurface, iSavedContext ) == EGL_FALSE )
        {
        return MapEGLErrorCodeToSymbian(eglGetError());
        }
    return KErrNone;
    }

TInt CEGLGraphicsInterface::MapEGLErrorCodeToSymbian(TInt aEglErrorCode)
    {
    switch (aEglErrorCode)
        {
        case EGL_SUCCESS:
            return KErrNone;
        case EGL_NOT_INITIALIZED:
            return KErrNotReady;
        case EGL_BAD_ACCESS:
            return KErrPermissionDenied;
        case EGL_BAD_ALLOC:
            return KErrNoMemory;
        case EGL_BAD_CONTEXT:
        case EGL_BAD_CURRENT_SURFACE:
        case EGL_BAD_DISPLAY:
        case EGL_BAD_SURFACE:
        case EGL_BAD_NATIVE_PIXMAP:
        case EGL_BAD_NATIVE_WINDOW:
        case EGL_CONTEXT_LOST:
            return KErrBadHandle;
        case EGL_BAD_CONFIG:
        case EGL_BAD_PARAMETER:
        case EGL_BAD_MATCH:
        case EGL_BAD_ATTRIBUTE:
            return KErrArgument;
        default:
            return KErrUnknown;
        }
    }
