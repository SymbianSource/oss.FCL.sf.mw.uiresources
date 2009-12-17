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


#include "CdlServer.h"

const TInt KCdlSessionMaxBuf = 0x100000; // 1 megabyte limit on IPC transfers

CCdlSession::CCdlSession()
	{
	}

CCdlServer& CCdlSession::Server()
	{
	return *static_cast<CCdlServer*>(const_cast<CServer2*>(CSession2::Server()));
	}

TBool CCdlSession::NotifyPending() const
	{
	return !iNotify.IsNull();
	}

void CCdlSession::CreateL()
//
// 2nd phase construct for sessions - called by the CServer2 framework
//
	{
	Server().AddSession();
	}

CCdlSession::~CCdlSession()
	{
	delete iTempBuf;
	delete iSendingBuf;
	delete iSendingState;
	Server().DropSession();
	}

void CCdlSession::ServiceL(const RMessage2& aMessage)
//
// Handle a client request.
// Leaving is handled by CCdlServer::RunError() which reports the error code
// to the client
//
	{
	switch (aMessage.Function())
		{
		case ECdlServCmdRequestGetCust:
			RequestGetCustL(aMessage);
			break;

		case ECdlServCmdGetCust:
			GetCustL(aMessage);
			break;

		case ECdlServCmdSetUidsToNotify:
			SetUidsToNotifyL(aMessage);
			break;

		case ECdlServCmdNotifyChange:
			NotifyChangeL(aMessage);
			break;

		case ECdlServCmdCancelNotifyChange:
			CancelNotifyChangeL(aMessage);
			break;

		case ECdlServCmdSetCust:
			SetCustL(aMessage);
			break;

		case ECdlServCmdGetRefsSize:
			GetRefsSizeL(aMessage);
			break;

		case ECdlServCmdGetNamesSize:
			GetNamesSizeL(aMessage);
			break;

		case ECdlServCmdGetTempBuf:
			GetTempBufL(aMessage);
			break;

		case ECdlServCmdGetAllRefsSize:
			GetAllRefsSizeL(aMessage);
			break;

		case ECdlServCmdIsPluginInRom:
			IsPluginInRomL(aMessage);
			break;

		case ECdlServCmdPluginDrive:
			PluginDriveL(aMessage);
			break;

		default:
			PanicClient(aMessage,EPanicIllegalFunction);
			break;
		}
	}

void CCdlSession::RequestGetCustL(const RMessage2& aMessage)
	{
	if (iSendingBuf)
		{
		aMessage.Complete(KErrNotReady);
		return;
		}

	// get the uids from the client
	CCdlUids* uids = CCdlUids::NewLC();
	HBufC8* buf = HBufC8::NewMaxLC(ValidIntL(aMessage.Int2(), 0, KCdlSessionMaxBuf));
	TPtr8 ptr = buf->Des();
	aMessage.ReadL(1, ptr);
	uids->ImportL(*buf);
	CleanupStack::PopAndDestroy(buf);

	// get the size of the requested customisation
	delete iSendingState;
	iSendingState = 0;
	delete iSendingBuf;
	iSendingBuf = 0;
	CCdlRefs* sendingState = Server().GetStateLC(*uids);
	iSendingBuf = sendingState->ExportL();
	iSendingState = sendingState;
	TInt size=iSendingBuf->Size();
	CleanupStack::Pop(sendingState);
	CleanupStack::PopAndDestroy(uids);

	// send the size to the client
	TPckg<TInt> sizePckg(size);
	WriteAndComplete(aMessage, 0, sizePckg);
	}

void CCdlSession::GetCustL(const RMessage2& aMessage)
	{
	if (!iSendingBuf)
		{
		PanicClient(aMessage, EPanicNoCustomisationRequested);
		return;
		}

	if (iSendingBuf->Size() > aMessage.Int1())
		{
		TInt size=iSendingBuf->Size();
		TPckg<TInt> sizePckg(size);
		WriteAndComplete(aMessage, 2, sizePckg, KCdlRefsSizeChanged);
		return;
		}

	WriteAndComplete(aMessage, 0, *iSendingBuf);
	delete iSendingBuf;
	iSendingBuf = 0;
	delete iSendingState;
	iSendingState = 0;
	iQueuedCustChange = EFalse;
	}

