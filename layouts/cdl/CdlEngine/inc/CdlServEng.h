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
#ifndef CDLSERVENG_H
#define CDLSERVENG_H

#include "CdlEngine.h"

const TInt KCdlRefsSizeChanged = 1;

/**
* CDL server has a CDL engine of it's own. This is the server side equivalent of the
* CdlEngine class. 
*/
class CdlServerEngine
	{
public:
	// General public API
	IMPORT_C static CCdlEngineRef* CreateCdlEngineL();
	inline static CCdlRefCollection* FileContentsLC(const TDesC& aFileName) { return CdlEngine::FileContentsLC(aFileName); }
	};

#endif
