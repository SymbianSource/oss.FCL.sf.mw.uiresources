/*
* Copyright (c) 2004-2005 Nokia Corporation and/or its subsidiary(-ies).
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
*   Interface for controlling the font choices made via Series 60 according to installed fonts
*
*/


   
#ifndef AKNFONTPROVIDER_H
#define AKNFONTPROVIDER_H

#include <fbs.h>

// When this header is included from FontProvider component (licensee-customizable), the following
// will not be in the User Include path, but in the System Include:
#include <AknFontSpecification.h>

class TAknFontProviderSuppliedMetrics;
class CEikonEnv;

// note that this flag must be removed by 2008wk02, for temporary internal compatibility use only
#define RD_FONT_PROVIDER_EXTENDED_SUPPORT

// Panic codes for use in Font Provider
enum TAknFontProviderPanicCodes
    {
    EAknFontPanicIndexOutOfRange,
    EAknFontPanicLayoutMissingFontInformation,
    EAknFontPanicBadFontProviderDataStructure,
    EAknFontPanicFailedToReturnFont,
	EAknFontPanicFontTooBig
    };

const TInt KAknFontProviderBaselineCorrectionIsAbsolute(-1);

/**
 * Class to provide runtime matching of font specification to available fonts.
 * The class is customizable by licensees by re-implementing this CPP file.
 */
