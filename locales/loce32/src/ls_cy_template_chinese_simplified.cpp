/*
* Copyright (c) 2000 Nokia Corporation and/or its subsidiary(-ies).
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


#include <kernel/ls_std.h>
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

// The Chinese configuration data. 

const TLanguage LLocaleData::Language = ELangPrcChinese;
const TInt LLocaleData::CountryCode = 86;
const TInt LLocaleData::UniversalTimeOffset = 8*3600;
const TDateFormat LLocaleData::DateFormat = EDateJapanese;
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
//const TUint LLocaleData::DaylightSaving = EDstNone;
const TDaylightSavingZone LLocaleData::HomeDaylightSavingZone = EDstNone;
const TUint LLocaleData::WorkDays = 0x1f;
const TText * const LLocaleData::CurrencySymbol = _S("\x00a5");
const TText* const LLocaleData::ShortDateFormatSpec = _S("%F%*D/%*M/%Y");
const TText* const LLocaleData::LongDateFormatSpec = _S("%F%Y\x5e74%*M\x6708%*D\x65e5");
const TText* const LLocaleData::TimeFormatSpec = _S("%F%*I:%T:%S %*A");
const TFatUtilityFunctions* const LLocaleData::FatUtilityFunctions = &gbkFatUtilityFunctions;
const TDay LLocaleData::StartOfWeek = EMonday;
const TClockFormat LLocaleData::ClockFormat = EClockDigital;
const TUnitsFormat LLocaleData::UnitsGeneral = EUnitsMetric;
const TUnitsFormat LLocaleData::UnitsDistanceShort = EUnitsMetric;
const TUnitsFormat LLocaleData::UnitsDistanceLong = EUnitsMetric;
const TUint LLocaleData::ExtraNegativeCurrencyFormatFlags = 0;

// End of file
