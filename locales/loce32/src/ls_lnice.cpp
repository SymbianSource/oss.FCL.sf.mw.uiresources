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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Icelandic language, ELOCL.15
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  
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
	_S("M�nudagur"),
	_S("�ri�judagur"),
	_S("Mi�vikudagur"),
	_S("Fimmtudagur"),
	_S("F�studagur"),
	_S("Laugardagur"),
	_S("Sunnudagur")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("M�n."),
	_S("�ri."),
	_S("Mi�."),
	_S("Fim."),
	_S("F�s."),
	_S("Lau"),
	_S("Sun.")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("Jan�ar"),
	_S("Febr�ar"),
	_S("Mars"),
	_S("Apr�l"),
	_S("Ma�"),
	_S("J�n�"),
	_S("J�l�"),
	_S("�g�st"),
	_S("September"),
	_S("Okt�ber"),
	_S("N�vember"),
	_S("Desember")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("Jan."),
	_S("Feb."),
	_S("Mar."),
	_S("Apr."),
	_S("Ma�."),
	_S("J�n."),
	_S("J�l."),
	_S("�g�."),
	_S("Sep."),
	_S("Okt."),
	_S("N�v."),
	_S("Des.")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("fh"),_S("eh")};

//  End of File
