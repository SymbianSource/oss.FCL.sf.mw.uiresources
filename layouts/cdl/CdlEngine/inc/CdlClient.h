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


#ifndef __CDLCLIENT_H__
#define __CDLCLIENT_H__

#include <e32base.h>
#include "CdlClientServerStd.h"

class CCdlUids;
class CCdlRefs;
class CCdlNames;
class TDriveUnit;

/**
* Client side of the client/server.
* This class also adds some higher level functionality over the messages passed
* between client and server.
*/
class RCdlSession : public RSessionBase
	{
public:
	TInt Connect();
	void RequestGetCustL(const CCdlUids& aUids, TInt& aCustSize) const;
	TInt GetCust(TDes8& aCust, TInt& aNewSize) const;
	void SetUidsToNotifyL(const CCdlUids& aUids);
	void NotifyChange(TRequestStatus& aStatus, TPckgBuf<SCdlServerChange>& aChange);
	void CancelNotifyChange() const;
	void SetCustL(const TDesC8& aCust);
	CCdlRefs* FileContentsLC(const TDesC& aName) const;
	CCdlRefs* FindInstancesLC(TUid aCdlUid) const;
	CCdlNames* FindCustomisationFilesLC() const;
	CCdlRefs* AllAvailableRefsLC() const;
	TInt IsPluginInRom(const TDesC& aFileName, TBool& aIsInRom) const;
	TInt PluginDrive(const TDesC& aFileName, TDriveUnit& aDrive) const;
private:
	CCdlRefs* GetRefsLC(TUid aCdlUid, const TDesC& aName, TBool aByUid) const;
	HBufC8* GetTempBufLC(TInt aSize) const;
	};

#endif
