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

const TLanguage LanguageAspect::Language = ELangDutch;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Probeer het opnieuw"),								        // Button 1
    _S("Stop"),								                        // Button 2
    _S("Plaats de schijf terug"),						            // Put the card back - line1
    _S("anders gaan er gegevens verloren"),						    // Put the card back - line2
    _S("Batterij bijna leeg"),						                // Low power - line1
    _S("Kan schrijven naar schijf niet voltooien"),					// Low power - line2
    _S("Schijffout - kan schrijven niet voltooien"),				// Disk error - line1
    _S("Probeer het opnieuw, anders gaan er gegevens verloren"),    // Disk error - line2
// SoundDriver
    _S("Carillon"),								// Chimes
    _S("Bel"),								// Rings
    _S("Signaal"),								// Signal
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
    _S("maandag"),
    _S("dinsdag"),
    _S("woensdag"),
    _S("donderdag"),
    _S("vrijdag"),
    _S("zaterdag"),
    _S("zondag")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("ma"),
    _S("di"),
    _S("wo"),
    _S("do"),
    _S("vr"),
    _S("za"),
    _S("zo")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("januari"),
    _S("februari"),
    _S("maart"),
    _S("april"),
    _S("mei"),
    _S("juni"),
    _S("juli"),
    _S("augustus"),
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
    _S("mrt"),
    _S("apr"),
    _S("mei"),
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
