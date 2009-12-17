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
* Description:   For test extended fonts api modules
*
*/



#include "testdomexfntcontainer.h"

#define  KAKNATLISTGRAY  TRgb(0xaaaaaa)

// ======== MEMBER FUNCTIONS ========
// ---------------------------------------------------------------------------
// C++ default Constructor
// ---------------------------------------------------------------------------
CTestDOMExFntContainer::CTestDOMExFntContainer()
    {    
    }
// ---------------------------------------------------------------------------
// Destructor
// ---------------------------------------------------------------------------
CTestDOMExFntContainer::~CTestDOMExFntContainer()
    {
    ResetControl();   
    }
    
// ---------------------------------------------------------------------------
// Symbian 2nd Constructor
// ---------------------------------------------------------------------------
void CTestDOMExFntContainer::ConstructL( const TRect& aRect )
    {
    CreateWindowL();
    SetRect( aRect );
    ActivateL();
    }

// ----------------------------------------------------------------------------
// CTestDOMExFntContainer::Draw
// Fills the window's rectangle.
// ----------------------------------------------------------------------------
void CTestDOMExFntContainer::Draw( const TRect& aRect ) const
    {    
    CWindowGc& gc = SystemGc();
    gc.SetPenStyle( CGraphicsContext::ENullPen );
    gc.SetBrushColor( KAKNATLISTGRAY );
    gc.SetBrushStyle( CGraphicsContext::ESolidBrush );
    gc.DrawRect( aRect );
    }

// ---------------------------------------------------------------------------
// CTestDOMExFntContainer::CountComponentControls
// ---------------------------------------------------------------------------
TInt CTestDOMExFntContainer::CountComponentControls() const
    {
    if ( iControl )
        {
        return 1;
        }
    else
        {
        return 0;
        }
    }
    
// ---------------------------------------------------------------------------
// CTestDOMExFntContainer::ComponentControl
// ---------------------------------------------------------------------------
CCoeControl* CTestDOMExFntContainer::ComponentControl( TInt ) const
    {
    return iControl;
    }
    
// ---------------------------------------------------------------------------
// CTestDOMExFntContainer::SetControlL
// ---------------------------------------------------------------------------
void CTestDOMExFntContainer::SetControlL( CCoeControl* aControl )
    {
    iControl = aControl;    
    if ( iControl )
        {  
        // You can change the position and size
        iControl->SetExtent( Rect().iTl, Rect().Size() );
        iControl->ActivateL();
        DrawNow();
        }    
    }
    
// ---------------------------------------------------------------------------
// CCTestDOMExFntContainer::ResetControl
// ---------------------------------------------------------------------------
void CTestDOMExFntContainer::ResetControl()
    {
    delete iControl;
    iControl = NULL;        
    }
    
// ---------------------------------------------------------------------------
// CCTestDOMExFntContainer::GetEnv
// ---------------------------------------------------------------------------
CCoeEnv* CTestDOMExFntContainer::GetEnv()
    {
    return iCoeEnv;    
    }
