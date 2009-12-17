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
* Description:  Master layout.
*
*/


#ifndef AKNSRLMASTERLAYOUT_H
#define AKNSRLMASTERLAYOUT_H

// INCLUDES
#include <e32base.h>
#include <AknsItemID.h>
#include <CdlEngine.h>
#include <CdlTypes.h>

// FORWARD DECLARATIONS
namespace AknLayoutScalable_Avkon { class CInstance; }

// CLASS DECLARATION

/**
* Master layout retrieval utility.
*
* Maps skin item IDs to layout data. CDL instance must be created and active
* when this class is used.
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlMasterLayout) : public CBase, public MCdlChangeObserver
    {
    private: // Constructors and destructor

        /**
        * Default constructor is private.
        *
        * @since 2.8
        */
        CAknsRlMasterLayout();

    public: // Constructors and destructor

        /**
        * Static creator.
        *
        * @since 2.8
        */
        IMPORT_C static CAknsRlMasterLayout* NewL();

        /**
        * Two-phased constructor.
        *
        * @since 2.8
        */
        void ConstructL();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlMasterLayout();

    public: // New methods

        /**
        * Gets the parent of the given item.
        *
        * @param aIID Item ID.
        *
        * @return Item ID of the parent.
        *   @c KAknsIIDDefault is returned, if the parent varies or is
        *   unknown.
        *   @c KAknsIIDNone is returned, if the item is known to have no
        *   parent at all.
        *
        * @since 2.8
        */
        IMPORT_C TAknsItemID GetParent( const TAknsItemID& aIID );

        /**
        * Retrieves the layout (in the currently active AknLayout) for the
        * given skin item.
        *
        * @param aIID Item ID.
        *
        * @param aParentRect Parent rectangle.
        *
        * @param aRect If layout is found, the location (in parent
        *   coordinates) and size of the item are assigned to this rectangle.
        *
        * @return @c ETrue if the layout was found, @c EFalse otherwise.
        *
        * @since 2.8
        */
        IMPORT_C TBool GetItemLayout( const TAknsItemID& aIID,
            const TRect& aParentRect, TRect& aRect );

        /**
        * Retrieves the current layout type.
        *
        * @return The type of the currently active layout.
        *
        * @since 2.8
        */
        IMPORT_C TInt CurrentLayoutType();

        /**
        * Retrieves the current layout size
        *
        * @return the size of the currently active layout
        *
        * @since 3.0
        */
        IMPORT_C TSize CurrentLayoutSize();

    private: // from MCdlChangeObserver
        void HandleCustomisationChangeL(const CCdlUids& /*aUids*/);
        void UpdateCachedLayoutData();

    private: // Data
        TInt iGridMode;
        const AknLayoutScalable_Avkon::CInstance& iAknLayoutScalable_Avkon;
        TRect iScreenRect;
        TInt iLayoutId;
    };

#endif // AKNSRLMASTERLAYOUT_H

// End of File
