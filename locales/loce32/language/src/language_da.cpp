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

const TLanguage LanguageAspect::Language = ELangDanish;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Forsøg igen"),								// Button 1
    _S("Stop"),								// Button 2
    _S("Indsæt disken igen,"),						// Put the card back - line1
    _S("ellers vil data gå tabt"),						// Put the card back - line2
    _S("Batteriniveauet er for lavt"),						// Low power - line1
    _S("Skrivning til disk kan ikke fuldføres"),					// Low power - line2
    _S("Diskfejl. Skrivningen kan ikke fuldføres"),				// Disk error - line1
    _S("Forsøg igen, ellers vil data gå tabt"),		                        // Disk error - line2
// SoundDriver
    _S("Klokkespil"),								// Chimes
    _S("Ringetoner"),								// Rings
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
    _S("."),_S("."),_S("."),_S("."),_S("."),
    _S("."),_S("."),_S("."),_S("."),_S("."),
    _S("."),_S("."),_S("."),_S("."),_S("."),
    _S("."),_S("."),_S("."),_S("."),_S("."),
    _S("."),_S("."),_S("."),_S("."),_S("."),
    _S("."),_S("."),_S("."),_S("."),_S("."),
    _S(".")
    };
// The day names
const TText * const LanguageAspect::DayTable[KMaxDays] =
    {
    _S("Mandag"),
    _S("Tirsdag"),
    _S("Onsdag"),
    _S("Torsdag"),
    _S("Fredag"),
    _S("Lørdag"),
    _S("Søndag")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("Man"),
    _S("Tir"),
    _S("Ons"),
    _S("Tor"),
    _S("Fre"),
    _S("Lør"),
    _S("Søn")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("Januar"),
    _S("Februar"),
    _S("Marts"),
    _S("April"),
    _S("Maj"),
    _S("Juni"),
    _S("Juli"),
    _S("August"),
    _S("September"),
    _S("Oktober"),
    _S("November"),
    _S("December")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("Jan"),
    _S("Feb"),
    _S("Mar"),
    _S("Apr"),
    _S("Maj"),
    _S("Jun"),
    _S("Jul"),
    _S("Aug"),
    _S("Sep"),
    _S("Okt"),
    _S("Nov"),
    _S("Dec")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

