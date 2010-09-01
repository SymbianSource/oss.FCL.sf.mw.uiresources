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
*                + am/pm symbols for Hindi, Epoc code 58
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
        _S("\x0CB8\x0CCB\x0CAE\x0CB5\x0CBE\x0CB0"),
        _S("\x0CAE\x0C82\x0C97\x0CB3\x0CB5\x0CBE\x0CB0"),
        _S("\x0CAC\x0CC1\x0CA7\x0CB5\x0CBE\x0CB0"),
        _S("\x0C97\x0CC1\x0CB0\x0CC1\x0CB5\x0CBE\x0CB0"),
        _S("\x0CB6\x0CC1\x0C95\x0CCD\x0CB0\x0CB5\x0CBE\x0CB0"),
        _S("\x0CB6\x0CA8\x0CBF\x0CB5\x0CBE\x0CB0"),
        _S("\x0CB0\x0CB5\x0CBF\x0CB5\x0CBE\x0CB0")
        };
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
        {
        _S("\x0CB8\x0CCB\x0CAE"),
        _S("\x0CAE\x0C82\x0C97\x0CB3"),
        _S("\x0CAC\x0CC1\x0CA7"),
        _S("\x0C97\x0CC1\x0CB0\x0CC1"),
        _S("\x0CB6\x0CC1\x0C95\x0CCD\x0CB0"),
        _S("\x0CB6\x0CA8\x0CBF"),
        _S("\x0CB0\x0CB5\x0CBF")
        };
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
        {
        _S("\x0C9C\x0CA8\x0CB5\x0CB0\x0CC0"),
        _S("\x0CAB\x0CC6\x0CAC\x0CCD\x0CB0\x0930\x0CB5\x0CB0\x0CC0"),
        _S("\x0CAE\x0CBE\x0CB0\x0CCD\x0C9A"),
        _S("\x0C8E\x0CAA\x0CCD\x0CB0\x0CBF\x0CB2\x0CCD"),
        _S("\x0CAE\x0CC7"),
        _S("\x0C9C\x0CC2\x0CA8"),
        _S("\x0C9C\x0CC1\x0CB2\x0CC8"),
        _S("\x0C85\x0C97\x0CB8\x0CCD\x0C9F"),
        _S("\x0CB8\x0CC6\x0CAA\x0CCD\x0C9F\x0CC6\x0C82\x0CAC\x0CB0"),
        _S("\x0C85\x0C95\x0CCD\x0C9F\x0CCB\x0CAC\x0CB0"),
        _S("\x0CA8\x0CB5\x0CAE\x0CCD\x0CAC\x0CB0"),
        _S("\x0CA1\x0CBF\x0CB8\x0CC6\x0CAE\x0CCD\x0CAC\x0CB0")
        };
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
        {
        _S("\x0C9C\x0CA8\x0CB5\x0CB0\x0CC0"),
        _S("\x0CAB\x0CC6\x0CAC\x0CCD\x0CB0\x0930\x0CB5\x0CB0\x0CC0"),
        _S("\x0CAE\x0CBE\x0CB0\x0CCD\x0C9A"),
        _S("\x0C8E\x0CAA\x0CCD\x0CB0\x0CBF\x0CB2\x0CCD"),
        _S("\x0CAE\x0CC7"),
        _S("\x0C9C\x0CC2\x0CA8"),
        _S("\x0C9C\x0CC1\x0CB2\x0CC8"),
        _S("\x0C85\x0C97\x0CB8\x0CCD\x0C9F"),
        _S("\x0CB8\x0CC6\x0CAA\x0CCD\x0C9F\x0CC6\x0C82\x0CAC\x0CB0"),
        _S("\x0C85\x0C95\x0CCD\x0C9F\x0CCB\x0CAC\x0CB0"),
        _S("\x0CA8\x0CB5\x0CAE\x0CCD\x0CAC\x0CB0"),
        _S("\x0CA1\x0CBF\x0CB8\x0CC6\x0CAE\x0CCD\x0CAC\x0CB0")
        };
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File
