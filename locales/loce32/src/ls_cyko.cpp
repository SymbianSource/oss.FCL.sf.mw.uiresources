/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   ELOCL.DLL for Korean
*
*/




//  EXTERNAL RESOURCES


//  Include Files

#include <kernel/ls_std.h>
#include <complocl.h>
#include "unicodeconv.h"

class Korean
	{
public:
	static void ConvertFromUnicodeL(TDes8& aForeign, const TDesC16& aUnicode, const TDesC8& aReplacementForUnconvertibleUnicodeCharacters, TFatUtilityFunctions::TOverflowAction aOverflowAction);
	static void ConvertToUnicodeL(TDes16& aUnicode, const TDesC8& aForeign, TFatUtilityFunctions::TOverflowAction aOverflowAction);
	static TBool IsLegalShortNameCharacter (TUint aCharacter);
	};


void Korean::ConvertFromUnicodeL(TDes8& aForeign, const TDesC16& aUnicode, const TDesC8&, TFatUtilityFunctions::TOverflowAction aOverflowAction)
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

void Korean::ConvertToUnicodeL(TDes16& aUnicode, const TDesC8& aForeign, TFatUtilityFunctions::TOverflowAction aOverflowAction)
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


TBool Korean::IsLegalShortNameCharacter (TUint aCharacter)
	{
	return UnicodeConv::IsLegalShortNameCharacter (aCharacter);
	}


const TFatUtilityFunctions KoreanFatUtilityFunctions=
	{
	Korean::ConvertFromUnicodeL,
	Korean::ConvertToUnicodeL,
	Korean::IsLegalShortNameCharacter
	};


//  LOCAL CONSTANTS AND MACROS

// The configuration data
const TLanguage LLocaleData::Language = ELangKorean;
const TInt LLocaleData::CountryCode = 82;
const TInt LLocaleData::UniversalTimeOffset = 32400;
const TDateFormat LLocaleData::DateFormat = EDateJapanese;
const TTimeFormat LLocaleData::TimeFormat = ETime12;
const TLocalePos LLocaleData::CurrencySymbolPosition = ELocaleAfter;
const TBool LLocaleData::CurrencySpaceBetween = EFalse;
const TInt LLocaleData::CurrencyDecimalPlaces = 0;
const TLocale::TNegativeCurrencyFormat LLocaleData::NegativeCurrencyFormat=TLocale::TNegativeCurrencyFormat(TLocale::ELeadingMinusSign); // replacing CurrencyNegativeInBrackets
const TBool LLocaleData::CurrencyTriadsAllowed = ETrue;
const TText * const LLocaleData::ThousandsSeparator = _S(",");
const TText * const LLocaleData::DecimalSeparator = _S(".");
const TText * const LLocaleData::DateSeparator[KMaxDateSeparators] = {_S(""),_S("/"),_S("/"),_S("")};
const TText * const LLocaleData::TimeSeparator[KMaxTimeSeparators] = {_S(""),_S(":"),_S(":"),_S("")};
const TLocalePos LLocaleData::AmPmSymbolPosition = ELocaleAfter;
const TBool LLocaleData::AmPmSpaceBetween = EFalse;
const TDaylightSavingZone LLocaleData::HomeDaylightSavingZone = EDstNone;
const TUint LLocaleData::WorkDays = 0x1f;
const TText * const LLocaleData::CurrencySymbol = _S("\x20A9");
const TText* const LLocaleData::ShortDateFormatSpec = _S("%F%/0%D%/1%M%/2%Y%/3"); // no leading zeros //check this
const TText* const LLocaleData::LongDateFormatSpec = _S("%F%D%X %N %Y"); // leading zeros in day //check this
const TText* const LLocaleData::TimeFormatSpec = _S("%F%:0%*I%:1%*T%:2%*S%:3 %B"); // am/pm -symbol included //check this
const TFatUtilityFunctions* const LLocaleData::FatUtilityFunctions = &KoreanFatUtilityFunctions;
const TDay LLocaleData::StartOfWeek = EMonday;
const TClockFormat LLocaleData::ClockFormat = EClockDigital;
const TUnitsFormat LLocaleData::UnitsGeneral = EUnitsMetric;
const TUnitsFormat LLocaleData::UnitsDistanceShort = EUnitsMetric;
const TUnitsFormat LLocaleData::UnitsDistanceLong = EUnitsMetric;
const TUint LLocaleData::ExtraNegativeCurrencyFormatFlags = 0; //check this

//  End of File
