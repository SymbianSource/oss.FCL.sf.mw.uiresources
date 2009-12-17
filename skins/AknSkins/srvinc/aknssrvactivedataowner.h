/*
* Copyright (c) 2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Skin server's active data owner in backup/restore.
*
*/


#ifndef C_AKNSSRVACTIVEDATAOWNER_H
#define C_AKNSSRVACTIVEDATAOWNER_H

#include <e32property.h>
#include <e32std.h>
#include <connect/abclient.h>

class CAknsSrvActiveBackupDataClient;
class CActiveBackupClient;

/**
 *  Skin server's active data owner in backup/restore.
 *
 *  Listens for PS key to know when to order active data owner to 
 *  backup/restore data.
 *
 *  @lib AknsSkinSrv.lib
 *  @since S60 v3.1
 */
NONSHARABLE_CLASS( CAknsSrvActiveDataOwner ) : public CActive
    {
public:

    static CAknsSrvActiveDataOwner* NewL( RFs& aFsSession );

    virtual ~CAknsSrvActiveDataOwner();

// from base class CActive
    void RunL();
    TInt RunError( TInt aError );
    void DoCancel();

private:

    // Handles changes in backup state.
    void HandleBackupStateL( const TInt aValue );

    // Subsribes notifications of backup/restore p&s key.
    void SubscribePSKey();

    CAknsSrvActiveDataOwner( RFs& aFsSession );

private: // data

    /**
     * Callback interface for skinserver's active data owner.
     * Own.
     */
    CAknsSrvActiveBackupDataClient* iCallBack;
    
    /**
     * Active backup client.
     * Own.
     */
    conn::CActiveBackupClient* iActiveBackupClient;
    
    /**
     * Property to listen to.
     */
    RProperty iBackupProperty;

    /**
     * File system session (shared by AknSrv).
     */
    RFs& iFsSession;

    };

#endif // C_AKNSSRVACTIVEDATAOWNER_H

