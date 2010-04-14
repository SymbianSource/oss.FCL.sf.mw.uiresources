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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0004a381 };

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
0x7f4a,	// (0x000522cb) Screen

0x7f5e,	// (0x000522df) application_window_ParamLimits

0x7f5e,	// (0x000522df) application_window

0x7f78,	// (0x000522f9) screen_g1

0x4977,	// (0x0004ecf8) area_bottom_pane_ParamLimits

0x4977,	// (0x0004ecf8) area_bottom_pane

0x4a37,	// (0x0004edb8) area_top_pane_ParamLimits

0x4a37,	// (0x0004edb8) area_top_pane

0x4ad5,	// (0x0004ee56) main_pane_ParamLimits

0x4ad5,	// (0x0004ee56) main_pane

0x7f82,	// (0x00052303) misc_graphics

0x98fc,	// (0x00053c7d) battery_pane_ParamLimits

0x98fc,	// (0x00053c7d) battery_pane

0xa5db,	// (0x0005495c) bg_status_flat_pane_g8

0xa5e3,	// (0x00054964) bg_status_flat_pane_g9

0x99be,	// (0x00053d3f) context_pane_ParamLimits

0x99be,	// (0x00053d3f) context_pane

0x9ad4,	// (0x00053e55) navi_pane_ParamLimits

0x9ad4,	// (0x00053e55) navi_pane

0x9b58,	// (0x00053ed9) signal_pane_ParamLimits

0x9b58,	// (0x00053ed9) signal_pane

0x0008,

0xf879,	// (0x00059bfa) bg_status_flat_pane_g

0x9bc5,	// (0x00053f46) status_pane_g1_ParamLimits

0x9bc5,	// (0x00053f46) status_pane_g1

0x9bd1,	// (0x00053f52) status_pane_g2_ParamLimits

0x9bd1,	// (0x00053f52) status_pane_g2

0x9bdd,	// (0x00053f5e) status_pane_g3_ParamLimits

0x9bdd,	// (0x00053f5e) status_pane_g3

0x0004,

0xf7a5,	// (0x00059b26) status_pane_g_ParamLimits

0xf7a5,	// (0x00059b26) status_pane_g

0x9c11,	// (0x00053f92) title_pane_ParamLimits

0x9c11,	// (0x00053f92) title_pane

0x9c4e,	// (0x00053fcf) uni_indicator_pane_ParamLimits

0x9c4e,	// (0x00053fcf) uni_indicator_pane

0x9824,	// (0x00053ba5) bg_list_pane_ParamLimits

0x9824,	// (0x00053ba5) bg_list_pane

0x20b6,	// (0x0004c437) find_pane

0x9844,	// (0x00053bc5) listscroll_app_pane_ParamLimits

0x9844,	// (0x00053bc5) listscroll_app_pane

0x9850,	// (0x00053bd1) listscroll_form_pane

0x5ace,	// (0x0004fe4f) listscroll_gen_pane_ParamLimits

0x5ace,	// (0x0004fe4f) listscroll_gen_pane

0x5ae2,	// (0x0004fe63) listscroll_set_pane

0x8a9e,	// (0x00052e1f) main_idle_act_pane

0x9530,	// (0x000538b1) main_idle_trad_pane

0x9530,	// (0x000538b1) main_list_empty_pane

0x986a,	// (0x00053beb) main_midp_pane

0x9876,	// (0x00053bf7) main_pane_g1_ParamLimits

0x9876,	// (0x00053bf7) main_pane_g1

0x5af8,	// (0x0004fe79) popup_ai_message_window_ParamLimits

0x5af8,	// (0x0004fe79) popup_ai_message_window

0x5ba4,	// (0x0004ff25) popup_fep_china_uni_window_ParamLimits

0x5ba4,	// (0x0004ff25) popup_fep_china_uni_window

0x5bfe,	// (0x0004ff7f) popup_fep_japan_candidate_window_ParamLimits

0x5bfe,	// (0x0004ff7f) popup_fep_japan_candidate_window

0x5c1c,	// (0x0004ff9d) popup_fep_japan_predictive_window_ParamLimits

0x5c1c,	// (0x0004ff9d) popup_fep_japan_predictive_window

0x5c4c,	// (0x0004ffcd) popup_find_window

0x5c59,	// (0x0004ffda) popup_grid_graphic_window_ParamLimits

0x5c59,	// (0x0004ffda) popup_grid_graphic_window

0x5c81,	// (0x00050002) popup_large_graphic_colour_window

0x5ca7,	// (0x00050028) popup_menu_window_ParamLimits

0x5ca7,	// (0x00050028) popup_menu_window

0x5e61,	// (0x000501e2) popup_note_image_window

0x5e4d,	// (0x000501ce) popup_note_wait_window_ParamLimits

0x5e4d,	// (0x000501ce) popup_note_wait_window

0x5e4d,	// (0x000501ce) popup_note_window_ParamLimits

0x5e4d,	// (0x000501ce) popup_note_window

0x5eb7,	// (0x00050238) popup_query_code_window_ParamLimits

0x5eb7,	// (0x00050238) popup_query_code_window

0x5ecb,	// (0x0005024c) popup_query_data_code_window_ParamLimits

0x5ecb,	// (0x0005024c) popup_query_data_code_window

0x5ee6,	// (0x00050267) popup_query_data_window_ParamLimits

0x5ee6,	// (0x00050267) popup_query_data_window

0x5f00,	// (0x00050281) popup_query_sat_info_window_ParamLimits

0x5f00,	// (0x00050281) popup_query_sat_info_window

0x5f39,	// (0x000502ba) popup_snote_single_graphic_window_ParamLimits

0x5f39,	// (0x000502ba) popup_snote_single_graphic_window

0x5f39,	// (0x000502ba) popup_snote_single_text_window_ParamLimits

0x5f39,	// (0x000502ba) popup_snote_single_text_window

0x5f4e,	// (0x000502cf) popup_sub_window_general

0x607c,	// (0x000503fd) popup_window_general_ParamLimits

0x607c,	// (0x000503fd) popup_window_general

0x9884,	// (0x00053c05) power_save_pane

0x5974,	// (0x0004fcf5) control_pane_g1_ParamLimits

0x5974,	// (0x0004fcf5) control_pane_g1

0x599b,	// (0x0004fd1c) control_pane_g2_ParamLimits

0x599b,	// (0x0004fd1c) control_pane_g2

0x97e7,	// (0x00053b68) control_pane_g3_ParamLimits

0x97e7,	// (0x00053b68) control_pane_g3

0x0007,

0xf78d,	// (0x00059b0e) control_pane_g_ParamLimits

0xf78d,	// (0x00059b0e) control_pane_g

0x59e3,	// (0x0004fd64) control_pane_t1_ParamLimits

0x59e3,	// (0x0004fd64) control_pane_t1

0x5a2f,	// (0x0004fdb0) control_pane_t2_ParamLimits

0x5a2f,	// (0x0004fdb0) control_pane_t2

0x0002,

0xf79e,	// (0x00059b1f) control_pane_t_ParamLimits

0xf79e,	// (0x00059b1f) control_pane_t

0x970c,	// (0x00053a8d) navi_navi_volume_pane_cp1

0x9714,	// (0x00053a95) status_small_icon_pane

0x971c,	// (0x00053a9d) status_small_pane_g1_ParamLimits

0x971c,	// (0x00053a9d) status_small_pane_g1

0x9750,	// (0x00053ad1) status_small_pane_g2_ParamLimits

0x9750,	// (0x00053ad1) status_small_pane_g2

0x975c,	// (0x00053add) status_small_pane_g3_ParamLimits

0x975c,	// (0x00053add) status_small_pane_g3

0x9768,	// (0x00053ae9) status_small_pane_g4_ParamLimits

0x9768,	// (0x00053ae9) status_small_pane_g4

0x9774,	// (0x00053af5) status_small_pane_g5_ParamLimits

0x9774,	// (0x00053af5) status_small_pane_g5

0x9782,	// (0x00053b03) status_small_pane_g6_ParamLimits

0x9782,	// (0x00053b03) status_small_pane_g6

0x0007,

0xf77c,	// (0x00059afd) status_small_pane_g_ParamLimits

0xf77c,	// (0x00059afd) status_small_pane_g

0x97b1,	// (0x00053b32) status_small_pane_t1

0x97d3,	// (0x00053b54) status_small_wait_pane_ParamLimits

0x97d3,	// (0x00053b54) status_small_wait_pane

0x8f8e,	// (0x0005330f) aid_levels_signal_ParamLimits

0x8f8e,	// (0x0005330f) aid_levels_signal

0x8fa0,	// (0x00053321) signal_pane_g1_ParamLimits

0x8fa0,	// (0x00053321) signal_pane_g1

0x8fb5,	// (0x00053336) signal_pane_g2_ParamLimits

0x8fb5,	// (0x00053336) signal_pane_g2

0x0003,

0xf70d,	// (0x00059a8e) signal_pane_g_ParamLimits

0xf70d,	// (0x00059a8e) signal_pane_g

0x8fef,	// (0x00053370) context_pane_g1

0x7f8c,	// (0x0005230d) title_pane_g1

0x7fc2,	// (0x00052343) title_pane_t1

0x802a,	// (0x000523ab) title_pane_t2

0x8050,	// (0x000523d1) title_pane_t3

0x0002,

0xf557,	// (0x000598d8) title_pane_t

0x9c66,	// (0x00053fe7) aid_levels_battery_ParamLimits

0x9c66,	// (0x00053fe7) aid_levels_battery

0x9c7a,	// (0x00053ffb) battery_pane_g1_ParamLimits

0x9c7a,	// (0x00053ffb) battery_pane_g1

0x9c90,	// (0x00054011) battery_pane_g2_ParamLimits

0x9c90,	// (0x00054011) battery_pane_g2

0x0001,

0xf7b0,	// (0x00059b31) battery_pane_g_ParamLimits

0xf7b0,	// (0x00059b31) battery_pane_g

0xaf0f,	// (0x00055290) uni_indicator_pane_g1

0xaf25,	// (0x000552a6) uni_indicator_pane_g2

0xaf3b,	// (0x000552bc) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x00059ca2) uni_indicator_pane_g

0x93a2,	// (0x00053723) navi_icon_pane_ParamLimits

0x93a2,	// (0x00053723) navi_icon_pane

0x92e0,	// (0x00053661) navi_midp_pane

0x93be,	// (0x0005373f) navi_navi_pane

0x93c8,	// (0x00053749) navi_text_pane_ParamLimits

0x93c8,	// (0x00053749) navi_text_pane

0x7f78,	// (0x000522f9) status_small_wait_pane_g1

0x8473,	// (0x000527f4) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x00059c9d) status_small_wait_pane_g

0xac36,	// (0x00054fb7) navi_navi_icon_text_pane

0xac3e,	// (0x00054fbf) navi_navi_pane_g1_ParamLimits

0xac3e,	// (0x00054fbf) navi_navi_pane_g1

0xac50,	// (0x00054fd1) navi_navi_pane_g2_ParamLimits

0xac50,	// (0x00054fd1) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00059c6b) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00059c6b) navi_navi_pane_g

0xac62,	// (0x00054fe3) navi_navi_tabs_pane

0xac6b,	// (0x00054fec) navi_navi_text_pane

0xac36,	// (0x00054fb7) navi_navi_volume_pane

0xac12,	// (0x00054f93) navi_text_pane_t1

0xac06,	// (0x00054f87) navi_icon_pane_g1

0xab59,	// (0x00054eda) navi_navi_text_pane_t1

0x63a2,	// (0x00050723) navi_navi_volume_pane_g1

0x63aa,	// (0x0005072b) volume_small_pane

0xaabf,	// (0x00054e40) navi_navi_icon_text_pane_g1

0xaac7,	// (0x00054e48) navi_navi_icon_text_pane_t1

0x93be,	// (0x0005373f) navi_tabs_2_long_pane

0x93be,	// (0x0005373f) navi_tabs_2_pane

0x93be,	// (0x0005373f) navi_tabs_3_long_pane

0x93be,	// (0x0005373f) navi_tabs_3_pane

0x93be,	// (0x0005373f) navi_tabs_4_pane

0x6382,	// (0x00050703) tabs_2_active_pane_ParamLimits

0x6382,	// (0x00050703) tabs_2_active_pane

0x6392,	// (0x00050713) tabs_2_passive_pane_ParamLimits

0x6392,	// (0x00050713) tabs_2_passive_pane

0x6350,	// (0x000506d1) tabs_3_active_pane_ParamLimits

0x6350,	// (0x000506d1) tabs_3_active_pane

0x6360,	// (0x000506e1) tabs_3_passive_pane_ParamLimits

0x6360,	// (0x000506e1) tabs_3_passive_pane

0x6371,	// (0x000506f2) tabs_3_passive_pane_cp_ParamLimits

0x6371,	// (0x000506f2) tabs_3_passive_pane_cp

0x630c,	// (0x0005068d) tabs_4_active_pane_ParamLimits

0x630c,	// (0x0005068d) tabs_4_active_pane

0x631d,	// (0x0005069e) tabs_4_passive_pane_ParamLimits

0x631d,	// (0x0005069e) tabs_4_passive_pane

0x632e,	// (0x000506af) tabs_4_passive_pane_cp_ParamLimits

0x632e,	// (0x000506af) tabs_4_passive_pane_cp

0x633f,	// (0x000506c0) tabs_4_passive_pane_cp2_ParamLimits

0x633f,	// (0x000506c0) tabs_4_passive_pane_cp2

0x62e8,	// (0x00050669) tabs_2_long_active_pane_ParamLimits

0x62e8,	// (0x00050669) tabs_2_long_active_pane

0x62fa,	// (0x0005067b) tabs_2_long_passive_pane_ParamLimits

0x62fa,	// (0x0005067b) tabs_2_long_passive_pane

0x62af,	// (0x00050630) tabs_3_long_active_pane_ParamLimits

0x62af,	// (0x00050630) tabs_3_long_active_pane

0x62c2,	// (0x00050643) tabs_3_long_passive_pane_ParamLimits

0x62c2,	// (0x00050643) tabs_3_long_passive_pane

0x62d5,	// (0x00050656) tabs_3_long_passive_pane_cp_ParamLimits

0x62d5,	// (0x00050656) tabs_3_long_passive_pane_cp

0x6255,	// (0x000505d6) volume_small_pane_g1

0x625e,	// (0x000505df) volume_small_pane_g2

0x6267,	// (0x000505e8) volume_small_pane_g3

0x6270,	// (0x000505f1) volume_small_pane_g4

0x6279,	// (0x000505fa) volume_small_pane_g5

0x6282,	// (0x00050603) volume_small_pane_g6

0x628b,	// (0x0005060c) volume_small_pane_g7

0x6294,	// (0x00050615) volume_small_pane_g8

0x629d,	// (0x0005061e) volume_small_pane_g9

0x62a6,	// (0x00050627) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x00059c37) volume_small_pane_g

0x8062,	// (0x000523e3) bg_active_tab_pane_cp2_ParamLimits

0x8062,	// (0x000523e3) bg_active_tab_pane_cp2

0x8070,	// (0x000523f1) tabs_3_active_pane_g1

0x8078,	// (0x000523f9) tabs_3_active_pane_t1

0x8062,	// (0x000523e3) bg_passive_tab_pane_cp2_ParamLimits

0x8062,	// (0x000523e3) bg_passive_tab_pane_cp2

0x8070,	// (0x000523f1) tabs_3_passive_pane_g1

0x8078,	// (0x000523f9) tabs_3_passive_pane_t1

0x8062,	// (0x000523e3) bg_active_tab_pane_cp3_ParamLimits

0x8062,	// (0x000523e3) bg_active_tab_pane_cp3

0x808a,	// (0x0005240b) tabs_4_active_pane_g1

0x8092,	// (0x00052413) tabs_4_active_pane_t1

0x8062,	// (0x000523e3) bg_passive_tab_pane_cp3_ParamLimits

0x8062,	// (0x000523e3) bg_passive_tab_pane_cp3

0x808a,	// (0x0005240b) tabs_4_1_passive_pane_g1

0x8092,	// (0x00052413) tabs_4_1_passive_pane_t1

0x986a,	// (0x00053beb) list_highlight_pane_cp2

0xb17f,	// (0x00055500) list_set_pane_ParamLimits

0xb17f,	// (0x00055500) list_set_pane

0xb221,	// (0x000555a2) main_pane_set_t1_ParamLimits

0xb221,	// (0x000555a2) main_pane_set_t1

0xb241,	// (0x000555c2) main_pane_set_t2_ParamLimits

0xb241,	// (0x000555c2) main_pane_set_t2

0xb255,	// (0x000555d6) main_pane_set_t3_ParamLimits

0xb255,	// (0x000555d6) main_pane_set_t3

0xb267,	// (0x000555e8) main_pane_set_t4_ParamLimits

0xb267,	// (0x000555e8) main_pane_set_t4

0x0003,

0xf986,	// (0x00059d07) main_pane_set_t_ParamLimits

0xf986,	// (0x00059d07) main_pane_set_t

0xb279,	// (0x000555fa) setting_code_pane

0xb283,	// (0x00055604) setting_slider_graphic_pane

0xb283,	// (0x00055604) setting_slider_pane

0xb283,	// (0x00055604) setting_text_pane

0xb283,	// (0x00055604) setting_volume_pane

0x4d16,	// (0x0004f097) volume_set_pane

0x8062,	// (0x000523e3) bg_set_opt_pane_cp

0x4d1e,	// (0x0004f09f) setting_slider_pane_t1

0x4d37,	// (0x0004f0b8) setting_slider_pane_t2

0x4d51,	// (0x0004f0d2) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000598df) setting_slider_pane_t

0x4d69,	// (0x0004f0ea) slider_set_pane

0x7f82,	// (0x00052303) bg_set_opt_pane_cp2

0x80a4,	// (0x00052425) setting_slider_graphic_pane_g1

0x4d7f,	// (0x0004f100) setting_slider_graphic_pane_t1

0x4d8f,	// (0x0004f110) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000598e6) setting_slider_graphic_pane_t

0x4d9f,	// (0x0004f120) slider_set_pane_cp

0x7f82,	// (0x00052303) input_focus_pane_cp1

0xb13e,	// (0x000554bf) list_set_text_pane

0x7f78,	// (0x000522f9) setting_text_pane_g1

0x7f82,	// (0x00052303) input_focus_pane_cp2

0x7f78,	// (0x000522f9) setting_code_pane_g1

0x80ad,	// (0x0005242e) setting_code_pane_t1

0x4da7,	// (0x0004f128) set_text_pane_t1_ParamLimits

0x4da7,	// (0x0004f128) set_text_pane_t1

0x8917,	// (0x00052c98) set_opt_bg_pane_g1

0x891f,	// (0x00052ca0) set_opt_bg_pane_g2

0xb11e,	// (0x0005549f) set_opt_bg_pane_g3

0x892f,	// (0x00052cb0) set_opt_bg_pane_g4

0x8937,	// (0x00052cb8) set_opt_bg_pane_g5

0x893f,	// (0x00052cc0) set_opt_bg_pane_g6

0xb126,	// (0x000554a7) set_opt_bg_pane_g7

0xb12e,	// (0x000554af) set_opt_bg_pane_g8

0xb136,	// (0x000554b7) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x00059cf4) set_opt_bg_pane_g

0xb111,	// (0x00055492) slider_set_pane_g1

0x6417,	// (0x00050798) slider_set_pane_g2

0x0006,

0xf964,	// (0x00059ce5) slider_set_pane_g

0x63b3,	// (0x00050734) volume_set_pane_g1

0x63bb,	// (0x0005073c) volume_set_pane_g2

0x63c3,	// (0x00050744) volume_set_pane_g3

0x63cb,	// (0x0005074c) volume_set_pane_g4

0x63d3,	// (0x00050754) volume_set_pane_g5

0x63db,	// (0x0005075c) volume_set_pane_g6

0x63e3,	// (0x00050764) volume_set_pane_g7

0x63eb,	// (0x0005076c) volume_set_pane_g8

0x63f3,	// (0x00050774) volume_set_pane_g9

0x63fb,	// (0x0005077c) volume_set_pane_g10

0x0009,

0xf93c,	// (0x00059cbd) volume_set_pane_g

0x80bb,	// (0x0005243c) indicator_pane_ParamLimits

0x80bb,	// (0x0005243c) indicator_pane

0x80c7,	// (0x00052448) main_idle_pane_g2_ParamLimits

0x80c7,	// (0x00052448) main_idle_pane_g2

0x80ef,	// (0x00052470) main_pane_idle_g1_ParamLimits

0x80ef,	// (0x00052470) main_pane_idle_g1

0x80fc,	// (0x0005247d) popup_clock_digital_analogue_window_ParamLimits

0x80fc,	// (0x0005247d) popup_clock_digital_analogue_window

0x8113,	// (0x00052494) soft_indicator_pane_ParamLimits

0x8113,	// (0x00052494) soft_indicator_pane

0x811f,	// (0x000524a0) wallpaper_pane_ParamLimits

0x811f,	// (0x000524a0) wallpaper_pane

0x7f78,	// (0x000522f9) wallpaper_pane_g1

0x8133,	// (0x000524b4) indicator_pane_g1_ParamLimits

0x8133,	// (0x000524b4) indicator_pane_g1

0xb4da,	// (0x0005585b) navi_navi_icon_text_pane_srt_g1

0x814e,	// (0x000524cf) soft_indicator_pane_t1

0x8168,	// (0x000524e9) aid_ps_area_pane

0x8179,	// (0x000524fa) aid_ps_clock_pane

0x8187,	// (0x00052508) aid_ps_indicator_pane

0x8193,	// (0x00052514) indicator_ps_pane_ParamLimits

0x8193,	// (0x00052514) indicator_ps_pane

0x81a2,	// (0x00052523) power_save_pane_g1_ParamLimits

0x81a2,	// (0x00052523) power_save_pane_g1

0x81ae,	// (0x0005252f) power_save_pane_g2_ParamLimits

0x81ae,	// (0x0005252f) power_save_pane_g2

0x492b,	// (0x0004ecac) aid_navinavi_width_pane

0x8168,	// (0x000524e9) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000598eb) power_save_pane_g_ParamLimits

0xf56a,	// (0x000598eb) power_save_pane_g

0x81bc,	// (0x0005253d) power_save_pane_t1_ParamLimits

0x81bc,	// (0x0005253d) power_save_pane_t1

0x8179,	// (0x000524fa) aid_ps_clock_pane_ParamLimits

0x8187,	// (0x00052508) aid_ps_indicator_pane_ParamLimits

0x81ce,	// (0x0005254f) power_save_pane_t4_ParamLimits

0x81ce,	// (0x0005254f) power_save_pane_t4

0x0001,

0xf56f,	// (0x000598f0) power_save_pane_t_ParamLimits

0xf56f,	// (0x000598f0) power_save_pane_t

0x81f8,	// (0x00052579) power_save_t3_ParamLimits

0x81f8,	// (0x00052579) power_save_t3

0x81e3,	// (0x00052564) power_save_t2_ParamLimits

0x81e3,	// (0x00052564) power_save_t2

0x820d,	// (0x0005258e) indicator_ps_pane_g1

0x8216,	// (0x00052597) ai_gene_pane_ParamLimits

0x8216,	// (0x00052597) ai_gene_pane

0x8222,	// (0x000525a3) ai_links_pane_ParamLimits

0x8222,	// (0x000525a3) ai_links_pane

0x822e,	// (0x000525af) indicator_pane_cp1_ParamLimits

0x822e,	// (0x000525af) indicator_pane_cp1

0x823a,	// (0x000525bb) main_pane_idle_g1_cp_ParamLimits

0x823a,	// (0x000525bb) main_pane_idle_g1_cp

0x8246,	// (0x000525c7) popup_ai_links_title_window

0x824f,	// (0x000525d0) soft_indicator_pane_cp1_ParamLimits

0x824f,	// (0x000525d0) soft_indicator_pane_cp1

0xaefd,	// (0x0005527e) ai_links_pane_g1

0xaf06,	// (0x00055287) grid_ai_links_pane

0xaee0,	// (0x00055261) ai_gene_pane_1

0xaeeb,	// (0x0005526c) ai_gene_pane_2

0xaef4,	// (0x00055275) list_highlight_pane_cp4

0xaec4,	// (0x00055245) cell_ai_link_pane_ParamLimits

0xaec4,	// (0x00055245) cell_ai_link_pane

0xaebc,	// (0x0005523d) cell_ai_link_pane_g1

0x8473,	// (0x000527f4) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x00059c98) cell_ai_link_pane_g

0x7f82,	// (0x00052303) grid_highlight_cp2

0x7f82,	// (0x00052303) bg_popup_sub_pane_cp1

0x8269,	// (0x000525ea) popup_ai_links_title_window_t1

0xae0c,	// (0x0005518d) ai_gene_pane_1_g1_ParamLimits

0xae0c,	// (0x0005518d) ai_gene_pane_1_g1

0xae18,	// (0x00055199) ai_gene_pane_1_g2_ParamLimits

0xae18,	// (0x00055199) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00059c8e) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00059c8e) ai_gene_pane_1_g

0xae25,	// (0x000551a6) ai_gene_pane_1_t1_ParamLimits

0xae25,	// (0x000551a6) ai_gene_pane_1_t1

0xae59,	// (0x000551da) grid_ai_soft_ind_pane

0xadf7,	// (0x00055178) ai_gene_pane_2_t1_ParamLimits

0xadf7,	// (0x00055178) ai_gene_pane_2_t1

0x8278,	// (0x000525f9) main_pane_empty_t1_ParamLimits

0x8278,	// (0x000525f9) main_pane_empty_t1

0x8290,	// (0x00052611) main_pane_empty_t2_ParamLimits

0x8290,	// (0x00052611) main_pane_empty_t2

0x82a5,	// (0x00052626) main_pane_empty_t3_ParamLimits

0x82a5,	// (0x00052626) main_pane_empty_t3

0x82b7,	// (0x00052638) main_pane_empty_t4_ParamLimits

0x82b7,	// (0x00052638) main_pane_empty_t4

0x82c9,	// (0x0005264a) main_pane_empty_t5_ParamLimits

0x82c9,	// (0x0005264a) main_pane_empty_t5

0x0004,

0xf574,	// (0x000598f5) main_pane_empty_t_ParamLimits

0xf574,	// (0x000598f5) main_pane_empty_t

0x8968,	// (0x00052ce9) bg_popup_window_pane_ParamLimits

0x8968,	// (0x00052ce9) bg_popup_window_pane

0xab67,	// (0x00054ee8) find_popup_pane_cp2_ParamLimits

0xab67,	// (0x00054ee8) find_popup_pane_cp2

0xab73,	// (0x00054ef4) heading_pane_ParamLimits

0xab73,	// (0x00054ef4) heading_pane

0x7f82,	// (0x00052303) bg_popup_sub_pane

0xaae1,	// (0x00054e62) bg_popup_window_pane_g1_ParamLimits

0xaae1,	// (0x00054e62) bg_popup_window_pane_g1

0xaaed,	// (0x00054e6e) bg_popup_window_pane_g2_ParamLimits

0xaaed,	// (0x00054e6e) bg_popup_window_pane_g2

0xaaf9,	// (0x00054e7a) bg_popup_window_pane_g3_ParamLimits

0xaaf9,	// (0x00054e7a) bg_popup_window_pane_g3

0xab05,	// (0x00054e86) bg_popup_window_pane_g4_ParamLimits

0xab05,	// (0x00054e86) bg_popup_window_pane_g4

0xab11,	// (0x00054e92) bg_popup_window_pane_g5_ParamLimits

0xab11,	// (0x00054e92) bg_popup_window_pane_g5

0xab1d,	// (0x00054e9e) bg_popup_window_pane_g6_ParamLimits

0xab1d,	// (0x00054e9e) bg_popup_window_pane_g6

0xab29,	// (0x00054eaa) bg_popup_window_pane_g7_ParamLimits

0xab29,	// (0x00054eaa) bg_popup_window_pane_g7

0xab35,	// (0x00054eb6) bg_popup_window_pane_g8_ParamLimits

0xab35,	// (0x00054eb6) bg_popup_window_pane_g8

0xab41,	// (0x00054ec2) bg_popup_window_pane_g9_ParamLimits

0xab41,	// (0x00054ec2) bg_popup_window_pane_g9

0xab4d,	// (0x00054ece) bg_popup_window_pane_g10_ParamLimits

0xab4d,	// (0x00054ece) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x00059c56) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x00059c56) bg_popup_window_pane_g

0xaa76,	// (0x00054df7) bg_popup_heading_pane_ParamLimits

0xaa76,	// (0x00054df7) bg_popup_heading_pane

0x649f,	// (0x00050820) tabs_4_passive_pane_cp_srt_ParamLimits

0x649f,	// (0x00050820) tabs_4_passive_pane_cp_srt

0x64b1,	// (0x00050832) tabs_4_passive_pane_srt_ParamLimits

0xaa8a,	// (0x00054e0b) heading_pane_g2

0x64b1,	// (0x00050832) tabs_4_passive_pane_srt

0x986a,	// (0x00053beb) bg_passive_tab_pane_cp3_srt_ParamLimits

0x986a,	// (0x00053beb) bg_passive_tab_pane_cp3_srt

0xaa92,	// (0x00054e13) heading_pane_t1_ParamLimits

0xaa92,	// (0x00054e13) heading_pane_t1

0xaaa9,	// (0x00054e2a) heading_pane_t2_ParamLimits

0xaaa9,	// (0x00054e2a) heading_pane_t2

0x0001,

0xf8d0,	// (0x00059c51) heading_pane_t_ParamLimits

0xf8d0,	// (0x00059c51) heading_pane_t

0xa5a3,	// (0x00054924) bg_popup_heading_pane_g1

0xa652,	// (0x000549d3) bg_popup_heading_pane_g2

0xa65c,	// (0x000549dd) bg_popup_heading_pane_g3

0xa666,	// (0x000549e7) bg_popup_heading_pane_g4

0xa670,	// (0x000549f1) bg_popup_heading_pane_g5

0xa67a,	// (0x000549fb) bg_popup_heading_pane_g6

0xa682,	// (0x00054a03) bg_popup_heading_pane_g7

0xa68a,	// (0x00054a0b) bg_popup_heading_pane_g8

0xa694,	// (0x00054a15) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00059c0d) bg_popup_heading_pane_g

0x9d68,	// (0x000540e9) bg_popup_sub_pane_g1

0x9d78,	// (0x000540f9) bg_popup_sub_pane_g2

0x9d70,	// (0x000540f1) bg_popup_sub_pane_g3

0x9d88,	// (0x00054109) bg_popup_sub_pane_g4

0x9d80,	// (0x00054101) bg_popup_sub_pane_g5

0x9d90,	// (0x00054111) bg_popup_sub_pane_g6

0x9d98,	// (0x00054119) bg_popup_sub_pane_g7

0x9da8,	// (0x00054129) bg_popup_sub_pane_g8

0x9da0,	// (0x00054121) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00059be7) bg_popup_sub_pane_g

0x82dd,	// (0x0005265e) bg_popup_window_pane_cp5_ParamLimits

0x82dd,	// (0x0005265e) bg_popup_window_pane_cp5

0x82f9,	// (0x0005267a) popup_note_window_g1_ParamLimits

0x82f9,	// (0x0005267a) popup_note_window_g1

0x8305,	// (0x00052686) popup_note_window_t1_ParamLimits

0x8305,	// (0x00052686) popup_note_window_t1

0x8317,	// (0x00052698) popup_note_window_t2_ParamLimits

0x8317,	// (0x00052698) popup_note_window_t2

0x8329,	// (0x000526aa) popup_note_window_t3_ParamLimits

0x8329,	// (0x000526aa) popup_note_window_t3

0x833b,	// (0x000526bc) popup_note_window_t4_ParamLimits

0x833b,	// (0x000526bc) popup_note_window_t4

0x8363,	// (0x000526e4) popup_note_window_t5_ParamLimits

0x8363,	// (0x000526e4) popup_note_window_t5

0x0004,

0xf57f,	// (0x00059900) popup_note_window_t_ParamLimits

0xf57f,	// (0x00059900) popup_note_window_t

0x8387,	// (0x00052708) bg_popup_window_pane_cp6_ParamLimits

0x8387,	// (0x00052708) bg_popup_window_pane_cp6

0xa517,	// (0x00054898) popup_note_image_window_g1_ParamLimits

0xa517,	// (0x00054898) popup_note_image_window_g1

0xa523,	// (0x000548a4) popup_note_image_window_g2_ParamLimits

0xa523,	// (0x000548a4) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00059bdb) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00059bdb) popup_note_image_window_g

0xa53c,	// (0x000548bd) popup_note_image_window_t1_ParamLimits

0xa53c,	// (0x000548bd) popup_note_image_window_t1

0xa555,	// (0x000548d6) popup_note_image_window_t2_ParamLimits

0xa555,	// (0x000548d6) popup_note_image_window_t2

0xa56e,	// (0x000548ef) popup_note_image_window_t3_ParamLimits

0xa56e,	// (0x000548ef) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00059be0) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00059be0) popup_note_image_window_t

0xa3d8,	// (0x00054759) bg_popup_window_pane_cp7_ParamLimits

0xa3d8,	// (0x00054759) bg_popup_window_pane_cp7

0xa408,	// (0x00054789) popup_note_wait_window_g1_ParamLimits

0xa408,	// (0x00054789) popup_note_wait_window_g1

0xa414,	// (0x00054795) popup_note_wait_window_g2_ParamLimits

0xa414,	// (0x00054795) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00059bc9) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00059bc9) popup_note_wait_window_g

0xa42c,	// (0x000547ad) popup_note_wait_window_t1_ParamLimits

0xa42c,	// (0x000547ad) popup_note_wait_window_t1

0xa453,	// (0x000547d4) popup_note_wait_window_t2_ParamLimits

0xa453,	// (0x000547d4) popup_note_wait_window_t2

0xa470,	// (0x000547f1) popup_note_wait_window_t3_ParamLimits

0xa470,	// (0x000547f1) popup_note_wait_window_t3

0xa483,	// (0x00054804) popup_note_wait_window_t4_ParamLimits

0xa483,	// (0x00054804) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00059bd0) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00059bd0) popup_note_wait_window_t

0xa4a8,	// (0x00054829) wait_bar_pane_ParamLimits

0xa4a8,	// (0x00054829) wait_bar_pane

0x7f82,	// (0x00052303) wait_anim_pane

0x7f82,	// (0x00052303) wait_border_pane

0x7f78,	// (0x000522f9) wait_anim_pane_g1

0x7f78,	// (0x000522f9) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00059a89) wait_anim_pane_g

0xa370,	// (0x000546f1) wait_border_pane_g1

0xa387,	// (0x00054708) wait_border_pane_g2

0xa390,	// (0x00054711) wait_border_pane_g3

0x0002,

0xf841,	// (0x00059bc2) wait_border_pane_g

0xa1e0,	// (0x00054561) bg_popup_window_pane_cp16_ParamLimits

0xa1e0,	// (0x00054561) bg_popup_window_pane_cp16

0xa2e0,	// (0x00054661) indicator_popup_pane_cp4_ParamLimits

0xa2e0,	// (0x00054661) indicator_popup_pane_cp4

0xa2f4,	// (0x00054675) popup_query_data_window_t1_ParamLimits

0xa2f4,	// (0x00054675) popup_query_data_window_t1

0xa306,	// (0x00054687) popup_query_data_window_t2_ParamLimits

0xa306,	// (0x00054687) popup_query_data_window_t2

0xa31f,	// (0x000546a0) popup_query_data_window_t3_ParamLimits

0xa31f,	// (0x000546a0) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00059bbb) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00059bbb) popup_query_data_window_t

0xa339,	// (0x000546ba) query_popup_data_pane_ParamLimits

0xa339,	// (0x000546ba) query_popup_data_pane

0xa34d,	// (0x000546ce) query_popup_data_pane_cp1_ParamLimits

0xa34d,	// (0x000546ce) query_popup_data_pane_cp1

0xa1e0,	// (0x00054561) bg_popup_window_pane_cp10_ParamLimits

0xa1e0,	// (0x00054561) bg_popup_window_pane_cp10

0xa212,	// (0x00054593) indicator_popup_pane_ParamLimits

0xa212,	// (0x00054593) indicator_popup_pane

0xa234,	// (0x000545b5) popup_query_code_window_t1_ParamLimits

0xa234,	// (0x000545b5) popup_query_code_window_t1

0xa24e,	// (0x000545cf) popup_query_code_window_t2_ParamLimits

0xa24e,	// (0x000545cf) popup_query_code_window_t2

0xa297,	// (0x00054618) popup_query_code_window_t3_ParamLimits

0xa297,	// (0x00054618) popup_query_code_window_t3

0x0002,

0xf833,	// (0x00059bb4) popup_query_code_window_t_ParamLimits

0xf833,	// (0x00059bb4) popup_query_code_window_t

0xa2c6,	// (0x00054647) query_popup_pane_ParamLimits

0xa2c6,	// (0x00054647) query_popup_pane

0x8387,	// (0x00052708) bg_popup_window_pane_cp15_ParamLimits

0x8387,	// (0x00052708) bg_popup_window_pane_cp15

0x83a5,	// (0x00052726) indicator_popup_pane_cp1_ParamLimits

0x83a5,	// (0x00052726) indicator_popup_pane_cp1

0x83b8,	// (0x00052739) indicator_popup_pane_cp2_ParamLimits

0x83b8,	// (0x00052739) indicator_popup_pane_cp2

0x83cb,	// (0x0005274c) popup_query_data_code_window_g1_ParamLimits

0x83cb,	// (0x0005274c) popup_query_data_code_window_g1

0x83de,	// (0x0005275f) popup_query_data_code_window_t1_ParamLimits

0x83de,	// (0x0005275f) popup_query_data_code_window_t1

0x83f0,	// (0x00052771) popup_query_data_code_window_t2_ParamLimits

0x83f0,	// (0x00052771) popup_query_data_code_window_t2

0x8402,	// (0x00052783) popup_query_data_code_window_t3_ParamLimits

0x8402,	// (0x00052783) popup_query_data_code_window_t3

0x8418,	// (0x00052799) popup_query_data_code_window_t4_ParamLimits

0x8418,	// (0x00052799) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005990b) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005990b) popup_query_data_code_window_t

0x6108,	// (0x00050489) list_single_midp_graphic_pane_g3

0x8430,	// (0x000527b1) query_popup_data_pane_cp2_ParamLimits

0x8443,	// (0x000527c4) query_popup_pane_cp2_ParamLimits

0x8443,	// (0x000527c4) query_popup_pane_cp2

0x7f82,	// (0x00052303) bg_popup_window_pane_cp11

0xa1d8,	// (0x00054559) heading_pane_cp5

0x852e,	// (0x000528af) listscroll_popup_info_pane

0x7f82,	// (0x00052303) input_focus_pane_cp3

0x8456,	// (0x000527d7) query_popup_pane_t1

0x8464,	// (0x000527e5) list_popup_info_pane_ParamLimits

0x8464,	// (0x000527e5) list_popup_info_pane

0x8473,	// (0x000527f4) listscroll_popup_info_pane_g1

0x847b,	// (0x000527fc) scroll_pane_cp7

0x8485,	// (0x00052806) popup_info_list_pane_t1_ParamLimits

0x8485,	// (0x00052806) popup_info_list_pane_t1

0x849f,	// (0x00052820) popup_info_list_pane_t2_ParamLimits

0x849f,	// (0x00052820) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00059914) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00059914) popup_info_list_pane_t

0x7f82,	// (0x00052303) bg_popup_window_pane_cp12

0xb4f4,	// (0x00055875) find_popup_pane

0x8062,	// (0x000523e3) bg_popup_window_pane_cp3

0x84b9,	// (0x0005283a) heading_pane_cp3

0x84c5,	// (0x00052846) listscroll_popup_graphic_pane

0x7f82,	// (0x00052303) bg_popup_window_pane_cp4

0x8524,	// (0x000528a5) heading_pane_cp4

0x852e,	// (0x000528af) listscroll_popup_colour_pane

0x8536,	// (0x000528b7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8536,	// (0x000528b7) cell_large_graphic_colour_none_popup_pane

0x854a,	// (0x000528cb) grid_large_graphic_colour_popup_pane_ParamLimits

0x854a,	// (0x000528cb) grid_large_graphic_colour_popup_pane

0x8572,	// (0x000528f3) listscroll_popup_colour_pane_g1_ParamLimits

0x8572,	// (0x000528f3) listscroll_popup_colour_pane_g1

0x8589,	// (0x0005290a) listscroll_popup_colour_pane_g2_ParamLimits

0x8589,	// (0x0005290a) listscroll_popup_colour_pane_g2

0x85a0,	// (0x00052921) listscroll_popup_colour_pane_g3_ParamLimits

0x85a0,	// (0x00052921) listscroll_popup_colour_pane_g3

0x85b0,	// (0x00052931) listscroll_popup_colour_pane_g4_ParamLimits

0x85b0,	// (0x00052931) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00059919) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00059919) listscroll_popup_colour_pane_g

0x85bf,	// (0x00052940) scroll_pane_cp6_ParamLimits

0x85bf,	// (0x00052940) scroll_pane_cp6

0x85d1,	// (0x00052952) cell_large_graphic_colour_popup_pane_ParamLimits

0x85d1,	// (0x00052952) cell_large_graphic_colour_popup_pane

0x85f0,	// (0x00052971) cell_large_graphic_colour_none_popup_pane_t1

0x7f82,	// (0x00052303) grid_highlight_pane_cp5

0x85ff,	// (0x00052980) cell_large_graphic_colour_popup_pane_g1

0x8607,	// (0x00052988) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00059922) cell_large_graphic_colour_popup_pane_g

0x860f,	// (0x00052990) cell_large_graphic_colour_popup_pane_g2_copy1

0x8618,	// (0x00052999) grid_highlight_pane_cp4

0x8620,	// (0x000529a1) bg_popup_window_pane_cp8_ParamLimits

0x8620,	// (0x000529a1) bg_popup_window_pane_cp8

0x863b,	// (0x000529bc) popup_snote_single_text_window_g1_ParamLimits

0x863b,	// (0x000529bc) popup_snote_single_text_window_g1

0x864d,	// (0x000529ce) popup_snote_single_text_window_t1_ParamLimits

0x864d,	// (0x000529ce) popup_snote_single_text_window_t1

0x8660,	// (0x000529e1) popup_snote_single_text_window_t2_ParamLimits

0x8660,	// (0x000529e1) popup_snote_single_text_window_t2

0x8673,	// (0x000529f4) popup_snote_single_text_window_t3_ParamLimits

0x8673,	// (0x000529f4) popup_snote_single_text_window_t3

0x86ac,	// (0x00052a2d) popup_snote_single_text_window_t4_ParamLimits

0x86ac,	// (0x00052a2d) popup_snote_single_text_window_t4

0x86e0,	// (0x00052a61) popup_snote_single_text_window_t5_ParamLimits

0x86e0,	// (0x00052a61) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00059927) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00059927) popup_snote_single_text_window_t

0x870f,	// (0x00052a90) bg_popup_window_pane_cp9_ParamLimits

0x870f,	// (0x00052a90) bg_popup_window_pane_cp9

0x863b,	// (0x000529bc) popup_snote_single_graphic_window_g1_ParamLimits

0x863b,	// (0x000529bc) popup_snote_single_graphic_window_g1

0x871d,	// (0x00052a9e) popup_snote_single_graphic_window_g2_ParamLimits

0x871d,	// (0x00052a9e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00059932) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00059932) popup_snote_single_graphic_window_g

0x8729,	// (0x00052aaa) popup_snote_single_graphic_window_t1_ParamLimits

0x8729,	// (0x00052aaa) popup_snote_single_graphic_window_t1

0x873c,	// (0x00052abd) popup_snote_single_graphic_window_t2_ParamLimits

0x873c,	// (0x00052abd) popup_snote_single_graphic_window_t2

0x874f,	// (0x00052ad0) popup_snote_single_graphic_window_t3_ParamLimits

0x874f,	// (0x00052ad0) popup_snote_single_graphic_window_t3

0x8788,	// (0x00052b09) popup_snote_single_graphic_window_t4_ParamLimits

0x8788,	// (0x00052b09) popup_snote_single_graphic_window_t4

0x87bc,	// (0x00052b3d) popup_snote_single_graphic_window_t5_ParamLimits

0x87bc,	// (0x00052b3d) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00059937) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00059937) popup_snote_single_graphic_window_t

0xb437,	// (0x000557b8) grid_graphic_popup_pane_ParamLimits

0xb437,	// (0x000557b8) grid_graphic_popup_pane

0xb460,	// (0x000557e1) listscroll_popup_graphic_pane_g1_ParamLimits

0xb460,	// (0x000557e1) listscroll_popup_graphic_pane_g1

0xb474,	// (0x000557f5) listscroll_popup_graphic_pane_g2_ParamLimits

0xb474,	// (0x000557f5) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00059d31) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00059d31) listscroll_popup_graphic_pane_g

0xb488,	// (0x00055809) scroll_pane_cp5

0xb3d7,	// (0x00055758) cell_graphic_popup_pane_ParamLimits

0xb3d7,	// (0x00055758) cell_graphic_popup_pane

0xb3b8,	// (0x00055739) cell_graphic_popup_pane_g1

0xb3c0,	// (0x00055741) cell_graphic_popup_pane_g2

0x860f,	// (0x00052990) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x00059d2a) cell_graphic_popup_pane_g

0xb3c9,	// (0x0005574a) cell_graphic_popup_pane_t2

0x8618,	// (0x00052999) grid_highlight_pane_cp3

0x87fd,	// (0x00052b7e) list_gen_pane_ParamLimits

0x87fd,	// (0x00052b7e) list_gen_pane

0x882f,	// (0x00052bb0) scroll_pane

0xb31a,	// (0x0005569b) bg_list_pane_g1_ParamLimits

0xb31a,	// (0x0005569b) bg_list_pane_g1

0xb335,	// (0x000556b6) bg_list_pane_g2_ParamLimits

0xb335,	// (0x000556b6) bg_list_pane_g2

0xb348,	// (0x000556c9) bg_list_pane_g3_ParamLimits

0xb348,	// (0x000556c9) bg_list_pane_g3

0xb35a,	// (0x000556db) bg_list_pane_g4_ParamLimits

0xb35a,	// (0x000556db) bg_list_pane_g4

0xb36c,	// (0x000556ed) bg_list_pane_g5_ParamLimits

0xb36c,	// (0x000556ed) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00059d1f) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00059d1f) bg_list_pane_g

0x7789,	// (0x00051b0a) list_double2_graphic_large_graphic_pane_ParamLimits

0x7789,	// (0x00051b0a) list_double2_graphic_large_graphic_pane

0x7789,	// (0x00051b0a) list_double2_graphic_pane_ParamLimits

0x7789,	// (0x00051b0a) list_double2_graphic_pane

0x7789,	// (0x00051b0a) list_double2_large_graphic_pane_ParamLimits

0x7789,	// (0x00051b0a) list_double2_large_graphic_pane

0x7789,	// (0x00051b0a) list_double2_pane_ParamLimits

0x7789,	// (0x00051b0a) list_double2_pane

0x7789,	// (0x00051b0a) list_double_graphic_heading_pane_ParamLimits

0x7789,	// (0x00051b0a) list_double_graphic_heading_pane

0x7789,	// (0x00051b0a) list_double_graphic_pane_ParamLimits

0x7789,	// (0x00051b0a) list_double_graphic_pane

0x7789,	// (0x00051b0a) list_double_heading_pane_ParamLimits

0x7789,	// (0x00051b0a) list_double_heading_pane

0x7789,	// (0x00051b0a) list_double_large_graphic_pane_ParamLimits

0x7789,	// (0x00051b0a) list_double_large_graphic_pane

0x7789,	// (0x00051b0a) list_double_number_pane_ParamLimits

0x7789,	// (0x00051b0a) list_double_number_pane

0x7789,	// (0x00051b0a) list_double_pane_ParamLimits

0x7789,	// (0x00051b0a) list_double_pane

0x7789,	// (0x00051b0a) list_double_time_pane_ParamLimits

0x7789,	// (0x00051b0a) list_double_time_pane

0x7789,	// (0x00051b0a) list_setting_number_pane_ParamLimits

0x7789,	// (0x00051b0a) list_setting_number_pane

0x7789,	// (0x00051b0a) list_setting_pane_ParamLimits

0x7789,	// (0x00051b0a) list_setting_pane

0x77f7,	// (0x00051b78) list_single_2graphic_pane_ParamLimits

0x77f7,	// (0x00051b78) list_single_2graphic_pane

0x77f7,	// (0x00051b78) list_single_graphic_heading_pane_ParamLimits

0x77f7,	// (0x00051b78) list_single_graphic_heading_pane

0x77f7,	// (0x00051b78) list_single_graphic_pane_ParamLimits

0x77f7,	// (0x00051b78) list_single_graphic_pane

0x77f7,	// (0x00051b78) list_single_heading_pane_ParamLimits

0x77f7,	// (0x00051b78) list_single_heading_pane

0x7878,	// (0x00051bf9) list_single_large_graphic_pane_ParamLimits

0x7878,	// (0x00051bf9) list_single_large_graphic_pane

0x77f7,	// (0x00051b78) list_single_number_heading_pane_ParamLimits

0x77f7,	// (0x00051b78) list_single_number_heading_pane

0x77f7,	// (0x00051b78) list_single_number_pane_ParamLimits

0x77f7,	// (0x00051b78) list_single_number_pane

0x77f7,	// (0x00051b78) list_single_pane_ParamLimits

0x77f7,	// (0x00051b78) list_single_pane

0x7f82,	// (0x00052303) list_highlight_pane_cp1

0x75f0,	// (0x00051971) list_single_pane_g1_ParamLimits

0x75f0,	// (0x00051971) list_single_pane_g1

0x75fc,	// (0x0005197d) list_single_pane_g2_ParamLimits

0x75fc,	// (0x0005197d) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00059953) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00059953) list_single_pane_g

0x7773,	// (0x00051af4) list_single_pane_t1_ParamLimits

0x7773,	// (0x00051af4) list_single_pane_t1

0x75f0,	// (0x00051971) list_single_number_pane_g1_ParamLimits

0x75f0,	// (0x00051971) list_single_number_pane_g1

0x75fc,	// (0x0005197d) list_single_number_pane_g2_ParamLimits

0x75fc,	// (0x0005197d) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00059953) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00059953) list_single_number_pane_g

0x60cd,	// (0x0005044e) list_single_number_pane_t1_ParamLimits

0x60cd,	// (0x0005044e) list_single_number_pane_t1

0x7731,	// (0x00051ab2) list_single_number_pane_t2_ParamLimits

0x7731,	// (0x00051ab2) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x00059ce0) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x00059ce0) list_single_number_pane_t

0x4dc0,	// (0x0004f141) list_single_graphic_pane_g1_ParamLimits

0x4dc0,	// (0x0004f141) list_single_graphic_pane_g1

0x75f0,	// (0x00051971) list_single_graphic_pane_g2_ParamLimits

0x75f0,	// (0x00051971) list_single_graphic_pane_g2

0x75fc,	// (0x0005197d) list_single_graphic_pane_g3_ParamLimits

0x75fc,	// (0x0005197d) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00059942) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00059942) list_single_graphic_pane_g

0x4dcc,	// (0x0004f14d) list_single_graphic_pane_t1_ParamLimits

0x4dcc,	// (0x0004f14d) list_single_graphic_pane_t1

0x4de2,	// (0x0004f163) list_single_heading_pane_g1_ParamLimits

0x4de2,	// (0x0004f163) list_single_heading_pane_g1

0x75fc,	// (0x0005197d) list_single_heading_pane_g2_ParamLimits

0x75fc,	// (0x0005197d) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00059949) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00059949) list_single_heading_pane_g

0x4df5,	// (0x0004f176) list_single_heading_pane_t1_ParamLimits

0x4df5,	// (0x0004f176) list_single_heading_pane_t1

0x7608,	// (0x00051989) list_single_heading_pane_t2_ParamLimits

0x7608,	// (0x00051989) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005994e) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005994e) list_single_heading_pane_t

0x75f0,	// (0x00051971) list_single_number_heading_pane_g1_ParamLimits

0x75f0,	// (0x00051971) list_single_number_heading_pane_g1

0x75fc,	// (0x0005197d) list_single_number_heading_pane_g2_ParamLimits

0x75fc,	// (0x0005197d) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00059953) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00059953) list_single_number_heading_pane_g

0x4e0b,	// (0x0004f18c) list_single_number_heading_pane_t1_ParamLimits

0x4e0b,	// (0x0004f18c) list_single_number_heading_pane_t1

0x4e21,	// (0x0004f1a2) list_single_number_heading_pane_t2_ParamLimits

0x4e21,	// (0x0004f1a2) list_single_number_heading_pane_t2

0x4e33,	// (0x0004f1b4) list_single_number_heading_pane_t3_ParamLimits

0x4e33,	// (0x0004f1b4) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00059958) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00059958) list_single_number_heading_pane_t

0x4e45,	// (0x0004f1c6) list_single_graphic_heading_pane_g1_ParamLimits

0x4e45,	// (0x0004f1c6) list_single_graphic_heading_pane_g1

0x4e5b,	// (0x0004f1dc) list_single_graphic_heading_pane_g4_ParamLimits

0x4e5b,	// (0x0004f1dc) list_single_graphic_heading_pane_g4

0x75fc,	// (0x0005197d) list_single_graphic_heading_pane_g5_ParamLimits

0x75fc,	// (0x0005197d) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005995f) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005995f) list_single_graphic_heading_pane_g

0x4e0b,	// (0x0004f18c) list_single_graphic_heading_pane_t1_ParamLimits

0x4e0b,	// (0x0004f18c) list_single_graphic_heading_pane_t1

0x4e6c,	// (0x0004f1ed) list_single_graphic_heading_pane_t2_ParamLimits

0x4e6c,	// (0x0004f1ed) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00059966) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00059966) list_single_graphic_heading_pane_t

0x761a,	// (0x0005199b) list_single_large_graphic_pane_g1_ParamLimits

0x761a,	// (0x0005199b) list_single_large_graphic_pane_g1

0x7626,	// (0x000519a7) list_single_large_graphic_pane_g2_ParamLimits

0x7626,	// (0x000519a7) list_single_large_graphic_pane_g2

0x7632,	// (0x000519b3) list_single_large_graphic_pane_g3_ParamLimits

0x7632,	// (0x000519b3) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005996b) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005996b) list_single_large_graphic_pane_g

0xa387,	// (0x00054708) wait_border_pane_g2_copy1

0x763e,	// (0x000519bf) list_single_large_graphic_pane_g4_cp2

0x4e84,	// (0x0004f205) list_single_large_graphic_pane_t1_ParamLimits

0x4e84,	// (0x0004f205) list_single_large_graphic_pane_t1

0x4e9a,	// (0x0004f21b) list_double_pane_g1_ParamLimits

0x4e9a,	// (0x0004f21b) list_double_pane_g1

0x4ea6,	// (0x0004f227) list_double_pane_g2_ParamLimits

0x4ea6,	// (0x0004f227) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00059972) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00059972) list_double_pane_g

0x4eb2,	// (0x0004f233) list_double_pane_t1_ParamLimits

0x4eb2,	// (0x0004f233) list_double_pane_t1

0x4ec8,	// (0x0004f249) list_double_pane_t2_ParamLimits

0x4ec8,	// (0x0004f249) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00059977) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00059977) list_double_pane_t

0x4eda,	// (0x0004f25b) list_double2_pane_g1_ParamLimits

0x4eda,	// (0x0004f25b) list_double2_pane_g1

0x4eeb,	// (0x0004f26c) list_double2_pane_g2_ParamLimits

0x4eeb,	// (0x0004f26c) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005997c) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005997c) list_double2_pane_g

0x4ef7,	// (0x0004f278) list_double2_pane_t1_ParamLimits

0x4ef7,	// (0x0004f278) list_double2_pane_t1

0x4f0d,	// (0x0004f28e) list_double2_pane_t2_ParamLimits

0x4f0d,	// (0x0004f28e) list_double2_pane_t2

0x0001,

0xf600,	// (0x00059981) list_double2_pane_t_ParamLimits

0xf600,	// (0x00059981) list_double2_pane_t

0x4e9a,	// (0x0004f21b) list_double_number_pane_g1_ParamLimits

0x4e9a,	// (0x0004f21b) list_double_number_pane_g1

0x4ea6,	// (0x0004f227) list_double_number_pane_g2_ParamLimits

0x4ea6,	// (0x0004f227) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00059972) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00059972) list_double_number_pane_g

0x4f1f,	// (0x0004f2a0) list_double_number_pane_t1_ParamLimits

0x4f1f,	// (0x0004f2a0) list_double_number_pane_t1

0x4f31,	// (0x0004f2b2) list_double_number_pane_t2_ParamLimits

0x4f31,	// (0x0004f2b2) list_double_number_pane_t2

0x4f47,	// (0x0004f2c8) list_double_number_pane_t3_ParamLimits

0x4f47,	// (0x0004f2c8) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00059986) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00059986) list_double_number_pane_t

0x4f59,	// (0x0004f2da) list_double_graphic_pane_g1_ParamLimits

0x4f59,	// (0x0004f2da) list_double_graphic_pane_g1

0x4f65,	// (0x0004f2e6) list_double_graphic_pane_g2_ParamLimits

0x4f65,	// (0x0004f2e6) list_double_graphic_pane_g2

0x4f74,	// (0x0004f2f5) list_double_graphic_pane_g3_ParamLimits

0x4f74,	// (0x0004f2f5) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005998d) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005998d) list_double_graphic_pane_g

0x4f80,	// (0x0004f301) list_double_graphic_pane_t1_ParamLimits

0x4f80,	// (0x0004f301) list_double_graphic_pane_t1

0x4f96,	// (0x0004f317) list_double_graphic_pane_t2_ParamLimits

0x4f96,	// (0x0004f317) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00059996) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00059996) list_double_graphic_pane_t

0x4fa8,	// (0x0004f329) list_double2_graphic_pane_g1_ParamLimits

0x4fa8,	// (0x0004f329) list_double2_graphic_pane_g1

0x8863,	// (0x00052be4) list_double2_graphic_pane_g2_ParamLimits

0x8863,	// (0x00052be4) list_double2_graphic_pane_g2

0x7652,	// (0x000519d3) list_double2_graphic_pane_g3_ParamLimits

0x7652,	// (0x000519d3) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005999b) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005999b) list_double2_graphic_pane_g

0x4fb4,	// (0x0004f335) list_double2_graphic_pane_t1_ParamLimits

0x4fb4,	// (0x0004f335) list_double2_graphic_pane_t1

0x4fca,	// (0x0004f34b) list_double2_graphic_pane_t2_ParamLimits

0x4fca,	// (0x0004f34b) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x000599a2) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x000599a2) list_double2_graphic_pane_t

0x4fdc,	// (0x0004f35d) list_double_large_graphic_pane_g1_ParamLimits

0x4fdc,	// (0x0004f35d) list_double_large_graphic_pane_g1

0x4ffb,	// (0x0004f37c) list_double_large_graphic_pane_g2_ParamLimits

0x4ffb,	// (0x0004f37c) list_double_large_graphic_pane_g2

0x4ea6,	// (0x0004f227) list_double_large_graphic_pane_g3_ParamLimits

0x4ea6,	// (0x0004f227) list_double_large_graphic_pane_g3

0x5011,	// (0x0004f392) list_double_large_graphic_pane_g4_ParamLimits

0x5011,	// (0x0004f392) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x000599a7) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x000599a7) list_double_large_graphic_pane_g

0x5024,	// (0x0004f3a5) list_double_large_graphic_pane_t1_ParamLimits

0x5024,	// (0x0004f3a5) list_double_large_graphic_pane_t1

0x503d,	// (0x0004f3be) list_double_large_graphic_pane_t2_ParamLimits

0x503d,	// (0x0004f3be) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x000599b2) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x000599b2) list_double_large_graphic_pane_t

0x7673,	// (0x000519f4) list_double2_large_graphic_pane_g1_ParamLimits

0x7673,	// (0x000519f4) list_double2_large_graphic_pane_g1

0x767f,	// (0x00051a00) list_double2_large_graphic_pane_g2_ParamLimits

0x767f,	// (0x00051a00) list_double2_large_graphic_pane_g2

0x7652,	// (0x000519d3) list_double2_large_graphic_pane_g3_ParamLimits

0x7652,	// (0x000519d3) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x000599b7) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x000599b7) list_double2_large_graphic_pane_g

0x504f,	// (0x0004f3d0) list_double2_large_graphic_pane_t1_ParamLimits

0x504f,	// (0x0004f3d0) list_double2_large_graphic_pane_t1

0x5065,	// (0x0004f3e6) list_double2_large_graphic_pane_t2_ParamLimits

0x5065,	// (0x0004f3e6) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x000599be) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x000599be) list_double2_large_graphic_pane_t

0x5077,	// (0x0004f3f8) list_double_heading_pane_g1_ParamLimits

0x5077,	// (0x0004f3f8) list_double_heading_pane_g1

0x7690,	// (0x00051a11) list_double_heading_pane_g2_ParamLimits

0x7690,	// (0x00051a11) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x000599c3) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x000599c3) list_double_heading_pane_g

0x5088,	// (0x0004f409) list_double_heading_pane_t1_ParamLimits

0x5088,	// (0x0004f409) list_double_heading_pane_t1

0x4f0d,	// (0x0004f28e) list_double_heading_pane_t2_ParamLimits

0x4f0d,	// (0x0004f28e) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x000599c8) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x000599c8) list_double_heading_pane_t

0x509e,	// (0x0004f41f) list_double_graphic_heading_pane_g1_ParamLimits

0x509e,	// (0x0004f41f) list_double_graphic_heading_pane_g1

0x5077,	// (0x0004f3f8) list_double_graphic_heading_pane_g2_ParamLimits

0x5077,	// (0x0004f3f8) list_double_graphic_heading_pane_g2

0x7690,	// (0x00051a11) list_double_graphic_heading_pane_g3_ParamLimits

0x7690,	// (0x00051a11) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x000599cd) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x000599cd) list_double_graphic_heading_pane_g

0x50aa,	// (0x0004f42b) list_double_graphic_heading_pane_t1_ParamLimits

0x50aa,	// (0x0004f42b) list_double_graphic_heading_pane_t1

0x4fca,	// (0x0004f34b) list_double_graphic_heading_pane_t2_ParamLimits

0x4fca,	// (0x0004f34b) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x000599d4) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x000599d4) list_double_graphic_heading_pane_t

0x50c0,	// (0x0004f441) list_double_time_pane_g1_ParamLimits

0x50c0,	// (0x0004f441) list_double_time_pane_g1

0x50d1,	// (0x0004f452) list_double_time_pane_g2_ParamLimits

0x50d1,	// (0x0004f452) list_double_time_pane_g2

0x0001,

0xf658,	// (0x000599d9) list_double_time_pane_g_ParamLimits

0xf658,	// (0x000599d9) list_double_time_pane_g

0x50dd,	// (0x0004f45e) list_double_time_pane_t1_ParamLimits

0x50dd,	// (0x0004f45e) list_double_time_pane_t1

0x50f3,	// (0x0004f474) list_double_time_pane_t2_ParamLimits

0x50f3,	// (0x0004f474) list_double_time_pane_t2

0x5105,	// (0x0004f486) list_double_time_pane_t3_ParamLimits

0x5105,	// (0x0004f486) list_double_time_pane_t3

0x5117,	// (0x0004f498) list_double_time_pane_t4_ParamLimits

0x5117,	// (0x0004f498) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x000599de) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x000599de) list_double_time_pane_t

0x5129,	// (0x0004f4aa) list_setting_pane_g1_ParamLimits

0x5129,	// (0x0004f4aa) list_setting_pane_g1

0x4eeb,	// (0x0004f26c) list_setting_pane_g2_ParamLimits

0x4eeb,	// (0x0004f26c) list_setting_pane_g2

0x0001,

0xf666,	// (0x000599e7) list_setting_pane_g_ParamLimits

0xf666,	// (0x000599e7) list_setting_pane_g

0x5135,	// (0x0004f4b6) list_setting_pane_t1_ParamLimits

0x5135,	// (0x0004f4b6) list_setting_pane_t1

0x514f,	// (0x0004f4d0) list_setting_pane_t2_ParamLimits

0x514f,	// (0x0004f4d0) list_setting_pane_t2

0x0002,

0xf66b,	// (0x000599ec) list_setting_pane_t_ParamLimits

0xf66b,	// (0x000599ec) list_setting_pane_t

0x518c,	// (0x0004f50d) set_value_pane_cp_ParamLimits

0x518c,	// (0x0004f50d) set_value_pane_cp

0x5198,	// (0x0004f519) list_setting_number_pane_g1_ParamLimits

0x5198,	// (0x0004f519) list_setting_number_pane_g1

0x51a4,	// (0x0004f525) list_setting_number_pane_g2_ParamLimits

0x51a4,	// (0x0004f525) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x000599f3) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x000599f3) list_setting_number_pane_g

0x51b0,	// (0x0004f531) list_setting_number_pane_t1_ParamLimits

0x51b0,	// (0x0004f531) list_setting_number_pane_t1

0x51c9,	// (0x0004f54a) list_setting_number_pane_t2_ParamLimits

0x51c9,	// (0x0004f54a) list_setting_number_pane_t2

0x51e3,	// (0x0004f564) list_setting_number_pane_t3_ParamLimits

0x51e3,	// (0x0004f564) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x000599f8) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x000599f8) list_setting_number_pane_t

0x518c,	// (0x0004f50d) set_value_pane_ParamLimits

0x518c,	// (0x0004f50d) set_value_pane

0x886f,	// (0x00052bf0) bg_set_opt_pane_ParamLimits

0x886f,	// (0x00052bf0) bg_set_opt_pane

0x5226,	// (0x0004f5a7) set_value_pane_t1

0x8890,	// (0x00052c11) slider_set_pane_cp3

0x8899,	// (0x00052c1a) volume_small_pane_cp

0x88a2,	// (0x00052c23) list_form_gen_pane

0x88ab,	// (0x00052c2c) scroll_pane_cp8

0x523c,	// (0x0004f5bd) form_field_data_pane_ParamLimits

0x523c,	// (0x0004f5bd) form_field_data_pane

0x525e,	// (0x0004f5df) form_field_data_wide_pane_ParamLimits

0x525e,	// (0x0004f5df) form_field_data_wide_pane

0x527f,	// (0x0004f600) form_field_popup_pane_ParamLimits

0x527f,	// (0x0004f600) form_field_popup_pane

0x529f,	// (0x0004f620) form_field_popup_wide_pane_ParamLimits

0x529f,	// (0x0004f620) form_field_popup_wide_pane

0x52bc,	// (0x0004f63d) form_field_slider_pane_ParamLimits

0x52bc,	// (0x0004f63d) form_field_slider_pane

0x52cf,	// (0x0004f650) form_field_slider_wide_pane_ParamLimits

0x52cf,	// (0x0004f650) form_field_slider_wide_pane

0x88bc,	// (0x00052c3d) data_form_pane

0x52ec,	// (0x0004f66d) form_field_data_pane_t1

0x88c8,	// (0x00052c49) input_focus_pane

0x5306,	// (0x0004f687) data_form_wide_pane

0x5323,	// (0x0004f6a4) form_field_data_wide_pane_t1

0x862d,	// (0x000529ae) input_focus_pane_cp6

0x5345,	// (0x0004f6c6) form_field_popup_pane_t1

0x88c8,	// (0x00052c49) input_focus_pane_cp7

0x88ea,	// (0x00052c6b) list_form_pane

0x5367,	// (0x0004f6e8) form_field_popup_wide_pane_t1

0x88c8,	// (0x00052c49) input_focus_pane_cp8

0x88f6,	// (0x00052c77) list_form_wide_pane

0x5384,	// (0x0004f705) form_field_slider_pane_t1_ParamLimits

0x5384,	// (0x0004f705) form_field_slider_pane_t1

0x539c,	// (0x0004f71d) form_field_slider_pane_t2_ParamLimits

0x539c,	// (0x0004f71d) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00059a08) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00059a08) form_field_slider_pane_t

0x82dd,	// (0x0005265e) input_focus_pane_cp9_ParamLimits

0x82dd,	// (0x0005265e) input_focus_pane_cp9

0x53b1,	// (0x0004f732) slider_cont_pane_ParamLimits

0x53b1,	// (0x0004f732) slider_cont_pane

0x8905,	// (0x00052c86) form_field_slider_wide_pane_t1_ParamLimits

0x8905,	// (0x00052c86) form_field_slider_wide_pane_t1

0x53c5,	// (0x0004f746) form_field_slider_wide_pane_t2_ParamLimits

0x53c5,	// (0x0004f746) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00059a0d) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00059a0d) form_field_slider_wide_pane_t

0x82dd,	// (0x0005265e) input_focus_pane_cp10_ParamLimits

0x82dd,	// (0x0005265e) input_focus_pane_cp10

0x53d7,	// (0x0004f758) slider_cont_pane_cp1_ParamLimits

0x53d7,	// (0x0004f758) slider_cont_pane_cp1

0x53eb,	// (0x0004f76c) slider_form_pane_cp

0x8917,	// (0x00052c98) input_focus_pane_g1

0x891f,	// (0x00052ca0) input_focus_pane_g2

0x8927,	// (0x00052ca8) input_focus_pane_g3

0x892f,	// (0x00052cb0) input_focus_pane_g4

0x8937,	// (0x00052cb8) input_focus_pane_g5

0x893f,	// (0x00052cc0) input_focus_pane_g6

0x8947,	// (0x00052cc8) input_focus_pane_g7

0x894f,	// (0x00052cd0) input_focus_pane_g8

0x8957,	// (0x00052cd8) input_focus_pane_g9

0x7f78,	// (0x000522f9) input_focus_pane_g10

0x0009,

0xf691,	// (0x00059a12) input_focus_pane_g

0xa390,	// (0x00054711) wait_border_pane_g3_copy1

0x53f3,	// (0x0004f774) data_form_pane_t1

0x7f78,	// (0x000522f9) wait_anim_pane_g1_copy1

0x7743,	// (0x00051ac4) data_form_wide_pane_t1

0x540e,	// (0x0004f78f) list_form_graphic_pane_cp_ParamLimits

0x540e,	// (0x0004f78f) list_form_graphic_pane_cp

0xb2ab,	// (0x0005562c) slider_form_pane_g1

0xb2b4,	// (0x00055635) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00059d10) slider_form_pane_g

0x540e,	// (0x0004f78f) list_form_graphic_pane_ParamLimits

0x540e,	// (0x0004f78f) list_form_graphic_pane

0x5425,	// (0x0004f7a6) list_form_graphic_pane_g1

0x542d,	// (0x0004f7ae) list_form_graphic_pane_t1_ParamLimits

0x542d,	// (0x0004f7ae) list_form_graphic_pane_t1

0x8062,	// (0x000523e3) list_highlight_pane_cp5_ParamLimits

0x8062,	// (0x000523e3) list_highlight_pane_cp5

0x5442,	// (0x0004f7c3) find_pane_g1

0x895f,	// (0x00052ce0) input_find_pane

0x544b,	// (0x0004f7cc) input_find_pane_g1_ParamLimits

0x544b,	// (0x0004f7cc) input_find_pane_g1

0x5457,	// (0x0004f7d8) input_find_pane_t1_ParamLimits

0x5457,	// (0x0004f7d8) input_find_pane_t1

0x546c,	// (0x0004f7ed) input_find_pane_t2_ParamLimits

0x546c,	// (0x0004f7ed) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00059a27) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00059a27) input_find_pane_t

0x8968,	// (0x00052ce9) input_focus_pane_cp5_ParamLimits

0x8968,	// (0x00052ce9) input_focus_pane_cp5

0x8982,	// (0x00052d03) bg_popup_window_pane_cp2_ParamLimits

0x8982,	// (0x00052d03) bg_popup_window_pane_cp2

0x898f,	// (0x00052d10) listscroll_menu_pane_ParamLimits

0x898f,	// (0x00052d10) listscroll_menu_pane

0x899b,	// (0x00052d1c) popup_submenu_window_ParamLimits

0x899b,	// (0x00052d1c) popup_submenu_window

0x89c3,	// (0x00052d44) find_popup_pane_g1

0x89cb,	// (0x00052d4c) input_popup_find_pane_cp

0x8968,	// (0x00052ce9) input_focus_pane_cp4_ParamLimits

0x8968,	// (0x00052ce9) input_focus_pane_cp4

0x89e3,	// (0x00052d64) input_popup_find_pane_t1_ParamLimits

0x89e3,	// (0x00052d64) input_popup_find_pane_t1

0x7f82,	// (0x00052303) bg_popup_sub_pane_cp

0x8a11,	// (0x00052d92) listscroll_popup_sub_pane

0x8a19,	// (0x00052d9a) list_submenu_pane_ParamLimits

0x8a19,	// (0x00052d9a) list_submenu_pane

0x8a2a,	// (0x00052dab) scroll_pane_cp4

0x8a32,	// (0x00052db3) list_single_popup_submenu_pane_ParamLimits

0x8a32,	// (0x00052db3) list_single_popup_submenu_pane

0x8a46,	// (0x00052dc7) list_single_popup_submenu_pane_g1

0x8a4e,	// (0x00052dcf) list_single_popup_submenu_pane_t1_ParamLimits

0x8a4e,	// (0x00052dcf) list_single_popup_submenu_pane_t1

0x8062,	// (0x000523e3) bg_active_tab_pane_cp1_ParamLimits

0x8062,	// (0x000523e3) bg_active_tab_pane_cp1

0x8a63,	// (0x00052de4) tabs_2_active_pane_g1

0x8a6b,	// (0x00052dec) tabs_2_active_pane_t1

0x8062,	// (0x000523e3) bg_passive_tab_pane_cp1_ParamLimits

0x8062,	// (0x000523e3) bg_passive_tab_pane_cp1

0x8a63,	// (0x00052de4) tabs_2_passive_pane_g1

0x8a6b,	// (0x00052dec) tabs_2_passive_pane_t1

0x8a7d,	// (0x00052dfe) bg_active_tab_pane_cp4

0x8a8b,	// (0x00052e0c) tabs_2_long_active_pane_t1

0x8a9e,	// (0x00052e1f) bg_passive_tab_pane_cp4

0x6110,	// (0x00050491) list_single_midp_graphic_pane_g4_ParamLimits

0x8a7d,	// (0x00052dfe) bg_active_tab_pane_cp5

0x8aaa,	// (0x00052e2b) tabs_3_long_active_pane_t1

0x8a9e,	// (0x00052e1f) bg_passive_tab_pane_cp5

0x6110,	// (0x00050491) list_single_midp_graphic_pane_g4

0x8062,	// (0x000523e3) bg_popup_window_pane_cp13_ParamLimits

0x8062,	// (0x000523e3) bg_popup_window_pane_cp13

0x8ac5,	// (0x00052e46) listscroll_popup_fast_pane_ParamLimits

0x8ac5,	// (0x00052e46) listscroll_popup_fast_pane

0x8ad1,	// (0x00052e52) grid_popup_fast_pane_ParamLimits

0x8ad1,	// (0x00052e52) grid_popup_fast_pane

0x8ae3,	// (0x00052e64) scroll_pane_cp9_ParamLimits

0x8ae3,	// (0x00052e64) scroll_pane_cp9

0xcb52,	// (0x00056ed3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb52,	// (0x00056ed3) list_single_graphic_hl_pane_t1_cp2

0x8b07,	// (0x00052e88) input_focus_pane_cp20_ParamLimits

0x8b07,	// (0x00052e88) input_focus_pane_cp20

0x8b15,	// (0x00052e96) query_popup_data_pane_t1_ParamLimits

0x8b15,	// (0x00052e96) query_popup_data_pane_t1

0x8b28,	// (0x00052ea9) query_popup_data_pane_t2_ParamLimits

0x8b28,	// (0x00052ea9) query_popup_data_pane_t2

0x8b6e,	// (0x00052eef) query_popup_data_pane_t3_ParamLimits

0x8b6e,	// (0x00052eef) query_popup_data_pane_t3

0x8baf,	// (0x00052f30) query_popup_data_pane_t4_ParamLimits

0x8baf,	// (0x00052f30) query_popup_data_pane_t4

0x8beb,	// (0x00052f6c) query_popup_data_pane_t5_ParamLimits

0x8beb,	// (0x00052f6c) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00059a2c) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00059a2c) query_popup_data_pane_t

0x8917,	// (0x00052c98) bg_set_opt_pane_g1

0x891f,	// (0x00052ca0) bg_set_opt_pane_g2

0x8927,	// (0x00052ca8) bg_set_opt_pane_g3

0x892f,	// (0x00052cb0) bg_set_opt_pane_g4

0x8937,	// (0x00052cb8) bg_set_opt_pane_g5

0x893f,	// (0x00052cc0) bg_set_opt_pane_g6

0x8947,	// (0x00052cc8) bg_set_opt_pane_g7

0x894f,	// (0x00052cd0) bg_set_opt_pane_g8

0x8957,	// (0x00052cd8) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00059a37) bg_set_opt_pane_g

0x578a,	// (0x0004fb0b) control_top_pane_stacon_ParamLimits

0x578a,	// (0x0004fb0b) control_top_pane_stacon

0x57dd,	// (0x0004fb5e) signal_pane_stacon_ParamLimits

0x57dd,	// (0x0004fb5e) signal_pane_stacon

0x91c1,	// (0x00053542) stacon_top_pane_g1_ParamLimits

0x91c1,	// (0x00053542) stacon_top_pane_g1

0x5802,	// (0x0004fb83) title_pane_stacon_ParamLimits

0x5802,	// (0x0004fb83) title_pane_stacon

0x582c,	// (0x0004fbad) uni_indicator_pane_stacon_ParamLimits

0x582c,	// (0x0004fbad) uni_indicator_pane_stacon

0x5841,	// (0x0004fbc2) battery_pane_stacon_ParamLimits

0x5841,	// (0x0004fbc2) battery_pane_stacon

0x5885,	// (0x0004fc06) control_bottom_pane_stacon_ParamLimits

0x5885,	// (0x0004fc06) control_bottom_pane_stacon

0x58a8,	// (0x0004fc29) navi_pane_stacon_ParamLimits

0x58a8,	// (0x0004fc29) navi_pane_stacon

0x91e3,	// (0x00053564) stacon_bottom_pane_g1_ParamLimits

0x91e3,	// (0x00053564) stacon_bottom_pane_g1

0x5481,	// (0x0004f802) aid_levels_signal_lsc_ParamLimits

0x5481,	// (0x0004f802) aid_levels_signal_lsc

0x5498,	// (0x0004f819) signal_pane_stacon_g1_ParamLimits

0x5498,	// (0x0004f819) signal_pane_stacon_g1

0x54ac,	// (0x0004f82d) signal_pane_stacon_g2_ParamLimits

0x54ac,	// (0x0004f82d) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00059a4a) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00059a4a) signal_pane_stacon_g

0x54e1,	// (0x0004f862) title_pane_stacon_t1_ParamLimits

0x54e1,	// (0x0004f862) title_pane_stacon_t1

0x8c2f,	// (0x00052fb0) uni_indicator_pane_stacon_g1

0x8c39,	// (0x00052fba) uni_indicator_pane_stacon_g2

0x8c43,	// (0x00052fc4) uni_indicator_pane_stacon_g3

0x8c4d,	// (0x00052fce) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00059a56) uni_indicator_pane_stacon_g

0x5506,	// (0x0004f887) control_top_pane_stacon_g1

0x550e,	// (0x0004f88f) control_top_pane_stacon_t1_ParamLimits

0x550e,	// (0x0004f88f) control_top_pane_stacon_t1

0x5545,	// (0x0004f8c6) aid_levels_battery_lsc_ParamLimits

0x5545,	// (0x0004f8c6) aid_levels_battery_lsc

0x555d,	// (0x0004f8de) battery_pane_stacon_g1_ParamLimits

0x555d,	// (0x0004f8de) battery_pane_stacon_g1

0x5570,	// (0x0004f8f1) battery_pane_stacon_g2_ParamLimits

0x5570,	// (0x0004f8f1) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00059a5f) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00059a5f) battery_pane_stacon_g

0x55ae,	// (0x0004f92f) navi_icon_pane_stacon

0x55c2,	// (0x0004f943) navi_navi_pane_stacon

0x55ae,	// (0x0004f92f) navi_text_pane_stacon

0x5506,	// (0x0004f887) control_bottom_pane_stacon_g1

0x55d6,	// (0x0004f957) control_bottom_pane_stacon_t1_ParamLimits

0x55d6,	// (0x0004f957) control_bottom_pane_stacon_t1

0x8c71,	// (0x00052ff2) grid_app_pane_ParamLimits

0x8c71,	// (0x00052ff2) grid_app_pane

0x8c93,	// (0x00053014) scroll_pane_cp15_ParamLimits

0x8c93,	// (0x00053014) scroll_pane_cp15

0x8ca6,	// (0x00053027) cell_app_pane_ParamLimits

0x8ca6,	// (0x00053027) cell_app_pane

0x8ccc,	// (0x0005304d) cell_app_pane_g1_ParamLimits

0x8ccc,	// (0x0005304d) cell_app_pane_g1

0x8cec,	// (0x0005306d) cell_app_pane_g2_ParamLimits

0x8cec,	// (0x0005306d) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00059a64) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00059a64) cell_app_pane_g

0x8cf8,	// (0x00053079) cell_app_pane_t1_ParamLimits

0x8cf8,	// (0x00053079) cell_app_pane_t1

0x8d0f,	// (0x00053090) grid_highlight_pane_ParamLimits

0x8d0f,	// (0x00053090) grid_highlight_pane

0x8917,	// (0x00052c98) cell_highlight_pane_g1

0x891f,	// (0x00052ca0) cell_highlight_pane_g2

0x8927,	// (0x00052ca8) cell_highlight_pane_g3

0x892f,	// (0x00052cb0) cell_highlight_pane_g4

0x8937,	// (0x00052cb8) cell_highlight_pane_g5

0x893f,	// (0x00052cc0) cell_highlight_pane_g6

0x8947,	// (0x00052cc8) cell_highlight_pane_g7

0x894f,	// (0x00052cd0) cell_highlight_pane_g8

0x8957,	// (0x00052cd8) cell_highlight_pane_g9

0x7f78,	// (0x000522f9) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00059a12) cell_highlight_pane_g

0x8d20,	// (0x000530a1) bg_scroll_pane

0x5620,	// (0x0004f9a1) scroll_handle_pane

0x8d67,	// (0x000530e8) scroll_bg_pane_g1

0x8d7c,	// (0x000530fd) scroll_bg_pane_g2

0x8d94,	// (0x00053115) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00059a69) scroll_bg_pane_g

0x8da9,	// (0x0005312a) scroll_handle_focus_pane_ParamLimits

0x8da9,	// (0x0005312a) scroll_handle_focus_pane

0x8d67,	// (0x000530e8) scroll_handle_pane_g1

0x8db6,	// (0x00053137) scroll_handle_pane_g2

0x8d94,	// (0x00053115) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00059a70) scroll_handle_pane_g

0x8968,	// (0x00052ce9) bg_popup_sub_pane_cp21_ParamLimits

0x8968,	// (0x00052ce9) bg_popup_sub_pane_cp21

0x8dca,	// (0x0005314b) popup_fep_japan_predictive_window_t1_ParamLimits

0x8dca,	// (0x0005314b) popup_fep_japan_predictive_window_t1

0x8de4,	// (0x00053165) popup_fep_japan_predictive_window_t2_ParamLimits

0x8de4,	// (0x00053165) popup_fep_japan_predictive_window_t2

0x8e17,	// (0x00053198) popup_fep_japan_predictive_window_t3_ParamLimits

0x8e17,	// (0x00053198) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00059a77) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00059a77) popup_fep_japan_predictive_window_t

0x7f82,	// (0x00052303) bg_popup_sub_pane_cp23

0x8e4e,	// (0x000531cf) listscroll_japin_cand_pane

0x8e56,	// (0x000531d7) popup_fep_japan_candidate_window_t1

0x8e64,	// (0x000531e5) candidate_pane_ParamLimits

0x8e64,	// (0x000531e5) candidate_pane

0x8e76,	// (0x000531f7) scroll_pane_cp30

0x8e7e,	// (0x000531ff) list_single_popup_jap_candidate_pane_ParamLimits

0x8e7e,	// (0x000531ff) list_single_popup_jap_candidate_pane

0x7f82,	// (0x00052303) list_highlight_pane_cp30

0x8e92,	// (0x00053213) list_single_popup_jap_candidate_pane_t1

0x8ea1,	// (0x00053222) level_1_signal

0x8eae,	// (0x0005322f) level_2_signal

0x8ebb,	// (0x0005323c) level_3_signal

0x8ec8,	// (0x00053249) level_4_signal

0x8ed5,	// (0x00053256) level_5_signal

0x8ee2,	// (0x00053263) level_6_signal

0x8eef,	// (0x00053270) level_7_signal

0x8ea1,	// (0x00053222) level_1_battery

0x8eae,	// (0x0005322f) level_2_battery

0x8ebb,	// (0x0005323c) level_3_battery

0x8ec8,	// (0x00053249) level_4_battery

0x8ed5,	// (0x00053256) level_5_battery

0x8ee2,	// (0x00053263) level_6_battery

0x8eef,	// (0x00053270) level_7_battery

0x8f14,	// (0x00053295) list_menu_pane_ParamLimits

0x8f14,	// (0x00053295) list_menu_pane

0x8f2a,	// (0x000532ab) scroll_pane_cp25_ParamLimits

0x8f2a,	// (0x000532ab) scroll_pane_cp25

0x8f43,	// (0x000532c4) list_double2_graphic_pane_cp2_ParamLimits

0x8f43,	// (0x000532c4) list_double2_graphic_pane_cp2

0x8f43,	// (0x000532c4) list_double2_large_graphic_pane_cp2_ParamLimits

0x8f43,	// (0x000532c4) list_double2_large_graphic_pane_cp2

0x8f43,	// (0x000532c4) list_double2_pane_cp2_ParamLimits

0x8f43,	// (0x000532c4) list_double2_pane_cp2

0x8f43,	// (0x000532c4) list_double_graphic_pane_cp2_ParamLimits

0x8f43,	// (0x000532c4) list_double_graphic_pane_cp2

0x8f43,	// (0x000532c4) list_double_large_graphic_pane_cp2_ParamLimits

0x8f43,	// (0x000532c4) list_double_large_graphic_pane_cp2

0x8f43,	// (0x000532c4) list_double_number_pane_cp2_ParamLimits

0x8f43,	// (0x000532c4) list_double_number_pane_cp2

0x8f43,	// (0x000532c4) list_double_pane_cp2_ParamLimits

0x8f43,	// (0x000532c4) list_double_pane_cp2

0x8f67,	// (0x000532e8) list_single_2graphic_pane_cp2_ParamLimits

0x8f67,	// (0x000532e8) list_single_2graphic_pane_cp2

0x8f67,	// (0x000532e8) list_single_graphic_heading_pane_cp2_ParamLimits

0x8f67,	// (0x000532e8) list_single_graphic_heading_pane_cp2

0x8f67,	// (0x000532e8) list_single_graphic_pane_cp2_ParamLimits

0x8f67,	// (0x000532e8) list_single_graphic_pane_cp2

0x8f67,	// (0x000532e8) list_single_heading_pane_cp2_ParamLimits

0x8f67,	// (0x000532e8) list_single_heading_pane_cp2

0x8f7d,	// (0x000532fe) list_single_large_graphic_pane_cp2_ParamLimits

0x8f7d,	// (0x000532fe) list_single_large_graphic_pane_cp2

0x8f67,	// (0x000532e8) list_single_number_heading_pane_cp2_ParamLimits

0x8f67,	// (0x000532e8) list_single_number_heading_pane_cp2

0x8f67,	// (0x000532e8) list_single_number_pane_cp2_ParamLimits

0x8f67,	// (0x000532e8) list_single_number_pane_cp2

0x8f67,	// (0x000532e8) list_single_pane_cp2_ParamLimits

0x8f67,	// (0x000532e8) list_single_pane_cp2

0x8ff8,	// (0x00053379) bg_popup_sub_pane_cp22

0x56cf,	// (0x0004fa50) popup_side_volume_key_window_g1

0x56f3,	// (0x0004fa74) popup_side_volume_key_window_t1

0x570f,	// (0x0004fa90) volume_small_pane_cp1

0x82dd,	// (0x0005265e) bg_popup_sub_pane_cp24_ParamLimits

0x82dd,	// (0x0005265e) bg_popup_sub_pane_cp24

0x900e,	// (0x0005338f) fep_china_uni_candidate_pane_ParamLimits

0x900e,	// (0x0005338f) fep_china_uni_candidate_pane

0x9022,	// (0x000533a3) fep_china_uni_entry_pane

0x9032,	// (0x000533b3) popup_fep_china_uni_window_g1

0x904e,	// (0x000533cf) fep_china_uni_entry_pane_g1

0x9056,	// (0x000533d7) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00059aa8) fep_china_uni_entry_pane_g

0x905e,	// (0x000533df) fep_entry_item_pane

0x9068,	// (0x000533e9) fep_candidate_item_pane

0x9070,	// (0x000533f1) fep_china_uni_candidate_pane_g1

0x9078,	// (0x000533f9) fep_china_uni_candidate_pane_g2

0x9080,	// (0x00053401) fep_china_uni_candidate_pane_g3

0x9088,	// (0x00053409) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00059aad) fep_china_uni_candidate_pane_g

0x7f78,	// (0x000522f9) fep_entry_item_pane_g1

0x9090,	// (0x00053411) fep_entry_item_pane_t1_ParamLimits

0x9090,	// (0x00053411) fep_entry_item_pane_t1

0x90a6,	// (0x00053427) fep_candidate_item_pane_t1_ParamLimits

0x90a6,	// (0x00053427) fep_candidate_item_pane_t1

0x90bb,	// (0x0005343c) fep_candidate_item_pane_t2_ParamLimits

0x90bb,	// (0x0005343c) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00059ab6) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00059ab6) fep_candidate_item_pane_t

0x8062,	// (0x000523e3) list_highlight_pane_cp31_ParamLimits

0x8062,	// (0x000523e3) list_highlight_pane_cp31

0x90cd,	// (0x0005344e) level_1_signal_lsc

0x90d6,	// (0x00053457) level_2_signal_lsc

0x90df,	// (0x00053460) level_3_signal_lsc

0x90e8,	// (0x00053469) level_4_signal_lsc

0x90f1,	// (0x00053472) level_5_signal_lsc

0x90fa,	// (0x0005347b) level_6_signal_lsc

0x9103,	// (0x00053484) level_7_signal_lsc

0x9103,	// (0x00053484) level_1_battery_lsc

0x910c,	// (0x0005348d) level_2_battery_lsc

0x9115,	// (0x00053496) level_3_battery_lsc

0x911e,	// (0x0005349f) level_4_battery_lsc

0x913f,	// (0x000534c0) level_5_battery_lsc

0x9148,	// (0x000534c9) level_6_battery_lsc

0x90cd,	// (0x0005344e) level_7_battery_lsc

0x9151,	// (0x000534d2) scroll_handle_focus_pane_g1

0x915a,	// (0x000534db) scroll_handle_focus_pane_g2

0x9163,	// (0x000534e4) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00059abb) scroll_handle_focus_pane_g

0x5717,	// (0x0004fa98) list_single_2graphic_pane_g1_ParamLimits

0x5717,	// (0x0004fa98) list_single_2graphic_pane_g1

0x4e5b,	// (0x0004f1dc) list_single_2graphic_pane_g2_ParamLimits

0x4e5b,	// (0x0004f1dc) list_single_2graphic_pane_g2

0x75fc,	// (0x0005197d) list_single_2graphic_pane_g3_ParamLimits

0x75fc,	// (0x0005197d) list_single_2graphic_pane_g3

0x5723,	// (0x0004faa4) list_single_2graphic_pane_g4_ParamLimits

0x5723,	// (0x0004faa4) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00059ac2) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00059ac2) list_single_2graphic_pane_g

0x5734,	// (0x0004fab5) list_single_2graphic_pane_t1_ParamLimits

0x5734,	// (0x0004fab5) list_single_2graphic_pane_t1

0x769c,	// (0x00051a1d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x769c,	// (0x00051a1d) list_double2_graphic_large_graphic_pane_g1

0x767f,	// (0x00051a00) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x767f,	// (0x00051a00) list_double2_graphic_large_graphic_pane_g2

0x7652,	// (0x000519d3) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7652,	// (0x000519d3) list_double2_graphic_large_graphic_pane_g3

0x76ac,	// (0x00051a2d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x76ac,	// (0x00051a2d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00059acb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00059acb) list_double2_graphic_large_graphic_pane_g

0x5762,	// (0x0004fae3) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5762,	// (0x0004fae3) list_double2_graphic_large_graphic_pane_t1

0x5778,	// (0x0004faf9) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5778,	// (0x0004faf9) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00059ad4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00059ad4) list_double2_graphic_large_graphic_pane_t

0x92aa,	// (0x0005362b) popup_fast_swap_window_ParamLimits

0x92aa,	// (0x0005362b) popup_fast_swap_window

0x92c6,	// (0x00053647) popup_side_volume_key_window

0x92e0,	// (0x00053661) stacon_top_pane

0x92ea,	// (0x0005366b) status_pane_ParamLimits

0x92ea,	// (0x0005366b) status_pane

0x92f8,	// (0x00053679) status_small_pane

0x7f82,	// (0x00052303) control_pane

0x7f82,	// (0x00052303) stacon_bottom_pane

0x88ab,	// (0x00052c2c) scroll_pane_cp121

0x88a2,	// (0x00052c23) set_content_pane

0x916c,	// (0x000534ed) bg_active_tab_pane_g1_cp1

0x9175,	// (0x000534f6) bg_active_tab_pane_g2_cp1

0x917e,	// (0x000534ff) bg_active_tab_pane_g3_cp1

0x916c,	// (0x000534ed) bg_passive_tab_pane_g1_cp1

0x9175,	// (0x000534f6) bg_passive_tab_pane_g2_cp1

0x917e,	// (0x000534ff) bg_passive_tab_pane_g3_cp1

0x9187,	// (0x00053508) bg_active_tab_pane_g1_cp2

0x9175,	// (0x000534f6) bg_active_tab_pane_g2_cp2

0x9190,	// (0x00053511) bg_active_tab_pane_g3_cp2

0x9187,	// (0x00053508) bg_passive_tab_pane_g1_cp2

0x9175,	// (0x000534f6) bg_passive_tab_pane_g2_cp2

0x9190,	// (0x00053511) bg_passive_tab_pane_g3_cp2

0x9199,	// (0x0005351a) bg_active_tab_pane_g1_cp3

0x9175,	// (0x000534f6) bg_active_tab_pane_g2_cp3

0x91a2,	// (0x00053523) bg_active_tab_pane_g3_cp3

0x9199,	// (0x0005351a) bg_passive_tab_pane_g1_cp3

0x9175,	// (0x000534f6) bg_passive_tab_pane_g2_cp3

0x91a2,	// (0x00053523) bg_passive_tab_pane_g3_cp3

0x91ab,	// (0x0005352c) bg_active_tab_pane_g1_cp4

0x9175,	// (0x000534f6) bg_active_tab_pane_g2_cp4

0x91b6,	// (0x00053537) bg_active_tab_pane_g3_cp4

0x91ab,	// (0x0005352c) bg_passive_tab_pane_g1_cp4

0x9175,	// (0x000534f6) bg_passive_tab_pane_g2_cp4

0x91b6,	// (0x00053537) bg_passive_tab_pane_g3_cp4

0x91ff,	// (0x00053580) bg_active_tab_pane_g1_cp5

0x9175,	// (0x000534f6) bg_active_tab_pane_g2_cp5

0x9208,	// (0x00053589) bg_active_tab_pane_g3_cp5

0x91ff,	// (0x00053580) bg_passive_tab_pane_g1_cp5

0x9175,	// (0x000534f6) bg_passive_tab_pane_g2_cp5

0x9208,	// (0x00053589) bg_passive_tab_pane_g3_cp5

0x9211,	// (0x00053592) list_set_graphic_pane_ParamLimits

0x9211,	// (0x00053592) list_set_graphic_pane

0x7f82,	// (0x00052303) bg_set_opt_pane_cp4

0x922f,	// (0x000535b0) list_set_graphic_pane_g1_ParamLimits

0x922f,	// (0x000535b0) list_set_graphic_pane_g1

0x923b,	// (0x000535bc) list_set_graphic_pane_g2_ParamLimits

0x923b,	// (0x000535bc) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00059ad9) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00059ad9) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x00059e5e) volume_small_pane_cp_g

0x925d,	// (0x000535de) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x925d,	// (0x000535de) list_double2_large_graphic_pane_g1_cp2

0x9269,	// (0x000535ea) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9269,	// (0x000535ea) list_double2_large_graphic_pane_g2_cp2

0x927a,	// (0x000535fb) list_double2_large_graphic_pane_g3_cp2

0x9282,	// (0x00053603) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9282,	// (0x00053603) list_double2_large_graphic_pane_t1_cp2

0x9298,	// (0x00053619) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9298,	// (0x00053619) list_double2_large_graphic_pane_t2_cp2

0xae69,	// (0x000551ea) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xae69,	// (0x000551ea) list_double_large_graphic_pane_g1_cp2

0xae7a,	// (0x000551fb) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xae7a,	// (0x000551fb) list_double_large_graphic_pane_g2_cp2

0x9411,	// (0x00053792) list_double_large_graphic_pane_g3_cp2

0xae8b,	// (0x0005520c) list_double_large_graphic_pane_g4_cp

0xae93,	// (0x00055214) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae93,	// (0x00055214) list_double_large_graphic_pane_t1_cp2

0xaeaa,	// (0x0005522b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaeaa,	// (0x0005522b) list_double_large_graphic_pane_t2_cp2

0x9303,	// (0x00053684) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9303,	// (0x00053684) list_double2_graphic_pane_g1_cp2

0x9311,	// (0x00053692) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9311,	// (0x00053692) list_double2_graphic_pane_g2_cp2

0x9322,	// (0x000536a3) list_double2_graphic_pane_g3_cp2

0x932c,	// (0x000536ad) list_double2_graphic_pane_t1_cp2_ParamLimits

0x932c,	// (0x000536ad) list_double2_graphic_pane_t1_cp2

0x9342,	// (0x000536c3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9342,	// (0x000536c3) list_double2_graphic_pane_t2_cp2

0x9354,	// (0x000536d5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9354,	// (0x000536d5) list_single_number_heading_pane_g1_cp2

0x9360,	// (0x000536e1) list_single_number_heading_pane_g2_cp2

0x9368,	// (0x000536e9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9368,	// (0x000536e9) list_single_number_heading_pane_t1_cp2

0x937e,	// (0x000536ff) list_single_number_heading_pane_t2_cp2_ParamLimits

0x937e,	// (0x000536ff) list_single_number_heading_pane_t2_cp2

0x9390,	// (0x00053711) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9390,	// (0x00053711) list_single_number_heading_pane_t3_cp2

0x9354,	// (0x000536d5) list_single_heading_pane_g1_cp2_ParamLimits

0x9354,	// (0x000536d5) list_single_heading_pane_g1_cp2

0x9360,	// (0x000536e1) list_single_heading_pane_g2_cp2

0x9368,	// (0x000536e9) list_single_heading_pane_t1_cp2_ParamLimits

0x9368,	// (0x000536e9) list_single_heading_pane_t1_cp2

0xac73,	// (0x00054ff4) list_single_heading_pane_t2_cp2_ParamLimits

0xac73,	// (0x00054ff4) list_single_heading_pane_t2_cp2

0xabbb,	// (0x00054f3c) list_double_graphic_pane_g1_cp2_ParamLimits

0xabbb,	// (0x00054f3c) list_double_graphic_pane_g1_cp2

0xabc7,	// (0x00054f48) list_double_graphic_pane_g2_cp2_ParamLimits

0xabc7,	// (0x00054f48) list_double_graphic_pane_g2_cp2

0xabd6,	// (0x00054f57) list_double_graphic_pane_g3_cp2

0xabde,	// (0x00054f5f) list_double_graphic_pane_t1_cp2_ParamLimits

0xabde,	// (0x00054f5f) list_double_graphic_pane_t1_cp2

0xabf4,	// (0x00054f75) list_double_graphic_pane_t2_cp2_ParamLimits

0xabf4,	// (0x00054f75) list_double_graphic_pane_t2_cp2

0x9405,	// (0x00053786) list_double_number_pane_g1_cp2_ParamLimits

0x9405,	// (0x00053786) list_double_number_pane_g1_cp2

0x9411,	// (0x00053792) list_double_number_pane_g2_cp2

0xab7f,	// (0x00054f00) list_double_number_pane_t1_cp2_ParamLimits

0xab7f,	// (0x00054f00) list_double_number_pane_t1_cp2

0xab93,	// (0x00054f14) list_double_number_pane_t2_cp2_ParamLimits

0xab93,	// (0x00054f14) list_double_number_pane_t2_cp2

0xaba9,	// (0x00054f2a) list_double_number_pane_t3_cp2_ParamLimits

0xaba9,	// (0x00054f2a) list_double_number_pane_t3_cp2

0xaa68,	// (0x00054de9) list_single_graphic_pane_g1_cp2_ParamLimits

0xaa68,	// (0x00054de9) list_single_graphic_pane_g1_cp2

0x9469,	// (0x000537ea) list_single_graphic_pane_g2_cp2_ParamLimits

0x9469,	// (0x000537ea) list_single_graphic_pane_g2_cp2

0x9475,	// (0x000537f6) list_single_graphic_pane_g3_cp2

0xaa3e,	// (0x00054dbf) list_single_graphic_pane_t1_cp2_ParamLimits

0xaa3e,	// (0x00054dbf) list_single_graphic_pane_t1_cp2

0x9469,	// (0x000537ea) list_single_number_pane_g1_cp2_ParamLimits

0x9469,	// (0x000537ea) list_single_number_pane_g1_cp2

0x9475,	// (0x000537f6) list_single_number_pane_g2_cp2

0xaa3e,	// (0x00054dbf) list_single_number_pane_t1_cp2_ParamLimits

0xaa3e,	// (0x00054dbf) list_single_number_pane_t1_cp2

0xaa54,	// (0x00054dd5) list_single_number_pane_t2_cp2_ParamLimits

0xaa54,	// (0x00054dd5) list_single_number_pane_t2_cp2

0x9269,	// (0x000535ea) list_double2_pane_g1_cp2_ParamLimits

0x9269,	// (0x000535ea) list_double2_pane_g1_cp2

0x927a,	// (0x000535fb) list_double2_pane_g2_cp2

0x93dd,	// (0x0005375e) list_double2_pane_t1_cp2_ParamLimits

0x93dd,	// (0x0005375e) list_double2_pane_t1_cp2

0x93f3,	// (0x00053774) list_double2_pane_t2_cp2_ParamLimits

0x93f3,	// (0x00053774) list_double2_pane_t2_cp2

0x9405,	// (0x00053786) list_double_pane_g1_cp2_ParamLimits

0x9405,	// (0x00053786) list_double_pane_g1_cp2

0x9411,	// (0x00053792) list_double_pane_g2_cp2

0x9419,	// (0x0005379a) list_double_pane_t1_cp2_ParamLimits

0x9419,	// (0x0005379a) list_double_pane_t1_cp2

0x942f,	// (0x000537b0) list_double_pane_t2_cp2_ParamLimits

0x942f,	// (0x000537b0) list_double_pane_t2_cp2

0x9459,	// (0x000537da) list_single_pane_cp2_g3

0x9469,	// (0x000537ea) list_single_pane_g1_cp2_ParamLimits

0x9469,	// (0x000537ea) list_single_pane_g1_cp2

0x9475,	// (0x000537f6) list_single_pane_g2_cp2

0x947d,	// (0x000537fe) list_single_pane_t1_cp2_ParamLimits

0x947d,	// (0x000537fe) list_single_pane_t1_cp2

0x9495,	// (0x00053816) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9495,	// (0x00053816) list_single_large_graphic_pane_g1_cp2

0x94a1,	// (0x00053822) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x94a1,	// (0x00053822) list_single_large_graphic_pane_g2_cp2

0x94ad,	// (0x0005382e) list_single_large_graphic_pane_g3_cp2

0x94b5,	// (0x00053836) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x94b5,	// (0x00053836) list_single_large_graphic_pane_g4_cp1

0x94cf,	// (0x00053850) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x94cf,	// (0x00053850) list_single_large_graphic_pane_t1_cp2

0xaa0a,	// (0x00054d8b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xaa0a,	// (0x00054d8b) list_single_graphic_heading_pane_g1_cp2

0xa9d7,	// (0x00054d58) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa9d7,	// (0x00054d58) list_single_graphic_heading_pane_g4_cp2

0x9475,	// (0x000537f6) list_single_graphic_heading_pane_g5_cp2

0xaa16,	// (0x00054d97) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xaa16,	// (0x00054d97) list_single_graphic_heading_pane_t1_cp2

0xaa2c,	// (0x00054dad) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xaa2c,	// (0x00054dad) list_single_graphic_heading_pane_t2_cp2

0xa9cb,	// (0x00054d4c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa9cb,	// (0x00054d4c) list_single_2graphic_pane_g1_cp2

0xa9d7,	// (0x00054d58) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa9d7,	// (0x00054d58) list_single_2graphic_pane_g2_cp2

0x9475,	// (0x000537f6) list_single_2graphic_pane_g3_cp2

0xa9e8,	// (0x00054d69) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa9e8,	// (0x00054d69) list_single_2graphic_pane_g4_cp2

0xa9f4,	// (0x00054d75) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa9f4,	// (0x00054d75) list_single_2graphic_pane_t1_cp2

0x7f78,	// (0x000522f9) list_highlight_pane_g10_cp1

0xa5a3,	// (0x00054924) list_highlight_pane_g1_cp1

0xa5ab,	// (0x0005492c) list_highlight_pane_g2_cp1

0xa5b3,	// (0x00054934) list_highlight_pane_g3_cp1

0xa5bb,	// (0x0005493c) list_highlight_pane_g4_cp1

0xa5c3,	// (0x00054944) list_highlight_pane_g5_cp1

0xa5cb,	// (0x0005494c) list_highlight_pane_g6_cp1

0xa5d3,	// (0x00054954) list_highlight_pane_g7_cp1

0xa5db,	// (0x0005495c) list_highlight_pane_g8_cp1

0xa5e3,	// (0x00054964) list_highlight_pane_g9_cp1

0xa4bb,	// (0x0005483c) form_field_slider_pane_t3

0xa4c9,	// (0x0005484a) form_field_slider_pane_t4

0xa4d7,	// (0x00054858) slider_form_pane_ParamLimits

0xa4d7,	// (0x00054858) slider_form_pane

0x7f82,	// (0x00052303) control_abbreviations

0x7f82,	// (0x00052303) control_conventions

0x7f82,	// (0x00052303) control_definitions

0x7f82,	// (0x00052303) format_table_attribute

0xacbd,	// (0x0005503e) bg_popup_preview_window_pane_g9

0x7f82,	// (0x00052303) format_table_data2

0x7f82,	// (0x00052303) format_table_data3

0x7f82,	// (0x00052303) format_table_data_example

0x0008,

0x7f82,	// (0x00052303) intro_purpose

0xf8ef,	// (0x00059c70) bg_popup_preview_window_pane_g

0x7f82,	// (0x00052303) texts_category

0x7f82,	// (0x00052303) texts_graphics

0x94e5,	// (0x00053866) text_digital

0x94f4,	// (0x00053875) text_primary

0x9503,	// (0x00053884) text_primary_small

0x9512,	// (0x00053893) text_secondary

0x9521,	// (0x000538a2) text_title

0xb38c,	// (0x0005570d) bg_passive_tab_pane_g1_cp3_srt

0x9175,	// (0x000534f6) bg_passive_tab_pane_g2_cp3_srt

0xb395,	// (0x00055716) bg_passive_tab_pane_g3_cp3_srt

0x8062,	// (0x000523e3) bg_active_tab_pane_cp3_srt_ParamLimits

0x8062,	// (0x000523e3) bg_active_tab_pane_cp3_srt

0xb39e,	// (0x0005571f) tabs_4_active_pane_srt_g1

0xb3a6,	// (0x00055727) tabs_4_active_pane_srt_t1_ParamLimits

0xb3a6,	// (0x00055727) tabs_4_active_pane_srt_t1

0xb38c,	// (0x0005570d) bg_active_tab_pane_g1_cp3_copy1

0x9175,	// (0x000534f6) bg_active_tab_pane_g2_cp3_copy1

0xb395,	// (0x00055716) bg_active_tab_pane_g3_cp3_copy1

0x8062,	// (0x000523e3) tabs_2_long_active_pane_srt_ParamLimits

0x8062,	// (0x000523e3) tabs_2_long_active_pane_srt

0x8062,	// (0x000523e3) tabs_2_long_passive_pane_srt_ParamLimits

0x8062,	// (0x000523e3) tabs_2_long_passive_pane_srt

0x8a9e,	// (0x00052e1f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8a9e,	// (0x00052e1f) bg_passive_tab_pane_cp4_srt

0xb0ec,	// (0x0005546d) bg_passive_tab_pane_g1_cp4_srt

0x9175,	// (0x000534f6) bg_passive_tab_pane_g2_cp4_srt

0xb0f5,	// (0x00055476) bg_passive_tab_pane_g3_cp4_srt

0x8a7d,	// (0x00052dfe) bg_active_tab_pane_cp4_srt_ParamLimits

0x8a7d,	// (0x00052dfe) bg_active_tab_pane_cp4_srt

0xb0fe,	// (0x0005547f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb0fe,	// (0x0005547f) tabs_2_long_active_pane_srt_t1

0xb0ec,	// (0x0005546d) bg_active_tab_pane_g1_cp4_srt

0x9175,	// (0x000534f6) bg_active_tab_pane_g2_cp4_srt

0xb0f5,	// (0x00055476) bg_active_tab_pane_g3_cp4_srt

0x82dd,	// (0x0005265e) tabs_3_long_active_pane_srt_ParamLimits

0x82dd,	// (0x0005265e) tabs_3_long_active_pane_srt

0x82dd,	// (0x0005265e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x82dd,	// (0x0005265e) tabs_3_long_passive_pane_cp_srt

0x82dd,	// (0x0005265e) tabs_3_long_passive_pane_srt_ParamLimits

0x82dd,	// (0x0005265e) tabs_3_long_passive_pane_srt

0x8a9e,	// (0x00052e1f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8a9e,	// (0x00052e1f) bg_passive_tab_pane_cp5_srt

0x91ff,	// (0x00053580) bg_passive_tab_pane_g1_cp5_srt

0x9175,	// (0x000534f6) bg_passive_tab_pane_g2_cp5_srt

0x9208,	// (0x00053589) bg_passive_tab_pane_g3_cp5_srt

0x8a7d,	// (0x00052dfe) bg_active_tab_pane_cp5_srt_ParamLimits

0x8a7d,	// (0x00052dfe) bg_active_tab_pane_cp5_srt

0xb0da,	// (0x0005545b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb0da,	// (0x0005545b) tabs_3_long_active_pane_srt_t1

0x91ff,	// (0x00053580) bg_active_tab_pane_g1_cp5_srt

0x9175,	// (0x000534f6) bg_active_tab_pane_g2_cp5_srt

0x9208,	// (0x00053589) bg_active_tab_pane_g3_cp5_srt

0xb0cc,	// (0x0005544d) navi_text_pane_srt_t1

0xb0c4,	// (0x00055445) navi_icon_pane_srt_g1

0x96e6,	// (0x00053a67) midp_editing_number_pane_srt

0x9530,	// (0x000538b1) midp_ticker_pane_srt

0x96ee,	// (0x00053a6f) midp_ticker_pane_srt_g1

0x96f6,	// (0x00053a77) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00059af8) midp_ticker_pane_srt_g

0x96fe,	// (0x00053a7f) midp_ticker_pane_srt_t1

0xb0b5,	// (0x00055436) midp_editing_number_pane_t1_copy1

0x8a9e,	// (0x00052e1f) listscroll_midp_pane

0x8a9e,	// (0x00052e1f) midp_form_pane

0x959e,	// (0x0005391f) midp_info_popup_window_ParamLimits

0x959e,	// (0x0005391f) midp_info_popup_window

0x8968,	// (0x00052ce9) bg_popup_sub_pane_cp50_ParamLimits

0x8968,	// (0x00052ce9) bg_popup_sub_pane_cp50

0xa1cc,	// (0x0005454d) listscroll_midp_info_pane_ParamLimits

0xa1cc,	// (0x0005454d) listscroll_midp_info_pane

0xa1b4,	// (0x00054535) listscroll_form_midp_pane_ParamLimits

0xa1b4,	// (0x00054535) listscroll_form_midp_pane

0xa1c0,	// (0x00054541) scroll_bar_cp050

0xa194,	// (0x00054515) list_midp_pane

0xbdc1,	// (0x00056142) signal_pane_g2_cp

0xa0ce,	// (0x0005444f) listscroll_midp_info_pane_t1_ParamLimits

0xa0ce,	// (0x0005444f) listscroll_midp_info_pane_t1

0xa0e6,	// (0x00054467) listscroll_midp_info_pane_t2_ParamLimits

0xa0e6,	// (0x00054467) listscroll_midp_info_pane_t2

0xa124,	// (0x000544a5) listscroll_midp_info_pane_t3_ParamLimits

0xa124,	// (0x000544a5) listscroll_midp_info_pane_t3

0xa15e,	// (0x000544df) listscroll_midp_info_pane_t4_ParamLimits

0xa15e,	// (0x000544df) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00059bab) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00059bab) listscroll_midp_info_pane_t

0x8a2a,	// (0x00052dab) scroll_pane_cp21

0xa070,	// (0x000543f1) form_midp_field_choice_group_pane

0xa079,	// (0x000543fa) form_midp_field_text_pane

0xa0b4,	// (0x00054435) form_midp_field_time_pane

0xa0bc,	// (0x0005443d) form_midp_gauge_slider_pane

0xa0c5,	// (0x00054446) form_midp_gauge_wait_pane

0x7f82,	// (0x00052303) form_midp_image_pane

0x76ff,	// (0x00051a80) list_single_midp_pane_ParamLimits

0x76ff,	// (0x00051a80) list_single_midp_pane

0xa024,	// (0x000543a5) form_midp_field_text_pane_t1

0x9ddc,	// (0x0005415d) input_focus_pane_cp050

0xa05f,	// (0x000543e0) list_midp_form_text_pane

0x9ff3,	// (0x00054374) form_midp_field_choice_group_pane_t1

0xa001,	// (0x00054382) input_focus_pane_cp051

0xa015,	// (0x00054396) list_midp_choice_pane

0x7f82,	// (0x00052303) status_idle_pane

0x9fd7,	// (0x00054358) form_midp_field_time_pane_t1

0x7f78,	// (0x000522f9) wait_anim_pane_g2_copy1

0x9fe5,	// (0x00054366) form_midp_field_time_pane_t2

0x0001,

0x964e,	// (0x000539cf) aid_navinavi_width_2_pane

0xf825,	// (0x00059ba6) form_midp_field_time_pane_t

0x7f82,	// (0x00052303) input_focus_pane_cp052

0x7f82,	// (0x00052303) bg_input_focus_pane_cp040

0x9f97,	// (0x00054318) form_midp_gauge_slider_pane_t1

0x9fa5,	// (0x00054326) form_midp_gauge_slider_pane_t2

0x9fb3,	// (0x00054334) form_midp_gauge_slider_pane_t3

0x9fc1,	// (0x00054342) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00059b9d) form_midp_gauge_slider_pane_t

0x9fcf,	// (0x00054350) form_midp_slider_pane

0x8062,	// (0x000523e3) bg_input_focus_pane_cp041_ParamLimits

0x8062,	// (0x000523e3) bg_input_focus_pane_cp041

0x9f64,	// (0x000542e5) form_midp_gauge_wait_pane_t1_ParamLimits

0x9f64,	// (0x000542e5) form_midp_gauge_wait_pane_t1

0x9f76,	// (0x000542f7) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f76,	// (0x000542f7) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00059b98) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00059b98) form_midp_gauge_wait_pane_t

0x9f88,	// (0x00054309) form_midp_wait_pane_ParamLimits

0x9f88,	// (0x00054309) form_midp_wait_pane

0x9f2e,	// (0x000542af) form_midp_image_pane_g1

0x9f37,	// (0x000542b8) form_midp_image_pane_t1

0x9f46,	// (0x000542c7) form_midp_image_pane_t2

0x9f55,	// (0x000542d6) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x00059b91) form_midp_image_pane_t

0x9f25,	// (0x000542a6) list_single_midp_pane_g1

0x76f0,	// (0x00051a71) list_single_midp_pane_t1

0x9ef6,	// (0x00054277) list_midp_form_item_pane_ParamLimits

0x9ef6,	// (0x00054277) list_midp_form_item_pane

0x95f6,	// (0x00053977) list_midp_form_item_pane_t1

0x9605,	// (0x00053986) midp_ticker_pane_g1

0x9611,	// (0x00053992) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00059ade) midp_ticker_pane_g

0x961d,	// (0x0005399e) midp_ticker_pane_t1

0xb2f8,	// (0x00055679) midp_editing_number_pane_t1

0xb2d6,	// (0x00055657) midp_editing_number_pane

0xb2e5,	// (0x00055666) midp_ticker_pane

0xb0a5,	// (0x00055426) ai_message_heading_pane

0x7f82,	// (0x00052303) bg_popup_window_pane_cp14

0xb0ad,	// (0x0005542e) listscroll_ai_message_pane

0xb02f,	// (0x000553b0) ai_message_heading_pane_g1_ParamLimits

0xb02f,	// (0x000553b0) ai_message_heading_pane_g1

0xb03b,	// (0x000553bc) ai_message_heading_pane_g2_ParamLimits

0xb03b,	// (0x000553bc) ai_message_heading_pane_g2

0xb047,	// (0x000553c8) ai_message_heading_pane_g3_ParamLimits

0xb047,	// (0x000553c8) ai_message_heading_pane_g3

0xb053,	// (0x000553d4) ai_message_heading_pane_g4_ParamLimits

0xb053,	// (0x000553d4) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x00059cd2) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x00059cd2) ai_message_heading_pane_g

0xb05f,	// (0x000553e0) ai_message_heading_pane_t1_ParamLimits

0xb05f,	// (0x000553e0) ai_message_heading_pane_t1

0xb079,	// (0x000553fa) ai_message_heading_pane_t2_ParamLimits

0xb079,	// (0x000553fa) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x00059cdb) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x00059cdb) ai_message_heading_pane_t

0xb08b,	// (0x0005540c) bg_popup_heading_pane_cp1_ParamLimits

0xb08b,	// (0x0005540c) bg_popup_heading_pane_cp1

0xb01d,	// (0x0005539e) list_ai_message_pane_ParamLimits

0xb01d,	// (0x0005539e) list_ai_message_pane

0x8a2a,	// (0x00052dab) scroll_pane_cp10

0xafb9,	// (0x0005533a) list_ai_message_pane_g1

0xafc1,	// (0x00055342) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x00059caf) list_ai_message_pane_g

0xafc9,	// (0x0005534a) list_ai_message_pane_t1_ParamLimits

0xafc9,	// (0x0005534a) list_ai_message_pane_t1

0xafde,	// (0x0005535f) list_ai_message_pane_t2_ParamLimits

0xafde,	// (0x0005535f) list_ai_message_pane_t2

0xaff3,	// (0x00055374) list_ai_message_pane_t3_ParamLimits

0xaff3,	// (0x00055374) list_ai_message_pane_t3

0xb008,	// (0x00055389) list_ai_message_pane_t4_ParamLimits

0xb008,	// (0x00055389) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x00059cb4) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x00059cb4) list_ai_message_pane_t

0xafa3,	// (0x00055324) cell_ai_soft_ind_pane_ParamLimits

0xafa3,	// (0x00055324) cell_ai_soft_ind_pane

0x962f,	// (0x000539b0) cell_ai_soft_ind_pane_g1_ParamLimits

0x962f,	// (0x000539b0) cell_ai_soft_ind_pane_g1

0x7f82,	// (0x00052303) grid_highlight_cp1

0x963c,	// (0x000539bd) text_secondary_cp56_ParamLimits

0x963c,	// (0x000539bd) text_secondary_cp56

0xaf78,	// (0x000552f9) example_general_pane_ParamLimits

0xaf78,	// (0x000552f9) example_general_pane

0xaf84,	// (0x00055305) example_parent_pane_g1_ParamLimits

0xaf84,	// (0x00055305) example_parent_pane_g1

0xaf90,	// (0x00055311) example_parent_pane_t1_ParamLimits

0xaf90,	// (0x00055311) example_parent_pane_t1

0x5e6f,	// (0x000501f0) popup_preview_text_window_ParamLimits

0x5e6f,	// (0x000501f0) popup_preview_text_window

0x9461,	// (0x000537e2) list_single_pane_cp2_g4

0x8387,	// (0x00052708) bg_popup_preview_window_pane_ParamLimits

0x8387,	// (0x00052708) bg_popup_preview_window_pane

0xacc5,	// (0x00055046) popup_preview_text_window_t1_ParamLimits

0xacc5,	// (0x00055046) popup_preview_text_window_t1

0xace3,	// (0x00055064) popup_preview_text_window_t2_ParamLimits

0xace3,	// (0x00055064) popup_preview_text_window_t2

0xad2c,	// (0x000550ad) popup_preview_text_window_t3_ParamLimits

0xad2c,	// (0x000550ad) popup_preview_text_window_t3

0xad71,	// (0x000550f2) popup_preview_text_window_t4_ParamLimits

0xad71,	// (0x000550f2) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x00059c83) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x00059c83) popup_preview_text_window_t

0xadef,	// (0x00055170) scroll_pane_cp11

0x9d68,	// (0x000540e9) bg_popup_preview_window_pane_g1

0xac85,	// (0x00055006) bg_popup_preview_window_pane_g2

0xac8d,	// (0x0005500e) bg_popup_preview_window_pane_g3

0xac95,	// (0x00055016) bg_popup_preview_window_pane_g4

0xac9d,	// (0x0005501e) bg_popup_preview_window_pane_g5

0xaca5,	// (0x00055026) bg_popup_preview_window_pane_g6

0xacad,	// (0x0005502e) bg_popup_preview_window_pane_g7

0xacb5,	// (0x00055036) bg_popup_preview_window_pane_g8

0x4937,	// (0x0004ecb8) aid_popup_width_pane

0x5e4d,	// (0x000501ce) popup_midp_note_alarm_window_ParamLimits

0x5e4d,	// (0x000501ce) popup_midp_note_alarm_window

0x88bc,	// (0x00052c3d) data_form_pane_ParamLimits

0x52e2,	// (0x0004f663) form_field_data_pane_g1

0x52ec,	// (0x0004f66d) form_field_data_pane_t1_ParamLimits

0x88c8,	// (0x00052c49) input_focus_pane_ParamLimits

0x5306,	// (0x0004f687) data_form_wide_pane_ParamLimits

0x5317,	// (0x0004f698) form_field_data_wide_pane_g1

0x5323,	// (0x0004f6a4) form_field_data_wide_pane_t1_ParamLimits

0x862d,	// (0x000529ae) input_focus_pane_cp6_ParamLimits

0x89d5,	// (0x00052d56) input_popup_find_pane_g1_ParamLimits

0x89d5,	// (0x00052d56) input_popup_find_pane_g1

0x5581,	// (0x0004f902) aid_navi_side_left_pane

0x5596,	// (0x0004f917) aid_navi_side_right_pane

0xa69e,	// (0x00054a1f) bg_popup_window_pane_cp30_ParamLimits

0xa69e,	// (0x00054a1f) bg_popup_window_pane_cp30

0xa718,	// (0x00054a99) popup_midp_note_alarm_window_g1_ParamLimits

0xa718,	// (0x00054a99) popup_midp_note_alarm_window_g1

0xa748,	// (0x00054ac9) popup_midp_note_alarm_window_t1_ParamLimits

0xa748,	// (0x00054ac9) popup_midp_note_alarm_window_t1

0xa7e9,	// (0x00054b6a) popup_midp_note_alarm_window_t2_ParamLimits

0xa7e9,	// (0x00054b6a) popup_midp_note_alarm_window_t2

0xa897,	// (0x00054c18) popup_midp_note_alarm_window_t3_ParamLimits

0xa897,	// (0x00054c18) popup_midp_note_alarm_window_t3

0xa8c9,	// (0x00054c4a) popup_midp_note_alarm_window_t4_ParamLimits

0xa8c9,	// (0x00054c4a) popup_midp_note_alarm_window_t4

0xa8ef,	// (0x00054c70) popup_midp_note_alarm_window_t5_ParamLimits

0xa8ef,	// (0x00054c70) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00059c20) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00059c20) popup_midp_note_alarm_window_t

0xa99b,	// (0x00054d1c) wait_bar_pane_cp1_ParamLimits

0xa99b,	// (0x00054d1c) wait_bar_pane_cp1

0x7f82,	// (0x00052303) wait_anim_pane_copy1

0x7f82,	// (0x00052303) wait_border_pane_copy1

0xa370,	// (0x000546f1) wait_border_pane_g1_copy1

0x533d,	// (0x0004f6be) form_field_popup_pane_g1

0x5345,	// (0x0004f6c6) form_field_popup_pane_t1_ParamLimits

0x88c8,	// (0x00052c49) input_focus_pane_cp7_ParamLimits

0x88ea,	// (0x00052c6b) list_form_pane_ParamLimits

0x535f,	// (0x0004f6e0) form_field_popup_wide_pane_g1

0x5367,	// (0x0004f6e8) form_field_popup_wide_pane_t1_ParamLimits

0x88c8,	// (0x00052c49) input_focus_pane_cp8_ParamLimits

0x88f6,	// (0x00052c77) list_form_wide_pane_ParamLimits

0xb421,	// (0x000557a2) aid_size_cell_graphic_pane

0x53f3,	// (0x0004f774) data_form_pane_t1_ParamLimits

0x7743,	// (0x00051ac4) data_form_wide_pane_t1_ParamLimits

0x993d,	// (0x00053cbe) bg_status_flat_pane

0x7fc2,	// (0x00052343) title_pane_t1_ParamLimits

0x802a,	// (0x000523ab) title_pane_t2_ParamLimits

0x8050,	// (0x000523d1) title_pane_t3_ParamLimits

0xf557,	// (0x000598d8) title_pane_t_ParamLimits

0x8ea1,	// (0x00053222) level_1_signal_ParamLimits

0x8eae,	// (0x0005322f) level_2_signal_ParamLimits

0x8ebb,	// (0x0005323c) level_3_signal_ParamLimits

0x8ec8,	// (0x00053249) level_4_signal_ParamLimits

0x8ed5,	// (0x00053256) level_5_signal_ParamLimits

0x8ee2,	// (0x00053263) level_6_signal_ParamLimits

0x8eef,	// (0x00053270) level_7_signal_ParamLimits

0x8ea1,	// (0x00053222) level_1_battery_ParamLimits

0x8eae,	// (0x0005322f) level_2_battery_ParamLimits

0x8ebb,	// (0x0005323c) level_3_battery_ParamLimits

0x8ec8,	// (0x00053249) level_4_battery_ParamLimits

0x8ed5,	// (0x00053256) level_5_battery_ParamLimits

0x8ee2,	// (0x00053263) level_6_battery_ParamLimits

0x8eef,	// (0x00053270) level_7_battery_ParamLimits

0xa5a3,	// (0x00054924) bg_status_flat_pane_g1

0xa5ab,	// (0x0005492c) bg_status_flat_pane_g2

0xa5b3,	// (0x00054934) bg_status_flat_pane_g3

0xa5bb,	// (0x0005493c) bg_status_flat_pane_g4

0xa5c3,	// (0x00054944) bg_status_flat_pane_g5

0xa5cb,	// (0x0005494c) bg_status_flat_pane_g6

0xa5d3,	// (0x00054954) bg_status_flat_pane_g7

0x8078,	// (0x000523f9) tabs_3_active_pane_t1_ParamLimits

0x8078,	// (0x000523f9) tabs_3_passive_pane_t1_ParamLimits

0x8092,	// (0x00052413) tabs_4_active_pane_t1_ParamLimits

0x8092,	// (0x00052413) tabs_4_1_passive_pane_t1_ParamLimits

0x8a6b,	// (0x00052dec) tabs_2_active_pane_t1_ParamLimits

0x8a6b,	// (0x00052dec) tabs_2_passive_pane_t1_ParamLimits

0x8a7d,	// (0x00052dfe) bg_active_tab_pane_cp4_ParamLimits

0x8a8b,	// (0x00052e0c) tabs_2_long_active_pane_t1_ParamLimits

0x8a9e,	// (0x00052e1f) bg_passive_tab_pane_cp4_ParamLimits

0x6174,	// (0x000504f5) list_single_midp_graphic_pane_t1_ParamLimits

0x8a7d,	// (0x00052dfe) bg_active_tab_pane_cp5_ParamLimits

0x8aaa,	// (0x00052e2b) tabs_3_long_active_pane_t1_ParamLimits

0x8a9e,	// (0x00052e1f) bg_passive_tab_pane_cp5_ParamLimits

0x6174,	// (0x000504f5) list_single_midp_graphic_pane_t1

0x993d,	// (0x00053cbe) bg_status_flat_pane_ParamLimits

0x9a00,	// (0x00053d81) indicator_pane_cp2_ParamLimits

0x9a00,	// (0x00053d81) indicator_pane_cp2

0x9b2b,	// (0x00053eac) navi_pane_srt_ParamLimits

0x9b2b,	// (0x00053eac) navi_pane_srt

0x9b4f,	// (0x00053ed0) popup_clock_digital_analogue_window_cp1

0x813f,	// (0x000524c0) indicator_pane_t1

0x9530,	// (0x000538b1) copy_highlight_pane

0x9530,	// (0x000538b1) cursor_graphics_pane

0x9530,	// (0x000538b1) graphic_within_text_pane

0x9530,	// (0x000538b1) link_highlight_pane

0xadb2,	// (0x00055133) popup_preview_text_window_t5_ParamLimits

0xadb2,	// (0x00055133) popup_preview_text_window_t5

0x9656,	// (0x000539d7) cursor_digital_pane

0x9656,	// (0x000539d7) cursor_primary_pane

0x9667,	// (0x000539e8) cursor_primary_small_pane

0x966f,	// (0x000539f0) cursor_secondary_pane

0x9677,	// (0x000539f8) cursor_title_pane

0x9656,	// (0x000539d7) link_highlight_digital_pane

0x965e,	// (0x000539df) link_highlight_primary_pane

0x9667,	// (0x000539e8) link_highlight_primary_small_pane

0x966f,	// (0x000539f0) link_highlight_secondary_pane

0x9677,	// (0x000539f8) link_highlight_title_pane

0x9656,	// (0x000539d7) copy_highlight_digital_pane

0x9656,	// (0x000539d7) copy_highlight_primary_pane

0x9667,	// (0x000539e8) copy_highlight_primary_small_pane

0x966f,	// (0x000539f0) copy_highlight_secondary_pane

0x9677,	// (0x000539f8) copy_highlight_title_pane

0x966f,	// (0x000539f0) graphic_text_digital_pane

0xa641,	// (0x000549c2) graphic_text_primary_pane

0xa64a,	// (0x000549cb) graphic_text_primary_small_pane

0x9667,	// (0x000539e8) graphic_text_secondary_pane

0x9656,	// (0x000539d7) graphic_text_title_pane

0x967f,	// (0x00053a00) cursor_primary_pane_g1

0xa633,	// (0x000549b4) cursor_text_primary_t1

0xa61b,	// (0x0005499c) cursor_primary_small_pane_g1

0xa625,	// (0x000549a6) cursor_text_primary_small_t1

0xa603,	// (0x00054984) cursor_primary_small_pane_g1_copy1

0xa60d,	// (0x0005498e) cursor_text_primary_small_t1_copy1

0xa5eb,	// (0x0005496c) cursor_text_title_t1

0xa5f9,	// (0x0005497a) cursor_title_pane_g1

0x967f,	// (0x00053a00) cursor_digital_pane_g1

0x9689,	// (0x00053a0a) cursor_text_digital_t1

0xa58c,	// (0x0005490d) link_highlight_primary_pane_g1

0xa594,	// (0x00054915) link_highlight_primary_pane_t1

0x9697,	// (0x00053a18) link_highlight_primary_small_pane_g1

0x969f,	// (0x00053a20) link_highlight_primary_small_pane_t1

0x9697,	// (0x00053a18) link_highlight_secondary_pane_g1

0x96ae,	// (0x00053a2f) link_highlight_secondary_pane_t1

0xa500,	// (0x00054881) link_highlight_title_pane_g1

0xa508,	// (0x00054889) link_highlight_title_pane_t1

0xa4e9,	// (0x0005486a) link_highlight_digital_pane_g1

0xa4f1,	// (0x00054872) link_highlight_digital_pane_t1

0xa3c1,	// (0x00054742) copy_highlight_primary_pane_g1

0xa3c9,	// (0x0005474a) copy_highlight_primary_pane_t1

0xa39b,	// (0x0005471c) copy_highlight_primary_small_pane_g1

0xa3b2,	// (0x00054733) copy_highlight_primary_small_pane_t1

0x96bd,	// (0x00053a3e) copy_highlight_secondary_pane_g1

0x96c5,	// (0x00053a46) copy_highlight_secondary_pane_t1

0xa39b,	// (0x0005471c) copy_highlight_title_pane_g1

0xa3a3,	// (0x00054724) copy_highlight_title_pane_t1

0xa3c1,	// (0x00054742) copy_highlight_digital_pane_g1

0xb5ec,	// (0x0005596d) copy_highlight_digital_pane_t1

0xb540,	// (0x000558c1) graphic_text_primary_pane_g1

0xb5d0,	// (0x00055951) graphic_text_primary_pane_t1

0xb5de,	// (0x0005595f) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x00059d4f) graphic_text_primary_pane_t

0xb5ac,	// (0x0005592d) graphic_text_primary_small_pane_g1

0xb5b4,	// (0x00055935) graphic_text_primary_small_pane_t1

0xb5c2,	// (0x00055943) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x00059d4a) graphic_text_primary_small_pane_t

0xb588,	// (0x00055909) graphic_text_secondary_pane_g1

0xb590,	// (0x00055911) graphic_text_secondary_pane_t1

0xb59e,	// (0x0005591f) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x00059d45) graphic_text_secondary_pane_t

0xb564,	// (0x000558e5) graphic_text_title_pane_g1

0xb56c,	// (0x000558ed) graphic_text_title_pane_t1

0xb57a,	// (0x000558fb) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x00059d40) graphic_text_title_pane_t

0xb540,	// (0x000558c1) graphic_text_digital_pane_g1

0xb548,	// (0x000558c9) graphic_text_digital_pane_t1

0xb556,	// (0x000558d7) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x00059d3b) graphic_text_digital_pane_t

0x8062,	// (0x000523e3) navi_icon_pane_srt_ParamLimits

0x8062,	// (0x000523e3) navi_icon_pane_srt

0x7f82,	// (0x00052303) navi_midp_pane_srt

0x7f82,	// (0x00052303) navi_navi_pane_srt

0x8062,	// (0x000523e3) navi_text_pane_srt_ParamLimits

0x8062,	// (0x000523e3) navi_text_pane_srt

0xb50b,	// (0x0005588c) navi_navi_icon_text_pane_srt

0xb513,	// (0x00055894) navi_navi_pane_srt_g1_ParamLimits

0xb513,	// (0x00055894) navi_navi_pane_srt_g1

0xb525,	// (0x000558a6) navi_navi_pane_srt_g2_ParamLimits

0xb525,	// (0x000558a6) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x00059d36) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x00059d36) navi_navi_pane_srt_g

0xb537,	// (0x000558b8) navi_navi_tabs_pane_srt

0xb50b,	// (0x0005588c) navi_navi_text_pane_srt

0xb50b,	// (0x0005588c) navi_navi_volume_pane_srt

0xb4fc,	// (0x0005587d) navi_navi_text_pane_srt_t1

0x6516,	// (0x00050897) navi_navi_volume_pane_srt_g1

0x651e,	// (0x0005089f) volume_small_pane_srt_ParamLimits

0x651e,	// (0x0005089f) volume_small_pane_srt

0x58cb,	// (0x0004fc4c) volume_small_pane_srt_g1_ParamLimits

0x58cb,	// (0x0004fc4c) volume_small_pane_srt_g1

0x58db,	// (0x0004fc5c) volume_small_pane_srt_g2_ParamLimits

0x58db,	// (0x0004fc5c) volume_small_pane_srt_g2

0x58ec,	// (0x0004fc6d) volume_small_pane_srt_g3_ParamLimits

0x58ec,	// (0x0004fc6d) volume_small_pane_srt_g3

0x58fd,	// (0x0004fc7e) volume_small_pane_srt_g4_ParamLimits

0x58fd,	// (0x0004fc7e) volume_small_pane_srt_g4

0x590e,	// (0x0004fc8f) volume_small_pane_srt_g5_ParamLimits

0x590e,	// (0x0004fc8f) volume_small_pane_srt_g5

0x591f,	// (0x0004fca0) volume_small_pane_srt_g6_ParamLimits

0x591f,	// (0x0004fca0) volume_small_pane_srt_g6

0x5930,	// (0x0004fcb1) volume_small_pane_srt_g7_ParamLimits

0x5930,	// (0x0004fcb1) volume_small_pane_srt_g7

0x5941,	// (0x0004fcc2) volume_small_pane_srt_g8_ParamLimits

0x5941,	// (0x0004fcc2) volume_small_pane_srt_g8

0x5952,	// (0x0004fcd3) volume_small_pane_srt_g9_ParamLimits

0x5952,	// (0x0004fcd3) volume_small_pane_srt_g9

0x5963,	// (0x0004fce4) volume_small_pane_srt_g10_ParamLimits

0x5963,	// (0x0004fce4) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00059ae3) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00059ae3) volume_small_pane_srt_g

0x8430,	// (0x000527b1) query_popup_data_pane_cp2

0xb4e2,	// (0x00055863) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4e2,	// (0x00055863) navi_navi_icon_text_pane_srt_t1

0xa641,	// (0x000549c2) navi_tabs_2_long_pane_srt

0xa641,	// (0x000549c2) navi_tabs_2_pane_srt

0xa641,	// (0x000549c2) navi_tabs_3_long_pane_srt

0xa641,	// (0x000549c2) navi_tabs_3_pane_srt

0xa641,	// (0x000549c2) navi_tabs_4_pane_srt

0x64f6,	// (0x00050877) tabs_2_active_pane_srt_ParamLimits

0x64f6,	// (0x00050877) tabs_2_active_pane_srt

0x6506,	// (0x00050887) tabs_2_passive_pane_srt_ParamLimits

0x6506,	// (0x00050887) tabs_2_passive_pane_srt

0x986a,	// (0x00053beb) bg_passive_tab_pane_cp1_srt_ParamLimits

0x986a,	// (0x00053beb) bg_passive_tab_pane_cp1_srt

0xb4ae,	// (0x0005582f) bg_passive_tab_pane_g1_cp1_srt

0x9175,	// (0x000534f6) bg_passive_tab_pane_g2_cp1_srt

0xb4b7,	// (0x00055838) bg_passive_tab_pane_g3_cp1_srt

0x8062,	// (0x000523e3) bg_active_tab_pane_cp1_srt_ParamLimits

0x8062,	// (0x000523e3) bg_active_tab_pane_cp1_srt

0xb4c0,	// (0x00055841) tabs_2_active_pane_srt_g1

0xb4c8,	// (0x00055849) tabs_2_active_pane_srt_t1_ParamLimits

0xb4c8,	// (0x00055849) tabs_2_active_pane_srt_t1

0xb4ae,	// (0x0005582f) bg_active_tab_pane_g1_cp1_srt

0x9175,	// (0x000534f6) bg_active_tab_pane_g2_cp1_srt

0xb4b7,	// (0x00055838) bg_active_tab_pane_g3_cp1_srt

0x64c3,	// (0x00050844) tabs_3_active_pane_srt_ParamLimits

0x64c3,	// (0x00050844) tabs_3_active_pane_srt

0x64d4,	// (0x00050855) tabs_3_passive_pane_cp_srt_ParamLimits

0x64d4,	// (0x00050855) tabs_3_passive_pane_cp_srt

0x64e5,	// (0x00050866) tabs_3_passive_pane_srt_ParamLimits

0x64e5,	// (0x00050866) tabs_3_passive_pane_srt

0x986a,	// (0x00053beb) bg_passive_tab_pane_cp2_srt_ParamLimits

0x986a,	// (0x00053beb) bg_passive_tab_pane_cp2_srt

0x96d4,	// (0x00053a55) bg_passive_tab_pane_g1_cp2_srt

0x9175,	// (0x000534f6) bg_passive_tab_pane_g2_cp2_srt

0x96dd,	// (0x00053a5e) bg_passive_tab_pane_g3_cp2_srt

0x8062,	// (0x000523e3) bg_active_tab_pane_cp2_srt_ParamLimits

0x8062,	// (0x000523e3) bg_active_tab_pane_cp2_srt

0xb494,	// (0x00055815) tabs_3_active_pane_srt_g1

0xb49c,	// (0x0005581d) tabs_3_active_pane_srt_t1_ParamLimits

0xb49c,	// (0x0005581d) tabs_3_active_pane_srt_t1

0x96d4,	// (0x00053a55) bg_active_tab_pane_g1_cp2_srt

0x9175,	// (0x000534f6) bg_active_tab_pane_g2_cp2_srt

0x96dd,	// (0x00053a5e) bg_active_tab_pane_g3_cp2_srt

0x647b,	// (0x000507fc) tabs_4_active_pane_srt_ParamLimits

0x647b,	// (0x000507fc) tabs_4_active_pane_srt

0x648d,	// (0x0005080e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x648d,	// (0x0005080e) tabs_4_passive_pane_cp2_srt

0x5ac6,	// (0x0004fe47) aid_size_cell_toolbar

0x8a9e,	// (0x00052e1f) main_idle_act_pane_ParamLimits

0x5c81,	// (0x00050002) popup_large_graphic_colour_window_ParamLimits

0x5fe6,	// (0x00050367) popup_toolbar_window_ParamLimits

0x5fe6,	// (0x00050367) popup_toolbar_window

0xb307,	// (0x00055688) list_single_graphic_2heading_pane_ParamLimits

0xb307,	// (0x00055688) list_single_graphic_2heading_pane

0x8c57,	// (0x00052fd8) aid_size_cell_apps_grid_lsc_pane

0x8c69,	// (0x00052fea) aid_size_cell_apps_grid_prt_pane

0x986a,	// (0x00053beb) bg_wml_button_pane_cp1_ParamLimits

0x986a,	// (0x00053beb) bg_wml_button_pane_cp1

0xa024,	// (0x000543a5) form_midp_field_text_pane_t1_ParamLimits

0x9ddc,	// (0x0005415d) input_focus_pane_cp050_ParamLimits

0xa05f,	// (0x000543e0) list_midp_form_text_pane_ParamLimits

0xa001,	// (0x00054382) input_focus_pane_cp051_ParamLimits

0xa015,	// (0x00054396) list_midp_choice_pane_ParamLimits

0x9e92,	// (0x00054213) list_single_2graphic_pane_cp3_ParamLimits

0x9e92,	// (0x00054213) list_single_2graphic_pane_cp3

0x9ebd,	// (0x0005423e) list_single_midp_graphic_pane_ParamLimits

0x9ebd,	// (0x0005423e) list_single_midp_graphic_pane

0x48c1,	// (0x0004ec42) list_single_graphic_2heading_pane_g1_ParamLimits

0x48c1,	// (0x0004ec42) list_single_graphic_2heading_pane_g1

0x48cd,	// (0x0004ec4e) list_single_graphic_2heading_pane_g4_ParamLimits

0x48cd,	// (0x0004ec4e) list_single_graphic_2heading_pane_g4

0x48d9,	// (0x0004ec5a) list_single_graphic_2heading_pane_g5_ParamLimits

0x48d9,	// (0x0004ec5a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00059b36) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00059b36) list_single_graphic_2heading_pane_g

0x48e5,	// (0x0004ec66) list_single_graphic_2heading_pane_t1_ParamLimits

0x48e5,	// (0x0004ec66) list_single_graphic_2heading_pane_t1

0x48f9,	// (0x0004ec7a) list_single_graphic_2heading_pane_t2_ParamLimits

0x48f9,	// (0x0004ec7a) list_single_graphic_2heading_pane_t2

0x4913,	// (0x0004ec94) list_single_graphic_2heading_pane_t3_ParamLimits

0x4913,	// (0x0004ec94) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00059b3d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00059b3d) list_single_graphic_2heading_pane_t

0x9ca6,	// (0x00054027) bg_popup_sub_pane_cp2

0x9cd0,	// (0x00054051) grid_toobar_pane

0x6091,	// (0x00050412) cell_toolbar_pane_ParamLimits

0x6091,	// (0x00050412) cell_toolbar_pane

0x9d0c,	// (0x0005408d) cell_toolbar_pane_g1_ParamLimits

0x9d0c,	// (0x0005408d) cell_toolbar_pane_g1

0x9d20,	// (0x000540a1) cell_toolbar_pane_g2_ParamLimits

0x9d20,	// (0x000540a1) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00059b4b) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00059b4b) cell_toolbar_pane_g

0x9d42,	// (0x000540c3) grid_highlight_pane_cp2_ParamLimits

0x9d42,	// (0x000540c3) grid_highlight_pane_cp2

0x9d5c,	// (0x000540dd) toolbar_button_pane

0x9d68,	// (0x000540e9) toolbar_button_pane_g1

0x9d70,	// (0x000540f1) toolbar_button_pane_g2

0x9d78,	// (0x000540f9) toolbar_button_pane_g3

0x9d80,	// (0x00054101) toolbar_button_pane_g4

0x9d88,	// (0x00054109) toolbar_button_pane_g5

0x9d90,	// (0x00054111) toolbar_button_pane_g6

0x9d98,	// (0x00054119) toolbar_button_pane_g7

0x9da0,	// (0x00054121) toolbar_button_pane_g8

0x9da8,	// (0x00054129) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00059b50) toolbar_button_pane_g

0x60eb,	// (0x0005046c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x60eb,	// (0x0005046c) list_single_2graphic_pane_g1_cp3

0x60f7,	// (0x00050478) list_single_2graphic_pane_g2_cp3_ParamLimits

0x60f7,	// (0x00050478) list_single_2graphic_pane_g2_cp3

0x6108,	// (0x00050489) list_single_2graphic_pane_g3_cp3

0x6110,	// (0x00050491) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6110,	// (0x00050491) list_single_2graphic_pane_g4_cp3

0x611c,	// (0x0005049d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x611c,	// (0x0005049d) list_single_2graphic_pane_t1_cp3

0x6168,	// (0x000504e9) list_single_midp_graphic_pane_g2_ParamLimits

0x6168,	// (0x000504e9) list_single_midp_graphic_pane_g2

0x48b1,	// (0x0004ec32) aid_zoom_text_primary

0x48b9,	// (0x0004ec3a) aid_zoom_text_secondary

0x978e,	// (0x00053b0f) status_small_pane_g7_ParamLimits

0x978e,	// (0x00053b0f) status_small_pane_g7

0x97b1,	// (0x00053b32) status_small_pane_t1_ParamLimits

0x7f99,	// (0x0005231a) title_pane_g2

0x0003,

0xf54e,	// (0x000598cf) title_pane_g

0x84d4,	// (0x00052855) aid_size_cell_colour_1_pane_ParamLimits

0x84d4,	// (0x00052855) aid_size_cell_colour_1_pane

0x84e8,	// (0x00052869) aid_size_cell_colour_2_pane_ParamLimits

0x84e8,	// (0x00052869) aid_size_cell_colour_2_pane

0x84fc,	// (0x0005287d) aid_size_cell_colour_3_pane_ParamLimits

0x84fc,	// (0x0005287d) aid_size_cell_colour_3_pane

0x8510,	// (0x00052891) aid_size_cell_colour_4_pane_ParamLimits

0x8510,	// (0x00052891) aid_size_cell_colour_4_pane

0x54bd,	// (0x0004f83e) title_pane_stacon_g1_ParamLimits

0x54bd,	// (0x0004f83e) title_pane_stacon_g1

0xa420,	// (0x000547a1) popup_note_wait_window_g3_ParamLimits

0xa420,	// (0x000547a1) popup_note_wait_window_g3

0xa496,	// (0x00054817) popup_note_wait_window_t5_ParamLimits

0xa496,	// (0x00054817) popup_note_wait_window_t5

0x7f82,	// (0x00052303) main_feb_china_hwr_fs_writing_pane

0x5b6a,	// (0x0004feeb) popup_feb_china_hwr_fs_window_ParamLimits

0x5b6a,	// (0x0004feeb) popup_feb_china_hwr_fs_window

0x61b8,	// (0x00050539) aid_size_cell_hwr_fs_ParamLimits

0x61b8,	// (0x00050539) aid_size_cell_hwr_fs

0x9ddc,	// (0x0005415d) bg_popup_sub_pane_cp3_ParamLimits

0x9ddc,	// (0x0005415d) bg_popup_sub_pane_cp3

0x61cd,	// (0x0005054e) grid_hwr_fs_pane_ParamLimits

0x61cd,	// (0x0005054e) grid_hwr_fs_pane

0x61e5,	// (0x00050566) linegrid_hwr_fs_pane_ParamLimits

0x61e5,	// (0x00050566) linegrid_hwr_fs_pane

0x61f5,	// (0x00050576) cell_hwr_fs_pane_ParamLimits

0x61f5,	// (0x00050576) cell_hwr_fs_pane

0x9de8,	// (0x00054169) linegrid_hwr_fs_pane_g1_ParamLimits

0x9de8,	// (0x00054169) linegrid_hwr_fs_pane_g1

0x9df4,	// (0x00054175) linegrid_hwr_fs_pane_g2_ParamLimits

0x9df4,	// (0x00054175) linegrid_hwr_fs_pane_g2

0x9e06,	// (0x00054187) linegrid_hwr_fs_pane_g3_ParamLimits

0x9e06,	// (0x00054187) linegrid_hwr_fs_pane_g3

0x6217,	// (0x00050598) linegrid_hwr_fs_pane_g4_ParamLimits

0x6217,	// (0x00050598) linegrid_hwr_fs_pane_g4

0x6231,	// (0x000505b2) linegrid_hwr_fs_pane_g5_ParamLimits

0x6231,	// (0x000505b2) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x00059b76) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00059b76) linegrid_hwr_fs_pane_g

0x9e12,	// (0x00054193) cell_hwr_fs_pane_g1_ParamLimits

0x9e12,	// (0x00054193) cell_hwr_fs_pane_g1

0x9bdd,	// (0x00053f5e) cell_hwr_fs_pane_g2_ParamLimits

0x9bdd,	// (0x00053f5e) cell_hwr_fs_pane_g2

0x9e28,	// (0x000541a9) cell_hwr_fs_pane_g3_ParamLimits

0x9e28,	// (0x000541a9) cell_hwr_fs_pane_g3

0x9e35,	// (0x000541b6) cell_hwr_fs_pane_g4_ParamLimits

0x9e35,	// (0x000541b6) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x00059b81) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00059b81) cell_hwr_fs_pane_g

0x6247,	// (0x000505c8) cell_hwr_fs_pane_t1

0x7f82,	// (0x00052303) grid_highlight_pane_cp6

0x7f82,	// (0x00052303) main_idle_act2_pane

0x8a11,	// (0x00052d92) aid_inside_area_popup_secondary

0xaad5,	// (0x00054e56) aid_inside_area_window_primary_ParamLimits

0xaad5,	// (0x00054e56) aid_inside_area_window_primary

0xb5fb,	// (0x0005597c) ai2_news_ticker_pane

0xb603,	// (0x00055984) aid_size_cell_ai1_link_ParamLimits

0xb603,	// (0x00055984) aid_size_cell_ai1_link

0xb61d,	// (0x0005599e) popup_ai2_data_window_ParamLimits

0xb61d,	// (0x0005599e) popup_ai2_data_window

0xb631,	// (0x000559b2) popup_ai2_link_window_ParamLimits

0xb631,	// (0x000559b2) popup_ai2_link_window

0x9ddc,	// (0x0005415d) bg_popup_sub_pane_cp4_ParamLimits

0x9ddc,	// (0x0005415d) bg_popup_sub_pane_cp4

0xb645,	// (0x000559c6) grid_ai2_link_pane_ParamLimits

0xb645,	// (0x000559c6) grid_ai2_link_pane

0xb65c,	// (0x000559dd) popup_ai2_link_window_g1_ParamLimits

0xb65c,	// (0x000559dd) popup_ai2_link_window_g1

0xb668,	// (0x000559e9) popup_ai2_link_window_g2_ParamLimits

0xb668,	// (0x000559e9) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x00059d54) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x00059d54) popup_ai2_link_window_g

0xb677,	// (0x000559f8) ai2_mp_button_pane

0xb67f,	// (0x00055a00) ai2_mp_volume_pane

0xa001,	// (0x00054382) bg_popup_sub_pane_cp5_ParamLimits

0xa001,	// (0x00054382) bg_popup_sub_pane_cp5

0xb687,	// (0x00055a08) heading_ai2_gene_pane_ParamLimits

0xb687,	// (0x00055a08) heading_ai2_gene_pane

0xb693,	// (0x00055a14) list_ai2_gene_pane_ParamLimits

0xb693,	// (0x00055a14) list_ai2_gene_pane

0xb6db,	// (0x00055a5c) cell_ai2_link_pane_ParamLimits

0xb6db,	// (0x00055a5c) cell_ai2_link_pane

0xb6f1,	// (0x00055a72) cell_ai2_link_pane_g1

0x7f82,	// (0x00052303) grid_highlight_pane_cp7

0x6533,	// (0x000508b4) ai2_mp_volume_pane_g1

0xb7c2,	// (0x00055b43) ai2_mp_volume_pane_g2

0xb737,	// (0x00055ab8) list_ai2_gene_pane_t1

0xb7ca,	// (0x00055b4b) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x00059d6d) ai2_mp_volume_pane_g

0x653b,	// (0x000508bc) volume_small_pane_cp3

0xb7d2,	// (0x00055b53) aid_size_cell_ai2_button

0xb7da,	// (0x00055b5b) grid_ai2_button_pane

0xb7e3,	// (0x00055b64) cell_ai2_button_pane_ParamLimits

0xb7e3,	// (0x00055b64) cell_ai2_button_pane

0x7f78,	// (0x000522f9) cell_ai2_button_pane_g1

0x7f82,	// (0x00052303) grid_highlight_pane_cp8

0xb782,	// (0x00055b03) ai2_gene_pane_t1_ParamLimits

0xb782,	// (0x00055b03) ai2_gene_pane_t1

0x5abc,	// (0x0004fe3d) aid_height_parent_landscape

0xb146,	// (0x000554c7) aid_height_set_list

0xb157,	// (0x000554d8) aid_size_parent

0xb421,	// (0x000557a2) aid_size_cell_graphic_pane_ParamLimits

0xb6a3,	// (0x00055a24) popup_ai2_data_window_g1_ParamLimits

0xb6a3,	// (0x00055a24) popup_ai2_data_window_g1

0xb6af,	// (0x00055a30) ai2_news_ticker_pane_g1

0xb6b7,	// (0x00055a38) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x00059d59) ai2_news_ticker_pane_g

0xb6bf,	// (0x00055a40) ai2_news_ticker_pane_t1

0xb6cd,	// (0x00055a4e) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x00059d5e) ai2_news_ticker_pane_t

0xb6fa,	// (0x00055a7b) heading_ai2_gene_pane_g1

0xb702,	// (0x00055a83) heading_ai2_gene_pane_t1_ParamLimits

0xb702,	// (0x00055a83) heading_ai2_gene_pane_t1

0xb717,	// (0x00055a98) list_highlight_pane_cp6

0xb71f,	// (0x00055aa0) ai2_gene_pane_ParamLimits

0xb71f,	// (0x00055aa0) ai2_gene_pane

0xb745,	// (0x00055ac6) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x00059d63) list_ai2_gene_pane_t

0xb753,	// (0x00055ad4) list_highlight_pane_cp8_ParamLimits

0xb753,	// (0x00055ad4) list_highlight_pane_cp8

0xb764,	// (0x00055ae5) ai2_gene_pane_g1_ParamLimits

0xb764,	// (0x00055ae5) ai2_gene_pane_g1

0xb776,	// (0x00055af7) ai2_gene_pane_g2_ParamLimits

0xb776,	// (0x00055af7) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x00059d68) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x00059d68) ai2_gene_pane_g

0x8852,	// (0x00052bd3) scroll_pane_cp12

0x5a7b,	// (0x0004fdfc) control_pane_t3_ParamLimits

0x5a7b,	// (0x0004fdfc) control_pane_t3

0x97a2,	// (0x00053b23) status_small_pane_g8_ParamLimits

0x97a2,	// (0x00053b23) status_small_pane_g8

0x5c4c,	// (0x0004ffcd) popup_find_window_ParamLimits

0x5e61,	// (0x000501e2) popup_note_image_window_ParamLimits

0x60c1,	// (0x00050442) list_double2_graphic_pane_vc_g1_ParamLimits

0x60c1,	// (0x00050442) list_double2_graphic_pane_vc_g1

0x75f0,	// (0x00051971) list_double2_graphic_pane_vc_g2_ParamLimits

0x75f0,	// (0x00051971) list_double2_graphic_pane_vc_g2

0x75fc,	// (0x0005197d) list_double2_graphic_pane_vc_g3_ParamLimits

0x75fc,	// (0x0005197d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00059b44) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00059b44) list_double2_graphic_pane_vc_g

0x60cd,	// (0x0005044e) list_double2_graphic_pane_vc_t1_ParamLimits

0x60cd,	// (0x0005044e) list_double2_graphic_pane_vc_t1

0x75f0,	// (0x00051971) list_single_heading_pane_vc_g1_ParamLimits

0x75f0,	// (0x00051971) list_single_heading_pane_vc_g1

0x75fc,	// (0x0005197d) list_single_heading_pane_vc_g2_ParamLimits

0x75fc,	// (0x0005197d) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059953) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059953) list_single_heading_pane_vc_g

0x6136,	// (0x000504b7) list_single_heading_pane_vc_t1_ParamLimits

0x6136,	// (0x000504b7) list_single_heading_pane_vc_t1

0x614c,	// (0x000504cd) list_single_heading_pane_vc_t2_ParamLimits

0x614c,	// (0x000504cd) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x00059b65) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x00059b65) list_single_heading_pane_vc_t

0x9127,	// (0x000534a8) list_setting_number_pane_vc_g1_ParamLimits

0x9127,	// (0x000534a8) list_setting_number_pane_vc_g1

0x9133,	// (0x000534b4) list_setting_number_pane_vc_g2_ParamLimits

0x9133,	// (0x000534b4) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x00059b6a) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x00059b6a) list_setting_number_pane_vc_g

0x618a,	// (0x0005050b) list_setting_number_pane_vc_t1_ParamLimits

0x618a,	// (0x0005050b) list_setting_number_pane_vc_t1

0x619e,	// (0x0005051f) list_setting_number_pane_vc_t2_ParamLimits

0x619e,	// (0x0005051f) list_setting_number_pane_vc_t2

0x76b8,	// (0x00051a39) list_setting_number_pane_vc_t3_ParamLimits

0x76b8,	// (0x00051a39) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00059b6f) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00059b6f) list_setting_number_pane_vc_t

0x76e0,	// (0x00051a61) set_value_pane_vc_ParamLimits

0x76e0,	// (0x00051a61) set_value_pane_vc

0xb307,	// (0x00055688) list_double2_graphic_pane_vc_ParamLimits

0xb307,	// (0x00055688) list_double2_graphic_pane_vc

0x77a5,	// (0x00051b26) list_double2_large_graphic_pane_vc_ParamLimits

0x77a5,	// (0x00051b26) list_double2_large_graphic_pane_vc

0xb307,	// (0x00055688) list_double2_pane_vc_ParamLimits

0xb307,	// (0x00055688) list_double2_pane_vc

0xb307,	// (0x00055688) list_double_graphic_heading_pane_vc_ParamLimits

0xb307,	// (0x00055688) list_double_graphic_heading_pane_vc

0xb307,	// (0x00055688) list_double_graphic_pane_vc_ParamLimits

0xb307,	// (0x00055688) list_double_graphic_pane_vc

0xb307,	// (0x00055688) list_double_heading_pane_vc_ParamLimits

0xb307,	// (0x00055688) list_double_heading_pane_vc

0x77b7,	// (0x00051b38) list_double_large_graphic_pane_vc_ParamLimits

0x77b7,	// (0x00051b38) list_double_large_graphic_pane_vc

0xb307,	// (0x00055688) list_double_number_pane_vc_ParamLimits

0xb307,	// (0x00055688) list_double_number_pane_vc

0xb307,	// (0x00055688) list_double_pane_vc_ParamLimits

0xb307,	// (0x00055688) list_double_pane_vc

0xb307,	// (0x00055688) list_double_time_pane_vc_ParamLimits

0xb307,	// (0x00055688) list_double_time_pane_vc

0xb307,	// (0x00055688) list_setting_number_pane_vc_ParamLimits

0xb307,	// (0x00055688) list_setting_number_pane_vc

0xb307,	// (0x00055688) list_setting_pane_vc_ParamLimits

0xb307,	// (0x00055688) list_setting_pane_vc

0xb307,	// (0x00055688) list_single_graphic_heading_pane_vc_ParamLimits

0xb307,	// (0x00055688) list_single_graphic_heading_pane_vc

0xb307,	// (0x00055688) list_single_heading_pane_vc_ParamLimits

0xb307,	// (0x00055688) list_single_heading_pane_vc

0x77d5,	// (0x00051b56) list_single_number_heading_pane_vc_ParamLimits

0x77d5,	// (0x00051b56) list_single_number_heading_pane_vc

0x60c1,	// (0x00050442) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x60c1,	// (0x00050442) list_double_graphic_heading_pane_vc_g1

0x75f0,	// (0x00051971) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x75f0,	// (0x00051971) list_double_graphic_heading_pane_vc_g2

0x75fc,	// (0x0005197d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x75fc,	// (0x0005197d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x00059b44) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00059b44) list_double_graphic_heading_pane_vc_g

0x789b,	// (0x00051c1c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x789b,	// (0x00051c1c) list_double_graphic_heading_pane_vc_t1

0x78b7,	// (0x00051c38) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x78b7,	// (0x00051c38) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x00059d74) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x00059d74) list_double_graphic_heading_pane_vc_t

0x9127,	// (0x000534a8) list_setting_pane_vc_g1_ParamLimits

0x9127,	// (0x000534a8) list_setting_pane_vc_g1

0x9133,	// (0x000534b4) list_setting_pane_vc_g2_ParamLimits

0x9133,	// (0x000534b4) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x00059b6a) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x00059b6a) list_setting_pane_vc_g

0x78cf,	// (0x00051c50) list_setting_pane_vc_t1_ParamLimits

0x78cf,	// (0x00051c50) list_setting_pane_vc_t1

0x78e9,	// (0x00051c6a) list_setting_pane_vc_t2_ParamLimits

0x78e9,	// (0x00051c6a) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x00059db7) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x00059db7) list_setting_pane_vc_t

0x76e0,	// (0x00051a61) set_value_pane_cp_vc_ParamLimits

0x76e0,	// (0x00051a61) set_value_pane_cp_vc

0x75f0,	// (0x00051971) list_single_number_heading_pane_vc_g1_ParamLimits

0x75f0,	// (0x00051971) list_single_number_heading_pane_vc_g1

0x75fc,	// (0x0005197d) list_single_number_heading_pane_vc_g2_ParamLimits

0x75fc,	// (0x0005197d) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059953) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059953) list_single_number_heading_pane_vc_g

0x6136,	// (0x000504b7) list_single_number_heading_pane_vc_t1_ParamLimits

0x6136,	// (0x000504b7) list_single_number_heading_pane_vc_t1

0x7901,	// (0x00051c82) list_single_number_heading_pane_vc_t2_ParamLimits

0x7901,	// (0x00051c82) list_single_number_heading_pane_vc_t2

0x4e33,	// (0x0004f1b4) list_single_number_heading_pane_vc_t3_ParamLimits

0x4e33,	// (0x0004f1b4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x00059dbc) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x00059dbc) list_single_number_heading_pane_vc_t

0x60c1,	// (0x00050442) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x60c1,	// (0x00050442) list_single_graphic_heading_pane_vc_g1

0x75f0,	// (0x00051971) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x75f0,	// (0x00051971) list_single_graphic_heading_pane_vc_g4

0x75fc,	// (0x0005197d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x75fc,	// (0x0005197d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00059b44) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00059b44) list_single_graphic_heading_pane_vc_g

0x6136,	// (0x000504b7) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6136,	// (0x000504b7) list_single_graphic_heading_pane_vc_t1

0x7915,	// (0x00051c96) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7915,	// (0x00051c96) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x00059dc3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x00059dc3) list_single_graphic_heading_pane_vc_t

0x75f0,	// (0x00051971) list_double2_pane_vc_g1_ParamLimits

0x75f0,	// (0x00051971) list_double2_pane_vc_g1

0x75fc,	// (0x0005197d) list_double2_pane_vc_g2_ParamLimits

0x75fc,	// (0x0005197d) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059953) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059953) list_double2_pane_vc_g

0x7773,	// (0x00051af4) list_double2_pane_vc_t1_ParamLimits

0x7773,	// (0x00051af4) list_double2_pane_vc_t1

0x7929,	// (0x00051caa) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7929,	// (0x00051caa) list_double2_large_graphic_pane_vc_g1

0x7935,	// (0x00051cb6) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7935,	// (0x00051cb6) list_double2_large_graphic_pane_vc_g2

0x7941,	// (0x00051cc2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7941,	// (0x00051cc2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa47,	// (0x00059dc8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x00059dc8) list_double2_large_graphic_pane_vc_g

0x794d,	// (0x00051cce) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x794d,	// (0x00051cce) list_double2_large_graphic_pane_vc_t1

0x7963,	// (0x00051ce4) list_double_time_pane_vc_g1_ParamLimits

0x7963,	// (0x00051ce4) list_double_time_pane_vc_g1

0x796f,	// (0x00051cf0) list_double_time_pane_vc_g2_ParamLimits

0x796f,	// (0x00051cf0) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x00059dcf) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x00059dcf) list_double_time_pane_vc_g

0x797b,	// (0x00051cfc) list_double_time_pane_vc_t1_ParamLimits

0x797b,	// (0x00051cfc) list_double_time_pane_vc_t1

0x7999,	// (0x00051d1a) list_double_time_pane_vc_t2_ParamLimits

0x7999,	// (0x00051d1a) list_double_time_pane_vc_t2

0x79e3,	// (0x00051d64) list_double_time_pane_vc_t3_ParamLimits

0x79e3,	// (0x00051d64) list_double_time_pane_vc_t3

0x79f5,	// (0x00051d76) list_double_time_pane_vc_t4_ParamLimits

0x79f5,	// (0x00051d76) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x00059dd4) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x00059dd4) list_double_time_pane_vc_t

0x75f0,	// (0x00051971) list_double_pane_vc_g1_ParamLimits

0x75f0,	// (0x00051971) list_double_pane_vc_g1

0x75fc,	// (0x0005197d) list_double_pane_vc_g2_ParamLimits

0x75fc,	// (0x0005197d) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059953) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059953) list_double_pane_vc_g

0x7a09,	// (0x00051d8a) list_double_pane_vc_t1_ParamLimits

0x7a09,	// (0x00051d8a) list_double_pane_vc_t1

0x7a1b,	// (0x00051d9c) list_double_pane_vc_t2_ParamLimits

0x7a1b,	// (0x00051d9c) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x00059ddd) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x00059ddd) list_double_pane_vc_t

0x75f0,	// (0x00051971) list_double_number_pane_vc_g1_ParamLimits

0x75f0,	// (0x00051971) list_double_number_pane_vc_g1

0x75fc,	// (0x0005197d) list_double_number_pane_vc_g2_ParamLimits

0x75fc,	// (0x0005197d) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059953) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059953) list_double_number_pane_vc_g

0x7a33,	// (0x00051db4) list_double_number_pane_vc_t1_ParamLimits

0x7a33,	// (0x00051db4) list_double_number_pane_vc_t1

0x7a45,	// (0x00051dc6) list_double_number_pane_vc_t2_ParamLimits

0x7a45,	// (0x00051dc6) list_double_number_pane_vc_t2

0x7a57,	// (0x00051dd8) list_double_number_pane_vc_t3_ParamLimits

0x7a57,	// (0x00051dd8) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x00059de2) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x00059de2) list_double_number_pane_vc_t

0x7a6f,	// (0x00051df0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7a6f,	// (0x00051df0) list_double_large_graphic_pane_vc_g1

0x7a8b,	// (0x00051e0c) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7a8b,	// (0x00051e0c) list_double_large_graphic_pane_vc_g2

0x7a9f,	// (0x00051e20) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7a9f,	// (0x00051e20) list_double_large_graphic_pane_vc_g3

0x7aae,	// (0x00051e2f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7aae,	// (0x00051e2f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x00059de9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00059de9) list_double_large_graphic_pane_vc_g

0x7abd,	// (0x00051e3e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7abd,	// (0x00051e3e) list_double_large_graphic_pane_vc_t1

0x7ad7,	// (0x00051e58) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7ad7,	// (0x00051e58) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x00059df2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x00059df2) list_double_large_graphic_pane_vc_t

0x75f0,	// (0x00051971) list_double_heading_pane_vc_g1_ParamLimits

0x75f0,	// (0x00051971) list_double_heading_pane_vc_g1

0x75fc,	// (0x0005197d) list_double_heading_pane_vc_g2_ParamLimits

0x75fc,	// (0x0005197d) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059953) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059953) list_double_heading_pane_vc_g

0x7af9,	// (0x00051e7a) list_double_heading_pane_vc_t1_ParamLimits

0x7af9,	// (0x00051e7a) list_double_heading_pane_vc_t1

0x6136,	// (0x000504b7) list_double_heading_pane_vc_t2_ParamLimits

0x6136,	// (0x000504b7) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x00059df7) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x00059df7) list_double_heading_pane_vc_t

0x7b0d,	// (0x00051e8e) list_double_graphic_pane_vc_g1_ParamLimits

0x7b0d,	// (0x00051e8e) list_double_graphic_pane_vc_g1

0x7b19,	// (0x00051e9a) list_double_graphic_pane_vc_g2_ParamLimits

0x7b19,	// (0x00051e9a) list_double_graphic_pane_vc_g2

0x75f0,	// (0x00051971) list_double_graphic_pane_vc_g3_ParamLimits

0x75f0,	// (0x00051971) list_double_graphic_pane_vc_g3

0x0003,

0xfa7b,	// (0x00059dfc) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x00059dfc) list_double_graphic_pane_vc_g

0x7b36,	// (0x00051eb7) list_double_graphic_pane_vc_t1_ParamLimits

0x7b36,	// (0x00051eb7) list_double_graphic_pane_vc_t1

0x7b54,	// (0x00051ed5) list_double_graphic_pane_vc_t2_ParamLimits

0x7b54,	// (0x00051ed5) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x00059e05) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x00059e05) list_double_graphic_pane_vc_t

0x4943,	// (0x0004ecc4) aid_size_cell_fastswap

0x494b,	// (0x0004eccc) aid_size_cell_touch_ParamLimits

0x494b,	// (0x0004eccc) aid_size_cell_touch

0x4bb0,	// (0x0004ef31) popup_fast_swap_wide_window_ParamLimits

0x4bb0,	// (0x0004ef31) popup_fast_swap_wide_window

0x4cb6,	// (0x0004f037) touch_pane_ParamLimits

0x4cb6,	// (0x0004f037) touch_pane

0x88b4,	// (0x00052c35) button_value_adjust_pane_cp2

0x5234,	// (0x0004f5b5) button_value_adjust_pane_cp4

0x5256,	// (0x0004f5d7) form_field_data_pane_cp2

0x5275,	// (0x0004f5f6) form_field_data_wide_pane_cp2

0x8d20,	// (0x000530a1) bg_scroll_pane_ParamLimits

0x5620,	// (0x0004f9a1) scroll_handle_pane_ParamLimits

0x5634,	// (0x0004f9b5) scroll_sc2_down_pane_ParamLimits

0x5634,	// (0x0004f9b5) scroll_sc2_down_pane

0x8d51,	// (0x000530d2) scroll_sc2_up_pane_ParamLimits

0x8d51,	// (0x000530d2) scroll_sc2_up_pane

0xbe9c,	// (0x0005621d) grid_wheel_folder_pane_g1_ParamLimits

0xbe9c,	// (0x0005621d) grid_wheel_folder_pane_g1

0x5863,	// (0x0004fbe4) clock_nsta_pane_cp2_ParamLimits

0x5863,	// (0x0004fbe4) clock_nsta_pane_cp2

0x8a9e,	// (0x00052e1f) listscroll_midp_pane_ParamLimits

0x9538,	// (0x000538b9) midp_canvas_pane

0x981c,	// (0x00053b9d) nsta_clock_indic_pane

0x9850,	// (0x00053bd1) listscroll_form_pane_vc

0x9858,	// (0x00053bd9) listscroll_set_pane_vc_ParamLimits

0x9858,	// (0x00053bd9) listscroll_set_pane_vc

0x9959,	// (0x00053cda) clock_nsta_pane

0x99ce,	// (0x00053d4f) indicator_nsta_pane

0x9ca6,	// (0x00054027) bg_popup_sub_pane_cp2_ParamLimits

0x9cba,	// (0x0005403b) find_pane_cp2_ParamLimits

0x9cba,	// (0x0005403b) find_pane_cp2

0x9cd0,	// (0x00054051) grid_toobar_pane_ParamLimits

0x9db0,	// (0x00054131) list_form_gen_pane_vc_ParamLimits

0x9db0,	// (0x00054131) list_form_gen_pane_vc

0x9dc6,	// (0x00054147) scroll_pane_cp8_vc_ParamLimits

0x9dc6,	// (0x00054147) scroll_pane_cp8_vc

0x9e42,	// (0x000541c3) data_form_wide_pane_vc_ParamLimits

0x9e42,	// (0x000541c3) data_form_wide_pane_vc

0x9e4e,	// (0x000541cf) form_field_data_wide_pane_vc_g1

0x9e56,	// (0x000541d7) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e56,	// (0x000541d7) form_field_data_wide_pane_vc_t1

0x88c8,	// (0x00052c49) input_focus_pane_cp6_vc_ParamLimits

0x88c8,	// (0x00052c49) input_focus_pane_cp6_vc

0xa194,	// (0x00054515) list_midp_pane_ParamLimits

0xa1a0,	// (0x00054521) scroll_pane_cp16_ParamLimits

0xa1a0,	// (0x00054521) scroll_pane_cp16

0xa1ee,	// (0x0005456f) button_value_adjust_pane_ParamLimits

0xa1ee,	// (0x0005456f) button_value_adjust_pane

0xb169,	// (0x000554ea) button_value_adjust_pane_cp6_ParamLimits

0xb169,	// (0x000554ea) button_value_adjust_pane_cp6

0xb28b,	// (0x0005560c) settings_code_pane_cp_ParamLimits

0xb28b,	// (0x0005560c) settings_code_pane_cp

0x7f78,	// (0x000522f9) cell_touch_pane_g1

0x7f78,	// (0x000522f9) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00059a89) cell_touch_pane_g

0xb7f5,	// (0x00055b76) cell_touch_pane_cp_ParamLimits

0xb7f5,	// (0x00055b76) cell_touch_pane_cp

0xb805,	// (0x00055b86) cell_touch_pane_ParamLimits

0xb805,	// (0x00055b86) cell_touch_pane

0x7f78,	// (0x000522f9) scroll_sc2_down_pane_g1

0x7f78,	// (0x000522f9) scroll_sc2_up_pane_g1

0x7f82,	// (0x00052303) bg_set_opt_pane_cp4_vc

0xb816,	// (0x00055b97) list_set_graphic_pane_vc_g1_ParamLimits

0xb816,	// (0x00055b97) list_set_graphic_pane_vc_g1

0xa37b,	// (0x000546fc) list_set_graphic_pane_vc_g2_ParamLimits

0xa37b,	// (0x000546fc) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x00059d79) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x00059d79) list_set_graphic_pane_vc_g

0xb822,	// (0x00055ba3) text_primary_small_cp13_vc_ParamLimits

0xb822,	// (0x00055ba3) text_primary_small_cp13_vc

0xb83a,	// (0x00055bbb) list_set_graphic_pane_vc_ParamLimits

0xb83a,	// (0x00055bbb) list_set_graphic_pane_vc

0x7f82,	// (0x00052303) input_focus_pane_cp2_vc

0x7f78,	// (0x000522f9) setting_code_pane_vc_g1

0x80ad,	// (0x0005242e) setting_code_pane_vc_t1

0xb84e,	// (0x00055bcf) set_text_pane_vc_t1_ParamLimits

0xb84e,	// (0x00055bcf) set_text_pane_vc_t1

0x7f82,	// (0x00052303) input_focus_pane_cp1_vc

0xb86b,	// (0x00055bec) list_set_text_pane_vc

0x7f78,	// (0x000522f9) setting_text_pane_vc_g1

0x7f82,	// (0x00052303) bg_set_opt_pane_cp2_vc

0x80a4,	// (0x00052425) setting_slider_graphic_pane_vc_g1

0xb875,	// (0x00055bf6) setting_slider_graphic_pane_vc_t1

0xb885,	// (0x00055c06) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x00059d7e) setting_slider_graphic_pane_vc_t

0xb895,	// (0x00055c16) slider_set_pane_cp_vc

0xb89d,	// (0x00055c1e) slider_set_pane_vc_g1

0xb8a6,	// (0x00055c27) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x00059d83) slider_set_pane_vc_g

0x8917,	// (0x00052c98) set_opt_bg_pane_g1_copy1

0x891f,	// (0x00052ca0) set_opt_bg_pane_g2_copy1

0xb8d2,	// (0x00055c53) set_opt_bg_pane_g3_copy1

0x892f,	// (0x00052cb0) set_opt_bg_pane_g4_copy1

0x8937,	// (0x00052cb8) set_opt_bg_pane_g5_copy1

0x893f,	// (0x00052cc0) set_opt_bg_pane_g6_copy1

0xb8da,	// (0x00055c5b) set_opt_bg_pane_g7_copy1

0xb8e4,	// (0x00055c65) set_opt_bg_pane_g8_copy1

0xb8ec,	// (0x00055c6d) set_opt_bg_pane_g9_copy1

0x7f82,	// (0x00052303) bg_set_opt_pane_cp_vc

0xb8f4,	// (0x00055c75) setting_slider_pane_vc_t1

0xb903,	// (0x00055c84) setting_slider_pane_vc_t2

0xb913,	// (0x00055c94) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x00059d92) setting_slider_pane_vc_t

0xb923,	// (0x00055ca4) slider_set_pane_vc

0x6255,	// (0x000505d6) volume_set_pane_vc_g1

0x6544,	// (0x000508c5) volume_set_pane_vc_g2

0x654d,	// (0x000508ce) volume_set_pane_vc_g3

0x6556,	// (0x000508d7) volume_set_pane_vc_g4

0x655f,	// (0x000508e0) volume_set_pane_vc_g5

0x6568,	// (0x000508e9) volume_set_pane_vc_g6

0x6282,	// (0x00050603) volume_set_pane_vc_g7

0x6571,	// (0x000508f2) volume_set_pane_vc_g8

0x657a,	// (0x000508fb) volume_set_pane_vc_g9

0x6583,	// (0x00050904) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x00059d99) volume_set_pane_vc_g

0xb92b,	// (0x00055cac) volume_set_pane_vc

0xb933,	// (0x00055cb4) button_value_adjust_pane_cp1_vc

0xb93d,	// (0x00055cbe) list_highlight_pane_cp2_vc

0xb946,	// (0x00055cc7) list_set_pane_vc_ParamLimits

0xb946,	// (0x00055cc7) list_set_pane_vc

0xb9a4,	// (0x00055d25) main_pane_set_vc_t1_ParamLimits

0xb9a4,	// (0x00055d25) main_pane_set_vc_t1

0xb9b9,	// (0x00055d3a) main_pane_set_vc_t2_ParamLimits

0xb9b9,	// (0x00055d3a) main_pane_set_vc_t2

0xb9cb,	// (0x00055d4c) main_pane_set_vc_t3_ParamLimits

0xb9cb,	// (0x00055d4c) main_pane_set_vc_t3

0xb9dd,	// (0x00055d5e) main_pane_set_vc_t4_ParamLimits

0xb9dd,	// (0x00055d5e) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x00059dae) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x00059dae) main_pane_set_vc_t

0xb9ef,	// (0x00055d70) setting_code_pane_vc_ParamLimits

0xb9ef,	// (0x00055d70) setting_code_pane_vc

0xb9fe,	// (0x00055d7f) setting_slider_graphic_pane_vc

0xb9fe,	// (0x00055d7f) setting_slider_pane_vc

0xb9fe,	// (0x00055d7f) setting_text_pane_vc

0xb9fe,	// (0x00055d7f) setting_volume_pane_vc

0xba06,	// (0x00055d87) scroll_pane_cp121_vc

0x88a2,	// (0x00052c23) set_content_pane_vc

0xba0e,	// (0x00055d8f) button_value_adjust_pane_g1

0xba17,	// (0x00055d98) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x00059e0a) button_value_adjust_pane_g

0xba20,	// (0x00055da1) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba20,	// (0x00055da1) form_field_slider_wide_pane_vc_t1

0xba34,	// (0x00055db5) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba34,	// (0x00055db5) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x00059e0f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x00059e0f) form_field_slider_wide_pane_vc_t

0x82dd,	// (0x0005265e) input_focus_pane_cp10_vc_ParamLimits

0x82dd,	// (0x0005265e) input_focus_pane_cp10_vc

0xba60,	// (0x00055de1) slider_cont_pane_cp1_vc_ParamLimits

0xba60,	// (0x00055de1) slider_cont_pane_cp1_vc

0xba70,	// (0x00055df1) slider_form_pane_g1_cp2

0xb8a6,	// (0x00055c27) slider_form_pane_g2_cp2

0xba9d,	// (0x00055e1e) form_field_slider_pane_vc_t3

0xbaab,	// (0x00055e2c) form_field_slider_pane_vc_t4

0xbab9,	// (0x00055e3a) slider_form_pane_vc_ParamLimits

0xbab9,	// (0x00055e3a) slider_form_pane_vc

0xbac6,	// (0x00055e47) form_field_slider_pane_vc_t1_ParamLimits

0xbac6,	// (0x00055e47) form_field_slider_pane_vc_t1

0xba34,	// (0x00055db5) form_field_slider_pane_vc_t2_ParamLimits

0xba34,	// (0x00055db5) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x00059e21) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x00059e21) form_field_slider_pane_vc_t

0x82dd,	// (0x0005265e) input_focus_pane_cp9_vc_ParamLimits

0x82dd,	// (0x0005265e) input_focus_pane_cp9_vc

0xbae2,	// (0x00055e63) slider_cont_pane_vc_ParamLimits

0xbae2,	// (0x00055e63) slider_cont_pane_vc

0xbaf4,	// (0x00055e75) list_form_graphic_pane_cp_vc_ParamLimits

0xbaf4,	// (0x00055e75) list_form_graphic_pane_cp_vc

0x9e4e,	// (0x000541cf) form_field_popup_wide_pane_vc_g1

0xbb09,	// (0x00055e8a) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbb09,	// (0x00055e8a) form_field_popup_wide_pane_vc_t1

0x88c8,	// (0x00052c49) input_focus_pane_cp8_vc_ParamLimits

0x88c8,	// (0x00052c49) input_focus_pane_cp8_vc

0xbb4e,	// (0x00055ecf) list_form_wide_pane_vc_ParamLimits

0xbb4e,	// (0x00055ecf) list_form_wide_pane_vc

0xbb5a,	// (0x00055edb) list_form_graphic_pane_vc_g1

0xbb62,	// (0x00055ee3) list_form_graphic_pane_vc_t1_ParamLimits

0xbb62,	// (0x00055ee3) list_form_graphic_pane_vc_t1

0x8062,	// (0x000523e3) list_highlight_pane_cp5_vc_ParamLimits

0x8062,	// (0x000523e3) list_highlight_pane_cp5_vc

0xbb7e,	// (0x00055eff) list_form_graphic_pane_vc_ParamLimits

0xbb7e,	// (0x00055eff) list_form_graphic_pane_vc

0x9e4e,	// (0x000541cf) form_field_popup_pane_vc_g1

0xbb94,	// (0x00055f15) form_field_popup_pane_vc_t1_ParamLimits

0xbb94,	// (0x00055f15) form_field_popup_pane_vc_t1

0x88c8,	// (0x00052c49) input_focus_pane_cp7_vc_ParamLimits

0x88c8,	// (0x00052c49) input_focus_pane_cp7_vc

0xbbab,	// (0x00055f2c) list_form_pane_vc_ParamLimits

0xbbab,	// (0x00055f2c) list_form_pane_vc

0xbbb7,	// (0x00055f38) data_form_pane_vc_t1_ParamLimits

0xbbb7,	// (0x00055f38) data_form_pane_vc_t1

0x8917,	// (0x00052c98) input_focus_pane_vc_g1

0x891f,	// (0x00052ca0) input_focus_pane_vc_g2

0x8927,	// (0x00052ca8) input_focus_pane_vc_g3

0x892f,	// (0x00052cb0) input_focus_pane_vc_g4

0x8937,	// (0x00052cb8) input_focus_pane_vc_g5

0x893f,	// (0x00052cc0) input_focus_pane_vc_g6

0x8947,	// (0x00052cc8) input_focus_pane_vc_g7

0x894f,	// (0x00052cd0) input_focus_pane_vc_g8

0x8957,	// (0x00052cd8) input_focus_pane_vc_g9

0x7f78,	// (0x000522f9) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00059a12) input_focus_pane_vc_g

0x9e42,	// (0x000541c3) data_form_pane_vc_ParamLimits

0x9e42,	// (0x000541c3) data_form_pane_vc

0x9e4e,	// (0x000541cf) form_field_data_pane_vc_g1

0xbbd2,	// (0x00055f53) form_field_data_pane_vc_t1_ParamLimits

0xbbd2,	// (0x00055f53) form_field_data_pane_vc_t1

0x88c8,	// (0x00052c49) input_focus_pane_vc_ParamLimits

0x88c8,	// (0x00052c49) input_focus_pane_vc

0xbbec,	// (0x00055f6d) button_value_adjust_pane_cp3_vc

0xbbf4,	// (0x00055f75) button_value_adjust_pane_cp5_vc

0xbbfc,	// (0x00055f7d) form_field_data_pane_vc_ParamLimits

0xbbfc,	// (0x00055f7d) form_field_data_pane_vc

0xbc13,	// (0x00055f94) form_field_data_pane_vc_cp2

0xbc1b,	// (0x00055f9c) form_field_data_wide_pane_vc_ParamLimits

0xbc1b,	// (0x00055f9c) form_field_data_wide_pane_vc

0xbc31,	// (0x00055fb2) form_field_data_wide_pane_vc_cp2

0xbc39,	// (0x00055fba) form_field_popup_pane_vc_ParamLimits

0xbc39,	// (0x00055fba) form_field_popup_pane_vc

0xbc50,	// (0x00055fd1) form_field_popup_wide_pane_vc_ParamLimits

0xbc50,	// (0x00055fd1) form_field_popup_wide_pane_vc

0xbc66,	// (0x00055fe7) form_field_slider_pane_vc_ParamLimits

0xbc66,	// (0x00055fe7) form_field_slider_pane_vc

0xbc79,	// (0x00055ffa) form_field_slider_wide_pane_vc_ParamLimits

0xbc79,	// (0x00055ffa) form_field_slider_wide_pane_vc

0xbc8c,	// (0x0005600d) grid_touch_1_pane_ParamLimits

0xbc8c,	// (0x0005600d) grid_touch_1_pane

0xbc98,	// (0x00056019) grid_touch_2_pane_ParamLimits

0xbc98,	// (0x00056019) grid_touch_2_pane

0x97e7,	// (0x00053b68) touch_pane_g1_ParamLimits

0x97e7,	// (0x00053b68) touch_pane_g1

0xbcb0,	// (0x00056031) cell_app_pane_cp_wide_ParamLimits

0xbcb0,	// (0x00056031) cell_app_pane_cp_wide

0xbcc1,	// (0x00056042) grid_popup_fast_wide_pane_ParamLimits

0xbcc1,	// (0x00056042) grid_popup_fast_wide_pane

0xbcd5,	// (0x00056056) scroll_pane_cp19_ParamLimits

0xbcd5,	// (0x00056056) scroll_pane_cp19

0x7f82,	// (0x00052303) bg_popup_window_pane_cp20

0xbce9,	// (0x0005606a) listscroll_popup_fast_wide_pane

0x8062,	// (0x000523e3) grid_indicator_nsta_pane

0xbcf1,	// (0x00056072) clock_nsta_pane_g1

0xbcfa,	// (0x0005607b) clock_nsta_pane_t1

0xbd16,	// (0x00056097) cell_indicator_nsta_pane_ParamLimits

0xbd16,	// (0x00056097) cell_indicator_nsta_pane

0xbd47,	// (0x000560c8) cell_indicator_nsta_pane_g1

0xbd55,	// (0x000560d6) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x00059e32) cell_indicator_nsta_pane_g

0xbd62,	// (0x000560e3) clock_nsta_pane_cp

0xbd6a,	// (0x000560eb) indicator_nsta_pane_cp

0xbd72,	// (0x000560f3) nsta_clock_indic_pane_g1

0x812b,	// (0x000524ac) grid_indicator_pane

0x8e46,	// (0x000531c7) scroll_pane_cp29

0x57b2,	// (0x0004fb33) indicator_nsta_pane_cp2_ParamLimits

0x57b2,	// (0x0004fb33) indicator_nsta_pane_cp2

0x8062,	// (0x000523e3) main_apps_wheel_pane

0xa079,	// (0x000543fa) form_midp_field_text_pane_ParamLimits

0xa1c0,	// (0x00054541) scroll_bar_cp050_ParamLimits

0xbdd3,	// (0x00056154) cell_indicator_pane_ParamLimits

0xbdd3,	// (0x00056154) cell_indicator_pane

0xbdee,	// (0x0005616f) cell_indicator_pane_g1

0xbdf8,	// (0x00056179) grid_wheel_folder_pane_ParamLimits

0xbdf8,	// (0x00056179) grid_wheel_folder_pane

0xbe0e,	// (0x0005618f) list_wheel_apps_pane_ParamLimits

0xbe0e,	// (0x0005618f) list_wheel_apps_pane

0xbe1f,	// (0x000561a0) main_apps_wheel_pane_g1_ParamLimits

0xbe1f,	// (0x000561a0) main_apps_wheel_pane_g1

0xbe33,	// (0x000561b4) main_apps_wheel_pane_g2_ParamLimits

0xbe33,	// (0x000561b4) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x00059e4e) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x00059e4e) main_apps_wheel_pane_g

0xbe4b,	// (0x000561cc) main_apps_wheel_pane_t1_ParamLimits

0xbe4b,	// (0x000561cc) main_apps_wheel_pane_t1

0xbe6e,	// (0x000561ef) list_wheel_apps_pane_g1

0xbe76,	// (0x000561f7) list_wheel_apps_pane_g2

0xbe7e,	// (0x000561ff) list_wheel_apps_pane_g3

0xbe88,	// (0x00056209) list_wheel_apps_pane_g4

0xbe92,	// (0x00056213) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x00059e53) list_wheel_apps_pane_g

0x93b0,	// (0x00053731) navi_icon_text_pane

0x988c,	// (0x00053c0d) aid_fill_nsta

0xbeb5,	// (0x00056236) navi_icon_text_pane_g1

0xbec1,	// (0x00056242) navi_icon_text_pane_t1

0x9247,	// (0x000535c8) list_set_graphic_pane_t1_ParamLimits

0x9247,	// (0x000535c8) list_set_graphic_pane_t1

0xa91e,	// (0x00054c9f) popup_midp_note_alarm_window_t6_ParamLimits

0xa91e,	// (0x00054c9f) popup_midp_note_alarm_window_t6

0xa930,	// (0x00054cb1) popup_midp_note_alarm_window_t7_ParamLimits

0xa930,	// (0x00054cb1) popup_midp_note_alarm_window_t7

0xa942,	// (0x00054cc3) popup_midp_note_alarm_window_t8_ParamLimits

0xa942,	// (0x00054cc3) popup_midp_note_alarm_window_t8

0xa954,	// (0x00054cd5) popup_midp_note_alarm_window_t9_ParamLimits

0xa954,	// (0x00054cd5) popup_midp_note_alarm_window_t9

0xa966,	// (0x00054ce7) popup_midp_note_alarm_window_t10_ParamLimits

0xa966,	// (0x00054ce7) popup_midp_note_alarm_window_t10

0xa978,	// (0x00054cf9) popup_midp_note_alarm_window_t11_ParamLimits

0xa978,	// (0x00054cf9) popup_midp_note_alarm_window_t11

0xa98a,	// (0x00054d0b) scroll_pane_cp17_ParamLimits

0xa98a,	// (0x00054d0b) scroll_pane_cp17

0x6255,	// (0x000505d6) volume_small_pane_cp_g1

0x658c,	// (0x0005090d) volume_small_pane_cp_g2

0x6595,	// (0x00050916) volume_small_pane_cp_g3

0x6267,	// (0x000505e8) volume_small_pane_cp_g4

0x659e,	// (0x0005091f) volume_small_pane_cp_g5

0x655f,	// (0x000508e0) volume_small_pane_cp_g6

0x6279,	// (0x000505fa) volume_small_pane_cp_g7

0x65a7,	// (0x00050928) volume_small_pane_cp_g8

0x65b0,	// (0x00050931) volume_small_pane_cp_g9

0x628b,	// (0x0005060c) volume_small_pane_cp_g10

0x9605,	// (0x00053986) midp_ticker_pane_g1_ParamLimits

0x9611,	// (0x00053992) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00059ade) midp_ticker_pane_g_ParamLimits

0x961d,	// (0x0005399e) midp_ticker_pane_t1_ParamLimits

0x98a2,	// (0x00053c23) aid_fill_nsta_2

0xa1ac,	// (0x0005452d) list_form2_midp_pane

0xb2d6,	// (0x00055657) midp_editing_number_pane_ParamLimits

0xb2e5,	// (0x00055666) midp_ticker_pane_ParamLimits

0xbed3,	// (0x00056254) form2_midp_field_pane

0xbef7,	// (0x00056278) scroll_pane_cp51

0xbf17,	// (0x00056298) form2_midp_button_pane_ParamLimits

0xbf17,	// (0x00056298) form2_midp_button_pane

0xbf29,	// (0x000562aa) form2_midp_content_pane_ParamLimits

0xbf29,	// (0x000562aa) form2_midp_content_pane

0xbf43,	// (0x000562c4) form2_midp_field_choice_group_pane

0xbf4b,	// (0x000562cc) form2_midp_field_pane_g1

0xbf53,	// (0x000562d4) form2_midp_field_pane_g2

0xbf5b,	// (0x000562dc) form2_midp_field_pane_g3

0xbf63,	// (0x000562e4) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x00059e78) form2_midp_field_pane_g

0xbf6b,	// (0x000562ec) form2_midp_gauge_slider_pane

0xbf73,	// (0x000562f4) form2_midp_gauge_wait_pane

0xbf7b,	// (0x000562fc) form2_midp_image_pane_ParamLimits

0xbf7b,	// (0x000562fc) form2_midp_image_pane

0xbf96,	// (0x00056317) form2_midp_label_pane_ParamLimits

0xbf96,	// (0x00056317) form2_midp_label_pane

0xbfaf,	// (0x00056330) form2_midp_label_pane_cp_ParamLimits

0xbfaf,	// (0x00056330) form2_midp_label_pane_cp

0xbfd0,	// (0x00056351) form2_midp_string_pane_ParamLimits

0xbfd0,	// (0x00056351) form2_midp_string_pane

0x7b7e,	// (0x00051eff) form2_midp_text_pane_ParamLimits

0x7b7e,	// (0x00051eff) form2_midp_text_pane

0xbfe2,	// (0x00056363) form2_midp_time_pane

0xbff2,	// (0x00056373) input_focus_pane_cp51_ParamLimits

0xbff2,	// (0x00056373) input_focus_pane_cp51

0xc00a,	// (0x0005638b) form2_midp_label_pane_t1_ParamLimits

0xc00a,	// (0x0005638b) form2_midp_label_pane_t1

0x7b99,	// (0x00051f1a) form2_mdip_text_pane_t1_ParamLimits

0x7b99,	// (0x00051f1a) form2_mdip_text_pane_t1

0x7bb5,	// (0x00051f36) form2_midp_time_pane_t1

0xc052,	// (0x000563d3) form2_midp_gauge_slider_pane_t1

0xc064,	// (0x000563e5) form2_midp_gauge_slider_pane_t2

0xc076,	// (0x000563f7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x00059e81) form2_midp_gauge_slider_pane_t

0xc088,	// (0x00056409) form2_midp_slider_pane

0xc094,	// (0x00056415) form2_midp_gauge_wait_pane_t1

0xc0a2,	// (0x00056423) form2_midp_wait_pane_ParamLimits

0xc0a2,	// (0x00056423) form2_midp_wait_pane

0xc0ce,	// (0x0005644f) list_single_2graphic_pane_cp4_ParamLimits

0xc0ce,	// (0x0005644f) list_single_2graphic_pane_cp4

0x9ebd,	// (0x0005423e) list_single_midp_graphic_pane_cp_ParamLimits

0x9ebd,	// (0x0005423e) list_single_midp_graphic_pane_cp

0x7f82,	// (0x00052303) list_highlight_pane_cp20

0xc0fc,	// (0x0005647d) list_single_2graphic_pane_g1_cp4

0xb6fa,	// (0x00055a7b) list_single_2graphic_pane_g2_cp4

0xc104,	// (0x00056485) list_single_2graphic_pane_t1_cp4

0x8062,	// (0x000523e3) list_highlight_pane_cp21

0xc113,	// (0x00056494) list_single_midp_graphic_pane_g4_cp

0xc122,	// (0x000564a3) list_single_midp_graphic_pane_t1_cp

0xc137,	// (0x000564b8) form2_mdip_string_pane_t1_ParamLimits

0xc137,	// (0x000564b8) form2_mdip_string_pane_t1

0x7f82,	// (0x00052303) bg_wml_button_pane_cp2

0x7f78,	// (0x000522f9) form2_midp_image_pane_g1

0x765e,	// (0x000519df) list_double_large_graphic_pane_g5_ParamLimits

0x765e,	// (0x000519df) list_double_large_graphic_pane_g5

0x8a9e,	// (0x00052e1f) midp_form_pane_ParamLimits

0x8062,	// (0x000523e3) main_apps_wheel_pane_ParamLimits

0x5e87,	// (0x00050208) popup_preview_window_ParamLimits

0x5e87,	// (0x00050208) popup_preview_window

0x603e,	// (0x000503bf) popup_touch_info_window_ParamLimits

0x603e,	// (0x000503bf) popup_touch_info_window

0x605c,	// (0x000503dd) popup_touch_menu_window_ParamLimits

0x605c,	// (0x000503dd) popup_touch_menu_window

0x7f6e,	// (0x000522ef) bg_popup_sub_pane_cp6

0xc25a,	// (0x000565db) list_touch_menu_pane

0xc262,	// (0x000565e3) list_single_touch_menu_pane_ParamLimits

0xc262,	// (0x000565e3) list_single_touch_menu_pane

0xc276,	// (0x000565f7) list_single_touch_menu_pane_t1

0x8062,	// (0x000523e3) bg_popup_sub_pane_cp7_ParamLimits

0x8062,	// (0x000523e3) bg_popup_sub_pane_cp7

0xc284,	// (0x00056605) heading_sub_pane

0xc28c,	// (0x0005660d) list_touch_info_pane_ParamLimits

0xc28c,	// (0x0005660d) list_touch_info_pane

0xc29b,	// (0x0005661c) list_single_touch_info_pane_ParamLimits

0xc29b,	// (0x0005661c) list_single_touch_info_pane

0xc2ad,	// (0x0005662e) list_single_touch_info_pane_t1

0xc2bb,	// (0x0005663c) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x00059e8f) list_single_touch_info_pane_t

0x9530,	// (0x000538b1) bg_popup_heading_pane_cp

0xc2c9,	// (0x0005664a) heading_sub_pane_t1

0x9ddc,	// (0x0005415d) bg_popup_preview_window_pane_cp_ParamLimits

0x9ddc,	// (0x0005415d) bg_popup_preview_window_pane_cp

0xc284,	// (0x00056605) heading_preview_pane

0xc28c,	// (0x0005660d) list_preview_pane_ParamLimits

0xc28c,	// (0x0005660d) list_preview_pane

0xc2d7,	// (0x00056658) popup_preview_window_g1

0xc29b,	// (0x0005661c) list_single_preview_pane_ParamLimits

0xc29b,	// (0x0005661c) list_single_preview_pane

0xc2df,	// (0x00056660) list_single_preview_pane_g1

0xc2e7,	// (0x00056668) list_single_preview_pane_t1

0xc2ad,	// (0x0005662e) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x00059e94) list_single_preview_pane_t

0xc2f5,	// (0x00056676) bg_popup_heading_pane_cp2_ParamLimits

0xc2f5,	// (0x00056676) bg_popup_heading_pane_cp2

0xc30b,	// (0x0005668c) heading_preview_pane_g1

0xc313,	// (0x00056694) heading_preview_pane_t1_ParamLimits

0xc313,	// (0x00056694) heading_preview_pane_t1

0x814e,	// (0x000524cf) soft_indicator_pane_t1_ParamLimits

0x882f,	// (0x00052bb0) scroll_pane_ParamLimits

0x8d3f,	// (0x000530c0) scroll_sc2_left_pane

0x8d48,	// (0x000530c9) scroll_sc2_right_pane

0x8d67,	// (0x000530e8) scroll_bg_pane_g1_ParamLimits

0x8d7c,	// (0x000530fd) scroll_bg_pane_g2_ParamLimits

0x8d94,	// (0x00053115) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00059a69) scroll_bg_pane_g_ParamLimits

0x8d67,	// (0x000530e8) scroll_handle_pane_g1_ParamLimits

0x8db6,	// (0x00053137) scroll_handle_pane_g2_ParamLimits

0x8d94,	// (0x00053115) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00059a70) scroll_handle_pane_g_ParamLimits

0x5b0e,	// (0x0004fe8f) popup_choice_list_window_ParamLimits

0x5b0e,	// (0x0004fe8f) popup_choice_list_window

0x9cb2,	// (0x00054033) choice_list_pane

0x9d34,	// (0x000540b5) cell_toolbar_pane_t1

0x9d5c,	// (0x000540dd) toolbar_button_pane_ParamLimits

0xae44,	// (0x000551c5) ai_gene_pane_1_t2_ParamLimits

0xae44,	// (0x000551c5) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x00059c93) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x00059c93) ai_gene_pane_1_t

0xc330,	// (0x000566b1) scroll_sc2_left_pane_g1

0xc330,	// (0x000566b1) scroll_sc2_right_pane_g1

0x986a,	// (0x00053beb) bg_popup_sub_pane_cp10

0xc33a,	// (0x000566bb) list_choice_list_pane

0xc353,	// (0x000566d4) list_single_choice_list_pane_ParamLimits

0xc353,	// (0x000566d4) list_single_choice_list_pane

0xc366,	// (0x000566e7) list_single_choice_list_pane_g1

0x8a4e,	// (0x00052dcf) list_single_choice_list_pane_t1_ParamLimits

0x8a4e,	// (0x00052dcf) list_single_choice_list_pane_t1

0xc36e,	// (0x000566ef) choice_list_pane_g1

0xc376,	// (0x000566f7) choice_list_pane_t1

0x7f6e,	// (0x000522ef) input_focus_pane_cp11

0x8c22,	// (0x00052fa3) title_pane_stacon_g2_ParamLimits

0x8c22,	// (0x00052fa3) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00059a4f) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00059a4f) title_pane_stacon_g

0x9530,	// (0x000538b1) cursor_press_pane

0x5bb6,	// (0x0004ff37) popup_fep_hwr_window_ParamLimits

0x5bb6,	// (0x0004ff37) popup_fep_hwr_window

0x5c2e,	// (0x0004ffaf) popup_fep_vkb_window_ParamLimits

0x5c2e,	// (0x0004ffaf) popup_fep_vkb_window

0xc384,	// (0x00056705) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x00059ebd) fep_vkb_side_pane_g_ParamLimits

0x65f2,	// (0x00050973) fep_hwr_candidate_pane_ParamLimits

0x65f2,	// (0x00050973) fep_hwr_candidate_pane

0x661c,	// (0x0005099d) fep_hwr_side_pane_ParamLimits

0x661c,	// (0x0005099d) fep_hwr_side_pane

0x663c,	// (0x000509bd) fep_hwr_top_pane_ParamLimits

0x663c,	// (0x000509bd) fep_hwr_top_pane

0x6654,	// (0x000509d5) fep_hwr_write_pane_ParamLimits

0x6654,	// (0x000509d5) fep_hwr_write_pane

0xfb3c,	// (0x00059ebd) fep_vkb_side_pane_g

0xc38c,	// (0x0005670d) fep_hwr_top_pane_g1

0xc39e,	// (0x0005671f) fep_hwr_top_pane_g2

0x668e,	// (0x00050a0f) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x00059e99) fep_hwr_top_pane_g

0x66a3,	// (0x00050a24) fep_hwr_top_text_pane

0x8f0c,	// (0x0005328d) fep_hwr_top_text_pane_g1

0xc3d4,	// (0x00056755) fep_hwr_top_text_pane_t1

0x6799,	// (0x00050b1a) fep_hwr_candidate_pane_g1

0xc617,	// (0x00056998) fep_vkb_keypad_pane_g3_ParamLimits

0xc617,	// (0x00056998) fep_vkb_keypad_pane_g3

0xc63f,	// (0x000569c0) fep_vkb_keypad_pane_g4_ParamLimits

0xc63f,	// (0x000569c0) fep_vkb_keypad_pane_g4

0xc6ae,	// (0x00056a2f) fep_vkb_bottom_pane_g2_ParamLimits

0xc6ae,	// (0x00056a2f) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x00059ec4) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x00059ec4) fep_vkb_bottom_pane_g

0xc330,	// (0x000566b1) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x00059ece) cell_vkb_side_pane_g

0xc739,	// (0x00056aba) cell_vkb_side_pane_t1

0xc747,	// (0x00056ac8) cell_vkb_side_pane_t1_copy1

0xc330,	// (0x000566b1) bg_fep_vkb_candidate_pane_g2

0xc873,	// (0x00056bf4) cell_vkb_candidate_pane_ParamLimits

0xc3e2,	// (0x00056763) aid_size_cell_vkb_ParamLimits

0xc3e2,	// (0x00056763) aid_size_cell_vkb

0xc873,	// (0x00056bf4) cell_vkb_candidate_pane

0x67c0,	// (0x00050b41) bg_popup_fep_shadow_pane_g1

0xc46e,	// (0x000567ef) fep_vkb_bottom_pane_ParamLimits

0xc46e,	// (0x000567ef) fep_vkb_bottom_pane

0xc4a4,	// (0x00056825) fep_vkb_candidate_pane_ParamLimits

0xc4a4,	// (0x00056825) fep_vkb_candidate_pane

0xc4c0,	// (0x00056841) fep_vkb_keypad_pane_ParamLimits

0xc4c0,	// (0x00056841) fep_vkb_keypad_pane

0xc4ff,	// (0x00056880) fep_vkb_side_pane_ParamLimits

0xc4ff,	// (0x00056880) fep_vkb_side_pane

0xc53b,	// (0x000568bc) fep_vkb_top_pane_ParamLimits

0xc53b,	// (0x000568bc) fep_vkb_top_pane

0xc570,	// (0x000568f1) fep_vkb_top_pane_g1_ParamLimits

0xc570,	// (0x000568f1) fep_vkb_top_pane_g1

0xc57f,	// (0x00056900) fep_vkb_top_pane_g2_ParamLimits

0xc57f,	// (0x00056900) fep_vkb_top_pane_g2

0xc58e,	// (0x0005690f) fep_vkb_top_pane_g3_ParamLimits

0xc58e,	// (0x0005690f) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x00059eb4) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x00059eb4) fep_vkb_top_pane_g

0xc5ac,	// (0x0005692d) fep_vkb_top_text_pane_ParamLimits

0xc5ac,	// (0x0005692d) fep_vkb_top_text_pane

0xc5bd,	// (0x0005693e) fep_vkb_side_pane_g1_ParamLimits

0xc5bd,	// (0x0005693e) fep_vkb_side_pane_g1

0xc606,	// (0x00056987) grid_vkb_side_pane_ParamLimits

0xc606,	// (0x00056987) grid_vkb_side_pane

0x67c8,	// (0x00050b49) bg_popup_fep_shadow_pane_g2

0x67d1,	// (0x00050b52) bg_popup_fep_shadow_pane_g3

0x67d9,	// (0x00050b5a) bg_popup_fep_shadow_pane_g4

0x67e2,	// (0x00050b63) bg_popup_fep_shadow_pane_g5

0x67ec,	// (0x00050b6d) bg_popup_fep_shadow_pane_g6

0x67f4,	// (0x00050b75) bg_popup_fep_shadow_pane_g7

0x892f,	// (0x00052cb0) bg_popup_fep_shadow_pane_g8

0xc65d,	// (0x000569de) grid_vkb_keypad_number_pane_ParamLimits

0xc65d,	// (0x000569de) grid_vkb_keypad_number_pane

0xc66d,	// (0x000569ee) grid_vkb_keypad_pane_ParamLimits

0xc66d,	// (0x000569ee) grid_vkb_keypad_pane

0xc693,	// (0x00056a14) fep_vkb_bottom_pane_g1_ParamLimits

0xc693,	// (0x00056a14) fep_vkb_bottom_pane_g1

0xc6bc,	// (0x00056a3d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc6bc,	// (0x00056a3d) grid_vkb_keypad_bottom_left_pane

0xc6d1,	// (0x00056a52) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc6d1,	// (0x00056a52) grid_vkb_keypad_bottom_right_pane

0xc6e6,	// (0x00056a67) fep_vkb_top_text_pane_g1

0xc701,	// (0x00056a82) fep_vkb_top_text_pane_t1

0xc716,	// (0x00056a97) cell_vkb_side_pane_ParamLimits

0xc716,	// (0x00056a97) cell_vkb_side_pane

0xc330,	// (0x000566b1) cell_vkb_side_pane_g1

0xc755,	// (0x00056ad6) cell_vkb_keypad_pane_ParamLimits

0xc755,	// (0x00056ad6) cell_vkb_keypad_pane

0xc7ca,	// (0x00056b4b) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x00059ee1) bg_popup_fep_shadow_pane_g

0x6806,	// (0x00050b87) cell_hwr_side_pane_g1

0x6806,	// (0x00050b87) cell_hwr_side_pane_g2

0xc7d4,	// (0x00056b55) cell_vkb_keypad_pane_t1

0xc7e2,	// (0x00056b63) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc7e2,	// (0x00056b63) cell_vkb_keypad_bottom_left_pane

0xc7ff,	// (0x00056b80) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7ff,	// (0x00056b80) cell_vkb_keypad_bottom_right_pane

0xc330,	// (0x000566b1) cell_vkb_keypad_bottom_left_pane_g1

0xc330,	// (0x000566b1) cell_vkb_keypad_bottom_right_pane_g1

0xc838,	// (0x00056bb9) cell_vkb_keypad_number_pane_ParamLimits

0xc838,	// (0x00056bb9) cell_vkb_keypad_number_pane

0xc857,	// (0x00056bd8) cell_vkb_keypad_number_pane_g1

0xc861,	// (0x00056be2) cell_vkb_keypad_number_pane_g2

0xc86a,	// (0x00056beb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x00059ed3) cell_vkb_keypad_number_pane_g

0xc7d4,	// (0x00056b55) cell_vkb_keypad_number_pane_t1

0xc88e,	// (0x00056c0f) fep_vkb_candidate_pane_g1

0x0001,

0xfb73,	// (0x00059ef4) cell_hwr_side_pane_g

0xc8a7,	// (0x00056c28) cell_hwr_side_pane_t1

0x6810,	// (0x00050b91) cell_hwr_side_pane_t1_copy1

0x681e,	// (0x00050b9f) cell_hwr_candidate_pane_g1

0x684d,	// (0x00050bce) cell_hwr_candidate_pane_t1

0xc330,	// (0x000566b1) cell_vkb_candidate_pane_g2

0xc8eb,	// (0x00056c6c) cell_vkb_candidate_pane_t1

0x65b9,	// (0x0005093a) bg_popup_fep_shadow_pane_ParamLimits

0x65b9,	// (0x0005093a) bg_popup_fep_shadow_pane

0x666e,	// (0x000509ef) bg_fep_hwr_top_pane_g4

0xc3b0,	// (0x00056731) bg_hwr_side_pane_g1_ParamLimits

0xc3b0,	// (0x00056731) bg_hwr_side_pane_g1

0x66df,	// (0x00050a60) cell_hwr_side_pane_ParamLimits

0x66df,	// (0x00050a60) cell_hwr_side_pane

0x671a,	// (0x00050a9b) fep_hwr_write_pane_g1_ParamLimits

0x671a,	// (0x00050a9b) fep_hwr_write_pane_g1

0x6727,	// (0x00050aa8) fep_hwr_write_pane_g2_ParamLimits

0x6727,	// (0x00050aa8) fep_hwr_write_pane_g2

0x6734,	// (0x00050ab5) fep_hwr_write_pane_g3_ParamLimits

0x6734,	// (0x00050ab5) fep_hwr_write_pane_g3

0x6742,	// (0x00050ac3) fep_hwr_write_pane_g4_ParamLimits

0x6742,	// (0x00050ac3) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x00059ea0) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x00059ea0) fep_hwr_write_pane_g

0x666e,	// (0x000509ef) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x666e,	// (0x000509ef) bg_fep_hwr_candidate_pane_g2

0x6757,	// (0x00050ad8) cell_hwr_candidate_pane_ParamLimits

0x6757,	// (0x00050ad8) cell_hwr_candidate_pane

0x6799,	// (0x00050b1a) fep_hwr_candidate_pane_g1_ParamLimits

0xc410,	// (0x00056791) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc410,	// (0x00056791) bg_popup_fep_shadow_pane_cp2

0xc59e,	// (0x0005691f) fep_vkb_top_pane_g4_ParamLimits

0xc59e,	// (0x0005691f) fep_vkb_top_pane_g4

0xc5e4,	// (0x00056965) fep_vkb_side_pane_g2_ParamLimits

0xc5e4,	// (0x00056965) fep_vkb_side_pane_g2

0x5161,	// (0x0004f4e2) list_setting_pane_t4_ParamLimits

0x5161,	// (0x0004f4e2) list_setting_pane_t4

0x51fb,	// (0x0004f57c) list_setting_number_pane_t5_ParamLimits

0x51fb,	// (0x0004f57c) list_setting_number_pane_t5

0x8f53,	// (0x000532d4) list_double_heading_pane_cp2_ParamLimits

0x8f53,	// (0x000532d4) list_double_heading_pane_cp2

0x8863,	// (0x00052be4) list_double_heading_pane_g1_cp2_ParamLimits

0x8863,	// (0x00052be4) list_double_heading_pane_g1_cp2

0x88d6,	// (0x00052c57) list_double_heading_pane_g2_cp2_ParamLimits

0x88d6,	// (0x00052c57) list_double_heading_pane_g2_cp2

0xc8f9,	// (0x00056c7a) list_double_heading_pane_t1_cp2_ParamLimits

0xc8f9,	// (0x00056c7a) list_double_heading_pane_t1_cp2

0xc90f,	// (0x00056c90) list_double_heading_pane_t2_cp2_ParamLimits

0xc90f,	// (0x00056c90) list_double_heading_pane_t2_cp2

0x7f56,	// (0x000522d7) aid_value_unit2

0x4bfc,	// (0x0004ef7d) popup_preview_fixed_window

0x82eb,	// (0x0005266c) bg_popup_preview_window_pane_cp02

0xc921,	// (0x00056ca2) list_preview_fixed_pane

0xc967,	// (0x00056ce8) list_empty_pane_fp_ParamLimits

0xc967,	// (0x00056ce8) list_empty_pane_fp

0xc967,	// (0x00056ce8) list_single_cale_day_pane_fp_ParamLimits

0xc967,	// (0x00056ce8) list_single_cale_day_pane_fp

0xc967,	// (0x00056ce8) list_single_graphic_heading_pane_fp_ParamLimits

0xc967,	// (0x00056ce8) list_single_graphic_heading_pane_fp

0xc967,	// (0x00056ce8) list_single_graphic_pane_fp_ParamLimits

0xc967,	// (0x00056ce8) list_single_graphic_pane_fp

0xc967,	// (0x00056ce8) list_single_heading_pane_fp_ParamLimits

0xc967,	// (0x00056ce8) list_single_heading_pane_fp

0xc967,	// (0x00056ce8) list_single_pane_fp_ParamLimits

0xc967,	// (0x00056ce8) list_single_pane_fp

0xc97d,	// (0x00056cfe) list_single_pane_fp_g1_ParamLimits

0xc97d,	// (0x00056cfe) list_single_pane_fp_g1

0x8863,	// (0x00052be4) list_single_pane_fp_g2_ParamLimits

0x8863,	// (0x00052be4) list_single_pane_fp_g2

0x88d6,	// (0x00052c57) list_single_pane_fp_g3_ParamLimits

0x88d6,	// (0x00052c57) list_single_pane_fp_g3

0xc989,	// (0x00056d0a) list_single_pane_fp_g4_ParamLimits

0xc989,	// (0x00056d0a) list_single_pane_fp_g4

0x0003,

0xfb86,	// (0x00059f07) list_single_pane_fp_g_ParamLimits

0xfb86,	// (0x00059f07) list_single_pane_fp_g

0x7bc8,	// (0x00051f49) list_single_pane_fp_t1_ParamLimits

0x7bc8,	// (0x00051f49) list_single_pane_fp_t1

0x7bdf,	// (0x00051f60) list_single_graphic_pane_fp_g1_ParamLimits

0x7bdf,	// (0x00051f60) list_single_graphic_pane_fp_g1

0xc97d,	// (0x00056cfe) list_single_graphic_pane_fp_g2_ParamLimits

0xc97d,	// (0x00056cfe) list_single_graphic_pane_fp_g2

0x8863,	// (0x00052be4) list_single_graphic_pane_fp_g3_ParamLimits

0x8863,	// (0x00052be4) list_single_graphic_pane_fp_g3

0x88d6,	// (0x00052c57) list_single_graphic_pane_fp_g4_ParamLimits

0x88d6,	// (0x00052c57) list_single_graphic_pane_fp_g4

0xc989,	// (0x00056d0a) list_single_graphic_pane_fp_g5_ParamLimits

0xc989,	// (0x00056d0a) list_single_graphic_pane_fp_g5

0x0004,

0xfb8f,	// (0x00059f10) list_single_graphic_pane_fp_g_ParamLimits

0xfb8f,	// (0x00059f10) list_single_graphic_pane_fp_g

0x7beb,	// (0x00051f6c) list_single_graphic_pane_fp_t1_ParamLimits

0x7beb,	// (0x00051f6c) list_single_graphic_pane_fp_t1

0x7bdf,	// (0x00051f60) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7bdf,	// (0x00051f60) list_single_graphic_heading_pane_fp_g1

0xc97d,	// (0x00056cfe) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc97d,	// (0x00056cfe) list_single_graphic_heading_pane_fp_g2

0x8863,	// (0x00052be4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8863,	// (0x00052be4) list_single_graphic_heading_pane_fp_g3

0x88d6,	// (0x00052c57) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x88d6,	// (0x00052c57) list_single_graphic_heading_pane_fp_g4

0xc989,	// (0x00056d0a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc989,	// (0x00056d0a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00059f10) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00059f10) list_single_graphic_heading_pane_fp_g

0x7c01,	// (0x00051f82) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7c01,	// (0x00051f82) list_single_graphic_heading_pane_fp_t1

0x7c17,	// (0x00051f98) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7c17,	// (0x00051f98) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9a,	// (0x00059f1b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9a,	// (0x00059f1b) list_single_graphic_heading_pane_fp_t

0x7c29,	// (0x00051faa) list_single_cale_day_pane_fp_g1_ParamLimits

0x7c29,	// (0x00051faa) list_single_cale_day_pane_fp_g1

0xc995,	// (0x00056d16) list_single_cale_day_pane_fp_g2_ParamLimits

0xc995,	// (0x00056d16) list_single_cale_day_pane_fp_g2

0x7c61,	// (0x00051fe2) list_single_cale_day_pane_fp_g3_ParamLimits

0x7c61,	// (0x00051fe2) list_single_cale_day_pane_fp_g3

0x7c89,	// (0x0005200a) list_single_cale_day_pane_fp_g4_ParamLimits

0x7c89,	// (0x0005200a) list_single_cale_day_pane_fp_g4

0x7cad,	// (0x0005202e) list_single_cale_day_pane_fp_g5_ParamLimits

0x7cad,	// (0x0005202e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9f,	// (0x00059f20) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9f,	// (0x00059f20) list_single_cale_day_pane_fp_g

0x7cd1,	// (0x00052052) list_single_cale_day_pane_fp_t1_ParamLimits

0x7cd1,	// (0x00052052) list_single_cale_day_pane_fp_t1

0x7cf7,	// (0x00052078) list_single_cale_day_pane_fp_t2_ParamLimits

0x7cf7,	// (0x00052078) list_single_cale_day_pane_fp_t2

0x7d10,	// (0x00052091) list_single_cale_day_pane_fp_t3_ParamLimits

0x7d10,	// (0x00052091) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaa,	// (0x00059f2b) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaa,	// (0x00059f2b) list_single_cale_day_pane_fp_t

0xc97d,	// (0x00056cfe) list_empty_pane_fp_g1_ParamLimits

0xc97d,	// (0x00056cfe) list_empty_pane_fp_g1

0x7d29,	// (0x000520aa) list_empty_pane_fp_t1

0x7d37,	// (0x000520b8) list_empty_pane_fp_t2

0x0001,

0xfbb1,	// (0x00059f32) list_empty_pane_fp_t

0xc97d,	// (0x00056cfe) list_single_heading_pane_fp_g1_ParamLimits

0xc97d,	// (0x00056cfe) list_single_heading_pane_fp_g1

0x8863,	// (0x00052be4) list_single_heading_pane_fp_g2_ParamLimits

0x8863,	// (0x00052be4) list_single_heading_pane_fp_g2

0x88d6,	// (0x00052c57) list_single_heading_pane_fp_g3_ParamLimits

0x88d6,	// (0x00052c57) list_single_heading_pane_fp_g3

0x0002,

0xfbb6,	// (0x00059f37) list_single_heading_pane_fp_g_ParamLimits

0xfbb6,	// (0x00059f37) list_single_heading_pane_fp_g

0x7d45,	// (0x000520c6) list_single_heading_pane_fp_t1_ParamLimits

0x7d45,	// (0x000520c6) list_single_heading_pane_fp_t1

0x7d57,	// (0x000520d8) list_single_heading_pane_fp_t2_ParamLimits

0x7d57,	// (0x000520d8) list_single_heading_pane_fp_t2

0x0001,

0xfbbd,	// (0x00059f3e) list_single_heading_pane_fp_t_ParamLimits

0xfbbd,	// (0x00059f3e) list_single_heading_pane_fp_t

0x8abc,	// (0x00052e3d) aid_size_cell_fast

0x825b,	// (0x000525dc) soft_indicator_pane_cp1_t1

0x8af6,	// (0x00052e77) cell_app_pane_cp2_ParamLimits

0x8af6,	// (0x00052e77) cell_app_pane_cp2

0x65db,	// (0x0005095c) fep_hwr_candidate_drop_down_list_pane

0x67b3,	// (0x00050b34) fep_hwr_candidate_pane_g3_ParamLimits

0x67b3,	// (0x00050b34) fep_hwr_candidate_pane_g3

0x39ae,	// (0x0004dd2f) fep_hwr_candidate_pane_g4_ParamLimits

0x39ae,	// (0x0004dd2f) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00059ead) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x00059ead) fep_hwr_candidate_pane_g

0xc493,	// (0x00056814) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc493,	// (0x00056814) fep_vkb_candidate_drop_down_list_pane

0xc896,	// (0x00056c17) fep_vkb_candidate_pane_g3

0xc89e,	// (0x00056c1f) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x00059eda) fep_vkb_candidate_pane_g

0x681e,	// (0x00050b9f) cell_hwr_candidate_pane_g1_ParamLimits

0x682c,	// (0x00050bad) cell_hwr_candidate_pane_g3_ParamLimits

0x682c,	// (0x00050bad) cell_hwr_candidate_pane_g3

0xe2a4,	// (0x00058625) cell_hwr_candidate_pane_g4_ParamLimits

0xe2a4,	// (0x00058625) cell_hwr_candidate_pane_g4

0x0002,

0xfb78,	// (0x00059ef9) cell_hwr_candidate_pane_g_ParamLimits

0xfb78,	// (0x00059ef9) cell_hwr_candidate_pane_g

0xc8b5,	// (0x00056c36) cell_vkb_candidate_pane_g3_ParamLimits

0xc8b5,	// (0x00056c36) cell_vkb_candidate_pane_g3

0xc8d0,	// (0x00056c51) cell_vkb_candidate_pane_g4_ParamLimits

0xc8d0,	// (0x00056c51) cell_vkb_candidate_pane_g4

0xc9a1,	// (0x00056d22) cell_app_pane_cp2_g1_ParamLimits

0xc9a1,	// (0x00056d22) cell_app_pane_cp2_g1

0xc9bf,	// (0x00056d40) cell_app_pane_cp2_g2_ParamLimits

0xc9bf,	// (0x00056d40) cell_app_pane_cp2_g2

0x0001,

0xfbc2,	// (0x00059f43) cell_app_pane_cp2_g_ParamLimits

0xfbc2,	// (0x00059f43) cell_app_pane_cp2_g

0xc9cb,	// (0x00056d4c) cell_app_pane_cp2_t1_ParamLimits

0xc9cb,	// (0x00056d4c) cell_app_pane_cp2_t1

0x88c8,	// (0x00052c49) grid_highlight_pane_cp1_ParamLimits

0x88c8,	// (0x00052c49) grid_highlight_pane_cp1

0x686b,	// (0x00050bec) cell_hwr_candidate_pane_cp1_ParamLimits

0x686b,	// (0x00050bec) cell_hwr_candidate_pane_cp1

0x681e,	// (0x00050b9f) fep_hwr_candidate_drop_down_list_pane_g1

0x688a,	// (0x00050c0b) fep_hwr_candidate_drop_down_list_pane_g2

0x6897,	// (0x00050c18) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x00059f48) fep_hwr_candidate_drop_down_list_pane_g

0x68a4,	// (0x00050c25) fep_hwr_candidate_drop_down_list_scroll_pane

0x68ad,	// (0x00050c2e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x68ad,	// (0x00050c2e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x68ba,	// (0x00050c3b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x68ba,	// (0x00050c3b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x68c7,	// (0x00050c48) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x68c7,	// (0x00050c48) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x68d4,	// (0x00050c55) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x68d4,	// (0x00050c55) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x68ef,	// (0x00050c70) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x68ef,	// (0x00050c70) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x690a,	// (0x00050c8b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x690a,	// (0x00050c8b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6925,	// (0x00050ca6) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6925,	// (0x00050ca6) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6940,	// (0x00050cc1) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6940,	// (0x00050cc1) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x00059f4f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x00059f4f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9dd,	// (0x00056d5e) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9dd,	// (0x00056d5e) cell_vkb_candidate_pane_cp1

0xc59e,	// (0x0005691f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc59e,	// (0x0005691f) fep_vkb_candidate_drop_down_list_pane_g1

0xc9fd,	// (0x00056d7e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9fd,	// (0x00056d7e) fep_vkb_candidate_drop_down_list_pane_g2

0xca0a,	// (0x00056d8b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xca0a,	// (0x00056d8b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdf,	// (0x00059f60) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdf,	// (0x00059f60) fep_vkb_candidate_drop_down_list_pane_g

0xca17,	// (0x00056d98) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca17,	// (0x00056d98) fep_vkb_candidate_drop_down_list_scroll_pane

0xca24,	// (0x00056da5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca24,	// (0x00056da5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca31,	// (0x00056db2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca31,	// (0x00056db2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca3d,	// (0x00056dbe) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca3d,	// (0x00056dbe) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xca49,	// (0x00056dca) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xca49,	// (0x00056dca) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xca6a,	// (0x00056deb) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xca6a,	// (0x00056deb) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca8b,	// (0x00056e0c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca8b,	// (0x00056e0c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xcaac,	// (0x00056e2d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xcaac,	// (0x00056e2d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcacd,	// (0x00056e4e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcacd,	// (0x00056e4e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe6,	// (0x00059f67) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe6,	// (0x00059f67) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7f8c,	// (0x0005230d) title_pane_g1_ParamLimits

0x7f99,	// (0x0005231a) title_pane_g2_ParamLimits

0xf54e,	// (0x000598cf) title_pane_g_ParamLimits

0x8efc,	// (0x0005327d) aid_call2_pane

0x8f04,	// (0x00053285) aid_call_pane

0x8f0c,	// (0x0005328d) popup_clock_analogue_window_g1

0x8f0c,	// (0x0005328d) popup_clock_analogue_window_g2

0x5649,	// (0x0004f9ca) popup_clock_analogue_window_g3

0x5652,	// (0x0004f9d3) popup_clock_analogue_window_g4

0x7f78,	// (0x000522f9) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00059a7e) popup_clock_analogue_window_g

0x565a,	// (0x0004f9db) popup_clock_analogue_window_t1

0x5668,	// (0x0004f9e9) clock_digital_number_pane_ParamLimits

0x5668,	// (0x0004f9e9) clock_digital_number_pane

0x5674,	// (0x0004f9f5) clock_digital_number_pane_cp02_ParamLimits

0x5674,	// (0x0004f9f5) clock_digital_number_pane_cp02

0x5680,	// (0x0004fa01) clock_digital_number_pane_cp03_ParamLimits

0x5680,	// (0x0004fa01) clock_digital_number_pane_cp03

0x568c,	// (0x0004fa0d) clock_digital_number_pane_cp04_ParamLimits

0x568c,	// (0x0004fa0d) clock_digital_number_pane_cp04

0x5698,	// (0x0004fa19) clock_digital_separator_pane_ParamLimits

0x5698,	// (0x0004fa19) clock_digital_separator_pane

0x56a4,	// (0x0004fa25) popup_clock_digital_window_t1_ParamLimits

0x56a4,	// (0x0004fa25) popup_clock_digital_window_t1

0x7f78,	// (0x000522f9) clock_digital_number_pane_g1

0x7f78,	// (0x000522f9) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00059a89) clock_digital_number_pane_g

0x7f78,	// (0x000522f9) clock_digital_separator_pane_g1

0x7f78,	// (0x000522f9) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00059a89) clock_digital_separator_pane_g

0x988c,	// (0x00053c0d) aid_fill_nsta_ParamLimits

0x99ce,	// (0x00053d4f) indicator_nsta_pane_ParamLimits

0x9b47,	// (0x00053ec8) popup_clock_analogue_window

0x9b47,	// (0x00053ec8) popup_clock_digital_window

0x8062,	// (0x000523e3) grid_indicator_nsta_pane_ParamLimits

0xbd08,	// (0x00056089) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x00059e2d) clock_nsta_pane_t

0x560d,	// (0x0004f98e) aid_size_max_handle

0x5617,	// (0x0004f998) aid_size_min_handle

0x9530,	// (0x000538b1) editor_scroll_pane

0xcae8,	// (0x00056e69) ex_editor_pane

0x8a2a,	// (0x00052dab) scroll_pane_cp13

0x885b,	// (0x00052bdc) scroll_pane_cp14

0x8f3b,	// (0x000532bc) scroll_pane_cp36

0x8f67,	// (0x000532e8) list_single_graphic_hl_pane_cp2_ParamLimits

0x8f67,	// (0x000532e8) list_single_graphic_hl_pane_cp2

0x783d,	// (0x00051bbe) list_single_graphic_hl_pane_ParamLimits

0x783d,	// (0x00051bbe) list_single_graphic_hl_pane

0x7d6d,	// (0x000520ee) aid_size_min_hl_cp1

0xcaf0,	// (0x00056e71) list_highlight_pane_cp34_ParamLimits

0xcaf0,	// (0x00056e71) list_highlight_pane_cp34

0xcb01,	// (0x00056e82) list_single_graphic_hl_pane_g1_ParamLimits

0xcb01,	// (0x00056e82) list_single_graphic_hl_pane_g1

0x7d76,	// (0x000520f7) list_single_graphic_hl_pane_g2_ParamLimits

0x7d76,	// (0x000520f7) list_single_graphic_hl_pane_g2

0x7d76,	// (0x000520f7) list_single_graphic_hl_pane_g3_ParamLimits

0x7d76,	// (0x000520f7) list_single_graphic_hl_pane_g3

0x75f0,	// (0x00051971) list_single_graphic_hl_pane_g4_ParamLimits

0x75f0,	// (0x00051971) list_single_graphic_hl_pane_g4

0x7d82,	// (0x00052103) list_single_graphic_hl_pane_g5_ParamLimits

0x7d82,	// (0x00052103) list_single_graphic_hl_pane_g5

0x0004,

0xfbf7,	// (0x00059f78) list_single_graphic_hl_pane_g_ParamLimits

0xfbf7,	// (0x00059f78) list_single_graphic_hl_pane_g

0x7d96,	// (0x00052117) list_single_graphic_hl_pane_t1_ParamLimits

0x7d96,	// (0x00052117) list_single_graphic_hl_pane_t1

0xcb0e,	// (0x00056e8f) aid_size_min_hl_cp2

0xcb17,	// (0x00056e98) list_highlight_pane_cp34_cp2_ParamLimits

0xcb17,	// (0x00056e98) list_highlight_pane_cp34_cp2

0xcb01,	// (0x00056e82) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcb01,	// (0x00056e82) list_single_graphic_hl_pane_g1_cp2

0xcb24,	// (0x00056ea5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcb24,	// (0x00056ea5) list_single_graphic_hl_pane_g2_cp2

0xcb30,	// (0x00056eb1) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb30,	// (0x00056eb1) list_single_graphic_hl_pane_g3_cp2

0x9469,	// (0x000537ea) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9469,	// (0x000537ea) list_single_graphic_hl_pane_g4_cp2

0xcb3e,	// (0x00056ebf) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb3e,	// (0x00056ebf) list_single_graphic_hl_pane_g5_cp2

0x59c2,	// (0x0004fd43) control_pane_g4_ParamLimits

0x59c2,	// (0x0004fd43) control_pane_g4

0x986a,	// (0x00053beb) bg_popup_sub_pane_cp10_ParamLimits

0xc33a,	// (0x000566bb) list_choice_list_pane_ParamLimits

0xc349,	// (0x000566ca) scroll_pane_cp23

0x82eb,	// (0x0005266c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc921,	// (0x00056ca2) list_preview_fixed_pane_ParamLimits

0xc937,	// (0x00056cb8) list_preview_fixed_pane_cp_ParamLimits

0xc937,	// (0x00056cb8) list_preview_fixed_pane_cp

0xc943,	// (0x00056cc4) popup_preview_fixed_window_g1_ParamLimits

0xc943,	// (0x00056cc4) popup_preview_fixed_window_g1

0xc94f,	// (0x00056cd0) popup_preview_fixed_window_g2_ParamLimits

0xc94f,	// (0x00056cd0) popup_preview_fixed_window_g2

0x0002,

0xfb7f,	// (0x00059f00) popup_preview_fixed_window_g_ParamLimits

0xfb7f,	// (0x00059f00) popup_preview_fixed_window_g

0x5581,	// (0x0004f902) aid_navi_side_left_pane_ParamLimits

0x5596,	// (0x0004f917) aid_navi_side_right_pane_ParamLimits

0x55ae,	// (0x0004f92f) navi_icon_pane_stacon_ParamLimits

0x55c2,	// (0x0004f943) navi_navi_pane_stacon_ParamLimits

0x55ae,	// (0x0004f92f) navi_text_pane_stacon_ParamLimits

0x4acb,	// (0x0004ee4c) main_text_info_pane

0xcb68,	// (0x00056ee9) listscroll_text_info_pane

0xcb70,	// (0x00056ef1) list_text_info_pane_ParamLimits

0xcb70,	// (0x00056ef1) list_text_info_pane

0xcb7f,	// (0x00056f00) scroll_pane_cp24_ParamLimits

0xcb7f,	// (0x00056f00) scroll_pane_cp24

0xcb9d,	// (0x00056f1e) list_text_info_pane_t1_ParamLimits

0xcb9d,	// (0x00056f1e) list_text_info_pane_t1

0x5b2a,	// (0x0004feab) popup_fast_swap2_window_ParamLimits

0x5b2a,	// (0x0004feab) popup_fast_swap2_window

0xcbd2,	// (0x00056f53) aid_size_cell_fast2

0x7f6e,	// (0x000522ef) bg_popup_window_pane_cp17

0xa1d8,	// (0x00054559) heading_pane_cp2

0x852e,	// (0x000528af) listscroll_fast2_pane

0xcbdc,	// (0x00056f5d) grid_fast2_pane

0xcbe6,	// (0x00056f67) listscroll_fast2_pane_g1

0xcbee,	// (0x00056f6f) listscroll_fast2_pane_g2

0x0001,

0xfc02,	// (0x00059f83) listscroll_fast2_pane_g

0x8a2a,	// (0x00052dab) scroll_pane_cp26

0xcbf8,	// (0x00056f79) cell_fast2_pane_ParamLimits

0xcbf8,	// (0x00056f79) cell_fast2_pane

0xcc0d,	// (0x00056f8e) cell_fast2_pane_g1

0xcc16,	// (0x00056f97) cell_fast2_pane_g2

0xcc1f,	// (0x00056fa0) cell_fast2_pane_g3

0x0002,

0xfc07,	// (0x00059f88) cell_fast2_pane_g

0x8618,	// (0x00052999) grid_highlight_pane_cp9

0x5aea,	// (0x0004fe6b) main_eswt_pane_ParamLimits

0x5aea,	// (0x0004fe6b) main_eswt_pane

0xcb94,	// (0x00056f15) list_single_text_info_pane

0xcc27,	// (0x00056fa8) eswt_ctrl_button_pane

0xcc27,	// (0x00056fa8) eswt_ctrl_canvas_pane

0xcc2f,	// (0x00056fb0) eswt_ctrl_combo_pane

0xcc27,	// (0x00056fa8) eswt_ctrl_default_pane

0xcc27,	// (0x00056fa8) eswt_ctrl_label_pane

0xcc37,	// (0x00056fb8) eswt_ctrl_wait_pane

0xcc3f,	// (0x00056fc0) eswt_shell_pane

0x7f6e,	// (0x000522ef) listscroll_eswt_app_pane

0xcc5f,	// (0x00056fe0) popup_eswt_tasktip_window_ParamLimits

0xcc5f,	// (0x00056fe0) popup_eswt_tasktip_window

0x9ddc,	// (0x0005415d) bg_popup_window_pane_cp18

0xcc70,	// (0x00056ff1) eswt_control_pane_g1_ParamLimits

0xcc70,	// (0x00056ff1) eswt_control_pane_g1

0xcc7d,	// (0x00056ffe) eswt_control_pane_g2_ParamLimits

0xcc7d,	// (0x00056ffe) eswt_control_pane_g2

0xcc8a,	// (0x0005700b) eswt_control_pane_g3_ParamLimits

0xcc8a,	// (0x0005700b) eswt_control_pane_g3

0xcc97,	// (0x00057018) eswt_control_pane_g4_ParamLimits

0xcc97,	// (0x00057018) eswt_control_pane_g4

0x0003,

0xfc0e,	// (0x00059f8f) eswt_control_pane_g_ParamLimits

0xfc0e,	// (0x00059f8f) eswt_control_pane_g

0x88c8,	// (0x00052c49) bg_button_pane_ParamLimits

0x88c8,	// (0x00052c49) bg_button_pane

0x862d,	// (0x000529ae) common_borders_pane_copy2_ParamLimits

0x862d,	// (0x000529ae) common_borders_pane_copy2

0xcca4,	// (0x00057025) control_button_pane_g1_ParamLimits

0xcca4,	// (0x00057025) control_button_pane_g1

0xccb0,	// (0x00057031) control_button_pane_g2_ParamLimits

0xccb0,	// (0x00057031) control_button_pane_g2

0xccbc,	// (0x0005703d) control_button_pane_g3_ParamLimits

0xccbc,	// (0x0005703d) control_button_pane_g3

0x0002,

0xfc17,	// (0x00059f98) control_button_pane_g_ParamLimits

0xfc17,	// (0x00059f98) control_button_pane_g

0xccd0,	// (0x00057051) control_button_pane_t1

0xccde,	// (0x0005705f) control_button_pane_t2

0x0001,

0xfc1e,	// (0x00059f9f) control_button_pane_t

0x9d68,	// (0x000540e9) bg_button_pane_g1

0x9d78,	// (0x000540f9) bg_button_pane_g2

0x9d70,	// (0x000540f1) bg_button_pane_g3

0x9d88,	// (0x00054109) bg_button_pane_g4

0x9d80,	// (0x00054101) bg_button_pane_g5

0x9d90,	// (0x00054111) bg_button_pane_g6

0x9d98,	// (0x00054119) bg_button_pane_g7

0x9da8,	// (0x00054129) bg_button_pane_g8

0x9da0,	// (0x00054121) bg_button_pane_g9

0x0008,

0xf866,	// (0x00059be7) bg_button_pane_g

0xc2f5,	// (0x00056676) common_borders_pane_ParamLimits

0xc2f5,	// (0x00056676) common_borders_pane

0xcc70,	// (0x00056ff1) eswt_control_pane_g1_copy1_ParamLimits

0xcc70,	// (0x00056ff1) eswt_control_pane_g1_copy1

0xcc7d,	// (0x00056ffe) eswt_control_pane_g2_copy1_ParamLimits

0xcc7d,	// (0x00056ffe) eswt_control_pane_g2_copy1

0xcc8a,	// (0x0005700b) eswt_control_pane_g3_copy1_ParamLimits

0xcc8a,	// (0x0005700b) eswt_control_pane_g3_copy1

0xcc97,	// (0x00057018) eswt_control_pane_g4_copy1_ParamLimits

0xcc97,	// (0x00057018) eswt_control_pane_g4_copy1

0xc330,	// (0x000566b1) bg_eswt_ctrl_canvas_pane_g1

0xc2f5,	// (0x00056676) common_borders_pane_cp2_ParamLimits

0xc2f5,	// (0x00056676) common_borders_pane_cp2

0xc2f5,	// (0x00056676) common_borders_pane_cp3_ParamLimits

0xc2f5,	// (0x00056676) common_borders_pane_cp3

0xccec,	// (0x0005706d) separator_horizontal_pane

0xccf4,	// (0x00057075) separator_vertical_pane

0xcc70,	// (0x00056ff1) eswt_control_pane_g1_copy2_ParamLimits

0xcc70,	// (0x00056ff1) eswt_control_pane_g1_copy2

0xcc7d,	// (0x00056ffe) eswt_control_pane_g2_copy2_ParamLimits

0xcc7d,	// (0x00056ffe) eswt_control_pane_g2_copy2

0xcc8a,	// (0x0005700b) eswt_control_pane_g3_copy2_ParamLimits

0xcc8a,	// (0x0005700b) eswt_control_pane_g3_copy2

0xcc97,	// (0x00057018) eswt_control_pane_g4_copy2_ParamLimits

0xcc97,	// (0x00057018) eswt_control_pane_g4_copy2

0x7f6e,	// (0x000522ef) common_borders_pane_cp4

0xccfd,	// (0x0005707e) separator_horizontal_pane_g1

0xcd06,	// (0x00057087) separator_horizontal_pane_g2

0xcd0f,	// (0x00057090) separator_horizontal_pane_g3

0x0002,

0xfc23,	// (0x00059fa4) separator_horizontal_pane_g

0xcc70,	// (0x00056ff1) eswt_control_pane_g1_copy3_ParamLimits

0xcc70,	// (0x00056ff1) eswt_control_pane_g1_copy3

0xcc7d,	// (0x00056ffe) eswt_control_pane_g2_copy3_ParamLimits

0xcc7d,	// (0x00056ffe) eswt_control_pane_g2_copy3

0xcc8a,	// (0x0005700b) eswt_control_pane_g3_copy3_ParamLimits

0xcc8a,	// (0x0005700b) eswt_control_pane_g3_copy3

0xcc97,	// (0x00057018) eswt_control_pane_g4_copy3_ParamLimits

0xcc97,	// (0x00057018) eswt_control_pane_g4_copy3

0x7f6e,	// (0x000522ef) common_borders_pane_cp5

0xcd18,	// (0x00057099) separator_vertical_pane_g1

0xcd21,	// (0x000570a2) separator_vertical_pane_g2

0xcd2a,	// (0x000570ab) separator_vertical_pane_g3

0x0002,

0xfc2a,	// (0x00059fab) separator_vertical_pane_g

0xcc70,	// (0x00056ff1) eswt_control_pane_g1_copy4_ParamLimits

0xcc70,	// (0x00056ff1) eswt_control_pane_g1_copy4

0xcc7d,	// (0x00056ffe) eswt_control_pane_g2_copy4_ParamLimits

0xcc7d,	// (0x00056ffe) eswt_control_pane_g2_copy4

0xcc8a,	// (0x0005700b) eswt_control_pane_g3_copy4_ParamLimits

0xcc8a,	// (0x0005700b) eswt_control_pane_g3_copy4

0xcc97,	// (0x00057018) eswt_control_pane_g4_copy4_ParamLimits

0xcc97,	// (0x00057018) eswt_control_pane_g4_copy4

0xcd33,	// (0x000570b4) eswt_ctrl_combo_button_pane

0xcd3b,	// (0x000570bc) eswt_ctrl_input_pane

0xcd43,	// (0x000570c4) popup_choice_list_window_cp70

0xcd4b,	// (0x000570cc) eswt_ctrl_input_pane_t1

0x7f6e,	// (0x000522ef) input_focus_pane_cp70

0xc2f5,	// (0x00056676) bg_button_pane_cp70_ParamLimits

0xc2f5,	// (0x00056676) bg_button_pane_cp70

0xcd59,	// (0x000570da) eswt_ctrl_combo_button_pane_g1

0xcd61,	// (0x000570e2) wait_bar_pane_cp70

0x9ddc,	// (0x0005415d) bg_popup_window_pane_cp70_ParamLimits

0x9ddc,	// (0x0005415d) bg_popup_window_pane_cp70

0xcd69,	// (0x000570ea) popup_eswt_tasktip_window_t1

0xcd7f,	// (0x00057100) wait_bar_pane_cp71_ParamLimits

0xcd7f,	// (0x00057100) wait_bar_pane_cp71

0xcd8b,	// (0x0005710c) grid_eswt_app_pane

0x8d3f,	// (0x000530c0) scroll_pane_cp70

0xcd94,	// (0x00057115) cell_eswt_app_pane_ParamLimits

0xcd94,	// (0x00057115) cell_eswt_app_pane

0xcdc8,	// (0x00057149) cell_eswt_app_pane_g1_ParamLimits

0xcdc8,	// (0x00057149) cell_eswt_app_pane_g1

0xcdf7,	// (0x00057178) cell_eswt_app_pane_g2_ParamLimits

0xcdf7,	// (0x00057178) cell_eswt_app_pane_g2

0x0001,

0xfc31,	// (0x00059fb2) cell_eswt_app_pane_g_ParamLimits

0xfc31,	// (0x00059fb2) cell_eswt_app_pane_g

0xce1b,	// (0x0005719c) cell_eswt_app_pane_t1_ParamLimits

0xce1b,	// (0x0005719c) cell_eswt_app_pane_t1

0xce4d,	// (0x000571ce) grid_highlight_pane_cp70_ParamLimits

0xce4d,	// (0x000571ce) grid_highlight_pane_cp70

0x9405,	// (0x00053786) set_content_pane_g1

0x97cb,	// (0x00053b4c) status_small_volume_pane

0x695b,	// (0x00050cdc) status_small_volume_pane_g1

0x6963,	// (0x00050ce4) volume_small2_pane

0x696c,	// (0x00050ced) volume_small2_pane_g1

0x6975,	// (0x00050cf6) volume_small2_pane_g2

0x697e,	// (0x00050cff) volume_small2_pane_g3

0x6987,	// (0x00050d08) volume_small2_pane_g4

0x6990,	// (0x00050d11) volume_small2_pane_g5

0x6999,	// (0x00050d1a) volume_small2_pane_g6

0x69a2,	// (0x00050d23) volume_small2_pane_g7

0x69ab,	// (0x00050d2c) volume_small2_pane_g8

0x69b4,	// (0x00050d35) volume_small2_pane_g9

0x69bd,	// (0x00050d3e) volume_small2_pane_g10

0x0009,

0xfc36,	// (0x00059fb7) volume_small2_pane_g

0xc6e6,	// (0x00056a67) fep_vkb_top_text_pane_g1_ParamLimits

0xc701,	// (0x00056a82) fep_vkb_top_text_pane_t1_ParamLimits

0xc95b,	// (0x00056cdc) popup_preview_fixed_window_g3_ParamLimits

0xc95b,	// (0x00056cdc) popup_preview_fixed_window_g3

0x5fd1,	// (0x00050352) popup_toolbar_trans_pane

0xb146,	// (0x000554c7) aid_height_set_list_ParamLimits

0xb157,	// (0x000554d8) aid_size_parent_ParamLimits

0x986a,	// (0x00053beb) list_highlight_pane_cp2_ParamLimits

0x9405,	// (0x00053786) set_content_pane_g1_ParamLimits

0x785c,	// (0x00051bdd) list_single_image_pane_ParamLimits

0x785c,	// (0x00051bdd) list_single_image_pane

0xce59,	// (0x000571da) aid_size_cell_image_ParamLimits

0xce59,	// (0x000571da) aid_size_cell_image

0xce66,	// (0x000571e7) grid_single_image_pane_ParamLimits

0xce66,	// (0x000571e7) grid_single_image_pane

0xce72,	// (0x000571f3) list_single_image_pane_g1_ParamLimits

0xce72,	// (0x000571f3) list_single_image_pane_g1

0xce7e,	// (0x000571ff) list_single_image_pane_g2_ParamLimits

0xce7e,	// (0x000571ff) list_single_image_pane_g2

0x0001,

0xfc4b,	// (0x00059fcc) list_single_image_pane_g_ParamLimits

0xfc4b,	// (0x00059fcc) list_single_image_pane_g

0xce92,	// (0x00057213) list_single_image_pane_t1_ParamLimits

0xce92,	// (0x00057213) list_single_image_pane_t1

0xcea8,	// (0x00057229) cell_image_list_pane_ParamLimits

0xcea8,	// (0x00057229) cell_image_list_pane

0xcebc,	// (0x0005723d) cell_image_list_pane_g1

0xcec5,	// (0x00057246) cell_image_list_pane_g2

0x0001,

0xfc50,	// (0x00059fd1) cell_image_list_pane_g

0xcece,	// (0x0005724f) aid_size_cell_tb_trans_pane

0x88c8,	// (0x00052c49) bg_tb_trans_pane

0xcee0,	// (0x00057261) grid_tb_trans_pane

0x9d68,	// (0x000540e9) bg_tb_trans_pane_g1

0x9d78,	// (0x000540f9) bg_tb_trans_pane_g2

0x9d70,	// (0x000540f1) bg_tb_trans_pane_g3

0x9d88,	// (0x00054109) bg_tb_trans_pane_g4

0x9d80,	// (0x00054101) bg_tb_trans_pane_g5

0x9da8,	// (0x00054129) bg_tb_trans_pane_g6

0x9da0,	// (0x00054121) bg_tb_trans_pane_g7

0x9d90,	// (0x00054111) bg_tb_trans_pane_g8

0x9d98,	// (0x00054119) bg_tb_trans_pane_g9

0x0008,

0xfc55,	// (0x00059fd6) bg_tb_trans_pane_g

0xcef4,	// (0x00057275) cell_toolbar_trans_pane_ParamLimits

0xcef4,	// (0x00057275) cell_toolbar_trans_pane

0xc330,	// (0x000566b1) cell_toolbar_trans_pane_g1

0xbedb,	// (0x0005625c) list_form2_midp_pane_t1

0xbee9,	// (0x0005626a) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x00059e73) list_form2_midp_pane_t

0xbef7,	// (0x00056278) scroll_pane_cp51_ParamLimits

0xc0b3,	// (0x00056434) form2_midp_wait_pane_g1

0xc0bc,	// (0x0005643d) form2_midp_wait_pane_g2

0xc0c5,	// (0x00056446) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x00059e88) form2_midp_wait_pane_g

0x8062,	// (0x000523e3) list_highlight_pane_cp21_ParamLimits

0xc113,	// (0x00056494) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc122,	// (0x000564a3) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x77d5,	// (0x00051b56) list_single_2graphic_im_pane_ParamLimits

0x77d5,	// (0x00051b56) list_single_2graphic_im_pane

0xcf1a,	// (0x0005729b) list_single_2graphic_im_pane_g1_ParamLimits

0xcf1a,	// (0x0005729b) list_single_2graphic_im_pane_g1

0xcf2b,	// (0x000572ac) list_single_2graphic_im_pane_g2_ParamLimits

0xcf2b,	// (0x000572ac) list_single_2graphic_im_pane_g2

0xcf37,	// (0x000572b8) list_single_2graphic_im_pane_g3_ParamLimits

0xcf37,	// (0x000572b8) list_single_2graphic_im_pane_g3

0x0003,

0xfc68,	// (0x00059fe9) list_single_2graphic_im_pane_g_ParamLimits

0xfc68,	// (0x00059fe9) list_single_2graphic_im_pane_g

0xcf57,	// (0x000572d8) list_single_2graphic_im_pane_t1_ParamLimits

0xcf57,	// (0x000572d8) list_single_2graphic_im_pane_t1

0xc967,	// (0x00056ce8) list_single_graphic_2heading_pane_fp_ParamLimits

0xc967,	// (0x00056ce8) list_single_graphic_2heading_pane_fp

0x7bdf,	// (0x00051f60) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7bdf,	// (0x00051f60) list_single_graphic_2heading_pane_fp_g1

0xc97d,	// (0x00056cfe) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc97d,	// (0x00056cfe) list_single_graphic_2heading_pane_fp_g2

0x8863,	// (0x00052be4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8863,	// (0x00052be4) list_single_graphic_2heading_pane_fp_g3

0x88d6,	// (0x00052c57) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x88d6,	// (0x00052c57) list_single_graphic_2heading_pane_fp_g4

0xc989,	// (0x00056d0a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc989,	// (0x00056d0a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00059f10) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00059f10) list_single_graphic_2heading_pane_fp_g

0x7dac,	// (0x0005212d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7dac,	// (0x0005212d) list_single_graphic_2heading_pane_fp_t1

0x7c17,	// (0x00051f98) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7c17,	// (0x00051f98) list_single_graphic_2heading_pane_fp_t2

0x7dc2,	// (0x00052143) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7dc2,	// (0x00052143) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc71,	// (0x00059ff2) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc71,	// (0x00059ff2) list_single_graphic_2heading_pane_fp_t

0xc3bc,	// (0x0005673d) fep_hwr_write_pane_g5_ParamLimits

0xc3bc,	// (0x0005673d) fep_hwr_write_pane_g5

0xc3c8,	// (0x00056749) fep_hwr_write_pane_g6_ParamLimits

0xc3c8,	// (0x00056749) fep_hwr_write_pane_g6

0xcc3f,	// (0x00056fc0) eswt_shell_pane_ParamLimits

0x9ddc,	// (0x0005415d) bg_popup_window_pane_cp18_ParamLimits

0xb0a5,	// (0x00055426) heading_pane_cp70

0xcd69,	// (0x000570ea) popup_eswt_tasktip_window_t1_ParamLimits

0x98e1,	// (0x00053c62) aid_touch_tab_arrow_left

0x98ed,	// (0x00053c6e) aid_touch_tab_arrow_right

0x7faa,	// (0x0005232b) title_pane_g3_ParamLimits

0x7faa,	// (0x0005232b) title_pane_g3

0x8887,	// (0x00052c08) set_value_pane_g1

0x5fd1,	// (0x00050352) popup_toolbar_trans_pane_ParamLimits

0xcece,	// (0x0005724f) aid_size_cell_tb_trans_pane_ParamLimits

0x88c8,	// (0x00052c49) bg_tb_trans_pane_ParamLimits

0xcee0,	// (0x00057261) grid_tb_trans_pane_ParamLimits

0x82eb,	// (0x0005266c) cont_note_pane_ParamLimits

0x82eb,	// (0x0005266c) cont_note_pane

0x862d,	// (0x000529ae) cont_snote2_single_text_pane_ParamLimits

0x862d,	// (0x000529ae) cont_snote2_single_text_pane

0x862d,	// (0x000529ae) cont_snote2_single_graphic_pane_ParamLimits

0x862d,	// (0x000529ae) cont_snote2_single_graphic_pane

0xa3fa,	// (0x0005477b) cont_note_wait_pane_ParamLimits

0xa3fa,	// (0x0005477b) cont_note_wait_pane

0xa3fa,	// (0x0005477b) cont_note_image_pane_ParamLimits

0xa3fa,	// (0x0005477b) cont_note_image_pane

0xcf88,	// (0x00057309) popup_note2_window_g1_ParamLimits

0xcf88,	// (0x00057309) popup_note2_window_g1

0xcfb9,	// (0x0005733a) popup_note2_window_t1_ParamLimits

0xcfb9,	// (0x0005733a) popup_note2_window_t1

0xcffe,	// (0x0005737f) popup_note2_window_t2_ParamLimits

0xcffe,	// (0x0005737f) popup_note2_window_t2

0xd043,	// (0x000573c4) popup_note2_window_t3_ParamLimits

0xd043,	// (0x000573c4) popup_note2_window_t3

0xd088,	// (0x00057409) popup_note2_window_t4_ParamLimits

0xd088,	// (0x00057409) popup_note2_window_t4

0x8363,	// (0x000526e4) popup_note2_window_t5_ParamLimits

0x8363,	// (0x000526e4) popup_note2_window_t5

0x0004,

0xfc7d,	// (0x00059ffe) popup_note2_window_t_ParamLimits

0xfc7d,	// (0x00059ffe) popup_note2_window_t

0xd0b7,	// (0x00057438) popup_note2_image_window_g1_ParamLimits

0xd0b7,	// (0x00057438) popup_note2_image_window_g1

0xd0c3,	// (0x00057444) popup_note2_image_window_g2_ParamLimits

0xd0c3,	// (0x00057444) popup_note2_image_window_g2

0x0001,

0xfc88,	// (0x0005a009) popup_note2_image_window_g_ParamLimits

0xfc88,	// (0x0005a009) popup_note2_image_window_g

0xd0d5,	// (0x00057456) popup_note2_image_window_t1_ParamLimits

0xd0d5,	// (0x00057456) popup_note2_image_window_t1

0xd0ed,	// (0x0005746e) popup_note2_image_window_t2_ParamLimits

0xd0ed,	// (0x0005746e) popup_note2_image_window_t2

0xd105,	// (0x00057486) popup_note2_image_window_t3_ParamLimits

0xd105,	// (0x00057486) popup_note2_image_window_t3

0x0002,

0xfc8d,	// (0x0005a00e) popup_note2_image_window_t_ParamLimits

0xfc8d,	// (0x0005a00e) popup_note2_image_window_t

0xa408,	// (0x00054789) popup_note2_wait_window_g1_ParamLimits

0xa408,	// (0x00054789) popup_note2_wait_window_g1

0xd121,	// (0x000574a2) popup_note2_wait_window_g2_ParamLimits

0xd121,	// (0x000574a2) popup_note2_wait_window_g2

0xa420,	// (0x000547a1) popup_note2_wait_window_g3_ParamLimits

0xa420,	// (0x000547a1) popup_note2_wait_window_g3

0x0002,

0xfc94,	// (0x0005a015) popup_note2_wait_window_g_ParamLimits

0xfc94,	// (0x0005a015) popup_note2_wait_window_g

0xd12d,	// (0x000574ae) popup_note2_wait_window_t1_ParamLimits

0xd12d,	// (0x000574ae) popup_note2_wait_window_t1

0xd14b,	// (0x000574cc) popup_note2_wait_window_t2_ParamLimits

0xd14b,	// (0x000574cc) popup_note2_wait_window_t2

0xd169,	// (0x000574ea) popup_note2_wait_window_t3_ParamLimits

0xd169,	// (0x000574ea) popup_note2_wait_window_t3

0xd17b,	// (0x000574fc) popup_note2_wait_window_t4_ParamLimits

0xd17b,	// (0x000574fc) popup_note2_wait_window_t4

0x0003,

0xfc9b,	// (0x0005a01c) popup_note2_wait_window_t_ParamLimits

0xfc9b,	// (0x0005a01c) popup_note2_wait_window_t

0xd18d,	// (0x0005750e) wait_bar2_pane_ParamLimits

0xd18d,	// (0x0005750e) wait_bar2_pane

0xd1a5,	// (0x00057526) popup_snote2_single_text_window_g1_ParamLimits

0xd1a5,	// (0x00057526) popup_snote2_single_text_window_g1

0xd1cd,	// (0x0005754e) popup_snote2_single_text_window_t1_ParamLimits

0xd1cd,	// (0x0005754e) popup_snote2_single_text_window_t1

0xd219,	// (0x0005759a) popup_snote2_single_text_window_t2_ParamLimits

0xd219,	// (0x0005759a) popup_snote2_single_text_window_t2

0xd265,	// (0x000575e6) popup_snote2_single_text_window_t3_ParamLimits

0xd265,	// (0x000575e6) popup_snote2_single_text_window_t3

0xd2a6,	// (0x00057627) popup_snote2_single_text_window_t4_ParamLimits

0xd2a6,	// (0x00057627) popup_snote2_single_text_window_t4

0xd2dc,	// (0x0005765d) popup_snote2_single_text_window_t5_ParamLimits

0xd2dc,	// (0x0005765d) popup_snote2_single_text_window_t5

0x0004,

0xfca4,	// (0x0005a025) popup_snote2_single_text_window_t_ParamLimits

0xfca4,	// (0x0005a025) popup_snote2_single_text_window_t

0xd307,	// (0x00057688) popup_snote2_single_graphic_window_g1_ParamLimits

0xd307,	// (0x00057688) popup_snote2_single_graphic_window_g1

0xd32f,	// (0x000576b0) popup_snote2_single_graphic_window_g2_ParamLimits

0xd32f,	// (0x000576b0) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaf,	// (0x0005a030) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaf,	// (0x0005a030) popup_snote2_single_graphic_window_g

0xd357,	// (0x000576d8) popup_snote2_single_graphic_window_t1_ParamLimits

0xd357,	// (0x000576d8) popup_snote2_single_graphic_window_t1

0xd3a3,	// (0x00057724) popup_snote2_single_graphic_window_t2_ParamLimits

0xd3a3,	// (0x00057724) popup_snote2_single_graphic_window_t2

0xd265,	// (0x000575e6) popup_snote2_single_graphic_window_t3_ParamLimits

0xd265,	// (0x000575e6) popup_snote2_single_graphic_window_t3

0xd2a6,	// (0x00057627) popup_snote2_single_graphic_window_t4_ParamLimits

0xd2a6,	// (0x00057627) popup_snote2_single_graphic_window_t4

0xd2dc,	// (0x0005765d) popup_snote2_single_graphic_window_t5_ParamLimits

0xd2dc,	// (0x0005765d) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb4,	// (0x0005a035) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb4,	// (0x0005a035) popup_snote2_single_graphic_window_t

0xbdb2,	// (0x00056133) clock_nsta_pane_cp2_t1

0xbdb2,	// (0x00056133) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x00059e49) clock_nsta_pane_cp2_t

0x5317,	// (0x0004f698) form_field_data_wide_pane_g1_ParamLimits

0x8863,	// (0x00052be4) form_field_data_wide_pane_g2_ParamLimits

0x8863,	// (0x00052be4) form_field_data_wide_pane_g2

0x88d6,	// (0x00052c57) form_field_data_wide_pane_g3_ParamLimits

0x88d6,	// (0x00052c57) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00059a01) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00059a01) form_field_data_wide_pane_g

0xbca4,	// (0x00056025) grid_touch_3_pane_ParamLimits

0xbca4,	// (0x00056025) grid_touch_3_pane

0xd3ef,	// (0x00057770) cell_touch_3_pane_ParamLimits

0xd3ef,	// (0x00057770) cell_touch_3_pane

0xc330,	// (0x000566b1) cell_touch_3_pane_g1

0xc330,	// (0x000566b1) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x00059ece) cell_touch_3_pane_g

0x8395,	// (0x00052716) cont_query_data_pane

0x839d,	// (0x0005271e) cont_query_data_pane_cp1

0xd420,	// (0x000577a1) button_value_adjust_pane_cp7

0xd428,	// (0x000577a9) query_popup_pane_cp3

0x8ff8,	// (0x00053379) bg_popup_sub_pane_cp22_ParamLimits

0x56c3,	// (0x0004fa44) navi_navi_volume_pane_cp2

0x56db,	// (0x0004fa5c) popup_side_volume_key_window_g2

0x56e7,	// (0x0004fa68) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00059a97) popup_side_volume_key_window_g

0x5701,	// (0x0004fa82) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00059a9e) popup_side_volume_key_window_t

0x92c6,	// (0x00053647) popup_side_volume_key_window_ParamLimits

0x7646,	// (0x000519c7) list_double_graphic_pane_g4_ParamLimits

0x7646,	// (0x000519c7) list_double_graphic_pane_g4

0x781a,	// (0x00051b9b) list_single_2heading_msg_pane_ParamLimits

0x781a,	// (0x00051b9b) list_single_2heading_msg_pane

0x7de2,	// (0x00052163) list_single_2heading_msg_pane_g1_ParamLimits

0x7de2,	// (0x00052163) list_single_2heading_msg_pane_g1

0x9469,	// (0x000537ea) list_single_2heading_msg_pane_g2_ParamLimits

0x9469,	// (0x000537ea) list_single_2heading_msg_pane_g2

0x7dee,	// (0x0005216f) list_single_2heading_msg_pane_g3_ParamLimits

0x7dee,	// (0x0005216f) list_single_2heading_msg_pane_g3

0x7dfa,	// (0x0005217b) list_single_2heading_msg_pane_g4_ParamLimits

0x7dfa,	// (0x0005217b) list_single_2heading_msg_pane_g4

0x0003,

0xfcbf,	// (0x0005a040) list_single_2heading_msg_pane_g_ParamLimits

0xfcbf,	// (0x0005a040) list_single_2heading_msg_pane_g

0x7e12,	// (0x00052193) list_single_2heading_msg_pane_t1_ParamLimits

0x7e12,	// (0x00052193) list_single_2heading_msg_pane_t1

0x7e3a,	// (0x000521bb) list_single_2heading_msg_pane_t2_ParamLimits

0x7e3a,	// (0x000521bb) list_single_2heading_msg_pane_t2

0x7e6e,	// (0x000521ef) list_single_2heading_msg_pane_t3_ParamLimits

0x7e6e,	// (0x000521ef) list_single_2heading_msg_pane_t3

0x7ea7,	// (0x00052228) list_single_2heading_msg_pane_t4_ParamLimits

0x7ea7,	// (0x00052228) list_single_2heading_msg_pane_t4

0x0003,

0xfcc8,	// (0x0005a049) list_single_2heading_msg_pane_t_ParamLimits

0xfcc8,	// (0x0005a049) list_single_2heading_msg_pane_t

0x7fb6,	// (0x00052337) title_pane_g4_ParamLimits

0x7fb6,	// (0x00052337) title_pane_g4

0x54d1,	// (0x0004f852) title_pane_stacon_g3_ParamLimits

0x54d1,	// (0x0004f852) title_pane_stacon_g3

0xcf4b,	// (0x000572cc) list_single_2graphic_im_pane_g4_ParamLimits

0xcf4b,	// (0x000572cc) list_single_2graphic_im_pane_g4

0xae61,	// (0x000551e2) popup_side_volume_key_window_cp

0xb60f,	// (0x00055990) main_idle_act2_pane_t1

0x60e3,	// (0x00050464) toolbar_button_pane_g10

0x8825,	// (0x00052ba6) popup_toolbar_window_cp1

0xbda3,	// (0x00056124) clock_nsta_pane_cp_t1

0xbda3,	// (0x00056124) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x00059e44) clock_nsta_pane_cp_t

0x56c3,	// (0x0004fa44) navi_navi_volume_pane_cp2_ParamLimits

0x56cf,	// (0x0004fa50) popup_side_volume_key_window_g1_ParamLimits

0x56db,	// (0x0004fa5c) popup_side_volume_key_window_g2_ParamLimits

0x56e7,	// (0x0004fa68) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00059a97) popup_side_volume_key_window_g_ParamLimits

0x65c7,	// (0x00050948) fep_hwr_aid_pane

0x666e,	// (0x000509ef) bg_fep_hwr_top_pane_g4_ParamLimits

0xc38c,	// (0x0005670d) fep_hwr_top_pane_g1_ParamLimits

0xc39e,	// (0x0005671f) fep_hwr_top_pane_g2_ParamLimits

0x668e,	// (0x00050a0f) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x00059e99) fep_hwr_top_pane_g_ParamLimits

0x66a3,	// (0x00050a24) fep_hwr_top_text_pane_ParamLimits

0xac24,	// (0x00054fa5) aid_touch_tab_arrow_arrow_2

0xac2d,	// (0x00054fae) aid_touch_tab_arrow_left_2

0x65db,	// (0x0005095c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6612,	// (0x00050993) fep_hwr_prediction_pane

0xc4f5,	// (0x00056876) fep_vkb_prediction_pane

0xc5f2,	// (0x00056973) fep_vkb_side_pane_g3_ParamLimits

0xc5f2,	// (0x00056973) fep_vkb_side_pane_g3

0x681e,	// (0x00050b9f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x688a,	// (0x00050c0b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6897,	// (0x00050c18) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc7,	// (0x00059f48) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x69c6,	// (0x00050d47) fep_hwr_prediction_pane_g1

0x69d0,	// (0x00050d51) fep_hwr_prediction_pane_g2

0x69d8,	// (0x00050d59) fep_hwr_prediction_pane_g3

0x69e0,	// (0x00050d61) fep_hwr_prediction_pane_g4

0x0003,

0xfcd1,	// (0x0005a052) fep_hwr_prediction_pane_g

0xd44d,	// (0x000577ce) fep_vkb_prediction_pane_g1

0xd457,	// (0x000577d8) fep_vkb_prediction_pane_g2

0xd45f,	// (0x000577e0) fep_vkb_prediction_pane_g3

0xd467,	// (0x000577e8) fep_vkb_prediction_pane_g4

0x0003,

0xfcda,	// (0x0005a05b) fep_vkb_prediction_pane_g

0x6423,	// (0x000507a4) slider_set_pane_g3

0x6437,	// (0x000507b8) slider_set_pane_g4

0x644f,	// (0x000507d0) slider_set_pane_g5

0x6423,	// (0x000507a4) slider_set_pane_g6

0x6465,	// (0x000507e6) slider_set_pane_g7

0xb2b4,	// (0x00055635) slider_form_pane_g3

0xb2bd,	// (0x0005563e) slider_form_pane_g4

0xb2c5,	// (0x00055646) slider_form_pane_g5

0xb2b4,	// (0x00055635) slider_form_pane_g6

0xb2cd,	// (0x0005564e) slider_form_pane_g7

0xb8ae,	// (0x00055c2f) slider_set_pane_vc_g3

0xb8b7,	// (0x00055c38) slider_set_pane_vc_g4

0xb8c0,	// (0x00055c41) slider_set_pane_vc_g5

0xb8ae,	// (0x00055c2f) slider_set_pane_vc_g6

0xb8c9,	// (0x00055c4a) slider_set_pane_vc_g7

0xba79,	// (0x00055dfa) slider_form_pane_vc_g1

0xba82,	// (0x00055e03) slider_form_pane_vc_g2

0xba8b,	// (0x00055e0c) slider_form_pane_vc_g3

0xba79,	// (0x00055dfa) slider_form_pane_vc_g4

0xba94,	// (0x00055e15) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x00059e16) slider_form_pane_vc_g

0x4acb,	// (0x0004ee4c) main_idle_act3_pane

0xd46f,	// (0x000577f0) ai3_links_pane

0xd478,	// (0x000577f9) popup_ai3_data_window_ParamLimits

0xd478,	// (0x000577f9) popup_ai3_data_window

0x7f6e,	// (0x000522ef) grid_ai3_links_pane

0xd490,	// (0x00057811) cell_ai3_links_pane_ParamLimits

0xd490,	// (0x00057811) cell_ai3_links_pane

0xd4a8,	// (0x00057829) bg_popup_sub_pane_cp11

0xd4b5,	// (0x00057836) cell_ai3_links_pane_g1

0x7f6e,	// (0x000522ef) bg_popup_sub_pane_cp12

0xd4da,	// (0x0005785b) heading_ai3_data_pane

0xd4e2,	// (0x00057863) list_ai3_gene_pane

0xd4ee,	// (0x0005786f) popup_ai3_data_window_g1

0xd4f6,	// (0x00057877) heading_ai3_data_pane_g1

0xd4fe,	// (0x0005787f) heading_ai3_data_pane_t1

0xd50c,	// (0x0005788d) list_double_ai3_gene_pane_ParamLimits

0xd50c,	// (0x0005788d) list_double_ai3_gene_pane

0xd519,	// (0x0005789a) list_single_ai3_gene_pane_ParamLimits

0xd519,	// (0x0005789a) list_single_ai3_gene_pane

0xc2f5,	// (0x00056676) list_highlight_pane_cp7_ParamLimits

0xc2f5,	// (0x00056676) list_highlight_pane_cp7

0xd526,	// (0x000578a7) list_single_a13_gene_pane_t1_ParamLimits

0xd526,	// (0x000578a7) list_single_a13_gene_pane_t1

0xd53d,	// (0x000578be) list_single_ai3_gene_pane_g1

0xd546,	// (0x000578c7) list_single_ai3_gene_pane_g2

0x0001,

0xfce3,	// (0x0005a064) list_single_ai3_gene_pane_g

0xd54e,	// (0x000578cf) list_double_ai3_gene_pane_g1_ParamLimits

0xd54e,	// (0x000578cf) list_double_ai3_gene_pane_g1

0xd55a,	// (0x000578db) list_double_ai3_gene_pane_t1_ParamLimits

0xd55a,	// (0x000578db) list_double_ai3_gene_pane_t1

0xd576,	// (0x000578f7) list_double_ai3_gene_pane_t2_ParamLimits

0xd576,	// (0x000578f7) list_double_ai3_gene_pane_t2

0xd58b,	// (0x0005790c) list_double_ai3_gene_pane_t3_ParamLimits

0xd58b,	// (0x0005790c) list_double_ai3_gene_pane_t3

0x0002,

0xfce8,	// (0x0005a069) list_double_ai3_gene_pane_t_ParamLimits

0xfce8,	// (0x0005a069) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7dd8,	// (0x00052159) aid_size_min_col_2

0xd439,	// (0x000577ba) aid_size_min_msg_ParamLimits

0xd439,	// (0x000577ba) aid_size_min_msg

0xc6f2,	// (0x00056a73) fep_vkb_top_text_pane_g2_ParamLimits

0xc6f2,	// (0x00056a73) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x00059ec9) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x00059ec9) fep_vkb_top_text_pane_g

0x4acb,	// (0x0004ee4c) main_hc_apps_shell_pane

0xd5a8,	// (0x00057929) grid_hc_apps_pane_ParamLimits

0xd5a8,	// (0x00057929) grid_hc_apps_pane

0xd5b7,	// (0x00057938) list_hc_apps_pane

0xd5bf,	// (0x00057940) scroll_pane_cp37_ParamLimits

0xd5bf,	// (0x00057940) scroll_pane_cp37

0xd5cb,	// (0x0005794c) cell_hc_apps_pane_ParamLimits

0xd5cb,	// (0x0005794c) cell_hc_apps_pane

0xd679,	// (0x000579fa) cell_hc_apps_pane_g1_ParamLimits

0xd679,	// (0x000579fa) cell_hc_apps_pane_g1

0xd6aa,	// (0x00057a2b) cell_hc_apps_pane_g2_ParamLimits

0xd6aa,	// (0x00057a2b) cell_hc_apps_pane_g2

0xd6c6,	// (0x00057a47) cell_hc_apps_pane_g3_ParamLimits

0xd6c6,	// (0x00057a47) cell_hc_apps_pane_g3

0x0002,

0xfcef,	// (0x0005a070) cell_hc_apps_pane_g_ParamLimits

0xfcef,	// (0x0005a070) cell_hc_apps_pane_g

0xd6e8,	// (0x00057a69) cell_hc_apps_pane_t1_ParamLimits

0xd6e8,	// (0x00057a69) cell_hc_apps_pane_t1

0x82eb,	// (0x0005266c) grid_highlight_pane_cp10_ParamLimits

0x82eb,	// (0x0005266c) grid_highlight_pane_cp10

0xd728,	// (0x00057aa9) list_single_hc_apps_pane_ParamLimits

0xd728,	// (0x00057aa9) list_single_hc_apps_pane

0xd790,	// (0x00057b11) list_single_hc_apps_pane_g1

0x7ecc,	// (0x0005224d) list_single_hc_apps_pane_g2

0x0001,

0xfcf6,	// (0x0005a077) list_single_hc_apps_pane_g

0x7ee5,	// (0x00052266) list_single_hc_apps_pane_g2_copy1

0x7f01,	// (0x00052282) list_single_hc_apps_pane_t1

0x8062,	// (0x000523e3) bg_set_opt_pane_cp_ParamLimits

0x4d1e,	// (0x0004f09f) setting_slider_pane_t1_ParamLimits

0x4d37,	// (0x0004f0b8) setting_slider_pane_t2_ParamLimits

0x4d51,	// (0x0004f0d2) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000598df) setting_slider_pane_t_ParamLimits

0x4d69,	// (0x0004f0ea) slider_set_pane_ParamLimits

0x59d6,	// (0x0004fd57) control_pane_g5_ParamLimits

0x59d6,	// (0x0004fd57) control_pane_g5

0xb111,	// (0x00055492) slider_set_pane_g1_ParamLimits

0x6417,	// (0x00050798) slider_set_pane_g2_ParamLimits

0x6423,	// (0x000507a4) slider_set_pane_g3_ParamLimits

0x6437,	// (0x000507b8) slider_set_pane_g4_ParamLimits

0x644f,	// (0x000507d0) slider_set_pane_g5_ParamLimits

0x6423,	// (0x000507a4) slider_set_pane_g6_ParamLimits

0x6465,	// (0x000507e6) slider_set_pane_g7_ParamLimits

0xf964,	// (0x00059ce5) slider_set_pane_g_ParamLimits

0x93b0,	// (0x00053731) navi_icon_text_pane_ParamLimits

0x98a2,	// (0x00053c23) aid_fill_nsta_2_ParamLimits

0x98e1,	// (0x00053c62) aid_touch_tab_arrow_left_ParamLimits

0x98ed,	// (0x00053c6e) aid_touch_tab_arrow_right_ParamLimits

0x9959,	// (0x00053cda) clock_nsta_pane_ParamLimits

0xac06,	// (0x00054f87) navi_icon_pane_g1_ParamLimits

0xac12,	// (0x00054f93) navi_text_pane_t1_ParamLimits

0xbeb5,	// (0x00056236) navi_icon_text_pane_g1_ParamLimits

0xbec1,	// (0x00056242) navi_icon_text_pane_t1_ParamLimits

0xd790,	// (0x00057b11) list_single_hc_apps_pane_g1_ParamLimits

0x7ecc,	// (0x0005224d) list_single_hc_apps_pane_g2_ParamLimits

0xfcf6,	// (0x0005a077) list_single_hc_apps_pane_g_ParamLimits

0x7ee5,	// (0x00052266) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7f01,	// (0x00052282) list_single_hc_apps_pane_t1_ParamLimits

0x4c28,	// (0x0004efa9) popup_toolbar2_fixed_window_ParamLimits

0x4c28,	// (0x0004efa9) popup_toolbar2_fixed_window

0x5fc7,	// (0x00050348) popup_toolbar2_float_window

0x7f6e,	// (0x000522ef) bg_popup_sub_pane_cp27

0xd7a9,	// (0x00057b2a) grid_toolbar2_float_pane

0x7f6e,	// (0x000522ef) bg_popup_sub_pane_cp26

0xd7a9,	// (0x00057b2a) grid_toolbar2_fixed_pane

0xd7b1,	// (0x00057b32) cell_toolbar2_fixed_pane_ParamLimits

0xd7b1,	// (0x00057b32) cell_toolbar2_fixed_pane

0xd7c2,	// (0x00057b43) cell_toolbar2_fixed_pane_g1

0x5e9d,	// (0x0005021e) toolbar2_fixed_button_pane

0x9d68,	// (0x000540e9) toolbar2_fixed_button_pane_g1

0x9d78,	// (0x000540f9) toolbar2_fixed_button_pane_g2

0x9d70,	// (0x000540f1) toolbar2_fixed_button_pane_g3

0x9d88,	// (0x00054109) toolbar2_fixed_button_pane_g4

0x9d80,	// (0x00054101) toolbar2_fixed_button_pane_g5

0x9d90,	// (0x00054111) toolbar2_fixed_button_pane_g6

0x9d98,	// (0x00054119) toolbar2_fixed_button_pane_g7

0x9da8,	// (0x00054129) toolbar2_fixed_button_pane_g8

0x9da0,	// (0x00054121) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00059be7) toolbar2_fixed_button_pane_g

0xd7cb,	// (0x00057b4c) cell_toolbar2_float_pane_ParamLimits

0xd7cb,	// (0x00057b4c) cell_toolbar2_float_pane

0xd7df,	// (0x00057b60) cell_toolbar2_float_pane_g1

0x5e9d,	// (0x0005021e) toolbar2_fixed_button_pane_cp

0xc45c,	// (0x000567dd) fep_vkb_accented_list_pane_ParamLimits

0xc45c,	// (0x000567dd) fep_vkb_accented_list_pane

0x67fe,	// (0x00050b7f) bg_popup_fep_shadow_pane_g9

0x9530,	// (0x000538b1) bg_popup_fep_shadow_pane_cp3

0x8a11,	// (0x00052d92) list_accented_list_pane

0xd7e8,	// (0x00057b69) list_single_accented_list_pane_ParamLimits

0xd7e8,	// (0x00057b69) list_single_accented_list_pane

0x9530,	// (0x000538b1) list_highlight_pane_cp10

0xd7f9,	// (0x00057b7a) list_single_accented_list_pane_t1

0x5f17,	// (0x00050298) popup_slider_window_ParamLimits

0x5f17,	// (0x00050298) popup_slider_window

0xd430,	// (0x000577b1) aid_indentation_list_msg

0xd8b3,	// (0x00057c34) bg_popup_window_pane_cp19

0xd91d,	// (0x00057c9e) popup_slider_window_g1

0xd939,	// (0x00057cba) popup_slider_window_g2

0xd955,	// (0x00057cd6) popup_slider_window_g3

0x0005,

0xfcfb,	// (0x0005a07c) popup_slider_window_g

0xd9b1,	// (0x00057d32) popup_slider_window_t1

0xda25,	// (0x00057da6) small_volume_slider_vertical_pane

0xc330,	// (0x000566b1) small_volume_slider_vertical_pane_g1

0xc330,	// (0x000566b1) small_volume_slider_vertical_pane_g2

0xda41,	// (0x00057dc2) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0d,	// (0x0005a08e) small_volume_slider_vertical_pane_g

0x49ee,	// (0x0004ed6f) area_side_right_pane_ParamLimits

0x49ee,	// (0x0004ed6f) area_side_right_pane

0x69e8,	// (0x00050d69) aid_size_side_button_ParamLimits

0x69e8,	// (0x00050d69) aid_size_side_button

0x69fc,	// (0x00050d7d) grid_sctrl_middle_pane_ParamLimits

0x69fc,	// (0x00050d7d) grid_sctrl_middle_pane

0x6a1b,	// (0x00050d9c) sctrl_sk_bottom_pane

0x6a2c,	// (0x00050dad) sctrl_sk_top_pane

0x6a3e,	// (0x00050dbf) aid_touch_sctrl_top

0x6a4b,	// (0x00050dcc) bg_sctrl_sk_pane_ParamLimits

0x6a4b,	// (0x00050dcc) bg_sctrl_sk_pane

0x6a59,	// (0x00050dda) sctrl_sk_top_pane_g1

0x6a66,	// (0x00050de7) sctrl_sk_top_pane_t1

0x6a3e,	// (0x00050dbf) aid_touch_sctrl_bottom

0x6a4b,	// (0x00050dcc) bg_sctrl_sk_pane_cp_ParamLimits

0x6a4b,	// (0x00050dcc) bg_sctrl_sk_pane_cp

0x6a81,	// (0x00050e02) sctrl_sk_bottom_pane_g1

0x6a66,	// (0x00050de7) sctrl_sk_bottom_pane_t1

0x6a8a,	// (0x00050e0b) cell_sctrl_middle_pane_ParamLimits

0x6a8a,	// (0x00050e0b) cell_sctrl_middle_pane

0x6aa5,	// (0x00050e26) aid_touch_sctrl_middle_ParamLimits

0x6aa5,	// (0x00050e26) aid_touch_sctrl_middle

0x6ab7,	// (0x00050e38) bg_sctrl_middle_pane_ParamLimits

0x6ab7,	// (0x00050e38) bg_sctrl_middle_pane

0x681e,	// (0x00050b9f) cell_sctrl_middle_pane_g1_ParamLimits

0x681e,	// (0x00050b9f) cell_sctrl_middle_pane_g1

0x6ac5,	// (0x00050e46) cell_sctrl_middle_pane_g2_ParamLimits

0x6ac5,	// (0x00050e46) cell_sctrl_middle_pane_g2

0x0001,

0xfd19,	// (0x0005a09a) cell_sctrl_middle_pane_g_ParamLimits

0xfd19,	// (0x0005a09a) cell_sctrl_middle_pane_g

0x9d68,	// (0x000540e9) bg_sctrl_middle_pane_g1

0x9d70,	// (0x000540f1) bg_sctrl_middle_pane_g2

0x9d78,	// (0x000540f9) bg_sctrl_middle_pane_g3

0x9d80,	// (0x00054101) bg_sctrl_middle_pane_g4

0x9d88,	// (0x00054109) bg_sctrl_middle_pane_g5

0x9d90,	// (0x00054111) bg_sctrl_middle_pane_g6

0x9d98,	// (0x00054119) bg_sctrl_middle_pane_g7

0x9da0,	// (0x00054121) bg_sctrl_middle_pane_g8

0x0007,

0xfd1e,	// (0x0005a09f) bg_sctrl_middle_pane_g

0x9da8,	// (0x00054129) bg_sctrl_middle_pane_g8_copy1

0x9d68,	// (0x000540e9) bg_sctrl_sk_pane_g1

0x9d78,	// (0x000540f9) bg_sctrl_sk_pane_g2

0x9d70,	// (0x000540f1) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00059be7) bg_sctrl_sk_pane_g

0x87eb,	// (0x00052b6c) aid_size_touch_scroll_bar

0x9d88,	// (0x00054109) bg_sctrl_sk_pane_g4

0x9d80,	// (0x00054101) bg_sctrl_sk_pane_g5

0x9d90,	// (0x00054111) bg_sctrl_sk_pane_g6

0x9d98,	// (0x00054119) bg_sctrl_sk_pane_g7

0x9da8,	// (0x00054129) bg_sctrl_sk_pane_g8

0x9da0,	// (0x00054121) bg_sctrl_sk_pane_g9

0x5b88,	// (0x0004ff09) popup_fep_china_hwr2_fs_candidate_window

0x5b92,	// (0x0004ff13) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5b92,	// (0x0004ff13) popup_fep_china_hwr2_fs_control_window

0x681e,	// (0x00050b9f) sctrl_sk_top_pane_g2

0x0001,

0xfd14,	// (0x0005a095) sctrl_sk_top_pane_g

0xda4a,	// (0x00057dcb) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda4a,	// (0x00057dcb) aid_fep_china_hwr2_fs_cell

0xda5c,	// (0x00057ddd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda5c,	// (0x00057ddd) bg_popup_fep_shadow_pane_cp4

0xda73,	// (0x00057df4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda73,	// (0x00057df4) bg_popup_fep_shadow_pane_cp5

0xda85,	// (0x00057e06) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda85,	// (0x00057e06) popup_fep_china_hwr2_fs_control_bar_grid

0xda95,	// (0x00057e16) popup_fep_china_hwr2_fs_control_funtion_grid

0xda9d,	// (0x00057e1e) aid_fep_china_hwr2_fs_candi_cell

0x7f6e,	// (0x000522ef) bg_popup_fep_shadow_pane_cp6

0xdaa7,	// (0x00057e28) popup_fep_china_hwr2_fs_candidate_grid

0xdab1,	// (0x00057e32) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdab1,	// (0x00057e32) cell_fep_china_hwr2_fs_funtion_grid

0xc330,	// (0x000566b1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xdac9,	// (0x00057e4a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xdac9,	// (0x00057e4a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xdad7,	// (0x00057e58) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xdad7,	// (0x00057e58) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2f,	// (0x0005a0b0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2f,	// (0x0005a0b0) cell_fep_china_hwr2_fs_funtion_grid_g

0xdaed,	// (0x00057e6e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdaed,	// (0x00057e6e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdb02,	// (0x00057e83) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdb02,	// (0x00057e83) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd34,	// (0x0005a0b5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd34,	// (0x0005a0b5) cell_fep_china_hwr2_fs_funtion_grid_t

0xdb1e,	// (0x00057e9f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdb26,	// (0x00057ea7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdb2e,	// (0x00057eaf) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd39,	// (0x0005a0ba) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdb36,	// (0x00057eb7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdb36,	// (0x00057eb7) cell_fep_china_hwr2_fs_candidate_grid

0xdb4f,	// (0x00057ed0) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb57,	// (0x00057ed8) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc330,	// (0x000566b1) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc330,	// (0x000566b1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x00059ece) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb5f,	// (0x00057ee0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9966,	// (0x00053ce7) clock_nsta_pane_cp_24_ParamLimits

0x9966,	// (0x00053ce7) clock_nsta_pane_cp_24

0x99e4,	// (0x00053d65) indicator_nsta_pane_cp_24_ParamLimits

0x99e4,	// (0x00053d65) indicator_nsta_pane_cp_24

0xaa82,	// (0x00054e03) heading_pane_g1

0x0001,

0xf8cb,	// (0x00059c4c) heading_pane_g

0xb458,	// (0x000557d9) grid_sct_catagory_button_pane

0xb488,	// (0x00055809) scroll_pane_cp5_ParamLimits

0xbf03,	// (0x00056284) button_value_adjust_pane_cp5_ParamLimits

0xbf03,	// (0x00056284) button_value_adjust_pane_cp5

0xbfe2,	// (0x00056363) form2_midp_time_pane_ParamLimits

0xdb6d,	// (0x00057eee) cell_sct_catagory_button_pane_ParamLimits

0xdb6d,	// (0x00057eee) cell_sct_catagory_button_pane

0xc2f5,	// (0x00056676) bg_button_pane_cp01_ParamLimits

0xc2f5,	// (0x00056676) bg_button_pane_cp01

0xc330,	// (0x000566b1) cell_sct_catagory_button_pane_g1

0x5f56,	// (0x000502d7) popup_tb_extension_window

0xdb7f,	// (0x00057f00) aid_size_cell_ext_ParamLimits

0xdb7f,	// (0x00057f00) aid_size_cell_ext

0x82eb,	// (0x0005266c) bg_tb_trans_pane_cp1_ParamLimits

0x82eb,	// (0x0005266c) bg_tb_trans_pane_cp1

0xdb9f,	// (0x00057f20) grid_tb_ext_pane_ParamLimits

0xdb9f,	// (0x00057f20) grid_tb_ext_pane

0xdbd1,	// (0x00057f52) cell_tb_ext_pane_ParamLimits

0xdbd1,	// (0x00057f52) cell_tb_ext_pane

0xdbe8,	// (0x00057f69) cell_tb_ext_pane_g1_ParamLimits

0xdbe8,	// (0x00057f69) cell_tb_ext_pane_g1

0xdc05,	// (0x00057f86) cell_tb_ext_pane_t1

0x82eb,	// (0x0005266c) list_highlight_pane_cp11_ParamLimits

0x82eb,	// (0x0005266c) list_highlight_pane_cp11

0x4c47,	// (0x0004efc8) popup_uni_indicator_window_ParamLimits

0x4c47,	// (0x0004efc8) popup_uni_indicator_window

0x88c8,	// (0x00052c49) bg_popup_sub_pane_cp14

0xdc20,	// (0x00057fa1) list_uniindi_pane

0xdc2c,	// (0x00057fad) uniindi_top_pane

0x82eb,	// (0x0005266c) bg_uniindi_top_pane

0xdc4b,	// (0x00057fcc) uniindi_top_pane_g1

0xdc61,	// (0x00057fe2) uniindi_top_pane_g2

0x0003,

0xfd40,	// (0x0005a0c1) uniindi_top_pane_g

0xdc8b,	// (0x0005800c) uniindi_top_pane_t1

0xdcb5,	// (0x00058036) list_single_uniindi_pane_ParamLimits

0xdcb5,	// (0x00058036) list_single_uniindi_pane

0xc330,	// (0x000566b1) bg_uniindi_top_pane_g1

0xdcc8,	// (0x00058049) list_single_uniindi_pane_g1

0xdcdb,	// (0x0005805c) list_single_uniindi_pane_t1

0x4acb,	// (0x0004ee4c) control_bg_pane

0xdd00,	// (0x00058081) bg_sctrl_sk_pane_cp1

0xdd09,	// (0x0005808a) bg_sctrl_sk_pane_cp2

0xdd12,	// (0x00058093) control_bg_pane_g1

0xdd1b,	// (0x0005809c) control_bg_pane_g2

0x0001,

0xfd49,	// (0x0005a0ca) control_bg_pane_g

0xbd47,	// (0x000560c8) cell_indicator_nsta_pane_g1_ParamLimits

0xbd55,	// (0x000560d6) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x00059e32) cell_indicator_nsta_pane_g_ParamLimits

0x7bb5,	// (0x00051f36) form2_midp_time_pane_t1_ParamLimits

0x5aea,	// (0x0004fe6b) main_idle_act4_pane_ParamLimits

0x5aea,	// (0x0004fe6b) main_idle_act4_pane

0x5f56,	// (0x000502d7) popup_tb_extension_window_ParamLimits

0xdbc1,	// (0x00057f42) tb_ext_find_pane_ParamLimits

0xdbc1,	// (0x00057f42) tb_ext_find_pane

0xdd24,	// (0x000580a5) ai_gene_pane_1_cp1

0x966f,	// (0x000539f0) ai_gene_pane_2_cp1

0xdd2c,	// (0x000580ad) list_single_idle_plugin_calendar_pane

0xdd35,	// (0x000580b6) list_single_idle_plugin_notification_pane

0xdd3e,	// (0x000580bf) list_single_idle_plugin_player_pane

0xdd47,	// (0x000580c8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd47,	// (0x000580c8) list_single_idle_plugin_shortcut_pane

0xdd69,	// (0x000580ea) main_idle_act4_pane_t1

0xdd7b,	// (0x000580fc) main_idle_act4_pane_t2

0x0001,

0xfd4e,	// (0x0005a0cf) main_idle_act4_pane_t

0xdd8d,	// (0x0005810e) middle_sk_idle_act4_pane_ParamLimits

0xdd8d,	// (0x0005810e) middle_sk_idle_act4_pane

0xdda3,	// (0x00058124) popup_clock_digital_analogue_window_cp2

0xddbd,	// (0x0005813e) shortcut_wheel_idle_act4_pane_ParamLimits

0xddbd,	// (0x0005813e) shortcut_wheel_idle_act4_pane

0xc330,	// (0x000566b1) shortcut_wheel_idle_act4_pane_g1

0xc330,	// (0x000566b1) shortcut_wheel_idle_act4_pane_g2

0xc330,	// (0x000566b1) shortcut_wheel_idle_act4_pane_g3

0xc330,	// (0x000566b1) shortcut_wheel_idle_act4_pane_g4

0xc330,	// (0x000566b1) shortcut_wheel_idle_act4_pane_g5

0xddd1,	// (0x00058152) shortcut_wheel_idle_act4_pane_g6

0xddd9,	// (0x0005815a) shortcut_wheel_idle_act4_pane_g7

0xdde1,	// (0x00058162) shortcut_wheel_idle_act4_pane_g8

0xdde9,	// (0x0005816a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd53,	// (0x0005a0d4) shortcut_wheel_idle_act4_pane_g

0xc59e,	// (0x0005691f) middle_sk_idle_act4_pane_g1_ParamLimits

0xc59e,	// (0x0005691f) middle_sk_idle_act4_pane_g1

0xde4d,	// (0x000581ce) middle_sk_idle_act4_pane_g2_ParamLimits

0xde4d,	// (0x000581ce) middle_sk_idle_act4_pane_g2

0x0001,

0xfd76,	// (0x0005a0f7) middle_sk_idle_act4_pane_g_ParamLimits

0xfd76,	// (0x0005a0f7) middle_sk_idle_act4_pane_g

0xde59,	// (0x000581da) middle_sk_idle_act4_pane_t1_ParamLimits

0xde59,	// (0x000581da) middle_sk_idle_act4_pane_t1

0xde76,	// (0x000581f7) grid_ai_shortcut_pane_ParamLimits

0xde76,	// (0x000581f7) grid_ai_shortcut_pane

0xde8f,	// (0x00058210) list_highlight_pane_cp16_ParamLimits

0xde8f,	// (0x00058210) list_highlight_pane_cp16

0xde9c,	// (0x0005821d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde9c,	// (0x0005821d) list_single_idle_plugin_shortcut_pane_g1

0xdea8,	// (0x00058229) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdea8,	// (0x00058229) list_single_idle_plugin_shortcut_pane_g2

0xdec0,	// (0x00058241) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdec0,	// (0x00058241) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7b,	// (0x0005a0fc) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7b,	// (0x0005a0fc) list_single_idle_plugin_shortcut_pane_g

0xded3,	// (0x00058254) cell_ai_shortcut_pane_ParamLimits

0xded3,	// (0x00058254) cell_ai_shortcut_pane

0xdef4,	// (0x00058275) cell_ai_shortcut_pane_g1_ParamLimits

0xdef4,	// (0x00058275) cell_ai_shortcut_pane_g1

0xdd24,	// (0x000580a5) ai_gene_pane_1_cp2

0xdf16,	// (0x00058297) ai_gene_pane_2_cp2

0xdf1e,	// (0x0005829f) list_highlight_pane_cp15

0xdf27,	// (0x000582a8) list_single_idle_plugin_calendar_pane_g1

0xdf1e,	// (0x0005829f) list_highlight_pane_cp17

0xdf2f,	// (0x000582b0) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf37,	// (0x000582b8) list_single_idle_plugin_player_pane_g1

0xb6af,	// (0x00055a30) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd82,	// (0x0005a103) list_single_idle_plugin_player_pane_g

0xdf3f,	// (0x000582c0) list_single_idle_plugin_player_pane_t1

0xdf4d,	// (0x000582ce) list_single_idle_plugin_player_pane_t2

0xdf5b,	// (0x000582dc) list_single_idle_plugin_player_pane_t3

0xdf69,	// (0x000582ea) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd87,	// (0x0005a108) list_single_idle_plugin_player_pane_t

0xdf77,	// (0x000582f8) wait_bar_pane_cp15

0xdf7f,	// (0x00058300) grid_ai_notification_pane

0xb6af,	// (0x00055a30) list_single_idle_plugin_notification_pane_g1

0xdf88,	// (0x00058309) cell_ai_notification_pane_ParamLimits

0xdf88,	// (0x00058309) cell_ai_notification_pane

0xdf95,	// (0x00058316) cell_ai_notification_pane_g1

0xdf9d,	// (0x0005831e) cell_ai_notification_pane_t1

0xdfab,	// (0x0005832c) tb_ext_find_button_pane

0xdfb3,	// (0x00058334) tb_ext_find_pane_g1

0xdfbb,	// (0x0005833c) tb_ext_find_pane_t1

0x8f0c,	// (0x0005328d) tb_ext_find_button_pane_g1

0xdfc9,	// (0x0005834a) tb_ext_find_button_pane_g2

0x0001,

0xfd90,	// (0x0005a111) tb_ext_find_button_pane_g

0xdd69,	// (0x000580ea) main_idle_act4_pane_t1_ParamLimits

0xdd7b,	// (0x000580fc) main_idle_act4_pane_t2_ParamLimits

0xfd4e,	// (0x0005a0cf) main_idle_act4_pane_t_ParamLimits

0xdda3,	// (0x00058124) popup_clock_digital_analogue_window_cp2_ParamLimits

0xddb1,	// (0x00058132) sat_plugin_idle_act4_pane_ParamLimits

0xddb1,	// (0x00058132) sat_plugin_idle_act4_pane

0xdfd2,	// (0x00058353) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdfd2,	// (0x00058353) sat_plugin_idle_act4_pane_t1

0xdfe5,	// (0x00058366) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfe5,	// (0x00058366) sat_plugin_idle_act4_pane_t2

0xdff8,	// (0x00058379) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdff8,	// (0x00058379) sat_plugin_idle_act4_pane_t3

0xe00b,	// (0x0005838c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe00b,	// (0x0005838c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd95,	// (0x0005a116) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd95,	// (0x0005a116) sat_plugin_idle_act4_pane_t

0x4b90,	// (0x0004ef11) popup_battery_window_ParamLimits

0x4b90,	// (0x0004ef11) popup_battery_window

0x82eb,	// (0x0005266c) bg_popup_sub_pane_cp25_ParamLimits

0x82eb,	// (0x0005266c) bg_popup_sub_pane_cp25

0xe01e,	// (0x0005839f) popup_battery_window_g1_ParamLimits

0xe01e,	// (0x0005839f) popup_battery_window_g1

0xe02a,	// (0x000583ab) popup_battery_window_t1_ParamLimits

0xe02a,	// (0x000583ab) popup_battery_window_t1

0xe03c,	// (0x000583bd) popup_battery_window_t2_ParamLimits

0xe03c,	// (0x000583bd) popup_battery_window_t2

0x0001,

0xfd9e,	// (0x0005a11f) popup_battery_window_t_ParamLimits

0xfd9e,	// (0x0005a11f) popup_battery_window_t

0x9538,	// (0x000538b9) midp_canvas_pane_ParamLimits

0x95b1,	// (0x00053932) midp_keypad_pane_ParamLimits

0x95b1,	// (0x00053932) midp_keypad_pane

0x986a,	// (0x00053beb) main_midp_pane_ParamLimits

0xbdc1,	// (0x00056142) signal_pane_g2_cp_ParamLimits

0xe059,	// (0x000583da) aid_size_cell_midp_keypad_ParamLimits

0xe059,	// (0x000583da) aid_size_cell_midp_keypad

0xe073,	// (0x000583f4) midp_keyp_game_grid_pane_ParamLimits

0xe073,	// (0x000583f4) midp_keyp_game_grid_pane

0xe093,	// (0x00058414) midp_keyp_rocker_pane_ParamLimits

0xe093,	// (0x00058414) midp_keyp_rocker_pane

0xe0cc,	// (0x0005844d) midp_keyp_sk_left_pane_ParamLimits

0xe0cc,	// (0x0005844d) midp_keyp_sk_left_pane

0xe126,	// (0x000584a7) midp_keyp_sk_right_pane_ParamLimits

0xe126,	// (0x000584a7) midp_keyp_sk_right_pane

0x7f6e,	// (0x000522ef) bg_button_pane_cp03

0xe180,	// (0x00058501) midp_keyp_sk_left_pane_g1

0x7f6e,	// (0x000522ef) bg_button_pane_cp04

0xe180,	// (0x00058501) midp_keyp_sk_right_pane_g1

0xc330,	// (0x000566b1) midp_keyp_rocker_pane_g1

0xe189,	// (0x0005850a) keyp_game_cell_pane_ParamLimits

0xe189,	// (0x0005850a) keyp_game_cell_pane

0x7f6e,	// (0x000522ef) bg_button_pane_cp02

0xe19c,	// (0x0005851d) keyp_game_cell_pane_g1

0x4bc6,	// (0x0004ef47) popup_fep_vkb2_window_ParamLimits

0x4bc6,	// (0x0004ef47) popup_fep_vkb2_window

0x6ae3,	// (0x00050e64) aid_size_cell_vkb2_ParamLimits

0x6ae3,	// (0x00050e64) aid_size_cell_vkb2

0x6b37,	// (0x00050eb8) popup_fep_vkb2_window_g1_ParamLimits

0x6b37,	// (0x00050eb8) popup_fep_vkb2_window_g1

0x6b7f,	// (0x00050f00) vkb2_area_bottom_pane_ParamLimits

0x6b7f,	// (0x00050f00) vkb2_area_bottom_pane

0x6bcb,	// (0x00050f4c) vkb2_area_keypad_pane_ParamLimits

0x6bcb,	// (0x00050f4c) vkb2_area_keypad_pane

0x6c0d,	// (0x00050f8e) vkb2_area_top_pane_ParamLimits

0x6c0d,	// (0x00050f8e) vkb2_area_top_pane

0x6c87,	// (0x00051008) vkb2_top_entry_pane_ParamLimits

0x6c87,	// (0x00051008) vkb2_top_entry_pane

0x6cb1,	// (0x00051032) vkb2_top_grid_left_pane_ParamLimits

0x6cb1,	// (0x00051032) vkb2_top_grid_left_pane

0x6ccf,	// (0x00051050) vkb2_top_grid_right_pane_ParamLimits

0x6ccf,	// (0x00051050) vkb2_top_grid_right_pane

0x6ced,	// (0x0005106e) vkb2_cell_keypad_pane_ParamLimits

0x6ced,	// (0x0005106e) vkb2_cell_keypad_pane

0x6dbe,	// (0x0005113f) vkb2_area_bottom_grid_pane_ParamLimits

0x6dbe,	// (0x0005113f) vkb2_area_bottom_grid_pane

0x6de4,	// (0x00051165) vkb2_area_bottom_pane_g1_ParamLimits

0x6de4,	// (0x00051165) vkb2_area_bottom_pane_g1

0x6e08,	// (0x00051189) vkb2_area_bottom_pane_g2_ParamLimits

0x6e08,	// (0x00051189) vkb2_area_bottom_pane_g2

0x6e36,	// (0x000511b7) vkb2_area_bottom_pane_g3_ParamLimits

0x6e36,	// (0x000511b7) vkb2_area_bottom_pane_g3

0x0002,

0xfda3,	// (0x0005a124) vkb2_area_bottom_pane_g_ParamLimits

0xfda3,	// (0x0005a124) vkb2_area_bottom_pane_g

0x6e97,	// (0x00051218) vkb2_top_cell_left_pane_ParamLimits

0x6e97,	// (0x00051218) vkb2_top_cell_left_pane

0xe1ad,	// (0x0005852e) vkb2_top_entry_pane_g1_ParamLimits

0xe1ad,	// (0x0005852e) vkb2_top_entry_pane_g1

0xe1bb,	// (0x0005853c) vkb2_top_entry_pane_t1_ParamLimits

0xe1bb,	// (0x0005853c) vkb2_top_entry_pane_t1

0xe1ed,	// (0x0005856e) vkb2_top_entry_pane_t2_ParamLimits

0xe1ed,	// (0x0005856e) vkb2_top_entry_pane_t2

0xe21f,	// (0x000585a0) vkb2_top_entry_pane_t3_ParamLimits

0xe21f,	// (0x000585a0) vkb2_top_entry_pane_t3

0x0002,

0xfdaa,	// (0x0005a12b) vkb2_top_entry_pane_t_ParamLimits

0xfdaa,	// (0x0005a12b) vkb2_top_entry_pane_t

0x6ee4,	// (0x00051265) vkb2_top_grid_right_pane_g1_ParamLimits

0x6ee4,	// (0x00051265) vkb2_top_grid_right_pane_g1

0x6efa,	// (0x0005127b) vkb2_top_grid_right_pane_g2_ParamLimits

0x6efa,	// (0x0005127b) vkb2_top_grid_right_pane_g2

0x6f12,	// (0x00051293) vkb2_top_grid_right_pane_g3_ParamLimits

0x6f12,	// (0x00051293) vkb2_top_grid_right_pane_g3

0x6f2a,	// (0x000512ab) vkb2_top_grid_right_pane_g4_ParamLimits

0x6f2a,	// (0x000512ab) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb1,	// (0x0005a132) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb1,	// (0x0005a132) vkb2_top_grid_right_pane_g

0x6f40,	// (0x000512c1) vkb2_top_cell_left_pane_g1

0x6f57,	// (0x000512d8) vkb2_cell_keypad_pane_g1_ParamLimits

0x6f57,	// (0x000512d8) vkb2_cell_keypad_pane_g1

0xe243,	// (0x000585c4) vkb2_cell_keypad_pane_t1_ParamLimits

0xe243,	// (0x000585c4) vkb2_cell_keypad_pane_t1

0x6f65,	// (0x000512e6) vkb2_cell_bottom_grid_pane_ParamLimits

0x6f65,	// (0x000512e6) vkb2_cell_bottom_grid_pane

0x6f9e,	// (0x0005131f) vkb2_cell_bottom_grid_pane_g1

0xddf1,	// (0x00058172) aid_call2_pane_cp02

0xddf9,	// (0x0005817a) aid_call_pane_cp02

0xde01,	// (0x00058182) clock_digital_number_pane_cp10

0xde09,	// (0x0005818a) clock_digital_number_pane_cp11

0xde11,	// (0x00058192) clock_digital_number_pane_cp12

0xde19,	// (0x0005819a) clock_digital_number_pane_cp13

0xde21,	// (0x000581a2) clock_digital_separator_pane_cp10

0x8f0c,	// (0x0005328d) popup_clock_digital_analogue_window_cp2_g1

0x8f0c,	// (0x0005328d) popup_clock_digital_analogue_window_cp2_g2

0xde29,	// (0x000581aa) popup_clock_digital_analogue_window_cp2_g3

0x8f0c,	// (0x0005328d) popup_clock_digital_analogue_window_cp2_g4

0xde29,	// (0x000581aa) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd66,	// (0x0005a0e7) popup_clock_digital_analogue_window_cp2_g

0xde31,	// (0x000581b2) popup_clock_digital_analogue_window_cp2_t1

0xde3f,	// (0x000581c0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd71,	// (0x0005a0f2) popup_clock_digital_analogue_window_cp2_t

0xc330,	// (0x000566b1) clock_digital_number_pane_cp10_g1

0xc330,	// (0x000566b1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x00059ece) clock_digital_number_pane_cp10_g

0xc330,	// (0x000566b1) clock_digital_separator_pane_cp10_g1

0xc330,	// (0x000566b1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x00059ece) clock_digital_separator_pane_cp10_g

0xdc6d,	// (0x00057fee) uniindi_top_pane_g3

0xdc7e,	// (0x00057fff) uniindi_top_pane_g4

0x6d78,	// (0x000510f9) vkb2_row_keypad_pane_ParamLimits

0x6d78,	// (0x000510f9) vkb2_row_keypad_pane

0x6fbe,	// (0x0005133f) vkb2_cell_t_keypad_pane_ParamLimits

0x6fbe,	// (0x0005133f) vkb2_cell_t_keypad_pane

0x6fce,	// (0x0005134f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6fce,	// (0x0005134f) vkb2_cell_t_keypad_pane_cp08

0x6fe1,	// (0x00051362) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6fe1,	// (0x00051362) vkb2_cell_t_keypad_pane_cp09

0x6ff5,	// (0x00051376) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6ff5,	// (0x00051376) vkb2_cell_t_keypad_pane_cp01

0x7006,	// (0x00051387) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7006,	// (0x00051387) vkb2_cell_t_keypad_pane_cp02

0x7017,	// (0x00051398) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7017,	// (0x00051398) vkb2_cell_t_keypad_pane_cp03

0x7028,	// (0x000513a9) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7028,	// (0x000513a9) vkb2_cell_t_keypad_pane_cp04

0x7039,	// (0x000513ba) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7039,	// (0x000513ba) vkb2_cell_t_keypad_pane_cp05

0x704a,	// (0x000513cb) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x704a,	// (0x000513cb) vkb2_cell_t_keypad_pane_cp06

0x705b,	// (0x000513dc) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x705b,	// (0x000513dc) vkb2_cell_t_keypad_pane_cp07

0x706c,	// (0x000513ed) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x706c,	// (0x000513ed) vkb2_cell_t_keypad_pane_cp10

0x681e,	// (0x00050b9f) vkb2_cell_t_keypad_pane_g1

0xe25a,	// (0x000585db) vkb2_cell_t_keypad_pane_t1

0x4acb,	// (0x0004ee4c) popup_grid_graphic2_window

0xe26c,	// (0x000585ed) aid_size_cell_graphic2_ParamLimits

0xe26c,	// (0x000585ed) aid_size_cell_graphic2

0xe2c5,	// (0x00058646) bg_popup_window_pane_cp21_ParamLimits

0xe2c5,	// (0x00058646) bg_popup_window_pane_cp21

0xe2d3,	// (0x00058654) graphic2_pages_pane_ParamLimits

0xe2d3,	// (0x00058654) graphic2_pages_pane

0xe319,	// (0x0005869a) grid_graphic2_control_pane_ParamLimits

0xe319,	// (0x0005869a) grid_graphic2_control_pane

0xe357,	// (0x000586d8) grid_graphic2_pane_ParamLimits

0xe357,	// (0x000586d8) grid_graphic2_pane

0xe3cb,	// (0x0005874c) cell_graphic2_pane

0x4acb,	// (0x0004ee4c) main_comp_mode_pane

0xd4e2,	// (0x00057863) list_ai3_gene_pane_ParamLimits

0xd8b3,	// (0x00057c34) bg_popup_window_pane_cp19_ParamLimits

0xd8bf,	// (0x00057c40) bg_touch_area_indi_pane_ParamLimits

0xd8bf,	// (0x00057c40) bg_touch_area_indi_pane

0xd8d5,	// (0x00057c56) bg_touch_area_indi_pane_cp01_ParamLimits

0xd8d5,	// (0x00057c56) bg_touch_area_indi_pane_cp01

0xd8eb,	// (0x00057c6c) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8eb,	// (0x00057c6c) bg_touch_area_indi_pane_cp02

0xd903,	// (0x00057c84) bg_touch_area_indi_pane_cp03_ParamLimits

0xd903,	// (0x00057c84) bg_touch_area_indi_pane_cp03

0xd91d,	// (0x00057c9e) popup_slider_window_g1_ParamLimits

0xd939,	// (0x00057cba) popup_slider_window_g2_ParamLimits

0xd955,	// (0x00057cd6) popup_slider_window_g3_ParamLimits

0xfcfb,	// (0x0005a07c) popup_slider_window_g_ParamLimits

0xd9b1,	// (0x00057d32) popup_slider_window_t1_ParamLimits

0xda25,	// (0x00057da6) small_volume_slider_vertical_pane_ParamLimits

0xe3cb,	// (0x0005874c) cell_graphic2_pane_ParamLimits

0xe419,	// (0x0005879a) bg_button_pane_cp10_ParamLimits

0xe419,	// (0x0005879a) bg_button_pane_cp10

0xe42c,	// (0x000587ad) bg_button_pane_cp11_ParamLimits

0xe42c,	// (0x000587ad) bg_button_pane_cp11

0xe43f,	// (0x000587c0) graphic2_pages_pane_g1_ParamLimits

0xe43f,	// (0x000587c0) graphic2_pages_pane_g1

0xe45a,	// (0x000587db) graphic2_pages_pane_g2_ParamLimits

0xe45a,	// (0x000587db) graphic2_pages_pane_g2

0x0001,

0xfdbf,	// (0x0005a140) graphic2_pages_pane_g_ParamLimits

0xfdbf,	// (0x0005a140) graphic2_pages_pane_g

0xe472,	// (0x000587f3) graphic2_pages_pane_t1_ParamLimits

0xe472,	// (0x000587f3) graphic2_pages_pane_t1

0xe488,	// (0x00058809) cell_graphic2_control_pane_ParamLimits

0xe488,	// (0x00058809) cell_graphic2_control_pane

0xe4a9,	// (0x0005882a) cell_graphic2_pane_g1_ParamLimits

0xe4a9,	// (0x0005882a) cell_graphic2_pane_g1

0xe4b6,	// (0x00058837) cell_graphic2_pane_g2_ParamLimits

0xe4b6,	// (0x00058837) cell_graphic2_pane_g2

0xe4c3,	// (0x00058844) cell_graphic2_pane_g3_ParamLimits

0xe4c3,	// (0x00058844) cell_graphic2_pane_g3

0xe4d0,	// (0x00058851) cell_graphic2_pane_g4_ParamLimits

0xe4d0,	// (0x00058851) cell_graphic2_pane_g4

0xe4dd,	// (0x0005885e) cell_graphic2_pane_g5_ParamLimits

0xe4dd,	// (0x0005885e) cell_graphic2_pane_g5

0x0004,

0xfdc4,	// (0x0005a145) cell_graphic2_pane_g_ParamLimits

0xfdc4,	// (0x0005a145) cell_graphic2_pane_g

0xe4f8,	// (0x00058879) cell_graphic2_pane_t1_ParamLimits

0xe4f8,	// (0x00058879) cell_graphic2_pane_t1

0x9ddc,	// (0x0005415d) grid_highlight_pane_cp11_ParamLimits

0x9ddc,	// (0x0005415d) grid_highlight_pane_cp11

0x82eb,	// (0x0005266c) bg_button_pane_cp05

0xe521,	// (0x000588a2) cell_graphic2_control_pane_g1

0xc330,	// (0x000566b1) bg_touch_area_indi_pane_g1

0xe549,	// (0x000588ca) aid_cmod_rocker_key_size

0xe553,	// (0x000588d4) aid_cmode_itu_key_size

0xe55d,	// (0x000588de) main_cmode_video_pane

0xe567,	// (0x000588e8) main_comp_mode_itu_pane

0xe573,	// (0x000588f4) main_comp_mode_rocker_pane

0xe57f,	// (0x00058900) cell_cmode_rocker_pane_ParamLimits

0xe57f,	// (0x00058900) cell_cmode_rocker_pane

0xe591,	// (0x00058912) cell_cmode_itu_pane_ParamLimits

0xe591,	// (0x00058912) cell_cmode_itu_pane

0x88c8,	// (0x00052c49) bg_button_pane_cp06_ParamLimits

0x88c8,	// (0x00052c49) bg_button_pane_cp06

0xc59e,	// (0x0005691f) cell_cmode_rocker_pane_g1_ParamLimits

0xc59e,	// (0x0005691f) cell_cmode_rocker_pane_g1

0xdac9,	// (0x00057e4a) cell_cmode_rocker_pane_g2_ParamLimits

0xdac9,	// (0x00057e4a) cell_cmode_rocker_pane_g2

0x0001,

0xfdd4,	// (0x0005a155) cell_cmode_rocker_pane_g_ParamLimits

0xfdd4,	// (0x0005a155) cell_cmode_rocker_pane_g

0x7f6e,	// (0x000522ef) bg_button_pane_cp07

0xe5a6,	// (0x00058927) cell_cmode_itu_pane_g1

0xe5af,	// (0x00058930) cell_cmode_itu_pane_t1

0xe5bd,	// (0x0005893e) cell_cmode_itu_pane_t2

0x0001,

0xfdd9,	// (0x0005a15a) cell_cmode_itu_pane_t

0xdcf0,	// (0x00058071) aid_touch_ctrl_left

0xdcf8,	// (0x00058079) aid_touch_ctrl_right

0x7f6e,	// (0x000522ef) compa_mode_pane

0xe5cb,	// (0x0005894c) aid_cmod_rocker_key_size_cp

0xe5d5,	// (0x00058956) aid_cmode_itu_key_size_cp

0xe5df,	// (0x00058960) compa_mode_pane_g1

0xe5e7,	// (0x00058968) compa_mode_pane_g2

0xe5ef,	// (0x00058970) compa_mode_pane_g3

0x0002,

0xfdde,	// (0x0005a15f) compa_mode_pane_g

0xe5f7,	// (0x00058978) main_comp_mode_itu_pane_cp

0xe5ff,	// (0x00058980) main_comp_mode_rocker_pane_cp

0xe607,	// (0x00058988) cell_cmode_itu_pane_cp_ParamLimits

0xe607,	// (0x00058988) cell_cmode_itu_pane_cp

0xe61c,	// (0x0005899d) cell_cmode_rocker_pane_cp_ParamLimits

0xe61c,	// (0x0005899d) cell_cmode_rocker_pane_cp

0x88c8,	// (0x00052c49) bg_button_pane_cp06_cp_ParamLimits

0x88c8,	// (0x00052c49) bg_button_pane_cp06_cp

0xc59e,	// (0x0005691f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc59e,	// (0x0005691f) cell_cmode_rocker_pane_g1_cp

0xc330,	// (0x000566b1) cell_cmode_rocker_pane_g2_cp

0x7f6e,	// (0x000522ef) bg_button_pane_cp07_cp

0xe62e,	// (0x000589af) cell_cmode_itu_pane_g1_cp

0xe637,	// (0x000589b8) cell_cmode_itu_pane_t1_cp

0xe637,	// (0x000589b8) cell_cmode_itu_pane_t2_cp

0xb2a1,	// (0x00055622) settings_code_pane_cp2

0x8062,	// (0x000523e3) bg_popup_window_pane_cp3_ParamLimits

0x84b9,	// (0x0005283a) heading_pane_cp3_ParamLimits

0x84c5,	// (0x00052846) listscroll_popup_graphic_pane_ParamLimits

0x65c7,	// (0x00050948) fep_hwr_aid_pane_ParamLimits

0x6a3e,	// (0x00050dbf) aid_touch_sctrl_top_ParamLimits

0x6a59,	// (0x00050dda) sctrl_sk_top_pane_g1_ParamLimits

0x681e,	// (0x00050b9f) sctrl_sk_top_pane_g2_ParamLimits

0xfd14,	// (0x0005a095) sctrl_sk_top_pane_g_ParamLimits

0x6a66,	// (0x00050de7) sctrl_sk_top_pane_t1_ParamLimits

0x6a3e,	// (0x00050dbf) aid_touch_sctrl_bottom_ParamLimits

0x6a66,	// (0x00050de7) sctrl_sk_bottom_pane_t1_ParamLimits

0xdc39,	// (0x00057fba) aid_area_touch_clock

0x6c4f,	// (0x00050fd0) aid_vkb2_area_top_pane_cell_ParamLimits

0x6c4f,	// (0x00050fd0) aid_vkb2_area_top_pane_cell

0x6d9a,	// (0x0005111b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6d9a,	// (0x0005111b) aid_vkb2_area_bottom_pane_cell

0xe1a5,	// (0x00058526) popup_char_count_window

0xe645,	// (0x000589c6) popup_char_count_window_g1

0xe64e,	// (0x000589cf) popup_char_count_window_g2

0xe657,	// (0x000589d8) popup_char_count_window_g3

0x0002,

0xfde5,	// (0x0005a166) popup_char_count_window_g

0xe660,	// (0x000589e1) popup_char_count_window_t1

0x6b15,	// (0x00050e96) popup_fep_char_preview_window_ParamLimits

0x6b15,	// (0x00050e96) popup_fep_char_preview_window

0x6c6d,	// (0x00050fee) vkb2_top_candi_pane_ParamLimits

0x6c6d,	// (0x00050fee) vkb2_top_candi_pane

0xe66e,	// (0x000589ef) cell_vkb2_top_candi_pane_ParamLimits

0xe66e,	// (0x000589ef) cell_vkb2_top_candi_pane

0x7081,	// (0x00051402) bg_popup_fep_char_preview_window_ParamLimits

0x7081,	// (0x00051402) bg_popup_fep_char_preview_window

0x708f,	// (0x00051410) popup_fep_char_preview_window_t1_ParamLimits

0x708f,	// (0x00051410) popup_fep_char_preview_window_t1

0xe6bb,	// (0x00058a3c) bg_popup_fep_char_preview_window_g1

0xe6c3,	// (0x00058a44) bg_popup_fep_char_preview_window_g2

0xe6cb,	// (0x00058a4c) bg_popup_fep_char_preview_window_g3

0xe6d3,	// (0x00058a54) bg_popup_fep_char_preview_window_g4

0xe6db,	// (0x00058a5c) bg_popup_fep_char_preview_window_g5

0x70c9,	// (0x0005144a) bg_popup_fep_char_preview_window_g6

0xe6e3,	// (0x00058a64) bg_popup_fep_char_preview_window_g7

0xe6eb,	// (0x00058a6c) bg_popup_fep_char_preview_window_g8

0xe6f3,	// (0x00058a74) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdec,	// (0x0005a16d) bg_popup_fep_char_preview_window_g

0x681e,	// (0x00050b9f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x681e,	// (0x00050b9f) cell_vkb2_top_candi_pane_g1

0x682c,	// (0x00050bad) cell_vkb2_top_candi_pane_g2_ParamLimits

0x682c,	// (0x00050bad) cell_vkb2_top_candi_pane_g2

0xe2a4,	// (0x00058625) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe2a4,	// (0x00058625) cell_vkb2_top_candi_pane_g3

0x70d1,	// (0x00051452) cell_vkb2_top_candi_pane_g4_ParamLimits

0x70d1,	// (0x00051452) cell_vkb2_top_candi_pane_g4

0xca6a,	// (0x00056deb) cell_vkb2_top_candi_pane_g5_ParamLimits

0xca6a,	// (0x00056deb) cell_vkb2_top_candi_pane_g5

0x70f2,	// (0x00051473) cell_vkb2_top_candi_pane_g6_ParamLimits

0x70f2,	// (0x00051473) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdff,	// (0x0005a180) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdff,	// (0x0005a180) cell_vkb2_top_candi_pane_g

0x7100,	// (0x00051481) cell_vkb2_top_candi_pane_t1

0x6403,	// (0x00050784) aid_size_touch_slider_mark_ParamLimits

0x6403,	// (0x00050784) aid_size_touch_slider_mark

0xe309,	// (0x0005868a) grid_graphic2_catg_pane_ParamLimits

0xe309,	// (0x0005868a) grid_graphic2_catg_pane

0xe3a7,	// (0x00058728) popup_grid_graphic2_window_t1_ParamLimits

0xe3a7,	// (0x00058728) popup_grid_graphic2_window_t1

0xe3b9,	// (0x0005873a) popup_grid_graphic2_window_t2_ParamLimits

0xe3b9,	// (0x0005873a) popup_grid_graphic2_window_t2

0x0001,

0xfdba,	// (0x0005a13b) popup_grid_graphic2_window_t_ParamLimits

0xfdba,	// (0x0005a13b) popup_grid_graphic2_window_t

0x82eb,	// (0x0005266c) bg_button_pane_cp05_ParamLimits

0xe521,	// (0x000588a2) cell_graphic2_control_pane_g1_ParamLimits

0xe6fb,	// (0x00058a7c) cell_graphic2_catg_pane_ParamLimits

0xe6fb,	// (0x00058a7c) cell_graphic2_catg_pane

0x7f6e,	// (0x000522ef) bg_button_pane_cp12

0xe70d,	// (0x00058a8e) cell_graphic2_catg_pane_g1

0xdc05,	// (0x00057f86) cell_tb_ext_pane_t1_ParamLimits

0x6eb7,	// (0x00051238) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6eb7,	// (0x00051238) vkb2_top_cell_right_narrow_pane

0x6ecf,	// (0x00051250) vkb2_top_cell_right_wide_pane_ParamLimits

0x6ecf,	// (0x00051250) vkb2_top_cell_right_wide_pane

0x65b9,	// (0x0005093a) bg_vkb2_func_pane_ParamLimits

0x65b9,	// (0x0005093a) bg_vkb2_func_pane

0x6f40,	// (0x000512c1) vkb2_top_cell_left_pane_g1_ParamLimits

0x65b9,	// (0x0005093a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x65b9,	// (0x0005093a) bg_vkb2_fuc_pane_cp03

0x6f9e,	// (0x0005131f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d70,	// (0x000540f1) bg_vkb2_func_pane_g1

0x9d78,	// (0x000540f9) bg_vkb2_func_pane_g2

0x9d88,	// (0x00054109) bg_vkb2_func_pane_g3

0x9d80,	// (0x00054101) bg_vkb2_func_pane_g4

0x9d90,	// (0x00054111) bg_vkb2_func_pane_g5

0x9d98,	// (0x00054119) bg_vkb2_func_pane_g6

0x9da0,	// (0x00054121) bg_vkb2_func_pane_g7

0x9da8,	// (0x00054129) bg_vkb2_func_pane_g8

0x9d68,	// (0x000540e9) bg_vkb2_func_pane_g9

0x0008,

0xfe0c,	// (0x0005a18d) bg_vkb2_func_pane_g

0x65b9,	// (0x0005093a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x65b9,	// (0x0005093a) bg_vkb2_fuc_pane_cp01

0x6f40,	// (0x000512c1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6f40,	// (0x000512c1) vkb2_top_cell_right_wide_pane_g1

0x65b9,	// (0x0005093a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x65b9,	// (0x0005093a) bg_vkb2_fuc_pane_cp02

0x6f9e,	// (0x0005131f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6f9e,	// (0x0005131f) vkb2_top_cell_right_narrow_pane_g1

0xd831,	// (0x00057bb2) aid_touch_area_decrease_ParamLimits

0xd831,	// (0x00057bb2) aid_touch_area_decrease

0xd855,	// (0x00057bd6) aid_touch_area_increase_ParamLimits

0xd855,	// (0x00057bd6) aid_touch_area_increase

0xd861,	// (0x00057be2) aid_touch_area_mute_ParamLimits

0xd861,	// (0x00057be2) aid_touch_area_mute

0xd885,	// (0x00057c06) aid_touch_area_slider_ParamLimits

0xd885,	// (0x00057c06) aid_touch_area_slider

0xd971,	// (0x00057cf2) popup_slider_window_g4_ParamLimits

0xd971,	// (0x00057cf2) popup_slider_window_g4

0xd97d,	// (0x00057cfe) popup_slider_window_g5_ParamLimits

0xd97d,	// (0x00057cfe) popup_slider_window_g5

0xd99f,	// (0x00057d20) popup_slider_window_g6_ParamLimits

0xd99f,	// (0x00057d20) popup_slider_window_g6

0xd9df,	// (0x00057d60) popup_slider_window_t2_ParamLimits

0xd9df,	// (0x00057d60) popup_slider_window_t2

0x0001,

0xfd08,	// (0x0005a089) popup_slider_window_t_ParamLimits

0xfd08,	// (0x0005a089) popup_slider_window_t

0xd9f7,	// (0x00057d78) slider_pane_ParamLimits

0xd9f7,	// (0x00057d78) slider_pane

0xe716,	// (0x00058a97) slider_pane_g1_ParamLimits

0xe716,	// (0x00058a97) slider_pane_g1

0xe72a,	// (0x00058aab) slider_pane_g2_ParamLimits

0xe72a,	// (0x00058aab) slider_pane_g2

0xe740,	// (0x00058ac1) slider_pane_g3_ParamLimits

0xe740,	// (0x00058ac1) slider_pane_g3

0x0003,

0xfe1f,	// (0x0005a1a0) slider_pane_g_ParamLimits

0xfe1f,	// (0x0005a1a0) slider_pane_g

0x5fb2,	// (0x00050333) popup_tb_float_extension_window_ParamLimits

0x5fb2,	// (0x00050333) popup_tb_float_extension_window

0xe76c,	// (0x00058aed) aid_size_cell_tb_float_ext

0x7f6e,	// (0x000522ef) bg_popup_sub_window_cp28

0xe778,	// (0x00058af9) grid_tb_float_ext_pane

0xe782,	// (0x00058b03) cell_tb_float_ext_pane_ParamLimits

0xe782,	// (0x00058b03) cell_tb_float_ext_pane

0xe79c,	// (0x00058b1d) cell_tb_float_ext_pane_g1

0xe7a5,	// (0x00058b26) grid_highlight_pane_cp12

0x6708,	// (0x00050a89) cell_last_hwr_side_pane_ParamLimits

0x6708,	// (0x00050a89) cell_last_hwr_side_pane

0xc330,	// (0x000566b1) cell_last_hwr_side_pane_g1

0xe7ae,	// (0x00058b2f) cell_last_hwr_side_pane_g2

0x0001,

0xfe28,	// (0x0005a1a9) cell_last_hwr_side_pane_g

0x6e66,	// (0x000511e7) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6e66,	// (0x000511e7) vkb2_area_bottom_space_btn_pane

0x681e,	// (0x00050b9f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe25a,	// (0x000585db) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7100,	// (0x00051481) cell_vkb2_top_candi_pane_t1_ParamLimits

0x711f,	// (0x000514a0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x711f,	// (0x000514a0) vkb2_area_bottom_space_btn_pane_g1

0x7159,	// (0x000514da) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7159,	// (0x000514da) vkb2_area_bottom_space_btn_pane_g2

0x718f,	// (0x00051510) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x718f,	// (0x00051510) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2d,	// (0x0005a1ae) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2d,	// (0x0005a1ae) vkb2_area_bottom_space_btn_pane_g

0x667c,	// (0x000509fd) cel_fep_hwr_func_pane_ParamLimits

0x667c,	// (0x000509fd) cel_fep_hwr_func_pane

0x66b8,	// (0x00050a39) cell_hwr_side_button_pane_ParamLimits

0x66b8,	// (0x00050a39) cell_hwr_side_button_pane

0xdc39,	// (0x00057fba) aid_area_touch_clock_ParamLimits

0x82eb,	// (0x0005266c) bg_uniindi_top_pane_ParamLimits

0xdc4b,	// (0x00057fcc) uniindi_top_pane_g1_ParamLimits

0xdc61,	// (0x00057fe2) uniindi_top_pane_g2_ParamLimits

0xdc6d,	// (0x00057fee) uniindi_top_pane_g3_ParamLimits

0xdc7e,	// (0x00057fff) uniindi_top_pane_g4_ParamLimits

0xfd40,	// (0x0005a0c1) uniindi_top_pane_g_ParamLimits

0xdc8b,	// (0x0005800c) uniindi_top_pane_t1_ParamLimits

0x82eb,	// (0x0005266c) bg_vkb2_func_pane_cp01_ParamLimits

0x82eb,	// (0x0005266c) bg_vkb2_func_pane_cp01

0xe7b7,	// (0x00058b38) cel_fep_hwr_func_pane_g1_ParamLimits

0xe7b7,	// (0x00058b38) cel_fep_hwr_func_pane_g1

0x82eb,	// (0x0005266c) bg_vkb2_func_pane_cp02_ParamLimits

0x82eb,	// (0x0005266c) bg_vkb2_func_pane_cp02

0xe7b7,	// (0x00058b38) cell_hwr_side_button_pane_g1_ParamLimits

0xe7b7,	// (0x00058b38) cell_hwr_side_button_pane_g1

0x9be9,	// (0x00053f6a) status_pane_g4_ParamLimits

0x9be9,	// (0x00053f6a) status_pane_g4

0x9c03,	// (0x00053f84) status_pane_t1

0xc04a,	// (0x000563cb) form2_midp_gauge_slider_cont_pane

0xc052,	// (0x000563d3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc064,	// (0x000563e5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc076,	// (0x000563f7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x00059e81) form2_midp_gauge_slider_pane_t_ParamLimits

0xc088,	// (0x00056409) form2_midp_slider_pane_ParamLimits

0x6ad5,	// (0x00050e56) aid_size_cell_func_vkb2_ParamLimits

0x6ad5,	// (0x00050e56) aid_size_cell_func_vkb2

0xe758,	// (0x00058ad9) slider_pane_g4_ParamLimits

0xe758,	// (0x00058ad9) slider_pane_g4

0x71d9,	// (0x0005155a) form2_midp_gauge_slider_pane_t2_cp01

0x71e7,	// (0x00051568) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x71e7,	// (0x00051568) form2_midp_gauge_slider_pane_t3_cp01

0x7204,	// (0x00051585) form2_midp_slider_pane_cp01

0x7f6e,	// (0x000522ef) navi_smil_pane

0xe7f0,	// (0x00058b71) navi_smil_pane_g1

0xe7f8,	// (0x00058b79) navi_smil_pane_t1

0xe7c5,	// (0x00058b46) form2_midp_slider_pane_g1

0xe7ce,	// (0x00058b4f) form2_midp_slider_pane_g2

0xe7d6,	// (0x00058b57) form2_midp_slider_pane_g3

0xe7c5,	// (0x00058b46) form2_midp_slider_pane_g4

0xe7de,	// (0x00058b5f) form2_midp_slider_pane_g5

0x0004,

0xfe36,	// (0x0005a1b7) form2_midp_slider_pane_g

0x71c9,	// (0x0005154a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x71c9,	// (0x0005154a) vkb2_area_bottom_space_btn_pane_g4

0x9a20,	// (0x00053da1) lc0_navi_pane_ParamLimits

0x9a20,	// (0x00053da1) lc0_navi_pane

0x9a96,	// (0x00053e17) lc0_stat_indi_pane_ParamLimits

0x9a96,	// (0x00053e17) lc0_stat_indi_pane

0x9aad,	// (0x00053e2e) ls0_title_pane_ParamLimits

0x9aad,	// (0x00053e2e) ls0_title_pane

0x88c8,	// (0x00052c49) bg_popup_sub_pane_cp14_ParamLimits

0xdc20,	// (0x00057fa1) list_uniindi_pane_ParamLimits

0xdc2c,	// (0x00057fad) uniindi_top_pane_ParamLimits

0xdcc8,	// (0x00058049) list_single_uniindi_pane_g1_ParamLimits

0xdcdb,	// (0x0005805c) list_single_uniindi_pane_t1_ParamLimits

0x720d,	// (0x0005158e) lc0_stat_clock_pane_ParamLimits

0x720d,	// (0x0005158e) lc0_stat_clock_pane

0xe806,	// (0x00058b87) lc0_stat_indi_pane_g1_ParamLimits

0xe806,	// (0x00058b87) lc0_stat_indi_pane_g1

0xe813,	// (0x00058b94) lc0_stat_indi_pane_g2_ParamLimits

0xe813,	// (0x00058b94) lc0_stat_indi_pane_g2

0x0001,

0xfe41,	// (0x0005a1c2) lc0_stat_indi_pane_g_ParamLimits

0xfe41,	// (0x0005a1c2) lc0_stat_indi_pane_g

0x721a,	// (0x0005159b) lc0_uni_indicator_pane_ParamLimits

0x721a,	// (0x0005159b) lc0_uni_indicator_pane

0xe820,	// (0x00058ba1) ls0_title_pane_g1_ParamLimits

0xe820,	// (0x00058ba1) ls0_title_pane_g1

0xe834,	// (0x00058bb5) ls0_title_pane_t1_ParamLimits

0xe834,	// (0x00058bb5) ls0_title_pane_t1

0x7227,	// (0x000515a8) lc0_uni_indicator_pane_g1_ParamLimits

0x7227,	// (0x000515a8) lc0_uni_indicator_pane_g1

0xe86a,	// (0x00058beb) lc0_stat_clock_pane_t1

0x4acb,	// (0x0004ee4c) main_ai5_pane

0xe878,	// (0x00058bf9) ai5_sk_pane_ParamLimits

0xe878,	// (0x00058bf9) ai5_sk_pane

0xe885,	// (0x00058c06) cell_ai5_widget_pane_ParamLimits

0xe885,	// (0x00058c06) cell_ai5_widget_pane

0xe94f,	// (0x00058cd0) aid_size_cell_widget_grid

0xe965,	// (0x00058ce6) bg_ai5_widget_pane_ParamLimits

0xe965,	// (0x00058ce6) bg_ai5_widget_pane

0xe9d9,	// (0x00058d5a) cell_ai5_widget_pane_g2

0xe9e9,	// (0x00058d6a) cell_ai5_widget_pane_g3

0xea00,	// (0x00058d81) cell_ai5_widget_pane_g4

0xea0c,	// (0x00058d8d) cell_ai5_widget_pane_g5

0xea18,	// (0x00058d99) cell_ai5_widget_pane_g6

0xea24,	// (0x00058da5) cell_ai5_widget_pane_g7

0xea6c,	// (0x00058ded) cell_ai5_widget_pane_t1_ParamLimits

0xea6c,	// (0x00058ded) cell_ai5_widget_pane_t1

0xea89,	// (0x00058e0a) cell_ai5_widget_pane_t2_ParamLimits

0xea89,	// (0x00058e0a) cell_ai5_widget_pane_t2

0xeaa1,	// (0x00058e22) cell_ai5_widget_pane_t3_ParamLimits

0xeaa1,	// (0x00058e22) cell_ai5_widget_pane_t3

0xeab9,	// (0x00058e3a) cell_ai5_widget_pane_t4_ParamLimits

0xeab9,	// (0x00058e3a) cell_ai5_widget_pane_t4

0xead6,	// (0x00058e57) cell_ai5_widget_pane_t5_ParamLimits

0xead6,	// (0x00058e57) cell_ai5_widget_pane_t5

0xeaf5,	// (0x00058e76) cell_ai5_widget_pane_t6_ParamLimits

0xeaf5,	// (0x00058e76) cell_ai5_widget_pane_t6

0xeb07,	// (0x00058e88) cell_ai5_widget_pane_t7_ParamLimits

0xeb07,	// (0x00058e88) cell_ai5_widget_pane_t7

0xeb20,	// (0x00058ea1) cell_ai5_widget_pane_t8_ParamLimits

0xeb20,	// (0x00058ea1) cell_ai5_widget_pane_t8

0x0009,

0xfe46,	// (0x0005a1c7) cell_ai5_widget_pane_t_ParamLimits

0xfe46,	// (0x0005a1c7) cell_ai5_widget_pane_t

0xeb74,	// (0x00058ef5) grid_ai5_widget_pane

0x88c8,	// (0x00052c49) highlight_cell_ai5_widget_pane_ParamLimits

0x88c8,	// (0x00052c49) highlight_cell_ai5_widget_pane

0xeb8c,	// (0x00058f0d) ai5_sk_left_pane

0xeb96,	// (0x00058f17) ai5_sk_middle_pane

0xeba0,	// (0x00058f21) ai5_sk_right_pane

0xebaa,	// (0x00058f2b) bg_ai5_widget_pane_g1_ParamLimits

0xebaa,	// (0x00058f2b) bg_ai5_widget_pane_g1

0xebb6,	// (0x00058f37) bg_ai5_widget_pane_g2_ParamLimits

0xebb6,	// (0x00058f37) bg_ai5_widget_pane_g2

0xebc2,	// (0x00058f43) bg_ai5_widget_pane_g3_ParamLimits

0xebc2,	// (0x00058f43) bg_ai5_widget_pane_g3

0xebce,	// (0x00058f4f) bg_ai5_widget_pane_g4_ParamLimits

0xebce,	// (0x00058f4f) bg_ai5_widget_pane_g4

0xebda,	// (0x00058f5b) bg_ai5_widget_pane_g5_ParamLimits

0xebda,	// (0x00058f5b) bg_ai5_widget_pane_g5

0xebe6,	// (0x00058f67) bg_ai5_widget_pane_g6_ParamLimits

0xebe6,	// (0x00058f67) bg_ai5_widget_pane_g6

0xebf2,	// (0x00058f73) bg_ai5_widget_pane_g7_ParamLimits

0xebf2,	// (0x00058f73) bg_ai5_widget_pane_g7

0xebfe,	// (0x00058f7f) bg_ai5_widget_pane_g8_ParamLimits

0xebfe,	// (0x00058f7f) bg_ai5_widget_pane_g8

0xec0a,	// (0x00058f8b) bg_ai5_widget_pane_g9_ParamLimits

0xec0a,	// (0x00058f8b) bg_ai5_widget_pane_g9

0x0008,

0xfe5b,	// (0x0005a1dc) bg_ai5_widget_pane_g_ParamLimits

0xfe5b,	// (0x0005a1dc) bg_ai5_widget_pane_g

0xec3c,	// (0x00058fbd) cell_shortcut_ai5_widget_pane_ParamLimits

0xec3c,	// (0x00058fbd) cell_shortcut_ai5_widget_pane

0x9530,	// (0x000538b1) bg_cell_shortcut_ai5_widget_pane

0xec4d,	// (0x00058fce) cell_grid_ai5_widget_pane_g1

0x9530,	// (0x000538b1) highlight_cell_shortcut_ai5_widget_pane

0x9d70,	// (0x000540f1) ai5_sk_left_pane_g1

0xec56,	// (0x00058fd7) ai5_sk_left_pane_g2

0xec5e,	// (0x00058fdf) ai5_sk_left_pane_g3

0xec66,	// (0x00058fe7) ai5_sk_left_pane_g4

0x0003,

0xfe6e,	// (0x0005a1ef) ai5_sk_left_pane_g

0xec6e,	// (0x00058fef) ai5_sk_left_pane_t1

0x9d78,	// (0x000540f9) ai5_sk_right_pane_g1

0xec7c,	// (0x00058ffd) ai5_sk_right_pane_g2

0xec84,	// (0x00059005) ai5_sk_right_pane_g3

0xec8c,	// (0x0005900d) ai5_sk_right_pane_g4

0x0003,

0xfe77,	// (0x0005a1f8) ai5_sk_right_pane_g

0xec94,	// (0x00059015) ai5_sk_right_pane_t1

0x9d78,	// (0x000540f9) ai5_sk_middle_pane_g1

0x9d70,	// (0x000540f1) ai5_sk_middle_pane_g2

0x9d90,	// (0x00054111) ai5_sk_middle_pane_g3

0xec84,	// (0x00059005) ai5_sk_middle_pane_g4

0xec5e,	// (0x00058fdf) ai5_sk_middle_pane_g5

0xeca2,	// (0x00059023) ai5_sk_middle_pane_g6

0xecaa,	// (0x0005902b) ai5_sk_middle_pane_g7

0x0006,

0xfe80,	// (0x0005a201) ai5_sk_middle_pane_g

0x98b0,	// (0x00053c31) aid_touch_area_size_lc0_ParamLimits

0x98b0,	// (0x00053c31) aid_touch_area_size_lc0

0x684d,	// (0x00050bce) cell_hwr_candidate_pane_t1_ParamLimits

0x98cc,	// (0x00053c4d) aid_touch_navi_pane

0x9b9b,	// (0x00053f1c) status_dt_navi_pane_ParamLimits

0x9b9b,	// (0x00053f1c) status_dt_navi_pane

0x9ba8,	// (0x00053f29) status_dt_sta_pane_ParamLimits

0x9ba8,	// (0x00053f29) status_dt_sta_pane

0xecb2,	// (0x00059033) dt_sta_controll_pane

0xecbf,	// (0x00059040) dt_sta_indi_pane

0xecd0,	// (0x00059051) dt_sta_title_pane

0x82eb,	// (0x0005266c) bg_dt_sta_indi_pane_ParamLimits

0x82eb,	// (0x0005266c) bg_dt_sta_indi_pane

0xece3,	// (0x00059064) dt_sta_battery_pane

0xeceb,	// (0x0005906c) dt_sta_indi_pane_g1

0xecf4,	// (0x00059075) dt_sta_indi_pane_g2

0xecfd,	// (0x0005907e) dt_sta_indi_pane_g3

0x0002,

0xfe8f,	// (0x0005a210) dt_sta_indi_pane_g

0xed06,	// (0x00059087) dt_sta_signal_pane

0x88c8,	// (0x00052c49) bg_dt_sta_title_pane_ParamLimits

0x88c8,	// (0x00052c49) bg_dt_sta_title_pane

0xed0f,	// (0x00059090) dt_sta_title_pane_g1

0xed17,	// (0x00059098) dt_sta_title_pane_t1_ParamLimits

0xed17,	// (0x00059098) dt_sta_title_pane_t1

0x7f6e,	// (0x000522ef) bg_dt_sta_control_pane

0xed2c,	// (0x000590ad) dt_sta_controll_pane_g1

0xed35,	// (0x000590b6) bg_dt_sta_title_pane_g1

0xed3e,	// (0x000590bf) bg_dt_sta_title_pane_g2

0xed47,	// (0x000590c8) bg_dt_sta_title_pane_g3

0x0002,

0xfe96,	// (0x0005a217) bg_dt_sta_title_pane_g

0xc330,	// (0x000566b1) bg_dt_sta_indi_pane_g1

0xed50,	// (0x000590d1) dt_sta_signal_pane_g1

0xed58,	// (0x000590d9) dt_sta_signal_pane_g2

0x0001,

0xfe9d,	// (0x0005a21e) dt_sta_signal_pane_g

0xed60,	// (0x000590e1) dt_sta_battery_pane_g1

0xed69,	// (0x000590ea) dt_sta_battery_pane_t1

0xc330,	// (0x000566b1) bg_dt_sta_control_pane_g1

0x901a,	// (0x0005339b) fep_china_uni_eep_pane

0x9022,	// (0x000533a3) fep_china_uni_entry_pane_ParamLimits

0x9032,	// (0x000533b3) popup_fep_china_uni_window_g1_ParamLimits

0x9042,	// (0x000533c3) popup_fep_china_uni_window_g2_ParamLimits

0x9042,	// (0x000533c3) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00059aa3) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00059aa3) popup_fep_china_uni_window_g

0xed78,	// (0x000590f9) fep_china_uni_eep_pane_g1

0xed80,	// (0x00059101) fep_china_uni_eep_pane_t1

0xe7e7,	// (0x00058b68) aid_touch_area_size_smil_player

0x9a18,	// (0x00053d99) lc0_clock_pane

0x9bf7,	// (0x00053f78) status_pane_g5_ParamLimits

0x9bf7,	// (0x00053f78) status_pane_g5

0x5c79,	// (0x0004fffa) popup_keymap_window

0x9bbd,	// (0x00053f3e) status_icon_pane

0xe9e9,	// (0x00058d6a) cell_ai5_widget_pane_g3_ParamLimits

0xea00,	// (0x00058d81) cell_ai5_widget_pane_g4_ParamLimits

0xea0c,	// (0x00058d8d) cell_ai5_widget_pane_g5_ParamLimits

0xea30,	// (0x00058db1) cell_ai5_widget_pane_g8_ParamLimits

0xea30,	// (0x00058db1) cell_ai5_widget_pane_g8

0xea44,	// (0x00058dc5) cell_ai5_widget_pane_g9_ParamLimits

0xea44,	// (0x00058dc5) cell_ai5_widget_pane_g9

0xea58,	// (0x00058dd9) cell_ai5_widget_pane_g10_ParamLimits

0xea58,	// (0x00058dd9) cell_ai5_widget_pane_g10

0xed8f,	// (0x00059110) status_icon_pane_g1

0x7f6e,	// (0x000522ef) bg_popup_sub_pane_cp13

0xed97,	// (0x00059118) popup_keymap_window_t1

0x97f5,	// (0x00053b76) control_pane_g6_ParamLimits

0x97f5,	// (0x00053b76) control_pane_g6

0x9802,	// (0x00053b83) control_pane_g7_ParamLimits

0x9802,	// (0x00053b83) control_pane_g7

0x980f,	// (0x00053b90) control_pane_g8_ParamLimits

0x980f,	// (0x00053b90) control_pane_g8

0xecb2,	// (0x00059033) dt_sta_controll_pane_ParamLimits

0xecbf,	// (0x00059040) dt_sta_indi_pane_ParamLimits

0xecd0,	// (0x00059051) dt_sta_title_pane_ParamLimits

0x87f4,	// (0x00052b75) aid_size_touch_scroll_bar_cale

0x4ba4,	// (0x0004ef25) popup_discreet_window_ParamLimits

0x4ba4,	// (0x0004ef25) popup_discreet_window

0x4c1e,	// (0x0004ef9f) popup_sk_window

0xa3fa,	// (0x0005477b) bg_popup_sub_pane_cp28_ParamLimits

0xa3fa,	// (0x0005477b) bg_popup_sub_pane_cp28

0xeda5,	// (0x00059126) popup_discreet_window_g1_ParamLimits

0xeda5,	// (0x00059126) popup_discreet_window_g1

0xedc5,	// (0x00059146) popup_discreet_window_t1_ParamLimits

0xedc5,	// (0x00059146) popup_discreet_window_t1

0xede3,	// (0x00059164) popup_discreet_window_t2_ParamLimits

0xede3,	// (0x00059164) popup_discreet_window_t2

0x0002,

0xfea2,	// (0x0005a223) popup_discreet_window_t_ParamLimits

0xfea2,	// (0x0005a223) popup_discreet_window_t

0x723c,	// (0x000515bd) popup_sk_window_g1

0x7246,	// (0x000515c7) popup_sk_window_g2

0x0001,

0xfea9,	// (0x0005a22a) popup_sk_window_g

0x7250,	// (0x000515d1) popup_sk_window_t1

0x725e,	// (0x000515df) popup_sk_window_t1_copy1

0xe9d9,	// (0x00058d5a) cell_ai5_widget_pane_g2_ParamLimits

0xeb32,	// (0x00058eb3) cell_ai5_widget_pane_t9_ParamLimits

0xeb32,	// (0x00058eb3) cell_ai5_widget_pane_t9

0x7f6e,	// (0x000522ef) main_fep_fshwr2_pane

0x726c,	// (0x000515ed) aid_fshwr2_btn_pane

0x7278,	// (0x000515f9) aid_fshwr2_syb_pane

0x7284,	// (0x00051605) aid_fshwr2_txt_pane

0x7290,	// (0x00051611) fshwr2_func_candi_pane

0x72a5,	// (0x00051626) fshwr2_hwr_syb_pane

0x72b5,	// (0x00051636) fshwr2_icf_pane

0x4acb,	// (0x0004ee4c) fshwr2_icf_bg_pane

0x72de,	// (0x0005165f) fshwr2_icf_pane_t1_ParamLimits

0x72de,	// (0x0005165f) fshwr2_icf_pane_t1

0x8f0c,	// (0x0005328d) fshwr2_func_candi_pane_g1

0xee35,	// (0x000591b6) fshwr2_func_candi_row_pane_ParamLimits

0xee35,	// (0x000591b6) fshwr2_func_candi_row_pane

0x72f6,	// (0x00051677) cell_fshwr2_syb_pane_ParamLimits

0x72f6,	// (0x00051677) cell_fshwr2_syb_pane

0x681e,	// (0x00050b9f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x681e,	// (0x00050b9f) fshwr2_hwr_syb_pane_g1

0x4acb,	// (0x0004ee4c) bg_popup_call_pane_cp01

0x730c,	// (0x0005168d) fshwr2_func_candi_cell_pane_ParamLimits

0x730c,	// (0x0005168d) fshwr2_func_candi_cell_pane

0xaa76,	// (0x00054df7) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xaa76,	// (0x00054df7) fshwr2_func_candi_cell_bg_pane

0x7341,	// (0x000516c2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7341,	// (0x000516c2) fshwr2_func_candi_cell_pane_g1

0x7361,	// (0x000516e2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7361,	// (0x000516e2) fshwr2_func_candi_cell_pane_t1

0x4acb,	// (0x0004ee4c) bg_button_pane_cp08

0xb717,	// (0x00055a98) cell_fshwr2_syb_bg_pane

0x7374,	// (0x000516f5) cell_fshwr2_syb_bg_pane_g1

0x737c,	// (0x000516fd) cell_fshwr2_syb_bg_pane_t1

0x88c8,	// (0x00052c49) main_tmo_pane

0xaf0f,	// (0x00055290) uni_indicator_pane_g1_ParamLimits

0xaf25,	// (0x000552a6) uni_indicator_pane_g2_ParamLimits

0xaf3b,	// (0x000552bc) uni_indicator_pane_g3_ParamLimits

0xaf50,	// (0x000552d1) uni_indicator_pane_g4_ParamLimits

0xaf50,	// (0x000552d1) uni_indicator_pane_g4

0xaf64,	// (0x000552e5) uni_indicator_pane_g5_ParamLimits

0xaf64,	// (0x000552e5) uni_indicator_pane_g5

0xaf64,	// (0x000552e5) uni_indicator_pane_g6_ParamLimits

0xaf64,	// (0x000552e5) uni_indicator_pane_g6

0xf921,	// (0x00059ca2) uni_indicator_pane_g_ParamLimits

0xd813,	// (0x00057b94) popup_tmo_note_window_ParamLimits

0xd813,	// (0x00057b94) popup_tmo_note_window

0x6ab7,	// (0x00050e38) fshwr2_bg_pane

0x7352,	// (0x000516d3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7352,	// (0x000516d3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeae,	// (0x0005a22f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeae,	// (0x0005a22f) fshwr2_func_candi_cell_pane_g

0x6806,	// (0x00050b87) bg_popup_window_pane_cp01

0x738b,	// (0x0005170c) bg_popup_window_pane_g1_cp01

0xee45,	// (0x000591c6) bg_popup_window_pane_cp22_ParamLimits

0xee45,	// (0x000591c6) bg_popup_window_pane_cp22

0xee53,	// (0x000591d4) listscroll_tmo_link_pane_ParamLimits

0xee53,	// (0x000591d4) listscroll_tmo_link_pane

0xee93,	// (0x00059214) popup_tmo_note_window_g1_ParamLimits

0xee93,	// (0x00059214) popup_tmo_note_window_g1

0xeea0,	// (0x00059221) tmo_note_info_pane_ParamLimits

0xeea0,	// (0x00059221) tmo_note_info_pane

0xeeba,	// (0x0005923b) list_tmo_note_info_pane_g1_ParamLimits

0xeeba,	// (0x0005923b) list_tmo_note_info_pane_g1

0xeed1,	// (0x00059252) list_tmo_note_info_pane_g2_ParamLimits

0xeed1,	// (0x00059252) list_tmo_note_info_pane_g2

0x0001,

0xfeb3,	// (0x0005a234) list_tmo_note_info_pane_g_ParamLimits

0xfeb3,	// (0x0005a234) list_tmo_note_info_pane_g

0xeeed,	// (0x0005926e) list_tmo_note_info_text_pane_ParamLimits

0xeeed,	// (0x0005926e) list_tmo_note_info_text_pane

0xef70,	// (0x000592f1) list_tmo_link_pane

0xef7d,	// (0x000592fe) scroll_pane_cp20

0xef8a,	// (0x0005930b) list_single_tmo_link_pane_ParamLimits

0xef8a,	// (0x0005930b) list_single_tmo_link_pane

0xef9a,	// (0x0005931b) list_single_tmo_link_pane_t1

0xefa8,	// (0x00059329) list_tmo_note_info_text_pane_t1_ParamLimits

0xefa8,	// (0x00059329) list_tmo_note_info_text_pane_t1

0x8976,	// (0x00052cf7) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8976,	// (0x00052cf7) aid_size_touch_scroll_bar_cp01

0x537c,	// (0x0004f6fd) aid_size_touch_slider_marker

0x4c06,	// (0x0004ef87) popup_settings_window_ParamLimits

0x4c06,	// (0x0004ef87) popup_settings_window

0x5b06,	// (0x0004fe87) popup_candi_list_indi_window

0x98cc,	// (0x00053c4d) aid_touch_navi_pane_ParamLimits

0x6a12,	// (0x00050d93) rs_clock_indi_pane

0x6a1b,	// (0x00050d9c) sctrl_sk_bottom_pane_ParamLimits

0x6a2c,	// (0x00050dad) sctrl_sk_top_pane_ParamLimits

0x6b2f,	// (0x00050eb0) popup_fep_tooltip_window

0xe94f,	// (0x00058cd0) aid_size_cell_widget_grid_ParamLimits

0xe9c4,	// (0x00058d45) cell_ai5_widget_pane_g1_ParamLimits

0xe9c4,	// (0x00058d45) cell_ai5_widget_pane_g1

0xea18,	// (0x00058d99) cell_ai5_widget_pane_g6_ParamLimits

0xea24,	// (0x00058da5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x0003,	// (0x0004a384) cell_ai5_widget_pane_g_ParamLimits

0x0003,	// (0x0004a384) cell_ai5_widget_pane_g

0xeb56,	// (0x00058ed7) cell_ai5_widget_pane_t10_ParamLimits

0xeb56,	// (0x00058ed7) cell_ai5_widget_pane_t10

0xeb74,	// (0x00058ef5) grid_ai5_widget_pane_ParamLimits

0xec16,	// (0x00058f97) cell_contacts_ai5_widget_pane_ParamLimits

0xec16,	// (0x00058f97) cell_contacts_ai5_widget_pane

0xedf8,	// (0x00059179) popup_discreet_window_t3_ParamLimits

0xedf8,	// (0x00059179) popup_discreet_window_t3

0x72ca,	// (0x0005164b) popup_fshwr2_char_preview_window_ParamLimits

0x72ca,	// (0x0005164b) popup_fshwr2_char_preview_window

0xef0b,	// (0x0005928c) tmo_note_info_pane_t1

0xef20,	// (0x000592a1) tmo_note_info_pane_t2

0xef37,	// (0x000592b8) tmo_note_info_pane_t3

0xef4c,	// (0x000592cd) tmo_note_info_pane_t4

0xef5e,	// (0x000592df) tmo_note_info_pane_t5

0x0004,

0xfeb8,	// (0x0005a239) tmo_note_info_pane_t

0xef70,	// (0x000592f1) list_tmo_link_pane_ParamLimits

0xef7d,	// (0x000592fe) scroll_pane_cp20_ParamLimits

0x4acb,	// (0x0004ee4c) bg_popup_fep_char_preview_window_cp01

0xefc1,	// (0x00059342) popup_fshwr2_char_preview_window_t1

0xefcf,	// (0x00059350) popup_candi_list_indi_window_g1

0xefd8,	// (0x00059359) bg_cell_contacts_ai5_widget_pane

0xefe4,	// (0x00059365) cell_contacts_ai5_widget_pane_g1

0xeff9,	// (0x0005937a) cell_contacts_ai5_widget_pane_g2

0xf005,	// (0x00059386) cell_contacts_ai5_widget_pane_g3

0x0002,

0x0043,	// (0x0004a3c4) cell_contacts_ai5_widget_pane_g

0xf011,	// (0x00059392) cell_contacts_ai5_widget_pane_t1

0x88c8,	// (0x00052c49) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf088,	// (0x00059409) settings_container_pane

0x9530,	// (0x000538b1) listscroll_set_pane_copy1

0xba06,	// (0x00055d87) scroll_pane_cp121_copy1

0xf094,	// (0x00059415) set_content_pane_copy1

0xf09c,	// (0x0005941d) aid_height_set_list_copy1_ParamLimits

0xf09c,	// (0x0005941d) aid_height_set_list_copy1

0xb157,	// (0x000554d8) aid_size_parent_copy1_ParamLimits

0xb157,	// (0x000554d8) aid_size_parent_copy1

0xf0a8,	// (0x00059429) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0a8,	// (0x00059429) button_value_adjust_pane_cp6_copy1

0x986a,	// (0x00053beb) list_highlight_pane_cp2_copy1_ParamLimits

0x986a,	// (0x00053beb) list_highlight_pane_cp2_copy1

0xf0bc,	// (0x0005943d) list_set_pane_copy1_ParamLimits

0xf0bc,	// (0x0005943d) list_set_pane_copy1

0xf023,	// (0x000593a4) main_pane_set_t1_copy1_ParamLimits

0xf023,	// (0x000593a4) main_pane_set_t1_copy1

0xf05d,	// (0x000593de) main_pane_set_t2_copy1_ParamLimits

0xf05d,	// (0x000593de) main_pane_set_t2_copy1

0xf169,	// (0x000594ea) main_pane_set_t3_copy1

0xf177,	// (0x000594f8) main_pane_set_t4_copy1

0xf07c,	// (0x000593fd) set_content_pane_g1_copy1_ParamLimits

0xf07c,	// (0x000593fd) set_content_pane_g1_copy1

0xf185,	// (0x00059506) setting_code_pane_copy1

0xf18d,	// (0x0005950e) setting_slider_graphic_pane_copy1

0xf18d,	// (0x0005950e) setting_slider_pane_copy1

0xf18d,	// (0x0005950e) setting_text_pane_copy1

0xf18d,	// (0x0005950e) setting_volume_pane_copy1

0xf185,	// (0x00059506) settings_code_pane_cp2_copy1

0xf195,	// (0x00059516) settings_code_pane_cp_copy1_ParamLimits

0xf195,	// (0x00059516) settings_code_pane_cp_copy1

0x7394,	// (0x00051715) volume_set_pane_copy1

0xf1a9,	// (0x0005952a) volume_set_pane_g10_copy1

0xf1b1,	// (0x00059532) volume_set_pane_g1_copy1

0xf1b9,	// (0x0005953a) volume_set_pane_g2_copy1

0xf1c1,	// (0x00059542) volume_set_pane_g3_copy1

0xf1c9,	// (0x0005954a) volume_set_pane_g4_copy1

0xf1d1,	// (0x00059552) volume_set_pane_g5_copy1

0xf1d9,	// (0x0005955a) volume_set_pane_g6_copy1

0xf1e1,	// (0x00059562) volume_set_pane_g7_copy1

0xf1e9,	// (0x0005956a) volume_set_pane_g8_copy1

0xf1f1,	// (0x00059572) volume_set_pane_g9_copy1

0x8062,	// (0x000523e3) bg_set_opt_pane_cp_copy1_ParamLimits

0x8062,	// (0x000523e3) bg_set_opt_pane_cp_copy1

0x739c,	// (0x0005171d) setting_slider_pane_t1_copy1_ParamLimits

0x739c,	// (0x0005171d) setting_slider_pane_t1_copy1

0x73ba,	// (0x0005173b) setting_slider_pane_t2_copy1_ParamLimits

0x73ba,	// (0x0005173b) setting_slider_pane_t2_copy1

0x73d4,	// (0x00051755) setting_slider_pane_t3_copy1_ParamLimits

0x73d4,	// (0x00051755) setting_slider_pane_t3_copy1

0x73ec,	// (0x0005176d) slider_set_pane_copy1_ParamLimits

0x73ec,	// (0x0005176d) slider_set_pane_copy1

0x8917,	// (0x00052c98) set_opt_bg_pane_g1_copy2

0x891f,	// (0x00052ca0) set_opt_bg_pane_g2_copy2

0xf1f9,	// (0x0005957a) set_opt_bg_pane_g3_copy2

0x892f,	// (0x00052cb0) set_opt_bg_pane_g4_copy2

0x8937,	// (0x00052cb8) set_opt_bg_pane_g5_copy2

0x893f,	// (0x00052cc0) set_opt_bg_pane_g6_copy2

0xf203,	// (0x00059584) set_opt_bg_pane_g7_copy2

0xf20b,	// (0x0005958c) set_opt_bg_pane_g8_copy2

0xf215,	// (0x00059596) set_opt_bg_pane_g9_copy2

0x7402,	// (0x00051783) aid_size_touch_slider_mark_copy1_ParamLimits

0x7402,	// (0x00051783) aid_size_touch_slider_mark_copy1

0xf21f,	// (0x000595a0) slider_set_pane_g1_copy1

0x7416,	// (0x00051797) slider_set_pane_g2_copy1

0x6423,	// (0x000507a4) slider_set_pane_g3_copy1_ParamLimits

0x6423,	// (0x000507a4) slider_set_pane_g3_copy1

0x6437,	// (0x000507b8) slider_set_pane_g4_copy1_ParamLimits

0x6437,	// (0x000507b8) slider_set_pane_g4_copy1

0x644f,	// (0x000507d0) slider_set_pane_g5_copy1_ParamLimits

0x644f,	// (0x000507d0) slider_set_pane_g5_copy1

0x6423,	// (0x000507a4) slider_set_pane_g6_copy1_ParamLimits

0x6423,	// (0x000507a4) slider_set_pane_g6_copy1

0x741e,	// (0x0005179f) slider_set_pane_g7_copy1_ParamLimits

0x741e,	// (0x0005179f) slider_set_pane_g7_copy1

0x7f82,	// (0x00052303) bg_set_opt_pane_cp2_copy1

0xf228,	// (0x000595a9) setting_slider_graphic_pane_g1_copy1

0xf231,	// (0x000595b2) setting_slider_graphic_pane_t1_copy1

0xf241,	// (0x000595c2) setting_slider_graphic_pane_t2_copy1

0xf251,	// (0x000595d2) slider_set_pane_cp_copy1

0xf261,	// (0x000595e2) input_focus_pane_cp1_copy1

0xf26a,	// (0x000595eb) list_set_text_pane_copy1

0xf272,	// (0x000595f3) setting_text_pane_g1_copy1

0x7f2f,	// (0x000522b0) set_text_pane_t1_copy1

0xf261,	// (0x000595e2) input_focus_pane_cp2_copy1

0xf272,	// (0x000595f3) setting_code_pane_g1_copy1

0xf27b,	// (0x000595fc) setting_code_pane_t1_copy1

0xf289,	// (0x0005960a) list_set_graphic_pane_copy1

0x7f82,	// (0x00052303) bg_set_opt_pane_cp4_copy1

0x922f,	// (0x000535b0) list_set_graphic_pane_g1_copy1_ParamLimits

0x922f,	// (0x000535b0) list_set_graphic_pane_g1_copy1

0xf29d,	// (0x0005961e) list_set_graphic_pane_g2_copy1

0x9247,	// (0x000535c8) list_set_graphic_pane_t1_copy1_ParamLimits

0x9247,	// (0x000535c8) list_set_graphic_pane_t1_copy1

0xc330,	// (0x000566b1) rs_clock_indi_pane_g1

0xf2a5,	// (0x00059626) rs_clock_indi_pane_t1

0xf2b3,	// (0x00059634) rs_indi_pane

0xf2bb,	// (0x0005963c) rs_indi_pane_g1

0xf2c4,	// (0x00059645) rs_indi_pane_g2

0xf2cd,	// (0x0005964e) rs_indi_pane_g3

0x0002,

0xfec3,	// (0x0005a244) rs_indi_pane_g

0x9530,	// (0x000538b1) bg_popup_preview_window_pane_cp03

0xf2d6,	// (0x00059657) popup_fep_tooltip_window_t1

0xcfac,	// (0x0005732d) popup_note2_window_g2_ParamLimits

0xcfac,	// (0x0005732d) popup_note2_window_g2

0x0001,

0xfc78,	// (0x00059ff9) popup_note2_window_g_ParamLimits

0xfc78,	// (0x00059ff9) popup_note2_window_g

0xd4a8,	// (0x00057829) bg_popup_sub_pane_cp11_ParamLimits

0xd4b5,	// (0x00057836) cell_ai3_links_pane_g1_ParamLimits

0xd4cc,	// (0x0005784d) cell_ai3_links_pane_t1

0x7f2f,	// (0x000522b0) set_text_pane_t1_copy1_ParamLimits

0x9441,	// (0x000537c2) cell_graphic_popup_pane_cp2_ParamLimits

0x9441,	// (0x000537c2) cell_graphic_popup_pane_cp2

0xf2e4,	// (0x00059665) cell_graphic_popup_pane_g1_cp2

0x8607,	// (0x00052988) cell_graphic_popup_pane_g2_cp2

0xf2ec,	// (0x0005966d) cell_graphic_popup_pane_g3_cp2

0xf2f4,	// (0x00059675) cell_graphic_popup_pane_t2_cp2

0x8618,	// (0x00052999) grid_highlight_pane_cp3_cp2

0x8c57,	// (0x00052fd8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x88c8,	// (0x00052c49) main_tmo_pane_ParamLimits

0xd807,	// (0x00057b88) popup_tmo_big_image_note_window

0xe9b3,	// (0x00058d34) cell_ai5_widget_list_pane

0xe9bb,	// (0x00058d3c) cell_ai5_widget_lrg_icon_pane

0xef0b,	// (0x0005928c) tmo_note_info_pane_t1_ParamLimits

0xef20,	// (0x000592a1) tmo_note_info_pane_t2_ParamLimits

0xef37,	// (0x000592b8) tmo_note_info_pane_t3_ParamLimits

0xef4c,	// (0x000592cd) tmo_note_info_pane_t4_ParamLimits

0xef5e,	// (0x000592df) tmo_note_info_pane_t5_ParamLimits

0xfeb8,	// (0x0005a239) tmo_note_info_pane_t_ParamLimits

0xf088,	// (0x00059409) settings_container_pane_ParamLimits

0xf259,	// (0x000595da) indicator_popup_pane_cp5

0xf259,	// (0x000595da) indicator_popup_pane_cp6

0xf289,	// (0x0005960a) list_set_graphic_pane_copy1_ParamLimits

0x7f6e,	// (0x000522ef) bg_popup_window_pane_cp23

0xf302,	// (0x00059683) popup_tmo_big_image_note_window_g1

0xf30b,	// (0x0005968c) popup_tmo_big_image_note_window_t1

0xf31b,	// (0x0005969c) popup_tmo_big_image_note_window_t2

0xf32b,	// (0x000596ac) popup_tmo_big_image_note_window_t3

0x0002,

0xfeca,	// (0x0005a24b) popup_tmo_big_image_note_window_t

0xc330,	// (0x000566b1) cell_ai5_widget_lrg_icon_pane_g1

0xf33b,	// (0x000596bc) cell_ai5_widget_lrg_icon_pane_t1

0xf349,	// (0x000596ca) cell_ai5_widget_list_row_pane_ParamLimits

0xf349,	// (0x000596ca) cell_ai5_widget_list_row_pane

0xf360,	// (0x000596e1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf360,	// (0x000596e1) cell_ai5_widget_list_row_pane_g1

0xf36d,	// (0x000596ee) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf36d,	// (0x000596ee) cell_ai5_widget_list_row_pane_t1

0xf39b,	// (0x0005971c) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf39b,	// (0x0005971c) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed1,	// (0x0005a252) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed1,	// (0x0005a252) cell_ai5_widget_list_row_pane_t

0x4acb,	// (0x0004ee4c) main_fep_vtchi_ss_pane

0x7450,	// (0x000517d1) popup_fep_char_pre_window

0x7458,	// (0x000517d9) popup_fep_ituss_window

0x7479,	// (0x000517fa) popup_fep_vkbss_window

0xf3c3,	// (0x00059744) grid_vkbss_keypad_pane_ParamLimits

0xf3c3,	// (0x00059744) grid_vkbss_keypad_pane

0xf3d3,	// (0x00059754) ituss_keypad_pane

0x74a4,	// (0x00051825) aid_vkbss_key_offset_ParamLimits

0x74a4,	// (0x00051825) aid_vkbss_key_offset

0x74b0,	// (0x00051831) cell_vkbss_key_pane_ParamLimits

0x74b0,	// (0x00051831) cell_vkbss_key_pane

0x9bd1,	// (0x00053f52) bg_cell_vkbss_key_g1_ParamLimits

0x9bd1,	// (0x00053f52) bg_cell_vkbss_key_g1

0xf3e2,	// (0x00059763) cell_vkbss_key_3p_pane_ParamLimits

0xf3e2,	// (0x00059763) cell_vkbss_key_3p_pane

0xf3fc,	// (0x0005977d) cell_vkbss_key_g1_ParamLimits

0xf3fc,	// (0x0005977d) cell_vkbss_key_g1

0xf416,	// (0x00059797) cell_vkbss_key_t1_ParamLimits

0xf416,	// (0x00059797) cell_vkbss_key_t1

0x74c6,	// (0x00051847) cell_ituss_key_pane_ParamLimits

0x74c6,	// (0x00051847) cell_ituss_key_pane

0xf441,	// (0x000597c2) bg_cell_ituss_key_g1_ParamLimits

0xf441,	// (0x000597c2) bg_cell_ituss_key_g1

0xf44d,	// (0x000597ce) cell_ituss_key_pane_g1_ParamLimits

0xf44d,	// (0x000597ce) cell_ituss_key_pane_g1

0x74d7,	// (0x00051858) cell_ituss_key_pane_g2_ParamLimits

0x74d7,	// (0x00051858) cell_ituss_key_pane_g2

0x0002,

0xfed8,	// (0x0005a259) cell_ituss_key_pane_g_ParamLimits

0xfed8,	// (0x0005a259) cell_ituss_key_pane_g

0x7503,	// (0x00051884) cell_ituss_key_t1_ParamLimits

0x7503,	// (0x00051884) cell_ituss_key_t1

0x753d,	// (0x000518be) cell_ituss_key_t2_ParamLimits

0x753d,	// (0x000518be) cell_ituss_key_t2

0x756e,	// (0x000518ef) cell_ituss_key_t3_ParamLimits

0x756e,	// (0x000518ef) cell_ituss_key_t3

0x753d,	// (0x000518be) cell_ituss_key_t4_ParamLimits

0x753d,	// (0x000518be) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x0005a260) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x0005a260) cell_ituss_key_t

0xf483,	// (0x00059804) cell_vkbss_key_3p_pane_g1

0xf473,	// (0x000597f4) cell_vkbss_key_3p_pane_g2

0xf47b,	// (0x000597fc) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0005a26b) cell_vkbss_key_3p_pane_g

0x4acb,	// (0x0004ee4c) bg_popup_fep_char_preview_window_cp02

0x75b1,	// (0x00051932) popup_fep_char_pre_window_t1

0xe945,	// (0x00058cc6) main_ai5_sk_pane

0xefd8,	// (0x00059359) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xefe4,	// (0x00059365) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeff9,	// (0x0005937a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf005,	// (0x00059386) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x0043,	// (0x0004a3c4) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf011,	// (0x00059392) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x88c8,	// (0x00052c49) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf48b,	// (0x0005980c) main_ai5_sk_pane_g1

0xa22c,	// (0x000545ad) popup_query_code_window_g1

0x746e,	// (0x000517ef) popup_fep_vkb_icf_pane

0x7482,	// (0x00051803) popup_fep_vtchi_icf_pane

0xf494,	// (0x00059815) bg_icf_pane

0xf4a0,	// (0x00059821) list_vkb_icf_pane

0x986a,	// (0x00053beb) bg_icf_pane_cp01

0xf4ac,	// (0x0005982d) vtchi_icf_list_pane

0xf4bd,	// (0x0005983e) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x0005983e) list_vkb_icf_pane_t1

0xf4d5,	// (0x00059856) vtchi_icf_list_pane_t1_ParamLimits

0xf4d5,	// (0x00059856) vtchi_icf_list_pane_t1

0x7458,	// (0x000517d9) popup_fep_ituss_window_ParamLimits

0x7482,	// (0x00051803) popup_fep_vtchi_icf_pane_ParamLimits

0xf3d3,	// (0x00059754) ituss_keypad_pane_ParamLimits

0x7498,	// (0x00051819) ituss_sks_pane

0xf494,	// (0x00059815) bg_icf_pane_ParamLimits

0x7434,	// (0x000517b5) icf_edit_indi_pane_ParamLimits

0x7434,	// (0x000517b5) icf_edit_indi_pane

0xf4a0,	// (0x00059821) list_vkb_icf_pane_ParamLimits

0x986a,	// (0x00053beb) bg_icf_pane_cp01_ParamLimits

0x7443,	// (0x000517c4) icf_edit_indi_pane_cp01_ParamLimits

0x7443,	// (0x000517c4) icf_edit_indi_pane_cp01

0xf4b4,	// (0x00059835) vtchi_query_pane

0x681e,	// (0x00050b9f) icf_edit_indi_pane_g1_ParamLimits

0x681e,	// (0x00050b9f) icf_edit_indi_pane_g1

0x75d3,	// (0x00051954) icf_edit_indi_pane_g2_ParamLimits

0x75d3,	// (0x00051954) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0005a283) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0005a283) icf_edit_indi_pane_g

0x75e2,	// (0x00051963) icf_edit_indi_pane_t1

0xf4f7,	// (0x00059878) bg_input_focus_pane_cp042

0x87eb,	// (0x00052b6c) vtchi_button_pane

0xf500,	// (0x00059881) vtchi_query_pane_t1

0xf50e,	// (0x0005988f) vtchi_query_pane_t2

0xf51c,	// (0x0005989d) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0005a272) vtchi_query_pane_t

0x4acb,	// (0x0004ee4c) bg_button_pane_cp13

0xf52a,	// (0x000598ab) vtchi_button_pane_g1

0x75c0,	// (0x00051941) ituss_sks_pane_g1

0x75cb,	// (0x0005194c) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0005a279) ituss_sks_pane_g

0xf532,	// (0x000598b3) ituss_sks_pane_t1

0xf540,	// (0x000598c1) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0005a27e) ituss_sks_pane_t

0xbd7a,	// (0x000560fb) indicator_nsta_pane_cp_g1

0xbd83,	// (0x00056104) indicator_nsta_pane_cp_g2

0xbd8b,	// (0x0005610c) indicator_nsta_pane_cp_g3

0xbd93,	// (0x00056114) indicator_nsta_pane_cp_g4

0xbd9b,	// (0x0005611c) indicator_nsta_pane_cp_g5

0xbd9b,	// (0x0005611c) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x00059e37) indicator_nsta_pane_cp_g

0xe50e,	// (0x0005888f) cell_graphic2_pane_t2_ParamLimits

0xe50e,	// (0x0005888f) cell_graphic2_pane_t2

0x0001,

0xfdcf,	// (0x0005a150) cell_graphic2_pane_t_ParamLimits

0xfdcf,	// (0x0005a150) cell_graphic2_pane_t

0xe53b,	// (0x000588bc) cell_graphic2_control_pane_t1

0x8fca,	// (0x0005334b) signal_pane_g3_ParamLimits

0x8fca,	// (0x0005334b) signal_pane_g3

0x8fdc,	// (0x0005335d) signal_pane_g4_ParamLimits

0x8fdc,	// (0x0005335d) signal_pane_g4

0xf3ad,	// (0x0005972e) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf3ad,	// (0x0005972e) cell_ai5_widget_list_row_pane_t3

0xf461,	// (0x000597e2) cell_ituss_key_pane_t1_ParamLimits

0xf461,	// (0x000597e2) cell_ituss_key_pane_t1

0x9e6a,	// (0x000541eb) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e6a,	// (0x000541eb) form_field_data_wide_pane_vc_t2

0x9e7e,	// (0x000541ff) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e7e,	// (0x000541ff) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x00059b8a) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x00059b8a) form_field_data_wide_pane_vc_t

0xba46,	// (0x00055dc7) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba46,	// (0x00055dc7) form_field_slider_wide_pane_vc_t3

0xbb20,	// (0x00055ea1) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbb20,	// (0x00055ea1) form_field_popup_wide_pane_vc_t2

0xbb37,	// (0x00055eb8) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb37,	// (0x00055eb8) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x00059e26) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x00059e26) form_field_popup_wide_pane_vc_t

0x726c,	// (0x000515ed) aid_fshwr2_btn_pane_ParamLimits

0x7278,	// (0x000515f9) aid_fshwr2_syb_pane_ParamLimits

0x7284,	// (0x00051605) aid_fshwr2_txt_pane_ParamLimits

0x6ab7,	// (0x00050e38) fshwr2_bg_pane_ParamLimits

0x7290,	// (0x00051611) fshwr2_func_candi_pane_ParamLimits

0x72a5,	// (0x00051626) fshwr2_hwr_syb_pane_ParamLimits

0x72b5,	// (0x00051636) fshwr2_icf_pane_ParamLimits

0x7b2a,	// (0x00051eab) list_double_graphic_pane_vc_g4_ParamLimits

0x7b2a,	// (0x00051eab) list_double_graphic_pane_vc_g4

0x74f7,	// (0x00051878) cell_ituss_key_pane_g3_ParamLimits

0x74f7,	// (0x00051878) cell_ituss_key_pane_g3

0x759f,	// (0x00051920) cell_ituss_key_t5_ParamLimits

0x759f,	// (0x00051920) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
