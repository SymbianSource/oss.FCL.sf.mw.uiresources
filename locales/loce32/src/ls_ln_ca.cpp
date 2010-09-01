/*
* Copyright (c) 2005 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   Day & Month names, abbreviations and datesuffix table
*                + am/pm symbols for Catalan, Epoc code 44
*
*/



//  EXTERNAL RESOURCES

//  Include Files

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS

// The suffix table
const TText * const LLanguage::DateSuffixTable[KMaxSuffixes] =
         {
         _S(""),_S(""),_S(""),_S(""),_S(""),
         _S(""),_S(""),_S(""),_S(""),_S(""),
         _S(""),_S(""),_S(""),_S(""),_S(""),
         _S(""),_S(""),_S(""),_S(""),_S(""),
         _S(""),_S(""),_S(""),_S(""),_S(""),
         _S(""),_S(""),_S(""),_S(""),_S(""),
         _S("")
         };
// The day names
const TText * const LLanguage::DayTable[KMaxDays] =
	{
	_S("Dilluns"),
	_S("Dimarts"),
	_S("Dimecres"),
	_S("Dijous"),
	_S("Divendres"),
	_S("Dissabte"),
	_S("Diumenge")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Dl."),
	_S("Dt."),
	_S("Dc."),
	_S("Dj."),
	_S("Dv."),
	_S("Ds."),
	_S("Dg.")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("Gener"),
	_S("Febrer"),
    _S("Mar\x00e7"),
	_S("Abril"),
	_S("Maig"),
	_S("Juny"),
	_S("Juliol"),
	_S("Agost"),
	_S("Setembre"),
	_S("Octubre"),
	_S("Novembre"),
	_S("Desembre")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("Gen."),
	_S("Febr."),
    _S("Mar\x00e7"),
	_S("Abr."),
	_S("Maig"),
	_S("Juny"),
	_S("Jul."),
	_S("Ag."),
	_S("Set."),
	_S("Oct."),
	_S("Nov."),
	_S("Des.")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File
