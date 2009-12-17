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
* Description:  Pictograph panic codes.
*
*
*/


#ifndef AKN_PICTOGRAPH_PANIC_H
#define AKN_PICTOGRAPH_PANIC_H

// INCLUDES
#include <e32std.h>

// CONSTANTS

enum TAknPictographPanic
    {
    ECorruptPictographTable = 0
    };

/**
* Pictograph panic
*/
GLREF_C void PictographPanic( TAknPictographPanic aPanic );

#endif      // AKN_PICTOGRAPH_PANIC_H
            
// End of File
