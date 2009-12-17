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
* Description:   Object representing a Series 60 font request
*
*/



// INCLUDE FILES

#include <coemain.h>
#include <AknLayout2DataDef.h>
#include <cdlfont.cdl.h>
#include <CdlRefs.h>

#include "AknFontIdOffsets.hrh"
#include "AknFontSpecification.h"
#include "AknFontUtilsPanic.h"
#include "AknFontId.h"

// CONSTANTS

// ============================ MEMBER FUNCTIONS ===============================

enum TAknFontSpecifiationBitIndex
    {
    EScalesInTwips = 0,
    ERequiresExactMatch,
    ETextPaneIsDesignHeight    
    };
    
EXPORT_C TAknFontSpecification::TAknFontSpecification( TInt aFontId )
    {

    if( TAknFontId::IsEncodedFont(aFontId) )
        {
        iBaseFontCategory = TAknFontId::ExtractCategoryFromFontId(aFontId);
        iRequiredStyle.SetStrokeWeight(TAknFontId::ExtractWeightFromFontId(aFontId) == 0 ? EStrokeWeightNormal : EStrokeWeightBold);
        iRequiredStyle.SetPosture(TAknFontId::ExtractPostureFromFontId(aFontId) == 0 ? EPostureUpright : EPostureItalic);
        iRequiredStyle.SetEffects(FontEffect::EOutline, TAknFontId::ExtractOutlineFromFontId(aFontId) == 0 ? EFalse : ETrue);
        iTextPaneHeight = (TInt16)TAknFontId::ExtractHeightFromFontId(aFontId);
        }
    else
        {
        if (!CDL_Font::IsCustomisationStarted())
            {
            TRAPD( error, LoadAnyCDLFontInstanceL() );
            __ASSERT_ALWAYS( error == KErrNone, Panic(EAknPanicLayoutMissing) );
            }
        
        // process legacy and logical font ids
        if ( KHighestFixedLayoutFont < aFontId && aFontId <= KAknHighestLogicalFont )
            {
            TCdlArray<SLogicalIdMetricsIdPair> const& logicalidmaparray = CDL_Font::logicalIdMapArray();
            TInt nLogicals= logicalidmaparray.Count();
            for ( TInt index = 0; index < nLogicals; index++)
                {
                if ( aFontId == logicalidmaparray[index].iLogicalId )
                    {
                    aFontId = logicalidmaparray[index].iFontMetricsId;
                    break;
                    }
                }
            }

        TCdlArray<SIdMetricsPair> const& metricsarray = CDL_Font::metricsArray();

        TInt nMetrics= metricsarray.Count();
        TInt foundIndex = KErrNotFound;
        for ( TInt index = 0; index < nMetrics; index++)
            {
            if ( aFontId == metricsarray[index].iFontId )
                {
                foundIndex = index;
                break;
                }
            }
            
        if ( foundIndex == KErrNotFound )
            {
            foundIndex = 0;
            }

        // Set the member data of the font specification
        iTextPaneHeight = metricsarray[foundIndex].iBodyHeight;
        iBaseFontCategory = (TAknFontCategory)metricsarray[foundIndex].iFontCategory;
        iRequiredStyle.SetStrokeWeight( metricsarray[foundIndex].iBold == 0 
            ? EStrokeWeightNormal : EStrokeWeightBold);
        iRequiredStyle.SetPosture( metricsarray[foundIndex].iItalic == 0 
            ? EPostureUpright : EPostureItalic );
        }
    }

EXPORT_C TAknFontSpecification::TAknFontSpecification( TAknFontCategory aCategory, 
                                           const TFontSpec& aFontSpec, 
                                           const MGraphicsDeviceMap* aDeviceMap )
                                           :iBaseFontCategory( aCategory )
    {
    const MGraphicsDeviceMap* map;
    if ( aDeviceMap )
        map = aDeviceMap;
    else
        map =  CCoeEnv::Static()->ScreenDevice();

    // Use the map to get font height in pixels
    TPoint point(aFontSpec.iHeight, aFontSpec.iHeight);
    TPoint newPoint = map->TwipsToPixels(point);
    iTextPaneHeight = newPoint.iY;
    iRequiredStyle = aFontSpec.iFontStyle;
    }

