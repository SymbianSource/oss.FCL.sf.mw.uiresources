/*
* Copyright (c) 2004 Nokia Corporation and/or its subsidiary(-ies).
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
#include <e32std.h>
#include "AknFontUtilsPanic.h"

// CONSTANTS

// ============================= GLOBAL FUNCTIONS ===========================================

GLDEF_C void Panic( TAknFontUtilsPanic aPanic )
    {
    _LIT(KAknFontUtilsCategory, "Font Utilities" );
    User::Panic( KAknFontUtilsCategory, aPanic );
    }

// ============================ MEMBER FUNCTIONS ===============================

//  End of File  
