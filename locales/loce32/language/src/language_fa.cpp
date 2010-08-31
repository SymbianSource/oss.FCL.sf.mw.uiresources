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

const TLanguage LanguageAspect::Language = ELangFarsi;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
	


//  LOCAL CONSTANTS AND MACROS
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
    // Fileserver
    _S("\x0633\x0639\x064a\x0645\x062c\x062f\x062f"),
    _S("\x062a\x0648\x0642\x0641"),
    _S("\x062f\x064a\x0633\x0643\x0631\x0627\x062f\x0631\x062c\x0627\x064a\x062e\x0648\x062f\x0642\x0631\x0627\x0631\x062f\x0647\x064a\x062f"),
    _S("\x062f\x0631\x063a\x064a\x0631\x0627\x064a\x0646\x0635\x0648\x0631\x062a\x062f\x0627\x062f\x0647\x0627\x0632\x0628\x064a\x0646\x0645\x064a\x0631\x0648\x062f"),
    _S("\x0628\x0627\x062a\x0631\x064a\x062e\x064a\x0644\x064a\x0636\x0639\x064a\x0641\x0627\x0633\x062a"),
    _S("\x0646\x0645\x064a\x062a\x0648\x0627\x0646\x0646\x0648\x0634\x062a\x0646\x0631\x0648\x064a\x062f\x064a\x0633\x0643\x0631\x0627\x062a\x0643\x0645\x064a\x0644\x0643\x0631\x062f"),
    _S("\x062e\x0637\x0627\x062f\x0631\x062f\x064a\x0633\x0643\x0646\x0645\x064a\x062a\x0648\x0627\x0646\x0646\x0648\x0634\x062a\x0646\x0631\x0627\x062a\x0643\x0645\x064a\x0644\x0643\x0631\x062f"),
    _S("\x062f\x0648\x0628\x0627\x0631\x0647\x0633\x0639\x064a\x0643\x0646\x064a\x062f\x060c\x062f\x0631\x063a\x064a\x0631\x0627\x064a\x0646\x0635\x0648\x0631\x062a\x062f\x0627\x062f\x0647\x0627\x0632\x0628\x064a\x0646\x0645\x064a\x0631\x0648\x062f"),
    // SoundDriver
    _S("\x062a\x0643\x0632\x0646\x06af"),
    _S("\x0632\x0646\x06af"),
    _S("\x0633\x064a\x06af\x0646\x0627\x0644"),
    // MediaDriver diskname (max 16 chars)
    _S("Internal"),
    _S("External(01)"),
    _S("External(02)"),
    _S("External(03)"),
    _S("External(04)"),
    _S("External(05)"),
    _S("External(06)"),
    _S("External(07)"),
    _S("External(08)"),
    // MediaDriver socketname (max 16 chars)
    _S("Socket(01)"),
    _S("Socket(02)"),
    _S("Socket(03)"),
    _S("Socket(04)")
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
    _S("\x062f\x0648\x0634\x0646\x0628\x0647"),
    _S("\x0633\x0647 \x0634\x0646\x0628\x0647"),
    _S("\x0686\x0647\x0627\x0631\x0634\x0646\x0628\x0647"),
    _S("\x067e\x0646\x062c\x0634\x0646\x0628\x0647"),
    _S("\x062c\x0645\x0639\x0647"),
    _S("\x0634\x0646\x0628\x0647"),
    _S("\x06cc\x06a9\x0634\x0646\x0628\x0647")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("\x06f2\x0634"),
    _S("\x06f3\x0634"),
    _S("\x06f4\x0634"),
    _S("\x06f5\x0634"),
    _S("\x062c"),
    _S("\x0634"),
    _S("\x06f1\x0634")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("\x0698\x0627\x0646\x0648\x064a\x0647"),
    _S("\x0641\x0648\x0631\x064a\x0647"),
    _S("\x0645\x0627\x0631\x0633"),
    _S("\x0622\x0648\x0631\x064a\x0644"),
    _S("\x0645\x0647"),
    _S("\x0698\x0648\x0626\x0646"),
    _S("\x0698\x0648\x0626\x064a\x0647"),
    _S("\x0622\x06af\x0648\x0633\x062a"),
    _S("\x0633\x067e\x062a\x0627\x0645\x0628\x0631"),
    _S("\x0627\x0643\x062a\x0628\x0631"),
    _S("\x0646\x0648\x0627\x0645\x0628\x0631"),
    _S("\x062f\x0633\x0627\x0645\x0628\x0631")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("\x0698\x0627\x0646\x0648\x064a\x0647"),
    _S("\x0641\x0648\x0631\x064a\x0647"),
    _S("\x0645\x0627\x0631\x0633"),
    _S("\x0622\x0648\x0631\x064a\x0644"),
    _S("\x0645\x0647"),
    _S("\x0698\x0648\x0626\x0646"),
    _S("\x0698\x0648\x0626\x064a\x0647"),
    _S("\x0622\x06af\x0648\x0633\x062a"),
    _S("\x0633\x067e\x062a\x0627\x0645\x0628\x0631"),
    _S("\x0627\x0643\x062a\x0628\x0631"),
    _S("\x0646\x0648\x0627\x0645\x0628\x0631"),
    _S("\x062f\x0633\x0627\x0645\x0628\x0631")
    };
// The am/pm strings (In case of Farsi, these are symbols in PUA area).
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("\x200F\xF816\x200F"),_S("\x200F\xF817\x200F")};




//  End of File
