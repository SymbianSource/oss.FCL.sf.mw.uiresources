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

const TLanguage LanguageAspect::Language = ELangHebrew;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("\x05E0\x05E1\x05D5\x0020\x05E9\x05D5\x05D1"),   // Button 1
    _S("\x05E2\x05E6\x05D9\x05E8\x05D4"),               // Button 2
    _S("\x05D4\x05DB\x05E0\x05D9\x05E1\x05D5\x0020\x05D0\x05EA\x0020\x05D4\x05D3\x05D9\x05E1\x05E7\x0020\x05D7\x05D6\x05E8\x05D4"), // Put the card back - line1
    _S("\x05D0\x05D5\x0020\x05E9\x05D4\x05E0\x05EA\x05D5\x05E0\x05D9\x05DD\x0020\x05D9\x05D5\x05D0\x05D1\x05D3\x05D5"), // Put the card back - line2
    _S("\x05D4\x05E1\x05D5\x05DC\x05DC\x05D5\x05EA\x0020\x05D7\x05DC\x05E9\x05D5\x05EA\x0020\x05DE\x05D9\x05D3\x05D9"), // Low power - line1
    _S("\x05DC\x05D0\x0020\x05E0\x05D9\x05EA\x05DF\x0020\x05DC\x05D4\x05E9\x05DC\x05D9\x05DD\x0020\x05DB\x05EA\x05D9\x05D1\x05D4\x0020\x05DC\x05D3\x05D9\x05E1\x05E7"), // Low power - line2
    _S("\x05E9\x05D2\x05D9\x05D0\x05EA\x0020\x05D3\x05D9\x05E1\x05E7\x0020\x002D\x0020\x05DC\x05D0\x0020\x05E0\x05D9\x05EA\x05DF\x0020\x05DC\x05D4\x05E9\x05DC\x05D9\x05DD\x0020\x05DB\x05EA\x05D9\x05D1\x05D4"), // Disk error - line1
    _S("\x05E0\x05E1\x05D5\x0020\x05E9\x05D5\x05D1\x0020\x05D0\x05D5\x0020\x05E9\x05D4\x05E0\x05EA\x05D5\x05E0\x05D9\x05DD\x0020\x05D9\x05D5\x05D0\x05D1\x05D3\x05D5"), // Disk error - line2
// SoundDriver
    _S("\x05E4\x05E2\x05DE\x05D5\x05E0\x05D9\x05DD"),	// Chimes
    _S("\x05E6\x05DC\x05E6\x05D5\x05DC\x05D9\x05DD"),	// Rings
    _S("\x05D0\x05D5\x05EA"),							// Signal
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
    _S("\x05E9\x05E0\x05D9"),
    _S("\x05E9\x05DC\x05D9\x05E9\x05D9"),
    _S("\x05E8\x05D1\x05D9\x05E2\x05D9"),
    _S("\x05D7\x05DE\x05D9\x05E9\x05D9"),
    _S("\x05E9\x05D9\x05E9\x05D9"),
    _S("\x05E9\x05D1\x05EA"),
    _S("\x05E8\x05D0\x05E9\x05D5\x05DF")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("\x05D1\x0027"),
    _S("\x05D2\x0027"),
    _S("\x05D3\x0027"),
    _S("\x05D4\x0027"),
    _S("\x05D5\x0027"),
    _S("\x05E9\x0027"),
    _S("\x05D0\x0027")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("\x05D9\x05E0\x05D5\x05D0\x05E8"),
    _S("\x05E4\x05D1\x05E8\x05D5\x05D0\x05E8"),
    _S("\x05DE\x05E8\x05E5"),
    _S("\x05D0\x05E4\x05E8\x05D9\x05DC"),
    _S("\x05DE\x05D0\x05D9"),
    _S("\x05D9\x05D5\x05E0\x05D9"),
    _S("\x05D9\x05D5\x05DC\x05D9"),
    _S("\x05D0\x05D5\x05D2\x05D5\x05E1\x05D8"),
    _S("\x05E1\x05E4\x05D8\x05DE\x05D1\x05E8"),
    _S("\x05D0\x05D5\x05E7\x05D8\x05D5\x05D1\x05E8"),
    _S("\x05E0\x05D5\x05D1\x05DE\x05D1\x05E8"),
    _S("\x05D3\x05E6\x05DE\x05D1\x05E8")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("\x05D9\x05E0\x05D5\x002E"),
    _S("\x05E4\x05D1\x05E8\x002E"),
    _S("\x05DE\x05E8\x05E5"),
    _S("\x05D0\x05E4\x05E8\x002E"),
    _S("\x05DE\x05D0\x05D9"),
    _S("\x05D9\x05D5\x05E0\x002E"),
    _S("\x05D9\x05D5\x05DC\x002E"),
    _S("\x05D0\x05D5\x05D2\x002E"),
    _S("\x05E1\x05E4\x05D8\x002E"),
    _S("\x05D0\x05D5\x05E7\x002E"),
    _S("\x05E0\x05D5\x05D1\x002E"),
    _S("\x05D3\x05E6\x05DE\x002E")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};




//  End of File
