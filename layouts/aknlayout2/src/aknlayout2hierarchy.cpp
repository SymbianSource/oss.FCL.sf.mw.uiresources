/*
* Copyright (c) 2006-2007 Nokia Corporation and/or its subsidiary(-ies).
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


#include "aknlayout2hierarchydef.h"
#include "aknlayout2hierarchy.h"

#include <aknlayoutscalable_avkon.cdl.h>
#include <aknlayoutscalable_apps.cdl.h>
#include <layoutmetadata.cdl.h>

#include <CdlEngine.h>


#define AKNLAYOUT_DEFINE_BYTECODE(name,byte) const TUint8 name = byte;
#include "AknLayoutByteCodes.h"


#ifndef EKA2
GLDEF_C TInt E32Dll(TDllReason)
	{
	return KErrNone;
	}
#endif


//
// class TAknLayoutHierarchyComponentHandle
//

TAknLayoutHierarchyComponentHandle::TPrivateData_AknLayout2::TPrivateData_AknLayout2(        
    TInt aApiId,
    TInt aComponentId,
    TInt aOptionIndex,
    TInt aDrawingOrderIndex,
    TInt aVarietyIndex,
    TInt aColumn,
    TInt aRow)
    :
    iApiId(aApiId), 
    iComponentId(aComponentId),
    iOptionIndex(aOptionIndex),
    iDrawingOrderIndex(aDrawingOrderIndex),
    iVarietyIndex(aVarietyIndex),
    iColumn(aColumn),
    iRow(aRow) 
    {
    }


EXPORT_C TAknLayoutHierarchyComponentHandle::TAknLayoutHierarchyComponentHandle()
    :
    iLayoutSystemId(0),    
    iData(0, 0, 0, 0, 0, 0, 0)
    {
    }
    
EXPORT_C TAknLayoutHierarchyComponentHandle::TAknLayoutHierarchyComponentHandle(TInt aLayoutSystemId, TInt aApiId, TInt aComponentId)
    :
    iLayoutSystemId(aLayoutSystemId),
    iData(aApiId, aComponentId, 0, 0, 0, 0, 0)
    {
    }
    
EXPORT_C TInt TAknLayoutHierarchyComponentHandle::LayoutSystemId() const
    {
    return iLayoutSystemId;
    }

EXPORT_C TInt TAknLayoutHierarchyComponentHandle::ApiId() const
    {
    return iData.iApiId;
    }
    
EXPORT_C TInt TAknLayoutHierarchyComponentHandle::ComponentId() const
    {
    return iData.iComponentId;
    }
    
EXPORT_C TInt TAknLayoutHierarchyComponentHandle::OptionIndex() const
    {
    return iData.iOptionIndex;
    }
    
EXPORT_C TInt TAknLayoutHierarchyComponentHandle::VarietyIndex() const
    {
    return iData.iVarietyIndex;
    }
    
EXPORT_C TInt TAknLayoutHierarchyComponentHandle::Column() const
    {
    return iData.iColumn;
    }
    
EXPORT_C TInt TAknLayoutHierarchyComponentHandle::Row() const
    {
    return iData.iRow;
    }
    
EXPORT_C void TAknLayoutHierarchyComponentHandle::SetLayoutSystemId(TInt aLayoutSystemId)
    {
    iLayoutSystemId = aLayoutSystemId;
    }

EXPORT_C void TAknLayoutHierarchyComponentHandle::SetApiId(TInt aApiId)
    {
    iData.iApiId = aApiId;
    }
    
EXPORT_C void TAknLayoutHierarchyComponentHandle::SetComponentId(TInt aComponentId)
    {
    iData.iComponentId = aComponentId;
    }
    
EXPORT_C void TAknLayoutHierarchyComponentHandle::SetOptionIndex(TInt aOptionIndex)
    {
    iData.iOptionIndex = aOptionIndex;
    }
    
EXPORT_C void TAknLayoutHierarchyComponentHandle::SetVarietyIndex(TInt aVarietyIndex)
    {
    iData.iVarietyIndex = aVarietyIndex;
    }
    
EXPORT_C void TAknLayoutHierarchyComponentHandle::SetColumn(TInt aColumn)
    {
    iData.iColumn = aColumn;
    }
    
EXPORT_C void TAknLayoutHierarchyComponentHandle::SetRow(TInt aRow)
    {
    iData.iRow = aRow;
    }

// 
// class AknLayout2Hierarchy
// 

EXPORT_C TAknLayoutScalableComponentType AknLayout2Hierarchy::GetComponentType(const TAknLayoutHierarchyComponentHandle& aComponentHandle)
    {
    TAknLayoutScalableComponentType type(EAknLayoutScalableComponentTypeUnknown);

    TInt apiId = aComponentHandle.ApiId();
    TInt compId = aComponentHandle.ComponentId();

    TInt specialCompId(-1);
    switch(apiId)
        {
        case AknLayoutScalable_Avkon::KCdlInterfaceUidValue:
            {
            specialCompId = AknLayoutScalable_Avkon::EApiId_GetComponentTypeById;
            break;
            }
        case AknLayoutScalable_Apps::KCdlInterfaceUidValue:
            {
            specialCompId = AknLayoutScalable_Apps::EApiId_GetComponentTypeById;
            break;
            }
        default:
            {
            // and we know it's at ordinal 0 because that's what the layout compiler now does for all new layout interfaces.
            specialCompId = 0;
            break;
            }
        }
    
    // first of all we find the instance that implements the desired api
    const CCdlInstance* implementor = CdlEngine::Implementor(TUid::Uid(apiId), compId);
    
    // then we call the special function belonging to that instance
    // the cast is a cheat by using the apps namespace, as we know that the sig will be the same for all other layout interfaces
    type = (*(AknLayoutScalable_Apps::TGetComponentTypeById_sig*)(implementor->GetFunction(specialCompId)))(compId);

    return type;
    }
    
EXPORT_C TAknLayoutScalableParameterLimits AknLayout2Hierarchy::GetParamLimits(const TAknLayoutHierarchyComponentHandle& aComponentHandle)
    {
    TAknLayoutScalableParameterLimits limits;

    TInt apiId = aComponentHandle.ApiId();
    TInt compId = aComponentHandle.ComponentId();
    TInt varietyId = aComponentHandle.VarietyIndex();
    
    TInt specialCompId(-1);
    switch(apiId)
        {
        case AknLayoutScalable_Avkon::KCdlInterfaceUidValue:
            {
            specialCompId = AknLayoutScalable_Avkon::EApiId_GetParamLimitsById;
            break;
            }
        case AknLayoutScalable_Apps::KCdlInterfaceUidValue:
            {
            specialCompId = AknLayoutScalable_Apps::EApiId_GetParamLimitsById;
            break;
            }
        default:
            {
            // and we know it's at ordinal 1 because that's what the layout compiler now does for all new layout interfaces.
            specialCompId = 1;
            break;
            }
        }

    // first of all we find the instance that implements the desired api
    const CCdlInstance* implementor = CdlEngine::Implementor(TUid::Uid(apiId), compId);
    
    // then we call the special function belonging to that instance
    // the cast is a cheat by using the apps namespace, as we know that the sig will be the same for all other layout interfaces
    limits = (*(AknLayoutScalable_Apps::TGetParamLimitsById_sig*)(implementor->GetFunction(specialCompId)))(compId, varietyId);
    
    return limits;
    }
    
EXPORT_C TAknWindowComponentLayout AknLayout2Hierarchy::GetWindowComponentLayout(const TAknLayoutHierarchyComponentHandle& aComponentHandle)
    {
    TAknWindowComponentLayout layoutW;

    TInt apiId = aComponentHandle.ApiId();
    TInt compId = aComponentHandle.ComponentId();
    TInt varietyId = aComponentHandle.VarietyIndex();
    TInt column = aComponentHandle.Column();
    TInt row = aComponentHandle.Row();
    
    TInt specialCompId(-1);
    switch(apiId)
        {
        case AknLayoutScalable_Avkon::KCdlInterfaceUidValue:
            {
            specialCompId = AknLayoutScalable_Avkon::EApiId_GetWindowComponentById;
            break;
            }
        case AknLayoutScalable_Apps::KCdlInterfaceUidValue:
            {
            specialCompId = AknLayoutScalable_Apps::EApiId_GetWindowComponentById;
            break;
            }
        default:
            {
            // and we know it's at ordinal 2 because that's what the layout compiler now does for all new layout interfaces.
            specialCompId = 2;
            break;
            }
        }

    // first of all we find the instance that implements the desired api
    const CCdlInstance* implementor = CdlEngine::Implementor(TUid::Uid(apiId), compId);
    
    // then we call the special function belonging to that instance
    // the cast is a cheat by using the apps namespace, as we know that the sig will be the same for all other layout interfaces
    layoutW = (*(AknLayoutScalable_Apps::TGetWindowComponentById_sig*)(implementor->GetFunction(specialCompId)))(compId, varietyId, column, row);
            
    return layoutW;
    }
    
EXPORT_C TAknTextComponentLayout AknLayout2Hierarchy::GetTextComponentLayout(const TAknLayoutHierarchyComponentHandle& aComponentHandle)
    {
    TAknTextComponentLayout layoutT;
    
    TInt apiId = aComponentHandle.ApiId();
    TInt compId = aComponentHandle.ComponentId();
    TInt varietyId = aComponentHandle.VarietyIndex();
    TInt column = aComponentHandle.Column();
    TInt row = aComponentHandle.Row();
    
    TInt specialCompId(-1);
    switch(apiId)
        {
        case AknLayoutScalable_Avkon::KCdlInterfaceUidValue:
            {
            specialCompId = AknLayoutScalable_Avkon::EApiId_GetTextComponentById;
            break;
            }
        case AknLayoutScalable_Apps::KCdlInterfaceUidValue:
            {
            specialCompId = AknLayoutScalable_Apps::EApiId_GetTextComponentById;
            break;
            }
        default:
            {
            // cheat by using the apps namespace, as we know that the sig is the same, 
            // and we know it's at ordinal 3 because that's what the layout compiler now does for all new layout interfaces.
            specialCompId = 3;
            break;
            }
        }

    // first of all we find the instance that implements the desired api
    const CCdlInstance* implementor = CdlEngine::Implementor(TUid::Uid(apiId), compId);
    
    // then we call the special function belonging to that instance
    // the cast is a cheat by using the apps namespace, as we know that the sig will be the same for all other layout interfaces
    layoutT = (*(AknLayoutScalable_Apps::TGetTextComponentById_sig*)(implementor->GetFunction(specialCompId)))(compId, varietyId, column, row);
            
    return layoutT;
    }
    
// end of file
