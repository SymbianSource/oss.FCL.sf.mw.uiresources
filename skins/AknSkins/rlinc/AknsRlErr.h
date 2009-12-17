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
* Description:  Error codes for rendering plugins.
*
*/


#ifndef AKNSRLERR_H
#define AKNSRLERR_H

//  INCLUDES
#include <e32base.h>

// CONSTANTS

/**
* Error code indicating that the requested effect was not available.
* @since 2.8
*/
static const TInt KAknsRlErrEffectNotAvailable    = -17001;

/**
* Error code indicating that the given layer index was out of bounds.
* @since 2.8
*/
static const TInt KAknsRlErrBadLayerIndex         = -17002;

/**
* Error code indicating that a class has reached an invalid internal state,
* possibly because of invalid usage.
* @since 2.8
*/
static const TInt KAknsRlErrInternalState         = -17003;

#endif // AKNSRLERR_H

// End of File
