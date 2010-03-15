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

// It contains the client API.
// It should not be modified manually.

#ifndef AKNLAYOUTSCALABLE_UIACCEL_CDL
#define AKNLAYOUTSCALABLE_UIACCEL_CDL

#include <CdlEngine.h>
#include <aknlayoutscalable_uiaccel.cdl.common.h>

namespace AknLayoutScalable_UiAccel
{

class CInstance;

// Standard interface functions 
inline void LoadCustomisationL(const TCdlRef& aRef)                          { CdlEngine::LoadCustomisationL(aRef); }
inline void LoadCustomisationL(const TDesC& aLibName, TInt aInstId)          { TCdlRef ref = { aInstId, { KCdlInterfaceUidValue }, &aLibName }; LoadCustomisationL(ref); }
inline void RequireCustomisationL()                                          { CdlEngine::RequireCustomisationL(&KCdlInterface); }
inline TBool IsCustomisationStarted()                                        { return CdlEngine::IsCustomisationStarted(&KCdlInterface); }
inline const CInstance& CustomisationInstance()                              { return (const CInstance&)(CdlEngine::CustomisationInstance(KCdlInterfaceUid)); }
inline void SetCustomisationChangeObserverL(MCdlChangeObserver* aObserver)   { CdlEngine::SetCustomisationChangeObserverL(aObserver, KCdlInterfaceUid); }

inline const TCdlRef& LastAccessedRef()                                      { return CdlEngine::LastAccessedRef(KCdlInterfaceUid); }
inline void FileNameRelativeToLastAccessedInstance(TFileName& aFileName)     { CdlEngine::FileNameRelativeToLastAccessedInstance(KCdlInterfaceUid, aFileName); }


// CDL API functions, as defined in aknlayoutscalable_uiaccel.cdl

// Generic API
inline TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId)		{ return (*(TGetComponentTypeById_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_GetComponentTypeById)))(aComponentId); }

inline TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety)		{ return (*(TGetParamLimitsById_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_GetParamLimitsById)))(aComponentId, aVariety); }

inline TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow)		{ return (*(TGetWindowComponentById_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_GetWindowComponentById)))(aComponentId, aVariety, aCol, aRow); }

inline TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow)		{ return (*(TGetTextComponentById_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_GetTextComponentById)))(aComponentId, aVariety, aCol, aRow); }

// LAF Table : Screen Contents
inline TAknWindowComponentLayout Screen(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(TScreen_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Screen)))(aVariety, aCol, aRow); }

// LAF Table : Screen
inline TAknWindowComponentLayout application_window(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tapplication_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_application_window)))(aVariety, aCol, aRow); }

// LAF Table : application_window
inline TAknLayoutScalableParameterLimits area_bottom_pane_ParamLimits(TInt aVariety)		{ return (*(Tarea_bottom_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_area_bottom_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout area_bottom_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tarea_bottom_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_area_bottom_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits area_top_pane_ParamLimits(TInt aVariety)		{ return (*(Tarea_top_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_area_top_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout area_top_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tarea_top_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_area_top_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits main_pane_ParamLimits(TInt aVariety)		{ return (*(Tmain_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout main_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_pane)))(aVariety, aCol, aRow); }

// LAF Table : main_pane
inline TAknWindowComponentLayout main_hc_listscroll_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_hc_listscroll_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_hc_listscroll_pane)))(aVariety, aCol, aRow); }

// LAF Table : main_hc_listscroll_pane
inline TAknWindowComponentLayout hc_list_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout hc_scroll_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_scroll_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_pane)))(aVariety, aCol, aRow); }

// LAF Table : hc_list_pane
inline TAknWindowComponentLayout hc_list_double2_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout hc_list_double2_large_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_large_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout hc_list_double2_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout hc_list_double_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout hc_list_double_heading_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_heading_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout hc_list_double_large_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_large_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout hc_list_double_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout hc_list_single_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_graphic_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout hc_list_single_heading_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_heading_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout hc_list_single_large_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_large_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_large_graphic_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout hc_list_single_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_pane)))(aVariety, aCol, aRow); }

// LAF Table : hc_list_single_pane
inline TAknLayoutScalableParameterLimits hc_list_single_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_single_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_single_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_single_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_single_pane_g_Limits()		{ return (*(Thc_list_single_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_single_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_single_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout hc_list_single_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_single_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_single_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_pane_t1)))(aVariety, aCol, aRow); }

// LAF Table : hc_list_single_graphic_pane
inline TAknLayoutScalableParameterLimits hc_list_single_graphic_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_graphic_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_graphic_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_single_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_graphic_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_graphic_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_single_graphic_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_graphic_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_graphic_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_single_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_graphic_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_graphic_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_single_graphic_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_graphic_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_graphic_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_single_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_graphic_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_graphic_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_single_graphic_pane_g_Limits()		{ return (*(Thc_list_single_graphic_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_graphic_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_single_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_single_graphic_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout hc_list_single_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_graphic_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_single_graphic_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_graphic_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_graphic_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_single_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_graphic_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_graphic_pane_t1)))(aVariety, aCol, aRow); }

