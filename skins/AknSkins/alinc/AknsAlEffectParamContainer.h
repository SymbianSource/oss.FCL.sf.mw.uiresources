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
* Description:  Combined container & iterator for storing RL parameters.
*
*/


#ifndef AKNSALEFFECTPARAMETERITER_H
#define AKNSALEFFECTPARAMETERITER_H

// INCLUDES
#include <e32base.h>
#include <AknsRlParameter.h>

// FORWARD DECLARATIONS
class CAknsAlParamData;

// CLASS DECLARATION

/**
* Combined container & iterator for storing RL parameters. Used by the
* AnimatorBmp (internally).
*
* @since 3.0
*/
NONSHARABLE_CLASS( CAknsAlEffectParamContainer ):
    public CBase,
    public MAknsRlParameterIterator
    {
    private: // Protected constructors

        CAknsAlEffectParamContainer();

    public: // New functions

        static CAknsAlEffectParamContainer* NewL();

        virtual ~CAknsAlEffectParamContainer();

        void AddParamL( const TAknsRlParameterData& aParam );

        /// Resets the iterator
        void Begin();

    public: // Implementation of MAknsRlParameterIterator

        TBool HasNext();
        const TAknsRlParameterData* NextL();

    private:

        TAknsRlParameterData iIteratorData;
        RPointerArray<CAknsAlParamData> iParams;

        TInt iIteratorIndex;
    };

#endif // AKNSALEFFECTPARAMETERITER_H

// End of File
