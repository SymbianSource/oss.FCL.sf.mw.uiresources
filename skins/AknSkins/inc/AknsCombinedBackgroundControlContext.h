/*
* Copyright (c) 2007 Nokia Corporation and/or its subsidiary(-ies).
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



#ifndef C_AKNSCOMBINEDBACKGROUNDCONTROLCONTEXT_H
#define C_AKNSCOMBINEDBACKGROUNDCONTROLCONTEXT_H

#include <AknsBasicBackgroundControlContext.h>

/**
 *  Container object holding several contextes.
 *
 *  @lib AknsSkins.lib
 *  @since S60 v5.0
 */
NONSHARABLE_CLASS( CAknsCombinedBackgroundControlContext ) :
    public CAknsBasicBackgroundControlContext
    {

public:

    /**
    * Two-phased constructor.
    *
    * @param aParentAbsolute ETrue if parent absolute layout should be
    *   used, EFalse otherwise. If a parent absolute layout is used,
    *   the parent position must be set and updated using SetParentPos.
    *
    * @return Newly constructed object.
    */
    IMPORT_C static CAknsCombinedBackgroundControlContext* NewL(
        TBool aParentAbsolute );

    /**
    * Destructor.
    */
    virtual ~CAknsCombinedBackgroundControlContext();

    /**
     * Add background control context to a combination.
     *
     * @param aControlContext control context to be added.
     * @return index of the control context, or error code.
     */
    IMPORT_C TInt AddControlContext( MAknsControlContext* aControlContext );

    /**
     * Remove background control context from combination.
     *
     * @param aIndex index of the control context to remove
     */
    IMPORT_C void RemoveControlContext( const TInt aIndex );

    /**
     * Get a reference to a background control context using index.
     *
     * @param aIndex index of the control context to get.
     * @return NULL if context was not found, otherwise pointer to the
     *         context.
     */
    IMPORT_C MAknsControlContext* GetControlContext( const TInt aIndex );

private:

    /**
     * From MAknsControlContext.
     *
     */
    TBool IsCompatibleWithType( const TAknsControlContextType aType ) const;

private: // data

    /**
     * Array containing all the contextes.
     * Own.
     */
    RPointerArray<MAknsControlContext> iBgCcArray;

    };


#endif // C_AKNSCOMBINEDBACKGROUNDCONTROLCONTEXT_H
