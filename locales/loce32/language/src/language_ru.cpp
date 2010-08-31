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

const TLanguage LanguageAspect::Language = ELangRussian;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
   


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("\x041F\x043E\x0432\x0442\x043E\x0440\x0438\x0442\x044C"),								// Button 1
    _S("\x041E\0441\x0442\x0430\x043D\x043E\x0432\x0438\x0442\x044C"),								// Button 2
    _S("\x0412\x0441\x0442\x0430\x0432\x044C\x0442\x0435\x0020\x0434\x0438\x0441\x043A\x0020\x043E\x0431\x0440\x0430\x0442\x043D\x043E\x002C\x0020\x0438\x043D\x0430\x0447\x0435"),     // Put the card back - line1
    _S("\x0434\x0430\x043D\x043D\x044B\x0435 \x0431\x0443\x0434\x0443\x0442 \x0443\x0442\x0440\x0430\x0447\x0435\x043D\x044B"),						// Put the card back - line2
    _S("\x0410\x043A\x043A\x0443\x043C\x0443\x043B\x044F\x0442\x043E\x0440\x0020\x0440\x0430\x0437\x0440\x044F\x0436\x0435\x043D"),						// Low power - line1
    _S("\x0417\x0430\x043F\x0438\x0441\x044C \x043D\x0430 \x0434\x0438\x0441\x043A \x0437\x0430\x0432\x0435\x0440\x0448\x0438\x0442\x044C \x043D\x0435 \x0443\x0434\x0430\x0435\x0442\x0441\x044F"),					// Low power - line2
    _S("\x041E\x0448\x0438\x0431\x043A\x0430\x0020\x0434\x0438\x0441\x043A\x0430\x0020\x002D\x0020\x0437\x0430\x0432\x0435\x0440\x0448\x0438\x0442\x044C\x0020\x0437\x0430\x043F\x0438\x0441\x044C\x0020\x043D\x0435\x0020\x0443\x0434\x0430\x0435\x0442\x0441\x044F"),				// Disk error - line1
    _S("\x041F\x043E\x0432\x0442\x043E\x0440\x0438\x0442\x0435\x0020\x043F\x043E\x043F\x044B\x0442\x043A\x0443\x002C\x0020\x0438\x043D\x0430\x0447\x0435\x0020\x0434\x0430\x043D\x043D\x044B\x0435\x0020\x0431\x0443\x0434\x0443\x0442\x0020\x0443\x0442\x0440\x0430\x0447\x0435\x043D\x044B"),                   // Disk error - line2
// SoundDriver
    _S("\x041A\x043E\x043B\x043E\x043A\x043E\x043B\x044C\x0447\x0438\x043A"),								// Chimes
    _S("\x0417\x0432\x043E\x043D\x043A\x0438"),								// Rings
    _S("\x0421\x0438\x0433\x043D\x0430\x043B"),								// Signal
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
    _S("\x041F\x043E\x043D\x0435\x0434\x0435\x043B\x044C\x043D\x0438\x043A"),
    _S("\x0412\x0442\x043E\x0440\x043D\x0438\x043A"),
    _S("\x0421\x0440\x0435\x0434\x0430"),
    _S("\x0427\x0435\x0442\x0432\x0435\x0440\x0433"),
    _S("\x041F\x044F\x0442\x043D\x0438\x0446\x0430"),
    _S("\x0421\x0443\x0431\x0431\x043E\x0442\x0430"),
    _S("\x0412\x043E\x0441\x043A\x0440\x0435\x0441\x0435\x043D\x044C\x0435")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("\x041F\x043D"),
    _S("\x0412\x0442"),
    _S("\x0421\x0440"),
    _S("\x0427\x0442"),
    _S("\x041F\x0442"),
    _S("\x0421\x0431"),
    _S("\x0412\x0441")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("\x044F\x043D\x0432\x0430\x0440\x044C"),
    _S("\x0444\x0435\x0432\x0440\x0430\x043B\x044C"),
    _S("\x043C\x0430\x0440\x0442"),
    _S("\x0430\x043F\x0440\x0435\x043B\x044C"),
    _S("\x043C\x0430\x0439"),
    _S("\x0438\x044E\x043D\x044C"),
    _S("\x0438\x044E\x043B\x044C"),
    _S("\x0430\x0432\x0433\x0443\x0441\x0442"),
    _S("\x0441\x0435\x043D\x0442\x044F\x0431\x0440\x044C"),
    _S("\x043E\x043A\x0442\x044F\x0431\x0440\x044C"),
    _S("\x043D\x043E\x044F\x0431\x0440\x044C"),
    _S("\x0434\x0435\x043A\x0430\x0431\x0440\x044C")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("\x044F\x043D\x0432"),
    _S("\x0444\x0435\x0432"),
    _S("\x043C\x0430\x0440"),
    _S("\x0430\x043F\x0440"),
    _S("\x043C\x0430\x0439"),
    _S("\x0438\x044E\x043D"),
    _S("\x0438\x044E\x043B"),
    _S("\x0430\x0432\x0433"),
    _S("\x0441\x0435\x043D"),
    _S("\x043E\x043A\x0442"),
    _S("\x043D\x043E\x044F"),
    _S("\x0434\x0435\x043A")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File
