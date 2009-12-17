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
* Description:  Contains icon configuration information.
*
*/


#ifndef C_AKNSSRVICONCONFIGMAP_H
#define C_AKNSSRVICONCONFIGMAP_H

#include <e32base.h>

/**
 *  Creates map of application UIDs that have configured icons based
 *  on central repository. Skinserver will skip skinning their application
 *  icons.
 *
 *  @lib aknskinsrv.lib
 *  @since S60 3.2
 */
NONSHARABLE_CLASS( CAknsSrvIconConfigMap ): public CBase
    {

public:

    static CAknsSrvIconConfigMap* NewL();   

    virtual ~CAknsSrvIconConfigMap();

    /*
    * Checks if the given application UID has icon configured using CenRep
    * configuration. Icons can be variated by language.
    * 
    * @param aApplicationUid application UID
    * @param aIsConfigured ETrue if icon has been configured, EFalse otherwise.
    */
    void IsIconConfiguredL( TUid aApplicationUid, TBool& aIsConfigured );

private:
    // Deletes icon map.
    void DeleteCurrentIconMap();

    // Reads repository and form icon map.
    void ReadAndParseConfigFileL( CRepository* aRepository );

    // Creates repository, then calls ReadAndParseConfigFileL.
    void CreateAndParseRepositoryL();

    CAknsSrvIconConfigMap();

    void ConstructL();

private: // data

    /**
     * Currently active language.
     */
    TLanguage iCurrentLanguage;

    /**
     * Array of UIDs whose icon has been configured.
     */
    RArray<TInt> iAppUidArray;

    };

#endif // C_AKNSSRVICONCONFIGMAP_H
