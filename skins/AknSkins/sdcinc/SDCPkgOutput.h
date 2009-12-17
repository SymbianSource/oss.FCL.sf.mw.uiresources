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
* Description:  Package output.
*
*/


#if !defined(AFX_SDCPKGOUTPUT_H__E49FC1DD_85FA_4BD7_A0D0_C2DE9709977D__INCLUDED_)
#define AFX_SDCPKGOUTPUT_H__E49FC1DD_85FA_4BD7_A0D0_C2DE9709977D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <stdio.h>
#include <string.h>

#include "SDCData.h"

class CSDCPkgOutput
    {
    public:
        CSDCPkgOutput();
        virtual ~CSDCPkgOutput();

    public:
        void Output( CSDCData* aData, const char* aSkinName,
            const char* aPkgFilename, const char* aDrmDefFilename = 0 );

    };

#endif // !defined(AFX_SDCPKGOUTPUT_H__E49FC1DD_85FA_4BD7_A0D0_C2DE9709977D__INCLUDED_)
