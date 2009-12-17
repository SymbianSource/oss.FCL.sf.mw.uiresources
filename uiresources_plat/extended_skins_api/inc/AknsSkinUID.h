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


#ifndef AKNSSKINUID_H
#define AKNSSKINUID_H

//  INCLUDES
#include <e32std.h>
#include <AknsPkgID.h>
#include "AknsSrvVariant.hrh"

// CONSTANTS

//-----------------------------------------------------------------------------
// Skin UIDs
//-----------------------------------------------------------------------------

enum TAknsUIDSkin
    {
    EAknsUIDDefaultSystemSkin   = 0x101f84b9,   // AknSkins Skin UID
    EAknsUIDSkin1               = 0x101f84ba,   // AknSkins Skin UID
    EAknsUIDSkin2               = 0x101f84bb,   // AknSkins Skin UID
    EAknsUIDSkin3               = 0x101f84bc,   // AknSkins Skin UID
    EAknsUIDSkin4               = 0x101f84bd,   // AknSkins Skin UID
    EAknsUIDSkin5               = 0x101f84be,   // AknSkins Skin UID
    EAknsUIDSkin6               = 0x101f84bf,   // AknSkins Skin UID
    EAknsUIDSkinAH              = 0x101f855a    // AknSkins Skin UID
    };

static const TUid KAknsUIDDefaultSystemSkin = { EAknsUIDDefaultSystemSkin };
static const TUid KAknsUIDSkin1             = { EAknsUIDSkin1 };
static const TUid KAknsUIDSkin2             = { EAknsUIDSkin2 };
static const TUid KAknsUIDSkin3             = { EAknsUIDSkin3 };
static const TUid KAknsUIDSkin4             = { EAknsUIDSkin4 };
static const TUid KAknsUIDSkin5             = { EAknsUIDSkin5 };
static const TUid KAknsUIDSkin6             = { EAknsUIDSkin6 };
static const TUid KAknsUIDSkinAH            = { EAknsUIDSkinAH };

//-----------------------------------------------------------------------------
// Color set (palette + color based definitions) UIDs
//-----------------------------------------------------------------------------

enum TAknsUIDColorScheme
    {
    // Old values
    EAknsUIDColorScheme0    = 0x101f84c0,
    EAknsUIDColorScheme1    = 0x101f84c1,
    EAknsUIDColorScheme2    = 0x101f84c2,
    EAknsUIDColorScheme3    = 0x101f84c3,
    EAknsUIDColorScheme4    = 0x101f84c4,
    EAknsUIDColorScheme5    = 0x101f84c5,
    // New values
    EAknsUIDColorBlue       = 0x101f84c0,
    EAknsUIDColorGreen      = 0x101f84c1,
    EAknsUIDColorPurple     = 0x101f84c2,
    EAknsUIDColorGrey       = 0x101f85d1,
    EAknsUIDColorRed        = 0x101f84c3,
    EAknsUIDColorPink       = 0x101f84c4,
    EAknsUIDColorOrange     = 0x101f84c5,
    EAknsUIDColorPalette1   = 0x101f85d2,
    EAknsUIDColorPalette2   = 0x101f85d3,
    EAknsUIDColorPalette3   = 0x101f85d4,
    EAknsUIDColorPalette4   = 0x101f85d5,
    EAknsUIDColorPalette5   = 0x101f85d6,
    EAknsUIDColorPalette6   = 0x101f85d7,
    EAknsUIDColorPalette7   = 0x101f85d8,
    EAknsUIDColorPalette8   = 0x101f85d9,
    EAknsUIDColorPalette9   = 0x101f85da,
    EAknsUIDColorPalette10  = 0x101f85db,
    EAknsUIDColorPalette11  = 0x101f85dc,
    EAknsUIDColorPalette12  = 0x101f85dd,
    EAknsUIDColorPalette13  = 0x101f85de 
    };

// Old UID constants
static const TUid KAknsUIDColorScheme0      = { EAknsUIDColorScheme0 }; 
static const TUid KAknsUIDColorScheme1      = { EAknsUIDColorScheme1 }; 
static const TUid KAknsUIDColorScheme2      = { EAknsUIDColorScheme2 };
static const TUid KAknsUIDColorScheme3      = { EAknsUIDColorScheme3 };
static const TUid KAknsUIDColorScheme4      = { EAknsUIDColorScheme4 };
static const TUid KAknsUIDColorScheme5      = { EAknsUIDColorScheme5 };
// New UID constants
static const TUid KAknsUIDColorBlue         = { EAknsUIDColorBlue };
static const TUid KAknsUIDColorGreen        = { EAknsUIDColorGreen };
static const TUid KAknsUIDColorPurple       = { EAknsUIDColorPurple };
static const TUid KAknsUIDColorGrey         = { EAknsUIDColorGrey };
static const TUid KAknsUIDColorRed          = { EAknsUIDColorRed };
static const TUid KAknsUIDColorPink         = { EAknsUIDColorPink };
static const TUid KAknsUIDColorOrange       = { EAknsUIDColorOrange };
static const TUid KAknsUIDColorPalette1     = { EAknsUIDColorPalette1 };
static const TUid KAknsUIDColorPalette2     = { EAknsUIDColorPalette2 };
static const TUid KAknsUIDColorPalette3     = { EAknsUIDColorPalette3 };
static const TUid KAknsUIDColorPalette4     = { EAknsUIDColorPalette4 };
static const TUid KAknsUIDColorPalette5     = { EAknsUIDColorPalette5 };
static const TUid KAknsUIDColorPalette6     = { EAknsUIDColorPalette6 };
static const TUid KAknsUIDColorPalette7     = { EAknsUIDColorPalette7 };
static const TUid KAknsUIDColorPalette8     = { EAknsUIDColorPalette8 };
static const TUid KAknsUIDColorPalette9     = { EAknsUIDColorPalette9 };
static const TUid KAknsUIDColorPalette10    = { EAknsUIDColorPalette10 };
static const TUid KAknsUIDColorPalette11    = { EAknsUIDColorPalette11 };
static const TUid KAknsUIDColorPalette12    = { EAknsUIDColorPalette12 };
static const TUid KAknsUIDColorPalette13    = { EAknsUIDColorPalette13 };

