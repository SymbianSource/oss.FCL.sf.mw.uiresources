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
* Description:   Inline file for AknIconUtils.h
*
*/



inline TAknContentDimensions::TAknContentDimensions():
    iWidth(0),iHeight(0)
    {
    }

inline TAknContentDimensions::TAknContentDimensions(TReal32 aWidth, TReal32 aHeight):
    iWidth(aWidth),iHeight(aHeight)
    {
    }
  
inline void TAknContentDimensions::SetDimensions(TReal32 aWidth, TReal32 aHeight)
    {
    iWidth  = aWidth;
    iHeight = aHeight;
    }
    
inline void TAknContentDimensions::SetDimensions(const TSize& aDimensions)
    {
    iWidth  = aDimensions.iWidth;
    iHeight = aDimensions.iHeight;
    }
  
//  End of File
