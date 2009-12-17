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
* Description:  Exclusion query class.
*
*/


// INCLUDE FILES

#include <f32file.h>
#include <txtetext.h>

#include "AknsSrvExclusion.h"

#include "AknsDebug.h"

// CONSTANTS

static const TInt KAknsSrvExcludedAlways    = 0x01;
static const TInt KAknsSrvExcludedInArabic  = 0x02;
static const TInt KAknsSrvExcludedInHebrew  = 0x04;
static const TInt KAknsSrvMappedInArabic    = 0x08;
static const TInt KAknsSrvMappedInHebrew    = 0x10;

_LIT( KAknsSrvDefaultExclusionListFile, "Z:\\System\\Data\\SkinExclusions.ini" );

enum TAknsSrvExclusionListSection
    {
    EAknsSrvExclusionListSectionAlways = 0,
    EAknsSrvExclusionListSectionArabic = 1,
    EAknsSrvExclusionListSectionHebrew = 2,
    };

_LIT( KAknsSrvExclusionListSectionAlways, "[Always]" );
_LIT( KAknsSrvExclusionListSectionArabic, "[Arabic]" );
_LIT( KAknsSrvExclusionListSectionHebrew, "[Hebrew]" );

_LIT( KAknsSrvHexPrefix, "0x" );

