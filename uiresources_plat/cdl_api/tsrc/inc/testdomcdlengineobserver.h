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
* Description:  test cdl_api
*
*/


#ifndef C_TESTDOMCDLENGINEOBSERVER_H
#define C_TESTDOMCDLENGINEOBSERVER_H

class MCdlChangeObserver;

#include <CdlEngine.h>
#include <cdlexplorer.h>
#include <cdluserpackageexplorer.h>

/** 
* inherited from MCdlChangeObserver, for TestCdlEngineL() function.
*/
class CTestDomCdlEngineObserver : public CBase, public MCdlChangeObserver
    {
public:
    /**
    * Constructor
    */
    CTestDomCdlEngineObserver();

    /**
    * Destructor
    */
    ~CTestDomCdlEngineObserver();
    };

/** 
* for test pure virtual class CCdlInstanceExplorerBase.
*/

class CDOMTestDomCdlInst : public CCdlInstanceExplorerBase
    {
public:

    /**
    * Constructor
    */
    CDOMTestDomCdlInst();

    /**
    * Destructor
    */
    ~CDOMTestDomCdlInst();

    /**
    * implement pure virtual function.
    */
    CCdlInstance* CreateInstanceLC(const TCdlRef& aRef, 
                                   const CCdlInstance* aSubLayer);

    /**
    * implement pure virtual function.
    */
    TCdlInstanceComparison CallCompare(const CCdlInstance& aFirst,
                                       const CCdlInstance& aSecond)const;

     /**
    * implement pure virtual function.
    */
    TBool CallIsValid(const CCdlInstance& aInstance)const;

    /**
    * call CCdlInstanceExplorerBase::FindLC().
    */
    void DoFindLC();
    
    };
    
#endif//C_TESTDOMCDLENGINEOBSERVER_H

//End Of File


