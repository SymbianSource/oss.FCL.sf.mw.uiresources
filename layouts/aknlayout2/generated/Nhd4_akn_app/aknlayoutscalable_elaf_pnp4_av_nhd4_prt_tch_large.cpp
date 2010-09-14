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

// This customisation implements the interface defined in AknLayoutScalable_Avkon.cdl

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0004409e };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknTextComponentLayout TextLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknWindowComponentLayout WindowLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::WindowLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknWindowComponentLayout WindowLineCVR(TInt aCol, TInt aVariety, TInt aRow) { return AknLayoutScalableDecode::WindowLineCVR(&KImplData, aCol, aVariety, aRow); }
TAknWindowComponentLayout WindowLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::WindowLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknTextComponentLayout TextLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineCRV(TInt aCol, TInt aRow, TInt aVariety) { return AknLayoutScalableDecode::WindowLineCRV(&KImplData, aCol, aRow, aVariety); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknTextComponentLayout TextTableLRVC(TInt aLineIndex, TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextTableLRVC(&KImplData, aLineIndex, aRow, aVariety, aCol); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize] =
	{
0x62c9,	// (0x0004a367) Screen

0x62d5,	// (0x0004a373) application_window_ParamLimits

0x62d5,	// (0x0004a373) application_window

0x0a65,	// (0x00044b03) screen_g1

0x6331,	// (0x0004a3cf) area_bottom_pane_ParamLimits

0x6331,	// (0x0004a3cf) area_bottom_pane

0x63f1,	// (0x0004a48f) area_top_pane_ParamLimits

0x63f1,	// (0x0004a48f) area_top_pane

0x6485,	// (0x0004a523) main_pane_ParamLimits

0x6485,	// (0x0004a523) main_pane

0x0a6f,	// (0x00044b0d) misc_graphics

0x7f16,	// (0x0004bfb4) battery_pane_ParamLimits

0x7f16,	// (0x0004bfb4) battery_pane

0xa2e5,	// (0x0004e383) bg_status_flat_pane_g8

0xa2ed,	// (0x0004e38b) bg_status_flat_pane_g9

0x7fde,	// (0x0004c07c) context_pane_ParamLimits

0x7fde,	// (0x0004c07c) context_pane

0x80f4,	// (0x0004c192) navi_pane_ParamLimits

0x80f4,	// (0x0004c192) navi_pane

0x8178,	// (0x0004c216) signal_pane_ParamLimits

0x8178,	// (0x0004c216) signal_pane

0x0008,

0xf84f,	// (0x000538ed) bg_status_flat_pane_g

0x98c6,	// (0x0004d964) status_pane_g1_ParamLimits

0x98c6,	// (0x0004d964) status_pane_g1

0x98da,	// (0x0004d978) status_pane_g2_ParamLimits

0x98da,	// (0x0004d978) status_pane_g2

0x98e6,	// (0x0004d984) status_pane_g3_ParamLimits

0x98e6,	// (0x0004d984) status_pane_g3

0x0004,

0xf776,	// (0x00053814) status_pane_g_ParamLimits

0xf776,	// (0x00053814) status_pane_g

0x991a,	// (0x0004d9b8) title_pane_ParamLimits

0x991a,	// (0x0004d9b8) title_pane

0x9957,	// (0x0004d9f5) uni_indicator_pane_ParamLimits

0x9957,	// (0x0004d9f5) uni_indicator_pane

0x1889,	// (0x00045927) bg_list_pane_ParamLimits

0x1889,	// (0x00045927) bg_list_pane

0x78db,	// (0x0004b979) find_pane

0x0fc3,	// (0x00045061) listscroll_app_pane_ParamLimits

0x0fc3,	// (0x00045061) listscroll_app_pane

0x18a9,	// (0x00045947) listscroll_form_pane

0x78e3,	// (0x0004b981) listscroll_gen_pane_ParamLimits

0x78e3,	// (0x0004b981) listscroll_gen_pane

0x78f7,	// (0x0004b995) listscroll_set_pane

0x6df7,	// (0x0004ae95) main_idle_act_pane

0x173d,	// (0x000457db) main_idle_trad_pane

0x173d,	// (0x000457db) main_list_empty_pane

0x0fc3,	// (0x00045061) main_midp_pane

0x18c3,	// (0x00045961) main_pane_g1_ParamLimits

0x18c3,	// (0x00045961) main_pane_g1

0x78ff,	// (0x0004b99d) popup_ai_message_window_ParamLimits

0x78ff,	// (0x0004b99d) popup_ai_message_window

0x79a3,	// (0x0004ba41) popup_fep_china_uni_window_ParamLimits

0x79a3,	// (0x0004ba41) popup_fep_china_uni_window

0x79fd,	// (0x0004ba9b) popup_fep_japan_candidate_window_ParamLimits

0x79fd,	// (0x0004ba9b) popup_fep_japan_candidate_window

0x7a1b,	// (0x0004bab9) popup_fep_japan_predictive_window_ParamLimits

0x7a1b,	// (0x0004bab9) popup_fep_japan_predictive_window

0x7a4b,	// (0x0004bae9) popup_find_window

0x7a58,	// (0x0004baf6) popup_grid_graphic_window_ParamLimits

0x7a58,	// (0x0004baf6) popup_grid_graphic_window

0x7a82,	// (0x0004bb20) popup_large_graphic_colour_window

0x7aa8,	// (0x0004bb46) popup_menu_window_ParamLimits

0x7aa8,	// (0x0004bb46) popup_menu_window

0x7c64,	// (0x0004bd02) popup_note_image_window

0x7c50,	// (0x0004bcee) popup_note_wait_window_ParamLimits

0x7c50,	// (0x0004bcee) popup_note_wait_window

0x7c50,	// (0x0004bcee) popup_note_window_ParamLimits

0x7c50,	// (0x0004bcee) popup_note_window

0x7cba,	// (0x0004bd58) popup_query_code_window_ParamLimits

0x7cba,	// (0x0004bd58) popup_query_code_window

0x7cce,	// (0x0004bd6c) popup_query_data_code_window_ParamLimits

0x7cce,	// (0x0004bd6c) popup_query_data_code_window

0x7ceb,	// (0x0004bd89) popup_query_data_window_ParamLimits

0x7ceb,	// (0x0004bd89) popup_query_data_window

0x7d07,	// (0x0004bda5) popup_query_sat_info_window_ParamLimits

0x7d07,	// (0x0004bda5) popup_query_sat_info_window

0x7d40,	// (0x0004bdde) popup_snote_single_graphic_window_ParamLimits

0x7d40,	// (0x0004bdde) popup_snote_single_graphic_window

0x7d40,	// (0x0004bdde) popup_snote_single_text_window_ParamLimits

0x7d40,	// (0x0004bdde) popup_snote_single_text_window

0x7d55,	// (0x0004bdf3) popup_sub_window_general

0x7e85,	// (0x0004bf23) popup_window_general_ParamLimits

0x7e85,	// (0x0004bf23) popup_window_general

0x7e9a,	// (0x0004bf38) power_save_pane

0x7742,	// (0x0004b7e0) control_pane_g1_ParamLimits

0x7742,	// (0x0004b7e0) control_pane_g1

0x7769,	// (0x0004b807) control_pane_g2_ParamLimits

0x7769,	// (0x0004b807) control_pane_g2

0x1873,	// (0x00045911) control_pane_g3_ParamLimits

0x1873,	// (0x00045911) control_pane_g3

0x0007,

0xf75e,	// (0x000537fc) control_pane_g_ParamLimits

0xf75e,	// (0x000537fc) control_pane_g

0x77da,	// (0x0004b878) control_pane_t1_ParamLimits

0x77da,	// (0x0004b878) control_pane_t1

0x7830,	// (0x0004b8ce) control_pane_t2_ParamLimits

0x7830,	// (0x0004b8ce) control_pane_t2

0x0002,

0xf76f,	// (0x0005380d) control_pane_t_ParamLimits

0xf76f,	// (0x0005380d) control_pane_t

0x769b,	// (0x0004b739) navi_navi_volume_pane_cp1

0x76a3,	// (0x0004b741) status_small_icon_pane

0x183f,	// (0x000458dd) status_small_pane_g1_ParamLimits

0x183f,	// (0x000458dd) status_small_pane_g1

0x76ab,	// (0x0004b749) status_small_pane_g2_ParamLimits

0x76ab,	// (0x0004b749) status_small_pane_g2

0x76b7,	// (0x0004b755) status_small_pane_g3_ParamLimits

0x76b7,	// (0x0004b755) status_small_pane_g3

0x76c3,	// (0x0004b761) status_small_pane_g4_ParamLimits

0x76c3,	// (0x0004b761) status_small_pane_g4

0x76cf,	// (0x0004b76d) status_small_pane_g5_ParamLimits

0x76cf,	// (0x0004b76d) status_small_pane_g5

0x76dd,	// (0x0004b77b) status_small_pane_g6_ParamLimits

0x76dd,	// (0x0004b77b) status_small_pane_g6

0x0007,

0xf74d,	// (0x000537eb) status_small_pane_g_ParamLimits

0xf74d,	// (0x000537eb) status_small_pane_g

0x770c,	// (0x0004b7aa) status_small_pane_t1

0x772e,	// (0x0004b7cc) status_small_wait_pane_ParamLimits

0x772e,	// (0x0004b7cc) status_small_wait_pane

0x71e0,	// (0x0004b27e) aid_levels_signal_ParamLimits

0x71e0,	// (0x0004b27e) aid_levels_signal

0x71f2,	// (0x0004b290) signal_pane_g1_ParamLimits

0x71f2,	// (0x0004b290) signal_pane_g1

0x7207,	// (0x0004b2a5) signal_pane_g2_ParamLimits

0x7207,	// (0x0004b2a5) signal_pane_g2

0x0003,

0xf6de,	// (0x0005377c) signal_pane_g_ParamLimits

0xf6de,	// (0x0005377c) signal_pane_g

0x132b,	// (0x000453c9) context_pane_g1

0x66c6,	// (0x0004a764) title_pane_g1

0x66f0,	// (0x0004a78e) title_pane_t1

0x0a85,	// (0x00044b23) title_pane_t2

0x0aab,	// (0x00044b49) title_pane_t3

0x0002,

0xf532,	// (0x000535d0) title_pane_t

0x996f,	// (0x0004da0d) aid_levels_battery_ParamLimits

0x996f,	// (0x0004da0d) aid_levels_battery

0x9983,	// (0x0004da21) battery_pane_g1_ParamLimits

0x9983,	// (0x0004da21) battery_pane_g1

0x9999,	// (0x0004da37) battery_pane_g2_ParamLimits

0x9999,	// (0x0004da37) battery_pane_g2

0x0001,

0xf781,	// (0x0005381f) battery_pane_g_ParamLimits

0xf781,	// (0x0005381f) battery_pane_g

0xac09,	// (0x0004eca7) uni_indicator_pane_g1

0xac1c,	// (0x0004ecba) uni_indicator_pane_g2

0xac2e,	// (0x0004eccc) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x00053995) uni_indicator_pane_g

0x15d4,	// (0x00045672) navi_icon_pane_ParamLimits

0x15d4,	// (0x00045672) navi_icon_pane

0x151d,	// (0x000455bb) navi_midp_pane

0x15f0,	// (0x0004568e) navi_navi_pane

0x15fa,	// (0x00045698) navi_text_pane_ParamLimits

0x15fa,	// (0x00045698) navi_text_pane

0x0a65,	// (0x00044b03) status_small_wait_pane_g1

0x0cfc,	// (0x00044d9a) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x00053990) status_small_wait_pane_g

0xa930,	// (0x0004e9ce) navi_navi_icon_text_pane

0xa938,	// (0x0004e9d6) navi_navi_pane_g1_ParamLimits

0xa938,	// (0x0004e9d6) navi_navi_pane_g1

0xa94a,	// (0x0004e9e8) navi_navi_pane_g2_ParamLimits

0xa94a,	// (0x0004e9e8) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x0005395e) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x0005395e) navi_navi_pane_g

0xa95c,	// (0x0004e9fa) navi_navi_tabs_pane

0xa965,	// (0x0004ea03) navi_navi_text_pane

0xa930,	// (0x0004e9ce) navi_navi_volume_pane

0xa90c,	// (0x0004e9aa) navi_text_pane_t1

0xa900,	// (0x0004e99e) navi_icon_pane_g1

0xa853,	// (0x0004e8f1) navi_navi_text_pane_t1

0x845d,	// (0x0004c4fb) navi_navi_volume_pane_g1

0x8465,	// (0x0004c503) volume_small_pane

0xa7b9,	// (0x0004e857) navi_navi_icon_text_pane_g1

0xa7c1,	// (0x0004e85f) navi_navi_icon_text_pane_t1

0x15f0,	// (0x0004568e) navi_tabs_2_long_pane

0x15f0,	// (0x0004568e) navi_tabs_2_pane

0x15f0,	// (0x0004568e) navi_tabs_3_long_pane

0x15f0,	// (0x0004568e) navi_tabs_3_pane

0x15f0,	// (0x0004568e) navi_tabs_4_pane

0x843d,	// (0x0004c4db) tabs_2_active_pane_ParamLimits

0x843d,	// (0x0004c4db) tabs_2_active_pane

0x844d,	// (0x0004c4eb) tabs_2_passive_pane_ParamLimits

0x844d,	// (0x0004c4eb) tabs_2_passive_pane

0x840b,	// (0x0004c4a9) tabs_3_active_pane_ParamLimits

0x840b,	// (0x0004c4a9) tabs_3_active_pane

0x841b,	// (0x0004c4b9) tabs_3_passive_pane_ParamLimits

0x841b,	// (0x0004c4b9) tabs_3_passive_pane

0x842c,	// (0x0004c4ca) tabs_3_passive_pane_cp_ParamLimits

0x842c,	// (0x0004c4ca) tabs_3_passive_pane_cp

0x83c7,	// (0x0004c465) tabs_4_active_pane_ParamLimits

0x83c7,	// (0x0004c465) tabs_4_active_pane

0x83d8,	// (0x0004c476) tabs_4_passive_pane_ParamLimits

0x83d8,	// (0x0004c476) tabs_4_passive_pane

0x83e9,	// (0x0004c487) tabs_4_passive_pane_cp_ParamLimits

0x83e9,	// (0x0004c487) tabs_4_passive_pane_cp

0x83fa,	// (0x0004c498) tabs_4_passive_pane_cp2_ParamLimits

0x83fa,	// (0x0004c498) tabs_4_passive_pane_cp2

0x83a3,	// (0x0004c441) tabs_2_long_active_pane_ParamLimits

0x83a3,	// (0x0004c441) tabs_2_long_active_pane

0x83b5,	// (0x0004c453) tabs_2_long_passive_pane_ParamLimits

0x83b5,	// (0x0004c453) tabs_2_long_passive_pane

0x835e,	// (0x0004c3fc) tabs_3_long_active_pane_ParamLimits

0x835e,	// (0x0004c3fc) tabs_3_long_active_pane

0x8377,	// (0x0004c415) tabs_3_long_passive_pane_ParamLimits

0x8377,	// (0x0004c415) tabs_3_long_passive_pane

0x838a,	// (0x0004c428) tabs_3_long_passive_pane_cp_ParamLimits

0x838a,	// (0x0004c428) tabs_3_long_passive_pane_cp

0x8304,	// (0x0004c3a2) volume_small_pane_g1

0x830d,	// (0x0004c3ab) volume_small_pane_g2

0x8316,	// (0x0004c3b4) volume_small_pane_g3

0x831f,	// (0x0004c3bd) volume_small_pane_g4

0x8328,	// (0x0004c3c6) volume_small_pane_g5

0x8331,	// (0x0004c3cf) volume_small_pane_g6

0x833a,	// (0x0004c3d8) volume_small_pane_g7

0x8343,	// (0x0004c3e1) volume_small_pane_g8

0x834c,	// (0x0004c3ea) volume_small_pane_g9

0x8355,	// (0x0004c3f3) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0005392a) volume_small_pane_g

0x0acb,	// (0x00044b69) bg_active_tab_pane_cp2_ParamLimits

0x0acb,	// (0x00044b69) bg_active_tab_pane_cp2

0x6758,	// (0x0004a7f6) tabs_3_active_pane_g1

0x6760,	// (0x0004a7fe) tabs_3_active_pane_t1

0x0acb,	// (0x00044b69) bg_passive_tab_pane_cp2_ParamLimits

0x0acb,	// (0x00044b69) bg_passive_tab_pane_cp2

0x6758,	// (0x0004a7f6) tabs_3_passive_pane_g1

0x6760,	// (0x0004a7fe) tabs_3_passive_pane_t1

0x0acb,	// (0x00044b69) bg_active_tab_pane_cp3_ParamLimits

0x0acb,	// (0x00044b69) bg_active_tab_pane_cp3

0x6772,	// (0x0004a810) tabs_4_active_pane_g1

0x677a,	// (0x0004a818) tabs_4_active_pane_t1

0x0acb,	// (0x00044b69) bg_passive_tab_pane_cp3_ParamLimits

0x0acb,	// (0x00044b69) bg_passive_tab_pane_cp3

0x6772,	// (0x0004a810) tabs_4_1_passive_pane_g1

0x677a,	// (0x0004a818) tabs_4_1_passive_pane_t1

0x0fc3,	// (0x00045061) list_highlight_pane_cp2

0xae71,	// (0x0004ef0f) list_set_pane_ParamLimits

0xae71,	// (0x0004ef0f) list_set_pane

0xaf13,	// (0x0004efb1) main_pane_set_t1_ParamLimits

0xaf13,	// (0x0004efb1) main_pane_set_t1

0xaf33,	// (0x0004efd1) main_pane_set_t2_ParamLimits

0xaf33,	// (0x0004efd1) main_pane_set_t2

0xaf47,	// (0x0004efe5) main_pane_set_t3_ParamLimits

0xaf47,	// (0x0004efe5) main_pane_set_t3

0xaf59,	// (0x0004eff7) main_pane_set_t4_ParamLimits

0xaf59,	// (0x0004eff7) main_pane_set_t4

0x0003,

0xf95c,	// (0x000539fa) main_pane_set_t_ParamLimits

0xf95c,	// (0x000539fa) main_pane_set_t

0xaf6b,	// (0x0004f009) setting_code_pane

0xaf77,	// (0x0004f015) setting_slider_graphic_pane

0xaf77,	// (0x0004f015) setting_slider_pane

0xaf77,	// (0x0004f015) setting_text_pane

0xaf77,	// (0x0004f015) setting_volume_pane

0x678c,	// (0x0004a82a) volume_set_pane

0x0acb,	// (0x00044b69) bg_set_opt_pane_cp

0x6794,	// (0x0004a832) setting_slider_pane_t1

0x67ad,	// (0x0004a84b) setting_slider_pane_t2

0x67c7,	// (0x0004a865) setting_slider_pane_t3

0x0002,

0xf539,	// (0x000535d7) setting_slider_pane_t

0x67df,	// (0x0004a87d) slider_set_pane

0x0a6f,	// (0x00044b0d) bg_set_opt_pane_cp2

0x0ad9,	// (0x00044b77) setting_slider_graphic_pane_g1

0x67f5,	// (0x0004a893) setting_slider_graphic_pane_t1

0x6805,	// (0x0004a8a3) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x000535de) setting_slider_graphic_pane_t

0x6815,	// (0x0004a8b3) slider_set_pane_cp

0x0a6f,	// (0x00044b0d) input_focus_pane_cp1

0xae30,	// (0x0004eece) list_set_text_pane

0x0a65,	// (0x00044b03) setting_text_pane_g1

0x0a6f,	// (0x00044b0d) input_focus_pane_cp2

0x0a65,	// (0x00044b03) setting_code_pane_g1

0x0ae2,	// (0x00044b80) setting_code_pane_t1

0x5407,	// (0x000494a5) set_text_pane_t1_ParamLimits

0x5407,	// (0x000494a5) set_text_pane_t1

0x0ed9,	// (0x00044f77) set_opt_bg_pane_g1

0x0ee1,	// (0x00044f7f) set_opt_bg_pane_g2

0xae0a,	// (0x0004eea8) set_opt_bg_pane_g3

0x0ef1,	// (0x00044f8f) set_opt_bg_pane_g4

0x0ef9,	// (0x00044f97) set_opt_bg_pane_g5

0x0f01,	// (0x00044f9f) set_opt_bg_pane_g6

0xae14,	// (0x0004eeb2) set_opt_bg_pane_g7

0xae1c,	// (0x0004eeba) set_opt_bg_pane_g8

0xae26,	// (0x0004eec4) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x000539e7) set_opt_bg_pane_g

0xadfd,	// (0x0004ee9b) slider_set_pane_g1

0x84d2,	// (0x0004c570) slider_set_pane_g2

0x0006,

0xf93a,	// (0x000539d8) slider_set_pane_g

0x846e,	// (0x0004c50c) volume_set_pane_g1

0x8476,	// (0x0004c514) volume_set_pane_g2

0x847e,	// (0x0004c51c) volume_set_pane_g3

0x8486,	// (0x0004c524) volume_set_pane_g4

0x848e,	// (0x0004c52c) volume_set_pane_g5

0x8496,	// (0x0004c534) volume_set_pane_g6

0x849e,	// (0x0004c53c) volume_set_pane_g7

0x84a6,	// (0x0004c544) volume_set_pane_g8

0x84ae,	// (0x0004c54c) volume_set_pane_g9

0x84b6,	// (0x0004c554) volume_set_pane_g10

0x0009,

0xf912,	// (0x000539b0) volume_set_pane_g

0x681d,	// (0x0004a8bb) indicator_pane_ParamLimits

0x681d,	// (0x0004a8bb) indicator_pane

0x6829,	// (0x0004a8c7) main_idle_pane_g2_ParamLimits

0x6829,	// (0x0004a8c7) main_idle_pane_g2

0x6851,	// (0x0004a8ef) main_pane_idle_g1_ParamLimits

0x6851,	// (0x0004a8ef) main_pane_idle_g1

0x0af0,	// (0x00044b8e) popup_clock_digital_analogue_window_ParamLimits

0x0af0,	// (0x00044b8e) popup_clock_digital_analogue_window

0x685e,	// (0x0004a8fc) soft_indicator_pane_ParamLimits

0x685e,	// (0x0004a8fc) soft_indicator_pane

0x686a,	// (0x0004a908) wallpaper_pane_ParamLimits

0x686a,	// (0x0004a908) wallpaper_pane

0x0a65,	// (0x00044b03) wallpaper_pane_g1

0x6876,	// (0x0004a914) indicator_pane_g1_ParamLimits

0x6876,	// (0x0004a914) indicator_pane_g1

0xb1e5,	// (0x0004f283) navi_navi_icon_text_pane_srt_g1

0x0b1e,	// (0x00044bbc) soft_indicator_pane_t1

0x0b38,	// (0x00044bd6) aid_ps_area_pane

0x6882,	// (0x0004a920) aid_ps_clock_pane

0x0b49,	// (0x00044be7) aid_ps_indicator_pane

0x0b55,	// (0x00044bf3) indicator_ps_pane_ParamLimits

0x0b55,	// (0x00044bf3) indicator_ps_pane

0x0b64,	// (0x00044c02) power_save_pane_g1_ParamLimits

0x0b64,	// (0x00044c02) power_save_pane_g1

0x0b70,	// (0x00044c0e) power_save_pane_g2_ParamLimits

0x0b70,	// (0x00044c0e) power_save_pane_g2

0x62e5,	// (0x0004a383) aid_navinavi_width_pane

0x0b38,	// (0x00044bd6) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x000535e3) power_save_pane_g_ParamLimits

0xf545,	// (0x000535e3) power_save_pane_g

0x0b7e,	// (0x00044c1c) power_save_pane_t1_ParamLimits

0x0b7e,	// (0x00044c1c) power_save_pane_t1

0x6882,	// (0x0004a920) aid_ps_clock_pane_ParamLimits

0x0b49,	// (0x00044be7) aid_ps_indicator_pane_ParamLimits

0x0b90,	// (0x00044c2e) power_save_pane_t4_ParamLimits

0x0b90,	// (0x00044c2e) power_save_pane_t4

0x0001,

0xf54a,	// (0x000535e8) power_save_pane_t_ParamLimits

0xf54a,	// (0x000535e8) power_save_pane_t

0x0bba,	// (0x00044c58) power_save_t3_ParamLimits

0x0bba,	// (0x00044c58) power_save_t3

0x0ba5,	// (0x00044c43) power_save_t2_ParamLimits

0x0ba5,	// (0x00044c43) power_save_t2

0x0bcf,	// (0x00044c6d) indicator_ps_pane_g1

0x6890,	// (0x0004a92e) ai_gene_pane_ParamLimits

0x6890,	// (0x0004a92e) ai_gene_pane

0x689c,	// (0x0004a93a) ai_links_pane_ParamLimits

0x689c,	// (0x0004a93a) ai_links_pane

0x68a8,	// (0x0004a946) indicator_pane_cp1_ParamLimits

0x68a8,	// (0x0004a946) indicator_pane_cp1

0x68b4,	// (0x0004a952) main_pane_idle_g1_cp_ParamLimits

0x68b4,	// (0x0004a952) main_pane_idle_g1_cp

0x68c0,	// (0x0004a95e) popup_ai_links_title_window

0x68c9,	// (0x0004a967) soft_indicator_pane_cp1_ParamLimits

0x68c9,	// (0x0004a967) soft_indicator_pane_cp1

0xabf7,	// (0x0004ec95) ai_links_pane_g1

0xac00,	// (0x0004ec9e) grid_ai_links_pane

0xabda,	// (0x0004ec78) ai_gene_pane_1

0xabe5,	// (0x0004ec83) ai_gene_pane_2

0xabee,	// (0x0004ec8c) list_highlight_pane_cp4

0xabbe,	// (0x0004ec5c) cell_ai_link_pane_ParamLimits

0xabbe,	// (0x0004ec5c) cell_ai_link_pane

0xabb6,	// (0x0004ec54) cell_ai_link_pane_g1

0x0cfc,	// (0x00044d9a) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x0005398b) cell_ai_link_pane_g

0x0a6f,	// (0x00044b0d) grid_highlight_cp2

0x0a6f,	// (0x00044b0d) bg_popup_sub_pane_cp1

0x0be6,	// (0x00044c84) popup_ai_links_title_window_t1

0xab06,	// (0x0004eba4) ai_gene_pane_1_g1_ParamLimits

0xab06,	// (0x0004eba4) ai_gene_pane_1_g1

0xab12,	// (0x0004ebb0) ai_gene_pane_1_g2_ParamLimits

0xab12,	// (0x0004ebb0) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x00053981) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x00053981) ai_gene_pane_1_g

0xab1f,	// (0x0004ebbd) ai_gene_pane_1_t1_ParamLimits

0xab1f,	// (0x0004ebbd) ai_gene_pane_1_t1

0xab53,	// (0x0004ebf1) grid_ai_soft_ind_pane

0xaaf1,	// (0x0004eb8f) ai_gene_pane_2_t1_ParamLimits

0xaaf1,	// (0x0004eb8f) ai_gene_pane_2_t1

0x68d5,	// (0x0004a973) main_pane_empty_t1_ParamLimits

0x68d5,	// (0x0004a973) main_pane_empty_t1

0x68ed,	// (0x0004a98b) main_pane_empty_t2_ParamLimits

0x68ed,	// (0x0004a98b) main_pane_empty_t2

0x6902,	// (0x0004a9a0) main_pane_empty_t3_ParamLimits

0x6902,	// (0x0004a9a0) main_pane_empty_t3

0x6914,	// (0x0004a9b2) main_pane_empty_t4_ParamLimits

0x6914,	// (0x0004a9b2) main_pane_empty_t4

0x6926,	// (0x0004a9c4) main_pane_empty_t5_ParamLimits

0x6926,	// (0x0004a9c4) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000535ed) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000535ed) main_pane_empty_t

0x0f5e,	// (0x00044ffc) bg_popup_window_pane_ParamLimits

0x0f5e,	// (0x00044ffc) bg_popup_window_pane

0xa861,	// (0x0004e8ff) find_popup_pane_cp2_ParamLimits

0xa861,	// (0x0004e8ff) find_popup_pane_cp2

0xa86d,	// (0x0004e90b) heading_pane_ParamLimits

0xa86d,	// (0x0004e90b) heading_pane

0x0a6f,	// (0x00044b0d) bg_popup_sub_pane

0xa7db,	// (0x0004e879) bg_popup_window_pane_g1_ParamLimits

0xa7db,	// (0x0004e879) bg_popup_window_pane_g1

0xa7e7,	// (0x0004e885) bg_popup_window_pane_g2_ParamLimits

0xa7e7,	// (0x0004e885) bg_popup_window_pane_g2

0xa7f3,	// (0x0004e891) bg_popup_window_pane_g3_ParamLimits

0xa7f3,	// (0x0004e891) bg_popup_window_pane_g3

0xa7ff,	// (0x0004e89d) bg_popup_window_pane_g4_ParamLimits

0xa7ff,	// (0x0004e89d) bg_popup_window_pane_g4

0xa80b,	// (0x0004e8a9) bg_popup_window_pane_g5_ParamLimits

0xa80b,	// (0x0004e8a9) bg_popup_window_pane_g5

0xa817,	// (0x0004e8b5) bg_popup_window_pane_g6_ParamLimits

0xa817,	// (0x0004e8b5) bg_popup_window_pane_g6

0xa823,	// (0x0004e8c1) bg_popup_window_pane_g7_ParamLimits

0xa823,	// (0x0004e8c1) bg_popup_window_pane_g7

0xa82f,	// (0x0004e8cd) bg_popup_window_pane_g8_ParamLimits

0xa82f,	// (0x0004e8cd) bg_popup_window_pane_g8

0xa83b,	// (0x0004e8d9) bg_popup_window_pane_g9_ParamLimits

0xa83b,	// (0x0004e8d9) bg_popup_window_pane_g9

0xa847,	// (0x0004e8e5) bg_popup_window_pane_g10_ParamLimits

0xa847,	// (0x0004e8e5) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x00053949) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x00053949) bg_popup_window_pane_g

0xa770,	// (0x0004e80e) bg_popup_heading_pane_ParamLimits

0xa770,	// (0x0004e80e) bg_popup_heading_pane

0x8605,	// (0x0004c6a3) tabs_4_passive_pane_cp_srt_ParamLimits

0x8605,	// (0x0004c6a3) tabs_4_passive_pane_cp_srt

0x8617,	// (0x0004c6b5) tabs_4_passive_pane_srt_ParamLimits

0xa784,	// (0x0004e822) heading_pane_g2

0x8617,	// (0x0004c6b5) tabs_4_passive_pane_srt

0x0fc3,	// (0x00045061) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0fc3,	// (0x00045061) bg_passive_tab_pane_cp3_srt

0xa78c,	// (0x0004e82a) heading_pane_t1_ParamLimits

0xa78c,	// (0x0004e82a) heading_pane_t1

0xa7a3,	// (0x0004e841) heading_pane_t2_ParamLimits

0xa7a3,	// (0x0004e841) heading_pane_t2

0x0001,

0xf8a6,	// (0x00053944) heading_pane_t_ParamLimits

0xf8a6,	// (0x00053944) heading_pane_t

0xa2ad,	// (0x0004e34b) bg_popup_heading_pane_g1

0xa35c,	// (0x0004e3fa) bg_popup_heading_pane_g2

0xa366,	// (0x0004e404) bg_popup_heading_pane_g3

0xa370,	// (0x0004e40e) bg_popup_heading_pane_g4

0xa37a,	// (0x0004e418) bg_popup_heading_pane_g5

0xa384,	// (0x0004e422) bg_popup_heading_pane_g6

0xa38c,	// (0x0004e42a) bg_popup_heading_pane_g7

0xa394,	// (0x0004e432) bg_popup_heading_pane_g8

0xa39e,	// (0x0004e43c) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00053900) bg_popup_heading_pane_g

0x9a6e,	// (0x0004db0c) bg_popup_sub_pane_g1

0x9a76,	// (0x0004db14) bg_popup_sub_pane_g2

0x9a7e,	// (0x0004db1c) bg_popup_sub_pane_g3

0x9a86,	// (0x0004db24) bg_popup_sub_pane_g4

0x9a8e,	// (0x0004db2c) bg_popup_sub_pane_g5

0x9a96,	// (0x0004db34) bg_popup_sub_pane_g6

0x9a9e,	// (0x0004db3c) bg_popup_sub_pane_g7

0x9aa6,	// (0x0004db44) bg_popup_sub_pane_g8

0x9aae,	// (0x0004db4c) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x000538da) bg_popup_sub_pane_g

0x0abd,	// (0x00044b5b) bg_popup_window_pane_cp5_ParamLimits

0x0abd,	// (0x00044b5b) bg_popup_window_pane_cp5

0x0c03,	// (0x00044ca1) popup_note_window_g1_ParamLimits

0x0c03,	// (0x00044ca1) popup_note_window_g1

0x0c0f,	// (0x00044cad) popup_note_window_t1_ParamLimits

0x0c0f,	// (0x00044cad) popup_note_window_t1

0x0c25,	// (0x00044cc3) popup_note_window_t2_ParamLimits

0x0c25,	// (0x00044cc3) popup_note_window_t2

0x0c3b,	// (0x00044cd9) popup_note_window_t3_ParamLimits

0x0c3b,	// (0x00044cd9) popup_note_window_t3

0x0c51,	// (0x00044cef) popup_note_window_t4_ParamLimits

0x0c51,	// (0x00044cef) popup_note_window_t4

0x0c79,	// (0x00044d17) popup_note_window_t5_ParamLimits

0x0c79,	// (0x00044d17) popup_note_window_t5

0x0004,

0xf55a,	// (0x000535f8) popup_note_window_t_ParamLimits

0xf55a,	// (0x000535f8) popup_note_window_t

0x0c9d,	// (0x00044d3b) bg_popup_window_pane_cp6_ParamLimits

0x0c9d,	// (0x00044d3b) bg_popup_window_pane_cp6

0xa229,	// (0x0004e2c7) popup_note_image_window_g1_ParamLimits

0xa229,	// (0x0004e2c7) popup_note_image_window_g1

0xa235,	// (0x0004e2d3) popup_note_image_window_g2_ParamLimits

0xa235,	// (0x0004e2d3) popup_note_image_window_g2

0x0001,

0xf830,	// (0x000538ce) popup_note_image_window_g_ParamLimits

0xf830,	// (0x000538ce) popup_note_image_window_g

0xa24e,	// (0x0004e2ec) popup_note_image_window_t1_ParamLimits

0xa24e,	// (0x0004e2ec) popup_note_image_window_t1

0xa267,	// (0x0004e305) popup_note_image_window_t2_ParamLimits

0xa267,	// (0x0004e305) popup_note_image_window_t2

0xa280,	// (0x0004e31e) popup_note_image_window_t3_ParamLimits

0xa280,	// (0x0004e31e) popup_note_image_window_t3

0x0002,

0xf835,	// (0x000538d3) popup_note_image_window_t_ParamLimits

0xf835,	// (0x000538d3) popup_note_image_window_t

0xa0f2,	// (0x0004e190) bg_popup_window_pane_cp7_ParamLimits

0xa0f2,	// (0x0004e190) bg_popup_window_pane_cp7

0xa122,	// (0x0004e1c0) popup_note_wait_window_g1_ParamLimits

0xa122,	// (0x0004e1c0) popup_note_wait_window_g1

0xa12e,	// (0x0004e1cc) popup_note_wait_window_g2_ParamLimits

0xa12e,	// (0x0004e1cc) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x000538bc) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x000538bc) popup_note_wait_window_g

0xa146,	// (0x0004e1e4) popup_note_wait_window_t1_ParamLimits

0xa146,	// (0x0004e1e4) popup_note_wait_window_t1

0xa16d,	// (0x0004e20b) popup_note_wait_window_t2_ParamLimits

0xa16d,	// (0x0004e20b) popup_note_wait_window_t2

0xa18a,	// (0x0004e228) popup_note_wait_window_t3_ParamLimits

0xa18a,	// (0x0004e228) popup_note_wait_window_t3

0xa19d,	// (0x0004e23b) popup_note_wait_window_t4_ParamLimits

0xa19d,	// (0x0004e23b) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x000538c3) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x000538c3) popup_note_wait_window_t

0xa1c2,	// (0x0004e260) wait_bar_pane_ParamLimits

0xa1c2,	// (0x0004e260) wait_bar_pane

0x0a6f,	// (0x00044b0d) wait_anim_pane

0x0a6f,	// (0x00044b0d) wait_border_pane

0x0a65,	// (0x00044b03) wait_anim_pane_g1

0x0a65,	// (0x00044b03) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x00053777) wait_anim_pane_g

0xa09e,	// (0x0004e13c) wait_border_pane_g1

0xa0a9,	// (0x0004e147) wait_border_pane_g2

0xa0b2,	// (0x0004e150) wait_border_pane_g3

0x0002,

0xf817,	// (0x000538b5) wait_border_pane_g

0x9f09,	// (0x0004dfa7) bg_popup_window_pane_cp16_ParamLimits

0x9f09,	// (0x0004dfa7) bg_popup_window_pane_cp16

0xa009,	// (0x0004e0a7) indicator_popup_pane_cp4_ParamLimits

0xa009,	// (0x0004e0a7) indicator_popup_pane_cp4

0xa01d,	// (0x0004e0bb) popup_query_data_window_t1_ParamLimits

0xa01d,	// (0x0004e0bb) popup_query_data_window_t1

0xa02f,	// (0x0004e0cd) popup_query_data_window_t2_ParamLimits

0xa02f,	// (0x0004e0cd) popup_query_data_window_t2

0xa048,	// (0x0004e0e6) popup_query_data_window_t3_ParamLimits

0xa048,	// (0x0004e0e6) popup_query_data_window_t3

0x0002,

0xf810,	// (0x000538ae) popup_query_data_window_t_ParamLimits

0xf810,	// (0x000538ae) popup_query_data_window_t

0xa062,	// (0x0004e100) query_popup_data_pane_ParamLimits

0xa062,	// (0x0004e100) query_popup_data_pane

0xa076,	// (0x0004e114) query_popup_data_pane_cp1_ParamLimits

0xa076,	// (0x0004e114) query_popup_data_pane_cp1

0x9f09,	// (0x0004dfa7) bg_popup_window_pane_cp10_ParamLimits

0x9f09,	// (0x0004dfa7) bg_popup_window_pane_cp10

0x9f3b,	// (0x0004dfd9) indicator_popup_pane_ParamLimits

0x9f3b,	// (0x0004dfd9) indicator_popup_pane

0x9f5d,	// (0x0004dffb) popup_query_code_window_t1_ParamLimits

0x9f5d,	// (0x0004dffb) popup_query_code_window_t1

0x9f77,	// (0x0004e015) popup_query_code_window_t2_ParamLimits

0x9f77,	// (0x0004e015) popup_query_code_window_t2

0x9fc0,	// (0x0004e05e) popup_query_code_window_t3_ParamLimits

0x9fc0,	// (0x0004e05e) popup_query_code_window_t3

0x0002,

0xf809,	// (0x000538a7) popup_query_code_window_t_ParamLimits

0xf809,	// (0x000538a7) popup_query_code_window_t

0x9fef,	// (0x0004e08d) query_popup_pane_ParamLimits

0x9fef,	// (0x0004e08d) query_popup_pane

0x0c9d,	// (0x00044d3b) bg_popup_window_pane_cp15_ParamLimits

0x0c9d,	// (0x00044d3b) bg_popup_window_pane_cp15

0x6960,	// (0x0004a9fe) indicator_popup_pane_cp1_ParamLimits

0x6960,	// (0x0004a9fe) indicator_popup_pane_cp1

0x6973,	// (0x0004aa11) indicator_popup_pane_cp2_ParamLimits

0x6973,	// (0x0004aa11) indicator_popup_pane_cp2

0x6986,	// (0x0004aa24) popup_query_data_code_window_g1_ParamLimits

0x6986,	// (0x0004aa24) popup_query_data_code_window_g1

0x0cbb,	// (0x00044d59) popup_query_data_code_window_t1_ParamLimits

0x0cbb,	// (0x00044d59) popup_query_data_code_window_t1

0x0ccd,	// (0x00044d6b) popup_query_data_code_window_t2_ParamLimits

0x0ccd,	// (0x00044d6b) popup_query_data_code_window_t2

0x6999,	// (0x0004aa37) popup_query_data_code_window_t3_ParamLimits

0x6999,	// (0x0004aa37) popup_query_data_code_window_t3

0x69af,	// (0x0004aa4d) popup_query_data_code_window_t4_ParamLimits

0x69af,	// (0x0004aa4d) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00053603) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00053603) popup_query_data_code_window_t

0x1592,	// (0x00045630) list_single_midp_graphic_pane_g3

0x69c7,	// (0x0004aa65) query_popup_data_pane_cp2_ParamLimits

0x69da,	// (0x0004aa78) query_popup_pane_cp2_ParamLimits

0x69da,	// (0x0004aa78) query_popup_pane_cp2

0x0a6f,	// (0x00044b0d) bg_popup_window_pane_cp11

0x9eed,	// (0x0004df8b) heading_pane_cp5

0x9ef5,	// (0x0004df93) listscroll_popup_info_pane

0x0a6f,	// (0x00044b0d) input_focus_pane_cp3

0x0cdf,	// (0x00044d7d) query_popup_pane_t1

0x0ced,	// (0x00044d8b) list_popup_info_pane_ParamLimits

0x0ced,	// (0x00044d8b) list_popup_info_pane

0x0cfc,	// (0x00044d9a) listscroll_popup_info_pane_g1

0x0d04,	// (0x00044da2) scroll_pane_cp7

0x69ed,	// (0x0004aa8b) popup_info_list_pane_t1_ParamLimits

0x69ed,	// (0x0004aa8b) popup_info_list_pane_t1

0x6a07,	// (0x0004aaa5) popup_info_list_pane_t2_ParamLimits

0x6a07,	// (0x0004aaa5) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0005360c) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0005360c) popup_info_list_pane_t

0x0a6f,	// (0x00044b0d) bg_popup_window_pane_cp12

0xb1ff,	// (0x0004f29d) find_popup_pane

0x0acb,	// (0x00044b69) bg_popup_window_pane_cp3

0x0d0e,	// (0x00044dac) heading_pane_cp3

0x0d1d,	// (0x00044dbb) listscroll_popup_graphic_pane

0x0a6f,	// (0x00044b0d) bg_popup_window_pane_cp4

0x6a71,	// (0x0004ab0f) heading_pane_cp4

0x0d2d,	// (0x00044dcb) listscroll_popup_colour_pane

0x6a7b,	// (0x0004ab19) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6a7b,	// (0x0004ab19) cell_large_graphic_colour_none_popup_pane

0x6a8f,	// (0x0004ab2d) grid_large_graphic_colour_popup_pane_ParamLimits

0x6a8f,	// (0x0004ab2d) grid_large_graphic_colour_popup_pane

0x6ab3,	// (0x0004ab51) listscroll_popup_colour_pane_g1_ParamLimits

0x6ab3,	// (0x0004ab51) listscroll_popup_colour_pane_g1

0x6aca,	// (0x0004ab68) listscroll_popup_colour_pane_g2_ParamLimits

0x6aca,	// (0x0004ab68) listscroll_popup_colour_pane_g2

0x6ae1,	// (0x0004ab7f) listscroll_popup_colour_pane_g3_ParamLimits

0x6ae1,	// (0x0004ab7f) listscroll_popup_colour_pane_g3

0x6af1,	// (0x0004ab8f) listscroll_popup_colour_pane_g4_ParamLimits

0x6af1,	// (0x0004ab8f) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00053611) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00053611) listscroll_popup_colour_pane_g

0x0d35,	// (0x00044dd3) scroll_pane_cp6_ParamLimits

0x0d35,	// (0x00044dd3) scroll_pane_cp6

0x6b01,	// (0x0004ab9f) cell_large_graphic_colour_popup_pane_ParamLimits

0x6b01,	// (0x0004ab9f) cell_large_graphic_colour_popup_pane

0x6b20,	// (0x0004abbe) cell_large_graphic_colour_none_popup_pane_t1

0x0a6f,	// (0x00044b0d) grid_highlight_pane_cp5

0x0d47,	// (0x00044de5) cell_large_graphic_colour_popup_pane_g1

0x0d4f,	// (0x00044ded) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0005361a) cell_large_graphic_colour_popup_pane_g

0x0d57,	// (0x00044df5) cell_large_graphic_colour_popup_pane_g2_copy1

0x0d60,	// (0x00044dfe) grid_highlight_pane_cp4

0x0d68,	// (0x00044e06) bg_popup_window_pane_cp8_ParamLimits

0x0d68,	// (0x00044e06) bg_popup_window_pane_cp8

0x6b2f,	// (0x0004abcd) popup_snote_single_text_window_g1_ParamLimits

0x6b2f,	// (0x0004abcd) popup_snote_single_text_window_g1

0x6b41,	// (0x0004abdf) popup_snote_single_text_window_t1_ParamLimits

0x6b41,	// (0x0004abdf) popup_snote_single_text_window_t1

0x6b54,	// (0x0004abf2) popup_snote_single_text_window_t2_ParamLimits

0x6b54,	// (0x0004abf2) popup_snote_single_text_window_t2

0x6b67,	// (0x0004ac05) popup_snote_single_text_window_t3_ParamLimits

0x6b67,	// (0x0004ac05) popup_snote_single_text_window_t3

0x6ba0,	// (0x0004ac3e) popup_snote_single_text_window_t4_ParamLimits

0x6ba0,	// (0x0004ac3e) popup_snote_single_text_window_t4

0x6bd4,	// (0x0004ac72) popup_snote_single_text_window_t5_ParamLimits

0x6bd4,	// (0x0004ac72) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0005361f) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0005361f) popup_snote_single_text_window_t

0x0d83,	// (0x00044e21) bg_popup_window_pane_cp9_ParamLimits

0x0d83,	// (0x00044e21) bg_popup_window_pane_cp9

0x6b2f,	// (0x0004abcd) popup_snote_single_graphic_window_g1_ParamLimits

0x6b2f,	// (0x0004abcd) popup_snote_single_graphic_window_g1

0x0d91,	// (0x00044e2f) popup_snote_single_graphic_window_g2_ParamLimits

0x0d91,	// (0x00044e2f) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0005362a) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0005362a) popup_snote_single_graphic_window_g

0x0d9d,	// (0x00044e3b) popup_snote_single_graphic_window_t1_ParamLimits

0x0d9d,	// (0x00044e3b) popup_snote_single_graphic_window_t1

0x0db0,	// (0x00044e4e) popup_snote_single_graphic_window_t2_ParamLimits

0x0db0,	// (0x00044e4e) popup_snote_single_graphic_window_t2

0x6c03,	// (0x0004aca1) popup_snote_single_graphic_window_t3_ParamLimits

0x6c03,	// (0x0004aca1) popup_snote_single_graphic_window_t3

0x6c3c,	// (0x0004acda) popup_snote_single_graphic_window_t4_ParamLimits

0x6c3c,	// (0x0004acda) popup_snote_single_graphic_window_t4

0x6c70,	// (0x0004ad0e) popup_snote_single_graphic_window_t5_ParamLimits

0x6c70,	// (0x0004ad0e) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0005362f) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0005362f) popup_snote_single_graphic_window_t

0xb141,	// (0x0004f1df) grid_graphic_popup_pane_ParamLimits

0xb141,	// (0x0004f1df) grid_graphic_popup_pane

0xb16b,	// (0x0004f209) listscroll_popup_graphic_pane_g1_ParamLimits

0xb16b,	// (0x0004f209) listscroll_popup_graphic_pane_g1

0xb17f,	// (0x0004f21d) listscroll_popup_graphic_pane_g2_ParamLimits

0xb17f,	// (0x0004f21d) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00053a24) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00053a24) listscroll_popup_graphic_pane_g

0xb193,	// (0x0004f231) scroll_pane_cp5

0xb0d7,	// (0x0004f175) cell_graphic_popup_pane_ParamLimits

0xb0d7,	// (0x0004f175) cell_graphic_popup_pane

0xb0b8,	// (0x0004f156) cell_graphic_popup_pane_g1

0xb0c0,	// (0x0004f15e) cell_graphic_popup_pane_g2

0x0d57,	// (0x00044df5) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00053a1d) cell_graphic_popup_pane_g

0xb0c9,	// (0x0004f167) cell_graphic_popup_pane_t2

0x0d60,	// (0x00044dfe) grid_highlight_pane_cp3

0x0dd5,	// (0x00044e73) list_gen_pane_ParamLimits

0x0dd5,	// (0x00044e73) list_gen_pane

0x0dfd,	// (0x00044e9b) scroll_pane

0xb010,	// (0x0004f0ae) bg_list_pane_g1_ParamLimits

0xb010,	// (0x0004f0ae) bg_list_pane_g1

0xb02d,	// (0x0004f0cb) bg_list_pane_g2_ParamLimits

0xb02d,	// (0x0004f0cb) bg_list_pane_g2

0xb042,	// (0x0004f0e0) bg_list_pane_g3_ParamLimits

0xb042,	// (0x0004f0e0) bg_list_pane_g3

0xb056,	// (0x0004f0f4) bg_list_pane_g4_ParamLimits

0xb056,	// (0x0004f0f4) bg_list_pane_g4

0xb06a,	// (0x0004f108) bg_list_pane_g5_ParamLimits

0xb06a,	// (0x0004f108) bg_list_pane_g5

0x0004,

0xf974,	// (0x00053a12) bg_list_pane_g_ParamLimits

0xf974,	// (0x00053a12) bg_list_pane_g

0x8536,	// (0x0004c5d4) list_double2_graphic_large_graphic_pane_ParamLimits

0x8536,	// (0x0004c5d4) list_double2_graphic_large_graphic_pane

0x8536,	// (0x0004c5d4) list_double2_graphic_pane_ParamLimits

0x8536,	// (0x0004c5d4) list_double2_graphic_pane

0x8536,	// (0x0004c5d4) list_double2_large_graphic_pane_ParamLimits

0x8536,	// (0x0004c5d4) list_double2_large_graphic_pane

0x5c9a,	// (0x00049d38) list_double2_pane_ParamLimits

0x5c9a,	// (0x00049d38) list_double2_pane

0x8536,	// (0x0004c5d4) list_double_graphic_heading_pane_ParamLimits

0x8536,	// (0x0004c5d4) list_double_graphic_heading_pane

0x8536,	// (0x0004c5d4) list_double_graphic_pane_ParamLimits

0x8536,	// (0x0004c5d4) list_double_graphic_pane

0x8536,	// (0x0004c5d4) list_double_heading_pane_ParamLimits

0x8536,	// (0x0004c5d4) list_double_heading_pane

0x8536,	// (0x0004c5d4) list_double_large_graphic_pane_ParamLimits

0x8536,	// (0x0004c5d4) list_double_large_graphic_pane

0x8536,	// (0x0004c5d4) list_double_number_pane_ParamLimits

0x8536,	// (0x0004c5d4) list_double_number_pane

0x8536,	// (0x0004c5d4) list_double_pane_ParamLimits

0x8536,	// (0x0004c5d4) list_double_pane

0x8536,	// (0x0004c5d4) list_double_time_pane_ParamLimits

0x8536,	// (0x0004c5d4) list_double_time_pane

0x8536,	// (0x0004c5d4) list_setting_number_pane_ParamLimits

0x8536,	// (0x0004c5d4) list_setting_number_pane

0x8536,	// (0x0004c5d4) list_setting_pane_ParamLimits

0x8536,	// (0x0004c5d4) list_setting_pane

0x85a1,	// (0x0004c63f) list_single_2graphic_pane_ParamLimits

0x85a1,	// (0x0004c63f) list_single_2graphic_pane

0x85a1,	// (0x0004c63f) list_single_graphic_heading_pane_ParamLimits

0x85a1,	// (0x0004c63f) list_single_graphic_heading_pane

0x85a1,	// (0x0004c63f) list_single_graphic_pane_ParamLimits

0x85a1,	// (0x0004c63f) list_single_graphic_pane

0x85a1,	// (0x0004c63f) list_single_heading_pane_ParamLimits

0x85a1,	// (0x0004c63f) list_single_heading_pane

0x5cee,	// (0x00049d8c) list_single_large_graphic_pane_ParamLimits

0x5cee,	// (0x00049d8c) list_single_large_graphic_pane

0x85a1,	// (0x0004c63f) list_single_number_heading_pane_ParamLimits

0x85a1,	// (0x0004c63f) list_single_number_heading_pane

0x85a1,	// (0x0004c63f) list_single_number_pane_ParamLimits

0x85a1,	// (0x0004c63f) list_single_number_pane

0x85a1,	// (0x0004c63f) list_single_pane_ParamLimits

0x85a1,	// (0x0004c63f) list_single_pane

0x0a6f,	// (0x00044b0d) list_highlight_pane_cp1

0x6ca9,	// (0x0004ad47) list_single_pane_g1_ParamLimits

0x6ca9,	// (0x0004ad47) list_single_pane_g1

0x6cb5,	// (0x0004ad53) list_single_pane_g2_ParamLimits

0x6cb5,	// (0x0004ad53) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0005364b) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0005364b) list_single_pane_g

0x5c84,	// (0x00049d22) list_single_pane_t1_ParamLimits

0x5c84,	// (0x00049d22) list_single_pane_t1

0x6ca9,	// (0x0004ad47) list_single_number_pane_g1_ParamLimits

0x6ca9,	// (0x0004ad47) list_single_number_pane_g1

0x6cb5,	// (0x0004ad53) list_single_number_pane_g2_ParamLimits

0x6cb5,	// (0x0004ad53) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0005364b) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0005364b) list_single_number_pane_g

0x542c,	// (0x000494ca) list_single_number_pane_t1_ParamLimits

0x542c,	// (0x000494ca) list_single_number_pane_t1

0x5c42,	// (0x00049ce0) list_single_number_pane_t2_ParamLimits

0x5c42,	// (0x00049ce0) list_single_number_pane_t2

0x0001,

0xf935,	// (0x000539d3) list_single_number_pane_t_ParamLimits

0xf935,	// (0x000539d3) list_single_number_pane_t

0x5420,	// (0x000494be) list_single_graphic_pane_g1_ParamLimits

0x5420,	// (0x000494be) list_single_graphic_pane_g1

0x6ca9,	// (0x0004ad47) list_single_graphic_pane_g2_ParamLimits

0x6ca9,	// (0x0004ad47) list_single_graphic_pane_g2

0x6cb5,	// (0x0004ad53) list_single_graphic_pane_g3_ParamLimits

0x6cb5,	// (0x0004ad53) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0005363a) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0005363a) list_single_graphic_pane_g

0x542c,	// (0x000494ca) list_single_graphic_pane_t1_ParamLimits

0x542c,	// (0x000494ca) list_single_graphic_pane_t1

0x5442,	// (0x000494e0) list_single_heading_pane_g1_ParamLimits

0x5442,	// (0x000494e0) list_single_heading_pane_g1

0x6cb5,	// (0x0004ad53) list_single_heading_pane_g2_ParamLimits

0x6cb5,	// (0x0004ad53) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00053641) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00053641) list_single_heading_pane_g

0x5455,	// (0x000494f3) list_single_heading_pane_t1_ParamLimits

0x5455,	// (0x000494f3) list_single_heading_pane_t1

0x6cc1,	// (0x0004ad5f) list_single_heading_pane_t2_ParamLimits

0x6cc1,	// (0x0004ad5f) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00053646) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00053646) list_single_heading_pane_t

0x6ca9,	// (0x0004ad47) list_single_number_heading_pane_g1_ParamLimits

0x6ca9,	// (0x0004ad47) list_single_number_heading_pane_g1

0x6cb5,	// (0x0004ad53) list_single_number_heading_pane_g2_ParamLimits

0x6cb5,	// (0x0004ad53) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0005364b) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0005364b) list_single_number_heading_pane_g

0x546b,	// (0x00049509) list_single_number_heading_pane_t1_ParamLimits

0x546b,	// (0x00049509) list_single_number_heading_pane_t1

0x5481,	// (0x0004951f) list_single_number_heading_pane_t2_ParamLimits

0x5481,	// (0x0004951f) list_single_number_heading_pane_t2

0x5493,	// (0x00049531) list_single_number_heading_pane_t3_ParamLimits

0x5493,	// (0x00049531) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00053650) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00053650) list_single_number_heading_pane_t

0x54a5,	// (0x00049543) list_single_graphic_heading_pane_g1_ParamLimits

0x54a5,	// (0x00049543) list_single_graphic_heading_pane_g1

0x6cd3,	// (0x0004ad71) list_single_graphic_heading_pane_g4_ParamLimits

0x6cd3,	// (0x0004ad71) list_single_graphic_heading_pane_g4

0x6cb5,	// (0x0004ad53) list_single_graphic_heading_pane_g5_ParamLimits

0x6cb5,	// (0x0004ad53) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00053657) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00053657) list_single_graphic_heading_pane_g

0x546b,	// (0x00049509) list_single_graphic_heading_pane_t1_ParamLimits

0x546b,	// (0x00049509) list_single_graphic_heading_pane_t1

0x54b9,	// (0x00049557) list_single_graphic_heading_pane_t2_ParamLimits

0x54b9,	// (0x00049557) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0005365e) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0005365e) list_single_graphic_heading_pane_t

0x54d1,	// (0x0004956f) list_single_large_graphic_pane_g1_ParamLimits

0x54d1,	// (0x0004956f) list_single_large_graphic_pane_g1

0x6ce4,	// (0x0004ad82) list_single_large_graphic_pane_g2_ParamLimits

0x6ce4,	// (0x0004ad82) list_single_large_graphic_pane_g2

0x6cf0,	// (0x0004ad8e) list_single_large_graphic_pane_g3_ParamLimits

0x6cf0,	// (0x0004ad8e) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00053663) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00053663) list_single_large_graphic_pane_g

0xa0a9,	// (0x0004e147) wait_border_pane_g2_copy1

0x54dd,	// (0x0004957b) list_single_large_graphic_pane_g4_cp2

0x54e5,	// (0x00049583) list_single_large_graphic_pane_t1_ParamLimits

0x54e5,	// (0x00049583) list_single_large_graphic_pane_t1

0x2423,	// (0x000464c1) list_double_pane_g1_ParamLimits

0x2423,	// (0x000464c1) list_double_pane_g1

0x6cfc,	// (0x0004ad9a) list_double_pane_g2_ParamLimits

0x6cfc,	// (0x0004ad9a) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0005366a) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0005366a) list_double_pane_g

0x54fb,	// (0x00049599) list_double_pane_t1_ParamLimits

0x54fb,	// (0x00049599) list_double_pane_t1

0x5511,	// (0x000495af) list_double_pane_t2_ParamLimits

0x5511,	// (0x000495af) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0005366f) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0005366f) list_double_pane_t

0x5523,	// (0x000495c1) list_double2_pane_g1_ParamLimits

0x5523,	// (0x000495c1) list_double2_pane_g1

0x5534,	// (0x000495d2) list_double2_pane_g2_ParamLimits

0x5534,	// (0x000495d2) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00053674) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00053674) list_double2_pane_g

0x5540,	// (0x000495de) list_double2_pane_t1_ParamLimits

0x5540,	// (0x000495de) list_double2_pane_t1

0x5556,	// (0x000495f4) list_double2_pane_t2_ParamLimits

0x5556,	// (0x000495f4) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00053679) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00053679) list_double2_pane_t

0x2423,	// (0x000464c1) list_double_number_pane_g1_ParamLimits

0x2423,	// (0x000464c1) list_double_number_pane_g1

0x6cfc,	// (0x0004ad9a) list_double_number_pane_g2_ParamLimits

0x6cfc,	// (0x0004ad9a) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0005366a) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0005366a) list_double_number_pane_g

0x5568,	// (0x00049606) list_double_number_pane_t1_ParamLimits

0x5568,	// (0x00049606) list_double_number_pane_t1

0x557a,	// (0x00049618) list_double_number_pane_t2_ParamLimits

0x557a,	// (0x00049618) list_double_number_pane_t2

0x5590,	// (0x0004962e) list_double_number_pane_t3_ParamLimits

0x5590,	// (0x0004962e) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0005367e) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0005367e) list_double_number_pane_t

0x55a2,	// (0x00049640) list_double_graphic_pane_g1_ParamLimits

0x55a2,	// (0x00049640) list_double_graphic_pane_g1

0x55ae,	// (0x0004964c) list_double_graphic_pane_g2_ParamLimits

0x55ae,	// (0x0004964c) list_double_graphic_pane_g2

0x55bd,	// (0x0004965b) list_double_graphic_pane_g3_ParamLimits

0x55bd,	// (0x0004965b) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00053685) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00053685) list_double_graphic_pane_g

0x557a,	// (0x00049618) list_double_graphic_pane_t1_ParamLimits

0x557a,	// (0x00049618) list_double_graphic_pane_t1

0x5590,	// (0x0004962e) list_double_graphic_pane_t2_ParamLimits

0x5590,	// (0x0004962e) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0005368e) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0005368e) list_double_graphic_pane_t

0x55a2,	// (0x00049640) list_double2_graphic_pane_g1_ParamLimits

0x55a2,	// (0x00049640) list_double2_graphic_pane_g1

0x2423,	// (0x000464c1) list_double2_graphic_pane_g2_ParamLimits

0x2423,	// (0x000464c1) list_double2_graphic_pane_g2

0x6cfc,	// (0x0004ad9a) list_double2_graphic_pane_g3_ParamLimits

0x6cfc,	// (0x0004ad9a) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00053693) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00053693) list_double2_graphic_pane_g

0x557a,	// (0x00049618) list_double2_graphic_pane_t1_ParamLimits

0x557a,	// (0x00049618) list_double2_graphic_pane_t1

0x55c9,	// (0x00049667) list_double2_graphic_pane_t2_ParamLimits

0x55c9,	// (0x00049667) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0005369a) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0005369a) list_double2_graphic_pane_t

0x55db,	// (0x00049679) list_double_large_graphic_pane_g1_ParamLimits

0x55db,	// (0x00049679) list_double_large_graphic_pane_g1

0x55fa,	// (0x00049698) list_double_large_graphic_pane_g2_ParamLimits

0x55fa,	// (0x00049698) list_double_large_graphic_pane_g2

0x6cfc,	// (0x0004ad9a) list_double_large_graphic_pane_g3_ParamLimits

0x6cfc,	// (0x0004ad9a) list_double_large_graphic_pane_g3

0x5610,	// (0x000496ae) list_double_large_graphic_pane_g4_ParamLimits

0x5610,	// (0x000496ae) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0005369f) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0005369f) list_double_large_graphic_pane_g

0x5622,	// (0x000496c0) list_double_large_graphic_pane_t1_ParamLimits

0x5622,	// (0x000496c0) list_double_large_graphic_pane_t1

0x563b,	// (0x000496d9) list_double_large_graphic_pane_t2_ParamLimits

0x563b,	// (0x000496d9) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x000536aa) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x000536aa) list_double_large_graphic_pane_t

0x564d,	// (0x000496eb) list_double2_large_graphic_pane_g1_ParamLimits

0x564d,	// (0x000496eb) list_double2_large_graphic_pane_g1

0x6d29,	// (0x0004adc7) list_double2_large_graphic_pane_g2_ParamLimits

0x6d29,	// (0x0004adc7) list_double2_large_graphic_pane_g2

0x6cfc,	// (0x0004ad9a) list_double2_large_graphic_pane_g3_ParamLimits

0x6cfc,	// (0x0004ad9a) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x000536af) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x000536af) list_double2_large_graphic_pane_g

0x557a,	// (0x00049618) list_double2_large_graphic_pane_t1_ParamLimits

0x557a,	// (0x00049618) list_double2_large_graphic_pane_t1

0x55c9,	// (0x00049667) list_double2_large_graphic_pane_t2_ParamLimits

0x55c9,	// (0x00049667) list_double2_large_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0005369a) list_double2_large_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0005369a) list_double2_large_graphic_pane_t

0x5659,	// (0x000496f7) list_double_heading_pane_g1_ParamLimits

0x5659,	// (0x000496f7) list_double_heading_pane_g1

0x6d3a,	// (0x0004add8) list_double_heading_pane_g2_ParamLimits

0x6d3a,	// (0x0004add8) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x000536b6) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x000536b6) list_double_heading_pane_g

0x566a,	// (0x00049708) list_double_heading_pane_t1_ParamLimits

0x566a,	// (0x00049708) list_double_heading_pane_t1

0x5680,	// (0x0004971e) list_double_heading_pane_t2_ParamLimits

0x5680,	// (0x0004971e) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x000536bb) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x000536bb) list_double_heading_pane_t

0x5692,	// (0x00049730) list_double_graphic_heading_pane_g1_ParamLimits

0x5692,	// (0x00049730) list_double_graphic_heading_pane_g1

0x5659,	// (0x000496f7) list_double_graphic_heading_pane_g2_ParamLimits

0x5659,	// (0x000496f7) list_double_graphic_heading_pane_g2

0x6d3a,	// (0x0004add8) list_double_graphic_heading_pane_g3_ParamLimits

0x6d3a,	// (0x0004add8) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x000536c0) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x000536c0) list_double_graphic_heading_pane_g

0x566a,	// (0x00049708) list_double_graphic_heading_pane_t1_ParamLimits

0x566a,	// (0x00049708) list_double_graphic_heading_pane_t1

0x5680,	// (0x0004971e) list_double_graphic_heading_pane_t2_ParamLimits

0x5680,	// (0x0004971e) list_double_graphic_heading_pane_t2

0x0001,

0xf61d,	// (0x000536bb) list_double_graphic_heading_pane_t_ParamLimits

0xf61d,	// (0x000536bb) list_double_graphic_heading_pane_t

0x569e,	// (0x0004973c) list_double_time_pane_g1_ParamLimits

0x569e,	// (0x0004973c) list_double_time_pane_g1

0x56af,	// (0x0004974d) list_double_time_pane_g2_ParamLimits

0x56af,	// (0x0004974d) list_double_time_pane_g2

0x0001,

0xf629,	// (0x000536c7) list_double_time_pane_g_ParamLimits

0xf629,	// (0x000536c7) list_double_time_pane_g

0x56bb,	// (0x00049759) list_double_time_pane_t1_ParamLimits

0x56bb,	// (0x00049759) list_double_time_pane_t1

0x56d1,	// (0x0004976f) list_double_time_pane_t2_ParamLimits

0x56d1,	// (0x0004976f) list_double_time_pane_t2

0x56e3,	// (0x00049781) list_double_time_pane_t3_ParamLimits

0x56e3,	// (0x00049781) list_double_time_pane_t3

0x56f5,	// (0x00049793) list_double_time_pane_t4_ParamLimits

0x56f5,	// (0x00049793) list_double_time_pane_t4

0x0003,

0xf62e,	// (0x000536cc) list_double_time_pane_t_ParamLimits

0xf62e,	// (0x000536cc) list_double_time_pane_t

0x5707,	// (0x000497a5) list_setting_pane_g1_ParamLimits

0x5707,	// (0x000497a5) list_setting_pane_g1

0x5713,	// (0x000497b1) list_setting_pane_g2_ParamLimits

0x5713,	// (0x000497b1) list_setting_pane_g2

0x0001,

0xf637,	// (0x000536d5) list_setting_pane_g_ParamLimits

0xf637,	// (0x000536d5) list_setting_pane_g

0x571f,	// (0x000497bd) list_setting_pane_t1_ParamLimits

0x571f,	// (0x000497bd) list_setting_pane_t1

0x5739,	// (0x000497d7) list_setting_pane_t2_ParamLimits

0x5739,	// (0x000497d7) list_setting_pane_t2

0x0002,

0xf63c,	// (0x000536da) list_setting_pane_t_ParamLimits

0xf63c,	// (0x000536da) list_setting_pane_t

0x5776,	// (0x00049814) set_value_pane_cp_ParamLimits

0x5776,	// (0x00049814) set_value_pane_cp

0x5782,	// (0x00049820) list_setting_number_pane_g1_ParamLimits

0x5782,	// (0x00049820) list_setting_number_pane_g1

0x578e,	// (0x0004982c) list_setting_number_pane_g2_ParamLimits

0x578e,	// (0x0004982c) list_setting_number_pane_g2

0x0001,

0xf643,	// (0x000536e1) list_setting_number_pane_g_ParamLimits

0xf643,	// (0x000536e1) list_setting_number_pane_g

0x579a,	// (0x00049838) list_setting_number_pane_t1_ParamLimits

0x579a,	// (0x00049838) list_setting_number_pane_t1

0x57b3,	// (0x00049851) list_setting_number_pane_t2_ParamLimits

0x57b3,	// (0x00049851) list_setting_number_pane_t2

0x57cd,	// (0x0004986b) list_setting_number_pane_t3_ParamLimits

0x57cd,	// (0x0004986b) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x000536e6) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x000536e6) list_setting_number_pane_t

0x5776,	// (0x00049814) set_value_pane_ParamLimits

0x5776,	// (0x00049814) set_value_pane

0x0e31,	// (0x00044ecf) bg_set_opt_pane_ParamLimits

0x0e31,	// (0x00044ecf) bg_set_opt_pane

0x5810,	// (0x000498ae) set_value_pane_t1

0x0e52,	// (0x00044ef0) slider_set_pane_cp3

0x6d46,	// (0x0004ade4) volume_small_pane_cp

0x0e5b,	// (0x00044ef9) list_form_gen_pane

0x0e64,	// (0x00044f02) scroll_pane_cp8

0x5826,	// (0x000498c4) form_field_data_pane_ParamLimits

0x5826,	// (0x000498c4) form_field_data_pane

0x5848,	// (0x000498e6) form_field_data_wide_pane_ParamLimits

0x5848,	// (0x000498e6) form_field_data_wide_pane

0x586b,	// (0x00049909) form_field_popup_pane_ParamLimits

0x586b,	// (0x00049909) form_field_popup_pane

0x588b,	// (0x00049929) form_field_popup_wide_pane_ParamLimits

0x588b,	// (0x00049929) form_field_popup_wide_pane

0x58a8,	// (0x00049946) form_field_slider_pane_ParamLimits

0x58a8,	// (0x00049946) form_field_slider_pane

0x58bb,	// (0x00049959) form_field_slider_wide_pane_ParamLimits

0x58bb,	// (0x00049959) form_field_slider_wide_pane

0x0e75,	// (0x00044f13) data_form_pane

0x58d8,	// (0x00049976) form_field_data_pane_t1

0x0e81,	// (0x00044f1f) input_focus_pane

0x58f0,	// (0x0004998e) data_form_wide_pane

0x590d,	// (0x000499ab) form_field_data_wide_pane_t1

0x0d75,	// (0x00044e13) input_focus_pane_cp6

0x592f,	// (0x000499cd) form_field_popup_pane_t1

0x0e81,	// (0x00044f1f) input_focus_pane_cp7

0x0eaf,	// (0x00044f4d) list_form_pane

0x594f,	// (0x000499ed) form_field_popup_wide_pane_t1

0x0e81,	// (0x00044f1f) input_focus_pane_cp8

0x0ebb,	// (0x00044f59) list_form_wide_pane

0x596c,	// (0x00049a0a) form_field_slider_pane_t1_ParamLimits

0x596c,	// (0x00049a0a) form_field_slider_pane_t1

0x5982,	// (0x00049a20) form_field_slider_pane_t2_ParamLimits

0x5982,	// (0x00049a20) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x000536f6) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x000536f6) form_field_slider_pane_t

0x0abd,	// (0x00044b5b) input_focus_pane_cp9_ParamLimits

0x0abd,	// (0x00044b5b) input_focus_pane_cp9

0x5997,	// (0x00049a35) slider_cont_pane_ParamLimits

0x5997,	// (0x00049a35) slider_cont_pane

0x0ec7,	// (0x00044f65) form_field_slider_wide_pane_t1_ParamLimits

0x0ec7,	// (0x00044f65) form_field_slider_wide_pane_t1

0x59ab,	// (0x00049a49) form_field_slider_wide_pane_t2_ParamLimits

0x59ab,	// (0x00049a49) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x000536fb) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x000536fb) form_field_slider_wide_pane_t

0x0abd,	// (0x00044b5b) input_focus_pane_cp10_ParamLimits

0x0abd,	// (0x00044b5b) input_focus_pane_cp10

0x59bd,	// (0x00049a5b) slider_cont_pane_cp1_ParamLimits

0x59bd,	// (0x00049a5b) slider_cont_pane_cp1

0x59d1,	// (0x00049a6f) slider_form_pane_cp

0x0ed9,	// (0x00044f77) input_focus_pane_g1

0x0ee1,	// (0x00044f7f) input_focus_pane_g2

0x0ee9,	// (0x00044f87) input_focus_pane_g3

0x0ef1,	// (0x00044f8f) input_focus_pane_g4

0x0ef9,	// (0x00044f97) input_focus_pane_g5

0x0f01,	// (0x00044f9f) input_focus_pane_g6

0x0f09,	// (0x00044fa7) input_focus_pane_g7

0x0f11,	// (0x00044faf) input_focus_pane_g8

0x0f19,	// (0x00044fb7) input_focus_pane_g9

0x0a65,	// (0x00044b03) input_focus_pane_g10

0x0009,

0xf662,	// (0x00053700) input_focus_pane_g

0xa0b2,	// (0x0004e150) wait_border_pane_g3_copy1

0x59d9,	// (0x00049a77) data_form_pane_t1

0x0a65,	// (0x00044b03) wait_anim_pane_g1_copy1

0x5c54,	// (0x00049cf2) data_form_wide_pane_t1

0x59f4,	// (0x00049a92) list_form_graphic_pane_cp_ParamLimits

0x59f4,	// (0x00049a92) list_form_graphic_pane_cp

0xafa1,	// (0x0004f03f) slider_form_pane_g1

0xafaa,	// (0x0004f048) slider_form_pane_g2

0x0006,

0xf965,	// (0x00053a03) slider_form_pane_g

0x59f4,	// (0x00049a92) list_form_graphic_pane_ParamLimits

0x59f4,	// (0x00049a92) list_form_graphic_pane

0x5a0d,	// (0x00049aab) list_form_graphic_pane_g1

0x5a15,	// (0x00049ab3) list_form_graphic_pane_t1_ParamLimits

0x5a15,	// (0x00049ab3) list_form_graphic_pane_t1

0x0acb,	// (0x00044b69) list_highlight_pane_cp5_ParamLimits

0x0acb,	// (0x00044b69) list_highlight_pane_cp5

0x5a2a,	// (0x00049ac8) find_pane_g1

0x0f21,	// (0x00044fbf) input_find_pane

0x5a33,	// (0x00049ad1) input_find_pane_g1_ParamLimits

0x5a33,	// (0x00049ad1) input_find_pane_g1

0x5a3f,	// (0x00049add) input_find_pane_t1_ParamLimits

0x5a3f,	// (0x00049add) input_find_pane_t1

0x5a54,	// (0x00049af2) input_find_pane_t2_ParamLimits

0x5a54,	// (0x00049af2) input_find_pane_t2

0x0001,

0xf677,	// (0x00053715) input_find_pane_t_ParamLimits

0xf677,	// (0x00053715) input_find_pane_t

0x0f2a,	// (0x00044fc8) input_focus_pane_cp5_ParamLimits

0x0f2a,	// (0x00044fc8) input_focus_pane_cp5

0x0f3d,	// (0x00044fdb) bg_popup_window_pane_cp2_ParamLimits

0x0f3d,	// (0x00044fdb) bg_popup_window_pane_cp2

0x0f4a,	// (0x00044fe8) listscroll_menu_pane_ParamLimits

0x0f4a,	// (0x00044fe8) listscroll_menu_pane

0x6d5b,	// (0x0004adf9) popup_submenu_window_ParamLimits

0x6d5b,	// (0x0004adf9) popup_submenu_window

0x0f56,	// (0x00044ff4) find_popup_pane_g1

0x6d83,	// (0x0004ae21) input_popup_find_pane_cp

0x0f5e,	// (0x00044ffc) input_focus_pane_cp4_ParamLimits

0x0f5e,	// (0x00044ffc) input_focus_pane_cp4

0x0f6c,	// (0x0004500a) input_popup_find_pane_t1_ParamLimits

0x0f6c,	// (0x0004500a) input_popup_find_pane_t1

0x0a6f,	// (0x00044b0d) bg_popup_sub_pane_cp

0x0f9a,	// (0x00045038) listscroll_popup_sub_pane

0x0fa2,	// (0x00045040) list_submenu_pane_ParamLimits

0x0fa2,	// (0x00045040) list_submenu_pane

0x0fb3,	// (0x00045051) scroll_pane_cp4

0x6d9b,	// (0x0004ae39) list_single_popup_submenu_pane_ParamLimits

0x6d9b,	// (0x0004ae39) list_single_popup_submenu_pane

0x2117,	// (0x000461b5) list_single_popup_submenu_pane_g1

0x6daf,	// (0x0004ae4d) list_single_popup_submenu_pane_t1_ParamLimits

0x6daf,	// (0x0004ae4d) list_single_popup_submenu_pane_t1

0x0acb,	// (0x00044b69) bg_active_tab_pane_cp1_ParamLimits

0x0acb,	// (0x00044b69) bg_active_tab_pane_cp1

0x0fbb,	// (0x00045059) tabs_2_active_pane_g1

0x6dc4,	// (0x0004ae62) tabs_2_active_pane_t1

0x0acb,	// (0x00044b69) bg_passive_tab_pane_cp1_ParamLimits

0x0acb,	// (0x00044b69) bg_passive_tab_pane_cp1

0x0fbb,	// (0x00045059) tabs_2_passive_pane_g1

0x6dc4,	// (0x0004ae62) tabs_2_passive_pane_t1

0x6dd6,	// (0x0004ae74) bg_active_tab_pane_cp4

0x6de4,	// (0x0004ae82) tabs_2_long_active_pane_t1

0x6df7,	// (0x0004ae95) bg_passive_tab_pane_cp4

0x8229,	// (0x0004c2c7) list_single_midp_graphic_pane_g4_ParamLimits

0x6dd6,	// (0x0004ae74) bg_active_tab_pane_cp5

0x6e03,	// (0x0004aea1) tabs_3_long_active_pane_t1

0x6df7,	// (0x0004ae95) bg_passive_tab_pane_cp5

0x8229,	// (0x0004c2c7) list_single_midp_graphic_pane_g4

0x0acb,	// (0x00044b69) bg_popup_window_pane_cp13_ParamLimits

0x0acb,	// (0x00044b69) bg_popup_window_pane_cp13

0x0fcf,	// (0x0004506d) listscroll_popup_fast_pane_ParamLimits

0x0fcf,	// (0x0004506d) listscroll_popup_fast_pane

0x0fdb,	// (0x00045079) grid_popup_fast_pane_ParamLimits

0x0fdb,	// (0x00045079) grid_popup_fast_pane

0x0fed,	// (0x0004508b) scroll_pane_cp9_ParamLimits

0x0fed,	// (0x0004508b) scroll_pane_cp9

0xc8ba,	// (0x00050958) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc8ba,	// (0x00050958) list_single_graphic_hl_pane_t1_cp2

0x1000,	// (0x0004509e) input_focus_pane_cp20_ParamLimits

0x1000,	// (0x0004509e) input_focus_pane_cp20

0x100e,	// (0x000450ac) query_popup_data_pane_t1_ParamLimits

0x100e,	// (0x000450ac) query_popup_data_pane_t1

0x1021,	// (0x000450bf) query_popup_data_pane_t2_ParamLimits

0x1021,	// (0x000450bf) query_popup_data_pane_t2

0x1067,	// (0x00045105) query_popup_data_pane_t3_ParamLimits

0x1067,	// (0x00045105) query_popup_data_pane_t3

0x10a8,	// (0x00045146) query_popup_data_pane_t4_ParamLimits

0x10a8,	// (0x00045146) query_popup_data_pane_t4

0x10e4,	// (0x00045182) query_popup_data_pane_t5_ParamLimits

0x10e4,	// (0x00045182) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0005371a) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0005371a) query_popup_data_pane_t

0x0ed9,	// (0x00044f77) bg_set_opt_pane_g1

0x0ee1,	// (0x00044f7f) bg_set_opt_pane_g2

0x0ee9,	// (0x00044f87) bg_set_opt_pane_g3

0x0ef1,	// (0x00044f8f) bg_set_opt_pane_g4

0x0ef9,	// (0x00044f97) bg_set_opt_pane_g5

0x0f01,	// (0x00044f9f) bg_set_opt_pane_g6

0x0f09,	// (0x00044fa7) bg_set_opt_pane_g7

0x0f11,	// (0x00044faf) bg_set_opt_pane_g8

0x0f19,	// (0x00044fb7) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x00053725) bg_set_opt_pane_g

0x7320,	// (0x0004b3be) control_top_pane_stacon_ParamLimits

0x7320,	// (0x0004b3be) control_top_pane_stacon

0x7373,	// (0x0004b411) signal_pane_stacon_ParamLimits

0x7373,	// (0x0004b411) signal_pane_stacon

0x1470,	// (0x0004550e) stacon_top_pane_g1_ParamLimits

0x1470,	// (0x0004550e) stacon_top_pane_g1

0x7398,	// (0x0004b436) title_pane_stacon_ParamLimits

0x7398,	// (0x0004b436) title_pane_stacon

0x73c2,	// (0x0004b460) uni_indicator_pane_stacon_ParamLimits

0x73c2,	// (0x0004b460) uni_indicator_pane_stacon

0x73d7,	// (0x0004b475) battery_pane_stacon_ParamLimits

0x73d7,	// (0x0004b475) battery_pane_stacon

0x741b,	// (0x0004b4b9) control_bottom_pane_stacon_ParamLimits

0x741b,	// (0x0004b4b9) control_bottom_pane_stacon

0x743e,	// (0x0004b4dc) navi_pane_stacon_ParamLimits

0x743e,	// (0x0004b4dc) navi_pane_stacon

0x1492,	// (0x00045530) stacon_bottom_pane_g1_ParamLimits

0x1492,	// (0x00045530) stacon_bottom_pane_g1

0x6e2f,	// (0x0004aecd) aid_levels_signal_lsc_ParamLimits

0x6e2f,	// (0x0004aecd) aid_levels_signal_lsc

0x6e45,	// (0x0004aee3) signal_pane_stacon_g1_ParamLimits

0x6e45,	// (0x0004aee3) signal_pane_stacon_g1

0x6e59,	// (0x0004aef7) signal_pane_stacon_g2_ParamLimits

0x6e59,	// (0x0004aef7) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x00053738) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x00053738) signal_pane_stacon_g

0x6e8e,	// (0x0004af2c) title_pane_stacon_t1_ParamLimits

0x6e8e,	// (0x0004af2c) title_pane_stacon_t1

0x113c,	// (0x000451da) uni_indicator_pane_stacon_g1

0x1146,	// (0x000451e4) uni_indicator_pane_stacon_g2

0x1128,	// (0x000451c6) uni_indicator_pane_stacon_g3

0x1132,	// (0x000451d0) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x00053744) uni_indicator_pane_stacon_g

0x6eb3,	// (0x0004af51) control_top_pane_stacon_g1

0x6ebb,	// (0x0004af59) control_top_pane_stacon_t1_ParamLimits

0x6ebb,	// (0x0004af59) control_top_pane_stacon_t1

0x6ef2,	// (0x0004af90) aid_levels_battery_lsc_ParamLimits

0x6ef2,	// (0x0004af90) aid_levels_battery_lsc

0x6f09,	// (0x0004afa7) battery_pane_stacon_g1_ParamLimits

0x6f09,	// (0x0004afa7) battery_pane_stacon_g1

0x6f1c,	// (0x0004afba) battery_pane_stacon_g2_ParamLimits

0x6f1c,	// (0x0004afba) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0005374d) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0005374d) battery_pane_stacon_g

0x6f5a,	// (0x0004aff8) navi_icon_pane_stacon

0x6f6e,	// (0x0004b00c) navi_navi_pane_stacon

0x6f5a,	// (0x0004aff8) navi_text_pane_stacon

0x6eb3,	// (0x0004af51) control_bottom_pane_stacon_g1

0x6f82,	// (0x0004b020) control_bottom_pane_stacon_t1_ParamLimits

0x6f82,	// (0x0004b020) control_bottom_pane_stacon_t1

0x6fb9,	// (0x0004b057) grid_app_pane_ParamLimits

0x6fb9,	// (0x0004b057) grid_app_pane

0x6fdb,	// (0x0004b079) scroll_pane_cp15_ParamLimits

0x6fdb,	// (0x0004b079) scroll_pane_cp15

0x6fee,	// (0x0004b08c) cell_app_pane_ParamLimits

0x6fee,	// (0x0004b08c) cell_app_pane

0x7016,	// (0x0004b0b4) cell_app_pane_g1_ParamLimits

0x7016,	// (0x0004b0b4) cell_app_pane_g1

0x116a,	// (0x00045208) cell_app_pane_g2_ParamLimits

0x116a,	// (0x00045208) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00053752) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00053752) cell_app_pane_g

0x703a,	// (0x0004b0d8) cell_app_pane_t1_ParamLimits

0x703a,	// (0x0004b0d8) cell_app_pane_t1

0x1176,	// (0x00045214) grid_highlight_pane_ParamLimits

0x1176,	// (0x00045214) grid_highlight_pane

0x0ed9,	// (0x00044f77) cell_highlight_pane_g1

0x0ee1,	// (0x00044f7f) cell_highlight_pane_g2

0x0ee9,	// (0x00044f87) cell_highlight_pane_g3

0x0ef1,	// (0x00044f8f) cell_highlight_pane_g4

0x0ef9,	// (0x00044f97) cell_highlight_pane_g5

0x0f01,	// (0x00044f9f) cell_highlight_pane_g6

0x0f09,	// (0x00044fa7) cell_highlight_pane_g7

0x0f11,	// (0x00044faf) cell_highlight_pane_g8

0x0f19,	// (0x00044fb7) cell_highlight_pane_g9

0x0a65,	// (0x00044b03) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00053700) cell_highlight_pane_g

0x1187,	// (0x00045225) bg_scroll_pane

0x7064,	// (0x0004b102) scroll_handle_pane

0x11ce,	// (0x0004526c) scroll_bg_pane_g1

0x11e3,	// (0x00045281) scroll_bg_pane_g2

0x11fb,	// (0x00045299) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x00053757) scroll_bg_pane_g

0x708d,	// (0x0004b12b) scroll_handle_focus_pane_ParamLimits

0x708d,	// (0x0004b12b) scroll_handle_focus_pane

0x11ce,	// (0x0004526c) scroll_handle_pane_g1

0x1210,	// (0x000452ae) scroll_handle_pane_g2

0x11fb,	// (0x00045299) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0005375e) scroll_handle_pane_g

0x0f5e,	// (0x00044ffc) bg_popup_sub_pane_cp21_ParamLimits

0x0f5e,	// (0x00044ffc) bg_popup_sub_pane_cp21

0x709a,	// (0x0004b138) popup_fep_japan_predictive_window_t1_ParamLimits

0x709a,	// (0x0004b138) popup_fep_japan_predictive_window_t1

0x70b4,	// (0x0004b152) popup_fep_japan_predictive_window_t2_ParamLimits

0x70b4,	// (0x0004b152) popup_fep_japan_predictive_window_t2

0x70e7,	// (0x0004b185) popup_fep_japan_predictive_window_t3_ParamLimits

0x70e7,	// (0x0004b185) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x00053765) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x00053765) popup_fep_japan_predictive_window_t

0x0a6f,	// (0x00044b0d) bg_popup_sub_pane_cp23

0x2a42,	// (0x00046ae0) listscroll_japin_cand_pane

0x1224,	// (0x000452c2) popup_fep_japan_candidate_window_t1

0x1232,	// (0x000452d0) candidate_pane_ParamLimits

0x1232,	// (0x000452d0) candidate_pane

0x711e,	// (0x0004b1bc) scroll_pane_cp30

0x1244,	// (0x000452e2) list_single_popup_jap_candidate_pane_ParamLimits

0x1244,	// (0x000452e2) list_single_popup_jap_candidate_pane

0x0a6f,	// (0x00044b0d) list_highlight_pane_cp30

0x1259,	// (0x000452f7) list_single_popup_jap_candidate_pane_t1

0x1268,	// (0x00045306) level_1_signal

0x1275,	// (0x00045313) level_2_signal

0x1282,	// (0x00045320) level_3_signal

0x128f,	// (0x0004532d) level_4_signal

0x129c,	// (0x0004533a) level_5_signal

0x12a9,	// (0x00045347) level_6_signal

0x12b6,	// (0x00045354) level_7_signal

0x1268,	// (0x00045306) level_1_battery

0x1275,	// (0x00045313) level_2_battery

0x1282,	// (0x00045320) level_3_battery

0x128f,	// (0x0004532d) level_4_battery

0x129c,	// (0x0004533a) level_5_battery

0x12a9,	// (0x00045347) level_6_battery

0x12b6,	// (0x00045354) level_7_battery

0x12db,	// (0x00045379) list_menu_pane_ParamLimits

0x12db,	// (0x00045379) list_menu_pane

0x12f1,	// (0x0004538f) scroll_pane_cp25_ParamLimits

0x12f1,	// (0x0004538f) scroll_pane_cp25

0x130a,	// (0x000453a8) list_double2_graphic_pane_cp2_ParamLimits

0x130a,	// (0x000453a8) list_double2_graphic_pane_cp2

0x130a,	// (0x000453a8) list_double2_large_graphic_pane_cp2_ParamLimits

0x130a,	// (0x000453a8) list_double2_large_graphic_pane_cp2

0x130a,	// (0x000453a8) list_double2_pane_cp2_ParamLimits

0x130a,	// (0x000453a8) list_double2_pane_cp2

0x130a,	// (0x000453a8) list_double_graphic_pane_cp2_ParamLimits

0x130a,	// (0x000453a8) list_double_graphic_pane_cp2

0x130a,	// (0x000453a8) list_double_large_graphic_pane_cp2_ParamLimits

0x130a,	// (0x000453a8) list_double_large_graphic_pane_cp2

0x130a,	// (0x000453a8) list_double_number_pane_cp2_ParamLimits

0x130a,	// (0x000453a8) list_double_number_pane_cp2

0x130a,	// (0x000453a8) list_double_pane_cp2_ParamLimits

0x130a,	// (0x000453a8) list_double_pane_cp2

0x7159,	// (0x0004b1f7) list_single_2graphic_pane_cp2_ParamLimits

0x7159,	// (0x0004b1f7) list_single_2graphic_pane_cp2

0x7159,	// (0x0004b1f7) list_single_graphic_heading_pane_cp2_ParamLimits

0x7159,	// (0x0004b1f7) list_single_graphic_heading_pane_cp2

0x7159,	// (0x0004b1f7) list_single_graphic_pane_cp2_ParamLimits

0x7159,	// (0x0004b1f7) list_single_graphic_pane_cp2

0x7159,	// (0x0004b1f7) list_single_heading_pane_cp2_ParamLimits

0x7159,	// (0x0004b1f7) list_single_heading_pane_cp2

0x131a,	// (0x000453b8) list_single_large_graphic_pane_cp2_ParamLimits

0x131a,	// (0x000453b8) list_single_large_graphic_pane_cp2

0x7159,	// (0x0004b1f7) list_single_number_heading_pane_cp2_ParamLimits

0x7159,	// (0x0004b1f7) list_single_number_heading_pane_cp2

0x7159,	// (0x0004b1f7) list_single_number_pane_cp2_ParamLimits

0x7159,	// (0x0004b1f7) list_single_number_pane_cp2

0x716f,	// (0x0004b20d) list_single_pane_cp2_ParamLimits

0x716f,	// (0x0004b20d) list_single_pane_cp2

0x1334,	// (0x000453d2) bg_popup_sub_pane_cp22

0x7247,	// (0x0004b2e5) popup_side_volume_key_window_g1

0x726b,	// (0x0004b309) popup_side_volume_key_window_t1

0x7287,	// (0x0004b325) volume_small_pane_cp1

0x0abd,	// (0x00044b5b) bg_popup_sub_pane_cp24_ParamLimits

0x0abd,	// (0x00044b5b) bg_popup_sub_pane_cp24

0x134a,	// (0x000453e8) fep_china_uni_candidate_pane_ParamLimits

0x134a,	// (0x000453e8) fep_china_uni_candidate_pane

0x135e,	// (0x000453fc) fep_china_uni_entry_pane

0x136e,	// (0x0004540c) popup_fep_china_uni_window_g1

0x728f,	// (0x0004b32d) fep_china_uni_entry_pane_g1

0x7297,	// (0x0004b335) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x00053796) fep_china_uni_entry_pane_g

0x138a,	// (0x00045428) fep_entry_item_pane

0x1394,	// (0x00045432) fep_candidate_item_pane

0x729f,	// (0x0004b33d) fep_china_uni_candidate_pane_g1

0x139c,	// (0x0004543a) fep_china_uni_candidate_pane_g2

0x13a4,	// (0x00045442) fep_china_uni_candidate_pane_g3

0x72a7,	// (0x0004b345) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0005379b) fep_china_uni_candidate_pane_g

0x0a65,	// (0x00044b03) fep_entry_item_pane_g1

0x13ac,	// (0x0004544a) fep_entry_item_pane_t1_ParamLimits

0x13ac,	// (0x0004544a) fep_entry_item_pane_t1

0x13c2,	// (0x00045460) fep_candidate_item_pane_t1_ParamLimits

0x13c2,	// (0x00045460) fep_candidate_item_pane_t1

0x13d7,	// (0x00045475) fep_candidate_item_pane_t2_ParamLimits

0x13d7,	// (0x00045475) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x000537a4) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x000537a4) fep_candidate_item_pane_t

0x0acb,	// (0x00044b69) list_highlight_pane_cp31_ParamLimits

0x0acb,	// (0x00044b69) list_highlight_pane_cp31

0x13e9,	// (0x00045487) level_1_signal_lsc

0x13f2,	// (0x00045490) level_2_signal_lsc

0x13fb,	// (0x00045499) level_3_signal_lsc

0x1404,	// (0x000454a2) level_4_signal_lsc

0x140d,	// (0x000454ab) level_5_signal_lsc

0x1416,	// (0x000454b4) level_6_signal_lsc

0x141f,	// (0x000454bd) level_7_signal_lsc

0x141f,	// (0x000454bd) level_1_battery_lsc

0x1428,	// (0x000454c6) level_2_battery_lsc

0x1431,	// (0x000454cf) level_3_battery_lsc

0x143a,	// (0x000454d8) level_4_battery_lsc

0x1443,	// (0x000454e1) level_5_battery_lsc

0x144c,	// (0x000454ea) level_6_battery_lsc

0x13e9,	// (0x00045487) level_7_battery_lsc

0x1455,	// (0x000454f3) scroll_handle_focus_pane_g1

0x145e,	// (0x000454fc) scroll_handle_focus_pane_g2

0x1467,	// (0x00045505) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x000537a9) scroll_handle_focus_pane_g

0x5a69,	// (0x00049b07) list_single_2graphic_pane_g1_ParamLimits

0x5a69,	// (0x00049b07) list_single_2graphic_pane_g1

0x6cd3,	// (0x0004ad71) list_single_2graphic_pane_g2_ParamLimits

0x6cd3,	// (0x0004ad71) list_single_2graphic_pane_g2

0x6cb5,	// (0x0004ad53) list_single_2graphic_pane_g3_ParamLimits

0x6cb5,	// (0x0004ad53) list_single_2graphic_pane_g3

0x5a75,	// (0x00049b13) list_single_2graphic_pane_g4_ParamLimits

0x5a75,	// (0x00049b13) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x000537b0) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x000537b0) list_single_2graphic_pane_g

0x5a81,	// (0x00049b1f) list_single_2graphic_pane_t1_ParamLimits

0x5a81,	// (0x00049b1f) list_single_2graphic_pane_t1

0x72af,	// (0x0004b34d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x72af,	// (0x0004b34d) list_double2_graphic_large_graphic_pane_g1

0x6d29,	// (0x0004adc7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6d29,	// (0x0004adc7) list_double2_graphic_large_graphic_pane_g2

0x6cfc,	// (0x0004ad9a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6cfc,	// (0x0004ad9a) list_double2_graphic_large_graphic_pane_g3

0x72bf,	// (0x0004b35d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x72bf,	// (0x0004b35d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x000537b9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x000537b9) list_double2_graphic_large_graphic_pane_g

0x5aaf,	// (0x00049b4d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5aaf,	// (0x00049b4d) list_double2_graphic_large_graphic_pane_t1

0x5ac5,	// (0x00049b63) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5ac5,	// (0x00049b63) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x000537c2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x000537c2) list_double2_graphic_large_graphic_pane_t

0x749d,	// (0x0004b53b) popup_fast_swap_window_ParamLimits

0x749d,	// (0x0004b53b) popup_fast_swap_window

0x74b9,	// (0x0004b557) popup_side_volume_key_window

0x151d,	// (0x000455bb) stacon_top_pane

0x1527,	// (0x000455c5) status_pane_ParamLimits

0x1527,	// (0x000455c5) status_pane

0x74d3,	// (0x0004b571) status_small_pane

0x0a6f,	// (0x00044b0d) control_pane

0x0a6f,	// (0x00044b0d) stacon_bottom_pane

0x0e64,	// (0x00044f02) scroll_pane_cp121

0x0e5b,	// (0x00044ef9) set_content_pane

0x72cb,	// (0x0004b369) bg_active_tab_pane_g1_cp1

0x72d4,	// (0x0004b372) bg_active_tab_pane_g2_cp1

0x72dd,	// (0x0004b37b) bg_active_tab_pane_g3_cp1

0x72cb,	// (0x0004b369) bg_passive_tab_pane_g1_cp1

0x72d4,	// (0x0004b372) bg_passive_tab_pane_g2_cp1

0x72dd,	// (0x0004b37b) bg_passive_tab_pane_g3_cp1

0x72e6,	// (0x0004b384) bg_active_tab_pane_g1_cp2

0x72d4,	// (0x0004b372) bg_active_tab_pane_g2_cp2

0x72ef,	// (0x0004b38d) bg_active_tab_pane_g3_cp2

0x72e6,	// (0x0004b384) bg_passive_tab_pane_g1_cp2

0x72d4,	// (0x0004b372) bg_passive_tab_pane_g2_cp2

0x72ef,	// (0x0004b38d) bg_passive_tab_pane_g3_cp2

0x72f8,	// (0x0004b396) bg_active_tab_pane_g1_cp3

0x72d4,	// (0x0004b372) bg_active_tab_pane_g2_cp3

0x7301,	// (0x0004b39f) bg_active_tab_pane_g3_cp3

0x72f8,	// (0x0004b396) bg_passive_tab_pane_g1_cp3

0x72d4,	// (0x0004b372) bg_passive_tab_pane_g2_cp3

0x7301,	// (0x0004b39f) bg_passive_tab_pane_g3_cp3

0x730a,	// (0x0004b3a8) bg_active_tab_pane_g1_cp4

0x72d4,	// (0x0004b372) bg_active_tab_pane_g2_cp4

0x7315,	// (0x0004b3b3) bg_active_tab_pane_g3_cp4

0x730a,	// (0x0004b3a8) bg_passive_tab_pane_g1_cp4

0x72d4,	// (0x0004b372) bg_passive_tab_pane_g2_cp4

0x7315,	// (0x0004b3b3) bg_passive_tab_pane_g3_cp4

0x7461,	// (0x0004b4ff) bg_active_tab_pane_g1_cp5

0x72d4,	// (0x0004b372) bg_active_tab_pane_g2_cp5

0x746a,	// (0x0004b508) bg_active_tab_pane_g3_cp5

0x7461,	// (0x0004b4ff) bg_passive_tab_pane_g1_cp5

0x72d4,	// (0x0004b372) bg_passive_tab_pane_g2_cp5

0x746a,	// (0x0004b508) bg_passive_tab_pane_g3_cp5

0x7473,	// (0x0004b511) list_set_graphic_pane_ParamLimits

0x7473,	// (0x0004b511) list_set_graphic_pane

0x0a6f,	// (0x00044b0d) bg_set_opt_pane_cp4

0x14ae,	// (0x0004554c) list_set_graphic_pane_g1_ParamLimits

0x14ae,	// (0x0004554c) list_set_graphic_pane_g1

0x14ba,	// (0x00045558) list_set_graphic_pane_g2_ParamLimits

0x14ba,	// (0x00045558) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x000537c7) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x000537c7) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x00053b5f) volume_small_pane_cp_g

0x7491,	// (0x0004b52f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7491,	// (0x0004b52f) list_double2_large_graphic_pane_g1_cp2

0x14dc,	// (0x0004557a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x14dc,	// (0x0004557a) list_double2_large_graphic_pane_g2_cp2

0x14ed,	// (0x0004558b) list_double2_large_graphic_pane_g3_cp2

0x14f5,	// (0x00045593) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x14f5,	// (0x00045593) list_double2_large_graphic_pane_t1_cp2

0x150b,	// (0x000455a9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x150b,	// (0x000455a9) list_double2_large_graphic_pane_t2_cp2

0xab63,	// (0x0004ec01) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab63,	// (0x0004ec01) list_double_large_graphic_pane_g1_cp2

0xab74,	// (0x0004ec12) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab74,	// (0x0004ec12) list_double_large_graphic_pane_g2_cp2

0x1643,	// (0x000456e1) list_double_large_graphic_pane_g3_cp2

0xab85,	// (0x0004ec23) list_double_large_graphic_pane_g4_cp

0xab8d,	// (0x0004ec2b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab8d,	// (0x0004ec2b) list_double_large_graphic_pane_t1_cp2

0xaba4,	// (0x0004ec42) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaba4,	// (0x0004ec42) list_double_large_graphic_pane_t2_cp2

0x1535,	// (0x000455d3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1535,	// (0x000455d3) list_double2_graphic_pane_g1_cp2

0x1543,	// (0x000455e1) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1543,	// (0x000455e1) list_double2_graphic_pane_g2_cp2

0x1554,	// (0x000455f2) list_double2_graphic_pane_g3_cp2

0x155e,	// (0x000455fc) list_double2_graphic_pane_t1_cp2_ParamLimits

0x155e,	// (0x000455fc) list_double2_graphic_pane_t1_cp2

0x1574,	// (0x00045612) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1574,	// (0x00045612) list_double2_graphic_pane_t2_cp2

0x1586,	// (0x00045624) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1586,	// (0x00045624) list_single_number_heading_pane_g1_cp2

0x1592,	// (0x00045630) list_single_number_heading_pane_g2_cp2

0x159a,	// (0x00045638) list_single_number_heading_pane_t1_cp2_ParamLimits

0x159a,	// (0x00045638) list_single_number_heading_pane_t1_cp2

0x15b0,	// (0x0004564e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x15b0,	// (0x0004564e) list_single_number_heading_pane_t2_cp2

0x15c2,	// (0x00045660) list_single_number_heading_pane_t3_cp2_ParamLimits

0x15c2,	// (0x00045660) list_single_number_heading_pane_t3_cp2

0x1586,	// (0x00045624) list_single_heading_pane_g1_cp2_ParamLimits

0x1586,	// (0x00045624) list_single_heading_pane_g1_cp2

0x1592,	// (0x00045630) list_single_heading_pane_g2_cp2

0x159a,	// (0x00045638) list_single_heading_pane_t1_cp2_ParamLimits

0x159a,	// (0x00045638) list_single_heading_pane_t1_cp2

0xa96d,	// (0x0004ea0b) list_single_heading_pane_t2_cp2_ParamLimits

0xa96d,	// (0x0004ea0b) list_single_heading_pane_t2_cp2

0xa8b5,	// (0x0004e953) list_double_graphic_pane_g1_cp2_ParamLimits

0xa8b5,	// (0x0004e953) list_double_graphic_pane_g1_cp2

0xa8c1,	// (0x0004e95f) list_double_graphic_pane_g2_cp2_ParamLimits

0xa8c1,	// (0x0004e95f) list_double_graphic_pane_g2_cp2

0xa8d0,	// (0x0004e96e) list_double_graphic_pane_g3_cp2

0xa8d8,	// (0x0004e976) list_double_graphic_pane_t1_cp2_ParamLimits

0xa8d8,	// (0x0004e976) list_double_graphic_pane_t1_cp2

0xa8ee,	// (0x0004e98c) list_double_graphic_pane_t2_cp2_ParamLimits

0xa8ee,	// (0x0004e98c) list_double_graphic_pane_t2_cp2

0x1637,	// (0x000456d5) list_double_number_pane_g1_cp2_ParamLimits

0x1637,	// (0x000456d5) list_double_number_pane_g1_cp2

0x1643,	// (0x000456e1) list_double_number_pane_g2_cp2

0xa879,	// (0x0004e917) list_double_number_pane_t1_cp2_ParamLimits

0xa879,	// (0x0004e917) list_double_number_pane_t1_cp2

0xa88d,	// (0x0004e92b) list_double_number_pane_t2_cp2_ParamLimits

0xa88d,	// (0x0004e92b) list_double_number_pane_t2_cp2

0xa8a3,	// (0x0004e941) list_double_number_pane_t3_cp2_ParamLimits

0xa8a3,	// (0x0004e941) list_double_number_pane_t3_cp2

0xa762,	// (0x0004e800) list_single_graphic_pane_g1_cp2_ParamLimits

0xa762,	// (0x0004e800) list_single_graphic_pane_g1_cp2

0x169c,	// (0x0004573a) list_single_graphic_pane_g2_cp2_ParamLimits

0x169c,	// (0x0004573a) list_single_graphic_pane_g2_cp2

0x16a8,	// (0x00045746) list_single_graphic_pane_g3_cp2

0xa738,	// (0x0004e7d6) list_single_graphic_pane_t1_cp2_ParamLimits

0xa738,	// (0x0004e7d6) list_single_graphic_pane_t1_cp2

0x169c,	// (0x0004573a) list_single_number_pane_g1_cp2_ParamLimits

0x169c,	// (0x0004573a) list_single_number_pane_g1_cp2

0x16a8,	// (0x00045746) list_single_number_pane_g2_cp2

0xa738,	// (0x0004e7d6) list_single_number_pane_t1_cp2_ParamLimits

0xa738,	// (0x0004e7d6) list_single_number_pane_t1_cp2

0xa74e,	// (0x0004e7ec) list_single_number_pane_t2_cp2_ParamLimits

0xa74e,	// (0x0004e7ec) list_single_number_pane_t2_cp2

0x14dc,	// (0x0004557a) list_double2_pane_g1_cp2_ParamLimits

0x14dc,	// (0x0004557a) list_double2_pane_g1_cp2

0x14ed,	// (0x0004558b) list_double2_pane_g2_cp2

0x160f,	// (0x000456ad) list_double2_pane_t1_cp2_ParamLimits

0x160f,	// (0x000456ad) list_double2_pane_t1_cp2

0x1625,	// (0x000456c3) list_double2_pane_t2_cp2_ParamLimits

0x1625,	// (0x000456c3) list_double2_pane_t2_cp2

0x1637,	// (0x000456d5) list_double_pane_g1_cp2_ParamLimits

0x1637,	// (0x000456d5) list_double_pane_g1_cp2

0x1643,	// (0x000456e1) list_double_pane_g2_cp2

0x164b,	// (0x000456e9) list_double_pane_t1_cp2_ParamLimits

0x164b,	// (0x000456e9) list_double_pane_t1_cp2

0x1661,	// (0x000456ff) list_double_pane_t2_cp2_ParamLimits

0x1661,	// (0x000456ff) list_double_pane_t2_cp2

0x74de,	// (0x0004b57c) list_single_pane_cp2_g3

0x169c,	// (0x0004573a) list_single_pane_g1_cp2_ParamLimits

0x169c,	// (0x0004573a) list_single_pane_g1_cp2

0x16a8,	// (0x00045746) list_single_pane_g2_cp2

0x16b0,	// (0x0004574e) list_single_pane_t1_cp2_ParamLimits

0x16b0,	// (0x0004574e) list_single_pane_t1_cp2

0x74e6,	// (0x0004b584) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x74e6,	// (0x0004b584) list_single_large_graphic_pane_g1_cp2

0x16c8,	// (0x00045766) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x16c8,	// (0x00045766) list_single_large_graphic_pane_g2_cp2

0x16d4,	// (0x00045772) list_single_large_graphic_pane_g3_cp2

0x74f2,	// (0x0004b590) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x74f2,	// (0x0004b590) list_single_large_graphic_pane_g4_cp1

0x16dc,	// (0x0004577a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x16dc,	// (0x0004577a) list_single_large_graphic_pane_t1_cp2

0xa704,	// (0x0004e7a2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa704,	// (0x0004e7a2) list_single_graphic_heading_pane_g1_cp2

0xa6d1,	// (0x0004e76f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa6d1,	// (0x0004e76f) list_single_graphic_heading_pane_g4_cp2

0x16a8,	// (0x00045746) list_single_graphic_heading_pane_g5_cp2

0xa710,	// (0x0004e7ae) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa710,	// (0x0004e7ae) list_single_graphic_heading_pane_t1_cp2

0xa726,	// (0x0004e7c4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa726,	// (0x0004e7c4) list_single_graphic_heading_pane_t2_cp2

0xa6c5,	// (0x0004e763) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa6c5,	// (0x0004e763) list_single_2graphic_pane_g1_cp2

0xa6d1,	// (0x0004e76f) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa6d1,	// (0x0004e76f) list_single_2graphic_pane_g2_cp2

0x16a8,	// (0x00045746) list_single_2graphic_pane_g3_cp2

0xa6e2,	// (0x0004e780) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa6e2,	// (0x0004e780) list_single_2graphic_pane_g4_cp2

0xa6ee,	// (0x0004e78c) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa6ee,	// (0x0004e78c) list_single_2graphic_pane_t1_cp2

0x0a65,	// (0x00044b03) list_highlight_pane_g10_cp1

0xa2ad,	// (0x0004e34b) list_highlight_pane_g1_cp1

0xa2b5,	// (0x0004e353) list_highlight_pane_g2_cp1

0xa2bd,	// (0x0004e35b) list_highlight_pane_g3_cp1

0xa2c5,	// (0x0004e363) list_highlight_pane_g4_cp1

0xa2cd,	// (0x0004e36b) list_highlight_pane_g5_cp1

0xa2d5,	// (0x0004e373) list_highlight_pane_g6_cp1

0xa2dd,	// (0x0004e37b) list_highlight_pane_g7_cp1

0xa2e5,	// (0x0004e383) list_highlight_pane_g8_cp1

0xa2ed,	// (0x0004e38b) list_highlight_pane_g9_cp1

0xa1d5,	// (0x0004e273) form_field_slider_pane_t3

0xa1e3,	// (0x0004e281) form_field_slider_pane_t4

0xa1f1,	// (0x0004e28f) slider_form_pane_ParamLimits

0xa1f1,	// (0x0004e28f) slider_form_pane

0x0a6f,	// (0x00044b0d) control_abbreviations

0x0a6f,	// (0x00044b0d) control_conventions

0x0a6f,	// (0x00044b0d) control_definitions

0x0a6f,	// (0x00044b0d) format_table_attribute

0xa9b7,	// (0x0004ea55) bg_popup_preview_window_pane_g9

0x0a6f,	// (0x00044b0d) format_table_data2

0x0a6f,	// (0x00044b0d) format_table_data3

0x0a6f,	// (0x00044b0d) format_table_data_example

0x0008,

0x0a6f,	// (0x00044b0d) intro_purpose

0xf8c5,	// (0x00053963) bg_popup_preview_window_pane_g

0x0a6f,	// (0x00044b0d) texts_category

0x0a6f,	// (0x00044b0d) texts_graphics

0x16f2,	// (0x00045790) text_digital

0x1701,	// (0x0004579f) text_primary

0x1710,	// (0x000457ae) text_primary_small

0x171f,	// (0x000457bd) text_secondary

0x172e,	// (0x000457cc) text_title

0xb08c,	// (0x0004f12a) bg_passive_tab_pane_g1_cp3_srt

0x72d4,	// (0x0004b372) bg_passive_tab_pane_g2_cp3_srt

0xb095,	// (0x0004f133) bg_passive_tab_pane_g3_cp3_srt

0x0acb,	// (0x00044b69) bg_active_tab_pane_cp3_srt_ParamLimits

0x0acb,	// (0x00044b69) bg_active_tab_pane_cp3_srt

0xb09e,	// (0x0004f13c) tabs_4_active_pane_srt_g1

0xb0a6,	// (0x0004f144) tabs_4_active_pane_srt_t1_ParamLimits

0xb0a6,	// (0x0004f144) tabs_4_active_pane_srt_t1

0xb08c,	// (0x0004f12a) bg_active_tab_pane_g1_cp3_copy1

0x72d4,	// (0x0004b372) bg_active_tab_pane_g2_cp3_copy1

0xb095,	// (0x0004f133) bg_active_tab_pane_g3_cp3_copy1

0x0acb,	// (0x00044b69) tabs_2_long_active_pane_srt_ParamLimits

0x0acb,	// (0x00044b69) tabs_2_long_active_pane_srt

0x0acb,	// (0x00044b69) tabs_2_long_passive_pane_srt_ParamLimits

0x0acb,	// (0x00044b69) tabs_2_long_passive_pane_srt

0x6df7,	// (0x0004ae95) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6df7,	// (0x0004ae95) bg_passive_tab_pane_cp4_srt

0xadd8,	// (0x0004ee76) bg_passive_tab_pane_g1_cp4_srt

0x72d4,	// (0x0004b372) bg_passive_tab_pane_g2_cp4_srt

0xade1,	// (0x0004ee7f) bg_passive_tab_pane_g3_cp4_srt

0x6dd6,	// (0x0004ae74) bg_active_tab_pane_cp4_srt_ParamLimits

0x6dd6,	// (0x0004ae74) bg_active_tab_pane_cp4_srt

0xadea,	// (0x0004ee88) tabs_2_long_active_pane_srt_t1_ParamLimits

0xadea,	// (0x0004ee88) tabs_2_long_active_pane_srt_t1

0xadd8,	// (0x0004ee76) bg_active_tab_pane_g1_cp4_srt

0x72d4,	// (0x0004b372) bg_active_tab_pane_g2_cp4_srt

0xade1,	// (0x0004ee7f) bg_active_tab_pane_g3_cp4_srt

0x0abd,	// (0x00044b5b) tabs_3_long_active_pane_srt_ParamLimits

0x0abd,	// (0x00044b5b) tabs_3_long_active_pane_srt

0x0abd,	// (0x00044b5b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0abd,	// (0x00044b5b) tabs_3_long_passive_pane_cp_srt

0x0abd,	// (0x00044b5b) tabs_3_long_passive_pane_srt_ParamLimits

0x0abd,	// (0x00044b5b) tabs_3_long_passive_pane_srt

0x6df7,	// (0x0004ae95) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6df7,	// (0x0004ae95) bg_passive_tab_pane_cp5_srt

0x7461,	// (0x0004b4ff) bg_passive_tab_pane_g1_cp5_srt

0x72d4,	// (0x0004b372) bg_passive_tab_pane_g2_cp5_srt

0x746a,	// (0x0004b508) bg_passive_tab_pane_g3_cp5_srt

0x6dd6,	// (0x0004ae74) bg_active_tab_pane_cp5_srt_ParamLimits

0x6dd6,	// (0x0004ae74) bg_active_tab_pane_cp5_srt

0xadc6,	// (0x0004ee64) tabs_3_long_active_pane_srt_t1_ParamLimits

0xadc6,	// (0x0004ee64) tabs_3_long_active_pane_srt_t1

0x7461,	// (0x0004b4ff) bg_active_tab_pane_g1_cp5_srt

0x72d4,	// (0x0004b372) bg_active_tab_pane_g2_cp5_srt

0x746a,	// (0x0004b508) bg_active_tab_pane_g3_cp5_srt

0xadb8,	// (0x0004ee56) navi_text_pane_srt_t1

0xadb0,	// (0x0004ee4e) navi_icon_pane_srt_g1

0x1819,	// (0x000458b7) midp_editing_number_pane_srt

0x173d,	// (0x000457db) midp_ticker_pane_srt

0x1821,	// (0x000458bf) midp_ticker_pane_srt_g1

0x1829,	// (0x000458c7) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x000537e6) midp_ticker_pane_srt_g

0x1831,	// (0x000458cf) midp_ticker_pane_srt_t1

0xada1,	// (0x0004ee3f) midp_editing_number_pane_t1_copy1

0x750c,	// (0x0004b5aa) listscroll_midp_pane

0x750c,	// (0x0004b5aa) midp_form_pane

0x757e,	// (0x0004b61c) midp_info_popup_window_ParamLimits

0x757e,	// (0x0004b61c) midp_info_popup_window

0x0f5e,	// (0x00044ffc) bg_popup_sub_pane_cp50_ParamLimits

0x0f5e,	// (0x00044ffc) bg_popup_sub_pane_cp50

0x9ee1,	// (0x0004df7f) listscroll_midp_info_pane_ParamLimits

0x9ee1,	// (0x0004df7f) listscroll_midp_info_pane

0x9ec1,	// (0x0004df5f) listscroll_form_midp_pane_ParamLimits

0x9ec1,	// (0x0004df5f) listscroll_form_midp_pane

0x9ecd,	// (0x0004df6b) scroll_bar_cp050

0x9ea1,	// (0x0004df3f) list_midp_pane

0xbaf7,	// (0x0004fb95) signal_pane_g2_cp

0x9ddb,	// (0x0004de79) listscroll_midp_info_pane_t1_ParamLimits

0x9ddb,	// (0x0004de79) listscroll_midp_info_pane_t1

0x9df3,	// (0x0004de91) listscroll_midp_info_pane_t2_ParamLimits

0x9df3,	// (0x0004de91) listscroll_midp_info_pane_t2

0x9e31,	// (0x0004decf) listscroll_midp_info_pane_t3_ParamLimits

0x9e31,	// (0x0004decf) listscroll_midp_info_pane_t3

0x9e6b,	// (0x0004df09) listscroll_midp_info_pane_t4_ParamLimits

0x9e6b,	// (0x0004df09) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x0005389e) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x0005389e) listscroll_midp_info_pane_t

0x0fb3,	// (0x00045051) scroll_pane_cp21

0x9d7b,	// (0x0004de19) form_midp_field_choice_group_pane

0x9d84,	// (0x0004de22) form_midp_field_text_pane

0x9dc1,	// (0x0004de5f) form_midp_field_time_pane

0x9dc9,	// (0x0004de67) form_midp_gauge_slider_pane

0x9dd2,	// (0x0004de70) form_midp_gauge_wait_pane

0x0a6f,	// (0x00044b0d) form_midp_image_pane

0x5c14,	// (0x00049cb2) list_single_midp_pane_ParamLimits

0x5c14,	// (0x00049cb2) list_single_midp_pane

0x9d30,	// (0x0004ddce) form_midp_field_text_pane_t1

0x9afa,	// (0x0004db98) input_focus_pane_cp050

0x9d6a,	// (0x0004de08) list_midp_form_text_pane

0x9cff,	// (0x0004dd9d) form_midp_field_choice_group_pane_t1

0x9d0d,	// (0x0004ddab) input_focus_pane_cp051

0x9d21,	// (0x0004ddbf) list_midp_choice_pane

0x0a6f,	// (0x00044b0d) status_idle_pane

0x9ce3,	// (0x0004dd81) form_midp_field_time_pane_t1

0x0a65,	// (0x00044b03) wait_anim_pane_g2_copy1

0x9cf1,	// (0x0004dd8f) form_midp_field_time_pane_t2

0x0001,

0x179d,	// (0x0004583b) aid_navinavi_width_2_pane

0xf7fb,	// (0x00053899) form_midp_field_time_pane_t

0x0a6f,	// (0x00044b0d) input_focus_pane_cp052

0x0a6f,	// (0x00044b0d) bg_input_focus_pane_cp040

0x9ca3,	// (0x0004dd41) form_midp_gauge_slider_pane_t1

0x9cb1,	// (0x0004dd4f) form_midp_gauge_slider_pane_t2

0x9cbf,	// (0x0004dd5d) form_midp_gauge_slider_pane_t3

0x9ccd,	// (0x0004dd6b) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x00053890) form_midp_gauge_slider_pane_t

0x9cdb,	// (0x0004dd79) form_midp_slider_pane

0x0acb,	// (0x00044b69) bg_input_focus_pane_cp041_ParamLimits

0x0acb,	// (0x00044b69) bg_input_focus_pane_cp041

0x9c70,	// (0x0004dd0e) form_midp_gauge_wait_pane_t1_ParamLimits

0x9c70,	// (0x0004dd0e) form_midp_gauge_wait_pane_t1

0x9c82,	// (0x0004dd20) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c82,	// (0x0004dd20) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x0005388b) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x0005388b) form_midp_gauge_wait_pane_t

0x9c94,	// (0x0004dd32) form_midp_wait_pane_ParamLimits

0x9c94,	// (0x0004dd32) form_midp_wait_pane

0x9c3a,	// (0x0004dcd8) form_midp_image_pane_g1

0x9c43,	// (0x0004dce1) form_midp_image_pane_t1

0x9c52,	// (0x0004dcf0) form_midp_image_pane_t2

0x9c61,	// (0x0004dcff) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x00053884) form_midp_image_pane_t

0x9c31,	// (0x0004dccf) list_single_midp_pane_g1

0x5c05,	// (0x00049ca3) list_single_midp_pane_t1

0x9c08,	// (0x0004dca6) list_midp_form_item_pane_ParamLimits

0x9c08,	// (0x0004dca6) list_midp_form_item_pane

0x1745,	// (0x000457e3) list_midp_form_item_pane_t1

0x1754,	// (0x000457f2) midp_ticker_pane_g1

0x1760,	// (0x000457fe) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x000537cc) midp_ticker_pane_g

0x176c,	// (0x0004580a) midp_ticker_pane_t1

0xafee,	// (0x0004f08c) midp_editing_number_pane_t1

0xafcc,	// (0x0004f06a) midp_editing_number_pane

0xafdb,	// (0x0004f079) midp_ticker_pane

0xad91,	// (0x0004ee2f) ai_message_heading_pane

0x0a6f,	// (0x00044b0d) bg_popup_window_pane_cp14

0xad99,	// (0x0004ee37) listscroll_ai_message_pane

0xad1b,	// (0x0004edb9) ai_message_heading_pane_g1_ParamLimits

0xad1b,	// (0x0004edb9) ai_message_heading_pane_g1

0xad27,	// (0x0004edc5) ai_message_heading_pane_g2_ParamLimits

0xad27,	// (0x0004edc5) ai_message_heading_pane_g2

0xad33,	// (0x0004edd1) ai_message_heading_pane_g3_ParamLimits

0xad33,	// (0x0004edd1) ai_message_heading_pane_g3

0xad3f,	// (0x0004eddd) ai_message_heading_pane_g4_ParamLimits

0xad3f,	// (0x0004eddd) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x000539c5) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x000539c5) ai_message_heading_pane_g

0xad4b,	// (0x0004ede9) ai_message_heading_pane_t1_ParamLimits

0xad4b,	// (0x0004ede9) ai_message_heading_pane_t1

0xad65,	// (0x0004ee03) ai_message_heading_pane_t2_ParamLimits

0xad65,	// (0x0004ee03) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x000539ce) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x000539ce) ai_message_heading_pane_t

0xad77,	// (0x0004ee15) bg_popup_heading_pane_cp1_ParamLimits

0xad77,	// (0x0004ee15) bg_popup_heading_pane_cp1

0xad09,	// (0x0004eda7) list_ai_message_pane_ParamLimits

0xad09,	// (0x0004eda7) list_ai_message_pane

0x0fb3,	// (0x00045051) scroll_pane_cp10

0xaca5,	// (0x0004ed43) list_ai_message_pane_g1

0xacad,	// (0x0004ed4b) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x000539a2) list_ai_message_pane_g

0xacb5,	// (0x0004ed53) list_ai_message_pane_t1_ParamLimits

0xacb5,	// (0x0004ed53) list_ai_message_pane_t1

0xacca,	// (0x0004ed68) list_ai_message_pane_t2_ParamLimits

0xacca,	// (0x0004ed68) list_ai_message_pane_t2

0xacdf,	// (0x0004ed7d) list_ai_message_pane_t3_ParamLimits

0xacdf,	// (0x0004ed7d) list_ai_message_pane_t3

0xacf4,	// (0x0004ed92) list_ai_message_pane_t4_ParamLimits

0xacf4,	// (0x0004ed92) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x000539a7) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x000539a7) list_ai_message_pane_t

0xac90,	// (0x0004ed2e) cell_ai_soft_ind_pane_ParamLimits

0xac90,	// (0x0004ed2e) cell_ai_soft_ind_pane

0x177e,	// (0x0004581c) cell_ai_soft_ind_pane_g1_ParamLimits

0x177e,	// (0x0004581c) cell_ai_soft_ind_pane_g1

0x0a6f,	// (0x00044b0d) grid_highlight_cp1

0x178b,	// (0x00045829) text_secondary_cp56_ParamLimits

0x178b,	// (0x00045829) text_secondary_cp56

0xac65,	// (0x0004ed03) example_general_pane_ParamLimits

0xac65,	// (0x0004ed03) example_general_pane

0xac71,	// (0x0004ed0f) example_parent_pane_g1_ParamLimits

0xac71,	// (0x0004ed0f) example_parent_pane_g1

0xac7d,	// (0x0004ed1b) example_parent_pane_t1_ParamLimits

0xac7d,	// (0x0004ed1b) example_parent_pane_t1

0x7c72,	// (0x0004bd10) popup_preview_text_window_ParamLimits

0x7c72,	// (0x0004bd10) popup_preview_text_window

0x1694,	// (0x00045732) list_single_pane_cp2_g4

0x0c9d,	// (0x00044d3b) bg_popup_preview_window_pane_ParamLimits

0x0c9d,	// (0x00044d3b) bg_popup_preview_window_pane

0xa9bf,	// (0x0004ea5d) popup_preview_text_window_t1_ParamLimits

0xa9bf,	// (0x0004ea5d) popup_preview_text_window_t1

0xa9dd,	// (0x0004ea7b) popup_preview_text_window_t2_ParamLimits

0xa9dd,	// (0x0004ea7b) popup_preview_text_window_t2

0xaa26,	// (0x0004eac4) popup_preview_text_window_t3_ParamLimits

0xaa26,	// (0x0004eac4) popup_preview_text_window_t3

0xaa6b,	// (0x0004eb09) popup_preview_text_window_t4_ParamLimits

0xaa6b,	// (0x0004eb09) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x00053976) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x00053976) popup_preview_text_window_t

0xaae9,	// (0x0004eb87) scroll_pane_cp11

0x9a6e,	// (0x0004db0c) bg_popup_preview_window_pane_g1

0xa97f,	// (0x0004ea1d) bg_popup_preview_window_pane_g2

0xa987,	// (0x0004ea25) bg_popup_preview_window_pane_g3

0xa98f,	// (0x0004ea2d) bg_popup_preview_window_pane_g4

0xa997,	// (0x0004ea35) bg_popup_preview_window_pane_g5

0xa99f,	// (0x0004ea3d) bg_popup_preview_window_pane_g6

0xa9a7,	// (0x0004ea45) bg_popup_preview_window_pane_g7

0xa9af,	// (0x0004ea4d) bg_popup_preview_window_pane_g8

0x62f1,	// (0x0004a38f) aid_popup_width_pane

0x7c50,	// (0x0004bcee) popup_midp_note_alarm_window_ParamLimits

0x7c50,	// (0x0004bcee) popup_midp_note_alarm_window

0x0e75,	// (0x00044f13) data_form_pane_ParamLimits

0x58ce,	// (0x0004996c) form_field_data_pane_g1

0x58d8,	// (0x00049976) form_field_data_pane_t1_ParamLimits

0x0e81,	// (0x00044f1f) input_focus_pane_ParamLimits

0x58f0,	// (0x0004998e) data_form_wide_pane_ParamLimits

0x5901,	// (0x0004999f) form_field_data_wide_pane_g1

0x590d,	// (0x000499ab) form_field_data_wide_pane_t1_ParamLimits

0x0d75,	// (0x00044e13) input_focus_pane_cp6_ParamLimits

0x6d8d,	// (0x0004ae2b) input_popup_find_pane_g1_ParamLimits

0x6d8d,	// (0x0004ae2b) input_popup_find_pane_g1

0x6f2d,	// (0x0004afcb) aid_navi_side_left_pane

0x6f42,	// (0x0004afe0) aid_navi_side_right_pane

0xa3a8,	// (0x0004e446) bg_popup_window_pane_cp30_ParamLimits

0xa3a8,	// (0x0004e446) bg_popup_window_pane_cp30

0xa422,	// (0x0004e4c0) popup_midp_note_alarm_window_g1_ParamLimits

0xa422,	// (0x0004e4c0) popup_midp_note_alarm_window_g1

0xa452,	// (0x0004e4f0) popup_midp_note_alarm_window_t1_ParamLimits

0xa452,	// (0x0004e4f0) popup_midp_note_alarm_window_t1

0xa4f3,	// (0x0004e591) popup_midp_note_alarm_window_t2_ParamLimits

0xa4f3,	// (0x0004e591) popup_midp_note_alarm_window_t2

0xa5a1,	// (0x0004e63f) popup_midp_note_alarm_window_t3_ParamLimits

0xa5a1,	// (0x0004e63f) popup_midp_note_alarm_window_t3

0xa5c9,	// (0x0004e667) popup_midp_note_alarm_window_t4_ParamLimits

0xa5c9,	// (0x0004e667) popup_midp_note_alarm_window_t4

0xa5e9,	// (0x0004e687) popup_midp_note_alarm_window_t5_ParamLimits

0xa5e9,	// (0x0004e687) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00053913) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00053913) popup_midp_note_alarm_window_t

0xa695,	// (0x0004e733) wait_bar_pane_cp1_ParamLimits

0xa695,	// (0x0004e733) wait_bar_pane_cp1

0x0a6f,	// (0x00044b0d) wait_anim_pane_copy1

0x0a6f,	// (0x00044b0d) wait_border_pane_copy1

0xa09e,	// (0x0004e13c) wait_border_pane_g1_copy1

0x5927,	// (0x000499c5) form_field_popup_pane_g1

0x592f,	// (0x000499cd) form_field_popup_pane_t1_ParamLimits

0x0e81,	// (0x00044f1f) input_focus_pane_cp7_ParamLimits

0x0eaf,	// (0x00044f4d) list_form_pane_ParamLimits

0x5947,	// (0x000499e5) form_field_popup_wide_pane_g1

0x594f,	// (0x000499ed) form_field_popup_wide_pane_t1_ParamLimits

0x0e81,	// (0x00044f1f) input_focus_pane_cp8_ParamLimits

0x0ebb,	// (0x00044f59) list_form_wide_pane_ParamLimits

0xb129,	// (0x0004f1c7) aid_size_cell_graphic_pane

0x59d9,	// (0x00049a77) data_form_pane_t1_ParamLimits

0x5c54,	// (0x00049cf2) data_form_wide_pane_t1_ParamLimits

0x7f57,	// (0x0004bff5) bg_status_flat_pane

0x66f0,	// (0x0004a78e) title_pane_t1_ParamLimits

0x0a85,	// (0x00044b23) title_pane_t2_ParamLimits

0x0aab,	// (0x00044b49) title_pane_t3_ParamLimits

0xf532,	// (0x000535d0) title_pane_t_ParamLimits

0x1268,	// (0x00045306) level_1_signal_ParamLimits

0x1275,	// (0x00045313) level_2_signal_ParamLimits

0x1282,	// (0x00045320) level_3_signal_ParamLimits

0x128f,	// (0x0004532d) level_4_signal_ParamLimits

0x129c,	// (0x0004533a) level_5_signal_ParamLimits

0x12a9,	// (0x00045347) level_6_signal_ParamLimits

0x12b6,	// (0x00045354) level_7_signal_ParamLimits

0x1268,	// (0x00045306) level_1_battery_ParamLimits

0x1275,	// (0x00045313) level_2_battery_ParamLimits

0x1282,	// (0x00045320) level_3_battery_ParamLimits

0x128f,	// (0x0004532d) level_4_battery_ParamLimits

0x129c,	// (0x0004533a) level_5_battery_ParamLimits

0x12a9,	// (0x00045347) level_6_battery_ParamLimits

0x12b6,	// (0x00045354) level_7_battery_ParamLimits

0xa2ad,	// (0x0004e34b) bg_status_flat_pane_g1

0xa2b5,	// (0x0004e353) bg_status_flat_pane_g2

0xa2bd,	// (0x0004e35b) bg_status_flat_pane_g3

0xa2c5,	// (0x0004e363) bg_status_flat_pane_g4

0xa2cd,	// (0x0004e36b) bg_status_flat_pane_g5

0xa2d5,	// (0x0004e373) bg_status_flat_pane_g6

0xa2dd,	// (0x0004e37b) bg_status_flat_pane_g7

0x6760,	// (0x0004a7fe) tabs_3_active_pane_t1_ParamLimits

0x6760,	// (0x0004a7fe) tabs_3_passive_pane_t1_ParamLimits

0x677a,	// (0x0004a818) tabs_4_active_pane_t1_ParamLimits

0x677a,	// (0x0004a818) tabs_4_1_passive_pane_t1_ParamLimits

0x6dc4,	// (0x0004ae62) tabs_2_active_pane_t1_ParamLimits

0x6dc4,	// (0x0004ae62) tabs_2_passive_pane_t1_ParamLimits

0x6dd6,	// (0x0004ae74) bg_active_tab_pane_cp4_ParamLimits

0x6de4,	// (0x0004ae82) tabs_2_long_active_pane_t1_ParamLimits

0x6df7,	// (0x0004ae95) bg_passive_tab_pane_cp4_ParamLimits

0x8251,	// (0x0004c2ef) list_single_midp_graphic_pane_t1_ParamLimits

0x6dd6,	// (0x0004ae74) bg_active_tab_pane_cp5_ParamLimits

0x6e03,	// (0x0004aea1) tabs_3_long_active_pane_t1_ParamLimits

0x6df7,	// (0x0004ae95) bg_passive_tab_pane_cp5_ParamLimits

0x8251,	// (0x0004c2ef) list_single_midp_graphic_pane_t1

0x7f57,	// (0x0004bff5) bg_status_flat_pane_ParamLimits

0x8020,	// (0x0004c0be) indicator_pane_cp2_ParamLimits

0x8020,	// (0x0004c0be) indicator_pane_cp2

0x814b,	// (0x0004c1e9) navi_pane_srt_ParamLimits

0x814b,	// (0x0004c1e9) navi_pane_srt

0x816f,	// (0x0004c20d) popup_clock_digital_analogue_window_cp1

0x0b0f,	// (0x00044bad) indicator_pane_t1

0x173d,	// (0x000457db) copy_highlight_pane

0x173d,	// (0x000457db) cursor_graphics_pane

0x173d,	// (0x000457db) graphic_within_text_pane

0x173d,	// (0x000457db) link_highlight_pane

0xaaac,	// (0x0004eb4a) popup_preview_text_window_t5_ParamLimits

0xaaac,	// (0x0004eb4a) popup_preview_text_window_t5

0x17a5,	// (0x00045843) cursor_digital_pane

0x17a5,	// (0x00045843) cursor_primary_pane

0x17b6,	// (0x00045854) cursor_primary_small_pane

0x17be,	// (0x0004585c) cursor_secondary_pane

0x17c6,	// (0x00045864) cursor_title_pane

0x17a5,	// (0x00045843) link_highlight_digital_pane

0x17ad,	// (0x0004584b) link_highlight_primary_pane

0x17b6,	// (0x00045854) link_highlight_primary_small_pane

0x17be,	// (0x0004585c) link_highlight_secondary_pane

0x17c6,	// (0x00045864) link_highlight_title_pane

0x17a5,	// (0x00045843) copy_highlight_digital_pane

0x17a5,	// (0x00045843) copy_highlight_primary_pane

0x17b6,	// (0x00045854) copy_highlight_primary_small_pane

0x17be,	// (0x0004585c) copy_highlight_secondary_pane

0x17c6,	// (0x00045864) copy_highlight_title_pane

0x17be,	// (0x0004585c) graphic_text_digital_pane

0xa34b,	// (0x0004e3e9) graphic_text_primary_pane

0xa354,	// (0x0004e3f2) graphic_text_primary_small_pane

0x17b6,	// (0x00045854) graphic_text_secondary_pane

0x17a5,	// (0x00045843) graphic_text_title_pane

0x75d6,	// (0x0004b674) cursor_primary_pane_g1

0xa33d,	// (0x0004e3db) cursor_text_primary_t1

0xa325,	// (0x0004e3c3) cursor_primary_small_pane_g1

0xa32f,	// (0x0004e3cd) cursor_text_primary_small_t1

0xa30d,	// (0x0004e3ab) cursor_primary_small_pane_g1_copy1

0xa317,	// (0x0004e3b5) cursor_text_primary_small_t1_copy1

0xa2f5,	// (0x0004e393) cursor_text_title_t1

0xa303,	// (0x0004e3a1) cursor_title_pane_g1

0x75d6,	// (0x0004b674) cursor_digital_pane_g1

0x17ce,	// (0x0004586c) cursor_text_digital_t1

0x17dc,	// (0x0004587a) link_highlight_primary_pane_g1

0xa29e,	// (0x0004e33c) link_highlight_primary_pane_t1

0x17dc,	// (0x0004587a) link_highlight_primary_small_pane_g1

0x17e4,	// (0x00045882) link_highlight_primary_small_pane_t1

0x17dc,	// (0x0004587a) link_highlight_secondary_pane_g1

0x17f3,	// (0x00045891) link_highlight_secondary_pane_t1

0xa203,	// (0x0004e2a1) link_highlight_title_pane_g1

0xa21a,	// (0x0004e2b8) link_highlight_title_pane_t1

0xa203,	// (0x0004e2a1) link_highlight_digital_pane_g1

0xa20b,	// (0x0004e2a9) link_highlight_digital_pane_t1

0xa0bd,	// (0x0004e15b) copy_highlight_primary_pane_g1

0xa0e3,	// (0x0004e181) copy_highlight_primary_pane_t1

0xa0bd,	// (0x0004e15b) copy_highlight_primary_small_pane_g1

0xa0d4,	// (0x0004e172) copy_highlight_primary_small_pane_t1

0x1802,	// (0x000458a0) copy_highlight_secondary_pane_g1

0x180a,	// (0x000458a8) copy_highlight_secondary_pane_t1

0xa0bd,	// (0x0004e15b) copy_highlight_title_pane_g1

0xa0c5,	// (0x0004e163) copy_highlight_title_pane_t1

0xa0bd,	// (0x0004e15b) copy_highlight_digital_pane_g1

0xb2f7,	// (0x0004f395) copy_highlight_digital_pane_t1

0xb24b,	// (0x0004f2e9) graphic_text_primary_pane_g1

0xb2db,	// (0x0004f379) graphic_text_primary_pane_t1

0xb2e9,	// (0x0004f387) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00053a42) graphic_text_primary_pane_t

0xb2b7,	// (0x0004f355) graphic_text_primary_small_pane_g1

0xb2bf,	// (0x0004f35d) graphic_text_primary_small_pane_t1

0xb2cd,	// (0x0004f36b) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x00053a3d) graphic_text_primary_small_pane_t

0xb293,	// (0x0004f331) graphic_text_secondary_pane_g1

0xb29b,	// (0x0004f339) graphic_text_secondary_pane_t1

0xb2a9,	// (0x0004f347) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x00053a38) graphic_text_secondary_pane_t

0xb26f,	// (0x0004f30d) graphic_text_title_pane_g1

0xb277,	// (0x0004f315) graphic_text_title_pane_t1

0xb285,	// (0x0004f323) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00053a33) graphic_text_title_pane_t

0xb24b,	// (0x0004f2e9) graphic_text_digital_pane_g1

0xb253,	// (0x0004f2f1) graphic_text_digital_pane_t1

0xb261,	// (0x0004f2ff) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00053a2e) graphic_text_digital_pane_t

0x0acb,	// (0x00044b69) navi_icon_pane_srt_ParamLimits

0x0acb,	// (0x00044b69) navi_icon_pane_srt

0x0a6f,	// (0x00044b0d) navi_midp_pane_srt

0x0a6f,	// (0x00044b0d) navi_navi_pane_srt

0x0acb,	// (0x00044b69) navi_text_pane_srt_ParamLimits

0x0acb,	// (0x00044b69) navi_text_pane_srt

0xb216,	// (0x0004f2b4) navi_navi_icon_text_pane_srt

0xb21e,	// (0x0004f2bc) navi_navi_pane_srt_g1_ParamLimits

0xb21e,	// (0x0004f2bc) navi_navi_pane_srt_g1

0xb230,	// (0x0004f2ce) navi_navi_pane_srt_g2_ParamLimits

0xb230,	// (0x0004f2ce) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x00053a29) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x00053a29) navi_navi_pane_srt_g

0xb242,	// (0x0004f2e0) navi_navi_tabs_pane_srt

0xb216,	// (0x0004f2b4) navi_navi_text_pane_srt

0xb216,	// (0x0004f2b4) navi_navi_volume_pane_srt

0xb207,	// (0x0004f2a5) navi_navi_text_pane_srt_t1

0x867c,	// (0x0004c71a) navi_navi_volume_pane_srt_g1

0x8684,	// (0x0004c722) volume_small_pane_srt_ParamLimits

0x8684,	// (0x0004c722) volume_small_pane_srt

0x75e0,	// (0x0004b67e) volume_small_pane_srt_g1_ParamLimits

0x75e0,	// (0x0004b67e) volume_small_pane_srt_g1

0x75f0,	// (0x0004b68e) volume_small_pane_srt_g2_ParamLimits

0x75f0,	// (0x0004b68e) volume_small_pane_srt_g2

0x7601,	// (0x0004b69f) volume_small_pane_srt_g3_ParamLimits

0x7601,	// (0x0004b69f) volume_small_pane_srt_g3

0x7612,	// (0x0004b6b0) volume_small_pane_srt_g4_ParamLimits

0x7612,	// (0x0004b6b0) volume_small_pane_srt_g4

0x7623,	// (0x0004b6c1) volume_small_pane_srt_g5_ParamLimits

0x7623,	// (0x0004b6c1) volume_small_pane_srt_g5

0x7634,	// (0x0004b6d2) volume_small_pane_srt_g6_ParamLimits

0x7634,	// (0x0004b6d2) volume_small_pane_srt_g6

0x7645,	// (0x0004b6e3) volume_small_pane_srt_g7_ParamLimits

0x7645,	// (0x0004b6e3) volume_small_pane_srt_g7

0x7656,	// (0x0004b6f4) volume_small_pane_srt_g8_ParamLimits

0x7656,	// (0x0004b6f4) volume_small_pane_srt_g8

0x7667,	// (0x0004b705) volume_small_pane_srt_g9_ParamLimits

0x7667,	// (0x0004b705) volume_small_pane_srt_g9

0x7678,	// (0x0004b716) volume_small_pane_srt_g10_ParamLimits

0x7678,	// (0x0004b716) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x000537d1) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x000537d1) volume_small_pane_srt_g

0x69c7,	// (0x0004aa65) query_popup_data_pane_cp2

0xb1ed,	// (0x0004f28b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1ed,	// (0x0004f28b) navi_navi_icon_text_pane_srt_t1

0xa34b,	// (0x0004e3e9) navi_tabs_2_long_pane_srt

0xa34b,	// (0x0004e3e9) navi_tabs_2_pane_srt

0xa34b,	// (0x0004e3e9) navi_tabs_3_long_pane_srt

0xa34b,	// (0x0004e3e9) navi_tabs_3_pane_srt

0xa34b,	// (0x0004e3e9) navi_tabs_4_pane_srt

0x865c,	// (0x0004c6fa) tabs_2_active_pane_srt_ParamLimits

0x865c,	// (0x0004c6fa) tabs_2_active_pane_srt

0x866c,	// (0x0004c70a) tabs_2_passive_pane_srt_ParamLimits

0x866c,	// (0x0004c70a) tabs_2_passive_pane_srt

0x0fc3,	// (0x00045061) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0fc3,	// (0x00045061) bg_passive_tab_pane_cp1_srt

0xb1b9,	// (0x0004f257) bg_passive_tab_pane_g1_cp1_srt

0x72d4,	// (0x0004b372) bg_passive_tab_pane_g2_cp1_srt

0xb1c2,	// (0x0004f260) bg_passive_tab_pane_g3_cp1_srt

0x0acb,	// (0x00044b69) bg_active_tab_pane_cp1_srt_ParamLimits

0x0acb,	// (0x00044b69) bg_active_tab_pane_cp1_srt

0xb1cb,	// (0x0004f269) tabs_2_active_pane_srt_g1

0xb1d3,	// (0x0004f271) tabs_2_active_pane_srt_t1_ParamLimits

0xb1d3,	// (0x0004f271) tabs_2_active_pane_srt_t1

0xb1b9,	// (0x0004f257) bg_active_tab_pane_g1_cp1_srt

0x72d4,	// (0x0004b372) bg_active_tab_pane_g2_cp1_srt

0xb1c2,	// (0x0004f260) bg_active_tab_pane_g3_cp1_srt

0x8629,	// (0x0004c6c7) tabs_3_active_pane_srt_ParamLimits

0x8629,	// (0x0004c6c7) tabs_3_active_pane_srt

0x863a,	// (0x0004c6d8) tabs_3_passive_pane_cp_srt_ParamLimits

0x863a,	// (0x0004c6d8) tabs_3_passive_pane_cp_srt

0x864b,	// (0x0004c6e9) tabs_3_passive_pane_srt_ParamLimits

0x864b,	// (0x0004c6e9) tabs_3_passive_pane_srt

0x0fc3,	// (0x00045061) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0fc3,	// (0x00045061) bg_passive_tab_pane_cp2_srt

0x7689,	// (0x0004b727) bg_passive_tab_pane_g1_cp2_srt

0x72d4,	// (0x0004b372) bg_passive_tab_pane_g2_cp2_srt

0x7692,	// (0x0004b730) bg_passive_tab_pane_g3_cp2_srt

0x0acb,	// (0x00044b69) bg_active_tab_pane_cp2_srt_ParamLimits

0x0acb,	// (0x00044b69) bg_active_tab_pane_cp2_srt

0xb19f,	// (0x0004f23d) tabs_3_active_pane_srt_g1

0xb1a7,	// (0x0004f245) tabs_3_active_pane_srt_t1_ParamLimits

0xb1a7,	// (0x0004f245) tabs_3_active_pane_srt_t1

0x7689,	// (0x0004b727) bg_active_tab_pane_g1_cp2_srt

0x72d4,	// (0x0004b372) bg_active_tab_pane_g2_cp2_srt

0x7692,	// (0x0004b730) bg_active_tab_pane_g3_cp2_srt

0x85e1,	// (0x0004c67f) tabs_4_active_pane_srt_ParamLimits

0x85e1,	// (0x0004c67f) tabs_4_active_pane_srt

0x85f3,	// (0x0004c691) tabs_4_passive_pane_cp2_srt_ParamLimits

0x85f3,	// (0x0004c691) tabs_4_passive_pane_cp2_srt

0x78cb,	// (0x0004b969) aid_size_cell_toolbar

0x6df7,	// (0x0004ae95) main_idle_act_pane_ParamLimits

0x7a82,	// (0x0004bb20) popup_large_graphic_colour_window_ParamLimits

0x7ded,	// (0x0004be8b) popup_toolbar_window_ParamLimits

0x7ded,	// (0x0004be8b) popup_toolbar_window

0xaffd,	// (0x0004f09b) list_single_graphic_2heading_pane_ParamLimits

0xaffd,	// (0x0004f09b) list_single_graphic_2heading_pane

0x1150,	// (0x000451ee) aid_size_cell_apps_grid_lsc_pane

0x1162,	// (0x00045200) aid_size_cell_apps_grid_prt_pane

0x0fc3,	// (0x00045061) bg_wml_button_pane_cp1_ParamLimits

0x0fc3,	// (0x00045061) bg_wml_button_pane_cp1

0x9d30,	// (0x0004ddce) form_midp_field_text_pane_t1_ParamLimits

0x9afa,	// (0x0004db98) input_focus_pane_cp050_ParamLimits

0x9d6a,	// (0x0004de08) list_midp_form_text_pane_ParamLimits

0x9d0d,	// (0x0004ddab) input_focus_pane_cp051_ParamLimits

0x9d21,	// (0x0004ddbf) list_midp_choice_pane_ParamLimits

0x9bb0,	// (0x0004dc4e) list_single_2graphic_pane_cp3_ParamLimits

0x9bb0,	// (0x0004dc4e) list_single_2graphic_pane_cp3

0x9bd5,	// (0x0004dc73) list_single_midp_graphic_pane_ParamLimits

0x9bd5,	// (0x0004dc73) list_single_midp_graphic_pane

0x5ae7,	// (0x00049b85) list_single_graphic_2heading_pane_g1_ParamLimits

0x5ae7,	// (0x00049b85) list_single_graphic_2heading_pane_g1

0x5af3,	// (0x00049b91) list_single_graphic_2heading_pane_g4_ParamLimits

0x5af3,	// (0x00049b91) list_single_graphic_2heading_pane_g4

0x5aff,	// (0x00049b9d) list_single_graphic_2heading_pane_g5_ParamLimits

0x5aff,	// (0x00049b9d) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x00053824) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x00053824) list_single_graphic_2heading_pane_g

0x5b0b,	// (0x00049ba9) list_single_graphic_2heading_pane_t1_ParamLimits

0x5b0b,	// (0x00049ba9) list_single_graphic_2heading_pane_t1

0x5b1f,	// (0x00049bbd) list_single_graphic_2heading_pane_t2_ParamLimits

0x5b1f,	// (0x00049bbd) list_single_graphic_2heading_pane_t2

0x5b39,	// (0x00049bd7) list_single_graphic_2heading_pane_t3_ParamLimits

0x5b39,	// (0x00049bd7) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0005382b) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0005382b) list_single_graphic_2heading_pane_t

0x99ac,	// (0x0004da4a) bg_popup_sub_pane_cp2

0x99d6,	// (0x0004da74) grid_toobar_pane

0x81c8,	// (0x0004c266) cell_toolbar_pane_ParamLimits

0x81c8,	// (0x0004c266) cell_toolbar_pane

0x9a12,	// (0x0004dab0) cell_toolbar_pane_g1_ParamLimits

0x9a12,	// (0x0004dab0) cell_toolbar_pane_g1

0x9a26,	// (0x0004dac4) cell_toolbar_pane_g2_ParamLimits

0x9a26,	// (0x0004dac4) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x00053839) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x00053839) cell_toolbar_pane_g

0x9a48,	// (0x0004dae6) grid_highlight_pane_cp2_ParamLimits

0x9a48,	// (0x0004dae6) grid_highlight_pane_cp2

0x9a62,	// (0x0004db00) toolbar_button_pane

0x9a6e,	// (0x0004db0c) toolbar_button_pane_g1

0x9a76,	// (0x0004db14) toolbar_button_pane_g2

0x9a7e,	// (0x0004db1c) toolbar_button_pane_g3

0x9a86,	// (0x0004db24) toolbar_button_pane_g4

0x9a8e,	// (0x0004db2c) toolbar_button_pane_g5

0x9a96,	// (0x0004db34) toolbar_button_pane_g6

0x9a9e,	// (0x0004db3c) toolbar_button_pane_g7

0x9aa6,	// (0x0004db44) toolbar_button_pane_g8

0x9aae,	// (0x0004db4c) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x0005383e) toolbar_button_pane_g

0x820c,	// (0x0004c2aa) list_single_2graphic_pane_g1_cp3_ParamLimits

0x820c,	// (0x0004c2aa) list_single_2graphic_pane_g1_cp3

0x8218,	// (0x0004c2b6) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8218,	// (0x0004c2b6) list_single_2graphic_pane_g2_cp3

0x1592,	// (0x00045630) list_single_2graphic_pane_g3_cp3

0x8229,	// (0x0004c2c7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8229,	// (0x0004c2c7) list_single_2graphic_pane_g4_cp3

0x8235,	// (0x0004c2d3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8235,	// (0x0004c2d3) list_single_2graphic_pane_t1_cp3

0x1586,	// (0x00045624) list_single_midp_graphic_pane_g2_ParamLimits

0x1586,	// (0x00045624) list_single_midp_graphic_pane_g2

0x5ad7,	// (0x00049b75) aid_zoom_text_primary

0x78d3,	// (0x0004b971) aid_zoom_text_secondary

0x76e9,	// (0x0004b787) status_small_pane_g7_ParamLimits

0x76e9,	// (0x0004b787) status_small_pane_g7

0x770c,	// (0x0004b7aa) status_small_pane_t1_ParamLimits

0x66d3,	// (0x0004a771) title_pane_g2

0x0003,

0xf529,	// (0x000535c7) title_pane_g

0x6a21,	// (0x0004aabf) aid_size_cell_colour_1_pane_ParamLimits

0x6a21,	// (0x0004aabf) aid_size_cell_colour_1_pane

0x6a35,	// (0x0004aad3) aid_size_cell_colour_2_pane_ParamLimits

0x6a35,	// (0x0004aad3) aid_size_cell_colour_2_pane

0x6a49,	// (0x0004aae7) aid_size_cell_colour_3_pane_ParamLimits

0x6a49,	// (0x0004aae7) aid_size_cell_colour_3_pane

0x6a5d,	// (0x0004aafb) aid_size_cell_colour_4_pane_ParamLimits

0x6a5d,	// (0x0004aafb) aid_size_cell_colour_4_pane

0x6e6a,	// (0x0004af08) title_pane_stacon_g1_ParamLimits

0x6e6a,	// (0x0004af08) title_pane_stacon_g1

0xa13a,	// (0x0004e1d8) popup_note_wait_window_g3_ParamLimits

0xa13a,	// (0x0004e1d8) popup_note_wait_window_g3

0xa1b0,	// (0x0004e24e) popup_note_wait_window_t5_ParamLimits

0xa1b0,	// (0x0004e24e) popup_note_wait_window_t5

0x0a6f,	// (0x00044b0d) main_feb_china_hwr_fs_writing_pane

0x7969,	// (0x0004ba07) popup_feb_china_hwr_fs_window_ParamLimits

0x7969,	// (0x0004ba07) popup_feb_china_hwr_fs_window

0x8267,	// (0x0004c305) aid_size_cell_hwr_fs_ParamLimits

0x8267,	// (0x0004c305) aid_size_cell_hwr_fs

0x9afa,	// (0x0004db98) bg_popup_sub_pane_cp3_ParamLimits

0x9afa,	// (0x0004db98) bg_popup_sub_pane_cp3

0x827c,	// (0x0004c31a) grid_hwr_fs_pane_ParamLimits

0x827c,	// (0x0004c31a) grid_hwr_fs_pane

0x8294,	// (0x0004c332) linegrid_hwr_fs_pane_ParamLimits

0x8294,	// (0x0004c332) linegrid_hwr_fs_pane

0x82a4,	// (0x0004c342) cell_hwr_fs_pane_ParamLimits

0x82a4,	// (0x0004c342) cell_hwr_fs_pane

0x9b06,	// (0x0004dba4) linegrid_hwr_fs_pane_g1_ParamLimits

0x9b06,	// (0x0004dba4) linegrid_hwr_fs_pane_g1

0x9b12,	// (0x0004dbb0) linegrid_hwr_fs_pane_g2_ParamLimits

0x9b12,	// (0x0004dbb0) linegrid_hwr_fs_pane_g2

0x9b24,	// (0x0004dbc2) linegrid_hwr_fs_pane_g3_ParamLimits

0x9b24,	// (0x0004dbc2) linegrid_hwr_fs_pane_g3

0x82c6,	// (0x0004c364) linegrid_hwr_fs_pane_g4_ParamLimits

0x82c6,	// (0x0004c364) linegrid_hwr_fs_pane_g4

0x82e0,	// (0x0004c37e) linegrid_hwr_fs_pane_g5_ParamLimits

0x82e0,	// (0x0004c37e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x00053869) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x00053869) linegrid_hwr_fs_pane_g

0x9b30,	// (0x0004dbce) cell_hwr_fs_pane_g1_ParamLimits

0x9b30,	// (0x0004dbce) cell_hwr_fs_pane_g1

0x98e6,	// (0x0004d984) cell_hwr_fs_pane_g2_ParamLimits

0x98e6,	// (0x0004d984) cell_hwr_fs_pane_g2

0x9b46,	// (0x0004dbe4) cell_hwr_fs_pane_g3_ParamLimits

0x9b46,	// (0x0004dbe4) cell_hwr_fs_pane_g3

0x9b53,	// (0x0004dbf1) cell_hwr_fs_pane_g4_ParamLimits

0x9b53,	// (0x0004dbf1) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x00053874) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x00053874) cell_hwr_fs_pane_g

0x82f6,	// (0x0004c394) cell_hwr_fs_pane_t1

0x0a6f,	// (0x00044b0d) grid_highlight_pane_cp6

0x0a6f,	// (0x00044b0d) main_idle_act2_pane

0x0f9a,	// (0x00045038) aid_inside_area_popup_secondary

0xa7cf,	// (0x0004e86d) aid_inside_area_window_primary_ParamLimits

0xa7cf,	// (0x0004e86d) aid_inside_area_window_primary

0xb306,	// (0x0004f3a4) ai2_news_ticker_pane

0xb30e,	// (0x0004f3ac) aid_size_cell_ai1_link_ParamLimits

0xb30e,	// (0x0004f3ac) aid_size_cell_ai1_link

0xb328,	// (0x0004f3c6) popup_ai2_data_window_ParamLimits

0xb328,	// (0x0004f3c6) popup_ai2_data_window

0xb33e,	// (0x0004f3dc) popup_ai2_link_window_ParamLimits

0xb33e,	// (0x0004f3dc) popup_ai2_link_window

0x9afa,	// (0x0004db98) bg_popup_sub_pane_cp4_ParamLimits

0x9afa,	// (0x0004db98) bg_popup_sub_pane_cp4

0xb352,	// (0x0004f3f0) grid_ai2_link_pane_ParamLimits

0xb352,	// (0x0004f3f0) grid_ai2_link_pane

0xb369,	// (0x0004f407) popup_ai2_link_window_g1_ParamLimits

0xb369,	// (0x0004f407) popup_ai2_link_window_g1

0xb375,	// (0x0004f413) popup_ai2_link_window_g2_ParamLimits

0xb375,	// (0x0004f413) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00053a47) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00053a47) popup_ai2_link_window_g

0xb384,	// (0x0004f422) ai2_mp_button_pane

0xb38c,	// (0x0004f42a) ai2_mp_volume_pane

0x9d0d,	// (0x0004ddab) bg_popup_sub_pane_cp5_ParamLimits

0x9d0d,	// (0x0004ddab) bg_popup_sub_pane_cp5

0xb394,	// (0x0004f432) heading_ai2_gene_pane_ParamLimits

0xb394,	// (0x0004f432) heading_ai2_gene_pane

0xb3a0,	// (0x0004f43e) list_ai2_gene_pane_ParamLimits

0xb3a0,	// (0x0004f43e) list_ai2_gene_pane

0xb3e8,	// (0x0004f486) cell_ai2_link_pane_ParamLimits

0xb3e8,	// (0x0004f486) cell_ai2_link_pane

0xb3fe,	// (0x0004f49c) cell_ai2_link_pane_g1

0x0a6f,	// (0x00044b0d) grid_highlight_pane_cp7

0x8699,	// (0x0004c737) ai2_mp_volume_pane_g1

0xb4ce,	// (0x0004f56c) ai2_mp_volume_pane_g2

0xb443,	// (0x0004f4e1) list_ai2_gene_pane_t1

0xb4d6,	// (0x0004f574) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x00053a60) ai2_mp_volume_pane_g

0x86a1,	// (0x0004c73f) volume_small_pane_cp3

0xb4de,	// (0x0004f57c) aid_size_cell_ai2_button

0xb4e6,	// (0x0004f584) grid_ai2_button_pane

0xb4ef,	// (0x0004f58d) cell_ai2_button_pane_ParamLimits

0xb4ef,	// (0x0004f58d) cell_ai2_button_pane

0x0a65,	// (0x00044b03) cell_ai2_button_pane_g1

0x0a6f,	// (0x00044b0d) grid_highlight_pane_cp8

0xb48e,	// (0x0004f52c) ai2_gene_pane_t1_ParamLimits

0xb48e,	// (0x0004f52c) ai2_gene_pane_t1

0x78c1,	// (0x0004b95f) aid_height_parent_landscape

0xae38,	// (0x0004eed6) aid_height_set_list

0xae49,	// (0x0004eee7) aid_size_parent

0xb129,	// (0x0004f1c7) aid_size_cell_graphic_pane_ParamLimits

0xb3b0,	// (0x0004f44e) popup_ai2_data_window_g1_ParamLimits

0xb3b0,	// (0x0004f44e) popup_ai2_data_window_g1

0xb3bc,	// (0x0004f45a) ai2_news_ticker_pane_g1

0xb3c4,	// (0x0004f462) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00053a4c) ai2_news_ticker_pane_g

0xb3cc,	// (0x0004f46a) ai2_news_ticker_pane_t1

0xb3da,	// (0x0004f478) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x00053a51) ai2_news_ticker_pane_t

0xb407,	// (0x0004f4a5) heading_ai2_gene_pane_g1

0xb40f,	// (0x0004f4ad) heading_ai2_gene_pane_t1_ParamLimits

0xb40f,	// (0x0004f4ad) heading_ai2_gene_pane_t1

0xb424,	// (0x0004f4c2) list_highlight_pane_cp6

0xb42c,	// (0x0004f4ca) ai2_gene_pane_ParamLimits

0xb42c,	// (0x0004f4ca) ai2_gene_pane

0xb451,	// (0x0004f4ef) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x00053a56) list_ai2_gene_pane_t

0xb45f,	// (0x0004f4fd) list_highlight_pane_cp8_ParamLimits

0xb45f,	// (0x0004f4fd) list_highlight_pane_cp8

0xb470,	// (0x0004f50e) ai2_gene_pane_g1_ParamLimits

0xb470,	// (0x0004f50e) ai2_gene_pane_g1

0xb482,	// (0x0004f520) ai2_gene_pane_g2_ParamLimits

0xb482,	// (0x0004f520) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x00053a5b) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x00053a5b) ai2_gene_pane_g

0x0e20,	// (0x00044ebe) scroll_pane_cp12

0x787e,	// (0x0004b91c) control_pane_t3_ParamLimits

0x787e,	// (0x0004b91c) control_pane_t3

0x76fd,	// (0x0004b79b) status_small_pane_g8_ParamLimits

0x76fd,	// (0x0004b79b) status_small_pane_g8

0x7a4b,	// (0x0004bae9) popup_find_window_ParamLimits

0x7c64,	// (0x0004bd02) popup_note_image_window_ParamLimits

0x5b51,	// (0x00049bef) list_double2_graphic_pane_vc_g1_ParamLimits

0x5b51,	// (0x00049bef) list_double2_graphic_pane_vc_g1

0x169c,	// (0x0004573a) list_double2_graphic_pane_vc_g2_ParamLimits

0x169c,	// (0x0004573a) list_double2_graphic_pane_vc_g2

0x81f8,	// (0x0004c296) list_double2_graphic_pane_vc_g3_ParamLimits

0x81f8,	// (0x0004c296) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x00053832) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x00053832) list_double2_graphic_pane_vc_g

0x5b5d,	// (0x00049bfb) list_double2_graphic_pane_vc_t1_ParamLimits

0x5b5d,	// (0x00049bfb) list_double2_graphic_pane_vc_t1

0x169c,	// (0x0004573a) list_single_heading_pane_vc_g1_ParamLimits

0x169c,	// (0x0004573a) list_single_heading_pane_vc_g1

0x81f8,	// (0x0004c296) list_single_heading_pane_vc_g2_ParamLimits

0x81f8,	// (0x0004c296) list_single_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00053853) list_single_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00053853) list_single_heading_pane_vc_g

0x5b73,	// (0x00049c11) list_single_heading_pane_vc_t1_ParamLimits

0x5b73,	// (0x00049c11) list_single_heading_pane_vc_t1

0x5b89,	// (0x00049c27) list_single_heading_pane_vc_t2_ParamLimits

0x5b89,	// (0x00049c27) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x00053858) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x00053858) list_single_heading_pane_vc_t

0x9ab6,	// (0x0004db54) list_setting_number_pane_vc_g1_ParamLimits

0x9ab6,	// (0x0004db54) list_setting_number_pane_vc_g1

0x9ac2,	// (0x0004db60) list_setting_number_pane_vc_g2_ParamLimits

0x9ac2,	// (0x0004db60) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0005385d) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0005385d) list_setting_number_pane_vc_g

0x5b9b,	// (0x00049c39) list_setting_number_pane_vc_t1_ParamLimits

0x5b9b,	// (0x00049c39) list_setting_number_pane_vc_t1

0x5baf,	// (0x00049c4d) list_setting_number_pane_vc_t2_ParamLimits

0x5baf,	// (0x00049c4d) list_setting_number_pane_vc_t2

0x5bcb,	// (0x00049c69) list_setting_number_pane_vc_t3_ParamLimits

0x5bcb,	// (0x00049c69) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x00053862) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x00053862) list_setting_number_pane_vc_t

0x5bf5,	// (0x00049c93) set_value_pane_vc_ParamLimits

0x5bf5,	// (0x00049c93) set_value_pane_vc

0xaffd,	// (0x0004f09b) list_double2_graphic_pane_vc_ParamLimits

0xaffd,	// (0x0004f09b) list_double2_graphic_pane_vc

0x8552,	// (0x0004c5f0) list_double2_large_graphic_pane_vc_ParamLimits

0x8552,	// (0x0004c5f0) list_double2_large_graphic_pane_vc

0xaffd,	// (0x0004f09b) list_double2_pane_vc_ParamLimits

0xaffd,	// (0x0004f09b) list_double2_pane_vc

0xaffd,	// (0x0004f09b) list_double_graphic_heading_pane_vc_ParamLimits

0xaffd,	// (0x0004f09b) list_double_graphic_heading_pane_vc

0xaffd,	// (0x0004f09b) list_double_graphic_pane_vc_ParamLimits

0xaffd,	// (0x0004f09b) list_double_graphic_pane_vc

0xaffd,	// (0x0004f09b) list_double_heading_pane_vc_ParamLimits

0xaffd,	// (0x0004f09b) list_double_heading_pane_vc

0x8564,	// (0x0004c602) list_double_large_graphic_pane_vc_ParamLimits

0x8564,	// (0x0004c602) list_double_large_graphic_pane_vc

0xaffd,	// (0x0004f09b) list_double_number_pane_vc_ParamLimits

0xaffd,	// (0x0004f09b) list_double_number_pane_vc

0xaffd,	// (0x0004f09b) list_double_pane_vc_ParamLimits

0xaffd,	// (0x0004f09b) list_double_pane_vc

0xaffd,	// (0x0004f09b) list_double_time_pane_vc_ParamLimits

0xaffd,	// (0x0004f09b) list_double_time_pane_vc

0xaffd,	// (0x0004f09b) list_setting_number_pane_vc_ParamLimits

0xaffd,	// (0x0004f09b) list_setting_number_pane_vc

0xaffd,	// (0x0004f09b) list_setting_pane_vc_ParamLimits

0xaffd,	// (0x0004f09b) list_setting_pane_vc

0xaffd,	// (0x0004f09b) list_single_graphic_heading_pane_vc_ParamLimits

0xaffd,	// (0x0004f09b) list_single_graphic_heading_pane_vc

0xaffd,	// (0x0004f09b) list_single_heading_pane_vc_ParamLimits

0xaffd,	// (0x0004f09b) list_single_heading_pane_vc

0x8582,	// (0x0004c620) list_single_number_heading_pane_vc_ParamLimits

0x8582,	// (0x0004c620) list_single_number_heading_pane_vc

0x5d10,	// (0x00049dae) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5d10,	// (0x00049dae) list_double_graphic_heading_pane_vc_g1

0x169c,	// (0x0004573a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x169c,	// (0x0004573a) list_double_graphic_heading_pane_vc_g2

0x81f8,	// (0x0004c296) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x81f8,	// (0x0004c296) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x00053a67) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x00053a67) list_double_graphic_heading_pane_vc_g

0x5d1c,	// (0x00049dba) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5d1c,	// (0x00049dba) list_double_graphic_heading_pane_vc_t1

0x5d30,	// (0x00049dce) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5d30,	// (0x00049dce) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x00053a6e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x00053a6e) list_double_graphic_heading_pane_vc_t

0x9ab6,	// (0x0004db54) list_setting_pane_vc_g1_ParamLimits

0x9ab6,	// (0x0004db54) list_setting_pane_vc_g1

0x9ac2,	// (0x0004db60) list_setting_pane_vc_g2_ParamLimits

0x9ac2,	// (0x0004db60) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0005385d) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0005385d) list_setting_pane_vc_g

0x5d48,	// (0x00049de6) list_setting_pane_vc_t1_ParamLimits

0x5d48,	// (0x00049de6) list_setting_pane_vc_t1

0x5d64,	// (0x00049e02) list_setting_pane_vc_t2_ParamLimits

0x5d64,	// (0x00049e02) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x00053ab1) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x00053ab1) list_setting_pane_vc_t

0x5bf5,	// (0x00049c93) set_value_pane_cp_vc_ParamLimits

0x5bf5,	// (0x00049c93) set_value_pane_cp_vc

0x169c,	// (0x0004573a) list_single_number_heading_pane_vc_g1_ParamLimits

0x169c,	// (0x0004573a) list_single_number_heading_pane_vc_g1

0x81f8,	// (0x0004c296) list_single_number_heading_pane_vc_g2_ParamLimits

0x81f8,	// (0x0004c296) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00053853) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00053853) list_single_number_heading_pane_vc_g

0x5d7e,	// (0x00049e1c) list_single_number_heading_pane_vc_t1_ParamLimits

0x5d7e,	// (0x00049e1c) list_single_number_heading_pane_vc_t1

0x5d94,	// (0x00049e32) list_single_number_heading_pane_vc_t2_ParamLimits

0x5d94,	// (0x00049e32) list_single_number_heading_pane_vc_t2

0x5da6,	// (0x00049e44) list_single_number_heading_pane_vc_t3_ParamLimits

0x5da6,	// (0x00049e44) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x00053ab6) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x00053ab6) list_single_number_heading_pane_vc_t

0x5db8,	// (0x00049e56) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5db8,	// (0x00049e56) list_single_graphic_heading_pane_vc_g1

0x169c,	// (0x0004573a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x169c,	// (0x0004573a) list_single_graphic_heading_pane_vc_g4

0x81f8,	// (0x0004c296) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x81f8,	// (0x0004c296) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa1f,	// (0x00053abd) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa1f,	// (0x00053abd) list_single_graphic_heading_pane_vc_g

0x5b73,	// (0x00049c11) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5b73,	// (0x00049c11) list_single_graphic_heading_pane_vc_t1

0x5dc4,	// (0x00049e62) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5dc4,	// (0x00049e62) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa26,	// (0x00053ac4) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x00053ac4) list_single_graphic_heading_pane_vc_t

0x169c,	// (0x0004573a) list_double2_pane_vc_g1_ParamLimits

0x169c,	// (0x0004573a) list_double2_pane_vc_g1

0x81f8,	// (0x0004c296) list_double2_pane_vc_g2_ParamLimits

0x81f8,	// (0x0004c296) list_double2_pane_vc_g2

0x0001,

0xf7b5,	// (0x00053853) list_double2_pane_vc_g_ParamLimits

0xf7b5,	// (0x00053853) list_double2_pane_vc_g

0x5dd6,	// (0x00049e74) list_double2_pane_vc_t1_ParamLimits

0x5dd6,	// (0x00049e74) list_double2_pane_vc_t1

0x86fb,	// (0x0004c799) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x86fb,	// (0x0004c799) list_double2_large_graphic_pane_vc_g1

0x6ce4,	// (0x0004ad82) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6ce4,	// (0x0004ad82) list_double2_large_graphic_pane_vc_g2

0x6cf0,	// (0x0004ad8e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6cf0,	// (0x0004ad8e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2b,	// (0x00053ac9) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x00053ac9) list_double2_large_graphic_pane_vc_g

0x5dee,	// (0x00049e8c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5dee,	// (0x00049e8c) list_double2_large_graphic_pane_vc_t1

0x8707,	// (0x0004c7a5) list_double_time_pane_vc_g1_ParamLimits

0x8707,	// (0x0004c7a5) list_double_time_pane_vc_g1

0x8713,	// (0x0004c7b1) list_double_time_pane_vc_g2_ParamLimits

0x8713,	// (0x0004c7b1) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x00053ad0) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x00053ad0) list_double_time_pane_vc_g

0x5e04,	// (0x00049ea2) list_double_time_pane_vc_t1_ParamLimits

0x5e04,	// (0x00049ea2) list_double_time_pane_vc_t1

0x5e28,	// (0x00049ec6) list_double_time_pane_vc_t2_ParamLimits

0x5e28,	// (0x00049ec6) list_double_time_pane_vc_t2

0x5e77,	// (0x00049f15) list_double_time_pane_vc_t3_ParamLimits

0x5e77,	// (0x00049f15) list_double_time_pane_vc_t3

0x5e89,	// (0x00049f27) list_double_time_pane_vc_t4_ParamLimits

0x5e89,	// (0x00049f27) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x00053ad5) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x00053ad5) list_double_time_pane_vc_t

0x169c,	// (0x0004573a) list_double_pane_vc_g1_ParamLimits

0x169c,	// (0x0004573a) list_double_pane_vc_g1

0x81f8,	// (0x0004c296) list_double_pane_vc_g2_ParamLimits

0x81f8,	// (0x0004c296) list_double_pane_vc_g2

0x0001,

0xf7b5,	// (0x00053853) list_double_pane_vc_g_ParamLimits

0xf7b5,	// (0x00053853) list_double_pane_vc_g

0x5e9d,	// (0x00049f3b) list_double_pane_vc_t1_ParamLimits

0x5e9d,	// (0x00049f3b) list_double_pane_vc_t1

0x5eb1,	// (0x00049f4f) list_double_pane_vc_t2_ParamLimits

0x5eb1,	// (0x00049f4f) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x00053ade) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x00053ade) list_double_pane_vc_t

0x169c,	// (0x0004573a) list_double_number_pane_vc_g1_ParamLimits

0x169c,	// (0x0004573a) list_double_number_pane_vc_g1

0x81f8,	// (0x0004c296) list_double_number_pane_vc_g2_ParamLimits

0x81f8,	// (0x0004c296) list_double_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x00053853) list_double_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x00053853) list_double_number_pane_vc_g

0x5ec9,	// (0x00049f67) list_double_number_pane_vc_t1_ParamLimits

0x5ec9,	// (0x00049f67) list_double_number_pane_vc_t1

0x5e9d,	// (0x00049f3b) list_double_number_pane_vc_t2_ParamLimits

0x5e9d,	// (0x00049f3b) list_double_number_pane_vc_t2

0x5edb,	// (0x00049f79) list_double_number_pane_vc_t3_ParamLimits

0x5edb,	// (0x00049f79) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x00053ae3) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x00053ae3) list_double_number_pane_vc_t

0x871f,	// (0x0004c7bd) list_double_large_graphic_pane_vc_g1_ParamLimits

0x871f,	// (0x0004c7bd) list_double_large_graphic_pane_vc_g1

0x873b,	// (0x0004c7d9) list_double_large_graphic_pane_vc_g2_ParamLimits

0x873b,	// (0x0004c7d9) list_double_large_graphic_pane_vc_g2

0x874f,	// (0x0004c7ed) list_double_large_graphic_pane_vc_g3_ParamLimits

0x874f,	// (0x0004c7ed) list_double_large_graphic_pane_vc_g3

0x5ef3,	// (0x00049f91) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5ef3,	// (0x00049f91) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x00053aea) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x00053aea) list_double_large_graphic_pane_vc_g

0x5f02,	// (0x00049fa0) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5f02,	// (0x00049fa0) list_double_large_graphic_pane_vc_t1

0x5f1e,	// (0x00049fbc) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5f1e,	// (0x00049fbc) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x00053af3) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x00053af3) list_double_large_graphic_pane_vc_t

0x169c,	// (0x0004573a) list_double_heading_pane_vc_g1_ParamLimits

0x169c,	// (0x0004573a) list_double_heading_pane_vc_g1

0x81f8,	// (0x0004c296) list_double_heading_pane_vc_g2_ParamLimits

0x81f8,	// (0x0004c296) list_double_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00053853) list_double_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00053853) list_double_heading_pane_vc_g

0x5f40,	// (0x00049fde) list_double_heading_pane_vc_t1_ParamLimits

0x5f40,	// (0x00049fde) list_double_heading_pane_vc_t1

0x5f54,	// (0x00049ff2) list_double_heading_pane_vc_t2_ParamLimits

0x5f54,	// (0x00049ff2) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x00053af8) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x00053af8) list_double_heading_pane_vc_t

0x5f6c,	// (0x0004a00a) list_double_graphic_pane_vc_g1_ParamLimits

0x5f6c,	// (0x0004a00a) list_double_graphic_pane_vc_g1

0x875e,	// (0x0004c7fc) list_double_graphic_pane_vc_g2_ParamLimits

0x875e,	// (0x0004c7fc) list_double_graphic_pane_vc_g2

0x169c,	// (0x0004573a) list_double_graphic_pane_vc_g3_ParamLimits

0x169c,	// (0x0004573a) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x00053afd) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00053afd) list_double_graphic_pane_vc_g

0x5f7f,	// (0x0004a01d) list_double_graphic_pane_vc_t1_ParamLimits

0x5f7f,	// (0x0004a01d) list_double_graphic_pane_vc_t1

0x5f9e,	// (0x0004a03c) list_double_graphic_pane_vc_t2_ParamLimits

0x5f9e,	// (0x0004a03c) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x00053b06) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x00053b06) list_double_graphic_pane_vc_t

0x62fd,	// (0x0004a39b) aid_size_cell_fastswap

0x6305,	// (0x0004a3a3) aid_size_cell_touch_ParamLimits

0x6305,	// (0x0004a3a3) aid_size_cell_touch

0x6560,	// (0x0004a5fe) popup_fast_swap_wide_window_ParamLimits

0x6560,	// (0x0004a5fe) popup_fast_swap_wide_window

0x6666,	// (0x0004a704) touch_pane_ParamLimits

0x6666,	// (0x0004a704) touch_pane

0x0e6d,	// (0x00044f0b) button_value_adjust_pane_cp2

0x581e,	// (0x000498bc) button_value_adjust_pane_cp4

0x5840,	// (0x000498de) form_field_data_pane_cp2

0x5861,	// (0x000498ff) form_field_data_wide_pane_cp2

0x1187,	// (0x00045225) bg_scroll_pane_ParamLimits

0x7064,	// (0x0004b102) scroll_handle_pane_ParamLimits

0x7078,	// (0x0004b116) scroll_sc2_down_pane_ParamLimits

0x7078,	// (0x0004b116) scroll_sc2_down_pane

0x11b8,	// (0x00045256) scroll_sc2_up_pane_ParamLimits

0x11b8,	// (0x00045256) scroll_sc2_up_pane

0xbbd0,	// (0x0004fc6e) grid_wheel_folder_pane_g1_ParamLimits

0xbbd0,	// (0x0004fc6e) grid_wheel_folder_pane_g1

0x73f9,	// (0x0004b497) clock_nsta_pane_cp2_ParamLimits

0x73f9,	// (0x0004b497) clock_nsta_pane_cp2

0x750c,	// (0x0004b5aa) listscroll_midp_pane_ParamLimits

0x7518,	// (0x0004b5b6) midp_canvas_pane

0x1881,	// (0x0004591f) nsta_clock_indic_pane

0x18a9,	// (0x00045947) listscroll_form_pane_vc

0x18b1,	// (0x0004594f) listscroll_set_pane_vc_ParamLimits

0x18b1,	// (0x0004594f) listscroll_set_pane_vc

0x7f73,	// (0x0004c011) clock_nsta_pane

0x7fee,	// (0x0004c08c) indicator_nsta_pane

0x99ac,	// (0x0004da4a) bg_popup_sub_pane_cp2_ParamLimits

0x99c0,	// (0x0004da5e) find_pane_cp2_ParamLimits

0x99c0,	// (0x0004da5e) find_pane_cp2

0x99d6,	// (0x0004da74) grid_toobar_pane_ParamLimits

0x9ace,	// (0x0004db6c) list_form_gen_pane_vc_ParamLimits

0x9ace,	// (0x0004db6c) list_form_gen_pane_vc

0x9ae4,	// (0x0004db82) scroll_pane_cp8_vc_ParamLimits

0x9ae4,	// (0x0004db82) scroll_pane_cp8_vc

0x9b60,	// (0x0004dbfe) data_form_wide_pane_vc_ParamLimits

0x9b60,	// (0x0004dbfe) data_form_wide_pane_vc

0x9b6c,	// (0x0004dc0a) form_field_data_wide_pane_vc_g1

0x9b74,	// (0x0004dc12) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b74,	// (0x0004dc12) form_field_data_wide_pane_vc_t1

0x0e81,	// (0x00044f1f) input_focus_pane_cp6_vc_ParamLimits

0x0e81,	// (0x00044f1f) input_focus_pane_cp6_vc

0x9ea1,	// (0x0004df3f) list_midp_pane_ParamLimits

0x9ead,	// (0x0004df4b) scroll_pane_cp16_ParamLimits

0x9ead,	// (0x0004df4b) scroll_pane_cp16

0x9f17,	// (0x0004dfb5) button_value_adjust_pane_ParamLimits

0x9f17,	// (0x0004dfb5) button_value_adjust_pane

0xae5b,	// (0x0004eef9) button_value_adjust_pane_cp6_ParamLimits

0xae5b,	// (0x0004eef9) button_value_adjust_pane_cp6

0xaf81,	// (0x0004f01f) settings_code_pane_cp_ParamLimits

0xaf81,	// (0x0004f01f) settings_code_pane_cp

0x0a65,	// (0x00044b03) cell_touch_pane_g1

0x0a65,	// (0x00044b03) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x00053777) cell_touch_pane_g

0xb501,	// (0x0004f59f) cell_touch_pane_cp_ParamLimits

0xb501,	// (0x0004f59f) cell_touch_pane_cp

0xb511,	// (0x0004f5af) cell_touch_pane_ParamLimits

0xb511,	// (0x0004f5af) cell_touch_pane

0x0a65,	// (0x00044b03) scroll_sc2_down_pane_g1

0x0a65,	// (0x00044b03) scroll_sc2_up_pane_g1

0x0a6f,	// (0x00044b0d) bg_set_opt_pane_cp4_vc

0xb523,	// (0x0004f5c1) list_set_graphic_pane_vc_g1_ParamLimits

0xb523,	// (0x0004f5c1) list_set_graphic_pane_vc_g1

0xb52f,	// (0x0004f5cd) list_set_graphic_pane_vc_g2_ParamLimits

0xb52f,	// (0x0004f5cd) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x00053a73) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x00053a73) list_set_graphic_pane_vc_g

0xb53b,	// (0x0004f5d9) text_primary_small_cp13_vc_ParamLimits

0xb53b,	// (0x0004f5d9) text_primary_small_cp13_vc

0xb553,	// (0x0004f5f1) list_set_graphic_pane_vc_ParamLimits

0xb553,	// (0x0004f5f1) list_set_graphic_pane_vc

0x0a6f,	// (0x00044b0d) input_focus_pane_cp2_vc

0x0a65,	// (0x00044b03) setting_code_pane_vc_g1

0x0ae2,	// (0x00044b80) setting_code_pane_vc_t1

0xb566,	// (0x0004f604) set_text_pane_vc_t1_ParamLimits

0xb566,	// (0x0004f604) set_text_pane_vc_t1

0x0a6f,	// (0x00044b0d) input_focus_pane_cp1_vc

0xb583,	// (0x0004f621) list_set_text_pane_vc

0x0a65,	// (0x00044b03) setting_text_pane_vc_g1

0x0a6f,	// (0x00044b0d) bg_set_opt_pane_cp2_vc

0x0ad9,	// (0x00044b77) setting_slider_graphic_pane_vc_g1

0xb58d,	// (0x0004f62b) setting_slider_graphic_pane_vc_t1

0xb59d,	// (0x0004f63b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x00053a78) setting_slider_graphic_pane_vc_t

0xb5ad,	// (0x0004f64b) slider_set_pane_cp_vc

0xb5b5,	// (0x0004f653) slider_set_pane_vc_g1

0xb5be,	// (0x0004f65c) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x00053a7d) slider_set_pane_vc_g

0x0ed9,	// (0x00044f77) set_opt_bg_pane_g1_copy1

0x0ee1,	// (0x00044f7f) set_opt_bg_pane_g2_copy1

0xb5ea,	// (0x0004f688) set_opt_bg_pane_g3_copy1

0x0ef1,	// (0x00044f8f) set_opt_bg_pane_g4_copy1

0x0ef9,	// (0x00044f97) set_opt_bg_pane_g5_copy1

0x0f01,	// (0x00044f9f) set_opt_bg_pane_g6_copy1

0xb5f2,	// (0x0004f690) set_opt_bg_pane_g7_copy1

0xb5fc,	// (0x0004f69a) set_opt_bg_pane_g8_copy1

0xb604,	// (0x0004f6a2) set_opt_bg_pane_g9_copy1

0x0a6f,	// (0x00044b0d) bg_set_opt_pane_cp_vc

0xb60c,	// (0x0004f6aa) setting_slider_pane_vc_t1

0xb61b,	// (0x0004f6b9) setting_slider_pane_vc_t2

0xb62b,	// (0x0004f6c9) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x00053a8c) setting_slider_pane_vc_t

0xb63b,	// (0x0004f6d9) slider_set_pane_vc

0x8304,	// (0x0004c3a2) volume_set_pane_vc_g1

0x86aa,	// (0x0004c748) volume_set_pane_vc_g2

0x86b3,	// (0x0004c751) volume_set_pane_vc_g3

0x86bc,	// (0x0004c75a) volume_set_pane_vc_g4

0x86c5,	// (0x0004c763) volume_set_pane_vc_g5

0x86ce,	// (0x0004c76c) volume_set_pane_vc_g6

0x86d7,	// (0x0004c775) volume_set_pane_vc_g7

0x86e0,	// (0x0004c77e) volume_set_pane_vc_g8

0x86e9,	// (0x0004c787) volume_set_pane_vc_g9

0x86f2,	// (0x0004c790) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x00053a93) volume_set_pane_vc_g

0xb643,	// (0x0004f6e1) volume_set_pane_vc

0xb64d,	// (0x0004f6eb) button_value_adjust_pane_cp1_vc

0xb657,	// (0x0004f6f5) list_highlight_pane_cp2_vc

0xb660,	// (0x0004f6fe) list_set_pane_vc_ParamLimits

0xb660,	// (0x0004f6fe) list_set_pane_vc

0xb6be,	// (0x0004f75c) main_pane_set_vc_t1_ParamLimits

0xb6be,	// (0x0004f75c) main_pane_set_vc_t1

0xb6d3,	// (0x0004f771) main_pane_set_vc_t2_ParamLimits

0xb6d3,	// (0x0004f771) main_pane_set_vc_t2

0xb6e5,	// (0x0004f783) main_pane_set_vc_t3_ParamLimits

0xb6e5,	// (0x0004f783) main_pane_set_vc_t3

0xb6f7,	// (0x0004f795) main_pane_set_vc_t4_ParamLimits

0xb6f7,	// (0x0004f795) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x00053aa8) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x00053aa8) main_pane_set_vc_t

0xb709,	// (0x0004f7a7) setting_code_pane_vc_ParamLimits

0xb709,	// (0x0004f7a7) setting_code_pane_vc

0xb718,	// (0x0004f7b6) setting_slider_graphic_pane_vc

0xb718,	// (0x0004f7b6) setting_slider_pane_vc

0xb718,	// (0x0004f7b6) setting_text_pane_vc

0xb718,	// (0x0004f7b6) setting_volume_pane_vc

0xb720,	// (0x0004f7be) scroll_pane_cp121_vc

0x0e5b,	// (0x00044ef9) set_content_pane_vc

0xb728,	// (0x0004f7c6) button_value_adjust_pane_g1

0xb731,	// (0x0004f7cf) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x00053b0b) button_value_adjust_pane_g

0xb73a,	// (0x0004f7d8) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb73a,	// (0x0004f7d8) form_field_slider_wide_pane_vc_t1

0xb74e,	// (0x0004f7ec) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb74e,	// (0x0004f7ec) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x00053b10) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x00053b10) form_field_slider_wide_pane_vc_t

0x0abd,	// (0x00044b5b) input_focus_pane_cp10_vc_ParamLimits

0x0abd,	// (0x00044b5b) input_focus_pane_cp10_vc

0xb77c,	// (0x0004f81a) slider_cont_pane_cp1_vc_ParamLimits

0xb77c,	// (0x0004f81a) slider_cont_pane_cp1_vc

0xb78e,	// (0x0004f82c) slider_form_pane_g1_cp2

0xb5be,	// (0x0004f65c) slider_form_pane_g2_cp2

0xb7bb,	// (0x0004f859) form_field_slider_pane_vc_t3

0xb7c9,	// (0x0004f867) form_field_slider_pane_vc_t4

0xb7d7,	// (0x0004f875) slider_form_pane_vc_ParamLimits

0xb7d7,	// (0x0004f875) slider_form_pane_vc

0xb7e4,	// (0x0004f882) form_field_slider_pane_vc_t1_ParamLimits

0xb7e4,	// (0x0004f882) form_field_slider_pane_vc_t1

0xb74e,	// (0x0004f7ec) form_field_slider_pane_vc_t2_ParamLimits

0xb74e,	// (0x0004f7ec) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x00053b22) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x00053b22) form_field_slider_pane_vc_t

0x0abd,	// (0x00044b5b) input_focus_pane_cp9_vc_ParamLimits

0x0abd,	// (0x00044b5b) input_focus_pane_cp9_vc

0xb800,	// (0x0004f89e) slider_cont_pane_vc_ParamLimits

0xb800,	// (0x0004f89e) slider_cont_pane_vc

0xb814,	// (0x0004f8b2) list_form_graphic_pane_cp_vc_ParamLimits

0xb814,	// (0x0004f8b2) list_form_graphic_pane_cp_vc

0x9b6c,	// (0x0004dc0a) form_field_popup_wide_pane_vc_g1

0xb829,	// (0x0004f8c7) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb829,	// (0x0004f8c7) form_field_popup_wide_pane_vc_t1

0x0e81,	// (0x00044f1f) input_focus_pane_cp8_vc_ParamLimits

0x0e81,	// (0x00044f1f) input_focus_pane_cp8_vc

0xb86e,	// (0x0004f90c) list_form_wide_pane_vc_ParamLimits

0xb86e,	// (0x0004f90c) list_form_wide_pane_vc

0xb87a,	// (0x0004f918) list_form_graphic_pane_vc_g1

0xb882,	// (0x0004f920) list_form_graphic_pane_vc_t1_ParamLimits

0xb882,	// (0x0004f920) list_form_graphic_pane_vc_t1

0x0acb,	// (0x00044b69) list_highlight_pane_cp5_vc_ParamLimits

0x0acb,	// (0x00044b69) list_highlight_pane_cp5_vc

0xb89e,	// (0x0004f93c) list_form_graphic_pane_vc_ParamLimits

0xb89e,	// (0x0004f93c) list_form_graphic_pane_vc

0x9b6c,	// (0x0004dc0a) form_field_popup_pane_vc_g1

0xb8b4,	// (0x0004f952) form_field_popup_pane_vc_t1_ParamLimits

0xb8b4,	// (0x0004f952) form_field_popup_pane_vc_t1

0x0e81,	// (0x00044f1f) input_focus_pane_cp7_vc_ParamLimits

0x0e81,	// (0x00044f1f) input_focus_pane_cp7_vc

0xb8cb,	// (0x0004f969) list_form_pane_vc_ParamLimits

0xb8cb,	// (0x0004f969) list_form_pane_vc

0xb8d7,	// (0x0004f975) data_form_pane_vc_t1_ParamLimits

0xb8d7,	// (0x0004f975) data_form_pane_vc_t1

0x0ed9,	// (0x00044f77) input_focus_pane_vc_g1

0x0ee1,	// (0x00044f7f) input_focus_pane_vc_g2

0x0ee9,	// (0x00044f87) input_focus_pane_vc_g3

0x0ef1,	// (0x00044f8f) input_focus_pane_vc_g4

0x0ef9,	// (0x00044f97) input_focus_pane_vc_g5

0x0f01,	// (0x00044f9f) input_focus_pane_vc_g6

0x0f09,	// (0x00044fa7) input_focus_pane_vc_g7

0x0f11,	// (0x00044faf) input_focus_pane_vc_g8

0x0f19,	// (0x00044fb7) input_focus_pane_vc_g9

0x0a65,	// (0x00044b03) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00053700) input_focus_pane_vc_g

0x9b60,	// (0x0004dbfe) data_form_pane_vc_ParamLimits

0x9b60,	// (0x0004dbfe) data_form_pane_vc

0x9b6c,	// (0x0004dc0a) form_field_data_pane_vc_g1

0xb8f2,	// (0x0004f990) form_field_data_pane_vc_t1_ParamLimits

0xb8f2,	// (0x0004f990) form_field_data_pane_vc_t1

0x0e81,	// (0x00044f1f) input_focus_pane_vc_ParamLimits

0x0e81,	// (0x00044f1f) input_focus_pane_vc

0xb90c,	// (0x0004f9aa) button_value_adjust_pane_cp3_vc

0xb914,	// (0x0004f9b2) button_value_adjust_pane_cp5_vc

0xb91c,	// (0x0004f9ba) form_field_data_pane_vc_ParamLimits

0xb91c,	// (0x0004f9ba) form_field_data_pane_vc

0xb933,	// (0x0004f9d1) form_field_data_pane_vc_cp2

0xb93b,	// (0x0004f9d9) form_field_data_wide_pane_vc_ParamLimits

0xb93b,	// (0x0004f9d9) form_field_data_wide_pane_vc

0xb951,	// (0x0004f9ef) form_field_data_wide_pane_vc_cp2

0xb959,	// (0x0004f9f7) form_field_popup_pane_vc_ParamLimits

0xb959,	// (0x0004f9f7) form_field_popup_pane_vc

0xb970,	// (0x0004fa0e) form_field_popup_wide_pane_vc_ParamLimits

0xb970,	// (0x0004fa0e) form_field_popup_wide_pane_vc

0xb986,	// (0x0004fa24) form_field_slider_pane_vc_ParamLimits

0xb986,	// (0x0004fa24) form_field_slider_pane_vc

0xb999,	// (0x0004fa37) form_field_slider_wide_pane_vc_ParamLimits

0xb999,	// (0x0004fa37) form_field_slider_wide_pane_vc

0xb9ac,	// (0x0004fa4a) grid_touch_1_pane_ParamLimits

0xb9ac,	// (0x0004fa4a) grid_touch_1_pane

0xb9b8,	// (0x0004fa56) grid_touch_2_pane_ParamLimits

0xb9b8,	// (0x0004fa56) grid_touch_2_pane

0x1873,	// (0x00045911) touch_pane_g1_ParamLimits

0x1873,	// (0x00045911) touch_pane_g1

0xb9d0,	// (0x0004fa6e) cell_app_pane_cp_wide_ParamLimits

0xb9d0,	// (0x0004fa6e) cell_app_pane_cp_wide

0xb9e1,	// (0x0004fa7f) grid_popup_fast_wide_pane_ParamLimits

0xb9e1,	// (0x0004fa7f) grid_popup_fast_wide_pane

0xb9f5,	// (0x0004fa93) scroll_pane_cp19_ParamLimits

0xb9f5,	// (0x0004fa93) scroll_pane_cp19

0x0a6f,	// (0x00044b0d) bg_popup_window_pane_cp20

0xba09,	// (0x0004faa7) listscroll_popup_fast_wide_pane

0xba11,	// (0x0004faaf) grid_indicator_nsta_pane

0xba23,	// (0x0004fac1) clock_nsta_pane_g1

0xba2c,	// (0x0004faca) clock_nsta_pane_t1

0xba48,	// (0x0004fae6) cell_indicator_nsta_pane_ParamLimits

0xba48,	// (0x0004fae6) cell_indicator_nsta_pane

0xba7d,	// (0x0004fb1b) cell_indicator_nsta_pane_g1

0xba8b,	// (0x0004fb29) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x00053b33) cell_indicator_nsta_pane_g

0xba9d,	// (0x0004fb3b) clock_nsta_pane_cp

0xbaa6,	// (0x0004fb44) indicator_nsta_pane_cp

0xbab0,	// (0x0004fb4e) nsta_clock_indic_pane_g1

0x0b07,	// (0x00044ba5) grid_indicator_pane

0x7116,	// (0x0004b1b4) scroll_pane_cp29

0x7348,	// (0x0004b3e6) indicator_nsta_pane_cp2_ParamLimits

0x7348,	// (0x0004b3e6) indicator_nsta_pane_cp2

0x0acb,	// (0x00044b69) main_apps_wheel_pane

0x9d84,	// (0x0004de22) form_midp_field_text_pane_ParamLimits

0x9ecd,	// (0x0004df6b) scroll_bar_cp050_ParamLimits

0xbb09,	// (0x0004fba7) cell_indicator_pane_ParamLimits

0xbb09,	// (0x0004fba7) cell_indicator_pane

0xbb22,	// (0x0004fbc0) cell_indicator_pane_g1

0xbb2c,	// (0x0004fbca) grid_wheel_folder_pane_ParamLimits

0xbb2c,	// (0x0004fbca) grid_wheel_folder_pane

0xbb42,	// (0x0004fbe0) list_wheel_apps_pane_ParamLimits

0xbb42,	// (0x0004fbe0) list_wheel_apps_pane

0xbb53,	// (0x0004fbf1) main_apps_wheel_pane_g1_ParamLimits

0xbb53,	// (0x0004fbf1) main_apps_wheel_pane_g1

0xbb67,	// (0x0004fc05) main_apps_wheel_pane_g2_ParamLimits

0xbb67,	// (0x0004fc05) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x00053b4f) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x00053b4f) main_apps_wheel_pane_g

0xbb7f,	// (0x0004fc1d) main_apps_wheel_pane_t1_ParamLimits

0xbb7f,	// (0x0004fc1d) main_apps_wheel_pane_t1

0xbba2,	// (0x0004fc40) list_wheel_apps_pane_g1

0xbbaa,	// (0x0004fc48) list_wheel_apps_pane_g2

0xbbb2,	// (0x0004fc50) list_wheel_apps_pane_g3

0xbbbc,	// (0x0004fc5a) list_wheel_apps_pane_g4

0xbbc6,	// (0x0004fc64) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x00053b54) list_wheel_apps_pane_g

0x15e2,	// (0x00045680) navi_icon_text_pane

0x7ea2,	// (0x0004bf40) aid_fill_nsta

0xbbe9,	// (0x0004fc87) navi_icon_text_pane_g1

0xbbf5,	// (0x0004fc93) navi_icon_text_pane_t1

0x14c6,	// (0x00045564) list_set_graphic_pane_t1_ParamLimits

0x14c6,	// (0x00045564) list_set_graphic_pane_t1

0xa618,	// (0x0004e6b6) popup_midp_note_alarm_window_t6_ParamLimits

0xa618,	// (0x0004e6b6) popup_midp_note_alarm_window_t6

0xa62a,	// (0x0004e6c8) popup_midp_note_alarm_window_t7_ParamLimits

0xa62a,	// (0x0004e6c8) popup_midp_note_alarm_window_t7

0xa63c,	// (0x0004e6da) popup_midp_note_alarm_window_t8_ParamLimits

0xa63c,	// (0x0004e6da) popup_midp_note_alarm_window_t8

0xa64e,	// (0x0004e6ec) popup_midp_note_alarm_window_t9_ParamLimits

0xa64e,	// (0x0004e6ec) popup_midp_note_alarm_window_t9

0xa660,	// (0x0004e6fe) popup_midp_note_alarm_window_t10_ParamLimits

0xa660,	// (0x0004e6fe) popup_midp_note_alarm_window_t10

0xa672,	// (0x0004e710) popup_midp_note_alarm_window_t11_ParamLimits

0xa672,	// (0x0004e710) popup_midp_note_alarm_window_t11

0xa684,	// (0x0004e722) scroll_pane_cp17_ParamLimits

0xa684,	// (0x0004e722) scroll_pane_cp17

0x8304,	// (0x0004c3a2) volume_small_pane_cp_g1

0x877b,	// (0x0004c819) volume_small_pane_cp_g2

0x8784,	// (0x0004c822) volume_small_pane_cp_g3

0x878d,	// (0x0004c82b) volume_small_pane_cp_g4

0x8796,	// (0x0004c834) volume_small_pane_cp_g5

0x86c5,	// (0x0004c763) volume_small_pane_cp_g6

0x879f,	// (0x0004c83d) volume_small_pane_cp_g7

0x87a8,	// (0x0004c846) volume_small_pane_cp_g8

0x87b1,	// (0x0004c84f) volume_small_pane_cp_g9

0x87ba,	// (0x0004c858) volume_small_pane_cp_g10

0x1754,	// (0x000457f2) midp_ticker_pane_g1_ParamLimits

0x1760,	// (0x000457fe) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x000537cc) midp_ticker_pane_g_ParamLimits

0x176c,	// (0x0004580a) midp_ticker_pane_t1_ParamLimits

0x7eb8,	// (0x0004bf56) aid_fill_nsta_2

0x9eb9,	// (0x0004df57) list_form2_midp_pane

0xafcc,	// (0x0004f06a) midp_editing_number_pane_ParamLimits

0xafdb,	// (0x0004f079) midp_ticker_pane_ParamLimits

0xbc07,	// (0x0004fca5) form2_midp_field_pane

0xbc2b,	// (0x0004fcc9) scroll_pane_cp51

0xbc4b,	// (0x0004fce9) form2_midp_button_pane_ParamLimits

0xbc4b,	// (0x0004fce9) form2_midp_button_pane

0xbc5d,	// (0x0004fcfb) form2_midp_content_pane_ParamLimits

0xbc5d,	// (0x0004fcfb) form2_midp_content_pane

0xbc77,	// (0x0004fd15) form2_midp_field_choice_group_pane

0xbc7f,	// (0x0004fd1d) form2_midp_field_pane_g1

0xbc87,	// (0x0004fd25) form2_midp_field_pane_g2

0xbc8f,	// (0x0004fd2d) form2_midp_field_pane_g3

0xbc97,	// (0x0004fd35) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x00053b79) form2_midp_field_pane_g

0xbc9f,	// (0x0004fd3d) form2_midp_gauge_slider_pane

0xbca7,	// (0x0004fd45) form2_midp_gauge_wait_pane

0xbcaf,	// (0x0004fd4d) form2_midp_image_pane_ParamLimits

0xbcaf,	// (0x0004fd4d) form2_midp_image_pane

0xbcca,	// (0x0004fd68) form2_midp_label_pane_ParamLimits

0xbcca,	// (0x0004fd68) form2_midp_label_pane

0xbce3,	// (0x0004fd81) form2_midp_label_pane_cp_ParamLimits

0xbce3,	// (0x0004fd81) form2_midp_label_pane_cp

0xbd04,	// (0x0004fda2) form2_midp_string_pane_ParamLimits

0xbd04,	// (0x0004fda2) form2_midp_string_pane

0x5fc8,	// (0x0004a066) form2_midp_text_pane_ParamLimits

0x5fc8,	// (0x0004a066) form2_midp_text_pane

0xbd16,	// (0x0004fdb4) form2_midp_time_pane

0xbd26,	// (0x0004fdc4) input_focus_pane_cp51_ParamLimits

0xbd26,	// (0x0004fdc4) input_focus_pane_cp51

0xbd3e,	// (0x0004fddc) form2_midp_label_pane_t1_ParamLimits

0xbd3e,	// (0x0004fddc) form2_midp_label_pane_t1

0x5fe5,	// (0x0004a083) form2_mdip_text_pane_t1_ParamLimits

0x5fe5,	// (0x0004a083) form2_mdip_text_pane_t1

0x6003,	// (0x0004a0a1) form2_midp_time_pane_t1

0xbd87,	// (0x0004fe25) form2_midp_gauge_slider_pane_t1

0xbd99,	// (0x0004fe37) form2_midp_gauge_slider_pane_t2

0xbdab,	// (0x0004fe49) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x00053b82) form2_midp_gauge_slider_pane_t

0xbdbd,	// (0x0004fe5b) form2_midp_slider_pane

0xbdc9,	// (0x0004fe67) form2_midp_gauge_wait_pane_t1

0xbdd7,	// (0x0004fe75) form2_midp_wait_pane_ParamLimits

0xbdd7,	// (0x0004fe75) form2_midp_wait_pane

0xbe02,	// (0x0004fea0) list_single_2graphic_pane_cp4_ParamLimits

0xbe02,	// (0x0004fea0) list_single_2graphic_pane_cp4

0x9bd5,	// (0x0004dc73) list_single_midp_graphic_pane_cp_ParamLimits

0x9bd5,	// (0x0004dc73) list_single_midp_graphic_pane_cp

0x0a6f,	// (0x00044b0d) list_highlight_pane_cp20

0xbe2a,	// (0x0004fec8) list_single_2graphic_pane_g1_cp4

0xb407,	// (0x0004f4a5) list_single_2graphic_pane_g2_cp4

0xbe32,	// (0x0004fed0) list_single_2graphic_pane_t1_cp4

0x0acb,	// (0x00044b69) list_highlight_pane_cp21

0xbe41,	// (0x0004fedf) list_single_midp_graphic_pane_g4_cp

0xbe50,	// (0x0004feee) list_single_midp_graphic_pane_t1_cp

0xbe65,	// (0x0004ff03) form2_mdip_string_pane_t1_ParamLimits

0xbe65,	// (0x0004ff03) form2_mdip_string_pane_t1

0x0a6f,	// (0x00044b0d) bg_wml_button_pane_cp2

0x0a65,	// (0x00044b03) form2_midp_image_pane_g1

0x6d14,	// (0x0004adb2) list_double_large_graphic_pane_g5_ParamLimits

0x6d14,	// (0x0004adb2) list_double_large_graphic_pane_g5

0x750c,	// (0x0004b5aa) midp_form_pane_ParamLimits

0x0acb,	// (0x00044b69) main_apps_wheel_pane_ParamLimits

0x7c8a,	// (0x0004bd28) popup_preview_window_ParamLimits

0x7c8a,	// (0x0004bd28) popup_preview_window

0x7e45,	// (0x0004bee3) popup_touch_info_window_ParamLimits

0x7e45,	// (0x0004bee3) popup_touch_info_window

0x7e63,	// (0x0004bf01) popup_touch_menu_window_ParamLimits

0x7e63,	// (0x0004bf01) popup_touch_menu_window

0x0a5b,	// (0x00044af9) bg_popup_sub_pane_cp6

0xbf6c,	// (0x0005000a) list_touch_menu_pane

0xbf74,	// (0x00050012) list_single_touch_menu_pane_ParamLimits

0xbf74,	// (0x00050012) list_single_touch_menu_pane

0xbf8a,	// (0x00050028) list_single_touch_menu_pane_t1

0x0acb,	// (0x00044b69) bg_popup_sub_pane_cp7_ParamLimits

0x0acb,	// (0x00044b69) bg_popup_sub_pane_cp7

0xbf98,	// (0x00050036) heading_sub_pane

0xbfa0,	// (0x0005003e) list_touch_info_pane_ParamLimits

0xbfa0,	// (0x0005003e) list_touch_info_pane

0xbfaf,	// (0x0005004d) list_single_touch_info_pane_ParamLimits

0xbfaf,	// (0x0005004d) list_single_touch_info_pane

0xbfc1,	// (0x0005005f) list_single_touch_info_pane_t1

0xbfcf,	// (0x0005006d) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x00053b90) list_single_touch_info_pane_t

0x173d,	// (0x000457db) bg_popup_heading_pane_cp

0xbfdd,	// (0x0005007b) heading_sub_pane_t1

0x9afa,	// (0x0004db98) bg_popup_preview_window_pane_cp_ParamLimits

0x9afa,	// (0x0004db98) bg_popup_preview_window_pane_cp

0xbf98,	// (0x00050036) heading_preview_pane

0xbfa0,	// (0x0005003e) list_preview_pane_ParamLimits

0xbfa0,	// (0x0005003e) list_preview_pane

0xbfeb,	// (0x00050089) popup_preview_window_g1

0xbfaf,	// (0x0005004d) list_single_preview_pane_ParamLimits

0xbfaf,	// (0x0005004d) list_single_preview_pane

0xbff3,	// (0x00050091) list_single_preview_pane_g1

0xbffb,	// (0x00050099) list_single_preview_pane_t1

0xbfc1,	// (0x0005005f) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x00053b95) list_single_preview_pane_t

0xc009,	// (0x000500a7) bg_popup_heading_pane_cp2_ParamLimits

0xc009,	// (0x000500a7) bg_popup_heading_pane_cp2

0xc01f,	// (0x000500bd) heading_preview_pane_g1

0xc027,	// (0x000500c5) heading_preview_pane_t1_ParamLimits

0xc027,	// (0x000500c5) heading_preview_pane_t1

0x0b1e,	// (0x00044bbc) soft_indicator_pane_t1_ParamLimits

0x0dfd,	// (0x00044e9b) scroll_pane_ParamLimits

0x11af,	// (0x0004524d) scroll_sc2_left_pane

0x11a6,	// (0x00045244) scroll_sc2_right_pane

0x11ce,	// (0x0004526c) scroll_bg_pane_g1_ParamLimits

0x11e3,	// (0x00045281) scroll_bg_pane_g2_ParamLimits

0x11fb,	// (0x00045299) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x00053757) scroll_bg_pane_g_ParamLimits

0x11ce,	// (0x0004526c) scroll_handle_pane_g1_ParamLimits

0x1210,	// (0x000452ae) scroll_handle_pane_g2_ParamLimits

0x11fb,	// (0x00045299) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0005375e) scroll_handle_pane_g_ParamLimits

0x790d,	// (0x0004b9ab) popup_choice_list_window_ParamLimits

0x790d,	// (0x0004b9ab) popup_choice_list_window

0x99b8,	// (0x0004da56) choice_list_pane

0x9a3a,	// (0x0004dad8) cell_toolbar_pane_t1

0x9a62,	// (0x0004db00) toolbar_button_pane_ParamLimits

0xab3e,	// (0x0004ebdc) ai_gene_pane_1_t2_ParamLimits

0xab3e,	// (0x0004ebdc) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x00053986) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x00053986) ai_gene_pane_1_t

0xc044,	// (0x000500e2) scroll_sc2_left_pane_g1

0xc044,	// (0x000500e2) scroll_sc2_right_pane_g1

0x0fc3,	// (0x00045061) bg_popup_sub_pane_cp10

0xc04e,	// (0x000500ec) list_choice_list_pane

0xc067,	// (0x00050105) list_single_choice_list_pane_ParamLimits

0xc067,	// (0x00050105) list_single_choice_list_pane

0xc07a,	// (0x00050118) list_single_choice_list_pane_g1

0x6daf,	// (0x0004ae4d) list_single_choice_list_pane_t1_ParamLimits

0x6daf,	// (0x0004ae4d) list_single_choice_list_pane_t1

0xc082,	// (0x00050120) choice_list_pane_g1

0xc08a,	// (0x00050128) choice_list_pane_t1

0x0a5b,	// (0x00044af9) input_focus_pane_cp11

0x111b,	// (0x000451b9) title_pane_stacon_g2_ParamLimits

0x111b,	// (0x000451b9) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0005373d) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0005373d) title_pane_stacon_g

0x173d,	// (0x000457db) cursor_press_pane

0x79b5,	// (0x0004ba53) popup_fep_hwr_window_ParamLimits

0x79b5,	// (0x0004ba53) popup_fep_hwr_window

0x7a2d,	// (0x0004bacb) popup_fep_vkb_window_ParamLimits

0x7a2d,	// (0x0004bacb) popup_fep_vkb_window

0xc098,	// (0x00050136) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x00053bbe) fep_vkb_side_pane_g_ParamLimits

0x87fc,	// (0x0004c89a) fep_hwr_candidate_pane_ParamLimits

0x87fc,	// (0x0004c89a) fep_hwr_candidate_pane

0x8826,	// (0x0004c8c4) fep_hwr_side_pane_ParamLimits

0x8826,	// (0x0004c8c4) fep_hwr_side_pane

0x8846,	// (0x0004c8e4) fep_hwr_top_pane_ParamLimits

0x8846,	// (0x0004c8e4) fep_hwr_top_pane

0x885e,	// (0x0004c8fc) fep_hwr_write_pane_ParamLimits

0x885e,	// (0x0004c8fc) fep_hwr_write_pane

0xfb20,	// (0x00053bbe) fep_vkb_side_pane_g

0xc0a0,	// (0x0005013e) fep_hwr_top_pane_g1

0xc0b2,	// (0x00050150) fep_hwr_top_pane_g2

0x888a,	// (0x0004c928) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x00053b9a) fep_hwr_top_pane_g

0x889f,	// (0x0004c93d) fep_hwr_top_text_pane

0x12d3,	// (0x00045371) fep_hwr_top_text_pane_g1

0xc0e8,	// (0x00050186) fep_hwr_top_text_pane_t1

0x8995,	// (0x0004ca33) fep_hwr_candidate_pane_g1

0xc32d,	// (0x000503cb) fep_vkb_keypad_pane_g3_ParamLimits

0xc32d,	// (0x000503cb) fep_vkb_keypad_pane_g3

0xc355,	// (0x000503f3) fep_vkb_keypad_pane_g4_ParamLimits

0xc355,	// (0x000503f3) fep_vkb_keypad_pane_g4

0xc3c4,	// (0x00050462) fep_vkb_bottom_pane_g2_ParamLimits

0xc3c4,	// (0x00050462) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x00053bc5) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x00053bc5) fep_vkb_bottom_pane_g

0xc044,	// (0x000500e2) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x00053bcf) cell_vkb_side_pane_g

0xc44f,	// (0x000504ed) cell_vkb_side_pane_t1

0xc45d,	// (0x000504fb) cell_vkb_side_pane_t1_copy1

0xc044,	// (0x000500e2) bg_fep_vkb_candidate_pane_g2

0xc589,	// (0x00050627) cell_vkb_candidate_pane_ParamLimits

0xc0f6,	// (0x00050194) aid_size_cell_vkb_ParamLimits

0xc0f6,	// (0x00050194) aid_size_cell_vkb

0xc589,	// (0x00050627) cell_vkb_candidate_pane

0x89af,	// (0x0004ca4d) bg_popup_fep_shadow_pane_g1

0xc184,	// (0x00050222) fep_vkb_bottom_pane_ParamLimits

0xc184,	// (0x00050222) fep_vkb_bottom_pane

0xc1ba,	// (0x00050258) fep_vkb_candidate_pane_ParamLimits

0xc1ba,	// (0x00050258) fep_vkb_candidate_pane

0xc1d6,	// (0x00050274) fep_vkb_keypad_pane_ParamLimits

0xc1d6,	// (0x00050274) fep_vkb_keypad_pane

0xc215,	// (0x000502b3) fep_vkb_side_pane_ParamLimits

0xc215,	// (0x000502b3) fep_vkb_side_pane

0xc251,	// (0x000502ef) fep_vkb_top_pane_ParamLimits

0xc251,	// (0x000502ef) fep_vkb_top_pane

0xc286,	// (0x00050324) fep_vkb_top_pane_g1_ParamLimits

0xc286,	// (0x00050324) fep_vkb_top_pane_g1

0xc295,	// (0x00050333) fep_vkb_top_pane_g2_ParamLimits

0xc295,	// (0x00050333) fep_vkb_top_pane_g2

0xc2a4,	// (0x00050342) fep_vkb_top_pane_g3_ParamLimits

0xc2a4,	// (0x00050342) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x00053bb5) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x00053bb5) fep_vkb_top_pane_g

0xc2c2,	// (0x00050360) fep_vkb_top_text_pane_ParamLimits

0xc2c2,	// (0x00050360) fep_vkb_top_text_pane

0xc2d3,	// (0x00050371) fep_vkb_side_pane_g1_ParamLimits

0xc2d3,	// (0x00050371) fep_vkb_side_pane_g1

0xc31c,	// (0x000503ba) grid_vkb_side_pane_ParamLimits

0xc31c,	// (0x000503ba) grid_vkb_side_pane

0x89b7,	// (0x0004ca55) bg_popup_fep_shadow_pane_g2

0x89c0,	// (0x0004ca5e) bg_popup_fep_shadow_pane_g3

0x89c8,	// (0x0004ca66) bg_popup_fep_shadow_pane_g4

0x89d1,	// (0x0004ca6f) bg_popup_fep_shadow_pane_g5

0x89db,	// (0x0004ca79) bg_popup_fep_shadow_pane_g6

0x89e3,	// (0x0004ca81) bg_popup_fep_shadow_pane_g7

0x0ef9,	// (0x00044f97) bg_popup_fep_shadow_pane_g8

0xc373,	// (0x00050411) grid_vkb_keypad_number_pane_ParamLimits

0xc373,	// (0x00050411) grid_vkb_keypad_number_pane

0xc383,	// (0x00050421) grid_vkb_keypad_pane_ParamLimits

0xc383,	// (0x00050421) grid_vkb_keypad_pane

0xc3a9,	// (0x00050447) fep_vkb_bottom_pane_g1_ParamLimits

0xc3a9,	// (0x00050447) fep_vkb_bottom_pane_g1

0xc3d2,	// (0x00050470) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3d2,	// (0x00050470) grid_vkb_keypad_bottom_left_pane

0xc3e7,	// (0x00050485) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3e7,	// (0x00050485) grid_vkb_keypad_bottom_right_pane

0xc3fc,	// (0x0005049a) fep_vkb_top_text_pane_g1

0xc417,	// (0x000504b5) fep_vkb_top_text_pane_t1

0xc42c,	// (0x000504ca) cell_vkb_side_pane_ParamLimits

0xc42c,	// (0x000504ca) cell_vkb_side_pane

0xc044,	// (0x000500e2) cell_vkb_side_pane_g1

0xc46b,	// (0x00050509) cell_vkb_keypad_pane_ParamLimits

0xc46b,	// (0x00050509) cell_vkb_keypad_pane

0xc4e0,	// (0x0005057e) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x00053be2) bg_popup_fep_shadow_pane_g

0xc044,	// (0x000500e2) cell_hwr_side_pane_g1

0xc044,	// (0x000500e2) cell_hwr_side_pane_g2

0xc4ea,	// (0x00050588) cell_vkb_keypad_pane_t1

0xc4f8,	// (0x00050596) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4f8,	// (0x00050596) cell_vkb_keypad_bottom_left_pane

0xc515,	// (0x000505b3) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc515,	// (0x000505b3) cell_vkb_keypad_bottom_right_pane

0xc044,	// (0x000500e2) cell_vkb_keypad_bottom_left_pane_g1

0xc044,	// (0x000500e2) cell_vkb_keypad_bottom_right_pane_g1

0xc54e,	// (0x000505ec) cell_vkb_keypad_number_pane_ParamLimits

0xc54e,	// (0x000505ec) cell_vkb_keypad_number_pane

0xc56d,	// (0x0005060b) cell_vkb_keypad_number_pane_g1

0xc577,	// (0x00050615) cell_vkb_keypad_number_pane_g2

0xc580,	// (0x0005061e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x00053bd4) cell_vkb_keypad_number_pane_g

0xc4ea,	// (0x00050588) cell_vkb_keypad_number_pane_t1

0xc5a4,	// (0x00050642) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x00053bcf) cell_hwr_side_pane_g

0xc5bd,	// (0x0005065b) cell_hwr_side_pane_t1

0x89f5,	// (0x0004ca93) cell_hwr_side_pane_t1_copy1

0xc2b4,	// (0x00050352) cell_hwr_candidate_pane_g1

0x8a03,	// (0x0004caa1) cell_hwr_candidate_pane_t1

0xc044,	// (0x000500e2) cell_vkb_candidate_pane_g2

0xc643,	// (0x000506e1) cell_vkb_candidate_pane_t1

0x87c3,	// (0x0004c861) bg_popup_fep_shadow_pane_ParamLimits

0x87c3,	// (0x0004c861) bg_popup_fep_shadow_pane

0x2ce9,	// (0x00046d87) bg_fep_hwr_top_pane_g4

0xc0c4,	// (0x00050162) bg_hwr_side_pane_g1_ParamLimits

0xc0c4,	// (0x00050162) bg_hwr_side_pane_g1

0x88db,	// (0x0004c979) cell_hwr_side_pane_ParamLimits

0x88db,	// (0x0004c979) cell_hwr_side_pane

0x8916,	// (0x0004c9b4) fep_hwr_write_pane_g1_ParamLimits

0x8916,	// (0x0004c9b4) fep_hwr_write_pane_g1

0x8923,	// (0x0004c9c1) fep_hwr_write_pane_g2_ParamLimits

0x8923,	// (0x0004c9c1) fep_hwr_write_pane_g2

0x8930,	// (0x0004c9ce) fep_hwr_write_pane_g3_ParamLimits

0x8930,	// (0x0004c9ce) fep_hwr_write_pane_g3

0x893e,	// (0x0004c9dc) fep_hwr_write_pane_g4_ParamLimits

0x893e,	// (0x0004c9dc) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x00053ba1) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x00053ba1) fep_hwr_write_pane_g

0x2ce9,	// (0x00046d87) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2ce9,	// (0x00046d87) bg_fep_hwr_candidate_pane_g2

0x8953,	// (0x0004c9f1) cell_hwr_candidate_pane_ParamLimits

0x8953,	// (0x0004c9f1) cell_hwr_candidate_pane

0x8995,	// (0x0004ca33) fep_hwr_candidate_pane_g1_ParamLimits

0xc124,	// (0x000501c2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc124,	// (0x000501c2) bg_popup_fep_shadow_pane_cp2

0xc2b4,	// (0x00050352) fep_vkb_top_pane_g4_ParamLimits

0xc2b4,	// (0x00050352) fep_vkb_top_pane_g4

0xc2fa,	// (0x00050398) fep_vkb_side_pane_g2_ParamLimits

0xc2fa,	// (0x00050398) fep_vkb_side_pane_g2

0x574b,	// (0x000497e9) list_setting_pane_t4_ParamLimits

0x574b,	// (0x000497e9) list_setting_pane_t4

0x57e5,	// (0x00049883) list_setting_number_pane_t5_ParamLimits

0x57e5,	// (0x00049883) list_setting_number_pane_t5

0x7145,	// (0x0004b1e3) list_double_heading_pane_cp2_ParamLimits

0x7145,	// (0x0004b1e3) list_double_heading_pane_cp2

0x22b1,	// (0x0004634f) list_double_heading_pane_g1_cp2_ParamLimits

0x22b1,	// (0x0004634f) list_double_heading_pane_g1_cp2

0xc651,	// (0x000506ef) list_double_heading_pane_g2_cp2_ParamLimits

0xc651,	// (0x000506ef) list_double_heading_pane_g2_cp2

0xc665,	// (0x00050703) list_double_heading_pane_t1_cp2_ParamLimits

0xc665,	// (0x00050703) list_double_heading_pane_t1_cp2

0xc67b,	// (0x00050719) list_double_heading_pane_t2_cp2_ParamLimits

0xc67b,	// (0x00050719) list_double_heading_pane_t2_cp2

0x0a53,	// (0x00044af1) aid_value_unit2

0x65ac,	// (0x0004a64a) popup_preview_fixed_window

0x0bf5,	// (0x00044c93) bg_popup_preview_window_pane_cp02

0xc68d,	// (0x0005072b) list_preview_fixed_pane

0xc6d3,	// (0x00050771) list_empty_pane_fp_ParamLimits

0xc6d3,	// (0x00050771) list_empty_pane_fp

0xc6d3,	// (0x00050771) list_single_cale_day_pane_fp_ParamLimits

0xc6d3,	// (0x00050771) list_single_cale_day_pane_fp

0xc6d3,	// (0x00050771) list_single_graphic_heading_pane_fp_ParamLimits

0xc6d3,	// (0x00050771) list_single_graphic_heading_pane_fp

0xc6d3,	// (0x00050771) list_single_graphic_pane_fp_ParamLimits

0xc6d3,	// (0x00050771) list_single_graphic_pane_fp

0xc6d3,	// (0x00050771) list_single_heading_pane_fp_ParamLimits

0xc6d3,	// (0x00050771) list_single_heading_pane_fp

0xc6d3,	// (0x00050771) list_single_pane_fp_ParamLimits

0xc6d3,	// (0x00050771) list_single_pane_fp

0xc6e9,	// (0x00050787) list_single_pane_fp_g1_ParamLimits

0xc6e9,	// (0x00050787) list_single_pane_fp_g1

0x2423,	// (0x000464c1) list_single_pane_fp_g2_ParamLimits

0x2423,	// (0x000464c1) list_single_pane_fp_g2

0xc855,	// (0x000508f3) list_single_pane_fp_g3_ParamLimits

0xc855,	// (0x000508f3) list_single_pane_fp_g3

0xc6f5,	// (0x00050793) list_single_pane_fp_g4_ParamLimits

0xc6f5,	// (0x00050793) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x00053c03) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x00053c03) list_single_pane_fp_g

0x6016,	// (0x0004a0b4) list_single_pane_fp_t1_ParamLimits

0x6016,	// (0x0004a0b4) list_single_pane_fp_t1

0x602d,	// (0x0004a0cb) list_single_graphic_pane_fp_g1_ParamLimits

0x602d,	// (0x0004a0cb) list_single_graphic_pane_fp_g1

0xc6e9,	// (0x00050787) list_single_graphic_pane_fp_g2_ParamLimits

0xc6e9,	// (0x00050787) list_single_graphic_pane_fp_g2

0x2423,	// (0x000464c1) list_single_graphic_pane_fp_g3_ParamLimits

0x2423,	// (0x000464c1) list_single_graphic_pane_fp_g3

0xc855,	// (0x000508f3) list_single_graphic_pane_fp_g4_ParamLimits

0xc855,	// (0x000508f3) list_single_graphic_pane_fp_g4

0xc6f5,	// (0x00050793) list_single_graphic_pane_fp_g5_ParamLimits

0xc6f5,	// (0x00050793) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x00053c0c) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x00053c0c) list_single_graphic_pane_fp_g

0x6039,	// (0x0004a0d7) list_single_graphic_pane_fp_t1_ParamLimits

0x6039,	// (0x0004a0d7) list_single_graphic_pane_fp_t1

0x602d,	// (0x0004a0cb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x602d,	// (0x0004a0cb) list_single_graphic_heading_pane_fp_g1

0xc6e9,	// (0x00050787) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6e9,	// (0x00050787) list_single_graphic_heading_pane_fp_g2

0x2423,	// (0x000464c1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2423,	// (0x000464c1) list_single_graphic_heading_pane_fp_g3

0xc855,	// (0x000508f3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc855,	// (0x000508f3) list_single_graphic_heading_pane_fp_g4

0xc6f5,	// (0x00050793) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6f5,	// (0x00050793) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x00053c0c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x00053c0c) list_single_graphic_heading_pane_fp_g

0x604f,	// (0x0004a0ed) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x604f,	// (0x0004a0ed) list_single_graphic_heading_pane_fp_t1

0x6065,	// (0x0004a103) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6065,	// (0x0004a103) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x00053c17) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x00053c17) list_single_graphic_heading_pane_fp_t

0x6077,	// (0x0004a115) list_single_cale_day_pane_fp_g1_ParamLimits

0x6077,	// (0x0004a115) list_single_cale_day_pane_fp_g1

0xc701,	// (0x0005079f) list_single_cale_day_pane_fp_g2_ParamLimits

0xc701,	// (0x0005079f) list_single_cale_day_pane_fp_g2

0x8a21,	// (0x0004cabf) list_single_cale_day_pane_fp_g3_ParamLimits

0x8a21,	// (0x0004cabf) list_single_cale_day_pane_fp_g3

0x8a49,	// (0x0004cae7) list_single_cale_day_pane_fp_g4_ParamLimits

0x8a49,	// (0x0004cae7) list_single_cale_day_pane_fp_g4

0x8a6d,	// (0x0004cb0b) list_single_cale_day_pane_fp_g5_ParamLimits

0x8a6d,	// (0x0004cb0b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x00053c1c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x00053c1c) list_single_cale_day_pane_fp_g

0x60af,	// (0x0004a14d) list_single_cale_day_pane_fp_t1_ParamLimits

0x60af,	// (0x0004a14d) list_single_cale_day_pane_fp_t1

0x60d5,	// (0x0004a173) list_single_cale_day_pane_fp_t2_ParamLimits

0x60d5,	// (0x0004a173) list_single_cale_day_pane_fp_t2

0x60ee,	// (0x0004a18c) list_single_cale_day_pane_fp_t3_ParamLimits

0x60ee,	// (0x0004a18c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x00053c27) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x00053c27) list_single_cale_day_pane_fp_t

0xc6e9,	// (0x00050787) list_empty_pane_fp_g1_ParamLimits

0xc6e9,	// (0x00050787) list_empty_pane_fp_g1

0x6107,	// (0x0004a1a5) list_empty_pane_fp_t1

0x6115,	// (0x0004a1b3) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x00053c2e) list_empty_pane_fp_t

0xc6e9,	// (0x00050787) list_single_heading_pane_fp_g1_ParamLimits

0xc6e9,	// (0x00050787) list_single_heading_pane_fp_g1

0x2423,	// (0x000464c1) list_single_heading_pane_fp_g2_ParamLimits

0x2423,	// (0x000464c1) list_single_heading_pane_fp_g2

0xc855,	// (0x000508f3) list_single_heading_pane_fp_g3_ParamLimits

0xc855,	// (0x000508f3) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x00053c33) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x00053c33) list_single_heading_pane_fp_g

0x6123,	// (0x0004a1c1) list_single_heading_pane_fp_t1_ParamLimits

0x6123,	// (0x0004a1c1) list_single_heading_pane_fp_t1

0x6135,	// (0x0004a1d3) list_single_heading_pane_fp_t2_ParamLimits

0x6135,	// (0x0004a1d3) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x00053c3a) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x00053c3a) list_single_heading_pane_fp_t

0x6e15,	// (0x0004aeb3) aid_size_cell_fast

0x0bd8,	// (0x00044c76) soft_indicator_pane_cp1_t1

0x6e1e,	// (0x0004aebc) cell_app_pane_cp2_ParamLimits

0x6e1e,	// (0x0004aebc) cell_app_pane_cp2

0x87e5,	// (0x0004c883) fep_hwr_candidate_drop_down_list_pane

0x30d6,	// (0x00047174) fep_hwr_candidate_pane_g3_ParamLimits

0x30d6,	// (0x00047174) fep_hwr_candidate_pane_g3

0x30e3,	// (0x00047181) fep_hwr_candidate_pane_g4_ParamLimits

0x30e3,	// (0x00047181) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x00053bae) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x00053bae) fep_hwr_candidate_pane_g

0xc1a9,	// (0x00050247) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1a9,	// (0x00050247) fep_vkb_candidate_drop_down_list_pane

0xc5ac,	// (0x0005064a) fep_vkb_candidate_pane_g3

0xc5b4,	// (0x00050652) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x00053bdb) fep_vkb_candidate_pane_g

0xc2b4,	// (0x00050352) cell_hwr_candidate_pane_g1_ParamLimits

0xc5cb,	// (0x00050669) cell_hwr_candidate_pane_g3_ParamLimits

0xc5cb,	// (0x00050669) cell_hwr_candidate_pane_g3

0xc5ec,	// (0x0005068a) cell_hwr_candidate_pane_g4_ParamLimits

0xc5ec,	// (0x0005068a) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x00053bf5) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x00053bf5) cell_hwr_candidate_pane_g

0xc60d,	// (0x000506ab) cell_vkb_candidate_pane_g3_ParamLimits

0xc60d,	// (0x000506ab) cell_vkb_candidate_pane_g3

0xc628,	// (0x000506c6) cell_vkb_candidate_pane_g4_ParamLimits

0xc628,	// (0x000506c6) cell_vkb_candidate_pane_g4

0xc70d,	// (0x000507ab) cell_app_pane_cp2_g1_ParamLimits

0xc70d,	// (0x000507ab) cell_app_pane_cp2_g1

0xc72b,	// (0x000507c9) cell_app_pane_cp2_g2_ParamLimits

0xc72b,	// (0x000507c9) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x00053c3f) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x00053c3f) cell_app_pane_cp2_g

0xc737,	// (0x000507d5) cell_app_pane_cp2_t1_ParamLimits

0xc737,	// (0x000507d5) cell_app_pane_cp2_t1

0x0e81,	// (0x00044f1f) grid_highlight_pane_cp1_ParamLimits

0x0e81,	// (0x00044f1f) grid_highlight_pane_cp1

0x8a91,	// (0x0004cb2f) cell_hwr_candidate_pane_cp1_ParamLimits

0x8a91,	// (0x0004cb2f) cell_hwr_candidate_pane_cp1

0xc2b4,	// (0x00050352) fep_hwr_candidate_drop_down_list_pane_g1

0xc749,	// (0x000507e7) fep_hwr_candidate_drop_down_list_pane_g2

0xc756,	// (0x000507f4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x00053c44) fep_hwr_candidate_drop_down_list_pane_g

0x8ab0,	// (0x0004cb4e) fep_hwr_candidate_drop_down_list_scroll_pane

0x8ab9,	// (0x0004cb57) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8ab9,	// (0x0004cb57) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8ac6,	// (0x0004cb64) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8ac6,	// (0x0004cb64) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8ad3,	// (0x0004cb71) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8ad3,	// (0x0004cb71) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc60d,	// (0x000506ab) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc60d,	// (0x000506ab) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc628,	// (0x000506c6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc628,	// (0x000506c6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8ae0,	// (0x0004cb7e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8ae0,	// (0x0004cb7e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8afb,	// (0x0004cb99) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8afb,	// (0x0004cb99) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8b16,	// (0x0004cbb4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8b16,	// (0x0004cbb4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x00053c4b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x00053c4b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc763,	// (0x00050801) cell_vkb_candidate_pane_cp1_ParamLimits

0xc763,	// (0x00050801) cell_vkb_candidate_pane_cp1

0xc2b4,	// (0x00050352) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2b4,	// (0x00050352) fep_vkb_candidate_drop_down_list_pane_g1

0xc749,	// (0x000507e7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc749,	// (0x000507e7) fep_vkb_candidate_drop_down_list_pane_g2

0xc756,	// (0x000507f4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc756,	// (0x000507f4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x00053c44) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x00053c44) fep_vkb_candidate_drop_down_list_pane_g

0xc783,	// (0x00050821) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc783,	// (0x00050821) fep_vkb_candidate_drop_down_list_scroll_pane

0xc790,	// (0x0005082e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc790,	// (0x0005082e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc79d,	// (0x0005083b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc79d,	// (0x0005083b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7a9,	// (0x00050847) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7a9,	// (0x00050847) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5cb,	// (0x00050669) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5cb,	// (0x00050669) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5ec,	// (0x0005068a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5ec,	// (0x0005068a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7b5,	// (0x00050853) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7b5,	// (0x00050853) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7d6,	// (0x00050874) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7d6,	// (0x00050874) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7f7,	// (0x00050895) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7f7,	// (0x00050895) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x00053c5c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x00053c5c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x66c6,	// (0x0004a764) title_pane_g1_ParamLimits

0x66d3,	// (0x0004a771) title_pane_g2_ParamLimits

0xf529,	// (0x000535c7) title_pane_g_ParamLimits

0x12cb,	// (0x00045369) aid_call2_pane

0x12c3,	// (0x00045361) aid_call_pane

0x12d3,	// (0x00045371) popup_clock_analogue_window_g1

0x12d3,	// (0x00045371) popup_clock_analogue_window_g2

0x7126,	// (0x0004b1c4) popup_clock_analogue_window_g3

0x712f,	// (0x0004b1cd) popup_clock_analogue_window_g4

0x0a65,	// (0x00044b03) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0005376c) popup_clock_analogue_window_g

0x7137,	// (0x0004b1d5) popup_clock_analogue_window_t1

0x7185,	// (0x0004b223) clock_digital_number_pane_ParamLimits

0x7185,	// (0x0004b223) clock_digital_number_pane

0x7191,	// (0x0004b22f) clock_digital_number_pane_cp02_ParamLimits

0x7191,	// (0x0004b22f) clock_digital_number_pane_cp02

0x719d,	// (0x0004b23b) clock_digital_number_pane_cp03_ParamLimits

0x719d,	// (0x0004b23b) clock_digital_number_pane_cp03

0x71a9,	// (0x0004b247) clock_digital_number_pane_cp04_ParamLimits

0x71a9,	// (0x0004b247) clock_digital_number_pane_cp04

0x71b5,	// (0x0004b253) clock_digital_separator_pane_ParamLimits

0x71b5,	// (0x0004b253) clock_digital_separator_pane

0x71c1,	// (0x0004b25f) popup_clock_digital_window_t1_ParamLimits

0x71c1,	// (0x0004b25f) popup_clock_digital_window_t1

0x0a65,	// (0x00044b03) clock_digital_number_pane_g1

0x0a65,	// (0x00044b03) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x00053777) clock_digital_number_pane_g

0x0a65,	// (0x00044b03) clock_digital_separator_pane_g1

0x0a65,	// (0x00044b03) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x00053777) clock_digital_separator_pane_g

0x7ea2,	// (0x0004bf40) aid_fill_nsta_ParamLimits

0x7fee,	// (0x0004c08c) indicator_nsta_pane_ParamLimits

0x8167,	// (0x0004c205) popup_clock_analogue_window

0x8167,	// (0x0004c205) popup_clock_digital_window

0xba11,	// (0x0004faaf) grid_indicator_nsta_pane_ParamLimits

0xba3a,	// (0x0004fad8) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x00053b2e) clock_nsta_pane_t

0x7051,	// (0x0004b0ef) aid_size_max_handle

0x705b,	// (0x0004b0f9) aid_size_min_handle

0x173d,	// (0x000457db) editor_scroll_pane

0xc812,	// (0x000508b0) ex_editor_pane

0x0fb3,	// (0x00045051) scroll_pane_cp13

0x0e29,	// (0x00044ec7) scroll_pane_cp14

0x1302,	// (0x000453a0) scroll_pane_cp36

0x7159,	// (0x0004b1f7) list_single_graphic_hl_pane_cp2_ParamLimits

0x7159,	// (0x0004b1f7) list_single_graphic_hl_pane_cp2

0x5cb5,	// (0x00049d53) list_single_graphic_hl_pane_ParamLimits

0x5cb5,	// (0x00049d53) list_single_graphic_hl_pane

0x614b,	// (0x0004a1e9) aid_size_min_hl_cp1

0xc81a,	// (0x000508b8) list_highlight_pane_cp34_ParamLimits

0xc81a,	// (0x000508b8) list_highlight_pane_cp34

0xc869,	// (0x00050907) list_single_graphic_hl_pane_g1_ParamLimits

0xc869,	// (0x00050907) list_single_graphic_hl_pane_g1

0x6154,	// (0x0004a1f2) list_single_graphic_hl_pane_g2_ParamLimits

0x6154,	// (0x0004a1f2) list_single_graphic_hl_pane_g2

0x6154,	// (0x0004a1f2) list_single_graphic_hl_pane_g3_ParamLimits

0x6154,	// (0x0004a1f2) list_single_graphic_hl_pane_g3

0x6160,	// (0x0004a1fe) list_single_graphic_hl_pane_g4_ParamLimits

0x6160,	// (0x0004a1fe) list_single_graphic_hl_pane_g4

0x616c,	// (0x0004a20a) list_single_graphic_hl_pane_g5_ParamLimits

0x616c,	// (0x0004a20a) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x00053c6d) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x00053c6d) list_single_graphic_hl_pane_g

0x6180,	// (0x0004a21e) list_single_graphic_hl_pane_t1_ParamLimits

0x6180,	// (0x0004a21e) list_single_graphic_hl_pane_t1

0xc876,	// (0x00050914) aid_size_min_hl_cp2

0xc87f,	// (0x0005091d) list_highlight_pane_cp34_cp2_ParamLimits

0xc87f,	// (0x0005091d) list_highlight_pane_cp34_cp2

0xc869,	// (0x00050907) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc869,	// (0x00050907) list_single_graphic_hl_pane_g1_cp2

0xc88c,	// (0x0005092a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc88c,	// (0x0005092a) list_single_graphic_hl_pane_g2_cp2

0xc898,	// (0x00050936) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc898,	// (0x00050936) list_single_graphic_hl_pane_g3_cp2

0x169c,	// (0x0004573a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x169c,	// (0x0004573a) list_single_graphic_hl_pane_g4_cp2

0xc8a6,	// (0x00050944) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc8a6,	// (0x00050944) list_single_graphic_hl_pane_g5_cp2

0x7790,	// (0x0004b82e) control_pane_g4_ParamLimits

0x7790,	// (0x0004b82e) control_pane_g4

0x0fc3,	// (0x00045061) bg_popup_sub_pane_cp10_ParamLimits

0xc04e,	// (0x000500ec) list_choice_list_pane_ParamLimits

0xc05d,	// (0x000500fb) scroll_pane_cp23

0x0bf5,	// (0x00044c93) bg_popup_preview_window_pane_cp02_ParamLimits

0xc68d,	// (0x0005072b) list_preview_fixed_pane_ParamLimits

0xc6a3,	// (0x00050741) list_preview_fixed_pane_cp_ParamLimits

0xc6a3,	// (0x00050741) list_preview_fixed_pane_cp

0xc6af,	// (0x0005074d) popup_preview_fixed_window_g1_ParamLimits

0xc6af,	// (0x0005074d) popup_preview_fixed_window_g1

0xc6bb,	// (0x00050759) popup_preview_fixed_window_g2_ParamLimits

0xc6bb,	// (0x00050759) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x00053bfc) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x00053bfc) popup_preview_fixed_window_g

0x6f2d,	// (0x0004afcb) aid_navi_side_left_pane_ParamLimits

0x6f42,	// (0x0004afe0) aid_navi_side_right_pane_ParamLimits

0x6f5a,	// (0x0004aff8) navi_icon_pane_stacon_ParamLimits

0x6f6e,	// (0x0004b00c) navi_navi_pane_stacon_ParamLimits

0x6f5a,	// (0x0004aff8) navi_text_pane_stacon_ParamLimits

0x0a5b,	// (0x00044af9) main_text_info_pane

0xc8d0,	// (0x0005096e) listscroll_text_info_pane

0xc8d8,	// (0x00050976) list_text_info_pane_ParamLimits

0xc8d8,	// (0x00050976) list_text_info_pane

0xc8e7,	// (0x00050985) scroll_pane_cp24_ParamLimits

0xc8e7,	// (0x00050985) scroll_pane_cp24

0xc905,	// (0x000509a3) list_text_info_pane_t1_ParamLimits

0xc905,	// (0x000509a3) list_text_info_pane_t1

0x7929,	// (0x0004b9c7) popup_fast_swap2_window_ParamLimits

0x7929,	// (0x0004b9c7) popup_fast_swap2_window

0xc939,	// (0x000509d7) aid_size_cell_fast2

0x0a5b,	// (0x00044af9) bg_popup_window_pane_cp17

0x9eed,	// (0x0004df8b) heading_pane_cp2

0x9ef5,	// (0x0004df93) listscroll_fast2_pane

0xc943,	// (0x000509e1) grid_fast2_pane

0xc94d,	// (0x000509eb) listscroll_fast2_pane_g1

0xc955,	// (0x000509f3) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x00053c78) listscroll_fast2_pane_g

0x0fb3,	// (0x00045051) scroll_pane_cp26

0xc95f,	// (0x000509fd) cell_fast2_pane_ParamLimits

0xc95f,	// (0x000509fd) cell_fast2_pane

0xc974,	// (0x00050a12) cell_fast2_pane_g1

0xc97d,	// (0x00050a1b) cell_fast2_pane_g2

0xc986,	// (0x00050a24) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x00053c7d) cell_fast2_pane_g

0x0d60,	// (0x00044dfe) grid_highlight_pane_cp9

0x0d75,	// (0x00044e13) main_eswt_pane_ParamLimits

0x0d75,	// (0x00044e13) main_eswt_pane

0xc8fc,	// (0x0005099a) list_single_text_info_pane

0xc98e,	// (0x00050a2c) eswt_ctrl_button_pane

0xc98e,	// (0x00050a2c) eswt_ctrl_canvas_pane

0xc996,	// (0x00050a34) eswt_ctrl_combo_pane

0xc98e,	// (0x00050a2c) eswt_ctrl_default_pane

0xc98e,	// (0x00050a2c) eswt_ctrl_label_pane

0xc99e,	// (0x00050a3c) eswt_ctrl_wait_pane

0xc9a6,	// (0x00050a44) eswt_shell_pane

0x0a5b,	// (0x00044af9) listscroll_eswt_app_pane

0xc9c6,	// (0x00050a64) popup_eswt_tasktip_window_ParamLimits

0xc9c6,	// (0x00050a64) popup_eswt_tasktip_window

0x9afa,	// (0x0004db98) bg_popup_window_pane_cp18

0xc9d7,	// (0x00050a75) eswt_control_pane_g1_ParamLimits

0xc9d7,	// (0x00050a75) eswt_control_pane_g1

0xc9e4,	// (0x00050a82) eswt_control_pane_g2_ParamLimits

0xc9e4,	// (0x00050a82) eswt_control_pane_g2

0xc9f1,	// (0x00050a8f) eswt_control_pane_g3_ParamLimits

0xc9f1,	// (0x00050a8f) eswt_control_pane_g3

0xc9fe,	// (0x00050a9c) eswt_control_pane_g4_ParamLimits

0xc9fe,	// (0x00050a9c) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x00053c84) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x00053c84) eswt_control_pane_g

0x0e81,	// (0x00044f1f) bg_button_pane_ParamLimits

0x0e81,	// (0x00044f1f) bg_button_pane

0x0d75,	// (0x00044e13) common_borders_pane_copy2_ParamLimits

0x0d75,	// (0x00044e13) common_borders_pane_copy2

0xca0b,	// (0x00050aa9) control_button_pane_g1_ParamLimits

0xca0b,	// (0x00050aa9) control_button_pane_g1

0xca17,	// (0x00050ab5) control_button_pane_g2_ParamLimits

0xca17,	// (0x00050ab5) control_button_pane_g2

0xca23,	// (0x00050ac1) control_button_pane_g3_ParamLimits

0xca23,	// (0x00050ac1) control_button_pane_g3

0x0002,

0xfbef,	// (0x00053c8d) control_button_pane_g_ParamLimits

0xfbef,	// (0x00053c8d) control_button_pane_g

0xca37,	// (0x00050ad5) control_button_pane_t1

0xca45,	// (0x00050ae3) control_button_pane_t2

0x0001,

0xfbf6,	// (0x00053c94) control_button_pane_t

0x9a6e,	// (0x0004db0c) bg_button_pane_g1

0x9a76,	// (0x0004db14) bg_button_pane_g2

0x9a7e,	// (0x0004db1c) bg_button_pane_g3

0x9a86,	// (0x0004db24) bg_button_pane_g4

0x9a8e,	// (0x0004db2c) bg_button_pane_g5

0x9a96,	// (0x0004db34) bg_button_pane_g6

0x9a9e,	// (0x0004db3c) bg_button_pane_g7

0x9aa6,	// (0x0004db44) bg_button_pane_g8

0x9aae,	// (0x0004db4c) bg_button_pane_g9

0x0008,

0xf83c,	// (0x000538da) bg_button_pane_g

0xc009,	// (0x000500a7) common_borders_pane_ParamLimits

0xc009,	// (0x000500a7) common_borders_pane

0xc9d7,	// (0x00050a75) eswt_control_pane_g1_copy1_ParamLimits

0xc9d7,	// (0x00050a75) eswt_control_pane_g1_copy1

0xc9e4,	// (0x00050a82) eswt_control_pane_g2_copy1_ParamLimits

0xc9e4,	// (0x00050a82) eswt_control_pane_g2_copy1

0xc9f1,	// (0x00050a8f) eswt_control_pane_g3_copy1_ParamLimits

0xc9f1,	// (0x00050a8f) eswt_control_pane_g3_copy1

0xc9fe,	// (0x00050a9c) eswt_control_pane_g4_copy1_ParamLimits

0xc9fe,	// (0x00050a9c) eswt_control_pane_g4_copy1

0xc044,	// (0x000500e2) bg_eswt_ctrl_canvas_pane_g1

0xc009,	// (0x000500a7) common_borders_pane_cp2_ParamLimits

0xc009,	// (0x000500a7) common_borders_pane_cp2

0xc009,	// (0x000500a7) common_borders_pane_cp3_ParamLimits

0xc009,	// (0x000500a7) common_borders_pane_cp3

0xca53,	// (0x00050af1) separator_horizontal_pane

0xca5b,	// (0x00050af9) separator_vertical_pane

0xc9d7,	// (0x00050a75) eswt_control_pane_g1_copy2_ParamLimits

0xc9d7,	// (0x00050a75) eswt_control_pane_g1_copy2

0xc9e4,	// (0x00050a82) eswt_control_pane_g2_copy2_ParamLimits

0xc9e4,	// (0x00050a82) eswt_control_pane_g2_copy2

0xc9f1,	// (0x00050a8f) eswt_control_pane_g3_copy2_ParamLimits

0xc9f1,	// (0x00050a8f) eswt_control_pane_g3_copy2

0xc9fe,	// (0x00050a9c) eswt_control_pane_g4_copy2_ParamLimits

0xc9fe,	// (0x00050a9c) eswt_control_pane_g4_copy2

0x0a5b,	// (0x00044af9) common_borders_pane_cp4

0xca64,	// (0x00050b02) separator_horizontal_pane_g1

0xca6d,	// (0x00050b0b) separator_horizontal_pane_g2

0xca76,	// (0x00050b14) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x00053c99) separator_horizontal_pane_g

0xc9d7,	// (0x00050a75) eswt_control_pane_g1_copy3_ParamLimits

0xc9d7,	// (0x00050a75) eswt_control_pane_g1_copy3

0xc9e4,	// (0x00050a82) eswt_control_pane_g2_copy3_ParamLimits

0xc9e4,	// (0x00050a82) eswt_control_pane_g2_copy3

0xc9f1,	// (0x00050a8f) eswt_control_pane_g3_copy3_ParamLimits

0xc9f1,	// (0x00050a8f) eswt_control_pane_g3_copy3

0xc9fe,	// (0x00050a9c) eswt_control_pane_g4_copy3_ParamLimits

0xc9fe,	// (0x00050a9c) eswt_control_pane_g4_copy3

0x0a5b,	// (0x00044af9) common_borders_pane_cp5

0xca7f,	// (0x00050b1d) separator_vertical_pane_g1

0xca88,	// (0x00050b26) separator_vertical_pane_g2

0xca91,	// (0x00050b2f) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x00053ca0) separator_vertical_pane_g

0xc9d7,	// (0x00050a75) eswt_control_pane_g1_copy4_ParamLimits

0xc9d7,	// (0x00050a75) eswt_control_pane_g1_copy4

0xc9e4,	// (0x00050a82) eswt_control_pane_g2_copy4_ParamLimits

0xc9e4,	// (0x00050a82) eswt_control_pane_g2_copy4

0xc9f1,	// (0x00050a8f) eswt_control_pane_g3_copy4_ParamLimits

0xc9f1,	// (0x00050a8f) eswt_control_pane_g3_copy4

0xc9fe,	// (0x00050a9c) eswt_control_pane_g4_copy4_ParamLimits

0xc9fe,	// (0x00050a9c) eswt_control_pane_g4_copy4

0xca9a,	// (0x00050b38) eswt_ctrl_combo_button_pane

0xcaa2,	// (0x00050b40) eswt_ctrl_input_pane

0xcaaa,	// (0x00050b48) popup_choice_list_window_cp70

0xcab2,	// (0x00050b50) eswt_ctrl_input_pane_t1

0x0a5b,	// (0x00044af9) input_focus_pane_cp70

0xc009,	// (0x000500a7) bg_button_pane_cp70_ParamLimits

0xc009,	// (0x000500a7) bg_button_pane_cp70

0xcac0,	// (0x00050b5e) eswt_ctrl_combo_button_pane_g1

0xcac8,	// (0x00050b66) wait_bar_pane_cp70

0x9afa,	// (0x0004db98) bg_popup_window_pane_cp70_ParamLimits

0x9afa,	// (0x0004db98) bg_popup_window_pane_cp70

0xcad0,	// (0x00050b6e) popup_eswt_tasktip_window_t1

0xcae6,	// (0x00050b84) wait_bar_pane_cp71_ParamLimits

0xcae6,	// (0x00050b84) wait_bar_pane_cp71

0xcaf2,	// (0x00050b90) grid_eswt_app_pane

0x11a6,	// (0x00045244) scroll_pane_cp70

0xcafb,	// (0x00050b99) cell_eswt_app_pane_ParamLimits

0xcafb,	// (0x00050b99) cell_eswt_app_pane

0xcb2b,	// (0x00050bc9) cell_eswt_app_pane_g1_ParamLimits

0xcb2b,	// (0x00050bc9) cell_eswt_app_pane_g1

0xcb5a,	// (0x00050bf8) cell_eswt_app_pane_g2_ParamLimits

0xcb5a,	// (0x00050bf8) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x00053ca7) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x00053ca7) cell_eswt_app_pane_g

0xcb7e,	// (0x00050c1c) cell_eswt_app_pane_t1_ParamLimits

0xcb7e,	// (0x00050c1c) cell_eswt_app_pane_t1

0xcbb0,	// (0x00050c4e) grid_highlight_pane_cp70_ParamLimits

0xcbb0,	// (0x00050c4e) grid_highlight_pane_cp70

0x1637,	// (0x000456d5) set_content_pane_g1

0x7726,	// (0x0004b7c4) status_small_volume_pane

0x8b31,	// (0x0004cbcf) status_small_volume_pane_g1

0x8b39,	// (0x0004cbd7) volume_small2_pane

0x8b42,	// (0x0004cbe0) volume_small2_pane_g1

0x8b4b,	// (0x0004cbe9) volume_small2_pane_g2

0x8b54,	// (0x0004cbf2) volume_small2_pane_g3

0x8b5d,	// (0x0004cbfb) volume_small2_pane_g4

0x8b66,	// (0x0004cc04) volume_small2_pane_g5

0x8b6f,	// (0x0004cc0d) volume_small2_pane_g6

0x8b78,	// (0x0004cc16) volume_small2_pane_g7

0x8b81,	// (0x0004cc1f) volume_small2_pane_g8

0x8b8a,	// (0x0004cc28) volume_small2_pane_g9

0x8b93,	// (0x0004cc31) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x00053cac) volume_small2_pane_g

0xc3fc,	// (0x0005049a) fep_vkb_top_text_pane_g1_ParamLimits

0xc417,	// (0x000504b5) fep_vkb_top_text_pane_t1_ParamLimits

0xc6c7,	// (0x00050765) popup_preview_fixed_window_g3_ParamLimits

0xc6c7,	// (0x00050765) popup_preview_fixed_window_g3

0x7dd8,	// (0x0004be76) popup_toolbar_trans_pane

0xae38,	// (0x0004eed6) aid_height_set_list_ParamLimits

0xae49,	// (0x0004eee7) aid_size_parent_ParamLimits

0x0fc3,	// (0x00045061) list_highlight_pane_cp2_ParamLimits

0x1637,	// (0x000456d5) set_content_pane_g1_ParamLimits

0x5cd3,	// (0x00049d71) list_single_image_pane_ParamLimits

0x5cd3,	// (0x00049d71) list_single_image_pane

0xcbbc,	// (0x00050c5a) aid_size_cell_image_ParamLimits

0xcbbc,	// (0x00050c5a) aid_size_cell_image

0xcbc9,	// (0x00050c67) grid_single_image_pane_ParamLimits

0xcbc9,	// (0x00050c67) grid_single_image_pane

0x2423,	// (0x000464c1) list_single_image_pane_g1_ParamLimits

0x2423,	// (0x000464c1) list_single_image_pane_g1

0xc855,	// (0x000508f3) list_single_image_pane_g2_ParamLimits

0xc855,	// (0x000508f3) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x00053cc1) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x00053cc1) list_single_image_pane_g

0xcbd5,	// (0x00050c73) list_single_image_pane_t1_ParamLimits

0xcbd5,	// (0x00050c73) list_single_image_pane_t1

0xcbeb,	// (0x00050c89) cell_image_list_pane_ParamLimits

0xcbeb,	// (0x00050c89) cell_image_list_pane

0xcbff,	// (0x00050c9d) cell_image_list_pane_g1

0xcc08,	// (0x00050ca6) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x00053cc6) cell_image_list_pane_g

0xcc11,	// (0x00050caf) aid_size_cell_tb_trans_pane

0x0e81,	// (0x00044f1f) bg_tb_trans_pane

0xcc23,	// (0x00050cc1) grid_tb_trans_pane

0x9a6e,	// (0x0004db0c) bg_tb_trans_pane_g1

0x9a76,	// (0x0004db14) bg_tb_trans_pane_g2

0x9a7e,	// (0x0004db1c) bg_tb_trans_pane_g3

0x9a86,	// (0x0004db24) bg_tb_trans_pane_g4

0x9a8e,	// (0x0004db2c) bg_tb_trans_pane_g5

0x9aa6,	// (0x0004db44) bg_tb_trans_pane_g6

0x9aae,	// (0x0004db4c) bg_tb_trans_pane_g7

0x9a96,	// (0x0004db34) bg_tb_trans_pane_g8

0x9a9e,	// (0x0004db3c) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x00053ccb) bg_tb_trans_pane_g

0xcc37,	// (0x00050cd5) cell_toolbar_trans_pane_ParamLimits

0xcc37,	// (0x00050cd5) cell_toolbar_trans_pane

0xc044,	// (0x000500e2) cell_toolbar_trans_pane_g1

0xbc0f,	// (0x0004fcad) list_form2_midp_pane_t1

0xbc1d,	// (0x0004fcbb) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x00053b74) list_form2_midp_pane_t

0xbc2b,	// (0x0004fcc9) scroll_pane_cp51_ParamLimits

0xbde7,	// (0x0004fe85) form2_midp_wait_pane_g1

0xbdf0,	// (0x0004fe8e) form2_midp_wait_pane_g2

0xbdf9,	// (0x0004fe97) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x00053b89) form2_midp_wait_pane_g

0x0acb,	// (0x00044b69) list_highlight_pane_cp21_ParamLimits

0xbe41,	// (0x0004fedf) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe50,	// (0x0004feee) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x8582,	// (0x0004c620) list_single_2graphic_im_pane_ParamLimits

0x8582,	// (0x0004c620) list_single_2graphic_im_pane

0xcc5d,	// (0x00050cfb) list_single_2graphic_im_pane_g1_ParamLimits

0xcc5d,	// (0x00050cfb) list_single_2graphic_im_pane_g1

0xcc6e,	// (0x00050d0c) list_single_2graphic_im_pane_g2_ParamLimits

0xcc6e,	// (0x00050d0c) list_single_2graphic_im_pane_g2

0xcc7a,	// (0x00050d18) list_single_2graphic_im_pane_g3_ParamLimits

0xcc7a,	// (0x00050d18) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x00053cde) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x00053cde) list_single_2graphic_im_pane_g

0xcc9a,	// (0x00050d38) list_single_2graphic_im_pane_t1_ParamLimits

0xcc9a,	// (0x00050d38) list_single_2graphic_im_pane_t1

0xc6d3,	// (0x00050771) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6d3,	// (0x00050771) list_single_graphic_2heading_pane_fp

0x602d,	// (0x0004a0cb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x602d,	// (0x0004a0cb) list_single_graphic_2heading_pane_fp_g1

0xc6e9,	// (0x00050787) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6e9,	// (0x00050787) list_single_graphic_2heading_pane_fp_g2

0x2423,	// (0x000464c1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2423,	// (0x000464c1) list_single_graphic_2heading_pane_fp_g3

0xc855,	// (0x000508f3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc855,	// (0x000508f3) list_single_graphic_2heading_pane_fp_g4

0xc6f5,	// (0x00050793) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6f5,	// (0x00050793) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x00053c0c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x00053c0c) list_single_graphic_2heading_pane_fp_g

0x6196,	// (0x0004a234) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6196,	// (0x0004a234) list_single_graphic_2heading_pane_fp_t1

0x6065,	// (0x0004a103) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6065,	// (0x0004a103) list_single_graphic_2heading_pane_fp_t2

0x61ac,	// (0x0004a24a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x61ac,	// (0x0004a24a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x00053ce7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x00053ce7) list_single_graphic_2heading_pane_fp_t

0xc0d0,	// (0x0005016e) fep_hwr_write_pane_g5_ParamLimits

0xc0d0,	// (0x0005016e) fep_hwr_write_pane_g5

0xc0dc,	// (0x0005017a) fep_hwr_write_pane_g6_ParamLimits

0xc0dc,	// (0x0005017a) fep_hwr_write_pane_g6

0xc9a6,	// (0x00050a44) eswt_shell_pane_ParamLimits

0x9afa,	// (0x0004db98) bg_popup_window_pane_cp18_ParamLimits

0xad91,	// (0x0004ee2f) heading_pane_cp70

0xcad0,	// (0x00050b6e) popup_eswt_tasktip_window_t1_ParamLimits

0x7ef7,	// (0x0004bf95) aid_touch_tab_arrow_left

0x7f06,	// (0x0004bfa4) aid_touch_tab_arrow_right

0x66e4,	// (0x0004a782) title_pane_g3_ParamLimits

0x66e4,	// (0x0004a782) title_pane_g3

0x0e49,	// (0x00044ee7) set_value_pane_g1

0x7dd8,	// (0x0004be76) popup_toolbar_trans_pane_ParamLimits

0xcc11,	// (0x00050caf) aid_size_cell_tb_trans_pane_ParamLimits

0x0e81,	// (0x00044f1f) bg_tb_trans_pane_ParamLimits

0xcc23,	// (0x00050cc1) grid_tb_trans_pane_ParamLimits

0x0bf5,	// (0x00044c93) cont_note_pane_ParamLimits

0x0bf5,	// (0x00044c93) cont_note_pane

0x0d75,	// (0x00044e13) cont_snote2_single_text_pane_ParamLimits

0x0d75,	// (0x00044e13) cont_snote2_single_text_pane

0x0d75,	// (0x00044e13) cont_snote2_single_graphic_pane_ParamLimits

0x0d75,	// (0x00044e13) cont_snote2_single_graphic_pane

0xa114,	// (0x0004e1b2) cont_note_wait_pane_ParamLimits

0xa114,	// (0x0004e1b2) cont_note_wait_pane

0xa114,	// (0x0004e1b2) cont_note_image_pane_ParamLimits

0xa114,	// (0x0004e1b2) cont_note_image_pane

0xcccb,	// (0x00050d69) popup_note2_window_g1_ParamLimits

0xcccb,	// (0x00050d69) popup_note2_window_g1

0xccfc,	// (0x00050d9a) popup_note2_window_t1_ParamLimits

0xccfc,	// (0x00050d9a) popup_note2_window_t1

0xcd41,	// (0x00050ddf) popup_note2_window_t2_ParamLimits

0xcd41,	// (0x00050ddf) popup_note2_window_t2

0xcd86,	// (0x00050e24) popup_note2_window_t3_ParamLimits

0xcd86,	// (0x00050e24) popup_note2_window_t3

0xcdcb,	// (0x00050e69) popup_note2_window_t4_ParamLimits

0xcdcb,	// (0x00050e69) popup_note2_window_t4

0x0c79,	// (0x00044d17) popup_note2_window_t5_ParamLimits

0x0c79,	// (0x00044d17) popup_note2_window_t5

0x0004,

0xfc55,	// (0x00053cf3) popup_note2_window_t_ParamLimits

0xfc55,	// (0x00053cf3) popup_note2_window_t

0xcdfa,	// (0x00050e98) popup_note2_image_window_g1_ParamLimits

0xcdfa,	// (0x00050e98) popup_note2_image_window_g1

0xce06,	// (0x00050ea4) popup_note2_image_window_g2_ParamLimits

0xce06,	// (0x00050ea4) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x00053cfe) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x00053cfe) popup_note2_image_window_g

0xce18,	// (0x00050eb6) popup_note2_image_window_t1_ParamLimits

0xce18,	// (0x00050eb6) popup_note2_image_window_t1

0xce30,	// (0x00050ece) popup_note2_image_window_t2_ParamLimits

0xce30,	// (0x00050ece) popup_note2_image_window_t2

0xce48,	// (0x00050ee6) popup_note2_image_window_t3_ParamLimits

0xce48,	// (0x00050ee6) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x00053d03) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x00053d03) popup_note2_image_window_t

0xa122,	// (0x0004e1c0) popup_note2_wait_window_g1_ParamLimits

0xa122,	// (0x0004e1c0) popup_note2_wait_window_g1

0xa12e,	// (0x0004e1cc) popup_note2_wait_window_g2_ParamLimits

0xa12e,	// (0x0004e1cc) popup_note2_wait_window_g2

0xa13a,	// (0x0004e1d8) popup_note2_wait_window_g3_ParamLimits

0xa13a,	// (0x0004e1d8) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x000538bc) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x000538bc) popup_note2_wait_window_g

0xce64,	// (0x00050f02) popup_note2_wait_window_t1_ParamLimits

0xce64,	// (0x00050f02) popup_note2_wait_window_t1

0xce82,	// (0x00050f20) popup_note2_wait_window_t2_ParamLimits

0xce82,	// (0x00050f20) popup_note2_wait_window_t2

0xcea0,	// (0x00050f3e) popup_note2_wait_window_t3_ParamLimits

0xcea0,	// (0x00050f3e) popup_note2_wait_window_t3

0xceb2,	// (0x00050f50) popup_note2_wait_window_t4_ParamLimits

0xceb2,	// (0x00050f50) popup_note2_wait_window_t4

0x0003,

0xfc6c,	// (0x00053d0a) popup_note2_wait_window_t_ParamLimits

0xfc6c,	// (0x00053d0a) popup_note2_wait_window_t

0xcec4,	// (0x00050f62) wait_bar2_pane_ParamLimits

0xcec4,	// (0x00050f62) wait_bar2_pane

0xcedc,	// (0x00050f7a) popup_snote2_single_text_window_g1_ParamLimits

0xcedc,	// (0x00050f7a) popup_snote2_single_text_window_g1

0xcf04,	// (0x00050fa2) popup_snote2_single_text_window_t1_ParamLimits

0xcf04,	// (0x00050fa2) popup_snote2_single_text_window_t1

0xcf50,	// (0x00050fee) popup_snote2_single_text_window_t2_ParamLimits

0xcf50,	// (0x00050fee) popup_snote2_single_text_window_t2

0xcf9c,	// (0x0005103a) popup_snote2_single_text_window_t3_ParamLimits

0xcf9c,	// (0x0005103a) popup_snote2_single_text_window_t3

0xcfdd,	// (0x0005107b) popup_snote2_single_text_window_t4_ParamLimits

0xcfdd,	// (0x0005107b) popup_snote2_single_text_window_t4

0xd013,	// (0x000510b1) popup_snote2_single_text_window_t5_ParamLimits

0xd013,	// (0x000510b1) popup_snote2_single_text_window_t5

0x0004,

0xfc75,	// (0x00053d13) popup_snote2_single_text_window_t_ParamLimits

0xfc75,	// (0x00053d13) popup_snote2_single_text_window_t

0xd03e,	// (0x000510dc) popup_snote2_single_graphic_window_g1_ParamLimits

0xd03e,	// (0x000510dc) popup_snote2_single_graphic_window_g1

0xd066,	// (0x00051104) popup_snote2_single_graphic_window_g2_ParamLimits

0xd066,	// (0x00051104) popup_snote2_single_graphic_window_g2

0x0001,

0xfc80,	// (0x00053d1e) popup_snote2_single_graphic_window_g_ParamLimits

0xfc80,	// (0x00053d1e) popup_snote2_single_graphic_window_g

0xd08e,	// (0x0005112c) popup_snote2_single_graphic_window_t1_ParamLimits

0xd08e,	// (0x0005112c) popup_snote2_single_graphic_window_t1

0xd0da,	// (0x00051178) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0da,	// (0x00051178) popup_snote2_single_graphic_window_t2

0xcf9c,	// (0x0005103a) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf9c,	// (0x0005103a) popup_snote2_single_graphic_window_t3

0xcfdd,	// (0x0005107b) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfdd,	// (0x0005107b) popup_snote2_single_graphic_window_t4

0xd013,	// (0x000510b1) popup_snote2_single_graphic_window_t5_ParamLimits

0xd013,	// (0x000510b1) popup_snote2_single_graphic_window_t5

0x0004,

0xfc85,	// (0x00053d23) popup_snote2_single_graphic_window_t_ParamLimits

0xfc85,	// (0x00053d23) popup_snote2_single_graphic_window_t

0xbae8,	// (0x0004fb86) clock_nsta_pane_cp2_t1

0xbae8,	// (0x0004fb86) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x00053b4a) clock_nsta_pane_cp2_t

0x5901,	// (0x0004999f) form_field_data_wide_pane_g1_ParamLimits

0x0e8f,	// (0x00044f2d) form_field_data_wide_pane_g2_ParamLimits

0x0e8f,	// (0x00044f2d) form_field_data_wide_pane_g2

0x0e9b,	// (0x00044f39) form_field_data_wide_pane_g3_ParamLimits

0x0e9b,	// (0x00044f39) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x000536ef) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x000536ef) form_field_data_wide_pane_g

0xb9c4,	// (0x0004fa62) grid_touch_3_pane_ParamLimits

0xb9c4,	// (0x0004fa62) grid_touch_3_pane

0xd126,	// (0x000511c4) cell_touch_3_pane_ParamLimits

0xd126,	// (0x000511c4) cell_touch_3_pane

0xc044,	// (0x000500e2) cell_touch_3_pane_g1

0xc044,	// (0x000500e2) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x00053bcf) cell_touch_3_pane_g

0x0cab,	// (0x00044d49) cont_query_data_pane

0x0cb3,	// (0x00044d51) cont_query_data_pane_cp1

0xd154,	// (0x000511f2) button_value_adjust_pane_cp7

0xd15c,	// (0x000511fa) query_popup_pane_cp3

0x1334,	// (0x000453d2) bg_popup_sub_pane_cp22_ParamLimits

0x723b,	// (0x0004b2d9) navi_navi_volume_pane_cp2

0x7253,	// (0x0004b2f1) popup_side_volume_key_window_g2

0x725f,	// (0x0004b2fd) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x00053785) popup_side_volume_key_window_g

0x7279,	// (0x0004b317) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0005378c) popup_side_volume_key_window_t

0x74b9,	// (0x0004b557) popup_side_volume_key_window_ParamLimits

0x6d08,	// (0x0004ada6) list_double_graphic_pane_g4_ParamLimits

0x6d08,	// (0x0004ada6) list_double_graphic_pane_g4

0x85c1,	// (0x0004c65f) list_single_2heading_msg_pane_ParamLimits

0x85c1,	// (0x0004c65f) list_single_2heading_msg_pane

0x8b9c,	// (0x0004cc3a) list_single_2heading_msg_pane_g1_ParamLimits

0x8b9c,	// (0x0004cc3a) list_single_2heading_msg_pane_g1

0x6ca9,	// (0x0004ad47) list_single_2heading_msg_pane_g2_ParamLimits

0x6ca9,	// (0x0004ad47) list_single_2heading_msg_pane_g2

0x8ba8,	// (0x0004cc46) list_single_2heading_msg_pane_g3_ParamLimits

0x8ba8,	// (0x0004cc46) list_single_2heading_msg_pane_g3

0x8bb4,	// (0x0004cc52) list_single_2heading_msg_pane_g4_ParamLimits

0x8bb4,	// (0x0004cc52) list_single_2heading_msg_pane_g4

0x0003,

0xfc90,	// (0x00053d2e) list_single_2heading_msg_pane_g_ParamLimits

0xfc90,	// (0x00053d2e) list_single_2heading_msg_pane_g

0x61cc,	// (0x0004a26a) list_single_2heading_msg_pane_t1_ParamLimits

0x61cc,	// (0x0004a26a) list_single_2heading_msg_pane_t1

0x61f4,	// (0x0004a292) list_single_2heading_msg_pane_t2_ParamLimits

0x61f4,	// (0x0004a292) list_single_2heading_msg_pane_t2

0x6223,	// (0x0004a2c1) list_single_2heading_msg_pane_t3_ParamLimits

0x6223,	// (0x0004a2c1) list_single_2heading_msg_pane_t3

0x625c,	// (0x0004a2fa) list_single_2heading_msg_pane_t4_ParamLimits

0x625c,	// (0x0004a2fa) list_single_2heading_msg_pane_t4

0x0003,

0xfc99,	// (0x00053d37) list_single_2heading_msg_pane_t_ParamLimits

0xfc99,	// (0x00053d37) list_single_2heading_msg_pane_t

0x0a79,	// (0x00044b17) title_pane_g4_ParamLimits

0x0a79,	// (0x00044b17) title_pane_g4

0x6e7e,	// (0x0004af1c) title_pane_stacon_g3_ParamLimits

0x6e7e,	// (0x0004af1c) title_pane_stacon_g3

0xcc8e,	// (0x00050d2c) list_single_2graphic_im_pane_g4_ParamLimits

0xcc8e,	// (0x00050d2c) list_single_2graphic_im_pane_g4

0xab5b,	// (0x0004ebf9) popup_side_volume_key_window_cp

0xb31a,	// (0x0004f3b8) main_idle_act2_pane_t1

0x8204,	// (0x0004c2a2) toolbar_button_pane_g10

0x6c9f,	// (0x0004ad3d) popup_toolbar_window_cp1

0xbad9,	// (0x0004fb77) clock_nsta_pane_cp_t1

0xbad9,	// (0x0004fb77) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x00053b45) clock_nsta_pane_cp_t

0x723b,	// (0x0004b2d9) navi_navi_volume_pane_cp2_ParamLimits

0x7247,	// (0x0004b2e5) popup_side_volume_key_window_g1_ParamLimits

0x7253,	// (0x0004b2f1) popup_side_volume_key_window_g2_ParamLimits

0x725f,	// (0x0004b2fd) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x00053785) popup_side_volume_key_window_g_ParamLimits

0x87d1,	// (0x0004c86f) fep_hwr_aid_pane

0x2ce9,	// (0x00046d87) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0a0,	// (0x0005013e) fep_hwr_top_pane_g1_ParamLimits

0xc0b2,	// (0x00050150) fep_hwr_top_pane_g2_ParamLimits

0x888a,	// (0x0004c928) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x00053b9a) fep_hwr_top_pane_g_ParamLimits

0x889f,	// (0x0004c93d) fep_hwr_top_text_pane_ParamLimits

0xa91e,	// (0x0004e9bc) aid_touch_tab_arrow_arrow_2

0xa927,	// (0x0004e9c5) aid_touch_tab_arrow_left_2

0x87e5,	// (0x0004c883) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x881c,	// (0x0004c8ba) fep_hwr_prediction_pane

0xc20b,	// (0x000502a9) fep_vkb_prediction_pane

0xc308,	// (0x000503a6) fep_vkb_side_pane_g3_ParamLimits

0xc308,	// (0x000503a6) fep_vkb_side_pane_g3

0xc2b4,	// (0x00050352) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc749,	// (0x000507e7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc756,	// (0x000507f4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x00053c44) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd181,	// (0x0005121f) fep_hwr_prediction_pane_g1

0x8bcc,	// (0x0004cc6a) fep_hwr_prediction_pane_g2

0x8bd4,	// (0x0004cc72) fep_hwr_prediction_pane_g3

0x8bdc,	// (0x0004cc7a) fep_hwr_prediction_pane_g4

0x0003,

0xfca2,	// (0x00053d40) fep_hwr_prediction_pane_g

0xd181,	// (0x0005121f) fep_vkb_prediction_pane_g1

0xd18b,	// (0x00051229) fep_vkb_prediction_pane_g2

0xd193,	// (0x00051231) fep_vkb_prediction_pane_g3

0xd19b,	// (0x00051239) fep_vkb_prediction_pane_g4

0x0003,

0xfcab,	// (0x00053d49) fep_vkb_prediction_pane_g

0x84de,	// (0x0004c57c) slider_set_pane_g3

0x84f2,	// (0x0004c590) slider_set_pane_g4

0x850a,	// (0x0004c5a8) slider_set_pane_g5

0x84de,	// (0x0004c57c) slider_set_pane_g6

0x8520,	// (0x0004c5be) slider_set_pane_g7

0xafaa,	// (0x0004f048) slider_form_pane_g3

0xafb3,	// (0x0004f051) slider_form_pane_g4

0xafbb,	// (0x0004f059) slider_form_pane_g5

0xafaa,	// (0x0004f048) slider_form_pane_g6

0xafc3,	// (0x0004f061) slider_form_pane_g7

0xb5c6,	// (0x0004f664) slider_set_pane_vc_g3

0xb5cf,	// (0x0004f66d) slider_set_pane_vc_g4

0xb5d8,	// (0x0004f676) slider_set_pane_vc_g5

0xb5c6,	// (0x0004f664) slider_set_pane_vc_g6

0xb5e1,	// (0x0004f67f) slider_set_pane_vc_g7

0xb797,	// (0x0004f835) slider_form_pane_vc_g1

0xb7a0,	// (0x0004f83e) slider_form_pane_vc_g2

0xb7a9,	// (0x0004f847) slider_form_pane_vc_g3

0xb797,	// (0x0004f835) slider_form_pane_vc_g4

0xb7b2,	// (0x0004f850) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x00053b17) slider_form_pane_vc_g

0x0a5b,	// (0x00044af9) main_idle_act3_pane

0xd1a3,	// (0x00051241) ai3_links_pane

0xd1ac,	// (0x0005124a) popup_ai3_data_window_ParamLimits

0xd1ac,	// (0x0005124a) popup_ai3_data_window

0x0a5b,	// (0x00044af9) grid_ai3_links_pane

0xd1c4,	// (0x00051262) cell_ai3_links_pane_ParamLimits

0xd1c4,	// (0x00051262) cell_ai3_links_pane

0xd1dc,	// (0x0005127a) bg_popup_sub_pane_cp11

0xd1e9,	// (0x00051287) cell_ai3_links_pane_g1

0x0a5b,	// (0x00044af9) bg_popup_sub_pane_cp12

0xd20e,	// (0x000512ac) heading_ai3_data_pane

0xd216,	// (0x000512b4) list_ai3_gene_pane

0xd222,	// (0x000512c0) popup_ai3_data_window_g1

0xd22a,	// (0x000512c8) heading_ai3_data_pane_g1

0xd232,	// (0x000512d0) heading_ai3_data_pane_t1

0xd240,	// (0x000512de) list_double_ai3_gene_pane_ParamLimits

0xd240,	// (0x000512de) list_double_ai3_gene_pane

0xd24d,	// (0x000512eb) list_single_ai3_gene_pane_ParamLimits

0xd24d,	// (0x000512eb) list_single_ai3_gene_pane

0xc009,	// (0x000500a7) list_highlight_pane_cp7_ParamLimits

0xc009,	// (0x000500a7) list_highlight_pane_cp7

0xd25a,	// (0x000512f8) list_single_a13_gene_pane_t1_ParamLimits

0xd25a,	// (0x000512f8) list_single_a13_gene_pane_t1

0xd271,	// (0x0005130f) list_single_ai3_gene_pane_g1

0xd27a,	// (0x00051318) list_single_ai3_gene_pane_g2

0x0001,

0xfcb4,	// (0x00053d52) list_single_ai3_gene_pane_g

0xd282,	// (0x00051320) list_double_ai3_gene_pane_g1_ParamLimits

0xd282,	// (0x00051320) list_double_ai3_gene_pane_g1

0xd28e,	// (0x0005132c) list_double_ai3_gene_pane_t1_ParamLimits

0xd28e,	// (0x0005132c) list_double_ai3_gene_pane_t1

0xd2aa,	// (0x00051348) list_double_ai3_gene_pane_t2_ParamLimits

0xd2aa,	// (0x00051348) list_double_ai3_gene_pane_t2

0xd2bf,	// (0x0005135d) list_double_ai3_gene_pane_t3_ParamLimits

0xd2bf,	// (0x0005135d) list_double_ai3_gene_pane_t3

0x0002,

0xfcb9,	// (0x00053d57) list_double_ai3_gene_pane_t_ParamLimits

0xfcb9,	// (0x00053d57) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x61c2,	// (0x0004a260) aid_size_min_col_2

0xd16d,	// (0x0005120b) aid_size_min_msg_ParamLimits

0xd16d,	// (0x0005120b) aid_size_min_msg

0xc408,	// (0x000504a6) fep_vkb_top_text_pane_g2_ParamLimits

0xc408,	// (0x000504a6) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x00053bca) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x00053bca) fep_vkb_top_text_pane_g

0x0a5b,	// (0x00044af9) main_hc_apps_shell_pane

0xd2dc,	// (0x0005137a) grid_hc_apps_pane_ParamLimits

0xd2dc,	// (0x0005137a) grid_hc_apps_pane

0xd2ee,	// (0x0005138c) list_hc_apps_pane

0xd2f6,	// (0x00051394) scroll_pane_cp37_ParamLimits

0xd2f6,	// (0x00051394) scroll_pane_cp37

0xd302,	// (0x000513a0) cell_hc_apps_pane_ParamLimits

0xd302,	// (0x000513a0) cell_hc_apps_pane

0xd3b0,	// (0x0005144e) cell_hc_apps_pane_g1_ParamLimits

0xd3b0,	// (0x0005144e) cell_hc_apps_pane_g1

0xd3e0,	// (0x0005147e) cell_hc_apps_pane_g2_ParamLimits

0xd3e0,	// (0x0005147e) cell_hc_apps_pane_g2

0xd3fc,	// (0x0005149a) cell_hc_apps_pane_g3_ParamLimits

0xd3fc,	// (0x0005149a) cell_hc_apps_pane_g3

0x0002,

0xfcc0,	// (0x00053d5e) cell_hc_apps_pane_g_ParamLimits

0xfcc0,	// (0x00053d5e) cell_hc_apps_pane_g

0xd41e,	// (0x000514bc) cell_hc_apps_pane_t1_ParamLimits

0xd41e,	// (0x000514bc) cell_hc_apps_pane_t1

0x0bf5,	// (0x00044c93) grid_highlight_pane_cp10_ParamLimits

0x0bf5,	// (0x00044c93) grid_highlight_pane_cp10

0xd45e,	// (0x000514fc) list_single_hc_apps_pane_ParamLimits

0xd45e,	// (0x000514fc) list_single_hc_apps_pane

0xd4c1,	// (0x0005155f) list_single_hc_apps_pane_g1

0x8be4,	// (0x0004cc82) list_single_hc_apps_pane_g2

0x0001,

0xfcc7,	// (0x00053d65) list_single_hc_apps_pane_g

0x8bfd,	// (0x0004cc9b) list_single_hc_apps_pane_g2_copy1

0x6281,	// (0x0004a31f) list_single_hc_apps_pane_t1

0x0acb,	// (0x00044b69) bg_set_opt_pane_cp_ParamLimits

0x6794,	// (0x0004a832) setting_slider_pane_t1_ParamLimits

0x67ad,	// (0x0004a84b) setting_slider_pane_t2_ParamLimits

0x67c7,	// (0x0004a865) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x000535d7) setting_slider_pane_t_ParamLimits

0x67df,	// (0x0004a87d) slider_set_pane_ParamLimits

0x77a4,	// (0x0004b842) control_pane_g5_ParamLimits

0x77a4,	// (0x0004b842) control_pane_g5

0xadfd,	// (0x0004ee9b) slider_set_pane_g1_ParamLimits

0x84d2,	// (0x0004c570) slider_set_pane_g2_ParamLimits

0x84de,	// (0x0004c57c) slider_set_pane_g3_ParamLimits

0x84f2,	// (0x0004c590) slider_set_pane_g4_ParamLimits

0x850a,	// (0x0004c5a8) slider_set_pane_g5_ParamLimits

0x84de,	// (0x0004c57c) slider_set_pane_g6_ParamLimits

0x8520,	// (0x0004c5be) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x000539d8) slider_set_pane_g_ParamLimits

0x15e2,	// (0x00045680) navi_icon_text_pane_ParamLimits

0x7eb8,	// (0x0004bf56) aid_fill_nsta_2_ParamLimits

0x7ef7,	// (0x0004bf95) aid_touch_tab_arrow_left_ParamLimits

0x7f06,	// (0x0004bfa4) aid_touch_tab_arrow_right_ParamLimits

0x7f73,	// (0x0004c011) clock_nsta_pane_ParamLimits

0xa900,	// (0x0004e99e) navi_icon_pane_g1_ParamLimits

0xa90c,	// (0x0004e9aa) navi_text_pane_t1_ParamLimits

0xbbe9,	// (0x0004fc87) navi_icon_text_pane_g1_ParamLimits

0xbbf5,	// (0x0004fc93) navi_icon_text_pane_t1_ParamLimits

0xd4c1,	// (0x0005155f) list_single_hc_apps_pane_g1_ParamLimits

0x8be4,	// (0x0004cc82) list_single_hc_apps_pane_g2_ParamLimits

0xfcc7,	// (0x00053d65) list_single_hc_apps_pane_g_ParamLimits

0x8bfd,	// (0x0004cc9b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6281,	// (0x0004a31f) list_single_hc_apps_pane_t1_ParamLimits

0x65d8,	// (0x0004a676) popup_toolbar2_fixed_window_ParamLimits

0x65d8,	// (0x0004a676) popup_toolbar2_fixed_window

0x7dce,	// (0x0004be6c) popup_toolbar2_float_window

0x0a5b,	// (0x00044af9) bg_popup_sub_pane_cp27

0xd4da,	// (0x00051578) grid_toolbar2_float_pane

0x0a5b,	// (0x00044af9) bg_popup_sub_pane_cp26

0xd4da,	// (0x00051578) grid_toolbar2_fixed_pane

0xd4e2,	// (0x00051580) cell_toolbar2_fixed_pane_ParamLimits

0xd4e2,	// (0x00051580) cell_toolbar2_fixed_pane

0xd4f2,	// (0x00051590) cell_toolbar2_fixed_pane_g1

0x99ee,	// (0x0004da8c) toolbar2_fixed_button_pane

0x9a6e,	// (0x0004db0c) toolbar2_fixed_button_pane_g1

0x9a76,	// (0x0004db14) toolbar2_fixed_button_pane_g2

0x9a7e,	// (0x0004db1c) toolbar2_fixed_button_pane_g3

0x9a86,	// (0x0004db24) toolbar2_fixed_button_pane_g4

0x9a8e,	// (0x0004db2c) toolbar2_fixed_button_pane_g5

0x9a96,	// (0x0004db34) toolbar2_fixed_button_pane_g6

0x9a9e,	// (0x0004db3c) toolbar2_fixed_button_pane_g7

0x9aa6,	// (0x0004db44) toolbar2_fixed_button_pane_g8

0x9aae,	// (0x0004db4c) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x000538da) toolbar2_fixed_button_pane_g

0xd4fb,	// (0x00051599) cell_toolbar2_float_pane_ParamLimits

0xd4fb,	// (0x00051599) cell_toolbar2_float_pane

0xd50c,	// (0x000515aa) cell_toolbar2_float_pane_g1

0x99ee,	// (0x0004da8c) toolbar2_fixed_button_pane_cp

0xc172,	// (0x00050210) fep_vkb_accented_list_pane_ParamLimits

0xc172,	// (0x00050210) fep_vkb_accented_list_pane

0x89ed,	// (0x0004ca8b) bg_popup_fep_shadow_pane_g9

0x173d,	// (0x000457db) bg_popup_fep_shadow_pane_cp3

0x0f9a,	// (0x00045038) list_accented_list_pane

0xd515,	// (0x000515b3) list_single_accented_list_pane_ParamLimits

0xd515,	// (0x000515b3) list_single_accented_list_pane

0x173d,	// (0x000457db) list_highlight_pane_cp10

0xd526,	// (0x000515c4) list_single_accented_list_pane_t1

0x7d1e,	// (0x0004bdbc) popup_slider_window_ParamLimits

0x7d1e,	// (0x0004bdbc) popup_slider_window

0xd164,	// (0x00051202) aid_indentation_list_msg

0xd5e4,	// (0x00051682) bg_popup_window_pane_cp19

0xd64c,	// (0x000516ea) popup_slider_window_g1

0xd668,	// (0x00051706) popup_slider_window_g2

0xd684,	// (0x00051722) popup_slider_window_g3

0x0005,

0xfccc,	// (0x00053d6a) popup_slider_window_g

0xd6ea,	// (0x00051788) popup_slider_window_t1

0xd75e,	// (0x000517fc) small_volume_slider_vertical_pane

0xc044,	// (0x000500e2) small_volume_slider_vertical_pane_g1

0xc044,	// (0x000500e2) small_volume_slider_vertical_pane_g2

0xd77a,	// (0x00051818) small_volume_slider_vertical_pane_g3

0x0002,

0xfcde,	// (0x00053d7c) small_volume_slider_vertical_pane_g

0x63a8,	// (0x0004a446) area_side_right_pane_ParamLimits

0x63a8,	// (0x0004a446) area_side_right_pane

0x8c19,	// (0x0004ccb7) aid_size_side_button_ParamLimits

0x8c19,	// (0x0004ccb7) aid_size_side_button

0x8c2d,	// (0x0004cccb) grid_sctrl_middle_pane_ParamLimits

0x8c2d,	// (0x0004cccb) grid_sctrl_middle_pane

0x8c4c,	// (0x0004ccea) sctrl_sk_bottom_pane

0x8c5d,	// (0x0004ccfb) sctrl_sk_top_pane

0x8c6f,	// (0x0004cd0d) aid_touch_sctrl_top

0x0bf5,	// (0x00044c93) bg_sctrl_sk_pane_ParamLimits

0x0bf5,	// (0x00044c93) bg_sctrl_sk_pane

0x8c7c,	// (0x0004cd1a) sctrl_sk_top_pane_g1

0x8c89,	// (0x0004cd27) sctrl_sk_top_pane_t1

0x8c6f,	// (0x0004cd0d) aid_touch_sctrl_bottom

0x0bf5,	// (0x00044c93) bg_sctrl_sk_pane_cp_ParamLimits

0x0bf5,	// (0x00044c93) bg_sctrl_sk_pane_cp

0x8ca4,	// (0x0004cd42) sctrl_sk_bottom_pane_g1

0x8c89,	// (0x0004cd27) sctrl_sk_bottom_pane_t1

0x8cad,	// (0x0004cd4b) cell_sctrl_middle_pane_ParamLimits

0x8cad,	// (0x0004cd4b) cell_sctrl_middle_pane

0x8cc8,	// (0x0004cd66) aid_touch_sctrl_middle_ParamLimits

0x8cc8,	// (0x0004cd66) aid_touch_sctrl_middle

0x0e81,	// (0x00044f1f) bg_sctrl_middle_pane_ParamLimits

0x0e81,	// (0x00044f1f) bg_sctrl_middle_pane

0xc2b4,	// (0x00050352) cell_sctrl_middle_pane_g1_ParamLimits

0xc2b4,	// (0x00050352) cell_sctrl_middle_pane_g1

0x8cda,	// (0x0004cd78) cell_sctrl_middle_pane_g2_ParamLimits

0x8cda,	// (0x0004cd78) cell_sctrl_middle_pane_g2

0x0001,

0xfcea,	// (0x00053d88) cell_sctrl_middle_pane_g_ParamLimits

0xfcea,	// (0x00053d88) cell_sctrl_middle_pane_g

0x9a6e,	// (0x0004db0c) bg_sctrl_middle_pane_g1

0x9a76,	// (0x0004db14) bg_sctrl_middle_pane_g2

0x9a7e,	// (0x0004db1c) bg_sctrl_middle_pane_g3

0x9a86,	// (0x0004db24) bg_sctrl_middle_pane_g4

0x9a8e,	// (0x0004db2c) bg_sctrl_middle_pane_g5

0x9a96,	// (0x0004db34) bg_sctrl_middle_pane_g6

0x9a9e,	// (0x0004db3c) bg_sctrl_middle_pane_g7

0x9aa6,	// (0x0004db44) bg_sctrl_middle_pane_g8

0x0007,

0xfcef,	// (0x00053d8d) bg_sctrl_middle_pane_g

0x9aae,	// (0x0004db4c) bg_sctrl_middle_pane_g8_copy1

0x9a6e,	// (0x0004db0c) bg_sctrl_sk_pane_g1

0x9a76,	// (0x0004db14) bg_sctrl_sk_pane_g2

0x9a7e,	// (0x0004db1c) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x000538da) bg_sctrl_sk_pane_g

0x0dc3,	// (0x00044e61) aid_size_touch_scroll_bar

0x9a86,	// (0x0004db24) bg_sctrl_sk_pane_g4

0x9a8e,	// (0x0004db2c) bg_sctrl_sk_pane_g5

0x9a96,	// (0x0004db34) bg_sctrl_sk_pane_g6

0x9a9e,	// (0x0004db3c) bg_sctrl_sk_pane_g7

0x9aa6,	// (0x0004db44) bg_sctrl_sk_pane_g8

0x9aae,	// (0x0004db4c) bg_sctrl_sk_pane_g9

0x7987,	// (0x0004ba25) popup_fep_china_hwr2_fs_candidate_window

0x7991,	// (0x0004ba2f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7991,	// (0x0004ba2f) popup_fep_china_hwr2_fs_control_window

0xc2b4,	// (0x00050352) sctrl_sk_top_pane_g2

0x0001,

0xfce5,	// (0x00053d83) sctrl_sk_top_pane_g

0xd783,	// (0x00051821) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd783,	// (0x00051821) aid_fep_china_hwr2_fs_cell

0xd795,	// (0x00051833) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd795,	// (0x00051833) bg_popup_fep_shadow_pane_cp4

0xd7ac,	// (0x0005184a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7ac,	// (0x0005184a) bg_popup_fep_shadow_pane_cp5

0xd7be,	// (0x0005185c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7be,	// (0x0005185c) popup_fep_china_hwr2_fs_control_bar_grid

0xd7ce,	// (0x0005186c) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7d6,	// (0x00051874) aid_fep_china_hwr2_fs_candi_cell

0x0a5b,	// (0x00044af9) bg_popup_fep_shadow_pane_cp6

0xd7e0,	// (0x0005187e) popup_fep_china_hwr2_fs_candidate_grid

0xd7ea,	// (0x00051888) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7ea,	// (0x00051888) cell_fep_china_hwr2_fs_funtion_grid

0xc044,	// (0x000500e2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd802,	// (0x000518a0) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd802,	// (0x000518a0) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd810,	// (0x000518ae) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd810,	// (0x000518ae) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd00,	// (0x00053d9e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd00,	// (0x00053d9e) cell_fep_china_hwr2_fs_funtion_grid_g

0xd826,	// (0x000518c4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd826,	// (0x000518c4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd83b,	// (0x000518d9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd83b,	// (0x000518d9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd05,	// (0x00053da3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd05,	// (0x00053da3) cell_fep_china_hwr2_fs_funtion_grid_t

0xd857,	// (0x000518f5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd85f,	// (0x000518fd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd867,	// (0x00051905) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0a,	// (0x00053da8) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd86f,	// (0x0005190d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd86f,	// (0x0005190d) cell_fep_china_hwr2_fs_candidate_grid

0xd888,	// (0x00051926) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd890,	// (0x0005192e) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc044,	// (0x000500e2) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc044,	// (0x000500e2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x00053bcf) cell_fep_china_hwr2_fs_candidate_grid_g

0xd898,	// (0x00051936) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7f86,	// (0x0004c024) clock_nsta_pane_cp_24_ParamLimits

0x7f86,	// (0x0004c024) clock_nsta_pane_cp_24

0x8004,	// (0x0004c0a2) indicator_nsta_pane_cp_24_ParamLimits

0x8004,	// (0x0004c0a2) indicator_nsta_pane_cp_24

0xa77c,	// (0x0004e81a) heading_pane_g1

0x0001,

0xf8a1,	// (0x0005393f) heading_pane_g

0xb163,	// (0x0004f201) grid_sct_catagory_button_pane

0xb193,	// (0x0004f231) scroll_pane_cp5_ParamLimits

0xbc37,	// (0x0004fcd5) button_value_adjust_pane_cp5_ParamLimits

0xbc37,	// (0x0004fcd5) button_value_adjust_pane_cp5

0xbd16,	// (0x0004fdb4) form2_midp_time_pane_ParamLimits

0xd8a6,	// (0x00051944) cell_sct_catagory_button_pane_ParamLimits

0xd8a6,	// (0x00051944) cell_sct_catagory_button_pane

0xc009,	// (0x000500a7) bg_button_pane_cp01_ParamLimits

0xc009,	// (0x000500a7) bg_button_pane_cp01

0xc044,	// (0x000500e2) cell_sct_catagory_button_pane_g1

0x7d5d,	// (0x0004bdfb) popup_tb_extension_window

0xd8b8,	// (0x00051956) aid_size_cell_ext_ParamLimits

0xd8b8,	// (0x00051956) aid_size_cell_ext

0x0bf5,	// (0x00044c93) bg_tb_trans_pane_cp1_ParamLimits

0x0bf5,	// (0x00044c93) bg_tb_trans_pane_cp1

0xd8d8,	// (0x00051976) grid_tb_ext_pane_ParamLimits

0xd8d8,	// (0x00051976) grid_tb_ext_pane

0xd908,	// (0x000519a6) cell_tb_ext_pane_ParamLimits

0xd908,	// (0x000519a6) cell_tb_ext_pane

0xd91f,	// (0x000519bd) cell_tb_ext_pane_g1_ParamLimits

0xd91f,	// (0x000519bd) cell_tb_ext_pane_g1

0xd93c,	// (0x000519da) cell_tb_ext_pane_t1

0x0bf5,	// (0x00044c93) list_highlight_pane_cp11_ParamLimits

0x0bf5,	// (0x00044c93) list_highlight_pane_cp11

0x65f7,	// (0x0004a695) popup_uni_indicator_window_ParamLimits

0x65f7,	// (0x0004a695) popup_uni_indicator_window

0x0e81,	// (0x00044f1f) bg_popup_sub_pane_cp14

0xd958,	// (0x000519f6) list_uniindi_pane

0xd964,	// (0x00051a02) uniindi_top_pane

0x0bf5,	// (0x00044c93) bg_uniindi_top_pane

0xd983,	// (0x00051a21) uniindi_top_pane_g1

0xd999,	// (0x00051a37) uniindi_top_pane_g2

0x0003,

0xfd11,	// (0x00053daf) uniindi_top_pane_g

0xd9c3,	// (0x00051a61) uniindi_top_pane_t1

0xd9ed,	// (0x00051a8b) list_single_uniindi_pane_ParamLimits

0xd9ed,	// (0x00051a8b) list_single_uniindi_pane

0xc044,	// (0x000500e2) bg_uniindi_top_pane_g1

0xda00,	// (0x00051a9e) list_single_uniindi_pane_g1

0xda13,	// (0x00051ab1) list_single_uniindi_pane_t1

0x0a5b,	// (0x00044af9) control_bg_pane

0xda38,	// (0x00051ad6) bg_sctrl_sk_pane_cp1

0xda41,	// (0x00051adf) bg_sctrl_sk_pane_cp2

0xda4a,	// (0x00051ae8) control_bg_pane_g1

0xda53,	// (0x00051af1) control_bg_pane_g2

0x0001,

0xfd1a,	// (0x00053db8) control_bg_pane_g

0xba7d,	// (0x0004fb1b) cell_indicator_nsta_pane_g1_ParamLimits

0xba8b,	// (0x0004fb29) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x00053b33) cell_indicator_nsta_pane_g_ParamLimits

0x6003,	// (0x0004a0a1) form2_midp_time_pane_t1_ParamLimits

0x0d75,	// (0x00044e13) main_idle_act4_pane_ParamLimits

0x0d75,	// (0x00044e13) main_idle_act4_pane

0x7d5d,	// (0x0004bdfb) popup_tb_extension_window_ParamLimits

0xd8f8,	// (0x00051996) tb_ext_find_pane_ParamLimits

0xd8f8,	// (0x00051996) tb_ext_find_pane

0xda5c,	// (0x00051afa) ai_gene_pane_1_cp1

0x17be,	// (0x0004585c) ai_gene_pane_2_cp1

0xda64,	// (0x00051b02) list_single_idle_plugin_calendar_pane

0xda6d,	// (0x00051b0b) list_single_idle_plugin_notification_pane

0xda76,	// (0x00051b14) list_single_idle_plugin_player_pane

0xda7f,	// (0x00051b1d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda7f,	// (0x00051b1d) list_single_idle_plugin_shortcut_pane

0xdaa1,	// (0x00051b3f) main_idle_act4_pane_t1

0xdab3,	// (0x00051b51) main_idle_act4_pane_t2

0x0001,

0xfd1f,	// (0x00053dbd) main_idle_act4_pane_t

0xdac5,	// (0x00051b63) middle_sk_idle_act4_pane_ParamLimits

0xdac5,	// (0x00051b63) middle_sk_idle_act4_pane

0xdadb,	// (0x00051b79) popup_clock_digital_analogue_window_cp2

0xdaf5,	// (0x00051b93) shortcut_wheel_idle_act4_pane_ParamLimits

0xdaf5,	// (0x00051b93) shortcut_wheel_idle_act4_pane

0xc044,	// (0x000500e2) shortcut_wheel_idle_act4_pane_g1

0xc044,	// (0x000500e2) shortcut_wheel_idle_act4_pane_g2

0xc044,	// (0x000500e2) shortcut_wheel_idle_act4_pane_g3

0xc044,	// (0x000500e2) shortcut_wheel_idle_act4_pane_g4

0xc044,	// (0x000500e2) shortcut_wheel_idle_act4_pane_g5

0xdb09,	// (0x00051ba7) shortcut_wheel_idle_act4_pane_g6

0xdb11,	// (0x00051baf) shortcut_wheel_idle_act4_pane_g7

0xdb19,	// (0x00051bb7) shortcut_wheel_idle_act4_pane_g8

0xdb21,	// (0x00051bbf) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd24,	// (0x00053dc2) shortcut_wheel_idle_act4_pane_g

0xc2b4,	// (0x00050352) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2b4,	// (0x00050352) middle_sk_idle_act4_pane_g1

0xdb85,	// (0x00051c23) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb85,	// (0x00051c23) middle_sk_idle_act4_pane_g2

0x0001,

0xfd47,	// (0x00053de5) middle_sk_idle_act4_pane_g_ParamLimits

0xfd47,	// (0x00053de5) middle_sk_idle_act4_pane_g

0xdb91,	// (0x00051c2f) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb91,	// (0x00051c2f) middle_sk_idle_act4_pane_t1

0xdbae,	// (0x00051c4c) grid_ai_shortcut_pane_ParamLimits

0xdbae,	// (0x00051c4c) grid_ai_shortcut_pane

0xdbc7,	// (0x00051c65) list_highlight_pane_cp16_ParamLimits

0xdbc7,	// (0x00051c65) list_highlight_pane_cp16

0xdbd4,	// (0x00051c72) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbd4,	// (0x00051c72) list_single_idle_plugin_shortcut_pane_g1

0xdbe0,	// (0x00051c7e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbe0,	// (0x00051c7e) list_single_idle_plugin_shortcut_pane_g2

0xdbf8,	// (0x00051c96) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbf8,	// (0x00051c96) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4c,	// (0x00053dea) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4c,	// (0x00053dea) list_single_idle_plugin_shortcut_pane_g

0xdc0b,	// (0x00051ca9) cell_ai_shortcut_pane_ParamLimits

0xdc0b,	// (0x00051ca9) cell_ai_shortcut_pane

0xdc2f,	// (0x00051ccd) cell_ai_shortcut_pane_g1_ParamLimits

0xdc2f,	// (0x00051ccd) cell_ai_shortcut_pane_g1

0xda5c,	// (0x00051afa) ai_gene_pane_1_cp2

0xdc51,	// (0x00051cef) ai_gene_pane_2_cp2

0xdc59,	// (0x00051cf7) list_highlight_pane_cp15

0xdc62,	// (0x00051d00) list_single_idle_plugin_calendar_pane_g1

0xdc59,	// (0x00051cf7) list_highlight_pane_cp17

0xdc6a,	// (0x00051d08) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc72,	// (0x00051d10) list_single_idle_plugin_player_pane_g1

0xb3bc,	// (0x0004f45a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd53,	// (0x00053df1) list_single_idle_plugin_player_pane_g

0xdc7a,	// (0x00051d18) list_single_idle_plugin_player_pane_t1

0xdc88,	// (0x00051d26) list_single_idle_plugin_player_pane_t2

0xdc96,	// (0x00051d34) list_single_idle_plugin_player_pane_t3

0xdca4,	// (0x00051d42) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd58,	// (0x00053df6) list_single_idle_plugin_player_pane_t

0xdcb2,	// (0x00051d50) wait_bar_pane_cp15

0xdcba,	// (0x00051d58) grid_ai_notification_pane

0xb3bc,	// (0x0004f45a) list_single_idle_plugin_notification_pane_g1

0xdcc3,	// (0x00051d61) cell_ai_notification_pane_ParamLimits

0xdcc3,	// (0x00051d61) cell_ai_notification_pane

0xdcd0,	// (0x00051d6e) cell_ai_notification_pane_g1

0xdcd8,	// (0x00051d76) cell_ai_notification_pane_t1

0xdce6,	// (0x00051d84) tb_ext_find_button_pane

0xdcee,	// (0x00051d8c) tb_ext_find_pane_g1

0xdcf6,	// (0x00051d94) tb_ext_find_pane_t1

0x12d3,	// (0x00045371) tb_ext_find_button_pane_g1

0xdd04,	// (0x00051da2) tb_ext_find_button_pane_g2

0x0001,

0xfd61,	// (0x00053dff) tb_ext_find_button_pane_g

0xdaa1,	// (0x00051b3f) main_idle_act4_pane_t1_ParamLimits

0xdab3,	// (0x00051b51) main_idle_act4_pane_t2_ParamLimits

0xfd1f,	// (0x00053dbd) main_idle_act4_pane_t_ParamLimits

0xdadb,	// (0x00051b79) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdae9,	// (0x00051b87) sat_plugin_idle_act4_pane_ParamLimits

0xdae9,	// (0x00051b87) sat_plugin_idle_act4_pane

0xdd0d,	// (0x00051dab) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd0d,	// (0x00051dab) sat_plugin_idle_act4_pane_t1

0xdd20,	// (0x00051dbe) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd20,	// (0x00051dbe) sat_plugin_idle_act4_pane_t2

0xdd33,	// (0x00051dd1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd33,	// (0x00051dd1) sat_plugin_idle_act4_pane_t3

0xdd46,	// (0x00051de4) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd46,	// (0x00051de4) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd66,	// (0x00053e04) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd66,	// (0x00053e04) sat_plugin_idle_act4_pane_t

0x6540,	// (0x0004a5de) popup_battery_window_ParamLimits

0x6540,	// (0x0004a5de) popup_battery_window

0x0bf5,	// (0x00044c93) bg_popup_sub_pane_cp25_ParamLimits

0x0bf5,	// (0x00044c93) bg_popup_sub_pane_cp25

0xdd59,	// (0x00051df7) popup_battery_window_g1_ParamLimits

0xdd59,	// (0x00051df7) popup_battery_window_g1

0xdd65,	// (0x00051e03) popup_battery_window_t1_ParamLimits

0xdd65,	// (0x00051e03) popup_battery_window_t1

0xdd77,	// (0x00051e15) popup_battery_window_t2_ParamLimits

0xdd77,	// (0x00051e15) popup_battery_window_t2

0x0001,

0xfd6f,	// (0x00053e0d) popup_battery_window_t_ParamLimits

0xfd6f,	// (0x00053e0d) popup_battery_window_t

0x7518,	// (0x0004b5b6) midp_canvas_pane_ParamLimits

0x7591,	// (0x0004b62f) midp_keypad_pane_ParamLimits

0x7591,	// (0x0004b62f) midp_keypad_pane

0x0fc3,	// (0x00045061) main_midp_pane_ParamLimits

0xbaf7,	// (0x0004fb95) signal_pane_g2_cp_ParamLimits

0xdd94,	// (0x00051e32) aid_size_cell_midp_keypad_ParamLimits

0xdd94,	// (0x00051e32) aid_size_cell_midp_keypad

0xddae,	// (0x00051e4c) midp_keyp_game_grid_pane_ParamLimits

0xddae,	// (0x00051e4c) midp_keyp_game_grid_pane

0xddce,	// (0x00051e6c) midp_keyp_rocker_pane_ParamLimits

0xddce,	// (0x00051e6c) midp_keyp_rocker_pane

0xde07,	// (0x00051ea5) midp_keyp_sk_left_pane_ParamLimits

0xde07,	// (0x00051ea5) midp_keyp_sk_left_pane

0xde61,	// (0x00051eff) midp_keyp_sk_right_pane_ParamLimits

0xde61,	// (0x00051eff) midp_keyp_sk_right_pane

0x0a5b,	// (0x00044af9) bg_button_pane_cp03

0xdebb,	// (0x00051f59) midp_keyp_sk_left_pane_g1

0x0a5b,	// (0x00044af9) bg_button_pane_cp04

0xdebb,	// (0x00051f59) midp_keyp_sk_right_pane_g1

0xc044,	// (0x000500e2) midp_keyp_rocker_pane_g1

0xdec4,	// (0x00051f62) keyp_game_cell_pane_ParamLimits

0xdec4,	// (0x00051f62) keyp_game_cell_pane

0x0a5b,	// (0x00044af9) bg_button_pane_cp02

0xded7,	// (0x00051f75) keyp_game_cell_pane_g1

0x6576,	// (0x0004a614) popup_fep_vkb2_window_ParamLimits

0x6576,	// (0x0004a614) popup_fep_vkb2_window

0x8cf8,	// (0x0004cd96) aid_size_cell_vkb2_ParamLimits

0x8cf8,	// (0x0004cd96) aid_size_cell_vkb2

0x8d44,	// (0x0004cde2) popup_fep_vkb2_window_g1_ParamLimits

0x8d44,	// (0x0004cde2) popup_fep_vkb2_window_g1

0x8d8c,	// (0x0004ce2a) vkb2_area_bottom_pane_ParamLimits

0x8d8c,	// (0x0004ce2a) vkb2_area_bottom_pane

0x8dd8,	// (0x0004ce76) vkb2_area_keypad_pane_ParamLimits

0x8dd8,	// (0x0004ce76) vkb2_area_keypad_pane

0x8e1a,	// (0x0004ceb8) vkb2_area_top_pane_ParamLimits

0x8e1a,	// (0x0004ceb8) vkb2_area_top_pane

0x8e99,	// (0x0004cf37) vkb2_top_entry_pane_ParamLimits

0x8e99,	// (0x0004cf37) vkb2_top_entry_pane

0x8ec3,	// (0x0004cf61) vkb2_top_grid_left_pane_ParamLimits

0x8ec3,	// (0x0004cf61) vkb2_top_grid_left_pane

0x8ee2,	// (0x0004cf80) vkb2_top_grid_right_pane_ParamLimits

0x8ee2,	// (0x0004cf80) vkb2_top_grid_right_pane

0x8f01,	// (0x0004cf9f) vkb2_cell_keypad_pane_ParamLimits

0x8f01,	// (0x0004cf9f) vkb2_cell_keypad_pane

0x8fd2,	// (0x0004d070) vkb2_area_bottom_grid_pane_ParamLimits

0x8fd2,	// (0x0004d070) vkb2_area_bottom_grid_pane

0x8ff8,	// (0x0004d096) vkb2_area_bottom_pane_g1_ParamLimits

0x8ff8,	// (0x0004d096) vkb2_area_bottom_pane_g1

0x901c,	// (0x0004d0ba) vkb2_area_bottom_pane_g2_ParamLimits

0x901c,	// (0x0004d0ba) vkb2_area_bottom_pane_g2

0x904a,	// (0x0004d0e8) vkb2_area_bottom_pane_g3_ParamLimits

0x904a,	// (0x0004d0e8) vkb2_area_bottom_pane_g3

0x0002,

0xfd74,	// (0x00053e12) vkb2_area_bottom_pane_g_ParamLimits

0xfd74,	// (0x00053e12) vkb2_area_bottom_pane_g

0x90ab,	// (0x0004d149) vkb2_top_cell_left_pane_ParamLimits

0x90ab,	// (0x0004d149) vkb2_top_cell_left_pane

0xdee8,	// (0x00051f86) vkb2_top_entry_pane_g1_ParamLimits

0xdee8,	// (0x00051f86) vkb2_top_entry_pane_g1

0xdef6,	// (0x00051f94) vkb2_top_entry_pane_t1_ParamLimits

0xdef6,	// (0x00051f94) vkb2_top_entry_pane_t1

0xdf28,	// (0x00051fc6) vkb2_top_entry_pane_t2_ParamLimits

0xdf28,	// (0x00051fc6) vkb2_top_entry_pane_t2

0xdf5a,	// (0x00051ff8) vkb2_top_entry_pane_t3_ParamLimits

0xdf5a,	// (0x00051ff8) vkb2_top_entry_pane_t3

0x0002,

0xfd7b,	// (0x00053e19) vkb2_top_entry_pane_t_ParamLimits

0xfd7b,	// (0x00053e19) vkb2_top_entry_pane_t

0x90f8,	// (0x0004d196) vkb2_top_grid_right_pane_g1_ParamLimits

0x90f8,	// (0x0004d196) vkb2_top_grid_right_pane_g1

0x910e,	// (0x0004d1ac) vkb2_top_grid_right_pane_g2_ParamLimits

0x910e,	// (0x0004d1ac) vkb2_top_grid_right_pane_g2

0x9126,	// (0x0004d1c4) vkb2_top_grid_right_pane_g3_ParamLimits

0x9126,	// (0x0004d1c4) vkb2_top_grid_right_pane_g3

0x913e,	// (0x0004d1dc) vkb2_top_grid_right_pane_g4_ParamLimits

0x913e,	// (0x0004d1dc) vkb2_top_grid_right_pane_g4

0x0003,

0xfd82,	// (0x00053e20) vkb2_top_grid_right_pane_g_ParamLimits

0xfd82,	// (0x00053e20) vkb2_top_grid_right_pane_g

0x9154,	// (0x0004d1f2) vkb2_top_cell_left_pane_g1

0x916b,	// (0x0004d209) vkb2_cell_keypad_pane_g1_ParamLimits

0x916b,	// (0x0004d209) vkb2_cell_keypad_pane_g1

0xdf7e,	// (0x0005201c) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf7e,	// (0x0005201c) vkb2_cell_keypad_pane_t1

0x9179,	// (0x0004d217) vkb2_cell_bottom_grid_pane_ParamLimits

0x9179,	// (0x0004d217) vkb2_cell_bottom_grid_pane

0x91b2,	// (0x0004d250) vkb2_cell_bottom_grid_pane_g1

0xdb29,	// (0x00051bc7) aid_call2_pane_cp02

0xdb31,	// (0x00051bcf) aid_call_pane_cp02

0xdb39,	// (0x00051bd7) clock_digital_number_pane_cp10

0xdb41,	// (0x00051bdf) clock_digital_number_pane_cp11

0xdb49,	// (0x00051be7) clock_digital_number_pane_cp12

0xdb51,	// (0x00051bef) clock_digital_number_pane_cp13

0xdb59,	// (0x00051bf7) clock_digital_separator_pane_cp10

0x12d3,	// (0x00045371) popup_clock_digital_analogue_window_cp2_g1

0x12d3,	// (0x00045371) popup_clock_digital_analogue_window_cp2_g2

0xdb61,	// (0x00051bff) popup_clock_digital_analogue_window_cp2_g3

0x12d3,	// (0x00045371) popup_clock_digital_analogue_window_cp2_g4

0xdb61,	// (0x00051bff) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd37,	// (0x00053dd5) popup_clock_digital_analogue_window_cp2_g

0xdb69,	// (0x00051c07) popup_clock_digital_analogue_window_cp2_t1

0xdb77,	// (0x00051c15) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd42,	// (0x00053de0) popup_clock_digital_analogue_window_cp2_t

0xc044,	// (0x000500e2) clock_digital_number_pane_cp10_g1

0xc044,	// (0x000500e2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x00053bcf) clock_digital_number_pane_cp10_g

0xc044,	// (0x000500e2) clock_digital_separator_pane_cp10_g1

0xc044,	// (0x000500e2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x00053bcf) clock_digital_separator_pane_cp10_g

0xd9a5,	// (0x00051a43) uniindi_top_pane_g3

0xd9b6,	// (0x00051a54) uniindi_top_pane_g4

0x8f8c,	// (0x0004d02a) vkb2_row_keypad_pane_ParamLimits

0x8f8c,	// (0x0004d02a) vkb2_row_keypad_pane

0x91d2,	// (0x0004d270) vkb2_cell_t_keypad_pane_ParamLimits

0x91d2,	// (0x0004d270) vkb2_cell_t_keypad_pane

0x91e2,	// (0x0004d280) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x91e2,	// (0x0004d280) vkb2_cell_t_keypad_pane_cp08

0x91f5,	// (0x0004d293) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x91f5,	// (0x0004d293) vkb2_cell_t_keypad_pane_cp09

0x9209,	// (0x0004d2a7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9209,	// (0x0004d2a7) vkb2_cell_t_keypad_pane_cp01

0x921a,	// (0x0004d2b8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x921a,	// (0x0004d2b8) vkb2_cell_t_keypad_pane_cp02

0x922b,	// (0x0004d2c9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x922b,	// (0x0004d2c9) vkb2_cell_t_keypad_pane_cp03

0x923c,	// (0x0004d2da) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x923c,	// (0x0004d2da) vkb2_cell_t_keypad_pane_cp04

0x924d,	// (0x0004d2eb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x924d,	// (0x0004d2eb) vkb2_cell_t_keypad_pane_cp05

0x925e,	// (0x0004d2fc) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x925e,	// (0x0004d2fc) vkb2_cell_t_keypad_pane_cp06

0x926f,	// (0x0004d30d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x926f,	// (0x0004d30d) vkb2_cell_t_keypad_pane_cp07

0x9280,	// (0x0004d31e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9280,	// (0x0004d31e) vkb2_cell_t_keypad_pane_cp10

0xc2b4,	// (0x00050352) vkb2_cell_t_keypad_pane_g1

0xdf95,	// (0x00052033) vkb2_cell_t_keypad_pane_t1

0x0a5b,	// (0x00044af9) popup_grid_graphic2_window

0xdfa7,	// (0x00052045) aid_size_cell_graphic2_ParamLimits

0xdfa7,	// (0x00052045) aid_size_cell_graphic2

0xdfdf,	// (0x0005207d) bg_popup_window_pane_cp21_ParamLimits

0xdfdf,	// (0x0005207d) bg_popup_window_pane_cp21

0xdfed,	// (0x0005208b) graphic2_pages_pane_ParamLimits

0xdfed,	// (0x0005208b) graphic2_pages_pane

0xe033,	// (0x000520d1) grid_graphic2_control_pane_ParamLimits

0xe033,	// (0x000520d1) grid_graphic2_control_pane

0xe071,	// (0x0005210f) grid_graphic2_pane_ParamLimits

0xe071,	// (0x0005210f) grid_graphic2_pane

0xe0e5,	// (0x00052183) cell_graphic2_pane

0x0a5b,	// (0x00044af9) main_comp_mode_pane

0xd216,	// (0x000512b4) list_ai3_gene_pane_ParamLimits

0xd5e4,	// (0x00051682) bg_popup_window_pane_cp19_ParamLimits

0xd5f0,	// (0x0005168e) bg_touch_area_indi_pane_ParamLimits

0xd5f0,	// (0x0005168e) bg_touch_area_indi_pane

0xd606,	// (0x000516a4) bg_touch_area_indi_pane_cp01_ParamLimits

0xd606,	// (0x000516a4) bg_touch_area_indi_pane_cp01

0xd61c,	// (0x000516ba) bg_touch_area_indi_pane_cp02_ParamLimits

0xd61c,	// (0x000516ba) bg_touch_area_indi_pane_cp02

0xd632,	// (0x000516d0) bg_touch_area_indi_pane_cp03_ParamLimits

0xd632,	// (0x000516d0) bg_touch_area_indi_pane_cp03

0xd64c,	// (0x000516ea) popup_slider_window_g1_ParamLimits

0xd668,	// (0x00051706) popup_slider_window_g2_ParamLimits

0xd684,	// (0x00051722) popup_slider_window_g3_ParamLimits

0xfccc,	// (0x00053d6a) popup_slider_window_g_ParamLimits

0xd6ea,	// (0x00051788) popup_slider_window_t1_ParamLimits

0xd75e,	// (0x000517fc) small_volume_slider_vertical_pane_ParamLimits

0xe0e5,	// (0x00052183) cell_graphic2_pane_ParamLimits

0xe134,	// (0x000521d2) bg_button_pane_cp10_ParamLimits

0xe134,	// (0x000521d2) bg_button_pane_cp10

0xe147,	// (0x000521e5) bg_button_pane_cp11_ParamLimits

0xe147,	// (0x000521e5) bg_button_pane_cp11

0xe15a,	// (0x000521f8) graphic2_pages_pane_g1_ParamLimits

0xe15a,	// (0x000521f8) graphic2_pages_pane_g1

0xe175,	// (0x00052213) graphic2_pages_pane_g2_ParamLimits

0xe175,	// (0x00052213) graphic2_pages_pane_g2

0x0001,

0xfd90,	// (0x00053e2e) graphic2_pages_pane_g_ParamLimits

0xfd90,	// (0x00053e2e) graphic2_pages_pane_g

0xe18d,	// (0x0005222b) graphic2_pages_pane_t1_ParamLimits

0xe18d,	// (0x0005222b) graphic2_pages_pane_t1

0xe1a5,	// (0x00052243) cell_graphic2_control_pane_ParamLimits

0xe1a5,	// (0x00052243) cell_graphic2_control_pane

0xe1c3,	// (0x00052261) cell_graphic2_pane_g1_ParamLimits

0xe1c3,	// (0x00052261) cell_graphic2_pane_g1

0xe1d0,	// (0x0005226e) cell_graphic2_pane_g2_ParamLimits

0xe1d0,	// (0x0005226e) cell_graphic2_pane_g2

0xe1dd,	// (0x0005227b) cell_graphic2_pane_g3_ParamLimits

0xe1dd,	// (0x0005227b) cell_graphic2_pane_g3

0xe1ea,	// (0x00052288) cell_graphic2_pane_g4_ParamLimits

0xe1ea,	// (0x00052288) cell_graphic2_pane_g4

0xe1f7,	// (0x00052295) cell_graphic2_pane_g5_ParamLimits

0xe1f7,	// (0x00052295) cell_graphic2_pane_g5

0x0004,

0xfd95,	// (0x00053e33) cell_graphic2_pane_g_ParamLimits

0xfd95,	// (0x00053e33) cell_graphic2_pane_g

0xe210,	// (0x000522ae) cell_graphic2_pane_t1_ParamLimits

0xe210,	// (0x000522ae) cell_graphic2_pane_t1

0x9afa,	// (0x0004db98) grid_highlight_pane_cp11_ParamLimits

0x9afa,	// (0x0004db98) grid_highlight_pane_cp11

0x0bf5,	// (0x00044c93) bg_button_pane_cp05

0xe246,	// (0x000522e4) cell_graphic2_control_pane_g1

0xc044,	// (0x000500e2) bg_touch_area_indi_pane_g1

0xe26e,	// (0x0005230c) aid_cmod_rocker_key_size

0xe278,	// (0x00052316) aid_cmode_itu_key_size

0xe282,	// (0x00052320) main_cmode_video_pane

0xe28c,	// (0x0005232a) main_comp_mode_itu_pane

0xe298,	// (0x00052336) main_comp_mode_rocker_pane

0xe2a4,	// (0x00052342) cell_cmode_rocker_pane_ParamLimits

0xe2a4,	// (0x00052342) cell_cmode_rocker_pane

0xe2b6,	// (0x00052354) cell_cmode_itu_pane_ParamLimits

0xe2b6,	// (0x00052354) cell_cmode_itu_pane

0x0e81,	// (0x00044f1f) bg_button_pane_cp06_ParamLimits

0x0e81,	// (0x00044f1f) bg_button_pane_cp06

0xc2b4,	// (0x00050352) cell_cmode_rocker_pane_g1_ParamLimits

0xc2b4,	// (0x00050352) cell_cmode_rocker_pane_g1

0xd802,	// (0x000518a0) cell_cmode_rocker_pane_g2_ParamLimits

0xd802,	// (0x000518a0) cell_cmode_rocker_pane_g2

0x0001,

0xfda5,	// (0x00053e43) cell_cmode_rocker_pane_g_ParamLimits

0xfda5,	// (0x00053e43) cell_cmode_rocker_pane_g

0x0a5b,	// (0x00044af9) bg_button_pane_cp07

0xe2cb,	// (0x00052369) cell_cmode_itu_pane_g1

0xe2d4,	// (0x00052372) cell_cmode_itu_pane_t1

0xe2e2,	// (0x00052380) cell_cmode_itu_pane_t2

0x0001,

0xfdaa,	// (0x00053e48) cell_cmode_itu_pane_t

0xda28,	// (0x00051ac6) aid_touch_ctrl_left

0xda30,	// (0x00051ace) aid_touch_ctrl_right

0x0a5b,	// (0x00044af9) compa_mode_pane

0xe2f0,	// (0x0005238e) aid_cmod_rocker_key_size_cp

0xe2fa,	// (0x00052398) aid_cmode_itu_key_size_cp

0xe304,	// (0x000523a2) compa_mode_pane_g1

0xe30c,	// (0x000523aa) compa_mode_pane_g2

0xe314,	// (0x000523b2) compa_mode_pane_g3

0x0002,

0xfdaf,	// (0x00053e4d) compa_mode_pane_g

0xe31c,	// (0x000523ba) main_comp_mode_itu_pane_cp

0xe324,	// (0x000523c2) main_comp_mode_rocker_pane_cp

0xe32c,	// (0x000523ca) cell_cmode_itu_pane_cp_ParamLimits

0xe32c,	// (0x000523ca) cell_cmode_itu_pane_cp

0xe341,	// (0x000523df) cell_cmode_rocker_pane_cp_ParamLimits

0xe341,	// (0x000523df) cell_cmode_rocker_pane_cp

0x0e81,	// (0x00044f1f) bg_button_pane_cp06_cp_ParamLimits

0x0e81,	// (0x00044f1f) bg_button_pane_cp06_cp

0xc2b4,	// (0x00050352) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2b4,	// (0x00050352) cell_cmode_rocker_pane_g1_cp

0xc044,	// (0x000500e2) cell_cmode_rocker_pane_g2_cp

0x0a5b,	// (0x00044af9) bg_button_pane_cp07_cp

0xe353,	// (0x000523f1) cell_cmode_itu_pane_g1_cp

0xe35c,	// (0x000523fa) cell_cmode_itu_pane_t1_cp

0xe35c,	// (0x000523fa) cell_cmode_itu_pane_t2_cp

0xaf97,	// (0x0004f035) settings_code_pane_cp2

0x0acb,	// (0x00044b69) bg_popup_window_pane_cp3_ParamLimits

0x0d0e,	// (0x00044dac) heading_pane_cp3_ParamLimits

0x0d1d,	// (0x00044dbb) listscroll_popup_graphic_pane_ParamLimits

0x87d1,	// (0x0004c86f) fep_hwr_aid_pane_ParamLimits

0x8c6f,	// (0x0004cd0d) aid_touch_sctrl_top_ParamLimits

0x8c7c,	// (0x0004cd1a) sctrl_sk_top_pane_g1_ParamLimits

0xc2b4,	// (0x00050352) sctrl_sk_top_pane_g2_ParamLimits

0xfce5,	// (0x00053d83) sctrl_sk_top_pane_g_ParamLimits

0x8c89,	// (0x0004cd27) sctrl_sk_top_pane_t1_ParamLimits

0x8c6f,	// (0x0004cd0d) aid_touch_sctrl_bottom_ParamLimits

0x8c89,	// (0x0004cd27) sctrl_sk_bottom_pane_t1_ParamLimits

0xd971,	// (0x00051a0f) aid_area_touch_clock

0x8e60,	// (0x0004cefe) aid_vkb2_area_top_pane_cell_ParamLimits

0x8e60,	// (0x0004cefe) aid_vkb2_area_top_pane_cell

0x8fae,	// (0x0004d04c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8fae,	// (0x0004d04c) aid_vkb2_area_bottom_pane_cell

0xdee0,	// (0x00051f7e) popup_char_count_window

0xe36a,	// (0x00052408) popup_char_count_window_g1

0xe373,	// (0x00052411) popup_char_count_window_g2

0xe37c,	// (0x0005241a) popup_char_count_window_g3

0x0002,

0xfdb6,	// (0x00053e54) popup_char_count_window_g

0xe385,	// (0x00052423) popup_char_count_window_t1

0x8d22,	// (0x0004cdc0) popup_fep_char_preview_window_ParamLimits

0x8d22,	// (0x0004cdc0) popup_fep_char_preview_window

0x8e7e,	// (0x0004cf1c) vkb2_top_candi_pane_ParamLimits

0x8e7e,	// (0x0004cf1c) vkb2_top_candi_pane

0xe393,	// (0x00052431) cell_vkb2_top_candi_pane_ParamLimits

0xe393,	// (0x00052431) cell_vkb2_top_candi_pane

0xa114,	// (0x0004e1b2) bg_popup_fep_char_preview_window_ParamLimits

0xa114,	// (0x0004e1b2) bg_popup_fep_char_preview_window

0x9295,	// (0x0004d333) popup_fep_char_preview_window_t1_ParamLimits

0x9295,	// (0x0004d333) popup_fep_char_preview_window_t1

0xe3dd,	// (0x0005247b) bg_popup_fep_char_preview_window_g1

0xe3e5,	// (0x00052483) bg_popup_fep_char_preview_window_g2

0xe3ed,	// (0x0005248b) bg_popup_fep_char_preview_window_g3

0xe3f5,	// (0x00052493) bg_popup_fep_char_preview_window_g4

0xe3fd,	// (0x0005249b) bg_popup_fep_char_preview_window_g5

0xe405,	// (0x000524a3) bg_popup_fep_char_preview_window_g6

0xe40d,	// (0x000524ab) bg_popup_fep_char_preview_window_g7

0xe415,	// (0x000524b3) bg_popup_fep_char_preview_window_g8

0xe41d,	// (0x000524bb) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbd,	// (0x00053e5b) bg_popup_fep_char_preview_window_g

0xc2b4,	// (0x00050352) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2b4,	// (0x00050352) cell_vkb2_top_candi_pane_g1

0xc5cb,	// (0x00050669) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5cb,	// (0x00050669) cell_vkb2_top_candi_pane_g2

0xc5ec,	// (0x0005068a) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5ec,	// (0x0005068a) cell_vkb2_top_candi_pane_g3

0x92d7,	// (0x0004d375) cell_vkb2_top_candi_pane_g4_ParamLimits

0x92d7,	// (0x0004d375) cell_vkb2_top_candi_pane_g4

0xc82b,	// (0x000508c9) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc82b,	// (0x000508c9) cell_vkb2_top_candi_pane_g5

0xd802,	// (0x000518a0) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd802,	// (0x000518a0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd2,	// (0x00053e70) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd2,	// (0x00053e70) cell_vkb2_top_candi_pane_g

0x92f8,	// (0x0004d396) cell_vkb2_top_candi_pane_t1

0x84be,	// (0x0004c55c) aid_size_touch_slider_mark_ParamLimits

0x84be,	// (0x0004c55c) aid_size_touch_slider_mark

0xe023,	// (0x000520c1) grid_graphic2_catg_pane_ParamLimits

0xe023,	// (0x000520c1) grid_graphic2_catg_pane

0xe0c1,	// (0x0005215f) popup_grid_graphic2_window_t1_ParamLimits

0xe0c1,	// (0x0005215f) popup_grid_graphic2_window_t1

0xe0d3,	// (0x00052171) popup_grid_graphic2_window_t2_ParamLimits

0xe0d3,	// (0x00052171) popup_grid_graphic2_window_t2

0x0001,

0xfd8b,	// (0x00053e29) popup_grid_graphic2_window_t_ParamLimits

0xfd8b,	// (0x00053e29) popup_grid_graphic2_window_t

0x0bf5,	// (0x00044c93) bg_button_pane_cp05_ParamLimits

0xe246,	// (0x000522e4) cell_graphic2_control_pane_g1_ParamLimits

0xe425,	// (0x000524c3) cell_graphic2_catg_pane_ParamLimits

0xe425,	// (0x000524c3) cell_graphic2_catg_pane

0x0a5b,	// (0x00044af9) bg_button_pane_cp12

0xe437,	// (0x000524d5) cell_graphic2_catg_pane_g1

0xd93c,	// (0x000519da) cell_tb_ext_pane_t1_ParamLimits

0x90cb,	// (0x0004d169) vkb2_top_cell_right_narrow_pane_ParamLimits

0x90cb,	// (0x0004d169) vkb2_top_cell_right_narrow_pane

0x90e3,	// (0x0004d181) vkb2_top_cell_right_wide_pane_ParamLimits

0x90e3,	// (0x0004d181) vkb2_top_cell_right_wide_pane

0x87c3,	// (0x0004c861) bg_vkb2_func_pane_ParamLimits

0x87c3,	// (0x0004c861) bg_vkb2_func_pane

0x9154,	// (0x0004d1f2) vkb2_top_cell_left_pane_g1_ParamLimits

0x87c3,	// (0x0004c861) bg_vkb2_fuc_pane_cp03_ParamLimits

0x87c3,	// (0x0004c861) bg_vkb2_fuc_pane_cp03

0x91b2,	// (0x0004d250) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a76,	// (0x0004db14) bg_vkb2_func_pane_g1

0x9a7e,	// (0x0004db1c) bg_vkb2_func_pane_g2

0x9a8e,	// (0x0004db2c) bg_vkb2_func_pane_g3

0x9a86,	// (0x0004db24) bg_vkb2_func_pane_g4

0x9a96,	// (0x0004db34) bg_vkb2_func_pane_g5

0x9a9e,	// (0x0004db3c) bg_vkb2_func_pane_g6

0x9aa6,	// (0x0004db44) bg_vkb2_func_pane_g7

0x9aae,	// (0x0004db4c) bg_vkb2_func_pane_g8

0x9a6e,	// (0x0004db0c) bg_vkb2_func_pane_g9

0x0008,

0xfddf,	// (0x00053e7d) bg_vkb2_func_pane_g

0x87c3,	// (0x0004c861) bg_vkb2_fuc_pane_cp01_ParamLimits

0x87c3,	// (0x0004c861) bg_vkb2_fuc_pane_cp01

0x9154,	// (0x0004d1f2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9154,	// (0x0004d1f2) vkb2_top_cell_right_wide_pane_g1

0x87c3,	// (0x0004c861) bg_vkb2_fuc_pane_cp02_ParamLimits

0x87c3,	// (0x0004c861) bg_vkb2_fuc_pane_cp02

0x9317,	// (0x0004d3b5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9317,	// (0x0004d3b5) vkb2_top_cell_right_narrow_pane_g1

0xd55e,	// (0x000515fc) aid_touch_area_decrease_ParamLimits

0xd55e,	// (0x000515fc) aid_touch_area_decrease

0xd582,	// (0x00051620) aid_touch_area_increase_ParamLimits

0xd582,	// (0x00051620) aid_touch_area_increase

0xd59a,	// (0x00051638) aid_touch_area_mute_ParamLimits

0xd59a,	// (0x00051638) aid_touch_area_mute

0xd5b6,	// (0x00051654) aid_touch_area_slider_ParamLimits

0xd5b6,	// (0x00051654) aid_touch_area_slider

0xd6a0,	// (0x0005173e) popup_slider_window_g4_ParamLimits

0xd6a0,	// (0x0005173e) popup_slider_window_g4

0xd6b8,	// (0x00051756) popup_slider_window_g5_ParamLimits

0xd6b8,	// (0x00051756) popup_slider_window_g5

0xd6da,	// (0x00051778) popup_slider_window_g6_ParamLimits

0xd6da,	// (0x00051778) popup_slider_window_g6

0xd718,	// (0x000517b6) popup_slider_window_t2_ParamLimits

0xd718,	// (0x000517b6) popup_slider_window_t2

0x0001,

0xfcd9,	// (0x00053d77) popup_slider_window_t_ParamLimits

0xfcd9,	// (0x00053d77) popup_slider_window_t

0xd730,	// (0x000517ce) slider_pane_ParamLimits

0xd730,	// (0x000517ce) slider_pane

0xe440,	// (0x000524de) slider_pane_g1_ParamLimits

0xe440,	// (0x000524de) slider_pane_g1

0xe454,	// (0x000524f2) slider_pane_g2_ParamLimits

0xe454,	// (0x000524f2) slider_pane_g2

0xe46a,	// (0x00052508) slider_pane_g3_ParamLimits

0xe46a,	// (0x00052508) slider_pane_g3

0x0003,

0xfdf2,	// (0x00053e90) slider_pane_g_ParamLimits

0xfdf2,	// (0x00053e90) slider_pane_g

0x7db9,	// (0x0004be57) popup_tb_float_extension_window_ParamLimits

0x7db9,	// (0x0004be57) popup_tb_float_extension_window

0xe496,	// (0x00052534) aid_size_cell_tb_float_ext

0x0a5b,	// (0x00044af9) bg_popup_sub_window_cp28

0xe4a2,	// (0x00052540) grid_tb_float_ext_pane

0xe4ac,	// (0x0005254a) cell_tb_float_ext_pane_ParamLimits

0xe4ac,	// (0x0005254a) cell_tb_float_ext_pane

0xe4c6,	// (0x00052564) cell_tb_float_ext_pane_g1

0xe4cf,	// (0x0005256d) grid_highlight_pane_cp12

0x8904,	// (0x0004c9a2) cell_last_hwr_side_pane_ParamLimits

0x8904,	// (0x0004c9a2) cell_last_hwr_side_pane

0xc044,	// (0x000500e2) cell_last_hwr_side_pane_g1

0xe4d8,	// (0x00052576) cell_last_hwr_side_pane_g2

0x0001,

0xfdfb,	// (0x00053e99) cell_last_hwr_side_pane_g

0x907a,	// (0x0004d118) vkb2_area_bottom_space_btn_pane_ParamLimits

0x907a,	// (0x0004d118) vkb2_area_bottom_space_btn_pane

0xc2b4,	// (0x00050352) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf95,	// (0x00052033) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x92f8,	// (0x0004d396) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9337,	// (0x0004d3d5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9337,	// (0x0004d3d5) vkb2_area_bottom_space_btn_pane_g1

0x9371,	// (0x0004d40f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9371,	// (0x0004d40f) vkb2_area_bottom_space_btn_pane_g2

0x93a7,	// (0x0004d445) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x93a7,	// (0x0004d445) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe00,	// (0x00053e9e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe00,	// (0x00053e9e) vkb2_area_bottom_space_btn_pane_g

0x8878,	// (0x0004c916) cel_fep_hwr_func_pane_ParamLimits

0x8878,	// (0x0004c916) cel_fep_hwr_func_pane

0x88b4,	// (0x0004c952) cell_hwr_side_button_pane_ParamLimits

0x88b4,	// (0x0004c952) cell_hwr_side_button_pane

0xd971,	// (0x00051a0f) aid_area_touch_clock_ParamLimits

0x0bf5,	// (0x00044c93) bg_uniindi_top_pane_ParamLimits

0xd983,	// (0x00051a21) uniindi_top_pane_g1_ParamLimits

0xd999,	// (0x00051a37) uniindi_top_pane_g2_ParamLimits

0xd9a5,	// (0x00051a43) uniindi_top_pane_g3_ParamLimits

0xd9b6,	// (0x00051a54) uniindi_top_pane_g4_ParamLimits

0xfd11,	// (0x00053daf) uniindi_top_pane_g_ParamLimits

0xd9c3,	// (0x00051a61) uniindi_top_pane_t1_ParamLimits

0x0bf5,	// (0x00044c93) bg_vkb2_func_pane_cp01_ParamLimits

0x0bf5,	// (0x00044c93) bg_vkb2_func_pane_cp01

0xe4e1,	// (0x0005257f) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e1,	// (0x0005257f) cel_fep_hwr_func_pane_g1

0x0bf5,	// (0x00044c93) bg_vkb2_func_pane_cp02_ParamLimits

0x0bf5,	// (0x00044c93) bg_vkb2_func_pane_cp02

0xe4e1,	// (0x0005257f) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e1,	// (0x0005257f) cell_hwr_side_button_pane_g1

0x98f2,	// (0x0004d990) status_pane_g4_ParamLimits

0x98f2,	// (0x0004d990) status_pane_g4

0x990c,	// (0x0004d9aa) status_pane_t1

0xbd7f,	// (0x0004fe1d) form2_midp_gauge_slider_cont_pane

0xbd87,	// (0x0004fe25) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd99,	// (0x0004fe37) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdab,	// (0x0004fe49) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x00053b82) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdbd,	// (0x0004fe5b) form2_midp_slider_pane_ParamLimits

0x8cea,	// (0x0004cd88) aid_size_cell_func_vkb2_ParamLimits

0x8cea,	// (0x0004cd88) aid_size_cell_func_vkb2

0xe482,	// (0x00052520) slider_pane_g4_ParamLimits

0xe482,	// (0x00052520) slider_pane_g4

0x93f1,	// (0x0004d48f) form2_midp_gauge_slider_pane_t2_cp01

0x93ff,	// (0x0004d49d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x93ff,	// (0x0004d49d) form2_midp_gauge_slider_pane_t3_cp01

0x941c,	// (0x0004d4ba) form2_midp_slider_pane_cp01

0x0a5b,	// (0x00044af9) navi_smil_pane

0xe51a,	// (0x000525b8) navi_smil_pane_g1

0xe522,	// (0x000525c0) navi_smil_pane_t1

0xe4ef,	// (0x0005258d) form2_midp_slider_pane_g1

0xe4f8,	// (0x00052596) form2_midp_slider_pane_g2

0xe500,	// (0x0005259e) form2_midp_slider_pane_g3

0xe4ef,	// (0x0005258d) form2_midp_slider_pane_g4

0xe508,	// (0x000525a6) form2_midp_slider_pane_g5

0x0004,

0xfe09,	// (0x00053ea7) form2_midp_slider_pane_g

0x93e1,	// (0x0004d47f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x93e1,	// (0x0004d47f) vkb2_area_bottom_space_btn_pane_g4

0x8040,	// (0x0004c0de) lc0_navi_pane_ParamLimits

0x8040,	// (0x0004c0de) lc0_navi_pane

0x80b6,	// (0x0004c154) lc0_stat_indi_pane_ParamLimits

0x80b6,	// (0x0004c154) lc0_stat_indi_pane

0x80cd,	// (0x0004c16b) ls0_title_pane_ParamLimits

0x80cd,	// (0x0004c16b) ls0_title_pane

0x0e81,	// (0x00044f1f) bg_popup_sub_pane_cp14_ParamLimits

0xd958,	// (0x000519f6) list_uniindi_pane_ParamLimits

0xd964,	// (0x00051a02) uniindi_top_pane_ParamLimits

0xda00,	// (0x00051a9e) list_single_uniindi_pane_g1_ParamLimits

0xda13,	// (0x00051ab1) list_single_uniindi_pane_t1_ParamLimits

0x9425,	// (0x0004d4c3) lc0_stat_clock_pane_ParamLimits

0x9425,	// (0x0004d4c3) lc0_stat_clock_pane

0xe530,	// (0x000525ce) lc0_stat_indi_pane_g1_ParamLimits

0xe530,	// (0x000525ce) lc0_stat_indi_pane_g1

0xe53d,	// (0x000525db) lc0_stat_indi_pane_g2_ParamLimits

0xe53d,	// (0x000525db) lc0_stat_indi_pane_g2

0x0001,

0xfe14,	// (0x00053eb2) lc0_stat_indi_pane_g_ParamLimits

0xfe14,	// (0x00053eb2) lc0_stat_indi_pane_g

0x9432,	// (0x0004d4d0) lc0_uni_indicator_pane_ParamLimits

0x9432,	// (0x0004d4d0) lc0_uni_indicator_pane

0xe54a,	// (0x000525e8) ls0_title_pane_g1_ParamLimits

0xe54a,	// (0x000525e8) ls0_title_pane_g1

0xe55e,	// (0x000525fc) ls0_title_pane_t1_ParamLimits

0xe55e,	// (0x000525fc) ls0_title_pane_t1

0x943f,	// (0x0004d4dd) lc0_uni_indicator_pane_g1_ParamLimits

0x943f,	// (0x0004d4dd) lc0_uni_indicator_pane_g1

0xe594,	// (0x00052632) lc0_stat_clock_pane_t1

0x0a5b,	// (0x00044af9) main_ai5_pane

0xe5a2,	// (0x00052640) ai5_sk_pane_ParamLimits

0xe5a2,	// (0x00052640) ai5_sk_pane

0xe5af,	// (0x0005264d) cell_ai5_widget_pane_ParamLimits

0xe5af,	// (0x0005264d) cell_ai5_widget_pane

0xe66f,	// (0x0005270d) aid_size_cell_widget_grid

0xe67d,	// (0x0005271b) bg_ai5_widget_pane_ParamLimits

0xe67d,	// (0x0005271b) bg_ai5_widget_pane

0xe6f9,	// (0x00052797) cell_ai5_widget_pane_g2

0xe70d,	// (0x000527ab) cell_ai5_widget_pane_g3

0xe727,	// (0x000527c5) cell_ai5_widget_pane_g4

0xe737,	// (0x000527d5) cell_ai5_widget_pane_g5

0xe747,	// (0x000527e5) cell_ai5_widget_pane_g6

0xe753,	// (0x000527f1) cell_ai5_widget_pane_g7

0xe7bf,	// (0x0005285d) cell_ai5_widget_pane_t1_ParamLimits

0xe7bf,	// (0x0005285d) cell_ai5_widget_pane_t1

0xe7dc,	// (0x0005287a) cell_ai5_widget_pane_t2_ParamLimits

0xe7dc,	// (0x0005287a) cell_ai5_widget_pane_t2

0xe7f4,	// (0x00052892) cell_ai5_widget_pane_t3_ParamLimits

0xe7f4,	// (0x00052892) cell_ai5_widget_pane_t3

0xe80c,	// (0x000528aa) cell_ai5_widget_pane_t4_ParamLimits

0xe80c,	// (0x000528aa) cell_ai5_widget_pane_t4

0xe832,	// (0x000528d0) cell_ai5_widget_pane_t5_ParamLimits

0xe832,	// (0x000528d0) cell_ai5_widget_pane_t5

0xe851,	// (0x000528ef) cell_ai5_widget_pane_t6_ParamLimits

0xe851,	// (0x000528ef) cell_ai5_widget_pane_t6

0xe863,	// (0x00052901) cell_ai5_widget_pane_t7_ParamLimits

0xe863,	// (0x00052901) cell_ai5_widget_pane_t7

0xe882,	// (0x00052920) cell_ai5_widget_pane_t8_ParamLimits

0xe882,	// (0x00052920) cell_ai5_widget_pane_t8

0x000b,

0xfe34,	// (0x00053ed2) cell_ai5_widget_pane_t_ParamLimits

0xfe34,	// (0x00053ed2) cell_ai5_widget_pane_t

0xe906,	// (0x000529a4) grid_ai5_widget_pane

0x0e81,	// (0x00044f1f) highlight_cell_ai5_widget_pane_ParamLimits

0x0e81,	// (0x00044f1f) highlight_cell_ai5_widget_pane

0xe914,	// (0x000529b2) ai5_sk_left_pane

0xe91e,	// (0x000529bc) ai5_sk_middle_pane

0xe928,	// (0x000529c6) ai5_sk_right_pane

0xe932,	// (0x000529d0) bg_ai5_widget_pane_g1_ParamLimits

0xe932,	// (0x000529d0) bg_ai5_widget_pane_g1

0xe93e,	// (0x000529dc) bg_ai5_widget_pane_g2_ParamLimits

0xe93e,	// (0x000529dc) bg_ai5_widget_pane_g2

0xe94a,	// (0x000529e8) bg_ai5_widget_pane_g3_ParamLimits

0xe94a,	// (0x000529e8) bg_ai5_widget_pane_g3

0xe956,	// (0x000529f4) bg_ai5_widget_pane_g4_ParamLimits

0xe956,	// (0x000529f4) bg_ai5_widget_pane_g4

0xe962,	// (0x00052a00) bg_ai5_widget_pane_g5_ParamLimits

0xe962,	// (0x00052a00) bg_ai5_widget_pane_g5

0xe96e,	// (0x00052a0c) bg_ai5_widget_pane_g6_ParamLimits

0xe96e,	// (0x00052a0c) bg_ai5_widget_pane_g6

0xe97a,	// (0x00052a18) bg_ai5_widget_pane_g7_ParamLimits

0xe97a,	// (0x00052a18) bg_ai5_widget_pane_g7

0xe986,	// (0x00052a24) bg_ai5_widget_pane_g8_ParamLimits

0xe986,	// (0x00052a24) bg_ai5_widget_pane_g8

0xe992,	// (0x00052a30) bg_ai5_widget_pane_g9_ParamLimits

0xe992,	// (0x00052a30) bg_ai5_widget_pane_g9

0x0008,

0xfe4d,	// (0x00053eeb) bg_ai5_widget_pane_g_ParamLimits

0xfe4d,	// (0x00053eeb) bg_ai5_widget_pane_g

0xe9c4,	// (0x00052a62) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c4,	// (0x00052a62) cell_shortcut_ai5_widget_pane

0x173d,	// (0x000457db) bg_cell_shortcut_ai5_widget_pane

0xe9d5,	// (0x00052a73) cell_grid_ai5_widget_pane_g1

0x173d,	// (0x000457db) highlight_cell_shortcut_ai5_widget_pane

0x9a7e,	// (0x0004db1c) ai5_sk_left_pane_g1

0xe9de,	// (0x00052a7c) ai5_sk_left_pane_g2

0xe9e6,	// (0x00052a84) ai5_sk_left_pane_g3

0xe9ee,	// (0x00052a8c) ai5_sk_left_pane_g4

0x0003,

0xfe60,	// (0x00053efe) ai5_sk_left_pane_g

0xe9f6,	// (0x00052a94) ai5_sk_left_pane_t1

0x9a76,	// (0x0004db14) ai5_sk_right_pane_g1

0xea04,	// (0x00052aa2) ai5_sk_right_pane_g2

0xea0c,	// (0x00052aaa) ai5_sk_right_pane_g3

0xea14,	// (0x00052ab2) ai5_sk_right_pane_g4

0x0003,

0xfe69,	// (0x00053f07) ai5_sk_right_pane_g

0xea1c,	// (0x00052aba) ai5_sk_right_pane_t1

0x9a76,	// (0x0004db14) ai5_sk_middle_pane_g1

0x9a7e,	// (0x0004db1c) ai5_sk_middle_pane_g2

0x9a96,	// (0x0004db34) ai5_sk_middle_pane_g3

0xea0c,	// (0x00052aaa) ai5_sk_middle_pane_g4

0xe9e6,	// (0x00052a84) ai5_sk_middle_pane_g5

0xea2a,	// (0x00052ac8) ai5_sk_middle_pane_g6

0xea32,	// (0x00052ad0) ai5_sk_middle_pane_g7

0x0006,

0xfe72,	// (0x00053f10) ai5_sk_middle_pane_g

0x7ec6,	// (0x0004bf64) aid_touch_area_size_lc0_ParamLimits

0x7ec6,	// (0x0004bf64) aid_touch_area_size_lc0

0x8a03,	// (0x0004caa1) cell_hwr_candidate_pane_t1_ParamLimits

0x7ee2,	// (0x0004bf80) aid_touch_navi_pane

0x81bb,	// (0x0004c259) status_dt_navi_pane_ParamLimits

0x81bb,	// (0x0004c259) status_dt_navi_pane

0x98a9,	// (0x0004d947) status_dt_sta_pane_ParamLimits

0x98a9,	// (0x0004d947) status_dt_sta_pane

0xea3a,	// (0x00052ad8) dt_sta_controll_pane

0xea47,	// (0x00052ae5) dt_sta_indi_pane

0xea58,	// (0x00052af6) dt_sta_title_pane

0x0bf5,	// (0x00044c93) bg_dt_sta_indi_pane_ParamLimits

0x0bf5,	// (0x00044c93) bg_dt_sta_indi_pane

0xea6b,	// (0x00052b09) dt_sta_battery_pane

0xea73,	// (0x00052b11) dt_sta_indi_pane_g1

0xea7c,	// (0x00052b1a) dt_sta_indi_pane_g2

0xea85,	// (0x00052b23) dt_sta_indi_pane_g3

0x0002,

0xfe81,	// (0x00053f1f) dt_sta_indi_pane_g

0xea8e,	// (0x00052b2c) dt_sta_signal_pane

0x0e81,	// (0x00044f1f) bg_dt_sta_title_pane_ParamLimits

0x0e81,	// (0x00044f1f) bg_dt_sta_title_pane

0xa8d0,	// (0x0004e96e) dt_sta_title_pane_g1

0xea97,	// (0x00052b35) dt_sta_title_pane_t1_ParamLimits

0xea97,	// (0x00052b35) dt_sta_title_pane_t1

0x0a5b,	// (0x00044af9) bg_dt_sta_control_pane

0xeaac,	// (0x00052b4a) dt_sta_controll_pane_g1

0xeab5,	// (0x00052b53) bg_dt_sta_title_pane_g1

0xeabe,	// (0x00052b5c) bg_dt_sta_title_pane_g2

0xeac7,	// (0x00052b65) bg_dt_sta_title_pane_g3

0x0002,

0xfe88,	// (0x00053f26) bg_dt_sta_title_pane_g

0xc044,	// (0x000500e2) bg_dt_sta_indi_pane_g1

0xead0,	// (0x00052b6e) dt_sta_signal_pane_g1

0xead8,	// (0x00052b76) dt_sta_signal_pane_g2

0x0001,

0xfe8f,	// (0x00053f2d) dt_sta_signal_pane_g

0xeae0,	// (0x00052b7e) dt_sta_battery_pane_g1

0xeae9,	// (0x00052b87) dt_sta_battery_pane_t1

0xc044,	// (0x000500e2) bg_dt_sta_control_pane_g1

0x1356,	// (0x000453f4) fep_china_uni_eep_pane

0x135e,	// (0x000453fc) fep_china_uni_entry_pane_ParamLimits

0x136e,	// (0x0004540c) popup_fep_china_uni_window_g1_ParamLimits

0x137e,	// (0x0004541c) popup_fep_china_uni_window_g2_ParamLimits

0x137e,	// (0x0004541c) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x00053791) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x00053791) popup_fep_china_uni_window_g

0xeaf8,	// (0x00052b96) fep_china_uni_eep_pane_g1

0xeb00,	// (0x00052b9e) fep_china_uni_eep_pane_t1

0xe511,	// (0x000525af) aid_touch_area_size_smil_player

0x8038,	// (0x0004c0d6) lc0_clock_pane

0x9900,	// (0x0004d99e) status_pane_g5_ParamLimits

0x9900,	// (0x0004d99e) status_pane_g5

0x7a7a,	// (0x0004bb18) popup_keymap_window

0x98be,	// (0x0004d95c) status_icon_pane

0xe70d,	// (0x000527ab) cell_ai5_widget_pane_g3_ParamLimits

0xe727,	// (0x000527c5) cell_ai5_widget_pane_g4_ParamLimits

0xe737,	// (0x000527d5) cell_ai5_widget_pane_g5_ParamLimits

0xe75f,	// (0x000527fd) cell_ai5_widget_pane_g8_ParamLimits

0xe75f,	// (0x000527fd) cell_ai5_widget_pane_g8

0xe773,	// (0x00052811) cell_ai5_widget_pane_g9_ParamLimits

0xe773,	// (0x00052811) cell_ai5_widget_pane_g9

0xe787,	// (0x00052825) cell_ai5_widget_pane_g10_ParamLimits

0xe787,	// (0x00052825) cell_ai5_widget_pane_g10

0xeb0f,	// (0x00052bad) status_icon_pane_g1

0x0a5b,	// (0x00044af9) bg_popup_sub_pane_cp13

0xeb17,	// (0x00052bb5) popup_keymap_window_t1

0x77b3,	// (0x0004b851) control_pane_g6_ParamLimits

0x77b3,	// (0x0004b851) control_pane_g6

0x77c0,	// (0x0004b85e) control_pane_g7_ParamLimits

0x77c0,	// (0x0004b85e) control_pane_g7

0x77cd,	// (0x0004b86b) control_pane_g8_ParamLimits

0x77cd,	// (0x0004b86b) control_pane_g8

0xea3a,	// (0x00052ad8) dt_sta_controll_pane_ParamLimits

0xea47,	// (0x00052ae5) dt_sta_indi_pane_ParamLimits

0xea58,	// (0x00052af6) dt_sta_title_pane_ParamLimits

0x0dcc,	// (0x00044e6a) aid_size_touch_scroll_bar_cale

0x6554,	// (0x0004a5f2) popup_discreet_window_ParamLimits

0x6554,	// (0x0004a5f2) popup_discreet_window

0x65ce,	// (0x0004a66c) popup_sk_window

0xa114,	// (0x0004e1b2) bg_popup_sub_pane_cp28_ParamLimits

0xa114,	// (0x0004e1b2) bg_popup_sub_pane_cp28

0xeb25,	// (0x00052bc3) popup_discreet_window_g1_ParamLimits

0xeb25,	// (0x00052bc3) popup_discreet_window_g1

0xeb45,	// (0x00052be3) popup_discreet_window_t1_ParamLimits

0xeb45,	// (0x00052be3) popup_discreet_window_t1

0xeb63,	// (0x00052c01) popup_discreet_window_t2_ParamLimits

0xeb63,	// (0x00052c01) popup_discreet_window_t2

0x0002,

0xfe94,	// (0x00053f32) popup_discreet_window_t_ParamLimits

0xfe94,	// (0x00053f32) popup_discreet_window_t

0x9453,	// (0x0004d4f1) popup_sk_window_g1

0x945d,	// (0x0004d4fb) popup_sk_window_g2

0x0001,

0xfe9b,	// (0x00053f39) popup_sk_window_g

0x9465,	// (0x0004d503) popup_sk_window_t1

0x9473,	// (0x0004d511) popup_sk_window_t1_copy1

0xe6f9,	// (0x00052797) cell_ai5_widget_pane_g2_ParamLimits

0xe894,	// (0x00052932) cell_ai5_widget_pane_t9_ParamLimits

0xe894,	// (0x00052932) cell_ai5_widget_pane_t9

0x0a5b,	// (0x00044af9) main_fep_fshwr2_pane

0x9481,	// (0x0004d51f) aid_fshwr2_btn_pane

0x9495,	// (0x0004d533) aid_fshwr2_syb_pane

0x94a9,	// (0x0004d547) aid_fshwr2_txt_pane

0x94b9,	// (0x0004d557) fshwr2_func_candi_pane

0x94dd,	// (0x0004d57b) fshwr2_hwr_syb_pane

0x94f7,	// (0x0004d595) fshwr2_icf_pane

0x0a5b,	// (0x00044af9) fshwr2_icf_bg_pane

0x9525,	// (0x0004d5c3) fshwr2_icf_pane_t1_ParamLimits

0x9525,	// (0x0004d5c3) fshwr2_icf_pane_t1

0x12d3,	// (0x00045371) fshwr2_func_candi_pane_g1

0xebb5,	// (0x00052c53) fshwr2_func_candi_row_pane_ParamLimits

0xebb5,	// (0x00052c53) fshwr2_func_candi_row_pane

0x953e,	// (0x0004d5dc) cell_fshwr2_syb_pane_ParamLimits

0x953e,	// (0x0004d5dc) cell_fshwr2_syb_pane

0xe4e1,	// (0x0005257f) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4e1,	// (0x0005257f) fshwr2_hwr_syb_pane_g1

0x0a5b,	// (0x00044af9) bg_popup_call_pane_cp01

0x9561,	// (0x0004d5ff) fshwr2_func_candi_cell_pane_ParamLimits

0x9561,	// (0x0004d5ff) fshwr2_func_candi_cell_pane

0xa770,	// (0x0004e80e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa770,	// (0x0004e80e) fshwr2_func_candi_cell_bg_pane

0x95ac,	// (0x0004d64a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x95ac,	// (0x0004d64a) fshwr2_func_candi_cell_pane_g1

0x95cc,	// (0x0004d66a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x95cc,	// (0x0004d66a) fshwr2_func_candi_cell_pane_t1

0x0a5b,	// (0x00044af9) bg_button_pane_cp08

0x0fc3,	// (0x00045061) cell_fshwr2_syb_bg_pane

0x95df,	// (0x0004d67d) cell_fshwr2_syb_bg_pane_g1

0x95f3,	// (0x0004d691) cell_fshwr2_syb_bg_pane_t1

0x0e81,	// (0x00044f1f) main_tmo_pane

0xac09,	// (0x0004eca7) uni_indicator_pane_g1_ParamLimits

0xac1c,	// (0x0004ecba) uni_indicator_pane_g2_ParamLimits

0xac2e,	// (0x0004eccc) uni_indicator_pane_g3_ParamLimits

0xac3d,	// (0x0004ecdb) uni_indicator_pane_g4_ParamLimits

0xac3d,	// (0x0004ecdb) uni_indicator_pane_g4

0xac51,	// (0x0004ecef) uni_indicator_pane_g5_ParamLimits

0xac51,	// (0x0004ecef) uni_indicator_pane_g5

0xac51,	// (0x0004ecef) uni_indicator_pane_g6_ParamLimits

0xac51,	// (0x0004ecef) uni_indicator_pane_g6

0xf8f7,	// (0x00053995) uni_indicator_pane_g_ParamLimits

0xd540,	// (0x000515de) popup_tmo_note_window_ParamLimits

0xd540,	// (0x000515de) popup_tmo_note_window

0x0e81,	// (0x00044f1f) fshwr2_bg_pane

0x95bd,	// (0x0004d65b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x95bd,	// (0x0004d65b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea0,	// (0x00053f3e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea0,	// (0x00053f3e) fshwr2_func_candi_cell_pane_g

0xc044,	// (0x000500e2) bg_popup_window_pane_cp01

0x9609,	// (0x0004d6a7) bg_popup_window_pane_g1_cp01

0xebdc,	// (0x00052c7a) bg_popup_window_pane_cp22_ParamLimits

0xebdc,	// (0x00052c7a) bg_popup_window_pane_cp22

0xebea,	// (0x00052c88) listscroll_tmo_link_pane_ParamLimits

0xebea,	// (0x00052c88) listscroll_tmo_link_pane

0xec2a,	// (0x00052cc8) popup_tmo_note_window_g1_ParamLimits

0xec2a,	// (0x00052cc8) popup_tmo_note_window_g1

0xec37,	// (0x00052cd5) tmo_note_info_pane_ParamLimits

0xec37,	// (0x00052cd5) tmo_note_info_pane

0xec51,	// (0x00052cef) list_tmo_note_info_pane_g1_ParamLimits

0xec51,	// (0x00052cef) list_tmo_note_info_pane_g1

0xec68,	// (0x00052d06) list_tmo_note_info_pane_g2_ParamLimits

0xec68,	// (0x00052d06) list_tmo_note_info_pane_g2

0x0001,

0xfea5,	// (0x00053f43) list_tmo_note_info_pane_g_ParamLimits

0xfea5,	// (0x00053f43) list_tmo_note_info_pane_g

0xec84,	// (0x00052d22) list_tmo_note_info_text_pane_ParamLimits

0xec84,	// (0x00052d22) list_tmo_note_info_text_pane

0xed05,	// (0x00052da3) list_tmo_link_pane

0xed12,	// (0x00052db0) scroll_pane_cp20

0xed1f,	// (0x00052dbd) list_single_tmo_link_pane_ParamLimits

0xed1f,	// (0x00052dbd) list_single_tmo_link_pane

0xed2f,	// (0x00052dcd) list_single_tmo_link_pane_t1

0xed3d,	// (0x00052ddb) list_tmo_note_info_text_pane_t1_ParamLimits

0xed3d,	// (0x00052ddb) list_tmo_note_info_text_pane_t1

0x6d4f,	// (0x0004aded) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6d4f,	// (0x0004aded) aid_size_touch_scroll_bar_cp01

0x5964,	// (0x00049a02) aid_size_touch_slider_marker

0x65b6,	// (0x0004a654) popup_settings_window_ParamLimits

0x65b6,	// (0x0004a654) popup_settings_window

0x5adf,	// (0x00049b7d) popup_candi_list_indi_window

0x7ee2,	// (0x0004bf80) aid_touch_navi_pane_ParamLimits

0x8c43,	// (0x0004cce1) rs_clock_indi_pane

0x8c4c,	// (0x0004ccea) sctrl_sk_bottom_pane_ParamLimits

0x8c5d,	// (0x0004ccfb) sctrl_sk_top_pane_ParamLimits

0x8d3c,	// (0x0004cdda) popup_fep_tooltip_window

0xe66f,	// (0x0005270d) aid_size_cell_widget_grid_ParamLimits

0xe6e4,	// (0x00052782) cell_ai5_widget_pane_g1_ParamLimits

0xe6e4,	// (0x00052782) cell_ai5_widget_pane_g1

0xe747,	// (0x000527e5) cell_ai5_widget_pane_g6_ParamLimits

0xe753,	// (0x000527f1) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe19,	// (0x00053eb7) cell_ai5_widget_pane_g_ParamLimits

0xfe19,	// (0x00053eb7) cell_ai5_widget_pane_g

0xe8c3,	// (0x00052961) cell_ai5_widget_pane_t10_ParamLimits

0xe8c3,	// (0x00052961) cell_ai5_widget_pane_t10

0xe906,	// (0x000529a4) grid_ai5_widget_pane_ParamLimits

0xe99e,	// (0x00052a3c) cell_contacts_ai5_widget_pane_ParamLimits

0xe99e,	// (0x00052a3c) cell_contacts_ai5_widget_pane

0xeb78,	// (0x00052c16) popup_discreet_window_t3_ParamLimits

0xeb78,	// (0x00052c16) popup_discreet_window_t3

0x950f,	// (0x0004d5ad) popup_fshwr2_char_preview_window_ParamLimits

0x950f,	// (0x0004d5ad) popup_fshwr2_char_preview_window

0xeca2,	// (0x00052d40) tmo_note_info_pane_t1

0xecb7,	// (0x00052d55) tmo_note_info_pane_t2

0xeccc,	// (0x00052d6a) tmo_note_info_pane_t3

0xece1,	// (0x00052d7f) tmo_note_info_pane_t4

0xecf3,	// (0x00052d91) tmo_note_info_pane_t5

0x0004,

0xfeaa,	// (0x00053f48) tmo_note_info_pane_t

0xed05,	// (0x00052da3) list_tmo_link_pane_ParamLimits

0xed12,	// (0x00052db0) scroll_pane_cp20_ParamLimits

0x0a5b,	// (0x00044af9) bg_popup_fep_char_preview_window_cp01

0xed56,	// (0x00052df4) popup_fshwr2_char_preview_window_t1

0xed64,	// (0x00052e02) popup_candi_list_indi_window_g1

0xed6d,	// (0x00052e0b) bg_cell_contacts_ai5_widget_pane

0xed79,	// (0x00052e17) cell_contacts_ai5_widget_pane_g1

0xc72b,	// (0x000507c9) cell_contacts_ai5_widget_pane_g2

0xed8e,	// (0x00052e2c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb5,	// (0x00053f53) cell_contacts_ai5_widget_pane_g

0xed9a,	// (0x00052e38) cell_contacts_ai5_widget_pane_t1

0x0e81,	// (0x00044f1f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee11,	// (0x00052eaf) settings_container_pane

0x173d,	// (0x000457db) listscroll_set_pane_copy1

0xb720,	// (0x0004f7be) scroll_pane_cp121_copy1

0x9eb9,	// (0x0004df57) set_content_pane_copy1

0xee1d,	// (0x00052ebb) aid_height_set_list_copy1_ParamLimits

0xee1d,	// (0x00052ebb) aid_height_set_list_copy1

0xae49,	// (0x0004eee7) aid_size_parent_copy1_ParamLimits

0xae49,	// (0x0004eee7) aid_size_parent_copy1

0xee29,	// (0x00052ec7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee29,	// (0x00052ec7) button_value_adjust_pane_cp6_copy1

0x0fc3,	// (0x00045061) list_highlight_pane_cp2_copy1_ParamLimits

0x0fc3,	// (0x00045061) list_highlight_pane_cp2_copy1

0xee3d,	// (0x00052edb) list_set_pane_copy1_ParamLimits

0xee3d,	// (0x00052edb) list_set_pane_copy1

0xedac,	// (0x00052e4a) main_pane_set_t1_copy1_ParamLimits

0xedac,	// (0x00052e4a) main_pane_set_t1_copy1

0xede6,	// (0x00052e84) main_pane_set_t2_copy1_ParamLimits

0xede6,	// (0x00052e84) main_pane_set_t2_copy1

0xeeea,	// (0x00052f88) main_pane_set_t3_copy1

0xeef8,	// (0x00052f96) main_pane_set_t4_copy1

0xee05,	// (0x00052ea3) set_content_pane_g1_copy1_ParamLimits

0xee05,	// (0x00052ea3) set_content_pane_g1_copy1

0xef06,	// (0x00052fa4) setting_code_pane_copy1

0xef0e,	// (0x00052fac) setting_slider_graphic_pane_copy1

0xef0e,	// (0x00052fac) setting_slider_pane_copy1

0xef16,	// (0x00052fb4) setting_text_pane_copy1

0xef16,	// (0x00052fb4) setting_volume_pane_copy1

0xef06,	// (0x00052fa4) settings_code_pane_cp2_copy1

0xef1e,	// (0x00052fbc) settings_code_pane_cp_copy1_ParamLimits

0xef1e,	// (0x00052fbc) settings_code_pane_cp_copy1

0x9612,	// (0x0004d6b0) volume_set_pane_copy1

0xef32,	// (0x00052fd0) volume_set_pane_g10_copy1

0xef3a,	// (0x00052fd8) volume_set_pane_g1_copy1

0xef42,	// (0x00052fe0) volume_set_pane_g2_copy1

0xef4a,	// (0x00052fe8) volume_set_pane_g3_copy1

0xef52,	// (0x00052ff0) volume_set_pane_g4_copy1

0xef5a,	// (0x00052ff8) volume_set_pane_g5_copy1

0xef62,	// (0x00053000) volume_set_pane_g6_copy1

0xef6a,	// (0x00053008) volume_set_pane_g7_copy1

0xef72,	// (0x00053010) volume_set_pane_g8_copy1

0xef7a,	// (0x00053018) volume_set_pane_g9_copy1

0x0acb,	// (0x00044b69) bg_set_opt_pane_cp_copy1_ParamLimits

0x0acb,	// (0x00044b69) bg_set_opt_pane_cp_copy1

0x961a,	// (0x0004d6b8) setting_slider_pane_t1_copy1_ParamLimits

0x961a,	// (0x0004d6b8) setting_slider_pane_t1_copy1

0x9639,	// (0x0004d6d7) setting_slider_pane_t2_copy1_ParamLimits

0x9639,	// (0x0004d6d7) setting_slider_pane_t2_copy1

0x9653,	// (0x0004d6f1) setting_slider_pane_t3_copy1_ParamLimits

0x9653,	// (0x0004d6f1) setting_slider_pane_t3_copy1

0x966b,	// (0x0004d709) slider_set_pane_copy1_ParamLimits

0x966b,	// (0x0004d709) slider_set_pane_copy1

0x0ed9,	// (0x00044f77) set_opt_bg_pane_g1_copy2

0x0ee1,	// (0x00044f7f) set_opt_bg_pane_g2_copy2

0xef82,	// (0x00053020) set_opt_bg_pane_g3_copy2

0x0ef1,	// (0x00044f8f) set_opt_bg_pane_g4_copy2

0x0ef9,	// (0x00044f97) set_opt_bg_pane_g5_copy2

0x0f01,	// (0x00044f9f) set_opt_bg_pane_g6_copy2

0xef8c,	// (0x0005302a) set_opt_bg_pane_g7_copy2

0xef94,	// (0x00053032) set_opt_bg_pane_g8_copy2

0xef9e,	// (0x0005303c) set_opt_bg_pane_g9_copy2

0x9681,	// (0x0004d71f) aid_size_touch_slider_mark_copy1_ParamLimits

0x9681,	// (0x0004d71f) aid_size_touch_slider_mark_copy1

0xefa8,	// (0x00053046) slider_set_pane_g1_copy1

0x9695,	// (0x0004d733) slider_set_pane_g2_copy1

0x84de,	// (0x0004c57c) slider_set_pane_g3_copy1_ParamLimits

0x84de,	// (0x0004c57c) slider_set_pane_g3_copy1

0x84f2,	// (0x0004c590) slider_set_pane_g4_copy1_ParamLimits

0x84f2,	// (0x0004c590) slider_set_pane_g4_copy1

0x850a,	// (0x0004c5a8) slider_set_pane_g5_copy1_ParamLimits

0x850a,	// (0x0004c5a8) slider_set_pane_g5_copy1

0x84de,	// (0x0004c57c) slider_set_pane_g6_copy1_ParamLimits

0x84de,	// (0x0004c57c) slider_set_pane_g6_copy1

0x969d,	// (0x0004d73b) slider_set_pane_g7_copy1_ParamLimits

0x969d,	// (0x0004d73b) slider_set_pane_g7_copy1

0x0a6f,	// (0x00044b0d) bg_set_opt_pane_cp2_copy1

0xefb1,	// (0x0005304f) setting_slider_graphic_pane_g1_copy1

0xefba,	// (0x00053058) setting_slider_graphic_pane_t1_copy1

0xefca,	// (0x00053068) setting_slider_graphic_pane_t2_copy1

0xefda,	// (0x00053078) slider_set_pane_cp_copy1

0xefea,	// (0x00053088) input_focus_pane_cp1_copy1

0xeff3,	// (0x00053091) list_set_text_pane_copy1

0xeffb,	// (0x00053099) setting_text_pane_g1_copy1

0x62af,	// (0x0004a34d) set_text_pane_t1_copy1

0xefea,	// (0x00053088) input_focus_pane_cp2_copy1

0xeffb,	// (0x00053099) setting_code_pane_g1_copy1

0xf004,	// (0x000530a2) setting_code_pane_t1_copy1

0xf012,	// (0x000530b0) list_set_graphic_pane_copy1

0x0a6f,	// (0x00044b0d) bg_set_opt_pane_cp4_copy1

0x14ae,	// (0x0004554c) list_set_graphic_pane_g1_copy1_ParamLimits

0x14ae,	// (0x0004554c) list_set_graphic_pane_g1_copy1

0xf026,	// (0x000530c4) list_set_graphic_pane_g2_copy1

0x14c6,	// (0x00045564) list_set_graphic_pane_t1_copy1_ParamLimits

0x14c6,	// (0x00045564) list_set_graphic_pane_t1_copy1

0xc044,	// (0x000500e2) rs_clock_indi_pane_g1

0xf02e,	// (0x000530cc) rs_clock_indi_pane_t1

0xf03c,	// (0x000530da) rs_indi_pane

0xf044,	// (0x000530e2) rs_indi_pane_g1

0xf04d,	// (0x000530eb) rs_indi_pane_g2

0xed64,	// (0x00052e02) rs_indi_pane_g3

0x0002,

0xfebc,	// (0x00053f5a) rs_indi_pane_g

0x173d,	// (0x000457db) bg_popup_preview_window_pane_cp03

0xf056,	// (0x000530f4) popup_fep_tooltip_window_t1

0xccef,	// (0x00050d8d) popup_note2_window_g2_ParamLimits

0xccef,	// (0x00050d8d) popup_note2_window_g2

0x0001,

0xfc50,	// (0x00053cee) popup_note2_window_g_ParamLimits

0xfc50,	// (0x00053cee) popup_note2_window_g

0xd1dc,	// (0x0005127a) bg_popup_sub_pane_cp11_ParamLimits

0xd1e9,	// (0x00051287) cell_ai3_links_pane_g1_ParamLimits

0xd200,	// (0x0005129e) cell_ai3_links_pane_t1

0x62af,	// (0x0004a34d) set_text_pane_t1_copy1_ParamLimits

0x1673,	// (0x00045711) cell_graphic_popup_pane_cp2_ParamLimits

0x1673,	// (0x00045711) cell_graphic_popup_pane_cp2

0xf064,	// (0x00053102) cell_graphic_popup_pane_g1_cp2

0x0d4f,	// (0x00044ded) cell_graphic_popup_pane_g2_cp2

0xf06c,	// (0x0005310a) cell_graphic_popup_pane_g3_cp2

0xf074,	// (0x00053112) cell_graphic_popup_pane_t2_cp2

0x0d60,	// (0x00044dfe) grid_highlight_pane_cp3_cp2

0x1150,	// (0x000451ee) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0e81,	// (0x00044f1f) main_tmo_pane_ParamLimits

0xd534,	// (0x000515d2) popup_tmo_big_image_note_window

0xe6d3,	// (0x00052771) cell_ai5_widget_list_pane

0xe6db,	// (0x00052779) cell_ai5_widget_lrg_icon_pane

0xeca2,	// (0x00052d40) tmo_note_info_pane_t1_ParamLimits

0xecb7,	// (0x00052d55) tmo_note_info_pane_t2_ParamLimits

0xeccc,	// (0x00052d6a) tmo_note_info_pane_t3_ParamLimits

0xece1,	// (0x00052d7f) tmo_note_info_pane_t4_ParamLimits

0xecf3,	// (0x00052d91) tmo_note_info_pane_t5_ParamLimits

0xfeaa,	// (0x00053f48) tmo_note_info_pane_t_ParamLimits

0xee11,	// (0x00052eaf) settings_container_pane_ParamLimits

0xefe2,	// (0x00053080) indicator_popup_pane_cp5

0xefe2,	// (0x00053080) indicator_popup_pane_cp6

0xf012,	// (0x000530b0) list_set_graphic_pane_copy1_ParamLimits

0x0a5b,	// (0x00044af9) bg_popup_window_pane_cp23

0xf082,	// (0x00053120) popup_tmo_big_image_note_window_g1

0xf08b,	// (0x00053129) popup_tmo_big_image_note_window_t1

0xf09b,	// (0x00053139) popup_tmo_big_image_note_window_t2

0xf0ab,	// (0x00053149) popup_tmo_big_image_note_window_t3

0x0002,

0xfec3,	// (0x00053f61) popup_tmo_big_image_note_window_t

0xc044,	// (0x000500e2) cell_ai5_widget_lrg_icon_pane_g1

0xf0bb,	// (0x00053159) cell_ai5_widget_lrg_icon_pane_t1

0xf0c9,	// (0x00053167) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c9,	// (0x00053167) cell_ai5_widget_list_row_pane

0xf0e0,	// (0x0005317e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e0,	// (0x0005317e) cell_ai5_widget_list_row_pane_g1

0xf0ed,	// (0x0005318b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0ed,	// (0x0005318b) cell_ai5_widget_list_row_pane_t1

0xf118,	// (0x000531b6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf118,	// (0x000531b6) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeca,	// (0x00053f68) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeca,	// (0x00053f68) cell_ai5_widget_list_row_pane_t

0x0a5b,	// (0x00044af9) main_fep_vtchi_ss_pane

0xf168,	// (0x00053206) popup_fep_char_pre_window

0xf170,	// (0x0005320e) popup_fep_ituss_window

0xf19c,	// (0x0005323a) popup_fep_vkbss_window

0x0fc3,	// (0x00045061) grid_vkbss_keypad_pane_ParamLimits

0x0fc3,	// (0x00045061) grid_vkbss_keypad_pane

0xf1dc,	// (0x0005327a) ituss_keypad_pane

0x96bd,	// (0x0004d75b) aid_vkbss_key_offset_ParamLimits

0x96bd,	// (0x0004d75b) aid_vkbss_key_offset

0x96c9,	// (0x0004d767) cell_vkbss_key_pane_ParamLimits

0x96c9,	// (0x0004d767) cell_vkbss_key_pane

0xf1ec,	// (0x0005328a) bg_cell_vkbss_key_g1_ParamLimits

0xf1ec,	// (0x0005328a) bg_cell_vkbss_key_g1

0xf1f8,	// (0x00053296) cell_vkbss_key_3p_pane_ParamLimits

0xf1f8,	// (0x00053296) cell_vkbss_key_3p_pane

0xf22e,	// (0x000532cc) cell_vkbss_key_g1_ParamLimits

0xf22e,	// (0x000532cc) cell_vkbss_key_g1

0xf264,	// (0x00053302) cell_vkbss_key_t1_ParamLimits

0xf264,	// (0x00053302) cell_vkbss_key_t1

0x9721,	// (0x0004d7bf) cell_ituss_key_pane_ParamLimits

0x9721,	// (0x0004d7bf) cell_ituss_key_pane

0xf2c0,	// (0x0005335e) bg_cell_ituss_key_g1_ParamLimits

0xf2c0,	// (0x0005335e) bg_cell_ituss_key_g1

0xf2cc,	// (0x0005336a) cell_ituss_key_pane_g1_ParamLimits

0xf2cc,	// (0x0005336a) cell_ituss_key_pane_g1

0x9732,	// (0x0004d7d0) cell_ituss_key_pane_g2_ParamLimits

0x9732,	// (0x0004d7d0) cell_ituss_key_pane_g2

0x0005,

0xfed1,	// (0x00053f6f) cell_ituss_key_pane_g_ParamLimits

0xfed1,	// (0x00053f6f) cell_ituss_key_pane_g

0x97b6,	// (0x0004d854) cell_ituss_key_t1_ParamLimits

0x97b6,	// (0x0004d854) cell_ituss_key_t1

0x97f0,	// (0x0004d88e) cell_ituss_key_t2_ParamLimits

0x97f0,	// (0x0004d88e) cell_ituss_key_t2

0x9822,	// (0x0004d8c0) cell_ituss_key_t3_ParamLimits

0x9822,	// (0x0004d8c0) cell_ituss_key_t3

0x9853,	// (0x0004d8f1) cell_ituss_key_t4_ParamLimits

0x9853,	// (0x0004d8f1) cell_ituss_key_t4

0x0004,

0xfede,	// (0x00053f7c) cell_ituss_key_t_ParamLimits

0xfede,	// (0x00053f7c) cell_ituss_key_t

0xf2f2,	// (0x00053390) cell_vkbss_key_3p_pane_g1

0xf2fa,	// (0x00053398) cell_vkbss_key_3p_pane_g2

0xf302,	// (0x000533a0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee9,	// (0x00053f87) cell_vkbss_key_3p_pane_g

0x173d,	// (0x000457db) bg_popup_fep_char_preview_window_cp02

0xf30a,	// (0x000533a8) popup_fep_char_pre_window_t1

0xe665,	// (0x00052703) main_ai5_sk_pane

0xed6d,	// (0x00052e0b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed79,	// (0x00052e17) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc72b,	// (0x000507c9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed8e,	// (0x00052e2c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb5,	// (0x00053f53) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed9a,	// (0x00052e38) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0e81,	// (0x00044f1f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf318,	// (0x000533b6) main_ai5_sk_pane_g1

0x9f55,	// (0x0004dff3) popup_query_code_window_g1

0xf186,	// (0x00053224) popup_fep_vkb_icf_pane

0xf1b3,	// (0x00053251) popup_fep_vtchi_icf_pane

0xf321,	// (0x000533bf) bg_icf_pane

0xf321,	// (0x000533bf) list_vkb_icf_pane

0xf32d,	// (0x000533cb) bg_icf_pane_cp01

0xf340,	// (0x000533de) vtchi_icf_list_pane

0xf3a0,	// (0x0005343e) list_vkb_icf_pane_t1_ParamLimits

0xf3a0,	// (0x0005343e) list_vkb_icf_pane_t1

0xf3c2,	// (0x00053460) vtchi_icf_list_pane_t1_ParamLimits

0xf3c2,	// (0x00053460) vtchi_icf_list_pane_t1

0xf170,	// (0x0005320e) popup_fep_ituss_window_ParamLimits

0xf1b3,	// (0x00053251) popup_fep_vtchi_icf_pane_ParamLimits

0xf1dc,	// (0x0005327a) ituss_keypad_pane_ParamLimits

0x96b3,	// (0x0004d751) ituss_sks_pane

0xf321,	// (0x000533bf) bg_icf_pane_ParamLimits

0xf140,	// (0x000531de) icf_edit_indi_pane_ParamLimits

0xf140,	// (0x000531de) icf_edit_indi_pane

0xf321,	// (0x000533bf) list_vkb_icf_pane_ParamLimits

0xf32d,	// (0x000533cb) bg_icf_pane_cp01_ParamLimits

0xf15b,	// (0x000531f9) icf_edit_indi_pane_cp01_ParamLimits

0xf15b,	// (0x000531f9) icf_edit_indi_pane_cp01

0xf340,	// (0x000533de) vtchi_query_pane

0xe4e1,	// (0x0005257f) icf_edit_indi_pane_g1_ParamLimits

0xe4e1,	// (0x0005257f) icf_edit_indi_pane_g1

0xf43a,	// (0x000534d8) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x000534d8) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x00053fb2) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x00053fb2) icf_edit_indi_pane_g

0xf44e,	// (0x000534ec) icf_edit_indi_pane_t1

0xf3e3,	// (0x00053481) bg_input_focus_pane_cp042

0x0dc3,	// (0x00044e61) vtchi_button_pane

0xf3ec,	// (0x0005348a) vtchi_query_pane_t1

0xf3fa,	// (0x00053498) vtchi_query_pane_t2

0xf408,	// (0x000534a6) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x00053fa1) vtchi_query_pane_t

0x0a5b,	// (0x00044af9) bg_button_pane_cp13

0xf416,	// (0x000534b4) vtchi_button_pane_g1

0x9896,	// (0x0004d934) ituss_sks_pane_g1

0x98a1,	// (0x0004d93f) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x00053fa8) ituss_sks_pane_g

0xf41e,	// (0x000534bc) ituss_sks_pane_t1

0xf42c,	// (0x000534ca) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x00053fad) ituss_sks_pane_t

0xbab8,	// (0x0004fb56) indicator_nsta_pane_cp_g1

0xbac1,	// (0x0004fb5f) indicator_nsta_pane_cp_g2

0xbac9,	// (0x0004fb67) indicator_nsta_pane_cp_g3

0xbad1,	// (0x0004fb6f) indicator_nsta_pane_cp_g4

0xbac1,	// (0x0004fb5f) indicator_nsta_pane_cp_g5

0xbac9,	// (0x0004fb67) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x00053b38) indicator_nsta_pane_cp_g

0xe234,	// (0x000522d2) cell_graphic2_pane_t2_ParamLimits

0xe234,	// (0x000522d2) cell_graphic2_pane_t2

0x0001,

0xfda0,	// (0x00053e3e) cell_graphic2_pane_t_ParamLimits

0xfda0,	// (0x00053e3e) cell_graphic2_pane_t

0xe260,	// (0x000522fe) cell_graphic2_control_pane_t1

0x7219,	// (0x0004b2b7) signal_pane_g3_ParamLimits

0x7219,	// (0x0004b2b7) signal_pane_g3

0x722b,	// (0x0004b2c9) signal_pane_g4_ParamLimits

0x722b,	// (0x0004b2c9) signal_pane_g4

0xf12a,	// (0x000531c8) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf12a,	// (0x000531c8) cell_ai5_widget_list_row_pane_t3

0xf2e0,	// (0x0005337e) cell_ituss_key_pane_t1_ParamLimits

0xf2e0,	// (0x0005337e) cell_ituss_key_pane_t1

0x9b88,	// (0x0004dc26) form_field_data_wide_pane_vc_t2_ParamLimits

0x9b88,	// (0x0004dc26) form_field_data_wide_pane_vc_t2

0x9b9c,	// (0x0004dc3a) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b9c,	// (0x0004dc3a) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0005387d) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0005387d) form_field_data_wide_pane_vc_t

0xb762,	// (0x0004f800) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb762,	// (0x0004f800) form_field_slider_wide_pane_vc_t3

0xb840,	// (0x0004f8de) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb840,	// (0x0004f8de) form_field_popup_wide_pane_vc_t2

0xb857,	// (0x0004f8f5) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb857,	// (0x0004f8f5) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x00053b27) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00053b27) form_field_popup_wide_pane_vc_t

0x9481,	// (0x0004d51f) aid_fshwr2_btn_pane_ParamLimits

0x9495,	// (0x0004d533) aid_fshwr2_syb_pane_ParamLimits

0x94a9,	// (0x0004d547) aid_fshwr2_txt_pane_ParamLimits

0x0e81,	// (0x00044f1f) fshwr2_bg_pane_ParamLimits

0x94b9,	// (0x0004d557) fshwr2_func_candi_pane_ParamLimits

0x94dd,	// (0x0004d57b) fshwr2_hwr_syb_pane_ParamLimits

0x94f7,	// (0x0004d595) fshwr2_icf_pane_ParamLimits

0x876f,	// (0x0004c80d) list_double_graphic_pane_vc_g4_ParamLimits

0x876f,	// (0x0004c80d) list_double_graphic_pane_vc_g4

0x9752,	// (0x0004d7f0) cell_ituss_key_pane_g3_ParamLimits

0x9752,	// (0x0004d7f0) cell_ituss_key_pane_g3

0x9884,	// (0x0004d922) cell_ituss_key_t5_ParamLimits

0x9884,	// (0x0004d922) cell_ituss_key_t5

0xf19c,	// (0x0005323a) popup_fep_vkbss_window_ParamLimits

0xc84c,	// (0x000508ea) aid_cell_ai5_quarter

0xf44e,	// (0x000534ec) icf_edit_indi_pane_t1_ParamLimits

0x693a,	// (0x0004a9d8) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x693a,	// (0x0004a9d8) aid_tch_indicator_popup_pane_cp2

0x694d,	// (0x0004a9eb) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x694d,	// (0x0004a9eb) aid_tch_query_popup_data_pane_cp2

0x9efd,	// (0x0004df9b) aid_tch_query_popup_pane_ParamLimits

0x9efd,	// (0x0004df9b) aid_tch_query_popup_pane

0x9efd,	// (0x0004df9b) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9efd,	// (0x0004df9b) aid_tch_query_popup_data_pane_cp1

0x0fc3,	// (0x00045061) cell_fshwr2_syb_bg_pane_ParamLimits

0x95df,	// (0x0004d67d) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x95f3,	// (0x0004d691) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf186,	// (0x00053224) popup_fep_vkb_icf_pane_ParamLimits

0x92cf,	// (0x0004d36d) bg_popup_fep_char_preview_window_g10

0xe79b,	// (0x00052839) cell_ai5_widget_pane_g11_ParamLimits

0xe79b,	// (0x00052839) cell_ai5_widget_pane_g11

0xe7a7,	// (0x00052845) cell_ai5_widget_pane_g12_ParamLimits

0xe7a7,	// (0x00052845) cell_ai5_widget_pane_g12

0xe7b3,	// (0x00052851) cell_ai5_widget_pane_g13_ParamLimits

0xe7b3,	// (0x00052851) cell_ai5_widget_pane_g13

0xe8e2,	// (0x00052980) cell_ai5_widget_pane_t11_ParamLimits

0xe8e2,	// (0x00052980) cell_ai5_widget_pane_t11

0xe8f4,	// (0x00052992) cell_ai5_widget_pane_t12_ParamLimits

0xe8f4,	// (0x00052992) cell_ai5_widget_pane_t12

0x975e,	// (0x0004d7fc) cell_ituss_key_pane_g4_ParamLimits

0x975e,	// (0x0004d7fc) cell_ituss_key_pane_g4

0x977a,	// (0x0004d818) cell_ituss_key_pane_g5_ParamLimits

0x977a,	// (0x0004d818) cell_ituss_key_pane_g5

0x9796,	// (0x0004d834) cell_ituss_key_pane_g6_ParamLimits

0x9796,	// (0x0004d834) cell_ituss_key_pane_g6

0x9a6e,	// (0x0004db0c) bg_icf_pane_g1

0xf348,	// (0x000533e6) bg_icf_pane_g2

0xf354,	// (0x000533f2) bg_icf_pane_g3

0xf35e,	// (0x000533fc) bg_icf_pane_g4

0xf36a,	// (0x00053408) bg_icf_pane_g5

0xf374,	// (0x00053412) bg_icf_pane_g6

0xf380,	// (0x0005341e) bg_icf_pane_g7

0xf38a,	// (0x00053428) bg_icf_pane_g8

0xf396,	// (0x00053434) bg_icf_pane_g9

0x0008,

0xfef0,	// (0x00053f8e) bg_icf_pane_g

0xf1c9,	// (0x00053267) popup_hyb_candi_window_ParamLimits

0xf1c9,	// (0x00053267) popup_hyb_candi_window

0x9afa,	// (0x0004db98) bg_popup_sub_pane_cp01_ParamLimits

0x9afa,	// (0x0004db98) bg_popup_sub_pane_cp01

0xf467,	// (0x00053505) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x00053505) entry_hyb_candi_pane

0xf476,	// (0x00053514) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x00053514) grid_hyb_candi_pane

0xf48b,	// (0x00053529) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x00053529) grid_hyb_phrase_pane

0xf49a,	// (0x00053538) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x00053538) cell_hyb_candi_pane

0xf4bd,	// (0x0005355b) cell_hyb_candi_scroll_pane

0x12d3,	// (0x00045371) cell_hyb_candi_pane_g1

0xf4c6,	// (0x00053564) cell_hyb_candi_pane_t1

0xf4d4,	// (0x00053572) cell_hyb_phrase_pane

0x12d3,	// (0x00045371) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0005357b) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x00053589) entry_hyb_candi_pane_t1

0x173d,	// (0x000457db) input_focus_pane_cp06

0xf4f9,	// (0x00053597) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0005359f) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x000535a7) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x000535af) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x000535b7) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x000535bf) cell_hyb_candi_scroll_pane_g4
};


const AknLayoutScalable_Avkon::SCdlImpl KCdlImpl = 
	{
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineRVC,
	&WindowLineVCR,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowLineVCR,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&WindowLineVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineCVR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&GetComponentTypeById,
	&GetParamLimitsById,
	&GetWindowComponentById,
	&GetTextComponentById,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
