/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Hungarian language, ELOCL.17
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
	_S("h�tf\x0151"),
	_S("kedd"),
	_S("szerda"),
	_S("cs�t�rt�k"),
	_S("p�ntek"),
	_S("szombat"),
	_S("vas�rnap")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("h"),
	_S("k"),
	_S("sze"),
	_S("cs"),
	_S("p"),
	_S("szo"),
	_S("v")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("janu�r"),
	_S("febru�r"),
	_S("m�rcius"),
	_S("�prilis"),
	_S("m�jus"),
	_S("j�nius"),
	_S("j�lius"),
	_S("augusztus"),
	_S("szeptember"),
	_S("okt�ber"),
	_S("november"),
	_S("december")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("jan."),
	_S("febr."),
	_S("m�rc."),
	_S("�pr."),
	_S("m�j."),
	_S("j�n."),
	_S("j�l."),
	_S("aug."),
	_S("szept."),
	_S("okt."),
	_S("nov."),
	_S("dec.")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("de."),_S("du.")};

//  End of File
