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
* Description:   Utility functions related to scalable icons.
*
*/




#ifndef AKN_INTERNAL_ICON_UTILS_H
#define AKN_INTERNAL_ICON_UTILS_H

class AknInternalIconUtils
    {
    public:	
    	//Set an app flag on if AknIcon
			IMPORT_C static void SetAppIcon(CFbsBitmap* aBmp);
			//not exported
			static TBool IsAknBitmap( const CFbsBitmap* aBitmap ); 
		};
#endif