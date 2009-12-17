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
#ifndef CDLCLIENTSERVERSTD_H
#define CDLCLIENTSERVERSTD_H

/**
* used to send information about customisation states between client and server
*/
struct SCdlServerChange
	{
	enum TType
		{
		EGlobalCustomisation,
		EAvailableRefs
		};
	TType iType;
	TInt iSize;					// size in bytes of the customisation state when exported
	};

#endif
