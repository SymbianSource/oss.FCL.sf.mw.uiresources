/*
* Copyright (c) 2004-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   Matches Fonts to a criteria and what is available on the product.
*
*/




// INCLUDE FILES

#ifdef SYMBIAN_ENABLE_SPLIT_HEADERS
#include <uikon/eikdefmacros.h>
#endif
#include <eikenv.h>
#include <featmgr.h> 
#include <gdi.h>
#include <eikenv.h>
#include <eikappui.h>
#include <e32std.h>
#include <languages.hrh>

// This component's "own" header comes from a S60 export from the System Include
#include <AknFontProvider.h>
#include <AknFontSpecification.h>
#include <AknFontProviderSuppliedMetrics.h>

// Used for type TCdlArray, which is used for declaring arrays of static const data
#include <CdlTypes.h> 

// Used for TOpenFontSpec to enable antialising
#include <openfont.h>

// For FontUtils
#include <gulutil.h>

#include <f32file.h>

// CONSTANTS

// General "Wildcard" value. 
#define EAny    -1

// Wildcard specific for the category 
#define EAknFontCategoryAny -1

// Used to request no additional "boldness"
#define ENotBold  EStrokeWeightNormal 

// Used to request bold typeface
#define EBold  EStrokeWeightBold 

// Used to turn antialising off 
#define ENotAntialiase  0

// Used to turn antialising on
#define EAntialiase  1

//
// Font names to be used in the tables
//

_LIT(KS60TCAndHK,"Sans MT  UniT_HKSCS_S60");
_LIT(KS60SC,"Sans MT 936_S60");
_LIT(KS60TCAndHKHiRes,"MHeiM-C-B5HK-S60");
_LIT(KS60SCHiRes,"MHeiM-C-GB18030-S60");
_LIT(KJapaneseHensei,"Heisei Kaku Gothic S60");
_LIT(KS60Digital, "Series 60 ZDigi");
_LIT(KS60Sans, "Series 60 Sans");
_LIT(KS60SansTitleSemiBold, "Series 60 Sans TitleSmBd");

_LIT(KS60Korean,"Series 60 Korean");
//chinese adaptation changes
//stroke SC latin 
_LIT(KS60SCSANSRLF, "S60SCSANSRLF");
_LIT(KS60SCSANSSBLF, "S60SCSANSSBLF");
_LIT(KS60SCSANSTTLSMBLDLF, "S60SCSANSTTLSMBLDLF");
//stroke TCHK latin
_LIT(KS60TCHKSANSRLF, "S60TCHKSANSRLF");
_LIT(KS60TCHKSANSSBLF, "S60TCHKSANSSBLF");
_LIT(KS60TCHKSANSTTLSMBLDLF, "S60TCHKSANSTTLSMBLDLF");
//HiRes SC latin
_LIT(KS60SCHRSANSRLF, "S60SCHRSANSRLF");
_LIT(KS60SCHRSANSSBLF, "S60SCHRSANSSBLF");
_LIT(KS60SCHRSANSTTLSMBLDLF, "S60SCHRSANSTTLSMBLDLF");
//HiRes TCHK latin
_LIT(KS60TCHKHRSANSRLF, "S60TCHKHRSANSRLF");
_LIT(KS60TCHKHRSANSSBLF, "S60TCHKHRSANSSBLF");
_LIT(KS60TCHKHRSANSTTLSMBLDLF, "S60TCHKHRSANSTTLSMBLDLF");
//end

//all font files
_LIT(KS60JAPSANSRLF, "S60JAPSANSRLF");
_LIT(KS60JAPSANSSBLF, "S60JAPSANSSBLF");
_LIT(KS60JAPSANSTTLSMBLDLF, "S60JAPSANSTTLSMBLDLF");

_LIT(KS60KORSANSRLF, "S60KORSANSRLF");
_LIT(KS60KORSANSSBLF, "S60KORSANSSBLF");
_LIT(KS60KORSANSTTLSMBLDLF, "S60KORSANSTTLSMBLDLF");
//end

// Texts for measuring maximum ascents and descents:
_LIT(KWesternFontMaxExtentText, "\x00C1\x00C7" );

// Language support map
#define ELanguageSupportBasicLatin                  0x00000001
#define ELanguageSupportLatin1Supplement            0x00000002
#define ELanguageSupportLatinExtendedA              0x00000004
#define ELanguageSupportLatinExtendedB              0x00000008
#define ELanguageSupportGreek                       0x00000010
#define ELanguageSupportCyrillic                    0x00000020
#define ELanguageSupportHebrew                      0x00000040
#define ELanguageSupportArabic                      0x00000080
#define ELanguageSupportThai                        0x00001000
#define ELanguageSupportChinesePRC                  0x00002000
#define ELanguageSupportChineseTaiwanHK             0x00004000
#define ELanguageSupportChineseHiRes                0x00008000
#define ELanguageSupportEnclosedCJK                 0x00010000
#define ELanguageSupportCJKUnifiedIdeographsLevel0  0x00020000
#define ELanguageSupportCJKUnifiedIdeographsLevel1  0x00040000
#define ELanguageSupportJapanese                    0x00080000
#define ELanguageSupportKorean                      0x00100000
#define ELanguageSupportHangul                      0x00200000
//chinese adaptation
#define ELanguageSupportFontLinking          0x00400000
//end
//end
#define ELanguageSupportDevanagari                  0x01000000
#define ELanguageSupportS60PrivateUseArea1          0x10000000

// Test characters for language support
// Latin uppercase A
#define KTestCharLatin      0x0041
// Hiragana Letter small A
#define KTestCharHiragana   0x3041
// ye - chosen as a non-trivial and identifiable common chinese character
#define KTestCharChinese    0x4e5f
// Thai character Ko Kai
#define KTestCharThai       0x0e01
// Korean character "o"
#define KTestCharKorean     0x3147

#define EElafLangs (   ELanguageSupportBasicLatin \
                               | ELanguageSupportLatin1Supplement \
                               | ELanguageSupportLatinExtendedA \
                               | ELanguageSupportLatinExtendedB \
                               | ELanguageSupportGreek \
                               | ELanguageSupportCyrillic \
                               | ELanguageSupportHebrew \
                               | ELanguageSupportArabic \
                               | ELanguageSupportS60PrivateUseArea1 )

#define ESouthAndSoutheastAsianCommonLangs (    ELanguageSupportBasicLatin \
                               | ELanguageSupportLatin1Supplement \
                               | ELanguageSupportLatinExtendedA \
                               | ELanguageSupportLatinExtendedB \
                               | ELanguageSupportGreek \
                               | ELanguageSupportCyrillic \
                               | ELanguageSupportHebrew \
                               | ELanguageSupportArabic \
                               | ELanguageSupportS60PrivateUseArea1 )


#define EDevanagariLangs (   ESouthAndSoutheastAsianCommonLangs \
                               | ELanguageSupportDevanagari )


#define EApacCommonLangs ( ELanguageSupportBasicLatin \
                                   | ELanguageSupportLatin1Supplement \
                                   | ELanguageSupportS60PrivateUseArea1 )

#define EThaiLangs        (   EApacCommonLangs \
                                      | ELanguageSupportThai )

#define EJapaneseLangs    (  EApacCommonLangs \
                                     | ELanguageSupportJapanese )
#define EJapaneseLFLangs    (  EApacCommonLangs \
                                     | ELanguageSupportJapanese \
                                     | ELanguageSupportFontLinking )
#define EKoreanLangs    (  EApacCommonLangs \
                                     | ELanguageSupportKorean )

#define EKoreanLFLangs    (  EApacCommonLangs \
                                     | ELanguageSupportKorean \
                                     | ELanguageSupportFontLinking )

#define EChineseLangs     ( EApacCommonLangs \
                                    | ELanguageSupportCJKUnifiedIdeographsLevel0 \
                                    | ELanguageSupportCJKUnifiedIdeographsLevel1 )

#define EChineseLangsPRC     ( EChineseLangs \
                                    | ELanguageSupportChinesePRC )

#define EChineseLangsTaiwanHK     ( EChineseLangs \
                                    | ELanguageSupportChineseTaiwanHK )

#define EChineseLangsPRCHiRes     ( EChineseLangs \
                                    | ELanguageSupportChinesePRC \
                                    | ELanguageSupportChineseHiRes)

#define EChineseLangsTaiwanHKHiRes     ( EChineseLangs \
                                        | ELanguageSupportChineseTaiwanHK \
                                        | ELanguageSupportChineseHiRes)

//chinese adaptation
#define EChineseLangsPRCLF     ( EChineseLangs \
                                    | ELanguageSupportChinesePRC \
                                    | ELanguageSupportFontLinking )

#define EChineseLangsTaiwanHKLF     ( EChineseLangs \
                                    | ELanguageSupportChineseTaiwanHK \
                                    | ELanguageSupportFontLinking )

#define EChineseLangsPRCHiResLF     ( EChineseLangs \
                                    | ELanguageSupportChinesePRC \
                                    | ELanguageSupportChineseHiRes \
                                    | ELanguageSupportFontLinking )

#define EChineseLangsTaiwanHKHiResLF     ( EChineseLangs \
                                        | ELanguageSupportChineseTaiwanHK \
                                        | ELanguageSupportChineseHiRes \
                                        | ELanguageSupportFontLinking )
//end                                    


#define EElafLFLoReLangs   (  EElafLangs \
                               | EChineseLangsPRCLF)


#define EElafLFHiReLangs   (  EElafLangs \
                               | EChineseLangsPRCHiResLF)
// Wildcard value for langs (font is to be used for all languages)
#define EAnyLangs           0xffffffff
const TInt KAknFontStylesSupported(3);
enum TAknLinkedFontTypes
    {
    EAknSystemLinkedFonts,
    EAknContentLinkedFonts,
    EAknAllLinkedFonts
    };

//chinese adaptation
/**
* For internal use only
* Structure holds info about linked typeface info that needs to be created
* the values here gets populated from link.ink, any configurable info can be added here
* the module which uses this structure can be modified later to make it
* configurable for eg: via centrep keys
*/
struct SLinkedFontDetails
    {
    TBool iCanonical;
    TInt iGroup;
    TBuf<KMaxTypefaceNameLength> iFontName;
    TBuf<KMaxTypefaceNameLength> iLinkFontName;
    TInt iFontCategory;//1 - Regular, 2 - Bold
    };
//end

/**
* 
*/
struct SHeightRequest
    {
    TUint16 iDesignHeight;
    TUint16 iRequestHeight;
    };

/**
* Structure to hold information about the deviation of character range's baselines from the 
* baseline (i.e. ascent) advertised by CFont.  A raising of the bitmap is +ve.
* The raising of the baseline can be given proportionally, as a fraction of the ascent, by providing 
* a non-zero denominator.
* 
* In defining arrays of this structure, there must always be a line defined following any line that is
* to be used.
*/
struct SBaselineDelta 
    {
    TUint iFirstCharacter;
    TInt iRelativeBaselineLift;
    TInt iDenominator;
    };

/**
* Principal structure of the Product font table. 
*/
struct SAknProductFontTableLine
    {
    TInt iCategory;
    TInt iMinSize;
    TInt iMaxSize;
    TInt iBold;
    TInt iItalic;
    TInt iSizeToUse;
    TInt iBoldnessToUse;
    TInt iAntialisingToUse;
    TUint iSupportedLanguagesPattern;
    const TDesC* iTypefaceName;
    const TDesC* iGroupName;
    TCdlArray<SBaselineDelta> const* iBaselineData;
    TCdlArray<SHeightRequest> const* iHeightRequestData;
    const TDesC* iMaxAscentDescentChars;
    };
//
// height request sizes to use for Agfa vector fonts mapped from text pane height:
//

CDL_ARRAY_START( SHeightRequest, latinHeightRequestArray)
    {
        {  2,  2 }, 
        { 10,  8 }, 
        { 11,  9 }, 
        { 13, 11 }, 
        { 14, 12 }, 
        { 14, 13 }, 
        { 16, 14 }, 
        { 18, 15 }, 
        { 19, 16 }, 
        { 24, 21 }, 
        { 25, 22 }, 
        { 26, 24 }, 
        { 27, 25 }, 
        { 28, 26 }, 
        { 29, 26 }, 
        { 30, 27 }, 
        { 79, 72 }, 
        { 218, 200 }, 
    }
CDL_ARRAY_END(SHeightRequest, latinHeightRequestArray);

CDL_ARRAY_START( SHeightRequest, latinLFHeightRequestArray)
    {
        {  2,  2 }, 
        { 10,  8 }, 
        { 11,  9 }, 
        { 13, 11 }, 
        { 14, 12 }, 
        { 14, 13 }, 
        { 16, 14 }, 
        { 18, 15 }, 
        { 19, 16 }, 
        { 24, 21 }, 
        { 25, 22 }, 
        { 26, 24 }, 
        { 27, 25 }, 
        { 28, 26 }, 
        { 29, 26 }, 
        { 30, 27 }, 
        { 79, 72 }, 
        { 218, 200 }, 
    }
CDL_ARRAY_END(SHeightRequest, latinLFHeightRequestArray);

CDL_ARRAY_START( SHeightRequest, agfaDigitalHeightRequestArray)
    {
        { 5, 5 },
        { 18, 16 },
        { 20, 18 },
        { 22, 20 },
        { 24, 21 },
        { 30, 26 },
        { 32, 29 },
        { 33, 29 },
        { 35, 31 },
        { 40, 35 },
        { 44, 39 },
        { 46, 41 },
        { 470, 430 },
    }
CDL_ARRAY_END(SHeightRequest, agfaDigitalHeightRequestArray);


CDL_ARRAY_START( SHeightRequest, strokeFontHeightRequestArray)
    {
        { 13, 12 }, 
        { 14, 14 }, 
        { 15, 14 }, 
        { 16, 16 }, 
        { 17, 16 }, 
        { 18, 18 }, 
        { 19, 18 }, 
        { 20, 20 }, 
        { 21, 20 }, 
    }
CDL_ARRAY_END(SHeightRequest, strokeFontHeightRequestArray);

//
// Baseline adjustment for APAC fonts
//

CDL_ARRAY_START( SBaselineDelta, apacVectorFontBaselineArray )
    {
        { 0x0000,   1, 6 },
        { 0x0fff,   0, KAknFontProviderBaselineCorrectionIsAbsolute }
    }
