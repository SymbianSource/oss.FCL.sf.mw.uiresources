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
* Description:  Exception class.
*
*/


#if !defined(AFX_SDCEXCEPTION_H__049F8CB9_9764_410A_9A63_A6D5C7A7A090__INCLUDED_)
#define AFX_SDCEXCEPTION_H__049F8CB9_9764_410A_9A63_A6D5C7A7A090__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

enum TSDCExceptionType
    {
    ESDCUnknownError,
    ESDCFileOpenError,
    ESDCPrematureEOIError,
    ESDCSeekError,
    ESDCParseError,
    ESDCContentError,
    ESDCNotSupportedError
    };

class CSDCException
    {
    public:
        CSDCException();
        CSDCException( TSDCExceptionType aType, const char* aDescription );
        virtual ~CSDCException();

    public:
        void Print();

    public:
        TSDCExceptionType iType;
        char iDescription[512];

    };

#endif // !defined(AFX_SDCEXCEPTION_H__049F8CB9_9764_410A_9A63_A6D5C7A7A090__INCLUDED_)
