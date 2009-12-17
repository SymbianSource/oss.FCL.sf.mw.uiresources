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
#include "CdlExplorerContainer.h"

#include <eiklabel.h>  // for example label control
#include <aknlists.h>
#include <AknMessageQueryDialog.h>
#include <cdlexplorer.rsg>
#include <akntitle.h>
#include "CdlExplorable.h"

// ================= MEMBER FUNCTIONS =======================

CCdlExplorerContainer::CCdlExplorerContainer()
: iStack(4)
	{
	}

// ---------------------------------------------------------
// CCdlExplorerContainer::ConstructL(const TRect& aRect)
// EPOC two phased constructor
// ---------------------------------------------------------
//
void CCdlExplorerContainer::ConstructL(const TRect& aRect)
    {
	CEikStatusPane *sp = ((CAknAppUi*)iEikonEnv->EikAppUi())->StatusPane();
	iTitlePane = (CAknTitlePane *)sp->ControlL(TUid::Uid(EEikStatusPaneUidTitle));
	iAppTitle = iTitlePane->Text()->AllocL();

    CreateWindowL();

	iListBox = new (ELeave) CAknSingleStyleListBox();

    iListBox->SetContainerWindowL(*this);
    iListBox->ConstructL(this, EAknListBoxLoopScrolling);

	CCdlExplorableLibs* libs = new(ELeave) CCdlExplorableLibs;
	CleanupStack::PushL(libs);
	libs->OpenL();
	PushViewL(libs);
	CleanupStack::Pop(libs);

    iListBox->Model()->SetOwnershipType(ELbmDoesNotOwnItemArray);
    iListBox->SetListBoxObserver(this);
    iListBox->CreateScrollBarFrameL(ETrue);
    iListBox->ScrollBarFrame()->SetScrollBarVisibilityL(CEikScrollBarFrame::EOff, CEikScrollBarFrame::EAuto);

    SetRect(aRect);
    ActivateL();
    }

// Destructor
CCdlExplorerContainer::~CCdlExplorerContainer()
    {
    delete iListBox;
	delete iStack[0].iExplorable;
	delete iAppTitle;
    }

// ---------------------------------------------------------
// CCdlExplorerContainer::SizeChanged()
// Called by framework when the view size is changed
// ---------------------------------------------------------
//
void CCdlExplorerContainer::SizeChanged()
    {
	iListBox->SetRect(Rect());
    }

// ---------------------------------------------------------
// CCdlExplorerContainer::CountComponentControls() const
// ---------------------------------------------------------
//
TInt CCdlExplorerContainer::CountComponentControls() const
    {
    return 1; // return nbr of controls inside this container
    }

// ---------------------------------------------------------
// CCdlExplorerContainer::ComponentControl(TInt aIndex) const
// ---------------------------------------------------------
//
CCoeControl* CCdlExplorerContainer::ComponentControl(TInt /*aIndex*/) const
    {
	return iListBox;
    }

// ---------------------------------------------------------
// CCdlExplorerContainer::HandleControlEventL(
//     CCoeControl* aControl,TCoeEvent aEventType)
// ---------------------------------------------------------
//
void CCdlExplorerContainer::HandleControlEventL(
    CCoeControl* /*aControl*/,TCoeEvent /*aEventType*/)
    {
    // TODO: Add your control event handler code here
    }

void CCdlExplorerContainer::HandleListBoxEventL(CEikListBox* /*aListBox*/, TListBoxEvent aEventType)
	{
    if (aEventType == EEventEnterKeyPressed)
		{
		CCdlExplorable* selected = CurrentSelected();
		if (selected)
			{
			if (selected->CanOpen())
				OpenL();
			else
				PropertiesL();
			}
		}
	}

void CCdlExplorerContainer::SetRootL(CCdlExplorable* aExplorable)
	{
	delete iStack[0].iExplorable;
	iStack[0].iExplorable = NULL;
	iStack.Reset();
	PushViewL(aExplorable);
	DrawNow();
	}

void CCdlExplorerContainer::PushViewL(CCdlExplorable* aExplorable)
	{
	aExplorable->SetView(this);
	SStackCell cell = {aExplorable, 0};
	iStack.AppendL(cell);
	SetListBoxArrayL();
	}

TKeyResponse CCdlExplorerContainer::OfferKeyEventL(const TKeyEvent& aKeyEvent,TEventCode aType)
	{
	return iListBox->OfferKeyEventL(aKeyEvent, aType);
	}

