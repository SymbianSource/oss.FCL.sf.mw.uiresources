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

const TLanguage LanguageAspect::Language = ELangRomanian;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
   


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Încerca\x0163" L"i din nou"),								// Button 1
    _S("Stop"),								// Button 2
    _S("Dac\x0103" L" nu pune\x0163" L"i discul la loc"),						// Put the card back - line1
    _S("se vor pierde date"),						// Put the card back - line2
    _S("Bateria este prea desc\x0103rcat\x0103"),						// Low power - line1
    _S("Înregistrarea pe disc nu poate fi terminat\x0103"),					// Low power - line2
    _S("Eroare de disc - înregistrarea nu poate fi terminat\x0103"),				// Disk error - line1
    _S("Dac\x0103" L" nu încerca\x0163" L"i din nou se vor pierde date"),		                        // Disk error - line2
// SoundDriver
    _S("Sun\x0103" L" ca ceasul"),								// Chimes
    _S("Sun\x0103" L" ca telefonul"),								// Rings
    _S("Semnal"),								// Signal
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
    
//  The suffix table
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
    _S("Luni"),
    _S("Mar\x0163" L"i"),
    _S("Miercuri"),
    _S("Joi"),
    _S("Vineri"),
    _S("Sâmb\x0103" L"t\x0103"),
    _S("Duminic\x0103")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("Lu"),
    _S("Ma"),
    _S("Mi"),
    _S("Jo"),
    _S("Vi"),
    _S("Sâ"),
    _S("Du")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("Ianuarie"),
    _S("Februarie"),
    _S("Martie"),
    _S("Aprilie"),
    _S("Mai"),
    _S("Iunie"),
    _S("Iulie"),
    _S("August"),
    _S("Septembrie"),
    _S("Octombrie"),
    _S("Noiembrie"),
    _S("Decembrie")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("Ian"),
    _S("Feb"),
    _S("Mar"),
    _S("Apr"),
    _S("Mai"),
    _S("Iun"),
    _S("Iul"),
    _S("Aug"),
    _S("Sep"),
    _S("Oct"),
    _S("Nov"),
    _S("Dec")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File
