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

const TLanguage LanguageAspect::Language = ELangArabic;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeArabicIndic;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    

//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("\x062D\x0627\x0648\x0644\x0020\x062B\x0627\x0646\x064A\x0629"),								// Button 1
    _S("\x0625\x064A\x0642\x0627\x0641"),								// Button 2
    _S("\x0623\x0639\x062F\x0020\x0648\x0636\x0639\x0020\x0627\x0644\x0642\x0631\x0635"),						// Put the card back - line1
    _S("\x0648\x0625\x0644\x0627\x0020\x0633\x062A\x0641\x0642\x062F\x0020\x0627\x0644\x0628\x064A\x0627\x0646\x0627\x062A"),						// Put the card back - line2
    _S("\x0627\x0644\x0628\x0637\x0627\x0631\x064A\x0629\x0020\x0636\x0639\x064A\x0641\x0629\x0020\x062C\x062F\x0627\x064B"),						// Low power - line1
    _S("\x0644\x0627\x0020\x064A\x0645\x0643\x0646\x0020\x0625\x062A\x0645\x0627\x0645\x0020\x0627\x0644\x0643\x062A\x0627\x0628\x0629\x0020\x0639\x0644\x0649\x0020\x0627\x0644\x0642\x0631\x0635"),					// Low power - line2
    _S("\x062E\x0637\x0623\x0020\x0641\x064A\x0020\x0627\x0644\x0642\x0631\x0635\x0020\x002D\x0020\x0644\x0627\x0020\x064A\x0645\x0643\x0646\x0020\x0625\x062A\x0645\x0627\x0645\x0020\x0627\x0644\x0643\x062A\x0627\x0628\x0629"),				// Disk error - line1
    _S("\x0623\x0639\x062F\x0020\x0627\x0644\x0645\x062D\x0627\x0648\x0644\x0629\x0020\x0648\x0625\x0644\x0627\x0020\x0633\x062A\x0641\x0642\x062F\x0020\x0627\x0644\x0628\x064A\x0627\x0646\x0627\x062A"),		                        // Disk error - line2
// SoundDriver
    _S("\x062C\x0631\x0633"),								// Chimes
    _S("\x0631\x0646\x064A\x0646"),								// Rings
    _S("\x0625\x0634\x0627\x0631\x0629"),								// Signal
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
    _S("\x0627\x0644\x0627\x062B\x0646\x064A\x0646"),
    _S("\x0627\x0644\x062B\x0644\x0627\x062B\x0627\x0621"),
    _S("\x0627\x0644\x0623\x0631\x0628\x0639\x0627\x0621"),
    _S("\x0627\x0644\x062E\x0645\x064A\x0633"),
    _S("\x0627\x0644\x062C\x0645\x0639\x0629"),
    _S("\x0627\x0644\x0633\x0628\x062A"),
    _S("\x0627\x0644\x0623\x062D\x062F")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("\x0627\x062B"),
    _S("\x062B"),
    _S("\x0623\x0631"),
    _S("\x062E"),
    _S("\x062C"),
    _S("\x0633"),
    _S("\x0623\x062D")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("1"),
    _S("2"),
    _S("3"),
    _S("4"),
    _S("5"),
    _S("6"),
    _S("7"),
    _S("8"),
    _S("9"),
    _S("10"),
    _S("11"),
    _S("12")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("1"),
    _S("2"),
    _S("3"),
    _S("4"),
    _S("5"),
    _S("6"),
    _S("7"),
    _S("8"),
    _S("9"),
    _S("10"),
    _S("11"),
    _S("12")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("\x0635"),_S("\x0645")};



//  End of File
