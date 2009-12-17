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

#ifndef C_TESTSDKSKINSOBJECTPROVIDER_H
#define C_TESTSDKSKINSOBJECTPROVIDER_H

//  INCLUDES

#include <e32base.h>

    /**
    *  CTestSDKNotesNoteDialog test class for CAknNoteDialog protected API.
    */
class CTestSDKSkinsObjectProvider : public CBase,
                                    public MObjectProvider
    {
public:
    /**
    *  function MopSupplyObject from MObjectProvider
    */
    TTypeUid::Ptr MopSupplyObject( TTypeUid aId );
    
    };

#endif /*C_TESTSDKSKINSOBJECTPROVIDER_H*/
