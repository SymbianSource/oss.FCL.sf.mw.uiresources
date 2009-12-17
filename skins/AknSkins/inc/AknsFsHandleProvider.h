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
* Description:  File handle provider.
*
*/

#ifndef __AKNSFSHANDLEPROVIDER__H__
#define __AKNSFSHANDLEPROVIDER__H__

#include <AknIconUtils.h>

class RAknsSrvSession;

NONSHARABLE_CLASS( CAknsFsHandleProvider ) : public CBase, public MAknIconFileProvider
{
public:
    static CAknsFsHandleProvider* NewL(RAknsSrvSession* aSkinSrvSession, const TDesC& aFilename);
    ~CAknsFsHandleProvider();

protected:
    CAknsFsHandleProvider(RAknsSrvSession* aSkinSrvSession);
    void ConstructL(const TDesC& aFilename);
    void RetrieveIconFileHandleL(RFile& aFile, const TIconFileType aType );
    void Finished();

private:
    RAknsSrvSession* iSkinSrvSession;
    HBufC* iFilename;
    };


#endif