void CCdlSession::SetUidsToNotifyL(const RMessage2& aMessage)
	{
	HBufC8* buf = HBufC8::NewMaxLC(ValidIntL(aMessage.Int1(), 0, KCdlSessionMaxBuf));
	TPtr8 ptr = buf->Des();
	aMessage.ReadL(0, ptr);
	iUids.ImportL(*buf);
	CleanupStack::PopAndDestroy(buf);
	aMessage.Complete(KErrNone);
	}

void CCdlSession::NotifyChangeL(const RMessage2& aMessage)
	{
	if (NotifyPending())
		PanicClient(aMessage,EPanicNotifyActive);
	else
		iNotify=aMessage;

	if (iQueuedCustChange)
		{
		NotifyCustChangeL();
		}
	else if (iQueuedRefsChange)
		{
		HandleRefsChangeL();
		}
	}

void CCdlSession::CancelNotifyChangeL(const RMessage2& aMessage)
	{
	if (NotifyPending())
		iNotify.Complete(KErrCancel);
	aMessage.Complete(KErrNone);
	}

void CCdlSession::SetCustL(const RMessage2& aMessage)
	{
	CCdlRefs* state = CCdlRefs::NewLC();
	HBufC8* buf = HBufC8::NewMaxLC(ValidIntL(aMessage.Int1(), 0, KCdlSessionMaxBuf));
	TPtr8 ptr = buf->Des();
	aMessage.ReadL(0, ptr);
	state->ImportL(*buf);
	CleanupStack::PopAndDestroy(buf);
	Server().SetStateL(state);
	CleanupStack::PopAndDestroy(state);
	aMessage.Complete(KErrNone);
	}

void CCdlSession::NotifyCustChangeL()
	{
	if (NotifyPending())
		{
		TPckgBuf<SCdlServerChange> change;
		change().iType = SCdlServerChange::EGlobalCustomisation;
		change().iSize = iSendingBuf->Size();
		WriteAndComplete(iNotify, 0, change);
		iQueuedCustChange = EFalse;
		}
	else
		{
		iQueuedCustChange = ETrue;
		}
	}

void CCdlSession::WriteAndComplete(const RMessagePtr2& aMessage, TInt aParam, const TDesC8& aDes, TInt aCode)
	{
	TRAPD(r,aMessage.WriteL(aParam, aDes));
	if (r==KErrNone)
		aMessage.Complete(aCode);
	else
		PanicClient(aMessage, EPanicBadDescriptor);
	}

void CCdlSession::HandleCustChangeL(const CCdlUids& aUids)
	{
	CCdlUids* change = iUids.IntersectionLC(aUids);
	if (change->Count())
		{
		if (iSendingBuf == NULL)
			{
			iSendingState = Server().GetStateLC(*change);
			CleanupStack::Pop(iSendingState);
			iSendingBuf = iSendingState->ExportL();
			NotifyCustChangeL();
			}
		else
			{
			iSendingState->MergeAndReplaceL(*Server().GetStateLC(*change));
			CleanupStack::PopAndDestroy(); // change in state;
			delete iSendingBuf;
			iSendingBuf = 0;
			iSendingBuf = iSendingState->ExportL();
			// don't notify change in state for ongoing transaction
			}
		}

	CleanupStack::PopAndDestroy(change);
	}

void CCdlSession::HandleRefsChangeL()
	{
	if (NotifyPending())
		{
		TPckgBuf<SCdlServerChange> change;
		change().iType = SCdlServerChange::EAvailableRefs;
		WriteAndComplete(iNotify, 0, change);
		iQueuedRefsChange = EFalse;
		}
	else
		{
		iQueuedRefsChange = ETrue;
		}
	}

