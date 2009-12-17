/*
* Copyright (c) 2004-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  A toolkit class for creating RL effect queues from AnimationLibrary
*                animations.
*
*/


#ifndef AKNSALCONVERSIONUTIL_H
#define AKNSALCONVERSIONUTIL_H

// FORWARD DECLARATIONS
class TTime;
class CAknsAnimationItemData;
class CAknsEffectQueueItemData;

/**
* A toolkit class for creating RL effect queues from AnimationLibrary
* animations.
*
* @since 3.0
*/
NONSHARABLE_CLASS( AknsAlConversionUtil )
    {
    public:

        /**
        * Creates a standard effect queue (RenderLibrary). Animation defined by
        * the animation item is driven to position defined by the time stamp.
        * After that a matching effect queue is created. The resulting effect
        * queue is basically a snapshot of the animation at the time defined by
        * the time stamp.
        *
        * @return The created effect queue, ownership is transferred to the
        *         caller.
        */
        static CAknsEffectQueueItemData* AnimationToEffectQueueL(
            const CAknsAnimationItemData& aAnim,
            const TTime& aTimeStamp );
    };

#endif // AKNSALCONVERSIONUTIL_H

// End of File
