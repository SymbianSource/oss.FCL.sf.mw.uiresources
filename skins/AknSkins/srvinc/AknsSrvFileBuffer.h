/*
* Copyright (c) 2002-2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Skin server's file buffer.
*
*/


#ifndef AKNSSRVFILEBUFFER_H
#define AKNSSRVFILEBUFFER_H

// INCLUDE FILES

#include <e32std.h>
#include <f32file.h>
#include <caf/caf.h>
#include <caf/cafplatform.h>
// CLASS DECLARATION

/**
* 
*/
NONSHARABLE_CLASS(CAknsSrvFileBuffer) : public CBase
    {
    public: // Construction and destruction

        /**
        * Symbian constructor.
        * @param aFilehandle file handle.
        * @return new instance of CAknsSrvFileBuffer.
        */
        static CAknsSrvFileBuffer* NewL( RFile& aFilehandle );
        /**
        * Destructor.
        */
        virtual ~CAknsSrvFileBuffer();

    public: // New methods

        /**
        * Gets 32-bit integer value from file.
        * @param aOffset offset in the file
        * @return 32-bit integer value from file.
        */
        TInt32 GetInt32L( const TUint aOffset );

        /**
        * Gets 16-bit unsigned integer value from file.
        * @param aOffset offset in the file
        * @return 16-bit unsigned integer value from file.
        */
        TUint16 GetUint16L( const TUint aOffset );

        /**
        * Gets 16-bit integer value from file.
        * @param aOffset offset in the file
        * @return 16-bit integer value from file.
        */
        TInt16 GetInt16L( const TUint aOffset );

        /**
        * Gets 8-bit unsigned integer value from file.
        * @param aOffset offset in the file
        * @return 8-bit unsigned integer value from file.
        */
        TUint8 GetUint8L( const TUint aOffset );

    private: // New methods

        /**
        * Makes pointer to buffer.
        */
        const TAny* PtrToBuffer( const TUint aOffset ) const;

        /**
        * Reads buffer from given offset.
        */
        void ReadToBufferL( const TUint aOffset, const TUint aSize );

        /**
        * Fills buffer.
        */
        void FillBufferL();

        /**
        * Checks if offset is within range.
        */
        TBool IsWithin( const TUint aOffset, const TUint aSize ) const;

    private: // Construction and destruction

        /**
        * Symbian 2nd phase constructor.
        */
        void ConstructL(RFile& aFilehandle);

        /**
        * C++ constructor.
        */
        CAknsSrvFileBuffer();


    private: // Data

        ContentAccess::CContent* iContent;
        ContentAccess::CData* iData;
        HBufC8* iBuffer;
        TInt iPosition;
        TInt iLength;

    };

#endif

// End of File
