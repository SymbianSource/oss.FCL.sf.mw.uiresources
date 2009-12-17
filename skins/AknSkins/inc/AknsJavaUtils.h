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
* Description:  Defines a internal static utility class AknsJavaUtils.
*
*/


#ifndef AKNSJAVAUTILS_H
#define AKNSJAVAUTILS_H

//  INCLUDES
#include <e32base.h>
#include <AknIconUtils.h>

// FORWARD DECLARATIONS
class CFbsBitmap;
class RApaLsSession;

// TYPE DEFINITIONS

// CLASS DECLARATION

/**
* Static utility class to support creating scalable Java midlet icons.
*
* This is an internal class.
* The class is not intended for derivation outside the library.
*
* @lib AknSkins.lib
*
* @since 3.2
*/
NONSHARABLE_CLASS( AknsJavaUtils)
    {

    public: // New functions
        /**
        * Creates an independent (in terms of instance ownership) copy of a
        * masked bitmap by the given bitmap and mask ID.
        *
        *
        * @since 3.2
        *
        * @lib AknSkins.lib
        *
        * @param aApaSession ApaSession (caller owns).
        *
        * @param aAppUid Application UID. Identifies the Java icon .mif file.
        *
        *
        * @param aBitmap If method succeeds, set to point to the
        *   newly constructed bitmap. Ownership of the bitmap is transferred
        *   to the caller.
        *
        * @param aMask If method succeeds, set to point to the newly
        *   constructed mask bitmap. Ownership of the bitmap is transferred
        *   to the caller.
        *
        * @param aFileBitmapId ID of the bitmap in the file.
        *
        * @param aFileMaskId ID of the mask in the file.
        *
        * @par Exceptions:
        *   If data construction fails or bitmap is not found, the function
        *   leaves with an error code.
        */
        static void CreateIconLC(
            RApaLsSession& aApaSession,
            TUid aAppUid,
            CFbsBitmap*& aBitmap, CFbsBitmap*& aMask,
            TInt aFileBitmapId, TInt aFileMaskId );

        /**
        * Returns if the aIconFilename is java icon file name or not.
        *
        * @since 3.2
        *
        * @param aIconFilename icon file name.
        *
        * @return ETrue if aIconFilename is java icon otherwise EFalse.
        *
        * @internal
        */
        static TBool IsJavaIcon(const TDesC& aIconFilename);

    private:

    NONSHARABLE_CLASS( CJavaIconFileProvider): public CBase, public MAknIconFileProvider
        {

        public: // Constructors and destructor

            /**
             * Two-phased constructor.
             */
            static CJavaIconFileProvider* NewL( RApaLsSession& aApaSession, TUid aAppUid);

            virtual ~CJavaIconFileProvider() {}


        private: // Constructor

        /**
         * C++ default constructor.
         */
        CJavaIconFileProvider();

        CJavaIconFileProvider(RApaLsSession& aApaSession, TUid aAppUid):
                    iApaSession(aApaSession), iAppUid(aAppUid){}

        private: // From CAknIconManager
        /**
        * Returns an open file handle to the icon file.
        * This method should leave if an icon file with specified type does
        * not exist. That may be the case e.g. with MBM file,
        * if there are no bitmap icons.
        *
        * Note! RFs::ShareProtected must be called to the RFs instance used
        * for opening the file.
        *
        * @param aFile Icon file should be opened in this file handle, which
        * is an empty file handle, when the AknIcon framework calls this method.
        * The AknIcon framework takes care of closing the file handle after
        * having used it.
        * @param aType Icon file type.
        */
        void RetrieveIconFileHandleL(RFile& aFile, const TIconFileType aType );

        /**
        * With this method, AknIcon framework informs that it does not use
        * this MAknIconFileProvider instance any more. After this call,
        * it is ok to delete the object. This can be implemented simply
        * e.g. by deleting self in this callback.
        * Normally, this callback is invoked when the icon in question
        * is deleted.
        * Note, however, that if the same MAknIconFileProvider instance is
        * supplied in multiple CreateIcon calls, then it must be accessible
        * by AknIcon framework until it has signalled a matching amount
        * of these callbacks.
        */
        void Finished();

        private:
            TUid iAppUid; // UID of Java Midlet
            RApaLsSession& iApaSession; // ApaSession not owned
        };

    private: // Prohibited constructors and destructor

        // Construction prohibited (static class)
        AknsJavaUtils();
        // Destruction prohibited (static class)
        ~AknsJavaUtils();
    };

#endif      // AKNSJAVAUTILS_H

// End of File
