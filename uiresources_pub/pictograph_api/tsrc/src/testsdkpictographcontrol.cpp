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
* Description:  test aknpictographinterface.h
                      akniconsrvclient.h
                      akniconutils.h
                      akninternaliconutils.h
*
*/


#include "testsdkpictographcontrol.h"


// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestSDKPicToGraphControl::CTestSDKPicToGraphControl
// -----------------------------------------------------------------------------
//
CTestSDKPicToGraphControl::CTestSDKPicToGraphControl()
    {
    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraphControl::~CTestSDKPicToGraphControl
// -----------------------------------------------------------------------------
//
CTestSDKPicToGraphControl::~CTestSDKPicToGraphControl()
    {
    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraphControl::NewL
// -----------------------------------------------------------------------------
//
CTestSDKPicToGraphControl* CTestSDKPicToGraphControl::NewL()
    {
    CTestSDKPicToGraphControl* self = new ( ELeave ) CTestSDKPicToGraphControl;
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraphControl::ConstructL
// -----------------------------------------------------------------------------
//
void CTestSDKPicToGraphControl::ConstructL()
    {
    CreateWindowL();
    SetRect( Rect() );
    ActivateL();
    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraphControl::Draw
// -----------------------------------------------------------------------------
//
void CTestSDKPicToGraphControl::Draw(const TRect& /*aRect*/) const
    {
    CWindowGc& gc = SystemGc();
    gc.SetPenStyle( CGraphicsContext::ENullPen );
    gc.SetBrushColor( KRgbGray );
    gc.SetBrushStyle( CGraphicsContext::ESolidBrush );  
    gc.DrawRect( Rect() );
    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraphControl::CountComponentControls
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraphControl::CountComponentControls() const
    {
    return 0;
    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraphControl::ComponentControl
// -----------------------------------------------------------------------------
//
CCoeControl* CTestSDKPicToGraphControl::ComponentControl(TInt /*aIndex*/) const
    {
    return NULL;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraphControl::SizeChanged
// -----------------------------------------------------------------------------
//
void CTestSDKPicToGraphControl::SizeChanged()
    {
    }

