/*
* Copyright (c) 2006-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Tfx parser.
*
*/


#include <TfxSrvEcomIds.h>
#include <f32file.h>
#include "tfxconfigparser.h"

_LIT8(KMimetype,"text/xml");
_LIT8(KManifestTag, "mf");
_LIT8(KSelTag,"sel");
_LIT8(KBaseSkinTag, "baseskin");
_LIT8(KEffectNameTag, "name");
_LIT8(KEffectFileTag, "file");
_LIT8(KEffectDefinitionsTag, "effectdefinitions");
_LIT8(KEffectTag, "effect");
_LIT8(KEffectWantedTimeTag, "wanted_frame_time");
_LIT8(KEffectMinTimeTag,"min_sleep_time");
_LIT8(KEffectCachePriorityTag, "cachepriority");
_LIT8(KPathTag, "path");
_LIT8(KMaxTransCacheSizeTag, "max_transition_cache_size");
_LIT8(KMaxCacheSizeTag, "max_cache_size");


_LIT8(KFullSCRTransTag,"fullscreentransitions");
_LIT8(KTransitionTag, "transition");
_LIT8(KContextTag, "context");
_LIT8(KUidTag, "Uid");

_LIT8(KCtrlTransTag, "controltransitions");
_LIT8(KContextUidTag, "context_uid");
_LIT8(KActionTag, "action");
_LIT8(KActionStringTag, "actionstring" );

_LIT8( KListTransTag, "listtransitions");
_LIT8( KTypeTag, "type" );

const TInt KListBackgroundContext = 1;
const TInt KListItemContext = 2;




_LIT(KTFXManifestFile, "z:\\resource\\effects\\manifest.mf");


CTFxEffect::~CTFxEffect()
    {
    delete iName;
    delete iFilename;
    }

const TDesC& CTFxEffect::Name()
    {
    if (!iName)
        {
        return KNullDesC;
        }
    return *iName;
    }

const TDesC& CTFxEffect::Filename()
    {
    if (!iFilename)
        {
        return KNullDesC;
        }
    return *iFilename;
    }

void CTFxEffect::SetName(const TDesC8& aName)
    {
    if (iName)
        {
        delete iName;
        iName = NULL;
        }
    iName = HBufC::NewL(aName.Length()*2);
    iName->Des().Copy(aName);
    }

void CTFxEffect::SetFilename(const TDesC8& aFilename)
    {
    if (iFilename)
        {
        delete iFilename;
        iFilename = NULL;
        }
    iFilename = HBufC::NewL(aFilename.Length()*2);
    iFilename->Des().Copy(aFilename);
    }

TInt CTFxEffect::WantedTime()
    {
    return iWantedTime;
    }
TInt CTFxEffect::MinTime()
    {
    return iMinTime;
    }

TInt CTFxEffect::CachePriority()
    {
    return iCachePriority;
    }

void CTFxEffect::SetWantedTime(const TDesC8& aTime)
    {
    if (aTime.Length() > 0)
        {
        TLex8 lexer(aTime);
        User::LeaveIfError(lexer.Val(iWantedTime));
        }
    else
        {
        iWantedTime = -1;
        }
    }

void CTFxEffect::SetMinTime(const TDesC8& aTime)
    {
    if (aTime.Length() > 0)
        {
        TLex8 lexer(aTime);
        User::LeaveIfError(lexer.Val(iMinTime));
        }
    else
        {
        iMinTime = -1;
        }
    }

void CTFxEffect::SetCachePriority(const TDesC8& aPriority)
    {
    if (aPriority.Length() > 0)
        {
        TLex8 lexer(aPriority);
        User::LeaveIfError(lexer.Val(iCachePriority));
        }
    else
        {
        iCachePriority = -1;
        }
    }

CTFxEffect::CTFxEffect() :  iWantedTime(-1), iMinTime(-1), iCachePriority(-1), iPathIndex(-1)
    {

    }

TInt CTFxEffect::PathIndex()
    {
    return iPathIndex;
    }

void CTFxEffect::SetPathIndex(TInt aIndex)
    {
    iPathIndex = aIndex;
    }

