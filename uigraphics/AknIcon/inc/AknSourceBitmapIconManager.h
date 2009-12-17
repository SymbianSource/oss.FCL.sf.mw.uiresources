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
* Description:   Specialized icon manager, where icon is constructed based on
*                existing CFbsBitmap instances.
*
*/




#ifndef AKN_SOURCE_BITMAP_ICON_MANAGER_H
#define AKN_SOURCE_BITMAP_ICON_MANAGER_H

// INCLUDES
#include <e32std.h>
#include <fbs.h>
#include "AknIconManager.h"

// CONSTANTS

// CLASS DECLARATION

/**
* class CAknSourceBitmapIconManager.
* @internal
*/
NONSHARABLE_CLASS(CAknSourceBitmapIconManager) : public CAknIconManager
	{
    public:  // Constructors and destructor
        
        /**
        * Ownership of aSourceIcon is transferred to
        * this object.
        */ 
        CAknSourceBitmapIconManager( CAknIcon* aSourceIcon );
        
        /**
        * Destructor.
        */
        ~CAknSourceBitmapIconManager();

    private: // From CAknIconManager

        /**
        * Virtual method.
        * Loads a bitmap icon.
        */
        void LoadBitmapIconL();

        /**
        * Virtual method.
        * Initializes the icon with the given parameters.
        */
        virtual void DoInitializeIconL(
            const TSize& aSize,
            TScaleMode aMode,
            TInt aAngle );

    private:    // Data

        // This class is constructed using existing CFbsBitmap
        // objects. In that case, bitmaps are not shared and stored
        // in server side in that case, because there is no way to "identify"
        // them for sharing (like by filename and IDs).
        CFbsBitmap* iSourceBitmap; // owned
        CFbsBitmap* iSourceMask; // owned
    };

#endif      // AKN_SOURCE_BITMAP_ICON_MANAGER_H
            
// End of File
