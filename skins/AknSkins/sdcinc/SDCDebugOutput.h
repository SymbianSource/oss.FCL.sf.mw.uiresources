/*
* Copyright (c) 2003 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Debugging output.
*
*/


#if !defined(AFX_SDCDEBUGOUTPUT_H__2F920CD5_5EBD_4C53_AEBF_D36273EDA770__INCLUDED_)
#define AFX_SDCDEBUGOUTPUT_H__2F920CD5_5EBD_4C53_AEBF_D36273EDA770__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "SDCData.h"

class CSDCDebugOutput
    {
    public:
        CSDCDebugOutput();
        virtual ~CSDCDebugOutput();

    public:
        void Output( CSDCData* aData );
    };

#endif // !defined(AFX_SDCDEBUGOUTPUT_H__2F920CD5_5EBD_4C53_AEBF_D36273EDA770__INCLUDED_)