TBool CCdlExplorerContainer::CanGoBack() const
	{
	return iStack.Count() > 1;
	}

void CCdlExplorerContainer::BackL()
	{
	iStack.Delete(iStack.Count()-1);
	SetListBoxArrayL();
	DrawNow();
	}

void CCdlExplorerContainer::SetListBoxArrayL()
	{
	SStackCell& cell = iStack[iStack.Count()-1];
	iAdaptor.SetArray(cell.iExplorable);
    iListBox->Model()->SetItemTextArray(&iAdaptor);
    iListBox->HandleItemRemovalL();
    iListBox->HandleItemAdditionL();
	iListBox->SetCurrentItemIndex(cell.iListPos);

	TBuf<256> buf;
	buf.Format(_L("%S\n%S"), iAppTitle, &cell.iExplorable->Name());
	iTitlePane->SetTextL(buf);
	}

void CCdlExplorerContainer::HandleListBoxContentChangeL(MDesCArray* aList)
	{
	if (iAdaptor.Array() != aList)
		return;

	TInt curPos = iListBox->CurrentItemIndex();
    iListBox->HandleItemRemovalL();
    iListBox->HandleItemAdditionL();
	TInt max = iStack[iStack.Count()-1].iExplorable->Count()-1;
	if (max>=0 && curPos>max)
		iListBox->SetCurrentItemIndex(max);
	DrawNow();
	}

void CCdlExplorerContainer::HandleChangeL(CCdlExplorable* aExplorable)
	{
	TInt found = EFalse;
	for (TInt ii=0; ii<iStack.Count(); ii++)
		{
		if (found)
			iStack.Delete(ii--);
		else if (iStack[ii].iExplorable == aExplorable)
			found = ETrue;
		}
	SetListBoxArrayL();
	}

TBool CCdlExplorerContainer::CanOpen()
	{
	CCdlExplorable* selected = CurrentSelected();
	return selected && selected->CanOpen();
	}

CCdlExplorable* CCdlExplorerContainer::CurrentSelected()
	{
	SStackCell& current = iStack[iStack.Count()-1];
	current.iListPos = iListBox->CurrentItemIndex();
	if (current.iListPos >= 0)
		return current.iExplorable->At(current.iListPos);
	else
		return NULL;
	}

void CCdlExplorerContainer::OpenL()
	{
	CCdlExplorable* selected = CurrentSelected();
	if (selected && selected->CanOpen())
		{
		if (!selected->Count())
			selected->OpenL();
		PushViewL(selected);
		DrawNow();
		}
	}

void CCdlExplorerContainer::PropertiesL()
	{
	CCdlExplorable* selected = CurrentSelected();
	if (selected)
		{
		TBuf<256> buf;
		selected->Properties(buf);
		CAknMessageQueryDialog* dialog = new (ELeave) CAknMessageQueryDialog;
		dialog->SetMessageTextL(buf);
		dialog->ExecuteLD(R_PROPERTIES_MESSAGE_QUERY);
		}
	}

TBool CCdlExplorerContainer::CanBeApplied()
	{
	CCdlExplorable* selected = CurrentSelected();
	return selected && selected->CanBeApplied();
	}

void CCdlExplorerContainer::ApplyStandAloneL()
	{
	CCdlExplorable* selected = CurrentSelected();
	if (selected)
		selected->ApplyStandAloneL();
	}

void CCdlExplorerContainer::ApplyLayerL()
	{
	CCdlExplorable* selected = CurrentSelected();
	if (selected)
		selected->ApplyLayerL();
	}



void CCdlExplorerContainer::TAnnoyingAknListboxModelAdaptor::SetArray(const MDesCArray* aArray)
	{
	iArray = aArray;
	}

const MDesCArray* CCdlExplorerContainer::TAnnoyingAknListboxModelAdaptor::Array() const
	{
	return iArray;
	}

TInt CCdlExplorerContainer::TAnnoyingAknListboxModelAdaptor::MdcaCount() const
	{
	return iArray->MdcaCount();
	}

TPtrC16 CCdlExplorerContainer::TAnnoyingAknListboxModelAdaptor::MdcaPoint(TInt aIndex) const
	{
	TPtrC text(iArray->MdcaPoint(aIndex));
	iBuf.Format(_L("\t%S"), &text);
	return iBuf;
	}




// End of File  
