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
* Description:
*
*/


// INCLUDE FILES
#include "CdlExplorerAppUi.h"
#include "CdlExplorerContainer.h" 
#include <cdlexplorer.rsg>
#include "cdlexplorer.hrh"
#include <eikmenup.h>
#include "CdlExplorable.h"

#include <avkon.hrh>

// ================= MEMBER FUNCTIONS =======================
//
// ----------------------------------------------------------
// CCdlExplorerAppUi::ConstructL()
// ?implementation_description
// ----------------------------------------------------------
//
void CCdlExplorerAppUi::ConstructL()
    {
    BaseConstructL(EAknEnableSkin);
	iEngine = CdlEngine::CreateCdlEngineL();
	iInfo = new(ELeave) CInfo;
	iInfo->ConstructL();
    iAppContainer = new (ELeave) CCdlExplorerContainer;
    iAppContainer->SetMopParent(this);
    iAppContainer->ConstructL( ClientRect() );
    AddToStackL( iAppContainer );
    }

// ----------------------------------------------------
// CCdlExplorerAppUi::~CCdlExplorerAppUi()
// Destructor
// Frees reserved resources
// ----------------------------------------------------
//
CCdlExplorerAppUi::~CCdlExplorerAppUi()
    {
    if (iAppContainer)
        {
        RemoveFromStack( iAppContainer );
        delete iAppContainer;
        }
	delete iInfo;
	delete iEngine;
    }

// ------------------------------------------------------------------------------
// CCdlExplorerAppUi::::DynInitMenuPaneL(TInt aResourceId,CEikMenuPane* aMenuPane)
//  This function is called by the EIKON framework just before it displays
//  a menu pane. Its default implementation is empty, and by overriding it,
//  the application can set the state of menu items dynamically according
//  to the state of application data.
// ------------------------------------------------------------------------------
//
void CCdlExplorerAppUi::DynInitMenuPaneL(TInt aResourceId,CEikMenuPane* aMenuPane)
    {
	if (aResourceId == R_CDLEXPLORER_MENU)
		{
        aMenuPane->SetItemDimmed(ECdlExplorerCmdAppOpen,!iAppContainer->CanOpen());
        aMenuPane->SetItemDimmed(ECdlExplorerCmdAppOpen,!iAppContainer->CanBeApplied());
		}
    }

// ----------------------------------------------------
// CCdlExplorerAppUi::HandleKeyEventL(
//     const TKeyEvent& aKeyEvent,TEventCode /*aType*/)
// ?implementation_description
// ----------------------------------------------------
//
TKeyResponse CCdlExplorerAppUi::HandleKeyEventL(
    const TKeyEvent& /*aKeyEvent*/,TEventCode /*aType*/)
    {
    return EKeyWasNotConsumed;
    }

// ----------------------------------------------------
// CCdlExplorerAppUi::HandleCommandL(TInt aCommand)
// ?implementation_description
// ----------------------------------------------------
//
void CCdlExplorerAppUi::HandleCommandL(TInt aCommand)
    {
    switch ( aCommand )
        {
        case EAknSoftkeyBack:
			{
			if (iAppContainer->CanGoBack())
				iAppContainer->BackL();
			else
				Exit();
			break;
			}

        case EEikCmdExit:
            {
            Exit();
            break;
            }

		case ECdlExplorerCmdAppOpen:
            {
			iAppContainer->OpenL();
            break;
            }

		case ECdlExplorerCmdAppProperties:
            {
			iAppContainer->PropertiesL();
            break;
            }

		case ECdlExplorerCmdAppDllView:
            {
			CCdlExplorableLibs* libs = new(ELeave) CCdlExplorableLibs;
			CleanupStack::PushL(libs);
			libs->OpenL();
			iAppContainer->SetRootL(libs);
			CleanupStack::Pop(libs);
            break;
            }

		case ECdlExplorerCmdAppUserPackageView:
            {
			CCdlExplorable* pckgs = MakeUserPackagesExplorableLC();
			pckgs->OpenL();
			iAppContainer->SetRootL(pckgs);
			CleanupStack::Pop(pckgs);
            break;
            }

		case ECdlExplorerCmdAppApplyStandAlone:
            {
			iAppContainer->ApplyStandAloneL();
            break;
            }

		case ECdlExplorerCmdAppApplyLayer:
            {
			iAppContainer->ApplyLayerL();
            break;
            }

		case ECdlExplorerCmdAppInterfaceView:
			{
			CCdlExplorable* pckgs = MakeInterfacesExplorableLC();
			pckgs->OpenL();
			iAppContainer->SetRootL(pckgs);
			CleanupStack::Pop(pckgs);
            break;
			}

		case ECdlExplorerCmdAppGlobalCustsView:
			{
			CCdlExplorable* pckgs = MakeGlobalCustsExplorableLC();
			pckgs->OpenL();
			iAppContainer->SetRootL(pckgs);
			CleanupStack::Pop(pckgs);
            break;
			}

        default:
            break;      
        }
    }


