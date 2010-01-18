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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00016b1e };

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
0x86ad,	// (0x0001f1cb) Screen

0x86b9,	// (0x0001f1d7) application_window_ParamLimits

0x86b9,	// (0x0001f1d7) application_window

0xbb79,	// (0x00022697) screen_g1

0x86f1,	// (0x0001f20f) area_bottom_pane_ParamLimits

0x86f1,	// (0x0001f20f) area_bottom_pane

0x5556,	// (0x0001c074) area_top_pane_ParamLimits

0x5556,	// (0x0001c074) area_top_pane

0x55ea,	// (0x0001c108) main_pane_ParamLimits

0x55ea,	// (0x0001c108) main_pane

0xbb83,	// (0x000226a1) misc_graphics

0x9719,	// (0x00020237) battery_pane_ParamLimits

0x9719,	// (0x00020237) battery_pane

0xd927,	// (0x00024445) bg_status_flat_pane_g8

0xd92f,	// (0x0002444d) bg_status_flat_pane_g9

0xd05c,	// (0x00023b7a) context_pane_ParamLimits

0xd05c,	// (0x00023b7a) context_pane

0x9884,	// (0x000203a2) navi_pane_ParamLimits

0x9884,	// (0x000203a2) navi_pane

0x98fb,	// (0x00020419) signal_pane_ParamLimits

0x98fb,	// (0x00020419) signal_pane

0x0008,

0xf87e,	// (0x0002639c) bg_status_flat_pane_g

0x998b,	// (0x000204a9) status_pane_g1_ParamLimits

0x998b,	// (0x000204a9) status_pane_g1

0x99a1,	// (0x000204bf) status_pane_g2_ParamLimits

0x99a1,	// (0x000204bf) status_pane_g2

0xd0c1,	// (0x00023bdf) status_pane_g3_ParamLimits

0xd0c1,	// (0x00023bdf) status_pane_g3

0x0004,

0xf7b8,	// (0x000262d6) status_pane_g_ParamLimits

0xf7b8,	// (0x000262d6) status_pane_g

0x99ad,	// (0x000204cb) title_pane_ParamLimits

0x99ad,	// (0x000204cb) title_pane

0x9a0e,	// (0x0002052c) uni_indicator_pane_ParamLimits

0x9a0e,	// (0x0002052c) uni_indicator_pane

0xce87,	// (0x000239a5) bg_list_pane_ParamLimits

0xce87,	// (0x000239a5) bg_list_pane

0x4c21,	// (0x0001b73f) find_pane

0x9007,	// (0x0001fb25) listscroll_app_pane_ParamLimits

0x9007,	// (0x0001fb25) listscroll_app_pane

0xcea7,	// (0x000239c5) listscroll_form_pane

0x4c29,	// (0x0001b747) listscroll_gen_pane_ParamLimits

0x4c29,	// (0x0001b747) listscroll_gen_pane

0xcea7,	// (0x000239c5) listscroll_set_pane

0xdc0d,	// (0x0002472b) main_idle_act_pane

0xcc6d,	// (0x0002378b) main_idle_trad_pane

0xcc6d,	// (0x0002378b) main_list_empty_pane

0xc37d,	// (0x00022e9b) main_midp_pane

0xcec1,	// (0x000239df) main_pane_g1_ParamLimits

0xcec1,	// (0x000239df) main_pane_g1

0x9013,	// (0x0001fb31) popup_ai_message_window_ParamLimits

0x9013,	// (0x0001fb31) popup_ai_message_window

0x90a4,	// (0x0001fbc2) popup_fep_china_uni_window_ParamLimits

0x90a4,	// (0x0001fbc2) popup_fep_china_uni_window

0xcef3,	// (0x00023a11) popup_fep_japan_candidate_window_ParamLimits

0xcef3,	// (0x00023a11) popup_fep_japan_candidate_window

0xcf11,	// (0x00023a2f) popup_fep_japan_predictive_window_ParamLimits

0xcf11,	// (0x00023a2f) popup_fep_japan_predictive_window

0x90fe,	// (0x0001fc1c) popup_find_window

0x911b,	// (0x0001fc39) popup_grid_graphic_window_ParamLimits

0x911b,	// (0x0001fc39) popup_grid_graphic_window

0xcf41,	// (0x00023a5f) popup_large_graphic_colour_window

0x91ad,	// (0x0001fccb) popup_menu_window_ParamLimits

0x91ad,	// (0x0001fccb) popup_menu_window

0x9379,	// (0x0001fe97) popup_note_image_window

0x933f,	// (0x0001fe5d) popup_note_wait_window_ParamLimits

0x933f,	// (0x0001fe5d) popup_note_wait_window

0x9391,	// (0x0001feaf) popup_note_window_ParamLimits

0x9391,	// (0x0001feaf) popup_note_window

0x9437,	// (0x0001ff55) popup_query_code_window_ParamLimits

0x9437,	// (0x0001ff55) popup_query_code_window

0xcf75,	// (0x00023a93) popup_query_data_code_window_ParamLimits

0xcf75,	// (0x00023a93) popup_query_data_code_window

0x9471,	// (0x0001ff8f) popup_query_data_window_ParamLimits

0x9471,	// (0x0001ff8f) popup_query_data_window

0x94e7,	// (0x00020005) popup_query_sat_info_window_ParamLimits

0x94e7,	// (0x00020005) popup_query_sat_info_window

0x957e,	// (0x0002009c) popup_snote_single_graphic_window_ParamLimits

0x957e,	// (0x0002009c) popup_snote_single_graphic_window

0x957e,	// (0x0002009c) popup_snote_single_text_window_ParamLimits

0x957e,	// (0x0002009c) popup_snote_single_text_window

0xcf8c,	// (0x00023aaa) popup_sub_window_general

0xcfd2,	// (0x00023af0) popup_window_general_ParamLimits

0xcfd2,	// (0x00023af0) popup_window_general

0xcfe7,	// (0x00023b05) power_save_pane

0x8e96,	// (0x0001f9b4) control_pane_g1_ParamLimits

0x8e96,	// (0x0001f9b4) control_pane_g1

0x5d5a,	// (0x0001c878) control_pane_g2_ParamLimits

0x5d5a,	// (0x0001c878) control_pane_g2

0xce61,	// (0x0002397f) control_pane_g3_ParamLimits

0xce61,	// (0x0002397f) control_pane_g3

0x0007,

0xf7a0,	// (0x000262be) control_pane_g_ParamLimits

0xf7a0,	// (0x000262be) control_pane_g

0x8efe,	// (0x0001fa1c) control_pane_t1_ParamLimits

0x8efe,	// (0x0001fa1c) control_pane_t1

0x8f5c,	// (0x0001fa7a) control_pane_t2_ParamLimits

0x8f5c,	// (0x0001fa7a) control_pane_t2

0x0002,

0xf7b1,	// (0x000262cf) control_pane_t_ParamLimits

0xf7b1,	// (0x000262cf) control_pane_t

0xcd82,	// (0x000238a0) navi_navi_volume_pane_cp1

0xcd8b,	// (0x000238a9) status_small_icon_pane

0xcd93,	// (0x000238b1) status_small_pane_g1_ParamLimits

0xcd93,	// (0x000238b1) status_small_pane_g1

0xcdc7,	// (0x000238e5) status_small_pane_g2_ParamLimits

0xcdc7,	// (0x000238e5) status_small_pane_g2

0xcdd3,	// (0x000238f1) status_small_pane_g3_ParamLimits

0xcdd3,	// (0x000238f1) status_small_pane_g3

0xcddf,	// (0x000238fd) status_small_pane_g4_ParamLimits

0xcddf,	// (0x000238fd) status_small_pane_g4

0xcdeb,	// (0x00023909) status_small_pane_g5_ParamLimits

0xcdeb,	// (0x00023909) status_small_pane_g5

0xcdfa,	// (0x00023918) status_small_pane_g6_ParamLimits

0xcdfa,	// (0x00023918) status_small_pane_g6

0x0007,

0xf78f,	// (0x000262ad) status_small_pane_g_ParamLimits

0xf78f,	// (0x000262ad) status_small_pane_g

0xce2a,	// (0x00023948) status_small_pane_t1

0xce4d,	// (0x0002396b) status_small_wait_pane_ParamLimits

0xce4d,	// (0x0002396b) status_small_wait_pane

0x8d37,	// (0x0001f855) aid_levels_signal_ParamLimits

0x8d37,	// (0x0001f855) aid_levels_signal

0x8d4f,	// (0x0001f86d) signal_pane_g1_ParamLimits

0x8d4f,	// (0x0001f86d) signal_pane_g1

0x8d6a,	// (0x0001f888) signal_pane_g2_ParamLimits

0x8d6a,	// (0x0001f888) signal_pane_g2

0x0001,

0xf724,	// (0x00026242) signal_pane_g_ParamLimits

0xf724,	// (0x00026242) signal_pane_g

0xc7b1,	// (0x000232cf) context_pane_g1

0x886a,	// (0x0001f388) title_pane_g1

0x889f,	// (0x0001f3bd) title_pane_t1

0xbb99,	// (0x000226b7) title_pane_t2

0xbbbf,	// (0x000226dd) title_pane_t3

0x0002,

0xf573,	// (0x00026091) title_pane_t

0x9a36,	// (0x00020554) aid_levels_battery_ParamLimits

0x9a36,	// (0x00020554) aid_levels_battery

0x9a52,	// (0x00020570) battery_pane_g1_ParamLimits

0x9a52,	// (0x00020570) battery_pane_g1

0x9a6f,	// (0x0002058d) battery_pane_g2_ParamLimits

0x9a6f,	// (0x0002058d) battery_pane_g2

0x0001,

0xf7c3,	// (0x000262e1) battery_pane_g_ParamLimits

0xf7c3,	// (0x000262e1) battery_pane_g

0x9e73,	// (0x00020991) uni_indicator_pane_g1

0x9e88,	// (0x000209a6) uni_indicator_pane_g2

0x9e9d,	// (0x000209bb) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00026444) uni_indicator_pane_g

0xcadd,	// (0x000235fb) navi_icon_pane_ParamLimits

0xcadd,	// (0x000235fb) navi_icon_pane

0xca24,	// (0x00023542) navi_midp_pane

0xcaf9,	// (0x00023617) navi_navi_pane

0xcb03,	// (0x00023621) navi_text_pane_ParamLimits

0xcb03,	// (0x00023621) navi_text_pane

0xbb79,	// (0x00022697) status_small_wait_pane_g1

0xbe9a,	// (0x000229b8) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x0002643f) status_small_wait_pane_g

0x9e12,	// (0x00020930) navi_navi_icon_text_pane

0x9e1a,	// (0x00020938) navi_navi_pane_g1_ParamLimits

0x9e1a,	// (0x00020938) navi_navi_pane_g1

0x9e2c,	// (0x0002094a) navi_navi_pane_g2_ParamLimits

0x9e2c,	// (0x0002094a) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x0002640d) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x0002640d) navi_navi_pane_g

0xdebc,	// (0x000249da) navi_navi_tabs_pane

0x9e3e,	// (0x0002095c) navi_navi_text_pane

0x9e12,	// (0x00020930) navi_navi_volume_pane

0x9e00,	// (0x0002091e) navi_text_pane_t1

0x9df4,	// (0x00020912) navi_icon_pane_g1

0xddfd,	// (0x0002491b) navi_navi_text_pane_t1

0x9de3,	// (0x00020901) navi_navi_volume_pane_g1

0x9deb,	// (0x00020909) volume_small_pane

0x9d3f,	// (0x0002085d) navi_navi_icon_text_pane_g1

0x9d47,	// (0x00020865) navi_navi_icon_text_pane_t1

0xcaf9,	// (0x00023617) navi_tabs_2_long_pane

0xcaf9,	// (0x00023617) navi_tabs_2_pane

0xcaf9,	// (0x00023617) navi_tabs_3_long_pane

0xcaf9,	// (0x00023617) navi_tabs_3_pane

0xcaf9,	// (0x00023617) navi_tabs_4_pane

0x9d1f,	// (0x0002083d) tabs_2_active_pane_ParamLimits

0x9d1f,	// (0x0002083d) tabs_2_active_pane

0x9d2f,	// (0x0002084d) tabs_2_passive_pane_ParamLimits

0x9d2f,	// (0x0002084d) tabs_2_passive_pane

0x9ced,	// (0x0002080b) tabs_3_active_pane_ParamLimits

0x9ced,	// (0x0002080b) tabs_3_active_pane

0x9cfd,	// (0x0002081b) tabs_3_passive_pane_ParamLimits

0x9cfd,	// (0x0002081b) tabs_3_passive_pane

0x9d0e,	// (0x0002082c) tabs_3_passive_pane_cp_ParamLimits

0x9d0e,	// (0x0002082c) tabs_3_passive_pane_cp

0x9ca9,	// (0x000207c7) tabs_4_active_pane_ParamLimits

0x9ca9,	// (0x000207c7) tabs_4_active_pane

0x9cba,	// (0x000207d8) tabs_4_passive_pane_ParamLimits

0x9cba,	// (0x000207d8) tabs_4_passive_pane

0x9ccb,	// (0x000207e9) tabs_4_passive_pane_cp_ParamLimits

0x9ccb,	// (0x000207e9) tabs_4_passive_pane_cp

0x9cdc,	// (0x000207fa) tabs_4_passive_pane_cp2_ParamLimits

0x9cdc,	// (0x000207fa) tabs_4_passive_pane_cp2

0x9c89,	// (0x000207a7) tabs_2_long_active_pane_ParamLimits

0x9c89,	// (0x000207a7) tabs_2_long_active_pane

0x9c99,	// (0x000207b7) tabs_2_long_passive_pane_ParamLimits

0x9c99,	// (0x000207b7) tabs_2_long_passive_pane

0x9c54,	// (0x00020772) tabs_3_long_active_pane_ParamLimits

0x9c54,	// (0x00020772) tabs_3_long_active_pane

0x9c65,	// (0x00020783) tabs_3_long_passive_pane_ParamLimits

0x9c65,	// (0x00020783) tabs_3_long_passive_pane

0x9c78,	// (0x00020796) tabs_3_long_passive_pane_cp_ParamLimits

0x9c78,	// (0x00020796) tabs_3_long_passive_pane_cp

0x5fb2,	// (0x0001cad0) volume_small_pane_g1

0x9c03,	// (0x00020721) volume_small_pane_g2

0x9c0c,	// (0x0002072a) volume_small_pane_g3

0x9c15,	// (0x00020733) volume_small_pane_g4

0x9c1e,	// (0x0002073c) volume_small_pane_g5

0x9c27,	// (0x00020745) volume_small_pane_g6

0x9c30,	// (0x0002074e) volume_small_pane_g7

0x9c39,	// (0x00020757) volume_small_pane_g8

0x9c42,	// (0x00020760) volume_small_pane_g9

0x9c4b,	// (0x00020769) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x000263d9) volume_small_pane_g

0xbbd1,	// (0x000226ef) bg_active_tab_pane_cp2_ParamLimits

0xbbd1,	// (0x000226ef) bg_active_tab_pane_cp2

0x892b,	// (0x0001f449) tabs_3_active_pane_g1

0x8933,	// (0x0001f451) tabs_3_active_pane_t1

0xbbd1,	// (0x000226ef) bg_passive_tab_pane_cp2_ParamLimits

0xbbd1,	// (0x000226ef) bg_passive_tab_pane_cp2

0x892b,	// (0x0001f449) tabs_3_passive_pane_g1

0x8933,	// (0x0001f451) tabs_3_passive_pane_t1

0xbbd1,	// (0x000226ef) bg_active_tab_pane_cp3_ParamLimits

0xbbd1,	// (0x000226ef) bg_active_tab_pane_cp3

0x8945,	// (0x0001f463) tabs_4_active_pane_g1

0x894d,	// (0x0001f46b) tabs_4_active_pane_t1

0xbbd1,	// (0x000226ef) bg_passive_tab_pane_cp3_ParamLimits

0xbbd1,	// (0x000226ef) bg_passive_tab_pane_cp3

0x8945,	// (0x0001f463) tabs_4_1_passive_pane_g1

0x894d,	// (0x0001f46b) tabs_4_1_passive_pane_t1

0xc37d,	// (0x00022e9b) list_highlight_pane_cp2

0x9f2a,	// (0x00020a48) list_set_pane_ParamLimits

0x9f2a,	// (0x00020a48) list_set_pane

0x9fc4,	// (0x00020ae2) main_pane_set_t1_ParamLimits

0x9fc4,	// (0x00020ae2) main_pane_set_t1

0x9fe4,	// (0x00020b02) main_pane_set_t2_ParamLimits

0x9fe4,	// (0x00020b02) main_pane_set_t2

0x9ff8,	// (0x00020b16) main_pane_set_t3_ParamLimits

0x9ff8,	// (0x00020b16) main_pane_set_t3

0xa00a,	// (0x00020b28) main_pane_set_t4_ParamLimits

0xa00a,	// (0x00020b28) main_pane_set_t4

0x0003,

0xf98b,	// (0x000264a9) main_pane_set_t_ParamLimits

0xf98b,	// (0x000264a9) main_pane_set_t

0xa01c,	// (0x00020b3a) setting_code_pane

0xa024,	// (0x00020b42) setting_slider_graphic_pane

0xa024,	// (0x00020b42) setting_slider_pane

0xa024,	// (0x00020b42) setting_text_pane

0xa024,	// (0x00020b42) setting_volume_pane

0x581b,	// (0x0001c339) volume_set_pane

0xbbdf,	// (0x000226fd) bg_set_opt_pane_cp

0x5823,	// (0x0001c341) setting_slider_pane_t1

0x583c,	// (0x0001c35a) setting_slider_pane_t2

0x5855,	// (0x0001c373) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00026098) setting_slider_pane_t

0x586c,	// (0x0001c38a) slider_set_pane

0xbb83,	// (0x000226a1) bg_set_opt_pane_cp2

0xbbed,	// (0x0002270b) setting_slider_graphic_pane_g1

0x5882,	// (0x0001c3a0) setting_slider_graphic_pane_t1

0x5891,	// (0x0001c3af) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0002609f) setting_slider_graphic_pane_t

0x58a0,	// (0x0001c3be) slider_set_pane_cp

0xbb83,	// (0x000226a1) input_focus_pane_cp1

0xe305,	// (0x00024e23) list_set_text_pane

0xbb79,	// (0x00022697) setting_text_pane_g1

0xbb83,	// (0x000226a1) input_focus_pane_cp2

0xbb79,	// (0x00022697) setting_code_pane_g1

0xbbf6,	// (0x00022714) setting_code_pane_t1

0x44d4,	// (0x0001aff2) set_text_pane_t1_ParamLimits

0x44d4,	// (0x0001aff2) set_text_pane_t1

0xc28d,	// (0x00022dab) set_opt_bg_pane_g1

0xc295,	// (0x00022db3) set_opt_bg_pane_g2

0xe2e5,	// (0x00024e03) set_opt_bg_pane_g3

0xc2a5,	// (0x00022dc3) set_opt_bg_pane_g4

0xc2ad,	// (0x00022dcb) set_opt_bg_pane_g5

0xc2b5,	// (0x00022dd3) set_opt_bg_pane_g6

0xe2ed,	// (0x00024e0b) set_opt_bg_pane_g7

0xe2f5,	// (0x00024e13) set_opt_bg_pane_g8

0xe2fd,	// (0x00024e1b) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x00026496) set_opt_bg_pane_g

0xe2d8,	// (0x00024df6) slider_set_pane_g1

0x6180,	// (0x0001cc9e) slider_set_pane_g2

0x0006,

0xf969,	// (0x00026487) slider_set_pane_g

0x611c,	// (0x0001cc3a) volume_set_pane_g1

0x6124,	// (0x0001cc42) volume_set_pane_g2

0x612c,	// (0x0001cc4a) volume_set_pane_g3

0x6134,	// (0x0001cc52) volume_set_pane_g4

0x613c,	// (0x0001cc5a) volume_set_pane_g5

0x6144,	// (0x0001cc62) volume_set_pane_g6

0x614c,	// (0x0001cc6a) volume_set_pane_g7

0x6154,	// (0x0001cc72) volume_set_pane_g8

0x615c,	// (0x0001cc7a) volume_set_pane_g9

0x6164,	// (0x0001cc82) volume_set_pane_g10

0x0009,

0xf941,	// (0x0002645f) volume_set_pane_g

0x895f,	// (0x0001f47d) indicator_pane_ParamLimits

0x895f,	// (0x0001f47d) indicator_pane

0x8987,	// (0x0001f4a5) main_idle_pane_g2_ParamLimits

0x8987,	// (0x0001f4a5) main_idle_pane_g2

0x89bf,	// (0x0001f4dd) main_pane_idle_g1_ParamLimits

0x89bf,	// (0x0001f4dd) main_pane_idle_g1

0xbc04,	// (0x00022722) popup_clock_digital_analogue_window_ParamLimits

0xbc04,	// (0x00022722) popup_clock_digital_analogue_window

0x89e6,	// (0x0001f504) soft_indicator_pane_ParamLimits

0x89e6,	// (0x0001f504) soft_indicator_pane

0x8a00,	// (0x0001f51e) wallpaper_pane_ParamLimits

0x8a00,	// (0x0001f51e) wallpaper_pane

0xbb79,	// (0x00022697) wallpaper_pane_g1

0x8a12,	// (0x0001f530) indicator_pane_g1_ParamLimits

0x8a12,	// (0x0001f530) indicator_pane_g1

0xe458,	// (0x00024f76) navi_navi_icon_text_pane_srt_g1

0xbc32,	// (0x00022750) soft_indicator_pane_t1

0xbc4c,	// (0x0002276a) aid_ps_area_pane

0x8a2b,	// (0x0001f549) aid_ps_clock_pane

0xbc5d,	// (0x0002277b) aid_ps_indicator_pane

0xbc69,	// (0x00022787) indicator_ps_pane_ParamLimits

0xbc69,	// (0x00022787) indicator_ps_pane

0xbc78,	// (0x00022796) power_save_pane_g1_ParamLimits

0xbc78,	// (0x00022796) power_save_pane_g1

0xbc84,	// (0x000227a2) power_save_pane_g2_ParamLimits

0xbc84,	// (0x000227a2) power_save_pane_g2

0x544a,	// (0x0001bf68) aid_navinavi_width_pane

0xbc4c,	// (0x0002276a) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x000260a4) power_save_pane_g_ParamLimits

0xf586,	// (0x000260a4) power_save_pane_g

0xbc92,	// (0x000227b0) power_save_pane_t1_ParamLimits

0xbc92,	// (0x000227b0) power_save_pane_t1

0x8a2b,	// (0x0001f549) aid_ps_clock_pane_ParamLimits

0xbc5d,	// (0x0002277b) aid_ps_indicator_pane_ParamLimits

0xbca4,	// (0x000227c2) power_save_pane_t4_ParamLimits

0xbca4,	// (0x000227c2) power_save_pane_t4

0x0001,

0xf58b,	// (0x000260a9) power_save_pane_t_ParamLimits

0xf58b,	// (0x000260a9) power_save_pane_t

0xbcce,	// (0x000227ec) power_save_t3_ParamLimits

0xbcce,	// (0x000227ec) power_save_t3

0xbcb9,	// (0x000227d7) power_save_t2_ParamLimits

0xbcb9,	// (0x000227d7) power_save_t2

0xbce3,	// (0x00022801) indicator_ps_pane_g1

0x8a39,	// (0x0001f557) ai_gene_pane_ParamLimits

0x8a39,	// (0x0001f557) ai_gene_pane

0x8a50,	// (0x0001f56e) ai_links_pane_ParamLimits

0x8a50,	// (0x0001f56e) ai_links_pane

0x8a68,	// (0x0001f586) indicator_pane_cp1_ParamLimits

0x8a68,	// (0x0001f586) indicator_pane_cp1

0x8a77,	// (0x0001f595) main_pane_idle_g1_cp_ParamLimits

0x8a77,	// (0x0001f595) main_pane_idle_g1_cp

0xbcec,	// (0x0002280a) popup_ai_links_title_window

0x8a8f,	// (0x0001f5ad) soft_indicator_pane_cp1_ParamLimits

0x8a8f,	// (0x0001f5ad) soft_indicator_pane_cp1

0xe12c,	// (0x00024c4a) ai_links_pane_g1

0xe135,	// (0x00024c53) grid_ai_links_pane

0x9e6a,	// (0x00020988) ai_gene_pane_1

0xe11a,	// (0x00024c38) ai_gene_pane_2

0xe123,	// (0x00024c41) list_highlight_pane_cp4

0x9e46,	// (0x00020964) cell_ai_link_pane_ParamLimits

0x9e46,	// (0x00020964) cell_ai_link_pane

0xe112,	// (0x00024c30) cell_ai_link_pane_g1

0xbe9a,	// (0x000229b8) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x0002643a) cell_ai_link_pane_g

0xbb83,	// (0x000226a1) grid_highlight_cp2

0xbb83,	// (0x000226a1) bg_popup_sub_pane_cp1

0xbd03,	// (0x00022821) popup_ai_links_title_window_t1

0xe060,	// (0x00024b7e) ai_gene_pane_1_g1_ParamLimits

0xe060,	// (0x00024b7e) ai_gene_pane_1_g1

0xe06c,	// (0x00024b8a) ai_gene_pane_1_g2_ParamLimits

0xe06c,	// (0x00024b8a) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x00026430) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x00026430) ai_gene_pane_1_g

0xe079,	// (0x00024b97) ai_gene_pane_1_t1_ParamLimits

0xe079,	// (0x00024b97) ai_gene_pane_1_t1

0xe0ad,	// (0x00024bcb) grid_ai_soft_ind_pane

0xe04b,	// (0x00024b69) ai_gene_pane_2_t1_ParamLimits

0xe04b,	// (0x00024b69) ai_gene_pane_2_t1

0x8aa3,	// (0x0001f5c1) main_pane_empty_t1_ParamLimits

0x8aa3,	// (0x0001f5c1) main_pane_empty_t1

0x8abb,	// (0x0001f5d9) main_pane_empty_t2_ParamLimits

0x8abb,	// (0x0001f5d9) main_pane_empty_t2

0x8ad0,	// (0x0001f5ee) main_pane_empty_t3_ParamLimits

0x8ad0,	// (0x0001f5ee) main_pane_empty_t3

0x8ae2,	// (0x0001f600) main_pane_empty_t4_ParamLimits

0x8ae2,	// (0x0001f600) main_pane_empty_t4

0x8af4,	// (0x0001f612) main_pane_empty_t5_ParamLimits

0x8af4,	// (0x0001f612) main_pane_empty_t5

0x0004,

0xf590,	// (0x000260ae) main_pane_empty_t_ParamLimits

0xf590,	// (0x000260ae) main_pane_empty_t

0xc2de,	// (0x00022dfc) bg_popup_window_pane_ParamLimits

0xc2de,	// (0x00022dfc) bg_popup_window_pane

0xde0b,	// (0x00024929) find_popup_pane_cp2_ParamLimits

0xde0b,	// (0x00024929) find_popup_pane_cp2

0xde17,	// (0x00024935) heading_pane_ParamLimits

0xde17,	// (0x00024935) heading_pane

0xbb83,	// (0x000226a1) bg_popup_sub_pane

0x9d64,	// (0x00020882) bg_popup_window_pane_g1_ParamLimits

0x9d64,	// (0x00020882) bg_popup_window_pane_g1

0x9d73,	// (0x00020891) bg_popup_window_pane_g2_ParamLimits

0x9d73,	// (0x00020891) bg_popup_window_pane_g2

0x9d7f,	// (0x0002089d) bg_popup_window_pane_g3_ParamLimits

0x9d7f,	// (0x0002089d) bg_popup_window_pane_g3

0x9d8b,	// (0x000208a9) bg_popup_window_pane_g4_ParamLimits

0x9d8b,	// (0x000208a9) bg_popup_window_pane_g4

0x9d9a,	// (0x000208b8) bg_popup_window_pane_g5_ParamLimits

0x9d9a,	// (0x000208b8) bg_popup_window_pane_g5

0x9daa,	// (0x000208c8) bg_popup_window_pane_g6_ParamLimits

0x9daa,	// (0x000208c8) bg_popup_window_pane_g6

0x9db6,	// (0x000208d4) bg_popup_window_pane_g7_ParamLimits

0x9db6,	// (0x000208d4) bg_popup_window_pane_g7

0x9dc5,	// (0x000208e3) bg_popup_window_pane_g8_ParamLimits

0x9dc5,	// (0x000208e3) bg_popup_window_pane_g8

0x9dd4,	// (0x000208f2) bg_popup_window_pane_g9_ParamLimits

0x9dd4,	// (0x000208f2) bg_popup_window_pane_g9

0xddf1,	// (0x0002490f) bg_popup_window_pane_g10_ParamLimits

0xddf1,	// (0x0002490f) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x000263f8) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x000263f8) bg_popup_window_pane_g

0xdda8,	// (0x000248c6) bg_popup_heading_pane_ParamLimits

0xdda8,	// (0x000248c6) bg_popup_heading_pane

0x6208,	// (0x0001cd26) tabs_4_passive_pane_cp_srt_ParamLimits

0x6208,	// (0x0001cd26) tabs_4_passive_pane_cp_srt

0x621a,	// (0x0001cd38) tabs_4_passive_pane_srt_ParamLimits

0xddbc,	// (0x000248da) heading_pane_g2

0x621a,	// (0x0001cd38) tabs_4_passive_pane_srt

0xd2a5,	// (0x00023dc3) bg_passive_tab_pane_cp3_srt_ParamLimits

0xd2a5,	// (0x00023dc3) bg_passive_tab_pane_cp3_srt

0xddc4,	// (0x000248e2) heading_pane_t1_ParamLimits

0xddc4,	// (0x000248e2) heading_pane_t1

0xdddb,	// (0x000248f9) heading_pane_t2_ParamLimits

0xdddb,	// (0x000248f9) heading_pane_t2

0x0001,

0xf8d5,	// (0x000263f3) heading_pane_t_ParamLimits

0xf8d5,	// (0x000263f3) heading_pane_t

0xd8ef,	// (0x0002440d) bg_popup_heading_pane_g1

0xd980,	// (0x0002449e) bg_popup_heading_pane_g2

0xd98a,	// (0x000244a8) bg_popup_heading_pane_g3

0xd994,	// (0x000244b2) bg_popup_heading_pane_g4

0xd99e,	// (0x000244bc) bg_popup_heading_pane_g5

0xd9a8,	// (0x000244c6) bg_popup_heading_pane_g6

0xd9b0,	// (0x000244ce) bg_popup_heading_pane_g7

0xd9b8,	// (0x000244d6) bg_popup_heading_pane_g8

0xd9c2,	// (0x000244e0) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x000263af) bg_popup_heading_pane_g

0xd1b5,	// (0x00023cd3) bg_popup_sub_pane_g1

0xd1bd,	// (0x00023cdb) bg_popup_sub_pane_g2

0xd1c5,	// (0x00023ce3) bg_popup_sub_pane_g3

0xd1cd,	// (0x00023ceb) bg_popup_sub_pane_g4

0xd1d5,	// (0x00023cf3) bg_popup_sub_pane_g5

0xd1dd,	// (0x00023cfb) bg_popup_sub_pane_g6

0xd1e5,	// (0x00023d03) bg_popup_sub_pane_g7

0xd1ed,	// (0x00023d0b) bg_popup_sub_pane_g8

0xd1f5,	// (0x00023d13) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x00026389) bg_popup_sub_pane_g

0xbbd1,	// (0x000226ef) bg_popup_window_pane_cp5_ParamLimits

0xbbd1,	// (0x000226ef) bg_popup_window_pane_cp5

0xbd20,	// (0x0002283e) popup_note_window_g1_ParamLimits

0xbd20,	// (0x0002283e) popup_note_window_g1

0xbd2c,	// (0x0002284a) popup_note_window_t1_ParamLimits

0xbd2c,	// (0x0002284a) popup_note_window_t1

0xbd3e,	// (0x0002285c) popup_note_window_t2_ParamLimits

0xbd3e,	// (0x0002285c) popup_note_window_t2

0xbd50,	// (0x0002286e) popup_note_window_t3_ParamLimits

0xbd50,	// (0x0002286e) popup_note_window_t3

0xbd62,	// (0x00022880) popup_note_window_t4_ParamLimits

0xbd62,	// (0x00022880) popup_note_window_t4

0xbd8a,	// (0x000228a8) popup_note_window_t5_ParamLimits

0xbd8a,	// (0x000228a8) popup_note_window_t5

0x0004,

0xf59b,	// (0x000260b9) popup_note_window_t_ParamLimits

0xf59b,	// (0x000260b9) popup_note_window_t

0xbdae,	// (0x000228cc) bg_popup_window_pane_cp6_ParamLimits

0xbdae,	// (0x000228cc) bg_popup_window_pane_cp6

0xd863,	// (0x00024381) popup_note_image_window_g1_ParamLimits

0xd863,	// (0x00024381) popup_note_image_window_g1

0xd86f,	// (0x0002438d) popup_note_image_window_g2_ParamLimits

0xd86f,	// (0x0002438d) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x0002637d) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x0002637d) popup_note_image_window_g

0xd888,	// (0x000243a6) popup_note_image_window_t1_ParamLimits

0xd888,	// (0x000243a6) popup_note_image_window_t1

0xd8a1,	// (0x000243bf) popup_note_image_window_t2_ParamLimits

0xd8a1,	// (0x000243bf) popup_note_image_window_t2

0xd8ba,	// (0x000243d8) popup_note_image_window_t3_ParamLimits

0xd8ba,	// (0x000243d8) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00026382) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00026382) popup_note_image_window_t

0xd740,	// (0x0002425e) bg_popup_window_pane_cp7_ParamLimits

0xd740,	// (0x0002425e) bg_popup_window_pane_cp7

0xd770,	// (0x0002428e) popup_note_wait_window_g1_ParamLimits

0xd770,	// (0x0002428e) popup_note_wait_window_g1

0xd77c,	// (0x0002429a) popup_note_wait_window_g2_ParamLimits

0xd77c,	// (0x0002429a) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x0002636b) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x0002636b) popup_note_wait_window_g

0xd794,	// (0x000242b2) popup_note_wait_window_t1_ParamLimits

0xd794,	// (0x000242b2) popup_note_wait_window_t1

0xd7bb,	// (0x000242d9) popup_note_wait_window_t2_ParamLimits

0xd7bb,	// (0x000242d9) popup_note_wait_window_t2

0xd7d8,	// (0x000242f6) popup_note_wait_window_t3_ParamLimits

0xd7d8,	// (0x000242f6) popup_note_wait_window_t3

0xd7eb,	// (0x00024309) popup_note_wait_window_t4_ParamLimits

0xd7eb,	// (0x00024309) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00026372) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00026372) popup_note_wait_window_t

0xd810,	// (0x0002432e) wait_bar_pane_ParamLimits

0xd810,	// (0x0002432e) wait_bar_pane

0xbb83,	// (0x000226a1) wait_anim_pane

0xbb83,	// (0x000226a1) wait_border_pane

0xbb79,	// (0x00022697) wait_anim_pane_g1

0xbb79,	// (0x00022697) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x0002623d) wait_anim_pane_g

0xd6e4,	// (0x00024202) wait_border_pane_g1

0xd6ef,	// (0x0002420d) wait_border_pane_g2

0xd6f8,	// (0x00024216) wait_border_pane_g3

0x0002,

0xf846,	// (0x00026364) wait_border_pane_g

0xd554,	// (0x00024072) bg_popup_window_pane_cp16_ParamLimits

0xd554,	// (0x00024072) bg_popup_window_pane_cp16

0xd654,	// (0x00024172) indicator_popup_pane_cp4_ParamLimits

0xd654,	// (0x00024172) indicator_popup_pane_cp4

0xd668,	// (0x00024186) popup_query_data_window_t1_ParamLimits

0xd668,	// (0x00024186) popup_query_data_window_t1

0xd67a,	// (0x00024198) popup_query_data_window_t2_ParamLimits

0xd67a,	// (0x00024198) popup_query_data_window_t2

0xd693,	// (0x000241b1) popup_query_data_window_t3_ParamLimits

0xd693,	// (0x000241b1) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x0002635d) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x0002635d) popup_query_data_window_t

0xd6ad,	// (0x000241cb) query_popup_data_pane_ParamLimits

0xd6ad,	// (0x000241cb) query_popup_data_pane

0xd6c1,	// (0x000241df) query_popup_data_pane_cp1_ParamLimits

0xd6c1,	// (0x000241df) query_popup_data_pane_cp1

0xd554,	// (0x00024072) bg_popup_window_pane_cp10_ParamLimits

0xd554,	// (0x00024072) bg_popup_window_pane_cp10

0xd586,	// (0x000240a4) indicator_popup_pane_ParamLimits

0xd586,	// (0x000240a4) indicator_popup_pane

0xd5a8,	// (0x000240c6) popup_query_code_window_t1_ParamLimits

0xd5a8,	// (0x000240c6) popup_query_code_window_t1

0xd5c2,	// (0x000240e0) popup_query_code_window_t2_ParamLimits

0xd5c2,	// (0x000240e0) popup_query_code_window_t2

0xd60b,	// (0x00024129) popup_query_code_window_t3_ParamLimits

0xd60b,	// (0x00024129) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00026356) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00026356) popup_query_code_window_t

0xd63a,	// (0x00024158) query_popup_pane_ParamLimits

0xd63a,	// (0x00024158) query_popup_pane

0xbdae,	// (0x000228cc) bg_popup_window_pane_cp15_ParamLimits

0xbdae,	// (0x000228cc) bg_popup_window_pane_cp15

0xbdcc,	// (0x000228ea) indicator_popup_pane_cp1_ParamLimits

0xbdcc,	// (0x000228ea) indicator_popup_pane_cp1

0xbddf,	// (0x000228fd) indicator_popup_pane_cp2_ParamLimits

0xbddf,	// (0x000228fd) indicator_popup_pane_cp2

0xbdf2,	// (0x00022910) popup_query_data_code_window_g1_ParamLimits

0xbdf2,	// (0x00022910) popup_query_data_code_window_g1

0xbe05,	// (0x00022923) popup_query_data_code_window_t1_ParamLimits

0xbe05,	// (0x00022923) popup_query_data_code_window_t1

0xbe17,	// (0x00022935) popup_query_data_code_window_t2_ParamLimits

0xbe17,	// (0x00022935) popup_query_data_code_window_t2

0xbe29,	// (0x00022947) popup_query_data_code_window_t3_ParamLimits

0xbe29,	// (0x00022947) popup_query_data_code_window_t3

0xbe3f,	// (0x0002295d) popup_query_data_code_window_t4_ParamLimits

0xbe3f,	// (0x0002295d) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x000260c4) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x000260c4) popup_query_data_code_window_t

0xca99,	// (0x000235b7) list_single_midp_graphic_pane_g3

0xbe57,	// (0x00022975) query_popup_data_pane_cp2_ParamLimits

0xbe6a,	// (0x00022988) query_popup_pane_cp2_ParamLimits

0xbe6a,	// (0x00022988) query_popup_pane_cp2

0xbb83,	// (0x000226a1) bg_popup_window_pane_cp11

0xd54c,	// (0x0002406a) heading_pane_cp5

0xbef8,	// (0x00022a16) listscroll_popup_info_pane

0xbb83,	// (0x000226a1) input_focus_pane_cp3

0xbe7d,	// (0x0002299b) query_popup_pane_t1

0xbe8b,	// (0x000229a9) list_popup_info_pane_ParamLimits

0xbe8b,	// (0x000229a9) list_popup_info_pane

0xbe9a,	// (0x000229b8) listscroll_popup_info_pane_g1

0xbea2,	// (0x000229c0) scroll_pane_cp7

0xbeac,	// (0x000229ca) popup_info_list_pane_t1_ParamLimits

0xbeac,	// (0x000229ca) popup_info_list_pane_t1

0xbec6,	// (0x000229e4) popup_info_list_pane_t2_ParamLimits

0xbec6,	// (0x000229e4) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x000260cd) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x000260cd) popup_info_list_pane_t

0xbb83,	// (0x000226a1) bg_popup_window_pane_cp12

0xe472,	// (0x00024f90) find_popup_pane

0xbbdf,	// (0x000226fd) bg_popup_window_pane_cp3

0xbee0,	// (0x000229fe) heading_pane_cp3

0xbeec,	// (0x00022a0a) listscroll_popup_graphic_pane

0xbb83,	// (0x000226a1) bg_popup_window_pane_cp4

0x8b56,	// (0x0001f674) heading_pane_cp4

0xbef8,	// (0x00022a16) listscroll_popup_colour_pane

0xbf00,	// (0x00022a1e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbf00,	// (0x00022a1e) cell_large_graphic_colour_none_popup_pane

0x8b5e,	// (0x0001f67c) grid_large_graphic_colour_popup_pane_ParamLimits

0x8b5e,	// (0x0001f67c) grid_large_graphic_colour_popup_pane

0xbf14,	// (0x00022a32) listscroll_popup_colour_pane_g1_ParamLimits

0xbf14,	// (0x00022a32) listscroll_popup_colour_pane_g1

0xbf2b,	// (0x00022a49) listscroll_popup_colour_pane_g2_ParamLimits

0xbf2b,	// (0x00022a49) listscroll_popup_colour_pane_g2

0xbf42,	// (0x00022a60) listscroll_popup_colour_pane_g3_ParamLimits

0xbf42,	// (0x00022a60) listscroll_popup_colour_pane_g3

0x8b82,	// (0x0001f6a0) listscroll_popup_colour_pane_g4_ParamLimits

0x8b82,	// (0x0001f6a0) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x000260d2) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x000260d2) listscroll_popup_colour_pane_g

0xbf52,	// (0x00022a70) scroll_pane_cp6_ParamLimits

0xbf52,	// (0x00022a70) scroll_pane_cp6

0x8b91,	// (0x0001f6af) cell_large_graphic_colour_popup_pane_ParamLimits

0x8b91,	// (0x0001f6af) cell_large_graphic_colour_popup_pane

0xbf64,	// (0x00022a82) cell_large_graphic_colour_none_popup_pane_t1

0xbb83,	// (0x000226a1) grid_highlight_pane_cp5

0xbf73,	// (0x00022a91) cell_large_graphic_colour_popup_pane_g1

0xbf7b,	// (0x00022a99) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x000260db) cell_large_graphic_colour_popup_pane_g

0xbf83,	// (0x00022aa1) cell_large_graphic_colour_popup_pane_g2_copy1

0xbf8c,	// (0x00022aaa) grid_highlight_pane_cp4

0xbf94,	// (0x00022ab2) bg_popup_window_pane_cp8_ParamLimits

0xbf94,	// (0x00022ab2) bg_popup_window_pane_cp8

0xbfaf,	// (0x00022acd) popup_snote_single_text_window_g1_ParamLimits

0xbfaf,	// (0x00022acd) popup_snote_single_text_window_g1

0xbfc1,	// (0x00022adf) popup_snote_single_text_window_t1_ParamLimits

0xbfc1,	// (0x00022adf) popup_snote_single_text_window_t1

0xbfd4,	// (0x00022af2) popup_snote_single_text_window_t2_ParamLimits

0xbfd4,	// (0x00022af2) popup_snote_single_text_window_t2

0xbfe7,	// (0x00022b05) popup_snote_single_text_window_t3_ParamLimits

0xbfe7,	// (0x00022b05) popup_snote_single_text_window_t3

0xc020,	// (0x00022b3e) popup_snote_single_text_window_t4_ParamLimits

0xc020,	// (0x00022b3e) popup_snote_single_text_window_t4

0xc054,	// (0x00022b72) popup_snote_single_text_window_t5_ParamLimits

0xc054,	// (0x00022b72) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x000260e0) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x000260e0) popup_snote_single_text_window_t

0xc083,	// (0x00022ba1) bg_popup_window_pane_cp9_ParamLimits

0xc083,	// (0x00022ba1) bg_popup_window_pane_cp9

0xbfaf,	// (0x00022acd) popup_snote_single_graphic_window_g1_ParamLimits

0xbfaf,	// (0x00022acd) popup_snote_single_graphic_window_g1

0xc091,	// (0x00022baf) popup_snote_single_graphic_window_g2_ParamLimits

0xc091,	// (0x00022baf) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x000260eb) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x000260eb) popup_snote_single_graphic_window_g

0xc09d,	// (0x00022bbb) popup_snote_single_graphic_window_t1_ParamLimits

0xc09d,	// (0x00022bbb) popup_snote_single_graphic_window_t1

0xc0b0,	// (0x00022bce) popup_snote_single_graphic_window_t2_ParamLimits

0xc0b0,	// (0x00022bce) popup_snote_single_graphic_window_t2

0xc0c3,	// (0x00022be1) popup_snote_single_graphic_window_t3_ParamLimits

0xc0c3,	// (0x00022be1) popup_snote_single_graphic_window_t3

0xc0fc,	// (0x00022c1a) popup_snote_single_graphic_window_t4_ParamLimits

0xc0fc,	// (0x00022c1a) popup_snote_single_graphic_window_t4

0xc130,	// (0x00022c4e) popup_snote_single_graphic_window_t5_ParamLimits

0xc130,	// (0x00022c4e) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x000260f0) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x000260f0) popup_snote_single_graphic_window_t

0xe3f6,	// (0x00024f14) grid_graphic_popup_pane_ParamLimits

0xe3f6,	// (0x00024f14) grid_graphic_popup_pane

0xe422,	// (0x00024f40) listscroll_popup_graphic_pane_g1_ParamLimits

0xe422,	// (0x00024f40) listscroll_popup_graphic_pane_g1

0xa135,	// (0x00020c53) listscroll_popup_graphic_pane_g2_ParamLimits

0xa135,	// (0x00020c53) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x000264d3) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x000264d3) listscroll_popup_graphic_pane_g

0xe3d4,	// (0x00024ef2) scroll_pane_cp5

0xa0f8,	// (0x00020c16) cell_graphic_popup_pane_ParamLimits

0xa0f8,	// (0x00020c16) cell_graphic_popup_pane

0xe3b5,	// (0x00024ed3) cell_graphic_popup_pane_g1

0xe3bd,	// (0x00024edb) cell_graphic_popup_pane_g2

0xbf83,	// (0x00022aa1) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x000264cc) cell_graphic_popup_pane_g

0xe3c6,	// (0x00024ee4) cell_graphic_popup_pane_t2

0xbf8c,	// (0x00022aaa) grid_highlight_pane_cp3

0xc171,	// (0x00022c8f) list_gen_pane_ParamLimits

0xc171,	// (0x00022c8f) list_gen_pane

0xc199,	// (0x00022cb7) scroll_pane

0xa0b3,	// (0x00020bd1) bg_list_pane_g1_ParamLimits

0xa0b3,	// (0x00020bd1) bg_list_pane_g1

0xe364,	// (0x00024e82) bg_list_pane_g2_ParamLimits

0xe364,	// (0x00024e82) bg_list_pane_g2

0xe377,	// (0x00024e95) bg_list_pane_g3_ParamLimits

0xe377,	// (0x00024e95) bg_list_pane_g3

0xe389,	// (0x00024ea7) bg_list_pane_g4_ParamLimits

0xe389,	// (0x00024ea7) bg_list_pane_g4

0xa0ce,	// (0x00020bec) bg_list_pane_g5_ParamLimits

0xa0ce,	// (0x00020bec) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x000264c1) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x000264c1) bg_list_pane_g

0xa066,	// (0x00020b84) list_double2_graphic_large_graphic_pane_ParamLimits

0xa066,	// (0x00020b84) list_double2_graphic_large_graphic_pane

0xa066,	// (0x00020b84) list_double2_graphic_pane_ParamLimits

0xa066,	// (0x00020b84) list_double2_graphic_pane

0xa066,	// (0x00020b84) list_double2_large_graphic_pane_ParamLimits

0xa066,	// (0x00020b84) list_double2_large_graphic_pane

0xa079,	// (0x00020b97) list_double2_pane_ParamLimits

0xa079,	// (0x00020b97) list_double2_pane

0xa066,	// (0x00020b84) list_double_graphic_heading_pane_ParamLimits

0xa066,	// (0x00020b84) list_double_graphic_heading_pane

0xa066,	// (0x00020b84) list_double_graphic_pane_ParamLimits

0xa066,	// (0x00020b84) list_double_graphic_pane

0xa066,	// (0x00020b84) list_double_heading_pane_ParamLimits

0xa066,	// (0x00020b84) list_double_heading_pane

0xa066,	// (0x00020b84) list_double_large_graphic_pane_ParamLimits

0xa066,	// (0x00020b84) list_double_large_graphic_pane

0xa066,	// (0x00020b84) list_double_number_pane_ParamLimits

0xa066,	// (0x00020b84) list_double_number_pane

0xa066,	// (0x00020b84) list_double_pane_ParamLimits

0xa066,	// (0x00020b84) list_double_pane

0xa066,	// (0x00020b84) list_double_time_pane_ParamLimits

0xa066,	// (0x00020b84) list_double_time_pane

0xa066,	// (0x00020b84) list_setting_number_pane_ParamLimits

0xa066,	// (0x00020b84) list_setting_number_pane

0xa066,	// (0x00020b84) list_setting_pane_ParamLimits

0xa066,	// (0x00020b84) list_setting_pane

0x8573,	// (0x0001f091) list_single_2graphic_pane_ParamLimits

0x8573,	// (0x0001f091) list_single_2graphic_pane

0x8573,	// (0x0001f091) list_single_graphic_heading_pane_ParamLimits

0x8573,	// (0x0001f091) list_single_graphic_heading_pane

0x8573,	// (0x0001f091) list_single_graphic_pane_ParamLimits

0x8573,	// (0x0001f091) list_single_graphic_pane

0x8573,	// (0x0001f091) list_single_heading_pane_ParamLimits

0x8573,	// (0x0001f091) list_single_heading_pane

0xa079,	// (0x00020b97) list_single_large_graphic_pane_ParamLimits

0xa079,	// (0x00020b97) list_single_large_graphic_pane

0x8573,	// (0x0001f091) list_single_number_heading_pane_ParamLimits

0x8573,	// (0x0001f091) list_single_number_heading_pane

0x8573,	// (0x0001f091) list_single_number_pane_ParamLimits

0x8573,	// (0x0001f091) list_single_number_pane

0x8573,	// (0x0001f091) list_single_pane_ParamLimits

0x8573,	// (0x0001f091) list_single_pane

0xbb83,	// (0x000226a1) list_highlight_pane_cp1

0x44fa,	// (0x0001b018) list_single_pane_g1_ParamLimits

0x44fa,	// (0x0001b018) list_single_pane_g1

0x4506,	// (0x0001b024) list_single_pane_g2_ParamLimits

0x4506,	// (0x0001b024) list_single_pane_g2

0x0001,

0xf5e4,	// (0x00026102) list_single_pane_g_ParamLimits

0xf5e4,	// (0x00026102) list_single_pane_g

0x4d59,	// (0x0001b877) list_single_pane_t1_ParamLimits

0x4d59,	// (0x0001b877) list_single_pane_t1

0x44fa,	// (0x0001b018) list_single_number_pane_g1_ParamLimits

0x44fa,	// (0x0001b018) list_single_number_pane_g1

0x4506,	// (0x0001b024) list_single_number_pane_g2_ParamLimits

0x4506,	// (0x0001b024) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x00026102) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x00026102) list_single_number_pane_g

0x4c8d,	// (0x0001b7ab) list_single_number_pane_t1_ParamLimits

0x4c8d,	// (0x0001b7ab) list_single_number_pane_t1

0x4d19,	// (0x0001b837) list_single_number_pane_t2_ParamLimits

0x4d19,	// (0x0001b837) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00026482) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00026482) list_single_number_pane_t

0x44ee,	// (0x0001b00c) list_single_graphic_pane_g1_ParamLimits

0x44ee,	// (0x0001b00c) list_single_graphic_pane_g1

0x44fa,	// (0x0001b018) list_single_graphic_pane_g2_ParamLimits

0x44fa,	// (0x0001b018) list_single_graphic_pane_g2

0x4506,	// (0x0001b024) list_single_graphic_pane_g3_ParamLimits

0x4506,	// (0x0001b024) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x000260fb) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x000260fb) list_single_graphic_pane_g

0x4512,	// (0x0001b030) list_single_graphic_pane_t1_ParamLimits

0x4512,	// (0x0001b030) list_single_graphic_pane_t1

0x44fa,	// (0x0001b018) list_single_heading_pane_g1_ParamLimits

0x44fa,	// (0x0001b018) list_single_heading_pane_g1

0x4506,	// (0x0001b024) list_single_heading_pane_g2_ParamLimits

0x4506,	// (0x0001b024) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00026102) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00026102) list_single_heading_pane_g

0x4528,	// (0x0001b046) list_single_heading_pane_t1_ParamLimits

0x4528,	// (0x0001b046) list_single_heading_pane_t1

0x453e,	// (0x0001b05c) list_single_heading_pane_t2_ParamLimits

0x453e,	// (0x0001b05c) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00026107) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00026107) list_single_heading_pane_t

0x44fa,	// (0x0001b018) list_single_number_heading_pane_g1_ParamLimits

0x44fa,	// (0x0001b018) list_single_number_heading_pane_g1

0x4506,	// (0x0001b024) list_single_number_heading_pane_g2_ParamLimits

0x4506,	// (0x0001b024) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x00026102) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x00026102) list_single_number_heading_pane_g

0x4528,	// (0x0001b046) list_single_number_heading_pane_t1_ParamLimits

0x4528,	// (0x0001b046) list_single_number_heading_pane_t1

0x4550,	// (0x0001b06e) list_single_number_heading_pane_t2_ParamLimits

0x4550,	// (0x0001b06e) list_single_number_heading_pane_t2

0x4562,	// (0x0001b080) list_single_number_heading_pane_t3_ParamLimits

0x4562,	// (0x0001b080) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0002610c) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0002610c) list_single_number_heading_pane_t

0x4574,	// (0x0001b092) list_single_graphic_heading_pane_g1_ParamLimits

0x4574,	// (0x0001b092) list_single_graphic_heading_pane_g1

0x8021,	// (0x0001eb3f) list_single_graphic_heading_pane_g4_ParamLimits

0x8021,	// (0x0001eb3f) list_single_graphic_heading_pane_g4

0x4506,	// (0x0001b024) list_single_graphic_heading_pane_g5_ParamLimits

0x4506,	// (0x0001b024) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x00026113) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x00026113) list_single_graphic_heading_pane_g

0x4528,	// (0x0001b046) list_single_graphic_heading_pane_t1_ParamLimits

0x4528,	// (0x0001b046) list_single_graphic_heading_pane_t1

0x4591,	// (0x0001b0af) list_single_graphic_heading_pane_t2_ParamLimits

0x4591,	// (0x0001b0af) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0002611a) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0002611a) list_single_graphic_heading_pane_t

0x4e9e,	// (0x0001b9bc) list_single_large_graphic_pane_g1_ParamLimits

0x4e9e,	// (0x0001b9bc) list_single_large_graphic_pane_g1

0x4eaa,	// (0x0001b9c8) list_single_large_graphic_pane_g2_ParamLimits

0x4eaa,	// (0x0001b9c8) list_single_large_graphic_pane_g2

0x4eb6,	// (0x0001b9d4) list_single_large_graphic_pane_g3_ParamLimits

0x4eb6,	// (0x0001b9d4) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0002611f) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0002611f) list_single_large_graphic_pane_g

0xd6ef,	// (0x0002420d) wait_border_pane_g2_copy1

0x8032,	// (0x0001eb50) list_single_large_graphic_pane_g4_cp2

0x4ec2,	// (0x0001b9e0) list_single_large_graphic_pane_t1_ParamLimits

0x4ec2,	// (0x0001b9e0) list_single_large_graphic_pane_t1

0x803a,	// (0x0001eb58) list_double_pane_g1_ParamLimits

0x803a,	// (0x0001eb58) list_double_pane_g1

0x8046,	// (0x0001eb64) list_double_pane_g2_ParamLimits

0x8046,	// (0x0001eb64) list_double_pane_g2

0x0001,

0xf608,	// (0x00026126) list_double_pane_g_ParamLimits

0xf608,	// (0x00026126) list_double_pane_g

0x8052,	// (0x0001eb70) list_double_pane_t1_ParamLimits

0x8052,	// (0x0001eb70) list_double_pane_t1

0x8068,	// (0x0001eb86) list_double_pane_t2_ParamLimits

0x8068,	// (0x0001eb86) list_double_pane_t2

0x0001,

0xf60d,	// (0x0002612b) list_double_pane_t_ParamLimits

0xf60d,	// (0x0002612b) list_double_pane_t

0x807a,	// (0x0001eb98) list_double2_pane_g1_ParamLimits

0x807a,	// (0x0001eb98) list_double2_pane_g1

0x47ca,	// (0x0001b2e8) list_double2_pane_g2_ParamLimits

0x47ca,	// (0x0001b2e8) list_double2_pane_g2

0x0001,

0xf612,	// (0x00026130) list_double2_pane_g_ParamLimits

0xf612,	// (0x00026130) list_double2_pane_g

0x808b,	// (0x0001eba9) list_double2_pane_t1_ParamLimits

0x808b,	// (0x0001eba9) list_double2_pane_t1

0x80a1,	// (0x0001ebbf) list_double2_pane_t2_ParamLimits

0x80a1,	// (0x0001ebbf) list_double2_pane_t2

0x0001,

0xf617,	// (0x00026135) list_double2_pane_t_ParamLimits

0xf617,	// (0x00026135) list_double2_pane_t

0x803a,	// (0x0001eb58) list_double_number_pane_g1_ParamLimits

0x803a,	// (0x0001eb58) list_double_number_pane_g1

0x8046,	// (0x0001eb64) list_double_number_pane_g2_ParamLimits

0x8046,	// (0x0001eb64) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00026126) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00026126) list_double_number_pane_g

0x80b3,	// (0x0001ebd1) list_double_number_pane_t1_ParamLimits

0x80b3,	// (0x0001ebd1) list_double_number_pane_t1

0x80c5,	// (0x0001ebe3) list_double_number_pane_t2_ParamLimits

0x80c5,	// (0x0001ebe3) list_double_number_pane_t2

0x80db,	// (0x0001ebf9) list_double_number_pane_t3_ParamLimits

0x80db,	// (0x0001ebf9) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0002613a) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0002613a) list_double_number_pane_t

0x80ed,	// (0x0001ec0b) list_double_graphic_pane_g1_ParamLimits

0x80ed,	// (0x0001ec0b) list_double_graphic_pane_g1

0x80f9,	// (0x0001ec17) list_double_graphic_pane_g2_ParamLimits

0x80f9,	// (0x0001ec17) list_double_graphic_pane_g2

0x8108,	// (0x0001ec26) list_double_graphic_pane_g3_ParamLimits

0x8108,	// (0x0001ec26) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00026141) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00026141) list_double_graphic_pane_g

0x8120,	// (0x0001ec3e) list_double_graphic_pane_t1_ParamLimits

0x8120,	// (0x0001ec3e) list_double_graphic_pane_t1

0x8136,	// (0x0001ec54) list_double_graphic_pane_t2_ParamLimits

0x8136,	// (0x0001ec54) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002614a) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002614a) list_double_graphic_pane_t

0x80ed,	// (0x0001ec0b) list_double2_graphic_pane_g1_ParamLimits

0x80ed,	// (0x0001ec0b) list_double2_graphic_pane_g1

0x8148,	// (0x0001ec66) list_double2_graphic_pane_g2_ParamLimits

0x8148,	// (0x0001ec66) list_double2_graphic_pane_g2

0x8154,	// (0x0001ec72) list_double2_graphic_pane_g3_ParamLimits

0x8154,	// (0x0001ec72) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0002614f) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0002614f) list_double2_graphic_pane_g

0x80c5,	// (0x0001ebe3) list_double2_graphic_pane_t1_ParamLimits

0x80c5,	// (0x0001ebe3) list_double2_graphic_pane_t1

0x8160,	// (0x0001ec7e) list_double2_graphic_pane_t2_ParamLimits

0x8160,	// (0x0001ec7e) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00026156) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00026156) list_double2_graphic_pane_t

0x8172,	// (0x0001ec90) list_double_large_graphic_pane_g1_ParamLimits

0x8172,	// (0x0001ec90) list_double_large_graphic_pane_g1

0x819d,	// (0x0001ecbb) list_double_large_graphic_pane_g2_ParamLimits

0x819d,	// (0x0001ecbb) list_double_large_graphic_pane_g2

0x8046,	// (0x0001eb64) list_double_large_graphic_pane_g3_ParamLimits

0x8046,	// (0x0001eb64) list_double_large_graphic_pane_g3

0x81ae,	// (0x0001eccc) list_double_large_graphic_pane_g4_ParamLimits

0x81ae,	// (0x0001eccc) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0002615b) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0002615b) list_double_large_graphic_pane_g

0x81c0,	// (0x0001ecde) list_double_large_graphic_pane_t1_ParamLimits

0x81c0,	// (0x0001ecde) list_double_large_graphic_pane_t1

0x81d9,	// (0x0001ecf7) list_double_large_graphic_pane_t2_ParamLimits

0x81d9,	// (0x0001ecf7) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00026166) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00026166) list_double_large_graphic_pane_t

0x81eb,	// (0x0001ed09) list_double2_large_graphic_pane_g1_ParamLimits

0x81eb,	// (0x0001ed09) list_double2_large_graphic_pane_g1

0x819d,	// (0x0001ecbb) list_double2_large_graphic_pane_g2_ParamLimits

0x819d,	// (0x0001ecbb) list_double2_large_graphic_pane_g2

0x8046,	// (0x0001eb64) list_double2_large_graphic_pane_g3_ParamLimits

0x8046,	// (0x0001eb64) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0002616b) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0002616b) list_double2_large_graphic_pane_g

0x81f7,	// (0x0001ed15) list_double2_large_graphic_pane_t1_ParamLimits

0x81f7,	// (0x0001ed15) list_double2_large_graphic_pane_t1

0x820d,	// (0x0001ed2b) list_double2_large_graphic_pane_t2_ParamLimits

0x820d,	// (0x0001ed2b) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00026172) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00026172) list_double2_large_graphic_pane_t

0x821f,	// (0x0001ed3d) list_double_heading_pane_g1_ParamLimits

0x821f,	// (0x0001ed3d) list_double_heading_pane_g1

0x45f1,	// (0x0001b10f) list_double_heading_pane_g2_ParamLimits

0x45f1,	// (0x0001b10f) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x00026177) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x00026177) list_double_heading_pane_g

0x8230,	// (0x0001ed4e) list_double_heading_pane_t1_ParamLimits

0x8230,	// (0x0001ed4e) list_double_heading_pane_t1

0x8246,	// (0x0001ed64) list_double_heading_pane_t2_ParamLimits

0x8246,	// (0x0001ed64) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0002617c) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0002617c) list_double_heading_pane_t

0x4682,	// (0x0001b1a0) list_double_graphic_heading_pane_g1_ParamLimits

0x4682,	// (0x0001b1a0) list_double_graphic_heading_pane_g1

0x821f,	// (0x0001ed3d) list_double_graphic_heading_pane_g2_ParamLimits

0x821f,	// (0x0001ed3d) list_double_graphic_heading_pane_g2

0x45f1,	// (0x0001b10f) list_double_graphic_heading_pane_g3_ParamLimits

0x45f1,	// (0x0001b10f) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00026181) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00026181) list_double_graphic_heading_pane_g

0x8258,	// (0x0001ed76) list_double_graphic_heading_pane_t1_ParamLimits

0x8258,	// (0x0001ed76) list_double_graphic_heading_pane_t1

0x8160,	// (0x0001ec7e) list_double_graphic_heading_pane_t2_ParamLimits

0x8160,	// (0x0001ec7e) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x00026188) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x00026188) list_double_graphic_heading_pane_t

0x819d,	// (0x0001ecbb) list_double_time_pane_g1_ParamLimits

0x819d,	// (0x0001ecbb) list_double_time_pane_g1

0x8046,	// (0x0001eb64) list_double_time_pane_g2_ParamLimits

0x8046,	// (0x0001eb64) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0002618d) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0002618d) list_double_time_pane_g

0x81f7,	// (0x0001ed15) list_double_time_pane_t1_ParamLimits

0x81f7,	// (0x0001ed15) list_double_time_pane_t1

0x826e,	// (0x0001ed8c) list_double_time_pane_t2_ParamLimits

0x826e,	// (0x0001ed8c) list_double_time_pane_t2

0x8280,	// (0x0001ed9e) list_double_time_pane_t3_ParamLimits

0x8280,	// (0x0001ed9e) list_double_time_pane_t3

0x8292,	// (0x0001edb0) list_double_time_pane_t4_ParamLimits

0x8292,	// (0x0001edb0) list_double_time_pane_t4

0x0003,

0xf674,	// (0x00026192) list_double_time_pane_t_ParamLimits

0xf674,	// (0x00026192) list_double_time_pane_t

0x46dd,	// (0x0001b1fb) list_setting_pane_g1_ParamLimits

0x46dd,	// (0x0001b1fb) list_setting_pane_g1

0x46e9,	// (0x0001b207) list_setting_pane_g2_ParamLimits

0x46e9,	// (0x0001b207) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0002619b) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0002619b) list_setting_pane_g

0x82a4,	// (0x0001edc2) list_setting_pane_t1_ParamLimits

0x82a4,	// (0x0001edc2) list_setting_pane_t1

0x82be,	// (0x0001eddc) list_setting_pane_t2_ParamLimits

0x82be,	// (0x0001eddc) list_setting_pane_t2

0x0002,

0xf682,	// (0x000261a0) list_setting_pane_t_ParamLimits

0xf682,	// (0x000261a0) list_setting_pane_t

0x82fb,	// (0x0001ee19) set_value_pane_cp_ParamLimits

0x82fb,	// (0x0001ee19) set_value_pane_cp

0x8307,	// (0x0001ee25) list_setting_number_pane_g1_ParamLimits

0x8307,	// (0x0001ee25) list_setting_number_pane_g1

0x8313,	// (0x0001ee31) list_setting_number_pane_g2_ParamLimits

0x8313,	// (0x0001ee31) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x000261a7) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x000261a7) list_setting_number_pane_g

0x831f,	// (0x0001ee3d) list_setting_number_pane_t1_ParamLimits

0x831f,	// (0x0001ee3d) list_setting_number_pane_t1

0x8338,	// (0x0001ee56) list_setting_number_pane_t2_ParamLimits

0x8338,	// (0x0001ee56) list_setting_number_pane_t2

0x8352,	// (0x0001ee70) list_setting_number_pane_t3_ParamLimits

0x8352,	// (0x0001ee70) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x000261ac) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x000261ac) list_setting_number_pane_t

0x82fb,	// (0x0001ee19) set_value_pane_ParamLimits

0x82fb,	// (0x0001ee19) set_value_pane

0xc1cd,	// (0x00022ceb) bg_set_opt_pane_ParamLimits

0xc1cd,	// (0x00022ceb) bg_set_opt_pane

0x4936,	// (0x0001b454) set_value_pane_t1

0xc1ee,	// (0x00022d0c) slider_set_pane_cp3

0xc1f7,	// (0x00022d15) volume_small_pane_cp

0xc200,	// (0x00022d1e) list_form_gen_pane

0xc209,	// (0x00022d27) scroll_pane_cp8

0x8395,	// (0x0001eeb3) form_field_data_pane_ParamLimits

0x8395,	// (0x0001eeb3) form_field_data_pane

0x83ac,	// (0x0001eeca) form_field_data_wide_pane_ParamLimits

0x83ac,	// (0x0001eeca) form_field_data_wide_pane

0x83cc,	// (0x0001eeea) form_field_popup_pane_ParamLimits

0x83cc,	// (0x0001eeea) form_field_popup_pane

0x83ea,	// (0x0001ef08) form_field_popup_wide_pane_ParamLimits

0x83ea,	// (0x0001ef08) form_field_popup_wide_pane

0x49c6,	// (0x0001b4e4) form_field_slider_pane_ParamLimits

0x49c6,	// (0x0001b4e4) form_field_slider_pane

0x49d9,	// (0x0001b4f7) form_field_slider_wide_pane_ParamLimits

0x49d9,	// (0x0001b4f7) form_field_slider_wide_pane

0xc21a,	// (0x00022d38) data_form_pane

0x840b,	// (0x0001ef29) form_field_data_pane_t1

0xc226,	// (0x00022d44) input_focus_pane

0xc234,	// (0x00022d52) data_form_wide_pane

0x4a1c,	// (0x0001b53a) form_field_data_wide_pane_t1

0xbfa1,	// (0x00022abf) input_focus_pane_cp6

0x8425,	// (0x0001ef43) form_field_popup_pane_t1

0xc226,	// (0x00022d44) input_focus_pane_cp7

0xc260,	// (0x00022d7e) list_form_pane

0x4a60,	// (0x0001b57e) form_field_popup_wide_pane_t1

0xc226,	// (0x00022d44) input_focus_pane_cp8

0xc26c,	// (0x00022d8a) list_form_wide_pane

0x8447,	// (0x0001ef65) form_field_slider_pane_t1_ParamLimits

0x8447,	// (0x0001ef65) form_field_slider_pane_t1

0x845f,	// (0x0001ef7d) form_field_slider_pane_t2_ParamLimits

0x845f,	// (0x0001ef7d) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x000261bc) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x000261bc) form_field_slider_pane_t

0xbbd1,	// (0x000226ef) input_focus_pane_cp9_ParamLimits

0xbbd1,	// (0x000226ef) input_focus_pane_cp9

0x8474,	// (0x0001ef92) slider_cont_pane_ParamLimits

0x8474,	// (0x0001ef92) slider_cont_pane

0xc27b,	// (0x00022d99) form_field_slider_wide_pane_t1_ParamLimits

0xc27b,	// (0x00022d99) form_field_slider_wide_pane_t1

0x4ab7,	// (0x0001b5d5) form_field_slider_wide_pane_t2_ParamLimits

0x4ab7,	// (0x0001b5d5) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x000261c1) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x000261c1) form_field_slider_wide_pane_t

0xbbd1,	// (0x000226ef) input_focus_pane_cp10_ParamLimits

0xbbd1,	// (0x000226ef) input_focus_pane_cp10

0x8488,	// (0x0001efa6) slider_cont_pane_cp1_ParamLimits

0x8488,	// (0x0001efa6) slider_cont_pane_cp1

0x849c,	// (0x0001efba) slider_form_pane_cp

0xc28d,	// (0x00022dab) input_focus_pane_g1

0xc295,	// (0x00022db3) input_focus_pane_g2

0xc29d,	// (0x00022dbb) input_focus_pane_g3

0xc2a5,	// (0x00022dc3) input_focus_pane_g4

0xc2ad,	// (0x00022dcb) input_focus_pane_g5

0xc2b5,	// (0x00022dd3) input_focus_pane_g6

0xc2bd,	// (0x00022ddb) input_focus_pane_g7

0xc2c5,	// (0x00022de3) input_focus_pane_g8

0xc2cd,	// (0x00022deb) input_focus_pane_g9

0xbb79,	// (0x00022697) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x000261c6) input_focus_pane_g

0xd6f8,	// (0x00024216) wait_border_pane_g3_copy1

0x84a4,	// (0x0001efc2) data_form_pane_t1

0xbb79,	// (0x00022697) wait_anim_pane_g1_copy1

0x8547,	// (0x0001f065) data_form_wide_pane_t1

0x84be,	// (0x0001efdc) list_form_graphic_pane_cp_ParamLimits

0x84be,	// (0x0001efdc) list_form_graphic_pane_cp

0xe30d,	// (0x00024e2b) slider_form_pane_g1

0xe316,	// (0x00024e34) slider_form_pane_g2

0x0006,

0xf994,	// (0x000264b2) slider_form_pane_g

0x84d1,	// (0x0001efef) list_form_graphic_pane_ParamLimits

0x84d1,	// (0x0001efef) list_form_graphic_pane

0x4b31,	// (0x0001b64f) list_form_graphic_pane_g1

0x4b39,	// (0x0001b657) list_form_graphic_pane_t1_ParamLimits

0x4b39,	// (0x0001b657) list_form_graphic_pane_t1

0xbbdf,	// (0x000226fd) list_highlight_pane_cp5_ParamLimits

0xbbdf,	// (0x000226fd) list_highlight_pane_cp5

0x4b4e,	// (0x0001b66c) find_pane_g1

0xc2d5,	// (0x00022df3) input_find_pane

0x4b57,	// (0x0001b675) input_find_pane_g1_ParamLimits

0x4b57,	// (0x0001b675) input_find_pane_g1

0x4b63,	// (0x0001b681) input_find_pane_t1_ParamLimits

0x4b63,	// (0x0001b681) input_find_pane_t1

0x4b78,	// (0x0001b696) input_find_pane_t2_ParamLimits

0x4b78,	// (0x0001b696) input_find_pane_t2

0x0001,

0xf6bd,	// (0x000261db) input_find_pane_t_ParamLimits

0xf6bd,	// (0x000261db) input_find_pane_t

0xc2de,	// (0x00022dfc) input_focus_pane_cp5_ParamLimits

0xc2de,	// (0x00022dfc) input_focus_pane_cp5

0x8bc6,	// (0x0001f6e4) bg_popup_window_pane_cp2_ParamLimits

0x8bc6,	// (0x0001f6e4) bg_popup_window_pane_cp2

0x8bd3,	// (0x0001f6f1) listscroll_menu_pane_ParamLimits

0x8bd3,	// (0x0001f6f1) listscroll_menu_pane

0x8bdf,	// (0x0001f6fd) popup_submenu_window_ParamLimits

0x8bdf,	// (0x0001f6fd) popup_submenu_window

0xc2ec,	// (0x00022e0a) find_popup_pane_g1

0xc2f4,	// (0x00022e12) input_popup_find_pane_cp

0xc2de,	// (0x00022dfc) input_focus_pane_cp4_ParamLimits

0xc2de,	// (0x00022dfc) input_focus_pane_cp4

0xc2fe,	// (0x00022e1c) input_popup_find_pane_t1_ParamLimits

0xc2fe,	// (0x00022e1c) input_popup_find_pane_t1

0xbb83,	// (0x000226a1) bg_popup_sub_pane_cp

0xc32c,	// (0x00022e4a) listscroll_popup_sub_pane

0xc334,	// (0x00022e52) list_submenu_pane_ParamLimits

0xc334,	// (0x00022e52) list_submenu_pane

0xc345,	// (0x00022e63) scroll_pane_cp4

0xc34d,	// (0x00022e6b) list_single_popup_submenu_pane_ParamLimits

0xc34d,	// (0x00022e6b) list_single_popup_submenu_pane

0xc360,	// (0x00022e7e) list_single_popup_submenu_pane_g1

0xc368,	// (0x00022e86) list_single_popup_submenu_pane_t1_ParamLimits

0xc368,	// (0x00022e86) list_single_popup_submenu_pane_t1

0xbbd1,	// (0x000226ef) bg_active_tab_pane_cp1_ParamLimits

0xbbd1,	// (0x000226ef) bg_active_tab_pane_cp1

0x8c11,	// (0x0001f72f) tabs_2_active_pane_g1

0x8c19,	// (0x0001f737) tabs_2_active_pane_t1

0xbbd1,	// (0x000226ef) bg_passive_tab_pane_cp1_ParamLimits

0xbbd1,	// (0x000226ef) bg_passive_tab_pane_cp1

0x8c11,	// (0x0001f72f) tabs_2_passive_pane_g1

0x8c19,	// (0x0001f737) tabs_2_passive_pane_t1

0xbbdf,	// (0x000226fd) bg_active_tab_pane_cp4

0x8c2b,	// (0x0001f749) tabs_2_long_active_pane_t1

0xc37d,	// (0x00022e9b) bg_passive_tab_pane_cp4

0x5ed9,	// (0x0001c9f7) list_single_midp_graphic_pane_g4_ParamLimits

0xbbdf,	// (0x000226fd) bg_active_tab_pane_cp5

0x8c3e,	// (0x0001f75c) tabs_3_long_active_pane_t1

0xc37d,	// (0x00022e9b) bg_passive_tab_pane_cp5

0x5ed9,	// (0x0001c9f7) list_single_midp_graphic_pane_g4

0xbbdf,	// (0x000226fd) bg_popup_window_pane_cp13_ParamLimits

0xbbdf,	// (0x000226fd) bg_popup_window_pane_cp13

0xc392,	// (0x00022eb0) listscroll_popup_fast_pane_ParamLimits

0xc392,	// (0x00022eb0) listscroll_popup_fast_pane

0xc3a1,	// (0x00022ebf) grid_popup_fast_pane_ParamLimits

0xc3a1,	// (0x00022ebf) grid_popup_fast_pane

0xc3b3,	// (0x00022ed1) scroll_pane_cp9_ParamLimits

0xc3b3,	// (0x00022ed1) scroll_pane_cp9

0x01f1,	// (0x00016d0f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x01f1,	// (0x00016d0f) list_single_graphic_hl_pane_t1_cp2

0xc3d7,	// (0x00022ef5) input_focus_pane_cp20_ParamLimits

0xc3d7,	// (0x00022ef5) input_focus_pane_cp20

0xc3e5,	// (0x00022f03) query_popup_data_pane_t1_ParamLimits

0xc3e5,	// (0x00022f03) query_popup_data_pane_t1

0xc3f8,	// (0x00022f16) query_popup_data_pane_t2_ParamLimits

0xc3f8,	// (0x00022f16) query_popup_data_pane_t2

0xc43e,	// (0x00022f5c) query_popup_data_pane_t3_ParamLimits

0xc43e,	// (0x00022f5c) query_popup_data_pane_t3

0xc47f,	// (0x00022f9d) query_popup_data_pane_t4_ParamLimits

0xc47f,	// (0x00022f9d) query_popup_data_pane_t4

0xc4bb,	// (0x00022fd9) query_popup_data_pane_t5_ParamLimits

0xc4bb,	// (0x00022fd9) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x000261e0) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x000261e0) query_popup_data_pane_t

0xc28d,	// (0x00022dab) bg_set_opt_pane_g1

0xc295,	// (0x00022db3) bg_set_opt_pane_g2

0xc29d,	// (0x00022dbb) bg_set_opt_pane_g3

0xc2a5,	// (0x00022dc3) bg_set_opt_pane_g4

0xc2ad,	// (0x00022dcb) bg_set_opt_pane_g5

0xc2b5,	// (0x00022dd3) bg_set_opt_pane_g6

0xc2bd,	// (0x00022ddb) bg_set_opt_pane_g7

0xc2c5,	// (0x00022de3) bg_set_opt_pane_g8

0xc2cd,	// (0x00022deb) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x000261eb) bg_set_opt_pane_g

0x5b47,	// (0x0001c665) control_top_pane_stacon_ParamLimits

0x5b47,	// (0x0001c665) control_top_pane_stacon

0x5b9a,	// (0x0001c6b8) signal_pane_stacon_ParamLimits

0x5b9a,	// (0x0001c6b8) signal_pane_stacon

0xc91f,	// (0x0002343d) stacon_top_pane_g1_ParamLimits

0xc91f,	// (0x0002343d) stacon_top_pane_g1

0x5bbf,	// (0x0001c6dd) title_pane_stacon_ParamLimits

0x5bbf,	// (0x0001c6dd) title_pane_stacon

0x5be9,	// (0x0001c707) uni_indicator_pane_stacon_ParamLimits

0x5be9,	// (0x0001c707) uni_indicator_pane_stacon

0x5bfe,	// (0x0001c71c) battery_pane_stacon_ParamLimits

0x5bfe,	// (0x0001c71c) battery_pane_stacon

0x5c42,	// (0x0001c760) control_bottom_pane_stacon_ParamLimits

0x5c42,	// (0x0001c760) control_bottom_pane_stacon

0x5c65,	// (0x0001c783) navi_pane_stacon_ParamLimits

0x5c65,	// (0x0001c783) navi_pane_stacon

0xc941,	// (0x0002345f) stacon_bottom_pane_g1_ParamLimits

0xc941,	// (0x0002345f) stacon_bottom_pane_g1

0x58a8,	// (0x0001c3c6) aid_levels_signal_lsc_ParamLimits

0x58a8,	// (0x0001c3c6) aid_levels_signal_lsc

0x58bf,	// (0x0001c3dd) signal_pane_stacon_g1_ParamLimits

0x58bf,	// (0x0001c3dd) signal_pane_stacon_g1

0x58d3,	// (0x0001c3f1) signal_pane_stacon_g2_ParamLimits

0x58d3,	// (0x0001c3f1) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x000261fe) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x000261fe) signal_pane_stacon_g

0x5908,	// (0x0001c426) title_pane_stacon_t1_ParamLimits

0x5908,	// (0x0001c426) title_pane_stacon_t1

0xc4ff,	// (0x0002301d) uni_indicator_pane_stacon_g1

0xc509,	// (0x00023027) uni_indicator_pane_stacon_g2

0xc513,	// (0x00023031) uni_indicator_pane_stacon_g3

0xc51d,	// (0x0002303b) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x0002620a) uni_indicator_pane_stacon_g

0x592d,	// (0x0001c44b) control_top_pane_stacon_g1

0x5935,	// (0x0001c453) control_top_pane_stacon_t1_ParamLimits

0x5935,	// (0x0001c453) control_top_pane_stacon_t1

0x596c,	// (0x0001c48a) aid_levels_battery_lsc_ParamLimits

0x596c,	// (0x0001c48a) aid_levels_battery_lsc

0x5984,	// (0x0001c4a2) battery_pane_stacon_g1_ParamLimits

0x5984,	// (0x0001c4a2) battery_pane_stacon_g1

0x5997,	// (0x0001c4b5) battery_pane_stacon_g2_ParamLimits

0x5997,	// (0x0001c4b5) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x00026213) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x00026213) battery_pane_stacon_g

0x59d5,	// (0x0001c4f3) navi_icon_pane_stacon

0x59e9,	// (0x0001c507) navi_navi_pane_stacon

0x59d5,	// (0x0001c4f3) navi_text_pane_stacon

0x592d,	// (0x0001c44b) control_bottom_pane_stacon_g1

0x59fd,	// (0x0001c51b) control_bottom_pane_stacon_t1_ParamLimits

0x59fd,	// (0x0001c51b) control_bottom_pane_stacon_t1

0x8c50,	// (0x0001f76e) grid_app_pane_ParamLimits

0x8c50,	// (0x0001f76e) grid_app_pane

0x8c86,	// (0x0001f7a4) scroll_pane_cp15_ParamLimits

0x8c86,	// (0x0001f7a4) scroll_pane_cp15

0x8c9f,	// (0x0001f7bd) cell_app_pane_ParamLimits

0x8c9f,	// (0x0001f7bd) cell_app_pane

0x8ce6,	// (0x0001f804) cell_app_pane_g1_ParamLimits

0x8ce6,	// (0x0001f804) cell_app_pane_g1

0xc541,	// (0x0002305f) cell_app_pane_g2_ParamLimits

0xc541,	// (0x0002305f) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x00026218) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x00026218) cell_app_pane_g

0xc54d,	// (0x0002306b) cell_app_pane_t1_ParamLimits

0xc54d,	// (0x0002306b) cell_app_pane_t1

0xc564,	// (0x00023082) grid_highlight_pane_ParamLimits

0xc564,	// (0x00023082) grid_highlight_pane

0xc28d,	// (0x00022dab) cell_highlight_pane_g1

0xc295,	// (0x00022db3) cell_highlight_pane_g2

0xc29d,	// (0x00022dbb) cell_highlight_pane_g3

0xc2a5,	// (0x00022dc3) cell_highlight_pane_g4

0xc2ad,	// (0x00022dcb) cell_highlight_pane_g5

0xc2b5,	// (0x00022dd3) cell_highlight_pane_g6

0xc2bd,	// (0x00022ddb) cell_highlight_pane_g7

0xc2c5,	// (0x00022de3) cell_highlight_pane_g8

0xc2cd,	// (0x00022deb) cell_highlight_pane_g9

0xbb79,	// (0x00022697) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x000261c6) cell_highlight_pane_g

0xc575,	// (0x00023093) bg_scroll_pane

0x5a47,	// (0x0001c565) scroll_handle_pane

0xc5bc,	// (0x000230da) scroll_bg_pane_g1

0xc5d1,	// (0x000230ef) scroll_bg_pane_g2

0xc5e9,	// (0x00023107) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x0002621d) scroll_bg_pane_g

0xc5fe,	// (0x0002311c) scroll_handle_focus_pane_ParamLimits

0xc5fe,	// (0x0002311c) scroll_handle_focus_pane

0xc5bc,	// (0x000230da) scroll_handle_pane_g1

0xc60b,	// (0x00023129) scroll_handle_pane_g2

0xc5e9,	// (0x00023107) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x00026224) scroll_handle_pane_g

0xc2de,	// (0x00022dfc) bg_popup_sub_pane_cp21_ParamLimits

0xc2de,	// (0x00022dfc) bg_popup_sub_pane_cp21

0xc61f,	// (0x0002313d) popup_fep_japan_predictive_window_t1_ParamLimits

0xc61f,	// (0x0002313d) popup_fep_japan_predictive_window_t1

0xc636,	// (0x00023154) popup_fep_japan_predictive_window_t2_ParamLimits

0xc636,	// (0x00023154) popup_fep_japan_predictive_window_t2

0xc669,	// (0x00023187) popup_fep_japan_predictive_window_t3_ParamLimits

0xc669,	// (0x00023187) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x0002622b) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x0002622b) popup_fep_japan_predictive_window_t

0xbb83,	// (0x000226a1) bg_popup_sub_pane_cp23

0xc6a0,	// (0x000231be) listscroll_japin_cand_pane

0xc6a8,	// (0x000231c6) popup_fep_japan_candidate_window_t1

0xc6b6,	// (0x000231d4) candidate_pane_ParamLimits

0xc6b6,	// (0x000231d4) candidate_pane

0xc6c8,	// (0x000231e6) scroll_pane_cp30

0xc6d0,	// (0x000231ee) list_single_popup_jap_candidate_pane_ParamLimits

0xc6d0,	// (0x000231ee) list_single_popup_jap_candidate_pane

0xbb83,	// (0x000226a1) list_highlight_pane_cp30

0xc6e4,	// (0x00023202) list_single_popup_jap_candidate_pane_t1

0xc6f3,	// (0x00023211) level_1_signal

0xc700,	// (0x0002321e) level_2_signal

0xc70d,	// (0x0002322b) level_3_signal

0xc71a,	// (0x00023238) level_4_signal

0xc727,	// (0x00023245) level_5_signal

0xc734,	// (0x00023252) level_6_signal

0xc741,	// (0x0002325f) level_7_signal

0xc6f3,	// (0x00023211) level_1_battery

0xc700,	// (0x0002321e) level_2_battery

0xc70d,	// (0x0002322b) level_3_battery

0xc71a,	// (0x00023238) level_4_battery

0xc727,	// (0x00023245) level_5_battery

0xc734,	// (0x00023252) level_6_battery

0xc741,	// (0x0002325f) level_7_battery

0xc766,	// (0x00023284) list_menu_pane_ParamLimits

0xc766,	// (0x00023284) list_menu_pane

0xc777,	// (0x00023295) scroll_pane_cp25_ParamLimits

0xc777,	// (0x00023295) scroll_pane_cp25

0xc790,	// (0x000232ae) list_double2_graphic_pane_cp2_ParamLimits

0xc790,	// (0x000232ae) list_double2_graphic_pane_cp2

0xc790,	// (0x000232ae) list_double2_large_graphic_pane_cp2_ParamLimits

0xc790,	// (0x000232ae) list_double2_large_graphic_pane_cp2

0xc790,	// (0x000232ae) list_double2_pane_cp2_ParamLimits

0xc790,	// (0x000232ae) list_double2_pane_cp2

0xc790,	// (0x000232ae) list_double_graphic_pane_cp2_ParamLimits

0xc790,	// (0x000232ae) list_double_graphic_pane_cp2

0xc790,	// (0x000232ae) list_double_large_graphic_pane_cp2_ParamLimits

0xc790,	// (0x000232ae) list_double_large_graphic_pane_cp2

0xc790,	// (0x000232ae) list_double_number_pane_cp2_ParamLimits

0xc790,	// (0x000232ae) list_double_number_pane_cp2

0xc790,	// (0x000232ae) list_double_pane_cp2_ParamLimits

0xc790,	// (0x000232ae) list_double_pane_cp2

0x8d24,	// (0x0001f842) list_single_2graphic_pane_cp2_ParamLimits

0x8d24,	// (0x0001f842) list_single_2graphic_pane_cp2

0x8d24,	// (0x0001f842) list_single_graphic_heading_pane_cp2_ParamLimits

0x8d24,	// (0x0001f842) list_single_graphic_heading_pane_cp2

0x8d24,	// (0x0001f842) list_single_graphic_pane_cp2_ParamLimits

0x8d24,	// (0x0001f842) list_single_graphic_pane_cp2

0x8d24,	// (0x0001f842) list_single_heading_pane_cp2_ParamLimits

0x8d24,	// (0x0001f842) list_single_heading_pane_cp2

0xc7a0,	// (0x000232be) list_single_large_graphic_pane_cp2_ParamLimits

0xc7a0,	// (0x000232be) list_single_large_graphic_pane_cp2

0x8d24,	// (0x0001f842) list_single_number_heading_pane_cp2_ParamLimits

0x8d24,	// (0x0001f842) list_single_number_heading_pane_cp2

0x8d24,	// (0x0001f842) list_single_number_pane_cp2_ParamLimits

0x8d24,	// (0x0001f842) list_single_number_pane_cp2

0x8d24,	// (0x0001f842) list_single_pane_cp2_ParamLimits

0x8d24,	// (0x0001f842) list_single_pane_cp2

0xc7ba,	// (0x000232d8) bg_popup_sub_pane_cp22

0x5af9,	// (0x0001c617) popup_side_volume_key_window_g1

0x5b23,	// (0x0001c641) popup_side_volume_key_window_t1

0x5b3f,	// (0x0001c65d) volume_small_pane_cp1

0xbbd1,	// (0x000226ef) bg_popup_sub_pane_cp24_ParamLimits

0xbbd1,	// (0x000226ef) bg_popup_sub_pane_cp24

0xc7d0,	// (0x000232ee) fep_china_uni_candidate_pane_ParamLimits

0xc7d0,	// (0x000232ee) fep_china_uni_candidate_pane

0xc7e4,	// (0x00023302) fep_china_uni_entry_pane

0xc7f4,	// (0x00023312) popup_fep_china_uni_window_g1

0xc810,	// (0x0002332e) fep_china_uni_entry_pane_g1

0xc818,	// (0x00023336) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x00026258) fep_china_uni_entry_pane_g

0xc820,	// (0x0002333e) fep_entry_item_pane

0xc82a,	// (0x00023348) fep_candidate_item_pane

0xc832,	// (0x00023350) fep_china_uni_candidate_pane_g1

0xc83a,	// (0x00023358) fep_china_uni_candidate_pane_g2

0xc842,	// (0x00023360) fep_china_uni_candidate_pane_g3

0xc84a,	// (0x00023368) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0002625d) fep_china_uni_candidate_pane_g

0xbb79,	// (0x00022697) fep_entry_item_pane_g1

0xc852,	// (0x00023370) fep_entry_item_pane_t1_ParamLimits

0xc852,	// (0x00023370) fep_entry_item_pane_t1

0xc868,	// (0x00023386) fep_candidate_item_pane_t1_ParamLimits

0xc868,	// (0x00023386) fep_candidate_item_pane_t1

0xc87d,	// (0x0002339b) fep_candidate_item_pane_t2_ParamLimits

0xc87d,	// (0x0002339b) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x00026266) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x00026266) fep_candidate_item_pane_t

0xbbdf,	// (0x000226fd) list_highlight_pane_cp31_ParamLimits

0xbbdf,	// (0x000226fd) list_highlight_pane_cp31

0xc88f,	// (0x000233ad) level_1_signal_lsc

0xc898,	// (0x000233b6) level_2_signal_lsc

0xc8a1,	// (0x000233bf) level_3_signal_lsc

0xc8aa,	// (0x000233c8) level_4_signal_lsc

0xc8b3,	// (0x000233d1) level_5_signal_lsc

0xc8bc,	// (0x000233da) level_6_signal_lsc

0xc8c5,	// (0x000233e3) level_7_signal_lsc

0xc8c5,	// (0x000233e3) level_1_battery_lsc

0xc8ce,	// (0x000233ec) level_2_battery_lsc

0xc8d7,	// (0x000233f5) level_3_battery_lsc

0xc8e0,	// (0x000233fe) level_4_battery_lsc

0xc8e9,	// (0x00023407) level_5_battery_lsc

0xc8f2,	// (0x00023410) level_6_battery_lsc

0xc88f,	// (0x000233ad) level_7_battery_lsc

0xc8fb,	// (0x00023419) scroll_handle_focus_pane_g1

0xc904,	// (0x00023422) scroll_handle_focus_pane_g2

0xc90d,	// (0x0002342b) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0002626b) scroll_handle_focus_pane_g

0x4b8d,	// (0x0001b6ab) list_single_2graphic_pane_g1_ParamLimits

0x4b8d,	// (0x0001b6ab) list_single_2graphic_pane_g1

0x8021,	// (0x0001eb3f) list_single_2graphic_pane_g2_ParamLimits

0x8021,	// (0x0001eb3f) list_single_2graphic_pane_g2

0x4506,	// (0x0001b024) list_single_2graphic_pane_g3_ParamLimits

0x4506,	// (0x0001b024) list_single_2graphic_pane_g3

0x4b99,	// (0x0001b6b7) list_single_2graphic_pane_g4_ParamLimits

0x4b99,	// (0x0001b6b7) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x00026272) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x00026272) list_single_2graphic_pane_g

0x4ba5,	// (0x0001b6c3) list_single_2graphic_pane_t1_ParamLimits

0x4ba5,	// (0x0001b6c3) list_single_2graphic_pane_t1

0x84e5,	// (0x0001f003) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x84e5,	// (0x0001f003) list_double2_graphic_large_graphic_pane_g1

0x819d,	// (0x0001ecbb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x819d,	// (0x0001ecbb) list_double2_graphic_large_graphic_pane_g2

0x8046,	// (0x0001eb64) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8046,	// (0x0001eb64) list_double2_graphic_large_graphic_pane_g3

0x84f7,	// (0x0001f015) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x84f7,	// (0x0001f015) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0002627b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0002627b) list_double2_graphic_large_graphic_pane_g

0x8503,	// (0x0001f021) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8503,	// (0x0001f021) list_double2_graphic_large_graphic_pane_t1

0x8519,	// (0x0001f037) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8519,	// (0x0001f037) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x00026284) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x00026284) list_double2_graphic_large_graphic_pane_t

0xc9ee,	// (0x0002350c) popup_fast_swap_window_ParamLimits

0xc9ee,	// (0x0002350c) popup_fast_swap_window

0xca0a,	// (0x00023528) popup_side_volume_key_window

0xca24,	// (0x00023542) stacon_top_pane

0xca2e,	// (0x0002354c) status_pane_ParamLimits

0xca2e,	// (0x0002354c) status_pane

0xca24,	// (0x00023542) status_small_pane

0xbb83,	// (0x000226a1) control_pane

0xbb83,	// (0x000226a1) stacon_bottom_pane

0xc209,	// (0x00022d27) scroll_pane_cp121

0xc200,	// (0x00022d1e) set_content_pane

0x8d86,	// (0x0001f8a4) bg_active_tab_pane_g1_cp1

0xc916,	// (0x00023434) bg_active_tab_pane_g2_cp1

0x8d8f,	// (0x0001f8ad) bg_active_tab_pane_g3_cp1

0x8d86,	// (0x0001f8a4) bg_passive_tab_pane_g1_cp1

0xc916,	// (0x00023434) bg_passive_tab_pane_g2_cp1

0x8d8f,	// (0x0001f8ad) bg_passive_tab_pane_g3_cp1

0x8d98,	// (0x0001f8b6) bg_active_tab_pane_g1_cp2

0xc916,	// (0x00023434) bg_active_tab_pane_g2_cp2

0x8da1,	// (0x0001f8bf) bg_active_tab_pane_g3_cp2

0x8d98,	// (0x0001f8b6) bg_passive_tab_pane_g1_cp2

0xc916,	// (0x00023434) bg_passive_tab_pane_g2_cp2

0x8da1,	// (0x0001f8bf) bg_passive_tab_pane_g3_cp2

0x8daa,	// (0x0001f8c8) bg_active_tab_pane_g1_cp3

0xc916,	// (0x00023434) bg_active_tab_pane_g2_cp3

0x8db3,	// (0x0001f8d1) bg_active_tab_pane_g3_cp3

0x8daa,	// (0x0001f8c8) bg_passive_tab_pane_g1_cp3

0xc916,	// (0x00023434) bg_passive_tab_pane_g2_cp3

0x8db3,	// (0x0001f8d1) bg_passive_tab_pane_g3_cp3

0x8dbc,	// (0x0001f8da) bg_active_tab_pane_g1_cp4

0xc916,	// (0x00023434) bg_active_tab_pane_g2_cp4

0x8dc5,	// (0x0001f8e3) bg_active_tab_pane_g3_cp4

0x8dbc,	// (0x0001f8da) bg_passive_tab_pane_g1_cp4

0xc916,	// (0x00023434) bg_passive_tab_pane_g2_cp4

0x8dc5,	// (0x0001f8e3) bg_passive_tab_pane_g3_cp4

0xc95d,	// (0x0002347b) bg_active_tab_pane_g1_cp5

0xc916,	// (0x00023434) bg_active_tab_pane_g2_cp5

0xc966,	// (0x00023484) bg_active_tab_pane_g3_cp5

0xc95d,	// (0x0002347b) bg_passive_tab_pane_g1_cp5

0xc916,	// (0x00023434) bg_passive_tab_pane_g2_cp5

0xc966,	// (0x00023484) bg_passive_tab_pane_g3_cp5

0x360e,	// (0x0001a12c) list_set_graphic_pane_ParamLimits

0x360e,	// (0x0001a12c) list_set_graphic_pane

0xbb83,	// (0x000226a1) bg_set_opt_pane_cp4

0xc96f,	// (0x0002348d) list_set_graphic_pane_g1_ParamLimits

0xc96f,	// (0x0002348d) list_set_graphic_pane_g1

0xc97b,	// (0x00023499) list_set_graphic_pane_g2_ParamLimits

0xc97b,	// (0x00023499) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x00026289) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x00026289) list_set_graphic_pane_g

0x0009,

0xfad0,	// (0x000265ee) volume_small_pane_cp_g

0xc99f,	// (0x000234bd) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc99f,	// (0x000234bd) list_double2_large_graphic_pane_g1_cp2

0xc9ad,	// (0x000234cb) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc9ad,	// (0x000234cb) list_double2_large_graphic_pane_g2_cp2

0xc9be,	// (0x000234dc) list_double2_large_graphic_pane_g3_cp2

0xc9c6,	// (0x000234e4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc9c6,	// (0x000234e4) list_double2_large_graphic_pane_t1_cp2

0xc9dc,	// (0x000234fa) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc9dc,	// (0x000234fa) list_double2_large_graphic_pane_t2_cp2

0xe0bd,	// (0x00024bdb) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe0bd,	// (0x00024bdb) list_double_large_graphic_pane_g1_cp2

0xe0d0,	// (0x00024bee) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe0d0,	// (0x00024bee) list_double_large_graphic_pane_g2_cp2

0xcb4c,	// (0x0002366a) list_double_large_graphic_pane_g3_cp2

0xe0e1,	// (0x00024bff) list_double_large_graphic_pane_g4_cp

0xe0e9,	// (0x00024c07) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe0e9,	// (0x00024c07) list_double_large_graphic_pane_t1_cp2

0xe100,	// (0x00024c1e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe100,	// (0x00024c1e) list_double_large_graphic_pane_t2_cp2

0xca3c,	// (0x0002355a) list_double2_graphic_pane_g1_cp2_ParamLimits

0xca3c,	// (0x0002355a) list_double2_graphic_pane_g1_cp2

0xca4a,	// (0x00023568) list_double2_graphic_pane_g2_cp2_ParamLimits

0xca4a,	// (0x00023568) list_double2_graphic_pane_g2_cp2

0xca5b,	// (0x00023579) list_double2_graphic_pane_g3_cp2

0xca65,	// (0x00023583) list_double2_graphic_pane_t1_cp2_ParamLimits

0xca65,	// (0x00023583) list_double2_graphic_pane_t1_cp2

0xca7b,	// (0x00023599) list_double2_graphic_pane_t2_cp2_ParamLimits

0xca7b,	// (0x00023599) list_double2_graphic_pane_t2_cp2

0xca8d,	// (0x000235ab) list_single_number_heading_pane_g1_cp2_ParamLimits

0xca8d,	// (0x000235ab) list_single_number_heading_pane_g1_cp2

0xca99,	// (0x000235b7) list_single_number_heading_pane_g2_cp2

0xcaa1,	// (0x000235bf) list_single_number_heading_pane_t1_cp2_ParamLimits

0xcaa1,	// (0x000235bf) list_single_number_heading_pane_t1_cp2

0xcab7,	// (0x000235d5) list_single_number_heading_pane_t2_cp2_ParamLimits

0xcab7,	// (0x000235d5) list_single_number_heading_pane_t2_cp2

0xcacb,	// (0x000235e9) list_single_number_heading_pane_t3_cp2_ParamLimits

0xcacb,	// (0x000235e9) list_single_number_heading_pane_t3_cp2

0xca8d,	// (0x000235ab) list_single_heading_pane_g1_cp2_ParamLimits

0xca8d,	// (0x000235ab) list_single_heading_pane_g1_cp2

0xca99,	// (0x000235b7) list_single_heading_pane_g2_cp2

0xcaa1,	// (0x000235bf) list_single_heading_pane_t1_cp2_ParamLimits

0xcaa1,	// (0x000235bf) list_single_heading_pane_t1_cp2

0xdec5,	// (0x000249e3) list_single_heading_pane_t2_cp2_ParamLimits

0xdec5,	// (0x000249e3) list_single_heading_pane_t2_cp2

0xde5f,	// (0x0002497d) list_double_graphic_pane_g1_cp2_ParamLimits

0xde5f,	// (0x0002497d) list_double_graphic_pane_g1_cp2

0xde6b,	// (0x00024989) list_double_graphic_pane_g2_cp2_ParamLimits

0xde6b,	// (0x00024989) list_double_graphic_pane_g2_cp2

0xde7a,	// (0x00024998) list_double_graphic_pane_g3_cp2

0xde82,	// (0x000249a0) list_double_graphic_pane_t1_cp2_ParamLimits

0xde82,	// (0x000249a0) list_double_graphic_pane_t1_cp2

0xde98,	// (0x000249b6) list_double_graphic_pane_t2_cp2_ParamLimits

0xde98,	// (0x000249b6) list_double_graphic_pane_t2_cp2

0xcb40,	// (0x0002365e) list_double_number_pane_g1_cp2_ParamLimits

0xcb40,	// (0x0002365e) list_double_number_pane_g1_cp2

0xcb4c,	// (0x0002366a) list_double_number_pane_g2_cp2

0xde23,	// (0x00024941) list_double_number_pane_t1_cp2_ParamLimits

0xde23,	// (0x00024941) list_double_number_pane_t1_cp2

0xde37,	// (0x00024955) list_double_number_pane_t2_cp2_ParamLimits

0xde37,	// (0x00024955) list_double_number_pane_t2_cp2

0xde4d,	// (0x0002496b) list_double_number_pane_t3_cp2_ParamLimits

0xde4d,	// (0x0002496b) list_double_number_pane_t3_cp2

0xdd9a,	// (0x000248b8) list_single_graphic_pane_g1_cp2_ParamLimits

0xdd9a,	// (0x000248b8) list_single_graphic_pane_g1_cp2

0xcba4,	// (0x000236c2) list_single_graphic_pane_g2_cp2_ParamLimits

0xcba4,	// (0x000236c2) list_single_graphic_pane_g2_cp2

0xcbb0,	// (0x000236ce) list_single_graphic_pane_g3_cp2

0xdd70,	// (0x0002488e) list_single_graphic_pane_t1_cp2_ParamLimits

0xdd70,	// (0x0002488e) list_single_graphic_pane_t1_cp2

0xcba4,	// (0x000236c2) list_single_number_pane_g1_cp2_ParamLimits

0xcba4,	// (0x000236c2) list_single_number_pane_g1_cp2

0xcbb0,	// (0x000236ce) list_single_number_pane_g2_cp2

0xdd70,	// (0x0002488e) list_single_number_pane_t1_cp2_ParamLimits

0xdd70,	// (0x0002488e) list_single_number_pane_t1_cp2

0xdd86,	// (0x000248a4) list_single_number_pane_t2_cp2_ParamLimits

0xdd86,	// (0x000248a4) list_single_number_pane_t2_cp2

0xc9ad,	// (0x000234cb) list_double2_pane_g1_cp2_ParamLimits

0xc9ad,	// (0x000234cb) list_double2_pane_g1_cp2

0xc9be,	// (0x000234dc) list_double2_pane_g2_cp2

0xcb18,	// (0x00023636) list_double2_pane_t1_cp2_ParamLimits

0xcb18,	// (0x00023636) list_double2_pane_t1_cp2

0xcb2e,	// (0x0002364c) list_double2_pane_t2_cp2_ParamLimits

0xcb2e,	// (0x0002364c) list_double2_pane_t2_cp2

0xcb40,	// (0x0002365e) list_double_pane_g1_cp2_ParamLimits

0xcb40,	// (0x0002365e) list_double_pane_g1_cp2

0xcb4c,	// (0x0002366a) list_double_pane_g2_cp2

0xcb54,	// (0x00023672) list_double_pane_t1_cp2_ParamLimits

0xcb54,	// (0x00023672) list_double_pane_t1_cp2

0xcb6a,	// (0x00023688) list_double_pane_t2_cp2_ParamLimits

0xcb6a,	// (0x00023688) list_double_pane_t2_cp2

0xcb94,	// (0x000236b2) list_single_pane_cp2_g3

0xcba4,	// (0x000236c2) list_single_pane_g1_cp2_ParamLimits

0xcba4,	// (0x000236c2) list_single_pane_g1_cp2

0xcbb0,	// (0x000236ce) list_single_pane_g2_cp2

0xcbb8,	// (0x000236d6) list_single_pane_t1_cp2_ParamLimits

0xcbb8,	// (0x000236d6) list_single_pane_t1_cp2

0xcbd0,	// (0x000236ee) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xcbd0,	// (0x000236ee) list_single_large_graphic_pane_g1_cp2

0xcbde,	// (0x000236fc) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcbde,	// (0x000236fc) list_single_large_graphic_pane_g2_cp2

0xcbea,	// (0x00023708) list_single_large_graphic_pane_g3_cp2

0xcbf2,	// (0x00023710) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xcbf2,	// (0x00023710) list_single_large_graphic_pane_g4_cp1

0xcc0c,	// (0x0002372a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcc0c,	// (0x0002372a) list_single_large_graphic_pane_t1_cp2

0xdd3a,	// (0x00024858) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xdd3a,	// (0x00024858) list_single_graphic_heading_pane_g1_cp2

0xdd07,	// (0x00024825) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xdd07,	// (0x00024825) list_single_graphic_heading_pane_g4_cp2

0xcbb0,	// (0x000236ce) list_single_graphic_heading_pane_g5_cp2

0xdd46,	// (0x00024864) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xdd46,	// (0x00024864) list_single_graphic_heading_pane_t1_cp2

0xdd5c,	// (0x0002487a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xdd5c,	// (0x0002487a) list_single_graphic_heading_pane_t2_cp2

0xdcfb,	// (0x00024819) list_single_2graphic_pane_g1_cp2_ParamLimits

0xdcfb,	// (0x00024819) list_single_2graphic_pane_g1_cp2

0xdd07,	// (0x00024825) list_single_2graphic_pane_g2_cp2_ParamLimits

0xdd07,	// (0x00024825) list_single_2graphic_pane_g2_cp2

0xcbb0,	// (0x000236ce) list_single_2graphic_pane_g3_cp2

0xdd18,	// (0x00024836) list_single_2graphic_pane_g4_cp2_ParamLimits

0xdd18,	// (0x00024836) list_single_2graphic_pane_g4_cp2

0xdd24,	// (0x00024842) list_single_2graphic_pane_t1_cp2_ParamLimits

0xdd24,	// (0x00024842) list_single_2graphic_pane_t1_cp2

0xbb79,	// (0x00022697) list_highlight_pane_g10_cp1

0xd8ef,	// (0x0002440d) list_highlight_pane_g1_cp1

0xd8f7,	// (0x00024415) list_highlight_pane_g2_cp1

0xd8ff,	// (0x0002441d) list_highlight_pane_g3_cp1

0xd907,	// (0x00024425) list_highlight_pane_g4_cp1

0xd90f,	// (0x0002442d) list_highlight_pane_g5_cp1

0xd917,	// (0x00024435) list_highlight_pane_g6_cp1

0xd91f,	// (0x0002443d) list_highlight_pane_g7_cp1

0xd927,	// (0x00024445) list_highlight_pane_g8_cp1

0xd92f,	// (0x0002444d) list_highlight_pane_g9_cp1

0x9bc5,	// (0x000206e3) form_field_slider_pane_t3

0x9bd5,	// (0x000206f3) form_field_slider_pane_t4

0xd823,	// (0x00024341) slider_form_pane_ParamLimits

0xd823,	// (0x00024341) slider_form_pane

0xbb83,	// (0x000226a1) control_abbreviations

0xbb83,	// (0x000226a1) control_conventions

0xbb83,	// (0x000226a1) control_definitions

0xbb83,	// (0x000226a1) format_table_attribute

0xdf11,	// (0x00024a2f) bg_popup_preview_window_pane_g9

0xbb83,	// (0x000226a1) format_table_data2

0xbb83,	// (0x000226a1) format_table_data3

0xbb83,	// (0x000226a1) format_table_data_example

0x0008,

0xbb83,	// (0x000226a1) intro_purpose

0xf8f4,	// (0x00026412) bg_popup_preview_window_pane_g

0xbb83,	// (0x000226a1) texts_category

0xbb83,	// (0x000226a1) texts_graphics

0xcc22,	// (0x00023740) text_digital

0xcc31,	// (0x0002374f) text_primary

0xcc40,	// (0x0002375e) text_primary_small

0xcc4f,	// (0x0002376d) text_secondary

0xcc5e,	// (0x0002377c) text_title

0xe39b,	// (0x00024eb9) bg_passive_tab_pane_g1_cp3_srt

0xc916,	// (0x00023434) bg_passive_tab_pane_g2_cp3_srt

0xe3a4,	// (0x00024ec2) bg_passive_tab_pane_g3_cp3_srt

0xbbd1,	// (0x000226ef) bg_active_tab_pane_cp3_srt_ParamLimits

0xbbd1,	// (0x000226ef) bg_active_tab_pane_cp3_srt

0xe3ad,	// (0x00024ecb) tabs_4_active_pane_srt_g1

0xa0e2,	// (0x00020c00) tabs_4_active_pane_srt_t1_ParamLimits

0xa0e2,	// (0x00020c00) tabs_4_active_pane_srt_t1

0xe39b,	// (0x00024eb9) bg_active_tab_pane_g1_cp3_copy1

0xc916,	// (0x00023434) bg_active_tab_pane_g2_cp3_copy1

0xe3a4,	// (0x00024ec2) bg_active_tab_pane_g3_cp3_copy1

0xbbdf,	// (0x000226fd) tabs_2_long_active_pane_srt_ParamLimits

0xbbdf,	// (0x000226fd) tabs_2_long_active_pane_srt

0xbbdf,	// (0x000226fd) tabs_2_long_passive_pane_srt_ParamLimits

0xbbdf,	// (0x000226fd) tabs_2_long_passive_pane_srt

0xc37d,	// (0x00022e9b) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc37d,	// (0x00022e9b) bg_passive_tab_pane_cp4_srt

0xe2c6,	// (0x00024de4) bg_passive_tab_pane_g1_cp4_srt

0xc916,	// (0x00023434) bg_passive_tab_pane_g2_cp4_srt

0xe2cf,	// (0x00024ded) bg_passive_tab_pane_g3_cp4_srt

0xbbdf,	// (0x000226fd) bg_active_tab_pane_cp4_srt_ParamLimits

0xbbdf,	// (0x000226fd) bg_active_tab_pane_cp4_srt

0x9eee,	// (0x00020a0c) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9eee,	// (0x00020a0c) tabs_2_long_active_pane_srt_t1

0xe2c6,	// (0x00024de4) bg_active_tab_pane_g1_cp4_srt

0xc916,	// (0x00023434) bg_active_tab_pane_g2_cp4_srt

0xe2cf,	// (0x00024ded) bg_active_tab_pane_g3_cp4_srt

0xbbd1,	// (0x000226ef) tabs_3_long_active_pane_srt_ParamLimits

0xbbd1,	// (0x000226ef) tabs_3_long_active_pane_srt

0xbbd1,	// (0x000226ef) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xbbd1,	// (0x000226ef) tabs_3_long_passive_pane_cp_srt

0xbbd1,	// (0x000226ef) tabs_3_long_passive_pane_srt_ParamLimits

0xbbd1,	// (0x000226ef) tabs_3_long_passive_pane_srt

0xc37d,	// (0x00022e9b) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc37d,	// (0x00022e9b) bg_passive_tab_pane_cp5_srt

0xc95d,	// (0x0002347b) bg_passive_tab_pane_g1_cp5_srt

0xc916,	// (0x00023434) bg_passive_tab_pane_g2_cp5_srt

0xc966,	// (0x00023484) bg_passive_tab_pane_g3_cp5_srt

0xbbdf,	// (0x000226fd) bg_active_tab_pane_cp5_srt_ParamLimits

0xbbdf,	// (0x000226fd) bg_active_tab_pane_cp5_srt

0x9ed8,	// (0x000209f6) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9ed8,	// (0x000209f6) tabs_3_long_active_pane_srt_t1

0xc95d,	// (0x0002347b) bg_active_tab_pane_g1_cp5_srt

0xc916,	// (0x00023434) bg_active_tab_pane_g2_cp5_srt

0xc966,	// (0x00023484) bg_active_tab_pane_g3_cp5_srt

0xe2b8,	// (0x00024dd6) navi_text_pane_srt_t1

0xe2b0,	// (0x00024dce) navi_icon_pane_srt_g1

0xcd5c,	// (0x0002387a) midp_editing_number_pane_srt

0xcc6d,	// (0x0002378b) midp_ticker_pane_srt

0xcd64,	// (0x00023882) midp_ticker_pane_srt_g1

0xcd6c,	// (0x0002388a) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x000262a8) midp_ticker_pane_srt_g

0xcd74,	// (0x00023892) midp_ticker_pane_srt_t1

0xe2a1,	// (0x00024dbf) midp_editing_number_pane_t1_copy1

0x8dce,	// (0x0001f8ec) listscroll_midp_pane

0x8dce,	// (0x0001f8ec) midp_form_pane

0xcc75,	// (0x00023793) midp_info_popup_window_ParamLimits

0xcc75,	// (0x00023793) midp_info_popup_window

0xc2de,	// (0x00022dfc) bg_popup_sub_pane_cp50_ParamLimits

0xc2de,	// (0x00022dfc) bg_popup_sub_pane_cp50

0xd540,	// (0x0002405e) listscroll_midp_info_pane_ParamLimits

0xd540,	// (0x0002405e) listscroll_midp_info_pane

0xd528,	// (0x00024046) listscroll_form_midp_pane_ParamLimits

0xd528,	// (0x00024046) listscroll_form_midp_pane

0xd534,	// (0x00024052) scroll_bar_cp050

0x9bb9,	// (0x000206d7) list_midp_pane

0xec7b,	// (0x00025799) signal_pane_g2_cp

0xd45a,	// (0x00023f78) listscroll_midp_info_pane_t1_ParamLimits

0xd45a,	// (0x00023f78) listscroll_midp_info_pane_t1

0xd472,	// (0x00023f90) listscroll_midp_info_pane_t2_ParamLimits

0xd472,	// (0x00023f90) listscroll_midp_info_pane_t2

0xd4b0,	// (0x00023fce) listscroll_midp_info_pane_t3_ParamLimits

0xd4b0,	// (0x00023fce) listscroll_midp_info_pane_t3

0xd4ea,	// (0x00024008) listscroll_midp_info_pane_t4_ParamLimits

0xd4ea,	// (0x00024008) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x0002634d) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x0002634d) listscroll_midp_info_pane_t

0xc345,	// (0x00022e63) scroll_pane_cp21

0xd3fe,	// (0x00023f1c) form_midp_field_choice_group_pane

0xd407,	// (0x00023f25) form_midp_field_text_pane

0xd440,	// (0x00023f5e) form_midp_field_time_pane

0xd448,	// (0x00023f66) form_midp_gauge_slider_pane

0xd451,	// (0x00023f6f) form_midp_gauge_wait_pane

0xbb83,	// (0x000226a1) form_midp_image_pane

0x852b,	// (0x0001f049) list_single_midp_pane_ParamLimits

0x852b,	// (0x0001f049) list_single_midp_pane

0x9b95,	// (0x000206b3) form_midp_field_text_pane_t1

0xd2a5,	// (0x00023dc3) input_focus_pane_cp050

0xd3ed,	// (0x00023f0b) list_midp_form_text_pane

0xd3bc,	// (0x00023eda) form_midp_field_choice_group_pane_t1

0xd3ca,	// (0x00023ee8) input_focus_pane_cp051

0xd3de,	// (0x00023efc) list_midp_choice_pane

0xbb83,	// (0x000226a1) status_idle_pane

0xd3a0,	// (0x00023ebe) form_midp_field_time_pane_t1

0xbb79,	// (0x00022697) wait_anim_pane_g2_copy1

0xd3ae,	// (0x00023ecc) form_midp_field_time_pane_t2

0x0001,

0xccce,	// (0x000237ec) aid_navinavi_width_2_pane

0xf82a,	// (0x00026348) form_midp_field_time_pane_t

0xbb83,	// (0x000226a1) input_focus_pane_cp052

0xbb83,	// (0x000226a1) bg_input_focus_pane_cp040

0xd37c,	// (0x00023e9a) form_midp_gauge_slider_pane_t1

0xd38a,	// (0x00023ea8) form_midp_gauge_slider_pane_t2

0x9b79,	// (0x00020697) form_midp_gauge_slider_pane_t3

0x9b87,	// (0x000206a5) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0002633f) form_midp_gauge_slider_pane_t

0xd398,	// (0x00023eb6) form_midp_slider_pane

0xbbdf,	// (0x000226fd) bg_input_focus_pane_cp041_ParamLimits

0xbbdf,	// (0x000226fd) bg_input_focus_pane_cp041

0xd349,	// (0x00023e67) form_midp_gauge_wait_pane_t1_ParamLimits

0xd349,	// (0x00023e67) form_midp_gauge_wait_pane_t1

0xd35b,	// (0x00023e79) form_midp_gauge_wait_pane_t2_ParamLimits

0xd35b,	// (0x00023e79) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x0002633a) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x0002633a) form_midp_gauge_wait_pane_t

0xd36d,	// (0x00023e8b) form_midp_wait_pane_ParamLimits

0xd36d,	// (0x00023e8b) form_midp_wait_pane

0xd313,	// (0x00023e31) form_midp_image_pane_g1

0xd31c,	// (0x00023e3a) form_midp_image_pane_t1

0xd32b,	// (0x00023e49) form_midp_image_pane_t2

0xd33a,	// (0x00023e58) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x00026333) form_midp_image_pane_t

0xd30a,	// (0x00023e28) list_single_midp_pane_g1

0x4ccd,	// (0x0001b7eb) list_single_midp_pane_t1

0x9b62,	// (0x00020680) list_midp_form_item_pane_ParamLimits

0x9b62,	// (0x00020680) list_midp_form_item_pane

0xcc88,	// (0x000237a6) list_midp_form_item_pane_t1

0xcc97,	// (0x000237b5) midp_ticker_pane_g1

0xcca3,	// (0x000237c1) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0002628e) midp_ticker_pane_g

0x8e7a,	// (0x0001f998) midp_ticker_pane_t1

0xa057,	// (0x00020b75) midp_editing_number_pane_t1

0xe32f,	// (0x00024e4d) midp_editing_number_pane

0xe33e,	// (0x00024e5c) midp_ticker_pane

0xe291,	// (0x00024daf) ai_message_heading_pane

0xbb83,	// (0x000226a1) bg_popup_window_pane_cp14

0xe299,	// (0x00024db7) listscroll_ai_message_pane

0xe21b,	// (0x00024d39) ai_message_heading_pane_g1_ParamLimits

0xe21b,	// (0x00024d39) ai_message_heading_pane_g1

0xe227,	// (0x00024d45) ai_message_heading_pane_g2_ParamLimits

0xe227,	// (0x00024d45) ai_message_heading_pane_g2

0xe233,	// (0x00024d51) ai_message_heading_pane_g3_ParamLimits

0xe233,	// (0x00024d51) ai_message_heading_pane_g3

0xe23f,	// (0x00024d5d) ai_message_heading_pane_g4_ParamLimits

0xe23f,	// (0x00024d5d) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00026474) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00026474) ai_message_heading_pane_g

0xe24b,	// (0x00024d69) ai_message_heading_pane_t1_ParamLimits

0xe24b,	// (0x00024d69) ai_message_heading_pane_t1

0xe265,	// (0x00024d83) ai_message_heading_pane_t2_ParamLimits

0xe265,	// (0x00024d83) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x0002647d) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x0002647d) ai_message_heading_pane_t

0xe277,	// (0x00024d95) bg_popup_heading_pane_cp1_ParamLimits

0xe277,	// (0x00024d95) bg_popup_heading_pane_cp1

0xe209,	// (0x00024d27) list_ai_message_pane_ParamLimits

0xe209,	// (0x00024d27) list_ai_message_pane

0xc345,	// (0x00022e63) scroll_pane_cp10

0xe1a5,	// (0x00024cc3) list_ai_message_pane_g1

0xe1ad,	// (0x00024ccb) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00026451) list_ai_message_pane_g

0xe1b5,	// (0x00024cd3) list_ai_message_pane_t1_ParamLimits

0xe1b5,	// (0x00024cd3) list_ai_message_pane_t1

0xe1ca,	// (0x00024ce8) list_ai_message_pane_t2_ParamLimits

0xe1ca,	// (0x00024ce8) list_ai_message_pane_t2

0xe1df,	// (0x00024cfd) list_ai_message_pane_t3_ParamLimits

0xe1df,	// (0x00024cfd) list_ai_message_pane_t3

0xe1f4,	// (0x00024d12) list_ai_message_pane_t4_ParamLimits

0xe1f4,	// (0x00024d12) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00026456) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00026456) list_ai_message_pane_t

0x9eb3,	// (0x000209d1) cell_ai_soft_ind_pane_ParamLimits

0x9eb3,	// (0x000209d1) cell_ai_soft_ind_pane

0xccaf,	// (0x000237cd) cell_ai_soft_ind_pane_g1_ParamLimits

0xccaf,	// (0x000237cd) cell_ai_soft_ind_pane_g1

0xbb83,	// (0x000226a1) grid_highlight_cp1

0xccbc,	// (0x000237da) text_secondary_cp56_ParamLimits

0xccbc,	// (0x000237da) text_secondary_cp56

0xe17a,	// (0x00024c98) example_general_pane_ParamLimits

0xe17a,	// (0x00024c98) example_general_pane

0xe186,	// (0x00024ca4) example_parent_pane_g1_ParamLimits

0xe186,	// (0x00024ca4) example_parent_pane_g1

0xe192,	// (0x00024cb0) example_parent_pane_t1_ParamLimits

0xe192,	// (0x00024cb0) example_parent_pane_t1

0x93c3,	// (0x0001fee1) popup_preview_text_window_ParamLimits

0x93c3,	// (0x0001fee1) popup_preview_text_window

0xcb9c,	// (0x000236ba) list_single_pane_cp2_g4

0xbdae,	// (0x000228cc) bg_popup_preview_window_pane_ParamLimits

0xbdae,	// (0x000228cc) bg_popup_preview_window_pane

0xdf19,	// (0x00024a37) popup_preview_text_window_t1_ParamLimits

0xdf19,	// (0x00024a37) popup_preview_text_window_t1

0xdf37,	// (0x00024a55) popup_preview_text_window_t2_ParamLimits

0xdf37,	// (0x00024a55) popup_preview_text_window_t2

0xdf80,	// (0x00024a9e) popup_preview_text_window_t3_ParamLimits

0xdf80,	// (0x00024a9e) popup_preview_text_window_t3

0xdfc5,	// (0x00024ae3) popup_preview_text_window_t4_ParamLimits

0xdfc5,	// (0x00024ae3) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x00026425) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x00026425) popup_preview_text_window_t

0xe043,	// (0x00024b61) scroll_pane_cp11

0xd1b5,	// (0x00023cd3) bg_popup_preview_window_pane_g1

0xded9,	// (0x000249f7) bg_popup_preview_window_pane_g2

0xdee1,	// (0x000249ff) bg_popup_preview_window_pane_g3

0xdee9,	// (0x00024a07) bg_popup_preview_window_pane_g4

0xdef1,	// (0x00024a0f) bg_popup_preview_window_pane_g5

0xdef9,	// (0x00024a17) bg_popup_preview_window_pane_g6

0xdf01,	// (0x00024a1f) bg_popup_preview_window_pane_g7

0xdf09,	// (0x00024a27) bg_popup_preview_window_pane_g8

0x5456,	// (0x0001bf74) aid_popup_width_pane

0x933f,	// (0x0001fe5d) popup_midp_note_alarm_window_ParamLimits

0x933f,	// (0x0001fe5d) popup_midp_note_alarm_window

0xc21a,	// (0x00022d38) data_form_pane_ParamLimits

0x8401,	// (0x0001ef1f) form_field_data_pane_g1

0x840b,	// (0x0001ef29) form_field_data_pane_t1_ParamLimits

0xc226,	// (0x00022d44) input_focus_pane_ParamLimits

0xc234,	// (0x00022d52) data_form_wide_pane_ParamLimits

0x4a10,	// (0x0001b52e) form_field_data_wide_pane_g1

0x4a1c,	// (0x0001b53a) form_field_data_wide_pane_t1_ParamLimits

0xbfa1,	// (0x00022abf) input_focus_pane_cp6_ParamLimits

0x8c03,	// (0x0001f721) input_popup_find_pane_g1_ParamLimits

0x8c03,	// (0x0001f721) input_popup_find_pane_g1

0x59a8,	// (0x0001c4c6) aid_navi_side_left_pane

0x59bd,	// (0x0001c4db) aid_navi_side_right_pane

0xd9cc,	// (0x000244ea) bg_popup_window_pane_cp30_ParamLimits

0xd9cc,	// (0x000244ea) bg_popup_window_pane_cp30

0xda46,	// (0x00024564) popup_midp_note_alarm_window_g1_ParamLimits

0xda46,	// (0x00024564) popup_midp_note_alarm_window_g1

0xda76,	// (0x00024594) popup_midp_note_alarm_window_t1_ParamLimits

0xda76,	// (0x00024594) popup_midp_note_alarm_window_t1

0xdb17,	// (0x00024635) popup_midp_note_alarm_window_t2_ParamLimits

0xdb17,	// (0x00024635) popup_midp_note_alarm_window_t2

0xdbc5,	// (0x000246e3) popup_midp_note_alarm_window_t3_ParamLimits

0xdbc5,	// (0x000246e3) popup_midp_note_alarm_window_t3

0xdbed,	// (0x0002470b) popup_midp_note_alarm_window_t4_ParamLimits

0xdbed,	// (0x0002470b) popup_midp_note_alarm_window_t4

0xdc1f,	// (0x0002473d) popup_midp_note_alarm_window_t5_ParamLimits

0xdc1f,	// (0x0002473d) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x000263c2) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x000263c2) popup_midp_note_alarm_window_t

0xdccb,	// (0x000247e9) wait_bar_pane_cp1_ParamLimits

0xdccb,	// (0x000247e9) wait_bar_pane_cp1

0xbb83,	// (0x000226a1) wait_anim_pane_copy1

0xbb83,	// (0x000226a1) wait_border_pane_copy1

0xd6e4,	// (0x00024202) wait_border_pane_g1_copy1

0x4a36,	// (0x0001b554) form_field_popup_pane_g1

0x8425,	// (0x0001ef43) form_field_popup_pane_t1_ParamLimits

0xc226,	// (0x00022d44) input_focus_pane_cp7_ParamLimits

0xc260,	// (0x00022d7e) list_form_pane_ParamLimits

0x4a58,	// (0x0001b576) form_field_popup_wide_pane_g1

0x4a60,	// (0x0001b57e) form_field_popup_wide_pane_t1_ParamLimits

0xc226,	// (0x00022d44) input_focus_pane_cp8_ParamLimits

0xc26c,	// (0x00022d8a) list_form_wide_pane_ParamLimits

0xe3e0,	// (0x00024efe) aid_size_cell_graphic_pane

0x84a4,	// (0x0001efc2) data_form_pane_t1_ParamLimits

0x8547,	// (0x0001f065) data_form_wide_pane_t1_ParamLimits

0x9778,	// (0x00020296) bg_status_flat_pane

0x889f,	// (0x0001f3bd) title_pane_t1_ParamLimits

0xbb99,	// (0x000226b7) title_pane_t2_ParamLimits

0xbbbf,	// (0x000226dd) title_pane_t3_ParamLimits

0xf573,	// (0x00026091) title_pane_t_ParamLimits

0xc6f3,	// (0x00023211) level_1_signal_ParamLimits

0xc700,	// (0x0002321e) level_2_signal_ParamLimits

0xc70d,	// (0x0002322b) level_3_signal_ParamLimits

0xc71a,	// (0x00023238) level_4_signal_ParamLimits

0xc727,	// (0x00023245) level_5_signal_ParamLimits

0xc734,	// (0x00023252) level_6_signal_ParamLimits

0xc741,	// (0x0002325f) level_7_signal_ParamLimits

0xc6f3,	// (0x00023211) level_1_battery_ParamLimits

0xc700,	// (0x0002321e) level_2_battery_ParamLimits

0xc70d,	// (0x0002322b) level_3_battery_ParamLimits

0xc71a,	// (0x00023238) level_4_battery_ParamLimits

0xc727,	// (0x00023245) level_5_battery_ParamLimits

0xc734,	// (0x00023252) level_6_battery_ParamLimits

0xc741,	// (0x0002325f) level_7_battery_ParamLimits

0xd8ef,	// (0x0002440d) bg_status_flat_pane_g1

0xd8f7,	// (0x00024415) bg_status_flat_pane_g2

0xd8ff,	// (0x0002441d) bg_status_flat_pane_g3

0xd907,	// (0x00024425) bg_status_flat_pane_g4

0xd90f,	// (0x0002442d) bg_status_flat_pane_g5

0xd917,	// (0x00024435) bg_status_flat_pane_g6

0xd91f,	// (0x0002443d) bg_status_flat_pane_g7

0x8933,	// (0x0001f451) tabs_3_active_pane_t1_ParamLimits

0x8933,	// (0x0001f451) tabs_3_passive_pane_t1_ParamLimits

0x894d,	// (0x0001f46b) tabs_4_active_pane_t1_ParamLimits

0x894d,	// (0x0001f46b) tabs_4_1_passive_pane_t1_ParamLimits

0x8c19,	// (0x0001f737) tabs_2_active_pane_t1_ParamLimits

0x8c19,	// (0x0001f737) tabs_2_passive_pane_t1_ParamLimits

0xbbdf,	// (0x000226fd) bg_active_tab_pane_cp4_ParamLimits

0x8c2b,	// (0x0001f749) tabs_2_long_active_pane_t1_ParamLimits

0xc37d,	// (0x00022e9b) bg_passive_tab_pane_cp4_ParamLimits

0x5eff,	// (0x0001ca1d) list_single_midp_graphic_pane_t1_ParamLimits

0xbbdf,	// (0x000226fd) bg_active_tab_pane_cp5_ParamLimits

0x8c3e,	// (0x0001f75c) tabs_3_long_active_pane_t1_ParamLimits

0xc37d,	// (0x00022e9b) bg_passive_tab_pane_cp5_ParamLimits

0x5eff,	// (0x0001ca1d) list_single_midp_graphic_pane_t1

0x9778,	// (0x00020296) bg_status_flat_pane_ParamLimits

0xd088,	// (0x00023ba6) indicator_pane_cp2_ParamLimits

0xd088,	// (0x00023ba6) indicator_pane_cp2

0x98ef,	// (0x0002040d) navi_pane_srt_ParamLimits

0x98ef,	// (0x0002040d) navi_pane_srt

0xd0b0,	// (0x00023bce) popup_clock_digital_analogue_window_cp1

0xbc23,	// (0x00022741) indicator_pane_t1

0xcc6d,	// (0x0002378b) copy_highlight_pane

0xcc6d,	// (0x0002378b) cursor_graphics_pane

0xcc6d,	// (0x0002378b) graphic_within_text_pane

0xcc6d,	// (0x0002378b) link_highlight_pane

0xe006,	// (0x00024b24) popup_preview_text_window_t5_ParamLimits

0xe006,	// (0x00024b24) popup_preview_text_window_t5

0xccd6,	// (0x000237f4) cursor_digital_pane

0xccd6,	// (0x000237f4) cursor_primary_pane

0xcce7,	// (0x00023805) cursor_primary_small_pane

0xccef,	// (0x0002380d) cursor_secondary_pane

0xccf7,	// (0x00023815) cursor_title_pane

0xccd6,	// (0x000237f4) link_highlight_digital_pane

0xccde,	// (0x000237fc) link_highlight_primary_pane

0xcce7,	// (0x00023805) link_highlight_primary_small_pane

0xccef,	// (0x0002380d) link_highlight_secondary_pane

0xccf7,	// (0x00023815) link_highlight_title_pane

0xccd6,	// (0x000237f4) copy_highlight_digital_pane

0xccd6,	// (0x000237f4) copy_highlight_primary_pane

0xcce7,	// (0x00023805) copy_highlight_primary_small_pane

0xccef,	// (0x0002380d) copy_highlight_secondary_pane

0xccf7,	// (0x00023815) copy_highlight_title_pane

0xccef,	// (0x0002380d) graphic_text_digital_pane

0xd96f,	// (0x0002448d) graphic_text_primary_pane

0xd978,	// (0x00024496) graphic_text_primary_small_pane

0xcce7,	// (0x00023805) graphic_text_secondary_pane

0xccd6,	// (0x000237f4) graphic_text_title_pane

0x8e8c,	// (0x0001f9aa) cursor_primary_pane_g1

0xd961,	// (0x0002447f) cursor_text_primary_t1

0x9bf9,	// (0x00020717) cursor_primary_small_pane_g1

0xd953,	// (0x00024471) cursor_text_primary_small_t1

0x9bef,	// (0x0002070d) cursor_primary_small_pane_g1_copy1

0xd945,	// (0x00024463) cursor_text_primary_small_t1_copy1

0xd937,	// (0x00024455) cursor_text_title_t1

0x9be5,	// (0x00020703) cursor_title_pane_g1

0x8e8c,	// (0x0001f9aa) cursor_digital_pane_g1

0xccff,	// (0x0002381d) cursor_text_digital_t1

0xd8d8,	// (0x000243f6) link_highlight_primary_pane_g1

0xd8e0,	// (0x000243fe) link_highlight_primary_pane_t1

0xcd0d,	// (0x0002382b) link_highlight_primary_small_pane_g1

0xcd15,	// (0x00023833) link_highlight_primary_small_pane_t1

0xcd0d,	// (0x0002382b) link_highlight_secondary_pane_g1

0xcd24,	// (0x00023842) link_highlight_secondary_pane_t1

0xd84c,	// (0x0002436a) link_highlight_title_pane_g1

0xd854,	// (0x00024372) link_highlight_title_pane_t1

0xd835,	// (0x00024353) link_highlight_digital_pane_g1

0xd83d,	// (0x0002435b) link_highlight_digital_pane_t1

0xd729,	// (0x00024247) copy_highlight_primary_pane_g1

0xd731,	// (0x0002424f) copy_highlight_primary_pane_t1

0xd703,	// (0x00024221) copy_highlight_primary_small_pane_g1

0xd71a,	// (0x00024238) copy_highlight_primary_small_pane_t1

0xcd33,	// (0x00023851) copy_highlight_secondary_pane_g1

0xcd3b,	// (0x00023859) copy_highlight_secondary_pane_t1

0xd703,	// (0x00024221) copy_highlight_title_pane_g1

0xd70b,	// (0x00024229) copy_highlight_title_pane_t1

0xd729,	// (0x00024247) copy_highlight_digital_pane_g1

0xe56a,	// (0x00025088) copy_highlight_digital_pane_t1

0xe4be,	// (0x00024fdc) graphic_text_primary_pane_g1

0xe54e,	// (0x0002506c) graphic_text_primary_pane_t1

0xe55c,	// (0x0002507a) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x000264f1) graphic_text_primary_pane_t

0xe52a,	// (0x00025048) graphic_text_primary_small_pane_g1

0xe532,	// (0x00025050) graphic_text_primary_small_pane_t1

0xe540,	// (0x0002505e) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x000264ec) graphic_text_primary_small_pane_t

0xe506,	// (0x00025024) graphic_text_secondary_pane_g1

0xe50e,	// (0x0002502c) graphic_text_secondary_pane_t1

0xe51c,	// (0x0002503a) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x000264e7) graphic_text_secondary_pane_t

0xe4e2,	// (0x00025000) graphic_text_title_pane_g1

0xe4ea,	// (0x00025008) graphic_text_title_pane_t1

0xe4f8,	// (0x00025016) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x000264e2) graphic_text_title_pane_t

0xe4be,	// (0x00024fdc) graphic_text_digital_pane_g1

0xe4c6,	// (0x00024fe4) graphic_text_digital_pane_t1

0xe4d4,	// (0x00024ff2) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x000264dd) graphic_text_digital_pane_t

0xbbdf,	// (0x000226fd) navi_icon_pane_srt_ParamLimits

0xbbdf,	// (0x000226fd) navi_icon_pane_srt

0xbb83,	// (0x000226a1) navi_midp_pane_srt

0xbb83,	// (0x000226a1) navi_navi_pane_srt

0xbbdf,	// (0x000226fd) navi_text_pane_srt_ParamLimits

0xbbdf,	// (0x000226fd) navi_text_pane_srt

0xe489,	// (0x00024fa7) navi_navi_icon_text_pane_srt

0xe491,	// (0x00024faf) navi_navi_pane_srt_g1_ParamLimits

0xe491,	// (0x00024faf) navi_navi_pane_srt_g1

0xe4a3,	// (0x00024fc1) navi_navi_pane_srt_g2_ParamLimits

0xe4a3,	// (0x00024fc1) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x000264d8) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x000264d8) navi_navi_pane_srt_g

0xe4b5,	// (0x00024fd3) navi_navi_tabs_pane_srt

0xe489,	// (0x00024fa7) navi_navi_text_pane_srt

0xe489,	// (0x00024fa7) navi_navi_volume_pane_srt

0xe47a,	// (0x00024f98) navi_navi_text_pane_srt_t1

0x627f,	// (0x0001cd9d) navi_navi_volume_pane_srt_g1

0x6287,	// (0x0001cda5) volume_small_pane_srt_ParamLimits

0x6287,	// (0x0001cda5) volume_small_pane_srt

0x5c88,	// (0x0001c7a6) volume_small_pane_srt_g1_ParamLimits

0x5c88,	// (0x0001c7a6) volume_small_pane_srt_g1

0x5c98,	// (0x0001c7b6) volume_small_pane_srt_g2_ParamLimits

0x5c98,	// (0x0001c7b6) volume_small_pane_srt_g2

0x5ca9,	// (0x0001c7c7) volume_small_pane_srt_g3_ParamLimits

0x5ca9,	// (0x0001c7c7) volume_small_pane_srt_g3

0x5cba,	// (0x0001c7d8) volume_small_pane_srt_g4_ParamLimits

0x5cba,	// (0x0001c7d8) volume_small_pane_srt_g4

0x5ccb,	// (0x0001c7e9) volume_small_pane_srt_g5_ParamLimits

0x5ccb,	// (0x0001c7e9) volume_small_pane_srt_g5

0x5cdc,	// (0x0001c7fa) volume_small_pane_srt_g6_ParamLimits

0x5cdc,	// (0x0001c7fa) volume_small_pane_srt_g6

0x5ced,	// (0x0001c80b) volume_small_pane_srt_g7_ParamLimits

0x5ced,	// (0x0001c80b) volume_small_pane_srt_g7

0x5cfe,	// (0x0001c81c) volume_small_pane_srt_g8_ParamLimits

0x5cfe,	// (0x0001c81c) volume_small_pane_srt_g8

0x5d0f,	// (0x0001c82d) volume_small_pane_srt_g9_ParamLimits

0x5d0f,	// (0x0001c82d) volume_small_pane_srt_g9

0x5d20,	// (0x0001c83e) volume_small_pane_srt_g10_ParamLimits

0x5d20,	// (0x0001c83e) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x00026293) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x00026293) volume_small_pane_srt_g

0xbe57,	// (0x00022975) query_popup_data_pane_cp2

0xe460,	// (0x00024f7e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe460,	// (0x00024f7e) navi_navi_icon_text_pane_srt_t1

0xd96f,	// (0x0002448d) navi_tabs_2_long_pane_srt

0xd96f,	// (0x0002448d) navi_tabs_2_pane_srt

0xd96f,	// (0x0002448d) navi_tabs_3_long_pane_srt

0xd96f,	// (0x0002448d) navi_tabs_3_pane_srt

0xd96f,	// (0x0002448d) navi_tabs_4_pane_srt

0x625f,	// (0x0001cd7d) tabs_2_active_pane_srt_ParamLimits

0x625f,	// (0x0001cd7d) tabs_2_active_pane_srt

0x626f,	// (0x0001cd8d) tabs_2_passive_pane_srt_ParamLimits

0x626f,	// (0x0001cd8d) tabs_2_passive_pane_srt

0xd2a5,	// (0x00023dc3) bg_passive_tab_pane_cp1_srt_ParamLimits

0xd2a5,	// (0x00023dc3) bg_passive_tab_pane_cp1_srt

0xe43e,	// (0x00024f5c) bg_passive_tab_pane_g1_cp1_srt

0xc916,	// (0x00023434) bg_passive_tab_pane_g2_cp1_srt

0xe447,	// (0x00024f65) bg_passive_tab_pane_g3_cp1_srt

0xbbd1,	// (0x000226ef) bg_active_tab_pane_cp1_srt_ParamLimits

0xbbd1,	// (0x000226ef) bg_active_tab_pane_cp1_srt

0xe450,	// (0x00024f6e) tabs_2_active_pane_srt_g1

0xa15f,	// (0x00020c7d) tabs_2_active_pane_srt_t1_ParamLimits

0xa15f,	// (0x00020c7d) tabs_2_active_pane_srt_t1

0xe43e,	// (0x00024f5c) bg_active_tab_pane_g1_cp1_srt

0xc916,	// (0x00023434) bg_active_tab_pane_g2_cp1_srt

0xe447,	// (0x00024f65) bg_active_tab_pane_g3_cp1_srt

0x622c,	// (0x0001cd4a) tabs_3_active_pane_srt_ParamLimits

0x622c,	// (0x0001cd4a) tabs_3_active_pane_srt

0x623d,	// (0x0001cd5b) tabs_3_passive_pane_cp_srt_ParamLimits

0x623d,	// (0x0001cd5b) tabs_3_passive_pane_cp_srt

0x624e,	// (0x0001cd6c) tabs_3_passive_pane_srt_ParamLimits

0x624e,	// (0x0001cd6c) tabs_3_passive_pane_srt

0xd2a5,	// (0x00023dc3) bg_passive_tab_pane_cp2_srt_ParamLimits

0xd2a5,	// (0x00023dc3) bg_passive_tab_pane_cp2_srt

0xcd4a,	// (0x00023868) bg_passive_tab_pane_g1_cp2_srt

0xc916,	// (0x00023434) bg_passive_tab_pane_g2_cp2_srt

0xcd53,	// (0x00023871) bg_passive_tab_pane_g3_cp2_srt

0xbbd1,	// (0x000226ef) bg_active_tab_pane_cp2_srt_ParamLimits

0xbbd1,	// (0x000226ef) bg_active_tab_pane_cp2_srt

0xe436,	// (0x00024f54) tabs_3_active_pane_srt_g1

0xa149,	// (0x00020c67) tabs_3_active_pane_srt_t1_ParamLimits

0xa149,	// (0x00020c67) tabs_3_active_pane_srt_t1

0xcd4a,	// (0x00023868) bg_active_tab_pane_g1_cp2_srt

0xc916,	// (0x00023434) bg_active_tab_pane_g2_cp2_srt

0xcd53,	// (0x00023871) bg_active_tab_pane_g3_cp2_srt

0x61e4,	// (0x0001cd02) tabs_4_active_pane_srt_ParamLimits

0x61e4,	// (0x0001cd02) tabs_4_active_pane_srt

0x61f6,	// (0x0001cd14) tabs_4_passive_pane_cp2_srt_ParamLimits

0x61f6,	// (0x0001cd14) tabs_4_passive_pane_cp2_srt

0xce77,	// (0x00023995) aid_size_cell_toolbar

0xdc0d,	// (0x0002472b) main_idle_act_pane_ParamLimits

0xcf41,	// (0x00023a5f) popup_large_graphic_colour_window_ParamLimits

0x9643,	// (0x00020161) popup_toolbar_window_ParamLimits

0x9643,	// (0x00020161) popup_toolbar_window

0x4d91,	// (0x0001b8af) list_single_graphic_2heading_pane_ParamLimits

0x4d91,	// (0x0001b8af) list_single_graphic_2heading_pane

0xc527,	// (0x00023045) aid_size_cell_apps_grid_lsc_pane

0xc539,	// (0x00023057) aid_size_cell_apps_grid_prt_pane

0xc37d,	// (0x00022e9b) bg_wml_button_pane_cp1_ParamLimits

0xc37d,	// (0x00022e9b) bg_wml_button_pane_cp1

0x9b95,	// (0x000206b3) form_midp_field_text_pane_t1_ParamLimits

0xd2a5,	// (0x00023dc3) input_focus_pane_cp050_ParamLimits

0xd3ed,	// (0x00023f0b) list_midp_form_text_pane_ParamLimits

0xd3ca,	// (0x00023ee8) input_focus_pane_cp051_ParamLimits

0xd3de,	// (0x00023efc) list_midp_choice_pane_ParamLimits

0x9b2a,	// (0x00020648) list_single_2graphic_pane_cp3_ParamLimits

0x9b2a,	// (0x00020648) list_single_2graphic_pane_cp3

0x9b40,	// (0x0002065e) list_single_midp_graphic_pane_ParamLimits

0x9b40,	// (0x0002065e) list_single_midp_graphic_pane

0x4574,	// (0x0001b092) list_single_graphic_2heading_pane_g1_ParamLimits

0x4574,	// (0x0001b092) list_single_graphic_2heading_pane_g1

0x44fa,	// (0x0001b018) list_single_graphic_2heading_pane_g4_ParamLimits

0x44fa,	// (0x0001b018) list_single_graphic_2heading_pane_g4

0x4506,	// (0x0001b024) list_single_graphic_2heading_pane_g5_ParamLimits

0x4506,	// (0x0001b024) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x000262e6) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x000262e6) list_single_graphic_2heading_pane_g

0x4c45,	// (0x0001b763) list_single_graphic_2heading_pane_t1_ParamLimits

0x4c45,	// (0x0001b763) list_single_graphic_2heading_pane_t1

0x4c59,	// (0x0001b777) list_single_graphic_2heading_pane_t2_ParamLimits

0x4c59,	// (0x0001b777) list_single_graphic_2heading_pane_t2

0x4c75,	// (0x0001b793) list_single_graphic_2heading_pane_t3_ParamLimits

0x4c75,	// (0x0001b793) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x000262ed) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x000262ed) list_single_graphic_2heading_pane_t

0xd0f3,	// (0x00023c11) bg_popup_sub_pane_cp2

0xd11d,	// (0x00023c3b) grid_toobar_pane

0x5e84,	// (0x0001c9a2) cell_toolbar_pane_ParamLimits

0x5e84,	// (0x0001c9a2) cell_toolbar_pane

0xd159,	// (0x00023c77) cell_toolbar_pane_g1_ParamLimits

0xd159,	// (0x00023c77) cell_toolbar_pane_g1

0xd16d,	// (0x00023c8b) cell_toolbar_pane_g2_ParamLimits

0xd16d,	// (0x00023c8b) cell_toolbar_pane_g2

0x0001,

0xf7d6,	// (0x000262f4) cell_toolbar_pane_g_ParamLimits

0xf7d6,	// (0x000262f4) cell_toolbar_pane_g

0xd18f,	// (0x00023cad) grid_highlight_pane_cp2_ParamLimits

0xd18f,	// (0x00023cad) grid_highlight_pane_cp2

0xd1a9,	// (0x00023cc7) toolbar_button_pane

0xd1b5,	// (0x00023cd3) toolbar_button_pane_g1

0xd1bd,	// (0x00023cdb) toolbar_button_pane_g2

0xd1c5,	// (0x00023ce3) toolbar_button_pane_g3

0xd1cd,	// (0x00023ceb) toolbar_button_pane_g4

0xd1d5,	// (0x00023cf3) toolbar_button_pane_g5

0xd1dd,	// (0x00023cfb) toolbar_button_pane_g6

0xd1e5,	// (0x00023d03) toolbar_button_pane_g7

0xd1ed,	// (0x00023d0b) toolbar_button_pane_g8

0xd1f5,	// (0x00023d13) toolbar_button_pane_g9

0x0009,

0xf7db,	// (0x000262f9) toolbar_button_pane_g

0x5ebc,	// (0x0001c9da) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5ebc,	// (0x0001c9da) list_single_2graphic_pane_g1_cp3

0x9a8c,	// (0x000205aa) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9a8c,	// (0x000205aa) list_single_2graphic_pane_g2_cp3

0xca99,	// (0x000235b7) list_single_2graphic_pane_g3_cp3

0x5ed9,	// (0x0001c9f7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5ed9,	// (0x0001c9f7) list_single_2graphic_pane_g4_cp3

0x5ee5,	// (0x0001ca03) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5ee5,	// (0x0001ca03) list_single_2graphic_pane_t1_cp3

0xca8d,	// (0x000235ab) list_single_midp_graphic_pane_g2_ParamLimits

0xca8d,	// (0x000235ab) list_single_midp_graphic_pane_g2

0xce7f,	// (0x0002399d) aid_zoom_text_primary

0x4c19,	// (0x0001b737) aid_zoom_text_secondary

0xce07,	// (0x00023925) status_small_pane_g7_ParamLimits

0xce07,	// (0x00023925) status_small_pane_g7

0xce2a,	// (0x00023948) status_small_pane_t1_ParamLimits

0x887b,	// (0x0001f399) title_pane_g2

0x0003,

0xf56a,	// (0x00026088) title_pane_g

0x8b06,	// (0x0001f624) aid_size_cell_colour_1_pane_ParamLimits

0x8b06,	// (0x0001f624) aid_size_cell_colour_1_pane

0x8b1a,	// (0x0001f638) aid_size_cell_colour_2_pane_ParamLimits

0x8b1a,	// (0x0001f638) aid_size_cell_colour_2_pane

0x8b2e,	// (0x0001f64c) aid_size_cell_colour_3_pane_ParamLimits

0x8b2e,	// (0x0001f64c) aid_size_cell_colour_3_pane

0x8b42,	// (0x0001f660) aid_size_cell_colour_4_pane_ParamLimits

0x8b42,	// (0x0001f660) aid_size_cell_colour_4_pane

0x58e4,	// (0x0001c402) title_pane_stacon_g1_ParamLimits

0x58e4,	// (0x0001c402) title_pane_stacon_g1

0xd788,	// (0x000242a6) popup_note_wait_window_g3_ParamLimits

0xd788,	// (0x000242a6) popup_note_wait_window_g3

0xd7fe,	// (0x0002431c) popup_note_wait_window_t5_ParamLimits

0xd7fe,	// (0x0002431c) popup_note_wait_window_t5

0xbb83,	// (0x000226a1) main_feb_china_hwr_fs_writing_pane

0x906b,	// (0x0001fb89) popup_feb_china_hwr_fs_window_ParamLimits

0x906b,	// (0x0001fb89) popup_feb_china_hwr_fs_window

0x9a9d,	// (0x000205bb) aid_size_cell_hwr_fs_ParamLimits

0x9a9d,	// (0x000205bb) aid_size_cell_hwr_fs

0xd2a5,	// (0x00023dc3) bg_popup_sub_pane_cp3_ParamLimits

0xd2a5,	// (0x00023dc3) bg_popup_sub_pane_cp3

0x9ab2,	// (0x000205d0) grid_hwr_fs_pane_ParamLimits

0x9ab2,	// (0x000205d0) grid_hwr_fs_pane

0x5f42,	// (0x0001ca60) linegrid_hwr_fs_pane_ParamLimits

0x5f42,	// (0x0001ca60) linegrid_hwr_fs_pane

0x9aca,	// (0x000205e8) cell_hwr_fs_pane_ParamLimits

0x9aca,	// (0x000205e8) cell_hwr_fs_pane

0xd2b1,	// (0x00023dcf) linegrid_hwr_fs_pane_g1_ParamLimits

0xd2b1,	// (0x00023dcf) linegrid_hwr_fs_pane_g1

0x9af0,	// (0x0002060e) linegrid_hwr_fs_pane_g2_ParamLimits

0x9af0,	// (0x0002060e) linegrid_hwr_fs_pane_g2

0xd2bd,	// (0x00023ddb) linegrid_hwr_fs_pane_g3_ParamLimits

0xd2bd,	// (0x00023ddb) linegrid_hwr_fs_pane_g3

0x5f74,	// (0x0001ca92) linegrid_hwr_fs_pane_g4_ParamLimits

0x5f74,	// (0x0001ca92) linegrid_hwr_fs_pane_g4

0x5f8e,	// (0x0001caac) linegrid_hwr_fs_pane_g5_ParamLimits

0x5f8e,	// (0x0001caac) linegrid_hwr_fs_pane_g5

0x0004,

0xf801,	// (0x0002631f) linegrid_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0002631f) linegrid_hwr_fs_pane_g

0xd2c9,	// (0x00023de7) cell_hwr_fs_pane_g1_ParamLimits

0xd2c9,	// (0x00023de7) cell_hwr_fs_pane_g1

0xd0c1,	// (0x00023bdf) cell_hwr_fs_pane_g2_ParamLimits

0xd0c1,	// (0x00023bdf) cell_hwr_fs_pane_g2

0x9b02,	// (0x00020620) cell_hwr_fs_pane_g3_ParamLimits

0x9b02,	// (0x00020620) cell_hwr_fs_pane_g3

0x9b0f,	// (0x0002062d) cell_hwr_fs_pane_g4_ParamLimits

0x9b0f,	// (0x0002062d) cell_hwr_fs_pane_g4

0x0003,

0xf80c,	// (0x0002632a) cell_hwr_fs_pane_g_ParamLimits

0xf80c,	// (0x0002632a) cell_hwr_fs_pane_g

0x9b1c,	// (0x0002063a) cell_hwr_fs_pane_t1

0xbb83,	// (0x000226a1) grid_highlight_pane_cp6

0xbb83,	// (0x000226a1) main_idle_act2_pane

0xc32c,	// (0x00022e4a) aid_inside_area_popup_secondary

0x9d55,	// (0x00020873) aid_inside_area_window_primary_ParamLimits

0x9d55,	// (0x00020873) aid_inside_area_window_primary

0xe579,	// (0x00025097) ai2_news_ticker_pane

0xe581,	// (0x0002509f) aid_size_cell_ai1_link_ParamLimits

0xe581,	// (0x0002509f) aid_size_cell_ai1_link

0xe59b,	// (0x000250b9) popup_ai2_data_window_ParamLimits

0xe59b,	// (0x000250b9) popup_ai2_data_window

0xe5af,	// (0x000250cd) popup_ai2_link_window_ParamLimits

0xe5af,	// (0x000250cd) popup_ai2_link_window

0xd2a5,	// (0x00023dc3) bg_popup_sub_pane_cp4_ParamLimits

0xd2a5,	// (0x00023dc3) bg_popup_sub_pane_cp4

0xe5c3,	// (0x000250e1) grid_ai2_link_pane_ParamLimits

0xe5c3,	// (0x000250e1) grid_ai2_link_pane

0xe5da,	// (0x000250f8) popup_ai2_link_window_g1_ParamLimits

0xe5da,	// (0x000250f8) popup_ai2_link_window_g1

0xe5e6,	// (0x00025104) popup_ai2_link_window_g2_ParamLimits

0xe5e6,	// (0x00025104) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x000264f6) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x000264f6) popup_ai2_link_window_g

0xe5f5,	// (0x00025113) ai2_mp_button_pane

0xe5fd,	// (0x0002511b) ai2_mp_volume_pane

0xd3ca,	// (0x00023ee8) bg_popup_sub_pane_cp5_ParamLimits

0xd3ca,	// (0x00023ee8) bg_popup_sub_pane_cp5

0xe605,	// (0x00025123) heading_ai2_gene_pane_ParamLimits

0xe605,	// (0x00025123) heading_ai2_gene_pane

0xe611,	// (0x0002512f) list_ai2_gene_pane_ParamLimits

0xe611,	// (0x0002512f) list_ai2_gene_pane

0xe659,	// (0x00025177) cell_ai2_link_pane_ParamLimits

0xe659,	// (0x00025177) cell_ai2_link_pane

0xe66f,	// (0x0002518d) cell_ai2_link_pane_g1

0xbb83,	// (0x000226a1) grid_highlight_pane_cp7

0x629c,	// (0x0001cdba) ai2_mp_volume_pane_g1

0xe740,	// (0x0002525e) ai2_mp_volume_pane_g2

0xe6b5,	// (0x000251d3) list_ai2_gene_pane_t1

0xe748,	// (0x00025266) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x0002650f) ai2_mp_volume_pane_g

0x62a4,	// (0x0001cdc2) volume_small_pane_cp3

0xe750,	// (0x0002526e) aid_size_cell_ai2_button

0xe758,	// (0x00025276) grid_ai2_button_pane

0xe761,	// (0x0002527f) cell_ai2_button_pane_ParamLimits

0xe761,	// (0x0002527f) cell_ai2_button_pane

0xbb79,	// (0x00022697) cell_ai2_button_pane_g1

0xbb83,	// (0x000226a1) grid_highlight_pane_cp8

0xe700,	// (0x0002521e) ai2_gene_pane_t1_ParamLimits

0xe700,	// (0x0002521e) ai2_gene_pane_t1

0x8ffd,	// (0x0001fb1b) aid_height_parent_landscape

0x9f05,	// (0x00020a23) aid_height_set_list

0xdc0d,	// (0x0002472b) aid_size_parent

0xe3e0,	// (0x00024efe) aid_size_cell_graphic_pane_ParamLimits

0xe621,	// (0x0002513f) popup_ai2_data_window_g1_ParamLimits

0xe621,	// (0x0002513f) popup_ai2_data_window_g1

0xe62d,	// (0x0002514b) ai2_news_ticker_pane_g1

0xe635,	// (0x00025153) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x000264fb) ai2_news_ticker_pane_g

0xe63d,	// (0x0002515b) ai2_news_ticker_pane_t1

0xe64b,	// (0x00025169) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00026500) ai2_news_ticker_pane_t

0xe678,	// (0x00025196) heading_ai2_gene_pane_g1

0xe680,	// (0x0002519e) heading_ai2_gene_pane_t1_ParamLimits

0xe680,	// (0x0002519e) heading_ai2_gene_pane_t1

0xe695,	// (0x000251b3) list_highlight_pane_cp6

0xe69d,	// (0x000251bb) ai2_gene_pane_ParamLimits

0xe69d,	// (0x000251bb) ai2_gene_pane

0xe6c3,	// (0x000251e1) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00026505) list_ai2_gene_pane_t

0xe6d1,	// (0x000251ef) list_highlight_pane_cp8_ParamLimits

0xe6d1,	// (0x000251ef) list_highlight_pane_cp8

0xe6e2,	// (0x00025200) ai2_gene_pane_g1_ParamLimits

0xe6e2,	// (0x00025200) ai2_gene_pane_g1

0xe6f4,	// (0x00025212) ai2_gene_pane_g2_ParamLimits

0xe6f4,	// (0x00025212) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x0002650a) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x0002650a) ai2_gene_pane_g

0xc1bc,	// (0x00022cda) scroll_pane_cp12

0x8fba,	// (0x0001fad8) control_pane_t3_ParamLimits

0x8fba,	// (0x0001fad8) control_pane_t3

0xce1b,	// (0x00023939) status_small_pane_g8_ParamLimits

0xce1b,	// (0x00023939) status_small_pane_g8

0x90fe,	// (0x0001fc1c) popup_find_window_ParamLimits

0x9379,	// (0x0001fe97) popup_note_image_window_ParamLimits

0x4574,	// (0x0001b092) list_double2_graphic_pane_vc_g1_ParamLimits

0x4574,	// (0x0001b092) list_double2_graphic_pane_vc_g1

0x44fa,	// (0x0001b018) list_double2_graphic_pane_vc_g2_ParamLimits

0x44fa,	// (0x0001b018) list_double2_graphic_pane_vc_g2

0x4506,	// (0x0001b024) list_double2_graphic_pane_vc_g3_ParamLimits

0x4506,	// (0x0001b024) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c8,	// (0x000262e6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c8,	// (0x000262e6) list_double2_graphic_pane_vc_g

0x4c8d,	// (0x0001b7ab) list_double2_graphic_pane_vc_t1_ParamLimits

0x4c8d,	// (0x0001b7ab) list_double2_graphic_pane_vc_t1

0x44fa,	// (0x0001b018) list_single_heading_pane_vc_g1_ParamLimits

0x44fa,	// (0x0001b018) list_single_heading_pane_vc_g1

0x4506,	// (0x0001b024) list_single_heading_pane_vc_g2_ParamLimits

0x4506,	// (0x0001b024) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00026102) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00026102) list_single_heading_pane_vc_g

0x4ca3,	// (0x0001b7c1) list_single_heading_pane_vc_t1_ParamLimits

0x4ca3,	// (0x0001b7c1) list_single_heading_pane_vc_t1

0x4cb9,	// (0x0001b7d7) list_single_heading_pane_vc_t2_ParamLimits

0x4cb9,	// (0x0001b7d7) list_single_heading_pane_vc_t2

0x0001,

0xf7f0,	// (0x0002630e) list_single_heading_pane_vc_t_ParamLimits

0xf7f0,	// (0x0002630e) list_single_heading_pane_vc_t

0xd1fd,	// (0x00023d1b) list_setting_number_pane_vc_g1_ParamLimits

0xd1fd,	// (0x00023d1b) list_setting_number_pane_vc_g1

0xd209,	// (0x00023d27) list_setting_number_pane_vc_g2_ParamLimits

0xd209,	// (0x00023d27) list_setting_number_pane_vc_g2

0x0001,

0xf7f5,	// (0x00026313) list_setting_number_pane_vc_g_ParamLimits

0xf7f5,	// (0x00026313) list_setting_number_pane_vc_g

0xd215,	// (0x00023d33) list_setting_number_pane_vc_t1_ParamLimits

0xd215,	// (0x00023d33) list_setting_number_pane_vc_t1

0xd229,	// (0x00023d47) list_setting_number_pane_vc_t2_ParamLimits

0xd229,	// (0x00023d47) list_setting_number_pane_vc_t2

0xd245,	// (0x00023d63) list_setting_number_pane_vc_t3_ParamLimits

0xd245,	// (0x00023d63) list_setting_number_pane_vc_t3

0x0002,

0xf7fa,	// (0x00026318) list_setting_number_pane_vc_t_ParamLimits

0xf7fa,	// (0x00026318) list_setting_number_pane_vc_t

0xd26d,	// (0x00023d8b) set_value_pane_vc_ParamLimits

0xd26d,	// (0x00023d8b) set_value_pane_vc

0x4d91,	// (0x0001b8af) list_double2_graphic_pane_vc_ParamLimits

0x4d91,	// (0x0001b8af) list_double2_graphic_pane_vc

0xe351,	// (0x00024e6f) list_double2_large_graphic_pane_vc_ParamLimits

0xe351,	// (0x00024e6f) list_double2_large_graphic_pane_vc

0x4d91,	// (0x0001b8af) list_double2_pane_vc_ParamLimits

0x4d91,	// (0x0001b8af) list_double2_pane_vc

0x4d91,	// (0x0001b8af) list_double_graphic_heading_pane_vc_ParamLimits

0x4d91,	// (0x0001b8af) list_double_graphic_heading_pane_vc

0x4d91,	// (0x0001b8af) list_double_graphic_pane_vc_ParamLimits

0x4d91,	// (0x0001b8af) list_double_graphic_pane_vc

0x4d91,	// (0x0001b8af) list_double_heading_pane_vc_ParamLimits

0x4d91,	// (0x0001b8af) list_double_heading_pane_vc

0xe351,	// (0x00024e6f) list_double_large_graphic_pane_vc_ParamLimits

0xe351,	// (0x00024e6f) list_double_large_graphic_pane_vc

0x4d91,	// (0x0001b8af) list_double_number_pane_vc_ParamLimits

0x4d91,	// (0x0001b8af) list_double_number_pane_vc

0x4d91,	// (0x0001b8af) list_double_pane_vc_ParamLimits

0x4d91,	// (0x0001b8af) list_double_pane_vc

0x4d91,	// (0x0001b8af) list_double_time_pane_vc_ParamLimits

0x4d91,	// (0x0001b8af) list_double_time_pane_vc

0x4d91,	// (0x0001b8af) list_setting_number_pane_vc_ParamLimits

0x4d91,	// (0x0001b8af) list_setting_number_pane_vc

0x4d91,	// (0x0001b8af) list_setting_pane_vc_ParamLimits

0x4d91,	// (0x0001b8af) list_setting_pane_vc

0x4d91,	// (0x0001b8af) list_single_graphic_heading_pane_vc_ParamLimits

0x4d91,	// (0x0001b8af) list_single_graphic_heading_pane_vc

0x4d91,	// (0x0001b8af) list_single_heading_pane_vc_ParamLimits

0x4d91,	// (0x0001b8af) list_single_heading_pane_vc

0x4d91,	// (0x0001b8af) list_single_number_heading_pane_vc_ParamLimits

0x4d91,	// (0x0001b8af) list_single_number_heading_pane_vc

0x4574,	// (0x0001b092) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4574,	// (0x0001b092) list_double_graphic_heading_pane_vc_g1

0x44fa,	// (0x0001b018) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x44fa,	// (0x0001b018) list_double_graphic_heading_pane_vc_g2

0x4506,	// (0x0001b024) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4506,	// (0x0001b024) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c8,	// (0x000262e6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c8,	// (0x000262e6) list_double_graphic_heading_pane_vc_g

0x4e62,	// (0x0001b980) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4e62,	// (0x0001b980) list_double_graphic_heading_pane_vc_t1

0x4ca3,	// (0x0001b7c1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4ca3,	// (0x0001b7c1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x00026516) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x00026516) list_double_graphic_heading_pane_vc_t

0xd1fd,	// (0x00023d1b) list_setting_pane_vc_g1_ParamLimits

0xd1fd,	// (0x00023d1b) list_setting_pane_vc_g1

0xd209,	// (0x00023d27) list_setting_pane_vc_g2_ParamLimits

0xd209,	// (0x00023d27) list_setting_pane_vc_g2

0x0001,

0xf7f5,	// (0x00026313) list_setting_pane_vc_g_ParamLimits

0xf7f5,	// (0x00026313) list_setting_pane_vc_g

0xe957,	// (0x00025475) list_setting_pane_vc_t1_ParamLimits

0xe957,	// (0x00025475) list_setting_pane_vc_t1

0xe96b,	// (0x00025489) list_setting_pane_vc_t2_ParamLimits

0xe96b,	// (0x00025489) list_setting_pane_vc_t2

0x0001,

0xfa3b,	// (0x00026559) list_setting_pane_vc_t_ParamLimits

0xfa3b,	// (0x00026559) list_setting_pane_vc_t

0xd26d,	// (0x00023d8b) set_value_pane_cp_vc_ParamLimits

0xd26d,	// (0x00023d8b) set_value_pane_cp_vc

0x44fa,	// (0x0001b018) list_single_number_heading_pane_vc_g1_ParamLimits

0x44fa,	// (0x0001b018) list_single_number_heading_pane_vc_g1

0x4506,	// (0x0001b024) list_single_number_heading_pane_vc_g2_ParamLimits

0x4506,	// (0x0001b024) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00026102) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00026102) list_single_number_heading_pane_vc_g

0x4ca3,	// (0x0001b7c1) list_single_number_heading_pane_vc_t1_ParamLimits

0x4ca3,	// (0x0001b7c1) list_single_number_heading_pane_vc_t1

0x4e76,	// (0x0001b994) list_single_number_heading_pane_vc_t2_ParamLimits

0x4e76,	// (0x0001b994) list_single_number_heading_pane_vc_t2

0x4562,	// (0x0001b080) list_single_number_heading_pane_vc_t3_ParamLimits

0x4562,	// (0x0001b080) list_single_number_heading_pane_vc_t3

0x0002,

0xfa40,	// (0x0002655e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa40,	// (0x0002655e) list_single_number_heading_pane_vc_t

0x4574,	// (0x0001b092) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4574,	// (0x0001b092) list_single_graphic_heading_pane_vc_g1

0x44fa,	// (0x0001b018) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x44fa,	// (0x0001b018) list_single_graphic_heading_pane_vc_g4

0x4506,	// (0x0001b024) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4506,	// (0x0001b024) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c8,	// (0x000262e6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c8,	// (0x000262e6) list_single_graphic_heading_pane_vc_g

0x4ca3,	// (0x0001b7c1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4ca3,	// (0x0001b7c1) list_single_graphic_heading_pane_vc_t1

0x4e8a,	// (0x0001b9a8) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4e8a,	// (0x0001b9a8) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa47,	// (0x00026565) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa47,	// (0x00026565) list_single_graphic_heading_pane_vc_t

0x44fa,	// (0x0001b018) list_double2_pane_vc_g1_ParamLimits

0x44fa,	// (0x0001b018) list_double2_pane_vc_g1

0x4506,	// (0x0001b024) list_double2_pane_vc_g2_ParamLimits

0x4506,	// (0x0001b024) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x00026102) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x00026102) list_double2_pane_vc_g

0x4d59,	// (0x0001b877) list_double2_pane_vc_t1_ParamLimits

0x4d59,	// (0x0001b877) list_double2_pane_vc_t1

0x4e9e,	// (0x0001b9bc) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4e9e,	// (0x0001b9bc) list_double2_large_graphic_pane_vc_g1

0x4eaa,	// (0x0001b9c8) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4eaa,	// (0x0001b9c8) list_double2_large_graphic_pane_vc_g2

0x4eb6,	// (0x0001b9d4) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4eb6,	// (0x0001b9d4) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0002611f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0002611f) list_double2_large_graphic_pane_vc_g

0x4ec2,	// (0x0001b9e0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4ec2,	// (0x0001b9e0) list_double2_large_graphic_pane_vc_t1

0x4ed8,	// (0x0001b9f6) list_double_time_pane_vc_g1_ParamLimits

0x4ed8,	// (0x0001b9f6) list_double_time_pane_vc_g1

0x4ee4,	// (0x0001ba02) list_double_time_pane_vc_g2_ParamLimits

0x4ee4,	// (0x0001ba02) list_double_time_pane_vc_g2

0x0001,

0xfa4c,	// (0x0002656a) list_double_time_pane_vc_g_ParamLimits

0xfa4c,	// (0x0002656a) list_double_time_pane_vc_g

0x4ef0,	// (0x0001ba0e) list_double_time_pane_vc_t1_ParamLimits

0x4ef0,	// (0x0001ba0e) list_double_time_pane_vc_t1

0x4f09,	// (0x0001ba27) list_double_time_pane_vc_t2_ParamLimits

0x4f09,	// (0x0001ba27) list_double_time_pane_vc_t2

0x4f49,	// (0x0001ba67) list_double_time_pane_vc_t3_ParamLimits

0x4f49,	// (0x0001ba67) list_double_time_pane_vc_t3

0x4f61,	// (0x0001ba7f) list_double_time_pane_vc_t4_ParamLimits

0x4f61,	// (0x0001ba7f) list_double_time_pane_vc_t4

0x0003,

0xfa51,	// (0x0002656f) list_double_time_pane_vc_t_ParamLimits

0xfa51,	// (0x0002656f) list_double_time_pane_vc_t

0x44fa,	// (0x0001b018) list_double_pane_vc_g1_ParamLimits

0x44fa,	// (0x0001b018) list_double_pane_vc_g1

0x4506,	// (0x0001b024) list_double_pane_vc_g2_ParamLimits

0x4506,	// (0x0001b024) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x00026102) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x00026102) list_double_pane_vc_g

0x4f75,	// (0x0001ba93) list_double_pane_vc_t1_ParamLimits

0x4f75,	// (0x0001ba93) list_double_pane_vc_t1

0x4f87,	// (0x0001baa5) list_double_pane_vc_t2_ParamLimits

0x4f87,	// (0x0001baa5) list_double_pane_vc_t2

0x0001,

0xfa5a,	// (0x00026578) list_double_pane_vc_t_ParamLimits

0xfa5a,	// (0x00026578) list_double_pane_vc_t

0x44fa,	// (0x0001b018) list_double_number_pane_vc_g1_ParamLimits

0x44fa,	// (0x0001b018) list_double_number_pane_vc_g1

0x4506,	// (0x0001b024) list_double_number_pane_vc_g2_ParamLimits

0x4506,	// (0x0001b024) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x00026102) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x00026102) list_double_number_pane_vc_g

0x4f9f,	// (0x0001babd) list_double_number_pane_vc_t1_ParamLimits

0x4f9f,	// (0x0001babd) list_double_number_pane_vc_t1

0x4fb3,	// (0x0001bad1) list_double_number_pane_vc_t2_ParamLimits

0x4fb3,	// (0x0001bad1) list_double_number_pane_vc_t2

0x4f87,	// (0x0001baa5) list_double_number_pane_vc_t3_ParamLimits

0x4f87,	// (0x0001baa5) list_double_number_pane_vc_t3

0x0002,

0xfa5f,	// (0x0002657d) list_double_number_pane_vc_t_ParamLimits

0xfa5f,	// (0x0002657d) list_double_number_pane_vc_t

0x4fc5,	// (0x0001bae3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4fc5,	// (0x0001bae3) list_double_large_graphic_pane_vc_g1

0x4fd1,	// (0x0001baef) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4fd1,	// (0x0001baef) list_double_large_graphic_pane_vc_g2

0x4eb6,	// (0x0001b9d4) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4eb6,	// (0x0001b9d4) list_double_large_graphic_pane_vc_g3

0x4fe0,	// (0x0001bafe) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4fe0,	// (0x0001bafe) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa66,	// (0x00026584) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x00026584) list_double_large_graphic_pane_vc_g

0x4fec,	// (0x0001bb0a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4fec,	// (0x0001bb0a) list_double_large_graphic_pane_vc_t1

0x4ffe,	// (0x0001bb1c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4ffe,	// (0x0001bb1c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x0002658d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x0002658d) list_double_large_graphic_pane_vc_t

0x44fa,	// (0x0001b018) list_double_heading_pane_vc_g1_ParamLimits

0x44fa,	// (0x0001b018) list_double_heading_pane_vc_g1

0x4506,	// (0x0001b024) list_double_heading_pane_vc_g2_ParamLimits

0x4506,	// (0x0001b024) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00026102) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00026102) list_double_heading_pane_vc_g

0x5017,	// (0x0001bb35) list_double_heading_pane_vc_t1_ParamLimits

0x5017,	// (0x0001bb35) list_double_heading_pane_vc_t1

0x4ca3,	// (0x0001b7c1) list_double_heading_pane_vc_t2_ParamLimits

0x4ca3,	// (0x0001b7c1) list_double_heading_pane_vc_t2

0x0001,

0xfa74,	// (0x00026592) list_double_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x00026592) list_double_heading_pane_vc_t

0x502b,	// (0x0001bb49) list_double_graphic_pane_vc_g1_ParamLimits

0x502b,	// (0x0001bb49) list_double_graphic_pane_vc_g1

0x503b,	// (0x0001bb59) list_double_graphic_pane_vc_g2_ParamLimits

0x503b,	// (0x0001bb59) list_double_graphic_pane_vc_g2

0x504a,	// (0x0001bb68) list_double_graphic_pane_vc_g3_ParamLimits

0x504a,	// (0x0001bb68) list_double_graphic_pane_vc_g3

0x0002,

0xfa79,	// (0x00026597) list_double_graphic_pane_vc_g_ParamLimits

0xfa79,	// (0x00026597) list_double_graphic_pane_vc_g

0x5056,	// (0x0001bb74) list_double_graphic_pane_vc_t1_ParamLimits

0x5056,	// (0x0001bb74) list_double_graphic_pane_vc_t1

0x4f87,	// (0x0001baa5) list_double_graphic_pane_vc_t2_ParamLimits

0x4f87,	// (0x0001baa5) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x0002659e) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x0002659e) list_double_graphic_pane_vc_t

0x5462,	// (0x0001bf80) aid_size_cell_fastswap

0x86c9,	// (0x0001f1e7) aid_size_cell_touch_ParamLimits

0x86c9,	// (0x0001f1e7) aid_size_cell_touch

0x56c5,	// (0x0001c1e3) popup_fast_swap_wide_window_ParamLimits

0x56c5,	// (0x0001c1e3) popup_fast_swap_wide_window

0x8814,	// (0x0001f332) touch_pane_ParamLimits

0x8814,	// (0x0001f332) touch_pane

0xc212,	// (0x00022d30) button_value_adjust_pane_cp2

0x4944,	// (0x0001b462) button_value_adjust_pane_cp4

0x4964,	// (0x0001b482) form_field_data_pane_cp2

0x83c2,	// (0x0001eee0) form_field_data_wide_pane_cp2

0xc575,	// (0x00023093) bg_scroll_pane_ParamLimits

0x5a47,	// (0x0001c565) scroll_handle_pane_ParamLimits

0x5a5b,	// (0x0001c579) scroll_sc2_down_pane_ParamLimits

0x5a5b,	// (0x0001c579) scroll_sc2_down_pane

0xc5a6,	// (0x000230c4) scroll_sc2_up_pane_ParamLimits

0xc5a6,	// (0x000230c4) scroll_sc2_up_pane

0xa296,	// (0x00020db4) grid_wheel_folder_pane_g1_ParamLimits

0xa296,	// (0x00020db4) grid_wheel_folder_pane_g1

0x5c20,	// (0x0001c73e) clock_nsta_pane_cp2_ParamLimits

0x5c20,	// (0x0001c73e) clock_nsta_pane_cp2

0x8dce,	// (0x0001f8ec) listscroll_midp_pane_ParamLimits

0x8ddf,	// (0x0001f8fd) midp_canvas_pane

0xce6f,	// (0x0002398d) nsta_clock_indic_pane

0xcea7,	// (0x000239c5) listscroll_form_pane_vc

0xceaf,	// (0x000239cd) listscroll_set_pane_vc_ParamLimits

0xceaf,	// (0x000239cd) listscroll_set_pane_vc

0x97a0,	// (0x000202be) clock_nsta_pane

0x97ca,	// (0x000202e8) indicator_nsta_pane

0xd0f3,	// (0x00023c11) bg_popup_sub_pane_cp2_ParamLimits

0xd107,	// (0x00023c25) find_pane_cp2_ParamLimits

0xd107,	// (0x00023c25) find_pane_cp2

0xd11d,	// (0x00023c3b) grid_toobar_pane_ParamLimits

0xd279,	// (0x00023d97) list_form_gen_pane_vc_ParamLimits

0xd279,	// (0x00023d97) list_form_gen_pane_vc

0xd28f,	// (0x00023dad) scroll_pane_cp8_vc_ParamLimits

0xd28f,	// (0x00023dad) scroll_pane_cp8_vc

0xd2df,	// (0x00023dfd) data_form_wide_pane_vc_ParamLimits

0xd2df,	// (0x00023dfd) data_form_wide_pane_vc

0xd2eb,	// (0x00023e09) form_field_data_wide_pane_vc_g1

0xd2f3,	// (0x00023e11) form_field_data_wide_pane_vc_t1_ParamLimits

0xd2f3,	// (0x00023e11) form_field_data_wide_pane_vc_t1

0xc226,	// (0x00022d44) input_focus_pane_cp6_vc_ParamLimits

0xc226,	// (0x00022d44) input_focus_pane_cp6_vc

0x9bb9,	// (0x000206d7) list_midp_pane_ParamLimits

0xe3d4,	// (0x00024ef2) scroll_pane_cp16_ParamLimits

0xe3d4,	// (0x00024ef2) scroll_pane_cp16

0xd562,	// (0x00024080) button_value_adjust_pane_ParamLimits

0xd562,	// (0x00024080) button_value_adjust_pane

0x9f16,	// (0x00020a34) button_value_adjust_pane_cp6_ParamLimits

0x9f16,	// (0x00020a34) button_value_adjust_pane_cp6

0xa02c,	// (0x00020b4a) settings_code_pane_cp_ParamLimits

0xa02c,	// (0x00020b4a) settings_code_pane_cp

0xbb79,	// (0x00022697) cell_touch_pane_g1

0xbb79,	// (0x00022697) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x0002623d) cell_touch_pane_g

0xa175,	// (0x00020c93) cell_touch_pane_cp_ParamLimits

0xa175,	// (0x00020c93) cell_touch_pane_cp

0xa191,	// (0x00020caf) cell_touch_pane_ParamLimits

0xa191,	// (0x00020caf) cell_touch_pane

0xbb79,	// (0x00022697) scroll_sc2_down_pane_g1

0xbb79,	// (0x00022697) scroll_sc2_up_pane_g1

0xbb83,	// (0x000226a1) bg_set_opt_pane_cp4_vc

0xe773,	// (0x00025291) list_set_graphic_pane_vc_g1_ParamLimits

0xe773,	// (0x00025291) list_set_graphic_pane_vc_g1

0xe77f,	// (0x0002529d) list_set_graphic_pane_vc_g2_ParamLimits

0xe77f,	// (0x0002529d) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x0002651b) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x0002651b) list_set_graphic_pane_vc_g

0xe78b,	// (0x000252a9) text_primary_small_cp13_vc_ParamLimits

0xe78b,	// (0x000252a9) text_primary_small_cp13_vc

0xe7a3,	// (0x000252c1) list_set_graphic_pane_vc_ParamLimits

0xe7a3,	// (0x000252c1) list_set_graphic_pane_vc

0xbb83,	// (0x000226a1) input_focus_pane_cp2_vc

0xbb79,	// (0x00022697) setting_code_pane_vc_g1

0xe7b7,	// (0x000252d5) setting_code_pane_vc_t1

0xe7c5,	// (0x000252e3) set_text_pane_vc_t1_ParamLimits

0xe7c5,	// (0x000252e3) set_text_pane_vc_t1

0xbb83,	// (0x000226a1) input_focus_pane_cp1_vc

0xe7e4,	// (0x00025302) list_set_text_pane_vc

0xbb79,	// (0x00022697) setting_text_pane_vc_g1

0xbb83,	// (0x000226a1) bg_set_opt_pane_cp2_vc

0xe7ee,	// (0x0002530c) setting_slider_graphic_pane_vc_g1

0xe7f6,	// (0x00025314) setting_slider_graphic_pane_vc_t1

0xe804,	// (0x00025322) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x00026520) setting_slider_graphic_pane_vc_t

0xe812,	// (0x00025330) slider_set_pane_cp_vc

0xe81a,	// (0x00025338) slider_set_pane_vc_g1

0xe823,	// (0x00025341) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x00026525) slider_set_pane_vc_g

0xc28d,	// (0x00022dab) set_opt_bg_pane_g1_copy1

0xc295,	// (0x00022db3) set_opt_bg_pane_g2_copy1

0xe84f,	// (0x0002536d) set_opt_bg_pane_g3_copy1

0xc2a5,	// (0x00022dc3) set_opt_bg_pane_g4_copy1

0xc2ad,	// (0x00022dcb) set_opt_bg_pane_g5_copy1

0xc2b5,	// (0x00022dd3) set_opt_bg_pane_g6_copy1

0xe857,	// (0x00025375) set_opt_bg_pane_g7_copy1

0xe861,	// (0x0002537f) set_opt_bg_pane_g8_copy1

0xe869,	// (0x00025387) set_opt_bg_pane_g9_copy1

0xbb83,	// (0x000226a1) bg_set_opt_pane_cp_vc

0xe871,	// (0x0002538f) setting_slider_pane_vc_t1

0xe7f6,	// (0x00025314) setting_slider_pane_vc_t2

0xe804,	// (0x00025322) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x00026534) setting_slider_pane_vc_t

0xe812,	// (0x00025330) slider_set_pane_vc

0x5fb2,	// (0x0001cad0) volume_set_pane_vc_g1

0x62ad,	// (0x0001cdcb) volume_set_pane_vc_g2

0x62b6,	// (0x0001cdd4) volume_set_pane_vc_g3

0x62bf,	// (0x0001cddd) volume_set_pane_vc_g4

0x62c8,	// (0x0001cde6) volume_set_pane_vc_g5

0x62d1,	// (0x0001cdef) volume_set_pane_vc_g6

0x62da,	// (0x0001cdf8) volume_set_pane_vc_g7

0x62e3,	// (0x0001ce01) volume_set_pane_vc_g8

0x62ec,	// (0x0001ce0a) volume_set_pane_vc_g9

0x62f5,	// (0x0001ce13) volume_set_pane_vc_g10

0x0009,

0xfa1d,	// (0x0002653b) volume_set_pane_vc_g

0xe880,	// (0x0002539e) volume_set_pane_vc

0xe888,	// (0x000253a6) button_value_adjust_pane_cp1_vc

0xe892,	// (0x000253b0) list_highlight_pane_cp2_vc

0xe89b,	// (0x000253b9) list_set_pane_vc_ParamLimits

0xe89b,	// (0x000253b9) list_set_pane_vc

0xe8ed,	// (0x0002540b) main_pane_set_vc_t1_ParamLimits

0xe8ed,	// (0x0002540b) main_pane_set_vc_t1

0xe902,	// (0x00025420) main_pane_set_vc_t2_ParamLimits

0xe902,	// (0x00025420) main_pane_set_vc_t2

0xe914,	// (0x00025432) main_pane_set_vc_t3_ParamLimits

0xe914,	// (0x00025432) main_pane_set_vc_t3

0xe926,	// (0x00025444) main_pane_set_vc_t4_ParamLimits

0xe926,	// (0x00025444) main_pane_set_vc_t4

0x0003,

0xfa32,	// (0x00026550) main_pane_set_vc_t_ParamLimits

0xfa32,	// (0x00026550) main_pane_set_vc_t

0xe938,	// (0x00025456) setting_code_pane_vc_ParamLimits

0xe938,	// (0x00025456) setting_code_pane_vc

0xe947,	// (0x00025465) setting_slider_graphic_pane_vc

0xe947,	// (0x00025465) setting_slider_pane_vc

0xe947,	// (0x00025465) setting_text_pane_vc

0xe947,	// (0x00025465) setting_volume_pane_vc

0xe94f,	// (0x0002546d) scroll_pane_cp121_vc

0xc200,	// (0x00022d1e) set_content_pane_vc

0xe98d,	// (0x000254ab) button_value_adjust_pane_g1

0xe996,	// (0x000254b4) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x000265a3) button_value_adjust_pane_g

0xe99f,	// (0x000254bd) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe99f,	// (0x000254bd) form_field_slider_wide_pane_vc_t1

0xe9b3,	// (0x000254d1) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe9b3,	// (0x000254d1) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8a,	// (0x000265a8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x000265a8) form_field_slider_wide_pane_vc_t

0xbbd1,	// (0x000226ef) input_focus_pane_cp10_vc_ParamLimits

0xbbd1,	// (0x000226ef) input_focus_pane_cp10_vc

0xe9c5,	// (0x000254e3) slider_cont_pane_cp1_vc_ParamLimits

0xe9c5,	// (0x000254e3) slider_cont_pane_cp1_vc

0xe81a,	// (0x00025338) slider_form_pane_g1_cp2

0xe823,	// (0x00025341) slider_form_pane_g2_cp2

0xe9de,	// (0x000254fc) form_field_slider_pane_vc_t3

0xe9ec,	// (0x0002550a) form_field_slider_pane_vc_t4

0xe9fa,	// (0x00025518) slider_form_pane_vc_ParamLimits

0xe9fa,	// (0x00025518) slider_form_pane_vc

0xea07,	// (0x00025525) form_field_slider_pane_vc_t1_ParamLimits

0xea07,	// (0x00025525) form_field_slider_pane_vc_t1

0xe9b3,	// (0x000254d1) form_field_slider_pane_vc_t2_ParamLimits

0xe9b3,	// (0x000254d1) form_field_slider_pane_vc_t2

0x0001,

0xfa9a,	// (0x000265b8) form_field_slider_pane_vc_t_ParamLimits

0xfa9a,	// (0x000265b8) form_field_slider_pane_vc_t

0xbbd1,	// (0x000226ef) input_focus_pane_cp9_vc_ParamLimits

0xbbd1,	// (0x000226ef) input_focus_pane_cp9_vc

0xea23,	// (0x00025541) slider_cont_pane_vc_ParamLimits

0xea23,	// (0x00025541) slider_cont_pane_vc

0xea35,	// (0x00025553) list_form_graphic_pane_cp_vc_ParamLimits

0xea35,	// (0x00025553) list_form_graphic_pane_cp_vc

0xd2eb,	// (0x00023e09) form_field_popup_wide_pane_vc_g1

0xea4a,	// (0x00025568) form_field_popup_wide_pane_vc_t1_ParamLimits

0xea4a,	// (0x00025568) form_field_popup_wide_pane_vc_t1

0xc226,	// (0x00022d44) input_focus_pane_cp8_vc_ParamLimits

0xc226,	// (0x00022d44) input_focus_pane_cp8_vc

0xea61,	// (0x0002557f) list_form_wide_pane_vc_ParamLimits

0xea61,	// (0x0002557f) list_form_wide_pane_vc

0xea6d,	// (0x0002558b) list_form_graphic_pane_vc_g1

0xea75,	// (0x00025593) list_form_graphic_pane_vc_t1_ParamLimits

0xea75,	// (0x00025593) list_form_graphic_pane_vc_t1

0xbbdf,	// (0x000226fd) list_highlight_pane_cp5_vc_ParamLimits

0xbbdf,	// (0x000226fd) list_highlight_pane_cp5_vc

0xea91,	// (0x000255af) list_form_graphic_pane_vc_ParamLimits

0xea91,	// (0x000255af) list_form_graphic_pane_vc

0xd2eb,	// (0x00023e09) form_field_popup_pane_vc_g1

0xeaa7,	// (0x000255c5) form_field_popup_pane_vc_t1_ParamLimits

0xeaa7,	// (0x000255c5) form_field_popup_pane_vc_t1

0xc226,	// (0x00022d44) input_focus_pane_cp7_vc_ParamLimits

0xc226,	// (0x00022d44) input_focus_pane_cp7_vc

0xeabe,	// (0x000255dc) list_form_pane_vc_ParamLimits

0xeabe,	// (0x000255dc) list_form_pane_vc

0xeaca,	// (0x000255e8) data_form_pane_vc_t1_ParamLimits

0xeaca,	// (0x000255e8) data_form_pane_vc_t1

0xc28d,	// (0x00022dab) input_focus_pane_vc_g1

0xc295,	// (0x00022db3) input_focus_pane_vc_g2

0xc29d,	// (0x00022dbb) input_focus_pane_vc_g3

0xc2a5,	// (0x00022dc3) input_focus_pane_vc_g4

0xc2ad,	// (0x00022dcb) input_focus_pane_vc_g5

0xc2b5,	// (0x00022dd3) input_focus_pane_vc_g6

0xc2bd,	// (0x00022ddb) input_focus_pane_vc_g7

0xc2c5,	// (0x00022de3) input_focus_pane_vc_g8

0xc2cd,	// (0x00022deb) input_focus_pane_vc_g9

0xbb79,	// (0x00022697) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x000261c6) input_focus_pane_vc_g

0xd2df,	// (0x00023dfd) data_form_pane_vc_ParamLimits

0xd2df,	// (0x00023dfd) data_form_pane_vc

0xd2eb,	// (0x00023e09) form_field_data_pane_vc_g1

0xeae5,	// (0x00025603) form_field_data_pane_vc_t1_ParamLimits

0xeae5,	// (0x00025603) form_field_data_pane_vc_t1

0xc226,	// (0x00022d44) input_focus_pane_vc_ParamLimits

0xc226,	// (0x00022d44) input_focus_pane_vc

0xeaff,	// (0x0002561d) button_value_adjust_pane_cp3_vc

0xeb07,	// (0x00025625) button_value_adjust_pane_cp5_vc

0xeb0f,	// (0x0002562d) form_field_data_pane_vc_ParamLimits

0xeb0f,	// (0x0002562d) form_field_data_pane_vc

0xeb26,	// (0x00025644) form_field_data_pane_vc_cp2

0xeb2e,	// (0x0002564c) form_field_data_wide_pane_vc_ParamLimits

0xeb2e,	// (0x0002564c) form_field_data_wide_pane_vc

0xeb44,	// (0x00025662) form_field_data_wide_pane_vc_cp2

0xeb4c,	// (0x0002566a) form_field_popup_pane_vc_ParamLimits

0xeb4c,	// (0x0002566a) form_field_popup_pane_vc

0xeb63,	// (0x00025681) form_field_popup_wide_pane_vc_ParamLimits

0xeb63,	// (0x00025681) form_field_popup_wide_pane_vc

0xeb79,	// (0x00025697) form_field_slider_pane_vc_ParamLimits

0xeb79,	// (0x00025697) form_field_slider_pane_vc

0xeb8c,	// (0x000256aa) form_field_slider_wide_pane_vc_ParamLimits

0xeb8c,	// (0x000256aa) form_field_slider_wide_pane_vc

0xa1af,	// (0x00020ccd) grid_touch_1_pane_ParamLimits

0xa1af,	// (0x00020ccd) grid_touch_1_pane

0xa1c3,	// (0x00020ce1) grid_touch_2_pane_ParamLimits

0xa1c3,	// (0x00020ce1) grid_touch_2_pane

0xeb9f,	// (0x000256bd) touch_pane_g1_ParamLimits

0xeb9f,	// (0x000256bd) touch_pane_g1

0xebad,	// (0x000256cb) cell_app_pane_cp_wide_ParamLimits

0xebad,	// (0x000256cb) cell_app_pane_cp_wide

0xebbe,	// (0x000256dc) grid_popup_fast_wide_pane_ParamLimits

0xebbe,	// (0x000256dc) grid_popup_fast_wide_pane

0xebd2,	// (0x000256f0) scroll_pane_cp19_ParamLimits

0xebd2,	// (0x000256f0) scroll_pane_cp19

0xbb83,	// (0x000226a1) bg_popup_window_pane_cp20

0xebe6,	// (0x00025704) listscroll_popup_fast_wide_pane

0xcf67,	// (0x00023a85) grid_indicator_nsta_pane

0xebee,	// (0x0002570c) clock_nsta_pane_g1

0xebf7,	// (0x00025715) clock_nsta_pane_t1

0xa1ed,	// (0x00020d0b) cell_indicator_nsta_pane_ParamLimits

0xa1ed,	// (0x00020d0b) cell_indicator_nsta_pane

0xeb9f,	// (0x000256bd) cell_indicator_nsta_pane_g1

0xa20a,	// (0x00020d28) cell_indicator_nsta_pane_g2

0x0001,

0xfaa4,	// (0x000265c2) cell_indicator_nsta_pane_g

0xec13,	// (0x00025731) clock_nsta_pane_cp

0xec1b,	// (0x00025739) indicator_nsta_pane_cp

0xec24,	// (0x00025742) nsta_clock_indic_pane_g1

0xbc1b,	// (0x00022739) grid_indicator_pane

0xc698,	// (0x000231b6) scroll_pane_cp29

0x5b6f,	// (0x0001c68d) indicator_nsta_pane_cp2_ParamLimits

0x5b6f,	// (0x0001c68d) indicator_nsta_pane_cp2

0xbbdf,	// (0x000226fd) main_apps_wheel_pane

0xd407,	// (0x00023f25) form_midp_field_text_pane_ParamLimits

0xd534,	// (0x00024052) scroll_bar_cp050_ParamLimits

0xec8d,	// (0x000257ab) cell_indicator_pane_ParamLimits

0xec8d,	// (0x000257ab) cell_indicator_pane

0xecaa,	// (0x000257c8) cell_indicator_pane_g1

0xa220,	// (0x00020d3e) grid_wheel_folder_pane_ParamLimits

0xa220,	// (0x00020d3e) grid_wheel_folder_pane

0xa22e,	// (0x00020d4c) list_wheel_apps_pane_ParamLimits

0xa22e,	// (0x00020d4c) list_wheel_apps_pane

0xa23c,	// (0x00020d5a) main_apps_wheel_pane_g1_ParamLimits

0xa23c,	// (0x00020d5a) main_apps_wheel_pane_g1

0xa248,	// (0x00020d66) main_apps_wheel_pane_g2_ParamLimits

0xa248,	// (0x00020d66) main_apps_wheel_pane_g2

0x0001,

0xfac0,	// (0x000265de) main_apps_wheel_pane_g_ParamLimits

0xfac0,	// (0x000265de) main_apps_wheel_pane_g

0xa256,	// (0x00020d74) main_apps_wheel_pane_t1_ParamLimits

0xa256,	// (0x00020d74) main_apps_wheel_pane_t1

0xa26a,	// (0x00020d88) list_wheel_apps_pane_g1

0xa272,	// (0x00020d90) list_wheel_apps_pane_g2

0xa27a,	// (0x00020d98) list_wheel_apps_pane_g3

0xa282,	// (0x00020da0) list_wheel_apps_pane_g4

0xa28c,	// (0x00020daa) list_wheel_apps_pane_g5

0x0004,

0xfac5,	// (0x000265e3) list_wheel_apps_pane_g

0xcaeb,	// (0x00023609) navi_icon_text_pane

0x969b,	// (0x000201b9) aid_fill_nsta

0xa2a3,	// (0x00020dc1) navi_icon_text_pane_g1

0xa2af,	// (0x00020dcd) navi_icon_text_pane_t1

0xc987,	// (0x000234a5) list_set_graphic_pane_t1_ParamLimits

0xc987,	// (0x000234a5) list_set_graphic_pane_t1

0xdc4e,	// (0x0002476c) popup_midp_note_alarm_window_t6_ParamLimits

0xdc4e,	// (0x0002476c) popup_midp_note_alarm_window_t6

0xdc60,	// (0x0002477e) popup_midp_note_alarm_window_t7_ParamLimits

0xdc60,	// (0x0002477e) popup_midp_note_alarm_window_t7

0xdc72,	// (0x00024790) popup_midp_note_alarm_window_t8_ParamLimits

0xdc72,	// (0x00024790) popup_midp_note_alarm_window_t8

0xdc84,	// (0x000247a2) popup_midp_note_alarm_window_t9_ParamLimits

0xdc84,	// (0x000247a2) popup_midp_note_alarm_window_t9

0xdc96,	// (0x000247b4) popup_midp_note_alarm_window_t10_ParamLimits

0xdc96,	// (0x000247b4) popup_midp_note_alarm_window_t10

0xdca8,	// (0x000247c6) popup_midp_note_alarm_window_t11_ParamLimits

0xdca8,	// (0x000247c6) popup_midp_note_alarm_window_t11

0xdcba,	// (0x000247d8) scroll_pane_cp17_ParamLimits

0xdcba,	// (0x000247d8) scroll_pane_cp17

0x5fb2,	// (0x0001cad0) volume_small_pane_cp_g1

0x62fe,	// (0x0001ce1c) volume_small_pane_cp_g2

0x6307,	// (0x0001ce25) volume_small_pane_cp_g3

0x6310,	// (0x0001ce2e) volume_small_pane_cp_g4

0x6319,	// (0x0001ce37) volume_small_pane_cp_g5

0x6322,	// (0x0001ce40) volume_small_pane_cp_g6

0x632b,	// (0x0001ce49) volume_small_pane_cp_g7

0x6334,	// (0x0001ce52) volume_small_pane_cp_g8

0x633d,	// (0x0001ce5b) volume_small_pane_cp_g9

0x6346,	// (0x0001ce64) volume_small_pane_cp_g10

0xcc97,	// (0x000237b5) midp_ticker_pane_g1_ParamLimits

0xcca3,	// (0x000237c1) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0002628e) midp_ticker_pane_g_ParamLimits

0x8e7a,	// (0x0001f998) midp_ticker_pane_t1_ParamLimits

0x96bb,	// (0x000201d9) aid_fill_nsta_2

0xd520,	// (0x0002403e) list_form2_midp_pane

0xe32f,	// (0x00024e4d) midp_editing_number_pane_ParamLimits

0xe33e,	// (0x00024e5c) midp_ticker_pane_ParamLimits

0xecb4,	// (0x000257d2) form2_midp_field_pane

0xecbc,	// (0x000257da) scroll_pane_cp51

0xecdc,	// (0x000257fa) form2_midp_button_pane_ParamLimits

0xecdc,	// (0x000257fa) form2_midp_button_pane

0xecee,	// (0x0002580c) form2_midp_content_pane_ParamLimits

0xecee,	// (0x0002580c) form2_midp_content_pane

0xed08,	// (0x00025826) form2_midp_field_choice_group_pane

0xed10,	// (0x0002582e) form2_midp_field_pane_g1

0xed18,	// (0x00025836) form2_midp_field_pane_g2

0xed20,	// (0x0002583e) form2_midp_field_pane_g3

0xed28,	// (0x00025846) form2_midp_field_pane_g4

0x0003,

0xfaea,	// (0x00026608) form2_midp_field_pane_g

0xed30,	// (0x0002584e) form2_midp_gauge_slider_pane

0xed38,	// (0x00025856) form2_midp_gauge_wait_pane

0xed40,	// (0x0002585e) form2_midp_image_pane_ParamLimits

0xed40,	// (0x0002585e) form2_midp_image_pane

0xed5b,	// (0x00025879) form2_midp_label_pane_ParamLimits

0xed5b,	// (0x00025879) form2_midp_label_pane

0xa2dd,	// (0x00020dfb) form2_midp_label_pane_cp_ParamLimits

0xa2dd,	// (0x00020dfb) form2_midp_label_pane_cp

0xed74,	// (0x00025892) form2_midp_string_pane_ParamLimits

0xed74,	// (0x00025892) form2_midp_string_pane

0x5068,	// (0x0001bb86) form2_midp_text_pane_ParamLimits

0x5068,	// (0x0001bb86) form2_midp_text_pane

0xed86,	// (0x000258a4) form2_midp_time_pane

0xed96,	// (0x000258b4) input_focus_pane_cp51_ParamLimits

0xed96,	// (0x000258b4) input_focus_pane_cp51

0xedae,	// (0x000258cc) form2_midp_label_pane_t1_ParamLimits

0xedae,	// (0x000258cc) form2_midp_label_pane_t1

0x5081,	// (0x0001bb9f) form2_mdip_text_pane_t1_ParamLimits

0x5081,	// (0x0001bb9f) form2_mdip_text_pane_t1

0x509e,	// (0x0001bbbc) form2_midp_time_pane_t1

0xedf6,	// (0x00025914) form2_midp_gauge_slider_pane_t1

0xa2fe,	// (0x00020e1c) form2_midp_gauge_slider_pane_t2

0xa310,	// (0x00020e2e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf3,	// (0x00026611) form2_midp_gauge_slider_pane_t

0xee08,	// (0x00025926) form2_midp_slider_pane

0xee14,	// (0x00025932) form2_midp_gauge_wait_pane_t1

0xee22,	// (0x00025940) form2_midp_wait_pane_ParamLimits

0xee22,	// (0x00025940) form2_midp_wait_pane

0xa322,	// (0x00020e40) list_single_2graphic_pane_cp4_ParamLimits

0xa322,	// (0x00020e40) list_single_2graphic_pane_cp4

0x9b40,	// (0x0002065e) list_single_midp_graphic_pane_cp_ParamLimits

0x9b40,	// (0x0002065e) list_single_midp_graphic_pane_cp

0xbb83,	// (0x000226a1) list_highlight_pane_cp20

0xee4d,	// (0x0002596b) list_single_2graphic_pane_g1_cp4

0xe678,	// (0x00025196) list_single_2graphic_pane_g2_cp4

0xee55,	// (0x00025973) list_single_2graphic_pane_t1_cp4

0xbbdf,	// (0x000226fd) list_highlight_pane_cp21

0xee64,	// (0x00025982) list_single_midp_graphic_pane_g4_cp

0xee73,	// (0x00025991) list_single_midp_graphic_pane_t1_cp

0xa339,	// (0x00020e57) form2_mdip_string_pane_t1_ParamLimits

0xa339,	// (0x00020e57) form2_mdip_string_pane_t1

0xbb83,	// (0x000226a1) bg_wml_button_pane_cp2

0xbb79,	// (0x00022697) form2_midp_image_pane_g1

0x4745,	// (0x0001b263) list_double_large_graphic_pane_g5_ParamLimits

0x4745,	// (0x0001b263) list_double_large_graphic_pane_g5

0x8dce,	// (0x0001f8ec) midp_form_pane_ParamLimits

0xbbdf,	// (0x000226fd) main_apps_wheel_pane_ParamLimits

0x93f7,	// (0x0001ff15) popup_preview_window_ParamLimits

0x93f7,	// (0x0001ff15) popup_preview_window

0xcf94,	// (0x00023ab2) popup_touch_info_window_ParamLimits

0xcf94,	// (0x00023ab2) popup_touch_info_window

0xcfb2,	// (0x00023ad0) popup_touch_menu_window_ParamLimits

0xcfb2,	// (0x00023ad0) popup_touch_menu_window

0xbb6f,	// (0x0002268d) bg_popup_sub_pane_cp6

0xee88,	// (0x000259a6) list_touch_menu_pane

0xee90,	// (0x000259ae) list_single_touch_menu_pane_ParamLimits

0xee90,	// (0x000259ae) list_single_touch_menu_pane

0xeea5,	// (0x000259c3) list_single_touch_menu_pane_t1

0xbbdf,	// (0x000226fd) bg_popup_sub_pane_cp7_ParamLimits

0xbbdf,	// (0x000226fd) bg_popup_sub_pane_cp7

0xeeb3,	// (0x000259d1) heading_sub_pane

0xeebb,	// (0x000259d9) list_touch_info_pane_ParamLimits

0xeebb,	// (0x000259d9) list_touch_info_pane

0xeeca,	// (0x000259e8) list_single_touch_info_pane_ParamLimits

0xeeca,	// (0x000259e8) list_single_touch_info_pane

0xeedc,	// (0x000259fa) list_single_touch_info_pane_t1

0xeeea,	// (0x00025a08) list_single_touch_info_pane_t2

0x0001,

0xfb01,	// (0x0002661f) list_single_touch_info_pane_t

0xcc6d,	// (0x0002378b) bg_popup_heading_pane_cp

0xeef8,	// (0x00025a16) heading_sub_pane_t1

0xd2a5,	// (0x00023dc3) bg_popup_preview_window_pane_cp_ParamLimits

0xd2a5,	// (0x00023dc3) bg_popup_preview_window_pane_cp

0xeeb3,	// (0x000259d1) heading_preview_pane

0xeebb,	// (0x000259d9) list_preview_pane_ParamLimits

0xeebb,	// (0x000259d9) list_preview_pane

0xef06,	// (0x00025a24) popup_preview_window_g1

0xeeca,	// (0x000259e8) list_single_preview_pane_ParamLimits

0xeeca,	// (0x000259e8) list_single_preview_pane

0xef0e,	// (0x00025a2c) list_single_preview_pane_g1

0xef16,	// (0x00025a34) list_single_preview_pane_t1

0xeedc,	// (0x000259fa) list_single_preview_pane_t2

0x0001,

0xfb06,	// (0x00026624) list_single_preview_pane_t

0xef24,	// (0x00025a42) bg_popup_heading_pane_cp2_ParamLimits

0xef24,	// (0x00025a42) bg_popup_heading_pane_cp2

0xef3a,	// (0x00025a58) heading_preview_pane_g1

0xef42,	// (0x00025a60) heading_preview_pane_t1_ParamLimits

0xef42,	// (0x00025a60) heading_preview_pane_t1

0xbc32,	// (0x00022750) soft_indicator_pane_t1_ParamLimits

0xc199,	// (0x00022cb7) scroll_pane_ParamLimits

0xc594,	// (0x000230b2) scroll_sc2_left_pane

0xc59d,	// (0x000230bb) scroll_sc2_right_pane

0xc5bc,	// (0x000230da) scroll_bg_pane_g1_ParamLimits

0xc5d1,	// (0x000230ef) scroll_bg_pane_g2_ParamLimits

0xc5e9,	// (0x00023107) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x0002621d) scroll_bg_pane_g_ParamLimits

0xc5bc,	// (0x000230da) scroll_handle_pane_g1_ParamLimits

0xc60b,	// (0x00023129) scroll_handle_pane_g2_ParamLimits

0xc5e9,	// (0x00023107) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x00026224) scroll_handle_pane_g_ParamLimits

0xcecf,	// (0x000239ed) popup_choice_list_window_ParamLimits

0xcecf,	// (0x000239ed) popup_choice_list_window

0xd0ff,	// (0x00023c1d) choice_list_pane

0xd181,	// (0x00023c9f) cell_toolbar_pane_t1

0xd1a9,	// (0x00023cc7) toolbar_button_pane_ParamLimits

0xe098,	// (0x00024bb6) ai_gene_pane_1_t2_ParamLimits

0xe098,	// (0x00024bb6) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x00026435) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x00026435) ai_gene_pane_1_t

0xef5f,	// (0x00025a7d) scroll_sc2_left_pane_g1

0xef5f,	// (0x00025a7d) scroll_sc2_right_pane_g1

0xc37d,	// (0x00022e9b) bg_popup_sub_pane_cp10

0xef69,	// (0x00025a87) list_choice_list_pane

0xef80,	// (0x00025a9e) list_single_choice_list_pane_ParamLimits

0xef80,	// (0x00025a9e) list_single_choice_list_pane

0xef94,	// (0x00025ab2) list_single_choice_list_pane_g1

0xef9c,	// (0x00025aba) list_single_choice_list_pane_t1_ParamLimits

0xef9c,	// (0x00025aba) list_single_choice_list_pane_t1

0xefb1,	// (0x00025acf) choice_list_pane_g1

0xefb9,	// (0x00025ad7) choice_list_pane_t1

0xbb6f,	// (0x0002268d) input_focus_pane_cp11

0xc4f2,	// (0x00023010) title_pane_stacon_g2_ParamLimits

0xc4f2,	// (0x00023010) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x00026203) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x00026203) title_pane_stacon_g

0xcc6d,	// (0x0002378b) cursor_press_pane

0x90b6,	// (0x0001fbd4) popup_fep_hwr_window_ParamLimits

0x90b6,	// (0x0001fbd4) popup_fep_hwr_window

0xcf23,	// (0x00023a41) popup_fep_vkb_window_ParamLimits

0xcf23,	// (0x00023a41) popup_fep_vkb_window

0xefc7,	// (0x00025ae5) cursor_press_pane_g1

0x0002,

0xfb2f,	// (0x0002664d) fep_vkb_side_pane_g_ParamLimits

0x637a,	// (0x0001ce98) fep_hwr_candidate_pane_ParamLimits

0x637a,	// (0x0001ce98) fep_hwr_candidate_pane

0x63a4,	// (0x0001cec2) fep_hwr_side_pane_ParamLimits

0x63a4,	// (0x0001cec2) fep_hwr_side_pane

0x63c4,	// (0x0001cee2) fep_hwr_top_pane_ParamLimits

0x63c4,	// (0x0001cee2) fep_hwr_top_pane

0x63dc,	// (0x0001cefa) fep_hwr_write_pane_ParamLimits

0x63dc,	// (0x0001cefa) fep_hwr_write_pane

0xfb2f,	// (0x0002664d) fep_vkb_side_pane_g

0xefcf,	// (0x00025aed) fep_hwr_top_pane_g1

0xefe1,	// (0x00025aff) fep_hwr_top_pane_g2

0x6408,	// (0x0001cf26) fep_hwr_top_pane_g3

0x0002,

0xfb0b,	// (0x00026629) fep_hwr_top_pane_g

0x641d,	// (0x0001cf3b) fep_hwr_top_text_pane

0xc75e,	// (0x0002327c) fep_hwr_top_text_pane_g1

0xf017,	// (0x00025b35) fep_hwr_top_text_pane_t1

0x6513,	// (0x0001d031) fep_hwr_candidate_pane_g1

0xf224,	// (0x00025d42) fep_vkb_keypad_pane_g3_ParamLimits

0xf224,	// (0x00025d42) fep_vkb_keypad_pane_g3

0xf24c,	// (0x00025d6a) fep_vkb_keypad_pane_g4_ParamLimits

0xf24c,	// (0x00025d6a) fep_vkb_keypad_pane_g4

0xf2bb,	// (0x00025dd9) fep_vkb_bottom_pane_g2_ParamLimits

0xf2bb,	// (0x00025dd9) fep_vkb_bottom_pane_g2

0x0001,

0xfb36,	// (0x00026654) fep_vkb_bottom_pane_g_ParamLimits

0xfb36,	// (0x00026654) fep_vkb_bottom_pane_g

0xef5f,	// (0x00025a7d) cell_vkb_side_pane_g2

0x0001,

0xfb40,	// (0x0002665e) cell_vkb_side_pane_g

0xf2ff,	// (0x00025e1d) cell_vkb_side_pane_t1

0xf30d,	// (0x00025e2b) cell_vkb_side_pane_t1_copy1

0xef5f,	// (0x00025a7d) bg_fep_vkb_candidate_pane_g2

0xf3f7,	// (0x00025f15) cell_vkb_candidate_pane_ParamLimits

0xf025,	// (0x00025b43) aid_size_cell_vkb_ParamLimits

0xf025,	// (0x00025b43) aid_size_cell_vkb

0xf3f7,	// (0x00025f15) cell_vkb_candidate_pane

0x652d,	// (0x0001d04b) bg_popup_fep_shadow_pane_g1

0xf0a1,	// (0x00025bbf) fep_vkb_bottom_pane_ParamLimits

0xf0a1,	// (0x00025bbf) fep_vkb_bottom_pane

0xf0de,	// (0x00025bfc) fep_vkb_candidate_pane_ParamLimits

0xf0de,	// (0x00025bfc) fep_vkb_candidate_pane

0xf0fa,	// (0x00025c18) fep_vkb_keypad_pane_ParamLimits

0xf0fa,	// (0x00025c18) fep_vkb_keypad_pane

0xf140,	// (0x00025c5e) fep_vkb_side_pane_ParamLimits

0xf140,	// (0x00025c5e) fep_vkb_side_pane

0xf17c,	// (0x00025c9a) fep_vkb_top_pane_ParamLimits

0xf17c,	// (0x00025c9a) fep_vkb_top_pane

0xf1b8,	// (0x00025cd6) fep_vkb_top_pane_g1_ParamLimits

0xf1b8,	// (0x00025cd6) fep_vkb_top_pane_g1

0xf1c7,	// (0x00025ce5) fep_vkb_top_pane_g2_ParamLimits

0xf1c7,	// (0x00025ce5) fep_vkb_top_pane_g2

0xf1d6,	// (0x00025cf4) fep_vkb_top_pane_g3_ParamLimits

0xf1d6,	// (0x00025cf4) fep_vkb_top_pane_g3

0x0003,

0xfb26,	// (0x00026644) fep_vkb_top_pane_g_ParamLimits

0xfb26,	// (0x00026644) fep_vkb_top_pane_g

0xf1f4,	// (0x00025d12) fep_vkb_top_text_pane_ParamLimits

0xf1f4,	// (0x00025d12) fep_vkb_top_text_pane

0xa41e,	// (0x00020f3c) fep_vkb_side_pane_g1_ParamLimits

0xa41e,	// (0x00020f3c) fep_vkb_side_pane_g1

0xf213,	// (0x00025d31) grid_vkb_side_pane_ParamLimits

0xf213,	// (0x00025d31) grid_vkb_side_pane

0x6535,	// (0x0001d053) bg_popup_fep_shadow_pane_g2

0x653e,	// (0x0001d05c) bg_popup_fep_shadow_pane_g3

0x6546,	// (0x0001d064) bg_popup_fep_shadow_pane_g4

0x654f,	// (0x0001d06d) bg_popup_fep_shadow_pane_g5

0x6559,	// (0x0001d077) bg_popup_fep_shadow_pane_g6

0x6561,	// (0x0001d07f) bg_popup_fep_shadow_pane_g7

0xc2ad,	// (0x00022dcb) bg_popup_fep_shadow_pane_g8

0xf26a,	// (0x00025d88) grid_vkb_keypad_number_pane_ParamLimits

0xf26a,	// (0x00025d88) grid_vkb_keypad_number_pane

0xf27a,	// (0x00025d98) grid_vkb_keypad_pane_ParamLimits

0xf27a,	// (0x00025d98) grid_vkb_keypad_pane

0xf2a0,	// (0x00025dbe) fep_vkb_bottom_pane_g1_ParamLimits

0xf2a0,	// (0x00025dbe) fep_vkb_bottom_pane_g1

0xf2c9,	// (0x00025de7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xf2c9,	// (0x00025de7) grid_vkb_keypad_bottom_left_pane

0xf2de,	// (0x00025dfc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xf2de,	// (0x00025dfc) grid_vkb_keypad_bottom_right_pane

0xf2f3,	// (0x00025e11) fep_vkb_top_text_pane_g1

0xa465,	// (0x00020f83) fep_vkb_top_text_pane_t1

0xa477,	// (0x00020f95) cell_vkb_side_pane_ParamLimits

0xa477,	// (0x00020f95) cell_vkb_side_pane

0xef5f,	// (0x00025a7d) cell_vkb_side_pane_g1

0xf31b,	// (0x00025e39) cell_vkb_keypad_pane_ParamLimits

0xf31b,	// (0x00025e39) cell_vkb_keypad_pane

0xf3a4,	// (0x00025ec2) cell_vkb_keypad_pane_g1

0x0008,

0xfb53,	// (0x00026671) bg_popup_fep_shadow_pane_g

0xef5f,	// (0x00025a7d) cell_hwr_side_pane_g1

0xef5f,	// (0x00025a7d) cell_hwr_side_pane_g2

0xf3ae,	// (0x00025ecc) cell_vkb_keypad_pane_t1

0xa48d,	// (0x00020fab) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa48d,	// (0x00020fab) cell_vkb_keypad_bottom_left_pane

0xa4a2,	// (0x00020fc0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa4a2,	// (0x00020fc0) cell_vkb_keypad_bottom_right_pane

0xef5f,	// (0x00025a7d) cell_vkb_keypad_bottom_left_pane_g1

0xef5f,	// (0x00025a7d) cell_vkb_keypad_bottom_right_pane_g1

0xf3bc,	// (0x00025eda) cell_vkb_keypad_number_pane_ParamLimits

0xf3bc,	// (0x00025eda) cell_vkb_keypad_number_pane

0xf3db,	// (0x00025ef9) cell_vkb_keypad_number_pane_g1

0xf3e5,	// (0x00025f03) cell_vkb_keypad_number_pane_g2

0xf3ee,	// (0x00025f0c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb45,	// (0x00026663) cell_vkb_keypad_number_pane_g

0xf3ae,	// (0x00025ecc) cell_vkb_keypad_number_pane_t1

0xf414,	// (0x00025f32) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x0002665e) cell_hwr_side_pane_g

0xf42d,	// (0x00025f4b) cell_hwr_side_pane_t1

0x6573,	// (0x0001d091) cell_hwr_side_pane_t1_copy1

0xf1e6,	// (0x00025d04) cell_hwr_candidate_pane_g1

0x6581,	// (0x0001d09f) cell_hwr_candidate_pane_t1

0xef5f,	// (0x00025a7d) cell_vkb_candidate_pane_g2

0xf4b3,	// (0x00025fd1) cell_vkb_candidate_pane_t1

0xf396,	// (0x00025eb4) bg_popup_fep_shadow_pane_ParamLimits

0xf396,	// (0x00025eb4) bg_popup_fep_shadow_pane

0x2d3d,	// (0x0001985b) bg_fep_hwr_top_pane_g4

0xeff3,	// (0x00025b11) bg_hwr_side_pane_g1_ParamLimits

0xeff3,	// (0x00025b11) bg_hwr_side_pane_g1

0xa3d7,	// (0x00020ef5) cell_hwr_side_pane_ParamLimits

0xa3d7,	// (0x00020ef5) cell_hwr_side_pane

0x6494,	// (0x0001cfb2) fep_hwr_write_pane_g1_ParamLimits

0x6494,	// (0x0001cfb2) fep_hwr_write_pane_g1

0x64a1,	// (0x0001cfbf) fep_hwr_write_pane_g2_ParamLimits

0x64a1,	// (0x0001cfbf) fep_hwr_write_pane_g2

0x64ae,	// (0x0001cfcc) fep_hwr_write_pane_g3_ParamLimits

0x64ae,	// (0x0001cfcc) fep_hwr_write_pane_g3

0xa3f7,	// (0x00020f15) fep_hwr_write_pane_g4_ParamLimits

0xa3f7,	// (0x00020f15) fep_hwr_write_pane_g4

0x0005,

0xfb12,	// (0x00026630) fep_hwr_write_pane_g_ParamLimits

0xfb12,	// (0x00026630) fep_hwr_write_pane_g

0x2d3d,	// (0x0001985b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2d3d,	// (0x0001985b) bg_fep_hwr_candidate_pane_g2

0x64d1,	// (0x0001cfef) cell_hwr_candidate_pane_ParamLimits

0x64d1,	// (0x0001cfef) cell_hwr_candidate_pane

0x6513,	// (0x0001d031) fep_hwr_candidate_pane_g1_ParamLimits

0xf053,	// (0x00025b71) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xf053,	// (0x00025b71) bg_popup_fep_shadow_pane_cp2

0xf1e6,	// (0x00025d04) fep_vkb_top_pane_g4_ParamLimits

0xf1e6,	// (0x00025d04) fep_vkb_top_pane_g4

0xf205,	// (0x00025d23) fep_vkb_side_pane_g2_ParamLimits

0xf205,	// (0x00025d23) fep_vkb_side_pane_g2

0x82d0,	// (0x0001edee) list_setting_pane_t4_ParamLimits

0x82d0,	// (0x0001edee) list_setting_pane_t4

0x836a,	// (0x0001ee88) list_setting_number_pane_t5_ParamLimits

0x836a,	// (0x0001ee88) list_setting_number_pane_t5

0x8d13,	// (0x0001f831) list_double_heading_pane_cp2_ParamLimits

0x8d13,	// (0x0001f831) list_double_heading_pane_cp2

0xc240,	// (0x00022d5e) list_double_heading_pane_g1_cp2_ParamLimits

0xc240,	// (0x00022d5e) list_double_heading_pane_g1_cp2

0xc24c,	// (0x00022d6a) list_double_heading_pane_g2_cp2_ParamLimits

0xc24c,	// (0x00022d6a) list_double_heading_pane_g2_cp2

0xf4c1,	// (0x00025fdf) list_double_heading_pane_t1_cp2_ParamLimits

0xf4c1,	// (0x00025fdf) list_double_heading_pane_t1_cp2

0xf4d7,	// (0x00025ff5) list_double_heading_pane_t2_cp2_ParamLimits

0xf4d7,	// (0x00025ff5) list_double_heading_pane_t2_cp2

0xbb67,	// (0x00022685) aid_value_unit2

0x5711,	// (0x0001c22f) popup_preview_fixed_window

0xbd12,	// (0x00022830) bg_popup_preview_window_pane_cp02

0xf4e9,	// (0x00026007) list_preview_fixed_pane

0xf52f,	// (0x0002604d) list_empty_pane_fp_ParamLimits

0xf52f,	// (0x0002604d) list_empty_pane_fp

0xf52f,	// (0x0002604d) list_single_cale_day_pane_fp_ParamLimits

0xf52f,	// (0x0002604d) list_single_cale_day_pane_fp

0xf52f,	// (0x0002604d) list_single_graphic_heading_pane_fp_ParamLimits

0xf52f,	// (0x0002604d) list_single_graphic_heading_pane_fp

0xf52f,	// (0x0002604d) list_single_graphic_pane_fp_ParamLimits

0xf52f,	// (0x0002604d) list_single_graphic_pane_fp

0xf52f,	// (0x0002604d) list_single_heading_pane_fp_ParamLimits

0xf52f,	// (0x0002604d) list_single_heading_pane_fp

0xf52f,	// (0x0002604d) list_single_pane_fp_ParamLimits

0xf52f,	// (0x0002604d) list_single_pane_fp

0xf546,	// (0x00026064) list_single_pane_fp_g1_ParamLimits

0xf546,	// (0x00026064) list_single_pane_fp_g1

0x46dd,	// (0x0001b1fb) list_single_pane_fp_g2_ParamLimits

0x46dd,	// (0x0001b1fb) list_single_pane_fp_g2

0x50b1,	// (0x0001bbcf) list_single_pane_fp_g3_ParamLimits

0x50b1,	// (0x0001bbcf) list_single_pane_fp_g3

0xf552,	// (0x00026070) list_single_pane_fp_g4_ParamLimits

0xf552,	// (0x00026070) list_single_pane_fp_g4

0x0003,

0xfb74,	// (0x00026692) list_single_pane_fp_g_ParamLimits

0xfb74,	// (0x00026692) list_single_pane_fp_g

0x50c5,	// (0x0001bbe3) list_single_pane_fp_t1_ParamLimits

0x50c5,	// (0x0001bbe3) list_single_pane_fp_t1

0x50dc,	// (0x0001bbfa) list_single_graphic_pane_fp_g1_ParamLimits

0x50dc,	// (0x0001bbfa) list_single_graphic_pane_fp_g1

0xf546,	// (0x00026064) list_single_graphic_pane_fp_g2_ParamLimits

0xf546,	// (0x00026064) list_single_graphic_pane_fp_g2

0x46dd,	// (0x0001b1fb) list_single_graphic_pane_fp_g3_ParamLimits

0x46dd,	// (0x0001b1fb) list_single_graphic_pane_fp_g3

0x50b1,	// (0x0001bbcf) list_single_graphic_pane_fp_g4_ParamLimits

0x50b1,	// (0x0001bbcf) list_single_graphic_pane_fp_g4

0xf552,	// (0x00026070) list_single_graphic_pane_fp_g5_ParamLimits

0xf552,	// (0x00026070) list_single_graphic_pane_fp_g5

0x0004,

0xfb7d,	// (0x0002669b) list_single_graphic_pane_fp_g_ParamLimits

0xfb7d,	// (0x0002669b) list_single_graphic_pane_fp_g

0x50e8,	// (0x0001bc06) list_single_graphic_pane_fp_t1_ParamLimits

0x50e8,	// (0x0001bc06) list_single_graphic_pane_fp_t1

0x50dc,	// (0x0001bbfa) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x50dc,	// (0x0001bbfa) list_single_graphic_heading_pane_fp_g1

0xf546,	// (0x00026064) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf546,	// (0x00026064) list_single_graphic_heading_pane_fp_g2

0x46dd,	// (0x0001b1fb) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x46dd,	// (0x0001b1fb) list_single_graphic_heading_pane_fp_g3

0x50b1,	// (0x0001bbcf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x50b1,	// (0x0001bbcf) list_single_graphic_heading_pane_fp_g4

0xf552,	// (0x00026070) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf552,	// (0x00026070) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7d,	// (0x0002669b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x0002669b) list_single_graphic_heading_pane_fp_g

0x50fe,	// (0x0001bc1c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x50fe,	// (0x0001bc1c) list_single_graphic_heading_pane_fp_t1

0x5114,	// (0x0001bc32) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5114,	// (0x0001bc32) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb88,	// (0x000266a6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb88,	// (0x000266a6) list_single_graphic_heading_pane_fp_t

0x5126,	// (0x0001bc44) list_single_cale_day_pane_fp_g1_ParamLimits

0x5126,	// (0x0001bc44) list_single_cale_day_pane_fp_g1

0xf55e,	// (0x0002607c) list_single_cale_day_pane_fp_g2_ParamLimits

0xf55e,	// (0x0002607c) list_single_cale_day_pane_fp_g2

0x515e,	// (0x0001bc7c) list_single_cale_day_pane_fp_g3_ParamLimits

0x515e,	// (0x0001bc7c) list_single_cale_day_pane_fp_g3

0x5186,	// (0x0001bca4) list_single_cale_day_pane_fp_g4_ParamLimits

0x5186,	// (0x0001bca4) list_single_cale_day_pane_fp_g4

0x51aa,	// (0x0001bcc8) list_single_cale_day_pane_fp_g5_ParamLimits

0x51aa,	// (0x0001bcc8) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8d,	// (0x000266ab) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8d,	// (0x000266ab) list_single_cale_day_pane_fp_g

0x51ce,	// (0x0001bcec) list_single_cale_day_pane_fp_t1_ParamLimits

0x51ce,	// (0x0001bcec) list_single_cale_day_pane_fp_t1

0x51f4,	// (0x0001bd12) list_single_cale_day_pane_fp_t2_ParamLimits

0x51f4,	// (0x0001bd12) list_single_cale_day_pane_fp_t2

0x520d,	// (0x0001bd2b) list_single_cale_day_pane_fp_t3_ParamLimits

0x520d,	// (0x0001bd2b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb98,	// (0x000266b6) list_single_cale_day_pane_fp_t_ParamLimits

0xfb98,	// (0x000266b6) list_single_cale_day_pane_fp_t

0xf546,	// (0x00026064) list_empty_pane_fp_g1_ParamLimits

0xf546,	// (0x00026064) list_empty_pane_fp_g1

0x5226,	// (0x0001bd44) list_empty_pane_fp_t1

0x5234,	// (0x0001bd52) list_empty_pane_fp_t2

0x0001,

0xfb9f,	// (0x000266bd) list_empty_pane_fp_t

0xf546,	// (0x00026064) list_single_heading_pane_fp_g1_ParamLimits

0xf546,	// (0x00026064) list_single_heading_pane_fp_g1

0x46dd,	// (0x0001b1fb) list_single_heading_pane_fp_g2_ParamLimits

0x46dd,	// (0x0001b1fb) list_single_heading_pane_fp_g2

0x50b1,	// (0x0001bbcf) list_single_heading_pane_fp_g3_ParamLimits

0x50b1,	// (0x0001bbcf) list_single_heading_pane_fp_g3

0x0002,

0xfba4,	// (0x000266c2) list_single_heading_pane_fp_g_ParamLimits

0xfba4,	// (0x000266c2) list_single_heading_pane_fp_g

0x5242,	// (0x0001bd60) list_single_heading_pane_fp_t1_ParamLimits

0x5242,	// (0x0001bd60) list_single_heading_pane_fp_t1

0x5254,	// (0x0001bd72) list_single_heading_pane_fp_t2_ParamLimits

0x5254,	// (0x0001bd72) list_single_heading_pane_fp_t2

0x0001,

0xfbab,	// (0x000266c9) list_single_heading_pane_fp_t_ParamLimits

0xfbab,	// (0x000266c9) list_single_heading_pane_fp_t

0xc389,	// (0x00022ea7) aid_size_cell_fast

0xbcf5,	// (0x00022813) soft_indicator_pane_cp1_t1

0xc3c6,	// (0x00022ee4) cell_app_pane_cp2_ParamLimits

0xc3c6,	// (0x00022ee4) cell_app_pane_cp2

0x6363,	// (0x0001ce81) fep_hwr_candidate_drop_down_list_pane

0x2d74,	// (0x00019892) fep_hwr_candidate_pane_g3_ParamLimits

0x2d74,	// (0x00019892) fep_hwr_candidate_pane_g3

0x2d81,	// (0x0001989f) fep_hwr_candidate_pane_g4_ParamLimits

0x2d81,	// (0x0001989f) fep_hwr_candidate_pane_g4

0x0002,

0xfb1f,	// (0x0002663d) fep_hwr_candidate_pane_g_ParamLimits

0xfb1f,	// (0x0002663d) fep_hwr_candidate_pane_g

0xf0cd,	// (0x00025beb) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xf0cd,	// (0x00025beb) fep_vkb_candidate_drop_down_list_pane

0xf41c,	// (0x00025f3a) fep_vkb_candidate_pane_g3

0xf424,	// (0x00025f42) fep_vkb_candidate_pane_g4

0x0002,

0xfb4c,	// (0x0002666a) fep_vkb_candidate_pane_g

0xf1e6,	// (0x00025d04) cell_hwr_candidate_pane_g1_ParamLimits

0xf43b,	// (0x00025f59) cell_hwr_candidate_pane_g3_ParamLimits

0xf43b,	// (0x00025f59) cell_hwr_candidate_pane_g3

0xf45c,	// (0x00025f7a) cell_hwr_candidate_pane_g4_ParamLimits

0xf45c,	// (0x00025f7a) cell_hwr_candidate_pane_g4

0x0002,

0xfb66,	// (0x00026684) cell_hwr_candidate_pane_g_ParamLimits

0xfb66,	// (0x00026684) cell_hwr_candidate_pane_g

0xf47d,	// (0x00025f9b) cell_vkb_candidate_pane_g3_ParamLimits

0xf47d,	// (0x00025f9b) cell_vkb_candidate_pane_g3

0xf498,	// (0x00025fb6) cell_vkb_candidate_pane_g4_ParamLimits

0xf498,	// (0x00025fb6) cell_vkb_candidate_pane_g4

0x006d,	// (0x00016b8b) cell_app_pane_cp2_g1_ParamLimits

0x006d,	// (0x00016b8b) cell_app_pane_cp2_g1

0x008b,	// (0x00016ba9) cell_app_pane_cp2_g2_ParamLimits

0x008b,	// (0x00016ba9) cell_app_pane_cp2_g2

0x0001,

0xfbb0,	// (0x000266ce) cell_app_pane_cp2_g_ParamLimits

0xfbb0,	// (0x000266ce) cell_app_pane_cp2_g

0x0097,	// (0x00016bb5) cell_app_pane_cp2_t1_ParamLimits

0x0097,	// (0x00016bb5) cell_app_pane_cp2_t1

0xc226,	// (0x00022d44) grid_highlight_pane_cp1_ParamLimits

0xc226,	// (0x00022d44) grid_highlight_pane_cp1

0x659f,	// (0x0001d0bd) cell_hwr_candidate_pane_cp1_ParamLimits

0x659f,	// (0x0001d0bd) cell_hwr_candidate_pane_cp1

0xf1e6,	// (0x00025d04) fep_hwr_candidate_drop_down_list_pane_g1

0x00c9,	// (0x00016be7) fep_hwr_candidate_drop_down_list_pane_g2

0x00d6,	// (0x00016bf4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x000266d3) fep_hwr_candidate_drop_down_list_pane_g

0x65be,	// (0x0001d0dc) fep_hwr_candidate_drop_down_list_scroll_pane

0x65c7,	// (0x0001d0e5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x65c7,	// (0x0001d0e5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x65d4,	// (0x0001d0f2) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x65d4,	// (0x0001d0f2) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x65e1,	// (0x0001d0ff) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x65e1,	// (0x0001d0ff) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xf47d,	// (0x00025f9b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf47d,	// (0x00025f9b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf498,	// (0x00025fb6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf498,	// (0x00025fb6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x65ee,	// (0x0001d10c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x65ee,	// (0x0001d10c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6609,	// (0x0001d127) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6609,	// (0x0001d127) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0157,	// (0x00016c75) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0157,	// (0x00016c75) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x000266da) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x000266da) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x00a9,	// (0x00016bc7) cell_vkb_candidate_pane_cp1_ParamLimits

0x00a9,	// (0x00016bc7) cell_vkb_candidate_pane_cp1

0xf1e6,	// (0x00025d04) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xf1e6,	// (0x00025d04) fep_vkb_candidate_drop_down_list_pane_g1

0x00c9,	// (0x00016be7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x00c9,	// (0x00016be7) fep_vkb_candidate_drop_down_list_pane_g2

0x00d6,	// (0x00016bf4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x00d6,	// (0x00016bf4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x000266d3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb5,	// (0x000266d3) fep_vkb_candidate_drop_down_list_pane_g

0x00e3,	// (0x00016c01) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x00e3,	// (0x00016c01) fep_vkb_candidate_drop_down_list_scroll_pane

0x00f0,	// (0x00016c0e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x00f0,	// (0x00016c0e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x00fd,	// (0x00016c1b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x00fd,	// (0x00016c1b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x0109,	// (0x00016c27) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0109,	// (0x00016c27) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf43b,	// (0x00025f59) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf43b,	// (0x00025f59) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf45c,	// (0x00025f7a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf45c,	// (0x00025f7a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x0115,	// (0x00016c33) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0115,	// (0x00016c33) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x0136,	// (0x00016c54) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0136,	// (0x00016c54) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x0157,	// (0x00016c75) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0157,	// (0x00016c75) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x000266eb) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x000266eb) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x886a,	// (0x0001f388) title_pane_g1_ParamLimits

0x887b,	// (0x0001f399) title_pane_g2_ParamLimits

0xf56a,	// (0x00026088) title_pane_g_ParamLimits

0xc74e,	// (0x0002326c) aid_call2_pane

0xc756,	// (0x00023274) aid_call_pane

0xc75e,	// (0x0002327c) popup_clock_analogue_window_g1

0xc75e,	// (0x0002327c) popup_clock_analogue_window_g2

0x5a70,	// (0x0001c58e) popup_clock_analogue_window_g3

0x5a79,	// (0x0001c597) popup_clock_analogue_window_g4

0xbb79,	// (0x00022697) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x00026232) popup_clock_analogue_window_g

0x5a81,	// (0x0001c59f) popup_clock_analogue_window_t1

0x5a8f,	// (0x0001c5ad) clock_digital_number_pane_ParamLimits

0x5a8f,	// (0x0001c5ad) clock_digital_number_pane

0x5a9b,	// (0x0001c5b9) clock_digital_number_pane_cp02_ParamLimits

0x5a9b,	// (0x0001c5b9) clock_digital_number_pane_cp02

0x5aa7,	// (0x0001c5c5) clock_digital_number_pane_cp03_ParamLimits

0x5aa7,	// (0x0001c5c5) clock_digital_number_pane_cp03

0x5ab3,	// (0x0001c5d1) clock_digital_number_pane_cp04_ParamLimits

0x5ab3,	// (0x0001c5d1) clock_digital_number_pane_cp04

0x5abf,	// (0x0001c5dd) clock_digital_separator_pane_ParamLimits

0x5abf,	// (0x0001c5dd) clock_digital_separator_pane

0x5acb,	// (0x0001c5e9) popup_clock_digital_window_t1_ParamLimits

0x5acb,	// (0x0001c5e9) popup_clock_digital_window_t1

0xbb79,	// (0x00022697) clock_digital_number_pane_g1

0xbb79,	// (0x00022697) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x0002623d) clock_digital_number_pane_g

0xbb79,	// (0x00022697) clock_digital_separator_pane_g1

0xbb79,	// (0x00022697) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x0002623d) clock_digital_separator_pane_g

0x969b,	// (0x000201b9) aid_fill_nsta_ParamLimits

0x97ca,	// (0x000202e8) indicator_nsta_pane_ParamLimits

0xd0a8,	// (0x00023bc6) popup_clock_analogue_window

0xd0a8,	// (0x00023bc6) popup_clock_digital_window

0xcf67,	// (0x00023a85) grid_indicator_nsta_pane_ParamLimits

0xec05,	// (0x00025723) clock_nsta_pane_t2

0x0001,

0xfa9f,	// (0x000265bd) clock_nsta_pane_t

0x5a34,	// (0x0001c552) aid_size_max_handle

0x8d0a,	// (0x0001f828) aid_size_min_handle

0xcc6d,	// (0x0002378b) editor_scroll_pane

0x0172,	// (0x00016c90) ex_editor_pane

0xc345,	// (0x00022e63) scroll_pane_cp13

0xc1c5,	// (0x00022ce3) scroll_pane_cp14

0xc788,	// (0x000232a6) scroll_pane_cp36

0x8d24,	// (0x0001f842) list_single_graphic_hl_pane_cp2_ParamLimits

0x8d24,	// (0x0001f842) list_single_graphic_hl_pane_cp2

0xa08d,	// (0x00020bab) list_single_graphic_hl_pane_ParamLimits

0xa08d,	// (0x00020bab) list_single_graphic_hl_pane

0x526a,	// (0x0001bd88) aid_size_min_hl_cp1

0x0183,	// (0x00016ca1) list_highlight_pane_cp34_ParamLimits

0x0183,	// (0x00016ca1) list_highlight_pane_cp34

0x0194,	// (0x00016cb2) list_single_graphic_hl_pane_g1_ParamLimits

0x0194,	// (0x00016cb2) list_single_graphic_hl_pane_g1

0x859d,	// (0x0001f0bb) list_single_graphic_hl_pane_g2_ParamLimits

0x859d,	// (0x0001f0bb) list_single_graphic_hl_pane_g2

0x859d,	// (0x0001f0bb) list_single_graphic_hl_pane_g3_ParamLimits

0x859d,	// (0x0001f0bb) list_single_graphic_hl_pane_g3

0x527f,	// (0x0001bd9d) list_single_graphic_hl_pane_g4_ParamLimits

0x527f,	// (0x0001bd9d) list_single_graphic_hl_pane_g4

0x528b,	// (0x0001bda9) list_single_graphic_hl_pane_g5_ParamLimits

0x528b,	// (0x0001bda9) list_single_graphic_hl_pane_g5

0x0004,

0xfbde,	// (0x000266fc) list_single_graphic_hl_pane_g_ParamLimits

0xfbde,	// (0x000266fc) list_single_graphic_hl_pane_g

0x529f,	// (0x0001bdbd) list_single_graphic_hl_pane_t1_ParamLimits

0x529f,	// (0x0001bdbd) list_single_graphic_hl_pane_t1

0x01c1,	// (0x00016cdf) aid_size_min_hl_cp2

0x01ca,	// (0x00016ce8) list_highlight_pane_cp34_cp2_ParamLimits

0x01ca,	// (0x00016ce8) list_highlight_pane_cp34_cp2

0x0194,	// (0x00016cb2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x0194,	// (0x00016cb2) list_single_graphic_hl_pane_g1_cp2

0x01d7,	// (0x00016cf5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x01d7,	// (0x00016cf5) list_single_graphic_hl_pane_g2_cp2

0x01e3,	// (0x00016d01) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x01e3,	// (0x00016d01) list_single_graphic_hl_pane_g3_cp2

0xcba4,	// (0x000236c2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcba4,	// (0x000236c2) list_single_graphic_hl_pane_g4_cp2

0x01ad,	// (0x00016ccb) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x01ad,	// (0x00016ccb) list_single_graphic_hl_pane_g5_cp2

0x8ebf,	// (0x0001f9dd) control_pane_g4_ParamLimits

0x8ebf,	// (0x0001f9dd) control_pane_g4

0xc37d,	// (0x00022e9b) bg_popup_sub_pane_cp10_ParamLimits

0xef69,	// (0x00025a87) list_choice_list_pane_ParamLimits

0xef78,	// (0x00025a96) scroll_pane_cp23

0xbd12,	// (0x00022830) bg_popup_preview_window_pane_cp02_ParamLimits

0xf4e9,	// (0x00026007) list_preview_fixed_pane_ParamLimits

0xf4ff,	// (0x0002601d) list_preview_fixed_pane_cp_ParamLimits

0xf4ff,	// (0x0002601d) list_preview_fixed_pane_cp

0xf50b,	// (0x00026029) popup_preview_fixed_window_g1_ParamLimits

0xf50b,	// (0x00026029) popup_preview_fixed_window_g1

0xf517,	// (0x00026035) popup_preview_fixed_window_g2_ParamLimits

0xf517,	// (0x00026035) popup_preview_fixed_window_g2

0x0002,

0xfb6d,	// (0x0002668b) popup_preview_fixed_window_g_ParamLimits

0xfb6d,	// (0x0002668b) popup_preview_fixed_window_g

0x59a8,	// (0x0001c4c6) aid_navi_side_left_pane_ParamLimits

0x59bd,	// (0x0001c4db) aid_navi_side_right_pane_ParamLimits

0x59d5,	// (0x0001c4f3) navi_icon_pane_stacon_ParamLimits

0x59e9,	// (0x0001c507) navi_navi_pane_stacon_ParamLimits

0x59d5,	// (0x0001c4f3) navi_text_pane_stacon_ParamLimits

0xbb6f,	// (0x0002268d) main_text_info_pane

0x0207,	// (0x00016d25) listscroll_text_info_pane

0x020f,	// (0x00016d2d) list_text_info_pane_ParamLimits

0x020f,	// (0x00016d2d) list_text_info_pane

0x021e,	// (0x00016d3c) scroll_pane_cp24_ParamLimits

0x021e,	// (0x00016d3c) scroll_pane_cp24

0xa4bd,	// (0x00020fdb) list_text_info_pane_t1_ParamLimits

0xa4bd,	// (0x00020fdb) list_text_info_pane_t1

0x902b,	// (0x0001fb49) popup_fast_swap2_window_ParamLimits

0x902b,	// (0x0001fb49) popup_fast_swap2_window

0x0275,	// (0x00016d93) aid_size_cell_fast2

0xbb6f,	// (0x0002268d) bg_popup_window_pane_cp17

0xd54c,	// (0x0002406a) heading_pane_cp2

0xbef8,	// (0x00022a16) listscroll_fast2_pane

0x027f,	// (0x00016d9d) grid_fast2_pane

0x0289,	// (0x00016da7) listscroll_fast2_pane_g1

0x0291,	// (0x00016daf) listscroll_fast2_pane_g2

0x0001,

0xfbe9,	// (0x00026707) listscroll_fast2_pane_g

0xc345,	// (0x00022e63) scroll_pane_cp26

0x029b,	// (0x00016db9) cell_fast2_pane_ParamLimits

0x029b,	// (0x00016db9) cell_fast2_pane

0x02b0,	// (0x00016dce) cell_fast2_pane_g1

0x02b9,	// (0x00016dd7) cell_fast2_pane_g2

0x02c2,	// (0x00016de0) cell_fast2_pane_g3

0x0002,

0xfbee,	// (0x0002670c) cell_fast2_pane_g

0xbf8c,	// (0x00022aaa) grid_highlight_pane_cp9

0xbfa1,	// (0x00022abf) main_eswt_pane_ParamLimits

0xbfa1,	// (0x00022abf) main_eswt_pane

0x0233,	// (0x00016d51) list_single_text_info_pane

0x02ca,	// (0x00016de8) eswt_ctrl_button_pane

0x02ca,	// (0x00016de8) eswt_ctrl_canvas_pane

0x02d2,	// (0x00016df0) eswt_ctrl_combo_pane

0x02ca,	// (0x00016de8) eswt_ctrl_default_pane

0x02ca,	// (0x00016de8) eswt_ctrl_label_pane

0x02da,	// (0x00016df8) eswt_ctrl_wait_pane

0x02e2,	// (0x00016e00) eswt_shell_pane

0xbb6f,	// (0x0002268d) listscroll_eswt_app_pane

0x0302,	// (0x00016e20) popup_eswt_tasktip_window_ParamLimits

0x0302,	// (0x00016e20) popup_eswt_tasktip_window

0xd2a5,	// (0x00023dc3) bg_popup_window_pane_cp18

0x0313,	// (0x00016e31) eswt_control_pane_g1_ParamLimits

0x0313,	// (0x00016e31) eswt_control_pane_g1

0x0320,	// (0x00016e3e) eswt_control_pane_g2_ParamLimits

0x0320,	// (0x00016e3e) eswt_control_pane_g2

0x032d,	// (0x00016e4b) eswt_control_pane_g3_ParamLimits

0x032d,	// (0x00016e4b) eswt_control_pane_g3

0x033a,	// (0x00016e58) eswt_control_pane_g4_ParamLimits

0x033a,	// (0x00016e58) eswt_control_pane_g4

0x0003,

0xfbf5,	// (0x00026713) eswt_control_pane_g_ParamLimits

0xfbf5,	// (0x00026713) eswt_control_pane_g

0xc226,	// (0x00022d44) bg_button_pane_ParamLimits

0xc226,	// (0x00022d44) bg_button_pane

0xbfa1,	// (0x00022abf) common_borders_pane_copy2_ParamLimits

0xbfa1,	// (0x00022abf) common_borders_pane_copy2

0x0347,	// (0x00016e65) control_button_pane_g1_ParamLimits

0x0347,	// (0x00016e65) control_button_pane_g1

0x0353,	// (0x00016e71) control_button_pane_g2_ParamLimits

0x0353,	// (0x00016e71) control_button_pane_g2

0x035f,	// (0x00016e7d) control_button_pane_g3_ParamLimits

0x035f,	// (0x00016e7d) control_button_pane_g3

0x0002,

0xfbfe,	// (0x0002671c) control_button_pane_g_ParamLimits

0xfbfe,	// (0x0002671c) control_button_pane_g

0x0373,	// (0x00016e91) control_button_pane_t1

0x0381,	// (0x00016e9f) control_button_pane_t2

0x0001,

0xfc05,	// (0x00026723) control_button_pane_t

0xd1b5,	// (0x00023cd3) bg_button_pane_g1

0xd1bd,	// (0x00023cdb) bg_button_pane_g2

0xd1c5,	// (0x00023ce3) bg_button_pane_g3

0xd1cd,	// (0x00023ceb) bg_button_pane_g4

0xd1d5,	// (0x00023cf3) bg_button_pane_g5

0xd1dd,	// (0x00023cfb) bg_button_pane_g6

0xd1e5,	// (0x00023d03) bg_button_pane_g7

0xd1ed,	// (0x00023d0b) bg_button_pane_g8

0xd1f5,	// (0x00023d13) bg_button_pane_g9

0x0008,

0xf86b,	// (0x00026389) bg_button_pane_g

0xef24,	// (0x00025a42) common_borders_pane_ParamLimits

0xef24,	// (0x00025a42) common_borders_pane

0x0313,	// (0x00016e31) eswt_control_pane_g1_copy1_ParamLimits

0x0313,	// (0x00016e31) eswt_control_pane_g1_copy1

0x0320,	// (0x00016e3e) eswt_control_pane_g2_copy1_ParamLimits

0x0320,	// (0x00016e3e) eswt_control_pane_g2_copy1

0x032d,	// (0x00016e4b) eswt_control_pane_g3_copy1_ParamLimits

0x032d,	// (0x00016e4b) eswt_control_pane_g3_copy1

0x033a,	// (0x00016e58) eswt_control_pane_g4_copy1_ParamLimits

0x033a,	// (0x00016e58) eswt_control_pane_g4_copy1

0xef5f,	// (0x00025a7d) bg_eswt_ctrl_canvas_pane_g1

0xef24,	// (0x00025a42) common_borders_pane_cp2_ParamLimits

0xef24,	// (0x00025a42) common_borders_pane_cp2

0xef24,	// (0x00025a42) common_borders_pane_cp3_ParamLimits

0xef24,	// (0x00025a42) common_borders_pane_cp3

0x038f,	// (0x00016ead) separator_horizontal_pane

0x0397,	// (0x00016eb5) separator_vertical_pane

0x0313,	// (0x00016e31) eswt_control_pane_g1_copy2_ParamLimits

0x0313,	// (0x00016e31) eswt_control_pane_g1_copy2

0x0320,	// (0x00016e3e) eswt_control_pane_g2_copy2_ParamLimits

0x0320,	// (0x00016e3e) eswt_control_pane_g2_copy2

0x032d,	// (0x00016e4b) eswt_control_pane_g3_copy2_ParamLimits

0x032d,	// (0x00016e4b) eswt_control_pane_g3_copy2

0x033a,	// (0x00016e58) eswt_control_pane_g4_copy2_ParamLimits

0x033a,	// (0x00016e58) eswt_control_pane_g4_copy2

0xbb6f,	// (0x0002268d) common_borders_pane_cp4

0x03a0,	// (0x00016ebe) separator_horizontal_pane_g1

0x03a9,	// (0x00016ec7) separator_horizontal_pane_g2

0x03b2,	// (0x00016ed0) separator_horizontal_pane_g3

0x0002,

0xfc0a,	// (0x00026728) separator_horizontal_pane_g

0x0313,	// (0x00016e31) eswt_control_pane_g1_copy3_ParamLimits

0x0313,	// (0x00016e31) eswt_control_pane_g1_copy3

0x0320,	// (0x00016e3e) eswt_control_pane_g2_copy3_ParamLimits

0x0320,	// (0x00016e3e) eswt_control_pane_g2_copy3

0x032d,	// (0x00016e4b) eswt_control_pane_g3_copy3_ParamLimits

0x032d,	// (0x00016e4b) eswt_control_pane_g3_copy3

0x033a,	// (0x00016e58) eswt_control_pane_g4_copy3_ParamLimits

0x033a,	// (0x00016e58) eswt_control_pane_g4_copy3

0xbb6f,	// (0x0002268d) common_borders_pane_cp5

0x03bb,	// (0x00016ed9) separator_vertical_pane_g1

0x03c4,	// (0x00016ee2) separator_vertical_pane_g2

0x03cd,	// (0x00016eeb) separator_vertical_pane_g3

0x0002,

0xfc11,	// (0x0002672f) separator_vertical_pane_g

0x0313,	// (0x00016e31) eswt_control_pane_g1_copy4_ParamLimits

0x0313,	// (0x00016e31) eswt_control_pane_g1_copy4

0x0320,	// (0x00016e3e) eswt_control_pane_g2_copy4_ParamLimits

0x0320,	// (0x00016e3e) eswt_control_pane_g2_copy4

0x032d,	// (0x00016e4b) eswt_control_pane_g3_copy4_ParamLimits

0x032d,	// (0x00016e4b) eswt_control_pane_g3_copy4

0x033a,	// (0x00016e58) eswt_control_pane_g4_copy4_ParamLimits

0x033a,	// (0x00016e58) eswt_control_pane_g4_copy4

0xa4db,	// (0x00020ff9) eswt_ctrl_combo_button_pane

0xa4e3,	// (0x00021001) eswt_ctrl_input_pane

0xa4eb,	// (0x00021009) popup_choice_list_window_cp70

0xa4f3,	// (0x00021011) eswt_ctrl_input_pane_t1

0xbb6f,	// (0x0002268d) input_focus_pane_cp70

0xef24,	// (0x00025a42) bg_button_pane_cp70_ParamLimits

0xef24,	// (0x00025a42) bg_button_pane_cp70

0xa501,	// (0x0002101f) eswt_ctrl_combo_button_pane_g1

0x0404,	// (0x00016f22) wait_bar_pane_cp70

0xd2a5,	// (0x00023dc3) bg_popup_window_pane_cp70_ParamLimits

0xd2a5,	// (0x00023dc3) bg_popup_window_pane_cp70

0x040c,	// (0x00016f2a) popup_eswt_tasktip_window_t1

0x0422,	// (0x00016f40) wait_bar_pane_cp71_ParamLimits

0x0422,	// (0x00016f40) wait_bar_pane_cp71

0x042e,	// (0x00016f4c) grid_eswt_app_pane

0xc59d,	// (0x000230bb) scroll_pane_cp70

0xa509,	// (0x00021027) cell_eswt_app_pane_ParamLimits

0xa509,	// (0x00021027) cell_eswt_app_pane

0xa533,	// (0x00021051) cell_eswt_app_pane_g1_ParamLimits

0xa533,	// (0x00021051) cell_eswt_app_pane_g1

0xa562,	// (0x00021080) cell_eswt_app_pane_g2_ParamLimits

0xa562,	// (0x00021080) cell_eswt_app_pane_g2

0x0001,

0xfc18,	// (0x00026736) cell_eswt_app_pane_g_ParamLimits

0xfc18,	// (0x00026736) cell_eswt_app_pane_g

0xa58b,	// (0x000210a9) cell_eswt_app_pane_t1_ParamLimits

0xa58b,	// (0x000210a9) cell_eswt_app_pane_t1

0x04f5,	// (0x00017013) grid_highlight_pane_cp70_ParamLimits

0x04f5,	// (0x00017013) grid_highlight_pane_cp70

0xcb40,	// (0x0002365e) set_content_pane_g1

0xce44,	// (0x00023962) status_small_volume_pane

0x6624,	// (0x0001d142) status_small_volume_pane_g1

0x662c,	// (0x0001d14a) volume_small2_pane

0x6635,	// (0x0001d153) volume_small2_pane_g1

0x663e,	// (0x0001d15c) volume_small2_pane_g2

0x6647,	// (0x0001d165) volume_small2_pane_g3

0x6650,	// (0x0001d16e) volume_small2_pane_g4

0x6659,	// (0x0001d177) volume_small2_pane_g5

0x6662,	// (0x0001d180) volume_small2_pane_g6

0x666b,	// (0x0001d189) volume_small2_pane_g7

0x6674,	// (0x0001d192) volume_small2_pane_g8

0x667d,	// (0x0001d19b) volume_small2_pane_g9

0x6686,	// (0x0001d1a4) volume_small2_pane_g10

0x0009,

0xfc1d,	// (0x0002673b) volume_small2_pane_g

0xf2f3,	// (0x00025e11) fep_vkb_top_text_pane_g1_ParamLimits

0xa465,	// (0x00020f83) fep_vkb_top_text_pane_t1_ParamLimits

0xf523,	// (0x00026041) popup_preview_fixed_window_g3_ParamLimits

0xf523,	// (0x00026041) popup_preview_fixed_window_g3

0x962e,	// (0x0002014c) popup_toolbar_trans_pane

0x9f05,	// (0x00020a23) aid_height_set_list_ParamLimits

0xdc0d,	// (0x0002472b) aid_size_parent_ParamLimits

0xc37d,	// (0x00022e9b) list_highlight_pane_cp2_ParamLimits

0xcb40,	// (0x0002365e) set_content_pane_g1_ParamLimits

0xa0a0,	// (0x00020bbe) list_single_image_pane_ParamLimits

0xa0a0,	// (0x00020bbe) list_single_image_pane

0xa5bd,	// (0x000210db) aid_size_cell_image_ParamLimits

0xa5bd,	// (0x000210db) aid_size_cell_image

0xa5ca,	// (0x000210e8) grid_single_image_pane_ParamLimits

0xa5ca,	// (0x000210e8) grid_single_image_pane

0xc240,	// (0x00022d5e) list_single_image_pane_g1_ParamLimits

0xc240,	// (0x00022d5e) list_single_image_pane_g1

0xc24c,	// (0x00022d6a) list_single_image_pane_g2_ParamLimits

0xc24c,	// (0x00022d6a) list_single_image_pane_g2

0x0001,

0xfc32,	// (0x00026750) list_single_image_pane_g_ParamLimits

0xfc32,	// (0x00026750) list_single_image_pane_g

0x051a,	// (0x00017038) list_single_image_pane_t1_ParamLimits

0x051a,	// (0x00017038) list_single_image_pane_t1

0xa5d6,	// (0x000210f4) cell_image_list_pane_ParamLimits

0xa5d6,	// (0x000210f4) cell_image_list_pane

0xa5ea,	// (0x00021108) cell_image_list_pane_g1

0xa5f3,	// (0x00021111) cell_image_list_pane_g2

0x0001,

0xfc37,	// (0x00026755) cell_image_list_pane_g

0x0556,	// (0x00017074) aid_size_cell_tb_trans_pane

0xc226,	// (0x00022d44) bg_tb_trans_pane

0x0568,	// (0x00017086) grid_tb_trans_pane

0xd1b5,	// (0x00023cd3) bg_tb_trans_pane_g1

0xd1bd,	// (0x00023cdb) bg_tb_trans_pane_g2

0xd1c5,	// (0x00023ce3) bg_tb_trans_pane_g3

0xd1cd,	// (0x00023ceb) bg_tb_trans_pane_g4

0xd1d5,	// (0x00023cf3) bg_tb_trans_pane_g5

0xd1ed,	// (0x00023d0b) bg_tb_trans_pane_g6

0xd1f5,	// (0x00023d13) bg_tb_trans_pane_g7

0xd1dd,	// (0x00023cfb) bg_tb_trans_pane_g8

0xd1e5,	// (0x00023d03) bg_tb_trans_pane_g9

0x0008,

0xfc3c,	// (0x0002675a) bg_tb_trans_pane_g

0x057c,	// (0x0001709a) cell_toolbar_trans_pane_ParamLimits

0x057c,	// (0x0001709a) cell_toolbar_trans_pane

0xef5f,	// (0x00025a7d) cell_toolbar_trans_pane_g1

0xa2c1,	// (0x00020ddf) list_form2_midp_pane_t1

0xa2cf,	// (0x00020ded) list_form2_midp_pane_t2

0x0001,

0xfae5,	// (0x00026603) list_form2_midp_pane_t

0xecbc,	// (0x000257da) scroll_pane_cp51_ParamLimits

0xee32,	// (0x00025950) form2_midp_wait_pane_g1

0xee3b,	// (0x00025959) form2_midp_wait_pane_g2

0xee44,	// (0x00025962) form2_midp_wait_pane_g3

0x0002,

0xfafa,	// (0x00026618) form2_midp_wait_pane_g

0xbbdf,	// (0x000226fd) list_highlight_pane_cp21_ParamLimits

0xee64,	// (0x00025982) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xee73,	// (0x00025991) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4d91,	// (0x0001b8af) list_single_2graphic_im_pane_ParamLimits

0x4d91,	// (0x0001b8af) list_single_2graphic_im_pane

0xa5fc,	// (0x0002111a) list_single_2graphic_im_pane_g1_ParamLimits

0xa5fc,	// (0x0002111a) list_single_2graphic_im_pane_g1

0xa60d,	// (0x0002112b) list_single_2graphic_im_pane_g2_ParamLimits

0xa60d,	// (0x0002112b) list_single_2graphic_im_pane_g2

0xa619,	// (0x00021137) list_single_2graphic_im_pane_g3_ParamLimits

0xa619,	// (0x00021137) list_single_2graphic_im_pane_g3

0x0003,

0xfc4f,	// (0x0002676d) list_single_2graphic_im_pane_g_ParamLimits

0xfc4f,	// (0x0002676d) list_single_2graphic_im_pane_g

0xa62d,	// (0x0002114b) list_single_2graphic_im_pane_t1_ParamLimits

0xa62d,	// (0x0002114b) list_single_2graphic_im_pane_t1

0xf52f,	// (0x0002604d) list_single_graphic_2heading_pane_fp_ParamLimits

0xf52f,	// (0x0002604d) list_single_graphic_2heading_pane_fp

0x50dc,	// (0x0001bbfa) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x50dc,	// (0x0001bbfa) list_single_graphic_2heading_pane_fp_g1

0xf546,	// (0x00026064) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf546,	// (0x00026064) list_single_graphic_2heading_pane_fp_g2

0x46dd,	// (0x0001b1fb) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x46dd,	// (0x0001b1fb) list_single_graphic_2heading_pane_fp_g3

0x50b1,	// (0x0001bbcf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x50b1,	// (0x0001bbcf) list_single_graphic_2heading_pane_fp_g4

0xf552,	// (0x00026070) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf552,	// (0x00026070) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7d,	// (0x0002669b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x0002669b) list_single_graphic_2heading_pane_fp_g

0x52b5,	// (0x0001bdd3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x52b5,	// (0x0001bdd3) list_single_graphic_2heading_pane_fp_t1

0x5114,	// (0x0001bc32) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5114,	// (0x0001bc32) list_single_graphic_2heading_pane_fp_t2

0x52cb,	// (0x0001bde9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x52cb,	// (0x0001bde9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc58,	// (0x00026776) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc58,	// (0x00026776) list_single_graphic_2heading_pane_fp_t

0xefff,	// (0x00025b1d) fep_hwr_write_pane_g5_ParamLimits

0xefff,	// (0x00025b1d) fep_hwr_write_pane_g5

0xf00b,	// (0x00025b29) fep_hwr_write_pane_g6_ParamLimits

0xf00b,	// (0x00025b29) fep_hwr_write_pane_g6

0x02e2,	// (0x00016e00) eswt_shell_pane_ParamLimits

0xd2a5,	// (0x00023dc3) bg_popup_window_pane_cp18_ParamLimits

0xe291,	// (0x00024daf) heading_pane_cp70

0x040c,	// (0x00016f2a) popup_eswt_tasktip_window_t1_ParamLimits

0x96ef,	// (0x0002020d) aid_touch_tab_arrow_left

0x9705,	// (0x00020223) aid_touch_tab_arrow_right

0x8893,	// (0x0001f3b1) title_pane_g3_ParamLimits

0x8893,	// (0x0001f3b1) title_pane_g3

0xc1e5,	// (0x00022d03) set_value_pane_g1

0x962e,	// (0x0002014c) popup_toolbar_trans_pane_ParamLimits

0x0556,	// (0x00017074) aid_size_cell_tb_trans_pane_ParamLimits

0xc226,	// (0x00022d44) bg_tb_trans_pane_ParamLimits

0x0568,	// (0x00017086) grid_tb_trans_pane_ParamLimits

0xbd12,	// (0x00022830) cont_note_pane_ParamLimits

0xbd12,	// (0x00022830) cont_note_pane

0xbfa1,	// (0x00022abf) cont_snote2_single_text_pane_ParamLimits

0xbfa1,	// (0x00022abf) cont_snote2_single_text_pane

0xbfa1,	// (0x00022abf) cont_snote2_single_graphic_pane_ParamLimits

0xbfa1,	// (0x00022abf) cont_snote2_single_graphic_pane

0xd762,	// (0x00024280) cont_note_wait_pane_ParamLimits

0xd762,	// (0x00024280) cont_note_wait_pane

0xd762,	// (0x00024280) cont_note_image_pane_ParamLimits

0xd762,	// (0x00024280) cont_note_image_pane

0x063c,	// (0x0001715a) popup_note2_window_g1_ParamLimits

0x063c,	// (0x0001715a) popup_note2_window_g1

0x066d,	// (0x0001718b) popup_note2_window_t1_ParamLimits

0x066d,	// (0x0001718b) popup_note2_window_t1

0x06b2,	// (0x000171d0) popup_note2_window_t2_ParamLimits

0x06b2,	// (0x000171d0) popup_note2_window_t2

0x06f7,	// (0x00017215) popup_note2_window_t3_ParamLimits

0x06f7,	// (0x00017215) popup_note2_window_t3

0x073c,	// (0x0001725a) popup_note2_window_t4_ParamLimits

0x073c,	// (0x0001725a) popup_note2_window_t4

0xbd8a,	// (0x000228a8) popup_note2_window_t5_ParamLimits

0xbd8a,	// (0x000228a8) popup_note2_window_t5

0x0004,

0xfc64,	// (0x00026782) popup_note2_window_t_ParamLimits

0xfc64,	// (0x00026782) popup_note2_window_t

0x076b,	// (0x00017289) popup_note2_image_window_g1_ParamLimits

0x076b,	// (0x00017289) popup_note2_image_window_g1

0x0777,	// (0x00017295) popup_note2_image_window_g2_ParamLimits

0x0777,	// (0x00017295) popup_note2_image_window_g2

0x0001,

0xfc6f,	// (0x0002678d) popup_note2_image_window_g_ParamLimits

0xfc6f,	// (0x0002678d) popup_note2_image_window_g

0x0789,	// (0x000172a7) popup_note2_image_window_t1_ParamLimits

0x0789,	// (0x000172a7) popup_note2_image_window_t1

0x07a1,	// (0x000172bf) popup_note2_image_window_t2_ParamLimits

0x07a1,	// (0x000172bf) popup_note2_image_window_t2

0x07b9,	// (0x000172d7) popup_note2_image_window_t3_ParamLimits

0x07b9,	// (0x000172d7) popup_note2_image_window_t3

0x0002,

0xfc74,	// (0x00026792) popup_note2_image_window_t_ParamLimits

0xfc74,	// (0x00026792) popup_note2_image_window_t

0xd770,	// (0x0002428e) popup_note2_wait_window_g1_ParamLimits

0xd770,	// (0x0002428e) popup_note2_wait_window_g1

0xd77c,	// (0x0002429a) popup_note2_wait_window_g2_ParamLimits

0xd77c,	// (0x0002429a) popup_note2_wait_window_g2

0xd788,	// (0x000242a6) popup_note2_wait_window_g3_ParamLimits

0xd788,	// (0x000242a6) popup_note2_wait_window_g3

0x0002,

0xf84d,	// (0x0002636b) popup_note2_wait_window_g_ParamLimits

0xf84d,	// (0x0002636b) popup_note2_wait_window_g

0x07d5,	// (0x000172f3) popup_note2_wait_window_t1_ParamLimits

0x07d5,	// (0x000172f3) popup_note2_wait_window_t1

0x07f3,	// (0x00017311) popup_note2_wait_window_t2_ParamLimits

0x07f3,	// (0x00017311) popup_note2_wait_window_t2

0x0811,	// (0x0001732f) popup_note2_wait_window_t3_ParamLimits

0x0811,	// (0x0001732f) popup_note2_wait_window_t3

0x0823,	// (0x00017341) popup_note2_wait_window_t4_ParamLimits

0x0823,	// (0x00017341) popup_note2_wait_window_t4

0x0003,

0xfc7b,	// (0x00026799) popup_note2_wait_window_t_ParamLimits

0xfc7b,	// (0x00026799) popup_note2_wait_window_t

0x0835,	// (0x00017353) wait_bar2_pane_ParamLimits

0x0835,	// (0x00017353) wait_bar2_pane

0x084d,	// (0x0001736b) popup_snote2_single_text_window_g1_ParamLimits

0x084d,	// (0x0001736b) popup_snote2_single_text_window_g1

0x0875,	// (0x00017393) popup_snote2_single_text_window_t1_ParamLimits

0x0875,	// (0x00017393) popup_snote2_single_text_window_t1

0x08c1,	// (0x000173df) popup_snote2_single_text_window_t2_ParamLimits

0x08c1,	// (0x000173df) popup_snote2_single_text_window_t2

0x090d,	// (0x0001742b) popup_snote2_single_text_window_t3_ParamLimits

0x090d,	// (0x0001742b) popup_snote2_single_text_window_t3

0x094e,	// (0x0001746c) popup_snote2_single_text_window_t4_ParamLimits

0x094e,	// (0x0001746c) popup_snote2_single_text_window_t4

0x0984,	// (0x000174a2) popup_snote2_single_text_window_t5_ParamLimits

0x0984,	// (0x000174a2) popup_snote2_single_text_window_t5

0x0004,

0xfc84,	// (0x000267a2) popup_snote2_single_text_window_t_ParamLimits

0xfc84,	// (0x000267a2) popup_snote2_single_text_window_t

0x09af,	// (0x000174cd) popup_snote2_single_graphic_window_g1_ParamLimits

0x09af,	// (0x000174cd) popup_snote2_single_graphic_window_g1

0x09d7,	// (0x000174f5) popup_snote2_single_graphic_window_g2_ParamLimits

0x09d7,	// (0x000174f5) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8f,	// (0x000267ad) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8f,	// (0x000267ad) popup_snote2_single_graphic_window_g

0x09ff,	// (0x0001751d) popup_snote2_single_graphic_window_t1_ParamLimits

0x09ff,	// (0x0001751d) popup_snote2_single_graphic_window_t1

0x0a4b,	// (0x00017569) popup_snote2_single_graphic_window_t2_ParamLimits

0x0a4b,	// (0x00017569) popup_snote2_single_graphic_window_t2

0x090d,	// (0x0001742b) popup_snote2_single_graphic_window_t3_ParamLimits

0x090d,	// (0x0001742b) popup_snote2_single_graphic_window_t3

0x094e,	// (0x0001746c) popup_snote2_single_graphic_window_t4_ParamLimits

0x094e,	// (0x0001746c) popup_snote2_single_graphic_window_t4

0x0984,	// (0x000174a2) popup_snote2_single_graphic_window_t5_ParamLimits

0x0984,	// (0x000174a2) popup_snote2_single_graphic_window_t5

0x0004,

0xfc94,	// (0x000267b2) popup_snote2_single_graphic_window_t_ParamLimits

0xfc94,	// (0x000267b2) popup_snote2_single_graphic_window_t

0xec6c,	// (0x0002578a) clock_nsta_pane_cp2_t1

0xec6c,	// (0x0002578a) clock_nsta_pane_cp2_t2

0x0001,

0xfabb,	// (0x000265d9) clock_nsta_pane_cp2_t

0x4a10,	// (0x0001b52e) form_field_data_wide_pane_g1_ParamLimits

0xc240,	// (0x00022d5e) form_field_data_wide_pane_g2_ParamLimits

0xc240,	// (0x00022d5e) form_field_data_wide_pane_g2

0xc24c,	// (0x00022d6a) form_field_data_wide_pane_g3_ParamLimits

0xc24c,	// (0x00022d6a) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x000261b5) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x000261b5) form_field_data_wide_pane_g

0xa1d7,	// (0x00020cf5) grid_touch_3_pane_ParamLimits

0xa1d7,	// (0x00020cf5) grid_touch_3_pane

0xa65e,	// (0x0002117c) cell_touch_3_pane_ParamLimits

0xa65e,	// (0x0002117c) cell_touch_3_pane

0xef5f,	// (0x00025a7d) cell_touch_3_pane_g1

0xef5f,	// (0x00025a7d) cell_touch_3_pane_g2

0x0001,

0xfb40,	// (0x0002665e) cell_touch_3_pane_g

0xbdbc,	// (0x000228da) cont_query_data_pane

0xbdc4,	// (0x000228e2) cont_query_data_pane_cp1

0x0ac6,	// (0x000175e4) button_value_adjust_pane_cp7

0x0ace,	// (0x000175ec) query_popup_pane_cp3

0xc7ba,	// (0x000232d8) bg_popup_sub_pane_cp22_ParamLimits

0x5aea,	// (0x0001c608) navi_navi_volume_pane_cp2

0x5b05,	// (0x0001c623) popup_side_volume_key_window_g2

0x5b14,	// (0x0001c632) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x00026247) popup_side_volume_key_window_g

0x5b31,	// (0x0001c64f) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0002624e) popup_side_volume_key_window_t

0xca0a,	// (0x00023528) popup_side_volume_key_window_ParamLimits

0x8114,	// (0x0001ec32) list_double_graphic_pane_g4_ParamLimits

0x8114,	// (0x0001ec32) list_double_graphic_pane_g4

0x8588,	// (0x0001f0a6) list_single_2heading_msg_pane_ParamLimits

0x8588,	// (0x0001f0a6) list_single_2heading_msg_pane

0x85a9,	// (0x0001f0c7) list_single_2heading_msg_pane_g1_ParamLimits

0x85a9,	// (0x0001f0c7) list_single_2heading_msg_pane_g1

0x85b5,	// (0x0001f0d3) list_single_2heading_msg_pane_g2_ParamLimits

0x85b5,	// (0x0001f0d3) list_single_2heading_msg_pane_g2

0x85c8,	// (0x0001f0e6) list_single_2heading_msg_pane_g3_ParamLimits

0x85c8,	// (0x0001f0e6) list_single_2heading_msg_pane_g3

0x52f7,	// (0x0001be15) list_single_2heading_msg_pane_g4_ParamLimits

0x52f7,	// (0x0001be15) list_single_2heading_msg_pane_g4

0x0003,

0xfc9f,	// (0x000267bd) list_single_2heading_msg_pane_g_ParamLimits

0xfc9f,	// (0x000267bd) list_single_2heading_msg_pane_g

0x530f,	// (0x0001be2d) list_single_2heading_msg_pane_t1_ParamLimits

0x530f,	// (0x0001be2d) list_single_2heading_msg_pane_t1

0x85d4,	// (0x0001f0f2) list_single_2heading_msg_pane_t2_ParamLimits

0x85d4,	// (0x0001f0f2) list_single_2heading_msg_pane_t2

0x863f,	// (0x0001f15d) list_single_2heading_msg_pane_t3_ParamLimits

0x863f,	// (0x0001f15d) list_single_2heading_msg_pane_t3

0x53a4,	// (0x0001bec2) list_single_2heading_msg_pane_t4_ParamLimits

0x53a4,	// (0x0001bec2) list_single_2heading_msg_pane_t4

0x0003,

0xfca8,	// (0x000267c6) list_single_2heading_msg_pane_t_ParamLimits

0xfca8,	// (0x000267c6) list_single_2heading_msg_pane_t

0xbb8d,	// (0x000226ab) title_pane_g4_ParamLimits

0xbb8d,	// (0x000226ab) title_pane_g4

0x58f8,	// (0x0001c416) title_pane_stacon_g3_ParamLimits

0x58f8,	// (0x0001c416) title_pane_stacon_g3

0x05d3,	// (0x000170f1) list_single_2graphic_im_pane_g4_ParamLimits

0x05d3,	// (0x000170f1) list_single_2graphic_im_pane_g4

0xe0b5,	// (0x00024bd3) popup_side_volume_key_window_cp

0xe58d,	// (0x000250ab) main_idle_act2_pane_t1

0x5eb4,	// (0x0001c9d2) toolbar_button_pane_g10

0x8bb0,	// (0x0001f6ce) popup_toolbar_window_cp1

0xec5d,	// (0x0002577b) clock_nsta_pane_cp_t1

0xec5d,	// (0x0002577b) clock_nsta_pane_cp_t2

0x0001,

0xfab6,	// (0x000265d4) clock_nsta_pane_cp_t

0x5aea,	// (0x0001c608) navi_navi_volume_pane_cp2_ParamLimits

0x5af9,	// (0x0001c617) popup_side_volume_key_window_g1_ParamLimits

0x5b05,	// (0x0001c623) popup_side_volume_key_window_g2_ParamLimits

0x5b14,	// (0x0001c632) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x00026247) popup_side_volume_key_window_g_ParamLimits

0x634f,	// (0x0001ce6d) fep_hwr_aid_pane

0x2d3d,	// (0x0001985b) bg_fep_hwr_top_pane_g4_ParamLimits

0xefcf,	// (0x00025aed) fep_hwr_top_pane_g1_ParamLimits

0xefe1,	// (0x00025aff) fep_hwr_top_pane_g2_ParamLimits

0x6408,	// (0x0001cf26) fep_hwr_top_pane_g3_ParamLimits

0xfb0b,	// (0x00026629) fep_hwr_top_pane_g_ParamLimits

0x641d,	// (0x0001cf3b) fep_hwr_top_text_pane_ParamLimits

0xdeaa,	// (0x000249c8) aid_touch_tab_arrow_arrow_2

0xdeb3,	// (0x000249d1) aid_touch_tab_arrow_left_2

0x6363,	// (0x0001ce81) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x639a,	// (0x0001ceb8) fep_hwr_prediction_pane

0xf136,	// (0x00025c54) fep_vkb_prediction_pane

0xa445,	// (0x00020f63) fep_vkb_side_pane_g3_ParamLimits

0xa445,	// (0x00020f63) fep_vkb_side_pane_g3

0xf1e6,	// (0x00025d04) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x00c9,	// (0x00016be7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x00d6,	// (0x00016bf4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb5,	// (0x000266d3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0be7,	// (0x00017705) fep_hwr_prediction_pane_g1

0x668f,	// (0x0001d1ad) fep_hwr_prediction_pane_g2

0x6697,	// (0x0001d1b5) fep_hwr_prediction_pane_g3

0x669f,	// (0x0001d1bd) fep_hwr_prediction_pane_g4

0x0003,

0xfcb1,	// (0x000267cf) fep_hwr_prediction_pane_g

0x0be7,	// (0x00017705) fep_vkb_prediction_pane_g1

0x0bf1,	// (0x0001770f) fep_vkb_prediction_pane_g2

0x0bf9,	// (0x00017717) fep_vkb_prediction_pane_g3

0x0c01,	// (0x0001771f) fep_vkb_prediction_pane_g4

0x0003,

0xfcba,	// (0x000267d8) fep_vkb_prediction_pane_g

0x618c,	// (0x0001ccaa) slider_set_pane_g3

0x61a0,	// (0x0001ccbe) slider_set_pane_g4

0x61b8,	// (0x0001ccd6) slider_set_pane_g5

0x618c,	// (0x0001ccaa) slider_set_pane_g6

0x61ce,	// (0x0001ccec) slider_set_pane_g7

0xe316,	// (0x00024e34) slider_form_pane_g3

0xe31f,	// (0x00024e3d) slider_form_pane_g4

0xe327,	// (0x00024e45) slider_form_pane_g5

0xe316,	// (0x00024e34) slider_form_pane_g6

0xa04c,	// (0x00020b6a) slider_form_pane_g7

0xe82b,	// (0x00025349) slider_set_pane_vc_g3

0xe834,	// (0x00025352) slider_set_pane_vc_g4

0xe83d,	// (0x0002535b) slider_set_pane_vc_g5

0xe82b,	// (0x00025349) slider_set_pane_vc_g6

0xe846,	// (0x00025364) slider_set_pane_vc_g7

0xe82b,	// (0x00025349) slider_form_pane_vc_g1

0xe834,	// (0x00025352) slider_form_pane_vc_g2

0xe83d,	// (0x0002535b) slider_form_pane_vc_g3

0xe82b,	// (0x00025349) slider_form_pane_vc_g4

0xe9d5,	// (0x000254f3) slider_form_pane_vc_g5

0x0004,

0xfa8f,	// (0x000265ad) slider_form_pane_vc_g

0xbb6f,	// (0x0002268d) main_idle_act3_pane

0x0c09,	// (0x00017727) ai3_links_pane

0xa6a7,	// (0x000211c5) popup_ai3_data_window_ParamLimits

0xa6a7,	// (0x000211c5) popup_ai3_data_window

0xbb6f,	// (0x0002268d) grid_ai3_links_pane

0xa6bf,	// (0x000211dd) cell_ai3_links_pane_ParamLimits

0xa6bf,	// (0x000211dd) cell_ai3_links_pane

0x0c42,	// (0x00017760) bg_popup_sub_pane_cp11

0x0c4f,	// (0x0001776d) cell_ai3_links_pane_g1

0xbb6f,	// (0x0002268d) bg_popup_sub_pane_cp12

0x0c74,	// (0x00017792) heading_ai3_data_pane

0x0c7c,	// (0x0001779a) list_ai3_gene_pane

0x0c88,	// (0x000177a6) popup_ai3_data_window_g1

0x0c90,	// (0x000177ae) heading_ai3_data_pane_g1

0x0c98,	// (0x000177b6) heading_ai3_data_pane_t1

0x0ca6,	// (0x000177c4) list_double_ai3_gene_pane_ParamLimits

0x0ca6,	// (0x000177c4) list_double_ai3_gene_pane

0x0cb3,	// (0x000177d1) list_single_ai3_gene_pane_ParamLimits

0x0cb3,	// (0x000177d1) list_single_ai3_gene_pane

0xef24,	// (0x00025a42) list_highlight_pane_cp7_ParamLimits

0xef24,	// (0x00025a42) list_highlight_pane_cp7

0x0cc0,	// (0x000177de) list_single_a13_gene_pane_t1_ParamLimits

0x0cc0,	// (0x000177de) list_single_a13_gene_pane_t1

0x0cd7,	// (0x000177f5) list_single_ai3_gene_pane_g1

0x0ce0,	// (0x000177fe) list_single_ai3_gene_pane_g2

0x0001,

0xfcc3,	// (0x000267e1) list_single_ai3_gene_pane_g

0x0ce8,	// (0x00017806) list_double_ai3_gene_pane_g1_ParamLimits

0x0ce8,	// (0x00017806) list_double_ai3_gene_pane_g1

0x0cf4,	// (0x00017812) list_double_ai3_gene_pane_t1_ParamLimits

0x0cf4,	// (0x00017812) list_double_ai3_gene_pane_t1

0x0d10,	// (0x0001782e) list_double_ai3_gene_pane_t2_ParamLimits

0x0d10,	// (0x0001782e) list_double_ai3_gene_pane_t2

0x0d25,	// (0x00017843) list_double_ai3_gene_pane_t3_ParamLimits

0x0d25,	// (0x00017843) list_double_ai3_gene_pane_t3

0x0002,

0xfcc8,	// (0x000267e6) list_double_ai3_gene_pane_t_ParamLimits

0xfcc8,	// (0x000267e6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x52e1,	// (0x0001bdff) aid_size_min_col_2

0xa691,	// (0x000211af) aid_size_min_msg_ParamLimits

0xa691,	// (0x000211af) aid_size_min_msg

0xa459,	// (0x00020f77) fep_vkb_top_text_pane_g2_ParamLimits

0xa459,	// (0x00020f77) fep_vkb_top_text_pane_g2

0x0001,

0xfb3b,	// (0x00026659) fep_vkb_top_text_pane_g_ParamLimits

0xfb3b,	// (0x00026659) fep_vkb_top_text_pane_g

0xbb6f,	// (0x0002268d) main_hc_apps_shell_pane

0x0d42,	// (0x00017860) grid_hc_apps_pane_ParamLimits

0x0d42,	// (0x00017860) grid_hc_apps_pane

0x0d51,	// (0x0001786f) list_hc_apps_pane

0x0d59,	// (0x00017877) scroll_pane_cp37_ParamLimits

0x0d59,	// (0x00017877) scroll_pane_cp37

0xa6d9,	// (0x000211f7) cell_hc_apps_pane_ParamLimits

0xa6d9,	// (0x000211f7) cell_hc_apps_pane

0xa799,	// (0x000212b7) cell_hc_apps_pane_g1_ParamLimits

0xa799,	// (0x000212b7) cell_hc_apps_pane_g1

0x0e46,	// (0x00017964) cell_hc_apps_pane_g2_ParamLimits

0x0e46,	// (0x00017964) cell_hc_apps_pane_g2

0x0e62,	// (0x00017980) cell_hc_apps_pane_g3_ParamLimits

0x0e62,	// (0x00017980) cell_hc_apps_pane_g3

0x0002,

0xfccf,	// (0x000267ed) cell_hc_apps_pane_g_ParamLimits

0xfccf,	// (0x000267ed) cell_hc_apps_pane_g

0xa7c6,	// (0x000212e4) cell_hc_apps_pane_t1_ParamLimits

0xa7c6,	// (0x000212e4) cell_hc_apps_pane_t1

0xbd12,	// (0x00022830) grid_highlight_pane_cp10_ParamLimits

0xbd12,	// (0x00022830) grid_highlight_pane_cp10

0xa804,	// (0x00021322) list_single_hc_apps_pane_ParamLimits

0xa804,	// (0x00021322) list_single_hc_apps_pane

0x0f37,	// (0x00017a55) list_single_hc_apps_pane_g1

0x53c9,	// (0x0001bee7) list_single_hc_apps_pane_g2

0x0001,

0xfcd6,	// (0x000267f4) list_single_hc_apps_pane_g

0x53e2,	// (0x0001bf00) list_single_hc_apps_pane_g2_copy1

0x53fe,	// (0x0001bf1c) list_single_hc_apps_pane_t1

0xbbdf,	// (0x000226fd) bg_set_opt_pane_cp_ParamLimits

0x5823,	// (0x0001c341) setting_slider_pane_t1_ParamLimits

0x583c,	// (0x0001c35a) setting_slider_pane_t2_ParamLimits

0x5855,	// (0x0001c373) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00026098) setting_slider_pane_t_ParamLimits

0x586c,	// (0x0001c38a) slider_set_pane_ParamLimits

0x5d92,	// (0x0001c8b0) control_pane_g5_ParamLimits

0x5d92,	// (0x0001c8b0) control_pane_g5

0xe2d8,	// (0x00024df6) slider_set_pane_g1_ParamLimits

0x6180,	// (0x0001cc9e) slider_set_pane_g2_ParamLimits

0x618c,	// (0x0001ccaa) slider_set_pane_g3_ParamLimits

0x61a0,	// (0x0001ccbe) slider_set_pane_g4_ParamLimits

0x61b8,	// (0x0001ccd6) slider_set_pane_g5_ParamLimits

0x618c,	// (0x0001ccaa) slider_set_pane_g6_ParamLimits

0x61ce,	// (0x0001ccec) slider_set_pane_g7_ParamLimits

0xf969,	// (0x00026487) slider_set_pane_g_ParamLimits

0xcaeb,	// (0x00023609) navi_icon_text_pane_ParamLimits

0x96bb,	// (0x000201d9) aid_fill_nsta_2_ParamLimits

0x96ef,	// (0x0002020d) aid_touch_tab_arrow_left_ParamLimits

0x9705,	// (0x00020223) aid_touch_tab_arrow_right_ParamLimits

0x97a0,	// (0x000202be) clock_nsta_pane_ParamLimits

0x9df4,	// (0x00020912) navi_icon_pane_g1_ParamLimits

0x9e00,	// (0x0002091e) navi_text_pane_t1_ParamLimits

0xa2a3,	// (0x00020dc1) navi_icon_text_pane_g1_ParamLimits

0xa2af,	// (0x00020dcd) navi_icon_text_pane_t1_ParamLimits

0x0f37,	// (0x00017a55) list_single_hc_apps_pane_g1_ParamLimits

0x53c9,	// (0x0001bee7) list_single_hc_apps_pane_g2_ParamLimits

0xfcd6,	// (0x000267f4) list_single_hc_apps_pane_g_ParamLimits

0x53e2,	// (0x0001bf00) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x53fe,	// (0x0001bf1c) list_single_hc_apps_pane_t1_ParamLimits

0x87ff,	// (0x0001f31d) popup_toolbar2_fixed_window_ParamLimits

0x87ff,	// (0x0001f31d) popup_toolbar2_fixed_window

0x9624,	// (0x00020142) popup_toolbar2_float_window

0xbb6f,	// (0x0002268d) bg_popup_sub_pane_cp27

0x0fb3,	// (0x00017ad1) grid_toolbar2_float_pane

0xbb6f,	// (0x0002268d) bg_popup_sub_pane_cp26

0x0fb3,	// (0x00017ad1) grid_toolbar2_fixed_pane

0xa837,	// (0x00021355) cell_toolbar2_fixed_pane_ParamLimits

0xa837,	// (0x00021355) cell_toolbar2_fixed_pane

0xa852,	// (0x00021370) cell_toolbar2_fixed_pane_g1

0x0fd5,	// (0x00017af3) toolbar2_fixed_button_pane

0xd1b5,	// (0x00023cd3) toolbar2_fixed_button_pane_g1

0xd1bd,	// (0x00023cdb) toolbar2_fixed_button_pane_g2

0xd1c5,	// (0x00023ce3) toolbar2_fixed_button_pane_g3

0xd1cd,	// (0x00023ceb) toolbar2_fixed_button_pane_g4

0xd1d5,	// (0x00023cf3) toolbar2_fixed_button_pane_g5

0xd1dd,	// (0x00023cfb) toolbar2_fixed_button_pane_g6

0xd1e5,	// (0x00023d03) toolbar2_fixed_button_pane_g7

0xd1ed,	// (0x00023d0b) toolbar2_fixed_button_pane_g8

0xd1f5,	// (0x00023d13) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x00026389) toolbar2_fixed_button_pane_g

0x0fdd,	// (0x00017afb) cell_toolbar2_float_pane_ParamLimits

0x0fdd,	// (0x00017afb) cell_toolbar2_float_pane

0x0fee,	// (0x00017b0c) cell_toolbar2_float_pane_g1

0x0fd5,	// (0x00017af3) toolbar2_fixed_button_pane_cp

0xa40c,	// (0x00020f2a) fep_vkb_accented_list_pane_ParamLimits

0xa40c,	// (0x00020f2a) fep_vkb_accented_list_pane

0x656b,	// (0x0001d089) bg_popup_fep_shadow_pane_g9

0xcc6d,	// (0x0002378b) bg_popup_fep_shadow_pane_cp3

0xc32c,	// (0x00022e4a) list_accented_list_pane

0x0ff7,	// (0x00017b15) list_single_accented_list_pane_ParamLimits

0x0ff7,	// (0x00017b15) list_single_accented_list_pane

0xcc6d,	// (0x0002378b) list_highlight_pane_cp10

0x1008,	// (0x00017b26) list_single_accented_list_pane_t1

0x954e,	// (0x0002006c) popup_slider_window_ParamLimits

0x954e,	// (0x0002006c) popup_slider_window

0x0ad6,	// (0x000175f4) aid_indentation_list_msg

0xa94b,	// (0x00021469) bg_popup_window_pane_cp19

0x112c,	// (0x00017c4a) popup_slider_window_g1

0x1148,	// (0x00017c66) popup_slider_window_g2

0x1164,	// (0x00017c82) popup_slider_window_g3

0x0005,

0xfcdb,	// (0x000267f9) popup_slider_window_g

0x11c0,	// (0x00017cde) popup_slider_window_t1

0x1234,	// (0x00017d52) small_volume_slider_vertical_pane

0xef5f,	// (0x00025a7d) small_volume_slider_vertical_pane_g1

0xef5f,	// (0x00025a7d) small_volume_slider_vertical_pane_g2

0x1250,	// (0x00017d6e) small_volume_slider_vertical_pane_g3

0x0002,

0xfced,	// (0x0002680b) small_volume_slider_vertical_pane_g

0x876d,	// (0x0001f28b) area_side_right_pane_ParamLimits

0x876d,	// (0x0001f28b) area_side_right_pane

0xaa03,	// (0x00021521) aid_size_side_button_ParamLimits

0xaa03,	// (0x00021521) aid_size_side_button

0xaa1c,	// (0x0002153a) grid_sctrl_middle_pane_ParamLimits

0xaa1c,	// (0x0002153a) grid_sctrl_middle_pane

0x66db,	// (0x0001d1f9) sctrl_sk_bottom_pane

0x66ec,	// (0x0001d20a) sctrl_sk_top_pane

0x66fe,	// (0x0001d21c) aid_touch_sctrl_top

0xbd12,	// (0x00022830) bg_sctrl_sk_pane_ParamLimits

0xbd12,	// (0x00022830) bg_sctrl_sk_pane

0x670b,	// (0x0001d229) sctrl_sk_top_pane_g1

0x6718,	// (0x0001d236) sctrl_sk_top_pane_t1

0x66fe,	// (0x0001d21c) aid_touch_sctrl_bottom

0xbd12,	// (0x00022830) bg_sctrl_sk_pane_cp_ParamLimits

0xbd12,	// (0x00022830) bg_sctrl_sk_pane_cp

0x6733,	// (0x0001d251) sctrl_sk_bottom_pane_g1

0x6718,	// (0x0001d236) sctrl_sk_bottom_pane_t1

0xaa36,	// (0x00021554) cell_sctrl_middle_pane_ParamLimits

0xaa36,	// (0x00021554) cell_sctrl_middle_pane

0xaa47,	// (0x00021565) aid_touch_sctrl_middle_ParamLimits

0xaa47,	// (0x00021565) aid_touch_sctrl_middle

0xaa54,	// (0x00021572) bg_sctrl_middle_pane_ParamLimits

0xaa54,	// (0x00021572) bg_sctrl_middle_pane

0x12d8,	// (0x00017df6) cell_sctrl_middle_pane_g1_ParamLimits

0x12d8,	// (0x00017df6) cell_sctrl_middle_pane_g1

0xaa62,	// (0x00021580) cell_sctrl_middle_pane_g2_ParamLimits

0xaa62,	// (0x00021580) cell_sctrl_middle_pane_g2

0x0001,

0xfcf9,	// (0x00026817) cell_sctrl_middle_pane_g_ParamLimits

0xfcf9,	// (0x00026817) cell_sctrl_middle_pane_g

0xd1b5,	// (0x00023cd3) bg_sctrl_middle_pane_g1

0xd1bd,	// (0x00023cdb) bg_sctrl_middle_pane_g2

0xd1c5,	// (0x00023ce3) bg_sctrl_middle_pane_g3

0xd1cd,	// (0x00023ceb) bg_sctrl_middle_pane_g4

0xd1d5,	// (0x00023cf3) bg_sctrl_middle_pane_g5

0xd1dd,	// (0x00023cfb) bg_sctrl_middle_pane_g6

0xd1e5,	// (0x00023d03) bg_sctrl_middle_pane_g7

0xd1ed,	// (0x00023d0b) bg_sctrl_middle_pane_g8

0x0007,

0xfcfe,	// (0x0002681c) bg_sctrl_middle_pane_g

0xd1f5,	// (0x00023d13) bg_sctrl_middle_pane_g8_copy1

0xd1b5,	// (0x00023cd3) bg_sctrl_sk_pane_g1

0xd1bd,	// (0x00023cdb) bg_sctrl_sk_pane_g2

0xd1c5,	// (0x00023ce3) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x00026389) bg_sctrl_sk_pane_g

0xc15f,	// (0x00022c7d) aid_size_touch_scroll_bar

0xd1cd,	// (0x00023ceb) bg_sctrl_sk_pane_g4

0xd1d5,	// (0x00023cf3) bg_sctrl_sk_pane_g5

0xd1dd,	// (0x00023cfb) bg_sctrl_sk_pane_g6

0xd1e5,	// (0x00023d03) bg_sctrl_sk_pane_g7

0xd1ed,	// (0x00023d0b) bg_sctrl_sk_pane_g8

0xd1f5,	// (0x00023d13) bg_sctrl_sk_pane_g9

0xcee9,	// (0x00023a07) popup_fep_china_hwr2_fs_candidate_window

0x9088,	// (0x0001fba6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9088,	// (0x0001fba6) popup_fep_china_hwr2_fs_control_window

0xf1e6,	// (0x00025d04) sctrl_sk_top_pane_g2

0x0001,

0xfcf4,	// (0x00026812) sctrl_sk_top_pane_g

0xaa6e,	// (0x0002158c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xaa6e,	// (0x0002158c) aid_fep_china_hwr2_fs_cell

0xaa82,	// (0x000215a0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xaa82,	// (0x000215a0) bg_popup_fep_shadow_pane_cp4

0xaa99,	// (0x000215b7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xaa99,	// (0x000215b7) bg_popup_fep_shadow_pane_cp5

0xaaab,	// (0x000215c9) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xaaab,	// (0x000215c9) popup_fep_china_hwr2_fs_control_bar_grid

0xaabf,	// (0x000215dd) popup_fep_china_hwr2_fs_control_funtion_grid

0x12ac,	// (0x00017dca) aid_fep_china_hwr2_fs_candi_cell

0xbb6f,	// (0x0002268d) bg_popup_fep_shadow_pane_cp6

0x12b6,	// (0x00017dd4) popup_fep_china_hwr2_fs_candidate_grid

0xaac7,	// (0x000215e5) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xaac7,	// (0x000215e5) cell_fep_china_hwr2_fs_funtion_grid

0xef5f,	// (0x00025a7d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x12d8,	// (0x00017df6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x12d8,	// (0x00017df6) cell_fep_china_hwr2_fs_funtion_grid_g1

0x12e6,	// (0x00017e04) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x12e6,	// (0x00017e04) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0f,	// (0x0002682d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0f,	// (0x0002682d) cell_fep_china_hwr2_fs_funtion_grid_g

0xaadf,	// (0x000215fd) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xaadf,	// (0x000215fd) cell_fep_china_hwr2_fs_funtion_grid_t1

0xaaf4,	// (0x00021612) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xaaf4,	// (0x00021612) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd14,	// (0x00026832) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd14,	// (0x00026832) cell_fep_china_hwr2_fs_funtion_grid_t

0x132d,	// (0x00017e4b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x1335,	// (0x00017e53) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x133d,	// (0x00017e5b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd19,	// (0x00026837) popup_fep_china_hwr2_fs_control_bar_grid_g

0x1345,	// (0x00017e63) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x1345,	// (0x00017e63) cell_fep_china_hwr2_fs_candidate_grid

0x135e,	// (0x00017e7c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x1366,	// (0x00017e84) popup_fep_china_hwr2_fs_candidate_grid_g21

0xef5f,	// (0x00025a7d) cell_fep_china_hwr2_fs_candidate_grid_g1

0xef5f,	// (0x00025a7d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb40,	// (0x0002665e) cell_fep_china_hwr2_fs_candidate_grid_g

0x136e,	// (0x00017e8c) cell_fep_china_hwr2_fs_candidate_grid_t1

0xd004,	// (0x00023b22) clock_nsta_pane_cp_24_ParamLimits

0xd004,	// (0x00023b22) clock_nsta_pane_cp_24

0xd06c,	// (0x00023b8a) indicator_nsta_pane_cp_24_ParamLimits

0xd06c,	// (0x00023b8a) indicator_nsta_pane_cp_24

0xddb4,	// (0x000248d2) heading_pane_g1

0x0001,

0xf8d0,	// (0x000263ee) heading_pane_g

0xe418,	// (0x00024f36) grid_sct_catagory_button_pane

0xe3d4,	// (0x00024ef2) scroll_pane_cp5_ParamLimits

0xecc8,	// (0x000257e6) button_value_adjust_pane_cp5_ParamLimits

0xecc8,	// (0x000257e6) button_value_adjust_pane_cp5

0xed86,	// (0x000258a4) form2_midp_time_pane_ParamLimits

0x137c,	// (0x00017e9a) cell_sct_catagory_button_pane_ParamLimits

0x137c,	// (0x00017e9a) cell_sct_catagory_button_pane

0xef24,	// (0x00025a42) bg_button_pane_cp01_ParamLimits

0xef24,	// (0x00025a42) bg_button_pane_cp01

0xef5f,	// (0x00025a7d) cell_sct_catagory_button_pane_g1

0x95c7,	// (0x000200e5) popup_tb_extension_window

0xab10,	// (0x0002162e) aid_size_cell_ext_ParamLimits

0xab10,	// (0x0002162e) aid_size_cell_ext

0xbfa1,	// (0x00022abf) bg_tb_trans_pane_cp1_ParamLimits

0xbfa1,	// (0x00022abf) bg_tb_trans_pane_cp1

0xab36,	// (0x00021654) grid_tb_ext_pane_ParamLimits

0xab36,	// (0x00021654) grid_tb_ext_pane

0xab76,	// (0x00021694) cell_tb_ext_pane_ParamLimits

0xab76,	// (0x00021694) cell_tb_ext_pane

0xab9e,	// (0x000216bc) cell_tb_ext_pane_g1_ParamLimits

0xab9e,	// (0x000216bc) cell_tb_ext_pane_g1

0x1414,	// (0x00017f32) cell_tb_ext_pane_t1

0xbd12,	// (0x00022830) list_highlight_pane_cp11_ParamLimits

0xbd12,	// (0x00022830) list_highlight_pane_cp11

0x575c,	// (0x0001c27a) popup_uni_indicator_window_ParamLimits

0x575c,	// (0x0001c27a) popup_uni_indicator_window

0xc226,	// (0x00022d44) bg_popup_sub_pane_cp14

0x142f,	// (0x00017f4d) list_uniindi_pane

0x143b,	// (0x00017f59) uniindi_top_pane

0xbd12,	// (0x00022830) bg_uniindi_top_pane

0x145a,	// (0x00017f78) uniindi_top_pane_g1

0x1470,	// (0x00017f8e) uniindi_top_pane_g2

0x0003,

0xfd20,	// (0x0002683e) uniindi_top_pane_g

0x149a,	// (0x00017fb8) uniindi_top_pane_t1

0x14c4,	// (0x00017fe2) list_single_uniindi_pane_ParamLimits

0x14c4,	// (0x00017fe2) list_single_uniindi_pane

0xef5f,	// (0x00025a7d) bg_uniindi_top_pane_g1

0x14d6,	// (0x00017ff4) list_single_uniindi_pane_g1

0x14e9,	// (0x00018007) list_single_uniindi_pane_t1

0xbb6f,	// (0x0002268d) control_bg_pane

0x150e,	// (0x0001802c) bg_sctrl_sk_pane_cp1

0x1517,	// (0x00018035) bg_sctrl_sk_pane_cp2

0x1520,	// (0x0001803e) control_bg_pane_g1

0x1529,	// (0x00018047) control_bg_pane_g2

0x0001,

0xfd29,	// (0x00026847) control_bg_pane_g

0xeb9f,	// (0x000256bd) cell_indicator_nsta_pane_g1_ParamLimits

0xa20a,	// (0x00020d28) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa4,	// (0x000265c2) cell_indicator_nsta_pane_g_ParamLimits

0x509e,	// (0x0001bbbc) form2_midp_time_pane_t1_ParamLimits

0xf396,	// (0x00025eb4) main_idle_act4_pane_ParamLimits

0xf396,	// (0x00025eb4) main_idle_act4_pane

0x95c7,	// (0x000200e5) popup_tb_extension_window_ParamLimits

0xab5d,	// (0x0002167b) tb_ext_find_pane_ParamLimits

0xab5d,	// (0x0002167b) tb_ext_find_pane

0x1532,	// (0x00018050) ai_gene_pane_1_cp1

0xccef,	// (0x0002380d) ai_gene_pane_2_cp1

0x153a,	// (0x00018058) list_single_idle_plugin_calendar_pane

0x1543,	// (0x00018061) list_single_idle_plugin_notification_pane

0x154c,	// (0x0001806a) list_single_idle_plugin_player_pane

0xabbb,	// (0x000216d9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xabbb,	// (0x000216d9) list_single_idle_plugin_shortcut_pane

0xabe3,	// (0x00021701) main_idle_act4_pane_t1

0xabf9,	// (0x00021717) main_idle_act4_pane_t2

0x0001,

0xfd2e,	// (0x0002684c) main_idle_act4_pane_t

0xac11,	// (0x0002172f) middle_sk_idle_act4_pane_ParamLimits

0xac11,	// (0x0002172f) middle_sk_idle_act4_pane

0xac2d,	// (0x0002174b) popup_clock_digital_analogue_window_cp2

0xac54,	// (0x00021772) shortcut_wheel_idle_act4_pane_ParamLimits

0xac54,	// (0x00021772) shortcut_wheel_idle_act4_pane

0xef5f,	// (0x00025a7d) shortcut_wheel_idle_act4_pane_g1

0xef5f,	// (0x00025a7d) shortcut_wheel_idle_act4_pane_g2

0xef5f,	// (0x00025a7d) shortcut_wheel_idle_act4_pane_g3

0xef5f,	// (0x00025a7d) shortcut_wheel_idle_act4_pane_g4

0xef5f,	// (0x00025a7d) shortcut_wheel_idle_act4_pane_g5

0x15df,	// (0x000180fd) shortcut_wheel_idle_act4_pane_g6

0x15e7,	// (0x00018105) shortcut_wheel_idle_act4_pane_g7

0x15ef,	// (0x0001810d) shortcut_wheel_idle_act4_pane_g8

0x15f7,	// (0x00018115) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd33,	// (0x00026851) shortcut_wheel_idle_act4_pane_g

0x2d3d,	// (0x0001985b) middle_sk_idle_act4_pane_g1_ParamLimits

0x2d3d,	// (0x0001985b) middle_sk_idle_act4_pane_g1

0xacd1,	// (0x000217ef) middle_sk_idle_act4_pane_g2_ParamLimits

0xacd1,	// (0x000217ef) middle_sk_idle_act4_pane_g2

0x0001,

0xfd56,	// (0x00026874) middle_sk_idle_act4_pane_g_ParamLimits

0xfd56,	// (0x00026874) middle_sk_idle_act4_pane_g

0xace9,	// (0x00021807) middle_sk_idle_act4_pane_t1_ParamLimits

0xace9,	// (0x00021807) middle_sk_idle_act4_pane_t1

0xad18,	// (0x00021836) grid_ai_shortcut_pane_ParamLimits

0xad18,	// (0x00021836) grid_ai_shortcut_pane

0xad35,	// (0x00021853) list_highlight_pane_cp16_ParamLimits

0xad35,	// (0x00021853) list_highlight_pane_cp16

0xad42,	// (0x00021860) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xad42,	// (0x00021860) list_single_idle_plugin_shortcut_pane_g1

0xad4e,	// (0x0002186c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xad4e,	// (0x0002186c) list_single_idle_plugin_shortcut_pane_g2

0xad6a,	// (0x00021888) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xad6a,	// (0x00021888) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5b,	// (0x00026879) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5b,	// (0x00026879) list_single_idle_plugin_shortcut_pane_g

0xad7f,	// (0x0002189d) cell_ai_shortcut_pane_ParamLimits

0xad7f,	// (0x0002189d) cell_ai_shortcut_pane

0xad95,	// (0x000218b3) cell_ai_shortcut_pane_g1_ParamLimits

0xad95,	// (0x000218b3) cell_ai_shortcut_pane_g1

0x1532,	// (0x00018050) ai_gene_pane_1_cp2

0x1724,	// (0x00018242) ai_gene_pane_2_cp2

0x172c,	// (0x0001824a) list_highlight_pane_cp15

0x1735,	// (0x00018253) list_single_idle_plugin_calendar_pane_g1

0x172c,	// (0x0001824a) list_highlight_pane_cp17

0x173d,	// (0x0001825b) list_single_idle_plugin_calendar_pane_g1_copy1

0x1745,	// (0x00018263) list_single_idle_plugin_player_pane_g1

0xe62d,	// (0x0002514b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd62,	// (0x00026880) list_single_idle_plugin_player_pane_g

0x174d,	// (0x0001826b) list_single_idle_plugin_player_pane_t1

0x175b,	// (0x00018279) list_single_idle_plugin_player_pane_t2

0x1769,	// (0x00018287) list_single_idle_plugin_player_pane_t3

0x1777,	// (0x00018295) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd67,	// (0x00026885) list_single_idle_plugin_player_pane_t

0x1785,	// (0x000182a3) wait_bar_pane_cp15

0x178d,	// (0x000182ab) grid_ai_notification_pane

0xe62d,	// (0x0002514b) list_single_idle_plugin_notification_pane_g1

0xadb7,	// (0x000218d5) cell_ai_notification_pane_ParamLimits

0xadb7,	// (0x000218d5) cell_ai_notification_pane

0x17a3,	// (0x000182c1) cell_ai_notification_pane_g1

0x17ab,	// (0x000182c9) cell_ai_notification_pane_t1

0xadc4,	// (0x000218e2) tb_ext_find_button_pane

0xadcc,	// (0x000218ea) tb_ext_find_pane_g1

0xadd4,	// (0x000218f2) tb_ext_find_pane_t1

0xc75e,	// (0x0002327c) tb_ext_find_button_pane_g1

0x17d7,	// (0x000182f5) tb_ext_find_button_pane_g2

0x0001,

0xfd70,	// (0x0002688e) tb_ext_find_button_pane_g

0xabe3,	// (0x00021701) main_idle_act4_pane_t1_ParamLimits

0xabf9,	// (0x00021717) main_idle_act4_pane_t2_ParamLimits

0xfd2e,	// (0x0002684c) main_idle_act4_pane_t_ParamLimits

0xac2d,	// (0x0002174b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xac44,	// (0x00021762) sat_plugin_idle_act4_pane_ParamLimits

0xac44,	// (0x00021762) sat_plugin_idle_act4_pane

0xade2,	// (0x00021900) sat_plugin_idle_act4_pane_t1_ParamLimits

0xade2,	// (0x00021900) sat_plugin_idle_act4_pane_t1

0xadfa,	// (0x00021918) sat_plugin_idle_act4_pane_t2_ParamLimits

0xadfa,	// (0x00021918) sat_plugin_idle_act4_pane_t2

0xae12,	// (0x00021930) sat_plugin_idle_act4_pane_t3_ParamLimits

0xae12,	// (0x00021930) sat_plugin_idle_act4_pane_t3

0xae2a,	// (0x00021948) sat_plugin_idle_act4_pane_t4_ParamLimits

0xae2a,	// (0x00021948) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd75,	// (0x00026893) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd75,	// (0x00026893) sat_plugin_idle_act4_pane_t

0x56a5,	// (0x0001c1c3) popup_battery_window_ParamLimits

0x56a5,	// (0x0001c1c3) popup_battery_window

0xbd12,	// (0x00022830) bg_popup_sub_pane_cp25_ParamLimits

0xbd12,	// (0x00022830) bg_popup_sub_pane_cp25

0x182c,	// (0x0001834a) popup_battery_window_g1_ParamLimits

0x182c,	// (0x0001834a) popup_battery_window_g1

0x1838,	// (0x00018356) popup_battery_window_t1_ParamLimits

0x1838,	// (0x00018356) popup_battery_window_t1

0x184a,	// (0x00018368) popup_battery_window_t2_ParamLimits

0x184a,	// (0x00018368) popup_battery_window_t2

0x0001,

0xfd7e,	// (0x0002689c) popup_battery_window_t_ParamLimits

0xfd7e,	// (0x0002689c) popup_battery_window_t

0x8ddf,	// (0x0001f8fd) midp_canvas_pane_ParamLimits

0x8e3c,	// (0x0001f95a) midp_keypad_pane_ParamLimits

0x8e3c,	// (0x0001f95a) midp_keypad_pane

0xc37d,	// (0x00022e9b) main_midp_pane_ParamLimits

0xec7b,	// (0x00025799) signal_pane_g2_cp_ParamLimits

0xae42,	// (0x00021960) aid_size_cell_midp_keypad_ParamLimits

0xae42,	// (0x00021960) aid_size_cell_midp_keypad

0xae60,	// (0x0002197e) midp_keyp_game_grid_pane_ParamLimits

0xae60,	// (0x0002197e) midp_keyp_game_grid_pane

0xae87,	// (0x000219a5) midp_keyp_rocker_pane_ParamLimits

0xae87,	// (0x000219a5) midp_keyp_rocker_pane

0xaee0,	// (0x000219fe) midp_keyp_sk_left_pane_ParamLimits

0xaee0,	// (0x000219fe) midp_keyp_sk_left_pane

0xaf34,	// (0x00021a52) midp_keyp_sk_right_pane_ParamLimits

0xaf34,	// (0x00021a52) midp_keyp_sk_right_pane

0xbb6f,	// (0x0002268d) bg_button_pane_cp03

0xaf88,	// (0x00021aa6) midp_keyp_sk_left_pane_g1

0xbb6f,	// (0x0002268d) bg_button_pane_cp04

0xaf88,	// (0x00021aa6) midp_keyp_sk_right_pane_g1

0xef5f,	// (0x00025a7d) midp_keyp_rocker_pane_g1

0xaf91,	// (0x00021aaf) keyp_game_cell_pane_ParamLimits

0xaf91,	// (0x00021aaf) keyp_game_cell_pane

0xbb6f,	// (0x0002268d) bg_button_pane_cp02

0xafb5,	// (0x00021ad3) keyp_game_cell_pane_g1

0x87af,	// (0x0001f2cd) popup_fep_vkb2_window_ParamLimits

0x87af,	// (0x0001f2cd) popup_fep_vkb2_window

0xafbe,	// (0x00021adc) aid_size_cell_vkb2_ParamLimits

0xafbe,	// (0x00021adc) aid_size_cell_vkb2

0xaff4,	// (0x00021b12) popup_fep_vkb2_window_g1_ParamLimits

0xaff4,	// (0x00021b12) popup_fep_vkb2_window_g1

0xb03b,	// (0x00021b59) vkb2_area_bottom_pane_ParamLimits

0xb03b,	// (0x00021b59) vkb2_area_bottom_pane

0xb08f,	// (0x00021bad) vkb2_area_keypad_pane_ParamLimits

0xb08f,	// (0x00021bad) vkb2_area_keypad_pane

0xb0d7,	// (0x00021bf5) vkb2_area_top_pane_ParamLimits

0xb0d7,	// (0x00021bf5) vkb2_area_top_pane

0xb15d,	// (0x00021c7b) vkb2_top_entry_pane_ParamLimits

0xb15d,	// (0x00021c7b) vkb2_top_entry_pane

0xb18a,	// (0x00021ca8) vkb2_top_grid_left_pane_ParamLimits

0xb18a,	// (0x00021ca8) vkb2_top_grid_left_pane

0xb1aa,	// (0x00021cc8) vkb2_top_grid_right_pane_ParamLimits

0xb1aa,	// (0x00021cc8) vkb2_top_grid_right_pane

0x698d,	// (0x0001d4ab) vkb2_cell_keypad_pane_ParamLimits

0x698d,	// (0x0001d4ab) vkb2_cell_keypad_pane

0xb1f0,	// (0x00021d0e) vkb2_area_bottom_grid_pane_ParamLimits

0xb1f0,	// (0x00021d0e) vkb2_area_bottom_grid_pane

0xb21a,	// (0x00021d38) vkb2_area_bottom_pane_g1_ParamLimits

0xb21a,	// (0x00021d38) vkb2_area_bottom_pane_g1

0xb240,	// (0x00021d5e) vkb2_area_bottom_pane_g2_ParamLimits

0xb240,	// (0x00021d5e) vkb2_area_bottom_pane_g2

0xb271,	// (0x00021d8f) vkb2_area_bottom_pane_g3_ParamLimits

0xb271,	// (0x00021d8f) vkb2_area_bottom_pane_g3

0x0002,

0xfd83,	// (0x000268a1) vkb2_area_bottom_pane_g_ParamLimits

0xfd83,	// (0x000268a1) vkb2_area_bottom_pane_g

0x6b37,	// (0x0001d655) vkb2_top_cell_left_pane_ParamLimits

0x6b37,	// (0x0001d655) vkb2_top_cell_left_pane

0xb2db,	// (0x00021df9) vkb2_top_entry_pane_g1_ParamLimits

0xb2db,	// (0x00021df9) vkb2_top_entry_pane_g1

0xb2e9,	// (0x00021e07) vkb2_top_entry_pane_t1_ParamLimits

0xb2e9,	// (0x00021e07) vkb2_top_entry_pane_t1

0x19fb,	// (0x00018519) vkb2_top_entry_pane_t2_ParamLimits

0x19fb,	// (0x00018519) vkb2_top_entry_pane_t2

0x1a2d,	// (0x0001854b) vkb2_top_entry_pane_t3_ParamLimits

0x1a2d,	// (0x0001854b) vkb2_top_entry_pane_t3

0x0002,

0xfd8a,	// (0x000268a8) vkb2_top_entry_pane_t_ParamLimits

0xfd8a,	// (0x000268a8) vkb2_top_entry_pane_t

0xb322,	// (0x00021e40) vkb2_top_grid_right_pane_g1_ParamLimits

0xb322,	// (0x00021e40) vkb2_top_grid_right_pane_g1

0x6b9a,	// (0x0001d6b8) vkb2_top_grid_right_pane_g2_ParamLimits

0x6b9a,	// (0x0001d6b8) vkb2_top_grid_right_pane_g2

0x6bb2,	// (0x0001d6d0) vkb2_top_grid_right_pane_g3_ParamLimits

0x6bb2,	// (0x0001d6d0) vkb2_top_grid_right_pane_g3

0xb338,	// (0x00021e56) vkb2_top_grid_right_pane_g4_ParamLimits

0xb338,	// (0x00021e56) vkb2_top_grid_right_pane_g4

0x0003,

0xfd91,	// (0x000268af) vkb2_top_grid_right_pane_g_ParamLimits

0xfd91,	// (0x000268af) vkb2_top_grid_right_pane_g

0x6be0,	// (0x0001d6fe) vkb2_top_cell_left_pane_g1

0x6bf7,	// (0x0001d715) vkb2_cell_keypad_pane_g1_ParamLimits

0x6bf7,	// (0x0001d715) vkb2_cell_keypad_pane_g1

0x2d4b,	// (0x00019869) vkb2_cell_keypad_pane_t1_ParamLimits

0x2d4b,	// (0x00019869) vkb2_cell_keypad_pane_t1

0x6c05,	// (0x0001d723) vkb2_cell_bottom_grid_pane_ParamLimits

0x6c05,	// (0x0001d723) vkb2_cell_bottom_grid_pane

0x6c3e,	// (0x0001d75c) vkb2_cell_bottom_grid_pane_g1

0xac75,	// (0x00021793) aid_call2_pane_cp02

0xac7d,	// (0x0002179b) aid_call_pane_cp02

0xac85,	// (0x000217a3) clock_digital_number_pane_cp10

0xac8d,	// (0x000217ab) clock_digital_number_pane_cp11

0xac95,	// (0x000217b3) clock_digital_number_pane_cp12

0xac9d,	// (0x000217bb) clock_digital_number_pane_cp13

0xaca5,	// (0x000217c3) clock_digital_separator_pane_cp10

0xc75e,	// (0x0002327c) popup_clock_digital_analogue_window_cp2_g1

0xc75e,	// (0x0002327c) popup_clock_digital_analogue_window_cp2_g2

0xacad,	// (0x000217cb) popup_clock_digital_analogue_window_cp2_g3

0xc75e,	// (0x0002327c) popup_clock_digital_analogue_window_cp2_g4

0xacad,	// (0x000217cb) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd46,	// (0x00026864) popup_clock_digital_analogue_window_cp2_g

0xacb5,	// (0x000217d3) popup_clock_digital_analogue_window_cp2_t1

0xacc3,	// (0x000217e1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd51,	// (0x0002686f) popup_clock_digital_analogue_window_cp2_t

0xef5f,	// (0x00025a7d) clock_digital_number_pane_cp10_g1

0xef5f,	// (0x00025a7d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb40,	// (0x0002665e) clock_digital_number_pane_cp10_g

0xef5f,	// (0x00025a7d) clock_digital_separator_pane_cp10_g1

0xef5f,	// (0x00025a7d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb40,	// (0x0002665e) clock_digital_separator_pane_cp10_g

0x147c,	// (0x00017f9a) uniindi_top_pane_g3

0x148d,	// (0x00017fab) uniindi_top_pane_g4

0x6a18,	// (0x0001d536) vkb2_row_keypad_pane_ParamLimits

0x6a18,	// (0x0001d536) vkb2_row_keypad_pane

0x6c5e,	// (0x0001d77c) vkb2_cell_t_keypad_pane_ParamLimits

0x6c5e,	// (0x0001d77c) vkb2_cell_t_keypad_pane

0x6c6e,	// (0x0001d78c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6c6e,	// (0x0001d78c) vkb2_cell_t_keypad_pane_cp08

0x6c81,	// (0x0001d79f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6c81,	// (0x0001d79f) vkb2_cell_t_keypad_pane_cp09

0x6c95,	// (0x0001d7b3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6c95,	// (0x0001d7b3) vkb2_cell_t_keypad_pane_cp01

0x6ca6,	// (0x0001d7c4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6ca6,	// (0x0001d7c4) vkb2_cell_t_keypad_pane_cp02

0x6cb7,	// (0x0001d7d5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6cb7,	// (0x0001d7d5) vkb2_cell_t_keypad_pane_cp03

0x6cc8,	// (0x0001d7e6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6cc8,	// (0x0001d7e6) vkb2_cell_t_keypad_pane_cp04

0x6cd9,	// (0x0001d7f7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6cd9,	// (0x0001d7f7) vkb2_cell_t_keypad_pane_cp05

0x6cea,	// (0x0001d808) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6cea,	// (0x0001d808) vkb2_cell_t_keypad_pane_cp06

0x6cfb,	// (0x0001d819) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6cfb,	// (0x0001d819) vkb2_cell_t_keypad_pane_cp07

0x6d0c,	// (0x0001d82a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6d0c,	// (0x0001d82a) vkb2_cell_t_keypad_pane_cp10

0xf1e6,	// (0x00025d04) vkb2_cell_t_keypad_pane_g1

0x2d62,	// (0x00019880) vkb2_cell_t_keypad_pane_t1

0xbb6f,	// (0x0002268d) popup_grid_graphic2_window

0xb34e,	// (0x00021e6c) aid_size_cell_graphic2_ParamLimits

0xb34e,	// (0x00021e6c) aid_size_cell_graphic2

0xd762,	// (0x00024280) bg_popup_window_pane_cp21_ParamLimits

0xd762,	// (0x00024280) bg_popup_window_pane_cp21

0xb380,	// (0x00021e9e) graphic2_pages_pane_ParamLimits

0xb380,	// (0x00021e9e) graphic2_pages_pane

0xb3d6,	// (0x00021ef4) grid_graphic2_control_pane_ParamLimits

0xb3d6,	// (0x00021ef4) grid_graphic2_control_pane

0xb40a,	// (0x00021f28) grid_graphic2_pane_ParamLimits

0xb40a,	// (0x00021f28) grid_graphic2_pane

0xb47d,	// (0x00021f9b) cell_graphic2_pane

0xbb6f,	// (0x0002268d) main_comp_mode_pane

0x0c7c,	// (0x0001779a) list_ai3_gene_pane_ParamLimits

0xa94b,	// (0x00021469) bg_popup_window_pane_cp19_ParamLimits

0x10ce,	// (0x00017bec) bg_touch_area_indi_pane_ParamLimits

0x10ce,	// (0x00017bec) bg_touch_area_indi_pane

0x10e4,	// (0x00017c02) bg_touch_area_indi_pane_cp01_ParamLimits

0x10e4,	// (0x00017c02) bg_touch_area_indi_pane_cp01

0x10fa,	// (0x00017c18) bg_touch_area_indi_pane_cp02_ParamLimits

0x10fa,	// (0x00017c18) bg_touch_area_indi_pane_cp02

0x1112,	// (0x00017c30) bg_touch_area_indi_pane_cp03_ParamLimits

0x1112,	// (0x00017c30) bg_touch_area_indi_pane_cp03

0x112c,	// (0x00017c4a) popup_slider_window_g1_ParamLimits

0x1148,	// (0x00017c66) popup_slider_window_g2_ParamLimits

0x1164,	// (0x00017c82) popup_slider_window_g3_ParamLimits

0xfcdb,	// (0x000267f9) popup_slider_window_g_ParamLimits

0x11c0,	// (0x00017cde) popup_slider_window_t1_ParamLimits

0x1234,	// (0x00017d52) small_volume_slider_vertical_pane_ParamLimits

0xb47d,	// (0x00021f9b) cell_graphic2_pane_ParamLimits

0xb4d8,	// (0x00021ff6) bg_button_pane_cp10_ParamLimits

0xb4d8,	// (0x00021ff6) bg_button_pane_cp10

0xb4eb,	// (0x00022009) bg_button_pane_cp11_ParamLimits

0xb4eb,	// (0x00022009) bg_button_pane_cp11

0xb4fe,	// (0x0002201c) graphic2_pages_pane_g1_ParamLimits

0xb4fe,	// (0x0002201c) graphic2_pages_pane_g1

0xb519,	// (0x00022037) graphic2_pages_pane_g2_ParamLimits

0xb519,	// (0x00022037) graphic2_pages_pane_g2

0x0001,

0xfd9f,	// (0x000268bd) graphic2_pages_pane_g_ParamLimits

0xfd9f,	// (0x000268bd) graphic2_pages_pane_g

0xb531,	// (0x0002204f) graphic2_pages_pane_t1_ParamLimits

0xb531,	// (0x0002204f) graphic2_pages_pane_t1

0xb549,	// (0x00022067) cell_graphic2_control_pane_ParamLimits

0xb549,	// (0x00022067) cell_graphic2_control_pane

0xb563,	// (0x00022081) cell_graphic2_pane_g1_ParamLimits

0xb563,	// (0x00022081) cell_graphic2_pane_g1

0x2d74,	// (0x00019892) cell_graphic2_pane_g2_ParamLimits

0x2d74,	// (0x00019892) cell_graphic2_pane_g2

0xb570,	// (0x0002208e) cell_graphic2_pane_g3_ParamLimits

0xb570,	// (0x0002208e) cell_graphic2_pane_g3

0x2d81,	// (0x0001989f) cell_graphic2_pane_g4_ParamLimits

0x2d81,	// (0x0001989f) cell_graphic2_pane_g4

0xb57d,	// (0x0002209b) cell_graphic2_pane_g5_ParamLimits

0xb57d,	// (0x0002209b) cell_graphic2_pane_g5

0x0004,

0xfda4,	// (0x000268c2) cell_graphic2_pane_g_ParamLimits

0xfda4,	// (0x000268c2) cell_graphic2_pane_g

0xb59d,	// (0x000220bb) cell_graphic2_pane_t1_ParamLimits

0xb59d,	// (0x000220bb) cell_graphic2_pane_t1

0xdda8,	// (0x000248c6) grid_highlight_pane_cp11_ParamLimits

0xdda8,	// (0x000248c6) grid_highlight_pane_cp11

0xc226,	// (0x00022d44) bg_button_pane_cp05

0xb5d2,	// (0x000220f0) cell_graphic2_control_pane_g1

0xef5f,	// (0x00025a7d) bg_touch_area_indi_pane_g1

0x2d8e,	// (0x000198ac) aid_cmod_rocker_key_size

0x2d98,	// (0x000198b6) aid_cmode_itu_key_size

0x2da2,	// (0x000198c0) main_cmode_video_pane

0x2dac,	// (0x000198ca) main_comp_mode_itu_pane

0x2db8,	// (0x000198d6) main_comp_mode_rocker_pane

0x2dc4,	// (0x000198e2) cell_cmode_rocker_pane_ParamLimits

0x2dc4,	// (0x000198e2) cell_cmode_rocker_pane

0x2dd6,	// (0x000198f4) cell_cmode_itu_pane_ParamLimits

0x2dd6,	// (0x000198f4) cell_cmode_itu_pane

0xc226,	// (0x00022d44) bg_button_pane_cp06_ParamLimits

0xc226,	// (0x00022d44) bg_button_pane_cp06

0xf1e6,	// (0x00025d04) cell_cmode_rocker_pane_g1_ParamLimits

0xf1e6,	// (0x00025d04) cell_cmode_rocker_pane_g1

0x12d8,	// (0x00017df6) cell_cmode_rocker_pane_g2_ParamLimits

0x12d8,	// (0x00017df6) cell_cmode_rocker_pane_g2

0x0001,

0xfdb4,	// (0x000268d2) cell_cmode_rocker_pane_g_ParamLimits

0xfdb4,	// (0x000268d2) cell_cmode_rocker_pane_g

0xbb6f,	// (0x0002268d) bg_button_pane_cp07

0x2deb,	// (0x00019909) cell_cmode_itu_pane_g1

0x2df4,	// (0x00019912) cell_cmode_itu_pane_t1

0x2e02,	// (0x00019920) cell_cmode_itu_pane_t2

0x0001,

0xfdb9,	// (0x000268d7) cell_cmode_itu_pane_t

0x14fe,	// (0x0001801c) aid_touch_ctrl_left

0x1506,	// (0x00018024) aid_touch_ctrl_right

0xbb6f,	// (0x0002268d) compa_mode_pane

0xb5df,	// (0x000220fd) aid_cmod_rocker_key_size_cp

0xb5e9,	// (0x00022107) aid_cmode_itu_key_size_cp

0x2e10,	// (0x0001992e) compa_mode_pane_g1

0x2e18,	// (0x00019936) compa_mode_pane_g2

0x2e20,	// (0x0001993e) compa_mode_pane_g3

0x0002,

0xfdbe,	// (0x000268dc) compa_mode_pane_g

0xb5f3,	// (0x00022111) main_comp_mode_itu_pane_cp

0xb5fb,	// (0x00022119) main_comp_mode_rocker_pane_cp

0xb603,	// (0x00022121) cell_cmode_itu_pane_cp_ParamLimits

0xb603,	// (0x00022121) cell_cmode_itu_pane_cp

0xb618,	// (0x00022136) cell_cmode_rocker_pane_cp_ParamLimits

0xb618,	// (0x00022136) cell_cmode_rocker_pane_cp

0xc226,	// (0x00022d44) bg_button_pane_cp06_cp_ParamLimits

0xc226,	// (0x00022d44) bg_button_pane_cp06_cp

0xf1e6,	// (0x00025d04) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xf1e6,	// (0x00025d04) cell_cmode_rocker_pane_g1_cp

0xef5f,	// (0x00025a7d) cell_cmode_rocker_pane_g2_cp

0xbb6f,	// (0x0002268d) bg_button_pane_cp07_cp

0xb62a,	// (0x00022148) cell_cmode_itu_pane_g1_cp

0xb633,	// (0x00022151) cell_cmode_itu_pane_t1_cp

0xb633,	// (0x00022151) cell_cmode_itu_pane_t2_cp

0xa042,	// (0x00020b60) settings_code_pane_cp2

0xbbdf,	// (0x000226fd) bg_popup_window_pane_cp3_ParamLimits

0xbee0,	// (0x000229fe) heading_pane_cp3_ParamLimits

0xbeec,	// (0x00022a0a) listscroll_popup_graphic_pane_ParamLimits

0x634f,	// (0x0001ce6d) fep_hwr_aid_pane_ParamLimits

0x66fe,	// (0x0001d21c) aid_touch_sctrl_top_ParamLimits

0x670b,	// (0x0001d229) sctrl_sk_top_pane_g1_ParamLimits

0xf1e6,	// (0x00025d04) sctrl_sk_top_pane_g2_ParamLimits

0xfcf4,	// (0x00026812) sctrl_sk_top_pane_g_ParamLimits

0x6718,	// (0x0001d236) sctrl_sk_top_pane_t1_ParamLimits

0x66fe,	// (0x0001d21c) aid_touch_sctrl_bottom_ParamLimits

0x6718,	// (0x0001d236) sctrl_sk_bottom_pane_t1_ParamLimits

0x1448,	// (0x00017f66) aid_area_touch_clock

0xb11f,	// (0x00021c3d) aid_vkb2_area_top_pane_cell_ParamLimits

0xb11f,	// (0x00021c3d) aid_vkb2_area_top_pane_cell

0xb1ca,	// (0x00021ce8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb1ca,	// (0x00021ce8) aid_vkb2_area_bottom_pane_cell

0x19b3,	// (0x000184d1) popup_char_count_window

0x2e28,	// (0x00019946) popup_char_count_window_g1

0x2e31,	// (0x0001994f) popup_char_count_window_g2

0x2e3a,	// (0x00019958) popup_char_count_window_g3

0x0002,

0xfdc5,	// (0x000268e3) popup_char_count_window_g

0x2e43,	// (0x00019961) popup_char_count_window_t1

0x67bd,	// (0x0001d2db) popup_fep_char_preview_window_ParamLimits

0x67bd,	// (0x0001d2db) popup_fep_char_preview_window

0xb13f,	// (0x00021c5d) vkb2_top_candi_pane_ParamLimits

0xb13f,	// (0x00021c5d) vkb2_top_candi_pane

0xb641,	// (0x0002215f) cell_vkb2_top_candi_pane_ParamLimits

0xb641,	// (0x0002215f) cell_vkb2_top_candi_pane

0xd762,	// (0x00024280) bg_popup_fep_char_preview_window_ParamLimits

0xd762,	// (0x00024280) bg_popup_fep_char_preview_window

0x702d,	// (0x0001db4b) popup_fep_char_preview_window_t1_ParamLimits

0x702d,	// (0x0001db4b) popup_fep_char_preview_window_t1

0x2e61,	// (0x0001997f) bg_popup_fep_char_preview_window_g1

0x2e59,	// (0x00019977) bg_popup_fep_char_preview_window_g2

0x2e51,	// (0x0001996f) bg_popup_fep_char_preview_window_g3

0x2e81,	// (0x0001999f) bg_popup_fep_char_preview_window_g4

0x2e79,	// (0x00019997) bg_popup_fep_char_preview_window_g5

0x7067,	// (0x0001db85) bg_popup_fep_char_preview_window_g6

0x2e71,	// (0x0001998f) bg_popup_fep_char_preview_window_g7

0x2e69,	// (0x00019987) bg_popup_fep_char_preview_window_g8

0x2e89,	// (0x000199a7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcc,	// (0x000268ea) bg_popup_fep_char_preview_window_g

0xf1e6,	// (0x00025d04) cell_vkb2_top_candi_pane_g1_ParamLimits

0xf1e6,	// (0x00025d04) cell_vkb2_top_candi_pane_g1

0xf43b,	// (0x00025f59) cell_vkb2_top_candi_pane_g2_ParamLimits

0xf43b,	// (0x00025f59) cell_vkb2_top_candi_pane_g2

0xf45c,	// (0x00025f7a) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf45c,	// (0x00025f7a) cell_vkb2_top_candi_pane_g3

0x706f,	// (0x0001db8d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x706f,	// (0x0001db8d) cell_vkb2_top_candi_pane_g4

0x2d1c,	// (0x0001983a) cell_vkb2_top_candi_pane_g5_ParamLimits

0x2d1c,	// (0x0001983a) cell_vkb2_top_candi_pane_g5

0x12d8,	// (0x00017df6) cell_vkb2_top_candi_pane_g6_ParamLimits

0x12d8,	// (0x00017df6) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddf,	// (0x000268fd) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddf,	// (0x000268fd) cell_vkb2_top_candi_pane_g

0x7090,	// (0x0001dbae) cell_vkb2_top_candi_pane_t1

0x616c,	// (0x0001cc8a) aid_size_touch_slider_mark_ParamLimits

0x616c,	// (0x0001cc8a) aid_size_touch_slider_mark

0xb3bc,	// (0x00021eda) grid_graphic2_catg_pane_ParamLimits

0xb3bc,	// (0x00021eda) grid_graphic2_catg_pane

0xb450,	// (0x00021f6e) popup_grid_graphic2_window_t1_ParamLimits

0xb450,	// (0x00021f6e) popup_grid_graphic2_window_t1

0xb466,	// (0x00021f84) popup_grid_graphic2_window_t2_ParamLimits

0xb466,	// (0x00021f84) popup_grid_graphic2_window_t2

0x0001,

0xfd9a,	// (0x000268b8) popup_grid_graphic2_window_t_ParamLimits

0xfd9a,	// (0x000268b8) popup_grid_graphic2_window_t

0xc226,	// (0x00022d44) bg_button_pane_cp05_ParamLimits

0xb5d2,	// (0x000220f0) cell_graphic2_control_pane_g1_ParamLimits

0xb6a7,	// (0x000221c5) cell_graphic2_catg_pane_ParamLimits

0xb6a7,	// (0x000221c5) cell_graphic2_catg_pane

0xbb6f,	// (0x0002268d) bg_button_pane_cp12

0xb6b9,	// (0x000221d7) cell_graphic2_catg_pane_g1

0x1414,	// (0x00017f32) cell_tb_ext_pane_t1_ParamLimits

0x6b57,	// (0x0001d675) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6b57,	// (0x0001d675) vkb2_top_cell_right_narrow_pane

0x6b6f,	// (0x0001d68d) vkb2_top_cell_right_wide_pane_ParamLimits

0x6b6f,	// (0x0001d68d) vkb2_top_cell_right_wide_pane

0xf396,	// (0x00025eb4) bg_vkb2_func_pane_ParamLimits

0xf396,	// (0x00025eb4) bg_vkb2_func_pane

0x6be0,	// (0x0001d6fe) vkb2_top_cell_left_pane_g1_ParamLimits

0xf396,	// (0x00025eb4) bg_vkb2_fuc_pane_cp03_ParamLimits

0xf396,	// (0x00025eb4) bg_vkb2_fuc_pane_cp03

0x6c3e,	// (0x0001d75c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd1bd,	// (0x00023cdb) bg_vkb2_func_pane_g1

0xd1c5,	// (0x00023ce3) bg_vkb2_func_pane_g2

0xd1d5,	// (0x00023cf3) bg_vkb2_func_pane_g3

0xd1cd,	// (0x00023ceb) bg_vkb2_func_pane_g4

0xd1dd,	// (0x00023cfb) bg_vkb2_func_pane_g5

0xd1e5,	// (0x00023d03) bg_vkb2_func_pane_g6

0xd1ed,	// (0x00023d0b) bg_vkb2_func_pane_g7

0xd1f5,	// (0x00023d13) bg_vkb2_func_pane_g8

0xd1b5,	// (0x00023cd3) bg_vkb2_func_pane_g9

0x0008,

0xfdec,	// (0x0002690a) bg_vkb2_func_pane_g

0xf396,	// (0x00025eb4) bg_vkb2_fuc_pane_cp01_ParamLimits

0xf396,	// (0x00025eb4) bg_vkb2_fuc_pane_cp01

0x6be0,	// (0x0001d6fe) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6be0,	// (0x0001d6fe) vkb2_top_cell_right_wide_pane_g1

0xf396,	// (0x00025eb4) bg_vkb2_fuc_pane_cp02_ParamLimits

0xf396,	// (0x00025eb4) bg_vkb2_fuc_pane_cp02

0x6c3e,	// (0x0001d75c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6c3e,	// (0x0001d75c) vkb2_top_cell_right_narrow_pane_g1

0xa885,	// (0x000213a3) aid_touch_area_decrease_ParamLimits

0xa885,	// (0x000213a3) aid_touch_area_decrease

0xa8bf,	// (0x000213dd) aid_touch_area_increase_ParamLimits

0xa8bf,	// (0x000213dd) aid_touch_area_increase

0xa8e7,	// (0x00021405) aid_touch_area_mute_ParamLimits

0xa8e7,	// (0x00021405) aid_touch_area_mute

0xa917,	// (0x00021435) aid_touch_area_slider_ParamLimits

0xa917,	// (0x00021435) aid_touch_area_slider

0xa957,	// (0x00021475) popup_slider_window_g4_ParamLimits

0xa957,	// (0x00021475) popup_slider_window_g4

0xa97f,	// (0x0002149d) popup_slider_window_g5_ParamLimits

0xa97f,	// (0x0002149d) popup_slider_window_g5

0xa9b3,	// (0x000214d1) popup_slider_window_g6_ParamLimits

0xa9b3,	// (0x000214d1) popup_slider_window_g6

0x11ee,	// (0x00017d0c) popup_slider_window_t2_ParamLimits

0x11ee,	// (0x00017d0c) popup_slider_window_t2

0x0001,

0xfce8,	// (0x00026806) popup_slider_window_t_ParamLimits

0xfce8,	// (0x00026806) popup_slider_window_t

0xa9cf,	// (0x000214ed) slider_pane_ParamLimits

0xa9cf,	// (0x000214ed) slider_pane

0x2e91,	// (0x000199af) slider_pane_g1_ParamLimits

0x2e91,	// (0x000199af) slider_pane_g1

0x2ea5,	// (0x000199c3) slider_pane_g2_ParamLimits

0x2ea5,	// (0x000199c3) slider_pane_g2

0x2ebb,	// (0x000199d9) slider_pane_g3_ParamLimits

0x2ebb,	// (0x000199d9) slider_pane_g3

0x0003,

0xfdff,	// (0x0002691d) slider_pane_g_ParamLimits

0xfdff,	// (0x0002691d) slider_pane_g

0x960f,	// (0x0002012d) popup_tb_float_extension_window_ParamLimits

0x960f,	// (0x0002012d) popup_tb_float_extension_window

0x2ee7,	// (0x00019a05) aid_size_cell_tb_float_ext

0xbb6f,	// (0x0002268d) bg_popup_sub_window_cp28

0x2ef3,	// (0x00019a11) grid_tb_float_ext_pane

0x2efd,	// (0x00019a1b) cell_tb_float_ext_pane_ParamLimits

0x2efd,	// (0x00019a1b) cell_tb_float_ext_pane

0x2f17,	// (0x00019a35) cell_tb_float_ext_pane_g1

0x2f20,	// (0x00019a3e) grid_highlight_pane_cp12

0xa3ea,	// (0x00020f08) cell_last_hwr_side_pane_ParamLimits

0xa3ea,	// (0x00020f08) cell_last_hwr_side_pane

0xef5f,	// (0x00025a7d) cell_last_hwr_side_pane_g1

0x2f29,	// (0x00019a47) cell_last_hwr_side_pane_g2

0x0001,

0xfe08,	// (0x00026926) cell_last_hwr_side_pane_g

0xb2a6,	// (0x00021dc4) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb2a6,	// (0x00021dc4) vkb2_area_bottom_space_btn_pane

0xf1e6,	// (0x00025d04) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x2d62,	// (0x00019880) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7090,	// (0x0001dbae) cell_vkb2_top_candi_pane_t1_ParamLimits

0x70ca,	// (0x0001dbe8) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x70ca,	// (0x0001dbe8) vkb2_area_bottom_space_btn_pane_g1

0x7104,	// (0x0001dc22) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7104,	// (0x0001dc22) vkb2_area_bottom_space_btn_pane_g2

0x713a,	// (0x0001dc58) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x713a,	// (0x0001dc58) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0d,	// (0x0002692b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0d,	// (0x0002692b) vkb2_area_bottom_space_btn_pane_g

0x63f6,	// (0x0001cf14) cel_fep_hwr_func_pane_ParamLimits

0x63f6,	// (0x0001cf14) cel_fep_hwr_func_pane

0xa3bf,	// (0x00020edd) cell_hwr_side_button_pane_ParamLimits

0xa3bf,	// (0x00020edd) cell_hwr_side_button_pane

0x1448,	// (0x00017f66) aid_area_touch_clock_ParamLimits

0xbd12,	// (0x00022830) bg_uniindi_top_pane_ParamLimits

0x145a,	// (0x00017f78) uniindi_top_pane_g1_ParamLimits

0x1470,	// (0x00017f8e) uniindi_top_pane_g2_ParamLimits

0x147c,	// (0x00017f9a) uniindi_top_pane_g3_ParamLimits

0x148d,	// (0x00017fab) uniindi_top_pane_g4_ParamLimits

0xfd20,	// (0x0002683e) uniindi_top_pane_g_ParamLimits

0x149a,	// (0x00017fb8) uniindi_top_pane_t1_ParamLimits

0xbd12,	// (0x00022830) bg_vkb2_func_pane_cp01_ParamLimits

0xbd12,	// (0x00022830) bg_vkb2_func_pane_cp01

0x2f32,	// (0x00019a50) cel_fep_hwr_func_pane_g1_ParamLimits

0x2f32,	// (0x00019a50) cel_fep_hwr_func_pane_g1

0xbd12,	// (0x00022830) bg_vkb2_func_pane_cp02_ParamLimits

0xbd12,	// (0x00022830) bg_vkb2_func_pane_cp02

0x2f32,	// (0x00019a50) cell_hwr_side_button_pane_g1_ParamLimits

0x2f32,	// (0x00019a50) cell_hwr_side_button_pane_g1

0xd0cd,	// (0x00023beb) status_pane_g4_ParamLimits

0xd0cd,	// (0x00023beb) status_pane_g4

0xd0e5,	// (0x00023c03) status_pane_t1

0xedee,	// (0x0002590c) form2_midp_gauge_slider_cont_pane

0xedf6,	// (0x00025914) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa2fe,	// (0x00020e1c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa310,	// (0x00020e2e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf3,	// (0x00026611) form2_midp_gauge_slider_pane_t_ParamLimits

0xee08,	// (0x00025926) form2_midp_slider_pane_ParamLimits

0x677d,	// (0x0001d29b) aid_size_cell_func_vkb2_ParamLimits

0x677d,	// (0x0001d29b) aid_size_cell_func_vkb2

0x2ed3,	// (0x000199f1) slider_pane_g4_ParamLimits

0x2ed3,	// (0x000199f1) slider_pane_g4

0xb6c2,	// (0x000221e0) form2_midp_gauge_slider_pane_t2_cp01

0xb6d0,	// (0x000221ee) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb6d0,	// (0x000221ee) form2_midp_gauge_slider_pane_t3_cp01

0x71af,	// (0x0001dccd) form2_midp_slider_pane_cp01

0xbb6f,	// (0x0002268d) navi_smil_pane

0x2f62,	// (0x00019a80) navi_smil_pane_g1

0x2f6a,	// (0x00019a88) navi_smil_pane_t1

0x2f40,	// (0x00019a5e) form2_midp_slider_pane_g1

0x2f49,	// (0x00019a67) form2_midp_slider_pane_g2

0x2f51,	// (0x00019a6f) form2_midp_slider_pane_g3

0x2f40,	// (0x00019a5e) form2_midp_slider_pane_g4

0xb6ed,	// (0x0002220b) form2_midp_slider_pane_g5

0x0004,

0xfe16,	// (0x00026934) form2_midp_slider_pane_g

0x7174,	// (0x0001dc92) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7174,	// (0x0001dc92) vkb2_area_bottom_space_btn_pane_g4

0x97eb,	// (0x00020309) lc0_navi_pane_ParamLimits

0x97eb,	// (0x00020309) lc0_navi_pane

0x9855,	// (0x00020373) lc0_stat_indi_pane_ParamLimits

0x9855,	// (0x00020373) lc0_stat_indi_pane

0x986a,	// (0x00020388) ls0_title_pane_ParamLimits

0x986a,	// (0x00020388) ls0_title_pane

0xc226,	// (0x00022d44) bg_popup_sub_pane_cp14_ParamLimits

0x142f,	// (0x00017f4d) list_uniindi_pane_ParamLimits

0x143b,	// (0x00017f59) uniindi_top_pane_ParamLimits

0x14d6,	// (0x00017ff4) list_single_uniindi_pane_g1_ParamLimits

0x14e9,	// (0x00018007) list_single_uniindi_pane_t1_ParamLimits

0xb6f6,	// (0x00022214) lc0_stat_clock_pane_ParamLimits

0xb6f6,	// (0x00022214) lc0_stat_clock_pane

0xb703,	// (0x00022221) lc0_stat_indi_pane_g1_ParamLimits

0xb703,	// (0x00022221) lc0_stat_indi_pane_g1

0xb710,	// (0x0002222e) lc0_stat_indi_pane_g2_ParamLimits

0xb710,	// (0x0002222e) lc0_stat_indi_pane_g2

0x0001,

0xfe21,	// (0x0002693f) lc0_stat_indi_pane_g_ParamLimits

0xfe21,	// (0x0002693f) lc0_stat_indi_pane_g

0xb71d,	// (0x0002223b) lc0_uni_indicator_pane_ParamLimits

0xb71d,	// (0x0002223b) lc0_uni_indicator_pane

0xb72a,	// (0x00022248) ls0_title_pane_g1_ParamLimits

0xb72a,	// (0x00022248) ls0_title_pane_g1

0xb73e,	// (0x0002225c) ls0_title_pane_t1_ParamLimits

0xb73e,	// (0x0002225c) ls0_title_pane_t1

0xb76c,	// (0x0002228a) lc0_uni_indicator_pane_g1_ParamLimits

0xb76c,	// (0x0002228a) lc0_uni_indicator_pane_g1

0x2f78,	// (0x00019a96) lc0_stat_clock_pane_t1

0xbb6f,	// (0x0002268d) main_ai5_pane

0x2f86,	// (0x00019aa4) ai5_sk_pane_ParamLimits

0x2f86,	// (0x00019aa4) ai5_sk_pane

0xb79b,	// (0x000222b9) cell_ai5_widget_pane_ParamLimits

0xb79b,	// (0x000222b9) cell_ai5_widget_pane

0x2f93,	// (0x00019ab1) aid_size_cell_widget_grid

0x2fa7,	// (0x00019ac5) bg_ai5_widget_pane_ParamLimits

0x2fa7,	// (0x00019ac5) bg_ai5_widget_pane

0xb824,	// (0x00022342) cell_ai5_widget_pane_g2

0xb834,	// (0x00022352) cell_ai5_widget_pane_g3

0xb853,	// (0x00022371) cell_ai5_widget_pane_g4

0xb85f,	// (0x0002237d) cell_ai5_widget_pane_g5

0xb86b,	// (0x00022389) cell_ai5_widget_pane_g6

0xb877,	// (0x00022395) cell_ai5_widget_pane_g7

0xb8bf,	// (0x000223dd) cell_ai5_widget_pane_t1_ParamLimits

0xb8bf,	// (0x000223dd) cell_ai5_widget_pane_t1

0xb8dc,	// (0x000223fa) cell_ai5_widget_pane_t2_ParamLimits

0xb8dc,	// (0x000223fa) cell_ai5_widget_pane_t2

0xb8f4,	// (0x00022412) cell_ai5_widget_pane_t3_ParamLimits

0xb8f4,	// (0x00022412) cell_ai5_widget_pane_t3

0xb90c,	// (0x0002242a) cell_ai5_widget_pane_t4_ParamLimits

0xb90c,	// (0x0002242a) cell_ai5_widget_pane_t4

0xb926,	// (0x00022444) cell_ai5_widget_pane_t5_ParamLimits

0xb926,	// (0x00022444) cell_ai5_widget_pane_t5

0x2fb3,	// (0x00019ad1) cell_ai5_widget_pane_t6_ParamLimits

0x2fb3,	// (0x00019ad1) cell_ai5_widget_pane_t6

0x2fc5,	// (0x00019ae3) cell_ai5_widget_pane_t7_ParamLimits

0x2fc5,	// (0x00019ae3) cell_ai5_widget_pane_t7

0xb945,	// (0x00022463) cell_ai5_widget_pane_t8_ParamLimits

0xb945,	// (0x00022463) cell_ai5_widget_pane_t8

0x0009,

0xfe3b,	// (0x00026959) cell_ai5_widget_pane_t_ParamLimits

0xfe3b,	// (0x00026959) cell_ai5_widget_pane_t

0xb991,	// (0x000224af) grid_ai5_widget_pane

0xc226,	// (0x00022d44) highlight_cell_ai5_widget_pane_ParamLimits

0xc226,	// (0x00022d44) highlight_cell_ai5_widget_pane

0xb9a7,	// (0x000224c5) ai5_sk_left_pane

0xb9b1,	// (0x000224cf) ai5_sk_middle_pane

0xb9bb,	// (0x000224d9) ai5_sk_right_pane

0x2fde,	// (0x00019afc) bg_ai5_widget_pane_g1_ParamLimits

0x2fde,	// (0x00019afc) bg_ai5_widget_pane_g1

0x2fea,	// (0x00019b08) bg_ai5_widget_pane_g2_ParamLimits

0x2fea,	// (0x00019b08) bg_ai5_widget_pane_g2

0x2ff6,	// (0x00019b14) bg_ai5_widget_pane_g3_ParamLimits

0x2ff6,	// (0x00019b14) bg_ai5_widget_pane_g3

0x3002,	// (0x00019b20) bg_ai5_widget_pane_g4_ParamLimits

0x3002,	// (0x00019b20) bg_ai5_widget_pane_g4

0x300e,	// (0x00019b2c) bg_ai5_widget_pane_g5_ParamLimits

0x300e,	// (0x00019b2c) bg_ai5_widget_pane_g5

0x301a,	// (0x00019b38) bg_ai5_widget_pane_g6_ParamLimits

0x301a,	// (0x00019b38) bg_ai5_widget_pane_g6

0x3026,	// (0x00019b44) bg_ai5_widget_pane_g7_ParamLimits

0x3026,	// (0x00019b44) bg_ai5_widget_pane_g7

0x3032,	// (0x00019b50) bg_ai5_widget_pane_g8_ParamLimits

0x3032,	// (0x00019b50) bg_ai5_widget_pane_g8

0x303e,	// (0x00019b5c) bg_ai5_widget_pane_g9_ParamLimits

0x303e,	// (0x00019b5c) bg_ai5_widget_pane_g9

0x0008,

0xfe50,	// (0x0002696e) bg_ai5_widget_pane_g_ParamLimits

0xfe50,	// (0x0002696e) bg_ai5_widget_pane_g

0x3071,	// (0x00019b8f) cell_shortcut_ai5_widget_pane_ParamLimits

0x3071,	// (0x00019b8f) cell_shortcut_ai5_widget_pane

0xbc1b,	// (0x00022739) bg_cell_shortcut_ai5_widget_pane

0x3082,	// (0x00019ba0) cell_grid_ai5_widget_pane_g1

0x308b,	// (0x00019ba9) highlight_cell_shortcut_ai5_widget_pane

0xd1c5,	// (0x00023ce3) ai5_sk_left_pane_g1

0x3093,	// (0x00019bb1) ai5_sk_left_pane_g2

0x309b,	// (0x00019bb9) ai5_sk_left_pane_g3

0x30a3,	// (0x00019bc1) ai5_sk_left_pane_g4

0x0003,

0xfe63,	// (0x00026981) ai5_sk_left_pane_g

0x30ab,	// (0x00019bc9) ai5_sk_left_pane_t1

0xd1bd,	// (0x00023cdb) ai5_sk_right_pane_g1

0x30b9,	// (0x00019bd7) ai5_sk_right_pane_g2

0x30c1,	// (0x00019bdf) ai5_sk_right_pane_g3

0x30c9,	// (0x00019be7) ai5_sk_right_pane_g4

0x0003,

0xfe6c,	// (0x0002698a) ai5_sk_right_pane_g

0x30d1,	// (0x00019bef) ai5_sk_right_pane_t1

0xd1bd,	// (0x00023cdb) ai5_sk_middle_pane_g1

0xd1c5,	// (0x00023ce3) ai5_sk_middle_pane_g2

0xd1dd,	// (0x00023cfb) ai5_sk_middle_pane_g3

0x30c1,	// (0x00019bdf) ai5_sk_middle_pane_g4

0x309b,	// (0x00019bb9) ai5_sk_middle_pane_g5

0x30df,	// (0x00019bfd) ai5_sk_middle_pane_g6

0xb9c5,	// (0x000224e3) ai5_sk_middle_pane_g7

0x0006,

0xfe75,	// (0x00026993) ai5_sk_middle_pane_g

0x96d7,	// (0x000201f5) aid_touch_area_size_lc0_ParamLimits

0x96d7,	// (0x000201f5) aid_touch_area_size_lc0

0x6581,	// (0x0001d09f) cell_hwr_candidate_pane_t1_ParamLimits

0xcfef,	// (0x00023b0d) aid_touch_navi_pane

0x995c,	// (0x0002047a) status_dt_navi_pane_ParamLimits

0x995c,	// (0x0002047a) status_dt_navi_pane

0x9974,	// (0x00020492) status_dt_sta_pane_ParamLimits

0x9974,	// (0x00020492) status_dt_sta_pane

0xb9cd,	// (0x000224eb) dt_sta_controll_pane

0xb9da,	// (0x000224f8) dt_sta_indi_pane

0xb9e7,	// (0x00022505) dt_sta_title_pane

0xbd12,	// (0x00022830) bg_dt_sta_indi_pane_ParamLimits

0xbd12,	// (0x00022830) bg_dt_sta_indi_pane

0xb9f9,	// (0x00022517) dt_sta_battery_pane

0xba01,	// (0x0002251f) dt_sta_indi_pane_g1

0x30e7,	// (0x00019c05) dt_sta_indi_pane_g2

0x30f0,	// (0x00019c0e) dt_sta_indi_pane_g3

0x0002,

0xfe84,	// (0x000269a2) dt_sta_indi_pane_g

0x30f9,	// (0x00019c17) dt_sta_signal_pane

0xc226,	// (0x00022d44) bg_dt_sta_title_pane_ParamLimits

0xc226,	// (0x00022d44) bg_dt_sta_title_pane

0xde7a,	// (0x00024998) dt_sta_title_pane_g1

0xba0a,	// (0x00022528) dt_sta_title_pane_t1_ParamLimits

0xba0a,	// (0x00022528) dt_sta_title_pane_t1

0xbb6f,	// (0x0002268d) bg_dt_sta_control_pane

0xba1f,	// (0x0002253d) dt_sta_controll_pane_g1

0x3102,	// (0x00019c20) bg_dt_sta_title_pane_g1

0x310b,	// (0x00019c29) bg_dt_sta_title_pane_g2

0x3114,	// (0x00019c32) bg_dt_sta_title_pane_g3

0x0002,

0xfe8b,	// (0x000269a9) bg_dt_sta_title_pane_g

0xef5f,	// (0x00025a7d) bg_dt_sta_indi_pane_g1

0x311d,	// (0x00019c3b) dt_sta_signal_pane_g1

0x3125,	// (0x00019c43) dt_sta_signal_pane_g2

0x0001,

0xfe92,	// (0x000269b0) dt_sta_signal_pane_g

0x312d,	// (0x00019c4b) dt_sta_battery_pane_g1

0x3136,	// (0x00019c54) dt_sta_battery_pane_t1

0xef5f,	// (0x00025a7d) bg_dt_sta_control_pane_g1

0xc7dc,	// (0x000232fa) fep_china_uni_eep_pane

0xc7e4,	// (0x00023302) fep_china_uni_entry_pane_ParamLimits

0xc7f4,	// (0x00023312) popup_fep_china_uni_window_g1_ParamLimits

0xc804,	// (0x00023322) popup_fep_china_uni_window_g2_ParamLimits

0xc804,	// (0x00023322) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x00026253) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x00026253) popup_fep_china_uni_window_g

0x3145,	// (0x00019c63) fep_china_uni_eep_pane_g1

0x314d,	// (0x00019c6b) fep_china_uni_eep_pane_t1

0x2f59,	// (0x00019a77) aid_touch_area_size_smil_player

0xd0a0,	// (0x00023bbe) lc0_clock_pane

0xd0d9,	// (0x00023bf7) status_pane_g5_ParamLimits

0xd0d9,	// (0x00023bf7) status_pane_g5

0x91a3,	// (0x0001fcc1) popup_keymap_window

0xd0b9,	// (0x00023bd7) status_icon_pane

0xb834,	// (0x00022352) cell_ai5_widget_pane_g3_ParamLimits

0xb853,	// (0x00022371) cell_ai5_widget_pane_g4_ParamLimits

0xb85f,	// (0x0002237d) cell_ai5_widget_pane_g5_ParamLimits

0xb883,	// (0x000223a1) cell_ai5_widget_pane_g8_ParamLimits

0xb883,	// (0x000223a1) cell_ai5_widget_pane_g8

0xb897,	// (0x000223b5) cell_ai5_widget_pane_g9_ParamLimits

0xb897,	// (0x000223b5) cell_ai5_widget_pane_g9

0xb8ab,	// (0x000223c9) cell_ai5_widget_pane_g10_ParamLimits

0xb8ab,	// (0x000223c9) cell_ai5_widget_pane_g10

0x315c,	// (0x00019c7a) status_icon_pane_g1

0xbb6f,	// (0x0002268d) bg_popup_sub_pane_cp13

0x3164,	// (0x00019c82) popup_keymap_window_t1

0x8ed7,	// (0x0001f9f5) control_pane_g6_ParamLimits

0x8ed7,	// (0x0001f9f5) control_pane_g6

0x8ee4,	// (0x0001fa02) control_pane_g7_ParamLimits

0x8ee4,	// (0x0001fa02) control_pane_g7

0x8ef1,	// (0x0001fa0f) control_pane_g8_ParamLimits

0x8ef1,	// (0x0001fa0f) control_pane_g8

0xb9cd,	// (0x000224eb) dt_sta_controll_pane_ParamLimits

0xb9da,	// (0x000224f8) dt_sta_indi_pane_ParamLimits

0xb9e7,	// (0x00022505) dt_sta_title_pane_ParamLimits

0xc168,	// (0x00022c86) aid_size_touch_scroll_bar_cale

0x56b9,	// (0x0001c1d7) popup_discreet_window_ParamLimits

0x56b9,	// (0x0001c1d7) popup_discreet_window

0x87f5,	// (0x0001f313) popup_sk_window

0xd762,	// (0x00024280) bg_popup_sub_pane_cp28_ParamLimits

0xd762,	// (0x00024280) bg_popup_sub_pane_cp28

0x3172,	// (0x00019c90) popup_discreet_window_g1_ParamLimits

0x3172,	// (0x00019c90) popup_discreet_window_g1

0x3192,	// (0x00019cb0) popup_discreet_window_t1_ParamLimits

0x3192,	// (0x00019cb0) popup_discreet_window_t1

0x31b0,	// (0x00019cce) popup_discreet_window_t2_ParamLimits

0x31b0,	// (0x00019cce) popup_discreet_window_t2

0x0002,

0xfe97,	// (0x000269b5) popup_discreet_window_t_ParamLimits

0xfe97,	// (0x000269b5) popup_discreet_window_t

0x7508,	// (0x0001e026) popup_sk_window_g1

0x7512,	// (0x0001e030) popup_sk_window_g2

0x0001,

0xfe9e,	// (0x000269bc) popup_sk_window_g

0x3210,	// (0x00019d2e) popup_sk_window_t1

0x3202,	// (0x00019d20) popup_sk_window_t1_copy1

0xb824,	// (0x00022342) cell_ai5_widget_pane_g2_ParamLimits

0xb957,	// (0x00022475) cell_ai5_widget_pane_t9_ParamLimits

0xb957,	// (0x00022475) cell_ai5_widget_pane_t9

0xbb6f,	// (0x0002268d) main_fep_fshwr2_pane

0xba28,	// (0x00022546) aid_fshwr2_btn_pane

0xba30,	// (0x0002254e) aid_fshwr2_syb_pane

0xba38,	// (0x00022556) aid_fshwr2_txt_pane

0xba40,	// (0x0002255e) fshwr2_func_candi_pane

0xba4a,	// (0x00022568) fshwr2_hwr_syb_pane

0xba58,	// (0x00022576) fshwr2_icf_pane

0xbb6f,	// (0x0002268d) fshwr2_icf_bg_pane

0xba62,	// (0x00022580) fshwr2_icf_pane_t1_ParamLimits

0xba62,	// (0x00022580) fshwr2_icf_pane_t1

0xef5f,	// (0x00025a7d) fshwr2_func_candi_pane_g1

0x3232,	// (0x00019d50) fshwr2_func_candi_row_pane_ParamLimits

0x3232,	// (0x00019d50) fshwr2_func_candi_row_pane

0xba7c,	// (0x0002259a) cell_fshwr2_syb_pane_ParamLimits

0xba7c,	// (0x0002259a) cell_fshwr2_syb_pane

0xf1e6,	// (0x00025d04) fshwr2_hwr_syb_pane_g1_ParamLimits

0xf1e6,	// (0x00025d04) fshwr2_hwr_syb_pane_g1

0xbb6f,	// (0x0002268d) bg_popup_call_pane_cp01

0x3243,	// (0x00019d61) fshwr2_func_candi_cell_pane_ParamLimits

0x3243,	// (0x00019d61) fshwr2_func_candi_cell_pane

0x3274,	// (0x00019d92) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3274,	// (0x00019d92) fshwr2_func_candi_cell_bg_pane

0x328e,	// (0x00019dac) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x328e,	// (0x00019dac) fshwr2_func_candi_cell_pane_g1

0x32ae,	// (0x00019dcc) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x32ae,	// (0x00019dcc) fshwr2_func_candi_cell_pane_t1

0xbb6f,	// (0x0002268d) bg_button_pane_cp08

0xcc6d,	// (0x0002378b) cell_fshwr2_syb_bg_pane

0xba96,	// (0x000225b4) cell_fshwr2_syb_bg_pane_g1

0x32c1,	// (0x00019ddf) cell_fshwr2_syb_bg_pane_t1

0xc226,	// (0x00022d44) main_tmo_pane

0x9e73,	// (0x00020991) uni_indicator_pane_g1_ParamLimits

0x9e88,	// (0x000209a6) uni_indicator_pane_g2_ParamLimits

0x9e9d,	// (0x000209bb) uni_indicator_pane_g3_ParamLimits

0xe13e,	// (0x00024c5c) uni_indicator_pane_g4_ParamLimits

0xe13e,	// (0x00024c5c) uni_indicator_pane_g4

0xe152,	// (0x00024c70) uni_indicator_pane_g5_ParamLimits

0xe152,	// (0x00024c70) uni_indicator_pane_g5

0xe166,	// (0x00024c84) uni_indicator_pane_g6_ParamLimits

0xe166,	// (0x00024c84) uni_indicator_pane_g6

0xf926,	// (0x00026444) uni_indicator_pane_g_ParamLimits

0xa867,	// (0x00021385) popup_tmo_note_window_ParamLimits

0xa867,	// (0x00021385) popup_tmo_note_window

0xbb6f,	// (0x0002268d) fshwr2_bg_pane

0x329f,	// (0x00019dbd) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x329f,	// (0x00019dbd) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea3,	// (0x000269c1) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea3,	// (0x000269c1) fshwr2_func_candi_cell_pane_g

0xef5f,	// (0x00025a7d) bg_popup_window_pane_cp01

0x32d0,	// (0x00019dee) bg_popup_window_pane_g1_cp01

0x32d9,	// (0x00019df7) bg_popup_window_pane_cp22_ParamLimits

0x32d9,	// (0x00019df7) bg_popup_window_pane_cp22

0x32e7,	// (0x00019e05) listscroll_tmo_link_pane_ParamLimits

0x32e7,	// (0x00019e05) listscroll_tmo_link_pane

0x3327,	// (0x00019e45) popup_tmo_note_window_g1_ParamLimits

0x3327,	// (0x00019e45) popup_tmo_note_window_g1

0x3334,	// (0x00019e52) tmo_note_info_pane_ParamLimits

0x3334,	// (0x00019e52) tmo_note_info_pane

0xba9e,	// (0x000225bc) list_tmo_note_info_pane_g1_ParamLimits

0xba9e,	// (0x000225bc) list_tmo_note_info_pane_g1

0x334e,	// (0x00019e6c) list_tmo_note_info_pane_g2_ParamLimits

0x334e,	// (0x00019e6c) list_tmo_note_info_pane_g2

0x0001,

0xfea8,	// (0x000269c6) list_tmo_note_info_pane_g_ParamLimits

0xfea8,	// (0x000269c6) list_tmo_note_info_pane_g

0x336a,	// (0x00019e88) list_tmo_note_info_text_pane_ParamLimits

0x336a,	// (0x00019e88) list_tmo_note_info_text_pane

0x33ac,	// (0x00019eca) list_tmo_link_pane

0x33b9,	// (0x00019ed7) scroll_pane_cp20

0x33c6,	// (0x00019ee4) list_single_tmo_link_pane_ParamLimits

0x33c6,	// (0x00019ee4) list_single_tmo_link_pane

0x33d6,	// (0x00019ef4) list_single_tmo_link_pane_t1

0x33e4,	// (0x00019f02) list_tmo_note_info_text_pane_t1_ParamLimits

0x33e4,	// (0x00019f02) list_tmo_note_info_text_pane_t1

0x8bba,	// (0x0001f6d8) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8bba,	// (0x0001f6d8) aid_size_touch_scroll_bar_cp01

0x843f,	// (0x0001ef5d) aid_size_touch_slider_marker

0x87e5,	// (0x0001f303) popup_settings_window_ParamLimits

0x87e5,	// (0x0001f303) popup_settings_window

0x4c3d,	// (0x0001b75b) popup_candi_list_indi_window

0xcfef,	// (0x00023b0d) aid_touch_navi_pane_ParamLimits

0x66d2,	// (0x0001d1f0) rs_clock_indi_pane

0x66db,	// (0x0001d1f9) sctrl_sk_bottom_pane_ParamLimits

0x66ec,	// (0x0001d20a) sctrl_sk_top_pane_ParamLimits

0x67d7,	// (0x0001d2f5) popup_fep_tooltip_window

0x2f93,	// (0x00019ab1) aid_size_cell_widget_grid_ParamLimits

0xb818,	// (0x00022336) cell_ai5_widget_pane_g1_ParamLimits

0xb818,	// (0x00022336) cell_ai5_widget_pane_g1

0xb86b,	// (0x00022389) cell_ai5_widget_pane_g6_ParamLimits

0xb877,	// (0x00022395) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe26,	// (0x00026944) cell_ai5_widget_pane_g_ParamLimits

0xfe26,	// (0x00026944) cell_ai5_widget_pane_g

0xb97b,	// (0x00022499) cell_ai5_widget_pane_t10_ParamLimits

0xb97b,	// (0x00022499) cell_ai5_widget_pane_t10

0xb991,	// (0x000224af) grid_ai5_widget_pane_ParamLimits

0x304a,	// (0x00019b68) cell_contacts_ai5_widget_pane_ParamLimits

0x304a,	// (0x00019b68) cell_contacts_ai5_widget_pane

0x31c5,	// (0x00019ce3) popup_discreet_window_t3_ParamLimits

0x31c5,	// (0x00019ce3) popup_discreet_window_t3

0x321e,	// (0x00019d3c) popup_fshwr2_char_preview_window_ParamLimits

0x321e,	// (0x00019d3c) popup_fshwr2_char_preview_window

0xbab5,	// (0x000225d3) tmo_note_info_pane_t1

0xbaca,	// (0x000225e8) tmo_note_info_pane_t2

0xbae3,	// (0x00022601) tmo_note_info_pane_t3

0x3388,	// (0x00019ea6) tmo_note_info_pane_t4

0x339a,	// (0x00019eb8) tmo_note_info_pane_t5

0x0004,

0xfead,	// (0x000269cb) tmo_note_info_pane_t

0x33ac,	// (0x00019eca) list_tmo_link_pane_ParamLimits

0x33b9,	// (0x00019ed7) scroll_pane_cp20_ParamLimits

0xbb6f,	// (0x0002268d) bg_popup_fep_char_preview_window_cp01

0x33fd,	// (0x00019f1b) popup_fshwr2_char_preview_window_t1

0x340b,	// (0x00019f29) popup_candi_list_indi_window_g1

0x3414,	// (0x00019f32) bg_cell_contacts_ai5_widget_pane

0x3420,	// (0x00019f3e) cell_contacts_ai5_widget_pane_g1

0x3434,	// (0x00019f52) cell_contacts_ai5_widget_pane_g2

0x3443,	// (0x00019f61) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb8,	// (0x000269d6) cell_contacts_ai5_widget_pane_g

0x3456,	// (0x00019f74) cell_contacts_ai5_widget_pane_t1

0xc226,	// (0x00022d44) highlight_cell_shortcut_ai5_widget_pane_cp01

0x34d0,	// (0x00019fee) settings_container_pane

0xcc6d,	// (0x0002378b) listscroll_set_pane_copy1

0xe94f,	// (0x0002546d) scroll_pane_cp121_copy1

0x34dc,	// (0x00019ffa) set_content_pane_copy1

0x34e4,	// (0x0001a002) aid_height_set_list_copy1_ParamLimits

0x34e4,	// (0x0001a002) aid_height_set_list_copy1

0xdc0d,	// (0x0002472b) aid_size_parent_copy1_ParamLimits

0xdc0d,	// (0x0002472b) aid_size_parent_copy1

0x34f0,	// (0x0001a00e) button_value_adjust_pane_cp6_copy1_ParamLimits

0x34f0,	// (0x0001a00e) button_value_adjust_pane_cp6_copy1

0xc37d,	// (0x00022e9b) list_highlight_pane_cp2_copy1_ParamLimits

0xc37d,	// (0x00022e9b) list_highlight_pane_cp2_copy1

0x3504,	// (0x0001a022) list_set_pane_copy1_ParamLimits

0x3504,	// (0x0001a022) list_set_pane_copy1

0x346b,	// (0x00019f89) main_pane_set_t1_copy1_ParamLimits

0x346b,	// (0x00019f89) main_pane_set_t1_copy1

0x34a5,	// (0x00019fc3) main_pane_set_t2_copy1_ParamLimits

0x34a5,	// (0x00019fc3) main_pane_set_t2_copy1

0x35b1,	// (0x0001a0cf) main_pane_set_t3_copy1

0x35bf,	// (0x0001a0dd) main_pane_set_t4_copy1

0x34c4,	// (0x00019fe2) set_content_pane_g1_copy1_ParamLimits

0x34c4,	// (0x00019fe2) set_content_pane_g1_copy1

0x35cd,	// (0x0001a0eb) setting_code_pane_copy1

0x35d7,	// (0x0001a0f5) setting_slider_graphic_pane_copy1

0x35d7,	// (0x0001a0f5) setting_slider_pane_copy1

0x35d7,	// (0x0001a0f5) setting_text_pane_copy1

0x35e1,	// (0x0001a0ff) setting_volume_pane_copy1

0x35ea,	// (0x0001a108) settings_code_pane_cp2_copy1

0x35f2,	// (0x0001a110) settings_code_pane_cp_copy1_ParamLimits

0x35f2,	// (0x0001a110) settings_code_pane_cp_copy1

0x3606,	// (0x0001a124) volume_set_pane_copy1

0x3622,	// (0x0001a140) volume_set_pane_g10_copy1

0x362a,	// (0x0001a148) volume_set_pane_g1_copy1

0x3632,	// (0x0001a150) volume_set_pane_g2_copy1

0x363a,	// (0x0001a158) volume_set_pane_g3_copy1

0x3642,	// (0x0001a160) volume_set_pane_g4_copy1

0x364a,	// (0x0001a168) volume_set_pane_g5_copy1

0x3652,	// (0x0001a170) volume_set_pane_g6_copy1

0x365a,	// (0x0001a178) volume_set_pane_g7_copy1

0x3662,	// (0x0001a180) volume_set_pane_g8_copy1

0x366a,	// (0x0001a188) volume_set_pane_g9_copy1

0xbbdf,	// (0x000226fd) bg_set_opt_pane_cp_copy1_ParamLimits

0xbbdf,	// (0x000226fd) bg_set_opt_pane_cp_copy1

0x3672,	// (0x0001a190) setting_slider_pane_t1_copy1_ParamLimits

0x3672,	// (0x0001a190) setting_slider_pane_t1_copy1

0x3690,	// (0x0001a1ae) setting_slider_pane_t2_copy1_ParamLimits

0x3690,	// (0x0001a1ae) setting_slider_pane_t2_copy1

0x36aa,	// (0x0001a1c8) setting_slider_pane_t3_copy1_ParamLimits

0x36aa,	// (0x0001a1c8) setting_slider_pane_t3_copy1

0x36c2,	// (0x0001a1e0) slider_set_pane_copy1_ParamLimits

0x36c2,	// (0x0001a1e0) slider_set_pane_copy1

0xc28d,	// (0x00022dab) set_opt_bg_pane_g1_copy2

0xc295,	// (0x00022db3) set_opt_bg_pane_g2_copy2

0x36d8,	// (0x0001a1f6) set_opt_bg_pane_g3_copy2

0xc2a5,	// (0x00022dc3) set_opt_bg_pane_g4_copy2

0xc2ad,	// (0x00022dcb) set_opt_bg_pane_g5_copy2

0xc2b5,	// (0x00022dd3) set_opt_bg_pane_g6_copy2

0x36e2,	// (0x0001a200) set_opt_bg_pane_g7_copy2

0x36ea,	// (0x0001a208) set_opt_bg_pane_g8_copy2

0x36f4,	// (0x0001a212) set_opt_bg_pane_g9_copy2

0x75eb,	// (0x0001e109) aid_size_touch_slider_mark_copy1_ParamLimits

0x75eb,	// (0x0001e109) aid_size_touch_slider_mark_copy1

0x36fe,	// (0x0001a21c) slider_set_pane_g1_copy1

0x75ff,	// (0x0001e11d) slider_set_pane_g2_copy1

0x618c,	// (0x0001ccaa) slider_set_pane_g3_copy1_ParamLimits

0x618c,	// (0x0001ccaa) slider_set_pane_g3_copy1

0x61a0,	// (0x0001ccbe) slider_set_pane_g4_copy1_ParamLimits

0x61a0,	// (0x0001ccbe) slider_set_pane_g4_copy1

0x61b8,	// (0x0001ccd6) slider_set_pane_g5_copy1_ParamLimits

0x61b8,	// (0x0001ccd6) slider_set_pane_g5_copy1

0x618c,	// (0x0001ccaa) slider_set_pane_g6_copy1_ParamLimits

0x618c,	// (0x0001ccaa) slider_set_pane_g6_copy1

0x7607,	// (0x0001e125) slider_set_pane_g7_copy1_ParamLimits

0x7607,	// (0x0001e125) slider_set_pane_g7_copy1

0xbb83,	// (0x000226a1) bg_set_opt_pane_cp2_copy1

0x3707,	// (0x0001a225) setting_slider_graphic_pane_g1_copy1

0x3710,	// (0x0001a22e) setting_slider_graphic_pane_t1_copy1

0x3720,	// (0x0001a23e) setting_slider_graphic_pane_t2_copy1

0x3730,	// (0x0001a24e) slider_set_pane_cp_copy1

0x3740,	// (0x0001a25e) input_focus_pane_cp1_copy1

0x3749,	// (0x0001a267) list_set_text_pane_copy1

0x3751,	// (0x0001a26f) setting_text_pane_g1_copy1

0x542c,	// (0x0001bf4a) set_text_pane_t1_copy1

0x3740,	// (0x0001a25e) input_focus_pane_cp2_copy1

0x3751,	// (0x0001a26f) setting_code_pane_g1_copy1

0x3777,	// (0x0001a295) setting_code_pane_t1_copy1

0x360e,	// (0x0001a12c) list_set_graphic_pane_copy1

0xbb83,	// (0x000226a1) bg_set_opt_pane_cp4_copy1

0xc96f,	// (0x0002348d) list_set_graphic_pane_g1_copy1_ParamLimits

0xc96f,	// (0x0002348d) list_set_graphic_pane_g1_copy1

0x3785,	// (0x0001a2a3) list_set_graphic_pane_g2_copy1

0xc987,	// (0x000234a5) list_set_graphic_pane_t1_copy1_ParamLimits

0xc987,	// (0x000234a5) list_set_graphic_pane_t1_copy1

0xef5f,	// (0x00025a7d) rs_clock_indi_pane_g1

0x378d,	// (0x0001a2ab) rs_clock_indi_pane_t1

0x379b,	// (0x0001a2b9) rs_indi_pane

0x37a3,	// (0x0001a2c1) rs_indi_pane_g1

0x37ac,	// (0x0001a2ca) rs_indi_pane_g2

0x37b5,	// (0x0001a2d3) rs_indi_pane_g3

0x0002,

0xfebf,	// (0x000269dd) rs_indi_pane_g

0xcc6d,	// (0x0002378b) bg_popup_preview_window_pane_cp03

0x37be,	// (0x0001a2dc) popup_fep_tooltip_window_t1

0x0660,	// (0x0001717e) popup_note2_window_g2_ParamLimits

0x0660,	// (0x0001717e) popup_note2_window_g2

0x0001,

0xfc5f,	// (0x0002677d) popup_note2_window_g_ParamLimits

0xfc5f,	// (0x0002677d) popup_note2_window_g

0x0c42,	// (0x00017760) bg_popup_sub_pane_cp11_ParamLimits

0x0c4f,	// (0x0001776d) cell_ai3_links_pane_g1_ParamLimits

0x0c66,	// (0x00017784) cell_ai3_links_pane_t1

0x542c,	// (0x0001bf4a) set_text_pane_t1_copy1_ParamLimits

0xcb7c,	// (0x0002369a) cell_graphic_popup_pane_cp2_ParamLimits

0xcb7c,	// (0x0002369a) cell_graphic_popup_pane_cp2

0x37cc,	// (0x0001a2ea) cell_graphic_popup_pane_g1_cp2

0xbf7b,	// (0x00022a99) cell_graphic_popup_pane_g2_cp2

0x37d4,	// (0x0001a2f2) cell_graphic_popup_pane_g3_cp2

0x37dc,	// (0x0001a2fa) cell_graphic_popup_pane_t2_cp2

0xbf8c,	// (0x00022aaa) grid_highlight_pane_cp3_cp2

0xc527,	// (0x00023045) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc226,	// (0x00022d44) main_tmo_pane_ParamLimits

0xa85b,	// (0x00021379) popup_tmo_big_image_note_window

0xb808,	// (0x00022326) cell_ai5_widget_list_pane

0xb810,	// (0x0002232e) cell_ai5_widget_lrg_icon_pane

0xbab5,	// (0x000225d3) tmo_note_info_pane_t1_ParamLimits

0xbaca,	// (0x000225e8) tmo_note_info_pane_t2_ParamLimits

0xbae3,	// (0x00022601) tmo_note_info_pane_t3_ParamLimits

0x3388,	// (0x00019ea6) tmo_note_info_pane_t4_ParamLimits

0x339a,	// (0x00019eb8) tmo_note_info_pane_t5_ParamLimits

0xfead,	// (0x000269cb) tmo_note_info_pane_t_ParamLimits

0x34d0,	// (0x00019fee) settings_container_pane_ParamLimits

0x3738,	// (0x0001a256) indicator_popup_pane_cp5

0x3738,	// (0x0001a256) indicator_popup_pane_cp6

0x360e,	// (0x0001a12c) list_set_graphic_pane_copy1_ParamLimits

0xbb6f,	// (0x0002268d) bg_popup_window_pane_cp23

0x37ea,	// (0x0001a308) popup_tmo_big_image_note_window_g1

0x37f5,	// (0x0001a313) popup_tmo_big_image_note_window_t1

0x3805,	// (0x0001a323) popup_tmo_big_image_note_window_t2

0x3815,	// (0x0001a333) popup_tmo_big_image_note_window_t3

0x0002,

0xfec6,	// (0x000269e4) popup_tmo_big_image_note_window_t

0xbaf8,	// (0x00022616) cell_ai5_widget_lrg_icon_pane_g1

0xbb00,	// (0x0002261e) cell_ai5_widget_lrg_icon_pane_t1

0xbb0e,	// (0x0002262c) cell_ai5_widget_list_row_pane_ParamLimits

0xbb0e,	// (0x0002262c) cell_ai5_widget_list_row_pane

0xbb27,	// (0x00022645) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xbb27,	// (0x00022645) cell_ai5_widget_list_row_pane_g1

0xbb34,	// (0x00022652) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xbb34,	// (0x00022652) cell_ai5_widget_list_row_pane_t1

0xbb4c,	// (0x0002266a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xbb4c,	// (0x0002266a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfecd,	// (0x000269eb) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecd,	// (0x000269eb) cell_ai5_widget_list_row_pane_t

0xbb6f,	// (0x0002268d) main_fep_vtchi_ss_pane

0x3825,	// (0x0001a343) popup_fep_char_pre_window

0x382d,	// (0x0001a34b) popup_fep_ituss_window

0x384e,	// (0x0001a36c) popup_fep_vkbss_window

0x386d,	// (0x0001a38b) grid_vkbss_keypad_pane_ParamLimits

0x386d,	// (0x0001a38b) grid_vkbss_keypad_pane

0x387d,	// (0x0001a39b) ituss_keypad_pane

0x3895,	// (0x0001a3b3) aid_vkbss_key_offset_ParamLimits

0x3895,	// (0x0001a3b3) aid_vkbss_key_offset

0x38a1,	// (0x0001a3bf) cell_vkbss_key_pane_ParamLimits

0x38a1,	// (0x0001a3bf) cell_vkbss_key_pane

0x38b7,	// (0x0001a3d5) bg_cell_vkbss_key_g1_ParamLimits

0x38b7,	// (0x0001a3d5) bg_cell_vkbss_key_g1

0x38c3,	// (0x0001a3e1) cell_vkbss_key_3p_pane_ParamLimits

0x38c3,	// (0x0001a3e1) cell_vkbss_key_3p_pane

0x38dd,	// (0x0001a3fb) cell_vkbss_key_g1_ParamLimits

0x38dd,	// (0x0001a3fb) cell_vkbss_key_g1

0x38f7,	// (0x0001a415) cell_vkbss_key_t1_ParamLimits

0x38f7,	// (0x0001a415) cell_vkbss_key_t1

0x3922,	// (0x0001a440) cell_ituss_key_pane_ParamLimits

0x3922,	// (0x0001a440) cell_ituss_key_pane

0x3932,	// (0x0001a450) bg_cell_ituss_key_g1_ParamLimits

0x3932,	// (0x0001a450) bg_cell_ituss_key_g1

0x393e,	// (0x0001a45c) cell_ituss_key_pane_g1_ParamLimits

0x393e,	// (0x0001a45c) cell_ituss_key_pane_g1

0x394a,	// (0x0001a468) cell_ituss_key_pane_g2_ParamLimits

0x394a,	// (0x0001a468) cell_ituss_key_pane_g2

0x0001,

0xfed2,	// (0x000269f0) cell_ituss_key_pane_g_ParamLimits

0xfed2,	// (0x000269f0) cell_ituss_key_pane_g

0x3963,	// (0x0001a481) cell_ituss_key_t1_ParamLimits

0x3963,	// (0x0001a481) cell_ituss_key_t1

0x3991,	// (0x0001a4af) cell_ituss_key_t2_ParamLimits

0x3991,	// (0x0001a4af) cell_ituss_key_t2

0x39c2,	// (0x0001a4e0) cell_ituss_key_t3_ParamLimits

0x39c2,	// (0x0001a4e0) cell_ituss_key_t3

0x39f3,	// (0x0001a511) cell_ituss_key_t4_ParamLimits

0x39f3,	// (0x0001a511) cell_ituss_key_t4

0x0003,

0xfed7,	// (0x000269f5) cell_ituss_key_t_ParamLimits

0xfed7,	// (0x000269f5) cell_ituss_key_t

0x3a24,	// (0x0001a542) cell_vkbss_key_3p_pane_g1

0x3a2c,	// (0x0001a54a) cell_vkbss_key_3p_pane_g2

0x3a34,	// (0x0001a552) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee0,	// (0x000269fe) cell_vkbss_key_3p_pane_g

0xbb6f,	// (0x0002268d) bg_popup_fep_char_preview_window_cp02

0x3a3c,	// (0x0001a55a) popup_fep_char_pre_window_t1

0xb7fe,	// (0x0002231c) main_ai5_sk_pane

0x3414,	// (0x00019f32) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x3420,	// (0x00019f3e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x3434,	// (0x00019f52) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x3443,	// (0x00019f61) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb8,	// (0x000269d6) cell_contacts_ai5_widget_pane_g_ParamLimits

0x3456,	// (0x00019f74) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc226,	// (0x00022d44) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xbb5e,	// (0x0002267c) main_ai5_sk_pane_g1

0xd5a0,	// (0x000240be) popup_query_code_window_g1

0x3843,	// (0x0001a361) popup_fep_vkb_icf_pane

0x3857,	// (0x0001a375) popup_fep_vtchi_icf_pane

0xc226,	// (0x00022d44) bg_icf_pane

0x3a5a,	// (0x0001a578) list_vkb_icf_pane

0xc226,	// (0x00022d44) bg_icf_pane_cp01

0x0fd5,	// (0x00017af3) vtchi_icf_list_pane

0x3a7a,	// (0x0001a598) list_vkb_icf_pane_t1_ParamLimits

0x3a7a,	// (0x0001a598) list_vkb_icf_pane_t1

0x3a94,	// (0x0001a5b2) vtchi_icf_list_pane_t1_ParamLimits

0x3a94,	// (0x0001a5b2) vtchi_icf_list_pane_t1

0x382d,	// (0x0001a34b) popup_fep_ituss_window_ParamLimits

0x3857,	// (0x0001a375) popup_fep_vtchi_icf_pane_ParamLimits

0x387d,	// (0x0001a39b) ituss_keypad_pane_ParamLimits

0x388c,	// (0x0001a3aa) ituss_sks_pane

0xc226,	// (0x00022d44) bg_icf_pane_ParamLimits

0x3a4b,	// (0x0001a569) icf_edit_indi_pane_ParamLimits

0x3a4b,	// (0x0001a569) icf_edit_indi_pane

0x3a5a,	// (0x0001a578) list_vkb_icf_pane_ParamLimits

0xc226,	// (0x00022d44) bg_icf_pane_cp01_ParamLimits

0x3a66,	// (0x0001a584) icf_edit_indi_pane_cp01_ParamLimits

0x3a66,	// (0x0001a584) icf_edit_indi_pane_cp01

0x3a72,	// (0x0001a590) vtchi_query_pane

0xf1e6,	// (0x00025d04) icf_edit_indi_pane_g1_ParamLimits

0xf1e6,	// (0x00025d04) icf_edit_indi_pane_g1

0x3ab9,	// (0x0001a5d7) icf_edit_indi_pane_g2_ParamLimits

0x3ab9,	// (0x0001a5d7) icf_edit_indi_pane_g2

0x0001,

0xfee7,	// (0x00026a05) icf_edit_indi_pane_g_ParamLimits

0xfee7,	// (0x00026a05) icf_edit_indi_pane_g

0x3ac5,	// (0x0001a5e3) icf_edit_indi_pane_t1

0x3ad3,	// (0x0001a5f1) bg_input_focus_pane_cp042

0xc15f,	// (0x00022c7d) vtchi_button_pane

0x3adc,	// (0x0001a5fa) vtchi_query_pane_t1

0x3aea,	// (0x0001a608) vtchi_query_pane_t2

0x3af8,	// (0x0001a616) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x00026a0a) vtchi_query_pane_t

0xbb6f,	// (0x0002268d) bg_button_pane_cp13

0x3b06,	// (0x0001a624) vtchi_button_pane_g1

0x1520,	// (0x0001803e) ituss_sks_pane_g1

0x3b0e,	// (0x0001a62c) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x00026a11) ituss_sks_pane_g

0x3b17,	// (0x0001a635) ituss_sks_pane_t1

0x3b25,	// (0x0001a643) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x00026a16) ituss_sks_pane_t

0xec2c,	// (0x0002574a) indicator_nsta_pane_cp_g1

0xec35,	// (0x00025753) indicator_nsta_pane_cp_g2

0xec3d,	// (0x0002575b) indicator_nsta_pane_cp_g3

0xec45,	// (0x00025763) indicator_nsta_pane_cp_g4

0xec4d,	// (0x0002576b) indicator_nsta_pane_cp_g5

0xec55,	// (0x00025773) indicator_nsta_pane_cp_g6

0x0005,

0xfaa9,	// (0x000265c7) indicator_nsta_pane_cp_g

0xb5b4,	// (0x000220d2) cell_graphic2_pane_t2_ParamLimits

0xb5b4,	// (0x000220d2) cell_graphic2_pane_t2

0x0001,

0xfdaf,	// (0x000268cd) cell_graphic2_pane_t_ParamLimits

0xfdaf,	// (0x000268cd) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