void CTFxEffect::SetMaxCacheSize(TInt aSize)
    {
    iMaxCacheSize = aSize;
    }

void CTFxEffect::SetMaxTransCacheSize(TInt aSize)
    {
    iMaxTransCacheSize = aSize;
    }

TInt CTFxEffect::MaxCacheSize()
    {
    return iMaxCacheSize;
    }

TInt CTFxEffect::MaxTransCacheSize()
    {
    return iMaxTransCacheSize;
    }

CTFxTransition::CTFxTransition()
    {
    }

CTFxTransition::~CTFxTransition()
    {
    delete iEffectName;
    }

const TUid CTFxTransition::Uid()
    {
    return iUid;
    }

TInt CTFxTransition::Type()
    {
    return iType;
    }

void CTFxTransition::SetUid(const TDesC8& aUid)
    {
    if (aUid.Length())
        {
        TLex8 lexer(aUid.Mid(2));
        TUint32 uid;

        User::LeaveIfError(lexer.BoundedVal(uid,EHex,KMaxTUint));
        iUid.iUid = uid;
        }
    else
        {
        iUid = KNullUid;
        }
    }

TInt CTFxTransition::ContextId()
    {
    return iContextId;
    }


void CTFxTransition::SetContextId(const TDesC8& aId)
    {
    if (aId.Length() > 0)
        {
        TLex8 lexer(aId);
        User::LeaveIfError(lexer.Val(iContextId));
        }
    else
        {
        iContextId = KMaxTInt;
        }
    }

void CTFxTransition::SetEffectNameL(const TDesC8& aEffect)
    {
    if (iEffectName)
        {
        delete iEffectName;
        iEffectName = NULL;
        }
    iEffectName = HBufC::NewL(aEffect.Length()*2);
    iEffectName->Des().Copy(aEffect);
    }

void CTFxTransition::SetType(const TDesC8& aType)
    {
    if (aType.Length() > 0)
        {
        TLex8 lexer(aType);
        User::LeaveIfError(lexer.Val(iType));
        }
    else
        {
        iType = 0;
        }
    }


const TDesC& CTFxTransition::EffectName()
    {
    if (iEffectName)
        {
        return *iEffectName;
        }
    return KNullDesC;
    }

void CTFxTransition::SetEffect(CTFxEffect* aEffect)
    {
    iEffect = aEffect;
    }

CTFxEffect* CTFxTransition::Effect()
    {
    return iEffect;
    }



