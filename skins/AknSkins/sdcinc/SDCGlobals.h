/*
* Copyright (c) 2003-2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Global data for skin descriptor compiler.
*
*/

#if !defined(AFX_SDCGLOBALS_H__F78411B6_3F64_41B6_859F_945253CC8E02__INCLUDED_)
#define AFX_SDCGLOBALS_H__F78411B6_3F64_41B6_859F_945253CC8E02__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#pragma warning(push, 3)
#pragma warning( disable : 4018 )
#pragma warning( disable : 4100 )
#pragma warning( disable : 4244 )
#pragma warning( disable : 4245 )
#pragma warning( disable : 4710 )
#pragma warning( disable : 4530 )
#pragma warning( disable : 4702 )
#pragma warning( disable : 4663 )
	
#include "SDCInput.h"

extern CSDCInput gInput;

// Must be incremented with every base platform minor
// 2.8 = 1
// 3.0 = 2
static const int gVersionMajor = 2;

static const int gVersionMinor = 145;

#if defined(__SERIES60_26__)
static const unsigned char gPlatformMajor = 2;
static const unsigned char gPlatformMinor = 6;
#elif defined(__SERIES60_27__)
// Intentionally 2.8
static const unsigned char gPlatformMajor = 2;
static const unsigned char gPlatformMinor = 8;
#elif defined(__SERIES60_28__)
static const unsigned char gPlatformMajor = 2;
static const unsigned char gPlatformMinor = 8;
#elif defined(__SERIES60_30__)
static const unsigned char gPlatformMajor = 3;
static const unsigned char gPlatformMinor = 0;
#elif defined(__SERIES60_31__)
static const unsigned char gPlatformMajor = 3;
static const unsigned char gPlatformMinor = 1;
#elif defined(__SERIES60_32__)
static const unsigned char gPlatformMajor = 3;
static const unsigned char gPlatformMinor = 2;
#elif defined(__SERIES60_50__)
static const unsigned char gPlatformMajor = 5;
static const unsigned char gPlatformMinor = 0;
#elif defined(__SERIES60_51__)
static const unsigned char gPlatformMajor = 5;
static const unsigned char gPlatformMinor = 1;
#elif defined(__SERIES60_52__)
static const unsigned char gPlatformMajor = 5;
static const unsigned char gPlatformMinor = 2;
#else
static const unsigned char gPlatformMajor = 0;
static const unsigned char gPlatformMinor = 0;
#endif

#endif // !defined(AFX_SDCGLOBALS_H__F78411B6_3F64_41B6_859F_945253CC8E02__INCLUDED_)
