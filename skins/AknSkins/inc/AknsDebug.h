/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Contains internal debug macros and enumerations.
*
*/


#ifndef AKNSDEBUG_H
#define AKNSDEBUG_H

// MACROS

// If AKNS_TRACING_ENABLED is defined, tracing will be enabled (all levels)
//
// Alternatively, the following macros can be used to enable traces:
//  AKNS_TRACING_ENABLED_INFO   Informative traces
//  AKNS_TRACING_ENABLED_NORMAL Normal traces
//  AKNS_TRACING_ENABLED_ERROR  Error traces
// Default for debug builds is NORMAL and ERROR

#if defined(_DEBUG)
#define AKNS_TRACING_ENABLED_NORMAL
#define AKNS_TRACING_ENABLED_ERROR
#endif

#if defined(AKNS_TRACING_ENABLED)
#undef AKNS_TRACING_ENABLED_INFO
#define AKNS_TRACING_ENABLED_INFO
#undef AKNS_TRACING_ENABLED_NORMAL
#define AKNS_TRACING_ENABLED_NORMAL
#undef AKNS_TRACING_ENABLED_ERROR
#define AKNS_TRACING_ENABLED_ERROR
#endif

#if defined(AKNS_TRACING_ENABLED_INFO) || defined(AKNS_TRACING_ENABLED_NORMAL) || defined(AKNS_TRACING_ENABLED_ERROR)
#if !defined(__E32SVR_H__)
#include <e32svr.h>
#endif
#define AKNS_TRACECMDPFX RDebug::Print
#define AKNS_TRACECMDSFX
#define AKNS_TRACE_ADDPREFIX(aText) (TPtrC((const TText *)L"AKNSKINS: \"" L##aText L"\""))
#endif

#if defined(AKNS_TRACING_ENABLED_INFO)
#pragma message("AknsDebug: Info-mode tracing is enabled, performance will be degraded!")
#define AKNS_TRACE_ADDPREFIX_INFO(aText) (TPtrC((const TText *)L"AKNSKINS: (Info) \"" L##aText L"\""))
#define AKNS_TRACE_INFO(aMsg) AKNS_TRACECMDPFX ( AKNS_TRACE_ADDPREFIX_INFO(aMsg) ) AKNS_TRACECMDSFX
#define AKNS_TRACE_INFO1(aFormat,aP1) AKNS_TRACECMDPFX ( AKNS_TRACE_ADDPREFIX_INFO(aFormat),(aP1) ) AKNS_TRACECMDSFX
#define AKNS_TRACE_INFO2(aFormat,aP1,aP2) AKNS_TRACECMDPFX ( AKNS_TRACE_ADDPREFIX_INFO(aFormat),(aP1),(aP2) ) AKNS_TRACECMDSFX
#define AKNS_TRACE_INFO3(aFormat,aP1,aP2,aP3) AKNS_TRACECMDPFX ( AKNS_TRACE_ADDPREFIX_INFO(aFormat),(aP1),(aP2),(aP3) ) AKNS_TRACECMDSFX
#else
#define AKNS_TRACE_INFO(aMsg)
#define AKNS_TRACE_INFO1(aFormat,aP1)
#define AKNS_TRACE_INFO2(aFormat,aP1,aP2)
#define AKNS_TRACE_INFO3(aFormat,aP1,aP2,aP3)
#endif

#if defined(AKNS_TRACING_ENABLED_NORMAL)
#define AKNS_TRACE_DEBUG(aMsg) AKNS_TRACECMDPFX ( AKNS_TRACE_ADDPREFIX(aMsg) ) AKNS_TRACECMDSFX
#define AKNS_TRACE_DEBUG1(aFormat,aP1) AKNS_TRACECMDPFX ( AKNS_TRACE_ADDPREFIX(aFormat),(aP1) ) AKNS_TRACECMDSFX
#define AKNS_TRACE_DEBUG2(aFormat,aP1,aP2) AKNS_TRACECMDPFX ( AKNS_TRACE_ADDPREFIX(aFormat),(aP1),(aP2) ) AKNS_TRACECMDSFX
#define AKNS_TRACE_DEBUG3(aFormat,aP1,aP2,aP3) AKNS_TRACECMDPFX ( AKNS_TRACE_ADDPREFIX(aFormat),(aP1),(aP2),(aP3) ) AKNS_TRACECMDSFX
#else
#define AKNS_TRACE_DEBUG(aMsg)
#define AKNS_TRACE_DEBUG1(aFormat,aP1)
#define AKNS_TRACE_DEBUG2(aFormat,aP1,aP2)
#define AKNS_TRACE_DEBUG3(aFormat,aP1,aP2,aP3)
#endif

#if defined(AKNS_TRACING_ENABLED_ERROR)
#define AKNS_TRACE_ADDPREFIX_ERROR(aText) (TPtrC((const TText *)L"AKNSKINS: (Error) \"" L##aText L"\""))
#define AKNS_TRACE_ERROR(aMsg) AKNS_TRACECMDPFX ( AKNS_TRACE_ADDPREFIX_ERROR(aMsg) ) AKNS_TRACECMDSFX
#define AKNS_TRACE_ERROR1(aFormat,aP1) AKNS_TRACECMDPFX ( AKNS_TRACE_ADDPREFIX_ERROR(aFormat),(aP1) ) AKNS_TRACECMDSFX
#define AKNS_TRACE_ERROR2(aFormat,aP1,aP2) AKNS_TRACECMDPFX ( AKNS_TRACE_ADDPREFIX_ERROR(aFormat),(aP1),(aP2) ) AKNS_TRACECMDSFX
#define AKNS_TRACE_ERROR3(aFormat,aP1,aP2,aP3) AKNS_TRACECMDPFX ( AKNS_TRACE_ADDPREFIX_ERROR(aFormat),(aP1),(aP2),(aP3) ) AKNS_TRACECMDSFX
#define AKNS_TRACE_OBSOLETE(aFunc) AKNS_TRACECMDPFX ( _L("AKNSKINS: (Error) Obsolete function %s used"), _S(aFunc) ) AKNS_TRACECMDSFX
#else
#define AKNS_TRACE_ERROR(aMsg)
#define AKNS_TRACE_ERROR1(aFormat,aP1)
#define AKNS_TRACE_ERROR2(aFormat,aP1,aP2)
#define AKNS_TRACE_ERROR3(aFormat,aP1,aP2,aP3)
#define AKNS_TRACE_OBSOLETE(aFunc)
#endif

#if defined(_DEBUG)

enum TAknsDebugPanicReasons
    {
    EAknsDPanicNotInitialized       = -6000,
    EAknsDPanicInvalidRefCount      = -6001,
    EAknsDPanicReleaseUnderflow     = -6002,
    EAknsDPanicInvalidParameter     = -6003,
    EAknsDPanicIncompatible         = -6004,
    EAknsDPanicNoWindow             = -6005,
    EAknsDPanicZeroLayDimension     = -6006,
    EAknsDPanicBadAlignment         = -6007,
    EAknsDPanicBadState             = -6008,
    EAknsDPanicIncorrectUsage       = -6009
    };

#define AKNS_DEBUG_PANIC(aReason) User::Panic(_L("AVKON SKINS"),aReason)

#endif

//lint -e960 Disable null statement note
//lint -esym(755,AKNS_TRACE*) Used in debug only
//lint -esym(758,TAknsDebugPanicReasons) Used in debug only
//lint -esym(769,TAknsDebugPanicReasons::*) Used in debug only
//lint -esym(755,AKNS_DEBUG_PANIC) Used in debug only

#endif // AKNSDEBUG_H

// End of File
