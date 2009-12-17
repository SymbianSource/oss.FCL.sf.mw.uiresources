/*
* Copyright (c) 2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  test aknpictographinterface.h
                      akniconsrvclient.h
                      akniconutils.h
                      akninternaliconutils.h
*
*/



#include "akniconutilsext.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestIconProvider::RetrieveIconFileHandleL
// -----------------------------------------------------------------------------
//
void CTestIconProvider::RetrieveIconFileHandleL( RFile& aFile, const TIconFileType aType )
    {
    if ( !iEnv )
        {
        iEnv = CEikonEnv::Static();
        }
    RFs& tempFs = iEnv->FsSession();
    if ( aType == EMbmFile )
        {
        User::LeaveIfError( aFile.Open( tempFs, AknIconUtils::AvkonIconFileName(),
            EFileShareReadersOnly ) );
        }
    else
        {
        _LIT( KMifFileName, "z:\\resource\\apps\\avkon2.mif" );
        User::LeaveIfError( aFile.Open( tempFs, KMifFileName, EFileShareReadersOnly ) );
        }
    }

// -----------------------------------------------------------------------------
// CTestIconProvider::Finished
// -----------------------------------------------------------------------------
//
void CTestIconProvider::Finished()
    {
    }

// -----------------------------------------------------------------------------
// CTestIconObserver::BitmapChanged
// -----------------------------------------------------------------------------
//
void CTestIconObserver::BitmapChanged( CFbsBitmap* /*aBitmap*/ )
    {
    }

