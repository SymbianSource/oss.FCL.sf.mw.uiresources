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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Lithuanian language, ELOCL.68
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  

//  The suffix table
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
	_S("pirmadienis"),
	_S("antradienis"),
	_S("tre\x010D" L"iadienis"),
	_S("ketvirtadienis"),
	_S("penktadienis"),
	_S("šeštadienis"),
	_S("sekmadienis")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Pr"),
	_S("An"),
	_S("Tr"),
	_S("Kt"),
	_S("Pn"),
	_S("Št"),
	_S("Sk")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("sausis"),
	_S("vasaris"),
	_S("kovas"),
	_S("balandis"),
	_S("geguž\x0117"),
	_S("birželis"),
	_S("liepa"),
	_S("rugpj\x016Bt" L"is"),
	_S("rugs\x0117" L"jis"),
	_S("spalis"),
	_S("lapkritis"),
	_S("gruodis")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("Sau"),
	_S("Vas"),
	_S("Kov"),
	_S("Bal"),
	_S("Geg"),
	_S("Bir"),
	_S("Lie"),
	_S("Rgp"),
	_S("Rgs"),
	_S("Spl"),
	_S("Lap"),
	_S("Grd")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File
