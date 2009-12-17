@echo off
rem
rem Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
rem All rights reserved.
rem This component and the accompanying materials are made available
rem under the terms of "Eclipse Public License v1.0"
rem which accompanies this distribution, and is available
rem at the URL "http://www.eclipse.org/legal/epl-v10.html".
rem
rem Initial Contributors:
rem Nokia Corporation - initial contribution.
rem
rem Contributors:
rem
rem Description:
rem
@echo on
@echo off
aknlayoutcompiler MLCompData2CDL -nodeletes -allparams ..\xml\av\_all\php_av_qhd_prt_tch\display_eur_compData.xml ..\xml\av\_all\phl_av_qhd_lsc_tch\display_eur_compData.xml ..\cdl\AknLayoutScalable_Avkon.cdl 0x1020384E
aknlayoutcompiler MLCompData2CDL -nodeletes -allparams ..\xml\apps\_all\php_apps_qhd_prt_tch\display_eur_compData.xml ..\xml\apps\_all\phl_apps_qhd_lsc_tch\display_eur_compData.xml ..\cdl\AknLayoutScalable_Apps.cdl 0x1020384F
aknlayoutcompiler MLCompData2CDL -nodeletes -allparams ..\xml\c\_all\hhp_c_qhd_prt_tch\display_eur_compData.xml ..\xml\c\_all\hhl_c_qhd_lsc_tch\display_eur_compData.xml ..\cdl\AknLayoutScalable_UiAccel.cdl 0x10203850
