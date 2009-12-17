/*
* Copyright (c) 2004 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   Object holding metrics returned from fontprovider
*
*/



// INCLUDE FILES

#include "AknFontProviderSuppliedMetrics.h"

// CONSTANTS

// ============================ MEMBER FUNCTIONS ===============================

EXPORT_C TInt TAknFontProviderSuppliedMetrics::ExcessAscent()const
	{
	return iExcessAscent;
	}

EXPORT_C void TAknFontProviderSuppliedMetrics::SetExcessAscent(TInt aExcessAscent)
	{
	iExcessAscent = aExcessAscent;
	}

EXPORT_C TInt TAknFontProviderSuppliedMetrics::ExcessDescent() const
	{
	return iExcessDescent;
	}

EXPORT_C void TAknFontProviderSuppliedMetrics::SetExcessDescent(TInt aExcessDescent)
	{
	iExcessDescent = aExcessDescent;
	}

EXPORT_C TInt TAknFontProviderSuppliedMetrics::MaxDescentToTextPaneBottom() const
	{
	return iMaxDescentToTextPaneBottom;
	}

EXPORT_C void TAknFontProviderSuppliedMetrics::SetMaxDescentToTextPaneBottom(TInt aMaxDescentToTextPaneBottom)
	{
	iMaxDescentToTextPaneBottom = aMaxDescentToTextPaneBottom;
	}
