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

const TLanguage LanguageAspect::Language = ELangGreek;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("\x0395\x03C0\x03B1\x03BD\x03AC\x03BB\x03B7\x03C8\x03B7"),								// Button 1
    _S("\x03A4\x03B5\x03C1\x03BC\x03B1\x03C4\x03B9\x03C3\x03BC\x03CC\x03C2"),								// Button 2
    _S("\x0395\x03C0\x03B1\x03BD\x03B1\x03C4\x03BF\x03C0\x03BF\x03B8\x03B5\x03C4\x03AE\x03C3\x03C4\x03B5 \x03C4\x03BF \x03B4\x03AF\x03C3\x03BA\x03BF"),						// Put the card back - line1
    _S("\x03B4\x03B9\x03B1\x03C6\x03BF\x03C1\x03B5\x03C4\x03B9\x03BA\x03AC \x03B8\x03B1 \x03C7\x03B1\x03B8\x03BF\x03CD\x03BD \x03B4\x03B5\x03B4\x03BF\x03BC\x03AD\x03BD\x03B1"),						// Put the card back - line2
    _S("\x039C\x03C0\x03B1\x03C4\x03B1\x03C1\x03AF\x03B1 \x03C3\x03C7\x03B5\x03B4\x03CC\x03BD \x03AC\x03B4\x03B5\x03B9\x03B1"),						// Low power - line1
    _S("\x0391\x03B4\x03C5\x03BD\x03B1\x03BC\x03AF\x03B1 \x03BF\x03BB\x03BF\x03BA\x03BB\x03AE\x03C1\x03C9\x03C3\x03B7\x03C2 \x03B5\x03B3\x03B3\x03C1\x03B1\x03C6\x03AE\x03C2 \x03C3\x03C4\x03BF \x03B4\x03AF\x03C3\x03BA\x03BF"),					// Low power - line2
    _S("\x03A3\x03C6\x03AC\x03BB\x03BC\x03B1 \x03B4\x03AF\x03C3\x03BA\x03BF\x03C5 - \x03B1\x03B4\x03C5\x03BD\x03B1\x03BC\x03AF\x03B1 \x03BF\x03BB\x03BF\x03BA\x03BB\x03AE\x03C1\x03C9\x03C3\x03B7\x03C2 \x03B5\x03B3\x03B3\x03C1\x03B1\x03C6\x03AE\x03C2"),				// Disk error - line1
    _S("\x039D\x03AD\x03B1\x0020\x03C0\x03C1\x03BF\x03C3\x03C0\x03AC\x03B8\x03B5\x03B9\x03B1\x002C\x0020\x03B4\x03B9\x03B1\x03C6\x03BF\x03C1\x03B5\x03C4\x03B9\x03BA\x03AC\x0020\x03B8\x03B1\x0020\x03C7\x03B1\x03B8\x03BF\x03CD\x03BD\x0020\x03B4\x03B5\x03B4\x03BF\x03BC\x03AD\x03BD\x03B1"),		                        // Disk error - line2
// SoundDriver
    _S("\x03A7\x03C4\x03CD\x03C0\x03BF\x03B9"),								// Chimes
    _S("\x0389\x03C7\x03BF\x03B9"),								// Rings
    _S("\x03A3\x03AE\x03BC\x03B1"),								// Signal
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
    _S("\x0394\x03B5\x03C5\x03C4\x03AD\x03C1\x03B1"),
    _S("\x03A4\x03C1\x03AF\x03C4\x03B7"),
    _S("\x03A4\x03B5\x03C4\x03AC\x03C1\x03C4\x03B7"),
    _S("\x03A0\x03AD\x03BC\x03C0\x03C4\x03B7"),
    _S("\x03A0\x03B1\x03C1\x03B1\x03C3\x03BA\x03B5\x03C5\x03AE"),
    _S("\x03A3\x03AC\x03B2\x03B2\x03B1\x03C4\x03BF"),
    _S("\x039A\x03C5\x03C1\x03B9\x03B1\x03BA\x03AE")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("\x0394\x03B5\x03C5\x03C4\x002E"),
    _S("\x03A4\x03C1\x002E"),
    _S("\x03A4\x03B5\x03C4\x002E"),
    _S("\x03A0\x03AD\x03BC\x002E"),
    _S("\x03A0\x03B1\x03C1\x002E"),
    _S("\x03A3\x03AC\x03B2\x002E"),
    _S("\x039A\x03C5\x03C1\x002E")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("\x0399\x03B1\x03BD\x03BF\x03C5\x03AC\x03C1\x03B9\x03BF\x03C2"),
    _S("\x03A6\x03B5\x03B2\x03C1\x03BF\x03C5\x03AC\x03C1\x03B9\x03BF\x03C2"),
    _S("\x039C\x03AC\x03C1\x03C4\x03B9\x03BF\x03C2"),
    _S("\x0391\x03C0\x03C1\x03AF\x03BB\x03B9\x03BF\x03C2"),
    _S("\x039C\x03AC\x03B9\x03BF\x03C2"),
    _S("\x0399\x03BF\x03CD\x03BD\x03B9\x03BF\x03C2"),
    _S("\x0399\x03BF\x03CD\x03BB\x03B9\x03BF\x03C2"),
    _S("\x0391\x03CD\x03B3\x03BF\x03C5\x03C3\x03C4\x03BF\x03C2"),
    _S("\x03A3\x03B5\x03C0\x03C4\x03AD\x03BC\x03B2\x03C1\x03B9\x03BF\x03C2"),
    _S("\x039F\x03BA\x03C4\x03CE\x03B2\x03C1\x03B9\x03BF\x03C2"),
    _S("\x039D\x03BF\x03AD\x03BC\x03B2\x03C1\x03B9\x03BF\x03C2"),
    _S("\x0394\x03B5\x03BA\x03AD\x03BC\x03B2\x03C1\x03B9\x03BF\x03C2")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("\x0399\x03B1\x03BD"),
    _S("\x03A6\x03B5\x03B2"),
    _S("\x039C\x03B1\x03C1"),
    _S("\x0391\x03C0\x03C1"),
    _S("\x039C\x03AC\x03B9"),
    _S("\x0399\x03BF\x03C5\x03BD"),
    _S("\x0399\x03BF\x03C5\x03BB"),
    _S("\x0391\x03C5\x03B3"),
    _S("\x03A3\x03B5\x03C0"),
    _S("\x039F\x03BA\x03C4"),
    _S("\x039D\x03BF\x03B5"),
    _S("\x0394\x03B5\x03BA")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("\x03C0\x03BC"),_S("\x03BC\x03BC")};




//  End of File
