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

const TLanguage LanguageAspect::Language = ELangHindi;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Retry"),								// Button 1
    _S("Stop"),									// Button 2
    _S("Put the disk back"),					// Put the card back - line1
    _S("or data will be lost"),					// Put the card back - line2
    _S("Battery too low"),					// Low power - line1
    _S("Cannot complete write to disk"),		// Low power - line2
    _S("Disk error - cannot complete write"),	// Disk error - line1
    _S("Retry or data will be lost"),			// Disk error - line2
// SoundDriver
    _S("Chimes"),								// Chimes
    _S("Rings"),								// Rings
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
    _S("\x0938\x094b\x092e\x0935\x093e\x0930"),
    _S("\x092e\x0902\x0917\x0932\x0935\x093e\x0930"),
    _S("\x092c\x0941\x0927\x0935\x093e\x0930"),
    _S("\x0917\x0941\x0930\x0941\x0935\x093e\x0930"),
    _S("\x0936\x0941\x0915\x094d\x0930\x0935\x093e\x0930"),
    _S("\x0936\x0928\x093f\x0935\x093e\x0930"),
    _S("\x0930\x0935\x093f\x0935\x093e\x0930")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("\x0938\x094b\x092e"),
    _S("\x092e\x0902\x0917\x0932"),
    _S("\x092c\x0941\x0927"),
    _S("\x0917\x0941\x0930\x0941"),
    _S("\x0936\x0941\x0915\x094d\x0930"),
    _S("\x0936\x0928\x093f"),
    _S("\x0930\x0935\x093f")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("\x091c\x0928\x0935\x0930\x0940"),
    _S("\x092b\x0930\x0935\x0930\x0940"),
    _S("\x092e\x093e\x0930\x094d\x091a"),
    _S("\x0905\x092a\x094d\x0930\x0948\x0932"),
    _S("\x092e\x0908"),
    _S("\x091c\x0942\x0928"),
    _S("\x091c\x0941\x0932\x093e\x0908"),
    _S("\x0905\x0917\x0938\x094d\x0924"),
    _S("\x0938\x093f\x0924\x092e\x094d\x092c\x0930"),
    _S("\x0905\x0915\x094d\x0924\x0942\x092c\x0930"),
    _S("\x0928\x0935\x092e\x094d\x092c\x0930"),
    _S("\x0926\x093f\x0938\x092e\x094d\x092c\x0930")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("\x091c\x0928"),
    _S("\x092b\x0930"),
    _S("\x092e\x093e\x0930\x094d\x091a"),
    _S("\x0905\x092a\x094d\x0930\x0948"),
    _S("\x092e\x0908"),
    _S("\x091c\x0942\x0928"),
    _S("\x091c\x0941\x0932\x093e"),
    _S("\x0905\x0917"),
    _S("\x0938\x093f\x0924"),
    _S("\x0905\x0915\x094d\x0924\x0942"),
    _S("\x0928\x0935"),
    _S("\x0926\x093f\x0938")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};


//  End of File
