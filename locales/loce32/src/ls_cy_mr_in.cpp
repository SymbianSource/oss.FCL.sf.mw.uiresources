/*
* Copyright (c) 2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   ELOCL.DLL for Marathi, Epoc code 72
*
*/



//  EXTERNAL RESOURCES

//  Include Files

#include <kernel/ls_std.h>
#include <complocl.h>

//  LOCAL CONSTANTS AND MACROS

// The configuration data
const TLanguage LLocaleData::Language = ELangMarathi;
const TInt LLocaleData::CountryCode = 91;
const TInt LLocaleData::UniversalTimeOffset = 21600;
const TDateFormat LLocaleData::DateFormat = EDateEuropean;
const TTimeFormat LLocaleData::TimeFormat = ETime12;
const TLocalePos LLocaleData::CurrencySymbolPosition = ELocaleBefore;
const TBool LLocaleData::CurrencySpaceBetween = ETrue;
const TInt LLocaleData::CurrencyDecimalPlaces = 2;
const TLocale::TNegativeCurrencyFormat LLocaleData::NegativeCurrencyFormat=TLocale::TNegativeCurrencyFormat(TLocale::ELeadingMinusSign);
const TBool LLocaleData::CurrencyTriadsAllowed = ETrue;
const TText * const LLocaleData::ThousandsSeparator = _S(",");
const TText * const LLocaleData::DecimalSeparator = _S(".");
const TText * const LLocaleData::DateSeparator[KMaxDateSeparators] = {_S(""),_S("-"),_S("-"),_S("")};
const TText * const LLocaleData::TimeSeparator[KMaxTimeSeparators] = {_S(""),_S(":"),_S(":"),_S("")};
const TLocalePos LLocaleData::AmPmSymbolPosition = ELocaleAfter;
const TBool LLocaleData::AmPmSpaceBetween = ETrue;
const TDaylightSavingZone LLocaleData::HomeDaylightSavingZone = EDstNone;
const TUint LLocaleData::WorkDays = 0x1f;
const TText * const LLocaleData::CurrencySymbol = _S("\x0930\x0941");
const TText* const LLocaleData::ShortDateFormatSpec = _S("%F%/0%D%/1%M%/2%Y%/3");
const TText* const LLocaleData::LongDateFormatSpec = _S("%F%*D %N %Y");
const TText* const LLocaleData::TimeFormatSpec = _S("%F%:0%*I%:1%T%:2%S%:3%B");
const TFatUtilityFunctions* const LLocaleData::FatUtilityFunctions = NULL;
const TDay LLocaleData::StartOfWeek = EMonday;
const TClockFormat LLocaleData::ClockFormat = EClockAnalog;
const TUnitsFormat LLocaleData::UnitsGeneral = EUnitsMetric;
const TUnitsFormat LLocaleData::UnitsDistanceShort = EUnitsMetric;
const TUnitsFormat LLocaleData::UnitsDistanceLong = EUnitsMetric;
const TUint LLocaleData::ExtraNegativeCurrencyFormatFlags = 0;
const TDigitType LLocaleData::DigitType = EDigitTypeDevanagari;

//  End of File
