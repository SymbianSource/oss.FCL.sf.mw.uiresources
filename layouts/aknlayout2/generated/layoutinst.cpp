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

// This is the main source file for a customisation DLL.
// It may be modified manually.

#include "adaptation_layer_aknlayout_elaf.h"
#include "adaptation_layer_aknapaclayout.h"
#include "adaptation_layer_applayout_elaf.h"
#include "adaptation_layer_appapaclayout.h"
#include "adaptation_layer_skinlayout.h"
#include "layoutmetadata_defaults.h"
#include "layoutmetadata_scrollbar.h"
#include "layoutmetadata_land.h"
#include "layoutmetadata_apac.h"
#include "layoutmetadata_abrw.h"
#include "layoutmetadata_pensupport.h"
#include "layoutmetadata_liststretching.h"
#include "layoutmetadata_msk.h"
#include "layoutmetadata_touchpane.h"

CDL_ARRAY_START(SCdlCustomisation, KCdlData)
	{
		CDL_CUSTOMISATION(Adaptation_Layer_AknLayout_Elaf),
		CDL_CUSTOMISATION(Adaptation_Layer_AknApacLayout),
		CDL_CUSTOMISATION(Adaptation_Layer_AppLayout_Elaf),
		CDL_CUSTOMISATION(Adaptation_Layer_AppApacLayout),
		CDL_CUSTOMISATION(Adaptation_Layer_SkinLayout),
		CDL_CUSTOMISATION(LayoutMetaData_defaults),
		CDL_CUSTOMISATION(LayoutMetaData_scrollbar),
		CDL_CUSTOMISATION(LayoutMetaData_land),
		CDL_CUSTOMISATION(LayoutMetaData_APAC),
		CDL_CUSTOMISATION(LayoutMetaData_abrw),
		CDL_CUSTOMISATION(LayoutMetaData_pensupport),
		CDL_CUSTOMISATION(LayoutMetaData_liststretching),
		CDL_CUSTOMISATION(LayoutMetaData_MSK),
		CDL_CUSTOMISATION(LayoutMetaData_touchpane),
	}
CDL_ARRAY_END(SCdlCustomisation, KCdlData);

GLREF_D const SCdlMain KCdlMainExport =
	{
	1,
	0,
	&KCdlData
	};

#include <ecom/ecom.h>
#include <ecom/implementationproxy.h>

static TAny* MainExport()
	{
	return (TAny*)&KCdlMainExport;
	}

const TImplementationProxy ImplementationTable[] =
	{
		{{0x101fe2aa}, ::MainExport}
	};

EXPORT_C const TImplementationProxy* ImplementationGroupProxy(TInt& aTableCount)
	{
	aTableCount = sizeof(ImplementationTable) / sizeof(TImplementationProxy);
	return ImplementationTable;
	}