// LAF Table : hc_list_single_heading_pane
inline TAknLayoutScalableParameterLimits hc_list_single_heading_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_heading_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_single_heading_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_heading_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_single_heading_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_heading_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_single_heading_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_heading_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_single_heading_pane_g_Limits()		{ return (*(Thc_list_single_heading_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_single_heading_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_single_heading_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout hc_list_single_heading_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_heading_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_single_heading_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_heading_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_single_heading_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_heading_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_single_heading_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_heading_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_single_heading_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_heading_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_single_heading_pane_t_Limits()		{ return (*(Thc_list_single_heading_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_single_heading_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_single_heading_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout hc_list_single_heading_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_heading_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_heading_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : hc_list_single_large_graphic_pane
inline TAknLayoutScalableParameterLimits hc_list_single_large_graphic_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_large_graphic_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_large_graphic_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_single_large_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_large_graphic_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_large_graphic_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_single_large_graphic_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_large_graphic_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_large_graphic_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_single_large_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_large_graphic_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_large_graphic_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_single_large_graphic_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_large_graphic_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_large_graphic_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_single_large_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_large_graphic_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_large_graphic_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_single_large_graphic_pane_g_Limits()		{ return (*(Thc_list_single_large_graphic_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_large_graphic_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_single_large_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_single_large_graphic_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_large_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout hc_list_single_large_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_large_graphic_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_large_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_single_large_graphic_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_single_large_graphic_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_large_graphic_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_single_large_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_single_large_graphic_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_single_large_graphic_pane_t1)))(aVariety, aCol, aRow); }

// LAF Table : hc_list_double_pane
inline TAknLayoutScalableParameterLimits hc_list_double_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double_pane_g_Limits()		{ return (*(Thc_list_double_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout hc_list_double_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double_pane_t_Limits()		{ return (*(Thc_list_double_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout hc_list_double_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : hc_list_double_graphic_pane
inline TAknLayoutScalableParameterLimits hc_list_double_graphic_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_graphic_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_graphic_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_graphic_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_graphic_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_graphic_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double_graphic_pane_g_Limits()		{ return (*(Thc_list_double_graphic_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double_graphic_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout hc_list_double_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_graphic_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_graphic_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_graphic_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_graphic_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double_graphic_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double_graphic_pane_t_Limits()		{ return (*(Thc_list_double_graphic_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double_graphic_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double_graphic_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout hc_list_double_graphic_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : hc_list_double_heading_pane
inline TAknLayoutScalableParameterLimits hc_list_double_heading_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_heading_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double_heading_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_heading_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_heading_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_heading_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double_heading_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_heading_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double_heading_pane_g_Limits()		{ return (*(Thc_list_double_heading_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double_heading_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double_heading_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout hc_list_double_heading_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_heading_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_heading_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_heading_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double_heading_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_heading_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_heading_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_heading_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double_heading_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_heading_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double_heading_pane_t_Limits()		{ return (*(Thc_list_double_heading_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double_heading_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double_heading_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout hc_list_double_heading_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_heading_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_heading_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : hc_list_double_large_graphic_pane
inline TAknLayoutScalableParameterLimits hc_list_double_large_graphic_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_large_graphic_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double_large_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_large_graphic_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_large_graphic_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_large_graphic_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double_large_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_large_graphic_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_large_graphic_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_large_graphic_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double_large_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_large_graphic_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double_large_graphic_pane_g_Limits()		{ return (*(Thc_list_double_large_graphic_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double_large_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double_large_graphic_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout hc_list_double_large_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_large_graphic_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_large_graphic_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_large_graphic_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double_large_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_large_graphic_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_large_graphic_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_large_graphic_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double_large_graphic_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_large_graphic_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double_large_graphic_pane_t_Limits()		{ return (*(Thc_list_double_large_graphic_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double_large_graphic_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double_large_graphic_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout hc_list_double_large_graphic_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_large_graphic_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_large_graphic_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : hc_list_double2_pane
inline TAknLayoutScalableParameterLimits hc_list_double2_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double2_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double2_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double2_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double2_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double2_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double2_pane_g_Limits()		{ return (*(Thc_list_double2_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double2_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double2_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout hc_list_double2_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double2_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double2_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double2_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double2_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double2_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double2_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double2_pane_t_Limits()		{ return (*(Thc_list_double2_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double2_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double2_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout hc_list_double2_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : hc_list_double2_graphic_pane
inline TAknLayoutScalableParameterLimits hc_list_double2_graphic_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double2_graphic_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double2_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_graphic_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double2_graphic_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double2_graphic_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double2_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_graphic_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double2_graphic_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double2_graphic_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double2_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_graphic_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double2_graphic_pane_g_Limits()		{ return (*(Thc_list_double2_graphic_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double2_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double2_graphic_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout hc_list_double2_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_graphic_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double2_graphic_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double2_graphic_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double2_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_graphic_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double2_graphic_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double2_graphic_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double2_graphic_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_graphic_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double2_graphic_pane_t_Limits()		{ return (*(Thc_list_double2_graphic_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double2_graphic_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double2_graphic_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout hc_list_double2_graphic_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_graphic_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_graphic_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : hc_list_double2_large_graphic_pane
inline TAknLayoutScalableParameterLimits hc_list_double2_large_graphic_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double2_large_graphic_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double2_large_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_large_graphic_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double2_large_graphic_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double2_large_graphic_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double2_large_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_large_graphic_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double2_large_graphic_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double2_large_graphic_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double2_large_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_large_graphic_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double2_large_graphic_pane_g_Limits()		{ return (*(Thc_list_double2_large_graphic_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double2_large_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double2_large_graphic_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout hc_list_double2_large_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_large_graphic_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double2_large_graphic_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double2_large_graphic_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double2_large_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_large_graphic_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double2_large_graphic_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double2_large_graphic_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double2_large_graphic_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_large_graphic_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double2_large_graphic_pane_t_Limits()		{ return (*(Thc_list_double2_large_graphic_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double2_large_graphic_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double2_large_graphic_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout hc_list_double2_large_graphic_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double2_large_graphic_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double2_large_graphic_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : main_pane
inline TAknWindowComponentLayout main_hc_button_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_hc_button_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_hc_button_pane)))(aVariety, aCol, aRow); }

// LAF Table : main_hc_listscroll_pane
inline TAknLayoutScalableParameterLimits aid_hc_size_touch_scroll_bar_ParamLimits(TInt aVariety)		{ return (*(Taid_hc_size_touch_scroll_bar_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_hc_size_touch_scroll_bar_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aid_hc_size_touch_scroll_bar(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taid_hc_size_touch_scroll_bar_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_hc_size_touch_scroll_bar)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aid_hc_size_touch_scroll_bar_cp01_ParamLimits(TInt aVariety)		{ return (*(Taid_hc_size_touch_scroll_bar_cp01_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_hc_size_touch_scroll_bar_cp01_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aid_hc_size_touch_scroll_bar_cp01(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taid_hc_size_touch_scroll_bar_cp01_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_hc_size_touch_scroll_bar_cp01)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout hc_popup_scroll_hotspot_window(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_popup_scroll_hotspot_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_popup_scroll_hotspot_window)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_scroll_pane_ParamLimits(TInt aVariety)		{ return (*(Thc_scroll_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_pane_ParamLimits)))(aVariety); }

inline TAknLayoutScalableParameterLimits hc_scroll_pane_cp01_ParamLimits(TInt aVariety)		{ return (*(Thc_scroll_pane_cp01_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_pane_cp01_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_scroll_pane_cp01(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_scroll_pane_cp01_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_pane_cp01)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits main_hc_listscroll_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Tmain_hc_listscroll_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_hc_listscroll_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout main_hc_listscroll_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_hc_listscroll_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_hc_listscroll_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits main_hc_listscroll_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Tmain_hc_listscroll_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_hc_listscroll_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout main_hc_listscroll_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_hc_listscroll_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_hc_listscroll_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits main_hc_listscroll_pane_g_Limits()		{ return (*(Tmain_hc_listscroll_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_hc_listscroll_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits main_hc_listscroll_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Tmain_hc_listscroll_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_hc_listscroll_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout main_hc_listscroll_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_hc_listscroll_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_hc_listscroll_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : hc_list_pane
inline TAknWindowComponentLayout hc_list_double_graphic_heading_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_heading_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane)))(aVariety, aCol, aRow); }

// LAF Table : hc_scroll_pane
inline TAknLayoutScalableParameterLimits aid_hc_size_max_handle_ParamLimits(TInt aVariety)		{ return (*(Taid_hc_size_max_handle_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_hc_size_max_handle_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aid_hc_size_max_handle(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taid_hc_size_max_handle_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_hc_size_max_handle)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aid_hc_size_min_handle_ParamLimits(TInt aVariety)		{ return (*(Taid_hc_size_min_handle_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_hc_size_min_handle_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aid_hc_size_min_handle(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taid_hc_size_min_handle_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_hc_size_min_handle)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_scroll_bg_pane_ParamLimits(TInt aVariety)		{ return (*(Thc_scroll_bg_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_bg_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_scroll_bg_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_scroll_bg_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_bg_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_scroll_handle_pane_ParamLimits(TInt aVariety)		{ return (*(Thc_scroll_handle_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_handle_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_scroll_handle_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_scroll_handle_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_handle_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_scroll_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_scroll_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_scroll_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_scroll_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_pane_g1)))(aVariety, aCol, aRow); }

// LAF Table : hc_scroll_bg_pane
inline TAknLayoutScalableParameterLimits hc_scroll_bg_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_scroll_bg_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_bg_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_scroll_bg_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_scroll_bg_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_bg_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_scroll_bg_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Thc_scroll_bg_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_bg_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_scroll_bg_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_scroll_bg_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_bg_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_scroll_bg_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Thc_scroll_bg_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_bg_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_scroll_bg_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_scroll_bg_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_bg_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_scroll_bg_pane_g_Limits()		{ return (*(Thc_scroll_bg_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_bg_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_scroll_bg_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_scroll_bg_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_bg_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout hc_scroll_bg_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_scroll_bg_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_bg_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : hc_scroll_handle_pane
inline TAknLayoutScalableParameterLimits hc_scroll_handle_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_scroll_handle_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_handle_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_scroll_handle_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_scroll_handle_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_handle_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_scroll_handle_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Thc_scroll_handle_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_handle_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_scroll_handle_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_scroll_handle_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_handle_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_scroll_handle_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Thc_scroll_handle_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_handle_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_scroll_handle_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_scroll_handle_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_handle_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_scroll_handle_pane_g_Limits()		{ return (*(Thc_scroll_handle_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_handle_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_scroll_handle_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_scroll_handle_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_handle_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout hc_scroll_handle_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_scroll_handle_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_handle_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : hc_popup_scroll_hotspot_window
inline TAknWindowComponentLayout bg_hc_secondary_window(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_secondary_window_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_secondary_window)))(aVariety, aCol, aRow); }

inline TAknTextComponentLayout qfn_secondary_cp6(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tqfn_secondary_cp6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_qfn_secondary_cp6)))(aVariety, aCol, aRow); }

// LAF Table : main_hc_button_pane
inline TAknWindowComponentLayout hc_button_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_button_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_button_pane)))(aVariety, aCol, aRow); }

// LAF Table : hc_button_pane
inline TAknLayoutScalableParameterLimits bg_hc_button_pane_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_button_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_button_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_button_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_button_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_button_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_button_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_button_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_button_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_button_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_button_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_button_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_button_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Thc_button_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_button_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_button_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_button_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_button_pane_t1)))(aVariety, aCol, aRow); }

// LAF Table : bg_hc_button_pane
inline TAknWindowComponentLayout bg_hc_button_pane_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_button_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_button_pane_g1)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout bg_hc_button_pane_g2(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_button_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_button_pane_g2)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout bg_hc_button_pane_g3(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_button_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_button_pane_g3)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout bg_hc_button_pane_g4(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_button_pane_g4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_button_pane_g4)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout bg_hc_button_pane_g5(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_button_pane_g5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_button_pane_g5)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout bg_hc_button_pane_g6(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_button_pane_g6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_button_pane_g6)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout bg_hc_button_pane_g7(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_button_pane_g7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_button_pane_g7)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout bg_hc_button_pane_g8(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_button_pane_g8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_button_pane_g8)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout bg_hc_button_pane_g9(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_button_pane_g9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_button_pane_g9)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits bg_hc_button_pane_g_Limits()		{ return (*(Tbg_hc_button_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_button_pane_g_Limits)))(); }

inline TAknWindowComponentLayout bg_hc_button_pane_g(TInt aLineIndex, TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_button_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_button_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : hc_list_double_graphic_heading_pane
inline TAknLayoutScalableParameterLimits hc_list_double_graphic_heading_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_graphic_heading_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double_graphic_heading_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_heading_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_graphic_heading_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_graphic_heading_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double_graphic_heading_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_heading_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_graphic_heading_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_graphic_heading_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_list_double_graphic_heading_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_heading_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double_graphic_heading_pane_g_Limits()		{ return (*(Thc_list_double_graphic_heading_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double_graphic_heading_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double_graphic_heading_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout hc_list_double_graphic_heading_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_heading_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_graphic_heading_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_graphic_heading_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double_graphic_heading_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_heading_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_list_double_graphic_heading_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Thc_list_double_graphic_heading_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout hc_list_double_graphic_heading_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_heading_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits hc_list_double_graphic_heading_pane_t_Limits()		{ return (*(Thc_list_double_graphic_heading_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits hc_list_double_graphic_heading_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Thc_list_double_graphic_heading_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout hc_list_double_graphic_heading_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_list_double_graphic_heading_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_list_double_graphic_heading_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : main_pane
inline TAknWindowComponentLayout main_hc_gridscroll_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_hc_gridscroll_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_hc_gridscroll_pane)))(aVariety, aCol, aRow); }

// LAF Table : hc_list_single_pane
inline TAknWindowComponentLayout bg_hc_highlight_list_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_list_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane)))(aVariety, aCol, aRow); }

// LAF Table : main_hc_gridscroll_pane
inline TAknLayoutScalableParameterLimits aid_hc_grid_cell_size_ParamLimits(TInt aVariety)		{ return (*(Taid_hc_grid_cell_size_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_hc_grid_cell_size_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aid_hc_grid_cell_size(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taid_hc_grid_cell_size_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_hc_grid_cell_size)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits hc_scroll_pane_cp02_ParamLimits(TInt aVariety)		{ return (*(Thc_scroll_pane_cp02_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_pane_cp02_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout hc_scroll_pane_cp02(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Thc_scroll_pane_cp02_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_hc_scroll_pane_cp02)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits main_hc_grid_pane_ParamLimits(TInt aVariety)		{ return (*(Tmain_hc_grid_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_hc_grid_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout main_hc_grid_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_hc_grid_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_hc_grid_pane)))(aVariety, aCol, aRow); }

// LAF Table : main_hc_grid_pane
inline TAknLayoutScalableParameterLimits cell_hc_grid_pane_ParamLimits(TInt aVariety)		{ return (*(Tcell_hc_grid_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_hc_grid_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout cell_hc_grid_pane(TInt aVariety, TInt aCol, TInt aRow)		{ return (*(Tcell_hc_grid_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_hc_grid_pane)))(aVariety, aCol, aRow); }

// LAF Table : cell_hc_grid_pane
inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_grid_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_grid_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_grid_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits cell_hc_grid_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Tcell_hc_grid_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_hc_grid_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout cell_hc_grid_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tcell_hc_grid_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_hc_grid_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits cell_hc_grid_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Tcell_hc_grid_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_hc_grid_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout cell_hc_grid_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tcell_hc_grid_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_cell_hc_grid_pane_t1)))(aVariety, aCol, aRow); }

// LAF Table : bg_hc_highlight_grid_pane
inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_grid_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_grid_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_grid_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_grid_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_grid_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_grid_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g4_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_grid_pane_g4_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g4_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g4(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_grid_pane_g4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g4)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g5_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_grid_pane_g5_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g5_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g5(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_grid_pane_g5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g5)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g6_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_grid_pane_g6_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g6_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g6(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_grid_pane_g6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g6)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g7_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_grid_pane_g7_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g7_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g7(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_grid_pane_g7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g7)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g8_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_grid_pane_g8_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g8_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g8(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_grid_pane_g8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g8)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g9_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_grid_pane_g9_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g9_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g9(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_grid_pane_g9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g9)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g10_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_grid_pane_g10_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g10_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g10(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_grid_pane_g10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g10)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits bg_hc_highlight_grid_pane_g_Limits()		{ return (*(Tbg_hc_highlight_grid_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Tbg_hc_highlight_grid_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_grid_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_grid_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : bg_hc_highlight_list_pane
inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_list_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_list_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_list_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_list_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_list_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_list_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g4_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_list_pane_g4_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g4_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g4(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_list_pane_g4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g4)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g5_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_list_pane_g5_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g5_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g5(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_list_pane_g5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g5)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g6_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_list_pane_g6_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g6_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g6(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_list_pane_g6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g6)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g7_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_list_pane_g7_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g7_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g7(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_list_pane_g7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g7)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g8_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_list_pane_g8_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g8_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g8(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_list_pane_g8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g8)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g9_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_list_pane_g9_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g9_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g9(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_list_pane_g9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g9)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g10_ParamLimits(TInt aVariety)		{ return (*(Tbg_hc_highlight_list_pane_g10_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g10_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g10(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_list_pane_g10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g10)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits bg_hc_highlight_list_pane_g_Limits()		{ return (*(Tbg_hc_highlight_list_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Tbg_hc_highlight_list_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tbg_hc_highlight_list_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_bg_hc_highlight_list_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : application_window
inline TAknLayoutScalableParameterLimits area_side_right_pane_ParamLimits(TInt aVariety)		{ return (*(Tarea_side_right_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_area_side_right_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout area_side_right_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tarea_side_right_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_area_side_right_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout popup_toolbar2_fixed_window_cp001(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tpopup_toolbar2_fixed_window_cp001_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_toolbar2_fixed_window_cp001)))(aVariety, aCol, aRow); }

// LAF Table : main_pane
inline TAknWindowComponentLayout main_aa_coverflow_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_coverflow_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_coverflow_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout main_aa_empty_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_empty_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_empty_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout main_aa_fastscroll_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_fastscroll_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_fastscroll_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits main_aa_gridscroll_pane_ParamLimits(TInt aVariety)		{ return (*(Tmain_aa_gridscroll_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_gridscroll_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout main_aa_gridscroll_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_gridscroll_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_gridscroll_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout main_aa_listscroll_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_listscroll_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_listscroll_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout main_aa_metadata_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_metadata_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_metadata_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout main_aa_slider_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_slider_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_slider_pane)))(aVariety, aCol, aRow); }

// LAF Table : main_aa_coverflow_pane
inline TAknLayoutScalableParameterLimits aacf_image_pane_ParamLimits(TInt aVariety)		{ return (*(Taacf_image_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aacf_image_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taacf_image_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aacf_image_pane_cp001_ParamLimits(TInt aVariety)		{ return (*(Taacf_image_pane_cp001_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_pane_cp001_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aacf_image_pane_cp001(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taacf_image_pane_cp001_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_pane_cp001)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aacf_image_pane_cp002_ParamLimits(TInt aVariety)		{ return (*(Taacf_image_pane_cp002_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_pane_cp002_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aacf_image_pane_cp002(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taacf_image_pane_cp002_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_pane_cp002)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout aacf_slider_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taacf_slider_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_slider_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits main_aa_coverflow_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Tmain_aa_coverflow_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_coverflow_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout main_aa_coverflow_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_coverflow_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_coverflow_pane_t1)))(aVariety, aCol, aRow); }

// LAF Table : aacf_image_pane
inline TAknLayoutScalableParameterLimits aacf_image_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taacf_image_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aacf_image_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taacf_image_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_pane_g1)))(aVariety, aCol, aRow); }

// LAF Table : main_aa_coverflow_pane
inline TAknLayoutScalableParameterLimits aacf_image_title_pane_ParamLimits(TInt aVariety)		{ return (*(Taacf_image_title_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_title_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aacf_image_title_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taacf_image_title_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_title_pane)))(aVariety, aCol, aRow); }

// LAF Table : aacf_slider_pane
inline TAknWindowComponentLayout aacf_slider_pane_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taacf_slider_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_slider_pane_g1)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout aacf_slider_pane_g1_cp001(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taacf_slider_pane_g1_cp001_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_slider_pane_g1_cp001)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout aaslider_bg_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_bg_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_bg_pane)))(aVariety, aCol, aRow); }

// LAF Table : aacf_image_title_pane
inline TAknLayoutScalableParameterLimits aacf_image_title_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taacf_image_title_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_title_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aacf_image_title_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taacf_image_title_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_title_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aacf_image_title_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Taacf_image_title_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_title_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aacf_image_title_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taacf_image_title_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_title_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aacf_image_title_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Taacf_image_title_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_title_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aacf_image_title_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taacf_image_title_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_title_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aacf_image_title_pane_t_Limits()		{ return (*(Taacf_image_title_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_title_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits aacf_image_title_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taacf_image_title_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_title_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout aacf_image_title_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taacf_image_title_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_image_title_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : main_aa_fastscroll_pane
inline TAknLayoutScalableParameterLimits aafs_strip_pane_ParamLimits(TInt aVariety)		{ return (*(Taafs_strip_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aafs_strip_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aafs_strip_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taafs_strip_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aafs_strip_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits main_aa_fastscroll_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Tmain_aa_fastscroll_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_fastscroll_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout main_aa_fastscroll_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_fastscroll_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_fastscroll_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits main_aa_fastscroll_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Tmain_aa_fastscroll_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_fastscroll_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout main_aa_fastscroll_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_fastscroll_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_fastscroll_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits main_aa_fastscroll_pane_g_Limits()		{ return (*(Tmain_aa_fastscroll_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_fastscroll_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits main_aa_fastscroll_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Tmain_aa_fastscroll_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_fastscroll_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout main_aa_fastscroll_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_fastscroll_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_fastscroll_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : aafs_strip_pane
inline TAknLayoutScalableParameterLimits aafs_strip_grid_pane_ParamLimits(TInt aVariety)		{ return (*(Taafs_strip_grid_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aafs_strip_grid_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aafs_strip_grid_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taafs_strip_grid_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aafs_strip_grid_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aafs_strip_shadow_pane_ParamLimits(TInt aVariety)		{ return (*(Taafs_strip_shadow_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aafs_strip_shadow_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aafs_strip_shadow_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taafs_strip_shadow_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aafs_strip_shadow_pane)))(aVariety, aCol, aRow); }

// LAF Table : aafs_strip_grid_pane
inline TAknLayoutScalableParameterLimits aafs_strip_grid_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taafs_strip_grid_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aafs_strip_grid_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aafs_strip_grid_pane_g1(TInt aVariety, TInt aCol, TInt aRow = 0)		{ return (*(Taafs_strip_grid_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aafs_strip_grid_pane_g1)))(aVariety, aCol, aRow); }

// LAF Table : main_aa_listscroll_pane
inline TAknWindowComponentLayout aa_scroll_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taa_scroll_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aa_scroll_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_gene_pane_ParamLimits(TInt aVariety)		{ return (*(Taalist_gene_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_gene_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_gene_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_gene_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_gene_pane)))(aVariety, aCol, aRow); }

// LAF Table : aalist_gene_pane
inline TAknLayoutScalableParameterLimits aalist_double_entry_pane_ParamLimits(TInt aVariety = 0)		{ return (*(Taalist_double_entry_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_entry_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_entry_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_entry_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_entry_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_ParamLimits(TInt aVariety = 0)		{ return (*(Taalist_double_graphic_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_pane_ParamLimits(TInt aVariety = 0)		{ return (*(Taalist_double_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_ParamLimits(TInt aVariety = 0)		{ return (*(Taalist_double_progress_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_progress_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_progress_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_gene_ad_pane_ParamLimits(TInt aVariety = 0)		{ return (*(Taalist_gene_ad_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_gene_ad_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_gene_ad_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_gene_ad_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_gene_ad_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_single_pane_ParamLimits(TInt aVariety = 0)		{ return (*(Taalist_single_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_single_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_single_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane)))(aVariety, aCol, aRow); }

// LAF Table : aalist_single_pane
inline TAknLayoutScalableParameterLimits aalist_single_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taalist_single_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_single_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_single_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_single_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Taalist_single_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_single_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_single_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aalist_single_pane_g_Limits()		{ return (*(Taalist_single_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits aalist_single_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taalist_single_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout aalist_single_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_single_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_single_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Taalist_single_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aalist_single_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_single_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_t1)))(aVariety, aCol, aRow); }

// LAF Table : aalist_double_pane
inline TAknLayoutScalableParameterLimits aalist_double_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aalist_double_pane_g_Limits()		{ return (*(Taalist_double_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits aalist_double_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taalist_double_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout aalist_double_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aalist_double_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aalist_double_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aalist_double_pane_t_Limits()		{ return (*(Taalist_double_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits aalist_double_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taalist_double_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout aalist_double_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : aalist_double_graphic_pane
inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_graphic_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_graphic_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_graphic_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g4_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_graphic_pane_g4_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g4_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_graphic_pane_g4(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_g4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g4)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g5_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_graphic_pane_g5_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g5_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_graphic_pane_g5(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_g5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g5)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g6_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_graphic_pane_g6_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g6_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_graphic_pane_g6(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_g6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g6)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g7_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_graphic_pane_g7_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g7_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_graphic_pane_g7(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_g7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g7)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g8_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_graphic_pane_g8_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g8_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_graphic_pane_g8(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_g8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g8)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g9_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_graphic_pane_g9_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g9_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_graphic_pane_g9(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_g9_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g9)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g10_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_graphic_pane_g10_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g10_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_graphic_pane_g10(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_g10_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g10)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g11_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_graphic_pane_g11_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g11_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_graphic_pane_g11(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_g11_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g11)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aalist_double_graphic_pane_g_Limits()		{ return (*(Taalist_double_graphic_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taalist_double_graphic_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout aalist_double_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_graphic_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aalist_double_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_graphic_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aalist_double_graphic_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aalist_double_graphic_pane_t_Limits()		{ return (*(Taalist_double_graphic_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taalist_double_graphic_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout aalist_double_graphic_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_graphic_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_graphic_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : aalist_double_entry_pane
inline TAknTextComponentLayout aalist_double_entry_pane_t1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_entry_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_entry_pane_t1)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout aalist_entry_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_entry_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_entry_pane)))(aVariety, aCol, aRow); }

// LAF Table : aalist_entry_pane
inline TAknTextComponentLayout aalist_entry_pane_t1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_entry_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_entry_pane_t1)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout input_focus_pane_cp001(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tinput_focus_pane_cp001_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_input_focus_pane_cp001)))(aVariety, aCol, aRow); }

// LAF Table : aalist_double_progress_pane
inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_progress_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_progress_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_progress_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_progress_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_progress_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_progress_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_progress_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_double_progress_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_progress_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aalist_double_progress_pane_g_Limits()		{ return (*(Taalist_double_progress_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taalist_double_progress_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout aalist_double_progress_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_progress_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_progress_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aalist_double_progress_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_progress_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_progress_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aalist_double_progress_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_progress_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_t3_ParamLimits(TInt aVariety)		{ return (*(Taalist_double_progress_pane_t3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_t3_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aalist_double_progress_pane_t3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_progress_pane_t3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_t3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aalist_double_progress_pane_t_Limits()		{ return (*(Taalist_double_progress_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taalist_double_progress_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout aalist_double_progress_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_double_progress_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_double_progress_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_progress_pane_ParamLimits(TInt aVariety)		{ return (*(Taalist_progress_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_progress_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_progress_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_progress_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_progress_pane)))(aVariety, aCol, aRow); }

// LAF Table : aalist_progress_pane
inline TAknWindowComponentLayout aalist_progress_pane_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_progress_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_progress_pane_g1)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout aalist_progress_pane_g2(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_progress_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_progress_pane_g2)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout aalist_progress_pane_g3(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_progress_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_progress_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aalist_progress_pane_g_Limits()		{ return (*(Taalist_progress_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_progress_pane_g_Limits)))(); }

inline TAknWindowComponentLayout aalist_progress_pane_g(TInt aLineIndex, TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_progress_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_progress_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : aalist_gene_ad_pane
inline TAknWindowComponentLayout aalist_gene_ad_pane_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_gene_ad_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_gene_ad_pane_g1)))(aVariety, aCol, aRow); }

// LAF Table : main_aa_empty_pane
inline TAknTextComponentLayout main_aa_empty_pane_t1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_empty_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_empty_pane_t1)))(aVariety, aCol, aRow); }

inline TAknTextComponentLayout main_aa_empty_pane_t2(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_empty_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_empty_pane_t2)))(aVariety, aCol, aRow); }

inline TAknTextComponentLayout main_aa_empty_pane_t3(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_empty_pane_t3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_empty_pane_t3)))(aVariety, aCol, aRow); }

inline TAknTextComponentLayout main_aa_empty_pane_t4(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_empty_pane_t4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_empty_pane_t4)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits main_aa_empty_pane_t_Limits()		{ return (*(Tmain_aa_empty_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_empty_pane_t_Limits)))(); }

inline TAknTextComponentLayout main_aa_empty_pane_t(TInt aLineIndex, TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_empty_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_empty_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : main_aa_gridscroll_pane
inline TAknLayoutScalableParameterLimits aa_scroll_pane_cp001_ParamLimits(TInt aVariety)		{ return (*(Taa_scroll_pane_cp001_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aa_scroll_pane_cp001_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aa_scroll_pane_cp001(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taa_scroll_pane_cp001_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aa_scroll_pane_cp001)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aa_taskswapper_pane_ParamLimits(TInt aVariety)		{ return (*(Taa_taskswapper_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aa_taskswapper_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aa_taskswapper_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taa_taskswapper_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aa_taskswapper_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aagrid_gene_pane_ParamLimits(TInt aVariety)		{ return (*(Taagrid_gene_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_gene_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aagrid_gene_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taagrid_gene_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_gene_pane)))(aVariety, aCol, aRow); }

// LAF Table : aagrid_gene_pane
inline TAknLayoutScalableParameterLimits aagrid_cell_image_pane_ParamLimits(TInt aVariety)		{ return (*(Taagrid_cell_image_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aagrid_cell_image_pane(TInt aVariety, TInt aCol, TInt aRow)		{ return (*(Taagrid_cell_image_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane)))(aVariety, aCol, aRow); }

// LAF Table : aagrid_cell_image_pane
inline TAknLayoutScalableParameterLimits aagrid_cell_image_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taagrid_cell_image_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aagrid_cell_image_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taagrid_cell_image_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aagrid_cell_image_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Taagrid_cell_image_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aagrid_cell_image_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taagrid_cell_image_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aagrid_cell_image_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Taagrid_cell_image_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aagrid_cell_image_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taagrid_cell_image_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aagrid_cell_image_pane_g4_ParamLimits(TInt aVariety)		{ return (*(Taagrid_cell_image_pane_g4_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane_g4_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aagrid_cell_image_pane_g4(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taagrid_cell_image_pane_g4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane_g4)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aagrid_cell_image_pane_g_Limits()		{ return (*(Taagrid_cell_image_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits aagrid_cell_image_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taagrid_cell_image_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout aagrid_cell_image_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taagrid_cell_image_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aagrid_cell_image_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Taagrid_cell_image_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aagrid_cell_image_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taagrid_cell_image_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aagrid_cell_image_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits grid_highlight_pane_cp001_ParamLimits(TInt aVariety)		{ return (*(Tgrid_highlight_pane_cp001_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_highlight_pane_cp001_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout grid_highlight_pane_cp001(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tgrid_highlight_pane_cp001_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_highlight_pane_cp001)))(aVariety, aCol, aRow); }

// LAF Table : aa_taskswapper_pane
inline TAknLayoutScalableParameterLimits aa_taskswapper_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taa_taskswapper_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aa_taskswapper_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aa_taskswapper_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taa_taskswapper_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aa_taskswapper_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aa_taskswapper_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Taa_taskswapper_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aa_taskswapper_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aa_taskswapper_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taa_taskswapper_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aa_taskswapper_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aatasksw_grid_pane_ParamLimits(TInt aVariety)		{ return (*(Taatasksw_grid_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aatasksw_grid_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aatasksw_grid_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taatasksw_grid_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aatasksw_grid_pane)))(aVariety, aCol, aRow); }

// LAF Table : aatasksw_grid_pane
inline TAknLayoutScalableParameterLimits aatasksw_cell_pane_ParamLimits(TInt aVariety = 0)		{ return (*(Taatasksw_cell_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aatasksw_cell_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aatasksw_cell_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taatasksw_cell_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aatasksw_cell_pane)))(aVariety, aCol, aRow); }

// LAF Table : aatasksw_cell_pane
inline TAknWindowComponentLayout aatasksw_cell_pane_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taatasksw_cell_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aatasksw_cell_pane_g1)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout grid_highlight_pane_cp002(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tgrid_highlight_pane_cp002_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_grid_highlight_pane_cp002)))(aVariety, aCol, aRow); }

// LAF Table : main_aa_metadata_pane
inline TAknWindowComponentLayout aamd_info_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_info_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout aamd_list_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_pane)))(aVariety, aCol, aRow); }

// LAF Table : aamd_list_pane
inline TAknLayoutScalableParameterLimits aamd_list_double_pane_ParamLimits(TInt aVariety = 0)		{ return (*(Taamd_list_double_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aamd_list_double_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_double_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aamd_list_single_pane_ParamLimits(TInt aVariety = 0)		{ return (*(Taamd_list_single_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_single_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aamd_list_single_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_single_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_single_pane)))(aVariety, aCol, aRow); }

// LAF Table : aamd_list_single_pane
inline TAknLayoutScalableParameterLimits aamd_list_single_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taamd_list_single_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_single_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aamd_list_single_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_single_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_single_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aamd_list_single_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Taamd_list_single_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_single_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aamd_list_single_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_single_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_single_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aamd_list_single_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Taamd_list_single_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_single_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aamd_list_single_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_single_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_single_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aamd_list_single_pane_g_Limits()		{ return (*(Taamd_list_single_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_single_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits aamd_list_single_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taamd_list_single_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_single_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout aamd_list_single_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_single_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_single_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aamd_list_single_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Taamd_list_single_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_single_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aamd_list_single_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_single_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_single_pane_t1)))(aVariety, aCol, aRow); }

// LAF Table : aamd_list_double_pane
inline TAknLayoutScalableParameterLimits aamd_list_double_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taamd_list_double_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aamd_list_double_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_double_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aamd_list_double_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Taamd_list_double_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aamd_list_double_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_double_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aamd_list_double_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Taamd_list_double_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aamd_list_double_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_double_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aamd_list_double_pane_g_Limits()		{ return (*(Taamd_list_double_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits aamd_list_double_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taamd_list_double_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout aamd_list_double_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_double_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aamd_list_double_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Taamd_list_double_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aamd_list_double_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_double_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aamd_list_double_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Taamd_list_double_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aamd_list_double_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_double_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aamd_list_double_pane_t_Limits()		{ return (*(Taamd_list_double_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits aamd_list_double_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taamd_list_double_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout aamd_list_double_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_list_double_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_list_double_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : aamd_info_pane
inline TAknLayoutScalableParameterLimits aamd_info_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taamd_info_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aamd_info_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_info_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aamd_info_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Taamd_info_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aamd_info_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_info_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aamd_info_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Taamd_info_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aamd_info_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_info_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aamd_info_pane_g_Limits()		{ return (*(Taamd_info_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits aamd_info_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taamd_info_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout aamd_info_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_info_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aamd_info_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Taamd_info_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aamd_info_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_info_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aamd_info_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Taamd_info_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aamd_info_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_info_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aamd_info_pane_t3_ParamLimits(TInt aVariety)		{ return (*(Taamd_info_pane_t3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_t3_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aamd_info_pane_t3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_info_pane_t3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_t3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aamd_info_pane_t_Limits()		{ return (*(Taamd_info_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits aamd_info_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taamd_info_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout aamd_info_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taamd_info_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aamd_info_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : aaslider_bg_pane
inline TAknWindowComponentLayout aaslider_bg_pane_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_bg_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_bg_pane_g1)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout aaslider_bg_pane_g2(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_bg_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_bg_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aaslider_bg_pane_g_Limits()		{ return (*(Taaslider_bg_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_bg_pane_g_Limits)))(); }

inline TAknWindowComponentLayout aaslider_bg_pane_g(TInt aLineIndex, TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_bg_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_bg_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknWindowComponentLayout aaslider_bg_pane_g2_copy1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_bg_pane_g2_copy1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_bg_pane_g2_copy1)))(aVariety, aCol, aRow); }

// LAF Table : main_aa_slider_pane
inline TAknLayoutScalableParameterLimits aaslider_pane_ParamLimits(TInt aVariety)		{ return (*(Taaslider_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aaslider_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane)))(aVariety, aCol, aRow); }

// LAF Table : aaslider_pane
inline TAknLayoutScalableParameterLimits aaslider_bg_pane_cp001_ParamLimits(TInt aVariety)		{ return (*(Taaslider_bg_pane_cp001_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_bg_pane_cp001_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aaslider_bg_pane_cp001(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_bg_pane_cp001_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_bg_pane_cp001)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aaslider_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taaslider_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aaslider_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aaslider_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Taaslider_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aaslider_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aaslider_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Taaslider_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aaslider_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aaslider_pane_g_Limits()		{ return (*(Taaslider_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits aaslider_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taaslider_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout aaslider_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aaslider_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Taaslider_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aaslider_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aaslider_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Taaslider_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aaslider_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aaslider_pane_t3_ParamLimits(TInt aVariety)		{ return (*(Taaslider_pane_t3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_t3_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aaslider_pane_t3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_pane_t3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_t3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aaslider_pane_t_Limits()		{ return (*(Taaslider_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits aaslider_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taaslider_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout aaslider_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aid_touch_size_slider_marker_ParamLimits(TInt aVariety)		{ return (*(Taid_touch_size_slider_marker_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_touch_size_slider_marker_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aid_touch_size_slider_marker(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taid_touch_size_slider_marker_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_touch_size_slider_marker)))(aVariety, aCol, aRow); }

// LAF Table : aalist_gene_pane
inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_ParamLimits(TInt aVariety = 0)		{ return (*(Taalist_list_sub_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_list_sub_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_list_sub_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane)))(aVariety, aCol, aRow); }

// LAF Table : aalist_single_pane
inline TAknLayoutScalableParameterLimits aalist_single_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Taalist_single_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_single_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_single_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_single_pane_g4_ParamLimits(TInt aVariety)		{ return (*(Taalist_single_pane_g4_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_g4_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_single_pane_g4(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_single_pane_g4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_g4)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout list_highlight_pane_cp001(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tlist_highlight_pane_cp001_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_highlight_pane_cp001)))(aVariety, aCol, aRow); }

// LAF Table : aalist_list_sub_pane
inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taalist_list_sub_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_list_sub_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_list_sub_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Taalist_list_sub_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_list_sub_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_list_sub_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Taalist_list_sub_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_list_sub_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_list_sub_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_g4_ParamLimits(TInt aVariety)		{ return (*(Taalist_list_sub_pane_g4_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g4_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_list_sub_pane_g4(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_list_sub_pane_g4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g4)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_g5_ParamLimits(TInt aVariety)		{ return (*(Taalist_list_sub_pane_g5_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g5_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_list_sub_pane_g5(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_list_sub_pane_g5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g5)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_g7_ParamLimits(TInt aVariety)		{ return (*(Taalist_list_sub_pane_g7_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g7_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_list_sub_pane_g7(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_list_sub_pane_g7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g7)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aalist_list_sub_pane_g_Limits()		{ return (*(Taalist_list_sub_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taalist_list_sub_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout aalist_list_sub_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_list_sub_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Taalist_list_sub_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aalist_list_sub_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_list_sub_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_t1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_t2_ParamLimits(TInt aVariety)		{ return (*(Taalist_list_sub_pane_t2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_t2_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aalist_list_sub_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_list_sub_pane_t2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_t2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aalist_list_sub_pane_t_Limits()		{ return (*(Taalist_list_sub_pane_t_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_t_Limits)))(); }

inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taalist_list_sub_pane_t_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_t_ParamLimits)))(aLineIndex, aVariety); }

inline TAknTextComponentLayout aalist_list_sub_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_list_sub_pane_t_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_list_sub_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : main_pane
inline TAknLayoutScalableParameterLimits main_aa_coverflow_pane_ParamLimits(TInt aVariety)		{ return (*(Tmain_aa_coverflow_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_coverflow_pane_ParamLimits)))(aVariety); }

inline TAknLayoutScalableParameterLimits main_aa_metadata_pane_ParamLimits(TInt aVariety)		{ return (*(Tmain_aa_metadata_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_metadata_pane_ParamLimits)))(aVariety); }

// LAF Table : aalist_single_pane
inline TAknLayoutScalableParameterLimits aalist_single_pane_g5_ParamLimits(TInt aVariety)		{ return (*(Taalist_single_pane_g5_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_g5_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_single_pane_g5(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_single_pane_g5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_pane_g5)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits list_highlight_pane_cp001_ParamLimits(TInt aVariety)		{ return (*(Tlist_highlight_pane_cp001_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_highlight_pane_cp001_ParamLimits)))(aVariety); }

// LAF Table : main_aa_coverflow_pane
inline TAknLayoutScalableParameterLimits aacf_slider_pane_ParamLimits(TInt aVariety)		{ return (*(Taacf_slider_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aacf_slider_pane_ParamLimits)))(aVariety); }

// LAF Table : main_pane
inline TAknWindowComponentLayout main_aa_video_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_video_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_video_pane)))(aVariety, aCol, aRow); }

// LAF Table : main_aa_listscroll_pane
inline TAknWindowComponentLayout aid_size_touch_aascroll_bar(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taid_size_touch_aascroll_bar_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_size_touch_aascroll_bar)))(aVariety, aCol, aRow); }

// LAF Table : aalist_gene_pane
inline TAknLayoutScalableParameterLimits aalist_single_large_graphic_pane_ParamLimits(TInt aVariety = 0)		{ return (*(Taalist_single_large_graphic_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_large_graphic_pane_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_single_large_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_single_large_graphic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_large_graphic_pane)))(aVariety, aCol, aRow); }

// LAF Table : aaslider_pane
inline TAknLayoutScalableParameterLimits aaslider_pane_g4_ParamLimits(TInt aVariety)		{ return (*(Taaslider_pane_g4_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_g4_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aaslider_pane_g4(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_pane_g4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_g4)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aaslider_pane_g5_ParamLimits(TInt aVariety)		{ return (*(Taaslider_pane_g5_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_g5_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aaslider_pane_g5(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_pane_g5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_pane_g5)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aid_touch_size_slider_max_ParamLimits(TInt aVariety)		{ return (*(Taid_touch_size_slider_max_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_touch_size_slider_max_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aid_touch_size_slider_max(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taid_touch_size_slider_max_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_touch_size_slider_max)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aid_touch_size_slider_min_ParamLimits(TInt aVariety)		{ return (*(Taid_touch_size_slider_min_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_touch_size_slider_min_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aid_touch_size_slider_min(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taid_touch_size_slider_min_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_touch_size_slider_min)))(aVariety, aCol, aRow); }

// LAF Table : aalist_single_large_graphic_pane
inline TAknLayoutScalableParameterLimits aalist_single_large_graphic_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Taalist_single_large_graphic_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_large_graphic_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_single_large_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_single_large_graphic_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_large_graphic_pane_g1)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_single_large_graphic_pane_g2_ParamLimits(TInt aVariety)		{ return (*(Taalist_single_large_graphic_pane_g2_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_large_graphic_pane_g2_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_single_large_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_single_large_graphic_pane_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_large_graphic_pane_g2)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_single_large_graphic_pane_g3_ParamLimits(TInt aVariety)		{ return (*(Taalist_single_large_graphic_pane_g3_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_large_graphic_pane_g3_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout aalist_single_large_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_single_large_graphic_pane_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_large_graphic_pane_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aalist_single_large_graphic_pane_g_Limits()		{ return (*(Taalist_single_large_graphic_pane_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_large_graphic_pane_g_Limits)))(); }

inline TAknLayoutScalableParameterLimits aalist_single_large_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety)		{ return (*(Taalist_single_large_graphic_pane_g_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_large_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

inline TAknWindowComponentLayout aalist_single_large_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_single_large_graphic_pane_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_large_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

inline TAknLayoutScalableParameterLimits aalist_single_large_graphic_pane_t1_ParamLimits(TInt aVariety)		{ return (*(Taalist_single_large_graphic_pane_t1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_large_graphic_pane_t1_ParamLimits)))(aVariety); }

inline TAknTextComponentLayout aalist_single_large_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_single_large_graphic_pane_t1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_single_large_graphic_pane_t1)))(aVariety, aCol, aRow); }

// LAF Table : main_aa_video_pane
inline TAknLayoutScalableParameterLimits main_aa_video_pane_g1_ParamLimits(TInt aVariety)		{ return (*(Tmain_aa_video_pane_g1_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_video_pane_g1_ParamLimits)))(aVariety); }

inline TAknWindowComponentLayout main_aa_video_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_video_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_video_pane_g1)))(aVariety, aCol, aRow); }

// LAF Table : main_aa_coverflow_pane
inline TAknWindowComponentLayout main_aa_coverflow_pane_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Tmain_aa_coverflow_pane_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_coverflow_pane_g1)))(aVariety, aCol, aRow); }

// LAF Table : aa_scroll_pane
inline TAknWindowComponentLayout aid_size_min_handle_cp002(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taid_size_min_handle_cp002_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_size_min_handle_cp002)))(aVariety, aCol, aRow); }

// LAF Table : application_window
inline TAknLayoutScalableParameterLimits popup_toolbar2_fixed_window_cp001_ParamLimits(TInt aVariety)		{ return (*(Tpopup_toolbar2_fixed_window_cp001_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_popup_toolbar2_fixed_window_cp001_ParamLimits)))(aVariety); }

// LAF Table : main_pane
inline TAknLayoutScalableParameterLimits main_aa_slider_pane_ParamLimits(TInt aVariety)		{ return (*(Tmain_aa_slider_pane_ParamLimits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_main_aa_slider_pane_ParamLimits)))(aVariety); }

// LAF Table : aa_scroll_pane_cp001
inline TAknWindowComponentLayout aid_size_min_handle_cp001(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taid_size_min_handle_cp001_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_size_min_handle_cp001)))(aVariety, aCol, aRow); }

// LAF Table : aaslider_bg_pane_cp001
inline TAknWindowComponentLayout aaslider_bg_pane_cp001_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_bg_pane_cp001_g1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_bg_pane_cp001_g1)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout aaslider_bg_pane_cp001_g2(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_bg_pane_cp001_g2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_bg_pane_cp001_g2)))(aVariety, aCol, aRow); }

inline TAknWindowComponentLayout aaslider_bg_pane_cp001_g3(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_bg_pane_cp001_g3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_bg_pane_cp001_g3)))(aVariety, aCol, aRow); }

inline TAknLayoutScalableTableLimits aaslider_bg_pane_cp001_g_Limits()		{ return (*(Taaslider_bg_pane_cp001_g_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_bg_pane_cp001_g_Limits)))(); }

inline TAknWindowComponentLayout aaslider_bg_pane_cp001_g(TInt aLineIndex, TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taaslider_bg_pane_cp001_g_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aaslider_bg_pane_cp001_g)))(aLineIndex, aVariety, aCol, aRow); }

// LAF Table : aalist_progress_pane
inline TAknWindowComponentLayout aalist_progress_pane_g4(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taalist_progress_pane_g4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aalist_progress_pane_g4)))(aVariety, aCol, aRow); }

// LAF Table : aaslider_pane
inline TAknWindowComponentLayout aid_aaslider_pane_rect_inner(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0)		{ return (*(Taid_aaslider_pane_rect_inner_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_aid_aaslider_pane_rect_inner)))(aVariety, aCol, aRow); }



class CInstance : public CCdlInstance
	{
public:
	enum { ETypeId = KCdlInterfaceUidValue };

	inline static const CInstance& CustomisationInstance()                                                    { return (const CInstance&)(CdlEngine::CustomisationInstance(KCdlInterfaceUid)); }
	inline static CInstance* NewL(const TCdlRef& aRef, const CCdlInstance* aSubLayer = NULL)                  { return (CInstance*) CCdlInstance::NewL(aRef, &KCdlInterface, aSubLayer); }
	inline static CInstance* NewLC(const TCdlRef& aRef, const CCdlInstance* aSubLayer = NULL)                 { return (CInstance*) CCdlInstance::NewLC(aRef, &KCdlInterface, aSubLayer); }
	inline static CInstance* NewL(const TDesC& aLibName, TInt aImplId, const CCdlInstance* aSubLayer = NULL)  { TCdlRef ref = { aImplId, { KCdlInterfaceUidValue }, &aLibName }; return NewL(ref, aSubLayer); }
	inline static CInstance* NewLC(const TDesC& aLibName, TInt aImplId, const CCdlInstance* aSubLayer = NULL) { TCdlRef ref = { aImplId, { KCdlInterfaceUidValue }, &aLibName }; return NewLC(ref, aSubLayer); }

	inline const CInstance* SubLayer()                                                                        { return static_cast<const CInstance*>(CCdlInstance::SubLayer()); }

// CDL API functions, as defined in aknlayoutscalable_uiaccel.cdl

	// Generic API
	inline TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) const		{ return (*(TGetComponentTypeById_sig*)(GetFunction(EApiId_GetComponentTypeById)))(aComponentId); }

	inline TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) const		{ return (*(TGetParamLimitsById_sig*)(GetFunction(EApiId_GetParamLimitsById)))(aComponentId, aVariety); }

	inline TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) const		{ return (*(TGetWindowComponentById_sig*)(GetFunction(EApiId_GetWindowComponentById)))(aComponentId, aVariety, aCol, aRow); }

	inline TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) const		{ return (*(TGetTextComponentById_sig*)(GetFunction(EApiId_GetTextComponentById)))(aComponentId, aVariety, aCol, aRow); }

	// LAF Table : Screen Contents
	inline TAknWindowComponentLayout Screen(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(TScreen_sig*)(GetFunction(EApiId_Screen)))(aVariety, aCol, aRow); }

	// LAF Table : Screen
	inline TAknWindowComponentLayout application_window(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tapplication_window_sig*)(GetFunction(EApiId_application_window)))(aVariety, aCol, aRow); }

	// LAF Table : application_window
	inline TAknLayoutScalableParameterLimits area_bottom_pane_ParamLimits(TInt aVariety) const		{ return (*(Tarea_bottom_pane_ParamLimits_sig*)(GetFunction(EApiId_area_bottom_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout area_bottom_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tarea_bottom_pane_sig*)(GetFunction(EApiId_area_bottom_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits area_top_pane_ParamLimits(TInt aVariety) const		{ return (*(Tarea_top_pane_ParamLimits_sig*)(GetFunction(EApiId_area_top_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout area_top_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tarea_top_pane_sig*)(GetFunction(EApiId_area_top_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits main_pane_ParamLimits(TInt aVariety) const		{ return (*(Tmain_pane_ParamLimits_sig*)(GetFunction(EApiId_main_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout main_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_pane_sig*)(GetFunction(EApiId_main_pane)))(aVariety, aCol, aRow); }

	// LAF Table : main_pane
	inline TAknWindowComponentLayout main_hc_listscroll_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_hc_listscroll_pane_sig*)(GetFunction(EApiId_main_hc_listscroll_pane)))(aVariety, aCol, aRow); }

	// LAF Table : main_hc_listscroll_pane
	inline TAknWindowComponentLayout hc_list_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_pane_sig*)(GetFunction(EApiId_hc_list_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout hc_scroll_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_scroll_pane_sig*)(GetFunction(EApiId_hc_scroll_pane)))(aVariety, aCol, aRow); }

	// LAF Table : hc_list_pane
	inline TAknWindowComponentLayout hc_list_double2_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_graphic_pane_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout hc_list_double2_large_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_large_graphic_pane_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout hc_list_double2_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_pane_sig*)(GetFunction(EApiId_hc_list_double2_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout hc_list_double_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_pane_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout hc_list_double_heading_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_heading_pane_sig*)(GetFunction(EApiId_hc_list_double_heading_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout hc_list_double_large_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_large_graphic_pane_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout hc_list_double_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_pane_sig*)(GetFunction(EApiId_hc_list_double_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout hc_list_single_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_graphic_pane_sig*)(GetFunction(EApiId_hc_list_single_graphic_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout hc_list_single_heading_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_heading_pane_sig*)(GetFunction(EApiId_hc_list_single_heading_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout hc_list_single_large_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_large_graphic_pane_sig*)(GetFunction(EApiId_hc_list_single_large_graphic_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout hc_list_single_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_pane_sig*)(GetFunction(EApiId_hc_list_single_pane)))(aVariety, aCol, aRow); }

	// LAF Table : hc_list_single_pane
	inline TAknLayoutScalableParameterLimits hc_list_single_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_single_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_pane_g1_sig*)(GetFunction(EApiId_hc_list_single_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_single_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_single_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_pane_g2_sig*)(GetFunction(EApiId_hc_list_single_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_single_pane_g_Limits() const		{ return (*(Thc_list_single_pane_g_Limits_sig*)(GetFunction(EApiId_hc_list_single_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_single_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_single_pane_g_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout hc_list_single_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_pane_g_sig*)(GetFunction(EApiId_hc_list_single_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_single_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_single_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_pane_t1_sig*)(GetFunction(EApiId_hc_list_single_pane_t1)))(aVariety, aCol, aRow); }

	// LAF Table : hc_list_single_graphic_pane
	inline TAknLayoutScalableParameterLimits hc_list_single_graphic_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_graphic_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_graphic_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_single_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_graphic_pane_g1_sig*)(GetFunction(EApiId_hc_list_single_graphic_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_single_graphic_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_graphic_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_graphic_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_single_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_graphic_pane_g2_sig*)(GetFunction(EApiId_hc_list_single_graphic_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_single_graphic_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_graphic_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_graphic_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_single_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_graphic_pane_g3_sig*)(GetFunction(EApiId_hc_list_single_graphic_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_single_graphic_pane_g_Limits() const		{ return (*(Thc_list_single_graphic_pane_g_Limits_sig*)(GetFunction(EApiId_hc_list_single_graphic_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_single_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_single_graphic_pane_g_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout hc_list_single_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_graphic_pane_g_sig*)(GetFunction(EApiId_hc_list_single_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_single_graphic_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_graphic_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_graphic_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_single_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_graphic_pane_t1_sig*)(GetFunction(EApiId_hc_list_single_graphic_pane_t1)))(aVariety, aCol, aRow); }

	// LAF Table : hc_list_single_heading_pane
	inline TAknLayoutScalableParameterLimits hc_list_single_heading_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_heading_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_heading_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_single_heading_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_heading_pane_g1_sig*)(GetFunction(EApiId_hc_list_single_heading_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_single_heading_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_heading_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_heading_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_single_heading_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_heading_pane_g2_sig*)(GetFunction(EApiId_hc_list_single_heading_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_single_heading_pane_g_Limits() const		{ return (*(Thc_list_single_heading_pane_g_Limits_sig*)(GetFunction(EApiId_hc_list_single_heading_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_single_heading_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_single_heading_pane_g_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_heading_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout hc_list_single_heading_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_heading_pane_g_sig*)(GetFunction(EApiId_hc_list_single_heading_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_single_heading_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_heading_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_heading_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_single_heading_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_heading_pane_t1_sig*)(GetFunction(EApiId_hc_list_single_heading_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_single_heading_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_heading_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_heading_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_single_heading_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_heading_pane_t2_sig*)(GetFunction(EApiId_hc_list_single_heading_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_single_heading_pane_t_Limits() const		{ return (*(Thc_list_single_heading_pane_t_Limits_sig*)(GetFunction(EApiId_hc_list_single_heading_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_single_heading_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_single_heading_pane_t_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_heading_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout hc_list_single_heading_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_heading_pane_t_sig*)(GetFunction(EApiId_hc_list_single_heading_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : hc_list_single_large_graphic_pane
	inline TAknLayoutScalableParameterLimits hc_list_single_large_graphic_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_large_graphic_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_large_graphic_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_single_large_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_large_graphic_pane_g1_sig*)(GetFunction(EApiId_hc_list_single_large_graphic_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_single_large_graphic_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_large_graphic_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_large_graphic_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_single_large_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_large_graphic_pane_g2_sig*)(GetFunction(EApiId_hc_list_single_large_graphic_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_single_large_graphic_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_large_graphic_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_large_graphic_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_single_large_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_large_graphic_pane_g3_sig*)(GetFunction(EApiId_hc_list_single_large_graphic_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_single_large_graphic_pane_g_Limits() const		{ return (*(Thc_list_single_large_graphic_pane_g_Limits_sig*)(GetFunction(EApiId_hc_list_single_large_graphic_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_single_large_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_single_large_graphic_pane_g_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_large_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout hc_list_single_large_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_large_graphic_pane_g_sig*)(GetFunction(EApiId_hc_list_single_large_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_single_large_graphic_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_single_large_graphic_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_single_large_graphic_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_single_large_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_single_large_graphic_pane_t1_sig*)(GetFunction(EApiId_hc_list_single_large_graphic_pane_t1)))(aVariety, aCol, aRow); }

	// LAF Table : hc_list_double_pane
	inline TAknLayoutScalableParameterLimits hc_list_double_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_pane_g1_sig*)(GetFunction(EApiId_hc_list_double_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_pane_g2_sig*)(GetFunction(EApiId_hc_list_double_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double_pane_g_Limits() const		{ return (*(Thc_list_double_pane_g_Limits_sig*)(GetFunction(EApiId_hc_list_double_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double_pane_g_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout hc_list_double_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_pane_g_sig*)(GetFunction(EApiId_hc_list_double_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_pane_t1_sig*)(GetFunction(EApiId_hc_list_double_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_pane_t2_sig*)(GetFunction(EApiId_hc_list_double_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double_pane_t_Limits() const		{ return (*(Thc_list_double_pane_t_Limits_sig*)(GetFunction(EApiId_hc_list_double_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double_pane_t_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout hc_list_double_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_pane_t_sig*)(GetFunction(EApiId_hc_list_double_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : hc_list_double_graphic_pane
	inline TAknLayoutScalableParameterLimits hc_list_double_graphic_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_graphic_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_pane_g1_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_graphic_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_graphic_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_pane_g2_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_graphic_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_graphic_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_pane_g3_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double_graphic_pane_g_Limits() const		{ return (*(Thc_list_double_graphic_pane_g_Limits_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double_graphic_pane_g_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout hc_list_double_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_pane_g_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_graphic_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_graphic_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_pane_t1_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_graphic_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_graphic_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double_graphic_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_pane_t2_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double_graphic_pane_t_Limits() const		{ return (*(Thc_list_double_graphic_pane_t_Limits_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double_graphic_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double_graphic_pane_t_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout hc_list_double_graphic_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_pane_t_sig*)(GetFunction(EApiId_hc_list_double_graphic_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : hc_list_double_heading_pane
	inline TAknLayoutScalableParameterLimits hc_list_double_heading_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_heading_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_heading_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double_heading_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_heading_pane_g1_sig*)(GetFunction(EApiId_hc_list_double_heading_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_heading_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_heading_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_heading_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double_heading_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_heading_pane_g2_sig*)(GetFunction(EApiId_hc_list_double_heading_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double_heading_pane_g_Limits() const		{ return (*(Thc_list_double_heading_pane_g_Limits_sig*)(GetFunction(EApiId_hc_list_double_heading_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double_heading_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double_heading_pane_g_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_heading_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout hc_list_double_heading_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_heading_pane_g_sig*)(GetFunction(EApiId_hc_list_double_heading_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_heading_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_heading_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_heading_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double_heading_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_heading_pane_t1_sig*)(GetFunction(EApiId_hc_list_double_heading_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_heading_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_heading_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_heading_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double_heading_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_heading_pane_t2_sig*)(GetFunction(EApiId_hc_list_double_heading_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double_heading_pane_t_Limits() const		{ return (*(Thc_list_double_heading_pane_t_Limits_sig*)(GetFunction(EApiId_hc_list_double_heading_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double_heading_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double_heading_pane_t_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_heading_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout hc_list_double_heading_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_heading_pane_t_sig*)(GetFunction(EApiId_hc_list_double_heading_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : hc_list_double_large_graphic_pane
	inline TAknLayoutScalableParameterLimits hc_list_double_large_graphic_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_large_graphic_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double_large_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_large_graphic_pane_g1_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_large_graphic_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_large_graphic_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double_large_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_large_graphic_pane_g2_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_large_graphic_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_large_graphic_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double_large_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_large_graphic_pane_g3_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double_large_graphic_pane_g_Limits() const		{ return (*(Thc_list_double_large_graphic_pane_g_Limits_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double_large_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double_large_graphic_pane_g_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout hc_list_double_large_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_large_graphic_pane_g_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_large_graphic_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_large_graphic_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double_large_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_large_graphic_pane_t1_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_large_graphic_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_large_graphic_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double_large_graphic_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_large_graphic_pane_t2_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double_large_graphic_pane_t_Limits() const		{ return (*(Thc_list_double_large_graphic_pane_t_Limits_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double_large_graphic_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double_large_graphic_pane_t_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout hc_list_double_large_graphic_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_large_graphic_pane_t_sig*)(GetFunction(EApiId_hc_list_double_large_graphic_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : hc_list_double2_pane
	inline TAknLayoutScalableParameterLimits hc_list_double2_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double2_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double2_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_pane_g1_sig*)(GetFunction(EApiId_hc_list_double2_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double2_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double2_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_pane_g2_sig*)(GetFunction(EApiId_hc_list_double2_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double2_pane_g_Limits() const		{ return (*(Thc_list_double2_pane_g_Limits_sig*)(GetFunction(EApiId_hc_list_double2_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double2_pane_g_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout hc_list_double2_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_pane_g_sig*)(GetFunction(EApiId_hc_list_double2_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double2_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double2_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_pane_t1_sig*)(GetFunction(EApiId_hc_list_double2_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double2_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double2_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_pane_t2_sig*)(GetFunction(EApiId_hc_list_double2_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double2_pane_t_Limits() const		{ return (*(Thc_list_double2_pane_t_Limits_sig*)(GetFunction(EApiId_hc_list_double2_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double2_pane_t_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout hc_list_double2_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_pane_t_sig*)(GetFunction(EApiId_hc_list_double2_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : hc_list_double2_graphic_pane
	inline TAknLayoutScalableParameterLimits hc_list_double2_graphic_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double2_graphic_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double2_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_graphic_pane_g1_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_graphic_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double2_graphic_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double2_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_graphic_pane_g2_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_graphic_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double2_graphic_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double2_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_graphic_pane_g3_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double2_graphic_pane_g_Limits() const		{ return (*(Thc_list_double2_graphic_pane_g_Limits_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double2_graphic_pane_g_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout hc_list_double2_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_graphic_pane_g_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_graphic_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double2_graphic_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double2_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_graphic_pane_t1_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_graphic_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double2_graphic_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double2_graphic_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_graphic_pane_t2_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double2_graphic_pane_t_Limits() const		{ return (*(Thc_list_double2_graphic_pane_t_Limits_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_graphic_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double2_graphic_pane_t_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout hc_list_double2_graphic_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_graphic_pane_t_sig*)(GetFunction(EApiId_hc_list_double2_graphic_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : hc_list_double2_large_graphic_pane
	inline TAknLayoutScalableParameterLimits hc_list_double2_large_graphic_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double2_large_graphic_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double2_large_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_large_graphic_pane_g1_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_large_graphic_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double2_large_graphic_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double2_large_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_large_graphic_pane_g2_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_large_graphic_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double2_large_graphic_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double2_large_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_large_graphic_pane_g3_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double2_large_graphic_pane_g_Limits() const		{ return (*(Thc_list_double2_large_graphic_pane_g_Limits_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_large_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double2_large_graphic_pane_g_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout hc_list_double2_large_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_large_graphic_pane_g_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_large_graphic_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double2_large_graphic_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double2_large_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_large_graphic_pane_t1_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_large_graphic_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double2_large_graphic_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double2_large_graphic_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_large_graphic_pane_t2_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double2_large_graphic_pane_t_Limits() const		{ return (*(Thc_list_double2_large_graphic_pane_t_Limits_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double2_large_graphic_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double2_large_graphic_pane_t_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout hc_list_double2_large_graphic_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double2_large_graphic_pane_t_sig*)(GetFunction(EApiId_hc_list_double2_large_graphic_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : main_pane
	inline TAknWindowComponentLayout main_hc_button_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_hc_button_pane_sig*)(GetFunction(EApiId_main_hc_button_pane)))(aVariety, aCol, aRow); }

	// LAF Table : main_hc_listscroll_pane
	inline TAknLayoutScalableParameterLimits aid_hc_size_touch_scroll_bar_ParamLimits(TInt aVariety) const		{ return (*(Taid_hc_size_touch_scroll_bar_ParamLimits_sig*)(GetFunction(EApiId_aid_hc_size_touch_scroll_bar_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aid_hc_size_touch_scroll_bar(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taid_hc_size_touch_scroll_bar_sig*)(GetFunction(EApiId_aid_hc_size_touch_scroll_bar)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aid_hc_size_touch_scroll_bar_cp01_ParamLimits(TInt aVariety) const		{ return (*(Taid_hc_size_touch_scroll_bar_cp01_ParamLimits_sig*)(GetFunction(EApiId_aid_hc_size_touch_scroll_bar_cp01_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aid_hc_size_touch_scroll_bar_cp01(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taid_hc_size_touch_scroll_bar_cp01_sig*)(GetFunction(EApiId_aid_hc_size_touch_scroll_bar_cp01)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout hc_popup_scroll_hotspot_window(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_popup_scroll_hotspot_window_sig*)(GetFunction(EApiId_hc_popup_scroll_hotspot_window)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_scroll_pane_ParamLimits(TInt aVariety) const		{ return (*(Thc_scroll_pane_ParamLimits_sig*)(GetFunction(EApiId_hc_scroll_pane_ParamLimits)))(aVariety); }

	inline TAknLayoutScalableParameterLimits hc_scroll_pane_cp01_ParamLimits(TInt aVariety) const		{ return (*(Thc_scroll_pane_cp01_ParamLimits_sig*)(GetFunction(EApiId_hc_scroll_pane_cp01_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_scroll_pane_cp01(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_scroll_pane_cp01_sig*)(GetFunction(EApiId_hc_scroll_pane_cp01)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits main_hc_listscroll_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Tmain_hc_listscroll_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_main_hc_listscroll_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout main_hc_listscroll_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_hc_listscroll_pane_g1_sig*)(GetFunction(EApiId_main_hc_listscroll_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits main_hc_listscroll_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Tmain_hc_listscroll_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_main_hc_listscroll_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout main_hc_listscroll_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_hc_listscroll_pane_g2_sig*)(GetFunction(EApiId_main_hc_listscroll_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits main_hc_listscroll_pane_g_Limits() const		{ return (*(Tmain_hc_listscroll_pane_g_Limits_sig*)(GetFunction(EApiId_main_hc_listscroll_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits main_hc_listscroll_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Tmain_hc_listscroll_pane_g_ParamLimits_sig*)(GetFunction(EApiId_main_hc_listscroll_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout main_hc_listscroll_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_hc_listscroll_pane_g_sig*)(GetFunction(EApiId_main_hc_listscroll_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : hc_list_pane
	inline TAknWindowComponentLayout hc_list_double_graphic_heading_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_heading_pane_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane)))(aVariety, aCol, aRow); }

	// LAF Table : hc_scroll_pane
	inline TAknLayoutScalableParameterLimits aid_hc_size_max_handle_ParamLimits(TInt aVariety) const		{ return (*(Taid_hc_size_max_handle_ParamLimits_sig*)(GetFunction(EApiId_aid_hc_size_max_handle_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aid_hc_size_max_handle(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taid_hc_size_max_handle_sig*)(GetFunction(EApiId_aid_hc_size_max_handle)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aid_hc_size_min_handle_ParamLimits(TInt aVariety) const		{ return (*(Taid_hc_size_min_handle_ParamLimits_sig*)(GetFunction(EApiId_aid_hc_size_min_handle_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aid_hc_size_min_handle(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taid_hc_size_min_handle_sig*)(GetFunction(EApiId_aid_hc_size_min_handle)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_scroll_bg_pane_ParamLimits(TInt aVariety) const		{ return (*(Thc_scroll_bg_pane_ParamLimits_sig*)(GetFunction(EApiId_hc_scroll_bg_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_scroll_bg_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_scroll_bg_pane_sig*)(GetFunction(EApiId_hc_scroll_bg_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_scroll_handle_pane_ParamLimits(TInt aVariety) const		{ return (*(Thc_scroll_handle_pane_ParamLimits_sig*)(GetFunction(EApiId_hc_scroll_handle_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_scroll_handle_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_scroll_handle_pane_sig*)(GetFunction(EApiId_hc_scroll_handle_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_scroll_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_scroll_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_scroll_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_scroll_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_scroll_pane_g1_sig*)(GetFunction(EApiId_hc_scroll_pane_g1)))(aVariety, aCol, aRow); }

	// LAF Table : hc_scroll_bg_pane
	inline TAknLayoutScalableParameterLimits hc_scroll_bg_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_scroll_bg_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_scroll_bg_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_scroll_bg_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_scroll_bg_pane_g1_sig*)(GetFunction(EApiId_hc_scroll_bg_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_scroll_bg_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Thc_scroll_bg_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_hc_scroll_bg_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_scroll_bg_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_scroll_bg_pane_g2_sig*)(GetFunction(EApiId_hc_scroll_bg_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_scroll_bg_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Thc_scroll_bg_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_hc_scroll_bg_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_scroll_bg_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_scroll_bg_pane_g3_sig*)(GetFunction(EApiId_hc_scroll_bg_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_scroll_bg_pane_g_Limits() const		{ return (*(Thc_scroll_bg_pane_g_Limits_sig*)(GetFunction(EApiId_hc_scroll_bg_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_scroll_bg_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_scroll_bg_pane_g_ParamLimits_sig*)(GetFunction(EApiId_hc_scroll_bg_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout hc_scroll_bg_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_scroll_bg_pane_g_sig*)(GetFunction(EApiId_hc_scroll_bg_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : hc_scroll_handle_pane
	inline TAknLayoutScalableParameterLimits hc_scroll_handle_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_scroll_handle_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_scroll_handle_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_scroll_handle_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_scroll_handle_pane_g1_sig*)(GetFunction(EApiId_hc_scroll_handle_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_scroll_handle_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Thc_scroll_handle_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_hc_scroll_handle_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_scroll_handle_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_scroll_handle_pane_g2_sig*)(GetFunction(EApiId_hc_scroll_handle_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_scroll_handle_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Thc_scroll_handle_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_hc_scroll_handle_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_scroll_handle_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_scroll_handle_pane_g3_sig*)(GetFunction(EApiId_hc_scroll_handle_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_scroll_handle_pane_g_Limits() const		{ return (*(Thc_scroll_handle_pane_g_Limits_sig*)(GetFunction(EApiId_hc_scroll_handle_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_scroll_handle_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_scroll_handle_pane_g_ParamLimits_sig*)(GetFunction(EApiId_hc_scroll_handle_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout hc_scroll_handle_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_scroll_handle_pane_g_sig*)(GetFunction(EApiId_hc_scroll_handle_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : hc_popup_scroll_hotspot_window
	inline TAknWindowComponentLayout bg_hc_secondary_window(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_secondary_window_sig*)(GetFunction(EApiId_bg_hc_secondary_window)))(aVariety, aCol, aRow); }

	inline TAknTextComponentLayout qfn_secondary_cp6(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tqfn_secondary_cp6_sig*)(GetFunction(EApiId_qfn_secondary_cp6)))(aVariety, aCol, aRow); }

	// LAF Table : main_hc_button_pane
	inline TAknWindowComponentLayout hc_button_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_button_pane_sig*)(GetFunction(EApiId_hc_button_pane)))(aVariety, aCol, aRow); }

	// LAF Table : hc_button_pane
	inline TAknLayoutScalableParameterLimits bg_hc_button_pane_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_button_pane_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_button_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_button_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_button_pane_sig*)(GetFunction(EApiId_bg_hc_button_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_button_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_button_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_button_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_button_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_button_pane_g1_sig*)(GetFunction(EApiId_hc_button_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_button_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Thc_button_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_hc_button_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_button_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_button_pane_t1_sig*)(GetFunction(EApiId_hc_button_pane_t1)))(aVariety, aCol, aRow); }

	// LAF Table : bg_hc_button_pane
	inline TAknWindowComponentLayout bg_hc_button_pane_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_button_pane_g1_sig*)(GetFunction(EApiId_bg_hc_button_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout bg_hc_button_pane_g2(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_button_pane_g2_sig*)(GetFunction(EApiId_bg_hc_button_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout bg_hc_button_pane_g3(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_button_pane_g3_sig*)(GetFunction(EApiId_bg_hc_button_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout bg_hc_button_pane_g4(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_button_pane_g4_sig*)(GetFunction(EApiId_bg_hc_button_pane_g4)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout bg_hc_button_pane_g5(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_button_pane_g5_sig*)(GetFunction(EApiId_bg_hc_button_pane_g5)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout bg_hc_button_pane_g6(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_button_pane_g6_sig*)(GetFunction(EApiId_bg_hc_button_pane_g6)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout bg_hc_button_pane_g7(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_button_pane_g7_sig*)(GetFunction(EApiId_bg_hc_button_pane_g7)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout bg_hc_button_pane_g8(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_button_pane_g8_sig*)(GetFunction(EApiId_bg_hc_button_pane_g8)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout bg_hc_button_pane_g9(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_button_pane_g9_sig*)(GetFunction(EApiId_bg_hc_button_pane_g9)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits bg_hc_button_pane_g_Limits() const		{ return (*(Tbg_hc_button_pane_g_Limits_sig*)(GetFunction(EApiId_bg_hc_button_pane_g_Limits)))(); }

	inline TAknWindowComponentLayout bg_hc_button_pane_g(TInt aLineIndex, TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_button_pane_g_sig*)(GetFunction(EApiId_bg_hc_button_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : hc_list_double_graphic_heading_pane
	inline TAknLayoutScalableParameterLimits hc_list_double_graphic_heading_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_graphic_heading_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double_graphic_heading_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_heading_pane_g1_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_graphic_heading_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_graphic_heading_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double_graphic_heading_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_heading_pane_g2_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_graphic_heading_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_graphic_heading_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_list_double_graphic_heading_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_heading_pane_g3_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double_graphic_heading_pane_g_Limits() const		{ return (*(Thc_list_double_graphic_heading_pane_g_Limits_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double_graphic_heading_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double_graphic_heading_pane_g_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout hc_list_double_graphic_heading_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_heading_pane_g_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_graphic_heading_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_graphic_heading_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double_graphic_heading_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_heading_pane_t1_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_list_double_graphic_heading_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Thc_list_double_graphic_heading_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout hc_list_double_graphic_heading_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_heading_pane_t2_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits hc_list_double_graphic_heading_pane_t_Limits() const		{ return (*(Thc_list_double_graphic_heading_pane_t_Limits_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits hc_list_double_graphic_heading_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Thc_list_double_graphic_heading_pane_t_ParamLimits_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout hc_list_double_graphic_heading_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_list_double_graphic_heading_pane_t_sig*)(GetFunction(EApiId_hc_list_double_graphic_heading_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : main_pane
	inline TAknWindowComponentLayout main_hc_gridscroll_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_hc_gridscroll_pane_sig*)(GetFunction(EApiId_main_hc_gridscroll_pane)))(aVariety, aCol, aRow); }

	// LAF Table : hc_list_single_pane
	inline TAknWindowComponentLayout bg_hc_highlight_list_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_list_pane_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane)))(aVariety, aCol, aRow); }

	// LAF Table : main_hc_gridscroll_pane
	inline TAknLayoutScalableParameterLimits aid_hc_grid_cell_size_ParamLimits(TInt aVariety) const		{ return (*(Taid_hc_grid_cell_size_ParamLimits_sig*)(GetFunction(EApiId_aid_hc_grid_cell_size_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aid_hc_grid_cell_size(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taid_hc_grid_cell_size_sig*)(GetFunction(EApiId_aid_hc_grid_cell_size)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits hc_scroll_pane_cp02_ParamLimits(TInt aVariety) const		{ return (*(Thc_scroll_pane_cp02_ParamLimits_sig*)(GetFunction(EApiId_hc_scroll_pane_cp02_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout hc_scroll_pane_cp02(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Thc_scroll_pane_cp02_sig*)(GetFunction(EApiId_hc_scroll_pane_cp02)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits main_hc_grid_pane_ParamLimits(TInt aVariety) const		{ return (*(Tmain_hc_grid_pane_ParamLimits_sig*)(GetFunction(EApiId_main_hc_grid_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout main_hc_grid_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_hc_grid_pane_sig*)(GetFunction(EApiId_main_hc_grid_pane)))(aVariety, aCol, aRow); }

	// LAF Table : main_hc_grid_pane
	inline TAknLayoutScalableParameterLimits cell_hc_grid_pane_ParamLimits(TInt aVariety) const		{ return (*(Tcell_hc_grid_pane_ParamLimits_sig*)(GetFunction(EApiId_cell_hc_grid_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout cell_hc_grid_pane(TInt aVariety, TInt aCol, TInt aRow) const		{ return (*(Tcell_hc_grid_pane_sig*)(GetFunction(EApiId_cell_hc_grid_pane)))(aVariety, aCol, aRow); }

	// LAF Table : cell_hc_grid_pane
	inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_grid_pane_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_grid_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_grid_pane_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits cell_hc_grid_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Tcell_hc_grid_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_cell_hc_grid_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout cell_hc_grid_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tcell_hc_grid_pane_g1_sig*)(GetFunction(EApiId_cell_hc_grid_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits cell_hc_grid_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Tcell_hc_grid_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_cell_hc_grid_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout cell_hc_grid_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tcell_hc_grid_pane_t1_sig*)(GetFunction(EApiId_cell_hc_grid_pane_t1)))(aVariety, aCol, aRow); }

	// LAF Table : bg_hc_highlight_grid_pane
	inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_grid_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_grid_pane_g1_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_grid_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_grid_pane_g2_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_grid_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_grid_pane_g3_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g4_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_grid_pane_g4_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g4_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g4(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_grid_pane_g4_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g4)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g5_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_grid_pane_g5_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g5_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g5(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_grid_pane_g5_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g5)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g6_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_grid_pane_g6_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g6_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g6(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_grid_pane_g6_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g6)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g7_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_grid_pane_g7_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g7_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g7(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_grid_pane_g7_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g7)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g8_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_grid_pane_g8_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g8_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g8(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_grid_pane_g8_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g8)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g9_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_grid_pane_g9_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g9_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g9(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_grid_pane_g9_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g9)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g10_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_grid_pane_g10_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g10_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g10(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_grid_pane_g10_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g10)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits bg_hc_highlight_grid_pane_g_Limits() const		{ return (*(Tbg_hc_highlight_grid_pane_g_Limits_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_grid_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Tbg_hc_highlight_grid_pane_g_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_grid_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_grid_pane_g_sig*)(GetFunction(EApiId_bg_hc_highlight_grid_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : bg_hc_highlight_list_pane
	inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_list_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_list_pane_g1_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_list_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_list_pane_g2_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_list_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_list_pane_g3_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g4_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_list_pane_g4_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g4_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g4(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_list_pane_g4_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g4)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g5_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_list_pane_g5_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g5_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g5(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_list_pane_g5_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g5)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g6_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_list_pane_g6_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g6_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g6(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_list_pane_g6_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g6)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g7_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_list_pane_g7_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g7_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g7(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_list_pane_g7_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g7)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g8_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_list_pane_g8_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g8_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g8(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_list_pane_g8_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g8)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g9_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_list_pane_g9_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g9_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g9(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_list_pane_g9_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g9)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g10_ParamLimits(TInt aVariety) const		{ return (*(Tbg_hc_highlight_list_pane_g10_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g10_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g10(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_list_pane_g10_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g10)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits bg_hc_highlight_list_pane_g_Limits() const		{ return (*(Tbg_hc_highlight_list_pane_g_Limits_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits bg_hc_highlight_list_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Tbg_hc_highlight_list_pane_g_ParamLimits_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout bg_hc_highlight_list_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tbg_hc_highlight_list_pane_g_sig*)(GetFunction(EApiId_bg_hc_highlight_list_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : application_window
	inline TAknLayoutScalableParameterLimits area_side_right_pane_ParamLimits(TInt aVariety) const		{ return (*(Tarea_side_right_pane_ParamLimits_sig*)(GetFunction(EApiId_area_side_right_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout area_side_right_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tarea_side_right_pane_sig*)(GetFunction(EApiId_area_side_right_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout popup_toolbar2_fixed_window_cp001(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tpopup_toolbar2_fixed_window_cp001_sig*)(GetFunction(EApiId_popup_toolbar2_fixed_window_cp001)))(aVariety, aCol, aRow); }

	// LAF Table : main_pane
	inline TAknWindowComponentLayout main_aa_coverflow_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_coverflow_pane_sig*)(GetFunction(EApiId_main_aa_coverflow_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout main_aa_empty_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_empty_pane_sig*)(GetFunction(EApiId_main_aa_empty_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout main_aa_fastscroll_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_fastscroll_pane_sig*)(GetFunction(EApiId_main_aa_fastscroll_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits main_aa_gridscroll_pane_ParamLimits(TInt aVariety) const		{ return (*(Tmain_aa_gridscroll_pane_ParamLimits_sig*)(GetFunction(EApiId_main_aa_gridscroll_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout main_aa_gridscroll_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_gridscroll_pane_sig*)(GetFunction(EApiId_main_aa_gridscroll_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout main_aa_listscroll_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_listscroll_pane_sig*)(GetFunction(EApiId_main_aa_listscroll_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout main_aa_metadata_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_metadata_pane_sig*)(GetFunction(EApiId_main_aa_metadata_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout main_aa_slider_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_slider_pane_sig*)(GetFunction(EApiId_main_aa_slider_pane)))(aVariety, aCol, aRow); }

	// LAF Table : main_aa_coverflow_pane
	inline TAknLayoutScalableParameterLimits aacf_image_pane_ParamLimits(TInt aVariety) const		{ return (*(Taacf_image_pane_ParamLimits_sig*)(GetFunction(EApiId_aacf_image_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aacf_image_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taacf_image_pane_sig*)(GetFunction(EApiId_aacf_image_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aacf_image_pane_cp001_ParamLimits(TInt aVariety) const		{ return (*(Taacf_image_pane_cp001_ParamLimits_sig*)(GetFunction(EApiId_aacf_image_pane_cp001_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aacf_image_pane_cp001(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taacf_image_pane_cp001_sig*)(GetFunction(EApiId_aacf_image_pane_cp001)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aacf_image_pane_cp002_ParamLimits(TInt aVariety) const		{ return (*(Taacf_image_pane_cp002_ParamLimits_sig*)(GetFunction(EApiId_aacf_image_pane_cp002_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aacf_image_pane_cp002(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taacf_image_pane_cp002_sig*)(GetFunction(EApiId_aacf_image_pane_cp002)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout aacf_slider_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taacf_slider_pane_sig*)(GetFunction(EApiId_aacf_slider_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits main_aa_coverflow_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Tmain_aa_coverflow_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_main_aa_coverflow_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout main_aa_coverflow_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_coverflow_pane_t1_sig*)(GetFunction(EApiId_main_aa_coverflow_pane_t1)))(aVariety, aCol, aRow); }

	// LAF Table : aacf_image_pane
	inline TAknLayoutScalableParameterLimits aacf_image_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taacf_image_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aacf_image_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aacf_image_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taacf_image_pane_g1_sig*)(GetFunction(EApiId_aacf_image_pane_g1)))(aVariety, aCol, aRow); }

	// LAF Table : main_aa_coverflow_pane
	inline TAknLayoutScalableParameterLimits aacf_image_title_pane_ParamLimits(TInt aVariety) const		{ return (*(Taacf_image_title_pane_ParamLimits_sig*)(GetFunction(EApiId_aacf_image_title_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aacf_image_title_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taacf_image_title_pane_sig*)(GetFunction(EApiId_aacf_image_title_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aacf_slider_pane
	inline TAknWindowComponentLayout aacf_slider_pane_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taacf_slider_pane_g1_sig*)(GetFunction(EApiId_aacf_slider_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout aacf_slider_pane_g1_cp001(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taacf_slider_pane_g1_cp001_sig*)(GetFunction(EApiId_aacf_slider_pane_g1_cp001)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout aaslider_bg_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_bg_pane_sig*)(GetFunction(EApiId_aaslider_bg_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aacf_image_title_pane
	inline TAknLayoutScalableParameterLimits aacf_image_title_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taacf_image_title_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aacf_image_title_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aacf_image_title_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taacf_image_title_pane_g1_sig*)(GetFunction(EApiId_aacf_image_title_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aacf_image_title_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Taacf_image_title_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_aacf_image_title_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aacf_image_title_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taacf_image_title_pane_t1_sig*)(GetFunction(EApiId_aacf_image_title_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aacf_image_title_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Taacf_image_title_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_aacf_image_title_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aacf_image_title_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taacf_image_title_pane_t2_sig*)(GetFunction(EApiId_aacf_image_title_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aacf_image_title_pane_t_Limits() const		{ return (*(Taacf_image_title_pane_t_Limits_sig*)(GetFunction(EApiId_aacf_image_title_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aacf_image_title_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taacf_image_title_pane_t_ParamLimits_sig*)(GetFunction(EApiId_aacf_image_title_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout aacf_image_title_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taacf_image_title_pane_t_sig*)(GetFunction(EApiId_aacf_image_title_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : main_aa_fastscroll_pane
	inline TAknLayoutScalableParameterLimits aafs_strip_pane_ParamLimits(TInt aVariety) const		{ return (*(Taafs_strip_pane_ParamLimits_sig*)(GetFunction(EApiId_aafs_strip_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aafs_strip_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taafs_strip_pane_sig*)(GetFunction(EApiId_aafs_strip_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits main_aa_fastscroll_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Tmain_aa_fastscroll_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_main_aa_fastscroll_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout main_aa_fastscroll_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_fastscroll_pane_g1_sig*)(GetFunction(EApiId_main_aa_fastscroll_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits main_aa_fastscroll_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Tmain_aa_fastscroll_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_main_aa_fastscroll_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout main_aa_fastscroll_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_fastscroll_pane_g2_sig*)(GetFunction(EApiId_main_aa_fastscroll_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits main_aa_fastscroll_pane_g_Limits() const		{ return (*(Tmain_aa_fastscroll_pane_g_Limits_sig*)(GetFunction(EApiId_main_aa_fastscroll_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits main_aa_fastscroll_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Tmain_aa_fastscroll_pane_g_ParamLimits_sig*)(GetFunction(EApiId_main_aa_fastscroll_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout main_aa_fastscroll_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_fastscroll_pane_g_sig*)(GetFunction(EApiId_main_aa_fastscroll_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : aafs_strip_pane
	inline TAknLayoutScalableParameterLimits aafs_strip_grid_pane_ParamLimits(TInt aVariety) const		{ return (*(Taafs_strip_grid_pane_ParamLimits_sig*)(GetFunction(EApiId_aafs_strip_grid_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aafs_strip_grid_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taafs_strip_grid_pane_sig*)(GetFunction(EApiId_aafs_strip_grid_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aafs_strip_shadow_pane_ParamLimits(TInt aVariety) const		{ return (*(Taafs_strip_shadow_pane_ParamLimits_sig*)(GetFunction(EApiId_aafs_strip_shadow_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aafs_strip_shadow_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taafs_strip_shadow_pane_sig*)(GetFunction(EApiId_aafs_strip_shadow_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aafs_strip_grid_pane
	inline TAknLayoutScalableParameterLimits aafs_strip_grid_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taafs_strip_grid_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aafs_strip_grid_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aafs_strip_grid_pane_g1(TInt aVariety, TInt aCol, TInt aRow = 0) const		{ return (*(Taafs_strip_grid_pane_g1_sig*)(GetFunction(EApiId_aafs_strip_grid_pane_g1)))(aVariety, aCol, aRow); }

	// LAF Table : main_aa_listscroll_pane
	inline TAknWindowComponentLayout aa_scroll_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taa_scroll_pane_sig*)(GetFunction(EApiId_aa_scroll_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_gene_pane_ParamLimits(TInt aVariety) const		{ return (*(Taalist_gene_pane_ParamLimits_sig*)(GetFunction(EApiId_aalist_gene_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_gene_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_gene_pane_sig*)(GetFunction(EApiId_aalist_gene_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aalist_gene_pane
	inline TAknLayoutScalableParameterLimits aalist_double_entry_pane_ParamLimits(TInt aVariety = 0) const		{ return (*(Taalist_double_entry_pane_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_entry_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_entry_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_entry_pane_sig*)(GetFunction(EApiId_aalist_double_entry_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_ParamLimits(TInt aVariety = 0) const		{ return (*(Taalist_double_graphic_pane_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_sig*)(GetFunction(EApiId_aalist_double_graphic_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_pane_ParamLimits(TInt aVariety = 0) const		{ return (*(Taalist_double_pane_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_pane_sig*)(GetFunction(EApiId_aalist_double_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_ParamLimits(TInt aVariety = 0) const		{ return (*(Taalist_double_progress_pane_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_progress_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_progress_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_progress_pane_sig*)(GetFunction(EApiId_aalist_double_progress_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_gene_ad_pane_ParamLimits(TInt aVariety = 0) const		{ return (*(Taalist_gene_ad_pane_ParamLimits_sig*)(GetFunction(EApiId_aalist_gene_ad_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_gene_ad_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_gene_ad_pane_sig*)(GetFunction(EApiId_aalist_gene_ad_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_single_pane_ParamLimits(TInt aVariety = 0) const		{ return (*(Taalist_single_pane_ParamLimits_sig*)(GetFunction(EApiId_aalist_single_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_single_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_single_pane_sig*)(GetFunction(EApiId_aalist_single_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aalist_single_pane
	inline TAknLayoutScalableParameterLimits aalist_single_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taalist_single_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aalist_single_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_single_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_single_pane_g1_sig*)(GetFunction(EApiId_aalist_single_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_single_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Taalist_single_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_aalist_single_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_single_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_single_pane_g2_sig*)(GetFunction(EApiId_aalist_single_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aalist_single_pane_g_Limits() const		{ return (*(Taalist_single_pane_g_Limits_sig*)(GetFunction(EApiId_aalist_single_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aalist_single_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taalist_single_pane_g_ParamLimits_sig*)(GetFunction(EApiId_aalist_single_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout aalist_single_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_single_pane_g_sig*)(GetFunction(EApiId_aalist_single_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_single_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Taalist_single_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_aalist_single_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aalist_single_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_single_pane_t1_sig*)(GetFunction(EApiId_aalist_single_pane_t1)))(aVariety, aCol, aRow); }

	// LAF Table : aalist_double_pane
	inline TAknLayoutScalableParameterLimits aalist_double_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_pane_g1_sig*)(GetFunction(EApiId_aalist_double_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_pane_g2_sig*)(GetFunction(EApiId_aalist_double_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aalist_double_pane_g_Limits() const		{ return (*(Taalist_double_pane_g_Limits_sig*)(GetFunction(EApiId_aalist_double_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aalist_double_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taalist_double_pane_g_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout aalist_double_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_pane_g_sig*)(GetFunction(EApiId_aalist_double_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aalist_double_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_pane_t1_sig*)(GetFunction(EApiId_aalist_double_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aalist_double_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_pane_t2_sig*)(GetFunction(EApiId_aalist_double_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aalist_double_pane_t_Limits() const		{ return (*(Taalist_double_pane_t_Limits_sig*)(GetFunction(EApiId_aalist_double_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aalist_double_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taalist_double_pane_t_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout aalist_double_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_pane_t_sig*)(GetFunction(EApiId_aalist_double_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : aalist_double_graphic_pane
	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_g1_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_g2_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_g3_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g4_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_g4_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g4_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_graphic_pane_g4(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_g4_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g4)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g5_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_g5_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g5_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_graphic_pane_g5(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_g5_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g5)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g6_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_g6_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g6_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_graphic_pane_g6(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_g6_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g6)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g7_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_g7_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g7_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_graphic_pane_g7(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_g7_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g7)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g8_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_g8_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g8_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_graphic_pane_g8(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_g8_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g8)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g9_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_g9_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g9_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_graphic_pane_g9(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_g9_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g9)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g10_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_g10_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g10_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_graphic_pane_g10(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_g10_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g10)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g11_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_g11_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g11_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_graphic_pane_g11(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_g11_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g11)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aalist_double_graphic_pane_g_Limits() const		{ return (*(Taalist_double_graphic_pane_g_Limits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_g_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout aalist_double_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_g_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aalist_double_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_t1_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aalist_double_graphic_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_t2_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aalist_double_graphic_pane_t_Limits() const		{ return (*(Taalist_double_graphic_pane_t_Limits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aalist_double_graphic_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taalist_double_graphic_pane_t_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout aalist_double_graphic_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_graphic_pane_t_sig*)(GetFunction(EApiId_aalist_double_graphic_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : aalist_double_entry_pane
	inline TAknTextComponentLayout aalist_double_entry_pane_t1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_entry_pane_t1_sig*)(GetFunction(EApiId_aalist_double_entry_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout aalist_entry_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_entry_pane_sig*)(GetFunction(EApiId_aalist_entry_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aalist_entry_pane
	inline TAknTextComponentLayout aalist_entry_pane_t1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_entry_pane_t1_sig*)(GetFunction(EApiId_aalist_entry_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout input_focus_pane_cp001(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tinput_focus_pane_cp001_sig*)(GetFunction(EApiId_input_focus_pane_cp001)))(aVariety, aCol, aRow); }

	// LAF Table : aalist_double_progress_pane
	inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_progress_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_progress_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_progress_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_progress_pane_g1_sig*)(GetFunction(EApiId_aalist_double_progress_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_progress_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_progress_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_progress_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_progress_pane_g2_sig*)(GetFunction(EApiId_aalist_double_progress_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_progress_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_progress_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_double_progress_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_progress_pane_g3_sig*)(GetFunction(EApiId_aalist_double_progress_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aalist_double_progress_pane_g_Limits() const		{ return (*(Taalist_double_progress_pane_g_Limits_sig*)(GetFunction(EApiId_aalist_double_progress_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taalist_double_progress_pane_g_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_progress_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout aalist_double_progress_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_progress_pane_g_sig*)(GetFunction(EApiId_aalist_double_progress_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_progress_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_progress_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aalist_double_progress_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_progress_pane_t1_sig*)(GetFunction(EApiId_aalist_double_progress_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_progress_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_progress_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aalist_double_progress_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_progress_pane_t2_sig*)(GetFunction(EApiId_aalist_double_progress_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_t3_ParamLimits(TInt aVariety) const		{ return (*(Taalist_double_progress_pane_t3_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_progress_pane_t3_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aalist_double_progress_pane_t3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_progress_pane_t3_sig*)(GetFunction(EApiId_aalist_double_progress_pane_t3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aalist_double_progress_pane_t_Limits() const		{ return (*(Taalist_double_progress_pane_t_Limits_sig*)(GetFunction(EApiId_aalist_double_progress_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aalist_double_progress_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taalist_double_progress_pane_t_ParamLimits_sig*)(GetFunction(EApiId_aalist_double_progress_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout aalist_double_progress_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_double_progress_pane_t_sig*)(GetFunction(EApiId_aalist_double_progress_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_progress_pane_ParamLimits(TInt aVariety) const		{ return (*(Taalist_progress_pane_ParamLimits_sig*)(GetFunction(EApiId_aalist_progress_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_progress_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_progress_pane_sig*)(GetFunction(EApiId_aalist_progress_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aalist_progress_pane
	inline TAknWindowComponentLayout aalist_progress_pane_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_progress_pane_g1_sig*)(GetFunction(EApiId_aalist_progress_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout aalist_progress_pane_g2(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_progress_pane_g2_sig*)(GetFunction(EApiId_aalist_progress_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout aalist_progress_pane_g3(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_progress_pane_g3_sig*)(GetFunction(EApiId_aalist_progress_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aalist_progress_pane_g_Limits() const		{ return (*(Taalist_progress_pane_g_Limits_sig*)(GetFunction(EApiId_aalist_progress_pane_g_Limits)))(); }

	inline TAknWindowComponentLayout aalist_progress_pane_g(TInt aLineIndex, TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_progress_pane_g_sig*)(GetFunction(EApiId_aalist_progress_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : aalist_gene_ad_pane
	inline TAknWindowComponentLayout aalist_gene_ad_pane_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_gene_ad_pane_g1_sig*)(GetFunction(EApiId_aalist_gene_ad_pane_g1)))(aVariety, aCol, aRow); }

	// LAF Table : main_aa_empty_pane
	inline TAknTextComponentLayout main_aa_empty_pane_t1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_empty_pane_t1_sig*)(GetFunction(EApiId_main_aa_empty_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknTextComponentLayout main_aa_empty_pane_t2(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_empty_pane_t2_sig*)(GetFunction(EApiId_main_aa_empty_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknTextComponentLayout main_aa_empty_pane_t3(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_empty_pane_t3_sig*)(GetFunction(EApiId_main_aa_empty_pane_t3)))(aVariety, aCol, aRow); }

	inline TAknTextComponentLayout main_aa_empty_pane_t4(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_empty_pane_t4_sig*)(GetFunction(EApiId_main_aa_empty_pane_t4)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits main_aa_empty_pane_t_Limits() const		{ return (*(Tmain_aa_empty_pane_t_Limits_sig*)(GetFunction(EApiId_main_aa_empty_pane_t_Limits)))(); }

	inline TAknTextComponentLayout main_aa_empty_pane_t(TInt aLineIndex, TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_empty_pane_t_sig*)(GetFunction(EApiId_main_aa_empty_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : main_aa_gridscroll_pane
	inline TAknLayoutScalableParameterLimits aa_scroll_pane_cp001_ParamLimits(TInt aVariety) const		{ return (*(Taa_scroll_pane_cp001_ParamLimits_sig*)(GetFunction(EApiId_aa_scroll_pane_cp001_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aa_scroll_pane_cp001(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taa_scroll_pane_cp001_sig*)(GetFunction(EApiId_aa_scroll_pane_cp001)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aa_taskswapper_pane_ParamLimits(TInt aVariety) const		{ return (*(Taa_taskswapper_pane_ParamLimits_sig*)(GetFunction(EApiId_aa_taskswapper_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aa_taskswapper_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taa_taskswapper_pane_sig*)(GetFunction(EApiId_aa_taskswapper_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aagrid_gene_pane_ParamLimits(TInt aVariety) const		{ return (*(Taagrid_gene_pane_ParamLimits_sig*)(GetFunction(EApiId_aagrid_gene_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aagrid_gene_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taagrid_gene_pane_sig*)(GetFunction(EApiId_aagrid_gene_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aagrid_gene_pane
	inline TAknLayoutScalableParameterLimits aagrid_cell_image_pane_ParamLimits(TInt aVariety) const		{ return (*(Taagrid_cell_image_pane_ParamLimits_sig*)(GetFunction(EApiId_aagrid_cell_image_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aagrid_cell_image_pane(TInt aVariety, TInt aCol, TInt aRow) const		{ return (*(Taagrid_cell_image_pane_sig*)(GetFunction(EApiId_aagrid_cell_image_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aagrid_cell_image_pane
	inline TAknLayoutScalableParameterLimits aagrid_cell_image_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taagrid_cell_image_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aagrid_cell_image_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aagrid_cell_image_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taagrid_cell_image_pane_g1_sig*)(GetFunction(EApiId_aagrid_cell_image_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aagrid_cell_image_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Taagrid_cell_image_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_aagrid_cell_image_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aagrid_cell_image_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taagrid_cell_image_pane_g2_sig*)(GetFunction(EApiId_aagrid_cell_image_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aagrid_cell_image_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Taagrid_cell_image_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_aagrid_cell_image_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aagrid_cell_image_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taagrid_cell_image_pane_g3_sig*)(GetFunction(EApiId_aagrid_cell_image_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aagrid_cell_image_pane_g4_ParamLimits(TInt aVariety) const		{ return (*(Taagrid_cell_image_pane_g4_ParamLimits_sig*)(GetFunction(EApiId_aagrid_cell_image_pane_g4_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aagrid_cell_image_pane_g4(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taagrid_cell_image_pane_g4_sig*)(GetFunction(EApiId_aagrid_cell_image_pane_g4)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aagrid_cell_image_pane_g_Limits() const		{ return (*(Taagrid_cell_image_pane_g_Limits_sig*)(GetFunction(EApiId_aagrid_cell_image_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aagrid_cell_image_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taagrid_cell_image_pane_g_ParamLimits_sig*)(GetFunction(EApiId_aagrid_cell_image_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout aagrid_cell_image_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taagrid_cell_image_pane_g_sig*)(GetFunction(EApiId_aagrid_cell_image_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aagrid_cell_image_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Taagrid_cell_image_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_aagrid_cell_image_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aagrid_cell_image_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taagrid_cell_image_pane_t1_sig*)(GetFunction(EApiId_aagrid_cell_image_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits grid_highlight_pane_cp001_ParamLimits(TInt aVariety) const		{ return (*(Tgrid_highlight_pane_cp001_ParamLimits_sig*)(GetFunction(EApiId_grid_highlight_pane_cp001_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout grid_highlight_pane_cp001(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tgrid_highlight_pane_cp001_sig*)(GetFunction(EApiId_grid_highlight_pane_cp001)))(aVariety, aCol, aRow); }

	// LAF Table : aa_taskswapper_pane
	inline TAknLayoutScalableParameterLimits aa_taskswapper_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taa_taskswapper_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aa_taskswapper_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aa_taskswapper_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taa_taskswapper_pane_g1_sig*)(GetFunction(EApiId_aa_taskswapper_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aa_taskswapper_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Taa_taskswapper_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_aa_taskswapper_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aa_taskswapper_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taa_taskswapper_pane_t1_sig*)(GetFunction(EApiId_aa_taskswapper_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aatasksw_grid_pane_ParamLimits(TInt aVariety) const		{ return (*(Taatasksw_grid_pane_ParamLimits_sig*)(GetFunction(EApiId_aatasksw_grid_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aatasksw_grid_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taatasksw_grid_pane_sig*)(GetFunction(EApiId_aatasksw_grid_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aatasksw_grid_pane
	inline TAknLayoutScalableParameterLimits aatasksw_cell_pane_ParamLimits(TInt aVariety = 0) const		{ return (*(Taatasksw_cell_pane_ParamLimits_sig*)(GetFunction(EApiId_aatasksw_cell_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aatasksw_cell_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taatasksw_cell_pane_sig*)(GetFunction(EApiId_aatasksw_cell_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aatasksw_cell_pane
	inline TAknWindowComponentLayout aatasksw_cell_pane_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taatasksw_cell_pane_g1_sig*)(GetFunction(EApiId_aatasksw_cell_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout grid_highlight_pane_cp002(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tgrid_highlight_pane_cp002_sig*)(GetFunction(EApiId_grid_highlight_pane_cp002)))(aVariety, aCol, aRow); }

	// LAF Table : main_aa_metadata_pane
	inline TAknWindowComponentLayout aamd_info_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_info_pane_sig*)(GetFunction(EApiId_aamd_info_pane)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout aamd_list_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_pane_sig*)(GetFunction(EApiId_aamd_list_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aamd_list_pane
	inline TAknLayoutScalableParameterLimits aamd_list_double_pane_ParamLimits(TInt aVariety = 0) const		{ return (*(Taamd_list_double_pane_ParamLimits_sig*)(GetFunction(EApiId_aamd_list_double_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aamd_list_double_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_double_pane_sig*)(GetFunction(EApiId_aamd_list_double_pane)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aamd_list_single_pane_ParamLimits(TInt aVariety = 0) const		{ return (*(Taamd_list_single_pane_ParamLimits_sig*)(GetFunction(EApiId_aamd_list_single_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aamd_list_single_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_single_pane_sig*)(GetFunction(EApiId_aamd_list_single_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aamd_list_single_pane
	inline TAknLayoutScalableParameterLimits aamd_list_single_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taamd_list_single_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aamd_list_single_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aamd_list_single_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_single_pane_g1_sig*)(GetFunction(EApiId_aamd_list_single_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aamd_list_single_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Taamd_list_single_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_aamd_list_single_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aamd_list_single_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_single_pane_g2_sig*)(GetFunction(EApiId_aamd_list_single_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aamd_list_single_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Taamd_list_single_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_aamd_list_single_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aamd_list_single_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_single_pane_g3_sig*)(GetFunction(EApiId_aamd_list_single_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aamd_list_single_pane_g_Limits() const		{ return (*(Taamd_list_single_pane_g_Limits_sig*)(GetFunction(EApiId_aamd_list_single_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aamd_list_single_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taamd_list_single_pane_g_ParamLimits_sig*)(GetFunction(EApiId_aamd_list_single_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout aamd_list_single_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_single_pane_g_sig*)(GetFunction(EApiId_aamd_list_single_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aamd_list_single_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Taamd_list_single_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_aamd_list_single_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aamd_list_single_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_single_pane_t1_sig*)(GetFunction(EApiId_aamd_list_single_pane_t1)))(aVariety, aCol, aRow); }

	// LAF Table : aamd_list_double_pane
	inline TAknLayoutScalableParameterLimits aamd_list_double_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taamd_list_double_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aamd_list_double_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aamd_list_double_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_double_pane_g1_sig*)(GetFunction(EApiId_aamd_list_double_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aamd_list_double_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Taamd_list_double_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_aamd_list_double_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aamd_list_double_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_double_pane_g2_sig*)(GetFunction(EApiId_aamd_list_double_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aamd_list_double_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Taamd_list_double_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_aamd_list_double_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aamd_list_double_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_double_pane_g3_sig*)(GetFunction(EApiId_aamd_list_double_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aamd_list_double_pane_g_Limits() const		{ return (*(Taamd_list_double_pane_g_Limits_sig*)(GetFunction(EApiId_aamd_list_double_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aamd_list_double_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taamd_list_double_pane_g_ParamLimits_sig*)(GetFunction(EApiId_aamd_list_double_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout aamd_list_double_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_double_pane_g_sig*)(GetFunction(EApiId_aamd_list_double_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aamd_list_double_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Taamd_list_double_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_aamd_list_double_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aamd_list_double_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_double_pane_t1_sig*)(GetFunction(EApiId_aamd_list_double_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aamd_list_double_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Taamd_list_double_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_aamd_list_double_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aamd_list_double_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_double_pane_t2_sig*)(GetFunction(EApiId_aamd_list_double_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aamd_list_double_pane_t_Limits() const		{ return (*(Taamd_list_double_pane_t_Limits_sig*)(GetFunction(EApiId_aamd_list_double_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aamd_list_double_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taamd_list_double_pane_t_ParamLimits_sig*)(GetFunction(EApiId_aamd_list_double_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout aamd_list_double_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_list_double_pane_t_sig*)(GetFunction(EApiId_aamd_list_double_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : aamd_info_pane
	inline TAknLayoutScalableParameterLimits aamd_info_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taamd_info_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aamd_info_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aamd_info_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_info_pane_g1_sig*)(GetFunction(EApiId_aamd_info_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aamd_info_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Taamd_info_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_aamd_info_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aamd_info_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_info_pane_g2_sig*)(GetFunction(EApiId_aamd_info_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aamd_info_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Taamd_info_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_aamd_info_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aamd_info_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_info_pane_g3_sig*)(GetFunction(EApiId_aamd_info_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aamd_info_pane_g_Limits() const		{ return (*(Taamd_info_pane_g_Limits_sig*)(GetFunction(EApiId_aamd_info_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aamd_info_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taamd_info_pane_g_ParamLimits_sig*)(GetFunction(EApiId_aamd_info_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout aamd_info_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_info_pane_g_sig*)(GetFunction(EApiId_aamd_info_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aamd_info_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Taamd_info_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_aamd_info_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aamd_info_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_info_pane_t1_sig*)(GetFunction(EApiId_aamd_info_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aamd_info_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Taamd_info_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_aamd_info_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aamd_info_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_info_pane_t2_sig*)(GetFunction(EApiId_aamd_info_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aamd_info_pane_t3_ParamLimits(TInt aVariety) const		{ return (*(Taamd_info_pane_t3_ParamLimits_sig*)(GetFunction(EApiId_aamd_info_pane_t3_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aamd_info_pane_t3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_info_pane_t3_sig*)(GetFunction(EApiId_aamd_info_pane_t3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aamd_info_pane_t_Limits() const		{ return (*(Taamd_info_pane_t_Limits_sig*)(GetFunction(EApiId_aamd_info_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aamd_info_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taamd_info_pane_t_ParamLimits_sig*)(GetFunction(EApiId_aamd_info_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout aamd_info_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taamd_info_pane_t_sig*)(GetFunction(EApiId_aamd_info_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : aaslider_bg_pane
	inline TAknWindowComponentLayout aaslider_bg_pane_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_bg_pane_g1_sig*)(GetFunction(EApiId_aaslider_bg_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout aaslider_bg_pane_g2(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_bg_pane_g2_sig*)(GetFunction(EApiId_aaslider_bg_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aaslider_bg_pane_g_Limits() const		{ return (*(Taaslider_bg_pane_g_Limits_sig*)(GetFunction(EApiId_aaslider_bg_pane_g_Limits)))(); }

	inline TAknWindowComponentLayout aaslider_bg_pane_g(TInt aLineIndex, TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_bg_pane_g_sig*)(GetFunction(EApiId_aaslider_bg_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout aaslider_bg_pane_g2_copy1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_bg_pane_g2_copy1_sig*)(GetFunction(EApiId_aaslider_bg_pane_g2_copy1)))(aVariety, aCol, aRow); }

	// LAF Table : main_aa_slider_pane
	inline TAknLayoutScalableParameterLimits aaslider_pane_ParamLimits(TInt aVariety) const		{ return (*(Taaslider_pane_ParamLimits_sig*)(GetFunction(EApiId_aaslider_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aaslider_pane(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_pane_sig*)(GetFunction(EApiId_aaslider_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aaslider_pane
	inline TAknLayoutScalableParameterLimits aaslider_bg_pane_cp001_ParamLimits(TInt aVariety) const		{ return (*(Taaslider_bg_pane_cp001_ParamLimits_sig*)(GetFunction(EApiId_aaslider_bg_pane_cp001_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aaslider_bg_pane_cp001(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_bg_pane_cp001_sig*)(GetFunction(EApiId_aaslider_bg_pane_cp001)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aaslider_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taaslider_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aaslider_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aaslider_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_pane_g1_sig*)(GetFunction(EApiId_aaslider_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aaslider_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Taaslider_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_aaslider_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aaslider_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_pane_g2_sig*)(GetFunction(EApiId_aaslider_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aaslider_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Taaslider_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_aaslider_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aaslider_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_pane_g3_sig*)(GetFunction(EApiId_aaslider_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aaslider_pane_g_Limits() const		{ return (*(Taaslider_pane_g_Limits_sig*)(GetFunction(EApiId_aaslider_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aaslider_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taaslider_pane_g_ParamLimits_sig*)(GetFunction(EApiId_aaslider_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout aaslider_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_pane_g_sig*)(GetFunction(EApiId_aaslider_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aaslider_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Taaslider_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_aaslider_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aaslider_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_pane_t1_sig*)(GetFunction(EApiId_aaslider_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aaslider_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Taaslider_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_aaslider_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aaslider_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_pane_t2_sig*)(GetFunction(EApiId_aaslider_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aaslider_pane_t3_ParamLimits(TInt aVariety) const		{ return (*(Taaslider_pane_t3_ParamLimits_sig*)(GetFunction(EApiId_aaslider_pane_t3_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aaslider_pane_t3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_pane_t3_sig*)(GetFunction(EApiId_aaslider_pane_t3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aaslider_pane_t_Limits() const		{ return (*(Taaslider_pane_t_Limits_sig*)(GetFunction(EApiId_aaslider_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aaslider_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taaslider_pane_t_ParamLimits_sig*)(GetFunction(EApiId_aaslider_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout aaslider_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_pane_t_sig*)(GetFunction(EApiId_aaslider_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aid_touch_size_slider_marker_ParamLimits(TInt aVariety) const		{ return (*(Taid_touch_size_slider_marker_ParamLimits_sig*)(GetFunction(EApiId_aid_touch_size_slider_marker_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aid_touch_size_slider_marker(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taid_touch_size_slider_marker_sig*)(GetFunction(EApiId_aid_touch_size_slider_marker)))(aVariety, aCol, aRow); }

	// LAF Table : aalist_gene_pane
	inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_ParamLimits(TInt aVariety = 0) const		{ return (*(Taalist_list_sub_pane_ParamLimits_sig*)(GetFunction(EApiId_aalist_list_sub_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_list_sub_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_list_sub_pane_sig*)(GetFunction(EApiId_aalist_list_sub_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aalist_single_pane
	inline TAknLayoutScalableParameterLimits aalist_single_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Taalist_single_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_aalist_single_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_single_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_single_pane_g3_sig*)(GetFunction(EApiId_aalist_single_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_single_pane_g4_ParamLimits(TInt aVariety) const		{ return (*(Taalist_single_pane_g4_ParamLimits_sig*)(GetFunction(EApiId_aalist_single_pane_g4_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_single_pane_g4(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_single_pane_g4_sig*)(GetFunction(EApiId_aalist_single_pane_g4)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout list_highlight_pane_cp001(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tlist_highlight_pane_cp001_sig*)(GetFunction(EApiId_list_highlight_pane_cp001)))(aVariety, aCol, aRow); }

	// LAF Table : aalist_list_sub_pane
	inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taalist_list_sub_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_list_sub_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_list_sub_pane_g1_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Taalist_list_sub_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_list_sub_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_list_sub_pane_g2_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Taalist_list_sub_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_list_sub_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_list_sub_pane_g3_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_g4_ParamLimits(TInt aVariety) const		{ return (*(Taalist_list_sub_pane_g4_ParamLimits_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g4_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_list_sub_pane_g4(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_list_sub_pane_g4_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g4)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_g5_ParamLimits(TInt aVariety) const		{ return (*(Taalist_list_sub_pane_g5_ParamLimits_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g5_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_list_sub_pane_g5(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_list_sub_pane_g5_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g5)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_g7_ParamLimits(TInt aVariety) const		{ return (*(Taalist_list_sub_pane_g7_ParamLimits_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g7_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_list_sub_pane_g7(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_list_sub_pane_g7_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g7)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aalist_list_sub_pane_g_Limits() const		{ return (*(Taalist_list_sub_pane_g_Limits_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taalist_list_sub_pane_g_ParamLimits_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout aalist_list_sub_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_list_sub_pane_g_sig*)(GetFunction(EApiId_aalist_list_sub_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Taalist_list_sub_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_aalist_list_sub_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aalist_list_sub_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_list_sub_pane_t1_sig*)(GetFunction(EApiId_aalist_list_sub_pane_t1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_t2_ParamLimits(TInt aVariety) const		{ return (*(Taalist_list_sub_pane_t2_ParamLimits_sig*)(GetFunction(EApiId_aalist_list_sub_pane_t2_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aalist_list_sub_pane_t2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_list_sub_pane_t2_sig*)(GetFunction(EApiId_aalist_list_sub_pane_t2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aalist_list_sub_pane_t_Limits() const		{ return (*(Taalist_list_sub_pane_t_Limits_sig*)(GetFunction(EApiId_aalist_list_sub_pane_t_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aalist_list_sub_pane_t_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taalist_list_sub_pane_t_ParamLimits_sig*)(GetFunction(EApiId_aalist_list_sub_pane_t_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknTextComponentLayout aalist_list_sub_pane_t(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_list_sub_pane_t_sig*)(GetFunction(EApiId_aalist_list_sub_pane_t)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : main_pane
	inline TAknLayoutScalableParameterLimits main_aa_coverflow_pane_ParamLimits(TInt aVariety) const		{ return (*(Tmain_aa_coverflow_pane_ParamLimits_sig*)(GetFunction(EApiId_main_aa_coverflow_pane_ParamLimits)))(aVariety); }

	inline TAknLayoutScalableParameterLimits main_aa_metadata_pane_ParamLimits(TInt aVariety) const		{ return (*(Tmain_aa_metadata_pane_ParamLimits_sig*)(GetFunction(EApiId_main_aa_metadata_pane_ParamLimits)))(aVariety); }

	// LAF Table : aalist_single_pane
	inline TAknLayoutScalableParameterLimits aalist_single_pane_g5_ParamLimits(TInt aVariety) const		{ return (*(Taalist_single_pane_g5_ParamLimits_sig*)(GetFunction(EApiId_aalist_single_pane_g5_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_single_pane_g5(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_single_pane_g5_sig*)(GetFunction(EApiId_aalist_single_pane_g5)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits list_highlight_pane_cp001_ParamLimits(TInt aVariety) const		{ return (*(Tlist_highlight_pane_cp001_ParamLimits_sig*)(GetFunction(EApiId_list_highlight_pane_cp001_ParamLimits)))(aVariety); }

	// LAF Table : main_aa_coverflow_pane
	inline TAknLayoutScalableParameterLimits aacf_slider_pane_ParamLimits(TInt aVariety) const		{ return (*(Taacf_slider_pane_ParamLimits_sig*)(GetFunction(EApiId_aacf_slider_pane_ParamLimits)))(aVariety); }

	// LAF Table : main_pane
	inline TAknWindowComponentLayout main_aa_video_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_video_pane_sig*)(GetFunction(EApiId_main_aa_video_pane)))(aVariety, aCol, aRow); }

	// LAF Table : main_aa_listscroll_pane
	inline TAknWindowComponentLayout aid_size_touch_aascroll_bar(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taid_size_touch_aascroll_bar_sig*)(GetFunction(EApiId_aid_size_touch_aascroll_bar)))(aVariety, aCol, aRow); }

	// LAF Table : aalist_gene_pane
	inline TAknLayoutScalableParameterLimits aalist_single_large_graphic_pane_ParamLimits(TInt aVariety = 0) const		{ return (*(Taalist_single_large_graphic_pane_ParamLimits_sig*)(GetFunction(EApiId_aalist_single_large_graphic_pane_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_single_large_graphic_pane(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_single_large_graphic_pane_sig*)(GetFunction(EApiId_aalist_single_large_graphic_pane)))(aVariety, aCol, aRow); }

	// LAF Table : aaslider_pane
	inline TAknLayoutScalableParameterLimits aaslider_pane_g4_ParamLimits(TInt aVariety) const		{ return (*(Taaslider_pane_g4_ParamLimits_sig*)(GetFunction(EApiId_aaslider_pane_g4_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aaslider_pane_g4(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_pane_g4_sig*)(GetFunction(EApiId_aaslider_pane_g4)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aaslider_pane_g5_ParamLimits(TInt aVariety) const		{ return (*(Taaslider_pane_g5_ParamLimits_sig*)(GetFunction(EApiId_aaslider_pane_g5_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aaslider_pane_g5(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_pane_g5_sig*)(GetFunction(EApiId_aaslider_pane_g5)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aid_touch_size_slider_max_ParamLimits(TInt aVariety) const		{ return (*(Taid_touch_size_slider_max_ParamLimits_sig*)(GetFunction(EApiId_aid_touch_size_slider_max_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aid_touch_size_slider_max(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taid_touch_size_slider_max_sig*)(GetFunction(EApiId_aid_touch_size_slider_max)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aid_touch_size_slider_min_ParamLimits(TInt aVariety) const		{ return (*(Taid_touch_size_slider_min_ParamLimits_sig*)(GetFunction(EApiId_aid_touch_size_slider_min_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aid_touch_size_slider_min(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taid_touch_size_slider_min_sig*)(GetFunction(EApiId_aid_touch_size_slider_min)))(aVariety, aCol, aRow); }

	// LAF Table : aalist_single_large_graphic_pane
	inline TAknLayoutScalableParameterLimits aalist_single_large_graphic_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Taalist_single_large_graphic_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_aalist_single_large_graphic_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_single_large_graphic_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_single_large_graphic_pane_g1_sig*)(GetFunction(EApiId_aalist_single_large_graphic_pane_g1)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_single_large_graphic_pane_g2_ParamLimits(TInt aVariety) const		{ return (*(Taalist_single_large_graphic_pane_g2_ParamLimits_sig*)(GetFunction(EApiId_aalist_single_large_graphic_pane_g2_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_single_large_graphic_pane_g2(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_single_large_graphic_pane_g2_sig*)(GetFunction(EApiId_aalist_single_large_graphic_pane_g2)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_single_large_graphic_pane_g3_ParamLimits(TInt aVariety) const		{ return (*(Taalist_single_large_graphic_pane_g3_ParamLimits_sig*)(GetFunction(EApiId_aalist_single_large_graphic_pane_g3_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout aalist_single_large_graphic_pane_g3(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_single_large_graphic_pane_g3_sig*)(GetFunction(EApiId_aalist_single_large_graphic_pane_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aalist_single_large_graphic_pane_g_Limits() const		{ return (*(Taalist_single_large_graphic_pane_g_Limits_sig*)(GetFunction(EApiId_aalist_single_large_graphic_pane_g_Limits)))(); }

	inline TAknLayoutScalableParameterLimits aalist_single_large_graphic_pane_g_ParamLimits(TInt aLineIndex, TInt aVariety) const		{ return (*(Taalist_single_large_graphic_pane_g_ParamLimits_sig*)(GetFunction(EApiId_aalist_single_large_graphic_pane_g_ParamLimits)))(aLineIndex, aVariety); }

	inline TAknWindowComponentLayout aalist_single_large_graphic_pane_g(TInt aLineIndex, TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_single_large_graphic_pane_g_sig*)(GetFunction(EApiId_aalist_single_large_graphic_pane_g)))(aLineIndex, aVariety, aCol, aRow); }

	inline TAknLayoutScalableParameterLimits aalist_single_large_graphic_pane_t1_ParamLimits(TInt aVariety) const		{ return (*(Taalist_single_large_graphic_pane_t1_ParamLimits_sig*)(GetFunction(EApiId_aalist_single_large_graphic_pane_t1_ParamLimits)))(aVariety); }

	inline TAknTextComponentLayout aalist_single_large_graphic_pane_t1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_single_large_graphic_pane_t1_sig*)(GetFunction(EApiId_aalist_single_large_graphic_pane_t1)))(aVariety, aCol, aRow); }

	// LAF Table : main_aa_video_pane
	inline TAknLayoutScalableParameterLimits main_aa_video_pane_g1_ParamLimits(TInt aVariety) const		{ return (*(Tmain_aa_video_pane_g1_ParamLimits_sig*)(GetFunction(EApiId_main_aa_video_pane_g1_ParamLimits)))(aVariety); }

	inline TAknWindowComponentLayout main_aa_video_pane_g1(TInt aVariety, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_video_pane_g1_sig*)(GetFunction(EApiId_main_aa_video_pane_g1)))(aVariety, aCol, aRow); }

	// LAF Table : main_aa_coverflow_pane
	inline TAknWindowComponentLayout main_aa_coverflow_pane_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Tmain_aa_coverflow_pane_g1_sig*)(GetFunction(EApiId_main_aa_coverflow_pane_g1)))(aVariety, aCol, aRow); }

	// LAF Table : aa_scroll_pane
	inline TAknWindowComponentLayout aid_size_min_handle_cp002(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taid_size_min_handle_cp002_sig*)(GetFunction(EApiId_aid_size_min_handle_cp002)))(aVariety, aCol, aRow); }

	// LAF Table : application_window
	inline TAknLayoutScalableParameterLimits popup_toolbar2_fixed_window_cp001_ParamLimits(TInt aVariety) const		{ return (*(Tpopup_toolbar2_fixed_window_cp001_ParamLimits_sig*)(GetFunction(EApiId_popup_toolbar2_fixed_window_cp001_ParamLimits)))(aVariety); }

	// LAF Table : main_pane
	inline TAknLayoutScalableParameterLimits main_aa_slider_pane_ParamLimits(TInt aVariety) const		{ return (*(Tmain_aa_slider_pane_ParamLimits_sig*)(GetFunction(EApiId_main_aa_slider_pane_ParamLimits)))(aVariety); }

	// LAF Table : aa_scroll_pane_cp001
	inline TAknWindowComponentLayout aid_size_min_handle_cp001(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taid_size_min_handle_cp001_sig*)(GetFunction(EApiId_aid_size_min_handle_cp001)))(aVariety, aCol, aRow); }

	// LAF Table : aaslider_bg_pane_cp001
	inline TAknWindowComponentLayout aaslider_bg_pane_cp001_g1(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_bg_pane_cp001_g1_sig*)(GetFunction(EApiId_aaslider_bg_pane_cp001_g1)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout aaslider_bg_pane_cp001_g2(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_bg_pane_cp001_g2_sig*)(GetFunction(EApiId_aaslider_bg_pane_cp001_g2)))(aVariety, aCol, aRow); }

	inline TAknWindowComponentLayout aaslider_bg_pane_cp001_g3(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_bg_pane_cp001_g3_sig*)(GetFunction(EApiId_aaslider_bg_pane_cp001_g3)))(aVariety, aCol, aRow); }

	inline TAknLayoutScalableTableLimits aaslider_bg_pane_cp001_g_Limits() const		{ return (*(Taaslider_bg_pane_cp001_g_Limits_sig*)(GetFunction(EApiId_aaslider_bg_pane_cp001_g_Limits)))(); }

	inline TAknWindowComponentLayout aaslider_bg_pane_cp001_g(TInt aLineIndex, TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taaslider_bg_pane_cp001_g_sig*)(GetFunction(EApiId_aaslider_bg_pane_cp001_g)))(aLineIndex, aVariety, aCol, aRow); }

	// LAF Table : aalist_progress_pane
	inline TAknWindowComponentLayout aalist_progress_pane_g4(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taalist_progress_pane_g4_sig*)(GetFunction(EApiId_aalist_progress_pane_g4)))(aVariety, aCol, aRow); }

	// LAF Table : aaslider_pane
	inline TAknWindowComponentLayout aid_aaslider_pane_rect_inner(TInt aVariety = 0, TInt aCol = 0, TInt aRow = 0) const		{ return (*(Taid_aaslider_pane_rect_inner_sig*)(GetFunction(EApiId_aid_aaslider_pane_rect_inner)))(aVariety, aCol, aRow); }

private:
	CInstance();
	};

} // end of namespace AknLayoutScalable_UiAccel
#endif // AKNLAYOUTSCALABLE_UIACCEL_CDL
