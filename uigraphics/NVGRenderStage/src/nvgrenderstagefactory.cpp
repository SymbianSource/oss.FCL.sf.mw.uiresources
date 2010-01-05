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

#include "nvgrenderstagefactory.h"
#include "nvgrenderstage.h"
#include "nvgrenderstagepanic.h"

_LIT(KNvgRenderStageName, "NVGRenderStage");

void Panic(TNvgRenderStagePanic aPanic)
	{
	_LIT(KNvgRenderStagePanic, "NvgRenderStage");
	User::Panic(KNvgRenderStagePanic, aPanic);
	}

CNvgRenderStageFactory* CNvgRenderStageFactory::CreateL()
	{
	return new(ELeave) CNvgRenderStageFactory;
	}
	
void CNvgRenderStageFactory::ConstructL(MWsGraphicDrawerEnvironment& aEnv, const TDesC8& /*aData*/)
	{
	BaseConstructL(aEnv);
	}
	
CNvgRenderStageFactory::CNvgRenderStageFactory()
	{
	}
	
CNvgRenderStageFactory::~CNvgRenderStageFactory()
	{
	}

/**
Overidding MWsObjectProvider
*/
TAny* CNvgRenderStageFactory::ResolveObjectInterface(TUint aTypeId)
	{
	switch (aTypeId)
		{
		case KMWsRenderStageFactory:
			return static_cast<MWsRenderStageFactory*>(this);
		}

	return NULL;
	}

CWsRenderStage* CNvgRenderStageFactory::CreateFinalRenderStageL(MWsScreen* /*aScreen*/, MWsScreenRedraw* /*aScreenRedraw*/, TInt /*aScreenNumber*/)
	{	
	Panic(EExtendedBitmapRenderStageMustNotBeFinal);
	return NULL;
	}

#ifndef SYMBIAN_GRAPHICS_GCE
#error ("must compile with SYMBIAN_GRAPHICS_GCE")
#endif

CWsRenderStage* CNvgRenderStageFactory::CreateRenderStageL(MWsScreen* aScreen, MWsScreenRedraw* aScreenRedraw, CWsRenderStage* aNextStage)
	{
	CNvgRenderStage* stage = CNvgRenderStage::NewL(&Env(), aScreen, aScreenRedraw, aNextStage);
	return stage;
	}

const TDesC& CNvgRenderStageFactory::PluginName() const
	{
	return KNvgRenderStageName;
	}
