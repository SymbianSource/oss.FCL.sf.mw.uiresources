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

#ifndef C_TESTSDKSKINSCONTROL_H
#define C_TESTSDKSKINSCONTROL_H

//  INCLUDES

#include <e32base.h>
#include <coedef.h>
#include <coecntrl.h>

    /**
    *  CTestSDKNotesNoteDialog test class for CAknNoteDialog protected API.
    */
class CTestSDKSkinsControl : public CCoeControl
    {
public:
    /**
     * Two-phased constructor.
     */
    static CTestSDKSkinsControl* NewL();
    
    /**
     * Destructor.
     */
    ~CTestSDKSkinsControl();
    
    /**
     * fuction ActivateGc for test ActivateGc
     */
    void ActivateGc();
    
    /**
     * fuction DeActivateGc for test DeActivateGc
     */
    void DeactivateGc();
    
private:
    
    /**
     * Constructor.
     */
    CTestSDKSkinsControl();
    
    /**
     * By default Symbian 2nd phase constructor is private.
     */
    void ConstructL();
    
    /**
     * Receive key events.
     */
    TKeyResponse OfferKeyEventL(const TKeyEvent& aKeyEvent,TEventCode aType);
    
    /**
     * Draw control.
     */
    void Draw(const TRect& aRect) const;
    
    /**
     * Return number of controls in its window.
     */
    TInt CountComponentControls() const;
    
    /**
     * Controls in its window.
     */
    CCoeControl* ComponentControl(TInt aIndex) const;
    
    /**
     * Resize screen.
     */
    void SizeChanged();

    
    };


#endif /*C_TESTSDKSKINSCONTROL_H*/