void CCdlSession::GetRefsSizeL(const RMessage2& aMessage)
	{
	delete iTempBuf;
	iTempBuf = 0;

	if (aMessage.Int1())	// Get by name
		{
		HBufC* buf = HBufC::NewMaxLC(ValidIntL(aMessage.Int2(), 0, KMaxFileName));
		TPtr ptr = buf->Des();
		aMessage.ReadL(1, ptr);
		CCdlRefs* refs = Server().AllRefs().SubsetByNameLC(*buf);
		if (refs->CountRefs() == 0)	// library not found in server, perhaps not scanned yet.
			{
			CCdlRefCollection* contents = Server().FileContentsLC(*buf);
			refs->AppendL(*contents);
			CleanupStack::PopAndDestroy(contents);
			}
		iTempBuf = refs->ExportL();
		CleanupStack::PopAndDestroy(refs);
		CleanupStack::PopAndDestroy(buf);
		}
	else					// Get by UID
		{
		iTempBuf = Server().AllRefs().SubsetByUidLC(TUid::Uid(aMessage.Int3()))->ExportL();
		CleanupStack::PopAndDestroy();		// unnamed CCdlRefs
		}

	// send the size to the client
	TPckgBuf<TInt> sizePckg(iTempBuf->Size());
	WriteAndComplete(aMessage, 0, sizePckg);
	}

void CCdlSession::GetAllRefsSizeL(const RMessage2& aMessage)
	{
	delete iTempBuf;
	iTempBuf = 0;
	iTempBuf = Server().AllRefs().ExportL();

	// send the size to the client
	TPckgBuf<TInt> sizePckg(iTempBuf->Size());
	WriteAndComplete(aMessage, 0, sizePckg);
	}

void CCdlSession::GetNamesSizeL(const RMessage2& aMessage)
	{
	delete iTempBuf;
	iTempBuf = 0;
	iTempBuf = Server().AllRefs().Names().ExportL();

	// send the size to the client
	TPckgBuf<TInt> sizePckg(iTempBuf->Size());
	WriteAndComplete(aMessage, 0, sizePckg);
	}

void CCdlSession::GetTempBufL(const RMessage2& aMessage)
	{
	if (iTempBuf)
		{
		WriteAndComplete(aMessage, 0, *iTempBuf);
		delete iTempBuf;
		iTempBuf = 0;
		}
	else
		{
		// This message can only be used after one of the messages that
		// set up iTempBuf
		PanicClient(aMessage, EPanicBufRequestedWithoutSetup);
		}
	}

void CCdlSession::IsPluginInRomL(const RMessage2& aMessage)
	{
	HBufC* fileBuf = HBufC::NewMaxLC(ValidIntL(aMessage.Int1(), 0, KMaxFileName));
	TPtr filePtr = fileBuf->Des();
	aMessage.ReadL(0, filePtr);

	TPckgBuf<TBool> isInRomPckg(EFalse);
	TInt err = Server().IsPluginInRom(*fileBuf, isInRomPckg());
	CleanupStack::PopAndDestroy(fileBuf);
	
	WriteAndComplete(aMessage, 2, isInRomPckg, err);
	}

void CCdlSession::PluginDriveL(const RMessage2& aMessage)
	{
	HBufC* fileBuf = HBufC::NewMaxLC(ValidIntL(aMessage.Int1(), 0, KMaxFileName));
	TPtr filePtr = fileBuf->Des();
	aMessage.ReadL(0, filePtr);

	TDriveUnit drive;
	TInt err = Server().PluginDrive(*fileBuf, drive);
	CleanupStack::PopAndDestroy(fileBuf);

	aMessage.Complete(err ? err : static_cast<TInt>(drive));
	}

TInt CCdlSession::ValidIntL(TInt aVal, TInt aMin, TInt aMax) const
	{
	if (aVal < aMin || aMax < aVal)
		{
		User::Leave(KErrArgument);
		}
	return aVal;
	}

