/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Defines internal data structures for background layouts.
*
*/


// INCLUDE FILES
#include    "AknsBackgroundLayout.h"
#include    <AknsConstants.h>

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
TAknsBackground::TAknsBackground()
    : iRect( 0, 0, 1, 1 ), iImageID( KAknsIIDNone ), iAttr(),
    iParentAbsolute( EFalse ), iParentPos( 0, 0 ), iNext( NULL )
    {
    }

//  End of File
