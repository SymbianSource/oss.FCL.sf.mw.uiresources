/*
* Copyright (c) 2005 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   Day & Month names, abbreviations and datesuffix table
*                + am/pm symbols for Vietnamese, Epoc code 96
*
*/



//  EXTERNAL RESOURCES

//  Include Files

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS

// The suffix table
const TText * const LLanguage::DateSuffixTable[KMaxSuffixes] =
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
const TText * const LLanguage::DayTable[KMaxDays] =
        {
        _S("Th\x1ee9" L" hai"),
        _S("Th\x1ee9" L" ba"),
        _S("Th\x1ee9" L" t\x01b0" L""),
        _S("Th\x1ee9" L" n\x0103" L"m"),
        _S("Th\x1ee9" L" s\x00e1" L"u"),
        _S("Th\x1ee9" L" b\x1ea3" L"y"),
        _S("Ch\x1ee7" L" nh\x1ead" L"t")
        };
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
        {
        _S("T2"),
        _S("T3"),
        _S("T4"),
        _S("T5"),
        _S("T6"),
        _S("T7"),
        _S("CN")
        };
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
        {
        _S("Th\x00e1" L"ng 1"),
        _S("Th\x00e1" L"ng 2"),
        _S("Th\x00e1" L"ng 3"),
        _S("Th\x00e1" L"ng 4"),
        _S("Th\x00e1" L"ng 5"),
        _S("Th\x00e1" L"ng 6"),
        _S("Th\x00e1" L"ng 7"),
        _S("Th\x00e1" L"ng 8"),
        _S("Th\x00e1" L"ng 9"),
        _S("Th\x00e1" L"ng 10"),
        _S("Th\x00e1" L"ng 11"),
        _S("Th\x00e1" L"ng 12")
        };
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
        {
        _S("Th1"),
        _S("Th2"),
        _S("Th3"),
        _S("Th4"),
        _S("Th5"),
        _S("Th6"),
        _S("Th7"),
        _S("Th8"),
        _S("Th9"),
        _S("Th10"),
        _S("Th11"),
        _S("Th12")
        };
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("SA"),_S("CH")};

//  End of File
