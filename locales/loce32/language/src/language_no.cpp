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

const TLanguage LanguageAspect::Language = ELangNorwegian;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Prøv på nytt"),								// Button 1
    _S("Stopp"),								// Button 2
    _S("Sett disken tilbake"),						// Put the card back - line1
    _S("eller data kan gå tapt"),						// Put the card back - line2
    _S("Lavt batterinivå"),						// Low power - line1
    _S("Kan ikke fullføre skriving til disk"),					// Low power - line2
    _S("Diskfeil - kan ikke fullføre skriving"),				// Disk error - line1
    _S("Prøv på nytt, eller data vil gå tapt"),		                        // Disk error - line2
// SoundDriver
    _S("Klokkespill"),								// Chimes
    _S("Ringetone"),								// Rings
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
    _S("mandag"),
    _S("tirsdag"),
    _S("onsdag"),
    _S("torsdag"),
    _S("fredag"),
    _S("lørdag"),
    _S("søndag")
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
    _S("januar"),
    _S("februar"),
    _S("mars"),
    _S("april"),
    _S("mai"),
    _S("juni"),
    _S("juli"),
    _S("august"),
    _S("september"),
    _S("oktober"),
    _S("november"),
    _S("desember")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("jan"),
    _S("feb"),
    _S("mar"),
    _S("apr"),
    _S("mai"),
    _S("jun"),
    _S("jul"),
    _S("aug"),
    _S("sep"),
    _S("okt"),
    _S("nov"),
    _S("des")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("fm."),_S("em.")};



//  End of File
