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


#ifndef MIFHANDLER_H
#define MIFHANDLER_H
#include <string>
#include <vector>
using namespace std;

class MifIdx
	{
public:
	int iOffset;
	int iLength;
	};

typedef vector<MifIdx> MifIndex;

struct MifHeaderV2
	{
public:
	int iUid;
	int iVersion;
	int iOffset;
	int iArrayLen;
	};

struct MifHeaderV3
	{
	int iIndexDllUid;
	};

struct MifHeader
	{
	MifHeaderV2 iV2;
	MifHeaderV3 iV3;
	};

class MifHandler
	{
public:
	void Read(const string& mifName);
	const MifIndex& Index();
	void Modify(const string& dllUid);
	void Write(const string& mifName);
private:
	void BackupOriginal(const string& mifName);
private:
	MifHeader iHeader;
	MifIndex iIndex;
	int iIndexBytes;
	int iDataBytes;
	vector<char> iData;
	};

#endif
