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
* Description:  Pictograph drawer flags.
*
*
*/



#ifndef AKN_PICTOGRAPH_DRAWER_FLAGS_H
#define AKN_PICTOGRAPH_DRAWER_FLAGS_H

// INCLUDES
#include <e32std.h>

// CONSTANTS

// bit flags, must be powers of two
const TInt KFlagAnimatedPictographs = 0x0001;
const TInt KFlagTimerStarted = 0x0002;
const TInt KFlagNullBrushSet = 0x0004;
const TInt KFlagDrawingMultiplePictographs = 0x0008;

#endif      // AKN_PICTOGRAPH_DRAWER_FLAGS_H
            
// End of File
