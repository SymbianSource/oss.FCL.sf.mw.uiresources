/*
* Copyright (c) 2002 - 2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  scalable_icons_api
*
*/

#ifndef C_TESTPUBSCALABLEICONSMIFPROVIDER_H
#define C_TESTPUBSCALABLEICONSMIFPROVIDER_H

// INCLUDES
#include <akniconutils.h>
#include <akniconobserver.h>

class RAknsSrvSession;

// CLASS DECLARATION

/**
 *  Ctestpubscalableiconsmifprovider
 * 
 */
class CTestPubScalableIconsMifProvider : public CBase, public MAknIconFileProvider
    {
public:
    static CTestPubScalableIconsMifProvider* NewL( 
            RAknsSrvSession* aSkinSrvSession, const TDesC& aFilename );
    ~CTestPubScalableIconsMifProvider();

protected:
    CTestPubScalableIconsMifProvider( RAknsSrvSession* aSkinSrvSession );
    void ConstructL(const TDesC& aFilename);
    void RetrieveIconFileHandleL(RFile& aFile, const TIconFileType aType );
    void Finished();

private:
    RAknsSrvSession* iSkinSrvSession;
    HBufC* iFilename;

    };

class CAknIconObserver: public CBase, public MAknIconObserver
    {
public:
    CAknIconObserver();
    
public: // from MAknIconObserver
    
    void BitmapChanged(CFbsBitmap *aBitmap);
    };

#endif // C_TESTPUBSCALABLEICONSMIFPROVIDER_H
