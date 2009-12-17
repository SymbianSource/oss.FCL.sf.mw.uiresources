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
* Description:  layout_system_private_api
*
*/

#ifndef C_TESTDOMADAPTER_H
#define C_TESTDOMADAPTER_H
// [INCLUDE FILES] 
#include <aknlayout2def.h>
#include <aknlayout2datadef.h>

class CTestDomAdapter: public CBase
    {
public: // constructor and destructor
    
    /**
    * Symbian 2nd static constructor
    */
    static CTestDomAdapter* NewL();
    
    /**
    * Destructor
    */
    virtual ~CTestDomAdapter();
  
    
    /**
    * Get a pointer to AdpData
    * 
    */
    TUint* GetAdpDataLookup();
        
    // constructor
    
    /**
    * C++ default constructor
    */
    CTestDomAdapter();
    
    /**
    * Symbian 2nd constructor
    */
    void ConstructL();
        
    /**
    * a callback function
    * @return return a TAknWindowLineLayout object 
    */
    static TAknWindowLineLayout WindowLine0f();
    
    /**
    * a callback function
    * @param aIndex is index of line 
    * @return return a TAknWindowLineLayout object 
    */
    static TAknWindowLineLayout WindowLine1f( TInt aIndex );
    
    /**
    * a callback function
    * @return return a TAknTextLineLayout object 
    */
    static TAknTextLineLayout TextLine0f();
   
    /**
    * a callback function
    * @param aIndex is index of line 
    * @return return a TAknTextLineLayout object 
    */   
    static TAknTextLineLayout TextLine1f( TInt aIndex );
     
private: // data
        
    /**
     * Pointer to a TUint array 
     * Own
     */
    TUint* iAdpDataLookup;
        
    };
#endif /*C_TESTDOMADAPTER_H*/
