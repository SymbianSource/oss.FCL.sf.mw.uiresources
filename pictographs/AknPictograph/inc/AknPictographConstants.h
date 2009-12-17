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
* Description:  AknPictograph constants.
*
*
*/



#ifndef AKN_PICTOGRAPH_CONSTANTS_H
#define AKN_PICTOGRAPH_CONSTANTS_H

// INCLUDES

#include <e32std.h>

// CONSTANTS

_LIT( KBitmapFileNameBase, "z:\\resource\\aknpictograph" );
_LIT( KMaskFileNameBase,   "z:\\resource\\aknpictographmask" );

_LIT( KExtension, ".mbm" );

// Delay between animation frames with fastest frame rate in microseconds.
const TInt KAknPictographAnimationDelay = 500000;

NONSHARABLE_STRUCT(TAknPictographMetrics)
    {
    TUint16 iX; // x-offset in the pictograph collection bitmap
    TUint8 iWidth;
    TUint8 iHeight;
    };

NONSHARABLE_STRUCT(TAknStaticPictographDefinition)
    {
    TText iCode;
    // Array of TAknPictographMetrics for each supported height
    const TAknPictographMetrics* iMetrics; 
    };

NONSHARABLE_STRUCT(TAknAnimatedPictographFramesDefinition)
    {
    TUint16 iFrames; // frame count for a given height
    // Array of TAknPictographMetrics for each frame
    const TAknPictographMetrics* iMetrics;
    };

NONSHARABLE_STRUCT(TAknAnimatedPictographDefinition)
    {
    TText iCode;
    // NOTE: iRate is not used at them moment!
    TUint16 iRate; // 1 = fastest, 2 = half rate, 3 = one-third rate etc.
    // Array of TAknAnimatedPictographFramesDefinition for each supported height
    const TAknAnimatedPictographFramesDefinition* iFramesDefinitions;
    };

NONSHARABLE_STRUCT(TAknPictographData)
	{
    TInt iOffset;
    TSize iSize;
    TBool iAnimated;
    };

#endif      // AKN_PICTOGRAPH_CONSTANTS_H

// End of File
