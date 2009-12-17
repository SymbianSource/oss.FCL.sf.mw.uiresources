/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
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
*/

#ifndef CDLPANIC_H
#define CDLPANIC_H

enum TCdlEngPanic
	{
	ECdlEngPanic_NoEngine,
	ECdlEngPanic_CustomisationNotPresent,
	ECdlEngPanic_IncompatibleSubLayer,
	ECdlEngPanic_NoImplementation,
	ECdlEngPanic_CantMergeUnownedToOwned,
	ECdlEngPanic_RefIndexOutOfRange,
	ECdlEngPanic_BadRefCount,
	ECdlEngPanic_NoInstanceLoaded,
	ECdlEngPanic_ProxyNotInitialised,
	ECdlEngPanic_LibraryAlreadySet,
	ECdlEngPanic_BadChangeType,
	ECdlEngPanic_DeleteAssertionFail,
	ECdlEngPanic_LastApiIdNotYetSet,
	ECdlEngPanic_LibraryCanBeFound
	};

void Panic(TCdlEngPanic aReason);

#endif
