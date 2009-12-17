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
* Description:  Defines the item id class used to identify the skin items.
*
*/


// INCLUDE FILES
#include <AknsItemID.h>

// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// TAknsItemID::LinearOrder
// -----------------------------------------------------------------------------
//
EXPORT_C TInt TAknsItemID::LinearOrder( const TAknsItemID& aFirst,
    const TAknsItemID& aSecond )
    {
    return aFirst.iMinor-aSecond.iMinor ? aFirst.iMinor-aSecond.iMinor :
        aFirst.iMajor-aSecond.iMajor;
    }

//  End of File
