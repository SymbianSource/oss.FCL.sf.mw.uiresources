/*
* Copyright (c) 2005-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Utility class for storing animation value and binding the animation
*                value to timing model.
*
*/


// INCLUDE FILES
#include "AknsAlShared.h"

#include "AknsRlEffectPlugin.h"
#include "AknsAlEffectParamContainer.h"

// ============================ MEMBER FUNCTIONS ===============================
/**
* Utility class for binding animation value to name.
*/
NONSHARABLE_CLASS( CAknsAlNamedReference ): public CBase
    {
    protected:
        CAknsAlNamedReference();
        void ConstructL( const TDesC& aName,
                         const MAknsAlAnimationValue* aValue );

    public:
        ~CAknsAlNamedReference();
        static CAknsAlNamedReference* NewL(  const TDesC& aName,
                                             const MAknsAlAnimationValue* aValue );
        inline void FillData( TAknsRlParameterData& aData ) const;

    private:
        HBufC* iName; // Owned
        const MAknsAlAnimationValue* iAnimationValue; // Referenced only
    };

// -----------------------------------------------------------------------------
// CAknsAlNamedReference::CAknsAlNamedReference
// -----------------------------------------------------------------------------
//
CAknsAlNamedReference::CAknsAlNamedReference()
    {
    // Derived from CBase -> members are zeroed
    }

// -----------------------------------------------------------------------------
// CAknsAlNamedReference::ConstructL
// -----------------------------------------------------------------------------
//
void CAknsAlNamedReference::ConstructL(
    const TDesC& aName, const MAknsAlAnimationValue* aValue )
    {
    if( NULL == aValue )
        User::Leave( KErrArgument );

    iAnimationValue = aValue;
    iName           = aName.AllocL();
    }

// -----------------------------------------------------------------------------
// CAknsAlNamedReference::~CAknsAlNamedReference
// -----------------------------------------------------------------------------
//
CAknsAlNamedReference::~CAknsAlNamedReference()
    {
    delete iName;
    iAnimationValue = NULL; // Removes lint nag
    }

