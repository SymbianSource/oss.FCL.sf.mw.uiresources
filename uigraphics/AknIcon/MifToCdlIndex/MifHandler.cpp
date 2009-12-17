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

#include "MifHandler.h"
#include <fstream>
#include <CdlCompilerToolkit/CdlTkUtil.h>
using namespace std;
using namespace CdlCompilerToolkit;

void MifHandler::Read(const string& mifName)
	{
	ifstream file;
	CdlTkUtil::OpenInput(file, mifName, ios::binary);

	file.seekg(0, ios::end);
	int fileSize = file.tellg();
	file.seekg(0);

	if (!file.read((char*)&iHeader.iV2, sizeof(iHeader.iV2)))
		throw CdlTkAssert(mifName + " - header read failed");
	if (iHeader.iV2.iVersion < 2)
		throw CdlTkAssert(mifName + " - cannot convert old mif file");
	if (iHeader.iV2.iVersion > 2)
		throw CdlTkAssert(mifName + " - mif file already converted");
	
	iIndex.resize(iHeader.iV2.iArrayLen);
	iIndexBytes = iHeader.iV2.iArrayLen * sizeof(MifIdx);
	if (!file.read((char*)&iIndex[0], iIndexBytes))
		throw CdlTkAssert(mifName + " - index read failed");

	iDataBytes = fileSize - sizeof(iHeader.iV2) - iIndexBytes;
	iData.resize(iDataBytes+1);
	if (!file.read(&iData[0], iDataBytes))
		throw CdlTkAssert(mifName + " - data read failed");

	file.close();
	}

const MifIndex& MifHandler::Index()
	{
	return iIndex;
	}

void MifHandler::Modify(const string& dllUid)
	{
	int uid = CdlTkUtil::ParseInt(dllUid);
	iHeader.iV2.iVersion = 3;
	iHeader.iV2.iOffset = sizeof(iHeader);
	iHeader.iV3.iIndexDllUid = uid;

	// added on an extra header field, but removed the index table
	int offsetShift = sizeof(MifHeaderV3) - iIndexBytes;

	for (int i=0; i<iIndex.size(); i++)
		{
		MifIdx& index = iIndex[i];
		if (index.iOffset > 0)
			index.iOffset += offsetShift;
		}
	}

void MifHandler::Write(const string& mifName)
	{
	BackupOriginal(mifName);
	ofstream file;
	CdlTkUtil::OpenOutput(file, mifName, ios::binary);

	file.write((char*)&iHeader, sizeof(iHeader));
	file.write(&iData[0], iDataBytes);

	file.close();
	}

void MifHandler::BackupOriginal(const string& mifName)
	{
	CdlTkUtil::CopyFile(mifName, mifName+".orig", ios::binary);
	}


