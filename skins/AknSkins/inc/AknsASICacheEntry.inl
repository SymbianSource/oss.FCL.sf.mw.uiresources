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
* Description:  Inlined functions for CAknsApplicationSkinInstanceCacheEntry.
*
*/


// INLINED MEMBERS

inline TAknsItemID CAknsAppSkinInstanceCacheEntry::ID() const
    { 
    return iID; 
    }

inline CAknsItemData* CAknsAppSkinInstanceCacheEntry::Data() 
    { 
    return iData; 
    }

inline void CAknsAppSkinInstanceCacheEntry::DestroyAndSetData( 
    CAknsItemData* aData ) 
    { 
    delete iData;
    iData = aData;
    }

//  End of File  


