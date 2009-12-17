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
* Description:  Defines the package ID class used to identify skin packages
*
*/


// INCLUDE FILES

#include <AknsPkgID.h>

// CONSTANTS

_LIT( KAknsPkgIDDelimiter, " " );

// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// TAknsPkgID::CopyToDes
// -----------------------------------------------------------------------------
//
EXPORT_C void TAknsPkgID::CopyToDes( TDes& aDes ) const
    {
    aDes.Zero();
    aDes.AppendNum( iNumber );
    aDes.Append( KAknsPkgIDDelimiter );
    aDes.AppendNum( iTimestamp );
    }

// -----------------------------------------------------------------------------
// TAknsPkgID::SetFromDesL
// -----------------------------------------------------------------------------
//
EXPORT_C void TAknsPkgID::SetFromDesL( const TDesC& aDes )
    {
    TLex lex( aDes );

    TPtrC numberToken( lex.NextToken() );
    if( !numberToken.Length() )
        {
        User::Leave( KErrArgument );
        }
    User::LeaveIfError( TLex(numberToken).Val(iNumber) );

    TPtrC stampToken( lex.NextToken() );
    if( stampToken.Length() )
        {
        User::LeaveIfError( TLex(stampToken).Val(iTimestamp) );
        }
    else
        {
        // UID format package ID
        iTimestamp = 0;
        }
    }

//  End of File
