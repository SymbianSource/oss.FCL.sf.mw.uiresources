/*
* Copyright (c) 2007 Nokia Corporation and/or its subsidiary(-ies).
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


#ifndef AKNLAYOUT2HIERARCHY_H
#define AKNLAYOUT2HIERARCHY_H

#include <aknlayout2hierarchydef.h>

class AknLayout2Hierarchy
    {
public:
    IMPORT_C static TAknLayoutScalableComponentType GetComponentType(const TAknLayoutHierarchyComponentHandle& aComponentHandle);
    IMPORT_C static TAknLayoutScalableParameterLimits GetParamLimits(const TAknLayoutHierarchyComponentHandle& aComponentHandle);
    IMPORT_C static TAknWindowComponentLayout GetWindowComponentLayout(const TAknLayoutHierarchyComponentHandle& aComponentHandle);
    IMPORT_C static TAknTextComponentLayout GetTextComponentLayout(const TAknLayoutHierarchyComponentHandle& aComponentHandle);    
    };

#endif
