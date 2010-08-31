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

const TLanguage LanguageAspect::Language = ELangThai;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("\x0E25\x0E2D\x0E07\x0E2D\x0E35\x0E01\x0E04\x0E23\x0E31\x0E49\x0E07"),	        // Button 1
    _S("\x0E2B\x0E22\x0E38\x0E14"),     // Button 2
    _S("\x0E43\x0E2A\x0E48\x0E14\x0E34\x0E2A\x0E01\x0E4C\x0E01\x0E25\x0E31\x0E1A\x0E04\x0E37\x0E19"),						   // Put the card back - line1
    _S("\x0E21\x0E34\x0E40\x0E0A\x0E48\x0E19\x0E19\x0E31\x0E49\x0E19\x0E02\x0E49\x0E2D\x0E21\x0E39\x0E25\x0E08\x0E30\x0E2A\x0E39\x0E0D\x0E2B\x0E32\x0E22"),	    // Put the card back - line2
    _S("\x0E23\x0E30\x0E14\x0E31\x0E1A\x0E41\x0E1A\x0E15\x0E40\x0E15\x0E2D\x0E23\x0E35\x0E48\x0E15\x0E48\x0E33"),	    // Low power - line1
    _S(""),					// Low power - line2
    _S("\x0E40\x0E02\x0E35\x0E22\x0E19\x0E14\x0E34\x0E2A\x0E01\x0E4C\x0E44\x0E21\x0E48\x0E2A\x0E33\x0E40\x0E23\x0E47\x0E08"),  // Disk error - line1
    _S("\x0E02\x0E49\x0E2D\x0E1C\x0E34\x0E14\x0E1E\x0E25\x0E32\x0E14\x0E14\x0E34\x0E2A\x0E01\x0E4C\x0020\x002D\x0020\x0E40\x0E02\x0E35\x0E22\x0E19\x0E44\x0E21\x0E48\x0E2A\x0E33\x0E40\x0E23\x0E47\x0E08>"),  // Disk error - line2
// SoundDriver
    _S("\x0E40\x0E2A\x0E35\x0E22\x0E07\x0E23\x0E30\x0E06\x0E31\x0E07"),	    // Chimes
    _S("\x0E40\x0E2A\x0E35\x0E22\x0E07\x0E01\x0E23\x0E34\x0E48\x0E07"), // Rings
    _S("\x0E2A\x0E31\x0E0D\x0E0D\x0E32\x0E13"),  		// Signal
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
    _S("\x0E08\x0E31\x0E19\x0E17\x0E23\x0E4C"),
    _S("\x0E2D\x0E31\x0E07\x0E04\x0E32\x0E23"),
    _S("\x0E1E\x0E38\x0E18"),
    _S("\x0E1E\x0E24\x0E2B\x0E31\x0E2A\x0E1A\x0E14\x0E35"),
    _S("\x0E28\x0E38\x0E01\x0E23\x0E4C"),
    _S("\x0E40\x0E2A\x0E32\x0E23\x0E4C"),
    _S("\x0E2D\x0E32\x0E17\x0E34\x0E15\x0E22\x0E4C")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("\x0E08\x002E"),
    _S("\x0E2D\x002E"),
    _S("\x0E1E\x002E"),
    _S("\x0E1E\x0E24\x002E"),
    _S("\x0E28\x002E"),
    _S("\x0E2A\x002E"),
    _S("\x0E2D\x0E32\x002E")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("\x0E21\x0E01\x0E23\x0E32\x0E04\x0E21"),
    _S("\x0E01\x0E38\x0E21\x0E20\x0E32\x0E1E\x0E31\x0E19\x0E18\x0E4C"),
    _S("\x0E21\x0E35\x0E19\x0E32\x0E04\x0E21"),
    _S("\x0E40\x0E21\x0E29\x0E32\x0E22\x0E19"),
    _S("\x0E1E\x0E24\x0E29\x0E20\x0E32\x0E04\x0E21"),
    _S("\x0E21\x0E34\x0E16\x0E38\x0E19\x0E32\x0E22\x0E19"),
    _S("\x0E01\x0E23\x0E01\x0E0E\x0E32\x0E04\x0E21"),
    _S("\x0E2A\x0E34\x0E07\x0E2B\x0E32\x0E04\x0E21"),
    _S("\x0E01\x0E31\x0E19\x0E22\x0E32\x0E22\x0E19"),
    _S("\x0E15\x0E38\x0E25\x0E32\x0E04\x0E21"),
    _S("\x0E1E\x0E24\x0E28\x0E08\x0E34\x0E01\x0E32\x0E22\x0E19"),
    _S("\x0E18\x0E31\x0E19\x0E27\x0E32\x0E04\x0E21")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("\x0E21\x002E\x0E04\x002E"),
    _S("\x0E01\x002E\x0E1E\x002E"),
    _S("\x0E21\x0E35\x002E\x0E04\x002E"),
    _S("\x0E40\x0E21\x002E\x0E22\x002E"),
    _S("\x0E1E\x002E\x0E04\x002E"),
    _S("\x0E21\x0E34\x002E\x0E22\x002E"),
    _S("\x0E01\x002E\x0E04\x002E"),
    _S("\x0E2A\x002E\x0E04\x002E"),
    _S("\x0E01\x002E\x0E22\x002E"),
    _S("\x0E15\x002E\x0E04\x002E"),
    _S("\x0E1E\x002E\x0E22\x002E"),
    _S("\x0E18\x002E\x0E04\x002E")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("am"),_S("pm")}; // Not correct yet!



//  End of File
