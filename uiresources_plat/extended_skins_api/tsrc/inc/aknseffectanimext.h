/*
* Copyright (c) 2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  test aknseffectanim.h
                      aknsitemdef.h
                      aknspkgid.h
                      aknspointerstore.h
                      aknsrendererwrapper.h
                      aknssrvchunklookup.h
                      aknssrvclient.h
                      aknssrvskininformationpkg.h
*
*/



#ifndef C_AKNSEFFECTANIMEXT_H
#define C_AKNSEFFECTANIMEXT_H

#include <aknseffectanim.h>

class CAknsEffectAnimObserver : public CBase,
                                public MAknsEffectAnimObserver
    {
public:
    /**
    * Animation frame is ready to be drawn.
    *
    * @param aError  KErrNone if frame has been succesfully created and is
    *   available for drawing. If !KErrNone the animation has internally
    *   failed.
    * @param aAnimId  Reserved for future use
    */
    virtual void AnimFrameReady( TInt aError, TInt aAnimId );

    };


#endif // C_AKNSEFFECTANIMEXT_H
