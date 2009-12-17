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
* Description:  Factory for different icon format handlers.
*
*
*/



#ifndef AKN_ICON_FORMAT_HANDLER_FACTORY_H
#define AKN_ICON_FORMAT_HANDLER_FACTORY_H

// INCLUDES
#include <e32std.h>
#include <gdi.h>
// FORWARD DECLARATIONS
class MAknIconFormatHandler;

// CLASS DECLARATION

/**
* AknIconFormatFactory
*/
class AknIconFormatHandlerFactory
	{
    public:  // New methods
        
        static MAknIconFormatHandler* NewIconFormatHandlerL(
            const TInt aType ,TSize BitmapSize=TSize(0,0),TDisplayMode aBitmapDspMode=ENone,TDisplayMode aMaskDspMode=ENone);

    private:
        // Private constructor.
        AknIconFormatHandlerFactory();
    };

#endif      // AKN_ICON_FORMAT_HANDLER_FACTORY_H
            
// End of File
