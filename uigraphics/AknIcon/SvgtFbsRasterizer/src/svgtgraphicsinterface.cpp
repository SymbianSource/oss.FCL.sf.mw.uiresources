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
* Description:   CSvgtGraphicsInterface implementation.
*
*/

#include "svgtgraphicsinterface.h"
#ifdef _EGL_SUPPORT_ENABLED_
#include "eglgraphicsinterface.h"
#else
#include "vgigraphicsinterface.h"
#endif

CSvgtGraphicsInterface * CSvgtGraphicsInterface::CreateImplementationL()
    {
#ifndef _EGL_SUPPORT_ENABLED_
    return new (ELeave) CVGIGraphicsInterface();
#else
    return new (ELeave) CEGLGraphicsInterface();
#endif
    }
