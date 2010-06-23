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
* Description:   MSvgtRasterizerCacheLimitHandler class.
*
*/

#if !defined(_ENABLESVGTRASTERIZER_H_)
#define _ENABLESVGTRASTERIZER_H_
#include <e32def.h>

const TUint32 KUidEnableSvgtRasterizer = 0x10286586;

class MSvgtRasterizerCacheLimitHandler
    {
public:
    virtual void ChangeCacheLimit( TBool aChangeCacheLimit ) = 0;
    };

#endif //_ENABLESVGTRASTERIZER_H_
