/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
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
* Description: 
*
*/

#include <ecom/ecom.h>
#include <ecom/implementationproxy.h>
#include <oommonitorplugin.h>
#include "AknIconSrvClient.h"
#include "akniconconfig.h"

class CAknIconOomMonitorPlugin : public COomMonitorPlugin
	{
public:
	CAknIconOomMonitorPlugin();
	~CAknIconOomMonitorPlugin();
	void ConstructL();
		
public:
	void FreeRam();
	void MemoryGood();
	};


CAknIconOomMonitorPlugin::CAknIconOomMonitorPlugin()
	{
	}
	
CAknIconOomMonitorPlugin::~CAknIconOomMonitorPlugin()
	{
	RAknIconSrvClient::Disconnect();
	}
	
void CAknIconOomMonitorPlugin::ConstructL()
	{
	COomMonitorPlugin::ConstructL();
	User::LeaveIfError( RAknIconSrvClient::Connect() );
	}
	
void CAknIconOomMonitorPlugin::FreeRam()
	{
	// disable the AknIcon cache and free all cached icons
	AknIconConfig::EnableAknIconSrvCache( EFalse );
	}
	
void CAknIconOomMonitorPlugin::MemoryGood()
	{
	// Re-enable AknIcon icon caching
	AknIconConfig::EnableAknIconSrvCache( ETrue );
	}


TAny* CreatePlugin()
	{
	CAknIconOomMonitorPlugin* plugin = new(ELeave) CAknIconOomMonitorPlugin;
	CleanupStack::PushL(plugin);
	plugin->ConstructL();
	CleanupStack::Pop(plugin);
	return plugin;
	}

const TImplementationProxy ImplementationTable[] =
	{
	{{0x10281fe6}, ::CreatePlugin}
	};

EXPORT_C const TImplementationProxy* ImplementationGroupProxy(TInt& aTableCount)
	{
	aTableCount = sizeof(ImplementationTable) / sizeof(TImplementationProxy) ;
	return ImplementationTable;
	}
