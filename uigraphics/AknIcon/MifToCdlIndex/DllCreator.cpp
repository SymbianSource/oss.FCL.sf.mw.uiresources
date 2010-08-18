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

#include "DllCreator.h"
#include <CdlCompilerToolkit/CdlTkProcess.h>
#include <sstream>

DllCreator::DllCreator( const std::string& aFileName )
:	iInterface(*CCdlTkCdlFileParser(aFileName).LoadAndParse(true)),
	iInstance(iInterface)
	{
	iInstance.TemplateAllImplementations();
	}

void DllCreator::SetNameAndUid(const string& aDllName, const string& dllUid)
	{
	iUid = CdlTkUtil::ParseInt(dllUid);
	iName = aDllName;
	iInstance.SetName(iName+"_inst");
	}

void DllCreator::SetIndex(const MifIndex& index)
	{
	CCdlTkImplementation& impl = *iInstance.Impl().Find("indicies");
	std::string content;
	for (MifIndex::const_iterator pIdx = index.begin(); pIdx != index.end(); ++pIdx)
		{
		stringstream strm;
        strm << "\t" << pIdx->iOffset << "," << endl;
        strm << "\t" << pIdx->iLength << "," << endl;
		CdlTkUtil::AppendString(content, strm.str());
		}
	std::string defn = impl.Definition();
	const std::string repTarget("?array_contents");
	impl.SetDefinition(CdlTkUtil::Replace(repTarget, content, defn));
	}

void DllCreator::WriteSource()
	{
	CCdlTkWriteInstance writer(iInstance);
	writer.Process();
	}

void DllCreator::WriteDll()
	{
	CCdlTkDll dll;
	dll.AddInstance(iInstance);
	dll.SetName(iName);
	dll.SetUid(iUid);
	CCdlTkWriteDll writeDll(dll);
	writeDll.Process();
	}

