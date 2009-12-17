/*
* Copyright (c) 2002 - 2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Test AknsDrawUtils.h
*
*/


#include <eikenv.h>
#include <aknappui.h> 

#include "testsdkskinscontrol.h"


// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// CTestSDKSkinsControl::NewL
// -----------------------------------------------------------------------------
//
CTestSDKSkinsControl* CTestSDKSkinsControl::NewL()
    {
    CTestSDKSkinsControl* self = new (ELeave) CTestSDKSkinsControl;
    CleanupStack::PushL(self);
    self->ConstructL();
    CleanupStack::Pop(self);
    return self;
    }

// -----------------------------------------------------------------------------
// CTestSDKSkinsControl::~CTestSDKSkinsControl
// -----------------------------------------------------------------------------
//
CTestSDKSkinsControl::~CTestSDKSkinsControl()
    {
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkinsControl::CTestSDKSkinsControl
// -----------------------------------------------------------------------------
//
CTestSDKSkinsControl::CTestSDKSkinsControl(){};

// -----------------------------------------------------------------------------
// CTestSDKSkinsControl::ConstructL
// -----------------------------------------------------------------------------
//
void CTestSDKSkinsControl::ConstructL()
    {
    CreateWindowL();
    SetRect(CEikonEnv::Static()->EikAppUi()->ClientRect());
    ActivateL();

    }

// -----------------------------------------------------------------------------
// CTestSDKSkinsControl::OfferKeyEventL
// -----------------------------------------------------------------------------
//
TKeyResponse CTestSDKSkinsControl::OfferKeyEventL(const TKeyEvent& /*aKeyEvent*/,
        TEventCode /*aType*/)
    {
    return EKeyWasConsumed;
    }

// -----------------------------------------------------------------------------
// CTestSDKSkinsControl::Draw
// -----------------------------------------------------------------------------
//
void CTestSDKSkinsControl::Draw(const TRect& /*aRect*/) const
    {
    }

// -----------------------------------------------------------------------------
// CTestSDKSkinsControl::CountComponentControls
// -----------------------------------------------------------------------------
//
TInt CTestSDKSkinsControl::CountComponentControls() const
    {
    return 0;
    }

// -----------------------------------------------------------------------------
// CTestSDKSkinsControl::ComponentControl
// -----------------------------------------------------------------------------
//
CCoeControl* CTestSDKSkinsControl::ComponentControl(TInt /*aIndex*/) const
    {
    return NULL;

    }

// -----------------------------------------------------------------------------
// CTestSDKSkinsControl::SizeChanged
// -----------------------------------------------------------------------------
//
void CTestSDKSkinsControl::SizeChanged()
    {
    }

// -----------------------------------------------------------------------------
// CTestSDKSkinsControl::SizeChanged
// -----------------------------------------------------------------------------
//
void CTestSDKSkinsControl::ActivateGc()
    {
    CCoeControl::ActivateGc();
    }

// -----------------------------------------------------------------------------
// CTestSDKSkinsControl::SizeChanged
// -----------------------------------------------------------------------------
//
void CTestSDKSkinsControl::DeactivateGc()
    {
    CCoeControl::DeactivateGc();
    }

