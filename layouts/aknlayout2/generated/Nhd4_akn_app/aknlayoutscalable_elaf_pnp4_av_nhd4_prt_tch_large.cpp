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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00043f58 };

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
0x62d8,	// (0x0004a230) Screen

0x62e4,	// (0x0004a23c) application_window_ParamLimits

0x62e4,	// (0x0004a23c) application_window

0x09d6,	// (0x0004492e) screen_g1

0x6340,	// (0x0004a298) area_bottom_pane_ParamLimits

0x6340,	// (0x0004a298) area_bottom_pane

0x6400,	// (0x0004a358) area_top_pane_ParamLimits

0x6400,	// (0x0004a358) area_top_pane

0x6494,	// (0x0004a3ec) main_pane_ParamLimits

0x6494,	// (0x0004a3ec) main_pane

0x09e0,	// (0x00044938) misc_graphics

0x7efa,	// (0x0004be52) battery_pane_ParamLimits

0x7efa,	// (0x0004be52) battery_pane

0xa2c7,	// (0x0004e21f) bg_status_flat_pane_g8

0xa2cf,	// (0x0004e227) bg_status_flat_pane_g9

0x7fc2,	// (0x0004bf1a) context_pane_ParamLimits

0x7fc2,	// (0x0004bf1a) context_pane

0x80d8,	// (0x0004c030) navi_pane_ParamLimits

0x80d8,	// (0x0004c030) navi_pane

0x815c,	// (0x0004c0b4) signal_pane_ParamLimits

0x815c,	// (0x0004c0b4) signal_pane

0x0008,

0xf84f,	// (0x000537a7) bg_status_flat_pane_g

0x98a8,	// (0x0004d800) status_pane_g1_ParamLimits

0x98a8,	// (0x0004d800) status_pane_g1

0x98bc,	// (0x0004d814) status_pane_g2_ParamLimits

0x98bc,	// (0x0004d814) status_pane_g2

0x98c8,	// (0x0004d820) status_pane_g3_ParamLimits

0x98c8,	// (0x0004d820) status_pane_g3

0x0004,

0xf776,	// (0x000536ce) status_pane_g_ParamLimits

0xf776,	// (0x000536ce) status_pane_g

0x98fc,	// (0x0004d854) title_pane_ParamLimits

0x98fc,	// (0x0004d854) title_pane

0x9939,	// (0x0004d891) uni_indicator_pane_ParamLimits

0x9939,	// (0x0004d891) uni_indicator_pane

0x181a,	// (0x00045772) bg_list_pane_ParamLimits

0x181a,	// (0x00045772) bg_list_pane

0x78bf,	// (0x0004b817) find_pane

0x0f34,	// (0x00044e8c) listscroll_app_pane_ParamLimits

0x0f34,	// (0x00044e8c) listscroll_app_pane

0x183a,	// (0x00045792) listscroll_form_pane

0x78c7,	// (0x0004b81f) listscroll_gen_pane_ParamLimits

0x78c7,	// (0x0004b81f) listscroll_gen_pane

0x78db,	// (0x0004b833) listscroll_set_pane

0x6e06,	// (0x0004ad5e) main_idle_act_pane

0x16ae,	// (0x00045606) main_idle_trad_pane

0x16ae,	// (0x00045606) main_list_empty_pane

0x0f34,	// (0x00044e8c) main_midp_pane

0x1854,	// (0x000457ac) main_pane_g1_ParamLimits

0x1854,	// (0x000457ac) main_pane_g1

0x78e3,	// (0x0004b83b) popup_ai_message_window_ParamLimits

0x78e3,	// (0x0004b83b) popup_ai_message_window

0x7987,	// (0x0004b8df) popup_fep_china_uni_window_ParamLimits

0x7987,	// (0x0004b8df) popup_fep_china_uni_window

0x79e1,	// (0x0004b939) popup_fep_japan_candidate_window_ParamLimits

0x79e1,	// (0x0004b939) popup_fep_japan_candidate_window

0x79ff,	// (0x0004b957) popup_fep_japan_predictive_window_ParamLimits

0x79ff,	// (0x0004b957) popup_fep_japan_predictive_window

0x7a2f,	// (0x0004b987) popup_find_window

0x7a3c,	// (0x0004b994) popup_grid_graphic_window_ParamLimits

0x7a3c,	// (0x0004b994) popup_grid_graphic_window

0x7a66,	// (0x0004b9be) popup_large_graphic_colour_window

0x7a8c,	// (0x0004b9e4) popup_menu_window_ParamLimits

0x7a8c,	// (0x0004b9e4) popup_menu_window

0x7c48,	// (0x0004bba0) popup_note_image_window

0x7c34,	// (0x0004bb8c) popup_note_wait_window_ParamLimits

0x7c34,	// (0x0004bb8c) popup_note_wait_window

0x7c34,	// (0x0004bb8c) popup_note_window_ParamLimits

0x7c34,	// (0x0004bb8c) popup_note_window

0x7c9e,	// (0x0004bbf6) popup_query_code_window_ParamLimits

0x7c9e,	// (0x0004bbf6) popup_query_code_window

0x7cb2,	// (0x0004bc0a) popup_query_data_code_window_ParamLimits

0x7cb2,	// (0x0004bc0a) popup_query_data_code_window

0x7ccf,	// (0x0004bc27) popup_query_data_window_ParamLimits

0x7ccf,	// (0x0004bc27) popup_query_data_window

0x7ceb,	// (0x0004bc43) popup_query_sat_info_window_ParamLimits

0x7ceb,	// (0x0004bc43) popup_query_sat_info_window

0x7d24,	// (0x0004bc7c) popup_snote_single_graphic_window_ParamLimits

0x7d24,	// (0x0004bc7c) popup_snote_single_graphic_window

0x7d24,	// (0x0004bc7c) popup_snote_single_text_window_ParamLimits

0x7d24,	// (0x0004bc7c) popup_snote_single_text_window

0x7d39,	// (0x0004bc91) popup_sub_window_general

0x7e69,	// (0x0004bdc1) popup_window_general_ParamLimits

0x7e69,	// (0x0004bdc1) popup_window_general

0x7e7e,	// (0x0004bdd6) power_save_pane

0x7726,	// (0x0004b67e) control_pane_g1_ParamLimits

0x7726,	// (0x0004b67e) control_pane_g1

0x774d,	// (0x0004b6a5) control_pane_g2_ParamLimits

0x774d,	// (0x0004b6a5) control_pane_g2

0x1804,	// (0x0004575c) control_pane_g3_ParamLimits

0x1804,	// (0x0004575c) control_pane_g3

0x0007,

0xf75e,	// (0x000536b6) control_pane_g_ParamLimits

0xf75e,	// (0x000536b6) control_pane_g

0x77be,	// (0x0004b716) control_pane_t1_ParamLimits

0x77be,	// (0x0004b716) control_pane_t1

0x7814,	// (0x0004b76c) control_pane_t2_ParamLimits

0x7814,	// (0x0004b76c) control_pane_t2

0x0002,

0xf76f,	// (0x000536c7) control_pane_t_ParamLimits

0xf76f,	// (0x000536c7) control_pane_t

0x769f,	// (0x0004b5f7) navi_navi_volume_pane_cp1

0x76a7,	// (0x0004b5ff) status_small_icon_pane

0x17b0,	// (0x00045708) status_small_pane_g1_ParamLimits

0x17b0,	// (0x00045708) status_small_pane_g1

0x76af,	// (0x0004b607) status_small_pane_g2_ParamLimits

0x76af,	// (0x0004b607) status_small_pane_g2

0x17e4,	// (0x0004573c) status_small_pane_g3_ParamLimits

0x17e4,	// (0x0004573c) status_small_pane_g3

0x76bb,	// (0x0004b613) status_small_pane_g4_ParamLimits

0x76bb,	// (0x0004b613) status_small_pane_g4

0x76c7,	// (0x0004b61f) status_small_pane_g5_ParamLimits

0x76c7,	// (0x0004b61f) status_small_pane_g5

0x76d5,	// (0x0004b62d) status_small_pane_g6_ParamLimits

0x76d5,	// (0x0004b62d) status_small_pane_g6

0x0007,

0xf74d,	// (0x000536a5) status_small_pane_g_ParamLimits

0xf74d,	// (0x000536a5) status_small_pane_g

0x76f0,	// (0x0004b648) status_small_pane_t1

0x7712,	// (0x0004b66a) status_small_wait_pane_ParamLimits

0x7712,	// (0x0004b66a) status_small_wait_pane

0x71ef,	// (0x0004b147) aid_levels_signal_ParamLimits

0x71ef,	// (0x0004b147) aid_levels_signal

0x7201,	// (0x0004b159) signal_pane_g1_ParamLimits

0x7201,	// (0x0004b159) signal_pane_g1

0x7216,	// (0x0004b16e) signal_pane_g2_ParamLimits

0x7216,	// (0x0004b16e) signal_pane_g2

0x0003,

0xf6de,	// (0x00053636) signal_pane_g_ParamLimits

0xf6de,	// (0x00053636) signal_pane_g

0x129c,	// (0x000451f4) context_pane_g1

0x66d5,	// (0x0004a62d) title_pane_g1

0x66ff,	// (0x0004a657) title_pane_t1

0x09f6,	// (0x0004494e) title_pane_t2

0x0a1c,	// (0x00044974) title_pane_t3

0x0002,

0xf532,	// (0x0005348a) title_pane_t

0x9951,	// (0x0004d8a9) aid_levels_battery_ParamLimits

0x9951,	// (0x0004d8a9) aid_levels_battery

0x9965,	// (0x0004d8bd) battery_pane_g1_ParamLimits

0x9965,	// (0x0004d8bd) battery_pane_g1

0x997b,	// (0x0004d8d3) battery_pane_g2_ParamLimits

0x997b,	// (0x0004d8d3) battery_pane_g2

0x0001,

0xf781,	// (0x000536d9) battery_pane_g_ParamLimits

0xf781,	// (0x000536d9) battery_pane_g

0xabeb,	// (0x0004eb43) uni_indicator_pane_g1

0xabfe,	// (0x0004eb56) uni_indicator_pane_g2

0xac10,	// (0x0004eb68) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x0005384f) uni_indicator_pane_g

0x1545,	// (0x0004549d) navi_icon_pane_ParamLimits

0x1545,	// (0x0004549d) navi_icon_pane

0x148e,	// (0x000453e6) navi_midp_pane

0x1561,	// (0x000454b9) navi_navi_pane

0x156b,	// (0x000454c3) navi_text_pane_ParamLimits

0x156b,	// (0x000454c3) navi_text_pane

0x09d6,	// (0x0004492e) status_small_wait_pane_g1

0x0c6d,	// (0x00044bc5) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x0005384a) status_small_wait_pane_g

0xa912,	// (0x0004e86a) navi_navi_icon_text_pane

0xa91a,	// (0x0004e872) navi_navi_pane_g1_ParamLimits

0xa91a,	// (0x0004e872) navi_navi_pane_g1

0xa92c,	// (0x0004e884) navi_navi_pane_g2_ParamLimits

0xa92c,	// (0x0004e884) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x00053818) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x00053818) navi_navi_pane_g

0xa93e,	// (0x0004e896) navi_navi_tabs_pane

0xa947,	// (0x0004e89f) navi_navi_text_pane

0xa912,	// (0x0004e86a) navi_navi_volume_pane

0xa8ee,	// (0x0004e846) navi_text_pane_t1

0xa8e2,	// (0x0004e83a) navi_icon_pane_g1

0xa835,	// (0x0004e78d) navi_navi_text_pane_t1

0x8434,	// (0x0004c38c) navi_navi_volume_pane_g1

0x843c,	// (0x0004c394) volume_small_pane

0xa79b,	// (0x0004e6f3) navi_navi_icon_text_pane_g1

0xa7a3,	// (0x0004e6fb) navi_navi_icon_text_pane_t1

0x1561,	// (0x000454b9) navi_tabs_2_long_pane

0x1561,	// (0x000454b9) navi_tabs_2_pane

0x1561,	// (0x000454b9) navi_tabs_3_long_pane

0x1561,	// (0x000454b9) navi_tabs_3_pane

0x1561,	// (0x000454b9) navi_tabs_4_pane

0x8414,	// (0x0004c36c) tabs_2_active_pane_ParamLimits

0x8414,	// (0x0004c36c) tabs_2_active_pane

0x8424,	// (0x0004c37c) tabs_2_passive_pane_ParamLimits

0x8424,	// (0x0004c37c) tabs_2_passive_pane

0x83e2,	// (0x0004c33a) tabs_3_active_pane_ParamLimits

0x83e2,	// (0x0004c33a) tabs_3_active_pane

0x83f2,	// (0x0004c34a) tabs_3_passive_pane_ParamLimits

0x83f2,	// (0x0004c34a) tabs_3_passive_pane

0x8403,	// (0x0004c35b) tabs_3_passive_pane_cp_ParamLimits

0x8403,	// (0x0004c35b) tabs_3_passive_pane_cp

0x839e,	// (0x0004c2f6) tabs_4_active_pane_ParamLimits

0x839e,	// (0x0004c2f6) tabs_4_active_pane

0x83af,	// (0x0004c307) tabs_4_passive_pane_ParamLimits

0x83af,	// (0x0004c307) tabs_4_passive_pane

0x83c0,	// (0x0004c318) tabs_4_passive_pane_cp_ParamLimits

0x83c0,	// (0x0004c318) tabs_4_passive_pane_cp

0x83d1,	// (0x0004c329) tabs_4_passive_pane_cp2_ParamLimits

0x83d1,	// (0x0004c329) tabs_4_passive_pane_cp2

0x837a,	// (0x0004c2d2) tabs_2_long_active_pane_ParamLimits

0x837a,	// (0x0004c2d2) tabs_2_long_active_pane

0x838c,	// (0x0004c2e4) tabs_2_long_passive_pane_ParamLimits

0x838c,	// (0x0004c2e4) tabs_2_long_passive_pane

0x8335,	// (0x0004c28d) tabs_3_long_active_pane_ParamLimits

0x8335,	// (0x0004c28d) tabs_3_long_active_pane

0x834e,	// (0x0004c2a6) tabs_3_long_passive_pane_ParamLimits

0x834e,	// (0x0004c2a6) tabs_3_long_passive_pane

0x8361,	// (0x0004c2b9) tabs_3_long_passive_pane_cp_ParamLimits

0x8361,	// (0x0004c2b9) tabs_3_long_passive_pane_cp

0x82db,	// (0x0004c233) volume_small_pane_g1

0x82e4,	// (0x0004c23c) volume_small_pane_g2

0x82ed,	// (0x0004c245) volume_small_pane_g3

0x82f6,	// (0x0004c24e) volume_small_pane_g4

0x82ff,	// (0x0004c257) volume_small_pane_g5

0x8308,	// (0x0004c260) volume_small_pane_g6

0x8311,	// (0x0004c269) volume_small_pane_g7

0x831a,	// (0x0004c272) volume_small_pane_g8

0x8323,	// (0x0004c27b) volume_small_pane_g9

0x832c,	// (0x0004c284) volume_small_pane_g10

0x0009,

0xf88c,	// (0x000537e4) volume_small_pane_g

0x0a3c,	// (0x00044994) bg_active_tab_pane_cp2_ParamLimits

0x0a3c,	// (0x00044994) bg_active_tab_pane_cp2

0x6767,	// (0x0004a6bf) tabs_3_active_pane_g1

0x676f,	// (0x0004a6c7) tabs_3_active_pane_t1

0x0a3c,	// (0x00044994) bg_passive_tab_pane_cp2_ParamLimits

0x0a3c,	// (0x00044994) bg_passive_tab_pane_cp2

0x6767,	// (0x0004a6bf) tabs_3_passive_pane_g1

0x676f,	// (0x0004a6c7) tabs_3_passive_pane_t1

0x0a3c,	// (0x00044994) bg_active_tab_pane_cp3_ParamLimits

0x0a3c,	// (0x00044994) bg_active_tab_pane_cp3

0x6781,	// (0x0004a6d9) tabs_4_active_pane_g1

0x6789,	// (0x0004a6e1) tabs_4_active_pane_t1

0x0a3c,	// (0x00044994) bg_passive_tab_pane_cp3_ParamLimits

0x0a3c,	// (0x00044994) bg_passive_tab_pane_cp3

0x6781,	// (0x0004a6d9) tabs_4_1_passive_pane_g1

0x6789,	// (0x0004a6e1) tabs_4_1_passive_pane_t1

0x0f34,	// (0x00044e8c) list_highlight_pane_cp2

0xae53,	// (0x0004edab) list_set_pane_ParamLimits

0xae53,	// (0x0004edab) list_set_pane

0xaef5,	// (0x0004ee4d) main_pane_set_t1_ParamLimits

0xaef5,	// (0x0004ee4d) main_pane_set_t1

0xaf15,	// (0x0004ee6d) main_pane_set_t2_ParamLimits

0xaf15,	// (0x0004ee6d) main_pane_set_t2

0xaf29,	// (0x0004ee81) main_pane_set_t3_ParamLimits

0xaf29,	// (0x0004ee81) main_pane_set_t3

0xaf3b,	// (0x0004ee93) main_pane_set_t4_ParamLimits

0xaf3b,	// (0x0004ee93) main_pane_set_t4

0x0003,

0xf95c,	// (0x000538b4) main_pane_set_t_ParamLimits

0xf95c,	// (0x000538b4) main_pane_set_t

0xaf4d,	// (0x0004eea5) setting_code_pane

0xaf59,	// (0x0004eeb1) setting_slider_graphic_pane

0xaf59,	// (0x0004eeb1) setting_slider_pane

0xaf59,	// (0x0004eeb1) setting_text_pane

0xaf59,	// (0x0004eeb1) setting_volume_pane

0x679b,	// (0x0004a6f3) volume_set_pane

0x0a3c,	// (0x00044994) bg_set_opt_pane_cp

0x67a3,	// (0x0004a6fb) setting_slider_pane_t1

0x67bc,	// (0x0004a714) setting_slider_pane_t2

0x67d6,	// (0x0004a72e) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00053491) setting_slider_pane_t

0x67ee,	// (0x0004a746) slider_set_pane

0x09e0,	// (0x00044938) bg_set_opt_pane_cp2

0x0a4a,	// (0x000449a2) setting_slider_graphic_pane_g1

0x6804,	// (0x0004a75c) setting_slider_graphic_pane_t1

0x6814,	// (0x0004a76c) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00053498) setting_slider_graphic_pane_t

0x6824,	// (0x0004a77c) slider_set_pane_cp

0x09e0,	// (0x00044938) input_focus_pane_cp1

0xae12,	// (0x0004ed6a) list_set_text_pane

0x09d6,	// (0x0004492e) setting_text_pane_g1

0x09e0,	// (0x00044938) input_focus_pane_cp2

0x09d6,	// (0x0004492e) setting_code_pane_g1

0x0a53,	// (0x000449ab) setting_code_pane_t1

0x5420,	// (0x00049378) set_text_pane_t1_ParamLimits

0x5420,	// (0x00049378) set_text_pane_t1

0x0e4a,	// (0x00044da2) set_opt_bg_pane_g1

0x0e52,	// (0x00044daa) set_opt_bg_pane_g2

0xadec,	// (0x0004ed44) set_opt_bg_pane_g3

0x0e62,	// (0x00044dba) set_opt_bg_pane_g4

0x0e6a,	// (0x00044dc2) set_opt_bg_pane_g5

0x0e72,	// (0x00044dca) set_opt_bg_pane_g6

0xadf6,	// (0x0004ed4e) set_opt_bg_pane_g7

0xadfe,	// (0x0004ed56) set_opt_bg_pane_g8

0xae08,	// (0x0004ed60) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x000538a1) set_opt_bg_pane_g

0xaddf,	// (0x0004ed37) slider_set_pane_g1

0x84a9,	// (0x0004c401) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00053892) slider_set_pane_g

0x8445,	// (0x0004c39d) volume_set_pane_g1

0x844d,	// (0x0004c3a5) volume_set_pane_g2

0x8455,	// (0x0004c3ad) volume_set_pane_g3

0x845d,	// (0x0004c3b5) volume_set_pane_g4

0x8465,	// (0x0004c3bd) volume_set_pane_g5

0x846d,	// (0x0004c3c5) volume_set_pane_g6

0x8475,	// (0x0004c3cd) volume_set_pane_g7

0x847d,	// (0x0004c3d5) volume_set_pane_g8

0x8485,	// (0x0004c3dd) volume_set_pane_g9

0x848d,	// (0x0004c3e5) volume_set_pane_g10

0x0009,

0xf912,	// (0x0005386a) volume_set_pane_g

0x682c,	// (0x0004a784) indicator_pane_ParamLimits

0x682c,	// (0x0004a784) indicator_pane

0x6838,	// (0x0004a790) main_idle_pane_g2_ParamLimits

0x6838,	// (0x0004a790) main_idle_pane_g2

0x6860,	// (0x0004a7b8) main_pane_idle_g1_ParamLimits

0x6860,	// (0x0004a7b8) main_pane_idle_g1

0x0a61,	// (0x000449b9) popup_clock_digital_analogue_window_ParamLimits

0x0a61,	// (0x000449b9) popup_clock_digital_analogue_window

0x686d,	// (0x0004a7c5) soft_indicator_pane_ParamLimits

0x686d,	// (0x0004a7c5) soft_indicator_pane

0x6879,	// (0x0004a7d1) wallpaper_pane_ParamLimits

0x6879,	// (0x0004a7d1) wallpaper_pane

0x09d6,	// (0x0004492e) wallpaper_pane_g1

0x6885,	// (0x0004a7dd) indicator_pane_g1_ParamLimits

0x6885,	// (0x0004a7dd) indicator_pane_g1

0xb1c7,	// (0x0004f11f) navi_navi_icon_text_pane_srt_g1

0x0a8f,	// (0x000449e7) soft_indicator_pane_t1

0x0aa9,	// (0x00044a01) aid_ps_area_pane

0x6891,	// (0x0004a7e9) aid_ps_clock_pane

0x0aba,	// (0x00044a12) aid_ps_indicator_pane

0x0ac6,	// (0x00044a1e) indicator_ps_pane_ParamLimits

0x0ac6,	// (0x00044a1e) indicator_ps_pane

0x0ad5,	// (0x00044a2d) power_save_pane_g1_ParamLimits

0x0ad5,	// (0x00044a2d) power_save_pane_g1

0x0ae1,	// (0x00044a39) power_save_pane_g2_ParamLimits

0x0ae1,	// (0x00044a39) power_save_pane_g2

0x62f4,	// (0x0004a24c) aid_navinavi_width_pane

0x0aa9,	// (0x00044a01) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0005349d) power_save_pane_g_ParamLimits

0xf545,	// (0x0005349d) power_save_pane_g

0x0aef,	// (0x00044a47) power_save_pane_t1_ParamLimits

0x0aef,	// (0x00044a47) power_save_pane_t1

0x6891,	// (0x0004a7e9) aid_ps_clock_pane_ParamLimits

0x0aba,	// (0x00044a12) aid_ps_indicator_pane_ParamLimits

0x0b01,	// (0x00044a59) power_save_pane_t4_ParamLimits

0x0b01,	// (0x00044a59) power_save_pane_t4

0x0001,

0xf54a,	// (0x000534a2) power_save_pane_t_ParamLimits

0xf54a,	// (0x000534a2) power_save_pane_t

0x0b2b,	// (0x00044a83) power_save_t3_ParamLimits

0x0b2b,	// (0x00044a83) power_save_t3

0x0b16,	// (0x00044a6e) power_save_t2_ParamLimits

0x0b16,	// (0x00044a6e) power_save_t2

0x0b40,	// (0x00044a98) indicator_ps_pane_g1

0x689f,	// (0x0004a7f7) ai_gene_pane_ParamLimits

0x689f,	// (0x0004a7f7) ai_gene_pane

0x68ab,	// (0x0004a803) ai_links_pane_ParamLimits

0x68ab,	// (0x0004a803) ai_links_pane

0x68b7,	// (0x0004a80f) indicator_pane_cp1_ParamLimits

0x68b7,	// (0x0004a80f) indicator_pane_cp1

0x68c3,	// (0x0004a81b) main_pane_idle_g1_cp_ParamLimits

0x68c3,	// (0x0004a81b) main_pane_idle_g1_cp

0x68cf,	// (0x0004a827) popup_ai_links_title_window

0x68d8,	// (0x0004a830) soft_indicator_pane_cp1_ParamLimits

0x68d8,	// (0x0004a830) soft_indicator_pane_cp1

0xabd9,	// (0x0004eb31) ai_links_pane_g1

0xabe2,	// (0x0004eb3a) grid_ai_links_pane

0xabbc,	// (0x0004eb14) ai_gene_pane_1

0xabc7,	// (0x0004eb1f) ai_gene_pane_2

0xabd0,	// (0x0004eb28) list_highlight_pane_cp4

0xaba0,	// (0x0004eaf8) cell_ai_link_pane_ParamLimits

0xaba0,	// (0x0004eaf8) cell_ai_link_pane

0xab98,	// (0x0004eaf0) cell_ai_link_pane_g1

0x0c6d,	// (0x00044bc5) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x00053845) cell_ai_link_pane_g

0x09e0,	// (0x00044938) grid_highlight_cp2

0x09e0,	// (0x00044938) bg_popup_sub_pane_cp1

0x0b57,	// (0x00044aaf) popup_ai_links_title_window_t1

0xaae8,	// (0x0004ea40) ai_gene_pane_1_g1_ParamLimits

0xaae8,	// (0x0004ea40) ai_gene_pane_1_g1

0xaaf4,	// (0x0004ea4c) ai_gene_pane_1_g2_ParamLimits

0xaaf4,	// (0x0004ea4c) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x0005383b) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x0005383b) ai_gene_pane_1_g

0xab01,	// (0x0004ea59) ai_gene_pane_1_t1_ParamLimits

0xab01,	// (0x0004ea59) ai_gene_pane_1_t1

0xab35,	// (0x0004ea8d) grid_ai_soft_ind_pane

0xaad3,	// (0x0004ea2b) ai_gene_pane_2_t1_ParamLimits

0xaad3,	// (0x0004ea2b) ai_gene_pane_2_t1

0x68e4,	// (0x0004a83c) main_pane_empty_t1_ParamLimits

0x68e4,	// (0x0004a83c) main_pane_empty_t1

0x68fc,	// (0x0004a854) main_pane_empty_t2_ParamLimits

0x68fc,	// (0x0004a854) main_pane_empty_t2

0x6911,	// (0x0004a869) main_pane_empty_t3_ParamLimits

0x6911,	// (0x0004a869) main_pane_empty_t3

0x6923,	// (0x0004a87b) main_pane_empty_t4_ParamLimits

0x6923,	// (0x0004a87b) main_pane_empty_t4

0x6935,	// (0x0004a88d) main_pane_empty_t5_ParamLimits

0x6935,	// (0x0004a88d) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000534a7) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000534a7) main_pane_empty_t

0x0ecf,	// (0x00044e27) bg_popup_window_pane_ParamLimits

0x0ecf,	// (0x00044e27) bg_popup_window_pane

0xa843,	// (0x0004e79b) find_popup_pane_cp2_ParamLimits

0xa843,	// (0x0004e79b) find_popup_pane_cp2

0xa84f,	// (0x0004e7a7) heading_pane_ParamLimits

0xa84f,	// (0x0004e7a7) heading_pane

0x09e0,	// (0x00044938) bg_popup_sub_pane

0xa7bd,	// (0x0004e715) bg_popup_window_pane_g1_ParamLimits

0xa7bd,	// (0x0004e715) bg_popup_window_pane_g1

0xa7c9,	// (0x0004e721) bg_popup_window_pane_g2_ParamLimits

0xa7c9,	// (0x0004e721) bg_popup_window_pane_g2

0xa7d5,	// (0x0004e72d) bg_popup_window_pane_g3_ParamLimits

0xa7d5,	// (0x0004e72d) bg_popup_window_pane_g3

0xa7e1,	// (0x0004e739) bg_popup_window_pane_g4_ParamLimits

0xa7e1,	// (0x0004e739) bg_popup_window_pane_g4

0xa7ed,	// (0x0004e745) bg_popup_window_pane_g5_ParamLimits

0xa7ed,	// (0x0004e745) bg_popup_window_pane_g5

0xa7f9,	// (0x0004e751) bg_popup_window_pane_g6_ParamLimits

0xa7f9,	// (0x0004e751) bg_popup_window_pane_g6

0xa805,	// (0x0004e75d) bg_popup_window_pane_g7_ParamLimits

0xa805,	// (0x0004e75d) bg_popup_window_pane_g7

0xa811,	// (0x0004e769) bg_popup_window_pane_g8_ParamLimits

0xa811,	// (0x0004e769) bg_popup_window_pane_g8

0xa81d,	// (0x0004e775) bg_popup_window_pane_g9_ParamLimits

0xa81d,	// (0x0004e775) bg_popup_window_pane_g9

0xa829,	// (0x0004e781) bg_popup_window_pane_g10_ParamLimits

0xa829,	// (0x0004e781) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x00053803) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x00053803) bg_popup_window_pane_g

0xa752,	// (0x0004e6aa) bg_popup_heading_pane_ParamLimits

0xa752,	// (0x0004e6aa) bg_popup_heading_pane

0x85dc,	// (0x0004c534) tabs_4_passive_pane_cp_srt_ParamLimits

0x85dc,	// (0x0004c534) tabs_4_passive_pane_cp_srt

0x85ee,	// (0x0004c546) tabs_4_passive_pane_srt_ParamLimits

0xa766,	// (0x0004e6be) heading_pane_g2

0x85ee,	// (0x0004c546) tabs_4_passive_pane_srt

0x0f34,	// (0x00044e8c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0f34,	// (0x00044e8c) bg_passive_tab_pane_cp3_srt

0xa76e,	// (0x0004e6c6) heading_pane_t1_ParamLimits

0xa76e,	// (0x0004e6c6) heading_pane_t1

0xa785,	// (0x0004e6dd) heading_pane_t2_ParamLimits

0xa785,	// (0x0004e6dd) heading_pane_t2

0x0001,

0xf8a6,	// (0x000537fe) heading_pane_t_ParamLimits

0xf8a6,	// (0x000537fe) heading_pane_t

0xa28f,	// (0x0004e1e7) bg_popup_heading_pane_g1

0xa33e,	// (0x0004e296) bg_popup_heading_pane_g2

0xa348,	// (0x0004e2a0) bg_popup_heading_pane_g3

0xa352,	// (0x0004e2aa) bg_popup_heading_pane_g4

0xa35c,	// (0x0004e2b4) bg_popup_heading_pane_g5

0xa366,	// (0x0004e2be) bg_popup_heading_pane_g6

0xa36e,	// (0x0004e2c6) bg_popup_heading_pane_g7

0xa376,	// (0x0004e2ce) bg_popup_heading_pane_g8

0xa380,	// (0x0004e2d8) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x000537ba) bg_popup_heading_pane_g

0x9a50,	// (0x0004d9a8) bg_popup_sub_pane_g1

0x9a58,	// (0x0004d9b0) bg_popup_sub_pane_g2

0x9a60,	// (0x0004d9b8) bg_popup_sub_pane_g3

0x9a68,	// (0x0004d9c0) bg_popup_sub_pane_g4

0x9a70,	// (0x0004d9c8) bg_popup_sub_pane_g5

0x9a78,	// (0x0004d9d0) bg_popup_sub_pane_g6

0x9a80,	// (0x0004d9d8) bg_popup_sub_pane_g7

0x9a88,	// (0x0004d9e0) bg_popup_sub_pane_g8

0x9a90,	// (0x0004d9e8) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00053794) bg_popup_sub_pane_g

0x0a2e,	// (0x00044986) bg_popup_window_pane_cp5_ParamLimits

0x0a2e,	// (0x00044986) bg_popup_window_pane_cp5

0x0b74,	// (0x00044acc) popup_note_window_g1_ParamLimits

0x0b74,	// (0x00044acc) popup_note_window_g1

0x0b80,	// (0x00044ad8) popup_note_window_t1_ParamLimits

0x0b80,	// (0x00044ad8) popup_note_window_t1

0x0b96,	// (0x00044aee) popup_note_window_t2_ParamLimits

0x0b96,	// (0x00044aee) popup_note_window_t2

0x0bac,	// (0x00044b04) popup_note_window_t3_ParamLimits

0x0bac,	// (0x00044b04) popup_note_window_t3

0x0bc2,	// (0x00044b1a) popup_note_window_t4_ParamLimits

0x0bc2,	// (0x00044b1a) popup_note_window_t4

0x0bea,	// (0x00044b42) popup_note_window_t5_ParamLimits

0x0bea,	// (0x00044b42) popup_note_window_t5

0x0004,

0xf55a,	// (0x000534b2) popup_note_window_t_ParamLimits

0xf55a,	// (0x000534b2) popup_note_window_t

0x0c0e,	// (0x00044b66) bg_popup_window_pane_cp6_ParamLimits

0x0c0e,	// (0x00044b66) bg_popup_window_pane_cp6

0xa20b,	// (0x0004e163) popup_note_image_window_g1_ParamLimits

0xa20b,	// (0x0004e163) popup_note_image_window_g1

0xa217,	// (0x0004e16f) popup_note_image_window_g2_ParamLimits

0xa217,	// (0x0004e16f) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00053788) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00053788) popup_note_image_window_g

0xa230,	// (0x0004e188) popup_note_image_window_t1_ParamLimits

0xa230,	// (0x0004e188) popup_note_image_window_t1

0xa249,	// (0x0004e1a1) popup_note_image_window_t2_ParamLimits

0xa249,	// (0x0004e1a1) popup_note_image_window_t2

0xa262,	// (0x0004e1ba) popup_note_image_window_t3_ParamLimits

0xa262,	// (0x0004e1ba) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0005378d) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0005378d) popup_note_image_window_t

0xa0d4,	// (0x0004e02c) bg_popup_window_pane_cp7_ParamLimits

0xa0d4,	// (0x0004e02c) bg_popup_window_pane_cp7

0xa104,	// (0x0004e05c) popup_note_wait_window_g1_ParamLimits

0xa104,	// (0x0004e05c) popup_note_wait_window_g1

0xa110,	// (0x0004e068) popup_note_wait_window_g2_ParamLimits

0xa110,	// (0x0004e068) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00053776) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00053776) popup_note_wait_window_g

0xa128,	// (0x0004e080) popup_note_wait_window_t1_ParamLimits

0xa128,	// (0x0004e080) popup_note_wait_window_t1

0xa14f,	// (0x0004e0a7) popup_note_wait_window_t2_ParamLimits

0xa14f,	// (0x0004e0a7) popup_note_wait_window_t2

0xa16c,	// (0x0004e0c4) popup_note_wait_window_t3_ParamLimits

0xa16c,	// (0x0004e0c4) popup_note_wait_window_t3

0xa17f,	// (0x0004e0d7) popup_note_wait_window_t4_ParamLimits

0xa17f,	// (0x0004e0d7) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0005377d) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0005377d) popup_note_wait_window_t

0xa1a4,	// (0x0004e0fc) wait_bar_pane_ParamLimits

0xa1a4,	// (0x0004e0fc) wait_bar_pane

0x09e0,	// (0x00044938) wait_anim_pane

0x09e0,	// (0x00044938) wait_border_pane

0x09d6,	// (0x0004492e) wait_anim_pane_g1

0x09d6,	// (0x0004492e) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x00053631) wait_anim_pane_g

0xa080,	// (0x0004dfd8) wait_border_pane_g1

0xa08b,	// (0x0004dfe3) wait_border_pane_g2

0xa094,	// (0x0004dfec) wait_border_pane_g3

0x0002,

0xf817,	// (0x0005376f) wait_border_pane_g

0x9eeb,	// (0x0004de43) bg_popup_window_pane_cp16_ParamLimits

0x9eeb,	// (0x0004de43) bg_popup_window_pane_cp16

0x9feb,	// (0x0004df43) indicator_popup_pane_cp4_ParamLimits

0x9feb,	// (0x0004df43) indicator_popup_pane_cp4

0x9fff,	// (0x0004df57) popup_query_data_window_t1_ParamLimits

0x9fff,	// (0x0004df57) popup_query_data_window_t1

0xa011,	// (0x0004df69) popup_query_data_window_t2_ParamLimits

0xa011,	// (0x0004df69) popup_query_data_window_t2

0xa02a,	// (0x0004df82) popup_query_data_window_t3_ParamLimits

0xa02a,	// (0x0004df82) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00053768) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00053768) popup_query_data_window_t

0xa044,	// (0x0004df9c) query_popup_data_pane_ParamLimits

0xa044,	// (0x0004df9c) query_popup_data_pane

0xa058,	// (0x0004dfb0) query_popup_data_pane_cp1_ParamLimits

0xa058,	// (0x0004dfb0) query_popup_data_pane_cp1

0x9eeb,	// (0x0004de43) bg_popup_window_pane_cp10_ParamLimits

0x9eeb,	// (0x0004de43) bg_popup_window_pane_cp10

0x9f1d,	// (0x0004de75) indicator_popup_pane_ParamLimits

0x9f1d,	// (0x0004de75) indicator_popup_pane

0x9f3f,	// (0x0004de97) popup_query_code_window_t1_ParamLimits

0x9f3f,	// (0x0004de97) popup_query_code_window_t1

0x9f59,	// (0x0004deb1) popup_query_code_window_t2_ParamLimits

0x9f59,	// (0x0004deb1) popup_query_code_window_t2

0x9fa2,	// (0x0004defa) popup_query_code_window_t3_ParamLimits

0x9fa2,	// (0x0004defa) popup_query_code_window_t3

0x0002,

0xf809,	// (0x00053761) popup_query_code_window_t_ParamLimits

0xf809,	// (0x00053761) popup_query_code_window_t

0x9fd1,	// (0x0004df29) query_popup_pane_ParamLimits

0x9fd1,	// (0x0004df29) query_popup_pane

0x0c0e,	// (0x00044b66) bg_popup_window_pane_cp15_ParamLimits

0x0c0e,	// (0x00044b66) bg_popup_window_pane_cp15

0x696f,	// (0x0004a8c7) indicator_popup_pane_cp1_ParamLimits

0x696f,	// (0x0004a8c7) indicator_popup_pane_cp1

0x6982,	// (0x0004a8da) indicator_popup_pane_cp2_ParamLimits

0x6982,	// (0x0004a8da) indicator_popup_pane_cp2

0x6995,	// (0x0004a8ed) popup_query_data_code_window_g1_ParamLimits

0x6995,	// (0x0004a8ed) popup_query_data_code_window_g1

0x0c2c,	// (0x00044b84) popup_query_data_code_window_t1_ParamLimits

0x0c2c,	// (0x00044b84) popup_query_data_code_window_t1

0x0c3e,	// (0x00044b96) popup_query_data_code_window_t2_ParamLimits

0x0c3e,	// (0x00044b96) popup_query_data_code_window_t2

0x69a8,	// (0x0004a900) popup_query_data_code_window_t3_ParamLimits

0x69a8,	// (0x0004a900) popup_query_data_code_window_t3

0x69be,	// (0x0004a916) popup_query_data_code_window_t4_ParamLimits

0x69be,	// (0x0004a916) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x000534bd) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x000534bd) popup_query_data_code_window_t

0x1503,	// (0x0004545b) list_single_midp_graphic_pane_g3

0x69d6,	// (0x0004a92e) query_popup_data_pane_cp2_ParamLimits

0x69e9,	// (0x0004a941) query_popup_pane_cp2_ParamLimits

0x69e9,	// (0x0004a941) query_popup_pane_cp2

0x09e0,	// (0x00044938) bg_popup_window_pane_cp11

0x9ecf,	// (0x0004de27) heading_pane_cp5

0x9ed7,	// (0x0004de2f) listscroll_popup_info_pane

0x09e0,	// (0x00044938) input_focus_pane_cp3

0x0c50,	// (0x00044ba8) query_popup_pane_t1

0x0c5e,	// (0x00044bb6) list_popup_info_pane_ParamLimits

0x0c5e,	// (0x00044bb6) list_popup_info_pane

0x0c6d,	// (0x00044bc5) listscroll_popup_info_pane_g1

0x0c75,	// (0x00044bcd) scroll_pane_cp7

0x69fc,	// (0x0004a954) popup_info_list_pane_t1_ParamLimits

0x69fc,	// (0x0004a954) popup_info_list_pane_t1

0x6a16,	// (0x0004a96e) popup_info_list_pane_t2_ParamLimits

0x6a16,	// (0x0004a96e) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x000534c6) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x000534c6) popup_info_list_pane_t

0x09e0,	// (0x00044938) bg_popup_window_pane_cp12

0xb1e1,	// (0x0004f139) find_popup_pane

0x0a3c,	// (0x00044994) bg_popup_window_pane_cp3

0x0c7f,	// (0x00044bd7) heading_pane_cp3

0x0c8e,	// (0x00044be6) listscroll_popup_graphic_pane

0x09e0,	// (0x00044938) bg_popup_window_pane_cp4

0x6a80,	// (0x0004a9d8) heading_pane_cp4

0x0c9e,	// (0x00044bf6) listscroll_popup_colour_pane

0x6a8a,	// (0x0004a9e2) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6a8a,	// (0x0004a9e2) cell_large_graphic_colour_none_popup_pane

0x6a9e,	// (0x0004a9f6) grid_large_graphic_colour_popup_pane_ParamLimits

0x6a9e,	// (0x0004a9f6) grid_large_graphic_colour_popup_pane

0x6ac2,	// (0x0004aa1a) listscroll_popup_colour_pane_g1_ParamLimits

0x6ac2,	// (0x0004aa1a) listscroll_popup_colour_pane_g1

0x6ad9,	// (0x0004aa31) listscroll_popup_colour_pane_g2_ParamLimits

0x6ad9,	// (0x0004aa31) listscroll_popup_colour_pane_g2

0x6af0,	// (0x0004aa48) listscroll_popup_colour_pane_g3_ParamLimits

0x6af0,	// (0x0004aa48) listscroll_popup_colour_pane_g3

0x6b00,	// (0x0004aa58) listscroll_popup_colour_pane_g4_ParamLimits

0x6b00,	// (0x0004aa58) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x000534cb) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x000534cb) listscroll_popup_colour_pane_g

0x0ca6,	// (0x00044bfe) scroll_pane_cp6_ParamLimits

0x0ca6,	// (0x00044bfe) scroll_pane_cp6

0x6b10,	// (0x0004aa68) cell_large_graphic_colour_popup_pane_ParamLimits

0x6b10,	// (0x0004aa68) cell_large_graphic_colour_popup_pane

0x6b2f,	// (0x0004aa87) cell_large_graphic_colour_none_popup_pane_t1

0x09e0,	// (0x00044938) grid_highlight_pane_cp5

0x0cb8,	// (0x00044c10) cell_large_graphic_colour_popup_pane_g1

0x0cc0,	// (0x00044c18) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x000534d4) cell_large_graphic_colour_popup_pane_g

0x0cc8,	// (0x00044c20) cell_large_graphic_colour_popup_pane_g2_copy1

0x0cd1,	// (0x00044c29) grid_highlight_pane_cp4

0x0cd9,	// (0x00044c31) bg_popup_window_pane_cp8_ParamLimits

0x0cd9,	// (0x00044c31) bg_popup_window_pane_cp8

0x6b3e,	// (0x0004aa96) popup_snote_single_text_window_g1_ParamLimits

0x6b3e,	// (0x0004aa96) popup_snote_single_text_window_g1

0x6b50,	// (0x0004aaa8) popup_snote_single_text_window_t1_ParamLimits

0x6b50,	// (0x0004aaa8) popup_snote_single_text_window_t1

0x6b63,	// (0x0004aabb) popup_snote_single_text_window_t2_ParamLimits

0x6b63,	// (0x0004aabb) popup_snote_single_text_window_t2

0x6b76,	// (0x0004aace) popup_snote_single_text_window_t3_ParamLimits

0x6b76,	// (0x0004aace) popup_snote_single_text_window_t3

0x6baf,	// (0x0004ab07) popup_snote_single_text_window_t4_ParamLimits

0x6baf,	// (0x0004ab07) popup_snote_single_text_window_t4

0x6be3,	// (0x0004ab3b) popup_snote_single_text_window_t5_ParamLimits

0x6be3,	// (0x0004ab3b) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x000534d9) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x000534d9) popup_snote_single_text_window_t

0x0cf4,	// (0x00044c4c) bg_popup_window_pane_cp9_ParamLimits

0x0cf4,	// (0x00044c4c) bg_popup_window_pane_cp9

0x6b3e,	// (0x0004aa96) popup_snote_single_graphic_window_g1_ParamLimits

0x6b3e,	// (0x0004aa96) popup_snote_single_graphic_window_g1

0x0d02,	// (0x00044c5a) popup_snote_single_graphic_window_g2_ParamLimits

0x0d02,	// (0x00044c5a) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000534e4) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000534e4) popup_snote_single_graphic_window_g

0x0d0e,	// (0x00044c66) popup_snote_single_graphic_window_t1_ParamLimits

0x0d0e,	// (0x00044c66) popup_snote_single_graphic_window_t1

0x0d21,	// (0x00044c79) popup_snote_single_graphic_window_t2_ParamLimits

0x0d21,	// (0x00044c79) popup_snote_single_graphic_window_t2

0x6c12,	// (0x0004ab6a) popup_snote_single_graphic_window_t3_ParamLimits

0x6c12,	// (0x0004ab6a) popup_snote_single_graphic_window_t3

0x6c4b,	// (0x0004aba3) popup_snote_single_graphic_window_t4_ParamLimits

0x6c4b,	// (0x0004aba3) popup_snote_single_graphic_window_t4

0x6c7f,	// (0x0004abd7) popup_snote_single_graphic_window_t5_ParamLimits

0x6c7f,	// (0x0004abd7) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000534e9) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000534e9) popup_snote_single_graphic_window_t

0xb123,	// (0x0004f07b) grid_graphic_popup_pane_ParamLimits

0xb123,	// (0x0004f07b) grid_graphic_popup_pane

0xb14d,	// (0x0004f0a5) listscroll_popup_graphic_pane_g1_ParamLimits

0xb14d,	// (0x0004f0a5) listscroll_popup_graphic_pane_g1

0xb161,	// (0x0004f0b9) listscroll_popup_graphic_pane_g2_ParamLimits

0xb161,	// (0x0004f0b9) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x000538de) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x000538de) listscroll_popup_graphic_pane_g

0xb175,	// (0x0004f0cd) scroll_pane_cp5

0xb0b9,	// (0x0004f011) cell_graphic_popup_pane_ParamLimits

0xb0b9,	// (0x0004f011) cell_graphic_popup_pane

0xb09a,	// (0x0004eff2) cell_graphic_popup_pane_g1

0xb0a2,	// (0x0004effa) cell_graphic_popup_pane_g2

0x0cc8,	// (0x00044c20) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x000538d7) cell_graphic_popup_pane_g

0xb0ab,	// (0x0004f003) cell_graphic_popup_pane_t2

0x0cd1,	// (0x00044c29) grid_highlight_pane_cp3

0x0d46,	// (0x00044c9e) list_gen_pane_ParamLimits

0x0d46,	// (0x00044c9e) list_gen_pane

0x0d6e,	// (0x00044cc6) scroll_pane

0xaff2,	// (0x0004ef4a) bg_list_pane_g1_ParamLimits

0xaff2,	// (0x0004ef4a) bg_list_pane_g1

0xb00f,	// (0x0004ef67) bg_list_pane_g2_ParamLimits

0xb00f,	// (0x0004ef67) bg_list_pane_g2

0xb024,	// (0x0004ef7c) bg_list_pane_g3_ParamLimits

0xb024,	// (0x0004ef7c) bg_list_pane_g3

0xb038,	// (0x0004ef90) bg_list_pane_g4_ParamLimits

0xb038,	// (0x0004ef90) bg_list_pane_g4

0xb04c,	// (0x0004efa4) bg_list_pane_g5_ParamLimits

0xb04c,	// (0x0004efa4) bg_list_pane_g5

0x0004,

0xf974,	// (0x000538cc) bg_list_pane_g_ParamLimits

0xf974,	// (0x000538cc) bg_list_pane_g

0x850d,	// (0x0004c465) list_double2_graphic_large_graphic_pane_ParamLimits

0x850d,	// (0x0004c465) list_double2_graphic_large_graphic_pane

0x850d,	// (0x0004c465) list_double2_graphic_pane_ParamLimits

0x850d,	// (0x0004c465) list_double2_graphic_pane

0x850d,	// (0x0004c465) list_double2_large_graphic_pane_ParamLimits

0x850d,	// (0x0004c465) list_double2_large_graphic_pane

0x5ca5,	// (0x00049bfd) list_double2_pane_ParamLimits

0x5ca5,	// (0x00049bfd) list_double2_pane

0x850d,	// (0x0004c465) list_double_graphic_heading_pane_ParamLimits

0x850d,	// (0x0004c465) list_double_graphic_heading_pane

0x850d,	// (0x0004c465) list_double_graphic_pane_ParamLimits

0x850d,	// (0x0004c465) list_double_graphic_pane

0x850d,	// (0x0004c465) list_double_heading_pane_ParamLimits

0x850d,	// (0x0004c465) list_double_heading_pane

0x850d,	// (0x0004c465) list_double_large_graphic_pane_ParamLimits

0x850d,	// (0x0004c465) list_double_large_graphic_pane

0x850d,	// (0x0004c465) list_double_number_pane_ParamLimits

0x850d,	// (0x0004c465) list_double_number_pane

0x850d,	// (0x0004c465) list_double_pane_ParamLimits

0x850d,	// (0x0004c465) list_double_pane

0x850d,	// (0x0004c465) list_double_time_pane_ParamLimits

0x850d,	// (0x0004c465) list_double_time_pane

0x850d,	// (0x0004c465) list_setting_number_pane_ParamLimits

0x850d,	// (0x0004c465) list_setting_number_pane

0x850d,	// (0x0004c465) list_setting_pane_ParamLimits

0x850d,	// (0x0004c465) list_setting_pane

0x8578,	// (0x0004c4d0) list_single_2graphic_pane_ParamLimits

0x8578,	// (0x0004c4d0) list_single_2graphic_pane

0x8578,	// (0x0004c4d0) list_single_graphic_heading_pane_ParamLimits

0x8578,	// (0x0004c4d0) list_single_graphic_heading_pane

0x8578,	// (0x0004c4d0) list_single_graphic_pane_ParamLimits

0x8578,	// (0x0004c4d0) list_single_graphic_pane

0x8578,	// (0x0004c4d0) list_single_heading_pane_ParamLimits

0x8578,	// (0x0004c4d0) list_single_heading_pane

0x5cf9,	// (0x00049c51) list_single_large_graphic_pane_ParamLimits

0x5cf9,	// (0x00049c51) list_single_large_graphic_pane

0x8578,	// (0x0004c4d0) list_single_number_heading_pane_ParamLimits

0x8578,	// (0x0004c4d0) list_single_number_heading_pane

0x8578,	// (0x0004c4d0) list_single_number_pane_ParamLimits

0x8578,	// (0x0004c4d0) list_single_number_pane

0x8578,	// (0x0004c4d0) list_single_pane_ParamLimits

0x8578,	// (0x0004c4d0) list_single_pane

0x09e0,	// (0x00044938) list_highlight_pane_cp1

0x6cb8,	// (0x0004ac10) list_single_pane_g1_ParamLimits

0x6cb8,	// (0x0004ac10) list_single_pane_g1

0x6cc4,	// (0x0004ac1c) list_single_pane_g2_ParamLimits

0x6cc4,	// (0x0004ac1c) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00053505) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00053505) list_single_pane_g

0x5c8f,	// (0x00049be7) list_single_pane_t1_ParamLimits

0x5c8f,	// (0x00049be7) list_single_pane_t1

0x6cb8,	// (0x0004ac10) list_single_number_pane_g1_ParamLimits

0x6cb8,	// (0x0004ac10) list_single_number_pane_g1

0x6cc4,	// (0x0004ac1c) list_single_number_pane_g2_ParamLimits

0x6cc4,	// (0x0004ac1c) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00053505) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00053505) list_single_number_pane_g

0x5445,	// (0x0004939d) list_single_number_pane_t1_ParamLimits

0x5445,	// (0x0004939d) list_single_number_pane_t1

0x5c4d,	// (0x00049ba5) list_single_number_pane_t2_ParamLimits

0x5c4d,	// (0x00049ba5) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0005388d) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0005388d) list_single_number_pane_t

0x5439,	// (0x00049391) list_single_graphic_pane_g1_ParamLimits

0x5439,	// (0x00049391) list_single_graphic_pane_g1

0x6cb8,	// (0x0004ac10) list_single_graphic_pane_g2_ParamLimits

0x6cb8,	// (0x0004ac10) list_single_graphic_pane_g2

0x6cc4,	// (0x0004ac1c) list_single_graphic_pane_g3_ParamLimits

0x6cc4,	// (0x0004ac1c) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000534f4) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000534f4) list_single_graphic_pane_g

0x5445,	// (0x0004939d) list_single_graphic_pane_t1_ParamLimits

0x5445,	// (0x0004939d) list_single_graphic_pane_t1

0x545b,	// (0x000493b3) list_single_heading_pane_g1_ParamLimits

0x545b,	// (0x000493b3) list_single_heading_pane_g1

0x6cc4,	// (0x0004ac1c) list_single_heading_pane_g2_ParamLimits

0x6cc4,	// (0x0004ac1c) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000534fb) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000534fb) list_single_heading_pane_g

0x546e,	// (0x000493c6) list_single_heading_pane_t1_ParamLimits

0x546e,	// (0x000493c6) list_single_heading_pane_t1

0x6cd0,	// (0x0004ac28) list_single_heading_pane_t2_ParamLimits

0x6cd0,	// (0x0004ac28) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00053500) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00053500) list_single_heading_pane_t

0x6cb8,	// (0x0004ac10) list_single_number_heading_pane_g1_ParamLimits

0x6cb8,	// (0x0004ac10) list_single_number_heading_pane_g1

0x6cc4,	// (0x0004ac1c) list_single_number_heading_pane_g2_ParamLimits

0x6cc4,	// (0x0004ac1c) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00053505) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00053505) list_single_number_heading_pane_g

0x5484,	// (0x000493dc) list_single_number_heading_pane_t1_ParamLimits

0x5484,	// (0x000493dc) list_single_number_heading_pane_t1

0x549a,	// (0x000493f2) list_single_number_heading_pane_t2_ParamLimits

0x549a,	// (0x000493f2) list_single_number_heading_pane_t2

0x54ac,	// (0x00049404) list_single_number_heading_pane_t3_ParamLimits

0x54ac,	// (0x00049404) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0005350a) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0005350a) list_single_number_heading_pane_t

0x54be,	// (0x00049416) list_single_graphic_heading_pane_g1_ParamLimits

0x54be,	// (0x00049416) list_single_graphic_heading_pane_g1

0x6ce2,	// (0x0004ac3a) list_single_graphic_heading_pane_g4_ParamLimits

0x6ce2,	// (0x0004ac3a) list_single_graphic_heading_pane_g4

0x6cc4,	// (0x0004ac1c) list_single_graphic_heading_pane_g5_ParamLimits

0x6cc4,	// (0x0004ac1c) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00053511) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00053511) list_single_graphic_heading_pane_g

0x5484,	// (0x000493dc) list_single_graphic_heading_pane_t1_ParamLimits

0x5484,	// (0x000493dc) list_single_graphic_heading_pane_t1

0x54ca,	// (0x00049422) list_single_graphic_heading_pane_t2_ParamLimits

0x54ca,	// (0x00049422) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00053518) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00053518) list_single_graphic_heading_pane_t

0x54dc,	// (0x00049434) list_single_large_graphic_pane_g1_ParamLimits

0x54dc,	// (0x00049434) list_single_large_graphic_pane_g1

0x6cf3,	// (0x0004ac4b) list_single_large_graphic_pane_g2_ParamLimits

0x6cf3,	// (0x0004ac4b) list_single_large_graphic_pane_g2

0x6cff,	// (0x0004ac57) list_single_large_graphic_pane_g3_ParamLimits

0x6cff,	// (0x0004ac57) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0005351d) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0005351d) list_single_large_graphic_pane_g

0xa08b,	// (0x0004dfe3) wait_border_pane_g2_copy1

0x54e8,	// (0x00049440) list_single_large_graphic_pane_g4_cp2

0x54f0,	// (0x00049448) list_single_large_graphic_pane_t1_ParamLimits

0x54f0,	// (0x00049448) list_single_large_graphic_pane_t1

0x25d5,	// (0x0004652d) list_double_pane_g1_ParamLimits

0x25d5,	// (0x0004652d) list_double_pane_g1

0x6d0b,	// (0x0004ac63) list_double_pane_g2_ParamLimits

0x6d0b,	// (0x0004ac63) list_double_pane_g2

0x0001,

0xf5cc,	// (0x00053524) list_double_pane_g_ParamLimits

0xf5cc,	// (0x00053524) list_double_pane_g

0x5506,	// (0x0004945e) list_double_pane_t1_ParamLimits

0x5506,	// (0x0004945e) list_double_pane_t1

0x551c,	// (0x00049474) list_double_pane_t2_ParamLimits

0x551c,	// (0x00049474) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00053529) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00053529) list_double_pane_t

0x552e,	// (0x00049486) list_double2_pane_g1_ParamLimits

0x552e,	// (0x00049486) list_double2_pane_g1

0x553f,	// (0x00049497) list_double2_pane_g2_ParamLimits

0x553f,	// (0x00049497) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0005352e) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0005352e) list_double2_pane_g

0x554b,	// (0x000494a3) list_double2_pane_t1_ParamLimits

0x554b,	// (0x000494a3) list_double2_pane_t1

0x5561,	// (0x000494b9) list_double2_pane_t2_ParamLimits

0x5561,	// (0x000494b9) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00053533) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00053533) list_double2_pane_t

0x25d5,	// (0x0004652d) list_double_number_pane_g1_ParamLimits

0x25d5,	// (0x0004652d) list_double_number_pane_g1

0x6d0b,	// (0x0004ac63) list_double_number_pane_g2_ParamLimits

0x6d0b,	// (0x0004ac63) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x00053524) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x00053524) list_double_number_pane_g

0x5573,	// (0x000494cb) list_double_number_pane_t1_ParamLimits

0x5573,	// (0x000494cb) list_double_number_pane_t1

0x5585,	// (0x000494dd) list_double_number_pane_t2_ParamLimits

0x5585,	// (0x000494dd) list_double_number_pane_t2

0x559b,	// (0x000494f3) list_double_number_pane_t3_ParamLimits

0x559b,	// (0x000494f3) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00053538) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00053538) list_double_number_pane_t

0x55ad,	// (0x00049505) list_double_graphic_pane_g1_ParamLimits

0x55ad,	// (0x00049505) list_double_graphic_pane_g1

0x55b9,	// (0x00049511) list_double_graphic_pane_g2_ParamLimits

0x55b9,	// (0x00049511) list_double_graphic_pane_g2

0x55c8,	// (0x00049520) list_double_graphic_pane_g3_ParamLimits

0x55c8,	// (0x00049520) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0005353f) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0005353f) list_double_graphic_pane_g

0x5585,	// (0x000494dd) list_double_graphic_pane_t1_ParamLimits

0x5585,	// (0x000494dd) list_double_graphic_pane_t1

0x559b,	// (0x000494f3) list_double_graphic_pane_t2_ParamLimits

0x559b,	// (0x000494f3) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00053548) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00053548) list_double_graphic_pane_t

0x55ad,	// (0x00049505) list_double2_graphic_pane_g1_ParamLimits

0x55ad,	// (0x00049505) list_double2_graphic_pane_g1

0x25d5,	// (0x0004652d) list_double2_graphic_pane_g2_ParamLimits

0x25d5,	// (0x0004652d) list_double2_graphic_pane_g2

0x6d0b,	// (0x0004ac63) list_double2_graphic_pane_g3_ParamLimits

0x6d0b,	// (0x0004ac63) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0005354d) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0005354d) list_double2_graphic_pane_g

0x5585,	// (0x000494dd) list_double2_graphic_pane_t1_ParamLimits

0x5585,	// (0x000494dd) list_double2_graphic_pane_t1

0x55d4,	// (0x0004952c) list_double2_graphic_pane_t2_ParamLimits

0x55d4,	// (0x0004952c) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00053554) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00053554) list_double2_graphic_pane_t

0x55e6,	// (0x0004953e) list_double_large_graphic_pane_g1_ParamLimits

0x55e6,	// (0x0004953e) list_double_large_graphic_pane_g1

0x5605,	// (0x0004955d) list_double_large_graphic_pane_g2_ParamLimits

0x5605,	// (0x0004955d) list_double_large_graphic_pane_g2

0x6d0b,	// (0x0004ac63) list_double_large_graphic_pane_g3_ParamLimits

0x6d0b,	// (0x0004ac63) list_double_large_graphic_pane_g3

0x561b,	// (0x00049573) list_double_large_graphic_pane_g4_ParamLimits

0x561b,	// (0x00049573) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00053559) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00053559) list_double_large_graphic_pane_g

0x562d,	// (0x00049585) list_double_large_graphic_pane_t1_ParamLimits

0x562d,	// (0x00049585) list_double_large_graphic_pane_t1

0x5646,	// (0x0004959e) list_double_large_graphic_pane_t2_ParamLimits

0x5646,	// (0x0004959e) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00053564) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00053564) list_double_large_graphic_pane_t

0x5658,	// (0x000495b0) list_double2_large_graphic_pane_g1_ParamLimits

0x5658,	// (0x000495b0) list_double2_large_graphic_pane_g1

0x6d38,	// (0x0004ac90) list_double2_large_graphic_pane_g2_ParamLimits

0x6d38,	// (0x0004ac90) list_double2_large_graphic_pane_g2

0x6d0b,	// (0x0004ac63) list_double2_large_graphic_pane_g3_ParamLimits

0x6d0b,	// (0x0004ac63) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00053569) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00053569) list_double2_large_graphic_pane_g

0x5585,	// (0x000494dd) list_double2_large_graphic_pane_t1_ParamLimits

0x5585,	// (0x000494dd) list_double2_large_graphic_pane_t1

0x55d4,	// (0x0004952c) list_double2_large_graphic_pane_t2_ParamLimits

0x55d4,	// (0x0004952c) list_double2_large_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00053554) list_double2_large_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00053554) list_double2_large_graphic_pane_t

0x5664,	// (0x000495bc) list_double_heading_pane_g1_ParamLimits

0x5664,	// (0x000495bc) list_double_heading_pane_g1

0x6d49,	// (0x0004aca1) list_double_heading_pane_g2_ParamLimits

0x6d49,	// (0x0004aca1) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00053570) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00053570) list_double_heading_pane_g

0x5675,	// (0x000495cd) list_double_heading_pane_t1_ParamLimits

0x5675,	// (0x000495cd) list_double_heading_pane_t1

0x568b,	// (0x000495e3) list_double_heading_pane_t2_ParamLimits

0x568b,	// (0x000495e3) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00053575) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00053575) list_double_heading_pane_t

0x569d,	// (0x000495f5) list_double_graphic_heading_pane_g1_ParamLimits

0x569d,	// (0x000495f5) list_double_graphic_heading_pane_g1

0x5664,	// (0x000495bc) list_double_graphic_heading_pane_g2_ParamLimits

0x5664,	// (0x000495bc) list_double_graphic_heading_pane_g2

0x6d49,	// (0x0004aca1) list_double_graphic_heading_pane_g3_ParamLimits

0x6d49,	// (0x0004aca1) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0005357a) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0005357a) list_double_graphic_heading_pane_g

0x5675,	// (0x000495cd) list_double_graphic_heading_pane_t1_ParamLimits

0x5675,	// (0x000495cd) list_double_graphic_heading_pane_t1

0x568b,	// (0x000495e3) list_double_graphic_heading_pane_t2_ParamLimits

0x568b,	// (0x000495e3) list_double_graphic_heading_pane_t2

0x0001,

0xf61d,	// (0x00053575) list_double_graphic_heading_pane_t_ParamLimits

0xf61d,	// (0x00053575) list_double_graphic_heading_pane_t

0x56a9,	// (0x00049601) list_double_time_pane_g1_ParamLimits

0x56a9,	// (0x00049601) list_double_time_pane_g1

0x56ba,	// (0x00049612) list_double_time_pane_g2_ParamLimits

0x56ba,	// (0x00049612) list_double_time_pane_g2

0x0001,

0xf629,	// (0x00053581) list_double_time_pane_g_ParamLimits

0xf629,	// (0x00053581) list_double_time_pane_g

0x56c6,	// (0x0004961e) list_double_time_pane_t1_ParamLimits

0x56c6,	// (0x0004961e) list_double_time_pane_t1

0x56dc,	// (0x00049634) list_double_time_pane_t2_ParamLimits

0x56dc,	// (0x00049634) list_double_time_pane_t2

0x56ee,	// (0x00049646) list_double_time_pane_t3_ParamLimits

0x56ee,	// (0x00049646) list_double_time_pane_t3

0x5700,	// (0x00049658) list_double_time_pane_t4_ParamLimits

0x5700,	// (0x00049658) list_double_time_pane_t4

0x0003,

0xf62e,	// (0x00053586) list_double_time_pane_t_ParamLimits

0xf62e,	// (0x00053586) list_double_time_pane_t

0x5712,	// (0x0004966a) list_setting_pane_g1_ParamLimits

0x5712,	// (0x0004966a) list_setting_pane_g1

0x571e,	// (0x00049676) list_setting_pane_g2_ParamLimits

0x571e,	// (0x00049676) list_setting_pane_g2

0x0001,

0xf637,	// (0x0005358f) list_setting_pane_g_ParamLimits

0xf637,	// (0x0005358f) list_setting_pane_g

0x572a,	// (0x00049682) list_setting_pane_t1_ParamLimits

0x572a,	// (0x00049682) list_setting_pane_t1

0x5744,	// (0x0004969c) list_setting_pane_t2_ParamLimits

0x5744,	// (0x0004969c) list_setting_pane_t2

0x0002,

0xf63c,	// (0x00053594) list_setting_pane_t_ParamLimits

0xf63c,	// (0x00053594) list_setting_pane_t

0x5781,	// (0x000496d9) set_value_pane_cp_ParamLimits

0x5781,	// (0x000496d9) set_value_pane_cp

0x578d,	// (0x000496e5) list_setting_number_pane_g1_ParamLimits

0x578d,	// (0x000496e5) list_setting_number_pane_g1

0x5799,	// (0x000496f1) list_setting_number_pane_g2_ParamLimits

0x5799,	// (0x000496f1) list_setting_number_pane_g2

0x0001,

0xf643,	// (0x0005359b) list_setting_number_pane_g_ParamLimits

0xf643,	// (0x0005359b) list_setting_number_pane_g

0x57a5,	// (0x000496fd) list_setting_number_pane_t1_ParamLimits

0x57a5,	// (0x000496fd) list_setting_number_pane_t1

0x57be,	// (0x00049716) list_setting_number_pane_t2_ParamLimits

0x57be,	// (0x00049716) list_setting_number_pane_t2

0x57d8,	// (0x00049730) list_setting_number_pane_t3_ParamLimits

0x57d8,	// (0x00049730) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x000535a0) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x000535a0) list_setting_number_pane_t

0x5781,	// (0x000496d9) set_value_pane_ParamLimits

0x5781,	// (0x000496d9) set_value_pane

0x0da2,	// (0x00044cfa) bg_set_opt_pane_ParamLimits

0x0da2,	// (0x00044cfa) bg_set_opt_pane

0x581b,	// (0x00049773) set_value_pane_t1

0x0dc3,	// (0x00044d1b) slider_set_pane_cp3

0x6d55,	// (0x0004acad) volume_small_pane_cp

0x0dcc,	// (0x00044d24) list_form_gen_pane

0x0dd5,	// (0x00044d2d) scroll_pane_cp8

0x5831,	// (0x00049789) form_field_data_pane_ParamLimits

0x5831,	// (0x00049789) form_field_data_pane

0x5853,	// (0x000497ab) form_field_data_wide_pane_ParamLimits

0x5853,	// (0x000497ab) form_field_data_wide_pane

0x5876,	// (0x000497ce) form_field_popup_pane_ParamLimits

0x5876,	// (0x000497ce) form_field_popup_pane

0x5896,	// (0x000497ee) form_field_popup_wide_pane_ParamLimits

0x5896,	// (0x000497ee) form_field_popup_wide_pane

0x58b3,	// (0x0004980b) form_field_slider_pane_ParamLimits

0x58b3,	// (0x0004980b) form_field_slider_pane

0x58c6,	// (0x0004981e) form_field_slider_wide_pane_ParamLimits

0x58c6,	// (0x0004981e) form_field_slider_wide_pane

0x0de6,	// (0x00044d3e) data_form_pane

0x58e3,	// (0x0004983b) form_field_data_pane_t1

0x0df2,	// (0x00044d4a) input_focus_pane

0x58fb,	// (0x00049853) data_form_wide_pane

0x5918,	// (0x00049870) form_field_data_wide_pane_t1

0x0ce6,	// (0x00044c3e) input_focus_pane_cp6

0x593a,	// (0x00049892) form_field_popup_pane_t1

0x0df2,	// (0x00044d4a) input_focus_pane_cp7

0x0e20,	// (0x00044d78) list_form_pane

0x595a,	// (0x000498b2) form_field_popup_wide_pane_t1

0x0df2,	// (0x00044d4a) input_focus_pane_cp8

0x0e2c,	// (0x00044d84) list_form_wide_pane

0x5977,	// (0x000498cf) form_field_slider_pane_t1_ParamLimits

0x5977,	// (0x000498cf) form_field_slider_pane_t1

0x598d,	// (0x000498e5) form_field_slider_pane_t2_ParamLimits

0x598d,	// (0x000498e5) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x000535b0) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x000535b0) form_field_slider_pane_t

0x0a2e,	// (0x00044986) input_focus_pane_cp9_ParamLimits

0x0a2e,	// (0x00044986) input_focus_pane_cp9

0x59a2,	// (0x000498fa) slider_cont_pane_ParamLimits

0x59a2,	// (0x000498fa) slider_cont_pane

0x0e38,	// (0x00044d90) form_field_slider_wide_pane_t1_ParamLimits

0x0e38,	// (0x00044d90) form_field_slider_wide_pane_t1

0x59b6,	// (0x0004990e) form_field_slider_wide_pane_t2_ParamLimits

0x59b6,	// (0x0004990e) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x000535b5) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x000535b5) form_field_slider_wide_pane_t

0x0a2e,	// (0x00044986) input_focus_pane_cp10_ParamLimits

0x0a2e,	// (0x00044986) input_focus_pane_cp10

0x59c8,	// (0x00049920) slider_cont_pane_cp1_ParamLimits

0x59c8,	// (0x00049920) slider_cont_pane_cp1

0x59dc,	// (0x00049934) slider_form_pane_cp

0x0e4a,	// (0x00044da2) input_focus_pane_g1

0x0e52,	// (0x00044daa) input_focus_pane_g2

0x0e5a,	// (0x00044db2) input_focus_pane_g3

0x0e62,	// (0x00044dba) input_focus_pane_g4

0x0e6a,	// (0x00044dc2) input_focus_pane_g5

0x0e72,	// (0x00044dca) input_focus_pane_g6

0x0e7a,	// (0x00044dd2) input_focus_pane_g7

0x0e82,	// (0x00044dda) input_focus_pane_g8

0x0e8a,	// (0x00044de2) input_focus_pane_g9

0x09d6,	// (0x0004492e) input_focus_pane_g10

0x0009,

0xf662,	// (0x000535ba) input_focus_pane_g

0xa094,	// (0x0004dfec) wait_border_pane_g3_copy1

0x59e4,	// (0x0004993c) data_form_pane_t1

0x09d6,	// (0x0004492e) wait_anim_pane_g1_copy1

0x5c5f,	// (0x00049bb7) data_form_wide_pane_t1

0x59ff,	// (0x00049957) list_form_graphic_pane_cp_ParamLimits

0x59ff,	// (0x00049957) list_form_graphic_pane_cp

0xaf83,	// (0x0004eedb) slider_form_pane_g1

0xaf8c,	// (0x0004eee4) slider_form_pane_g2

0x0006,

0xf965,	// (0x000538bd) slider_form_pane_g

0x59ff,	// (0x00049957) list_form_graphic_pane_ParamLimits

0x59ff,	// (0x00049957) list_form_graphic_pane

0x5a18,	// (0x00049970) list_form_graphic_pane_g1

0x5a20,	// (0x00049978) list_form_graphic_pane_t1_ParamLimits

0x5a20,	// (0x00049978) list_form_graphic_pane_t1

0x0a3c,	// (0x00044994) list_highlight_pane_cp5_ParamLimits

0x0a3c,	// (0x00044994) list_highlight_pane_cp5

0x5a35,	// (0x0004998d) find_pane_g1

0x0e92,	// (0x00044dea) input_find_pane

0x5a3e,	// (0x00049996) input_find_pane_g1_ParamLimits

0x5a3e,	// (0x00049996) input_find_pane_g1

0x5a4a,	// (0x000499a2) input_find_pane_t1_ParamLimits

0x5a4a,	// (0x000499a2) input_find_pane_t1

0x5a5f,	// (0x000499b7) input_find_pane_t2_ParamLimits

0x5a5f,	// (0x000499b7) input_find_pane_t2

0x0001,

0xf677,	// (0x000535cf) input_find_pane_t_ParamLimits

0xf677,	// (0x000535cf) input_find_pane_t

0x0e9b,	// (0x00044df3) input_focus_pane_cp5_ParamLimits

0x0e9b,	// (0x00044df3) input_focus_pane_cp5

0x0eae,	// (0x00044e06) bg_popup_window_pane_cp2_ParamLimits

0x0eae,	// (0x00044e06) bg_popup_window_pane_cp2

0x0ebb,	// (0x00044e13) listscroll_menu_pane_ParamLimits

0x0ebb,	// (0x00044e13) listscroll_menu_pane

0x6d6a,	// (0x0004acc2) popup_submenu_window_ParamLimits

0x6d6a,	// (0x0004acc2) popup_submenu_window

0x0ec7,	// (0x00044e1f) find_popup_pane_g1

0x6d92,	// (0x0004acea) input_popup_find_pane_cp

0x0ecf,	// (0x00044e27) input_focus_pane_cp4_ParamLimits

0x0ecf,	// (0x00044e27) input_focus_pane_cp4

0x0edd,	// (0x00044e35) input_popup_find_pane_t1_ParamLimits

0x0edd,	// (0x00044e35) input_popup_find_pane_t1

0x09e0,	// (0x00044938) bg_popup_sub_pane_cp

0x0f0b,	// (0x00044e63) listscroll_popup_sub_pane

0x0f13,	// (0x00044e6b) list_submenu_pane_ParamLimits

0x0f13,	// (0x00044e6b) list_submenu_pane

0x0f24,	// (0x00044e7c) scroll_pane_cp4

0x6daa,	// (0x0004ad02) list_single_popup_submenu_pane_ParamLimits

0x6daa,	// (0x0004ad02) list_single_popup_submenu_pane

0x22c9,	// (0x00046221) list_single_popup_submenu_pane_g1

0x6dbe,	// (0x0004ad16) list_single_popup_submenu_pane_t1_ParamLimits

0x6dbe,	// (0x0004ad16) list_single_popup_submenu_pane_t1

0x0a3c,	// (0x00044994) bg_active_tab_pane_cp1_ParamLimits

0x0a3c,	// (0x00044994) bg_active_tab_pane_cp1

0x0f2c,	// (0x00044e84) tabs_2_active_pane_g1

0x6dd3,	// (0x0004ad2b) tabs_2_active_pane_t1

0x0a3c,	// (0x00044994) bg_passive_tab_pane_cp1_ParamLimits

0x0a3c,	// (0x00044994) bg_passive_tab_pane_cp1

0x0f2c,	// (0x00044e84) tabs_2_passive_pane_g1

0x6dd3,	// (0x0004ad2b) tabs_2_passive_pane_t1

0x6de5,	// (0x0004ad3d) bg_active_tab_pane_cp4

0x6df3,	// (0x0004ad4b) tabs_2_long_active_pane_t1

0x6e06,	// (0x0004ad5e) bg_passive_tab_pane_cp4

0x8200,	// (0x0004c158) list_single_midp_graphic_pane_g4_ParamLimits

0x6de5,	// (0x0004ad3d) bg_active_tab_pane_cp5

0x6e12,	// (0x0004ad6a) tabs_3_long_active_pane_t1

0x6e06,	// (0x0004ad5e) bg_passive_tab_pane_cp5

0x8200,	// (0x0004c158) list_single_midp_graphic_pane_g4

0x0a3c,	// (0x00044994) bg_popup_window_pane_cp13_ParamLimits

0x0a3c,	// (0x00044994) bg_popup_window_pane_cp13

0x0f40,	// (0x00044e98) listscroll_popup_fast_pane_ParamLimits

0x0f40,	// (0x00044e98) listscroll_popup_fast_pane

0x0f4c,	// (0x00044ea4) grid_popup_fast_pane_ParamLimits

0x0f4c,	// (0x00044ea4) grid_popup_fast_pane

0x0f5e,	// (0x00044eb6) scroll_pane_cp9_ParamLimits

0x0f5e,	// (0x00044eb6) scroll_pane_cp9

0xc893,	// (0x000507eb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc893,	// (0x000507eb) list_single_graphic_hl_pane_t1_cp2

0x0f71,	// (0x00044ec9) input_focus_pane_cp20_ParamLimits

0x0f71,	// (0x00044ec9) input_focus_pane_cp20

0x0f7f,	// (0x00044ed7) query_popup_data_pane_t1_ParamLimits

0x0f7f,	// (0x00044ed7) query_popup_data_pane_t1

0x0f92,	// (0x00044eea) query_popup_data_pane_t2_ParamLimits

0x0f92,	// (0x00044eea) query_popup_data_pane_t2

0x0fd8,	// (0x00044f30) query_popup_data_pane_t3_ParamLimits

0x0fd8,	// (0x00044f30) query_popup_data_pane_t3

0x1019,	// (0x00044f71) query_popup_data_pane_t4_ParamLimits

0x1019,	// (0x00044f71) query_popup_data_pane_t4

0x1055,	// (0x00044fad) query_popup_data_pane_t5_ParamLimits

0x1055,	// (0x00044fad) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x000535d4) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x000535d4) query_popup_data_pane_t

0x0e4a,	// (0x00044da2) bg_set_opt_pane_g1

0x0e52,	// (0x00044daa) bg_set_opt_pane_g2

0x0e5a,	// (0x00044db2) bg_set_opt_pane_g3

0x0e62,	// (0x00044dba) bg_set_opt_pane_g4

0x0e6a,	// (0x00044dc2) bg_set_opt_pane_g5

0x0e72,	// (0x00044dca) bg_set_opt_pane_g6

0x0e7a,	// (0x00044dd2) bg_set_opt_pane_g7

0x0e82,	// (0x00044dda) bg_set_opt_pane_g8

0x0e8a,	// (0x00044de2) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x000535df) bg_set_opt_pane_g

0x732f,	// (0x0004b287) control_top_pane_stacon_ParamLimits

0x732f,	// (0x0004b287) control_top_pane_stacon

0x7382,	// (0x0004b2da) signal_pane_stacon_ParamLimits

0x7382,	// (0x0004b2da) signal_pane_stacon

0x13e1,	// (0x00045339) stacon_top_pane_g1_ParamLimits

0x13e1,	// (0x00045339) stacon_top_pane_g1

0x73a7,	// (0x0004b2ff) title_pane_stacon_ParamLimits

0x73a7,	// (0x0004b2ff) title_pane_stacon

0x73d1,	// (0x0004b329) uni_indicator_pane_stacon_ParamLimits

0x73d1,	// (0x0004b329) uni_indicator_pane_stacon

0x73e6,	// (0x0004b33e) battery_pane_stacon_ParamLimits

0x73e6,	// (0x0004b33e) battery_pane_stacon

0x742a,	// (0x0004b382) control_bottom_pane_stacon_ParamLimits

0x742a,	// (0x0004b382) control_bottom_pane_stacon

0x744d,	// (0x0004b3a5) navi_pane_stacon_ParamLimits

0x744d,	// (0x0004b3a5) navi_pane_stacon

0x1403,	// (0x0004535b) stacon_bottom_pane_g1_ParamLimits

0x1403,	// (0x0004535b) stacon_bottom_pane_g1

0x6e3e,	// (0x0004ad96) aid_levels_signal_lsc_ParamLimits

0x6e3e,	// (0x0004ad96) aid_levels_signal_lsc

0x6e54,	// (0x0004adac) signal_pane_stacon_g1_ParamLimits

0x6e54,	// (0x0004adac) signal_pane_stacon_g1

0x6e68,	// (0x0004adc0) signal_pane_stacon_g2_ParamLimits

0x6e68,	// (0x0004adc0) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x000535f2) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x000535f2) signal_pane_stacon_g

0x6e9d,	// (0x0004adf5) title_pane_stacon_t1_ParamLimits

0x6e9d,	// (0x0004adf5) title_pane_stacon_t1

0x10ad,	// (0x00045005) uni_indicator_pane_stacon_g1

0x10b7,	// (0x0004500f) uni_indicator_pane_stacon_g2

0x1099,	// (0x00044ff1) uni_indicator_pane_stacon_g3

0x10a3,	// (0x00044ffb) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x000535fe) uni_indicator_pane_stacon_g

0x6ec2,	// (0x0004ae1a) control_top_pane_stacon_g1

0x6eca,	// (0x0004ae22) control_top_pane_stacon_t1_ParamLimits

0x6eca,	// (0x0004ae22) control_top_pane_stacon_t1

0x6f01,	// (0x0004ae59) aid_levels_battery_lsc_ParamLimits

0x6f01,	// (0x0004ae59) aid_levels_battery_lsc

0x6f18,	// (0x0004ae70) battery_pane_stacon_g1_ParamLimits

0x6f18,	// (0x0004ae70) battery_pane_stacon_g1

0x6f2b,	// (0x0004ae83) battery_pane_stacon_g2_ParamLimits

0x6f2b,	// (0x0004ae83) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x00053607) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x00053607) battery_pane_stacon_g

0x6f69,	// (0x0004aec1) navi_icon_pane_stacon

0x6f7d,	// (0x0004aed5) navi_navi_pane_stacon

0x6f69,	// (0x0004aec1) navi_text_pane_stacon

0x6ec2,	// (0x0004ae1a) control_bottom_pane_stacon_g1

0x6f91,	// (0x0004aee9) control_bottom_pane_stacon_t1_ParamLimits

0x6f91,	// (0x0004aee9) control_bottom_pane_stacon_t1

0x6fc8,	// (0x0004af20) grid_app_pane_ParamLimits

0x6fc8,	// (0x0004af20) grid_app_pane

0x6fea,	// (0x0004af42) scroll_pane_cp15_ParamLimits

0x6fea,	// (0x0004af42) scroll_pane_cp15

0x6ffd,	// (0x0004af55) cell_app_pane_ParamLimits

0x6ffd,	// (0x0004af55) cell_app_pane

0x7025,	// (0x0004af7d) cell_app_pane_g1_ParamLimits

0x7025,	// (0x0004af7d) cell_app_pane_g1

0x10db,	// (0x00045033) cell_app_pane_g2_ParamLimits

0x10db,	// (0x00045033) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0005360c) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0005360c) cell_app_pane_g

0x7049,	// (0x0004afa1) cell_app_pane_t1_ParamLimits

0x7049,	// (0x0004afa1) cell_app_pane_t1

0x10e7,	// (0x0004503f) grid_highlight_pane_ParamLimits

0x10e7,	// (0x0004503f) grid_highlight_pane

0x0e4a,	// (0x00044da2) cell_highlight_pane_g1

0x0e52,	// (0x00044daa) cell_highlight_pane_g2

0x0e5a,	// (0x00044db2) cell_highlight_pane_g3

0x0e62,	// (0x00044dba) cell_highlight_pane_g4

0x0e6a,	// (0x00044dc2) cell_highlight_pane_g5

0x0e72,	// (0x00044dca) cell_highlight_pane_g6

0x0e7a,	// (0x00044dd2) cell_highlight_pane_g7

0x0e82,	// (0x00044dda) cell_highlight_pane_g8

0x0e8a,	// (0x00044de2) cell_highlight_pane_g9

0x09d6,	// (0x0004492e) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x000535ba) cell_highlight_pane_g

0x10f8,	// (0x00045050) bg_scroll_pane

0x7073,	// (0x0004afcb) scroll_handle_pane

0x113f,	// (0x00045097) scroll_bg_pane_g1

0x1154,	// (0x000450ac) scroll_bg_pane_g2

0x116c,	// (0x000450c4) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x00053611) scroll_bg_pane_g

0x709c,	// (0x0004aff4) scroll_handle_focus_pane_ParamLimits

0x709c,	// (0x0004aff4) scroll_handle_focus_pane

0x113f,	// (0x00045097) scroll_handle_pane_g1

0x1181,	// (0x000450d9) scroll_handle_pane_g2

0x116c,	// (0x000450c4) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x00053618) scroll_handle_pane_g

0x0ecf,	// (0x00044e27) bg_popup_sub_pane_cp21_ParamLimits

0x0ecf,	// (0x00044e27) bg_popup_sub_pane_cp21

0x70a9,	// (0x0004b001) popup_fep_japan_predictive_window_t1_ParamLimits

0x70a9,	// (0x0004b001) popup_fep_japan_predictive_window_t1

0x70c3,	// (0x0004b01b) popup_fep_japan_predictive_window_t2_ParamLimits

0x70c3,	// (0x0004b01b) popup_fep_japan_predictive_window_t2

0x70f6,	// (0x0004b04e) popup_fep_japan_predictive_window_t3_ParamLimits

0x70f6,	// (0x0004b04e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0005361f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0005361f) popup_fep_japan_predictive_window_t

0x09e0,	// (0x00044938) bg_popup_sub_pane_cp23

0x2bd2,	// (0x00046b2a) listscroll_japin_cand_pane

0x1195,	// (0x000450ed) popup_fep_japan_candidate_window_t1

0x11a3,	// (0x000450fb) candidate_pane_ParamLimits

0x11a3,	// (0x000450fb) candidate_pane

0x712d,	// (0x0004b085) scroll_pane_cp30

0x11b5,	// (0x0004510d) list_single_popup_jap_candidate_pane_ParamLimits

0x11b5,	// (0x0004510d) list_single_popup_jap_candidate_pane

0x09e0,	// (0x00044938) list_highlight_pane_cp30

0x11ca,	// (0x00045122) list_single_popup_jap_candidate_pane_t1

0x11d9,	// (0x00045131) level_1_signal

0x11e6,	// (0x0004513e) level_2_signal

0x11f3,	// (0x0004514b) level_3_signal

0x1200,	// (0x00045158) level_4_signal

0x120d,	// (0x00045165) level_5_signal

0x121a,	// (0x00045172) level_6_signal

0x1227,	// (0x0004517f) level_7_signal

0x11d9,	// (0x00045131) level_1_battery

0x11e6,	// (0x0004513e) level_2_battery

0x11f3,	// (0x0004514b) level_3_battery

0x1200,	// (0x00045158) level_4_battery

0x120d,	// (0x00045165) level_5_battery

0x121a,	// (0x00045172) level_6_battery

0x1227,	// (0x0004517f) level_7_battery

0x124c,	// (0x000451a4) list_menu_pane_ParamLimits

0x124c,	// (0x000451a4) list_menu_pane

0x1262,	// (0x000451ba) scroll_pane_cp25_ParamLimits

0x1262,	// (0x000451ba) scroll_pane_cp25

0x127b,	// (0x000451d3) list_double2_graphic_pane_cp2_ParamLimits

0x127b,	// (0x000451d3) list_double2_graphic_pane_cp2

0x127b,	// (0x000451d3) list_double2_large_graphic_pane_cp2_ParamLimits

0x127b,	// (0x000451d3) list_double2_large_graphic_pane_cp2

0x127b,	// (0x000451d3) list_double2_pane_cp2_ParamLimits

0x127b,	// (0x000451d3) list_double2_pane_cp2

0x127b,	// (0x000451d3) list_double_graphic_pane_cp2_ParamLimits

0x127b,	// (0x000451d3) list_double_graphic_pane_cp2

0x127b,	// (0x000451d3) list_double_large_graphic_pane_cp2_ParamLimits

0x127b,	// (0x000451d3) list_double_large_graphic_pane_cp2

0x127b,	// (0x000451d3) list_double_number_pane_cp2_ParamLimits

0x127b,	// (0x000451d3) list_double_number_pane_cp2

0x127b,	// (0x000451d3) list_double_pane_cp2_ParamLimits

0x127b,	// (0x000451d3) list_double_pane_cp2

0x7168,	// (0x0004b0c0) list_single_2graphic_pane_cp2_ParamLimits

0x7168,	// (0x0004b0c0) list_single_2graphic_pane_cp2

0x7168,	// (0x0004b0c0) list_single_graphic_heading_pane_cp2_ParamLimits

0x7168,	// (0x0004b0c0) list_single_graphic_heading_pane_cp2

0x7168,	// (0x0004b0c0) list_single_graphic_pane_cp2_ParamLimits

0x7168,	// (0x0004b0c0) list_single_graphic_pane_cp2

0x7168,	// (0x0004b0c0) list_single_heading_pane_cp2_ParamLimits

0x7168,	// (0x0004b0c0) list_single_heading_pane_cp2

0x128b,	// (0x000451e3) list_single_large_graphic_pane_cp2_ParamLimits

0x128b,	// (0x000451e3) list_single_large_graphic_pane_cp2

0x7168,	// (0x0004b0c0) list_single_number_heading_pane_cp2_ParamLimits

0x7168,	// (0x0004b0c0) list_single_number_heading_pane_cp2

0x7168,	// (0x0004b0c0) list_single_number_pane_cp2_ParamLimits

0x7168,	// (0x0004b0c0) list_single_number_pane_cp2

0x717e,	// (0x0004b0d6) list_single_pane_cp2_ParamLimits

0x717e,	// (0x0004b0d6) list_single_pane_cp2

0x12a5,	// (0x000451fd) bg_popup_sub_pane_cp22

0x7256,	// (0x0004b1ae) popup_side_volume_key_window_g1

0x727a,	// (0x0004b1d2) popup_side_volume_key_window_t1

0x7296,	// (0x0004b1ee) volume_small_pane_cp1

0x0a2e,	// (0x00044986) bg_popup_sub_pane_cp24_ParamLimits

0x0a2e,	// (0x00044986) bg_popup_sub_pane_cp24

0x12bb,	// (0x00045213) fep_china_uni_candidate_pane_ParamLimits

0x12bb,	// (0x00045213) fep_china_uni_candidate_pane

0x12cf,	// (0x00045227) fep_china_uni_entry_pane

0x12df,	// (0x00045237) popup_fep_china_uni_window_g1

0x729e,	// (0x0004b1f6) fep_china_uni_entry_pane_g1

0x72a6,	// (0x0004b1fe) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x00053650) fep_china_uni_entry_pane_g

0x12fb,	// (0x00045253) fep_entry_item_pane

0x1305,	// (0x0004525d) fep_candidate_item_pane

0x72ae,	// (0x0004b206) fep_china_uni_candidate_pane_g1

0x130d,	// (0x00045265) fep_china_uni_candidate_pane_g2

0x1315,	// (0x0004526d) fep_china_uni_candidate_pane_g3

0x72b6,	// (0x0004b20e) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x00053655) fep_china_uni_candidate_pane_g

0x09d6,	// (0x0004492e) fep_entry_item_pane_g1

0x131d,	// (0x00045275) fep_entry_item_pane_t1_ParamLimits

0x131d,	// (0x00045275) fep_entry_item_pane_t1

0x1333,	// (0x0004528b) fep_candidate_item_pane_t1_ParamLimits

0x1333,	// (0x0004528b) fep_candidate_item_pane_t1

0x1348,	// (0x000452a0) fep_candidate_item_pane_t2_ParamLimits

0x1348,	// (0x000452a0) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0005365e) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0005365e) fep_candidate_item_pane_t

0x0a3c,	// (0x00044994) list_highlight_pane_cp31_ParamLimits

0x0a3c,	// (0x00044994) list_highlight_pane_cp31

0x135a,	// (0x000452b2) level_1_signal_lsc

0x1363,	// (0x000452bb) level_2_signal_lsc

0x136c,	// (0x000452c4) level_3_signal_lsc

0x1375,	// (0x000452cd) level_4_signal_lsc

0x137e,	// (0x000452d6) level_5_signal_lsc

0x1387,	// (0x000452df) level_6_signal_lsc

0x1390,	// (0x000452e8) level_7_signal_lsc

0x1390,	// (0x000452e8) level_1_battery_lsc

0x1399,	// (0x000452f1) level_2_battery_lsc

0x13a2,	// (0x000452fa) level_3_battery_lsc

0x13ab,	// (0x00045303) level_4_battery_lsc

0x13b4,	// (0x0004530c) level_5_battery_lsc

0x13bd,	// (0x00045315) level_6_battery_lsc

0x135a,	// (0x000452b2) level_7_battery_lsc

0x13c6,	// (0x0004531e) scroll_handle_focus_pane_g1

0x13cf,	// (0x00045327) scroll_handle_focus_pane_g2

0x13d8,	// (0x00045330) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x00053663) scroll_handle_focus_pane_g

0x5a74,	// (0x000499cc) list_single_2graphic_pane_g1_ParamLimits

0x5a74,	// (0x000499cc) list_single_2graphic_pane_g1

0x6ce2,	// (0x0004ac3a) list_single_2graphic_pane_g2_ParamLimits

0x6ce2,	// (0x0004ac3a) list_single_2graphic_pane_g2

0x6cc4,	// (0x0004ac1c) list_single_2graphic_pane_g3_ParamLimits

0x6cc4,	// (0x0004ac1c) list_single_2graphic_pane_g3

0x5a80,	// (0x000499d8) list_single_2graphic_pane_g4_ParamLimits

0x5a80,	// (0x000499d8) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0005366a) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0005366a) list_single_2graphic_pane_g

0x5a8c,	// (0x000499e4) list_single_2graphic_pane_t1_ParamLimits

0x5a8c,	// (0x000499e4) list_single_2graphic_pane_t1

0x72be,	// (0x0004b216) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x72be,	// (0x0004b216) list_double2_graphic_large_graphic_pane_g1

0x6d38,	// (0x0004ac90) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6d38,	// (0x0004ac90) list_double2_graphic_large_graphic_pane_g2

0x6d0b,	// (0x0004ac63) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6d0b,	// (0x0004ac63) list_double2_graphic_large_graphic_pane_g3

0x72ce,	// (0x0004b226) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x72ce,	// (0x0004b226) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x00053673) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x00053673) list_double2_graphic_large_graphic_pane_g

0x5aba,	// (0x00049a12) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5aba,	// (0x00049a12) list_double2_graphic_large_graphic_pane_t1

0x5ad0,	// (0x00049a28) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5ad0,	// (0x00049a28) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0005367c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0005367c) list_double2_graphic_large_graphic_pane_t

0x74ac,	// (0x0004b404) popup_fast_swap_window_ParamLimits

0x74ac,	// (0x0004b404) popup_fast_swap_window

0x74c8,	// (0x0004b420) popup_side_volume_key_window

0x148e,	// (0x000453e6) stacon_top_pane

0x1498,	// (0x000453f0) status_pane_ParamLimits

0x1498,	// (0x000453f0) status_pane

0x09cc,	// (0x00044924) status_small_pane

0x09e0,	// (0x00044938) control_pane

0x09e0,	// (0x00044938) stacon_bottom_pane

0x0dd5,	// (0x00044d2d) scroll_pane_cp121

0x0dcc,	// (0x00044d24) set_content_pane

0x72da,	// (0x0004b232) bg_active_tab_pane_g1_cp1

0x72e3,	// (0x0004b23b) bg_active_tab_pane_g2_cp1

0x72ec,	// (0x0004b244) bg_active_tab_pane_g3_cp1

0x72da,	// (0x0004b232) bg_passive_tab_pane_g1_cp1

0x72e3,	// (0x0004b23b) bg_passive_tab_pane_g2_cp1

0x72ec,	// (0x0004b244) bg_passive_tab_pane_g3_cp1

0x72f5,	// (0x0004b24d) bg_active_tab_pane_g1_cp2

0x72e3,	// (0x0004b23b) bg_active_tab_pane_g2_cp2

0x72fe,	// (0x0004b256) bg_active_tab_pane_g3_cp2

0x72f5,	// (0x0004b24d) bg_passive_tab_pane_g1_cp2

0x72e3,	// (0x0004b23b) bg_passive_tab_pane_g2_cp2

0x72fe,	// (0x0004b256) bg_passive_tab_pane_g3_cp2

0x7307,	// (0x0004b25f) bg_active_tab_pane_g1_cp3

0x72e3,	// (0x0004b23b) bg_active_tab_pane_g2_cp3

0x7310,	// (0x0004b268) bg_active_tab_pane_g3_cp3

0x7307,	// (0x0004b25f) bg_passive_tab_pane_g1_cp3

0x72e3,	// (0x0004b23b) bg_passive_tab_pane_g2_cp3

0x7310,	// (0x0004b268) bg_passive_tab_pane_g3_cp3

0x7319,	// (0x0004b271) bg_active_tab_pane_g1_cp4

0x72e3,	// (0x0004b23b) bg_active_tab_pane_g2_cp4

0x7324,	// (0x0004b27c) bg_active_tab_pane_g3_cp4

0x7319,	// (0x0004b271) bg_passive_tab_pane_g1_cp4

0x72e3,	// (0x0004b23b) bg_passive_tab_pane_g2_cp4

0x7324,	// (0x0004b27c) bg_passive_tab_pane_g3_cp4

0x7470,	// (0x0004b3c8) bg_active_tab_pane_g1_cp5

0x72e3,	// (0x0004b23b) bg_active_tab_pane_g2_cp5

0x7479,	// (0x0004b3d1) bg_active_tab_pane_g3_cp5

0x7470,	// (0x0004b3c8) bg_passive_tab_pane_g1_cp5

0x72e3,	// (0x0004b23b) bg_passive_tab_pane_g2_cp5

0x7479,	// (0x0004b3d1) bg_passive_tab_pane_g3_cp5

0x7482,	// (0x0004b3da) list_set_graphic_pane_ParamLimits

0x7482,	// (0x0004b3da) list_set_graphic_pane

0x09e0,	// (0x00044938) bg_set_opt_pane_cp4

0x141f,	// (0x00045377) list_set_graphic_pane_g1_ParamLimits

0x141f,	// (0x00045377) list_set_graphic_pane_g1

0x142b,	// (0x00045383) list_set_graphic_pane_g2_ParamLimits

0x142b,	// (0x00045383) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x00053681) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x00053681) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x00053a19) volume_small_pane_cp_g

0x74a0,	// (0x0004b3f8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x74a0,	// (0x0004b3f8) list_double2_large_graphic_pane_g1_cp2

0x144d,	// (0x000453a5) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x144d,	// (0x000453a5) list_double2_large_graphic_pane_g2_cp2

0x145e,	// (0x000453b6) list_double2_large_graphic_pane_g3_cp2

0x1466,	// (0x000453be) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1466,	// (0x000453be) list_double2_large_graphic_pane_t1_cp2

0x147c,	// (0x000453d4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x147c,	// (0x000453d4) list_double2_large_graphic_pane_t2_cp2

0xab45,	// (0x0004ea9d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab45,	// (0x0004ea9d) list_double_large_graphic_pane_g1_cp2

0xab56,	// (0x0004eaae) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab56,	// (0x0004eaae) list_double_large_graphic_pane_g2_cp2

0x15b4,	// (0x0004550c) list_double_large_graphic_pane_g3_cp2

0xab67,	// (0x0004eabf) list_double_large_graphic_pane_g4_cp

0xab6f,	// (0x0004eac7) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab6f,	// (0x0004eac7) list_double_large_graphic_pane_t1_cp2

0xab86,	// (0x0004eade) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab86,	// (0x0004eade) list_double_large_graphic_pane_t2_cp2

0x14a6,	// (0x000453fe) list_double2_graphic_pane_g1_cp2_ParamLimits

0x14a6,	// (0x000453fe) list_double2_graphic_pane_g1_cp2

0x14b4,	// (0x0004540c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x14b4,	// (0x0004540c) list_double2_graphic_pane_g2_cp2

0x14c5,	// (0x0004541d) list_double2_graphic_pane_g3_cp2

0x14cf,	// (0x00045427) list_double2_graphic_pane_t1_cp2_ParamLimits

0x14cf,	// (0x00045427) list_double2_graphic_pane_t1_cp2

0x14e5,	// (0x0004543d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x14e5,	// (0x0004543d) list_double2_graphic_pane_t2_cp2

0x14f7,	// (0x0004544f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x14f7,	// (0x0004544f) list_single_number_heading_pane_g1_cp2

0x1503,	// (0x0004545b) list_single_number_heading_pane_g2_cp2

0x150b,	// (0x00045463) list_single_number_heading_pane_t1_cp2_ParamLimits

0x150b,	// (0x00045463) list_single_number_heading_pane_t1_cp2

0x1521,	// (0x00045479) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1521,	// (0x00045479) list_single_number_heading_pane_t2_cp2

0x1533,	// (0x0004548b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1533,	// (0x0004548b) list_single_number_heading_pane_t3_cp2

0x14f7,	// (0x0004544f) list_single_heading_pane_g1_cp2_ParamLimits

0x14f7,	// (0x0004544f) list_single_heading_pane_g1_cp2

0x1503,	// (0x0004545b) list_single_heading_pane_g2_cp2

0x150b,	// (0x00045463) list_single_heading_pane_t1_cp2_ParamLimits

0x150b,	// (0x00045463) list_single_heading_pane_t1_cp2

0xa94f,	// (0x0004e8a7) list_single_heading_pane_t2_cp2_ParamLimits

0xa94f,	// (0x0004e8a7) list_single_heading_pane_t2_cp2

0xa897,	// (0x0004e7ef) list_double_graphic_pane_g1_cp2_ParamLimits

0xa897,	// (0x0004e7ef) list_double_graphic_pane_g1_cp2

0xa8a3,	// (0x0004e7fb) list_double_graphic_pane_g2_cp2_ParamLimits

0xa8a3,	// (0x0004e7fb) list_double_graphic_pane_g2_cp2

0xa8b2,	// (0x0004e80a) list_double_graphic_pane_g3_cp2

0xa8ba,	// (0x0004e812) list_double_graphic_pane_t1_cp2_ParamLimits

0xa8ba,	// (0x0004e812) list_double_graphic_pane_t1_cp2

0xa8d0,	// (0x0004e828) list_double_graphic_pane_t2_cp2_ParamLimits

0xa8d0,	// (0x0004e828) list_double_graphic_pane_t2_cp2

0x15a8,	// (0x00045500) list_double_number_pane_g1_cp2_ParamLimits

0x15a8,	// (0x00045500) list_double_number_pane_g1_cp2

0x15b4,	// (0x0004550c) list_double_number_pane_g2_cp2

0xa85b,	// (0x0004e7b3) list_double_number_pane_t1_cp2_ParamLimits

0xa85b,	// (0x0004e7b3) list_double_number_pane_t1_cp2

0xa86f,	// (0x0004e7c7) list_double_number_pane_t2_cp2_ParamLimits

0xa86f,	// (0x0004e7c7) list_double_number_pane_t2_cp2

0xa885,	// (0x0004e7dd) list_double_number_pane_t3_cp2_ParamLimits

0xa885,	// (0x0004e7dd) list_double_number_pane_t3_cp2

0xa744,	// (0x0004e69c) list_single_graphic_pane_g1_cp2_ParamLimits

0xa744,	// (0x0004e69c) list_single_graphic_pane_g1_cp2

0x160d,	// (0x00045565) list_single_graphic_pane_g2_cp2_ParamLimits

0x160d,	// (0x00045565) list_single_graphic_pane_g2_cp2

0x1619,	// (0x00045571) list_single_graphic_pane_g3_cp2

0xa71a,	// (0x0004e672) list_single_graphic_pane_t1_cp2_ParamLimits

0xa71a,	// (0x0004e672) list_single_graphic_pane_t1_cp2

0x160d,	// (0x00045565) list_single_number_pane_g1_cp2_ParamLimits

0x160d,	// (0x00045565) list_single_number_pane_g1_cp2

0x1619,	// (0x00045571) list_single_number_pane_g2_cp2

0xa71a,	// (0x0004e672) list_single_number_pane_t1_cp2_ParamLimits

0xa71a,	// (0x0004e672) list_single_number_pane_t1_cp2

0xa730,	// (0x0004e688) list_single_number_pane_t2_cp2_ParamLimits

0xa730,	// (0x0004e688) list_single_number_pane_t2_cp2

0x144d,	// (0x000453a5) list_double2_pane_g1_cp2_ParamLimits

0x144d,	// (0x000453a5) list_double2_pane_g1_cp2

0x145e,	// (0x000453b6) list_double2_pane_g2_cp2

0x1580,	// (0x000454d8) list_double2_pane_t1_cp2_ParamLimits

0x1580,	// (0x000454d8) list_double2_pane_t1_cp2

0x1596,	// (0x000454ee) list_double2_pane_t2_cp2_ParamLimits

0x1596,	// (0x000454ee) list_double2_pane_t2_cp2

0x15a8,	// (0x00045500) list_double_pane_g1_cp2_ParamLimits

0x15a8,	// (0x00045500) list_double_pane_g1_cp2

0x15b4,	// (0x0004550c) list_double_pane_g2_cp2

0x15bc,	// (0x00045514) list_double_pane_t1_cp2_ParamLimits

0x15bc,	// (0x00045514) list_double_pane_t1_cp2

0x15d2,	// (0x0004552a) list_double_pane_t2_cp2_ParamLimits

0x15d2,	// (0x0004552a) list_double_pane_t2_cp2

0x74e2,	// (0x0004b43a) list_single_pane_cp2_g3

0x160d,	// (0x00045565) list_single_pane_g1_cp2_ParamLimits

0x160d,	// (0x00045565) list_single_pane_g1_cp2

0x1619,	// (0x00045571) list_single_pane_g2_cp2

0x1621,	// (0x00045579) list_single_pane_t1_cp2_ParamLimits

0x1621,	// (0x00045579) list_single_pane_t1_cp2

0x74ea,	// (0x0004b442) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x74ea,	// (0x0004b442) list_single_large_graphic_pane_g1_cp2

0x1639,	// (0x00045591) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1639,	// (0x00045591) list_single_large_graphic_pane_g2_cp2

0x1645,	// (0x0004559d) list_single_large_graphic_pane_g3_cp2

0x74f6,	// (0x0004b44e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x74f6,	// (0x0004b44e) list_single_large_graphic_pane_g4_cp1

0x164d,	// (0x000455a5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x164d,	// (0x000455a5) list_single_large_graphic_pane_t1_cp2

0xa6e6,	// (0x0004e63e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa6e6,	// (0x0004e63e) list_single_graphic_heading_pane_g1_cp2

0xa6b3,	// (0x0004e60b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa6b3,	// (0x0004e60b) list_single_graphic_heading_pane_g4_cp2

0x1619,	// (0x00045571) list_single_graphic_heading_pane_g5_cp2

0xa6f2,	// (0x0004e64a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6f2,	// (0x0004e64a) list_single_graphic_heading_pane_t1_cp2

0xa708,	// (0x0004e660) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa708,	// (0x0004e660) list_single_graphic_heading_pane_t2_cp2

0xa6a7,	// (0x0004e5ff) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa6a7,	// (0x0004e5ff) list_single_2graphic_pane_g1_cp2

0xa6b3,	// (0x0004e60b) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa6b3,	// (0x0004e60b) list_single_2graphic_pane_g2_cp2

0x1619,	// (0x00045571) list_single_2graphic_pane_g3_cp2

0xa6c4,	// (0x0004e61c) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa6c4,	// (0x0004e61c) list_single_2graphic_pane_g4_cp2

0xa6d0,	// (0x0004e628) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa6d0,	// (0x0004e628) list_single_2graphic_pane_t1_cp2

0x09d6,	// (0x0004492e) list_highlight_pane_g10_cp1

0xa28f,	// (0x0004e1e7) list_highlight_pane_g1_cp1

0xa297,	// (0x0004e1ef) list_highlight_pane_g2_cp1

0xa29f,	// (0x0004e1f7) list_highlight_pane_g3_cp1

0xa2a7,	// (0x0004e1ff) list_highlight_pane_g4_cp1

0xa2af,	// (0x0004e207) list_highlight_pane_g5_cp1

0xa2b7,	// (0x0004e20f) list_highlight_pane_g6_cp1

0xa2bf,	// (0x0004e217) list_highlight_pane_g7_cp1

0xa2c7,	// (0x0004e21f) list_highlight_pane_g8_cp1

0xa2cf,	// (0x0004e227) list_highlight_pane_g9_cp1

0xa1b7,	// (0x0004e10f) form_field_slider_pane_t3

0xa1c5,	// (0x0004e11d) form_field_slider_pane_t4

0xa1d3,	// (0x0004e12b) slider_form_pane_ParamLimits

0xa1d3,	// (0x0004e12b) slider_form_pane

0x09e0,	// (0x00044938) control_abbreviations

0x09e0,	// (0x00044938) control_conventions

0x09e0,	// (0x00044938) control_definitions

0x09e0,	// (0x00044938) format_table_attribute

0xa999,	// (0x0004e8f1) bg_popup_preview_window_pane_g9

0x09e0,	// (0x00044938) format_table_data2

0x09e0,	// (0x00044938) format_table_data3

0x09e0,	// (0x00044938) format_table_data_example

0x0008,

0x09e0,	// (0x00044938) intro_purpose

0xf8c5,	// (0x0005381d) bg_popup_preview_window_pane_g

0x09e0,	// (0x00044938) texts_category

0x09e0,	// (0x00044938) texts_graphics

0x1663,	// (0x000455bb) text_digital

0x1672,	// (0x000455ca) text_primary

0x1681,	// (0x000455d9) text_primary_small

0x1690,	// (0x000455e8) text_secondary

0x169f,	// (0x000455f7) text_title

0xb06e,	// (0x0004efc6) bg_passive_tab_pane_g1_cp3_srt

0x72e3,	// (0x0004b23b) bg_passive_tab_pane_g2_cp3_srt

0xb077,	// (0x0004efcf) bg_passive_tab_pane_g3_cp3_srt

0x0a3c,	// (0x00044994) bg_active_tab_pane_cp3_srt_ParamLimits

0x0a3c,	// (0x00044994) bg_active_tab_pane_cp3_srt

0xb080,	// (0x0004efd8) tabs_4_active_pane_srt_g1

0xb088,	// (0x0004efe0) tabs_4_active_pane_srt_t1_ParamLimits

0xb088,	// (0x0004efe0) tabs_4_active_pane_srt_t1

0xb06e,	// (0x0004efc6) bg_active_tab_pane_g1_cp3_copy1

0x72e3,	// (0x0004b23b) bg_active_tab_pane_g2_cp3_copy1

0xb077,	// (0x0004efcf) bg_active_tab_pane_g3_cp3_copy1

0x0a3c,	// (0x00044994) tabs_2_long_active_pane_srt_ParamLimits

0x0a3c,	// (0x00044994) tabs_2_long_active_pane_srt

0x0a3c,	// (0x00044994) tabs_2_long_passive_pane_srt_ParamLimits

0x0a3c,	// (0x00044994) tabs_2_long_passive_pane_srt

0x6e06,	// (0x0004ad5e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6e06,	// (0x0004ad5e) bg_passive_tab_pane_cp4_srt

0xadba,	// (0x0004ed12) bg_passive_tab_pane_g1_cp4_srt

0x72e3,	// (0x0004b23b) bg_passive_tab_pane_g2_cp4_srt

0xadc3,	// (0x0004ed1b) bg_passive_tab_pane_g3_cp4_srt

0x6de5,	// (0x0004ad3d) bg_active_tab_pane_cp4_srt_ParamLimits

0x6de5,	// (0x0004ad3d) bg_active_tab_pane_cp4_srt

0xadcc,	// (0x0004ed24) tabs_2_long_active_pane_srt_t1_ParamLimits

0xadcc,	// (0x0004ed24) tabs_2_long_active_pane_srt_t1

0xadba,	// (0x0004ed12) bg_active_tab_pane_g1_cp4_srt

0x72e3,	// (0x0004b23b) bg_active_tab_pane_g2_cp4_srt

0xadc3,	// (0x0004ed1b) bg_active_tab_pane_g3_cp4_srt

0x0a2e,	// (0x00044986) tabs_3_long_active_pane_srt_ParamLimits

0x0a2e,	// (0x00044986) tabs_3_long_active_pane_srt

0x0a2e,	// (0x00044986) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0a2e,	// (0x00044986) tabs_3_long_passive_pane_cp_srt

0x0a2e,	// (0x00044986) tabs_3_long_passive_pane_srt_ParamLimits

0x0a2e,	// (0x00044986) tabs_3_long_passive_pane_srt

0x6e06,	// (0x0004ad5e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6e06,	// (0x0004ad5e) bg_passive_tab_pane_cp5_srt

0x7470,	// (0x0004b3c8) bg_passive_tab_pane_g1_cp5_srt

0x72e3,	// (0x0004b23b) bg_passive_tab_pane_g2_cp5_srt

0x7479,	// (0x0004b3d1) bg_passive_tab_pane_g3_cp5_srt

0x6de5,	// (0x0004ad3d) bg_active_tab_pane_cp5_srt_ParamLimits

0x6de5,	// (0x0004ad3d) bg_active_tab_pane_cp5_srt

0xada8,	// (0x0004ed00) tabs_3_long_active_pane_srt_t1_ParamLimits

0xada8,	// (0x0004ed00) tabs_3_long_active_pane_srt_t1

0x7470,	// (0x0004b3c8) bg_active_tab_pane_g1_cp5_srt

0x72e3,	// (0x0004b23b) bg_active_tab_pane_g2_cp5_srt

0x7479,	// (0x0004b3d1) bg_active_tab_pane_g3_cp5_srt

0xad9a,	// (0x0004ecf2) navi_text_pane_srt_t1

0xad92,	// (0x0004ecea) navi_icon_pane_srt_g1

0x178a,	// (0x000456e2) midp_editing_number_pane_srt

0x16ae,	// (0x00045606) midp_ticker_pane_srt

0x1792,	// (0x000456ea) midp_ticker_pane_srt_g1

0x179a,	// (0x000456f2) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x000536a0) midp_ticker_pane_srt_g

0x17a2,	// (0x000456fa) midp_ticker_pane_srt_t1

0xad83,	// (0x0004ecdb) midp_editing_number_pane_t1_copy1

0x7510,	// (0x0004b468) listscroll_midp_pane

0x7510,	// (0x0004b468) midp_form_pane

0x7582,	// (0x0004b4da) midp_info_popup_window_ParamLimits

0x7582,	// (0x0004b4da) midp_info_popup_window

0x0ecf,	// (0x00044e27) bg_popup_sub_pane_cp50_ParamLimits

0x0ecf,	// (0x00044e27) bg_popup_sub_pane_cp50

0x9ec3,	// (0x0004de1b) listscroll_midp_info_pane_ParamLimits

0x9ec3,	// (0x0004de1b) listscroll_midp_info_pane

0x9ea3,	// (0x0004ddfb) listscroll_form_midp_pane_ParamLimits

0x9ea3,	// (0x0004ddfb) listscroll_form_midp_pane

0x9eaf,	// (0x0004de07) scroll_bar_cp050

0x9e83,	// (0x0004dddb) list_midp_pane

0xbad9,	// (0x0004fa31) signal_pane_g2_cp

0x9dbd,	// (0x0004dd15) listscroll_midp_info_pane_t1_ParamLimits

0x9dbd,	// (0x0004dd15) listscroll_midp_info_pane_t1

0x9dd5,	// (0x0004dd2d) listscroll_midp_info_pane_t2_ParamLimits

0x9dd5,	// (0x0004dd2d) listscroll_midp_info_pane_t2

0x9e13,	// (0x0004dd6b) listscroll_midp_info_pane_t3_ParamLimits

0x9e13,	// (0x0004dd6b) listscroll_midp_info_pane_t3

0x9e4d,	// (0x0004dda5) listscroll_midp_info_pane_t4_ParamLimits

0x9e4d,	// (0x0004dda5) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x00053758) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x00053758) listscroll_midp_info_pane_t

0x0f24,	// (0x00044e7c) scroll_pane_cp21

0x9d5d,	// (0x0004dcb5) form_midp_field_choice_group_pane

0x9d66,	// (0x0004dcbe) form_midp_field_text_pane

0x9da3,	// (0x0004dcfb) form_midp_field_time_pane

0x9dab,	// (0x0004dd03) form_midp_gauge_slider_pane

0x9db4,	// (0x0004dd0c) form_midp_gauge_wait_pane

0x09e0,	// (0x00044938) form_midp_image_pane

0x5c1f,	// (0x00049b77) list_single_midp_pane_ParamLimits

0x5c1f,	// (0x00049b77) list_single_midp_pane

0x9d12,	// (0x0004dc6a) form_midp_field_text_pane_t1

0x9adc,	// (0x0004da34) input_focus_pane_cp050

0x9d4c,	// (0x0004dca4) list_midp_form_text_pane

0x9ce1,	// (0x0004dc39) form_midp_field_choice_group_pane_t1

0x9cef,	// (0x0004dc47) input_focus_pane_cp051

0x9d03,	// (0x0004dc5b) list_midp_choice_pane

0x09e0,	// (0x00044938) status_idle_pane

0x9cc5,	// (0x0004dc1d) form_midp_field_time_pane_t1

0x09d6,	// (0x0004492e) wait_anim_pane_g2_copy1

0x9cd3,	// (0x0004dc2b) form_midp_field_time_pane_t2

0x0001,

0x170e,	// (0x00045666) aid_navinavi_width_2_pane

0xf7fb,	// (0x00053753) form_midp_field_time_pane_t

0x09e0,	// (0x00044938) input_focus_pane_cp052

0x09e0,	// (0x00044938) bg_input_focus_pane_cp040

0x9c85,	// (0x0004dbdd) form_midp_gauge_slider_pane_t1

0x9c93,	// (0x0004dbeb) form_midp_gauge_slider_pane_t2

0x9ca1,	// (0x0004dbf9) form_midp_gauge_slider_pane_t3

0x9caf,	// (0x0004dc07) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x0005374a) form_midp_gauge_slider_pane_t

0x9cbd,	// (0x0004dc15) form_midp_slider_pane

0x0a3c,	// (0x00044994) bg_input_focus_pane_cp041_ParamLimits

0x0a3c,	// (0x00044994) bg_input_focus_pane_cp041

0x9c52,	// (0x0004dbaa) form_midp_gauge_wait_pane_t1_ParamLimits

0x9c52,	// (0x0004dbaa) form_midp_gauge_wait_pane_t1

0x9c64,	// (0x0004dbbc) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c64,	// (0x0004dbbc) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x00053745) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x00053745) form_midp_gauge_wait_pane_t

0x9c76,	// (0x0004dbce) form_midp_wait_pane_ParamLimits

0x9c76,	// (0x0004dbce) form_midp_wait_pane

0x9c1c,	// (0x0004db74) form_midp_image_pane_g1

0x9c25,	// (0x0004db7d) form_midp_image_pane_t1

0x9c34,	// (0x0004db8c) form_midp_image_pane_t2

0x9c43,	// (0x0004db9b) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x0005373e) form_midp_image_pane_t

0x9c13,	// (0x0004db6b) list_single_midp_pane_g1

0x5c10,	// (0x00049b68) list_single_midp_pane_t1

0x9bea,	// (0x0004db42) list_midp_form_item_pane_ParamLimits

0x9bea,	// (0x0004db42) list_midp_form_item_pane

0x16b6,	// (0x0004560e) list_midp_form_item_pane_t1

0x16c5,	// (0x0004561d) midp_ticker_pane_g1

0x16d1,	// (0x00045629) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x00053686) midp_ticker_pane_g

0x16dd,	// (0x00045635) midp_ticker_pane_t1

0xafd0,	// (0x0004ef28) midp_editing_number_pane_t1

0xafae,	// (0x0004ef06) midp_editing_number_pane

0xafbd,	// (0x0004ef15) midp_ticker_pane

0xad73,	// (0x0004eccb) ai_message_heading_pane

0x09e0,	// (0x00044938) bg_popup_window_pane_cp14

0xad7b,	// (0x0004ecd3) listscroll_ai_message_pane

0xacfd,	// (0x0004ec55) ai_message_heading_pane_g1_ParamLimits

0xacfd,	// (0x0004ec55) ai_message_heading_pane_g1

0xad09,	// (0x0004ec61) ai_message_heading_pane_g2_ParamLimits

0xad09,	// (0x0004ec61) ai_message_heading_pane_g2

0xad15,	// (0x0004ec6d) ai_message_heading_pane_g3_ParamLimits

0xad15,	// (0x0004ec6d) ai_message_heading_pane_g3

0xad21,	// (0x0004ec79) ai_message_heading_pane_g4_ParamLimits

0xad21,	// (0x0004ec79) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0005387f) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0005387f) ai_message_heading_pane_g

0xad2d,	// (0x0004ec85) ai_message_heading_pane_t1_ParamLimits

0xad2d,	// (0x0004ec85) ai_message_heading_pane_t1

0xad47,	// (0x0004ec9f) ai_message_heading_pane_t2_ParamLimits

0xad47,	// (0x0004ec9f) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00053888) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00053888) ai_message_heading_pane_t

0xad59,	// (0x0004ecb1) bg_popup_heading_pane_cp1_ParamLimits

0xad59,	// (0x0004ecb1) bg_popup_heading_pane_cp1

0xaceb,	// (0x0004ec43) list_ai_message_pane_ParamLimits

0xaceb,	// (0x0004ec43) list_ai_message_pane

0x0f24,	// (0x00044e7c) scroll_pane_cp10

0xac87,	// (0x0004ebdf) list_ai_message_pane_g1

0xac8f,	// (0x0004ebe7) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0005385c) list_ai_message_pane_g

0xac97,	// (0x0004ebef) list_ai_message_pane_t1_ParamLimits

0xac97,	// (0x0004ebef) list_ai_message_pane_t1

0xacac,	// (0x0004ec04) list_ai_message_pane_t2_ParamLimits

0xacac,	// (0x0004ec04) list_ai_message_pane_t2

0xacc1,	// (0x0004ec19) list_ai_message_pane_t3_ParamLimits

0xacc1,	// (0x0004ec19) list_ai_message_pane_t3

0xacd6,	// (0x0004ec2e) list_ai_message_pane_t4_ParamLimits

0xacd6,	// (0x0004ec2e) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x00053861) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x00053861) list_ai_message_pane_t

0xac72,	// (0x0004ebca) cell_ai_soft_ind_pane_ParamLimits

0xac72,	// (0x0004ebca) cell_ai_soft_ind_pane

0x16ef,	// (0x00045647) cell_ai_soft_ind_pane_g1_ParamLimits

0x16ef,	// (0x00045647) cell_ai_soft_ind_pane_g1

0x09e0,	// (0x00044938) grid_highlight_cp1

0x16fc,	// (0x00045654) text_secondary_cp56_ParamLimits

0x16fc,	// (0x00045654) text_secondary_cp56

0xac47,	// (0x0004eb9f) example_general_pane_ParamLimits

0xac47,	// (0x0004eb9f) example_general_pane

0xac53,	// (0x0004ebab) example_parent_pane_g1_ParamLimits

0xac53,	// (0x0004ebab) example_parent_pane_g1

0xac5f,	// (0x0004ebb7) example_parent_pane_t1_ParamLimits

0xac5f,	// (0x0004ebb7) example_parent_pane_t1

0x7c56,	// (0x0004bbae) popup_preview_text_window_ParamLimits

0x7c56,	// (0x0004bbae) popup_preview_text_window

0x1605,	// (0x0004555d) list_single_pane_cp2_g4

0x0c0e,	// (0x00044b66) bg_popup_preview_window_pane_ParamLimits

0x0c0e,	// (0x00044b66) bg_popup_preview_window_pane

0xa9a1,	// (0x0004e8f9) popup_preview_text_window_t1_ParamLimits

0xa9a1,	// (0x0004e8f9) popup_preview_text_window_t1

0xa9bf,	// (0x0004e917) popup_preview_text_window_t2_ParamLimits

0xa9bf,	// (0x0004e917) popup_preview_text_window_t2

0xaa08,	// (0x0004e960) popup_preview_text_window_t3_ParamLimits

0xaa08,	// (0x0004e960) popup_preview_text_window_t3

0xaa4d,	// (0x0004e9a5) popup_preview_text_window_t4_ParamLimits

0xaa4d,	// (0x0004e9a5) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x00053830) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x00053830) popup_preview_text_window_t

0xaacb,	// (0x0004ea23) scroll_pane_cp11

0x9a50,	// (0x0004d9a8) bg_popup_preview_window_pane_g1

0xa961,	// (0x0004e8b9) bg_popup_preview_window_pane_g2

0xa969,	// (0x0004e8c1) bg_popup_preview_window_pane_g3

0xa971,	// (0x0004e8c9) bg_popup_preview_window_pane_g4

0xa979,	// (0x0004e8d1) bg_popup_preview_window_pane_g5

0xa981,	// (0x0004e8d9) bg_popup_preview_window_pane_g6

0xa989,	// (0x0004e8e1) bg_popup_preview_window_pane_g7

0xa991,	// (0x0004e8e9) bg_popup_preview_window_pane_g8

0x6300,	// (0x0004a258) aid_popup_width_pane

0x7c34,	// (0x0004bb8c) popup_midp_note_alarm_window_ParamLimits

0x7c34,	// (0x0004bb8c) popup_midp_note_alarm_window

0x0de6,	// (0x00044d3e) data_form_pane_ParamLimits

0x58d9,	// (0x00049831) form_field_data_pane_g1

0x58e3,	// (0x0004983b) form_field_data_pane_t1_ParamLimits

0x0df2,	// (0x00044d4a) input_focus_pane_ParamLimits

0x58fb,	// (0x00049853) data_form_wide_pane_ParamLimits

0x590c,	// (0x00049864) form_field_data_wide_pane_g1

0x5918,	// (0x00049870) form_field_data_wide_pane_t1_ParamLimits

0x0ce6,	// (0x00044c3e) input_focus_pane_cp6_ParamLimits

0x6d9c,	// (0x0004acf4) input_popup_find_pane_g1_ParamLimits

0x6d9c,	// (0x0004acf4) input_popup_find_pane_g1

0x6f3c,	// (0x0004ae94) aid_navi_side_left_pane

0x6f51,	// (0x0004aea9) aid_navi_side_right_pane

0xa38a,	// (0x0004e2e2) bg_popup_window_pane_cp30_ParamLimits

0xa38a,	// (0x0004e2e2) bg_popup_window_pane_cp30

0xa404,	// (0x0004e35c) popup_midp_note_alarm_window_g1_ParamLimits

0xa404,	// (0x0004e35c) popup_midp_note_alarm_window_g1

0xa434,	// (0x0004e38c) popup_midp_note_alarm_window_t1_ParamLimits

0xa434,	// (0x0004e38c) popup_midp_note_alarm_window_t1

0xa4d5,	// (0x0004e42d) popup_midp_note_alarm_window_t2_ParamLimits

0xa4d5,	// (0x0004e42d) popup_midp_note_alarm_window_t2

0xa583,	// (0x0004e4db) popup_midp_note_alarm_window_t3_ParamLimits

0xa583,	// (0x0004e4db) popup_midp_note_alarm_window_t3

0xa5ab,	// (0x0004e503) popup_midp_note_alarm_window_t4_ParamLimits

0xa5ab,	// (0x0004e503) popup_midp_note_alarm_window_t4

0xa5cb,	// (0x0004e523) popup_midp_note_alarm_window_t5_ParamLimits

0xa5cb,	// (0x0004e523) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x000537cd) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x000537cd) popup_midp_note_alarm_window_t

0xa677,	// (0x0004e5cf) wait_bar_pane_cp1_ParamLimits

0xa677,	// (0x0004e5cf) wait_bar_pane_cp1

0x09e0,	// (0x00044938) wait_anim_pane_copy1

0x09e0,	// (0x00044938) wait_border_pane_copy1

0xa080,	// (0x0004dfd8) wait_border_pane_g1_copy1

0x5932,	// (0x0004988a) form_field_popup_pane_g1

0x593a,	// (0x00049892) form_field_popup_pane_t1_ParamLimits

0x0df2,	// (0x00044d4a) input_focus_pane_cp7_ParamLimits

0x0e20,	// (0x00044d78) list_form_pane_ParamLimits

0x5952,	// (0x000498aa) form_field_popup_wide_pane_g1

0x595a,	// (0x000498b2) form_field_popup_wide_pane_t1_ParamLimits

0x0df2,	// (0x00044d4a) input_focus_pane_cp8_ParamLimits

0x0e2c,	// (0x00044d84) list_form_wide_pane_ParamLimits

0xb10b,	// (0x0004f063) aid_size_cell_graphic_pane

0x59e4,	// (0x0004993c) data_form_pane_t1_ParamLimits

0x5c5f,	// (0x00049bb7) data_form_wide_pane_t1_ParamLimits

0x7f3b,	// (0x0004be93) bg_status_flat_pane

0x66ff,	// (0x0004a657) title_pane_t1_ParamLimits

0x09f6,	// (0x0004494e) title_pane_t2_ParamLimits

0x0a1c,	// (0x00044974) title_pane_t3_ParamLimits

0xf532,	// (0x0005348a) title_pane_t_ParamLimits

0x11d9,	// (0x00045131) level_1_signal_ParamLimits

0x11e6,	// (0x0004513e) level_2_signal_ParamLimits

0x11f3,	// (0x0004514b) level_3_signal_ParamLimits

0x1200,	// (0x00045158) level_4_signal_ParamLimits

0x120d,	// (0x00045165) level_5_signal_ParamLimits

0x121a,	// (0x00045172) level_6_signal_ParamLimits

0x1227,	// (0x0004517f) level_7_signal_ParamLimits

0x11d9,	// (0x00045131) level_1_battery_ParamLimits

0x11e6,	// (0x0004513e) level_2_battery_ParamLimits

0x11f3,	// (0x0004514b) level_3_battery_ParamLimits

0x1200,	// (0x00045158) level_4_battery_ParamLimits

0x120d,	// (0x00045165) level_5_battery_ParamLimits

0x121a,	// (0x00045172) level_6_battery_ParamLimits

0x1227,	// (0x0004517f) level_7_battery_ParamLimits

0xa28f,	// (0x0004e1e7) bg_status_flat_pane_g1

0xa297,	// (0x0004e1ef) bg_status_flat_pane_g2

0xa29f,	// (0x0004e1f7) bg_status_flat_pane_g3

0xa2a7,	// (0x0004e1ff) bg_status_flat_pane_g4

0xa2af,	// (0x0004e207) bg_status_flat_pane_g5

0xa2b7,	// (0x0004e20f) bg_status_flat_pane_g6

0xa2bf,	// (0x0004e217) bg_status_flat_pane_g7

0x676f,	// (0x0004a6c7) tabs_3_active_pane_t1_ParamLimits

0x676f,	// (0x0004a6c7) tabs_3_passive_pane_t1_ParamLimits

0x6789,	// (0x0004a6e1) tabs_4_active_pane_t1_ParamLimits

0x6789,	// (0x0004a6e1) tabs_4_1_passive_pane_t1_ParamLimits

0x6dd3,	// (0x0004ad2b) tabs_2_active_pane_t1_ParamLimits

0x6dd3,	// (0x0004ad2b) tabs_2_passive_pane_t1_ParamLimits

0x6de5,	// (0x0004ad3d) bg_active_tab_pane_cp4_ParamLimits

0x6df3,	// (0x0004ad4b) tabs_2_long_active_pane_t1_ParamLimits

0x6e06,	// (0x0004ad5e) bg_passive_tab_pane_cp4_ParamLimits

0x8228,	// (0x0004c180) list_single_midp_graphic_pane_t1_ParamLimits

0x6de5,	// (0x0004ad3d) bg_active_tab_pane_cp5_ParamLimits

0x6e12,	// (0x0004ad6a) tabs_3_long_active_pane_t1_ParamLimits

0x6e06,	// (0x0004ad5e) bg_passive_tab_pane_cp5_ParamLimits

0x8228,	// (0x0004c180) list_single_midp_graphic_pane_t1

0x7f3b,	// (0x0004be93) bg_status_flat_pane_ParamLimits

0x8004,	// (0x0004bf5c) indicator_pane_cp2_ParamLimits

0x8004,	// (0x0004bf5c) indicator_pane_cp2

0x812f,	// (0x0004c087) navi_pane_srt_ParamLimits

0x812f,	// (0x0004c087) navi_pane_srt

0x8153,	// (0x0004c0ab) popup_clock_digital_analogue_window_cp1

0x0a80,	// (0x000449d8) indicator_pane_t1

0x16ae,	// (0x00045606) copy_highlight_pane

0x16ae,	// (0x00045606) cursor_graphics_pane

0x16ae,	// (0x00045606) graphic_within_text_pane

0x16ae,	// (0x00045606) link_highlight_pane

0xaa8e,	// (0x0004e9e6) popup_preview_text_window_t5_ParamLimits

0xaa8e,	// (0x0004e9e6) popup_preview_text_window_t5

0x1716,	// (0x0004566e) cursor_digital_pane

0x1716,	// (0x0004566e) cursor_primary_pane

0x1727,	// (0x0004567f) cursor_primary_small_pane

0x172f,	// (0x00045687) cursor_secondary_pane

0x1737,	// (0x0004568f) cursor_title_pane

0x1716,	// (0x0004566e) link_highlight_digital_pane

0x171e,	// (0x00045676) link_highlight_primary_pane

0x1727,	// (0x0004567f) link_highlight_primary_small_pane

0x172f,	// (0x00045687) link_highlight_secondary_pane

0x1737,	// (0x0004568f) link_highlight_title_pane

0x1716,	// (0x0004566e) copy_highlight_digital_pane

0x1716,	// (0x0004566e) copy_highlight_primary_pane

0x1727,	// (0x0004567f) copy_highlight_primary_small_pane

0x172f,	// (0x00045687) copy_highlight_secondary_pane

0x1737,	// (0x0004568f) copy_highlight_title_pane

0x172f,	// (0x00045687) graphic_text_digital_pane

0xa32d,	// (0x0004e285) graphic_text_primary_pane

0xa336,	// (0x0004e28e) graphic_text_primary_small_pane

0x1727,	// (0x0004567f) graphic_text_secondary_pane

0x1716,	// (0x0004566e) graphic_text_title_pane

0x75da,	// (0x0004b532) cursor_primary_pane_g1

0xa31f,	// (0x0004e277) cursor_text_primary_t1

0xa307,	// (0x0004e25f) cursor_primary_small_pane_g1

0xa311,	// (0x0004e269) cursor_text_primary_small_t1

0xa2ef,	// (0x0004e247) cursor_primary_small_pane_g1_copy1

0xa2f9,	// (0x0004e251) cursor_text_primary_small_t1_copy1

0xa2d7,	// (0x0004e22f) cursor_text_title_t1

0xa2e5,	// (0x0004e23d) cursor_title_pane_g1

0x75da,	// (0x0004b532) cursor_digital_pane_g1

0x173f,	// (0x00045697) cursor_text_digital_t1

0x174d,	// (0x000456a5) link_highlight_primary_pane_g1

0xa280,	// (0x0004e1d8) link_highlight_primary_pane_t1

0x174d,	// (0x000456a5) link_highlight_primary_small_pane_g1

0x1755,	// (0x000456ad) link_highlight_primary_small_pane_t1

0x174d,	// (0x000456a5) link_highlight_secondary_pane_g1

0x1764,	// (0x000456bc) link_highlight_secondary_pane_t1

0xa1e5,	// (0x0004e13d) link_highlight_title_pane_g1

0xa1fc,	// (0x0004e154) link_highlight_title_pane_t1

0xa1e5,	// (0x0004e13d) link_highlight_digital_pane_g1

0xa1ed,	// (0x0004e145) link_highlight_digital_pane_t1

0xa09f,	// (0x0004dff7) copy_highlight_primary_pane_g1

0xa0c5,	// (0x0004e01d) copy_highlight_primary_pane_t1

0xa09f,	// (0x0004dff7) copy_highlight_primary_small_pane_g1

0xa0b6,	// (0x0004e00e) copy_highlight_primary_small_pane_t1

0x1773,	// (0x000456cb) copy_highlight_secondary_pane_g1

0x177b,	// (0x000456d3) copy_highlight_secondary_pane_t1

0xa09f,	// (0x0004dff7) copy_highlight_title_pane_g1

0xa0a7,	// (0x0004dfff) copy_highlight_title_pane_t1

0xa09f,	// (0x0004dff7) copy_highlight_digital_pane_g1

0xb2d9,	// (0x0004f231) copy_highlight_digital_pane_t1

0xb22d,	// (0x0004f185) graphic_text_primary_pane_g1

0xb2bd,	// (0x0004f215) graphic_text_primary_pane_t1

0xb2cb,	// (0x0004f223) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x000538fc) graphic_text_primary_pane_t

0xb299,	// (0x0004f1f1) graphic_text_primary_small_pane_g1

0xb2a1,	// (0x0004f1f9) graphic_text_primary_small_pane_t1

0xb2af,	// (0x0004f207) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x000538f7) graphic_text_primary_small_pane_t

0xb275,	// (0x0004f1cd) graphic_text_secondary_pane_g1

0xb27d,	// (0x0004f1d5) graphic_text_secondary_pane_t1

0xb28b,	// (0x0004f1e3) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x000538f2) graphic_text_secondary_pane_t

0xb251,	// (0x0004f1a9) graphic_text_title_pane_g1

0xb259,	// (0x0004f1b1) graphic_text_title_pane_t1

0xb267,	// (0x0004f1bf) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x000538ed) graphic_text_title_pane_t

0xb22d,	// (0x0004f185) graphic_text_digital_pane_g1

0xb235,	// (0x0004f18d) graphic_text_digital_pane_t1

0xb243,	// (0x0004f19b) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x000538e8) graphic_text_digital_pane_t

0x0a3c,	// (0x00044994) navi_icon_pane_srt_ParamLimits

0x0a3c,	// (0x00044994) navi_icon_pane_srt

0x09e0,	// (0x00044938) navi_midp_pane_srt

0x09e0,	// (0x00044938) navi_navi_pane_srt

0x0a3c,	// (0x00044994) navi_text_pane_srt_ParamLimits

0x0a3c,	// (0x00044994) navi_text_pane_srt

0xb1f8,	// (0x0004f150) navi_navi_icon_text_pane_srt

0xb200,	// (0x0004f158) navi_navi_pane_srt_g1_ParamLimits

0xb200,	// (0x0004f158) navi_navi_pane_srt_g1

0xb212,	// (0x0004f16a) navi_navi_pane_srt_g2_ParamLimits

0xb212,	// (0x0004f16a) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x000538e3) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x000538e3) navi_navi_pane_srt_g

0xb224,	// (0x0004f17c) navi_navi_tabs_pane_srt

0xb1f8,	// (0x0004f150) navi_navi_text_pane_srt

0xb1f8,	// (0x0004f150) navi_navi_volume_pane_srt

0xb1e9,	// (0x0004f141) navi_navi_text_pane_srt_t1

0x8653,	// (0x0004c5ab) navi_navi_volume_pane_srt_g1

0x865b,	// (0x0004c5b3) volume_small_pane_srt_ParamLimits

0x865b,	// (0x0004c5b3) volume_small_pane_srt

0x75e4,	// (0x0004b53c) volume_small_pane_srt_g1_ParamLimits

0x75e4,	// (0x0004b53c) volume_small_pane_srt_g1

0x75f4,	// (0x0004b54c) volume_small_pane_srt_g2_ParamLimits

0x75f4,	// (0x0004b54c) volume_small_pane_srt_g2

0x7605,	// (0x0004b55d) volume_small_pane_srt_g3_ParamLimits

0x7605,	// (0x0004b55d) volume_small_pane_srt_g3

0x7616,	// (0x0004b56e) volume_small_pane_srt_g4_ParamLimits

0x7616,	// (0x0004b56e) volume_small_pane_srt_g4

0x7627,	// (0x0004b57f) volume_small_pane_srt_g5_ParamLimits

0x7627,	// (0x0004b57f) volume_small_pane_srt_g5

0x7638,	// (0x0004b590) volume_small_pane_srt_g6_ParamLimits

0x7638,	// (0x0004b590) volume_small_pane_srt_g6

0x7649,	// (0x0004b5a1) volume_small_pane_srt_g7_ParamLimits

0x7649,	// (0x0004b5a1) volume_small_pane_srt_g7

0x765a,	// (0x0004b5b2) volume_small_pane_srt_g8_ParamLimits

0x765a,	// (0x0004b5b2) volume_small_pane_srt_g8

0x766b,	// (0x0004b5c3) volume_small_pane_srt_g9_ParamLimits

0x766b,	// (0x0004b5c3) volume_small_pane_srt_g9

0x767c,	// (0x0004b5d4) volume_small_pane_srt_g10_ParamLimits

0x767c,	// (0x0004b5d4) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0005368b) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0005368b) volume_small_pane_srt_g

0x69d6,	// (0x0004a92e) query_popup_data_pane_cp2

0xb1cf,	// (0x0004f127) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1cf,	// (0x0004f127) navi_navi_icon_text_pane_srt_t1

0xa32d,	// (0x0004e285) navi_tabs_2_long_pane_srt

0xa32d,	// (0x0004e285) navi_tabs_2_pane_srt

0xa32d,	// (0x0004e285) navi_tabs_3_long_pane_srt

0xa32d,	// (0x0004e285) navi_tabs_3_pane_srt

0xa32d,	// (0x0004e285) navi_tabs_4_pane_srt

0x8633,	// (0x0004c58b) tabs_2_active_pane_srt_ParamLimits

0x8633,	// (0x0004c58b) tabs_2_active_pane_srt

0x8643,	// (0x0004c59b) tabs_2_passive_pane_srt_ParamLimits

0x8643,	// (0x0004c59b) tabs_2_passive_pane_srt

0x0f34,	// (0x00044e8c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0f34,	// (0x00044e8c) bg_passive_tab_pane_cp1_srt

0xb19b,	// (0x0004f0f3) bg_passive_tab_pane_g1_cp1_srt

0x72e3,	// (0x0004b23b) bg_passive_tab_pane_g2_cp1_srt

0xb1a4,	// (0x0004f0fc) bg_passive_tab_pane_g3_cp1_srt

0x0a3c,	// (0x00044994) bg_active_tab_pane_cp1_srt_ParamLimits

0x0a3c,	// (0x00044994) bg_active_tab_pane_cp1_srt

0xb1ad,	// (0x0004f105) tabs_2_active_pane_srt_g1

0xb1b5,	// (0x0004f10d) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b5,	// (0x0004f10d) tabs_2_active_pane_srt_t1

0xb19b,	// (0x0004f0f3) bg_active_tab_pane_g1_cp1_srt

0x72e3,	// (0x0004b23b) bg_active_tab_pane_g2_cp1_srt

0xb1a4,	// (0x0004f0fc) bg_active_tab_pane_g3_cp1_srt

0x8600,	// (0x0004c558) tabs_3_active_pane_srt_ParamLimits

0x8600,	// (0x0004c558) tabs_3_active_pane_srt

0x8611,	// (0x0004c569) tabs_3_passive_pane_cp_srt_ParamLimits

0x8611,	// (0x0004c569) tabs_3_passive_pane_cp_srt

0x8622,	// (0x0004c57a) tabs_3_passive_pane_srt_ParamLimits

0x8622,	// (0x0004c57a) tabs_3_passive_pane_srt

0x0f34,	// (0x00044e8c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0f34,	// (0x00044e8c) bg_passive_tab_pane_cp2_srt

0x768d,	// (0x0004b5e5) bg_passive_tab_pane_g1_cp2_srt

0x72e3,	// (0x0004b23b) bg_passive_tab_pane_g2_cp2_srt

0x7696,	// (0x0004b5ee) bg_passive_tab_pane_g3_cp2_srt

0x0a3c,	// (0x00044994) bg_active_tab_pane_cp2_srt_ParamLimits

0x0a3c,	// (0x00044994) bg_active_tab_pane_cp2_srt

0xb181,	// (0x0004f0d9) tabs_3_active_pane_srt_g1

0xb189,	// (0x0004f0e1) tabs_3_active_pane_srt_t1_ParamLimits

0xb189,	// (0x0004f0e1) tabs_3_active_pane_srt_t1

0x768d,	// (0x0004b5e5) bg_active_tab_pane_g1_cp2_srt

0x72e3,	// (0x0004b23b) bg_active_tab_pane_g2_cp2_srt

0x7696,	// (0x0004b5ee) bg_active_tab_pane_g3_cp2_srt

0x85b8,	// (0x0004c510) tabs_4_active_pane_srt_ParamLimits

0x85b8,	// (0x0004c510) tabs_4_active_pane_srt

0x85ca,	// (0x0004c522) tabs_4_passive_pane_cp2_srt_ParamLimits

0x85ca,	// (0x0004c522) tabs_4_passive_pane_cp2_srt

0x78af,	// (0x0004b807) aid_size_cell_toolbar

0x6e06,	// (0x0004ad5e) main_idle_act_pane_ParamLimits

0x7a66,	// (0x0004b9be) popup_large_graphic_colour_window_ParamLimits

0x7dd1,	// (0x0004bd29) popup_toolbar_window_ParamLimits

0x7dd1,	// (0x0004bd29) popup_toolbar_window

0xafdf,	// (0x0004ef37) list_single_graphic_2heading_pane_ParamLimits

0xafdf,	// (0x0004ef37) list_single_graphic_2heading_pane

0x10c1,	// (0x00045019) aid_size_cell_apps_grid_lsc_pane

0x10d3,	// (0x0004502b) aid_size_cell_apps_grid_prt_pane

0x0f34,	// (0x00044e8c) bg_wml_button_pane_cp1_ParamLimits

0x0f34,	// (0x00044e8c) bg_wml_button_pane_cp1

0x9d12,	// (0x0004dc6a) form_midp_field_text_pane_t1_ParamLimits

0x9adc,	// (0x0004da34) input_focus_pane_cp050_ParamLimits

0x9d4c,	// (0x0004dca4) list_midp_form_text_pane_ParamLimits

0x9cef,	// (0x0004dc47) input_focus_pane_cp051_ParamLimits

0x9d03,	// (0x0004dc5b) list_midp_choice_pane_ParamLimits

0x9b92,	// (0x0004daea) list_single_2graphic_pane_cp3_ParamLimits

0x9b92,	// (0x0004daea) list_single_2graphic_pane_cp3

0x9bb7,	// (0x0004db0f) list_single_midp_graphic_pane_ParamLimits

0x9bb7,	// (0x0004db0f) list_single_midp_graphic_pane

0x5af2,	// (0x00049a4a) list_single_graphic_2heading_pane_g1_ParamLimits

0x5af2,	// (0x00049a4a) list_single_graphic_2heading_pane_g1

0x5afe,	// (0x00049a56) list_single_graphic_2heading_pane_g4_ParamLimits

0x5afe,	// (0x00049a56) list_single_graphic_2heading_pane_g4

0x5b0a,	// (0x00049a62) list_single_graphic_2heading_pane_g5_ParamLimits

0x5b0a,	// (0x00049a62) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x000536de) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x000536de) list_single_graphic_2heading_pane_g

0x5b16,	// (0x00049a6e) list_single_graphic_2heading_pane_t1_ParamLimits

0x5b16,	// (0x00049a6e) list_single_graphic_2heading_pane_t1

0x5b2a,	// (0x00049a82) list_single_graphic_2heading_pane_t2_ParamLimits

0x5b2a,	// (0x00049a82) list_single_graphic_2heading_pane_t2

0x5b44,	// (0x00049a9c) list_single_graphic_2heading_pane_t3_ParamLimits

0x5b44,	// (0x00049a9c) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x000536e5) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x000536e5) list_single_graphic_2heading_pane_t

0x998e,	// (0x0004d8e6) bg_popup_sub_pane_cp2

0x99b8,	// (0x0004d910) grid_toobar_pane

0x819f,	// (0x0004c0f7) cell_toolbar_pane_ParamLimits

0x819f,	// (0x0004c0f7) cell_toolbar_pane

0x99f4,	// (0x0004d94c) cell_toolbar_pane_g1_ParamLimits

0x99f4,	// (0x0004d94c) cell_toolbar_pane_g1

0x9a08,	// (0x0004d960) cell_toolbar_pane_g2_ParamLimits

0x9a08,	// (0x0004d960) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x000536f3) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x000536f3) cell_toolbar_pane_g

0x9a2a,	// (0x0004d982) grid_highlight_pane_cp2_ParamLimits

0x9a2a,	// (0x0004d982) grid_highlight_pane_cp2

0x9a44,	// (0x0004d99c) toolbar_button_pane

0x9a50,	// (0x0004d9a8) toolbar_button_pane_g1

0x9a58,	// (0x0004d9b0) toolbar_button_pane_g2

0x9a60,	// (0x0004d9b8) toolbar_button_pane_g3

0x9a68,	// (0x0004d9c0) toolbar_button_pane_g4

0x9a70,	// (0x0004d9c8) toolbar_button_pane_g5

0x9a78,	// (0x0004d9d0) toolbar_button_pane_g6

0x9a80,	// (0x0004d9d8) toolbar_button_pane_g7

0x9a88,	// (0x0004d9e0) toolbar_button_pane_g8

0x9a90,	// (0x0004d9e8) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x000536f8) toolbar_button_pane_g

0x81e3,	// (0x0004c13b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x81e3,	// (0x0004c13b) list_single_2graphic_pane_g1_cp3

0x81ef,	// (0x0004c147) list_single_2graphic_pane_g2_cp3_ParamLimits

0x81ef,	// (0x0004c147) list_single_2graphic_pane_g2_cp3

0x1503,	// (0x0004545b) list_single_2graphic_pane_g3_cp3

0x8200,	// (0x0004c158) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8200,	// (0x0004c158) list_single_2graphic_pane_g4_cp3

0x820c,	// (0x0004c164) list_single_2graphic_pane_t1_cp3_ParamLimits

0x820c,	// (0x0004c164) list_single_2graphic_pane_t1_cp3

0x14f7,	// (0x0004544f) list_single_midp_graphic_pane_g2_ParamLimits

0x14f7,	// (0x0004544f) list_single_midp_graphic_pane_g2

0x5ae2,	// (0x00049a3a) aid_zoom_text_primary

0x78b7,	// (0x0004b80f) aid_zoom_text_secondary

0x17f0,	// (0x00045748) status_small_pane_g7_ParamLimits

0x17f0,	// (0x00045748) status_small_pane_g7

0x76f0,	// (0x0004b648) status_small_pane_t1_ParamLimits

0x66e2,	// (0x0004a63a) title_pane_g2

0x0003,

0xf529,	// (0x00053481) title_pane_g

0x6a30,	// (0x0004a988) aid_size_cell_colour_1_pane_ParamLimits

0x6a30,	// (0x0004a988) aid_size_cell_colour_1_pane

0x6a44,	// (0x0004a99c) aid_size_cell_colour_2_pane_ParamLimits

0x6a44,	// (0x0004a99c) aid_size_cell_colour_2_pane

0x6a58,	// (0x0004a9b0) aid_size_cell_colour_3_pane_ParamLimits

0x6a58,	// (0x0004a9b0) aid_size_cell_colour_3_pane

0x6a6c,	// (0x0004a9c4) aid_size_cell_colour_4_pane_ParamLimits

0x6a6c,	// (0x0004a9c4) aid_size_cell_colour_4_pane

0x6e79,	// (0x0004add1) title_pane_stacon_g1_ParamLimits

0x6e79,	// (0x0004add1) title_pane_stacon_g1

0xa11c,	// (0x0004e074) popup_note_wait_window_g3_ParamLimits

0xa11c,	// (0x0004e074) popup_note_wait_window_g3

0xa192,	// (0x0004e0ea) popup_note_wait_window_t5_ParamLimits

0xa192,	// (0x0004e0ea) popup_note_wait_window_t5

0x09e0,	// (0x00044938) main_feb_china_hwr_fs_writing_pane

0x794d,	// (0x0004b8a5) popup_feb_china_hwr_fs_window_ParamLimits

0x794d,	// (0x0004b8a5) popup_feb_china_hwr_fs_window

0x823e,	// (0x0004c196) aid_size_cell_hwr_fs_ParamLimits

0x823e,	// (0x0004c196) aid_size_cell_hwr_fs

0x9adc,	// (0x0004da34) bg_popup_sub_pane_cp3_ParamLimits

0x9adc,	// (0x0004da34) bg_popup_sub_pane_cp3

0x8253,	// (0x0004c1ab) grid_hwr_fs_pane_ParamLimits

0x8253,	// (0x0004c1ab) grid_hwr_fs_pane

0x826b,	// (0x0004c1c3) linegrid_hwr_fs_pane_ParamLimits

0x826b,	// (0x0004c1c3) linegrid_hwr_fs_pane

0x827b,	// (0x0004c1d3) cell_hwr_fs_pane_ParamLimits

0x827b,	// (0x0004c1d3) cell_hwr_fs_pane

0x9ae8,	// (0x0004da40) linegrid_hwr_fs_pane_g1_ParamLimits

0x9ae8,	// (0x0004da40) linegrid_hwr_fs_pane_g1

0x9af4,	// (0x0004da4c) linegrid_hwr_fs_pane_g2_ParamLimits

0x9af4,	// (0x0004da4c) linegrid_hwr_fs_pane_g2

0x9b06,	// (0x0004da5e) linegrid_hwr_fs_pane_g3_ParamLimits

0x9b06,	// (0x0004da5e) linegrid_hwr_fs_pane_g3

0x829d,	// (0x0004c1f5) linegrid_hwr_fs_pane_g4_ParamLimits

0x829d,	// (0x0004c1f5) linegrid_hwr_fs_pane_g4

0x82b7,	// (0x0004c20f) linegrid_hwr_fs_pane_g5_ParamLimits

0x82b7,	// (0x0004c20f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x00053723) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x00053723) linegrid_hwr_fs_pane_g

0x9b12,	// (0x0004da6a) cell_hwr_fs_pane_g1_ParamLimits

0x9b12,	// (0x0004da6a) cell_hwr_fs_pane_g1

0x98c8,	// (0x0004d820) cell_hwr_fs_pane_g2_ParamLimits

0x98c8,	// (0x0004d820) cell_hwr_fs_pane_g2

0x9b28,	// (0x0004da80) cell_hwr_fs_pane_g3_ParamLimits

0x9b28,	// (0x0004da80) cell_hwr_fs_pane_g3

0x9b35,	// (0x0004da8d) cell_hwr_fs_pane_g4_ParamLimits

0x9b35,	// (0x0004da8d) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x0005372e) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x0005372e) cell_hwr_fs_pane_g

0x82cd,	// (0x0004c225) cell_hwr_fs_pane_t1

0x09e0,	// (0x00044938) grid_highlight_pane_cp6

0x09e0,	// (0x00044938) main_idle_act2_pane

0x0f0b,	// (0x00044e63) aid_inside_area_popup_secondary

0xa7b1,	// (0x0004e709) aid_inside_area_window_primary_ParamLimits

0xa7b1,	// (0x0004e709) aid_inside_area_window_primary

0xb2e8,	// (0x0004f240) ai2_news_ticker_pane

0xb2f0,	// (0x0004f248) aid_size_cell_ai1_link_ParamLimits

0xb2f0,	// (0x0004f248) aid_size_cell_ai1_link

0xb30a,	// (0x0004f262) popup_ai2_data_window_ParamLimits

0xb30a,	// (0x0004f262) popup_ai2_data_window

0xb320,	// (0x0004f278) popup_ai2_link_window_ParamLimits

0xb320,	// (0x0004f278) popup_ai2_link_window

0x9adc,	// (0x0004da34) bg_popup_sub_pane_cp4_ParamLimits

0x9adc,	// (0x0004da34) bg_popup_sub_pane_cp4

0xb334,	// (0x0004f28c) grid_ai2_link_pane_ParamLimits

0xb334,	// (0x0004f28c) grid_ai2_link_pane

0xb34b,	// (0x0004f2a3) popup_ai2_link_window_g1_ParamLimits

0xb34b,	// (0x0004f2a3) popup_ai2_link_window_g1

0xb357,	// (0x0004f2af) popup_ai2_link_window_g2_ParamLimits

0xb357,	// (0x0004f2af) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00053901) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00053901) popup_ai2_link_window_g

0xb366,	// (0x0004f2be) ai2_mp_button_pane

0xb36e,	// (0x0004f2c6) ai2_mp_volume_pane

0x9cef,	// (0x0004dc47) bg_popup_sub_pane_cp5_ParamLimits

0x9cef,	// (0x0004dc47) bg_popup_sub_pane_cp5

0xb376,	// (0x0004f2ce) heading_ai2_gene_pane_ParamLimits

0xb376,	// (0x0004f2ce) heading_ai2_gene_pane

0xb382,	// (0x0004f2da) list_ai2_gene_pane_ParamLimits

0xb382,	// (0x0004f2da) list_ai2_gene_pane

0xb3ca,	// (0x0004f322) cell_ai2_link_pane_ParamLimits

0xb3ca,	// (0x0004f322) cell_ai2_link_pane

0xb3e0,	// (0x0004f338) cell_ai2_link_pane_g1

0x09e0,	// (0x00044938) grid_highlight_pane_cp7

0x8670,	// (0x0004c5c8) ai2_mp_volume_pane_g1

0xb4b0,	// (0x0004f408) ai2_mp_volume_pane_g2

0xb425,	// (0x0004f37d) list_ai2_gene_pane_t1

0xb4b8,	// (0x0004f410) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x0005391a) ai2_mp_volume_pane_g

0x8678,	// (0x0004c5d0) volume_small_pane_cp3

0xb4c0,	// (0x0004f418) aid_size_cell_ai2_button

0xb4c8,	// (0x0004f420) grid_ai2_button_pane

0xb4d1,	// (0x0004f429) cell_ai2_button_pane_ParamLimits

0xb4d1,	// (0x0004f429) cell_ai2_button_pane

0x09d6,	// (0x0004492e) cell_ai2_button_pane_g1

0x09e0,	// (0x00044938) grid_highlight_pane_cp8

0xb470,	// (0x0004f3c8) ai2_gene_pane_t1_ParamLimits

0xb470,	// (0x0004f3c8) ai2_gene_pane_t1

0x78a5,	// (0x0004b7fd) aid_height_parent_landscape

0xae1a,	// (0x0004ed72) aid_height_set_list

0xae2b,	// (0x0004ed83) aid_size_parent

0xb10b,	// (0x0004f063) aid_size_cell_graphic_pane_ParamLimits

0xb392,	// (0x0004f2ea) popup_ai2_data_window_g1_ParamLimits

0xb392,	// (0x0004f2ea) popup_ai2_data_window_g1

0xb39e,	// (0x0004f2f6) ai2_news_ticker_pane_g1

0xb3a6,	// (0x0004f2fe) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00053906) ai2_news_ticker_pane_g

0xb3ae,	// (0x0004f306) ai2_news_ticker_pane_t1

0xb3bc,	// (0x0004f314) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x0005390b) ai2_news_ticker_pane_t

0xb3e9,	// (0x0004f341) heading_ai2_gene_pane_g1

0xb3f1,	// (0x0004f349) heading_ai2_gene_pane_t1_ParamLimits

0xb3f1,	// (0x0004f349) heading_ai2_gene_pane_t1

0xb406,	// (0x0004f35e) list_highlight_pane_cp6

0xb40e,	// (0x0004f366) ai2_gene_pane_ParamLimits

0xb40e,	// (0x0004f366) ai2_gene_pane

0xb433,	// (0x0004f38b) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x00053910) list_ai2_gene_pane_t

0xb441,	// (0x0004f399) list_highlight_pane_cp8_ParamLimits

0xb441,	// (0x0004f399) list_highlight_pane_cp8

0xb452,	// (0x0004f3aa) ai2_gene_pane_g1_ParamLimits

0xb452,	// (0x0004f3aa) ai2_gene_pane_g1

0xb464,	// (0x0004f3bc) ai2_gene_pane_g2_ParamLimits

0xb464,	// (0x0004f3bc) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x00053915) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x00053915) ai2_gene_pane_g

0x0d91,	// (0x00044ce9) scroll_pane_cp12

0x7862,	// (0x0004b7ba) control_pane_t3_ParamLimits

0x7862,	// (0x0004b7ba) control_pane_t3

0x76e1,	// (0x0004b639) status_small_pane_g8_ParamLimits

0x76e1,	// (0x0004b639) status_small_pane_g8

0x7a2f,	// (0x0004b987) popup_find_window_ParamLimits

0x7c48,	// (0x0004bba0) popup_note_image_window_ParamLimits

0x5b5c,	// (0x00049ab4) list_double2_graphic_pane_vc_g1_ParamLimits

0x5b5c,	// (0x00049ab4) list_double2_graphic_pane_vc_g1

0x160d,	// (0x00045565) list_double2_graphic_pane_vc_g2_ParamLimits

0x160d,	// (0x00045565) list_double2_graphic_pane_vc_g2

0x81cf,	// (0x0004c127) list_double2_graphic_pane_vc_g3_ParamLimits

0x81cf,	// (0x0004c127) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x000536ec) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x000536ec) list_double2_graphic_pane_vc_g

0x5b68,	// (0x00049ac0) list_double2_graphic_pane_vc_t1_ParamLimits

0x5b68,	// (0x00049ac0) list_double2_graphic_pane_vc_t1

0x160d,	// (0x00045565) list_single_heading_pane_vc_g1_ParamLimits

0x160d,	// (0x00045565) list_single_heading_pane_vc_g1

0x81cf,	// (0x0004c127) list_single_heading_pane_vc_g2_ParamLimits

0x81cf,	// (0x0004c127) list_single_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x0005370d) list_single_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x0005370d) list_single_heading_pane_vc_g

0x5b7e,	// (0x00049ad6) list_single_heading_pane_vc_t1_ParamLimits

0x5b7e,	// (0x00049ad6) list_single_heading_pane_vc_t1

0x5b94,	// (0x00049aec) list_single_heading_pane_vc_t2_ParamLimits

0x5b94,	// (0x00049aec) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x00053712) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x00053712) list_single_heading_pane_vc_t

0x9a98,	// (0x0004d9f0) list_setting_number_pane_vc_g1_ParamLimits

0x9a98,	// (0x0004d9f0) list_setting_number_pane_vc_g1

0x9aa4,	// (0x0004d9fc) list_setting_number_pane_vc_g2_ParamLimits

0x9aa4,	// (0x0004d9fc) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00053717) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00053717) list_setting_number_pane_vc_g

0x5ba6,	// (0x00049afe) list_setting_number_pane_vc_t1_ParamLimits

0x5ba6,	// (0x00049afe) list_setting_number_pane_vc_t1

0x5bba,	// (0x00049b12) list_setting_number_pane_vc_t2_ParamLimits

0x5bba,	// (0x00049b12) list_setting_number_pane_vc_t2

0x5bd6,	// (0x00049b2e) list_setting_number_pane_vc_t3_ParamLimits

0x5bd6,	// (0x00049b2e) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x0005371c) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x0005371c) list_setting_number_pane_vc_t

0x5c00,	// (0x00049b58) set_value_pane_vc_ParamLimits

0x5c00,	// (0x00049b58) set_value_pane_vc

0xafdf,	// (0x0004ef37) list_double2_graphic_pane_vc_ParamLimits

0xafdf,	// (0x0004ef37) list_double2_graphic_pane_vc

0x8529,	// (0x0004c481) list_double2_large_graphic_pane_vc_ParamLimits

0x8529,	// (0x0004c481) list_double2_large_graphic_pane_vc

0xafdf,	// (0x0004ef37) list_double2_pane_vc_ParamLimits

0xafdf,	// (0x0004ef37) list_double2_pane_vc

0xafdf,	// (0x0004ef37) list_double_graphic_heading_pane_vc_ParamLimits

0xafdf,	// (0x0004ef37) list_double_graphic_heading_pane_vc

0xafdf,	// (0x0004ef37) list_double_graphic_pane_vc_ParamLimits

0xafdf,	// (0x0004ef37) list_double_graphic_pane_vc

0xafdf,	// (0x0004ef37) list_double_heading_pane_vc_ParamLimits

0xafdf,	// (0x0004ef37) list_double_heading_pane_vc

0x853b,	// (0x0004c493) list_double_large_graphic_pane_vc_ParamLimits

0x853b,	// (0x0004c493) list_double_large_graphic_pane_vc

0xafdf,	// (0x0004ef37) list_double_number_pane_vc_ParamLimits

0xafdf,	// (0x0004ef37) list_double_number_pane_vc

0xafdf,	// (0x0004ef37) list_double_pane_vc_ParamLimits

0xafdf,	// (0x0004ef37) list_double_pane_vc

0xafdf,	// (0x0004ef37) list_double_time_pane_vc_ParamLimits

0xafdf,	// (0x0004ef37) list_double_time_pane_vc

0xafdf,	// (0x0004ef37) list_setting_number_pane_vc_ParamLimits

0xafdf,	// (0x0004ef37) list_setting_number_pane_vc

0xafdf,	// (0x0004ef37) list_setting_pane_vc_ParamLimits

0xafdf,	// (0x0004ef37) list_setting_pane_vc

0xafdf,	// (0x0004ef37) list_single_graphic_heading_pane_vc_ParamLimits

0xafdf,	// (0x0004ef37) list_single_graphic_heading_pane_vc

0xafdf,	// (0x0004ef37) list_single_heading_pane_vc_ParamLimits

0xafdf,	// (0x0004ef37) list_single_heading_pane_vc

0x8559,	// (0x0004c4b1) list_single_number_heading_pane_vc_ParamLimits

0x8559,	// (0x0004c4b1) list_single_number_heading_pane_vc

0x5d1b,	// (0x00049c73) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5d1b,	// (0x00049c73) list_double_graphic_heading_pane_vc_g1

0x160d,	// (0x00045565) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x160d,	// (0x00045565) list_double_graphic_heading_pane_vc_g2

0x81cf,	// (0x0004c127) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x81cf,	// (0x0004c127) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x00053921) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x00053921) list_double_graphic_heading_pane_vc_g

0x5d27,	// (0x00049c7f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5d27,	// (0x00049c7f) list_double_graphic_heading_pane_vc_t1

0x5d3b,	// (0x00049c93) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5d3b,	// (0x00049c93) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x00053928) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x00053928) list_double_graphic_heading_pane_vc_t

0x9a98,	// (0x0004d9f0) list_setting_pane_vc_g1_ParamLimits

0x9a98,	// (0x0004d9f0) list_setting_pane_vc_g1

0x9aa4,	// (0x0004d9fc) list_setting_pane_vc_g2_ParamLimits

0x9aa4,	// (0x0004d9fc) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x00053717) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x00053717) list_setting_pane_vc_g

0x5d53,	// (0x00049cab) list_setting_pane_vc_t1_ParamLimits

0x5d53,	// (0x00049cab) list_setting_pane_vc_t1

0x5d6f,	// (0x00049cc7) list_setting_pane_vc_t2_ParamLimits

0x5d6f,	// (0x00049cc7) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x0005396b) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x0005396b) list_setting_pane_vc_t

0x5c00,	// (0x00049b58) set_value_pane_cp_vc_ParamLimits

0x5c00,	// (0x00049b58) set_value_pane_cp_vc

0x160d,	// (0x00045565) list_single_number_heading_pane_vc_g1_ParamLimits

0x160d,	// (0x00045565) list_single_number_heading_pane_vc_g1

0x81cf,	// (0x0004c127) list_single_number_heading_pane_vc_g2_ParamLimits

0x81cf,	// (0x0004c127) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x0005370d) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x0005370d) list_single_number_heading_pane_vc_g

0x5d89,	// (0x00049ce1) list_single_number_heading_pane_vc_t1_ParamLimits

0x5d89,	// (0x00049ce1) list_single_number_heading_pane_vc_t1

0x5d9f,	// (0x00049cf7) list_single_number_heading_pane_vc_t2_ParamLimits

0x5d9f,	// (0x00049cf7) list_single_number_heading_pane_vc_t2

0x5db5,	// (0x00049d0d) list_single_number_heading_pane_vc_t3_ParamLimits

0x5db5,	// (0x00049d0d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x00053970) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x00053970) list_single_number_heading_pane_vc_t

0x5dc7,	// (0x00049d1f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5dc7,	// (0x00049d1f) list_single_graphic_heading_pane_vc_g1

0x160d,	// (0x00045565) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x160d,	// (0x00045565) list_single_graphic_heading_pane_vc_g4

0x81cf,	// (0x0004c127) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x81cf,	// (0x0004c127) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa1f,	// (0x00053977) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa1f,	// (0x00053977) list_single_graphic_heading_pane_vc_g

0x5d89,	// (0x00049ce1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5d89,	// (0x00049ce1) list_single_graphic_heading_pane_vc_t1

0x5dd3,	// (0x00049d2b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5dd3,	// (0x00049d2b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa26,	// (0x0005397e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0005397e) list_single_graphic_heading_pane_vc_t

0x160d,	// (0x00045565) list_double2_pane_vc_g1_ParamLimits

0x160d,	// (0x00045565) list_double2_pane_vc_g1

0x81cf,	// (0x0004c127) list_double2_pane_vc_g2_ParamLimits

0x81cf,	// (0x0004c127) list_double2_pane_vc_g2

0x0001,

0xf7b5,	// (0x0005370d) list_double2_pane_vc_g_ParamLimits

0xf7b5,	// (0x0005370d) list_double2_pane_vc_g

0x5de5,	// (0x00049d3d) list_double2_pane_vc_t1_ParamLimits

0x5de5,	// (0x00049d3d) list_double2_pane_vc_t1

0x86d2,	// (0x0004c62a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x86d2,	// (0x0004c62a) list_double2_large_graphic_pane_vc_g1

0x6cf3,	// (0x0004ac4b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6cf3,	// (0x0004ac4b) list_double2_large_graphic_pane_vc_g2

0x6cff,	// (0x0004ac57) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6cff,	// (0x0004ac57) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2b,	// (0x00053983) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x00053983) list_double2_large_graphic_pane_vc_g

0x5dfd,	// (0x00049d55) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5dfd,	// (0x00049d55) list_double2_large_graphic_pane_vc_t1

0x86de,	// (0x0004c636) list_double_time_pane_vc_g1_ParamLimits

0x86de,	// (0x0004c636) list_double_time_pane_vc_g1

0x86ea,	// (0x0004c642) list_double_time_pane_vc_g2_ParamLimits

0x86ea,	// (0x0004c642) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0005398a) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0005398a) list_double_time_pane_vc_g

0x5e13,	// (0x00049d6b) list_double_time_pane_vc_t1_ParamLimits

0x5e13,	// (0x00049d6b) list_double_time_pane_vc_t1

0x5e37,	// (0x00049d8f) list_double_time_pane_vc_t2_ParamLimits

0x5e37,	// (0x00049d8f) list_double_time_pane_vc_t2

0x5e86,	// (0x00049dde) list_double_time_pane_vc_t3_ParamLimits

0x5e86,	// (0x00049dde) list_double_time_pane_vc_t3

0x5e98,	// (0x00049df0) list_double_time_pane_vc_t4_ParamLimits

0x5e98,	// (0x00049df0) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0005398f) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0005398f) list_double_time_pane_vc_t

0x160d,	// (0x00045565) list_double_pane_vc_g1_ParamLimits

0x160d,	// (0x00045565) list_double_pane_vc_g1

0x81cf,	// (0x0004c127) list_double_pane_vc_g2_ParamLimits

0x81cf,	// (0x0004c127) list_double_pane_vc_g2

0x0001,

0xf7b5,	// (0x0005370d) list_double_pane_vc_g_ParamLimits

0xf7b5,	// (0x0005370d) list_double_pane_vc_g

0x5eac,	// (0x00049e04) list_double_pane_vc_t1_ParamLimits

0x5eac,	// (0x00049e04) list_double_pane_vc_t1

0x5ec0,	// (0x00049e18) list_double_pane_vc_t2_ParamLimits

0x5ec0,	// (0x00049e18) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x00053998) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x00053998) list_double_pane_vc_t

0x160d,	// (0x00045565) list_double_number_pane_vc_g1_ParamLimits

0x160d,	// (0x00045565) list_double_number_pane_vc_g1

0x81cf,	// (0x0004c127) list_double_number_pane_vc_g2_ParamLimits

0x81cf,	// (0x0004c127) list_double_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x0005370d) list_double_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x0005370d) list_double_number_pane_vc_g

0x5ed8,	// (0x00049e30) list_double_number_pane_vc_t1_ParamLimits

0x5ed8,	// (0x00049e30) list_double_number_pane_vc_t1

0x5eac,	// (0x00049e04) list_double_number_pane_vc_t2_ParamLimits

0x5eac,	// (0x00049e04) list_double_number_pane_vc_t2

0x5eea,	// (0x00049e42) list_double_number_pane_vc_t3_ParamLimits

0x5eea,	// (0x00049e42) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0005399d) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0005399d) list_double_number_pane_vc_t

0x86f6,	// (0x0004c64e) list_double_large_graphic_pane_vc_g1_ParamLimits

0x86f6,	// (0x0004c64e) list_double_large_graphic_pane_vc_g1

0x8712,	// (0x0004c66a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x8712,	// (0x0004c66a) list_double_large_graphic_pane_vc_g2

0x8726,	// (0x0004c67e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x8726,	// (0x0004c67e) list_double_large_graphic_pane_vc_g3

0x5f02,	// (0x00049e5a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5f02,	// (0x00049e5a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x000539a4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x000539a4) list_double_large_graphic_pane_vc_g

0x5f11,	// (0x00049e69) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5f11,	// (0x00049e69) list_double_large_graphic_pane_vc_t1

0x5f2d,	// (0x00049e85) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5f2d,	// (0x00049e85) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x000539ad) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x000539ad) list_double_large_graphic_pane_vc_t

0x160d,	// (0x00045565) list_double_heading_pane_vc_g1_ParamLimits

0x160d,	// (0x00045565) list_double_heading_pane_vc_g1

0x81cf,	// (0x0004c127) list_double_heading_pane_vc_g2_ParamLimits

0x81cf,	// (0x0004c127) list_double_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x0005370d) list_double_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x0005370d) list_double_heading_pane_vc_g

0x5f4f,	// (0x00049ea7) list_double_heading_pane_vc_t1_ParamLimits

0x5f4f,	// (0x00049ea7) list_double_heading_pane_vc_t1

0x5f63,	// (0x00049ebb) list_double_heading_pane_vc_t2_ParamLimits

0x5f63,	// (0x00049ebb) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x000539b2) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x000539b2) list_double_heading_pane_vc_t

0x5f7b,	// (0x00049ed3) list_double_graphic_pane_vc_g1_ParamLimits

0x5f7b,	// (0x00049ed3) list_double_graphic_pane_vc_g1

0x8735,	// (0x0004c68d) list_double_graphic_pane_vc_g2_ParamLimits

0x8735,	// (0x0004c68d) list_double_graphic_pane_vc_g2

0x160d,	// (0x00045565) list_double_graphic_pane_vc_g3_ParamLimits

0x160d,	// (0x00045565) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x000539b7) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x000539b7) list_double_graphic_pane_vc_g

0x5f8e,	// (0x00049ee6) list_double_graphic_pane_vc_t1_ParamLimits

0x5f8e,	// (0x00049ee6) list_double_graphic_pane_vc_t1

0x5fad,	// (0x00049f05) list_double_graphic_pane_vc_t2_ParamLimits

0x5fad,	// (0x00049f05) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x000539c0) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x000539c0) list_double_graphic_pane_vc_t

0x630c,	// (0x0004a264) aid_size_cell_fastswap

0x6314,	// (0x0004a26c) aid_size_cell_touch_ParamLimits

0x6314,	// (0x0004a26c) aid_size_cell_touch

0x656f,	// (0x0004a4c7) popup_fast_swap_wide_window_ParamLimits

0x656f,	// (0x0004a4c7) popup_fast_swap_wide_window

0x6675,	// (0x0004a5cd) touch_pane_ParamLimits

0x6675,	// (0x0004a5cd) touch_pane

0x0dde,	// (0x00044d36) button_value_adjust_pane_cp2

0x5829,	// (0x00049781) button_value_adjust_pane_cp4

0x584b,	// (0x000497a3) form_field_data_pane_cp2

0x586c,	// (0x000497c4) form_field_data_wide_pane_cp2

0x10f8,	// (0x00045050) bg_scroll_pane_ParamLimits

0x7073,	// (0x0004afcb) scroll_handle_pane_ParamLimits

0x7087,	// (0x0004afdf) scroll_sc2_down_pane_ParamLimits

0x7087,	// (0x0004afdf) scroll_sc2_down_pane

0x1129,	// (0x00045081) scroll_sc2_up_pane_ParamLimits

0x1129,	// (0x00045081) scroll_sc2_up_pane

0xbbb2,	// (0x0004fb0a) grid_wheel_folder_pane_g1_ParamLimits

0xbbb2,	// (0x0004fb0a) grid_wheel_folder_pane_g1

0x7408,	// (0x0004b360) clock_nsta_pane_cp2_ParamLimits

0x7408,	// (0x0004b360) clock_nsta_pane_cp2

0x7510,	// (0x0004b468) listscroll_midp_pane_ParamLimits

0x751c,	// (0x0004b474) midp_canvas_pane

0x1812,	// (0x0004576a) nsta_clock_indic_pane

0x183a,	// (0x00045792) listscroll_form_pane_vc

0x1842,	// (0x0004579a) listscroll_set_pane_vc_ParamLimits

0x1842,	// (0x0004579a) listscroll_set_pane_vc

0x7f57,	// (0x0004beaf) clock_nsta_pane

0x7fd2,	// (0x0004bf2a) indicator_nsta_pane

0x998e,	// (0x0004d8e6) bg_popup_sub_pane_cp2_ParamLimits

0x99a2,	// (0x0004d8fa) find_pane_cp2_ParamLimits

0x99a2,	// (0x0004d8fa) find_pane_cp2

0x99b8,	// (0x0004d910) grid_toobar_pane_ParamLimits

0x9ab0,	// (0x0004da08) list_form_gen_pane_vc_ParamLimits

0x9ab0,	// (0x0004da08) list_form_gen_pane_vc

0x9ac6,	// (0x0004da1e) scroll_pane_cp8_vc_ParamLimits

0x9ac6,	// (0x0004da1e) scroll_pane_cp8_vc

0x9b42,	// (0x0004da9a) data_form_wide_pane_vc_ParamLimits

0x9b42,	// (0x0004da9a) data_form_wide_pane_vc

0x9b4e,	// (0x0004daa6) form_field_data_wide_pane_vc_g1

0x9b56,	// (0x0004daae) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b56,	// (0x0004daae) form_field_data_wide_pane_vc_t1

0x0df2,	// (0x00044d4a) input_focus_pane_cp6_vc_ParamLimits

0x0df2,	// (0x00044d4a) input_focus_pane_cp6_vc

0x9e83,	// (0x0004dddb) list_midp_pane_ParamLimits

0x9e8f,	// (0x0004dde7) scroll_pane_cp16_ParamLimits

0x9e8f,	// (0x0004dde7) scroll_pane_cp16

0x9ef9,	// (0x0004de51) button_value_adjust_pane_ParamLimits

0x9ef9,	// (0x0004de51) button_value_adjust_pane

0xae3d,	// (0x0004ed95) button_value_adjust_pane_cp6_ParamLimits

0xae3d,	// (0x0004ed95) button_value_adjust_pane_cp6

0xaf63,	// (0x0004eebb) settings_code_pane_cp_ParamLimits

0xaf63,	// (0x0004eebb) settings_code_pane_cp

0x09d6,	// (0x0004492e) cell_touch_pane_g1

0x09d6,	// (0x0004492e) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x00053631) cell_touch_pane_g

0xb4e3,	// (0x0004f43b) cell_touch_pane_cp_ParamLimits

0xb4e3,	// (0x0004f43b) cell_touch_pane_cp

0xb4f3,	// (0x0004f44b) cell_touch_pane_ParamLimits

0xb4f3,	// (0x0004f44b) cell_touch_pane

0x09d6,	// (0x0004492e) scroll_sc2_down_pane_g1

0x09d6,	// (0x0004492e) scroll_sc2_up_pane_g1

0x09e0,	// (0x00044938) bg_set_opt_pane_cp4_vc

0xb505,	// (0x0004f45d) list_set_graphic_pane_vc_g1_ParamLimits

0xb505,	// (0x0004f45d) list_set_graphic_pane_vc_g1

0xb511,	// (0x0004f469) list_set_graphic_pane_vc_g2_ParamLimits

0xb511,	// (0x0004f469) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x0005392d) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x0005392d) list_set_graphic_pane_vc_g

0xb51d,	// (0x0004f475) text_primary_small_cp13_vc_ParamLimits

0xb51d,	// (0x0004f475) text_primary_small_cp13_vc

0xb535,	// (0x0004f48d) list_set_graphic_pane_vc_ParamLimits

0xb535,	// (0x0004f48d) list_set_graphic_pane_vc

0x09e0,	// (0x00044938) input_focus_pane_cp2_vc

0x09d6,	// (0x0004492e) setting_code_pane_vc_g1

0x0a53,	// (0x000449ab) setting_code_pane_vc_t1

0xb548,	// (0x0004f4a0) set_text_pane_vc_t1_ParamLimits

0xb548,	// (0x0004f4a0) set_text_pane_vc_t1

0x09e0,	// (0x00044938) input_focus_pane_cp1_vc

0xb565,	// (0x0004f4bd) list_set_text_pane_vc

0x09d6,	// (0x0004492e) setting_text_pane_vc_g1

0x09e0,	// (0x00044938) bg_set_opt_pane_cp2_vc

0x0a4a,	// (0x000449a2) setting_slider_graphic_pane_vc_g1

0xb56f,	// (0x0004f4c7) setting_slider_graphic_pane_vc_t1

0xb57f,	// (0x0004f4d7) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x00053932) setting_slider_graphic_pane_vc_t

0xb58f,	// (0x0004f4e7) slider_set_pane_cp_vc

0xb597,	// (0x0004f4ef) slider_set_pane_vc_g1

0xb5a0,	// (0x0004f4f8) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x00053937) slider_set_pane_vc_g

0x0e4a,	// (0x00044da2) set_opt_bg_pane_g1_copy1

0x0e52,	// (0x00044daa) set_opt_bg_pane_g2_copy1

0xb5cc,	// (0x0004f524) set_opt_bg_pane_g3_copy1

0x0e62,	// (0x00044dba) set_opt_bg_pane_g4_copy1

0x0e6a,	// (0x00044dc2) set_opt_bg_pane_g5_copy1

0x0e72,	// (0x00044dca) set_opt_bg_pane_g6_copy1

0xb5d4,	// (0x0004f52c) set_opt_bg_pane_g7_copy1

0xb5de,	// (0x0004f536) set_opt_bg_pane_g8_copy1

0xb5e6,	// (0x0004f53e) set_opt_bg_pane_g9_copy1

0x09e0,	// (0x00044938) bg_set_opt_pane_cp_vc

0xb5ee,	// (0x0004f546) setting_slider_pane_vc_t1

0xb5fd,	// (0x0004f555) setting_slider_pane_vc_t2

0xb60d,	// (0x0004f565) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x00053946) setting_slider_pane_vc_t

0xb61d,	// (0x0004f575) slider_set_pane_vc

0x82db,	// (0x0004c233) volume_set_pane_vc_g1

0x8681,	// (0x0004c5d9) volume_set_pane_vc_g2

0x868a,	// (0x0004c5e2) volume_set_pane_vc_g3

0x8693,	// (0x0004c5eb) volume_set_pane_vc_g4

0x869c,	// (0x0004c5f4) volume_set_pane_vc_g5

0x86a5,	// (0x0004c5fd) volume_set_pane_vc_g6

0x86ae,	// (0x0004c606) volume_set_pane_vc_g7

0x86b7,	// (0x0004c60f) volume_set_pane_vc_g8

0x86c0,	// (0x0004c618) volume_set_pane_vc_g9

0x86c9,	// (0x0004c621) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x0005394d) volume_set_pane_vc_g

0xb625,	// (0x0004f57d) volume_set_pane_vc

0xb62f,	// (0x0004f587) button_value_adjust_pane_cp1_vc

0xb639,	// (0x0004f591) list_highlight_pane_cp2_vc

0xb642,	// (0x0004f59a) list_set_pane_vc_ParamLimits

0xb642,	// (0x0004f59a) list_set_pane_vc

0xb6a0,	// (0x0004f5f8) main_pane_set_vc_t1_ParamLimits

0xb6a0,	// (0x0004f5f8) main_pane_set_vc_t1

0xb6b5,	// (0x0004f60d) main_pane_set_vc_t2_ParamLimits

0xb6b5,	// (0x0004f60d) main_pane_set_vc_t2

0xb6c7,	// (0x0004f61f) main_pane_set_vc_t3_ParamLimits

0xb6c7,	// (0x0004f61f) main_pane_set_vc_t3

0xb6d9,	// (0x0004f631) main_pane_set_vc_t4_ParamLimits

0xb6d9,	// (0x0004f631) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x00053962) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x00053962) main_pane_set_vc_t

0xb6eb,	// (0x0004f643) setting_code_pane_vc_ParamLimits

0xb6eb,	// (0x0004f643) setting_code_pane_vc

0xb6fa,	// (0x0004f652) setting_slider_graphic_pane_vc

0xb6fa,	// (0x0004f652) setting_slider_pane_vc

0xb6fa,	// (0x0004f652) setting_text_pane_vc

0xb6fa,	// (0x0004f652) setting_volume_pane_vc

0xb702,	// (0x0004f65a) scroll_pane_cp121_vc

0x0dcc,	// (0x00044d24) set_content_pane_vc

0xb70a,	// (0x0004f662) button_value_adjust_pane_g1

0xb713,	// (0x0004f66b) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x000539c5) button_value_adjust_pane_g

0xb71c,	// (0x0004f674) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb71c,	// (0x0004f674) form_field_slider_wide_pane_vc_t1

0xb730,	// (0x0004f688) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb730,	// (0x0004f688) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x000539ca) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x000539ca) form_field_slider_wide_pane_vc_t

0x0a2e,	// (0x00044986) input_focus_pane_cp10_vc_ParamLimits

0x0a2e,	// (0x00044986) input_focus_pane_cp10_vc

0xb75e,	// (0x0004f6b6) slider_cont_pane_cp1_vc_ParamLimits

0xb75e,	// (0x0004f6b6) slider_cont_pane_cp1_vc

0xb770,	// (0x0004f6c8) slider_form_pane_g1_cp2

0xb5a0,	// (0x0004f4f8) slider_form_pane_g2_cp2

0xb79d,	// (0x0004f6f5) form_field_slider_pane_vc_t3

0xb7ab,	// (0x0004f703) form_field_slider_pane_vc_t4

0xb7b9,	// (0x0004f711) slider_form_pane_vc_ParamLimits

0xb7b9,	// (0x0004f711) slider_form_pane_vc

0xb7c6,	// (0x0004f71e) form_field_slider_pane_vc_t1_ParamLimits

0xb7c6,	// (0x0004f71e) form_field_slider_pane_vc_t1

0xb730,	// (0x0004f688) form_field_slider_pane_vc_t2_ParamLimits

0xb730,	// (0x0004f688) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x000539dc) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x000539dc) form_field_slider_pane_vc_t

0x0a2e,	// (0x00044986) input_focus_pane_cp9_vc_ParamLimits

0x0a2e,	// (0x00044986) input_focus_pane_cp9_vc

0xb7e2,	// (0x0004f73a) slider_cont_pane_vc_ParamLimits

0xb7e2,	// (0x0004f73a) slider_cont_pane_vc

0xb7f6,	// (0x0004f74e) list_form_graphic_pane_cp_vc_ParamLimits

0xb7f6,	// (0x0004f74e) list_form_graphic_pane_cp_vc

0x9b4e,	// (0x0004daa6) form_field_popup_wide_pane_vc_g1

0xb80b,	// (0x0004f763) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb80b,	// (0x0004f763) form_field_popup_wide_pane_vc_t1

0x0df2,	// (0x00044d4a) input_focus_pane_cp8_vc_ParamLimits

0x0df2,	// (0x00044d4a) input_focus_pane_cp8_vc

0xb850,	// (0x0004f7a8) list_form_wide_pane_vc_ParamLimits

0xb850,	// (0x0004f7a8) list_form_wide_pane_vc

0xb85c,	// (0x0004f7b4) list_form_graphic_pane_vc_g1

0xb864,	// (0x0004f7bc) list_form_graphic_pane_vc_t1_ParamLimits

0xb864,	// (0x0004f7bc) list_form_graphic_pane_vc_t1

0x0a3c,	// (0x00044994) list_highlight_pane_cp5_vc_ParamLimits

0x0a3c,	// (0x00044994) list_highlight_pane_cp5_vc

0xb880,	// (0x0004f7d8) list_form_graphic_pane_vc_ParamLimits

0xb880,	// (0x0004f7d8) list_form_graphic_pane_vc

0x9b4e,	// (0x0004daa6) form_field_popup_pane_vc_g1

0xb896,	// (0x0004f7ee) form_field_popup_pane_vc_t1_ParamLimits

0xb896,	// (0x0004f7ee) form_field_popup_pane_vc_t1

0x0df2,	// (0x00044d4a) input_focus_pane_cp7_vc_ParamLimits

0x0df2,	// (0x00044d4a) input_focus_pane_cp7_vc

0xb8ad,	// (0x0004f805) list_form_pane_vc_ParamLimits

0xb8ad,	// (0x0004f805) list_form_pane_vc

0xb8b9,	// (0x0004f811) data_form_pane_vc_t1_ParamLimits

0xb8b9,	// (0x0004f811) data_form_pane_vc_t1

0x0e4a,	// (0x00044da2) input_focus_pane_vc_g1

0x0e52,	// (0x00044daa) input_focus_pane_vc_g2

0x0e5a,	// (0x00044db2) input_focus_pane_vc_g3

0x0e62,	// (0x00044dba) input_focus_pane_vc_g4

0x0e6a,	// (0x00044dc2) input_focus_pane_vc_g5

0x0e72,	// (0x00044dca) input_focus_pane_vc_g6

0x0e7a,	// (0x00044dd2) input_focus_pane_vc_g7

0x0e82,	// (0x00044dda) input_focus_pane_vc_g8

0x0e8a,	// (0x00044de2) input_focus_pane_vc_g9

0x09d6,	// (0x0004492e) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x000535ba) input_focus_pane_vc_g

0x9b42,	// (0x0004da9a) data_form_pane_vc_ParamLimits

0x9b42,	// (0x0004da9a) data_form_pane_vc

0x9b4e,	// (0x0004daa6) form_field_data_pane_vc_g1

0xb8d4,	// (0x0004f82c) form_field_data_pane_vc_t1_ParamLimits

0xb8d4,	// (0x0004f82c) form_field_data_pane_vc_t1

0x0df2,	// (0x00044d4a) input_focus_pane_vc_ParamLimits

0x0df2,	// (0x00044d4a) input_focus_pane_vc

0xb8ee,	// (0x0004f846) button_value_adjust_pane_cp3_vc

0xb8f6,	// (0x0004f84e) button_value_adjust_pane_cp5_vc

0xb8fe,	// (0x0004f856) form_field_data_pane_vc_ParamLimits

0xb8fe,	// (0x0004f856) form_field_data_pane_vc

0xb915,	// (0x0004f86d) form_field_data_pane_vc_cp2

0xb91d,	// (0x0004f875) form_field_data_wide_pane_vc_ParamLimits

0xb91d,	// (0x0004f875) form_field_data_wide_pane_vc

0xb933,	// (0x0004f88b) form_field_data_wide_pane_vc_cp2

0xb93b,	// (0x0004f893) form_field_popup_pane_vc_ParamLimits

0xb93b,	// (0x0004f893) form_field_popup_pane_vc

0xb952,	// (0x0004f8aa) form_field_popup_wide_pane_vc_ParamLimits

0xb952,	// (0x0004f8aa) form_field_popup_wide_pane_vc

0xb968,	// (0x0004f8c0) form_field_slider_pane_vc_ParamLimits

0xb968,	// (0x0004f8c0) form_field_slider_pane_vc

0xb97b,	// (0x0004f8d3) form_field_slider_wide_pane_vc_ParamLimits

0xb97b,	// (0x0004f8d3) form_field_slider_wide_pane_vc

0xb98e,	// (0x0004f8e6) grid_touch_1_pane_ParamLimits

0xb98e,	// (0x0004f8e6) grid_touch_1_pane

0xb99a,	// (0x0004f8f2) grid_touch_2_pane_ParamLimits

0xb99a,	// (0x0004f8f2) grid_touch_2_pane

0x1804,	// (0x0004575c) touch_pane_g1_ParamLimits

0x1804,	// (0x0004575c) touch_pane_g1

0xb9b2,	// (0x0004f90a) cell_app_pane_cp_wide_ParamLimits

0xb9b2,	// (0x0004f90a) cell_app_pane_cp_wide

0xb9c3,	// (0x0004f91b) grid_popup_fast_wide_pane_ParamLimits

0xb9c3,	// (0x0004f91b) grid_popup_fast_wide_pane

0xb9d7,	// (0x0004f92f) scroll_pane_cp19_ParamLimits

0xb9d7,	// (0x0004f92f) scroll_pane_cp19

0x09e0,	// (0x00044938) bg_popup_window_pane_cp20

0xb9eb,	// (0x0004f943) listscroll_popup_fast_wide_pane

0xb9f3,	// (0x0004f94b) grid_indicator_nsta_pane

0xba05,	// (0x0004f95d) clock_nsta_pane_g1

0xba0e,	// (0x0004f966) clock_nsta_pane_t1

0xba2a,	// (0x0004f982) cell_indicator_nsta_pane_ParamLimits

0xba2a,	// (0x0004f982) cell_indicator_nsta_pane

0xba5f,	// (0x0004f9b7) cell_indicator_nsta_pane_g1

0xba6d,	// (0x0004f9c5) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x000539ed) cell_indicator_nsta_pane_g

0xba7f,	// (0x0004f9d7) clock_nsta_pane_cp

0xba88,	// (0x0004f9e0) indicator_nsta_pane_cp

0xba92,	// (0x0004f9ea) nsta_clock_indic_pane_g1

0x0a78,	// (0x000449d0) grid_indicator_pane

0x7125,	// (0x0004b07d) scroll_pane_cp29

0x7357,	// (0x0004b2af) indicator_nsta_pane_cp2_ParamLimits

0x7357,	// (0x0004b2af) indicator_nsta_pane_cp2

0x0a3c,	// (0x00044994) main_apps_wheel_pane

0x9d66,	// (0x0004dcbe) form_midp_field_text_pane_ParamLimits

0x9eaf,	// (0x0004de07) scroll_bar_cp050_ParamLimits

0xbaeb,	// (0x0004fa43) cell_indicator_pane_ParamLimits

0xbaeb,	// (0x0004fa43) cell_indicator_pane

0xbb04,	// (0x0004fa5c) cell_indicator_pane_g1

0xbb0e,	// (0x0004fa66) grid_wheel_folder_pane_ParamLimits

0xbb0e,	// (0x0004fa66) grid_wheel_folder_pane

0xbb24,	// (0x0004fa7c) list_wheel_apps_pane_ParamLimits

0xbb24,	// (0x0004fa7c) list_wheel_apps_pane

0xbb35,	// (0x0004fa8d) main_apps_wheel_pane_g1_ParamLimits

0xbb35,	// (0x0004fa8d) main_apps_wheel_pane_g1

0xbb49,	// (0x0004faa1) main_apps_wheel_pane_g2_ParamLimits

0xbb49,	// (0x0004faa1) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x00053a09) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x00053a09) main_apps_wheel_pane_g

0xbb61,	// (0x0004fab9) main_apps_wheel_pane_t1_ParamLimits

0xbb61,	// (0x0004fab9) main_apps_wheel_pane_t1

0xbb84,	// (0x0004fadc) list_wheel_apps_pane_g1

0xbb8c,	// (0x0004fae4) list_wheel_apps_pane_g2

0xbb94,	// (0x0004faec) list_wheel_apps_pane_g3

0xbb9e,	// (0x0004faf6) list_wheel_apps_pane_g4

0xbba8,	// (0x0004fb00) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x00053a0e) list_wheel_apps_pane_g

0x1553,	// (0x000454ab) navi_icon_text_pane

0x7e86,	// (0x0004bdde) aid_fill_nsta

0xbbcb,	// (0x0004fb23) navi_icon_text_pane_g1

0xbbd7,	// (0x0004fb2f) navi_icon_text_pane_t1

0x1437,	// (0x0004538f) list_set_graphic_pane_t1_ParamLimits

0x1437,	// (0x0004538f) list_set_graphic_pane_t1

0xa5fa,	// (0x0004e552) popup_midp_note_alarm_window_t6_ParamLimits

0xa5fa,	// (0x0004e552) popup_midp_note_alarm_window_t6

0xa60c,	// (0x0004e564) popup_midp_note_alarm_window_t7_ParamLimits

0xa60c,	// (0x0004e564) popup_midp_note_alarm_window_t7

0xa61e,	// (0x0004e576) popup_midp_note_alarm_window_t8_ParamLimits

0xa61e,	// (0x0004e576) popup_midp_note_alarm_window_t8

0xa630,	// (0x0004e588) popup_midp_note_alarm_window_t9_ParamLimits

0xa630,	// (0x0004e588) popup_midp_note_alarm_window_t9

0xa642,	// (0x0004e59a) popup_midp_note_alarm_window_t10_ParamLimits

0xa642,	// (0x0004e59a) popup_midp_note_alarm_window_t10

0xa654,	// (0x0004e5ac) popup_midp_note_alarm_window_t11_ParamLimits

0xa654,	// (0x0004e5ac) popup_midp_note_alarm_window_t11

0xa666,	// (0x0004e5be) scroll_pane_cp17_ParamLimits

0xa666,	// (0x0004e5be) scroll_pane_cp17

0x82db,	// (0x0004c233) volume_small_pane_cp_g1

0x8752,	// (0x0004c6aa) volume_small_pane_cp_g2

0x875b,	// (0x0004c6b3) volume_small_pane_cp_g3

0x8764,	// (0x0004c6bc) volume_small_pane_cp_g4

0x876d,	// (0x0004c6c5) volume_small_pane_cp_g5

0x869c,	// (0x0004c5f4) volume_small_pane_cp_g6

0x8776,	// (0x0004c6ce) volume_small_pane_cp_g7

0x877f,	// (0x0004c6d7) volume_small_pane_cp_g8

0x8788,	// (0x0004c6e0) volume_small_pane_cp_g9

0x8791,	// (0x0004c6e9) volume_small_pane_cp_g10

0x16c5,	// (0x0004561d) midp_ticker_pane_g1_ParamLimits

0x16d1,	// (0x00045629) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x00053686) midp_ticker_pane_g_ParamLimits

0x16dd,	// (0x00045635) midp_ticker_pane_t1_ParamLimits

0x7e9c,	// (0x0004bdf4) aid_fill_nsta_2

0x9e9b,	// (0x0004ddf3) list_form2_midp_pane

0xafae,	// (0x0004ef06) midp_editing_number_pane_ParamLimits

0xafbd,	// (0x0004ef15) midp_ticker_pane_ParamLimits

0xbbe9,	// (0x0004fb41) form2_midp_field_pane

0xbc0d,	// (0x0004fb65) scroll_pane_cp51

0xbc2d,	// (0x0004fb85) form2_midp_button_pane_ParamLimits

0xbc2d,	// (0x0004fb85) form2_midp_button_pane

0xbc3f,	// (0x0004fb97) form2_midp_content_pane_ParamLimits

0xbc3f,	// (0x0004fb97) form2_midp_content_pane

0xbc59,	// (0x0004fbb1) form2_midp_field_choice_group_pane

0xbc61,	// (0x0004fbb9) form2_midp_field_pane_g1

0xbc69,	// (0x0004fbc1) form2_midp_field_pane_g2

0xbc71,	// (0x0004fbc9) form2_midp_field_pane_g3

0xbc79,	// (0x0004fbd1) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x00053a33) form2_midp_field_pane_g

0xbc81,	// (0x0004fbd9) form2_midp_gauge_slider_pane

0xbc89,	// (0x0004fbe1) form2_midp_gauge_wait_pane

0xbc91,	// (0x0004fbe9) form2_midp_image_pane_ParamLimits

0xbc91,	// (0x0004fbe9) form2_midp_image_pane

0xbcac,	// (0x0004fc04) form2_midp_label_pane_ParamLimits

0xbcac,	// (0x0004fc04) form2_midp_label_pane

0xbcc5,	// (0x0004fc1d) form2_midp_label_pane_cp_ParamLimits

0xbcc5,	// (0x0004fc1d) form2_midp_label_pane_cp

0xbce6,	// (0x0004fc3e) form2_midp_string_pane_ParamLimits

0xbce6,	// (0x0004fc3e) form2_midp_string_pane

0x5fd7,	// (0x00049f2f) form2_midp_text_pane_ParamLimits

0x5fd7,	// (0x00049f2f) form2_midp_text_pane

0xbcf8,	// (0x0004fc50) form2_midp_time_pane

0xbd08,	// (0x0004fc60) input_focus_pane_cp51_ParamLimits

0xbd08,	// (0x0004fc60) input_focus_pane_cp51

0xbd20,	// (0x0004fc78) form2_midp_label_pane_t1_ParamLimits

0xbd20,	// (0x0004fc78) form2_midp_label_pane_t1

0x5ff4,	// (0x00049f4c) form2_mdip_text_pane_t1_ParamLimits

0x5ff4,	// (0x00049f4c) form2_mdip_text_pane_t1

0x6012,	// (0x00049f6a) form2_midp_time_pane_t1

0xbd69,	// (0x0004fcc1) form2_midp_gauge_slider_pane_t1

0xbd7b,	// (0x0004fcd3) form2_midp_gauge_slider_pane_t2

0xbd8d,	// (0x0004fce5) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x00053a3c) form2_midp_gauge_slider_pane_t

0xbd9f,	// (0x0004fcf7) form2_midp_slider_pane

0xbdab,	// (0x0004fd03) form2_midp_gauge_wait_pane_t1

0xbdb9,	// (0x0004fd11) form2_midp_wait_pane_ParamLimits

0xbdb9,	// (0x0004fd11) form2_midp_wait_pane

0xbde4,	// (0x0004fd3c) list_single_2graphic_pane_cp4_ParamLimits

0xbde4,	// (0x0004fd3c) list_single_2graphic_pane_cp4

0x9bb7,	// (0x0004db0f) list_single_midp_graphic_pane_cp_ParamLimits

0x9bb7,	// (0x0004db0f) list_single_midp_graphic_pane_cp

0x09e0,	// (0x00044938) list_highlight_pane_cp20

0xbe0c,	// (0x0004fd64) list_single_2graphic_pane_g1_cp4

0xb3e9,	// (0x0004f341) list_single_2graphic_pane_g2_cp4

0xbe14,	// (0x0004fd6c) list_single_2graphic_pane_t1_cp4

0x0a3c,	// (0x00044994) list_highlight_pane_cp21

0xbe23,	// (0x0004fd7b) list_single_midp_graphic_pane_g4_cp

0xbe32,	// (0x0004fd8a) list_single_midp_graphic_pane_t1_cp

0xbe47,	// (0x0004fd9f) form2_mdip_string_pane_t1_ParamLimits

0xbe47,	// (0x0004fd9f) form2_mdip_string_pane_t1

0x09e0,	// (0x00044938) bg_wml_button_pane_cp2

0x09d6,	// (0x0004492e) form2_midp_image_pane_g1

0x6d23,	// (0x0004ac7b) list_double_large_graphic_pane_g5_ParamLimits

0x6d23,	// (0x0004ac7b) list_double_large_graphic_pane_g5

0x7510,	// (0x0004b468) midp_form_pane_ParamLimits

0x0a3c,	// (0x00044994) main_apps_wheel_pane_ParamLimits

0x7c6e,	// (0x0004bbc6) popup_preview_window_ParamLimits

0x7c6e,	// (0x0004bbc6) popup_preview_window

0x7e29,	// (0x0004bd81) popup_touch_info_window_ParamLimits

0x7e29,	// (0x0004bd81) popup_touch_info_window

0x7e47,	// (0x0004bd9f) popup_touch_menu_window_ParamLimits

0x7e47,	// (0x0004bd9f) popup_touch_menu_window

0x09cc,	// (0x00044924) bg_popup_sub_pane_cp6

0xbf4e,	// (0x0004fea6) list_touch_menu_pane

0xbf56,	// (0x0004feae) list_single_touch_menu_pane_ParamLimits

0xbf56,	// (0x0004feae) list_single_touch_menu_pane

0xbf6c,	// (0x0004fec4) list_single_touch_menu_pane_t1

0x0a3c,	// (0x00044994) bg_popup_sub_pane_cp7_ParamLimits

0x0a3c,	// (0x00044994) bg_popup_sub_pane_cp7

0xbf7a,	// (0x0004fed2) heading_sub_pane

0xbf82,	// (0x0004feda) list_touch_info_pane_ParamLimits

0xbf82,	// (0x0004feda) list_touch_info_pane

0xbf91,	// (0x0004fee9) list_single_touch_info_pane_ParamLimits

0xbf91,	// (0x0004fee9) list_single_touch_info_pane

0xbfa3,	// (0x0004fefb) list_single_touch_info_pane_t1

0xbfb1,	// (0x0004ff09) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x00053a4a) list_single_touch_info_pane_t

0x16ae,	// (0x00045606) bg_popup_heading_pane_cp

0xbfbf,	// (0x0004ff17) heading_sub_pane_t1

0x9adc,	// (0x0004da34) bg_popup_preview_window_pane_cp_ParamLimits

0x9adc,	// (0x0004da34) bg_popup_preview_window_pane_cp

0xbf7a,	// (0x0004fed2) heading_preview_pane

0xbf82,	// (0x0004feda) list_preview_pane_ParamLimits

0xbf82,	// (0x0004feda) list_preview_pane

0xbfcd,	// (0x0004ff25) popup_preview_window_g1

0xbf91,	// (0x0004fee9) list_single_preview_pane_ParamLimits

0xbf91,	// (0x0004fee9) list_single_preview_pane

0xbfd5,	// (0x0004ff2d) list_single_preview_pane_g1

0xbfdd,	// (0x0004ff35) list_single_preview_pane_t1

0xbfa3,	// (0x0004fefb) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x00053a4f) list_single_preview_pane_t

0xbfeb,	// (0x0004ff43) bg_popup_heading_pane_cp2_ParamLimits

0xbfeb,	// (0x0004ff43) bg_popup_heading_pane_cp2

0xc001,	// (0x0004ff59) heading_preview_pane_g1

0xc009,	// (0x0004ff61) heading_preview_pane_t1_ParamLimits

0xc009,	// (0x0004ff61) heading_preview_pane_t1

0x0a8f,	// (0x000449e7) soft_indicator_pane_t1_ParamLimits

0x0d6e,	// (0x00044cc6) scroll_pane_ParamLimits

0x1120,	// (0x00045078) scroll_sc2_left_pane

0x1117,	// (0x0004506f) scroll_sc2_right_pane

0x113f,	// (0x00045097) scroll_bg_pane_g1_ParamLimits

0x1154,	// (0x000450ac) scroll_bg_pane_g2_ParamLimits

0x116c,	// (0x000450c4) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x00053611) scroll_bg_pane_g_ParamLimits

0x113f,	// (0x00045097) scroll_handle_pane_g1_ParamLimits

0x1181,	// (0x000450d9) scroll_handle_pane_g2_ParamLimits

0x116c,	// (0x000450c4) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x00053618) scroll_handle_pane_g_ParamLimits

0x78f1,	// (0x0004b849) popup_choice_list_window_ParamLimits

0x78f1,	// (0x0004b849) popup_choice_list_window

0x999a,	// (0x0004d8f2) choice_list_pane

0x9a1c,	// (0x0004d974) cell_toolbar_pane_t1

0x9a44,	// (0x0004d99c) toolbar_button_pane_ParamLimits

0xab20,	// (0x0004ea78) ai_gene_pane_1_t2_ParamLimits

0xab20,	// (0x0004ea78) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x00053840) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x00053840) ai_gene_pane_1_t

0xc026,	// (0x0004ff7e) scroll_sc2_left_pane_g1

0xc026,	// (0x0004ff7e) scroll_sc2_right_pane_g1

0x0f34,	// (0x00044e8c) bg_popup_sub_pane_cp10

0xc030,	// (0x0004ff88) list_choice_list_pane

0xc049,	// (0x0004ffa1) list_single_choice_list_pane_ParamLimits

0xc049,	// (0x0004ffa1) list_single_choice_list_pane

0xc05c,	// (0x0004ffb4) list_single_choice_list_pane_g1

0x6dbe,	// (0x0004ad16) list_single_choice_list_pane_t1_ParamLimits

0x6dbe,	// (0x0004ad16) list_single_choice_list_pane_t1

0xc064,	// (0x0004ffbc) choice_list_pane_g1

0xc06c,	// (0x0004ffc4) choice_list_pane_t1

0x09cc,	// (0x00044924) input_focus_pane_cp11

0x108c,	// (0x00044fe4) title_pane_stacon_g2_ParamLimits

0x108c,	// (0x00044fe4) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x000535f7) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x000535f7) title_pane_stacon_g

0x16ae,	// (0x00045606) cursor_press_pane

0x7999,	// (0x0004b8f1) popup_fep_hwr_window_ParamLimits

0x7999,	// (0x0004b8f1) popup_fep_hwr_window

0x7a11,	// (0x0004b969) popup_fep_vkb_window_ParamLimits

0x7a11,	// (0x0004b969) popup_fep_vkb_window

0xc07a,	// (0x0004ffd2) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x00053a78) fep_vkb_side_pane_g_ParamLimits

0x87d3,	// (0x0004c72b) fep_hwr_candidate_pane_ParamLimits

0x87d3,	// (0x0004c72b) fep_hwr_candidate_pane

0x87fd,	// (0x0004c755) fep_hwr_side_pane_ParamLimits

0x87fd,	// (0x0004c755) fep_hwr_side_pane

0x881d,	// (0x0004c775) fep_hwr_top_pane_ParamLimits

0x881d,	// (0x0004c775) fep_hwr_top_pane

0x8835,	// (0x0004c78d) fep_hwr_write_pane_ParamLimits

0x8835,	// (0x0004c78d) fep_hwr_write_pane

0xfb20,	// (0x00053a78) fep_vkb_side_pane_g

0xc082,	// (0x0004ffda) fep_hwr_top_pane_g1

0xc094,	// (0x0004ffec) fep_hwr_top_pane_g2

0x8861,	// (0x0004c7b9) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x00053a54) fep_hwr_top_pane_g

0x8876,	// (0x0004c7ce) fep_hwr_top_text_pane

0x1244,	// (0x0004519c) fep_hwr_top_text_pane_g1

0xc0ca,	// (0x00050022) fep_hwr_top_text_pane_t1

0x896c,	// (0x0004c8c4) fep_hwr_candidate_pane_g1

0xc30f,	// (0x00050267) fep_vkb_keypad_pane_g3_ParamLimits

0xc30f,	// (0x00050267) fep_vkb_keypad_pane_g3

0xc337,	// (0x0005028f) fep_vkb_keypad_pane_g4_ParamLimits

0xc337,	// (0x0005028f) fep_vkb_keypad_pane_g4

0xc3a6,	// (0x000502fe) fep_vkb_bottom_pane_g2_ParamLimits

0xc3a6,	// (0x000502fe) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x00053a7f) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x00053a7f) fep_vkb_bottom_pane_g

0xc026,	// (0x0004ff7e) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x00053a89) cell_vkb_side_pane_g

0xc431,	// (0x00050389) cell_vkb_side_pane_t1

0xc43f,	// (0x00050397) cell_vkb_side_pane_t1_copy1

0xc026,	// (0x0004ff7e) bg_fep_vkb_candidate_pane_g2

0xc56b,	// (0x000504c3) cell_vkb_candidate_pane_ParamLimits

0xc0d8,	// (0x00050030) aid_size_cell_vkb_ParamLimits

0xc0d8,	// (0x00050030) aid_size_cell_vkb

0xc56b,	// (0x000504c3) cell_vkb_candidate_pane

0x8986,	// (0x0004c8de) bg_popup_fep_shadow_pane_g1

0xc166,	// (0x000500be) fep_vkb_bottom_pane_ParamLimits

0xc166,	// (0x000500be) fep_vkb_bottom_pane

0xc19c,	// (0x000500f4) fep_vkb_candidate_pane_ParamLimits

0xc19c,	// (0x000500f4) fep_vkb_candidate_pane

0xc1b8,	// (0x00050110) fep_vkb_keypad_pane_ParamLimits

0xc1b8,	// (0x00050110) fep_vkb_keypad_pane

0xc1f7,	// (0x0005014f) fep_vkb_side_pane_ParamLimits

0xc1f7,	// (0x0005014f) fep_vkb_side_pane

0xc233,	// (0x0005018b) fep_vkb_top_pane_ParamLimits

0xc233,	// (0x0005018b) fep_vkb_top_pane

0xc268,	// (0x000501c0) fep_vkb_top_pane_g1_ParamLimits

0xc268,	// (0x000501c0) fep_vkb_top_pane_g1

0xc277,	// (0x000501cf) fep_vkb_top_pane_g2_ParamLimits

0xc277,	// (0x000501cf) fep_vkb_top_pane_g2

0xc286,	// (0x000501de) fep_vkb_top_pane_g3_ParamLimits

0xc286,	// (0x000501de) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x00053a6f) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x00053a6f) fep_vkb_top_pane_g

0xc2a4,	// (0x000501fc) fep_vkb_top_text_pane_ParamLimits

0xc2a4,	// (0x000501fc) fep_vkb_top_text_pane

0xc2b5,	// (0x0005020d) fep_vkb_side_pane_g1_ParamLimits

0xc2b5,	// (0x0005020d) fep_vkb_side_pane_g1

0xc2fe,	// (0x00050256) grid_vkb_side_pane_ParamLimits

0xc2fe,	// (0x00050256) grid_vkb_side_pane

0x898e,	// (0x0004c8e6) bg_popup_fep_shadow_pane_g2

0x8997,	// (0x0004c8ef) bg_popup_fep_shadow_pane_g3

0x899f,	// (0x0004c8f7) bg_popup_fep_shadow_pane_g4

0x89a8,	// (0x0004c900) bg_popup_fep_shadow_pane_g5

0x89b2,	// (0x0004c90a) bg_popup_fep_shadow_pane_g6

0x89ba,	// (0x0004c912) bg_popup_fep_shadow_pane_g7

0x0e6a,	// (0x00044dc2) bg_popup_fep_shadow_pane_g8

0xc355,	// (0x000502ad) grid_vkb_keypad_number_pane_ParamLimits

0xc355,	// (0x000502ad) grid_vkb_keypad_number_pane

0xc365,	// (0x000502bd) grid_vkb_keypad_pane_ParamLimits

0xc365,	// (0x000502bd) grid_vkb_keypad_pane

0xc38b,	// (0x000502e3) fep_vkb_bottom_pane_g1_ParamLimits

0xc38b,	// (0x000502e3) fep_vkb_bottom_pane_g1

0xc3b4,	// (0x0005030c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3b4,	// (0x0005030c) grid_vkb_keypad_bottom_left_pane

0xc3c9,	// (0x00050321) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3c9,	// (0x00050321) grid_vkb_keypad_bottom_right_pane

0xc3de,	// (0x00050336) fep_vkb_top_text_pane_g1

0xc3f9,	// (0x00050351) fep_vkb_top_text_pane_t1

0xc40e,	// (0x00050366) cell_vkb_side_pane_ParamLimits

0xc40e,	// (0x00050366) cell_vkb_side_pane

0xc026,	// (0x0004ff7e) cell_vkb_side_pane_g1

0xc44d,	// (0x000503a5) cell_vkb_keypad_pane_ParamLimits

0xc44d,	// (0x000503a5) cell_vkb_keypad_pane

0xc4c2,	// (0x0005041a) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x00053a9c) bg_popup_fep_shadow_pane_g

0xc026,	// (0x0004ff7e) cell_hwr_side_pane_g1

0xc026,	// (0x0004ff7e) cell_hwr_side_pane_g2

0xc4cc,	// (0x00050424) cell_vkb_keypad_pane_t1

0xc4da,	// (0x00050432) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4da,	// (0x00050432) cell_vkb_keypad_bottom_left_pane

0xc4f7,	// (0x0005044f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4f7,	// (0x0005044f) cell_vkb_keypad_bottom_right_pane

0xc026,	// (0x0004ff7e) cell_vkb_keypad_bottom_left_pane_g1

0xc026,	// (0x0004ff7e) cell_vkb_keypad_bottom_right_pane_g1

0xc530,	// (0x00050488) cell_vkb_keypad_number_pane_ParamLimits

0xc530,	// (0x00050488) cell_vkb_keypad_number_pane

0xc54f,	// (0x000504a7) cell_vkb_keypad_number_pane_g1

0xc559,	// (0x000504b1) cell_vkb_keypad_number_pane_g2

0xc562,	// (0x000504ba) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x00053a8e) cell_vkb_keypad_number_pane_g

0xc4cc,	// (0x00050424) cell_vkb_keypad_number_pane_t1

0xc586,	// (0x000504de) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x00053a89) cell_hwr_side_pane_g

0xc59f,	// (0x000504f7) cell_hwr_side_pane_t1

0x89cc,	// (0x0004c924) cell_hwr_side_pane_t1_copy1

0xc296,	// (0x000501ee) cell_hwr_candidate_pane_g1

0x89da,	// (0x0004c932) cell_hwr_candidate_pane_t1

0xc026,	// (0x0004ff7e) cell_vkb_candidate_pane_g2

0xc625,	// (0x0005057d) cell_vkb_candidate_pane_t1

0x879a,	// (0x0004c6f2) bg_popup_fep_shadow_pane_ParamLimits

0x879a,	// (0x0004c6f2) bg_popup_fep_shadow_pane

0x2e79,	// (0x00046dd1) bg_fep_hwr_top_pane_g4

0xc0a6,	// (0x0004fffe) bg_hwr_side_pane_g1_ParamLimits

0xc0a6,	// (0x0004fffe) bg_hwr_side_pane_g1

0x88b2,	// (0x0004c80a) cell_hwr_side_pane_ParamLimits

0x88b2,	// (0x0004c80a) cell_hwr_side_pane

0x88ed,	// (0x0004c845) fep_hwr_write_pane_g1_ParamLimits

0x88ed,	// (0x0004c845) fep_hwr_write_pane_g1

0x88fa,	// (0x0004c852) fep_hwr_write_pane_g2_ParamLimits

0x88fa,	// (0x0004c852) fep_hwr_write_pane_g2

0x8907,	// (0x0004c85f) fep_hwr_write_pane_g3_ParamLimits

0x8907,	// (0x0004c85f) fep_hwr_write_pane_g3

0x8915,	// (0x0004c86d) fep_hwr_write_pane_g4_ParamLimits

0x8915,	// (0x0004c86d) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x00053a5b) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x00053a5b) fep_hwr_write_pane_g

0x2e79,	// (0x00046dd1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2e79,	// (0x00046dd1) bg_fep_hwr_candidate_pane_g2

0x892a,	// (0x0004c882) cell_hwr_candidate_pane_ParamLimits

0x892a,	// (0x0004c882) cell_hwr_candidate_pane

0x896c,	// (0x0004c8c4) fep_hwr_candidate_pane_g1_ParamLimits

0xc106,	// (0x0005005e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc106,	// (0x0005005e) bg_popup_fep_shadow_pane_cp2

0xc296,	// (0x000501ee) fep_vkb_top_pane_g4_ParamLimits

0xc296,	// (0x000501ee) fep_vkb_top_pane_g4

0xc2dc,	// (0x00050234) fep_vkb_side_pane_g2_ParamLimits

0xc2dc,	// (0x00050234) fep_vkb_side_pane_g2

0x5756,	// (0x000496ae) list_setting_pane_t4_ParamLimits

0x5756,	// (0x000496ae) list_setting_pane_t4

0x57f0,	// (0x00049748) list_setting_number_pane_t5_ParamLimits

0x57f0,	// (0x00049748) list_setting_number_pane_t5

0x7154,	// (0x0004b0ac) list_double_heading_pane_cp2_ParamLimits

0x7154,	// (0x0004b0ac) list_double_heading_pane_cp2

0x2463,	// (0x000463bb) list_double_heading_pane_g1_cp2_ParamLimits

0x2463,	// (0x000463bb) list_double_heading_pane_g1_cp2

0xc633,	// (0x0005058b) list_double_heading_pane_g2_cp2_ParamLimits

0xc633,	// (0x0005058b) list_double_heading_pane_g2_cp2

0xc647,	// (0x0005059f) list_double_heading_pane_t1_cp2_ParamLimits

0xc647,	// (0x0005059f) list_double_heading_pane_t1_cp2

0xc65d,	// (0x000505b5) list_double_heading_pane_t2_cp2_ParamLimits

0xc65d,	// (0x000505b5) list_double_heading_pane_t2_cp2

0x09c4,	// (0x0004491c) aid_value_unit2

0x65bb,	// (0x0004a513) popup_preview_fixed_window

0x0b66,	// (0x00044abe) bg_popup_preview_window_pane_cp02

0xc66f,	// (0x000505c7) list_preview_fixed_pane

0xc6b5,	// (0x0005060d) list_empty_pane_fp_ParamLimits

0xc6b5,	// (0x0005060d) list_empty_pane_fp

0xc6b5,	// (0x0005060d) list_single_cale_day_pane_fp_ParamLimits

0xc6b5,	// (0x0005060d) list_single_cale_day_pane_fp

0xc6b5,	// (0x0005060d) list_single_graphic_heading_pane_fp_ParamLimits

0xc6b5,	// (0x0005060d) list_single_graphic_heading_pane_fp

0xc6b5,	// (0x0005060d) list_single_graphic_pane_fp_ParamLimits

0xc6b5,	// (0x0005060d) list_single_graphic_pane_fp

0xc6b5,	// (0x0005060d) list_single_heading_pane_fp_ParamLimits

0xc6b5,	// (0x0005060d) list_single_heading_pane_fp

0xc6b5,	// (0x0005060d) list_single_pane_fp_ParamLimits

0xc6b5,	// (0x0005060d) list_single_pane_fp

0xc6cb,	// (0x00050623) list_single_pane_fp_g1_ParamLimits

0xc6cb,	// (0x00050623) list_single_pane_fp_g1

0x25d5,	// (0x0004652d) list_single_pane_fp_g2_ParamLimits

0x25d5,	// (0x0004652d) list_single_pane_fp_g2

0xc7d9,	// (0x00050731) list_single_pane_fp_g3_ParamLimits

0xc7d9,	// (0x00050731) list_single_pane_fp_g3

0xc6d7,	// (0x0005062f) list_single_pane_fp_g4_ParamLimits

0xc6d7,	// (0x0005062f) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x00053abd) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x00053abd) list_single_pane_fp_g

0x6025,	// (0x00049f7d) list_single_pane_fp_t1_ParamLimits

0x6025,	// (0x00049f7d) list_single_pane_fp_t1

0x603c,	// (0x00049f94) list_single_graphic_pane_fp_g1_ParamLimits

0x603c,	// (0x00049f94) list_single_graphic_pane_fp_g1

0xc6cb,	// (0x00050623) list_single_graphic_pane_fp_g2_ParamLimits

0xc6cb,	// (0x00050623) list_single_graphic_pane_fp_g2

0x25d5,	// (0x0004652d) list_single_graphic_pane_fp_g3_ParamLimits

0x25d5,	// (0x0004652d) list_single_graphic_pane_fp_g3

0xc7d9,	// (0x00050731) list_single_graphic_pane_fp_g4_ParamLimits

0xc7d9,	// (0x00050731) list_single_graphic_pane_fp_g4

0xc6d7,	// (0x0005062f) list_single_graphic_pane_fp_g5_ParamLimits

0xc6d7,	// (0x0005062f) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x00053ac6) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x00053ac6) list_single_graphic_pane_fp_g

0x6048,	// (0x00049fa0) list_single_graphic_pane_fp_t1_ParamLimits

0x6048,	// (0x00049fa0) list_single_graphic_pane_fp_t1

0x603c,	// (0x00049f94) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x603c,	// (0x00049f94) list_single_graphic_heading_pane_fp_g1

0xc6cb,	// (0x00050623) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6cb,	// (0x00050623) list_single_graphic_heading_pane_fp_g2

0x25d5,	// (0x0004652d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x25d5,	// (0x0004652d) list_single_graphic_heading_pane_fp_g3

0xc7d9,	// (0x00050731) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc7d9,	// (0x00050731) list_single_graphic_heading_pane_fp_g4

0xc6d7,	// (0x0005062f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6d7,	// (0x0005062f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x00053ac6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x00053ac6) list_single_graphic_heading_pane_fp_g

0x605e,	// (0x00049fb6) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x605e,	// (0x00049fb6) list_single_graphic_heading_pane_fp_t1

0x6074,	// (0x00049fcc) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6074,	// (0x00049fcc) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x00053ad1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x00053ad1) list_single_graphic_heading_pane_fp_t

0x6086,	// (0x00049fde) list_single_cale_day_pane_fp_g1_ParamLimits

0x6086,	// (0x00049fde) list_single_cale_day_pane_fp_g1

0xc6e3,	// (0x0005063b) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6e3,	// (0x0005063b) list_single_cale_day_pane_fp_g2

0x89f8,	// (0x0004c950) list_single_cale_day_pane_fp_g3_ParamLimits

0x89f8,	// (0x0004c950) list_single_cale_day_pane_fp_g3

0x8a20,	// (0x0004c978) list_single_cale_day_pane_fp_g4_ParamLimits

0x8a20,	// (0x0004c978) list_single_cale_day_pane_fp_g4

0x8a44,	// (0x0004c99c) list_single_cale_day_pane_fp_g5_ParamLimits

0x8a44,	// (0x0004c99c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x00053ad6) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x00053ad6) list_single_cale_day_pane_fp_g

0x60be,	// (0x0004a016) list_single_cale_day_pane_fp_t1_ParamLimits

0x60be,	// (0x0004a016) list_single_cale_day_pane_fp_t1

0x60e4,	// (0x0004a03c) list_single_cale_day_pane_fp_t2_ParamLimits

0x60e4,	// (0x0004a03c) list_single_cale_day_pane_fp_t2

0x60fd,	// (0x0004a055) list_single_cale_day_pane_fp_t3_ParamLimits

0x60fd,	// (0x0004a055) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x00053ae1) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x00053ae1) list_single_cale_day_pane_fp_t

0xc6cb,	// (0x00050623) list_empty_pane_fp_g1_ParamLimits

0xc6cb,	// (0x00050623) list_empty_pane_fp_g1

0x6116,	// (0x0004a06e) list_empty_pane_fp_t1

0x6124,	// (0x0004a07c) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x00053ae8) list_empty_pane_fp_t

0xc6cb,	// (0x00050623) list_single_heading_pane_fp_g1_ParamLimits

0xc6cb,	// (0x00050623) list_single_heading_pane_fp_g1

0x25d5,	// (0x0004652d) list_single_heading_pane_fp_g2_ParamLimits

0x25d5,	// (0x0004652d) list_single_heading_pane_fp_g2

0xc7d9,	// (0x00050731) list_single_heading_pane_fp_g3_ParamLimits

0xc7d9,	// (0x00050731) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x00053aed) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x00053aed) list_single_heading_pane_fp_g

0x6132,	// (0x0004a08a) list_single_heading_pane_fp_t1_ParamLimits

0x6132,	// (0x0004a08a) list_single_heading_pane_fp_t1

0x6144,	// (0x0004a09c) list_single_heading_pane_fp_t2_ParamLimits

0x6144,	// (0x0004a09c) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x00053af4) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x00053af4) list_single_heading_pane_fp_t

0x6e24,	// (0x0004ad7c) aid_size_cell_fast

0x0b49,	// (0x00044aa1) soft_indicator_pane_cp1_t1

0x6e2d,	// (0x0004ad85) cell_app_pane_cp2_ParamLimits

0x6e2d,	// (0x0004ad85) cell_app_pane_cp2

0x87bc,	// (0x0004c714) fep_hwr_candidate_drop_down_list_pane

0x2ff1,	// (0x00046f49) fep_hwr_candidate_pane_g3_ParamLimits

0x2ff1,	// (0x00046f49) fep_hwr_candidate_pane_g3

0x2ffe,	// (0x00046f56) fep_hwr_candidate_pane_g4_ParamLimits

0x2ffe,	// (0x00046f56) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x00053a68) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x00053a68) fep_hwr_candidate_pane_g

0xc18b,	// (0x000500e3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc18b,	// (0x000500e3) fep_vkb_candidate_drop_down_list_pane

0xc58e,	// (0x000504e6) fep_vkb_candidate_pane_g3

0xc596,	// (0x000504ee) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x00053a95) fep_vkb_candidate_pane_g

0xc296,	// (0x000501ee) cell_hwr_candidate_pane_g1_ParamLimits

0xc5ad,	// (0x00050505) cell_hwr_candidate_pane_g3_ParamLimits

0xc5ad,	// (0x00050505) cell_hwr_candidate_pane_g3

0xc5ce,	// (0x00050526) cell_hwr_candidate_pane_g4_ParamLimits

0xc5ce,	// (0x00050526) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x00053aaf) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x00053aaf) cell_hwr_candidate_pane_g

0xc5ef,	// (0x00050547) cell_vkb_candidate_pane_g3_ParamLimits

0xc5ef,	// (0x00050547) cell_vkb_candidate_pane_g3

0xc60a,	// (0x00050562) cell_vkb_candidate_pane_g4_ParamLimits

0xc60a,	// (0x00050562) cell_vkb_candidate_pane_g4

0xc6ef,	// (0x00050647) cell_app_pane_cp2_g1_ParamLimits

0xc6ef,	// (0x00050647) cell_app_pane_cp2_g1

0xc70d,	// (0x00050665) cell_app_pane_cp2_g2_ParamLimits

0xc70d,	// (0x00050665) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x00053af9) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x00053af9) cell_app_pane_cp2_g

0xc719,	// (0x00050671) cell_app_pane_cp2_t1_ParamLimits

0xc719,	// (0x00050671) cell_app_pane_cp2_t1

0x0df2,	// (0x00044d4a) grid_highlight_pane_cp1_ParamLimits

0x0df2,	// (0x00044d4a) grid_highlight_pane_cp1

0x8a68,	// (0x0004c9c0) cell_hwr_candidate_pane_cp1_ParamLimits

0x8a68,	// (0x0004c9c0) cell_hwr_candidate_pane_cp1

0xc296,	// (0x000501ee) fep_hwr_candidate_drop_down_list_pane_g1

0xc72b,	// (0x00050683) fep_hwr_candidate_drop_down_list_pane_g2

0xc738,	// (0x00050690) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x00053afe) fep_hwr_candidate_drop_down_list_pane_g

0x8a87,	// (0x0004c9df) fep_hwr_candidate_drop_down_list_scroll_pane

0x8a90,	// (0x0004c9e8) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8a90,	// (0x0004c9e8) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8a9d,	// (0x0004c9f5) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8a9d,	// (0x0004c9f5) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8aaa,	// (0x0004ca02) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8aaa,	// (0x0004ca02) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5ef,	// (0x00050547) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5ef,	// (0x00050547) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc60a,	// (0x00050562) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc60a,	// (0x00050562) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8ab7,	// (0x0004ca0f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8ab7,	// (0x0004ca0f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8ad2,	// (0x0004ca2a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8ad2,	// (0x0004ca2a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8aed,	// (0x0004ca45) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8aed,	// (0x0004ca45) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x00053b05) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x00053b05) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc745,	// (0x0005069d) cell_vkb_candidate_pane_cp1_ParamLimits

0xc745,	// (0x0005069d) cell_vkb_candidate_pane_cp1

0xc296,	// (0x000501ee) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc296,	// (0x000501ee) fep_vkb_candidate_drop_down_list_pane_g1

0xc72b,	// (0x00050683) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc72b,	// (0x00050683) fep_vkb_candidate_drop_down_list_pane_g2

0xc738,	// (0x00050690) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc738,	// (0x00050690) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x00053afe) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x00053afe) fep_vkb_candidate_drop_down_list_pane_g

0xc765,	// (0x000506bd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc765,	// (0x000506bd) fep_vkb_candidate_drop_down_list_scroll_pane

0xc772,	// (0x000506ca) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc772,	// (0x000506ca) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc77f,	// (0x000506d7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc77f,	// (0x000506d7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc78b,	// (0x000506e3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc78b,	// (0x000506e3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5ad,	// (0x00050505) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5ad,	// (0x00050505) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5ce,	// (0x00050526) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5ce,	// (0x00050526) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc797,	// (0x000506ef) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc797,	// (0x000506ef) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7ed,	// (0x00050745) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7ed,	// (0x00050745) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc80e,	// (0x00050766) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc80e,	// (0x00050766) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x00053b16) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x00053b16) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x66d5,	// (0x0004a62d) title_pane_g1_ParamLimits

0x66e2,	// (0x0004a63a) title_pane_g2_ParamLimits

0xf529,	// (0x00053481) title_pane_g_ParamLimits

0x123c,	// (0x00045194) aid_call2_pane

0x1234,	// (0x0004518c) aid_call_pane

0x1244,	// (0x0004519c) popup_clock_analogue_window_g1

0x1244,	// (0x0004519c) popup_clock_analogue_window_g2

0x7135,	// (0x0004b08d) popup_clock_analogue_window_g3

0x713e,	// (0x0004b096) popup_clock_analogue_window_g4

0x09d6,	// (0x0004492e) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x00053626) popup_clock_analogue_window_g

0x7146,	// (0x0004b09e) popup_clock_analogue_window_t1

0x7194,	// (0x0004b0ec) clock_digital_number_pane_ParamLimits

0x7194,	// (0x0004b0ec) clock_digital_number_pane

0x71a0,	// (0x0004b0f8) clock_digital_number_pane_cp02_ParamLimits

0x71a0,	// (0x0004b0f8) clock_digital_number_pane_cp02

0x71ac,	// (0x0004b104) clock_digital_number_pane_cp03_ParamLimits

0x71ac,	// (0x0004b104) clock_digital_number_pane_cp03

0x71b8,	// (0x0004b110) clock_digital_number_pane_cp04_ParamLimits

0x71b8,	// (0x0004b110) clock_digital_number_pane_cp04

0x71c4,	// (0x0004b11c) clock_digital_separator_pane_ParamLimits

0x71c4,	// (0x0004b11c) clock_digital_separator_pane

0x71d0,	// (0x0004b128) popup_clock_digital_window_t1_ParamLimits

0x71d0,	// (0x0004b128) popup_clock_digital_window_t1

0x09d6,	// (0x0004492e) clock_digital_number_pane_g1

0x09d6,	// (0x0004492e) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x00053631) clock_digital_number_pane_g

0x09d6,	// (0x0004492e) clock_digital_separator_pane_g1

0x09d6,	// (0x0004492e) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x00053631) clock_digital_separator_pane_g

0x7e86,	// (0x0004bdde) aid_fill_nsta_ParamLimits

0x7fd2,	// (0x0004bf2a) indicator_nsta_pane_ParamLimits

0x814b,	// (0x0004c0a3) popup_clock_analogue_window

0x814b,	// (0x0004c0a3) popup_clock_digital_window

0xb9f3,	// (0x0004f94b) grid_indicator_nsta_pane_ParamLimits

0xba1c,	// (0x0004f974) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x000539e8) clock_nsta_pane_t

0x7060,	// (0x0004afb8) aid_size_max_handle

0x706a,	// (0x0004afc2) aid_size_min_handle

0x16ae,	// (0x00045606) editor_scroll_pane

0xc829,	// (0x00050781) ex_editor_pane

0x0f24,	// (0x00044e7c) scroll_pane_cp13

0x0d9a,	// (0x00044cf2) scroll_pane_cp14

0x1273,	// (0x000451cb) scroll_pane_cp36

0x7168,	// (0x0004b0c0) list_single_graphic_hl_pane_cp2_ParamLimits

0x7168,	// (0x0004b0c0) list_single_graphic_hl_pane_cp2

0x5cc0,	// (0x00049c18) list_single_graphic_hl_pane_ParamLimits

0x5cc0,	// (0x00049c18) list_single_graphic_hl_pane

0x615a,	// (0x0004a0b2) aid_size_min_hl_cp1

0xc831,	// (0x00050789) list_highlight_pane_cp34_ParamLimits

0xc831,	// (0x00050789) list_highlight_pane_cp34

0xc842,	// (0x0005079a) list_single_graphic_hl_pane_g1_ParamLimits

0xc842,	// (0x0005079a) list_single_graphic_hl_pane_g1

0x6163,	// (0x0004a0bb) list_single_graphic_hl_pane_g2_ParamLimits

0x6163,	// (0x0004a0bb) list_single_graphic_hl_pane_g2

0x6163,	// (0x0004a0bb) list_single_graphic_hl_pane_g3_ParamLimits

0x6163,	// (0x0004a0bb) list_single_graphic_hl_pane_g3

0x616f,	// (0x0004a0c7) list_single_graphic_hl_pane_g4_ParamLimits

0x616f,	// (0x0004a0c7) list_single_graphic_hl_pane_g4

0x617b,	// (0x0004a0d3) list_single_graphic_hl_pane_g5_ParamLimits

0x617b,	// (0x0004a0d3) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x00053b27) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x00053b27) list_single_graphic_hl_pane_g

0x618f,	// (0x0004a0e7) list_single_graphic_hl_pane_t1_ParamLimits

0x618f,	// (0x0004a0e7) list_single_graphic_hl_pane_t1

0xc84f,	// (0x000507a7) aid_size_min_hl_cp2

0xc858,	// (0x000507b0) list_highlight_pane_cp34_cp2_ParamLimits

0xc858,	// (0x000507b0) list_highlight_pane_cp34_cp2

0xc842,	// (0x0005079a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc842,	// (0x0005079a) list_single_graphic_hl_pane_g1_cp2

0xc865,	// (0x000507bd) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc865,	// (0x000507bd) list_single_graphic_hl_pane_g2_cp2

0xc871,	// (0x000507c9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc871,	// (0x000507c9) list_single_graphic_hl_pane_g3_cp2

0x160d,	// (0x00045565) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x160d,	// (0x00045565) list_single_graphic_hl_pane_g4_cp2

0xc87f,	// (0x000507d7) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc87f,	// (0x000507d7) list_single_graphic_hl_pane_g5_cp2

0x7774,	// (0x0004b6cc) control_pane_g4_ParamLimits

0x7774,	// (0x0004b6cc) control_pane_g4

0x0f34,	// (0x00044e8c) bg_popup_sub_pane_cp10_ParamLimits

0xc030,	// (0x0004ff88) list_choice_list_pane_ParamLimits

0xc03f,	// (0x0004ff97) scroll_pane_cp23

0x0b66,	// (0x00044abe) bg_popup_preview_window_pane_cp02_ParamLimits

0xc66f,	// (0x000505c7) list_preview_fixed_pane_ParamLimits

0xc685,	// (0x000505dd) list_preview_fixed_pane_cp_ParamLimits

0xc685,	// (0x000505dd) list_preview_fixed_pane_cp

0xc691,	// (0x000505e9) popup_preview_fixed_window_g1_ParamLimits

0xc691,	// (0x000505e9) popup_preview_fixed_window_g1

0xc69d,	// (0x000505f5) popup_preview_fixed_window_g2_ParamLimits

0xc69d,	// (0x000505f5) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x00053ab6) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x00053ab6) popup_preview_fixed_window_g

0x6f3c,	// (0x0004ae94) aid_navi_side_left_pane_ParamLimits

0x6f51,	// (0x0004aea9) aid_navi_side_right_pane_ParamLimits

0x6f69,	// (0x0004aec1) navi_icon_pane_stacon_ParamLimits

0x6f7d,	// (0x0004aed5) navi_navi_pane_stacon_ParamLimits

0x6f69,	// (0x0004aec1) navi_text_pane_stacon_ParamLimits

0x09cc,	// (0x00044924) main_text_info_pane

0xc8a9,	// (0x00050801) listscroll_text_info_pane

0xc8b1,	// (0x00050809) list_text_info_pane_ParamLimits

0xc8b1,	// (0x00050809) list_text_info_pane

0xc8c0,	// (0x00050818) scroll_pane_cp24_ParamLimits

0xc8c0,	// (0x00050818) scroll_pane_cp24

0xc8de,	// (0x00050836) list_text_info_pane_t1_ParamLimits

0xc8de,	// (0x00050836) list_text_info_pane_t1

0x790d,	// (0x0004b865) popup_fast_swap2_window_ParamLimits

0x790d,	// (0x0004b865) popup_fast_swap2_window

0xc912,	// (0x0005086a) aid_size_cell_fast2

0x09cc,	// (0x00044924) bg_popup_window_pane_cp17

0xc91c,	// (0x00050874) heading_pane_cp2

0xc924,	// (0x0005087c) listscroll_fast2_pane

0xc92c,	// (0x00050884) grid_fast2_pane

0xc936,	// (0x0005088e) listscroll_fast2_pane_g1

0xc93e,	// (0x00050896) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x00053b32) listscroll_fast2_pane_g

0x0f24,	// (0x00044e7c) scroll_pane_cp26

0xc948,	// (0x000508a0) cell_fast2_pane_ParamLimits

0xc948,	// (0x000508a0) cell_fast2_pane

0xc95d,	// (0x000508b5) cell_fast2_pane_g1

0xc966,	// (0x000508be) cell_fast2_pane_g2

0xc96f,	// (0x000508c7) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x00053b37) cell_fast2_pane_g

0x0cd1,	// (0x00044c29) grid_highlight_pane_cp9

0x0ce6,	// (0x00044c3e) main_eswt_pane_ParamLimits

0x0ce6,	// (0x00044c3e) main_eswt_pane

0xc8d5,	// (0x0005082d) list_single_text_info_pane

0xc977,	// (0x000508cf) eswt_ctrl_button_pane

0xc977,	// (0x000508cf) eswt_ctrl_canvas_pane

0xc97f,	// (0x000508d7) eswt_ctrl_combo_pane

0xc977,	// (0x000508cf) eswt_ctrl_default_pane

0xc977,	// (0x000508cf) eswt_ctrl_label_pane

0xc987,	// (0x000508df) eswt_ctrl_wait_pane

0xc98f,	// (0x000508e7) eswt_shell_pane

0x09cc,	// (0x00044924) listscroll_eswt_app_pane

0xc9af,	// (0x00050907) popup_eswt_tasktip_window_ParamLimits

0xc9af,	// (0x00050907) popup_eswt_tasktip_window

0x9adc,	// (0x0004da34) bg_popup_window_pane_cp18

0xc9c8,	// (0x00050920) eswt_control_pane_g1_ParamLimits

0xc9c8,	// (0x00050920) eswt_control_pane_g1

0xc9d5,	// (0x0005092d) eswt_control_pane_g2_ParamLimits

0xc9d5,	// (0x0005092d) eswt_control_pane_g2

0xc9e2,	// (0x0005093a) eswt_control_pane_g3_ParamLimits

0xc9e2,	// (0x0005093a) eswt_control_pane_g3

0xc9ef,	// (0x00050947) eswt_control_pane_g4_ParamLimits

0xc9ef,	// (0x00050947) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x00053b3e) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x00053b3e) eswt_control_pane_g

0x0df2,	// (0x00044d4a) bg_button_pane_ParamLimits

0x0df2,	// (0x00044d4a) bg_button_pane

0x0ce6,	// (0x00044c3e) common_borders_pane_copy2_ParamLimits

0x0ce6,	// (0x00044c3e) common_borders_pane_copy2

0xc9fc,	// (0x00050954) control_button_pane_g1_ParamLimits

0xc9fc,	// (0x00050954) control_button_pane_g1

0xca08,	// (0x00050960) control_button_pane_g2_ParamLimits

0xca08,	// (0x00050960) control_button_pane_g2

0xca14,	// (0x0005096c) control_button_pane_g3_ParamLimits

0xca14,	// (0x0005096c) control_button_pane_g3

0x0002,

0xfbef,	// (0x00053b47) control_button_pane_g_ParamLimits

0xfbef,	// (0x00053b47) control_button_pane_g

0xca28,	// (0x00050980) control_button_pane_t1

0xca36,	// (0x0005098e) control_button_pane_t2

0x0001,

0xfbf6,	// (0x00053b4e) control_button_pane_t

0x9a50,	// (0x0004d9a8) bg_button_pane_g1

0x9a58,	// (0x0004d9b0) bg_button_pane_g2

0x9a60,	// (0x0004d9b8) bg_button_pane_g3

0x9a68,	// (0x0004d9c0) bg_button_pane_g4

0x9a70,	// (0x0004d9c8) bg_button_pane_g5

0x9a78,	// (0x0004d9d0) bg_button_pane_g6

0x9a80,	// (0x0004d9d8) bg_button_pane_g7

0x9a88,	// (0x0004d9e0) bg_button_pane_g8

0x9a90,	// (0x0004d9e8) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00053794) bg_button_pane_g

0xbfeb,	// (0x0004ff43) common_borders_pane_ParamLimits

0xbfeb,	// (0x0004ff43) common_borders_pane

0xc9c8,	// (0x00050920) eswt_control_pane_g1_copy1_ParamLimits

0xc9c8,	// (0x00050920) eswt_control_pane_g1_copy1

0xc9d5,	// (0x0005092d) eswt_control_pane_g2_copy1_ParamLimits

0xc9d5,	// (0x0005092d) eswt_control_pane_g2_copy1

0xc9e2,	// (0x0005093a) eswt_control_pane_g3_copy1_ParamLimits

0xc9e2,	// (0x0005093a) eswt_control_pane_g3_copy1

0xc9ef,	// (0x00050947) eswt_control_pane_g4_copy1_ParamLimits

0xc9ef,	// (0x00050947) eswt_control_pane_g4_copy1

0xc026,	// (0x0004ff7e) bg_eswt_ctrl_canvas_pane_g1

0xbfeb,	// (0x0004ff43) common_borders_pane_cp2_ParamLimits

0xbfeb,	// (0x0004ff43) common_borders_pane_cp2

0xbfeb,	// (0x0004ff43) common_borders_pane_cp3_ParamLimits

0xbfeb,	// (0x0004ff43) common_borders_pane_cp3

0xca44,	// (0x0005099c) separator_horizontal_pane

0xca4c,	// (0x000509a4) separator_vertical_pane

0xc9c8,	// (0x00050920) eswt_control_pane_g1_copy2_ParamLimits

0xc9c8,	// (0x00050920) eswt_control_pane_g1_copy2

0xc9d5,	// (0x0005092d) eswt_control_pane_g2_copy2_ParamLimits

0xc9d5,	// (0x0005092d) eswt_control_pane_g2_copy2

0xc9e2,	// (0x0005093a) eswt_control_pane_g3_copy2_ParamLimits

0xc9e2,	// (0x0005093a) eswt_control_pane_g3_copy2

0xc9ef,	// (0x00050947) eswt_control_pane_g4_copy2_ParamLimits

0xc9ef,	// (0x00050947) eswt_control_pane_g4_copy2

0x09cc,	// (0x00044924) common_borders_pane_cp4

0xca55,	// (0x000509ad) separator_horizontal_pane_g1

0xca5e,	// (0x000509b6) separator_horizontal_pane_g2

0xca67,	// (0x000509bf) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x00053b53) separator_horizontal_pane_g

0xc9c8,	// (0x00050920) eswt_control_pane_g1_copy3_ParamLimits

0xc9c8,	// (0x00050920) eswt_control_pane_g1_copy3

0xc9d5,	// (0x0005092d) eswt_control_pane_g2_copy3_ParamLimits

0xc9d5,	// (0x0005092d) eswt_control_pane_g2_copy3

0xc9e2,	// (0x0005093a) eswt_control_pane_g3_copy3_ParamLimits

0xc9e2,	// (0x0005093a) eswt_control_pane_g3_copy3

0xc9ef,	// (0x00050947) eswt_control_pane_g4_copy3_ParamLimits

0xc9ef,	// (0x00050947) eswt_control_pane_g4_copy3

0x09cc,	// (0x00044924) common_borders_pane_cp5

0xca70,	// (0x000509c8) separator_vertical_pane_g1

0xca79,	// (0x000509d1) separator_vertical_pane_g2

0xca82,	// (0x000509da) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x00053b5a) separator_vertical_pane_g

0xc9c8,	// (0x00050920) eswt_control_pane_g1_copy4_ParamLimits

0xc9c8,	// (0x00050920) eswt_control_pane_g1_copy4

0xc9d5,	// (0x0005092d) eswt_control_pane_g2_copy4_ParamLimits

0xc9d5,	// (0x0005092d) eswt_control_pane_g2_copy4

0xc9e2,	// (0x0005093a) eswt_control_pane_g3_copy4_ParamLimits

0xc9e2,	// (0x0005093a) eswt_control_pane_g3_copy4

0xc9ef,	// (0x00050947) eswt_control_pane_g4_copy4_ParamLimits

0xc9ef,	// (0x00050947) eswt_control_pane_g4_copy4

0xca8b,	// (0x000509e3) eswt_ctrl_combo_button_pane

0xca93,	// (0x000509eb) eswt_ctrl_input_pane

0xca9b,	// (0x000509f3) popup_choice_list_window_cp70

0xcaa3,	// (0x000509fb) eswt_ctrl_input_pane_t1

0x09cc,	// (0x00044924) input_focus_pane_cp70

0xbfeb,	// (0x0004ff43) bg_button_pane_cp70_ParamLimits

0xbfeb,	// (0x0004ff43) bg_button_pane_cp70

0xcab1,	// (0x00050a09) eswt_ctrl_combo_button_pane_g1

0xcab9,	// (0x00050a11) wait_bar_pane_cp70

0x9adc,	// (0x0004da34) bg_popup_window_pane_cp70_ParamLimits

0x9adc,	// (0x0004da34) bg_popup_window_pane_cp70

0xcac1,	// (0x00050a19) popup_eswt_tasktip_window_t1

0xcad7,	// (0x00050a2f) wait_bar_pane_cp71_ParamLimits

0xcad7,	// (0x00050a2f) wait_bar_pane_cp71

0xcae3,	// (0x00050a3b) grid_eswt_app_pane

0x1117,	// (0x0004506f) scroll_pane_cp70

0xcaec,	// (0x00050a44) cell_eswt_app_pane_ParamLimits

0xcaec,	// (0x00050a44) cell_eswt_app_pane

0xcb1c,	// (0x00050a74) cell_eswt_app_pane_g1_ParamLimits

0xcb1c,	// (0x00050a74) cell_eswt_app_pane_g1

0xcb4b,	// (0x00050aa3) cell_eswt_app_pane_g2_ParamLimits

0xcb4b,	// (0x00050aa3) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x00053b61) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x00053b61) cell_eswt_app_pane_g

0xcb6f,	// (0x00050ac7) cell_eswt_app_pane_t1_ParamLimits

0xcb6f,	// (0x00050ac7) cell_eswt_app_pane_t1

0xcba1,	// (0x00050af9) grid_highlight_pane_cp70_ParamLimits

0xcba1,	// (0x00050af9) grid_highlight_pane_cp70

0x15a8,	// (0x00045500) set_content_pane_g1

0x770a,	// (0x0004b662) status_small_volume_pane

0x8b08,	// (0x0004ca60) status_small_volume_pane_g1

0x8b10,	// (0x0004ca68) volume_small2_pane

0x8b19,	// (0x0004ca71) volume_small2_pane_g1

0x8b22,	// (0x0004ca7a) volume_small2_pane_g2

0x8b2b,	// (0x0004ca83) volume_small2_pane_g3

0x8b34,	// (0x0004ca8c) volume_small2_pane_g4

0x8b3d,	// (0x0004ca95) volume_small2_pane_g5

0x8b46,	// (0x0004ca9e) volume_small2_pane_g6

0x8b4f,	// (0x0004caa7) volume_small2_pane_g7

0x8b58,	// (0x0004cab0) volume_small2_pane_g8

0x8b61,	// (0x0004cab9) volume_small2_pane_g9

0x8b6a,	// (0x0004cac2) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x00053b66) volume_small2_pane_g

0xc3de,	// (0x00050336) fep_vkb_top_text_pane_g1_ParamLimits

0xc3f9,	// (0x00050351) fep_vkb_top_text_pane_t1_ParamLimits

0xc6a9,	// (0x00050601) popup_preview_fixed_window_g3_ParamLimits

0xc6a9,	// (0x00050601) popup_preview_fixed_window_g3

0x7dbc,	// (0x0004bd14) popup_toolbar_trans_pane

0xae1a,	// (0x0004ed72) aid_height_set_list_ParamLimits

0xae2b,	// (0x0004ed83) aid_size_parent_ParamLimits

0x0f34,	// (0x00044e8c) list_highlight_pane_cp2_ParamLimits

0x15a8,	// (0x00045500) set_content_pane_g1_ParamLimits

0x5cde,	// (0x00049c36) list_single_image_pane_ParamLimits

0x5cde,	// (0x00049c36) list_single_image_pane

0xcbad,	// (0x00050b05) aid_size_cell_image_ParamLimits

0xcbad,	// (0x00050b05) aid_size_cell_image

0xcbba,	// (0x00050b12) grid_single_image_pane_ParamLimits

0xcbba,	// (0x00050b12) grid_single_image_pane

0x25d5,	// (0x0004652d) list_single_image_pane_g1_ParamLimits

0x25d5,	// (0x0004652d) list_single_image_pane_g1

0xc7d9,	// (0x00050731) list_single_image_pane_g2_ParamLimits

0xc7d9,	// (0x00050731) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x00053b7b) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x00053b7b) list_single_image_pane_g

0xcbc6,	// (0x00050b1e) list_single_image_pane_t1_ParamLimits

0xcbc6,	// (0x00050b1e) list_single_image_pane_t1

0xcbdc,	// (0x00050b34) cell_image_list_pane_ParamLimits

0xcbdc,	// (0x00050b34) cell_image_list_pane

0xcbf0,	// (0x00050b48) cell_image_list_pane_g1

0xcbf9,	// (0x00050b51) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x00053b80) cell_image_list_pane_g

0xcc02,	// (0x00050b5a) aid_size_cell_tb_trans_pane

0x0df2,	// (0x00044d4a) bg_tb_trans_pane

0xcc14,	// (0x00050b6c) grid_tb_trans_pane

0x9a50,	// (0x0004d9a8) bg_tb_trans_pane_g1

0x9a58,	// (0x0004d9b0) bg_tb_trans_pane_g2

0x9a60,	// (0x0004d9b8) bg_tb_trans_pane_g3

0x9a68,	// (0x0004d9c0) bg_tb_trans_pane_g4

0x9a70,	// (0x0004d9c8) bg_tb_trans_pane_g5

0x9a88,	// (0x0004d9e0) bg_tb_trans_pane_g6

0x9a90,	// (0x0004d9e8) bg_tb_trans_pane_g7

0x9a78,	// (0x0004d9d0) bg_tb_trans_pane_g8

0x9a80,	// (0x0004d9d8) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x00053b85) bg_tb_trans_pane_g

0xcc28,	// (0x00050b80) cell_toolbar_trans_pane_ParamLimits

0xcc28,	// (0x00050b80) cell_toolbar_trans_pane

0xc026,	// (0x0004ff7e) cell_toolbar_trans_pane_g1

0xbbf1,	// (0x0004fb49) list_form2_midp_pane_t1

0xbbff,	// (0x0004fb57) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x00053a2e) list_form2_midp_pane_t

0xbc0d,	// (0x0004fb65) scroll_pane_cp51_ParamLimits

0xbdc9,	// (0x0004fd21) form2_midp_wait_pane_g1

0xbdd2,	// (0x0004fd2a) form2_midp_wait_pane_g2

0xbddb,	// (0x0004fd33) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x00053a43) form2_midp_wait_pane_g

0x0a3c,	// (0x00044994) list_highlight_pane_cp21_ParamLimits

0xbe23,	// (0x0004fd7b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe32,	// (0x0004fd8a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x8559,	// (0x0004c4b1) list_single_2graphic_im_pane_ParamLimits

0x8559,	// (0x0004c4b1) list_single_2graphic_im_pane

0xcc4e,	// (0x00050ba6) list_single_2graphic_im_pane_g1_ParamLimits

0xcc4e,	// (0x00050ba6) list_single_2graphic_im_pane_g1

0xcc5f,	// (0x00050bb7) list_single_2graphic_im_pane_g2_ParamLimits

0xcc5f,	// (0x00050bb7) list_single_2graphic_im_pane_g2

0xcc6b,	// (0x00050bc3) list_single_2graphic_im_pane_g3_ParamLimits

0xcc6b,	// (0x00050bc3) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x00053b98) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x00053b98) list_single_2graphic_im_pane_g

0xcc8b,	// (0x00050be3) list_single_2graphic_im_pane_t1_ParamLimits

0xcc8b,	// (0x00050be3) list_single_2graphic_im_pane_t1

0xc6b5,	// (0x0005060d) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6b5,	// (0x0005060d) list_single_graphic_2heading_pane_fp

0x603c,	// (0x00049f94) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x603c,	// (0x00049f94) list_single_graphic_2heading_pane_fp_g1

0xc6cb,	// (0x00050623) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6cb,	// (0x00050623) list_single_graphic_2heading_pane_fp_g2

0x25d5,	// (0x0004652d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x25d5,	// (0x0004652d) list_single_graphic_2heading_pane_fp_g3

0xc7d9,	// (0x00050731) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc7d9,	// (0x00050731) list_single_graphic_2heading_pane_fp_g4

0xc6d7,	// (0x0005062f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6d7,	// (0x0005062f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x00053ac6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x00053ac6) list_single_graphic_2heading_pane_fp_g

0x61a5,	// (0x0004a0fd) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x61a5,	// (0x0004a0fd) list_single_graphic_2heading_pane_fp_t1

0x6074,	// (0x00049fcc) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6074,	// (0x00049fcc) list_single_graphic_2heading_pane_fp_t2

0x61bb,	// (0x0004a113) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x61bb,	// (0x0004a113) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x00053ba1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x00053ba1) list_single_graphic_2heading_pane_fp_t

0xc0b2,	// (0x0005000a) fep_hwr_write_pane_g5_ParamLimits

0xc0b2,	// (0x0005000a) fep_hwr_write_pane_g5

0xc0be,	// (0x00050016) fep_hwr_write_pane_g6_ParamLimits

0xc0be,	// (0x00050016) fep_hwr_write_pane_g6

0xc98f,	// (0x000508e7) eswt_shell_pane_ParamLimits

0x9adc,	// (0x0004da34) bg_popup_window_pane_cp18_ParamLimits

0xc9c0,	// (0x00050918) heading_pane_cp70

0xcac1,	// (0x00050a19) popup_eswt_tasktip_window_t1_ParamLimits

0x7edb,	// (0x0004be33) aid_touch_tab_arrow_left

0x7eea,	// (0x0004be42) aid_touch_tab_arrow_right

0x66f3,	// (0x0004a64b) title_pane_g3_ParamLimits

0x66f3,	// (0x0004a64b) title_pane_g3

0x0dba,	// (0x00044d12) set_value_pane_g1

0x7dbc,	// (0x0004bd14) popup_toolbar_trans_pane_ParamLimits

0xcc02,	// (0x00050b5a) aid_size_cell_tb_trans_pane_ParamLimits

0x0df2,	// (0x00044d4a) bg_tb_trans_pane_ParamLimits

0xcc14,	// (0x00050b6c) grid_tb_trans_pane_ParamLimits

0x0b66,	// (0x00044abe) cont_note_pane_ParamLimits

0x0b66,	// (0x00044abe) cont_note_pane

0x0ce6,	// (0x00044c3e) cont_snote2_single_text_pane_ParamLimits

0x0ce6,	// (0x00044c3e) cont_snote2_single_text_pane

0x0ce6,	// (0x00044c3e) cont_snote2_single_graphic_pane_ParamLimits

0x0ce6,	// (0x00044c3e) cont_snote2_single_graphic_pane

0xa0f6,	// (0x0004e04e) cont_note_wait_pane_ParamLimits

0xa0f6,	// (0x0004e04e) cont_note_wait_pane

0xa0f6,	// (0x0004e04e) cont_note_image_pane_ParamLimits

0xa0f6,	// (0x0004e04e) cont_note_image_pane

0xccbc,	// (0x00050c14) popup_note2_window_g1_ParamLimits

0xccbc,	// (0x00050c14) popup_note2_window_g1

0xcced,	// (0x00050c45) popup_note2_window_t1_ParamLimits

0xcced,	// (0x00050c45) popup_note2_window_t1

0xcd32,	// (0x00050c8a) popup_note2_window_t2_ParamLimits

0xcd32,	// (0x00050c8a) popup_note2_window_t2

0xcd77,	// (0x00050ccf) popup_note2_window_t3_ParamLimits

0xcd77,	// (0x00050ccf) popup_note2_window_t3

0xcdbc,	// (0x00050d14) popup_note2_window_t4_ParamLimits

0xcdbc,	// (0x00050d14) popup_note2_window_t4

0x0bea,	// (0x00044b42) popup_note2_window_t5_ParamLimits

0x0bea,	// (0x00044b42) popup_note2_window_t5

0x0004,

0xfc55,	// (0x00053bad) popup_note2_window_t_ParamLimits

0xfc55,	// (0x00053bad) popup_note2_window_t

0xcdeb,	// (0x00050d43) popup_note2_image_window_g1_ParamLimits

0xcdeb,	// (0x00050d43) popup_note2_image_window_g1

0xcdf7,	// (0x00050d4f) popup_note2_image_window_g2_ParamLimits

0xcdf7,	// (0x00050d4f) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x00053bb8) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x00053bb8) popup_note2_image_window_g

0xce09,	// (0x00050d61) popup_note2_image_window_t1_ParamLimits

0xce09,	// (0x00050d61) popup_note2_image_window_t1

0xce21,	// (0x00050d79) popup_note2_image_window_t2_ParamLimits

0xce21,	// (0x00050d79) popup_note2_image_window_t2

0xce39,	// (0x00050d91) popup_note2_image_window_t3_ParamLimits

0xce39,	// (0x00050d91) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x00053bbd) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x00053bbd) popup_note2_image_window_t

0xa104,	// (0x0004e05c) popup_note2_wait_window_g1_ParamLimits

0xa104,	// (0x0004e05c) popup_note2_wait_window_g1

0xa110,	// (0x0004e068) popup_note2_wait_window_g2_ParamLimits

0xa110,	// (0x0004e068) popup_note2_wait_window_g2

0xa11c,	// (0x0004e074) popup_note2_wait_window_g3_ParamLimits

0xa11c,	// (0x0004e074) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x00053776) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x00053776) popup_note2_wait_window_g

0xce55,	// (0x00050dad) popup_note2_wait_window_t1_ParamLimits

0xce55,	// (0x00050dad) popup_note2_wait_window_t1

0xce73,	// (0x00050dcb) popup_note2_wait_window_t2_ParamLimits

0xce73,	// (0x00050dcb) popup_note2_wait_window_t2

0xce91,	// (0x00050de9) popup_note2_wait_window_t3_ParamLimits

0xce91,	// (0x00050de9) popup_note2_wait_window_t3

0xcea3,	// (0x00050dfb) popup_note2_wait_window_t4_ParamLimits

0xcea3,	// (0x00050dfb) popup_note2_wait_window_t4

0x0003,

0xfc6c,	// (0x00053bc4) popup_note2_wait_window_t_ParamLimits

0xfc6c,	// (0x00053bc4) popup_note2_wait_window_t

0xceb5,	// (0x00050e0d) wait_bar2_pane_ParamLimits

0xceb5,	// (0x00050e0d) wait_bar2_pane

0xcecd,	// (0x00050e25) popup_snote2_single_text_window_g1_ParamLimits

0xcecd,	// (0x00050e25) popup_snote2_single_text_window_g1

0xcef5,	// (0x00050e4d) popup_snote2_single_text_window_t1_ParamLimits

0xcef5,	// (0x00050e4d) popup_snote2_single_text_window_t1

0xcf41,	// (0x00050e99) popup_snote2_single_text_window_t2_ParamLimits

0xcf41,	// (0x00050e99) popup_snote2_single_text_window_t2

0xcf8d,	// (0x00050ee5) popup_snote2_single_text_window_t3_ParamLimits

0xcf8d,	// (0x00050ee5) popup_snote2_single_text_window_t3

0xcfce,	// (0x00050f26) popup_snote2_single_text_window_t4_ParamLimits

0xcfce,	// (0x00050f26) popup_snote2_single_text_window_t4

0xd004,	// (0x00050f5c) popup_snote2_single_text_window_t5_ParamLimits

0xd004,	// (0x00050f5c) popup_snote2_single_text_window_t5

0x0004,

0xfc75,	// (0x00053bcd) popup_snote2_single_text_window_t_ParamLimits

0xfc75,	// (0x00053bcd) popup_snote2_single_text_window_t

0xd02f,	// (0x00050f87) popup_snote2_single_graphic_window_g1_ParamLimits

0xd02f,	// (0x00050f87) popup_snote2_single_graphic_window_g1

0xd057,	// (0x00050faf) popup_snote2_single_graphic_window_g2_ParamLimits

0xd057,	// (0x00050faf) popup_snote2_single_graphic_window_g2

0x0001,

0xfc80,	// (0x00053bd8) popup_snote2_single_graphic_window_g_ParamLimits

0xfc80,	// (0x00053bd8) popup_snote2_single_graphic_window_g

0xd07f,	// (0x00050fd7) popup_snote2_single_graphic_window_t1_ParamLimits

0xd07f,	// (0x00050fd7) popup_snote2_single_graphic_window_t1

0xd0cb,	// (0x00051023) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0cb,	// (0x00051023) popup_snote2_single_graphic_window_t2

0xcf8d,	// (0x00050ee5) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf8d,	// (0x00050ee5) popup_snote2_single_graphic_window_t3

0xcfce,	// (0x00050f26) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfce,	// (0x00050f26) popup_snote2_single_graphic_window_t4

0xd004,	// (0x00050f5c) popup_snote2_single_graphic_window_t5_ParamLimits

0xd004,	// (0x00050f5c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc85,	// (0x00053bdd) popup_snote2_single_graphic_window_t_ParamLimits

0xfc85,	// (0x00053bdd) popup_snote2_single_graphic_window_t

0xbaca,	// (0x0004fa22) clock_nsta_pane_cp2_t1

0xbaca,	// (0x0004fa22) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x00053a04) clock_nsta_pane_cp2_t

0x590c,	// (0x00049864) form_field_data_wide_pane_g1_ParamLimits

0x0e00,	// (0x00044d58) form_field_data_wide_pane_g2_ParamLimits

0x0e00,	// (0x00044d58) form_field_data_wide_pane_g2

0x0e0c,	// (0x00044d64) form_field_data_wide_pane_g3_ParamLimits

0x0e0c,	// (0x00044d64) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x000535a9) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x000535a9) form_field_data_wide_pane_g

0xb9a6,	// (0x0004f8fe) grid_touch_3_pane_ParamLimits

0xb9a6,	// (0x0004f8fe) grid_touch_3_pane

0xd117,	// (0x0005106f) cell_touch_3_pane_ParamLimits

0xd117,	// (0x0005106f) cell_touch_3_pane

0xc026,	// (0x0004ff7e) cell_touch_3_pane_g1

0xc026,	// (0x0004ff7e) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x00053a89) cell_touch_3_pane_g

0x0c1c,	// (0x00044b74) cont_query_data_pane

0x0c24,	// (0x00044b7c) cont_query_data_pane_cp1

0xd145,	// (0x0005109d) button_value_adjust_pane_cp7

0xd14d,	// (0x000510a5) query_popup_pane_cp3

0x12a5,	// (0x000451fd) bg_popup_sub_pane_cp22_ParamLimits

0x724a,	// (0x0004b1a2) navi_navi_volume_pane_cp2

0x7262,	// (0x0004b1ba) popup_side_volume_key_window_g2

0x726e,	// (0x0004b1c6) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0005363f) popup_side_volume_key_window_g

0x7288,	// (0x0004b1e0) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x00053646) popup_side_volume_key_window_t

0x74c8,	// (0x0004b420) popup_side_volume_key_window_ParamLimits

0x6d17,	// (0x0004ac6f) list_double_graphic_pane_g4_ParamLimits

0x6d17,	// (0x0004ac6f) list_double_graphic_pane_g4

0x8598,	// (0x0004c4f0) list_single_2heading_msg_pane_ParamLimits

0x8598,	// (0x0004c4f0) list_single_2heading_msg_pane

0x8b73,	// (0x0004cacb) list_single_2heading_msg_pane_g1_ParamLimits

0x8b73,	// (0x0004cacb) list_single_2heading_msg_pane_g1

0x6cb8,	// (0x0004ac10) list_single_2heading_msg_pane_g2_ParamLimits

0x6cb8,	// (0x0004ac10) list_single_2heading_msg_pane_g2

0x8b7f,	// (0x0004cad7) list_single_2heading_msg_pane_g3_ParamLimits

0x8b7f,	// (0x0004cad7) list_single_2heading_msg_pane_g3

0x8b8b,	// (0x0004cae3) list_single_2heading_msg_pane_g4_ParamLimits

0x8b8b,	// (0x0004cae3) list_single_2heading_msg_pane_g4

0x0003,

0xfc90,	// (0x00053be8) list_single_2heading_msg_pane_g_ParamLimits

0xfc90,	// (0x00053be8) list_single_2heading_msg_pane_g

0x61db,	// (0x0004a133) list_single_2heading_msg_pane_t1_ParamLimits

0x61db,	// (0x0004a133) list_single_2heading_msg_pane_t1

0x6203,	// (0x0004a15b) list_single_2heading_msg_pane_t2_ParamLimits

0x6203,	// (0x0004a15b) list_single_2heading_msg_pane_t2

0x6232,	// (0x0004a18a) list_single_2heading_msg_pane_t3_ParamLimits

0x6232,	// (0x0004a18a) list_single_2heading_msg_pane_t3

0x626b,	// (0x0004a1c3) list_single_2heading_msg_pane_t4_ParamLimits

0x626b,	// (0x0004a1c3) list_single_2heading_msg_pane_t4

0x0003,

0xfc99,	// (0x00053bf1) list_single_2heading_msg_pane_t_ParamLimits

0xfc99,	// (0x00053bf1) list_single_2heading_msg_pane_t

0x09ea,	// (0x00044942) title_pane_g4_ParamLimits

0x09ea,	// (0x00044942) title_pane_g4

0x6e8d,	// (0x0004ade5) title_pane_stacon_g3_ParamLimits

0x6e8d,	// (0x0004ade5) title_pane_stacon_g3

0xcc7f,	// (0x00050bd7) list_single_2graphic_im_pane_g4_ParamLimits

0xcc7f,	// (0x00050bd7) list_single_2graphic_im_pane_g4

0xab3d,	// (0x0004ea95) popup_side_volume_key_window_cp

0xb2fc,	// (0x0004f254) main_idle_act2_pane_t1

0x81db,	// (0x0004c133) toolbar_button_pane_g10

0x6cae,	// (0x0004ac06) popup_toolbar_window_cp1

0xbabb,	// (0x0004fa13) clock_nsta_pane_cp_t1

0xbabb,	// (0x0004fa13) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x000539ff) clock_nsta_pane_cp_t

0x724a,	// (0x0004b1a2) navi_navi_volume_pane_cp2_ParamLimits

0x7256,	// (0x0004b1ae) popup_side_volume_key_window_g1_ParamLimits

0x7262,	// (0x0004b1ba) popup_side_volume_key_window_g2_ParamLimits

0x726e,	// (0x0004b1c6) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0005363f) popup_side_volume_key_window_g_ParamLimits

0x87a8,	// (0x0004c700) fep_hwr_aid_pane

0x2e79,	// (0x00046dd1) bg_fep_hwr_top_pane_g4_ParamLimits

0xc082,	// (0x0004ffda) fep_hwr_top_pane_g1_ParamLimits

0xc094,	// (0x0004ffec) fep_hwr_top_pane_g2_ParamLimits

0x8861,	// (0x0004c7b9) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x00053a54) fep_hwr_top_pane_g_ParamLimits

0x8876,	// (0x0004c7ce) fep_hwr_top_text_pane_ParamLimits

0xa900,	// (0x0004e858) aid_touch_tab_arrow_arrow_2

0xa909,	// (0x0004e861) aid_touch_tab_arrow_left_2

0x87bc,	// (0x0004c714) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x87f3,	// (0x0004c74b) fep_hwr_prediction_pane

0xc1ed,	// (0x00050145) fep_vkb_prediction_pane

0xc2ea,	// (0x00050242) fep_vkb_side_pane_g3_ParamLimits

0xc2ea,	// (0x00050242) fep_vkb_side_pane_g3

0xc296,	// (0x000501ee) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc72b,	// (0x00050683) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc738,	// (0x00050690) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x00053afe) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd172,	// (0x000510ca) fep_hwr_prediction_pane_g1

0x8ba3,	// (0x0004cafb) fep_hwr_prediction_pane_g2

0x8bab,	// (0x0004cb03) fep_hwr_prediction_pane_g3

0x8bb3,	// (0x0004cb0b) fep_hwr_prediction_pane_g4

0x0003,

0xfca2,	// (0x00053bfa) fep_hwr_prediction_pane_g

0xd172,	// (0x000510ca) fep_vkb_prediction_pane_g1

0xd17c,	// (0x000510d4) fep_vkb_prediction_pane_g2

0xd184,	// (0x000510dc) fep_vkb_prediction_pane_g3

0xd18c,	// (0x000510e4) fep_vkb_prediction_pane_g4

0x0003,

0xfcab,	// (0x00053c03) fep_vkb_prediction_pane_g

0x84b5,	// (0x0004c40d) slider_set_pane_g3

0x84c9,	// (0x0004c421) slider_set_pane_g4

0x84e1,	// (0x0004c439) slider_set_pane_g5

0x84b5,	// (0x0004c40d) slider_set_pane_g6

0x84f7,	// (0x0004c44f) slider_set_pane_g7

0xaf8c,	// (0x0004eee4) slider_form_pane_g3

0xaf95,	// (0x0004eeed) slider_form_pane_g4

0xaf9d,	// (0x0004eef5) slider_form_pane_g5

0xaf8c,	// (0x0004eee4) slider_form_pane_g6

0xafa5,	// (0x0004eefd) slider_form_pane_g7

0xb5a8,	// (0x0004f500) slider_set_pane_vc_g3

0xb5b1,	// (0x0004f509) slider_set_pane_vc_g4

0xb5ba,	// (0x0004f512) slider_set_pane_vc_g5

0xb5a8,	// (0x0004f500) slider_set_pane_vc_g6

0xb5c3,	// (0x0004f51b) slider_set_pane_vc_g7

0xb779,	// (0x0004f6d1) slider_form_pane_vc_g1

0xb782,	// (0x0004f6da) slider_form_pane_vc_g2

0xb78b,	// (0x0004f6e3) slider_form_pane_vc_g3

0xb779,	// (0x0004f6d1) slider_form_pane_vc_g4

0xb794,	// (0x0004f6ec) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x000539d1) slider_form_pane_vc_g

0x09cc,	// (0x00044924) main_idle_act3_pane

0xd194,	// (0x000510ec) ai3_links_pane

0xd19d,	// (0x000510f5) popup_ai3_data_window_ParamLimits

0xd19d,	// (0x000510f5) popup_ai3_data_window

0x09cc,	// (0x00044924) grid_ai3_links_pane

0xd1b5,	// (0x0005110d) cell_ai3_links_pane_ParamLimits

0xd1b5,	// (0x0005110d) cell_ai3_links_pane

0xd1cd,	// (0x00051125) bg_popup_sub_pane_cp11

0xd1da,	// (0x00051132) cell_ai3_links_pane_g1

0x09cc,	// (0x00044924) bg_popup_sub_pane_cp12

0xd1ff,	// (0x00051157) heading_ai3_data_pane

0xd207,	// (0x0005115f) list_ai3_gene_pane

0xd213,	// (0x0005116b) popup_ai3_data_window_g1

0xd21b,	// (0x00051173) heading_ai3_data_pane_g1

0xd223,	// (0x0005117b) heading_ai3_data_pane_t1

0xd231,	// (0x00051189) list_double_ai3_gene_pane_ParamLimits

0xd231,	// (0x00051189) list_double_ai3_gene_pane

0xd23e,	// (0x00051196) list_single_ai3_gene_pane_ParamLimits

0xd23e,	// (0x00051196) list_single_ai3_gene_pane

0xbfeb,	// (0x0004ff43) list_highlight_pane_cp7_ParamLimits

0xbfeb,	// (0x0004ff43) list_highlight_pane_cp7

0xd24b,	// (0x000511a3) list_single_a13_gene_pane_t1_ParamLimits

0xd24b,	// (0x000511a3) list_single_a13_gene_pane_t1

0xd262,	// (0x000511ba) list_single_ai3_gene_pane_g1

0xd26b,	// (0x000511c3) list_single_ai3_gene_pane_g2

0x0001,

0xfcb4,	// (0x00053c0c) list_single_ai3_gene_pane_g

0xd273,	// (0x000511cb) list_double_ai3_gene_pane_g1_ParamLimits

0xd273,	// (0x000511cb) list_double_ai3_gene_pane_g1

0xd27f,	// (0x000511d7) list_double_ai3_gene_pane_t1_ParamLimits

0xd27f,	// (0x000511d7) list_double_ai3_gene_pane_t1

0xd29b,	// (0x000511f3) list_double_ai3_gene_pane_t2_ParamLimits

0xd29b,	// (0x000511f3) list_double_ai3_gene_pane_t2

0xd2b0,	// (0x00051208) list_double_ai3_gene_pane_t3_ParamLimits

0xd2b0,	// (0x00051208) list_double_ai3_gene_pane_t3

0x0002,

0xfcb9,	// (0x00053c11) list_double_ai3_gene_pane_t_ParamLimits

0xfcb9,	// (0x00053c11) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x61d1,	// (0x0004a129) aid_size_min_col_2

0xd15e,	// (0x000510b6) aid_size_min_msg_ParamLimits

0xd15e,	// (0x000510b6) aid_size_min_msg

0xc3ea,	// (0x00050342) fep_vkb_top_text_pane_g2_ParamLimits

0xc3ea,	// (0x00050342) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x00053a84) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x00053a84) fep_vkb_top_text_pane_g

0x09cc,	// (0x00044924) main_hc_apps_shell_pane

0xd2cd,	// (0x00051225) grid_hc_apps_pane_ParamLimits

0xd2cd,	// (0x00051225) grid_hc_apps_pane

0xd2df,	// (0x00051237) list_hc_apps_pane

0xd2e7,	// (0x0005123f) scroll_pane_cp37_ParamLimits

0xd2e7,	// (0x0005123f) scroll_pane_cp37

0xd2f3,	// (0x0005124b) cell_hc_apps_pane_ParamLimits

0xd2f3,	// (0x0005124b) cell_hc_apps_pane

0xd3a1,	// (0x000512f9) cell_hc_apps_pane_g1_ParamLimits

0xd3a1,	// (0x000512f9) cell_hc_apps_pane_g1

0xd3d1,	// (0x00051329) cell_hc_apps_pane_g2_ParamLimits

0xd3d1,	// (0x00051329) cell_hc_apps_pane_g2

0xd3ed,	// (0x00051345) cell_hc_apps_pane_g3_ParamLimits

0xd3ed,	// (0x00051345) cell_hc_apps_pane_g3

0x0002,

0xfcc0,	// (0x00053c18) cell_hc_apps_pane_g_ParamLimits

0xfcc0,	// (0x00053c18) cell_hc_apps_pane_g

0xd40f,	// (0x00051367) cell_hc_apps_pane_t1_ParamLimits

0xd40f,	// (0x00051367) cell_hc_apps_pane_t1

0x0b66,	// (0x00044abe) grid_highlight_pane_cp10_ParamLimits

0x0b66,	// (0x00044abe) grid_highlight_pane_cp10

0xd44f,	// (0x000513a7) list_single_hc_apps_pane_ParamLimits

0xd44f,	// (0x000513a7) list_single_hc_apps_pane

0xd4b2,	// (0x0005140a) list_single_hc_apps_pane_g1

0x8bbb,	// (0x0004cb13) list_single_hc_apps_pane_g2

0x0001,

0xfcc7,	// (0x00053c1f) list_single_hc_apps_pane_g

0x8bd4,	// (0x0004cb2c) list_single_hc_apps_pane_g2_copy1

0x6290,	// (0x0004a1e8) list_single_hc_apps_pane_t1

0x0a3c,	// (0x00044994) bg_set_opt_pane_cp_ParamLimits

0x67a3,	// (0x0004a6fb) setting_slider_pane_t1_ParamLimits

0x67bc,	// (0x0004a714) setting_slider_pane_t2_ParamLimits

0x67d6,	// (0x0004a72e) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00053491) setting_slider_pane_t_ParamLimits

0x67ee,	// (0x0004a746) slider_set_pane_ParamLimits

0x7788,	// (0x0004b6e0) control_pane_g5_ParamLimits

0x7788,	// (0x0004b6e0) control_pane_g5

0xaddf,	// (0x0004ed37) slider_set_pane_g1_ParamLimits

0x84a9,	// (0x0004c401) slider_set_pane_g2_ParamLimits

0x84b5,	// (0x0004c40d) slider_set_pane_g3_ParamLimits

0x84c9,	// (0x0004c421) slider_set_pane_g4_ParamLimits

0x84e1,	// (0x0004c439) slider_set_pane_g5_ParamLimits

0x84b5,	// (0x0004c40d) slider_set_pane_g6_ParamLimits

0x84f7,	// (0x0004c44f) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00053892) slider_set_pane_g_ParamLimits

0x1553,	// (0x000454ab) navi_icon_text_pane_ParamLimits

0x7e9c,	// (0x0004bdf4) aid_fill_nsta_2_ParamLimits

0x7edb,	// (0x0004be33) aid_touch_tab_arrow_left_ParamLimits

0x7eea,	// (0x0004be42) aid_touch_tab_arrow_right_ParamLimits

0x7f57,	// (0x0004beaf) clock_nsta_pane_ParamLimits

0xa8e2,	// (0x0004e83a) navi_icon_pane_g1_ParamLimits

0xa8ee,	// (0x0004e846) navi_text_pane_t1_ParamLimits

0xbbcb,	// (0x0004fb23) navi_icon_text_pane_g1_ParamLimits

0xbbd7,	// (0x0004fb2f) navi_icon_text_pane_t1_ParamLimits

0xd4b2,	// (0x0005140a) list_single_hc_apps_pane_g1_ParamLimits

0x8bbb,	// (0x0004cb13) list_single_hc_apps_pane_g2_ParamLimits

0xfcc7,	// (0x00053c1f) list_single_hc_apps_pane_g_ParamLimits

0x8bd4,	// (0x0004cb2c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6290,	// (0x0004a1e8) list_single_hc_apps_pane_t1_ParamLimits

0x65e7,	// (0x0004a53f) popup_toolbar2_fixed_window_ParamLimits

0x65e7,	// (0x0004a53f) popup_toolbar2_fixed_window

0x7db2,	// (0x0004bd0a) popup_toolbar2_float_window

0x09cc,	// (0x00044924) bg_popup_sub_pane_cp27

0xd4cb,	// (0x00051423) grid_toolbar2_float_pane

0x09cc,	// (0x00044924) bg_popup_sub_pane_cp26

0xd4cb,	// (0x00051423) grid_toolbar2_fixed_pane

0xd4d3,	// (0x0005142b) cell_toolbar2_fixed_pane_ParamLimits

0xd4d3,	// (0x0005142b) cell_toolbar2_fixed_pane

0xd4e3,	// (0x0005143b) cell_toolbar2_fixed_pane_g1

0x99d0,	// (0x0004d928) toolbar2_fixed_button_pane

0x9a50,	// (0x0004d9a8) toolbar2_fixed_button_pane_g1

0x9a58,	// (0x0004d9b0) toolbar2_fixed_button_pane_g2

0x9a60,	// (0x0004d9b8) toolbar2_fixed_button_pane_g3

0x9a68,	// (0x0004d9c0) toolbar2_fixed_button_pane_g4

0x9a70,	// (0x0004d9c8) toolbar2_fixed_button_pane_g5

0x9a78,	// (0x0004d9d0) toolbar2_fixed_button_pane_g6

0x9a80,	// (0x0004d9d8) toolbar2_fixed_button_pane_g7

0x9a88,	// (0x0004d9e0) toolbar2_fixed_button_pane_g8

0x9a90,	// (0x0004d9e8) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00053794) toolbar2_fixed_button_pane_g

0xd4ec,	// (0x00051444) cell_toolbar2_float_pane_ParamLimits

0xd4ec,	// (0x00051444) cell_toolbar2_float_pane

0xd4fd,	// (0x00051455) cell_toolbar2_float_pane_g1

0x99d0,	// (0x0004d928) toolbar2_fixed_button_pane_cp

0xc154,	// (0x000500ac) fep_vkb_accented_list_pane_ParamLimits

0xc154,	// (0x000500ac) fep_vkb_accented_list_pane

0x89c4,	// (0x0004c91c) bg_popup_fep_shadow_pane_g9

0x16ae,	// (0x00045606) bg_popup_fep_shadow_pane_cp3

0x0f0b,	// (0x00044e63) list_accented_list_pane

0xd506,	// (0x0005145e) list_single_accented_list_pane_ParamLimits

0xd506,	// (0x0005145e) list_single_accented_list_pane

0x16ae,	// (0x00045606) list_highlight_pane_cp10

0xd517,	// (0x0005146f) list_single_accented_list_pane_t1

0x7d02,	// (0x0004bc5a) popup_slider_window_ParamLimits

0x7d02,	// (0x0004bc5a) popup_slider_window

0xd155,	// (0x000510ad) aid_indentation_list_msg

0xd5d5,	// (0x0005152d) bg_popup_window_pane_cp19

0xd63d,	// (0x00051595) popup_slider_window_g1

0xd659,	// (0x000515b1) popup_slider_window_g2

0xd675,	// (0x000515cd) popup_slider_window_g3

0x0005,

0xfccc,	// (0x00053c24) popup_slider_window_g

0xd6db,	// (0x00051633) popup_slider_window_t1

0xd74f,	// (0x000516a7) small_volume_slider_vertical_pane

0xc026,	// (0x0004ff7e) small_volume_slider_vertical_pane_g1

0xc026,	// (0x0004ff7e) small_volume_slider_vertical_pane_g2

0xd76b,	// (0x000516c3) small_volume_slider_vertical_pane_g3

0x0002,

0xfcde,	// (0x00053c36) small_volume_slider_vertical_pane_g

0x63b7,	// (0x0004a30f) area_side_right_pane_ParamLimits

0x63b7,	// (0x0004a30f) area_side_right_pane

0x8bf0,	// (0x0004cb48) aid_size_side_button_ParamLimits

0x8bf0,	// (0x0004cb48) aid_size_side_button

0x8c04,	// (0x0004cb5c) grid_sctrl_middle_pane_ParamLimits

0x8c04,	// (0x0004cb5c) grid_sctrl_middle_pane

0x8c23,	// (0x0004cb7b) sctrl_sk_bottom_pane

0x8c34,	// (0x0004cb8c) sctrl_sk_top_pane

0x8c46,	// (0x0004cb9e) aid_touch_sctrl_top

0x0b66,	// (0x00044abe) bg_sctrl_sk_pane_ParamLimits

0x0b66,	// (0x00044abe) bg_sctrl_sk_pane

0x8c53,	// (0x0004cbab) sctrl_sk_top_pane_g1

0x8c60,	// (0x0004cbb8) sctrl_sk_top_pane_t1

0x8c46,	// (0x0004cb9e) aid_touch_sctrl_bottom

0x0b66,	// (0x00044abe) bg_sctrl_sk_pane_cp_ParamLimits

0x0b66,	// (0x00044abe) bg_sctrl_sk_pane_cp

0x8c7b,	// (0x0004cbd3) sctrl_sk_bottom_pane_g1

0x8c60,	// (0x0004cbb8) sctrl_sk_bottom_pane_t1

0x8c84,	// (0x0004cbdc) cell_sctrl_middle_pane_ParamLimits

0x8c84,	// (0x0004cbdc) cell_sctrl_middle_pane

0x8c9f,	// (0x0004cbf7) aid_touch_sctrl_middle_ParamLimits

0x8c9f,	// (0x0004cbf7) aid_touch_sctrl_middle

0x0df2,	// (0x00044d4a) bg_sctrl_middle_pane_ParamLimits

0x0df2,	// (0x00044d4a) bg_sctrl_middle_pane

0xc296,	// (0x000501ee) cell_sctrl_middle_pane_g1_ParamLimits

0xc296,	// (0x000501ee) cell_sctrl_middle_pane_g1

0x8cb1,	// (0x0004cc09) cell_sctrl_middle_pane_g2_ParamLimits

0x8cb1,	// (0x0004cc09) cell_sctrl_middle_pane_g2

0x0001,

0xfcea,	// (0x00053c42) cell_sctrl_middle_pane_g_ParamLimits

0xfcea,	// (0x00053c42) cell_sctrl_middle_pane_g

0x9a50,	// (0x0004d9a8) bg_sctrl_middle_pane_g1

0x9a58,	// (0x0004d9b0) bg_sctrl_middle_pane_g2

0x9a60,	// (0x0004d9b8) bg_sctrl_middle_pane_g3

0x9a68,	// (0x0004d9c0) bg_sctrl_middle_pane_g4

0x9a70,	// (0x0004d9c8) bg_sctrl_middle_pane_g5

0x9a78,	// (0x0004d9d0) bg_sctrl_middle_pane_g6

0x9a80,	// (0x0004d9d8) bg_sctrl_middle_pane_g7

0x9a88,	// (0x0004d9e0) bg_sctrl_middle_pane_g8

0x0007,

0xfcef,	// (0x00053c47) bg_sctrl_middle_pane_g

0x9a90,	// (0x0004d9e8) bg_sctrl_middle_pane_g8_copy1

0x9a50,	// (0x0004d9a8) bg_sctrl_sk_pane_g1

0x9a58,	// (0x0004d9b0) bg_sctrl_sk_pane_g2

0x9a60,	// (0x0004d9b8) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00053794) bg_sctrl_sk_pane_g

0x0d34,	// (0x00044c8c) aid_size_touch_scroll_bar

0x9a68,	// (0x0004d9c0) bg_sctrl_sk_pane_g4

0x9a70,	// (0x0004d9c8) bg_sctrl_sk_pane_g5

0x9a78,	// (0x0004d9d0) bg_sctrl_sk_pane_g6

0x9a80,	// (0x0004d9d8) bg_sctrl_sk_pane_g7

0x9a88,	// (0x0004d9e0) bg_sctrl_sk_pane_g8

0x9a90,	// (0x0004d9e8) bg_sctrl_sk_pane_g9

0x796b,	// (0x0004b8c3) popup_fep_china_hwr2_fs_candidate_window

0x7975,	// (0x0004b8cd) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7975,	// (0x0004b8cd) popup_fep_china_hwr2_fs_control_window

0xc296,	// (0x000501ee) sctrl_sk_top_pane_g2

0x0001,

0xfce5,	// (0x00053c3d) sctrl_sk_top_pane_g

0xd774,	// (0x000516cc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd774,	// (0x000516cc) aid_fep_china_hwr2_fs_cell

0xd786,	// (0x000516de) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd786,	// (0x000516de) bg_popup_fep_shadow_pane_cp4

0xd79d,	// (0x000516f5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd79d,	// (0x000516f5) bg_popup_fep_shadow_pane_cp5

0xd7af,	// (0x00051707) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7af,	// (0x00051707) popup_fep_china_hwr2_fs_control_bar_grid

0xd7bf,	// (0x00051717) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7c7,	// (0x0005171f) aid_fep_china_hwr2_fs_candi_cell

0x09cc,	// (0x00044924) bg_popup_fep_shadow_pane_cp6

0xd7d1,	// (0x00051729) popup_fep_china_hwr2_fs_candidate_grid

0xd7db,	// (0x00051733) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7db,	// (0x00051733) cell_fep_china_hwr2_fs_funtion_grid

0xc026,	// (0x0004ff7e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7f3,	// (0x0005174b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7f3,	// (0x0005174b) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd801,	// (0x00051759) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd801,	// (0x00051759) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd00,	// (0x00053c58) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd00,	// (0x00053c58) cell_fep_china_hwr2_fs_funtion_grid_g

0xd817,	// (0x0005176f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd817,	// (0x0005176f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd82c,	// (0x00051784) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd82c,	// (0x00051784) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd05,	// (0x00053c5d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd05,	// (0x00053c5d) cell_fep_china_hwr2_fs_funtion_grid_t

0xd848,	// (0x000517a0) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd850,	// (0x000517a8) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd858,	// (0x000517b0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0a,	// (0x00053c62) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd860,	// (0x000517b8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd860,	// (0x000517b8) cell_fep_china_hwr2_fs_candidate_grid

0xd879,	// (0x000517d1) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd881,	// (0x000517d9) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc026,	// (0x0004ff7e) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc026,	// (0x0004ff7e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x00053a89) cell_fep_china_hwr2_fs_candidate_grid_g

0xd889,	// (0x000517e1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7f6a,	// (0x0004bec2) clock_nsta_pane_cp_24_ParamLimits

0x7f6a,	// (0x0004bec2) clock_nsta_pane_cp_24

0x7fe8,	// (0x0004bf40) indicator_nsta_pane_cp_24_ParamLimits

0x7fe8,	// (0x0004bf40) indicator_nsta_pane_cp_24

0xa75e,	// (0x0004e6b6) heading_pane_g1

0x0001,

0xf8a1,	// (0x000537f9) heading_pane_g

0xb145,	// (0x0004f09d) grid_sct_catagory_button_pane

0xb175,	// (0x0004f0cd) scroll_pane_cp5_ParamLimits

0xbc19,	// (0x0004fb71) button_value_adjust_pane_cp5_ParamLimits

0xbc19,	// (0x0004fb71) button_value_adjust_pane_cp5

0xbcf8,	// (0x0004fc50) form2_midp_time_pane_ParamLimits

0xd897,	// (0x000517ef) cell_sct_catagory_button_pane_ParamLimits

0xd897,	// (0x000517ef) cell_sct_catagory_button_pane

0xbfeb,	// (0x0004ff43) bg_button_pane_cp01_ParamLimits

0xbfeb,	// (0x0004ff43) bg_button_pane_cp01

0xc026,	// (0x0004ff7e) cell_sct_catagory_button_pane_g1

0x7d41,	// (0x0004bc99) popup_tb_extension_window

0xd8a9,	// (0x00051801) aid_size_cell_ext_ParamLimits

0xd8a9,	// (0x00051801) aid_size_cell_ext

0x0b66,	// (0x00044abe) bg_tb_trans_pane_cp1_ParamLimits

0x0b66,	// (0x00044abe) bg_tb_trans_pane_cp1

0xd8c9,	// (0x00051821) grid_tb_ext_pane_ParamLimits

0xd8c9,	// (0x00051821) grid_tb_ext_pane

0xd8f9,	// (0x00051851) cell_tb_ext_pane_ParamLimits

0xd8f9,	// (0x00051851) cell_tb_ext_pane

0xd910,	// (0x00051868) cell_tb_ext_pane_g1_ParamLimits

0xd910,	// (0x00051868) cell_tb_ext_pane_g1

0xd92d,	// (0x00051885) cell_tb_ext_pane_t1

0x0b66,	// (0x00044abe) list_highlight_pane_cp11_ParamLimits

0x0b66,	// (0x00044abe) list_highlight_pane_cp11

0x6606,	// (0x0004a55e) popup_uni_indicator_window_ParamLimits

0x6606,	// (0x0004a55e) popup_uni_indicator_window

0x0df2,	// (0x00044d4a) bg_popup_sub_pane_cp14

0xd949,	// (0x000518a1) list_uniindi_pane

0xd955,	// (0x000518ad) uniindi_top_pane

0x0b66,	// (0x00044abe) bg_uniindi_top_pane

0xd974,	// (0x000518cc) uniindi_top_pane_g1

0xd98a,	// (0x000518e2) uniindi_top_pane_g2

0x0003,

0xfd11,	// (0x00053c69) uniindi_top_pane_g

0xd9b4,	// (0x0005190c) uniindi_top_pane_t1

0xd9de,	// (0x00051936) list_single_uniindi_pane_ParamLimits

0xd9de,	// (0x00051936) list_single_uniindi_pane

0xc026,	// (0x0004ff7e) bg_uniindi_top_pane_g1

0xd9f1,	// (0x00051949) list_single_uniindi_pane_g1

0xda04,	// (0x0005195c) list_single_uniindi_pane_t1

0x09cc,	// (0x00044924) control_bg_pane

0xda29,	// (0x00051981) bg_sctrl_sk_pane_cp1

0xda32,	// (0x0005198a) bg_sctrl_sk_pane_cp2

0xda3b,	// (0x00051993) control_bg_pane_g1

0xda44,	// (0x0005199c) control_bg_pane_g2

0x0001,

0xfd1a,	// (0x00053c72) control_bg_pane_g

0xba5f,	// (0x0004f9b7) cell_indicator_nsta_pane_g1_ParamLimits

0xba6d,	// (0x0004f9c5) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x000539ed) cell_indicator_nsta_pane_g_ParamLimits

0x6012,	// (0x00049f6a) form2_midp_time_pane_t1_ParamLimits

0x0ce6,	// (0x00044c3e) main_idle_act4_pane_ParamLimits

0x0ce6,	// (0x00044c3e) main_idle_act4_pane

0x7d41,	// (0x0004bc99) popup_tb_extension_window_ParamLimits

0xd8e9,	// (0x00051841) tb_ext_find_pane_ParamLimits

0xd8e9,	// (0x00051841) tb_ext_find_pane

0xda4d,	// (0x000519a5) ai_gene_pane_1_cp1

0x172f,	// (0x00045687) ai_gene_pane_2_cp1

0xda55,	// (0x000519ad) list_single_idle_plugin_calendar_pane

0xda5e,	// (0x000519b6) list_single_idle_plugin_notification_pane

0xda67,	// (0x000519bf) list_single_idle_plugin_player_pane

0xda70,	// (0x000519c8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda70,	// (0x000519c8) list_single_idle_plugin_shortcut_pane

0xda92,	// (0x000519ea) main_idle_act4_pane_t1

0xdaa4,	// (0x000519fc) main_idle_act4_pane_t2

0x0001,

0xfd1f,	// (0x00053c77) main_idle_act4_pane_t

0xdab6,	// (0x00051a0e) middle_sk_idle_act4_pane_ParamLimits

0xdab6,	// (0x00051a0e) middle_sk_idle_act4_pane

0xdacc,	// (0x00051a24) popup_clock_digital_analogue_window_cp2

0xdae6,	// (0x00051a3e) shortcut_wheel_idle_act4_pane_ParamLimits

0xdae6,	// (0x00051a3e) shortcut_wheel_idle_act4_pane

0xc026,	// (0x0004ff7e) shortcut_wheel_idle_act4_pane_g1

0xc026,	// (0x0004ff7e) shortcut_wheel_idle_act4_pane_g2

0xc026,	// (0x0004ff7e) shortcut_wheel_idle_act4_pane_g3

0xc026,	// (0x0004ff7e) shortcut_wheel_idle_act4_pane_g4

0xc026,	// (0x0004ff7e) shortcut_wheel_idle_act4_pane_g5

0xdafa,	// (0x00051a52) shortcut_wheel_idle_act4_pane_g6

0xdb02,	// (0x00051a5a) shortcut_wheel_idle_act4_pane_g7

0xdb0a,	// (0x00051a62) shortcut_wheel_idle_act4_pane_g8

0xdb12,	// (0x00051a6a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd24,	// (0x00053c7c) shortcut_wheel_idle_act4_pane_g

0xc296,	// (0x000501ee) middle_sk_idle_act4_pane_g1_ParamLimits

0xc296,	// (0x000501ee) middle_sk_idle_act4_pane_g1

0xdb76,	// (0x00051ace) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb76,	// (0x00051ace) middle_sk_idle_act4_pane_g2

0x0001,

0xfd47,	// (0x00053c9f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd47,	// (0x00053c9f) middle_sk_idle_act4_pane_g

0xdb82,	// (0x00051ada) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb82,	// (0x00051ada) middle_sk_idle_act4_pane_t1

0xdb9f,	// (0x00051af7) grid_ai_shortcut_pane_ParamLimits

0xdb9f,	// (0x00051af7) grid_ai_shortcut_pane

0xdbb8,	// (0x00051b10) list_highlight_pane_cp16_ParamLimits

0xdbb8,	// (0x00051b10) list_highlight_pane_cp16

0xdbc5,	// (0x00051b1d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbc5,	// (0x00051b1d) list_single_idle_plugin_shortcut_pane_g1

0xdbd1,	// (0x00051b29) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbd1,	// (0x00051b29) list_single_idle_plugin_shortcut_pane_g2

0xdbe9,	// (0x00051b41) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbe9,	// (0x00051b41) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4c,	// (0x00053ca4) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4c,	// (0x00053ca4) list_single_idle_plugin_shortcut_pane_g

0xdbfc,	// (0x00051b54) cell_ai_shortcut_pane_ParamLimits

0xdbfc,	// (0x00051b54) cell_ai_shortcut_pane

0xdc20,	// (0x00051b78) cell_ai_shortcut_pane_g1_ParamLimits

0xdc20,	// (0x00051b78) cell_ai_shortcut_pane_g1

0xda4d,	// (0x000519a5) ai_gene_pane_1_cp2

0xdc42,	// (0x00051b9a) ai_gene_pane_2_cp2

0xdc4a,	// (0x00051ba2) list_highlight_pane_cp15

0xdc53,	// (0x00051bab) list_single_idle_plugin_calendar_pane_g1

0xdc4a,	// (0x00051ba2) list_highlight_pane_cp17

0xdc5b,	// (0x00051bb3) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc63,	// (0x00051bbb) list_single_idle_plugin_player_pane_g1

0xb39e,	// (0x0004f2f6) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd53,	// (0x00053cab) list_single_idle_plugin_player_pane_g

0xdc6b,	// (0x00051bc3) list_single_idle_plugin_player_pane_t1

0xdc79,	// (0x00051bd1) list_single_idle_plugin_player_pane_t2

0xdc87,	// (0x00051bdf) list_single_idle_plugin_player_pane_t3

0xdc95,	// (0x00051bed) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd58,	// (0x00053cb0) list_single_idle_plugin_player_pane_t

0xdca3,	// (0x00051bfb) wait_bar_pane_cp15

0xdcab,	// (0x00051c03) grid_ai_notification_pane

0xb39e,	// (0x0004f2f6) list_single_idle_plugin_notification_pane_g1

0xdcb4,	// (0x00051c0c) cell_ai_notification_pane_ParamLimits

0xdcb4,	// (0x00051c0c) cell_ai_notification_pane

0xdcc1,	// (0x00051c19) cell_ai_notification_pane_g1

0xdcc9,	// (0x00051c21) cell_ai_notification_pane_t1

0xdcd7,	// (0x00051c2f) tb_ext_find_button_pane

0xdcdf,	// (0x00051c37) tb_ext_find_pane_g1

0xdce7,	// (0x00051c3f) tb_ext_find_pane_t1

0x1244,	// (0x0004519c) tb_ext_find_button_pane_g1

0xdcf5,	// (0x00051c4d) tb_ext_find_button_pane_g2

0x0001,

0xfd61,	// (0x00053cb9) tb_ext_find_button_pane_g

0xda92,	// (0x000519ea) main_idle_act4_pane_t1_ParamLimits

0xdaa4,	// (0x000519fc) main_idle_act4_pane_t2_ParamLimits

0xfd1f,	// (0x00053c77) main_idle_act4_pane_t_ParamLimits

0xdacc,	// (0x00051a24) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdada,	// (0x00051a32) sat_plugin_idle_act4_pane_ParamLimits

0xdada,	// (0x00051a32) sat_plugin_idle_act4_pane

0xdcfe,	// (0x00051c56) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcfe,	// (0x00051c56) sat_plugin_idle_act4_pane_t1

0xdd11,	// (0x00051c69) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd11,	// (0x00051c69) sat_plugin_idle_act4_pane_t2

0xdd24,	// (0x00051c7c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd24,	// (0x00051c7c) sat_plugin_idle_act4_pane_t3

0xdd37,	// (0x00051c8f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd37,	// (0x00051c8f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd66,	// (0x00053cbe) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd66,	// (0x00053cbe) sat_plugin_idle_act4_pane_t

0x654f,	// (0x0004a4a7) popup_battery_window_ParamLimits

0x654f,	// (0x0004a4a7) popup_battery_window

0x0b66,	// (0x00044abe) bg_popup_sub_pane_cp25_ParamLimits

0x0b66,	// (0x00044abe) bg_popup_sub_pane_cp25

0xdd4a,	// (0x00051ca2) popup_battery_window_g1_ParamLimits

0xdd4a,	// (0x00051ca2) popup_battery_window_g1

0xdd56,	// (0x00051cae) popup_battery_window_t1_ParamLimits

0xdd56,	// (0x00051cae) popup_battery_window_t1

0xdd68,	// (0x00051cc0) popup_battery_window_t2_ParamLimits

0xdd68,	// (0x00051cc0) popup_battery_window_t2

0x0001,

0xfd6f,	// (0x00053cc7) popup_battery_window_t_ParamLimits

0xfd6f,	// (0x00053cc7) popup_battery_window_t

0x751c,	// (0x0004b474) midp_canvas_pane_ParamLimits

0x7595,	// (0x0004b4ed) midp_keypad_pane_ParamLimits

0x7595,	// (0x0004b4ed) midp_keypad_pane

0x0f34,	// (0x00044e8c) main_midp_pane_ParamLimits

0xbad9,	// (0x0004fa31) signal_pane_g2_cp_ParamLimits

0xdd85,	// (0x00051cdd) aid_size_cell_midp_keypad_ParamLimits

0xdd85,	// (0x00051cdd) aid_size_cell_midp_keypad

0xdd9f,	// (0x00051cf7) midp_keyp_game_grid_pane_ParamLimits

0xdd9f,	// (0x00051cf7) midp_keyp_game_grid_pane

0xddbf,	// (0x00051d17) midp_keyp_rocker_pane_ParamLimits

0xddbf,	// (0x00051d17) midp_keyp_rocker_pane

0xddf8,	// (0x00051d50) midp_keyp_sk_left_pane_ParamLimits

0xddf8,	// (0x00051d50) midp_keyp_sk_left_pane

0xde52,	// (0x00051daa) midp_keyp_sk_right_pane_ParamLimits

0xde52,	// (0x00051daa) midp_keyp_sk_right_pane

0x09cc,	// (0x00044924) bg_button_pane_cp03

0xdeac,	// (0x00051e04) midp_keyp_sk_left_pane_g1

0x09cc,	// (0x00044924) bg_button_pane_cp04

0xdeac,	// (0x00051e04) midp_keyp_sk_right_pane_g1

0xc026,	// (0x0004ff7e) midp_keyp_rocker_pane_g1

0xdeb5,	// (0x00051e0d) keyp_game_cell_pane_ParamLimits

0xdeb5,	// (0x00051e0d) keyp_game_cell_pane

0x09cc,	// (0x00044924) bg_button_pane_cp02

0xdec8,	// (0x00051e20) keyp_game_cell_pane_g1

0x6585,	// (0x0004a4dd) popup_fep_vkb2_window_ParamLimits

0x6585,	// (0x0004a4dd) popup_fep_vkb2_window

0x8ccf,	// (0x0004cc27) aid_size_cell_vkb2_ParamLimits

0x8ccf,	// (0x0004cc27) aid_size_cell_vkb2

0x8d1b,	// (0x0004cc73) popup_fep_vkb2_window_g1_ParamLimits

0x8d1b,	// (0x0004cc73) popup_fep_vkb2_window_g1

0x8d63,	// (0x0004ccbb) vkb2_area_bottom_pane_ParamLimits

0x8d63,	// (0x0004ccbb) vkb2_area_bottom_pane

0x8daf,	// (0x0004cd07) vkb2_area_keypad_pane_ParamLimits

0x8daf,	// (0x0004cd07) vkb2_area_keypad_pane

0x8df1,	// (0x0004cd49) vkb2_area_top_pane_ParamLimits

0x8df1,	// (0x0004cd49) vkb2_area_top_pane

0x8e70,	// (0x0004cdc8) vkb2_top_entry_pane_ParamLimits

0x8e70,	// (0x0004cdc8) vkb2_top_entry_pane

0x8e9a,	// (0x0004cdf2) vkb2_top_grid_left_pane_ParamLimits

0x8e9a,	// (0x0004cdf2) vkb2_top_grid_left_pane

0x8eb9,	// (0x0004ce11) vkb2_top_grid_right_pane_ParamLimits

0x8eb9,	// (0x0004ce11) vkb2_top_grid_right_pane

0x8ed8,	// (0x0004ce30) vkb2_cell_keypad_pane_ParamLimits

0x8ed8,	// (0x0004ce30) vkb2_cell_keypad_pane

0x8fa9,	// (0x0004cf01) vkb2_area_bottom_grid_pane_ParamLimits

0x8fa9,	// (0x0004cf01) vkb2_area_bottom_grid_pane

0x8fcf,	// (0x0004cf27) vkb2_area_bottom_pane_g1_ParamLimits

0x8fcf,	// (0x0004cf27) vkb2_area_bottom_pane_g1

0x8ff3,	// (0x0004cf4b) vkb2_area_bottom_pane_g2_ParamLimits

0x8ff3,	// (0x0004cf4b) vkb2_area_bottom_pane_g2

0x9021,	// (0x0004cf79) vkb2_area_bottom_pane_g3_ParamLimits

0x9021,	// (0x0004cf79) vkb2_area_bottom_pane_g3

0x0002,

0xfd74,	// (0x00053ccc) vkb2_area_bottom_pane_g_ParamLimits

0xfd74,	// (0x00053ccc) vkb2_area_bottom_pane_g

0x9082,	// (0x0004cfda) vkb2_top_cell_left_pane_ParamLimits

0x9082,	// (0x0004cfda) vkb2_top_cell_left_pane

0xded9,	// (0x00051e31) vkb2_top_entry_pane_g1_ParamLimits

0xded9,	// (0x00051e31) vkb2_top_entry_pane_g1

0xdee7,	// (0x00051e3f) vkb2_top_entry_pane_t1_ParamLimits

0xdee7,	// (0x00051e3f) vkb2_top_entry_pane_t1

0xdf19,	// (0x00051e71) vkb2_top_entry_pane_t2_ParamLimits

0xdf19,	// (0x00051e71) vkb2_top_entry_pane_t2

0xdf4b,	// (0x00051ea3) vkb2_top_entry_pane_t3_ParamLimits

0xdf4b,	// (0x00051ea3) vkb2_top_entry_pane_t3

0x0002,

0xfd7b,	// (0x00053cd3) vkb2_top_entry_pane_t_ParamLimits

0xfd7b,	// (0x00053cd3) vkb2_top_entry_pane_t

0x90cf,	// (0x0004d027) vkb2_top_grid_right_pane_g1_ParamLimits

0x90cf,	// (0x0004d027) vkb2_top_grid_right_pane_g1

0x90e5,	// (0x0004d03d) vkb2_top_grid_right_pane_g2_ParamLimits

0x90e5,	// (0x0004d03d) vkb2_top_grid_right_pane_g2

0x90fd,	// (0x0004d055) vkb2_top_grid_right_pane_g3_ParamLimits

0x90fd,	// (0x0004d055) vkb2_top_grid_right_pane_g3

0x9115,	// (0x0004d06d) vkb2_top_grid_right_pane_g4_ParamLimits

0x9115,	// (0x0004d06d) vkb2_top_grid_right_pane_g4

0x0003,

0xfd82,	// (0x00053cda) vkb2_top_grid_right_pane_g_ParamLimits

0xfd82,	// (0x00053cda) vkb2_top_grid_right_pane_g

0x912b,	// (0x0004d083) vkb2_top_cell_left_pane_g1

0x914d,	// (0x0004d0a5) vkb2_cell_keypad_pane_g1_ParamLimits

0x914d,	// (0x0004d0a5) vkb2_cell_keypad_pane_g1

0xdf6f,	// (0x00051ec7) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf6f,	// (0x00051ec7) vkb2_cell_keypad_pane_t1

0x915b,	// (0x0004d0b3) vkb2_cell_bottom_grid_pane_ParamLimits

0x915b,	// (0x0004d0b3) vkb2_cell_bottom_grid_pane

0x9194,	// (0x0004d0ec) vkb2_cell_bottom_grid_pane_g1

0xdb1a,	// (0x00051a72) aid_call2_pane_cp02

0xdb22,	// (0x00051a7a) aid_call_pane_cp02

0xdb2a,	// (0x00051a82) clock_digital_number_pane_cp10

0xdb32,	// (0x00051a8a) clock_digital_number_pane_cp11

0xdb3a,	// (0x00051a92) clock_digital_number_pane_cp12

0xdb42,	// (0x00051a9a) clock_digital_number_pane_cp13

0xdb4a,	// (0x00051aa2) clock_digital_separator_pane_cp10

0x1244,	// (0x0004519c) popup_clock_digital_analogue_window_cp2_g1

0x1244,	// (0x0004519c) popup_clock_digital_analogue_window_cp2_g2

0xdb52,	// (0x00051aaa) popup_clock_digital_analogue_window_cp2_g3

0x1244,	// (0x0004519c) popup_clock_digital_analogue_window_cp2_g4

0xdb52,	// (0x00051aaa) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd37,	// (0x00053c8f) popup_clock_digital_analogue_window_cp2_g

0xdb5a,	// (0x00051ab2) popup_clock_digital_analogue_window_cp2_t1

0xdb68,	// (0x00051ac0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd42,	// (0x00053c9a) popup_clock_digital_analogue_window_cp2_t

0xc026,	// (0x0004ff7e) clock_digital_number_pane_cp10_g1

0xc026,	// (0x0004ff7e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x00053a89) clock_digital_number_pane_cp10_g

0xc026,	// (0x0004ff7e) clock_digital_separator_pane_cp10_g1

0xc026,	// (0x0004ff7e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x00053a89) clock_digital_separator_pane_cp10_g

0xd996,	// (0x000518ee) uniindi_top_pane_g3

0xd9a7,	// (0x000518ff) uniindi_top_pane_g4

0x8f63,	// (0x0004cebb) vkb2_row_keypad_pane_ParamLimits

0x8f63,	// (0x0004cebb) vkb2_row_keypad_pane

0x91b4,	// (0x0004d10c) vkb2_cell_t_keypad_pane_ParamLimits

0x91b4,	// (0x0004d10c) vkb2_cell_t_keypad_pane

0x91c4,	// (0x0004d11c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x91c4,	// (0x0004d11c) vkb2_cell_t_keypad_pane_cp08

0x91d7,	// (0x0004d12f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x91d7,	// (0x0004d12f) vkb2_cell_t_keypad_pane_cp09

0x91eb,	// (0x0004d143) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x91eb,	// (0x0004d143) vkb2_cell_t_keypad_pane_cp01

0x91fc,	// (0x0004d154) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x91fc,	// (0x0004d154) vkb2_cell_t_keypad_pane_cp02

0x920d,	// (0x0004d165) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x920d,	// (0x0004d165) vkb2_cell_t_keypad_pane_cp03

0x921e,	// (0x0004d176) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x921e,	// (0x0004d176) vkb2_cell_t_keypad_pane_cp04

0x922f,	// (0x0004d187) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x922f,	// (0x0004d187) vkb2_cell_t_keypad_pane_cp05

0x9240,	// (0x0004d198) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9240,	// (0x0004d198) vkb2_cell_t_keypad_pane_cp06

0x9251,	// (0x0004d1a9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9251,	// (0x0004d1a9) vkb2_cell_t_keypad_pane_cp07

0x9262,	// (0x0004d1ba) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9262,	// (0x0004d1ba) vkb2_cell_t_keypad_pane_cp10

0xc296,	// (0x000501ee) vkb2_cell_t_keypad_pane_g1

0xdf86,	// (0x00051ede) vkb2_cell_t_keypad_pane_t1

0x09cc,	// (0x00044924) popup_grid_graphic2_window

0xdf98,	// (0x00051ef0) aid_size_cell_graphic2_ParamLimits

0xdf98,	// (0x00051ef0) aid_size_cell_graphic2

0xdfd0,	// (0x00051f28) bg_popup_window_pane_cp21_ParamLimits

0xdfd0,	// (0x00051f28) bg_popup_window_pane_cp21

0xdfde,	// (0x00051f36) graphic2_pages_pane_ParamLimits

0xdfde,	// (0x00051f36) graphic2_pages_pane

0xe024,	// (0x00051f7c) grid_graphic2_control_pane_ParamLimits

0xe024,	// (0x00051f7c) grid_graphic2_control_pane

0xe062,	// (0x00051fba) grid_graphic2_pane_ParamLimits

0xe062,	// (0x00051fba) grid_graphic2_pane

0xe0d6,	// (0x0005202e) cell_graphic2_pane

0x09cc,	// (0x00044924) main_comp_mode_pane

0xd207,	// (0x0005115f) list_ai3_gene_pane_ParamLimits

0xd5d5,	// (0x0005152d) bg_popup_window_pane_cp19_ParamLimits

0xd5e1,	// (0x00051539) bg_touch_area_indi_pane_ParamLimits

0xd5e1,	// (0x00051539) bg_touch_area_indi_pane

0xd5f7,	// (0x0005154f) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5f7,	// (0x0005154f) bg_touch_area_indi_pane_cp01

0xd60d,	// (0x00051565) bg_touch_area_indi_pane_cp02_ParamLimits

0xd60d,	// (0x00051565) bg_touch_area_indi_pane_cp02

0xd623,	// (0x0005157b) bg_touch_area_indi_pane_cp03_ParamLimits

0xd623,	// (0x0005157b) bg_touch_area_indi_pane_cp03

0xd63d,	// (0x00051595) popup_slider_window_g1_ParamLimits

0xd659,	// (0x000515b1) popup_slider_window_g2_ParamLimits

0xd675,	// (0x000515cd) popup_slider_window_g3_ParamLimits

0xfccc,	// (0x00053c24) popup_slider_window_g_ParamLimits

0xd6db,	// (0x00051633) popup_slider_window_t1_ParamLimits

0xd74f,	// (0x000516a7) small_volume_slider_vertical_pane_ParamLimits

0xe0d6,	// (0x0005202e) cell_graphic2_pane_ParamLimits

0xe125,	// (0x0005207d) bg_button_pane_cp10_ParamLimits

0xe125,	// (0x0005207d) bg_button_pane_cp10

0xe138,	// (0x00052090) bg_button_pane_cp11_ParamLimits

0xe138,	// (0x00052090) bg_button_pane_cp11

0xe14b,	// (0x000520a3) graphic2_pages_pane_g1_ParamLimits

0xe14b,	// (0x000520a3) graphic2_pages_pane_g1

0xe166,	// (0x000520be) graphic2_pages_pane_g2_ParamLimits

0xe166,	// (0x000520be) graphic2_pages_pane_g2

0x0001,

0xfd90,	// (0x00053ce8) graphic2_pages_pane_g_ParamLimits

0xfd90,	// (0x00053ce8) graphic2_pages_pane_g

0xe17e,	// (0x000520d6) graphic2_pages_pane_t1_ParamLimits

0xe17e,	// (0x000520d6) graphic2_pages_pane_t1

0xe196,	// (0x000520ee) cell_graphic2_control_pane_ParamLimits

0xe196,	// (0x000520ee) cell_graphic2_control_pane

0xe1b4,	// (0x0005210c) cell_graphic2_pane_g1_ParamLimits

0xe1b4,	// (0x0005210c) cell_graphic2_pane_g1

0xe1c1,	// (0x00052119) cell_graphic2_pane_g2_ParamLimits

0xe1c1,	// (0x00052119) cell_graphic2_pane_g2

0xe1ce,	// (0x00052126) cell_graphic2_pane_g3_ParamLimits

0xe1ce,	// (0x00052126) cell_graphic2_pane_g3

0xe1db,	// (0x00052133) cell_graphic2_pane_g4_ParamLimits

0xe1db,	// (0x00052133) cell_graphic2_pane_g4

0xe1e8,	// (0x00052140) cell_graphic2_pane_g5_ParamLimits

0xe1e8,	// (0x00052140) cell_graphic2_pane_g5

0x0004,

0xfd95,	// (0x00053ced) cell_graphic2_pane_g_ParamLimits

0xfd95,	// (0x00053ced) cell_graphic2_pane_g

0xe201,	// (0x00052159) cell_graphic2_pane_t1_ParamLimits

0xe201,	// (0x00052159) cell_graphic2_pane_t1

0x9adc,	// (0x0004da34) grid_highlight_pane_cp11_ParamLimits

0x9adc,	// (0x0004da34) grid_highlight_pane_cp11

0x0b66,	// (0x00044abe) bg_button_pane_cp05

0xe237,	// (0x0005218f) cell_graphic2_control_pane_g1

0xc026,	// (0x0004ff7e) bg_touch_area_indi_pane_g1

0xe25f,	// (0x000521b7) aid_cmod_rocker_key_size

0xe269,	// (0x000521c1) aid_cmode_itu_key_size

0xe273,	// (0x000521cb) main_cmode_video_pane

0xe27d,	// (0x000521d5) main_comp_mode_itu_pane

0xe289,	// (0x000521e1) main_comp_mode_rocker_pane

0xe295,	// (0x000521ed) cell_cmode_rocker_pane_ParamLimits

0xe295,	// (0x000521ed) cell_cmode_rocker_pane

0xe2a7,	// (0x000521ff) cell_cmode_itu_pane_ParamLimits

0xe2a7,	// (0x000521ff) cell_cmode_itu_pane

0x0df2,	// (0x00044d4a) bg_button_pane_cp06_ParamLimits

0x0df2,	// (0x00044d4a) bg_button_pane_cp06

0xc296,	// (0x000501ee) cell_cmode_rocker_pane_g1_ParamLimits

0xc296,	// (0x000501ee) cell_cmode_rocker_pane_g1

0xd7f3,	// (0x0005174b) cell_cmode_rocker_pane_g2_ParamLimits

0xd7f3,	// (0x0005174b) cell_cmode_rocker_pane_g2

0x0001,

0xfda5,	// (0x00053cfd) cell_cmode_rocker_pane_g_ParamLimits

0xfda5,	// (0x00053cfd) cell_cmode_rocker_pane_g

0x09cc,	// (0x00044924) bg_button_pane_cp07

0xe2bc,	// (0x00052214) cell_cmode_itu_pane_g1

0xe2c5,	// (0x0005221d) cell_cmode_itu_pane_t1

0xe2d3,	// (0x0005222b) cell_cmode_itu_pane_t2

0x0001,

0xfdaa,	// (0x00053d02) cell_cmode_itu_pane_t

0xda19,	// (0x00051971) aid_touch_ctrl_left

0xda21,	// (0x00051979) aid_touch_ctrl_right

0x09cc,	// (0x00044924) compa_mode_pane

0xe2e1,	// (0x00052239) aid_cmod_rocker_key_size_cp

0xe2eb,	// (0x00052243) aid_cmode_itu_key_size_cp

0xe2f5,	// (0x0005224d) compa_mode_pane_g1

0xe2fd,	// (0x00052255) compa_mode_pane_g2

0xe305,	// (0x0005225d) compa_mode_pane_g3

0x0002,

0xfdaf,	// (0x00053d07) compa_mode_pane_g

0xe30d,	// (0x00052265) main_comp_mode_itu_pane_cp

0xe315,	// (0x0005226d) main_comp_mode_rocker_pane_cp

0xe31d,	// (0x00052275) cell_cmode_itu_pane_cp_ParamLimits

0xe31d,	// (0x00052275) cell_cmode_itu_pane_cp

0xe332,	// (0x0005228a) cell_cmode_rocker_pane_cp_ParamLimits

0xe332,	// (0x0005228a) cell_cmode_rocker_pane_cp

0x0df2,	// (0x00044d4a) bg_button_pane_cp06_cp_ParamLimits

0x0df2,	// (0x00044d4a) bg_button_pane_cp06_cp

0xc296,	// (0x000501ee) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc296,	// (0x000501ee) cell_cmode_rocker_pane_g1_cp

0xc026,	// (0x0004ff7e) cell_cmode_rocker_pane_g2_cp

0x09cc,	// (0x00044924) bg_button_pane_cp07_cp

0xe344,	// (0x0005229c) cell_cmode_itu_pane_g1_cp

0xe34d,	// (0x000522a5) cell_cmode_itu_pane_t1_cp

0xe34d,	// (0x000522a5) cell_cmode_itu_pane_t2_cp

0xaf79,	// (0x0004eed1) settings_code_pane_cp2

0x0a3c,	// (0x00044994) bg_popup_window_pane_cp3_ParamLimits

0x0c7f,	// (0x00044bd7) heading_pane_cp3_ParamLimits

0x0c8e,	// (0x00044be6) listscroll_popup_graphic_pane_ParamLimits

0x87a8,	// (0x0004c700) fep_hwr_aid_pane_ParamLimits

0x8c46,	// (0x0004cb9e) aid_touch_sctrl_top_ParamLimits

0x8c53,	// (0x0004cbab) sctrl_sk_top_pane_g1_ParamLimits

0xc296,	// (0x000501ee) sctrl_sk_top_pane_g2_ParamLimits

0xfce5,	// (0x00053c3d) sctrl_sk_top_pane_g_ParamLimits

0x8c60,	// (0x0004cbb8) sctrl_sk_top_pane_t1_ParamLimits

0x8c46,	// (0x0004cb9e) aid_touch_sctrl_bottom_ParamLimits

0x8c60,	// (0x0004cbb8) sctrl_sk_bottom_pane_t1_ParamLimits

0xd962,	// (0x000518ba) aid_area_touch_clock

0x8e37,	// (0x0004cd8f) aid_vkb2_area_top_pane_cell_ParamLimits

0x8e37,	// (0x0004cd8f) aid_vkb2_area_top_pane_cell

0x8f85,	// (0x0004cedd) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8f85,	// (0x0004cedd) aid_vkb2_area_bottom_pane_cell

0xded1,	// (0x00051e29) popup_char_count_window

0xe35b,	// (0x000522b3) popup_char_count_window_g1

0xe364,	// (0x000522bc) popup_char_count_window_g2

0xe36d,	// (0x000522c5) popup_char_count_window_g3

0x0002,

0xfdb6,	// (0x00053d0e) popup_char_count_window_g

0xe376,	// (0x000522ce) popup_char_count_window_t1

0x8cf9,	// (0x0004cc51) popup_fep_char_preview_window_ParamLimits

0x8cf9,	// (0x0004cc51) popup_fep_char_preview_window

0x8e55,	// (0x0004cdad) vkb2_top_candi_pane_ParamLimits

0x8e55,	// (0x0004cdad) vkb2_top_candi_pane

0xe384,	// (0x000522dc) cell_vkb2_top_candi_pane_ParamLimits

0xe384,	// (0x000522dc) cell_vkb2_top_candi_pane

0xa0f6,	// (0x0004e04e) bg_popup_fep_char_preview_window_ParamLimits

0xa0f6,	// (0x0004e04e) bg_popup_fep_char_preview_window

0x9277,	// (0x0004d1cf) popup_fep_char_preview_window_t1_ParamLimits

0x9277,	// (0x0004d1cf) popup_fep_char_preview_window_t1

0xe3ce,	// (0x00052326) bg_popup_fep_char_preview_window_g1

0xe3d6,	// (0x0005232e) bg_popup_fep_char_preview_window_g2

0xe3de,	// (0x00052336) bg_popup_fep_char_preview_window_g3

0xe3e6,	// (0x0005233e) bg_popup_fep_char_preview_window_g4

0xe3ee,	// (0x00052346) bg_popup_fep_char_preview_window_g5

0xe3f6,	// (0x0005234e) bg_popup_fep_char_preview_window_g6

0xe3fe,	// (0x00052356) bg_popup_fep_char_preview_window_g7

0xe406,	// (0x0005235e) bg_popup_fep_char_preview_window_g8

0xe40e,	// (0x00052366) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbd,	// (0x00053d15) bg_popup_fep_char_preview_window_g

0xc296,	// (0x000501ee) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc296,	// (0x000501ee) cell_vkb2_top_candi_pane_g1

0xc5ad,	// (0x00050505) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5ad,	// (0x00050505) cell_vkb2_top_candi_pane_g2

0xc5ce,	// (0x00050526) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5ce,	// (0x00050526) cell_vkb2_top_candi_pane_g3

0x92b9,	// (0x0004d211) cell_vkb2_top_candi_pane_g4_ParamLimits

0x92b9,	// (0x0004d211) cell_vkb2_top_candi_pane_g4

0xc7b8,	// (0x00050710) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc7b8,	// (0x00050710) cell_vkb2_top_candi_pane_g5

0xd7f3,	// (0x0005174b) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7f3,	// (0x0005174b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd2,	// (0x00053d2a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd2,	// (0x00053d2a) cell_vkb2_top_candi_pane_g

0x92da,	// (0x0004d232) cell_vkb2_top_candi_pane_t1

0x8495,	// (0x0004c3ed) aid_size_touch_slider_mark_ParamLimits

0x8495,	// (0x0004c3ed) aid_size_touch_slider_mark

0xe014,	// (0x00051f6c) grid_graphic2_catg_pane_ParamLimits

0xe014,	// (0x00051f6c) grid_graphic2_catg_pane

0xe0b2,	// (0x0005200a) popup_grid_graphic2_window_t1_ParamLimits

0xe0b2,	// (0x0005200a) popup_grid_graphic2_window_t1

0xe0c4,	// (0x0005201c) popup_grid_graphic2_window_t2_ParamLimits

0xe0c4,	// (0x0005201c) popup_grid_graphic2_window_t2

0x0001,

0xfd8b,	// (0x00053ce3) popup_grid_graphic2_window_t_ParamLimits

0xfd8b,	// (0x00053ce3) popup_grid_graphic2_window_t

0x0b66,	// (0x00044abe) bg_button_pane_cp05_ParamLimits

0xe237,	// (0x0005218f) cell_graphic2_control_pane_g1_ParamLimits

0xe416,	// (0x0005236e) cell_graphic2_catg_pane_ParamLimits

0xe416,	// (0x0005236e) cell_graphic2_catg_pane

0x09cc,	// (0x00044924) bg_button_pane_cp12

0xe428,	// (0x00052380) cell_graphic2_catg_pane_g1

0xd92d,	// (0x00051885) cell_tb_ext_pane_t1_ParamLimits

0x90a2,	// (0x0004cffa) vkb2_top_cell_right_narrow_pane_ParamLimits

0x90a2,	// (0x0004cffa) vkb2_top_cell_right_narrow_pane

0x90ba,	// (0x0004d012) vkb2_top_cell_right_wide_pane_ParamLimits

0x90ba,	// (0x0004d012) vkb2_top_cell_right_wide_pane

0x879a,	// (0x0004c6f2) bg_vkb2_func_pane_ParamLimits

0x879a,	// (0x0004c6f2) bg_vkb2_func_pane

0x912b,	// (0x0004d083) vkb2_top_cell_left_pane_g1_ParamLimits

0x879a,	// (0x0004c6f2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x879a,	// (0x0004c6f2) bg_vkb2_fuc_pane_cp03

0x9194,	// (0x0004d0ec) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a58,	// (0x0004d9b0) bg_vkb2_func_pane_g1

0x9a60,	// (0x0004d9b8) bg_vkb2_func_pane_g2

0x9a70,	// (0x0004d9c8) bg_vkb2_func_pane_g3

0x9a68,	// (0x0004d9c0) bg_vkb2_func_pane_g4

0x9a78,	// (0x0004d9d0) bg_vkb2_func_pane_g5

0x9a80,	// (0x0004d9d8) bg_vkb2_func_pane_g6

0x9a88,	// (0x0004d9e0) bg_vkb2_func_pane_g7

0x9a90,	// (0x0004d9e8) bg_vkb2_func_pane_g8

0x9a50,	// (0x0004d9a8) bg_vkb2_func_pane_g9

0x0008,

0xfddf,	// (0x00053d37) bg_vkb2_func_pane_g

0x879a,	// (0x0004c6f2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x879a,	// (0x0004c6f2) bg_vkb2_fuc_pane_cp01

0x912b,	// (0x0004d083) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x912b,	// (0x0004d083) vkb2_top_cell_right_wide_pane_g1

0x879a,	// (0x0004c6f2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x879a,	// (0x0004c6f2) bg_vkb2_fuc_pane_cp02

0x92f9,	// (0x0004d251) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x92f9,	// (0x0004d251) vkb2_top_cell_right_narrow_pane_g1

0xd54f,	// (0x000514a7) aid_touch_area_decrease_ParamLimits

0xd54f,	// (0x000514a7) aid_touch_area_decrease

0xd573,	// (0x000514cb) aid_touch_area_increase_ParamLimits

0xd573,	// (0x000514cb) aid_touch_area_increase

0xd58b,	// (0x000514e3) aid_touch_area_mute_ParamLimits

0xd58b,	// (0x000514e3) aid_touch_area_mute

0xd5a7,	// (0x000514ff) aid_touch_area_slider_ParamLimits

0xd5a7,	// (0x000514ff) aid_touch_area_slider

0xd691,	// (0x000515e9) popup_slider_window_g4_ParamLimits

0xd691,	// (0x000515e9) popup_slider_window_g4

0xd6a9,	// (0x00051601) popup_slider_window_g5_ParamLimits

0xd6a9,	// (0x00051601) popup_slider_window_g5

0xd6cb,	// (0x00051623) popup_slider_window_g6_ParamLimits

0xd6cb,	// (0x00051623) popup_slider_window_g6

0xd709,	// (0x00051661) popup_slider_window_t2_ParamLimits

0xd709,	// (0x00051661) popup_slider_window_t2

0x0001,

0xfcd9,	// (0x00053c31) popup_slider_window_t_ParamLimits

0xfcd9,	// (0x00053c31) popup_slider_window_t

0xd721,	// (0x00051679) slider_pane_ParamLimits

0xd721,	// (0x00051679) slider_pane

0xe431,	// (0x00052389) slider_pane_g1_ParamLimits

0xe431,	// (0x00052389) slider_pane_g1

0xe445,	// (0x0005239d) slider_pane_g2_ParamLimits

0xe445,	// (0x0005239d) slider_pane_g2

0xe45b,	// (0x000523b3) slider_pane_g3_ParamLimits

0xe45b,	// (0x000523b3) slider_pane_g3

0x0003,

0xfdf2,	// (0x00053d4a) slider_pane_g_ParamLimits

0xfdf2,	// (0x00053d4a) slider_pane_g

0x7d9d,	// (0x0004bcf5) popup_tb_float_extension_window_ParamLimits

0x7d9d,	// (0x0004bcf5) popup_tb_float_extension_window

0xe487,	// (0x000523df) aid_size_cell_tb_float_ext

0x09cc,	// (0x00044924) bg_popup_sub_window_cp28

0xe493,	// (0x000523eb) grid_tb_float_ext_pane

0xe49d,	// (0x000523f5) cell_tb_float_ext_pane_ParamLimits

0xe49d,	// (0x000523f5) cell_tb_float_ext_pane

0xe4b7,	// (0x0005240f) cell_tb_float_ext_pane_g1

0xe4c0,	// (0x00052418) grid_highlight_pane_cp12

0x88db,	// (0x0004c833) cell_last_hwr_side_pane_ParamLimits

0x88db,	// (0x0004c833) cell_last_hwr_side_pane

0xc026,	// (0x0004ff7e) cell_last_hwr_side_pane_g1

0xe4c9,	// (0x00052421) cell_last_hwr_side_pane_g2

0x0001,

0xfdfb,	// (0x00053d53) cell_last_hwr_side_pane_g

0x9051,	// (0x0004cfa9) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9051,	// (0x0004cfa9) vkb2_area_bottom_space_btn_pane

0xc296,	// (0x000501ee) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf86,	// (0x00051ede) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x92da,	// (0x0004d232) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9319,	// (0x0004d271) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9319,	// (0x0004d271) vkb2_area_bottom_space_btn_pane_g1

0x9353,	// (0x0004d2ab) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9353,	// (0x0004d2ab) vkb2_area_bottom_space_btn_pane_g2

0x9389,	// (0x0004d2e1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9389,	// (0x0004d2e1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe00,	// (0x00053d58) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe00,	// (0x00053d58) vkb2_area_bottom_space_btn_pane_g

0x884f,	// (0x0004c7a7) cel_fep_hwr_func_pane_ParamLimits

0x884f,	// (0x0004c7a7) cel_fep_hwr_func_pane

0x888b,	// (0x0004c7e3) cell_hwr_side_button_pane_ParamLimits

0x888b,	// (0x0004c7e3) cell_hwr_side_button_pane

0xd962,	// (0x000518ba) aid_area_touch_clock_ParamLimits

0x0b66,	// (0x00044abe) bg_uniindi_top_pane_ParamLimits

0xd974,	// (0x000518cc) uniindi_top_pane_g1_ParamLimits

0xd98a,	// (0x000518e2) uniindi_top_pane_g2_ParamLimits

0xd996,	// (0x000518ee) uniindi_top_pane_g3_ParamLimits

0xd9a7,	// (0x000518ff) uniindi_top_pane_g4_ParamLimits

0xfd11,	// (0x00053c69) uniindi_top_pane_g_ParamLimits

0xd9b4,	// (0x0005190c) uniindi_top_pane_t1_ParamLimits

0x0b66,	// (0x00044abe) bg_vkb2_func_pane_cp01_ParamLimits

0x0b66,	// (0x00044abe) bg_vkb2_func_pane_cp01

0xe4d2,	// (0x0005242a) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4d2,	// (0x0005242a) cel_fep_hwr_func_pane_g1

0x0b66,	// (0x00044abe) bg_vkb2_func_pane_cp02_ParamLimits

0x0b66,	// (0x00044abe) bg_vkb2_func_pane_cp02

0xe4d2,	// (0x0005242a) cell_hwr_side_button_pane_g1_ParamLimits

0xe4d2,	// (0x0005242a) cell_hwr_side_button_pane_g1

0x98d4,	// (0x0004d82c) status_pane_g4_ParamLimits

0x98d4,	// (0x0004d82c) status_pane_g4

0x98ee,	// (0x0004d846) status_pane_t1

0xbd61,	// (0x0004fcb9) form2_midp_gauge_slider_cont_pane

0xbd69,	// (0x0004fcc1) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd7b,	// (0x0004fcd3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd8d,	// (0x0004fce5) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x00053a3c) form2_midp_gauge_slider_pane_t_ParamLimits

0xbd9f,	// (0x0004fcf7) form2_midp_slider_pane_ParamLimits

0x8cc1,	// (0x0004cc19) aid_size_cell_func_vkb2_ParamLimits

0x8cc1,	// (0x0004cc19) aid_size_cell_func_vkb2

0xe473,	// (0x000523cb) slider_pane_g4_ParamLimits

0xe473,	// (0x000523cb) slider_pane_g4

0x93d3,	// (0x0004d32b) form2_midp_gauge_slider_pane_t2_cp01

0x93e1,	// (0x0004d339) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x93e1,	// (0x0004d339) form2_midp_gauge_slider_pane_t3_cp01

0x93fe,	// (0x0004d356) form2_midp_slider_pane_cp01

0x09cc,	// (0x00044924) navi_smil_pane

0xe50b,	// (0x00052463) navi_smil_pane_g1

0xe513,	// (0x0005246b) navi_smil_pane_t1

0xe4e0,	// (0x00052438) form2_midp_slider_pane_g1

0xe4e9,	// (0x00052441) form2_midp_slider_pane_g2

0xe4f1,	// (0x00052449) form2_midp_slider_pane_g3

0xe4e0,	// (0x00052438) form2_midp_slider_pane_g4

0xe4f9,	// (0x00052451) form2_midp_slider_pane_g5

0x0004,

0xfe09,	// (0x00053d61) form2_midp_slider_pane_g

0x93c3,	// (0x0004d31b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x93c3,	// (0x0004d31b) vkb2_area_bottom_space_btn_pane_g4

0x8024,	// (0x0004bf7c) lc0_navi_pane_ParamLimits

0x8024,	// (0x0004bf7c) lc0_navi_pane

0x809a,	// (0x0004bff2) lc0_stat_indi_pane_ParamLimits

0x809a,	// (0x0004bff2) lc0_stat_indi_pane

0x80b1,	// (0x0004c009) ls0_title_pane_ParamLimits

0x80b1,	// (0x0004c009) ls0_title_pane

0x0df2,	// (0x00044d4a) bg_popup_sub_pane_cp14_ParamLimits

0xd949,	// (0x000518a1) list_uniindi_pane_ParamLimits

0xd955,	// (0x000518ad) uniindi_top_pane_ParamLimits

0xd9f1,	// (0x00051949) list_single_uniindi_pane_g1_ParamLimits

0xda04,	// (0x0005195c) list_single_uniindi_pane_t1_ParamLimits

0x9407,	// (0x0004d35f) lc0_stat_clock_pane_ParamLimits

0x9407,	// (0x0004d35f) lc0_stat_clock_pane

0xe521,	// (0x00052479) lc0_stat_indi_pane_g1_ParamLimits

0xe521,	// (0x00052479) lc0_stat_indi_pane_g1

0xe52e,	// (0x00052486) lc0_stat_indi_pane_g2_ParamLimits

0xe52e,	// (0x00052486) lc0_stat_indi_pane_g2

0x0001,

0xfe14,	// (0x00053d6c) lc0_stat_indi_pane_g_ParamLimits

0xfe14,	// (0x00053d6c) lc0_stat_indi_pane_g

0x9414,	// (0x0004d36c) lc0_uni_indicator_pane_ParamLimits

0x9414,	// (0x0004d36c) lc0_uni_indicator_pane

0xe53b,	// (0x00052493) ls0_title_pane_g1_ParamLimits

0xe53b,	// (0x00052493) ls0_title_pane_g1

0xe54f,	// (0x000524a7) ls0_title_pane_t1_ParamLimits

0xe54f,	// (0x000524a7) ls0_title_pane_t1

0x9421,	// (0x0004d379) lc0_uni_indicator_pane_g1_ParamLimits

0x9421,	// (0x0004d379) lc0_uni_indicator_pane_g1

0xe585,	// (0x000524dd) lc0_stat_clock_pane_t1

0x09cc,	// (0x00044924) main_ai5_pane

0xe593,	// (0x000524eb) ai5_sk_pane_ParamLimits

0xe593,	// (0x000524eb) ai5_sk_pane

0xe5a0,	// (0x000524f8) cell_ai5_widget_pane_ParamLimits

0xe5a0,	// (0x000524f8) cell_ai5_widget_pane

0xe669,	// (0x000525c1) aid_size_cell_widget_grid

0xe677,	// (0x000525cf) bg_ai5_widget_pane_ParamLimits

0xe677,	// (0x000525cf) bg_ai5_widget_pane

0xe6f3,	// (0x0005264b) cell_ai5_widget_pane_g2

0xe707,	// (0x0005265f) cell_ai5_widget_pane_g3

0xe721,	// (0x00052679) cell_ai5_widget_pane_g4

0xe731,	// (0x00052689) cell_ai5_widget_pane_g5

0xe741,	// (0x00052699) cell_ai5_widget_pane_g6

0xe74d,	// (0x000526a5) cell_ai5_widget_pane_g7

0xe7b9,	// (0x00052711) cell_ai5_widget_pane_t1_ParamLimits

0xe7b9,	// (0x00052711) cell_ai5_widget_pane_t1

0xe7d6,	// (0x0005272e) cell_ai5_widget_pane_t2_ParamLimits

0xe7d6,	// (0x0005272e) cell_ai5_widget_pane_t2

0xe7ee,	// (0x00052746) cell_ai5_widget_pane_t3_ParamLimits

0xe7ee,	// (0x00052746) cell_ai5_widget_pane_t3

0xe806,	// (0x0005275e) cell_ai5_widget_pane_t4_ParamLimits

0xe806,	// (0x0005275e) cell_ai5_widget_pane_t4

0xe82c,	// (0x00052784) cell_ai5_widget_pane_t5_ParamLimits

0xe82c,	// (0x00052784) cell_ai5_widget_pane_t5

0xe84b,	// (0x000527a3) cell_ai5_widget_pane_t6_ParamLimits

0xe84b,	// (0x000527a3) cell_ai5_widget_pane_t6

0xe85d,	// (0x000527b5) cell_ai5_widget_pane_t7_ParamLimits

0xe85d,	// (0x000527b5) cell_ai5_widget_pane_t7

0xe87c,	// (0x000527d4) cell_ai5_widget_pane_t8_ParamLimits

0xe87c,	// (0x000527d4) cell_ai5_widget_pane_t8

0x000b,

0xfe34,	// (0x00053d8c) cell_ai5_widget_pane_t_ParamLimits

0xfe34,	// (0x00053d8c) cell_ai5_widget_pane_t

0xe900,	// (0x00052858) grid_ai5_widget_pane

0x0df2,	// (0x00044d4a) highlight_cell_ai5_widget_pane_ParamLimits

0x0df2,	// (0x00044d4a) highlight_cell_ai5_widget_pane

0xe90e,	// (0x00052866) ai5_sk_left_pane

0xe918,	// (0x00052870) ai5_sk_middle_pane

0xe922,	// (0x0005287a) ai5_sk_right_pane

0xe92c,	// (0x00052884) bg_ai5_widget_pane_g1_ParamLimits

0xe92c,	// (0x00052884) bg_ai5_widget_pane_g1

0xe938,	// (0x00052890) bg_ai5_widget_pane_g2_ParamLimits

0xe938,	// (0x00052890) bg_ai5_widget_pane_g2

0xe944,	// (0x0005289c) bg_ai5_widget_pane_g3_ParamLimits

0xe944,	// (0x0005289c) bg_ai5_widget_pane_g3

0xe950,	// (0x000528a8) bg_ai5_widget_pane_g4_ParamLimits

0xe950,	// (0x000528a8) bg_ai5_widget_pane_g4

0xe95c,	// (0x000528b4) bg_ai5_widget_pane_g5_ParamLimits

0xe95c,	// (0x000528b4) bg_ai5_widget_pane_g5

0xe968,	// (0x000528c0) bg_ai5_widget_pane_g6_ParamLimits

0xe968,	// (0x000528c0) bg_ai5_widget_pane_g6

0xe974,	// (0x000528cc) bg_ai5_widget_pane_g7_ParamLimits

0xe974,	// (0x000528cc) bg_ai5_widget_pane_g7

0xe980,	// (0x000528d8) bg_ai5_widget_pane_g8_ParamLimits

0xe980,	// (0x000528d8) bg_ai5_widget_pane_g8

0xe98c,	// (0x000528e4) bg_ai5_widget_pane_g9_ParamLimits

0xe98c,	// (0x000528e4) bg_ai5_widget_pane_g9

0x0008,

0xfe4d,	// (0x00053da5) bg_ai5_widget_pane_g_ParamLimits

0xfe4d,	// (0x00053da5) bg_ai5_widget_pane_g

0xe9be,	// (0x00052916) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9be,	// (0x00052916) cell_shortcut_ai5_widget_pane

0x16ae,	// (0x00045606) bg_cell_shortcut_ai5_widget_pane

0xe9cf,	// (0x00052927) cell_grid_ai5_widget_pane_g1

0x16ae,	// (0x00045606) highlight_cell_shortcut_ai5_widget_pane

0x9a60,	// (0x0004d9b8) ai5_sk_left_pane_g1

0xe9d8,	// (0x00052930) ai5_sk_left_pane_g2

0xe9e0,	// (0x00052938) ai5_sk_left_pane_g3

0xe9e8,	// (0x00052940) ai5_sk_left_pane_g4

0x0003,

0xfe60,	// (0x00053db8) ai5_sk_left_pane_g

0xe9f0,	// (0x00052948) ai5_sk_left_pane_t1

0x9a58,	// (0x0004d9b0) ai5_sk_right_pane_g1

0xe9fe,	// (0x00052956) ai5_sk_right_pane_g2

0xea06,	// (0x0005295e) ai5_sk_right_pane_g3

0xea0e,	// (0x00052966) ai5_sk_right_pane_g4

0x0003,

0xfe69,	// (0x00053dc1) ai5_sk_right_pane_g

0xea16,	// (0x0005296e) ai5_sk_right_pane_t1

0x9a58,	// (0x0004d9b0) ai5_sk_middle_pane_g1

0x9a60,	// (0x0004d9b8) ai5_sk_middle_pane_g2

0x9a78,	// (0x0004d9d0) ai5_sk_middle_pane_g3

0xea06,	// (0x0005295e) ai5_sk_middle_pane_g4

0xe9e0,	// (0x00052938) ai5_sk_middle_pane_g5

0xea24,	// (0x0005297c) ai5_sk_middle_pane_g6

0xea2c,	// (0x00052984) ai5_sk_middle_pane_g7

0x0006,

0xfe72,	// (0x00053dca) ai5_sk_middle_pane_g

0x7eaa,	// (0x0004be02) aid_touch_area_size_lc0_ParamLimits

0x7eaa,	// (0x0004be02) aid_touch_area_size_lc0

0x89da,	// (0x0004c932) cell_hwr_candidate_pane_t1_ParamLimits

0x7ec6,	// (0x0004be1e) aid_touch_navi_pane

0x987e,	// (0x0004d7d6) status_dt_navi_pane_ParamLimits

0x987e,	// (0x0004d7d6) status_dt_navi_pane

0x988b,	// (0x0004d7e3) status_dt_sta_pane_ParamLimits

0x988b,	// (0x0004d7e3) status_dt_sta_pane

0xea34,	// (0x0005298c) dt_sta_controll_pane

0xea41,	// (0x00052999) dt_sta_indi_pane

0xea52,	// (0x000529aa) dt_sta_title_pane

0x0b66,	// (0x00044abe) bg_dt_sta_indi_pane_ParamLimits

0x0b66,	// (0x00044abe) bg_dt_sta_indi_pane

0xea65,	// (0x000529bd) dt_sta_battery_pane

0xea6d,	// (0x000529c5) dt_sta_indi_pane_g1

0xea76,	// (0x000529ce) dt_sta_indi_pane_g2

0xea7f,	// (0x000529d7) dt_sta_indi_pane_g3

0x0002,

0xfe81,	// (0x00053dd9) dt_sta_indi_pane_g

0xea88,	// (0x000529e0) dt_sta_signal_pane

0x0df2,	// (0x00044d4a) bg_dt_sta_title_pane_ParamLimits

0x0df2,	// (0x00044d4a) bg_dt_sta_title_pane

0xa8b2,	// (0x0004e80a) dt_sta_title_pane_g1

0xea91,	// (0x000529e9) dt_sta_title_pane_t1_ParamLimits

0xea91,	// (0x000529e9) dt_sta_title_pane_t1

0x09cc,	// (0x00044924) bg_dt_sta_control_pane

0xeaa6,	// (0x000529fe) dt_sta_controll_pane_g1

0xeaaf,	// (0x00052a07) bg_dt_sta_title_pane_g1

0xeab8,	// (0x00052a10) bg_dt_sta_title_pane_g2

0xeac1,	// (0x00052a19) bg_dt_sta_title_pane_g3

0x0002,

0xfe88,	// (0x00053de0) bg_dt_sta_title_pane_g

0xc026,	// (0x0004ff7e) bg_dt_sta_indi_pane_g1

0xeaca,	// (0x00052a22) dt_sta_signal_pane_g1

0xead2,	// (0x00052a2a) dt_sta_signal_pane_g2

0x0001,

0xfe8f,	// (0x00053de7) dt_sta_signal_pane_g

0xeada,	// (0x00052a32) dt_sta_battery_pane_g1

0xeae3,	// (0x00052a3b) dt_sta_battery_pane_t1

0xc026,	// (0x0004ff7e) bg_dt_sta_control_pane_g1

0x12c7,	// (0x0004521f) fep_china_uni_eep_pane

0x12cf,	// (0x00045227) fep_china_uni_entry_pane_ParamLimits

0x12df,	// (0x00045237) popup_fep_china_uni_window_g1_ParamLimits

0x12ef,	// (0x00045247) popup_fep_china_uni_window_g2_ParamLimits

0x12ef,	// (0x00045247) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0005364b) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0005364b) popup_fep_china_uni_window_g

0xeaf2,	// (0x00052a4a) fep_china_uni_eep_pane_g1

0xeafa,	// (0x00052a52) fep_china_uni_eep_pane_t1

0xe502,	// (0x0005245a) aid_touch_area_size_smil_player

0x801c,	// (0x0004bf74) lc0_clock_pane

0x98e2,	// (0x0004d83a) status_pane_g5_ParamLimits

0x98e2,	// (0x0004d83a) status_pane_g5

0x7a5e,	// (0x0004b9b6) popup_keymap_window

0x98a0,	// (0x0004d7f8) status_icon_pane

0xe707,	// (0x0005265f) cell_ai5_widget_pane_g3_ParamLimits

0xe721,	// (0x00052679) cell_ai5_widget_pane_g4_ParamLimits

0xe731,	// (0x00052689) cell_ai5_widget_pane_g5_ParamLimits

0xe759,	// (0x000526b1) cell_ai5_widget_pane_g8_ParamLimits

0xe759,	// (0x000526b1) cell_ai5_widget_pane_g8

0xe76d,	// (0x000526c5) cell_ai5_widget_pane_g9_ParamLimits

0xe76d,	// (0x000526c5) cell_ai5_widget_pane_g9

0xe781,	// (0x000526d9) cell_ai5_widget_pane_g10_ParamLimits

0xe781,	// (0x000526d9) cell_ai5_widget_pane_g10

0xeb09,	// (0x00052a61) status_icon_pane_g1

0x09cc,	// (0x00044924) bg_popup_sub_pane_cp13

0xeb11,	// (0x00052a69) popup_keymap_window_t1

0x7797,	// (0x0004b6ef) control_pane_g6_ParamLimits

0x7797,	// (0x0004b6ef) control_pane_g6

0x77a4,	// (0x0004b6fc) control_pane_g7_ParamLimits

0x77a4,	// (0x0004b6fc) control_pane_g7

0x77b1,	// (0x0004b709) control_pane_g8_ParamLimits

0x77b1,	// (0x0004b709) control_pane_g8

0xea34,	// (0x0005298c) dt_sta_controll_pane_ParamLimits

0xea41,	// (0x00052999) dt_sta_indi_pane_ParamLimits

0xea52,	// (0x000529aa) dt_sta_title_pane_ParamLimits

0x0d3d,	// (0x00044c95) aid_size_touch_scroll_bar_cale

0x6563,	// (0x0004a4bb) popup_discreet_window_ParamLimits

0x6563,	// (0x0004a4bb) popup_discreet_window

0x65dd,	// (0x0004a535) popup_sk_window

0xa0f6,	// (0x0004e04e) bg_popup_sub_pane_cp28_ParamLimits

0xa0f6,	// (0x0004e04e) bg_popup_sub_pane_cp28

0xeb1f,	// (0x00052a77) popup_discreet_window_g1_ParamLimits

0xeb1f,	// (0x00052a77) popup_discreet_window_g1

0xeb3f,	// (0x00052a97) popup_discreet_window_t1_ParamLimits

0xeb3f,	// (0x00052a97) popup_discreet_window_t1

0xeb5d,	// (0x00052ab5) popup_discreet_window_t2_ParamLimits

0xeb5d,	// (0x00052ab5) popup_discreet_window_t2

0x0002,

0xfe94,	// (0x00053dec) popup_discreet_window_t_ParamLimits

0xfe94,	// (0x00053dec) popup_discreet_window_t

0x9435,	// (0x0004d38d) popup_sk_window_g1

0x943f,	// (0x0004d397) popup_sk_window_g2

0x0001,

0xfe9b,	// (0x00053df3) popup_sk_window_g

0x9447,	// (0x0004d39f) popup_sk_window_t1

0x9455,	// (0x0004d3ad) popup_sk_window_t1_copy1

0xe6f3,	// (0x0005264b) cell_ai5_widget_pane_g2_ParamLimits

0xe88e,	// (0x000527e6) cell_ai5_widget_pane_t9_ParamLimits

0xe88e,	// (0x000527e6) cell_ai5_widget_pane_t9

0x09cc,	// (0x00044924) main_fep_fshwr2_pane

0x9463,	// (0x0004d3bb) aid_fshwr2_btn_pane

0x9477,	// (0x0004d3cf) aid_fshwr2_syb_pane

0x948b,	// (0x0004d3e3) aid_fshwr2_txt_pane

0x949b,	// (0x0004d3f3) fshwr2_func_candi_pane

0x94bf,	// (0x0004d417) fshwr2_hwr_syb_pane

0x94d9,	// (0x0004d431) fshwr2_icf_pane

0x09cc,	// (0x00044924) fshwr2_icf_bg_pane

0x9507,	// (0x0004d45f) fshwr2_icf_pane_t1_ParamLimits

0x9507,	// (0x0004d45f) fshwr2_icf_pane_t1

0x1244,	// (0x0004519c) fshwr2_func_candi_pane_g1

0xebaf,	// (0x00052b07) fshwr2_func_candi_row_pane_ParamLimits

0xebaf,	// (0x00052b07) fshwr2_func_candi_row_pane

0x9520,	// (0x0004d478) cell_fshwr2_syb_pane_ParamLimits

0x9520,	// (0x0004d478) cell_fshwr2_syb_pane

0xe4d2,	// (0x0005242a) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4d2,	// (0x0005242a) fshwr2_hwr_syb_pane_g1

0x09cc,	// (0x00044924) bg_popup_call_pane_cp01

0x9543,	// (0x0004d49b) fshwr2_func_candi_cell_pane_ParamLimits

0x9543,	// (0x0004d49b) fshwr2_func_candi_cell_pane

0xa752,	// (0x0004e6aa) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa752,	// (0x0004e6aa) fshwr2_func_candi_cell_bg_pane

0x958e,	// (0x0004d4e6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x958e,	// (0x0004d4e6) fshwr2_func_candi_cell_pane_g1

0x95ae,	// (0x0004d506) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x95ae,	// (0x0004d506) fshwr2_func_candi_cell_pane_t1

0x09cc,	// (0x00044924) bg_button_pane_cp08

0x0f34,	// (0x00044e8c) cell_fshwr2_syb_bg_pane

0x95c1,	// (0x0004d519) cell_fshwr2_syb_bg_pane_g1

0x95d5,	// (0x0004d52d) cell_fshwr2_syb_bg_pane_t1

0x0df2,	// (0x00044d4a) main_tmo_pane

0xabeb,	// (0x0004eb43) uni_indicator_pane_g1_ParamLimits

0xabfe,	// (0x0004eb56) uni_indicator_pane_g2_ParamLimits

0xac10,	// (0x0004eb68) uni_indicator_pane_g3_ParamLimits

0xac1f,	// (0x0004eb77) uni_indicator_pane_g4_ParamLimits

0xac1f,	// (0x0004eb77) uni_indicator_pane_g4

0xac33,	// (0x0004eb8b) uni_indicator_pane_g5_ParamLimits

0xac33,	// (0x0004eb8b) uni_indicator_pane_g5

0xac33,	// (0x0004eb8b) uni_indicator_pane_g6_ParamLimits

0xac33,	// (0x0004eb8b) uni_indicator_pane_g6

0xf8f7,	// (0x0005384f) uni_indicator_pane_g_ParamLimits

0xd531,	// (0x00051489) popup_tmo_note_window_ParamLimits

0xd531,	// (0x00051489) popup_tmo_note_window

0x0df2,	// (0x00044d4a) fshwr2_bg_pane

0x959f,	// (0x0004d4f7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x959f,	// (0x0004d4f7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea0,	// (0x00053df8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea0,	// (0x00053df8) fshwr2_func_candi_cell_pane_g

0xc026,	// (0x0004ff7e) bg_popup_window_pane_cp01

0x95eb,	// (0x0004d543) bg_popup_window_pane_g1_cp01

0xebd6,	// (0x00052b2e) bg_popup_window_pane_cp22_ParamLimits

0xebd6,	// (0x00052b2e) bg_popup_window_pane_cp22

0xebe4,	// (0x00052b3c) listscroll_tmo_link_pane_ParamLimits

0xebe4,	// (0x00052b3c) listscroll_tmo_link_pane

0xec24,	// (0x00052b7c) popup_tmo_note_window_g1_ParamLimits

0xec24,	// (0x00052b7c) popup_tmo_note_window_g1

0xec31,	// (0x00052b89) tmo_note_info_pane_ParamLimits

0xec31,	// (0x00052b89) tmo_note_info_pane

0xec4b,	// (0x00052ba3) list_tmo_note_info_pane_g1_ParamLimits

0xec4b,	// (0x00052ba3) list_tmo_note_info_pane_g1

0xec62,	// (0x00052bba) list_tmo_note_info_pane_g2_ParamLimits

0xec62,	// (0x00052bba) list_tmo_note_info_pane_g2

0x0001,

0xfea5,	// (0x00053dfd) list_tmo_note_info_pane_g_ParamLimits

0xfea5,	// (0x00053dfd) list_tmo_note_info_pane_g

0xec7e,	// (0x00052bd6) list_tmo_note_info_text_pane_ParamLimits

0xec7e,	// (0x00052bd6) list_tmo_note_info_text_pane

0xecff,	// (0x00052c57) list_tmo_link_pane

0xed0c,	// (0x00052c64) scroll_pane_cp20

0xed19,	// (0x00052c71) list_single_tmo_link_pane_ParamLimits

0xed19,	// (0x00052c71) list_single_tmo_link_pane

0xed29,	// (0x00052c81) list_single_tmo_link_pane_t1

0xed37,	// (0x00052c8f) list_tmo_note_info_text_pane_t1_ParamLimits

0xed37,	// (0x00052c8f) list_tmo_note_info_text_pane_t1

0x6d5e,	// (0x0004acb6) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6d5e,	// (0x0004acb6) aid_size_touch_scroll_bar_cp01

0x596f,	// (0x000498c7) aid_size_touch_slider_marker

0x65c5,	// (0x0004a51d) popup_settings_window_ParamLimits

0x65c5,	// (0x0004a51d) popup_settings_window

0x5aea,	// (0x00049a42) popup_candi_list_indi_window

0x7ec6,	// (0x0004be1e) aid_touch_navi_pane_ParamLimits

0x8c1a,	// (0x0004cb72) rs_clock_indi_pane

0x8c23,	// (0x0004cb7b) sctrl_sk_bottom_pane_ParamLimits

0x8c34,	// (0x0004cb8c) sctrl_sk_top_pane_ParamLimits

0x8d13,	// (0x0004cc6b) popup_fep_tooltip_window

0xe669,	// (0x000525c1) aid_size_cell_widget_grid_ParamLimits

0xe6de,	// (0x00052636) cell_ai5_widget_pane_g1_ParamLimits

0xe6de,	// (0x00052636) cell_ai5_widget_pane_g1

0xe741,	// (0x00052699) cell_ai5_widget_pane_g6_ParamLimits

0xe74d,	// (0x000526a5) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe19,	// (0x00053d71) cell_ai5_widget_pane_g_ParamLimits

0xfe19,	// (0x00053d71) cell_ai5_widget_pane_g

0xe8bd,	// (0x00052815) cell_ai5_widget_pane_t10_ParamLimits

0xe8bd,	// (0x00052815) cell_ai5_widget_pane_t10

0xe900,	// (0x00052858) grid_ai5_widget_pane_ParamLimits

0xe998,	// (0x000528f0) cell_contacts_ai5_widget_pane_ParamLimits

0xe998,	// (0x000528f0) cell_contacts_ai5_widget_pane

0xeb72,	// (0x00052aca) popup_discreet_window_t3_ParamLimits

0xeb72,	// (0x00052aca) popup_discreet_window_t3

0x94f1,	// (0x0004d449) popup_fshwr2_char_preview_window_ParamLimits

0x94f1,	// (0x0004d449) popup_fshwr2_char_preview_window

0xec9c,	// (0x00052bf4) tmo_note_info_pane_t1

0xecb1,	// (0x00052c09) tmo_note_info_pane_t2

0xecc6,	// (0x00052c1e) tmo_note_info_pane_t3

0xecdb,	// (0x00052c33) tmo_note_info_pane_t4

0xeced,	// (0x00052c45) tmo_note_info_pane_t5

0x0004,

0xfeaa,	// (0x00053e02) tmo_note_info_pane_t

0xecff,	// (0x00052c57) list_tmo_link_pane_ParamLimits

0xed0c,	// (0x00052c64) scroll_pane_cp20_ParamLimits

0x09cc,	// (0x00044924) bg_popup_fep_char_preview_window_cp01

0xed50,	// (0x00052ca8) popup_fshwr2_char_preview_window_t1

0xed5e,	// (0x00052cb6) popup_candi_list_indi_window_g1

0xed67,	// (0x00052cbf) bg_cell_contacts_ai5_widget_pane

0xed73,	// (0x00052ccb) cell_contacts_ai5_widget_pane_g1

0xc70d,	// (0x00050665) cell_contacts_ai5_widget_pane_g2

0xed88,	// (0x00052ce0) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb5,	// (0x00053e0d) cell_contacts_ai5_widget_pane_g

0xed94,	// (0x00052cec) cell_contacts_ai5_widget_pane_t1

0x0df2,	// (0x00044d4a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0b,	// (0x00052d63) settings_container_pane

0x16ae,	// (0x00045606) listscroll_set_pane_copy1

0xb702,	// (0x0004f65a) scroll_pane_cp121_copy1

0x9e9b,	// (0x0004ddf3) set_content_pane_copy1

0xee17,	// (0x00052d6f) aid_height_set_list_copy1_ParamLimits

0xee17,	// (0x00052d6f) aid_height_set_list_copy1

0xae2b,	// (0x0004ed83) aid_size_parent_copy1_ParamLimits

0xae2b,	// (0x0004ed83) aid_size_parent_copy1

0xee23,	// (0x00052d7b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee23,	// (0x00052d7b) button_value_adjust_pane_cp6_copy1

0x0f34,	// (0x00044e8c) list_highlight_pane_cp2_copy1_ParamLimits

0x0f34,	// (0x00044e8c) list_highlight_pane_cp2_copy1

0xee37,	// (0x00052d8f) list_set_pane_copy1_ParamLimits

0xee37,	// (0x00052d8f) list_set_pane_copy1

0xeda6,	// (0x00052cfe) main_pane_set_t1_copy1_ParamLimits

0xeda6,	// (0x00052cfe) main_pane_set_t1_copy1

0xede0,	// (0x00052d38) main_pane_set_t2_copy1_ParamLimits

0xede0,	// (0x00052d38) main_pane_set_t2_copy1

0xeee4,	// (0x00052e3c) main_pane_set_t3_copy1

0xeef2,	// (0x00052e4a) main_pane_set_t4_copy1

0xedff,	// (0x00052d57) set_content_pane_g1_copy1_ParamLimits

0xedff,	// (0x00052d57) set_content_pane_g1_copy1

0xef00,	// (0x00052e58) setting_code_pane_copy1

0xef08,	// (0x00052e60) setting_slider_graphic_pane_copy1

0xef08,	// (0x00052e60) setting_slider_pane_copy1

0xef10,	// (0x00052e68) setting_text_pane_copy1

0xef10,	// (0x00052e68) setting_volume_pane_copy1

0xef00,	// (0x00052e58) settings_code_pane_cp2_copy1

0xef18,	// (0x00052e70) settings_code_pane_cp_copy1_ParamLimits

0xef18,	// (0x00052e70) settings_code_pane_cp_copy1

0x95f4,	// (0x0004d54c) volume_set_pane_copy1

0xef2c,	// (0x00052e84) volume_set_pane_g10_copy1

0xef34,	// (0x00052e8c) volume_set_pane_g1_copy1

0xef3c,	// (0x00052e94) volume_set_pane_g2_copy1

0xef44,	// (0x00052e9c) volume_set_pane_g3_copy1

0xef4c,	// (0x00052ea4) volume_set_pane_g4_copy1

0xef54,	// (0x00052eac) volume_set_pane_g5_copy1

0xef5c,	// (0x00052eb4) volume_set_pane_g6_copy1

0xef64,	// (0x00052ebc) volume_set_pane_g7_copy1

0xef6c,	// (0x00052ec4) volume_set_pane_g8_copy1

0xef74,	// (0x00052ecc) volume_set_pane_g9_copy1

0x0a3c,	// (0x00044994) bg_set_opt_pane_cp_copy1_ParamLimits

0x0a3c,	// (0x00044994) bg_set_opt_pane_cp_copy1

0x95fc,	// (0x0004d554) setting_slider_pane_t1_copy1_ParamLimits

0x95fc,	// (0x0004d554) setting_slider_pane_t1_copy1

0x961b,	// (0x0004d573) setting_slider_pane_t2_copy1_ParamLimits

0x961b,	// (0x0004d573) setting_slider_pane_t2_copy1

0x9635,	// (0x0004d58d) setting_slider_pane_t3_copy1_ParamLimits

0x9635,	// (0x0004d58d) setting_slider_pane_t3_copy1

0x964d,	// (0x0004d5a5) slider_set_pane_copy1_ParamLimits

0x964d,	// (0x0004d5a5) slider_set_pane_copy1

0x0e4a,	// (0x00044da2) set_opt_bg_pane_g1_copy2

0x0e52,	// (0x00044daa) set_opt_bg_pane_g2_copy2

0xef7c,	// (0x00052ed4) set_opt_bg_pane_g3_copy2

0x0e62,	// (0x00044dba) set_opt_bg_pane_g4_copy2

0x0e6a,	// (0x00044dc2) set_opt_bg_pane_g5_copy2

0x0e72,	// (0x00044dca) set_opt_bg_pane_g6_copy2

0xef86,	// (0x00052ede) set_opt_bg_pane_g7_copy2

0xef8e,	// (0x00052ee6) set_opt_bg_pane_g8_copy2

0xef98,	// (0x00052ef0) set_opt_bg_pane_g9_copy2

0x9663,	// (0x0004d5bb) aid_size_touch_slider_mark_copy1_ParamLimits

0x9663,	// (0x0004d5bb) aid_size_touch_slider_mark_copy1

0xefa2,	// (0x00052efa) slider_set_pane_g1_copy1

0x9677,	// (0x0004d5cf) slider_set_pane_g2_copy1

0x84b5,	// (0x0004c40d) slider_set_pane_g3_copy1_ParamLimits

0x84b5,	// (0x0004c40d) slider_set_pane_g3_copy1

0x84c9,	// (0x0004c421) slider_set_pane_g4_copy1_ParamLimits

0x84c9,	// (0x0004c421) slider_set_pane_g4_copy1

0x84e1,	// (0x0004c439) slider_set_pane_g5_copy1_ParamLimits

0x84e1,	// (0x0004c439) slider_set_pane_g5_copy1

0x84b5,	// (0x0004c40d) slider_set_pane_g6_copy1_ParamLimits

0x84b5,	// (0x0004c40d) slider_set_pane_g6_copy1

0x967f,	// (0x0004d5d7) slider_set_pane_g7_copy1_ParamLimits

0x967f,	// (0x0004d5d7) slider_set_pane_g7_copy1

0x09e0,	// (0x00044938) bg_set_opt_pane_cp2_copy1

0xefab,	// (0x00052f03) setting_slider_graphic_pane_g1_copy1

0xefb4,	// (0x00052f0c) setting_slider_graphic_pane_t1_copy1

0xefc4,	// (0x00052f1c) setting_slider_graphic_pane_t2_copy1

0xefd4,	// (0x00052f2c) slider_set_pane_cp_copy1

0xefe4,	// (0x00052f3c) input_focus_pane_cp1_copy1

0xefed,	// (0x00052f45) list_set_text_pane_copy1

0xeff5,	// (0x00052f4d) setting_text_pane_g1_copy1

0x62be,	// (0x0004a216) set_text_pane_t1_copy1

0xefe4,	// (0x00052f3c) input_focus_pane_cp2_copy1

0xeff5,	// (0x00052f4d) setting_code_pane_g1_copy1

0xeffe,	// (0x00052f56) setting_code_pane_t1_copy1

0xf00c,	// (0x00052f64) list_set_graphic_pane_copy1

0x09e0,	// (0x00044938) bg_set_opt_pane_cp4_copy1

0x141f,	// (0x00045377) list_set_graphic_pane_g1_copy1_ParamLimits

0x141f,	// (0x00045377) list_set_graphic_pane_g1_copy1

0xf020,	// (0x00052f78) list_set_graphic_pane_g2_copy1

0x1437,	// (0x0004538f) list_set_graphic_pane_t1_copy1_ParamLimits

0x1437,	// (0x0004538f) list_set_graphic_pane_t1_copy1

0xc026,	// (0x0004ff7e) rs_clock_indi_pane_g1

0xf028,	// (0x00052f80) rs_clock_indi_pane_t1

0xf036,	// (0x00052f8e) rs_indi_pane

0xf03e,	// (0x00052f96) rs_indi_pane_g1

0xf047,	// (0x00052f9f) rs_indi_pane_g2

0xed5e,	// (0x00052cb6) rs_indi_pane_g3

0x0002,

0xfebc,	// (0x00053e14) rs_indi_pane_g

0x16ae,	// (0x00045606) bg_popup_preview_window_pane_cp03

0xf050,	// (0x00052fa8) popup_fep_tooltip_window_t1

0xcce0,	// (0x00050c38) popup_note2_window_g2_ParamLimits

0xcce0,	// (0x00050c38) popup_note2_window_g2

0x0001,

0xfc50,	// (0x00053ba8) popup_note2_window_g_ParamLimits

0xfc50,	// (0x00053ba8) popup_note2_window_g

0xd1cd,	// (0x00051125) bg_popup_sub_pane_cp11_ParamLimits

0xd1da,	// (0x00051132) cell_ai3_links_pane_g1_ParamLimits

0xd1f1,	// (0x00051149) cell_ai3_links_pane_t1

0x62be,	// (0x0004a216) set_text_pane_t1_copy1_ParamLimits

0x15e4,	// (0x0004553c) cell_graphic_popup_pane_cp2_ParamLimits

0x15e4,	// (0x0004553c) cell_graphic_popup_pane_cp2

0xf05e,	// (0x00052fb6) cell_graphic_popup_pane_g1_cp2

0x0cc0,	// (0x00044c18) cell_graphic_popup_pane_g2_cp2

0xf066,	// (0x00052fbe) cell_graphic_popup_pane_g3_cp2

0xf06e,	// (0x00052fc6) cell_graphic_popup_pane_t2_cp2

0x0cd1,	// (0x00044c29) grid_highlight_pane_cp3_cp2

0x10c1,	// (0x00045019) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0df2,	// (0x00044d4a) main_tmo_pane_ParamLimits

0xd525,	// (0x0005147d) popup_tmo_big_image_note_window

0xe6cd,	// (0x00052625) cell_ai5_widget_list_pane

0xe6d5,	// (0x0005262d) cell_ai5_widget_lrg_icon_pane

0xec9c,	// (0x00052bf4) tmo_note_info_pane_t1_ParamLimits

0xecb1,	// (0x00052c09) tmo_note_info_pane_t2_ParamLimits

0xecc6,	// (0x00052c1e) tmo_note_info_pane_t3_ParamLimits

0xecdb,	// (0x00052c33) tmo_note_info_pane_t4_ParamLimits

0xeced,	// (0x00052c45) tmo_note_info_pane_t5_ParamLimits

0xfeaa,	// (0x00053e02) tmo_note_info_pane_t_ParamLimits

0xee0b,	// (0x00052d63) settings_container_pane_ParamLimits

0xefdc,	// (0x00052f34) indicator_popup_pane_cp5

0xefdc,	// (0x00052f34) indicator_popup_pane_cp6

0xf00c,	// (0x00052f64) list_set_graphic_pane_copy1_ParamLimits

0x09cc,	// (0x00044924) bg_popup_window_pane_cp23

0xf07c,	// (0x00052fd4) popup_tmo_big_image_note_window_g1

0xf085,	// (0x00052fdd) popup_tmo_big_image_note_window_t1

0xf095,	// (0x00052fed) popup_tmo_big_image_note_window_t2

0xf0a5,	// (0x00052ffd) popup_tmo_big_image_note_window_t3

0x0002,

0xfec3,	// (0x00053e1b) popup_tmo_big_image_note_window_t

0xc026,	// (0x0004ff7e) cell_ai5_widget_lrg_icon_pane_g1

0xf0b5,	// (0x0005300d) cell_ai5_widget_lrg_icon_pane_t1

0xf0c3,	// (0x0005301b) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c3,	// (0x0005301b) cell_ai5_widget_list_row_pane

0xf0da,	// (0x00053032) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0da,	// (0x00053032) cell_ai5_widget_list_row_pane_g1

0xf0e7,	// (0x0005303f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0e7,	// (0x0005303f) cell_ai5_widget_list_row_pane_t1

0xf112,	// (0x0005306a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf112,	// (0x0005306a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeca,	// (0x00053e22) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeca,	// (0x00053e22) cell_ai5_widget_list_row_pane_t

0x09cc,	// (0x00044924) main_fep_vtchi_ss_pane

0xf162,	// (0x000530ba) popup_fep_char_pre_window

0xf16a,	// (0x000530c2) popup_fep_ituss_window

0xf196,	// (0x000530ee) popup_fep_vkbss_window

0x0f34,	// (0x00044e8c) grid_vkbss_keypad_pane_ParamLimits

0x0f34,	// (0x00044e8c) grid_vkbss_keypad_pane

0xf1d6,	// (0x0005312e) ituss_keypad_pane

0x969f,	// (0x0004d5f7) aid_vkbss_key_offset_ParamLimits

0x969f,	// (0x0004d5f7) aid_vkbss_key_offset

0x96ab,	// (0x0004d603) cell_vkbss_key_pane_ParamLimits

0x96ab,	// (0x0004d603) cell_vkbss_key_pane

0xf1e6,	// (0x0005313e) bg_cell_vkbss_key_g1_ParamLimits

0xf1e6,	// (0x0005313e) bg_cell_vkbss_key_g1

0xf1f2,	// (0x0005314a) cell_vkbss_key_3p_pane_ParamLimits

0xf1f2,	// (0x0005314a) cell_vkbss_key_3p_pane

0xf228,	// (0x00053180) cell_vkbss_key_g1_ParamLimits

0xf228,	// (0x00053180) cell_vkbss_key_g1

0xf25e,	// (0x000531b6) cell_vkbss_key_t1_ParamLimits

0xf25e,	// (0x000531b6) cell_vkbss_key_t1

0x96f6,	// (0x0004d64e) cell_ituss_key_pane_ParamLimits

0x96f6,	// (0x0004d64e) cell_ituss_key_pane

0xf2ba,	// (0x00053212) bg_cell_ituss_key_g1_ParamLimits

0xf2ba,	// (0x00053212) bg_cell_ituss_key_g1

0xf2c6,	// (0x0005321e) cell_ituss_key_pane_g1_ParamLimits

0xf2c6,	// (0x0005321e) cell_ituss_key_pane_g1

0x9707,	// (0x0004d65f) cell_ituss_key_pane_g2_ParamLimits

0x9707,	// (0x0004d65f) cell_ituss_key_pane_g2

0x0005,

0xfed1,	// (0x00053e29) cell_ituss_key_pane_g_ParamLimits

0xfed1,	// (0x00053e29) cell_ituss_key_pane_g

0x978b,	// (0x0004d6e3) cell_ituss_key_t1_ParamLimits

0x978b,	// (0x0004d6e3) cell_ituss_key_t1

0x97c5,	// (0x0004d71d) cell_ituss_key_t2_ParamLimits

0x97c5,	// (0x0004d71d) cell_ituss_key_t2

0x97f7,	// (0x0004d74f) cell_ituss_key_t3_ParamLimits

0x97f7,	// (0x0004d74f) cell_ituss_key_t3

0x9828,	// (0x0004d780) cell_ituss_key_t4_ParamLimits

0x9828,	// (0x0004d780) cell_ituss_key_t4

0x0004,

0xfede,	// (0x00053e36) cell_ituss_key_t_ParamLimits

0xfede,	// (0x00053e36) cell_ituss_key_t

0xf2ec,	// (0x00053244) cell_vkbss_key_3p_pane_g1

0xf2f4,	// (0x0005324c) cell_vkbss_key_3p_pane_g2

0xf2fc,	// (0x00053254) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee9,	// (0x00053e41) cell_vkbss_key_3p_pane_g

0x16ae,	// (0x00045606) bg_popup_fep_char_preview_window_cp02

0xf304,	// (0x0005325c) popup_fep_char_pre_window_t1

0xe656,	// (0x000525ae) main_ai5_sk_pane

0xed67,	// (0x00052cbf) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed73,	// (0x00052ccb) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc70d,	// (0x00050665) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed88,	// (0x00052ce0) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb5,	// (0x00053e0d) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed94,	// (0x00052cec) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0df2,	// (0x00044d4a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf312,	// (0x0005326a) main_ai5_sk_pane_g1

0x9f37,	// (0x0004de8f) popup_query_code_window_g1

0xf180,	// (0x000530d8) popup_fep_vkb_icf_pane

0xf1ad,	// (0x00053105) popup_fep_vtchi_icf_pane

0xf31b,	// (0x00053273) bg_icf_pane

0xf31b,	// (0x00053273) list_vkb_icf_pane

0xf327,	// (0x0005327f) bg_icf_pane_cp01

0xf33a,	// (0x00053292) vtchi_icf_list_pane

0xf39a,	// (0x000532f2) list_vkb_icf_pane_t1_ParamLimits

0xf39a,	// (0x000532f2) list_vkb_icf_pane_t1

0xf3bf,	// (0x00053317) vtchi_icf_list_pane_t1_ParamLimits

0xf3bf,	// (0x00053317) vtchi_icf_list_pane_t1

0xf16a,	// (0x000530c2) popup_fep_ituss_window_ParamLimits

0xf1ad,	// (0x00053105) popup_fep_vtchi_icf_pane_ParamLimits

0xf1d6,	// (0x0005312e) ituss_keypad_pane_ParamLimits

0x9695,	// (0x0004d5ed) ituss_sks_pane

0xf31b,	// (0x00053273) bg_icf_pane_ParamLimits

0xf13a,	// (0x00053092) icf_edit_indi_pane_ParamLimits

0xf13a,	// (0x00053092) icf_edit_indi_pane

0xf31b,	// (0x00053273) list_vkb_icf_pane_ParamLimits

0xf327,	// (0x0005327f) bg_icf_pane_cp01_ParamLimits

0xf155,	// (0x000530ad) icf_edit_indi_pane_cp01_ParamLimits

0xf155,	// (0x000530ad) icf_edit_indi_pane_cp01

0xf33a,	// (0x00053292) vtchi_query_pane

0xe4d2,	// (0x0005242a) icf_edit_indi_pane_g1_ParamLimits

0xe4d2,	// (0x0005242a) icf_edit_indi_pane_g1

0xf43a,	// (0x00053392) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x00053392) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x00053e6c) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x00053e6c) icf_edit_indi_pane_g

0xf44e,	// (0x000533a6) icf_edit_indi_pane_t1

0xf3e3,	// (0x0005333b) bg_input_focus_pane_cp042

0x0d34,	// (0x00044c8c) vtchi_button_pane

0xf3ec,	// (0x00053344) vtchi_query_pane_t1

0xf3fa,	// (0x00053352) vtchi_query_pane_t2

0xf408,	// (0x00053360) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x00053e5b) vtchi_query_pane_t

0x09cc,	// (0x00044924) bg_button_pane_cp13

0xf416,	// (0x0005336e) vtchi_button_pane_g1

0x986b,	// (0x0004d7c3) ituss_sks_pane_g1

0x9876,	// (0x0004d7ce) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x00053e62) ituss_sks_pane_g

0xf41e,	// (0x00053376) ituss_sks_pane_t1

0xf42c,	// (0x00053384) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x00053e67) ituss_sks_pane_t

0xba9a,	// (0x0004f9f2) indicator_nsta_pane_cp_g1

0xbaa3,	// (0x0004f9fb) indicator_nsta_pane_cp_g2

0xbaab,	// (0x0004fa03) indicator_nsta_pane_cp_g3

0xbab3,	// (0x0004fa0b) indicator_nsta_pane_cp_g4

0xbaa3,	// (0x0004f9fb) indicator_nsta_pane_cp_g5

0xbaab,	// (0x0004fa03) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x000539f2) indicator_nsta_pane_cp_g

0xe225,	// (0x0005217d) cell_graphic2_pane_t2_ParamLimits

0xe225,	// (0x0005217d) cell_graphic2_pane_t2

0x0001,

0xfda0,	// (0x00053cf8) cell_graphic2_pane_t_ParamLimits

0xfda0,	// (0x00053cf8) cell_graphic2_pane_t

0xe251,	// (0x000521a9) cell_graphic2_control_pane_t1

0x7228,	// (0x0004b180) signal_pane_g3_ParamLimits

0x7228,	// (0x0004b180) signal_pane_g3

0x723a,	// (0x0004b192) signal_pane_g4_ParamLimits

0x723a,	// (0x0004b192) signal_pane_g4

0xf124,	// (0x0005307c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf124,	// (0x0005307c) cell_ai5_widget_list_row_pane_t3

0xf2da,	// (0x00053232) cell_ituss_key_pane_t1_ParamLimits

0xf2da,	// (0x00053232) cell_ituss_key_pane_t1

0x9b6a,	// (0x0004dac2) form_field_data_wide_pane_vc_t2_ParamLimits

0x9b6a,	// (0x0004dac2) form_field_data_wide_pane_vc_t2

0x9b7e,	// (0x0004dad6) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b7e,	// (0x0004dad6) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x00053737) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x00053737) form_field_data_wide_pane_vc_t

0xb744,	// (0x0004f69c) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb744,	// (0x0004f69c) form_field_slider_wide_pane_vc_t3

0xb822,	// (0x0004f77a) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb822,	// (0x0004f77a) form_field_popup_wide_pane_vc_t2

0xb839,	// (0x0004f791) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb839,	// (0x0004f791) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x000539e1) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x000539e1) form_field_popup_wide_pane_vc_t

0x9463,	// (0x0004d3bb) aid_fshwr2_btn_pane_ParamLimits

0x9477,	// (0x0004d3cf) aid_fshwr2_syb_pane_ParamLimits

0x948b,	// (0x0004d3e3) aid_fshwr2_txt_pane_ParamLimits

0x0df2,	// (0x00044d4a) fshwr2_bg_pane_ParamLimits

0x949b,	// (0x0004d3f3) fshwr2_func_candi_pane_ParamLimits

0x94bf,	// (0x0004d417) fshwr2_hwr_syb_pane_ParamLimits

0x94d9,	// (0x0004d431) fshwr2_icf_pane_ParamLimits

0x8746,	// (0x0004c69e) list_double_graphic_pane_vc_g4_ParamLimits

0x8746,	// (0x0004c69e) list_double_graphic_pane_vc_g4

0x9727,	// (0x0004d67f) cell_ituss_key_pane_g3_ParamLimits

0x9727,	// (0x0004d67f) cell_ituss_key_pane_g3

0x9859,	// (0x0004d7b1) cell_ituss_key_t5_ParamLimits

0x9859,	// (0x0004d7b1) cell_ituss_key_t5

0xf196,	// (0x000530ee) popup_fep_vkbss_window_ParamLimits

0xe660,	// (0x000525b8) aid_cell_ai5_quarter

0xf44e,	// (0x000533a6) icf_edit_indi_pane_t1_ParamLimits

0x6949,	// (0x0004a8a1) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6949,	// (0x0004a8a1) aid_tch_indicator_popup_pane_cp2

0x695c,	// (0x0004a8b4) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x695c,	// (0x0004a8b4) aid_tch_query_popup_data_pane_cp2

0x9edf,	// (0x0004de37) aid_tch_query_popup_pane_ParamLimits

0x9edf,	// (0x0004de37) aid_tch_query_popup_pane

0x9edf,	// (0x0004de37) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9edf,	// (0x0004de37) aid_tch_query_popup_data_pane_cp1

0x0f34,	// (0x00044e8c) cell_fshwr2_syb_bg_pane_ParamLimits

0x95c1,	// (0x0004d519) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x95d5,	// (0x0004d52d) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf180,	// (0x000530d8) popup_fep_vkb_icf_pane_ParamLimits

0x92b1,	// (0x0004d209) bg_popup_fep_char_preview_window_g10

0xe795,	// (0x000526ed) cell_ai5_widget_pane_g11_ParamLimits

0xe795,	// (0x000526ed) cell_ai5_widget_pane_g11

0xe7a1,	// (0x000526f9) cell_ai5_widget_pane_g12_ParamLimits

0xe7a1,	// (0x000526f9) cell_ai5_widget_pane_g12

0xe7ad,	// (0x00052705) cell_ai5_widget_pane_g13_ParamLimits

0xe7ad,	// (0x00052705) cell_ai5_widget_pane_g13

0xe8dc,	// (0x00052834) cell_ai5_widget_pane_t11_ParamLimits

0xe8dc,	// (0x00052834) cell_ai5_widget_pane_t11

0xe8ee,	// (0x00052846) cell_ai5_widget_pane_t12_ParamLimits

0xe8ee,	// (0x00052846) cell_ai5_widget_pane_t12

0x9733,	// (0x0004d68b) cell_ituss_key_pane_g4_ParamLimits

0x9733,	// (0x0004d68b) cell_ituss_key_pane_g4

0x974f,	// (0x0004d6a7) cell_ituss_key_pane_g5_ParamLimits

0x974f,	// (0x0004d6a7) cell_ituss_key_pane_g5

0x976b,	// (0x0004d6c3) cell_ituss_key_pane_g6_ParamLimits

0x976b,	// (0x0004d6c3) cell_ituss_key_pane_g6

0x9a50,	// (0x0004d9a8) bg_icf_pane_g1

0xf342,	// (0x0005329a) bg_icf_pane_g2

0xf34e,	// (0x000532a6) bg_icf_pane_g3

0xf358,	// (0x000532b0) bg_icf_pane_g4

0xf364,	// (0x000532bc) bg_icf_pane_g5

0xf36e,	// (0x000532c6) bg_icf_pane_g6

0xf37a,	// (0x000532d2) bg_icf_pane_g7

0xf384,	// (0x000532dc) bg_icf_pane_g8

0xf390,	// (0x000532e8) bg_icf_pane_g9

0x0008,

0xfef0,	// (0x00053e48) bg_icf_pane_g

0xf1c3,	// (0x0005311b) popup_hyb_candi_window_ParamLimits

0xf1c3,	// (0x0005311b) popup_hyb_candi_window

0x9adc,	// (0x0004da34) bg_popup_sub_pane_cp01_ParamLimits

0x9adc,	// (0x0004da34) bg_popup_sub_pane_cp01

0xf467,	// (0x000533bf) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x000533bf) entry_hyb_candi_pane

0xf476,	// (0x000533ce) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x000533ce) grid_hyb_candi_pane

0xf48b,	// (0x000533e3) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x000533e3) grid_hyb_phrase_pane

0xf49a,	// (0x000533f2) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x000533f2) cell_hyb_candi_pane

0xf4bd,	// (0x00053415) cell_hyb_candi_scroll_pane

0x1244,	// (0x0004519c) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0005341e) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0005342c) cell_hyb_phrase_pane

0x1244,	// (0x0004519c) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x00053435) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x00053443) entry_hyb_candi_pane_t1

0x16ae,	// (0x00045606) input_focus_pane_cp06

0xf4f9,	// (0x00053451) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x00053459) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x00053461) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x00053469) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x00053471) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x00053479) cell_hyb_candi_scroll_pane_g4
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
