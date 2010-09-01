/*
* Copyright (c) 2004 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   ELOCL.DLL for Apac-English Chinese Traditional Honk Kong
*
*/


#include <kernel/ls_std.h>
#include "complocl.h"
#include "unicodeconv.h"
#include <languages.hrh>

class Big5
	{
public:
	static void ConvertFromUnicodeL(TDes8& aForeign, const TDesC16& aUnicode, const TDesC8& aReplacementForUnconvertibleUnicodeCharacters, TFatUtilityFunctions::TOverflowAction aOverflowAction);
	static void ConvertToUnicodeL(TDes16& aUnicode, const TDesC8& aForeign, TFatUtilityFunctions::TOverflowAction aOverflowAction);
	static TBool IsLegalShortNameCharacter (TUint aCharacter);			
	};


void Big5::ConvertFromUnicodeL(TDes8& aForeign, const TDesC16& aUnicode, const TDesC8& /*aReplacementForUnconvertibleUnicodeCharacters*/, TFatUtilityFunctions::TOverflowAction aOverflowAction)
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


void Big5::ConvertToUnicodeL(TDes16& aUnicode, const TDesC8& aForeign, TFatUtilityFunctions::TOverflowAction aOverflowAction)
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


TBool Big5::IsLegalShortNameCharacter (TUint aCharacter)
	{
	return UnicodeConv::IsLegalShortNameCharacter(aCharacter);	
	}


const TFatUtilityFunctions big5FatUtilityFunctions=
	{
	Big5::ConvertFromUnicodeL,
	Big5::ConvertToUnicodeL,
	Big5::IsLegalShortNameCharacter
	};
	
// The configuration data

const TLanguage LLocaleData::Language = (enum TLanguage)KLangHongKongEnglish;
const TInt LLocaleData::CountryCode = 852;
const TInt LLocaleData::UniversalTimeOffset = 8*3600;
const TDateFormat LLocaleData::DateFormat = EDateEuropean;
const TTimeFormat LLocaleData::TimeFormat = ETime24;
const TLocalePos LLocaleData::CurrencySymbolPosition = ELocaleBefore;
const TBool LLocaleData::CurrencySpaceBetween = EFalse;
const TInt LLocaleData::CurrencyDecimalPlaces = 2;
const TLocale::TNegativeCurrencyFormat LLocaleData::NegativeCurrencyFormat=TLocale::TNegativeCurrencyFormat(0); // replacing CurrencyNegativeInBrackets
const TBool LLocaleData::CurrencyTriadsAllowed = ETrue;
const TText * const LLocaleData::ThousandsSeparator = _S(",");
const TText * const LLocaleData::DecimalSeparator = _S(".");
const TText * const LLocaleData::DateSeparator[KMaxDateSeparators] = {_S(""),_S("/"),_S("/"),_S("")};
const TText * const LLocaleData::TimeSeparator[KMaxTimeSeparators] = {_S(""),_S(":"),_S(":"),_S("")};
const TLocalePos LLocaleData::AmPmSymbolPosition = ELocaleAfter;
const TBool LLocaleData::AmPmSpaceBetween = ETrue;
const TDaylightSavingZone LLocaleData::HomeDaylightSavingZone = EDstNone;
const TUint LLocaleData::WorkDays = 0x1f;
const TText * const LLocaleData::CurrencySymbol = _S("HK$");
const TText* const LLocaleData::ShortDateFormatSpec = _S("%F%/0%D%/1%M%/2%Y%/3"); // no leading zeros
const TText* const LLocaleData::LongDateFormatSpec = _S("%F%D%X %N %Y"); // leading zeros in day
const TText* const LLocaleData::TimeFormatSpec = _S("%F%:0%*I%:1%*T%:2%*S%:3 %B"); // am/pm -symbol included
const TFatUtilityFunctions* const LLocaleData::FatUtilityFunctions = &big5FatUtilityFunctions;
const TDay LLocaleData::StartOfWeek = EMonday;
const TClockFormat LLocaleData::ClockFormat = EClockAnalog;
const TUnitsFormat LLocaleData::UnitsGeneral = EUnitsMetric;
const TUnitsFormat LLocaleData::UnitsDistanceShort = EUnitsMetric;
const TUnitsFormat LLocaleData::UnitsDistanceLong = EUnitsMetric;
const TUint LLocaleData::ExtraNegativeCurrencyFormatFlags = 0;

//  End of File