// -----------------------------------------------------------------------------
// CAknsAlNamedReference::NewL
// -----------------------------------------------------------------------------
//
CAknsAlNamedReference* CAknsAlNamedReference::NewL(
    const TDesC& aName, const MAknsAlAnimationValue* aValue )
    {
    CAknsAlNamedReference* self = new(ELeave) CAknsAlNamedReference();
    CleanupStack::PushL( self );
    self->ConstructL( aName, aValue);
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsAlNamedReference::FillData
// -----------------------------------------------------------------------------
//
inline void CAknsAlNamedReference::FillData( TAknsRlParameterData& aData ) const
    {
    iAnimationValue->FillData( aData );
    aData.iName   = iName;
    }

// ============================ MEMBER FUNCTIONS ===============================
/**
* Utility class for storing named references and providing a parameter iterator
* access to them.
*/
NONSHARABLE_CLASS( CAknsAlNamedReferenceContainer ):
    public CBase, public MAknsRlParameterIterator
    {
    public:
        CAknsAlNamedReferenceContainer();
        ~CAknsAlNamedReferenceContainer();
        void AddNamedReferenceL( const TDesC& aName,
                                 const MAknsAlAnimationValue* aValue );
        void Begin();

    public: // Implementation of MAknsRlParameterIterator
        TBool HasNext();
        const TAknsRlParameterData* NextL();

    private:
        TAknsRlParameterData iIteratorData;
        // Stores the time bound parameters, owned
        RPointerArray<CAknsAlNamedReference> iNamedRefs;
        TInt iIteratorIndex;
    };

// -----------------------------------------------------------------------------
// CAknsAlNamedReferenceContainer::CAknsAlNamedReferenceContainer
// -----------------------------------------------------------------------------
//
CAknsAlNamedReferenceContainer::CAknsAlNamedReferenceContainer()
    {
    // Derived from CBase -> members are zeroed
    }

// -----------------------------------------------------------------------------
// CAknsAlNamedReferenceContainer::~CAknsAlNamedReferenceContainer
// -----------------------------------------------------------------------------
//
CAknsAlNamedReferenceContainer::~CAknsAlNamedReferenceContainer()
    {
    iNamedRefs.ResetAndDestroy(); //lint !e1551 No exception thrown
    }

// -----------------------------------------------------------------------------
// CAknsAlNamedReferenceContainer::AddNamedReferenceL
// -----------------------------------------------------------------------------
//
void CAknsAlNamedReferenceContainer::AddNamedReferenceL(
    const TDesC& aName, const MAknsAlAnimationValue* aValue )
    {
    CAknsAlNamedReference* ref = CAknsAlNamedReference::NewL( aName, aValue );
    CleanupStack::PushL( ref );
    User::LeaveIfError( iNamedRefs.Append( ref ) );
    CleanupStack::Pop( ref );
    }

// -----------------------------------------------------------------------------
// CAknsAlNamedReferenceContainer::Begin
// -----------------------------------------------------------------------------
//
void CAknsAlNamedReferenceContainer::Begin()
    {
    iIteratorIndex = 0;
    }

// -----------------------------------------------------------------------------
// CAknsAlNamedReferenceContainer::HasNext
// -----------------------------------------------------------------------------
//
TBool CAknsAlNamedReferenceContainer::HasNext()
    {
    if( iIteratorIndex < iNamedRefs.Count() )
        return ETrue;

    return EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsAlNamedReferenceContainer::NextL
// -----------------------------------------------------------------------------
//
const TAknsRlParameterData* CAknsAlNamedReferenceContainer::NextL()
    {
    if( iNamedRefs.Count() <= iIteratorIndex )
        User::Leave( KErrOverflow );

    CAknsAlNamedReference* ref = iNamedRefs[iIteratorIndex];
    ref->FillData( iIteratorData );

    iIteratorIndex++;

    return &iIteratorData;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsAlAnimationValueContainer::CAknsAlAnimationValueContainer
// -----------------------------------------------------------------------------
//
CAknsAlAnimationValueContainer::CAknsAlAnimationValueContainer()
    {
    // Derived from CBase -> members are zeroed
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimationValueContainer::ConstructL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimationValueContainer::ConstructL( MAknsAlAnimationValue* aValue,
                 const MAknsAlTimingModel* aModel )
    {
    if( NULL == aValue || NULL == aModel )
        User::Leave( KErrArgument );

    iAnimationValue = aValue;
    iTimingModel    = aModel;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimationValueContainer::~CAknsAlAnimationValueContainer
// -----------------------------------------------------------------------------
//
CAknsAlAnimationValueContainer::~CAknsAlAnimationValueContainer()
    {
    delete iAnimationValue; //lint !e1551 No exception thrown
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimationValueContainer::NewL
// -----------------------------------------------------------------------------
//
CAknsAlAnimationValueContainer* CAknsAlAnimationValueContainer::NewL(
    MAknsAlAnimationValue* aValue, const MAknsAlTimingModel* aModel )
    {
    CAknsAlAnimationValueContainer* self = new(ELeave) CAknsAlAnimationValueContainer();
    CleanupStack::PushL( self );
    self->ConstructL( aValue, aModel );
    CleanupStack::Pop( self );
    return self;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsAlAnimationCommand::CAknsAlAnimationCommand
// -----------------------------------------------------------------------------
//
CAknsAlAnimationCommand::CAknsAlAnimationCommand()
    {
    // Derived from CBase -> members are zeroed
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimationCommand::ConstructL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimationCommand::ConstructL()
    {
    iParamContainer = CAknsAlEffectParamContainer::NewL();
    iReferenceContainer = new(ELeave) CAknsAlNamedReferenceContainer();
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimationCommand::NewL
// -----------------------------------------------------------------------------
//
CAknsAlAnimationCommand* CAknsAlAnimationCommand::NewL()
    {
    CAknsAlAnimationCommand* self = new(ELeave) CAknsAlAnimationCommand();
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimationCommand::~CAknsAlAnimationCommand
// -----------------------------------------------------------------------------
//
CAknsAlAnimationCommand::~CAknsAlAnimationCommand()
    {
    delete iPlugin; //lint !e1551 No exception thrown
    delete iParamContainer; //lint !e1551 No exception thrown
    delete iReferenceContainer; //lint !e1551 No exception thrown
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimationCommand::Effect
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsAlAnimationCommand::Effect()
    {
    return iPlugin->Effect( KAknsRlEffectPluginInterfaceEffect );
    }


// -----------------------------------------------------------------------------
// CAknsAlAnimationCommand::AddParameterL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimationCommand::AddParameterL( const TAknsRlParameterData& aParam )
    {
    iParamContainer->AddParamL( aParam );
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimationCommand::AddNamedReferenceL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimationCommand::AddNamedReferenceL( const TDesC& aName,
                         const MAknsAlAnimationValue* aValue )
    {
    iReferenceContainer->AddNamedReferenceL( aName, aValue );
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimationCommand::SetPlugin
// -----------------------------------------------------------------------------
//
void CAknsAlAnimationCommand::SetPlugin( CAknsRlEffectPlugin* aPlugin )
    {
    iPlugin = aPlugin;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimationCommand::SetLayerConfig
// -----------------------------------------------------------------------------
//
void CAknsAlAnimationCommand::SetLayerConfig( const TAknsRlRenderOpParam& aConfig )
    {
    iLayerConfig = aConfig;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimationCommand::LayerConfig
// -----------------------------------------------------------------------------
//
const TAknsRlRenderOpParam& CAknsAlAnimationCommand::LayerConfig() const
    {
    return iLayerConfig;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimationCommand::ParameterIterator
// -----------------------------------------------------------------------------
//
MAknsRlParameterIterator* CAknsAlAnimationCommand::ParameterIterator()
    {
    iParamContainer->Begin();
    return iParamContainer;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimationCommand::NamedReferenceIterator
// -----------------------------------------------------------------------------
//
MAknsRlParameterIterator* CAknsAlAnimationCommand::NamedReferenceIterator()
    {
    iReferenceContainer->Begin();
    return iReferenceContainer;
    }

// End of file.
