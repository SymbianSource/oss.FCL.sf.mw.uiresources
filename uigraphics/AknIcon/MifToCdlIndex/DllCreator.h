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

// disable "identifier was truncated to '255' characters in the browser information" warning
#pragma warning (disable:4786)

// disable "decorated name length exceeded, name was truncated" warning	
#pragma warning (disable:4503)
#ifndef DLLCREATOR_H
#define DLLCREATOR_H

#include <string>
#include "MifHandler.h"
#include <CdlCompilerToolkit/CdlTkInterface.h>
#include <CdlCompilerToolkit/CdlTkInstance.h>
using namespace std;
using namespace CdlCompilerToolkit;

class DllCreator
	{
public:
	DllCreator( const std::string& aFileName );
	void SetNameAndUid(const string& aDllName, const string& dllUid);
	void SetIndex(const MifIndex& index);
	void WriteSource();
	void WriteDll();
private:
	CCdlTkInterface iInterface;
	CCdlTkInstance iInstance;
	string iName;
	int iUid;
	};

#endif
