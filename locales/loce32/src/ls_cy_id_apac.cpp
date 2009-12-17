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
* Description:   ELOCL.DLL for English+Chinese(Simplified)+BahasaIndonesia, ELOCL.327
*
*/




//  EXTERNAL RESOURCES
#include <languages.hrh>

//  Include Files

#include <kernel/ls_std.h>
#include <complocl.h>

//  LOCAL CONSTANTS AND MACROS

// The configuration data
const TLanguage LLocaleData::Language = (const enum TLanguage)KLangApacIndonesian;
const TInt LLocaleData::CountryCode = 62;
const TInt LLocaleData::UniversalTimeOffset = 25200; //+7 GMT, -28800 for +8 GMT
const TDateFormat LLocaleData::DateFormat = EDateEuropean;
const TTimeFormat LLocaleData::TimeFormat = ETime24;
const TLocalePos LLocaleData::CurrencySymbolPosition = ELocaleBefore;
const TBool LLocaleData::CurrencySpaceBetween = ETrue; 
const TInt LLocaleData::CurrencyDecimalPlaces = 2;
const TLocale::TNegativeCurrencyFormat LLocaleData::NegativeCurrencyFormat=TLocale::TNegativeCurrencyFormat(TLocale::EInBrackets); // with brackets.
const TBool LLocaleData::CurrencyTriadsAllowed = ETrue;
const TText * const LLocaleData::ThousandsSeparator = _S(".");
const TText * const LLocaleData::DecimalSeparator = _S(",");
const TText * const LLocaleData::DateSeparator[KMaxDateSeparators] = {_S(""),_S("-"),_S("-"),_S("")};  
const TText * const LLocaleData::TimeSeparator[KMaxTimeSeparators] = {_S(""),_S("."),_S("."),_S("")};  
const TLocalePos LLocaleData::AmPmSymbolPosition = ELocaleAfter;
const TBool LLocaleData::AmPmSpaceBetween = ETrue;
const TDaylightSavingZone LLocaleData::HomeDaylightSavingZone = EDstEuropean;
const TUint LLocaleData::WorkDays = 0x1f;   // monday to friday
const TText * const LLocaleData::CurrencySymbol = _S("Rp");
const TText* const LLocaleData::ShortDateFormatSpec = _S("%F%/0%*D%/1%*M%/2%Y%/3"); // day-month-year (without leading zeros)
const TText* const LLocaleData::LongDateFormatSpec = _S("%F%*D. %N %Y"); // day(dot separator) month(name) year (no leading zero in day)
const TText* const LLocaleData::TimeFormatSpec = _S("%F%:0%*H%:1%T%:2%S%:3"); // hours:minutes:seconds (with leading zeros)
const TFatUtilityFunctions* const LLocaleData::FatUtilityFunctions = NULL;
const TDay LLocaleData::StartOfWeek = EMonday;
const TClockFormat LLocaleData::ClockFormat = EClockDigital;
const TUnitsFormat LLocaleData::UnitsGeneral = EUnitsMetric;
const TUnitsFormat LLocaleData::UnitsDistanceShort = EUnitsMetric;
const TUnitsFormat LLocaleData::UnitsDistanceLong = EUnitsMetric;
const TUint LLocaleData::ExtraNegativeCurrencyFormatFlags = 0;

//  End of File

