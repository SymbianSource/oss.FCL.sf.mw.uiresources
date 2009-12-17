/*
* Copyright (c) 2004-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Interface to skin command iterator.
*
*/


// INCLUDE FILES
#include "AknsRlCommand.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// MAknsRlCommandIterator::CleanupOperation
// Cleanup operation for MAknsRlCommandIterator
// -----------------------------------------------------------------------------
EXPORT_C void MAknsRlCommandIterator::CleanupOperation( TAny* aItem )
    {
    MAknsRlCommandIterator* iterator = static_cast<
        MAknsRlCommandIterator*>( aItem );
    delete iterator;
    }

// End of File
