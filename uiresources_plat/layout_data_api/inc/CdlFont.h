/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
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

struct SIdMetricsPair
	{
    TInt iFontId;
    TInt iFontCategory;
    TInt iBodyHeight;
    TInt iBold;
    TInt iItalic;
    TInt iReserved;
	};
 
struct SLogicalIdMetricsIdPair
	{
    TInt iLogicalId;
    TInt iFontMetricsId;
	};
