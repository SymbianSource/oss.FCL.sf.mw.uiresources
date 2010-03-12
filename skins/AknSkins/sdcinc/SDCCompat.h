/*
* Copyright (c) 2010 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Reader class.
*
*/

#ifndef _SDCCOMPAT_H
#define _SDCCOMPAT_H

#include <wchar.h>

/* _MSC_VER for checking VC6, so that we can keep this library still compilable using `tools'. */
#if (defined(__MSVCRT__) || defined(_MSC_VER))
#include <windows.h>
#define sd_strcasecmp  stricmp
#define sd_strncasecmp strnicmp
#define sd_wcscasecmp  _wcsicmp
#define sd_wcsncasecmp _wcsnicmp

#else  /* linux */
#define sd_strcasecmp  strcasecmp
#define sd_strncasecmp strncasecmp
#define sd_wcscasecmp  wcscasecmp
#define sd_wcsncasecmp wcsncasecmp
#endif

const unsigned long long SEC_TO_USEC = 1000000;
// 100-nanosecond
const unsigned long long USEC_TO_100NANOSEC = 10;

#endif
