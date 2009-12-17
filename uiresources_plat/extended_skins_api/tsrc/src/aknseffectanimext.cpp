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



#include "aknseffectanimext.h"

// CONSTANTS
const TInt KBufSize = 16;

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsEffectAnimObserver::AnimFrameReady
// -----------------------------------------------------------------------------
//
void CAknsEffectAnimObserver::AnimFrameReady( TInt aError, TInt /*aAnimId*/ )
    {
    TBuf<KBufSize> strError;
    _LIT( KTxtError, "CAknsEffectAnim Error :" );
    strError.Append( KTxtError );
    strError.AppendNum( aError ) ;
    RDebug::Print( strError );
    }