class AknFontProvider
    {
    public:
    /**
    * Returns a font that matches the metrics supplied (aMetrics) from a product specific list. 
    *
    * @since Series 60 release 2.8
    * 
    * @param aDevice the bitmap device needed for twips calculations
    * @param aFontId    Series 60 font id
    * @param aMetrics   Series 60 font specification object determining 
    *                   layout requirements on the font to be matched.
    * @param aAdditionalMetrics Output additional information
    * @param aFontProviderIndex Output index for using in subsequent calls into other APIs
    * @return           a font pointer.  No ownership is transferred. 
    *                   Clients must call CBitmapDevice->ReleaseFont() when the font is no longer required.
    */
    IMPORT_C static CFbsFont* CreateFontFromMetrics (
        CBitmapDevice& aDevice,
        TInt aFontId, 
        const TAknFontSpecification& aMetrics,
        TAknFontProviderSuppliedMetrics& aAdditionalMetrics,
        TInt& aFontProviderIndex );

    /**
    * Returns a font that matches the typeface information and metrics supplied.
    * 
    * The typeface name supplied is checked against the supported alias table.
    * Generic alias names ("SansSerif", "Serif", "Monospace") are mapped to the product's fonts
    * taking supported languages, size, styles into account (ie, matched against the product font table), 
    * and then passed to the underlying Symbian OS GetNearestFontInPixels.
    * 
    * Other aliased typeface names may be mapped to font groups within the product font table
    *
    * Some aliased typeface names may be mapped to a single typeface, and matched against the product font table.
    * 
    * If no aliasing occurs, the passed-in typeface name is matched against the product font table.
    * 
    * If no match is found in the product font table, then the typeface (possibly after alias mapping) is
    * passed to the underlying Symbian OS font request.
    * 
    * The Category member of TAknFontSpecification is ignored when using this API; the typeface info is the 
    * main matching key.
    *
    * @since Series 60 release 2.8
    * 
    * @param aTypeface  Symbian OS typeface information.
    * @param aMetrics   Series 60 font specification object determining 
    *                   layout requirements on the font to be matched.
    * @param aFontProviderIndex Output index for using in subsequent calls into other APIs
    *                           This will be returned as KErrNotFound if no matching product font table
    *                           row was matched.
    * @return           a font pointer.  No ownership is transferred. 
    *                   Clients must call CBitmapDevice->ReleaseFont() when the font is no longer required.
    */
    IMPORT_C static CFbsFont* CreateFontFromTypefaceAndMetrics (
        CBitmapDevice& aDevice,
        const TTypeface& aTypeface, 
        const TAknFontSpecification& aMetrics,
        TAknFontProviderSuppliedMetrics& aAdditionalMetrics,
        TInt& aFontProviderIndex );

    /**
    * Tells the caller if the font obtained at a given index has corrected baselines
    *
    * @since Series 60 release 2.8
    * 
    * @param aFontProviderIndex Input index obtained in the call to CreateFontFromMetrics
    * @return          EFalse if there is no baseline correction
    */
    IMPORT_C static TBool HasBaselineCorrection( 
        TInt aFontProviderIndex );

    /**
    * Provides a character-dependent baseline offset within the font
    *
    * @since Series 60 release 2.8
    * 
    * @param aFontProviderIndex Input index obtained in the call to CreateFontFromMetrics
    * @param aCharacter         Character whose baseline correction is queried
    * @param aBaselineLift      Output; Baseline lift. +ve if baseline is raised. 
    *                           If aDenominatorIfFractional is not KAknFontProviderBaselineCorrectionIsAbsolute
    *                           then aBaselineLift needs to be divided by it, and multiplied by the font height
    * @param aDenominatorIfFractional Output; if non-zero, then the baseline lift is proportional
    */
    IMPORT_C static TInt BaselineDeltaForCharacter( 
        TInt aFontProviderIndex, 
        TChar aCharacter, 
        TInt& aBaselineLift, 
        TInt& aDenominatorIfFractional );

    /**
    * Provides a character-dependent baseline offset within the font
    *
    * @since Series 60 release 2.8
    * 
    * @param aFontProviderIndex Input index obtained in the call to CreateFontFromMetrics
    * @param aText              Descriptor whose baseline correction is queried
    * @param aMinBaselineLift   Output; Baseline lift. +ve if baseline is raised. 
    *                           If aDenominatorIfFractional is not KAknFontProviderBaselineCorrectionIsAbsolute, 
    *                           then aBaselineLift needs to be divided by it, and multiplied by the font height
    * @param aDenominatorIfFractional Output; if value is not KAknFontProviderBaselineCorrectionIsAbsolute, 
    *                           then the baseline lift is proportional to height, but need dividing by this value.
    * @param aQuitWhenDifferent     Input; if ETrue, stop scanning the descriptor when a different 
    *                               baseline lift is seen. Number of characters in the uniform, leading part of the
    *                               descriptor is recorded in aNumInitialCharsTheSame. 
    *                               If EFalse, the entire descriptor is looked at, and the minimum baseline lift 
    *                               returned. aNumInitialCharsTheSame is still just the leading uniform sequence (same as if ETrue)
    * @param aNumInitialCharsTheSame    Counts the number of characters in the leading sequence of uniformly baselined chars
    * @return   KErrNotFound if the input aFontProviderIndex is invalid. Otherwise KErrNone.
    */   
    IMPORT_C static TInt MinimumBaselineDeltaForDescriptor( 
        TInt aFontProviderIndex, 
        const TDesC& aText, 
        TInt& aMinBaselineLift, 
        TInt& aDenominatorIfFractional,
        TBool aQuitWhenDifferent,
        TInt& aNumInitialCharsTheSame);

    /**
    * Returns a Font provider index from a Symbian Font specification
    *
    * @since Series 60 release 2.8
    * 
    * @param aFontSpec  Symbian OS font specification.  Typeface name needs to be filled in.
    * @return Index into the font provider (for use calling back to other routines), or KErrNotFound, if no match is made
    */
    IMPORT_C static TInt FontProviderIndexFromFontSpec( const TFontSpec& aFontSpec );

    /**
    * Initialize environment for Series 60 font defaults
    * This method is to be called internally by the UI system early during initialization.
    *
    * @since Series 60 release 3.0
    * @capability WriteDeviceData
    * @param aEnv   Eikon environment object reference 
    */
    IMPORT_C static void InitializeSystemL ( const CEikonEnv& aEnv );

    /**
    * Returns a font spec that matches the metrics supplied (aMetrics) from a product specific list,
    * without actually constructing the font.
    *
    * @since Series 60 release 5.0
    * 
    * @param aDevice the bitmap device needed for twips calculations
    * @param aFontId    Series 60 font id, not currently used
    * @param aMetrics   Series 60 font specification object determining 
    *                   layout requirements on the font to be matched.
    * @param aFontSpec Output font spec corresponding to the requested font
    * @param aFontProviderIndex Output index for using in subsequent calls into other APIs
    * @return       KErrNone
    */    
    IMPORT_C static TInt GetFontSpecFromMetrics(
        CBitmapDevice& aDevice,
        TInt aFontId, 
        const TAknFontSpecification& aMetrics,
        TFontSpec& aFontSpec,
        TInt& aFontProviderIndex);
        
private:
    /**
    * Returns a font spec that matches the metrics supplied (aMetrics) from a product specific list,
    * without actually constructing the font. Internal implementation.
    *
    * @param aDevice the bitmap device needed for twips calculations
    * @param aFontId    Series 60 font id, not currently used
    * @param aMetrics   Series 60 font specification object determining 
    *                   layout requirements on the font to be matched.
    * @param aFontSpec Output font spec corresponding to the requested font
    * @param aFontProviderIndex Output index for using in subsequent calls into other APIs
    * @param aNeedsExactMatch Output whether an exact match was requested
    * @param aFallbackNeeded Output ETrue iff a fallback was needed in order to match
    * @return       KErrNone
    */    
    static TInt DoGetFontSpecFromMetrics(
        CBitmapDevice& aDevice,
        TInt aFontId, 
        const TAknFontSpecification& aMetrics,
        TFontSpec& aFontSpec,
        TInt& aFontProviderIndex,
        TBool& aNeedsExactMatch,
        TBool& aFallbackNeeded);
   };
    
#endif  
