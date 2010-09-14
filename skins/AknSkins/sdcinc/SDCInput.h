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
* Description:  ?Description
*
*/


#if !defined(AFX_SDCINPUT_H__A0DBE2E4_6216_468F_8437_4BA19D0ACB09__INCLUDED_)
#define AFX_SDCINPUT_H__A0DBE2E4_6216_468F_8437_4BA19D0ACB09__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <stdio.h>

#include "SDCException.h"
#include "SDCData.h"

class CSDCInput  
{
public:
    CSDCInput();
    virtual ~CSDCInput();

public:
    void Open( const char* aFilename );

public:
    bool NextToken();
    bool NextTokenAllowLF();
    bool NextStringToken();
    // @return The token count
    int NextRawToken();

public:
    static int ConvertToNumber( const wchar_t* aToken );
    static void ConvertToAscii( char* aTarget, const wchar_t* aSource );
    static void ConvertToWchar( wchar_t* aTarget, const char* aSource );
    static void ConvertToAsciiWithCPPEscapes( char* aTarget, const wchar_t* aSource );
    static TSDCColorDepth ConvertToColorDepth( const wchar_t* aToken );
    static int ConvertToLayer( const wchar_t* aToken );
    static bool IsSvgFile( const wchar_t* aFilename );

private:
    void RawRead();
    bool ReadNextChar();
    bool ParseToken( const wchar_t* aSeparators, const wchar_t* aTerminators );

public:
    FILE* iFile;
    int iLineNumber;
    bool iUnicode;
    bool iFirstInLine;

    wchar_t iNextChar;
    wchar_t iToken[512];
    int iHash;
};

#endif // !defined(AFX_SDCINPUT_H__A0DBE2E4_6216_468F_8437_4BA19D0ACB09__INCLUDED_)
