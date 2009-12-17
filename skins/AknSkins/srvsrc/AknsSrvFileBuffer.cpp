/*
* Copyright (c) 2003-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Skin serv's file buffer.
*
*/


// INCLUDE FILES

#include "AknsSrvFileBuffer.h"

// CONSTANTS

static const int KAknsSrvFileBufSize = 10*1024;

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ Constructor
// -----------------------------------------------------------------------------
//
CAknsSrvFileBuffer::CAknsSrvFileBuffer()
    // CBase initializes: iBuffer(0), iPosition(0), iLength(0)
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsSrvFileBuffer::~CAknsSrvFileBuffer()
    {
    delete iData;
    delete iContent;
    delete iBuffer;
    }

// -----------------------------------------------------------------------------
// Two-phased constructor
// -----------------------------------------------------------------------------
//
void CAknsSrvFileBuffer::ConstructL(RFile& aFilehandle)
    {
    iBuffer = HBufC8::NewL( KAknsSrvFileBufSize );
    iContent = ContentAccess::CContent::NewL(aFilehandle);
    iData = iContent->OpenContentL(ContentAccess::EView, ContentAccess::EContentShareReadOnly);
    FillBufferL();
    }

// -----------------------------------------------------------------------------
// CAknsSrvFileBuffer::NewL
// -----------------------------------------------------------------------------
//
CAknsSrvFileBuffer* CAknsSrvFileBuffer::NewL( RFile& aFilehandle )
    {
    CAknsSrvFileBuffer* self = new (ELeave) CAknsSrvFileBuffer( );
    CleanupStack::PushL( self );
    self->ConstructL(aFilehandle);
    CleanupStack::Pop( self );
    return self;
    }


// -----------------------------------------------------------------------------
// CAknsSrvFileBuffer::GetInt32L
// -----------------------------------------------------------------------------
//
TInt32 CAknsSrvFileBuffer::GetInt32L( const TUint aOffset )
    {
    ReadToBufferL( aOffset, 4 );
    TInt32 value;
    Mem::Copy( &value, PtrToBuffer(aOffset), 4 );
    return value;
    }

// -----------------------------------------------------------------------------
// CAknsSrvFileBuffer::GetUint16L
// -----------------------------------------------------------------------------
//
TUint16 CAknsSrvFileBuffer::GetUint16L( const TUint aOffset )
    {
    ReadToBufferL( aOffset, 2 );
    TUint16 value;
    Mem::Copy( &value, PtrToBuffer(aOffset), 2 );
    return value;
    }

// -----------------------------------------------------------------------------
// CAknsSrvFileBuffer::GetInt16L
// -----------------------------------------------------------------------------
//
TInt16 CAknsSrvFileBuffer::GetInt16L( const TUint aOffset )
    {
    ReadToBufferL( aOffset, 2 );
    TInt16 value;
    Mem::Copy( &value, PtrToBuffer(aOffset), 2 );
    return value;
    }

// -----------------------------------------------------------------------------
// CAknsSrvFileBuffer::GetUint8L
// -----------------------------------------------------------------------------
//
TUint8 CAknsSrvFileBuffer::GetUint8L( const TUint aOffset )
    {
    ReadToBufferL( aOffset, 1 );
    TUint8 value;
    Mem::Copy( &value, PtrToBuffer(aOffset), 1 );
    return value;
    }

// -----------------------------------------------------------------------------
// CAknsSrvFileBuffer::PtrToBuffer
// -----------------------------------------------------------------------------
//
const TAny* CAknsSrvFileBuffer::PtrToBuffer( const TUint aOffset ) const
    {
    return (iBuffer->Ptr()) + aOffset - iPosition;
    }

// -----------------------------------------------------------------------------
// CAknsSrvFileBuffer::ReadToBufferL
// -----------------------------------------------------------------------------
//
void CAknsSrvFileBuffer::ReadToBufferL( const TUint aOffset, const TUint aSize )
    {
    if( IsWithin( aOffset, aSize ) )
        {
        return;
        }

    iPosition = static_cast<TInt>(aOffset);
    FillBufferL();

    if( !IsWithin( aOffset, aSize ) )
        {
        User::Leave( KErrEof );
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvFileBuffer::FillBufferL
// -----------------------------------------------------------------------------
//
void CAknsSrvFileBuffer::FillBufferL()
    {
    TPtr8 ptr( iBuffer->Des() );

    iLength = 0;

    User::LeaveIfError( iData->Seek(ESeekStart, iPosition) );
    User::LeaveIfError( iData->Read(ptr, KAknsSrvFileBufSize));
    iLength = ptr.Length();
    }

// -----------------------------------------------------------------------------
// CAknsSrvFileBuffer::IsWithin
// -----------------------------------------------------------------------------
//
TBool CAknsSrvFileBuffer::IsWithin( const TUint aOffset, const TUint aSize ) const
    {
    if( (static_cast<TInt>(aOffset) >= iPosition) &&
        (static_cast<TInt>(aOffset+aSize) <= (iPosition+iLength)) )
        {
        return ETrue;
        }
    return EFalse;
    }

//  End of File
