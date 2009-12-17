/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Exclusion query class.
*
*/


#ifndef AKNSSRVEXCLUSIONUTILS_H
#define AKNSSRVEXCLUSIONUTILS_H

// INCLUDE FILES

#include <AknsItemID.h>

// FORWARD DECLARATIONS

class CAknsSrvExclusionList;

// CLASS DECLARATION

/**
* Exclusion query class can be used to check whether the given item is excluded
* based on the parameters set in the query object.
*
* @since 2.0
*/
class TAknsSrvExclusionQuery
    {
    public:
        /**
        * Constructor.
        *
        * @param aList Exclusion query list to be used for concrete queries.
        */
        TAknsSrvExclusionQuery( CAknsSrvExclusionList* aList );

    public:
        /**
        * Sets the parameters used in the query.
        *
        * @param aArabic ETrue if Arabic language is currently active,
        *   EFalse otherwise.
        *
        * @param aHebrew ETrue if Hebrew language is currently active,
        *   EFalse otherwise.
        */
        void SetParameters( const TBool aArabic, const TBool aHebrew );

        /**
        * Sets the highlight animation enable/disable status. Status is read
        * from AknSkins CenRep key (as SkinExclusions.ini is not used for
        * variation).
        */
        void SetHighlightAnimEnabled( const TBool aValue );

        /**
        * The current enable/disable status of highlight animation.
        *
        * @return ETrue if highlight animation is enabled, EFalse otherwise.
        */
        TBool IsHighlightAnimEnabled() const;

        /**
        * Checks whether the given item is currently excluded.
        *
        * @param aIID Item ID of the item to be checked.
        *
        * @return ETrue if item is currently excluded, EFalse otherwise.
        */
        TBool IsExcluded( const TAknsItemID& aIID ) const;

        /**
        * Checks whether the given item should be mapped to another item,
        * and performs remapping.
        *
        * @param aIID Item ID of the item to be checked. If remapping is
        *   performed, this value is modified accordingly.
        *
        * @return ETrue if the item has been remapped, EFalse otherwise.
        */
        TBool MapIID( TAknsItemID& aIID ) const;

    private:
        CAknsSrvExclusionList* iList;
        TBool iArabicEnabled;
        TBool iHebrewEnabled;
        TBool iHighlightAnimEnabled;
    };

/**
* Exclusion list entry class.
*/
struct TAknsSrvExclusionListEntry
    {
    public:
        TAknsItemID iIID;
        TInt iFlags;
        TAknsItemID iTargetIID;

    public:
        static TInt LinearOrder(
            const TAknsSrvExclusionListEntry& aFirst,
            const TAknsSrvExclusionListEntry& aSecond );
    };

/**
* Exclusion list is used to store the array of the items that are excluded,
* as well as the item-specific exclusion parameters.
*
* @since 2.0
*/
NONSHARABLE_CLASS( CAknsSrvExclusionList ) : public CBase
    {
    public:
        /**
        * Static constructor.
        *
        * @return Newly constructed exclusion list object.
        */
        static CAknsSrvExclusionList* NewL();

        /**
        * Destructor.
        */
        ~CAknsSrvExclusionList();

    public:
        /**
        * Loads the exclusion list from the file.
        */
        void LoadDefaultListFromFileL( RFs& aRFs );

        /**
        * Finds the specified exclusion list entry.
        *
        * @param aIID Item ID of the item to be searched for.
        *
        * @return Pointer to the item, or @c NULL if not found.
        */
        TAknsSrvExclusionListEntry* FindEntry(
            const TAknsItemID& aIID );

    private:
        /**
        * Private constructor.
        */
        CAknsSrvExclusionList();

    private:
        RArray<TAknsSrvExclusionListEntry> iArray;
    };

#endif
