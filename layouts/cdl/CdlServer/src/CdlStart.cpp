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

const TInt KShutdownPriority = CActive::EPriorityStandard-1;

CShutdown::CShutdown()
:CTimer(KShutdownPriority)
	{
	CActiveScheduler::Add(this);
	}

void CShutdown::ConstructL()
	{
	CTimer::ConstructL();
	}

void CShutdown::Start()
	{
	After(KCdlShutdownDelay);
	}

void CShutdown::RunL()
	{
	CActiveScheduler::Stop();
	}


///////////////////////

void PanicClient(const RMessagePtr2& aMessage,TCdlPanic aPanic)
//
// RMessage::Panic() also completes the message. This is:
// (a) important for efficient cleanup within the kernel
// (b) a problem if the message is completed a second time
//
	{
	_LIT(KPanic,"CdlServer");
	aMessage.Panic(KPanic,aPanic);
	}

void Panic(TCdlPanic aPanic)
	{
	User::Panic(KCdlServerName(), aPanic);
	}

static void RunServerL()
//
// Perform all server initialisation, in particular creation of the
// scheduler and server and then run the scheduler
//
	{
	//
	// naming the server thread after the server helps to debug panics
	User::LeaveIfError(User::RenameThread(KCdlServerName));
	// create and install the active scheduler we need
	CActiveScheduler* s=new(ELeave) CActiveScheduler;
	CleanupStack::PushL(s);
	CActiveScheduler::Install(s);
	//
	// create the server (leave it on the cleanup stack)
	(void)CCdlServer::NewLC();
	//
	// Initialisation complete, now signal the client
#ifdef __CDLSERVER_NO_PROCESSES__
	RThread::Rendezvous(KErrNone);
#else
	RProcess::Rendezvous(KErrNone);
#endif
	//
	// Ready to run
	CActiveScheduler::Start();
	//
	// Cleanup the server and scheduler
	CleanupStack::PopAndDestroy(2);
	}

TInt E32Main()
//
// Server process entry-point
//
	{
	__UHEAP_MARK;
	//
	CTrapCleanup* cleanup=CTrapCleanup::New();
	TInt r=KErrNoMemory;
	if (cleanup)
		{
		TRAP(r,RunServerL());
		delete cleanup;
		}
	//
	__UHEAP_MARKEND;
	return r;
	}


#ifdef __CDLSERVER_NO_PROCESSES__

// The server binary is an "EPOCEXE" target type
// Thus the server parameter passing and startup code for WINS and EPOC are
// significantly different.
//
// In EKA1 WINS, the EPOCEXE target is a DLL with an entry point called WinsMain,
// taking no parameters and returning TInt. This is not really valid as a thread
// function which takes a TAny* parameter which we need.
//
// So the DLL entry-point WinsMain() is used to return a TInt representing the
// real thread function within the DLL. This is good as long as
// sizeof(TInt)>=sizeof(TThreadFunction).
//

static TInt ThreadFunction(TAny*)
//
// WINS thread entry-point function.
//
	{
	return E32Main();
	}

IMPORT_C TInt WinsMain();
EXPORT_C TInt WinsMain()
//
// WINS DLL entry-point. Just return the real thread function 
// cast to TInt
//
	{
	return reinterpret_cast<TInt>(&ThreadFunction);
	}

TInt E32Dll(TDllReason)
	{
	return KErrNone;
	}

#endif

