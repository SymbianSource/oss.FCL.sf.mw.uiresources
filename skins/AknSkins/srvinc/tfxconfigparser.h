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


#ifndef __TFXCONFIGPARSER__H__
#define __TFXCONFIGPARSER__H__

#include <xml/parser.h>
#include <xml/contenthandler.h>
#include <mtransitionservercontroller.h>
#include <mtransitionserver.h>

using namespace Xml;
class CTFXConfigParser;

const TInt  KBaseSkinParserLeave = -1000;

void StartSrvAndRegisterTransitionsL(const TDesC& aSkinExtensionFilename,
                                MTransitionServer* aTransSrv,
                                MTransitionServerController* aTransSrvCtrl,
                                CTFXConfigParser* aConfigParser,
                                TBool aSkipSrvStart = EFalse );

enum TTFxParserState
    {
    EStateParsingNone,
    EStateParsingFs,
    EStateParsingCtrl,
    EStateParsingList
    };

NONSHARABLE_CLASS(CTFxEffect) : public CBase
    {
    public:
        CTFxEffect();
        ~CTFxEffect();
        const TDesC& Name();
        const TDesC& Filename();
        TInt WantedTime();
        TInt MinTime();
        TInt CachePriority();
        TInt PathIndex();
        void SetName(const TDesC8& aName);
        void SetFilename(const TDesC8& aFilename);
        void SetWantedTime(const TDesC8& aTime);
        void SetMinTime(const TDesC8& aTime);
        void SetCachePriority(const TDesC8& aPriority);
        void SetPathIndex(TInt aIndex);
        void SetMaxCacheSize(TInt aSize);
        void SetMaxTransCacheSize(TInt aSize);
        TInt MaxCacheSize();
        TInt MaxTransCacheSize();
    private:
        HBufC* iName;
        HBufC* iFilename;
        TInt iWantedTime;
        TInt iMinTime;
        TInt iCachePriority;
        TInt iPathIndex;
        TInt iMaxCacheSize;
        TInt iMaxTransCacheSize;
    };

NONSHARABLE_CLASS(CTFxTransition) : public CBase
    {
    public:
        CTFxTransition();
        ~CTFxTransition();
        TInt ContextId();
        const TDesC& EffectName();
        const TUid Uid();
        TInt Type();
        void SetUid(const TDesC8& aUid);
        void SetContextId(const TDesC8& iId);
        void SetEffectNameL(const TDesC8& aEffect);
        void SetEffect(CTFxEffect* aEffect);
        void SetType(const TDesC8& aType );
        CTFxEffect* Effect();
    private:
        TInt iContextId;
        HBufC* iEffectName;
        TUid iUid;
        // not owned
        CTFxEffect* iEffect;
        TInt iType;
    };

NONSHARABLE_CLASS(CTFxCtrlTransition) : public CBase
    {
    public:
        CTFxCtrlTransition();
        ~CTFxCtrlTransition();
        const TUid ContextUid();
        void SetContextUidL(const TDesC8& aUid);
        const TDesC& EffectName();
        void SetEffectNameL(const TDesC8& aEffect);
        void SetActionStringL(const TDesC8& aActionStr);
        const TDesC& ActionString();
        void SetActionL(const TDesC8& aAction);
        TInt Action();
        CTFxEffect* Effect();
        void SetEffect(CTFxEffect* aEffect);
        void SetKmlRegistrationStatus(TBool aStatus);
        TBool KmlRegistrationStatus();
    private:
        HBufC* iEffectName;
        HBufC* iActionString;
        TInt iAction;
        TUid iContextUid;
        CTFxEffect* iEffect;
        TBool iKmlRegistrationStatus;
    };

NONSHARABLE_CLASS(CTFXConfigParser) : public CBase, public MContentHandler
    {
    public:
        enum TConfigFileType
            {
            EConfigFileUndefined,
            EConfigFileManifest,
            EConfigFileSel
            };

        static CTFXConfigParser* NewL();
        void ParseL(const TDesC& aFilename);
        ~CTFXConfigParser();

        RPointerArray<CTFxTransition>* FsTransitionArrayL();
        RPointerArray<CTFxCtrlTransition>* CtrlTransitionArrayL();
        RPointerArray<CTFxTransition>* ListTransitionArrayL();
        const TDesC& KmlBasePath(TInt aIndex);
        const TDesC& BaseSkinSelFile() const;

        // from contenthandler

        void OnStartDocumentL(const RDocumentParameters& aDocParam, TInt aErrorCode);
        void OnEndDocumentL(TInt aErrorCode);
        void OnStartElementL(const RTagInfo& aElement, const RAttributeArray& aAttributes, TInt aErrorCode);
        void OnEndElementL(const RTagInfo& aElement, TInt aErrorCode);
        void OnContentL(const TDesC8& aBytes, TInt aErrorCode);
        void OnStartPrefixMappingL(const RString& aPrefix, const RString& aUri, TInt aErrorCode);
        void OnEndPrefixMappingL(const RString& aPrefix, TInt aErrorCode);
        void OnIgnorableWhiteSpaceL(const TDesC8& aBytes, TInt aErrorCode);
        void OnSkippedEntityL(const RString& aName, TInt aErrorCode);
        void OnProcessingInstructionL(const TDesC8& aTarget, const TDesC8& aData, TInt aErrorCode);
        void OnError(TInt aErrorCode);
        TAny* GetExtendedInterface(const TInt32 aUid);
    private:
        void OnMfStartElementL(const RTagInfo& aElement, const RAttributeArray& aAttributes, TInt aErrorCode);
        void OnSelStartElementL(const RTagInfo& aElement, const RAttributeArray& aAttributes, TInt aErrorCode);
        void OnMfEndElementL(const RTagInfo& aElement, TInt aErrorCode);
        void OnSelEndElementL(const RTagInfo& aElement, TInt aErrorCode);
        void SetMaxTransCacheSizeL(const TDesC8& aCacheSize);
        void SetMaxCacheSizeL(const TDesC8& aCacheSize);

    protected:
        CTFXConfigParser();
        void ConstructL();

    private:
        CParser* iParser;
        TConfigFileType iFileType;

        RPointerArray<CTFxEffect>* iFsEffectArray;
        CTFxEffect* iCurrentEffect;

        CTFxTransition* iCurrentTransition;
        CTFxCtrlTransition* iCurrentCtrlTransition;

        RPointerArray<CTFxTransition>* iFsTransitionArray;
        RPointerArray<CTFxCtrlTransition>* iCtrlTransitionArray;
        RPointerArray<CTFxTransition>* iListTransitionArray;
        RPointerArray<HBufC>* iEffectDefPathArray;

        TBool iManifestParsed;
        TBool iExtensionParsed;

        TTFxParserState iParserState;

        TInt iMaxCacheSize;
        TInt iMaxTransCacheSize;
        TFileName iBaseSkinSelFile;
    };

#endif