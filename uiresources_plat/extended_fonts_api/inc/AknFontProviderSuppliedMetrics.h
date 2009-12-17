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
* Description:  
*   Interface by which FontProvider supplies additional information to Avkon system 
*
*/


   
#ifndef AKNFONTPROVIDERSUPPLIEDMETRICS_H
#define AKNFONTPROVIDERSUPPLIEDMETRICS_H

#include <e32std.h>

class TAknFontProviderSuppliedMetrics
    {
public: // Setter and Getter methods
    IMPORT_C TInt ExcessAscent() const;
    IMPORT_C void SetExcessAscent(TInt aExcessAscent);
    IMPORT_C TInt ExcessDescent() const;
    IMPORT_C void SetExcessDescent(TInt aExcessDescent);
    IMPORT_C TInt MaxDescentToTextPaneBottom() const;
    IMPORT_C void SetMaxDescentToTextPaneBottom(TInt aMaxDescentToTextPaneBottom);
   
private: 
    TInt iExcessAscent;
    TInt iExcessDescent;
    TInt iMaxDescentToTextPaneBottom;
    TInt iSpare;
    };

#endif //AKNFONTPROVIDERSUPPLIEDMETRICS_H
