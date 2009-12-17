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
#ifndef CDLUSERPACKAGEEXPLORER_H
#define CDLUSERPACKAGEEXPLORER_H

#include <CdlExplorer.h>
#include <userpckg.cdl.h>

/**
* A package explorer specialised for user packages. As with all CDL explorers, this header
* and class should only be used in .cpp files, not in headers.
*/
class CCdlUserPackageExplorer : public CCdlPackageExplorer<CDL_User_Package::CInstance>
	{
public:
	IMPORT_C ~CCdlUserPackageExplorer();
	IMPORT_C void ConstructL();

private: // from base class
	IMPORT_C TCdlInstanceComparison Compare(const CDL_User_Package::CInstance& aFirst, 
											const CDL_User_Package::CInstance& aSecond) const;

private:
	TInt LanguageRank(TLanguage aLang) const;

private:
	RArray<TLanguage> iLanguageDowngradePath;	// owned
	};

#endif
