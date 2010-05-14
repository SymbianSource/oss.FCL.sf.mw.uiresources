/*
* Copyright (c) 1994-2009 Nokia Corporation and/or its subsidiary(-ies).
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




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>
#include "locl_language.h"

    const TLanguage LanguageAspect::Language = ELangCzech;
    const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
    const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
    const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
	{
// Fileserver
	_S("Opakovat"),								// Button 1
	_S("Stop"),								// Button 2
	_S("Vlo\x017e" L"te disk zp\x011B" L"t"),						// Put the card back - line1
	_S("nebo dojde ke ztrát\x011B" L" dat"),						// Put the card back - line2
	_S("Baterie jsou tém\x011B\x0159" L" vybité"),						// Low power - line1
	_S("Nelze dokon\x010D" L"it zápis na disk"),					// Low power - line2
	_S("Chyba disku - nelze dokon\x010D" L"it zápis"),				// Disk error - line1
	_S("Opakujte nebo dojde ke ztrát\x011B" L" dat"),		                        // Disk error - line2
// SoundDriver
	_S("Odbíjení"),								// Chimes
	_S("Vyzván\x011B" L"ní"),								// Rings
	_S("Signál"),								// Signal
// MediaDriver diskname (max 16 chars)
	_S("Internal"),								// Internal
	_S("External(01)"),							// External(01)
	_S("External(02)"),							// External(02)
	_S("External(03)"),							// External(03)
	_S("External(04)"),							// External(04)
	_S("External(05)"),							// External(05)
	_S("External(06)"),							// External(06)
	_S("External(07)"),							// External(07)
	_S("External(08)"),							// External(08)
// MediaDriver socketname (max 16 chars)
	_S("Socket(01)"),							// Socket(01)
	_S("Socket(02)"),							// Socket(02)
	_S("Socket(03)"),							// Socket(03)
	_S("Socket(04)")							// Socket(04)
	};
	
// The suffix table
const TText * const LanguageAspect::DateSuffixTable[KMaxSuffixes] =
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
const TText * const LanguageAspect::DayTable[KMaxDays] =
	{
	_S("Pond\x011B" L"lí"),
	_S("Úterý"),
	_S("St\x0159"L"eda"),
	_S("\x010Ctvrtek"),
	_S("Pátek"),
	_S("Sobota"),
	_S("Ned\x011B" L"le")
	};
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
	{
	_S("Po"),
	_S("Út"),
	_S("St"),
	_S("\x010C" L"t"),
	_S("Pá"),
	_S("So"),
	_S("Ne")
	};
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
	{
	_S("leden"),
	_S("únor"),
	_S("b\x0159"L"ezen"),
	_S("duben"),
	_S("kv\x011B" L"ten"),
	_S("\x010D"L"erven"),
	_S("\x010D"L"ervenec"),
	_S("srpen"),
	_S("zá\x0159" L"í"),
	_S("\x0159" L"íjen"),
	_S("listopad"),
	_S("prosinec")
	};
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
	{
	_S("led"),
	_S("úno"),
	_S("b\x0159" L"e"),
	_S("dub"),
	_S("kv\x011b"),
	_S("\x010d" L"er"),
	_S("\x010d" L"vc"),
	_S("srp"),
	_S("zá\x0159"),
	_S("\x0159" L"íj"),
	_S("lis"),
	_S("pro")
	};
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File
