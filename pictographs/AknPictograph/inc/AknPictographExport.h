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
* Description:  Entry point of the polymorphic DLL.
*
*
*/


#ifndef AKN_PICTOGRAPH_EXPORT_H
#define AKN_PICTOGRAPH_EXPORT_H

// INCLUDES
#include <e32std.h>

// FORWARD DECLARATIONS

class MAknPictographDrawer;
class CCoeControl;
class MAknPictographAnimatorCallBack;

// The only export in DLL
IMPORT_C MAknPictographDrawer* PictographDrawerFactoryFunctionL(
    MAknPictographAnimatorCallBack& aCallBack );

#endif      // AKN_PICTOGRAPH_EXPORT_H
            
// End of File
