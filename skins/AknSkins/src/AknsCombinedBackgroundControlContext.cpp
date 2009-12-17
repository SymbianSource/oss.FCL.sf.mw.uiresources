/*
* Copyright (c) 2007-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Container context containing several contextes.
*
*/


#include <e32cmn.h>
#include "AknsCppPreface.h"
#include "AknsCombinedBackgroundControlContext.h"

// ======== MEMBER FUNCTIONS ========
// ---------------------------------------------------------------------------
// Symbian 1st phase constructor.
// ---------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsCombinedBackgroundControlContext::NewL)
EXPORT_C CAknsCombinedBackgroundControlContext*
CAknsCombinedBackgroundControlContext::NewL( TBool /*aParentAbsolute*/ )
    {
#ifndef RD_FULLSCREEN_WALLPAPER
    User::Leave( KErrNotSupported );
#endif //RD_FULLSCREEN_WALLPAPER
    CAknsCombinedBackgroundControlContext* self =
        new( ELeave ) CAknsCombinedBackgroundControlContext;
    return self;
    }

// ---------------------------------------------------------------------------
// Destructor
// ---------------------------------------------------------------------------
//
CAknsCombinedBackgroundControlContext::~CAknsCombinedBackgroundControlContext()
    {
#ifndef RD_FULLSCREEN_WALLPAPER
    return;
#else
    while (iBgCcArray.Count())
        {
        RemoveControlContext( iBgCcArray.Count() -1 );
        }
    iBgCcArray.ResetAndDestroy();
#endif //RD_FULLSCREEN_WALLPAPER
    }

// ---------------------------------------------------------------------------
// Adds context to combination.
// ---------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsCombinedBackgroundControlContext::AddControlContext)
EXPORT_C TInt CAknsCombinedBackgroundControlContext::AddControlContext( MAknsControlContext* aControlContext )
    {
#ifndef RD_FULLSCREEN_WALLPAPER
    return KErrNotSupported;
#else
    TInt err = iBgCcArray.Append( aControlContext );
    TInt retVal = err;
    if ( err == KErrNone )
        {
        retVal = iBgCcArray.Count() -1;
        }
    return retVal;
#endif //RD_FULLSCREEN_WALLPAPER
    }

// ---------------------------------------------------------------------------
// Removes context from combination.
// ---------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsCombinedBackgroundControlContext::RemoveControlContext)
EXPORT_C void CAknsCombinedBackgroundControlContext::RemoveControlContext( const TInt aIndex )
    {
#ifndef RD_FULLSCREEN_WALLPAPER
    return;
#else
    if ( !( ( aIndex > iBgCcArray.Count() -1 ) || ( aIndex < 0 ) ) )
        {
        MAknsControlContext* context = iBgCcArray[ aIndex ];
        iBgCcArray.Remove( aIndex );
        delete context;
        }
#endif //RD_FULLSCREEN_WALLPAPER
    }

// ---------------------------------------------------------------------------
// Returns indexed context from combination.
// ---------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsCombinedBackgroundControlContext::GetControlContext)
EXPORT_C MAknsControlContext* CAknsCombinedBackgroundControlContext::GetControlContext( const TInt aIndex )
    {
#ifndef RD_FULLSCREEN_WALLPAPER
    return NULL;
#else
    if ( ( aIndex > iBgCcArray.Count() -1 ) || ( aIndex < 0 ) )
        {
        return NULL;
        }
    return iBgCcArray[ aIndex ];
#endif //RD_FULLSCREEN_WALLPAPER
    }

// -----------------------------------------------------------------------------
// CAknsCombinedBackgroundControlContext::IsCompatibleWithType
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
TBool CAknsCombinedBackgroundControlContext::IsCompatibleWithType(
    const TAknsControlContextType aType ) const
    {
#ifndef RD_FULLSCREEN_WALLPAPER
    return EFalse;
#else
    switch( aType )
        {
        case EAknsControlContextTypeCombined:
            return ETrue;

        case EAknsControlContextTypeUnknown:
        case EAknsControlContextTypeBasic:
        case EAknsControlContextTypeLayered:
        case EAknsControlContextTypeListBox:
        case EAknsControlContextTypeFrame:
            break;
        }
    return EFalse;
#endif //RD_FULLSCREEN_WALLPAPER
    }

// End of file
