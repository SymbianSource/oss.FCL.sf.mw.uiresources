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
*                + am/pm symbols for Basque, Epoc code 401
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
	_S("Astelehena"),
	_S("Asteartea"),
	_S("Asteazkena"),
	_S("Osteguna"),
	_S("Ostirala"),
	_S("Larunbata"),
	_S("Igandea")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("al."),
	_S("ar."),
	_S("az."),
	_S("og."),
	_S("ol."),
	_S("lr."),
	_S("ig.")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("Urtarrila"),
	_S("Otsaila"),
	_S("Martxoa"),
	_S("Apirila"),
	_S("Maiatza"),
	_S("Ekaina"),
	_S("Uztaila"),
	_S("Abuztua"),
	_S("Iraila"),
	_S("Urria"),
	_S("Azaroa"),
	_S("Abendua")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("Urt"),
	_S("Ots"),
	_S("Mar"),
	_S("Api"),
	_S("Mai"),
	_S("Eka"),
	_S("Uzt"),
	_S("Abu"),
	_S("Ira"),
	_S("Urr"),
	_S("Aza"),
	_S("Abe")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File
