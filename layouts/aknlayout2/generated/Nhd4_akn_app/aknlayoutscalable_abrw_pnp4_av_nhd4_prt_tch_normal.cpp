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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00009890 };

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
0x7cb8,	// (0x00011548) Screen

0x7ccc,	// (0x0001155c) application_window_ParamLimits

0x7ccc,	// (0x0001155c) application_window

0x7ce6,	// (0x00011576) screen_g1

0x5a90,	// (0x0000f320) area_bottom_pane_ParamLimits

0x5a90,	// (0x0000f320) area_bottom_pane

0x5b50,	// (0x0000f3e0) area_top_pane_ParamLimits

0x5b50,	// (0x0000f3e0) area_top_pane

0x5bee,	// (0x0000f47e) main_pane_ParamLimits

0x5bee,	// (0x0000f47e) main_pane

0x7cf0,	// (0x00011580) misc_graphics

0x9e03,	// (0x00013693) battery_pane_ParamLimits

0x9e03,	// (0x00013693) battery_pane

0xabfd,	// (0x0001448d) bg_status_flat_pane_g8

0xac05,	// (0x00014495) bg_status_flat_pane_g9

0x9ec5,	// (0x00013755) context_pane_ParamLimits

0x9ec5,	// (0x00013755) context_pane

0x9fdb,	// (0x0001386b) navi_pane_ParamLimits

0x9fdb,	// (0x0001386b) navi_pane

0xa059,	// (0x000138e9) signal_pane_ParamLimits

0xa059,	// (0x000138e9) signal_pane

0x0008,

0xf87a,	// (0x0001910a) bg_status_flat_pane_g

0xa0c6,	// (0x00013956) status_pane_g1_ParamLimits

0xa0c6,	// (0x00013956) status_pane_g1

0xa0da,	// (0x0001396a) status_pane_g2_ParamLimits

0xa0da,	// (0x0001396a) status_pane_g2

0xa0e6,	// (0x00013976) status_pane_g3_ParamLimits

0xa0e6,	// (0x00013976) status_pane_g3

0x0004,

0xf7a1,	// (0x00019031) status_pane_g_ParamLimits

0xf7a1,	// (0x00019031) status_pane_g

0xa118,	// (0x000139a8) title_pane_ParamLimits

0xa118,	// (0x000139a8) title_pane

0xa155,	// (0x000139e5) uni_indicator_pane_ParamLimits

0xa155,	// (0x000139e5) uni_indicator_pane

0x9d17,	// (0x000135a7) bg_list_pane_ParamLimits

0x9d17,	// (0x000135a7) bg_list_pane

0x9d37,	// (0x000135c7) find_pane

0x9d3f,	// (0x000135cf) listscroll_app_pane_ParamLimits

0x9d3f,	// (0x000135cf) listscroll_app_pane

0x9d4b,	// (0x000135db) listscroll_form_pane

0x649b,	// (0x0000fd2b) listscroll_gen_pane_ParamLimits

0x649b,	// (0x0000fd2b) listscroll_gen_pane

0x9d4b,	// (0x000135db) listscroll_set_pane

0x8f13,	// (0x000127a3) main_idle_act_pane

0x9a21,	// (0x000132b1) main_idle_trad_pane

0x9a21,	// (0x000132b1) main_list_empty_pane

0x9d65,	// (0x000135f5) main_midp_pane

0x9d71,	// (0x00013601) main_pane_g1_ParamLimits

0x9d71,	// (0x00013601) main_pane_g1

0x64bd,	// (0x0000fd4d) popup_ai_message_window_ParamLimits

0x64bd,	// (0x0000fd4d) popup_ai_message_window

0x655f,	// (0x0000fdef) popup_fep_china_uni_window_ParamLimits

0x655f,	// (0x0000fdef) popup_fep_china_uni_window

0x65b9,	// (0x0000fe49) popup_fep_japan_candidate_window_ParamLimits

0x65b9,	// (0x0000fe49) popup_fep_japan_candidate_window

0x65d7,	// (0x0000fe67) popup_fep_japan_predictive_window_ParamLimits

0x65d7,	// (0x0000fe67) popup_fep_japan_predictive_window

0x6607,	// (0x0000fe97) popup_find_window

0x6614,	// (0x0000fea4) popup_grid_graphic_window_ParamLimits

0x6614,	// (0x0000fea4) popup_grid_graphic_window

0x663a,	// (0x0000feca) popup_large_graphic_colour_window

0x6660,	// (0x0000fef0) popup_menu_window_ParamLimits

0x6660,	// (0x0000fef0) popup_menu_window

0x681a,	// (0x000100aa) popup_note_image_window

0x6806,	// (0x00010096) popup_note_wait_window_ParamLimits

0x6806,	// (0x00010096) popup_note_wait_window

0x6806,	// (0x00010096) popup_note_window_ParamLimits

0x6806,	// (0x00010096) popup_note_window

0x6870,	// (0x00010100) popup_query_code_window_ParamLimits

0x6870,	// (0x00010100) popup_query_code_window

0x6884,	// (0x00010114) popup_query_data_code_window_ParamLimits

0x6884,	// (0x00010114) popup_query_data_code_window

0x689b,	// (0x0001012b) popup_query_data_window_ParamLimits

0x689b,	// (0x0001012b) popup_query_data_window

0x68b3,	// (0x00010143) popup_query_sat_info_window_ParamLimits

0x68b3,	// (0x00010143) popup_query_sat_info_window

0x68ec,	// (0x0001017c) popup_snote_single_graphic_window_ParamLimits

0x68ec,	// (0x0001017c) popup_snote_single_graphic_window

0x68ec,	// (0x0001017c) popup_snote_single_text_window_ParamLimits

0x68ec,	// (0x0001017c) popup_snote_single_text_window

0x6901,	// (0x00010191) popup_sub_window_general

0x6a2f,	// (0x000102bf) popup_window_general_ParamLimits

0x6a2f,	// (0x000102bf) popup_window_general

0x9d87,	// (0x00013617) power_save_pane

0x6335,	// (0x0000fbc5) control_pane_g1_ParamLimits

0x6335,	// (0x0000fbc5) control_pane_g1

0x635c,	// (0x0000fbec) control_pane_g2_ParamLimits

0x635c,	// (0x0000fbec) control_pane_g2

0x9cda,	// (0x0001356a) control_pane_g3_ParamLimits

0x9cda,	// (0x0001356a) control_pane_g3

0x0007,

0xf789,	// (0x00019019) control_pane_g_ParamLimits

0xf789,	// (0x00019019) control_pane_g

0x63a0,	// (0x0000fc30) control_pane_t1_ParamLimits

0x63a0,	// (0x0000fc30) control_pane_t1

0x63ec,	// (0x0000fc7c) control_pane_t2_ParamLimits

0x63ec,	// (0x0000fc7c) control_pane_t2

0x0002,

0xf79a,	// (0x0001902a) control_pane_t_ParamLimits

0xf79a,	// (0x0001902a) control_pane_t

0x9bfb,	// (0x0001348b) navi_navi_volume_pane_cp1

0x9c04,	// (0x00013494) status_small_icon_pane

0x9c0c,	// (0x0001349c) status_small_pane_g1_ParamLimits

0x9c0c,	// (0x0001349c) status_small_pane_g1

0x9c40,	// (0x000134d0) status_small_pane_g2_ParamLimits

0x9c40,	// (0x000134d0) status_small_pane_g2

0x9c4c,	// (0x000134dc) status_small_pane_g3_ParamLimits

0x9c4c,	// (0x000134dc) status_small_pane_g3

0x9c58,	// (0x000134e8) status_small_pane_g4_ParamLimits

0x9c58,	// (0x000134e8) status_small_pane_g4

0x9c64,	// (0x000134f4) status_small_pane_g5_ParamLimits

0x9c64,	// (0x000134f4) status_small_pane_g5

0x9c73,	// (0x00013503) status_small_pane_g6_ParamLimits

0x9c73,	// (0x00013503) status_small_pane_g6

0x0007,

0xf778,	// (0x00019008) status_small_pane_g_ParamLimits

0xf778,	// (0x00019008) status_small_pane_g

0x9ca3,	// (0x00013533) status_small_pane_t1

0x9cc6,	// (0x00013556) status_small_wait_pane_ParamLimits

0x9cc6,	// (0x00013556) status_small_wait_pane

0x9408,	// (0x00012c98) aid_levels_signal_ParamLimits

0x9408,	// (0x00012c98) aid_levels_signal

0x941a,	// (0x00012caa) signal_pane_g1_ParamLimits

0x941a,	// (0x00012caa) signal_pane_g1

0x942f,	// (0x00012cbf) signal_pane_g2_ParamLimits

0x942f,	// (0x00012cbf) signal_pane_g2

0x0003,

0xf709,	// (0x00018f99) signal_pane_g_ParamLimits

0xf709,	// (0x00018f99) signal_pane_g

0x946a,	// (0x00012cfa) context_pane_g1

0x7cfa,	// (0x0001158a) title_pane_g1

0x7d30,	// (0x000115c0) title_pane_t1

0x7d98,	// (0x00011628) title_pane_t2

0x7dbe,	// (0x0001164e) title_pane_t3

0x0002,

0xf55d,	// (0x00018ded) title_pane_t

0xa16d,	// (0x000139fd) aid_levels_battery_ParamLimits

0xa16d,	// (0x000139fd) aid_levels_battery

0xa181,	// (0x00013a11) battery_pane_g1_ParamLimits

0xa181,	// (0x00013a11) battery_pane_g1

0xa197,	// (0x00013a27) battery_pane_g2_ParamLimits

0xa197,	// (0x00013a27) battery_pane_g2

0x0001,

0xf7ac,	// (0x0001903c) battery_pane_g_ParamLimits

0xf7ac,	// (0x0001903c) battery_pane_g

0xb51b,	// (0x00014dab) uni_indicator_pane_g1

0xb530,	// (0x00014dc0) uni_indicator_pane_g2

0xb546,	// (0x00014dd6) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x000191b2) uni_indicator_pane_g

0x9891,	// (0x00013121) navi_icon_pane_ParamLimits

0x9891,	// (0x00013121) navi_icon_pane

0x97d8,	// (0x00013068) navi_midp_pane

0x98ad,	// (0x0001313d) navi_navi_pane

0x98b7,	// (0x00013147) navi_text_pane_ParamLimits

0x98b7,	// (0x00013147) navi_text_pane

0x7ce6,	// (0x00011576) status_small_wait_pane_g1

0x81fb,	// (0x00011a8b) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x000191ad) status_small_wait_pane_g

0xb23e,	// (0x00014ace) navi_navi_icon_text_pane

0xb246,	// (0x00014ad6) navi_navi_pane_g1_ParamLimits

0xb246,	// (0x00014ad6) navi_navi_pane_g1

0xb258,	// (0x00014ae8) navi_navi_pane_g2_ParamLimits

0xb258,	// (0x00014ae8) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0001917b) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0001917b) navi_navi_pane_g

0xb26a,	// (0x00014afa) navi_navi_tabs_pane

0xb273,	// (0x00014b03) navi_navi_text_pane

0xb23e,	// (0x00014ace) navi_navi_volume_pane

0xb21a,	// (0x00014aaa) navi_text_pane_t1

0xb20e,	// (0x00014a9e) navi_icon_pane_g1

0xb16d,	// (0x000149fd) navi_navi_text_pane_t1

0x6d49,	// (0x000105d9) navi_navi_volume_pane_g1

0x6d51,	// (0x000105e1) volume_small_pane

0xb0d3,	// (0x00014963) navi_navi_icon_text_pane_g1

0xb0db,	// (0x0001496b) navi_navi_icon_text_pane_t1

0x98ad,	// (0x0001313d) navi_tabs_2_long_pane

0x98ad,	// (0x0001313d) navi_tabs_2_pane

0x98ad,	// (0x0001313d) navi_tabs_3_long_pane

0x98ad,	// (0x0001313d) navi_tabs_3_pane

0x98ad,	// (0x0001313d) navi_tabs_4_pane

0x6d29,	// (0x000105b9) tabs_2_active_pane_ParamLimits

0x6d29,	// (0x000105b9) tabs_2_active_pane

0x6d39,	// (0x000105c9) tabs_2_passive_pane_ParamLimits

0x6d39,	// (0x000105c9) tabs_2_passive_pane

0x6cf7,	// (0x00010587) tabs_3_active_pane_ParamLimits

0x6cf7,	// (0x00010587) tabs_3_active_pane

0x6d07,	// (0x00010597) tabs_3_passive_pane_ParamLimits

0x6d07,	// (0x00010597) tabs_3_passive_pane

0x6d18,	// (0x000105a8) tabs_3_passive_pane_cp_ParamLimits

0x6d18,	// (0x000105a8) tabs_3_passive_pane_cp

0x6cb3,	// (0x00010543) tabs_4_active_pane_ParamLimits

0x6cb3,	// (0x00010543) tabs_4_active_pane

0x6cc4,	// (0x00010554) tabs_4_passive_pane_ParamLimits

0x6cc4,	// (0x00010554) tabs_4_passive_pane

0x6cd5,	// (0x00010565) tabs_4_passive_pane_cp_ParamLimits

0x6cd5,	// (0x00010565) tabs_4_passive_pane_cp

0x6ce6,	// (0x00010576) tabs_4_passive_pane_cp2_ParamLimits

0x6ce6,	// (0x00010576) tabs_4_passive_pane_cp2

0x6c8f,	// (0x0001051f) tabs_2_long_active_pane_ParamLimits

0x6c8f,	// (0x0001051f) tabs_2_long_active_pane

0x6ca1,	// (0x00010531) tabs_2_long_passive_pane_ParamLimits

0x6ca1,	// (0x00010531) tabs_2_long_passive_pane

0x6c4a,	// (0x000104da) tabs_3_long_active_pane_ParamLimits

0x6c4a,	// (0x000104da) tabs_3_long_active_pane

0x6c63,	// (0x000104f3) tabs_3_long_passive_pane_ParamLimits

0x6c63,	// (0x000104f3) tabs_3_long_passive_pane

0x6c76,	// (0x00010506) tabs_3_long_passive_pane_cp_ParamLimits

0x6c76,	// (0x00010506) tabs_3_long_passive_pane_cp

0x6bf0,	// (0x00010480) volume_small_pane_g1

0x6bf9,	// (0x00010489) volume_small_pane_g2

0x6c02,	// (0x00010492) volume_small_pane_g3

0x6c0b,	// (0x0001049b) volume_small_pane_g4

0x6c14,	// (0x000104a4) volume_small_pane_g5

0x6c1d,	// (0x000104ad) volume_small_pane_g6

0x6c26,	// (0x000104b6) volume_small_pane_g7

0x6c2f,	// (0x000104bf) volume_small_pane_g8

0x6c38,	// (0x000104c8) volume_small_pane_g9

0x6c41,	// (0x000104d1) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x00019147) volume_small_pane_g

0x7dd0,	// (0x00011660) bg_active_tab_pane_cp2_ParamLimits

0x7dd0,	// (0x00011660) bg_active_tab_pane_cp2

0x7dde,	// (0x0001166e) tabs_3_active_pane_g1

0x7de6,	// (0x00011676) tabs_3_active_pane_t1

0x7dd0,	// (0x00011660) bg_passive_tab_pane_cp2_ParamLimits

0x7dd0,	// (0x00011660) bg_passive_tab_pane_cp2

0x7dde,	// (0x0001166e) tabs_3_passive_pane_g1

0x7de6,	// (0x00011676) tabs_3_passive_pane_t1

0x7dd0,	// (0x00011660) bg_active_tab_pane_cp3_ParamLimits

0x7dd0,	// (0x00011660) bg_active_tab_pane_cp3

0x7df8,	// (0x00011688) tabs_4_active_pane_g1

0x7e00,	// (0x00011690) tabs_4_active_pane_t1

0x7dd0,	// (0x00011660) bg_passive_tab_pane_cp3_ParamLimits

0x7dd0,	// (0x00011660) bg_passive_tab_pane_cp3

0x7df8,	// (0x00011688) tabs_4_1_passive_pane_g1

0x7e00,	// (0x00011690) tabs_4_1_passive_pane_t1

0x9d65,	// (0x000135f5) list_highlight_pane_cp2

0xb7c7,	// (0x00015057) list_set_pane_ParamLimits

0xb7c7,	// (0x00015057) list_set_pane

0xb869,	// (0x000150f9) main_pane_set_t1_ParamLimits

0xb869,	// (0x000150f9) main_pane_set_t1

0xb889,	// (0x00015119) main_pane_set_t2_ParamLimits

0xb889,	// (0x00015119) main_pane_set_t2

0xb89d,	// (0x0001512d) main_pane_set_t3_ParamLimits

0xb89d,	// (0x0001512d) main_pane_set_t3

0xb8af,	// (0x0001513f) main_pane_set_t4_ParamLimits

0xb8af,	// (0x0001513f) main_pane_set_t4

0x0003,

0xf987,	// (0x00019217) main_pane_set_t_ParamLimits

0xf987,	// (0x00019217) main_pane_set_t

0xb8c1,	// (0x00015151) setting_code_pane

0xb8cb,	// (0x0001515b) setting_slider_graphic_pane

0xb8cb,	// (0x0001515b) setting_slider_pane

0xb8cb,	// (0x0001515b) setting_text_pane

0xb8cb,	// (0x0001515b) setting_volume_pane

0x5e1f,	// (0x0000f6af) volume_set_pane

0x7dd0,	// (0x00011660) bg_set_opt_pane_cp

0x5e27,	// (0x0000f6b7) setting_slider_pane_t1

0x5e40,	// (0x0000f6d0) setting_slider_pane_t2

0x5e59,	// (0x0000f6e9) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00018df4) setting_slider_pane_t

0x5e70,	// (0x0000f700) slider_set_pane

0x7cf0,	// (0x00011580) bg_set_opt_pane_cp2

0x7e12,	// (0x000116a2) setting_slider_graphic_pane_g1

0x5e86,	// (0x0000f716) setting_slider_graphic_pane_t1

0x5e95,	// (0x0000f725) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00018dfb) setting_slider_graphic_pane_t

0x5ea4,	// (0x0000f734) slider_set_pane_cp

0x7cf0,	// (0x00011580) input_focus_pane_cp1

0xb786,	// (0x00015016) list_set_text_pane

0x7ce6,	// (0x00011576) setting_text_pane_g1

0x7cf0,	// (0x00011580) input_focus_pane_cp2

0x7ce6,	// (0x00011576) setting_code_pane_g1

0x7e1b,	// (0x000116ab) setting_code_pane_t1

0x7e29,	// (0x000116b9) set_text_pane_t1_ParamLimits

0x7e29,	// (0x000116b9) set_text_pane_t1

0x8ce5,	// (0x00012575) set_opt_bg_pane_g1

0x8ced,	// (0x0001257d) set_opt_bg_pane_g2

0xb766,	// (0x00014ff6) set_opt_bg_pane_g3

0x8cfd,	// (0x0001258d) set_opt_bg_pane_g4

0x8d05,	// (0x00012595) set_opt_bg_pane_g5

0x8d0d,	// (0x0001259d) set_opt_bg_pane_g6

0xb76e,	// (0x00014ffe) set_opt_bg_pane_g7

0xb776,	// (0x00015006) set_opt_bg_pane_g8

0xb77e,	// (0x0001500e) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x00019204) set_opt_bg_pane_g

0xb759,	// (0x00014fe9) slider_set_pane_g1

0x6dbe,	// (0x0001064e) slider_set_pane_g2

0x0006,

0xf965,	// (0x000191f5) slider_set_pane_g

0x6d5a,	// (0x000105ea) volume_set_pane_g1

0x6d62,	// (0x000105f2) volume_set_pane_g2

0x6d6a,	// (0x000105fa) volume_set_pane_g3

0x6d72,	// (0x00010602) volume_set_pane_g4

0x6d7a,	// (0x0001060a) volume_set_pane_g5

0x6d82,	// (0x00010612) volume_set_pane_g6

0x6d8a,	// (0x0001061a) volume_set_pane_g7

0x6d92,	// (0x00010622) volume_set_pane_g8

0x6d9a,	// (0x0001062a) volume_set_pane_g9

0x6da2,	// (0x00010632) volume_set_pane_g10

0x0009,

0xf93d,	// (0x000191cd) volume_set_pane_g

0x7e43,	// (0x000116d3) indicator_pane_ParamLimits

0x7e43,	// (0x000116d3) indicator_pane

0x7e4f,	// (0x000116df) main_idle_pane_g2_ParamLimits

0x7e4f,	// (0x000116df) main_idle_pane_g2

0x7e77,	// (0x00011707) main_pane_idle_g1_ParamLimits

0x7e77,	// (0x00011707) main_pane_idle_g1

0x7e84,	// (0x00011714) popup_clock_digital_analogue_window_ParamLimits

0x7e84,	// (0x00011714) popup_clock_digital_analogue_window

0x7e9b,	// (0x0001172b) soft_indicator_pane_ParamLimits

0x7e9b,	// (0x0001172b) soft_indicator_pane

0x7ea7,	// (0x00011737) wallpaper_pane_ParamLimits

0x7ea7,	// (0x00011737) wallpaper_pane

0x7ce6,	// (0x00011576) wallpaper_pane_g1

0x7ebb,	// (0x0001174b) indicator_pane_g1_ParamLimits

0x7ebb,	// (0x0001174b) indicator_pane_g1

0xbc59,	// (0x000154e9) navi_navi_icon_text_pane_srt_g1

0x7ed6,	// (0x00011766) soft_indicator_pane_t1

0x7ef0,	// (0x00011780) aid_ps_area_pane

0x7f01,	// (0x00011791) aid_ps_clock_pane

0x7f0f,	// (0x0001179f) aid_ps_indicator_pane

0x7f1b,	// (0x000117ab) indicator_ps_pane_ParamLimits

0x7f1b,	// (0x000117ab) indicator_ps_pane

0x7f2a,	// (0x000117ba) power_save_pane_g1_ParamLimits

0x7f2a,	// (0x000117ba) power_save_pane_g1

0x7f36,	// (0x000117c6) power_save_pane_g2_ParamLimits

0x7f36,	// (0x000117c6) power_save_pane_g2

0x5a44,	// (0x0000f2d4) aid_navinavi_width_pane

0x7ef0,	// (0x00011780) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00018e00) power_save_pane_g_ParamLimits

0xf570,	// (0x00018e00) power_save_pane_g

0x7f44,	// (0x000117d4) power_save_pane_t1_ParamLimits

0x7f44,	// (0x000117d4) power_save_pane_t1

0x7f01,	// (0x00011791) aid_ps_clock_pane_ParamLimits

0x7f0f,	// (0x0001179f) aid_ps_indicator_pane_ParamLimits

0x7f56,	// (0x000117e6) power_save_pane_t4_ParamLimits

0x7f56,	// (0x000117e6) power_save_pane_t4

0x0001,

0xf575,	// (0x00018e05) power_save_pane_t_ParamLimits

0xf575,	// (0x00018e05) power_save_pane_t

0x7f80,	// (0x00011810) power_save_t3_ParamLimits

0x7f80,	// (0x00011810) power_save_t3

0x7f6b,	// (0x000117fb) power_save_t2_ParamLimits

0x7f6b,	// (0x000117fb) power_save_t2

0x7f95,	// (0x00011825) indicator_ps_pane_g1

0x7f9e,	// (0x0001182e) ai_gene_pane_ParamLimits

0x7f9e,	// (0x0001182e) ai_gene_pane

0x7faa,	// (0x0001183a) ai_links_pane_ParamLimits

0x7faa,	// (0x0001183a) ai_links_pane

0x7fb6,	// (0x00011846) indicator_pane_cp1_ParamLimits

0x7fb6,	// (0x00011846) indicator_pane_cp1

0x7fc2,	// (0x00011852) main_pane_idle_g1_cp_ParamLimits

0x7fc2,	// (0x00011852) main_pane_idle_g1_cp

0x7fce,	// (0x0001185e) popup_ai_links_title_window

0x7fd7,	// (0x00011867) soft_indicator_pane_cp1_ParamLimits

0x7fd7,	// (0x00011867) soft_indicator_pane_cp1

0xb509,	// (0x00014d99) ai_links_pane_g1

0xb512,	// (0x00014da2) grid_ai_links_pane

0xb4ec,	// (0x00014d7c) ai_gene_pane_1

0xb4f7,	// (0x00014d87) ai_gene_pane_2

0xb500,	// (0x00014d90) list_highlight_pane_cp4

0xb4d0,	// (0x00014d60) cell_ai_link_pane_ParamLimits

0xb4d0,	// (0x00014d60) cell_ai_link_pane

0xb4c8,	// (0x00014d58) cell_ai_link_pane_g1

0x81fb,	// (0x00011a8b) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x000191a8) cell_ai_link_pane_g

0x7cf0,	// (0x00011580) grid_highlight_cp2

0x7cf0,	// (0x00011580) bg_popup_sub_pane_cp1

0x7ff1,	// (0x00011881) popup_ai_links_title_window_t1

0xb416,	// (0x00014ca6) ai_gene_pane_1_g1_ParamLimits

0xb416,	// (0x00014ca6) ai_gene_pane_1_g1

0xb422,	// (0x00014cb2) ai_gene_pane_1_g2_ParamLimits

0xb422,	// (0x00014cb2) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0001919e) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0001919e) ai_gene_pane_1_g

0xb42f,	// (0x00014cbf) ai_gene_pane_1_t1_ParamLimits

0xb42f,	// (0x00014cbf) ai_gene_pane_1_t1

0xb463,	// (0x00014cf3) grid_ai_soft_ind_pane

0xb401,	// (0x00014c91) ai_gene_pane_2_t1_ParamLimits

0xb401,	// (0x00014c91) ai_gene_pane_2_t1

0x8000,	// (0x00011890) main_pane_empty_t1_ParamLimits

0x8000,	// (0x00011890) main_pane_empty_t1

0x8018,	// (0x000118a8) main_pane_empty_t2_ParamLimits

0x8018,	// (0x000118a8) main_pane_empty_t2

0x802d,	// (0x000118bd) main_pane_empty_t3_ParamLimits

0x802d,	// (0x000118bd) main_pane_empty_t3

0x803f,	// (0x000118cf) main_pane_empty_t4_ParamLimits

0x803f,	// (0x000118cf) main_pane_empty_t4

0x8051,	// (0x000118e1) main_pane_empty_t5_ParamLimits

0x8051,	// (0x000118e1) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00018e0a) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00018e0a) main_pane_empty_t

0x8dde,	// (0x0001266e) bg_popup_window_pane_ParamLimits

0x8dde,	// (0x0001266e) bg_popup_window_pane

0xb17b,	// (0x00014a0b) find_popup_pane_cp2_ParamLimits

0xb17b,	// (0x00014a0b) find_popup_pane_cp2

0xb187,	// (0x00014a17) heading_pane_ParamLimits

0xb187,	// (0x00014a17) heading_pane

0x7cf0,	// (0x00011580) bg_popup_sub_pane

0xb0f5,	// (0x00014985) bg_popup_window_pane_g1_ParamLimits

0xb0f5,	// (0x00014985) bg_popup_window_pane_g1

0xb101,	// (0x00014991) bg_popup_window_pane_g2_ParamLimits

0xb101,	// (0x00014991) bg_popup_window_pane_g2

0xb10d,	// (0x0001499d) bg_popup_window_pane_g3_ParamLimits

0xb10d,	// (0x0001499d) bg_popup_window_pane_g3

0xb119,	// (0x000149a9) bg_popup_window_pane_g4_ParamLimits

0xb119,	// (0x000149a9) bg_popup_window_pane_g4

0xb125,	// (0x000149b5) bg_popup_window_pane_g5_ParamLimits

0xb125,	// (0x000149b5) bg_popup_window_pane_g5

0xb131,	// (0x000149c1) bg_popup_window_pane_g6_ParamLimits

0xb131,	// (0x000149c1) bg_popup_window_pane_g6

0xb13d,	// (0x000149cd) bg_popup_window_pane_g7_ParamLimits

0xb13d,	// (0x000149cd) bg_popup_window_pane_g7

0xb149,	// (0x000149d9) bg_popup_window_pane_g8_ParamLimits

0xb149,	// (0x000149d9) bg_popup_window_pane_g8

0xb155,	// (0x000149e5) bg_popup_window_pane_g9_ParamLimits

0xb155,	// (0x000149e5) bg_popup_window_pane_g9

0xb161,	// (0x000149f1) bg_popup_window_pane_g10_ParamLimits

0xb161,	// (0x000149f1) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x00019166) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x00019166) bg_popup_window_pane_g

0xb08a,	// (0x0001491a) bg_popup_heading_pane_ParamLimits

0xb08a,	// (0x0001491a) bg_popup_heading_pane

0x6e46,	// (0x000106d6) tabs_4_passive_pane_cp_srt_ParamLimits

0x6e46,	// (0x000106d6) tabs_4_passive_pane_cp_srt

0x6e58,	// (0x000106e8) tabs_4_passive_pane_srt_ParamLimits

0xb09e,	// (0x0001492e) heading_pane_g2

0x6e58,	// (0x000106e8) tabs_4_passive_pane_srt

0x9d65,	// (0x000135f5) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9d65,	// (0x000135f5) bg_passive_tab_pane_cp3_srt

0xb0a6,	// (0x00014936) heading_pane_t1_ParamLimits

0xb0a6,	// (0x00014936) heading_pane_t1

0xb0bd,	// (0x0001494d) heading_pane_t2_ParamLimits

0xb0bd,	// (0x0001494d) heading_pane_t2

0x0001,

0xf8d1,	// (0x00019161) heading_pane_t_ParamLimits

0xf8d1,	// (0x00019161) heading_pane_t

0xabc5,	// (0x00014455) bg_popup_heading_pane_g1

0xac74,	// (0x00014504) bg_popup_heading_pane_g2

0xac7e,	// (0x0001450e) bg_popup_heading_pane_g3

0xac88,	// (0x00014518) bg_popup_heading_pane_g4

0xac92,	// (0x00014522) bg_popup_heading_pane_g5

0xac9c,	// (0x0001452c) bg_popup_heading_pane_g6

0xaca4,	// (0x00014534) bg_popup_heading_pane_g7

0xacac,	// (0x0001453c) bg_popup_heading_pane_g8

0xacb6,	// (0x00014546) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0001911d) bg_popup_heading_pane_g

0xa29d,	// (0x00013b2d) bg_popup_sub_pane_g1

0xa2ad,	// (0x00013b3d) bg_popup_sub_pane_g2

0xa2a5,	// (0x00013b35) bg_popup_sub_pane_g3

0xa2bd,	// (0x00013b4d) bg_popup_sub_pane_g4

0xa2b5,	// (0x00013b45) bg_popup_sub_pane_g5

0xa2c5,	// (0x00013b55) bg_popup_sub_pane_g6

0xa2cd,	// (0x00013b5d) bg_popup_sub_pane_g7

0xa2dd,	// (0x00013b6d) bg_popup_sub_pane_g8

0xa2d5,	// (0x00013b65) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x000190f7) bg_popup_sub_pane_g

0x8065,	// (0x000118f5) bg_popup_window_pane_cp5_ParamLimits

0x8065,	// (0x000118f5) bg_popup_window_pane_cp5

0x8081,	// (0x00011911) popup_note_window_g1_ParamLimits

0x8081,	// (0x00011911) popup_note_window_g1

0x808d,	// (0x0001191d) popup_note_window_t1_ParamLimits

0x808d,	// (0x0001191d) popup_note_window_t1

0x809f,	// (0x0001192f) popup_note_window_t2_ParamLimits

0x809f,	// (0x0001192f) popup_note_window_t2

0x80b1,	// (0x00011941) popup_note_window_t3_ParamLimits

0x80b1,	// (0x00011941) popup_note_window_t3

0x80c3,	// (0x00011953) popup_note_window_t4_ParamLimits

0x80c3,	// (0x00011953) popup_note_window_t4

0x80eb,	// (0x0001197b) popup_note_window_t5_ParamLimits

0x80eb,	// (0x0001197b) popup_note_window_t5

0x0004,

0xf585,	// (0x00018e15) popup_note_window_t_ParamLimits

0xf585,	// (0x00018e15) popup_note_window_t

0x810f,	// (0x0001199f) bg_popup_window_pane_cp6_ParamLimits

0x810f,	// (0x0001199f) bg_popup_window_pane_cp6

0xab39,	// (0x000143c9) popup_note_image_window_g1_ParamLimits

0xab39,	// (0x000143c9) popup_note_image_window_g1

0xab45,	// (0x000143d5) popup_note_image_window_g2_ParamLimits

0xab45,	// (0x000143d5) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x000190eb) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x000190eb) popup_note_image_window_g

0xab5e,	// (0x000143ee) popup_note_image_window_t1_ParamLimits

0xab5e,	// (0x000143ee) popup_note_image_window_t1

0xab77,	// (0x00014407) popup_note_image_window_t2_ParamLimits

0xab77,	// (0x00014407) popup_note_image_window_t2

0xab90,	// (0x00014420) popup_note_image_window_t3_ParamLimits

0xab90,	// (0x00014420) popup_note_image_window_t3

0x0002,

0xf860,	// (0x000190f0) popup_note_image_window_t_ParamLimits

0xf860,	// (0x000190f0) popup_note_image_window_t

0xa9fa,	// (0x0001428a) bg_popup_window_pane_cp7_ParamLimits

0xa9fa,	// (0x0001428a) bg_popup_window_pane_cp7

0xaa2a,	// (0x000142ba) popup_note_wait_window_g1_ParamLimits

0xaa2a,	// (0x000142ba) popup_note_wait_window_g1

0xaa36,	// (0x000142c6) popup_note_wait_window_g2_ParamLimits

0xaa36,	// (0x000142c6) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x000190d9) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x000190d9) popup_note_wait_window_g

0xaa4e,	// (0x000142de) popup_note_wait_window_t1_ParamLimits

0xaa4e,	// (0x000142de) popup_note_wait_window_t1

0xaa75,	// (0x00014305) popup_note_wait_window_t2_ParamLimits

0xaa75,	// (0x00014305) popup_note_wait_window_t2

0xaa92,	// (0x00014322) popup_note_wait_window_t3_ParamLimits

0xaa92,	// (0x00014322) popup_note_wait_window_t3

0xaaa5,	// (0x00014335) popup_note_wait_window_t4_ParamLimits

0xaaa5,	// (0x00014335) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x000190e0) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x000190e0) popup_note_wait_window_t

0xaaca,	// (0x0001435a) wait_bar_pane_ParamLimits

0xaaca,	// (0x0001435a) wait_bar_pane

0x7cf0,	// (0x00011580) wait_anim_pane

0x7cf0,	// (0x00011580) wait_border_pane

0x7ce6,	// (0x00011576) wait_anim_pane_g1

0x7ce6,	// (0x00011576) wait_anim_pane_g2

0x0001,

0xf704,	// (0x00018f94) wait_anim_pane_g

0xa99e,	// (0x0001422e) wait_border_pane_g1

0xa9a9,	// (0x00014239) wait_border_pane_g2

0xa9b2,	// (0x00014242) wait_border_pane_g3

0x0002,

0xf842,	// (0x000190d2) wait_border_pane_g

0xa80e,	// (0x0001409e) bg_popup_window_pane_cp16_ParamLimits

0xa80e,	// (0x0001409e) bg_popup_window_pane_cp16

0xa90e,	// (0x0001419e) indicator_popup_pane_cp4_ParamLimits

0xa90e,	// (0x0001419e) indicator_popup_pane_cp4

0xa922,	// (0x000141b2) popup_query_data_window_t1_ParamLimits

0xa922,	// (0x000141b2) popup_query_data_window_t1

0xa934,	// (0x000141c4) popup_query_data_window_t2_ParamLimits

0xa934,	// (0x000141c4) popup_query_data_window_t2

0xa94d,	// (0x000141dd) popup_query_data_window_t3_ParamLimits

0xa94d,	// (0x000141dd) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x000190cb) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x000190cb) popup_query_data_window_t

0xa967,	// (0x000141f7) query_popup_data_pane_ParamLimits

0xa967,	// (0x000141f7) query_popup_data_pane

0xa97b,	// (0x0001420b) query_popup_data_pane_cp1_ParamLimits

0xa97b,	// (0x0001420b) query_popup_data_pane_cp1

0xa80e,	// (0x0001409e) bg_popup_window_pane_cp10_ParamLimits

0xa80e,	// (0x0001409e) bg_popup_window_pane_cp10

0xa840,	// (0x000140d0) indicator_popup_pane_ParamLimits

0xa840,	// (0x000140d0) indicator_popup_pane

0xa862,	// (0x000140f2) popup_query_code_window_t1_ParamLimits

0xa862,	// (0x000140f2) popup_query_code_window_t1

0xa87c,	// (0x0001410c) popup_query_code_window_t2_ParamLimits

0xa87c,	// (0x0001410c) popup_query_code_window_t2

0xa8c5,	// (0x00014155) popup_query_code_window_t3_ParamLimits

0xa8c5,	// (0x00014155) popup_query_code_window_t3

0x0002,

0xf834,	// (0x000190c4) popup_query_code_window_t_ParamLimits

0xf834,	// (0x000190c4) popup_query_code_window_t

0xa8f4,	// (0x00014184) query_popup_pane_ParamLimits

0xa8f4,	// (0x00014184) query_popup_pane

0x810f,	// (0x0001199f) bg_popup_window_pane_cp15_ParamLimits

0x810f,	// (0x0001199f) bg_popup_window_pane_cp15

0x812d,	// (0x000119bd) indicator_popup_pane_cp1_ParamLimits

0x812d,	// (0x000119bd) indicator_popup_pane_cp1

0x8140,	// (0x000119d0) indicator_popup_pane_cp2_ParamLimits

0x8140,	// (0x000119d0) indicator_popup_pane_cp2

0x8153,	// (0x000119e3) popup_query_data_code_window_g1_ParamLimits

0x8153,	// (0x000119e3) popup_query_data_code_window_g1

0x8166,	// (0x000119f6) popup_query_data_code_window_t1_ParamLimits

0x8166,	// (0x000119f6) popup_query_data_code_window_t1

0x8178,	// (0x00011a08) popup_query_data_code_window_t2_ParamLimits

0x8178,	// (0x00011a08) popup_query_data_code_window_t2

0x818a,	// (0x00011a1a) popup_query_data_code_window_t3_ParamLimits

0x818a,	// (0x00011a1a) popup_query_data_code_window_t3

0x81a0,	// (0x00011a30) popup_query_data_code_window_t4_ParamLimits

0x81a0,	// (0x00011a30) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00018e20) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00018e20) popup_query_data_code_window_t

0x6b03,	// (0x00010393) list_single_midp_graphic_pane_g3

0x81b8,	// (0x00011a48) query_popup_data_pane_cp2_ParamLimits

0x81cb,	// (0x00011a5b) query_popup_pane_cp2_ParamLimits

0x81cb,	// (0x00011a5b) query_popup_pane_cp2

0x7cf0,	// (0x00011580) bg_popup_window_pane_cp11

0xa806,	// (0x00014096) heading_pane_cp5

0x82b3,	// (0x00011b43) listscroll_popup_info_pane

0x7cf0,	// (0x00011580) input_focus_pane_cp3

0x81de,	// (0x00011a6e) query_popup_pane_t1

0x81ec,	// (0x00011a7c) list_popup_info_pane_ParamLimits

0x81ec,	// (0x00011a7c) list_popup_info_pane

0x81fb,	// (0x00011a8b) listscroll_popup_info_pane_g1

0x8203,	// (0x00011a93) scroll_pane_cp7

0x820d,	// (0x00011a9d) popup_info_list_pane_t1_ParamLimits

0x820d,	// (0x00011a9d) popup_info_list_pane_t1

0x8227,	// (0x00011ab7) popup_info_list_pane_t2_ParamLimits

0x8227,	// (0x00011ab7) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00018e29) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00018e29) popup_info_list_pane_t

0x7cf0,	// (0x00011580) bg_popup_window_pane_cp12

0xbc73,	// (0x00015503) find_popup_pane

0x7dd0,	// (0x00011660) bg_popup_window_pane_cp3

0x8241,	// (0x00011ad1) heading_pane_cp3

0x824d,	// (0x00011add) listscroll_popup_graphic_pane

0x7cf0,	// (0x00011580) bg_popup_window_pane_cp4

0x82a9,	// (0x00011b39) heading_pane_cp4

0x82b3,	// (0x00011b43) listscroll_popup_colour_pane

0x82bb,	// (0x00011b4b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x82bb,	// (0x00011b4b) cell_large_graphic_colour_none_popup_pane

0x82cf,	// (0x00011b5f) grid_large_graphic_colour_popup_pane_ParamLimits

0x82cf,	// (0x00011b5f) grid_large_graphic_colour_popup_pane

0x82f3,	// (0x00011b83) listscroll_popup_colour_pane_g1_ParamLimits

0x82f3,	// (0x00011b83) listscroll_popup_colour_pane_g1

0x830a,	// (0x00011b9a) listscroll_popup_colour_pane_g2_ParamLimits

0x830a,	// (0x00011b9a) listscroll_popup_colour_pane_g2

0x8321,	// (0x00011bb1) listscroll_popup_colour_pane_g3_ParamLimits

0x8321,	// (0x00011bb1) listscroll_popup_colour_pane_g3

0x8331,	// (0x00011bc1) listscroll_popup_colour_pane_g4_ParamLimits

0x8331,	// (0x00011bc1) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00018e2e) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00018e2e) listscroll_popup_colour_pane_g

0x8340,	// (0x00011bd0) scroll_pane_cp6_ParamLimits

0x8340,	// (0x00011bd0) scroll_pane_cp6

0x8352,	// (0x00011be2) cell_large_graphic_colour_popup_pane_ParamLimits

0x8352,	// (0x00011be2) cell_large_graphic_colour_popup_pane

0x8371,	// (0x00011c01) cell_large_graphic_colour_none_popup_pane_t1

0x7cf0,	// (0x00011580) grid_highlight_pane_cp5

0x8380,	// (0x00011c10) cell_large_graphic_colour_popup_pane_g1

0x8388,	// (0x00011c18) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00018e37) cell_large_graphic_colour_popup_pane_g

0x8390,	// (0x00011c20) cell_large_graphic_colour_popup_pane_g2_copy1

0x8399,	// (0x00011c29) grid_highlight_pane_cp4

0x83a1,	// (0x00011c31) bg_popup_window_pane_cp8_ParamLimits

0x83a1,	// (0x00011c31) bg_popup_window_pane_cp8

0x83bc,	// (0x00011c4c) popup_snote_single_text_window_g1_ParamLimits

0x83bc,	// (0x00011c4c) popup_snote_single_text_window_g1

0x83ce,	// (0x00011c5e) popup_snote_single_text_window_t1_ParamLimits

0x83ce,	// (0x00011c5e) popup_snote_single_text_window_t1

0x83e1,	// (0x00011c71) popup_snote_single_text_window_t2_ParamLimits

0x83e1,	// (0x00011c71) popup_snote_single_text_window_t2

0x83f4,	// (0x00011c84) popup_snote_single_text_window_t3_ParamLimits

0x83f4,	// (0x00011c84) popup_snote_single_text_window_t3

0x842d,	// (0x00011cbd) popup_snote_single_text_window_t4_ParamLimits

0x842d,	// (0x00011cbd) popup_snote_single_text_window_t4

0x8461,	// (0x00011cf1) popup_snote_single_text_window_t5_ParamLimits

0x8461,	// (0x00011cf1) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00018e3c) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00018e3c) popup_snote_single_text_window_t

0x8490,	// (0x00011d20) bg_popup_window_pane_cp9_ParamLimits

0x8490,	// (0x00011d20) bg_popup_window_pane_cp9

0x83bc,	// (0x00011c4c) popup_snote_single_graphic_window_g1_ParamLimits

0x83bc,	// (0x00011c4c) popup_snote_single_graphic_window_g1

0x849e,	// (0x00011d2e) popup_snote_single_graphic_window_g2_ParamLimits

0x849e,	// (0x00011d2e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00018e47) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00018e47) popup_snote_single_graphic_window_g

0x84aa,	// (0x00011d3a) popup_snote_single_graphic_window_t1_ParamLimits

0x84aa,	// (0x00011d3a) popup_snote_single_graphic_window_t1

0x84bd,	// (0x00011d4d) popup_snote_single_graphic_window_t2_ParamLimits

0x84bd,	// (0x00011d4d) popup_snote_single_graphic_window_t2

0x84d0,	// (0x00011d60) popup_snote_single_graphic_window_t3_ParamLimits

0x84d0,	// (0x00011d60) popup_snote_single_graphic_window_t3

0x8509,	// (0x00011d99) popup_snote_single_graphic_window_t4_ParamLimits

0x8509,	// (0x00011d99) popup_snote_single_graphic_window_t4

0x853d,	// (0x00011dcd) popup_snote_single_graphic_window_t5_ParamLimits

0x853d,	// (0x00011dcd) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00018e4c) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00018e4c) popup_snote_single_graphic_window_t

0xbbb3,	// (0x00015443) grid_graphic_popup_pane_ParamLimits

0xbbb3,	// (0x00015443) grid_graphic_popup_pane

0xbbdf,	// (0x0001546f) listscroll_popup_graphic_pane_g1_ParamLimits

0xbbdf,	// (0x0001546f) listscroll_popup_graphic_pane_g1

0xbbf3,	// (0x00015483) listscroll_popup_graphic_pane_g2_ParamLimits

0xbbf3,	// (0x00015483) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x00019241) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x00019241) listscroll_popup_graphic_pane_g

0xbc07,	// (0x00015497) scroll_pane_cp5

0xbb5e,	// (0x000153ee) cell_graphic_popup_pane_ParamLimits

0xbb5e,	// (0x000153ee) cell_graphic_popup_pane

0xbb3f,	// (0x000153cf) cell_graphic_popup_pane_g1

0xbb47,	// (0x000153d7) cell_graphic_popup_pane_g2

0x8390,	// (0x00011c20) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0001923a) cell_graphic_popup_pane_g

0xbb50,	// (0x000153e0) cell_graphic_popup_pane_t2

0x8399,	// (0x00011c29) grid_highlight_pane_cp3

0x857e,	// (0x00011e0e) list_gen_pane_ParamLimits

0x857e,	// (0x00011e0e) list_gen_pane

0x85b0,	// (0x00011e40) scroll_pane

0xbaa1,	// (0x00015331) bg_list_pane_g1_ParamLimits

0xbaa1,	// (0x00015331) bg_list_pane_g1

0xbabc,	// (0x0001534c) bg_list_pane_g2_ParamLimits

0xbabc,	// (0x0001534c) bg_list_pane_g2

0xbacf,	// (0x0001535f) bg_list_pane_g3_ParamLimits

0xbacf,	// (0x0001535f) bg_list_pane_g3

0xbae1,	// (0x00015371) bg_list_pane_g4_ParamLimits

0xbae1,	// (0x00015371) bg_list_pane_g4

0xbaf3,	// (0x00015383) bg_list_pane_g5_ParamLimits

0xbaf3,	// (0x00015383) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0001922f) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0001922f) bg_list_pane_g

0xb982,	// (0x00015212) list_double2_graphic_large_graphic_pane_ParamLimits

0xb982,	// (0x00015212) list_double2_graphic_large_graphic_pane

0xb982,	// (0x00015212) list_double2_graphic_pane_ParamLimits

0xb982,	// (0x00015212) list_double2_graphic_pane

0xb982,	// (0x00015212) list_double2_large_graphic_pane_ParamLimits

0xb982,	// (0x00015212) list_double2_large_graphic_pane

0xb982,	// (0x00015212) list_double2_pane_ParamLimits

0xb982,	// (0x00015212) list_double2_pane

0xb982,	// (0x00015212) list_double_graphic_heading_pane_ParamLimits

0xb982,	// (0x00015212) list_double_graphic_heading_pane

0xb982,	// (0x00015212) list_double_graphic_pane_ParamLimits

0xb982,	// (0x00015212) list_double_graphic_pane

0xb982,	// (0x00015212) list_double_heading_pane_ParamLimits

0xb982,	// (0x00015212) list_double_heading_pane

0xb982,	// (0x00015212) list_double_large_graphic_pane_ParamLimits

0xb982,	// (0x00015212) list_double_large_graphic_pane

0xb982,	// (0x00015212) list_double_number_pane_ParamLimits

0xb982,	// (0x00015212) list_double_number_pane

0xb982,	// (0x00015212) list_double_pane_ParamLimits

0xb982,	// (0x00015212) list_double_pane

0xb982,	// (0x00015212) list_double_time_pane_ParamLimits

0xb982,	// (0x00015212) list_double_time_pane

0xb982,	// (0x00015212) list_setting_number_pane_ParamLimits

0xb982,	// (0x00015212) list_setting_number_pane

0xb982,	// (0x00015212) list_setting_pane_ParamLimits

0xb982,	// (0x00015212) list_setting_pane

0xb9ed,	// (0x0001527d) list_single_2graphic_pane_ParamLimits

0xb9ed,	// (0x0001527d) list_single_2graphic_pane

0xb9ed,	// (0x0001527d) list_single_graphic_heading_pane_ParamLimits

0xb9ed,	// (0x0001527d) list_single_graphic_heading_pane

0xb9ed,	// (0x0001527d) list_single_graphic_pane_ParamLimits

0xb9ed,	// (0x0001527d) list_single_graphic_pane

0xb9ed,	// (0x0001527d) list_single_heading_pane_ParamLimits

0xb9ed,	// (0x0001527d) list_single_heading_pane

0xba7b,	// (0x0001530b) list_single_large_graphic_pane_ParamLimits

0xba7b,	// (0x0001530b) list_single_large_graphic_pane

0xb9ed,	// (0x0001527d) list_single_number_heading_pane_ParamLimits

0xb9ed,	// (0x0001527d) list_single_number_heading_pane

0xb9ed,	// (0x0001527d) list_single_number_pane_ParamLimits

0xb9ed,	// (0x0001527d) list_single_number_pane

0xb9ed,	// (0x0001527d) list_single_pane_ParamLimits

0xb9ed,	// (0x0001527d) list_single_pane

0x7cf0,	// (0x00011580) list_highlight_pane_cp1

0x85f0,	// (0x00011e80) list_single_pane_g1_ParamLimits

0x85f0,	// (0x00011e80) list_single_pane_g1

0x85fc,	// (0x00011e8c) list_single_pane_g2_ParamLimits

0x85fc,	// (0x00011e8c) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00018e5e) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00018e5e) list_single_pane_g

0xb93b,	// (0x000151cb) list_single_pane_t1_ParamLimits

0xb93b,	// (0x000151cb) list_single_pane_t1

0x85f0,	// (0x00011e80) list_single_number_pane_g1_ParamLimits

0x85f0,	// (0x00011e80) list_single_number_pane_g1

0x85fc,	// (0x00011e8c) list_single_number_pane_g2_ParamLimits

0x85fc,	// (0x00011e8c) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00018e5e) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00018e5e) list_single_number_pane_g

0xb6d5,	// (0x00014f65) list_single_number_pane_t1_ParamLimits

0xb6d5,	// (0x00014f65) list_single_number_pane_t1

0xb6eb,	// (0x00014f7b) list_single_number_pane_t2_ParamLimits

0xb6eb,	// (0x00014f7b) list_single_number_pane_t2

0x0001,

0xf960,	// (0x000191f0) list_single_number_pane_t_ParamLimits

0xf960,	// (0x000191f0) list_single_number_pane_t

0x85e4,	// (0x00011e74) list_single_graphic_pane_g1_ParamLimits

0x85e4,	// (0x00011e74) list_single_graphic_pane_g1

0x85f0,	// (0x00011e80) list_single_graphic_pane_g2_ParamLimits

0x85f0,	// (0x00011e80) list_single_graphic_pane_g2

0x85fc,	// (0x00011e8c) list_single_graphic_pane_g3_ParamLimits

0x85fc,	// (0x00011e8c) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00018e57) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00018e57) list_single_graphic_pane_g

0x8608,	// (0x00011e98) list_single_graphic_pane_t1_ParamLimits

0x8608,	// (0x00011e98) list_single_graphic_pane_t1

0x85f0,	// (0x00011e80) list_single_heading_pane_g1_ParamLimits

0x85f0,	// (0x00011e80) list_single_heading_pane_g1

0x85fc,	// (0x00011e8c) list_single_heading_pane_g2_ParamLimits

0x85fc,	// (0x00011e8c) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00018e5e) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00018e5e) list_single_heading_pane_g

0x861e,	// (0x00011eae) list_single_heading_pane_t1_ParamLimits

0x861e,	// (0x00011eae) list_single_heading_pane_t1

0x8634,	// (0x00011ec4) list_single_heading_pane_t2_ParamLimits

0x8634,	// (0x00011ec4) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00018e63) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00018e63) list_single_heading_pane_t

0x85f0,	// (0x00011e80) list_single_number_heading_pane_g1_ParamLimits

0x85f0,	// (0x00011e80) list_single_number_heading_pane_g1

0x85fc,	// (0x00011e8c) list_single_number_heading_pane_g2_ParamLimits

0x85fc,	// (0x00011e8c) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00018e5e) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00018e5e) list_single_number_heading_pane_g

0x861e,	// (0x00011eae) list_single_number_heading_pane_t1_ParamLimits

0x861e,	// (0x00011eae) list_single_number_heading_pane_t1

0x8646,	// (0x00011ed6) list_single_number_heading_pane_t2_ParamLimits

0x8646,	// (0x00011ed6) list_single_number_heading_pane_t2

0x8658,	// (0x00011ee8) list_single_number_heading_pane_t3_ParamLimits

0x8658,	// (0x00011ee8) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x00018e68) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x00018e68) list_single_number_heading_pane_t

0x866a,	// (0x00011efa) list_single_graphic_heading_pane_g1_ParamLimits

0x866a,	// (0x00011efa) list_single_graphic_heading_pane_g1

0x8676,	// (0x00011f06) list_single_graphic_heading_pane_g4_ParamLimits

0x8676,	// (0x00011f06) list_single_graphic_heading_pane_g4

0x85fc,	// (0x00011e8c) list_single_graphic_heading_pane_g5_ParamLimits

0x85fc,	// (0x00011e8c) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00018e6f) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00018e6f) list_single_graphic_heading_pane_g

0x861e,	// (0x00011eae) list_single_graphic_heading_pane_t1_ParamLimits

0x861e,	// (0x00011eae) list_single_graphic_heading_pane_t1

0x8687,	// (0x00011f17) list_single_graphic_heading_pane_t2_ParamLimits

0x8687,	// (0x00011f17) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00018e76) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00018e76) list_single_graphic_heading_pane_t

0x8699,	// (0x00011f29) list_single_large_graphic_pane_g1_ParamLimits

0x8699,	// (0x00011f29) list_single_large_graphic_pane_g1

0x86a5,	// (0x00011f35) list_single_large_graphic_pane_g2_ParamLimits

0x86a5,	// (0x00011f35) list_single_large_graphic_pane_g2

0x86b1,	// (0x00011f41) list_single_large_graphic_pane_g3_ParamLimits

0x86b1,	// (0x00011f41) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00018e7b) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00018e7b) list_single_large_graphic_pane_g

0xa9a9,	// (0x00014239) wait_border_pane_g2_copy1

0x86bd,	// (0x00011f4d) list_single_large_graphic_pane_g4_cp2

0x86c5,	// (0x00011f55) list_single_large_graphic_pane_t1_ParamLimits

0x86c5,	// (0x00011f55) list_single_large_graphic_pane_t1

0x86db,	// (0x00011f6b) list_double_pane_g1_ParamLimits

0x86db,	// (0x00011f6b) list_double_pane_g1

0x86e7,	// (0x00011f77) list_double_pane_g2_ParamLimits

0x86e7,	// (0x00011f77) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00018e82) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00018e82) list_double_pane_g

0x86f3,	// (0x00011f83) list_double_pane_t1_ParamLimits

0x86f3,	// (0x00011f83) list_double_pane_t1

0x8709,	// (0x00011f99) list_double_pane_t2_ParamLimits

0x8709,	// (0x00011f99) list_double_pane_t2

0x0001,

0xf5f7,	// (0x00018e87) list_double_pane_t_ParamLimits

0xf5f7,	// (0x00018e87) list_double_pane_t

0x871b,	// (0x00011fab) list_double2_pane_g1_ParamLimits

0x871b,	// (0x00011fab) list_double2_pane_g1

0x872c,	// (0x00011fbc) list_double2_pane_g2_ParamLimits

0x872c,	// (0x00011fbc) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00018e8c) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00018e8c) list_double2_pane_g

0x8738,	// (0x00011fc8) list_double2_pane_t1_ParamLimits

0x8738,	// (0x00011fc8) list_double2_pane_t1

0x874e,	// (0x00011fde) list_double2_pane_t2_ParamLimits

0x874e,	// (0x00011fde) list_double2_pane_t2

0x0001,

0xf601,	// (0x00018e91) list_double2_pane_t_ParamLimits

0xf601,	// (0x00018e91) list_double2_pane_t

0x86db,	// (0x00011f6b) list_double_number_pane_g1_ParamLimits

0x86db,	// (0x00011f6b) list_double_number_pane_g1

0x86e7,	// (0x00011f77) list_double_number_pane_g2_ParamLimits

0x86e7,	// (0x00011f77) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00018e82) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00018e82) list_double_number_pane_g

0x8760,	// (0x00011ff0) list_double_number_pane_t1_ParamLimits

0x8760,	// (0x00011ff0) list_double_number_pane_t1

0x8772,	// (0x00012002) list_double_number_pane_t2_ParamLimits

0x8772,	// (0x00012002) list_double_number_pane_t2

0x8788,	// (0x00012018) list_double_number_pane_t3_ParamLimits

0x8788,	// (0x00012018) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00018e96) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00018e96) list_double_number_pane_t

0x879a,	// (0x0001202a) list_double_graphic_pane_g1_ParamLimits

0x879a,	// (0x0001202a) list_double_graphic_pane_g1

0x87a6,	// (0x00012036) list_double_graphic_pane_g2_ParamLimits

0x87a6,	// (0x00012036) list_double_graphic_pane_g2

0x87b5,	// (0x00012045) list_double_graphic_pane_g3_ParamLimits

0x87b5,	// (0x00012045) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00018e9d) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00018e9d) list_double_graphic_pane_g

0x87cd,	// (0x0001205d) list_double_graphic_pane_t1_ParamLimits

0x87cd,	// (0x0001205d) list_double_graphic_pane_t1

0x87e3,	// (0x00012073) list_double_graphic_pane_t2_ParamLimits

0x87e3,	// (0x00012073) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00018ea6) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00018ea6) list_double_graphic_pane_t

0x87f5,	// (0x00012085) list_double2_graphic_pane_g1_ParamLimits

0x87f5,	// (0x00012085) list_double2_graphic_pane_g1

0x8801,	// (0x00012091) list_double2_graphic_pane_g2_ParamLimits

0x8801,	// (0x00012091) list_double2_graphic_pane_g2

0x872c,	// (0x00011fbc) list_double2_graphic_pane_g3_ParamLimits

0x872c,	// (0x00011fbc) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00018eab) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00018eab) list_double2_graphic_pane_g

0x880d,	// (0x0001209d) list_double2_graphic_pane_t1_ParamLimits

0x880d,	// (0x0001209d) list_double2_graphic_pane_t1

0x8823,	// (0x000120b3) list_double2_graphic_pane_t2_ParamLimits

0x8823,	// (0x000120b3) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00018eb2) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00018eb2) list_double2_graphic_pane_t

0x8835,	// (0x000120c5) list_double_large_graphic_pane_g1_ParamLimits

0x8835,	// (0x000120c5) list_double_large_graphic_pane_g1

0x8860,	// (0x000120f0) list_double_large_graphic_pane_g2_ParamLimits

0x8860,	// (0x000120f0) list_double_large_graphic_pane_g2

0x86e7,	// (0x00011f77) list_double_large_graphic_pane_g3_ParamLimits

0x86e7,	// (0x00011f77) list_double_large_graphic_pane_g3

0x8871,	// (0x00012101) list_double_large_graphic_pane_g4_ParamLimits

0x8871,	// (0x00012101) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00018eb7) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00018eb7) list_double_large_graphic_pane_g

0x8898,	// (0x00012128) list_double_large_graphic_pane_t1_ParamLimits

0x8898,	// (0x00012128) list_double_large_graphic_pane_t1

0x88b1,	// (0x00012141) list_double_large_graphic_pane_t2_ParamLimits

0x88b1,	// (0x00012141) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00018ec2) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00018ec2) list_double_large_graphic_pane_t

0x88c3,	// (0x00012153) list_double2_large_graphic_pane_g1_ParamLimits

0x88c3,	// (0x00012153) list_double2_large_graphic_pane_g1

0x871b,	// (0x00011fab) list_double2_large_graphic_pane_g2_ParamLimits

0x871b,	// (0x00011fab) list_double2_large_graphic_pane_g2

0x872c,	// (0x00011fbc) list_double2_large_graphic_pane_g3_ParamLimits

0x872c,	// (0x00011fbc) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00018ec7) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00018ec7) list_double2_large_graphic_pane_g

0x88cf,	// (0x0001215f) list_double2_large_graphic_pane_t1_ParamLimits

0x88cf,	// (0x0001215f) list_double2_large_graphic_pane_t1

0x88e5,	// (0x00012175) list_double2_large_graphic_pane_t2_ParamLimits

0x88e5,	// (0x00012175) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00018ece) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00018ece) list_double2_large_graphic_pane_t

0x88f7,	// (0x00012187) list_double_heading_pane_g1_ParamLimits

0x88f7,	// (0x00012187) list_double_heading_pane_g1

0x8908,	// (0x00012198) list_double_heading_pane_g2_ParamLimits

0x8908,	// (0x00012198) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00018ed3) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00018ed3) list_double_heading_pane_g

0x8914,	// (0x000121a4) list_double_heading_pane_t1_ParamLimits

0x8914,	// (0x000121a4) list_double_heading_pane_t1

0x892a,	// (0x000121ba) list_double_heading_pane_t2_ParamLimits

0x892a,	// (0x000121ba) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00018ed8) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00018ed8) list_double_heading_pane_t

0x879a,	// (0x0001202a) list_double_graphic_heading_pane_g1_ParamLimits

0x879a,	// (0x0001202a) list_double_graphic_heading_pane_g1

0x88f7,	// (0x00012187) list_double_graphic_heading_pane_g2_ParamLimits

0x88f7,	// (0x00012187) list_double_graphic_heading_pane_g2

0x8908,	// (0x00012198) list_double_graphic_heading_pane_g3_ParamLimits

0x8908,	// (0x00012198) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00018edd) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00018edd) list_double_graphic_heading_pane_g

0x893c,	// (0x000121cc) list_double_graphic_heading_pane_t1_ParamLimits

0x893c,	// (0x000121cc) list_double_graphic_heading_pane_t1

0x8952,	// (0x000121e2) list_double_graphic_heading_pane_t2_ParamLimits

0x8952,	// (0x000121e2) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00018ee4) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00018ee4) list_double_graphic_heading_pane_t

0x8860,	// (0x000120f0) list_double_time_pane_g1_ParamLimits

0x8860,	// (0x000120f0) list_double_time_pane_g1

0x86e7,	// (0x00011f77) list_double_time_pane_g2_ParamLimits

0x86e7,	// (0x00011f77) list_double_time_pane_g2

0x0001,

0xf659,	// (0x00018ee9) list_double_time_pane_g_ParamLimits

0xf659,	// (0x00018ee9) list_double_time_pane_g

0x8964,	// (0x000121f4) list_double_time_pane_t1_ParamLimits

0x8964,	// (0x000121f4) list_double_time_pane_t1

0x897a,	// (0x0001220a) list_double_time_pane_t2_ParamLimits

0x897a,	// (0x0001220a) list_double_time_pane_t2

0x898c,	// (0x0001221c) list_double_time_pane_t3_ParamLimits

0x898c,	// (0x0001221c) list_double_time_pane_t3

0x899e,	// (0x0001222e) list_double_time_pane_t4_ParamLimits

0x899e,	// (0x0001222e) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00018eee) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00018eee) list_double_time_pane_t

0x8801,	// (0x00012091) list_setting_pane_g1_ParamLimits

0x8801,	// (0x00012091) list_setting_pane_g1

0x872c,	// (0x00011fbc) list_setting_pane_g2_ParamLimits

0x872c,	// (0x00011fbc) list_setting_pane_g2

0x0001,

0xf667,	// (0x00018ef7) list_setting_pane_g_ParamLimits

0xf667,	// (0x00018ef7) list_setting_pane_g

0x89b0,	// (0x00012240) list_setting_pane_t1_ParamLimits

0x89b0,	// (0x00012240) list_setting_pane_t1

0x89c7,	// (0x00012257) list_setting_pane_t2_ParamLimits

0x89c7,	// (0x00012257) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00018efc) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00018efc) list_setting_pane_t

0x8a04,	// (0x00012294) set_value_pane_cp_ParamLimits

0x8a04,	// (0x00012294) set_value_pane_cp

0x8801,	// (0x00012091) list_setting_number_pane_g1_ParamLimits

0x8801,	// (0x00012091) list_setting_number_pane_g1

0x872c,	// (0x00011fbc) list_setting_number_pane_g2_ParamLimits

0x872c,	// (0x00011fbc) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x00018ef7) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x00018ef7) list_setting_number_pane_g

0x8a10,	// (0x000122a0) list_setting_number_pane_t1_ParamLimits

0x8a10,	// (0x000122a0) list_setting_number_pane_t1

0x8a24,	// (0x000122b4) list_setting_number_pane_t2_ParamLimits

0x8a24,	// (0x000122b4) list_setting_number_pane_t2

0x8a3b,	// (0x000122cb) list_setting_number_pane_t3_ParamLimits

0x8a3b,	// (0x000122cb) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x00018f03) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x00018f03) list_setting_number_pane_t

0x8a04,	// (0x00012294) set_value_pane_ParamLimits

0x8a04,	// (0x00012294) set_value_pane

0x8a7e,	// (0x0001230e) bg_set_opt_pane_ParamLimits

0x8a7e,	// (0x0001230e) bg_set_opt_pane

0x8a9f,	// (0x0001232f) set_value_pane_t1

0x8aad,	// (0x0001233d) slider_set_pane_cp3

0x8ab6,	// (0x00012346) volume_small_pane_cp

0x8abf,	// (0x0001234f) list_form_gen_pane

0x8ac8,	// (0x00012358) scroll_pane_cp8

0x8ad9,	// (0x00012369) form_field_data_pane_ParamLimits

0x8ad9,	// (0x00012369) form_field_data_pane

0x8af9,	// (0x00012389) form_field_data_wide_pane_ParamLimits

0x8af9,	// (0x00012389) form_field_data_wide_pane

0x8b1a,	// (0x000123aa) form_field_popup_pane_ParamLimits

0x8b1a,	// (0x000123aa) form_field_popup_pane

0x8b38,	// (0x000123c8) form_field_popup_wide_pane_ParamLimits

0x8b38,	// (0x000123c8) form_field_popup_wide_pane

0x8b53,	// (0x000123e3) form_field_slider_pane_ParamLimits

0x8b53,	// (0x000123e3) form_field_slider_pane

0x8b66,	// (0x000123f6) form_field_slider_wide_pane_ParamLimits

0x8b66,	// (0x000123f6) form_field_slider_wide_pane

0x8b79,	// (0x00012409) data_form_pane

0x8b8f,	// (0x0001241f) form_field_data_pane_t1

0x8ba9,	// (0x00012439) input_focus_pane

0x8bb7,	// (0x00012447) data_form_wide_pane

0x8bef,	// (0x0001247f) form_field_data_wide_pane_t1

0x83ae,	// (0x00011c3e) input_focus_pane_cp6

0x8c11,	// (0x000124a1) form_field_popup_pane_t1

0x8ba9,	// (0x00012439) input_focus_pane_cp7

0x8c2b,	// (0x000124bb) list_form_pane

0x8c3f,	// (0x000124cf) form_field_popup_wide_pane_t1

0x8ba9,	// (0x00012439) input_focus_pane_cp8

0x8c54,	// (0x000124e4) list_form_wide_pane

0x8c6b,	// (0x000124fb) form_field_slider_pane_t1_ParamLimits

0x8c6b,	// (0x000124fb) form_field_slider_pane_t1

0x8c7f,	// (0x0001250f) form_field_slider_pane_t2_ParamLimits

0x8c7f,	// (0x0001250f) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x00018f13) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x00018f13) form_field_slider_pane_t

0x8065,	// (0x000118f5) input_focus_pane_cp9_ParamLimits

0x8065,	// (0x000118f5) input_focus_pane_cp9

0x8c91,	// (0x00012521) slider_cont_pane_ParamLimits

0x8c91,	// (0x00012521) slider_cont_pane

0x8ca5,	// (0x00012535) form_field_slider_wide_pane_t1_ParamLimits

0x8ca5,	// (0x00012535) form_field_slider_wide_pane_t1

0x8cb7,	// (0x00012547) form_field_slider_wide_pane_t2_ParamLimits

0x8cb7,	// (0x00012547) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x00018f18) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x00018f18) form_field_slider_wide_pane_t

0x8065,	// (0x000118f5) input_focus_pane_cp10_ParamLimits

0x8065,	// (0x000118f5) input_focus_pane_cp10

0x8cc9,	// (0x00012559) slider_cont_pane_cp1_ParamLimits

0x8cc9,	// (0x00012559) slider_cont_pane_cp1

0x8cdd,	// (0x0001256d) slider_form_pane_cp

0x8ce5,	// (0x00012575) input_focus_pane_g1

0x8ced,	// (0x0001257d) input_focus_pane_g2

0x8cf5,	// (0x00012585) input_focus_pane_g3

0x8cfd,	// (0x0001258d) input_focus_pane_g4

0x8d05,	// (0x00012595) input_focus_pane_g5

0x8d0d,	// (0x0001259d) input_focus_pane_g6

0x8d15,	// (0x000125a5) input_focus_pane_g7

0x8d1d,	// (0x000125ad) input_focus_pane_g8

0x8d25,	// (0x000125b5) input_focus_pane_g9

0x7ce6,	// (0x00011576) input_focus_pane_g10

0x0009,

0xf68d,	// (0x00018f1d) input_focus_pane_g

0xa9b2,	// (0x00014242) wait_border_pane_g3_copy1

0x8d2d,	// (0x000125bd) data_form_pane_t1

0x7ce6,	// (0x00011576) wait_anim_pane_g1_copy1

0xb91e,	// (0x000151ae) data_form_wide_pane_t1

0x8d48,	// (0x000125d8) list_form_graphic_pane_cp_ParamLimits

0x8d48,	// (0x000125d8) list_form_graphic_pane_cp

0xb8f3,	// (0x00015183) slider_form_pane_g1

0xb8fc,	// (0x0001518c) slider_form_pane_g2

0x0006,

0xf990,	// (0x00019220) slider_form_pane_g

0x8d5f,	// (0x000125ef) list_form_graphic_pane_ParamLimits

0x8d5f,	// (0x000125ef) list_form_graphic_pane

0x8d79,	// (0x00012609) list_form_graphic_pane_g1

0x8d81,	// (0x00012611) list_form_graphic_pane_t1_ParamLimits

0x8d81,	// (0x00012611) list_form_graphic_pane_t1

0x7dd0,	// (0x00011660) list_highlight_pane_cp5_ParamLimits

0x7dd0,	// (0x00011660) list_highlight_pane_cp5

0x8d96,	// (0x00012626) find_pane_g1

0x8d9f,	// (0x0001262f) input_find_pane

0x8da8,	// (0x00012638) input_find_pane_g1_ParamLimits

0x8da8,	// (0x00012638) input_find_pane_g1

0x8db4,	// (0x00012644) input_find_pane_t1_ParamLimits

0x8db4,	// (0x00012644) input_find_pane_t1

0x8dc9,	// (0x00012659) input_find_pane_t2_ParamLimits

0x8dc9,	// (0x00012659) input_find_pane_t2

0x0001,

0xf6a2,	// (0x00018f32) input_find_pane_t_ParamLimits

0xf6a2,	// (0x00018f32) input_find_pane_t

0x8dde,	// (0x0001266e) input_focus_pane_cp5_ParamLimits

0x8dde,	// (0x0001266e) input_focus_pane_cp5

0x8df8,	// (0x00012688) bg_popup_window_pane_cp2_ParamLimits

0x8df8,	// (0x00012688) bg_popup_window_pane_cp2

0x8e05,	// (0x00012695) listscroll_menu_pane_ParamLimits

0x8e05,	// (0x00012695) listscroll_menu_pane

0x8e11,	// (0x000126a1) popup_submenu_window_ParamLimits

0x8e11,	// (0x000126a1) popup_submenu_window

0x8e39,	// (0x000126c9) find_popup_pane_g1

0x8e41,	// (0x000126d1) input_popup_find_pane_cp

0x8dde,	// (0x0001266e) input_focus_pane_cp4_ParamLimits

0x8dde,	// (0x0001266e) input_focus_pane_cp4

0x8e59,	// (0x000126e9) input_popup_find_pane_t1_ParamLimits

0x8e59,	// (0x000126e9) input_popup_find_pane_t1

0x7cf0,	// (0x00011580) bg_popup_sub_pane_cp

0x8e87,	// (0x00012717) listscroll_popup_sub_pane

0x8e8f,	// (0x0001271f) list_submenu_pane_ParamLimits

0x8e8f,	// (0x0001271f) list_submenu_pane

0x8ea0,	// (0x00012730) scroll_pane_cp4

0x8ea8,	// (0x00012738) list_single_popup_submenu_pane_ParamLimits

0x8ea8,	// (0x00012738) list_single_popup_submenu_pane

0x8ebb,	// (0x0001274b) list_single_popup_submenu_pane_g1

0x8ec3,	// (0x00012753) list_single_popup_submenu_pane_t1_ParamLimits

0x8ec3,	// (0x00012753) list_single_popup_submenu_pane_t1

0x7dd0,	// (0x00011660) bg_active_tab_pane_cp1_ParamLimits

0x7dd0,	// (0x00011660) bg_active_tab_pane_cp1

0x8ed8,	// (0x00012768) tabs_2_active_pane_g1

0x8ee0,	// (0x00012770) tabs_2_active_pane_t1

0x7dd0,	// (0x00011660) bg_passive_tab_pane_cp1_ParamLimits

0x7dd0,	// (0x00011660) bg_passive_tab_pane_cp1

0x8ed8,	// (0x00012768) tabs_2_passive_pane_g1

0x8ee0,	// (0x00012770) tabs_2_passive_pane_t1

0x8ef2,	// (0x00012782) bg_active_tab_pane_cp4

0x8f00,	// (0x00012790) tabs_2_long_active_pane_t1

0x8f13,	// (0x000127a3) bg_passive_tab_pane_cp4

0x6b0b,	// (0x0001039b) list_single_midp_graphic_pane_g4_ParamLimits

0x8ef2,	// (0x00012782) bg_active_tab_pane_cp5

0x8f1f,	// (0x000127af) tabs_3_long_active_pane_t1

0x8f13,	// (0x000127a3) bg_passive_tab_pane_cp5

0x6b0b,	// (0x0001039b) list_single_midp_graphic_pane_g4

0x7dd0,	// (0x00011660) bg_popup_window_pane_cp13_ParamLimits

0x7dd0,	// (0x00011660) bg_popup_window_pane_cp13

0x8f3a,	// (0x000127ca) listscroll_popup_fast_pane_ParamLimits

0x8f3a,	// (0x000127ca) listscroll_popup_fast_pane

0x8f49,	// (0x000127d9) grid_popup_fast_pane_ParamLimits

0x8f49,	// (0x000127d9) grid_popup_fast_pane

0x8f5b,	// (0x000127eb) scroll_pane_cp9_ParamLimits

0x8f5b,	// (0x000127eb) scroll_pane_cp9

0xd790,	// (0x00017020) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xd790,	// (0x00017020) list_single_graphic_hl_pane_t1_cp2

0x8f7f,	// (0x0001280f) input_focus_pane_cp20_ParamLimits

0x8f7f,	// (0x0001280f) input_focus_pane_cp20

0x8f8d,	// (0x0001281d) query_popup_data_pane_t1_ParamLimits

0x8f8d,	// (0x0001281d) query_popup_data_pane_t1

0x8fa0,	// (0x00012830) query_popup_data_pane_t2_ParamLimits

0x8fa0,	// (0x00012830) query_popup_data_pane_t2

0x8fe6,	// (0x00012876) query_popup_data_pane_t3_ParamLimits

0x8fe6,	// (0x00012876) query_popup_data_pane_t3

0x9027,	// (0x000128b7) query_popup_data_pane_t4_ParamLimits

0x9027,	// (0x000128b7) query_popup_data_pane_t4

0x9063,	// (0x000128f3) query_popup_data_pane_t5_ParamLimits

0x9063,	// (0x000128f3) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x00018f37) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x00018f37) query_popup_data_pane_t

0x8ce5,	// (0x00012575) bg_set_opt_pane_g1

0x8ced,	// (0x0001257d) bg_set_opt_pane_g2

0x8cf5,	// (0x00012585) bg_set_opt_pane_g3

0x8cfd,	// (0x0001258d) bg_set_opt_pane_g4

0x8d05,	// (0x00012595) bg_set_opt_pane_g5

0x8d0d,	// (0x0001259d) bg_set_opt_pane_g6

0x8d15,	// (0x000125a5) bg_set_opt_pane_g7

0x8d1d,	// (0x000125ad) bg_set_opt_pane_g8

0x8d25,	// (0x000125b5) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x00018f42) bg_set_opt_pane_g

0x614b,	// (0x0000f9db) control_top_pane_stacon_ParamLimits

0x614b,	// (0x0000f9db) control_top_pane_stacon

0x619e,	// (0x0000fa2e) signal_pane_stacon_ParamLimits

0x619e,	// (0x0000fa2e) signal_pane_stacon

0x96b5,	// (0x00012f45) stacon_top_pane_g1_ParamLimits

0x96b5,	// (0x00012f45) stacon_top_pane_g1

0x61c3,	// (0x0000fa53) title_pane_stacon_ParamLimits

0x61c3,	// (0x0000fa53) title_pane_stacon

0x61ed,	// (0x0000fa7d) uni_indicator_pane_stacon_ParamLimits

0x61ed,	// (0x0000fa7d) uni_indicator_pane_stacon

0x6202,	// (0x0000fa92) battery_pane_stacon_ParamLimits

0x6202,	// (0x0000fa92) battery_pane_stacon

0x6246,	// (0x0000fad6) control_bottom_pane_stacon_ParamLimits

0x6246,	// (0x0000fad6) control_bottom_pane_stacon

0x6269,	// (0x0000faf9) navi_pane_stacon_ParamLimits

0x6269,	// (0x0000faf9) navi_pane_stacon

0x96d7,	// (0x00012f67) stacon_bottom_pane_g1_ParamLimits

0x96d7,	// (0x00012f67) stacon_bottom_pane_g1

0x5eac,	// (0x0000f73c) aid_levels_signal_lsc_ParamLimits

0x5eac,	// (0x0000f73c) aid_levels_signal_lsc

0x5ec3,	// (0x0000f753) signal_pane_stacon_g1_ParamLimits

0x5ec3,	// (0x0000f753) signal_pane_stacon_g1

0x5ed7,	// (0x0000f767) signal_pane_stacon_g2_ParamLimits

0x5ed7,	// (0x0000f767) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x00018f55) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x00018f55) signal_pane_stacon_g

0x5f0c,	// (0x0000f79c) title_pane_stacon_t1_ParamLimits

0x5f0c,	// (0x0000f79c) title_pane_stacon_t1

0x90a7,	// (0x00012937) uni_indicator_pane_stacon_g1

0x90b1,	// (0x00012941) uni_indicator_pane_stacon_g2

0x90bb,	// (0x0001294b) uni_indicator_pane_stacon_g3

0x90c5,	// (0x00012955) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x00018f61) uni_indicator_pane_stacon_g

0x5f31,	// (0x0000f7c1) control_top_pane_stacon_g1

0x5f39,	// (0x0000f7c9) control_top_pane_stacon_t1_ParamLimits

0x5f39,	// (0x0000f7c9) control_top_pane_stacon_t1

0x5f70,	// (0x0000f800) aid_levels_battery_lsc_ParamLimits

0x5f70,	// (0x0000f800) aid_levels_battery_lsc

0x5f88,	// (0x0000f818) battery_pane_stacon_g1_ParamLimits

0x5f88,	// (0x0000f818) battery_pane_stacon_g1

0x5f9b,	// (0x0000f82b) battery_pane_stacon_g2_ParamLimits

0x5f9b,	// (0x0000f82b) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x00018f6a) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x00018f6a) battery_pane_stacon_g

0x5fd9,	// (0x0000f869) navi_icon_pane_stacon

0x5fed,	// (0x0000f87d) navi_navi_pane_stacon

0x5fd9,	// (0x0000f869) navi_text_pane_stacon

0x5f31,	// (0x0000f7c1) control_bottom_pane_stacon_g1

0x6001,	// (0x0000f891) control_bottom_pane_stacon_t1_ParamLimits

0x6001,	// (0x0000f891) control_bottom_pane_stacon_t1

0x90e9,	// (0x00012979) grid_app_pane_ParamLimits

0x90e9,	// (0x00012979) grid_app_pane

0x910b,	// (0x0001299b) scroll_pane_cp15_ParamLimits

0x910b,	// (0x0001299b) scroll_pane_cp15

0x9120,	// (0x000129b0) cell_app_pane_ParamLimits

0x9120,	// (0x000129b0) cell_app_pane

0x914a,	// (0x000129da) cell_app_pane_g1_ParamLimits

0x914a,	// (0x000129da) cell_app_pane_g1

0x916a,	// (0x000129fa) cell_app_pane_g2_ParamLimits

0x916a,	// (0x000129fa) cell_app_pane_g2

0x0001,

0xf6df,	// (0x00018f6f) cell_app_pane_g_ParamLimits

0xf6df,	// (0x00018f6f) cell_app_pane_g

0x9176,	// (0x00012a06) cell_app_pane_t1_ParamLimits

0x9176,	// (0x00012a06) cell_app_pane_t1

0x918d,	// (0x00012a1d) grid_highlight_pane_ParamLimits

0x918d,	// (0x00012a1d) grid_highlight_pane

0x8ce5,	// (0x00012575) cell_highlight_pane_g1

0x8ced,	// (0x0001257d) cell_highlight_pane_g2

0x8cf5,	// (0x00012585) cell_highlight_pane_g3

0x8cfd,	// (0x0001258d) cell_highlight_pane_g4

0x8d05,	// (0x00012595) cell_highlight_pane_g5

0x8d0d,	// (0x0001259d) cell_highlight_pane_g6

0x8d15,	// (0x000125a5) cell_highlight_pane_g7

0x8d1d,	// (0x000125ad) cell_highlight_pane_g8

0x8d25,	// (0x000125b5) cell_highlight_pane_g9

0x7ce6,	// (0x00011576) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x00018f1d) cell_highlight_pane_g

0x919e,	// (0x00012a2e) bg_scroll_pane

0x604b,	// (0x0000f8db) scroll_handle_pane

0x91e5,	// (0x00012a75) scroll_bg_pane_g1

0x91fa,	// (0x00012a8a) scroll_bg_pane_g2

0x9212,	// (0x00012aa2) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x00018f74) scroll_bg_pane_g

0x9227,	// (0x00012ab7) scroll_handle_focus_pane_ParamLimits

0x9227,	// (0x00012ab7) scroll_handle_focus_pane

0x91e5,	// (0x00012a75) scroll_handle_pane_g1

0x9234,	// (0x00012ac4) scroll_handle_pane_g2

0x9212,	// (0x00012aa2) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x00018f7b) scroll_handle_pane_g

0x8dde,	// (0x0001266e) bg_popup_sub_pane_cp21_ParamLimits

0x8dde,	// (0x0001266e) bg_popup_sub_pane_cp21

0x9248,	// (0x00012ad8) popup_fep_japan_predictive_window_t1_ParamLimits

0x9248,	// (0x00012ad8) popup_fep_japan_predictive_window_t1

0x925f,	// (0x00012aef) popup_fep_japan_predictive_window_t2_ParamLimits

0x925f,	// (0x00012aef) popup_fep_japan_predictive_window_t2

0x9292,	// (0x00012b22) popup_fep_japan_predictive_window_t3_ParamLimits

0x9292,	// (0x00012b22) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x00018f82) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x00018f82) popup_fep_japan_predictive_window_t

0x7cf0,	// (0x00011580) bg_popup_sub_pane_cp23

0x92c9,	// (0x00012b59) listscroll_japin_cand_pane

0x92d1,	// (0x00012b61) popup_fep_japan_candidate_window_t1

0x92df,	// (0x00012b6f) candidate_pane_ParamLimits

0x92df,	// (0x00012b6f) candidate_pane

0x92f1,	// (0x00012b81) scroll_pane_cp30

0x92f9,	// (0x00012b89) list_single_popup_jap_candidate_pane_ParamLimits

0x92f9,	// (0x00012b89) list_single_popup_jap_candidate_pane

0x7cf0,	// (0x00011580) list_highlight_pane_cp30

0x930d,	// (0x00012b9d) list_single_popup_jap_candidate_pane_t1

0x931c,	// (0x00012bac) level_1_signal

0x9329,	// (0x00012bb9) level_2_signal

0x9336,	// (0x00012bc6) level_3_signal

0x9343,	// (0x00012bd3) level_4_signal

0x9350,	// (0x00012be0) level_5_signal

0x935d,	// (0x00012bed) level_6_signal

0x936a,	// (0x00012bfa) level_7_signal

0x931c,	// (0x00012bac) level_1_battery

0x9329,	// (0x00012bb9) level_2_battery

0x9336,	// (0x00012bc6) level_3_battery

0x9343,	// (0x00012bd3) level_4_battery

0x9350,	// (0x00012be0) level_5_battery

0x935d,	// (0x00012bed) level_6_battery

0x936a,	// (0x00012bfa) level_7_battery

0x938f,	// (0x00012c1f) list_menu_pane_ParamLimits

0x938f,	// (0x00012c1f) list_menu_pane

0x93a5,	// (0x00012c35) scroll_pane_cp25_ParamLimits

0x93a5,	// (0x00012c35) scroll_pane_cp25

0x93be,	// (0x00012c4e) list_double2_graphic_pane_cp2_ParamLimits

0x93be,	// (0x00012c4e) list_double2_graphic_pane_cp2

0x93be,	// (0x00012c4e) list_double2_large_graphic_pane_cp2_ParamLimits

0x93be,	// (0x00012c4e) list_double2_large_graphic_pane_cp2

0x93be,	// (0x00012c4e) list_double2_pane_cp2_ParamLimits

0x93be,	// (0x00012c4e) list_double2_pane_cp2

0x93be,	// (0x00012c4e) list_double_graphic_pane_cp2_ParamLimits

0x93be,	// (0x00012c4e) list_double_graphic_pane_cp2

0x93be,	// (0x00012c4e) list_double_large_graphic_pane_cp2_ParamLimits

0x93be,	// (0x00012c4e) list_double_large_graphic_pane_cp2

0x93be,	// (0x00012c4e) list_double_number_pane_cp2_ParamLimits

0x93be,	// (0x00012c4e) list_double_number_pane_cp2

0x93be,	// (0x00012c4e) list_double_pane_cp2_ParamLimits

0x93be,	// (0x00012c4e) list_double_pane_cp2

0x93e0,	// (0x00012c70) list_single_2graphic_pane_cp2_ParamLimits

0x93e0,	// (0x00012c70) list_single_2graphic_pane_cp2

0x93e0,	// (0x00012c70) list_single_graphic_heading_pane_cp2_ParamLimits

0x93e0,	// (0x00012c70) list_single_graphic_heading_pane_cp2

0x93e0,	// (0x00012c70) list_single_graphic_pane_cp2_ParamLimits

0x93e0,	// (0x00012c70) list_single_graphic_pane_cp2

0x93e0,	// (0x00012c70) list_single_heading_pane_cp2_ParamLimits

0x93e0,	// (0x00012c70) list_single_heading_pane_cp2

0x93f7,	// (0x00012c87) list_single_large_graphic_pane_cp2_ParamLimits

0x93f7,	// (0x00012c87) list_single_large_graphic_pane_cp2

0x93e0,	// (0x00012c70) list_single_number_heading_pane_cp2_ParamLimits

0x93e0,	// (0x00012c70) list_single_number_heading_pane_cp2

0x93e0,	// (0x00012c70) list_single_number_pane_cp2_ParamLimits

0x93e0,	// (0x00012c70) list_single_number_pane_cp2

0x93e0,	// (0x00012c70) list_single_pane_cp2_ParamLimits

0x93e0,	// (0x00012c70) list_single_pane_cp2

0x9473,	// (0x00012d03) bg_popup_sub_pane_cp22

0x60fd,	// (0x0000f98d) popup_side_volume_key_window_g1

0x6127,	// (0x0000f9b7) popup_side_volume_key_window_t1

0x6143,	// (0x0000f9d3) volume_small_pane_cp1

0x8065,	// (0x000118f5) bg_popup_sub_pane_cp24_ParamLimits

0x8065,	// (0x000118f5) bg_popup_sub_pane_cp24

0x9489,	// (0x00012d19) fep_china_uni_candidate_pane_ParamLimits

0x9489,	// (0x00012d19) fep_china_uni_candidate_pane

0x949d,	// (0x00012d2d) fep_china_uni_entry_pane

0x94ad,	// (0x00012d3d) popup_fep_china_uni_window_g1

0x94c9,	// (0x00012d59) fep_china_uni_entry_pane_g1

0x94d1,	// (0x00012d61) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x00018fb3) fep_china_uni_entry_pane_g

0x94d9,	// (0x00012d69) fep_entry_item_pane

0x94e3,	// (0x00012d73) fep_candidate_item_pane

0x94eb,	// (0x00012d7b) fep_china_uni_candidate_pane_g1

0x94f3,	// (0x00012d83) fep_china_uni_candidate_pane_g2

0x94fb,	// (0x00012d8b) fep_china_uni_candidate_pane_g3

0x9503,	// (0x00012d93) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x00018fb8) fep_china_uni_candidate_pane_g

0x7ce6,	// (0x00011576) fep_entry_item_pane_g1

0x950b,	// (0x00012d9b) fep_entry_item_pane_t1_ParamLimits

0x950b,	// (0x00012d9b) fep_entry_item_pane_t1

0x9521,	// (0x00012db1) fep_candidate_item_pane_t1_ParamLimits

0x9521,	// (0x00012db1) fep_candidate_item_pane_t1

0x9536,	// (0x00012dc6) fep_candidate_item_pane_t2_ParamLimits

0x9536,	// (0x00012dc6) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x00018fc1) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x00018fc1) fep_candidate_item_pane_t

0x7dd0,	// (0x00011660) list_highlight_pane_cp31_ParamLimits

0x7dd0,	// (0x00011660) list_highlight_pane_cp31

0x9548,	// (0x00012dd8) level_1_signal_lsc

0x9551,	// (0x00012de1) level_2_signal_lsc

0x955a,	// (0x00012dea) level_3_signal_lsc

0x9563,	// (0x00012df3) level_4_signal_lsc

0x956c,	// (0x00012dfc) level_5_signal_lsc

0x9575,	// (0x00012e05) level_6_signal_lsc

0x957e,	// (0x00012e0e) level_7_signal_lsc

0x957e,	// (0x00012e0e) level_1_battery_lsc

0x9587,	// (0x00012e17) level_2_battery_lsc

0x9590,	// (0x00012e20) level_3_battery_lsc

0x9599,	// (0x00012e29) level_4_battery_lsc

0x95a2,	// (0x00012e32) level_5_battery_lsc

0x95ab,	// (0x00012e3b) level_6_battery_lsc

0x9548,	// (0x00012dd8) level_7_battery_lsc

0x95b4,	// (0x00012e44) scroll_handle_focus_pane_g1

0x95bd,	// (0x00012e4d) scroll_handle_focus_pane_g2

0x95c6,	// (0x00012e56) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x00018fc6) scroll_handle_focus_pane_g

0x95cf,	// (0x00012e5f) list_single_2graphic_pane_g1_ParamLimits

0x95cf,	// (0x00012e5f) list_single_2graphic_pane_g1

0x8676,	// (0x00011f06) list_single_2graphic_pane_g2_ParamLimits

0x8676,	// (0x00011f06) list_single_2graphic_pane_g2

0x85fc,	// (0x00011e8c) list_single_2graphic_pane_g3_ParamLimits

0x85fc,	// (0x00011e8c) list_single_2graphic_pane_g3

0x95db,	// (0x00012e6b) list_single_2graphic_pane_g4_ParamLimits

0x95db,	// (0x00012e6b) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x00018fcd) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x00018fcd) list_single_2graphic_pane_g

0x95ec,	// (0x00012e7c) list_single_2graphic_pane_t1_ParamLimits

0x95ec,	// (0x00012e7c) list_single_2graphic_pane_t1

0x961a,	// (0x00012eaa) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x961a,	// (0x00012eaa) list_double2_graphic_large_graphic_pane_g1

0x871b,	// (0x00011fab) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x871b,	// (0x00011fab) list_double2_graphic_large_graphic_pane_g2

0x872c,	// (0x00011fbc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x872c,	// (0x00011fbc) list_double2_graphic_large_graphic_pane_g3

0x962c,	// (0x00012ebc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x962c,	// (0x00012ebc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x00018fd6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x00018fd6) list_double2_graphic_large_graphic_pane_g

0x9638,	// (0x00012ec8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9638,	// (0x00012ec8) list_double2_graphic_large_graphic_pane_t1

0x964e,	// (0x00012ede) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x964e,	// (0x00012ede) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x00018fdf) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x00018fdf) list_double2_graphic_large_graphic_pane_t

0x97a2,	// (0x00013032) popup_fast_swap_window_ParamLimits

0x97a2,	// (0x00013032) popup_fast_swap_window

0x97be,	// (0x0001304e) popup_side_volume_key_window

0x97d8,	// (0x00013068) stacon_top_pane

0x97e2,	// (0x00013072) status_pane_ParamLimits

0x97e2,	// (0x00013072) status_pane

0x97d8,	// (0x00013068) status_small_pane

0x7cf0,	// (0x00011580) control_pane

0x7cf0,	// (0x00011580) stacon_bottom_pane

0x8ac8,	// (0x00012358) scroll_pane_cp121

0x8abf,	// (0x0001234f) set_content_pane

0x9660,	// (0x00012ef0) bg_active_tab_pane_g1_cp1

0x9669,	// (0x00012ef9) bg_active_tab_pane_g2_cp1

0x9672,	// (0x00012f02) bg_active_tab_pane_g3_cp1

0x9660,	// (0x00012ef0) bg_passive_tab_pane_g1_cp1

0x9669,	// (0x00012ef9) bg_passive_tab_pane_g2_cp1

0x9672,	// (0x00012f02) bg_passive_tab_pane_g3_cp1

0x967b,	// (0x00012f0b) bg_active_tab_pane_g1_cp2

0x9669,	// (0x00012ef9) bg_active_tab_pane_g2_cp2

0x9684,	// (0x00012f14) bg_active_tab_pane_g3_cp2

0x967b,	// (0x00012f0b) bg_passive_tab_pane_g1_cp2

0x9669,	// (0x00012ef9) bg_passive_tab_pane_g2_cp2

0x9684,	// (0x00012f14) bg_passive_tab_pane_g3_cp2

0x968d,	// (0x00012f1d) bg_active_tab_pane_g1_cp3

0x9669,	// (0x00012ef9) bg_active_tab_pane_g2_cp3

0x9696,	// (0x00012f26) bg_active_tab_pane_g3_cp3

0x968d,	// (0x00012f1d) bg_passive_tab_pane_g1_cp3

0x9669,	// (0x00012ef9) bg_passive_tab_pane_g2_cp3

0x9696,	// (0x00012f26) bg_passive_tab_pane_g3_cp3

0x969f,	// (0x00012f2f) bg_active_tab_pane_g1_cp4

0x9669,	// (0x00012ef9) bg_active_tab_pane_g2_cp4

0x96aa,	// (0x00012f3a) bg_active_tab_pane_g3_cp4

0x969f,	// (0x00012f2f) bg_passive_tab_pane_g1_cp4

0x9669,	// (0x00012ef9) bg_passive_tab_pane_g2_cp4

0x96aa,	// (0x00012f3a) bg_passive_tab_pane_g3_cp4

0x96f3,	// (0x00012f83) bg_active_tab_pane_g1_cp5

0x9669,	// (0x00012ef9) bg_active_tab_pane_g2_cp5

0x96fc,	// (0x00012f8c) bg_active_tab_pane_g3_cp5

0x96f3,	// (0x00012f83) bg_passive_tab_pane_g1_cp5

0x9669,	// (0x00012ef9) bg_passive_tab_pane_g2_cp5

0x96fc,	// (0x00012f8c) bg_passive_tab_pane_g3_cp5

0x9705,	// (0x00012f95) list_set_graphic_pane_ParamLimits

0x9705,	// (0x00012f95) list_set_graphic_pane

0x7cf0,	// (0x00011580) bg_set_opt_pane_cp4

0x9723,	// (0x00012fb3) list_set_graphic_pane_g1_ParamLimits

0x9723,	// (0x00012fb3) list_set_graphic_pane_g1

0x972f,	// (0x00012fbf) list_set_graphic_pane_g2_ParamLimits

0x972f,	// (0x00012fbf) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x00018fe4) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x00018fe4) list_set_graphic_pane_g

0x0009,

0xfae8,	// (0x00019378) volume_small_pane_cp_g

0x9753,	// (0x00012fe3) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9753,	// (0x00012fe3) list_double2_large_graphic_pane_g1_cp2

0x9761,	// (0x00012ff1) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9761,	// (0x00012ff1) list_double2_large_graphic_pane_g2_cp2

0x9772,	// (0x00013002) list_double2_large_graphic_pane_g3_cp2

0x977a,	// (0x0001300a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x977a,	// (0x0001300a) list_double2_large_graphic_pane_t1_cp2

0x9790,	// (0x00013020) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9790,	// (0x00013020) list_double2_large_graphic_pane_t2_cp2

0xb473,	// (0x00014d03) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb473,	// (0x00014d03) list_double_large_graphic_pane_g1_cp2

0xb486,	// (0x00014d16) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb486,	// (0x00014d16) list_double_large_graphic_pane_g2_cp2

0x9900,	// (0x00013190) list_double_large_graphic_pane_g3_cp2

0xb497,	// (0x00014d27) list_double_large_graphic_pane_g4_cp

0xb49f,	// (0x00014d2f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xb49f,	// (0x00014d2f) list_double_large_graphic_pane_t1_cp2

0xb4b6,	// (0x00014d46) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xb4b6,	// (0x00014d46) list_double_large_graphic_pane_t2_cp2

0x97f0,	// (0x00013080) list_double2_graphic_pane_g1_cp2_ParamLimits

0x97f0,	// (0x00013080) list_double2_graphic_pane_g1_cp2

0x97fe,	// (0x0001308e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x97fe,	// (0x0001308e) list_double2_graphic_pane_g2_cp2

0x980f,	// (0x0001309f) list_double2_graphic_pane_g3_cp2

0x9819,	// (0x000130a9) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9819,	// (0x000130a9) list_double2_graphic_pane_t1_cp2

0x982f,	// (0x000130bf) list_double2_graphic_pane_t2_cp2_ParamLimits

0x982f,	// (0x000130bf) list_double2_graphic_pane_t2_cp2

0x9841,	// (0x000130d1) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9841,	// (0x000130d1) list_single_number_heading_pane_g1_cp2

0x984d,	// (0x000130dd) list_single_number_heading_pane_g2_cp2

0x9855,	// (0x000130e5) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9855,	// (0x000130e5) list_single_number_heading_pane_t1_cp2

0x986b,	// (0x000130fb) list_single_number_heading_pane_t2_cp2_ParamLimits

0x986b,	// (0x000130fb) list_single_number_heading_pane_t2_cp2

0x987f,	// (0x0001310f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x987f,	// (0x0001310f) list_single_number_heading_pane_t3_cp2

0x9841,	// (0x000130d1) list_single_heading_pane_g1_cp2_ParamLimits

0x9841,	// (0x000130d1) list_single_heading_pane_g1_cp2

0x984d,	// (0x000130dd) list_single_heading_pane_g2_cp2

0x9855,	// (0x000130e5) list_single_heading_pane_t1_cp2_ParamLimits

0x9855,	// (0x000130e5) list_single_heading_pane_t1_cp2

0xb27b,	// (0x00014b0b) list_single_heading_pane_t2_cp2_ParamLimits

0xb27b,	// (0x00014b0b) list_single_heading_pane_t2_cp2

0xa213,	// (0x00013aa3) list_double_graphic_pane_g1_cp2_ParamLimits

0xa213,	// (0x00013aa3) list_double_graphic_pane_g1_cp2

0xb1cf,	// (0x00014a5f) list_double_graphic_pane_g2_cp2_ParamLimits

0xb1cf,	// (0x00014a5f) list_double_graphic_pane_g2_cp2

0xb1de,	// (0x00014a6e) list_double_graphic_pane_g3_cp2

0xb1e6,	// (0x00014a76) list_double_graphic_pane_t1_cp2_ParamLimits

0xb1e6,	// (0x00014a76) list_double_graphic_pane_t1_cp2

0xb1fc,	// (0x00014a8c) list_double_graphic_pane_t2_cp2_ParamLimits

0xb1fc,	// (0x00014a8c) list_double_graphic_pane_t2_cp2

0x98f4,	// (0x00013184) list_double_number_pane_g1_cp2_ParamLimits

0x98f4,	// (0x00013184) list_double_number_pane_g1_cp2

0x9900,	// (0x00013190) list_double_number_pane_g2_cp2

0xb193,	// (0x00014a23) list_double_number_pane_t1_cp2_ParamLimits

0xb193,	// (0x00014a23) list_double_number_pane_t1_cp2

0xb1a7,	// (0x00014a37) list_double_number_pane_t2_cp2_ParamLimits

0xb1a7,	// (0x00014a37) list_double_number_pane_t2_cp2

0xb1bd,	// (0x00014a4d) list_double_number_pane_t3_cp2_ParamLimits

0xb1bd,	// (0x00014a4d) list_double_number_pane_t3_cp2

0xb07c,	// (0x0001490c) list_single_graphic_pane_g1_cp2_ParamLimits

0xb07c,	// (0x0001490c) list_single_graphic_pane_g1_cp2

0x9958,	// (0x000131e8) list_single_graphic_pane_g2_cp2_ParamLimits

0x9958,	// (0x000131e8) list_single_graphic_pane_g2_cp2

0x9964,	// (0x000131f4) list_single_graphic_pane_g3_cp2

0xb052,	// (0x000148e2) list_single_graphic_pane_t1_cp2_ParamLimits

0xb052,	// (0x000148e2) list_single_graphic_pane_t1_cp2

0x9958,	// (0x000131e8) list_single_number_pane_g1_cp2_ParamLimits

0x9958,	// (0x000131e8) list_single_number_pane_g1_cp2

0x9964,	// (0x000131f4) list_single_number_pane_g2_cp2

0xb052,	// (0x000148e2) list_single_number_pane_t1_cp2_ParamLimits

0xb052,	// (0x000148e2) list_single_number_pane_t1_cp2

0xb068,	// (0x000148f8) list_single_number_pane_t2_cp2_ParamLimits

0xb068,	// (0x000148f8) list_single_number_pane_t2_cp2

0x9761,	// (0x00012ff1) list_double2_pane_g1_cp2_ParamLimits

0x9761,	// (0x00012ff1) list_double2_pane_g1_cp2

0x9772,	// (0x00013002) list_double2_pane_g2_cp2

0x98cc,	// (0x0001315c) list_double2_pane_t1_cp2_ParamLimits

0x98cc,	// (0x0001315c) list_double2_pane_t1_cp2

0x98e2,	// (0x00013172) list_double2_pane_t2_cp2_ParamLimits

0x98e2,	// (0x00013172) list_double2_pane_t2_cp2

0x98f4,	// (0x00013184) list_double_pane_g1_cp2_ParamLimits

0x98f4,	// (0x00013184) list_double_pane_g1_cp2

0x9900,	// (0x00013190) list_double_pane_g2_cp2

0x9908,	// (0x00013198) list_double_pane_t1_cp2_ParamLimits

0x9908,	// (0x00013198) list_double_pane_t1_cp2

0x991e,	// (0x000131ae) list_double_pane_t2_cp2_ParamLimits

0x991e,	// (0x000131ae) list_double_pane_t2_cp2

0x9948,	// (0x000131d8) list_single_pane_cp2_g3

0x9958,	// (0x000131e8) list_single_pane_g1_cp2_ParamLimits

0x9958,	// (0x000131e8) list_single_pane_g1_cp2

0x9964,	// (0x000131f4) list_single_pane_g2_cp2

0x996c,	// (0x000131fc) list_single_pane_t1_cp2_ParamLimits

0x996c,	// (0x000131fc) list_single_pane_t1_cp2

0x9984,	// (0x00013214) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9984,	// (0x00013214) list_single_large_graphic_pane_g1_cp2

0x9992,	// (0x00013222) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9992,	// (0x00013222) list_single_large_graphic_pane_g2_cp2

0x999e,	// (0x0001322e) list_single_large_graphic_pane_g3_cp2

0x99a6,	// (0x00013236) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x99a6,	// (0x00013236) list_single_large_graphic_pane_g4_cp1

0x99c0,	// (0x00013250) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x99c0,	// (0x00013250) list_single_large_graphic_pane_t1_cp2

0xb01c,	// (0x000148ac) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xb01c,	// (0x000148ac) list_single_graphic_heading_pane_g1_cp2

0xafe9,	// (0x00014879) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xafe9,	// (0x00014879) list_single_graphic_heading_pane_g4_cp2

0x9964,	// (0x000131f4) list_single_graphic_heading_pane_g5_cp2

0xb028,	// (0x000148b8) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xb028,	// (0x000148b8) list_single_graphic_heading_pane_t1_cp2

0xb03e,	// (0x000148ce) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb03e,	// (0x000148ce) list_single_graphic_heading_pane_t2_cp2

0xafdd,	// (0x0001486d) list_single_2graphic_pane_g1_cp2_ParamLimits

0xafdd,	// (0x0001486d) list_single_2graphic_pane_g1_cp2

0xafe9,	// (0x00014879) list_single_2graphic_pane_g2_cp2_ParamLimits

0xafe9,	// (0x00014879) list_single_2graphic_pane_g2_cp2

0x9964,	// (0x000131f4) list_single_2graphic_pane_g3_cp2

0xaffa,	// (0x0001488a) list_single_2graphic_pane_g4_cp2_ParamLimits

0xaffa,	// (0x0001488a) list_single_2graphic_pane_g4_cp2

0xb006,	// (0x00014896) list_single_2graphic_pane_t1_cp2_ParamLimits

0xb006,	// (0x00014896) list_single_2graphic_pane_t1_cp2

0x7ce6,	// (0x00011576) list_highlight_pane_g10_cp1

0xabc5,	// (0x00014455) list_highlight_pane_g1_cp1

0xabcd,	// (0x0001445d) list_highlight_pane_g2_cp1

0xabd5,	// (0x00014465) list_highlight_pane_g3_cp1

0xabdd,	// (0x0001446d) list_highlight_pane_g4_cp1

0xabe5,	// (0x00014475) list_highlight_pane_g5_cp1

0xabed,	// (0x0001447d) list_highlight_pane_g6_cp1

0xabf5,	// (0x00014485) list_highlight_pane_g7_cp1

0xabfd,	// (0x0001448d) list_highlight_pane_g8_cp1

0xac05,	// (0x00014495) list_highlight_pane_g9_cp1

0xaadd,	// (0x0001436d) form_field_slider_pane_t3

0xaaeb,	// (0x0001437b) form_field_slider_pane_t4

0xaaf9,	// (0x00014389) slider_form_pane_ParamLimits

0xaaf9,	// (0x00014389) slider_form_pane

0x7cf0,	// (0x00011580) control_abbreviations

0x7cf0,	// (0x00011580) control_conventions

0x7cf0,	// (0x00011580) control_definitions

0x7cf0,	// (0x00011580) format_table_attribute

0xb2c7,	// (0x00014b57) bg_popup_preview_window_pane_g9

0x7cf0,	// (0x00011580) format_table_data2

0x7cf0,	// (0x00011580) format_table_data3

0x7cf0,	// (0x00011580) format_table_data_example

0x0008,

0x7cf0,	// (0x00011580) intro_purpose

0xf8f0,	// (0x00019180) bg_popup_preview_window_pane_g

0x7cf0,	// (0x00011580) texts_category

0x7cf0,	// (0x00011580) texts_graphics

0x99d6,	// (0x00013266) text_digital

0x99e5,	// (0x00013275) text_primary

0x99f4,	// (0x00013284) text_primary_small

0x9a03,	// (0x00013293) text_secondary

0x9a12,	// (0x000132a2) text_title

0xbb13,	// (0x000153a3) bg_passive_tab_pane_g1_cp3_srt

0x9669,	// (0x00012ef9) bg_passive_tab_pane_g2_cp3_srt

0xbb1c,	// (0x000153ac) bg_passive_tab_pane_g3_cp3_srt

0x7dd0,	// (0x00011660) bg_active_tab_pane_cp3_srt_ParamLimits

0x7dd0,	// (0x00011660) bg_active_tab_pane_cp3_srt

0xbb25,	// (0x000153b5) tabs_4_active_pane_srt_g1

0xbb2d,	// (0x000153bd) tabs_4_active_pane_srt_t1_ParamLimits

0xbb2d,	// (0x000153bd) tabs_4_active_pane_srt_t1

0xbb13,	// (0x000153a3) bg_active_tab_pane_g1_cp3_copy1

0x9669,	// (0x00012ef9) bg_active_tab_pane_g2_cp3_copy1

0xbb1c,	// (0x000153ac) bg_active_tab_pane_g3_cp3_copy1

0x7dd0,	// (0x00011660) tabs_2_long_active_pane_srt_ParamLimits

0x7dd0,	// (0x00011660) tabs_2_long_active_pane_srt

0x7dd0,	// (0x00011660) tabs_2_long_passive_pane_srt_ParamLimits

0x7dd0,	// (0x00011660) tabs_2_long_passive_pane_srt

0x8f13,	// (0x000127a3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8f13,	// (0x000127a3) bg_passive_tab_pane_cp4_srt

0xb734,	// (0x00014fc4) bg_passive_tab_pane_g1_cp4_srt

0x9669,	// (0x00012ef9) bg_passive_tab_pane_g2_cp4_srt

0xb73d,	// (0x00014fcd) bg_passive_tab_pane_g3_cp4_srt

0x8ef2,	// (0x00012782) bg_active_tab_pane_cp4_srt_ParamLimits

0x8ef2,	// (0x00012782) bg_active_tab_pane_cp4_srt

0xb746,	// (0x00014fd6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb746,	// (0x00014fd6) tabs_2_long_active_pane_srt_t1

0xb734,	// (0x00014fc4) bg_active_tab_pane_g1_cp4_srt

0x9669,	// (0x00012ef9) bg_active_tab_pane_g2_cp4_srt

0xb73d,	// (0x00014fcd) bg_active_tab_pane_g3_cp4_srt

0x8065,	// (0x000118f5) tabs_3_long_active_pane_srt_ParamLimits

0x8065,	// (0x000118f5) tabs_3_long_active_pane_srt

0x8065,	// (0x000118f5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8065,	// (0x000118f5) tabs_3_long_passive_pane_cp_srt

0x8065,	// (0x000118f5) tabs_3_long_passive_pane_srt_ParamLimits

0x8065,	// (0x000118f5) tabs_3_long_passive_pane_srt

0x8f13,	// (0x000127a3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8f13,	// (0x000127a3) bg_passive_tab_pane_cp5_srt

0x96f3,	// (0x00012f83) bg_passive_tab_pane_g1_cp5_srt

0x9669,	// (0x00012ef9) bg_passive_tab_pane_g2_cp5_srt

0x96fc,	// (0x00012f8c) bg_passive_tab_pane_g3_cp5_srt

0x8ef2,	// (0x00012782) bg_active_tab_pane_cp5_srt_ParamLimits

0x8ef2,	// (0x00012782) bg_active_tab_pane_cp5_srt

0xb722,	// (0x00014fb2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb722,	// (0x00014fb2) tabs_3_long_active_pane_srt_t1

0x96f3,	// (0x00012f83) bg_active_tab_pane_g1_cp5_srt

0x9669,	// (0x00012ef9) bg_active_tab_pane_g2_cp5_srt

0x96fc,	// (0x00012f8c) bg_active_tab_pane_g3_cp5_srt

0xb714,	// (0x00014fa4) navi_text_pane_srt_t1

0xb70c,	// (0x00014f9c) navi_icon_pane_srt_g1

0x9bd5,	// (0x00013465) midp_editing_number_pane_srt

0x9a21,	// (0x000132b1) midp_ticker_pane_srt

0x9bdd,	// (0x0001346d) midp_ticker_pane_srt_g1

0x9be5,	// (0x00013475) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x00019003) midp_ticker_pane_srt_g

0x9bed,	// (0x0001347d) midp_ticker_pane_srt_t1

0xb6fd,	// (0x00014f8d) midp_editing_number_pane_t1_copy1

0x8f13,	// (0x000127a3) listscroll_midp_pane

0x8f13,	// (0x000127a3) midp_form_pane

0x9a8d,	// (0x0001331d) midp_info_popup_window_ParamLimits

0x9a8d,	// (0x0001331d) midp_info_popup_window

0x8dde,	// (0x0001266e) bg_popup_sub_pane_cp50_ParamLimits

0x8dde,	// (0x0001266e) bg_popup_sub_pane_cp50

0xa7fa,	// (0x0001408a) listscroll_midp_info_pane_ParamLimits

0xa7fa,	// (0x0001408a) listscroll_midp_info_pane

0xa7e2,	// (0x00014072) listscroll_form_midp_pane_ParamLimits

0xa7e2,	// (0x00014072) listscroll_form_midp_pane

0xa7ee,	// (0x0001407e) scroll_bar_cp050

0xa7c2,	// (0x00014052) list_midp_pane

0xc7ce,	// (0x0001605e) signal_pane_g2_cp

0xa6fc,	// (0x00013f8c) listscroll_midp_info_pane_t1_ParamLimits

0xa6fc,	// (0x00013f8c) listscroll_midp_info_pane_t1

0xa714,	// (0x00013fa4) listscroll_midp_info_pane_t2_ParamLimits

0xa714,	// (0x00013fa4) listscroll_midp_info_pane_t2

0xa752,	// (0x00013fe2) listscroll_midp_info_pane_t3_ParamLimits

0xa752,	// (0x00013fe2) listscroll_midp_info_pane_t3

0xa78c,	// (0x0001401c) listscroll_midp_info_pane_t4_ParamLimits

0xa78c,	// (0x0001401c) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x000190bb) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x000190bb) listscroll_midp_info_pane_t

0x8ea0,	// (0x00012730) scroll_pane_cp21

0xa6a0,	// (0x00013f30) form_midp_field_choice_group_pane

0xa6a9,	// (0x00013f39) form_midp_field_text_pane

0xa6e2,	// (0x00013f72) form_midp_field_time_pane

0xa6ea,	// (0x00013f7a) form_midp_gauge_slider_pane

0xa6f3,	// (0x00013f83) form_midp_gauge_wait_pane

0x7cf0,	// (0x00011580) form_midp_image_pane

0xa664,	// (0x00013ef4) list_single_midp_pane_ParamLimits

0xa664,	// (0x00013ef4) list_single_midp_pane

0xa614,	// (0x00013ea4) form_midp_field_text_pane_t1

0xa3b7,	// (0x00013c47) input_focus_pane_cp050

0xa653,	// (0x00013ee3) list_midp_form_text_pane

0xa5e3,	// (0x00013e73) form_midp_field_choice_group_pane_t1

0xa5f1,	// (0x00013e81) input_focus_pane_cp051

0xa605,	// (0x00013e95) list_midp_choice_pane

0x7cf0,	// (0x00011580) status_idle_pane

0xa5c7,	// (0x00013e57) form_midp_field_time_pane_t1

0x7ce6,	// (0x00011576) wait_anim_pane_g2_copy1

0xa5d5,	// (0x00013e65) form_midp_field_time_pane_t2

0x0001,

0x9b3d,	// (0x000133cd) aid_navinavi_width_2_pane

0xf826,	// (0x000190b6) form_midp_field_time_pane_t

0x7cf0,	// (0x00011580) input_focus_pane_cp052

0x7cf0,	// (0x00011580) bg_input_focus_pane_cp040

0xa587,	// (0x00013e17) form_midp_gauge_slider_pane_t1

0xa595,	// (0x00013e25) form_midp_gauge_slider_pane_t2

0xa5a3,	// (0x00013e33) form_midp_gauge_slider_pane_t3

0xa5b1,	// (0x00013e41) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x000190ad) form_midp_gauge_slider_pane_t

0xa5bf,	// (0x00013e4f) form_midp_slider_pane

0x7dd0,	// (0x00011660) bg_input_focus_pane_cp041_ParamLimits

0x7dd0,	// (0x00011660) bg_input_focus_pane_cp041

0xa554,	// (0x00013de4) form_midp_gauge_wait_pane_t1_ParamLimits

0xa554,	// (0x00013de4) form_midp_gauge_wait_pane_t1

0xa566,	// (0x00013df6) form_midp_gauge_wait_pane_t2_ParamLimits

0xa566,	// (0x00013df6) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x000190a8) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x000190a8) form_midp_gauge_wait_pane_t

0xa578,	// (0x00013e08) form_midp_wait_pane_ParamLimits

0xa578,	// (0x00013e08) form_midp_wait_pane

0xa51e,	// (0x00013dae) form_midp_image_pane_g1

0xa527,	// (0x00013db7) form_midp_image_pane_t1

0xa536,	// (0x00013dc6) form_midp_image_pane_t2

0xa545,	// (0x00013dd5) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x000190a1) form_midp_image_pane_t

0xa506,	// (0x00013d96) list_single_midp_pane_g1

0xa50f,	// (0x00013d9f) list_single_midp_pane_t1

0xa4d6,	// (0x00013d66) list_midp_form_item_pane_ParamLimits

0xa4d6,	// (0x00013d66) list_midp_form_item_pane

0x9ae5,	// (0x00013375) list_midp_form_item_pane_t1

0x9af4,	// (0x00013384) midp_ticker_pane_g1

0x9b00,	// (0x00013390) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x00018fe9) midp_ticker_pane_g

0x9b0c,	// (0x0001339c) midp_ticker_pane_t1

0xb973,	// (0x00015203) midp_editing_number_pane_t1

0xb951,	// (0x000151e1) midp_editing_number_pane

0xb960,	// (0x000151f0) midp_ticker_pane

0xb6c5,	// (0x00014f55) ai_message_heading_pane

0x7cf0,	// (0x00011580) bg_popup_window_pane_cp14

0xb6cd,	// (0x00014f5d) listscroll_ai_message_pane

0xb64f,	// (0x00014edf) ai_message_heading_pane_g1_ParamLimits

0xb64f,	// (0x00014edf) ai_message_heading_pane_g1

0xb65b,	// (0x00014eeb) ai_message_heading_pane_g2_ParamLimits

0xb65b,	// (0x00014eeb) ai_message_heading_pane_g2

0xb667,	// (0x00014ef7) ai_message_heading_pane_g3_ParamLimits

0xb667,	// (0x00014ef7) ai_message_heading_pane_g3

0xb673,	// (0x00014f03) ai_message_heading_pane_g4_ParamLimits

0xb673,	// (0x00014f03) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x000191e2) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x000191e2) ai_message_heading_pane_g

0xb67f,	// (0x00014f0f) ai_message_heading_pane_t1_ParamLimits

0xb67f,	// (0x00014f0f) ai_message_heading_pane_t1

0xb699,	// (0x00014f29) ai_message_heading_pane_t2_ParamLimits

0xb699,	// (0x00014f29) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x000191eb) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x000191eb) ai_message_heading_pane_t

0xb6ab,	// (0x00014f3b) bg_popup_heading_pane_cp1_ParamLimits

0xb6ab,	// (0x00014f3b) bg_popup_heading_pane_cp1

0xb63d,	// (0x00014ecd) list_ai_message_pane_ParamLimits

0xb63d,	// (0x00014ecd) list_ai_message_pane

0x8ea0,	// (0x00012730) scroll_pane_cp10

0xb5d9,	// (0x00014e69) list_ai_message_pane_g1

0xb5e1,	// (0x00014e71) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x000191bf) list_ai_message_pane_g

0xb5e9,	// (0x00014e79) list_ai_message_pane_t1_ParamLimits

0xb5e9,	// (0x00014e79) list_ai_message_pane_t1

0xb5fe,	// (0x00014e8e) list_ai_message_pane_t2_ParamLimits

0xb5fe,	// (0x00014e8e) list_ai_message_pane_t2

0xb613,	// (0x00014ea3) list_ai_message_pane_t3_ParamLimits

0xb613,	// (0x00014ea3) list_ai_message_pane_t3

0xb628,	// (0x00014eb8) list_ai_message_pane_t4_ParamLimits

0xb628,	// (0x00014eb8) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x000191c4) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x000191c4) list_ai_message_pane_t

0xb5c3,	// (0x00014e53) cell_ai_soft_ind_pane_ParamLimits

0xb5c3,	// (0x00014e53) cell_ai_soft_ind_pane

0x9b1e,	// (0x000133ae) cell_ai_soft_ind_pane_g1_ParamLimits

0x9b1e,	// (0x000133ae) cell_ai_soft_ind_pane_g1

0x7cf0,	// (0x00011580) grid_highlight_cp1

0x9b2b,	// (0x000133bb) text_secondary_cp56_ParamLimits

0x9b2b,	// (0x000133bb) text_secondary_cp56

0xb598,	// (0x00014e28) example_general_pane_ParamLimits

0xb598,	// (0x00014e28) example_general_pane

0xb5a4,	// (0x00014e34) example_parent_pane_g1_ParamLimits

0xb5a4,	// (0x00014e34) example_parent_pane_g1

0xb5b0,	// (0x00014e40) example_parent_pane_t1_ParamLimits

0xb5b0,	// (0x00014e40) example_parent_pane_t1

0x6828,	// (0x000100b8) popup_preview_text_window_ParamLimits

0x6828,	// (0x000100b8) popup_preview_text_window

0x9950,	// (0x000131e0) list_single_pane_cp2_g4

0x810f,	// (0x0001199f) bg_popup_preview_window_pane_ParamLimits

0x810f,	// (0x0001199f) bg_popup_preview_window_pane

0xb2cf,	// (0x00014b5f) popup_preview_text_window_t1_ParamLimits

0xb2cf,	// (0x00014b5f) popup_preview_text_window_t1

0xb2ed,	// (0x00014b7d) popup_preview_text_window_t2_ParamLimits

0xb2ed,	// (0x00014b7d) popup_preview_text_window_t2

0xb336,	// (0x00014bc6) popup_preview_text_window_t3_ParamLimits

0xb336,	// (0x00014bc6) popup_preview_text_window_t3

0xb37b,	// (0x00014c0b) popup_preview_text_window_t4_ParamLimits

0xb37b,	// (0x00014c0b) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x00019193) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x00019193) popup_preview_text_window_t

0xb3f9,	// (0x00014c89) scroll_pane_cp11

0xa29d,	// (0x00013b2d) bg_popup_preview_window_pane_g1

0xb28f,	// (0x00014b1f) bg_popup_preview_window_pane_g2

0xb297,	// (0x00014b27) bg_popup_preview_window_pane_g3

0xb29f,	// (0x00014b2f) bg_popup_preview_window_pane_g4

0xb2a7,	// (0x00014b37) bg_popup_preview_window_pane_g5

0xb2af,	// (0x00014b3f) bg_popup_preview_window_pane_g6

0xb2b7,	// (0x00014b47) bg_popup_preview_window_pane_g7

0xb2bf,	// (0x00014b4f) bg_popup_preview_window_pane_g8

0x5a50,	// (0x0000f2e0) aid_popup_width_pane

0x6806,	// (0x00010096) popup_midp_note_alarm_window_ParamLimits

0x6806,	// (0x00010096) popup_midp_note_alarm_window

0x8b79,	// (0x00012409) data_form_pane_ParamLimits

0x8b85,	// (0x00012415) form_field_data_pane_g1

0x8b8f,	// (0x0001241f) form_field_data_pane_t1_ParamLimits

0x8ba9,	// (0x00012439) input_focus_pane_ParamLimits

0x8bb7,	// (0x00012447) data_form_wide_pane_ParamLimits

0x8bc3,	// (0x00012453) form_field_data_wide_pane_g1

0x8bef,	// (0x0001247f) form_field_data_wide_pane_t1_ParamLimits

0x83ae,	// (0x00011c3e) input_focus_pane_cp6_ParamLimits

0x8e4b,	// (0x000126db) input_popup_find_pane_g1_ParamLimits

0x8e4b,	// (0x000126db) input_popup_find_pane_g1

0x5fac,	// (0x0000f83c) aid_navi_side_left_pane

0x5fc1,	// (0x0000f851) aid_navi_side_right_pane

0xacc0,	// (0x00014550) bg_popup_window_pane_cp30_ParamLimits

0xacc0,	// (0x00014550) bg_popup_window_pane_cp30

0xad3a,	// (0x000145ca) popup_midp_note_alarm_window_g1_ParamLimits

0xad3a,	// (0x000145ca) popup_midp_note_alarm_window_g1

0xad6a,	// (0x000145fa) popup_midp_note_alarm_window_t1_ParamLimits

0xad6a,	// (0x000145fa) popup_midp_note_alarm_window_t1

0xae0b,	// (0x0001469b) popup_midp_note_alarm_window_t2_ParamLimits

0xae0b,	// (0x0001469b) popup_midp_note_alarm_window_t2

0xaeb9,	// (0x00014749) popup_midp_note_alarm_window_t3_ParamLimits

0xaeb9,	// (0x00014749) popup_midp_note_alarm_window_t3

0xaee1,	// (0x00014771) popup_midp_note_alarm_window_t4_ParamLimits

0xaee1,	// (0x00014771) popup_midp_note_alarm_window_t4

0xaf01,	// (0x00014791) popup_midp_note_alarm_window_t5_ParamLimits

0xaf01,	// (0x00014791) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x00019130) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x00019130) popup_midp_note_alarm_window_t

0xafad,	// (0x0001483d) wait_bar_pane_cp1_ParamLimits

0xafad,	// (0x0001483d) wait_bar_pane_cp1

0x7cf0,	// (0x00011580) wait_anim_pane_copy1

0x7cf0,	// (0x00011580) wait_border_pane_copy1

0xa99e,	// (0x0001422e) wait_border_pane_g1_copy1

0x8c09,	// (0x00012499) form_field_popup_pane_g1

0x8c11,	// (0x000124a1) form_field_popup_pane_t1_ParamLimits

0x8ba9,	// (0x00012439) input_focus_pane_cp7_ParamLimits

0x8c2b,	// (0x000124bb) list_form_pane_ParamLimits

0x8c37,	// (0x000124c7) form_field_popup_wide_pane_g1

0x8c3f,	// (0x000124cf) form_field_popup_wide_pane_t1_ParamLimits

0x8ba9,	// (0x00012439) input_focus_pane_cp8_ParamLimits

0x8c54,	// (0x000124e4) list_form_wide_pane_ParamLimits

0xbb9d,	// (0x0001542d) aid_size_cell_graphic_pane

0x8d2d,	// (0x000125bd) data_form_pane_t1_ParamLimits

0xb91e,	// (0x000151ae) data_form_wide_pane_t1_ParamLimits

0x9e44,	// (0x000136d4) bg_status_flat_pane

0x7d30,	// (0x000115c0) title_pane_t1_ParamLimits

0x7d98,	// (0x00011628) title_pane_t2_ParamLimits

0x7dbe,	// (0x0001164e) title_pane_t3_ParamLimits

0xf55d,	// (0x00018ded) title_pane_t_ParamLimits

0x931c,	// (0x00012bac) level_1_signal_ParamLimits

0x9329,	// (0x00012bb9) level_2_signal_ParamLimits

0x9336,	// (0x00012bc6) level_3_signal_ParamLimits

0x9343,	// (0x00012bd3) level_4_signal_ParamLimits

0x9350,	// (0x00012be0) level_5_signal_ParamLimits

0x935d,	// (0x00012bed) level_6_signal_ParamLimits

0x936a,	// (0x00012bfa) level_7_signal_ParamLimits

0x931c,	// (0x00012bac) level_1_battery_ParamLimits

0x9329,	// (0x00012bb9) level_2_battery_ParamLimits

0x9336,	// (0x00012bc6) level_3_battery_ParamLimits

0x9343,	// (0x00012bd3) level_4_battery_ParamLimits

0x9350,	// (0x00012be0) level_5_battery_ParamLimits

0x935d,	// (0x00012bed) level_6_battery_ParamLimits

0x936a,	// (0x00012bfa) level_7_battery_ParamLimits

0xabc5,	// (0x00014455) bg_status_flat_pane_g1

0xabcd,	// (0x0001445d) bg_status_flat_pane_g2

0xabd5,	// (0x00014465) bg_status_flat_pane_g3

0xabdd,	// (0x0001446d) bg_status_flat_pane_g4

0xabe5,	// (0x00014475) bg_status_flat_pane_g5

0xabed,	// (0x0001447d) bg_status_flat_pane_g6

0xabf5,	// (0x00014485) bg_status_flat_pane_g7

0x7de6,	// (0x00011676) tabs_3_active_pane_t1_ParamLimits

0x7de6,	// (0x00011676) tabs_3_passive_pane_t1_ParamLimits

0x7e00,	// (0x00011690) tabs_4_active_pane_t1_ParamLimits

0x7e00,	// (0x00011690) tabs_4_1_passive_pane_t1_ParamLimits

0x8ee0,	// (0x00012770) tabs_2_active_pane_t1_ParamLimits

0x8ee0,	// (0x00012770) tabs_2_passive_pane_t1_ParamLimits

0x8ef2,	// (0x00012782) bg_active_tab_pane_cp4_ParamLimits

0x8f00,	// (0x00012790) tabs_2_long_active_pane_t1_ParamLimits

0x8f13,	// (0x000127a3) bg_passive_tab_pane_cp4_ParamLimits

0x6b3d,	// (0x000103cd) list_single_midp_graphic_pane_t1_ParamLimits

0x8ef2,	// (0x00012782) bg_active_tab_pane_cp5_ParamLimits

0x8f1f,	// (0x000127af) tabs_3_long_active_pane_t1_ParamLimits

0x8f13,	// (0x000127a3) bg_passive_tab_pane_cp5_ParamLimits

0x6b3d,	// (0x000103cd) list_single_midp_graphic_pane_t1

0x9e44,	// (0x000136d4) bg_status_flat_pane_ParamLimits

0x9f07,	// (0x00013797) indicator_pane_cp2_ParamLimits

0x9f07,	// (0x00013797) indicator_pane_cp2

0xa02c,	// (0x000138bc) navi_pane_srt_ParamLimits

0xa02c,	// (0x000138bc) navi_pane_srt

0xa050,	// (0x000138e0) popup_clock_digital_analogue_window_cp1

0x7ec7,	// (0x00011757) indicator_pane_t1

0x9a21,	// (0x000132b1) copy_highlight_pane

0x9a21,	// (0x000132b1) cursor_graphics_pane

0x9a21,	// (0x000132b1) graphic_within_text_pane

0x9a21,	// (0x000132b1) link_highlight_pane

0xb3bc,	// (0x00014c4c) popup_preview_text_window_t5_ParamLimits

0xb3bc,	// (0x00014c4c) popup_preview_text_window_t5

0x9b45,	// (0x000133d5) cursor_digital_pane

0x9b45,	// (0x000133d5) cursor_primary_pane

0x9b56,	// (0x000133e6) cursor_primary_small_pane

0x9b5e,	// (0x000133ee) cursor_secondary_pane

0x9b66,	// (0x000133f6) cursor_title_pane

0x9b45,	// (0x000133d5) link_highlight_digital_pane

0x9b4d,	// (0x000133dd) link_highlight_primary_pane

0x9b56,	// (0x000133e6) link_highlight_primary_small_pane

0x9b5e,	// (0x000133ee) link_highlight_secondary_pane

0x9b66,	// (0x000133f6) link_highlight_title_pane

0x9b45,	// (0x000133d5) copy_highlight_digital_pane

0x9b45,	// (0x000133d5) copy_highlight_primary_pane

0x9b56,	// (0x000133e6) copy_highlight_primary_small_pane

0x9b5e,	// (0x000133ee) copy_highlight_secondary_pane

0x9b66,	// (0x000133f6) copy_highlight_title_pane

0x9b5e,	// (0x000133ee) graphic_text_digital_pane

0xac63,	// (0x000144f3) graphic_text_primary_pane

0xac6c,	// (0x000144fc) graphic_text_primary_small_pane

0x9b56,	// (0x000133e6) graphic_text_secondary_pane

0x9b45,	// (0x000133d5) graphic_text_title_pane

0x9b6e,	// (0x000133fe) cursor_primary_pane_g1

0xac55,	// (0x000144e5) cursor_text_primary_t1

0xac3d,	// (0x000144cd) cursor_primary_small_pane_g1

0xac47,	// (0x000144d7) cursor_text_primary_small_t1

0xac25,	// (0x000144b5) cursor_primary_small_pane_g1_copy1

0xac2f,	// (0x000144bf) cursor_text_primary_small_t1_copy1

0xac0d,	// (0x0001449d) cursor_text_title_t1

0xac1b,	// (0x000144ab) cursor_title_pane_g1

0x9b6e,	// (0x000133fe) cursor_digital_pane_g1

0x9b78,	// (0x00013408) cursor_text_digital_t1

0xabae,	// (0x0001443e) link_highlight_primary_pane_g1

0xabb6,	// (0x00014446) link_highlight_primary_pane_t1

0x9b86,	// (0x00013416) link_highlight_primary_small_pane_g1

0x9b8e,	// (0x0001341e) link_highlight_primary_small_pane_t1

0x9b86,	// (0x00013416) link_highlight_secondary_pane_g1

0x9b9d,	// (0x0001342d) link_highlight_secondary_pane_t1

0xab22,	// (0x000143b2) link_highlight_title_pane_g1

0xab2a,	// (0x000143ba) link_highlight_title_pane_t1

0xab0b,	// (0x0001439b) link_highlight_digital_pane_g1

0xab13,	// (0x000143a3) link_highlight_digital_pane_t1

0xa9e3,	// (0x00014273) copy_highlight_primary_pane_g1

0xa9eb,	// (0x0001427b) copy_highlight_primary_pane_t1

0xa9bd,	// (0x0001424d) copy_highlight_primary_small_pane_g1

0xa9d4,	// (0x00014264) copy_highlight_primary_small_pane_t1

0x9bac,	// (0x0001343c) copy_highlight_secondary_pane_g1

0x9bb4,	// (0x00013444) copy_highlight_secondary_pane_t1

0xa9bd,	// (0x0001424d) copy_highlight_title_pane_g1

0xa9c5,	// (0x00014255) copy_highlight_title_pane_t1

0xa9e3,	// (0x00014273) copy_highlight_digital_pane_g1

0xbdad,	// (0x0001563d) copy_highlight_digital_pane_t1

0xbcbf,	// (0x0001554f) graphic_text_primary_pane_g1

0xbd91,	// (0x00015621) graphic_text_primary_pane_t1

0xbd9f,	// (0x0001562f) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0001925f) graphic_text_primary_pane_t

0xbd2b,	// (0x000155bb) graphic_text_primary_small_pane_g1

0xbd33,	// (0x000155c3) graphic_text_primary_small_pane_t1

0xbd83,	// (0x00015613) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0001925a) graphic_text_primary_small_pane_t

0xbd07,	// (0x00015597) graphic_text_secondary_pane_g1

0xbd0f,	// (0x0001559f) graphic_text_secondary_pane_t1

0xbd1d,	// (0x000155ad) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x00019255) graphic_text_secondary_pane_t

0xbce3,	// (0x00015573) graphic_text_title_pane_g1

0xbceb,	// (0x0001557b) graphic_text_title_pane_t1

0xbcf9,	// (0x00015589) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x00019250) graphic_text_title_pane_t

0xbcbf,	// (0x0001554f) graphic_text_digital_pane_g1

0xbcc7,	// (0x00015557) graphic_text_digital_pane_t1

0xbcd5,	// (0x00015565) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0001924b) graphic_text_digital_pane_t

0x7dd0,	// (0x00011660) navi_icon_pane_srt_ParamLimits

0x7dd0,	// (0x00011660) navi_icon_pane_srt

0x7cf0,	// (0x00011580) navi_midp_pane_srt

0x7cf0,	// (0x00011580) navi_navi_pane_srt

0x7dd0,	// (0x00011660) navi_text_pane_srt_ParamLimits

0x7dd0,	// (0x00011660) navi_text_pane_srt

0xbc8a,	// (0x0001551a) navi_navi_icon_text_pane_srt

0xbc92,	// (0x00015522) navi_navi_pane_srt_g1_ParamLimits

0xbc92,	// (0x00015522) navi_navi_pane_srt_g1

0xbca4,	// (0x00015534) navi_navi_pane_srt_g2_ParamLimits

0xbca4,	// (0x00015534) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x00019246) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x00019246) navi_navi_pane_srt_g

0xbcb6,	// (0x00015546) navi_navi_tabs_pane_srt

0xbc8a,	// (0x0001551a) navi_navi_text_pane_srt

0xbc8a,	// (0x0001551a) navi_navi_volume_pane_srt

0xbc7b,	// (0x0001550b) navi_navi_text_pane_srt_t1

0x6ebd,	// (0x0001074d) navi_navi_volume_pane_srt_g1

0x6ec5,	// (0x00010755) volume_small_pane_srt_ParamLimits

0x6ec5,	// (0x00010755) volume_small_pane_srt

0x628c,	// (0x0000fb1c) volume_small_pane_srt_g1_ParamLimits

0x628c,	// (0x0000fb1c) volume_small_pane_srt_g1

0x629c,	// (0x0000fb2c) volume_small_pane_srt_g2_ParamLimits

0x629c,	// (0x0000fb2c) volume_small_pane_srt_g2

0x62ad,	// (0x0000fb3d) volume_small_pane_srt_g3_ParamLimits

0x62ad,	// (0x0000fb3d) volume_small_pane_srt_g3

0x62be,	// (0x0000fb4e) volume_small_pane_srt_g4_ParamLimits

0x62be,	// (0x0000fb4e) volume_small_pane_srt_g4

0x62cf,	// (0x0000fb5f) volume_small_pane_srt_g5_ParamLimits

0x62cf,	// (0x0000fb5f) volume_small_pane_srt_g5

0x62e0,	// (0x0000fb70) volume_small_pane_srt_g6_ParamLimits

0x62e0,	// (0x0000fb70) volume_small_pane_srt_g6

0x62f1,	// (0x0000fb81) volume_small_pane_srt_g7_ParamLimits

0x62f1,	// (0x0000fb81) volume_small_pane_srt_g7

0x6302,	// (0x0000fb92) volume_small_pane_srt_g8_ParamLimits

0x6302,	// (0x0000fb92) volume_small_pane_srt_g8

0x6313,	// (0x0000fba3) volume_small_pane_srt_g9_ParamLimits

0x6313,	// (0x0000fba3) volume_small_pane_srt_g9

0x6324,	// (0x0000fbb4) volume_small_pane_srt_g10_ParamLimits

0x6324,	// (0x0000fbb4) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x00018fee) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x00018fee) volume_small_pane_srt_g

0x81b8,	// (0x00011a48) query_popup_data_pane_cp2

0xbc61,	// (0x000154f1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xbc61,	// (0x000154f1) navi_navi_icon_text_pane_srt_t1

0xac63,	// (0x000144f3) navi_tabs_2_long_pane_srt

0xac63,	// (0x000144f3) navi_tabs_2_pane_srt

0xac63,	// (0x000144f3) navi_tabs_3_long_pane_srt

0xac63,	// (0x000144f3) navi_tabs_3_pane_srt

0xac63,	// (0x000144f3) navi_tabs_4_pane_srt

0x6e9d,	// (0x0001072d) tabs_2_active_pane_srt_ParamLimits

0x6e9d,	// (0x0001072d) tabs_2_active_pane_srt

0x6ead,	// (0x0001073d) tabs_2_passive_pane_srt_ParamLimits

0x6ead,	// (0x0001073d) tabs_2_passive_pane_srt

0x9d65,	// (0x000135f5) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9d65,	// (0x000135f5) bg_passive_tab_pane_cp1_srt

0xbc2d,	// (0x000154bd) bg_passive_tab_pane_g1_cp1_srt

0x9669,	// (0x00012ef9) bg_passive_tab_pane_g2_cp1_srt

0xbc36,	// (0x000154c6) bg_passive_tab_pane_g3_cp1_srt

0x7dd0,	// (0x00011660) bg_active_tab_pane_cp1_srt_ParamLimits

0x7dd0,	// (0x00011660) bg_active_tab_pane_cp1_srt

0xbc3f,	// (0x000154cf) tabs_2_active_pane_srt_g1

0xbc47,	// (0x000154d7) tabs_2_active_pane_srt_t1_ParamLimits

0xbc47,	// (0x000154d7) tabs_2_active_pane_srt_t1

0xbc2d,	// (0x000154bd) bg_active_tab_pane_g1_cp1_srt

0x9669,	// (0x00012ef9) bg_active_tab_pane_g2_cp1_srt

0xbc36,	// (0x000154c6) bg_active_tab_pane_g3_cp1_srt

0x6e6a,	// (0x000106fa) tabs_3_active_pane_srt_ParamLimits

0x6e6a,	// (0x000106fa) tabs_3_active_pane_srt

0x6e7b,	// (0x0001070b) tabs_3_passive_pane_cp_srt_ParamLimits

0x6e7b,	// (0x0001070b) tabs_3_passive_pane_cp_srt

0x6e8c,	// (0x0001071c) tabs_3_passive_pane_srt_ParamLimits

0x6e8c,	// (0x0001071c) tabs_3_passive_pane_srt

0x9d65,	// (0x000135f5) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9d65,	// (0x000135f5) bg_passive_tab_pane_cp2_srt

0x9bc3,	// (0x00013453) bg_passive_tab_pane_g1_cp2_srt

0x9669,	// (0x00012ef9) bg_passive_tab_pane_g2_cp2_srt

0x9bcc,	// (0x0001345c) bg_passive_tab_pane_g3_cp2_srt

0x7dd0,	// (0x00011660) bg_active_tab_pane_cp2_srt_ParamLimits

0x7dd0,	// (0x00011660) bg_active_tab_pane_cp2_srt

0xbc13,	// (0x000154a3) tabs_3_active_pane_srt_g1

0xbc1b,	// (0x000154ab) tabs_3_active_pane_srt_t1_ParamLimits

0xbc1b,	// (0x000154ab) tabs_3_active_pane_srt_t1

0x9bc3,	// (0x00013453) bg_active_tab_pane_g1_cp2_srt

0x9669,	// (0x00012ef9) bg_active_tab_pane_g2_cp2_srt

0x9bcc,	// (0x0001345c) bg_active_tab_pane_g3_cp2_srt

0x6e22,	// (0x000106b2) tabs_4_active_pane_srt_ParamLimits

0x6e22,	// (0x000106b2) tabs_4_active_pane_srt

0x6e34,	// (0x000106c4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6e34,	// (0x000106c4) tabs_4_passive_pane_cp2_srt

0x6483,	// (0x0000fd13) aid_size_cell_toolbar

0x8f13,	// (0x000127a3) main_idle_act_pane_ParamLimits

0x663a,	// (0x0000feca) popup_large_graphic_colour_window_ParamLimits

0x6999,	// (0x00010229) popup_toolbar_window_ParamLimits

0x6999,	// (0x00010229) popup_toolbar_window

0xb9a1,	// (0x00015231) list_single_graphic_2heading_pane_ParamLimits

0xb9a1,	// (0x00015231) list_single_graphic_2heading_pane

0x90cf,	// (0x0001295f) aid_size_cell_apps_grid_lsc_pane

0x90e1,	// (0x00012971) aid_size_cell_apps_grid_prt_pane

0x9d65,	// (0x000135f5) bg_wml_button_pane_cp1_ParamLimits

0x9d65,	// (0x000135f5) bg_wml_button_pane_cp1

0xa614,	// (0x00013ea4) form_midp_field_text_pane_t1_ParamLimits

0xa3b7,	// (0x00013c47) input_focus_pane_cp050_ParamLimits

0xa653,	// (0x00013ee3) list_midp_form_text_pane_ParamLimits

0xa5f1,	// (0x00013e81) input_focus_pane_cp051_ParamLimits

0xa605,	// (0x00013e95) list_midp_choice_pane_ParamLimits

0xa470,	// (0x00013d00) list_single_2graphic_pane_cp3_ParamLimits

0xa470,	// (0x00013d00) list_single_2graphic_pane_cp3

0xa49c,	// (0x00013d2c) list_single_midp_graphic_pane_ParamLimits

0xa49c,	// (0x00013d2c) list_single_midp_graphic_pane

0x6a44,	// (0x000102d4) list_single_graphic_2heading_pane_g1_ParamLimits

0x6a44,	// (0x000102d4) list_single_graphic_2heading_pane_g1

0x6a50,	// (0x000102e0) list_single_graphic_2heading_pane_g4_ParamLimits

0x6a50,	// (0x000102e0) list_single_graphic_2heading_pane_g4

0x6a5c,	// (0x000102ec) list_single_graphic_2heading_pane_g5_ParamLimits

0x6a5c,	// (0x000102ec) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x00019041) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x00019041) list_single_graphic_2heading_pane_g

0x6a68,	// (0x000102f8) list_single_graphic_2heading_pane_t1_ParamLimits

0x6a68,	// (0x000102f8) list_single_graphic_2heading_pane_t1

0x6a7c,	// (0x0001030c) list_single_graphic_2heading_pane_t2_ParamLimits

0x6a7c,	// (0x0001030c) list_single_graphic_2heading_pane_t2

0x6a96,	// (0x00010326) list_single_graphic_2heading_pane_t3_ParamLimits

0x6a96,	// (0x00010326) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x00019048) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x00019048) list_single_graphic_2heading_pane_t

0xa1ad,	// (0x00013a3d) bg_popup_sub_pane_cp2

0xa1d7,	// (0x00013a67) grid_toobar_pane

0x6aae,	// (0x0001033e) cell_toolbar_pane_ParamLimits

0x6aae,	// (0x0001033e) cell_toolbar_pane

0xa241,	// (0x00013ad1) cell_toolbar_pane_g1_ParamLimits

0xa241,	// (0x00013ad1) cell_toolbar_pane_g1

0xa255,	// (0x00013ae5) cell_toolbar_pane_g2_ParamLimits

0xa255,	// (0x00013ae5) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x00019056) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x00019056) cell_toolbar_pane_g

0xa277,	// (0x00013b07) grid_highlight_pane_cp2_ParamLimits

0xa277,	// (0x00013b07) grid_highlight_pane_cp2

0xa291,	// (0x00013b21) toolbar_button_pane

0xa29d,	// (0x00013b2d) toolbar_button_pane_g1

0xa2a5,	// (0x00013b35) toolbar_button_pane_g2

0xa2ad,	// (0x00013b3d) toolbar_button_pane_g3

0xa2b5,	// (0x00013b45) toolbar_button_pane_g4

0xa2bd,	// (0x00013b4d) toolbar_button_pane_g5

0xa2c5,	// (0x00013b55) toolbar_button_pane_g6

0xa2cd,	// (0x00013b5d) toolbar_button_pane_g7

0xa2d5,	// (0x00013b65) toolbar_button_pane_g8

0xa2dd,	// (0x00013b6d) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0001905b) toolbar_button_pane_g

0x6ae6,	// (0x00010376) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6ae6,	// (0x00010376) list_single_2graphic_pane_g1_cp3

0x6af2,	// (0x00010382) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6af2,	// (0x00010382) list_single_2graphic_pane_g2_cp3

0x6b03,	// (0x00010393) list_single_2graphic_pane_g3_cp3

0x6b0b,	// (0x0001039b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6b0b,	// (0x0001039b) list_single_2graphic_pane_g4_cp3

0x6b17,	// (0x000103a7) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6b17,	// (0x000103a7) list_single_2graphic_pane_t1_cp3

0x6b31,	// (0x000103c1) list_single_midp_graphic_pane_g2_ParamLimits

0x6b31,	// (0x000103c1) list_single_midp_graphic_pane_g2

0x648b,	// (0x0000fd1b) aid_zoom_text_primary

0x6493,	// (0x0000fd23) aid_zoom_text_secondary

0x9c80,	// (0x00013510) status_small_pane_g7_ParamLimits

0x9c80,	// (0x00013510) status_small_pane_g7

0x9ca3,	// (0x00013533) status_small_pane_t1_ParamLimits

0x7d07,	// (0x00011597) title_pane_g2

0x0003,

0xf554,	// (0x00018de4) title_pane_g

0x8259,	// (0x00011ae9) aid_size_cell_colour_1_pane_ParamLimits

0x8259,	// (0x00011ae9) aid_size_cell_colour_1_pane

0x826d,	// (0x00011afd) aid_size_cell_colour_2_pane_ParamLimits

0x826d,	// (0x00011afd) aid_size_cell_colour_2_pane

0x8281,	// (0x00011b11) aid_size_cell_colour_3_pane_ParamLimits

0x8281,	// (0x00011b11) aid_size_cell_colour_3_pane

0x8295,	// (0x00011b25) aid_size_cell_colour_4_pane_ParamLimits

0x8295,	// (0x00011b25) aid_size_cell_colour_4_pane

0x5ee8,	// (0x0000f778) title_pane_stacon_g1_ParamLimits

0x5ee8,	// (0x0000f778) title_pane_stacon_g1

0xaa42,	// (0x000142d2) popup_note_wait_window_g3_ParamLimits

0xaa42,	// (0x000142d2) popup_note_wait_window_g3

0xaab8,	// (0x00014348) popup_note_wait_window_t5_ParamLimits

0xaab8,	// (0x00014348) popup_note_wait_window_t5

0x7cf0,	// (0x00011580) main_feb_china_hwr_fs_writing_pane

0x6525,	// (0x0000fdb5) popup_feb_china_hwr_fs_window_ParamLimits

0x6525,	// (0x0000fdb5) popup_feb_china_hwr_fs_window

0x6b53,	// (0x000103e3) aid_size_cell_hwr_fs_ParamLimits

0x6b53,	// (0x000103e3) aid_size_cell_hwr_fs

0xa3b7,	// (0x00013c47) bg_popup_sub_pane_cp3_ParamLimits

0xa3b7,	// (0x00013c47) bg_popup_sub_pane_cp3

0x6b68,	// (0x000103f8) grid_hwr_fs_pane_ParamLimits

0x6b68,	// (0x000103f8) grid_hwr_fs_pane

0x6b80,	// (0x00010410) linegrid_hwr_fs_pane_ParamLimits

0x6b80,	// (0x00010410) linegrid_hwr_fs_pane

0x6b90,	// (0x00010420) cell_hwr_fs_pane_ParamLimits

0x6b90,	// (0x00010420) cell_hwr_fs_pane

0xa3c3,	// (0x00013c53) linegrid_hwr_fs_pane_g1_ParamLimits

0xa3c3,	// (0x00013c53) linegrid_hwr_fs_pane_g1

0xa3cf,	// (0x00013c5f) linegrid_hwr_fs_pane_g2_ParamLimits

0xa3cf,	// (0x00013c5f) linegrid_hwr_fs_pane_g2

0xa3e1,	// (0x00013c71) linegrid_hwr_fs_pane_g3_ParamLimits

0xa3e1,	// (0x00013c71) linegrid_hwr_fs_pane_g3

0x6bb2,	// (0x00010442) linegrid_hwr_fs_pane_g4_ParamLimits

0x6bb2,	// (0x00010442) linegrid_hwr_fs_pane_g4

0x6bcc,	// (0x0001045c) linegrid_hwr_fs_pane_g5_ParamLimits

0x6bcc,	// (0x0001045c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x00019086) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x00019086) linegrid_hwr_fs_pane_g

0xa3ed,	// (0x00013c7d) cell_hwr_fs_pane_g1_ParamLimits

0xa3ed,	// (0x00013c7d) cell_hwr_fs_pane_g1

0xa0e6,	// (0x00013976) cell_hwr_fs_pane_g2_ParamLimits

0xa0e6,	// (0x00013976) cell_hwr_fs_pane_g2

0xa403,	// (0x00013c93) cell_hwr_fs_pane_g3_ParamLimits

0xa403,	// (0x00013c93) cell_hwr_fs_pane_g3

0xa410,	// (0x00013ca0) cell_hwr_fs_pane_g4_ParamLimits

0xa410,	// (0x00013ca0) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x00019091) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x00019091) cell_hwr_fs_pane_g

0x6be2,	// (0x00010472) cell_hwr_fs_pane_t1

0x7cf0,	// (0x00011580) grid_highlight_pane_cp6

0x7cf0,	// (0x00011580) main_idle_act2_pane

0x8e87,	// (0x00012717) aid_inside_area_popup_secondary

0xb0e9,	// (0x00014979) aid_inside_area_window_primary_ParamLimits

0xb0e9,	// (0x00014979) aid_inside_area_window_primary

0xbdbc,	// (0x0001564c) ai2_news_ticker_pane

0xbdc4,	// (0x00015654) aid_size_cell_ai1_link_ParamLimits

0xbdc4,	// (0x00015654) aid_size_cell_ai1_link

0xbdde,	// (0x0001566e) popup_ai2_data_window_ParamLimits

0xbdde,	// (0x0001566e) popup_ai2_data_window

0xbdf2,	// (0x00015682) popup_ai2_link_window_ParamLimits

0xbdf2,	// (0x00015682) popup_ai2_link_window

0xa3b7,	// (0x00013c47) bg_popup_sub_pane_cp4_ParamLimits

0xa3b7,	// (0x00013c47) bg_popup_sub_pane_cp4

0xbe06,	// (0x00015696) grid_ai2_link_pane_ParamLimits

0xbe06,	// (0x00015696) grid_ai2_link_pane

0xbe1d,	// (0x000156ad) popup_ai2_link_window_g1_ParamLimits

0xbe1d,	// (0x000156ad) popup_ai2_link_window_g1

0xbe29,	// (0x000156b9) popup_ai2_link_window_g2_ParamLimits

0xbe29,	// (0x000156b9) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x00019264) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x00019264) popup_ai2_link_window_g

0xbe38,	// (0x000156c8) ai2_mp_button_pane

0xbe40,	// (0x000156d0) ai2_mp_volume_pane

0xa5f1,	// (0x00013e81) bg_popup_sub_pane_cp5_ParamLimits

0xa5f1,	// (0x00013e81) bg_popup_sub_pane_cp5

0xbe48,	// (0x000156d8) heading_ai2_gene_pane_ParamLimits

0xbe48,	// (0x000156d8) heading_ai2_gene_pane

0xbe54,	// (0x000156e4) list_ai2_gene_pane_ParamLimits

0xbe54,	// (0x000156e4) list_ai2_gene_pane

0xbe9c,	// (0x0001572c) cell_ai2_link_pane_ParamLimits

0xbe9c,	// (0x0001572c) cell_ai2_link_pane

0xbeb2,	// (0x00015742) cell_ai2_link_pane_g1

0x7cf0,	// (0x00011580) grid_highlight_pane_cp7

0x6eda,	// (0x0001076a) ai2_mp_volume_pane_g1

0xbf83,	// (0x00015813) ai2_mp_volume_pane_g2

0xbef8,	// (0x00015788) list_ai2_gene_pane_t1

0xbf8b,	// (0x0001581b) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0001927d) ai2_mp_volume_pane_g

0x6ee2,	// (0x00010772) volume_small_pane_cp3

0xbf93,	// (0x00015823) aid_size_cell_ai2_button

0xbf9b,	// (0x0001582b) grid_ai2_button_pane

0xbfa4,	// (0x00015834) cell_ai2_button_pane_ParamLimits

0xbfa4,	// (0x00015834) cell_ai2_button_pane

0x7ce6,	// (0x00011576) cell_ai2_button_pane_g1

0x7cf0,	// (0x00011580) grid_highlight_pane_cp8

0xbf43,	// (0x000157d3) ai2_gene_pane_t1_ParamLimits

0xbf43,	// (0x000157d3) ai2_gene_pane_t1

0x6479,	// (0x0000fd09) aid_height_parent_landscape

0xb78e,	// (0x0001501e) aid_height_set_list

0xb79f,	// (0x0001502f) aid_size_parent

0xbb9d,	// (0x0001542d) aid_size_cell_graphic_pane_ParamLimits

0xbe64,	// (0x000156f4) popup_ai2_data_window_g1_ParamLimits

0xbe64,	// (0x000156f4) popup_ai2_data_window_g1

0xbe70,	// (0x00015700) ai2_news_ticker_pane_g1

0xbe78,	// (0x00015708) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x00019269) ai2_news_ticker_pane_g

0xbe80,	// (0x00015710) ai2_news_ticker_pane_t1

0xbe8e,	// (0x0001571e) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0001926e) ai2_news_ticker_pane_t

0xbebb,	// (0x0001574b) heading_ai2_gene_pane_g1

0xbec3,	// (0x00015753) heading_ai2_gene_pane_t1_ParamLimits

0xbec3,	// (0x00015753) heading_ai2_gene_pane_t1

0xbed8,	// (0x00015768) list_highlight_pane_cp6

0xbee0,	// (0x00015770) ai2_gene_pane_ParamLimits

0xbee0,	// (0x00015770) ai2_gene_pane

0xbf06,	// (0x00015796) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x00019273) list_ai2_gene_pane_t

0xbf14,	// (0x000157a4) list_highlight_pane_cp8_ParamLimits

0xbf14,	// (0x000157a4) list_highlight_pane_cp8

0xbf25,	// (0x000157b5) ai2_gene_pane_g1_ParamLimits

0xbf25,	// (0x000157b5) ai2_gene_pane_g1

0xbf37,	// (0x000157c7) ai2_gene_pane_g2_ParamLimits

0xbf37,	// (0x000157c7) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x00019278) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x00019278) ai2_gene_pane_g

0x85d3,	// (0x00011e63) scroll_pane_cp12

0x6438,	// (0x0000fcc8) control_pane_t3_ParamLimits

0x6438,	// (0x0000fcc8) control_pane_t3

0x9c94,	// (0x00013524) status_small_pane_g8_ParamLimits

0x9c94,	// (0x00013524) status_small_pane_g8

0x6607,	// (0x0000fe97) popup_find_window_ParamLimits

0x681a,	// (0x000100aa) popup_note_image_window_ParamLimits

0xa213,	// (0x00013aa3) list_double2_graphic_pane_vc_g1_ParamLimits

0xa213,	// (0x00013aa3) list_double2_graphic_pane_vc_g1

0x98f4,	// (0x00013184) list_double2_graphic_pane_vc_g2_ParamLimits

0x98f4,	// (0x00013184) list_double2_graphic_pane_vc_g2

0xa21f,	// (0x00013aaf) list_double2_graphic_pane_vc_g3_ParamLimits

0xa21f,	// (0x00013aaf) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0001904f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001904f) list_double2_graphic_pane_vc_g

0xa22b,	// (0x00013abb) list_double2_graphic_pane_vc_t1_ParamLimits

0xa22b,	// (0x00013abb) list_double2_graphic_pane_vc_t1

0x98f4,	// (0x00013184) list_single_heading_pane_vc_g1_ParamLimits

0x98f4,	// (0x00013184) list_single_heading_pane_vc_g1

0xa21f,	// (0x00013aaf) list_single_heading_pane_vc_g2_ParamLimits

0xa21f,	// (0x00013aaf) list_single_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x00019070) list_single_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x00019070) list_single_heading_pane_vc_g

0xa2e5,	// (0x00013b75) list_single_heading_pane_vc_t1_ParamLimits

0xa2e5,	// (0x00013b75) list_single_heading_pane_vc_t1

0xa2fb,	// (0x00013b8b) list_single_heading_pane_vc_t2_ParamLimits

0xa2fb,	// (0x00013b8b) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x00019075) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x00019075) list_single_heading_pane_vc_t

0xa30f,	// (0x00013b9f) list_setting_number_pane_vc_g1_ParamLimits

0xa30f,	// (0x00013b9f) list_setting_number_pane_vc_g1

0xa31b,	// (0x00013bab) list_setting_number_pane_vc_g2_ParamLimits

0xa31b,	// (0x00013bab) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0001907a) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0001907a) list_setting_number_pane_vc_g

0xa327,	// (0x00013bb7) list_setting_number_pane_vc_t1_ParamLimits

0xa327,	// (0x00013bb7) list_setting_number_pane_vc_t1

0xa33b,	// (0x00013bcb) list_setting_number_pane_vc_t2_ParamLimits

0xa33b,	// (0x00013bcb) list_setting_number_pane_vc_t2

0xa355,	// (0x00013be5) list_setting_number_pane_vc_t3_ParamLimits

0xa355,	// (0x00013be5) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0001907f) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0001907f) list_setting_number_pane_vc_t

0xa37b,	// (0x00013c0b) set_value_pane_vc_ParamLimits

0xa37b,	// (0x00013c0b) set_value_pane_vc

0xb9a1,	// (0x00015231) list_double2_graphic_pane_vc_ParamLimits

0xb9a1,	// (0x00015231) list_double2_graphic_pane_vc

0xb9b5,	// (0x00015245) list_double2_large_graphic_pane_vc_ParamLimits

0xb9b5,	// (0x00015245) list_double2_large_graphic_pane_vc

0xb9a1,	// (0x00015231) list_double2_pane_vc_ParamLimits

0xb9a1,	// (0x00015231) list_double2_pane_vc

0xb9a1,	// (0x00015231) list_double_graphic_heading_pane_vc_ParamLimits

0xb9a1,	// (0x00015231) list_double_graphic_heading_pane_vc

0xb9a1,	// (0x00015231) list_double_graphic_pane_vc_ParamLimits

0xb9a1,	// (0x00015231) list_double_graphic_pane_vc

0xb9a1,	// (0x00015231) list_double_heading_pane_vc_ParamLimits

0xb9a1,	// (0x00015231) list_double_heading_pane_vc

0xb9b5,	// (0x00015245) list_double_large_graphic_pane_vc_ParamLimits

0xb9b5,	// (0x00015245) list_double_large_graphic_pane_vc

0xb9a1,	// (0x00015231) list_double_number_pane_vc_ParamLimits

0xb9a1,	// (0x00015231) list_double_number_pane_vc

0xb9a1,	// (0x00015231) list_double_pane_vc_ParamLimits

0xb9a1,	// (0x00015231) list_double_pane_vc

0xb9a1,	// (0x00015231) list_double_time_pane_vc_ParamLimits

0xb9a1,	// (0x00015231) list_double_time_pane_vc

0xb9a1,	// (0x00015231) list_setting_number_pane_vc_ParamLimits

0xb9a1,	// (0x00015231) list_setting_number_pane_vc

0xb9a1,	// (0x00015231) list_setting_pane_vc_ParamLimits

0xb9a1,	// (0x00015231) list_setting_pane_vc

0xb9a1,	// (0x00015231) list_single_graphic_heading_pane_vc_ParamLimits

0xb9a1,	// (0x00015231) list_single_graphic_heading_pane_vc

0xb9a1,	// (0x00015231) list_single_heading_pane_vc_ParamLimits

0xb9a1,	// (0x00015231) list_single_heading_pane_vc

0xb9c8,	// (0x00015258) list_single_number_heading_pane_vc_ParamLimits

0xb9c8,	// (0x00015258) list_single_number_heading_pane_vc

0xbfd8,	// (0x00015868) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xbfd8,	// (0x00015868) list_double_graphic_heading_pane_vc_g1

0x9958,	// (0x000131e8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9958,	// (0x000131e8) list_double_graphic_heading_pane_vc_g2

0xbfe4,	// (0x00015874) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xbfe4,	// (0x00015874) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x00019284) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x00019284) list_double_graphic_heading_pane_vc_g

0xbff0,	// (0x00015880) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xbff0,	// (0x00015880) list_double_graphic_heading_pane_vc_t1

0xa2e5,	// (0x00013b75) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xa2e5,	// (0x00013b75) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x0001928b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x0001928b) list_double_graphic_heading_pane_vc_t

0xa30f,	// (0x00013b9f) list_setting_pane_vc_g1_ParamLimits

0xa30f,	// (0x00013b9f) list_setting_pane_vc_g1

0xa31b,	// (0x00013bab) list_setting_pane_vc_g2_ParamLimits

0xa31b,	// (0x00013bab) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0001907a) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0001907a) list_setting_pane_vc_g

0xc1fc,	// (0x00015a8c) list_setting_pane_vc_t1_ParamLimits

0xc1fc,	// (0x00015a8c) list_setting_pane_vc_t1

0xc216,	// (0x00015aa6) list_setting_pane_vc_t2_ParamLimits

0xc216,	// (0x00015aa6) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x000192ce) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x000192ce) list_setting_pane_vc_t

0xa37b,	// (0x00013c0b) set_value_pane_cp_vc_ParamLimits

0xa37b,	// (0x00013c0b) set_value_pane_cp_vc

0x98f4,	// (0x00013184) list_single_number_heading_pane_vc_g1_ParamLimits

0x98f4,	// (0x00013184) list_single_number_heading_pane_vc_g1

0xa21f,	// (0x00013aaf) list_single_number_heading_pane_vc_g2_ParamLimits

0xa21f,	// (0x00013aaf) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x00019070) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x00019070) list_single_number_heading_pane_vc_g

0xa2e5,	// (0x00013b75) list_single_number_heading_pane_vc_t1_ParamLimits

0xa2e5,	// (0x00013b75) list_single_number_heading_pane_vc_t1

0xc22c,	// (0x00015abc) list_single_number_heading_pane_vc_t2_ParamLimits

0xc22c,	// (0x00015abc) list_single_number_heading_pane_vc_t2

0xc240,	// (0x00015ad0) list_single_number_heading_pane_vc_t3_ParamLimits

0xc240,	// (0x00015ad0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x000192d3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x000192d3) list_single_number_heading_pane_vc_t

0xa213,	// (0x00013aa3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xa213,	// (0x00013aa3) list_single_graphic_heading_pane_vc_g1

0x98f4,	// (0x00013184) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x98f4,	// (0x00013184) list_single_graphic_heading_pane_vc_g4

0xa21f,	// (0x00013aaf) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xa21f,	// (0x00013aaf) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0001904f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001904f) list_single_graphic_heading_pane_vc_g

0xa2e5,	// (0x00013b75) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xa2e5,	// (0x00013b75) list_single_graphic_heading_pane_vc_t1

0xc252,	// (0x00015ae2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc252,	// (0x00015ae2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x000192da) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x000192da) list_single_graphic_heading_pane_vc_t

0x98f4,	// (0x00013184) list_double2_pane_vc_g1_ParamLimits

0x98f4,	// (0x00013184) list_double2_pane_vc_g1

0xa21f,	// (0x00013aaf) list_double2_pane_vc_g2_ParamLimits

0xa21f,	// (0x00013aaf) list_double2_pane_vc_g2

0x0001,

0xf7e0,	// (0x00019070) list_double2_pane_vc_g_ParamLimits

0xf7e0,	// (0x00019070) list_double2_pane_vc_g

0xc266,	// (0x00015af6) list_double2_pane_vc_t1_ParamLimits

0xc266,	// (0x00015af6) list_double2_pane_vc_t1

0xc27c,	// (0x00015b0c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc27c,	// (0x00015b0c) list_double2_large_graphic_pane_vc_g1

0x86a5,	// (0x00011f35) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x86a5,	// (0x00011f35) list_double2_large_graphic_pane_vc_g2

0x86b1,	// (0x00011f41) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x86b1,	// (0x00011f41) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4f,	// (0x000192df) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x000192df) list_double2_large_graphic_pane_vc_g

0xc288,	// (0x00015b18) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc288,	// (0x00015b18) list_double2_large_graphic_pane_vc_t1

0xc29e,	// (0x00015b2e) list_double_time_pane_vc_g1_ParamLimits

0xc29e,	// (0x00015b2e) list_double_time_pane_vc_g1

0xc2aa,	// (0x00015b3a) list_double_time_pane_vc_g2_ParamLimits

0xc2aa,	// (0x00015b3a) list_double_time_pane_vc_g2

0x0001,

0xfa56,	// (0x000192e6) list_double_time_pane_vc_g_ParamLimits

0xfa56,	// (0x000192e6) list_double_time_pane_vc_g

0xc2b6,	// (0x00015b46) list_double_time_pane_vc_t1_ParamLimits

0xc2b6,	// (0x00015b46) list_double_time_pane_vc_t1

0xc2d4,	// (0x00015b64) list_double_time_pane_vc_t2_ParamLimits

0xc2d4,	// (0x00015b64) list_double_time_pane_vc_t2

0xc2fe,	// (0x00015b8e) list_double_time_pane_vc_t3_ParamLimits

0xc2fe,	// (0x00015b8e) list_double_time_pane_vc_t3

0xc310,	// (0x00015ba0) list_double_time_pane_vc_t4_ParamLimits

0xc310,	// (0x00015ba0) list_double_time_pane_vc_t4

0x0003,

0xfa5b,	// (0x000192eb) list_double_time_pane_vc_t_ParamLimits

0xfa5b,	// (0x000192eb) list_double_time_pane_vc_t

0x98f4,	// (0x00013184) list_double_pane_vc_g1_ParamLimits

0x98f4,	// (0x00013184) list_double_pane_vc_g1

0xa21f,	// (0x00013aaf) list_double_pane_vc_g2_ParamLimits

0xa21f,	// (0x00013aaf) list_double_pane_vc_g2

0x0001,

0xf7e0,	// (0x00019070) list_double_pane_vc_g_ParamLimits

0xf7e0,	// (0x00019070) list_double_pane_vc_g

0xc324,	// (0x00015bb4) list_double_pane_vc_t1_ParamLimits

0xc324,	// (0x00015bb4) list_double_pane_vc_t1

0xc336,	// (0x00015bc6) list_double_pane_vc_t2_ParamLimits

0xc336,	// (0x00015bc6) list_double_pane_vc_t2

0x0001,

0xfa64,	// (0x000192f4) list_double_pane_vc_t_ParamLimits

0xfa64,	// (0x000192f4) list_double_pane_vc_t

0x98f4,	// (0x00013184) list_double_number_pane_vc_g1_ParamLimits

0x98f4,	// (0x00013184) list_double_number_pane_vc_g1

0xa21f,	// (0x00013aaf) list_double_number_pane_vc_g2_ParamLimits

0xa21f,	// (0x00013aaf) list_double_number_pane_vc_g2

0x0001,

0xf7e0,	// (0x00019070) list_double_number_pane_vc_g_ParamLimits

0xf7e0,	// (0x00019070) list_double_number_pane_vc_g

0xc34e,	// (0x00015bde) list_double_number_pane_vc_t1_ParamLimits

0xc34e,	// (0x00015bde) list_double_number_pane_vc_t1

0xc362,	// (0x00015bf2) list_double_number_pane_vc_t2_ParamLimits

0xc362,	// (0x00015bf2) list_double_number_pane_vc_t2

0xc336,	// (0x00015bc6) list_double_number_pane_vc_t3_ParamLimits

0xc336,	// (0x00015bc6) list_double_number_pane_vc_t3

0x0002,

0xfa69,	// (0x000192f9) list_double_number_pane_vc_t_ParamLimits

0xfa69,	// (0x000192f9) list_double_number_pane_vc_t

0xc374,	// (0x00015c04) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc374,	// (0x00015c04) list_double_large_graphic_pane_vc_g1

0xc385,	// (0x00015c15) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc385,	// (0x00015c15) list_double_large_graphic_pane_vc_g2

0x86b1,	// (0x00011f41) list_double_large_graphic_pane_vc_g3_ParamLimits

0x86b1,	// (0x00011f41) list_double_large_graphic_pane_vc_g3

0xc394,	// (0x00015c24) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc394,	// (0x00015c24) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa70,	// (0x00019300) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa70,	// (0x00019300) list_double_large_graphic_pane_vc_g

0xc3a0,	// (0x00015c30) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc3a0,	// (0x00015c30) list_double_large_graphic_pane_vc_t1

0xc3b7,	// (0x00015c47) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc3b7,	// (0x00015c47) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa79,	// (0x00019309) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa79,	// (0x00019309) list_double_large_graphic_pane_vc_t

0x9958,	// (0x000131e8) list_double_heading_pane_vc_g1_ParamLimits

0x9958,	// (0x000131e8) list_double_heading_pane_vc_g1

0xbfe4,	// (0x00015874) list_double_heading_pane_vc_g2_ParamLimits

0xbfe4,	// (0x00015874) list_double_heading_pane_vc_g2

0x0001,

0xfa7e,	// (0x0001930e) list_double_heading_pane_vc_g_ParamLimits

0xfa7e,	// (0x0001930e) list_double_heading_pane_vc_g

0xc3d0,	// (0x00015c60) list_double_heading_pane_vc_t1_ParamLimits

0xc3d0,	// (0x00015c60) list_double_heading_pane_vc_t1

0xa2e5,	// (0x00013b75) list_double_heading_pane_vc_t2_ParamLimits

0xa2e5,	// (0x00013b75) list_double_heading_pane_vc_t2

0x0001,

0xfa83,	// (0x00019313) list_double_heading_pane_vc_t_ParamLimits

0xfa83,	// (0x00019313) list_double_heading_pane_vc_t

0xa213,	// (0x00013aa3) list_double_graphic_pane_vc_g1_ParamLimits

0xa213,	// (0x00013aa3) list_double_graphic_pane_vc_g1

0xb1cf,	// (0x00014a5f) list_double_graphic_pane_vc_g2_ParamLimits

0xb1cf,	// (0x00014a5f) list_double_graphic_pane_vc_g2

0xc3e4,	// (0x00015c74) list_double_graphic_pane_vc_g3_ParamLimits

0xc3e4,	// (0x00015c74) list_double_graphic_pane_vc_g3

0x0002,

0xfa88,	// (0x00019318) list_double_graphic_pane_vc_g_ParamLimits

0xfa88,	// (0x00019318) list_double_graphic_pane_vc_g

0xc3f0,	// (0x00015c80) list_double_graphic_pane_vc_t1_ParamLimits

0xc3f0,	// (0x00015c80) list_double_graphic_pane_vc_t1

0xc336,	// (0x00015bc6) list_double_graphic_pane_vc_t2_ParamLimits

0xc336,	// (0x00015bc6) list_double_graphic_pane_vc_t2

0x0001,

0xfa8f,	// (0x0001931f) list_double_graphic_pane_vc_t_ParamLimits

0xfa8f,	// (0x0001931f) list_double_graphic_pane_vc_t

0x5a5c,	// (0x0000f2ec) aid_size_cell_fastswap

0x5a64,	// (0x0000f2f4) aid_size_cell_touch_ParamLimits

0x5a64,	// (0x0000f2f4) aid_size_cell_touch

0x5cc9,	// (0x0000f559) popup_fast_swap_wide_window_ParamLimits

0x5cc9,	// (0x0000f559) popup_fast_swap_wide_window

0x5dbf,	// (0x0000f64f) touch_pane_ParamLimits

0x5dbf,	// (0x0000f64f) touch_pane

0x8ad1,	// (0x00012361) button_value_adjust_pane_cp2

0x8ad1,	// (0x00012361) button_value_adjust_pane_cp4

0x8af1,	// (0x00012381) form_field_data_pane_cp2

0x8b10,	// (0x000123a0) form_field_data_wide_pane_cp2

0x919e,	// (0x00012a2e) bg_scroll_pane_ParamLimits

0x604b,	// (0x0000f8db) scroll_handle_pane_ParamLimits

0x605f,	// (0x0000f8ef) scroll_sc2_down_pane_ParamLimits

0x605f,	// (0x0000f8ef) scroll_sc2_down_pane

0x91cf,	// (0x00012a5f) scroll_sc2_up_pane_ParamLimits

0x91cf,	// (0x00012a5f) scroll_sc2_up_pane

0xc8ab,	// (0x0001613b) grid_wheel_folder_pane_g1_ParamLimits

0xc8ab,	// (0x0001613b) grid_wheel_folder_pane_g1

0x6224,	// (0x0000fab4) clock_nsta_pane_cp2_ParamLimits

0x6224,	// (0x0000fab4) clock_nsta_pane_cp2

0x8f13,	// (0x000127a3) listscroll_midp_pane_ParamLimits

0x9a29,	// (0x000132b9) midp_canvas_pane

0x9d0f,	// (0x0001359f) nsta_clock_indic_pane

0x9d4b,	// (0x000135db) listscroll_form_pane_vc

0x9d53,	// (0x000135e3) listscroll_set_pane_vc_ParamLimits

0x9d53,	// (0x000135e3) listscroll_set_pane_vc

0x9e60,	// (0x000136f0) clock_nsta_pane

0x9ed5,	// (0x00013765) indicator_nsta_pane

0xa1ad,	// (0x00013a3d) bg_popup_sub_pane_cp2_ParamLimits

0xa1c1,	// (0x00013a51) find_pane_cp2_ParamLimits

0xa1c1,	// (0x00013a51) find_pane_cp2

0xa1d7,	// (0x00013a67) grid_toobar_pane_ParamLimits

0xa38b,	// (0x00013c1b) list_form_gen_pane_vc_ParamLimits

0xa38b,	// (0x00013c1b) list_form_gen_pane_vc

0xa3a1,	// (0x00013c31) scroll_pane_cp8_vc_ParamLimits

0xa3a1,	// (0x00013c31) scroll_pane_cp8_vc

0xa41d,	// (0x00013cad) data_form_wide_pane_vc_ParamLimits

0xa41d,	// (0x00013cad) data_form_wide_pane_vc

0xa429,	// (0x00013cb9) form_field_data_wide_pane_vc_g1

0xa431,	// (0x00013cc1) form_field_data_wide_pane_vc_t1_ParamLimits

0xa431,	// (0x00013cc1) form_field_data_wide_pane_vc_t1

0x8ba9,	// (0x00012439) input_focus_pane_cp6_vc_ParamLimits

0x8ba9,	// (0x00012439) input_focus_pane_cp6_vc

0xa7c2,	// (0x00014052) list_midp_pane_ParamLimits

0xa7ce,	// (0x0001405e) scroll_pane_cp16_ParamLimits

0xa7ce,	// (0x0001405e) scroll_pane_cp16

0xa81c,	// (0x000140ac) button_value_adjust_pane_ParamLimits

0xa81c,	// (0x000140ac) button_value_adjust_pane

0xb7b1,	// (0x00015041) button_value_adjust_pane_cp6_ParamLimits

0xb7b1,	// (0x00015041) button_value_adjust_pane_cp6

0xb8d3,	// (0x00015163) settings_code_pane_cp_ParamLimits

0xb8d3,	// (0x00015163) settings_code_pane_cp

0x7ce6,	// (0x00011576) cell_touch_pane_g1

0x7ce6,	// (0x00011576) cell_touch_pane_g2

0x0001,

0xf704,	// (0x00018f94) cell_touch_pane_g

0xbfb6,	// (0x00015846) cell_touch_pane_cp_ParamLimits

0xbfb6,	// (0x00015846) cell_touch_pane_cp

0xbfc6,	// (0x00015856) cell_touch_pane_ParamLimits

0xbfc6,	// (0x00015856) cell_touch_pane

0x7ce6,	// (0x00011576) scroll_sc2_down_pane_g1

0x7ce6,	// (0x00011576) scroll_sc2_up_pane_g1

0x7cf0,	// (0x00011580) bg_set_opt_pane_cp4_vc

0xc004,	// (0x00015894) list_set_graphic_pane_vc_g1_ParamLimits

0xc004,	// (0x00015894) list_set_graphic_pane_vc_g1

0xc010,	// (0x000158a0) list_set_graphic_pane_vc_g2_ParamLimits

0xc010,	// (0x000158a0) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x00019290) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x00019290) list_set_graphic_pane_vc_g

0xc01c,	// (0x000158ac) text_primary_small_cp13_vc_ParamLimits

0xc01c,	// (0x000158ac) text_primary_small_cp13_vc

0xc034,	// (0x000158c4) list_set_graphic_pane_vc_ParamLimits

0xc034,	// (0x000158c4) list_set_graphic_pane_vc

0x7cf0,	// (0x00011580) input_focus_pane_cp2_vc

0x7ce6,	// (0x00011576) setting_code_pane_vc_g1

0x7e1b,	// (0x000116ab) setting_code_pane_vc_t1

0xc048,	// (0x000158d8) set_text_pane_vc_t1_ParamLimits

0xc048,	// (0x000158d8) set_text_pane_vc_t1

0x7cf0,	// (0x00011580) input_focus_pane_cp1_vc

0xc067,	// (0x000158f7) list_set_text_pane_vc

0x7ce6,	// (0x00011576) setting_text_pane_vc_g1

0x7cf0,	// (0x00011580) bg_set_opt_pane_cp2_vc

0x7e12,	// (0x000116a2) setting_slider_graphic_pane_vc_g1

0xc071,	// (0x00015901) setting_slider_graphic_pane_vc_t1

0xc080,	// (0x00015910) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x00019295) setting_slider_graphic_pane_vc_t

0xc08f,	// (0x0001591f) slider_set_pane_cp_vc

0xc097,	// (0x00015927) slider_set_pane_vc_g1

0xc0a0,	// (0x00015930) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x0001929a) slider_set_pane_vc_g

0x8ce5,	// (0x00012575) set_opt_bg_pane_g1_copy1

0x8ced,	// (0x0001257d) set_opt_bg_pane_g2_copy1

0xc0cc,	// (0x0001595c) set_opt_bg_pane_g3_copy1

0x8cfd,	// (0x0001258d) set_opt_bg_pane_g4_copy1

0x8d05,	// (0x00012595) set_opt_bg_pane_g5_copy1

0x8d0d,	// (0x0001259d) set_opt_bg_pane_g6_copy1

0xc0d4,	// (0x00015964) set_opt_bg_pane_g7_copy1

0xc0de,	// (0x0001596e) set_opt_bg_pane_g8_copy1

0xc0e6,	// (0x00015976) set_opt_bg_pane_g9_copy1

0x7cf0,	// (0x00011580) bg_set_opt_pane_cp_vc

0xc0ee,	// (0x0001597e) setting_slider_pane_vc_t1

0xc0fd,	// (0x0001598d) setting_slider_pane_vc_t2

0xc10c,	// (0x0001599c) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x000192a9) setting_slider_pane_vc_t

0xc11b,	// (0x000159ab) slider_set_pane_vc

0x6bf0,	// (0x00010480) volume_set_pane_vc_g1

0x6eeb,	// (0x0001077b) volume_set_pane_vc_g2

0x6ef4,	// (0x00010784) volume_set_pane_vc_g3

0x6efd,	// (0x0001078d) volume_set_pane_vc_g4

0x6f06,	// (0x00010796) volume_set_pane_vc_g5

0x6f0f,	// (0x0001079f) volume_set_pane_vc_g6

0x6f18,	// (0x000107a8) volume_set_pane_vc_g7

0x6f21,	// (0x000107b1) volume_set_pane_vc_g8

0x6f2a,	// (0x000107ba) volume_set_pane_vc_g9

0x6f33,	// (0x000107c3) volume_set_pane_vc_g10

0x0009,

0xfa20,	// (0x000192b0) volume_set_pane_vc_g

0xc123,	// (0x000159b3) volume_set_pane_vc

0xc12d,	// (0x000159bd) button_value_adjust_pane_cp1_vc

0xc137,	// (0x000159c7) list_highlight_pane_cp2_vc

0xc140,	// (0x000159d0) list_set_pane_vc_ParamLimits

0xc140,	// (0x000159d0) list_set_pane_vc

0xc192,	// (0x00015a22) main_pane_set_vc_t1_ParamLimits

0xc192,	// (0x00015a22) main_pane_set_vc_t1

0xc1a7,	// (0x00015a37) main_pane_set_vc_t2_ParamLimits

0xc1a7,	// (0x00015a37) main_pane_set_vc_t2

0xc1b9,	// (0x00015a49) main_pane_set_vc_t3_ParamLimits

0xc1b9,	// (0x00015a49) main_pane_set_vc_t3

0xc1cb,	// (0x00015a5b) main_pane_set_vc_t4_ParamLimits

0xc1cb,	// (0x00015a5b) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x000192c5) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x000192c5) main_pane_set_vc_t

0xc1dd,	// (0x00015a6d) setting_code_pane_vc_ParamLimits

0xc1dd,	// (0x00015a6d) setting_code_pane_vc

0xc1ec,	// (0x00015a7c) setting_slider_graphic_pane_vc

0xc1ec,	// (0x00015a7c) setting_slider_pane_vc

0xc1ec,	// (0x00015a7c) setting_text_pane_vc

0xc1ec,	// (0x00015a7c) setting_volume_pane_vc

0xc1f4,	// (0x00015a84) scroll_pane_cp121_vc

0x8abf,	// (0x0001234f) set_content_pane_vc

0xc402,	// (0x00015c92) button_value_adjust_pane_g1

0xc40b,	// (0x00015c9b) button_value_adjust_pane_g2

0x0001,

0xfa94,	// (0x00019324) button_value_adjust_pane_g

0xc414,	// (0x00015ca4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xc414,	// (0x00015ca4) form_field_slider_wide_pane_vc_t1

0xc428,	// (0x00015cb8) form_field_slider_wide_pane_vc_t2_ParamLimits

0xc428,	// (0x00015cb8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa99,	// (0x00019329) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x00019329) form_field_slider_wide_pane_vc_t

0x8065,	// (0x000118f5) input_focus_pane_cp10_vc_ParamLimits

0x8065,	// (0x000118f5) input_focus_pane_cp10_vc

0xc454,	// (0x00015ce4) slider_cont_pane_cp1_vc_ParamLimits

0xc454,	// (0x00015ce4) slider_cont_pane_cp1_vc

0xc464,	// (0x00015cf4) slider_form_pane_g1_cp2

0xc0a0,	// (0x00015930) slider_form_pane_g2_cp2

0xc491,	// (0x00015d21) form_field_slider_pane_vc_t3

0xc49f,	// (0x00015d2f) form_field_slider_pane_vc_t4

0xc4ad,	// (0x00015d3d) slider_form_pane_vc_ParamLimits

0xc4ad,	// (0x00015d3d) slider_form_pane_vc

0xc4ba,	// (0x00015d4a) form_field_slider_pane_vc_t1_ParamLimits

0xc4ba,	// (0x00015d4a) form_field_slider_pane_vc_t1

0xc428,	// (0x00015cb8) form_field_slider_pane_vc_t2_ParamLimits

0xc428,	// (0x00015cb8) form_field_slider_pane_vc_t2

0x0001,

0xfaab,	// (0x0001933b) form_field_slider_pane_vc_t_ParamLimits

0xfaab,	// (0x0001933b) form_field_slider_pane_vc_t

0x8065,	// (0x000118f5) input_focus_pane_cp9_vc_ParamLimits

0x8065,	// (0x000118f5) input_focus_pane_cp9_vc

0xc4d6,	// (0x00015d66) slider_cont_pane_vc_ParamLimits

0xc4d6,	// (0x00015d66) slider_cont_pane_vc

0xc4e8,	// (0x00015d78) list_form_graphic_pane_cp_vc_ParamLimits

0xc4e8,	// (0x00015d78) list_form_graphic_pane_cp_vc

0xa429,	// (0x00013cb9) form_field_popup_wide_pane_vc_g1

0xc4fd,	// (0x00015d8d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xc4fd,	// (0x00015d8d) form_field_popup_wide_pane_vc_t1

0x8ba9,	// (0x00012439) input_focus_pane_cp8_vc_ParamLimits

0x8ba9,	// (0x00012439) input_focus_pane_cp8_vc

0xc542,	// (0x00015dd2) list_form_wide_pane_vc_ParamLimits

0xc542,	// (0x00015dd2) list_form_wide_pane_vc

0xc54e,	// (0x00015dde) list_form_graphic_pane_vc_g1

0xc556,	// (0x00015de6) list_form_graphic_pane_vc_t1_ParamLimits

0xc556,	// (0x00015de6) list_form_graphic_pane_vc_t1

0x7dd0,	// (0x00011660) list_highlight_pane_cp5_vc_ParamLimits

0x7dd0,	// (0x00011660) list_highlight_pane_cp5_vc

0xc572,	// (0x00015e02) list_form_graphic_pane_vc_ParamLimits

0xc572,	// (0x00015e02) list_form_graphic_pane_vc

0xa429,	// (0x00013cb9) form_field_popup_pane_vc_g1

0xc588,	// (0x00015e18) form_field_popup_pane_vc_t1_ParamLimits

0xc588,	// (0x00015e18) form_field_popup_pane_vc_t1

0x8ba9,	// (0x00012439) input_focus_pane_cp7_vc_ParamLimits

0x8ba9,	// (0x00012439) input_focus_pane_cp7_vc

0xc59f,	// (0x00015e2f) list_form_pane_vc_ParamLimits

0xc59f,	// (0x00015e2f) list_form_pane_vc

0xc5ab,	// (0x00015e3b) data_form_pane_vc_t1_ParamLimits

0xc5ab,	// (0x00015e3b) data_form_pane_vc_t1

0x8ce5,	// (0x00012575) input_focus_pane_vc_g1

0x8ced,	// (0x0001257d) input_focus_pane_vc_g2

0x8cf5,	// (0x00012585) input_focus_pane_vc_g3

0x8cfd,	// (0x0001258d) input_focus_pane_vc_g4

0x8d05,	// (0x00012595) input_focus_pane_vc_g5

0x8d0d,	// (0x0001259d) input_focus_pane_vc_g6

0x8d15,	// (0x000125a5) input_focus_pane_vc_g7

0x8d1d,	// (0x000125ad) input_focus_pane_vc_g8

0x8d25,	// (0x000125b5) input_focus_pane_vc_g9

0x7ce6,	// (0x00011576) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x00018f1d) input_focus_pane_vc_g

0xa41d,	// (0x00013cad) data_form_pane_vc_ParamLimits

0xa41d,	// (0x00013cad) data_form_pane_vc

0xa429,	// (0x00013cb9) form_field_data_pane_vc_g1

0xc5c6,	// (0x00015e56) form_field_data_pane_vc_t1_ParamLimits

0xc5c6,	// (0x00015e56) form_field_data_pane_vc_t1

0x8ba9,	// (0x00012439) input_focus_pane_vc_ParamLimits

0x8ba9,	// (0x00012439) input_focus_pane_vc

0xc5e0,	// (0x00015e70) button_value_adjust_pane_cp3_vc

0xc5e8,	// (0x00015e78) button_value_adjust_pane_cp5_vc

0xc5f0,	// (0x00015e80) form_field_data_pane_vc_ParamLimits

0xc5f0,	// (0x00015e80) form_field_data_pane_vc

0xc607,	// (0x00015e97) form_field_data_pane_vc_cp2

0xc60f,	// (0x00015e9f) form_field_data_wide_pane_vc_ParamLimits

0xc60f,	// (0x00015e9f) form_field_data_wide_pane_vc

0xc625,	// (0x00015eb5) form_field_data_wide_pane_vc_cp2

0xc62d,	// (0x00015ebd) form_field_popup_pane_vc_ParamLimits

0xc62d,	// (0x00015ebd) form_field_popup_pane_vc

0xc644,	// (0x00015ed4) form_field_popup_wide_pane_vc_ParamLimits

0xc644,	// (0x00015ed4) form_field_popup_wide_pane_vc

0xc65a,	// (0x00015eea) form_field_slider_pane_vc_ParamLimits

0xc65a,	// (0x00015eea) form_field_slider_pane_vc

0xc66d,	// (0x00015efd) form_field_slider_wide_pane_vc_ParamLimits

0xc66d,	// (0x00015efd) form_field_slider_wide_pane_vc

0xc680,	// (0x00015f10) grid_touch_1_pane_ParamLimits

0xc680,	// (0x00015f10) grid_touch_1_pane

0xc68c,	// (0x00015f1c) grid_touch_2_pane_ParamLimits

0xc68c,	// (0x00015f1c) grid_touch_2_pane

0x9cda,	// (0x0001356a) touch_pane_g1_ParamLimits

0x9cda,	// (0x0001356a) touch_pane_g1

0xc6a4,	// (0x00015f34) cell_app_pane_cp_wide_ParamLimits

0xc6a4,	// (0x00015f34) cell_app_pane_cp_wide

0xc6b5,	// (0x00015f45) grid_popup_fast_wide_pane_ParamLimits

0xc6b5,	// (0x00015f45) grid_popup_fast_wide_pane

0xc6c9,	// (0x00015f59) scroll_pane_cp19_ParamLimits

0xc6c9,	// (0x00015f59) scroll_pane_cp19

0x7cf0,	// (0x00011580) bg_popup_window_pane_cp20

0xc6dd,	// (0x00015f6d) listscroll_popup_fast_wide_pane

0x7dd0,	// (0x00011660) grid_indicator_nsta_pane

0xc6e5,	// (0x00015f75) clock_nsta_pane_g1

0xc6ee,	// (0x00015f7e) clock_nsta_pane_t1

0xc70a,	// (0x00015f9a) cell_indicator_nsta_pane_ParamLimits

0xc70a,	// (0x00015f9a) cell_indicator_nsta_pane

0xc742,	// (0x00015fd2) cell_indicator_nsta_pane_g1

0xc750,	// (0x00015fe0) cell_indicator_nsta_pane_g2

0x0001,

0xfabc,	// (0x0001934c) cell_indicator_nsta_pane_g

0xc766,	// (0x00015ff6) clock_nsta_pane_cp

0xc76e,	// (0x00015ffe) indicator_nsta_pane_cp

0xc777,	// (0x00016007) nsta_clock_indic_pane_g1

0x7eb3,	// (0x00011743) grid_indicator_pane

0x92c1,	// (0x00012b51) scroll_pane_cp29

0x6173,	// (0x0000fa03) indicator_nsta_pane_cp2_ParamLimits

0x6173,	// (0x0000fa03) indicator_nsta_pane_cp2

0x7dd0,	// (0x00011660) main_apps_wheel_pane

0xa6a9,	// (0x00013f39) form_midp_field_text_pane_ParamLimits

0xa7ee,	// (0x0001407e) scroll_bar_cp050_ParamLimits

0xc7e0,	// (0x00016070) cell_indicator_pane_ParamLimits

0xc7e0,	// (0x00016070) cell_indicator_pane

0xc7fd,	// (0x0001608d) cell_indicator_pane_g1

0xc807,	// (0x00016097) grid_wheel_folder_pane_ParamLimits

0xc807,	// (0x00016097) grid_wheel_folder_pane

0xc81d,	// (0x000160ad) list_wheel_apps_pane_ParamLimits

0xc81d,	// (0x000160ad) list_wheel_apps_pane

0xc82e,	// (0x000160be) main_apps_wheel_pane_g1_ParamLimits

0xc82e,	// (0x000160be) main_apps_wheel_pane_g1

0xc842,	// (0x000160d2) main_apps_wheel_pane_g2_ParamLimits

0xc842,	// (0x000160d2) main_apps_wheel_pane_g2

0x0001,

0xfad8,	// (0x00019368) main_apps_wheel_pane_g_ParamLimits

0xfad8,	// (0x00019368) main_apps_wheel_pane_g

0xc85a,	// (0x000160ea) main_apps_wheel_pane_t1_ParamLimits

0xc85a,	// (0x000160ea) main_apps_wheel_pane_t1

0xc87d,	// (0x0001610d) list_wheel_apps_pane_g1

0xc885,	// (0x00016115) list_wheel_apps_pane_g2

0xc88d,	// (0x0001611d) list_wheel_apps_pane_g3

0xc897,	// (0x00016127) list_wheel_apps_pane_g4

0xc8a1,	// (0x00016131) list_wheel_apps_pane_g5

0x0004,

0xfadd,	// (0x0001936d) list_wheel_apps_pane_g

0x989f,	// (0x0001312f) navi_icon_text_pane

0x9d8f,	// (0x0001361f) aid_fill_nsta

0xc8c4,	// (0x00016154) navi_icon_text_pane_g1

0xc8d0,	// (0x00016160) navi_icon_text_pane_t1

0x973b,	// (0x00012fcb) list_set_graphic_pane_t1_ParamLimits

0x973b,	// (0x00012fcb) list_set_graphic_pane_t1

0xaf30,	// (0x000147c0) popup_midp_note_alarm_window_t6_ParamLimits

0xaf30,	// (0x000147c0) popup_midp_note_alarm_window_t6

0xaf42,	// (0x000147d2) popup_midp_note_alarm_window_t7_ParamLimits

0xaf42,	// (0x000147d2) popup_midp_note_alarm_window_t7

0xaf54,	// (0x000147e4) popup_midp_note_alarm_window_t8_ParamLimits

0xaf54,	// (0x000147e4) popup_midp_note_alarm_window_t8

0xaf66,	// (0x000147f6) popup_midp_note_alarm_window_t9_ParamLimits

0xaf66,	// (0x000147f6) popup_midp_note_alarm_window_t9

0xaf78,	// (0x00014808) popup_midp_note_alarm_window_t10_ParamLimits

0xaf78,	// (0x00014808) popup_midp_note_alarm_window_t10

0xaf8a,	// (0x0001481a) popup_midp_note_alarm_window_t11_ParamLimits

0xaf8a,	// (0x0001481a) popup_midp_note_alarm_window_t11

0xaf9c,	// (0x0001482c) scroll_pane_cp17_ParamLimits

0xaf9c,	// (0x0001482c) scroll_pane_cp17

0x6bf0,	// (0x00010480) volume_small_pane_cp_g1

0x6f3c,	// (0x000107cc) volume_small_pane_cp_g2

0x6f45,	// (0x000107d5) volume_small_pane_cp_g3

0x6f4e,	// (0x000107de) volume_small_pane_cp_g4

0x6f57,	// (0x000107e7) volume_small_pane_cp_g5

0x6f60,	// (0x000107f0) volume_small_pane_cp_g6

0x6f69,	// (0x000107f9) volume_small_pane_cp_g7

0x6f72,	// (0x00010802) volume_small_pane_cp_g8

0x6f7b,	// (0x0001080b) volume_small_pane_cp_g9

0x6f84,	// (0x00010814) volume_small_pane_cp_g10

0x9af4,	// (0x00013384) midp_ticker_pane_g1_ParamLimits

0x9b00,	// (0x00013390) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x00018fe9) midp_ticker_pane_g_ParamLimits

0x9b0c,	// (0x0001339c) midp_ticker_pane_t1_ParamLimits

0x9da5,	// (0x00013635) aid_fill_nsta_2

0xa7da,	// (0x0001406a) list_form2_midp_pane

0xb951,	// (0x000151e1) midp_editing_number_pane_ParamLimits

0xb960,	// (0x000151f0) midp_ticker_pane_ParamLimits

0xc8e2,	// (0x00016172) form2_midp_field_pane

0xc906,	// (0x00016196) scroll_pane_cp51

0xc926,	// (0x000161b6) form2_midp_button_pane_ParamLimits

0xc926,	// (0x000161b6) form2_midp_button_pane

0xc938,	// (0x000161c8) form2_midp_content_pane_ParamLimits

0xc938,	// (0x000161c8) form2_midp_content_pane

0xc952,	// (0x000161e2) form2_midp_field_choice_group_pane

0xc95a,	// (0x000161ea) form2_midp_field_pane_g1

0xc962,	// (0x000161f2) form2_midp_field_pane_g2

0xc96a,	// (0x000161fa) form2_midp_field_pane_g3

0xc972,	// (0x00016202) form2_midp_field_pane_g4

0x0003,

0xfb02,	// (0x00019392) form2_midp_field_pane_g

0xc97a,	// (0x0001620a) form2_midp_gauge_slider_pane

0xc982,	// (0x00016212) form2_midp_gauge_wait_pane

0xc98a,	// (0x0001621a) form2_midp_image_pane_ParamLimits

0xc98a,	// (0x0001621a) form2_midp_image_pane

0xc9a5,	// (0x00016235) form2_midp_label_pane_ParamLimits

0xc9a5,	// (0x00016235) form2_midp_label_pane

0xc9be,	// (0x0001624e) form2_midp_label_pane_cp_ParamLimits

0xc9be,	// (0x0001624e) form2_midp_label_pane_cp

0xc9df,	// (0x0001626f) form2_midp_string_pane_ParamLimits

0xc9df,	// (0x0001626f) form2_midp_string_pane

0xc9f1,	// (0x00016281) form2_midp_text_pane_ParamLimits

0xc9f1,	// (0x00016281) form2_midp_text_pane

0xca0a,	// (0x0001629a) form2_midp_time_pane

0xca1a,	// (0x000162aa) input_focus_pane_cp51_ParamLimits

0xca1a,	// (0x000162aa) input_focus_pane_cp51

0xca32,	// (0x000162c2) form2_midp_label_pane_t1_ParamLimits

0xca32,	// (0x000162c2) form2_midp_label_pane_t1

0xca72,	// (0x00016302) form2_mdip_text_pane_t1_ParamLimits

0xca72,	// (0x00016302) form2_mdip_text_pane_t1

0xca8e,	// (0x0001631e) form2_midp_time_pane_t1

0xcaa9,	// (0x00016339) form2_midp_gauge_slider_pane_t1

0xcabb,	// (0x0001634b) form2_midp_gauge_slider_pane_t2

0xcacd,	// (0x0001635d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0b,	// (0x0001939b) form2_midp_gauge_slider_pane_t

0xcadf,	// (0x0001636f) form2_midp_slider_pane

0xcaeb,	// (0x0001637b) form2_midp_gauge_wait_pane_t1

0xcaf9,	// (0x00016389) form2_midp_wait_pane_ParamLimits

0xcaf9,	// (0x00016389) form2_midp_wait_pane

0xcb24,	// (0x000163b4) list_single_2graphic_pane_cp4_ParamLimits

0xcb24,	// (0x000163b4) list_single_2graphic_pane_cp4

0xa49c,	// (0x00013d2c) list_single_midp_graphic_pane_cp_ParamLimits

0xa49c,	// (0x00013d2c) list_single_midp_graphic_pane_cp

0x7cf0,	// (0x00011580) list_highlight_pane_cp20

0xcb53,	// (0x000163e3) list_single_2graphic_pane_g1_cp4

0xbebb,	// (0x0001574b) list_single_2graphic_pane_g2_cp4

0xcb5b,	// (0x000163eb) list_single_2graphic_pane_t1_cp4

0x7dd0,	// (0x00011660) list_highlight_pane_cp21

0xcb6a,	// (0x000163fa) list_single_midp_graphic_pane_g4_cp

0xcb79,	// (0x00016409) list_single_midp_graphic_pane_t1_cp

0xcb8e,	// (0x0001641e) form2_mdip_string_pane_t1_ParamLimits

0xcb8e,	// (0x0001641e) form2_mdip_string_pane_t1

0x7cf0,	// (0x00011580) bg_wml_button_pane_cp2

0x7ce6,	// (0x00011576) form2_midp_image_pane_g1

0x8883,	// (0x00012113) list_double_large_graphic_pane_g5_ParamLimits

0x8883,	// (0x00012113) list_double_large_graphic_pane_g5

0x8f13,	// (0x000127a3) midp_form_pane_ParamLimits

0x7dd0,	// (0x00011660) main_apps_wheel_pane_ParamLimits

0x6840,	// (0x000100d0) popup_preview_window_ParamLimits

0x6840,	// (0x000100d0) popup_preview_window

0x69f1,	// (0x00010281) popup_touch_info_window_ParamLimits

0x69f1,	// (0x00010281) popup_touch_info_window

0x6a0f,	// (0x0001029f) popup_touch_menu_window_ParamLimits

0x6a0f,	// (0x0001029f) popup_touch_menu_window

0x7cdc,	// (0x0001156c) bg_popup_sub_pane_cp6

0xccc8,	// (0x00016558) list_touch_menu_pane

0xccd0,	// (0x00016560) list_single_touch_menu_pane_ParamLimits

0xccd0,	// (0x00016560) list_single_touch_menu_pane

0xcce4,	// (0x00016574) list_single_touch_menu_pane_t1

0x7dd0,	// (0x00011660) bg_popup_sub_pane_cp7_ParamLimits

0x7dd0,	// (0x00011660) bg_popup_sub_pane_cp7

0xccf2,	// (0x00016582) heading_sub_pane

0xccfa,	// (0x0001658a) list_touch_info_pane_ParamLimits

0xccfa,	// (0x0001658a) list_touch_info_pane

0xcd09,	// (0x00016599) list_single_touch_info_pane_ParamLimits

0xcd09,	// (0x00016599) list_single_touch_info_pane

0xcd1b,	// (0x000165ab) list_single_touch_info_pane_t1

0xcd29,	// (0x000165b9) list_single_touch_info_pane_t2

0x0001,

0xfb19,	// (0x000193a9) list_single_touch_info_pane_t

0x9a21,	// (0x000132b1) bg_popup_heading_pane_cp

0xcd37,	// (0x000165c7) heading_sub_pane_t1

0xa3b7,	// (0x00013c47) bg_popup_preview_window_pane_cp_ParamLimits

0xa3b7,	// (0x00013c47) bg_popup_preview_window_pane_cp

0xccf2,	// (0x00016582) heading_preview_pane

0xccfa,	// (0x0001658a) list_preview_pane_ParamLimits

0xccfa,	// (0x0001658a) list_preview_pane

0xcd45,	// (0x000165d5) popup_preview_window_g1

0xcd09,	// (0x00016599) list_single_preview_pane_ParamLimits

0xcd09,	// (0x00016599) list_single_preview_pane

0xcd4d,	// (0x000165dd) list_single_preview_pane_g1

0xcd55,	// (0x000165e5) list_single_preview_pane_t1

0xcd1b,	// (0x000165ab) list_single_preview_pane_t2

0x0001,

0xfb1e,	// (0x000193ae) list_single_preview_pane_t

0xcd63,	// (0x000165f3) bg_popup_heading_pane_cp2_ParamLimits

0xcd63,	// (0x000165f3) bg_popup_heading_pane_cp2

0xcd79,	// (0x00016609) heading_preview_pane_g1

0xcd81,	// (0x00016611) heading_preview_pane_t1_ParamLimits

0xcd81,	// (0x00016611) heading_preview_pane_t1

0x7ed6,	// (0x00011766) soft_indicator_pane_t1_ParamLimits

0x85b0,	// (0x00011e40) scroll_pane_ParamLimits

0x91bd,	// (0x00012a4d) scroll_sc2_left_pane

0x91c6,	// (0x00012a56) scroll_sc2_right_pane

0x91e5,	// (0x00012a75) scroll_bg_pane_g1_ParamLimits

0x91fa,	// (0x00012a8a) scroll_bg_pane_g2_ParamLimits

0x9212,	// (0x00012aa2) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x00018f74) scroll_bg_pane_g_ParamLimits

0x91e5,	// (0x00012a75) scroll_handle_pane_g1_ParamLimits

0x9234,	// (0x00012ac4) scroll_handle_pane_g2_ParamLimits

0x9212,	// (0x00012aa2) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x00018f7b) scroll_handle_pane_g_ParamLimits

0x64cb,	// (0x0000fd5b) popup_choice_list_window_ParamLimits

0x64cb,	// (0x0000fd5b) popup_choice_list_window

0xa1b9,	// (0x00013a49) choice_list_pane

0xa269,	// (0x00013af9) cell_toolbar_pane_t1

0xa291,	// (0x00013b21) toolbar_button_pane_ParamLimits

0xb44e,	// (0x00014cde) ai_gene_pane_1_t2_ParamLimits

0xb44e,	// (0x00014cde) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x000191a3) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x000191a3) ai_gene_pane_1_t

0xcd9e,	// (0x0001662e) scroll_sc2_left_pane_g1

0xcd9e,	// (0x0001662e) scroll_sc2_right_pane_g1

0x9d65,	// (0x000135f5) bg_popup_sub_pane_cp10

0xcda8,	// (0x00016638) list_choice_list_pane

0xcdbf,	// (0x0001664f) list_single_choice_list_pane_ParamLimits

0xcdbf,	// (0x0001664f) list_single_choice_list_pane

0x8ebb,	// (0x0001274b) list_single_choice_list_pane_g1

0x8ec3,	// (0x00012753) list_single_choice_list_pane_t1_ParamLimits

0x8ec3,	// (0x00012753) list_single_choice_list_pane_t1

0xcdd2,	// (0x00016662) choice_list_pane_g1

0xcdda,	// (0x0001666a) choice_list_pane_t1

0x7cdc,	// (0x0001156c) input_focus_pane_cp11

0x909a,	// (0x0001292a) title_pane_stacon_g2_ParamLimits

0x909a,	// (0x0001292a) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x00018f5a) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00018f5a) title_pane_stacon_g

0x9a21,	// (0x000132b1) cursor_press_pane

0x6571,	// (0x0000fe01) popup_fep_hwr_window_ParamLimits

0x6571,	// (0x0000fe01) popup_fep_hwr_window

0x65e9,	// (0x0000fe79) popup_fep_vkb_window_ParamLimits

0x65e9,	// (0x0000fe79) popup_fep_vkb_window

0xcde8,	// (0x00016678) cursor_press_pane_g1

0x0002,

0xfb47,	// (0x000193d7) fep_vkb_side_pane_g_ParamLimits

0x6fc6,	// (0x00010856) fep_hwr_candidate_pane_ParamLimits

0x6fc6,	// (0x00010856) fep_hwr_candidate_pane

0x6ff0,	// (0x00010880) fep_hwr_side_pane_ParamLimits

0x6ff0,	// (0x00010880) fep_hwr_side_pane

0x7010,	// (0x000108a0) fep_hwr_top_pane_ParamLimits

0x7010,	// (0x000108a0) fep_hwr_top_pane

0x7028,	// (0x000108b8) fep_hwr_write_pane_ParamLimits

0x7028,	// (0x000108b8) fep_hwr_write_pane

0xfb47,	// (0x000193d7) fep_vkb_side_pane_g

0xcdf0,	// (0x00016680) fep_hwr_top_pane_g1

0xce02,	// (0x00016692) fep_hwr_top_pane_g2

0x7062,	// (0x000108f2) fep_hwr_top_pane_g3

0x0002,

0xfb23,	// (0x000193b3) fep_hwr_top_pane_g

0x7077,	// (0x00010907) fep_hwr_top_text_pane

0x9387,	// (0x00012c17) fep_hwr_top_text_pane_g1

0xce38,	// (0x000166c8) fep_hwr_top_text_pane_t1

0x716d,	// (0x000109fd) fep_hwr_candidate_pane_g1

0xd092,	// (0x00016922) fep_vkb_keypad_pane_g3_ParamLimits

0xd092,	// (0x00016922) fep_vkb_keypad_pane_g3

0xd0ba,	// (0x0001694a) fep_vkb_keypad_pane_g4_ParamLimits

0xd0ba,	// (0x0001694a) fep_vkb_keypad_pane_g4

0xd129,	// (0x000169b9) fep_vkb_bottom_pane_g2_ParamLimits

0xd129,	// (0x000169b9) fep_vkb_bottom_pane_g2

0x0001,

0xfb4e,	// (0x000193de) fep_vkb_bottom_pane_g_ParamLimits

0xfb4e,	// (0x000193de) fep_vkb_bottom_pane_g

0xcd9e,	// (0x0001662e) cell_vkb_side_pane_g2

0x0001,

0xfb58,	// (0x000193e8) cell_vkb_side_pane_g

0xd1b4,	// (0x00016a44) cell_vkb_side_pane_t1

0xd1c2,	// (0x00016a52) cell_vkb_side_pane_t1_copy1

0xcd9e,	// (0x0001662e) bg_fep_vkb_candidate_pane_g2

0xd2f4,	// (0x00016b84) cell_vkb_candidate_pane_ParamLimits

0xce46,	// (0x000166d6) aid_size_cell_vkb_ParamLimits

0xce46,	// (0x000166d6) aid_size_cell_vkb

0xd2f4,	// (0x00016b84) cell_vkb_candidate_pane

0x7194,	// (0x00010a24) bg_popup_fep_shadow_pane_g1

0xced4,	// (0x00016764) fep_vkb_bottom_pane_ParamLimits

0xced4,	// (0x00016764) fep_vkb_bottom_pane

0xcf11,	// (0x000167a1) fep_vkb_candidate_pane_ParamLimits

0xcf11,	// (0x000167a1) fep_vkb_candidate_pane

0xcf2d,	// (0x000167bd) fep_vkb_keypad_pane_ParamLimits

0xcf2d,	// (0x000167bd) fep_vkb_keypad_pane

0xcf73,	// (0x00016803) fep_vkb_side_pane_ParamLimits

0xcf73,	// (0x00016803) fep_vkb_side_pane

0xcfaf,	// (0x0001683f) fep_vkb_top_pane_ParamLimits

0xcfaf,	// (0x0001683f) fep_vkb_top_pane

0xcfeb,	// (0x0001687b) fep_vkb_top_pane_g1_ParamLimits

0xcfeb,	// (0x0001687b) fep_vkb_top_pane_g1

0xcffa,	// (0x0001688a) fep_vkb_top_pane_g2_ParamLimits

0xcffa,	// (0x0001688a) fep_vkb_top_pane_g2

0xd009,	// (0x00016899) fep_vkb_top_pane_g3_ParamLimits

0xd009,	// (0x00016899) fep_vkb_top_pane_g3

0x0003,

0xfb3e,	// (0x000193ce) fep_vkb_top_pane_g_ParamLimits

0xfb3e,	// (0x000193ce) fep_vkb_top_pane_g

0xd027,	// (0x000168b7) fep_vkb_top_text_pane_ParamLimits

0xd027,	// (0x000168b7) fep_vkb_top_text_pane

0xd038,	// (0x000168c8) fep_vkb_side_pane_g1_ParamLimits

0xd038,	// (0x000168c8) fep_vkb_side_pane_g1

0xd081,	// (0x00016911) grid_vkb_side_pane_ParamLimits

0xd081,	// (0x00016911) grid_vkb_side_pane

0x719c,	// (0x00010a2c) bg_popup_fep_shadow_pane_g2

0x71a5,	// (0x00010a35) bg_popup_fep_shadow_pane_g3

0x71ad,	// (0x00010a3d) bg_popup_fep_shadow_pane_g4

0x71b6,	// (0x00010a46) bg_popup_fep_shadow_pane_g5

0x71c0,	// (0x00010a50) bg_popup_fep_shadow_pane_g6

0x71c8,	// (0x00010a58) bg_popup_fep_shadow_pane_g7

0x8cfd,	// (0x0001258d) bg_popup_fep_shadow_pane_g8

0xd0d8,	// (0x00016968) grid_vkb_keypad_number_pane_ParamLimits

0xd0d8,	// (0x00016968) grid_vkb_keypad_number_pane

0xd0e8,	// (0x00016978) grid_vkb_keypad_pane_ParamLimits

0xd0e8,	// (0x00016978) grid_vkb_keypad_pane

0xd10e,	// (0x0001699e) fep_vkb_bottom_pane_g1_ParamLimits

0xd10e,	// (0x0001699e) fep_vkb_bottom_pane_g1

0xd137,	// (0x000169c7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd137,	// (0x000169c7) grid_vkb_keypad_bottom_left_pane

0xd14c,	// (0x000169dc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd14c,	// (0x000169dc) grid_vkb_keypad_bottom_right_pane

0xd161,	// (0x000169f1) fep_vkb_top_text_pane_g1

0xd17c,	// (0x00016a0c) fep_vkb_top_text_pane_t1

0xd191,	// (0x00016a21) cell_vkb_side_pane_ParamLimits

0xd191,	// (0x00016a21) cell_vkb_side_pane

0xcd9e,	// (0x0001662e) cell_vkb_side_pane_g1

0xd1d0,	// (0x00016a60) cell_vkb_keypad_pane_ParamLimits

0xd1d0,	// (0x00016a60) cell_vkb_keypad_pane

0xd24b,	// (0x00016adb) cell_vkb_keypad_pane_g1

0x0008,

0xfb6b,	// (0x000193fb) bg_popup_fep_shadow_pane_g

0x71da,	// (0x00010a6a) cell_hwr_side_pane_g1

0x71da,	// (0x00010a6a) cell_hwr_side_pane_g2

0xd255,	// (0x00016ae5) cell_vkb_keypad_pane_t1

0xd263,	// (0x00016af3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd263,	// (0x00016af3) cell_vkb_keypad_bottom_left_pane

0xd280,	// (0x00016b10) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd280,	// (0x00016b10) cell_vkb_keypad_bottom_right_pane

0xcd9e,	// (0x0001662e) cell_vkb_keypad_bottom_left_pane_g1

0xcd9e,	// (0x0001662e) cell_vkb_keypad_bottom_right_pane_g1

0xd2b9,	// (0x00016b49) cell_vkb_keypad_number_pane_ParamLimits

0xd2b9,	// (0x00016b49) cell_vkb_keypad_number_pane

0xd2d8,	// (0x00016b68) cell_vkb_keypad_number_pane_g1

0xd2e2,	// (0x00016b72) cell_vkb_keypad_number_pane_g2

0xd2eb,	// (0x00016b7b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5d,	// (0x000193ed) cell_vkb_keypad_number_pane_g

0xd255,	// (0x00016ae5) cell_vkb_keypad_number_pane_t1

0xd311,	// (0x00016ba1) fep_vkb_candidate_pane_g1

0x0001,

0xfb7e,	// (0x0001940e) cell_hwr_side_pane_g

0xd32a,	// (0x00016bba) cell_hwr_side_pane_t1

0x71e4,	// (0x00010a74) cell_hwr_side_pane_t1_copy1

0x71f2,	// (0x00010a82) cell_hwr_candidate_pane_g1

0x7221,	// (0x00010ab1) cell_hwr_candidate_pane_t1

0xcd9e,	// (0x0001662e) cell_vkb_candidate_pane_g2

0xd36e,	// (0x00016bfe) cell_vkb_candidate_pane_t1

0x6f8d,	// (0x0001081d) bg_popup_fep_shadow_pane_ParamLimits

0x6f8d,	// (0x0001081d) bg_popup_fep_shadow_pane

0x7042,	// (0x000108d2) bg_fep_hwr_top_pane_g4

0xce14,	// (0x000166a4) bg_hwr_side_pane_g1_ParamLimits

0xce14,	// (0x000166a4) bg_hwr_side_pane_g1

0x70b3,	// (0x00010943) cell_hwr_side_pane_ParamLimits

0x70b3,	// (0x00010943) cell_hwr_side_pane

0x70ee,	// (0x0001097e) fep_hwr_write_pane_g1_ParamLimits

0x70ee,	// (0x0001097e) fep_hwr_write_pane_g1

0x70fb,	// (0x0001098b) fep_hwr_write_pane_g2_ParamLimits

0x70fb,	// (0x0001098b) fep_hwr_write_pane_g2

0x7108,	// (0x00010998) fep_hwr_write_pane_g3_ParamLimits

0x7108,	// (0x00010998) fep_hwr_write_pane_g3

0x7116,	// (0x000109a6) fep_hwr_write_pane_g4_ParamLimits

0x7116,	// (0x000109a6) fep_hwr_write_pane_g4

0x0005,

0xfb2a,	// (0x000193ba) fep_hwr_write_pane_g_ParamLimits

0xfb2a,	// (0x000193ba) fep_hwr_write_pane_g

0x7042,	// (0x000108d2) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7042,	// (0x000108d2) bg_fep_hwr_candidate_pane_g2

0x712b,	// (0x000109bb) cell_hwr_candidate_pane_ParamLimits

0x712b,	// (0x000109bb) cell_hwr_candidate_pane

0x716d,	// (0x000109fd) fep_hwr_candidate_pane_g1_ParamLimits

0xce74,	// (0x00016704) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xce74,	// (0x00016704) bg_popup_fep_shadow_pane_cp2

0xd019,	// (0x000168a9) fep_vkb_top_pane_g4_ParamLimits

0xd019,	// (0x000168a9) fep_vkb_top_pane_g4

0xd05f,	// (0x000168ef) fep_vkb_side_pane_g2_ParamLimits

0xd05f,	// (0x000168ef) fep_vkb_side_pane_g2

0x89d9,	// (0x00012269) list_setting_pane_t4_ParamLimits

0x89d9,	// (0x00012269) list_setting_pane_t4

0x8a53,	// (0x000122e3) list_setting_number_pane_t5_ParamLimits

0x8a53,	// (0x000122e3) list_setting_number_pane_t5

0x93ce,	// (0x00012c5e) list_double_heading_pane_cp2_ParamLimits

0x93ce,	// (0x00012c5e) list_double_heading_pane_cp2

0x8bcf,	// (0x0001245f) list_double_heading_pane_g1_cp2_ParamLimits

0x8bcf,	// (0x0001245f) list_double_heading_pane_g1_cp2

0x8bdb,	// (0x0001246b) list_double_heading_pane_g2_cp2_ParamLimits

0x8bdb,	// (0x0001246b) list_double_heading_pane_g2_cp2

0xd37c,	// (0x00016c0c) list_double_heading_pane_t1_cp2_ParamLimits

0xd37c,	// (0x00016c0c) list_double_heading_pane_t1_cp2

0xd392,	// (0x00016c22) list_double_heading_pane_t2_cp2_ParamLimits

0xd392,	// (0x00016c22) list_double_heading_pane_t2_cp2

0x7cc4,	// (0x00011554) aid_value_unit2

0x5d15,	// (0x0000f5a5) popup_preview_fixed_window

0x8073,	// (0x00011903) bg_popup_preview_window_pane_cp02

0xd3a4,	// (0x00016c34) list_preview_fixed_pane

0xd3ea,	// (0x00016c7a) list_empty_pane_fp_ParamLimits

0xd3ea,	// (0x00016c7a) list_empty_pane_fp

0xd3ea,	// (0x00016c7a) list_single_cale_day_pane_fp_ParamLimits

0xd3ea,	// (0x00016c7a) list_single_cale_day_pane_fp

0xd3ea,	// (0x00016c7a) list_single_graphic_heading_pane_fp_ParamLimits

0xd3ea,	// (0x00016c7a) list_single_graphic_heading_pane_fp

0xd3ea,	// (0x00016c7a) list_single_graphic_pane_fp_ParamLimits

0xd3ea,	// (0x00016c7a) list_single_graphic_pane_fp

0xd3ea,	// (0x00016c7a) list_single_heading_pane_fp_ParamLimits

0xd3ea,	// (0x00016c7a) list_single_heading_pane_fp

0xd3ea,	// (0x00016c7a) list_single_pane_fp_ParamLimits

0xd3ea,	// (0x00016c7a) list_single_pane_fp

0xd401,	// (0x00016c91) list_single_pane_fp_g1_ParamLimits

0xd401,	// (0x00016c91) list_single_pane_fp_g1

0x8bcf,	// (0x0001245f) list_single_pane_fp_g2_ParamLimits

0x8bcf,	// (0x0001245f) list_single_pane_fp_g2

0x8bdb,	// (0x0001246b) list_single_pane_fp_g3_ParamLimits

0x8bdb,	// (0x0001246b) list_single_pane_fp_g3

0xd40d,	// (0x00016c9d) list_single_pane_fp_g4_ParamLimits

0xd40d,	// (0x00016c9d) list_single_pane_fp_g4

0x0003,

0xfb91,	// (0x00019421) list_single_pane_fp_g_ParamLimits

0xfb91,	// (0x00019421) list_single_pane_fp_g

0xd419,	// (0x00016ca9) list_single_pane_fp_t1_ParamLimits

0xd419,	// (0x00016ca9) list_single_pane_fp_t1

0xd430,	// (0x00016cc0) list_single_graphic_pane_fp_g1_ParamLimits

0xd430,	// (0x00016cc0) list_single_graphic_pane_fp_g1

0xd401,	// (0x00016c91) list_single_graphic_pane_fp_g2_ParamLimits

0xd401,	// (0x00016c91) list_single_graphic_pane_fp_g2

0x8bcf,	// (0x0001245f) list_single_graphic_pane_fp_g3_ParamLimits

0x8bcf,	// (0x0001245f) list_single_graphic_pane_fp_g3

0x8bdb,	// (0x0001246b) list_single_graphic_pane_fp_g4_ParamLimits

0x8bdb,	// (0x0001246b) list_single_graphic_pane_fp_g4

0xd40d,	// (0x00016c9d) list_single_graphic_pane_fp_g5_ParamLimits

0xd40d,	// (0x00016c9d) list_single_graphic_pane_fp_g5

0x0004,

0xfb9a,	// (0x0001942a) list_single_graphic_pane_fp_g_ParamLimits

0xfb9a,	// (0x0001942a) list_single_graphic_pane_fp_g

0xd43c,	// (0x00016ccc) list_single_graphic_pane_fp_t1_ParamLimits

0xd43c,	// (0x00016ccc) list_single_graphic_pane_fp_t1

0xd430,	// (0x00016cc0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd430,	// (0x00016cc0) list_single_graphic_heading_pane_fp_g1

0xd401,	// (0x00016c91) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd401,	// (0x00016c91) list_single_graphic_heading_pane_fp_g2

0x8bcf,	// (0x0001245f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8bcf,	// (0x0001245f) list_single_graphic_heading_pane_fp_g3

0x8bdb,	// (0x0001246b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8bdb,	// (0x0001246b) list_single_graphic_heading_pane_fp_g4

0xd40d,	// (0x00016c9d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd40d,	// (0x00016c9d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x0001942a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0001942a) list_single_graphic_heading_pane_fp_g

0xd452,	// (0x00016ce2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd452,	// (0x00016ce2) list_single_graphic_heading_pane_fp_t1

0xd468,	// (0x00016cf8) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd468,	// (0x00016cf8) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x00019435) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x00019435) list_single_graphic_heading_pane_fp_t

0xd47a,	// (0x00016d0a) list_single_cale_day_pane_fp_g1_ParamLimits

0xd47a,	// (0x00016d0a) list_single_cale_day_pane_fp_g1

0xd4b2,	// (0x00016d42) list_single_cale_day_pane_fp_g2_ParamLimits

0xd4b2,	// (0x00016d42) list_single_cale_day_pane_fp_g2

0xd4be,	// (0x00016d4e) list_single_cale_day_pane_fp_g3_ParamLimits

0xd4be,	// (0x00016d4e) list_single_cale_day_pane_fp_g3

0xd4e6,	// (0x00016d76) list_single_cale_day_pane_fp_g4_ParamLimits

0xd4e6,	// (0x00016d76) list_single_cale_day_pane_fp_g4

0xd50a,	// (0x00016d9a) list_single_cale_day_pane_fp_g5_ParamLimits

0xd50a,	// (0x00016d9a) list_single_cale_day_pane_fp_g5

0x0004,

0xfbaa,	// (0x0001943a) list_single_cale_day_pane_fp_g_ParamLimits

0xfbaa,	// (0x0001943a) list_single_cale_day_pane_fp_g

0xd52e,	// (0x00016dbe) list_single_cale_day_pane_fp_t1_ParamLimits

0xd52e,	// (0x00016dbe) list_single_cale_day_pane_fp_t1

0xd554,	// (0x00016de4) list_single_cale_day_pane_fp_t2_ParamLimits

0xd554,	// (0x00016de4) list_single_cale_day_pane_fp_t2

0xd56d,	// (0x00016dfd) list_single_cale_day_pane_fp_t3_ParamLimits

0xd56d,	// (0x00016dfd) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb5,	// (0x00019445) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb5,	// (0x00019445) list_single_cale_day_pane_fp_t

0xd401,	// (0x00016c91) list_empty_pane_fp_g1_ParamLimits

0xd401,	// (0x00016c91) list_empty_pane_fp_g1

0xd586,	// (0x00016e16) list_empty_pane_fp_t1

0xd594,	// (0x00016e24) list_empty_pane_fp_t2

0x0001,

0xfbbc,	// (0x0001944c) list_empty_pane_fp_t

0xd401,	// (0x00016c91) list_single_heading_pane_fp_g1_ParamLimits

0xd401,	// (0x00016c91) list_single_heading_pane_fp_g1

0x8bcf,	// (0x0001245f) list_single_heading_pane_fp_g2_ParamLimits

0x8bcf,	// (0x0001245f) list_single_heading_pane_fp_g2

0x8bdb,	// (0x0001246b) list_single_heading_pane_fp_g3_ParamLimits

0x8bdb,	// (0x0001246b) list_single_heading_pane_fp_g3

0x0002,

0xfbc1,	// (0x00019451) list_single_heading_pane_fp_g_ParamLimits

0xfbc1,	// (0x00019451) list_single_heading_pane_fp_g

0xd5a2,	// (0x00016e32) list_single_heading_pane_fp_t1_ParamLimits

0xd5a2,	// (0x00016e32) list_single_heading_pane_fp_t1

0xd5b4,	// (0x00016e44) list_single_heading_pane_fp_t2_ParamLimits

0xd5b4,	// (0x00016e44) list_single_heading_pane_fp_t2

0x0001,

0xfbc8,	// (0x00019458) list_single_heading_pane_fp_t_ParamLimits

0xfbc8,	// (0x00019458) list_single_heading_pane_fp_t

0x8f31,	// (0x000127c1) aid_size_cell_fast

0x7fe3,	// (0x00011873) soft_indicator_pane_cp1_t1

0x8f6e,	// (0x000127fe) cell_app_pane_cp2_ParamLimits

0x8f6e,	// (0x000127fe) cell_app_pane_cp2

0x6faf,	// (0x0001083f) fep_hwr_candidate_drop_down_list_pane

0x7187,	// (0x00010a17) fep_hwr_candidate_pane_g3_ParamLimits

0x7187,	// (0x00010a17) fep_hwr_candidate_pane_g3

0x537f,	// (0x0000ec0f) fep_hwr_candidate_pane_g4_ParamLimits

0x537f,	// (0x0000ec0f) fep_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x000193c7) fep_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x000193c7) fep_hwr_candidate_pane_g

0xcf00,	// (0x00016790) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xcf00,	// (0x00016790) fep_vkb_candidate_drop_down_list_pane

0xd319,	// (0x00016ba9) fep_vkb_candidate_pane_g3

0xd321,	// (0x00016bb1) fep_vkb_candidate_pane_g4

0x0002,

0xfb64,	// (0x000193f4) fep_vkb_candidate_pane_g

0x71f2,	// (0x00010a82) cell_hwr_candidate_pane_g1_ParamLimits

0x7200,	// (0x00010a90) cell_hwr_candidate_pane_g3_ParamLimits

0x7200,	// (0x00010a90) cell_hwr_candidate_pane_g3

0xf437,	// (0x00018cc7) cell_hwr_candidate_pane_g4_ParamLimits

0xf437,	// (0x00018cc7) cell_hwr_candidate_pane_g4

0x0002,

0xfb83,	// (0x00019413) cell_hwr_candidate_pane_g_ParamLimits

0xfb83,	// (0x00019413) cell_hwr_candidate_pane_g

0xd338,	// (0x00016bc8) cell_vkb_candidate_pane_g3_ParamLimits

0xd338,	// (0x00016bc8) cell_vkb_candidate_pane_g3

0xd353,	// (0x00016be3) cell_vkb_candidate_pane_g4_ParamLimits

0xd353,	// (0x00016be3) cell_vkb_candidate_pane_g4

0xd5ca,	// (0x00016e5a) cell_app_pane_cp2_g1_ParamLimits

0xd5ca,	// (0x00016e5a) cell_app_pane_cp2_g1

0xd5e8,	// (0x00016e78) cell_app_pane_cp2_g2_ParamLimits

0xd5e8,	// (0x00016e78) cell_app_pane_cp2_g2

0x0001,

0xfbcd,	// (0x0001945d) cell_app_pane_cp2_g_ParamLimits

0xfbcd,	// (0x0001945d) cell_app_pane_cp2_g

0xd5f4,	// (0x00016e84) cell_app_pane_cp2_t1_ParamLimits

0xd5f4,	// (0x00016e84) cell_app_pane_cp2_t1

0x8ba9,	// (0x00012439) grid_highlight_pane_cp1_ParamLimits

0x8ba9,	// (0x00012439) grid_highlight_pane_cp1

0x723f,	// (0x00010acf) cell_hwr_candidate_pane_cp1_ParamLimits

0x723f,	// (0x00010acf) cell_hwr_candidate_pane_cp1

0x71f2,	// (0x00010a82) fep_hwr_candidate_drop_down_list_pane_g1

0x725e,	// (0x00010aee) fep_hwr_candidate_drop_down_list_pane_g2

0x726b,	// (0x00010afb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd2,	// (0x00019462) fep_hwr_candidate_drop_down_list_pane_g

0x7278,	// (0x00010b08) fep_hwr_candidate_drop_down_list_scroll_pane

0x7281,	// (0x00010b11) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7281,	// (0x00010b11) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x728e,	// (0x00010b1e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x728e,	// (0x00010b1e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x729b,	// (0x00010b2b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x729b,	// (0x00010b2b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x72a8,	// (0x00010b38) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x72a8,	// (0x00010b38) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x72c3,	// (0x00010b53) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x72c3,	// (0x00010b53) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x72de,	// (0x00010b6e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x72de,	// (0x00010b6e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x72f9,	// (0x00010b89) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x72f9,	// (0x00010b89) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7314,	// (0x00010ba4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7314,	// (0x00010ba4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x00019469) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x00019469) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xd606,	// (0x00016e96) cell_vkb_candidate_pane_cp1_ParamLimits

0xd606,	// (0x00016e96) cell_vkb_candidate_pane_cp1

0xd019,	// (0x000168a9) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd019,	// (0x000168a9) fep_vkb_candidate_drop_down_list_pane_g1

0xd626,	// (0x00016eb6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xd626,	// (0x00016eb6) fep_vkb_candidate_drop_down_list_pane_g2

0xd633,	// (0x00016ec3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xd633,	// (0x00016ec3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbea,	// (0x0001947a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbea,	// (0x0001947a) fep_vkb_candidate_drop_down_list_pane_g

0xd640,	// (0x00016ed0) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xd640,	// (0x00016ed0) fep_vkb_candidate_drop_down_list_scroll_pane

0xd64d,	// (0x00016edd) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd64d,	// (0x00016edd) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xd65a,	// (0x00016eea) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd65a,	// (0x00016eea) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xd666,	// (0x00016ef6) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd666,	// (0x00016ef6) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xd672,	// (0x00016f02) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd672,	// (0x00016f02) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd693,	// (0x00016f23) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd693,	// (0x00016f23) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xd6b4,	// (0x00016f44) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd6b4,	// (0x00016f44) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xd6d5,	// (0x00016f65) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd6d5,	// (0x00016f65) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xd6f6,	// (0x00016f86) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd6f6,	// (0x00016f86) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf1,	// (0x00019481) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf1,	// (0x00019481) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7cfa,	// (0x0001158a) title_pane_g1_ParamLimits

0x7d07,	// (0x00011597) title_pane_g2_ParamLimits

0xf554,	// (0x00018de4) title_pane_g_ParamLimits

0x9377,	// (0x00012c07) aid_call2_pane

0x937f,	// (0x00012c0f) aid_call_pane

0x9387,	// (0x00012c17) popup_clock_analogue_window_g1

0x9387,	// (0x00012c17) popup_clock_analogue_window_g2

0x6074,	// (0x0000f904) popup_clock_analogue_window_g3

0x607d,	// (0x0000f90d) popup_clock_analogue_window_g4

0x7ce6,	// (0x00011576) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x00018f89) popup_clock_analogue_window_g

0x6085,	// (0x0000f915) popup_clock_analogue_window_t1

0x6093,	// (0x0000f923) clock_digital_number_pane_ParamLimits

0x6093,	// (0x0000f923) clock_digital_number_pane

0x609f,	// (0x0000f92f) clock_digital_number_pane_cp02_ParamLimits

0x609f,	// (0x0000f92f) clock_digital_number_pane_cp02

0x60ab,	// (0x0000f93b) clock_digital_number_pane_cp03_ParamLimits

0x60ab,	// (0x0000f93b) clock_digital_number_pane_cp03

0x60b7,	// (0x0000f947) clock_digital_number_pane_cp04_ParamLimits

0x60b7,	// (0x0000f947) clock_digital_number_pane_cp04

0x60c3,	// (0x0000f953) clock_digital_separator_pane_ParamLimits

0x60c3,	// (0x0000f953) clock_digital_separator_pane

0x60cf,	// (0x0000f95f) popup_clock_digital_window_t1_ParamLimits

0x60cf,	// (0x0000f95f) popup_clock_digital_window_t1

0x7ce6,	// (0x00011576) clock_digital_number_pane_g1

0x7ce6,	// (0x00011576) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x00018f94) clock_digital_number_pane_g

0x7ce6,	// (0x00011576) clock_digital_separator_pane_g1

0x7ce6,	// (0x00011576) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x00018f94) clock_digital_separator_pane_g

0x9d8f,	// (0x0001361f) aid_fill_nsta_ParamLimits

0x9ed5,	// (0x00013765) indicator_nsta_pane_ParamLimits

0xa048,	// (0x000138d8) popup_clock_analogue_window

0xa048,	// (0x000138d8) popup_clock_digital_window

0x7dd0,	// (0x00011660) grid_indicator_nsta_pane_ParamLimits

0xc6fc,	// (0x00015f8c) clock_nsta_pane_t2

0x0001,

0xfab7,	// (0x00019347) clock_nsta_pane_t

0x6038,	// (0x0000f8c8) aid_size_max_handle

0x6042,	// (0x0000f8d2) aid_size_min_handle

0x9a21,	// (0x000132b1) editor_scroll_pane

0xd711,	// (0x00016fa1) ex_editor_pane

0x8ea0,	// (0x00012730) scroll_pane_cp13

0x85dc,	// (0x00011e6c) scroll_pane_cp14

0x93b6,	// (0x00012c46) scroll_pane_cp36

0x93e0,	// (0x00012c70) list_single_graphic_hl_pane_cp2_ParamLimits

0x93e0,	// (0x00012c70) list_single_graphic_hl_pane_cp2

0xba39,	// (0x000152c9) list_single_graphic_hl_pane_ParamLimits

0xba39,	// (0x000152c9) list_single_graphic_hl_pane

0xd719,	// (0x00016fa9) aid_size_min_hl_cp1

0xd722,	// (0x00016fb2) list_highlight_pane_cp34_ParamLimits

0xd722,	// (0x00016fb2) list_highlight_pane_cp34

0xd733,	// (0x00016fc3) list_single_graphic_hl_pane_g1_ParamLimits

0xd733,	// (0x00016fc3) list_single_graphic_hl_pane_g1

0xd740,	// (0x00016fd0) list_single_graphic_hl_pane_g2_ParamLimits

0xd740,	// (0x00016fd0) list_single_graphic_hl_pane_g2

0xd740,	// (0x00016fd0) list_single_graphic_hl_pane_g3_ParamLimits

0xd740,	// (0x00016fd0) list_single_graphic_hl_pane_g3

0x9958,	// (0x000131e8) list_single_graphic_hl_pane_g4_ParamLimits

0x9958,	// (0x000131e8) list_single_graphic_hl_pane_g4

0xd74c,	// (0x00016fdc) list_single_graphic_hl_pane_g5_ParamLimits

0xd74c,	// (0x00016fdc) list_single_graphic_hl_pane_g5

0x0004,

0xfc02,	// (0x00019492) list_single_graphic_hl_pane_g_ParamLimits

0xfc02,	// (0x00019492) list_single_graphic_hl_pane_g

0xb052,	// (0x000148e2) list_single_graphic_hl_pane_t1_ParamLimits

0xb052,	// (0x000148e2) list_single_graphic_hl_pane_t1

0xd760,	// (0x00016ff0) aid_size_min_hl_cp2

0xd769,	// (0x00016ff9) list_highlight_pane_cp34_cp2_ParamLimits

0xd769,	// (0x00016ff9) list_highlight_pane_cp34_cp2

0xd733,	// (0x00016fc3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xd733,	// (0x00016fc3) list_single_graphic_hl_pane_g1_cp2

0xd776,	// (0x00017006) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xd776,	// (0x00017006) list_single_graphic_hl_pane_g2_cp2

0xd782,	// (0x00017012) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd782,	// (0x00017012) list_single_graphic_hl_pane_g3_cp2

0x9958,	// (0x000131e8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9958,	// (0x000131e8) list_single_graphic_hl_pane_g4_cp2

0xd74c,	// (0x00016fdc) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd74c,	// (0x00016fdc) list_single_graphic_hl_pane_g5_cp2

0x637f,	// (0x0000fc0f) control_pane_g4_ParamLimits

0x637f,	// (0x0000fc0f) control_pane_g4

0x9d65,	// (0x000135f5) bg_popup_sub_pane_cp10_ParamLimits

0xcda8,	// (0x00016638) list_choice_list_pane_ParamLimits

0xcdb7,	// (0x00016647) scroll_pane_cp23

0x8073,	// (0x00011903) bg_popup_preview_window_pane_cp02_ParamLimits

0xd3a4,	// (0x00016c34) list_preview_fixed_pane_ParamLimits

0xd3ba,	// (0x00016c4a) list_preview_fixed_pane_cp_ParamLimits

0xd3ba,	// (0x00016c4a) list_preview_fixed_pane_cp

0xd3c6,	// (0x00016c56) popup_preview_fixed_window_g1_ParamLimits

0xd3c6,	// (0x00016c56) popup_preview_fixed_window_g1

0xd3d2,	// (0x00016c62) popup_preview_fixed_window_g2_ParamLimits

0xd3d2,	// (0x00016c62) popup_preview_fixed_window_g2

0x0002,

0xfb8a,	// (0x0001941a) popup_preview_fixed_window_g_ParamLimits

0xfb8a,	// (0x0001941a) popup_preview_fixed_window_g

0x5fac,	// (0x0000f83c) aid_navi_side_left_pane_ParamLimits

0x5fc1,	// (0x0000f851) aid_navi_side_right_pane_ParamLimits

0x5fd9,	// (0x0000f869) navi_icon_pane_stacon_ParamLimits

0x5fed,	// (0x0000f87d) navi_navi_pane_stacon_ParamLimits

0x5fd9,	// (0x0000f869) navi_text_pane_stacon_ParamLimits

0x5be4,	// (0x0000f474) main_text_info_pane

0xd7a6,	// (0x00017036) listscroll_text_info_pane

0xd7ae,	// (0x0001703e) list_text_info_pane_ParamLimits

0xd7ae,	// (0x0001703e) list_text_info_pane

0xd7bd,	// (0x0001704d) scroll_pane_cp24_ParamLimits

0xd7bd,	// (0x0001704d) scroll_pane_cp24

0xd7db,	// (0x0001706b) list_text_info_pane_t1_ParamLimits

0xd7db,	// (0x0001706b) list_text_info_pane_t1

0x64e5,	// (0x0000fd75) popup_fast_swap2_window_ParamLimits

0x64e5,	// (0x0000fd75) popup_fast_swap2_window

0xd814,	// (0x000170a4) aid_size_cell_fast2

0x7cdc,	// (0x0001156c) bg_popup_window_pane_cp17

0xa806,	// (0x00014096) heading_pane_cp2

0x82b3,	// (0x00011b43) listscroll_fast2_pane

0xd81e,	// (0x000170ae) grid_fast2_pane

0xd828,	// (0x000170b8) listscroll_fast2_pane_g1

0xd830,	// (0x000170c0) listscroll_fast2_pane_g2

0x0001,

0xfc0d,	// (0x0001949d) listscroll_fast2_pane_g

0x8ea0,	// (0x00012730) scroll_pane_cp26

0xd83a,	// (0x000170ca) cell_fast2_pane_ParamLimits

0xd83a,	// (0x000170ca) cell_fast2_pane

0xd84f,	// (0x000170df) cell_fast2_pane_g1

0xd858,	// (0x000170e8) cell_fast2_pane_g2

0xd861,	// (0x000170f1) cell_fast2_pane_g3

0x0002,

0xfc12,	// (0x000194a2) cell_fast2_pane_g

0x8399,	// (0x00011c29) grid_highlight_pane_cp9

0x64af,	// (0x0000fd3f) main_eswt_pane_ParamLimits

0x64af,	// (0x0000fd3f) main_eswt_pane

0xd7d2,	// (0x00017062) list_single_text_info_pane

0xd869,	// (0x000170f9) eswt_ctrl_button_pane

0xd869,	// (0x000170f9) eswt_ctrl_canvas_pane

0xd871,	// (0x00017101) eswt_ctrl_combo_pane

0xd869,	// (0x000170f9) eswt_ctrl_default_pane

0xd869,	// (0x000170f9) eswt_ctrl_label_pane

0xd879,	// (0x00017109) eswt_ctrl_wait_pane

0xd881,	// (0x00017111) eswt_shell_pane

0x7cdc,	// (0x0001156c) listscroll_eswt_app_pane

0xd8a1,	// (0x00017131) popup_eswt_tasktip_window_ParamLimits

0xd8a1,	// (0x00017131) popup_eswt_tasktip_window

0xa3b7,	// (0x00013c47) bg_popup_window_pane_cp18

0xd8b2,	// (0x00017142) eswt_control_pane_g1_ParamLimits

0xd8b2,	// (0x00017142) eswt_control_pane_g1

0xd8bf,	// (0x0001714f) eswt_control_pane_g2_ParamLimits

0xd8bf,	// (0x0001714f) eswt_control_pane_g2

0xd8cc,	// (0x0001715c) eswt_control_pane_g3_ParamLimits

0xd8cc,	// (0x0001715c) eswt_control_pane_g3

0xd8d9,	// (0x00017169) eswt_control_pane_g4_ParamLimits

0xd8d9,	// (0x00017169) eswt_control_pane_g4

0x0003,

0xfc19,	// (0x000194a9) eswt_control_pane_g_ParamLimits

0xfc19,	// (0x000194a9) eswt_control_pane_g

0x8ba9,	// (0x00012439) bg_button_pane_ParamLimits

0x8ba9,	// (0x00012439) bg_button_pane

0x83ae,	// (0x00011c3e) common_borders_pane_copy2_ParamLimits

0x83ae,	// (0x00011c3e) common_borders_pane_copy2

0xd8e6,	// (0x00017176) control_button_pane_g1_ParamLimits

0xd8e6,	// (0x00017176) control_button_pane_g1

0xd8f2,	// (0x00017182) control_button_pane_g2_ParamLimits

0xd8f2,	// (0x00017182) control_button_pane_g2

0xd8fe,	// (0x0001718e) control_button_pane_g3_ParamLimits

0xd8fe,	// (0x0001718e) control_button_pane_g3

0x0002,

0xfc22,	// (0x000194b2) control_button_pane_g_ParamLimits

0xfc22,	// (0x000194b2) control_button_pane_g

0xd912,	// (0x000171a2) control_button_pane_t1

0xd920,	// (0x000171b0) control_button_pane_t2

0x0001,

0xfc29,	// (0x000194b9) control_button_pane_t

0xa29d,	// (0x00013b2d) bg_button_pane_g1

0xa2ad,	// (0x00013b3d) bg_button_pane_g2

0xa2a5,	// (0x00013b35) bg_button_pane_g3

0xa2bd,	// (0x00013b4d) bg_button_pane_g4

0xa2b5,	// (0x00013b45) bg_button_pane_g5

0xa2c5,	// (0x00013b55) bg_button_pane_g6

0xa2cd,	// (0x00013b5d) bg_button_pane_g7

0xa2dd,	// (0x00013b6d) bg_button_pane_g8

0xa2d5,	// (0x00013b65) bg_button_pane_g9

0x0008,

0xf867,	// (0x000190f7) bg_button_pane_g

0xcd63,	// (0x000165f3) common_borders_pane_ParamLimits

0xcd63,	// (0x000165f3) common_borders_pane

0xd8b2,	// (0x00017142) eswt_control_pane_g1_copy1_ParamLimits

0xd8b2,	// (0x00017142) eswt_control_pane_g1_copy1

0xd8bf,	// (0x0001714f) eswt_control_pane_g2_copy1_ParamLimits

0xd8bf,	// (0x0001714f) eswt_control_pane_g2_copy1

0xd8cc,	// (0x0001715c) eswt_control_pane_g3_copy1_ParamLimits

0xd8cc,	// (0x0001715c) eswt_control_pane_g3_copy1

0xd8d9,	// (0x00017169) eswt_control_pane_g4_copy1_ParamLimits

0xd8d9,	// (0x00017169) eswt_control_pane_g4_copy1

0xcd9e,	// (0x0001662e) bg_eswt_ctrl_canvas_pane_g1

0xcd63,	// (0x000165f3) common_borders_pane_cp2_ParamLimits

0xcd63,	// (0x000165f3) common_borders_pane_cp2

0xcd63,	// (0x000165f3) common_borders_pane_cp3_ParamLimits

0xcd63,	// (0x000165f3) common_borders_pane_cp3

0xd92e,	// (0x000171be) separator_horizontal_pane

0xd936,	// (0x000171c6) separator_vertical_pane

0xd8b2,	// (0x00017142) eswt_control_pane_g1_copy2_ParamLimits

0xd8b2,	// (0x00017142) eswt_control_pane_g1_copy2

0xd8bf,	// (0x0001714f) eswt_control_pane_g2_copy2_ParamLimits

0xd8bf,	// (0x0001714f) eswt_control_pane_g2_copy2

0xd8cc,	// (0x0001715c) eswt_control_pane_g3_copy2_ParamLimits

0xd8cc,	// (0x0001715c) eswt_control_pane_g3_copy2

0xd8d9,	// (0x00017169) eswt_control_pane_g4_copy2_ParamLimits

0xd8d9,	// (0x00017169) eswt_control_pane_g4_copy2

0x7cdc,	// (0x0001156c) common_borders_pane_cp4

0xd93f,	// (0x000171cf) separator_horizontal_pane_g1

0xd948,	// (0x000171d8) separator_horizontal_pane_g2

0xd951,	// (0x000171e1) separator_horizontal_pane_g3

0x0002,

0xfc2e,	// (0x000194be) separator_horizontal_pane_g

0xd8b2,	// (0x00017142) eswt_control_pane_g1_copy3_ParamLimits

0xd8b2,	// (0x00017142) eswt_control_pane_g1_copy3

0xd8bf,	// (0x0001714f) eswt_control_pane_g2_copy3_ParamLimits

0xd8bf,	// (0x0001714f) eswt_control_pane_g2_copy3

0xd8cc,	// (0x0001715c) eswt_control_pane_g3_copy3_ParamLimits

0xd8cc,	// (0x0001715c) eswt_control_pane_g3_copy3

0xd8d9,	// (0x00017169) eswt_control_pane_g4_copy3_ParamLimits

0xd8d9,	// (0x00017169) eswt_control_pane_g4_copy3

0x7cdc,	// (0x0001156c) common_borders_pane_cp5

0xd95a,	// (0x000171ea) separator_vertical_pane_g1

0xd963,	// (0x000171f3) separator_vertical_pane_g2

0xd96c,	// (0x000171fc) separator_vertical_pane_g3

0x0002,

0xfc35,	// (0x000194c5) separator_vertical_pane_g

0xd8b2,	// (0x00017142) eswt_control_pane_g1_copy4_ParamLimits

0xd8b2,	// (0x00017142) eswt_control_pane_g1_copy4

0xd8bf,	// (0x0001714f) eswt_control_pane_g2_copy4_ParamLimits

0xd8bf,	// (0x0001714f) eswt_control_pane_g2_copy4

0xd8cc,	// (0x0001715c) eswt_control_pane_g3_copy4_ParamLimits

0xd8cc,	// (0x0001715c) eswt_control_pane_g3_copy4

0xd8d9,	// (0x00017169) eswt_control_pane_g4_copy4_ParamLimits

0xd8d9,	// (0x00017169) eswt_control_pane_g4_copy4

0xd975,	// (0x00017205) eswt_ctrl_combo_button_pane

0xd97d,	// (0x0001720d) eswt_ctrl_input_pane

0xd985,	// (0x00017215) popup_choice_list_window_cp70

0xd98d,	// (0x0001721d) eswt_ctrl_input_pane_t1

0x7cdc,	// (0x0001156c) input_focus_pane_cp70

0xcd63,	// (0x000165f3) bg_button_pane_cp70_ParamLimits

0xcd63,	// (0x000165f3) bg_button_pane_cp70

0xd99b,	// (0x0001722b) eswt_ctrl_combo_button_pane_g1

0xd9a3,	// (0x00017233) wait_bar_pane_cp70

0xa3b7,	// (0x00013c47) bg_popup_window_pane_cp70_ParamLimits

0xa3b7,	// (0x00013c47) bg_popup_window_pane_cp70

0xd9ab,	// (0x0001723b) popup_eswt_tasktip_window_t1

0xd9c1,	// (0x00017251) wait_bar_pane_cp71_ParamLimits

0xd9c1,	// (0x00017251) wait_bar_pane_cp71

0xd9cd,	// (0x0001725d) grid_eswt_app_pane

0x91bd,	// (0x00012a4d) scroll_pane_cp70

0xd9d6,	// (0x00017266) cell_eswt_app_pane_ParamLimits

0xd9d6,	// (0x00017266) cell_eswt_app_pane

0xda0a,	// (0x0001729a) cell_eswt_app_pane_g1_ParamLimits

0xda0a,	// (0x0001729a) cell_eswt_app_pane_g1

0xda39,	// (0x000172c9) cell_eswt_app_pane_g2_ParamLimits

0xda39,	// (0x000172c9) cell_eswt_app_pane_g2

0x0001,

0xfc3c,	// (0x000194cc) cell_eswt_app_pane_g_ParamLimits

0xfc3c,	// (0x000194cc) cell_eswt_app_pane_g

0xda62,	// (0x000172f2) cell_eswt_app_pane_t1_ParamLimits

0xda62,	// (0x000172f2) cell_eswt_app_pane_t1

0xda94,	// (0x00017324) grid_highlight_pane_cp70_ParamLimits

0xda94,	// (0x00017324) grid_highlight_pane_cp70

0x98f4,	// (0x00013184) set_content_pane_g1

0x9cbd,	// (0x0001354d) status_small_volume_pane

0x732f,	// (0x00010bbf) status_small_volume_pane_g1

0x7337,	// (0x00010bc7) volume_small2_pane

0x7340,	// (0x00010bd0) volume_small2_pane_g1

0x7349,	// (0x00010bd9) volume_small2_pane_g2

0x7352,	// (0x00010be2) volume_small2_pane_g3

0x735b,	// (0x00010beb) volume_small2_pane_g4

0x7364,	// (0x00010bf4) volume_small2_pane_g5

0x736d,	// (0x00010bfd) volume_small2_pane_g6

0x7376,	// (0x00010c06) volume_small2_pane_g7

0x737f,	// (0x00010c0f) volume_small2_pane_g8

0x7388,	// (0x00010c18) volume_small2_pane_g9

0x7391,	// (0x00010c21) volume_small2_pane_g10

0x0009,

0xfc41,	// (0x000194d1) volume_small2_pane_g

0xd161,	// (0x000169f1) fep_vkb_top_text_pane_g1_ParamLimits

0xd17c,	// (0x00016a0c) fep_vkb_top_text_pane_t1_ParamLimits

0xd3de,	// (0x00016c6e) popup_preview_fixed_window_g3_ParamLimits

0xd3de,	// (0x00016c6e) popup_preview_fixed_window_g3

0x6984,	// (0x00010214) popup_toolbar_trans_pane

0xb78e,	// (0x0001501e) aid_height_set_list_ParamLimits

0xb79f,	// (0x0001502f) aid_size_parent_ParamLimits

0x9d65,	// (0x000135f5) list_highlight_pane_cp2_ParamLimits

0x98f4,	// (0x00013184) set_content_pane_g1_ParamLimits

0xba5c,	// (0x000152ec) list_single_image_pane_ParamLimits

0xba5c,	// (0x000152ec) list_single_image_pane

0xdaa0,	// (0x00017330) aid_size_cell_image_ParamLimits

0xdaa0,	// (0x00017330) aid_size_cell_image

0xdaad,	// (0x0001733d) grid_single_image_pane_ParamLimits

0xdaad,	// (0x0001733d) grid_single_image_pane

0x8bcf,	// (0x0001245f) list_single_image_pane_g1_ParamLimits

0x8bcf,	// (0x0001245f) list_single_image_pane_g1

0x8bdb,	// (0x0001246b) list_single_image_pane_g2_ParamLimits

0x8bdb,	// (0x0001246b) list_single_image_pane_g2

0x0001,

0xfc56,	// (0x000194e6) list_single_image_pane_g_ParamLimits

0xfc56,	// (0x000194e6) list_single_image_pane_g

0xdab9,	// (0x00017349) list_single_image_pane_t1_ParamLimits

0xdab9,	// (0x00017349) list_single_image_pane_t1

0xdacf,	// (0x0001735f) cell_image_list_pane_ParamLimits

0xdacf,	// (0x0001735f) cell_image_list_pane

0xdae3,	// (0x00017373) cell_image_list_pane_g1

0xdaec,	// (0x0001737c) cell_image_list_pane_g2

0x0001,

0xfc5b,	// (0x000194eb) cell_image_list_pane_g

0xdaf5,	// (0x00017385) aid_size_cell_tb_trans_pane

0x8ba9,	// (0x00012439) bg_tb_trans_pane

0xdb07,	// (0x00017397) grid_tb_trans_pane

0xa29d,	// (0x00013b2d) bg_tb_trans_pane_g1

0xa2ad,	// (0x00013b3d) bg_tb_trans_pane_g2

0xa2a5,	// (0x00013b35) bg_tb_trans_pane_g3

0xa2bd,	// (0x00013b4d) bg_tb_trans_pane_g4

0xa2b5,	// (0x00013b45) bg_tb_trans_pane_g5

0xa2dd,	// (0x00013b6d) bg_tb_trans_pane_g6

0xa2d5,	// (0x00013b65) bg_tb_trans_pane_g7

0xa2c5,	// (0x00013b55) bg_tb_trans_pane_g8

0xa2cd,	// (0x00013b5d) bg_tb_trans_pane_g9

0x0008,

0xfc60,	// (0x000194f0) bg_tb_trans_pane_g

0xdb1b,	// (0x000173ab) cell_toolbar_trans_pane_ParamLimits

0xdb1b,	// (0x000173ab) cell_toolbar_trans_pane

0xcd9e,	// (0x0001662e) cell_toolbar_trans_pane_g1

0xc8ea,	// (0x0001617a) list_form2_midp_pane_t1

0xc8f8,	// (0x00016188) list_form2_midp_pane_t2

0x0001,

0xfafd,	// (0x0001938d) list_form2_midp_pane_t

0xc906,	// (0x00016196) scroll_pane_cp51_ParamLimits

0xcb09,	// (0x00016399) form2_midp_wait_pane_g1

0xcb12,	// (0x000163a2) form2_midp_wait_pane_g2

0xcb1b,	// (0x000163ab) form2_midp_wait_pane_g3

0x0002,

0xfb12,	// (0x000193a2) form2_midp_wait_pane_g

0x7dd0,	// (0x00011660) list_highlight_pane_cp21_ParamLimits

0xcb6a,	// (0x000163fa) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xcb79,	// (0x00016409) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb9c8,	// (0x00015258) list_single_2graphic_im_pane_ParamLimits

0xb9c8,	// (0x00015258) list_single_2graphic_im_pane

0xdb41,	// (0x000173d1) list_single_2graphic_im_pane_g1_ParamLimits

0xdb41,	// (0x000173d1) list_single_2graphic_im_pane_g1

0xdb52,	// (0x000173e2) list_single_2graphic_im_pane_g2_ParamLimits

0xdb52,	// (0x000173e2) list_single_2graphic_im_pane_g2

0xdb5e,	// (0x000173ee) list_single_2graphic_im_pane_g3_ParamLimits

0xdb5e,	// (0x000173ee) list_single_2graphic_im_pane_g3

0x0003,

0xfc73,	// (0x00019503) list_single_2graphic_im_pane_g_ParamLimits

0xfc73,	// (0x00019503) list_single_2graphic_im_pane_g

0xdb7e,	// (0x0001740e) list_single_2graphic_im_pane_t1_ParamLimits

0xdb7e,	// (0x0001740e) list_single_2graphic_im_pane_t1

0xd3ea,	// (0x00016c7a) list_single_graphic_2heading_pane_fp_ParamLimits

0xd3ea,	// (0x00016c7a) list_single_graphic_2heading_pane_fp

0xd430,	// (0x00016cc0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd430,	// (0x00016cc0) list_single_graphic_2heading_pane_fp_g1

0xd401,	// (0x00016c91) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd401,	// (0x00016c91) list_single_graphic_2heading_pane_fp_g2

0x8bcf,	// (0x0001245f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8bcf,	// (0x0001245f) list_single_graphic_2heading_pane_fp_g3

0x8bdb,	// (0x0001246b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8bdb,	// (0x0001246b) list_single_graphic_2heading_pane_fp_g4

0xd40d,	// (0x00016c9d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd40d,	// (0x00016c9d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x0001942a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0001942a) list_single_graphic_2heading_pane_fp_g

0xdbaf,	// (0x0001743f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xdbaf,	// (0x0001743f) list_single_graphic_2heading_pane_fp_t1

0xd468,	// (0x00016cf8) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd468,	// (0x00016cf8) list_single_graphic_2heading_pane_fp_t2

0xdbc5,	// (0x00017455) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdbc5,	// (0x00017455) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7c,	// (0x0001950c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7c,	// (0x0001950c) list_single_graphic_2heading_pane_fp_t

0xce20,	// (0x000166b0) fep_hwr_write_pane_g5_ParamLimits

0xce20,	// (0x000166b0) fep_hwr_write_pane_g5

0xce2c,	// (0x000166bc) fep_hwr_write_pane_g6_ParamLimits

0xce2c,	// (0x000166bc) fep_hwr_write_pane_g6

0xd881,	// (0x00017111) eswt_shell_pane_ParamLimits

0xa3b7,	// (0x00013c47) bg_popup_window_pane_cp18_ParamLimits

0xb6c5,	// (0x00014f55) heading_pane_cp70

0xd9ab,	// (0x0001723b) popup_eswt_tasktip_window_t1_ParamLimits

0x9de4,	// (0x00013674) aid_touch_tab_arrow_left

0x9df3,	// (0x00013683) aid_touch_tab_arrow_right

0x7d18,	// (0x000115a8) title_pane_g3_ParamLimits

0x7d18,	// (0x000115a8) title_pane_g3

0x8a96,	// (0x00012326) set_value_pane_g1

0x6984,	// (0x00010214) popup_toolbar_trans_pane_ParamLimits

0xdaf5,	// (0x00017385) aid_size_cell_tb_trans_pane_ParamLimits

0x8ba9,	// (0x00012439) bg_tb_trans_pane_ParamLimits

0xdb07,	// (0x00017397) grid_tb_trans_pane_ParamLimits

0x8073,	// (0x00011903) cont_note_pane_ParamLimits

0x8073,	// (0x00011903) cont_note_pane

0x83ae,	// (0x00011c3e) cont_snote2_single_text_pane_ParamLimits

0x83ae,	// (0x00011c3e) cont_snote2_single_text_pane

0x83ae,	// (0x00011c3e) cont_snote2_single_graphic_pane_ParamLimits

0x83ae,	// (0x00011c3e) cont_snote2_single_graphic_pane

0xaa1c,	// (0x000142ac) cont_note_wait_pane_ParamLimits

0xaa1c,	// (0x000142ac) cont_note_wait_pane

0xaa1c,	// (0x000142ac) cont_note_image_pane_ParamLimits

0xaa1c,	// (0x000142ac) cont_note_image_pane

0xdbdb,	// (0x0001746b) popup_note2_window_g1_ParamLimits

0xdbdb,	// (0x0001746b) popup_note2_window_g1

0xdc0c,	// (0x0001749c) popup_note2_window_t1_ParamLimits

0xdc0c,	// (0x0001749c) popup_note2_window_t1

0xdc51,	// (0x000174e1) popup_note2_window_t2_ParamLimits

0xdc51,	// (0x000174e1) popup_note2_window_t2

0xdc96,	// (0x00017526) popup_note2_window_t3_ParamLimits

0xdc96,	// (0x00017526) popup_note2_window_t3

0xdcdb,	// (0x0001756b) popup_note2_window_t4_ParamLimits

0xdcdb,	// (0x0001756b) popup_note2_window_t4

0x80eb,	// (0x0001197b) popup_note2_window_t5_ParamLimits

0x80eb,	// (0x0001197b) popup_note2_window_t5

0x0004,

0xfc88,	// (0x00019518) popup_note2_window_t_ParamLimits

0xfc88,	// (0x00019518) popup_note2_window_t

0xdd0a,	// (0x0001759a) popup_note2_image_window_g1_ParamLimits

0xdd0a,	// (0x0001759a) popup_note2_image_window_g1

0xdd16,	// (0x000175a6) popup_note2_image_window_g2_ParamLimits

0xdd16,	// (0x000175a6) popup_note2_image_window_g2

0x0001,

0xfc93,	// (0x00019523) popup_note2_image_window_g_ParamLimits

0xfc93,	// (0x00019523) popup_note2_image_window_g

0xdd28,	// (0x000175b8) popup_note2_image_window_t1_ParamLimits

0xdd28,	// (0x000175b8) popup_note2_image_window_t1

0xdd40,	// (0x000175d0) popup_note2_image_window_t2_ParamLimits

0xdd40,	// (0x000175d0) popup_note2_image_window_t2

0xdd58,	// (0x000175e8) popup_note2_image_window_t3_ParamLimits

0xdd58,	// (0x000175e8) popup_note2_image_window_t3

0x0002,

0xfc98,	// (0x00019528) popup_note2_image_window_t_ParamLimits

0xfc98,	// (0x00019528) popup_note2_image_window_t

0xaa2a,	// (0x000142ba) popup_note2_wait_window_g1_ParamLimits

0xaa2a,	// (0x000142ba) popup_note2_wait_window_g1

0xaa36,	// (0x000142c6) popup_note2_wait_window_g2_ParamLimits

0xaa36,	// (0x000142c6) popup_note2_wait_window_g2

0xaa42,	// (0x000142d2) popup_note2_wait_window_g3_ParamLimits

0xaa42,	// (0x000142d2) popup_note2_wait_window_g3

0x0002,

0xf849,	// (0x000190d9) popup_note2_wait_window_g_ParamLimits

0xf849,	// (0x000190d9) popup_note2_wait_window_g

0xdd74,	// (0x00017604) popup_note2_wait_window_t1_ParamLimits

0xdd74,	// (0x00017604) popup_note2_wait_window_t1

0xdd92,	// (0x00017622) popup_note2_wait_window_t2_ParamLimits

0xdd92,	// (0x00017622) popup_note2_wait_window_t2

0xddb0,	// (0x00017640) popup_note2_wait_window_t3_ParamLimits

0xddb0,	// (0x00017640) popup_note2_wait_window_t3

0xddc2,	// (0x00017652) popup_note2_wait_window_t4_ParamLimits

0xddc2,	// (0x00017652) popup_note2_wait_window_t4

0x0003,

0xfc9f,	// (0x0001952f) popup_note2_wait_window_t_ParamLimits

0xfc9f,	// (0x0001952f) popup_note2_wait_window_t

0xddd4,	// (0x00017664) wait_bar2_pane_ParamLimits

0xddd4,	// (0x00017664) wait_bar2_pane

0xddec,	// (0x0001767c) popup_snote2_single_text_window_g1_ParamLimits

0xddec,	// (0x0001767c) popup_snote2_single_text_window_g1

0xde14,	// (0x000176a4) popup_snote2_single_text_window_t1_ParamLimits

0xde14,	// (0x000176a4) popup_snote2_single_text_window_t1

0xde60,	// (0x000176f0) popup_snote2_single_text_window_t2_ParamLimits

0xde60,	// (0x000176f0) popup_snote2_single_text_window_t2

0xdeac,	// (0x0001773c) popup_snote2_single_text_window_t3_ParamLimits

0xdeac,	// (0x0001773c) popup_snote2_single_text_window_t3

0xdeed,	// (0x0001777d) popup_snote2_single_text_window_t4_ParamLimits

0xdeed,	// (0x0001777d) popup_snote2_single_text_window_t4

0xdf23,	// (0x000177b3) popup_snote2_single_text_window_t5_ParamLimits

0xdf23,	// (0x000177b3) popup_snote2_single_text_window_t5

0x0004,

0xfca8,	// (0x00019538) popup_snote2_single_text_window_t_ParamLimits

0xfca8,	// (0x00019538) popup_snote2_single_text_window_t

0xdf4e,	// (0x000177de) popup_snote2_single_graphic_window_g1_ParamLimits

0xdf4e,	// (0x000177de) popup_snote2_single_graphic_window_g1

0xdf76,	// (0x00017806) popup_snote2_single_graphic_window_g2_ParamLimits

0xdf76,	// (0x00017806) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb3,	// (0x00019543) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb3,	// (0x00019543) popup_snote2_single_graphic_window_g

0xdf9e,	// (0x0001782e) popup_snote2_single_graphic_window_t1_ParamLimits

0xdf9e,	// (0x0001782e) popup_snote2_single_graphic_window_t1

0xdfea,	// (0x0001787a) popup_snote2_single_graphic_window_t2_ParamLimits

0xdfea,	// (0x0001787a) popup_snote2_single_graphic_window_t2

0xdeac,	// (0x0001773c) popup_snote2_single_graphic_window_t3_ParamLimits

0xdeac,	// (0x0001773c) popup_snote2_single_graphic_window_t3

0xdeed,	// (0x0001777d) popup_snote2_single_graphic_window_t4_ParamLimits

0xdeed,	// (0x0001777d) popup_snote2_single_graphic_window_t4

0xdf23,	// (0x000177b3) popup_snote2_single_graphic_window_t5_ParamLimits

0xdf23,	// (0x000177b3) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb8,	// (0x00019548) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb8,	// (0x00019548) popup_snote2_single_graphic_window_t

0xc7bf,	// (0x0001604f) clock_nsta_pane_cp2_t1

0xc7bf,	// (0x0001604f) clock_nsta_pane_cp2_t2

0x0001,

0xfad3,	// (0x00019363) clock_nsta_pane_cp2_t

0x8bc3,	// (0x00012453) form_field_data_wide_pane_g1_ParamLimits

0x8bcf,	// (0x0001245f) form_field_data_wide_pane_g2_ParamLimits

0x8bcf,	// (0x0001245f) form_field_data_wide_pane_g2

0x8bdb,	// (0x0001246b) form_field_data_wide_pane_g3_ParamLimits

0x8bdb,	// (0x0001246b) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x00018f0c) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x00018f0c) form_field_data_wide_pane_g

0xc698,	// (0x00015f28) grid_touch_3_pane_ParamLimits

0xc698,	// (0x00015f28) grid_touch_3_pane

0xe036,	// (0x000178c6) cell_touch_3_pane_ParamLimits

0xe036,	// (0x000178c6) cell_touch_3_pane

0xcd9e,	// (0x0001662e) cell_touch_3_pane_g1

0xcd9e,	// (0x0001662e) cell_touch_3_pane_g2

0x0001,

0xfb58,	// (0x000193e8) cell_touch_3_pane_g

0x811d,	// (0x000119ad) cont_query_data_pane

0x8125,	// (0x000119b5) cont_query_data_pane_cp1

0xe065,	// (0x000178f5) button_value_adjust_pane_cp7

0xe06d,	// (0x000178fd) query_popup_pane_cp3

0x9473,	// (0x00012d03) bg_popup_sub_pane_cp22_ParamLimits

0x60ee,	// (0x0000f97e) navi_navi_volume_pane_cp2

0x6109,	// (0x0000f999) popup_side_volume_key_window_g2

0x6118,	// (0x0000f9a8) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x00018fa2) popup_side_volume_key_window_g

0x6135,	// (0x0000f9c5) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x00018fa9) popup_side_volume_key_window_t

0x97be,	// (0x0001304e) popup_side_volume_key_window_ParamLimits

0x87c1,	// (0x00012051) list_double_graphic_pane_g4_ParamLimits

0x87c1,	// (0x00012051) list_double_graphic_pane_g4

0xba13,	// (0x000152a3) list_single_2heading_msg_pane_ParamLimits

0xba13,	// (0x000152a3) list_single_2heading_msg_pane

0xe09c,	// (0x0001792c) list_single_2heading_msg_pane_g1_ParamLimits

0xe09c,	// (0x0001792c) list_single_2heading_msg_pane_g1

0x85f0,	// (0x00011e80) list_single_2heading_msg_pane_g2_ParamLimits

0x85f0,	// (0x00011e80) list_single_2heading_msg_pane_g2

0xe0a8,	// (0x00017938) list_single_2heading_msg_pane_g3_ParamLimits

0xe0a8,	// (0x00017938) list_single_2heading_msg_pane_g3

0xe0b4,	// (0x00017944) list_single_2heading_msg_pane_g4_ParamLimits

0xe0b4,	// (0x00017944) list_single_2heading_msg_pane_g4

0x0003,

0xfcc3,	// (0x00019553) list_single_2heading_msg_pane_g_ParamLimits

0xfcc3,	// (0x00019553) list_single_2heading_msg_pane_g

0xe0cc,	// (0x0001795c) list_single_2heading_msg_pane_t1_ParamLimits

0xe0cc,	// (0x0001795c) list_single_2heading_msg_pane_t1

0xe0f4,	// (0x00017984) list_single_2heading_msg_pane_t2_ParamLimits

0xe0f4,	// (0x00017984) list_single_2heading_msg_pane_t2

0xe128,	// (0x000179b8) list_single_2heading_msg_pane_t3_ParamLimits

0xe128,	// (0x000179b8) list_single_2heading_msg_pane_t3

0xe161,	// (0x000179f1) list_single_2heading_msg_pane_t4_ParamLimits

0xe161,	// (0x000179f1) list_single_2heading_msg_pane_t4

0x0003,

0xfccc,	// (0x0001955c) list_single_2heading_msg_pane_t_ParamLimits

0xfccc,	// (0x0001955c) list_single_2heading_msg_pane_t

0x7d24,	// (0x000115b4) title_pane_g4_ParamLimits

0x7d24,	// (0x000115b4) title_pane_g4

0x5efc,	// (0x0000f78c) title_pane_stacon_g3_ParamLimits

0x5efc,	// (0x0000f78c) title_pane_stacon_g3

0xdb72,	// (0x00017402) list_single_2graphic_im_pane_g4_ParamLimits

0xdb72,	// (0x00017402) list_single_2graphic_im_pane_g4

0xb46b,	// (0x00014cfb) popup_side_volume_key_window_cp

0xbdd0,	// (0x00015660) main_idle_act2_pane_t1

0x6ade,	// (0x0001036e) toolbar_button_pane_g10

0x85a6,	// (0x00011e36) popup_toolbar_window_cp1

0xc7b0,	// (0x00016040) clock_nsta_pane_cp_t1

0xc7b0,	// (0x00016040) clock_nsta_pane_cp_t2

0x0001,

0xface,	// (0x0001935e) clock_nsta_pane_cp_t

0x60ee,	// (0x0000f97e) navi_navi_volume_pane_cp2_ParamLimits

0x60fd,	// (0x0000f98d) popup_side_volume_key_window_g1_ParamLimits

0x6109,	// (0x0000f999) popup_side_volume_key_window_g2_ParamLimits

0x6118,	// (0x0000f9a8) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x00018fa2) popup_side_volume_key_window_g_ParamLimits

0x6f9b,	// (0x0001082b) fep_hwr_aid_pane

0x7042,	// (0x000108d2) bg_fep_hwr_top_pane_g4_ParamLimits

0xcdf0,	// (0x00016680) fep_hwr_top_pane_g1_ParamLimits

0xce02,	// (0x00016692) fep_hwr_top_pane_g2_ParamLimits

0x7062,	// (0x000108f2) fep_hwr_top_pane_g3_ParamLimits

0xfb23,	// (0x000193b3) fep_hwr_top_pane_g_ParamLimits

0x7077,	// (0x00010907) fep_hwr_top_text_pane_ParamLimits

0xb22c,	// (0x00014abc) aid_touch_tab_arrow_arrow_2

0xb235,	// (0x00014ac5) aid_touch_tab_arrow_left_2

0x6faf,	// (0x0001083f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6fe6,	// (0x00010876) fep_hwr_prediction_pane

0xcf69,	// (0x000167f9) fep_vkb_prediction_pane

0xd06d,	// (0x000168fd) fep_vkb_side_pane_g3_ParamLimits

0xd06d,	// (0x000168fd) fep_vkb_side_pane_g3

0x71f2,	// (0x00010a82) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x725e,	// (0x00010aee) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x726b,	// (0x00010afb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd2,	// (0x00019462) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x739a,	// (0x00010c2a) fep_hwr_prediction_pane_g1

0x73a4,	// (0x00010c34) fep_hwr_prediction_pane_g2

0x73ac,	// (0x00010c3c) fep_hwr_prediction_pane_g3

0x73b4,	// (0x00010c44) fep_hwr_prediction_pane_g4

0x0003,

0xfcd5,	// (0x00019565) fep_hwr_prediction_pane_g

0xe186,	// (0x00017a16) fep_vkb_prediction_pane_g1

0xe190,	// (0x00017a20) fep_vkb_prediction_pane_g2

0xe198,	// (0x00017a28) fep_vkb_prediction_pane_g3

0xe1a0,	// (0x00017a30) fep_vkb_prediction_pane_g4

0x0003,

0xfcde,	// (0x0001956e) fep_vkb_prediction_pane_g

0x6dca,	// (0x0001065a) slider_set_pane_g3

0x6dde,	// (0x0001066e) slider_set_pane_g4

0x6df6,	// (0x00010686) slider_set_pane_g5

0x6dca,	// (0x0001065a) slider_set_pane_g6

0x6e0c,	// (0x0001069c) slider_set_pane_g7

0xb8fc,	// (0x0001518c) slider_form_pane_g3

0xb905,	// (0x00015195) slider_form_pane_g4

0xb90d,	// (0x0001519d) slider_form_pane_g5

0xb8fc,	// (0x0001518c) slider_form_pane_g6

0xb915,	// (0x000151a5) slider_form_pane_g7

0xc0a8,	// (0x00015938) slider_set_pane_vc_g3

0xc0b1,	// (0x00015941) slider_set_pane_vc_g4

0xc0ba,	// (0x0001594a) slider_set_pane_vc_g5

0xc0a8,	// (0x00015938) slider_set_pane_vc_g6

0xc0c3,	// (0x00015953) slider_set_pane_vc_g7

0xc46d,	// (0x00015cfd) slider_form_pane_vc_g1

0xc476,	// (0x00015d06) slider_form_pane_vc_g2

0xc47f,	// (0x00015d0f) slider_form_pane_vc_g3

0xc46d,	// (0x00015cfd) slider_form_pane_vc_g4

0xc488,	// (0x00015d18) slider_form_pane_vc_g5

0x0004,

0xfaa0,	// (0x00019330) slider_form_pane_vc_g

0x5be4,	// (0x0000f474) main_idle_act3_pane

0xe1a8,	// (0x00017a38) ai3_links_pane

0xe1b1,	// (0x00017a41) popup_ai3_data_window_ParamLimits

0xe1b1,	// (0x00017a41) popup_ai3_data_window

0x7cdc,	// (0x0001156c) grid_ai3_links_pane

0xe1c9,	// (0x00017a59) cell_ai3_links_pane_ParamLimits

0xe1c9,	// (0x00017a59) cell_ai3_links_pane

0xe1e1,	// (0x00017a71) bg_popup_sub_pane_cp11

0xe1ee,	// (0x00017a7e) cell_ai3_links_pane_g1

0x7cdc,	// (0x0001156c) bg_popup_sub_pane_cp12

0xe213,	// (0x00017aa3) heading_ai3_data_pane

0xe21b,	// (0x00017aab) list_ai3_gene_pane

0xe227,	// (0x00017ab7) popup_ai3_data_window_g1

0xe22f,	// (0x00017abf) heading_ai3_data_pane_g1

0xe237,	// (0x00017ac7) heading_ai3_data_pane_t1

0xe245,	// (0x00017ad5) list_double_ai3_gene_pane_ParamLimits

0xe245,	// (0x00017ad5) list_double_ai3_gene_pane

0xe252,	// (0x00017ae2) list_single_ai3_gene_pane_ParamLimits

0xe252,	// (0x00017ae2) list_single_ai3_gene_pane

0xcd63,	// (0x000165f3) list_highlight_pane_cp7_ParamLimits

0xcd63,	// (0x000165f3) list_highlight_pane_cp7

0xe25f,	// (0x00017aef) list_single_a13_gene_pane_t1_ParamLimits

0xe25f,	// (0x00017aef) list_single_a13_gene_pane_t1

0xe276,	// (0x00017b06) list_single_ai3_gene_pane_g1

0xe27f,	// (0x00017b0f) list_single_ai3_gene_pane_g2

0x0001,

0xfce7,	// (0x00019577) list_single_ai3_gene_pane_g

0xe287,	// (0x00017b17) list_double_ai3_gene_pane_g1_ParamLimits

0xe287,	// (0x00017b17) list_double_ai3_gene_pane_g1

0xe293,	// (0x00017b23) list_double_ai3_gene_pane_t1_ParamLimits

0xe293,	// (0x00017b23) list_double_ai3_gene_pane_t1

0xe2af,	// (0x00017b3f) list_double_ai3_gene_pane_t2_ParamLimits

0xe2af,	// (0x00017b3f) list_double_ai3_gene_pane_t2

0xe2c4,	// (0x00017b54) list_double_ai3_gene_pane_t3_ParamLimits

0xe2c4,	// (0x00017b54) list_double_ai3_gene_pane_t3

0x0002,

0xfcec,	// (0x0001957c) list_double_ai3_gene_pane_t_ParamLimits

0xfcec,	// (0x0001957c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe07e,	// (0x0001790e) aid_size_min_col_2

0xe088,	// (0x00017918) aid_size_min_msg_ParamLimits

0xe088,	// (0x00017918) aid_size_min_msg

0xd16d,	// (0x000169fd) fep_vkb_top_text_pane_g2_ParamLimits

0xd16d,	// (0x000169fd) fep_vkb_top_text_pane_g2

0x0001,

0xfb53,	// (0x000193e3) fep_vkb_top_text_pane_g_ParamLimits

0xfb53,	// (0x000193e3) fep_vkb_top_text_pane_g

0x5be4,	// (0x0000f474) main_hc_apps_shell_pane

0xe2e1,	// (0x00017b71) grid_hc_apps_pane_ParamLimits

0xe2e1,	// (0x00017b71) grid_hc_apps_pane

0xe2f0,	// (0x00017b80) list_hc_apps_pane

0xe2f8,	// (0x00017b88) scroll_pane_cp37_ParamLimits

0xe2f8,	// (0x00017b88) scroll_pane_cp37

0xe304,	// (0x00017b94) cell_hc_apps_pane_ParamLimits

0xe304,	// (0x00017b94) cell_hc_apps_pane

0xe3b4,	// (0x00017c44) cell_hc_apps_pane_g1_ParamLimits

0xe3b4,	// (0x00017c44) cell_hc_apps_pane_g1

0xe3e5,	// (0x00017c75) cell_hc_apps_pane_g2_ParamLimits

0xe3e5,	// (0x00017c75) cell_hc_apps_pane_g2

0xe401,	// (0x00017c91) cell_hc_apps_pane_g3_ParamLimits

0xe401,	// (0x00017c91) cell_hc_apps_pane_g3

0x0002,

0xfcf3,	// (0x00019583) cell_hc_apps_pane_g_ParamLimits

0xfcf3,	// (0x00019583) cell_hc_apps_pane_g

0xe423,	// (0x00017cb3) cell_hc_apps_pane_t1_ParamLimits

0xe423,	// (0x00017cb3) cell_hc_apps_pane_t1

0x8073,	// (0x00011903) grid_highlight_pane_cp10_ParamLimits

0x8073,	// (0x00011903) grid_highlight_pane_cp10

0xe463,	// (0x00017cf3) list_single_hc_apps_pane_ParamLimits

0xe463,	// (0x00017cf3) list_single_hc_apps_pane

0xe4d6,	// (0x00017d66) list_single_hc_apps_pane_g1

0xe4ef,	// (0x00017d7f) list_single_hc_apps_pane_g2

0x0001,

0xfcfa,	// (0x0001958a) list_single_hc_apps_pane_g

0xe508,	// (0x00017d98) list_single_hc_apps_pane_g2_copy1

0xe524,	// (0x00017db4) list_single_hc_apps_pane_t1

0x7dd0,	// (0x00011660) bg_set_opt_pane_cp_ParamLimits

0x5e27,	// (0x0000f6b7) setting_slider_pane_t1_ParamLimits

0x5e40,	// (0x0000f6d0) setting_slider_pane_t2_ParamLimits

0x5e59,	// (0x0000f6e9) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00018df4) setting_slider_pane_t_ParamLimits

0x5e70,	// (0x0000f700) slider_set_pane_ParamLimits

0x6393,	// (0x0000fc23) control_pane_g5_ParamLimits

0x6393,	// (0x0000fc23) control_pane_g5

0xb759,	// (0x00014fe9) slider_set_pane_g1_ParamLimits

0x6dbe,	// (0x0001064e) slider_set_pane_g2_ParamLimits

0x6dca,	// (0x0001065a) slider_set_pane_g3_ParamLimits

0x6dde,	// (0x0001066e) slider_set_pane_g4_ParamLimits

0x6df6,	// (0x00010686) slider_set_pane_g5_ParamLimits

0x6dca,	// (0x0001065a) slider_set_pane_g6_ParamLimits

0x6e0c,	// (0x0001069c) slider_set_pane_g7_ParamLimits

0xf965,	// (0x000191f5) slider_set_pane_g_ParamLimits

0x989f,	// (0x0001312f) navi_icon_text_pane_ParamLimits

0x9da5,	// (0x00013635) aid_fill_nsta_2_ParamLimits

0x9de4,	// (0x00013674) aid_touch_tab_arrow_left_ParamLimits

0x9df3,	// (0x00013683) aid_touch_tab_arrow_right_ParamLimits

0x9e60,	// (0x000136f0) clock_nsta_pane_ParamLimits

0xb20e,	// (0x00014a9e) navi_icon_pane_g1_ParamLimits

0xb21a,	// (0x00014aaa) navi_text_pane_t1_ParamLimits

0xc8c4,	// (0x00016154) navi_icon_text_pane_g1_ParamLimits

0xc8d0,	// (0x00016160) navi_icon_text_pane_t1_ParamLimits

0xe4d6,	// (0x00017d66) list_single_hc_apps_pane_g1_ParamLimits

0xe4ef,	// (0x00017d7f) list_single_hc_apps_pane_g2_ParamLimits

0xfcfa,	// (0x0001958a) list_single_hc_apps_pane_g_ParamLimits

0xe508,	// (0x00017d98) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe524,	// (0x00017db4) list_single_hc_apps_pane_t1_ParamLimits

0x5d41,	// (0x0000f5d1) popup_toolbar2_fixed_window_ParamLimits

0x5d41,	// (0x0000f5d1) popup_toolbar2_fixed_window

0x697a,	// (0x0001020a) popup_toolbar2_float_window

0x7cdc,	// (0x0001156c) bg_popup_sub_pane_cp27

0xe552,	// (0x00017de2) grid_toolbar2_float_pane

0x7cdc,	// (0x0001156c) bg_popup_sub_pane_cp26

0xe552,	// (0x00017de2) grid_toolbar2_fixed_pane

0xe55a,	// (0x00017dea) cell_toolbar2_fixed_pane_ParamLimits

0xe55a,	// (0x00017dea) cell_toolbar2_fixed_pane

0xe56b,	// (0x00017dfb) cell_toolbar2_fixed_pane_g1

0xe574,	// (0x00017e04) toolbar2_fixed_button_pane

0xa29d,	// (0x00013b2d) toolbar2_fixed_button_pane_g1

0xa2ad,	// (0x00013b3d) toolbar2_fixed_button_pane_g2

0xa2a5,	// (0x00013b35) toolbar2_fixed_button_pane_g3

0xa2bd,	// (0x00013b4d) toolbar2_fixed_button_pane_g4

0xa2b5,	// (0x00013b45) toolbar2_fixed_button_pane_g5

0xa2c5,	// (0x00013b55) toolbar2_fixed_button_pane_g6

0xa2cd,	// (0x00013b5d) toolbar2_fixed_button_pane_g7

0xa2dd,	// (0x00013b6d) toolbar2_fixed_button_pane_g8

0xa2d5,	// (0x00013b65) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x000190f7) toolbar2_fixed_button_pane_g

0xe57c,	// (0x00017e0c) cell_toolbar2_float_pane_ParamLimits

0xe57c,	// (0x00017e0c) cell_toolbar2_float_pane

0xe58d,	// (0x00017e1d) cell_toolbar2_float_pane_g1

0xe574,	// (0x00017e04) toolbar2_fixed_button_pane_cp

0xcec2,	// (0x00016752) fep_vkb_accented_list_pane_ParamLimits

0xcec2,	// (0x00016752) fep_vkb_accented_list_pane

0x71d2,	// (0x00010a62) bg_popup_fep_shadow_pane_g9

0x9a21,	// (0x000132b1) bg_popup_fep_shadow_pane_cp3

0x8e87,	// (0x00012717) list_accented_list_pane

0xe596,	// (0x00017e26) list_single_accented_list_pane_ParamLimits

0xe596,	// (0x00017e26) list_single_accented_list_pane

0x9a21,	// (0x000132b1) list_highlight_pane_cp10

0xe5a7,	// (0x00017e37) list_single_accented_list_pane_t1

0x68ca,	// (0x0001015a) popup_slider_window_ParamLimits

0x68ca,	// (0x0001015a) popup_slider_window

0xe075,	// (0x00017905) aid_indentation_list_msg

0xe661,	// (0x00017ef1) bg_popup_window_pane_cp19

0xe6cb,	// (0x00017f5b) popup_slider_window_g1

0xe6e7,	// (0x00017f77) popup_slider_window_g2

0xe703,	// (0x00017f93) popup_slider_window_g3

0x0005,

0xfcff,	// (0x0001958f) popup_slider_window_g

0xe75f,	// (0x00017fef) popup_slider_window_t1

0xe7d3,	// (0x00018063) small_volume_slider_vertical_pane

0xcd9e,	// (0x0001662e) small_volume_slider_vertical_pane_g1

0xcd9e,	// (0x0001662e) small_volume_slider_vertical_pane_g2

0xe7ef,	// (0x0001807f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd11,	// (0x000195a1) small_volume_slider_vertical_pane_g

0x5b07,	// (0x0000f397) area_side_right_pane_ParamLimits

0x5b07,	// (0x0000f397) area_side_right_pane

0x73bc,	// (0x00010c4c) aid_size_side_button_ParamLimits

0x73bc,	// (0x00010c4c) aid_size_side_button

0x73d0,	// (0x00010c60) grid_sctrl_middle_pane_ParamLimits

0x73d0,	// (0x00010c60) grid_sctrl_middle_pane

0x73f0,	// (0x00010c80) sctrl_sk_bottom_pane

0x7401,	// (0x00010c91) sctrl_sk_top_pane

0x7413,	// (0x00010ca3) aid_touch_sctrl_top

0x7420,	// (0x00010cb0) bg_sctrl_sk_pane_ParamLimits

0x7420,	// (0x00010cb0) bg_sctrl_sk_pane

0x742e,	// (0x00010cbe) sctrl_sk_top_pane_g1

0x743b,	// (0x00010ccb) sctrl_sk_top_pane_t1

0x7413,	// (0x00010ca3) aid_touch_sctrl_bottom

0x7420,	// (0x00010cb0) bg_sctrl_sk_pane_cp_ParamLimits

0x7420,	// (0x00010cb0) bg_sctrl_sk_pane_cp

0x7456,	// (0x00010ce6) sctrl_sk_bottom_pane_g1

0x743b,	// (0x00010ccb) sctrl_sk_bottom_pane_t1

0x745f,	// (0x00010cef) cell_sctrl_middle_pane_ParamLimits

0x745f,	// (0x00010cef) cell_sctrl_middle_pane

0x747a,	// (0x00010d0a) aid_touch_sctrl_middle_ParamLimits

0x747a,	// (0x00010d0a) aid_touch_sctrl_middle

0x748c,	// (0x00010d1c) bg_sctrl_middle_pane_ParamLimits

0x748c,	// (0x00010d1c) bg_sctrl_middle_pane

0x71f2,	// (0x00010a82) cell_sctrl_middle_pane_g1_ParamLimits

0x71f2,	// (0x00010a82) cell_sctrl_middle_pane_g1

0x749a,	// (0x00010d2a) cell_sctrl_middle_pane_g2_ParamLimits

0x749a,	// (0x00010d2a) cell_sctrl_middle_pane_g2

0x0001,

0xfd1d,	// (0x000195ad) cell_sctrl_middle_pane_g_ParamLimits

0xfd1d,	// (0x000195ad) cell_sctrl_middle_pane_g

0xa29d,	// (0x00013b2d) bg_sctrl_middle_pane_g1

0xa2a5,	// (0x00013b35) bg_sctrl_middle_pane_g2

0xa2ad,	// (0x00013b3d) bg_sctrl_middle_pane_g3

0xa2b5,	// (0x00013b45) bg_sctrl_middle_pane_g4

0xa2bd,	// (0x00013b4d) bg_sctrl_middle_pane_g5

0xa2c5,	// (0x00013b55) bg_sctrl_middle_pane_g6

0xa2cd,	// (0x00013b5d) bg_sctrl_middle_pane_g7

0xa2d5,	// (0x00013b65) bg_sctrl_middle_pane_g8

0x0007,

0xfd22,	// (0x000195b2) bg_sctrl_middle_pane_g

0xa2dd,	// (0x00013b6d) bg_sctrl_middle_pane_g8_copy1

0xa29d,	// (0x00013b2d) bg_sctrl_sk_pane_g1

0xa2ad,	// (0x00013b3d) bg_sctrl_sk_pane_g2

0xa2a5,	// (0x00013b35) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x000190f7) bg_sctrl_sk_pane_g

0x856c,	// (0x00011dfc) aid_size_touch_scroll_bar

0xa2bd,	// (0x00013b4d) bg_sctrl_sk_pane_g4

0xa2b5,	// (0x00013b45) bg_sctrl_sk_pane_g5

0xa2c5,	// (0x00013b55) bg_sctrl_sk_pane_g6

0xa2cd,	// (0x00013b5d) bg_sctrl_sk_pane_g7

0xa2dd,	// (0x00013b6d) bg_sctrl_sk_pane_g8

0xa2d5,	// (0x00013b65) bg_sctrl_sk_pane_g9

0x6543,	// (0x0000fdd3) popup_fep_china_hwr2_fs_candidate_window

0x654d,	// (0x0000fddd) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x654d,	// (0x0000fddd) popup_fep_china_hwr2_fs_control_window

0x71f2,	// (0x00010a82) sctrl_sk_top_pane_g2

0x0001,

0xfd18,	// (0x000195a8) sctrl_sk_top_pane_g

0xe7f8,	// (0x00018088) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe7f8,	// (0x00018088) aid_fep_china_hwr2_fs_cell

0xe80a,	// (0x0001809a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe80a,	// (0x0001809a) bg_popup_fep_shadow_pane_cp4

0xe821,	// (0x000180b1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe821,	// (0x000180b1) bg_popup_fep_shadow_pane_cp5

0xe833,	// (0x000180c3) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe833,	// (0x000180c3) popup_fep_china_hwr2_fs_control_bar_grid

0xe843,	// (0x000180d3) popup_fep_china_hwr2_fs_control_funtion_grid

0xe84b,	// (0x000180db) aid_fep_china_hwr2_fs_candi_cell

0x7cdc,	// (0x0001156c) bg_popup_fep_shadow_pane_cp6

0xe855,	// (0x000180e5) popup_fep_china_hwr2_fs_candidate_grid

0xe85f,	// (0x000180ef) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe85f,	// (0x000180ef) cell_fep_china_hwr2_fs_funtion_grid

0xcd9e,	// (0x0001662e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xe877,	// (0x00018107) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xe877,	// (0x00018107) cell_fep_china_hwr2_fs_funtion_grid_g1

0xe885,	// (0x00018115) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xe885,	// (0x00018115) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd33,	// (0x000195c3) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd33,	// (0x000195c3) cell_fep_china_hwr2_fs_funtion_grid_g

0xe89b,	// (0x0001812b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe89b,	// (0x0001812b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe8b0,	// (0x00018140) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe8b0,	// (0x00018140) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd38,	// (0x000195c8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd38,	// (0x000195c8) cell_fep_china_hwr2_fs_funtion_grid_t

0xe8cc,	// (0x0001815c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xe8d4,	// (0x00018164) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xe8dc,	// (0x0001816c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3d,	// (0x000195cd) popup_fep_china_hwr2_fs_control_bar_grid_g

0xe8e4,	// (0x00018174) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xe8e4,	// (0x00018174) cell_fep_china_hwr2_fs_candidate_grid

0xe8fd,	// (0x0001818d) popup_fep_china_hwr2_fs_candidate_grid_g20

0xe905,	// (0x00018195) popup_fep_china_hwr2_fs_candidate_grid_g21

0xcd9e,	// (0x0001662e) cell_fep_china_hwr2_fs_candidate_grid_g1

0xcd9e,	// (0x0001662e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb58,	// (0x000193e8) cell_fep_china_hwr2_fs_candidate_grid_g

0xe90d,	// (0x0001819d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9e6d,	// (0x000136fd) clock_nsta_pane_cp_24_ParamLimits

0x9e6d,	// (0x000136fd) clock_nsta_pane_cp_24

0x9eeb,	// (0x0001377b) indicator_nsta_pane_cp_24_ParamLimits

0x9eeb,	// (0x0001377b) indicator_nsta_pane_cp_24

0xb096,	// (0x00014926) heading_pane_g1

0x0001,

0xf8cc,	// (0x0001915c) heading_pane_g

0xbbd5,	// (0x00015465) grid_sct_catagory_button_pane

0xbc07,	// (0x00015497) scroll_pane_cp5_ParamLimits

0xc912,	// (0x000161a2) button_value_adjust_pane_cp5_ParamLimits

0xc912,	// (0x000161a2) button_value_adjust_pane_cp5

0xca0a,	// (0x0001629a) form2_midp_time_pane_ParamLimits

0xe91b,	// (0x000181ab) cell_sct_catagory_button_pane_ParamLimits

0xe91b,	// (0x000181ab) cell_sct_catagory_button_pane

0xcd63,	// (0x000165f3) bg_button_pane_cp01_ParamLimits

0xcd63,	// (0x000165f3) bg_button_pane_cp01

0xcd9e,	// (0x0001662e) cell_sct_catagory_button_pane_g1

0x6909,	// (0x00010199) popup_tb_extension_window

0xe92d,	// (0x000181bd) aid_size_cell_ext_ParamLimits

0xe92d,	// (0x000181bd) aid_size_cell_ext

0x8073,	// (0x00011903) bg_tb_trans_pane_cp1_ParamLimits

0x8073,	// (0x00011903) bg_tb_trans_pane_cp1

0xe94d,	// (0x000181dd) grid_tb_ext_pane_ParamLimits

0xe94d,	// (0x000181dd) grid_tb_ext_pane

0xe97d,	// (0x0001820d) cell_tb_ext_pane_ParamLimits

0xe97d,	// (0x0001820d) cell_tb_ext_pane

0xe994,	// (0x00018224) cell_tb_ext_pane_g1_ParamLimits

0xe994,	// (0x00018224) cell_tb_ext_pane_g1

0xe9b1,	// (0x00018241) cell_tb_ext_pane_t1

0x8073,	// (0x00011903) list_highlight_pane_cp11_ParamLimits

0x8073,	// (0x00011903) list_highlight_pane_cp11

0x5d60,	// (0x0000f5f0) popup_uni_indicator_window_ParamLimits

0x5d60,	// (0x0000f5f0) popup_uni_indicator_window

0x8ba9,	// (0x00012439) bg_popup_sub_pane_cp14

0xe9cc,	// (0x0001825c) list_uniindi_pane

0xe9d8,	// (0x00018268) uniindi_top_pane

0x8073,	// (0x00011903) bg_uniindi_top_pane

0xe9f7,	// (0x00018287) uniindi_top_pane_g1

0xea0d,	// (0x0001829d) uniindi_top_pane_g2

0x0003,

0xfd44,	// (0x000195d4) uniindi_top_pane_g

0xea37,	// (0x000182c7) uniindi_top_pane_t1

0xea61,	// (0x000182f1) list_single_uniindi_pane_ParamLimits

0xea61,	// (0x000182f1) list_single_uniindi_pane

0xcd9e,	// (0x0001662e) bg_uniindi_top_pane_g1

0xea73,	// (0x00018303) list_single_uniindi_pane_g1

0xea86,	// (0x00018316) list_single_uniindi_pane_t1

0x5be4,	// (0x0000f474) control_bg_pane

0xeaab,	// (0x0001833b) bg_sctrl_sk_pane_cp1

0xeab4,	// (0x00018344) bg_sctrl_sk_pane_cp2

0xeabd,	// (0x0001834d) control_bg_pane_g1

0xeac6,	// (0x00018356) control_bg_pane_g2

0x0001,

0xfd4d,	// (0x000195dd) control_bg_pane_g

0xc742,	// (0x00015fd2) cell_indicator_nsta_pane_g1_ParamLimits

0xc750,	// (0x00015fe0) cell_indicator_nsta_pane_g2_ParamLimits

0xfabc,	// (0x0001934c) cell_indicator_nsta_pane_g_ParamLimits

0xca8e,	// (0x0001631e) form2_midp_time_pane_t1_ParamLimits

0x64af,	// (0x0000fd3f) main_idle_act4_pane_ParamLimits

0x64af,	// (0x0000fd3f) main_idle_act4_pane

0x6909,	// (0x00010199) popup_tb_extension_window_ParamLimits

0xe96d,	// (0x000181fd) tb_ext_find_pane_ParamLimits

0xe96d,	// (0x000181fd) tb_ext_find_pane

0xeacf,	// (0x0001835f) ai_gene_pane_1_cp1

0x9b5e,	// (0x000133ee) ai_gene_pane_2_cp1

0xead7,	// (0x00018367) list_single_idle_plugin_calendar_pane

0xeae0,	// (0x00018370) list_single_idle_plugin_notification_pane

0xeae9,	// (0x00018379) list_single_idle_plugin_player_pane

0xeaf2,	// (0x00018382) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeaf2,	// (0x00018382) list_single_idle_plugin_shortcut_pane

0xeb14,	// (0x000183a4) main_idle_act4_pane_t1

0xeb26,	// (0x000183b6) main_idle_act4_pane_t2

0x0001,

0xfd52,	// (0x000195e2) main_idle_act4_pane_t

0xeb38,	// (0x000183c8) middle_sk_idle_act4_pane_ParamLimits

0xeb38,	// (0x000183c8) middle_sk_idle_act4_pane

0xeb4e,	// (0x000183de) popup_clock_digital_analogue_window_cp2

0xeb68,	// (0x000183f8) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb68,	// (0x000183f8) shortcut_wheel_idle_act4_pane

0xcd9e,	// (0x0001662e) shortcut_wheel_idle_act4_pane_g1

0xcd9e,	// (0x0001662e) shortcut_wheel_idle_act4_pane_g2

0xcd9e,	// (0x0001662e) shortcut_wheel_idle_act4_pane_g3

0xcd9e,	// (0x0001662e) shortcut_wheel_idle_act4_pane_g4

0xcd9e,	// (0x0001662e) shortcut_wheel_idle_act4_pane_g5

0xeb7c,	// (0x0001840c) shortcut_wheel_idle_act4_pane_g6

0xeb84,	// (0x00018414) shortcut_wheel_idle_act4_pane_g7

0xeb8c,	// (0x0001841c) shortcut_wheel_idle_act4_pane_g8

0xeb94,	// (0x00018424) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd57,	// (0x000195e7) shortcut_wheel_idle_act4_pane_g

0xd019,	// (0x000168a9) middle_sk_idle_act4_pane_g1_ParamLimits

0xd019,	// (0x000168a9) middle_sk_idle_act4_pane_g1

0xebf8,	// (0x00018488) middle_sk_idle_act4_pane_g2_ParamLimits

0xebf8,	// (0x00018488) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7a,	// (0x0001960a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7a,	// (0x0001960a) middle_sk_idle_act4_pane_g

0xec04,	// (0x00018494) middle_sk_idle_act4_pane_t1_ParamLimits

0xec04,	// (0x00018494) middle_sk_idle_act4_pane_t1

0xec21,	// (0x000184b1) grid_ai_shortcut_pane_ParamLimits

0xec21,	// (0x000184b1) grid_ai_shortcut_pane

0xec3a,	// (0x000184ca) list_highlight_pane_cp16_ParamLimits

0xec3a,	// (0x000184ca) list_highlight_pane_cp16

0xec47,	// (0x000184d7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec47,	// (0x000184d7) list_single_idle_plugin_shortcut_pane_g1

0xec53,	// (0x000184e3) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec53,	// (0x000184e3) list_single_idle_plugin_shortcut_pane_g2

0xec6b,	// (0x000184fb) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec6b,	// (0x000184fb) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7f,	// (0x0001960f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7f,	// (0x0001960f) list_single_idle_plugin_shortcut_pane_g

0xec7e,	// (0x0001850e) cell_ai_shortcut_pane_ParamLimits

0xec7e,	// (0x0001850e) cell_ai_shortcut_pane

0xec9f,	// (0x0001852f) cell_ai_shortcut_pane_g1_ParamLimits

0xec9f,	// (0x0001852f) cell_ai_shortcut_pane_g1

0xeacf,	// (0x0001835f) ai_gene_pane_1_cp2

0xecc1,	// (0x00018551) ai_gene_pane_2_cp2

0xecc9,	// (0x00018559) list_highlight_pane_cp15

0xecd2,	// (0x00018562) list_single_idle_plugin_calendar_pane_g1

0xecc9,	// (0x00018559) list_highlight_pane_cp17

0xecda,	// (0x0001856a) list_single_idle_plugin_calendar_pane_g1_copy1

0xece2,	// (0x00018572) list_single_idle_plugin_player_pane_g1

0xbe70,	// (0x00015700) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd86,	// (0x00019616) list_single_idle_plugin_player_pane_g

0xecea,	// (0x0001857a) list_single_idle_plugin_player_pane_t1

0xecf8,	// (0x00018588) list_single_idle_plugin_player_pane_t2

0xed06,	// (0x00018596) list_single_idle_plugin_player_pane_t3

0xed14,	// (0x000185a4) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8b,	// (0x0001961b) list_single_idle_plugin_player_pane_t

0xed22,	// (0x000185b2) wait_bar_pane_cp15

0xed2a,	// (0x000185ba) grid_ai_notification_pane

0xbe70,	// (0x00015700) list_single_idle_plugin_notification_pane_g1

0xed33,	// (0x000185c3) cell_ai_notification_pane_ParamLimits

0xed33,	// (0x000185c3) cell_ai_notification_pane

0xed40,	// (0x000185d0) cell_ai_notification_pane_g1

0xed48,	// (0x000185d8) cell_ai_notification_pane_t1

0xed56,	// (0x000185e6) tb_ext_find_button_pane

0xed5e,	// (0x000185ee) tb_ext_find_pane_g1

0xed66,	// (0x000185f6) tb_ext_find_pane_t1

0x9387,	// (0x00012c17) tb_ext_find_button_pane_g1

0xed74,	// (0x00018604) tb_ext_find_button_pane_g2

0x0001,

0xfd94,	// (0x00019624) tb_ext_find_button_pane_g

0xeb14,	// (0x000183a4) main_idle_act4_pane_t1_ParamLimits

0xeb26,	// (0x000183b6) main_idle_act4_pane_t2_ParamLimits

0xfd52,	// (0x000195e2) main_idle_act4_pane_t_ParamLimits

0xeb4e,	// (0x000183de) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb5c,	// (0x000183ec) sat_plugin_idle_act4_pane_ParamLimits

0xeb5c,	// (0x000183ec) sat_plugin_idle_act4_pane

0xed7d,	// (0x0001860d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xed7d,	// (0x0001860d) sat_plugin_idle_act4_pane_t1

0xed90,	// (0x00018620) sat_plugin_idle_act4_pane_t2_ParamLimits

0xed90,	// (0x00018620) sat_plugin_idle_act4_pane_t2

0xeda3,	// (0x00018633) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeda3,	// (0x00018633) sat_plugin_idle_act4_pane_t3

0xedb6,	// (0x00018646) sat_plugin_idle_act4_pane_t4_ParamLimits

0xedb6,	// (0x00018646) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd99,	// (0x00019629) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd99,	// (0x00019629) sat_plugin_idle_act4_pane_t

0x5ca9,	// (0x0000f539) popup_battery_window_ParamLimits

0x5ca9,	// (0x0000f539) popup_battery_window

0x8073,	// (0x00011903) bg_popup_sub_pane_cp25_ParamLimits

0x8073,	// (0x00011903) bg_popup_sub_pane_cp25

0xedc9,	// (0x00018659) popup_battery_window_g1_ParamLimits

0xedc9,	// (0x00018659) popup_battery_window_g1

0xedd5,	// (0x00018665) popup_battery_window_t1_ParamLimits

0xedd5,	// (0x00018665) popup_battery_window_t1

0xede7,	// (0x00018677) popup_battery_window_t2_ParamLimits

0xede7,	// (0x00018677) popup_battery_window_t2

0x0001,

0xfda2,	// (0x00019632) popup_battery_window_t_ParamLimits

0xfda2,	// (0x00019632) popup_battery_window_t

0x9a29,	// (0x000132b9) midp_canvas_pane_ParamLimits

0x9aa0,	// (0x00013330) midp_keypad_pane_ParamLimits

0x9aa0,	// (0x00013330) midp_keypad_pane

0x9d65,	// (0x000135f5) main_midp_pane_ParamLimits

0xc7ce,	// (0x0001605e) signal_pane_g2_cp_ParamLimits

0xee04,	// (0x00018694) aid_size_cell_midp_keypad_ParamLimits

0xee04,	// (0x00018694) aid_size_cell_midp_keypad

0xee1e,	// (0x000186ae) midp_keyp_game_grid_pane_ParamLimits

0xee1e,	// (0x000186ae) midp_keyp_game_grid_pane

0xee3e,	// (0x000186ce) midp_keyp_rocker_pane_ParamLimits

0xee3e,	// (0x000186ce) midp_keyp_rocker_pane

0xee69,	// (0x000186f9) midp_keyp_sk_left_pane_ParamLimits

0xee69,	// (0x000186f9) midp_keyp_sk_left_pane

0xeec3,	// (0x00018753) midp_keyp_sk_right_pane_ParamLimits

0xeec3,	// (0x00018753) midp_keyp_sk_right_pane

0x7cdc,	// (0x0001156c) bg_button_pane_cp03

0xef1d,	// (0x000187ad) midp_keyp_sk_left_pane_g1

0x7cdc,	// (0x0001156c) bg_button_pane_cp04

0xef1d,	// (0x000187ad) midp_keyp_sk_right_pane_g1

0xcd9e,	// (0x0001662e) midp_keyp_rocker_pane_g1

0xef26,	// (0x000187b6) keyp_game_cell_pane_ParamLimits

0xef26,	// (0x000187b6) keyp_game_cell_pane

0x7cdc,	// (0x0001156c) bg_button_pane_cp02

0xef39,	// (0x000187c9) keyp_game_cell_pane_g1

0x5cdf,	// (0x0000f56f) popup_fep_vkb2_window_ParamLimits

0x5cdf,	// (0x0000f56f) popup_fep_vkb2_window

0x74b8,	// (0x00010d48) aid_size_cell_vkb2_ParamLimits

0x74b8,	// (0x00010d48) aid_size_cell_vkb2

0x750c,	// (0x00010d9c) popup_fep_vkb2_window_g1_ParamLimits

0x750c,	// (0x00010d9c) popup_fep_vkb2_window_g1

0x754c,	// (0x00010ddc) vkb2_area_bottom_pane_ParamLimits

0x754c,	// (0x00010ddc) vkb2_area_bottom_pane

0x7598,	// (0x00010e28) vkb2_area_keypad_pane_ParamLimits

0x7598,	// (0x00010e28) vkb2_area_keypad_pane

0x75da,	// (0x00010e6a) vkb2_area_top_pane_ParamLimits

0x75da,	// (0x00010e6a) vkb2_area_top_pane

0x7654,	// (0x00010ee4) vkb2_top_entry_pane_ParamLimits

0x7654,	// (0x00010ee4) vkb2_top_entry_pane

0x767e,	// (0x00010f0e) vkb2_top_grid_left_pane_ParamLimits

0x767e,	// (0x00010f0e) vkb2_top_grid_left_pane

0x769c,	// (0x00010f2c) vkb2_top_grid_right_pane_ParamLimits

0x769c,	// (0x00010f2c) vkb2_top_grid_right_pane

0x76ba,	// (0x00010f4a) vkb2_cell_keypad_pane_ParamLimits

0x76ba,	// (0x00010f4a) vkb2_cell_keypad_pane

0x778b,	// (0x0001101b) vkb2_area_bottom_grid_pane_ParamLimits

0x778b,	// (0x0001101b) vkb2_area_bottom_grid_pane

0x77b1,	// (0x00011041) vkb2_area_bottom_pane_g1_ParamLimits

0x77b1,	// (0x00011041) vkb2_area_bottom_pane_g1

0x77d5,	// (0x00011065) vkb2_area_bottom_pane_g2_ParamLimits

0x77d5,	// (0x00011065) vkb2_area_bottom_pane_g2

0x7803,	// (0x00011093) vkb2_area_bottom_pane_g3_ParamLimits

0x7803,	// (0x00011093) vkb2_area_bottom_pane_g3

0x0002,

0xfda7,	// (0x00019637) vkb2_area_bottom_pane_g_ParamLimits

0xfda7,	// (0x00019637) vkb2_area_bottom_pane_g

0x7864,	// (0x000110f4) vkb2_top_cell_left_pane_ParamLimits

0x7864,	// (0x000110f4) vkb2_top_cell_left_pane

0xef4a,	// (0x000187da) vkb2_top_entry_pane_g1_ParamLimits

0xef4a,	// (0x000187da) vkb2_top_entry_pane_g1

0xef58,	// (0x000187e8) vkb2_top_entry_pane_t1_ParamLimits

0xef58,	// (0x000187e8) vkb2_top_entry_pane_t1

0xef8a,	// (0x0001881a) vkb2_top_entry_pane_t2_ParamLimits

0xef8a,	// (0x0001881a) vkb2_top_entry_pane_t2

0xefbc,	// (0x0001884c) vkb2_top_entry_pane_t3_ParamLimits

0xefbc,	// (0x0001884c) vkb2_top_entry_pane_t3

0x0002,

0xfdae,	// (0x0001963e) vkb2_top_entry_pane_t_ParamLimits

0xfdae,	// (0x0001963e) vkb2_top_entry_pane_t

0x78b1,	// (0x00011141) vkb2_top_grid_right_pane_g1_ParamLimits

0x78b1,	// (0x00011141) vkb2_top_grid_right_pane_g1

0x78c7,	// (0x00011157) vkb2_top_grid_right_pane_g2_ParamLimits

0x78c7,	// (0x00011157) vkb2_top_grid_right_pane_g2

0x78df,	// (0x0001116f) vkb2_top_grid_right_pane_g3_ParamLimits

0x78df,	// (0x0001116f) vkb2_top_grid_right_pane_g3

0x78f7,	// (0x00011187) vkb2_top_grid_right_pane_g4_ParamLimits

0x78f7,	// (0x00011187) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb5,	// (0x00019645) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb5,	// (0x00019645) vkb2_top_grid_right_pane_g

0x790d,	// (0x0001119d) vkb2_top_cell_left_pane_g1

0x7924,	// (0x000111b4) vkb2_cell_keypad_pane_g1_ParamLimits

0x7924,	// (0x000111b4) vkb2_cell_keypad_pane_g1

0xefe0,	// (0x00018870) vkb2_cell_keypad_pane_t1_ParamLimits

0xefe0,	// (0x00018870) vkb2_cell_keypad_pane_t1

0x7932,	// (0x000111c2) vkb2_cell_bottom_grid_pane_ParamLimits

0x7932,	// (0x000111c2) vkb2_cell_bottom_grid_pane

0x796b,	// (0x000111fb) vkb2_cell_bottom_grid_pane_g1

0xeb9c,	// (0x0001842c) aid_call2_pane_cp02

0xeba4,	// (0x00018434) aid_call_pane_cp02

0xebac,	// (0x0001843c) clock_digital_number_pane_cp10

0xebb4,	// (0x00018444) clock_digital_number_pane_cp11

0xebbc,	// (0x0001844c) clock_digital_number_pane_cp12

0xebc4,	// (0x00018454) clock_digital_number_pane_cp13

0xebcc,	// (0x0001845c) clock_digital_separator_pane_cp10

0x9387,	// (0x00012c17) popup_clock_digital_analogue_window_cp2_g1

0x9387,	// (0x00012c17) popup_clock_digital_analogue_window_cp2_g2

0xebd4,	// (0x00018464) popup_clock_digital_analogue_window_cp2_g3

0x9387,	// (0x00012c17) popup_clock_digital_analogue_window_cp2_g4

0xebd4,	// (0x00018464) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6a,	// (0x000195fa) popup_clock_digital_analogue_window_cp2_g

0xebdc,	// (0x0001846c) popup_clock_digital_analogue_window_cp2_t1

0xebea,	// (0x0001847a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd75,	// (0x00019605) popup_clock_digital_analogue_window_cp2_t

0xcd9e,	// (0x0001662e) clock_digital_number_pane_cp10_g1

0xcd9e,	// (0x0001662e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb58,	// (0x000193e8) clock_digital_number_pane_cp10_g

0xcd9e,	// (0x0001662e) clock_digital_separator_pane_cp10_g1

0xcd9e,	// (0x0001662e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb58,	// (0x000193e8) clock_digital_separator_pane_cp10_g

0xea19,	// (0x000182a9) uniindi_top_pane_g3

0xea2a,	// (0x000182ba) uniindi_top_pane_g4

0x7745,	// (0x00010fd5) vkb2_row_keypad_pane_ParamLimits

0x7745,	// (0x00010fd5) vkb2_row_keypad_pane

0x798b,	// (0x0001121b) vkb2_cell_t_keypad_pane_ParamLimits

0x798b,	// (0x0001121b) vkb2_cell_t_keypad_pane

0x799b,	// (0x0001122b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x799b,	// (0x0001122b) vkb2_cell_t_keypad_pane_cp08

0x79ae,	// (0x0001123e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x79ae,	// (0x0001123e) vkb2_cell_t_keypad_pane_cp09

0x79c2,	// (0x00011252) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x79c2,	// (0x00011252) vkb2_cell_t_keypad_pane_cp01

0x79d3,	// (0x00011263) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x79d3,	// (0x00011263) vkb2_cell_t_keypad_pane_cp02

0x79e4,	// (0x00011274) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x79e4,	// (0x00011274) vkb2_cell_t_keypad_pane_cp03

0x79f5,	// (0x00011285) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x79f5,	// (0x00011285) vkb2_cell_t_keypad_pane_cp04

0x7a06,	// (0x00011296) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7a06,	// (0x00011296) vkb2_cell_t_keypad_pane_cp05

0x7a17,	// (0x000112a7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7a17,	// (0x000112a7) vkb2_cell_t_keypad_pane_cp06

0x7a28,	// (0x000112b8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7a28,	// (0x000112b8) vkb2_cell_t_keypad_pane_cp07

0x7a39,	// (0x000112c9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7a39,	// (0x000112c9) vkb2_cell_t_keypad_pane_cp10

0x71f2,	// (0x00010a82) vkb2_cell_t_keypad_pane_g1

0xeff7,	// (0x00018887) vkb2_cell_t_keypad_pane_t1

0x5be4,	// (0x0000f474) popup_grid_graphic2_window

0xf009,	// (0x00018899) aid_size_cell_graphic2_ParamLimits

0xf009,	// (0x00018899) aid_size_cell_graphic2

0xf041,	// (0x000188d1) bg_popup_window_pane_cp21_ParamLimits

0xf041,	// (0x000188d1) bg_popup_window_pane_cp21

0xf04f,	// (0x000188df) graphic2_pages_pane_ParamLimits

0xf04f,	// (0x000188df) graphic2_pages_pane

0xf095,	// (0x00018925) grid_graphic2_control_pane_ParamLimits

0xf095,	// (0x00018925) grid_graphic2_control_pane

0xf0d3,	// (0x00018963) grid_graphic2_pane_ParamLimits

0xf0d3,	// (0x00018963) grid_graphic2_pane

0xf147,	// (0x000189d7) cell_graphic2_pane

0x5be4,	// (0x0000f474) main_comp_mode_pane

0xe21b,	// (0x00017aab) list_ai3_gene_pane_ParamLimits

0xe661,	// (0x00017ef1) bg_popup_window_pane_cp19_ParamLimits

0xe66d,	// (0x00017efd) bg_touch_area_indi_pane_ParamLimits

0xe66d,	// (0x00017efd) bg_touch_area_indi_pane

0xe683,	// (0x00017f13) bg_touch_area_indi_pane_cp01_ParamLimits

0xe683,	// (0x00017f13) bg_touch_area_indi_pane_cp01

0xe699,	// (0x00017f29) bg_touch_area_indi_pane_cp02_ParamLimits

0xe699,	// (0x00017f29) bg_touch_area_indi_pane_cp02

0xe6b1,	// (0x00017f41) bg_touch_area_indi_pane_cp03_ParamLimits

0xe6b1,	// (0x00017f41) bg_touch_area_indi_pane_cp03

0xe6cb,	// (0x00017f5b) popup_slider_window_g1_ParamLimits

0xe6e7,	// (0x00017f77) popup_slider_window_g2_ParamLimits

0xe703,	// (0x00017f93) popup_slider_window_g3_ParamLimits

0xfcff,	// (0x0001958f) popup_slider_window_g_ParamLimits

0xe75f,	// (0x00017fef) popup_slider_window_t1_ParamLimits

0xe7d3,	// (0x00018063) small_volume_slider_vertical_pane_ParamLimits

0xf147,	// (0x000189d7) cell_graphic2_pane_ParamLimits

0xf195,	// (0x00018a25) bg_button_pane_cp10_ParamLimits

0xf195,	// (0x00018a25) bg_button_pane_cp10

0xf1a8,	// (0x00018a38) bg_button_pane_cp11_ParamLimits

0xf1a8,	// (0x00018a38) bg_button_pane_cp11

0xf1bb,	// (0x00018a4b) graphic2_pages_pane_g1_ParamLimits

0xf1bb,	// (0x00018a4b) graphic2_pages_pane_g1

0xf1d6,	// (0x00018a66) graphic2_pages_pane_g2_ParamLimits

0xf1d6,	// (0x00018a66) graphic2_pages_pane_g2

0x0001,

0xfdc3,	// (0x00019653) graphic2_pages_pane_g_ParamLimits

0xfdc3,	// (0x00019653) graphic2_pages_pane_g

0xf1ee,	// (0x00018a7e) graphic2_pages_pane_t1_ParamLimits

0xf1ee,	// (0x00018a7e) graphic2_pages_pane_t1

0xf204,	// (0x00018a94) cell_graphic2_control_pane_ParamLimits

0xf204,	// (0x00018a94) cell_graphic2_control_pane

0xf225,	// (0x00018ab5) cell_graphic2_pane_g1_ParamLimits

0xf225,	// (0x00018ab5) cell_graphic2_pane_g1

0xf232,	// (0x00018ac2) cell_graphic2_pane_g2_ParamLimits

0xf232,	// (0x00018ac2) cell_graphic2_pane_g2

0xf23f,	// (0x00018acf) cell_graphic2_pane_g3_ParamLimits

0xf23f,	// (0x00018acf) cell_graphic2_pane_g3

0xf24c,	// (0x00018adc) cell_graphic2_pane_g4_ParamLimits

0xf24c,	// (0x00018adc) cell_graphic2_pane_g4

0xf259,	// (0x00018ae9) cell_graphic2_pane_g5_ParamLimits

0xf259,	// (0x00018ae9) cell_graphic2_pane_g5

0x0004,

0xfdc8,	// (0x00019658) cell_graphic2_pane_g_ParamLimits

0xfdc8,	// (0x00019658) cell_graphic2_pane_g

0xf274,	// (0x00018b04) cell_graphic2_pane_t1_ParamLimits

0xf274,	// (0x00018b04) cell_graphic2_pane_t1

0xa3b7,	// (0x00013c47) grid_highlight_pane_cp11_ParamLimits

0xa3b7,	// (0x00013c47) grid_highlight_pane_cp11

0x8073,	// (0x00011903) bg_button_pane_cp05

0xf29d,	// (0x00018b2d) cell_graphic2_control_pane_g1

0xcd9e,	// (0x0001662e) bg_touch_area_indi_pane_g1

0xf2c5,	// (0x00018b55) aid_cmod_rocker_key_size

0xf2cf,	// (0x00018b5f) aid_cmode_itu_key_size

0xf2d9,	// (0x00018b69) main_cmode_video_pane

0xf2e3,	// (0x00018b73) main_comp_mode_itu_pane

0xf2ef,	// (0x00018b7f) main_comp_mode_rocker_pane

0xf2fb,	// (0x00018b8b) cell_cmode_rocker_pane_ParamLimits

0xf2fb,	// (0x00018b8b) cell_cmode_rocker_pane

0xf30d,	// (0x00018b9d) cell_cmode_itu_pane_ParamLimits

0xf30d,	// (0x00018b9d) cell_cmode_itu_pane

0x8ba9,	// (0x00012439) bg_button_pane_cp06_ParamLimits

0x8ba9,	// (0x00012439) bg_button_pane_cp06

0xd019,	// (0x000168a9) cell_cmode_rocker_pane_g1_ParamLimits

0xd019,	// (0x000168a9) cell_cmode_rocker_pane_g1

0xe877,	// (0x00018107) cell_cmode_rocker_pane_g2_ParamLimits

0xe877,	// (0x00018107) cell_cmode_rocker_pane_g2

0x0001,

0xfdd8,	// (0x00019668) cell_cmode_rocker_pane_g_ParamLimits

0xfdd8,	// (0x00019668) cell_cmode_rocker_pane_g

0x7cdc,	// (0x0001156c) bg_button_pane_cp07

0xf322,	// (0x00018bb2) cell_cmode_itu_pane_g1

0xf32b,	// (0x00018bbb) cell_cmode_itu_pane_t1

0xf339,	// (0x00018bc9) cell_cmode_itu_pane_t2

0x0001,

0xfddd,	// (0x0001966d) cell_cmode_itu_pane_t

0xea9b,	// (0x0001832b) aid_touch_ctrl_left

0xeaa3,	// (0x00018333) aid_touch_ctrl_right

0x7cdc,	// (0x0001156c) compa_mode_pane

0xf347,	// (0x00018bd7) aid_cmod_rocker_key_size_cp

0xf351,	// (0x00018be1) aid_cmode_itu_key_size_cp

0xf35b,	// (0x00018beb) compa_mode_pane_g1

0xf363,	// (0x00018bf3) compa_mode_pane_g2

0xf36b,	// (0x00018bfb) compa_mode_pane_g3

0x0002,

0xfde2,	// (0x00019672) compa_mode_pane_g

0xf373,	// (0x00018c03) main_comp_mode_itu_pane_cp

0xf37b,	// (0x00018c0b) main_comp_mode_rocker_pane_cp

0xf383,	// (0x00018c13) cell_cmode_itu_pane_cp_ParamLimits

0xf383,	// (0x00018c13) cell_cmode_itu_pane_cp

0xf398,	// (0x00018c28) cell_cmode_rocker_pane_cp_ParamLimits

0xf398,	// (0x00018c28) cell_cmode_rocker_pane_cp

0x8ba9,	// (0x00012439) bg_button_pane_cp06_cp_ParamLimits

0x8ba9,	// (0x00012439) bg_button_pane_cp06_cp

0xd019,	// (0x000168a9) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd019,	// (0x000168a9) cell_cmode_rocker_pane_g1_cp

0xcd9e,	// (0x0001662e) cell_cmode_rocker_pane_g2_cp

0x7cdc,	// (0x0001156c) bg_button_pane_cp07_cp

0xf3aa,	// (0x00018c3a) cell_cmode_itu_pane_g1_cp

0xf3b3,	// (0x00018c43) cell_cmode_itu_pane_t1_cp

0xf3b3,	// (0x00018c43) cell_cmode_itu_pane_t2_cp

0xb8e9,	// (0x00015179) settings_code_pane_cp2

0x7dd0,	// (0x00011660) bg_popup_window_pane_cp3_ParamLimits

0x8241,	// (0x00011ad1) heading_pane_cp3_ParamLimits

0x824d,	// (0x00011add) listscroll_popup_graphic_pane_ParamLimits

0x6f9b,	// (0x0001082b) fep_hwr_aid_pane_ParamLimits

0x7413,	// (0x00010ca3) aid_touch_sctrl_top_ParamLimits

0x742e,	// (0x00010cbe) sctrl_sk_top_pane_g1_ParamLimits

0x71f2,	// (0x00010a82) sctrl_sk_top_pane_g2_ParamLimits

0xfd18,	// (0x000195a8) sctrl_sk_top_pane_g_ParamLimits

0x743b,	// (0x00010ccb) sctrl_sk_top_pane_t1_ParamLimits

0x7413,	// (0x00010ca3) aid_touch_sctrl_bottom_ParamLimits

0x743b,	// (0x00010ccb) sctrl_sk_bottom_pane_t1_ParamLimits

0xe9e5,	// (0x00018275) aid_area_touch_clock

0x761c,	// (0x00010eac) aid_vkb2_area_top_pane_cell_ParamLimits

0x761c,	// (0x00010eac) aid_vkb2_area_top_pane_cell

0x7767,	// (0x00010ff7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7767,	// (0x00010ff7) aid_vkb2_area_bottom_pane_cell

0xef42,	// (0x000187d2) popup_char_count_window

0xf3c1,	// (0x00018c51) popup_char_count_window_g1

0xf3ca,	// (0x00018c5a) popup_char_count_window_g2

0xf3d3,	// (0x00018c63) popup_char_count_window_g3

0x0002,

0xfde9,	// (0x00019679) popup_char_count_window_g

0xf3dc,	// (0x00018c6c) popup_char_count_window_t1

0x74ea,	// (0x00010d7a) popup_fep_char_preview_window_ParamLimits

0x74ea,	// (0x00010d7a) popup_fep_char_preview_window

0x763a,	// (0x00010eca) vkb2_top_candi_pane_ParamLimits

0x763a,	// (0x00010eca) vkb2_top_candi_pane

0xf3ea,	// (0x00018c7a) cell_vkb2_top_candi_pane_ParamLimits

0xf3ea,	// (0x00018c7a) cell_vkb2_top_candi_pane

0x7a4e,	// (0x000112de) bg_popup_fep_char_preview_window_ParamLimits

0x7a4e,	// (0x000112de) bg_popup_fep_char_preview_window

0x7a5c,	// (0x000112ec) popup_fep_char_preview_window_t1_ParamLimits

0x7a5c,	// (0x000112ec) popup_fep_char_preview_window_t1

0xf458,	// (0x00018ce8) bg_popup_fep_char_preview_window_g1

0xf460,	// (0x00018cf0) bg_popup_fep_char_preview_window_g2

0xf468,	// (0x00018cf8) bg_popup_fep_char_preview_window_g3

0xf470,	// (0x00018d00) bg_popup_fep_char_preview_window_g4

0xf478,	// (0x00018d08) bg_popup_fep_char_preview_window_g5

0x7a96,	// (0x00011326) bg_popup_fep_char_preview_window_g6

0xf480,	// (0x00018d10) bg_popup_fep_char_preview_window_g7

0xf488,	// (0x00018d18) bg_popup_fep_char_preview_window_g8

0xf490,	// (0x00018d20) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf0,	// (0x00019680) bg_popup_fep_char_preview_window_g

0x71f2,	// (0x00010a82) cell_vkb2_top_candi_pane_g1_ParamLimits

0x71f2,	// (0x00010a82) cell_vkb2_top_candi_pane_g1

0x7200,	// (0x00010a90) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7200,	// (0x00010a90) cell_vkb2_top_candi_pane_g2

0xf437,	// (0x00018cc7) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf437,	// (0x00018cc7) cell_vkb2_top_candi_pane_g3

0x7a9e,	// (0x0001132e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7a9e,	// (0x0001132e) cell_vkb2_top_candi_pane_g4

0xd693,	// (0x00016f23) cell_vkb2_top_candi_pane_g5_ParamLimits

0xd693,	// (0x00016f23) cell_vkb2_top_candi_pane_g5

0x7abf,	// (0x0001134f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7abf,	// (0x0001134f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe03,	// (0x00019693) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe03,	// (0x00019693) cell_vkb2_top_candi_pane_g

0x7acd,	// (0x0001135d) cell_vkb2_top_candi_pane_t1

0x6daa,	// (0x0001063a) aid_size_touch_slider_mark_ParamLimits

0x6daa,	// (0x0001063a) aid_size_touch_slider_mark

0xf085,	// (0x00018915) grid_graphic2_catg_pane_ParamLimits

0xf085,	// (0x00018915) grid_graphic2_catg_pane

0xf123,	// (0x000189b3) popup_grid_graphic2_window_t1_ParamLimits

0xf123,	// (0x000189b3) popup_grid_graphic2_window_t1

0xf135,	// (0x000189c5) popup_grid_graphic2_window_t2_ParamLimits

0xf135,	// (0x000189c5) popup_grid_graphic2_window_t2

0x0001,

0xfdbe,	// (0x0001964e) popup_grid_graphic2_window_t_ParamLimits

0xfdbe,	// (0x0001964e) popup_grid_graphic2_window_t

0x8073,	// (0x00011903) bg_button_pane_cp05_ParamLimits

0xf29d,	// (0x00018b2d) cell_graphic2_control_pane_g1_ParamLimits

0xf498,	// (0x00018d28) cell_graphic2_catg_pane_ParamLimits

0xf498,	// (0x00018d28) cell_graphic2_catg_pane

0x7cdc,	// (0x0001156c) bg_button_pane_cp12

0xf4aa,	// (0x00018d3a) cell_graphic2_catg_pane_g1

0xe9b1,	// (0x00018241) cell_tb_ext_pane_t1_ParamLimits

0x7884,	// (0x00011114) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7884,	// (0x00011114) vkb2_top_cell_right_narrow_pane

0x789c,	// (0x0001112c) vkb2_top_cell_right_wide_pane_ParamLimits

0x789c,	// (0x0001112c) vkb2_top_cell_right_wide_pane

0x6f8d,	// (0x0001081d) bg_vkb2_func_pane_ParamLimits

0x6f8d,	// (0x0001081d) bg_vkb2_func_pane

0x790d,	// (0x0001119d) vkb2_top_cell_left_pane_g1_ParamLimits

0x6f8d,	// (0x0001081d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6f8d,	// (0x0001081d) bg_vkb2_fuc_pane_cp03

0x796b,	// (0x000111fb) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xa2a5,	// (0x00013b35) bg_vkb2_func_pane_g1

0xa2ad,	// (0x00013b3d) bg_vkb2_func_pane_g2

0xa2bd,	// (0x00013b4d) bg_vkb2_func_pane_g3

0xa2b5,	// (0x00013b45) bg_vkb2_func_pane_g4

0xa2c5,	// (0x00013b55) bg_vkb2_func_pane_g5

0xa2cd,	// (0x00013b5d) bg_vkb2_func_pane_g6

0xa2d5,	// (0x00013b65) bg_vkb2_func_pane_g7

0xa2dd,	// (0x00013b6d) bg_vkb2_func_pane_g8

0xa29d,	// (0x00013b2d) bg_vkb2_func_pane_g9

0x0008,

0xfe10,	// (0x000196a0) bg_vkb2_func_pane_g

0x6f8d,	// (0x0001081d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6f8d,	// (0x0001081d) bg_vkb2_fuc_pane_cp01

0x790d,	// (0x0001119d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x790d,	// (0x0001119d) vkb2_top_cell_right_wide_pane_g1

0x6f8d,	// (0x0001081d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6f8d,	// (0x0001081d) bg_vkb2_fuc_pane_cp02

0x796b,	// (0x000111fb) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x796b,	// (0x000111fb) vkb2_top_cell_right_narrow_pane_g1

0xe5df,	// (0x00017e6f) aid_touch_area_decrease_ParamLimits

0xe5df,	// (0x00017e6f) aid_touch_area_decrease

0xe603,	// (0x00017e93) aid_touch_area_increase_ParamLimits

0xe603,	// (0x00017e93) aid_touch_area_increase

0xe60f,	// (0x00017e9f) aid_touch_area_mute_ParamLimits

0xe60f,	// (0x00017e9f) aid_touch_area_mute

0xe633,	// (0x00017ec3) aid_touch_area_slider_ParamLimits

0xe633,	// (0x00017ec3) aid_touch_area_slider

0xe71f,	// (0x00017faf) popup_slider_window_g4_ParamLimits

0xe71f,	// (0x00017faf) popup_slider_window_g4

0xe72b,	// (0x00017fbb) popup_slider_window_g5_ParamLimits

0xe72b,	// (0x00017fbb) popup_slider_window_g5

0xe74d,	// (0x00017fdd) popup_slider_window_g6_ParamLimits

0xe74d,	// (0x00017fdd) popup_slider_window_g6

0xe78d,	// (0x0001801d) popup_slider_window_t2_ParamLimits

0xe78d,	// (0x0001801d) popup_slider_window_t2

0x0001,

0xfd0c,	// (0x0001959c) popup_slider_window_t_ParamLimits

0xfd0c,	// (0x0001959c) popup_slider_window_t

0xe7a5,	// (0x00018035) slider_pane_ParamLimits

0xe7a5,	// (0x00018035) slider_pane

0xf4b3,	// (0x00018d43) slider_pane_g1_ParamLimits

0xf4b3,	// (0x00018d43) slider_pane_g1

0xf4c7,	// (0x00018d57) slider_pane_g2_ParamLimits

0xf4c7,	// (0x00018d57) slider_pane_g2

0xf4dd,	// (0x00018d6d) slider_pane_g3_ParamLimits

0xf4dd,	// (0x00018d6d) slider_pane_g3

0x0003,

0xfe23,	// (0x000196b3) slider_pane_g_ParamLimits

0xfe23,	// (0x000196b3) slider_pane_g

0x6965,	// (0x000101f5) popup_tb_float_extension_window_ParamLimits

0x6965,	// (0x000101f5) popup_tb_float_extension_window

0xf509,	// (0x00018d99) aid_size_cell_tb_float_ext

0x7cdc,	// (0x0001156c) bg_popup_sub_window_cp28

0xf515,	// (0x00018da5) grid_tb_float_ext_pane

0xf51f,	// (0x00018daf) cell_tb_float_ext_pane_ParamLimits

0xf51f,	// (0x00018daf) cell_tb_float_ext_pane

0xf539,	// (0x00018dc9) cell_tb_float_ext_pane_g1

0xf542,	// (0x00018dd2) grid_highlight_pane_cp12

0x70dc,	// (0x0001096c) cell_last_hwr_side_pane_ParamLimits

0x70dc,	// (0x0001096c) cell_last_hwr_side_pane

0xcd9e,	// (0x0001662e) cell_last_hwr_side_pane_g1

0xf54b,	// (0x00018ddb) cell_last_hwr_side_pane_g2

0x0001,

0xfe2c,	// (0x000196bc) cell_last_hwr_side_pane_g

0x7833,	// (0x000110c3) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7833,	// (0x000110c3) vkb2_area_bottom_space_btn_pane

0x71f2,	// (0x00010a82) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xeff7,	// (0x00018887) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7acd,	// (0x0001135d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7aec,	// (0x0001137c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7aec,	// (0x0001137c) vkb2_area_bottom_space_btn_pane_g1

0x7b26,	// (0x000113b6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7b26,	// (0x000113b6) vkb2_area_bottom_space_btn_pane_g2

0x7b5c,	// (0x000113ec) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7b5c,	// (0x000113ec) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe31,	// (0x000196c1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe31,	// (0x000196c1) vkb2_area_bottom_space_btn_pane_g

0x7050,	// (0x000108e0) cel_fep_hwr_func_pane_ParamLimits

0x7050,	// (0x000108e0) cel_fep_hwr_func_pane

0x708c,	// (0x0001091c) cell_hwr_side_button_pane_ParamLimits

0x708c,	// (0x0001091c) cell_hwr_side_button_pane

0xe9e5,	// (0x00018275) aid_area_touch_clock_ParamLimits

0x8073,	// (0x00011903) bg_uniindi_top_pane_ParamLimits

0xe9f7,	// (0x00018287) uniindi_top_pane_g1_ParamLimits

0xea0d,	// (0x0001829d) uniindi_top_pane_g2_ParamLimits

0xea19,	// (0x000182a9) uniindi_top_pane_g3_ParamLimits

0xea2a,	// (0x000182ba) uniindi_top_pane_g4_ParamLimits

0xfd44,	// (0x000195d4) uniindi_top_pane_g_ParamLimits

0xea37,	// (0x000182c7) uniindi_top_pane_t1_ParamLimits

0x8073,	// (0x00011903) bg_vkb2_func_pane_cp01_ParamLimits

0x8073,	// (0x00011903) bg_vkb2_func_pane_cp01

0x0003,	// (0x00009893) cel_fep_hwr_func_pane_g1_ParamLimits

0x0003,	// (0x00009893) cel_fep_hwr_func_pane_g1

0x8073,	// (0x00011903) bg_vkb2_func_pane_cp02_ParamLimits

0x8073,	// (0x00011903) bg_vkb2_func_pane_cp02

0x0003,	// (0x00009893) cell_hwr_side_button_pane_g1_ParamLimits

0x0003,	// (0x00009893) cell_hwr_side_button_pane_g1

0xa0f2,	// (0x00013982) status_pane_g4_ParamLimits

0xa0f2,	// (0x00013982) status_pane_g4

0xa10a,	// (0x0001399a) status_pane_t1

0xcaa1,	// (0x00016331) form2_midp_gauge_slider_cont_pane

0xcaa9,	// (0x00016339) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcabb,	// (0x0001634b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcacd,	// (0x0001635d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0b,	// (0x0001939b) form2_midp_gauge_slider_pane_t_ParamLimits

0xcadf,	// (0x0001636f) form2_midp_slider_pane_ParamLimits

0x74aa,	// (0x00010d3a) aid_size_cell_func_vkb2_ParamLimits

0x74aa,	// (0x00010d3a) aid_size_cell_func_vkb2

0xf4f5,	// (0x00018d85) slider_pane_g4_ParamLimits

0xf4f5,	// (0x00018d85) slider_pane_g4

0x7ba6,	// (0x00011436) form2_midp_gauge_slider_pane_t2_cp01

0x7bb4,	// (0x00011444) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7bb4,	// (0x00011444) form2_midp_gauge_slider_pane_t3_cp01

0x7bd1,	// (0x00011461) form2_midp_slider_pane_cp01

0x7cdc,	// (0x0001156c) navi_smil_pane

0x0070,	// (0x00009900) navi_smil_pane_g1

0x0078,	// (0x00009908) navi_smil_pane_t1

0x0045,	// (0x000098d5) form2_midp_slider_pane_g1

0x004e,	// (0x000098de) form2_midp_slider_pane_g2

0x0056,	// (0x000098e6) form2_midp_slider_pane_g3

0x0045,	// (0x000098d5) form2_midp_slider_pane_g4

0x005e,	// (0x000098ee) form2_midp_slider_pane_g5

0x0004,

0xfe3a,	// (0x000196ca) form2_midp_slider_pane_g

0x7b96,	// (0x00011426) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7b96,	// (0x00011426) vkb2_area_bottom_space_btn_pane_g4

0x9f27,	// (0x000137b7) lc0_navi_pane_ParamLimits

0x9f27,	// (0x000137b7) lc0_navi_pane

0x9f9d,	// (0x0001382d) lc0_stat_indi_pane_ParamLimits

0x9f9d,	// (0x0001382d) lc0_stat_indi_pane

0x9fb4,	// (0x00013844) ls0_title_pane_ParamLimits

0x9fb4,	// (0x00013844) ls0_title_pane

0x8ba9,	// (0x00012439) bg_popup_sub_pane_cp14_ParamLimits

0xe9cc,	// (0x0001825c) list_uniindi_pane_ParamLimits

0xe9d8,	// (0x00018268) uniindi_top_pane_ParamLimits

0xea73,	// (0x00018303) list_single_uniindi_pane_g1_ParamLimits

0xea86,	// (0x00018316) list_single_uniindi_pane_t1_ParamLimits

0x7bda,	// (0x0001146a) lc0_stat_clock_pane_ParamLimits

0x7bda,	// (0x0001146a) lc0_stat_clock_pane

0x00a0,	// (0x00009930) lc0_stat_indi_pane_g1_ParamLimits

0x00a0,	// (0x00009930) lc0_stat_indi_pane_g1

0x0093,	// (0x00009923) lc0_stat_indi_pane_g2_ParamLimits

0x0093,	// (0x00009923) lc0_stat_indi_pane_g2

0x0001,

0xfe45,	// (0x000196d5) lc0_stat_indi_pane_g_ParamLimits

0xfe45,	// (0x000196d5) lc0_stat_indi_pane_g

0x7be7,	// (0x00011477) lc0_uni_indicator_pane_ParamLimits

0x7be7,	// (0x00011477) lc0_uni_indicator_pane

0x00ba,	// (0x0000994a) ls0_title_pane_g1_ParamLimits

0x00ba,	// (0x0000994a) ls0_title_pane_g1

0x00ce,	// (0x0000995e) ls0_title_pane_t1_ParamLimits

0x00ce,	// (0x0000995e) ls0_title_pane_t1

0x7bf4,	// (0x00011484) lc0_uni_indicator_pane_g1_ParamLimits

0x7bf4,	// (0x00011484) lc0_uni_indicator_pane_g1

0x011a,	// (0x000099aa) lc0_stat_clock_pane_t1

0x5be4,	// (0x0000f474) main_ai5_pane

0x0128,	// (0x000099b8) ai5_sk_pane_ParamLimits

0x0128,	// (0x000099b8) ai5_sk_pane

0x0135,	// (0x000099c5) cell_ai5_widget_pane_ParamLimits

0x0135,	// (0x000099c5) cell_ai5_widget_pane

0x0205,	// (0x00009a95) aid_size_cell_widget_grid

0x021b,	// (0x00009aab) bg_ai5_widget_pane_ParamLimits

0x021b,	// (0x00009aab) bg_ai5_widget_pane

0x0285,	// (0x00009b15) cell_ai5_widget_pane_g2

0x0295,	// (0x00009b25) cell_ai5_widget_pane_g3

0x02b4,	// (0x00009b44) cell_ai5_widget_pane_g4

0x02c0,	// (0x00009b50) cell_ai5_widget_pane_g5

0x02cc,	// (0x00009b5c) cell_ai5_widget_pane_g6

0x02d8,	// (0x00009b68) cell_ai5_widget_pane_g7

0x0320,	// (0x00009bb0) cell_ai5_widget_pane_t1_ParamLimits

0x0320,	// (0x00009bb0) cell_ai5_widget_pane_t1

0x033d,	// (0x00009bcd) cell_ai5_widget_pane_t2_ParamLimits

0x033d,	// (0x00009bcd) cell_ai5_widget_pane_t2

0x0355,	// (0x00009be5) cell_ai5_widget_pane_t3_ParamLimits

0x0355,	// (0x00009be5) cell_ai5_widget_pane_t3

0x036d,	// (0x00009bfd) cell_ai5_widget_pane_t4_ParamLimits

0x036d,	// (0x00009bfd) cell_ai5_widget_pane_t4

0x0387,	// (0x00009c17) cell_ai5_widget_pane_t5_ParamLimits

0x0387,	// (0x00009c17) cell_ai5_widget_pane_t5

0x03a6,	// (0x00009c36) cell_ai5_widget_pane_t6_ParamLimits

0x03a6,	// (0x00009c36) cell_ai5_widget_pane_t6

0x03b8,	// (0x00009c48) cell_ai5_widget_pane_t7_ParamLimits

0x03b8,	// (0x00009c48) cell_ai5_widget_pane_t7

0x03d1,	// (0x00009c61) cell_ai5_widget_pane_t8_ParamLimits

0x03d1,	// (0x00009c61) cell_ai5_widget_pane_t8

0x0009,

0xfe5f,	// (0x000196ef) cell_ai5_widget_pane_t_ParamLimits

0xfe5f,	// (0x000196ef) cell_ai5_widget_pane_t

0x041d,	// (0x00009cad) grid_ai5_widget_pane

0x8ba9,	// (0x00012439) highlight_cell_ai5_widget_pane_ParamLimits

0x8ba9,	// (0x00012439) highlight_cell_ai5_widget_pane

0x0431,	// (0x00009cc1) ai5_sk_left_pane

0x043b,	// (0x00009ccb) ai5_sk_middle_pane

0x0445,	// (0x00009cd5) ai5_sk_right_pane

0x044f,	// (0x00009cdf) bg_ai5_widget_pane_g1_ParamLimits

0x044f,	// (0x00009cdf) bg_ai5_widget_pane_g1

0x045b,	// (0x00009ceb) bg_ai5_widget_pane_g2_ParamLimits

0x045b,	// (0x00009ceb) bg_ai5_widget_pane_g2

0x0467,	// (0x00009cf7) bg_ai5_widget_pane_g3_ParamLimits

0x0467,	// (0x00009cf7) bg_ai5_widget_pane_g3

0x0473,	// (0x00009d03) bg_ai5_widget_pane_g4_ParamLimits

0x0473,	// (0x00009d03) bg_ai5_widget_pane_g4

0x047f,	// (0x00009d0f) bg_ai5_widget_pane_g5_ParamLimits

0x047f,	// (0x00009d0f) bg_ai5_widget_pane_g5

0x048b,	// (0x00009d1b) bg_ai5_widget_pane_g6_ParamLimits

0x048b,	// (0x00009d1b) bg_ai5_widget_pane_g6

0x0497,	// (0x00009d27) bg_ai5_widget_pane_g7_ParamLimits

0x0497,	// (0x00009d27) bg_ai5_widget_pane_g7

0x04a3,	// (0x00009d33) bg_ai5_widget_pane_g8_ParamLimits

0x04a3,	// (0x00009d33) bg_ai5_widget_pane_g8

0x04af,	// (0x00009d3f) bg_ai5_widget_pane_g9_ParamLimits

0x04af,	// (0x00009d3f) bg_ai5_widget_pane_g9

0x0008,

0xfe74,	// (0x00019704) bg_ai5_widget_pane_g_ParamLimits

0xfe74,	// (0x00019704) bg_ai5_widget_pane_g

0x04e2,	// (0x00009d72) cell_shortcut_ai5_widget_pane_ParamLimits

0x04e2,	// (0x00009d72) cell_shortcut_ai5_widget_pane

0x9a21,	// (0x000132b1) bg_cell_shortcut_ai5_widget_pane

0x04f3,	// (0x00009d83) cell_grid_ai5_widget_pane_g1

0x04fc,	// (0x00009d8c) highlight_cell_shortcut_ai5_widget_pane

0xa2a5,	// (0x00013b35) ai5_sk_left_pane_g1

0x0504,	// (0x00009d94) ai5_sk_left_pane_g2

0x050c,	// (0x00009d9c) ai5_sk_left_pane_g3

0x0514,	// (0x00009da4) ai5_sk_left_pane_g4

0x0003,

0xfe87,	// (0x00019717) ai5_sk_left_pane_g

0x051c,	// (0x00009dac) ai5_sk_left_pane_t1

0xa2ad,	// (0x00013b3d) ai5_sk_right_pane_g1

0x052a,	// (0x00009dba) ai5_sk_right_pane_g2

0x0532,	// (0x00009dc2) ai5_sk_right_pane_g3

0x053a,	// (0x00009dca) ai5_sk_right_pane_g4

0x0003,

0xfe90,	// (0x00019720) ai5_sk_right_pane_g

0x0542,	// (0x00009dd2) ai5_sk_right_pane_t1

0xa2ad,	// (0x00013b3d) ai5_sk_middle_pane_g1

0xa2a5,	// (0x00013b35) ai5_sk_middle_pane_g2

0xa2c5,	// (0x00013b55) ai5_sk_middle_pane_g3

0x0532,	// (0x00009dc2) ai5_sk_middle_pane_g4

0x050c,	// (0x00009d9c) ai5_sk_middle_pane_g5

0x0550,	// (0x00009de0) ai5_sk_middle_pane_g6

0x0558,	// (0x00009de8) ai5_sk_middle_pane_g7

0x0006,

0xfe99,	// (0x00019729) ai5_sk_middle_pane_g

0x9db3,	// (0x00013643) aid_touch_area_size_lc0_ParamLimits

0x9db3,	// (0x00013643) aid_touch_area_size_lc0

0x7221,	// (0x00010ab1) cell_hwr_candidate_pane_t1_ParamLimits

0x9dcf,	// (0x0001365f) aid_touch_navi_pane

0xa09c,	// (0x0001392c) status_dt_navi_pane_ParamLimits

0xa09c,	// (0x0001392c) status_dt_navi_pane

0xa0a9,	// (0x00013939) status_dt_sta_pane_ParamLimits

0xa0a9,	// (0x00013939) status_dt_sta_pane

0x0560,	// (0x00009df0) dt_sta_controll_pane

0x056d,	// (0x00009dfd) dt_sta_indi_pane

0x057a,	// (0x00009e0a) dt_sta_title_pane

0x8073,	// (0x00011903) bg_dt_sta_indi_pane_ParamLimits

0x8073,	// (0x00011903) bg_dt_sta_indi_pane

0x058b,	// (0x00009e1b) dt_sta_battery_pane

0x0593,	// (0x00009e23) dt_sta_indi_pane_g1

0x059c,	// (0x00009e2c) dt_sta_indi_pane_g2

0x05a5,	// (0x00009e35) dt_sta_indi_pane_g3

0x0002,

0xfea8,	// (0x00019738) dt_sta_indi_pane_g

0x05ae,	// (0x00009e3e) dt_sta_signal_pane

0x8ba9,	// (0x00012439) bg_dt_sta_title_pane_ParamLimits

0x8ba9,	// (0x00012439) bg_dt_sta_title_pane

0xb1de,	// (0x00014a6e) dt_sta_title_pane_g1

0x05b7,	// (0x00009e47) dt_sta_title_pane_t1_ParamLimits

0x05b7,	// (0x00009e47) dt_sta_title_pane_t1

0x7cdc,	// (0x0001156c) bg_dt_sta_control_pane

0x05cc,	// (0x00009e5c) dt_sta_controll_pane_g1

0x05d5,	// (0x00009e65) bg_dt_sta_title_pane_g1

0x05de,	// (0x00009e6e) bg_dt_sta_title_pane_g2

0x05e7,	// (0x00009e77) bg_dt_sta_title_pane_g3

0x0002,

0xfeaf,	// (0x0001973f) bg_dt_sta_title_pane_g

0xcd9e,	// (0x0001662e) bg_dt_sta_indi_pane_g1

0x05f0,	// (0x00009e80) dt_sta_signal_pane_g1

0x05f8,	// (0x00009e88) dt_sta_signal_pane_g2

0x0001,

0xfeb6,	// (0x00019746) dt_sta_signal_pane_g

0x0600,	// (0x00009e90) dt_sta_battery_pane_g1

0x0609,	// (0x00009e99) dt_sta_battery_pane_t1

0xcd9e,	// (0x0001662e) bg_dt_sta_control_pane_g1

0x9495,	// (0x00012d25) fep_china_uni_eep_pane

0x949d,	// (0x00012d2d) fep_china_uni_entry_pane_ParamLimits

0x94ad,	// (0x00012d3d) popup_fep_china_uni_window_g1_ParamLimits

0x94bd,	// (0x00012d4d) popup_fep_china_uni_window_g2_ParamLimits

0x94bd,	// (0x00012d4d) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x00018fae) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x00018fae) popup_fep_china_uni_window_g

0x0618,	// (0x00009ea8) fep_china_uni_eep_pane_g1

0x0620,	// (0x00009eb0) fep_china_uni_eep_pane_t1

0x0067,	// (0x000098f7) aid_touch_area_size_smil_player

0x9f1f,	// (0x000137af) lc0_clock_pane

0xa0fe,	// (0x0001398e) status_pane_g5_ParamLimits

0xa0fe,	// (0x0001398e) status_pane_g5

0x6632,	// (0x0000fec2) popup_keymap_window

0xa0be,	// (0x0001394e) status_icon_pane

0x0295,	// (0x00009b25) cell_ai5_widget_pane_g3_ParamLimits

0x02b4,	// (0x00009b44) cell_ai5_widget_pane_g4_ParamLimits

0x02c0,	// (0x00009b50) cell_ai5_widget_pane_g5_ParamLimits

0x02e4,	// (0x00009b74) cell_ai5_widget_pane_g8_ParamLimits

0x02e4,	// (0x00009b74) cell_ai5_widget_pane_g8

0x02f8,	// (0x00009b88) cell_ai5_widget_pane_g9_ParamLimits

0x02f8,	// (0x00009b88) cell_ai5_widget_pane_g9

0x030c,	// (0x00009b9c) cell_ai5_widget_pane_g10_ParamLimits

0x030c,	// (0x00009b9c) cell_ai5_widget_pane_g10

0x062f,	// (0x00009ebf) status_icon_pane_g1

0x7cdc,	// (0x0001156c) bg_popup_sub_pane_cp13

0x0637,	// (0x00009ec7) popup_keymap_window_t1

0x9ce8,	// (0x00013578) control_pane_g6_ParamLimits

0x9ce8,	// (0x00013578) control_pane_g6

0x9cf5,	// (0x00013585) control_pane_g7_ParamLimits

0x9cf5,	// (0x00013585) control_pane_g7

0x9d02,	// (0x00013592) control_pane_g8_ParamLimits

0x9d02,	// (0x00013592) control_pane_g8

0x0560,	// (0x00009df0) dt_sta_controll_pane_ParamLimits

0x056d,	// (0x00009dfd) dt_sta_indi_pane_ParamLimits

0x057a,	// (0x00009e0a) dt_sta_title_pane_ParamLimits

0x8575,	// (0x00011e05) aid_size_touch_scroll_bar_cale

0x5cbd,	// (0x0000f54d) popup_discreet_window_ParamLimits

0x5cbd,	// (0x0000f54d) popup_discreet_window

0x5d37,	// (0x0000f5c7) popup_sk_window

0xaa1c,	// (0x000142ac) bg_popup_sub_pane_cp28_ParamLimits

0xaa1c,	// (0x000142ac) bg_popup_sub_pane_cp28

0x0645,	// (0x00009ed5) popup_discreet_window_g1_ParamLimits

0x0645,	// (0x00009ed5) popup_discreet_window_g1

0x0665,	// (0x00009ef5) popup_discreet_window_t1_ParamLimits

0x0665,	// (0x00009ef5) popup_discreet_window_t1

0x0683,	// (0x00009f13) popup_discreet_window_t2_ParamLimits

0x0683,	// (0x00009f13) popup_discreet_window_t2

0x0002,

0xfebb,	// (0x0001974b) popup_discreet_window_t_ParamLimits

0xfebb,	// (0x0001974b) popup_discreet_window_t

0x7c0a,	// (0x0001149a) popup_sk_window_g1

0x7c14,	// (0x000114a4) popup_sk_window_g2

0x0001,

0xfec2,	// (0x00019752) popup_sk_window_g

0x7c1e,	// (0x000114ae) popup_sk_window_t1

0x7c2c,	// (0x000114bc) popup_sk_window_t1_copy1

0x0285,	// (0x00009b15) cell_ai5_widget_pane_g2_ParamLimits

0x03e3,	// (0x00009c73) cell_ai5_widget_pane_t9_ParamLimits

0x03e3,	// (0x00009c73) cell_ai5_widget_pane_t9

0x7cdc,	// (0x0001156c) main_fep_fshwr2_pane

0x7c3a,	// (0x000114ca) aid_fshwr2_btn_pane

0x7c46,	// (0x000114d6) aid_fshwr2_syb_pane

0x7c57,	// (0x000114e7) aid_fshwr2_txt_pane

0x7c63,	// (0x000114f3) fshwr2_func_candi_pane

0x7c78,	// (0x00011508) fshwr2_hwr_syb_pane

0x7c8f,	// (0x0001151f) fshwr2_icf_pane

0x7cdc,	// (0x0001156c) fshwr2_icf_bg_pane

0x0783,	// (0x0000a013) fshwr2_icf_pane_t1_ParamLimits

0x0783,	// (0x0000a013) fshwr2_icf_pane_t1

0xcd9e,	// (0x0001662e) fshwr2_func_candi_pane_g1

0x079a,	// (0x0000a02a) fshwr2_func_candi_row_pane_ParamLimits

0x079a,	// (0x0000a02a) fshwr2_func_candi_row_pane

0x07ab,	// (0x0000a03b) cell_fshwr2_syb_pane_ParamLimits

0x07ab,	// (0x0000a03b) cell_fshwr2_syb_pane

0xd019,	// (0x000168a9) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd019,	// (0x000168a9) fshwr2_hwr_syb_pane_g1

0x7cdc,	// (0x0001156c) bg_popup_call_pane_cp01

0x07c7,	// (0x0000a057) fshwr2_func_candi_cell_pane_ParamLimits

0x07c7,	// (0x0000a057) fshwr2_func_candi_cell_pane

0x07f8,	// (0x0000a088) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x07f8,	// (0x0000a088) fshwr2_func_candi_cell_bg_pane

0x0812,	// (0x0000a0a2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x0812,	// (0x0000a0a2) fshwr2_func_candi_cell_pane_g1

0x0832,	// (0x0000a0c2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x0832,	// (0x0000a0c2) fshwr2_func_candi_cell_pane_t1

0x7cdc,	// (0x0001156c) bg_button_pane_cp08

0x9a21,	// (0x000132b1) cell_fshwr2_syb_bg_pane

0x0845,	// (0x0000a0d5) cell_fshwr2_syb_bg_pane_g1

0x084d,	// (0x0000a0dd) cell_fshwr2_syb_bg_pane_t1

0x8ba9,	// (0x00012439) main_tmo_pane

0xb51b,	// (0x00014dab) uni_indicator_pane_g1_ParamLimits

0xb530,	// (0x00014dc0) uni_indicator_pane_g2_ParamLimits

0xb546,	// (0x00014dd6) uni_indicator_pane_g3_ParamLimits

0xb55c,	// (0x00014dec) uni_indicator_pane_g4_ParamLimits

0xb55c,	// (0x00014dec) uni_indicator_pane_g4

0xb570,	// (0x00014e00) uni_indicator_pane_g5_ParamLimits

0xb570,	// (0x00014e00) uni_indicator_pane_g5

0xb584,	// (0x00014e14) uni_indicator_pane_g6_ParamLimits

0xb584,	// (0x00014e14) uni_indicator_pane_g6

0xf922,	// (0x000191b2) uni_indicator_pane_g_ParamLimits

0xe5c1,	// (0x00017e51) popup_tmo_note_window_ParamLimits

0xe5c1,	// (0x00017e51) popup_tmo_note_window

0x748c,	// (0x00010d1c) fshwr2_bg_pane

0x0823,	// (0x0000a0b3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x0823,	// (0x0000a0b3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec7,	// (0x00019757) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec7,	// (0x00019757) fshwr2_func_candi_cell_pane_g

0xcd9e,	// (0x0001662e) bg_popup_window_pane_cp01

0x085c,	// (0x0000a0ec) bg_popup_window_pane_g1_cp01

0x0865,	// (0x0000a0f5) bg_popup_window_pane_cp22_ParamLimits

0x0865,	// (0x0000a0f5) bg_popup_window_pane_cp22

0x0873,	// (0x0000a103) listscroll_tmo_link_pane_ParamLimits

0x0873,	// (0x0000a103) listscroll_tmo_link_pane

0x08b3,	// (0x0000a143) popup_tmo_note_window_g1_ParamLimits

0x08b3,	// (0x0000a143) popup_tmo_note_window_g1

0x08c0,	// (0x0000a150) tmo_note_info_pane_ParamLimits

0x08c0,	// (0x0000a150) tmo_note_info_pane

0x08da,	// (0x0000a16a) list_tmo_note_info_pane_g1_ParamLimits

0x08da,	// (0x0000a16a) list_tmo_note_info_pane_g1

0x08f1,	// (0x0000a181) list_tmo_note_info_pane_g2_ParamLimits

0x08f1,	// (0x0000a181) list_tmo_note_info_pane_g2

0x0001,

0xfecc,	// (0x0001975c) list_tmo_note_info_pane_g_ParamLimits

0xfecc,	// (0x0001975c) list_tmo_note_info_pane_g

0x090d,	// (0x0000a19d) list_tmo_note_info_text_pane_ParamLimits

0x090d,	// (0x0000a19d) list_tmo_note_info_text_pane

0x0992,	// (0x0000a222) list_tmo_link_pane

0x099f,	// (0x0000a22f) scroll_pane_cp20

0x09ac,	// (0x0000a23c) list_single_tmo_link_pane_ParamLimits

0x09ac,	// (0x0000a23c) list_single_tmo_link_pane

0x09bc,	// (0x0000a24c) list_single_tmo_link_pane_t1

0x09ca,	// (0x0000a25a) list_tmo_note_info_text_pane_t1_ParamLimits

0x09ca,	// (0x0000a25a) list_tmo_note_info_text_pane_t1

0x8dec,	// (0x0001267c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8dec,	// (0x0001267c) aid_size_touch_scroll_bar_cp01

0x8c63,	// (0x000124f3) aid_size_touch_slider_marker

0x5d1f,	// (0x0000f5af) popup_settings_window_ParamLimits

0x5d1f,	// (0x0000f5af) popup_settings_window

0x9d7f,	// (0x0001360f) popup_candi_list_indi_window

0x9dcf,	// (0x0001365f) aid_touch_navi_pane_ParamLimits

0x73e7,	// (0x00010c77) rs_clock_indi_pane

0x73f0,	// (0x00010c80) sctrl_sk_bottom_pane_ParamLimits

0x7401,	// (0x00010c91) sctrl_sk_top_pane_ParamLimits

0x7504,	// (0x00010d94) popup_fep_tooltip_window

0x0205,	// (0x00009a95) aid_size_cell_widget_grid_ParamLimits

0x0279,	// (0x00009b09) cell_ai5_widget_pane_g1_ParamLimits

0x0279,	// (0x00009b09) cell_ai5_widget_pane_g1

0x02cc,	// (0x00009b5c) cell_ai5_widget_pane_g6_ParamLimits

0x02d8,	// (0x00009b68) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4a,	// (0x000196da) cell_ai5_widget_pane_g_ParamLimits

0xfe4a,	// (0x000196da) cell_ai5_widget_pane_g

0x0407,	// (0x00009c97) cell_ai5_widget_pane_t10_ParamLimits

0x0407,	// (0x00009c97) cell_ai5_widget_pane_t10

0x041d,	// (0x00009cad) grid_ai5_widget_pane_ParamLimits

0x04bb,	// (0x00009d4b) cell_contacts_ai5_widget_pane_ParamLimits

0x04bb,	// (0x00009d4b) cell_contacts_ai5_widget_pane

0x0698,	// (0x00009f28) popup_discreet_window_t3_ParamLimits

0x0698,	// (0x00009f28) popup_discreet_window_t3

0x7ca4,	// (0x00011534) popup_fshwr2_char_preview_window_ParamLimits

0x7ca4,	// (0x00011534) popup_fshwr2_char_preview_window

0x092b,	// (0x0000a1bb) tmo_note_info_pane_t1

0x0940,	// (0x0000a1d0) tmo_note_info_pane_t2

0x0959,	// (0x0000a1e9) tmo_note_info_pane_t3

0x096e,	// (0x0000a1fe) tmo_note_info_pane_t4

0x0980,	// (0x0000a210) tmo_note_info_pane_t5

0x0004,

0xfed1,	// (0x00019761) tmo_note_info_pane_t

0x0992,	// (0x0000a222) list_tmo_link_pane_ParamLimits

0x099f,	// (0x0000a22f) scroll_pane_cp20_ParamLimits

0x7cdc,	// (0x0001156c) bg_popup_fep_char_preview_window_cp01

0x09e3,	// (0x0000a273) popup_fshwr2_char_preview_window_t1

0x09f1,	// (0x0000a281) popup_candi_list_indi_window_g1

0x09fa,	// (0x0000a28a) bg_cell_contacts_ai5_widget_pane

0x0a06,	// (0x0000a296) cell_contacts_ai5_widget_pane_g1

0x0a19,	// (0x0000a2a9) cell_contacts_ai5_widget_pane_g2

0x0a25,	// (0x0000a2b5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfedc,	// (0x0001976c) cell_contacts_ai5_widget_pane_g

0x0a37,	// (0x0000a2c7) cell_contacts_ai5_widget_pane_t1

0x8ba9,	// (0x00012439) highlight_cell_shortcut_ai5_widget_pane_cp01

0x0ab1,	// (0x0000a341) settings_container_pane

0x9a21,	// (0x000132b1) listscroll_set_pane_copy1

0xc1f4,	// (0x00015a84) scroll_pane_cp121_copy1

0x0abd,	// (0x0000a34d) set_content_pane_copy1

0x0ac5,	// (0x0000a355) aid_height_set_list_copy1_ParamLimits

0x0ac5,	// (0x0000a355) aid_height_set_list_copy1

0xb79f,	// (0x0001502f) aid_size_parent_copy1_ParamLimits

0xb79f,	// (0x0001502f) aid_size_parent_copy1

0x0ad1,	// (0x0000a361) button_value_adjust_pane_cp6_copy1_ParamLimits

0x0ad1,	// (0x0000a361) button_value_adjust_pane_cp6_copy1

0x9d65,	// (0x000135f5) list_highlight_pane_cp2_copy1_ParamLimits

0x9d65,	// (0x000135f5) list_highlight_pane_cp2_copy1

0x0ae5,	// (0x0000a375) list_set_pane_copy1_ParamLimits

0x0ae5,	// (0x0000a375) list_set_pane_copy1

0x0a4c,	// (0x0000a2dc) main_pane_set_t1_copy1_ParamLimits

0x0a4c,	// (0x0000a2dc) main_pane_set_t1_copy1

0x0a86,	// (0x0000a316) main_pane_set_t2_copy1_ParamLimits

0x0a86,	// (0x0000a316) main_pane_set_t2_copy1

0x0b92,	// (0x0000a422) main_pane_set_t3_copy1

0x0ba0,	// (0x0000a430) main_pane_set_t4_copy1

0x0aa5,	// (0x0000a335) set_content_pane_g1_copy1_ParamLimits

0x0aa5,	// (0x0000a335) set_content_pane_g1_copy1

0x0bae,	// (0x0000a43e) setting_code_pane_copy1

0x0bb6,	// (0x0000a446) setting_slider_graphic_pane_copy1

0x0bb6,	// (0x0000a446) setting_slider_pane_copy1

0x0bb6,	// (0x0000a446) setting_text_pane_copy1

0x0bb6,	// (0x0000a446) setting_volume_pane_copy1

0x0bae,	// (0x0000a43e) settings_code_pane_cp2_copy1

0x0bbe,	// (0x0000a44e) settings_code_pane_cp_copy1_ParamLimits

0x0bbe,	// (0x0000a44e) settings_code_pane_cp_copy1

0x0bd2,	// (0x0000a462) volume_set_pane_copy1

0x0bda,	// (0x0000a46a) volume_set_pane_g10_copy1

0x0be2,	// (0x0000a472) volume_set_pane_g1_copy1

0x0bea,	// (0x0000a47a) volume_set_pane_g2_copy1

0x0bf2,	// (0x0000a482) volume_set_pane_g3_copy1

0x0bfa,	// (0x0000a48a) volume_set_pane_g4_copy1

0x0c02,	// (0x0000a492) volume_set_pane_g5_copy1

0x0c0a,	// (0x0000a49a) volume_set_pane_g6_copy1

0x0c12,	// (0x0000a4a2) volume_set_pane_g7_copy1

0x0c1a,	// (0x0000a4aa) volume_set_pane_g8_copy1

0x0c22,	// (0x0000a4b2) volume_set_pane_g9_copy1

0x7dd0,	// (0x00011660) bg_set_opt_pane_cp_copy1_ParamLimits

0x7dd0,	// (0x00011660) bg_set_opt_pane_cp_copy1

0x0c2a,	// (0x0000a4ba) setting_slider_pane_t1_copy1_ParamLimits

0x0c2a,	// (0x0000a4ba) setting_slider_pane_t1_copy1

0x0c48,	// (0x0000a4d8) setting_slider_pane_t2_copy1_ParamLimits

0x0c48,	// (0x0000a4d8) setting_slider_pane_t2_copy1

0x0c62,	// (0x0000a4f2) setting_slider_pane_t3_copy1_ParamLimits

0x0c62,	// (0x0000a4f2) setting_slider_pane_t3_copy1

0x0c7a,	// (0x0000a50a) slider_set_pane_copy1_ParamLimits

0x0c7a,	// (0x0000a50a) slider_set_pane_copy1

0x8ce5,	// (0x00012575) set_opt_bg_pane_g1_copy2

0x8ced,	// (0x0001257d) set_opt_bg_pane_g2_copy2

0x0c90,	// (0x0000a520) set_opt_bg_pane_g3_copy2

0x8cfd,	// (0x0001258d) set_opt_bg_pane_g4_copy2

0x8d05,	// (0x00012595) set_opt_bg_pane_g5_copy2

0x8d0d,	// (0x0001259d) set_opt_bg_pane_g6_copy2

0x0c9a,	// (0x0000a52a) set_opt_bg_pane_g7_copy2

0x0ca2,	// (0x0000a532) set_opt_bg_pane_g8_copy2

0x0cac,	// (0x0000a53c) set_opt_bg_pane_g9_copy2

0x0cb6,	// (0x0000a546) aid_size_touch_slider_mark_copy1_ParamLimits

0x0cb6,	// (0x0000a546) aid_size_touch_slider_mark_copy1

0x0cca,	// (0x0000a55a) slider_set_pane_g1_copy1

0x0cd3,	// (0x0000a563) slider_set_pane_g2_copy1

0xbd41,	// (0x000155d1) slider_set_pane_g3_copy1_ParamLimits

0xbd41,	// (0x000155d1) slider_set_pane_g3_copy1

0xbd55,	// (0x000155e5) slider_set_pane_g4_copy1_ParamLimits

0xbd55,	// (0x000155e5) slider_set_pane_g4_copy1

0xbd6d,	// (0x000155fd) slider_set_pane_g5_copy1_ParamLimits

0xbd6d,	// (0x000155fd) slider_set_pane_g5_copy1

0xbd41,	// (0x000155d1) slider_set_pane_g6_copy1_ParamLimits

0xbd41,	// (0x000155d1) slider_set_pane_g6_copy1

0x0cdb,	// (0x0000a56b) slider_set_pane_g7_copy1_ParamLimits

0x0cdb,	// (0x0000a56b) slider_set_pane_g7_copy1

0x7cf0,	// (0x00011580) bg_set_opt_pane_cp2_copy1

0x0cf1,	// (0x0000a581) setting_slider_graphic_pane_g1_copy1

0x0cfa,	// (0x0000a58a) setting_slider_graphic_pane_t1_copy1

0x0d0a,	// (0x0000a59a) setting_slider_graphic_pane_t2_copy1

0x0d1a,	// (0x0000a5aa) slider_set_pane_cp_copy1

0x0d2a,	// (0x0000a5ba) input_focus_pane_cp1_copy1

0x0d33,	// (0x0000a5c3) list_set_text_pane_copy1

0x0d3b,	// (0x0000a5cb) setting_text_pane_g1_copy1

0x0d44,	// (0x0000a5d4) set_text_pane_t1_copy1

0x0d2a,	// (0x0000a5ba) input_focus_pane_cp2_copy1

0x0d3b,	// (0x0000a5cb) setting_code_pane_g1_copy1

0x0d61,	// (0x0000a5f1) setting_code_pane_t1_copy1

0xc034,	// (0x000158c4) list_set_graphic_pane_copy1

0x7cf0,	// (0x00011580) bg_set_opt_pane_cp4_copy1

0x9723,	// (0x00012fb3) list_set_graphic_pane_g1_copy1_ParamLimits

0x9723,	// (0x00012fb3) list_set_graphic_pane_g1_copy1

0x0d6f,	// (0x0000a5ff) list_set_graphic_pane_g2_copy1

0x973b,	// (0x00012fcb) list_set_graphic_pane_t1_copy1_ParamLimits

0x973b,	// (0x00012fcb) list_set_graphic_pane_t1_copy1

0xcd9e,	// (0x0001662e) rs_clock_indi_pane_g1

0x0d77,	// (0x0000a607) rs_clock_indi_pane_t1

0x0d85,	// (0x0000a615) rs_indi_pane

0x0d8d,	// (0x0000a61d) rs_indi_pane_g1

0x0d96,	// (0x0000a626) rs_indi_pane_g2

0x0d9f,	// (0x0000a62f) rs_indi_pane_g3

0x0002,

0xfee3,	// (0x00019773) rs_indi_pane_g

0x9a21,	// (0x000132b1) bg_popup_preview_window_pane_cp03

0x0da8,	// (0x0000a638) popup_fep_tooltip_window_t1

0xdbff,	// (0x0001748f) popup_note2_window_g2_ParamLimits

0xdbff,	// (0x0001748f) popup_note2_window_g2

0x0001,

0xfc83,	// (0x00019513) popup_note2_window_g_ParamLimits

0xfc83,	// (0x00019513) popup_note2_window_g

0xe1e1,	// (0x00017a71) bg_popup_sub_pane_cp11_ParamLimits

0xe1ee,	// (0x00017a7e) cell_ai3_links_pane_g1_ParamLimits

0xe205,	// (0x00017a95) cell_ai3_links_pane_t1

0x0d44,	// (0x0000a5d4) set_text_pane_t1_copy1_ParamLimits

0x9930,	// (0x000131c0) cell_graphic_popup_pane_cp2_ParamLimits

0x9930,	// (0x000131c0) cell_graphic_popup_pane_cp2

0x0db6,	// (0x0000a646) cell_graphic_popup_pane_g1_cp2

0x8388,	// (0x00011c18) cell_graphic_popup_pane_g2_cp2

0x0dbe,	// (0x0000a64e) cell_graphic_popup_pane_g3_cp2

0x0dc6,	// (0x0000a656) cell_graphic_popup_pane_t2_cp2

0x8399,	// (0x00011c29) grid_highlight_pane_cp3_cp2

0x90cf,	// (0x0001295f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8ba9,	// (0x00012439) main_tmo_pane_ParamLimits

0xe5b5,	// (0x00017e45) popup_tmo_big_image_note_window

0x0269,	// (0x00009af9) cell_ai5_widget_list_pane

0x0271,	// (0x00009b01) cell_ai5_widget_lrg_icon_pane

0x092b,	// (0x0000a1bb) tmo_note_info_pane_t1_ParamLimits

0x0940,	// (0x0000a1d0) tmo_note_info_pane_t2_ParamLimits

0x0959,	// (0x0000a1e9) tmo_note_info_pane_t3_ParamLimits

0x096e,	// (0x0000a1fe) tmo_note_info_pane_t4_ParamLimits

0x0980,	// (0x0000a210) tmo_note_info_pane_t5_ParamLimits

0xfed1,	// (0x00019761) tmo_note_info_pane_t_ParamLimits

0x0ab1,	// (0x0000a341) settings_container_pane_ParamLimits

0x0d22,	// (0x0000a5b2) indicator_popup_pane_cp5

0x0d22,	// (0x0000a5b2) indicator_popup_pane_cp6

0xc034,	// (0x000158c4) list_set_graphic_pane_copy1_ParamLimits

0x7cdc,	// (0x0001156c) bg_popup_window_pane_cp23

0x0dd4,	// (0x0000a664) popup_tmo_big_image_note_window_g1

0x0ddf,	// (0x0000a66f) popup_tmo_big_image_note_window_t1

0x0def,	// (0x0000a67f) popup_tmo_big_image_note_window_t2

0x0dff,	// (0x0000a68f) popup_tmo_big_image_note_window_t3

0x0002,

0xfeea,	// (0x0001977a) popup_tmo_big_image_note_window_t

0x0e0f,	// (0x0000a69f) cell_ai5_widget_lrg_icon_pane_g1

0x0e17,	// (0x0000a6a7) cell_ai5_widget_lrg_icon_pane_t1

0x0e25,	// (0x0000a6b5) cell_ai5_widget_list_row_pane_ParamLimits

0x0e25,	// (0x0000a6b5) cell_ai5_widget_list_row_pane

0x0e3e,	// (0x0000a6ce) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0e3e,	// (0x0000a6ce) cell_ai5_widget_list_row_pane_g1

0x0e4b,	// (0x0000a6db) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0e4b,	// (0x0000a6db) cell_ai5_widget_list_row_pane_t1

0x0e63,	// (0x0000a6f3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0e63,	// (0x0000a6f3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfef1,	// (0x00019781) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef1,	// (0x00019781) cell_ai5_widget_list_row_pane_t

0x5be4,	// (0x0000f474) main_fep_vtchi_ss_pane

0x0e9a,	// (0x0000a72a) popup_fep_char_pre_window

0x0ea2,	// (0x0000a732) popup_fep_ituss_window

0x0ec3,	// (0x0000a753) popup_fep_vkbss_window

0x0ee2,	// (0x0000a772) grid_vkbss_keypad_pane_ParamLimits

0x0ee2,	// (0x0000a772) grid_vkbss_keypad_pane

0x0ef2,	// (0x0000a782) ituss_keypad_pane

0x0f0e,	// (0x0000a79e) aid_vkbss_key_offset_ParamLimits

0x0f0e,	// (0x0000a79e) aid_vkbss_key_offset

0x0f1a,	// (0x0000a7aa) cell_vkbss_key_pane_ParamLimits

0x0f1a,	// (0x0000a7aa) cell_vkbss_key_pane

0xa0da,	// (0x0001396a) bg_cell_vkbss_key_g1_ParamLimits

0xa0da,	// (0x0001396a) bg_cell_vkbss_key_g1

0x0f30,	// (0x0000a7c0) cell_vkbss_key_3p_pane_ParamLimits

0x0f30,	// (0x0000a7c0) cell_vkbss_key_3p_pane

0x0f4a,	// (0x0000a7da) cell_vkbss_key_g1_ParamLimits

0x0f4a,	// (0x0000a7da) cell_vkbss_key_g1

0x0f64,	// (0x0000a7f4) cell_vkbss_key_t1_ParamLimits

0x0f64,	// (0x0000a7f4) cell_vkbss_key_t1

0x0f8f,	// (0x0000a81f) cell_ituss_key_pane_ParamLimits

0x0f8f,	// (0x0000a81f) cell_ituss_key_pane

0x0fa0,	// (0x0000a830) bg_cell_ituss_key_g1_ParamLimits

0x0fa0,	// (0x0000a830) bg_cell_ituss_key_g1

0x0fac,	// (0x0000a83c) cell_ituss_key_pane_g1_ParamLimits

0x0fac,	// (0x0000a83c) cell_ituss_key_pane_g1

0x0fc0,	// (0x0000a850) cell_ituss_key_pane_g2_ParamLimits

0x0fc0,	// (0x0000a850) cell_ituss_key_pane_g2

0x0001,

0xfef8,	// (0x00019788) cell_ituss_key_pane_g_ParamLimits

0xfef8,	// (0x00019788) cell_ituss_key_pane_g

0x0feb,	// (0x0000a87b) cell_ituss_key_t1_ParamLimits

0x0feb,	// (0x0000a87b) cell_ituss_key_t1

0x1019,	// (0x0000a8a9) cell_ituss_key_t2_ParamLimits

0x1019,	// (0x0000a8a9) cell_ituss_key_t2

0x104a,	// (0x0000a8da) cell_ituss_key_t3_ParamLimits

0x104a,	// (0x0000a8da) cell_ituss_key_t3

0x107b,	// (0x0000a90b) cell_ituss_key_t4_ParamLimits

0x107b,	// (0x0000a90b) cell_ituss_key_t4

0x0003,

0xfefd,	// (0x0001978d) cell_ituss_key_t_ParamLimits

0xfefd,	// (0x0001978d) cell_ituss_key_t

0x10ac,	// (0x0000a93c) cell_vkbss_key_3p_pane_g1

0x10b4,	// (0x0000a944) cell_vkbss_key_3p_pane_g2

0x10bc,	// (0x0000a94c) cell_vkbss_key_3p_pane_g3

0x0002,

0xff06,	// (0x00019796) cell_vkbss_key_3p_pane_g

0x7cdc,	// (0x0001156c) bg_popup_fep_char_preview_window_cp02

0x10c4,	// (0x0000a954) popup_fep_char_pre_window_t1

0x01fb,	// (0x00009a8b) main_ai5_sk_pane

0x09fa,	// (0x0000a28a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x0a06,	// (0x0000a296) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x0a19,	// (0x0000a2a9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x0a25,	// (0x0000a2b5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfedc,	// (0x0001976c) cell_contacts_ai5_widget_pane_g_ParamLimits

0x0a37,	// (0x0000a2c7) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8ba9,	// (0x00012439) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x10d3,	// (0x0000a963) main_ai5_sk_pane_g1

0xa85a,	// (0x000140ea) popup_query_code_window_g1

0x0eb8,	// (0x0000a748) popup_fep_vkb_icf_pane

0x0ecc,	// (0x0000a75c) popup_fep_vtchi_icf_pane

0x8ba9,	// (0x00012439) bg_icf_pane

0x10dc,	// (0x0000a96c) list_vkb_icf_pane

0x8ba9,	// (0x00012439) bg_icf_pane_cp01

0x10e8,	// (0x0000a978) vtchi_icf_list_pane

0x10f9,	// (0x0000a989) list_vkb_icf_pane_t1_ParamLimits

0x10f9,	// (0x0000a989) list_vkb_icf_pane_t1

0x1113,	// (0x0000a9a3) vtchi_icf_list_pane_t1_ParamLimits

0x1113,	// (0x0000a9a3) vtchi_icf_list_pane_t1

0x0ea2,	// (0x0000a732) popup_fep_ituss_window_ParamLimits

0x0ecc,	// (0x0000a75c) popup_fep_vtchi_icf_pane_ParamLimits

0x0ef2,	// (0x0000a782) ituss_keypad_pane_ParamLimits

0x0f02,	// (0x0000a792) ituss_sks_pane

0x8ba9,	// (0x00012439) bg_icf_pane_ParamLimits

0x0e8b,	// (0x0000a71b) icf_edit_indi_pane_ParamLimits

0x0e8b,	// (0x0000a71b) icf_edit_indi_pane

0x10dc,	// (0x0000a96c) list_vkb_icf_pane_ParamLimits

0x8ba9,	// (0x00012439) bg_icf_pane_cp01_ParamLimits

0x0e8b,	// (0x0000a71b) icf_edit_indi_pane_cp01_ParamLimits

0x0e8b,	// (0x0000a71b) icf_edit_indi_pane_cp01

0x10f0,	// (0x0000a980) vtchi_query_pane

0xd019,	// (0x000168a9) icf_edit_indi_pane_g1_ParamLimits

0xd019,	// (0x000168a9) icf_edit_indi_pane_g1

0x11a4,	// (0x0000aa34) icf_edit_indi_pane_g2_ParamLimits

0x11a4,	// (0x0000aa34) icf_edit_indi_pane_g2

0x0001,

0xff1e,	// (0x000197ae) icf_edit_indi_pane_g_ParamLimits

0xff1e,	// (0x000197ae) icf_edit_indi_pane_g

0x11b3,	// (0x0000aa43) icf_edit_indi_pane_t1

0x113a,	// (0x0000a9ca) bg_input_focus_pane_cp042

0x856c,	// (0x00011dfc) vtchi_button_pane

0x1143,	// (0x0000a9d3) vtchi_query_pane_t1

0x1151,	// (0x0000a9e1) vtchi_query_pane_t2

0x115f,	// (0x0000a9ef) vtchi_query_pane_t3

0x0002,

0xff0d,	// (0x0001979d) vtchi_query_pane_t

0x7cdc,	// (0x0001156c) bg_button_pane_cp13

0x116d,	// (0x0000a9fd) vtchi_button_pane_g1

0x1175,	// (0x0000aa05) ituss_sks_pane_g1

0x1180,	// (0x0000aa10) ituss_sks_pane_g2

0x0001,

0xff14,	// (0x000197a4) ituss_sks_pane_g

0x1188,	// (0x0000aa18) ituss_sks_pane_t1

0x1196,	// (0x0000aa26) ituss_sks_pane_t2

0x0001,

0xff19,	// (0x000197a9) ituss_sks_pane_t

0xc77f,	// (0x0001600f) indicator_nsta_pane_cp_g1

0xc788,	// (0x00016018) indicator_nsta_pane_cp_g2

0xc790,	// (0x00016020) indicator_nsta_pane_cp_g3

0xc798,	// (0x00016028) indicator_nsta_pane_cp_g4

0xc7a0,	// (0x00016030) indicator_nsta_pane_cp_g5

0xc7a8,	// (0x00016038) indicator_nsta_pane_cp_g6

0x0005,

0xfac1,	// (0x00019351) indicator_nsta_pane_cp_g

0xf28a,	// (0x00018b1a) cell_graphic2_pane_t2_ParamLimits

0xf28a,	// (0x00018b1a) cell_graphic2_pane_t2

0x0001,

0xfdd3,	// (0x00019663) cell_graphic2_pane_t_ParamLimits

0xfdd3,	// (0x00019663) cell_graphic2_pane_t

0xf2b7,	// (0x00018b47) cell_graphic2_control_pane_t1

0x9444,	// (0x00012cd4) signal_pane_g3_ParamLimits

0x9444,	// (0x00012cd4) signal_pane_g3

0x9456,	// (0x00012ce6) signal_pane_g4_ParamLimits

0x9456,	// (0x00012ce6) signal_pane_g4

0x0e75,	// (0x0000a705) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x0e75,	// (0x0000a705) cell_ai5_widget_list_row_pane_t3

0x0fd9,	// (0x0000a869) cell_ituss_key_pane_t1_ParamLimits

0x0fd9,	// (0x0000a869) cell_ituss_key_pane_t1

0xa448,	// (0x00013cd8) form_field_data_wide_pane_vc_t2_ParamLimits

0xa448,	// (0x00013cd8) form_field_data_wide_pane_vc_t2

0xa45c,	// (0x00013cec) form_field_data_wide_pane_vc_t3_ParamLimits

0xa45c,	// (0x00013cec) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0001909a) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0001909a) form_field_data_wide_pane_vc_t

0xc43a,	// (0x00015cca) form_field_slider_wide_pane_vc_t3_ParamLimits

0xc43a,	// (0x00015cca) form_field_slider_wide_pane_vc_t3

0xc514,	// (0x00015da4) form_field_popup_wide_pane_vc_t2_ParamLimits

0xc514,	// (0x00015da4) form_field_popup_wide_pane_vc_t2

0xc52b,	// (0x00015dbb) form_field_popup_wide_pane_vc_t3_ParamLimits

0xc52b,	// (0x00015dbb) form_field_popup_wide_pane_vc_t3

0x0002,

0xfab0,	// (0x00019340) form_field_popup_wide_pane_vc_t_ParamLimits

0xfab0,	// (0x00019340) form_field_popup_wide_pane_vc_t

0x7c3a,	// (0x000114ca) aid_fshwr2_btn_pane_ParamLimits

0x7c46,	// (0x000114d6) aid_fshwr2_syb_pane_ParamLimits

0x7c57,	// (0x000114e7) aid_fshwr2_txt_pane_ParamLimits

0x748c,	// (0x00010d1c) fshwr2_bg_pane_ParamLimits

0x7c63,	// (0x000114f3) fshwr2_func_candi_pane_ParamLimits

0x7c78,	// (0x00011508) fshwr2_hwr_syb_pane_ParamLimits

0x7c8f,	// (0x0001151f) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
