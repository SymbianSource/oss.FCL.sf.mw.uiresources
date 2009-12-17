/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Skin content structures and macros.
*
*/


#ifndef AKNSSKINCONTENT_H
#define AKNSSKINCONTENT_H

//  INCLUDES
#include "AknsSrvItemDef.h"
#include <AknsSkinUID.h>
#include <AknsConstants.h>

// MACROS

// Verify that macro is not used elsewhere
#ifdef AKNS_DTPP
#error AknsSkinContent.h: Internal AKNS_DTPP macro already defined
#endif

/**
* Macro used to cast definition constants to polymorpic pointers
*/
#define AKNS_DTPP(a) {EAknsSrvMPPtrAbsoluteROM,static_cast<const TAny*>(&(a))}

// CONSTANTS

// ============================================================================
// Skin definitions
// ============================================================================

//lint -e785 Incomplete aggregates are allowed

#include "AknsSkinContentColorScheme.inl"

//lint +e785

// ============================================================================
// Skin list
// ============================================================================

static const TAknsSrvSkinDef KAknsSrvSkins[] = {

    // COLOR SCHEMES

    { {EAknsUIDColorBlue,0},
        0,
        0,
        &KAknsColorschemeBlueColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorGreen,0},
        0,
        0,
        &KAknsColorschemeGreenColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPurple,0},
        0,
        0,
        &KAknsColorschemePurpleColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorGrey,0},
        0,
        0,
        &KAknsColorschemeGreyColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorRed,0},
        0,
        0,
        &KAknsColorschemeRedColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPink,0},
        0,
        0,
        &KAknsColorschemePinkColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorOrange,0},
        0,
        0,
        &KAknsColorschemeOrangeColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPalette1,0},
        0,
        0,
        &KAknsColorschemePalette1ColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPalette2,0},
        0,
        0,
        &KAknsColorschemePalette2ColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPalette3,0},
        0,
        0,
        &KAknsColorschemePalette3ColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPalette4,0},
        0,
        0,
        &KAknsColorschemePalette4ColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPalette5,0},
        0,
        0,
        &KAknsColorschemePalette5ColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPalette6,0},
        0,
        0,
        &KAknsColorschemePalette6ColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPalette7,0},
        0,
        0,
        &KAknsColorschemePalette7ColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPalette8,0},
        0,
        0,
        &KAknsColorschemePalette8ColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPalette9,0},
        0,
        0,
        &KAknsColorschemePalette9ColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPalette10,0},
        0,
        0,
        &KAknsColorschemePalette10ColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPalette11,0},
        0,
        0,
        &KAknsColorschemePalette11ColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPalette12,0},
        0,
        0,
        &KAknsColorschemePalette12ColorSetClass,
        {0,0}
    },

    { {EAknsUIDColorPalette13,0},
        0,
        0,
        &KAknsColorschemePalette13ColorSetClass,
        {0,0}
    }

    };
static const TInt KAknsSrvSkinsN = (20);

// MACROS (continued)

// Undefine internal macro
#undef AKNS_DTPP

#endif      // AKNSSKINCONTENT_H

// End of File
