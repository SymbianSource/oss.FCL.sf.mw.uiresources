/*
* Copyright (c) 2002-2006 Nokia Corporation and/or its subsidiary(-ies).
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


#ifndef AKNLAYOUT2ID_H
#define AKNLAYOUT2ID_H

#include <e32std.h>

/**
* Enum for identifying regional variants
*/
enum TAknLayoutId
	{
	/**
	* Identifies left to right layouts
	*/
	EAknLayoutIdELAF = 0,
	/**
	* Identifies right to left layouts
	*/
	EAknLayoutIdABRW = 1,
	/**
	* Identifies Asian and Pacific layouts
	*/
	EAknLayoutIdAPAC = 2
	};

#endif
// End of File
