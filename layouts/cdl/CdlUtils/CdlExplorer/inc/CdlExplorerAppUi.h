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
* Description: Declares UI class for application.
*
*/


#ifndef CDLEXPLORERAPPUI_H
#define CDLEXPLORERAPPUI_H

// INCLUDES
#include <eikapp.h>
#include <eikdoc.h>
#include <e32std.h>
#include <coeccntx.h>
#include <aknappui.h>
#include <CdlEngine.h>
#include <cdlrefs.h>

// FORWARD DECLARATIONS
class CCdlExplorerContainer;

// CONSTANTS
//const ?type ?constant_var = ?constant;

class CInfo : public CBase, MCdlChangeObserver
	{
public:
	CInfo();
	~CInfo();
	void ConstructL();
	
	TInt CountInterfaces() const;
	const SCdlInterface& Interface(TInt aInterfaceIndex) const;
	TInt FindInterfaceIndex(const SCdlInterface& aInterface) const;
	TInt FindInterfaceIndex(TUid aUid) const;

	const CCdlUids& Uids() const { return iUids; }
	const CCdlRefs& AllRefs() const { return *iAllRefs; }

	const TDesC* InterfaceName(TUid aUid) const;

private:
	void HandleAvailableRefsChangeL();

private:
	CArrayPtrFlat<CCdlInstance> iInterfaces;
	CCdlUids iUids;
	CCdlRefs *iAllRefs;
	};


// CLASS DECLARATION

/**
* Application UI class.
* Provides support for the following features:
* - EIKON control architecture
* 
*/
class CCdlExplorerAppUi : public CAknAppUi
    {
    public: // // Constructors and destructor

        /**
        * EPOC default constructor.
        */      
        void ConstructL();

        /**
        * Destructor.
        */      
        ~CCdlExplorerAppUi();
        
    public: // New functions
		inline const CInfo& Info() const { return *iInfo; }

    public: // Functions from base classes

    private:
        // From MEikMenuObserver
        void DynInitMenuPaneL(TInt aResourceId,CEikMenuPane* aMenuPane);

    private:
        /**
        * From CEikAppUi, takes care of command handling.
        * @param aCommand command to be handled
        */
        void HandleCommandL(TInt aCommand);

        /**
        * From CEikAppUi, handles key events.
        * @param aKeyEvent Event to handled.
        * @param aType Type of the key event. 
        * @return Response code (EKeyWasConsumed, EKeyWasNotConsumed). 
        */
        virtual TKeyResponse HandleKeyEventL(
            const TKeyEvent& aKeyEvent,TEventCode aType);

    private: //Data
        CCdlExplorerContainer* iAppContainer; 
		CInfo* iInfo;
		CCdlEngineRef* iEngine;
    };

#endif

// End of File
