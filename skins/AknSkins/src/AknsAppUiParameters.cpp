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
* Description:  Defines an internal singleton class CAknsAppUiParameters.
*                Encapsulates AppUi-specific skin parameters and acts as a
*                singleton in application scope.
*
*/


// INCLUDE FILES
#include "AknsAppUiParameters.h"
#include <AknsConstants.h>

#include "AknsDebug.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ default constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsAppUiParameters::CAknsAppUiParameters() :
    CCoeStatic( KAknsAppUiParametersTls, EApp ),
    iAvkonSkinEnabled( EFalse ),
    iAvkonHighlightAnimationEnabled( ETrue )
    {
    }

// -----------------------------------------------------------------------------
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
void CAknsAppUiParameters::CreateSingletonL()
    {
    AKNS_TRACE_INFO("CAknsAppUiParameters::CreateSingletonL");
    CAknsAppUiParameters* self = new (ELeave) CAknsAppUiParameters;
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsAppUiParameters::~CAknsAppUiParameters()
    {
    AKNS_TRACE_INFO("CAknsAppUiParameters::destructor");
    }

// -----------------------------------------------------------------------------
// CAknsAppUiParameters::SetAvkonSkinEnabled()
// -----------------------------------------------------------------------------
//
void CAknsAppUiParameters::SetAvkonSkinEnabled( TBool aEnabled )
    {
    iAvkonSkinEnabled = aEnabled;
    }

// -----------------------------------------------------------------------------
// CAknsAppUiParameters::AvkonSkinEnabled()
// -----------------------------------------------------------------------------
//
TBool CAknsAppUiParameters::AvkonSkinEnabled() const
    {
    return iAvkonSkinEnabled;
    }

// -----------------------------------------------------------------------------
// CAknsAppUiParameters::SetAvkonHighlightAnimationEnabled
// -----------------------------------------------------------------------------
//
void CAknsAppUiParameters::SetAvkonHighlightAnimationEnabled( TBool aEnabled )
    {
    iAvkonHighlightAnimationEnabled = aEnabled;
    }

// -----------------------------------------------------------------------------
// CAknsAppUiParameters::AvkonHighlightAnimationEnabled
// -----------------------------------------------------------------------------
//
TBool CAknsAppUiParameters::AvkonHighlightAnimationEnabled() const
    {
    return iAvkonHighlightAnimationEnabled;
    }

//  End of File
