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
* Description:  Multipart bitmap file output.
*
*/


#if !defined(AFX_SDCMBMOUTPUT_H__49B09DAC_4DE9_44A4_A3AB_AAC818C72A4A__INCLUDED_)
#define AFX_SDCMBMOUTPUT_H__49B09DAC_4DE9_44A4_A3AB_AAC818C72A4A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "SDCData.h"

class CSDCMBMOutput
    {
    public:
        CSDCMBMOutput();
        virtual ~CSDCMBMOutput();

    public:
        void Output( CSDCData* aData, const char* aBaseName, const char* aBmconvTxtFilename );

    };

#endif // !defined(AFX_SDCMBMOUTPUT_H__49B09DAC_4DE9_44A4_A3AB_AAC818C72A4A__INCLUDED_)
