/*
 * Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
 * Description:    CSvgtRasterizerOOMPropertyMonitor class for OOM implementation.
 *
 */

#include "SvgtRasterizerOOMPropertyMonitor.h"
#include <graphics/fbsrasterizer.h>
#include <graphics/fbsrasterizerclearcache.h>
#include "SvgtRasterizerCacheLimitHandler.h"
#include <fbs.h>
//#include <e32debug.h>

CSvgtRasterizerOOMPropertyMonitor* CSvgtRasterizerOOMPropertyMonitor::NewL()
    {
    CSvgtRasterizerOOMPropertyMonitor* self = new (ELeave) CSvgtRasterizerOOMPropertyMonitor();
    CleanupStack::PushL(self);
    self->ConstructL();
    CleanupStack::Pop();
    return self;
    }

CSvgtRasterizerOOMPropertyMonitor::CSvgtRasterizerOOMPropertyMonitor()
: CActive(CActive::EPriorityStandard)
            {
            if (CActiveScheduler::Current())
                {
                CActiveScheduler::Add(this);
                }

            }

CSvgtRasterizerOOMPropertyMonitor::~CSvgtRasterizerOOMPropertyMonitor()
    {
    if (CActiveScheduler::Current())
        {    
        Cancel();
        }
    iOomWatcher.Close();
    } 

void CSvgtRasterizerOOMPropertyMonitor::ConstructL()
    {
    
    if (CActiveScheduler::Current())    
        {
        User::LeaveIfError(iOomWatcher.Attach(KSvgtPropertyCategory, ESvgtPropertyBool));
        Queue();
        }
    }

void CSvgtRasterizerOOMPropertyMonitor::RunL()
    {
    TBool changeCacheLimit=ETrue;
    iOomWatcher.Get(changeCacheLimit);
    iRasterizer = CFbsBitmap::Rasterizer();
    if(!changeCacheLimit)
        {
        MFbsRasterizerClearCache* cacheInterfacePtr = NULL;
        iRasterizer->GetInterface(TUid::Uid(KUidFbsRasterizerClearCache), (TAny*&)cacheInterfacePtr);
        if(cacheInterfacePtr)
            cacheInterfacePtr->ClearCache();
        }
    MSvgtRasterizerCacheLimitHandler* interfacePtr = NULL;
    iRasterizer->GetInterface(TUid::Uid(KUidEnableSvgtRasterizer), (TAny*&)interfacePtr);
    if(interfacePtr)
        interfacePtr->ChangeCacheLimit(changeCacheLimit);
    Queue();
    }

void CSvgtRasterizerOOMPropertyMonitor::DoCancel()
    {
    iOomWatcher.Cancel();
    }

void CSvgtRasterizerOOMPropertyMonitor::Queue()
    {
    if (!IsActive())
        {
        iOomWatcher.Subscribe(iStatus);
        SetActive();
        }
    }

