/*
* Copyright (c) 2003 Nokia Corporation and/or its subsidiary(-ies).
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
* Description: Declares container control for application.
*
*/


#ifndef CDLEXPLORERCONTAINER_H
#define CDLEXPLORERCONTAINER_H

// INCLUDES
#include <coecntrl.h>
#include <eiklbo.h>
#include <eiktxlbx.h>
#include <CdlEngine.h>
#include <cdlrefs.h>

// FORWARD DECLARATIONS
class CEikLabel;        // for example labels
class CAknTitlePane;
class CCdlExplorable;

// CLASS DECLARATION


/**
*  CCdlExplorerContainer  container control class.
*  
*/
class CCdlExplorerContainer : public CCoeControl, MCoeControlObserver, public MEikListBoxObserver
    {
    public: // Constructors and destructor
        
		CCdlExplorerContainer();

        /**
        * EPOC default constructor.
        * @param aRect Frame rectangle for container.
        */
        void ConstructL(const TRect& aRect);

        /**
        * Destructor.
        */
        ~CCdlExplorerContainer();

    public: // New functions
		void SetRootL(CCdlExplorable* aExplorable);
		TBool CanGoBack() const;
		void BackL();
		TBool CanOpen();
		void OpenL();
		void PropertiesL();
		TBool CanBeApplied();
		void ApplyStandAloneL();
		void ApplyLayerL();
		void HandleListBoxContentChangeL(MDesCArray* aList);
		void HandleChangeL(CCdlExplorable* aExplorable);

    public: // Functions from base classes

    private: // Functions from base classes

       /**
        * From CoeControl,SizeChanged.
        */
        void SizeChanged();

       /**
        * From CoeControl,CountComponentControls.
        */
        TInt CountComponentControls() const;

       /**
        * From CCoeControl,ComponentControl.
        */
        CCoeControl* ComponentControl(TInt aIndex) const;

       /**
        * From ?base_class ?member_description
        */
        // event handling section
        // e.g Listbox events
        void HandleControlEventL(CCoeControl* aControl,TCoeEvent aEventType);
	    void HandleListBoxEventL(CEikListBox* aListBox, TListBoxEvent aEventType);
		TKeyResponse OfferKeyEventL(const TKeyEvent& aKeyEvent,TEventCode aType);

		void PushViewL(CCdlExplorable* aExplorable);
		void SetListBoxArrayL();
		CCdlExplorable* CurrentSelected();

    private: //data
        class TAnnoyingAknListboxModelAdaptor : public MDesCArray
			{
		public:
			void SetArray(const MDesCArray* aArray);
			const MDesCArray* Array() const;
			TInt MdcaCount() const;
			TPtrC16 MdcaPoint(TInt aIndex) const;
		private:
			const MDesCArray* iArray;
			mutable TFileName iBuf;
			};

		struct SStackCell
			{
			CCdlExplorable* iExplorable;
			TInt iListPos;
			};

	    CEikTextListBox*    iListBox;
		CArrayFixFlat<SStackCell> iStack;
		TAnnoyingAknListboxModelAdaptor iAdaptor;
		CAknTitlePane* iTitlePane;
		HBufC* iAppTitle;
    };

#endif

// End of File
