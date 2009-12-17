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
* Description:  Animated pictograph definition key used for binary search.
*
*/


#ifndef AKN_ANIMATED_PICTOGRAPH_DEF_KEY_H
#define AKN_ANIMATED_PICTOGRAPH_DEF_KEY_H

//  INCLUDES
#include <e32std.h>

// CLASS DECLARATION

/**
* Animated pictograph definition key used for binary search.
* @internal
*/
NONSHARABLE_CLASS(TAknAnimatedPictographDefKey) : public TKey
    {
    public: // Constructor

        /**
        * C++ default constructor.
        */
        TAknAnimatedPictographDefKey();

    public: // From TKey

        TAny* At( TInt aIndex ) const;
    };

#endif      // AKN_ANIMATED_PICTOGRAPH_DEF_KEY_H
            
// End of File