CInfo::CInfo()
: iInterfaces(4)
	{
	}

CInfo::~CInfo()
	{
	iInterfaces.ResetAndDestroy();
	delete iAllRefs;
	}

void CInfo::ConstructL()
	{
	HandleAvailableRefsChangeL();
	CdlEngine::SetAvailableRefsChangeObserverL(this);
	}

TInt CInfo::CountInterfaces() const
	{
	return iInterfaces.Count();
	}

const SCdlInterface& CInfo::Interface(TInt aIndex) const
	{
	return iInterfaces[aIndex]->Interface();
	}

TInt CInfo::FindInterfaceIndex(const SCdlInterface& aInterface) const
	{
	TInt count = CountInterfaces();
	for (TInt ii=0; ii<count; ii++)
		{
		const SCdlInterface& iface = Interface(ii);
		if (iface.iUid == aInterface.iUid && 
			iface.iMajorVer == aInterface.iMajorVer &&
			iface.iMinorVer == aInterface.iMinorVer)
			return ii;
		}
	return KErrNotFound;
	}

TInt CInfo::FindInterfaceIndex(TUid aUid) const
	{
	TInt count = CountInterfaces();
	for (TInt ii=0; ii<count; ii++)
		{
		const SCdlInterface& iface = Interface(ii);
		if (iface.iUid == aUid)
			return ii;
		}
	return KErrNotFound;
	}

void CInfo::HandleAvailableRefsChangeL()
	{
	CCdlRefs* newRefs = CdlEngine::AllAvailableRefsLC();
	delete iAllRefs;
	iAllRefs = newRefs;
	CleanupStack::Pop(newRefs);

	TInt count = iAllRefs->CountRefs();
	TInt ii;
	for (ii=0; ii<count; ii++)
		{
		TUid uid = iAllRefs->Ref(ii).iUid;
		SCdlInterface iface = { 0,0,0,{uid.iUid},0,0,0,0 };
		CCdlInstance* inst = 0;
		TRAPD(err, inst = CCdlInstance::NewL(iAllRefs->Ref(ii), &iface));
		if (err == KErrNone)
			{
			if (FindInterfaceIndex(inst->Interface()) == KErrNotFound)
				{
				CleanupStack::PushL(inst);
				iInterfaces.AppendL(inst);
				CleanupStack::Pop(inst);
				iUids.AddL(inst->Interface().iUid);
				}
			else
				{
				delete inst;
				}
			}
		}

	CdlEngine::EnableGlobalCustomisationL(iUids, ETrue);
	}

const TDesC* CInfo::InterfaceName(TUid aUid) const 
	{
	_LIT(KUnknown, "unknown");
	TInt pos = FindInterfaceIndex(aUid);
	if (pos != KErrNotFound)
		return Interface(pos).iName;
	else
		return LIT_AS_DESC_PTR(KUnknown);
	}


// End of File  
