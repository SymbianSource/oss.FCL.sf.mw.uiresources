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
#include "CdlUserPackageExplorer.h"

#include <bautils.h>


EXPORT_C CCdlUserPackageExplorer::~CCdlUserPackageExplorer()
	{
	iLanguageDowngradePath.Close();
	}

EXPORT_C void CCdlUserPackageExplorer::ConstructL()
	{
	RFs fs;
	User::LeaveIfError(fs.Connect());
	CleanupClosePushL(fs);
	BaflUtils::GetDowngradePathL(fs, User::Language(), iLanguageDowngradePath);
	CleanupStack::PopAndDestroy();	// fs
	}

EXPORT_C TCdlInstanceComparison CCdlUserPackageExplorer::Compare(const CDL_User_Package::CInstance& aFirst, 
																 const CDL_User_Package::CInstance& aSecond) const
	{
	if (aFirst.uid() != aSecond.uid())
		return ECdlInstancesNotComparable;

	if (LanguageRank(aFirst.language()) <= LanguageRank(aSecond.language()))
		return EFirstCdlInstanceBetter;
	else
		return ESecondCdlInstanceBetter;
	}

TInt CCdlUserPackageExplorer::LanguageRank(TLanguage aLang) const
	{
	TInt rank = iLanguageDowngradePath.Find(aLang);
	if (rank == KErrNotFound)
		rank = iLanguageDowngradePath.Count();
	return rank;
	}