//-----------------------------------------------------------------------------
// Skin package IDs
//-----------------------------------------------------------------------------
static const TInt KProductSpecificDefaultTheme = EAknsUIDDefaultSystemSkin;

static const TAknsPkgID KAknsPIDS60DefaultSkin      = { EAknsUIDDefaultSystemSkin, 0 };
static const TAknsPkgID KAknsPIDProductDefaultSkin  = { KProductSpecificDefaultTheme,0};
static const TAknsPkgID KAknsPIDSkin1               = { EAknsUIDSkin1, 0 };
static const TAknsPkgID KAknsPIDSkin2               = { EAknsUIDSkin2, 0 };
static const TAknsPkgID KAknsPIDSkin3               = { EAknsUIDSkin3, 0 };
static const TAknsPkgID KAknsPIDSkin4               = { EAknsUIDSkin4, 0 };
static const TAknsPkgID KAknsPIDSkin5               = { EAknsUIDSkin5, 0 };
static const TAknsPkgID KAknsPIDSkin6               = { EAknsUIDSkin6, 0 };
static const TAknsPkgID KAknsPIDSkinAH              = { EAknsUIDSkinAH, 0 };

// Old color skin packages
static const TAknsPkgID KAknsPIDColorScheme0        = { EAknsUIDColorScheme0, 0 };
static const TAknsPkgID KAknsPIDColorScheme1        = { EAknsUIDColorScheme1, 0 };
static const TAknsPkgID KAknsPIDColorScheme2        = { EAknsUIDColorScheme2, 0 };
static const TAknsPkgID KAknsPIDColorScheme3        = { EAknsUIDColorScheme3, 0 };
static const TAknsPkgID KAknsPIDColorScheme4        = { EAknsUIDColorScheme4, 0 };
static const TAknsPkgID KAknsPIDColorScheme5        = { EAknsUIDColorScheme5, 0 };
// New color skin packages
static const TAknsPkgID KAknsPIDColorBlue           = { EAknsUIDColorBlue, 0 };
static const TAknsPkgID KAknsPIDColorGreen          = { EAknsUIDColorGreen, 0 };
static const TAknsPkgID KAknsPIDColorPurple         = { EAknsUIDColorPurple, 0 };
static const TAknsPkgID KAknsPIDColorGrey           = { EAknsUIDColorGrey, 0 };
static const TAknsPkgID KAknsPIDColorRed            = { EAknsUIDColorRed, 0 };
static const TAknsPkgID KAknsPIDColorPink           = { EAknsUIDColorPink, 0 };
static const TAknsPkgID KAknsPIDColorOrange         = { EAknsUIDColorOrange, 0 };
static const TAknsPkgID KAknsPIDColorPalette1       = { EAknsUIDColorPalette1, 0 };
static const TAknsPkgID KAknsPIDColorPalette2       = { EAknsUIDColorPalette2, 0 };
static const TAknsPkgID KAknsPIDColorPalette3       = { EAknsUIDColorPalette3, 0 };
static const TAknsPkgID KAknsPIDColorPalette4       = { EAknsUIDColorPalette4, 0 };
static const TAknsPkgID KAknsPIDColorPalette5       = { EAknsUIDColorPalette5, 0 };
static const TAknsPkgID KAknsPIDColorPalette6       = { EAknsUIDColorPalette6, 0 };
static const TAknsPkgID KAknsPIDColorPalette7       = { EAknsUIDColorPalette7, 0 };
static const TAknsPkgID KAknsPIDColorPalette8       = { EAknsUIDColorPalette8, 0 };
static const TAknsPkgID KAknsPIDColorPalette9       = { EAknsUIDColorPalette9, 0 };
static const TAknsPkgID KAknsPIDColorPalette10      = { EAknsUIDColorPalette10, 0 };
static const TAknsPkgID KAknsPIDColorPalette11      = { EAknsUIDColorPalette11, 0 };
static const TAknsPkgID KAknsPIDColorPalette12      = { EAknsUIDColorPalette12, 0 };
static const TAknsPkgID KAknsPIDColorPalette13      = { EAknsUIDColorPalette13, 0 };

#endif // AKNSSKINUID_H

// End of File
