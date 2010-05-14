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
* Description:  Constants for compiler.
*
*/


#if !defined(AFX_SDCIIDCONSTANTS_H__2A2FCA67_4781_4E2D_ADD6_8DF782C75932__INCLUDED_)
#define AFX_SDCIIDCONSTANTS_H__2A2FCA67_4781_4E2D_ADD6_8DF782C75932__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <aknsconstants.hrh>

#include <string.h>
#include <vector>

using namespace std;

struct TSDCIIDEntry
    {
    wchar_t iName[256];
    int iMajor;
    int iMinor;
    };

class SDCIIDConstants
    {
    public:
        static void Initialize( const char* aFilename );
        ~SDCIIDConstants();

    public:
        static const TSDCIIDEntry* Find( const wchar_t* aName );
        static const TSDCIIDEntry* FindPlain( const wchar_t* aName );
        static const TSDCIIDEntry* FindBmpName( const wchar_t* aName );
    };

#endif // !defined(AFX_SDCIIDCONSTANTS_H__2A2FCA67_4781_4E2D_ADD6_8DF782C75932__INCLUDED_)
