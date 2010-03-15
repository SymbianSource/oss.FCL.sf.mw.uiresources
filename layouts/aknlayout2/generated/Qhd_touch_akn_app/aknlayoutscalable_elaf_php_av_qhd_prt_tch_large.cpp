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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003b09d };

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
0x7cca,	// (0x00042d67) Screen

0x7cde,	// (0x00042d7b) application_window_ParamLimits

0x7cde,	// (0x00042d7b) application_window

0x7cf8,	// (0x00042d95) screen_g1

0x58fe,	// (0x0004099b) area_bottom_pane_ParamLimits

0x58fe,	// (0x0004099b) area_bottom_pane

0x59be,	// (0x00040a5b) area_top_pane_ParamLimits

0x59be,	// (0x00040a5b) area_top_pane

0x5a52,	// (0x00040aef) main_pane_ParamLimits

0x5a52,	// (0x00040aef) main_pane

0x7d02,	// (0x00042d9f) misc_graphics

0x96a9,	// (0x00044746) battery_pane_ParamLimits

0x96a9,	// (0x00044746) battery_pane

0xa36d,	// (0x0004540a) bg_status_flat_pane_g8

0xa375,	// (0x00045412) bg_status_flat_pane_g9

0x976b,	// (0x00044808) context_pane_ParamLimits

0x976b,	// (0x00044808) context_pane

0x988d,	// (0x0004492a) navi_pane_ParamLimits

0x988d,	// (0x0004492a) navi_pane

0x990b,	// (0x000449a8) signal_pane_ParamLimits

0x990b,	// (0x000449a8) signal_pane

0x0008,

0xf884,	// (0x0004a921) bg_status_flat_pane_g

0x9978,	// (0x00044a15) status_pane_g1_ParamLimits

0x9978,	// (0x00044a15) status_pane_g1

0x9984,	// (0x00044a21) status_pane_g2_ParamLimits

0x9984,	// (0x00044a21) status_pane_g2

0x9990,	// (0x00044a2d) status_pane_g3_ParamLimits

0x9990,	// (0x00044a2d) status_pane_g3

0x0004,

0xf7ab,	// (0x0004a848) status_pane_g_ParamLimits

0xf7ab,	// (0x0004a848) status_pane_g

0x99c4,	// (0x00044a61) title_pane_ParamLimits

0x99c4,	// (0x00044a61) title_pane

0x9a01,	// (0x00044a9e) uni_indicator_pane_ParamLimits

0x9a01,	// (0x00044a9e) uni_indicator_pane

0x95d1,	// (0x0004466e) bg_list_pane_ParamLimits

0x95d1,	// (0x0004466e) bg_list_pane

0x63db,	// (0x00041478) find_pane

0x95f1,	// (0x0004468e) listscroll_app_pane_ParamLimits

0x95f1,	// (0x0004468e) listscroll_app_pane

0x95fd,	// (0x0004469a) listscroll_form_pane

0x63e3,	// (0x00041480) listscroll_gen_pane_ParamLimits

0x63e3,	// (0x00041480) listscroll_gen_pane

0x95fd,	// (0x0004469a) listscroll_set_pane

0x8832,	// (0x000438cf) main_idle_act_pane

0x92d7,	// (0x00044374) main_idle_trad_pane

0x92d7,	// (0x00044374) main_list_empty_pane

0x9617,	// (0x000446b4) main_midp_pane

0x9623,	// (0x000446c0) main_pane_g1_ParamLimits

0x9623,	// (0x000446c0) main_pane_g1

0x63f7,	// (0x00041494) popup_ai_message_window_ParamLimits

0x63f7,	// (0x00041494) popup_ai_message_window

0x649d,	// (0x0004153a) popup_fep_china_uni_window_ParamLimits

0x649d,	// (0x0004153a) popup_fep_china_uni_window

0x64f9,	// (0x00041596) popup_fep_japan_candidate_window_ParamLimits

0x64f9,	// (0x00041596) popup_fep_japan_candidate_window

0x6519,	// (0x000415b6) popup_fep_japan_predictive_window_ParamLimits

0x6519,	// (0x000415b6) popup_fep_japan_predictive_window

0x6549,	// (0x000415e6) popup_find_window

0x6556,	// (0x000415f3) popup_grid_graphic_window_ParamLimits

0x6556,	// (0x000415f3) popup_grid_graphic_window

0x657e,	// (0x0004161b) popup_large_graphic_colour_window

0x65a4,	// (0x00041641) popup_menu_window_ParamLimits

0x65a4,	// (0x00041641) popup_menu_window

0x675c,	// (0x000417f9) popup_note_image_window

0x6748,	// (0x000417e5) popup_note_wait_window_ParamLimits

0x6748,	// (0x000417e5) popup_note_wait_window

0x6748,	// (0x000417e5) popup_note_window_ParamLimits

0x6748,	// (0x000417e5) popup_note_window

0x67b2,	// (0x0004184f) popup_query_code_window_ParamLimits

0x67b2,	// (0x0004184f) popup_query_code_window

0x67c6,	// (0x00041863) popup_query_data_code_window_ParamLimits

0x67c6,	// (0x00041863) popup_query_data_code_window

0x67e3,	// (0x00041880) popup_query_data_window_ParamLimits

0x67e3,	// (0x00041880) popup_query_data_window

0x67ff,	// (0x0004189c) popup_query_sat_info_window_ParamLimits

0x67ff,	// (0x0004189c) popup_query_sat_info_window

0x6838,	// (0x000418d5) popup_snote_single_graphic_window_ParamLimits

0x6838,	// (0x000418d5) popup_snote_single_graphic_window

0x6838,	// (0x000418d5) popup_snote_single_text_window_ParamLimits

0x6838,	// (0x000418d5) popup_snote_single_text_window

0x684d,	// (0x000418ea) popup_sub_window_general

0x697d,	// (0x00041a1a) popup_window_general_ParamLimits

0x697d,	// (0x00041a1a) popup_window_general

0x9631,	// (0x000446ce) power_save_pane

0x6277,	// (0x00041314) control_pane_g1_ParamLimits

0x6277,	// (0x00041314) control_pane_g1

0x629e,	// (0x0004133b) control_pane_g2_ParamLimits

0x629e,	// (0x0004133b) control_pane_g2

0x9594,	// (0x00044631) control_pane_g3_ParamLimits

0x9594,	// (0x00044631) control_pane_g3

0x0007,

0xf793,	// (0x0004a830) control_pane_g_ParamLimits

0xf793,	// (0x0004a830) control_pane_g

0x62e8,	// (0x00041385) control_pane_t1_ParamLimits

0x62e8,	// (0x00041385) control_pane_t1

0x6334,	// (0x000413d1) control_pane_t2_ParamLimits

0x6334,	// (0x000413d1) control_pane_t2

0x0002,

0xf7a4,	// (0x0004a841) control_pane_t_ParamLimits

0xf7a4,	// (0x0004a841) control_pane_t

0x94b5,	// (0x00044552) navi_navi_volume_pane_cp1

0x94be,	// (0x0004455b) status_small_icon_pane

0x94c6,	// (0x00044563) status_small_pane_g1_ParamLimits

0x94c6,	// (0x00044563) status_small_pane_g1

0x94fa,	// (0x00044597) status_small_pane_g2_ParamLimits

0x94fa,	// (0x00044597) status_small_pane_g2

0x9506,	// (0x000445a3) status_small_pane_g3_ParamLimits

0x9506,	// (0x000445a3) status_small_pane_g3

0x9512,	// (0x000445af) status_small_pane_g4_ParamLimits

0x9512,	// (0x000445af) status_small_pane_g4

0x951e,	// (0x000445bb) status_small_pane_g5_ParamLimits

0x951e,	// (0x000445bb) status_small_pane_g5

0x952d,	// (0x000445ca) status_small_pane_g6_ParamLimits

0x952d,	// (0x000445ca) status_small_pane_g6

0x0007,

0xf782,	// (0x0004a81f) status_small_pane_g_ParamLimits

0xf782,	// (0x0004a81f) status_small_pane_g

0x955d,	// (0x000445fa) status_small_pane_t1

0x9580,	// (0x0004461d) status_small_wait_pane_ParamLimits

0x9580,	// (0x0004461d) status_small_wait_pane

0x8d54,	// (0x00043df1) aid_levels_signal_ParamLimits

0x8d54,	// (0x00043df1) aid_levels_signal

0x8d66,	// (0x00043e03) signal_pane_g1_ParamLimits

0x8d66,	// (0x00043e03) signal_pane_g1

0x8d7b,	// (0x00043e18) signal_pane_g2_ParamLimits

0x8d7b,	// (0x00043e18) signal_pane_g2

0x0003,

0xf713,	// (0x0004a7b0) signal_pane_g_ParamLimits

0xf713,	// (0x0004a7b0) signal_pane_g

0x8db6,	// (0x00043e53) context_pane_g1

0x7d0c,	// (0x00042da9) title_pane_g1

0x7d42,	// (0x00042ddf) title_pane_t1

0x7daa,	// (0x00042e47) title_pane_t2

0x7dd0,	// (0x00042e6d) title_pane_t3

0x0002,

0xf55d,	// (0x0004a5fa) title_pane_t

0x9a19,	// (0x00044ab6) aid_levels_battery_ParamLimits

0x9a19,	// (0x00044ab6) aid_levels_battery

0x9a2d,	// (0x00044aca) battery_pane_g1_ParamLimits

0x9a2d,	// (0x00044aca) battery_pane_g1

0x9a43,	// (0x00044ae0) battery_pane_g2_ParamLimits

0x9a43,	// (0x00044ae0) battery_pane_g2

0x0001,

0xf7b6,	// (0x0004a853) battery_pane_g_ParamLimits

0xf7b6,	// (0x0004a853) battery_pane_g

0xaca3,	// (0x00045d40) uni_indicator_pane_g1

0xacb8,	// (0x00045d55) uni_indicator_pane_g2

0xacce,	// (0x00045d6b) uni_indicator_pane_g3

0x0005,

0xf92c,	// (0x0004a9c9) uni_indicator_pane_g

0x9149,	// (0x000441e6) navi_icon_pane_ParamLimits

0x9149,	// (0x000441e6) navi_icon_pane

0x9092,	// (0x0004412f) navi_midp_pane

0x9165,	// (0x00044202) navi_navi_pane

0x916f,	// (0x0004420c) navi_text_pane_ParamLimits

0x916f,	// (0x0004420c) navi_text_pane

0x7cf8,	// (0x00042d95) status_small_wait_pane_g1

0x81ff,	// (0x0004329c) status_small_wait_pane_g2

0x0001,

0xf927,	// (0x0004a9c4) status_small_wait_pane_g

0xa9c8,	// (0x00045a65) navi_navi_icon_text_pane

0xa9d0,	// (0x00045a6d) navi_navi_pane_g1_ParamLimits

0xa9d0,	// (0x00045a6d) navi_navi_pane_g1

0xa9e2,	// (0x00045a7f) navi_navi_pane_g2_ParamLimits

0xa9e2,	// (0x00045a7f) navi_navi_pane_g2

0x0001,

0xf8f5,	// (0x0004a992) navi_navi_pane_g_ParamLimits

0xf8f5,	// (0x0004a992) navi_navi_pane_g

0xa9f4,	// (0x00045a91) navi_navi_tabs_pane

0xa9fd,	// (0x00045a9a) navi_navi_text_pane

0xa9c8,	// (0x00045a65) navi_navi_volume_pane

0xa9a4,	// (0x00045a41) navi_text_pane_t1

0xa998,	// (0x00045a35) navi_icon_pane_g1

0xa8eb,	// (0x00045988) navi_navi_text_pane_t1

0x6c35,	// (0x00041cd2) navi_navi_volume_pane_g1

0x6c3d,	// (0x00041cda) volume_small_pane

0xa851,	// (0x000458ee) navi_navi_icon_text_pane_g1

0xa859,	// (0x000458f6) navi_navi_icon_text_pane_t1

0x9165,	// (0x00044202) navi_tabs_2_long_pane

0x9165,	// (0x00044202) navi_tabs_2_pane

0x9165,	// (0x00044202) navi_tabs_3_long_pane

0x9165,	// (0x00044202) navi_tabs_3_pane

0x9165,	// (0x00044202) navi_tabs_4_pane

0x6c15,	// (0x00041cb2) tabs_2_active_pane_ParamLimits

0x6c15,	// (0x00041cb2) tabs_2_active_pane

0x6c25,	// (0x00041cc2) tabs_2_passive_pane_ParamLimits

0x6c25,	// (0x00041cc2) tabs_2_passive_pane

0x6be3,	// (0x00041c80) tabs_3_active_pane_ParamLimits

0x6be3,	// (0x00041c80) tabs_3_active_pane

0x6bf3,	// (0x00041c90) tabs_3_passive_pane_ParamLimits

0x6bf3,	// (0x00041c90) tabs_3_passive_pane

0x6c04,	// (0x00041ca1) tabs_3_passive_pane_cp_ParamLimits

0x6c04,	// (0x00041ca1) tabs_3_passive_pane_cp

0x6b9f,	// (0x00041c3c) tabs_4_active_pane_ParamLimits

0x6b9f,	// (0x00041c3c) tabs_4_active_pane

0x6bb0,	// (0x00041c4d) tabs_4_passive_pane_ParamLimits

0x6bb0,	// (0x00041c4d) tabs_4_passive_pane

0x6bc1,	// (0x00041c5e) tabs_4_passive_pane_cp_ParamLimits

0x6bc1,	// (0x00041c5e) tabs_4_passive_pane_cp

0x6bd2,	// (0x00041c6f) tabs_4_passive_pane_cp2_ParamLimits

0x6bd2,	// (0x00041c6f) tabs_4_passive_pane_cp2

0x6b7b,	// (0x00041c18) tabs_2_long_active_pane_ParamLimits

0x6b7b,	// (0x00041c18) tabs_2_long_active_pane

0x6b8d,	// (0x00041c2a) tabs_2_long_passive_pane_ParamLimits

0x6b8d,	// (0x00041c2a) tabs_2_long_passive_pane

0x6b3c,	// (0x00041bd9) tabs_3_long_active_pane_ParamLimits

0x6b3c,	// (0x00041bd9) tabs_3_long_active_pane

0x6b4f,	// (0x00041bec) tabs_3_long_passive_pane_ParamLimits

0x6b4f,	// (0x00041bec) tabs_3_long_passive_pane

0x6b68,	// (0x00041c05) tabs_3_long_passive_pane_cp_ParamLimits

0x6b68,	// (0x00041c05) tabs_3_long_passive_pane_cp

0x6ae2,	// (0x00041b7f) volume_small_pane_g1

0x6aeb,	// (0x00041b88) volume_small_pane_g2

0x6af4,	// (0x00041b91) volume_small_pane_g3

0x6afd,	// (0x00041b9a) volume_small_pane_g4

0x6b06,	// (0x00041ba3) volume_small_pane_g5

0x6b0f,	// (0x00041bac) volume_small_pane_g6

0x6b18,	// (0x00041bb5) volume_small_pane_g7

0x6b21,	// (0x00041bbe) volume_small_pane_g8

0x6b2a,	// (0x00041bc7) volume_small_pane_g9

0x6b33,	// (0x00041bd0) volume_small_pane_g10

0x0009,

0xf8c1,	// (0x0004a95e) volume_small_pane_g

0x7de2,	// (0x00042e7f) bg_active_tab_pane_cp2_ParamLimits

0x7de2,	// (0x00042e7f) bg_active_tab_pane_cp2

0x7df0,	// (0x00042e8d) tabs_3_active_pane_g1

0x7df8,	// (0x00042e95) tabs_3_active_pane_t1

0x7de2,	// (0x00042e7f) bg_passive_tab_pane_cp2_ParamLimits

0x7de2,	// (0x00042e7f) bg_passive_tab_pane_cp2

0x7df0,	// (0x00042e8d) tabs_3_passive_pane_g1

0x7df8,	// (0x00042e95) tabs_3_passive_pane_t1

0x7de2,	// (0x00042e7f) bg_active_tab_pane_cp3_ParamLimits

0x7de2,	// (0x00042e7f) bg_active_tab_pane_cp3

0x7e0a,	// (0x00042ea7) tabs_4_active_pane_g1

0x7e12,	// (0x00042eaf) tabs_4_active_pane_t1

0x7de2,	// (0x00042e7f) bg_passive_tab_pane_cp3_ParamLimits

0x7de2,	// (0x00042e7f) bg_passive_tab_pane_cp3

0x7e0a,	// (0x00042ea7) tabs_4_1_passive_pane_g1

0x7e12,	// (0x00042eaf) tabs_4_1_passive_pane_t1

0x9617,	// (0x000446b4) list_highlight_pane_cp2

0xaf2c,	// (0x00045fc9) list_set_pane_ParamLimits

0xaf2c,	// (0x00045fc9) list_set_pane

0xafd2,	// (0x0004606f) main_pane_set_t1_ParamLimits

0xafd2,	// (0x0004606f) main_pane_set_t1

0xaff2,	// (0x0004608f) main_pane_set_t2_ParamLimits

0xaff2,	// (0x0004608f) main_pane_set_t2

0xb006,	// (0x000460a3) main_pane_set_t3_ParamLimits

0xb006,	// (0x000460a3) main_pane_set_t3

0xb018,	// (0x000460b5) main_pane_set_t4_ParamLimits

0xb018,	// (0x000460b5) main_pane_set_t4

0x0003,

0xf991,	// (0x0004aa2e) main_pane_set_t_ParamLimits

0xf991,	// (0x0004aa2e) main_pane_set_t

0xb02a,	// (0x000460c7) setting_code_pane

0xb036,	// (0x000460d3) setting_slider_graphic_pane

0xb036,	// (0x000460d3) setting_slider_pane

0xb036,	// (0x000460d3) setting_text_pane

0xb036,	// (0x000460d3) setting_volume_pane

0x5c97,	// (0x00040d34) volume_set_pane

0x7de2,	// (0x00042e7f) bg_set_opt_pane_cp

0x5c9f,	// (0x00040d3c) setting_slider_pane_t1

0x5cb8,	// (0x00040d55) setting_slider_pane_t2

0x5cd2,	// (0x00040d6f) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0004a601) setting_slider_pane_t

0x5cea,	// (0x00040d87) slider_set_pane

0x7d02,	// (0x00042d9f) bg_set_opt_pane_cp2

0x7e24,	// (0x00042ec1) setting_slider_graphic_pane_g1

0x5d00,	// (0x00040d9d) setting_slider_graphic_pane_t1

0x5d10,	// (0x00040dad) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0004a608) setting_slider_graphic_pane_t

0x5d20,	// (0x00040dbd) slider_set_pane_cp

0x7d02,	// (0x00042d9f) input_focus_pane_cp1

0xaeeb,	// (0x00045f88) list_set_text_pane

0x7cf8,	// (0x00042d95) setting_text_pane_g1

0x7d02,	// (0x00042d9f) input_focus_pane_cp2

0x7cf8,	// (0x00042d95) setting_code_pane_g1

0x7e2d,	// (0x00042eca) setting_code_pane_t1

0x49bf,	// (0x0003fa5c) set_text_pane_t1_ParamLimits

0x49bf,	// (0x0003fa5c) set_text_pane_t1

0x86a9,	// (0x00043746) set_opt_bg_pane_g1

0x86b1,	// (0x0004374e) set_opt_bg_pane_g2

0xaec5,	// (0x00045f62) set_opt_bg_pane_g3

0x86c1,	// (0x0004375e) set_opt_bg_pane_g4

0x86c9,	// (0x00043766) set_opt_bg_pane_g5

0x86d1,	// (0x0004376e) set_opt_bg_pane_g6

0xaecf,	// (0x00045f6c) set_opt_bg_pane_g7

0xaed7,	// (0x00045f74) set_opt_bg_pane_g8

0xaee1,	// (0x00045f7e) set_opt_bg_pane_g9

0x0008,

0xf97e,	// (0x0004aa1b) set_opt_bg_pane_g

0xaeb8,	// (0x00045f55) slider_set_pane_g1

0x6caa,	// (0x00041d47) slider_set_pane_g2

0x0006,

0xf96f,	// (0x0004aa0c) slider_set_pane_g

0x6c46,	// (0x00041ce3) volume_set_pane_g1

0x6c4e,	// (0x00041ceb) volume_set_pane_g2

0x6c56,	// (0x00041cf3) volume_set_pane_g3

0x6c5e,	// (0x00041cfb) volume_set_pane_g4

0x6c66,	// (0x00041d03) volume_set_pane_g5

0x6c6e,	// (0x00041d0b) volume_set_pane_g6

0x6c76,	// (0x00041d13) volume_set_pane_g7

0x6c7e,	// (0x00041d1b) volume_set_pane_g8

0x6c86,	// (0x00041d23) volume_set_pane_g9

0x6c8e,	// (0x00041d2b) volume_set_pane_g10

0x0009,

0xf947,	// (0x0004a9e4) volume_set_pane_g

0x7e3b,	// (0x00042ed8) indicator_pane_ParamLimits

0x7e3b,	// (0x00042ed8) indicator_pane

0x7e47,	// (0x00042ee4) main_idle_pane_g2_ParamLimits

0x7e47,	// (0x00042ee4) main_idle_pane_g2

0x7e6f,	// (0x00042f0c) main_pane_idle_g1_ParamLimits

0x7e6f,	// (0x00042f0c) main_pane_idle_g1

0x7e7c,	// (0x00042f19) popup_clock_digital_analogue_window_ParamLimits

0x7e7c,	// (0x00042f19) popup_clock_digital_analogue_window

0x7e93,	// (0x00042f30) soft_indicator_pane_ParamLimits

0x7e93,	// (0x00042f30) soft_indicator_pane

0x7e9f,	// (0x00042f3c) wallpaper_pane_ParamLimits

0x7e9f,	// (0x00042f3c) wallpaper_pane

0x7cf8,	// (0x00042d95) wallpaper_pane_g1

0x7eb3,	// (0x00042f50) indicator_pane_g1_ParamLimits

0x7eb3,	// (0x00042f50) indicator_pane_g1

0xb28e,	// (0x0004632b) navi_navi_icon_text_pane_srt_g1

0x7ece,	// (0x00042f6b) soft_indicator_pane_t1

0x7ee8,	// (0x00042f85) aid_ps_area_pane

0x7ef9,	// (0x00042f96) aid_ps_clock_pane

0x7f07,	// (0x00042fa4) aid_ps_indicator_pane

0x7f13,	// (0x00042fb0) indicator_ps_pane_ParamLimits

0x7f13,	// (0x00042fb0) indicator_ps_pane

0x7f22,	// (0x00042fbf) power_save_pane_g1_ParamLimits

0x7f22,	// (0x00042fbf) power_save_pane_g1

0x7f2e,	// (0x00042fcb) power_save_pane_g2_ParamLimits

0x7f2e,	// (0x00042fcb) power_save_pane_g2

0x58b2,	// (0x0004094f) aid_navinavi_width_pane

0x7ee8,	// (0x00042f85) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0004a60d) power_save_pane_g_ParamLimits

0xf570,	// (0x0004a60d) power_save_pane_g

0x7f3c,	// (0x00042fd9) power_save_pane_t1_ParamLimits

0x7f3c,	// (0x00042fd9) power_save_pane_t1

0x7ef9,	// (0x00042f96) aid_ps_clock_pane_ParamLimits

0x7f07,	// (0x00042fa4) aid_ps_indicator_pane_ParamLimits

0x7f4e,	// (0x00042feb) power_save_pane_t4_ParamLimits

0x7f4e,	// (0x00042feb) power_save_pane_t4

0x0001,

0xf575,	// (0x0004a612) power_save_pane_t_ParamLimits

0xf575,	// (0x0004a612) power_save_pane_t

0x7f78,	// (0x00043015) power_save_t3_ParamLimits

0x7f78,	// (0x00043015) power_save_t3

0x7f63,	// (0x00043000) power_save_t2_ParamLimits

0x7f63,	// (0x00043000) power_save_t2

0x7f8d,	// (0x0004302a) indicator_ps_pane_g1

0x7f96,	// (0x00043033) ai_gene_pane_ParamLimits

0x7f96,	// (0x00043033) ai_gene_pane

0x7fa2,	// (0x0004303f) ai_links_pane_ParamLimits

0x7fa2,	// (0x0004303f) ai_links_pane

0x7fae,	// (0x0004304b) indicator_pane_cp1_ParamLimits

0x7fae,	// (0x0004304b) indicator_pane_cp1

0x7fba,	// (0x00043057) main_pane_idle_g1_cp_ParamLimits

0x7fba,	// (0x00043057) main_pane_idle_g1_cp

0x7fc6,	// (0x00043063) popup_ai_links_title_window

0x7fcf,	// (0x0004306c) soft_indicator_pane_cp1_ParamLimits

0x7fcf,	// (0x0004306c) soft_indicator_pane_cp1

0xac91,	// (0x00045d2e) ai_links_pane_g1

0xac9a,	// (0x00045d37) grid_ai_links_pane

0xac74,	// (0x00045d11) ai_gene_pane_1

0xac7f,	// (0x00045d1c) ai_gene_pane_2

0xac88,	// (0x00045d25) list_highlight_pane_cp4

0xac58,	// (0x00045cf5) cell_ai_link_pane_ParamLimits

0xac58,	// (0x00045cf5) cell_ai_link_pane

0xac50,	// (0x00045ced) cell_ai_link_pane_g1

0x81ff,	// (0x0004329c) cell_ai_link_pane_g2

0x0001,

0xf922,	// (0x0004a9bf) cell_ai_link_pane_g

0x7d02,	// (0x00042d9f) grid_highlight_cp2

0x7d02,	// (0x00042d9f) bg_popup_sub_pane_cp1

0x7fe9,	// (0x00043086) popup_ai_links_title_window_t1

0xab9e,	// (0x00045c3b) ai_gene_pane_1_g1_ParamLimits

0xab9e,	// (0x00045c3b) ai_gene_pane_1_g1

0xabaa,	// (0x00045c47) ai_gene_pane_1_g2_ParamLimits

0xabaa,	// (0x00045c47) ai_gene_pane_1_g2

0x0001,

0xf918,	// (0x0004a9b5) ai_gene_pane_1_g_ParamLimits

0xf918,	// (0x0004a9b5) ai_gene_pane_1_g

0xabb7,	// (0x00045c54) ai_gene_pane_1_t1_ParamLimits

0xabb7,	// (0x00045c54) ai_gene_pane_1_t1

0xabeb,	// (0x00045c88) grid_ai_soft_ind_pane

0xab89,	// (0x00045c26) ai_gene_pane_2_t1_ParamLimits

0xab89,	// (0x00045c26) ai_gene_pane_2_t1

0x7ff8,	// (0x00043095) main_pane_empty_t1_ParamLimits

0x7ff8,	// (0x00043095) main_pane_empty_t1

0x8010,	// (0x000430ad) main_pane_empty_t2_ParamLimits

0x8010,	// (0x000430ad) main_pane_empty_t2

0x8025,	// (0x000430c2) main_pane_empty_t3_ParamLimits

0x8025,	// (0x000430c2) main_pane_empty_t3

0x8037,	// (0x000430d4) main_pane_empty_t4_ParamLimits

0x8037,	// (0x000430d4) main_pane_empty_t4

0x8049,	// (0x000430e6) main_pane_empty_t5_ParamLimits

0x8049,	// (0x000430e6) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0004a617) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0004a617) main_pane_empty_t

0x86fa,	// (0x00043797) bg_popup_window_pane_ParamLimits

0x86fa,	// (0x00043797) bg_popup_window_pane

0xa8f9,	// (0x00045996) find_popup_pane_cp2_ParamLimits

0xa8f9,	// (0x00045996) find_popup_pane_cp2

0xa905,	// (0x000459a2) heading_pane_ParamLimits

0xa905,	// (0x000459a2) heading_pane

0x7d02,	// (0x00042d9f) bg_popup_sub_pane

0xa873,	// (0x00045910) bg_popup_window_pane_g1_ParamLimits

0xa873,	// (0x00045910) bg_popup_window_pane_g1

0xa87f,	// (0x0004591c) bg_popup_window_pane_g2_ParamLimits

0xa87f,	// (0x0004591c) bg_popup_window_pane_g2

0xa88b,	// (0x00045928) bg_popup_window_pane_g3_ParamLimits

0xa88b,	// (0x00045928) bg_popup_window_pane_g3

0xa897,	// (0x00045934) bg_popup_window_pane_g4_ParamLimits

0xa897,	// (0x00045934) bg_popup_window_pane_g4

0xa8a3,	// (0x00045940) bg_popup_window_pane_g5_ParamLimits

0xa8a3,	// (0x00045940) bg_popup_window_pane_g5

0xa8af,	// (0x0004594c) bg_popup_window_pane_g6_ParamLimits

0xa8af,	// (0x0004594c) bg_popup_window_pane_g6

0xa8bb,	// (0x00045958) bg_popup_window_pane_g7_ParamLimits

0xa8bb,	// (0x00045958) bg_popup_window_pane_g7

0xa8c7,	// (0x00045964) bg_popup_window_pane_g8_ParamLimits

0xa8c7,	// (0x00045964) bg_popup_window_pane_g8

0xa8d3,	// (0x00045970) bg_popup_window_pane_g9_ParamLimits

0xa8d3,	// (0x00045970) bg_popup_window_pane_g9

0xa8df,	// (0x0004597c) bg_popup_window_pane_g10_ParamLimits

0xa8df,	// (0x0004597c) bg_popup_window_pane_g10

0x0009,

0xf8e0,	// (0x0004a97d) bg_popup_window_pane_g_ParamLimits

0xf8e0,	// (0x0004a97d) bg_popup_window_pane_g

0xa808,	// (0x000458a5) bg_popup_heading_pane_ParamLimits

0xa808,	// (0x000458a5) bg_popup_heading_pane

0x6d86,	// (0x00041e23) tabs_4_passive_pane_cp_srt_ParamLimits

0x6d86,	// (0x00041e23) tabs_4_passive_pane_cp_srt

0x6d98,	// (0x00041e35) tabs_4_passive_pane_srt_ParamLimits

0xa81c,	// (0x000458b9) heading_pane_g2

0x6d98,	// (0x00041e35) tabs_4_passive_pane_srt

0x9617,	// (0x000446b4) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9617,	// (0x000446b4) bg_passive_tab_pane_cp3_srt

0xa824,	// (0x000458c1) heading_pane_t1_ParamLimits

0xa824,	// (0x000458c1) heading_pane_t1

0xa83b,	// (0x000458d8) heading_pane_t2_ParamLimits

0xa83b,	// (0x000458d8) heading_pane_t2

0x0001,

0xf8db,	// (0x0004a978) heading_pane_t_ParamLimits

0xf8db,	// (0x0004a978) heading_pane_t

0xa335,	// (0x000453d2) bg_popup_heading_pane_g1

0xa3e4,	// (0x00045481) bg_popup_heading_pane_g2

0xa3ee,	// (0x0004548b) bg_popup_heading_pane_g3

0xa3f8,	// (0x00045495) bg_popup_heading_pane_g4

0xa402,	// (0x0004549f) bg_popup_heading_pane_g5

0xa40c,	// (0x000454a9) bg_popup_heading_pane_g6

0xa414,	// (0x000454b1) bg_popup_heading_pane_g7

0xa41c,	// (0x000454b9) bg_popup_heading_pane_g8

0xa426,	// (0x000454c3) bg_popup_heading_pane_g9

0x0008,

0xf897,	// (0x0004a934) bg_popup_heading_pane_g

0x9b1b,	// (0x00044bb8) bg_popup_sub_pane_g1

0x9b23,	// (0x00044bc0) bg_popup_sub_pane_g2

0x9b2b,	// (0x00044bc8) bg_popup_sub_pane_g3

0x9b33,	// (0x00044bd0) bg_popup_sub_pane_g4

0x9b3b,	// (0x00044bd8) bg_popup_sub_pane_g5

0x9b43,	// (0x00044be0) bg_popup_sub_pane_g6

0x9b4b,	// (0x00044be8) bg_popup_sub_pane_g7

0x9b53,	// (0x00044bf0) bg_popup_sub_pane_g8

0x9b5b,	// (0x00044bf8) bg_popup_sub_pane_g9

0x0008,

0xf871,	// (0x0004a90e) bg_popup_sub_pane_g

0x805d,	// (0x000430fa) bg_popup_window_pane_cp5_ParamLimits

0x805d,	// (0x000430fa) bg_popup_window_pane_cp5

0x8079,	// (0x00043116) popup_note_window_g1_ParamLimits

0x8079,	// (0x00043116) popup_note_window_g1

0x8085,	// (0x00043122) popup_note_window_t1_ParamLimits

0x8085,	// (0x00043122) popup_note_window_t1

0x809b,	// (0x00043138) popup_note_window_t2_ParamLimits

0x809b,	// (0x00043138) popup_note_window_t2

0x80b1,	// (0x0004314e) popup_note_window_t3_ParamLimits

0x80b1,	// (0x0004314e) popup_note_window_t3

0x80c7,	// (0x00043164) popup_note_window_t4_ParamLimits

0x80c7,	// (0x00043164) popup_note_window_t4

0x80ef,	// (0x0004318c) popup_note_window_t5_ParamLimits

0x80ef,	// (0x0004318c) popup_note_window_t5

0x0004,

0xf585,	// (0x0004a622) popup_note_window_t_ParamLimits

0xf585,	// (0x0004a622) popup_note_window_t

0x8113,	// (0x000431b0) bg_popup_window_pane_cp6_ParamLimits

0x8113,	// (0x000431b0) bg_popup_window_pane_cp6

0xa2b1,	// (0x0004534e) popup_note_image_window_g1_ParamLimits

0xa2b1,	// (0x0004534e) popup_note_image_window_g1

0xa2bd,	// (0x0004535a) popup_note_image_window_g2_ParamLimits

0xa2bd,	// (0x0004535a) popup_note_image_window_g2

0x0001,

0xf865,	// (0x0004a902) popup_note_image_window_g_ParamLimits

0xf865,	// (0x0004a902) popup_note_image_window_g

0xa2d6,	// (0x00045373) popup_note_image_window_t1_ParamLimits

0xa2d6,	// (0x00045373) popup_note_image_window_t1

0xa2ef,	// (0x0004538c) popup_note_image_window_t2_ParamLimits

0xa2ef,	// (0x0004538c) popup_note_image_window_t2

0xa308,	// (0x000453a5) popup_note_image_window_t3_ParamLimits

0xa308,	// (0x000453a5) popup_note_image_window_t3

0x0002,

0xf86a,	// (0x0004a907) popup_note_image_window_t_ParamLimits

0xf86a,	// (0x0004a907) popup_note_image_window_t

0xa172,	// (0x0004520f) bg_popup_window_pane_cp7_ParamLimits

0xa172,	// (0x0004520f) bg_popup_window_pane_cp7

0xa1a2,	// (0x0004523f) popup_note_wait_window_g1_ParamLimits

0xa1a2,	// (0x0004523f) popup_note_wait_window_g1

0xa1ae,	// (0x0004524b) popup_note_wait_window_g2_ParamLimits

0xa1ae,	// (0x0004524b) popup_note_wait_window_g2

0x0002,

0xf853,	// (0x0004a8f0) popup_note_wait_window_g_ParamLimits

0xf853,	// (0x0004a8f0) popup_note_wait_window_g

0xa1c6,	// (0x00045263) popup_note_wait_window_t1_ParamLimits

0xa1c6,	// (0x00045263) popup_note_wait_window_t1

0xa1ed,	// (0x0004528a) popup_note_wait_window_t2_ParamLimits

0xa1ed,	// (0x0004528a) popup_note_wait_window_t2

0xa20a,	// (0x000452a7) popup_note_wait_window_t3_ParamLimits

0xa20a,	// (0x000452a7) popup_note_wait_window_t3

0xa21d,	// (0x000452ba) popup_note_wait_window_t4_ParamLimits

0xa21d,	// (0x000452ba) popup_note_wait_window_t4

0x0004,

0xf85a,	// (0x0004a8f7) popup_note_wait_window_t_ParamLimits

0xf85a,	// (0x0004a8f7) popup_note_wait_window_t

0xa242,	// (0x000452df) wait_bar_pane_ParamLimits

0xa242,	// (0x000452df) wait_bar_pane

0x7d02,	// (0x00042d9f) wait_anim_pane

0x7d02,	// (0x00042d9f) wait_border_pane

0x7cf8,	// (0x00042d95) wait_anim_pane_g1

0x7cf8,	// (0x00042d95) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0004a7ab) wait_anim_pane_g

0xa116,	// (0x000451b3) wait_border_pane_g1

0xa121,	// (0x000451be) wait_border_pane_g2

0xa12a,	// (0x000451c7) wait_border_pane_g3

0x0002,

0xf84c,	// (0x0004a8e9) wait_border_pane_g

0x9f81,	// (0x0004501e) bg_popup_window_pane_cp16_ParamLimits

0x9f81,	// (0x0004501e) bg_popup_window_pane_cp16

0xa081,	// (0x0004511e) indicator_popup_pane_cp4_ParamLimits

0xa081,	// (0x0004511e) indicator_popup_pane_cp4

0xa095,	// (0x00045132) popup_query_data_window_t1_ParamLimits

0xa095,	// (0x00045132) popup_query_data_window_t1

0xa0a7,	// (0x00045144) popup_query_data_window_t2_ParamLimits

0xa0a7,	// (0x00045144) popup_query_data_window_t2

0xa0c0,	// (0x0004515d) popup_query_data_window_t3_ParamLimits

0xa0c0,	// (0x0004515d) popup_query_data_window_t3

0x0002,

0xf845,	// (0x0004a8e2) popup_query_data_window_t_ParamLimits

0xf845,	// (0x0004a8e2) popup_query_data_window_t

0xa0da,	// (0x00045177) query_popup_data_pane_ParamLimits

0xa0da,	// (0x00045177) query_popup_data_pane

0xa0ee,	// (0x0004518b) query_popup_data_pane_cp1_ParamLimits

0xa0ee,	// (0x0004518b) query_popup_data_pane_cp1

0x9f81,	// (0x0004501e) bg_popup_window_pane_cp10_ParamLimits

0x9f81,	// (0x0004501e) bg_popup_window_pane_cp10

0x9fb3,	// (0x00045050) indicator_popup_pane_ParamLimits

0x9fb3,	// (0x00045050) indicator_popup_pane

0x9fd5,	// (0x00045072) popup_query_code_window_t1_ParamLimits

0x9fd5,	// (0x00045072) popup_query_code_window_t1

0x9fef,	// (0x0004508c) popup_query_code_window_t2_ParamLimits

0x9fef,	// (0x0004508c) popup_query_code_window_t2

0xa038,	// (0x000450d5) popup_query_code_window_t3_ParamLimits

0xa038,	// (0x000450d5) popup_query_code_window_t3

0x0002,

0xf83e,	// (0x0004a8db) popup_query_code_window_t_ParamLimits

0xf83e,	// (0x0004a8db) popup_query_code_window_t

0xa067,	// (0x00045104) query_popup_pane_ParamLimits

0xa067,	// (0x00045104) query_popup_pane

0x8113,	// (0x000431b0) bg_popup_window_pane_cp15_ParamLimits

0x8113,	// (0x000431b0) bg_popup_window_pane_cp15

0x8131,	// (0x000431ce) indicator_popup_pane_cp1_ParamLimits

0x8131,	// (0x000431ce) indicator_popup_pane_cp1

0x8144,	// (0x000431e1) indicator_popup_pane_cp2_ParamLimits

0x8144,	// (0x000431e1) indicator_popup_pane_cp2

0x8157,	// (0x000431f4) popup_query_data_code_window_g1_ParamLimits

0x8157,	// (0x000431f4) popup_query_data_code_window_g1

0x816a,	// (0x00043207) popup_query_data_code_window_t1_ParamLimits

0x816a,	// (0x00043207) popup_query_data_code_window_t1

0x817c,	// (0x00043219) popup_query_data_code_window_t2_ParamLimits

0x817c,	// (0x00043219) popup_query_data_code_window_t2

0x818e,	// (0x0004322b) popup_query_data_code_window_t3_ParamLimits

0x818e,	// (0x0004322b) popup_query_data_code_window_t3

0x81a4,	// (0x00043241) popup_query_data_code_window_t4_ParamLimits

0x81a4,	// (0x00043241) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0004a62d) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0004a62d) popup_query_data_code_window_t

0x69f3,	// (0x00041a90) list_single_midp_graphic_pane_g3

0x81bc,	// (0x00043259) query_popup_data_pane_cp2_ParamLimits

0x81cf,	// (0x0004326c) query_popup_pane_cp2_ParamLimits

0x81cf,	// (0x0004326c) query_popup_pane_cp2

0x7d02,	// (0x00042d9f) bg_popup_window_pane_cp11

0x9f79,	// (0x00045016) heading_pane_cp5

0x82b7,	// (0x00043354) listscroll_popup_info_pane

0x7d02,	// (0x00042d9f) input_focus_pane_cp3

0x81e2,	// (0x0004327f) query_popup_pane_t1

0x81f0,	// (0x0004328d) list_popup_info_pane_ParamLimits

0x81f0,	// (0x0004328d) list_popup_info_pane

0x81ff,	// (0x0004329c) listscroll_popup_info_pane_g1

0x8207,	// (0x000432a4) scroll_pane_cp7

0x8211,	// (0x000432ae) popup_info_list_pane_t1_ParamLimits

0x8211,	// (0x000432ae) popup_info_list_pane_t1

0x822b,	// (0x000432c8) popup_info_list_pane_t2_ParamLimits

0x822b,	// (0x000432c8) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0004a636) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0004a636) popup_info_list_pane_t

0x7d02,	// (0x00042d9f) bg_popup_window_pane_cp12

0xb2a8,	// (0x00046345) find_popup_pane

0x7de2,	// (0x00042e7f) bg_popup_window_pane_cp3

0x8245,	// (0x000432e2) heading_pane_cp3

0x8251,	// (0x000432ee) listscroll_popup_graphic_pane

0x7d02,	// (0x00042d9f) bg_popup_window_pane_cp4

0x82ad,	// (0x0004334a) heading_pane_cp4

0x82b7,	// (0x00043354) listscroll_popup_colour_pane

0x82bf,	// (0x0004335c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x82bf,	// (0x0004335c) cell_large_graphic_colour_none_popup_pane

0x82d3,	// (0x00043370) grid_large_graphic_colour_popup_pane_ParamLimits

0x82d3,	// (0x00043370) grid_large_graphic_colour_popup_pane

0x82ff,	// (0x0004339c) listscroll_popup_colour_pane_g1_ParamLimits

0x82ff,	// (0x0004339c) listscroll_popup_colour_pane_g1

0x8316,	// (0x000433b3) listscroll_popup_colour_pane_g2_ParamLimits

0x8316,	// (0x000433b3) listscroll_popup_colour_pane_g2

0x832d,	// (0x000433ca) listscroll_popup_colour_pane_g3_ParamLimits

0x832d,	// (0x000433ca) listscroll_popup_colour_pane_g3

0x833d,	// (0x000433da) listscroll_popup_colour_pane_g4_ParamLimits

0x833d,	// (0x000433da) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0004a63b) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0004a63b) listscroll_popup_colour_pane_g

0x8351,	// (0x000433ee) scroll_pane_cp6_ParamLimits

0x8351,	// (0x000433ee) scroll_pane_cp6

0x8363,	// (0x00043400) cell_large_graphic_colour_popup_pane_ParamLimits

0x8363,	// (0x00043400) cell_large_graphic_colour_popup_pane

0x8382,	// (0x0004341f) cell_large_graphic_colour_none_popup_pane_t1

0x7d02,	// (0x00042d9f) grid_highlight_pane_cp5

0x8391,	// (0x0004342e) cell_large_graphic_colour_popup_pane_g1

0x8399,	// (0x00043436) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0004a644) cell_large_graphic_colour_popup_pane_g

0x83a1,	// (0x0004343e) cell_large_graphic_colour_popup_pane_g2_copy1

0x83aa,	// (0x00043447) grid_highlight_pane_cp4

0x83b2,	// (0x0004344f) bg_popup_window_pane_cp8_ParamLimits

0x83b2,	// (0x0004344f) bg_popup_window_pane_cp8

0x83cd,	// (0x0004346a) popup_snote_single_text_window_g1_ParamLimits

0x83cd,	// (0x0004346a) popup_snote_single_text_window_g1

0x83df,	// (0x0004347c) popup_snote_single_text_window_t1_ParamLimits

0x83df,	// (0x0004347c) popup_snote_single_text_window_t1

0x83f2,	// (0x0004348f) popup_snote_single_text_window_t2_ParamLimits

0x83f2,	// (0x0004348f) popup_snote_single_text_window_t2

0x8405,	// (0x000434a2) popup_snote_single_text_window_t3_ParamLimits

0x8405,	// (0x000434a2) popup_snote_single_text_window_t3

0x843e,	// (0x000434db) popup_snote_single_text_window_t4_ParamLimits

0x843e,	// (0x000434db) popup_snote_single_text_window_t4

0x8472,	// (0x0004350f) popup_snote_single_text_window_t5_ParamLimits

0x8472,	// (0x0004350f) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0004a649) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0004a649) popup_snote_single_text_window_t

0x84a1,	// (0x0004353e) bg_popup_window_pane_cp9_ParamLimits

0x84a1,	// (0x0004353e) bg_popup_window_pane_cp9

0x83cd,	// (0x0004346a) popup_snote_single_graphic_window_g1_ParamLimits

0x83cd,	// (0x0004346a) popup_snote_single_graphic_window_g1

0x84af,	// (0x0004354c) popup_snote_single_graphic_window_g2_ParamLimits

0x84af,	// (0x0004354c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0004a654) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0004a654) popup_snote_single_graphic_window_g

0x84bb,	// (0x00043558) popup_snote_single_graphic_window_t1_ParamLimits

0x84bb,	// (0x00043558) popup_snote_single_graphic_window_t1

0x84ce,	// (0x0004356b) popup_snote_single_graphic_window_t2_ParamLimits

0x84ce,	// (0x0004356b) popup_snote_single_graphic_window_t2

0x84e1,	// (0x0004357e) popup_snote_single_graphic_window_t3_ParamLimits

0x84e1,	// (0x0004357e) popup_snote_single_graphic_window_t3

0x851a,	// (0x000435b7) popup_snote_single_graphic_window_t4_ParamLimits

0x851a,	// (0x000435b7) popup_snote_single_graphic_window_t4

0x854e,	// (0x000435eb) popup_snote_single_graphic_window_t5_ParamLimits

0x854e,	// (0x000435eb) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0004a659) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0004a659) popup_snote_single_graphic_window_t

0xb1ec,	// (0x00046289) grid_graphic_popup_pane_ParamLimits

0xb1ec,	// (0x00046289) grid_graphic_popup_pane

0xb214,	// (0x000462b1) listscroll_popup_graphic_pane_g1_ParamLimits

0xb214,	// (0x000462b1) listscroll_popup_graphic_pane_g1

0xb228,	// (0x000462c5) listscroll_popup_graphic_pane_g2_ParamLimits

0xb228,	// (0x000462c5) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bb,	// (0x0004aa58) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bb,	// (0x0004aa58) listscroll_popup_graphic_pane_g

0xb23c,	// (0x000462d9) scroll_pane_cp5

0xb195,	// (0x00046232) cell_graphic_popup_pane_ParamLimits

0xb195,	// (0x00046232) cell_graphic_popup_pane

0xb176,	// (0x00046213) cell_graphic_popup_pane_g1

0xb17e,	// (0x0004621b) cell_graphic_popup_pane_g2

0x83a1,	// (0x0004343e) cell_graphic_popup_pane_g3

0x0002,

0xf9b4,	// (0x0004aa51) cell_graphic_popup_pane_g

0xb187,	// (0x00046224) cell_graphic_popup_pane_t2

0x83aa,	// (0x00043447) grid_highlight_pane_cp3

0x858f,	// (0x0004362c) list_gen_pane_ParamLimits

0x858f,	// (0x0004362c) list_gen_pane

0x85c1,	// (0x0004365e) scroll_pane

0xb0ce,	// (0x0004616b) bg_list_pane_g1_ParamLimits

0xb0ce,	// (0x0004616b) bg_list_pane_g1

0xb0eb,	// (0x00046188) bg_list_pane_g2_ParamLimits

0xb0eb,	// (0x00046188) bg_list_pane_g2

0xb100,	// (0x0004619d) bg_list_pane_g3_ParamLimits

0xb100,	// (0x0004619d) bg_list_pane_g3

0xb114,	// (0x000461b1) bg_list_pane_g4_ParamLimits

0xb114,	// (0x000461b1) bg_list_pane_g4

0xb128,	// (0x000461c5) bg_list_pane_g5_ParamLimits

0xb128,	// (0x000461c5) bg_list_pane_g5

0x0004,

0xf9a9,	// (0x0004aa46) bg_list_pane_g_ParamLimits

0xf9a9,	// (0x0004aa46) bg_list_pane_g

0x6ccc,	// (0x00041d69) list_double2_graphic_large_graphic_pane_ParamLimits

0x6ccc,	// (0x00041d69) list_double2_graphic_large_graphic_pane

0x6ccc,	// (0x00041d69) list_double2_graphic_pane_ParamLimits

0x6ccc,	// (0x00041d69) list_double2_graphic_pane

0x6ccc,	// (0x00041d69) list_double2_large_graphic_pane_ParamLimits

0x6ccc,	// (0x00041d69) list_double2_large_graphic_pane

0x6ccc,	// (0x00041d69) list_double2_pane_ParamLimits

0x6ccc,	// (0x00041d69) list_double2_pane

0x6ccc,	// (0x00041d69) list_double_graphic_heading_pane_ParamLimits

0x6ccc,	// (0x00041d69) list_double_graphic_heading_pane

0x6ccc,	// (0x00041d69) list_double_graphic_pane_ParamLimits

0x6ccc,	// (0x00041d69) list_double_graphic_pane

0x6ccc,	// (0x00041d69) list_double_heading_pane_ParamLimits

0x6ccc,	// (0x00041d69) list_double_heading_pane

0x6ccc,	// (0x00041d69) list_double_large_graphic_pane_ParamLimits

0x6ccc,	// (0x00041d69) list_double_large_graphic_pane

0x6ccc,	// (0x00041d69) list_double_number_pane_ParamLimits

0x6ccc,	// (0x00041d69) list_double_number_pane

0x6ccc,	// (0x00041d69) list_double_pane_ParamLimits

0x6ccc,	// (0x00041d69) list_double_pane

0x6ccc,	// (0x00041d69) list_double_time_pane_ParamLimits

0x6ccc,	// (0x00041d69) list_double_time_pane

0x6ccc,	// (0x00041d69) list_setting_number_pane_ParamLimits

0x6ccc,	// (0x00041d69) list_setting_number_pane

0x6ccc,	// (0x00041d69) list_setting_pane_ParamLimits

0x6ccc,	// (0x00041d69) list_setting_pane

0x6d05,	// (0x00041da2) list_single_2graphic_pane_ParamLimits

0x6d05,	// (0x00041da2) list_single_2graphic_pane

0x6d05,	// (0x00041da2) list_single_graphic_heading_pane_ParamLimits

0x6d05,	// (0x00041da2) list_single_graphic_heading_pane

0x6d05,	// (0x00041da2) list_single_graphic_pane_ParamLimits

0x6d05,	// (0x00041da2) list_single_graphic_pane

0x6d05,	// (0x00041da2) list_single_heading_pane_ParamLimits

0x6d05,	// (0x00041da2) list_single_heading_pane

0x6d43,	// (0x00041de0) list_single_large_graphic_pane_ParamLimits

0x6d43,	// (0x00041de0) list_single_large_graphic_pane

0x6d05,	// (0x00041da2) list_single_number_heading_pane_ParamLimits

0x6d05,	// (0x00041da2) list_single_number_heading_pane

0x6d05,	// (0x00041da2) list_single_number_pane_ParamLimits

0x6d05,	// (0x00041da2) list_single_number_pane

0x6d05,	// (0x00041da2) list_single_pane_ParamLimits

0x6d05,	// (0x00041da2) list_single_pane

0x7d02,	// (0x00042d9f) list_highlight_pane_cp1

0x5d28,	// (0x00040dc5) list_single_pane_g1_ParamLimits

0x5d28,	// (0x00040dc5) list_single_pane_g1

0x5d34,	// (0x00040dd1) list_single_pane_g2_ParamLimits

0x5d34,	// (0x00040dd1) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0004a675) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0004a675) list_single_pane_g

0x52eb,	// (0x00040388) list_single_pane_t1_ParamLimits

0x52eb,	// (0x00040388) list_single_pane_t1

0x5d28,	// (0x00040dc5) list_single_number_pane_g1_ParamLimits

0x5d28,	// (0x00040dc5) list_single_number_pane_g1

0x5d34,	// (0x00040dd1) list_single_number_pane_g2_ParamLimits

0x5d34,	// (0x00040dd1) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0004a675) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0004a675) list_single_number_pane_g

0x5293,	// (0x00040330) list_single_number_pane_t1_ParamLimits

0x5293,	// (0x00040330) list_single_number_pane_t1

0x52a9,	// (0x00040346) list_single_number_pane_t2_ParamLimits

0x52a9,	// (0x00040346) list_single_number_pane_t2

0x0001,

0xf96a,	// (0x0004aa07) list_single_number_pane_t_ParamLimits

0xf96a,	// (0x0004aa07) list_single_number_pane_t

0x49d8,	// (0x0003fa75) list_single_graphic_pane_g1_ParamLimits

0x49d8,	// (0x0003fa75) list_single_graphic_pane_g1

0x5d28,	// (0x00040dc5) list_single_graphic_pane_g2_ParamLimits

0x5d28,	// (0x00040dc5) list_single_graphic_pane_g2

0x5d34,	// (0x00040dd1) list_single_graphic_pane_g3_ParamLimits

0x5d34,	// (0x00040dd1) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0004a664) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0004a664) list_single_graphic_pane_g

0x49e4,	// (0x0003fa81) list_single_graphic_pane_t1_ParamLimits

0x49e4,	// (0x0003fa81) list_single_graphic_pane_t1

0x49fa,	// (0x0003fa97) list_single_heading_pane_g1_ParamLimits

0x49fa,	// (0x0003fa97) list_single_heading_pane_g1

0x5d34,	// (0x00040dd1) list_single_heading_pane_g2_ParamLimits

0x5d34,	// (0x00040dd1) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0004a66b) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0004a66b) list_single_heading_pane_g

0x4a0d,	// (0x0003faaa) list_single_heading_pane_t1_ParamLimits

0x4a0d,	// (0x0003faaa) list_single_heading_pane_t1

0x5d40,	// (0x00040ddd) list_single_heading_pane_t2_ParamLimits

0x5d40,	// (0x00040ddd) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0004a670) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0004a670) list_single_heading_pane_t

0x5d28,	// (0x00040dc5) list_single_number_heading_pane_g1_ParamLimits

0x5d28,	// (0x00040dc5) list_single_number_heading_pane_g1

0x5d34,	// (0x00040dd1) list_single_number_heading_pane_g2_ParamLimits

0x5d34,	// (0x00040dd1) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0004a675) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0004a675) list_single_number_heading_pane_g

0x4a23,	// (0x0003fac0) list_single_number_heading_pane_t1_ParamLimits

0x4a23,	// (0x0003fac0) list_single_number_heading_pane_t1

0x4a39,	// (0x0003fad6) list_single_number_heading_pane_t2_ParamLimits

0x4a39,	// (0x0003fad6) list_single_number_heading_pane_t2

0x4a4b,	// (0x0003fae8) list_single_number_heading_pane_t3_ParamLimits

0x4a4b,	// (0x0003fae8) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0004a67a) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0004a67a) list_single_number_heading_pane_t

0x4a5d,	// (0x0003fafa) list_single_graphic_heading_pane_g1_ParamLimits

0x4a5d,	// (0x0003fafa) list_single_graphic_heading_pane_g1

0x5d52,	// (0x00040def) list_single_graphic_heading_pane_g4_ParamLimits

0x5d52,	// (0x00040def) list_single_graphic_heading_pane_g4

0x5d34,	// (0x00040dd1) list_single_graphic_heading_pane_g5_ParamLimits

0x5d34,	// (0x00040dd1) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0004a681) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004a681) list_single_graphic_heading_pane_g

0x4a23,	// (0x0003fac0) list_single_graphic_heading_pane_t1_ParamLimits

0x4a23,	// (0x0003fac0) list_single_graphic_heading_pane_t1

0x4a75,	// (0x0003fb12) list_single_graphic_heading_pane_t2_ParamLimits

0x4a75,	// (0x0003fb12) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0004a688) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0004a688) list_single_graphic_heading_pane_t

0x5d63,	// (0x00040e00) list_single_large_graphic_pane_g1_ParamLimits

0x5d63,	// (0x00040e00) list_single_large_graphic_pane_g1

0x5d6f,	// (0x00040e0c) list_single_large_graphic_pane_g2_ParamLimits

0x5d6f,	// (0x00040e0c) list_single_large_graphic_pane_g2

0x5d7b,	// (0x00040e18) list_single_large_graphic_pane_g3_ParamLimits

0x5d7b,	// (0x00040e18) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0004a68d) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0004a68d) list_single_large_graphic_pane_g

0xa121,	// (0x000451be) wait_border_pane_g2_copy1

0x5d87,	// (0x00040e24) list_single_large_graphic_pane_g4_cp2

0x4a8b,	// (0x0003fb28) list_single_large_graphic_pane_t1_ParamLimits

0x4a8b,	// (0x0003fb28) list_single_large_graphic_pane_t1

0x85f5,	// (0x00043692) list_double_pane_g1_ParamLimits

0x85f5,	// (0x00043692) list_double_pane_g1

0x5d8f,	// (0x00040e2c) list_double_pane_g2_ParamLimits

0x5d8f,	// (0x00040e2c) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0004a694) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0004a694) list_double_pane_g

0x4aa1,	// (0x0003fb3e) list_double_pane_t1_ParamLimits

0x4aa1,	// (0x0003fb3e) list_double_pane_t1

0x4ab7,	// (0x0003fb54) list_double_pane_t2_ParamLimits

0x4ab7,	// (0x0003fb54) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0004a699) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0004a699) list_double_pane_t

0x4ac9,	// (0x0003fb66) list_double2_pane_g1_ParamLimits

0x4ac9,	// (0x0003fb66) list_double2_pane_g1

0x4ada,	// (0x0003fb77) list_double2_pane_g2_ParamLimits

0x4ada,	// (0x0003fb77) list_double2_pane_g2

0x0001,

0xf601,	// (0x0004a69e) list_double2_pane_g_ParamLimits

0xf601,	// (0x0004a69e) list_double2_pane_g

0x4ae6,	// (0x0003fb83) list_double2_pane_t1_ParamLimits

0x4ae6,	// (0x0003fb83) list_double2_pane_t1

0x4afc,	// (0x0003fb99) list_double2_pane_t2_ParamLimits

0x4afc,	// (0x0003fb99) list_double2_pane_t2

0x0001,

0xf606,	// (0x0004a6a3) list_double2_pane_t_ParamLimits

0xf606,	// (0x0004a6a3) list_double2_pane_t

0x85f5,	// (0x00043692) list_double_number_pane_g1_ParamLimits

0x85f5,	// (0x00043692) list_double_number_pane_g1

0x5d8f,	// (0x00040e2c) list_double_number_pane_g2_ParamLimits

0x5d8f,	// (0x00040e2c) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0004a694) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0004a694) list_double_number_pane_g

0x4b0e,	// (0x0003fbab) list_double_number_pane_t1_ParamLimits

0x4b0e,	// (0x0003fbab) list_double_number_pane_t1

0x4b20,	// (0x0003fbbd) list_double_number_pane_t2_ParamLimits

0x4b20,	// (0x0003fbbd) list_double_number_pane_t2

0x4b36,	// (0x0003fbd3) list_double_number_pane_t3_ParamLimits

0x4b36,	// (0x0003fbd3) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0004a6a8) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0004a6a8) list_double_number_pane_t

0x4b48,	// (0x0003fbe5) list_double_graphic_pane_g1_ParamLimits

0x4b48,	// (0x0003fbe5) list_double_graphic_pane_g1

0x4b54,	// (0x0003fbf1) list_double_graphic_pane_g2_ParamLimits

0x4b54,	// (0x0003fbf1) list_double_graphic_pane_g2

0x4b63,	// (0x0003fc00) list_double_graphic_pane_g3_ParamLimits

0x4b63,	// (0x0003fc00) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0004a6af) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0004a6af) list_double_graphic_pane_g

0x4b7b,	// (0x0003fc18) list_double_graphic_pane_t1_ParamLimits

0x4b7b,	// (0x0003fc18) list_double_graphic_pane_t1

0x4b91,	// (0x0003fc2e) list_double_graphic_pane_t2_ParamLimits

0x4b91,	// (0x0003fc2e) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0004a6b8) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0004a6b8) list_double_graphic_pane_t

0x4ba3,	// (0x0003fc40) list_double2_graphic_pane_g1_ParamLimits

0x4ba3,	// (0x0003fc40) list_double2_graphic_pane_g1

0x9843,	// (0x000448e0) list_double2_graphic_pane_g2_ParamLimits

0x9843,	// (0x000448e0) list_double2_graphic_pane_g2

0x5d9b,	// (0x00040e38) list_double2_graphic_pane_g3_ParamLimits

0x5d9b,	// (0x00040e38) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0004a6bd) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0004a6bd) list_double2_graphic_pane_g

0x4baf,	// (0x0003fc4c) list_double2_graphic_pane_t1_ParamLimits

0x4baf,	// (0x0003fc4c) list_double2_graphic_pane_t1

0x4bc5,	// (0x0003fc62) list_double2_graphic_pane_t2_ParamLimits

0x4bc5,	// (0x0003fc62) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0004a6c4) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0004a6c4) list_double2_graphic_pane_t

0x4bd7,	// (0x0003fc74) list_double_large_graphic_pane_g1_ParamLimits

0x4bd7,	// (0x0003fc74) list_double_large_graphic_pane_g1

0x4c00,	// (0x0003fc9d) list_double_large_graphic_pane_g2_ParamLimits

0x4c00,	// (0x0003fc9d) list_double_large_graphic_pane_g2

0x5d8f,	// (0x00040e2c) list_double_large_graphic_pane_g3_ParamLimits

0x5d8f,	// (0x00040e2c) list_double_large_graphic_pane_g3

0x4c16,	// (0x0003fcb3) list_double_large_graphic_pane_g4_ParamLimits

0x4c16,	// (0x0003fcb3) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0004a6c9) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0004a6c9) list_double_large_graphic_pane_g

0x4c27,	// (0x0003fcc4) list_double_large_graphic_pane_t1_ParamLimits

0x4c27,	// (0x0003fcc4) list_double_large_graphic_pane_t1

0x4c40,	// (0x0003fcdd) list_double_large_graphic_pane_t2_ParamLimits

0x4c40,	// (0x0003fcdd) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0004a6d4) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0004a6d4) list_double_large_graphic_pane_t

0x5dbc,	// (0x00040e59) list_double2_large_graphic_pane_g1_ParamLimits

0x5dbc,	// (0x00040e59) list_double2_large_graphic_pane_g1

0x4c52,	// (0x0003fcef) list_double2_large_graphic_pane_g2_ParamLimits

0x4c52,	// (0x0003fcef) list_double2_large_graphic_pane_g2

0x5d9b,	// (0x00040e38) list_double2_large_graphic_pane_g3_ParamLimits

0x5d9b,	// (0x00040e38) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0004a6d9) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0004a6d9) list_double2_large_graphic_pane_g

0x4c63,	// (0x0003fd00) list_double2_large_graphic_pane_t1_ParamLimits

0x4c63,	// (0x0003fd00) list_double2_large_graphic_pane_t1

0x4c79,	// (0x0003fd16) list_double2_large_graphic_pane_t2_ParamLimits

0x4c79,	// (0x0003fd16) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0004a6e0) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0004a6e0) list_double2_large_graphic_pane_t

0x4c8b,	// (0x0003fd28) list_double_heading_pane_g1_ParamLimits

0x4c8b,	// (0x0003fd28) list_double_heading_pane_g1

0x5dc8,	// (0x00040e65) list_double_heading_pane_g2_ParamLimits

0x5dc8,	// (0x00040e65) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0004a6e5) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0004a6e5) list_double_heading_pane_g

0x4c9c,	// (0x0003fd39) list_double_heading_pane_t1_ParamLimits

0x4c9c,	// (0x0003fd39) list_double_heading_pane_t1

0x4afc,	// (0x0003fb99) list_double_heading_pane_t2_ParamLimits

0x4afc,	// (0x0003fb99) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0004a6ea) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0004a6ea) list_double_heading_pane_t

0x4cb2,	// (0x0003fd4f) list_double_graphic_heading_pane_g1_ParamLimits

0x4cb2,	// (0x0003fd4f) list_double_graphic_heading_pane_g1

0x4c8b,	// (0x0003fd28) list_double_graphic_heading_pane_g2_ParamLimits

0x4c8b,	// (0x0003fd28) list_double_graphic_heading_pane_g2

0x5dc8,	// (0x00040e65) list_double_graphic_heading_pane_g3_ParamLimits

0x5dc8,	// (0x00040e65) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0004a6ef) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0004a6ef) list_double_graphic_heading_pane_g

0x4cbe,	// (0x0003fd5b) list_double_graphic_heading_pane_t1_ParamLimits

0x4cbe,	// (0x0003fd5b) list_double_graphic_heading_pane_t1

0x4bc5,	// (0x0003fc62) list_double_graphic_heading_pane_t2_ParamLimits

0x4bc5,	// (0x0003fc62) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0004a6f6) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0004a6f6) list_double_graphic_heading_pane_t

0x4cd4,	// (0x0003fd71) list_double_time_pane_g1_ParamLimits

0x4cd4,	// (0x0003fd71) list_double_time_pane_g1

0x4ce5,	// (0x0003fd82) list_double_time_pane_g2_ParamLimits

0x4ce5,	// (0x0003fd82) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0004a6fb) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0004a6fb) list_double_time_pane_g

0x4cf1,	// (0x0003fd8e) list_double_time_pane_t1_ParamLimits

0x4cf1,	// (0x0003fd8e) list_double_time_pane_t1

0x4d07,	// (0x0003fda4) list_double_time_pane_t2_ParamLimits

0x4d07,	// (0x0003fda4) list_double_time_pane_t2

0x4d19,	// (0x0003fdb6) list_double_time_pane_t3_ParamLimits

0x4d19,	// (0x0003fdb6) list_double_time_pane_t3

0x4d2b,	// (0x0003fdc8) list_double_time_pane_t4_ParamLimits

0x4d2b,	// (0x0003fdc8) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0004a700) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0004a700) list_double_time_pane_t

0x4d3d,	// (0x0003fdda) list_setting_pane_g1_ParamLimits

0x4d3d,	// (0x0003fdda) list_setting_pane_g1

0x4ada,	// (0x0003fb77) list_setting_pane_g2_ParamLimits

0x4ada,	// (0x0003fb77) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0004a709) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0004a709) list_setting_pane_g

0x4d49,	// (0x0003fde6) list_setting_pane_t1_ParamLimits

0x4d49,	// (0x0003fde6) list_setting_pane_t1

0x4d63,	// (0x0003fe00) list_setting_pane_t2_ParamLimits

0x4d63,	// (0x0003fe00) list_setting_pane_t2

0x0002,

0xf671,	// (0x0004a70e) list_setting_pane_t_ParamLimits

0xf671,	// (0x0004a70e) list_setting_pane_t

0x4da2,	// (0x0003fe3f) set_value_pane_cp_ParamLimits

0x4da2,	// (0x0003fe3f) set_value_pane_cp

0x4dae,	// (0x0003fe4b) list_setting_number_pane_g1_ParamLimits

0x4dae,	// (0x0003fe4b) list_setting_number_pane_g1

0x4dba,	// (0x0003fe57) list_setting_number_pane_g2_ParamLimits

0x4dba,	// (0x0003fe57) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0004a715) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0004a715) list_setting_number_pane_g

0x4dc6,	// (0x0003fe63) list_setting_number_pane_t1_ParamLimits

0x4dc6,	// (0x0003fe63) list_setting_number_pane_t1

0x4ddf,	// (0x0003fe7c) list_setting_number_pane_t2_ParamLimits

0x4ddf,	// (0x0003fe7c) list_setting_number_pane_t2

0x4df9,	// (0x0003fe96) list_setting_number_pane_t3_ParamLimits

0x4df9,	// (0x0003fe96) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0004a71a) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0004a71a) list_setting_number_pane_t

0x4da2,	// (0x0003fe3f) set_value_pane_ParamLimits

0x4da2,	// (0x0003fe3f) set_value_pane

0x8601,	// (0x0004369e) bg_set_opt_pane_ParamLimits

0x8601,	// (0x0004369e) bg_set_opt_pane

0x4e3c,	// (0x0003fed9) set_value_pane_t1

0x8622,	// (0x000436bf) slider_set_pane_cp3

0x862b,	// (0x000436c8) volume_small_pane_cp

0x8634,	// (0x000436d1) list_form_gen_pane

0x863d,	// (0x000436da) scroll_pane_cp8

0x4e52,	// (0x0003feef) form_field_data_pane_ParamLimits

0x4e52,	// (0x0003feef) form_field_data_pane

0x4e76,	// (0x0003ff13) form_field_data_wide_pane_ParamLimits

0x4e76,	// (0x0003ff13) form_field_data_wide_pane

0x4e99,	// (0x0003ff36) form_field_popup_pane_ParamLimits

0x4e99,	// (0x0003ff36) form_field_popup_pane

0x4eb9,	// (0x0003ff56) form_field_popup_wide_pane_ParamLimits

0x4eb9,	// (0x0003ff56) form_field_popup_wide_pane

0x4ed8,	// (0x0003ff75) form_field_slider_pane_ParamLimits

0x4ed8,	// (0x0003ff75) form_field_slider_pane

0x4eeb,	// (0x0003ff88) form_field_slider_wide_pane_ParamLimits

0x4eeb,	// (0x0003ff88) form_field_slider_wide_pane

0x864e,	// (0x000436eb) data_form_pane

0x4f08,	// (0x0003ffa5) form_field_data_pane_t1

0x865a,	// (0x000436f7) input_focus_pane

0x4f20,	// (0x0003ffbd) data_form_wide_pane

0x4f3d,	// (0x0003ffda) form_field_data_wide_pane_t1

0x83bf,	// (0x0004345c) input_focus_pane_cp6

0x4f5f,	// (0x0003fffc) form_field_popup_pane_t1

0x865a,	// (0x000436f7) input_focus_pane_cp7

0x867c,	// (0x00043719) list_form_pane

0x4f7f,	// (0x0004001c) form_field_popup_wide_pane_t1

0x865a,	// (0x000436f7) input_focus_pane_cp8

0x8688,	// (0x00043725) list_form_wide_pane

0x4f9c,	// (0x00040039) form_field_slider_pane_t1_ParamLimits

0x4f9c,	// (0x00040039) form_field_slider_pane_t1

0x4fb2,	// (0x0004004f) form_field_slider_pane_t2_ParamLimits

0x4fb2,	// (0x0004004f) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0004a72a) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0004a72a) form_field_slider_pane_t

0x805d,	// (0x000430fa) input_focus_pane_cp9_ParamLimits

0x805d,	// (0x000430fa) input_focus_pane_cp9

0x4fc7,	// (0x00040064) slider_cont_pane_ParamLimits

0x4fc7,	// (0x00040064) slider_cont_pane

0x8697,	// (0x00043734) form_field_slider_wide_pane_t1_ParamLimits

0x8697,	// (0x00043734) form_field_slider_wide_pane_t1

0x4fdb,	// (0x00040078) form_field_slider_wide_pane_t2_ParamLimits

0x4fdb,	// (0x00040078) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0004a72f) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0004a72f) form_field_slider_wide_pane_t

0x805d,	// (0x000430fa) input_focus_pane_cp10_ParamLimits

0x805d,	// (0x000430fa) input_focus_pane_cp10

0x4fed,	// (0x0004008a) slider_cont_pane_cp1_ParamLimits

0x4fed,	// (0x0004008a) slider_cont_pane_cp1

0x5001,	// (0x0004009e) slider_form_pane_cp

0x86a9,	// (0x00043746) input_focus_pane_g1

0x86b1,	// (0x0004374e) input_focus_pane_g2

0x86b9,	// (0x00043756) input_focus_pane_g3

0x86c1,	// (0x0004375e) input_focus_pane_g4

0x86c9,	// (0x00043766) input_focus_pane_g5

0x86d1,	// (0x0004376e) input_focus_pane_g6

0x86d9,	// (0x00043776) input_focus_pane_g7

0x86e1,	// (0x0004377e) input_focus_pane_g8

0x86e9,	// (0x00043786) input_focus_pane_g9

0x7cf8,	// (0x00042d95) input_focus_pane_g10

0x0009,

0xf697,	// (0x0004a734) input_focus_pane_g

0xa12a,	// (0x000451c7) wait_border_pane_g3_copy1

0x5009,	// (0x000400a6) data_form_pane_t1

0x7cf8,	// (0x00042d95) wait_anim_pane_g1_copy1

0x52bb,	// (0x00040358) data_form_wide_pane_t1

0x5024,	// (0x000400c1) list_form_graphic_pane_cp_ParamLimits

0x5024,	// (0x000400c1) list_form_graphic_pane_cp

0xb060,	// (0x000460fd) slider_form_pane_g1

0xb069,	// (0x00046106) slider_form_pane_g2

0x0006,

0xf99a,	// (0x0004aa37) slider_form_pane_g

0x503d,	// (0x000400da) list_form_graphic_pane_ParamLimits

0x503d,	// (0x000400da) list_form_graphic_pane

0x5059,	// (0x000400f6) list_form_graphic_pane_g1

0x5061,	// (0x000400fe) list_form_graphic_pane_t1_ParamLimits

0x5061,	// (0x000400fe) list_form_graphic_pane_t1

0x7de2,	// (0x00042e7f) list_highlight_pane_cp5_ParamLimits

0x7de2,	// (0x00042e7f) list_highlight_pane_cp5

0x5076,	// (0x00040113) find_pane_g1

0x86f1,	// (0x0004378e) input_find_pane

0x507f,	// (0x0004011c) input_find_pane_g1_ParamLimits

0x507f,	// (0x0004011c) input_find_pane_g1

0x508b,	// (0x00040128) input_find_pane_t1_ParamLimits

0x508b,	// (0x00040128) input_find_pane_t1

0x50a0,	// (0x0004013d) input_find_pane_t2_ParamLimits

0x50a0,	// (0x0004013d) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0004a749) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0004a749) input_find_pane_t

0x86fa,	// (0x00043797) input_focus_pane_cp5_ParamLimits

0x86fa,	// (0x00043797) input_focus_pane_cp5

0x8714,	// (0x000437b1) bg_popup_window_pane_cp2_ParamLimits

0x8714,	// (0x000437b1) bg_popup_window_pane_cp2

0x8721,	// (0x000437be) listscroll_menu_pane_ParamLimits

0x8721,	// (0x000437be) listscroll_menu_pane

0x872d,	// (0x000437ca) popup_submenu_window_ParamLimits

0x872d,	// (0x000437ca) popup_submenu_window

0x8759,	// (0x000437f6) find_popup_pane_g1

0x8761,	// (0x000437fe) input_popup_find_pane_cp

0x86fa,	// (0x00043797) input_focus_pane_cp4_ParamLimits

0x86fa,	// (0x00043797) input_focus_pane_cp4

0x8777,	// (0x00043814) input_popup_find_pane_t1_ParamLimits

0x8777,	// (0x00043814) input_popup_find_pane_t1

0x7d02,	// (0x00042d9f) bg_popup_sub_pane_cp

0x87a5,	// (0x00043842) listscroll_popup_sub_pane

0x87ad,	// (0x0004384a) list_submenu_pane_ParamLimits

0x87ad,	// (0x0004384a) list_submenu_pane

0x87be,	// (0x0004385b) scroll_pane_cp4

0x87c6,	// (0x00043863) list_single_popup_submenu_pane_ParamLimits

0x87c6,	// (0x00043863) list_single_popup_submenu_pane

0x87da,	// (0x00043877) list_single_popup_submenu_pane_g1

0x87e2,	// (0x0004387f) list_single_popup_submenu_pane_t1_ParamLimits

0x87e2,	// (0x0004387f) list_single_popup_submenu_pane_t1

0x7de2,	// (0x00042e7f) bg_active_tab_pane_cp1_ParamLimits

0x7de2,	// (0x00042e7f) bg_active_tab_pane_cp1

0x87f7,	// (0x00043894) tabs_2_active_pane_g1

0x87ff,	// (0x0004389c) tabs_2_active_pane_t1

0x7de2,	// (0x00042e7f) bg_passive_tab_pane_cp1_ParamLimits

0x7de2,	// (0x00042e7f) bg_passive_tab_pane_cp1

0x87f7,	// (0x00043894) tabs_2_passive_pane_g1

0x87ff,	// (0x0004389c) tabs_2_passive_pane_t1

0x8811,	// (0x000438ae) bg_active_tab_pane_cp4

0x881f,	// (0x000438bc) tabs_2_long_active_pane_t1

0x8832,	// (0x000438cf) bg_passive_tab_pane_cp4

0x6081,	// (0x0004111e) list_single_midp_graphic_pane_g4_ParamLimits

0x8811,	// (0x000438ae) bg_active_tab_pane_cp5

0x883e,	// (0x000438db) tabs_3_long_active_pane_t1

0x8832,	// (0x000438cf) bg_passive_tab_pane_cp5

0x6081,	// (0x0004111e) list_single_midp_graphic_pane_g4

0x7de2,	// (0x00042e7f) bg_popup_window_pane_cp13_ParamLimits

0x7de2,	// (0x00042e7f) bg_popup_window_pane_cp13

0x8859,	// (0x000438f6) listscroll_popup_fast_pane_ParamLimits

0x8859,	// (0x000438f6) listscroll_popup_fast_pane

0x8868,	// (0x00043905) grid_popup_fast_pane_ParamLimits

0x8868,	// (0x00043905) grid_popup_fast_pane

0x887a,	// (0x00043917) scroll_pane_cp9_ParamLimits

0x887a,	// (0x00043917) scroll_pane_cp9

0xc963,	// (0x00047a00) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc963,	// (0x00047a00) list_single_graphic_hl_pane_t1_cp2

0x889e,	// (0x0004393b) input_focus_pane_cp20_ParamLimits

0x889e,	// (0x0004393b) input_focus_pane_cp20

0x88ac,	// (0x00043949) query_popup_data_pane_t1_ParamLimits

0x88ac,	// (0x00043949) query_popup_data_pane_t1

0x88bf,	// (0x0004395c) query_popup_data_pane_t2_ParamLimits

0x88bf,	// (0x0004395c) query_popup_data_pane_t2

0x8905,	// (0x000439a2) query_popup_data_pane_t3_ParamLimits

0x8905,	// (0x000439a2) query_popup_data_pane_t3

0x8946,	// (0x000439e3) query_popup_data_pane_t4_ParamLimits

0x8946,	// (0x000439e3) query_popup_data_pane_t4

0x8982,	// (0x00043a1f) query_popup_data_pane_t5_ParamLimits

0x8982,	// (0x00043a1f) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0004a74e) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0004a74e) query_popup_data_pane_t

0x86a9,	// (0x00043746) bg_set_opt_pane_g1

0x86b1,	// (0x0004374e) bg_set_opt_pane_g2

0x86b9,	// (0x00043756) bg_set_opt_pane_g3

0x86c1,	// (0x0004375e) bg_set_opt_pane_g4

0x86c9,	// (0x00043766) bg_set_opt_pane_g5

0x86d1,	// (0x0004376e) bg_set_opt_pane_g6

0x86d9,	// (0x00043776) bg_set_opt_pane_g7

0x86e1,	// (0x0004377e) bg_set_opt_pane_g8

0x86e9,	// (0x00043786) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0004a759) bg_set_opt_pane_g

0x608d,	// (0x0004112a) control_top_pane_stacon_ParamLimits

0x608d,	// (0x0004112a) control_top_pane_stacon

0x60e0,	// (0x0004117d) signal_pane_stacon_ParamLimits

0x60e0,	// (0x0004117d) signal_pane_stacon

0x8f70,	// (0x0004400d) stacon_top_pane_g1_ParamLimits

0x8f70,	// (0x0004400d) stacon_top_pane_g1

0x6105,	// (0x000411a2) title_pane_stacon_ParamLimits

0x6105,	// (0x000411a2) title_pane_stacon

0x612f,	// (0x000411cc) uni_indicator_pane_stacon_ParamLimits

0x612f,	// (0x000411cc) uni_indicator_pane_stacon

0x6144,	// (0x000411e1) battery_pane_stacon_ParamLimits

0x6144,	// (0x000411e1) battery_pane_stacon

0x6188,	// (0x00041225) control_bottom_pane_stacon_ParamLimits

0x6188,	// (0x00041225) control_bottom_pane_stacon

0x61ab,	// (0x00041248) navi_pane_stacon_ParamLimits

0x61ab,	// (0x00041248) navi_pane_stacon

0x8f92,	// (0x0004402f) stacon_bottom_pane_g1_ParamLimits

0x8f92,	// (0x0004402f) stacon_bottom_pane_g1

0x5dd4,	// (0x00040e71) aid_levels_signal_lsc_ParamLimits

0x5dd4,	// (0x00040e71) aid_levels_signal_lsc

0x5dea,	// (0x00040e87) signal_pane_stacon_g1_ParamLimits

0x5dea,	// (0x00040e87) signal_pane_stacon_g1

0x5dfe,	// (0x00040e9b) signal_pane_stacon_g2_ParamLimits

0x5dfe,	// (0x00040e9b) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0004a76c) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0004a76c) signal_pane_stacon_g

0x5e33,	// (0x00040ed0) title_pane_stacon_t1_ParamLimits

0x5e33,	// (0x00040ed0) title_pane_stacon_t1

0x89c6,	// (0x00043a63) uni_indicator_pane_stacon_g1

0x89d0,	// (0x00043a6d) uni_indicator_pane_stacon_g2

0x89da,	// (0x00043a77) uni_indicator_pane_stacon_g3

0x89e4,	// (0x00043a81) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0004a778) uni_indicator_pane_stacon_g

0x5e58,	// (0x00040ef5) control_top_pane_stacon_g1

0x5e60,	// (0x00040efd) control_top_pane_stacon_t1_ParamLimits

0x5e60,	// (0x00040efd) control_top_pane_stacon_t1

0x5e97,	// (0x00040f34) aid_levels_battery_lsc_ParamLimits

0x5e97,	// (0x00040f34) aid_levels_battery_lsc

0x5eae,	// (0x00040f4b) battery_pane_stacon_g1_ParamLimits

0x5eae,	// (0x00040f4b) battery_pane_stacon_g1

0x5ec1,	// (0x00040f5e) battery_pane_stacon_g2_ParamLimits

0x5ec1,	// (0x00040f5e) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0004a781) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0004a781) battery_pane_stacon_g

0x5eff,	// (0x00040f9c) navi_icon_pane_stacon

0x5f13,	// (0x00040fb0) navi_navi_pane_stacon

0x5eff,	// (0x00040f9c) navi_text_pane_stacon

0x5e58,	// (0x00040ef5) control_bottom_pane_stacon_g1

0x5f27,	// (0x00040fc4) control_bottom_pane_stacon_t1_ParamLimits

0x5f27,	// (0x00040fc4) control_bottom_pane_stacon_t1

0x8a08,	// (0x00043aa5) grid_app_pane_ParamLimits

0x8a08,	// (0x00043aa5) grid_app_pane

0x8a2c,	// (0x00043ac9) scroll_pane_cp15_ParamLimits

0x8a2c,	// (0x00043ac9) scroll_pane_cp15

0x8a41,	// (0x00043ade) cell_app_pane_ParamLimits

0x8a41,	// (0x00043ade) cell_app_pane

0x8a65,	// (0x00043b02) cell_app_pane_g1_ParamLimits

0x8a65,	// (0x00043b02) cell_app_pane_g1

0x8a85,	// (0x00043b22) cell_app_pane_g2_ParamLimits

0x8a85,	// (0x00043b22) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0004a786) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0004a786) cell_app_pane_g

0x8a91,	// (0x00043b2e) cell_app_pane_t1_ParamLimits

0x8a91,	// (0x00043b2e) cell_app_pane_t1

0x8aa8,	// (0x00043b45) grid_highlight_pane_ParamLimits

0x8aa8,	// (0x00043b45) grid_highlight_pane

0x86a9,	// (0x00043746) cell_highlight_pane_g1

0x86b1,	// (0x0004374e) cell_highlight_pane_g2

0x86b9,	// (0x00043756) cell_highlight_pane_g3

0x86c1,	// (0x0004375e) cell_highlight_pane_g4

0x86c9,	// (0x00043766) cell_highlight_pane_g5

0x86d1,	// (0x0004376e) cell_highlight_pane_g6

0x86d9,	// (0x00043776) cell_highlight_pane_g7

0x86e1,	// (0x0004377e) cell_highlight_pane_g8

0x86e9,	// (0x00043786) cell_highlight_pane_g9

0x7cf8,	// (0x00042d95) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0004a734) cell_highlight_pane_g

0x8ab9,	// (0x00043b56) bg_scroll_pane

0x5f71,	// (0x0004100e) scroll_handle_pane

0x8b00,	// (0x00043b9d) scroll_bg_pane_g1

0x8b15,	// (0x00043bb2) scroll_bg_pane_g2

0x8b2d,	// (0x00043bca) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0004a78b) scroll_bg_pane_g

0x8b42,	// (0x00043bdf) scroll_handle_focus_pane_ParamLimits

0x8b42,	// (0x00043bdf) scroll_handle_focus_pane

0x8b00,	// (0x00043b9d) scroll_handle_pane_g1

0x8b4f,	// (0x00043bec) scroll_handle_pane_g2

0x8b2d,	// (0x00043bca) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0004a792) scroll_handle_pane_g

0x86fa,	// (0x00043797) bg_popup_sub_pane_cp21_ParamLimits

0x86fa,	// (0x00043797) bg_popup_sub_pane_cp21

0x8b63,	// (0x00043c00) popup_fep_japan_predictive_window_t1_ParamLimits

0x8b63,	// (0x00043c00) popup_fep_japan_predictive_window_t1

0x8b7d,	// (0x00043c1a) popup_fep_japan_predictive_window_t2_ParamLimits

0x8b7d,	// (0x00043c1a) popup_fep_japan_predictive_window_t2

0x8bb0,	// (0x00043c4d) popup_fep_japan_predictive_window_t3_ParamLimits

0x8bb0,	// (0x00043c4d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0004a799) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0004a799) popup_fep_japan_predictive_window_t

0x7d02,	// (0x00042d9f) bg_popup_sub_pane_cp23

0x8be7,	// (0x00043c84) listscroll_japin_cand_pane

0x8bef,	// (0x00043c8c) popup_fep_japan_candidate_window_t1

0x8bfd,	// (0x00043c9a) candidate_pane_ParamLimits

0x8bfd,	// (0x00043c9a) candidate_pane

0x8c0f,	// (0x00043cac) scroll_pane_cp30

0x8c17,	// (0x00043cb4) list_single_popup_jap_candidate_pane_ParamLimits

0x8c17,	// (0x00043cb4) list_single_popup_jap_candidate_pane

0x7d02,	// (0x00042d9f) list_highlight_pane_cp30

0x8c2c,	// (0x00043cc9) list_single_popup_jap_candidate_pane_t1

0x8c3b,	// (0x00043cd8) level_1_signal

0x8c4d,	// (0x00043cea) level_2_signal

0x8c60,	// (0x00043cfd) level_3_signal

0x8c73,	// (0x00043d10) level_4_signal

0x8c86,	// (0x00043d23) level_5_signal

0x8c99,	// (0x00043d36) level_6_signal

0x8cac,	// (0x00043d49) level_7_signal

0x8c3b,	// (0x00043cd8) level_1_battery

0x8c4d,	// (0x00043cea) level_2_battery

0x8c60,	// (0x00043cfd) level_3_battery

0x8c73,	// (0x00043d10) level_4_battery

0x8c86,	// (0x00043d23) level_5_battery

0x8c99,	// (0x00043d36) level_6_battery

0x8cac,	// (0x00043d49) level_7_battery

0x8cd7,	// (0x00043d74) list_menu_pane_ParamLimits

0x8cd7,	// (0x00043d74) list_menu_pane

0x8ced,	// (0x00043d8a) scroll_pane_cp25_ParamLimits

0x8ced,	// (0x00043d8a) scroll_pane_cp25

0x8d06,	// (0x00043da3) list_double2_graphic_pane_cp2_ParamLimits

0x8d06,	// (0x00043da3) list_double2_graphic_pane_cp2

0x8d06,	// (0x00043da3) list_double2_large_graphic_pane_cp2_ParamLimits

0x8d06,	// (0x00043da3) list_double2_large_graphic_pane_cp2

0x8d06,	// (0x00043da3) list_double2_pane_cp2_ParamLimits

0x8d06,	// (0x00043da3) list_double2_pane_cp2

0x8d06,	// (0x00043da3) list_double_graphic_pane_cp2_ParamLimits

0x8d06,	// (0x00043da3) list_double_graphic_pane_cp2

0x8d06,	// (0x00043da3) list_double_large_graphic_pane_cp2_ParamLimits

0x8d06,	// (0x00043da3) list_double_large_graphic_pane_cp2

0x8d06,	// (0x00043da3) list_double_number_pane_cp2_ParamLimits

0x8d06,	// (0x00043da3) list_double_number_pane_cp2

0x8d06,	// (0x00043da3) list_double_pane_cp2_ParamLimits

0x8d06,	// (0x00043da3) list_double_pane_cp2

0x8d2a,	// (0x00043dc7) list_single_2graphic_pane_cp2_ParamLimits

0x8d2a,	// (0x00043dc7) list_single_2graphic_pane_cp2

0x8d2a,	// (0x00043dc7) list_single_graphic_heading_pane_cp2_ParamLimits

0x8d2a,	// (0x00043dc7) list_single_graphic_heading_pane_cp2

0x8d2a,	// (0x00043dc7) list_single_graphic_pane_cp2_ParamLimits

0x8d2a,	// (0x00043dc7) list_single_graphic_pane_cp2

0x8d2a,	// (0x00043dc7) list_single_heading_pane_cp2_ParamLimits

0x8d2a,	// (0x00043dc7) list_single_heading_pane_cp2

0x8d43,	// (0x00043de0) list_single_large_graphic_pane_cp2_ParamLimits

0x8d43,	// (0x00043de0) list_single_large_graphic_pane_cp2

0x8d2a,	// (0x00043dc7) list_single_number_heading_pane_cp2_ParamLimits

0x8d2a,	// (0x00043dc7) list_single_number_heading_pane_cp2

0x8d2a,	// (0x00043dc7) list_single_number_pane_cp2_ParamLimits

0x8d2a,	// (0x00043dc7) list_single_number_pane_cp2

0x8d2a,	// (0x00043dc7) list_single_pane_cp2_ParamLimits

0x8d2a,	// (0x00043dc7) list_single_pane_cp2

0x8dbf,	// (0x00043e5c) bg_popup_sub_pane_cp22

0x6023,	// (0x000410c0) popup_side_volume_key_window_g1

0x604d,	// (0x000410ea) popup_side_volume_key_window_t1

0x6069,	// (0x00041106) volume_small_pane_cp1

0x805d,	// (0x000430fa) bg_popup_sub_pane_cp24_ParamLimits

0x805d,	// (0x000430fa) bg_popup_sub_pane_cp24

0x8dd5,	// (0x00043e72) fep_china_uni_candidate_pane_ParamLimits

0x8dd5,	// (0x00043e72) fep_china_uni_candidate_pane

0x8de9,	// (0x00043e86) fep_china_uni_entry_pane

0x8df9,	// (0x00043e96) popup_fep_china_uni_window_g1

0x8e15,	// (0x00043eb2) fep_china_uni_entry_pane_g1

0x8e1d,	// (0x00043eba) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0004a7ca) fep_china_uni_entry_pane_g

0x8e25,	// (0x00043ec2) fep_entry_item_pane

0x8e2f,	// (0x00043ecc) fep_candidate_item_pane

0x8e37,	// (0x00043ed4) fep_china_uni_candidate_pane_g1

0x8e3f,	// (0x00043edc) fep_china_uni_candidate_pane_g2

0x8e47,	// (0x00043ee4) fep_china_uni_candidate_pane_g3

0x8e4f,	// (0x00043eec) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0004a7cf) fep_china_uni_candidate_pane_g

0x7cf8,	// (0x00042d95) fep_entry_item_pane_g1

0x8e57,	// (0x00043ef4) fep_entry_item_pane_t1_ParamLimits

0x8e57,	// (0x00043ef4) fep_entry_item_pane_t1

0x8e6d,	// (0x00043f0a) fep_candidate_item_pane_t1_ParamLimits

0x8e6d,	// (0x00043f0a) fep_candidate_item_pane_t1

0x8e82,	// (0x00043f1f) fep_candidate_item_pane_t2_ParamLimits

0x8e82,	// (0x00043f1f) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0004a7d8) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0004a7d8) fep_candidate_item_pane_t

0x7de2,	// (0x00042e7f) list_highlight_pane_cp31_ParamLimits

0x7de2,	// (0x00042e7f) list_highlight_pane_cp31

0x8e94,	// (0x00043f31) level_1_signal_lsc

0x8e9d,	// (0x00043f3a) level_2_signal_lsc

0x8ea6,	// (0x00043f43) level_3_signal_lsc

0x8eaf,	// (0x00043f4c) level_4_signal_lsc

0x8eb8,	// (0x00043f55) level_5_signal_lsc

0x8ec1,	// (0x00043f5e) level_6_signal_lsc

0x8eca,	// (0x00043f67) level_7_signal_lsc

0x8eca,	// (0x00043f67) level_1_battery_lsc

0x8ed3,	// (0x00043f70) level_2_battery_lsc

0x8edc,	// (0x00043f79) level_3_battery_lsc

0x8ee5,	// (0x00043f82) level_4_battery_lsc

0x8eee,	// (0x00043f8b) level_5_battery_lsc

0x8ef7,	// (0x00043f94) level_6_battery_lsc

0x8e94,	// (0x00043f31) level_7_battery_lsc

0x8f00,	// (0x00043f9d) scroll_handle_focus_pane_g1

0x8f09,	// (0x00043fa6) scroll_handle_focus_pane_g2

0x8f12,	// (0x00043faf) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0004a7dd) scroll_handle_focus_pane_g

0x50b5,	// (0x00040152) list_single_2graphic_pane_g1_ParamLimits

0x50b5,	// (0x00040152) list_single_2graphic_pane_g1

0x5d52,	// (0x00040def) list_single_2graphic_pane_g2_ParamLimits

0x5d52,	// (0x00040def) list_single_2graphic_pane_g2

0x5d34,	// (0x00040dd1) list_single_2graphic_pane_g3_ParamLimits

0x5d34,	// (0x00040dd1) list_single_2graphic_pane_g3

0x50c1,	// (0x0004015e) list_single_2graphic_pane_g4_ParamLimits

0x50c1,	// (0x0004015e) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0004a7e4) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0004a7e4) list_single_2graphic_pane_g

0x50cd,	// (0x0004016a) list_single_2graphic_pane_t1_ParamLimits

0x50cd,	// (0x0004016a) list_single_2graphic_pane_t1

0x6071,	// (0x0004110e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6071,	// (0x0004110e) list_double2_graphic_large_graphic_pane_g1

0x4c52,	// (0x0003fcef) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4c52,	// (0x0003fcef) list_double2_graphic_large_graphic_pane_g2

0x5d9b,	// (0x00040e38) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5d9b,	// (0x00040e38) list_double2_graphic_large_graphic_pane_g3

0x6081,	// (0x0004111e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6081,	// (0x0004111e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0004a7ed) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0004a7ed) list_double2_graphic_large_graphic_pane_g

0x50fb,	// (0x00040198) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x50fb,	// (0x00040198) list_double2_graphic_large_graphic_pane_t1

0x5111,	// (0x000401ae) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5111,	// (0x000401ae) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0004a7f6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0004a7f6) list_double2_graphic_large_graphic_pane_t

0x905a,	// (0x000440f7) popup_fast_swap_window_ParamLimits

0x905a,	// (0x000440f7) popup_fast_swap_window

0x9076,	// (0x00044113) popup_side_volume_key_window

0x9092,	// (0x0004412f) stacon_top_pane

0x909c,	// (0x00044139) status_pane_ParamLimits

0x909c,	// (0x00044139) status_pane

0x9092,	// (0x0004412f) status_small_pane

0x7d02,	// (0x00042d9f) control_pane

0x7d02,	// (0x00042d9f) stacon_bottom_pane

0x863d,	// (0x000436da) scroll_pane_cp121

0x8634,	// (0x000436d1) set_content_pane

0x8f1b,	// (0x00043fb8) bg_active_tab_pane_g1_cp1

0x8f24,	// (0x00043fc1) bg_active_tab_pane_g2_cp1

0x8f2d,	// (0x00043fca) bg_active_tab_pane_g3_cp1

0x8f1b,	// (0x00043fb8) bg_passive_tab_pane_g1_cp1

0x8f24,	// (0x00043fc1) bg_passive_tab_pane_g2_cp1

0x8f2d,	// (0x00043fca) bg_passive_tab_pane_g3_cp1

0x8f36,	// (0x00043fd3) bg_active_tab_pane_g1_cp2

0x8f24,	// (0x00043fc1) bg_active_tab_pane_g2_cp2

0x8f3f,	// (0x00043fdc) bg_active_tab_pane_g3_cp2

0x8f36,	// (0x00043fd3) bg_passive_tab_pane_g1_cp2

0x8f24,	// (0x00043fc1) bg_passive_tab_pane_g2_cp2

0x8f3f,	// (0x00043fdc) bg_passive_tab_pane_g3_cp2

0x8f48,	// (0x00043fe5) bg_active_tab_pane_g1_cp3

0x8f24,	// (0x00043fc1) bg_active_tab_pane_g2_cp3

0x8f51,	// (0x00043fee) bg_active_tab_pane_g3_cp3

0x8f48,	// (0x00043fe5) bg_passive_tab_pane_g1_cp3

0x8f24,	// (0x00043fc1) bg_passive_tab_pane_g2_cp3

0x8f51,	// (0x00043fee) bg_passive_tab_pane_g3_cp3

0x8f5a,	// (0x00043ff7) bg_active_tab_pane_g1_cp4

0x8f24,	// (0x00043fc1) bg_active_tab_pane_g2_cp4

0x8f65,	// (0x00044002) bg_active_tab_pane_g3_cp4

0x8f5a,	// (0x00043ff7) bg_passive_tab_pane_g1_cp4

0x8f24,	// (0x00043fc1) bg_passive_tab_pane_g2_cp4

0x8f65,	// (0x00044002) bg_passive_tab_pane_g3_cp4

0x8fae,	// (0x0004404b) bg_active_tab_pane_g1_cp5

0x8f24,	// (0x00043fc1) bg_active_tab_pane_g2_cp5

0x8fb7,	// (0x00044054) bg_active_tab_pane_g3_cp5

0x8fae,	// (0x0004404b) bg_passive_tab_pane_g1_cp5

0x8f24,	// (0x00043fc1) bg_passive_tab_pane_g2_cp5

0x8fb7,	// (0x00044054) bg_passive_tab_pane_g3_cp5

0x8fc0,	// (0x0004405d) list_set_graphic_pane_ParamLimits

0x8fc0,	// (0x0004405d) list_set_graphic_pane

0x7d02,	// (0x00042d9f) bg_set_opt_pane_cp4

0x8fdd,	// (0x0004407a) list_set_graphic_pane_g1_ParamLimits

0x8fdd,	// (0x0004407a) list_set_graphic_pane_g1

0x8fe9,	// (0x00044086) list_set_graphic_pane_g2_ParamLimits

0x8fe9,	// (0x00044086) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0004a7fb) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0004a7fb) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0004ab6e) volume_small_pane_cp_g

0x900d,	// (0x000440aa) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x900d,	// (0x000440aa) list_double2_large_graphic_pane_g1_cp2

0x9019,	// (0x000440b6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9019,	// (0x000440b6) list_double2_large_graphic_pane_g2_cp2

0x902a,	// (0x000440c7) list_double2_large_graphic_pane_g3_cp2

0x9032,	// (0x000440cf) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9032,	// (0x000440cf) list_double2_large_graphic_pane_t1_cp2

0x9048,	// (0x000440e5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9048,	// (0x000440e5) list_double2_large_graphic_pane_t2_cp2

0xabfd,	// (0x00045c9a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xabfd,	// (0x00045c9a) list_double_large_graphic_pane_g1_cp2

0xac0e,	// (0x00045cab) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xac0e,	// (0x00045cab) list_double_large_graphic_pane_g2_cp2

0x91b8,	// (0x00044255) list_double_large_graphic_pane_g3_cp2

0xac1f,	// (0x00045cbc) list_double_large_graphic_pane_g4_cp

0xac27,	// (0x00045cc4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xac27,	// (0x00045cc4) list_double_large_graphic_pane_t1_cp2

0xac3e,	// (0x00045cdb) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac3e,	// (0x00045cdb) list_double_large_graphic_pane_t2_cp2

0x90aa,	// (0x00044147) list_double2_graphic_pane_g1_cp2_ParamLimits

0x90aa,	// (0x00044147) list_double2_graphic_pane_g1_cp2

0x90b8,	// (0x00044155) list_double2_graphic_pane_g2_cp2_ParamLimits

0x90b8,	// (0x00044155) list_double2_graphic_pane_g2_cp2

0x90c9,	// (0x00044166) list_double2_graphic_pane_g3_cp2

0x90d3,	// (0x00044170) list_double2_graphic_pane_t1_cp2_ParamLimits

0x90d3,	// (0x00044170) list_double2_graphic_pane_t1_cp2

0x90e9,	// (0x00044186) list_double2_graphic_pane_t2_cp2_ParamLimits

0x90e9,	// (0x00044186) list_double2_graphic_pane_t2_cp2

0x90fb,	// (0x00044198) list_single_number_heading_pane_g1_cp2_ParamLimits

0x90fb,	// (0x00044198) list_single_number_heading_pane_g1_cp2

0x9107,	// (0x000441a4) list_single_number_heading_pane_g2_cp2

0x910f,	// (0x000441ac) list_single_number_heading_pane_t1_cp2_ParamLimits

0x910f,	// (0x000441ac) list_single_number_heading_pane_t1_cp2

0x9125,	// (0x000441c2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9125,	// (0x000441c2) list_single_number_heading_pane_t2_cp2

0x9137,	// (0x000441d4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9137,	// (0x000441d4) list_single_number_heading_pane_t3_cp2

0x90fb,	// (0x00044198) list_single_heading_pane_g1_cp2_ParamLimits

0x90fb,	// (0x00044198) list_single_heading_pane_g1_cp2

0x9107,	// (0x000441a4) list_single_heading_pane_g2_cp2

0x910f,	// (0x000441ac) list_single_heading_pane_t1_cp2_ParamLimits

0x910f,	// (0x000441ac) list_single_heading_pane_t1_cp2

0xaa05,	// (0x00045aa2) list_single_heading_pane_t2_cp2_ParamLimits

0xaa05,	// (0x00045aa2) list_single_heading_pane_t2_cp2

0xa94d,	// (0x000459ea) list_double_graphic_pane_g1_cp2_ParamLimits

0xa94d,	// (0x000459ea) list_double_graphic_pane_g1_cp2

0xa959,	// (0x000459f6) list_double_graphic_pane_g2_cp2_ParamLimits

0xa959,	// (0x000459f6) list_double_graphic_pane_g2_cp2

0xa968,	// (0x00045a05) list_double_graphic_pane_g3_cp2

0xa970,	// (0x00045a0d) list_double_graphic_pane_t1_cp2_ParamLimits

0xa970,	// (0x00045a0d) list_double_graphic_pane_t1_cp2

0xa986,	// (0x00045a23) list_double_graphic_pane_t2_cp2_ParamLimits

0xa986,	// (0x00045a23) list_double_graphic_pane_t2_cp2

0x91ac,	// (0x00044249) list_double_number_pane_g1_cp2_ParamLimits

0x91ac,	// (0x00044249) list_double_number_pane_g1_cp2

0x91b8,	// (0x00044255) list_double_number_pane_g2_cp2

0xa911,	// (0x000459ae) list_double_number_pane_t1_cp2_ParamLimits

0xa911,	// (0x000459ae) list_double_number_pane_t1_cp2

0xa925,	// (0x000459c2) list_double_number_pane_t2_cp2_ParamLimits

0xa925,	// (0x000459c2) list_double_number_pane_t2_cp2

0xa93b,	// (0x000459d8) list_double_number_pane_t3_cp2_ParamLimits

0xa93b,	// (0x000459d8) list_double_number_pane_t3_cp2

0xa7fa,	// (0x00045897) list_single_graphic_pane_g1_cp2_ParamLimits

0xa7fa,	// (0x00045897) list_single_graphic_pane_g1_cp2

0x9210,	// (0x000442ad) list_single_graphic_pane_g2_cp2_ParamLimits

0x9210,	// (0x000442ad) list_single_graphic_pane_g2_cp2

0x921c,	// (0x000442b9) list_single_graphic_pane_g3_cp2

0xa7d0,	// (0x0004586d) list_single_graphic_pane_t1_cp2_ParamLimits

0xa7d0,	// (0x0004586d) list_single_graphic_pane_t1_cp2

0x9210,	// (0x000442ad) list_single_number_pane_g1_cp2_ParamLimits

0x9210,	// (0x000442ad) list_single_number_pane_g1_cp2

0x921c,	// (0x000442b9) list_single_number_pane_g2_cp2

0xa7d0,	// (0x0004586d) list_single_number_pane_t1_cp2_ParamLimits

0xa7d0,	// (0x0004586d) list_single_number_pane_t1_cp2

0xa7e6,	// (0x00045883) list_single_number_pane_t2_cp2_ParamLimits

0xa7e6,	// (0x00045883) list_single_number_pane_t2_cp2

0x9019,	// (0x000440b6) list_double2_pane_g1_cp2_ParamLimits

0x9019,	// (0x000440b6) list_double2_pane_g1_cp2

0x902a,	// (0x000440c7) list_double2_pane_g2_cp2

0x9184,	// (0x00044221) list_double2_pane_t1_cp2_ParamLimits

0x9184,	// (0x00044221) list_double2_pane_t1_cp2

0x919a,	// (0x00044237) list_double2_pane_t2_cp2_ParamLimits

0x919a,	// (0x00044237) list_double2_pane_t2_cp2

0x91ac,	// (0x00044249) list_double_pane_g1_cp2_ParamLimits

0x91ac,	// (0x00044249) list_double_pane_g1_cp2

0x91b8,	// (0x00044255) list_double_pane_g2_cp2

0x91c0,	// (0x0004425d) list_double_pane_t1_cp2_ParamLimits

0x91c0,	// (0x0004425d) list_double_pane_t1_cp2

0x91d6,	// (0x00044273) list_double_pane_t2_cp2_ParamLimits

0x91d6,	// (0x00044273) list_double_pane_t2_cp2

0x9200,	// (0x0004429d) list_single_pane_cp2_g3

0x9210,	// (0x000442ad) list_single_pane_g1_cp2_ParamLimits

0x9210,	// (0x000442ad) list_single_pane_g1_cp2

0x921c,	// (0x000442b9) list_single_pane_g2_cp2

0x9224,	// (0x000442c1) list_single_pane_t1_cp2_ParamLimits

0x9224,	// (0x000442c1) list_single_pane_t1_cp2

0x923c,	// (0x000442d9) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x923c,	// (0x000442d9) list_single_large_graphic_pane_g1_cp2

0x9248,	// (0x000442e5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9248,	// (0x000442e5) list_single_large_graphic_pane_g2_cp2

0x9254,	// (0x000442f1) list_single_large_graphic_pane_g3_cp2

0x925c,	// (0x000442f9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x925c,	// (0x000442f9) list_single_large_graphic_pane_g4_cp1

0x9276,	// (0x00044313) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9276,	// (0x00044313) list_single_large_graphic_pane_t1_cp2

0xa79c,	// (0x00045839) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa79c,	// (0x00045839) list_single_graphic_heading_pane_g1_cp2

0xa769,	// (0x00045806) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa769,	// (0x00045806) list_single_graphic_heading_pane_g4_cp2

0x921c,	// (0x000442b9) list_single_graphic_heading_pane_g5_cp2

0xa7a8,	// (0x00045845) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa7a8,	// (0x00045845) list_single_graphic_heading_pane_t1_cp2

0xa7be,	// (0x0004585b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa7be,	// (0x0004585b) list_single_graphic_heading_pane_t2_cp2

0xa75d,	// (0x000457fa) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa75d,	// (0x000457fa) list_single_2graphic_pane_g1_cp2

0xa769,	// (0x00045806) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa769,	// (0x00045806) list_single_2graphic_pane_g2_cp2

0x921c,	// (0x000442b9) list_single_2graphic_pane_g3_cp2

0xa77a,	// (0x00045817) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa77a,	// (0x00045817) list_single_2graphic_pane_g4_cp2

0xa786,	// (0x00045823) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa786,	// (0x00045823) list_single_2graphic_pane_t1_cp2

0x7cf8,	// (0x00042d95) list_highlight_pane_g10_cp1

0xa335,	// (0x000453d2) list_highlight_pane_g1_cp1

0xa33d,	// (0x000453da) list_highlight_pane_g2_cp1

0xa345,	// (0x000453e2) list_highlight_pane_g3_cp1

0xa34d,	// (0x000453ea) list_highlight_pane_g4_cp1

0xa355,	// (0x000453f2) list_highlight_pane_g5_cp1

0xa35d,	// (0x000453fa) list_highlight_pane_g6_cp1

0xa365,	// (0x00045402) list_highlight_pane_g7_cp1

0xa36d,	// (0x0004540a) list_highlight_pane_g8_cp1

0xa375,	// (0x00045412) list_highlight_pane_g9_cp1

0xa255,	// (0x000452f2) form_field_slider_pane_t3

0xa263,	// (0x00045300) form_field_slider_pane_t4

0xa271,	// (0x0004530e) slider_form_pane_ParamLimits

0xa271,	// (0x0004530e) slider_form_pane

0x7d02,	// (0x00042d9f) control_abbreviations

0x7d02,	// (0x00042d9f) control_conventions

0x7d02,	// (0x00042d9f) control_definitions

0x7d02,	// (0x00042d9f) format_table_attribute

0xaa4f,	// (0x00045aec) bg_popup_preview_window_pane_g9

0x7d02,	// (0x00042d9f) format_table_data2

0x7d02,	// (0x00042d9f) format_table_data3

0x7d02,	// (0x00042d9f) format_table_data_example

0x0008,

0x7d02,	// (0x00042d9f) intro_purpose

0xf8fa,	// (0x0004a997) bg_popup_preview_window_pane_g

0x7d02,	// (0x00042d9f) texts_category

0x7d02,	// (0x00042d9f) texts_graphics

0x928c,	// (0x00044329) text_digital

0x929b,	// (0x00044338) text_primary

0x92aa,	// (0x00044347) text_primary_small

0x92b9,	// (0x00044356) text_secondary

0x92c8,	// (0x00044365) text_title

0xb14a,	// (0x000461e7) bg_passive_tab_pane_g1_cp3_srt

0x8f24,	// (0x00043fc1) bg_passive_tab_pane_g2_cp3_srt

0xb153,	// (0x000461f0) bg_passive_tab_pane_g3_cp3_srt

0x7de2,	// (0x00042e7f) bg_active_tab_pane_cp3_srt_ParamLimits

0x7de2,	// (0x00042e7f) bg_active_tab_pane_cp3_srt

0xb15c,	// (0x000461f9) tabs_4_active_pane_srt_g1

0xb164,	// (0x00046201) tabs_4_active_pane_srt_t1_ParamLimits

0xb164,	// (0x00046201) tabs_4_active_pane_srt_t1

0xb14a,	// (0x000461e7) bg_active_tab_pane_g1_cp3_copy1

0x8f24,	// (0x00043fc1) bg_active_tab_pane_g2_cp3_copy1

0xb153,	// (0x000461f0) bg_active_tab_pane_g3_cp3_copy1

0x7de2,	// (0x00042e7f) tabs_2_long_active_pane_srt_ParamLimits

0x7de2,	// (0x00042e7f) tabs_2_long_active_pane_srt

0x7de2,	// (0x00042e7f) tabs_2_long_passive_pane_srt_ParamLimits

0x7de2,	// (0x00042e7f) tabs_2_long_passive_pane_srt

0x8832,	// (0x000438cf) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8832,	// (0x000438cf) bg_passive_tab_pane_cp4_srt

0xae93,	// (0x00045f30) bg_passive_tab_pane_g1_cp4_srt

0x8f24,	// (0x00043fc1) bg_passive_tab_pane_g2_cp4_srt

0xae9c,	// (0x00045f39) bg_passive_tab_pane_g3_cp4_srt

0x8811,	// (0x000438ae) bg_active_tab_pane_cp4_srt_ParamLimits

0x8811,	// (0x000438ae) bg_active_tab_pane_cp4_srt

0xaea5,	// (0x00045f42) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaea5,	// (0x00045f42) tabs_2_long_active_pane_srt_t1

0xae93,	// (0x00045f30) bg_active_tab_pane_g1_cp4_srt

0x8f24,	// (0x00043fc1) bg_active_tab_pane_g2_cp4_srt

0xae9c,	// (0x00045f39) bg_active_tab_pane_g3_cp4_srt

0x805d,	// (0x000430fa) tabs_3_long_active_pane_srt_ParamLimits

0x805d,	// (0x000430fa) tabs_3_long_active_pane_srt

0x805d,	// (0x000430fa) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x805d,	// (0x000430fa) tabs_3_long_passive_pane_cp_srt

0x805d,	// (0x000430fa) tabs_3_long_passive_pane_srt_ParamLimits

0x805d,	// (0x000430fa) tabs_3_long_passive_pane_srt

0x8832,	// (0x000438cf) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8832,	// (0x000438cf) bg_passive_tab_pane_cp5_srt

0x8fae,	// (0x0004404b) bg_passive_tab_pane_g1_cp5_srt

0x8f24,	// (0x00043fc1) bg_passive_tab_pane_g2_cp5_srt

0x8fb7,	// (0x00044054) bg_passive_tab_pane_g3_cp5_srt

0x8811,	// (0x000438ae) bg_active_tab_pane_cp5_srt_ParamLimits

0x8811,	// (0x000438ae) bg_active_tab_pane_cp5_srt

0xae81,	// (0x00045f1e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae81,	// (0x00045f1e) tabs_3_long_active_pane_srt_t1

0x8fae,	// (0x0004404b) bg_active_tab_pane_g1_cp5_srt

0x8f24,	// (0x00043fc1) bg_active_tab_pane_g2_cp5_srt

0x8fb7,	// (0x00044054) bg_active_tab_pane_g3_cp5_srt

0xae73,	// (0x00045f10) navi_text_pane_srt_t1

0xae6b,	// (0x00045f08) navi_icon_pane_srt_g1

0x948f,	// (0x0004452c) midp_editing_number_pane_srt

0x92d7,	// (0x00044374) midp_ticker_pane_srt

0x9497,	// (0x00044534) midp_ticker_pane_srt_g1

0x949f,	// (0x0004453c) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0004a81a) midp_ticker_pane_srt_g

0x94a7,	// (0x00044544) midp_ticker_pane_srt_t1

0xae5c,	// (0x00045ef9) midp_editing_number_pane_t1_copy1

0x8832,	// (0x000438cf) listscroll_midp_pane

0x8832,	// (0x000438cf) midp_form_pane

0x9341,	// (0x000443de) midp_info_popup_window_ParamLimits

0x9341,	// (0x000443de) midp_info_popup_window

0x86fa,	// (0x00043797) bg_popup_sub_pane_cp50_ParamLimits

0x86fa,	// (0x00043797) bg_popup_sub_pane_cp50

0x9f6d,	// (0x0004500a) listscroll_midp_info_pane_ParamLimits

0x9f6d,	// (0x0004500a) listscroll_midp_info_pane

0x9f55,	// (0x00044ff2) listscroll_form_midp_pane_ParamLimits

0x9f55,	// (0x00044ff2) listscroll_form_midp_pane

0x9f61,	// (0x00044ffe) scroll_bar_cp050

0x9f35,	// (0x00044fd2) list_midp_pane

0xbbdc,	// (0x00046c79) signal_pane_g2_cp

0x9e6f,	// (0x00044f0c) listscroll_midp_info_pane_t1_ParamLimits

0x9e6f,	// (0x00044f0c) listscroll_midp_info_pane_t1

0x9e87,	// (0x00044f24) listscroll_midp_info_pane_t2_ParamLimits

0x9e87,	// (0x00044f24) listscroll_midp_info_pane_t2

0x9ec5,	// (0x00044f62) listscroll_midp_info_pane_t3_ParamLimits

0x9ec5,	// (0x00044f62) listscroll_midp_info_pane_t3

0x9eff,	// (0x00044f9c) listscroll_midp_info_pane_t4_ParamLimits

0x9eff,	// (0x00044f9c) listscroll_midp_info_pane_t4

0x0003,

0xf835,	// (0x0004a8d2) listscroll_midp_info_pane_t_ParamLimits

0xf835,	// (0x0004a8d2) listscroll_midp_info_pane_t

0x87be,	// (0x0004385b) scroll_pane_cp21

0x9e0d,	// (0x00044eaa) form_midp_field_choice_group_pane

0x9e16,	// (0x00044eb3) form_midp_field_text_pane

0x9e55,	// (0x00044ef2) form_midp_field_time_pane

0x9e5d,	// (0x00044efa) form_midp_gauge_slider_pane

0x9e66,	// (0x00044f03) form_midp_gauge_wait_pane

0x7d02,	// (0x00042d9f) form_midp_image_pane

0x5268,	// (0x00040305) list_single_midp_pane_ParamLimits

0x5268,	// (0x00040305) list_single_midp_pane

0x9dc5,	// (0x00044e62) form_midp_field_text_pane_t1

0x9b8f,	// (0x00044c2c) input_focus_pane_cp050

0x9dfc,	// (0x00044e99) list_midp_form_text_pane

0x9d94,	// (0x00044e31) form_midp_field_choice_group_pane_t1

0x9da2,	// (0x00044e3f) input_focus_pane_cp051

0x9db6,	// (0x00044e53) list_midp_choice_pane

0x7d02,	// (0x00042d9f) status_idle_pane

0x9d78,	// (0x00044e15) form_midp_field_time_pane_t1

0x7cf8,	// (0x00042d95) wait_anim_pane_g2_copy1

0x9d86,	// (0x00044e23) form_midp_field_time_pane_t2

0x0001,

0x93ef,	// (0x0004448c) aid_navinavi_width_2_pane

0xf830,	// (0x0004a8cd) form_midp_field_time_pane_t

0x7d02,	// (0x00042d9f) input_focus_pane_cp052

0x7d02,	// (0x00042d9f) bg_input_focus_pane_cp040

0x9d38,	// (0x00044dd5) form_midp_gauge_slider_pane_t1

0x9d46,	// (0x00044de3) form_midp_gauge_slider_pane_t2

0x9d54,	// (0x00044df1) form_midp_gauge_slider_pane_t3

0x9d62,	// (0x00044dff) form_midp_gauge_slider_pane_t4

0x0003,

0xf827,	// (0x0004a8c4) form_midp_gauge_slider_pane_t

0x9d70,	// (0x00044e0d) form_midp_slider_pane

0x7de2,	// (0x00042e7f) bg_input_focus_pane_cp041_ParamLimits

0x7de2,	// (0x00042e7f) bg_input_focus_pane_cp041

0x9d05,	// (0x00044da2) form_midp_gauge_wait_pane_t1_ParamLimits

0x9d05,	// (0x00044da2) form_midp_gauge_wait_pane_t1

0x9d17,	// (0x00044db4) form_midp_gauge_wait_pane_t2_ParamLimits

0x9d17,	// (0x00044db4) form_midp_gauge_wait_pane_t2

0x0001,

0xf822,	// (0x0004a8bf) form_midp_gauge_wait_pane_t_ParamLimits

0xf822,	// (0x0004a8bf) form_midp_gauge_wait_pane_t

0x9d29,	// (0x00044dc6) form_midp_wait_pane_ParamLimits

0x9d29,	// (0x00044dc6) form_midp_wait_pane

0x9ccf,	// (0x00044d6c) form_midp_image_pane_g1

0x9cd8,	// (0x00044d75) form_midp_image_pane_t1

0x9ce7,	// (0x00044d84) form_midp_image_pane_t2

0x9cf6,	// (0x00044d93) form_midp_image_pane_t3

0x0002,

0xf81b,	// (0x0004a8b8) form_midp_image_pane_t

0x9cc6,	// (0x00044d63) list_single_midp_pane_g1

0x5259,	// (0x000402f6) list_single_midp_pane_t1

0x9c9e,	// (0x00044d3b) list_midp_form_item_pane_ParamLimits

0x9c9e,	// (0x00044d3b) list_midp_form_item_pane

0x9397,	// (0x00044434) list_midp_form_item_pane_t1

0x93a6,	// (0x00044443) midp_ticker_pane_g1

0x93b2,	// (0x0004444f) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0004a800) midp_ticker_pane_g

0x93be,	// (0x0004445b) midp_ticker_pane_t1

0xb0ad,	// (0x0004614a) midp_editing_number_pane_t1

0xb08b,	// (0x00046128) midp_editing_number_pane

0xb09a,	// (0x00046137) midp_ticker_pane

0xae4c,	// (0x00045ee9) ai_message_heading_pane

0x7d02,	// (0x00042d9f) bg_popup_window_pane_cp14

0xae54,	// (0x00045ef1) listscroll_ai_message_pane

0xadd6,	// (0x00045e73) ai_message_heading_pane_g1_ParamLimits

0xadd6,	// (0x00045e73) ai_message_heading_pane_g1

0xade2,	// (0x00045e7f) ai_message_heading_pane_g2_ParamLimits

0xade2,	// (0x00045e7f) ai_message_heading_pane_g2

0xadee,	// (0x00045e8b) ai_message_heading_pane_g3_ParamLimits

0xadee,	// (0x00045e8b) ai_message_heading_pane_g3

0xadfa,	// (0x00045e97) ai_message_heading_pane_g4_ParamLimits

0xadfa,	// (0x00045e97) ai_message_heading_pane_g4

0x0003,

0xf95c,	// (0x0004a9f9) ai_message_heading_pane_g_ParamLimits

0xf95c,	// (0x0004a9f9) ai_message_heading_pane_g

0xae06,	// (0x00045ea3) ai_message_heading_pane_t1_ParamLimits

0xae06,	// (0x00045ea3) ai_message_heading_pane_t1

0xae20,	// (0x00045ebd) ai_message_heading_pane_t2_ParamLimits

0xae20,	// (0x00045ebd) ai_message_heading_pane_t2

0x0001,

0xf965,	// (0x0004aa02) ai_message_heading_pane_t_ParamLimits

0xf965,	// (0x0004aa02) ai_message_heading_pane_t

0xae32,	// (0x00045ecf) bg_popup_heading_pane_cp1_ParamLimits

0xae32,	// (0x00045ecf) bg_popup_heading_pane_cp1

0xadc4,	// (0x00045e61) list_ai_message_pane_ParamLimits

0xadc4,	// (0x00045e61) list_ai_message_pane

0x87be,	// (0x0004385b) scroll_pane_cp10

0xad60,	// (0x00045dfd) list_ai_message_pane_g1

0xad68,	// (0x00045e05) list_ai_message_pane_g2

0x0001,

0xf939,	// (0x0004a9d6) list_ai_message_pane_g

0xad70,	// (0x00045e0d) list_ai_message_pane_t1_ParamLimits

0xad70,	// (0x00045e0d) list_ai_message_pane_t1

0xad85,	// (0x00045e22) list_ai_message_pane_t2_ParamLimits

0xad85,	// (0x00045e22) list_ai_message_pane_t2

0xad9a,	// (0x00045e37) list_ai_message_pane_t3_ParamLimits

0xad9a,	// (0x00045e37) list_ai_message_pane_t3

0xadaf,	// (0x00045e4c) list_ai_message_pane_t4_ParamLimits

0xadaf,	// (0x00045e4c) list_ai_message_pane_t4

0x0003,

0xf93e,	// (0x0004a9db) list_ai_message_pane_t_ParamLimits

0xf93e,	// (0x0004a9db) list_ai_message_pane_t

0xad4b,	// (0x00045de8) cell_ai_soft_ind_pane_ParamLimits

0xad4b,	// (0x00045de8) cell_ai_soft_ind_pane

0x93d0,	// (0x0004446d) cell_ai_soft_ind_pane_g1_ParamLimits

0x93d0,	// (0x0004446d) cell_ai_soft_ind_pane_g1

0x7d02,	// (0x00042d9f) grid_highlight_cp1

0x93dd,	// (0x0004447a) text_secondary_cp56_ParamLimits

0x93dd,	// (0x0004447a) text_secondary_cp56

0xad20,	// (0x00045dbd) example_general_pane_ParamLimits

0xad20,	// (0x00045dbd) example_general_pane

0xad2c,	// (0x00045dc9) example_parent_pane_g1_ParamLimits

0xad2c,	// (0x00045dc9) example_parent_pane_g1

0xad38,	// (0x00045dd5) example_parent_pane_t1_ParamLimits

0xad38,	// (0x00045dd5) example_parent_pane_t1

0x676a,	// (0x00041807) popup_preview_text_window_ParamLimits

0x676a,	// (0x00041807) popup_preview_text_window

0x9208,	// (0x000442a5) list_single_pane_cp2_g4

0x8113,	// (0x000431b0) bg_popup_preview_window_pane_ParamLimits

0x8113,	// (0x000431b0) bg_popup_preview_window_pane

0xaa57,	// (0x00045af4) popup_preview_text_window_t1_ParamLimits

0xaa57,	// (0x00045af4) popup_preview_text_window_t1

0xaa75,	// (0x00045b12) popup_preview_text_window_t2_ParamLimits

0xaa75,	// (0x00045b12) popup_preview_text_window_t2

0xaabe,	// (0x00045b5b) popup_preview_text_window_t3_ParamLimits

0xaabe,	// (0x00045b5b) popup_preview_text_window_t3

0xab03,	// (0x00045ba0) popup_preview_text_window_t4_ParamLimits

0xab03,	// (0x00045ba0) popup_preview_text_window_t4

0x0004,

0xf90d,	// (0x0004a9aa) popup_preview_text_window_t_ParamLimits

0xf90d,	// (0x0004a9aa) popup_preview_text_window_t

0xab81,	// (0x00045c1e) scroll_pane_cp11

0x9b1b,	// (0x00044bb8) bg_popup_preview_window_pane_g1

0xaa17,	// (0x00045ab4) bg_popup_preview_window_pane_g2

0xaa1f,	// (0x00045abc) bg_popup_preview_window_pane_g3

0xaa27,	// (0x00045ac4) bg_popup_preview_window_pane_g4

0xaa2f,	// (0x00045acc) bg_popup_preview_window_pane_g5

0xaa37,	// (0x00045ad4) bg_popup_preview_window_pane_g6

0xaa3f,	// (0x00045adc) bg_popup_preview_window_pane_g7

0xaa47,	// (0x00045ae4) bg_popup_preview_window_pane_g8

0x58be,	// (0x0004095b) aid_popup_width_pane

0x6748,	// (0x000417e5) popup_midp_note_alarm_window_ParamLimits

0x6748,	// (0x000417e5) popup_midp_note_alarm_window

0x864e,	// (0x000436eb) data_form_pane_ParamLimits

0x4efe,	// (0x0003ff9b) form_field_data_pane_g1

0x4f08,	// (0x0003ffa5) form_field_data_pane_t1_ParamLimits

0x865a,	// (0x000436f7) input_focus_pane_ParamLimits

0x4f20,	// (0x0003ffbd) data_form_wide_pane_ParamLimits

0x4f31,	// (0x0003ffce) form_field_data_wide_pane_g1

0x4f3d,	// (0x0003ffda) form_field_data_wide_pane_t1_ParamLimits

0x83bf,	// (0x0004345c) input_focus_pane_cp6_ParamLimits

0x876b,	// (0x00043808) input_popup_find_pane_g1_ParamLimits

0x876b,	// (0x00043808) input_popup_find_pane_g1

0x5ed2,	// (0x00040f6f) aid_navi_side_left_pane

0x5ee7,	// (0x00040f84) aid_navi_side_right_pane

0xa430,	// (0x000454cd) bg_popup_window_pane_cp30_ParamLimits

0xa430,	// (0x000454cd) bg_popup_window_pane_cp30

0xa4aa,	// (0x00045547) popup_midp_note_alarm_window_g1_ParamLimits

0xa4aa,	// (0x00045547) popup_midp_note_alarm_window_g1

0xa4da,	// (0x00045577) popup_midp_note_alarm_window_t1_ParamLimits

0xa4da,	// (0x00045577) popup_midp_note_alarm_window_t1

0xa57b,	// (0x00045618) popup_midp_note_alarm_window_t2_ParamLimits

0xa57b,	// (0x00045618) popup_midp_note_alarm_window_t2

0xa629,	// (0x000456c6) popup_midp_note_alarm_window_t3_ParamLimits

0xa629,	// (0x000456c6) popup_midp_note_alarm_window_t3

0xa65b,	// (0x000456f8) popup_midp_note_alarm_window_t4_ParamLimits

0xa65b,	// (0x000456f8) popup_midp_note_alarm_window_t4

0xa681,	// (0x0004571e) popup_midp_note_alarm_window_t5_ParamLimits

0xa681,	// (0x0004571e) popup_midp_note_alarm_window_t5

0x000a,

0xf8aa,	// (0x0004a947) popup_midp_note_alarm_window_t_ParamLimits

0xf8aa,	// (0x0004a947) popup_midp_note_alarm_window_t

0xa72d,	// (0x000457ca) wait_bar_pane_cp1_ParamLimits

0xa72d,	// (0x000457ca) wait_bar_pane_cp1

0x7d02,	// (0x00042d9f) wait_anim_pane_copy1

0x7d02,	// (0x00042d9f) wait_border_pane_copy1

0xa116,	// (0x000451b3) wait_border_pane_g1_copy1

0x4f57,	// (0x0003fff4) form_field_popup_pane_g1

0x4f5f,	// (0x0003fffc) form_field_popup_pane_t1_ParamLimits

0x865a,	// (0x000436f7) input_focus_pane_cp7_ParamLimits

0x867c,	// (0x00043719) list_form_pane_ParamLimits

0x4f77,	// (0x00040014) form_field_popup_wide_pane_g1

0x4f7f,	// (0x0004001c) form_field_popup_wide_pane_t1_ParamLimits

0x865a,	// (0x000436f7) input_focus_pane_cp8_ParamLimits

0x8688,	// (0x00043725) list_form_wide_pane_ParamLimits

0xb1d6,	// (0x00046273) aid_size_cell_graphic_pane

0x5009,	// (0x000400a6) data_form_pane_t1_ParamLimits

0x52bb,	// (0x00040358) data_form_wide_pane_t1_ParamLimits

0x96ea,	// (0x00044787) bg_status_flat_pane

0x7d42,	// (0x00042ddf) title_pane_t1_ParamLimits

0x7daa,	// (0x00042e47) title_pane_t2_ParamLimits

0x7dd0,	// (0x00042e6d) title_pane_t3_ParamLimits

0xf55d,	// (0x0004a5fa) title_pane_t_ParamLimits

0x8c3b,	// (0x00043cd8) level_1_signal_ParamLimits

0x8c4d,	// (0x00043cea) level_2_signal_ParamLimits

0x8c60,	// (0x00043cfd) level_3_signal_ParamLimits

0x8c73,	// (0x00043d10) level_4_signal_ParamLimits

0x8c86,	// (0x00043d23) level_5_signal_ParamLimits

0x8c99,	// (0x00043d36) level_6_signal_ParamLimits

0x8cac,	// (0x00043d49) level_7_signal_ParamLimits

0x8c3b,	// (0x00043cd8) level_1_battery_ParamLimits

0x8c4d,	// (0x00043cea) level_2_battery_ParamLimits

0x8c60,	// (0x00043cfd) level_3_battery_ParamLimits

0x8c73,	// (0x00043d10) level_4_battery_ParamLimits

0x8c86,	// (0x00043d23) level_5_battery_ParamLimits

0x8c99,	// (0x00043d36) level_6_battery_ParamLimits

0x8cac,	// (0x00043d49) level_7_battery_ParamLimits

0xa335,	// (0x000453d2) bg_status_flat_pane_g1

0xa33d,	// (0x000453da) bg_status_flat_pane_g2

0xa345,	// (0x000453e2) bg_status_flat_pane_g3

0xa34d,	// (0x000453ea) bg_status_flat_pane_g4

0xa355,	// (0x000453f2) bg_status_flat_pane_g5

0xa35d,	// (0x000453fa) bg_status_flat_pane_g6

0xa365,	// (0x00045402) bg_status_flat_pane_g7

0x7df8,	// (0x00042e95) tabs_3_active_pane_t1_ParamLimits

0x7df8,	// (0x00042e95) tabs_3_passive_pane_t1_ParamLimits

0x7e12,	// (0x00042eaf) tabs_4_active_pane_t1_ParamLimits

0x7e12,	// (0x00042eaf) tabs_4_1_passive_pane_t1_ParamLimits

0x87ff,	// (0x0004389c) tabs_2_active_pane_t1_ParamLimits

0x87ff,	// (0x0004389c) tabs_2_passive_pane_t1_ParamLimits

0x8811,	// (0x000438ae) bg_active_tab_pane_cp4_ParamLimits

0x881f,	// (0x000438bc) tabs_2_long_active_pane_t1_ParamLimits

0x8832,	// (0x000438cf) bg_passive_tab_pane_cp4_ParamLimits

0x6a17,	// (0x00041ab4) list_single_midp_graphic_pane_t1_ParamLimits

0x8811,	// (0x000438ae) bg_active_tab_pane_cp5_ParamLimits

0x883e,	// (0x000438db) tabs_3_long_active_pane_t1_ParamLimits

0x8832,	// (0x000438cf) bg_passive_tab_pane_cp5_ParamLimits

0x6a17,	// (0x00041ab4) list_single_midp_graphic_pane_t1

0x96ea,	// (0x00044787) bg_status_flat_pane_ParamLimits

0x97ad,	// (0x0004484a) indicator_pane_cp2_ParamLimits

0x97ad,	// (0x0004484a) indicator_pane_cp2

0x98de,	// (0x0004497b) navi_pane_srt_ParamLimits

0x98de,	// (0x0004497b) navi_pane_srt

0x9902,	// (0x0004499f) popup_clock_digital_analogue_window_cp1

0x7ebf,	// (0x00042f5c) indicator_pane_t1

0x92d7,	// (0x00044374) copy_highlight_pane

0x92d7,	// (0x00044374) cursor_graphics_pane

0x92d7,	// (0x00044374) graphic_within_text_pane

0x92d7,	// (0x00044374) link_highlight_pane

0xab44,	// (0x00045be1) popup_preview_text_window_t5_ParamLimits

0xab44,	// (0x00045be1) popup_preview_text_window_t5

0x93f7,	// (0x00044494) cursor_digital_pane

0x93f7,	// (0x00044494) cursor_primary_pane

0x9408,	// (0x000444a5) cursor_primary_small_pane

0x9410,	// (0x000444ad) cursor_secondary_pane

0x9418,	// (0x000444b5) cursor_title_pane

0x93f7,	// (0x00044494) link_highlight_digital_pane

0x93ff,	// (0x0004449c) link_highlight_primary_pane

0x9408,	// (0x000444a5) link_highlight_primary_small_pane

0x9410,	// (0x000444ad) link_highlight_secondary_pane

0x9418,	// (0x000444b5) link_highlight_title_pane

0x93f7,	// (0x00044494) copy_highlight_digital_pane

0x93f7,	// (0x00044494) copy_highlight_primary_pane

0x9408,	// (0x000444a5) copy_highlight_primary_small_pane

0x9410,	// (0x000444ad) copy_highlight_secondary_pane

0x9418,	// (0x000444b5) copy_highlight_title_pane

0x9410,	// (0x000444ad) graphic_text_digital_pane

0xa3d3,	// (0x00045470) graphic_text_primary_pane

0xa3dc,	// (0x00045479) graphic_text_primary_small_pane

0x9408,	// (0x000444a5) graphic_text_secondary_pane

0x93f7,	// (0x00044494) graphic_text_title_pane

0x9420,	// (0x000444bd) cursor_primary_pane_g1

0xa3c5,	// (0x00045462) cursor_text_primary_t1

0xa3ad,	// (0x0004544a) cursor_primary_small_pane_g1

0xa3b7,	// (0x00045454) cursor_text_primary_small_t1

0xa395,	// (0x00045432) cursor_primary_small_pane_g1_copy1

0xa39f,	// (0x0004543c) cursor_text_primary_small_t1_copy1

0xa37d,	// (0x0004541a) cursor_text_title_t1

0xa38b,	// (0x00045428) cursor_title_pane_g1

0x9420,	// (0x000444bd) cursor_digital_pane_g1

0x942a,	// (0x000444c7) cursor_text_digital_t1

0x944f,	// (0x000444ec) link_highlight_primary_pane_g1

0xa326,	// (0x000453c3) link_highlight_primary_pane_t1

0x9438,	// (0x000444d5) link_highlight_primary_small_pane_g1

0x9440,	// (0x000444dd) link_highlight_primary_small_pane_t1

0x944f,	// (0x000444ec) link_highlight_secondary_pane_g1

0x9457,	// (0x000444f4) link_highlight_secondary_pane_t1

0xa29a,	// (0x00045337) link_highlight_title_pane_g1

0xa2a2,	// (0x0004533f) link_highlight_title_pane_t1

0xa283,	// (0x00045320) link_highlight_digital_pane_g1

0xa28b,	// (0x00045328) link_highlight_digital_pane_t1

0xa15b,	// (0x000451f8) copy_highlight_primary_pane_g1

0xa163,	// (0x00045200) copy_highlight_primary_pane_t1

0xa135,	// (0x000451d2) copy_highlight_primary_small_pane_g1

0xa14c,	// (0x000451e9) copy_highlight_primary_small_pane_t1

0x9466,	// (0x00044503) copy_highlight_secondary_pane_g1

0x946e,	// (0x0004450b) copy_highlight_secondary_pane_t1

0xa135,	// (0x000451d2) copy_highlight_title_pane_g1

0xa13d,	// (0x000451da) copy_highlight_title_pane_t1

0xa15b,	// (0x000451f8) copy_highlight_digital_pane_g1

0xb3e2,	// (0x0004647f) copy_highlight_digital_pane_t1

0xb2f4,	// (0x00046391) graphic_text_primary_pane_g1

0xb3c6,	// (0x00046463) graphic_text_primary_pane_t1

0xb3d4,	// (0x00046471) graphic_text_primary_pane_t2

0x0001,

0xf9d9,	// (0x0004aa76) graphic_text_primary_pane_t

0xb360,	// (0x000463fd) graphic_text_primary_small_pane_g1

0xb368,	// (0x00046405) graphic_text_primary_small_pane_t1

0xb3b8,	// (0x00046455) graphic_text_primary_small_pane_t2

0x0001,

0xf9d4,	// (0x0004aa71) graphic_text_primary_small_pane_t

0xb33c,	// (0x000463d9) graphic_text_secondary_pane_g1

0xb344,	// (0x000463e1) graphic_text_secondary_pane_t1

0xb352,	// (0x000463ef) graphic_text_secondary_pane_t2

0x0001,

0xf9cf,	// (0x0004aa6c) graphic_text_secondary_pane_t

0xb318,	// (0x000463b5) graphic_text_title_pane_g1

0xb320,	// (0x000463bd) graphic_text_title_pane_t1

0xb32e,	// (0x000463cb) graphic_text_title_pane_t2

0x0001,

0xf9ca,	// (0x0004aa67) graphic_text_title_pane_t

0xb2f4,	// (0x00046391) graphic_text_digital_pane_g1

0xb2fc,	// (0x00046399) graphic_text_digital_pane_t1

0xb30a,	// (0x000463a7) graphic_text_digital_pane_t2

0x0001,

0xf9c5,	// (0x0004aa62) graphic_text_digital_pane_t

0x7de2,	// (0x00042e7f) navi_icon_pane_srt_ParamLimits

0x7de2,	// (0x00042e7f) navi_icon_pane_srt

0x7d02,	// (0x00042d9f) navi_midp_pane_srt

0x7d02,	// (0x00042d9f) navi_navi_pane_srt

0x7de2,	// (0x00042e7f) navi_text_pane_srt_ParamLimits

0x7de2,	// (0x00042e7f) navi_text_pane_srt

0xb2bf,	// (0x0004635c) navi_navi_icon_text_pane_srt

0xb2c7,	// (0x00046364) navi_navi_pane_srt_g1_ParamLimits

0xb2c7,	// (0x00046364) navi_navi_pane_srt_g1

0xb2d9,	// (0x00046376) navi_navi_pane_srt_g2_ParamLimits

0xb2d9,	// (0x00046376) navi_navi_pane_srt_g2

0x0001,

0xf9c0,	// (0x0004aa5d) navi_navi_pane_srt_g_ParamLimits

0xf9c0,	// (0x0004aa5d) navi_navi_pane_srt_g

0xb2eb,	// (0x00046388) navi_navi_tabs_pane_srt

0xb2bf,	// (0x0004635c) navi_navi_text_pane_srt

0xb2bf,	// (0x0004635c) navi_navi_volume_pane_srt

0xb2b0,	// (0x0004634d) navi_navi_text_pane_srt_t1

0x6dfd,	// (0x00041e9a) navi_navi_volume_pane_srt_g1

0x6e05,	// (0x00041ea2) volume_small_pane_srt_ParamLimits

0x6e05,	// (0x00041ea2) volume_small_pane_srt

0x61ce,	// (0x0004126b) volume_small_pane_srt_g1_ParamLimits

0x61ce,	// (0x0004126b) volume_small_pane_srt_g1

0x61de,	// (0x0004127b) volume_small_pane_srt_g2_ParamLimits

0x61de,	// (0x0004127b) volume_small_pane_srt_g2

0x61ef,	// (0x0004128c) volume_small_pane_srt_g3_ParamLimits

0x61ef,	// (0x0004128c) volume_small_pane_srt_g3

0x6200,	// (0x0004129d) volume_small_pane_srt_g4_ParamLimits

0x6200,	// (0x0004129d) volume_small_pane_srt_g4

0x6211,	// (0x000412ae) volume_small_pane_srt_g5_ParamLimits

0x6211,	// (0x000412ae) volume_small_pane_srt_g5

0x6222,	// (0x000412bf) volume_small_pane_srt_g6_ParamLimits

0x6222,	// (0x000412bf) volume_small_pane_srt_g6

0x6233,	// (0x000412d0) volume_small_pane_srt_g7_ParamLimits

0x6233,	// (0x000412d0) volume_small_pane_srt_g7

0x6244,	// (0x000412e1) volume_small_pane_srt_g8_ParamLimits

0x6244,	// (0x000412e1) volume_small_pane_srt_g8

0x6255,	// (0x000412f2) volume_small_pane_srt_g9_ParamLimits

0x6255,	// (0x000412f2) volume_small_pane_srt_g9

0x6266,	// (0x00041303) volume_small_pane_srt_g10_ParamLimits

0x6266,	// (0x00041303) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0004a805) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0004a805) volume_small_pane_srt_g

0x81bc,	// (0x00043259) query_popup_data_pane_cp2

0xb296,	// (0x00046333) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb296,	// (0x00046333) navi_navi_icon_text_pane_srt_t1

0xa3d3,	// (0x00045470) navi_tabs_2_long_pane_srt

0xa3d3,	// (0x00045470) navi_tabs_2_pane_srt

0xa3d3,	// (0x00045470) navi_tabs_3_long_pane_srt

0xa3d3,	// (0x00045470) navi_tabs_3_pane_srt

0xa3d3,	// (0x00045470) navi_tabs_4_pane_srt

0x6ddd,	// (0x00041e7a) tabs_2_active_pane_srt_ParamLimits

0x6ddd,	// (0x00041e7a) tabs_2_active_pane_srt

0x6ded,	// (0x00041e8a) tabs_2_passive_pane_srt_ParamLimits

0x6ded,	// (0x00041e8a) tabs_2_passive_pane_srt

0x9617,	// (0x000446b4) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9617,	// (0x000446b4) bg_passive_tab_pane_cp1_srt

0xb262,	// (0x000462ff) bg_passive_tab_pane_g1_cp1_srt

0x8f24,	// (0x00043fc1) bg_passive_tab_pane_g2_cp1_srt

0xb26b,	// (0x00046308) bg_passive_tab_pane_g3_cp1_srt

0x7de2,	// (0x00042e7f) bg_active_tab_pane_cp1_srt_ParamLimits

0x7de2,	// (0x00042e7f) bg_active_tab_pane_cp1_srt

0xb274,	// (0x00046311) tabs_2_active_pane_srt_g1

0xb27c,	// (0x00046319) tabs_2_active_pane_srt_t1_ParamLimits

0xb27c,	// (0x00046319) tabs_2_active_pane_srt_t1

0xb262,	// (0x000462ff) bg_active_tab_pane_g1_cp1_srt

0x8f24,	// (0x00043fc1) bg_active_tab_pane_g2_cp1_srt

0xb26b,	// (0x00046308) bg_active_tab_pane_g3_cp1_srt

0x6daa,	// (0x00041e47) tabs_3_active_pane_srt_ParamLimits

0x6daa,	// (0x00041e47) tabs_3_active_pane_srt

0x6dbb,	// (0x00041e58) tabs_3_passive_pane_cp_srt_ParamLimits

0x6dbb,	// (0x00041e58) tabs_3_passive_pane_cp_srt

0x6dcc,	// (0x00041e69) tabs_3_passive_pane_srt_ParamLimits

0x6dcc,	// (0x00041e69) tabs_3_passive_pane_srt

0x9617,	// (0x000446b4) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9617,	// (0x000446b4) bg_passive_tab_pane_cp2_srt

0x947d,	// (0x0004451a) bg_passive_tab_pane_g1_cp2_srt

0x8f24,	// (0x00043fc1) bg_passive_tab_pane_g2_cp2_srt

0x9486,	// (0x00044523) bg_passive_tab_pane_g3_cp2_srt

0x7de2,	// (0x00042e7f) bg_active_tab_pane_cp2_srt_ParamLimits

0x7de2,	// (0x00042e7f) bg_active_tab_pane_cp2_srt

0xb248,	// (0x000462e5) tabs_3_active_pane_srt_g1

0xb250,	// (0x000462ed) tabs_3_active_pane_srt_t1_ParamLimits

0xb250,	// (0x000462ed) tabs_3_active_pane_srt_t1

0x947d,	// (0x0004451a) bg_active_tab_pane_g1_cp2_srt

0x8f24,	// (0x00043fc1) bg_active_tab_pane_g2_cp2_srt

0x9486,	// (0x00044523) bg_active_tab_pane_g3_cp2_srt

0x6d62,	// (0x00041dff) tabs_4_active_pane_srt_ParamLimits

0x6d62,	// (0x00041dff) tabs_4_active_pane_srt

0x6d74,	// (0x00041e11) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6d74,	// (0x00041e11) tabs_4_passive_pane_cp2_srt

0x63cb,	// (0x00041468) aid_size_cell_toolbar

0x8832,	// (0x000438cf) main_idle_act_pane_ParamLimits

0x657e,	// (0x0004161b) popup_large_graphic_colour_window_ParamLimits

0x68e5,	// (0x00041982) popup_toolbar_window_ParamLimits

0x68e5,	// (0x00041982) popup_toolbar_window

0xb0bc,	// (0x00046159) list_single_graphic_2heading_pane_ParamLimits

0xb0bc,	// (0x00046159) list_single_graphic_2heading_pane

0x89ee,	// (0x00043a8b) aid_size_cell_apps_grid_lsc_pane

0x8a00,	// (0x00043a9d) aid_size_cell_apps_grid_prt_pane

0x9617,	// (0x000446b4) bg_wml_button_pane_cp1_ParamLimits

0x9617,	// (0x000446b4) bg_wml_button_pane_cp1

0x9dc5,	// (0x00044e62) form_midp_field_text_pane_t1_ParamLimits

0x9b8f,	// (0x00044c2c) input_focus_pane_cp050_ParamLimits

0x9dfc,	// (0x00044e99) list_midp_form_text_pane_ParamLimits

0x9da2,	// (0x00044e3f) input_focus_pane_cp051_ParamLimits

0x9db6,	// (0x00044e53) list_midp_choice_pane_ParamLimits

0x9c48,	// (0x00044ce5) list_single_2graphic_pane_cp3_ParamLimits

0x9c48,	// (0x00044ce5) list_single_2graphic_pane_cp3

0x9c6c,	// (0x00044d09) list_single_midp_graphic_pane_ParamLimits

0x9c6c,	// (0x00044d09) list_single_midp_graphic_pane

0x5133,	// (0x000401d0) list_single_graphic_2heading_pane_g1_ParamLimits

0x5133,	// (0x000401d0) list_single_graphic_2heading_pane_g1

0x513f,	// (0x000401dc) list_single_graphic_2heading_pane_g4_ParamLimits

0x513f,	// (0x000401dc) list_single_graphic_2heading_pane_g4

0x514b,	// (0x000401e8) list_single_graphic_2heading_pane_g5_ParamLimits

0x514b,	// (0x000401e8) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0004a858) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0004a858) list_single_graphic_2heading_pane_g

0x5157,	// (0x000401f4) list_single_graphic_2heading_pane_t1_ParamLimits

0x5157,	// (0x000401f4) list_single_graphic_2heading_pane_t1

0x516b,	// (0x00040208) list_single_graphic_2heading_pane_t2_ParamLimits

0x516b,	// (0x00040208) list_single_graphic_2heading_pane_t2

0x5187,	// (0x00040224) list_single_graphic_2heading_pane_t3_ParamLimits

0x5187,	// (0x00040224) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0004a85f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0004a85f) list_single_graphic_2heading_pane_t

0x9a59,	// (0x00044af6) bg_popup_sub_pane_cp2

0x9a83,	// (0x00044b20) grid_toobar_pane

0x6992,	// (0x00041a2f) cell_toolbar_pane_ParamLimits

0x6992,	// (0x00041a2f) cell_toolbar_pane

0x9abf,	// (0x00044b5c) cell_toolbar_pane_g1_ParamLimits

0x9abf,	// (0x00044b5c) cell_toolbar_pane_g1

0x9ad3,	// (0x00044b70) cell_toolbar_pane_g2_ParamLimits

0x9ad3,	// (0x00044b70) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0004a86d) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0004a86d) cell_toolbar_pane_g

0x9af5,	// (0x00044b92) grid_highlight_pane_cp2_ParamLimits

0x9af5,	// (0x00044b92) grid_highlight_pane_cp2

0x9b0f,	// (0x00044bac) toolbar_button_pane

0x9b1b,	// (0x00044bb8) toolbar_button_pane_g1

0x9b23,	// (0x00044bc0) toolbar_button_pane_g2

0x9b2b,	// (0x00044bc8) toolbar_button_pane_g3

0x9b33,	// (0x00044bd0) toolbar_button_pane_g4

0x9b3b,	// (0x00044bd8) toolbar_button_pane_g5

0x9b43,	// (0x00044be0) toolbar_button_pane_g6

0x9b4b,	// (0x00044be8) toolbar_button_pane_g7

0x9b53,	// (0x00044bf0) toolbar_button_pane_g8

0x9b5b,	// (0x00044bf8) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0004a872) toolbar_button_pane_g

0x69d6,	// (0x00041a73) list_single_2graphic_pane_g1_cp3_ParamLimits

0x69d6,	// (0x00041a73) list_single_2graphic_pane_g1_cp3

0x69e2,	// (0x00041a7f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x69e2,	// (0x00041a7f) list_single_2graphic_pane_g2_cp3

0x69f3,	// (0x00041a90) list_single_2graphic_pane_g3_cp3

0x6081,	// (0x0004111e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6081,	// (0x0004111e) list_single_2graphic_pane_g4_cp3

0x69fb,	// (0x00041a98) list_single_2graphic_pane_t1_cp3_ParamLimits

0x69fb,	// (0x00041a98) list_single_2graphic_pane_t1_cp3

0x9843,	// (0x000448e0) list_single_midp_graphic_pane_g2_ParamLimits

0x9843,	// (0x000448e0) list_single_midp_graphic_pane_g2

0x5123,	// (0x000401c0) aid_zoom_text_primary

0x63d3,	// (0x00041470) aid_zoom_text_secondary

0x953a,	// (0x000445d7) status_small_pane_g7_ParamLimits

0x953a,	// (0x000445d7) status_small_pane_g7

0x955d,	// (0x000445fa) status_small_pane_t1_ParamLimits

0x7d19,	// (0x00042db6) title_pane_g2

0x0003,

0xf554,	// (0x0004a5f1) title_pane_g

0x825d,	// (0x000432fa) aid_size_cell_colour_1_pane_ParamLimits

0x825d,	// (0x000432fa) aid_size_cell_colour_1_pane

0x8271,	// (0x0004330e) aid_size_cell_colour_2_pane_ParamLimits

0x8271,	// (0x0004330e) aid_size_cell_colour_2_pane

0x8285,	// (0x00043322) aid_size_cell_colour_3_pane_ParamLimits

0x8285,	// (0x00043322) aid_size_cell_colour_3_pane

0x8299,	// (0x00043336) aid_size_cell_colour_4_pane_ParamLimits

0x8299,	// (0x00043336) aid_size_cell_colour_4_pane

0x5e0f,	// (0x00040eac) title_pane_stacon_g1_ParamLimits

0x5e0f,	// (0x00040eac) title_pane_stacon_g1

0xa1ba,	// (0x00045257) popup_note_wait_window_g3_ParamLimits

0xa1ba,	// (0x00045257) popup_note_wait_window_g3

0xa230,	// (0x000452cd) popup_note_wait_window_t5_ParamLimits

0xa230,	// (0x000452cd) popup_note_wait_window_t5

0x7d02,	// (0x00042d9f) main_feb_china_hwr_fs_writing_pane

0x6463,	// (0x00041500) popup_feb_china_hwr_fs_window_ParamLimits

0x6463,	// (0x00041500) popup_feb_china_hwr_fs_window

0x6a45,	// (0x00041ae2) aid_size_cell_hwr_fs_ParamLimits

0x6a45,	// (0x00041ae2) aid_size_cell_hwr_fs

0x9b8f,	// (0x00044c2c) bg_popup_sub_pane_cp3_ParamLimits

0x9b8f,	// (0x00044c2c) bg_popup_sub_pane_cp3

0x6a5a,	// (0x00041af7) grid_hwr_fs_pane_ParamLimits

0x6a5a,	// (0x00041af7) grid_hwr_fs_pane

0x6a72,	// (0x00041b0f) linegrid_hwr_fs_pane_ParamLimits

0x6a72,	// (0x00041b0f) linegrid_hwr_fs_pane

0x6a82,	// (0x00041b1f) cell_hwr_fs_pane_ParamLimits

0x6a82,	// (0x00041b1f) cell_hwr_fs_pane

0x9b9b,	// (0x00044c38) linegrid_hwr_fs_pane_g1_ParamLimits

0x9b9b,	// (0x00044c38) linegrid_hwr_fs_pane_g1

0x9ba7,	// (0x00044c44) linegrid_hwr_fs_pane_g2_ParamLimits

0x9ba7,	// (0x00044c44) linegrid_hwr_fs_pane_g2

0x9bb9,	// (0x00044c56) linegrid_hwr_fs_pane_g3_ParamLimits

0x9bb9,	// (0x00044c56) linegrid_hwr_fs_pane_g3

0x6aa4,	// (0x00041b41) linegrid_hwr_fs_pane_g4_ParamLimits

0x6aa4,	// (0x00041b41) linegrid_hwr_fs_pane_g4

0x6abe,	// (0x00041b5b) linegrid_hwr_fs_pane_g5_ParamLimits

0x6abe,	// (0x00041b5b) linegrid_hwr_fs_pane_g5

0x0004,

0xf800,	// (0x0004a89d) linegrid_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0004a89d) linegrid_hwr_fs_pane_g

0x9bc5,	// (0x00044c62) cell_hwr_fs_pane_g1_ParamLimits

0x9bc5,	// (0x00044c62) cell_hwr_fs_pane_g1

0x9990,	// (0x00044a2d) cell_hwr_fs_pane_g2_ParamLimits

0x9990,	// (0x00044a2d) cell_hwr_fs_pane_g2

0x9bdb,	// (0x00044c78) cell_hwr_fs_pane_g3_ParamLimits

0x9bdb,	// (0x00044c78) cell_hwr_fs_pane_g3

0x9be8,	// (0x00044c85) cell_hwr_fs_pane_g4_ParamLimits

0x9be8,	// (0x00044c85) cell_hwr_fs_pane_g4

0x0003,

0xf80b,	// (0x0004a8a8) cell_hwr_fs_pane_g_ParamLimits

0xf80b,	// (0x0004a8a8) cell_hwr_fs_pane_g

0x6ad4,	// (0x00041b71) cell_hwr_fs_pane_t1

0x7d02,	// (0x00042d9f) grid_highlight_pane_cp6

0x7d02,	// (0x00042d9f) main_idle_act2_pane

0x87a5,	// (0x00043842) aid_inside_area_popup_secondary

0xa867,	// (0x00045904) aid_inside_area_window_primary_ParamLimits

0xa867,	// (0x00045904) aid_inside_area_window_primary

0xb3f1,	// (0x0004648e) ai2_news_ticker_pane

0xb3f9,	// (0x00046496) aid_size_cell_ai1_link_ParamLimits

0xb3f9,	// (0x00046496) aid_size_cell_ai1_link

0xb413,	// (0x000464b0) popup_ai2_data_window_ParamLimits

0xb413,	// (0x000464b0) popup_ai2_data_window

0xb429,	// (0x000464c6) popup_ai2_link_window_ParamLimits

0xb429,	// (0x000464c6) popup_ai2_link_window

0x9b8f,	// (0x00044c2c) bg_popup_sub_pane_cp4_ParamLimits

0x9b8f,	// (0x00044c2c) bg_popup_sub_pane_cp4

0xb43d,	// (0x000464da) grid_ai2_link_pane_ParamLimits

0xb43d,	// (0x000464da) grid_ai2_link_pane

0xb454,	// (0x000464f1) popup_ai2_link_window_g1_ParamLimits

0xb454,	// (0x000464f1) popup_ai2_link_window_g1

0xb460,	// (0x000464fd) popup_ai2_link_window_g2_ParamLimits

0xb460,	// (0x000464fd) popup_ai2_link_window_g2

0x0001,

0xf9de,	// (0x0004aa7b) popup_ai2_link_window_g_ParamLimits

0xf9de,	// (0x0004aa7b) popup_ai2_link_window_g

0xb46f,	// (0x0004650c) ai2_mp_button_pane

0xb477,	// (0x00046514) ai2_mp_volume_pane

0x9da2,	// (0x00044e3f) bg_popup_sub_pane_cp5_ParamLimits

0x9da2,	// (0x00044e3f) bg_popup_sub_pane_cp5

0xb47f,	// (0x0004651c) heading_ai2_gene_pane_ParamLimits

0xb47f,	// (0x0004651c) heading_ai2_gene_pane

0xb48b,	// (0x00046528) list_ai2_gene_pane_ParamLimits

0xb48b,	// (0x00046528) list_ai2_gene_pane

0xb4d3,	// (0x00046570) cell_ai2_link_pane_ParamLimits

0xb4d3,	// (0x00046570) cell_ai2_link_pane

0xb4e9,	// (0x00046586) cell_ai2_link_pane_g1

0x7d02,	// (0x00042d9f) grid_highlight_pane_cp7

0x6e1a,	// (0x00041eb7) ai2_mp_volume_pane_g1

0xb5b9,	// (0x00046656) ai2_mp_volume_pane_g2

0xb52e,	// (0x000465cb) list_ai2_gene_pane_t1

0xb5c1,	// (0x0004665e) ai2_mp_volume_pane_g3

0x0002,

0xf9f7,	// (0x0004aa94) ai2_mp_volume_pane_g

0x6e22,	// (0x00041ebf) volume_small_pane_cp3

0xb5c9,	// (0x00046666) aid_size_cell_ai2_button

0xb5d1,	// (0x0004666e) grid_ai2_button_pane

0xb5da,	// (0x00046677) cell_ai2_button_pane_ParamLimits

0xb5da,	// (0x00046677) cell_ai2_button_pane

0x7cf8,	// (0x00042d95) cell_ai2_button_pane_g1

0x7d02,	// (0x00042d9f) grid_highlight_pane_cp8

0xb579,	// (0x00046616) ai2_gene_pane_t1_ParamLimits

0xb579,	// (0x00046616) ai2_gene_pane_t1

0x63c1,	// (0x0004145e) aid_height_parent_landscape

0xaef3,	// (0x00045f90) aid_height_set_list

0xaf04,	// (0x00045fa1) aid_size_parent

0xb1d6,	// (0x00046273) aid_size_cell_graphic_pane_ParamLimits

0xb49b,	// (0x00046538) popup_ai2_data_window_g1_ParamLimits

0xb49b,	// (0x00046538) popup_ai2_data_window_g1

0xb4a7,	// (0x00046544) ai2_news_ticker_pane_g1

0xb4af,	// (0x0004654c) ai2_news_ticker_pane_g2

0x0001,

0xf9e3,	// (0x0004aa80) ai2_news_ticker_pane_g

0xb4b7,	// (0x00046554) ai2_news_ticker_pane_t1

0xb4c5,	// (0x00046562) ai2_news_ticker_pane_t2

0x0001,

0xf9e8,	// (0x0004aa85) ai2_news_ticker_pane_t

0xb4f2,	// (0x0004658f) heading_ai2_gene_pane_g1

0xb4fa,	// (0x00046597) heading_ai2_gene_pane_t1_ParamLimits

0xb4fa,	// (0x00046597) heading_ai2_gene_pane_t1

0xb50f,	// (0x000465ac) list_highlight_pane_cp6

0xb517,	// (0x000465b4) ai2_gene_pane_ParamLimits

0xb517,	// (0x000465b4) ai2_gene_pane

0xb53c,	// (0x000465d9) list_ai2_gene_pane_t2

0x0001,

0xf9ed,	// (0x0004aa8a) list_ai2_gene_pane_t

0xb54a,	// (0x000465e7) list_highlight_pane_cp8_ParamLimits

0xb54a,	// (0x000465e7) list_highlight_pane_cp8

0xb55b,	// (0x000465f8) ai2_gene_pane_g1_ParamLimits

0xb55b,	// (0x000465f8) ai2_gene_pane_g1

0xb56d,	// (0x0004660a) ai2_gene_pane_g2_ParamLimits

0xb56d,	// (0x0004660a) ai2_gene_pane_g2

0x0001,

0xf9f2,	// (0x0004aa8f) ai2_gene_pane_g_ParamLimits

0xf9f2,	// (0x0004aa8f) ai2_gene_pane_g

0x85e4,	// (0x00043681) scroll_pane_cp12

0x6380,	// (0x0004141d) control_pane_t3_ParamLimits

0x6380,	// (0x0004141d) control_pane_t3

0x954e,	// (0x000445eb) status_small_pane_g8_ParamLimits

0x954e,	// (0x000445eb) status_small_pane_g8

0x6549,	// (0x000415e6) popup_find_window_ParamLimits

0x675c,	// (0x000417f9) popup_note_image_window_ParamLimits

0x519f,	// (0x0004023c) list_double2_graphic_pane_vc_g1_ParamLimits

0x519f,	// (0x0004023c) list_double2_graphic_pane_vc_g1

0x9210,	// (0x000442ad) list_double2_graphic_pane_vc_g2_ParamLimits

0x9210,	// (0x000442ad) list_double2_graphic_pane_vc_g2

0x69c2,	// (0x00041a5f) list_double2_graphic_pane_vc_g3_ParamLimits

0x69c2,	// (0x00041a5f) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0004a866) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004a866) list_double2_graphic_pane_vc_g

0x51ab,	// (0x00040248) list_double2_graphic_pane_vc_t1_ParamLimits

0x51ab,	// (0x00040248) list_double2_graphic_pane_vc_t1

0x9210,	// (0x000442ad) list_single_heading_pane_vc_g1_ParamLimits

0x9210,	// (0x000442ad) list_single_heading_pane_vc_g1

0x69c2,	// (0x00041a5f) list_single_heading_pane_vc_g2_ParamLimits

0x69c2,	// (0x00041a5f) list_single_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004a887) list_single_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004a887) list_single_heading_pane_vc_g

0x51c1,	// (0x0004025e) list_single_heading_pane_vc_t1_ParamLimits

0x51c1,	// (0x0004025e) list_single_heading_pane_vc_t1

0x51d9,	// (0x00040276) list_single_heading_pane_vc_t2_ParamLimits

0x51d9,	// (0x00040276) list_single_heading_pane_vc_t2

0x0001,

0xf7ef,	// (0x0004a88c) list_single_heading_pane_vc_t_ParamLimits

0xf7ef,	// (0x0004a88c) list_single_heading_pane_vc_t

0x6a2d,	// (0x00041aca) list_setting_number_pane_vc_g1_ParamLimits

0x6a2d,	// (0x00041aca) list_setting_number_pane_vc_g1

0x6a39,	// (0x00041ad6) list_setting_number_pane_vc_g2_ParamLimits

0x6a39,	// (0x00041ad6) list_setting_number_pane_vc_g2

0x0001,

0xf7f4,	// (0x0004a891) list_setting_number_pane_vc_g_ParamLimits

0xf7f4,	// (0x0004a891) list_setting_number_pane_vc_g

0x51ed,	// (0x0004028a) list_setting_number_pane_vc_t1_ParamLimits

0x51ed,	// (0x0004028a) list_setting_number_pane_vc_t1

0x5201,	// (0x0004029e) list_setting_number_pane_vc_t2_ParamLimits

0x5201,	// (0x0004029e) list_setting_number_pane_vc_t2

0x521d,	// (0x000402ba) list_setting_number_pane_vc_t3_ParamLimits

0x521d,	// (0x000402ba) list_setting_number_pane_vc_t3

0x0002,

0xf7f9,	// (0x0004a896) list_setting_number_pane_vc_t_ParamLimits

0xf7f9,	// (0x0004a896) list_setting_number_pane_vc_t

0x5249,	// (0x000402e6) set_value_pane_vc_ParamLimits

0x5249,	// (0x000402e6) set_value_pane_vc

0xb0bc,	// (0x00046159) list_double2_graphic_pane_vc_ParamLimits

0xb0bc,	// (0x00046159) list_double2_graphic_pane_vc

0x5301,	// (0x0004039e) list_double2_large_graphic_pane_vc_ParamLimits

0x5301,	// (0x0004039e) list_double2_large_graphic_pane_vc

0xb0bc,	// (0x00046159) list_double2_pane_vc_ParamLimits

0xb0bc,	// (0x00046159) list_double2_pane_vc

0xb0bc,	// (0x00046159) list_double_graphic_heading_pane_vc_ParamLimits

0xb0bc,	// (0x00046159) list_double_graphic_heading_pane_vc

0xb0bc,	// (0x00046159) list_double_graphic_pane_vc_ParamLimits

0xb0bc,	// (0x00046159) list_double_graphic_pane_vc

0xb0bc,	// (0x00046159) list_double_heading_pane_vc_ParamLimits

0xb0bc,	// (0x00046159) list_double_heading_pane_vc

0x5301,	// (0x0004039e) list_double_large_graphic_pane_vc_ParamLimits

0x5301,	// (0x0004039e) list_double_large_graphic_pane_vc

0xb0bc,	// (0x00046159) list_double_number_pane_vc_ParamLimits

0xb0bc,	// (0x00046159) list_double_number_pane_vc

0xb0bc,	// (0x00046159) list_double_pane_vc_ParamLimits

0xb0bc,	// (0x00046159) list_double_pane_vc

0xb0bc,	// (0x00046159) list_double_time_pane_vc_ParamLimits

0xb0bc,	// (0x00046159) list_double_time_pane_vc

0xb0bc,	// (0x00046159) list_setting_number_pane_vc_ParamLimits

0xb0bc,	// (0x00046159) list_setting_number_pane_vc

0xb0bc,	// (0x00046159) list_setting_pane_vc_ParamLimits

0xb0bc,	// (0x00046159) list_setting_pane_vc

0xb0bc,	// (0x00046159) list_single_graphic_heading_pane_vc_ParamLimits

0xb0bc,	// (0x00046159) list_single_graphic_heading_pane_vc

0xb0bc,	// (0x00046159) list_single_heading_pane_vc_ParamLimits

0xb0bc,	// (0x00046159) list_single_heading_pane_vc

0x6ce7,	// (0x00041d84) list_single_number_heading_pane_vc_ParamLimits

0x6ce7,	// (0x00041d84) list_single_number_heading_pane_vc

0x519f,	// (0x0004023c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x519f,	// (0x0004023c) list_double_graphic_heading_pane_vc_g1

0x9210,	// (0x000442ad) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9210,	// (0x000442ad) list_double_graphic_heading_pane_vc_g2

0x69c2,	// (0x00041a5f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x69c2,	// (0x00041a5f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x0004a866) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004a866) list_double_graphic_heading_pane_vc_g

0x5345,	// (0x000403e2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5345,	// (0x000403e2) list_double_graphic_heading_pane_vc_t1

0x5361,	// (0x000403fe) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5361,	// (0x000403fe) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fe,	// (0x0004aa9b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0004aa9b) list_double_graphic_heading_pane_vc_t

0x6a2d,	// (0x00041aca) list_setting_pane_vc_g1_ParamLimits

0x6a2d,	// (0x00041aca) list_setting_pane_vc_g1

0x6a39,	// (0x00041ad6) list_setting_pane_vc_g2_ParamLimits

0x6a39,	// (0x00041ad6) list_setting_pane_vc_g2

0x0001,

0xf7f4,	// (0x0004a891) list_setting_pane_vc_g_ParamLimits

0xf7f4,	// (0x0004a891) list_setting_pane_vc_g

0x537f,	// (0x0004041c) list_setting_pane_vc_t1_ParamLimits

0x537f,	// (0x0004041c) list_setting_pane_vc_t1

0x539b,	// (0x00040438) list_setting_pane_vc_t2_ParamLimits

0x539b,	// (0x00040438) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x0004aac9) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x0004aac9) list_setting_pane_vc_t

0x5249,	// (0x000402e6) set_value_pane_cp_vc_ParamLimits

0x5249,	// (0x000402e6) set_value_pane_cp_vc

0x9210,	// (0x000442ad) list_single_number_heading_pane_vc_g1_ParamLimits

0x9210,	// (0x000442ad) list_single_number_heading_pane_vc_g1

0x69c2,	// (0x00041a5f) list_single_number_heading_pane_vc_g2_ParamLimits

0x69c2,	// (0x00041a5f) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004a887) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004a887) list_single_number_heading_pane_vc_g

0x51c1,	// (0x0004025e) list_single_number_heading_pane_vc_t1_ParamLimits

0x51c1,	// (0x0004025e) list_single_number_heading_pane_vc_t1

0x53b7,	// (0x00040454) list_single_number_heading_pane_vc_t2_ParamLimits

0x53b7,	// (0x00040454) list_single_number_heading_pane_vc_t2

0x53cb,	// (0x00040468) list_single_number_heading_pane_vc_t3_ParamLimits

0x53cb,	// (0x00040468) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x0004aace) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0004aace) list_single_number_heading_pane_vc_t

0x519f,	// (0x0004023c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x519f,	// (0x0004023c) list_single_graphic_heading_pane_vc_g1

0x9210,	// (0x000442ad) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9210,	// (0x000442ad) list_single_graphic_heading_pane_vc_g4

0x69c2,	// (0x00041a5f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x69c2,	// (0x00041a5f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0004a866) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004a866) list_single_graphic_heading_pane_vc_g

0x51c1,	// (0x0004025e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x51c1,	// (0x0004025e) list_single_graphic_heading_pane_vc_t1

0x53dd,	// (0x0004047a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x53dd,	// (0x0004047a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x0004aad5) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0004aad5) list_single_graphic_heading_pane_vc_t

0x9210,	// (0x000442ad) list_double2_pane_vc_g1_ParamLimits

0x9210,	// (0x000442ad) list_double2_pane_vc_g1

0x69c2,	// (0x00041a5f) list_double2_pane_vc_g2_ParamLimits

0x69c2,	// (0x00041a5f) list_double2_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004a887) list_double2_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004a887) list_double2_pane_vc_g

0x53f1,	// (0x0004048e) list_double2_pane_vc_t1_ParamLimits

0x53f1,	// (0x0004048e) list_double2_pane_vc_t1

0x5407,	// (0x000404a4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5407,	// (0x000404a4) list_double2_large_graphic_pane_vc_g1

0x5413,	// (0x000404b0) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5413,	// (0x000404b0) list_double2_large_graphic_pane_vc_g2

0x541f,	// (0x000404bc) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x541f,	// (0x000404bc) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3d,	// (0x0004aada) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0004aada) list_double2_large_graphic_pane_vc_g

0x542b,	// (0x000404c8) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x542b,	// (0x000404c8) list_double2_large_graphic_pane_vc_t1

0x6e2b,	// (0x00041ec8) list_double_time_pane_vc_g1_ParamLimits

0x6e2b,	// (0x00041ec8) list_double_time_pane_vc_g1

0x6e37,	// (0x00041ed4) list_double_time_pane_vc_g2_ParamLimits

0x6e37,	// (0x00041ed4) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x0004aae1) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x0004aae1) list_double_time_pane_vc_g

0x5441,	// (0x000404de) list_double_time_pane_vc_t1_ParamLimits

0x5441,	// (0x000404de) list_double_time_pane_vc_t1

0x5465,	// (0x00040502) list_double_time_pane_vc_t2_ParamLimits

0x5465,	// (0x00040502) list_double_time_pane_vc_t2

0x54b4,	// (0x00040551) list_double_time_pane_vc_t3_ParamLimits

0x54b4,	// (0x00040551) list_double_time_pane_vc_t3

0x54c6,	// (0x00040563) list_double_time_pane_vc_t4_ParamLimits

0x54c6,	// (0x00040563) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x0004aae6) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x0004aae6) list_double_time_pane_vc_t

0x9210,	// (0x000442ad) list_double_pane_vc_g1_ParamLimits

0x9210,	// (0x000442ad) list_double_pane_vc_g1

0x69c2,	// (0x00041a5f) list_double_pane_vc_g2_ParamLimits

0x69c2,	// (0x00041a5f) list_double_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004a887) list_double_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004a887) list_double_pane_vc_g

0x54da,	// (0x00040577) list_double_pane_vc_t1_ParamLimits

0x54da,	// (0x00040577) list_double_pane_vc_t1

0x54ee,	// (0x0004058b) list_double_pane_vc_t2_ParamLimits

0x54ee,	// (0x0004058b) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x0004aaef) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x0004aaef) list_double_pane_vc_t

0x9210,	// (0x000442ad) list_double_number_pane_vc_g1_ParamLimits

0x9210,	// (0x000442ad) list_double_number_pane_vc_g1

0x69c2,	// (0x00041a5f) list_double_number_pane_vc_g2_ParamLimits

0x69c2,	// (0x00041a5f) list_double_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004a887) list_double_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004a887) list_double_number_pane_vc_g

0x5506,	// (0x000405a3) list_double_number_pane_vc_t1_ParamLimits

0x5506,	// (0x000405a3) list_double_number_pane_vc_t1

0x551a,	// (0x000405b7) list_double_number_pane_vc_t2_ParamLimits

0x551a,	// (0x000405b7) list_double_number_pane_vc_t2

0x552e,	// (0x000405cb) list_double_number_pane_vc_t3_ParamLimits

0x552e,	// (0x000405cb) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x0004aaf4) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x0004aaf4) list_double_number_pane_vc_t

0x5546,	// (0x000405e3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5546,	// (0x000405e3) list_double_large_graphic_pane_vc_g1

0x5557,	// (0x000405f4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5557,	// (0x000405f4) list_double_large_graphic_pane_vc_g2

0x541f,	// (0x000404bc) list_double_large_graphic_pane_vc_g3_ParamLimits

0x541f,	// (0x000404bc) list_double_large_graphic_pane_vc_g3

0x5566,	// (0x00040603) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5566,	// (0x00040603) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x0004aafb) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x0004aafb) list_double_large_graphic_pane_vc_g

0x5572,	// (0x0004060f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5572,	// (0x0004060f) list_double_large_graphic_pane_vc_t1

0x558b,	// (0x00040628) list_double_large_graphic_pane_vc_t2_ParamLimits

0x558b,	// (0x00040628) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x0004ab04) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x0004ab04) list_double_large_graphic_pane_vc_t

0x9210,	// (0x000442ad) list_double_heading_pane_vc_g1_ParamLimits

0x9210,	// (0x000442ad) list_double_heading_pane_vc_g1

0x69c2,	// (0x00041a5f) list_double_heading_pane_vc_g2_ParamLimits

0x69c2,	// (0x00041a5f) list_double_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0004a887) list_double_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0004a887) list_double_heading_pane_vc_g

0x55a4,	// (0x00040641) list_double_heading_pane_vc_t1_ParamLimits

0x55a4,	// (0x00040641) list_double_heading_pane_vc_t1

0x51c1,	// (0x0004025e) list_double_heading_pane_vc_t2_ParamLimits

0x51c1,	// (0x0004025e) list_double_heading_pane_vc_t2

0x0001,

0xfa6c,	// (0x0004ab09) list_double_heading_pane_vc_t_ParamLimits

0xfa6c,	// (0x0004ab09) list_double_heading_pane_vc_t

0x519f,	// (0x0004023c) list_double_graphic_pane_vc_g1_ParamLimits

0x519f,	// (0x0004023c) list_double_graphic_pane_vc_g1

0x6e43,	// (0x00041ee0) list_double_graphic_pane_vc_g2_ParamLimits

0x6e43,	// (0x00041ee0) list_double_graphic_pane_vc_g2

0xb61a,	// (0x000466b7) list_double_graphic_pane_vc_g3_ParamLimits

0xb61a,	// (0x000466b7) list_double_graphic_pane_vc_g3

0x0002,

0xfa71,	// (0x0004ab0e) list_double_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x0004ab0e) list_double_graphic_pane_vc_g

0x55b8,	// (0x00040655) list_double_graphic_pane_vc_t1_ParamLimits

0x55b8,	// (0x00040655) list_double_graphic_pane_vc_t1

0x55cc,	// (0x00040669) list_double_graphic_pane_vc_t2_ParamLimits

0x55cc,	// (0x00040669) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0004ab15) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0004ab15) list_double_graphic_pane_vc_t

0x58ca,	// (0x00040967) aid_size_cell_fastswap

0x58d2,	// (0x0004096f) aid_size_cell_touch_ParamLimits

0x58d2,	// (0x0004096f) aid_size_cell_touch

0x5b2d,	// (0x00040bca) popup_fast_swap_wide_window_ParamLimits

0x5b2d,	// (0x00040bca) popup_fast_swap_wide_window

0x5c37,	// (0x00040cd4) touch_pane_ParamLimits

0x5c37,	// (0x00040cd4) touch_pane

0x8646,	// (0x000436e3) button_value_adjust_pane_cp2

0x4e4a,	// (0x0003fee7) button_value_adjust_pane_cp4

0x4e6e,	// (0x0003ff0b) form_field_data_pane_cp2

0x4e8f,	// (0x0003ff2c) form_field_data_wide_pane_cp2

0x8ab9,	// (0x00043b56) bg_scroll_pane_ParamLimits

0x5f71,	// (0x0004100e) scroll_handle_pane_ParamLimits

0x5f85,	// (0x00041022) scroll_sc2_down_pane_ParamLimits

0x5f85,	// (0x00041022) scroll_sc2_down_pane

0x8aea,	// (0x00043b87) scroll_sc2_up_pane_ParamLimits

0x8aea,	// (0x00043b87) scroll_sc2_up_pane

0xbcb1,	// (0x00046d4e) grid_wheel_folder_pane_g1_ParamLimits

0xbcb1,	// (0x00046d4e) grid_wheel_folder_pane_g1

0x6166,	// (0x00041203) clock_nsta_pane_cp2_ParamLimits

0x6166,	// (0x00041203) clock_nsta_pane_cp2

0x8832,	// (0x000438cf) listscroll_midp_pane_ParamLimits

0x92df,	// (0x0004437c) midp_canvas_pane

0x95c9,	// (0x00044666) nsta_clock_indic_pane

0x95fd,	// (0x0004469a) listscroll_form_pane_vc

0x9605,	// (0x000446a2) listscroll_set_pane_vc_ParamLimits

0x9605,	// (0x000446a2) listscroll_set_pane_vc

0x9706,	// (0x000447a3) clock_nsta_pane

0x977b,	// (0x00044818) indicator_nsta_pane

0x9a59,	// (0x00044af6) bg_popup_sub_pane_cp2_ParamLimits

0x9a6d,	// (0x00044b0a) find_pane_cp2_ParamLimits

0x9a6d,	// (0x00044b0a) find_pane_cp2

0x9a83,	// (0x00044b20) grid_toobar_pane_ParamLimits

0x9b63,	// (0x00044c00) list_form_gen_pane_vc_ParamLimits

0x9b63,	// (0x00044c00) list_form_gen_pane_vc

0x9b79,	// (0x00044c16) scroll_pane_cp8_vc_ParamLimits

0x9b79,	// (0x00044c16) scroll_pane_cp8_vc

0x9bf5,	// (0x00044c92) data_form_wide_pane_vc_ParamLimits

0x9bf5,	// (0x00044c92) data_form_wide_pane_vc

0x9c01,	// (0x00044c9e) form_field_data_wide_pane_vc_g1

0x9c09,	// (0x00044ca6) form_field_data_wide_pane_vc_t1_ParamLimits

0x9c09,	// (0x00044ca6) form_field_data_wide_pane_vc_t1

0x865a,	// (0x000436f7) input_focus_pane_cp6_vc_ParamLimits

0x865a,	// (0x000436f7) input_focus_pane_cp6_vc

0x9f35,	// (0x00044fd2) list_midp_pane_ParamLimits

0x9f41,	// (0x00044fde) scroll_pane_cp16_ParamLimits

0x9f41,	// (0x00044fde) scroll_pane_cp16

0x9f8f,	// (0x0004502c) button_value_adjust_pane_ParamLimits

0x9f8f,	// (0x0004502c) button_value_adjust_pane

0xaf16,	// (0x00045fb3) button_value_adjust_pane_cp6_ParamLimits

0xaf16,	// (0x00045fb3) button_value_adjust_pane_cp6

0xb040,	// (0x000460dd) settings_code_pane_cp_ParamLimits

0xb040,	// (0x000460dd) settings_code_pane_cp

0x7cf8,	// (0x00042d95) cell_touch_pane_g1

0x7cf8,	// (0x00042d95) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0004a7ab) cell_touch_pane_g

0xb5ec,	// (0x00046689) cell_touch_pane_cp_ParamLimits

0xb5ec,	// (0x00046689) cell_touch_pane_cp

0xb5fc,	// (0x00046699) cell_touch_pane_ParamLimits

0xb5fc,	// (0x00046699) cell_touch_pane

0x7cf8,	// (0x00042d95) scroll_sc2_down_pane_g1

0x7cf8,	// (0x00042d95) scroll_sc2_up_pane_g1

0x7d02,	// (0x00042d9f) bg_set_opt_pane_cp4_vc

0xb60e,	// (0x000466ab) list_set_graphic_pane_vc_g1_ParamLimits

0xb60e,	// (0x000466ab) list_set_graphic_pane_vc_g1

0xb61a,	// (0x000466b7) list_set_graphic_pane_vc_g2_ParamLimits

0xb61a,	// (0x000466b7) list_set_graphic_pane_vc_g2

0x0001,

0xfa03,	// (0x0004aaa0) list_set_graphic_pane_vc_g_ParamLimits

0xfa03,	// (0x0004aaa0) list_set_graphic_pane_vc_g

0xb626,	// (0x000466c3) text_primary_small_cp13_vc_ParamLimits

0xb626,	// (0x000466c3) text_primary_small_cp13_vc

0xb63e,	// (0x000466db) list_set_graphic_pane_vc_ParamLimits

0xb63e,	// (0x000466db) list_set_graphic_pane_vc

0x7d02,	// (0x00042d9f) input_focus_pane_cp2_vc

0x7cf8,	// (0x00042d95) setting_code_pane_vc_g1

0x7e2d,	// (0x00042eca) setting_code_pane_vc_t1

0xb650,	// (0x000466ed) set_text_pane_vc_t1_ParamLimits

0xb650,	// (0x000466ed) set_text_pane_vc_t1

0x7d02,	// (0x00042d9f) input_focus_pane_cp1_vc

0xb66c,	// (0x00046709) list_set_text_pane_vc

0x7cf8,	// (0x00042d95) setting_text_pane_vc_g1

0x7d02,	// (0x00042d9f) bg_set_opt_pane_cp2_vc

0x7e24,	// (0x00042ec1) setting_slider_graphic_pane_vc_g1

0xb676,	// (0x00046713) setting_slider_graphic_pane_vc_t1

0xb686,	// (0x00046723) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa08,	// (0x0004aaa5) setting_slider_graphic_pane_vc_t

0xb696,	// (0x00046733) slider_set_pane_cp_vc

0xb69e,	// (0x0004673b) slider_set_pane_vc_g1

0xb6a7,	// (0x00046744) slider_set_pane_vc_g2

0x0006,

0xfa0d,	// (0x0004aaaa) slider_set_pane_vc_g

0x86a9,	// (0x00043746) set_opt_bg_pane_g1_copy1

0x86b1,	// (0x0004374e) set_opt_bg_pane_g2_copy1

0xb6d3,	// (0x00046770) set_opt_bg_pane_g3_copy1

0x86c1,	// (0x0004375e) set_opt_bg_pane_g4_copy1

0x86c9,	// (0x00043766) set_opt_bg_pane_g5_copy1

0x86d1,	// (0x0004376e) set_opt_bg_pane_g6_copy1

0xb6dd,	// (0x0004677a) set_opt_bg_pane_g7_copy1

0xb6e5,	// (0x00046782) set_opt_bg_pane_g8_copy1

0xb6ef,	// (0x0004678c) set_opt_bg_pane_g9_copy1

0x7d02,	// (0x00042d9f) bg_set_opt_pane_cp_vc

0xb6f9,	// (0x00046796) setting_slider_pane_vc_t1

0xb708,	// (0x000467a5) setting_slider_pane_vc_t2

0xb718,	// (0x000467b5) setting_slider_pane_vc_t3

0x0002,

0xfa1c,	// (0x0004aab9) setting_slider_pane_vc_t

0xb728,	// (0x000467c5) slider_set_pane_vc

0x6ae2,	// (0x00041b7f) volume_set_pane_vc_g1

0x6aeb,	// (0x00041b88) volume_set_pane_vc_g2

0x6af4,	// (0x00041b91) volume_set_pane_vc_g3

0x6afd,	// (0x00041b9a) volume_set_pane_vc_g4

0x6b06,	// (0x00041ba3) volume_set_pane_vc_g5

0x6b0f,	// (0x00041bac) volume_set_pane_vc_g6

0x6b18,	// (0x00041bb5) volume_set_pane_vc_g7

0x6b21,	// (0x00041bbe) volume_set_pane_vc_g8

0x6b2a,	// (0x00041bc7) volume_set_pane_vc_g9

0x6b33,	// (0x00041bd0) volume_set_pane_vc_g10

0x0009,

0xf8c1,	// (0x0004a95e) volume_set_pane_vc_g

0xb730,	// (0x000467cd) volume_set_pane_vc

0xb738,	// (0x000467d5) button_value_adjust_pane_cp1_vc

0xb742,	// (0x000467df) list_highlight_pane_cp2_vc

0xb74b,	// (0x000467e8) list_set_pane_vc_ParamLimits

0xb74b,	// (0x000467e8) list_set_pane_vc

0xb7a9,	// (0x00046846) main_pane_set_vc_t1_ParamLimits

0xb7a9,	// (0x00046846) main_pane_set_vc_t1

0xb7be,	// (0x0004685b) main_pane_set_vc_t2_ParamLimits

0xb7be,	// (0x0004685b) main_pane_set_vc_t2

0xb7d0,	// (0x0004686d) main_pane_set_vc_t3_ParamLimits

0xb7d0,	// (0x0004686d) main_pane_set_vc_t3

0xb7e4,	// (0x00046881) main_pane_set_vc_t4_ParamLimits

0xb7e4,	// (0x00046881) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x0004aac0) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x0004aac0) main_pane_set_vc_t

0xb7f8,	// (0x00046895) setting_code_pane_vc_ParamLimits

0xb7f8,	// (0x00046895) setting_code_pane_vc

0xb809,	// (0x000468a6) setting_slider_graphic_pane_vc

0xb809,	// (0x000468a6) setting_slider_pane_vc

0xb809,	// (0x000468a6) setting_text_pane_vc

0xb809,	// (0x000468a6) setting_volume_pane_vc

0xb813,	// (0x000468b0) scroll_pane_cp121_vc

0x8634,	// (0x000436d1) set_content_pane_vc

0xb81b,	// (0x000468b8) button_value_adjust_pane_g1

0xb824,	// (0x000468c1) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x0004ab1a) button_value_adjust_pane_g

0xb82d,	// (0x000468ca) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb82d,	// (0x000468ca) form_field_slider_wide_pane_vc_t1

0xb841,	// (0x000468de) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb841,	// (0x000468de) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x0004ab1f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x0004ab1f) form_field_slider_wide_pane_vc_t

0x805d,	// (0x000430fa) input_focus_pane_cp10_vc_ParamLimits

0x805d,	// (0x000430fa) input_focus_pane_cp10_vc

0xb86f,	// (0x0004690c) slider_cont_pane_cp1_vc_ParamLimits

0xb86f,	// (0x0004690c) slider_cont_pane_cp1_vc

0xb881,	// (0x0004691e) slider_form_pane_g1_cp2

0xb6a7,	// (0x00046744) slider_form_pane_g2_cp2

0xb8ae,	// (0x0004694b) form_field_slider_pane_vc_t3

0xb8bc,	// (0x00046959) form_field_slider_pane_vc_t4

0xb8ca,	// (0x00046967) slider_form_pane_vc_ParamLimits

0xb8ca,	// (0x00046967) slider_form_pane_vc

0xb8d7,	// (0x00046974) form_field_slider_pane_vc_t1_ParamLimits

0xb8d7,	// (0x00046974) form_field_slider_pane_vc_t1

0xb841,	// (0x000468de) form_field_slider_pane_vc_t2_ParamLimits

0xb841,	// (0x000468de) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x0004ab31) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x0004ab31) form_field_slider_pane_vc_t

0x805d,	// (0x000430fa) input_focus_pane_cp9_vc_ParamLimits

0x805d,	// (0x000430fa) input_focus_pane_cp9_vc

0xb8f3,	// (0x00046990) slider_cont_pane_vc_ParamLimits

0xb8f3,	// (0x00046990) slider_cont_pane_vc

0xb907,	// (0x000469a4) list_form_graphic_pane_cp_vc_ParamLimits

0xb907,	// (0x000469a4) list_form_graphic_pane_cp_vc

0x9c01,	// (0x00044c9e) form_field_popup_wide_pane_vc_g1

0xb91c,	// (0x000469b9) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb91c,	// (0x000469b9) form_field_popup_wide_pane_vc_t1

0x865a,	// (0x000436f7) input_focus_pane_cp8_vc_ParamLimits

0x865a,	// (0x000436f7) input_focus_pane_cp8_vc

0xb961,	// (0x000469fe) list_form_wide_pane_vc_ParamLimits

0xb961,	// (0x000469fe) list_form_wide_pane_vc

0xb96d,	// (0x00046a0a) list_form_graphic_pane_vc_g1

0xb975,	// (0x00046a12) list_form_graphic_pane_vc_t1_ParamLimits

0xb975,	// (0x00046a12) list_form_graphic_pane_vc_t1

0x7de2,	// (0x00042e7f) list_highlight_pane_cp5_vc_ParamLimits

0x7de2,	// (0x00042e7f) list_highlight_pane_cp5_vc

0xb991,	// (0x00046a2e) list_form_graphic_pane_vc_ParamLimits

0xb991,	// (0x00046a2e) list_form_graphic_pane_vc

0x9c01,	// (0x00044c9e) form_field_popup_pane_vc_g1

0xb9a7,	// (0x00046a44) form_field_popup_pane_vc_t1_ParamLimits

0xb9a7,	// (0x00046a44) form_field_popup_pane_vc_t1

0x865a,	// (0x000436f7) input_focus_pane_cp7_vc_ParamLimits

0x865a,	// (0x000436f7) input_focus_pane_cp7_vc

0xb9be,	// (0x00046a5b) list_form_pane_vc_ParamLimits

0xb9be,	// (0x00046a5b) list_form_pane_vc

0xb9ca,	// (0x00046a67) data_form_pane_vc_t1_ParamLimits

0xb9ca,	// (0x00046a67) data_form_pane_vc_t1

0x86a9,	// (0x00043746) input_focus_pane_vc_g1

0x86b1,	// (0x0004374e) input_focus_pane_vc_g2

0x86b9,	// (0x00043756) input_focus_pane_vc_g3

0x86c1,	// (0x0004375e) input_focus_pane_vc_g4

0x86c9,	// (0x00043766) input_focus_pane_vc_g5

0x86d1,	// (0x0004376e) input_focus_pane_vc_g6

0x86d9,	// (0x00043776) input_focus_pane_vc_g7

0x86e1,	// (0x0004377e) input_focus_pane_vc_g8

0x86e9,	// (0x00043786) input_focus_pane_vc_g9

0x7cf8,	// (0x00042d95) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0004a734) input_focus_pane_vc_g

0x9bf5,	// (0x00044c92) data_form_pane_vc_ParamLimits

0x9bf5,	// (0x00044c92) data_form_pane_vc

0x9c01,	// (0x00044c9e) form_field_data_pane_vc_g1

0xb9e5,	// (0x00046a82) form_field_data_pane_vc_t1_ParamLimits

0xb9e5,	// (0x00046a82) form_field_data_pane_vc_t1

0x865a,	// (0x000436f7) input_focus_pane_vc_ParamLimits

0x865a,	// (0x000436f7) input_focus_pane_vc

0xb9ff,	// (0x00046a9c) button_value_adjust_pane_cp3_vc

0xba07,	// (0x00046aa4) button_value_adjust_pane_cp5_vc

0xba0f,	// (0x00046aac) form_field_data_pane_vc_ParamLimits

0xba0f,	// (0x00046aac) form_field_data_pane_vc

0xba26,	// (0x00046ac3) form_field_data_pane_vc_cp2

0xba2e,	// (0x00046acb) form_field_data_wide_pane_vc_ParamLimits

0xba2e,	// (0x00046acb) form_field_data_wide_pane_vc

0xba44,	// (0x00046ae1) form_field_data_wide_pane_vc_cp2

0xba4c,	// (0x00046ae9) form_field_popup_pane_vc_ParamLimits

0xba4c,	// (0x00046ae9) form_field_popup_pane_vc

0xba63,	// (0x00046b00) form_field_popup_wide_pane_vc_ParamLimits

0xba63,	// (0x00046b00) form_field_popup_wide_pane_vc

0xba79,	// (0x00046b16) form_field_slider_pane_vc_ParamLimits

0xba79,	// (0x00046b16) form_field_slider_pane_vc

0xba8c,	// (0x00046b29) form_field_slider_wide_pane_vc_ParamLimits

0xba8c,	// (0x00046b29) form_field_slider_wide_pane_vc

0xba9f,	// (0x00046b3c) grid_touch_1_pane_ParamLimits

0xba9f,	// (0x00046b3c) grid_touch_1_pane

0xbaab,	// (0x00046b48) grid_touch_2_pane_ParamLimits

0xbaab,	// (0x00046b48) grid_touch_2_pane

0x9594,	// (0x00044631) touch_pane_g1_ParamLimits

0x9594,	// (0x00044631) touch_pane_g1

0xbac3,	// (0x00046b60) cell_app_pane_cp_wide_ParamLimits

0xbac3,	// (0x00046b60) cell_app_pane_cp_wide

0xbad4,	// (0x00046b71) grid_popup_fast_wide_pane_ParamLimits

0xbad4,	// (0x00046b71) grid_popup_fast_wide_pane

0xbae8,	// (0x00046b85) scroll_pane_cp19_ParamLimits

0xbae8,	// (0x00046b85) scroll_pane_cp19

0x7d02,	// (0x00042d9f) bg_popup_window_pane_cp20

0xbafc,	// (0x00046b99) listscroll_popup_fast_wide_pane

0x7de2,	// (0x00042e7f) grid_indicator_nsta_pane

0xbb04,	// (0x00046ba1) clock_nsta_pane_g1

0xbb0d,	// (0x00046baa) clock_nsta_pane_t1

0xbb29,	// (0x00046bc6) cell_indicator_nsta_pane_ParamLimits

0xbb29,	// (0x00046bc6) cell_indicator_nsta_pane

0xbb61,	// (0x00046bfe) cell_indicator_nsta_pane_g1

0xbb6f,	// (0x00046c0c) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x0004ab42) cell_indicator_nsta_pane_g

0xbb85,	// (0x00046c22) clock_nsta_pane_cp

0xbb8d,	// (0x00046c2a) indicator_nsta_pane_cp

0xbb95,	// (0x00046c32) nsta_clock_indic_pane_g1

0x7eab,	// (0x00042f48) grid_indicator_pane

0x8bdf,	// (0x00043c7c) scroll_pane_cp29

0x60b5,	// (0x00041152) indicator_nsta_pane_cp2_ParamLimits

0x60b5,	// (0x00041152) indicator_nsta_pane_cp2

0x7de2,	// (0x00042e7f) main_apps_wheel_pane

0x9e16,	// (0x00044eb3) form_midp_field_text_pane_ParamLimits

0x9f61,	// (0x00044ffe) scroll_bar_cp050_ParamLimits

0xbbee,	// (0x00046c8b) cell_indicator_pane_ParamLimits

0xbbee,	// (0x00046c8b) cell_indicator_pane

0xbc05,	// (0x00046ca2) cell_indicator_pane_g1

0xbc0f,	// (0x00046cac) grid_wheel_folder_pane_ParamLimits

0xbc0f,	// (0x00046cac) grid_wheel_folder_pane

0xbc25,	// (0x00046cc2) list_wheel_apps_pane_ParamLimits

0xbc25,	// (0x00046cc2) list_wheel_apps_pane

0xbc36,	// (0x00046cd3) main_apps_wheel_pane_g1_ParamLimits

0xbc36,	// (0x00046cd3) main_apps_wheel_pane_g1

0xbc4a,	// (0x00046ce7) main_apps_wheel_pane_g2_ParamLimits

0xbc4a,	// (0x00046ce7) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0004ab5e) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0004ab5e) main_apps_wheel_pane_g

0xbc62,	// (0x00046cff) main_apps_wheel_pane_t1_ParamLimits

0xbc62,	// (0x00046cff) main_apps_wheel_pane_t1

0xbc85,	// (0x00046d22) list_wheel_apps_pane_g1

0xbc8d,	// (0x00046d2a) list_wheel_apps_pane_g2

0xbc95,	// (0x00046d32) list_wheel_apps_pane_g3

0xbc9d,	// (0x00046d3a) list_wheel_apps_pane_g4

0xbca7,	// (0x00046d44) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0004ab63) list_wheel_apps_pane_g

0x9157,	// (0x000441f4) navi_icon_text_pane

0x9639,	// (0x000446d6) aid_fill_nsta

0xbcca,	// (0x00046d67) navi_icon_text_pane_g1

0xbcd6,	// (0x00046d73) navi_icon_text_pane_t1

0x8ff5,	// (0x00044092) list_set_graphic_pane_t1_ParamLimits

0x8ff5,	// (0x00044092) list_set_graphic_pane_t1

0xa6b0,	// (0x0004574d) popup_midp_note_alarm_window_t6_ParamLimits

0xa6b0,	// (0x0004574d) popup_midp_note_alarm_window_t6

0xa6c2,	// (0x0004575f) popup_midp_note_alarm_window_t7_ParamLimits

0xa6c2,	// (0x0004575f) popup_midp_note_alarm_window_t7

0xa6d4,	// (0x00045771) popup_midp_note_alarm_window_t8_ParamLimits

0xa6d4,	// (0x00045771) popup_midp_note_alarm_window_t8

0xa6e6,	// (0x00045783) popup_midp_note_alarm_window_t9_ParamLimits

0xa6e6,	// (0x00045783) popup_midp_note_alarm_window_t9

0xa6f8,	// (0x00045795) popup_midp_note_alarm_window_t10_ParamLimits

0xa6f8,	// (0x00045795) popup_midp_note_alarm_window_t10

0xa70a,	// (0x000457a7) popup_midp_note_alarm_window_t11_ParamLimits

0xa70a,	// (0x000457a7) popup_midp_note_alarm_window_t11

0xa71c,	// (0x000457b9) scroll_pane_cp17_ParamLimits

0xa71c,	// (0x000457b9) scroll_pane_cp17

0x6ae2,	// (0x00041b7f) volume_small_pane_cp_g1

0x6e52,	// (0x00041eef) volume_small_pane_cp_g2

0x6e5b,	// (0x00041ef8) volume_small_pane_cp_g3

0x6e64,	// (0x00041f01) volume_small_pane_cp_g4

0x6e6d,	// (0x00041f0a) volume_small_pane_cp_g5

0x6e76,	// (0x00041f13) volume_small_pane_cp_g6

0x6e7f,	// (0x00041f1c) volume_small_pane_cp_g7

0x6e88,	// (0x00041f25) volume_small_pane_cp_g8

0x6e91,	// (0x00041f2e) volume_small_pane_cp_g9

0x6e9a,	// (0x00041f37) volume_small_pane_cp_g10

0x93a6,	// (0x00044443) midp_ticker_pane_g1_ParamLimits

0x93b2,	// (0x0004444f) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0004a800) midp_ticker_pane_g_ParamLimits

0x93be,	// (0x0004445b) midp_ticker_pane_t1_ParamLimits

0x964f,	// (0x000446ec) aid_fill_nsta_2

0x9f4d,	// (0x00044fea) list_form2_midp_pane

0xb08b,	// (0x00046128) midp_editing_number_pane_ParamLimits

0xb09a,	// (0x00046137) midp_ticker_pane_ParamLimits

0xbce8,	// (0x00046d85) form2_midp_field_pane

0xbd0c,	// (0x00046da9) scroll_pane_cp51

0xbd2c,	// (0x00046dc9) form2_midp_button_pane_ParamLimits

0xbd2c,	// (0x00046dc9) form2_midp_button_pane

0xbd3e,	// (0x00046ddb) form2_midp_content_pane_ParamLimits

0xbd3e,	// (0x00046ddb) form2_midp_content_pane

0xbd58,	// (0x00046df5) form2_midp_field_choice_group_pane

0xbd60,	// (0x00046dfd) form2_midp_field_pane_g1

0xbd68,	// (0x00046e05) form2_midp_field_pane_g2

0xbd70,	// (0x00046e0d) form2_midp_field_pane_g3

0xbd78,	// (0x00046e15) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x0004ab88) form2_midp_field_pane_g

0xbd80,	// (0x00046e1d) form2_midp_gauge_slider_pane

0xbd88,	// (0x00046e25) form2_midp_gauge_wait_pane

0xbd90,	// (0x00046e2d) form2_midp_image_pane_ParamLimits

0xbd90,	// (0x00046e2d) form2_midp_image_pane

0xbdab,	// (0x00046e48) form2_midp_label_pane_ParamLimits

0xbdab,	// (0x00046e48) form2_midp_label_pane

0xbdc4,	// (0x00046e61) form2_midp_label_pane_cp_ParamLimits

0xbdc4,	// (0x00046e61) form2_midp_label_pane_cp

0xbde5,	// (0x00046e82) form2_midp_string_pane_ParamLimits

0xbde5,	// (0x00046e82) form2_midp_string_pane

0x55e4,	// (0x00040681) form2_midp_text_pane_ParamLimits

0x55e4,	// (0x00040681) form2_midp_text_pane

0xbdf7,	// (0x00046e94) form2_midp_time_pane

0xbe07,	// (0x00046ea4) input_focus_pane_cp51_ParamLimits

0xbe07,	// (0x00046ea4) input_focus_pane_cp51

0xbe1f,	// (0x00046ebc) form2_midp_label_pane_t1_ParamLimits

0xbe1f,	// (0x00046ebc) form2_midp_label_pane_t1

0x5603,	// (0x000406a0) form2_mdip_text_pane_t1_ParamLimits

0x5603,	// (0x000406a0) form2_mdip_text_pane_t1

0x5621,	// (0x000406be) form2_midp_time_pane_t1

0xbe68,	// (0x00046f05) form2_midp_gauge_slider_pane_t1

0xbe7a,	// (0x00046f17) form2_midp_gauge_slider_pane_t2

0xbe8c,	// (0x00046f29) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0004ab91) form2_midp_gauge_slider_pane_t

0xbe9e,	// (0x00046f3b) form2_midp_slider_pane

0xbeaa,	// (0x00046f47) form2_midp_gauge_wait_pane_t1

0xbeb8,	// (0x00046f55) form2_midp_wait_pane_ParamLimits

0xbeb8,	// (0x00046f55) form2_midp_wait_pane

0x9c48,	// (0x00044ce5) list_single_2graphic_pane_cp4_ParamLimits

0x9c48,	// (0x00044ce5) list_single_2graphic_pane_cp4

0xbee3,	// (0x00046f80) list_single_midp_graphic_pane_cp_ParamLimits

0xbee3,	// (0x00046f80) list_single_midp_graphic_pane_cp

0x7d02,	// (0x00042d9f) list_highlight_pane_cp20

0xbf12,	// (0x00046faf) list_single_2graphic_pane_g1_cp4

0xbf1a,	// (0x00046fb7) list_single_2graphic_pane_g2_cp4

0xbf22,	// (0x00046fbf) list_single_2graphic_pane_t1_cp4

0x7de2,	// (0x00042e7f) list_highlight_pane_cp21

0xbf31,	// (0x00046fce) list_single_midp_graphic_pane_g4_cp

0xbf40,	// (0x00046fdd) list_single_midp_graphic_pane_t1_cp

0xbf55,	// (0x00046ff2) form2_mdip_string_pane_t1_ParamLimits

0xbf55,	// (0x00046ff2) form2_mdip_string_pane_t1

0x7d02,	// (0x00042d9f) bg_wml_button_pane_cp2

0x7cf8,	// (0x00042d95) form2_midp_image_pane_g1

0x5da7,	// (0x00040e44) list_double_large_graphic_pane_g5_ParamLimits

0x5da7,	// (0x00040e44) list_double_large_graphic_pane_g5

0x8832,	// (0x000438cf) midp_form_pane_ParamLimits

0x7de2,	// (0x00042e7f) main_apps_wheel_pane_ParamLimits

0x6782,	// (0x0004181f) popup_preview_window_ParamLimits

0x6782,	// (0x0004181f) popup_preview_window

0x693d,	// (0x000419da) popup_touch_info_window_ParamLimits

0x693d,	// (0x000419da) popup_touch_info_window

0x695b,	// (0x000419f8) popup_touch_menu_window_ParamLimits

0x695b,	// (0x000419f8) popup_touch_menu_window

0x7cee,	// (0x00042d8b) bg_popup_sub_pane_cp6

0xc04e,	// (0x000470eb) list_touch_menu_pane

0xc056,	// (0x000470f3) list_single_touch_menu_pane_ParamLimits

0xc056,	// (0x000470f3) list_single_touch_menu_pane

0xc06c,	// (0x00047109) list_single_touch_menu_pane_t1

0x7de2,	// (0x00042e7f) bg_popup_sub_pane_cp7_ParamLimits

0x7de2,	// (0x00042e7f) bg_popup_sub_pane_cp7

0xc07a,	// (0x00047117) heading_sub_pane

0xc082,	// (0x0004711f) list_touch_info_pane_ParamLimits

0xc082,	// (0x0004711f) list_touch_info_pane

0xc091,	// (0x0004712e) list_single_touch_info_pane_ParamLimits

0xc091,	// (0x0004712e) list_single_touch_info_pane

0xc0a3,	// (0x00047140) list_single_touch_info_pane_t1

0xc0b1,	// (0x0004714e) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x0004ab9f) list_single_touch_info_pane_t

0x92d7,	// (0x00044374) bg_popup_heading_pane_cp

0xc0bf,	// (0x0004715c) heading_sub_pane_t1

0x9b8f,	// (0x00044c2c) bg_popup_preview_window_pane_cp_ParamLimits

0x9b8f,	// (0x00044c2c) bg_popup_preview_window_pane_cp

0xc07a,	// (0x00047117) heading_preview_pane

0xc082,	// (0x0004711f) list_preview_pane_ParamLimits

0xc082,	// (0x0004711f) list_preview_pane

0xc0cd,	// (0x0004716a) popup_preview_window_g1

0xc091,	// (0x0004712e) list_single_preview_pane_ParamLimits

0xc091,	// (0x0004712e) list_single_preview_pane

0xc0d5,	// (0x00047172) list_single_preview_pane_g1

0xc0dd,	// (0x0004717a) list_single_preview_pane_t1

0xc0a3,	// (0x00047140) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0004aba4) list_single_preview_pane_t

0xc0eb,	// (0x00047188) bg_popup_heading_pane_cp2_ParamLimits

0xc0eb,	// (0x00047188) bg_popup_heading_pane_cp2

0xc101,	// (0x0004719e) heading_preview_pane_g1

0xc109,	// (0x000471a6) heading_preview_pane_t1_ParamLimits

0xc109,	// (0x000471a6) heading_preview_pane_t1

0x7ece,	// (0x00042f6b) soft_indicator_pane_t1_ParamLimits

0x85c1,	// (0x0004365e) scroll_pane_ParamLimits

0x8ad8,	// (0x00043b75) scroll_sc2_left_pane

0x8ae1,	// (0x00043b7e) scroll_sc2_right_pane

0x8b00,	// (0x00043b9d) scroll_bg_pane_g1_ParamLimits

0x8b15,	// (0x00043bb2) scroll_bg_pane_g2_ParamLimits

0x8b2d,	// (0x00043bca) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0004a78b) scroll_bg_pane_g_ParamLimits

0x8b00,	// (0x00043b9d) scroll_handle_pane_g1_ParamLimits

0x8b4f,	// (0x00043bec) scroll_handle_pane_g2_ParamLimits

0x8b2d,	// (0x00043bca) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0004a792) scroll_handle_pane_g_ParamLimits

0x6405,	// (0x000414a2) popup_choice_list_window_ParamLimits

0x6405,	// (0x000414a2) popup_choice_list_window

0x9a65,	// (0x00044b02) choice_list_pane

0x9ae7,	// (0x00044b84) cell_toolbar_pane_t1

0x9b0f,	// (0x00044bac) toolbar_button_pane_ParamLimits

0xabd6,	// (0x00045c73) ai_gene_pane_1_t2_ParamLimits

0xabd6,	// (0x00045c73) ai_gene_pane_1_t2

0x0001,

0xf91d,	// (0x0004a9ba) ai_gene_pane_1_t_ParamLimits

0xf91d,	// (0x0004a9ba) ai_gene_pane_1_t

0xc126,	// (0x000471c3) scroll_sc2_left_pane_g1

0xc126,	// (0x000471c3) scroll_sc2_right_pane_g1

0x9617,	// (0x000446b4) bg_popup_sub_pane_cp10

0xc130,	// (0x000471cd) list_choice_list_pane

0xc149,	// (0x000471e6) list_single_choice_list_pane_ParamLimits

0xc149,	// (0x000471e6) list_single_choice_list_pane

0xc15c,	// (0x000471f9) list_single_choice_list_pane_g1

0x87e2,	// (0x0004387f) list_single_choice_list_pane_t1_ParamLimits

0x87e2,	// (0x0004387f) list_single_choice_list_pane_t1

0xc164,	// (0x00047201) choice_list_pane_g1

0xc16c,	// (0x00047209) choice_list_pane_t1

0x7cee,	// (0x00042d8b) input_focus_pane_cp11

0x89b9,	// (0x00043a56) title_pane_stacon_g2_ParamLimits

0x89b9,	// (0x00043a56) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0004a771) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0004a771) title_pane_stacon_g

0x92d7,	// (0x00044374) cursor_press_pane

0x64b1,	// (0x0004154e) popup_fep_hwr_window_ParamLimits

0x64b1,	// (0x0004154e) popup_fep_hwr_window

0x652b,	// (0x000415c8) popup_fep_vkb_window_ParamLimits

0x652b,	// (0x000415c8) popup_fep_vkb_window

0xc17a,	// (0x00047217) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x0004abcd) fep_vkb_side_pane_g_ParamLimits

0x6edc,	// (0x00041f79) fep_hwr_candidate_pane_ParamLimits

0x6edc,	// (0x00041f79) fep_hwr_candidate_pane

0x6f06,	// (0x00041fa3) fep_hwr_side_pane_ParamLimits

0x6f06,	// (0x00041fa3) fep_hwr_side_pane

0x6f26,	// (0x00041fc3) fep_hwr_top_pane_ParamLimits

0x6f26,	// (0x00041fc3) fep_hwr_top_pane

0x6f3e,	// (0x00041fdb) fep_hwr_write_pane_ParamLimits

0x6f3e,	// (0x00041fdb) fep_hwr_write_pane

0xfb30,	// (0x0004abcd) fep_vkb_side_pane_g

0xc182,	// (0x0004721f) fep_hwr_top_pane_g1

0xc194,	// (0x00047231) fep_hwr_top_pane_g2

0x6f6a,	// (0x00042007) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x0004aba9) fep_hwr_top_pane_g

0x6f7f,	// (0x0004201c) fep_hwr_top_text_pane

0x8ccf,	// (0x00043d6c) fep_hwr_top_text_pane_g1

0xc1ca,	// (0x00047267) fep_hwr_top_text_pane_t1

0x7075,	// (0x00042112) fep_hwr_candidate_pane_g1

0xc41d,	// (0x000474ba) fep_vkb_keypad_pane_g3_ParamLimits

0xc41d,	// (0x000474ba) fep_vkb_keypad_pane_g3

0xc445,	// (0x000474e2) fep_vkb_keypad_pane_g4_ParamLimits

0xc445,	// (0x000474e2) fep_vkb_keypad_pane_g4

0xc4b4,	// (0x00047551) fep_vkb_bottom_pane_g2_ParamLimits

0xc4b4,	// (0x00047551) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x0004abd4) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x0004abd4) fep_vkb_bottom_pane_g

0xc126,	// (0x000471c3) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x0004abde) cell_vkb_side_pane_g

0xc53f,	// (0x000475dc) cell_vkb_side_pane_t1

0xc54d,	// (0x000475ea) cell_vkb_side_pane_t1_copy1

0xc126,	// (0x000471c3) bg_fep_vkb_candidate_pane_g2

0xc679,	// (0x00047716) cell_vkb_candidate_pane_ParamLimits

0xc1d8,	// (0x00047275) aid_size_cell_vkb_ParamLimits

0xc1d8,	// (0x00047275) aid_size_cell_vkb

0xc679,	// (0x00047716) cell_vkb_candidate_pane

0x708f,	// (0x0004212c) bg_popup_fep_shadow_pane_g1

0xc266,	// (0x00047303) fep_vkb_bottom_pane_ParamLimits

0xc266,	// (0x00047303) fep_vkb_bottom_pane

0xc29c,	// (0x00047339) fep_vkb_candidate_pane_ParamLimits

0xc29c,	// (0x00047339) fep_vkb_candidate_pane

0xc2b8,	// (0x00047355) fep_vkb_keypad_pane_ParamLimits

0xc2b8,	// (0x00047355) fep_vkb_keypad_pane

0xc2fe,	// (0x0004739b) fep_vkb_side_pane_ParamLimits

0xc2fe,	// (0x0004739b) fep_vkb_side_pane

0xc33a,	// (0x000473d7) fep_vkb_top_pane_ParamLimits

0xc33a,	// (0x000473d7) fep_vkb_top_pane

0xc376,	// (0x00047413) fep_vkb_top_pane_g1_ParamLimits

0xc376,	// (0x00047413) fep_vkb_top_pane_g1

0xc385,	// (0x00047422) fep_vkb_top_pane_g2_ParamLimits

0xc385,	// (0x00047422) fep_vkb_top_pane_g2

0xc394,	// (0x00047431) fep_vkb_top_pane_g3_ParamLimits

0xc394,	// (0x00047431) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x0004abc4) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x0004abc4) fep_vkb_top_pane_g

0xc3b2,	// (0x0004744f) fep_vkb_top_text_pane_ParamLimits

0xc3b2,	// (0x0004744f) fep_vkb_top_text_pane

0xc3c3,	// (0x00047460) fep_vkb_side_pane_g1_ParamLimits

0xc3c3,	// (0x00047460) fep_vkb_side_pane_g1

0xc40c,	// (0x000474a9) grid_vkb_side_pane_ParamLimits

0xc40c,	// (0x000474a9) grid_vkb_side_pane

0x7097,	// (0x00042134) bg_popup_fep_shadow_pane_g2

0x70a0,	// (0x0004213d) bg_popup_fep_shadow_pane_g3

0x70a8,	// (0x00042145) bg_popup_fep_shadow_pane_g4

0x70b1,	// (0x0004214e) bg_popup_fep_shadow_pane_g5

0x70bb,	// (0x00042158) bg_popup_fep_shadow_pane_g6

0x70c3,	// (0x00042160) bg_popup_fep_shadow_pane_g7

0x86c9,	// (0x00043766) bg_popup_fep_shadow_pane_g8

0xc463,	// (0x00047500) grid_vkb_keypad_number_pane_ParamLimits

0xc463,	// (0x00047500) grid_vkb_keypad_number_pane

0xc473,	// (0x00047510) grid_vkb_keypad_pane_ParamLimits

0xc473,	// (0x00047510) grid_vkb_keypad_pane

0xc499,	// (0x00047536) fep_vkb_bottom_pane_g1_ParamLimits

0xc499,	// (0x00047536) fep_vkb_bottom_pane_g1

0xc4c2,	// (0x0004755f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc4c2,	// (0x0004755f) grid_vkb_keypad_bottom_left_pane

0xc4d7,	// (0x00047574) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc4d7,	// (0x00047574) grid_vkb_keypad_bottom_right_pane

0xc4ec,	// (0x00047589) fep_vkb_top_text_pane_g1

0xc507,	// (0x000475a4) fep_vkb_top_text_pane_t1

0xc51c,	// (0x000475b9) cell_vkb_side_pane_ParamLimits

0xc51c,	// (0x000475b9) cell_vkb_side_pane

0xc126,	// (0x000471c3) cell_vkb_side_pane_g1

0xc55b,	// (0x000475f8) cell_vkb_keypad_pane_ParamLimits

0xc55b,	// (0x000475f8) cell_vkb_keypad_pane

0xc5d0,	// (0x0004766d) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x0004abf1) bg_popup_fep_shadow_pane_g

0xc126,	// (0x000471c3) cell_hwr_side_pane_g1

0xc126,	// (0x000471c3) cell_hwr_side_pane_g2

0xc5da,	// (0x00047677) cell_vkb_keypad_pane_t1

0xc5e8,	// (0x00047685) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5e8,	// (0x00047685) cell_vkb_keypad_bottom_left_pane

0xc605,	// (0x000476a2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc605,	// (0x000476a2) cell_vkb_keypad_bottom_right_pane

0xc126,	// (0x000471c3) cell_vkb_keypad_bottom_left_pane_g1

0xc126,	// (0x000471c3) cell_vkb_keypad_bottom_right_pane_g1

0xc63e,	// (0x000476db) cell_vkb_keypad_number_pane_ParamLimits

0xc63e,	// (0x000476db) cell_vkb_keypad_number_pane

0xc65d,	// (0x000476fa) cell_vkb_keypad_number_pane_g1

0xc667,	// (0x00047704) cell_vkb_keypad_number_pane_g2

0xc670,	// (0x0004770d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x0004abe3) cell_vkb_keypad_number_pane_g

0xc5da,	// (0x00047677) cell_vkb_keypad_number_pane_t1

0xc694,	// (0x00047731) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x0004abde) cell_hwr_side_pane_g

0xc6ad,	// (0x0004774a) cell_hwr_side_pane_t1

0x70d5,	// (0x00042172) cell_hwr_side_pane_t1_copy1

0xc3a4,	// (0x00047441) cell_hwr_candidate_pane_g1

0x70e3,	// (0x00042180) cell_hwr_candidate_pane_t1

0xc126,	// (0x000471c3) cell_vkb_candidate_pane_g2

0xc733,	// (0x000477d0) cell_vkb_candidate_pane_t1

0x6ea3,	// (0x00041f40) bg_popup_fep_shadow_pane_ParamLimits

0x6ea3,	// (0x00041f40) bg_popup_fep_shadow_pane

0x2dfa,	// (0x0003de97) bg_fep_hwr_top_pane_g4

0xc1a6,	// (0x00047243) bg_hwr_side_pane_g1_ParamLimits

0xc1a6,	// (0x00047243) bg_hwr_side_pane_g1

0x6fbb,	// (0x00042058) cell_hwr_side_pane_ParamLimits

0x6fbb,	// (0x00042058) cell_hwr_side_pane

0x6ff6,	// (0x00042093) fep_hwr_write_pane_g1_ParamLimits

0x6ff6,	// (0x00042093) fep_hwr_write_pane_g1

0x7003,	// (0x000420a0) fep_hwr_write_pane_g2_ParamLimits

0x7003,	// (0x000420a0) fep_hwr_write_pane_g2

0x7010,	// (0x000420ad) fep_hwr_write_pane_g3_ParamLimits

0x7010,	// (0x000420ad) fep_hwr_write_pane_g3

0x701e,	// (0x000420bb) fep_hwr_write_pane_g4_ParamLimits

0x701e,	// (0x000420bb) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x0004abb0) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x0004abb0) fep_hwr_write_pane_g

0x2dfa,	// (0x0003de97) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2dfa,	// (0x0003de97) bg_fep_hwr_candidate_pane_g2

0x7033,	// (0x000420d0) cell_hwr_candidate_pane_ParamLimits

0x7033,	// (0x000420d0) cell_hwr_candidate_pane

0x7075,	// (0x00042112) fep_hwr_candidate_pane_g1_ParamLimits

0xc206,	// (0x000472a3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc206,	// (0x000472a3) bg_popup_fep_shadow_pane_cp2

0xc3a4,	// (0x00047441) fep_vkb_top_pane_g4_ParamLimits

0xc3a4,	// (0x00047441) fep_vkb_top_pane_g4

0xc3ea,	// (0x00047487) fep_vkb_side_pane_g2_ParamLimits

0xc3ea,	// (0x00047487) fep_vkb_side_pane_g2

0x4d77,	// (0x0003fe14) list_setting_pane_t4_ParamLimits

0x4d77,	// (0x0003fe14) list_setting_pane_t4

0x4e11,	// (0x0003feae) list_setting_number_pane_t5_ParamLimits

0x4e11,	// (0x0003feae) list_setting_number_pane_t5

0x8d16,	// (0x00043db3) list_double_heading_pane_cp2_ParamLimits

0x8d16,	// (0x00043db3) list_double_heading_pane_cp2

0x85f5,	// (0x00043692) list_double_heading_pane_g1_cp2_ParamLimits

0x85f5,	// (0x00043692) list_double_heading_pane_g1_cp2

0x8668,	// (0x00043705) list_double_heading_pane_g2_cp2_ParamLimits

0x8668,	// (0x00043705) list_double_heading_pane_g2_cp2

0xc741,	// (0x000477de) list_double_heading_pane_t1_cp2_ParamLimits

0xc741,	// (0x000477de) list_double_heading_pane_t1_cp2

0xc757,	// (0x000477f4) list_double_heading_pane_t2_cp2_ParamLimits

0xc757,	// (0x000477f4) list_double_heading_pane_t2_cp2

0x7cd6,	// (0x00042d73) aid_value_unit2

0x5b87,	// (0x00040c24) popup_preview_fixed_window

0x806b,	// (0x00043108) bg_popup_preview_window_pane_cp02

0xc769,	// (0x00047806) list_preview_fixed_pane

0xc7af,	// (0x0004784c) list_empty_pane_fp_ParamLimits

0xc7af,	// (0x0004784c) list_empty_pane_fp

0xc7af,	// (0x0004784c) list_single_cale_day_pane_fp_ParamLimits

0xc7af,	// (0x0004784c) list_single_cale_day_pane_fp

0xc7af,	// (0x0004784c) list_single_graphic_heading_pane_fp_ParamLimits

0xc7af,	// (0x0004784c) list_single_graphic_heading_pane_fp

0xc7af,	// (0x0004784c) list_single_graphic_pane_fp_ParamLimits

0xc7af,	// (0x0004784c) list_single_graphic_pane_fp

0xc7af,	// (0x0004784c) list_single_heading_pane_fp_ParamLimits

0xc7af,	// (0x0004784c) list_single_heading_pane_fp

0xc7af,	// (0x0004784c) list_single_pane_fp_ParamLimits

0xc7af,	// (0x0004784c) list_single_pane_fp

0xc7c4,	// (0x00047861) list_single_pane_fp_g1_ParamLimits

0xc7c4,	// (0x00047861) list_single_pane_fp_g1

0x85f5,	// (0x00043692) list_single_pane_fp_g2_ParamLimits

0x85f5,	// (0x00043692) list_single_pane_fp_g2

0x8668,	// (0x00043705) list_single_pane_fp_g3_ParamLimits

0x8668,	// (0x00043705) list_single_pane_fp_g3

0xc7d0,	// (0x0004786d) list_single_pane_fp_g4_ParamLimits

0xc7d0,	// (0x0004786d) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x0004ac12) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x0004ac12) list_single_pane_fp_g

0x5634,	// (0x000406d1) list_single_pane_fp_t1_ParamLimits

0x5634,	// (0x000406d1) list_single_pane_fp_t1

0x564b,	// (0x000406e8) list_single_graphic_pane_fp_g1_ParamLimits

0x564b,	// (0x000406e8) list_single_graphic_pane_fp_g1

0xc7c4,	// (0x00047861) list_single_graphic_pane_fp_g2_ParamLimits

0xc7c4,	// (0x00047861) list_single_graphic_pane_fp_g2

0x85f5,	// (0x00043692) list_single_graphic_pane_fp_g3_ParamLimits

0x85f5,	// (0x00043692) list_single_graphic_pane_fp_g3

0x8668,	// (0x00043705) list_single_graphic_pane_fp_g4_ParamLimits

0x8668,	// (0x00043705) list_single_graphic_pane_fp_g4

0xc7d0,	// (0x0004786d) list_single_graphic_pane_fp_g5_ParamLimits

0xc7d0,	// (0x0004786d) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004ac1b) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004ac1b) list_single_graphic_pane_fp_g

0x5657,	// (0x000406f4) list_single_graphic_pane_fp_t1_ParamLimits

0x5657,	// (0x000406f4) list_single_graphic_pane_fp_t1

0x564b,	// (0x000406e8) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x564b,	// (0x000406e8) list_single_graphic_heading_pane_fp_g1

0xc7c4,	// (0x00047861) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc7c4,	// (0x00047861) list_single_graphic_heading_pane_fp_g2

0x85f5,	// (0x00043692) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x85f5,	// (0x00043692) list_single_graphic_heading_pane_fp_g3

0x8668,	// (0x00043705) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8668,	// (0x00043705) list_single_graphic_heading_pane_fp_g4

0xc7d0,	// (0x0004786d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc7d0,	// (0x0004786d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004ac1b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004ac1b) list_single_graphic_heading_pane_fp_g

0x566d,	// (0x0004070a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x566d,	// (0x0004070a) list_single_graphic_heading_pane_fp_t1

0x5683,	// (0x00040720) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5683,	// (0x00040720) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0004ac26) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0004ac26) list_single_graphic_heading_pane_fp_t

0x5695,	// (0x00040732) list_single_cale_day_pane_fp_g1_ParamLimits

0x5695,	// (0x00040732) list_single_cale_day_pane_fp_g1

0xc7dc,	// (0x00047879) list_single_cale_day_pane_fp_g2_ParamLimits

0xc7dc,	// (0x00047879) list_single_cale_day_pane_fp_g2

0x7101,	// (0x0004219e) list_single_cale_day_pane_fp_g3_ParamLimits

0x7101,	// (0x0004219e) list_single_cale_day_pane_fp_g3

0x7129,	// (0x000421c6) list_single_cale_day_pane_fp_g4_ParamLimits

0x7129,	// (0x000421c6) list_single_cale_day_pane_fp_g4

0x714d,	// (0x000421ea) list_single_cale_day_pane_fp_g5_ParamLimits

0x714d,	// (0x000421ea) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x0004ac2b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x0004ac2b) list_single_cale_day_pane_fp_g

0x56cd,	// (0x0004076a) list_single_cale_day_pane_fp_t1_ParamLimits

0x56cd,	// (0x0004076a) list_single_cale_day_pane_fp_t1

0x56f3,	// (0x00040790) list_single_cale_day_pane_fp_t2_ParamLimits

0x56f3,	// (0x00040790) list_single_cale_day_pane_fp_t2

0x570c,	// (0x000407a9) list_single_cale_day_pane_fp_t3_ParamLimits

0x570c,	// (0x000407a9) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x0004ac36) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x0004ac36) list_single_cale_day_pane_fp_t

0xc7c4,	// (0x00047861) list_empty_pane_fp_g1_ParamLimits

0xc7c4,	// (0x00047861) list_empty_pane_fp_g1

0x5725,	// (0x000407c2) list_empty_pane_fp_t1

0x5733,	// (0x000407d0) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0004ac3d) list_empty_pane_fp_t

0xc7c4,	// (0x00047861) list_single_heading_pane_fp_g1_ParamLimits

0xc7c4,	// (0x00047861) list_single_heading_pane_fp_g1

0x85f5,	// (0x00043692) list_single_heading_pane_fp_g2_ParamLimits

0x85f5,	// (0x00043692) list_single_heading_pane_fp_g2

0x8668,	// (0x00043705) list_single_heading_pane_fp_g3_ParamLimits

0x8668,	// (0x00043705) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x0004ac42) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x0004ac42) list_single_heading_pane_fp_g

0x5741,	// (0x000407de) list_single_heading_pane_fp_t1_ParamLimits

0x5741,	// (0x000407de) list_single_heading_pane_fp_t1

0x5753,	// (0x000407f0) list_single_heading_pane_fp_t2_ParamLimits

0x5753,	// (0x000407f0) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0004ac49) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0004ac49) list_single_heading_pane_fp_t

0x8850,	// (0x000438ed) aid_size_cell_fast

0x7fdb,	// (0x00043078) soft_indicator_pane_cp1_t1

0x888d,	// (0x0004392a) cell_app_pane_cp2_ParamLimits

0x888d,	// (0x0004392a) cell_app_pane_cp2

0x6ec5,	// (0x00041f62) fep_hwr_candidate_drop_down_list_pane

0x2e08,	// (0x0003dea5) fep_hwr_candidate_pane_g3_ParamLimits

0x2e08,	// (0x0003dea5) fep_hwr_candidate_pane_g3

0x2e15,	// (0x0003deb2) fep_hwr_candidate_pane_g4_ParamLimits

0x2e15,	// (0x0003deb2) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x0004abbd) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x0004abbd) fep_hwr_candidate_pane_g

0xc28b,	// (0x00047328) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc28b,	// (0x00047328) fep_vkb_candidate_drop_down_list_pane

0xc69c,	// (0x00047739) fep_vkb_candidate_pane_g3

0xc6a4,	// (0x00047741) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0004abea) fep_vkb_candidate_pane_g

0xc3a4,	// (0x00047441) cell_hwr_candidate_pane_g1_ParamLimits

0xc6bb,	// (0x00047758) cell_hwr_candidate_pane_g3_ParamLimits

0xc6bb,	// (0x00047758) cell_hwr_candidate_pane_g3

0xc6dc,	// (0x00047779) cell_hwr_candidate_pane_g4_ParamLimits

0xc6dc,	// (0x00047779) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x0004ac04) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x0004ac04) cell_hwr_candidate_pane_g

0xc6fd,	// (0x0004779a) cell_vkb_candidate_pane_g3_ParamLimits

0xc6fd,	// (0x0004779a) cell_vkb_candidate_pane_g3

0xc718,	// (0x000477b5) cell_vkb_candidate_pane_g4_ParamLimits

0xc718,	// (0x000477b5) cell_vkb_candidate_pane_g4

0xc7e8,	// (0x00047885) cell_app_pane_cp2_g1_ParamLimits

0xc7e8,	// (0x00047885) cell_app_pane_cp2_g1

0xc806,	// (0x000478a3) cell_app_pane_cp2_g2_ParamLimits

0xc806,	// (0x000478a3) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0004ac4e) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0004ac4e) cell_app_pane_cp2_g

0xc812,	// (0x000478af) cell_app_pane_cp2_t1_ParamLimits

0xc812,	// (0x000478af) cell_app_pane_cp2_t1

0x865a,	// (0x000436f7) grid_highlight_pane_cp1_ParamLimits

0x865a,	// (0x000436f7) grid_highlight_pane_cp1

0x7171,	// (0x0004220e) cell_hwr_candidate_pane_cp1_ParamLimits

0x7171,	// (0x0004220e) cell_hwr_candidate_pane_cp1

0xc3a4,	// (0x00047441) fep_hwr_candidate_drop_down_list_pane_g1

0xc824,	// (0x000478c1) fep_hwr_candidate_drop_down_list_pane_g2

0xc831,	// (0x000478ce) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0004ac53) fep_hwr_candidate_drop_down_list_pane_g

0x7190,	// (0x0004222d) fep_hwr_candidate_drop_down_list_scroll_pane

0x7199,	// (0x00042236) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7199,	// (0x00042236) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71a6,	// (0x00042243) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71a6,	// (0x00042243) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71b3,	// (0x00042250) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71b3,	// (0x00042250) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc6fd,	// (0x0004779a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6fd,	// (0x0004779a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc718,	// (0x000477b5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc718,	// (0x000477b5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x71c0,	// (0x0004225d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71c0,	// (0x0004225d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x71db,	// (0x00042278) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x71db,	// (0x00042278) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x71f6,	// (0x00042293) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x71f6,	// (0x00042293) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x0004ac5a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x0004ac5a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc83e,	// (0x000478db) cell_vkb_candidate_pane_cp1_ParamLimits

0xc83e,	// (0x000478db) cell_vkb_candidate_pane_cp1

0xc3a4,	// (0x00047441) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc3a4,	// (0x00047441) fep_vkb_candidate_drop_down_list_pane_g1

0xc824,	// (0x000478c1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc824,	// (0x000478c1) fep_vkb_candidate_drop_down_list_pane_g2

0xc831,	// (0x000478ce) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc831,	// (0x000478ce) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0004ac53) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x0004ac53) fep_vkb_candidate_drop_down_list_pane_g

0xc85e,	// (0x000478fb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc85e,	// (0x000478fb) fep_vkb_candidate_drop_down_list_scroll_pane

0xc86b,	// (0x00047908) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc86b,	// (0x00047908) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc878,	// (0x00047915) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc878,	// (0x00047915) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc884,	// (0x00047921) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc884,	// (0x00047921) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc6bb,	// (0x00047758) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6bb,	// (0x00047758) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc6dc,	// (0x00047779) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6dc,	// (0x00047779) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc890,	// (0x0004792d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc890,	// (0x0004792d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8b1,	// (0x0004794e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8b1,	// (0x0004794e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8d2,	// (0x0004796f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8d2,	// (0x0004796f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x0004ac6b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x0004ac6b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7d0c,	// (0x00042da9) title_pane_g1_ParamLimits

0x7d19,	// (0x00042db6) title_pane_g2_ParamLimits

0xf554,	// (0x0004a5f1) title_pane_g_ParamLimits

0x8cbf,	// (0x00043d5c) aid_call2_pane

0x8cc7,	// (0x00043d64) aid_call_pane

0x8ccf,	// (0x00043d6c) popup_clock_analogue_window_g1

0x8ccf,	// (0x00043d6c) popup_clock_analogue_window_g2

0x5f9a,	// (0x00041037) popup_clock_analogue_window_g3

0x5fa3,	// (0x00041040) popup_clock_analogue_window_g4

0x7cf8,	// (0x00042d95) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0004a7a0) popup_clock_analogue_window_g

0x5fab,	// (0x00041048) popup_clock_analogue_window_t1

0x5fb9,	// (0x00041056) clock_digital_number_pane_ParamLimits

0x5fb9,	// (0x00041056) clock_digital_number_pane

0x5fc5,	// (0x00041062) clock_digital_number_pane_cp02_ParamLimits

0x5fc5,	// (0x00041062) clock_digital_number_pane_cp02

0x5fd1,	// (0x0004106e) clock_digital_number_pane_cp03_ParamLimits

0x5fd1,	// (0x0004106e) clock_digital_number_pane_cp03

0x5fdd,	// (0x0004107a) clock_digital_number_pane_cp04_ParamLimits

0x5fdd,	// (0x0004107a) clock_digital_number_pane_cp04

0x5fe9,	// (0x00041086) clock_digital_separator_pane_ParamLimits

0x5fe9,	// (0x00041086) clock_digital_separator_pane

0x5ff5,	// (0x00041092) popup_clock_digital_window_t1_ParamLimits

0x5ff5,	// (0x00041092) popup_clock_digital_window_t1

0x7cf8,	// (0x00042d95) clock_digital_number_pane_g1

0x7cf8,	// (0x00042d95) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0004a7ab) clock_digital_number_pane_g

0x7cf8,	// (0x00042d95) clock_digital_separator_pane_g1

0x7cf8,	// (0x00042d95) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0004a7ab) clock_digital_separator_pane_g

0x9639,	// (0x000446d6) aid_fill_nsta_ParamLimits

0x977b,	// (0x00044818) indicator_nsta_pane_ParamLimits

0x98fa,	// (0x00044997) popup_clock_analogue_window

0x98fa,	// (0x00044997) popup_clock_digital_window

0x7de2,	// (0x00042e7f) grid_indicator_nsta_pane_ParamLimits

0xbb1b,	// (0x00046bb8) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0004ab3d) clock_nsta_pane_t

0x5f5e,	// (0x00040ffb) aid_size_max_handle

0x5f68,	// (0x00041005) aid_size_min_handle

0x92d7,	// (0x00044374) editor_scroll_pane

0xc8ed,	// (0x0004798a) ex_editor_pane

0x87be,	// (0x0004385b) scroll_pane_cp13

0x85ed,	// (0x0004368a) scroll_pane_cp14

0x8cfe,	// (0x00043d9b) scroll_pane_cp36

0x8d2a,	// (0x00043dc7) list_single_graphic_hl_pane_cp2_ParamLimits

0x8d2a,	// (0x00043dc7) list_single_graphic_hl_pane_cp2

0x5312,	// (0x000403af) list_single_graphic_hl_pane_ParamLimits

0x5312,	// (0x000403af) list_single_graphic_hl_pane

0x5769,	// (0x00040806) aid_size_min_hl_cp1

0xc8f5,	// (0x00047992) list_highlight_pane_cp34_ParamLimits

0xc8f5,	// (0x00047992) list_highlight_pane_cp34

0xc906,	// (0x000479a3) list_single_graphic_hl_pane_g1_ParamLimits

0xc906,	// (0x000479a3) list_single_graphic_hl_pane_g1

0x5772,	// (0x0004080f) list_single_graphic_hl_pane_g2_ParamLimits

0x5772,	// (0x0004080f) list_single_graphic_hl_pane_g2

0x5772,	// (0x0004080f) list_single_graphic_hl_pane_g3_ParamLimits

0x5772,	// (0x0004080f) list_single_graphic_hl_pane_g3

0x9248,	// (0x000442e5) list_single_graphic_hl_pane_g4_ParamLimits

0x9248,	// (0x000442e5) list_single_graphic_hl_pane_g4

0x7211,	// (0x000422ae) list_single_graphic_hl_pane_g5_ParamLimits

0x7211,	// (0x000422ae) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x0004ac7c) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x0004ac7c) list_single_graphic_hl_pane_g

0x577e,	// (0x0004081b) list_single_graphic_hl_pane_t1_ParamLimits

0x577e,	// (0x0004081b) list_single_graphic_hl_pane_t1

0xc913,	// (0x000479b0) aid_size_min_hl_cp2

0xc91c,	// (0x000479b9) list_highlight_pane_cp34_cp2_ParamLimits

0xc91c,	// (0x000479b9) list_highlight_pane_cp34_cp2

0xc906,	// (0x000479a3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc906,	// (0x000479a3) list_single_graphic_hl_pane_g1_cp2

0xc929,	// (0x000479c6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc929,	// (0x000479c6) list_single_graphic_hl_pane_g2_cp2

0xc935,	// (0x000479d2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc935,	// (0x000479d2) list_single_graphic_hl_pane_g3_cp2

0xc943,	// (0x000479e0) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc943,	// (0x000479e0) list_single_graphic_hl_pane_g4_cp2

0xc94f,	// (0x000479ec) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc94f,	// (0x000479ec) list_single_graphic_hl_pane_g5_cp2

0x62c5,	// (0x00041362) control_pane_g4_ParamLimits

0x62c5,	// (0x00041362) control_pane_g4

0x9617,	// (0x000446b4) bg_popup_sub_pane_cp10_ParamLimits

0xc130,	// (0x000471cd) list_choice_list_pane_ParamLimits

0xc13f,	// (0x000471dc) scroll_pane_cp23

0x806b,	// (0x00043108) bg_popup_preview_window_pane_cp02_ParamLimits

0xc769,	// (0x00047806) list_preview_fixed_pane_ParamLimits

0xc77f,	// (0x0004781c) list_preview_fixed_pane_cp_ParamLimits

0xc77f,	// (0x0004781c) list_preview_fixed_pane_cp

0xc78b,	// (0x00047828) popup_preview_fixed_window_g1_ParamLimits

0xc78b,	// (0x00047828) popup_preview_fixed_window_g1

0xc797,	// (0x00047834) popup_preview_fixed_window_g2_ParamLimits

0xc797,	// (0x00047834) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x0004ac0b) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x0004ac0b) popup_preview_fixed_window_g

0x5ed2,	// (0x00040f6f) aid_navi_side_left_pane_ParamLimits

0x5ee7,	// (0x00040f84) aid_navi_side_right_pane_ParamLimits

0x5eff,	// (0x00040f9c) navi_icon_pane_stacon_ParamLimits

0x5f13,	// (0x00040fb0) navi_navi_pane_stacon_ParamLimits

0x5eff,	// (0x00040f9c) navi_text_pane_stacon_ParamLimits

0x7cee,	// (0x00042d8b) main_text_info_pane

0xc979,	// (0x00047a16) listscroll_text_info_pane

0xc981,	// (0x00047a1e) list_text_info_pane_ParamLimits

0xc981,	// (0x00047a1e) list_text_info_pane

0xc990,	// (0x00047a2d) scroll_pane_cp24_ParamLimits

0xc990,	// (0x00047a2d) scroll_pane_cp24

0xc9ae,	// (0x00047a4b) list_text_info_pane_t1_ParamLimits

0xc9ae,	// (0x00047a4b) list_text_info_pane_t1

0x6423,	// (0x000414c0) popup_fast_swap2_window_ParamLimits

0x6423,	// (0x000414c0) popup_fast_swap2_window

0xc9df,	// (0x00047a7c) aid_size_cell_fast2

0x7cee,	// (0x00042d8b) bg_popup_window_pane_cp17

0x9f79,	// (0x00045016) heading_pane_cp2

0x82b7,	// (0x00043354) listscroll_fast2_pane

0xc9e9,	// (0x00047a86) grid_fast2_pane

0xc9f3,	// (0x00047a90) listscroll_fast2_pane_g1

0xc9fb,	// (0x00047a98) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x0004ac87) listscroll_fast2_pane_g

0x87be,	// (0x0004385b) scroll_pane_cp26

0xca05,	// (0x00047aa2) cell_fast2_pane_ParamLimits

0xca05,	// (0x00047aa2) cell_fast2_pane

0xca1a,	// (0x00047ab7) cell_fast2_pane_g1

0xca23,	// (0x00047ac0) cell_fast2_pane_g2

0xca2c,	// (0x00047ac9) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x0004ac8c) cell_fast2_pane_g

0x83aa,	// (0x00043447) grid_highlight_pane_cp9

0x83bf,	// (0x0004345c) main_eswt_pane_ParamLimits

0x83bf,	// (0x0004345c) main_eswt_pane

0xc9a5,	// (0x00047a42) list_single_text_info_pane

0xca34,	// (0x00047ad1) eswt_ctrl_button_pane

0xca34,	// (0x00047ad1) eswt_ctrl_canvas_pane

0xca3c,	// (0x00047ad9) eswt_ctrl_combo_pane

0xca34,	// (0x00047ad1) eswt_ctrl_default_pane

0xca34,	// (0x00047ad1) eswt_ctrl_label_pane

0xca44,	// (0x00047ae1) eswt_ctrl_wait_pane

0xca4c,	// (0x00047ae9) eswt_shell_pane

0x7cee,	// (0x00042d8b) listscroll_eswt_app_pane

0xca6c,	// (0x00047b09) popup_eswt_tasktip_window_ParamLimits

0xca6c,	// (0x00047b09) popup_eswt_tasktip_window

0x9b8f,	// (0x00044c2c) bg_popup_window_pane_cp18

0xca7d,	// (0x00047b1a) eswt_control_pane_g1_ParamLimits

0xca7d,	// (0x00047b1a) eswt_control_pane_g1

0xca8a,	// (0x00047b27) eswt_control_pane_g2_ParamLimits

0xca8a,	// (0x00047b27) eswt_control_pane_g2

0xca97,	// (0x00047b34) eswt_control_pane_g3_ParamLimits

0xca97,	// (0x00047b34) eswt_control_pane_g3

0xcaa4,	// (0x00047b41) eswt_control_pane_g4_ParamLimits

0xcaa4,	// (0x00047b41) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x0004ac93) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x0004ac93) eswt_control_pane_g

0x865a,	// (0x000436f7) bg_button_pane_ParamLimits

0x865a,	// (0x000436f7) bg_button_pane

0x83bf,	// (0x0004345c) common_borders_pane_copy2_ParamLimits

0x83bf,	// (0x0004345c) common_borders_pane_copy2

0xcab1,	// (0x00047b4e) control_button_pane_g1_ParamLimits

0xcab1,	// (0x00047b4e) control_button_pane_g1

0xcabd,	// (0x00047b5a) control_button_pane_g2_ParamLimits

0xcabd,	// (0x00047b5a) control_button_pane_g2

0xcac9,	// (0x00047b66) control_button_pane_g3_ParamLimits

0xcac9,	// (0x00047b66) control_button_pane_g3

0x0002,

0xfbff,	// (0x0004ac9c) control_button_pane_g_ParamLimits

0xfbff,	// (0x0004ac9c) control_button_pane_g

0xcadd,	// (0x00047b7a) control_button_pane_t1

0xcaeb,	// (0x00047b88) control_button_pane_t2

0x0001,

0xfc06,	// (0x0004aca3) control_button_pane_t

0x9b1b,	// (0x00044bb8) bg_button_pane_g1

0x9b23,	// (0x00044bc0) bg_button_pane_g2

0x9b2b,	// (0x00044bc8) bg_button_pane_g3

0x9b33,	// (0x00044bd0) bg_button_pane_g4

0x9b3b,	// (0x00044bd8) bg_button_pane_g5

0x9b43,	// (0x00044be0) bg_button_pane_g6

0x9b4b,	// (0x00044be8) bg_button_pane_g7

0x9b53,	// (0x00044bf0) bg_button_pane_g8

0x9b5b,	// (0x00044bf8) bg_button_pane_g9

0x0008,

0xf871,	// (0x0004a90e) bg_button_pane_g

0xc0eb,	// (0x00047188) common_borders_pane_ParamLimits

0xc0eb,	// (0x00047188) common_borders_pane

0xca7d,	// (0x00047b1a) eswt_control_pane_g1_copy1_ParamLimits

0xca7d,	// (0x00047b1a) eswt_control_pane_g1_copy1

0xca8a,	// (0x00047b27) eswt_control_pane_g2_copy1_ParamLimits

0xca8a,	// (0x00047b27) eswt_control_pane_g2_copy1

0xca97,	// (0x00047b34) eswt_control_pane_g3_copy1_ParamLimits

0xca97,	// (0x00047b34) eswt_control_pane_g3_copy1

0xcaa4,	// (0x00047b41) eswt_control_pane_g4_copy1_ParamLimits

0xcaa4,	// (0x00047b41) eswt_control_pane_g4_copy1

0xc126,	// (0x000471c3) bg_eswt_ctrl_canvas_pane_g1

0xc0eb,	// (0x00047188) common_borders_pane_cp2_ParamLimits

0xc0eb,	// (0x00047188) common_borders_pane_cp2

0xc0eb,	// (0x00047188) common_borders_pane_cp3_ParamLimits

0xc0eb,	// (0x00047188) common_borders_pane_cp3

0xcaf9,	// (0x00047b96) separator_horizontal_pane

0xcb01,	// (0x00047b9e) separator_vertical_pane

0xca7d,	// (0x00047b1a) eswt_control_pane_g1_copy2_ParamLimits

0xca7d,	// (0x00047b1a) eswt_control_pane_g1_copy2

0xca8a,	// (0x00047b27) eswt_control_pane_g2_copy2_ParamLimits

0xca8a,	// (0x00047b27) eswt_control_pane_g2_copy2

0xca97,	// (0x00047b34) eswt_control_pane_g3_copy2_ParamLimits

0xca97,	// (0x00047b34) eswt_control_pane_g3_copy2

0xcaa4,	// (0x00047b41) eswt_control_pane_g4_copy2_ParamLimits

0xcaa4,	// (0x00047b41) eswt_control_pane_g4_copy2

0x7cee,	// (0x00042d8b) common_borders_pane_cp4

0xcb0a,	// (0x00047ba7) separator_horizontal_pane_g1

0xcb13,	// (0x00047bb0) separator_horizontal_pane_g2

0xcb1c,	// (0x00047bb9) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x0004aca8) separator_horizontal_pane_g

0xca7d,	// (0x00047b1a) eswt_control_pane_g1_copy3_ParamLimits

0xca7d,	// (0x00047b1a) eswt_control_pane_g1_copy3

0xca8a,	// (0x00047b27) eswt_control_pane_g2_copy3_ParamLimits

0xca8a,	// (0x00047b27) eswt_control_pane_g2_copy3

0xca97,	// (0x00047b34) eswt_control_pane_g3_copy3_ParamLimits

0xca97,	// (0x00047b34) eswt_control_pane_g3_copy3

0xcaa4,	// (0x00047b41) eswt_control_pane_g4_copy3_ParamLimits

0xcaa4,	// (0x00047b41) eswt_control_pane_g4_copy3

0x7cee,	// (0x00042d8b) common_borders_pane_cp5

0xcb25,	// (0x00047bc2) separator_vertical_pane_g1

0xcb2e,	// (0x00047bcb) separator_vertical_pane_g2

0xcb37,	// (0x00047bd4) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x0004acaf) separator_vertical_pane_g

0xca7d,	// (0x00047b1a) eswt_control_pane_g1_copy4_ParamLimits

0xca7d,	// (0x00047b1a) eswt_control_pane_g1_copy4

0xca8a,	// (0x00047b27) eswt_control_pane_g2_copy4_ParamLimits

0xca8a,	// (0x00047b27) eswt_control_pane_g2_copy4

0xca97,	// (0x00047b34) eswt_control_pane_g3_copy4_ParamLimits

0xca97,	// (0x00047b34) eswt_control_pane_g3_copy4

0xcaa4,	// (0x00047b41) eswt_control_pane_g4_copy4_ParamLimits

0xcaa4,	// (0x00047b41) eswt_control_pane_g4_copy4

0xcb40,	// (0x00047bdd) eswt_ctrl_combo_button_pane

0xcb48,	// (0x00047be5) eswt_ctrl_input_pane

0xcb50,	// (0x00047bed) popup_choice_list_window_cp70

0xcb58,	// (0x00047bf5) eswt_ctrl_input_pane_t1

0x7cee,	// (0x00042d8b) input_focus_pane_cp70

0xc0eb,	// (0x00047188) bg_button_pane_cp70_ParamLimits

0xc0eb,	// (0x00047188) bg_button_pane_cp70

0xcb66,	// (0x00047c03) eswt_ctrl_combo_button_pane_g1

0xcb6e,	// (0x00047c0b) wait_bar_pane_cp70

0x9b8f,	// (0x00044c2c) bg_popup_window_pane_cp70_ParamLimits

0x9b8f,	// (0x00044c2c) bg_popup_window_pane_cp70

0xcb76,	// (0x00047c13) popup_eswt_tasktip_window_t1

0xcb8c,	// (0x00047c29) wait_bar_pane_cp71_ParamLimits

0xcb8c,	// (0x00047c29) wait_bar_pane_cp71

0xcb98,	// (0x00047c35) grid_eswt_app_pane

0x8ae1,	// (0x00043b7e) scroll_pane_cp70

0xcba1,	// (0x00047c3e) cell_eswt_app_pane_ParamLimits

0xcba1,	// (0x00047c3e) cell_eswt_app_pane

0xcbd1,	// (0x00047c6e) cell_eswt_app_pane_g1_ParamLimits

0xcbd1,	// (0x00047c6e) cell_eswt_app_pane_g1

0xcc00,	// (0x00047c9d) cell_eswt_app_pane_g2_ParamLimits

0xcc00,	// (0x00047c9d) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x0004acb6) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x0004acb6) cell_eswt_app_pane_g

0xcc29,	// (0x00047cc6) cell_eswt_app_pane_t1_ParamLimits

0xcc29,	// (0x00047cc6) cell_eswt_app_pane_t1

0xcc5b,	// (0x00047cf8) grid_highlight_pane_cp70_ParamLimits

0xcc5b,	// (0x00047cf8) grid_highlight_pane_cp70

0x91ac,	// (0x00044249) set_content_pane_g1

0x9577,	// (0x00044614) status_small_volume_pane

0x7225,	// (0x000422c2) status_small_volume_pane_g1

0x722d,	// (0x000422ca) volume_small2_pane

0x7236,	// (0x000422d3) volume_small2_pane_g1

0x723f,	// (0x000422dc) volume_small2_pane_g2

0x7248,	// (0x000422e5) volume_small2_pane_g3

0x7251,	// (0x000422ee) volume_small2_pane_g4

0x725a,	// (0x000422f7) volume_small2_pane_g5

0x7263,	// (0x00042300) volume_small2_pane_g6

0x726c,	// (0x00042309) volume_small2_pane_g7

0x7275,	// (0x00042312) volume_small2_pane_g8

0x727e,	// (0x0004231b) volume_small2_pane_g9

0x7287,	// (0x00042324) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x0004acbb) volume_small2_pane_g

0xc4ec,	// (0x00047589) fep_vkb_top_text_pane_g1_ParamLimits

0xc507,	// (0x000475a4) fep_vkb_top_text_pane_t1_ParamLimits

0xc7a3,	// (0x00047840) popup_preview_fixed_window_g3_ParamLimits

0xc7a3,	// (0x00047840) popup_preview_fixed_window_g3

0x68d0,	// (0x0004196d) popup_toolbar_trans_pane

0xaef3,	// (0x00045f90) aid_height_set_list_ParamLimits

0xaf04,	// (0x00045fa1) aid_size_parent_ParamLimits

0x9617,	// (0x000446b4) list_highlight_pane_cp2_ParamLimits

0x91ac,	// (0x00044249) set_content_pane_g1_ParamLimits

0x532d,	// (0x000403ca) list_single_image_pane_ParamLimits

0x532d,	// (0x000403ca) list_single_image_pane

0xcc67,	// (0x00047d04) aid_size_cell_image_ParamLimits

0xcc67,	// (0x00047d04) aid_size_cell_image

0xcc74,	// (0x00047d11) grid_single_image_pane_ParamLimits

0xcc74,	// (0x00047d11) grid_single_image_pane

0x9843,	// (0x000448e0) list_single_image_pane_g1_ParamLimits

0x9843,	// (0x000448e0) list_single_image_pane_g1

0xcc80,	// (0x00047d1d) list_single_image_pane_g2_ParamLimits

0xcc80,	// (0x00047d1d) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x0004acd0) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x0004acd0) list_single_image_pane_g

0xcc94,	// (0x00047d31) list_single_image_pane_t1_ParamLimits

0xcc94,	// (0x00047d31) list_single_image_pane_t1

0xccaa,	// (0x00047d47) cell_image_list_pane_ParamLimits

0xccaa,	// (0x00047d47) cell_image_list_pane

0xccbe,	// (0x00047d5b) cell_image_list_pane_g1

0xccc7,	// (0x00047d64) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x0004acd5) cell_image_list_pane_g

0xccd0,	// (0x00047d6d) aid_size_cell_tb_trans_pane

0x865a,	// (0x000436f7) bg_tb_trans_pane

0xcce2,	// (0x00047d7f) grid_tb_trans_pane

0x9b1b,	// (0x00044bb8) bg_tb_trans_pane_g1

0x9b23,	// (0x00044bc0) bg_tb_trans_pane_g2

0x9b2b,	// (0x00044bc8) bg_tb_trans_pane_g3

0x9b33,	// (0x00044bd0) bg_tb_trans_pane_g4

0x9b3b,	// (0x00044bd8) bg_tb_trans_pane_g5

0x9b53,	// (0x00044bf0) bg_tb_trans_pane_g6

0x9b5b,	// (0x00044bf8) bg_tb_trans_pane_g7

0x9b43,	// (0x00044be0) bg_tb_trans_pane_g8

0x9b4b,	// (0x00044be8) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x0004acda) bg_tb_trans_pane_g

0xccf6,	// (0x00047d93) cell_toolbar_trans_pane_ParamLimits

0xccf6,	// (0x00047d93) cell_toolbar_trans_pane

0xc126,	// (0x000471c3) cell_toolbar_trans_pane_g1

0xbcf0,	// (0x00046d8d) list_form2_midp_pane_t1

0xbcfe,	// (0x00046d9b) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0004ab83) list_form2_midp_pane_t

0xbd0c,	// (0x00046da9) scroll_pane_cp51_ParamLimits

0xbec8,	// (0x00046f65) form2_midp_wait_pane_g1

0xbed1,	// (0x00046f6e) form2_midp_wait_pane_g2

0xbeda,	// (0x00046f77) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x0004ab98) form2_midp_wait_pane_g

0x7de2,	// (0x00042e7f) list_highlight_pane_cp21_ParamLimits

0xbf31,	// (0x00046fce) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf40,	// (0x00046fdd) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6ce7,	// (0x00041d84) list_single_2graphic_im_pane_ParamLimits

0x6ce7,	// (0x00041d84) list_single_2graphic_im_pane

0xcd1c,	// (0x00047db9) list_single_2graphic_im_pane_g1_ParamLimits

0xcd1c,	// (0x00047db9) list_single_2graphic_im_pane_g1

0xcd2d,	// (0x00047dca) list_single_2graphic_im_pane_g2_ParamLimits

0xcd2d,	// (0x00047dca) list_single_2graphic_im_pane_g2

0xcd39,	// (0x00047dd6) list_single_2graphic_im_pane_g3_ParamLimits

0xcd39,	// (0x00047dd6) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x0004aced) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x0004aced) list_single_2graphic_im_pane_g

0xcd59,	// (0x00047df6) list_single_2graphic_im_pane_t1_ParamLimits

0xcd59,	// (0x00047df6) list_single_2graphic_im_pane_t1

0xc7af,	// (0x0004784c) list_single_graphic_2heading_pane_fp_ParamLimits

0xc7af,	// (0x0004784c) list_single_graphic_2heading_pane_fp

0x564b,	// (0x000406e8) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x564b,	// (0x000406e8) list_single_graphic_2heading_pane_fp_g1

0xc7c4,	// (0x00047861) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc7c4,	// (0x00047861) list_single_graphic_2heading_pane_fp_g2

0x85f5,	// (0x00043692) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x85f5,	// (0x00043692) list_single_graphic_2heading_pane_fp_g3

0x8668,	// (0x00043705) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8668,	// (0x00043705) list_single_graphic_2heading_pane_fp_g4

0xc7d0,	// (0x0004786d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc7d0,	// (0x0004786d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004ac1b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004ac1b) list_single_graphic_2heading_pane_fp_g

0x5794,	// (0x00040831) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5794,	// (0x00040831) list_single_graphic_2heading_pane_fp_t1

0x5683,	// (0x00040720) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5683,	// (0x00040720) list_single_graphic_2heading_pane_fp_t2

0x57aa,	// (0x00040847) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x57aa,	// (0x00040847) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x0004acf6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x0004acf6) list_single_graphic_2heading_pane_fp_t

0xc1b2,	// (0x0004724f) fep_hwr_write_pane_g5_ParamLimits

0xc1b2,	// (0x0004724f) fep_hwr_write_pane_g5

0xc1be,	// (0x0004725b) fep_hwr_write_pane_g6_ParamLimits

0xc1be,	// (0x0004725b) fep_hwr_write_pane_g6

0xca4c,	// (0x00047ae9) eswt_shell_pane_ParamLimits

0x9b8f,	// (0x00044c2c) bg_popup_window_pane_cp18_ParamLimits

0xae4c,	// (0x00045ee9) heading_pane_cp70

0xcb76,	// (0x00047c13) popup_eswt_tasktip_window_t1_ParamLimits

0x968e,	// (0x0004472b) aid_touch_tab_arrow_left

0x969a,	// (0x00044737) aid_touch_tab_arrow_right

0x7d2a,	// (0x00042dc7) title_pane_g3_ParamLimits

0x7d2a,	// (0x00042dc7) title_pane_g3

0x8619,	// (0x000436b6) set_value_pane_g1

0x68d0,	// (0x0004196d) popup_toolbar_trans_pane_ParamLimits

0xccd0,	// (0x00047d6d) aid_size_cell_tb_trans_pane_ParamLimits

0x865a,	// (0x000436f7) bg_tb_trans_pane_ParamLimits

0xcce2,	// (0x00047d7f) grid_tb_trans_pane_ParamLimits

0x806b,	// (0x00043108) cont_note_pane_ParamLimits

0x806b,	// (0x00043108) cont_note_pane

0x83bf,	// (0x0004345c) cont_snote2_single_text_pane_ParamLimits

0x83bf,	// (0x0004345c) cont_snote2_single_text_pane

0x83bf,	// (0x0004345c) cont_snote2_single_graphic_pane_ParamLimits

0x83bf,	// (0x0004345c) cont_snote2_single_graphic_pane

0xa194,	// (0x00045231) cont_note_wait_pane_ParamLimits

0xa194,	// (0x00045231) cont_note_wait_pane

0xa194,	// (0x00045231) cont_note_image_pane_ParamLimits

0xa194,	// (0x00045231) cont_note_image_pane

0xcd8a,	// (0x00047e27) popup_note2_window_g1_ParamLimits

0xcd8a,	// (0x00047e27) popup_note2_window_g1

0xcdbb,	// (0x00047e58) popup_note2_window_t1_ParamLimits

0xcdbb,	// (0x00047e58) popup_note2_window_t1

0xce00,	// (0x00047e9d) popup_note2_window_t2_ParamLimits

0xce00,	// (0x00047e9d) popup_note2_window_t2

0xce45,	// (0x00047ee2) popup_note2_window_t3_ParamLimits

0xce45,	// (0x00047ee2) popup_note2_window_t3

0xce8a,	// (0x00047f27) popup_note2_window_t4_ParamLimits

0xce8a,	// (0x00047f27) popup_note2_window_t4

0x80ef,	// (0x0004318c) popup_note2_window_t5_ParamLimits

0x80ef,	// (0x0004318c) popup_note2_window_t5

0x0004,

0xfc65,	// (0x0004ad02) popup_note2_window_t_ParamLimits

0xfc65,	// (0x0004ad02) popup_note2_window_t

0xceb9,	// (0x00047f56) popup_note2_image_window_g1_ParamLimits

0xceb9,	// (0x00047f56) popup_note2_image_window_g1

0xcec5,	// (0x00047f62) popup_note2_image_window_g2_ParamLimits

0xcec5,	// (0x00047f62) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x0004ad0d) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x0004ad0d) popup_note2_image_window_g

0xced7,	// (0x00047f74) popup_note2_image_window_t1_ParamLimits

0xced7,	// (0x00047f74) popup_note2_image_window_t1

0xceef,	// (0x00047f8c) popup_note2_image_window_t2_ParamLimits

0xceef,	// (0x00047f8c) popup_note2_image_window_t2

0xcf07,	// (0x00047fa4) popup_note2_image_window_t3_ParamLimits

0xcf07,	// (0x00047fa4) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x0004ad12) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x0004ad12) popup_note2_image_window_t

0xa1a2,	// (0x0004523f) popup_note2_wait_window_g1_ParamLimits

0xa1a2,	// (0x0004523f) popup_note2_wait_window_g1

0xcf23,	// (0x00047fc0) popup_note2_wait_window_g2_ParamLimits

0xcf23,	// (0x00047fc0) popup_note2_wait_window_g2

0xa1ba,	// (0x00045257) popup_note2_wait_window_g3_ParamLimits

0xa1ba,	// (0x00045257) popup_note2_wait_window_g3

0x0002,

0xfc7c,	// (0x0004ad19) popup_note2_wait_window_g_ParamLimits

0xfc7c,	// (0x0004ad19) popup_note2_wait_window_g

0xcf2f,	// (0x00047fcc) popup_note2_wait_window_t1_ParamLimits

0xcf2f,	// (0x00047fcc) popup_note2_wait_window_t1

0xcf4d,	// (0x00047fea) popup_note2_wait_window_t2_ParamLimits

0xcf4d,	// (0x00047fea) popup_note2_wait_window_t2

0xcf6b,	// (0x00048008) popup_note2_wait_window_t3_ParamLimits

0xcf6b,	// (0x00048008) popup_note2_wait_window_t3

0xcf7d,	// (0x0004801a) popup_note2_wait_window_t4_ParamLimits

0xcf7d,	// (0x0004801a) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x0004ad20) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x0004ad20) popup_note2_wait_window_t

0xcf8f,	// (0x0004802c) wait_bar2_pane_ParamLimits

0xcf8f,	// (0x0004802c) wait_bar2_pane

0xcfa7,	// (0x00048044) popup_snote2_single_text_window_g1_ParamLimits

0xcfa7,	// (0x00048044) popup_snote2_single_text_window_g1

0xcfcf,	// (0x0004806c) popup_snote2_single_text_window_t1_ParamLimits

0xcfcf,	// (0x0004806c) popup_snote2_single_text_window_t1

0xd01b,	// (0x000480b8) popup_snote2_single_text_window_t2_ParamLimits

0xd01b,	// (0x000480b8) popup_snote2_single_text_window_t2

0xd067,	// (0x00048104) popup_snote2_single_text_window_t3_ParamLimits

0xd067,	// (0x00048104) popup_snote2_single_text_window_t3

0xd0a8,	// (0x00048145) popup_snote2_single_text_window_t4_ParamLimits

0xd0a8,	// (0x00048145) popup_snote2_single_text_window_t4

0xd0de,	// (0x0004817b) popup_snote2_single_text_window_t5_ParamLimits

0xd0de,	// (0x0004817b) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x0004ad29) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x0004ad29) popup_snote2_single_text_window_t

0xd109,	// (0x000481a6) popup_snote2_single_graphic_window_g1_ParamLimits

0xd109,	// (0x000481a6) popup_snote2_single_graphic_window_g1

0xd131,	// (0x000481ce) popup_snote2_single_graphic_window_g2_ParamLimits

0xd131,	// (0x000481ce) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x0004ad34) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x0004ad34) popup_snote2_single_graphic_window_g

0xd159,	// (0x000481f6) popup_snote2_single_graphic_window_t1_ParamLimits

0xd159,	// (0x000481f6) popup_snote2_single_graphic_window_t1

0xd1a5,	// (0x00048242) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1a5,	// (0x00048242) popup_snote2_single_graphic_window_t2

0xd067,	// (0x00048104) popup_snote2_single_graphic_window_t3_ParamLimits

0xd067,	// (0x00048104) popup_snote2_single_graphic_window_t3

0xd0a8,	// (0x00048145) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0a8,	// (0x00048145) popup_snote2_single_graphic_window_t4

0xd0de,	// (0x0004817b) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0de,	// (0x0004817b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x0004ad39) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x0004ad39) popup_snote2_single_graphic_window_t

0xbbcd,	// (0x00046c6a) clock_nsta_pane_cp2_t1

0xbbcd,	// (0x00046c6a) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0004ab59) clock_nsta_pane_cp2_t

0x4f31,	// (0x0003ffce) form_field_data_wide_pane_g1_ParamLimits

0x85f5,	// (0x00043692) form_field_data_wide_pane_g2_ParamLimits

0x85f5,	// (0x00043692) form_field_data_wide_pane_g2

0x8668,	// (0x00043705) form_field_data_wide_pane_g3_ParamLimits

0x8668,	// (0x00043705) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0004a723) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0004a723) form_field_data_wide_pane_g

0xbab7,	// (0x00046b54) grid_touch_3_pane_ParamLimits

0xbab7,	// (0x00046b54) grid_touch_3_pane

0xd1f1,	// (0x0004828e) cell_touch_3_pane_ParamLimits

0xd1f1,	// (0x0004828e) cell_touch_3_pane

0xc126,	// (0x000471c3) cell_touch_3_pane_g1

0xc126,	// (0x000471c3) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x0004abde) cell_touch_3_pane_g

0x8121,	// (0x000431be) cont_query_data_pane

0x8129,	// (0x000431c6) cont_query_data_pane_cp1

0xd21f,	// (0x000482bc) button_value_adjust_pane_cp7

0xd227,	// (0x000482c4) query_popup_pane_cp3

0x8dbf,	// (0x00043e5c) bg_popup_sub_pane_cp22_ParamLimits

0x6014,	// (0x000410b1) navi_navi_volume_pane_cp2

0x602f,	// (0x000410cc) popup_side_volume_key_window_g2

0x603e,	// (0x000410db) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0004a7b9) popup_side_volume_key_window_g

0x605b,	// (0x000410f8) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0004a7c0) popup_side_volume_key_window_t

0x9076,	// (0x00044113) popup_side_volume_key_window_ParamLimits

0x4b6f,	// (0x0003fc0c) list_double_graphic_pane_g4_ParamLimits

0x4b6f,	// (0x0003fc0c) list_double_graphic_pane_g4

0x6d24,	// (0x00041dc1) list_single_2heading_msg_pane_ParamLimits

0x6d24,	// (0x00041dc1) list_single_2heading_msg_pane

0x7290,	// (0x0004232d) list_single_2heading_msg_pane_g1_ParamLimits

0x7290,	// (0x0004232d) list_single_2heading_msg_pane_g1

0x9210,	// (0x000442ad) list_single_2heading_msg_pane_g2_ParamLimits

0x9210,	// (0x000442ad) list_single_2heading_msg_pane_g2

0x6e2b,	// (0x00041ec8) list_single_2heading_msg_pane_g3_ParamLimits

0x6e2b,	// (0x00041ec8) list_single_2heading_msg_pane_g3

0x729c,	// (0x00042339) list_single_2heading_msg_pane_g4_ParamLimits

0x729c,	// (0x00042339) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x0004ad44) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x0004ad44) list_single_2heading_msg_pane_g

0x57ca,	// (0x00040867) list_single_2heading_msg_pane_t1_ParamLimits

0x57ca,	// (0x00040867) list_single_2heading_msg_pane_t1

0x57f2,	// (0x0004088f) list_single_2heading_msg_pane_t2_ParamLimits

0x57f2,	// (0x0004088f) list_single_2heading_msg_pane_t2

0x5826,	// (0x000408c3) list_single_2heading_msg_pane_t3_ParamLimits

0x5826,	// (0x000408c3) list_single_2heading_msg_pane_t3

0x585f,	// (0x000408fc) list_single_2heading_msg_pane_t4_ParamLimits

0x585f,	// (0x000408fc) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x0004ad4d) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x0004ad4d) list_single_2heading_msg_pane_t

0x7d36,	// (0x00042dd3) title_pane_g4_ParamLimits

0x7d36,	// (0x00042dd3) title_pane_g4

0x5e23,	// (0x00040ec0) title_pane_stacon_g3_ParamLimits

0x5e23,	// (0x00040ec0) title_pane_stacon_g3

0xcd4d,	// (0x00047dea) list_single_2graphic_im_pane_g4_ParamLimits

0xcd4d,	// (0x00047dea) list_single_2graphic_im_pane_g4

0xabf3,	// (0x00045c90) popup_side_volume_key_window_cp

0xb405,	// (0x000464a2) main_idle_act2_pane_t1

0x69ce,	// (0x00041a6b) toolbar_button_pane_g10

0x85b7,	// (0x00043654) popup_toolbar_window_cp1

0xbbbe,	// (0x00046c5b) clock_nsta_pane_cp_t1

0xbbbe,	// (0x00046c5b) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0004ab54) clock_nsta_pane_cp_t

0x6014,	// (0x000410b1) navi_navi_volume_pane_cp2_ParamLimits

0x6023,	// (0x000410c0) popup_side_volume_key_window_g1_ParamLimits

0x602f,	// (0x000410cc) popup_side_volume_key_window_g2_ParamLimits

0x603e,	// (0x000410db) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0004a7b9) popup_side_volume_key_window_g_ParamLimits

0x6eb1,	// (0x00041f4e) fep_hwr_aid_pane

0x2dfa,	// (0x0003de97) bg_fep_hwr_top_pane_g4_ParamLimits

0xc182,	// (0x0004721f) fep_hwr_top_pane_g1_ParamLimits

0xc194,	// (0x00047231) fep_hwr_top_pane_g2_ParamLimits

0x6f6a,	// (0x00042007) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x0004aba9) fep_hwr_top_pane_g_ParamLimits

0x6f7f,	// (0x0004201c) fep_hwr_top_text_pane_ParamLimits

0xa9b6,	// (0x00045a53) aid_touch_tab_arrow_arrow_2

0xa9bf,	// (0x00045a5c) aid_touch_tab_arrow_left_2

0x6ec5,	// (0x00041f62) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6efc,	// (0x00041f99) fep_hwr_prediction_pane

0xc2f4,	// (0x00047391) fep_vkb_prediction_pane

0xc3f8,	// (0x00047495) fep_vkb_side_pane_g3_ParamLimits

0xc3f8,	// (0x00047495) fep_vkb_side_pane_g3

0xc3a4,	// (0x00047441) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc824,	// (0x000478c1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc831,	// (0x000478ce) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x0004ac53) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd24c,	// (0x000482e9) fep_hwr_prediction_pane_g1

0x72b4,	// (0x00042351) fep_hwr_prediction_pane_g2

0x72bc,	// (0x00042359) fep_hwr_prediction_pane_g3

0x72c4,	// (0x00042361) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0004ad56) fep_hwr_prediction_pane_g

0xd24c,	// (0x000482e9) fep_vkb_prediction_pane_g1

0xd256,	// (0x000482f3) fep_vkb_prediction_pane_g2

0xd25e,	// (0x000482fb) fep_vkb_prediction_pane_g3

0xd266,	// (0x00048303) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0004ad5f) fep_vkb_prediction_pane_g

0xb376,	// (0x00046413) slider_set_pane_g3

0xb38a,	// (0x00046427) slider_set_pane_g4

0xb3a2,	// (0x0004643f) slider_set_pane_g5

0xb376,	// (0x00046413) slider_set_pane_g6

0x6cb6,	// (0x00041d53) slider_set_pane_g7

0xb069,	// (0x00046106) slider_form_pane_g3

0xb072,	// (0x0004610f) slider_form_pane_g4

0xb07a,	// (0x00046117) slider_form_pane_g5

0xb069,	// (0x00046106) slider_form_pane_g6

0xb082,	// (0x0004611f) slider_form_pane_g7

0xb6af,	// (0x0004674c) slider_set_pane_vc_g3

0xb6b8,	// (0x00046755) slider_set_pane_vc_g4

0xb6c1,	// (0x0004675e) slider_set_pane_vc_g5

0xb6af,	// (0x0004674c) slider_set_pane_vc_g6

0xb6ca,	// (0x00046767) slider_set_pane_vc_g7

0xb88a,	// (0x00046927) slider_form_pane_vc_g1

0xb893,	// (0x00046930) slider_form_pane_vc_g2

0xb89c,	// (0x00046939) slider_form_pane_vc_g3

0xb88a,	// (0x00046927) slider_form_pane_vc_g4

0xb8a5,	// (0x00046942) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x0004ab26) slider_form_pane_vc_g

0x7cee,	// (0x00042d8b) main_idle_act3_pane

0xd26e,	// (0x0004830b) ai3_links_pane

0xd277,	// (0x00048314) popup_ai3_data_window_ParamLimits

0xd277,	// (0x00048314) popup_ai3_data_window

0x7cee,	// (0x00042d8b) grid_ai3_links_pane

0xd291,	// (0x0004832e) cell_ai3_links_pane_ParamLimits

0xd291,	// (0x0004832e) cell_ai3_links_pane

0xd2a9,	// (0x00048346) bg_popup_sub_pane_cp11

0xd2b6,	// (0x00048353) cell_ai3_links_pane_g1

0x7cee,	// (0x00042d8b) bg_popup_sub_pane_cp12

0xd2db,	// (0x00048378) heading_ai3_data_pane

0xd2e3,	// (0x00048380) list_ai3_gene_pane

0xd2ef,	// (0x0004838c) popup_ai3_data_window_g1

0xd2f7,	// (0x00048394) heading_ai3_data_pane_g1

0xd2ff,	// (0x0004839c) heading_ai3_data_pane_t1

0xd30d,	// (0x000483aa) list_double_ai3_gene_pane_ParamLimits

0xd30d,	// (0x000483aa) list_double_ai3_gene_pane

0xd31a,	// (0x000483b7) list_single_ai3_gene_pane_ParamLimits

0xd31a,	// (0x000483b7) list_single_ai3_gene_pane

0xc0eb,	// (0x00047188) list_highlight_pane_cp7_ParamLimits

0xc0eb,	// (0x00047188) list_highlight_pane_cp7

0xd327,	// (0x000483c4) list_single_a13_gene_pane_t1_ParamLimits

0xd327,	// (0x000483c4) list_single_a13_gene_pane_t1

0xd33e,	// (0x000483db) list_single_ai3_gene_pane_g1

0xd347,	// (0x000483e4) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x0004ad68) list_single_ai3_gene_pane_g

0xd34f,	// (0x000483ec) list_double_ai3_gene_pane_g1_ParamLimits

0xd34f,	// (0x000483ec) list_double_ai3_gene_pane_g1

0xd35b,	// (0x000483f8) list_double_ai3_gene_pane_t1_ParamLimits

0xd35b,	// (0x000483f8) list_double_ai3_gene_pane_t1

0xd377,	// (0x00048414) list_double_ai3_gene_pane_t2_ParamLimits

0xd377,	// (0x00048414) list_double_ai3_gene_pane_t2

0xd38d,	// (0x0004842a) list_double_ai3_gene_pane_t3_ParamLimits

0xd38d,	// (0x0004842a) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x0004ad6d) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x0004ad6d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x57c0,	// (0x0004085d) aid_size_min_col_2

0xd238,	// (0x000482d5) aid_size_min_msg_ParamLimits

0xd238,	// (0x000482d5) aid_size_min_msg

0xc4f8,	// (0x00047595) fep_vkb_top_text_pane_g2_ParamLimits

0xc4f8,	// (0x00047595) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x0004abd9) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x0004abd9) fep_vkb_top_text_pane_g

0x7cee,	// (0x00042d8b) main_hc_apps_shell_pane

0xd3aa,	// (0x00048447) grid_hc_apps_pane_ParamLimits

0xd3aa,	// (0x00048447) grid_hc_apps_pane

0xd3b9,	// (0x00048456) list_hc_apps_pane

0xd3c1,	// (0x0004845e) scroll_pane_cp37_ParamLimits

0xd3c1,	// (0x0004845e) scroll_pane_cp37

0xd3cd,	// (0x0004846a) cell_hc_apps_pane_ParamLimits

0xd3cd,	// (0x0004846a) cell_hc_apps_pane

0xd47b,	// (0x00048518) cell_hc_apps_pane_g1_ParamLimits

0xd47b,	// (0x00048518) cell_hc_apps_pane_g1

0xd4ac,	// (0x00048549) cell_hc_apps_pane_g2_ParamLimits

0xd4ac,	// (0x00048549) cell_hc_apps_pane_g2

0xd4c8,	// (0x00048565) cell_hc_apps_pane_g3_ParamLimits

0xd4c8,	// (0x00048565) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x0004ad74) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x0004ad74) cell_hc_apps_pane_g

0xd4ea,	// (0x00048587) cell_hc_apps_pane_t1_ParamLimits

0xd4ea,	// (0x00048587) cell_hc_apps_pane_t1

0x806b,	// (0x00043108) grid_highlight_pane_cp10_ParamLimits

0x806b,	// (0x00043108) grid_highlight_pane_cp10

0xd52a,	// (0x000485c7) list_single_hc_apps_pane_ParamLimits

0xd52a,	// (0x000485c7) list_single_hc_apps_pane

0xd586,	// (0x00048623) list_single_hc_apps_pane_g1

0x72cc,	// (0x00042369) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x0004ad7b) list_single_hc_apps_pane_g

0x72e5,	// (0x00042382) list_single_hc_apps_pane_g2_copy1

0x5884,	// (0x00040921) list_single_hc_apps_pane_t1

0x7de2,	// (0x00042e7f) bg_set_opt_pane_cp_ParamLimits

0x5c9f,	// (0x00040d3c) setting_slider_pane_t1_ParamLimits

0x5cb8,	// (0x00040d55) setting_slider_pane_t2_ParamLimits

0x5cd2,	// (0x00040d6f) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0004a601) setting_slider_pane_t_ParamLimits

0x5cea,	// (0x00040d87) slider_set_pane_ParamLimits

0x62d9,	// (0x00041376) control_pane_g5_ParamLimits

0x62d9,	// (0x00041376) control_pane_g5

0xaeb8,	// (0x00045f55) slider_set_pane_g1_ParamLimits

0x6caa,	// (0x00041d47) slider_set_pane_g2_ParamLimits

0xb376,	// (0x00046413) slider_set_pane_g3_ParamLimits

0xb38a,	// (0x00046427) slider_set_pane_g4_ParamLimits

0xb3a2,	// (0x0004643f) slider_set_pane_g5_ParamLimits

0xb376,	// (0x00046413) slider_set_pane_g6_ParamLimits

0x6cb6,	// (0x00041d53) slider_set_pane_g7_ParamLimits

0xf96f,	// (0x0004aa0c) slider_set_pane_g_ParamLimits

0x9157,	// (0x000441f4) navi_icon_text_pane_ParamLimits

0x964f,	// (0x000446ec) aid_fill_nsta_2_ParamLimits

0x968e,	// (0x0004472b) aid_touch_tab_arrow_left_ParamLimits

0x969a,	// (0x00044737) aid_touch_tab_arrow_right_ParamLimits

0x9706,	// (0x000447a3) clock_nsta_pane_ParamLimits

0xa998,	// (0x00045a35) navi_icon_pane_g1_ParamLimits

0xa9a4,	// (0x00045a41) navi_text_pane_t1_ParamLimits

0xbcca,	// (0x00046d67) navi_icon_text_pane_g1_ParamLimits

0xbcd6,	// (0x00046d73) navi_icon_text_pane_t1_ParamLimits

0xd586,	// (0x00048623) list_single_hc_apps_pane_g1_ParamLimits

0x72cc,	// (0x00042369) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x0004ad7b) list_single_hc_apps_pane_g_ParamLimits

0x72e5,	// (0x00042382) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5884,	// (0x00040921) list_single_hc_apps_pane_t1_ParamLimits

0x5bb3,	// (0x00040c50) popup_toolbar2_fixed_window_ParamLimits

0x5bb3,	// (0x00040c50) popup_toolbar2_fixed_window

0x68c6,	// (0x00041963) popup_toolbar2_float_window

0x7cee,	// (0x00042d8b) bg_popup_sub_pane_cp27

0xd59f,	// (0x0004863c) grid_toolbar2_float_pane

0x7cee,	// (0x00042d8b) bg_popup_sub_pane_cp26

0xd59f,	// (0x0004863c) grid_toolbar2_fixed_pane

0xd5a7,	// (0x00048644) cell_toolbar2_fixed_pane_ParamLimits

0xd5a7,	// (0x00048644) cell_toolbar2_fixed_pane

0xd5b7,	// (0x00048654) cell_toolbar2_fixed_pane_g1

0xd5c0,	// (0x0004865d) toolbar2_fixed_button_pane

0x9b1b,	// (0x00044bb8) toolbar2_fixed_button_pane_g1

0x9b23,	// (0x00044bc0) toolbar2_fixed_button_pane_g2

0x9b2b,	// (0x00044bc8) toolbar2_fixed_button_pane_g3

0x9b33,	// (0x00044bd0) toolbar2_fixed_button_pane_g4

0x9b3b,	// (0x00044bd8) toolbar2_fixed_button_pane_g5

0x9b43,	// (0x00044be0) toolbar2_fixed_button_pane_g6

0x9b4b,	// (0x00044be8) toolbar2_fixed_button_pane_g7

0x9b53,	// (0x00044bf0) toolbar2_fixed_button_pane_g8

0x9b5b,	// (0x00044bf8) toolbar2_fixed_button_pane_g9

0x0008,

0xf871,	// (0x0004a90e) toolbar2_fixed_button_pane_g

0xd5c8,	// (0x00048665) cell_toolbar2_float_pane_ParamLimits

0xd5c8,	// (0x00048665) cell_toolbar2_float_pane

0xd5d9,	// (0x00048676) cell_toolbar2_float_pane_g1

0xd5c0,	// (0x0004865d) toolbar2_fixed_button_pane_cp

0xc254,	// (0x000472f1) fep_vkb_accented_list_pane_ParamLimits

0xc254,	// (0x000472f1) fep_vkb_accented_list_pane

0x70cd,	// (0x0004216a) bg_popup_fep_shadow_pane_g9

0x92d7,	// (0x00044374) bg_popup_fep_shadow_pane_cp3

0x87a5,	// (0x00043842) list_accented_list_pane

0xd5e2,	// (0x0004867f) list_single_accented_list_pane_ParamLimits

0xd5e2,	// (0x0004867f) list_single_accented_list_pane

0x92d7,	// (0x00044374) list_highlight_pane_cp10

0xd5f3,	// (0x00048690) list_single_accented_list_pane_t1

0x6816,	// (0x000418b3) popup_slider_window_ParamLimits

0x6816,	// (0x000418b3) popup_slider_window

0xd22f,	// (0x000482cc) aid_indentation_list_msg

0xd6ad,	// (0x0004874a) bg_popup_window_pane_cp19

0xd717,	// (0x000487b4) popup_slider_window_g1

0xd733,	// (0x000487d0) popup_slider_window_g2

0xd74f,	// (0x000487ec) popup_slider_window_g3

0x0005,

0xfce3,	// (0x0004ad80) popup_slider_window_g

0xd7ab,	// (0x00048848) popup_slider_window_t1

0xd81f,	// (0x000488bc) small_volume_slider_vertical_pane

0xc126,	// (0x000471c3) small_volume_slider_vertical_pane_g1

0xc126,	// (0x000471c3) small_volume_slider_vertical_pane_g2

0xd83b,	// (0x000488d8) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x0004ad92) small_volume_slider_vertical_pane_g

0x5975,	// (0x00040a12) area_side_right_pane_ParamLimits

0x5975,	// (0x00040a12) area_side_right_pane

0x7301,	// (0x0004239e) aid_size_side_button_ParamLimits

0x7301,	// (0x0004239e) aid_size_side_button

0x7315,	// (0x000423b2) grid_sctrl_middle_pane_ParamLimits

0x7315,	// (0x000423b2) grid_sctrl_middle_pane

0x7334,	// (0x000423d1) sctrl_sk_bottom_pane

0x7345,	// (0x000423e2) sctrl_sk_top_pane

0x7357,	// (0x000423f4) aid_touch_sctrl_top

0x806b,	// (0x00043108) bg_sctrl_sk_pane_ParamLimits

0x806b,	// (0x00043108) bg_sctrl_sk_pane

0x7364,	// (0x00042401) sctrl_sk_top_pane_g1

0x7371,	// (0x0004240e) sctrl_sk_top_pane_t1

0x7357,	// (0x000423f4) aid_touch_sctrl_bottom

0x806b,	// (0x00043108) bg_sctrl_sk_pane_cp_ParamLimits

0x806b,	// (0x00043108) bg_sctrl_sk_pane_cp

0x738c,	// (0x00042429) sctrl_sk_bottom_pane_g1

0x7371,	// (0x0004240e) sctrl_sk_bottom_pane_t1

0x7395,	// (0x00042432) cell_sctrl_middle_pane_ParamLimits

0x7395,	// (0x00042432) cell_sctrl_middle_pane

0x73b0,	// (0x0004244d) aid_touch_sctrl_middle_ParamLimits

0x73b0,	// (0x0004244d) aid_touch_sctrl_middle

0x865a,	// (0x000436f7) bg_sctrl_middle_pane_ParamLimits

0x865a,	// (0x000436f7) bg_sctrl_middle_pane

0xc3a4,	// (0x00047441) cell_sctrl_middle_pane_g1_ParamLimits

0xc3a4,	// (0x00047441) cell_sctrl_middle_pane_g1

0x73c2,	// (0x0004245f) cell_sctrl_middle_pane_g2_ParamLimits

0x73c2,	// (0x0004245f) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x0004ad9e) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x0004ad9e) cell_sctrl_middle_pane_g

0x9b1b,	// (0x00044bb8) bg_sctrl_middle_pane_g1

0x9b23,	// (0x00044bc0) bg_sctrl_middle_pane_g2

0x9b2b,	// (0x00044bc8) bg_sctrl_middle_pane_g3

0x9b33,	// (0x00044bd0) bg_sctrl_middle_pane_g4

0x9b3b,	// (0x00044bd8) bg_sctrl_middle_pane_g5

0x9b43,	// (0x00044be0) bg_sctrl_middle_pane_g6

0x9b4b,	// (0x00044be8) bg_sctrl_middle_pane_g7

0x9b53,	// (0x00044bf0) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x0004ada3) bg_sctrl_middle_pane_g

0x9b5b,	// (0x00044bf8) bg_sctrl_middle_pane_g8_copy1

0x9b1b,	// (0x00044bb8) bg_sctrl_sk_pane_g1

0x9b23,	// (0x00044bc0) bg_sctrl_sk_pane_g2

0x9b2b,	// (0x00044bc8) bg_sctrl_sk_pane_g3

0x0008,

0xf871,	// (0x0004a90e) bg_sctrl_sk_pane_g

0x857d,	// (0x0004361a) aid_size_touch_scroll_bar

0x9b33,	// (0x00044bd0) bg_sctrl_sk_pane_g4

0x9b3b,	// (0x00044bd8) bg_sctrl_sk_pane_g5

0x9b43,	// (0x00044be0) bg_sctrl_sk_pane_g6

0x9b4b,	// (0x00044be8) bg_sctrl_sk_pane_g7

0x9b53,	// (0x00044bf0) bg_sctrl_sk_pane_g8

0x9b5b,	// (0x00044bf8) bg_sctrl_sk_pane_g9

0x6481,	// (0x0004151e) popup_fep_china_hwr2_fs_candidate_window

0x648b,	// (0x00041528) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x648b,	// (0x00041528) popup_fep_china_hwr2_fs_control_window

0xc3a4,	// (0x00047441) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x0004ad99) sctrl_sk_top_pane_g

0xd844,	// (0x000488e1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd844,	// (0x000488e1) aid_fep_china_hwr2_fs_cell

0xd856,	// (0x000488f3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd856,	// (0x000488f3) bg_popup_fep_shadow_pane_cp4

0xd86d,	// (0x0004890a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd86d,	// (0x0004890a) bg_popup_fep_shadow_pane_cp5

0xd87f,	// (0x0004891c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd87f,	// (0x0004891c) popup_fep_china_hwr2_fs_control_bar_grid

0xd88f,	// (0x0004892c) popup_fep_china_hwr2_fs_control_funtion_grid

0xd897,	// (0x00048934) aid_fep_china_hwr2_fs_candi_cell

0x7cee,	// (0x00042d8b) bg_popup_fep_shadow_pane_cp6

0xd8a1,	// (0x0004893e) popup_fep_china_hwr2_fs_candidate_grid

0xd8ab,	// (0x00048948) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd8ab,	// (0x00048948) cell_fep_china_hwr2_fs_funtion_grid

0xc126,	// (0x000471c3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8c3,	// (0x00048960) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8c3,	// (0x00048960) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8d1,	// (0x0004896e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8d1,	// (0x0004896e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x0004adb4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x0004adb4) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8e7,	// (0x00048984) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8e7,	// (0x00048984) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8fc,	// (0x00048999) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8fc,	// (0x00048999) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x0004adb9) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x0004adb9) cell_fep_china_hwr2_fs_funtion_grid_t

0xd918,	// (0x000489b5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd920,	// (0x000489bd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd928,	// (0x000489c5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x0004adbe) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd930,	// (0x000489cd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd930,	// (0x000489cd) cell_fep_china_hwr2_fs_candidate_grid

0xd949,	// (0x000489e6) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd951,	// (0x000489ee) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc126,	// (0x000471c3) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc126,	// (0x000471c3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x0004abde) cell_fep_china_hwr2_fs_candidate_grid_g

0xd959,	// (0x000489f6) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9713,	// (0x000447b0) clock_nsta_pane_cp_24_ParamLimits

0x9713,	// (0x000447b0) clock_nsta_pane_cp_24

0x9791,	// (0x0004482e) indicator_nsta_pane_cp_24_ParamLimits

0x9791,	// (0x0004482e) indicator_nsta_pane_cp_24

0xa814,	// (0x000458b1) heading_pane_g1

0x0001,

0xf8d6,	// (0x0004a973) heading_pane_g

0xb20c,	// (0x000462a9) grid_sct_catagory_button_pane

0xb23c,	// (0x000462d9) scroll_pane_cp5_ParamLimits

0xbd18,	// (0x00046db5) button_value_adjust_pane_cp5_ParamLimits

0xbd18,	// (0x00046db5) button_value_adjust_pane_cp5

0xbdf7,	// (0x00046e94) form2_midp_time_pane_ParamLimits

0xd967,	// (0x00048a04) cell_sct_catagory_button_pane_ParamLimits

0xd967,	// (0x00048a04) cell_sct_catagory_button_pane

0xc0eb,	// (0x00047188) bg_button_pane_cp01_ParamLimits

0xc0eb,	// (0x00047188) bg_button_pane_cp01

0xc126,	// (0x000471c3) cell_sct_catagory_button_pane_g1

0x6855,	// (0x000418f2) popup_tb_extension_window

0xd979,	// (0x00048a16) aid_size_cell_ext_ParamLimits

0xd979,	// (0x00048a16) aid_size_cell_ext

0x806b,	// (0x00043108) bg_tb_trans_pane_cp1_ParamLimits

0x806b,	// (0x00043108) bg_tb_trans_pane_cp1

0xd999,	// (0x00048a36) grid_tb_ext_pane_ParamLimits

0xd999,	// (0x00048a36) grid_tb_ext_pane

0xd9c7,	// (0x00048a64) cell_tb_ext_pane_ParamLimits

0xd9c7,	// (0x00048a64) cell_tb_ext_pane

0xd9de,	// (0x00048a7b) cell_tb_ext_pane_g1_ParamLimits

0xd9de,	// (0x00048a7b) cell_tb_ext_pane_g1

0xd9fb,	// (0x00048a98) cell_tb_ext_pane_t1

0x806b,	// (0x00043108) list_highlight_pane_cp11_ParamLimits

0x806b,	// (0x00043108) list_highlight_pane_cp11

0x5bd2,	// (0x00040c6f) popup_uni_indicator_window_ParamLimits

0x5bd2,	// (0x00040c6f) popup_uni_indicator_window

0x865a,	// (0x000436f7) bg_popup_sub_pane_cp14

0xda16,	// (0x00048ab3) list_uniindi_pane

0xda22,	// (0x00048abf) uniindi_top_pane

0x806b,	// (0x00043108) bg_uniindi_top_pane

0xda41,	// (0x00048ade) uniindi_top_pane_g1

0xda57,	// (0x00048af4) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x0004adc5) uniindi_top_pane_g

0xda81,	// (0x00048b1e) uniindi_top_pane_t1

0xdaab,	// (0x00048b48) list_single_uniindi_pane_ParamLimits

0xdaab,	// (0x00048b48) list_single_uniindi_pane

0xc126,	// (0x000471c3) bg_uniindi_top_pane_g1

0xdabe,	// (0x00048b5b) list_single_uniindi_pane_g1

0xdad1,	// (0x00048b6e) list_single_uniindi_pane_t1

0x7cee,	// (0x00042d8b) control_bg_pane

0xdaf6,	// (0x00048b93) bg_sctrl_sk_pane_cp1

0xdaff,	// (0x00048b9c) bg_sctrl_sk_pane_cp2

0xdb08,	// (0x00048ba5) control_bg_pane_g1

0xdb11,	// (0x00048bae) control_bg_pane_g2

0x0001,

0xfd31,	// (0x0004adce) control_bg_pane_g

0xbb61,	// (0x00046bfe) cell_indicator_nsta_pane_g1_ParamLimits

0xbb6f,	// (0x00046c0c) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x0004ab42) cell_indicator_nsta_pane_g_ParamLimits

0x5621,	// (0x000406be) form2_midp_time_pane_t1_ParamLimits

0x83bf,	// (0x0004345c) main_idle_act4_pane_ParamLimits

0x83bf,	// (0x0004345c) main_idle_act4_pane

0x6855,	// (0x000418f2) popup_tb_extension_window_ParamLimits

0xd9b7,	// (0x00048a54) tb_ext_find_pane_ParamLimits

0xd9b7,	// (0x00048a54) tb_ext_find_pane

0xdb1a,	// (0x00048bb7) ai_gene_pane_1_cp1

0x9410,	// (0x000444ad) ai_gene_pane_2_cp1

0xdb22,	// (0x00048bbf) list_single_idle_plugin_calendar_pane

0xdb2b,	// (0x00048bc8) list_single_idle_plugin_notification_pane

0xdb34,	// (0x00048bd1) list_single_idle_plugin_player_pane

0xdb3d,	// (0x00048bda) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb3d,	// (0x00048bda) list_single_idle_plugin_shortcut_pane

0xdb5f,	// (0x00048bfc) main_idle_act4_pane_t1

0xdb71,	// (0x00048c0e) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x0004add3) main_idle_act4_pane_t

0xdb83,	// (0x00048c20) middle_sk_idle_act4_pane_ParamLimits

0xdb83,	// (0x00048c20) middle_sk_idle_act4_pane

0xdb99,	// (0x00048c36) popup_clock_digital_analogue_window_cp2

0xdbb3,	// (0x00048c50) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbb3,	// (0x00048c50) shortcut_wheel_idle_act4_pane

0xc126,	// (0x000471c3) shortcut_wheel_idle_act4_pane_g1

0xc126,	// (0x000471c3) shortcut_wheel_idle_act4_pane_g2

0xc126,	// (0x000471c3) shortcut_wheel_idle_act4_pane_g3

0xc126,	// (0x000471c3) shortcut_wheel_idle_act4_pane_g4

0xc126,	// (0x000471c3) shortcut_wheel_idle_act4_pane_g5

0xdbc7,	// (0x00048c64) shortcut_wheel_idle_act4_pane_g6

0xdbcf,	// (0x00048c6c) shortcut_wheel_idle_act4_pane_g7

0xdbd7,	// (0x00048c74) shortcut_wheel_idle_act4_pane_g8

0xdbdf,	// (0x00048c7c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x0004add8) shortcut_wheel_idle_act4_pane_g

0xc3a4,	// (0x00047441) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3a4,	// (0x00047441) middle_sk_idle_act4_pane_g1

0xdc43,	// (0x00048ce0) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc43,	// (0x00048ce0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x0004adfb) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x0004adfb) middle_sk_idle_act4_pane_g

0xdc4f,	// (0x00048cec) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc4f,	// (0x00048cec) middle_sk_idle_act4_pane_t1

0xdc6c,	// (0x00048d09) grid_ai_shortcut_pane_ParamLimits

0xdc6c,	// (0x00048d09) grid_ai_shortcut_pane

0xdc85,	// (0x00048d22) list_highlight_pane_cp16_ParamLimits

0xdc85,	// (0x00048d22) list_highlight_pane_cp16

0xdc92,	// (0x00048d2f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc92,	// (0x00048d2f) list_single_idle_plugin_shortcut_pane_g1

0xdc9e,	// (0x00048d3b) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc9e,	// (0x00048d3b) list_single_idle_plugin_shortcut_pane_g2

0xdcb6,	// (0x00048d53) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcb6,	// (0x00048d53) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x0004ae00) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x0004ae00) list_single_idle_plugin_shortcut_pane_g

0xdcc9,	// (0x00048d66) cell_ai_shortcut_pane_ParamLimits

0xdcc9,	// (0x00048d66) cell_ai_shortcut_pane

0xdced,	// (0x00048d8a) cell_ai_shortcut_pane_g1_ParamLimits

0xdced,	// (0x00048d8a) cell_ai_shortcut_pane_g1

0xdb1a,	// (0x00048bb7) ai_gene_pane_1_cp2

0xdd0f,	// (0x00048dac) ai_gene_pane_2_cp2

0xdd17,	// (0x00048db4) list_highlight_pane_cp15

0xdd20,	// (0x00048dbd) list_single_idle_plugin_calendar_pane_g1

0xdd17,	// (0x00048db4) list_highlight_pane_cp17

0xdd28,	// (0x00048dc5) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd30,	// (0x00048dcd) list_single_idle_plugin_player_pane_g1

0xb4a7,	// (0x00046544) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x0004ae07) list_single_idle_plugin_player_pane_g

0xdd38,	// (0x00048dd5) list_single_idle_plugin_player_pane_t1

0xdd46,	// (0x00048de3) list_single_idle_plugin_player_pane_t2

0xdd54,	// (0x00048df1) list_single_idle_plugin_player_pane_t3

0xdd62,	// (0x00048dff) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x0004ae0c) list_single_idle_plugin_player_pane_t

0xdd70,	// (0x00048e0d) wait_bar_pane_cp15

0xdd78,	// (0x00048e15) grid_ai_notification_pane

0xb4a7,	// (0x00046544) list_single_idle_plugin_notification_pane_g1

0xdd81,	// (0x00048e1e) cell_ai_notification_pane_ParamLimits

0xdd81,	// (0x00048e1e) cell_ai_notification_pane

0xdd8e,	// (0x00048e2b) cell_ai_notification_pane_g1

0xdd96,	// (0x00048e33) cell_ai_notification_pane_t1

0xdda4,	// (0x00048e41) tb_ext_find_button_pane

0xddac,	// (0x00048e49) tb_ext_find_pane_g1

0xddb4,	// (0x00048e51) tb_ext_find_pane_t1

0x8ccf,	// (0x00043d6c) tb_ext_find_button_pane_g1

0xddc2,	// (0x00048e5f) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x0004ae15) tb_ext_find_button_pane_g

0xdb5f,	// (0x00048bfc) main_idle_act4_pane_t1_ParamLimits

0xdb71,	// (0x00048c0e) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x0004add3) main_idle_act4_pane_t_ParamLimits

0xdb99,	// (0x00048c36) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdba7,	// (0x00048c44) sat_plugin_idle_act4_pane_ParamLimits

0xdba7,	// (0x00048c44) sat_plugin_idle_act4_pane

0xddcb,	// (0x00048e68) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddcb,	// (0x00048e68) sat_plugin_idle_act4_pane_t1

0xddde,	// (0x00048e7b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddde,	// (0x00048e7b) sat_plugin_idle_act4_pane_t2

0xddf1,	// (0x00048e8e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddf1,	// (0x00048e8e) sat_plugin_idle_act4_pane_t3

0xde04,	// (0x00048ea1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde04,	// (0x00048ea1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x0004ae1a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x0004ae1a) sat_plugin_idle_act4_pane_t

0x5b0d,	// (0x00040baa) popup_battery_window_ParamLimits

0x5b0d,	// (0x00040baa) popup_battery_window

0x806b,	// (0x00043108) bg_popup_sub_pane_cp25_ParamLimits

0x806b,	// (0x00043108) bg_popup_sub_pane_cp25

0xde17,	// (0x00048eb4) popup_battery_window_g1_ParamLimits

0xde17,	// (0x00048eb4) popup_battery_window_g1

0xde23,	// (0x00048ec0) popup_battery_window_t1_ParamLimits

0xde23,	// (0x00048ec0) popup_battery_window_t1

0xde35,	// (0x00048ed2) popup_battery_window_t2_ParamLimits

0xde35,	// (0x00048ed2) popup_battery_window_t2

0x0001,

0xfd86,	// (0x0004ae23) popup_battery_window_t_ParamLimits

0xfd86,	// (0x0004ae23) popup_battery_window_t

0x92df,	// (0x0004437c) midp_canvas_pane_ParamLimits

0x9354,	// (0x000443f1) midp_keypad_pane_ParamLimits

0x9354,	// (0x000443f1) midp_keypad_pane

0x9617,	// (0x000446b4) main_midp_pane_ParamLimits

0xbbdc,	// (0x00046c79) signal_pane_g2_cp_ParamLimits

0xde52,	// (0x00048eef) aid_size_cell_midp_keypad_ParamLimits

0xde52,	// (0x00048eef) aid_size_cell_midp_keypad

0xde6c,	// (0x00048f09) midp_keyp_game_grid_pane_ParamLimits

0xde6c,	// (0x00048f09) midp_keyp_game_grid_pane

0xde8c,	// (0x00048f29) midp_keyp_rocker_pane_ParamLimits

0xde8c,	// (0x00048f29) midp_keyp_rocker_pane

0xdec1,	// (0x00048f5e) midp_keyp_sk_left_pane_ParamLimits

0xdec1,	// (0x00048f5e) midp_keyp_sk_left_pane

0xdf19,	// (0x00048fb6) midp_keyp_sk_right_pane_ParamLimits

0xdf19,	// (0x00048fb6) midp_keyp_sk_right_pane

0x7cee,	// (0x00042d8b) bg_button_pane_cp03

0xdf71,	// (0x0004900e) midp_keyp_sk_left_pane_g1

0x7cee,	// (0x00042d8b) bg_button_pane_cp04

0xdf71,	// (0x0004900e) midp_keyp_sk_right_pane_g1

0xc126,	// (0x000471c3) midp_keyp_rocker_pane_g1

0xdf7a,	// (0x00049017) keyp_game_cell_pane_ParamLimits

0xdf7a,	// (0x00049017) keyp_game_cell_pane

0x7cee,	// (0x00042d8b) bg_button_pane_cp02

0xdf8d,	// (0x0004902a) keyp_game_cell_pane_g1

0x5b51,	// (0x00040bee) popup_fep_vkb2_window_ParamLimits

0x5b51,	// (0x00040bee) popup_fep_vkb2_window

0x73e0,	// (0x0004247d) aid_size_cell_vkb2_ParamLimits

0x73e0,	// (0x0004247d) aid_size_cell_vkb2

0x7434,	// (0x000424d1) popup_fep_vkb2_window_g1_ParamLimits

0x7434,	// (0x000424d1) popup_fep_vkb2_window_g1

0x747c,	// (0x00042519) vkb2_area_bottom_pane_ParamLimits

0x747c,	// (0x00042519) vkb2_area_bottom_pane

0x74c8,	// (0x00042565) vkb2_area_keypad_pane_ParamLimits

0x74c8,	// (0x00042565) vkb2_area_keypad_pane

0x750a,	// (0x000425a7) vkb2_area_top_pane_ParamLimits

0x750a,	// (0x000425a7) vkb2_area_top_pane

0x7584,	// (0x00042621) vkb2_top_entry_pane_ParamLimits

0x7584,	// (0x00042621) vkb2_top_entry_pane

0x75ae,	// (0x0004264b) vkb2_top_grid_left_pane_ParamLimits

0x75ae,	// (0x0004264b) vkb2_top_grid_left_pane

0x75cc,	// (0x00042669) vkb2_top_grid_right_pane_ParamLimits

0x75cc,	// (0x00042669) vkb2_top_grid_right_pane

0x75ea,	// (0x00042687) vkb2_cell_keypad_pane_ParamLimits

0x75ea,	// (0x00042687) vkb2_cell_keypad_pane

0x76bb,	// (0x00042758) vkb2_area_bottom_grid_pane_ParamLimits

0x76bb,	// (0x00042758) vkb2_area_bottom_grid_pane

0x76e1,	// (0x0004277e) vkb2_area_bottom_pane_g1_ParamLimits

0x76e1,	// (0x0004277e) vkb2_area_bottom_pane_g1

0x7705,	// (0x000427a2) vkb2_area_bottom_pane_g2_ParamLimits

0x7705,	// (0x000427a2) vkb2_area_bottom_pane_g2

0x7733,	// (0x000427d0) vkb2_area_bottom_pane_g3_ParamLimits

0x7733,	// (0x000427d0) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x0004ae28) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x0004ae28) vkb2_area_bottom_pane_g

0x7794,	// (0x00042831) vkb2_top_cell_left_pane_ParamLimits

0x7794,	// (0x00042831) vkb2_top_cell_left_pane

0xdf9e,	// (0x0004903b) vkb2_top_entry_pane_g1_ParamLimits

0xdf9e,	// (0x0004903b) vkb2_top_entry_pane_g1

0xdfac,	// (0x00049049) vkb2_top_entry_pane_t1_ParamLimits

0xdfac,	// (0x00049049) vkb2_top_entry_pane_t1

0xdfde,	// (0x0004907b) vkb2_top_entry_pane_t2_ParamLimits

0xdfde,	// (0x0004907b) vkb2_top_entry_pane_t2

0xe010,	// (0x000490ad) vkb2_top_entry_pane_t3_ParamLimits

0xe010,	// (0x000490ad) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x0004ae2f) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x0004ae2f) vkb2_top_entry_pane_t

0x77e1,	// (0x0004287e) vkb2_top_grid_right_pane_g1_ParamLimits

0x77e1,	// (0x0004287e) vkb2_top_grid_right_pane_g1

0x77f7,	// (0x00042894) vkb2_top_grid_right_pane_g2_ParamLimits

0x77f7,	// (0x00042894) vkb2_top_grid_right_pane_g2

0x780f,	// (0x000428ac) vkb2_top_grid_right_pane_g3_ParamLimits

0x780f,	// (0x000428ac) vkb2_top_grid_right_pane_g3

0x7827,	// (0x000428c4) vkb2_top_grid_right_pane_g4_ParamLimits

0x7827,	// (0x000428c4) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x0004ae36) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x0004ae36) vkb2_top_grid_right_pane_g

0x783d,	// (0x000428da) vkb2_top_cell_left_pane_g1

0x7854,	// (0x000428f1) vkb2_cell_keypad_pane_g1_ParamLimits

0x7854,	// (0x000428f1) vkb2_cell_keypad_pane_g1

0xe034,	// (0x000490d1) vkb2_cell_keypad_pane_t1_ParamLimits

0xe034,	// (0x000490d1) vkb2_cell_keypad_pane_t1

0x7862,	// (0x000428ff) vkb2_cell_bottom_grid_pane_ParamLimits

0x7862,	// (0x000428ff) vkb2_cell_bottom_grid_pane

0x789b,	// (0x00042938) vkb2_cell_bottom_grid_pane_g1

0xdbe7,	// (0x00048c84) aid_call2_pane_cp02

0xdbef,	// (0x00048c8c) aid_call_pane_cp02

0xdbf7,	// (0x00048c94) clock_digital_number_pane_cp10

0xdbff,	// (0x00048c9c) clock_digital_number_pane_cp11

0xdc07,	// (0x00048ca4) clock_digital_number_pane_cp12

0xdc0f,	// (0x00048cac) clock_digital_number_pane_cp13

0xdc17,	// (0x00048cb4) clock_digital_separator_pane_cp10

0x8ccf,	// (0x00043d6c) popup_clock_digital_analogue_window_cp2_g1

0x8ccf,	// (0x00043d6c) popup_clock_digital_analogue_window_cp2_g2

0xdc1f,	// (0x00048cbc) popup_clock_digital_analogue_window_cp2_g3

0x8ccf,	// (0x00043d6c) popup_clock_digital_analogue_window_cp2_g4

0xdc1f,	// (0x00048cbc) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x0004adeb) popup_clock_digital_analogue_window_cp2_g

0xdc27,	// (0x00048cc4) popup_clock_digital_analogue_window_cp2_t1

0xdc35,	// (0x00048cd2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x0004adf6) popup_clock_digital_analogue_window_cp2_t

0xc126,	// (0x000471c3) clock_digital_number_pane_cp10_g1

0xc126,	// (0x000471c3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x0004abde) clock_digital_number_pane_cp10_g

0xc126,	// (0x000471c3) clock_digital_separator_pane_cp10_g1

0xc126,	// (0x000471c3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x0004abde) clock_digital_separator_pane_cp10_g

0xda63,	// (0x00048b00) uniindi_top_pane_g3

0xda74,	// (0x00048b11) uniindi_top_pane_g4

0x7675,	// (0x00042712) vkb2_row_keypad_pane_ParamLimits

0x7675,	// (0x00042712) vkb2_row_keypad_pane

0x78b7,	// (0x00042954) vkb2_cell_t_keypad_pane_ParamLimits

0x78b7,	// (0x00042954) vkb2_cell_t_keypad_pane

0x78c7,	// (0x00042964) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x78c7,	// (0x00042964) vkb2_cell_t_keypad_pane_cp08

0x78da,	// (0x00042977) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x78da,	// (0x00042977) vkb2_cell_t_keypad_pane_cp09

0x78ee,	// (0x0004298b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x78ee,	// (0x0004298b) vkb2_cell_t_keypad_pane_cp01

0x78ff,	// (0x0004299c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x78ff,	// (0x0004299c) vkb2_cell_t_keypad_pane_cp02

0x7910,	// (0x000429ad) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7910,	// (0x000429ad) vkb2_cell_t_keypad_pane_cp03

0x7921,	// (0x000429be) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7921,	// (0x000429be) vkb2_cell_t_keypad_pane_cp04

0x7932,	// (0x000429cf) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7932,	// (0x000429cf) vkb2_cell_t_keypad_pane_cp05

0x7943,	// (0x000429e0) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7943,	// (0x000429e0) vkb2_cell_t_keypad_pane_cp06

0x7954,	// (0x000429f1) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7954,	// (0x000429f1) vkb2_cell_t_keypad_pane_cp07

0x7965,	// (0x00042a02) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7965,	// (0x00042a02) vkb2_cell_t_keypad_pane_cp10

0xc3a4,	// (0x00047441) vkb2_cell_t_keypad_pane_g1

0xe04b,	// (0x000490e8) vkb2_cell_t_keypad_pane_t1

0x7cee,	// (0x00042d8b) popup_grid_graphic2_window

0xe05d,	// (0x000490fa) aid_size_cell_graphic2_ParamLimits

0xe05d,	// (0x000490fa) aid_size_cell_graphic2

0xe095,	// (0x00049132) bg_popup_window_pane_cp21_ParamLimits

0xe095,	// (0x00049132) bg_popup_window_pane_cp21

0xe0a3,	// (0x00049140) graphic2_pages_pane_ParamLimits

0xe0a3,	// (0x00049140) graphic2_pages_pane

0xe0e9,	// (0x00049186) grid_graphic2_control_pane_ParamLimits

0xe0e9,	// (0x00049186) grid_graphic2_control_pane

0xe127,	// (0x000491c4) grid_graphic2_pane_ParamLimits

0xe127,	// (0x000491c4) grid_graphic2_pane

0xe19b,	// (0x00049238) cell_graphic2_pane

0x7cee,	// (0x00042d8b) main_comp_mode_pane

0xd2e3,	// (0x00048380) list_ai3_gene_pane_ParamLimits

0xd6ad,	// (0x0004874a) bg_popup_window_pane_cp19_ParamLimits

0xd6b9,	// (0x00048756) bg_touch_area_indi_pane_ParamLimits

0xd6b9,	// (0x00048756) bg_touch_area_indi_pane

0xd6cf,	// (0x0004876c) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6cf,	// (0x0004876c) bg_touch_area_indi_pane_cp01

0xd6e5,	// (0x00048782) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6e5,	// (0x00048782) bg_touch_area_indi_pane_cp02

0xd6fd,	// (0x0004879a) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6fd,	// (0x0004879a) bg_touch_area_indi_pane_cp03

0xd717,	// (0x000487b4) popup_slider_window_g1_ParamLimits

0xd733,	// (0x000487d0) popup_slider_window_g2_ParamLimits

0xd74f,	// (0x000487ec) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x0004ad80) popup_slider_window_g_ParamLimits

0xd7ab,	// (0x00048848) popup_slider_window_t1_ParamLimits

0xd81f,	// (0x000488bc) small_volume_slider_vertical_pane_ParamLimits

0xe19b,	// (0x00049238) cell_graphic2_pane_ParamLimits

0xe1e9,	// (0x00049286) bg_button_pane_cp10_ParamLimits

0xe1e9,	// (0x00049286) bg_button_pane_cp10

0xe1fc,	// (0x00049299) bg_button_pane_cp11_ParamLimits

0xe1fc,	// (0x00049299) bg_button_pane_cp11

0xe20f,	// (0x000492ac) graphic2_pages_pane_g1_ParamLimits

0xe20f,	// (0x000492ac) graphic2_pages_pane_g1

0xe22a,	// (0x000492c7) graphic2_pages_pane_g2_ParamLimits

0xe22a,	// (0x000492c7) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x0004ae44) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x0004ae44) graphic2_pages_pane_g

0xe242,	// (0x000492df) graphic2_pages_pane_t1_ParamLimits

0xe242,	// (0x000492df) graphic2_pages_pane_t1

0xe25a,	// (0x000492f7) cell_graphic2_control_pane_ParamLimits

0xe25a,	// (0x000492f7) cell_graphic2_control_pane

0xe27b,	// (0x00049318) cell_graphic2_pane_g1_ParamLimits

0xe27b,	// (0x00049318) cell_graphic2_pane_g1

0xe288,	// (0x00049325) cell_graphic2_pane_g2_ParamLimits

0xe288,	// (0x00049325) cell_graphic2_pane_g2

0xe295,	// (0x00049332) cell_graphic2_pane_g3_ParamLimits

0xe295,	// (0x00049332) cell_graphic2_pane_g3

0xe2a2,	// (0x0004933f) cell_graphic2_pane_g4_ParamLimits

0xe2a2,	// (0x0004933f) cell_graphic2_pane_g4

0xe2af,	// (0x0004934c) cell_graphic2_pane_g5_ParamLimits

0xe2af,	// (0x0004934c) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x0004ae49) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x0004ae49) cell_graphic2_pane_g

0xe2ca,	// (0x00049367) cell_graphic2_pane_t1_ParamLimits

0xe2ca,	// (0x00049367) cell_graphic2_pane_t1

0x9b8f,	// (0x00044c2c) grid_highlight_pane_cp11_ParamLimits

0x9b8f,	// (0x00044c2c) grid_highlight_pane_cp11

0x806b,	// (0x00043108) bg_button_pane_cp05

0xe2f3,	// (0x00049390) cell_graphic2_control_pane_g1

0xc126,	// (0x000471c3) bg_touch_area_indi_pane_g1

0xe31b,	// (0x000493b8) aid_cmod_rocker_key_size

0xe325,	// (0x000493c2) aid_cmode_itu_key_size

0xe32f,	// (0x000493cc) main_cmode_video_pane

0xe339,	// (0x000493d6) main_comp_mode_itu_pane

0xe345,	// (0x000493e2) main_comp_mode_rocker_pane

0xe351,	// (0x000493ee) cell_cmode_rocker_pane_ParamLimits

0xe351,	// (0x000493ee) cell_cmode_rocker_pane

0xe363,	// (0x00049400) cell_cmode_itu_pane_ParamLimits

0xe363,	// (0x00049400) cell_cmode_itu_pane

0x865a,	// (0x000436f7) bg_button_pane_cp06_ParamLimits

0x865a,	// (0x000436f7) bg_button_pane_cp06

0xc3a4,	// (0x00047441) cell_cmode_rocker_pane_g1_ParamLimits

0xc3a4,	// (0x00047441) cell_cmode_rocker_pane_g1

0xd8c3,	// (0x00048960) cell_cmode_rocker_pane_g2_ParamLimits

0xd8c3,	// (0x00048960) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x0004ae59) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x0004ae59) cell_cmode_rocker_pane_g

0x7cee,	// (0x00042d8b) bg_button_pane_cp07

0xe378,	// (0x00049415) cell_cmode_itu_pane_g1

0xe381,	// (0x0004941e) cell_cmode_itu_pane_t1

0xe38f,	// (0x0004942c) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x0004ae5e) cell_cmode_itu_pane_t

0xdae6,	// (0x00048b83) aid_touch_ctrl_left

0xdaee,	// (0x00048b8b) aid_touch_ctrl_right

0x7cee,	// (0x00042d8b) compa_mode_pane

0xe39d,	// (0x0004943a) aid_cmod_rocker_key_size_cp

0xe3a7,	// (0x00049444) aid_cmode_itu_key_size_cp

0xe3b1,	// (0x0004944e) compa_mode_pane_g1

0xe3b9,	// (0x00049456) compa_mode_pane_g2

0xe3c1,	// (0x0004945e) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x0004ae63) compa_mode_pane_g

0xe3c9,	// (0x00049466) main_comp_mode_itu_pane_cp

0xe3d1,	// (0x0004946e) main_comp_mode_rocker_pane_cp

0xe3d9,	// (0x00049476) cell_cmode_itu_pane_cp_ParamLimits

0xe3d9,	// (0x00049476) cell_cmode_itu_pane_cp

0xe3ee,	// (0x0004948b) cell_cmode_rocker_pane_cp_ParamLimits

0xe3ee,	// (0x0004948b) cell_cmode_rocker_pane_cp

0x865a,	// (0x000436f7) bg_button_pane_cp06_cp_ParamLimits

0x865a,	// (0x000436f7) bg_button_pane_cp06_cp

0xc3a4,	// (0x00047441) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc3a4,	// (0x00047441) cell_cmode_rocker_pane_g1_cp

0xc126,	// (0x000471c3) cell_cmode_rocker_pane_g2_cp

0x7cee,	// (0x00042d8b) bg_button_pane_cp07_cp

0xb069,	// (0x00046106) cell_cmode_itu_pane_g1_cp

0xe400,	// (0x0004949d) cell_cmode_itu_pane_t1_cp

0xe400,	// (0x0004949d) cell_cmode_itu_pane_t2_cp

0xb056,	// (0x000460f3) settings_code_pane_cp2

0x7de2,	// (0x00042e7f) bg_popup_window_pane_cp3_ParamLimits

0x8245,	// (0x000432e2) heading_pane_cp3_ParamLimits

0x8251,	// (0x000432ee) listscroll_popup_graphic_pane_ParamLimits

0x6eb1,	// (0x00041f4e) fep_hwr_aid_pane_ParamLimits

0x7357,	// (0x000423f4) aid_touch_sctrl_top_ParamLimits

0x7364,	// (0x00042401) sctrl_sk_top_pane_g1_ParamLimits

0xc3a4,	// (0x00047441) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x0004ad99) sctrl_sk_top_pane_g_ParamLimits

0x7371,	// (0x0004240e) sctrl_sk_top_pane_t1_ParamLimits

0x7357,	// (0x000423f4) aid_touch_sctrl_bottom_ParamLimits

0x7371,	// (0x0004240e) sctrl_sk_bottom_pane_t1_ParamLimits

0xda2f,	// (0x00048acc) aid_area_touch_clock

0x754c,	// (0x000425e9) aid_vkb2_area_top_pane_cell_ParamLimits

0x754c,	// (0x000425e9) aid_vkb2_area_top_pane_cell

0x7697,	// (0x00042734) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7697,	// (0x00042734) aid_vkb2_area_bottom_pane_cell

0xdf96,	// (0x00049033) popup_char_count_window

0xe40e,	// (0x000494ab) popup_char_count_window_g1

0xe417,	// (0x000494b4) popup_char_count_window_g2

0xe420,	// (0x000494bd) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x0004ae6a) popup_char_count_window_g

0xe429,	// (0x000494c6) popup_char_count_window_t1

0x7412,	// (0x000424af) popup_fep_char_preview_window_ParamLimits

0x7412,	// (0x000424af) popup_fep_char_preview_window

0x756a,	// (0x00042607) vkb2_top_candi_pane_ParamLimits

0x756a,	// (0x00042607) vkb2_top_candi_pane

0xe437,	// (0x000494d4) cell_vkb2_top_candi_pane_ParamLimits

0xe437,	// (0x000494d4) cell_vkb2_top_candi_pane

0xa194,	// (0x00045231) bg_popup_fep_char_preview_window_ParamLimits

0xa194,	// (0x00045231) bg_popup_fep_char_preview_window

0x797a,	// (0x00042a17) popup_fep_char_preview_window_t1_ParamLimits

0x797a,	// (0x00042a17) popup_fep_char_preview_window_t1

0xe484,	// (0x00049521) bg_popup_fep_char_preview_window_g1

0xe48c,	// (0x00049529) bg_popup_fep_char_preview_window_g2

0xe494,	// (0x00049531) bg_popup_fep_char_preview_window_g3

0xe49c,	// (0x00049539) bg_popup_fep_char_preview_window_g4

0xe4a4,	// (0x00049541) bg_popup_fep_char_preview_window_g5

0x79b4,	// (0x00042a51) bg_popup_fep_char_preview_window_g6

0xe4ac,	// (0x00049549) bg_popup_fep_char_preview_window_g7

0xe4b4,	// (0x00049551) bg_popup_fep_char_preview_window_g8

0xe4bc,	// (0x00049559) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x0004ae71) bg_popup_fep_char_preview_window_g

0xc3a4,	// (0x00047441) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc3a4,	// (0x00047441) cell_vkb2_top_candi_pane_g1

0xc6bb,	// (0x00047758) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc6bb,	// (0x00047758) cell_vkb2_top_candi_pane_g2

0xc6dc,	// (0x00047779) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc6dc,	// (0x00047779) cell_vkb2_top_candi_pane_g3

0x79bc,	// (0x00042a59) cell_vkb2_top_candi_pane_g4_ParamLimits

0x79bc,	// (0x00042a59) cell_vkb2_top_candi_pane_g4

0xe4c4,	// (0x00049561) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe4c4,	// (0x00049561) cell_vkb2_top_candi_pane_g5

0xd8c3,	// (0x00048960) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd8c3,	// (0x00048960) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x0004ae84) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x0004ae84) cell_vkb2_top_candi_pane_g

0x79dd,	// (0x00042a7a) cell_vkb2_top_candi_pane_t1

0x6c96,	// (0x00041d33) aid_size_touch_slider_mark_ParamLimits

0x6c96,	// (0x00041d33) aid_size_touch_slider_mark

0xe0d9,	// (0x00049176) grid_graphic2_catg_pane_ParamLimits

0xe0d9,	// (0x00049176) grid_graphic2_catg_pane

0xe177,	// (0x00049214) popup_grid_graphic2_window_t1_ParamLimits

0xe177,	// (0x00049214) popup_grid_graphic2_window_t1

0xe189,	// (0x00049226) popup_grid_graphic2_window_t2_ParamLimits

0xe189,	// (0x00049226) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x0004ae3f) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x0004ae3f) popup_grid_graphic2_window_t

0x806b,	// (0x00043108) bg_button_pane_cp05_ParamLimits

0xe2f3,	// (0x00049390) cell_graphic2_control_pane_g1_ParamLimits

0xe4e5,	// (0x00049582) cell_graphic2_catg_pane_ParamLimits

0xe4e5,	// (0x00049582) cell_graphic2_catg_pane

0x7cee,	// (0x00042d8b) bg_button_pane_cp12

0xe4f7,	// (0x00049594) cell_graphic2_catg_pane_g1

0xd9fb,	// (0x00048a98) cell_tb_ext_pane_t1_ParamLimits

0x77b4,	// (0x00042851) vkb2_top_cell_right_narrow_pane_ParamLimits

0x77b4,	// (0x00042851) vkb2_top_cell_right_narrow_pane

0x77cc,	// (0x00042869) vkb2_top_cell_right_wide_pane_ParamLimits

0x77cc,	// (0x00042869) vkb2_top_cell_right_wide_pane

0x6ea3,	// (0x00041f40) bg_vkb2_func_pane_ParamLimits

0x6ea3,	// (0x00041f40) bg_vkb2_func_pane

0x783d,	// (0x000428da) vkb2_top_cell_left_pane_g1_ParamLimits

0x6ea3,	// (0x00041f40) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6ea3,	// (0x00041f40) bg_vkb2_fuc_pane_cp03

0x789b,	// (0x00042938) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9b23,	// (0x00044bc0) bg_vkb2_func_pane_g1

0x9b2b,	// (0x00044bc8) bg_vkb2_func_pane_g2

0x9b3b,	// (0x00044bd8) bg_vkb2_func_pane_g3

0x9b33,	// (0x00044bd0) bg_vkb2_func_pane_g4

0x9b43,	// (0x00044be0) bg_vkb2_func_pane_g5

0x9b4b,	// (0x00044be8) bg_vkb2_func_pane_g6

0x9b53,	// (0x00044bf0) bg_vkb2_func_pane_g7

0x9b5b,	// (0x00044bf8) bg_vkb2_func_pane_g8

0x9b1b,	// (0x00044bb8) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x0004ae91) bg_vkb2_func_pane_g

0x6ea3,	// (0x00041f40) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6ea3,	// (0x00041f40) bg_vkb2_fuc_pane_cp01

0x783d,	// (0x000428da) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x783d,	// (0x000428da) vkb2_top_cell_right_wide_pane_g1

0x6ea3,	// (0x00041f40) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6ea3,	// (0x00041f40) bg_vkb2_fuc_pane_cp02

0x789b,	// (0x00042938) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x789b,	// (0x00042938) vkb2_top_cell_right_narrow_pane_g1

0xd631,	// (0x000486ce) aid_touch_area_decrease_ParamLimits

0xd631,	// (0x000486ce) aid_touch_area_decrease

0xd64f,	// (0x000486ec) aid_touch_area_increase_ParamLimits

0xd64f,	// (0x000486ec) aid_touch_area_increase

0xd65b,	// (0x000486f8) aid_touch_area_mute_ParamLimits

0xd65b,	// (0x000486f8) aid_touch_area_mute

0xd67f,	// (0x0004871c) aid_touch_area_slider_ParamLimits

0xd67f,	// (0x0004871c) aid_touch_area_slider

0xd76b,	// (0x00048808) popup_slider_window_g4_ParamLimits

0xd76b,	// (0x00048808) popup_slider_window_g4

0xd777,	// (0x00048814) popup_slider_window_g5_ParamLimits

0xd777,	// (0x00048814) popup_slider_window_g5

0xd799,	// (0x00048836) popup_slider_window_g6_ParamLimits

0xd799,	// (0x00048836) popup_slider_window_g6

0xd7d9,	// (0x00048876) popup_slider_window_t2_ParamLimits

0xd7d9,	// (0x00048876) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x0004ad8d) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x0004ad8d) popup_slider_window_t

0xd7f1,	// (0x0004888e) slider_pane_ParamLimits

0xd7f1,	// (0x0004888e) slider_pane

0xe500,	// (0x0004959d) slider_pane_g1_ParamLimits

0xe500,	// (0x0004959d) slider_pane_g1

0xe514,	// (0x000495b1) slider_pane_g2_ParamLimits

0xe514,	// (0x000495b1) slider_pane_g2

0xe52a,	// (0x000495c7) slider_pane_g3_ParamLimits

0xe52a,	// (0x000495c7) slider_pane_g3

0x0003,

0xfe07,	// (0x0004aea4) slider_pane_g_ParamLimits

0xfe07,	// (0x0004aea4) slider_pane_g

0x68b1,	// (0x0004194e) popup_tb_float_extension_window_ParamLimits

0x68b1,	// (0x0004194e) popup_tb_float_extension_window

0xe556,	// (0x000495f3) aid_size_cell_tb_float_ext

0x7cee,	// (0x00042d8b) bg_popup_sub_window_cp28

0xe562,	// (0x000495ff) grid_tb_float_ext_pane

0xe56c,	// (0x00049609) cell_tb_float_ext_pane_ParamLimits

0xe56c,	// (0x00049609) cell_tb_float_ext_pane

0xe586,	// (0x00049623) cell_tb_float_ext_pane_g1

0xe58f,	// (0x0004962c) grid_highlight_pane_cp12

0x6fe4,	// (0x00042081) cell_last_hwr_side_pane_ParamLimits

0x6fe4,	// (0x00042081) cell_last_hwr_side_pane

0xc126,	// (0x000471c3) cell_last_hwr_side_pane_g1

0xe598,	// (0x00049635) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x0004aead) cell_last_hwr_side_pane_g

0x7763,	// (0x00042800) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7763,	// (0x00042800) vkb2_area_bottom_space_btn_pane

0xc3a4,	// (0x00047441) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe04b,	// (0x000490e8) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x79dd,	// (0x00042a7a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x79fc,	// (0x00042a99) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x79fc,	// (0x00042a99) vkb2_area_bottom_space_btn_pane_g1

0x7a36,	// (0x00042ad3) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7a36,	// (0x00042ad3) vkb2_area_bottom_space_btn_pane_g2

0x7a6c,	// (0x00042b09) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a6c,	// (0x00042b09) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x0004aeb2) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x0004aeb2) vkb2_area_bottom_space_btn_pane_g

0x6f58,	// (0x00041ff5) cel_fep_hwr_func_pane_ParamLimits

0x6f58,	// (0x00041ff5) cel_fep_hwr_func_pane

0x6f94,	// (0x00042031) cell_hwr_side_button_pane_ParamLimits

0x6f94,	// (0x00042031) cell_hwr_side_button_pane

0xda2f,	// (0x00048acc) aid_area_touch_clock_ParamLimits

0x806b,	// (0x00043108) bg_uniindi_top_pane_ParamLimits

0xda41,	// (0x00048ade) uniindi_top_pane_g1_ParamLimits

0xda57,	// (0x00048af4) uniindi_top_pane_g2_ParamLimits

0xda63,	// (0x00048b00) uniindi_top_pane_g3_ParamLimits

0xda74,	// (0x00048b11) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x0004adc5) uniindi_top_pane_g_ParamLimits

0xda81,	// (0x00048b1e) uniindi_top_pane_t1_ParamLimits

0x806b,	// (0x00043108) bg_vkb2_func_pane_cp01_ParamLimits

0x806b,	// (0x00043108) bg_vkb2_func_pane_cp01

0xe5a1,	// (0x0004963e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe5a1,	// (0x0004963e) cel_fep_hwr_func_pane_g1

0x806b,	// (0x00043108) bg_vkb2_func_pane_cp02_ParamLimits

0x806b,	// (0x00043108) bg_vkb2_func_pane_cp02

0xe5a1,	// (0x0004963e) cell_hwr_side_button_pane_g1_ParamLimits

0xe5a1,	// (0x0004963e) cell_hwr_side_button_pane_g1

0x999c,	// (0x00044a39) status_pane_g4_ParamLimits

0x999c,	// (0x00044a39) status_pane_g4

0x99b6,	// (0x00044a53) status_pane_t1

0xbe60,	// (0x00046efd) form2_midp_gauge_slider_cont_pane

0xbe68,	// (0x00046f05) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe7a,	// (0x00046f17) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe8c,	// (0x00046f29) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0004ab91) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe9e,	// (0x00046f3b) form2_midp_slider_pane_ParamLimits

0x73d2,	// (0x0004246f) aid_size_cell_func_vkb2_ParamLimits

0x73d2,	// (0x0004246f) aid_size_cell_func_vkb2

0xe542,	// (0x000495df) slider_pane_g4_ParamLimits

0xe542,	// (0x000495df) slider_pane_g4

0x7ab6,	// (0x00042b53) form2_midp_gauge_slider_pane_t2_cp01

0x7ac4,	// (0x00042b61) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7ac4,	// (0x00042b61) form2_midp_gauge_slider_pane_t3_cp01

0x7ae1,	// (0x00042b7e) form2_midp_slider_pane_cp01

0x7cee,	// (0x00042d8b) navi_smil_pane

0xe5da,	// (0x00049677) navi_smil_pane_g1

0xe5e2,	// (0x0004967f) navi_smil_pane_t1

0xe5af,	// (0x0004964c) form2_midp_slider_pane_g1

0xe5b8,	// (0x00049655) form2_midp_slider_pane_g2

0xe5c0,	// (0x0004965d) form2_midp_slider_pane_g3

0xe5af,	// (0x0004964c) form2_midp_slider_pane_g4

0xe5c8,	// (0x00049665) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x0004aebb) form2_midp_slider_pane_g

0x7aa6,	// (0x00042b43) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7aa6,	// (0x00042b43) vkb2_area_bottom_space_btn_pane_g4

0x97cd,	// (0x0004486a) lc0_navi_pane_ParamLimits

0x97cd,	// (0x0004486a) lc0_navi_pane

0x984f,	// (0x000448ec) lc0_stat_indi_pane_ParamLimits

0x984f,	// (0x000448ec) lc0_stat_indi_pane

0x9866,	// (0x00044903) ls0_title_pane_ParamLimits

0x9866,	// (0x00044903) ls0_title_pane

0x865a,	// (0x000436f7) bg_popup_sub_pane_cp14_ParamLimits

0xda16,	// (0x00048ab3) list_uniindi_pane_ParamLimits

0xda22,	// (0x00048abf) uniindi_top_pane_ParamLimits

0xdabe,	// (0x00048b5b) list_single_uniindi_pane_g1_ParamLimits

0xdad1,	// (0x00048b6e) list_single_uniindi_pane_t1_ParamLimits

0x7aea,	// (0x00042b87) lc0_stat_clock_pane_ParamLimits

0x7aea,	// (0x00042b87) lc0_stat_clock_pane

0xe5f0,	// (0x0004968d) lc0_stat_indi_pane_g1_ParamLimits

0xe5f0,	// (0x0004968d) lc0_stat_indi_pane_g1

0xe5fd,	// (0x0004969a) lc0_stat_indi_pane_g2_ParamLimits

0xe5fd,	// (0x0004969a) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x0004aec6) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x0004aec6) lc0_stat_indi_pane_g

0x7af7,	// (0x00042b94) lc0_uni_indicator_pane_ParamLimits

0x7af7,	// (0x00042b94) lc0_uni_indicator_pane

0xe60a,	// (0x000496a7) ls0_title_pane_g1_ParamLimits

0xe60a,	// (0x000496a7) ls0_title_pane_g1

0xe61e,	// (0x000496bb) ls0_title_pane_t1_ParamLimits

0xe61e,	// (0x000496bb) ls0_title_pane_t1

0x7b04,	// (0x00042ba1) lc0_uni_indicator_pane_g1_ParamLimits

0x7b04,	// (0x00042ba1) lc0_uni_indicator_pane_g1

0xe654,	// (0x000496f1) lc0_stat_clock_pane_t1

0x7cee,	// (0x00042d8b) main_ai5_pane

0xe662,	// (0x000496ff) ai5_sk_pane_ParamLimits

0xe662,	// (0x000496ff) ai5_sk_pane

0xe66f,	// (0x0004970c) cell_ai5_widget_pane_ParamLimits

0xe66f,	// (0x0004970c) cell_ai5_widget_pane

0xe725,	// (0x000497c2) aid_size_cell_widget_grid

0xe73b,	// (0x000497d8) bg_ai5_widget_pane_ParamLimits

0xe73b,	// (0x000497d8) bg_ai5_widget_pane

0xe7a5,	// (0x00049842) cell_ai5_widget_pane_g2

0xe7b5,	// (0x00049852) cell_ai5_widget_pane_g3

0xe7d4,	// (0x00049871) cell_ai5_widget_pane_g4

0xe7e0,	// (0x0004987d) cell_ai5_widget_pane_g5

0xe7ec,	// (0x00049889) cell_ai5_widget_pane_g6

0xe7f8,	// (0x00049895) cell_ai5_widget_pane_g7

0xe840,	// (0x000498dd) cell_ai5_widget_pane_t1_ParamLimits

0xe840,	// (0x000498dd) cell_ai5_widget_pane_t1

0xe85d,	// (0x000498fa) cell_ai5_widget_pane_t2_ParamLimits

0xe85d,	// (0x000498fa) cell_ai5_widget_pane_t2

0xe875,	// (0x00049912) cell_ai5_widget_pane_t3_ParamLimits

0xe875,	// (0x00049912) cell_ai5_widget_pane_t3

0xe88d,	// (0x0004992a) cell_ai5_widget_pane_t4_ParamLimits

0xe88d,	// (0x0004992a) cell_ai5_widget_pane_t4

0xe8a7,	// (0x00049944) cell_ai5_widget_pane_t5_ParamLimits

0xe8a7,	// (0x00049944) cell_ai5_widget_pane_t5

0xe8c6,	// (0x00049963) cell_ai5_widget_pane_t6_ParamLimits

0xe8c6,	// (0x00049963) cell_ai5_widget_pane_t6

0xe8d8,	// (0x00049975) cell_ai5_widget_pane_t7_ParamLimits

0xe8d8,	// (0x00049975) cell_ai5_widget_pane_t7

0xe8f1,	// (0x0004998e) cell_ai5_widget_pane_t8_ParamLimits

0xe8f1,	// (0x0004998e) cell_ai5_widget_pane_t8

0x0009,

0xfe43,	// (0x0004aee0) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x0004aee0) cell_ai5_widget_pane_t

0xe93d,	// (0x000499da) grid_ai5_widget_pane

0x865a,	// (0x000436f7) highlight_cell_ai5_widget_pane_ParamLimits

0x865a,	// (0x000436f7) highlight_cell_ai5_widget_pane

0xe955,	// (0x000499f2) ai5_sk_left_pane

0xe95f,	// (0x000499fc) ai5_sk_middle_pane

0xe969,	// (0x00049a06) ai5_sk_right_pane

0xe973,	// (0x00049a10) bg_ai5_widget_pane_g1_ParamLimits

0xe973,	// (0x00049a10) bg_ai5_widget_pane_g1

0xe97f,	// (0x00049a1c) bg_ai5_widget_pane_g2_ParamLimits

0xe97f,	// (0x00049a1c) bg_ai5_widget_pane_g2

0xe98b,	// (0x00049a28) bg_ai5_widget_pane_g3_ParamLimits

0xe98b,	// (0x00049a28) bg_ai5_widget_pane_g3

0xe997,	// (0x00049a34) bg_ai5_widget_pane_g4_ParamLimits

0xe997,	// (0x00049a34) bg_ai5_widget_pane_g4

0xe9a3,	// (0x00049a40) bg_ai5_widget_pane_g5_ParamLimits

0xe9a3,	// (0x00049a40) bg_ai5_widget_pane_g5

0xe9af,	// (0x00049a4c) bg_ai5_widget_pane_g6_ParamLimits

0xe9af,	// (0x00049a4c) bg_ai5_widget_pane_g6

0xe9bb,	// (0x00049a58) bg_ai5_widget_pane_g7_ParamLimits

0xe9bb,	// (0x00049a58) bg_ai5_widget_pane_g7

0xe9c7,	// (0x00049a64) bg_ai5_widget_pane_g8_ParamLimits

0xe9c7,	// (0x00049a64) bg_ai5_widget_pane_g8

0xe9d3,	// (0x00049a70) bg_ai5_widget_pane_g9_ParamLimits

0xe9d3,	// (0x00049a70) bg_ai5_widget_pane_g9

0x0008,

0xfe58,	// (0x0004aef5) bg_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x0004aef5) bg_ai5_widget_pane_g

0xea06,	// (0x00049aa3) cell_shortcut_ai5_widget_pane_ParamLimits

0xea06,	// (0x00049aa3) cell_shortcut_ai5_widget_pane

0x92d7,	// (0x00044374) bg_cell_shortcut_ai5_widget_pane

0xea17,	// (0x00049ab4) cell_grid_ai5_widget_pane_g1

0xea20,	// (0x00049abd) highlight_cell_shortcut_ai5_widget_pane

0x9b2b,	// (0x00044bc8) ai5_sk_left_pane_g1

0xea28,	// (0x00049ac5) ai5_sk_left_pane_g2

0xea30,	// (0x00049acd) ai5_sk_left_pane_g3

0xea38,	// (0x00049ad5) ai5_sk_left_pane_g4

0x0003,

0xfe6b,	// (0x0004af08) ai5_sk_left_pane_g

0xea40,	// (0x00049add) ai5_sk_left_pane_t1

0x9b23,	// (0x00044bc0) ai5_sk_right_pane_g1

0xea4e,	// (0x00049aeb) ai5_sk_right_pane_g2

0xea56,	// (0x00049af3) ai5_sk_right_pane_g3

0xea5e,	// (0x00049afb) ai5_sk_right_pane_g4

0x0003,

0xfe74,	// (0x0004af11) ai5_sk_right_pane_g

0xea66,	// (0x00049b03) ai5_sk_right_pane_t1

0x9b23,	// (0x00044bc0) ai5_sk_middle_pane_g1

0x9b2b,	// (0x00044bc8) ai5_sk_middle_pane_g2

0x9b43,	// (0x00044be0) ai5_sk_middle_pane_g3

0xea56,	// (0x00049af3) ai5_sk_middle_pane_g4

0xea30,	// (0x00049acd) ai5_sk_middle_pane_g5

0xea74,	// (0x00049b11) ai5_sk_middle_pane_g6

0xea7c,	// (0x00049b19) ai5_sk_middle_pane_g7

0x0006,

0xfe7d,	// (0x0004af1a) ai5_sk_middle_pane_g

0x965d,	// (0x000446fa) aid_touch_area_size_lc0_ParamLimits

0x965d,	// (0x000446fa) aid_touch_area_size_lc0

0x70e3,	// (0x00042180) cell_hwr_candidate_pane_t1_ParamLimits

0x9679,	// (0x00044716) aid_touch_navi_pane

0x994e,	// (0x000449eb) status_dt_navi_pane_ParamLimits

0x994e,	// (0x000449eb) status_dt_navi_pane

0x995b,	// (0x000449f8) status_dt_sta_pane_ParamLimits

0x995b,	// (0x000449f8) status_dt_sta_pane

0xea84,	// (0x00049b21) dt_sta_controll_pane

0xea91,	// (0x00049b2e) dt_sta_indi_pane

0xeaa2,	// (0x00049b3f) dt_sta_title_pane

0x806b,	// (0x00043108) bg_dt_sta_indi_pane_ParamLimits

0x806b,	// (0x00043108) bg_dt_sta_indi_pane

0xeab5,	// (0x00049b52) dt_sta_battery_pane

0xeabd,	// (0x00049b5a) dt_sta_indi_pane_g1

0xeac6,	// (0x00049b63) dt_sta_indi_pane_g2

0xeacf,	// (0x00049b6c) dt_sta_indi_pane_g3

0x0002,

0xfe8c,	// (0x0004af29) dt_sta_indi_pane_g

0xead8,	// (0x00049b75) dt_sta_signal_pane

0x865a,	// (0x000436f7) bg_dt_sta_title_pane_ParamLimits

0x865a,	// (0x000436f7) bg_dt_sta_title_pane

0xeae1,	// (0x00049b7e) dt_sta_title_pane_g1

0xeae9,	// (0x00049b86) dt_sta_title_pane_t1_ParamLimits

0xeae9,	// (0x00049b86) dt_sta_title_pane_t1

0x7cee,	// (0x00042d8b) bg_dt_sta_control_pane

0xeafe,	// (0x00049b9b) dt_sta_controll_pane_g1

0xeb07,	// (0x00049ba4) bg_dt_sta_title_pane_g1

0xeb10,	// (0x00049bad) bg_dt_sta_title_pane_g2

0xeb19,	// (0x00049bb6) bg_dt_sta_title_pane_g3

0x0002,

0xfe93,	// (0x0004af30) bg_dt_sta_title_pane_g

0xc126,	// (0x000471c3) bg_dt_sta_indi_pane_g1

0xeb22,	// (0x00049bbf) dt_sta_signal_pane_g1

0xeb2a,	// (0x00049bc7) dt_sta_signal_pane_g2

0x0001,

0xfe9a,	// (0x0004af37) dt_sta_signal_pane_g

0xeb32,	// (0x00049bcf) dt_sta_battery_pane_g1

0xeb3b,	// (0x00049bd8) dt_sta_battery_pane_t1

0xc126,	// (0x000471c3) bg_dt_sta_control_pane_g1

0x8de1,	// (0x00043e7e) fep_china_uni_eep_pane

0x8de9,	// (0x00043e86) fep_china_uni_entry_pane_ParamLimits

0x8df9,	// (0x00043e96) popup_fep_china_uni_window_g1_ParamLimits

0x8e09,	// (0x00043ea6) popup_fep_china_uni_window_g2_ParamLimits

0x8e09,	// (0x00043ea6) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0004a7c5) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0004a7c5) popup_fep_china_uni_window_g

0xeb4a,	// (0x00049be7) fep_china_uni_eep_pane_g1

0xeb52,	// (0x00049bef) fep_china_uni_eep_pane_t1

0xe5d1,	// (0x0004966e) aid_touch_area_size_smil_player

0x97c5,	// (0x00044862) lc0_clock_pane

0x99aa,	// (0x00044a47) status_pane_g5_ParamLimits

0x99aa,	// (0x00044a47) status_pane_g5

0x6576,	// (0x00041613) popup_keymap_window

0x9970,	// (0x00044a0d) status_icon_pane

0xe7b5,	// (0x00049852) cell_ai5_widget_pane_g3_ParamLimits

0xe7d4,	// (0x00049871) cell_ai5_widget_pane_g4_ParamLimits

0xe7e0,	// (0x0004987d) cell_ai5_widget_pane_g5_ParamLimits

0xe804,	// (0x000498a1) cell_ai5_widget_pane_g8_ParamLimits

0xe804,	// (0x000498a1) cell_ai5_widget_pane_g8

0xe818,	// (0x000498b5) cell_ai5_widget_pane_g9_ParamLimits

0xe818,	// (0x000498b5) cell_ai5_widget_pane_g9

0xe82c,	// (0x000498c9) cell_ai5_widget_pane_g10_ParamLimits

0xe82c,	// (0x000498c9) cell_ai5_widget_pane_g10

0xeb61,	// (0x00049bfe) status_icon_pane_g1

0x7cee,	// (0x00042d8b) bg_popup_sub_pane_cp13

0xeb69,	// (0x00049c06) popup_keymap_window_t1

0x95a2,	// (0x0004463f) control_pane_g6_ParamLimits

0x95a2,	// (0x0004463f) control_pane_g6

0x95af,	// (0x0004464c) control_pane_g7_ParamLimits

0x95af,	// (0x0004464c) control_pane_g7

0x95bc,	// (0x00044659) control_pane_g8_ParamLimits

0x95bc,	// (0x00044659) control_pane_g8

0xea84,	// (0x00049b21) dt_sta_controll_pane_ParamLimits

0xea91,	// (0x00049b2e) dt_sta_indi_pane_ParamLimits

0xeaa2,	// (0x00049b3f) dt_sta_title_pane_ParamLimits

0x8586,	// (0x00043623) aid_size_touch_scroll_bar_cale

0x5b21,	// (0x00040bbe) popup_discreet_window_ParamLimits

0x5b21,	// (0x00040bbe) popup_discreet_window

0x5ba9,	// (0x00040c46) popup_sk_window

0xa194,	// (0x00045231) bg_popup_sub_pane_cp28_ParamLimits

0xa194,	// (0x00045231) bg_popup_sub_pane_cp28

0xeb77,	// (0x00049c14) popup_discreet_window_g1_ParamLimits

0xeb77,	// (0x00049c14) popup_discreet_window_g1

0xeb97,	// (0x00049c34) popup_discreet_window_t1_ParamLimits

0xeb97,	// (0x00049c34) popup_discreet_window_t1

0xebb5,	// (0x00049c52) popup_discreet_window_t2_ParamLimits

0xebb5,	// (0x00049c52) popup_discreet_window_t2

0x0002,

0xfe9f,	// (0x0004af3c) popup_discreet_window_t_ParamLimits

0xfe9f,	// (0x0004af3c) popup_discreet_window_t

0x7b18,	// (0x00042bb5) popup_sk_window_g1

0x7b22,	// (0x00042bbf) popup_sk_window_g2

0x0001,

0xfea6,	// (0x0004af43) popup_sk_window_g

0x7b2c,	// (0x00042bc9) popup_sk_window_t1

0x7b3a,	// (0x00042bd7) popup_sk_window_t1_copy1

0xe7a5,	// (0x00049842) cell_ai5_widget_pane_g2_ParamLimits

0xe903,	// (0x000499a0) cell_ai5_widget_pane_t9_ParamLimits

0xe903,	// (0x000499a0) cell_ai5_widget_pane_t9

0x7cee,	// (0x00042d8b) main_fep_fshwr2_pane

0x7b48,	// (0x00042be5) aid_fshwr2_btn_pane

0x7b54,	// (0x00042bf1) aid_fshwr2_syb_pane

0x7b65,	// (0x00042c02) aid_fshwr2_txt_pane

0x7b71,	// (0x00042c0e) fshwr2_func_candi_pane

0x7b86,	// (0x00042c23) fshwr2_hwr_syb_pane

0x7b9d,	// (0x00042c3a) fshwr2_icf_pane

0x7cee,	// (0x00042d8b) fshwr2_icf_bg_pane

0xec07,	// (0x00049ca4) fshwr2_icf_pane_t1_ParamLimits

0xec07,	// (0x00049ca4) fshwr2_icf_pane_t1

0xc126,	// (0x000471c3) fshwr2_func_candi_pane_g1

0xec1e,	// (0x00049cbb) fshwr2_func_candi_row_pane_ParamLimits

0xec1e,	// (0x00049cbb) fshwr2_func_candi_row_pane

0xec2f,	// (0x00049ccc) cell_fshwr2_syb_pane_ParamLimits

0xec2f,	// (0x00049ccc) cell_fshwr2_syb_pane

0xc3a4,	// (0x00047441) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc3a4,	// (0x00047441) fshwr2_hwr_syb_pane_g1

0x7cee,	// (0x00042d8b) bg_popup_call_pane_cp01

0xec49,	// (0x00049ce6) fshwr2_func_candi_cell_pane_ParamLimits

0xec49,	// (0x00049ce6) fshwr2_func_candi_cell_pane

0xec7a,	// (0x00049d17) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec7a,	// (0x00049d17) fshwr2_func_candi_cell_bg_pane

0xec94,	// (0x00049d31) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec94,	// (0x00049d31) fshwr2_func_candi_cell_pane_g1

0xecbc,	// (0x00049d59) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xecbc,	// (0x00049d59) fshwr2_func_candi_cell_pane_t1

0x7cee,	// (0x00042d8b) bg_button_pane_cp08

0x92d7,	// (0x00044374) cell_fshwr2_syb_bg_pane

0xeccf,	// (0x00049d6c) cell_fshwr2_syb_bg_pane_g1

0xecd7,	// (0x00049d74) cell_fshwr2_syb_bg_pane_t1

0x865a,	// (0x000436f7) main_tmo_pane

0xaca3,	// (0x00045d40) uni_indicator_pane_g1_ParamLimits

0xacb8,	// (0x00045d55) uni_indicator_pane_g2_ParamLimits

0xacce,	// (0x00045d6b) uni_indicator_pane_g3_ParamLimits

0xace4,	// (0x00045d81) uni_indicator_pane_g4_ParamLimits

0xace4,	// (0x00045d81) uni_indicator_pane_g4

0xacf8,	// (0x00045d95) uni_indicator_pane_g5_ParamLimits

0xacf8,	// (0x00045d95) uni_indicator_pane_g5

0xad0c,	// (0x00045da9) uni_indicator_pane_g6_ParamLimits

0xad0c,	// (0x00045da9) uni_indicator_pane_g6

0xf92c,	// (0x0004a9c9) uni_indicator_pane_g_ParamLimits

0xd60d,	// (0x000486aa) popup_tmo_note_window_ParamLimits

0xd60d,	// (0x000486aa) popup_tmo_note_window

0x865a,	// (0x000436f7) fshwr2_bg_pane

0xecad,	// (0x00049d4a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xecad,	// (0x00049d4a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeab,	// (0x0004af48) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeab,	// (0x0004af48) fshwr2_func_candi_cell_pane_g

0xc126,	// (0x000471c3) bg_popup_window_pane_cp01

0xece6,	// (0x00049d83) bg_popup_window_pane_g1_cp01

0xecef,	// (0x00049d8c) bg_popup_window_pane_cp22_ParamLimits

0xecef,	// (0x00049d8c) bg_popup_window_pane_cp22

0xecfd,	// (0x00049d9a) listscroll_tmo_link_pane_ParamLimits

0xecfd,	// (0x00049d9a) listscroll_tmo_link_pane

0xed3d,	// (0x00049dda) popup_tmo_note_window_g1_ParamLimits

0xed3d,	// (0x00049dda) popup_tmo_note_window_g1

0xed4a,	// (0x00049de7) tmo_note_info_pane_ParamLimits

0xed4a,	// (0x00049de7) tmo_note_info_pane

0xed64,	// (0x00049e01) list_tmo_note_info_pane_g1_ParamLimits

0xed64,	// (0x00049e01) list_tmo_note_info_pane_g1

0xed7b,	// (0x00049e18) list_tmo_note_info_pane_g2_ParamLimits

0xed7b,	// (0x00049e18) list_tmo_note_info_pane_g2

0x0001,

0xfeb0,	// (0x0004af4d) list_tmo_note_info_pane_g_ParamLimits

0xfeb0,	// (0x0004af4d) list_tmo_note_info_pane_g

0xed97,	// (0x00049e34) list_tmo_note_info_text_pane_ParamLimits

0xed97,	// (0x00049e34) list_tmo_note_info_text_pane

0xee18,	// (0x00049eb5) list_tmo_link_pane

0xee25,	// (0x00049ec2) scroll_pane_cp20

0xee32,	// (0x00049ecf) list_single_tmo_link_pane_ParamLimits

0xee32,	// (0x00049ecf) list_single_tmo_link_pane

0xee42,	// (0x00049edf) list_single_tmo_link_pane_t1

0xee50,	// (0x00049eed) list_tmo_note_info_text_pane_t1_ParamLimits

0xee50,	// (0x00049eed) list_tmo_note_info_text_pane_t1

0x8708,	// (0x000437a5) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8708,	// (0x000437a5) aid_size_touch_scroll_bar_cp01

0x4f94,	// (0x00040031) aid_size_touch_slider_marker

0x5b91,	// (0x00040c2e) popup_settings_window_ParamLimits

0x5b91,	// (0x00040c2e) popup_settings_window

0x512b,	// (0x000401c8) popup_candi_list_indi_window

0x9679,	// (0x00044716) aid_touch_navi_pane_ParamLimits

0x732b,	// (0x000423c8) rs_clock_indi_pane

0x7334,	// (0x000423d1) sctrl_sk_bottom_pane_ParamLimits

0x7345,	// (0x000423e2) sctrl_sk_top_pane_ParamLimits

0x742c,	// (0x000424c9) popup_fep_tooltip_window

0xe725,	// (0x000497c2) aid_size_cell_widget_grid_ParamLimits

0xe799,	// (0x00049836) cell_ai5_widget_pane_g1_ParamLimits

0xe799,	// (0x00049836) cell_ai5_widget_pane_g1

0xe7ec,	// (0x00049889) cell_ai5_widget_pane_g6_ParamLimits

0xe7f8,	// (0x00049895) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2e,	// (0x0004aecb) cell_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x0004aecb) cell_ai5_widget_pane_g

0xe927,	// (0x000499c4) cell_ai5_widget_pane_t10_ParamLimits

0xe927,	// (0x000499c4) cell_ai5_widget_pane_t10

0xe93d,	// (0x000499da) grid_ai5_widget_pane_ParamLimits

0xe9df,	// (0x00049a7c) cell_contacts_ai5_widget_pane_ParamLimits

0xe9df,	// (0x00049a7c) cell_contacts_ai5_widget_pane

0xebca,	// (0x00049c67) popup_discreet_window_t3_ParamLimits

0xebca,	// (0x00049c67) popup_discreet_window_t3

0x7bb2,	// (0x00042c4f) popup_fshwr2_char_preview_window_ParamLimits

0x7bb2,	// (0x00042c4f) popup_fshwr2_char_preview_window

0xedb5,	// (0x00049e52) tmo_note_info_pane_t1

0xedca,	// (0x00049e67) tmo_note_info_pane_t2

0xeddf,	// (0x00049e7c) tmo_note_info_pane_t3

0xedf4,	// (0x00049e91) tmo_note_info_pane_t4

0xee06,	// (0x00049ea3) tmo_note_info_pane_t5

0x0004,

0xfeb5,	// (0x0004af52) tmo_note_info_pane_t

0xee18,	// (0x00049eb5) list_tmo_link_pane_ParamLimits

0xee25,	// (0x00049ec2) scroll_pane_cp20_ParamLimits

0x7cee,	// (0x00042d8b) bg_popup_fep_char_preview_window_cp01

0xee69,	// (0x00049f06) popup_fshwr2_char_preview_window_t1

0xee77,	// (0x00049f14) popup_candi_list_indi_window_g1

0xee80,	// (0x00049f1d) bg_cell_contacts_ai5_widget_pane

0xee8c,	// (0x00049f29) cell_contacts_ai5_widget_pane_g1

0xeea0,	// (0x00049f3d) cell_contacts_ai5_widget_pane_g2

0xeeac,	// (0x00049f49) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec0,	// (0x0004af5d) cell_contacts_ai5_widget_pane_g

0xeebf,	// (0x00049f5c) cell_contacts_ai5_widget_pane_t1

0x865a,	// (0x000436f7) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef36,	// (0x00049fd3) settings_container_pane

0x92d7,	// (0x00044374) listscroll_set_pane_copy1

0xb813,	// (0x000468b0) scroll_pane_cp121_copy1

0xef42,	// (0x00049fdf) set_content_pane_copy1

0xef4a,	// (0x00049fe7) aid_height_set_list_copy1_ParamLimits

0xef4a,	// (0x00049fe7) aid_height_set_list_copy1

0xaf04,	// (0x00045fa1) aid_size_parent_copy1_ParamLimits

0xaf04,	// (0x00045fa1) aid_size_parent_copy1

0xef56,	// (0x00049ff3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef56,	// (0x00049ff3) button_value_adjust_pane_cp6_copy1

0x9617,	// (0x000446b4) list_highlight_pane_cp2_copy1_ParamLimits

0x9617,	// (0x000446b4) list_highlight_pane_cp2_copy1

0xef6a,	// (0x0004a007) list_set_pane_copy1_ParamLimits

0xef6a,	// (0x0004a007) list_set_pane_copy1

0xeed1,	// (0x00049f6e) main_pane_set_t1_copy1_ParamLimits

0xeed1,	// (0x00049f6e) main_pane_set_t1_copy1

0xef0b,	// (0x00049fa8) main_pane_set_t2_copy1_ParamLimits

0xef0b,	// (0x00049fa8) main_pane_set_t2_copy1

0xf017,	// (0x0004a0b4) main_pane_set_t3_copy1

0xf025,	// (0x0004a0c2) main_pane_set_t4_copy1

0xef2a,	// (0x00049fc7) set_content_pane_g1_copy1_ParamLimits

0xef2a,	// (0x00049fc7) set_content_pane_g1_copy1

0xf033,	// (0x0004a0d0) setting_code_pane_copy1

0xf03b,	// (0x0004a0d8) setting_slider_graphic_pane_copy1

0xf03b,	// (0x0004a0d8) setting_slider_pane_copy1

0xf03b,	// (0x0004a0d8) setting_text_pane_copy1

0xf03b,	// (0x0004a0d8) setting_volume_pane_copy1

0xf033,	// (0x0004a0d0) settings_code_pane_cp2_copy1

0xf043,	// (0x0004a0e0) settings_code_pane_cp_copy1_ParamLimits

0xf043,	// (0x0004a0e0) settings_code_pane_cp_copy1

0x7bc6,	// (0x00042c63) volume_set_pane_copy1

0xf057,	// (0x0004a0f4) volume_set_pane_g10_copy1

0xf05f,	// (0x0004a0fc) volume_set_pane_g1_copy1

0xf067,	// (0x0004a104) volume_set_pane_g2_copy1

0xf06f,	// (0x0004a10c) volume_set_pane_g3_copy1

0xf077,	// (0x0004a114) volume_set_pane_g4_copy1

0xf07f,	// (0x0004a11c) volume_set_pane_g5_copy1

0xf087,	// (0x0004a124) volume_set_pane_g6_copy1

0xf08f,	// (0x0004a12c) volume_set_pane_g7_copy1

0xf097,	// (0x0004a134) volume_set_pane_g8_copy1

0xf09f,	// (0x0004a13c) volume_set_pane_g9_copy1

0x7de2,	// (0x00042e7f) bg_set_opt_pane_cp_copy1_ParamLimits

0x7de2,	// (0x00042e7f) bg_set_opt_pane_cp_copy1

0x7bce,	// (0x00042c6b) setting_slider_pane_t1_copy1_ParamLimits

0x7bce,	// (0x00042c6b) setting_slider_pane_t1_copy1

0x7bec,	// (0x00042c89) setting_slider_pane_t2_copy1_ParamLimits

0x7bec,	// (0x00042c89) setting_slider_pane_t2_copy1

0x7c06,	// (0x00042ca3) setting_slider_pane_t3_copy1_ParamLimits

0x7c06,	// (0x00042ca3) setting_slider_pane_t3_copy1

0x7c1e,	// (0x00042cbb) slider_set_pane_copy1_ParamLimits

0x7c1e,	// (0x00042cbb) slider_set_pane_copy1

0x86a9,	// (0x00043746) set_opt_bg_pane_g1_copy2

0x86b1,	// (0x0004374e) set_opt_bg_pane_g2_copy2

0xf0a7,	// (0x0004a144) set_opt_bg_pane_g3_copy2

0x86c1,	// (0x0004375e) set_opt_bg_pane_g4_copy2

0x86c9,	// (0x00043766) set_opt_bg_pane_g5_copy2

0x86d1,	// (0x0004376e) set_opt_bg_pane_g6_copy2

0xf0b1,	// (0x0004a14e) set_opt_bg_pane_g7_copy2

0xf0b9,	// (0x0004a156) set_opt_bg_pane_g8_copy2

0xf0c3,	// (0x0004a160) set_opt_bg_pane_g9_copy2

0xf0cd,	// (0x0004a16a) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0cd,	// (0x0004a16a) aid_size_touch_slider_mark_copy1

0xf0e1,	// (0x0004a17e) slider_set_pane_g1_copy1

0xf0ea,	// (0x0004a187) slider_set_pane_g2_copy1

0xb376,	// (0x00046413) slider_set_pane_g3_copy1_ParamLimits

0xb376,	// (0x00046413) slider_set_pane_g3_copy1

0xb38a,	// (0x00046427) slider_set_pane_g4_copy1_ParamLimits

0xb38a,	// (0x00046427) slider_set_pane_g4_copy1

0xb3a2,	// (0x0004643f) slider_set_pane_g5_copy1_ParamLimits

0xb3a2,	// (0x0004643f) slider_set_pane_g5_copy1

0xb376,	// (0x00046413) slider_set_pane_g6_copy1_ParamLimits

0xb376,	// (0x00046413) slider_set_pane_g6_copy1

0xf0f2,	// (0x0004a18f) slider_set_pane_g7_copy1_ParamLimits

0xf0f2,	// (0x0004a18f) slider_set_pane_g7_copy1

0x7d02,	// (0x00042d9f) bg_set_opt_pane_cp2_copy1

0xf108,	// (0x0004a1a5) setting_slider_graphic_pane_g1_copy1

0xf111,	// (0x0004a1ae) setting_slider_graphic_pane_t1_copy1

0xf121,	// (0x0004a1be) setting_slider_graphic_pane_t2_copy1

0xf131,	// (0x0004a1ce) slider_set_pane_cp_copy1

0xf141,	// (0x0004a1de) input_focus_pane_cp1_copy1

0xf14a,	// (0x0004a1e7) list_set_text_pane_copy1

0xf152,	// (0x0004a1ef) setting_text_pane_g1_copy1

0x49bf,	// (0x0003fa5c) set_text_pane_t1_copy1

0xf141,	// (0x0004a1de) input_focus_pane_cp2_copy1

0xf152,	// (0x0004a1ef) setting_code_pane_g1_copy1

0xf15b,	// (0x0004a1f8) setting_code_pane_t1_copy1

0xf169,	// (0x0004a206) list_set_graphic_pane_copy1

0x7d02,	// (0x00042d9f) bg_set_opt_pane_cp4_copy1

0x8fdd,	// (0x0004407a) list_set_graphic_pane_g1_copy1_ParamLimits

0x8fdd,	// (0x0004407a) list_set_graphic_pane_g1_copy1

0xf17b,	// (0x0004a218) list_set_graphic_pane_g2_copy1

0x8ff5,	// (0x00044092) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ff5,	// (0x00044092) list_set_graphic_pane_t1_copy1

0xc126,	// (0x000471c3) rs_clock_indi_pane_g1

0xf183,	// (0x0004a220) rs_clock_indi_pane_t1

0xf191,	// (0x0004a22e) rs_indi_pane

0xf199,	// (0x0004a236) rs_indi_pane_g1

0xf1a2,	// (0x0004a23f) rs_indi_pane_g2

0xf1ab,	// (0x0004a248) rs_indi_pane_g3

0x0002,

0xfec7,	// (0x0004af64) rs_indi_pane_g

0x92d7,	// (0x00044374) bg_popup_preview_window_pane_cp03

0xf1b4,	// (0x0004a251) popup_fep_tooltip_window_t1

0xcdae,	// (0x00047e4b) popup_note2_window_g2_ParamLimits

0xcdae,	// (0x00047e4b) popup_note2_window_g2

0x0001,

0xfc60,	// (0x0004acfd) popup_note2_window_g_ParamLimits

0xfc60,	// (0x0004acfd) popup_note2_window_g

0xd2a9,	// (0x00048346) bg_popup_sub_pane_cp11_ParamLimits

0xd2b6,	// (0x00048353) cell_ai3_links_pane_g1_ParamLimits

0xd2cd,	// (0x0004836a) cell_ai3_links_pane_t1

0x49bf,	// (0x0003fa5c) set_text_pane_t1_copy1_ParamLimits

0x91e8,	// (0x00044285) cell_graphic_popup_pane_cp2_ParamLimits

0x91e8,	// (0x00044285) cell_graphic_popup_pane_cp2

0xf1c2,	// (0x0004a25f) cell_graphic_popup_pane_g1_cp2

0x8399,	// (0x00043436) cell_graphic_popup_pane_g2_cp2

0xf1ca,	// (0x0004a267) cell_graphic_popup_pane_g3_cp2

0xf1d2,	// (0x0004a26f) cell_graphic_popup_pane_t2_cp2

0x83aa,	// (0x00043447) grid_highlight_pane_cp3_cp2

0x89ee,	// (0x00043a8b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x865a,	// (0x000436f7) main_tmo_pane_ParamLimits

0xd601,	// (0x0004869e) popup_tmo_big_image_note_window

0xe789,	// (0x00049826) cell_ai5_widget_list_pane

0xe791,	// (0x0004982e) cell_ai5_widget_lrg_icon_pane

0xedb5,	// (0x00049e52) tmo_note_info_pane_t1_ParamLimits

0xedca,	// (0x00049e67) tmo_note_info_pane_t2_ParamLimits

0xeddf,	// (0x00049e7c) tmo_note_info_pane_t3_ParamLimits

0xedf4,	// (0x00049e91) tmo_note_info_pane_t4_ParamLimits

0xee06,	// (0x00049ea3) tmo_note_info_pane_t5_ParamLimits

0xfeb5,	// (0x0004af52) tmo_note_info_pane_t_ParamLimits

0xef36,	// (0x00049fd3) settings_container_pane_ParamLimits

0xf139,	// (0x0004a1d6) indicator_popup_pane_cp5

0xf139,	// (0x0004a1d6) indicator_popup_pane_cp6

0xf169,	// (0x0004a206) list_set_graphic_pane_copy1_ParamLimits

0x7cee,	// (0x00042d8b) bg_popup_window_pane_cp23

0xf1e0,	// (0x0004a27d) popup_tmo_big_image_note_window_g1

0xf1ea,	// (0x0004a287) popup_tmo_big_image_note_window_t1

0xf1fa,	// (0x0004a297) popup_tmo_big_image_note_window_t2

0xf20a,	// (0x0004a2a7) popup_tmo_big_image_note_window_t3

0x0002,

0xfece,	// (0x0004af6b) popup_tmo_big_image_note_window_t

0xf21a,	// (0x0004a2b7) cell_ai5_widget_lrg_icon_pane_g1

0xf222,	// (0x0004a2bf) cell_ai5_widget_lrg_icon_pane_t1

0xf230,	// (0x0004a2cd) cell_ai5_widget_list_row_pane_ParamLimits

0xf230,	// (0x0004a2cd) cell_ai5_widget_list_row_pane

0xf248,	// (0x0004a2e5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf248,	// (0x0004a2e5) cell_ai5_widget_list_row_pane_g1

0xf255,	// (0x0004a2f2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf255,	// (0x0004a2f2) cell_ai5_widget_list_row_pane_t1

0xf26d,	// (0x0004a30a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf26d,	// (0x0004a30a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed5,	// (0x0004af72) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed5,	// (0x0004af72) cell_ai5_widget_list_row_pane_t

0x7cee,	// (0x00042d8b) main_fep_vtchi_ss_pane

0x7c43,	// (0x00042ce0) popup_fep_char_pre_window

0x7c4b,	// (0x00042ce8) popup_fep_ituss_window

0x7c6c,	// (0x00042d09) popup_fep_vkbss_window

0xf295,	// (0x0004a332) grid_vkbss_keypad_pane_ParamLimits

0xf295,	// (0x0004a332) grid_vkbss_keypad_pane

0xf2a5,	// (0x0004a342) ituss_keypad_pane

0x7c97,	// (0x00042d34) aid_vkbss_key_offset_ParamLimits

0x7c97,	// (0x00042d34) aid_vkbss_key_offset

0x7ca3,	// (0x00042d40) cell_vkbss_key_pane_ParamLimits

0x7ca3,	// (0x00042d40) cell_vkbss_key_pane

0xf2b5,	// (0x0004a352) bg_cell_vkbss_key_g1_ParamLimits

0xf2b5,	// (0x0004a352) bg_cell_vkbss_key_g1

0xf2c1,	// (0x0004a35e) cell_vkbss_key_3p_pane_ParamLimits

0xf2c1,	// (0x0004a35e) cell_vkbss_key_3p_pane

0xf2db,	// (0x0004a378) cell_vkbss_key_g1_ParamLimits

0xf2db,	// (0x0004a378) cell_vkbss_key_g1

0xf2f5,	// (0x0004a392) cell_vkbss_key_t1_ParamLimits

0xf2f5,	// (0x0004a392) cell_vkbss_key_t1

0x7cb9,	// (0x00042d56) cell_ituss_key_pane_ParamLimits

0x7cb9,	// (0x00042d56) cell_ituss_key_pane

0xf320,	// (0x0004a3bd) bg_cell_ituss_key_g1_ParamLimits

0xf320,	// (0x0004a3bd) bg_cell_ituss_key_g1

0xf32c,	// (0x0004a3c9) cell_ituss_key_pane_g1_ParamLimits

0xf32c,	// (0x0004a3c9) cell_ituss_key_pane_g1

0xf346,	// (0x0004a3e3) cell_ituss_key_pane_g2_ParamLimits

0xf346,	// (0x0004a3e3) cell_ituss_key_pane_g2

0x0001,

0xfedc,	// (0x0004af79) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x0004af79) cell_ituss_key_pane_g

0xf374,	// (0x0004a411) cell_ituss_key_t1_ParamLimits

0xf374,	// (0x0004a411) cell_ituss_key_t1

0xf3aa,	// (0x0004a447) cell_ituss_key_t2_ParamLimits

0xf3aa,	// (0x0004a447) cell_ituss_key_t2

0xf3db,	// (0x0004a478) cell_ituss_key_t3_ParamLimits

0xf3db,	// (0x0004a478) cell_ituss_key_t3

0xf415,	// (0x0004a4b2) cell_ituss_key_t4_ParamLimits

0xf415,	// (0x0004a4b2) cell_ituss_key_t4

0x0003,

0xfee1,	// (0x0004af7e) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0004af7e) cell_ituss_key_t

0xf44f,	// (0x0004a4ec) cell_vkbss_key_3p_pane_g1

0xf457,	// (0x0004a4f4) cell_vkbss_key_3p_pane_g2

0xf45f,	// (0x0004a4fc) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0004af87) cell_vkbss_key_3p_pane_g

0x7cee,	// (0x00042d8b) bg_popup_fep_char_preview_window_cp02

0xf467,	// (0x0004a504) popup_fep_char_pre_window_t1

0xe71b,	// (0x000497b8) main_ai5_sk_pane

0xee80,	// (0x00049f1d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee8c,	// (0x00049f29) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeea0,	// (0x00049f3d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xeeac,	// (0x00049f49) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec0,	// (0x0004af5d) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeebf,	// (0x00049f5c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x865a,	// (0x000436f7) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf476,	// (0x0004a513) main_ai5_sk_pane_g1

0x9fcd,	// (0x0004506a) popup_query_code_window_g1

0x7c61,	// (0x00042cfe) popup_fep_vkb_icf_pane

0x7c75,	// (0x00042d12) popup_fep_vtchi_icf_pane

0x865a,	// (0x000436f7) bg_icf_pane

0xf47f,	// (0x0004a51c) list_vkb_icf_pane

0x865a,	// (0x000436f7) bg_icf_pane_cp01

0xf48b,	// (0x0004a528) vtchi_icf_list_pane

0xf49c,	// (0x0004a539) list_vkb_icf_pane_t1_ParamLimits

0xf49c,	// (0x0004a539) list_vkb_icf_pane_t1

0xf4b2,	// (0x0004a54f) vtchi_icf_list_pane_t1_ParamLimits

0xf4b2,	// (0x0004a54f) vtchi_icf_list_pane_t1

0x7c4b,	// (0x00042ce8) popup_fep_ituss_window_ParamLimits

0x7c75,	// (0x00042d12) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a5,	// (0x0004a342) ituss_keypad_pane_ParamLimits

0x7c8b,	// (0x00042d28) ituss_sks_pane

0x865a,	// (0x000436f7) bg_icf_pane_ParamLimits

0x7c34,	// (0x00042cd1) icf_edit_indi_pane_ParamLimits

0x7c34,	// (0x00042cd1) icf_edit_indi_pane

0xf47f,	// (0x0004a51c) list_vkb_icf_pane_ParamLimits

0x865a,	// (0x000436f7) bg_icf_pane_cp01_ParamLimits

0x7c34,	// (0x00042cd1) icf_edit_indi_pane_cp01_ParamLimits

0x7c34,	// (0x00042cd1) icf_edit_indi_pane_cp01

0xf493,	// (0x0004a530) vtchi_query_pane

0xc3a4,	// (0x00047441) icf_edit_indi_pane_g1_ParamLimits

0xc3a4,	// (0x00047441) icf_edit_indi_pane_g1

0xf537,	// (0x0004a5d4) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0004a5d4) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0004af9f) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0004af9f) icf_edit_indi_pane_g

0xf546,	// (0x0004a5e3) icf_edit_indi_pane_t1

0xf4cd,	// (0x0004a56a) bg_input_focus_pane_cp042

0x857d,	// (0x0004361a) vtchi_button_pane

0xf4d6,	// (0x0004a573) vtchi_query_pane_t1

0xf4e4,	// (0x0004a581) vtchi_query_pane_t2

0xf4f2,	// (0x0004a58f) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0004af8e) vtchi_query_pane_t

0x7cee,	// (0x00042d8b) bg_button_pane_cp13

0xf500,	// (0x0004a59d) vtchi_button_pane_g1

0xf508,	// (0x0004a5a5) ituss_sks_pane_g1

0xf513,	// (0x0004a5b0) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0004af95) ituss_sks_pane_g

0xf51b,	// (0x0004a5b8) ituss_sks_pane_t1

0xf529,	// (0x0004a5c6) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0004af9a) ituss_sks_pane_t

0xbb9d,	// (0x00046c3a) indicator_nsta_pane_cp_g1

0xbba6,	// (0x00046c43) indicator_nsta_pane_cp_g2

0xbbae,	// (0x00046c4b) indicator_nsta_pane_cp_g3

0xbbb6,	// (0x00046c53) indicator_nsta_pane_cp_g4

0xbbb6,	// (0x00046c53) indicator_nsta_pane_cp_g5

0xbbb6,	// (0x00046c53) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0004ab47) indicator_nsta_pane_cp_g

0xe2e0,	// (0x0004937d) cell_graphic2_pane_t2_ParamLimits

0xe2e0,	// (0x0004937d) cell_graphic2_pane_t2

0x0001,

0xfdb7,	// (0x0004ae54) cell_graphic2_pane_t_ParamLimits

0xfdb7,	// (0x0004ae54) cell_graphic2_pane_t

0xe30d,	// (0x000493aa) cell_graphic2_control_pane_t1

0x8d90,	// (0x00043e2d) signal_pane_g3_ParamLimits

0x8d90,	// (0x00043e2d) signal_pane_g3

0x8da2,	// (0x00043e3f) signal_pane_g4_ParamLimits

0x8da2,	// (0x00043e3f) signal_pane_g4

0xf27f,	// (0x0004a31c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf27f,	// (0x0004a31c) cell_ai5_widget_list_row_pane_t3

0xf362,	// (0x0004a3ff) cell_ituss_key_pane_t1_ParamLimits

0xf362,	// (0x0004a3ff) cell_ituss_key_pane_t1

0x9c20,	// (0x00044cbd) form_field_data_wide_pane_vc_t2_ParamLimits

0x9c20,	// (0x00044cbd) form_field_data_wide_pane_vc_t2

0x9c34,	// (0x00044cd1) form_field_data_wide_pane_vc_t3_ParamLimits

0x9c34,	// (0x00044cd1) form_field_data_wide_pane_vc_t3

0x0002,

0xf814,	// (0x0004a8b1) form_field_data_wide_pane_vc_t_ParamLimits

0xf814,	// (0x0004a8b1) form_field_data_wide_pane_vc_t

0xb855,	// (0x000468f2) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb855,	// (0x000468f2) form_field_slider_wide_pane_vc_t3

0xb933,	// (0x000469d0) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb933,	// (0x000469d0) form_field_popup_wide_pane_vc_t2

0xb94a,	// (0x000469e7) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb94a,	// (0x000469e7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x0004ab36) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0004ab36) form_field_popup_wide_pane_vc_t

0x7b48,	// (0x00042be5) aid_fshwr2_btn_pane_ParamLimits

0x7b54,	// (0x00042bf1) aid_fshwr2_syb_pane_ParamLimits

0x7b65,	// (0x00042c02) aid_fshwr2_txt_pane_ParamLimits

0x865a,	// (0x000436f7) fshwr2_bg_pane_ParamLimits

0x7b71,	// (0x00042c0e) fshwr2_func_candi_pane_ParamLimits

0x7b86,	// (0x00042c23) fshwr2_hwr_syb_pane_ParamLimits

0x7b9d,	// (0x00042c3a) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
