/*
* Copyright (c) 2003 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  ?Description
*
*/


// INLINED MEMBERS

inline void TAknsPkgID::Set( const TUid aUid )
    {
    iNumber = aUid.iUid;
    iTimestamp = 0;
    }

inline void TAknsPkgID::Set( const TInt aTimestamp, const TInt aNumber )
    {
    iNumber = aNumber;
    iTimestamp = aTimestamp;
    }

inline void TAknsPkgID::Set( const TAknsPkgID& aID )
    {
    iNumber = aID.iNumber;
    iTimestamp = aID.iTimestamp;
    }

inline TBool TAknsPkgID::IsUid() const
    {
    return iTimestamp==0 ? ETrue : EFalse;
    }

inline TUid TAknsPkgID::Uid() const
    {
    return TUid::Uid(iNumber);
    }

inline TBool operator==( const TAknsPkgID& aFirst, const TAknsPkgID& aSecond )
    { 
    return (aFirst.iNumber==aSecond.iNumber)&&(aFirst.iTimestamp==aSecond.iTimestamp); 
    }

inline TBool operator!=( const TAknsPkgID& aFirst, const TAknsPkgID& aSecond )
    { 
    return (aFirst.iNumber!=aSecond.iNumber)||(aFirst.iTimestamp!=aSecond.iTimestamp); 
    }

//  End of File  
