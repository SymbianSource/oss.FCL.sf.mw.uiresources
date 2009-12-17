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
#ifndef CDLENGDEF_H
#define CDLENGDEF_H

#include <CdlDef.h>
#include <e32base.h>
#include <CdlTypes.h>

struct SCdlMain
	{
	TInt iMajorVer;
	TInt iMinorVer;
	const TAny* iData;		// SCdlCustomisation* for v1.0
	};


struct SCdlInterface
	{
	TInt iMajorEngVer;
	TInt iMinorEngVer;
	const TDesC* iName;
	TUid iUid;
	TInt iMajorVer;
	TInt iMinorVer;
	TUint iFlags;
	TInt iApiSize;
	TAny* iSpare;
	};

struct SCdlCustomisation
	{
	TInt iId;
	const SCdlInterface* iInterface;
	const TAny* iImpl;
	};

#define CDL_CUSTOMISATION(name) { name::KCdlInstanceId, &name::KCdlInterface, &name::KCdlImpl }


const TUint KCdlFlagRomOnly = KCdlFlagRomOnlyValue;
const TUint KCdlFlags_1_0 = KCdlFlagRomOnly;

#endif
