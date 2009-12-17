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
*
*/

#ifdef PRECACHE2
#ifndef AKN_ICON_SRV_PRECACHER2_H
#define AKN_ICON_SRV_PRECACHER2_H

//  INCLUDES
#include <e32base.h>
#include <f32file.h> 
#include <AknsSrvClient.h>



// CONSTANTS

// FORWARD DECLARATIONS
class CAknIconLoader;
class CAknIconServer;
class CAknSvgFormatHandler;

#define KPreCache2Priority EPriorityAbsoluteVeryLow

/**
* Precacher for predefined cache items
*/
NONSHARABLE_CLASS(CAknIconSrvPrecacher) : public CBase
    { 
    public:  // Constructors and destructor
        
        /**
             * @Purpose: 2 Phase Constructor
             * @Version
             * @parameter: AknIconServer
             * @return: None
        */
        CAknIconSrvPrecacher(CAknIconServer& aServer );
        
        /**
             * @Purpose: 2 Phase Constructor
             * @Version
             * @parameter: AknIconServer
             * @return: object of type CAknIconSrvPrecacher
        */
        static CAknIconSrvPrecacher* NewL( CAknIconServer& aServer );

        /**
             * @Purpose: Destructor
             * @Version
             * @parameter: None
             * @return: None
        */
        ~CAknIconSrvPrecacher();

        /**
             * @Purpose: 2 Phase Constructor
             * @Version
             * @parameter: None
             * @return: None
        */
        void ConstructL();

    public:  // New methods
        /**
             * @Purpose: Initiation of reading from resource
             * @Version
             * @parameter: None
             * @return: None
        */
        void Start();

        /**
             * @Purpose: Reads all the precached items
             * @Version
             * @parameter: resource reader
             * @return: None
        */
        TInt ReadPrecacheItemsL(TResourceReader& aReader);
        

    private:
        /**
             * @Purpose: Processes each entry in the resource array
             * @Version
             * @parameter: resource reader & lookup
             * @return: None
        */
        void ProcessEntryL(CAknsSrvChunkLookup* lookup, TResourceReader& aReader);
        HBufC8* SetupL();
        
    private:
        RFs iFs;
        CAknIconServer& iServer;
        RAknsSrvSession iSkinSession;
        CAknIconLoader* iLoader;
        CAknSvgFormatHandler* iSvgFormatHandler;
        TFileName iCurrentFileName;
    };

#endif
#endif