EXPORT_C TAknFontCategory TAknFontSpecification::FontCategory() const
    {
    return (TAknFontCategory)iBaseFontCategory;
    }

EXPORT_C TInt TAknFontSpecification::TextPaneHeight() const
    {
    return iTextPaneHeight;
    }

EXPORT_C TFontStrokeWeight TAknFontSpecification::Weight() const
    {
    return iRequiredStyle.StrokeWeight();
    }

EXPORT_C TFontPosture TAknFontSpecification::Posture() const
    {
    return iRequiredStyle.Posture();
    }

EXPORT_C TBool TAknFontSpecification::IsOutlineEffectOn() const
    {
    return iRequiredStyle.IsEffectOn(FontEffect::EOutline);
    }

void TAknFontSpecification::LoadAnyCDLFontInstanceL()
    {
	// find any instances that implement CDL_Font, and load the first one!
    // This stuff may leave so we should attempt to ensure CDL engine is started up already, avoiding
    // the requirement for this code
    CCdlRefCollection* refs = CdlEngine::FileContentsLC(KAknLayoutDllName);
    TInt count = refs->CountRefs();
	for (TInt ii=0; ii<count; ii++)
	    {
		if (refs->Ref(ii).iUid == CDL_Font::KCdlInterfaceUid)
            {
		    CDL_Font::LoadCustomisationL(refs->Ref(ii));
			break;
			}
		}
	CleanupStack::PopAndDestroy(refs);
	}

EXPORT_C void TAknFontSpecification::SetTextPaneHeight( TInt aNewHeight )
    {
    iTextPaneHeight = aNewHeight;
    }
    
EXPORT_C void TAknFontSpecification::SetFontCategory( TAknFontCategory aCategory)
    {
    iBaseFontCategory = aCategory;
    }
    
EXPORT_C void TAknFontSpecification::SetWeight( TFontStrokeWeight aWeight )
    {
    iRequiredStyle.SetStrokeWeight(aWeight);
    }
    
EXPORT_C void TAknFontSpecification::SetPosture( TFontPosture aPosture )
    {
    iRequiredStyle.SetPosture(aPosture);
    }   
    
EXPORT_C void TAknFontSpecification::SetTextPaneHeightIsDesignHeight( TBool aTextPaneHeightIsDesignHeight )
    {
    iFlags.Assign(ETextPaneIsDesignHeight, aTextPaneHeightIsDesignHeight);   
    }
    
EXPORT_C void TAknFontSpecification::SetExactMatchRequired ( TBool aRequiresExactMatch )
    {
    iFlags.Assign(ERequiresExactMatch, aRequiresExactMatch);   
    }

EXPORT_C void TAknFontSpecification::SetUnits ( TAknFontSpecificationUnits aUnits )
    {
    iFlags.Assign(EScalesInTwips, aUnits == TAknFontSpecification::ETwips );
    }
    
EXPORT_C TBool TAknFontSpecification::ExactMatchRequired() const
    {
    return iFlags[ERequiresExactMatch];
    }
    
EXPORT_C TBool TAknFontSpecification::TextPaneIsDesignHeight() const
    {
    return iFlags[ETextPaneIsDesignHeight];    
    }
    
EXPORT_C TAknFontSpecification::TAknFontSpecificationUnits TAknFontSpecification::Units() const
    {
    TAknFontSpecification::TAknFontSpecificationUnits units(EPixels);   
    if ( iFlags[EScalesInTwips] )
        {
        units = TAknFontSpecification::ETwips;
        }
    return units;
    }
   
    
//  End of File
