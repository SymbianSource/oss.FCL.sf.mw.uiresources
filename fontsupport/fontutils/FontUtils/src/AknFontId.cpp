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
* Description:   APIs to provide information about a font ID
*
*/



// INCLUDE FILES

//#include <coemain.h>

#include "AknFontIdOffsets.hrh"
#include "AknFontId.h"

// CONSTANTS

// ============================ MEMBER FUNCTIONS ===============================


EXPORT_C TBool TAknFontId::IsEncodedFont(TInt aFontId)
    {
    const static TUint encodedMask = 0x80000000; // 1 bits starting at bit 31 = 1000.0000.0000.0000.0000.0000.0000.0000
    return  (aFontId & encodedMask) != 0;
    }

TAknFontCategory TAknFontId::ExtractCategoryFromFontId(TInt aFontId)
    {
    const static TUint categoryMask = 0x0000000F; // 4 bits starting at bit 0 = 0000.0000.0000.0000.0000.0000.0000.1111
    TInt category = 0;
    if(IsEncodedFont(aFontId))
        {
        category = (aFontId & categoryMask);
        }
    return (TAknFontCategory)category;
    }

TFontStrokeWeight TAknFontId::ExtractWeightFromFontId(TInt aFontId)
    {
    const static TUint weightMask = 0x00000010; // 1 bits starting at bit 4 = 0000.0000.0000.0000.0000.0000.0001.0000
    TInt weight = 0;
    if(IsEncodedFont(aFontId))
        {
        weight = (aFontId & weightMask) >> 4;
        }
    return (TFontStrokeWeight)weight;
    }

TFontPosture TAknFontId::ExtractPostureFromFontId(TInt aFontId)
    {
    const static TUint postureMask = 0x00000020; // 1 bits starting at bit 5 = 0000.0000.0000.0000.0000.0000.0010.0000
    TInt posture = 0;
    if(IsEncodedFont(aFontId))
        {
        posture = (aFontId & postureMask) >> 5;
        }
    return (TFontPosture)posture;
    }

TBool TAknFontId::ExtractOutlineFromFontId(TInt aFontId)
    {
    const static TUint outlineMask = 0x00000040; // 1 bits starting at bit 6 = 0000.0000.0000.0000.0000.0000.0100.0000
    TInt outline = 0;
    if(IsEncodedFont(aFontId))
        {
        outline = (aFontId & outlineMask) >> 6;
        }
    return (TBool)outline;
    }

TInt TAknFontId::ExtractHeightFromFontId(TInt aFontId)
    {
    const static TUint heightMask = 0x7FE00000; // 10 bits starting at bit 21 = 0111.1111.1110.0000.0000.0000.0000.0000
    TInt height = 0;
    if(IsEncodedFont(aFontId))
        {
        height = (aFontId & heightMask) >> 21;
        }
    return height;
    }

EXPORT_C TInt TAknFontId::FontIdForStartupNormalFont()
    {
    return 0x81000001; // Encodes a primary font with small, fixed size.  Used for CEikonEnv::iNormalFont before a layout is available 
    }
//  End of File  