CDL_ARRAY_END( SBaselineDelta, apacVectorFontBaselineArray );

CDL_ARRAY_START( SBaselineDelta, heiseiBaselineArray )
    {
        { 0x0000,   1, 7.8 },
        { 0x0fff,   0, KAknFontProviderBaselineCorrectionIsAbsolute }
    }
CDL_ARRAY_END( SBaselineDelta, heiseiBaselineArray );
CDL_ARRAY_START( SBaselineDelta, koreanVectorFontBaselineArray )
    {
        { 0x0000,   -1, 6 },
        { 0x0fff,   0, KAknFontProviderBaselineCorrectionIsAbsolute }
    }    
   
CDL_ARRAY_END( SBaselineDelta, koreanVectorFontBaselineArray );

CDL_ARRAY_START( SHeightRequest, heiseiFontHeightRequestArray)
    {
        { 13, 12 }, 
        { 14, 14 }, 
        { 15, 14 }, 
        { 16, 16 }, 
        { 17, 16 }, 
        { 18, 18 }, 
        { 19, 18 }, 
        { 20, 20 }, 
        { 21, 20 }, 
    }
CDL_ARRAY_END(SHeightRequest, heiseiFontHeightRequestArray);

CDL_ARRAY_START( SHeightRequest, koreanFontHeightRequestArray)
    {
        { 8, 6 },
        { 9, 6 },
        { 10, 8 },
        { 11, 8 },
        { 12, 10 },
        { 13, 10 },
        { 14, 12 },
        { 15, 12 },
        { 16, 14 },
        { 17, 14 },
        { 18, 16 },
        { 19, 16 },
        { 20, 18 },
        { 21, 18 },
        { 22, 20 },
        { 23, 20 },
        { 24, 22 },
        { 25, 22 },
        { 26, 24 },
        { 27, 24 },
        { 28, 26 }, 
        { 29, 26 }, 
        { 30, 27 }, 
        { 79, 60 }, 
		{ 218, 200 },
    }
CDL_ARRAY_END(SHeightRequest, koreanFontHeightRequestArray);

CDL_ARRAY_START( SHeightRequest, chnlinkedFontHeightRequestArray)
    {
        {  2,  2 }, 
        { 10,  8 }, 
        { 11,  9 }, 
        { 13, 10 }, 
        { 14, 12 }, 
        { 15, 12 }, 
        { 16, 14 }, 
        { 17, 14 }, 
        { 18, 14 }, 
        { 19, 16 }, 
        { 20, 16 }, 
        { 21, 18 }, 
        { 24, 21 }, 
        { 25, 22 }, 
        { 26, 24 }, 
        { 27, 25 }, 
        { 28, 26 }, 
        { 29, 26 }, 
        { 30, 27 }, 
        { 79, 72 }, 
        { 218, 200 }, 
    }
CDL_ARRAY_END(SHeightRequest, chnlinkedFontHeightRequestArray);

CDL_ARRAY_START( SHeightRequest, japaneseLFHeightRequestArray)
    {
        {  2,  2 }, 
        { 10,  8 }, 
        { 11,  9 }, 
        { 13, 10 }, 
        { 14, 12 }, 
        { 15, 12 }, 
        { 16, 14 }, 
        { 17, 14 }, 
        { 18, 14 }, 
        { 19, 16 }, 
        { 20, 16 }, 
        { 21, 18 }, 
        { 24, 21 }, 
        { 25, 22 }, 
        { 26, 24 }, 
        { 27, 25 }, 
        { 28, 26 }, 
        { 29, 26 }, 
        { 30, 27 }, 
        { 79, 72 }, 
        { 218, 200 }, 
    }
CDL_ARRAY_END(SHeightRequest, japaneseLFHeightRequestArray);

CDL_ARRAY_START( SHeightRequest, koreanLFHeightRequestArray)
    {
        {  2,  2 }, 
        { 8, 6 },
        { 9, 6 },
        { 10,  8 }, 
        { 11,  8 }, 
        { 13, 11 }, 
        { 14, 12 }, 
        { 15, 12 },
        { 16, 14 },
        { 17, 14 },
        { 18, 16 },
        { 19, 16 },
        { 20, 18 },
        { 21, 18 },
        { 22, 20 },
        { 23, 20 },
        { 24, 22 },
        { 25, 22 },
        { 26, 24 },
        { 27, 24 },
        { 28, 26 }, 
        { 29, 26 }, 
        { 30, 27 }, 
        { 79, 72 }, 
        { 218, 200 }, 
    }
CDL_ARRAY_END(SHeightRequest, koreanLFHeightRequestArray);

// Typeface Aliasing

// Minimum length for alias substring matching
#define KMinAliasLength 2

struct SAknLanguagesAndTypefaceTableLine
    {
    TUint iSupportedLanguagesPattern;
    const TDesC* iTypefaceName;
    };

struct SAknAliasTableLine
    {
    const TDesC* iAlias;
    const TDesC* iGroupName;
    TCdlArray<SAknLanguagesAndTypefaceTableLine> const* iLanguagesAndTypefaceTable;
    TBool iIsAliasGeneric;
    };

// Aliases
_LIT(KSystemOne, "System One");
_LIT(KArial, "arial");
_LIT(KVerdana, "verdana");
_LIT(KSansSerifHyphen, "sans-serif");
_LIT(KSansSerif, "sansserif");
_LIT(KHelvetica, "helvetica");
_LIT(KGeorgia, "georgia");
_LIT(KTimes, "times");
_LIT(KTimesNewRoman, "times new roman");
_LIT(KSerif, "serif");
_LIT(KMonospace, "monospaced");
_LIT(KCourier, "courier");

// Group names
_LIT(KS60Group, "S60Group");

// Default
_LIT(KDefaultGroupName, "S60Group");

/*
* Language and typefaces combinations to use without regard to size and style
*
* First element is language coverage bit pattern
* Second element is the typeface or typeface family to use.  Should be able to handle all sizes on device
*
*/
CDL_ARRAY_START( SAknLanguagesAndTypefaceTableLine, languagesAndTypefaceTable)
    {
        { EElafLangs,  LIT_AS_DESC_PTR(KS60Sans) },
        { EChineseLangsPRC, LIT_AS_DESC_PTR(KS60SC) },
        { EChineseLangsTaiwanHK, LIT_AS_DESC_PTR(KS60TCAndHK) },
        { EJapaneseLangs, LIT_AS_DESC_PTR(KJapaneseHensei) },
        { EChineseLangsPRCHiRes, LIT_AS_DESC_PTR(KS60SCHiRes) },
        { EChineseLangsTaiwanHKHiRes, LIT_AS_DESC_PTR(KS60TCAndHKHiRes) },
        //chinese adaptation
        { EChineseLangsPRCLF, LIT_AS_DESC_PTR(KS60SCSANSRLF) },
        { EChineseLangsTaiwanHKLF, LIT_AS_DESC_PTR(KS60TCHKSANSRLF) },
        { EChineseLangsPRCHiResLF, LIT_AS_DESC_PTR(KS60SCHRSANSRLF) },
        { EChineseLangsTaiwanHKHiResLF, LIT_AS_DESC_PTR(KS60TCHKHRSANSRLF) },
        { EJapaneseLFLangs, LIT_AS_DESC_PTR(KS60JAPSANSRLF) },
        { EKoreanLFLangs, LIT_AS_DESC_PTR(KS60KORSANSRLF) },
        { EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCHRSANSRLF) },
        { EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSRLF) },
        //end        
        { EAnyLangs, LIT_AS_DESC_PTR(KS60Sans) } // Ultimate fallback
    }
CDL_ARRAY_END(SAknLanguagesAndTypefaceTableLine, languagesAndTypefaceTable);


/*
* Main Configuration for Aliasing.  
*
* First element is the alias
* next element is the group matching typeface. This may be NULL. If not NULL it is used to match in the 
*     product font table, in a similar manner to category matching. 
* next element points to the language and typeface table
* next element is a Flag to say if the matching is generic. This is used to see if the aliasing counts 
*     as an exact match or not
*/
static const SAknAliasTableLine aliasTable[] = {
    { LIT_AS_DESC_PTR(KSystemOne) ,LIT_AS_DESC_PTR(KS60Group), &languagesAndTypefaceTable, ETrue  },
    { LIT_AS_DESC_PTR(KSansSerifHyphen) ,LIT_AS_DESC_PTR(KS60Group), &languagesAndTypefaceTable, ETrue  },
    { LIT_AS_DESC_PTR(KSansSerif) ,LIT_AS_DESC_PTR(KS60Group), &languagesAndTypefaceTable, ETrue  },
    { LIT_AS_DESC_PTR(KSerif) ,LIT_AS_DESC_PTR(KS60Group), &languagesAndTypefaceTable, ETrue  },
    { LIT_AS_DESC_PTR(KMonospace) ,LIT_AS_DESC_PTR(KS60Group), &languagesAndTypefaceTable, ETrue  },
    { LIT_AS_DESC_PTR(KArial) ,LIT_AS_DESC_PTR(KS60Group), &languagesAndTypefaceTable, EFalse  },
    { LIT_AS_DESC_PTR(KVerdana),LIT_AS_DESC_PTR(KS60Group), &languagesAndTypefaceTable, EFalse  },
    { LIT_AS_DESC_PTR(KHelvetica),LIT_AS_DESC_PTR(KS60Group), &languagesAndTypefaceTable, EFalse  },
    { LIT_AS_DESC_PTR(KGeorgia),LIT_AS_DESC_PTR(KS60Group), &languagesAndTypefaceTable, EFalse  },
    { LIT_AS_DESC_PTR(KTimes),LIT_AS_DESC_PTR(KS60Group), &languagesAndTypefaceTable, EFalse  },
    { LIT_AS_DESC_PTR(KTimesNewRoman) ,LIT_AS_DESC_PTR(KS60Group), &languagesAndTypefaceTable, EFalse  },
    { LIT_AS_DESC_PTR(KCourier) ,LIT_AS_DESC_PTR(KS60Group), &languagesAndTypefaceTable, EFalse  },
    { LIT_AS_DESC_PTR(KNullDesC) ,LIT_AS_DESC_PTR(KS60Group), &languagesAndTypefaceTable, EFalse }
};

// Product font table.

// Default index in case of total failure to match a request
const TInt KDefaultFontTableIndex(0);

