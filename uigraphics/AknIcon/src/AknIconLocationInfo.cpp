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



// INCLUDE FILES

#include <e32std.h>
#include <mifconvdefs.h>
#include "AknIconLocationInfo.h"
#include "AknIconLoader.h"


// CONSTANTS

// ================= MEMBER FUNCTIONS ==========================================

CAknIconLocationInfo::CAknIconLocationInfo()
    {
    }

CAknIconLocationInfo::CAknIconLocationInfo( const TDesC& aFileName )
    {
    // This constructor is used when the object is instantiated in stack,
    // so CBase's zero initialization is not done.
    Mem::FillZ( this, sizeof( CAknIconLocationInfo ) );
    iFileNameRef = &aFileName;
    }

CAknIconLocationInfo::~CAknIconLocationInfo()
    {
    delete iFileName;
    delete [] iLocations;
    delete iSharedOffsets;
    }

CAknIconLocationInfo* CAknIconLocationInfo::NewL(
    const TDesC& aFileName,
    MifHeader::CInstance& aOffsets )
    {
    CAknIconLocationInfo* item = new( ELeave ) CAknIconLocationInfo;
    CleanupStack::PushL( item );
    item->ConstructL( aFileName, aOffsets );
    CleanupStack::Pop();
    return item;
    }

CAknIconLocationInfo* CAknIconLocationInfo::NewL(
    const TDesC& aFileName,
    const TDesC8& aOffsetArray )
    {
    CAknIconLocationInfo* item = new( ELeave ) CAknIconLocationInfo;
    CleanupStack::PushL( item );
    item->ConstructL( aFileName, aOffsetArray );
    CleanupStack::Pop();
    return item;
    }

CAknIconLocationInfo* CAknIconLocationInfo::NewL(
    const TDesC& aFileName )
    {
    CAknIconLocationInfo* item = new( ELeave ) CAknIconLocationInfo;
    CleanupStack::PushL( item );
    item->ConstructL( aFileName );
    CleanupStack::Pop();
    return item;
    }

void CAknIconLocationInfo::ConstructL(
    const TDesC& aFileName,
    MifHeader::CInstance& aOffsets )
    {
    iFileName = aFileName.AllocL();
    
    iSharedOffsets = MifHeader::CInstance::NewL(aOffsets.Ref());
    iCount = iSharedOffsets->indicies().Count();
    }

void CAknIconLocationInfo::ConstructL(
    const TDesC& aFileName,
    const TDesC8& aOffsetArray )
    {
    iFileName = aFileName.AllocL();

    if ( aOffsetArray.Size() % sizeof( TMifBitmapOffsetElement ) )
        {
        User::Leave( KErrCorrupt );
        }

    iCount = aOffsetArray.Size() / sizeof(TMifBitmapOffsetElement);
    
    // iCount must always be even number
    if (iCount % 2)
        {
        User::Leave( KErrCorrupt );   
        }

    iLocations = new( ELeave ) TInt[iCount];

    TMifBitmapOffsetElement* ptr = (TMifBitmapOffsetElement*)aOffsetArray.Ptr();

    for ( TInt i = 0 ; i < iCount ; i++ )
        {
        iLocations[i] = ptr->iOffset; // copy the offset variable in iLocations
        ptr++;
        }
    }

void CAknIconLocationInfo::ConstructL( const TDesC& aFileName )
    {
    iFileName = aFileName.AllocL();
    }

// -----------------------------------------------------------------------------
// CAknIconLocationInfo::LinearOrder
// -----------------------------------------------------------------------------
//
TInt CAknIconLocationInfo::LinearOrder(
    const CAknIconLocationInfo& aFirst,
    const CAknIconLocationInfo& aSecond )
    {
    const TDesC* firstFileName = aFirst.iFileNameRef ?
        aFirst.iFileNameRef : aFirst.iFileName;

    const TDesC* secondFileName = aSecond.iFileNameRef ?
        aSecond.iFileNameRef : aSecond.iFileName;

    return firstFileName->CompareF( *secondFileName );
    }

// -----------------------------------------------------------------------------
// CAknIconLocationInfo::GetIconLocation
// -----------------------------------------------------------------------------
//
TInt CAknIconLocationInfo::GetIconLocation(
    TInt16& aBitmapId, TInt16& aMaskId ) const
    {
    if ( !iLocations && !iSharedOffsets )
        {
        // V1 MIF file. IDs do not need to be changed.
        return KErrNone;
        }
    
    TInt16 bitmapId;
    
    // MBG indexes start from KMifIdFirst.
    TInt bitmapIndex = aBitmapId - KMifIdFirst;

    if ( bitmapIndex < 0 ||
         bitmapIndex >= iCount )
        {
        return KErrEof;
        }

    TInt offset;
    if (iLocations)
        {
        // Fetch the icon offset info from the offset array that is
        // retrieved from the MIF file
        offset = iLocations[bitmapIndex];
        }
    else
        {
        // Fetch the icon offset info from the offset array that is
        // stored in the shared MifHeader instance
        offset = iSharedOffsets->indicies()[bitmapIndex].iOffset;
        }
            
    // Negative or zero offset means that it is a MBM icon,
    // and the real icon index is then that offset changed to positive.
    if ( offset <= 0 )
        {
        bitmapId = -offset;
        }
    // Positive offset means that it is a MIF icon,
    // the original icon index (from MBG file) should be used in that case.
    else
        {
        bitmapId = aBitmapId;
        }

    // Mask used?
    if ( aMaskId >= 0 )
        {
        // MBG indexes start from KMifIdFirst.
        TInt maskIndex = aMaskId - KMifIdFirst;

        if ( maskIndex < 0 ||
             maskIndex >= iCount )
            {
            return KErrEof;
            }

        if (iLocations)
            offset = iLocations[maskIndex];
        else
            offset = iSharedOffsets->indicies()[maskIndex].iOffset;
        
        if ( offset <= 0 )
            {
            aMaskId = -offset;
            }            
        }
        
    aBitmapId = bitmapId;
    return KErrNone;
    }

//  End of File  
