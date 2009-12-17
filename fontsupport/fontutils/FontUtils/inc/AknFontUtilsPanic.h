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
* Description:   Panic codes to be used internally by FontUtils own implementations. Not exported
*
*/



#if !defined(__AKNFONTUTILSPANIC_H__)
#define __AKNFONTUTILSPANIC_H__

#include <e32def.h>

enum TAknFontUtilsPanic
    {
    EAknPanicLayoutMissing
    };

GLREF_C void Panic(TAknFontUtilsPanic aPanic);

#endif
