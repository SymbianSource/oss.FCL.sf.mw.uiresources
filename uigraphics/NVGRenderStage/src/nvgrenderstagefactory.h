// Copyright (c) 2008-2010 Nokia Corporation and/or its subsidiary(-ies).
// All rights reserved.
// This component and the accompanying materials are made available
// under the terms of "Eclipse Public License v1.0"
// which accompanies this distribution, and is available
// at the URL "http://www.eclipse.org/legal/epl-v10.html".
//
// Initial Contributors:
// Nokia Corporation - initial contribution.
//
// Contributors:
//
// Description:
//

#ifndef NVGRENDERSTAGEFACTORY_H
#define NVGRENDERSTAGEFACTORY_H

/**
@file
@test
@internalComponent - Internal Symbian test code
*/

#include <graphics/wsplugin.h>
#include <graphics/wsrenderstagefactory.h>

class CWsRenderStage;
class MWsGraphicDrawerEnvironment;

/** This is an implementation of MWsRenderStageFactory, in the form of a CWsPlugin.
The window server will use this to create standard render stages for each screen,
if the ini file specifies them.
*/
class CNvgRenderStageFactory : public CWsPlugin, public MWsRenderStageFactory
	{
public:
	enum { EImplUid = 0x1028653B };
	
public:
	static CNvgRenderStageFactory* CreateL();
	~CNvgRenderStageFactory();
	void ConstructL(MWsGraphicDrawerEnvironment& aEnv,const TDesC8& aData);
	const TDesC& PluginName() const;

	// implementation of MWsObjectProvider
	TAny* ResolveObjectInterface(TUint aTypeId);

	// implementation of MWsRenderStageFactory
	virtual CWsRenderStage* CreateFinalRenderStageL(MWsScreen* aScreen, MWsScreenRedraw* aScreenRedraw, TInt aScreenNumber);
	virtual CWsRenderStage* CreateRenderStageL(MWsScreen* aScreen, MWsScreenRedraw* aScreenRedraw, CWsRenderStage* aNextStage);

private:
	CNvgRenderStageFactory();
	};

#endif // NVGRENDERSTAGEFACTORY_H
