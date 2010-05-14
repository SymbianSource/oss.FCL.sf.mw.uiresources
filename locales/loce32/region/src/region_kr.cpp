/*
* Copyright (c) 2010 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   elocl_reg.410 for South Korea region
*
*/

//  Include Files  

#include <kernel/ls_std.h>
#include "locl_region.h"

//  REGION CONSTANTS AND MACROS  

// The configuration data
const TInt RegionAspect::CountryCode = 82;
const TInt RegionAspect::UniversalTimeOffset = 32400;
const TDateFormat RegionAspect::DateFormat = EDateJapanese;
const TTimeFormat RegionAspect::TimeFormat = ETime12;
const TLocalePos RegionAspect::CurrencySymbolPosition = ELocaleAfter;
const TBool RegionAspect::CurrencySpaceBetween = EFalse;
const TInt RegionAspect::CurrencyDecimalPlaces = 0;
const TLocale::TNegativeCurrencyFormat RegionAspect::NegativeCurrencyFormat=TLocale::TNegativeCurrencyFormat(TLocale::ELeadingMinusSign); // replacing CurrencyNegativeInBrackets
const TBool RegionAspect::CurrencyTriadsAllowed = ETrue;
const TText * const RegionAspect::ThousandsSeparator = _S(",");
const TText * const RegionAspect::DecimalSeparator = _S(".");
const TText * const RegionAspect::DateSeparator[KMaxDateSeparators] = {_S(""),_S("/"),_S("/"),_S("")};
const TText * const RegionAspect::TimeSeparator[KMaxTimeSeparators] = {_S(""),_S(":"),_S(":"),_S("")};
const TLocalePos RegionAspect::AmPmSymbolPosition = ELocaleAfter;
const TBool RegionAspect::AmPmSpaceBetween = EFalse;
const TDaylightSavingZone RegionAspect::HomeDaylightSavingZone = EDstNone;
const TUint RegionAspect::WorkDays = 0x1f;
const TText * const RegionAspect::CurrencySymbol = _S("\x20A9");
const TText* const RegionAspect::ShortDateFormatSpec = _S("%F%/0%D%/1%M%/2%Y%/3"); // no leading zeros //check this
const TText* const RegionAspect::LongDateFormatSpec = _S("%F%D%X %N %Y"); // leading zeros in day //check this
const TText* const RegionAspect::TimeFormatSpec = _S("%F%:0%*I%:1%*T%:2%*S%:3 %B"); // am/pm -symbol included //check this
const TDay RegionAspect::StartOfWeek = EMonday;
const TClockFormat RegionAspect::ClockFormat = EClockDigital;
const TUnitsFormat RegionAspect::UnitsGeneral = EUnitsMetric;
const TUnitsFormat RegionAspect::UnitsDistanceShort = EUnitsMetric;
const TUnitsFormat RegionAspect::UnitsDistanceLong = EUnitsMetric;
const TUint16 RegionAspect::RegionCode = 410;
const TUint RegionAspect::ExtraNegativeCurrencyFormatFlags = 0; //check this

//  End of File
