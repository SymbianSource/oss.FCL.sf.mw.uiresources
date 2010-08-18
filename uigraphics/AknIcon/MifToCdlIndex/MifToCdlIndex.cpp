/*
* Copyright (c) 2006 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   Implementation of MifToCdlIndex tool.
*
*/



// disable "identifier was truncated to '255' characters in the browser information" warning
#pragma warning (disable:4786)

// disable "decorated name length exceeded, name was truncated" warning	
#pragma warning (disable:4503)


#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <CdlCompilerToolkit/CdlTkUtil.h>
#include "MifHandler.h"
#include "DllCreator.h"

using namespace std;
using namespace CdlCompilerToolkit;


// In debug builds, we want the debugger to catch exceptions. In release mode we want
// to report exceptions to the command line user.
// The EXCEPTION_HANDLING macro flag controls this behavior in main()
#ifndef _DEBUG
#define EXCEPTION_HANDLING
#endif

class MainArgsErr : public CdlCompilerToolkitErr
	{
	void Show(ostream& aStream) const;
	};

void MainArgsErr::Show(ostream& stream) const
	{
	stream << endl;
	stream << "MifToCdlIndex [<options>] <MifFile> <DllName> <DllUid>" << endl;
	stream << "  <options> are:" << endl;
	stream << "    -p<output path>" << endl;
	stream << "    -s  write instance source code only, no DLL source" << endl;
	}

int DoMain(int argc, char* argv[])
	{
	CdlTkUtil::SetCommandLine(argc, argv);

	vector<string> args;
	copy(argv, argv+argc, back_inserter(args));

	if (args.size() < 2)
		{
		throw MainArgsErr();
		}

	args.erase(args.begin());

	bool writeDll = true;
	while (args[0].size() >= 2 && args[0][0] == '-')
		{
		switch (args[0][1])
			{
			case 'p':
				CdlTkUtil::SetOutputPath(args[0].substr(2));
				break;

			case 's':
				writeDll = false;
				break;

			default:
				throw MainArgsErr();
				break;
			}

		args.erase(args.begin());
		}

	if (args.size() != 3)
		{
		throw MainArgsErr();
		}

	string& mifName = args[0];
	string& dllName = args[1];
	string& dllUid = args[2];

	MifHandler mif;
	mif.Read(mifName);
	const MifIndex& index = mif.Index();
	mif.Modify(dllUid);
	mif.Write(mifName);

// START: Raptor chnages for linux
	const char* epocRoot = getenv("EPOCROOT");
	if(NULL == epocRoot)
	    {
	    throw MainArgsErr();
	    }
	std::string epocRootStr(epocRoot); 
	std::string finalStr = epocRootStr + "epoc32//include//platform//mw//MifHeader.cdl";

	DllCreator dll(finalStr);
//  END
	dll.SetNameAndUid(dllName, dllUid);
	dll.SetIndex(index);
	dll.WriteSource();
	if (writeDll)
		dll.WriteDll();

	return 0;
	}


int main(int argc, char* argv[])
	{
#ifdef EXCEPTION_HANDLING
	try
		{
#endif
		return DoMain(argc, argv);
#ifdef EXCEPTION_HANDLING
		}
	catch (const CdlCompilerToolkitErr& aErr)
		{
		aErr.Show(cerr);
		}

	return 0;
#endif
	}
