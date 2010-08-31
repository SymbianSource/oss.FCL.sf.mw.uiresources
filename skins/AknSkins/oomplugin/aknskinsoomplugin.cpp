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
* Description:  OOM plugin for skin server.
*
*/

#include <ecom/ecom.h>
#include <ecom/implementationproxy.h>
#include <oommonitorplugin.h>
#include <AknsSrvClient.h>
#include <w32std.h>

class CAknSkinsOomMonitorPlugin : public COomMonitorPlugin
    {
public:
    CAknSkinsOomMonitorPlugin();
    ~CAknSkinsOomMonitorPlugin();
    void ConstructL();

public:
    void FreeRam();
    void MemoryGood();

private:
    RAknsSrvSession iSkinSrvSession;
    };

// -----------------------------------------------------------------------------
// C++ constructor.
// -----------------------------------------------------------------------------
//
CAknSkinsOomMonitorPlugin::CAknSkinsOomMonitorPlugin()
    {
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknSkinsOomMonitorPlugin::~CAknSkinsOomMonitorPlugin()
    {
    iSkinSrvSession.Close();
    }

// -----------------------------------------------------------------------------
// Symbian two-phased constructor (2nd phase).
// -----------------------------------------------------------------------------
//
void CAknSkinsOomMonitorPlugin::ConstructL()
    {
    COomMonitorPlugin::ConstructL();
    User::LeaveIfError( iSkinSrvSession.Connect() );
    }

// -----------------------------------------------------------------------------
// Gets display type.
// -----------------------------------------------------------------------------
//
TAknsSrcScreenMode GetDisplayTypeL(RWsSession& aSession)
    {
    CWsScreenDevice* sc = new (ELeave) CWsScreenDevice(aSession);
    CleanupStack::PushL(sc);
    sc->Construct();
    TSize screensize(0,0);
    screensize = sc->SizeInPixels();
    CleanupStack::PopAndDestroy();// screendevice
    if (screensize.iWidth > screensize.iHeight)
        {
        return EAknsSrvScrModeLandscape;
        }
    else if (screensize.iWidth < screensize.iHeight)
        {
        return EAknsSrvScrModePortrait;
        }
    else // square
        {
        return EAknsSrvScrModeSquare;
        }
    }

// -----------------------------------------------------------------------------
// Tries to free RAM.
// -----------------------------------------------------------------------------
//
void CAknSkinsOomMonitorPlugin::FreeRam()
    {
    TInt err(KErrNone);
    TAknsSrcScreenMode mode = EAknsSrvScrModeSquare;
    TRAP(err, mode = GetDisplayTypeL(WsSession()));
    if (mode != EAknsSrvScrModeSquare)
        {
#if defined(_DEBUG)
        RDebug::Print(_L("CAknSkinsOomMonitorPlugin: Starting to free memory, mode %d"), mode);
#endif
        iSkinSrvSession.FreeUnnecessaryLayoutBitmaps(mode);
        }
    }

// -----------------------------------------------------------------------------
// CAknSkinsOomMonitorPlugin::MemoryGood
// -----------------------------------------------------------------------------
//
void CAknSkinsOomMonitorPlugin::MemoryGood()
    {
    }

// -----------------------------------------------------------------------------
// Creates plugin.
// -----------------------------------------------------------------------------
//
TAny* CreatePlugin()
    {
    CAknSkinsOomMonitorPlugin* plugin = new(ELeave) CAknSkinsOomMonitorPlugin;
    CleanupStack::PushL(plugin);
    plugin->ConstructL();
    CleanupStack::Pop(plugin);
    return plugin;
    }

// -----------------------------------------------------------------------------
// Implementation table for plugin.
// -----------------------------------------------------------------------------
//
const TImplementationProxy ImplementationTable[] =
    {
    {{0x10207140}, ::CreatePlugin}
    };

// -----------------------------------------------------------------------------
// ImplementationGroupProxy
// -----------------------------------------------------------------------------
//
EXPORT_C const TImplementationProxy* ImplementationGroupProxy(TInt& aTableCount)
    {
    aTableCount = sizeof(ImplementationTable) / sizeof(TImplementationProxy) ;
    return ImplementationTable;
    }

// End of file

