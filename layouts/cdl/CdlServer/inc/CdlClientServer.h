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
* Description:
*
*/


#include <e32std.h>

#if defined(__WINS__) && !defined(EKA2)
#define __CDLSERVER_NO_PROCESSES__
#endif

_LIT(KCdlServerName,"CdlServer");
_LIT(KCdlServerDllImg,"CdlServer.dll");

#ifdef RD_SECURE_BIN_RES
_LIT(KCdlServerExeImg,"z:\\sys\\bin\\cdlserver.exe");
#else
_LIT(KCdlServerExeImg,"z:\\system\\programs\\cdlserver.exe");
#endif

const TUid KServerUid3={0x1027287A};

#ifdef __CDLSERVER_NO_PROCESSES__
const TInt KCdlServerStackSize=0x2000;          //  8KB
const TInt KCdlServerInitHeapSize=0x1000;       //  4KB
const TInt KCdlServerMaxHeapSize=0x1000000;     // 16MB
#endif

const TInt KMaxCdlMessage=100;

enum TCdlMessages
    {
    ECdlServCmdRequestGetCust,
    ECdlServCmdGetCust,
    ECdlServCmdSetUidsToNotify,
    ECdlServCmdNotifyChange,
    ECdlServCmdCancelNotifyChange,
    ECdlServCmdSetCust,
    ECdlServCmdGetRefsSize,
    ECdlServCmdGetNamesSize,
    ECdlServCmdGetTempBuf,
    ECdlServCmdGetAllRefsSize,
    ECdlServCmdIsPluginInRom,
    ECdlServCmdPluginDrive,
    };
