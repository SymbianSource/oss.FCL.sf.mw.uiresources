/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Skin client member data struct.
*
*/


// INCLUDE FILES

#ifndef AKNSSRVCLIENTMEMBERDATA_H
#define AKNSSRVCLIENTMEMBERDATA_H

// CLASS DECLARATION

/**
* A data structure class containing the member variables of RAknsSrvSession to
* allow binary compatible additions/changes.
*
* @lib AknSkinSrv.lib
*
* @since 2.0
*
* @internal
*/
struct TAknsSrvClientMemberData
    {
    MAknsSkinChangeObserver* iObserver;
    CAknsSkinChangeHandler* iHandler;
    };

#endif // AKNSSRVCLIENTMEMBERDATA_H

// End of File
