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




#ifndef AKN_ICON_PANIC_H
#define AKN_ICON_PANIC_H

// INCLUDES
#include <e32base.h>

// CONSTANTS

// reasons for panicing client thread

enum TAknIconPanic
    {
    EClientSessionNotConnected = 0,
    EBadServerRequest = 1,
    EBadDescriptor = 2,
    EIconNotFound = 3,
    EBitmapIconNotLoaded = 4,
    EInvalidParameter = 5,
    EWrongIconLocationInfo = 6,
    EFileProviderCorrupt = 7
    };

_LIT( KAknIconPanicCategory, "AknIcon" );

#endif // AKN_ICON_PANIC_H

// End of File
