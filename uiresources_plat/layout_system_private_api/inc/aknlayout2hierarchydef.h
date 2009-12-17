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


#ifndef AKNLAYOUT2HIERARCHYDEF_H
#define AKNLAYOUT2HIERARCHYDEF_H

#include <e32std.h>
#include <avkon.hrh>

#include <AknLayout2ScalableDef.h>

// UID Name: KUidAknLayoutSystemId
// Number Allocation (Decimal): 271069903 To 271069912 Inclusive
// Number Allocation (Hexadecimal): 102832CF To 102832D8 Inclusive.
const TInt KUidAknLayoutSystemId_AknLayout2 = 0x102832CF;

/**
* A handle to a layout component. 
*/
class TAknLayoutHierarchyComponentHandle
    {
public:    
    IMPORT_C TAknLayoutHierarchyComponentHandle();
    IMPORT_C TAknLayoutHierarchyComponentHandle(TInt aLayoutSystemId, TInt aApiId, TInt aComponentId);
    
    IMPORT_C TInt LayoutSystemId() const;
    IMPORT_C void SetLayoutSystemId(TInt aLayoutSystemId);

    IMPORT_C TInt ApiId() const;
    IMPORT_C TInt ComponentId() const;
    IMPORT_C TInt OptionIndex() const;
    IMPORT_C TInt VarietyIndex() const;
    IMPORT_C TInt Column() const;
    IMPORT_C TInt Row() const;
    IMPORT_C void SetApiId(TInt aApiId);
    IMPORT_C void SetComponentId(TInt aComponentId);
    IMPORT_C void SetOptionIndex(TInt aOptionIndex);
    IMPORT_C void SetVarietyIndex(TInt aVarietyIndex);
    IMPORT_C void SetColumn(TInt aColumn);
    IMPORT_C void SetRow(TInt aRow);
private:
    // an internal struct is used so that if a union is needed, it will be easier to implement
    struct TPrivateData_AknLayout2
        {
    public:
        TPrivateData_AknLayout2(        
            TInt iApiId,
            TInt iComponentId,
            TInt iOptionIndex,
            TInt iDrawingOrderIndex,
            TInt iVarietyIndex,
            TInt iColumn,
            TInt iRow);

    public:
        TInt iApiId;
        TInt iComponentId;
        TInt iOptionIndex;
        TInt iDrawingOrderIndex;
        TInt iVarietyIndex;
        TInt iColumn;
        TInt iRow;
        TInt iSpare1;
        TInt iSpare2;
        TInt iSpare3;
        TInt iSpare4;
        };
private:
    TInt iLayoutSystemId;
    TPrivateData_AknLayout2 iData;
private:
    };
    
#endif // AKNLAYOUT2HIERARCHYDEF_H