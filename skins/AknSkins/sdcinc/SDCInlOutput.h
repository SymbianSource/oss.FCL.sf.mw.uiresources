/*
* Copyright (c) 2003-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  ?Description
*
*/


#if !defined(AFX_SDCINLOUTPUT_H__91B390A4_957C_493C_A584_FF4BA0B49FB4__INCLUDED_)
#define AFX_SDCINLOUTPUT_H__91B390A4_957C_493C_A584_FF4BA0B49FB4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <stdio.h>

#include "SDCData.h"

class CSDCInlOutput
    {
    public:
        CSDCInlOutput();
        virtual ~CSDCInlOutput();

    public:
        void Output( CSDCData* aData, const char* aSkinName, const char* aCppFilename, const char* aMmpFilename );

    protected:
        void OutputAttributes( FILE* aFile, const TSDCImageAttributes& aAttributes );
        void OutputClassList( FILE* aFile, const bool aAppIconClass, const char* aSkinName );

    protected:
        CSDCData* iData;

    };

#endif // !defined(AFX_SDCINLOUTPUT_H__91B390A4_957C_493C_A584_FF4BA0B49FB4__INCLUDED_)
