/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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




#ifndef AKN_ICON_SRV_PANIC_H
#define AKN_ICON_SRV_PANIC_H

// INCLUDES
#include <e32base.h>

// CONSTANTS

// reasons for panicing client thread

enum TAknIconSrvPanic
    {
    ESrvPanicIconNotFound = 0,
    ESrvPanicCachedItemUserCountNonZero = 1,
    ESrvPanicCacheCorrupt = 2,
    ESrvPanicSvgEngineMissing = 3,
    ESrvPanicPrecacheListCorrupt = 4,
    ESrvPanicPrecacheRestartFailed = 5,
    ESrvPanicCurrentIconItemDeleted = 6
    };

_LIT( KAknIconSrvPanicCategory, "AknIconSrv" );

#endif // AKN_ICON_SRV_PANIC_H

// End of File
