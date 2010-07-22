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
* Description:   CSvgtRasterizerOOMPropertyMonitor class for OOM implementation.
*
*/
#if !defined(_SVGTRASTERIZEROOMPROPERTYMONITOR_H_)
#define _SVGTRASTERIZEROOMPROPERTYMONITOR_H_

#include <e32base.h>
#include <e32property.h>
#include "SvgtRasterizerKeyDefs.hrh"
class CFbsRasterizer;

class CSvgtRasterizerOOMPropertyMonitor : public CActive
    {
public:
    static CSvgtRasterizerOOMPropertyMonitor* NewL();
    ~CSvgtRasterizerOOMPropertyMonitor();
    
private: //Class methods
    CSvgtRasterizerOOMPropertyMonitor();
    void ConstructL();
    void Queue();

private: //From CActive
    void RunL();
    void DoCancel();

private:
    RProperty iOomWatcher;
    CFbsRasterizer* iRasterizer;
    };
    
#endif //_SVGTRASTERIZEROOMPROPERTYMONITOR_H_

    
