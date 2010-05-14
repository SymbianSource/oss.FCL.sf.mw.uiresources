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
#include "../inc/unicodeconv.h"

class ShiftJis
    {
public:
    static void ConvertFromUnicodeL(TDes8& aForeign, const TDesC16& aUnicode, const TDesC8& aReplacementForUnconvertibleUnicodeCharacters, TFatUtilityFunctions::TOverflowAction aOverflowAction);
    static void ConvertToUnicodeL(TDes16& aUnicode, const TDesC8& aForeign, TFatUtilityFunctions::TOverflowAction aOverflowAction);
    static TBool IsLegalShortNameCharacter (TUint aCharacter);			
    };


void ShiftJis::ConvertFromUnicodeL(TDes8& aForeign, const TDesC16& aUnicode, const TDesC8& /*aReplacementForUnconvertibleUnicodeCharacters*/, TFatUtilityFunctions::TOverflowAction aOverflowAction)
    {
    TInt err = KErrNone;	
    aForeign.Zero();
    TRAP(err, UnicodeConv::ConvertFromUnicodeL(aForeign, aUnicode));
    
    // Ignore overflow errors if you're allowed to truncate the string
    if (aOverflowAction == TFatUtilityFunctions::EOverflowActionTruncate && err == KErrOverflow)
        {
        err = KErrNone;
        }

    User::LeaveIfError(err);					
    }

void ShiftJis::ConvertToUnicodeL(TDes16& aUnicode, const TDesC8& aForeign, TFatUtilityFunctions::TOverflowAction aOverflowAction)
    {
    TInt err = KErrNone;	
    aUnicode.Zero();
    TRAP(err, UnicodeConv::ConvertToUnicodeL(aUnicode, aForeign));	
    
    // Ignore overflow errors if you're allowed to truncate the string
    if (aOverflowAction == TFatUtilityFunctions::EOverflowActionTruncate && err == KErrOverflow)
        {
        err = KErrNone;
        }

    User::LeaveIfError(err);			
    }


TBool ShiftJis::IsLegalShortNameCharacter (TUint aCharacter)
    {
    return UnicodeConv::IsLegalShortNameCharacter (aCharacter);
    }


const TFatUtilityFunctions shiftJisFatUtilityFunctions=
    {
    ShiftJis::ConvertFromUnicodeL,
    ShiftJis::ConvertToUnicodeL,
    ShiftJis::IsLegalShortNameCharacter
    };


const TLanguage LanguageAspect::Language = ELangJapanese;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = &shiftJisFatUtilityFunctions;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("\x518D\x8A66\x884C"),                                      // Button 1
    _S("\x505C\x6B62"),                                       // Button 2
    _S("\x30C7\x30A3\x30B9\x30AF\x3092\x623B\x3057\x3066\x304F\x3060\x3055\x3044"),                             // Put the card back - line1
    _S("\x30C7\x30FC\x30BF\x304C\x5931\x308F\x308C\x3066\x3057\x307E\x3044\x307E\x3059"),                           // Put the card back - line2
    _S("\x96FB\x6C60\x304C\x6B8B\x308A\x5C11\x306A\x3044\x3067\x3059"),                            // Low power - line1
    _S("\x30C7\x30A3\x30B9\x30AF\x3078\x306E\x66F8\x304D\x8FBC\x307F\x3092\x5B8C\x4E86\x3067\x304D\x307E\x305B\x3093"),                  // Low power - line2
    _S("\x30C7\x30A3\x30B9\x30AF\x30A8\x30E9\x30FC\x3067\x3059\x3002\x66F8\x304D\x8FBC\x307F\x3092\x5B8C\x4E86\x3067\x304D\x307E\x305B\x3093"),                                  // Disk error - line1
    _S("\x518D\x8A66\x884C\x3057\x306A\x3044\x3068\x30C7\x30FC\x30BF\x304C\x5931\x308F\x308C\x3066\x3057\x307E\x3044\x307E\x3059"),                      // Disk error - line2
// SoundDriver
    _S("\30C1\x30E3\x30A4\x30E0"),                                     // Chimes
    _S("\30EA\x30F3\x30B0"),                                      // Rings
    _S("\4FE1\x53F7"),                                     // Signal
// MediaDriver diskname (max 16 chars)
    _S("Internal"),                             // Internal
    _S("External(01)"),                         // External(01)
    _S("External(02)"),                         // External(02)
    _S("External(03)"),                         // External(03)
    _S("External(04)"),                         // External(04)
    _S("External(05)"),                         // External(05)
    _S("External(06)"),                         // External(06)
    _S("External(07)"),                         // External(07)
    _S("External(08)"),                         // External(08)
// MediaDriver socketname (max 16 chars)
    _S("Socket(01)"),                           // Socket(01)
    _S("Socket(02)"),                           // Socket(02)
    _S("Socket(03)"),                           // Socket(03)
    _S("Socket(04)")                            // Socket(04)
    };

// The suffix table
const TText * const LanguageAspect::DateSuffixTable[KMaxSuffixes] =
    {
    _S("\x65e5"),_S("\x65e5"),_S("\x65e5"),_S("\x65e5"),_S("\x65e5"),
    _S("\x65e5"),_S("\x65e5"),_S("\x65e5"),_S("\x65e5"),_S("\x65e5"),
    _S("\x65e5"),_S("\x65e5"),_S("\x65e5"),_S("\x65e5"),_S("\x65e5"),
    _S("\x65e5"),_S("\x65e5"),_S("\x65e5"),_S("\x65e5"),_S("\x65e5"),
    _S("\x65e5"),_S("\x65e5"),_S("\x65e5"),_S("\x65e5"),_S("\x65e5"),
    _S("\x65e5"),_S("\x65e5"),_S("\x65e5"),_S("\x65e5"),_S("\x65e5"),
    _S("\x65e5")
    };
// The day names
const TText * const LanguageAspect::DayTable[KMaxDays] =
    {
    _S("\x6708\x66dc\x65e5"),
    _S("\x706b\x66dc\x65e5"),
    _S("\x6c34\x66dc\x65e5"),
    _S("\x6728\x66dc\x65e5"),
    _S("\x91d1\x66dc\x65e5"),
    _S("\x571f\x66dc\x65e5"),
    _S("\x65e5\x66dc\x65e5")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("\x6708"),
    _S("\x706b"),
    _S("\x6c34"),
    _S("\x6728"),
    _S("\x91d1"),
    _S("\x571f"),
    _S("\x65e5")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("\xff11"),
    _S("\xff12"),
    _S("\xff13"),
    _S("\xff14"),
    _S("\xff15"),
    _S("\xff16"),
    _S("\xff17"),
    _S("\xff18"),
    _S("\xff19"),
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
    _S("12"),
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File