CTFXConfigParser* CTFXConfigParser::NewL()
    {
    CTFXConfigParser* self = new (ELeave) CTFXConfigParser;
    CleanupStack::PushL(self);
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

CTFxCtrlTransition::CTFxCtrlTransition()
    {

    }

CTFxCtrlTransition::~CTFxCtrlTransition()
    {
    delete iEffectName;
    delete iActionString;
    }

const TUid CTFxCtrlTransition::ContextUid()
    {
    return iContextUid;
    }

void CTFxCtrlTransition::SetContextUidL(const TDesC8& aUid)
    {
    if (aUid.Length())
        {
        TLex8 lexer(aUid.Mid(2));
        TUint32 uid;

        User::LeaveIfError(lexer.BoundedVal(uid,EHex,KMaxTUint));
        iContextUid.iUid = uid;
        }
    else
        {
        iContextUid = KNullUid;
        }

    }

const TDesC& CTFxCtrlTransition::EffectName()
    {
    if (!iEffectName)
        {
        return KNullDesC;
        }

    return *iEffectName;
    }

void CTFxCtrlTransition::SetEffectNameL(const TDesC8& aEffect)
    {
    if (iEffectName)
        {
        delete iEffectName;
        iEffectName = NULL;
        }
    iEffectName = HBufC::NewL(aEffect.Length()*2);
    iEffectName->Des().Copy(aEffect);
    }

void CTFxCtrlTransition::SetActionStringL(const TDesC8& aActionStr)
    {
    if (iActionString)
        {
        delete iActionString;
        iActionString = NULL;
        }
    iActionString = HBufC::NewL(aActionStr.Length()*2);
    iActionString->Des().Copy(aActionStr);
    }

const TDesC& CTFxCtrlTransition::ActionString()
    {
    if (!iActionString)
        {
        return KNullDesC;
        }

    return *iActionString;
    }

void CTFxCtrlTransition::SetActionL(const TDesC8& aAction)
    {
    if (aAction.Length() > 0)
        {
        TLex8 lexer(aAction);
        User::LeaveIfError(lexer.Val(iAction));
        }
    else
        {
        iAction = 0;
        }
    }

TInt  CTFxCtrlTransition::Action()
    {
    return iAction;
    }

CTFxEffect*  CTFxCtrlTransition::Effect()
    {
    return iEffect;
    }

void CTFxCtrlTransition::SetEffect(CTFxEffect* aEffect)
    {
    iEffect = aEffect;
    }

void CTFxCtrlTransition::SetKmlRegistrationStatus(TBool aStatus)
    {
    iKmlRegistrationStatus = aStatus;
    }

TBool CTFxCtrlTransition::KmlRegistrationStatus()
    {
    return iKmlRegistrationStatus;
    }

void CTFXConfigParser::ConstructL()
    {
    iParser = CParser::NewL(KMimetype(), *this);
    }

CTFXConfigParser::CTFXConfigParser() : iParserState(EStateParsingNone)
    {
    }

CTFXConfigParser::~CTFXConfigParser()
    {
    if (iFsEffectArray)
        {
        iFsEffectArray->ResetAndDestroy();
        }
    if (iFsTransitionArray)
        {
        iFsTransitionArray->ResetAndDestroy();
        }
    if (iEffectDefPathArray)
        {
        iEffectDefPathArray->ResetAndDestroy();
        }
    if (iCtrlTransitionArray)
        {
        iCtrlTransitionArray->ResetAndDestroy();
        }
    if (iListTransitionArray)
        {
        iListTransitionArray->ResetAndDestroy();
        }
    delete iFsEffectArray;
    delete iFsTransitionArray;
    delete iEffectDefPathArray;
    delete iCtrlTransitionArray;
    delete iParser;
    delete iListTransitionArray;
    }

const TDesC& CTFXConfigParser::KmlBasePath(TInt aIndex)
    {
    if (iEffectDefPathArray && iEffectDefPathArray->Count() >= aIndex+1)
        {
        return *(iEffectDefPathArray->operator[](aIndex));
        }
    return KNullDesC;
    }

const TDesC& CTFXConfigParser::BaseSkinSelFile() const
    {
    return iBaseSkinSelFile;
    }

RPointerArray<CTFxTransition>* CTFXConfigParser::FsTransitionArrayL()
    {
    if (iFsTransitionArray)
        {
        return iFsTransitionArray;
        }
    return NULL; // disables compiler nag
    }

RPointerArray<CTFxCtrlTransition>* CTFXConfigParser::CtrlTransitionArrayL()
    {
    if (iCtrlTransitionArray)
        {
        return iCtrlTransitionArray;
        }
    return NULL; // disables compiler nag
    }

RPointerArray<CTFxTransition>* CTFXConfigParser::ListTransitionArrayL()
    {
    if (iListTransitionArray)
        {
        return iListTransitionArray;
        }
    return NULL; // disables compiler nag
    }

void CTFXConfigParser::ParseL(const TDesC& aFilename)
    {
    RFs fs;
    User::LeaveIfError(fs.Connect());
    CleanupClosePushL(fs);
    RFile file;
    User::LeaveIfError(file.Open(fs, aFilename, EFileRead | EFileShareReadersOnly));
    CleanupClosePushL(file);
    TInt filesize = 0;
    User::LeaveIfError(file.Size(filesize));
    HBufC8* buffer = HBufC8::NewLC(filesize);
    TPtr8 ptr( buffer->Des() );
    User::LeaveIfError(file.Read(ptr, filesize));

    iParser->ParseBeginL();
    iParser->ParseL(*buffer);
    iParser->ParseEndL();
    CleanupStack::PopAndDestroy(3); // fs, file, buffer
    }


void CTFXConfigParser::OnStartDocumentL(const RDocumentParameters& /*aDocParam*/, TInt /*aErrorCode*/)
    {
    }

void CTFXConfigParser::OnEndDocumentL(TInt /*aErrorCode*/)
    {
    }

void CTFXConfigParser::OnStartElementL(const RTagInfo& aElement, const RAttributeArray& aAttributes, TInt aErrorCode)
    {
    if (iFileType == EConfigFileManifest)
        {
        OnMfStartElementL(aElement, aAttributes, aErrorCode);
        return;
        }
    else if (iFileType == EConfigFileSel)
        {
        OnSelStartElementL(aElement, aAttributes, aErrorCode);
        return;
        }


    if (!aElement.LocalName().DesC().CompareF(KManifestTag))
        {
        iFileType = EConfigFileManifest;
        return;
        }
    else if (!aElement.LocalName().DesC().CompareF(KSelTag))
        {
        iFileType = EConfigFileSel;

        // find if there's baseskin attribute
        // if baseskin is found then parsing is stopped and
        // baseskin is parsed and registered first
        TInt attrCount( aAttributes.Count() );
        for( TInt i( 0 ); i < attrCount; i++ )
            {
            RAttribute attribute = aAttributes[i];
            RTagInfo tag = attribute.Attribute();
            if (!tag.LocalName().DesC().CompareF(KBaseSkinTag))
                {
                // base skin can be found once per parser
                if( iBaseSkinSelFile.Length() == 0 )
                    {
                    iBaseSkinSelFile.Copy( attribute.Value().DesC() );
                    User::Leave( KBaseSkinParserLeave );
                    }
                }
            }
        return;
        }
    }

void CTFXConfigParser::OnEndElementL(const RTagInfo& aElement, TInt aErrorCode)
    {
    if (!aElement.LocalName().DesC().CompareF(KManifestTag))
        {
        iFileType = EConfigFileUndefined;
        iManifestParsed = ETrue;
        return;
        }
    else if (!aElement.LocalName().DesC().CompareF(KSelTag))
        {
        iFileType = EConfigFileUndefined;
        return;
        }

    if (iFileType == EConfigFileManifest)
        {
        OnMfEndElementL(aElement, aErrorCode);
        iExtensionParsed = ETrue;
        return;
        }
    else if (iFileType == EConfigFileSel)
        {
        OnSelEndElementL(aElement, aErrorCode);
        return;
        }
    }

void CTFXConfigParser::OnContentL(const TDesC8& /*aBytes*/, TInt /*aErrorCode*/)
    {
    }

void CTFXConfigParser::OnStartPrefixMappingL(const RString& /*aPrefix*/, const RString& /*aUri*/, TInt /*aErrorCode*/)
    {
    }

void CTFXConfigParser::OnEndPrefixMappingL(const RString& /*aPrefix*/, TInt /*aErrorCode*/)
    {
    }

void CTFXConfigParser::OnIgnorableWhiteSpaceL(const TDesC8& /*aBytes*/, TInt /*aErrorCode*/)
    {
    }

void CTFXConfigParser::OnSkippedEntityL(const RString& /*aName*/, TInt /*aErrorCode*/)
    {
    }

void CTFXConfigParser::OnProcessingInstructionL(const TDesC8& /*aTarget*/, const TDesC8& /*aData*/, TInt /*aErrorCode*/)
    {
    }

void CTFXConfigParser::OnError(TInt /*aErrorCode*/)
    {
    }

TAny* CTFXConfigParser::GetExtendedInterface(const TInt32 /*aUid*/)
    {
    return NULL;
    }

void CTFXConfigParser::SetMaxTransCacheSizeL(const TDesC8& aCacheSize)
    {
    if (aCacheSize.Length() > 0)
        {
        TLex8 lexer(aCacheSize);
        User::LeaveIfError(lexer.Val(iMaxTransCacheSize));
        }
    else
        {
        iMaxTransCacheSize = 0;
        }
    }

void CTFXConfigParser::SetMaxCacheSizeL(const TDesC8& aCacheSize)
    {
    if (aCacheSize.Length() > 0)
        {
        TLex8 lexer(aCacheSize);
        User::LeaveIfError(lexer.Val(iMaxCacheSize));
        }
    else
        {
        iMaxCacheSize = 0;
        }
    }

void CTFXConfigParser::OnMfStartElementL(const RTagInfo& aElement, const RAttributeArray& aAttributes, TInt /*aErrorCode*/)
    {
    if (!aElement.LocalName().DesC().CompareF(KEffectDefinitionsTag))
        {
        if (!iFsEffectArray)
            {
            iFsEffectArray = new (ELeave) RPointerArray<CTFxEffect>;
            }
        if (!iEffectDefPathArray)
            {
            iEffectDefPathArray = new (ELeave) RPointerArray<HBufC>;
            }
        for (TInt count = 0; count < aAttributes.Count(); count++)
            {
            RAttribute attribute = aAttributes[count];
            RTagInfo tag = attribute.Attribute();
            if (!tag.LocalName().DesC().CompareF(KPathTag))
                {
                HBufC* path;
                path = HBufC::NewL(attribute.Value().DesC().Length()*2);
                path->Des().Copy(attribute.Value().DesC());
                iEffectDefPathArray->Append(path);
                }
            else if (!tag.LocalName().DesC().CompareF(KMaxTransCacheSizeTag))
                {
                SetMaxTransCacheSizeL(attribute.Value().DesC());
                }
            else if (!tag.LocalName().DesC().CompareF(KMaxCacheSizeTag))
                {
                SetMaxCacheSizeL(attribute.Value().DesC());
                }
            }
        return;
        }
    else if (!aElement.LocalName().DesC().CompareF(KEffectTag))
        {
        if (!iFsEffectArray)
            {
            User::Leave(KErrCorrupt);
            }
        iCurrentEffect = new (ELeave) CTFxEffect;
        iCurrentEffect->SetPathIndex(iEffectDefPathArray->Count()-1);
        iCurrentEffect->SetMaxTransCacheSize(iMaxTransCacheSize);
        iCurrentEffect->SetMaxCacheSize(iMaxCacheSize);
        }

    for (TInt count = 0; count < aAttributes.Count(); count++)
        {
        RAttribute attribute = aAttributes[count];
        RTagInfo tag = attribute.Attribute();
        if (!tag.LocalName().DesC().CompareF(KEffectNameTag))
            {
            iCurrentEffect->SetName(attribute.Value().DesC());
            }
        else if (!tag.LocalName().DesC().CompareF(KEffectFileTag))
            {
            iCurrentEffect->SetFilename(attribute.Value().DesC());
            }
        else if (!tag.LocalName().DesC().CompareF(KEffectWantedTimeTag))
            {
            iCurrentEffect->SetWantedTime(attribute.Value().DesC());
            }
        else if (!tag.LocalName().DesC().CompareF(KEffectMinTimeTag))
            {
            iCurrentEffect->SetMinTime(attribute.Value().DesC());
            }
        else if (!tag.LocalName().DesC().CompareF(KEffectCachePriorityTag))
            {
            iCurrentEffect->SetCachePriority(attribute.Value().DesC());
            }
        }
    }

void CTFXConfigParser::OnSelStartElementL(const RTagInfo& aElement, const RAttributeArray& aAttributes, TInt /*aErrorCode*/)
    {
    if (!aElement.LocalName().DesC().CompareF(KFullSCRTransTag))
        {
        iFsTransitionArray = new (ELeave) RPointerArray<CTFxTransition>;
        iParserState = EStateParsingFs;
        return;
        }
    else if (!aElement.LocalName().DesC().CompareF(KCtrlTransTag))
        {
        iCtrlTransitionArray = new (ELeave) RPointerArray<CTFxCtrlTransition>;
        iParserState = EStateParsingCtrl;
        return;
        }
    else if(!aElement.LocalName().DesC().CompareF(KListTransTag))
        {
        iListTransitionArray = new (ELeave) RPointerArray<CTFxTransition>;
        iParserState = EStateParsingList;
        }

   else if (!aElement.LocalName().DesC().CompareF(KTransitionTag))
        {
        if (iParserState == EStateParsingFs && !iFsTransitionArray)
            {
            User::Leave(KErrCorrupt);
            }
        else if (iParserState == EStateParsingCtrl && !iCtrlTransitionArray)
            {
            User::Leave(KErrCorrupt);
            }
        else if (iParserState == EStateParsingList && !iListTransitionArray)
            {
            User::Leave(KErrCorrupt);
            }
        // list transition has same params as fs transition
        if (iParserState == EStateParsingFs
            || iParserState == EStateParsingList)
            {
            iCurrentTransition = new (ELeave) CTFxTransition;

            for (TInt count = 0; count < aAttributes.Count(); count++)
                {
                RAttribute attribute = aAttributes[count];
                RTagInfo tag = attribute.Attribute();
                if (!tag.LocalName().DesC().CompareF(KContextTag))
                    {
                    iCurrentTransition->SetContextId(attribute.Value().DesC());
                    }
                else if (!tag.LocalName().DesC().CompareF(KEffectTag))
                    {
                    iCurrentTransition->SetEffectNameL(attribute.Value().DesC());
                    }
                else if (!tag.LocalName().DesC().CompareF(KUidTag))
                    {
                    iCurrentTransition->SetUid(attribute.Value().DesC());
                    }
                else if( !tag.LocalName().DesC().CompareF(KTypeTag))
                    {
                    iCurrentTransition->SetType(attribute.Value().DesC());
                    }
                }
            }
        else if (iParserState == EStateParsingCtrl)
            {
            iCurrentCtrlTransition = new (ELeave) CTFxCtrlTransition;
            for (TInt count = 0; count < aAttributes.Count(); count++)
                {
                RAttribute attribute = aAttributes[count];
                RTagInfo tag = attribute.Attribute();
                if (!tag.LocalName().DesC().CompareF(KContextUidTag))
                    {
                    iCurrentCtrlTransition->SetContextUidL(attribute.Value().DesC());
                    }
                else if (!tag.LocalName().DesC().CompareF(KEffectTag))
                    {
                    iCurrentCtrlTransition->SetEffectNameL(attribute.Value().DesC());
                    }
                else if (!tag.LocalName().DesC().CompareF(KActionTag))
                    {
                    iCurrentCtrlTransition->SetActionL(attribute.Value().DesC());
                    }
                else if (!tag.LocalName().DesC().CompareF(KActionStringTag))
                    {
                    iCurrentCtrlTransition->SetActionStringL(attribute.Value().DesC());
                    }
                }
            }
        }
    }

void CTFXConfigParser::OnMfEndElementL(const RTagInfo& aElement, TInt /*aErrorCode*/)
    {
    if (!aElement.LocalName().DesC().CompareF(KEffectDefinitionsTag))
        {
        }
    else if (!aElement.LocalName().DesC().CompareF(KEffectTag))
        {
        iFsEffectArray->Append(iCurrentEffect);
        iCurrentEffect = NULL;
        }
    }

void CTFXConfigParser::OnSelEndElementL(const RTagInfo& aElement, TInt /*aErrorCode*/)
    {
    if (!aElement.LocalName().DesC().CompareF(KFullSCRTransTag))
        {
        iParserState = EStateParsingNone;
        return;
        }
    else if (!aElement.LocalName().DesC().CompareF(KCtrlTransTag))
        {
        iParserState = EStateParsingNone;
        return;
        }
    else if(!aElement.LocalName().DesC().CompareF(KListTransTag))
        {
        iParserState = EStateParsingNone;
        return;
        }

    if (iParserState == EStateParsingFs || iParserState == EStateParsingList )
        {
        if (!aElement.LocalName().DesC().CompareF(KTransitionTag))
            {
            if (iFsEffectArray)
                {
                // pick up the associated kml file to the transition
                // from the effect definition
                for (TInt count = 0; count < iFsEffectArray->Count(); count++)
                    {
                    CTFxEffect* effect = iFsEffectArray->operator[](count);
                    if (! ( effect->Name().CompareF(iCurrentTransition->EffectName()) ) )
                        {
                        if (iCurrentTransition->ContextId() != KMaxTInt)
                            {
                            iCurrentTransition->SetEffect(effect);
                            }
                        }
                    }
                }
            if( iParserState == EStateParsingFs )
                {
                iFsTransitionArray->Append(iCurrentTransition);
                }
            else
                {
                iListTransitionArray->Append(iCurrentTransition);
                }
            iCurrentTransition=NULL;
            }
        }
    else if (iParserState == EStateParsingCtrl)
        {
        if (!aElement.LocalName().DesC().CompareF(KTransitionTag))
            {
            if (iFsEffectArray)
                {
                // pick up the associated kml file to the transition
                // from the effect definition
                TInt count = 0;
                for (count = 0; count < iFsEffectArray->Count(); count++)
                    {
                    CTFxEffect* effect = iFsEffectArray->operator[](count);
                    if (! ( effect->Name().CompareF(iCurrentCtrlTransition->EffectName()) ) )
                        {
                        iCurrentCtrlTransition->SetEffect(effect);
                        }
                    }
                // find duplicate kmls so that kml files get registered only once
                for (count = 0; count < iCtrlTransitionArray->Count(); count++)
                    {
                    CTFxCtrlTransition* trans = iCtrlTransitionArray->operator[](count);
                    if (!trans->EffectName().CompareF(iCurrentCtrlTransition->EffectName()))
                        {
                        iCurrentCtrlTransition->SetKmlRegistrationStatus(ETrue);
                        break;
                        }
                    }
                }
            iCtrlTransitionArray->Append(iCurrentCtrlTransition);
            iCurrentCtrlTransition=NULL;
            }
        }
    }

void StartSrvAndRegisterTransitionsL(const TDesC& aSkinExtensionFilename,
                                    MTransitionServer* aTransSrv,
                                    MTransitionServerController* aTransSrvCtrl,
                                    CTFXConfigParser* aConfigParser,
                                    TBool aSkipSrvStart )
    {

    aConfigParser->ParseL(KTFXManifestFile);

    aConfigParser->ParseL(aSkinExtensionFilename);

    // effectarray is owned by the parser -> don't push it
    RPointerArray<CTFxTransition>* transitionarray = aConfigParser->FsTransitionArrayL();

    RPointerArray<CTFxCtrlTransition>* ctrltransitionarray = aConfigParser->CtrlTransitionArrayL();

    RPointerArray<CTFxTransition>* listTransitionArray = aConfigParser->ListTransitionArrayL();

    TInt err(KErrNone);

    if (!transitionarray && !ctrltransitionarray && !listTransitionArray )
        {
        User::Leave(KErrGeneral);
        }

    TInt maxtransitioncachesize = 0;
    TInt maxcachesize = 0;
    if (transitionarray && transitionarray->Count())
        {
        CTFxTransition* transition = transitionarray->operator[](0);
        CTFxEffect* effect = transition->Effect();
        if (effect)
            {
            maxtransitioncachesize = effect->MaxTransCacheSize();
            maxcachesize = effect->MaxCacheSize();
            }
        }
    else if (ctrltransitionarray && ctrltransitionarray->Count())
        {
        CTFxCtrlTransition* ctrltransition = ctrltransitionarray->operator[](0);
        CTFxEffect* effect = ctrltransition->Effect();
        if (effect)
            {
            maxtransitioncachesize = effect->MaxTransCacheSize();
            maxcachesize = effect->MaxCacheSize();
            }
        }
    else if( listTransitionArray && listTransitionArray->Count() )
        {
        CTFxTransition* listTransition = listTransitionArray->operator[](0);
        CTFxEffect* effect = listTransition->Effect();
        if ( effect )
            {
            maxtransitioncachesize = effect->MaxTransCacheSize();
            maxcachesize = effect->MaxCacheSize();
            }
        }

    if( !aSkipSrvStart )
        {
        User::LeaveIfError(aTransSrvCtrl->StartTransitionServer(
                                    maxtransitioncachesize, maxcachesize ) );
        }

    if (!aTransSrv->IsConnected())
        {
        User::LeaveIfError(aTransSrv->Connect());
        }


    if (transitionarray)
        {

        for (TInt count = 0; count < transitionarray->Count();count++)
            {
            CTFxTransition* transition = transitionarray->operator[](count);
            CTFxEffect* effect = transition->Effect();
            if ( effect && effect->PathIndex() >=0 )
                {
                err = aTransSrv->RegisterFullscreenKml(transition->ContextId(),
                    transition->Uid(),
                    aConfigParser->KmlBasePath(effect->PathIndex()),
                    effect->Filename(),
                    effect->CachePriority(),
                    effect->WantedTime(),
                    effect->MinTime());
                }
            // in KML registration leave only in OOM cases, otherwise
            // ignore errors and try to register all possible KMLs
            if( err == KErrNoMemory )
                {
                User::LeaveNoMemory();
                }
            }
        }
    if (ctrltransitionarray)
        {

        for (TInt count = 0; count < ctrltransitionarray->Count();count++)
            {
            CTFxCtrlTransition* ctrltransition = ctrltransitionarray->operator[](count);
            CTFxEffect* effect = ctrltransition->Effect();
            if ( effect && effect->PathIndex() >=0)
                {
                if (!ctrltransition->KmlRegistrationStatus())
                    {
                    err = aTransSrv->RegisterControlKml(ctrltransition->ContextUid(),
                        aConfigParser->KmlBasePath(effect->PathIndex()),
                        effect->Filename(), effect->WantedTime(), effect->MinTime());
                    if( err == KErrNoMemory )
                        {
                        User::LeaveNoMemory();
                        }
                    }
                err = aTransSrv->RegisterControlAction(ctrltransition->ContextUid(),
                    ctrltransition->Action(),
                    ctrltransition->ActionString());

                if( err == KErrNoMemory )
                    {
                    User::LeaveNoMemory();
                    }
                }
            }
        }

    if (listTransitionArray)
        {

        for( TInt i( 0 ); i < listTransitionArray->Count(); i++ )
            {

            CTFxTransition* listTransition = listTransitionArray->operator[](i);

            CTFxTransition* listBackgroundTrans = NULL;
            CTFxTransition* listItemTrans = NULL;

            if( listTransition->ContextId() == KListBackgroundContext )
                {
                listBackgroundTrans = listTransition;
                }
            else if( listTransition->ContextId() == KListItemContext )
                {
                listItemTrans = listTransition;
                }

            // find a pair (list item - list background) for this transition
            for( TInt j(i+1); j < listTransitionArray->Count(); j++ )
                {
                CTFxTransition* lt = listTransitionArray->operator[]( j );

                if ( (lt->Uid() == listTransition->Uid()) &&
                    lt->Type() == listTransition->Type() )
                    {
                    if( lt->ContextId() == KListBackgroundContext )
                        {
                        listBackgroundTrans = lt;
                        }
                     else if( lt->ContextId() == KListItemContext )
                        {
                        listItemTrans = lt;
                        }
                    }
                }

            if( listBackgroundTrans && listItemTrans )
                {
                CTFxEffect* listBgEffect = listBackgroundTrans->Effect();
                CTFxEffect* listItemEffect = listItemTrans->Effect();

                if( listBgEffect && listItemEffect )
                    {
                    TInt type( 0 );
                    type = listBackgroundTrans->Type();
                    if( type == 0 )
                        {
                        type = listItemTrans->Type();
                        }

                    err = aTransSrv->RegisterListBoxKml(
                                            listBackgroundTrans->Uid(),
                                            type,
                                            aConfigParser->KmlBasePath(listBgEffect->PathIndex()),
                                            listBgEffect->Filename(),
                                            listItemEffect->Filename() );

                    if( err == KErrNoMemory )
                        {
                        User::LeaveNoMemory();
                        }
                    }
                }
            }
        }
    }

// End of file
