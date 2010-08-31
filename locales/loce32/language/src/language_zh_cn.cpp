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
#include "complocl.h"
#include "unicodeconv.h"


class Gbk
    {
public:
    static void ConvertFromUnicodeL(TDes8& aForeign, const TDesC16& aUnicode, const TDesC8& aReplacementForUnconvertibleUnicodeCharacters, TFatUtilityFunctions::TOverflowAction aOverflowAction);
    static void ConvertToUnicodeL(TDes16& aUnicode, const TDesC8& aForeign, TFatUtilityFunctions::TOverflowAction aOverflowAction);
    static TBool IsLegalShortNameCharacter(TUint aCharacter);			
    };


void Gbk::ConvertFromUnicodeL(TDes8& aForeign, const TDesC16& aUnicode, const TDesC8& /*aReplacementForUnconvertibleUnicodeCharacters*/, TFatUtilityFunctions::TOverflowAction aOverflowAction)
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


void Gbk::ConvertToUnicodeL(TDes16& aUnicode, const TDesC8& aForeign, TFatUtilityFunctions::TOverflowAction aOverflowAction)
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
    
    
TBool Gbk::IsLegalShortNameCharacter (TUint aCharacter)
    {	
    return UnicodeConv::IsLegalShortNameCharacter(aCharacter);	 
    }


const TFatUtilityFunctions gbkFatUtilityFunctions=
    {
    Gbk::ConvertFromUnicodeL,
    Gbk::ConvertToUnicodeL,
    Gbk::IsLegalShortNameCharacter
    };

const TLanguage LanguageAspect::Language = ELangPrcChinese;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = &gbkFatUtilityFunctions;    


//  LOCAL CONSTANTS AND MACROS
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
        {
// Fileserver
            _S("\x91CD\x8BD5"),								// Button 1
    _S("\x505C\x6B62"),								// Button 2
    _S("\x653E\x56DE\x5B58\x50A8\x5361"),						// Put the card back - line1		
    _S("\x6216\x6570\x636E\x5C06\x4E22\x5931"),						// Put the card back - line2		
    _S("\x7535\x6C60\x7535\x91CF\x592A\x4F4E"),						// Low power - line1		
    _S("\x65E0\x6CD5\x5B8C\x6210\x5199\x5165\x5B58\x50A8\x5361"),					// Low power - line2			
    _S("\x5B58\x50A8\x5361\x9519\x8BEF\x002C\x65E0\x6CD5\x5B8C\x6210\x5199\x5165"),				// Disk error - line1				
    _S("\x91CD\x8BD5\x6216\x6570\x636E\x5C06\x4E22\x5931"),		                        // Disk error - line2						
// SoundDriver									
    _S("\x4E50\x58F0"),								// Chimes
    _S("\x94C3\x58F0"),								// Rings
    _S("\x4FE1\x53F7"),								// Signal

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
    _S("\x661f\x671f\x4e00"),
    _S("\x661f\x671f\x4e8c"),
    _S("\x661f\x671f\x4e09"),
    _S("\x661f\x671f\x56db"),
    _S("\x661f\x671f\x4e94"),
    _S("\x661f\x671f\x516d"),
    _S("\x661f\x671f\x65e5")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("\x4e00"),
    _S("\x4e8c"),
    _S("\x4e09"),
    _S("\x56db"),
    _S("\x4e94"),
    _S("\x516d"),
    _S("\x65e5")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("\x0031\x6708"),
    _S("\x0032\x6708"),
    _S("\x0033\x6708"),
    _S("\x0034\x6708"),
    _S("\x0035\x6708"),
    _S("\x0036\x6708"),
    _S("\x0037\x6708"),
    _S("\x0038\x6708"),
    _S("\x0039\x6708"),
    _S("\x0031\x0030\x6708"),
    _S("\x0031\x0031\x6708"),
    _S("\x0031\x0032\x6708")
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
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("am"),_S("pm")};



//  End of File
