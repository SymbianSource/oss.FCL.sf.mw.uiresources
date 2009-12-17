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
* Description:  ?Description
*
*/


#ifndef AKNSIMAGEATTRIBUTEDATA_H
#define AKNSIMAGEATTRIBUTEDATA_H

//  INCLUDES
#include <e32std.h>
#include <AknsItemID.h>

// CLASS DECLARATIONS

/**
* Image attribute data structure.
*
* @since 2.0
*/
struct TAknsImageAttributeData
    {

    public: // Data

        // Attributes used
        TAknsImageAttribute iAttributes;

        // Coordinates for EAknsImageAttributeCoords
        TPoint iCoords;

        // Size for EAknsImageAttributeSize
        TSize iSize;

        // Alignment for EAknsImageAttributeAlign
        TAknsImageAlignment iAlignment;

    public: // Constructor

        inline TAknsImageAttributeData()
            : iAttributes( EAknsImageAttributeNone ),
            iCoords( 0, 0 ), iSize( 0, 0 ), iAlignment( EAknsImageAlignNone )
            {
            }

    public: // New functions
        
        inline void Set( 
            const TAknsImageAttributeData& aData )
            {
            iAttributes = aData.iAttributes;
            iCoords = aData.iCoords;
            iSize = aData.iSize;
            iAlignment = aData.iAlignment;
            };
    };

#endif // AKNSIMAGEATTRIBUTEDATA_H
