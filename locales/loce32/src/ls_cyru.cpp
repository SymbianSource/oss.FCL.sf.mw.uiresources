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
* Description:   ELOCL.DLL for Russia, ELOCL.16
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>
#include <complocl.h>

//  LOCAL CONSTANTS AND MACROS  

// The configuration data
const TLanguage LLocaleData::Language = ELangRussian;
const TInt LLocaleData::CountryCode = 7;
const TInt LLocaleData::UniversalTimeOffset = 10800; // Selected according to capital
const TDateFormat LLocaleData::DateFormat = EDateEuropean;
const TTimeFormat LLocaleData::TimeFormat = ETime24;
const TLocalePos LLocaleData::CurrencySymbolPosition = ELocaleAfter;
const TBool LLocaleData::CurrencySpaceBetween = ETrue;
const TInt LLocaleData::CurrencyDecimalPlaces = 2;
const TLocale::TNegativeCurrencyFormat LLocaleData::NegativeCurrencyFormat=TLocale::TNegativeCurrencyFormat(TLocale::ELeadingMinusSign); // no brackets
const TBool LLocaleData::CurrencyTriadsAllowed = ETrue;
const TText * const LLocaleData::ThousandsSeparator = _S(" ");
const TText * const LLocaleData::DecimalSeparator = _S(",");
const TText * const LLocaleData::DateSeparator[KMaxDateSeparators] = {_S(""),_S("."),_S("."),_S("")};
const TText * const LLocaleData::TimeSeparator[KMaxTimeSeparators] = {_S(""),_S("."),_S("."),_S("")}; 
const TLocalePos LLocaleData::AmPmSymbolPosition = ELocaleAfter;
const TBool LLocaleData::AmPmSpaceBetween = ETrue;
const TDaylightSavingZone LLocaleData::HomeDaylightSavingZone = EDstEuropean;
const TUint LLocaleData::WorkDays = 0x1f;
const TText * const LLocaleData::CurrencySymbol = _S("\x0440\x0443\x0431");
const TText* const LLocaleData::ShortDateFormatSpec = _S("%F%/0%*D%/1%*M%/2%Y%/3"); // day.month.year (with leading zeros)
const TText* const LLocaleData::LongDateFormatSpec = _S("%F%D%X %N %Y \x433. "); // day month(name) year r.
const TText* const LLocaleData::TimeFormatSpec = _S("%F%:0%*H%:1%T%:2%S%:3"); // hours.minutes.seconds 
const TFatUtilityFunctions* const LLocaleData::FatUtilityFunctions = NULL;
const TDay LLocaleData::StartOfWeek = EMonday;
const TClockFormat LLocaleData::ClockFormat = EClockDigital;
const TUnitsFormat LLocaleData::UnitsGeneral = EUnitsMetric;
const TUnitsFormat LLocaleData::UnitsDistanceShort = EUnitsMetric;
const TUnitsFormat LLocaleData::UnitsDistanceLong = EUnitsMetric;
const TUint LLocaleData::ExtraNegativeCurrencyFormatFlags = 0;

//  End of File