// ============================= LOCAL FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// ConvertToIID
// -----------------------------------------------------------------------------
//
TInt ConvertToIID( TAknsItemID& aIID, const TDesC& aToken )
    {
    TInt status = KErrNone;

    TInt commaIndex = aToken.Locate( (TChar)',' );
    if( commaIndex == KErrNotFound )
        {
        return KErrArgument;
        }

    TPtrC major( aToken.Left( commaIndex ) );
    TPtrC minor( aToken.Mid( commaIndex+1 ) );

    TUint majorVal, minorVal;

    // If descriptor begins with 0x it is a hexadecimal number
    if( (major.Length()>2) && (major.Left(2).CompareF(KAknsSrvHexPrefix)==0) )
        {
        status |= TLex(major.Mid(2)).Val( majorVal, EHex );
        }
    else
        {
        status |= TLex(major).Val( majorVal, EDecimal );
        }

    if( (minor.Length()>2) && (minor.Left(2).CompareF(KAknsSrvHexPrefix)==0) )
        {
        status |= TLex(minor.Mid(2)).Val( minorVal, EHex );
        }
    else
        {
        status |= TLex(minor).Val( minorVal, EDecimal );
        }

    if( status == KErrNone )
        {
        aIID.iMajor = majorVal;
        aIID.iMinor = minorVal;
        }
    return status;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// TAknsSrvExclusionQuery::TAknsSrvExclusionQuery
// -----------------------------------------------------------------------------
//
TAknsSrvExclusionQuery::TAknsSrvExclusionQuery( CAknsSrvExclusionList* aList ):
    iList( aList ),
    iArabicEnabled( EFalse ),
    iHebrewEnabled( EFalse ),
    iHighlightAnimEnabled( EFalse )
    {
    }

// -----------------------------------------------------------------------------
// TAknsSrvExclusionQuery::SetParameters
// -----------------------------------------------------------------------------
//
void TAknsSrvExclusionQuery::SetParameters( const TBool aArabic,
    const TBool aHebrew )
    {
    iArabicEnabled = aArabic;
    iHebrewEnabled = aHebrew;
    }

// -----------------------------------------------------------------------------
// TAknsSrvExclusionQuery::SetHighlightAnimEnabled
// -----------------------------------------------------------------------------
//
void TAknsSrvExclusionQuery::SetHighlightAnimEnabled( const TBool aValue )
    {
    iHighlightAnimEnabled = aValue;
    }

// -----------------------------------------------------------------------------
// TAknsSrvExclusionQuery::IsHighlightAnimEnabled
// -----------------------------------------------------------------------------
//
TBool TAknsSrvExclusionQuery::IsHighlightAnimEnabled() const
    {
    return iHighlightAnimEnabled;
    }

// -----------------------------------------------------------------------------
// TAknsSrvExclusionQuery::IsExcluded
// -----------------------------------------------------------------------------
//
TBool TAknsSrvExclusionQuery::IsExcluded( const TAknsItemID& aIID ) const
    {
    if( !iList )
        {
        return EFalse;
        }

    const TAknsSrvExclusionListEntry* entry = iList->FindEntry( aIID );
    if( !entry )
        {
        return EFalse;
        }

    if( entry->iFlags & KAknsSrvExcludedAlways )
        {
        return ETrue;
        }

    if( iArabicEnabled )
        {
        if( entry->iFlags & KAknsSrvExcludedInArabic )
            {
            return ETrue;
            }
        }

    if( iHebrewEnabled )
        {
        if( entry->iFlags & KAknsSrvExcludedInHebrew )
            {
            return ETrue;
            }
        }

    return EFalse;
    }

// -----------------------------------------------------------------------------
// TAknsSrvExclusionQuery::MapIID
// -----------------------------------------------------------------------------
//
TBool TAknsSrvExclusionQuery::MapIID( TAknsItemID& aIID ) const
    {
    if( !iList )
        {
        return EFalse;
        }

    const TAknsSrvExclusionListEntry* entry = iList->FindEntry( aIID );
    if( !entry )
        {
        return EFalse;
        }

    if( iArabicEnabled )
        {
        if( entry->iFlags & KAknsSrvMappedInArabic )
            {
            aIID = entry->iTargetIID;
            return ETrue;
            }
        }

    if( iHebrewEnabled )
        {
        if( entry->iFlags & KAknsSrvMappedInHebrew )
            {
            aIID = entry->iTargetIID;
            return ETrue;
            }
        }

    return EFalse;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// TAknsSrvExclusionListEntry::LinearOrder
// -----------------------------------------------------------------------------
//
TInt TAknsSrvExclusionListEntry::LinearOrder(
    const TAknsSrvExclusionListEntry& aFirst,
    const TAknsSrvExclusionListEntry& aSecond )
    {
    return TAknsItemID::LinearOrder( aFirst.iIID, aSecond.iIID );
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ constructor.
// -----------------------------------------------------------------------------
//
CAknsSrvExclusionList::CAknsSrvExclusionList()
    {
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsSrvExclusionList::~CAknsSrvExclusionList()
    {
    iArray.Close();
    }

// -----------------------------------------------------------------------------
// Symbian two-phased constructor.
// -----------------------------------------------------------------------------
//
CAknsSrvExclusionList* CAknsSrvExclusionList::NewL()
    {
    return new (ELeave) CAknsSrvExclusionList();
    }

// -----------------------------------------------------------------------------
// CAknsSrvExclusionList::LoadDefaultListFromFileL
// -----------------------------------------------------------------------------
//
void CAknsSrvExclusionList::LoadDefaultListFromFileL( RFs& aRFs )
    {
    RFile file;
    CleanupClosePushL( file );
    User::LeaveIfError( file.Open( aRFs,
        KAknsSrvDefaultExclusionListFile, EFileShareAny|EFileRead ) );

    TInt size;
    User::LeaveIfError( file.Size( size ) );

    // Read the whole file to buffer
    HBufC* buffer = HBufC::NewMaxLC( size / sizeof(TText) );
    TPtr8 bufferPtr( (TUint8*)buffer->Ptr(), size, size );
    User::LeaveIfError( file.Read( bufferPtr ) );

    TPtrC16 dataPtr( *buffer );
    if( (buffer->Length()>=2) &&
        ((*(TText*)buffer->Ptr())==CEditableText::EByteOrderMark) )
        {
        // Skip the byte order mark
        dataPtr.Set( dataPtr.Right( dataPtr.Length()-1 ) );
        }

    // Parse each token (usually delimited by linefeeds)
    TAknsSrvExclusionListSection currentSection(
        EAknsSrvExclusionListSectionAlways );
    TLex16 lex( dataPtr );
    TPtrC16 token( lex.NextToken() );
    while( token.Length() )
        {
        if( !token.CompareF( KAknsSrvExclusionListSectionAlways ) )
            {
            currentSection = EAknsSrvExclusionListSectionAlways;
            }
        else if( !token.CompareF( KAknsSrvExclusionListSectionArabic ) )
            {
            currentSection = EAknsSrvExclusionListSectionArabic;
            }
        else if( !token.CompareF( KAknsSrvExclusionListSectionHebrew ) )
            {
            currentSection = EAknsSrvExclusionListSectionHebrew;
            }
        else if( !token.Left(1).CompareF( _L("[") ) )
            {
            // Use "always" if section is unknown
            currentSection = EAknsSrvExclusionListSectionAlways;
            }
        else
            {
            TInt equalIndex = token.Locate( (TChar)'=' );

            TPtrC leftToken( token );
            TPtrC rightToken;

            if( equalIndex != KErrNotFound )
                {
                leftToken.Set( token.Left( equalIndex ) );
                rightToken.Set( token.Mid( equalIndex+1 ) );
                }

            TInt status = KErrNone;

            TAknsItemID leftIID;
            status |= ConvertToIID( leftIID, leftToken );

            TAknsItemID rightIID;
            rightIID.Set( 0, 0 );
            if( rightToken.Length() > 0 )
                {
                status |= ConvertToIID( rightIID, rightToken );
                }

            if( status == KErrNone )
                {
                TAknsSrvExclusionListEntry newEntry;
                newEntry.iIID = leftIID;
                newEntry.iTargetIID = rightIID;
                newEntry.iFlags = 0;

                if( rightToken.Length() > 0 )
                    {
                    // This is a mapping entry
                    switch( currentSection )
                        {
                        case EAknsSrvExclusionListSectionAlways:
                            // Do nothing
                            break;
                        case EAknsSrvExclusionListSectionArabic:
                            newEntry.iFlags = KAknsSrvMappedInArabic;
                            break;
                        case EAknsSrvExclusionListSectionHebrew:
                            newEntry.iFlags = KAknsSrvMappedInHebrew;
                            break;
                        }
                    }
                else
                    {
                    // This is an exclusion entry
                    switch( currentSection )
                        {
                        case EAknsSrvExclusionListSectionAlways:
                            newEntry.iFlags = KAknsSrvExcludedAlways;
                            break;
                        case EAknsSrvExclusionListSectionArabic:
                            newEntry.iFlags = KAknsSrvExcludedInArabic;
                            break;
                        case EAknsSrvExclusionListSectionHebrew:
                            newEntry.iFlags = KAknsSrvExcludedInHebrew;
                            break;
                        }
                    }

                // Create entries only for valid IIDs in valid sections
                if( newEntry.iFlags )
                    {
                    TAknsSrvExclusionListEntry* oldEntry =
                        FindEntry( newEntry.iIID );
                    if( oldEntry )
                        {
                        oldEntry->iFlags |= newEntry.iFlags;
                        }
                    else
                        {
                        iArray.InsertInOrder( newEntry,
                            TAknsSrvExclusionListEntry::LinearOrder );
                        }
                    }
                }
            }

        token.Set( lex.NextToken() );
        }

    CleanupStack::PopAndDestroy( 2 ); // buffer, file
    }

// -----------------------------------------------------------------------------
// CAknsSrvExclusionList::FindEntry
// -----------------------------------------------------------------------------
//
TAknsSrvExclusionListEntry* CAknsSrvExclusionList::FindEntry(
    const TAknsItemID& aIID )
    {
    TAknsSrvExclusionListEntry key;
    key.iIID = aIID;
    TInt index = iArray.FindInOrder( key,
        TAknsSrvExclusionListEntry::LinearOrder );

    if( index == KErrNotFound )
        {
        return NULL;
        }

    return &(iArray[index]);
    }

//  End of File
