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

const TLanguage LanguageAspect::Language = ELangSwedish;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Försök igen"),								// Button 1
    _S("Stopp"),								// Button 2
    _S("Sätt tillbaka disketten"),						// Put the card back - line1
    _S("annars kommer du att förlora data"),						// Put the card back - line2
    _S("Batteriet har för lite laddning kvar"),						// Low power - line1
    _S("Kan inte avsluta lagring på diskett"),					// Low power - line2
    _S("Diskettfel - kan inte avsluta lagring"),				// Disk error - line1
    _S("Försök igen annars kommer du att förlora data"),		                        // Disk error - line2
// SoundDriver
    _S("Klockringning"),								// Chimes
    _S("Ringsignaler"),								// Rings
    _S("Signal"),								// Signal
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
    _S("måndag"),
    _S("tisdag"),
    _S("onsdag"),
    _S("torsdag"),
    _S("fredag"),
    _S("lördag"),
    _S("söndag")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("Må"),
    _S("Ti"),
    _S("On"),
    _S("To"),
    _S("Fr"),
    _S("Lö"),
    _S("Sö")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("januari"),
    _S("februari"),
    _S("mars"),
    _S("april"),
    _S("maj"),
    _S("juni"),
    _S("juli"),
    _S("augusti"),
    _S("september"),
    _S("oktober"),
    _S("november"),
    _S("december")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("jan"),
    _S("feb"),
    _S("mar"),
    _S("apr"),
    _S("maj"),
    _S("jun"),
    _S("jul"),
    _S("aug"),
    _S("sep"),
    _S("okt"),
    _S("nov"),
    _S("dec")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File
