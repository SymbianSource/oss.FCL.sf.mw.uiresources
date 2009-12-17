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
* Description:   CAknFileHandleIconManager class.
*
*/



#ifndef AKN_FILE_HANDLE_ICON_MANAGER_H
#define AKN_FILE_HANDLE_ICON_MANAGER_H

// INCLUDES
#include <e32std.h>
#include <fbs.h>
#include "AknIconManager.h"

// CONSTANTS

// CLASS DECLARATION

/**
* class CAknFileHandleIconManager.
* @internal
*/
NONSHARABLE_CLASS(CAknFileHandleIconManager) : public CAknIconManager
	{
    public:  // Constructors and destructor
        
        static CAknFileHandleIconManager* NewL(
            RFile& aFile,
            const TInt16 aBitmapId,
            const TInt16 aMaskId );
        
        /**
        * Destructor.
        */
        ~CAknFileHandleIconManager();

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

    private:    // Private constructors

        CAknFileHandleIconManager();
        
        void ConstructL(
            RFile& aFile,
            const TInt16 aBitmapId,
            const TInt16 aMaskId );

    private:    // Data

        // File handle given by a client is stored here.
        // This class is then responsible for closing the handle.
        RFile iFile;
    };

#endif // AKN_FILE_HANDLE_ICON_MANAGER_H
            
// End of File
