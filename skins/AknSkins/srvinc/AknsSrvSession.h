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
* Description:  Skin server session class.
*
*/


#ifndef AKNSSRVSESSION_H
#define AKNSSRVSESSION_H

//  INCLUDES
#include <e32base.h>
#include <e32capability.h>

#include <AknsSrvClient.h>
#include "AknsSkinChangeHandler.h"

// CONSTANTS
const TInt KAknsMaxWpWidth = 3000;
const TInt KAknsMaxWpHeight = 3000;

// FORWARD DECLARATIONS
class CAknsSrv;


// CLASS DECLARATION

/**
* Server-side session.
*/
NONSHARABLE_CLASS(CAknsSrvSession) : public CSession2
    {
    public:

        /**
        * Constructor.
        */
        CAknsSrvSession();

        /**
        * Destructor.
        */
        virtual ~CAknsSrvSession();

    public:

        /**
        * Message dispatcher.
        */
        TInt DispatchMessageL( const RMessage2& aMessage );

    public: // Functions from base classes

        /**
        * From CSharableSession (pure virtual).
        * Handles service request messages from clients.
        *
        * @param aMessage message from client
        */
        void ServiceL(const RMessage2& aMessage);

    public: // New functions

        /**
        * Enables notifications.
        */
        void EnableNotify();

        /**
        * Disables notifications.
        */
        void DisableNotify();

        /**
        * Sets all the item definition sets.
        */
        TInt SetAllItemDefSets( const RMessage2& aMessage );

        /*/
        * Sets the idle wallpaper.
        */
        void SetIdleWallPaperL( const RMessage2& aMessage );

        /**
        *
        *
        * @since 2.8
        */
        void StoreScalableGraphicsL( const RMessage2& aMessage, TBool aMorphing = EFalse );

        /**
        * Handles scalable graphics cleanup request.
        *
        * @param aMessage Currently ignored message parameter.
        *
        * @since 2.8
        */
        void ClearScalableGraphics( const RMessage2& aMessage );

        /**
        * Handles notification acknowledgement.
        *
        * @param aMessage Currently ignored message parameter.
        *
        * @since 2.7
        */
        void AcknowledgeNotification( const RMessage2& aMessage );

        /**
        * Propagates client error notifications.
        */
        void ClientError( const RMessage2& aMessage );

        /**
        * Propagates client notifications.
        */
        TBool EnqueueNotification(
            const TAknsSkinChangeHandlerNotification aType,
            TBool aCountNotifications);

        /**
        * Proceeds to the next event.
        */
        void NextEvent(const RMessage2 aMessage);

        void OpenBitmapFileL( const RMessage2 aMessage );
        void OpenIniFileL( const RMessage2 aMessage );
        void CopySoundFileL(const RMessage2 aMessage );
        void EnumeratePackages( const RMessage2 aMessage );
        void ReceivePackages(const RMessage2 aMessage);
        void DecodeWallpaperImageL(const RMessage2 aMessage);
        void FreeDecodedWallpaper( const RMessage2 aMessage);
        void CacheWallpaperImageL(const RMessage2 aMessage);

        /**
        * Opens ini-file for slideset.
        *
        * @since 3.2
        */
        void OpenImageInifileL( const RMessage2 aMessage);

        /**
        * Checks if the application has repository based icon configuration.
        *
        * @since 5.0
        */
        TBool CheckIconConfiguration( const RMessage2 aMessage );

    private:

        /**
        * Panics the client thread.
        *
        * @param aPanic panic reason
        */
        void PanicClient( const RMessage2& aMessage, TAknSkinSrvPanic aPanic ) const;

        /**
        * Sets the notify handler.
        */
        void SetNotifyHandler( const RMessage2& aMessage );

        /**
        * Returns the server pointer.
        */
        CAknsSrv* Server(); //lint !e1511 Hiding allowed

        /**
        * Cancellation method.
        */
        void Cancel();

    private: // Data

        CAknsSkinChangeHandler* iHandler; // Not owned
        TInt iPendingNotifications;
        RArray<TAknsSkinChangeHandlerNotification> iNotifyList;
        RMessagePtr2 iNotifyRequest;
        TBool iCanceled;
        TBool iCountNotifications;
        TInt iPendingAcks;
    };

#endif // AKNSSRVSESSION_H

// End of File
