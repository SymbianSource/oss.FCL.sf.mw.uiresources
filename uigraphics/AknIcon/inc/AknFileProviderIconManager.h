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
* Description:   CAknFileProviderIconManager class.
*
*/



#ifndef AKN_FILE_PROVIDER_ICON_MANAGER_H
#define AKN_FILE_PROVIDER_ICON_MANAGER_H

// INCLUDES
#include <e32std.h>
#include <fbs.h>
#include "AknIconManager.h"

// CONSTANTS

// CLASS DECLARATION

/**
* class CAknFileProviderIconManager.
* @internal
*/
NONSHARABLE_CLASS(CAknFileProviderIconManager) : public CAknIconManager
	{
    public:  // Constructors and destructor
        
        static CAknFileProviderIconManager* NewL(
            MAknIconFileProvider& aFile,
            const TInt16 aBitmapId,
            const TInt16 aMaskId );
        
        /**
        * Destructor.
        */
        ~CAknFileProviderIconManager();

    private: // From CAknIconManager

        /**
        * Virtual method.
        * Loads a bitmap icon.
        */
        void LoadBitmapIconL();

        /**
        * Virtual method.
        * Returns opened file handle to the icon file,
        * if such is supplied by the client.
        */
        RFile* FileHandleL( MAknIconFileProvider::TIconFileType aType );

        /**
        * Virtual method.        
        * This is called, when the file handle is no longer required,
        * and should be closed.
        */
        void ReleaseFileHandle();

    private: // Private constructors

        CAknFileProviderIconManager(
            MAknIconFileProvider& aFile,
            const TInt16 aBitmapId,
            const TInt16 aMaskId );

        void ConstructL();

    private:    // Data

        // Icon file provider implemented by the client.
        // This class is responsible for calling MAknIconFileProvider::Finished,
        // when the provider is not accessed any more, and can be deleted by the client.
        MAknIconFileProvider& iFileProvider;

        // File handle provided by the provider is stored here during its usage.
        RFile iFile;
        // Information of which file type is currently opened in iFile;
        TInt iFileType;
    };

#endif // AKN_FILE_PROVIDER_ICON_MANAGER_H
            
// End of File
