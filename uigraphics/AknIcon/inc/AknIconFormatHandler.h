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
*
*/



#ifndef AKN_ICON_FORMAT_HANDLER_H
#define AKN_ICON_FORMAT_HANDLER_H

// INCLUDES
#include <e32std.h>
#include <gdi.h>
#include "AknIconUtils.h"

// FORWARD DECLARATIONS
class CFbsBitmap;
class MAknIconChangeObserver;

// CONSTANTS

// CLASS DECLARATION

/**
* MAknIconFormatHandler
*/
class MAknIconFormatHandler
	{
    public:  // Constructors and destructor
        
        virtual inline ~MAknIconFormatHandler() {}
        
    public: // New functions

        virtual void SetScaleMode( TScaleMode aMode ) = 0;

        virtual void SetRotation( TInt aAngle ) = 0;

        virtual void GetContentDimensionsL( TAknContentDimensions& aContentDimensions ) = 0;

        virtual void SetObserver( MAknIconChangeObserver* aObserver ) = 0;

        virtual void SupportedDisplayMode(
            TDisplayMode& aMode, TDisplayMode aPreferredMode ) = 0;

        virtual void PrepareIconL( const TDesC8& aIconData, TInt& aHandle ) = 0;

        virtual void UsePreparedIconL( TInt aHandle ) = 0;

        virtual void RenderPreparedIconL(
            CFbsBitmap* aBitmap, CFbsBitmap* aMask,TSize Bitmapsize=TSize(0,0),TDisplayMode Bitmapdepth=ENone,TDisplayMode Maskdepth=ENone,  TRgb aColor = TRgb(0,0,0),  TBool aMarginFlag= EFalse) = 0;

        virtual void UnprepareIcon( TInt aHandle ) = 0;

        virtual void SetAnimated( TBool aAnimated ) = 0;

        virtual TInt IconFormatType() = 0;
    };

GLDEF_C void DeleteIconFormatHandler( TAny* aObj );

#endif      // AKN_ICON_FORMAT_HANDLER_H
            
// End of File