static const SAknProductFontTableLine productFontTable[] = {
    // Category matching
    // Latin and Devanagari part
    { EAknFontCategorySecondary,    10,   15,   EStrokeWeightNormal, 0,    EAny, ENotBold, ENotAntialiase, EElafLangs, LIT_AS_DESC_PTR(KS60Sans), NULL, NULL, &latinHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategorySecondary,    EAny, EAny, EStrokeWeightNormal, EAny, EAny, ENotBold, EAntialiase,    EElafLangs, LIT_AS_DESC_PTR(KS60Sans), NULL, NULL, &latinHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategorySecondary,    10,   15,   EStrokeWeightBold,   0,    EAny, EBold,    ENotAntialiase, EElafLangs, LIT_AS_DESC_PTR(KS60Sans), NULL, NULL, &latinHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategorySecondary,    EAny, EAny, EStrokeWeightBold,   EAny, EAny, EBold,    EAntialiase,    EElafLangs, LIT_AS_DESC_PTR(KS60Sans), NULL, NULL, &latinHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimarySmall, 10,   15,   EAny,                0,    EAny, EBold,    ENotAntialiase, EElafLangs, LIT_AS_DESC_PTR(KS60Sans), NULL, NULL, &latinHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimarySmall, EAny, EAny, EAny,                EAny, EAny, EBold,    EAntialiase,    EElafLangs, LIT_AS_DESC_PTR(KS60Sans), NULL, NULL, &latinHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimary,      10,   15,   EAny,                0,    EAny, EBold,    ENotAntialiase, EElafLangs, LIT_AS_DESC_PTR(KS60Sans), NULL, NULL, &latinHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimary,      EAny, EAny, EAny,                EAny, EAny, EBold,    EAntialiase,    EElafLangs, LIT_AS_DESC_PTR(KS60Sans), NULL, NULL, &latinHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryTitle,        10,   19,   EAny,                0,    EAny, ENotBold, ENotAntialiase, EElafLangs, LIT_AS_DESC_PTR(KS60SansTitleSemiBold), NULL, NULL, &latinHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryTitle,        EAny, EAny, EAny,                EAny, EAny, ENotBold, EAntialiase,    EElafLangs, LIT_AS_DESC_PTR(KS60SansTitleSemiBold), NULL, NULL, &latinHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },

    // use this digital one for any Languages
    { EAknFontCategoryDigital,      EAny, 10, EAny, 0,    EAny, ENotBold, ENotAntialiase, EAnyLangs, LIT_AS_DESC_PTR(KS60Digital), NULL, NULL, &agfaDigitalHeightRequestArray, NULL },
    { EAknFontCategoryDigital,      11, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EAnyLangs, LIT_AS_DESC_PTR(KS60Digital), NULL, NULL, &agfaDigitalHeightRequestArray, NULL },
    
    // The following two to impose a "Series 60 Sans" family at the FontProvider level for elaf
    { EAknFontCategoryAny,          10,   15,   EStrokeWeightNormal, 0,    EAny, ENotBold, ENotAntialiase, EElafLangs, LIT_AS_DESC_PTR(KS60Sans), LIT_AS_DESC_PTR(KS60Group), NULL, &latinHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          EAny, EAny, EStrokeWeightNormal, EAny, EAny, ENotBold, EAntialiase, EElafLangs, LIT_AS_DESC_PTR(KS60Sans), LIT_AS_DESC_PTR(KS60Group), NULL, &latinHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          10,   15,   EStrokeWeightBold,   0,    EAny, EBold,    ENotAntialiase, EElafLangs, LIT_AS_DESC_PTR(KS60Sans), LIT_AS_DESC_PTR(KS60Group), NULL, &latinHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          EAny, EAny, EStrokeWeightBold,   EAny, EAny, EBold,    EAntialiase, EElafLangs, LIT_AS_DESC_PTR(KS60Sans), LIT_AS_DESC_PTR(KS60Group), NULL, &latinHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },

    { EAknFontCategorySecondary,    12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsPRC, LIT_AS_DESC_PTR(KS60SC), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategorySecondary,    EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRC, LIT_AS_DESC_PTR(KS60SC), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimarySmall, 12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsPRC, LIT_AS_DESC_PTR(KS60SC), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimarySmall, EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRC, LIT_AS_DESC_PTR(KS60SC), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimary,      12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsPRC, LIT_AS_DESC_PTR(KS60SC), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimary,      EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRC, LIT_AS_DESC_PTR(KS60SC), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryTitle,        12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsPRC, LIT_AS_DESC_PTR(KS60SC), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryTitle,        EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRC, LIT_AS_DESC_PTR(KS60SC), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryAny,          12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsPRC, LIT_AS_DESC_PTR(KS60SC), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryAny,          EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRC, LIT_AS_DESC_PTR(KS60SC), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },

    { EAknFontCategorySecondary,    12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsTaiwanHK, LIT_AS_DESC_PTR(KS60TCAndHK), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategorySecondary,    EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHK, LIT_AS_DESC_PTR(KS60TCAndHK), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimarySmall, 12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsTaiwanHK, LIT_AS_DESC_PTR(KS60TCAndHK), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimarySmall, EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHK, LIT_AS_DESC_PTR(KS60TCAndHK), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimary,      12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsTaiwanHK, LIT_AS_DESC_PTR(KS60TCAndHK), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimary,      EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHK, LIT_AS_DESC_PTR(KS60TCAndHK), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryTitle,        12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsTaiwanHK, LIT_AS_DESC_PTR(KS60TCAndHK), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryTitle,        EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHK, LIT_AS_DESC_PTR(KS60TCAndHK), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryAny,          12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsTaiwanHK, LIT_AS_DESC_PTR(KS60TCAndHK), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },
    { EAknFontCategoryAny,          EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHK, LIT_AS_DESC_PTR(KS60TCAndHK), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &strokeFontHeightRequestArray, NULL },

    { EAknFontCategorySecondary,    12,   15,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EJapaneseLangs, LIT_AS_DESC_PTR(KJapaneseHensei), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &heiseiFontHeightRequestArray, NULL },
    { EAknFontCategorySecondary,    EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EJapaneseLangs, LIT_AS_DESC_PTR(KJapaneseHensei), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &heiseiFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimarySmall, 12,   15,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EJapaneseLangs, LIT_AS_DESC_PTR(KJapaneseHensei), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &heiseiFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimarySmall, EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EJapaneseLangs, LIT_AS_DESC_PTR(KJapaneseHensei), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &heiseiFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimary,      12,   15,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EJapaneseLangs, LIT_AS_DESC_PTR(KJapaneseHensei), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &heiseiFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimary,      EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EJapaneseLangs, LIT_AS_DESC_PTR(KJapaneseHensei), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &heiseiFontHeightRequestArray, NULL },
    { EAknFontCategoryTitle,        12,   15,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EJapaneseLangs, LIT_AS_DESC_PTR(KJapaneseHensei), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &heiseiFontHeightRequestArray, NULL },
    { EAknFontCategoryTitle,        EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EJapaneseLangs, LIT_AS_DESC_PTR(KJapaneseHensei), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &heiseiFontHeightRequestArray, NULL },
    { EAknFontCategoryAny,          12,   15,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EJapaneseLangs, LIT_AS_DESC_PTR(KJapaneseHensei), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &heiseiFontHeightRequestArray, NULL },
    { EAknFontCategoryAny,          EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EJapaneseLangs, LIT_AS_DESC_PTR(KJapaneseHensei), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &heiseiFontHeightRequestArray, NULL },

    { EAknFontCategorySecondary,    0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCHiRes, LIT_AS_DESC_PTR(KS60SCHiRes), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryPrimarySmall, 0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCHiRes, LIT_AS_DESC_PTR(KS60SCHiRes), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryPrimary,      0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCHiRes, LIT_AS_DESC_PTR(KS60SCHiRes), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryTitle,        0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCHiRes, LIT_AS_DESC_PTR(KS60SCHiRes), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryAny,          0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCHiRes, LIT_AS_DESC_PTR(KS60SCHiRes), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },

    { EAknFontCategorySecondary,    0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKHiRes, LIT_AS_DESC_PTR(KS60TCAndHKHiRes), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryPrimarySmall, 0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKHiRes, LIT_AS_DESC_PTR(KS60TCAndHKHiRes), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryPrimary,      0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKHiRes, LIT_AS_DESC_PTR(KS60TCAndHKHiRes), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryTitle,        0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKHiRes, LIT_AS_DESC_PTR(KS60TCAndHKHiRes), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryAny,          0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKHiRes, LIT_AS_DESC_PTR(KS60TCAndHKHiRes), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },

    { EAknFontCategorySecondary,   8, 17,    	EAny, EAny, EAny, ENotBold, ENotAntialiase, EKoreanLangs, LIT_AS_DESC_PTR(KS60Korean), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanFontHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategorySecondary,    EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase,    EKoreanLangs, LIT_AS_DESC_PTR(KS60Korean), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanFontHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimarySmall, 8, 17,     	EAny, EAny, EAny, ENotBold, ENotAntialiase, EKoreanLangs, LIT_AS_DESC_PTR(KS60Korean), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanFontHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimarySmall, EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase,    EKoreanLangs, LIT_AS_DESC_PTR(KS60Korean), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanFontHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimary,      8, 17,     	EAny, EAny, EAny, ENotBold, ENotAntialiase, EKoreanLangs, LIT_AS_DESC_PTR(KS60Korean), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanFontHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimary,      EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase,    EKoreanLangs, LIT_AS_DESC_PTR(KS60Korean), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanFontHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryTitle,        8, 17,     	EAny, EAny, EAny, ENotBold, ENotAntialiase, EKoreanLangs, LIT_AS_DESC_PTR(KS60Korean), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanFontHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryTitle,        EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase,    EKoreanLangs, LIT_AS_DESC_PTR(KS60Korean), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanFontHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          8, 17,  	EAny, EAny, EAny, ENotBold, ENotAntialiase, EKoreanLangs, LIT_AS_DESC_PTR(KS60Korean), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanFontHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, 	EKoreanLangs, LIT_AS_DESC_PTR(KS60Korean), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanFontHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
//chinese adaptation
    { EAknFontCategorySecondary,    12,   21,   EStrokeWeightNormal, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsPRCLF, LIT_AS_DESC_PTR(KS60SCSANSRLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategorySecondary,    EAny, EAny, EStrokeWeightNormal, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCLF, LIT_AS_DESC_PTR(KS60SCSANSRLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategorySecondary,    12,   21,   EStrokeWeightBold,   0,    EAny, ENotBold, ENotAntialiase, EChineseLangsPRCLF, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategorySecondary,    EAny, EAny, EStrokeWeightBold,   EAny, EAny, ENotBold, EAntialiase,    EChineseLangsPRCLF, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimarySmall, 12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsPRCLF, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimarySmall, EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCLF, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimary,      12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsPRCLF, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimary,      EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCLF, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryTitle,        12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsPRCLF, LIT_AS_DESC_PTR(KS60SCSANSTTLSMBLDLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryTitle,        EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCLF, LIT_AS_DESC_PTR(KS60SCSANSTTLSMBLDLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryAny,          12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsPRCLF, LIT_AS_DESC_PTR(KS60SCSANSRLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryAny,          EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCLF, LIT_AS_DESC_PTR(KS60SCSANSRLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },

    { EAknFontCategorySecondary,    12,   21,   EStrokeWeightNormal, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsTaiwanHKLF, LIT_AS_DESC_PTR(KS60TCHKSANSRLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategorySecondary,    EAny, EAny, EStrokeWeightNormal, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKLF, LIT_AS_DESC_PTR(KS60TCHKSANSRLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategorySecondary,    12,   21,   EStrokeWeightBold,   0,    EAny, ENotBold, ENotAntialiase, EChineseLangsTaiwanHKLF, LIT_AS_DESC_PTR(KS60TCHKSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategorySecondary,    EAny, EAny, EStrokeWeightBold,   EAny, EAny, ENotBold, EAntialiase,    EChineseLangsTaiwanHKLF, LIT_AS_DESC_PTR(KS60TCHKSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimarySmall, 12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsTaiwanHKLF, LIT_AS_DESC_PTR(KS60TCHKSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimarySmall, EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKLF, LIT_AS_DESC_PTR(KS60TCHKSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimary,      12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsTaiwanHKLF, LIT_AS_DESC_PTR(KS60TCHKSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryPrimary,      EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKLF, LIT_AS_DESC_PTR(KS60TCHKSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryTitle,        12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsTaiwanHKLF, LIT_AS_DESC_PTR(KS60TCHKSANSTTLSMBLDLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryTitle,        EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKLF, LIT_AS_DESC_PTR(KS60TCHKSANSTTLSMBLDLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryAny,          12,   21,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EChineseLangsTaiwanHKLF, LIT_AS_DESC_PTR(KS60TCHKSANSRLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },
    { EAknFontCategoryAny,          EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKLF, LIT_AS_DESC_PTR(KS60TCHKSANSRLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, &chnlinkedFontHeightRequestArray, NULL },

    { EAknFontCategorySecondary,    0, EAny, EStrokeWeightNormal, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCHiResLF, LIT_AS_DESC_PTR(KS60SCHRSANSRLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },    
    { EAknFontCategorySecondary,    0, EAny, EStrokeWeightBold, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCHiResLF, LIT_AS_DESC_PTR(KS60SCHRSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryPrimarySmall, 0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCHiResLF, LIT_AS_DESC_PTR(KS60SCHRSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryPrimary,      0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCHiResLF, LIT_AS_DESC_PTR(KS60SCHRSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryTitle,        0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCHiResLF, LIT_AS_DESC_PTR(KS60SCHRSANSTTLSMBLDLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryAny,          0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsPRCHiResLF, LIT_AS_DESC_PTR(KS60SCHRSANSRLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },

    { EAknFontCategorySecondary,    0, EAny, EStrokeWeightNormal, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKHiResLF, LIT_AS_DESC_PTR(KS60TCHKHRSANSRLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL }, 
    { EAknFontCategorySecondary,    0, EAny, EStrokeWeightBold, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKHiResLF, LIT_AS_DESC_PTR(KS60TCHKHRSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryPrimarySmall, 0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKHiResLF, LIT_AS_DESC_PTR(KS60TCHKHRSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryPrimary,      0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKHiResLF, LIT_AS_DESC_PTR(KS60TCHKHRSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryTitle,        0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKHiResLF, LIT_AS_DESC_PTR(KS60TCHKHRSANSTTLSMBLDLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
    { EAknFontCategoryAny,          0, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EChineseLangsTaiwanHKHiResLF, LIT_AS_DESC_PTR(KS60TCHKHRSANSRLF), LIT_AS_DESC_PTR(KS60Group), &apacVectorFontBaselineArray, NULL, NULL },
//end
//jap link
    { EAknFontCategorySecondary,    12,   15,   EBold, 0,    EAny, ENotBold, ENotAntialiase, EJapaneseLFLangs, LIT_AS_DESC_PTR(KS60JAPSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &japaneseLFHeightRequestArray, NULL },
    { EAknFontCategorySecondary,    12,   15,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EJapaneseLFLangs, LIT_AS_DESC_PTR(KS60JAPSANSRLF), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &japaneseLFHeightRequestArray, NULL },
    { EAknFontCategorySecondary,    EAny, EAny, EBold, EAny, EAny, ENotBold, EAntialiase, EJapaneseLFLangs, LIT_AS_DESC_PTR(KS60JAPSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &japaneseLFHeightRequestArray, NULL },
    { EAknFontCategorySecondary,    EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EJapaneseLFLangs, LIT_AS_DESC_PTR(KS60JAPSANSRLF), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &japaneseLFHeightRequestArray, NULL },
    { EAknFontCategoryPrimarySmall, 12,   15,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EJapaneseLFLangs, LIT_AS_DESC_PTR(KS60JAPSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &japaneseLFHeightRequestArray, NULL },
    { EAknFontCategoryPrimarySmall, EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EJapaneseLFLangs, LIT_AS_DESC_PTR(KS60JAPSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &japaneseLFHeightRequestArray, NULL },
    { EAknFontCategoryPrimary,      12,   15,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EJapaneseLFLangs, LIT_AS_DESC_PTR(KS60JAPSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &japaneseLFHeightRequestArray, NULL },
    { EAknFontCategoryPrimary,      EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EJapaneseLFLangs, LIT_AS_DESC_PTR(KS60JAPSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &japaneseLFHeightRequestArray, NULL },
    { EAknFontCategoryTitle,        12,   15,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EJapaneseLFLangs, LIT_AS_DESC_PTR(KS60JAPSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &japaneseLFHeightRequestArray, NULL },
    { EAknFontCategoryTitle,        EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EJapaneseLFLangs, LIT_AS_DESC_PTR(KS60JAPSANSTTLSMBLDLF), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &japaneseLFHeightRequestArray, NULL },
    { EAknFontCategoryAny,          12,   15,   EAny, 0,    EAny, ENotBold, ENotAntialiase, EJapaneseLFLangs, LIT_AS_DESC_PTR(KS60JAPSANSRLF), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &japaneseLFHeightRequestArray, NULL },
    { EAknFontCategoryAny,          EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase, EJapaneseLFLangs, LIT_AS_DESC_PTR(KS60JAPSANSRLF), LIT_AS_DESC_PTR(KS60Group), &heiseiBaselineArray, &japaneseLFHeightRequestArray, NULL },

//kor link    
    { EAknFontCategorySecondary,   8, 17,       EBold, EAny, EAny, ENotBold, ENotAntialiase, EKoreanLFLangs, LIT_AS_DESC_PTR(KS60KORSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategorySecondary,   8, 17,       EAny, EAny, EAny, ENotBold, ENotAntialiase, EKoreanLFLangs, LIT_AS_DESC_PTR(KS60KORSANSRLF), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategorySecondary,    EAny, EAny, EBold, EAny, EAny, ENotBold, EAntialiase,    EKoreanLFLangs, LIT_AS_DESC_PTR(KS60KORSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategorySecondary,    EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase,    EKoreanLFLangs, LIT_AS_DESC_PTR(KS60KORSANSRLF), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimarySmall, 8, 17,      EAny, EAny, EAny, ENotBold, ENotAntialiase, EKoreanLFLangs, LIT_AS_DESC_PTR(KS60KORSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimarySmall, EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase,    EKoreanLFLangs, LIT_AS_DESC_PTR(KS60KORSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimary,      8, 17,      EAny, EAny, EAny, ENotBold, ENotAntialiase, EKoreanLFLangs, LIT_AS_DESC_PTR(KS60KORSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimary,      EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase,    EKoreanLFLangs, LIT_AS_DESC_PTR(KS60KORSANSSBLF), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryTitle,        8, 17,      EAny, EAny, EAny, ENotBold, ENotAntialiase, EKoreanLFLangs, LIT_AS_DESC_PTR(KS60KORSANSTTLSMBLDLF), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryTitle,        EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase,    EKoreanLFLangs, LIT_AS_DESC_PTR(KS60KORSANSTTLSMBLDLF), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          8, 17,      EAny, EAny, EAny, ENotBold, ENotAntialiase, EKoreanLFLangs, LIT_AS_DESC_PTR(KS60Korean), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          EAny, EAny, EAny, EAny, EAny, ENotBold, EAntialiase,    EKoreanLFLangs, LIT_AS_DESC_PTR(KS60Korean), LIT_AS_DESC_PTR(KS60Group), &koreanVectorFontBaselineArray, &koreanLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
//western SC link
    //stroke font
    { EAknFontCategorySecondary,    10,   15,   EStrokeWeightNormal, 0,    EAny, ENotBold, ENotAntialiase, EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSRLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategorySecondary,    EAny, EAny, EStrokeWeightNormal, EAny, EAny, ENotBold, EAntialiase,    EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSRLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategorySecondary,    10,   15,   EStrokeWeightBold,   0,    EAny, ENotBold,    ENotAntialiase, EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategorySecondary,    EAny, EAny, EStrokeWeightBold,   EAny, EAny, ENotBold,    EAntialiase,    EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimarySmall, 10,   15,   EAny,                0,    EAny, ENotBold,    ENotAntialiase, EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimarySmall, EAny, EAny, EAny,                EAny, EAny, ENotBold,    EAntialiase,    EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimary,      10,   15,   EAny,                0,    EAny, ENotBold,    ENotAntialiase, EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimary,      EAny, EAny, EAny,                EAny, EAny, ENotBold,    EAntialiase,    EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryTitle,        10,   17,   EAny,                0,    EAny, ENotBold, ENotAntialiase, EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSTTLSMBLDLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryTitle,        EAny, EAny, EAny,                EAny, EAny, ENotBold, EAntialiase,  EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSTTLSMBLDLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          10,   15,   EStrokeWeightNormal, 0,    EAny, ENotBold, ENotAntialiase, EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSRLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          EAny, EAny, EStrokeWeightNormal, EAny, EAny, ENotBold, EAntialiase, EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSRLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          10,   15,   EStrokeWeightBold,   0,    EAny, ENotBold,    ENotAntialiase, EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          EAny, EAny, EStrokeWeightBold,   EAny, EAny, ENotBold,    EAntialiase, EElafLFLoReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },

    //hi-res fonts
    { EAknFontCategorySecondary,    10,   15,   EStrokeWeightNormal, 0,    EAny, ENotBold, ENotAntialiase, EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCSANSRLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategorySecondary,    EAny, EAny, EStrokeWeightNormal, EAny, EAny, ENotBold, EAntialiase,    EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCSANSRLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategorySecondary,    10,   15,   EStrokeWeightBold,   0,    EAny, ENotBold,    ENotAntialiase, EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategorySecondary,    EAny, EAny, EStrokeWeightBold,   EAny, EAny, ENotBold,    EAntialiase,    EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimarySmall, 10,   15,   EAny,                0,    EAny, ENotBold,    ENotAntialiase, EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimarySmall, EAny, EAny, EAny,                EAny, EAny, ENotBold,    EAntialiase,    EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimary,      10,   15,   EAny,                0,    EAny, ENotBold,    ENotAntialiase, EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryPrimary,      EAny, EAny, EAny,                EAny, EAny, ENotBold,    EAntialiase,    EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryTitle,        10,   17,   EAny,                0,    EAny, ENotBold, ENotAntialiase, EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCSANSTTLSMBLDLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryTitle,        EAny, EAny, EAny,                EAny, EAny, ENotBold, EAntialiase,  EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCSANSTTLSMBLDLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          10,   15,   EStrokeWeightNormal, 0,    EAny, ENotBold, ENotAntialiase, EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCSANSRLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          EAny, EAny, EStrokeWeightNormal, EAny, EAny, ENotBold, EAntialiase, EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCSANSRLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          10,   15,   EStrokeWeightBold,   0,    EAny, ENotBold,    ENotAntialiase, EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
    { EAknFontCategoryAny,          EAny, EAny, EStrokeWeightBold,   EAny, EAny, ENotBold,    EAntialiase, EElafLFHiReLangs, LIT_AS_DESC_PTR(KS60SCSANSSBLF), LIT_AS_DESC_PTR(KS60Group), NULL, &latinLFHeightRequestArray, LIT_AS_DESC_PTR(KWesternFontMaxExtentText) },
//end
    };
// ============================ GLOBAL FUNCTIONS ========================================

/**
 * DLL entry point
 */
#ifndef EKA2
GLDEF_C TInt E32Dll(TDllReason /* aReason */)
    {
    return(KErrNone);
    }
#endif

// ============================ LOCAL FUNCTIONS ===============================
//chinese adaptation func. declarations
TInt IntializeLinkedFontL();
void PopulateFontFileNames(TFileText& tfile, RPointerArray<SLinkedFontDetails>& fontfiles, const TDesC& stop);
TInt CreateLinkFontsL(RPointerArray<SLinkedFontDetails>& fontfiles);
TBool ChineseLinkedFontPresent(const TDesC& newFaceName);
TInt DoPopulateAndCreateLinkFontsL(TFileText atfile,  TDesC& astartTok, TDesC& astopTok);
TBool LinkTypefacesInstalled(TAknLinkedFontTypes aFonttype = EAknAllLinkedFonts);
//end
LOCAL_C void Panic(TAknFontProviderPanicCodes aPanic)
    {
    _LIT( KFontProviderCategory, "Font Provider" );
    User::Panic( KFontProviderCategory, aPanic );
    }

/*
* Utility routine to pull common flags and size in pixels from the TAknFontSpecification.
*/
LOCAL_C void SetLocalFlagsAndMetrics(
    const TAknFontSpecification& aMetrics,
    MGraphicsDeviceMap& aDevice, 
    TBool& aNeedsExactMatch, 
    TBool& aReduceSize, 
    TInt& aSizeInPixels )
    {
    // Set flags for suppressing size downgrade, and suppressing fallbacks 
    aNeedsExactMatch = aMetrics.ExactMatchRequired();
    aReduceSize = !aMetrics.TextPaneIsDesignHeight();
    
    // Calculate size in pixels
    aSizeInPixels = aMetrics.TextPaneHeight();
    if ( aMetrics.Units() == TAknFontSpecification::ETwips )
        {
        aSizeInPixels = aDevice.VerticalTwipsToPixels( aMetrics.TextPaneHeight() );
        }
    }

/*
* Sets the bit field that describes which languages are required to be supported by the matched font
*/
LOCAL_C TUint FontProviderRequiredLangs()
    {
    TUint requiredLangs(0);
    TLanguage uilang = User::Language();
    TBool fJapanese = FeatureManager::FeatureSupported(KFeatureIdJapanese);
    TBool fTCHKFonts = FeatureManager::FeatureSupported(KFeatureIdChineseTaiwanHkFonts);
    TBool fSCFonts = FeatureManager::FeatureSupported(KFeatureIdChinesePrcFonts);
    TBool fHiResFonts = FeatureManager::FeatureSupported(KFeatureIdChineseFontsHires);
    TBool fKorean = FeatureManager::FeatureSupported(KFeatureIdKorean);
   //chinese adaptation
    TBool fLinkedFontsFeature = FeatureManager::FeatureSupported(KFeatureIdFfLinkedFontsChinese);
    TBool fLinkedFonts = EFalse;
    //handling error here
    //fontlinking unsuccessful, handle with normal font files as earlier
    if(fLinkedFontsFeature)
        {
      if(!LinkTypefacesInstalled(EAknSystemLinkedFonts))
        fLinkedFonts = EFalse;
    else
        fLinkedFonts = ETrue;
        }
    //end

    if(fKorean)
        {
        if (fLinkedFonts)
            requiredLangs |= EKoreanLFLangs;
        else
            requiredLangs |= EKoreanLangs;
        }
    else if (fJapanese)
        {
        if (fLinkedFonts)
            requiredLangs |= EJapaneseLFLangs;
        else
            requiredLangs |= EJapaneseLangs;
        }
    else if (fTCHKFonts)
        {
        // TCHK, but use PRC fonts, if lang settings say it's PRC English
        if ((fSCFonts) && (uilang == KLangPrcEnglish || uilang == ELangPrcChinese))
            {
            //chinese adaptation
            if (fLinkedFonts && fHiResFonts)
                {
                requiredLangs |= EChineseLangsPRCHiResLF;
                }
            else if(fLinkedFonts)
                {
                requiredLangs |= EChineseLangsPRCLF;
                }            
            //end
            else if (fHiResFonts)
                {
                requiredLangs |= EChineseLangsPRCHiRes;
                }
            else
                {
                requiredLangs |= EChineseLangsPRC;
                }
            }
        else
            {
            //chinese adaptation
            if (fLinkedFonts && fHiResFonts)
                {
                requiredLangs |= EChineseLangsTaiwanHKHiResLF;
                }  
            else if(fLinkedFonts)
                {
                requiredLangs |= EChineseLangsTaiwanHKLF;
                }
            //end
            else if (fHiResFonts)
                {
                requiredLangs |= EChineseLangsTaiwanHKHiRes;
                }
            else
                {
                requiredLangs |= EChineseLangsTaiwanHK;
                }
            }
        }
    else if (fSCFonts)
        {
        //chinese adaptation
        if (fLinkedFonts && fHiResFonts)
            {
            requiredLangs |= EChineseLangsPRCHiResLF;
            }
        else if(fLinkedFonts)
            {
            requiredLangs |= EChineseLangsPRCLF;
            }
        //end
        // PRC (SC)
        else if (fHiResFonts)
            {
            requiredLangs |= EChineseLangsPRCHiRes;
            }
        else
            {
            requiredLangs |= EChineseLangsPRC;
            }
        }
    else
        {
        if(fLinkedFonts && fHiResFonts)
            {
            requiredLangs |= EElafLFHiReLangs;
            }
        else if(fLinkedFonts)
            {
            requiredLangs |= EElafLFLoReLangs;
            }
        else
            {
            requiredLangs |= EElafLangs;
            }
        }

    return requiredLangs;
    }

/*
* Applies size reduction to the height that will be passed to the Symbian font request. This is usually to 
* account for glyph excursions that go beyond the fonts "design height".
*/
LOCAL_C TInt ReducedFontHeight(
    TInt aOriginalHeight, 
    TCdlArray<SHeightRequest> const* aHeightRequestArray )
    {
    TInt numberOfSizes = aHeightRequestArray->Count();
    TInt requestHeight(aOriginalHeight);
    for ( TInt i = 0; i < numberOfSizes; i++ )
        {
        SHeightRequest heightRequest  = (*aHeightRequestArray)[i];

        if ( heightRequest.iDesignHeight == aOriginalHeight )
            {
            requestHeight = heightRequest.iRequestHeight;
            break;
            }
        if ( (i+1) < numberOfSizes )
            {
            SHeightRequest nextHeightRequest  = (*aHeightRequestArray)[i+1];
            if ( heightRequest.iDesignHeight < aOriginalHeight
                && aOriginalHeight < nextHeightRequest.iDesignHeight )
                {
                // Interpolate. Inequalities above guarantee denominator is Positive
                // Formula used is:
                // y = [ x*(y2 - y1) + y1*x2 - y2*x1 ] / (x2 - x1)  
                //
                TInt denominator = nextHeightRequest.iDesignHeight - heightRequest.iDesignHeight;
                TInt numerator = aOriginalHeight * ( nextHeightRequest.iRequestHeight - heightRequest.iRequestHeight)
                    + heightRequest.iRequestHeight * nextHeightRequest.iDesignHeight
                    - nextHeightRequest.iRequestHeight * heightRequest.iDesignHeight;

                requestHeight = numerator/denominator; // rounds down
                break;
                }
            }
        }
    return requestHeight;
    }

/*
* Fills in additional metrics, if available, for the font being returned.
*/
LOCAL_C void SetFontProviderSuppliedMetrics( const CFbsFont* aFont, 
                        const SAknProductFontTableLine* aLine, 
                        TAknFontProviderSuppliedMetrics& aInfo )
    {
    // Measure the font
    TOpenFontMetrics openFontMetrics;
    aFont->GetFontMetrics(openFontMetrics);

    // Record maximum extent, up (min) and down (max) ,from the baseline
    TInt minY(0); 
    TInt maxY(0);

    if ( aLine )
        {
        // Check the specified maximal text 
        const TDesC* maxExtentText = aLine->iMaxAscentDescentChars;
        if ( maxExtentText )
            {
            TInt len = maxExtentText->Length();
            for ( TInt i = 0; i < len; i++)
                {
                TOpenFontCharMetrics openFontCharMetrics;
                const TUint8* aBitmap;
                TSize size;
                if ( aFont->GetCharacterData((*maxExtentText)[i],openFontCharMetrics, aBitmap, size) )
                    {
                    TRect rect;
                    openFontCharMetrics.GetHorizBounds( rect );
                    minY = Min( minY, rect.iTl.iY );
                    maxY = Max( maxY, rect.iBr.iY );
                    }
                }
            }
                       
        }
    else // No fontprovider line is available. Use the openfont apis
        {
        minY = - openFontMetrics.MaxHeight();
        maxY = openFontMetrics.MaxDepth();        
        }
        
    // Fill in return data.
    if ( minY < 0 )
        aInfo.SetExcessAscent( -minY - aFont->AscentInPixels() );
    else
        aInfo.SetExcessAscent(0);

    if ( maxY > 0 )
        aInfo.SetExcessDescent( maxY - aFont->DescentInPixels() );
    else
        aInfo.SetExcessDescent(0);

    // Policy for where to put missing font height: 
    // Put any "empty" space at the top. That is, max descent goes just to TextPaneBottom 
    aInfo.SetMaxDescentToTextPaneBottom(0);
    }

LOCAL_C TBool SetLanguageDependentDeAliasedTypeface( 
           TCdlArray<SAknLanguagesAndTypefaceTableLine> const* aLangAndTypefaceTable, 
           TUint aRequiredLanguages, 
           TTypeface& aTypeface )
    {
    TBool found(EFalse);
    // Search through aliases until you find a language set + alias combination that is OK
    TInt numberOfRowsInLanguageTable = aLangAndTypefaceTable->Count();
    for ( TInt index = 0; index < numberOfRowsInLanguageTable; index++ )
        {
        const SAknLanguagesAndTypefaceTableLine& subLine = aLangAndTypefaceTable->At(index);
 
        if ( ( subLine.iSupportedLanguagesPattern == EAnyLangs) ||
             ( ( aRequiredLanguages & subLine.iSupportedLanguagesPattern ) == aRequiredLanguages )  )
            {
            found = ETrue;
            aTypeface.iName = subLine.iTypefaceName->Left(KMaxTypefaceNameLength);
            break;
            }
        }

    return found;    
    }

// aTypefaceOut might not be the same object as aGroupTypeface
// parameter aAliasIsGeneric is not touched unless there is a match. Then it gets the value read from the
// table.
LOCAL_C void DeAliasTypeface( TUint aLangs, 
    const TTypeface& aTypefaceIn, 
    TTypeface& aTypefaceOut, 
    TTypeface& aGroupTypeface,
    TBool& aAliasIsGeneric )
    {
    TTypeface input(aTypefaceIn);

    // Search through aliases until you find match
    TInt numberOfRows = sizeof( aliasTable )/ sizeof( SAknAliasTableLine );
  
    for (TInt index = 0; index < numberOfRows; index++)
        {
        SAknAliasTableLine line = aliasTable[index];
        // Check for leading substring or both are null descriptors
        if ( (input.iName.Length() >= KMinAliasLength && line.iAlias->FindF(input.iName ) == 0 ) ||
            ( input.iName.Length() == 0 && (line.iAlias)->Length() == 0 ) )
            {
            aAliasIsGeneric = line.iIsAliasGeneric;
            if (line.iGroupName)
                {
                aGroupTypeface = aTypefaceIn;         
                aGroupTypeface.iName = line.iGroupName->Left(KMaxTypefaceNameLength);
                }

            if ( line.iLanguagesAndTypefaceTable )
                {
                (void)SetLanguageDependentDeAliasedTypeface( line.iLanguagesAndTypefaceTable, aLangs, aTypefaceOut );
                }
            // Stop looking.  Both group name and iLanguagesAndTypefaceTable need to be on same line.
            break;
            }
 
        }

    return;    
    }

LOCAL_C TBool MatchIsExact( const TFontSpec aRequestedSpec, const CFont* aFont)
    {
    TFontSpec specFromFont = aFont->FontSpecInTwips();
    
/*
Notes on what an exact match is:
i)   if typeface, unmapped, is found in the table and italics and bold match.
ii)  if font family, unmapped, is found in the table and italics and bold match.
iii) if requests is mapped from a generic name and italics and bold match 
iv)  if typeface is blank and italics and bold match

Now, whatever aliasing has been performed previously, it is impossible to tell here, but we 
can judge based upon the two fontspecs.
*/

    if ( aRequestedSpec.iTypeface.iName.Length() != 0)
        {
        if (!(aRequestedSpec.iTypeface.iName.MatchF( specFromFont.iTypeface.iName)==0 ))
            {
            return EFalse;
            }
        // Note, that it is impossible here to see if FBserv has performed a font family level match    
        }
    else // typeface is absent
        {
        if (aRequestedSpec.iTypeface.Attributes() != specFromFont.iTypeface.Attributes() )
            {
            return EFalse;
            }
        }
        
    if (    (aRequestedSpec.iFontStyle.StrokeWeight() != specFromFont.iFontStyle.StrokeWeight() )
        ||  (aRequestedSpec.iFontStyle.Posture() != specFromFont.iFontStyle.Posture() )   )       
        {
        return EFalse;
        }
        
    return ETrue;    
    }


/*
* Sets up a TFontSpec to request antialising
*/
/*LOCAL_C void SetFontSpecAntiAliased( TFontSpec& afontSpec )
    {
    TOpenFontSpec openSpec;
    openSpec.SetBitmapType(EAntiAliasedGlyphBitmap);
    openSpec.GetTFontSpec(afontSpec); // sets the antialiasing into the TFontSpec
    }
*/

/*
* Utility routine to apply the results of a matched font provider line at index aFontIndex into a Symbian 
* TFontSpec object.
*/
LOCAL_C void SetUpFontSpecFromTableLine( 
    TInt aFoundIndex, 
    const TAknFontSpecification& aMetrics, 
    TInt aSizeInPixels, 
    TBool aReduceSize, 
    TFontSpec& aFontSpec )
    {
    __ASSERT_ALWAYS( aFoundIndex > KErrNotFound, Panic(EAknFontPanicIndexOutOfRange) );


    if ( productFontTable[aFoundIndex].iAntialisingToUse != ENotAntialiase )
        {
        //SetFontSpecAntiAliased( aFontSpec );
         aFontSpec.iFontStyle.SetBitmapType(EAntiAliasedGlyphBitmap);
        }

    // Get typeface from table
    aFontSpec.iTypeface.iName =  (*(productFontTable[aFoundIndex].iTypefaceName)).Left(KMaxTypefaceNameLength);
                    
    // Height is in pixels. This is only suitable for sending to GetNearestFontInPixels
    aFontSpec.iHeight = (productFontTable[aFoundIndex].iSizeToUse == EAny ? 
        aSizeInPixels : productFontTable[aFoundIndex].iSizeToUse );
    
    if ( productFontTable[aFoundIndex].iBoldnessToUse == EBold 
        || (productFontTable[aFoundIndex].iBoldnessToUse == EAny && (aMetrics.Weight() == EStrokeWeightBold) ) )
        aFontSpec.iFontStyle.SetStrokeWeight(EStrokeWeightBold );

    if ( aMetrics.Posture() == EPostureItalic )
        aFontSpec.iFontStyle.SetPosture(EPostureItalic);
    
    if ( aMetrics.IsOutlineEffectOn() )
    	{
    	aFontSpec.iFontStyle.SetEffects(FontEffect::EOutline, ETrue);
    	//outline effect works only when AA is set
    	aFontSpec.iFontStyle.SetBitmapType(EAntiAliasedGlyphBitmap);	
    	}
        

    // Alter the font specification iHeight using the table
    // Check the "reduceSize" flag to see if we want size reduction
    if ( aReduceSize && productFontTable[aFoundIndex].iHeightRequestData )
        aFontSpec.iHeight = ReducedFontHeight( aFontSpec.iHeight, productFontTable[aFoundIndex].iHeightRequestData );
        
    // Ensure proportionality flag is set. Assumes all S60 fonts are proportional
    aFontSpec.iTypeface.SetIsProportional(ETrue);    
    }

/*
* This returns true if the typeface is in the list of typefaces that the system says are available
* It may leave.
*/
LOCAL_C TBool TypefaceAvailableL( 
    CGraphicsDevice& aDevice, 
    const TTypeface& aTypeface )
    {
    TBool found(EFalse);

    CDesCArray* array = new(ELeave) CDesCArrayFlat( 6 );
    CleanupStack::PushL( array );

    FontUtils::GetAvailableFontsL(aDevice, *array, EGulNoSymbolFonts);
    for ( TInt i = 0; i < array->Count(); i++ )
        {       
        TPtrC fontName((*array)[i]);

        if ( fontName.MatchF(aTypeface.iName) == 0 )
            {
            found = ETrue;
            break;
            }
        }

    CleanupStack::PopAndDestroy( array );
    return found;
    }

LOCAL_C TInt FindGroupAliasInTable( const TTypeface& aGroupTypeface, 
                                   const TAknFontSpecification& aMetrics, 
                                   TUint aRequiredLangs, 
                                   TInt aSizeInPixels,
                                   TBool aNeedsExactMatch,
                                   TBool& aFellBack)
    {
    TInt numberOfRows = sizeof( productFontTable )/ sizeof( SAknProductFontTableLine );
    TInt foundIndex = KErrNotFound;
    TInt languageAndTypefaceDependentFallbackIndex(KErrNotFound);
  
    for (TInt index = 0; index < numberOfRows; index++)
        {
        SAknProductFontTableLine line = productFontTable[index];

       // Test typeface and language first to capture a language dependent fallback alias mapping

       // Passed-in typeface is checked first.   
       // Then if groupname was given, use group name from the aliasing to check for a group match
       // If no groupname was given, use the direct typeface, comparing agains actuals
        if ( line.iGroupName && line.iGroupName->MatchF(aGroupTypeface.iName) == 0  )
            {
            if ( ( ( aRequiredLangs & line.iSupportedLanguagesPattern ) == aRequiredLangs )
                  || line.iSupportedLanguagesPattern == EAnyLangs )
                {

                // Latch the first index to pass this point (will become a fallback later)
                if (languageAndTypefaceDependentFallbackIndex == KErrNotFound)
                    languageAndTypefaceDependentFallbackIndex = index;
                
                if (    ( line.iMinSize <= aSizeInPixels || line.iMinSize == EAny )
                    &&  ( aSizeInPixels <= line.iMaxSize || line.iMaxSize == EAny) )
                    {
                    if ( COMPARE_BOOLS(productFontTable[index].iBold, ( aMetrics.Weight() == EStrokeWeightBold ) ) // it matches...
                        || (productFontTable[index].iBold == EAny) ) // ... or use what was passed in
                        {
                        if ( COMPARE_BOOLS(productFontTable[index].iItalic, ( aMetrics.Posture() == EPostureItalic ) ) // it matches...
                            || productFontTable[index].iItalic == EAny ) // ... or use what was passed in
                            {
                            foundIndex = index;
                            break;
                            }
                        }
                    }
                }
            }
        }

    if ( !aNeedsExactMatch && foundIndex == KErrNotFound )
        {
        // Consider the fallback index found above.  Only use if it the passed in typeface cannot be used
        if( languageAndTypefaceDependentFallbackIndex != KErrNotFound  )
            {
            // Typeface and language content OK. Something else not quite right.
            aFellBack = ETrue;
            foundIndex = languageAndTypefaceDependentFallbackIndex;
            }

     // else foundIndex stays at KErrNotFound for use later
            
        }        
    return foundIndex;
    }

LOCAL_C void SetUpFontSpecFromTypefaceAndSpecification( 
    const TTypeface& aTypeface,
    const TAknFontSpecification& aMetrics,
    TInt aSizeInPixels, 
    TFontSpec& aFontSpec )
    {
    aFontSpec.iTypeface = aTypeface;
    aFontSpec.iHeight = aSizeInPixels;

    // Transfer styles straight across
    if  (aMetrics.Weight() == EStrokeWeightBold  )
        aFontSpec.iFontStyle.SetStrokeWeight(EStrokeWeightBold );
    if ( aMetrics.Posture() == EPostureItalic )
        aFontSpec.iFontStyle.SetPosture(EPostureItalic);
    
    // Ensure proportionality flag is set. Assumes all S60 fonts are proportional
    aFontSpec.iTypeface.SetIsProportional(ETrue);    
    }

LOCAL_C TBool HasRequiredLanguages( 
    TUint aRequiredLanguages, 
    CGraphicsDevice* /*aDevice*/, 
    const CFbsFont* aFont )
    {
    TBool retVal(ETrue);

    if ( ELanguageSupportBasicLatin & aRequiredLanguages )
        {
        if ( !aFont->HasCharacter(KTestCharLatin) )
            retVal = EFalse;
        }
    if ( retVal && (ELanguageSupportChinesePRC & aRequiredLanguages) )
        {
        if ( !aFont->HasCharacter(KTestCharChinese) )
            retVal = EFalse;
        }
    if ( retVal && (ELanguageSupportChineseTaiwanHK & aRequiredLanguages) )
        {
        if ( !aFont->HasCharacter(KTestCharChinese) )
            retVal = EFalse;
        }
    if ( retVal && (ELanguageSupportThai & aRequiredLanguages) )
        {
        if ( !aFont->HasCharacter(KTestCharThai) )
            retVal = EFalse;
        }
    if ( retVal && (ELanguageSupportJapanese & aRequiredLanguages) )
        {
        if ( !aFont->HasCharacter(KTestCharHiragana) )
            retVal = EFalse;
        }
	if ( retVal && (ELanguageSupportKorean & aRequiredLanguages) )
        {
        if ( !aFont->HasCharacter(KTestCharKorean) )
            retVal = EFalse;
        }
    return retVal;
    }

/*
* A default index is set if the index is found to be KErrNotFound
* @param aFoundIndex Upon exit, this is guaranteed to be 0 or +ve
* @param aFellBack  This is not affected if no fallback is has been performed
*                   Set to ETrue if there was a fallback.
*/
LOCAL_C void FallBackIfNeeded( TInt& aFoundIndex, TInt& aFellBack )
    {
    if ( aFoundIndex <= KErrNotFound ) 
        {
        aFellBack = ETrue;
        aFoundIndex = KDefaultFontTableIndex;
        }
    }

/*
* This method tries to produce a font from the passed in typeface and metrics
* First availability of the typeface is checked. If it is available, it is then obtained from the 
* system, and checked for required languages support. Font is released if languages not supported.
*
* Null is returned if the above fails in any way.
*/
LOCAL_C CFbsFont* TryToGetFontFromTypeface( 
                                           CBitmapDevice* aDevice, 
                                           const TTypeface& aTypeface,
                                           const TAknFontSpecification& aMetrics,
                                           TInt aSizeInPixels,
                                           TUint aRequiredLanguages,
                                           TFontSpec& aFontSpecUsed )

    {
    CFbsFont* font = 0;
    TBool available(EFalse);
    TRAP_IGNORE( available = TypefaceAvailableL( *aDevice, aTypeface ) );
    if ( available )
        {
        TFontSpec typefaceFontSpec;
        if (aSizeInPixels > 16 )
        {
            //SetFontSpecAntiAliased( typefaceFontSpec );// Enable antialising
            typefaceFontSpec.iFontStyle.SetBitmapType(EAntiAliasedGlyphBitmap);
        }
        SetUpFontSpecFromTypefaceAndSpecification( aTypeface, aMetrics, aSizeInPixels, typefaceFontSpec );

        if ( aDevice->GetNearestFontInPixels( (CFont*&)font, typefaceFontSpec ) != KErrNone )
            {
            font = 0;
            }
        else
            {
            if ( !HasRequiredLanguages( aRequiredLanguages, aDevice, font ) )
                {
                aDevice->ReleaseFont( font );
                font = 0;
                }
            else
                {
                // fill in the fontSpec
                aFontSpecUsed = typefaceFontSpec;
                // otherwise, just keep the font around and suppress the fetch later on
                }
            }
        }
    return font;
    }
/* 
* This method tries to get a font from the system based on aliases. First the alias table is referred to returning
* "typeface group" and/or "direct typeface". The direct typeface is size/bold/italic independent, but language
* sensistive mapping from the alias.
*
* First the typeface group is searched for in the Product Font Table.  If this fails, the the fontspec is filled in
* using the passed in metrics and the directly aliased typeface, if there is one.
*
* If all that fails to fill in a fontspec, then a "Default typeface group" is used to search the Product Font Table.  
*
*/ 
LOCAL_C CFbsFont* TryToGetFontFromAlias( 
                                           CBitmapDevice* aDevice, 
                                           const TTypeface& aTypeface,
                                           const TAknFontSpecification& aMetrics,
                                           TInt aSizeInPixels,
                                           TUint aRequiredLanguages,
                                           TBool aNeedsExactMatch,
                                           TBool aReduceSize,
                                           TFontSpec& aFontSpecUsed,
                                           TInt& aFoundIndex,
                                           TBool& aAliasIsGeneric, 
                                           TBool& aFellBack
                                           )

    {
    CFbsFont* font = 0; // return value

    // Translate aliases
    TTypeface groupTypeface; // used for matching in the font table
    TTypeface directTypeface; // used as fallback
    DeAliasTypeface( aRequiredLanguages, aTypeface, directTypeface, groupTypeface, aAliasIsGeneric );
        
    // Record whether there is a direct alias
    TBool haveDirectTypeface(directTypeface.iName.Length() > 0 );

    if ( groupTypeface.iName.Length() > 0 )
        {
        aFoundIndex = FindGroupAliasInTable( 
            groupTypeface, aMetrics, aRequiredLanguages, aSizeInPixels, aNeedsExactMatch, aFellBack);
        }

    TBool specIsSetUp(EFalse);

    if ( aFoundIndex == KErrNotFound)
        {
        // Note that because the alias table has language matching, the direct typeface name should be 
        // appropriate at least for language.
        if ( haveDirectTypeface )
            {
            // Fill in the typeface directly from passed in information; no typeface yet.
            SetUpFontSpecFromTypefaceAndSpecification( directTypeface, aMetrics, aSizeInPixels, aFontSpecUsed );
            specIsSetUp = ETrue;
            }
        else if ( !aNeedsExactMatch )
            {
            // This is the end of the road.  No index from table, passed in typeface cannot be used, 
            // and there is no size-independent alias
            TInt fellback2; // Will be ignored
            TTypeface defaultTypeface;
            defaultTypeface.iName = KDefaultGroupName;
            aFoundIndex = FindGroupAliasInTable( 
                defaultTypeface, aMetrics, aRequiredLanguages, aSizeInPixels, EFalse, fellback2);
            FallBackIfNeeded( aFoundIndex, fellback2 );
            SetUpFontSpecFromTableLine( aFoundIndex, aMetrics, aSizeInPixels, aReduceSize, aFontSpecUsed );
            specIsSetUp = ETrue;
            }
        else
            {
            // leave font null and no spec set up. Going to return NULL eventually.
            }

        }
    else
        {
        SetUpFontSpecFromTableLine( aFoundIndex, aMetrics, aSizeInPixels, aReduceSize, aFontSpecUsed );
        specIsSetUp = ETrue;
        }

    if ( specIsSetUp )
        {
        if ( aDevice->GetNearestFontInPixels((CFont*&)font,aFontSpecUsed) != KErrNone )
            {
            font = 0;  // Assert will follow below
            }
        }

    return font;
    }

#ifdef _DEBUG
LOCAL_C void OutputDebugInfo( 
                        CFbsFont* aFont,
                        const TTypeface& aTypeface,
                        const TAknFontSpecification& aMetrics,
                        TInt aSizeInPixels,
                        const TFontSpec& aFontSpec,
                        const TAknFontProviderSuppliedMetrics& aInfo                       
                        )
    {
    TBuf<256> buf;
    if ( aFont )
        {
        TInt ascent = aFont->AscentInPixels();
        TInt descent = aFont->DescentInPixels();
        TInt range = aInfo.ExcessAscent() + aInfo.ExcessDescent() + ascent + descent;
        TPtrC fontTypefaceName(aFont->FontSpecInTwips().iTypeface.iName);
        buf.Format( _L("FontProvider:Type/Alias= %S; T'Pane Height=%d;  t'face req'st=%S; mappd ht=%d; t'face returnd=%S; actual range=%d(a,d,exa,exd=%d %d %d %d)" ), 
         &(aTypeface.iName), aMetrics.TextPaneHeight(),&(aFontSpec.iTypeface.iName),aFontSpec.iHeight, &(fontTypefaceName), range, 
         ascent, descent, aInfo.ExcessAscent(),aInfo.ExcessDescent() );
        RDebug::Print( buf );
        }
    else
        {
        buf.Format( _L("FontProvider:Type/Alias= %S; T'Pane Height=%d;  t'face req'st=%S; sizeInPixels=%d; No Font Returned" ), 
            &(aTypeface.iName), aMetrics.TextPaneHeight(),&(aFontSpec.iTypeface.iName),aSizeInPixels );
        RDebug::Print( buf );
        }
    }
#endif

// ============================ MEMBER FUNCTIONS ===============================


EXPORT_C CFbsFont* AknFontProvider::CreateFontFromTypefaceAndMetrics (
    CBitmapDevice& aDevice,
    const TTypeface& aTypeface, 
    const TAknFontSpecification& aMetrics,
    TAknFontProviderSuppliedMetrics& aInfo,
    TInt& aFontProviderIndex )
    {
    // Set flags for suppressing size downgrade, and suppressing fallbacks 
    TBool needsExactMatch;
    TBool reduceSize;
    TInt sizeInPixels;
    SetLocalFlagsAndMetrics( aMetrics, aDevice, needsExactMatch, reduceSize, sizeInPixels );

    // Records whether the aliasing used was a generic one (e.g. "SansSerif" rather than "Arial")
    // When generic mappings occur, they are counted as exact.
    TBool aliasIsGeneric(ETrue); // Initialized to true in case there is no alias at all. 
        
    // This flags records if a fallback has taken place
    TBool fellback(EFalse);
    
    // Obtain the required languages bit-pattern
    TUint requiredLanguages = FontProviderRequiredLangs();

    TInt foundIndex(KErrNotFound);

    CFbsFont* font = 0;
    TFontSpec fontSpec;

    font = TryToGetFontFromTypeface( 
        &aDevice, aTypeface, aMetrics, sizeInPixels, requiredLanguages, fontSpec );
    
    if ( !font )
        {
        font = TryToGetFontFromAlias( 
            &aDevice, aTypeface, aMetrics, sizeInPixels, 
            requiredLanguages, needsExactMatch, reduceSize, 
            fontSpec, foundIndex, aliasIsGeneric, fellback );
        }

    // Handle presence/absence of font, ensuring return values are all filled in ( or not )

    if ( !font )
        {
        aFontProviderIndex = KErrNotFound;
        }
    /*
    MatchIsExact tests if the Symbian API has come up with the requested font. aliasIsGeneric means 
    that there was no aliasing, or that the aliasing was from generic keyword (e.g. "Serif")
    */
    else if ( needsExactMatch && ( fellback || !aliasIsGeneric || !MatchIsExact(fontSpec, font) ) )
        {
        aDevice.ReleaseFont(font);
        aFontProviderIndex = KErrNotFound;
        font = 0;
        }
    else
        {
        // Set call-back index for further (character specific) info
        aFontProviderIndex = foundIndex; // Should be KErrNotFound for not-found typeface name
        // Fill in other Font metrics
        if ( foundIndex != KErrNotFound)
            SetFontProviderSuppliedMetrics( font, &(productFontTable[foundIndex]), aInfo );
        else // Fill in the information from the font's own information
            SetFontProviderSuppliedMetrics( font, NULL, aInfo );
        }

#ifdef _DEBUG
    OutputDebugInfo( font, aTypeface, aMetrics, sizeInPixels, fontSpec, aInfo );
#endif

    // error condition is when font is null and we do not need an exact match:
    __ASSERT_ALWAYS( ( font || needsExactMatch ) , Panic( EAknFontPanicFailedToReturnFont ) );
    return font; 
    }   

EXPORT_C CFbsFont* AknFontProvider::CreateFontFromMetrics (
    CBitmapDevice& aDevice,
    TInt aFontId, 
    const TAknFontSpecification& aMetrics,
    TAknFontProviderSuppliedMetrics& aInfo,
    TInt& aFontProviderIndex )
    {
    TFontSpec fontSpec;
    TInt foundIndex(KErrNotFound);
    TBool needsExactMatch(EFalse);
    TBool fallbackNeeded(EFalse);
    DoGetFontSpecFromMetrics(aDevice, aFontId, aMetrics, fontSpec, foundIndex, needsExactMatch, fallbackNeeded);

    CFbsFont* font;
    User::LeaveIfError(aDevice.GetNearestFontInPixels((CFont*&)font,fontSpec));

    // Fill in other Font metrics
    SetFontProviderSuppliedMetrics( font, &(productFontTable[foundIndex]), aInfo );

#ifdef _DEBUG
    TBuf<256> buf;
    TInt ascent = font->AscentInPixels();
    TInt descent = font->DescentInPixels();
    TInt range = aInfo.ExcessAscent() + aInfo.ExcessDescent() + ascent + descent;
    TFontSpec realFontSpec = font->FontSpecInTwips();
    buf.Format( _L("FontProvider: Category=%d, TextPane Height=%d; mapped request=%d; asked typeface=%S; given typeface=%S, actual range=%d(a,d,exa,exd=%d %d %d %d)" ), 
        aMetrics.FontCategory(), aMetrics.TextPaneHeight(), fontSpec.iHeight, &(fontSpec.iTypeface.iName), &(realFontSpec.iTypeface.iName), range, 
        ascent, descent, aInfo.ExcessAscent(),aInfo.ExcessDescent() );
    RDebug::Print( buf );
 
    // additional debug print so see fonts available in system:   
    /*
    if (1)
    {
        buf.Format( _L("FontProvider: Availabe font families are:"));
        RDebug::Print( buf );

        CDesCArray* array = new(ELeave) CDesCArrayFlat( 6 );
        CleanupStack::PushL( array );

        FontUtils::GetAvailableFontsL(aDevice, *array, EGulNoSymbolFonts);
        for ( TInt i = 0; i < array->Count(); i++ )
            {       
            TPtrC fontName((*array)[i]);
            RDebug::Print( fontName );
            }
        CleanupStack::PopAndDestroy( array );
    }
    */
#endif

    // This flag is ETrue iff we find that category requested is matched exactly or was effectively not requested
    // at all (EAknFontCategoryUndefined)
    TBool categoryMatchIsExact =  
        ( aMetrics.FontCategory() == productFontTable[foundIndex].iCategory )
        || 
        ( aMetrics.FontCategory() == EAknFontCategoryUndefined );
        
    /*
    MatchIsExact tests if the Symbian API has come up with the requested font. aliasIsGeneric means 
    that there was no aliasing, or that the aliasing was from generic keyword (e.g. "Serif")
    */
    if ( needsExactMatch && (fallbackNeeded || !categoryMatchIsExact || !MatchIsExact(fontSpec, font) ) )
        {
        aDevice.ReleaseFont(font);
        aFontProviderIndex = KErrNotFound;
        return(NULL);
        }
    else
        {
        // Set call-back index for further (character specific) info
        aFontProviderIndex = foundIndex;
        return(font);       
        }
    }

EXPORT_C TBool AknFontProvider::HasBaselineCorrection( TInt aUsedIndex ) 
    {
    TBool retVal(EFalse);
    if ( aUsedIndex != KErrNotFound)
        {
        
#ifdef _DEBUG
        TInt numberOfRows = sizeof( productFontTable )/ sizeof( SAknProductFontTableLine );
        __ASSERT_DEBUG( aUsedIndex < numberOfRows , Panic( EAknFontPanicIndexOutOfRange ) );
#endif

        SAknProductFontTableLine line = productFontTable[aUsedIndex];

        TCdlArray<SBaselineDelta> const* baselineArray = line.iBaselineData;

        retVal = ( baselineArray != NULL );
        }
    return retVal;
    }

EXPORT_C TInt AknFontProvider::BaselineDeltaForCharacter( TInt aUsedIndex, 
                                                     TChar aCharacter, 
                                                     TInt& aBaselineLift, 
                                                     TInt& aDenominatorIfFractional )
    {
    TInt retVal( KErrNone );
    // Force "NULL" behaviour
    aBaselineLift = 0;
    aDenominatorIfFractional = KAknFontProviderBaselineCorrectionIsAbsolute;
    if ( aUsedIndex == KErrNotFound)
        return retVal;
    
#ifdef _DEBUG
    TInt numberOfRows = sizeof( productFontTable )/ sizeof( SAknProductFontTableLine );
    __ASSERT_DEBUG( aUsedIndex < numberOfRows , Panic( EAknFontPanicIndexOutOfRange ));
#endif

    SAknProductFontTableLine line = productFontTable[aUsedIndex];

    TCdlArray<SBaselineDelta> const* baselineArrayPtr = line.iBaselineData;

    if ( baselineArrayPtr )
        {
        TInt numberOfRanges = baselineArrayPtr->Count();
        // first row that the character is in:
        for ( TInt characterRangeIndex  = 0; characterRangeIndex < numberOfRanges; characterRangeIndex++)
            {
            const SBaselineDelta& baselineLine = baselineArrayPtr->At(characterRangeIndex);
            if ( aCharacter >= baselineLine.iFirstCharacter  )
                {
                TInt nextIndex = characterRangeIndex + 1;
                TChar nextIndexCharacter = KMaxTInt; // Use if at last entry in range
                if ( nextIndex < numberOfRanges )
                    {
                    nextIndexCharacter  = baselineArrayPtr->At(nextIndex).iFirstCharacter;
                    }
                if ( aCharacter < nextIndexCharacter )
                    {
                    aBaselineLift = baselineLine.iRelativeBaselineLift;
                    aDenominatorIfFractional = baselineLine.iDenominator;
                    break;
                    }
                }
            }
        }
               
    return retVal;
    }

LOCAL_C void FindCharacterRangeForCharacter( 
    const TChar& chNow, 
    TCdlArray<SBaselineDelta> const* aBaselineArrayPtr, 
    TChar& aMinCharInRange, 
    TChar& aMaxCharInRangePlusOne, 
    SBaselineDelta& aBaseline )
    {
    TInt numberOfRanges = aBaselineArrayPtr->Count();
    __ASSERT_ALWAYS( numberOfRanges > 0, 
        Panic( EAknFontPanicBadFontProviderDataStructure ) );

    TInt characterRangeIndex = numberOfRanges - 1; // Loop from the end
    aMinCharInRange = KMaxTInt; // For initializing the monotonic check
    while ( characterRangeIndex >= 0 )
        {
        aMaxCharInRangePlusOne = aMinCharInRange;
        aMinCharInRange  = aBaselineArrayPtr->At(characterRangeIndex).iFirstCharacter;

        __ASSERT_DEBUG( aMinCharInRange < aMaxCharInRangePlusOne, Panic( EAknFontPanicBadFontProviderDataStructure ));
                  
        if ( chNow >= aMinCharInRange )
            break;

        characterRangeIndex--;
        }

    // Did we go negative on that last pass through (never hit the break)?
    __ASSERT_DEBUG( characterRangeIndex >= 0, Panic( EAknFontPanicBadFontProviderDataStructure ));

    // This is the baseline to use
    aBaseline = aBaselineArrayPtr->At(characterRangeIndex);
    }

EXPORT_C TInt AknFontProvider::MinimumBaselineDeltaForDescriptor( TInt aUsedIndex, 
                                                     const TDesC& aText, 
                                                     TInt& aMinBaselineLift, 
                                                     TInt& aDenominatorIfFractional,
                                                     TBool aQuitWhenDifferent,
                                                     TInt& aNumInitialCharsTheSame)
    {
    TInt retVal(KErrNone);
    // Force "NULL" behaviour. e.g. for zero length descriptors, or no printing characters
    aMinBaselineLift = 0;
    aDenominatorIfFractional = KAknFontProviderBaselineCorrectionIsAbsolute;
    aNumInitialCharsTheSame = 0; 
    
    // KErrNotFound is a legal parameter value
    if ( aUsedIndex == KErrNotFound )
        return retVal;

#ifdef _DEBUG
    TInt numberOfRows = sizeof( productFontTable )/ sizeof( SAknProductFontTableLine );
    __ASSERT_DEBUG( aUsedIndex < numberOfRows , Panic( EAknFontPanicIndexOutOfRange ));
#endif

    SAknProductFontTableLine line = productFontTable[aUsedIndex];

    TCdlArray<SBaselineDelta> const* baselineArrayPtr = line.iBaselineData;

    if ( !baselineArrayPtr )
        return KErrNotFound;

    TInt numberOfRanges = baselineArrayPtr->Count();
    __ASSERT_ALWAYS( numberOfRanges > 0, 
        Panic( EAknFontPanicBadFontProviderDataStructure ) );

     // iFirstCharacter of first line must be 0
    __ASSERT_ALWAYS( baselineArrayPtr->At(0).iFirstCharacter == 0, 
        Panic( EAknFontPanicBadFontProviderDataStructure ) );

    TChar minCharInRange(KMaxTInt);
    TChar maxCharInRangePlusOne(KMaxTInt);
    SBaselineDelta baselineLine;
    TInt thisBaselineLift(0);
    TInt thisDenominator(KAknFontProviderBaselineCorrectionIsAbsolute);
    TBool foundFirstDiffAlready(EFalse);
    TInt processedChars(0);

    TInt length = aText.Length();
    for ( TInt cIndex = 0; cIndex < length ; cIndex++ )
        {
        TChar chNow = aText[cIndex];

        if ( chNow.IsPrint() )
            {
            // Check if no longer in current range. Fails first time through for sensible chNow.
            if (chNow < minCharInRange || chNow >= maxCharInRangePlusOne )
                {
                // Search again for correct range
                FindCharacterRangeForCharacter( 
                    chNow, baselineArrayPtr, minCharInRange, maxCharInRangePlusOne, baselineLine);

                // Just because we found a different range, does not mean the values are different. Have to check
                // later using stored and these new values.
                thisBaselineLift = baselineLine.iRelativeBaselineLift;
                thisDenominator = baselineLine.iDenominator;
                }

            processedChars++;

            // Should be in range now. Check if first printable character and capture metrics
            if ( processedChars == 1 )
                {
                aMinBaselineLift = thisBaselineLift;
                // Denominator must be uniform, so we only need to capture it once
                if (thisDenominator != KAknFontProviderBaselineCorrectionIsAbsolute )
                    aDenominatorIfFractional = thisDenominator;

                aNumInitialCharsTheSame = cIndex+1; // has to take accound of skipped characters
                }
            else
                {
                if ( thisBaselineLift != aMinBaselineLift )
                    {
                    if ( aQuitWhenDifferent )
                        {
                        break; // from for big loop over the descriptor
                        }
                    else
                        {
                        foundFirstDiffAlready = ETrue;
                        aMinBaselineLift = Min( aMinBaselineLift, thisBaselineLift ); 
                        }
                    }
                else
                    {
                    if ( !foundFirstDiffAlready )
                        aNumInitialCharsTheSame = cIndex+1; // has to take accound of skipped characters
                    }
                }
            }
        }
    return retVal;
    }
    

EXPORT_C TInt AknFontProvider::FontProviderIndexFromFontSpec( const TFontSpec& aFontSpec ) 
    {
    // This implementation merely matches typeface.
    TInt retval(KErrNotFound); // an invalid index
    TInt numberOfRows = sizeof( productFontTable )/ sizeof( SAknProductFontTableLine );
    for (TInt index = 0; index < numberOfRows; index++)
        {
        const SAknProductFontTableLine& line = productFontTable[index];
        if ( line.iTypefaceName->Match( aFontSpec.iTypeface.iName ) == 0 )
            {
            retval = index;
            break;
            }
        }

    return retval;
    }

EXPORT_C void AknFontProvider::InitializeSystemL ( const CEikonEnv& aEnv )
    {
    //chinese adaptation
    TBool fLinkedFonts = FeatureManager::FeatureSupported(KFeatureIdFfLinkedFontsChinese);
    if(fLinkedFonts)
      {
      //attempt to create linked font only once
      if(!LinkTypefacesInstalled())
	    {
	     //TRAP call necessary
	     //not need to handle return value, hanled by LinkTypefacesInstalled()
	     TRAP_IGNORE(IntializeLinkedFontL());
      	}    	  
      }
    //end       
    // This determines which languages are required
    TUint langs = FontProviderRequiredLangs();
    
    // Set the system alias
    CFbsTypefaceStore* store = CFbsTypefaceStore::NewL(aEnv.ScreenDevice());
    CleanupStack::PushL( store );
    
    TTypeface aliasedTypeface;
    
    // Search through aliases until you find match
    TInt numberOfRows = sizeof( aliasTable )/ sizeof( SAknAliasTableLine );
    for (TInt index = 0; index < numberOfRows; index++)
        {
        SAknAliasTableLine line = aliasTable[index];
        
        // No null descriptors
        if ( (line.iAlias)->Length() != 0 ) 
            {
            // Only take aliases that are language-variated
            if ( line.iLanguagesAndTypefaceTable )
                {
                if ( SetLanguageDependentDeAliasedTypeface( line.iLanguagesAndTypefaceTable, langs, aliasedTypeface ) )
                    {
                    store->SetFontNameAliasL( *(line.iAlias), aliasedTypeface.iName );
                    // Set the default typeface name. It is the one with the alias "System One":
                    if ( *(line.iAlias)==KSystemOne )
                        {
                        store->SetSystemDefaultTypefaceNameL(aliasedTypeface.iName);
                        }
                    }
                }
            }
 
        }
        
    CleanupStack::PopAndDestroy( store );   
    
    return;
    }


EXPORT_C TInt AknFontProvider::GetFontSpecFromMetrics(
    CBitmapDevice& aDevice,
    TInt aFontId, 
    const TAknFontSpecification& aMetrics,
    TFontSpec& aFontSpec,
    TInt& aFontProviderIndex)
    {
    TBool needsExactMatch(EFalse);
    TBool fallbackNeeded(EFalse);
    return DoGetFontSpecFromMetrics(aDevice, aFontId, aMetrics, aFontSpec, aFontProviderIndex, needsExactMatch, fallbackNeeded);    
    }
    
TInt AknFontProvider::DoGetFontSpecFromMetrics(
    CBitmapDevice& aDevice,
    TInt /*aFontId*/, 
    const TAknFontSpecification& aMetrics,
    TFontSpec& aFontSpec,
    TInt& aFontProviderIndex,
    TBool& aNeedsExactMatch,
    TBool& aFallbackNeeded)
    {
    // Set flags for suppressing size downgrade, and suppressing fallbacks 
    TBool reduceSize; 
    TInt sizeInPixels;
    SetLocalFlagsAndMetrics( aMetrics, aDevice, aNeedsExactMatch, reduceSize, sizeInPixels );
       
    // Set the required languages bit pattern
    TUint requiredLanguages = FontProviderRequiredLangs();

    TInt numberOfRows = sizeof( productFontTable )/ sizeof( SAknProductFontTableLine );
    for (TInt index = 0; index < numberOfRows; index++)
        {
        SAknProductFontTableLine line = productFontTable[index];
        if ( line.iCategory == aMetrics.FontCategory() || line.iCategory == EAny )
            {
            if (    ( line.iMinSize <= sizeInPixels || line.iMinSize == EAny )
                &&  ( sizeInPixels <= line.iMaxSize || line.iMaxSize == EAny) )
                {
                if ( COMPARE_BOOLS(productFontTable[index].iBold, ( aMetrics.Weight() == EStrokeWeightBold ) ) // it matches...
                    || (productFontTable[index].iBold == EAny) ) // ... or use what was passed in
                    {
                    if ( COMPARE_BOOLS(productFontTable[index].iItalic, ( aMetrics.Posture() == EPostureItalic ) ) // it matches...
                        || productFontTable[index].iItalic == EAny ) // ... or use what was passed in
                        {
                        if ( ( ( requiredLanguages & line.iSupportedLanguagesPattern ) == requiredLanguages )
                              || line.iSupportedLanguagesPattern == EAnyLangs )
                            {
                            aFontProviderIndex = index;
                            break;
                            }
                        }
                    }
                }
            }
        }

    FallBackIfNeeded(aFontProviderIndex, aFallbackNeeded);

    // copy the line's information into the FontSpec
    SetUpFontSpecFromTableLine( aFontProviderIndex, aMetrics, sizeInPixels, reduceSize, aFontSpec );

    // Specific feature for QVGA primary to avoid re-localization 
    // These values would have to be maintained (or removed) depending on changes to layout spec
   TRect rect = CEikonEnv::Static()->ScreenDevice()->SizeInPixels();  

   // Make sure layout is not asking any big big big fonts.
    __ASSERT_DEBUG(rect.Height() > aFontSpec.iHeight,Panic(EAknFontPanicFontTooBig));

    if (rect.Height() < aFontSpec.iHeight)
        {
        aFontSpec.iHeight = rect.Height();
        }
        
    return KErrNone;
    }

    
//chinese adaptation
//1020509C UID of fontprovider
//cannot use PrivatePath() api as it will return parent process private path
_LIT(KFileName,"z:\\Private\\1020509C\\link.ini" );
void GetGroupCanonicalDetails(const TDesC& aToken,
        SLinkedFontDetails*& aDetails)
    {
    _LIT(KGroup, "GROUP");
    _LIT(KCanonical, "CANONICAL");
    _LIT(KColon, ":");
    _LIT(KLinkFacename, "FN");
    _LIT(KBold, "BOLD");
    _LIT(KRegular, "REGULAR");
    TBuf<256> temp;
    TInt start = 0;
    TInt end = aToken.Find(KColon);

    do
        {
        temp.Copy(aToken.Mid(start, end));
        //contains group entry
        if (KErrNotFound != temp.Find(KGroup))
            {
            TPtrC ptrNum = temp.Mid(KGroup().Length());
            TLex aNumLex(ptrNum);
            aNumLex.Val(aDetails->iGroup);
            }
        //contains whether canonical
        else if (KErrNotFound != temp.Find(KCanonical))
            {
            //					aCanonical = ETrue;		
            TPtrC ptrNum = temp.Mid(KCanonical().Length());
            TLex aNumLex(ptrNum);
            aNumLex.Val(aDetails->iCanonical);
            }
        //contains link face name
        else if (KErrNotFound != temp.Find(KLinkFacename))
            {
            aDetails->iLinkFontName.Copy(temp.Mid(KLinkFacename().Length()));
            }
        else if (KErrNotFound != temp.Find(KBold))
            {
            aDetails->iFontCategory = 2;
            }
        else if (KErrNotFound != temp.Find(KRegular))
            {
            aDetails->iFontCategory = 1;
            }
        //should be font name
        else
            {
            aDetails->iFontName.Copy(temp);
            }

        start += end + 1;
        end = (aToken.Mid(start)).Find(KColon);

        }
    while (KErrNotFound != end);
    }

TBool ChineseLinkedFontPresent(const TDesC& newFaceName)
    {

    TBool FontPresent = EFalse;
    TTypefaceSupport *typeface = NULL;
    TInt fontCount = CEikonEnv::Static()->ScreenDevice()->NumTypefaces();

    for (TInt i = 0; (i < fontCount) && (FontPresent == EFalse); i++)
        {
        typeface = new TTypefaceSupport;
        if (typeface != NULL)
            {
            CEikonEnv::Static()->ScreenDevice()->TypefaceSupport(*typeface, i);
            if (!typeface->iTypeface.iName.Compare(newFaceName))
                { //Found linked font 
                FontPresent = ETrue;
                }
            }
        delete typeface;
        typeface = NULL;
        }

    return FontPresent;
    }

TInt CreateLinkFontsL(RPointerArray<SLinkedFontDetails>& fontfiles)
    {
    //	CFbsScreenDevice* dev = CFbsScreenDevice::NewL(0, EColor16MU);
    //	CleanupStack::PushL(dev);
    CFbsTypefaceStore* store = CFbsTypefaceStore::NewL(NULL);
    CleanupStack::PushL(store);
    TInt ret;

    CLinkedTypefaceSpecification *typefaceSpec = NULL;

    for (int i = 0; i < fontfiles.Count(); i++)
        {

        SLinkedFontDetails* tok = fontfiles[i];
        //TDesC& linkName = tok->iLinkFontName;
        TBuf<24> linkName(tok->iLinkFontName);
        if (!ChineseLinkedFontPresent(linkName))
            {
            typefaceSpec = CLinkedTypefaceSpecification::NewLC(linkName);
            for (int j = i; j < fontfiles.Count(); j++)
                {
                SLinkedFontDetails* first = fontfiles[j];
                TInt& groupId = fontfiles[j]->iGroup;
                TBool& canonical = fontfiles[j]->iCanonical;
                //TDesC& linkTypeFace = fontfiles[i]->iLinkFontName;
                TBuf<24> linkTypeFace(fontfiles[j]->iLinkFontName);
                //TDesC& fontFaceName = fontfiles[i]->iFontName;
                TBuf<24> fontFaceName(fontfiles[j]->iFontName);
                if (KErrNotFound != linkTypeFace.Find(linkName))
                    {
                    CLinkedTypefaceGroup* checkGroup =
                            typefaceSpec->GroupById(groupId);
                    if (NULL == checkGroup)
                        {
                        CLinkedTypefaceGroup* group =
                                CLinkedTypefaceGroup::NewLC(groupId);
                        typefaceSpec->AddLinkedTypefaceGroupL(*group);
                        CleanupStack::Pop();
                        if(2 == fontfiles[j]->iFontCategory)
                            group->SetBoldnessPercentage(1);
                        else // 0 or 1
                            group->SetBoldnessPercentage(0); //by default
                        }

                    CLinkedTypefaceElementSpec *elementSpec =
                            CLinkedTypefaceElementSpec::NewLC(fontFaceName,
                                    groupId);
                    if (canonical)
                        elementSpec->SetCanonical(ETrue);
                    typefaceSpec->AddTypefaceAtBackL(*elementSpec);
                    CleanupStack::Pop(1, elementSpec);

                    }

                }
                TRAP(ret, typefaceSpec->RegisterLinkedTypefaceL(*store));
            CleanupStack::PopAndDestroy(1, typefaceSpec);
            typefaceSpec = NULL;

            }

        }
    CleanupStack::PopAndDestroy(1, store);

    return ret;
    }

void PopulateFontFileNames(TFileText& tfile,
        RPointerArray<SLinkedFontDetails>& fontfiles, const TDesC& stop)
    {
    TBuf<256> filedatabuf;
    while (tfile.Read(filedatabuf) != KErrEof)
        {
        if (KErrNotFound != filedatabuf.Match(stop))
            {
            break;
            }
        else
            {
            SLinkedFontDetails *details = new SLinkedFontDetails;
            GetGroupCanonicalDetails(filedatabuf, details);
            fontfiles.Append(details);
            }
        }

    }

TInt IntializeLinkedFontL()
    {
    _LIT(KSCStart, "[SC_LINK_START]");
    _LIT(KSCStop, "[SC_LINK_STOP]");
    _LIT(KTCHKStart, "[TCHK_LINK_START]");
    _LIT(KTCHKStop, "[TCHK_LINK_STOP]");
    _LIT(KSCHRStart, "[SCHR_LINK_START]");
    _LIT(KSCHRStop, "[SCHR_LINK_STOP]");
    _LIT(KTCHKHRStart, "[TCHKHR_LINK_START]");
    _LIT(KTCHKHRStop, "[TCHKHR_LINK_STOP]");
    _LIT(KJAPStart, "[JAP_LINK_START]");
    _LIT(KJAPStop, "[JAP_LINK_STOP]");
    _LIT(KKORStart, "[KOR_LINK_START]");
    _LIT(KKORStop, "[KOR_LINK_STOP]");
    _LIT(KWESTLINKLRStart, "[WESTERN_LINKLR_START]");
    _LIT(KWESTLINKLRStop, "[WESTERN_LINKLR_STOP]");
    _LIT(KWESTLINKHRStart, "[WESTERN_LINKHR_START]");
    _LIT(KWESTLINKHRStop, "[WESTERN_LINKHR_STOP]");    

    TInt ret = KErrNone;
    RPointerArray<SLinkedFontDetails> fontfiles;
    RFs fs;
    RFile rFile;
    TFileText tfile;
    User::LeaveIfError(fs.Connect());
    ret = rFile.Open(fs, KFileName, EFileRead);
    User::LeaveIfError(ret);
    tfile.Set(rFile);
    TBuf<256> filedatabuf;
    TBuf<50> startTok;
    TBuf<50> stopTok;

    TBool fLinkedFonts = FeatureManager::FeatureSupported(
            KFeatureIdFfLinkedFontsChinese);
    TBool fTCHKFonts = FeatureManager::FeatureSupported(
            KFeatureIdChineseTaiwanHkFonts);
    TBool fSCFonts = FeatureManager::FeatureSupported(
            KFeatureIdChinesePrcFonts);
    TBool fHiResFonts = FeatureManager::FeatureSupported(
            KFeatureIdChineseFontsHires);

    TBool fJapanese = FeatureManager::FeatureSupported(KFeatureIdJapanese);
    TBool fKorean = FeatureManager::FeatureSupported(KFeatureIdKorean);
    TBool fChinese = FeatureManager::FeatureSupported(
            KFeatureIdChinese);
    
    if (fLinkedFonts)
        {

        if (fSCFonts && fHiResFonts)
            {
            startTok.Copy(KSCHRStart);
            stopTok.Copy(KSCHRStop);
            tfile.Seek(ESeekStart);
            ret = DoPopulateAndCreateLinkFontsL(tfile, startTok, stopTok);
            }
        else if (fSCFonts)
            {
            startTok.Copy(KSCStart);
            stopTok.Copy(KSCStop);
            tfile.Seek(ESeekStart);
            ret = DoPopulateAndCreateLinkFontsL(tfile, startTok, stopTok);
            }
        if (fTCHKFonts && fHiResFonts)
            {
            startTok.Copy(KTCHKHRStart);
            stopTok.Copy(KTCHKHRStop);
            tfile.Seek(ESeekStart);
            ret = DoPopulateAndCreateLinkFontsL(tfile, startTok, stopTok);
            }        
        else if (fTCHKFonts)
            {
            startTok.Copy(KTCHKStart);
            stopTok.Copy(KTCHKStop);
            tfile.Seek(ESeekStart);
            ret = DoPopulateAndCreateLinkFontsL(tfile, startTok, stopTok);
            }
		if(fJapanese)
            {
            startTok.Copy(KJAPStart);
            stopTok.Copy(KJAPStop);
            tfile.Seek(ESeekStart);
            ret = DoPopulateAndCreateLinkFontsL(tfile, startTok, stopTok);   
            }    
        if(fKorean)
            {
            startTok.Copy(KKORStart);
            stopTok.Copy(KKORStop);
            tfile.Seek(ESeekStart);
            ret = DoPopulateAndCreateLinkFontsL(tfile, startTok, stopTok);
            }			
        if((!fChinese) && (!fKorean) && (!fJapanese) )//western linked fonts
            {
            if(fHiResFonts)
                {
                startTok.Copy(KWESTLINKHRStart);
                stopTok.Copy(KWESTLINKHRStop);
                tfile.Seek(ESeekStart);
                ret = DoPopulateAndCreateLinkFontsL(tfile, startTok, stopTok);
                }
            else
                {
                startTok.Copy(KWESTLINKLRStart);
                stopTok.Copy(KWESTLINKLRStop);
                tfile.Seek(ESeekStart);
                ret = DoPopulateAndCreateLinkFontsL(tfile, startTok, stopTok);                            
                }
            }        
        }
        

    
    rFile.Close();
    fs.Close();
    return ret;
    }
 
TInt DoPopulateAndCreateLinkFontsL(TFileText atfile,  TDesC& astartTok, TDesC& astopTok)
    {
    TInt ret = KErrNone;
    TBuf<256> filedatabuf;
    RPointerArray<SLinkedFontDetails> fontfiles;
    while ( (atfile.Read(filedatabuf) != KErrEof) )
        {
        if (KErrNotFound != filedatabuf.Match(astartTok))
            {
            PopulateFontFileNames(atfile, fontfiles, astopTok);
            ret = CreateLinkFontsL(fontfiles);
            break;
            }
        }
    fontfiles.Close();
    return ret;
    }
TBool LinkTypefacesInstalled(TAknLinkedFontTypes aFonttype)
    {
    CWsScreenDevice * screenDevice = CCoeEnv::Static()->ScreenDevice();
    TInt noOfTypefaces = screenDevice->NumTypefaces();
    TBool fTCHKFonts = FeatureManager::FeatureSupported(
            KFeatureIdChineseTaiwanHkFonts);
    TBool fSCFonts = FeatureManager::FeatureSupported(
            KFeatureIdChinesePrcFonts);
    TBool fHiResFonts = FeatureManager::FeatureSupported(
            KFeatureIdChineseFontsHires);
   TBool fChinese = FeatureManager::FeatureSupported(
            KFeatureIdChinese);
    TBool fJapanese = FeatureManager::FeatureSupported(KFeatureIdJapanese);
    TBool fKorean = FeatureManager::FeatureSupported(KFeatureIdKorean);

    
    TBool ret = EFalse;
    TInt files = 0, ref = 0;
    if( (EAknAllLinkedFonts == aFonttype) || (EAknSystemLinkedFonts == aFonttype))
        {
        if( (fChinese && fSCFonts ))
           ref +=KAknFontStylesSupported;
        if(fChinese && fTCHKFonts)
           ref +=KAknFontStylesSupported;
        if(fJapanese)
            ref +=KAknFontStylesSupported;
        if(fKorean)
            ref +=KAknFontStylesSupported;
        if((!fChinese) && (!fKorean) && (!fJapanese))
            ref +=KAknFontStylesSupported;//western linked fonts
        }
    for (TInt i = 0; i < noOfTypefaces; i++)
        {
        TTypefaceSupport typefaceInfo;
        screenDevice->TypefaceSupport(typefaceInfo, i);
        if( (EAknAllLinkedFonts == aFonttype) || (EAknSystemLinkedFonts == aFonttype))
            {
        if (fSCFonts && fHiResFonts)
            {
            if (typefaceInfo.iTypeface.iName.Compare(KS60SCHRSANSRLF)==0||
                typefaceInfo.iTypeface.iName.Compare(KS60SCHRSANSSBLF)==0||
                typefaceInfo.iTypeface.iName.Compare(KS60SCHRSANSTTLSMBLDLF)==0)
                {
                files++;
                }

            }
        else if (fSCFonts)
            {
            if (typefaceInfo.iTypeface.iName.Compare(KS60SCSANSRLF)==0||
                typefaceInfo.iTypeface.iName.Compare(KS60SCSANSSBLF)==0||
                typefaceInfo.iTypeface.iName.Compare(KS60SCSANSTTLSMBLDLF)==0)
                {
                files++;
                }

            }
           if (fTCHKFonts && fHiResFonts)
            {
            if (typefaceInfo.iTypeface.iName.Compare(KS60TCHKHRSANSRLF)==0||
                typefaceInfo.iTypeface.iName.Compare(KS60TCHKHRSANSSBLF)==0||
                typefaceInfo.iTypeface.iName.Compare(KS60TCHKHRSANSTTLSMBLDLF)==0)
                {
                files++;
                }

            }

           else if (fTCHKFonts)
            {
            if (typefaceInfo.iTypeface.iName.Compare(KS60TCHKSANSRLF)==0||
                typefaceInfo.iTypeface.iName.Compare(KS60TCHKSANSSBLF)==0||
                typefaceInfo.iTypeface.iName.Compare(KS60TCHKSANSTTLSMBLDLF)==0)
                {
                files++;
                }
            }
            if (fJapanese)
                {
                if (typefaceInfo.iTypeface.iName.Compare(KS60JAPSANSRLF)==0|| 
                    typefaceInfo.iTypeface.iName.Compare(KS60JAPSANSSBLF)==0||
                    typefaceInfo.iTypeface.iName.Compare(KS60JAPSANSTTLSMBLDLF)==0)
                    {
                    files++;
                    }

                }
            if (fKorean)
                {
                if (typefaceInfo.iTypeface.iName.Compare(KS60KORSANSRLF)==0|| 
                    typefaceInfo.iTypeface.iName.Compare(KS60KORSANSSBLF)==0|| 
                    typefaceInfo.iTypeface.iName.Compare(KS60KORSANSTTLSMBLDLF) == 0)
                    {
                    files++;
                    }

                }
          if (!fChinese && !fJapanese && !fKorean && fHiResFonts)
              {
            if (typefaceInfo.iTypeface.iName.Compare(KS60SCHRSANSRLF)==0||
                typefaceInfo.iTypeface.iName.Compare(KS60SCHRSANSSBLF)==0||
                typefaceInfo.iTypeface.iName.Compare(KS60SCHRSANSTTLSMBLDLF)==0)
                  {
                  files++;
                  }

              }
          else if (!fChinese && !fJapanese && !fKorean)
              {
            if (typefaceInfo.iTypeface.iName.Compare(KS60SCSANSRLF)==0||
                typefaceInfo.iTypeface.iName.Compare(KS60SCSANSSBLF)==0||
                typefaceInfo.iTypeface.iName.Compare(KS60SCSANSTTLSMBLDLF)==0)
                  {
                  files++;
                 }
              }                          
            }
        }
    if (files && (ref == files) )
        ret = ETrue;
    return ret;
    }
 
//  End of File
