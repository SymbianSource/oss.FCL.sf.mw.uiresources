/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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




#ifndef AKN_ICON_SRV_SESSION_H
#define AKN_ICON_SRV_SESSION_H

//  INCLUDES

#include <e32base.h>
#include "AknIconPanic.h"
#include "AknIconSrvDef.h"

// FORWARD DECLARATIONS
class CAknIconServer;
class CAknIconSrvIconItem;

// CLASS DECLARATION

/**
*  This class represents a session in the server.
*  Functions are provided to respond appropriately to client messages.
*/

NONSHARABLE_CLASS(CAknIconSrvSession) : public CSession2
    {
    public:  // Constructors and destructor
  
        /**
        * C++ default constructor.
        */
        CAknIconSrvSession();

        /**
        * Destructor.
        */
        virtual ~CAknIconSrvSession();

    public: // New functions

    public: // From CSharableSession

        void ServiceL( const RMessage2& aMessage );
        
        RFile& AdoptedFileHandle();

        /**
         * @fn      SetClientPanicCode
         *          sets the panic code, which will be used in panicing the client
         * @param   aPanicCode  This panic code to set
         * @see     TAknIconPanic
         */
        void SetClientPanicCode(TAknIconPanic aPanicCode);

    private:    // New Functions

        /**
        * Handles a client request; tests the opcode and gives
        * service according to that.
        *
        * @param aMessage service request message from client
        * 
        * Leaves if:
        * - a service routine leaves
        */
        TInt DispatchMessageL( const RMessage2& aMessage );

        /**
        * Below are handlers for different services.
        * They get the parameters from client message and
        * call the desired service routine.
        * 
        * They also do the necessary inter-thread data transfers.
        * 
        * Leave if:
        * - a service routine leaves
        *
        * Leaves are trapped by ServiceL() which returns the
        * errorcode to the client.
        */

        /**
        * Server down-cast.
        */
        inline CAknIconServer* Server();

        /**
        * Panics the client thread
        * @param aPanic panic reason
        */      
        void PanicClient( const RMessage2& aMessage, TAknIconPanic aPanic ) const;

        void ModifyUserCount( 
            const CAknIconSrvIconItem* aItem,
            TInt aCount );

        void ModifyUserCount(
            const CAknIconDataItem* aItem,
            TInt aCount );

    private:    // Data
        
        // Information of which icons this session is referring to.
        // Needed for cleanup purposes in e.g. client thread panic case.
        RArray<TAknIconSrvSessionIconItem> iIconItems;

        // Information of which icon data this session has preserved.
        // Needed for cleanup purposes in e.g. client thread panic case.
        RArray<TAknIconSrvSessionPreservedItem> iPreservedItems;
        
        // File handle adopted from the client side.
        // It is adopted in the beginning of the service request
        // and always closed after the service request.
        RFile iAdoptedFile;

        //! Code to use while panicking the client
        TAknIconPanic iClientPanicCode;
        
#ifdef _DEBUG
        TInt iDbgHeapFailNextCount; // for heap testing
#endif // _DEBUG
    };

    #include "AknIconSrvSession.inl"

#endif      // AKN_ICON_SRV_SESSION_H   
            
// End of File
