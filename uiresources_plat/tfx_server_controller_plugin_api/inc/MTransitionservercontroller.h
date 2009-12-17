/*
* Copyright (c) 2006 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  This is the Transition Server Controller ECOM API defition of the
									TFX Srv Plugin API.The instance of this class must be
								retrieved via the ECOM framework; the ECOM IDs for this API
								are declared in TfxSrvEcomIds.h (KTfxSrvCtrlEcomImpl).
*
*/

#ifndef M_TRANSITIONSERVERCONTROLLER_H
#define M_TRANSITIONSERVERCONTROLLER_H

#include <e32base.h>
#include <w32std.h>

/**
* Defines interface for Transition Server Controller
*
* More info on how to use methods can be found from 
* complementary/TFXServer transitionservercontroller.h 
* header file.
* @since S60 3.2
* 
* @
*/
class MTransitionServerController
    {
		public:

	    virtual ~MTransitionServerController(){};
	    virtual TInt StartTransitionServer() = 0;
	    virtual TInt StopTransitionServer() = 0;
	    virtual TBool ServerRunning() = 0;
	    virtual TInt StartTransitionServer(TInt32 aMaxBytesOngoing, TInt32 aMaxBytesBetween) = 0;
    };

#endif //M_TRANSITIONSERVERCONTROLLER_H