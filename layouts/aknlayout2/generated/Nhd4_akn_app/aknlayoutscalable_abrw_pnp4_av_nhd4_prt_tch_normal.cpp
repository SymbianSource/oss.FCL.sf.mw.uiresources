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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000090db };

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
0x7d6b,	// (0x00010e46) Screen

0x7d7f,	// (0x00010e5a) application_window_ParamLimits

0x7d7f,	// (0x00010e5a) application_window

0x7d99,	// (0x00010e74) screen_g1

0x617c,	// (0x0000f257) area_bottom_pane_ParamLimits

0x617c,	// (0x0000f257) area_bottom_pane

0x623c,	// (0x0000f317) area_top_pane_ParamLimits

0x623c,	// (0x0000f317) area_top_pane

0x62da,	// (0x0000f3b5) main_pane_ParamLimits

0x62da,	// (0x0000f3b5) main_pane

0x7da3,	// (0x00010e7e) misc_graphics

0xa452,	// (0x0001352d) battery_pane_ParamLimits

0xa452,	// (0x0001352d) battery_pane

0xb217,	// (0x000142f2) bg_status_flat_pane_g8

0xb21f,	// (0x000142fa) bg_status_flat_pane_g9

0xa514,	// (0x000135ef) context_pane_ParamLimits

0xa514,	// (0x000135ef) context_pane

0xa62a,	// (0x00013705) navi_pane_ParamLimits

0xa62a,	// (0x00013705) navi_pane

0xa6a7,	// (0x00013782) signal_pane_ParamLimits

0xa6a7,	// (0x00013782) signal_pane

0x0008,

0xf885,	// (0x00018960) bg_status_flat_pane_g

0xa714,	// (0x000137ef) status_pane_g1_ParamLimits

0xa714,	// (0x000137ef) status_pane_g1

0xa728,	// (0x00013803) status_pane_g2_ParamLimits

0xa728,	// (0x00013803) status_pane_g2

0xa734,	// (0x0001380f) status_pane_g3_ParamLimits

0xa734,	// (0x0001380f) status_pane_g3

0x0004,

0xf7b3,	// (0x0001888e) status_pane_g_ParamLimits

0xf7b3,	// (0x0001888e) status_pane_g

0xa766,	// (0x00013841) title_pane_ParamLimits

0xa766,	// (0x00013841) title_pane

0xa7a3,	// (0x0001387e) uni_indicator_pane_ParamLimits

0xa7a3,	// (0x0001387e) uni_indicator_pane

0x9dcb,	// (0x00012ea6) bg_list_pane_ParamLimits

0x9dcb,	// (0x00012ea6) bg_list_pane

0x9deb,	// (0x00012ec6) find_pane

0x9df3,	// (0x00012ece) listscroll_app_pane_ParamLimits

0x9df3,	// (0x00012ece) listscroll_app_pane

0x9dff,	// (0x00012eda) listscroll_form_pane

0x9e07,	// (0x00012ee2) listscroll_gen_pane_ParamLimits

0x9e07,	// (0x00012ee2) listscroll_gen_pane

0x9dff,	// (0x00012eda) listscroll_set_pane

0x8fc2,	// (0x0001209d) main_idle_act_pane

0x9aa7,	// (0x00012b82) main_idle_trad_pane

0x9aa7,	// (0x00012b82) main_list_empty_pane

0x9e2d,	// (0x00012f08) main_midp_pane

0x9e39,	// (0x00012f14) main_pane_g1_ParamLimits

0x9e39,	// (0x00012f14) main_pane_g1

0x9e47,	// (0x00012f22) popup_ai_message_window_ParamLimits

0x9e47,	// (0x00012f22) popup_ai_message_window

0x9ef1,	// (0x00012fcc) popup_fep_china_uni_window_ParamLimits

0x9ef1,	// (0x00012fcc) popup_fep_china_uni_window

0x9f4b,	// (0x00013026) popup_fep_japan_candidate_window_ParamLimits

0x9f4b,	// (0x00013026) popup_fep_japan_candidate_window

0x9f69,	// (0x00013044) popup_fep_japan_predictive_window_ParamLimits

0x9f69,	// (0x00013044) popup_fep_japan_predictive_window

0x9f99,	// (0x00013074) popup_find_window

0x9fa6,	// (0x00013081) popup_grid_graphic_window_ParamLimits

0x9fa6,	// (0x00013081) popup_grid_graphic_window

0x9fcc,	// (0x000130a7) popup_large_graphic_colour_window

0x9ff2,	// (0x000130cd) popup_menu_window_ParamLimits

0x9ff2,	// (0x000130cd) popup_menu_window

0xa1ac,	// (0x00013287) popup_note_image_window

0xa198,	// (0x00013273) popup_note_wait_window_ParamLimits

0xa198,	// (0x00013273) popup_note_wait_window

0xa198,	// (0x00013273) popup_note_window_ParamLimits

0xa198,	// (0x00013273) popup_note_window

0xa202,	// (0x000132dd) popup_query_code_window_ParamLimits

0xa202,	// (0x000132dd) popup_query_code_window

0xa216,	// (0x000132f1) popup_query_data_code_window_ParamLimits

0xa216,	// (0x000132f1) popup_query_data_code_window

0xa22d,	// (0x00013308) popup_query_data_window_ParamLimits

0xa22d,	// (0x00013308) popup_query_data_window

0xa245,	// (0x00013320) popup_query_sat_info_window_ParamLimits

0xa245,	// (0x00013320) popup_query_sat_info_window

0xa27e,	// (0x00013359) popup_snote_single_graphic_window_ParamLimits

0xa27e,	// (0x00013359) popup_snote_single_graphic_window

0xa27e,	// (0x00013359) popup_snote_single_text_window_ParamLimits

0xa27e,	// (0x00013359) popup_snote_single_text_window

0xa293,	// (0x0001336e) popup_sub_window_general

0xa3c1,	// (0x0001349c) popup_window_general_ParamLimits

0xa3c1,	// (0x0001349c) popup_window_general

0xa3d6,	// (0x000134b1) power_save_pane

0x6a21,	// (0x0000fafc) control_pane_g1_ParamLimits

0x6a21,	// (0x0000fafc) control_pane_g1

0x6a48,	// (0x0000fb23) control_pane_g2_ParamLimits

0x6a48,	// (0x0000fb23) control_pane_g2

0x9d6c,	// (0x00012e47) control_pane_g3_ParamLimits

0x9d6c,	// (0x00012e47) control_pane_g3

0x0007,

0xf79b,	// (0x00018876) control_pane_g_ParamLimits

0xf79b,	// (0x00018876) control_pane_g

0x6a8c,	// (0x0000fb67) control_pane_t1_ParamLimits

0x6a8c,	// (0x0000fb67) control_pane_t1

0x6ad8,	// (0x0000fbb3) control_pane_t2_ParamLimits

0x6ad8,	// (0x0000fbb3) control_pane_t2

0x0002,

0xf7ac,	// (0x00018887) control_pane_t_ParamLimits

0xf7ac,	// (0x00018887) control_pane_t

0x9c8d,	// (0x00012d68) navi_navi_volume_pane_cp1

0x9c96,	// (0x00012d71) status_small_icon_pane

0x9c9e,	// (0x00012d79) status_small_pane_g1_ParamLimits

0x9c9e,	// (0x00012d79) status_small_pane_g1

0x9cd2,	// (0x00012dad) status_small_pane_g2_ParamLimits

0x9cd2,	// (0x00012dad) status_small_pane_g2

0x9cde,	// (0x00012db9) status_small_pane_g3_ParamLimits

0x9cde,	// (0x00012db9) status_small_pane_g3

0x9cea,	// (0x00012dc5) status_small_pane_g4_ParamLimits

0x9cea,	// (0x00012dc5) status_small_pane_g4

0x9cf6,	// (0x00012dd1) status_small_pane_g5_ParamLimits

0x9cf6,	// (0x00012dd1) status_small_pane_g5

0x9d05,	// (0x00012de0) status_small_pane_g6_ParamLimits

0x9d05,	// (0x00012de0) status_small_pane_g6

0x0007,

0xf78a,	// (0x00018865) status_small_pane_g_ParamLimits

0xf78a,	// (0x00018865) status_small_pane_g

0x9d35,	// (0x00012e10) status_small_pane_t1

0x9d58,	// (0x00012e33) status_small_wait_pane_ParamLimits

0x9d58,	// (0x00012e33) status_small_wait_pane

0x94b6,	// (0x00012591) aid_levels_signal_ParamLimits

0x94b6,	// (0x00012591) aid_levels_signal

0x94c8,	// (0x000125a3) signal_pane_g1_ParamLimits

0x94c8,	// (0x000125a3) signal_pane_g1

0x94dd,	// (0x000125b8) signal_pane_g2_ParamLimits

0x94dd,	// (0x000125b8) signal_pane_g2

0x0001,

0xf71f,	// (0x000187fa) signal_pane_g_ParamLimits

0xf71f,	// (0x000187fa) signal_pane_g

0x94f2,	// (0x000125cd) context_pane_g1

0x7dad,	// (0x00010e88) title_pane_g1

0x7de3,	// (0x00010ebe) title_pane_t1

0x7e4b,	// (0x00010f26) title_pane_t2

0x7e71,	// (0x00010f4c) title_pane_t3

0x0002,

0xf573,	// (0x0001864e) title_pane_t

0xa7bb,	// (0x00013896) aid_levels_battery_ParamLimits

0xa7bb,	// (0x00013896) aid_levels_battery

0xa7cf,	// (0x000138aa) battery_pane_g1_ParamLimits

0xa7cf,	// (0x000138aa) battery_pane_g1

0xa7e5,	// (0x000138c0) battery_pane_g2_ParamLimits

0xa7e5,	// (0x000138c0) battery_pane_g2

0x0001,

0xf7be,	// (0x00018899) battery_pane_g_ParamLimits

0xf7be,	// (0x00018899) battery_pane_g

0xbb47,	// (0x00014c22) uni_indicator_pane_g1

0xbb5c,	// (0x00014c37) uni_indicator_pane_g2

0xbb72,	// (0x00014c4d) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x00018a08) uni_indicator_pane_g

0x9917,	// (0x000129f2) navi_icon_pane_ParamLimits

0x9917,	// (0x000129f2) navi_icon_pane

0x985e,	// (0x00012939) navi_midp_pane

0x9933,	// (0x00012a0e) navi_navi_pane

0x993d,	// (0x00012a18) navi_text_pane_ParamLimits

0x993d,	// (0x00012a18) navi_text_pane

0x7d99,	// (0x00010e74) status_small_wait_pane_g1

0x82ae,	// (0x00011389) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x00018a03) status_small_wait_pane_g

0xb86a,	// (0x00014945) navi_navi_icon_text_pane

0xb872,	// (0x0001494d) navi_navi_pane_g1_ParamLimits

0xb872,	// (0x0001494d) navi_navi_pane_g1

0xb884,	// (0x0001495f) navi_navi_pane_g2_ParamLimits

0xb884,	// (0x0001495f) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x000189d1) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x000189d1) navi_navi_pane_g

0xb896,	// (0x00014971) navi_navi_tabs_pane

0xb89f,	// (0x0001497a) navi_navi_text_pane

0xb86a,	// (0x00014945) navi_navi_volume_pane

0xb843,	// (0x0001491e) navi_text_pane_t1

0xb834,	// (0x0001490f) navi_icon_pane_g1

0xb787,	// (0x00014862) navi_navi_text_pane_t1

0x6e6c,	// (0x0000ff47) navi_navi_volume_pane_g1

0x6e74,	// (0x0000ff4f) volume_small_pane

0xb6ed,	// (0x000147c8) navi_navi_icon_text_pane_g1

0xb6f5,	// (0x000147d0) navi_navi_icon_text_pane_t1

0x9933,	// (0x00012a0e) navi_tabs_2_long_pane

0x9933,	// (0x00012a0e) navi_tabs_2_pane

0x9933,	// (0x00012a0e) navi_tabs_3_long_pane

0x9933,	// (0x00012a0e) navi_tabs_3_pane

0x9933,	// (0x00012a0e) navi_tabs_4_pane

0x6e4c,	// (0x0000ff27) tabs_2_active_pane_ParamLimits

0x6e4c,	// (0x0000ff27) tabs_2_active_pane

0x6e5c,	// (0x0000ff37) tabs_2_passive_pane_ParamLimits

0x6e5c,	// (0x0000ff37) tabs_2_passive_pane

0x6e1a,	// (0x0000fef5) tabs_3_active_pane_ParamLimits

0x6e1a,	// (0x0000fef5) tabs_3_active_pane

0x6e2a,	// (0x0000ff05) tabs_3_passive_pane_ParamLimits

0x6e2a,	// (0x0000ff05) tabs_3_passive_pane

0x6e3b,	// (0x0000ff16) tabs_3_passive_pane_cp_ParamLimits

0x6e3b,	// (0x0000ff16) tabs_3_passive_pane_cp

0x6dd6,	// (0x0000feb1) tabs_4_active_pane_ParamLimits

0x6dd6,	// (0x0000feb1) tabs_4_active_pane

0x6de7,	// (0x0000fec2) tabs_4_passive_pane_ParamLimits

0x6de7,	// (0x0000fec2) tabs_4_passive_pane

0x6df8,	// (0x0000fed3) tabs_4_passive_pane_cp_ParamLimits

0x6df8,	// (0x0000fed3) tabs_4_passive_pane_cp

0x6e09,	// (0x0000fee4) tabs_4_passive_pane_cp2_ParamLimits

0x6e09,	// (0x0000fee4) tabs_4_passive_pane_cp2

0x6db2,	// (0x0000fe8d) tabs_2_long_active_pane_ParamLimits

0x6db2,	// (0x0000fe8d) tabs_2_long_active_pane

0x6dc4,	// (0x0000fe9f) tabs_2_long_passive_pane_ParamLimits

0x6dc4,	// (0x0000fe9f) tabs_2_long_passive_pane

0x6d6d,	// (0x0000fe48) tabs_3_long_active_pane_ParamLimits

0x6d6d,	// (0x0000fe48) tabs_3_long_active_pane

0x6d86,	// (0x0000fe61) tabs_3_long_passive_pane_ParamLimits

0x6d86,	// (0x0000fe61) tabs_3_long_passive_pane

0x6d99,	// (0x0000fe74) tabs_3_long_passive_pane_cp_ParamLimits

0x6d99,	// (0x0000fe74) tabs_3_long_passive_pane_cp

0x6d13,	// (0x0000fdee) volume_small_pane_g1

0x6d1c,	// (0x0000fdf7) volume_small_pane_g2

0x6d25,	// (0x0000fe00) volume_small_pane_g3

0x6d2e,	// (0x0000fe09) volume_small_pane_g4

0x6d37,	// (0x0000fe12) volume_small_pane_g5

0x6d40,	// (0x0000fe1b) volume_small_pane_g6

0x6d49,	// (0x0000fe24) volume_small_pane_g7

0x6d52,	// (0x0000fe2d) volume_small_pane_g8

0x6d5b,	// (0x0000fe36) volume_small_pane_g9

0x6d64,	// (0x0000fe3f) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x0001899d) volume_small_pane_g

0x7e83,	// (0x00010f5e) bg_active_tab_pane_cp2_ParamLimits

0x7e83,	// (0x00010f5e) bg_active_tab_pane_cp2

0x7e91,	// (0x00010f6c) tabs_3_active_pane_g1

0x7e99,	// (0x00010f74) tabs_3_active_pane_t1

0x7e83,	// (0x00010f5e) bg_passive_tab_pane_cp2_ParamLimits

0x7e83,	// (0x00010f5e) bg_passive_tab_pane_cp2

0x7e91,	// (0x00010f6c) tabs_3_passive_pane_g1

0x7e99,	// (0x00010f74) tabs_3_passive_pane_t1

0x7e83,	// (0x00010f5e) bg_active_tab_pane_cp3_ParamLimits

0x7e83,	// (0x00010f5e) bg_active_tab_pane_cp3

0x7eab,	// (0x00010f86) tabs_4_active_pane_g1

0x7eb3,	// (0x00010f8e) tabs_4_active_pane_t1

0x7e83,	// (0x00010f5e) bg_passive_tab_pane_cp3_ParamLimits

0x7e83,	// (0x00010f5e) bg_passive_tab_pane_cp3

0x7eab,	// (0x00010f86) tabs_4_1_passive_pane_g1

0x7eb3,	// (0x00010f8e) tabs_4_1_passive_pane_t1

0x9e2d,	// (0x00012f08) list_highlight_pane_cp2

0xbdf3,	// (0x00014ece) list_set_pane_ParamLimits

0xbdf3,	// (0x00014ece) list_set_pane

0xbe95,	// (0x00014f70) main_pane_set_t1_ParamLimits

0xbe95,	// (0x00014f70) main_pane_set_t1

0xbeb5,	// (0x00014f90) main_pane_set_t2_ParamLimits

0xbeb5,	// (0x00014f90) main_pane_set_t2

0xbec9,	// (0x00014fa4) main_pane_set_t3_ParamLimits

0xbec9,	// (0x00014fa4) main_pane_set_t3

0xbedb,	// (0x00014fb6) main_pane_set_t4_ParamLimits

0xbedb,	// (0x00014fb6) main_pane_set_t4

0x0003,

0xf992,	// (0x00018a6d) main_pane_set_t_ParamLimits

0xf992,	// (0x00018a6d) main_pane_set_t

0xbeed,	// (0x00014fc8) setting_code_pane

0xbef7,	// (0x00014fd2) setting_slider_graphic_pane

0xbef7,	// (0x00014fd2) setting_slider_pane

0xbef7,	// (0x00014fd2) setting_text_pane

0xbef7,	// (0x00014fd2) setting_volume_pane

0x650b,	// (0x0000f5e6) volume_set_pane

0x7e83,	// (0x00010f5e) bg_set_opt_pane_cp

0x6513,	// (0x0000f5ee) setting_slider_pane_t1

0x652c,	// (0x0000f607) setting_slider_pane_t2

0x6545,	// (0x0000f620) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00018655) setting_slider_pane_t

0x655c,	// (0x0000f637) slider_set_pane

0x7da3,	// (0x00010e7e) bg_set_opt_pane_cp2

0x7ec5,	// (0x00010fa0) setting_slider_graphic_pane_g1

0x6572,	// (0x0000f64d) setting_slider_graphic_pane_t1

0x6581,	// (0x0000f65c) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0001865c) setting_slider_graphic_pane_t

0x6590,	// (0x0000f66b) slider_set_pane_cp

0x7da3,	// (0x00010e7e) input_focus_pane_cp1

0xbdb2,	// (0x00014e8d) list_set_text_pane

0x7d99,	// (0x00010e74) setting_text_pane_g1

0x7da3,	// (0x00010e7e) input_focus_pane_cp2

0x7d99,	// (0x00010e74) setting_code_pane_g1

0x7ece,	// (0x00010fa9) setting_code_pane_t1

0x7edc,	// (0x00010fb7) set_text_pane_t1_ParamLimits

0x7edc,	// (0x00010fb7) set_text_pane_t1

0x8d98,	// (0x00011e73) set_opt_bg_pane_g1

0x8da0,	// (0x00011e7b) set_opt_bg_pane_g2

0xbd92,	// (0x00014e6d) set_opt_bg_pane_g3

0x8db0,	// (0x00011e8b) set_opt_bg_pane_g4

0x8db8,	// (0x00011e93) set_opt_bg_pane_g5

0x8dc0,	// (0x00011e9b) set_opt_bg_pane_g6

0xbd9a,	// (0x00014e75) set_opt_bg_pane_g7

0xbda2,	// (0x00014e7d) set_opt_bg_pane_g8

0xbdaa,	// (0x00014e85) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x00018a5a) set_opt_bg_pane_g

0xbd85,	// (0x00014e60) slider_set_pane_g1

0x6ee1,	// (0x0000ffbc) slider_set_pane_g2

0x0006,

0xf970,	// (0x00018a4b) slider_set_pane_g

0x6e7d,	// (0x0000ff58) volume_set_pane_g1

0x6e85,	// (0x0000ff60) volume_set_pane_g2

0x6e8d,	// (0x0000ff68) volume_set_pane_g3

0x6e95,	// (0x0000ff70) volume_set_pane_g4

0x6e9d,	// (0x0000ff78) volume_set_pane_g5

0x6ea5,	// (0x0000ff80) volume_set_pane_g6

0x6ead,	// (0x0000ff88) volume_set_pane_g7

0x6eb5,	// (0x0000ff90) volume_set_pane_g8

0x6ebd,	// (0x0000ff98) volume_set_pane_g9

0x6ec5,	// (0x0000ffa0) volume_set_pane_g10

0x0009,

0xf948,	// (0x00018a23) volume_set_pane_g

0x7ef6,	// (0x00010fd1) indicator_pane_ParamLimits

0x7ef6,	// (0x00010fd1) indicator_pane

0x7f02,	// (0x00010fdd) main_idle_pane_g2_ParamLimits

0x7f02,	// (0x00010fdd) main_idle_pane_g2

0x7f2a,	// (0x00011005) main_pane_idle_g1_ParamLimits

0x7f2a,	// (0x00011005) main_pane_idle_g1

0x7f37,	// (0x00011012) popup_clock_digital_analogue_window_ParamLimits

0x7f37,	// (0x00011012) popup_clock_digital_analogue_window

0x7f4e,	// (0x00011029) soft_indicator_pane_ParamLimits

0x7f4e,	// (0x00011029) soft_indicator_pane

0x7f5a,	// (0x00011035) wallpaper_pane_ParamLimits

0x7f5a,	// (0x00011035) wallpaper_pane

0x7d99,	// (0x00010e74) wallpaper_pane_g1

0x7f6e,	// (0x00011049) indicator_pane_g1_ParamLimits

0x7f6e,	// (0x00011049) indicator_pane_g1

0xc271,	// (0x0001534c) navi_navi_icon_text_pane_srt_g1

0x7f89,	// (0x00011064) soft_indicator_pane_t1

0x7fa3,	// (0x0001107e) aid_ps_area_pane

0x7fb4,	// (0x0001108f) aid_ps_clock_pane

0x7fc2,	// (0x0001109d) aid_ps_indicator_pane

0x7fce,	// (0x000110a9) indicator_ps_pane_ParamLimits

0x7fce,	// (0x000110a9) indicator_ps_pane

0x7fdd,	// (0x000110b8) power_save_pane_g1_ParamLimits

0x7fdd,	// (0x000110b8) power_save_pane_g1

0x7fe9,	// (0x000110c4) power_save_pane_g2_ParamLimits

0x7fe9,	// (0x000110c4) power_save_pane_g2

0x6130,	// (0x0000f20b) aid_navinavi_width_pane

0x7fa3,	// (0x0001107e) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00018661) power_save_pane_g_ParamLimits

0xf586,	// (0x00018661) power_save_pane_g

0x7ff7,	// (0x000110d2) power_save_pane_t1_ParamLimits

0x7ff7,	// (0x000110d2) power_save_pane_t1

0x7fb4,	// (0x0001108f) aid_ps_clock_pane_ParamLimits

0x7fc2,	// (0x0001109d) aid_ps_indicator_pane_ParamLimits

0x8009,	// (0x000110e4) power_save_pane_t4_ParamLimits

0x8009,	// (0x000110e4) power_save_pane_t4

0x0001,

0xf58b,	// (0x00018666) power_save_pane_t_ParamLimits

0xf58b,	// (0x00018666) power_save_pane_t

0x8033,	// (0x0001110e) power_save_t3_ParamLimits

0x8033,	// (0x0001110e) power_save_t3

0x801e,	// (0x000110f9) power_save_t2_ParamLimits

0x801e,	// (0x000110f9) power_save_t2

0x8048,	// (0x00011123) indicator_ps_pane_g1

0x8051,	// (0x0001112c) ai_gene_pane_ParamLimits

0x8051,	// (0x0001112c) ai_gene_pane

0x805d,	// (0x00011138) ai_links_pane_ParamLimits

0x805d,	// (0x00011138) ai_links_pane

0x8069,	// (0x00011144) indicator_pane_cp1_ParamLimits

0x8069,	// (0x00011144) indicator_pane_cp1

0x8075,	// (0x00011150) main_pane_idle_g1_cp_ParamLimits

0x8075,	// (0x00011150) main_pane_idle_g1_cp

0x8081,	// (0x0001115c) popup_ai_links_title_window

0x808a,	// (0x00011165) soft_indicator_pane_cp1_ParamLimits

0x808a,	// (0x00011165) soft_indicator_pane_cp1

0xbb35,	// (0x00014c10) ai_links_pane_g1

0xbb3e,	// (0x00014c19) grid_ai_links_pane

0xbb18,	// (0x00014bf3) ai_gene_pane_1

0xbb23,	// (0x00014bfe) ai_gene_pane_2

0xbb2c,	// (0x00014c07) list_highlight_pane_cp4

0xbafc,	// (0x00014bd7) cell_ai_link_pane_ParamLimits

0xbafc,	// (0x00014bd7) cell_ai_link_pane

0xbaf4,	// (0x00014bcf) cell_ai_link_pane_g1

0x82ae,	// (0x00011389) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x000189fe) cell_ai_link_pane_g

0x7da3,	// (0x00010e7e) grid_highlight_cp2

0x7da3,	// (0x00010e7e) bg_popup_sub_pane_cp1

0x80a4,	// (0x0001117f) popup_ai_links_title_window_t1

0xba42,	// (0x00014b1d) ai_gene_pane_1_g1_ParamLimits

0xba42,	// (0x00014b1d) ai_gene_pane_1_g1

0xba4e,	// (0x00014b29) ai_gene_pane_1_g2_ParamLimits

0xba4e,	// (0x00014b29) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x000189f4) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x000189f4) ai_gene_pane_1_g

0xba5b,	// (0x00014b36) ai_gene_pane_1_t1_ParamLimits

0xba5b,	// (0x00014b36) ai_gene_pane_1_t1

0xba8f,	// (0x00014b6a) grid_ai_soft_ind_pane

0xba2d,	// (0x00014b08) ai_gene_pane_2_t1_ParamLimits

0xba2d,	// (0x00014b08) ai_gene_pane_2_t1

0x80b3,	// (0x0001118e) main_pane_empty_t1_ParamLimits

0x80b3,	// (0x0001118e) main_pane_empty_t1

0x80cb,	// (0x000111a6) main_pane_empty_t2_ParamLimits

0x80cb,	// (0x000111a6) main_pane_empty_t2

0x80e0,	// (0x000111bb) main_pane_empty_t3_ParamLimits

0x80e0,	// (0x000111bb) main_pane_empty_t3

0x80f2,	// (0x000111cd) main_pane_empty_t4_ParamLimits

0x80f2,	// (0x000111cd) main_pane_empty_t4

0x8104,	// (0x000111df) main_pane_empty_t5_ParamLimits

0x8104,	// (0x000111df) main_pane_empty_t5

0x0004,

0xf590,	// (0x0001866b) main_pane_empty_t_ParamLimits

0xf590,	// (0x0001866b) main_pane_empty_t

0x8e91,	// (0x00011f6c) bg_popup_window_pane_ParamLimits

0x8e91,	// (0x00011f6c) bg_popup_window_pane

0xb795,	// (0x00014870) find_popup_pane_cp2_ParamLimits

0xb795,	// (0x00014870) find_popup_pane_cp2

0xb7a1,	// (0x0001487c) heading_pane_ParamLimits

0xb7a1,	// (0x0001487c) heading_pane

0x7da3,	// (0x00010e7e) bg_popup_sub_pane

0xb70f,	// (0x000147ea) bg_popup_window_pane_g1_ParamLimits

0xb70f,	// (0x000147ea) bg_popup_window_pane_g1

0xb71b,	// (0x000147f6) bg_popup_window_pane_g2_ParamLimits

0xb71b,	// (0x000147f6) bg_popup_window_pane_g2

0xb727,	// (0x00014802) bg_popup_window_pane_g3_ParamLimits

0xb727,	// (0x00014802) bg_popup_window_pane_g3

0xb733,	// (0x0001480e) bg_popup_window_pane_g4_ParamLimits

0xb733,	// (0x0001480e) bg_popup_window_pane_g4

0xb73f,	// (0x0001481a) bg_popup_window_pane_g5_ParamLimits

0xb73f,	// (0x0001481a) bg_popup_window_pane_g5

0xb74b,	// (0x00014826) bg_popup_window_pane_g6_ParamLimits

0xb74b,	// (0x00014826) bg_popup_window_pane_g6

0xb757,	// (0x00014832) bg_popup_window_pane_g7_ParamLimits

0xb757,	// (0x00014832) bg_popup_window_pane_g7

0xb763,	// (0x0001483e) bg_popup_window_pane_g8_ParamLimits

0xb763,	// (0x0001483e) bg_popup_window_pane_g8

0xb76f,	// (0x0001484a) bg_popup_window_pane_g9_ParamLimits

0xb76f,	// (0x0001484a) bg_popup_window_pane_g9

0xb77b,	// (0x00014856) bg_popup_window_pane_g10_ParamLimits

0xb77b,	// (0x00014856) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x000189bc) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x000189bc) bg_popup_window_pane_g

0xb6a4,	// (0x0001477f) bg_popup_heading_pane_ParamLimits

0xb6a4,	// (0x0001477f) bg_popup_heading_pane

0x6f69,	// (0x00010044) tabs_4_passive_pane_cp_srt_ParamLimits

0x6f69,	// (0x00010044) tabs_4_passive_pane_cp_srt

0x6f7b,	// (0x00010056) tabs_4_passive_pane_srt_ParamLimits

0xb6b8,	// (0x00014793) heading_pane_g2

0x6f7b,	// (0x00010056) tabs_4_passive_pane_srt

0x9e2d,	// (0x00012f08) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9e2d,	// (0x00012f08) bg_passive_tab_pane_cp3_srt

0xb6c0,	// (0x0001479b) heading_pane_t1_ParamLimits

0xb6c0,	// (0x0001479b) heading_pane_t1

0xb6d7,	// (0x000147b2) heading_pane_t2_ParamLimits

0xb6d7,	// (0x000147b2) heading_pane_t2

0x0001,

0xf8dc,	// (0x000189b7) heading_pane_t_ParamLimits

0xf8dc,	// (0x000189b7) heading_pane_t

0xb1df,	// (0x000142ba) bg_popup_heading_pane_g1

0xb28e,	// (0x00014369) bg_popup_heading_pane_g2

0xb298,	// (0x00014373) bg_popup_heading_pane_g3

0xb2a2,	// (0x0001437d) bg_popup_heading_pane_g4

0xb2ac,	// (0x00014387) bg_popup_heading_pane_g5

0xb2b6,	// (0x00014391) bg_popup_heading_pane_g6

0xb2be,	// (0x00014399) bg_popup_heading_pane_g7

0xb2c6,	// (0x000143a1) bg_popup_heading_pane_g8

0xb2d0,	// (0x000143ab) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x00018973) bg_popup_heading_pane_g

0xa8df,	// (0x000139ba) bg_popup_sub_pane_g1

0xa8ef,	// (0x000139ca) bg_popup_sub_pane_g2

0xa8e7,	// (0x000139c2) bg_popup_sub_pane_g3

0xa8ff,	// (0x000139da) bg_popup_sub_pane_g4

0xa8f7,	// (0x000139d2) bg_popup_sub_pane_g5

0xa907,	// (0x000139e2) bg_popup_sub_pane_g6

0xa90f,	// (0x000139ea) bg_popup_sub_pane_g7

0xa91f,	// (0x000139fa) bg_popup_sub_pane_g8

0xa917,	// (0x000139f2) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x0001894d) bg_popup_sub_pane_g

0x8118,	// (0x000111f3) bg_popup_window_pane_cp5_ParamLimits

0x8118,	// (0x000111f3) bg_popup_window_pane_cp5

0x8134,	// (0x0001120f) popup_note_window_g1_ParamLimits

0x8134,	// (0x0001120f) popup_note_window_g1

0x8140,	// (0x0001121b) popup_note_window_t1_ParamLimits

0x8140,	// (0x0001121b) popup_note_window_t1

0x8152,	// (0x0001122d) popup_note_window_t2_ParamLimits

0x8152,	// (0x0001122d) popup_note_window_t2

0x8164,	// (0x0001123f) popup_note_window_t3_ParamLimits

0x8164,	// (0x0001123f) popup_note_window_t3

0x8176,	// (0x00011251) popup_note_window_t4_ParamLimits

0x8176,	// (0x00011251) popup_note_window_t4

0x819e,	// (0x00011279) popup_note_window_t5_ParamLimits

0x819e,	// (0x00011279) popup_note_window_t5

0x0004,

0xf59b,	// (0x00018676) popup_note_window_t_ParamLimits

0xf59b,	// (0x00018676) popup_note_window_t

0x81c2,	// (0x0001129d) bg_popup_window_pane_cp6_ParamLimits

0x81c2,	// (0x0001129d) bg_popup_window_pane_cp6

0xb153,	// (0x0001422e) popup_note_image_window_g1_ParamLimits

0xb153,	// (0x0001422e) popup_note_image_window_g1

0xb15f,	// (0x0001423a) popup_note_image_window_g2_ParamLimits

0xb15f,	// (0x0001423a) popup_note_image_window_g2

0x0001,

0xf866,	// (0x00018941) popup_note_image_window_g_ParamLimits

0xf866,	// (0x00018941) popup_note_image_window_g

0xb178,	// (0x00014253) popup_note_image_window_t1_ParamLimits

0xb178,	// (0x00014253) popup_note_image_window_t1

0xb191,	// (0x0001426c) popup_note_image_window_t2_ParamLimits

0xb191,	// (0x0001426c) popup_note_image_window_t2

0xb1aa,	// (0x00014285) popup_note_image_window_t3_ParamLimits

0xb1aa,	// (0x00014285) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x00018946) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x00018946) popup_note_image_window_t

0xb014,	// (0x000140ef) bg_popup_window_pane_cp7_ParamLimits

0xb014,	// (0x000140ef) bg_popup_window_pane_cp7

0xb044,	// (0x0001411f) popup_note_wait_window_g1_ParamLimits

0xb044,	// (0x0001411f) popup_note_wait_window_g1

0xb050,	// (0x0001412b) popup_note_wait_window_g2_ParamLimits

0xb050,	// (0x0001412b) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x0001892f) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x0001892f) popup_note_wait_window_g

0xb068,	// (0x00014143) popup_note_wait_window_t1_ParamLimits

0xb068,	// (0x00014143) popup_note_wait_window_t1

0xb08f,	// (0x0001416a) popup_note_wait_window_t2_ParamLimits

0xb08f,	// (0x0001416a) popup_note_wait_window_t2

0xb0ac,	// (0x00014187) popup_note_wait_window_t3_ParamLimits

0xb0ac,	// (0x00014187) popup_note_wait_window_t3

0xb0bf,	// (0x0001419a) popup_note_wait_window_t4_ParamLimits

0xb0bf,	// (0x0001419a) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x00018936) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x00018936) popup_note_wait_window_t

0xb0e4,	// (0x000141bf) wait_bar_pane_ParamLimits

0xb0e4,	// (0x000141bf) wait_bar_pane

0x7da3,	// (0x00010e7e) wait_anim_pane

0x7da3,	// (0x00010e7e) wait_border_pane

0x7d99,	// (0x00010e74) wait_anim_pane_g1

0x7d99,	// (0x00010e74) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x000187f5) wait_anim_pane_g

0xafb8,	// (0x00014093) wait_border_pane_g1

0xafc3,	// (0x0001409e) wait_border_pane_g2

0xafcc,	// (0x000140a7) wait_border_pane_g3

0x0002,

0xf84d,	// (0x00018928) wait_border_pane_g

0xae28,	// (0x00013f03) bg_popup_window_pane_cp16_ParamLimits

0xae28,	// (0x00013f03) bg_popup_window_pane_cp16

0xaf28,	// (0x00014003) indicator_popup_pane_cp4_ParamLimits

0xaf28,	// (0x00014003) indicator_popup_pane_cp4

0xaf3c,	// (0x00014017) popup_query_data_window_t1_ParamLimits

0xaf3c,	// (0x00014017) popup_query_data_window_t1

0xaf4e,	// (0x00014029) popup_query_data_window_t2_ParamLimits

0xaf4e,	// (0x00014029) popup_query_data_window_t2

0xaf67,	// (0x00014042) popup_query_data_window_t3_ParamLimits

0xaf67,	// (0x00014042) popup_query_data_window_t3

0x0002,

0xf846,	// (0x00018921) popup_query_data_window_t_ParamLimits

0xf846,	// (0x00018921) popup_query_data_window_t

0xaf81,	// (0x0001405c) query_popup_data_pane_ParamLimits

0xaf81,	// (0x0001405c) query_popup_data_pane

0xaf95,	// (0x00014070) query_popup_data_pane_cp1_ParamLimits

0xaf95,	// (0x00014070) query_popup_data_pane_cp1

0xae28,	// (0x00013f03) bg_popup_window_pane_cp10_ParamLimits

0xae28,	// (0x00013f03) bg_popup_window_pane_cp10

0xae5a,	// (0x00013f35) indicator_popup_pane_ParamLimits

0xae5a,	// (0x00013f35) indicator_popup_pane

0xae7c,	// (0x00013f57) popup_query_code_window_t1_ParamLimits

0xae7c,	// (0x00013f57) popup_query_code_window_t1

0xae96,	// (0x00013f71) popup_query_code_window_t2_ParamLimits

0xae96,	// (0x00013f71) popup_query_code_window_t2

0xaedf,	// (0x00013fba) popup_query_code_window_t3_ParamLimits

0xaedf,	// (0x00013fba) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x0001891a) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x0001891a) popup_query_code_window_t

0xaf0e,	// (0x00013fe9) query_popup_pane_ParamLimits

0xaf0e,	// (0x00013fe9) query_popup_pane

0x81c2,	// (0x0001129d) bg_popup_window_pane_cp15_ParamLimits

0x81c2,	// (0x0001129d) bg_popup_window_pane_cp15

0x81e0,	// (0x000112bb) indicator_popup_pane_cp1_ParamLimits

0x81e0,	// (0x000112bb) indicator_popup_pane_cp1

0x81f3,	// (0x000112ce) indicator_popup_pane_cp2_ParamLimits

0x81f3,	// (0x000112ce) indicator_popup_pane_cp2

0x8206,	// (0x000112e1) popup_query_data_code_window_g1_ParamLimits

0x8206,	// (0x000112e1) popup_query_data_code_window_g1

0x8219,	// (0x000112f4) popup_query_data_code_window_t1_ParamLimits

0x8219,	// (0x000112f4) popup_query_data_code_window_t1

0x822b,	// (0x00011306) popup_query_data_code_window_t2_ParamLimits

0x822b,	// (0x00011306) popup_query_data_code_window_t2

0x823d,	// (0x00011318) popup_query_data_code_window_t3_ParamLimits

0x823d,	// (0x00011318) popup_query_data_code_window_t3

0x8253,	// (0x0001132e) popup_query_data_code_window_t4_ParamLimits

0x8253,	// (0x0001132e) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00018681) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00018681) popup_query_data_code_window_t

0x6c26,	// (0x0000fd01) list_single_midp_graphic_pane_g3

0x826b,	// (0x00011346) query_popup_data_pane_cp2_ParamLimits

0x827e,	// (0x00011359) query_popup_pane_cp2_ParamLimits

0x827e,	// (0x00011359) query_popup_pane_cp2

0x7da3,	// (0x00010e7e) bg_popup_window_pane_cp11

0xae20,	// (0x00013efb) heading_pane_cp5

0x8366,	// (0x00011441) listscroll_popup_info_pane

0x7da3,	// (0x00010e7e) input_focus_pane_cp3

0x8291,	// (0x0001136c) query_popup_pane_t1

0x829f,	// (0x0001137a) list_popup_info_pane_ParamLimits

0x829f,	// (0x0001137a) list_popup_info_pane

0x82ae,	// (0x00011389) listscroll_popup_info_pane_g1

0x82b6,	// (0x00011391) scroll_pane_cp7

0x82c0,	// (0x0001139b) popup_info_list_pane_t1_ParamLimits

0x82c0,	// (0x0001139b) popup_info_list_pane_t1

0x82da,	// (0x000113b5) popup_info_list_pane_t2_ParamLimits

0x82da,	// (0x000113b5) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0001868a) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0001868a) popup_info_list_pane_t

0x7da3,	// (0x00010e7e) bg_popup_window_pane_cp12

0xc28b,	// (0x00015366) find_popup_pane

0x7e83,	// (0x00010f5e) bg_popup_window_pane_cp3

0x82f4,	// (0x000113cf) heading_pane_cp3

0x8300,	// (0x000113db) listscroll_popup_graphic_pane

0x7da3,	// (0x00010e7e) bg_popup_window_pane_cp4

0x835c,	// (0x00011437) heading_pane_cp4

0x8366,	// (0x00011441) listscroll_popup_colour_pane

0x836e,	// (0x00011449) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x836e,	// (0x00011449) cell_large_graphic_colour_none_popup_pane

0x8382,	// (0x0001145d) grid_large_graphic_colour_popup_pane_ParamLimits

0x8382,	// (0x0001145d) grid_large_graphic_colour_popup_pane

0x83a6,	// (0x00011481) listscroll_popup_colour_pane_g1_ParamLimits

0x83a6,	// (0x00011481) listscroll_popup_colour_pane_g1

0x83bd,	// (0x00011498) listscroll_popup_colour_pane_g2_ParamLimits

0x83bd,	// (0x00011498) listscroll_popup_colour_pane_g2

0x83d4,	// (0x000114af) listscroll_popup_colour_pane_g3_ParamLimits

0x83d4,	// (0x000114af) listscroll_popup_colour_pane_g3

0x83e4,	// (0x000114bf) listscroll_popup_colour_pane_g4_ParamLimits

0x83e4,	// (0x000114bf) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0001868f) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0001868f) listscroll_popup_colour_pane_g

0x83f3,	// (0x000114ce) scroll_pane_cp6_ParamLimits

0x83f3,	// (0x000114ce) scroll_pane_cp6

0x8405,	// (0x000114e0) cell_large_graphic_colour_popup_pane_ParamLimits

0x8405,	// (0x000114e0) cell_large_graphic_colour_popup_pane

0x8424,	// (0x000114ff) cell_large_graphic_colour_none_popup_pane_t1

0x7da3,	// (0x00010e7e) grid_highlight_pane_cp5

0x8433,	// (0x0001150e) cell_large_graphic_colour_popup_pane_g1

0x843b,	// (0x00011516) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00018698) cell_large_graphic_colour_popup_pane_g

0x8443,	// (0x0001151e) cell_large_graphic_colour_popup_pane_g2_copy1

0x844c,	// (0x00011527) grid_highlight_pane_cp4

0x8454,	// (0x0001152f) bg_popup_window_pane_cp8_ParamLimits

0x8454,	// (0x0001152f) bg_popup_window_pane_cp8

0x846f,	// (0x0001154a) popup_snote_single_text_window_g1_ParamLimits

0x846f,	// (0x0001154a) popup_snote_single_text_window_g1

0x8481,	// (0x0001155c) popup_snote_single_text_window_t1_ParamLimits

0x8481,	// (0x0001155c) popup_snote_single_text_window_t1

0x8494,	// (0x0001156f) popup_snote_single_text_window_t2_ParamLimits

0x8494,	// (0x0001156f) popup_snote_single_text_window_t2

0x84a7,	// (0x00011582) popup_snote_single_text_window_t3_ParamLimits

0x84a7,	// (0x00011582) popup_snote_single_text_window_t3

0x84e0,	// (0x000115bb) popup_snote_single_text_window_t4_ParamLimits

0x84e0,	// (0x000115bb) popup_snote_single_text_window_t4

0x8514,	// (0x000115ef) popup_snote_single_text_window_t5_ParamLimits

0x8514,	// (0x000115ef) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0001869d) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0001869d) popup_snote_single_text_window_t

0x8543,	// (0x0001161e) bg_popup_window_pane_cp9_ParamLimits

0x8543,	// (0x0001161e) bg_popup_window_pane_cp9

0x846f,	// (0x0001154a) popup_snote_single_graphic_window_g1_ParamLimits

0x846f,	// (0x0001154a) popup_snote_single_graphic_window_g1

0x8551,	// (0x0001162c) popup_snote_single_graphic_window_g2_ParamLimits

0x8551,	// (0x0001162c) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x000186a8) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x000186a8) popup_snote_single_graphic_window_g

0x855d,	// (0x00011638) popup_snote_single_graphic_window_t1_ParamLimits

0x855d,	// (0x00011638) popup_snote_single_graphic_window_t1

0x8570,	// (0x0001164b) popup_snote_single_graphic_window_t2_ParamLimits

0x8570,	// (0x0001164b) popup_snote_single_graphic_window_t2

0x8583,	// (0x0001165e) popup_snote_single_graphic_window_t3_ParamLimits

0x8583,	// (0x0001165e) popup_snote_single_graphic_window_t3

0x85bc,	// (0x00011697) popup_snote_single_graphic_window_t4_ParamLimits

0x85bc,	// (0x00011697) popup_snote_single_graphic_window_t4

0x85f0,	// (0x000116cb) popup_snote_single_graphic_window_t5_ParamLimits

0x85f0,	// (0x000116cb) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x000186ad) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x000186ad) popup_snote_single_graphic_window_t

0xc1cb,	// (0x000152a6) grid_graphic_popup_pane_ParamLimits

0xc1cb,	// (0x000152a6) grid_graphic_popup_pane

0xc1f7,	// (0x000152d2) listscroll_popup_graphic_pane_g1_ParamLimits

0xc1f7,	// (0x000152d2) listscroll_popup_graphic_pane_g1

0xc20b,	// (0x000152e6) listscroll_popup_graphic_pane_g2_ParamLimits

0xc20b,	// (0x000152e6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x00018a97) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x00018a97) listscroll_popup_graphic_pane_g

0xc21f,	// (0x000152fa) scroll_pane_cp5

0xc176,	// (0x00015251) cell_graphic_popup_pane_ParamLimits

0xc176,	// (0x00015251) cell_graphic_popup_pane

0xc157,	// (0x00015232) cell_graphic_popup_pane_g1

0xc15f,	// (0x0001523a) cell_graphic_popup_pane_g2

0x8443,	// (0x0001151e) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x00018a90) cell_graphic_popup_pane_g

0xc168,	// (0x00015243) cell_graphic_popup_pane_t2

0x844c,	// (0x00011527) grid_highlight_pane_cp3

0x8631,	// (0x0001170c) list_gen_pane_ParamLimits

0x8631,	// (0x0001170c) list_gen_pane

0x8663,	// (0x0001173e) scroll_pane

0xc0b9,	// (0x00015194) bg_list_pane_g1_ParamLimits

0xc0b9,	// (0x00015194) bg_list_pane_g1

0xc0d4,	// (0x000151af) bg_list_pane_g2_ParamLimits

0xc0d4,	// (0x000151af) bg_list_pane_g2

0xc0e7,	// (0x000151c2) bg_list_pane_g3_ParamLimits

0xc0e7,	// (0x000151c2) bg_list_pane_g3

0xc0f9,	// (0x000151d4) bg_list_pane_g4_ParamLimits

0xc0f9,	// (0x000151d4) bg_list_pane_g4

0xc10b,	// (0x000151e6) bg_list_pane_g5_ParamLimits

0xc10b,	// (0x000151e6) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x00018a85) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x00018a85) bg_list_pane_g

0xbfae,	// (0x00015089) list_double2_graphic_large_graphic_pane_ParamLimits

0xbfae,	// (0x00015089) list_double2_graphic_large_graphic_pane

0xbfae,	// (0x00015089) list_double2_graphic_pane_ParamLimits

0xbfae,	// (0x00015089) list_double2_graphic_pane

0xbfae,	// (0x00015089) list_double2_large_graphic_pane_ParamLimits

0xbfae,	// (0x00015089) list_double2_large_graphic_pane

0xbfae,	// (0x00015089) list_double2_pane_ParamLimits

0xbfae,	// (0x00015089) list_double2_pane

0xbfae,	// (0x00015089) list_double_graphic_heading_pane_ParamLimits

0xbfae,	// (0x00015089) list_double_graphic_heading_pane

0xbfae,	// (0x00015089) list_double_graphic_pane_ParamLimits

0xbfae,	// (0x00015089) list_double_graphic_pane

0xbfae,	// (0x00015089) list_double_heading_pane_ParamLimits

0xbfae,	// (0x00015089) list_double_heading_pane

0xbfae,	// (0x00015089) list_double_large_graphic_pane_ParamLimits

0xbfae,	// (0x00015089) list_double_large_graphic_pane

0xbfae,	// (0x00015089) list_double_number_pane_ParamLimits

0xbfae,	// (0x00015089) list_double_number_pane

0xbfae,	// (0x00015089) list_double_pane_ParamLimits

0xbfae,	// (0x00015089) list_double_pane

0xbfae,	// (0x00015089) list_double_time_pane_ParamLimits

0xbfae,	// (0x00015089) list_double_time_pane

0xbfae,	// (0x00015089) list_setting_number_pane_ParamLimits

0xbfae,	// (0x00015089) list_setting_number_pane

0xbfae,	// (0x00015089) list_setting_pane_ParamLimits

0xbfae,	// (0x00015089) list_setting_pane

0xc005,	// (0x000150e0) list_single_2graphic_pane_ParamLimits

0xc005,	// (0x000150e0) list_single_2graphic_pane

0xc005,	// (0x000150e0) list_single_graphic_heading_pane_ParamLimits

0xc005,	// (0x000150e0) list_single_graphic_heading_pane

0xc005,	// (0x000150e0) list_single_graphic_pane_ParamLimits

0xc005,	// (0x000150e0) list_single_graphic_pane

0xc005,	// (0x000150e0) list_single_heading_pane_ParamLimits

0xc005,	// (0x000150e0) list_single_heading_pane

0xc093,	// (0x0001516e) list_single_large_graphic_pane_ParamLimits

0xc093,	// (0x0001516e) list_single_large_graphic_pane

0xc005,	// (0x000150e0) list_single_number_heading_pane_ParamLimits

0xc005,	// (0x000150e0) list_single_number_heading_pane

0xc005,	// (0x000150e0) list_single_number_pane_ParamLimits

0xc005,	// (0x000150e0) list_single_number_pane

0xc005,	// (0x000150e0) list_single_pane_ParamLimits

0xc005,	// (0x000150e0) list_single_pane

0x7da3,	// (0x00010e7e) list_highlight_pane_cp1

0x86a3,	// (0x0001177e) list_single_pane_g1_ParamLimits

0x86a3,	// (0x0001177e) list_single_pane_g1

0x86af,	// (0x0001178a) list_single_pane_g2_ParamLimits

0x86af,	// (0x0001178a) list_single_pane_g2

0x0001,

0xf5e4,	// (0x000186bf) list_single_pane_g_ParamLimits

0xf5e4,	// (0x000186bf) list_single_pane_g

0xbf67,	// (0x00015042) list_single_pane_t1_ParamLimits

0xbf67,	// (0x00015042) list_single_pane_t1

0x86a3,	// (0x0001177e) list_single_number_pane_g1_ParamLimits

0x86a3,	// (0x0001177e) list_single_number_pane_g1

0x86af,	// (0x0001178a) list_single_number_pane_g2_ParamLimits

0x86af,	// (0x0001178a) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x000186bf) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x000186bf) list_single_number_pane_g

0xbd01,	// (0x00014ddc) list_single_number_pane_t1_ParamLimits

0xbd01,	// (0x00014ddc) list_single_number_pane_t1

0xbd17,	// (0x00014df2) list_single_number_pane_t2_ParamLimits

0xbd17,	// (0x00014df2) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x00018a46) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x00018a46) list_single_number_pane_t

0x8697,	// (0x00011772) list_single_graphic_pane_g1_ParamLimits

0x8697,	// (0x00011772) list_single_graphic_pane_g1

0x86a3,	// (0x0001177e) list_single_graphic_pane_g2_ParamLimits

0x86a3,	// (0x0001177e) list_single_graphic_pane_g2

0x86af,	// (0x0001178a) list_single_graphic_pane_g3_ParamLimits

0x86af,	// (0x0001178a) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x000186b8) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x000186b8) list_single_graphic_pane_g

0x86bb,	// (0x00011796) list_single_graphic_pane_t1_ParamLimits

0x86bb,	// (0x00011796) list_single_graphic_pane_t1

0x86a3,	// (0x0001177e) list_single_heading_pane_g1_ParamLimits

0x86a3,	// (0x0001177e) list_single_heading_pane_g1

0x86af,	// (0x0001178a) list_single_heading_pane_g2_ParamLimits

0x86af,	// (0x0001178a) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x000186bf) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x000186bf) list_single_heading_pane_g

0x86d1,	// (0x000117ac) list_single_heading_pane_t1_ParamLimits

0x86d1,	// (0x000117ac) list_single_heading_pane_t1

0x86e7,	// (0x000117c2) list_single_heading_pane_t2_ParamLimits

0x86e7,	// (0x000117c2) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x000186c4) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x000186c4) list_single_heading_pane_t

0x86a3,	// (0x0001177e) list_single_number_heading_pane_g1_ParamLimits

0x86a3,	// (0x0001177e) list_single_number_heading_pane_g1

0x86af,	// (0x0001178a) list_single_number_heading_pane_g2_ParamLimits

0x86af,	// (0x0001178a) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x000186bf) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x000186bf) list_single_number_heading_pane_g

0x86d1,	// (0x000117ac) list_single_number_heading_pane_t1_ParamLimits

0x86d1,	// (0x000117ac) list_single_number_heading_pane_t1

0x86f9,	// (0x000117d4) list_single_number_heading_pane_t2_ParamLimits

0x86f9,	// (0x000117d4) list_single_number_heading_pane_t2

0x870b,	// (0x000117e6) list_single_number_heading_pane_t3_ParamLimits

0x870b,	// (0x000117e6) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x000186c9) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x000186c9) list_single_number_heading_pane_t

0x871d,	// (0x000117f8) list_single_graphic_heading_pane_g1_ParamLimits

0x871d,	// (0x000117f8) list_single_graphic_heading_pane_g1

0x8729,	// (0x00011804) list_single_graphic_heading_pane_g4_ParamLimits

0x8729,	// (0x00011804) list_single_graphic_heading_pane_g4

0x86af,	// (0x0001178a) list_single_graphic_heading_pane_g5_ParamLimits

0x86af,	// (0x0001178a) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x000186d0) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x000186d0) list_single_graphic_heading_pane_g

0x86d1,	// (0x000117ac) list_single_graphic_heading_pane_t1_ParamLimits

0x86d1,	// (0x000117ac) list_single_graphic_heading_pane_t1

0x873a,	// (0x00011815) list_single_graphic_heading_pane_t2_ParamLimits

0x873a,	// (0x00011815) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x000186d7) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x000186d7) list_single_graphic_heading_pane_t

0x874c,	// (0x00011827) list_single_large_graphic_pane_g1_ParamLimits

0x874c,	// (0x00011827) list_single_large_graphic_pane_g1

0x8758,	// (0x00011833) list_single_large_graphic_pane_g2_ParamLimits

0x8758,	// (0x00011833) list_single_large_graphic_pane_g2

0x8764,	// (0x0001183f) list_single_large_graphic_pane_g3_ParamLimits

0x8764,	// (0x0001183f) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x000186dc) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x000186dc) list_single_large_graphic_pane_g

0xafc3,	// (0x0001409e) wait_border_pane_g2_copy1

0x8770,	// (0x0001184b) list_single_large_graphic_pane_g4_cp2

0x8778,	// (0x00011853) list_single_large_graphic_pane_t1_ParamLimits

0x8778,	// (0x00011853) list_single_large_graphic_pane_t1

0x878e,	// (0x00011869) list_double_pane_g1_ParamLimits

0x878e,	// (0x00011869) list_double_pane_g1

0x879a,	// (0x00011875) list_double_pane_g2_ParamLimits

0x879a,	// (0x00011875) list_double_pane_g2

0x0001,

0xf608,	// (0x000186e3) list_double_pane_g_ParamLimits

0xf608,	// (0x000186e3) list_double_pane_g

0x87a6,	// (0x00011881) list_double_pane_t1_ParamLimits

0x87a6,	// (0x00011881) list_double_pane_t1

0x87bc,	// (0x00011897) list_double_pane_t2_ParamLimits

0x87bc,	// (0x00011897) list_double_pane_t2

0x0001,

0xf60d,	// (0x000186e8) list_double_pane_t_ParamLimits

0xf60d,	// (0x000186e8) list_double_pane_t

0x87ce,	// (0x000118a9) list_double2_pane_g1_ParamLimits

0x87ce,	// (0x000118a9) list_double2_pane_g1

0x87df,	// (0x000118ba) list_double2_pane_g2_ParamLimits

0x87df,	// (0x000118ba) list_double2_pane_g2

0x0001,

0xf612,	// (0x000186ed) list_double2_pane_g_ParamLimits

0xf612,	// (0x000186ed) list_double2_pane_g

0x87eb,	// (0x000118c6) list_double2_pane_t1_ParamLimits

0x87eb,	// (0x000118c6) list_double2_pane_t1

0x8801,	// (0x000118dc) list_double2_pane_t2_ParamLimits

0x8801,	// (0x000118dc) list_double2_pane_t2

0x0001,

0xf617,	// (0x000186f2) list_double2_pane_t_ParamLimits

0xf617,	// (0x000186f2) list_double2_pane_t

0x878e,	// (0x00011869) list_double_number_pane_g1_ParamLimits

0x878e,	// (0x00011869) list_double_number_pane_g1

0x879a,	// (0x00011875) list_double_number_pane_g2_ParamLimits

0x879a,	// (0x00011875) list_double_number_pane_g2

0x0001,

0xf608,	// (0x000186e3) list_double_number_pane_g_ParamLimits

0xf608,	// (0x000186e3) list_double_number_pane_g

0x8813,	// (0x000118ee) list_double_number_pane_t1_ParamLimits

0x8813,	// (0x000118ee) list_double_number_pane_t1

0x8825,	// (0x00011900) list_double_number_pane_t2_ParamLimits

0x8825,	// (0x00011900) list_double_number_pane_t2

0x883b,	// (0x00011916) list_double_number_pane_t3_ParamLimits

0x883b,	// (0x00011916) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x000186f7) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x000186f7) list_double_number_pane_t

0x884d,	// (0x00011928) list_double_graphic_pane_g1_ParamLimits

0x884d,	// (0x00011928) list_double_graphic_pane_g1

0x8859,	// (0x00011934) list_double_graphic_pane_g2_ParamLimits

0x8859,	// (0x00011934) list_double_graphic_pane_g2

0x8868,	// (0x00011943) list_double_graphic_pane_g3_ParamLimits

0x8868,	// (0x00011943) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x000186fe) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x000186fe) list_double_graphic_pane_g

0x8880,	// (0x0001195b) list_double_graphic_pane_t1_ParamLimits

0x8880,	// (0x0001195b) list_double_graphic_pane_t1

0x8896,	// (0x00011971) list_double_graphic_pane_t2_ParamLimits

0x8896,	// (0x00011971) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x00018707) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x00018707) list_double_graphic_pane_t

0x88a8,	// (0x00011983) list_double2_graphic_pane_g1_ParamLimits

0x88a8,	// (0x00011983) list_double2_graphic_pane_g1

0x88b4,	// (0x0001198f) list_double2_graphic_pane_g2_ParamLimits

0x88b4,	// (0x0001198f) list_double2_graphic_pane_g2

0x87df,	// (0x000118ba) list_double2_graphic_pane_g3_ParamLimits

0x87df,	// (0x000118ba) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0001870c) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0001870c) list_double2_graphic_pane_g

0x88c0,	// (0x0001199b) list_double2_graphic_pane_t1_ParamLimits

0x88c0,	// (0x0001199b) list_double2_graphic_pane_t1

0x88d6,	// (0x000119b1) list_double2_graphic_pane_t2_ParamLimits

0x88d6,	// (0x000119b1) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00018713) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00018713) list_double2_graphic_pane_t

0x88e8,	// (0x000119c3) list_double_large_graphic_pane_g1_ParamLimits

0x88e8,	// (0x000119c3) list_double_large_graphic_pane_g1

0x8913,	// (0x000119ee) list_double_large_graphic_pane_g2_ParamLimits

0x8913,	// (0x000119ee) list_double_large_graphic_pane_g2

0x879a,	// (0x00011875) list_double_large_graphic_pane_g3_ParamLimits

0x879a,	// (0x00011875) list_double_large_graphic_pane_g3

0x8924,	// (0x000119ff) list_double_large_graphic_pane_g4_ParamLimits

0x8924,	// (0x000119ff) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x00018718) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x00018718) list_double_large_graphic_pane_g

0x894b,	// (0x00011a26) list_double_large_graphic_pane_t1_ParamLimits

0x894b,	// (0x00011a26) list_double_large_graphic_pane_t1

0x8964,	// (0x00011a3f) list_double_large_graphic_pane_t2_ParamLimits

0x8964,	// (0x00011a3f) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00018723) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00018723) list_double_large_graphic_pane_t

0x8976,	// (0x00011a51) list_double2_large_graphic_pane_g1_ParamLimits

0x8976,	// (0x00011a51) list_double2_large_graphic_pane_g1

0x87ce,	// (0x000118a9) list_double2_large_graphic_pane_g2_ParamLimits

0x87ce,	// (0x000118a9) list_double2_large_graphic_pane_g2

0x87df,	// (0x000118ba) list_double2_large_graphic_pane_g3_ParamLimits

0x87df,	// (0x000118ba) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x00018728) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x00018728) list_double2_large_graphic_pane_g

0x8982,	// (0x00011a5d) list_double2_large_graphic_pane_t1_ParamLimits

0x8982,	// (0x00011a5d) list_double2_large_graphic_pane_t1

0x8998,	// (0x00011a73) list_double2_large_graphic_pane_t2_ParamLimits

0x8998,	// (0x00011a73) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0001872f) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0001872f) list_double2_large_graphic_pane_t

0x89aa,	// (0x00011a85) list_double_heading_pane_g1_ParamLimits

0x89aa,	// (0x00011a85) list_double_heading_pane_g1

0x89bb,	// (0x00011a96) list_double_heading_pane_g2_ParamLimits

0x89bb,	// (0x00011a96) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x00018734) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x00018734) list_double_heading_pane_g

0x89c7,	// (0x00011aa2) list_double_heading_pane_t1_ParamLimits

0x89c7,	// (0x00011aa2) list_double_heading_pane_t1

0x89dd,	// (0x00011ab8) list_double_heading_pane_t2_ParamLimits

0x89dd,	// (0x00011ab8) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x00018739) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x00018739) list_double_heading_pane_t

0x884d,	// (0x00011928) list_double_graphic_heading_pane_g1_ParamLimits

0x884d,	// (0x00011928) list_double_graphic_heading_pane_g1

0x89aa,	// (0x00011a85) list_double_graphic_heading_pane_g2_ParamLimits

0x89aa,	// (0x00011a85) list_double_graphic_heading_pane_g2

0x89bb,	// (0x00011a96) list_double_graphic_heading_pane_g3_ParamLimits

0x89bb,	// (0x00011a96) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0001873e) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0001873e) list_double_graphic_heading_pane_g

0x89ef,	// (0x00011aca) list_double_graphic_heading_pane_t1_ParamLimits

0x89ef,	// (0x00011aca) list_double_graphic_heading_pane_t1

0x8a05,	// (0x00011ae0) list_double_graphic_heading_pane_t2_ParamLimits

0x8a05,	// (0x00011ae0) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x00018745) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x00018745) list_double_graphic_heading_pane_t

0x8913,	// (0x000119ee) list_double_time_pane_g1_ParamLimits

0x8913,	// (0x000119ee) list_double_time_pane_g1

0x879a,	// (0x00011875) list_double_time_pane_g2_ParamLimits

0x879a,	// (0x00011875) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0001874a) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0001874a) list_double_time_pane_g

0x8a17,	// (0x00011af2) list_double_time_pane_t1_ParamLimits

0x8a17,	// (0x00011af2) list_double_time_pane_t1

0x8a2d,	// (0x00011b08) list_double_time_pane_t2_ParamLimits

0x8a2d,	// (0x00011b08) list_double_time_pane_t2

0x8a3f,	// (0x00011b1a) list_double_time_pane_t3_ParamLimits

0x8a3f,	// (0x00011b1a) list_double_time_pane_t3

0x8a51,	// (0x00011b2c) list_double_time_pane_t4_ParamLimits

0x8a51,	// (0x00011b2c) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0001874f) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0001874f) list_double_time_pane_t

0x88b4,	// (0x0001198f) list_setting_pane_g1_ParamLimits

0x88b4,	// (0x0001198f) list_setting_pane_g1

0x87df,	// (0x000118ba) list_setting_pane_g2_ParamLimits

0x87df,	// (0x000118ba) list_setting_pane_g2

0x0001,

0xf67d,	// (0x00018758) list_setting_pane_g_ParamLimits

0xf67d,	// (0x00018758) list_setting_pane_g

0x8a63,	// (0x00011b3e) list_setting_pane_t1_ParamLimits

0x8a63,	// (0x00011b3e) list_setting_pane_t1

0x8a7a,	// (0x00011b55) list_setting_pane_t2_ParamLimits

0x8a7a,	// (0x00011b55) list_setting_pane_t2

0x0002,

0xf682,	// (0x0001875d) list_setting_pane_t_ParamLimits

0xf682,	// (0x0001875d) list_setting_pane_t

0x8ab7,	// (0x00011b92) set_value_pane_cp_ParamLimits

0x8ab7,	// (0x00011b92) set_value_pane_cp

0x88b4,	// (0x0001198f) list_setting_number_pane_g1_ParamLimits

0x88b4,	// (0x0001198f) list_setting_number_pane_g1

0x87df,	// (0x000118ba) list_setting_number_pane_g2_ParamLimits

0x87df,	// (0x000118ba) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x00018758) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x00018758) list_setting_number_pane_g

0x8ac3,	// (0x00011b9e) list_setting_number_pane_t1_ParamLimits

0x8ac3,	// (0x00011b9e) list_setting_number_pane_t1

0x8ad7,	// (0x00011bb2) list_setting_number_pane_t2_ParamLimits

0x8ad7,	// (0x00011bb2) list_setting_number_pane_t2

0x8aee,	// (0x00011bc9) list_setting_number_pane_t3_ParamLimits

0x8aee,	// (0x00011bc9) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x00018764) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x00018764) list_setting_number_pane_t

0x8ab7,	// (0x00011b92) set_value_pane_ParamLimits

0x8ab7,	// (0x00011b92) set_value_pane

0x8b31,	// (0x00011c0c) bg_set_opt_pane_ParamLimits

0x8b31,	// (0x00011c0c) bg_set_opt_pane

0x8b52,	// (0x00011c2d) set_value_pane_t1

0x8b60,	// (0x00011c3b) slider_set_pane_cp3

0x8b69,	// (0x00011c44) volume_small_pane_cp

0x8b72,	// (0x00011c4d) list_form_gen_pane

0x8b7b,	// (0x00011c56) scroll_pane_cp8

0x8b8c,	// (0x00011c67) form_field_data_pane_ParamLimits

0x8b8c,	// (0x00011c67) form_field_data_pane

0x8bac,	// (0x00011c87) form_field_data_wide_pane_ParamLimits

0x8bac,	// (0x00011c87) form_field_data_wide_pane

0x8bcd,	// (0x00011ca8) form_field_popup_pane_ParamLimits

0x8bcd,	// (0x00011ca8) form_field_popup_pane

0x8beb,	// (0x00011cc6) form_field_popup_wide_pane_ParamLimits

0x8beb,	// (0x00011cc6) form_field_popup_wide_pane

0x8c06,	// (0x00011ce1) form_field_slider_pane_ParamLimits

0x8c06,	// (0x00011ce1) form_field_slider_pane

0x8c19,	// (0x00011cf4) form_field_slider_wide_pane_ParamLimits

0x8c19,	// (0x00011cf4) form_field_slider_wide_pane

0x8c2c,	// (0x00011d07) data_form_pane

0x8c42,	// (0x00011d1d) form_field_data_pane_t1

0x8c5c,	// (0x00011d37) input_focus_pane

0x8c6a,	// (0x00011d45) data_form_wide_pane

0x8ca2,	// (0x00011d7d) form_field_data_wide_pane_t1

0x8461,	// (0x0001153c) input_focus_pane_cp6

0x8cc4,	// (0x00011d9f) form_field_popup_pane_t1

0x8c5c,	// (0x00011d37) input_focus_pane_cp7

0x8cde,	// (0x00011db9) list_form_pane

0x8cf2,	// (0x00011dcd) form_field_popup_wide_pane_t1

0x8c5c,	// (0x00011d37) input_focus_pane_cp8

0x8d07,	// (0x00011de2) list_form_wide_pane

0x8d1e,	// (0x00011df9) form_field_slider_pane_t1_ParamLimits

0x8d1e,	// (0x00011df9) form_field_slider_pane_t1

0x8d32,	// (0x00011e0d) form_field_slider_pane_t2_ParamLimits

0x8d32,	// (0x00011e0d) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x00018774) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x00018774) form_field_slider_pane_t

0x8118,	// (0x000111f3) input_focus_pane_cp9_ParamLimits

0x8118,	// (0x000111f3) input_focus_pane_cp9

0x8d44,	// (0x00011e1f) slider_cont_pane_ParamLimits

0x8d44,	// (0x00011e1f) slider_cont_pane

0x8d58,	// (0x00011e33) form_field_slider_wide_pane_t1_ParamLimits

0x8d58,	// (0x00011e33) form_field_slider_wide_pane_t1

0x8d6a,	// (0x00011e45) form_field_slider_wide_pane_t2_ParamLimits

0x8d6a,	// (0x00011e45) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x00018779) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x00018779) form_field_slider_wide_pane_t

0x8118,	// (0x000111f3) input_focus_pane_cp10_ParamLimits

0x8118,	// (0x000111f3) input_focus_pane_cp10

0x8d7c,	// (0x00011e57) slider_cont_pane_cp1_ParamLimits

0x8d7c,	// (0x00011e57) slider_cont_pane_cp1

0x8d90,	// (0x00011e6b) slider_form_pane_cp

0x8d98,	// (0x00011e73) input_focus_pane_g1

0x8da0,	// (0x00011e7b) input_focus_pane_g2

0x8da8,	// (0x00011e83) input_focus_pane_g3

0x8db0,	// (0x00011e8b) input_focus_pane_g4

0x8db8,	// (0x00011e93) input_focus_pane_g5

0x8dc0,	// (0x00011e9b) input_focus_pane_g6

0x8dc8,	// (0x00011ea3) input_focus_pane_g7

0x8dd0,	// (0x00011eab) input_focus_pane_g8

0x8dd8,	// (0x00011eb3) input_focus_pane_g9

0x7d99,	// (0x00010e74) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0001877e) input_focus_pane_g

0xafcc,	// (0x000140a7) wait_border_pane_g3_copy1

0x8de0,	// (0x00011ebb) data_form_pane_t1

0x7d99,	// (0x00010e74) wait_anim_pane_g1_copy1

0xbf4a,	// (0x00015025) data_form_wide_pane_t1

0x8dfb,	// (0x00011ed6) list_form_graphic_pane_cp_ParamLimits

0x8dfb,	// (0x00011ed6) list_form_graphic_pane_cp

0xbf1f,	// (0x00014ffa) slider_form_pane_g1

0xbf28,	// (0x00015003) slider_form_pane_g2

0x0006,

0xf99b,	// (0x00018a76) slider_form_pane_g

0x8e12,	// (0x00011eed) list_form_graphic_pane_ParamLimits

0x8e12,	// (0x00011eed) list_form_graphic_pane

0x8e2c,	// (0x00011f07) list_form_graphic_pane_g1

0x8e34,	// (0x00011f0f) list_form_graphic_pane_t1_ParamLimits

0x8e34,	// (0x00011f0f) list_form_graphic_pane_t1

0x7e83,	// (0x00010f5e) list_highlight_pane_cp5_ParamLimits

0x7e83,	// (0x00010f5e) list_highlight_pane_cp5

0x8e49,	// (0x00011f24) find_pane_g1

0x8e52,	// (0x00011f2d) input_find_pane

0x8e5b,	// (0x00011f36) input_find_pane_g1_ParamLimits

0x8e5b,	// (0x00011f36) input_find_pane_g1

0x8e67,	// (0x00011f42) input_find_pane_t1_ParamLimits

0x8e67,	// (0x00011f42) input_find_pane_t1

0x8e7c,	// (0x00011f57) input_find_pane_t2_ParamLimits

0x8e7c,	// (0x00011f57) input_find_pane_t2

0x0001,

0xf6b8,	// (0x00018793) input_find_pane_t_ParamLimits

0xf6b8,	// (0x00018793) input_find_pane_t

0x8e91,	// (0x00011f6c) input_focus_pane_cp5_ParamLimits

0x8e91,	// (0x00011f6c) input_focus_pane_cp5

0x8eab,	// (0x00011f86) bg_popup_window_pane_cp2_ParamLimits

0x8eab,	// (0x00011f86) bg_popup_window_pane_cp2

0x8eb8,	// (0x00011f93) listscroll_menu_pane_ParamLimits

0x8eb8,	// (0x00011f93) listscroll_menu_pane

0x8ec4,	// (0x00011f9f) popup_submenu_window_ParamLimits

0x8ec4,	// (0x00011f9f) popup_submenu_window

0x8ee8,	// (0x00011fc3) find_popup_pane_g1

0x8ef0,	// (0x00011fcb) input_popup_find_pane_cp

0x8e91,	// (0x00011f6c) input_focus_pane_cp4_ParamLimits

0x8e91,	// (0x00011f6c) input_focus_pane_cp4

0x8f08,	// (0x00011fe3) input_popup_find_pane_t1_ParamLimits

0x8f08,	// (0x00011fe3) input_popup_find_pane_t1

0x7da3,	// (0x00010e7e) bg_popup_sub_pane_cp

0x8f36,	// (0x00012011) listscroll_popup_sub_pane

0x8f3e,	// (0x00012019) list_submenu_pane_ParamLimits

0x8f3e,	// (0x00012019) list_submenu_pane

0x8f4f,	// (0x0001202a) scroll_pane_cp4

0x8f57,	// (0x00012032) list_single_popup_submenu_pane_ParamLimits

0x8f57,	// (0x00012032) list_single_popup_submenu_pane

0x8f6a,	// (0x00012045) list_single_popup_submenu_pane_g1

0x8f72,	// (0x0001204d) list_single_popup_submenu_pane_t1_ParamLimits

0x8f72,	// (0x0001204d) list_single_popup_submenu_pane_t1

0x7e83,	// (0x00010f5e) bg_active_tab_pane_cp1_ParamLimits

0x7e83,	// (0x00010f5e) bg_active_tab_pane_cp1

0x8f87,	// (0x00012062) tabs_2_active_pane_g1

0x8f8f,	// (0x0001206a) tabs_2_active_pane_t1

0x7e83,	// (0x00010f5e) bg_passive_tab_pane_cp1_ParamLimits

0x7e83,	// (0x00010f5e) bg_passive_tab_pane_cp1

0x8f87,	// (0x00012062) tabs_2_passive_pane_g1

0x8f8f,	// (0x0001206a) tabs_2_passive_pane_t1

0x8fa1,	// (0x0001207c) bg_active_tab_pane_cp4

0x8faf,	// (0x0001208a) tabs_2_long_active_pane_t1

0x8fc2,	// (0x0001209d) bg_passive_tab_pane_cp4

0x6c2e,	// (0x0000fd09) list_single_midp_graphic_pane_g4_ParamLimits

0x8fa1,	// (0x0001207c) bg_active_tab_pane_cp5

0x8fce,	// (0x000120a9) tabs_3_long_active_pane_t1

0x8fc2,	// (0x0001209d) bg_passive_tab_pane_cp5

0x6c2e,	// (0x0000fd09) list_single_midp_graphic_pane_g4

0x7e83,	// (0x00010f5e) bg_popup_window_pane_cp13_ParamLimits

0x7e83,	// (0x00010f5e) bg_popup_window_pane_cp13

0x8fe9,	// (0x000120c4) listscroll_popup_fast_pane_ParamLimits

0x8fe9,	// (0x000120c4) listscroll_popup_fast_pane

0x8ff8,	// (0x000120d3) grid_popup_fast_pane_ParamLimits

0x8ff8,	// (0x000120d3) grid_popup_fast_pane

0x900a,	// (0x000120e5) scroll_pane_cp9_ParamLimits

0x900a,	// (0x000120e5) scroll_pane_cp9

0xdcf3,	// (0x00016dce) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xdcf3,	// (0x00016dce) list_single_graphic_hl_pane_t1_cp2

0x902e,	// (0x00012109) input_focus_pane_cp20_ParamLimits

0x902e,	// (0x00012109) input_focus_pane_cp20

0x903c,	// (0x00012117) query_popup_data_pane_t1_ParamLimits

0x903c,	// (0x00012117) query_popup_data_pane_t1

0x904f,	// (0x0001212a) query_popup_data_pane_t2_ParamLimits

0x904f,	// (0x0001212a) query_popup_data_pane_t2

0x9095,	// (0x00012170) query_popup_data_pane_t3_ParamLimits

0x9095,	// (0x00012170) query_popup_data_pane_t3

0x90d6,	// (0x000121b1) query_popup_data_pane_t4_ParamLimits

0x90d6,	// (0x000121b1) query_popup_data_pane_t4

0x9112,	// (0x000121ed) query_popup_data_pane_t5_ParamLimits

0x9112,	// (0x000121ed) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x00018798) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x00018798) query_popup_data_pane_t

0x8d98,	// (0x00011e73) bg_set_opt_pane_g1

0x8da0,	// (0x00011e7b) bg_set_opt_pane_g2

0x8da8,	// (0x00011e83) bg_set_opt_pane_g3

0x8db0,	// (0x00011e8b) bg_set_opt_pane_g4

0x8db8,	// (0x00011e93) bg_set_opt_pane_g5

0x8dc0,	// (0x00011e9b) bg_set_opt_pane_g6

0x8dc8,	// (0x00011ea3) bg_set_opt_pane_g7

0x8dd0,	// (0x00011eab) bg_set_opt_pane_g8

0x8dd8,	// (0x00011eb3) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x000187a3) bg_set_opt_pane_g

0x6837,	// (0x0000f912) control_top_pane_stacon_ParamLimits

0x6837,	// (0x0000f912) control_top_pane_stacon

0x688a,	// (0x0000f965) signal_pane_stacon_ParamLimits

0x688a,	// (0x0000f965) signal_pane_stacon

0x973b,	// (0x00012816) stacon_top_pane_g1_ParamLimits

0x973b,	// (0x00012816) stacon_top_pane_g1

0x68af,	// (0x0000f98a) title_pane_stacon_ParamLimits

0x68af,	// (0x0000f98a) title_pane_stacon

0x68d9,	// (0x0000f9b4) uni_indicator_pane_stacon_ParamLimits

0x68d9,	// (0x0000f9b4) uni_indicator_pane_stacon

0x68ee,	// (0x0000f9c9) battery_pane_stacon_ParamLimits

0x68ee,	// (0x0000f9c9) battery_pane_stacon

0x6932,	// (0x0000fa0d) control_bottom_pane_stacon_ParamLimits

0x6932,	// (0x0000fa0d) control_bottom_pane_stacon

0x6955,	// (0x0000fa30) navi_pane_stacon_ParamLimits

0x6955,	// (0x0000fa30) navi_pane_stacon

0x975d,	// (0x00012838) stacon_bottom_pane_g1_ParamLimits

0x975d,	// (0x00012838) stacon_bottom_pane_g1

0x6598,	// (0x0000f673) aid_levels_signal_lsc_ParamLimits

0x6598,	// (0x0000f673) aid_levels_signal_lsc

0x65af,	// (0x0000f68a) signal_pane_stacon_g1_ParamLimits

0x65af,	// (0x0000f68a) signal_pane_stacon_g1

0x65c3,	// (0x0000f69e) signal_pane_stacon_g2_ParamLimits

0x65c3,	// (0x0000f69e) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x000187b6) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x000187b6) signal_pane_stacon_g

0x65f8,	// (0x0000f6d3) title_pane_stacon_t1_ParamLimits

0x65f8,	// (0x0000f6d3) title_pane_stacon_t1

0x916a,	// (0x00012245) uni_indicator_pane_stacon_g1

0x9174,	// (0x0001224f) uni_indicator_pane_stacon_g2

0x9156,	// (0x00012231) uni_indicator_pane_stacon_g3

0x9160,	// (0x0001223b) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x000187c2) uni_indicator_pane_stacon_g

0x661d,	// (0x0000f6f8) control_top_pane_stacon_g1

0x6625,	// (0x0000f700) control_top_pane_stacon_t1_ParamLimits

0x6625,	// (0x0000f700) control_top_pane_stacon_t1

0x665c,	// (0x0000f737) aid_levels_battery_lsc_ParamLimits

0x665c,	// (0x0000f737) aid_levels_battery_lsc

0x6674,	// (0x0000f74f) battery_pane_stacon_g1_ParamLimits

0x6674,	// (0x0000f74f) battery_pane_stacon_g1

0x6687,	// (0x0000f762) battery_pane_stacon_g2_ParamLimits

0x6687,	// (0x0000f762) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x000187cb) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x000187cb) battery_pane_stacon_g

0x66c5,	// (0x0000f7a0) navi_icon_pane_stacon

0x66d9,	// (0x0000f7b4) navi_navi_pane_stacon

0x66c5,	// (0x0000f7a0) navi_text_pane_stacon

0x661d,	// (0x0000f6f8) control_bottom_pane_stacon_g1

0x66ed,	// (0x0000f7c8) control_bottom_pane_stacon_t1_ParamLimits

0x66ed,	// (0x0000f7c8) control_bottom_pane_stacon_t1

0x9198,	// (0x00012273) grid_app_pane_ParamLimits

0x9198,	// (0x00012273) grid_app_pane

0x91ba,	// (0x00012295) scroll_pane_cp15_ParamLimits

0x91ba,	// (0x00012295) scroll_pane_cp15

0x91cf,	// (0x000122aa) cell_app_pane_ParamLimits

0x91cf,	// (0x000122aa) cell_app_pane

0x91f9,	// (0x000122d4) cell_app_pane_g1_ParamLimits

0x91f9,	// (0x000122d4) cell_app_pane_g1

0x921d,	// (0x000122f8) cell_app_pane_g2_ParamLimits

0x921d,	// (0x000122f8) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x000187d0) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x000187d0) cell_app_pane_g

0x9229,	// (0x00012304) cell_app_pane_t1_ParamLimits

0x9229,	// (0x00012304) cell_app_pane_t1

0x9240,	// (0x0001231b) grid_highlight_pane_ParamLimits

0x9240,	// (0x0001231b) grid_highlight_pane

0x8d98,	// (0x00011e73) cell_highlight_pane_g1

0x8da0,	// (0x00011e7b) cell_highlight_pane_g2

0x8da8,	// (0x00011e83) cell_highlight_pane_g3

0x8db0,	// (0x00011e8b) cell_highlight_pane_g4

0x8db8,	// (0x00011e93) cell_highlight_pane_g5

0x8dc0,	// (0x00011e9b) cell_highlight_pane_g6

0x8dc8,	// (0x00011ea3) cell_highlight_pane_g7

0x8dd0,	// (0x00011eab) cell_highlight_pane_g8

0x8dd8,	// (0x00011eb3) cell_highlight_pane_g9

0x7d99,	// (0x00010e74) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0001877e) cell_highlight_pane_g

0x9251,	// (0x0001232c) bg_scroll_pane

0x6737,	// (0x0000f812) scroll_handle_pane

0x9298,	// (0x00012373) scroll_bg_pane_g1

0x92ad,	// (0x00012388) scroll_bg_pane_g2

0x92c5,	// (0x000123a0) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x000187d5) scroll_bg_pane_g

0x92da,	// (0x000123b5) scroll_handle_focus_pane_ParamLimits

0x92da,	// (0x000123b5) scroll_handle_focus_pane

0x9298,	// (0x00012373) scroll_handle_pane_g1

0x92e7,	// (0x000123c2) scroll_handle_pane_g2

0x92c5,	// (0x000123a0) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x000187dc) scroll_handle_pane_g

0x8e91,	// (0x00011f6c) bg_popup_sub_pane_cp21_ParamLimits

0x8e91,	// (0x00011f6c) bg_popup_sub_pane_cp21

0x92fb,	// (0x000123d6) popup_fep_japan_predictive_window_t1_ParamLimits

0x92fb,	// (0x000123d6) popup_fep_japan_predictive_window_t1

0x9312,	// (0x000123ed) popup_fep_japan_predictive_window_t2_ParamLimits

0x9312,	// (0x000123ed) popup_fep_japan_predictive_window_t2

0x9345,	// (0x00012420) popup_fep_japan_predictive_window_t3_ParamLimits

0x9345,	// (0x00012420) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x000187e3) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x000187e3) popup_fep_japan_predictive_window_t

0x7da3,	// (0x00010e7e) bg_popup_sub_pane_cp23

0x937c,	// (0x00012457) listscroll_japin_cand_pane

0x9384,	// (0x0001245f) popup_fep_japan_candidate_window_t1

0x9392,	// (0x0001246d) candidate_pane_ParamLimits

0x9392,	// (0x0001246d) candidate_pane

0x93a4,	// (0x0001247f) scroll_pane_cp30

0x93ac,	// (0x00012487) list_single_popup_jap_candidate_pane_ParamLimits

0x93ac,	// (0x00012487) list_single_popup_jap_candidate_pane

0x7da3,	// (0x00010e7e) list_highlight_pane_cp30

0x93c0,	// (0x0001249b) list_single_popup_jap_candidate_pane_t1

0x93cf,	// (0x000124aa) level_1_signal

0x93dc,	// (0x000124b7) level_2_signal

0x93e9,	// (0x000124c4) level_3_signal

0x93f6,	// (0x000124d1) level_4_signal

0x9403,	// (0x000124de) level_5_signal

0x9410,	// (0x000124eb) level_6_signal

0x941d,	// (0x000124f8) level_7_signal

0x93cf,	// (0x000124aa) level_1_battery

0x93dc,	// (0x000124b7) level_2_battery

0x93e9,	// (0x000124c4) level_3_battery

0x93f6,	// (0x000124d1) level_4_battery

0x9403,	// (0x000124de) level_5_battery

0x9410,	// (0x000124eb) level_6_battery

0x941d,	// (0x000124f8) level_7_battery

0x9442,	// (0x0001251d) list_menu_pane_ParamLimits

0x9442,	// (0x0001251d) list_menu_pane

0x9453,	// (0x0001252e) scroll_pane_cp25_ParamLimits

0x9453,	// (0x0001252e) scroll_pane_cp25

0x946c,	// (0x00012547) list_double2_graphic_pane_cp2_ParamLimits

0x946c,	// (0x00012547) list_double2_graphic_pane_cp2

0x946c,	// (0x00012547) list_double2_large_graphic_pane_cp2_ParamLimits

0x946c,	// (0x00012547) list_double2_large_graphic_pane_cp2

0x946c,	// (0x00012547) list_double2_pane_cp2_ParamLimits

0x946c,	// (0x00012547) list_double2_pane_cp2

0x946c,	// (0x00012547) list_double_graphic_pane_cp2_ParamLimits

0x946c,	// (0x00012547) list_double_graphic_pane_cp2

0x946c,	// (0x00012547) list_double_large_graphic_pane_cp2_ParamLimits

0x946c,	// (0x00012547) list_double_large_graphic_pane_cp2

0x946c,	// (0x00012547) list_double_number_pane_cp2_ParamLimits

0x946c,	// (0x00012547) list_double_number_pane_cp2

0x946c,	// (0x00012547) list_double_pane_cp2_ParamLimits

0x946c,	// (0x00012547) list_double_pane_cp2

0x948e,	// (0x00012569) list_single_2graphic_pane_cp2_ParamLimits

0x948e,	// (0x00012569) list_single_2graphic_pane_cp2

0x948e,	// (0x00012569) list_single_graphic_heading_pane_cp2_ParamLimits

0x948e,	// (0x00012569) list_single_graphic_heading_pane_cp2

0x948e,	// (0x00012569) list_single_graphic_pane_cp2_ParamLimits

0x948e,	// (0x00012569) list_single_graphic_pane_cp2

0x948e,	// (0x00012569) list_single_heading_pane_cp2_ParamLimits

0x948e,	// (0x00012569) list_single_heading_pane_cp2

0x94a5,	// (0x00012580) list_single_large_graphic_pane_cp2_ParamLimits

0x94a5,	// (0x00012580) list_single_large_graphic_pane_cp2

0x948e,	// (0x00012569) list_single_number_heading_pane_cp2_ParamLimits

0x948e,	// (0x00012569) list_single_number_heading_pane_cp2

0x948e,	// (0x00012569) list_single_number_pane_cp2_ParamLimits

0x948e,	// (0x00012569) list_single_number_pane_cp2

0x948e,	// (0x00012569) list_single_pane_cp2_ParamLimits

0x948e,	// (0x00012569) list_single_pane_cp2

0x94fb,	// (0x000125d6) bg_popup_sub_pane_cp22

0x67e9,	// (0x0000f8c4) popup_side_volume_key_window_g1

0x6813,	// (0x0000f8ee) popup_side_volume_key_window_t1

0x682f,	// (0x0000f90a) volume_small_pane_cp1

0x8118,	// (0x000111f3) bg_popup_sub_pane_cp24_ParamLimits

0x8118,	// (0x000111f3) bg_popup_sub_pane_cp24

0x9511,	// (0x000125ec) fep_china_uni_candidate_pane_ParamLimits

0x9511,	// (0x000125ec) fep_china_uni_candidate_pane

0x9525,	// (0x00012600) fep_china_uni_entry_pane

0x9535,	// (0x00012610) popup_fep_china_uni_window_g1

0x9551,	// (0x0001262c) fep_china_uni_entry_pane_g1

0x9559,	// (0x00012634) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x00018810) fep_china_uni_entry_pane_g

0x9561,	// (0x0001263c) fep_entry_item_pane

0x956b,	// (0x00012646) fep_candidate_item_pane

0x9573,	// (0x0001264e) fep_china_uni_candidate_pane_g1

0x957b,	// (0x00012656) fep_china_uni_candidate_pane_g2

0x9583,	// (0x0001265e) fep_china_uni_candidate_pane_g3

0x958b,	// (0x00012666) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x00018815) fep_china_uni_candidate_pane_g

0x7d99,	// (0x00010e74) fep_entry_item_pane_g1

0x9593,	// (0x0001266e) fep_entry_item_pane_t1_ParamLimits

0x9593,	// (0x0001266e) fep_entry_item_pane_t1

0x95a9,	// (0x00012684) fep_candidate_item_pane_t1_ParamLimits

0x95a9,	// (0x00012684) fep_candidate_item_pane_t1

0x95be,	// (0x00012699) fep_candidate_item_pane_t2_ParamLimits

0x95be,	// (0x00012699) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001881e) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001881e) fep_candidate_item_pane_t

0x7e83,	// (0x00010f5e) list_highlight_pane_cp31_ParamLimits

0x7e83,	// (0x00010f5e) list_highlight_pane_cp31

0x95d0,	// (0x000126ab) level_1_signal_lsc

0x95d9,	// (0x000126b4) level_2_signal_lsc

0x95e2,	// (0x000126bd) level_3_signal_lsc

0x95eb,	// (0x000126c6) level_4_signal_lsc

0x95f4,	// (0x000126cf) level_5_signal_lsc

0x95fd,	// (0x000126d8) level_6_signal_lsc

0x9606,	// (0x000126e1) level_7_signal_lsc

0x9606,	// (0x000126e1) level_1_battery_lsc

0x960f,	// (0x000126ea) level_2_battery_lsc

0x9618,	// (0x000126f3) level_3_battery_lsc

0x9621,	// (0x000126fc) level_4_battery_lsc

0x962a,	// (0x00012705) level_5_battery_lsc

0x9633,	// (0x0001270e) level_6_battery_lsc

0x95d0,	// (0x000126ab) level_7_battery_lsc

0x963c,	// (0x00012717) scroll_handle_focus_pane_g1

0x9645,	// (0x00012720) scroll_handle_focus_pane_g2

0x964e,	// (0x00012729) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x00018823) scroll_handle_focus_pane_g

0x9657,	// (0x00012732) list_single_2graphic_pane_g1_ParamLimits

0x9657,	// (0x00012732) list_single_2graphic_pane_g1

0x8729,	// (0x00011804) list_single_2graphic_pane_g2_ParamLimits

0x8729,	// (0x00011804) list_single_2graphic_pane_g2

0x86af,	// (0x0001178a) list_single_2graphic_pane_g3_ParamLimits

0x86af,	// (0x0001178a) list_single_2graphic_pane_g3

0x9663,	// (0x0001273e) list_single_2graphic_pane_g4_ParamLimits

0x9663,	// (0x0001273e) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001882a) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001882a) list_single_2graphic_pane_g

0x9674,	// (0x0001274f) list_single_2graphic_pane_t1_ParamLimits

0x9674,	// (0x0001274f) list_single_2graphic_pane_t1

0x96a2,	// (0x0001277d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x96a2,	// (0x0001277d) list_double2_graphic_large_graphic_pane_g1

0x87ce,	// (0x000118a9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x87ce,	// (0x000118a9) list_double2_graphic_large_graphic_pane_g2

0x87df,	// (0x000118ba) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x87df,	// (0x000118ba) list_double2_graphic_large_graphic_pane_g3

0x96b2,	// (0x0001278d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x96b2,	// (0x0001278d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x00018833) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x00018833) list_double2_graphic_large_graphic_pane_g

0x96be,	// (0x00012799) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x96be,	// (0x00012799) list_double2_graphic_large_graphic_pane_t1

0x96d4,	// (0x000127af) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x96d4,	// (0x000127af) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001883c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001883c) list_double2_graphic_large_graphic_pane_t

0x9828,	// (0x00012903) popup_fast_swap_window_ParamLimits

0x9828,	// (0x00012903) popup_fast_swap_window

0x9844,	// (0x0001291f) popup_side_volume_key_window

0x985e,	// (0x00012939) stacon_top_pane

0x9868,	// (0x00012943) status_pane_ParamLimits

0x9868,	// (0x00012943) status_pane

0x985e,	// (0x00012939) status_small_pane

0x7da3,	// (0x00010e7e) control_pane

0x7da3,	// (0x00010e7e) stacon_bottom_pane

0x8b7b,	// (0x00011c56) scroll_pane_cp121

0x8b72,	// (0x00011c4d) set_content_pane

0x96e6,	// (0x000127c1) bg_active_tab_pane_g1_cp1

0x96ef,	// (0x000127ca) bg_active_tab_pane_g2_cp1

0x96f8,	// (0x000127d3) bg_active_tab_pane_g3_cp1

0x96e6,	// (0x000127c1) bg_passive_tab_pane_g1_cp1

0x96ef,	// (0x000127ca) bg_passive_tab_pane_g2_cp1

0x96f8,	// (0x000127d3) bg_passive_tab_pane_g3_cp1

0x9701,	// (0x000127dc) bg_active_tab_pane_g1_cp2

0x96ef,	// (0x000127ca) bg_active_tab_pane_g2_cp2

0x970a,	// (0x000127e5) bg_active_tab_pane_g3_cp2

0x9701,	// (0x000127dc) bg_passive_tab_pane_g1_cp2

0x96ef,	// (0x000127ca) bg_passive_tab_pane_g2_cp2

0x970a,	// (0x000127e5) bg_passive_tab_pane_g3_cp2

0x9713,	// (0x000127ee) bg_active_tab_pane_g1_cp3

0x96ef,	// (0x000127ca) bg_active_tab_pane_g2_cp3

0x971c,	// (0x000127f7) bg_active_tab_pane_g3_cp3

0x9713,	// (0x000127ee) bg_passive_tab_pane_g1_cp3

0x96ef,	// (0x000127ca) bg_passive_tab_pane_g2_cp3

0x971c,	// (0x000127f7) bg_passive_tab_pane_g3_cp3

0x9725,	// (0x00012800) bg_active_tab_pane_g1_cp4

0x96ef,	// (0x000127ca) bg_active_tab_pane_g2_cp4

0x9730,	// (0x0001280b) bg_active_tab_pane_g3_cp4

0x9725,	// (0x00012800) bg_passive_tab_pane_g1_cp4

0x96ef,	// (0x000127ca) bg_passive_tab_pane_g2_cp4

0x9730,	// (0x0001280b) bg_passive_tab_pane_g3_cp4

0x9779,	// (0x00012854) bg_active_tab_pane_g1_cp5

0x96ef,	// (0x000127ca) bg_active_tab_pane_g2_cp5

0x9782,	// (0x0001285d) bg_active_tab_pane_g3_cp5

0x9779,	// (0x00012854) bg_passive_tab_pane_g1_cp5

0x96ef,	// (0x000127ca) bg_passive_tab_pane_g2_cp5

0x9782,	// (0x0001285d) bg_passive_tab_pane_g3_cp5

0x978b,	// (0x00012866) list_set_graphic_pane_ParamLimits

0x978b,	// (0x00012866) list_set_graphic_pane

0x7da3,	// (0x00010e7e) bg_set_opt_pane_cp4

0x97a9,	// (0x00012884) list_set_graphic_pane_g1_ParamLimits

0x97a9,	// (0x00012884) list_set_graphic_pane_g1

0x97b5,	// (0x00012890) list_set_graphic_pane_g2_ParamLimits

0x97b5,	// (0x00012890) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x00018841) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x00018841) list_set_graphic_pane_g

0x0009,

0xfade,	// (0x00018bb9) volume_small_pane_cp_g

0x97d9,	// (0x000128b4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x97d9,	// (0x000128b4) list_double2_large_graphic_pane_g1_cp2

0x97e7,	// (0x000128c2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x97e7,	// (0x000128c2) list_double2_large_graphic_pane_g2_cp2

0x97f8,	// (0x000128d3) list_double2_large_graphic_pane_g3_cp2

0x9800,	// (0x000128db) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9800,	// (0x000128db) list_double2_large_graphic_pane_t1_cp2

0x9816,	// (0x000128f1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9816,	// (0x000128f1) list_double2_large_graphic_pane_t2_cp2

0xba9f,	// (0x00014b7a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xba9f,	// (0x00014b7a) list_double_large_graphic_pane_g1_cp2

0xbab2,	// (0x00014b8d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbab2,	// (0x00014b8d) list_double_large_graphic_pane_g2_cp2

0x9986,	// (0x00012a61) list_double_large_graphic_pane_g3_cp2

0xbac3,	// (0x00014b9e) list_double_large_graphic_pane_g4_cp

0xbacb,	// (0x00014ba6) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xbacb,	// (0x00014ba6) list_double_large_graphic_pane_t1_cp2

0xbae2,	// (0x00014bbd) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xbae2,	// (0x00014bbd) list_double_large_graphic_pane_t2_cp2

0x9876,	// (0x00012951) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9876,	// (0x00012951) list_double2_graphic_pane_g1_cp2

0x9884,	// (0x0001295f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9884,	// (0x0001295f) list_double2_graphic_pane_g2_cp2

0x9895,	// (0x00012970) list_double2_graphic_pane_g3_cp2

0x989f,	// (0x0001297a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x989f,	// (0x0001297a) list_double2_graphic_pane_t1_cp2

0x98b5,	// (0x00012990) list_double2_graphic_pane_t2_cp2_ParamLimits

0x98b5,	// (0x00012990) list_double2_graphic_pane_t2_cp2

0x98c7,	// (0x000129a2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x98c7,	// (0x000129a2) list_single_number_heading_pane_g1_cp2

0x98d3,	// (0x000129ae) list_single_number_heading_pane_g2_cp2

0x98db,	// (0x000129b6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x98db,	// (0x000129b6) list_single_number_heading_pane_t1_cp2

0x98f1,	// (0x000129cc) list_single_number_heading_pane_t2_cp2_ParamLimits

0x98f1,	// (0x000129cc) list_single_number_heading_pane_t2_cp2

0x9905,	// (0x000129e0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9905,	// (0x000129e0) list_single_number_heading_pane_t3_cp2

0x98c7,	// (0x000129a2) list_single_heading_pane_g1_cp2_ParamLimits

0x98c7,	// (0x000129a2) list_single_heading_pane_g1_cp2

0x98d3,	// (0x000129ae) list_single_heading_pane_g2_cp2

0x98db,	// (0x000129b6) list_single_heading_pane_t1_cp2_ParamLimits

0x98db,	// (0x000129b6) list_single_heading_pane_t1_cp2

0xb8a7,	// (0x00014982) list_single_heading_pane_t2_cp2_ParamLimits

0xb8a7,	// (0x00014982) list_single_heading_pane_t2_cp2

0xb7e9,	// (0x000148c4) list_double_graphic_pane_g1_cp2_ParamLimits

0xb7e9,	// (0x000148c4) list_double_graphic_pane_g1_cp2

0xb7f5,	// (0x000148d0) list_double_graphic_pane_g2_cp2_ParamLimits

0xb7f5,	// (0x000148d0) list_double_graphic_pane_g2_cp2

0xb804,	// (0x000148df) list_double_graphic_pane_g3_cp2

0xb80c,	// (0x000148e7) list_double_graphic_pane_t1_cp2_ParamLimits

0xb80c,	// (0x000148e7) list_double_graphic_pane_t1_cp2

0xb822,	// (0x000148fd) list_double_graphic_pane_t2_cp2_ParamLimits

0xb822,	// (0x000148fd) list_double_graphic_pane_t2_cp2

0x997a,	// (0x00012a55) list_double_number_pane_g1_cp2_ParamLimits

0x997a,	// (0x00012a55) list_double_number_pane_g1_cp2

0x9986,	// (0x00012a61) list_double_number_pane_g2_cp2

0xb7ad,	// (0x00014888) list_double_number_pane_t1_cp2_ParamLimits

0xb7ad,	// (0x00014888) list_double_number_pane_t1_cp2

0xb7c1,	// (0x0001489c) list_double_number_pane_t2_cp2_ParamLimits

0xb7c1,	// (0x0001489c) list_double_number_pane_t2_cp2

0xb7d7,	// (0x000148b2) list_double_number_pane_t3_cp2_ParamLimits

0xb7d7,	// (0x000148b2) list_double_number_pane_t3_cp2

0xb696,	// (0x00014771) list_single_graphic_pane_g1_cp2_ParamLimits

0xb696,	// (0x00014771) list_single_graphic_pane_g1_cp2

0x99de,	// (0x00012ab9) list_single_graphic_pane_g2_cp2_ParamLimits

0x99de,	// (0x00012ab9) list_single_graphic_pane_g2_cp2

0x99ea,	// (0x00012ac5) list_single_graphic_pane_g3_cp2

0xb66c,	// (0x00014747) list_single_graphic_pane_t1_cp2_ParamLimits

0xb66c,	// (0x00014747) list_single_graphic_pane_t1_cp2

0x99de,	// (0x00012ab9) list_single_number_pane_g1_cp2_ParamLimits

0x99de,	// (0x00012ab9) list_single_number_pane_g1_cp2

0x99ea,	// (0x00012ac5) list_single_number_pane_g2_cp2

0xb66c,	// (0x00014747) list_single_number_pane_t1_cp2_ParamLimits

0xb66c,	// (0x00014747) list_single_number_pane_t1_cp2

0xb682,	// (0x0001475d) list_single_number_pane_t2_cp2_ParamLimits

0xb682,	// (0x0001475d) list_single_number_pane_t2_cp2

0x97e7,	// (0x000128c2) list_double2_pane_g1_cp2_ParamLimits

0x97e7,	// (0x000128c2) list_double2_pane_g1_cp2

0x97f8,	// (0x000128d3) list_double2_pane_g2_cp2

0x9952,	// (0x00012a2d) list_double2_pane_t1_cp2_ParamLimits

0x9952,	// (0x00012a2d) list_double2_pane_t1_cp2

0x9968,	// (0x00012a43) list_double2_pane_t2_cp2_ParamLimits

0x9968,	// (0x00012a43) list_double2_pane_t2_cp2

0x997a,	// (0x00012a55) list_double_pane_g1_cp2_ParamLimits

0x997a,	// (0x00012a55) list_double_pane_g1_cp2

0x9986,	// (0x00012a61) list_double_pane_g2_cp2

0x998e,	// (0x00012a69) list_double_pane_t1_cp2_ParamLimits

0x998e,	// (0x00012a69) list_double_pane_t1_cp2

0x99a4,	// (0x00012a7f) list_double_pane_t2_cp2_ParamLimits

0x99a4,	// (0x00012a7f) list_double_pane_t2_cp2

0x99ce,	// (0x00012aa9) list_single_pane_cp2_g3

0x99de,	// (0x00012ab9) list_single_pane_g1_cp2_ParamLimits

0x99de,	// (0x00012ab9) list_single_pane_g1_cp2

0x99ea,	// (0x00012ac5) list_single_pane_g2_cp2

0x99f2,	// (0x00012acd) list_single_pane_t1_cp2_ParamLimits

0x99f2,	// (0x00012acd) list_single_pane_t1_cp2

0x9a0a,	// (0x00012ae5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9a0a,	// (0x00012ae5) list_single_large_graphic_pane_g1_cp2

0x9a18,	// (0x00012af3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9a18,	// (0x00012af3) list_single_large_graphic_pane_g2_cp2

0x9a24,	// (0x00012aff) list_single_large_graphic_pane_g3_cp2

0x9a2c,	// (0x00012b07) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9a2c,	// (0x00012b07) list_single_large_graphic_pane_g4_cp1

0x9a46,	// (0x00012b21) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9a46,	// (0x00012b21) list_single_large_graphic_pane_t1_cp2

0xb636,	// (0x00014711) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xb636,	// (0x00014711) list_single_graphic_heading_pane_g1_cp2

0xb603,	// (0x000146de) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb603,	// (0x000146de) list_single_graphic_heading_pane_g4_cp2

0x99ea,	// (0x00012ac5) list_single_graphic_heading_pane_g5_cp2

0xb642,	// (0x0001471d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xb642,	// (0x0001471d) list_single_graphic_heading_pane_t1_cp2

0xb658,	// (0x00014733) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb658,	// (0x00014733) list_single_graphic_heading_pane_t2_cp2

0xb5f7,	// (0x000146d2) list_single_2graphic_pane_g1_cp2_ParamLimits

0xb5f7,	// (0x000146d2) list_single_2graphic_pane_g1_cp2

0xb603,	// (0x000146de) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb603,	// (0x000146de) list_single_2graphic_pane_g2_cp2

0x99ea,	// (0x00012ac5) list_single_2graphic_pane_g3_cp2

0xb614,	// (0x000146ef) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb614,	// (0x000146ef) list_single_2graphic_pane_g4_cp2

0xb620,	// (0x000146fb) list_single_2graphic_pane_t1_cp2_ParamLimits

0xb620,	// (0x000146fb) list_single_2graphic_pane_t1_cp2

0x7d99,	// (0x00010e74) list_highlight_pane_g10_cp1

0xb1df,	// (0x000142ba) list_highlight_pane_g1_cp1

0xb1e7,	// (0x000142c2) list_highlight_pane_g2_cp1

0xb1ef,	// (0x000142ca) list_highlight_pane_g3_cp1

0xb1f7,	// (0x000142d2) list_highlight_pane_g4_cp1

0xb1ff,	// (0x000142da) list_highlight_pane_g5_cp1

0xb207,	// (0x000142e2) list_highlight_pane_g6_cp1

0xb20f,	// (0x000142ea) list_highlight_pane_g7_cp1

0xb217,	// (0x000142f2) list_highlight_pane_g8_cp1

0xb21f,	// (0x000142fa) list_highlight_pane_g9_cp1

0xb0f7,	// (0x000141d2) form_field_slider_pane_t3

0xb105,	// (0x000141e0) form_field_slider_pane_t4

0xb113,	// (0x000141ee) slider_form_pane_ParamLimits

0xb113,	// (0x000141ee) slider_form_pane

0x7da3,	// (0x00010e7e) control_abbreviations

0x7da3,	// (0x00010e7e) control_conventions

0x7da3,	// (0x00010e7e) control_definitions

0x7da3,	// (0x00010e7e) format_table_attribute

0xb8f3,	// (0x000149ce) bg_popup_preview_window_pane_g9

0x7da3,	// (0x00010e7e) format_table_data2

0x7da3,	// (0x00010e7e) format_table_data3

0x7da3,	// (0x00010e7e) format_table_data_example

0x0008,

0x7da3,	// (0x00010e7e) intro_purpose

0xf8fb,	// (0x000189d6) bg_popup_preview_window_pane_g

0x7da3,	// (0x00010e7e) texts_category

0x7da3,	// (0x00010e7e) texts_graphics

0x9a5c,	// (0x00012b37) text_digital

0x9a6b,	// (0x00012b46) text_primary

0x9a7a,	// (0x00012b55) text_primary_small

0x9a89,	// (0x00012b64) text_secondary

0x9a98,	// (0x00012b73) text_title

0xc12b,	// (0x00015206) bg_passive_tab_pane_g1_cp3_srt

0x96ef,	// (0x000127ca) bg_passive_tab_pane_g2_cp3_srt

0xc134,	// (0x0001520f) bg_passive_tab_pane_g3_cp3_srt

0x7e83,	// (0x00010f5e) bg_active_tab_pane_cp3_srt_ParamLimits

0x7e83,	// (0x00010f5e) bg_active_tab_pane_cp3_srt

0xc13d,	// (0x00015218) tabs_4_active_pane_srt_g1

0xc145,	// (0x00015220) tabs_4_active_pane_srt_t1_ParamLimits

0xc145,	// (0x00015220) tabs_4_active_pane_srt_t1

0xc12b,	// (0x00015206) bg_active_tab_pane_g1_cp3_copy1

0x96ef,	// (0x000127ca) bg_active_tab_pane_g2_cp3_copy1

0xc134,	// (0x0001520f) bg_active_tab_pane_g3_cp3_copy1

0x7e83,	// (0x00010f5e) tabs_2_long_active_pane_srt_ParamLimits

0x7e83,	// (0x00010f5e) tabs_2_long_active_pane_srt

0x7e83,	// (0x00010f5e) tabs_2_long_passive_pane_srt_ParamLimits

0x7e83,	// (0x00010f5e) tabs_2_long_passive_pane_srt

0x8fc2,	// (0x0001209d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8fc2,	// (0x0001209d) bg_passive_tab_pane_cp4_srt

0xbd60,	// (0x00014e3b) bg_passive_tab_pane_g1_cp4_srt

0x96ef,	// (0x000127ca) bg_passive_tab_pane_g2_cp4_srt

0xbd69,	// (0x00014e44) bg_passive_tab_pane_g3_cp4_srt

0x8fa1,	// (0x0001207c) bg_active_tab_pane_cp4_srt_ParamLimits

0x8fa1,	// (0x0001207c) bg_active_tab_pane_cp4_srt

0xbd72,	// (0x00014e4d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbd72,	// (0x00014e4d) tabs_2_long_active_pane_srt_t1

0xbd60,	// (0x00014e3b) bg_active_tab_pane_g1_cp4_srt

0x96ef,	// (0x000127ca) bg_active_tab_pane_g2_cp4_srt

0xbd69,	// (0x00014e44) bg_active_tab_pane_g3_cp4_srt

0x8118,	// (0x000111f3) tabs_3_long_active_pane_srt_ParamLimits

0x8118,	// (0x000111f3) tabs_3_long_active_pane_srt

0x8118,	// (0x000111f3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8118,	// (0x000111f3) tabs_3_long_passive_pane_cp_srt

0x8118,	// (0x000111f3) tabs_3_long_passive_pane_srt_ParamLimits

0x8118,	// (0x000111f3) tabs_3_long_passive_pane_srt

0x8fc2,	// (0x0001209d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8fc2,	// (0x0001209d) bg_passive_tab_pane_cp5_srt

0x9779,	// (0x00012854) bg_passive_tab_pane_g1_cp5_srt

0x96ef,	// (0x000127ca) bg_passive_tab_pane_g2_cp5_srt

0x9782,	// (0x0001285d) bg_passive_tab_pane_g3_cp5_srt

0x8fa1,	// (0x0001207c) bg_active_tab_pane_cp5_srt_ParamLimits

0x8fa1,	// (0x0001207c) bg_active_tab_pane_cp5_srt

0xbd4e,	// (0x00014e29) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbd4e,	// (0x00014e29) tabs_3_long_active_pane_srt_t1

0x9779,	// (0x00012854) bg_active_tab_pane_g1_cp5_srt

0x96ef,	// (0x000127ca) bg_active_tab_pane_g2_cp5_srt

0x9782,	// (0x0001285d) bg_active_tab_pane_g3_cp5_srt

0xbd40,	// (0x00014e1b) navi_text_pane_srt_t1

0xbd38,	// (0x00014e13) navi_icon_pane_srt_g1

0x9c67,	// (0x00012d42) midp_editing_number_pane_srt

0x9aa7,	// (0x00012b82) midp_ticker_pane_srt

0x9c6f,	// (0x00012d4a) midp_ticker_pane_srt_g1

0x9c77,	// (0x00012d52) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x00018860) midp_ticker_pane_srt_g

0x9c7f,	// (0x00012d5a) midp_ticker_pane_srt_t1

0xbd29,	// (0x00014e04) midp_editing_number_pane_t1_copy1

0x9aaf,	// (0x00012b8a) listscroll_midp_pane

0x9aaf,	// (0x00012b8a) midp_form_pane

0x9b1f,	// (0x00012bfa) midp_info_popup_window_ParamLimits

0x9b1f,	// (0x00012bfa) midp_info_popup_window

0x8e91,	// (0x00011f6c) bg_popup_sub_pane_cp50_ParamLimits

0x8e91,	// (0x00011f6c) bg_popup_sub_pane_cp50

0xae14,	// (0x00013eef) listscroll_midp_info_pane_ParamLimits

0xae14,	// (0x00013eef) listscroll_midp_info_pane

0xadfc,	// (0x00013ed7) listscroll_form_midp_pane_ParamLimits

0xadfc,	// (0x00013ed7) listscroll_form_midp_pane

0xae08,	// (0x00013ee3) scroll_bar_cp050

0xaddc,	// (0x00013eb7) list_midp_pane

0xcd0e,	// (0x00015de9) signal_pane_g2_cp

0xad16,	// (0x00013df1) listscroll_midp_info_pane_t1_ParamLimits

0xad16,	// (0x00013df1) listscroll_midp_info_pane_t1

0xad2e,	// (0x00013e09) listscroll_midp_info_pane_t2_ParamLimits

0xad2e,	// (0x00013e09) listscroll_midp_info_pane_t2

0xad6c,	// (0x00013e47) listscroll_midp_info_pane_t3_ParamLimits

0xad6c,	// (0x00013e47) listscroll_midp_info_pane_t3

0xada6,	// (0x00013e81) listscroll_midp_info_pane_t4_ParamLimits

0xada6,	// (0x00013e81) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x00018911) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x00018911) listscroll_midp_info_pane_t

0x8f4f,	// (0x0001202a) scroll_pane_cp21

0xacba,	// (0x00013d95) form_midp_field_choice_group_pane

0xacc3,	// (0x00013d9e) form_midp_field_text_pane

0xacfc,	// (0x00013dd7) form_midp_field_time_pane

0xad04,	// (0x00013ddf) form_midp_gauge_slider_pane

0xad0d,	// (0x00013de8) form_midp_gauge_wait_pane

0x7da3,	// (0x00010e7e) form_midp_image_pane

0xac7e,	// (0x00013d59) list_single_midp_pane_ParamLimits

0xac7e,	// (0x00013d59) list_single_midp_pane

0xac2e,	// (0x00013d09) form_midp_field_text_pane_t1

0xa9f9,	// (0x00013ad4) input_focus_pane_cp050

0xac6d,	// (0x00013d48) list_midp_form_text_pane

0xabfd,	// (0x00013cd8) form_midp_field_choice_group_pane_t1

0xac0b,	// (0x00013ce6) input_focus_pane_cp051

0xac1f,	// (0x00013cfa) list_midp_choice_pane

0x7da3,	// (0x00010e7e) status_idle_pane

0xabe1,	// (0x00013cbc) form_midp_field_time_pane_t1

0x7d99,	// (0x00010e74) wait_anim_pane_g2_copy1

0xabef,	// (0x00013cca) form_midp_field_time_pane_t2

0x0001,

0x9bcf,	// (0x00012caa) aid_navinavi_width_2_pane

0xf831,	// (0x0001890c) form_midp_field_time_pane_t

0x7da3,	// (0x00010e7e) input_focus_pane_cp052

0x7da3,	// (0x00010e7e) bg_input_focus_pane_cp040

0xaba1,	// (0x00013c7c) form_midp_gauge_slider_pane_t1

0xabaf,	// (0x00013c8a) form_midp_gauge_slider_pane_t2

0xabbd,	// (0x00013c98) form_midp_gauge_slider_pane_t3

0xabcb,	// (0x00013ca6) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x00018903) form_midp_gauge_slider_pane_t

0xabd9,	// (0x00013cb4) form_midp_slider_pane

0x7e83,	// (0x00010f5e) bg_input_focus_pane_cp041_ParamLimits

0x7e83,	// (0x00010f5e) bg_input_focus_pane_cp041

0xab6e,	// (0x00013c49) form_midp_gauge_wait_pane_t1_ParamLimits

0xab6e,	// (0x00013c49) form_midp_gauge_wait_pane_t1

0xab80,	// (0x00013c5b) form_midp_gauge_wait_pane_t2_ParamLimits

0xab80,	// (0x00013c5b) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x000188fe) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x000188fe) form_midp_gauge_wait_pane_t

0xab92,	// (0x00013c6d) form_midp_wait_pane_ParamLimits

0xab92,	// (0x00013c6d) form_midp_wait_pane

0xab38,	// (0x00013c13) form_midp_image_pane_g1

0xab41,	// (0x00013c1c) form_midp_image_pane_t1

0xab50,	// (0x00013c2b) form_midp_image_pane_t2

0xab5f,	// (0x00013c3a) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x000188f7) form_midp_image_pane_t

0xab20,	// (0x00013bfb) list_single_midp_pane_g1

0xab29,	// (0x00013c04) list_single_midp_pane_t1

0xaaf0,	// (0x00013bcb) list_midp_form_item_pane_ParamLimits

0xaaf0,	// (0x00013bcb) list_midp_form_item_pane

0x9b77,	// (0x00012c52) list_midp_form_item_pane_t1

0x9b86,	// (0x00012c61) midp_ticker_pane_g1

0x9b92,	// (0x00012c6d) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x00018846) midp_ticker_pane_g

0x9b9e,	// (0x00012c79) midp_ticker_pane_t1

0xbf9f,	// (0x0001507a) midp_editing_number_pane_t1

0xbf7d,	// (0x00015058) midp_editing_number_pane

0xbf8c,	// (0x00015067) midp_ticker_pane

0xbcf1,	// (0x00014dcc) ai_message_heading_pane

0x7da3,	// (0x00010e7e) bg_popup_window_pane_cp14

0xbcf9,	// (0x00014dd4) listscroll_ai_message_pane

0xbc7b,	// (0x00014d56) ai_message_heading_pane_g1_ParamLimits

0xbc7b,	// (0x00014d56) ai_message_heading_pane_g1

0xbc87,	// (0x00014d62) ai_message_heading_pane_g2_ParamLimits

0xbc87,	// (0x00014d62) ai_message_heading_pane_g2

0xbc93,	// (0x00014d6e) ai_message_heading_pane_g3_ParamLimits

0xbc93,	// (0x00014d6e) ai_message_heading_pane_g3

0xbc9f,	// (0x00014d7a) ai_message_heading_pane_g4_ParamLimits

0xbc9f,	// (0x00014d7a) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x00018a38) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x00018a38) ai_message_heading_pane_g

0xbcab,	// (0x00014d86) ai_message_heading_pane_t1_ParamLimits

0xbcab,	// (0x00014d86) ai_message_heading_pane_t1

0xbcc5,	// (0x00014da0) ai_message_heading_pane_t2_ParamLimits

0xbcc5,	// (0x00014da0) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x00018a41) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x00018a41) ai_message_heading_pane_t

0xbcd7,	// (0x00014db2) bg_popup_heading_pane_cp1_ParamLimits

0xbcd7,	// (0x00014db2) bg_popup_heading_pane_cp1

0xbc69,	// (0x00014d44) list_ai_message_pane_ParamLimits

0xbc69,	// (0x00014d44) list_ai_message_pane

0x8f4f,	// (0x0001202a) scroll_pane_cp10

0xbc05,	// (0x00014ce0) list_ai_message_pane_g1

0xbc0d,	// (0x00014ce8) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x00018a15) list_ai_message_pane_g

0xbc15,	// (0x00014cf0) list_ai_message_pane_t1_ParamLimits

0xbc15,	// (0x00014cf0) list_ai_message_pane_t1

0xbc2a,	// (0x00014d05) list_ai_message_pane_t2_ParamLimits

0xbc2a,	// (0x00014d05) list_ai_message_pane_t2

0xbc3f,	// (0x00014d1a) list_ai_message_pane_t3_ParamLimits

0xbc3f,	// (0x00014d1a) list_ai_message_pane_t3

0xbc54,	// (0x00014d2f) list_ai_message_pane_t4_ParamLimits

0xbc54,	// (0x00014d2f) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x00018a1a) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x00018a1a) list_ai_message_pane_t

0xbbef,	// (0x00014cca) cell_ai_soft_ind_pane_ParamLimits

0xbbef,	// (0x00014cca) cell_ai_soft_ind_pane

0x9bb0,	// (0x00012c8b) cell_ai_soft_ind_pane_g1_ParamLimits

0x9bb0,	// (0x00012c8b) cell_ai_soft_ind_pane_g1

0x7da3,	// (0x00010e7e) grid_highlight_cp1

0x9bbd,	// (0x00012c98) text_secondary_cp56_ParamLimits

0x9bbd,	// (0x00012c98) text_secondary_cp56

0xbbc4,	// (0x00014c9f) example_general_pane_ParamLimits

0xbbc4,	// (0x00014c9f) example_general_pane

0xbbd0,	// (0x00014cab) example_parent_pane_g1_ParamLimits

0xbbd0,	// (0x00014cab) example_parent_pane_g1

0xbbdc,	// (0x00014cb7) example_parent_pane_t1_ParamLimits

0xbbdc,	// (0x00014cb7) example_parent_pane_t1

0xa1ba,	// (0x00013295) popup_preview_text_window_ParamLimits

0xa1ba,	// (0x00013295) popup_preview_text_window

0x99d6,	// (0x00012ab1) list_single_pane_cp2_g4

0x81c2,	// (0x0001129d) bg_popup_preview_window_pane_ParamLimits

0x81c2,	// (0x0001129d) bg_popup_preview_window_pane

0xb8fb,	// (0x000149d6) popup_preview_text_window_t1_ParamLimits

0xb8fb,	// (0x000149d6) popup_preview_text_window_t1

0xb919,	// (0x000149f4) popup_preview_text_window_t2_ParamLimits

0xb919,	// (0x000149f4) popup_preview_text_window_t2

0xb962,	// (0x00014a3d) popup_preview_text_window_t3_ParamLimits

0xb962,	// (0x00014a3d) popup_preview_text_window_t3

0xb9a7,	// (0x00014a82) popup_preview_text_window_t4_ParamLimits

0xb9a7,	// (0x00014a82) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x000189e9) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x000189e9) popup_preview_text_window_t

0xba25,	// (0x00014b00) scroll_pane_cp11

0xa8df,	// (0x000139ba) bg_popup_preview_window_pane_g1

0xb8bb,	// (0x00014996) bg_popup_preview_window_pane_g2

0xb8c3,	// (0x0001499e) bg_popup_preview_window_pane_g3

0xb8cb,	// (0x000149a6) bg_popup_preview_window_pane_g4

0xb8d3,	// (0x000149ae) bg_popup_preview_window_pane_g5

0xb8db,	// (0x000149b6) bg_popup_preview_window_pane_g6

0xb8e3,	// (0x000149be) bg_popup_preview_window_pane_g7

0xb8eb,	// (0x000149c6) bg_popup_preview_window_pane_g8

0x613c,	// (0x0000f217) aid_popup_width_pane

0xa198,	// (0x00013273) popup_midp_note_alarm_window_ParamLimits

0xa198,	// (0x00013273) popup_midp_note_alarm_window

0x8c2c,	// (0x00011d07) data_form_pane_ParamLimits

0x8c38,	// (0x00011d13) form_field_data_pane_g1

0x8c42,	// (0x00011d1d) form_field_data_pane_t1_ParamLimits

0x8c5c,	// (0x00011d37) input_focus_pane_ParamLimits

0x8c6a,	// (0x00011d45) data_form_wide_pane_ParamLimits

0x8c76,	// (0x00011d51) form_field_data_wide_pane_g1

0x8ca2,	// (0x00011d7d) form_field_data_wide_pane_t1_ParamLimits

0x8461,	// (0x0001153c) input_focus_pane_cp6_ParamLimits

0x8efa,	// (0x00011fd5) input_popup_find_pane_g1_ParamLimits

0x8efa,	// (0x00011fd5) input_popup_find_pane_g1

0x6698,	// (0x0000f773) aid_navi_side_left_pane

0x66ad,	// (0x0000f788) aid_navi_side_right_pane

0xb2da,	// (0x000143b5) bg_popup_window_pane_cp30_ParamLimits

0xb2da,	// (0x000143b5) bg_popup_window_pane_cp30

0xb354,	// (0x0001442f) popup_midp_note_alarm_window_g1_ParamLimits

0xb354,	// (0x0001442f) popup_midp_note_alarm_window_g1

0xb384,	// (0x0001445f) popup_midp_note_alarm_window_t1_ParamLimits

0xb384,	// (0x0001445f) popup_midp_note_alarm_window_t1

0xb425,	// (0x00014500) popup_midp_note_alarm_window_t2_ParamLimits

0xb425,	// (0x00014500) popup_midp_note_alarm_window_t2

0xb4d3,	// (0x000145ae) popup_midp_note_alarm_window_t3_ParamLimits

0xb4d3,	// (0x000145ae) popup_midp_note_alarm_window_t3

0xb4fb,	// (0x000145d6) popup_midp_note_alarm_window_t4_ParamLimits

0xb4fb,	// (0x000145d6) popup_midp_note_alarm_window_t4

0xb51b,	// (0x000145f6) popup_midp_note_alarm_window_t5_ParamLimits

0xb51b,	// (0x000145f6) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x00018986) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x00018986) popup_midp_note_alarm_window_t

0xb5c7,	// (0x000146a2) wait_bar_pane_cp1_ParamLimits

0xb5c7,	// (0x000146a2) wait_bar_pane_cp1

0x7da3,	// (0x00010e7e) wait_anim_pane_copy1

0x7da3,	// (0x00010e7e) wait_border_pane_copy1

0xafb8,	// (0x00014093) wait_border_pane_g1_copy1

0x8cbc,	// (0x00011d97) form_field_popup_pane_g1

0x8cc4,	// (0x00011d9f) form_field_popup_pane_t1_ParamLimits

0x8c5c,	// (0x00011d37) input_focus_pane_cp7_ParamLimits

0x8cde,	// (0x00011db9) list_form_pane_ParamLimits

0x8cea,	// (0x00011dc5) form_field_popup_wide_pane_g1

0x8cf2,	// (0x00011dcd) form_field_popup_wide_pane_t1_ParamLimits

0x8c5c,	// (0x00011d37) input_focus_pane_cp8_ParamLimits

0x8d07,	// (0x00011de2) list_form_wide_pane_ParamLimits

0xc1b5,	// (0x00015290) aid_size_cell_graphic_pane

0x8de0,	// (0x00011ebb) data_form_pane_t1_ParamLimits

0xbf4a,	// (0x00015025) data_form_wide_pane_t1_ParamLimits

0xa493,	// (0x0001356e) bg_status_flat_pane

0x7de3,	// (0x00010ebe) title_pane_t1_ParamLimits

0x7e4b,	// (0x00010f26) title_pane_t2_ParamLimits

0x7e71,	// (0x00010f4c) title_pane_t3_ParamLimits

0xf573,	// (0x0001864e) title_pane_t_ParamLimits

0x93cf,	// (0x000124aa) level_1_signal_ParamLimits

0x93dc,	// (0x000124b7) level_2_signal_ParamLimits

0x93e9,	// (0x000124c4) level_3_signal_ParamLimits

0x93f6,	// (0x000124d1) level_4_signal_ParamLimits

0x9403,	// (0x000124de) level_5_signal_ParamLimits

0x9410,	// (0x000124eb) level_6_signal_ParamLimits

0x941d,	// (0x000124f8) level_7_signal_ParamLimits

0x93cf,	// (0x000124aa) level_1_battery_ParamLimits

0x93dc,	// (0x000124b7) level_2_battery_ParamLimits

0x93e9,	// (0x000124c4) level_3_battery_ParamLimits

0x93f6,	// (0x000124d1) level_4_battery_ParamLimits

0x9403,	// (0x000124de) level_5_battery_ParamLimits

0x9410,	// (0x000124eb) level_6_battery_ParamLimits

0x941d,	// (0x000124f8) level_7_battery_ParamLimits

0xb1df,	// (0x000142ba) bg_status_flat_pane_g1

0xb1e7,	// (0x000142c2) bg_status_flat_pane_g2

0xb1ef,	// (0x000142ca) bg_status_flat_pane_g3

0xb1f7,	// (0x000142d2) bg_status_flat_pane_g4

0xb1ff,	// (0x000142da) bg_status_flat_pane_g5

0xb207,	// (0x000142e2) bg_status_flat_pane_g6

0xb20f,	// (0x000142ea) bg_status_flat_pane_g7

0x7e99,	// (0x00010f74) tabs_3_active_pane_t1_ParamLimits

0x7e99,	// (0x00010f74) tabs_3_passive_pane_t1_ParamLimits

0x7eb3,	// (0x00010f8e) tabs_4_active_pane_t1_ParamLimits

0x7eb3,	// (0x00010f8e) tabs_4_1_passive_pane_t1_ParamLimits

0x8f8f,	// (0x0001206a) tabs_2_active_pane_t1_ParamLimits

0x8f8f,	// (0x0001206a) tabs_2_passive_pane_t1_ParamLimits

0x8fa1,	// (0x0001207c) bg_active_tab_pane_cp4_ParamLimits

0x8faf,	// (0x0001208a) tabs_2_long_active_pane_t1_ParamLimits

0x8fc2,	// (0x0001209d) bg_passive_tab_pane_cp4_ParamLimits

0x6c60,	// (0x0000fd3b) list_single_midp_graphic_pane_t1_ParamLimits

0x8fa1,	// (0x0001207c) bg_active_tab_pane_cp5_ParamLimits

0x8fce,	// (0x000120a9) tabs_3_long_active_pane_t1_ParamLimits

0x8fc2,	// (0x0001209d) bg_passive_tab_pane_cp5_ParamLimits

0x6c60,	// (0x0000fd3b) list_single_midp_graphic_pane_t1

0xa493,	// (0x0001356e) bg_status_flat_pane_ParamLimits

0xa556,	// (0x00013631) indicator_pane_cp2_ParamLimits

0xa556,	// (0x00013631) indicator_pane_cp2

0xa67a,	// (0x00013755) navi_pane_srt_ParamLimits

0xa67a,	// (0x00013755) navi_pane_srt

0xa69e,	// (0x00013779) popup_clock_digital_analogue_window_cp1

0x7f7a,	// (0x00011055) indicator_pane_t1

0x9aa7,	// (0x00012b82) copy_highlight_pane

0x9aa7,	// (0x00012b82) cursor_graphics_pane

0x9aa7,	// (0x00012b82) graphic_within_text_pane

0x9aa7,	// (0x00012b82) link_highlight_pane

0xb9e8,	// (0x00014ac3) popup_preview_text_window_t5_ParamLimits

0xb9e8,	// (0x00014ac3) popup_preview_text_window_t5

0x9bd7,	// (0x00012cb2) cursor_digital_pane

0x9bd7,	// (0x00012cb2) cursor_primary_pane

0x9be8,	// (0x00012cc3) cursor_primary_small_pane

0x9bf0,	// (0x00012ccb) cursor_secondary_pane

0x9bf8,	// (0x00012cd3) cursor_title_pane

0x9bd7,	// (0x00012cb2) link_highlight_digital_pane

0x9bdf,	// (0x00012cba) link_highlight_primary_pane

0x9be8,	// (0x00012cc3) link_highlight_primary_small_pane

0x9bf0,	// (0x00012ccb) link_highlight_secondary_pane

0x9bf8,	// (0x00012cd3) link_highlight_title_pane

0x9bd7,	// (0x00012cb2) copy_highlight_digital_pane

0x9bd7,	// (0x00012cb2) copy_highlight_primary_pane

0x9be8,	// (0x00012cc3) copy_highlight_primary_small_pane

0x9bf0,	// (0x00012ccb) copy_highlight_secondary_pane

0x9bf8,	// (0x00012cd3) copy_highlight_title_pane

0x9bf0,	// (0x00012ccb) graphic_text_digital_pane

0xb27d,	// (0x00014358) graphic_text_primary_pane

0xb286,	// (0x00014361) graphic_text_primary_small_pane

0x9be8,	// (0x00012cc3) graphic_text_secondary_pane

0x9bd7,	// (0x00012cb2) graphic_text_title_pane

0x9c00,	// (0x00012cdb) cursor_primary_pane_g1

0xb26f,	// (0x0001434a) cursor_text_primary_t1

0xb257,	// (0x00014332) cursor_primary_small_pane_g1

0xb261,	// (0x0001433c) cursor_text_primary_small_t1

0xb23f,	// (0x0001431a) cursor_primary_small_pane_g1_copy1

0xb249,	// (0x00014324) cursor_text_primary_small_t1_copy1

0xb227,	// (0x00014302) cursor_text_title_t1

0xb235,	// (0x00014310) cursor_title_pane_g1

0x9c00,	// (0x00012cdb) cursor_digital_pane_g1

0x9c0a,	// (0x00012ce5) cursor_text_digital_t1

0xb1c8,	// (0x000142a3) link_highlight_primary_pane_g1

0xb1d0,	// (0x000142ab) link_highlight_primary_pane_t1

0x9c18,	// (0x00012cf3) link_highlight_primary_small_pane_g1

0x9c20,	// (0x00012cfb) link_highlight_primary_small_pane_t1

0x9c18,	// (0x00012cf3) link_highlight_secondary_pane_g1

0x9c2f,	// (0x00012d0a) link_highlight_secondary_pane_t1

0xb13c,	// (0x00014217) link_highlight_title_pane_g1

0xb144,	// (0x0001421f) link_highlight_title_pane_t1

0xb125,	// (0x00014200) link_highlight_digital_pane_g1

0xb12d,	// (0x00014208) link_highlight_digital_pane_t1

0xaffd,	// (0x000140d8) copy_highlight_primary_pane_g1

0xb005,	// (0x000140e0) copy_highlight_primary_pane_t1

0xafd7,	// (0x000140b2) copy_highlight_primary_small_pane_g1

0xafee,	// (0x000140c9) copy_highlight_primary_small_pane_t1

0x9c3e,	// (0x00012d19) copy_highlight_secondary_pane_g1

0x9c46,	// (0x00012d21) copy_highlight_secondary_pane_t1

0xafd7,	// (0x000140b2) copy_highlight_title_pane_g1

0xafdf,	// (0x000140ba) copy_highlight_title_pane_t1

0xaffd,	// (0x000140d8) copy_highlight_digital_pane_g1

0xc383,	// (0x0001545e) copy_highlight_digital_pane_t1

0xc2d7,	// (0x000153b2) graphic_text_primary_pane_g1

0xc367,	// (0x00015442) graphic_text_primary_pane_t1

0xc375,	// (0x00015450) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x00018ab5) graphic_text_primary_pane_t

0xc343,	// (0x0001541e) graphic_text_primary_small_pane_g1

0xc34b,	// (0x00015426) graphic_text_primary_small_pane_t1

0xc359,	// (0x00015434) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x00018ab0) graphic_text_primary_small_pane_t

0xc31f,	// (0x000153fa) graphic_text_secondary_pane_g1

0xc327,	// (0x00015402) graphic_text_secondary_pane_t1

0xc335,	// (0x00015410) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x00018aab) graphic_text_secondary_pane_t

0xc2fb,	// (0x000153d6) graphic_text_title_pane_g1

0xc303,	// (0x000153de) graphic_text_title_pane_t1

0xc311,	// (0x000153ec) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x00018aa6) graphic_text_title_pane_t

0xc2d7,	// (0x000153b2) graphic_text_digital_pane_g1

0xc2df,	// (0x000153ba) graphic_text_digital_pane_t1

0xc2ed,	// (0x000153c8) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x00018aa1) graphic_text_digital_pane_t

0x7e83,	// (0x00010f5e) navi_icon_pane_srt_ParamLimits

0x7e83,	// (0x00010f5e) navi_icon_pane_srt

0x7da3,	// (0x00010e7e) navi_midp_pane_srt

0x7da3,	// (0x00010e7e) navi_navi_pane_srt

0x7e83,	// (0x00010f5e) navi_text_pane_srt_ParamLimits

0x7e83,	// (0x00010f5e) navi_text_pane_srt

0xc2a2,	// (0x0001537d) navi_navi_icon_text_pane_srt

0xc2aa,	// (0x00015385) navi_navi_pane_srt_g1_ParamLimits

0xc2aa,	// (0x00015385) navi_navi_pane_srt_g1

0xc2bc,	// (0x00015397) navi_navi_pane_srt_g2_ParamLimits

0xc2bc,	// (0x00015397) navi_navi_pane_srt_g2

0x0001,

0xf9c1,	// (0x00018a9c) navi_navi_pane_srt_g_ParamLimits

0xf9c1,	// (0x00018a9c) navi_navi_pane_srt_g

0xc2ce,	// (0x000153a9) navi_navi_tabs_pane_srt

0xc2a2,	// (0x0001537d) navi_navi_text_pane_srt

0xc2a2,	// (0x0001537d) navi_navi_volume_pane_srt

0xc293,	// (0x0001536e) navi_navi_text_pane_srt_t1

0x6fe0,	// (0x000100bb) navi_navi_volume_pane_srt_g1

0x6fe8,	// (0x000100c3) volume_small_pane_srt_ParamLimits

0x6fe8,	// (0x000100c3) volume_small_pane_srt

0x6978,	// (0x0000fa53) volume_small_pane_srt_g1_ParamLimits

0x6978,	// (0x0000fa53) volume_small_pane_srt_g1

0x6988,	// (0x0000fa63) volume_small_pane_srt_g2_ParamLimits

0x6988,	// (0x0000fa63) volume_small_pane_srt_g2

0x6999,	// (0x0000fa74) volume_small_pane_srt_g3_ParamLimits

0x6999,	// (0x0000fa74) volume_small_pane_srt_g3

0x69aa,	// (0x0000fa85) volume_small_pane_srt_g4_ParamLimits

0x69aa,	// (0x0000fa85) volume_small_pane_srt_g4

0x69bb,	// (0x0000fa96) volume_small_pane_srt_g5_ParamLimits

0x69bb,	// (0x0000fa96) volume_small_pane_srt_g5

0x69cc,	// (0x0000faa7) volume_small_pane_srt_g6_ParamLimits

0x69cc,	// (0x0000faa7) volume_small_pane_srt_g6

0x69dd,	// (0x0000fab8) volume_small_pane_srt_g7_ParamLimits

0x69dd,	// (0x0000fab8) volume_small_pane_srt_g7

0x69ee,	// (0x0000fac9) volume_small_pane_srt_g8_ParamLimits

0x69ee,	// (0x0000fac9) volume_small_pane_srt_g8

0x69ff,	// (0x0000fada) volume_small_pane_srt_g9_ParamLimits

0x69ff,	// (0x0000fada) volume_small_pane_srt_g9

0x6a10,	// (0x0000faeb) volume_small_pane_srt_g10_ParamLimits

0x6a10,	// (0x0000faeb) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001884b) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001884b) volume_small_pane_srt_g

0x826b,	// (0x00011346) query_popup_data_pane_cp2

0xc279,	// (0x00015354) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xc279,	// (0x00015354) navi_navi_icon_text_pane_srt_t1

0xb27d,	// (0x00014358) navi_tabs_2_long_pane_srt

0xb27d,	// (0x00014358) navi_tabs_2_pane_srt

0xb27d,	// (0x00014358) navi_tabs_3_long_pane_srt

0xb27d,	// (0x00014358) navi_tabs_3_pane_srt

0xb27d,	// (0x00014358) navi_tabs_4_pane_srt

0x6fc0,	// (0x0001009b) tabs_2_active_pane_srt_ParamLimits

0x6fc0,	// (0x0001009b) tabs_2_active_pane_srt

0x6fd0,	// (0x000100ab) tabs_2_passive_pane_srt_ParamLimits

0x6fd0,	// (0x000100ab) tabs_2_passive_pane_srt

0x9e2d,	// (0x00012f08) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9e2d,	// (0x00012f08) bg_passive_tab_pane_cp1_srt

0xc245,	// (0x00015320) bg_passive_tab_pane_g1_cp1_srt

0x96ef,	// (0x000127ca) bg_passive_tab_pane_g2_cp1_srt

0xc24e,	// (0x00015329) bg_passive_tab_pane_g3_cp1_srt

0x7e83,	// (0x00010f5e) bg_active_tab_pane_cp1_srt_ParamLimits

0x7e83,	// (0x00010f5e) bg_active_tab_pane_cp1_srt

0xc257,	// (0x00015332) tabs_2_active_pane_srt_g1

0xc25f,	// (0x0001533a) tabs_2_active_pane_srt_t1_ParamLimits

0xc25f,	// (0x0001533a) tabs_2_active_pane_srt_t1

0xc245,	// (0x00015320) bg_active_tab_pane_g1_cp1_srt

0x96ef,	// (0x000127ca) bg_active_tab_pane_g2_cp1_srt

0xc24e,	// (0x00015329) bg_active_tab_pane_g3_cp1_srt

0x6f8d,	// (0x00010068) tabs_3_active_pane_srt_ParamLimits

0x6f8d,	// (0x00010068) tabs_3_active_pane_srt

0x6f9e,	// (0x00010079) tabs_3_passive_pane_cp_srt_ParamLimits

0x6f9e,	// (0x00010079) tabs_3_passive_pane_cp_srt

0x6faf,	// (0x0001008a) tabs_3_passive_pane_srt_ParamLimits

0x6faf,	// (0x0001008a) tabs_3_passive_pane_srt

0x9e2d,	// (0x00012f08) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9e2d,	// (0x00012f08) bg_passive_tab_pane_cp2_srt

0x9c55,	// (0x00012d30) bg_passive_tab_pane_g1_cp2_srt

0x96ef,	// (0x000127ca) bg_passive_tab_pane_g2_cp2_srt

0x9c5e,	// (0x00012d39) bg_passive_tab_pane_g3_cp2_srt

0x7e83,	// (0x00010f5e) bg_active_tab_pane_cp2_srt_ParamLimits

0x7e83,	// (0x00010f5e) bg_active_tab_pane_cp2_srt

0xc22b,	// (0x00015306) tabs_3_active_pane_srt_g1

0xc233,	// (0x0001530e) tabs_3_active_pane_srt_t1_ParamLimits

0xc233,	// (0x0001530e) tabs_3_active_pane_srt_t1

0x9c55,	// (0x00012d30) bg_active_tab_pane_g1_cp2_srt

0x96ef,	// (0x000127ca) bg_active_tab_pane_g2_cp2_srt

0x9c5e,	// (0x00012d39) bg_active_tab_pane_g3_cp2_srt

0x6f45,	// (0x00010020) tabs_4_active_pane_srt_ParamLimits

0x6f45,	// (0x00010020) tabs_4_active_pane_srt

0x6f57,	// (0x00010032) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6f57,	// (0x00010032) tabs_4_passive_pane_cp2_srt

0x9db3,	// (0x00012e8e) aid_size_cell_toolbar

0x8fc2,	// (0x0001209d) main_idle_act_pane_ParamLimits

0x9fcc,	// (0x000130a7) popup_large_graphic_colour_window_ParamLimits

0xa32b,	// (0x00013406) popup_toolbar_window_ParamLimits

0xa32b,	// (0x00013406) popup_toolbar_window

0xbfcd,	// (0x000150a8) list_single_graphic_2heading_pane_ParamLimits

0xbfcd,	// (0x000150a8) list_single_graphic_2heading_pane

0x917e,	// (0x00012259) aid_size_cell_apps_grid_lsc_pane

0x9190,	// (0x0001226b) aid_size_cell_apps_grid_prt_pane

0x9e2d,	// (0x00012f08) bg_wml_button_pane_cp1_ParamLimits

0x9e2d,	// (0x00012f08) bg_wml_button_pane_cp1

0xac2e,	// (0x00013d09) form_midp_field_text_pane_t1_ParamLimits

0xa9f9,	// (0x00013ad4) input_focus_pane_cp050_ParamLimits

0xac6d,	// (0x00013d48) list_midp_form_text_pane_ParamLimits

0xac0b,	// (0x00013ce6) input_focus_pane_cp051_ParamLimits

0xac1f,	// (0x00013cfa) list_midp_choice_pane_ParamLimits

0xaa8a,	// (0x00013b65) list_single_2graphic_pane_cp3_ParamLimits

0xaa8a,	// (0x00013b65) list_single_2graphic_pane_cp3

0xaab6,	// (0x00013b91) list_single_midp_graphic_pane_ParamLimits

0xaab6,	// (0x00013b91) list_single_midp_graphic_pane

0x6b65,	// (0x0000fc40) list_single_graphic_2heading_pane_g1_ParamLimits

0x6b65,	// (0x0000fc40) list_single_graphic_2heading_pane_g1

0x6b71,	// (0x0000fc4c) list_single_graphic_2heading_pane_g4_ParamLimits

0x6b71,	// (0x0000fc4c) list_single_graphic_2heading_pane_g4

0x6b7d,	// (0x0000fc58) list_single_graphic_2heading_pane_g5_ParamLimits

0x6b7d,	// (0x0000fc58) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001889e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001889e) list_single_graphic_2heading_pane_g

0x6b89,	// (0x0000fc64) list_single_graphic_2heading_pane_t1_ParamLimits

0x6b89,	// (0x0000fc64) list_single_graphic_2heading_pane_t1

0x6b9d,	// (0x0000fc78) list_single_graphic_2heading_pane_t2_ParamLimits

0x6b9d,	// (0x0000fc78) list_single_graphic_2heading_pane_t2

0x6bb9,	// (0x0000fc94) list_single_graphic_2heading_pane_t3_ParamLimits

0x6bb9,	// (0x0000fc94) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x000188a5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x000188a5) list_single_graphic_2heading_pane_t

0xa7fb,	// (0x000138d6) bg_popup_sub_pane_cp2

0xa825,	// (0x00013900) grid_toobar_pane

0x6bd1,	// (0x0000fcac) cell_toolbar_pane_ParamLimits

0x6bd1,	// (0x0000fcac) cell_toolbar_pane

0xa883,	// (0x0001395e) cell_toolbar_pane_g1_ParamLimits

0xa883,	// (0x0001395e) cell_toolbar_pane_g1

0xa897,	// (0x00013972) cell_toolbar_pane_g2_ParamLimits

0xa897,	// (0x00013972) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x000188b3) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x000188b3) cell_toolbar_pane_g

0xa8b9,	// (0x00013994) grid_highlight_pane_cp2_ParamLimits

0xa8b9,	// (0x00013994) grid_highlight_pane_cp2

0xa8d3,	// (0x000139ae) toolbar_button_pane

0xa8df,	// (0x000139ba) toolbar_button_pane_g1

0xa8e7,	// (0x000139c2) toolbar_button_pane_g2

0xa8ef,	// (0x000139ca) toolbar_button_pane_g3

0xa8f7,	// (0x000139d2) toolbar_button_pane_g4

0xa8ff,	// (0x000139da) toolbar_button_pane_g5

0xa907,	// (0x000139e2) toolbar_button_pane_g6

0xa90f,	// (0x000139ea) toolbar_button_pane_g7

0xa917,	// (0x000139f2) toolbar_button_pane_g8

0xa91f,	// (0x000139fa) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x000188b8) toolbar_button_pane_g

0x6c09,	// (0x0000fce4) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6c09,	// (0x0000fce4) list_single_2graphic_pane_g1_cp3

0x6c15,	// (0x0000fcf0) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6c15,	// (0x0000fcf0) list_single_2graphic_pane_g2_cp3

0x6c26,	// (0x0000fd01) list_single_2graphic_pane_g3_cp3

0x6c2e,	// (0x0000fd09) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6c2e,	// (0x0000fd09) list_single_2graphic_pane_g4_cp3

0x6c3a,	// (0x0000fd15) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6c3a,	// (0x0000fd15) list_single_2graphic_pane_t1_cp3

0x6c54,	// (0x0000fd2f) list_single_midp_graphic_pane_g2_ParamLimits

0x6c54,	// (0x0000fd2f) list_single_midp_graphic_pane_g2

0x9dbb,	// (0x00012e96) aid_zoom_text_primary

0x9dc3,	// (0x00012e9e) aid_zoom_text_secondary

0x9d12,	// (0x00012ded) status_small_pane_g7_ParamLimits

0x9d12,	// (0x00012ded) status_small_pane_g7

0x9d35,	// (0x00012e10) status_small_pane_t1_ParamLimits

0x7dba,	// (0x00010e95) title_pane_g2

0x0003,

0xf56a,	// (0x00018645) title_pane_g

0x830c,	// (0x000113e7) aid_size_cell_colour_1_pane_ParamLimits

0x830c,	// (0x000113e7) aid_size_cell_colour_1_pane

0x8320,	// (0x000113fb) aid_size_cell_colour_2_pane_ParamLimits

0x8320,	// (0x000113fb) aid_size_cell_colour_2_pane

0x8334,	// (0x0001140f) aid_size_cell_colour_3_pane_ParamLimits

0x8334,	// (0x0001140f) aid_size_cell_colour_3_pane

0x8348,	// (0x00011423) aid_size_cell_colour_4_pane_ParamLimits

0x8348,	// (0x00011423) aid_size_cell_colour_4_pane

0x65d4,	// (0x0000f6af) title_pane_stacon_g1_ParamLimits

0x65d4,	// (0x0000f6af) title_pane_stacon_g1

0xb05c,	// (0x00014137) popup_note_wait_window_g3_ParamLimits

0xb05c,	// (0x00014137) popup_note_wait_window_g3

0xb0d2,	// (0x000141ad) popup_note_wait_window_t5_ParamLimits

0xb0d2,	// (0x000141ad) popup_note_wait_window_t5

0x7da3,	// (0x00010e7e) main_feb_china_hwr_fs_writing_pane

0x9eb7,	// (0x00012f92) popup_feb_china_hwr_fs_window_ParamLimits

0x9eb7,	// (0x00012f92) popup_feb_china_hwr_fs_window

0x6c76,	// (0x0000fd51) aid_size_cell_hwr_fs_ParamLimits

0x6c76,	// (0x0000fd51) aid_size_cell_hwr_fs

0xa9f9,	// (0x00013ad4) bg_popup_sub_pane_cp3_ParamLimits

0xa9f9,	// (0x00013ad4) bg_popup_sub_pane_cp3

0x6c8b,	// (0x0000fd66) grid_hwr_fs_pane_ParamLimits

0x6c8b,	// (0x0000fd66) grid_hwr_fs_pane

0x6ca3,	// (0x0000fd7e) linegrid_hwr_fs_pane_ParamLimits

0x6ca3,	// (0x0000fd7e) linegrid_hwr_fs_pane

0x6cb3,	// (0x0000fd8e) cell_hwr_fs_pane_ParamLimits

0x6cb3,	// (0x0000fd8e) cell_hwr_fs_pane

0xaa05,	// (0x00013ae0) linegrid_hwr_fs_pane_g1_ParamLimits

0xaa05,	// (0x00013ae0) linegrid_hwr_fs_pane_g1

0xaa11,	// (0x00013aec) linegrid_hwr_fs_pane_g2_ParamLimits

0xaa11,	// (0x00013aec) linegrid_hwr_fs_pane_g2

0xaa23,	// (0x00013afe) linegrid_hwr_fs_pane_g3_ParamLimits

0xaa23,	// (0x00013afe) linegrid_hwr_fs_pane_g3

0x6cd5,	// (0x0000fdb0) linegrid_hwr_fs_pane_g4_ParamLimits

0x6cd5,	// (0x0000fdb0) linegrid_hwr_fs_pane_g4

0x6cef,	// (0x0000fdca) linegrid_hwr_fs_pane_g5_ParamLimits

0x6cef,	// (0x0000fdca) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x000188e3) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x000188e3) linegrid_hwr_fs_pane_g

0xaa2f,	// (0x00013b0a) cell_hwr_fs_pane_g1_ParamLimits

0xaa2f,	// (0x00013b0a) cell_hwr_fs_pane_g1

0xa734,	// (0x0001380f) cell_hwr_fs_pane_g2_ParamLimits

0xa734,	// (0x0001380f) cell_hwr_fs_pane_g2

0xaa45,	// (0x00013b20) cell_hwr_fs_pane_g3_ParamLimits

0xaa45,	// (0x00013b20) cell_hwr_fs_pane_g3

0xaa52,	// (0x00013b2d) cell_hwr_fs_pane_g4_ParamLimits

0xaa52,	// (0x00013b2d) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x000188ee) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x000188ee) cell_hwr_fs_pane_g

0x6d05,	// (0x0000fde0) cell_hwr_fs_pane_t1

0x7da3,	// (0x00010e7e) grid_highlight_pane_cp6

0x7da3,	// (0x00010e7e) main_idle_act2_pane

0x8f36,	// (0x00012011) aid_inside_area_popup_secondary

0xb703,	// (0x000147de) aid_inside_area_window_primary_ParamLimits

0xb703,	// (0x000147de) aid_inside_area_window_primary

0xc392,	// (0x0001546d) ai2_news_ticker_pane

0xc39a,	// (0x00015475) aid_size_cell_ai1_link_ParamLimits

0xc39a,	// (0x00015475) aid_size_cell_ai1_link

0xc3b4,	// (0x0001548f) popup_ai2_data_window_ParamLimits

0xc3b4,	// (0x0001548f) popup_ai2_data_window

0xc3c8,	// (0x000154a3) popup_ai2_link_window_ParamLimits

0xc3c8,	// (0x000154a3) popup_ai2_link_window

0xa9f9,	// (0x00013ad4) bg_popup_sub_pane_cp4_ParamLimits

0xa9f9,	// (0x00013ad4) bg_popup_sub_pane_cp4

0xc3dc,	// (0x000154b7) grid_ai2_link_pane_ParamLimits

0xc3dc,	// (0x000154b7) grid_ai2_link_pane

0xc3f3,	// (0x000154ce) popup_ai2_link_window_g1_ParamLimits

0xc3f3,	// (0x000154ce) popup_ai2_link_window_g1

0xc3ff,	// (0x000154da) popup_ai2_link_window_g2_ParamLimits

0xc3ff,	// (0x000154da) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x00018aba) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x00018aba) popup_ai2_link_window_g

0xc40e,	// (0x000154e9) ai2_mp_button_pane

0xc416,	// (0x000154f1) ai2_mp_volume_pane

0xac0b,	// (0x00013ce6) bg_popup_sub_pane_cp5_ParamLimits

0xac0b,	// (0x00013ce6) bg_popup_sub_pane_cp5

0xc41e,	// (0x000154f9) heading_ai2_gene_pane_ParamLimits

0xc41e,	// (0x000154f9) heading_ai2_gene_pane

0xc42a,	// (0x00015505) list_ai2_gene_pane_ParamLimits

0xc42a,	// (0x00015505) list_ai2_gene_pane

0xc472,	// (0x0001554d) cell_ai2_link_pane_ParamLimits

0xc472,	// (0x0001554d) cell_ai2_link_pane

0xc488,	// (0x00015563) cell_ai2_link_pane_g1

0x7da3,	// (0x00010e7e) grid_highlight_pane_cp7

0x6ffd,	// (0x000100d8) ai2_mp_volume_pane_g1

0xc559,	// (0x00015634) ai2_mp_volume_pane_g2

0xc4ce,	// (0x000155a9) list_ai2_gene_pane_t1

0xc561,	// (0x0001563c) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x00018ad3) ai2_mp_volume_pane_g

0x7005,	// (0x000100e0) volume_small_pane_cp3

0xc569,	// (0x00015644) aid_size_cell_ai2_button

0xc571,	// (0x0001564c) grid_ai2_button_pane

0xc57a,	// (0x00015655) cell_ai2_button_pane_ParamLimits

0xc57a,	// (0x00015655) cell_ai2_button_pane

0x7d99,	// (0x00010e74) cell_ai2_button_pane_g1

0x7da3,	// (0x00010e7e) grid_highlight_pane_cp8

0xc519,	// (0x000155f4) ai2_gene_pane_t1_ParamLimits

0xc519,	// (0x000155f4) ai2_gene_pane_t1

0x9da9,	// (0x00012e84) aid_height_parent_landscape

0xbdba,	// (0x00014e95) aid_height_set_list

0xbdcb,	// (0x00014ea6) aid_size_parent

0xc1b5,	// (0x00015290) aid_size_cell_graphic_pane_ParamLimits

0xc43a,	// (0x00015515) popup_ai2_data_window_g1_ParamLimits

0xc43a,	// (0x00015515) popup_ai2_data_window_g1

0xc446,	// (0x00015521) ai2_news_ticker_pane_g1

0xc44e,	// (0x00015529) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x00018abf) ai2_news_ticker_pane_g

0xc456,	// (0x00015531) ai2_news_ticker_pane_t1

0xc464,	// (0x0001553f) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x00018ac4) ai2_news_ticker_pane_t

0xc491,	// (0x0001556c) heading_ai2_gene_pane_g1

0xc499,	// (0x00015574) heading_ai2_gene_pane_t1_ParamLimits

0xc499,	// (0x00015574) heading_ai2_gene_pane_t1

0xc4ae,	// (0x00015589) list_highlight_pane_cp6

0xc4b6,	// (0x00015591) ai2_gene_pane_ParamLimits

0xc4b6,	// (0x00015591) ai2_gene_pane

0xc4dc,	// (0x000155b7) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x00018ac9) list_ai2_gene_pane_t

0xc4ea,	// (0x000155c5) list_highlight_pane_cp8_ParamLimits

0xc4ea,	// (0x000155c5) list_highlight_pane_cp8

0xc4fb,	// (0x000155d6) ai2_gene_pane_g1_ParamLimits

0xc4fb,	// (0x000155d6) ai2_gene_pane_g1

0xc50d,	// (0x000155e8) ai2_gene_pane_g2_ParamLimits

0xc50d,	// (0x000155e8) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x00018ace) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x00018ace) ai2_gene_pane_g

0x8686,	// (0x00011761) scroll_pane_cp12

0x6b24,	// (0x0000fbff) control_pane_t3_ParamLimits

0x6b24,	// (0x0000fbff) control_pane_t3

0x9d26,	// (0x00012e01) status_small_pane_g8_ParamLimits

0x9d26,	// (0x00012e01) status_small_pane_g8

0x9f99,	// (0x00013074) popup_find_window_ParamLimits

0xa1ac,	// (0x00013287) popup_note_image_window_ParamLimits

0xa861,	// (0x0001393c) list_double2_graphic_pane_vc_g1_ParamLimits

0xa861,	// (0x0001393c) list_double2_graphic_pane_vc_g1

0x8758,	// (0x00011833) list_double2_graphic_pane_vc_g2_ParamLimits

0x8758,	// (0x00011833) list_double2_graphic_pane_vc_g2

0x8764,	// (0x0001183f) list_double2_graphic_pane_vc_g3_ParamLimits

0x8764,	// (0x0001183f) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x000188ac) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x000188ac) list_double2_graphic_pane_vc_g

0xa86d,	// (0x00013948) list_double2_graphic_pane_vc_t1_ParamLimits

0xa86d,	// (0x00013948) list_double2_graphic_pane_vc_t1

0x8758,	// (0x00011833) list_single_heading_pane_vc_g1_ParamLimits

0x8758,	// (0x00011833) list_single_heading_pane_vc_g1

0x8764,	// (0x0001183f) list_single_heading_pane_vc_g2_ParamLimits

0x8764,	// (0x0001183f) list_single_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x000188cd) list_single_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x000188cd) list_single_heading_pane_vc_g

0xa927,	// (0x00013a02) list_single_heading_pane_vc_t1_ParamLimits

0xa927,	// (0x00013a02) list_single_heading_pane_vc_t1

0xa93d,	// (0x00013a18) list_single_heading_pane_vc_t2_ParamLimits

0xa93d,	// (0x00013a18) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x000188d2) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x000188d2) list_single_heading_pane_vc_t

0xa951,	// (0x00013a2c) list_setting_number_pane_vc_g1_ParamLimits

0xa951,	// (0x00013a2c) list_setting_number_pane_vc_g1

0xa95d,	// (0x00013a38) list_setting_number_pane_vc_g2_ParamLimits

0xa95d,	// (0x00013a38) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x000188d7) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x000188d7) list_setting_number_pane_vc_g

0xa969,	// (0x00013a44) list_setting_number_pane_vc_t1_ParamLimits

0xa969,	// (0x00013a44) list_setting_number_pane_vc_t1

0xa97d,	// (0x00013a58) list_setting_number_pane_vc_t2_ParamLimits

0xa97d,	// (0x00013a58) list_setting_number_pane_vc_t2

0xa999,	// (0x00013a74) list_setting_number_pane_vc_t3_ParamLimits

0xa999,	// (0x00013a74) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x000188dc) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x000188dc) list_setting_number_pane_vc_t

0xa9c1,	// (0x00013a9c) set_value_pane_vc_ParamLimits

0xa9c1,	// (0x00013a9c) set_value_pane_vc

0xbfcd,	// (0x000150a8) list_double2_graphic_pane_vc_ParamLimits

0xbfcd,	// (0x000150a8) list_double2_graphic_pane_vc

0xbfcd,	// (0x000150a8) list_double2_large_graphic_pane_vc_ParamLimits

0xbfcd,	// (0x000150a8) list_double2_large_graphic_pane_vc

0xbfcd,	// (0x000150a8) list_double2_pane_vc_ParamLimits

0xbfcd,	// (0x000150a8) list_double2_pane_vc

0xbfcd,	// (0x000150a8) list_double_graphic_heading_pane_vc_ParamLimits

0xbfcd,	// (0x000150a8) list_double_graphic_heading_pane_vc

0xbfcd,	// (0x000150a8) list_double_graphic_pane_vc_ParamLimits

0xbfcd,	// (0x000150a8) list_double_graphic_pane_vc

0xbfcd,	// (0x000150a8) list_double_heading_pane_vc_ParamLimits

0xbfcd,	// (0x000150a8) list_double_heading_pane_vc

0xbfcd,	// (0x000150a8) list_double_large_graphic_pane_vc_ParamLimits

0xbfcd,	// (0x000150a8) list_double_large_graphic_pane_vc

0xbfcd,	// (0x000150a8) list_double_number_pane_vc_ParamLimits

0xbfcd,	// (0x000150a8) list_double_number_pane_vc

0xbfcd,	// (0x000150a8) list_double_pane_vc_ParamLimits

0xbfcd,	// (0x000150a8) list_double_pane_vc

0xbfcd,	// (0x000150a8) list_double_time_pane_vc_ParamLimits

0xbfcd,	// (0x000150a8) list_double_time_pane_vc

0xbfcd,	// (0x000150a8) list_setting_number_pane_vc_ParamLimits

0xbfcd,	// (0x000150a8) list_setting_number_pane_vc

0xbfcd,	// (0x000150a8) list_setting_pane_vc_ParamLimits

0xbfcd,	// (0x000150a8) list_setting_pane_vc

0xbfcd,	// (0x000150a8) list_single_graphic_heading_pane_vc_ParamLimits

0xbfcd,	// (0x000150a8) list_single_graphic_heading_pane_vc

0xbfcd,	// (0x000150a8) list_single_heading_pane_vc_ParamLimits

0xbfcd,	// (0x000150a8) list_single_heading_pane_vc

0xbfe0,	// (0x000150bb) list_single_number_heading_pane_vc_ParamLimits

0xbfe0,	// (0x000150bb) list_single_number_heading_pane_vc

0xa861,	// (0x0001393c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xa861,	// (0x0001393c) list_double_graphic_heading_pane_vc_g1

0x8758,	// (0x00011833) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x8758,	// (0x00011833) list_double_graphic_heading_pane_vc_g2

0x8764,	// (0x0001183f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x8764,	// (0x0001183f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7d1,	// (0x000188ac) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x000188ac) list_double_graphic_heading_pane_vc_g

0xc5ae,	// (0x00015689) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc5ae,	// (0x00015689) list_double_graphic_heading_pane_vc_t1

0xa927,	// (0x00013a02) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xa927,	// (0x00013a02) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x00018ada) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x00018ada) list_double_graphic_heading_pane_vc_t

0xa951,	// (0x00013a2c) list_setting_pane_vc_g1_ParamLimits

0xa951,	// (0x00013a2c) list_setting_pane_vc_g1

0xa95d,	// (0x00013a38) list_setting_pane_vc_g2_ParamLimits

0xa95d,	// (0x00013a38) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x000188d7) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x000188d7) list_setting_pane_vc_g

0xc7a6,	// (0x00015881) list_setting_pane_vc_t1_ParamLimits

0xc7a6,	// (0x00015881) list_setting_pane_vc_t1

0xc7ba,	// (0x00015895) list_setting_pane_vc_t2_ParamLimits

0xc7ba,	// (0x00015895) list_setting_pane_vc_t2

0x0001,

0xfa42,	// (0x00018b1d) list_setting_pane_vc_t_ParamLimits

0xfa42,	// (0x00018b1d) list_setting_pane_vc_t

0xa9c1,	// (0x00013a9c) set_value_pane_cp_vc_ParamLimits

0xa9c1,	// (0x00013a9c) set_value_pane_cp_vc

0x8758,	// (0x00011833) list_single_number_heading_pane_vc_g1_ParamLimits

0x8758,	// (0x00011833) list_single_number_heading_pane_vc_g1

0x8764,	// (0x0001183f) list_single_number_heading_pane_vc_g2_ParamLimits

0x8764,	// (0x0001183f) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x000188cd) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x000188cd) list_single_number_heading_pane_vc_g

0xa927,	// (0x00013a02) list_single_number_heading_pane_vc_t1_ParamLimits

0xa927,	// (0x00013a02) list_single_number_heading_pane_vc_t1

0xc7dc,	// (0x000158b7) list_single_number_heading_pane_vc_t2_ParamLimits

0xc7dc,	// (0x000158b7) list_single_number_heading_pane_vc_t2

0xc7f0,	// (0x000158cb) list_single_number_heading_pane_vc_t3_ParamLimits

0xc7f0,	// (0x000158cb) list_single_number_heading_pane_vc_t3

0x0002,

0xfa47,	// (0x00018b22) list_single_number_heading_pane_vc_t_ParamLimits

0xfa47,	// (0x00018b22) list_single_number_heading_pane_vc_t

0xa861,	// (0x0001393c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xa861,	// (0x0001393c) list_single_graphic_heading_pane_vc_g1

0x8758,	// (0x00011833) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8758,	// (0x00011833) list_single_graphic_heading_pane_vc_g4

0x8764,	// (0x0001183f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8764,	// (0x0001183f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x000188ac) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x000188ac) list_single_graphic_heading_pane_vc_g

0xa927,	// (0x00013a02) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xa927,	// (0x00013a02) list_single_graphic_heading_pane_vc_t1

0xc802,	// (0x000158dd) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc802,	// (0x000158dd) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4e,	// (0x00018b29) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x00018b29) list_single_graphic_heading_pane_vc_t

0x8758,	// (0x00011833) list_double2_pane_vc_g1_ParamLimits

0x8758,	// (0x00011833) list_double2_pane_vc_g1

0x8764,	// (0x0001183f) list_double2_pane_vc_g2_ParamLimits

0x8764,	// (0x0001183f) list_double2_pane_vc_g2

0x0001,

0xf7f2,	// (0x000188cd) list_double2_pane_vc_g_ParamLimits

0xf7f2,	// (0x000188cd) list_double2_pane_vc_g

0xc816,	// (0x000158f1) list_double2_pane_vc_t1_ParamLimits

0xc816,	// (0x000158f1) list_double2_pane_vc_t1

0xc82c,	// (0x00015907) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc82c,	// (0x00015907) list_double2_large_graphic_pane_vc_g1

0x8758,	// (0x00011833) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8758,	// (0x00011833) list_double2_large_graphic_pane_vc_g2

0x8764,	// (0x0001183f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8764,	// (0x0001183f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa53,	// (0x00018b2e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x00018b2e) list_double2_large_graphic_pane_vc_g

0xc838,	// (0x00015913) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc838,	// (0x00015913) list_double2_large_graphic_pane_vc_t1

0xc84e,	// (0x00015929) list_double_time_pane_vc_g1_ParamLimits

0xc84e,	// (0x00015929) list_double_time_pane_vc_g1

0xc85a,	// (0x00015935) list_double_time_pane_vc_g2_ParamLimits

0xc85a,	// (0x00015935) list_double_time_pane_vc_g2

0x0001,

0xfa5a,	// (0x00018b35) list_double_time_pane_vc_g_ParamLimits

0xfa5a,	// (0x00018b35) list_double_time_pane_vc_g

0xc866,	// (0x00015941) list_double_time_pane_vc_t1_ParamLimits

0xc866,	// (0x00015941) list_double_time_pane_vc_t1

0xc87f,	// (0x0001595a) list_double_time_pane_vc_t2_ParamLimits

0xc87f,	// (0x0001595a) list_double_time_pane_vc_t2

0xc89f,	// (0x0001597a) list_double_time_pane_vc_t3_ParamLimits

0xc89f,	// (0x0001597a) list_double_time_pane_vc_t3

0xc8b7,	// (0x00015992) list_double_time_pane_vc_t4_ParamLimits

0xc8b7,	// (0x00015992) list_double_time_pane_vc_t4

0x0003,

0xfa5f,	// (0x00018b3a) list_double_time_pane_vc_t_ParamLimits

0xfa5f,	// (0x00018b3a) list_double_time_pane_vc_t

0x8758,	// (0x00011833) list_double_pane_vc_g1_ParamLimits

0x8758,	// (0x00011833) list_double_pane_vc_g1

0x8764,	// (0x0001183f) list_double_pane_vc_g2_ParamLimits

0x8764,	// (0x0001183f) list_double_pane_vc_g2

0x0001,

0xf7f2,	// (0x000188cd) list_double_pane_vc_g_ParamLimits

0xf7f2,	// (0x000188cd) list_double_pane_vc_g

0xc8cb,	// (0x000159a6) list_double_pane_vc_t1_ParamLimits

0xc8cb,	// (0x000159a6) list_double_pane_vc_t1

0xc8dd,	// (0x000159b8) list_double_pane_vc_t2_ParamLimits

0xc8dd,	// (0x000159b8) list_double_pane_vc_t2

0x0001,

0xfa68,	// (0x00018b43) list_double_pane_vc_t_ParamLimits

0xfa68,	// (0x00018b43) list_double_pane_vc_t

0x8758,	// (0x00011833) list_double_number_pane_vc_g1_ParamLimits

0x8758,	// (0x00011833) list_double_number_pane_vc_g1

0x8764,	// (0x0001183f) list_double_number_pane_vc_g2_ParamLimits

0x8764,	// (0x0001183f) list_double_number_pane_vc_g2

0x0001,

0xf7f2,	// (0x000188cd) list_double_number_pane_vc_g_ParamLimits

0xf7f2,	// (0x000188cd) list_double_number_pane_vc_g

0xc8f5,	// (0x000159d0) list_double_number_pane_vc_t1_ParamLimits

0xc8f5,	// (0x000159d0) list_double_number_pane_vc_t1

0xc909,	// (0x000159e4) list_double_number_pane_vc_t2_ParamLimits

0xc909,	// (0x000159e4) list_double_number_pane_vc_t2

0xc8dd,	// (0x000159b8) list_double_number_pane_vc_t3_ParamLimits

0xc8dd,	// (0x000159b8) list_double_number_pane_vc_t3

0x0002,

0xfa6d,	// (0x00018b48) list_double_number_pane_vc_t_ParamLimits

0xfa6d,	// (0x00018b48) list_double_number_pane_vc_t

0xc91b,	// (0x000159f6) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc91b,	// (0x000159f6) list_double_large_graphic_pane_vc_g1

0xc927,	// (0x00015a02) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc927,	// (0x00015a02) list_double_large_graphic_pane_vc_g2

0x8764,	// (0x0001183f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x8764,	// (0x0001183f) list_double_large_graphic_pane_vc_g3

0xc936,	// (0x00015a11) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc936,	// (0x00015a11) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa74,	// (0x00018b4f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa74,	// (0x00018b4f) list_double_large_graphic_pane_vc_g

0xc942,	// (0x00015a1d) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc942,	// (0x00015a1d) list_double_large_graphic_pane_vc_t1

0xc954,	// (0x00015a2f) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc954,	// (0x00015a2f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7d,	// (0x00018b58) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7d,	// (0x00018b58) list_double_large_graphic_pane_vc_t

0x8758,	// (0x00011833) list_double_heading_pane_vc_g1_ParamLimits

0x8758,	// (0x00011833) list_double_heading_pane_vc_g1

0x8764,	// (0x0001183f) list_double_heading_pane_vc_g2_ParamLimits

0x8764,	// (0x0001183f) list_double_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x000188cd) list_double_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x000188cd) list_double_heading_pane_vc_g

0xc96d,	// (0x00015a48) list_double_heading_pane_vc_t1_ParamLimits

0xc96d,	// (0x00015a48) list_double_heading_pane_vc_t1

0xa927,	// (0x00013a02) list_double_heading_pane_vc_t2_ParamLimits

0xa927,	// (0x00013a02) list_double_heading_pane_vc_t2

0x0001,

0xfa82,	// (0x00018b5d) list_double_heading_pane_vc_t_ParamLimits

0xfa82,	// (0x00018b5d) list_double_heading_pane_vc_t

0xa861,	// (0x0001393c) list_double_graphic_pane_vc_g1_ParamLimits

0xa861,	// (0x0001393c) list_double_graphic_pane_vc_g1

0xc981,	// (0x00015a5c) list_double_graphic_pane_vc_g2_ParamLimits

0xc981,	// (0x00015a5c) list_double_graphic_pane_vc_g2

0xc990,	// (0x00015a6b) list_double_graphic_pane_vc_g3_ParamLimits

0xc990,	// (0x00015a6b) list_double_graphic_pane_vc_g3

0x0002,

0xfa87,	// (0x00018b62) list_double_graphic_pane_vc_g_ParamLimits

0xfa87,	// (0x00018b62) list_double_graphic_pane_vc_g

0xc99c,	// (0x00015a77) list_double_graphic_pane_vc_t1_ParamLimits

0xc99c,	// (0x00015a77) list_double_graphic_pane_vc_t1

0xc8dd,	// (0x000159b8) list_double_graphic_pane_vc_t2_ParamLimits

0xc8dd,	// (0x000159b8) list_double_graphic_pane_vc_t2

0x0001,

0xfa8e,	// (0x00018b69) list_double_graphic_pane_vc_t_ParamLimits

0xfa8e,	// (0x00018b69) list_double_graphic_pane_vc_t

0x6148,	// (0x0000f223) aid_size_cell_fastswap

0x6150,	// (0x0000f22b) aid_size_cell_touch_ParamLimits

0x6150,	// (0x0000f22b) aid_size_cell_touch

0x63b5,	// (0x0000f490) popup_fast_swap_wide_window_ParamLimits

0x63b5,	// (0x0000f490) popup_fast_swap_wide_window

0x64ab,	// (0x0000f586) touch_pane_ParamLimits

0x64ab,	// (0x0000f586) touch_pane

0x8b84,	// (0x00011c5f) button_value_adjust_pane_cp2

0x8b84,	// (0x00011c5f) button_value_adjust_pane_cp4

0x8ba4,	// (0x00011c7f) form_field_data_pane_cp2

0x8bc3,	// (0x00011c9e) form_field_data_wide_pane_cp2

0x9251,	// (0x0001232c) bg_scroll_pane_ParamLimits

0x6737,	// (0x0000f812) scroll_handle_pane_ParamLimits

0x674b,	// (0x0000f826) scroll_sc2_down_pane_ParamLimits

0x674b,	// (0x0000f826) scroll_sc2_down_pane

0x9282,	// (0x0001235d) scroll_sc2_up_pane_ParamLimits

0x9282,	// (0x0001235d) scroll_sc2_up_pane

0xcde9,	// (0x00015ec4) grid_wheel_folder_pane_g1_ParamLimits

0xcde9,	// (0x00015ec4) grid_wheel_folder_pane_g1

0x6910,	// (0x0000f9eb) clock_nsta_pane_cp2_ParamLimits

0x6910,	// (0x0000f9eb) clock_nsta_pane_cp2

0x9aaf,	// (0x00012b8a) listscroll_midp_pane_ParamLimits

0x9abb,	// (0x00012b96) midp_canvas_pane

0x9da1,	// (0x00012e7c) nsta_clock_indic_pane

0x9dff,	// (0x00012eda) listscroll_form_pane_vc

0x9e1b,	// (0x00012ef6) listscroll_set_pane_vc_ParamLimits

0x9e1b,	// (0x00012ef6) listscroll_set_pane_vc

0xa4af,	// (0x0001358a) clock_nsta_pane

0xa524,	// (0x000135ff) indicator_nsta_pane

0xa7fb,	// (0x000138d6) bg_popup_sub_pane_cp2_ParamLimits

0xa80f,	// (0x000138ea) find_pane_cp2_ParamLimits

0xa80f,	// (0x000138ea) find_pane_cp2

0xa825,	// (0x00013900) grid_toobar_pane_ParamLimits

0xa9cd,	// (0x00013aa8) list_form_gen_pane_vc_ParamLimits

0xa9cd,	// (0x00013aa8) list_form_gen_pane_vc

0xa9e3,	// (0x00013abe) scroll_pane_cp8_vc_ParamLimits

0xa9e3,	// (0x00013abe) scroll_pane_cp8_vc

0xaa5f,	// (0x00013b3a) data_form_wide_pane_vc_ParamLimits

0xaa5f,	// (0x00013b3a) data_form_wide_pane_vc

0xaa6b,	// (0x00013b46) form_field_data_wide_pane_vc_g1

0xaa73,	// (0x00013b4e) form_field_data_wide_pane_vc_t1_ParamLimits

0xaa73,	// (0x00013b4e) form_field_data_wide_pane_vc_t1

0x8c5c,	// (0x00011d37) input_focus_pane_cp6_vc_ParamLimits

0x8c5c,	// (0x00011d37) input_focus_pane_cp6_vc

0xaddc,	// (0x00013eb7) list_midp_pane_ParamLimits

0xade8,	// (0x00013ec3) scroll_pane_cp16_ParamLimits

0xade8,	// (0x00013ec3) scroll_pane_cp16

0xae36,	// (0x00013f11) button_value_adjust_pane_ParamLimits

0xae36,	// (0x00013f11) button_value_adjust_pane

0xbddd,	// (0x00014eb8) button_value_adjust_pane_cp6_ParamLimits

0xbddd,	// (0x00014eb8) button_value_adjust_pane_cp6

0xbeff,	// (0x00014fda) settings_code_pane_cp_ParamLimits

0xbeff,	// (0x00014fda) settings_code_pane_cp

0x7d99,	// (0x00010e74) cell_touch_pane_g1

0x7d99,	// (0x00010e74) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x000187f5) cell_touch_pane_g

0xc58c,	// (0x00015667) cell_touch_pane_cp_ParamLimits

0xc58c,	// (0x00015667) cell_touch_pane_cp

0xc59c,	// (0x00015677) cell_touch_pane_ParamLimits

0xc59c,	// (0x00015677) cell_touch_pane

0x7d99,	// (0x00010e74) scroll_sc2_down_pane_g1

0x7d99,	// (0x00010e74) scroll_sc2_up_pane_g1

0x7da3,	// (0x00010e7e) bg_set_opt_pane_cp4_vc

0xc5c2,	// (0x0001569d) list_set_graphic_pane_vc_g1_ParamLimits

0xc5c2,	// (0x0001569d) list_set_graphic_pane_vc_g1

0xc5ce,	// (0x000156a9) list_set_graphic_pane_vc_g2_ParamLimits

0xc5ce,	// (0x000156a9) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x00018adf) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x00018adf) list_set_graphic_pane_vc_g

0xc5da,	// (0x000156b5) text_primary_small_cp13_vc_ParamLimits

0xc5da,	// (0x000156b5) text_primary_small_cp13_vc

0xc5f2,	// (0x000156cd) list_set_graphic_pane_vc_ParamLimits

0xc5f2,	// (0x000156cd) list_set_graphic_pane_vc

0x7da3,	// (0x00010e7e) input_focus_pane_cp2_vc

0x7d99,	// (0x00010e74) setting_code_pane_vc_g1

0xc606,	// (0x000156e1) setting_code_pane_vc_t1

0xc614,	// (0x000156ef) set_text_pane_vc_t1_ParamLimits

0xc614,	// (0x000156ef) set_text_pane_vc_t1

0x7da3,	// (0x00010e7e) input_focus_pane_cp1_vc

0xc633,	// (0x0001570e) list_set_text_pane_vc

0x7d99,	// (0x00010e74) setting_text_pane_vc_g1

0x7da3,	// (0x00010e7e) bg_set_opt_pane_cp2_vc

0xc63d,	// (0x00015718) setting_slider_graphic_pane_vc_g1

0xc645,	// (0x00015720) setting_slider_graphic_pane_vc_t1

0xc653,	// (0x0001572e) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x00018ae4) setting_slider_graphic_pane_vc_t

0xc661,	// (0x0001573c) slider_set_pane_cp_vc

0xc669,	// (0x00015744) slider_set_pane_vc_g1

0xc672,	// (0x0001574d) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x00018ae9) slider_set_pane_vc_g

0x8d98,	// (0x00011e73) set_opt_bg_pane_g1_copy1

0x8da0,	// (0x00011e7b) set_opt_bg_pane_g2_copy1

0xc69e,	// (0x00015779) set_opt_bg_pane_g3_copy1

0x8db0,	// (0x00011e8b) set_opt_bg_pane_g4_copy1

0x8db8,	// (0x00011e93) set_opt_bg_pane_g5_copy1

0x8dc0,	// (0x00011e9b) set_opt_bg_pane_g6_copy1

0xc6a6,	// (0x00015781) set_opt_bg_pane_g7_copy1

0xc6b0,	// (0x0001578b) set_opt_bg_pane_g8_copy1

0xc6b8,	// (0x00015793) set_opt_bg_pane_g9_copy1

0x7da3,	// (0x00010e7e) bg_set_opt_pane_cp_vc

0xc6c0,	// (0x0001579b) setting_slider_pane_vc_t1

0xc645,	// (0x00015720) setting_slider_pane_vc_t2

0xc653,	// (0x0001572e) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x00018af8) setting_slider_pane_vc_t

0xc661,	// (0x0001573c) slider_set_pane_vc

0x6d13,	// (0x0000fdee) volume_set_pane_vc_g1

0x700e,	// (0x000100e9) volume_set_pane_vc_g2

0x7017,	// (0x000100f2) volume_set_pane_vc_g3

0x7020,	// (0x000100fb) volume_set_pane_vc_g4

0x7029,	// (0x00010104) volume_set_pane_vc_g5

0x7032,	// (0x0001010d) volume_set_pane_vc_g6

0x703b,	// (0x00010116) volume_set_pane_vc_g7

0x7044,	// (0x0001011f) volume_set_pane_vc_g8

0x704d,	// (0x00010128) volume_set_pane_vc_g9

0x7056,	// (0x00010131) volume_set_pane_vc_g10

0x0009,

0xfa24,	// (0x00018aff) volume_set_pane_vc_g

0xc6cf,	// (0x000157aa) volume_set_pane_vc

0xc6d7,	// (0x000157b2) button_value_adjust_pane_cp1_vc

0xc6e1,	// (0x000157bc) list_highlight_pane_cp2_vc

0xc6ea,	// (0x000157c5) list_set_pane_vc_ParamLimits

0xc6ea,	// (0x000157c5) list_set_pane_vc

0xc73c,	// (0x00015817) main_pane_set_vc_t1_ParamLimits

0xc73c,	// (0x00015817) main_pane_set_vc_t1

0xc751,	// (0x0001582c) main_pane_set_vc_t2_ParamLimits

0xc751,	// (0x0001582c) main_pane_set_vc_t2

0xc763,	// (0x0001583e) main_pane_set_vc_t3_ParamLimits

0xc763,	// (0x0001583e) main_pane_set_vc_t3

0xc775,	// (0x00015850) main_pane_set_vc_t4_ParamLimits

0xc775,	// (0x00015850) main_pane_set_vc_t4

0x0003,

0xfa39,	// (0x00018b14) main_pane_set_vc_t_ParamLimits

0xfa39,	// (0x00018b14) main_pane_set_vc_t

0xc787,	// (0x00015862) setting_code_pane_vc_ParamLimits

0xc787,	// (0x00015862) setting_code_pane_vc

0xc796,	// (0x00015871) setting_slider_graphic_pane_vc

0xc796,	// (0x00015871) setting_slider_pane_vc

0xc796,	// (0x00015871) setting_text_pane_vc

0xc796,	// (0x00015871) setting_volume_pane_vc

0xc79e,	// (0x00015879) scroll_pane_cp121_vc

0x8b72,	// (0x00011c4d) set_content_pane_vc

0xc9ae,	// (0x00015a89) button_value_adjust_pane_g1

0xc9b7,	// (0x00015a92) button_value_adjust_pane_g2

0x0001,

0xfa93,	// (0x00018b6e) button_value_adjust_pane_g

0xc9c0,	// (0x00015a9b) form_field_slider_wide_pane_vc_t1_ParamLimits

0xc9c0,	// (0x00015a9b) form_field_slider_wide_pane_vc_t1

0xc9d4,	// (0x00015aaf) form_field_slider_wide_pane_vc_t2_ParamLimits

0xc9d4,	// (0x00015aaf) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa98,	// (0x00018b73) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa98,	// (0x00018b73) form_field_slider_wide_pane_vc_t

0x8118,	// (0x000111f3) input_focus_pane_cp10_vc_ParamLimits

0x8118,	// (0x000111f3) input_focus_pane_cp10_vc

0xc9e6,	// (0x00015ac1) slider_cont_pane_cp1_vc_ParamLimits

0xc9e6,	// (0x00015ac1) slider_cont_pane_cp1_vc

0xc669,	// (0x00015744) slider_form_pane_g1_cp2

0xc672,	// (0x0001574d) slider_form_pane_g2_cp2

0xc9ff,	// (0x00015ada) form_field_slider_pane_vc_t3

0xca0d,	// (0x00015ae8) form_field_slider_pane_vc_t4

0xca1b,	// (0x00015af6) slider_form_pane_vc_ParamLimits

0xca1b,	// (0x00015af6) slider_form_pane_vc

0xca28,	// (0x00015b03) form_field_slider_pane_vc_t1_ParamLimits

0xca28,	// (0x00015b03) form_field_slider_pane_vc_t1

0xc9d4,	// (0x00015aaf) form_field_slider_pane_vc_t2_ParamLimits

0xc9d4,	// (0x00015aaf) form_field_slider_pane_vc_t2

0x0001,

0xfaa8,	// (0x00018b83) form_field_slider_pane_vc_t_ParamLimits

0xfaa8,	// (0x00018b83) form_field_slider_pane_vc_t

0x8118,	// (0x000111f3) input_focus_pane_cp9_vc_ParamLimits

0x8118,	// (0x000111f3) input_focus_pane_cp9_vc

0xca44,	// (0x00015b1f) slider_cont_pane_vc_ParamLimits

0xca44,	// (0x00015b1f) slider_cont_pane_vc

0xca56,	// (0x00015b31) list_form_graphic_pane_cp_vc_ParamLimits

0xca56,	// (0x00015b31) list_form_graphic_pane_cp_vc

0xaa6b,	// (0x00013b46) form_field_popup_wide_pane_vc_g1

0xca6b,	// (0x00015b46) form_field_popup_wide_pane_vc_t1_ParamLimits

0xca6b,	// (0x00015b46) form_field_popup_wide_pane_vc_t1

0x8c5c,	// (0x00011d37) input_focus_pane_cp8_vc_ParamLimits

0x8c5c,	// (0x00011d37) input_focus_pane_cp8_vc

0xca82,	// (0x00015b5d) list_form_wide_pane_vc_ParamLimits

0xca82,	// (0x00015b5d) list_form_wide_pane_vc

0xca8e,	// (0x00015b69) list_form_graphic_pane_vc_g1

0xca96,	// (0x00015b71) list_form_graphic_pane_vc_t1_ParamLimits

0xca96,	// (0x00015b71) list_form_graphic_pane_vc_t1

0x7e83,	// (0x00010f5e) list_highlight_pane_cp5_vc_ParamLimits

0x7e83,	// (0x00010f5e) list_highlight_pane_cp5_vc

0xcab2,	// (0x00015b8d) list_form_graphic_pane_vc_ParamLimits

0xcab2,	// (0x00015b8d) list_form_graphic_pane_vc

0xaa6b,	// (0x00013b46) form_field_popup_pane_vc_g1

0xcac8,	// (0x00015ba3) form_field_popup_pane_vc_t1_ParamLimits

0xcac8,	// (0x00015ba3) form_field_popup_pane_vc_t1

0x8c5c,	// (0x00011d37) input_focus_pane_cp7_vc_ParamLimits

0x8c5c,	// (0x00011d37) input_focus_pane_cp7_vc

0xcadf,	// (0x00015bba) list_form_pane_vc_ParamLimits

0xcadf,	// (0x00015bba) list_form_pane_vc

0xcaeb,	// (0x00015bc6) data_form_pane_vc_t1_ParamLimits

0xcaeb,	// (0x00015bc6) data_form_pane_vc_t1

0x8d98,	// (0x00011e73) input_focus_pane_vc_g1

0x8da0,	// (0x00011e7b) input_focus_pane_vc_g2

0x8da8,	// (0x00011e83) input_focus_pane_vc_g3

0x8db0,	// (0x00011e8b) input_focus_pane_vc_g4

0x8db8,	// (0x00011e93) input_focus_pane_vc_g5

0x8dc0,	// (0x00011e9b) input_focus_pane_vc_g6

0x8dc8,	// (0x00011ea3) input_focus_pane_vc_g7

0x8dd0,	// (0x00011eab) input_focus_pane_vc_g8

0x8dd8,	// (0x00011eb3) input_focus_pane_vc_g9

0x7d99,	// (0x00010e74) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0001877e) input_focus_pane_vc_g

0xaa5f,	// (0x00013b3a) data_form_pane_vc_ParamLimits

0xaa5f,	// (0x00013b3a) data_form_pane_vc

0xaa6b,	// (0x00013b46) form_field_data_pane_vc_g1

0xcb06,	// (0x00015be1) form_field_data_pane_vc_t1_ParamLimits

0xcb06,	// (0x00015be1) form_field_data_pane_vc_t1

0x8c5c,	// (0x00011d37) input_focus_pane_vc_ParamLimits

0x8c5c,	// (0x00011d37) input_focus_pane_vc

0xcb20,	// (0x00015bfb) button_value_adjust_pane_cp3_vc

0xcb28,	// (0x00015c03) button_value_adjust_pane_cp5_vc

0xcb30,	// (0x00015c0b) form_field_data_pane_vc_ParamLimits

0xcb30,	// (0x00015c0b) form_field_data_pane_vc

0xcb47,	// (0x00015c22) form_field_data_pane_vc_cp2

0xcb4f,	// (0x00015c2a) form_field_data_wide_pane_vc_ParamLimits

0xcb4f,	// (0x00015c2a) form_field_data_wide_pane_vc

0xcb65,	// (0x00015c40) form_field_data_wide_pane_vc_cp2

0xcb6d,	// (0x00015c48) form_field_popup_pane_vc_ParamLimits

0xcb6d,	// (0x00015c48) form_field_popup_pane_vc

0xcb84,	// (0x00015c5f) form_field_popup_wide_pane_vc_ParamLimits

0xcb84,	// (0x00015c5f) form_field_popup_wide_pane_vc

0xcb9a,	// (0x00015c75) form_field_slider_pane_vc_ParamLimits

0xcb9a,	// (0x00015c75) form_field_slider_pane_vc

0xcbad,	// (0x00015c88) form_field_slider_wide_pane_vc_ParamLimits

0xcbad,	// (0x00015c88) form_field_slider_wide_pane_vc

0xcbc0,	// (0x00015c9b) grid_touch_1_pane_ParamLimits

0xcbc0,	// (0x00015c9b) grid_touch_1_pane

0xcbcc,	// (0x00015ca7) grid_touch_2_pane_ParamLimits

0xcbcc,	// (0x00015ca7) grid_touch_2_pane

0x9d6c,	// (0x00012e47) touch_pane_g1_ParamLimits

0x9d6c,	// (0x00012e47) touch_pane_g1

0xcbe4,	// (0x00015cbf) cell_app_pane_cp_wide_ParamLimits

0xcbe4,	// (0x00015cbf) cell_app_pane_cp_wide

0xcbf5,	// (0x00015cd0) grid_popup_fast_wide_pane_ParamLimits

0xcbf5,	// (0x00015cd0) grid_popup_fast_wide_pane

0xcc09,	// (0x00015ce4) scroll_pane_cp19_ParamLimits

0xcc09,	// (0x00015ce4) scroll_pane_cp19

0x7da3,	// (0x00010e7e) bg_popup_window_pane_cp20

0xcc1d,	// (0x00015cf8) listscroll_popup_fast_wide_pane

0x7e83,	// (0x00010f5e) grid_indicator_nsta_pane

0xcc25,	// (0x00015d00) clock_nsta_pane_g1

0xcc2e,	// (0x00015d09) clock_nsta_pane_t1

0xcc4a,	// (0x00015d25) cell_indicator_nsta_pane_ParamLimits

0xcc4a,	// (0x00015d25) cell_indicator_nsta_pane

0xcc82,	// (0x00015d5d) cell_indicator_nsta_pane_g1

0xcc90,	// (0x00015d6b) cell_indicator_nsta_pane_g2

0x0001,

0xfab2,	// (0x00018b8d) cell_indicator_nsta_pane_g

0xcca6,	// (0x00015d81) clock_nsta_pane_cp

0xccae,	// (0x00015d89) indicator_nsta_pane_cp

0xccb7,	// (0x00015d92) nsta_clock_indic_pane_g1

0x7f66,	// (0x00011041) grid_indicator_pane

0x9374,	// (0x0001244f) scroll_pane_cp29

0x685f,	// (0x0000f93a) indicator_nsta_pane_cp2_ParamLimits

0x685f,	// (0x0000f93a) indicator_nsta_pane_cp2

0x7e83,	// (0x00010f5e) main_apps_wheel_pane

0xacc3,	// (0x00013d9e) form_midp_field_text_pane_ParamLimits

0xae08,	// (0x00013ee3) scroll_bar_cp050_ParamLimits

0xcd20,	// (0x00015dfb) cell_indicator_pane_ParamLimits

0xcd20,	// (0x00015dfb) cell_indicator_pane

0xcd3d,	// (0x00015e18) cell_indicator_pane_g1

0xcd47,	// (0x00015e22) grid_wheel_folder_pane_ParamLimits

0xcd47,	// (0x00015e22) grid_wheel_folder_pane

0xcd5d,	// (0x00015e38) list_wheel_apps_pane_ParamLimits

0xcd5d,	// (0x00015e38) list_wheel_apps_pane

0xcd6e,	// (0x00015e49) main_apps_wheel_pane_g1_ParamLimits

0xcd6e,	// (0x00015e49) main_apps_wheel_pane_g1

0xcd82,	// (0x00015e5d) main_apps_wheel_pane_g2_ParamLimits

0xcd82,	// (0x00015e5d) main_apps_wheel_pane_g2

0x0001,

0xface,	// (0x00018ba9) main_apps_wheel_pane_g_ParamLimits

0xface,	// (0x00018ba9) main_apps_wheel_pane_g

0xcd9a,	// (0x00015e75) main_apps_wheel_pane_t1_ParamLimits

0xcd9a,	// (0x00015e75) main_apps_wheel_pane_t1

0xcdbd,	// (0x00015e98) list_wheel_apps_pane_g1

0xcdc5,	// (0x00015ea0) list_wheel_apps_pane_g2

0xcdcd,	// (0x00015ea8) list_wheel_apps_pane_g3

0xcdd5,	// (0x00015eb0) list_wheel_apps_pane_g4

0xcddf,	// (0x00015eba) list_wheel_apps_pane_g5

0x0004,

0xfad3,	// (0x00018bae) list_wheel_apps_pane_g

0x9925,	// (0x00012a00) navi_icon_text_pane

0xa3de,	// (0x000134b9) aid_fill_nsta

0xce02,	// (0x00015edd) navi_icon_text_pane_g1

0xce11,	// (0x00015eec) navi_icon_text_pane_t1

0x97c1,	// (0x0001289c) list_set_graphic_pane_t1_ParamLimits

0x97c1,	// (0x0001289c) list_set_graphic_pane_t1

0xb54a,	// (0x00014625) popup_midp_note_alarm_window_t6_ParamLimits

0xb54a,	// (0x00014625) popup_midp_note_alarm_window_t6

0xb55c,	// (0x00014637) popup_midp_note_alarm_window_t7_ParamLimits

0xb55c,	// (0x00014637) popup_midp_note_alarm_window_t7

0xb56e,	// (0x00014649) popup_midp_note_alarm_window_t8_ParamLimits

0xb56e,	// (0x00014649) popup_midp_note_alarm_window_t8

0xb580,	// (0x0001465b) popup_midp_note_alarm_window_t9_ParamLimits

0xb580,	// (0x0001465b) popup_midp_note_alarm_window_t9

0xb592,	// (0x0001466d) popup_midp_note_alarm_window_t10_ParamLimits

0xb592,	// (0x0001466d) popup_midp_note_alarm_window_t10

0xb5a4,	// (0x0001467f) popup_midp_note_alarm_window_t11_ParamLimits

0xb5a4,	// (0x0001467f) popup_midp_note_alarm_window_t11

0xb5b6,	// (0x00014691) scroll_pane_cp17_ParamLimits

0xb5b6,	// (0x00014691) scroll_pane_cp17

0x6d13,	// (0x0000fdee) volume_small_pane_cp_g1

0x705f,	// (0x0001013a) volume_small_pane_cp_g2

0x7068,	// (0x00010143) volume_small_pane_cp_g3

0x7071,	// (0x0001014c) volume_small_pane_cp_g4

0x707a,	// (0x00010155) volume_small_pane_cp_g5

0x7083,	// (0x0001015e) volume_small_pane_cp_g6

0x708c,	// (0x00010167) volume_small_pane_cp_g7

0x7095,	// (0x00010170) volume_small_pane_cp_g8

0x709e,	// (0x00010179) volume_small_pane_cp_g9

0x70a7,	// (0x00010182) volume_small_pane_cp_g10

0x9b86,	// (0x00012c61) midp_ticker_pane_g1_ParamLimits

0x9b92,	// (0x00012c6d) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x00018846) midp_ticker_pane_g_ParamLimits

0x9b9e,	// (0x00012c79) midp_ticker_pane_t1_ParamLimits

0xa3f4,	// (0x000134cf) aid_fill_nsta_2

0xadf4,	// (0x00013ecf) list_form2_midp_pane

0xbf7d,	// (0x00015058) midp_editing_number_pane_ParamLimits

0xbf8c,	// (0x00015067) midp_ticker_pane_ParamLimits

0xce26,	// (0x00015f01) form2_midp_field_pane

0xce4a,	// (0x00015f25) scroll_pane_cp51

0xce6a,	// (0x00015f45) form2_midp_button_pane_ParamLimits

0xce6a,	// (0x00015f45) form2_midp_button_pane

0xce7c,	// (0x00015f57) form2_midp_content_pane_ParamLimits

0xce7c,	// (0x00015f57) form2_midp_content_pane

0xce96,	// (0x00015f71) form2_midp_field_choice_group_pane

0xce9e,	// (0x00015f79) form2_midp_field_pane_g1

0xcea6,	// (0x00015f81) form2_midp_field_pane_g2

0xceae,	// (0x00015f89) form2_midp_field_pane_g3

0xceb6,	// (0x00015f91) form2_midp_field_pane_g4

0x0003,

0xfaf8,	// (0x00018bd3) form2_midp_field_pane_g

0xcebe,	// (0x00015f99) form2_midp_gauge_slider_pane

0xcec6,	// (0x00015fa1) form2_midp_gauge_wait_pane

0xcece,	// (0x00015fa9) form2_midp_image_pane_ParamLimits

0xcece,	// (0x00015fa9) form2_midp_image_pane

0xcee9,	// (0x00015fc4) form2_midp_label_pane_ParamLimits

0xcee9,	// (0x00015fc4) form2_midp_label_pane

0xcf02,	// (0x00015fdd) form2_midp_label_pane_cp_ParamLimits

0xcf02,	// (0x00015fdd) form2_midp_label_pane_cp

0xcf23,	// (0x00015ffe) form2_midp_string_pane_ParamLimits

0xcf23,	// (0x00015ffe) form2_midp_string_pane

0xcf35,	// (0x00016010) form2_midp_text_pane_ParamLimits

0xcf35,	// (0x00016010) form2_midp_text_pane

0xcf4e,	// (0x00016029) form2_midp_time_pane

0xcf5e,	// (0x00016039) input_focus_pane_cp51_ParamLimits

0xcf5e,	// (0x00016039) input_focus_pane_cp51

0xcf76,	// (0x00016051) form2_midp_label_pane_t1_ParamLimits

0xcf76,	// (0x00016051) form2_midp_label_pane_t1

0xcfb6,	// (0x00016091) form2_mdip_text_pane_t1_ParamLimits

0xcfb6,	// (0x00016091) form2_mdip_text_pane_t1

0xcfd2,	// (0x000160ad) form2_midp_time_pane_t1

0xcfed,	// (0x000160c8) form2_midp_gauge_slider_pane_t1

0xcfff,	// (0x000160da) form2_midp_gauge_slider_pane_t2

0xd011,	// (0x000160ec) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb01,	// (0x00018bdc) form2_midp_gauge_slider_pane_t

0xd023,	// (0x000160fe) form2_midp_slider_pane

0xd02f,	// (0x0001610a) form2_midp_gauge_wait_pane_t1

0xd03d,	// (0x00016118) form2_midp_wait_pane_ParamLimits

0xd03d,	// (0x00016118) form2_midp_wait_pane

0xd068,	// (0x00016143) list_single_2graphic_pane_cp4_ParamLimits

0xd068,	// (0x00016143) list_single_2graphic_pane_cp4

0xaab6,	// (0x00013b91) list_single_midp_graphic_pane_cp_ParamLimits

0xaab6,	// (0x00013b91) list_single_midp_graphic_pane_cp

0x7da3,	// (0x00010e7e) list_highlight_pane_cp20

0xd097,	// (0x00016172) list_single_2graphic_pane_g1_cp4

0xc491,	// (0x0001556c) list_single_2graphic_pane_g2_cp4

0xd09f,	// (0x0001617a) list_single_2graphic_pane_t1_cp4

0x7e83,	// (0x00010f5e) list_highlight_pane_cp21

0xd0ae,	// (0x00016189) list_single_midp_graphic_pane_g4_cp

0xd0bd,	// (0x00016198) list_single_midp_graphic_pane_t1_cp

0xd0d2,	// (0x000161ad) form2_mdip_string_pane_t1_ParamLimits

0xd0d2,	// (0x000161ad) form2_mdip_string_pane_t1

0x7da3,	// (0x00010e7e) bg_wml_button_pane_cp2

0x7d99,	// (0x00010e74) form2_midp_image_pane_g1

0x8936,	// (0x00011a11) list_double_large_graphic_pane_g5_ParamLimits

0x8936,	// (0x00011a11) list_double_large_graphic_pane_g5

0x9aaf,	// (0x00012b8a) midp_form_pane_ParamLimits

0x7e83,	// (0x00010f5e) main_apps_wheel_pane_ParamLimits

0xa1d2,	// (0x000132ad) popup_preview_window_ParamLimits

0xa1d2,	// (0x000132ad) popup_preview_window

0xa383,	// (0x0001345e) popup_touch_info_window_ParamLimits

0xa383,	// (0x0001345e) popup_touch_info_window

0xa3a1,	// (0x0001347c) popup_touch_menu_window_ParamLimits

0xa3a1,	// (0x0001347c) popup_touch_menu_window

0x7d8f,	// (0x00010e6a) bg_popup_sub_pane_cp6

0xd20c,	// (0x000162e7) list_touch_menu_pane

0xd214,	// (0x000162ef) list_single_touch_menu_pane_ParamLimits

0xd214,	// (0x000162ef) list_single_touch_menu_pane

0xd229,	// (0x00016304) list_single_touch_menu_pane_t1

0x7e83,	// (0x00010f5e) bg_popup_sub_pane_cp7_ParamLimits

0x7e83,	// (0x00010f5e) bg_popup_sub_pane_cp7

0xd237,	// (0x00016312) heading_sub_pane

0xd23f,	// (0x0001631a) list_touch_info_pane_ParamLimits

0xd23f,	// (0x0001631a) list_touch_info_pane

0xd24e,	// (0x00016329) list_single_touch_info_pane_ParamLimits

0xd24e,	// (0x00016329) list_single_touch_info_pane

0xd260,	// (0x0001633b) list_single_touch_info_pane_t1

0xd26e,	// (0x00016349) list_single_touch_info_pane_t2

0x0001,

0xfb0f,	// (0x00018bea) list_single_touch_info_pane_t

0x9aa7,	// (0x00012b82) bg_popup_heading_pane_cp

0xd27c,	// (0x00016357) heading_sub_pane_t1

0xa9f9,	// (0x00013ad4) bg_popup_preview_window_pane_cp_ParamLimits

0xa9f9,	// (0x00013ad4) bg_popup_preview_window_pane_cp

0xd237,	// (0x00016312) heading_preview_pane

0xd23f,	// (0x0001631a) list_preview_pane_ParamLimits

0xd23f,	// (0x0001631a) list_preview_pane

0xd28a,	// (0x00016365) popup_preview_window_g1

0xd24e,	// (0x00016329) list_single_preview_pane_ParamLimits

0xd24e,	// (0x00016329) list_single_preview_pane

0xd292,	// (0x0001636d) list_single_preview_pane_g1

0xd29a,	// (0x00016375) list_single_preview_pane_t1

0xd260,	// (0x0001633b) list_single_preview_pane_t2

0x0001,

0xfb14,	// (0x00018bef) list_single_preview_pane_t

0xd2a8,	// (0x00016383) bg_popup_heading_pane_cp2_ParamLimits

0xd2a8,	// (0x00016383) bg_popup_heading_pane_cp2

0xd2be,	// (0x00016399) heading_preview_pane_g1

0xd2c6,	// (0x000163a1) heading_preview_pane_t1_ParamLimits

0xd2c6,	// (0x000163a1) heading_preview_pane_t1

0x7f89,	// (0x00011064) soft_indicator_pane_t1_ParamLimits

0x8663,	// (0x0001173e) scroll_pane_ParamLimits

0x9270,	// (0x0001234b) scroll_sc2_left_pane

0x9279,	// (0x00012354) scroll_sc2_right_pane

0x9298,	// (0x00012373) scroll_bg_pane_g1_ParamLimits

0x92ad,	// (0x00012388) scroll_bg_pane_g2_ParamLimits

0x92c5,	// (0x000123a0) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x000187d5) scroll_bg_pane_g_ParamLimits

0x9298,	// (0x00012373) scroll_handle_pane_g1_ParamLimits

0x92e7,	// (0x000123c2) scroll_handle_pane_g2_ParamLimits

0x92c5,	// (0x000123a0) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x000187dc) scroll_handle_pane_g_ParamLimits

0x9e5d,	// (0x00012f38) popup_choice_list_window_ParamLimits

0x9e5d,	// (0x00012f38) popup_choice_list_window

0xa807,	// (0x000138e2) choice_list_pane

0xa8ab,	// (0x00013986) cell_toolbar_pane_t1

0xa8d3,	// (0x000139ae) toolbar_button_pane_ParamLimits

0xba7a,	// (0x00014b55) ai_gene_pane_1_t2_ParamLimits

0xba7a,	// (0x00014b55) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x000189f9) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x000189f9) ai_gene_pane_1_t

0xd2e3,	// (0x000163be) scroll_sc2_left_pane_g1

0xd2e3,	// (0x000163be) scroll_sc2_right_pane_g1

0x9e2d,	// (0x00012f08) bg_popup_sub_pane_cp10

0xd2ed,	// (0x000163c8) list_choice_list_pane

0xd304,	// (0x000163df) list_single_choice_list_pane_ParamLimits

0xd304,	// (0x000163df) list_single_choice_list_pane

0xd318,	// (0x000163f3) list_single_choice_list_pane_g1

0xd320,	// (0x000163fb) list_single_choice_list_pane_t1_ParamLimits

0xd320,	// (0x000163fb) list_single_choice_list_pane_t1

0xd335,	// (0x00016410) choice_list_pane_g1

0xd33d,	// (0x00016418) choice_list_pane_t1

0x7d8f,	// (0x00010e6a) input_focus_pane_cp11

0x9149,	// (0x00012224) title_pane_stacon_g2_ParamLimits

0x9149,	// (0x00012224) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x000187bb) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x000187bb) title_pane_stacon_g

0x9aa7,	// (0x00012b82) cursor_press_pane

0x9f03,	// (0x00012fde) popup_fep_hwr_window_ParamLimits

0x9f03,	// (0x00012fde) popup_fep_hwr_window

0x9f7b,	// (0x00013056) popup_fep_vkb_window_ParamLimits

0x9f7b,	// (0x00013056) popup_fep_vkb_window

0xd34b,	// (0x00016426) cursor_press_pane_g1

0x0002,

0xfb3d,	// (0x00018c18) fep_vkb_side_pane_g_ParamLimits

0x70e9,	// (0x000101c4) fep_hwr_candidate_pane_ParamLimits

0x70e9,	// (0x000101c4) fep_hwr_candidate_pane

0x7113,	// (0x000101ee) fep_hwr_side_pane_ParamLimits

0x7113,	// (0x000101ee) fep_hwr_side_pane

0x7133,	// (0x0001020e) fep_hwr_top_pane_ParamLimits

0x7133,	// (0x0001020e) fep_hwr_top_pane

0x714b,	// (0x00010226) fep_hwr_write_pane_ParamLimits

0x714b,	// (0x00010226) fep_hwr_write_pane

0xfb3d,	// (0x00018c18) fep_vkb_side_pane_g

0xd353,	// (0x0001642e) fep_hwr_top_pane_g1

0xd365,	// (0x00016440) fep_hwr_top_pane_g2

0x7185,	// (0x00010260) fep_hwr_top_pane_g3

0x0002,

0xfb19,	// (0x00018bf4) fep_hwr_top_pane_g

0x719a,	// (0x00010275) fep_hwr_top_text_pane

0x943a,	// (0x00012515) fep_hwr_top_text_pane_g1

0xd39b,	// (0x00016476) fep_hwr_top_text_pane_t1

0x7290,	// (0x0001036b) fep_hwr_candidate_pane_g1

0xd5f5,	// (0x000166d0) fep_vkb_keypad_pane_g3_ParamLimits

0xd5f5,	// (0x000166d0) fep_vkb_keypad_pane_g3

0xd61d,	// (0x000166f8) fep_vkb_keypad_pane_g4_ParamLimits

0xd61d,	// (0x000166f8) fep_vkb_keypad_pane_g4

0xd68c,	// (0x00016767) fep_vkb_bottom_pane_g2_ParamLimits

0xd68c,	// (0x00016767) fep_vkb_bottom_pane_g2

0x0001,

0xfb44,	// (0x00018c1f) fep_vkb_bottom_pane_g_ParamLimits

0xfb44,	// (0x00018c1f) fep_vkb_bottom_pane_g

0xd2e3,	// (0x000163be) cell_vkb_side_pane_g2

0x0001,

0xfb4e,	// (0x00018c29) cell_vkb_side_pane_g

0xd717,	// (0x000167f2) cell_vkb_side_pane_t1

0xd725,	// (0x00016800) cell_vkb_side_pane_t1_copy1

0xd2e3,	// (0x000163be) bg_fep_vkb_candidate_pane_g2

0xd857,	// (0x00016932) cell_vkb_candidate_pane_ParamLimits

0xd3a9,	// (0x00016484) aid_size_cell_vkb_ParamLimits

0xd3a9,	// (0x00016484) aid_size_cell_vkb

0xd857,	// (0x00016932) cell_vkb_candidate_pane

0x72b7,	// (0x00010392) bg_popup_fep_shadow_pane_g1

0xd437,	// (0x00016512) fep_vkb_bottom_pane_ParamLimits

0xd437,	// (0x00016512) fep_vkb_bottom_pane

0xd474,	// (0x0001654f) fep_vkb_candidate_pane_ParamLimits

0xd474,	// (0x0001654f) fep_vkb_candidate_pane

0xd490,	// (0x0001656b) fep_vkb_keypad_pane_ParamLimits

0xd490,	// (0x0001656b) fep_vkb_keypad_pane

0xd4d6,	// (0x000165b1) fep_vkb_side_pane_ParamLimits

0xd4d6,	// (0x000165b1) fep_vkb_side_pane

0xd512,	// (0x000165ed) fep_vkb_top_pane_ParamLimits

0xd512,	// (0x000165ed) fep_vkb_top_pane

0xd54e,	// (0x00016629) fep_vkb_top_pane_g1_ParamLimits

0xd54e,	// (0x00016629) fep_vkb_top_pane_g1

0xd55d,	// (0x00016638) fep_vkb_top_pane_g2_ParamLimits

0xd55d,	// (0x00016638) fep_vkb_top_pane_g2

0xd56c,	// (0x00016647) fep_vkb_top_pane_g3_ParamLimits

0xd56c,	// (0x00016647) fep_vkb_top_pane_g3

0x0003,

0xfb34,	// (0x00018c0f) fep_vkb_top_pane_g_ParamLimits

0xfb34,	// (0x00018c0f) fep_vkb_top_pane_g

0xd58a,	// (0x00016665) fep_vkb_top_text_pane_ParamLimits

0xd58a,	// (0x00016665) fep_vkb_top_text_pane

0xd59b,	// (0x00016676) fep_vkb_side_pane_g1_ParamLimits

0xd59b,	// (0x00016676) fep_vkb_side_pane_g1

0xd5e4,	// (0x000166bf) grid_vkb_side_pane_ParamLimits

0xd5e4,	// (0x000166bf) grid_vkb_side_pane

0x72bf,	// (0x0001039a) bg_popup_fep_shadow_pane_g2

0x72c8,	// (0x000103a3) bg_popup_fep_shadow_pane_g3

0x72d0,	// (0x000103ab) bg_popup_fep_shadow_pane_g4

0x72d9,	// (0x000103b4) bg_popup_fep_shadow_pane_g5

0x72e3,	// (0x000103be) bg_popup_fep_shadow_pane_g6

0x72eb,	// (0x000103c6) bg_popup_fep_shadow_pane_g7

0x8db0,	// (0x00011e8b) bg_popup_fep_shadow_pane_g8

0xd63b,	// (0x00016716) grid_vkb_keypad_number_pane_ParamLimits

0xd63b,	// (0x00016716) grid_vkb_keypad_number_pane

0xd64b,	// (0x00016726) grid_vkb_keypad_pane_ParamLimits

0xd64b,	// (0x00016726) grid_vkb_keypad_pane

0xd671,	// (0x0001674c) fep_vkb_bottom_pane_g1_ParamLimits

0xd671,	// (0x0001674c) fep_vkb_bottom_pane_g1

0xd69a,	// (0x00016775) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd69a,	// (0x00016775) grid_vkb_keypad_bottom_left_pane

0xd6af,	// (0x0001678a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd6af,	// (0x0001678a) grid_vkb_keypad_bottom_right_pane

0xd6c4,	// (0x0001679f) fep_vkb_top_text_pane_g1

0xd6df,	// (0x000167ba) fep_vkb_top_text_pane_t1

0xd6f4,	// (0x000167cf) cell_vkb_side_pane_ParamLimits

0xd6f4,	// (0x000167cf) cell_vkb_side_pane

0xd2e3,	// (0x000163be) cell_vkb_side_pane_g1

0xd733,	// (0x0001680e) cell_vkb_keypad_pane_ParamLimits

0xd733,	// (0x0001680e) cell_vkb_keypad_pane

0xd7ae,	// (0x00016889) cell_vkb_keypad_pane_g1

0x0008,

0xfb61,	// (0x00018c3c) bg_popup_fep_shadow_pane_g

0x72fd,	// (0x000103d8) cell_hwr_side_pane_g1

0x72fd,	// (0x000103d8) cell_hwr_side_pane_g2

0xd7b8,	// (0x00016893) cell_vkb_keypad_pane_t1

0xd7c6,	// (0x000168a1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd7c6,	// (0x000168a1) cell_vkb_keypad_bottom_left_pane

0xd7e3,	// (0x000168be) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd7e3,	// (0x000168be) cell_vkb_keypad_bottom_right_pane

0xd2e3,	// (0x000163be) cell_vkb_keypad_bottom_left_pane_g1

0xd2e3,	// (0x000163be) cell_vkb_keypad_bottom_right_pane_g1

0xd81c,	// (0x000168f7) cell_vkb_keypad_number_pane_ParamLimits

0xd81c,	// (0x000168f7) cell_vkb_keypad_number_pane

0xd83b,	// (0x00016916) cell_vkb_keypad_number_pane_g1

0xd845,	// (0x00016920) cell_vkb_keypad_number_pane_g2

0xd84e,	// (0x00016929) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb53,	// (0x00018c2e) cell_vkb_keypad_number_pane_g

0xd7b8,	// (0x00016893) cell_vkb_keypad_number_pane_t1

0xd874,	// (0x0001694f) fep_vkb_candidate_pane_g1

0x0001,

0xfb74,	// (0x00018c4f) cell_hwr_side_pane_g

0xd88d,	// (0x00016968) cell_hwr_side_pane_t1

0x7307,	// (0x000103e2) cell_hwr_side_pane_t1_copy1

0x7315,	// (0x000103f0) cell_hwr_candidate_pane_g1

0x7344,	// (0x0001041f) cell_hwr_candidate_pane_t1

0xd2e3,	// (0x000163be) cell_vkb_candidate_pane_g2

0xd8d1,	// (0x000169ac) cell_vkb_candidate_pane_t1

0x70b0,	// (0x0001018b) bg_popup_fep_shadow_pane_ParamLimits

0x70b0,	// (0x0001018b) bg_popup_fep_shadow_pane

0x7165,	// (0x00010240) bg_fep_hwr_top_pane_g4

0xd377,	// (0x00016452) bg_hwr_side_pane_g1_ParamLimits

0xd377,	// (0x00016452) bg_hwr_side_pane_g1

0x71d6,	// (0x000102b1) cell_hwr_side_pane_ParamLimits

0x71d6,	// (0x000102b1) cell_hwr_side_pane

0x7211,	// (0x000102ec) fep_hwr_write_pane_g1_ParamLimits

0x7211,	// (0x000102ec) fep_hwr_write_pane_g1

0x721e,	// (0x000102f9) fep_hwr_write_pane_g2_ParamLimits

0x721e,	// (0x000102f9) fep_hwr_write_pane_g2

0x722b,	// (0x00010306) fep_hwr_write_pane_g3_ParamLimits

0x722b,	// (0x00010306) fep_hwr_write_pane_g3

0x7239,	// (0x00010314) fep_hwr_write_pane_g4_ParamLimits

0x7239,	// (0x00010314) fep_hwr_write_pane_g4

0x0005,

0xfb20,	// (0x00018bfb) fep_hwr_write_pane_g_ParamLimits

0xfb20,	// (0x00018bfb) fep_hwr_write_pane_g

0x7165,	// (0x00010240) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7165,	// (0x00010240) bg_fep_hwr_candidate_pane_g2

0x724e,	// (0x00010329) cell_hwr_candidate_pane_ParamLimits

0x724e,	// (0x00010329) cell_hwr_candidate_pane

0x7290,	// (0x0001036b) fep_hwr_candidate_pane_g1_ParamLimits

0xd3d7,	// (0x000164b2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xd3d7,	// (0x000164b2) bg_popup_fep_shadow_pane_cp2

0xd57c,	// (0x00016657) fep_vkb_top_pane_g4_ParamLimits

0xd57c,	// (0x00016657) fep_vkb_top_pane_g4

0xd5c2,	// (0x0001669d) fep_vkb_side_pane_g2_ParamLimits

0xd5c2,	// (0x0001669d) fep_vkb_side_pane_g2

0x8a8c,	// (0x00011b67) list_setting_pane_t4_ParamLimits

0x8a8c,	// (0x00011b67) list_setting_pane_t4

0x8b06,	// (0x00011be1) list_setting_number_pane_t5_ParamLimits

0x8b06,	// (0x00011be1) list_setting_number_pane_t5

0x947c,	// (0x00012557) list_double_heading_pane_cp2_ParamLimits

0x947c,	// (0x00012557) list_double_heading_pane_cp2

0x8c82,	// (0x00011d5d) list_double_heading_pane_g1_cp2_ParamLimits

0x8c82,	// (0x00011d5d) list_double_heading_pane_g1_cp2

0x8c8e,	// (0x00011d69) list_double_heading_pane_g2_cp2_ParamLimits

0x8c8e,	// (0x00011d69) list_double_heading_pane_g2_cp2

0xd8df,	// (0x000169ba) list_double_heading_pane_t1_cp2_ParamLimits

0xd8df,	// (0x000169ba) list_double_heading_pane_t1_cp2

0xd8f5,	// (0x000169d0) list_double_heading_pane_t2_cp2_ParamLimits

0xd8f5,	// (0x000169d0) list_double_heading_pane_t2_cp2

0x7d77,	// (0x00010e52) aid_value_unit2

0x6401,	// (0x0000f4dc) popup_preview_fixed_window

0x8126,	// (0x00011201) bg_popup_preview_window_pane_cp02

0xd907,	// (0x000169e2) list_preview_fixed_pane

0xd94d,	// (0x00016a28) list_empty_pane_fp_ParamLimits

0xd94d,	// (0x00016a28) list_empty_pane_fp

0xd94d,	// (0x00016a28) list_single_cale_day_pane_fp_ParamLimits

0xd94d,	// (0x00016a28) list_single_cale_day_pane_fp

0xd94d,	// (0x00016a28) list_single_graphic_heading_pane_fp_ParamLimits

0xd94d,	// (0x00016a28) list_single_graphic_heading_pane_fp

0xd94d,	// (0x00016a28) list_single_graphic_pane_fp_ParamLimits

0xd94d,	// (0x00016a28) list_single_graphic_pane_fp

0xd94d,	// (0x00016a28) list_single_heading_pane_fp_ParamLimits

0xd94d,	// (0x00016a28) list_single_heading_pane_fp

0xd94d,	// (0x00016a28) list_single_pane_fp_ParamLimits

0xd94d,	// (0x00016a28) list_single_pane_fp

0xd964,	// (0x00016a3f) list_single_pane_fp_g1_ParamLimits

0xd964,	// (0x00016a3f) list_single_pane_fp_g1

0x8c82,	// (0x00011d5d) list_single_pane_fp_g2_ParamLimits

0x8c82,	// (0x00011d5d) list_single_pane_fp_g2

0x8c8e,	// (0x00011d69) list_single_pane_fp_g3_ParamLimits

0x8c8e,	// (0x00011d69) list_single_pane_fp_g3

0xd970,	// (0x00016a4b) list_single_pane_fp_g4_ParamLimits

0xd970,	// (0x00016a4b) list_single_pane_fp_g4

0x0003,

0xfb87,	// (0x00018c62) list_single_pane_fp_g_ParamLimits

0xfb87,	// (0x00018c62) list_single_pane_fp_g

0xd97c,	// (0x00016a57) list_single_pane_fp_t1_ParamLimits

0xd97c,	// (0x00016a57) list_single_pane_fp_t1

0xd993,	// (0x00016a6e) list_single_graphic_pane_fp_g1_ParamLimits

0xd993,	// (0x00016a6e) list_single_graphic_pane_fp_g1

0xd964,	// (0x00016a3f) list_single_graphic_pane_fp_g2_ParamLimits

0xd964,	// (0x00016a3f) list_single_graphic_pane_fp_g2

0x8c82,	// (0x00011d5d) list_single_graphic_pane_fp_g3_ParamLimits

0x8c82,	// (0x00011d5d) list_single_graphic_pane_fp_g3

0x8c8e,	// (0x00011d69) list_single_graphic_pane_fp_g4_ParamLimits

0x8c8e,	// (0x00011d69) list_single_graphic_pane_fp_g4

0xd970,	// (0x00016a4b) list_single_graphic_pane_fp_g5_ParamLimits

0xd970,	// (0x00016a4b) list_single_graphic_pane_fp_g5

0x0004,

0xfb90,	// (0x00018c6b) list_single_graphic_pane_fp_g_ParamLimits

0xfb90,	// (0x00018c6b) list_single_graphic_pane_fp_g

0xd99f,	// (0x00016a7a) list_single_graphic_pane_fp_t1_ParamLimits

0xd99f,	// (0x00016a7a) list_single_graphic_pane_fp_t1

0xd993,	// (0x00016a6e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd993,	// (0x00016a6e) list_single_graphic_heading_pane_fp_g1

0xd964,	// (0x00016a3f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd964,	// (0x00016a3f) list_single_graphic_heading_pane_fp_g2

0x8c82,	// (0x00011d5d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8c82,	// (0x00011d5d) list_single_graphic_heading_pane_fp_g3

0x8c8e,	// (0x00011d69) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8c8e,	// (0x00011d69) list_single_graphic_heading_pane_fp_g4

0xd970,	// (0x00016a4b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd970,	// (0x00016a4b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb90,	// (0x00018c6b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x00018c6b) list_single_graphic_heading_pane_fp_g

0xd9b5,	// (0x00016a90) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd9b5,	// (0x00016a90) list_single_graphic_heading_pane_fp_t1

0xd9cb,	// (0x00016aa6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd9cb,	// (0x00016aa6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9b,	// (0x00018c76) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9b,	// (0x00018c76) list_single_graphic_heading_pane_fp_t

0xd9dd,	// (0x00016ab8) list_single_cale_day_pane_fp_g1_ParamLimits

0xd9dd,	// (0x00016ab8) list_single_cale_day_pane_fp_g1

0xda15,	// (0x00016af0) list_single_cale_day_pane_fp_g2_ParamLimits

0xda15,	// (0x00016af0) list_single_cale_day_pane_fp_g2

0xda21,	// (0x00016afc) list_single_cale_day_pane_fp_g3_ParamLimits

0xda21,	// (0x00016afc) list_single_cale_day_pane_fp_g3

0xda49,	// (0x00016b24) list_single_cale_day_pane_fp_g4_ParamLimits

0xda49,	// (0x00016b24) list_single_cale_day_pane_fp_g4

0xda6d,	// (0x00016b48) list_single_cale_day_pane_fp_g5_ParamLimits

0xda6d,	// (0x00016b48) list_single_cale_day_pane_fp_g5

0x0004,

0xfba0,	// (0x00018c7b) list_single_cale_day_pane_fp_g_ParamLimits

0xfba0,	// (0x00018c7b) list_single_cale_day_pane_fp_g

0xda91,	// (0x00016b6c) list_single_cale_day_pane_fp_t1_ParamLimits

0xda91,	// (0x00016b6c) list_single_cale_day_pane_fp_t1

0xdab7,	// (0x00016b92) list_single_cale_day_pane_fp_t2_ParamLimits

0xdab7,	// (0x00016b92) list_single_cale_day_pane_fp_t2

0xdad0,	// (0x00016bab) list_single_cale_day_pane_fp_t3_ParamLimits

0xdad0,	// (0x00016bab) list_single_cale_day_pane_fp_t3

0x0002,

0xfbab,	// (0x00018c86) list_single_cale_day_pane_fp_t_ParamLimits

0xfbab,	// (0x00018c86) list_single_cale_day_pane_fp_t

0xd964,	// (0x00016a3f) list_empty_pane_fp_g1_ParamLimits

0xd964,	// (0x00016a3f) list_empty_pane_fp_g1

0xdae9,	// (0x00016bc4) list_empty_pane_fp_t1

0xdaf7,	// (0x00016bd2) list_empty_pane_fp_t2

0x0001,

0xfbb2,	// (0x00018c8d) list_empty_pane_fp_t

0xd964,	// (0x00016a3f) list_single_heading_pane_fp_g1_ParamLimits

0xd964,	// (0x00016a3f) list_single_heading_pane_fp_g1

0x8c82,	// (0x00011d5d) list_single_heading_pane_fp_g2_ParamLimits

0x8c82,	// (0x00011d5d) list_single_heading_pane_fp_g2

0x8c8e,	// (0x00011d69) list_single_heading_pane_fp_g3_ParamLimits

0x8c8e,	// (0x00011d69) list_single_heading_pane_fp_g3

0x0002,

0xfbb7,	// (0x00018c92) list_single_heading_pane_fp_g_ParamLimits

0xfbb7,	// (0x00018c92) list_single_heading_pane_fp_g

0xdb05,	// (0x00016be0) list_single_heading_pane_fp_t1_ParamLimits

0xdb05,	// (0x00016be0) list_single_heading_pane_fp_t1

0xdb17,	// (0x00016bf2) list_single_heading_pane_fp_t2_ParamLimits

0xdb17,	// (0x00016bf2) list_single_heading_pane_fp_t2

0x0001,

0xfbbe,	// (0x00018c99) list_single_heading_pane_fp_t_ParamLimits

0xfbbe,	// (0x00018c99) list_single_heading_pane_fp_t

0x8fe0,	// (0x000120bb) aid_size_cell_fast

0x8096,	// (0x00011171) soft_indicator_pane_cp1_t1

0x901d,	// (0x000120f8) cell_app_pane_cp2_ParamLimits

0x901d,	// (0x000120f8) cell_app_pane_cp2

0x70d2,	// (0x000101ad) fep_hwr_candidate_drop_down_list_pane

0x72aa,	// (0x00010385) fep_hwr_candidate_pane_g3_ParamLimits

0x72aa,	// (0x00010385) fep_hwr_candidate_pane_g3

0x5837,	// (0x0000e912) fep_hwr_candidate_pane_g4_ParamLimits

0x5837,	// (0x0000e912) fep_hwr_candidate_pane_g4

0x0002,

0xfb2d,	// (0x00018c08) fep_hwr_candidate_pane_g_ParamLimits

0xfb2d,	// (0x00018c08) fep_hwr_candidate_pane_g

0xd463,	// (0x0001653e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xd463,	// (0x0001653e) fep_vkb_candidate_drop_down_list_pane

0xd87c,	// (0x00016957) fep_vkb_candidate_pane_g3

0xd884,	// (0x0001695f) fep_vkb_candidate_pane_g4

0x0002,

0xfb5a,	// (0x00018c35) fep_vkb_candidate_pane_g

0x7315,	// (0x000103f0) cell_hwr_candidate_pane_g1_ParamLimits

0x7323,	// (0x000103fe) cell_hwr_candidate_pane_g3_ParamLimits

0x7323,	// (0x000103fe) cell_hwr_candidate_pane_g3

0x0549,	// (0x00009624) cell_hwr_candidate_pane_g4_ParamLimits

0x0549,	// (0x00009624) cell_hwr_candidate_pane_g4

0x0002,

0xfb79,	// (0x00018c54) cell_hwr_candidate_pane_g_ParamLimits

0xfb79,	// (0x00018c54) cell_hwr_candidate_pane_g

0xd89b,	// (0x00016976) cell_vkb_candidate_pane_g3_ParamLimits

0xd89b,	// (0x00016976) cell_vkb_candidate_pane_g3

0xd8b6,	// (0x00016991) cell_vkb_candidate_pane_g4_ParamLimits

0xd8b6,	// (0x00016991) cell_vkb_candidate_pane_g4

0xdb2d,	// (0x00016c08) cell_app_pane_cp2_g1_ParamLimits

0xdb2d,	// (0x00016c08) cell_app_pane_cp2_g1

0xdb4b,	// (0x00016c26) cell_app_pane_cp2_g2_ParamLimits

0xdb4b,	// (0x00016c26) cell_app_pane_cp2_g2

0x0001,

0xfbc3,	// (0x00018c9e) cell_app_pane_cp2_g_ParamLimits

0xfbc3,	// (0x00018c9e) cell_app_pane_cp2_g

0xdb57,	// (0x00016c32) cell_app_pane_cp2_t1_ParamLimits

0xdb57,	// (0x00016c32) cell_app_pane_cp2_t1

0x8c5c,	// (0x00011d37) grid_highlight_pane_cp1_ParamLimits

0x8c5c,	// (0x00011d37) grid_highlight_pane_cp1

0x7362,	// (0x0001043d) cell_hwr_candidate_pane_cp1_ParamLimits

0x7362,	// (0x0001043d) cell_hwr_candidate_pane_cp1

0x7315,	// (0x000103f0) fep_hwr_candidate_drop_down_list_pane_g1

0x7381,	// (0x0001045c) fep_hwr_candidate_drop_down_list_pane_g2

0x738e,	// (0x00010469) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc8,	// (0x00018ca3) fep_hwr_candidate_drop_down_list_pane_g

0x739b,	// (0x00010476) fep_hwr_candidate_drop_down_list_scroll_pane

0x73a4,	// (0x0001047f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x73a4,	// (0x0001047f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x73b1,	// (0x0001048c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x73b1,	// (0x0001048c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x73be,	// (0x00010499) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x73be,	// (0x00010499) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x73cb,	// (0x000104a6) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x73cb,	// (0x000104a6) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x73e6,	// (0x000104c1) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x73e6,	// (0x000104c1) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7401,	// (0x000104dc) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7401,	// (0x000104dc) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x741c,	// (0x000104f7) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x741c,	// (0x000104f7) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7437,	// (0x00010512) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7437,	// (0x00010512) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcf,	// (0x00018caa) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcf,	// (0x00018caa) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xdb69,	// (0x00016c44) cell_vkb_candidate_pane_cp1_ParamLimits

0xdb69,	// (0x00016c44) cell_vkb_candidate_pane_cp1

0xd57c,	// (0x00016657) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd57c,	// (0x00016657) fep_vkb_candidate_drop_down_list_pane_g1

0xdb89,	// (0x00016c64) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xdb89,	// (0x00016c64) fep_vkb_candidate_drop_down_list_pane_g2

0xdb96,	// (0x00016c71) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xdb96,	// (0x00016c71) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe0,	// (0x00018cbb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe0,	// (0x00018cbb) fep_vkb_candidate_drop_down_list_pane_g

0xdba3,	// (0x00016c7e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xdba3,	// (0x00016c7e) fep_vkb_candidate_drop_down_list_scroll_pane

0xdbb0,	// (0x00016c8b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xdbb0,	// (0x00016c8b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xdbbd,	// (0x00016c98) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xdbbd,	// (0x00016c98) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xdbc9,	// (0x00016ca4) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xdbc9,	// (0x00016ca4) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xdbd5,	// (0x00016cb0) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xdbd5,	// (0x00016cb0) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xdbf6,	// (0x00016cd1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xdbf6,	// (0x00016cd1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xdc17,	// (0x00016cf2) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xdc17,	// (0x00016cf2) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xdc38,	// (0x00016d13) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xdc38,	// (0x00016d13) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xdc59,	// (0x00016d34) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xdc59,	// (0x00016d34) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe7,	// (0x00018cc2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe7,	// (0x00018cc2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7dad,	// (0x00010e88) title_pane_g1_ParamLimits

0x7dba,	// (0x00010e95) title_pane_g2_ParamLimits

0xf56a,	// (0x00018645) title_pane_g_ParamLimits

0x942a,	// (0x00012505) aid_call2_pane

0x9432,	// (0x0001250d) aid_call_pane

0x943a,	// (0x00012515) popup_clock_analogue_window_g1

0x943a,	// (0x00012515) popup_clock_analogue_window_g2

0x6760,	// (0x0000f83b) popup_clock_analogue_window_g3

0x6769,	// (0x0000f844) popup_clock_analogue_window_g4

0x7d99,	// (0x00010e74) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x000187ea) popup_clock_analogue_window_g

0x6771,	// (0x0000f84c) popup_clock_analogue_window_t1

0x677f,	// (0x0000f85a) clock_digital_number_pane_ParamLimits

0x677f,	// (0x0000f85a) clock_digital_number_pane

0x678b,	// (0x0000f866) clock_digital_number_pane_cp02_ParamLimits

0x678b,	// (0x0000f866) clock_digital_number_pane_cp02

0x6797,	// (0x0000f872) clock_digital_number_pane_cp03_ParamLimits

0x6797,	// (0x0000f872) clock_digital_number_pane_cp03

0x67a3,	// (0x0000f87e) clock_digital_number_pane_cp04_ParamLimits

0x67a3,	// (0x0000f87e) clock_digital_number_pane_cp04

0x67af,	// (0x0000f88a) clock_digital_separator_pane_ParamLimits

0x67af,	// (0x0000f88a) clock_digital_separator_pane

0x67bb,	// (0x0000f896) popup_clock_digital_window_t1_ParamLimits

0x67bb,	// (0x0000f896) popup_clock_digital_window_t1

0x7d99,	// (0x00010e74) clock_digital_number_pane_g1

0x7d99,	// (0x00010e74) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x000187f5) clock_digital_number_pane_g

0x7d99,	// (0x00010e74) clock_digital_separator_pane_g1

0x7d99,	// (0x00010e74) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x000187f5) clock_digital_separator_pane_g

0xa3de,	// (0x000134b9) aid_fill_nsta_ParamLimits

0xa524,	// (0x000135ff) indicator_nsta_pane_ParamLimits

0xa696,	// (0x00013771) popup_clock_analogue_window

0xa696,	// (0x00013771) popup_clock_digital_window

0x7e83,	// (0x00010f5e) grid_indicator_nsta_pane_ParamLimits

0xcc3c,	// (0x00015d17) clock_nsta_pane_t2

0x0001,

0xfaad,	// (0x00018b88) clock_nsta_pane_t

0x6724,	// (0x0000f7ff) aid_size_max_handle

0x672e,	// (0x0000f809) aid_size_min_handle

0x9aa7,	// (0x00012b82) editor_scroll_pane

0xdc74,	// (0x00016d4f) ex_editor_pane

0x8f4f,	// (0x0001202a) scroll_pane_cp13

0x868f,	// (0x0001176a) scroll_pane_cp14

0x9464,	// (0x0001253f) scroll_pane_cp36

0x948e,	// (0x00012569) list_single_graphic_hl_pane_cp2_ParamLimits

0x948e,	// (0x00012569) list_single_graphic_hl_pane_cp2

0xc051,	// (0x0001512c) list_single_graphic_hl_pane_ParamLimits

0xc051,	// (0x0001512c) list_single_graphic_hl_pane

0xdc7c,	// (0x00016d57) aid_size_min_hl_cp1

0xdc85,	// (0x00016d60) list_highlight_pane_cp34_ParamLimits

0xdc85,	// (0x00016d60) list_highlight_pane_cp34

0xdc96,	// (0x00016d71) list_single_graphic_hl_pane_g1_ParamLimits

0xdc96,	// (0x00016d71) list_single_graphic_hl_pane_g1

0xdca3,	// (0x00016d7e) list_single_graphic_hl_pane_g2_ParamLimits

0xdca3,	// (0x00016d7e) list_single_graphic_hl_pane_g2

0xdca3,	// (0x00016d7e) list_single_graphic_hl_pane_g3_ParamLimits

0xdca3,	// (0x00016d7e) list_single_graphic_hl_pane_g3

0x99de,	// (0x00012ab9) list_single_graphic_hl_pane_g4_ParamLimits

0x99de,	// (0x00012ab9) list_single_graphic_hl_pane_g4

0xdcaf,	// (0x00016d8a) list_single_graphic_hl_pane_g5_ParamLimits

0xdcaf,	// (0x00016d8a) list_single_graphic_hl_pane_g5

0x0004,

0xfbf8,	// (0x00018cd3) list_single_graphic_hl_pane_g_ParamLimits

0xfbf8,	// (0x00018cd3) list_single_graphic_hl_pane_g

0xb66c,	// (0x00014747) list_single_graphic_hl_pane_t1_ParamLimits

0xb66c,	// (0x00014747) list_single_graphic_hl_pane_t1

0xdcc3,	// (0x00016d9e) aid_size_min_hl_cp2

0xdccc,	// (0x00016da7) list_highlight_pane_cp34_cp2_ParamLimits

0xdccc,	// (0x00016da7) list_highlight_pane_cp34_cp2

0xdc96,	// (0x00016d71) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xdc96,	// (0x00016d71) list_single_graphic_hl_pane_g1_cp2

0xdcd9,	// (0x00016db4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xdcd9,	// (0x00016db4) list_single_graphic_hl_pane_g2_cp2

0xdce5,	// (0x00016dc0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xdce5,	// (0x00016dc0) list_single_graphic_hl_pane_g3_cp2

0x99de,	// (0x00012ab9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x99de,	// (0x00012ab9) list_single_graphic_hl_pane_g4_cp2

0xdcaf,	// (0x00016d8a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xdcaf,	// (0x00016d8a) list_single_graphic_hl_pane_g5_cp2

0x6a6b,	// (0x0000fb46) control_pane_g4_ParamLimits

0x6a6b,	// (0x0000fb46) control_pane_g4

0x9e2d,	// (0x00012f08) bg_popup_sub_pane_cp10_ParamLimits

0xd2ed,	// (0x000163c8) list_choice_list_pane_ParamLimits

0xd2fc,	// (0x000163d7) scroll_pane_cp23

0x8126,	// (0x00011201) bg_popup_preview_window_pane_cp02_ParamLimits

0xd907,	// (0x000169e2) list_preview_fixed_pane_ParamLimits

0xd91d,	// (0x000169f8) list_preview_fixed_pane_cp_ParamLimits

0xd91d,	// (0x000169f8) list_preview_fixed_pane_cp

0xd929,	// (0x00016a04) popup_preview_fixed_window_g1_ParamLimits

0xd929,	// (0x00016a04) popup_preview_fixed_window_g1

0xd935,	// (0x00016a10) popup_preview_fixed_window_g2_ParamLimits

0xd935,	// (0x00016a10) popup_preview_fixed_window_g2

0x0002,

0xfb80,	// (0x00018c5b) popup_preview_fixed_window_g_ParamLimits

0xfb80,	// (0x00018c5b) popup_preview_fixed_window_g

0x6698,	// (0x0000f773) aid_navi_side_left_pane_ParamLimits

0x66ad,	// (0x0000f788) aid_navi_side_right_pane_ParamLimits

0x66c5,	// (0x0000f7a0) navi_icon_pane_stacon_ParamLimits

0x66d9,	// (0x0000f7b4) navi_navi_pane_stacon_ParamLimits

0x66c5,	// (0x0000f7a0) navi_text_pane_stacon_ParamLimits

0x7d8f,	// (0x00010e6a) main_text_info_pane

0xdd09,	// (0x00016de4) listscroll_text_info_pane

0xdd11,	// (0x00016dec) list_text_info_pane_ParamLimits

0xdd11,	// (0x00016dec) list_text_info_pane

0xdd20,	// (0x00016dfb) scroll_pane_cp24_ParamLimits

0xdd20,	// (0x00016dfb) scroll_pane_cp24

0xdd3e,	// (0x00016e19) list_text_info_pane_t1_ParamLimits

0xdd3e,	// (0x00016e19) list_text_info_pane_t1

0x9e77,	// (0x00012f52) popup_fast_swap2_window_ParamLimits

0x9e77,	// (0x00012f52) popup_fast_swap2_window

0xdd77,	// (0x00016e52) aid_size_cell_fast2

0x7d8f,	// (0x00010e6a) bg_popup_window_pane_cp17

0xae20,	// (0x00013efb) heading_pane_cp2

0x8366,	// (0x00011441) listscroll_fast2_pane

0xdd81,	// (0x00016e5c) grid_fast2_pane

0xdd8b,	// (0x00016e66) listscroll_fast2_pane_g1

0xdd93,	// (0x00016e6e) listscroll_fast2_pane_g2

0x0001,

0xfc03,	// (0x00018cde) listscroll_fast2_pane_g

0x8f4f,	// (0x0001202a) scroll_pane_cp26

0xdd9d,	// (0x00016e78) cell_fast2_pane_ParamLimits

0xdd9d,	// (0x00016e78) cell_fast2_pane

0xddb2,	// (0x00016e8d) cell_fast2_pane_g1

0xddbb,	// (0x00016e96) cell_fast2_pane_g2

0xddc4,	// (0x00016e9f) cell_fast2_pane_g3

0x0002,

0xfc08,	// (0x00018ce3) cell_fast2_pane_g

0x844c,	// (0x00011527) grid_highlight_pane_cp9

0x8461,	// (0x0001153c) main_eswt_pane_ParamLimits

0x8461,	// (0x0001153c) main_eswt_pane

0xdd35,	// (0x00016e10) list_single_text_info_pane

0xddcc,	// (0x00016ea7) eswt_ctrl_button_pane

0xddcc,	// (0x00016ea7) eswt_ctrl_canvas_pane

0xddd4,	// (0x00016eaf) eswt_ctrl_combo_pane

0xddcc,	// (0x00016ea7) eswt_ctrl_default_pane

0xddcc,	// (0x00016ea7) eswt_ctrl_label_pane

0xdddc,	// (0x00016eb7) eswt_ctrl_wait_pane

0xdde4,	// (0x00016ebf) eswt_shell_pane

0x7d8f,	// (0x00010e6a) listscroll_eswt_app_pane

0xde04,	// (0x00016edf) popup_eswt_tasktip_window_ParamLimits

0xde04,	// (0x00016edf) popup_eswt_tasktip_window

0xa9f9,	// (0x00013ad4) bg_popup_window_pane_cp18

0xde15,	// (0x00016ef0) eswt_control_pane_g1_ParamLimits

0xde15,	// (0x00016ef0) eswt_control_pane_g1

0xde22,	// (0x00016efd) eswt_control_pane_g2_ParamLimits

0xde22,	// (0x00016efd) eswt_control_pane_g2

0xde2f,	// (0x00016f0a) eswt_control_pane_g3_ParamLimits

0xde2f,	// (0x00016f0a) eswt_control_pane_g3

0xde3c,	// (0x00016f17) eswt_control_pane_g4_ParamLimits

0xde3c,	// (0x00016f17) eswt_control_pane_g4

0x0003,

0xfc0f,	// (0x00018cea) eswt_control_pane_g_ParamLimits

0xfc0f,	// (0x00018cea) eswt_control_pane_g

0x8c5c,	// (0x00011d37) bg_button_pane_ParamLimits

0x8c5c,	// (0x00011d37) bg_button_pane

0x8461,	// (0x0001153c) common_borders_pane_copy2_ParamLimits

0x8461,	// (0x0001153c) common_borders_pane_copy2

0xde49,	// (0x00016f24) control_button_pane_g1_ParamLimits

0xde49,	// (0x00016f24) control_button_pane_g1

0xde55,	// (0x00016f30) control_button_pane_g2_ParamLimits

0xde55,	// (0x00016f30) control_button_pane_g2

0xde61,	// (0x00016f3c) control_button_pane_g3_ParamLimits

0xde61,	// (0x00016f3c) control_button_pane_g3

0x0002,

0xfc18,	// (0x00018cf3) control_button_pane_g_ParamLimits

0xfc18,	// (0x00018cf3) control_button_pane_g

0xde75,	// (0x00016f50) control_button_pane_t1

0xde83,	// (0x00016f5e) control_button_pane_t2

0x0001,

0xfc1f,	// (0x00018cfa) control_button_pane_t

0xa8df,	// (0x000139ba) bg_button_pane_g1

0xa8ef,	// (0x000139ca) bg_button_pane_g2

0xa8e7,	// (0x000139c2) bg_button_pane_g3

0xa8ff,	// (0x000139da) bg_button_pane_g4

0xa8f7,	// (0x000139d2) bg_button_pane_g5

0xa907,	// (0x000139e2) bg_button_pane_g6

0xa90f,	// (0x000139ea) bg_button_pane_g7

0xa91f,	// (0x000139fa) bg_button_pane_g8

0xa917,	// (0x000139f2) bg_button_pane_g9

0x0008,

0xf872,	// (0x0001894d) bg_button_pane_g

0xd2a8,	// (0x00016383) common_borders_pane_ParamLimits

0xd2a8,	// (0x00016383) common_borders_pane

0xde15,	// (0x00016ef0) eswt_control_pane_g1_copy1_ParamLimits

0xde15,	// (0x00016ef0) eswt_control_pane_g1_copy1

0xde22,	// (0x00016efd) eswt_control_pane_g2_copy1_ParamLimits

0xde22,	// (0x00016efd) eswt_control_pane_g2_copy1

0xde2f,	// (0x00016f0a) eswt_control_pane_g3_copy1_ParamLimits

0xde2f,	// (0x00016f0a) eswt_control_pane_g3_copy1

0xde3c,	// (0x00016f17) eswt_control_pane_g4_copy1_ParamLimits

0xde3c,	// (0x00016f17) eswt_control_pane_g4_copy1

0xd2e3,	// (0x000163be) bg_eswt_ctrl_canvas_pane_g1

0xd2a8,	// (0x00016383) common_borders_pane_cp2_ParamLimits

0xd2a8,	// (0x00016383) common_borders_pane_cp2

0xd2a8,	// (0x00016383) common_borders_pane_cp3_ParamLimits

0xd2a8,	// (0x00016383) common_borders_pane_cp3

0xde91,	// (0x00016f6c) separator_horizontal_pane

0xde99,	// (0x00016f74) separator_vertical_pane

0xde15,	// (0x00016ef0) eswt_control_pane_g1_copy2_ParamLimits

0xde15,	// (0x00016ef0) eswt_control_pane_g1_copy2

0xde22,	// (0x00016efd) eswt_control_pane_g2_copy2_ParamLimits

0xde22,	// (0x00016efd) eswt_control_pane_g2_copy2

0xde2f,	// (0x00016f0a) eswt_control_pane_g3_copy2_ParamLimits

0xde2f,	// (0x00016f0a) eswt_control_pane_g3_copy2

0xde3c,	// (0x00016f17) eswt_control_pane_g4_copy2_ParamLimits

0xde3c,	// (0x00016f17) eswt_control_pane_g4_copy2

0x7d8f,	// (0x00010e6a) common_borders_pane_cp4

0xdea2,	// (0x00016f7d) separator_horizontal_pane_g1

0xdeab,	// (0x00016f86) separator_horizontal_pane_g2

0xdeb4,	// (0x00016f8f) separator_horizontal_pane_g3

0x0002,

0xfc24,	// (0x00018cff) separator_horizontal_pane_g

0xde15,	// (0x00016ef0) eswt_control_pane_g1_copy3_ParamLimits

0xde15,	// (0x00016ef0) eswt_control_pane_g1_copy3

0xde22,	// (0x00016efd) eswt_control_pane_g2_copy3_ParamLimits

0xde22,	// (0x00016efd) eswt_control_pane_g2_copy3

0xde2f,	// (0x00016f0a) eswt_control_pane_g3_copy3_ParamLimits

0xde2f,	// (0x00016f0a) eswt_control_pane_g3_copy3

0xde3c,	// (0x00016f17) eswt_control_pane_g4_copy3_ParamLimits

0xde3c,	// (0x00016f17) eswt_control_pane_g4_copy3

0x7d8f,	// (0x00010e6a) common_borders_pane_cp5

0xdebd,	// (0x00016f98) separator_vertical_pane_g1

0xdec6,	// (0x00016fa1) separator_vertical_pane_g2

0xdecf,	// (0x00016faa) separator_vertical_pane_g3

0x0002,

0xfc2b,	// (0x00018d06) separator_vertical_pane_g

0xde15,	// (0x00016ef0) eswt_control_pane_g1_copy4_ParamLimits

0xde15,	// (0x00016ef0) eswt_control_pane_g1_copy4

0xde22,	// (0x00016efd) eswt_control_pane_g2_copy4_ParamLimits

0xde22,	// (0x00016efd) eswt_control_pane_g2_copy4

0xde2f,	// (0x00016f0a) eswt_control_pane_g3_copy4_ParamLimits

0xde2f,	// (0x00016f0a) eswt_control_pane_g3_copy4

0xde3c,	// (0x00016f17) eswt_control_pane_g4_copy4_ParamLimits

0xde3c,	// (0x00016f17) eswt_control_pane_g4_copy4

0xded8,	// (0x00016fb3) eswt_ctrl_combo_button_pane

0xdee0,	// (0x00016fbb) eswt_ctrl_input_pane

0xdee8,	// (0x00016fc3) popup_choice_list_window_cp70

0xdef0,	// (0x00016fcb) eswt_ctrl_input_pane_t1

0x7d8f,	// (0x00010e6a) input_focus_pane_cp70

0xd2a8,	// (0x00016383) bg_button_pane_cp70_ParamLimits

0xd2a8,	// (0x00016383) bg_button_pane_cp70

0xdefe,	// (0x00016fd9) eswt_ctrl_combo_button_pane_g1

0xdf06,	// (0x00016fe1) wait_bar_pane_cp70

0xa9f9,	// (0x00013ad4) bg_popup_window_pane_cp70_ParamLimits

0xa9f9,	// (0x00013ad4) bg_popup_window_pane_cp70

0xdf0e,	// (0x00016fe9) popup_eswt_tasktip_window_t1

0xdf24,	// (0x00016fff) wait_bar_pane_cp71_ParamLimits

0xdf24,	// (0x00016fff) wait_bar_pane_cp71

0xdf30,	// (0x0001700b) grid_eswt_app_pane

0x9270,	// (0x0001234b) scroll_pane_cp70

0xdf39,	// (0x00017014) cell_eswt_app_pane_ParamLimits

0xdf39,	// (0x00017014) cell_eswt_app_pane

0xdf6d,	// (0x00017048) cell_eswt_app_pane_g1_ParamLimits

0xdf6d,	// (0x00017048) cell_eswt_app_pane_g1

0xdf9c,	// (0x00017077) cell_eswt_app_pane_g2_ParamLimits

0xdf9c,	// (0x00017077) cell_eswt_app_pane_g2

0x0001,

0xfc32,	// (0x00018d0d) cell_eswt_app_pane_g_ParamLimits

0xfc32,	// (0x00018d0d) cell_eswt_app_pane_g

0xdfc5,	// (0x000170a0) cell_eswt_app_pane_t1_ParamLimits

0xdfc5,	// (0x000170a0) cell_eswt_app_pane_t1

0xdff7,	// (0x000170d2) grid_highlight_pane_cp70_ParamLimits

0xdff7,	// (0x000170d2) grid_highlight_pane_cp70

0x997a,	// (0x00012a55) set_content_pane_g1

0x9d4f,	// (0x00012e2a) status_small_volume_pane

0x7452,	// (0x0001052d) status_small_volume_pane_g1

0x745a,	// (0x00010535) volume_small2_pane

0x7463,	// (0x0001053e) volume_small2_pane_g1

0x746c,	// (0x00010547) volume_small2_pane_g2

0x7475,	// (0x00010550) volume_small2_pane_g3

0x747e,	// (0x00010559) volume_small2_pane_g4

0x7487,	// (0x00010562) volume_small2_pane_g5

0x7490,	// (0x0001056b) volume_small2_pane_g6

0x7499,	// (0x00010574) volume_small2_pane_g7

0x74a2,	// (0x0001057d) volume_small2_pane_g8

0x74ab,	// (0x00010586) volume_small2_pane_g9

0x74b4,	// (0x0001058f) volume_small2_pane_g10

0x0009,

0xfc37,	// (0x00018d12) volume_small2_pane_g

0xd6c4,	// (0x0001679f) fep_vkb_top_text_pane_g1_ParamLimits

0xd6df,	// (0x000167ba) fep_vkb_top_text_pane_t1_ParamLimits

0xd941,	// (0x00016a1c) popup_preview_fixed_window_g3_ParamLimits

0xd941,	// (0x00016a1c) popup_preview_fixed_window_g3

0xa316,	// (0x000133f1) popup_toolbar_trans_pane

0xbdba,	// (0x00014e95) aid_height_set_list_ParamLimits

0xbdcb,	// (0x00014ea6) aid_size_parent_ParamLimits

0x9e2d,	// (0x00012f08) list_highlight_pane_cp2_ParamLimits

0x997a,	// (0x00012a55) set_content_pane_g1_ParamLimits

0xc074,	// (0x0001514f) list_single_image_pane_ParamLimits

0xc074,	// (0x0001514f) list_single_image_pane

0xe003,	// (0x000170de) aid_size_cell_image_ParamLimits

0xe003,	// (0x000170de) aid_size_cell_image

0xe010,	// (0x000170eb) grid_single_image_pane_ParamLimits

0xe010,	// (0x000170eb) grid_single_image_pane

0x8c82,	// (0x00011d5d) list_single_image_pane_g1_ParamLimits

0x8c82,	// (0x00011d5d) list_single_image_pane_g1

0x8c8e,	// (0x00011d69) list_single_image_pane_g2_ParamLimits

0x8c8e,	// (0x00011d69) list_single_image_pane_g2

0x0001,

0xfc4c,	// (0x00018d27) list_single_image_pane_g_ParamLimits

0xfc4c,	// (0x00018d27) list_single_image_pane_g

0xe01c,	// (0x000170f7) list_single_image_pane_t1_ParamLimits

0xe01c,	// (0x000170f7) list_single_image_pane_t1

0xe032,	// (0x0001710d) cell_image_list_pane_ParamLimits

0xe032,	// (0x0001710d) cell_image_list_pane

0xe046,	// (0x00017121) cell_image_list_pane_g1

0xe04f,	// (0x0001712a) cell_image_list_pane_g2

0x0001,

0xfc51,	// (0x00018d2c) cell_image_list_pane_g

0xe058,	// (0x00017133) aid_size_cell_tb_trans_pane

0x8c5c,	// (0x00011d37) bg_tb_trans_pane

0xe06a,	// (0x00017145) grid_tb_trans_pane

0xa8df,	// (0x000139ba) bg_tb_trans_pane_g1

0xa8ef,	// (0x000139ca) bg_tb_trans_pane_g2

0xa8e7,	// (0x000139c2) bg_tb_trans_pane_g3

0xa8ff,	// (0x000139da) bg_tb_trans_pane_g4

0xa8f7,	// (0x000139d2) bg_tb_trans_pane_g5

0xa91f,	// (0x000139fa) bg_tb_trans_pane_g6

0xa917,	// (0x000139f2) bg_tb_trans_pane_g7

0xa907,	// (0x000139e2) bg_tb_trans_pane_g8

0xa90f,	// (0x000139ea) bg_tb_trans_pane_g9

0x0008,

0xfc56,	// (0x00018d31) bg_tb_trans_pane_g

0xe07e,	// (0x00017159) cell_toolbar_trans_pane_ParamLimits

0xe07e,	// (0x00017159) cell_toolbar_trans_pane

0xd2e3,	// (0x000163be) cell_toolbar_trans_pane_g1

0xce2e,	// (0x00015f09) list_form2_midp_pane_t1

0xce3c,	// (0x00015f17) list_form2_midp_pane_t2

0x0001,

0xfaf3,	// (0x00018bce) list_form2_midp_pane_t

0xce4a,	// (0x00015f25) scroll_pane_cp51_ParamLimits

0xd04d,	// (0x00016128) form2_midp_wait_pane_g1

0xd056,	// (0x00016131) form2_midp_wait_pane_g2

0xd05f,	// (0x0001613a) form2_midp_wait_pane_g3

0x0002,

0xfb08,	// (0x00018be3) form2_midp_wait_pane_g

0x7e83,	// (0x00010f5e) list_highlight_pane_cp21_ParamLimits

0xd0ae,	// (0x00016189) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xd0bd,	// (0x00016198) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xbfe0,	// (0x000150bb) list_single_2graphic_im_pane_ParamLimits

0xbfe0,	// (0x000150bb) list_single_2graphic_im_pane

0xe0a4,	// (0x0001717f) list_single_2graphic_im_pane_g1_ParamLimits

0xe0a4,	// (0x0001717f) list_single_2graphic_im_pane_g1

0xe0b5,	// (0x00017190) list_single_2graphic_im_pane_g2_ParamLimits

0xe0b5,	// (0x00017190) list_single_2graphic_im_pane_g2

0xe0c1,	// (0x0001719c) list_single_2graphic_im_pane_g3_ParamLimits

0xe0c1,	// (0x0001719c) list_single_2graphic_im_pane_g3

0x0003,

0xfc69,	// (0x00018d44) list_single_2graphic_im_pane_g_ParamLimits

0xfc69,	// (0x00018d44) list_single_2graphic_im_pane_g

0xe0e1,	// (0x000171bc) list_single_2graphic_im_pane_t1_ParamLimits

0xe0e1,	// (0x000171bc) list_single_2graphic_im_pane_t1

0xd94d,	// (0x00016a28) list_single_graphic_2heading_pane_fp_ParamLimits

0xd94d,	// (0x00016a28) list_single_graphic_2heading_pane_fp

0xd993,	// (0x00016a6e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd993,	// (0x00016a6e) list_single_graphic_2heading_pane_fp_g1

0xd964,	// (0x00016a3f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd964,	// (0x00016a3f) list_single_graphic_2heading_pane_fp_g2

0x8c82,	// (0x00011d5d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8c82,	// (0x00011d5d) list_single_graphic_2heading_pane_fp_g3

0x8c8e,	// (0x00011d69) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8c8e,	// (0x00011d69) list_single_graphic_2heading_pane_fp_g4

0xd970,	// (0x00016a4b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd970,	// (0x00016a4b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb90,	// (0x00018c6b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb90,	// (0x00018c6b) list_single_graphic_2heading_pane_fp_g

0xe112,	// (0x000171ed) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe112,	// (0x000171ed) list_single_graphic_2heading_pane_fp_t1

0xd9cb,	// (0x00016aa6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd9cb,	// (0x00016aa6) list_single_graphic_2heading_pane_fp_t2

0xe128,	// (0x00017203) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe128,	// (0x00017203) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc72,	// (0x00018d4d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc72,	// (0x00018d4d) list_single_graphic_2heading_pane_fp_t

0xd383,	// (0x0001645e) fep_hwr_write_pane_g5_ParamLimits

0xd383,	// (0x0001645e) fep_hwr_write_pane_g5

0xd38f,	// (0x0001646a) fep_hwr_write_pane_g6_ParamLimits

0xd38f,	// (0x0001646a) fep_hwr_write_pane_g6

0xdde4,	// (0x00016ebf) eswt_shell_pane_ParamLimits

0xa9f9,	// (0x00013ad4) bg_popup_window_pane_cp18_ParamLimits

0xbcf1,	// (0x00014dcc) heading_pane_cp70

0xdf0e,	// (0x00016fe9) popup_eswt_tasktip_window_t1_ParamLimits

0xa433,	// (0x0001350e) aid_touch_tab_arrow_left

0xa442,	// (0x0001351d) aid_touch_tab_arrow_right

0x7dcb,	// (0x00010ea6) title_pane_g3_ParamLimits

0x7dcb,	// (0x00010ea6) title_pane_g3

0x8b49,	// (0x00011c24) set_value_pane_g1

0xa316,	// (0x000133f1) popup_toolbar_trans_pane_ParamLimits

0xe058,	// (0x00017133) aid_size_cell_tb_trans_pane_ParamLimits

0x8c5c,	// (0x00011d37) bg_tb_trans_pane_ParamLimits

0xe06a,	// (0x00017145) grid_tb_trans_pane_ParamLimits

0x8126,	// (0x00011201) cont_note_pane_ParamLimits

0x8126,	// (0x00011201) cont_note_pane

0x8461,	// (0x0001153c) cont_snote2_single_text_pane_ParamLimits

0x8461,	// (0x0001153c) cont_snote2_single_text_pane

0x8461,	// (0x0001153c) cont_snote2_single_graphic_pane_ParamLimits

0x8461,	// (0x0001153c) cont_snote2_single_graphic_pane

0xb036,	// (0x00014111) cont_note_wait_pane_ParamLimits

0xb036,	// (0x00014111) cont_note_wait_pane

0xb036,	// (0x00014111) cont_note_image_pane_ParamLimits

0xb036,	// (0x00014111) cont_note_image_pane

0xe13e,	// (0x00017219) popup_note2_window_g1_ParamLimits

0xe13e,	// (0x00017219) popup_note2_window_g1

0xe16f,	// (0x0001724a) popup_note2_window_t1_ParamLimits

0xe16f,	// (0x0001724a) popup_note2_window_t1

0xe1b4,	// (0x0001728f) popup_note2_window_t2_ParamLimits

0xe1b4,	// (0x0001728f) popup_note2_window_t2

0xe1f9,	// (0x000172d4) popup_note2_window_t3_ParamLimits

0xe1f9,	// (0x000172d4) popup_note2_window_t3

0xe23e,	// (0x00017319) popup_note2_window_t4_ParamLimits

0xe23e,	// (0x00017319) popup_note2_window_t4

0x819e,	// (0x00011279) popup_note2_window_t5_ParamLimits

0x819e,	// (0x00011279) popup_note2_window_t5

0x0004,

0xfc7e,	// (0x00018d59) popup_note2_window_t_ParamLimits

0xfc7e,	// (0x00018d59) popup_note2_window_t

0xe26d,	// (0x00017348) popup_note2_image_window_g1_ParamLimits

0xe26d,	// (0x00017348) popup_note2_image_window_g1

0xe279,	// (0x00017354) popup_note2_image_window_g2_ParamLimits

0xe279,	// (0x00017354) popup_note2_image_window_g2

0x0001,

0xfc89,	// (0x00018d64) popup_note2_image_window_g_ParamLimits

0xfc89,	// (0x00018d64) popup_note2_image_window_g

0xe28b,	// (0x00017366) popup_note2_image_window_t1_ParamLimits

0xe28b,	// (0x00017366) popup_note2_image_window_t1

0xe2a3,	// (0x0001737e) popup_note2_image_window_t2_ParamLimits

0xe2a3,	// (0x0001737e) popup_note2_image_window_t2

0xe2bb,	// (0x00017396) popup_note2_image_window_t3_ParamLimits

0xe2bb,	// (0x00017396) popup_note2_image_window_t3

0x0002,

0xfc8e,	// (0x00018d69) popup_note2_image_window_t_ParamLimits

0xfc8e,	// (0x00018d69) popup_note2_image_window_t

0xb044,	// (0x0001411f) popup_note2_wait_window_g1_ParamLimits

0xb044,	// (0x0001411f) popup_note2_wait_window_g1

0xb050,	// (0x0001412b) popup_note2_wait_window_g2_ParamLimits

0xb050,	// (0x0001412b) popup_note2_wait_window_g2

0xb05c,	// (0x00014137) popup_note2_wait_window_g3_ParamLimits

0xb05c,	// (0x00014137) popup_note2_wait_window_g3

0x0002,

0xf854,	// (0x0001892f) popup_note2_wait_window_g_ParamLimits

0xf854,	// (0x0001892f) popup_note2_wait_window_g

0xe2d7,	// (0x000173b2) popup_note2_wait_window_t1_ParamLimits

0xe2d7,	// (0x000173b2) popup_note2_wait_window_t1

0xe2f5,	// (0x000173d0) popup_note2_wait_window_t2_ParamLimits

0xe2f5,	// (0x000173d0) popup_note2_wait_window_t2

0xe313,	// (0x000173ee) popup_note2_wait_window_t3_ParamLimits

0xe313,	// (0x000173ee) popup_note2_wait_window_t3

0xe325,	// (0x00017400) popup_note2_wait_window_t4_ParamLimits

0xe325,	// (0x00017400) popup_note2_wait_window_t4

0x0003,

0xfc95,	// (0x00018d70) popup_note2_wait_window_t_ParamLimits

0xfc95,	// (0x00018d70) popup_note2_wait_window_t

0xe337,	// (0x00017412) wait_bar2_pane_ParamLimits

0xe337,	// (0x00017412) wait_bar2_pane

0xe34f,	// (0x0001742a) popup_snote2_single_text_window_g1_ParamLimits

0xe34f,	// (0x0001742a) popup_snote2_single_text_window_g1

0xe377,	// (0x00017452) popup_snote2_single_text_window_t1_ParamLimits

0xe377,	// (0x00017452) popup_snote2_single_text_window_t1

0xe3c3,	// (0x0001749e) popup_snote2_single_text_window_t2_ParamLimits

0xe3c3,	// (0x0001749e) popup_snote2_single_text_window_t2

0xe40f,	// (0x000174ea) popup_snote2_single_text_window_t3_ParamLimits

0xe40f,	// (0x000174ea) popup_snote2_single_text_window_t3

0xe450,	// (0x0001752b) popup_snote2_single_text_window_t4_ParamLimits

0xe450,	// (0x0001752b) popup_snote2_single_text_window_t4

0xe486,	// (0x00017561) popup_snote2_single_text_window_t5_ParamLimits

0xe486,	// (0x00017561) popup_snote2_single_text_window_t5

0x0004,

0xfc9e,	// (0x00018d79) popup_snote2_single_text_window_t_ParamLimits

0xfc9e,	// (0x00018d79) popup_snote2_single_text_window_t

0xe4b1,	// (0x0001758c) popup_snote2_single_graphic_window_g1_ParamLimits

0xe4b1,	// (0x0001758c) popup_snote2_single_graphic_window_g1

0xe4d9,	// (0x000175b4) popup_snote2_single_graphic_window_g2_ParamLimits

0xe4d9,	// (0x000175b4) popup_snote2_single_graphic_window_g2

0x0001,

0xfca9,	// (0x00018d84) popup_snote2_single_graphic_window_g_ParamLimits

0xfca9,	// (0x00018d84) popup_snote2_single_graphic_window_g

0xe501,	// (0x000175dc) popup_snote2_single_graphic_window_t1_ParamLimits

0xe501,	// (0x000175dc) popup_snote2_single_graphic_window_t1

0xe54d,	// (0x00017628) popup_snote2_single_graphic_window_t2_ParamLimits

0xe54d,	// (0x00017628) popup_snote2_single_graphic_window_t2

0xe40f,	// (0x000174ea) popup_snote2_single_graphic_window_t3_ParamLimits

0xe40f,	// (0x000174ea) popup_snote2_single_graphic_window_t3

0xe450,	// (0x0001752b) popup_snote2_single_graphic_window_t4_ParamLimits

0xe450,	// (0x0001752b) popup_snote2_single_graphic_window_t4

0xe486,	// (0x00017561) popup_snote2_single_graphic_window_t5_ParamLimits

0xe486,	// (0x00017561) popup_snote2_single_graphic_window_t5

0x0004,

0xfcae,	// (0x00018d89) popup_snote2_single_graphic_window_t_ParamLimits

0xfcae,	// (0x00018d89) popup_snote2_single_graphic_window_t

0xccff,	// (0x00015dda) clock_nsta_pane_cp2_t1

0xccff,	// (0x00015dda) clock_nsta_pane_cp2_t2

0x0001,

0xfac9,	// (0x00018ba4) clock_nsta_pane_cp2_t

0x8c76,	// (0x00011d51) form_field_data_wide_pane_g1_ParamLimits

0x8c82,	// (0x00011d5d) form_field_data_wide_pane_g2_ParamLimits

0x8c82,	// (0x00011d5d) form_field_data_wide_pane_g2

0x8c8e,	// (0x00011d69) form_field_data_wide_pane_g3_ParamLimits

0x8c8e,	// (0x00011d69) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0001876d) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0001876d) form_field_data_wide_pane_g

0xcbd8,	// (0x00015cb3) grid_touch_3_pane_ParamLimits

0xcbd8,	// (0x00015cb3) grid_touch_3_pane

0xe599,	// (0x00017674) cell_touch_3_pane_ParamLimits

0xe599,	// (0x00017674) cell_touch_3_pane

0xd2e3,	// (0x000163be) cell_touch_3_pane_g1

0xd2e3,	// (0x000163be) cell_touch_3_pane_g2

0x0001,

0xfb4e,	// (0x00018c29) cell_touch_3_pane_g

0x81d0,	// (0x000112ab) cont_query_data_pane

0x81d8,	// (0x000112b3) cont_query_data_pane_cp1

0xe5c8,	// (0x000176a3) button_value_adjust_pane_cp7

0xe5d0,	// (0x000176ab) query_popup_pane_cp3

0x94fb,	// (0x000125d6) bg_popup_sub_pane_cp22_ParamLimits

0x67da,	// (0x0000f8b5) navi_navi_volume_pane_cp2

0x67f5,	// (0x0000f8d0) popup_side_volume_key_window_g2

0x6804,	// (0x0000f8df) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x000187ff) popup_side_volume_key_window_g

0x6821,	// (0x0000f8fc) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x00018806) popup_side_volume_key_window_t

0x9844,	// (0x0001291f) popup_side_volume_key_window_ParamLimits

0x8874,	// (0x0001194f) list_double_graphic_pane_g4_ParamLimits

0x8874,	// (0x0001194f) list_double_graphic_pane_g4

0xc02b,	// (0x00015106) list_single_2heading_msg_pane_ParamLimits

0xc02b,	// (0x00015106) list_single_2heading_msg_pane

0xe5ff,	// (0x000176da) list_single_2heading_msg_pane_g1_ParamLimits

0xe5ff,	// (0x000176da) list_single_2heading_msg_pane_g1

0x86a3,	// (0x0001177e) list_single_2heading_msg_pane_g2_ParamLimits

0x86a3,	// (0x0001177e) list_single_2heading_msg_pane_g2

0xe60b,	// (0x000176e6) list_single_2heading_msg_pane_g3_ParamLimits

0xe60b,	// (0x000176e6) list_single_2heading_msg_pane_g3

0xe617,	// (0x000176f2) list_single_2heading_msg_pane_g4_ParamLimits

0xe617,	// (0x000176f2) list_single_2heading_msg_pane_g4

0x0003,

0xfcb9,	// (0x00018d94) list_single_2heading_msg_pane_g_ParamLimits

0xfcb9,	// (0x00018d94) list_single_2heading_msg_pane_g

0xe62f,	// (0x0001770a) list_single_2heading_msg_pane_t1_ParamLimits

0xe62f,	// (0x0001770a) list_single_2heading_msg_pane_t1

0xe657,	// (0x00017732) list_single_2heading_msg_pane_t2_ParamLimits

0xe657,	// (0x00017732) list_single_2heading_msg_pane_t2

0xe68b,	// (0x00017766) list_single_2heading_msg_pane_t3_ParamLimits

0xe68b,	// (0x00017766) list_single_2heading_msg_pane_t3

0xe6c4,	// (0x0001779f) list_single_2heading_msg_pane_t4_ParamLimits

0xe6c4,	// (0x0001779f) list_single_2heading_msg_pane_t4

0x0003,

0xfcc2,	// (0x00018d9d) list_single_2heading_msg_pane_t_ParamLimits

0xfcc2,	// (0x00018d9d) list_single_2heading_msg_pane_t

0x7dd7,	// (0x00010eb2) title_pane_g4_ParamLimits

0x7dd7,	// (0x00010eb2) title_pane_g4

0x65e8,	// (0x0000f6c3) title_pane_stacon_g3_ParamLimits

0x65e8,	// (0x0000f6c3) title_pane_stacon_g3

0xe0d5,	// (0x000171b0) list_single_2graphic_im_pane_g4_ParamLimits

0xe0d5,	// (0x000171b0) list_single_2graphic_im_pane_g4

0xba97,	// (0x00014b72) popup_side_volume_key_window_cp

0xc3a6,	// (0x00015481) main_idle_act2_pane_t1

0x6c01,	// (0x0000fcdc) toolbar_button_pane_g10

0x8659,	// (0x00011734) popup_toolbar_window_cp1

0xccf0,	// (0x00015dcb) clock_nsta_pane_cp_t1

0xccf0,	// (0x00015dcb) clock_nsta_pane_cp_t2

0x0001,

0xfac4,	// (0x00018b9f) clock_nsta_pane_cp_t

0x67da,	// (0x0000f8b5) navi_navi_volume_pane_cp2_ParamLimits

0x67e9,	// (0x0000f8c4) popup_side_volume_key_window_g1_ParamLimits

0x67f5,	// (0x0000f8d0) popup_side_volume_key_window_g2_ParamLimits

0x6804,	// (0x0000f8df) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x000187ff) popup_side_volume_key_window_g_ParamLimits

0x70be,	// (0x00010199) fep_hwr_aid_pane

0x7165,	// (0x00010240) bg_fep_hwr_top_pane_g4_ParamLimits

0xd353,	// (0x0001642e) fep_hwr_top_pane_g1_ParamLimits

0xd365,	// (0x00016440) fep_hwr_top_pane_g2_ParamLimits

0x7185,	// (0x00010260) fep_hwr_top_pane_g3_ParamLimits

0xfb19,	// (0x00018bf4) fep_hwr_top_pane_g_ParamLimits

0x719a,	// (0x00010275) fep_hwr_top_text_pane_ParamLimits

0xb858,	// (0x00014933) aid_touch_tab_arrow_arrow_2

0xb861,	// (0x0001493c) aid_touch_tab_arrow_left_2

0x70d2,	// (0x000101ad) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7109,	// (0x000101e4) fep_hwr_prediction_pane

0xd4cc,	// (0x000165a7) fep_vkb_prediction_pane

0xd5d0,	// (0x000166ab) fep_vkb_side_pane_g3_ParamLimits

0xd5d0,	// (0x000166ab) fep_vkb_side_pane_g3

0x7315,	// (0x000103f0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7381,	// (0x0001045c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x738e,	// (0x00010469) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc8,	// (0x00018ca3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x74bd,	// (0x00010598) fep_hwr_prediction_pane_g1

0x74c7,	// (0x000105a2) fep_hwr_prediction_pane_g2

0xd34b,	// (0x00016426) fep_hwr_prediction_pane_g3

0x74cf,	// (0x000105aa) fep_hwr_prediction_pane_g4

0x0003,

0xfccb,	// (0x00018da6) fep_hwr_prediction_pane_g

0xe6e9,	// (0x000177c4) fep_vkb_prediction_pane_g1

0xe6f3,	// (0x000177ce) fep_vkb_prediction_pane_g2

0xe6fb,	// (0x000177d6) fep_vkb_prediction_pane_g3

0xe703,	// (0x000177de) fep_vkb_prediction_pane_g4

0x0003,

0xfcd4,	// (0x00018daf) fep_vkb_prediction_pane_g

0x6eed,	// (0x0000ffc8) slider_set_pane_g3

0x6f01,	// (0x0000ffdc) slider_set_pane_g4

0x6f19,	// (0x0000fff4) slider_set_pane_g5

0x6eed,	// (0x0000ffc8) slider_set_pane_g6

0x6f2f,	// (0x0001000a) slider_set_pane_g7

0xbf28,	// (0x00015003) slider_form_pane_g3

0xbf31,	// (0x0001500c) slider_form_pane_g4

0xbf39,	// (0x00015014) slider_form_pane_g5

0xbf28,	// (0x00015003) slider_form_pane_g6

0xbf41,	// (0x0001501c) slider_form_pane_g7

0xc67a,	// (0x00015755) slider_set_pane_vc_g3

0xc683,	// (0x0001575e) slider_set_pane_vc_g4

0xc68c,	// (0x00015767) slider_set_pane_vc_g5

0xc67a,	// (0x00015755) slider_set_pane_vc_g6

0xc695,	// (0x00015770) slider_set_pane_vc_g7

0xc67a,	// (0x00015755) slider_form_pane_vc_g1

0xc683,	// (0x0001575e) slider_form_pane_vc_g2

0xc68c,	// (0x00015767) slider_form_pane_vc_g3

0xc67a,	// (0x00015755) slider_form_pane_vc_g4

0xc9f6,	// (0x00015ad1) slider_form_pane_vc_g5

0x0004,

0xfa9d,	// (0x00018b78) slider_form_pane_vc_g

0x7d8f,	// (0x00010e6a) main_idle_act3_pane

0xe70b,	// (0x000177e6) ai3_links_pane

0xe714,	// (0x000177ef) popup_ai3_data_window_ParamLimits

0xe714,	// (0x000177ef) popup_ai3_data_window

0x7d8f,	// (0x00010e6a) grid_ai3_links_pane

0xe72c,	// (0x00017807) cell_ai3_links_pane_ParamLimits

0xe72c,	// (0x00017807) cell_ai3_links_pane

0xe744,	// (0x0001781f) bg_popup_sub_pane_cp11

0xe751,	// (0x0001782c) cell_ai3_links_pane_g1

0x7d8f,	// (0x00010e6a) bg_popup_sub_pane_cp12

0xe776,	// (0x00017851) heading_ai3_data_pane

0xe77e,	// (0x00017859) list_ai3_gene_pane

0xe78a,	// (0x00017865) popup_ai3_data_window_g1

0xe792,	// (0x0001786d) heading_ai3_data_pane_g1

0xe79a,	// (0x00017875) heading_ai3_data_pane_t1

0xe7a8,	// (0x00017883) list_double_ai3_gene_pane_ParamLimits

0xe7a8,	// (0x00017883) list_double_ai3_gene_pane

0xe7b5,	// (0x00017890) list_single_ai3_gene_pane_ParamLimits

0xe7b5,	// (0x00017890) list_single_ai3_gene_pane

0xd2a8,	// (0x00016383) list_highlight_pane_cp7_ParamLimits

0xd2a8,	// (0x00016383) list_highlight_pane_cp7

0xe7c2,	// (0x0001789d) list_single_a13_gene_pane_t1_ParamLimits

0xe7c2,	// (0x0001789d) list_single_a13_gene_pane_t1

0xe7d9,	// (0x000178b4) list_single_ai3_gene_pane_g1

0xe7e2,	// (0x000178bd) list_single_ai3_gene_pane_g2

0x0001,

0xfcdd,	// (0x00018db8) list_single_ai3_gene_pane_g

0xe7ea,	// (0x000178c5) list_double_ai3_gene_pane_g1_ParamLimits

0xe7ea,	// (0x000178c5) list_double_ai3_gene_pane_g1

0xe7f6,	// (0x000178d1) list_double_ai3_gene_pane_t1_ParamLimits

0xe7f6,	// (0x000178d1) list_double_ai3_gene_pane_t1

0xe812,	// (0x000178ed) list_double_ai3_gene_pane_t2_ParamLimits

0xe812,	// (0x000178ed) list_double_ai3_gene_pane_t2

0xe827,	// (0x00017902) list_double_ai3_gene_pane_t3_ParamLimits

0xe827,	// (0x00017902) list_double_ai3_gene_pane_t3

0x0002,

0xfce2,	// (0x00018dbd) list_double_ai3_gene_pane_t_ParamLimits

0xfce2,	// (0x00018dbd) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe5e1,	// (0x000176bc) aid_size_min_col_2

0xe5eb,	// (0x000176c6) aid_size_min_msg_ParamLimits

0xe5eb,	// (0x000176c6) aid_size_min_msg

0xd6d0,	// (0x000167ab) fep_vkb_top_text_pane_g2_ParamLimits

0xd6d0,	// (0x000167ab) fep_vkb_top_text_pane_g2

0x0001,

0xfb49,	// (0x00018c24) fep_vkb_top_text_pane_g_ParamLimits

0xfb49,	// (0x00018c24) fep_vkb_top_text_pane_g

0x7d8f,	// (0x00010e6a) main_hc_apps_shell_pane

0xe844,	// (0x0001791f) grid_hc_apps_pane_ParamLimits

0xe844,	// (0x0001791f) grid_hc_apps_pane

0xe853,	// (0x0001792e) list_hc_apps_pane

0xe85b,	// (0x00017936) scroll_pane_cp37_ParamLimits

0xe85b,	// (0x00017936) scroll_pane_cp37

0xe867,	// (0x00017942) cell_hc_apps_pane_ParamLimits

0xe867,	// (0x00017942) cell_hc_apps_pane

0xe917,	// (0x000179f2) cell_hc_apps_pane_g1_ParamLimits

0xe917,	// (0x000179f2) cell_hc_apps_pane_g1

0xe948,	// (0x00017a23) cell_hc_apps_pane_g2_ParamLimits

0xe948,	// (0x00017a23) cell_hc_apps_pane_g2

0xe964,	// (0x00017a3f) cell_hc_apps_pane_g3_ParamLimits

0xe964,	// (0x00017a3f) cell_hc_apps_pane_g3

0x0002,

0xfce9,	// (0x00018dc4) cell_hc_apps_pane_g_ParamLimits

0xfce9,	// (0x00018dc4) cell_hc_apps_pane_g

0xe986,	// (0x00017a61) cell_hc_apps_pane_t1_ParamLimits

0xe986,	// (0x00017a61) cell_hc_apps_pane_t1

0x8126,	// (0x00011201) grid_highlight_pane_cp10_ParamLimits

0x8126,	// (0x00011201) grid_highlight_pane_cp10

0xe9c6,	// (0x00017aa1) list_single_hc_apps_pane_ParamLimits

0xe9c6,	// (0x00017aa1) list_single_hc_apps_pane

0xea39,	// (0x00017b14) list_single_hc_apps_pane_g1

0xea52,	// (0x00017b2d) list_single_hc_apps_pane_g2

0x0001,

0xfcf0,	// (0x00018dcb) list_single_hc_apps_pane_g

0xea6b,	// (0x00017b46) list_single_hc_apps_pane_g2_copy1

0xea87,	// (0x00017b62) list_single_hc_apps_pane_t1

0x7e83,	// (0x00010f5e) bg_set_opt_pane_cp_ParamLimits

0x6513,	// (0x0000f5ee) setting_slider_pane_t1_ParamLimits

0x652c,	// (0x0000f607) setting_slider_pane_t2_ParamLimits

0x6545,	// (0x0000f620) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00018655) setting_slider_pane_t_ParamLimits

0x655c,	// (0x0000f637) slider_set_pane_ParamLimits

0x6a7f,	// (0x0000fb5a) control_pane_g5_ParamLimits

0x6a7f,	// (0x0000fb5a) control_pane_g5

0xbd85,	// (0x00014e60) slider_set_pane_g1_ParamLimits

0x6ee1,	// (0x0000ffbc) slider_set_pane_g2_ParamLimits

0x6eed,	// (0x0000ffc8) slider_set_pane_g3_ParamLimits

0x6f01,	// (0x0000ffdc) slider_set_pane_g4_ParamLimits

0x6f19,	// (0x0000fff4) slider_set_pane_g5_ParamLimits

0x6eed,	// (0x0000ffc8) slider_set_pane_g6_ParamLimits

0x6f2f,	// (0x0001000a) slider_set_pane_g7_ParamLimits

0xf970,	// (0x00018a4b) slider_set_pane_g_ParamLimits

0x9925,	// (0x00012a00) navi_icon_text_pane_ParamLimits

0xa3f4,	// (0x000134cf) aid_fill_nsta_2_ParamLimits

0xa433,	// (0x0001350e) aid_touch_tab_arrow_left_ParamLimits

0xa442,	// (0x0001351d) aid_touch_tab_arrow_right_ParamLimits

0xa4af,	// (0x0001358a) clock_nsta_pane_ParamLimits

0xb834,	// (0x0001490f) navi_icon_pane_g1_ParamLimits

0xb843,	// (0x0001491e) navi_text_pane_t1_ParamLimits

0xce02,	// (0x00015edd) navi_icon_text_pane_g1_ParamLimits

0xce11,	// (0x00015eec) navi_icon_text_pane_t1_ParamLimits

0xea39,	// (0x00017b14) list_single_hc_apps_pane_g1_ParamLimits

0xea52,	// (0x00017b2d) list_single_hc_apps_pane_g2_ParamLimits

0xfcf0,	// (0x00018dcb) list_single_hc_apps_pane_g_ParamLimits

0xea6b,	// (0x00017b46) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xea87,	// (0x00017b62) list_single_hc_apps_pane_t1_ParamLimits

0x642d,	// (0x0000f508) popup_toolbar2_fixed_window_ParamLimits

0x642d,	// (0x0000f508) popup_toolbar2_fixed_window

0xa30c,	// (0x000133e7) popup_toolbar2_float_window

0x7d8f,	// (0x00010e6a) bg_popup_sub_pane_cp27

0xeab5,	// (0x00017b90) grid_toolbar2_float_pane

0x7d8f,	// (0x00010e6a) bg_popup_sub_pane_cp26

0xeab5,	// (0x00017b90) grid_toolbar2_fixed_pane

0xeabd,	// (0x00017b98) cell_toolbar2_fixed_pane_ParamLimits

0xeabd,	// (0x00017b98) cell_toolbar2_fixed_pane

0xeace,	// (0x00017ba9) cell_toolbar2_fixed_pane_g1

0xead7,	// (0x00017bb2) toolbar2_fixed_button_pane

0xa8df,	// (0x000139ba) toolbar2_fixed_button_pane_g1

0xa8ef,	// (0x000139ca) toolbar2_fixed_button_pane_g2

0xa8e7,	// (0x000139c2) toolbar2_fixed_button_pane_g3

0xa8ff,	// (0x000139da) toolbar2_fixed_button_pane_g4

0xa8f7,	// (0x000139d2) toolbar2_fixed_button_pane_g5

0xa907,	// (0x000139e2) toolbar2_fixed_button_pane_g6

0xa90f,	// (0x000139ea) toolbar2_fixed_button_pane_g7

0xa91f,	// (0x000139fa) toolbar2_fixed_button_pane_g8

0xa917,	// (0x000139f2) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x0001894d) toolbar2_fixed_button_pane_g

0xeadf,	// (0x00017bba) cell_toolbar2_float_pane_ParamLimits

0xeadf,	// (0x00017bba) cell_toolbar2_float_pane

0xeaf0,	// (0x00017bcb) cell_toolbar2_float_pane_g1

0xead7,	// (0x00017bb2) toolbar2_fixed_button_pane_cp

0xd425,	// (0x00016500) fep_vkb_accented_list_pane_ParamLimits

0xd425,	// (0x00016500) fep_vkb_accented_list_pane

0x72f5,	// (0x000103d0) bg_popup_fep_shadow_pane_g9

0x9aa7,	// (0x00012b82) bg_popup_fep_shadow_pane_cp3

0x8f36,	// (0x00012011) list_accented_list_pane

0xeaf9,	// (0x00017bd4) list_single_accented_list_pane_ParamLimits

0xeaf9,	// (0x00017bd4) list_single_accented_list_pane

0x9aa7,	// (0x00012b82) list_highlight_pane_cp10

0xeb0a,	// (0x00017be5) list_single_accented_list_pane_t1

0xa25c,	// (0x00013337) popup_slider_window_ParamLimits

0xa25c,	// (0x00013337) popup_slider_window

0xe5d8,	// (0x000176b3) aid_indentation_list_msg

0xebc4,	// (0x00017c9f) bg_popup_window_pane_cp19

0xec2e,	// (0x00017d09) popup_slider_window_g1

0xec4a,	// (0x00017d25) popup_slider_window_g2

0xec66,	// (0x00017d41) popup_slider_window_g3

0x0005,

0xfcf5,	// (0x00018dd0) popup_slider_window_g

0xecc2,	// (0x00017d9d) popup_slider_window_t1

0xed36,	// (0x00017e11) small_volume_slider_vertical_pane

0xd2e3,	// (0x000163be) small_volume_slider_vertical_pane_g1

0xd2e3,	// (0x000163be) small_volume_slider_vertical_pane_g2

0xed52,	// (0x00017e2d) small_volume_slider_vertical_pane_g3

0x0002,

0xfd07,	// (0x00018de2) small_volume_slider_vertical_pane_g

0x61f3,	// (0x0000f2ce) area_side_right_pane_ParamLimits

0x61f3,	// (0x0000f2ce) area_side_right_pane

0x74d7,	// (0x000105b2) aid_size_side_button_ParamLimits

0x74d7,	// (0x000105b2) aid_size_side_button

0x74eb,	// (0x000105c6) grid_sctrl_middle_pane_ParamLimits

0x74eb,	// (0x000105c6) grid_sctrl_middle_pane

0x750b,	// (0x000105e6) sctrl_sk_bottom_pane

0x751c,	// (0x000105f7) sctrl_sk_top_pane

0x752e,	// (0x00010609) aid_touch_sctrl_top

0x753b,	// (0x00010616) bg_sctrl_sk_pane_ParamLimits

0x753b,	// (0x00010616) bg_sctrl_sk_pane

0x7549,	// (0x00010624) sctrl_sk_top_pane_g1

0x7556,	// (0x00010631) sctrl_sk_top_pane_t1

0x752e,	// (0x00010609) aid_touch_sctrl_bottom

0x753b,	// (0x00010616) bg_sctrl_sk_pane_cp_ParamLimits

0x753b,	// (0x00010616) bg_sctrl_sk_pane_cp

0x7571,	// (0x0001064c) sctrl_sk_bottom_pane_g1

0x7556,	// (0x00010631) sctrl_sk_bottom_pane_t1

0x757a,	// (0x00010655) cell_sctrl_middle_pane_ParamLimits

0x757a,	// (0x00010655) cell_sctrl_middle_pane

0x7595,	// (0x00010670) aid_touch_sctrl_middle_ParamLimits

0x7595,	// (0x00010670) aid_touch_sctrl_middle

0x75a7,	// (0x00010682) bg_sctrl_middle_pane_ParamLimits

0x75a7,	// (0x00010682) bg_sctrl_middle_pane

0x7315,	// (0x000103f0) cell_sctrl_middle_pane_g1_ParamLimits

0x7315,	// (0x000103f0) cell_sctrl_middle_pane_g1

0x75b5,	// (0x00010690) cell_sctrl_middle_pane_g2_ParamLimits

0x75b5,	// (0x00010690) cell_sctrl_middle_pane_g2

0x0001,

0xfd13,	// (0x00018dee) cell_sctrl_middle_pane_g_ParamLimits

0xfd13,	// (0x00018dee) cell_sctrl_middle_pane_g

0xa8df,	// (0x000139ba) bg_sctrl_middle_pane_g1

0xa8e7,	// (0x000139c2) bg_sctrl_middle_pane_g2

0xa8ef,	// (0x000139ca) bg_sctrl_middle_pane_g3

0xa8f7,	// (0x000139d2) bg_sctrl_middle_pane_g4

0xa8ff,	// (0x000139da) bg_sctrl_middle_pane_g5

0xa907,	// (0x000139e2) bg_sctrl_middle_pane_g6

0xa90f,	// (0x000139ea) bg_sctrl_middle_pane_g7

0xa917,	// (0x000139f2) bg_sctrl_middle_pane_g8

0x0007,

0xfd18,	// (0x00018df3) bg_sctrl_middle_pane_g

0xa91f,	// (0x000139fa) bg_sctrl_middle_pane_g8_copy1

0xa8df,	// (0x000139ba) bg_sctrl_sk_pane_g1

0xa8ef,	// (0x000139ca) bg_sctrl_sk_pane_g2

0xa8e7,	// (0x000139c2) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x0001894d) bg_sctrl_sk_pane_g

0x861f,	// (0x000116fa) aid_size_touch_scroll_bar

0xa8ff,	// (0x000139da) bg_sctrl_sk_pane_g4

0xa8f7,	// (0x000139d2) bg_sctrl_sk_pane_g5

0xa907,	// (0x000139e2) bg_sctrl_sk_pane_g6

0xa90f,	// (0x000139ea) bg_sctrl_sk_pane_g7

0xa91f,	// (0x000139fa) bg_sctrl_sk_pane_g8

0xa917,	// (0x000139f2) bg_sctrl_sk_pane_g9

0x9ed5,	// (0x00012fb0) popup_fep_china_hwr2_fs_candidate_window

0x9edf,	// (0x00012fba) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9edf,	// (0x00012fba) popup_fep_china_hwr2_fs_control_window

0x7315,	// (0x000103f0) sctrl_sk_top_pane_g2

0x0001,

0xfd0e,	// (0x00018de9) sctrl_sk_top_pane_g

0xed5b,	// (0x00017e36) aid_fep_china_hwr2_fs_cell_ParamLimits

0xed5b,	// (0x00017e36) aid_fep_china_hwr2_fs_cell

0xed6d,	// (0x00017e48) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xed6d,	// (0x00017e48) bg_popup_fep_shadow_pane_cp4

0xed84,	// (0x00017e5f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xed84,	// (0x00017e5f) bg_popup_fep_shadow_pane_cp5

0xed96,	// (0x00017e71) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xed96,	// (0x00017e71) popup_fep_china_hwr2_fs_control_bar_grid

0xeda6,	// (0x00017e81) popup_fep_china_hwr2_fs_control_funtion_grid

0xedae,	// (0x00017e89) aid_fep_china_hwr2_fs_candi_cell

0x7d8f,	// (0x00010e6a) bg_popup_fep_shadow_pane_cp6

0xedb8,	// (0x00017e93) popup_fep_china_hwr2_fs_candidate_grid

0xedc2,	// (0x00017e9d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xedc2,	// (0x00017e9d) cell_fep_china_hwr2_fs_funtion_grid

0xd2e3,	// (0x000163be) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xedda,	// (0x00017eb5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xedda,	// (0x00017eb5) cell_fep_china_hwr2_fs_funtion_grid_g1

0xede8,	// (0x00017ec3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xede8,	// (0x00017ec3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd29,	// (0x00018e04) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd29,	// (0x00018e04) cell_fep_china_hwr2_fs_funtion_grid_g

0xedfe,	// (0x00017ed9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xedfe,	// (0x00017ed9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xee13,	// (0x00017eee) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xee13,	// (0x00017eee) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2e,	// (0x00018e09) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2e,	// (0x00018e09) cell_fep_china_hwr2_fs_funtion_grid_t

0xee2f,	// (0x00017f0a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xee37,	// (0x00017f12) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xee3f,	// (0x00017f1a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd33,	// (0x00018e0e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xee47,	// (0x00017f22) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xee47,	// (0x00017f22) cell_fep_china_hwr2_fs_candidate_grid

0xee60,	// (0x00017f3b) popup_fep_china_hwr2_fs_candidate_grid_g20

0xee68,	// (0x00017f43) popup_fep_china_hwr2_fs_candidate_grid_g21

0xd2e3,	// (0x000163be) cell_fep_china_hwr2_fs_candidate_grid_g1

0xd2e3,	// (0x000163be) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4e,	// (0x00018c29) cell_fep_china_hwr2_fs_candidate_grid_g

0xee70,	// (0x00017f4b) cell_fep_china_hwr2_fs_candidate_grid_t1

0xa4bc,	// (0x00013597) clock_nsta_pane_cp_24_ParamLimits

0xa4bc,	// (0x00013597) clock_nsta_pane_cp_24

0xa53a,	// (0x00013615) indicator_nsta_pane_cp_24_ParamLimits

0xa53a,	// (0x00013615) indicator_nsta_pane_cp_24

0xb6b0,	// (0x0001478b) heading_pane_g1

0x0001,

0xf8d7,	// (0x000189b2) heading_pane_g

0xc1ed,	// (0x000152c8) grid_sct_catagory_button_pane

0xc21f,	// (0x000152fa) scroll_pane_cp5_ParamLimits

0xce56,	// (0x00015f31) button_value_adjust_pane_cp5_ParamLimits

0xce56,	// (0x00015f31) button_value_adjust_pane_cp5

0xcf4e,	// (0x00016029) form2_midp_time_pane_ParamLimits

0xee7e,	// (0x00017f59) cell_sct_catagory_button_pane_ParamLimits

0xee7e,	// (0x00017f59) cell_sct_catagory_button_pane

0xd2a8,	// (0x00016383) bg_button_pane_cp01_ParamLimits

0xd2a8,	// (0x00016383) bg_button_pane_cp01

0xd2e3,	// (0x000163be) cell_sct_catagory_button_pane_g1

0xa29b,	// (0x00013376) popup_tb_extension_window

0xee90,	// (0x00017f6b) aid_size_cell_ext_ParamLimits

0xee90,	// (0x00017f6b) aid_size_cell_ext

0x8126,	// (0x00011201) bg_tb_trans_pane_cp1_ParamLimits

0x8126,	// (0x00011201) bg_tb_trans_pane_cp1

0xeeb0,	// (0x00017f8b) grid_tb_ext_pane_ParamLimits

0xeeb0,	// (0x00017f8b) grid_tb_ext_pane

0xeee2,	// (0x00017fbd) cell_tb_ext_pane_ParamLimits

0xeee2,	// (0x00017fbd) cell_tb_ext_pane

0xeef9,	// (0x00017fd4) cell_tb_ext_pane_g1_ParamLimits

0xeef9,	// (0x00017fd4) cell_tb_ext_pane_g1

0xef16,	// (0x00017ff1) cell_tb_ext_pane_t1

0x8126,	// (0x00011201) list_highlight_pane_cp11_ParamLimits

0x8126,	// (0x00011201) list_highlight_pane_cp11

0x644c,	// (0x0000f527) popup_uni_indicator_window_ParamLimits

0x644c,	// (0x0000f527) popup_uni_indicator_window

0x8c5c,	// (0x00011d37) bg_popup_sub_pane_cp14

0xef31,	// (0x0001800c) list_uniindi_pane

0xef3d,	// (0x00018018) uniindi_top_pane

0x8126,	// (0x00011201) bg_uniindi_top_pane

0xef5c,	// (0x00018037) uniindi_top_pane_g1

0xef72,	// (0x0001804d) uniindi_top_pane_g2

0x0003,

0xfd3a,	// (0x00018e15) uniindi_top_pane_g

0xef9c,	// (0x00018077) uniindi_top_pane_t1

0xefc6,	// (0x000180a1) list_single_uniindi_pane_ParamLimits

0xefc6,	// (0x000180a1) list_single_uniindi_pane

0xd2e3,	// (0x000163be) bg_uniindi_top_pane_g1

0xefd8,	// (0x000180b3) list_single_uniindi_pane_g1

0xefeb,	// (0x000180c6) list_single_uniindi_pane_t1

0x62d0,	// (0x0000f3ab) control_bg_pane

0xf010,	// (0x000180eb) bg_sctrl_sk_pane_cp1

0xf019,	// (0x000180f4) bg_sctrl_sk_pane_cp2

0xf022,	// (0x000180fd) control_bg_pane_g1

0xf02b,	// (0x00018106) control_bg_pane_g2

0x0001,

0xfd43,	// (0x00018e1e) control_bg_pane_g

0xcc82,	// (0x00015d5d) cell_indicator_nsta_pane_g1_ParamLimits

0xcc90,	// (0x00015d6b) cell_indicator_nsta_pane_g2_ParamLimits

0xfab2,	// (0x00018b8d) cell_indicator_nsta_pane_g_ParamLimits

0xcfd2,	// (0x000160ad) form2_midp_time_pane_t1_ParamLimits

0x8461,	// (0x0001153c) main_idle_act4_pane_ParamLimits

0x8461,	// (0x0001153c) main_idle_act4_pane

0xa29b,	// (0x00013376) popup_tb_extension_window_ParamLimits

0xeed2,	// (0x00017fad) tb_ext_find_pane_ParamLimits

0xeed2,	// (0x00017fad) tb_ext_find_pane

0xf034,	// (0x0001810f) ai_gene_pane_1_cp1

0x9bf0,	// (0x00012ccb) ai_gene_pane_2_cp1

0xf03c,	// (0x00018117) list_single_idle_plugin_calendar_pane

0xf045,	// (0x00018120) list_single_idle_plugin_notification_pane

0xf04e,	// (0x00018129) list_single_idle_plugin_player_pane

0xf057,	// (0x00018132) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf057,	// (0x00018132) list_single_idle_plugin_shortcut_pane

0xf079,	// (0x00018154) main_idle_act4_pane_t1

0xf08b,	// (0x00018166) main_idle_act4_pane_t2

0x0001,

0xfd48,	// (0x00018e23) main_idle_act4_pane_t

0xf09d,	// (0x00018178) middle_sk_idle_act4_pane_ParamLimits

0xf09d,	// (0x00018178) middle_sk_idle_act4_pane

0xf0b3,	// (0x0001818e) popup_clock_digital_analogue_window_cp2

0xf0cd,	// (0x000181a8) shortcut_wheel_idle_act4_pane_ParamLimits

0xf0cd,	// (0x000181a8) shortcut_wheel_idle_act4_pane

0xd2e3,	// (0x000163be) shortcut_wheel_idle_act4_pane_g1

0xd2e3,	// (0x000163be) shortcut_wheel_idle_act4_pane_g2

0xd2e3,	// (0x000163be) shortcut_wheel_idle_act4_pane_g3

0xd2e3,	// (0x000163be) shortcut_wheel_idle_act4_pane_g4

0xd2e3,	// (0x000163be) shortcut_wheel_idle_act4_pane_g5

0xf0e1,	// (0x000181bc) shortcut_wheel_idle_act4_pane_g6

0xf0e9,	// (0x000181c4) shortcut_wheel_idle_act4_pane_g7

0xf0f1,	// (0x000181cc) shortcut_wheel_idle_act4_pane_g8

0xf0f9,	// (0x000181d4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4d,	// (0x00018e28) shortcut_wheel_idle_act4_pane_g

0xd57c,	// (0x00016657) middle_sk_idle_act4_pane_g1_ParamLimits

0xd57c,	// (0x00016657) middle_sk_idle_act4_pane_g1

0xf15d,	// (0x00018238) middle_sk_idle_act4_pane_g2_ParamLimits

0xf15d,	// (0x00018238) middle_sk_idle_act4_pane_g2

0x0001,

0xfd70,	// (0x00018e4b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd70,	// (0x00018e4b) middle_sk_idle_act4_pane_g

0xf169,	// (0x00018244) middle_sk_idle_act4_pane_t1_ParamLimits

0xf169,	// (0x00018244) middle_sk_idle_act4_pane_t1

0xf186,	// (0x00018261) grid_ai_shortcut_pane_ParamLimits

0xf186,	// (0x00018261) grid_ai_shortcut_pane

0xf19f,	// (0x0001827a) list_highlight_pane_cp16_ParamLimits

0xf19f,	// (0x0001827a) list_highlight_pane_cp16

0xf1ac,	// (0x00018287) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf1ac,	// (0x00018287) list_single_idle_plugin_shortcut_pane_g1

0xf1b8,	// (0x00018293) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf1b8,	// (0x00018293) list_single_idle_plugin_shortcut_pane_g2

0xf1d0,	// (0x000182ab) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf1d0,	// (0x000182ab) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd75,	// (0x00018e50) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd75,	// (0x00018e50) list_single_idle_plugin_shortcut_pane_g

0xf1e3,	// (0x000182be) cell_ai_shortcut_pane_ParamLimits

0xf1e3,	// (0x000182be) cell_ai_shortcut_pane

0xf204,	// (0x000182df) cell_ai_shortcut_pane_g1_ParamLimits

0xf204,	// (0x000182df) cell_ai_shortcut_pane_g1

0xf034,	// (0x0001810f) ai_gene_pane_1_cp2

0xf226,	// (0x00018301) ai_gene_pane_2_cp2

0xf22e,	// (0x00018309) list_highlight_pane_cp15

0xf237,	// (0x00018312) list_single_idle_plugin_calendar_pane_g1

0xf22e,	// (0x00018309) list_highlight_pane_cp17

0xf23f,	// (0x0001831a) list_single_idle_plugin_calendar_pane_g1_copy1

0xf247,	// (0x00018322) list_single_idle_plugin_player_pane_g1

0xc446,	// (0x00015521) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7c,	// (0x00018e57) list_single_idle_plugin_player_pane_g

0xf24f,	// (0x0001832a) list_single_idle_plugin_player_pane_t1

0xf25d,	// (0x00018338) list_single_idle_plugin_player_pane_t2

0xf26b,	// (0x00018346) list_single_idle_plugin_player_pane_t3

0xf279,	// (0x00018354) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd81,	// (0x00018e5c) list_single_idle_plugin_player_pane_t

0xf287,	// (0x00018362) wait_bar_pane_cp15

0xf28f,	// (0x0001836a) grid_ai_notification_pane

0xc446,	// (0x00015521) list_single_idle_plugin_notification_pane_g1

0xf298,	// (0x00018373) cell_ai_notification_pane_ParamLimits

0xf298,	// (0x00018373) cell_ai_notification_pane

0xf2a5,	// (0x00018380) cell_ai_notification_pane_g1

0xf2ad,	// (0x00018388) cell_ai_notification_pane_t1

0xf2bb,	// (0x00018396) tb_ext_find_button_pane

0xf2c3,	// (0x0001839e) tb_ext_find_pane_g1

0xf2cb,	// (0x000183a6) tb_ext_find_pane_t1

0x943a,	// (0x00012515) tb_ext_find_button_pane_g1

0xf2d9,	// (0x000183b4) tb_ext_find_button_pane_g2

0x0001,

0xfd8a,	// (0x00018e65) tb_ext_find_button_pane_g

0xf079,	// (0x00018154) main_idle_act4_pane_t1_ParamLimits

0xf08b,	// (0x00018166) main_idle_act4_pane_t2_ParamLimits

0xfd48,	// (0x00018e23) main_idle_act4_pane_t_ParamLimits

0xf0b3,	// (0x0001818e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf0c1,	// (0x0001819c) sat_plugin_idle_act4_pane_ParamLimits

0xf0c1,	// (0x0001819c) sat_plugin_idle_act4_pane

0xf2e2,	// (0x000183bd) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf2e2,	// (0x000183bd) sat_plugin_idle_act4_pane_t1

0xf2f5,	// (0x000183d0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf2f5,	// (0x000183d0) sat_plugin_idle_act4_pane_t2

0xf308,	// (0x000183e3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf308,	// (0x000183e3) sat_plugin_idle_act4_pane_t3

0xf31b,	// (0x000183f6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf31b,	// (0x000183f6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8f,	// (0x00018e6a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8f,	// (0x00018e6a) sat_plugin_idle_act4_pane_t

0x6395,	// (0x0000f470) popup_battery_window_ParamLimits

0x6395,	// (0x0000f470) popup_battery_window

0x8126,	// (0x00011201) bg_popup_sub_pane_cp25_ParamLimits

0x8126,	// (0x00011201) bg_popup_sub_pane_cp25

0xf32e,	// (0x00018409) popup_battery_window_g1_ParamLimits

0xf32e,	// (0x00018409) popup_battery_window_g1

0xf33a,	// (0x00018415) popup_battery_window_t1_ParamLimits

0xf33a,	// (0x00018415) popup_battery_window_t1

0xf34c,	// (0x00018427) popup_battery_window_t2_ParamLimits

0xf34c,	// (0x00018427) popup_battery_window_t2

0x0001,

0xfd98,	// (0x00018e73) popup_battery_window_t_ParamLimits

0xfd98,	// (0x00018e73) popup_battery_window_t

0x9abb,	// (0x00012b96) midp_canvas_pane_ParamLimits

0x9b32,	// (0x00012c0d) midp_keypad_pane_ParamLimits

0x9b32,	// (0x00012c0d) midp_keypad_pane

0x9e2d,	// (0x00012f08) main_midp_pane_ParamLimits

0xcd0e,	// (0x00015de9) signal_pane_g2_cp_ParamLimits

0xf369,	// (0x00018444) aid_size_cell_midp_keypad_ParamLimits

0xf369,	// (0x00018444) aid_size_cell_midp_keypad

0xf383,	// (0x0001845e) midp_keyp_game_grid_pane_ParamLimits

0xf383,	// (0x0001845e) midp_keyp_game_grid_pane

0xf3a3,	// (0x0001847e) midp_keyp_rocker_pane_ParamLimits

0xf3a3,	// (0x0001847e) midp_keyp_rocker_pane

0xf3dc,	// (0x000184b7) midp_keyp_sk_left_pane_ParamLimits

0xf3dc,	// (0x000184b7) midp_keyp_sk_left_pane

0xf436,	// (0x00018511) midp_keyp_sk_right_pane_ParamLimits

0xf436,	// (0x00018511) midp_keyp_sk_right_pane

0x7d8f,	// (0x00010e6a) bg_button_pane_cp03

0xf490,	// (0x0001856b) midp_keyp_sk_left_pane_g1

0x7d8f,	// (0x00010e6a) bg_button_pane_cp04

0xf490,	// (0x0001856b) midp_keyp_sk_right_pane_g1

0xd2e3,	// (0x000163be) midp_keyp_rocker_pane_g1

0xf499,	// (0x00018574) keyp_game_cell_pane_ParamLimits

0xf499,	// (0x00018574) keyp_game_cell_pane

0x7d8f,	// (0x00010e6a) bg_button_pane_cp02

0xf4ac,	// (0x00018587) keyp_game_cell_pane_g1

0x63cb,	// (0x0000f4a6) popup_fep_vkb2_window_ParamLimits

0x63cb,	// (0x0000f4a6) popup_fep_vkb2_window

0x75d3,	// (0x000106ae) aid_size_cell_vkb2_ParamLimits

0x75d3,	// (0x000106ae) aid_size_cell_vkb2

0x7627,	// (0x00010702) popup_fep_vkb2_window_g1_ParamLimits

0x7627,	// (0x00010702) popup_fep_vkb2_window_g1

0x7667,	// (0x00010742) vkb2_area_bottom_pane_ParamLimits

0x7667,	// (0x00010742) vkb2_area_bottom_pane

0x76b3,	// (0x0001078e) vkb2_area_keypad_pane_ParamLimits

0x76b3,	// (0x0001078e) vkb2_area_keypad_pane

0x76f5,	// (0x000107d0) vkb2_area_top_pane_ParamLimits

0x76f5,	// (0x000107d0) vkb2_area_top_pane

0x776f,	// (0x0001084a) vkb2_top_entry_pane_ParamLimits

0x776f,	// (0x0001084a) vkb2_top_entry_pane

0x7799,	// (0x00010874) vkb2_top_grid_left_pane_ParamLimits

0x7799,	// (0x00010874) vkb2_top_grid_left_pane

0x77b7,	// (0x00010892) vkb2_top_grid_right_pane_ParamLimits

0x77b7,	// (0x00010892) vkb2_top_grid_right_pane

0x77d5,	// (0x000108b0) vkb2_cell_keypad_pane_ParamLimits

0x77d5,	// (0x000108b0) vkb2_cell_keypad_pane

0x78a6,	// (0x00010981) vkb2_area_bottom_grid_pane_ParamLimits

0x78a6,	// (0x00010981) vkb2_area_bottom_grid_pane

0x78cc,	// (0x000109a7) vkb2_area_bottom_pane_g1_ParamLimits

0x78cc,	// (0x000109a7) vkb2_area_bottom_pane_g1

0x78f0,	// (0x000109cb) vkb2_area_bottom_pane_g2_ParamLimits

0x78f0,	// (0x000109cb) vkb2_area_bottom_pane_g2

0x791e,	// (0x000109f9) vkb2_area_bottom_pane_g3_ParamLimits

0x791e,	// (0x000109f9) vkb2_area_bottom_pane_g3

0x0002,

0xfd9d,	// (0x00018e78) vkb2_area_bottom_pane_g_ParamLimits

0xfd9d,	// (0x00018e78) vkb2_area_bottom_pane_g

0x797f,	// (0x00010a5a) vkb2_top_cell_left_pane_ParamLimits

0x797f,	// (0x00010a5a) vkb2_top_cell_left_pane

0xf4bd,	// (0x00018598) vkb2_top_entry_pane_g1_ParamLimits

0xf4bd,	// (0x00018598) vkb2_top_entry_pane_g1

0xf4cb,	// (0x000185a6) vkb2_top_entry_pane_t1_ParamLimits

0xf4cb,	// (0x000185a6) vkb2_top_entry_pane_t1

0xf4fd,	// (0x000185d8) vkb2_top_entry_pane_t2_ParamLimits

0xf4fd,	// (0x000185d8) vkb2_top_entry_pane_t2

0xf52f,	// (0x0001860a) vkb2_top_entry_pane_t3_ParamLimits

0xf52f,	// (0x0001860a) vkb2_top_entry_pane_t3

0x0002,

0xfda4,	// (0x00018e7f) vkb2_top_entry_pane_t_ParamLimits

0xfda4,	// (0x00018e7f) vkb2_top_entry_pane_t

0x79cc,	// (0x00010aa7) vkb2_top_grid_right_pane_g1_ParamLimits

0x79cc,	// (0x00010aa7) vkb2_top_grid_right_pane_g1

0x79e2,	// (0x00010abd) vkb2_top_grid_right_pane_g2_ParamLimits

0x79e2,	// (0x00010abd) vkb2_top_grid_right_pane_g2

0x79fa,	// (0x00010ad5) vkb2_top_grid_right_pane_g3_ParamLimits

0x79fa,	// (0x00010ad5) vkb2_top_grid_right_pane_g3

0x7a12,	// (0x00010aed) vkb2_top_grid_right_pane_g4_ParamLimits

0x7a12,	// (0x00010aed) vkb2_top_grid_right_pane_g4

0x0003,

0xfdab,	// (0x00018e86) vkb2_top_grid_right_pane_g_ParamLimits

0xfdab,	// (0x00018e86) vkb2_top_grid_right_pane_g

0x7a28,	// (0x00010b03) vkb2_top_cell_left_pane_g1

0x7a3f,	// (0x00010b1a) vkb2_cell_keypad_pane_g1_ParamLimits

0x7a3f,	// (0x00010b1a) vkb2_cell_keypad_pane_g1

0xf553,	// (0x0001862e) vkb2_cell_keypad_pane_t1_ParamLimits

0xf553,	// (0x0001862e) vkb2_cell_keypad_pane_t1

0x7a4d,	// (0x00010b28) vkb2_cell_bottom_grid_pane_ParamLimits

0x7a4d,	// (0x00010b28) vkb2_cell_bottom_grid_pane

0x7a86,	// (0x00010b61) vkb2_cell_bottom_grid_pane_g1

0xf101,	// (0x000181dc) aid_call2_pane_cp02

0xf109,	// (0x000181e4) aid_call_pane_cp02

0xf111,	// (0x000181ec) clock_digital_number_pane_cp10

0xf119,	// (0x000181f4) clock_digital_number_pane_cp11

0xf121,	// (0x000181fc) clock_digital_number_pane_cp12

0xf129,	// (0x00018204) clock_digital_number_pane_cp13

0xf131,	// (0x0001820c) clock_digital_separator_pane_cp10

0x943a,	// (0x00012515) popup_clock_digital_analogue_window_cp2_g1

0x943a,	// (0x00012515) popup_clock_digital_analogue_window_cp2_g2

0xf139,	// (0x00018214) popup_clock_digital_analogue_window_cp2_g3

0x943a,	// (0x00012515) popup_clock_digital_analogue_window_cp2_g4

0xf139,	// (0x00018214) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd60,	// (0x00018e3b) popup_clock_digital_analogue_window_cp2_g

0xf141,	// (0x0001821c) popup_clock_digital_analogue_window_cp2_t1

0xf14f,	// (0x0001822a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6b,	// (0x00018e46) popup_clock_digital_analogue_window_cp2_t

0xd2e3,	// (0x000163be) clock_digital_number_pane_cp10_g1

0xd2e3,	// (0x000163be) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4e,	// (0x00018c29) clock_digital_number_pane_cp10_g

0xd2e3,	// (0x000163be) clock_digital_separator_pane_cp10_g1

0xd2e3,	// (0x000163be) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4e,	// (0x00018c29) clock_digital_separator_pane_cp10_g

0xef7e,	// (0x00018059) uniindi_top_pane_g3

0xef8f,	// (0x0001806a) uniindi_top_pane_g4

0x7860,	// (0x0001093b) vkb2_row_keypad_pane_ParamLimits

0x7860,	// (0x0001093b) vkb2_row_keypad_pane

0x7aa6,	// (0x00010b81) vkb2_cell_t_keypad_pane_ParamLimits

0x7aa6,	// (0x00010b81) vkb2_cell_t_keypad_pane

0x7ab6,	// (0x00010b91) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7ab6,	// (0x00010b91) vkb2_cell_t_keypad_pane_cp08

0x7ac9,	// (0x00010ba4) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7ac9,	// (0x00010ba4) vkb2_cell_t_keypad_pane_cp09

0x7add,	// (0x00010bb8) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7add,	// (0x00010bb8) vkb2_cell_t_keypad_pane_cp01

0x7aee,	// (0x00010bc9) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7aee,	// (0x00010bc9) vkb2_cell_t_keypad_pane_cp02

0x7aff,	// (0x00010bda) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7aff,	// (0x00010bda) vkb2_cell_t_keypad_pane_cp03

0x7b10,	// (0x00010beb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7b10,	// (0x00010beb) vkb2_cell_t_keypad_pane_cp04

0x7b21,	// (0x00010bfc) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7b21,	// (0x00010bfc) vkb2_cell_t_keypad_pane_cp05

0x7b32,	// (0x00010c0d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7b32,	// (0x00010c0d) vkb2_cell_t_keypad_pane_cp06

0x7b43,	// (0x00010c1e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7b43,	// (0x00010c1e) vkb2_cell_t_keypad_pane_cp07

0x7b54,	// (0x00010c2f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7b54,	// (0x00010c2f) vkb2_cell_t_keypad_pane_cp10

0x7315,	// (0x000103f0) vkb2_cell_t_keypad_pane_g1

0x0066,	// (0x00009141) vkb2_cell_t_keypad_pane_t1

0x62d0,	// (0x0000f3ab) popup_grid_graphic2_window

0x0078,	// (0x00009153) aid_size_cell_graphic2_ParamLimits

0x0078,	// (0x00009153) aid_size_cell_graphic2

0x00b0,	// (0x0000918b) bg_popup_window_pane_cp21_ParamLimits

0x00b0,	// (0x0000918b) bg_popup_window_pane_cp21

0x00be,	// (0x00009199) graphic2_pages_pane_ParamLimits

0x00be,	// (0x00009199) graphic2_pages_pane

0x0104,	// (0x000091df) grid_graphic2_control_pane_ParamLimits

0x0104,	// (0x000091df) grid_graphic2_control_pane

0x0142,	// (0x0000921d) grid_graphic2_pane_ParamLimits

0x0142,	// (0x0000921d) grid_graphic2_pane

0x01b6,	// (0x00009291) cell_graphic2_pane

0x7d8f,	// (0x00010e6a) main_comp_mode_pane

0xe77e,	// (0x00017859) list_ai3_gene_pane_ParamLimits

0xebc4,	// (0x00017c9f) bg_popup_window_pane_cp19_ParamLimits

0xebd0,	// (0x00017cab) bg_touch_area_indi_pane_ParamLimits

0xebd0,	// (0x00017cab) bg_touch_area_indi_pane

0xebe6,	// (0x00017cc1) bg_touch_area_indi_pane_cp01_ParamLimits

0xebe6,	// (0x00017cc1) bg_touch_area_indi_pane_cp01

0xebfc,	// (0x00017cd7) bg_touch_area_indi_pane_cp02_ParamLimits

0xebfc,	// (0x00017cd7) bg_touch_area_indi_pane_cp02

0xec14,	// (0x00017cef) bg_touch_area_indi_pane_cp03_ParamLimits

0xec14,	// (0x00017cef) bg_touch_area_indi_pane_cp03

0xec2e,	// (0x00017d09) popup_slider_window_g1_ParamLimits

0xec4a,	// (0x00017d25) popup_slider_window_g2_ParamLimits

0xec66,	// (0x00017d41) popup_slider_window_g3_ParamLimits

0xfcf5,	// (0x00018dd0) popup_slider_window_g_ParamLimits

0xecc2,	// (0x00017d9d) popup_slider_window_t1_ParamLimits

0xed36,	// (0x00017e11) small_volume_slider_vertical_pane_ParamLimits

0x01b6,	// (0x00009291) cell_graphic2_pane_ParamLimits

0x0204,	// (0x000092df) bg_button_pane_cp10_ParamLimits

0x0204,	// (0x000092df) bg_button_pane_cp10

0x0217,	// (0x000092f2) bg_button_pane_cp11_ParamLimits

0x0217,	// (0x000092f2) bg_button_pane_cp11

0x022a,	// (0x00009305) graphic2_pages_pane_g1_ParamLimits

0x022a,	// (0x00009305) graphic2_pages_pane_g1

0x0245,	// (0x00009320) graphic2_pages_pane_g2_ParamLimits

0x0245,	// (0x00009320) graphic2_pages_pane_g2

0x0001,

0xfdb9,	// (0x00018e94) graphic2_pages_pane_g_ParamLimits

0xfdb9,	// (0x00018e94) graphic2_pages_pane_g

0x025d,	// (0x00009338) graphic2_pages_pane_t1_ParamLimits

0x025d,	// (0x00009338) graphic2_pages_pane_t1

0x0273,	// (0x0000934e) cell_graphic2_control_pane_ParamLimits

0x0273,	// (0x0000934e) cell_graphic2_control_pane

0x0294,	// (0x0000936f) cell_graphic2_pane_g1_ParamLimits

0x0294,	// (0x0000936f) cell_graphic2_pane_g1

0x02a1,	// (0x0000937c) cell_graphic2_pane_g2_ParamLimits

0x02a1,	// (0x0000937c) cell_graphic2_pane_g2

0x02ae,	// (0x00009389) cell_graphic2_pane_g3_ParamLimits

0x02ae,	// (0x00009389) cell_graphic2_pane_g3

0x02bb,	// (0x00009396) cell_graphic2_pane_g4_ParamLimits

0x02bb,	// (0x00009396) cell_graphic2_pane_g4

0x02c8,	// (0x000093a3) cell_graphic2_pane_g5_ParamLimits

0x02c8,	// (0x000093a3) cell_graphic2_pane_g5

0x0004,

0xfdbe,	// (0x00018e99) cell_graphic2_pane_g_ParamLimits

0xfdbe,	// (0x00018e99) cell_graphic2_pane_g

0x02e3,	// (0x000093be) cell_graphic2_pane_t1_ParamLimits

0x02e3,	// (0x000093be) cell_graphic2_pane_t1

0xa9f9,	// (0x00013ad4) grid_highlight_pane_cp11_ParamLimits

0xa9f9,	// (0x00013ad4) grid_highlight_pane_cp11

0x8126,	// (0x00011201) bg_button_pane_cp05

0x030c,	// (0x000093e7) cell_graphic2_control_pane_g1

0xd2e3,	// (0x000163be) bg_touch_area_indi_pane_g1

0x0334,	// (0x0000940f) aid_cmod_rocker_key_size

0x033e,	// (0x00009419) aid_cmode_itu_key_size

0x0348,	// (0x00009423) main_cmode_video_pane

0x0352,	// (0x0000942d) main_comp_mode_itu_pane

0x035e,	// (0x00009439) main_comp_mode_rocker_pane

0x036a,	// (0x00009445) cell_cmode_rocker_pane_ParamLimits

0x036a,	// (0x00009445) cell_cmode_rocker_pane

0x037c,	// (0x00009457) cell_cmode_itu_pane_ParamLimits

0x037c,	// (0x00009457) cell_cmode_itu_pane

0x8c5c,	// (0x00011d37) bg_button_pane_cp06_ParamLimits

0x8c5c,	// (0x00011d37) bg_button_pane_cp06

0xd57c,	// (0x00016657) cell_cmode_rocker_pane_g1_ParamLimits

0xd57c,	// (0x00016657) cell_cmode_rocker_pane_g1

0xedda,	// (0x00017eb5) cell_cmode_rocker_pane_g2_ParamLimits

0xedda,	// (0x00017eb5) cell_cmode_rocker_pane_g2

0x0001,

0xfdce,	// (0x00018ea9) cell_cmode_rocker_pane_g_ParamLimits

0xfdce,	// (0x00018ea9) cell_cmode_rocker_pane_g

0x7d8f,	// (0x00010e6a) bg_button_pane_cp07

0x0391,	// (0x0000946c) cell_cmode_itu_pane_g1

0x039a,	// (0x00009475) cell_cmode_itu_pane_t1

0x03a8,	// (0x00009483) cell_cmode_itu_pane_t2

0x0001,

0xfdd3,	// (0x00018eae) cell_cmode_itu_pane_t

0xf000,	// (0x000180db) aid_touch_ctrl_left

0xf008,	// (0x000180e3) aid_touch_ctrl_right

0x7d8f,	// (0x00010e6a) compa_mode_pane

0x03b6,	// (0x00009491) aid_cmod_rocker_key_size_cp

0x03c0,	// (0x0000949b) aid_cmode_itu_key_size_cp

0x03ca,	// (0x000094a5) compa_mode_pane_g1

0x03d2,	// (0x000094ad) compa_mode_pane_g2

0x03da,	// (0x000094b5) compa_mode_pane_g3

0x0002,

0xfdd8,	// (0x00018eb3) compa_mode_pane_g

0x03e2,	// (0x000094bd) main_comp_mode_itu_pane_cp

0x03ea,	// (0x000094c5) main_comp_mode_rocker_pane_cp

0x03f2,	// (0x000094cd) cell_cmode_itu_pane_cp_ParamLimits

0x03f2,	// (0x000094cd) cell_cmode_itu_pane_cp

0x0407,	// (0x000094e2) cell_cmode_rocker_pane_cp_ParamLimits

0x0407,	// (0x000094e2) cell_cmode_rocker_pane_cp

0x8c5c,	// (0x00011d37) bg_button_pane_cp06_cp_ParamLimits

0x8c5c,	// (0x00011d37) bg_button_pane_cp06_cp

0xd57c,	// (0x00016657) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd57c,	// (0x00016657) cell_cmode_rocker_pane_g1_cp

0xd2e3,	// (0x000163be) cell_cmode_rocker_pane_g2_cp

0x7d8f,	// (0x00010e6a) bg_button_pane_cp07_cp

0x0419,	// (0x000094f4) cell_cmode_itu_pane_g1_cp

0x0422,	// (0x000094fd) cell_cmode_itu_pane_t1_cp

0x0422,	// (0x000094fd) cell_cmode_itu_pane_t2_cp

0xbf15,	// (0x00014ff0) settings_code_pane_cp2

0x7e83,	// (0x00010f5e) bg_popup_window_pane_cp3_ParamLimits

0x82f4,	// (0x000113cf) heading_pane_cp3_ParamLimits

0x8300,	// (0x000113db) listscroll_popup_graphic_pane_ParamLimits

0x70be,	// (0x00010199) fep_hwr_aid_pane_ParamLimits

0x752e,	// (0x00010609) aid_touch_sctrl_top_ParamLimits

0x7549,	// (0x00010624) sctrl_sk_top_pane_g1_ParamLimits

0x7315,	// (0x000103f0) sctrl_sk_top_pane_g2_ParamLimits

0xfd0e,	// (0x00018de9) sctrl_sk_top_pane_g_ParamLimits

0x7556,	// (0x00010631) sctrl_sk_top_pane_t1_ParamLimits

0x752e,	// (0x00010609) aid_touch_sctrl_bottom_ParamLimits

0x7556,	// (0x00010631) sctrl_sk_bottom_pane_t1_ParamLimits

0xef4a,	// (0x00018025) aid_area_touch_clock

0x7737,	// (0x00010812) aid_vkb2_area_top_pane_cell_ParamLimits

0x7737,	// (0x00010812) aid_vkb2_area_top_pane_cell

0x7882,	// (0x0001095d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7882,	// (0x0001095d) aid_vkb2_area_bottom_pane_cell

0xf4b5,	// (0x00018590) popup_char_count_window

0x0430,	// (0x0000950b) popup_char_count_window_g1

0x0439,	// (0x00009514) popup_char_count_window_g2

0x0442,	// (0x0000951d) popup_char_count_window_g3

0x0002,

0xfddf,	// (0x00018eba) popup_char_count_window_g

0x044b,	// (0x00009526) popup_char_count_window_t1

0x7605,	// (0x000106e0) popup_fep_char_preview_window_ParamLimits

0x7605,	// (0x000106e0) popup_fep_char_preview_window

0x7755,	// (0x00010830) vkb2_top_candi_pane_ParamLimits

0x7755,	// (0x00010830) vkb2_top_candi_pane

0x0459,	// (0x00009534) cell_vkb2_top_candi_pane_ParamLimits

0x0459,	// (0x00009534) cell_vkb2_top_candi_pane

0x7b69,	// (0x00010c44) bg_popup_fep_char_preview_window_ParamLimits

0x7b69,	// (0x00010c44) bg_popup_fep_char_preview_window

0x7b77,	// (0x00010c52) popup_fep_char_preview_window_t1_ParamLimits

0x7b77,	// (0x00010c52) popup_fep_char_preview_window_t1

0x04f0,	// (0x000095cb) bg_popup_fep_char_preview_window_g1

0x04e8,	// (0x000095c3) bg_popup_fep_char_preview_window_g2

0x04e0,	// (0x000095bb) bg_popup_fep_char_preview_window_g3

0x0518,	// (0x000095f3) bg_popup_fep_char_preview_window_g4

0x0510,	// (0x000095eb) bg_popup_fep_char_preview_window_g5

0x7bb1,	// (0x00010c8c) bg_popup_fep_char_preview_window_g6

0x0500,	// (0x000095db) bg_popup_fep_char_preview_window_g7

0x04f8,	// (0x000095d3) bg_popup_fep_char_preview_window_g8

0x0520,	// (0x000095fb) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde6,	// (0x00018ec1) bg_popup_fep_char_preview_window_g

0x7315,	// (0x000103f0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7315,	// (0x000103f0) cell_vkb2_top_candi_pane_g1

0x7323,	// (0x000103fe) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7323,	// (0x000103fe) cell_vkb2_top_candi_pane_g2

0x0549,	// (0x00009624) cell_vkb2_top_candi_pane_g3_ParamLimits

0x0549,	// (0x00009624) cell_vkb2_top_candi_pane_g3

0x7bb9,	// (0x00010c94) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7bb9,	// (0x00010c94) cell_vkb2_top_candi_pane_g4

0xdbf6,	// (0x00016cd1) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdbf6,	// (0x00016cd1) cell_vkb2_top_candi_pane_g5

0x7bda,	// (0x00010cb5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7bda,	// (0x00010cb5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf9,	// (0x00018ed4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf9,	// (0x00018ed4) cell_vkb2_top_candi_pane_g

0x7be8,	// (0x00010cc3) cell_vkb2_top_candi_pane_t1

0x6ecd,	// (0x0000ffa8) aid_size_touch_slider_mark_ParamLimits

0x6ecd,	// (0x0000ffa8) aid_size_touch_slider_mark

0x00f4,	// (0x000091cf) grid_graphic2_catg_pane_ParamLimits

0x00f4,	// (0x000091cf) grid_graphic2_catg_pane

0x0192,	// (0x0000926d) popup_grid_graphic2_window_t1_ParamLimits

0x0192,	// (0x0000926d) popup_grid_graphic2_window_t1

0x01a4,	// (0x0000927f) popup_grid_graphic2_window_t2_ParamLimits

0x01a4,	// (0x0000927f) popup_grid_graphic2_window_t2

0x0001,

0xfdb4,	// (0x00018e8f) popup_grid_graphic2_window_t_ParamLimits

0xfdb4,	// (0x00018e8f) popup_grid_graphic2_window_t

0x8126,	// (0x00011201) bg_button_pane_cp05_ParamLimits

0x030c,	// (0x000093e7) cell_graphic2_control_pane_g1_ParamLimits

0x0589,	// (0x00009664) cell_graphic2_catg_pane_ParamLimits

0x0589,	// (0x00009664) cell_graphic2_catg_pane

0x7d8f,	// (0x00010e6a) bg_button_pane_cp12

0x059b,	// (0x00009676) cell_graphic2_catg_pane_g1

0xef16,	// (0x00017ff1) cell_tb_ext_pane_t1_ParamLimits

0x799f,	// (0x00010a7a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x799f,	// (0x00010a7a) vkb2_top_cell_right_narrow_pane

0x79b7,	// (0x00010a92) vkb2_top_cell_right_wide_pane_ParamLimits

0x79b7,	// (0x00010a92) vkb2_top_cell_right_wide_pane

0x70b0,	// (0x0001018b) bg_vkb2_func_pane_ParamLimits

0x70b0,	// (0x0001018b) bg_vkb2_func_pane

0x7a28,	// (0x00010b03) vkb2_top_cell_left_pane_g1_ParamLimits

0x70b0,	// (0x0001018b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x70b0,	// (0x0001018b) bg_vkb2_fuc_pane_cp03

0x7a86,	// (0x00010b61) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xa8e7,	// (0x000139c2) bg_vkb2_func_pane_g1

0xa8ef,	// (0x000139ca) bg_vkb2_func_pane_g2

0xa8ff,	// (0x000139da) bg_vkb2_func_pane_g3

0xa8f7,	// (0x000139d2) bg_vkb2_func_pane_g4

0xa907,	// (0x000139e2) bg_vkb2_func_pane_g5

0xa90f,	// (0x000139ea) bg_vkb2_func_pane_g6

0xa917,	// (0x000139f2) bg_vkb2_func_pane_g7

0xa91f,	// (0x000139fa) bg_vkb2_func_pane_g8

0xa8df,	// (0x000139ba) bg_vkb2_func_pane_g9

0x0008,

0xfe06,	// (0x00018ee1) bg_vkb2_func_pane_g

0x70b0,	// (0x0001018b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x70b0,	// (0x0001018b) bg_vkb2_fuc_pane_cp01

0x7a28,	// (0x00010b03) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7a28,	// (0x00010b03) vkb2_top_cell_right_wide_pane_g1

0x70b0,	// (0x0001018b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x70b0,	// (0x0001018b) bg_vkb2_fuc_pane_cp02

0x7a86,	// (0x00010b61) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7a86,	// (0x00010b61) vkb2_top_cell_right_narrow_pane_g1

0xeb42,	// (0x00017c1d) aid_touch_area_decrease_ParamLimits

0xeb42,	// (0x00017c1d) aid_touch_area_decrease

0xeb66,	// (0x00017c41) aid_touch_area_increase_ParamLimits

0xeb66,	// (0x00017c41) aid_touch_area_increase

0xeb72,	// (0x00017c4d) aid_touch_area_mute_ParamLimits

0xeb72,	// (0x00017c4d) aid_touch_area_mute

0xeb96,	// (0x00017c71) aid_touch_area_slider_ParamLimits

0xeb96,	// (0x00017c71) aid_touch_area_slider

0xec82,	// (0x00017d5d) popup_slider_window_g4_ParamLimits

0xec82,	// (0x00017d5d) popup_slider_window_g4

0xec8e,	// (0x00017d69) popup_slider_window_g5_ParamLimits

0xec8e,	// (0x00017d69) popup_slider_window_g5

0xecb0,	// (0x00017d8b) popup_slider_window_g6_ParamLimits

0xecb0,	// (0x00017d8b) popup_slider_window_g6

0xecf0,	// (0x00017dcb) popup_slider_window_t2_ParamLimits

0xecf0,	// (0x00017dcb) popup_slider_window_t2

0x0001,

0xfd02,	// (0x00018ddd) popup_slider_window_t_ParamLimits

0xfd02,	// (0x00018ddd) popup_slider_window_t

0xed08,	// (0x00017de3) slider_pane_ParamLimits

0xed08,	// (0x00017de3) slider_pane

0x05a4,	// (0x0000967f) slider_pane_g1_ParamLimits

0x05a4,	// (0x0000967f) slider_pane_g1

0x05b8,	// (0x00009693) slider_pane_g2_ParamLimits

0x05b8,	// (0x00009693) slider_pane_g2

0x05ce,	// (0x000096a9) slider_pane_g3_ParamLimits

0x05ce,	// (0x000096a9) slider_pane_g3

0x0003,

0xfe19,	// (0x00018ef4) slider_pane_g_ParamLimits

0xfe19,	// (0x00018ef4) slider_pane_g

0xa2f7,	// (0x000133d2) popup_tb_float_extension_window_ParamLimits

0xa2f7,	// (0x000133d2) popup_tb_float_extension_window

0x05fa,	// (0x000096d5) aid_size_cell_tb_float_ext

0x7d8f,	// (0x00010e6a) bg_popup_sub_window_cp28

0x0606,	// (0x000096e1) grid_tb_float_ext_pane

0x0610,	// (0x000096eb) cell_tb_float_ext_pane_ParamLimits

0x0610,	// (0x000096eb) cell_tb_float_ext_pane

0x062a,	// (0x00009705) cell_tb_float_ext_pane_g1

0x0633,	// (0x0000970e) grid_highlight_pane_cp12

0x71ff,	// (0x000102da) cell_last_hwr_side_pane_ParamLimits

0x71ff,	// (0x000102da) cell_last_hwr_side_pane

0xd2e3,	// (0x000163be) cell_last_hwr_side_pane_g1

0x063c,	// (0x00009717) cell_last_hwr_side_pane_g2

0x0001,

0xfe22,	// (0x00018efd) cell_last_hwr_side_pane_g

0x794e,	// (0x00010a29) vkb2_area_bottom_space_btn_pane_ParamLimits

0x794e,	// (0x00010a29) vkb2_area_bottom_space_btn_pane

0x7315,	// (0x000103f0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x0066,	// (0x00009141) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7be8,	// (0x00010cc3) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7c07,	// (0x00010ce2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7c07,	// (0x00010ce2) vkb2_area_bottom_space_btn_pane_g1

0x7c41,	// (0x00010d1c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7c41,	// (0x00010d1c) vkb2_area_bottom_space_btn_pane_g2

0x7c77,	// (0x00010d52) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7c77,	// (0x00010d52) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe27,	// (0x00018f02) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe27,	// (0x00018f02) vkb2_area_bottom_space_btn_pane_g

0x7173,	// (0x0001024e) cel_fep_hwr_func_pane_ParamLimits

0x7173,	// (0x0001024e) cel_fep_hwr_func_pane

0x71af,	// (0x0001028a) cell_hwr_side_button_pane_ParamLimits

0x71af,	// (0x0001028a) cell_hwr_side_button_pane

0xef4a,	// (0x00018025) aid_area_touch_clock_ParamLimits

0x8126,	// (0x00011201) bg_uniindi_top_pane_ParamLimits

0xef5c,	// (0x00018037) uniindi_top_pane_g1_ParamLimits

0xef72,	// (0x0001804d) uniindi_top_pane_g2_ParamLimits

0xef7e,	// (0x00018059) uniindi_top_pane_g3_ParamLimits

0xef8f,	// (0x0001806a) uniindi_top_pane_g4_ParamLimits

0xfd3a,	// (0x00018e15) uniindi_top_pane_g_ParamLimits

0xef9c,	// (0x00018077) uniindi_top_pane_t1_ParamLimits

0x8126,	// (0x00011201) bg_vkb2_func_pane_cp01_ParamLimits

0x8126,	// (0x00011201) bg_vkb2_func_pane_cp01

0x06ff,	// (0x000097da) cel_fep_hwr_func_pane_g1_ParamLimits

0x06ff,	// (0x000097da) cel_fep_hwr_func_pane_g1

0x8126,	// (0x00011201) bg_vkb2_func_pane_cp02_ParamLimits

0x8126,	// (0x00011201) bg_vkb2_func_pane_cp02

0x06ff,	// (0x000097da) cell_hwr_side_button_pane_g1_ParamLimits

0x06ff,	// (0x000097da) cell_hwr_side_button_pane_g1

0xa740,	// (0x0001381b) status_pane_g4_ParamLimits

0xa740,	// (0x0001381b) status_pane_g4

0xa758,	// (0x00013833) status_pane_t1

0xcfe5,	// (0x000160c0) form2_midp_gauge_slider_cont_pane

0xcfed,	// (0x000160c8) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcfff,	// (0x000160da) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd011,	// (0x000160ec) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb01,	// (0x00018bdc) form2_midp_gauge_slider_pane_t_ParamLimits

0xd023,	// (0x000160fe) form2_midp_slider_pane_ParamLimits

0x75c5,	// (0x000106a0) aid_size_cell_func_vkb2_ParamLimits

0x75c5,	// (0x000106a0) aid_size_cell_func_vkb2

0x05e6,	// (0x000096c1) slider_pane_g4_ParamLimits

0x05e6,	// (0x000096c1) slider_pane_g4

0x7cc1,	// (0x00010d9c) form2_midp_gauge_slider_pane_t2_cp01

0x7ccf,	// (0x00010daa) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7ccf,	// (0x00010daa) form2_midp_gauge_slider_pane_t3_cp01

0x7cec,	// (0x00010dc7) form2_midp_slider_pane_cp01

0x7d8f,	// (0x00010e6a) navi_smil_pane

0x076c,	// (0x00009847) navi_smil_pane_g1

0x0774,	// (0x0000984f) navi_smil_pane_t1

0x0741,	// (0x0000981c) form2_midp_slider_pane_g1

0x074a,	// (0x00009825) form2_midp_slider_pane_g2

0x0752,	// (0x0000982d) form2_midp_slider_pane_g3

0x0741,	// (0x0000981c) form2_midp_slider_pane_g4

0x075a,	// (0x00009835) form2_midp_slider_pane_g5

0x0004,

0xfe30,	// (0x00018f0b) form2_midp_slider_pane_g

0x7cb1,	// (0x00010d8c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7cb1,	// (0x00010d8c) vkb2_area_bottom_space_btn_pane_g4

0xa576,	// (0x00013651) lc0_navi_pane_ParamLimits

0xa576,	// (0x00013651) lc0_navi_pane

0xa5ec,	// (0x000136c7) lc0_stat_indi_pane_ParamLimits

0xa5ec,	// (0x000136c7) lc0_stat_indi_pane

0xa603,	// (0x000136de) ls0_title_pane_ParamLimits

0xa603,	// (0x000136de) ls0_title_pane

0x8c5c,	// (0x00011d37) bg_popup_sub_pane_cp14_ParamLimits

0xef31,	// (0x0001800c) list_uniindi_pane_ParamLimits

0xef3d,	// (0x00018018) uniindi_top_pane_ParamLimits

0xefd8,	// (0x000180b3) list_single_uniindi_pane_g1_ParamLimits

0xefeb,	// (0x000180c6) list_single_uniindi_pane_t1_ParamLimits

0x7cf5,	// (0x00010dd0) lc0_stat_clock_pane_ParamLimits

0x7cf5,	// (0x00010dd0) lc0_stat_clock_pane

0x079c,	// (0x00009877) lc0_stat_indi_pane_g1_ParamLimits

0x079c,	// (0x00009877) lc0_stat_indi_pane_g1

0x078f,	// (0x0000986a) lc0_stat_indi_pane_g2_ParamLimits

0x078f,	// (0x0000986a) lc0_stat_indi_pane_g2

0x0001,

0xfe3b,	// (0x00018f16) lc0_stat_indi_pane_g_ParamLimits

0xfe3b,	// (0x00018f16) lc0_stat_indi_pane_g

0x7d02,	// (0x00010ddd) lc0_uni_indicator_pane_ParamLimits

0x7d02,	// (0x00010ddd) lc0_uni_indicator_pane

0x07b6,	// (0x00009891) ls0_title_pane_g1_ParamLimits

0x07b6,	// (0x00009891) ls0_title_pane_g1

0x07ca,	// (0x000098a5) ls0_title_pane_t1_ParamLimits

0x07ca,	// (0x000098a5) ls0_title_pane_t1

0x7d0f,	// (0x00010dea) lc0_uni_indicator_pane_g1_ParamLimits

0x7d0f,	// (0x00010dea) lc0_uni_indicator_pane_g1

0x0816,	// (0x000098f1) lc0_stat_clock_pane_t1

0x7d8f,	// (0x00010e6a) main_ai5_pane

0x0824,	// (0x000098ff) ai5_sk_pane_ParamLimits

0x0824,	// (0x000098ff) ai5_sk_pane

0x0831,	// (0x0000990c) cell_ai5_widget_pane_ParamLimits

0x0831,	// (0x0000990c) cell_ai5_widget_pane

0x08bf,	// (0x0000999a) aid_size_cell_widget_grid

0x08d3,	// (0x000099ae) bg_ai5_widget_pane_ParamLimits

0x08d3,	// (0x000099ae) bg_ai5_widget_pane

0x08fb,	// (0x000099d6) cell_ai5_widget_pane_g2

0x090b,	// (0x000099e6) cell_ai5_widget_pane_g3

0x092a,	// (0x00009a05) cell_ai5_widget_pane_g4

0x0936,	// (0x00009a11) cell_ai5_widget_pane_g5

0x0942,	// (0x00009a1d) cell_ai5_widget_pane_g6

0x094e,	// (0x00009a29) cell_ai5_widget_pane_g7

0x0996,	// (0x00009a71) cell_ai5_widget_pane_t1_ParamLimits

0x0996,	// (0x00009a71) cell_ai5_widget_pane_t1

0x09b3,	// (0x00009a8e) cell_ai5_widget_pane_t2_ParamLimits

0x09b3,	// (0x00009a8e) cell_ai5_widget_pane_t2

0x09cb,	// (0x00009aa6) cell_ai5_widget_pane_t3_ParamLimits

0x09cb,	// (0x00009aa6) cell_ai5_widget_pane_t3

0x09e3,	// (0x00009abe) cell_ai5_widget_pane_t4_ParamLimits

0x09e3,	// (0x00009abe) cell_ai5_widget_pane_t4

0x09fd,	// (0x00009ad8) cell_ai5_widget_pane_t5_ParamLimits

0x09fd,	// (0x00009ad8) cell_ai5_widget_pane_t5

0x0a1c,	// (0x00009af7) cell_ai5_widget_pane_t6_ParamLimits

0x0a1c,	// (0x00009af7) cell_ai5_widget_pane_t6

0x0a2e,	// (0x00009b09) cell_ai5_widget_pane_t7_ParamLimits

0x0a2e,	// (0x00009b09) cell_ai5_widget_pane_t7

0x0a47,	// (0x00009b22) cell_ai5_widget_pane_t8_ParamLimits

0x0a47,	// (0x00009b22) cell_ai5_widget_pane_t8

0x0009,

0xfe55,	// (0x00018f30) cell_ai5_widget_pane_t_ParamLimits

0xfe55,	// (0x00018f30) cell_ai5_widget_pane_t

0x0a93,	// (0x00009b6e) grid_ai5_widget_pane

0x8c5c,	// (0x00011d37) highlight_cell_ai5_widget_pane_ParamLimits

0x8c5c,	// (0x00011d37) highlight_cell_ai5_widget_pane

0x0aa9,	// (0x00009b84) ai5_sk_left_pane

0x0ab3,	// (0x00009b8e) ai5_sk_middle_pane

0x0abd,	// (0x00009b98) ai5_sk_right_pane

0x0ac7,	// (0x00009ba2) bg_ai5_widget_pane_g1_ParamLimits

0x0ac7,	// (0x00009ba2) bg_ai5_widget_pane_g1

0x0ad3,	// (0x00009bae) bg_ai5_widget_pane_g2_ParamLimits

0x0ad3,	// (0x00009bae) bg_ai5_widget_pane_g2

0x0adf,	// (0x00009bba) bg_ai5_widget_pane_g3_ParamLimits

0x0adf,	// (0x00009bba) bg_ai5_widget_pane_g3

0x0aeb,	// (0x00009bc6) bg_ai5_widget_pane_g4_ParamLimits

0x0aeb,	// (0x00009bc6) bg_ai5_widget_pane_g4

0x0af7,	// (0x00009bd2) bg_ai5_widget_pane_g5_ParamLimits

0x0af7,	// (0x00009bd2) bg_ai5_widget_pane_g5

0x0b03,	// (0x00009bde) bg_ai5_widget_pane_g6_ParamLimits

0x0b03,	// (0x00009bde) bg_ai5_widget_pane_g6

0x0b0f,	// (0x00009bea) bg_ai5_widget_pane_g7_ParamLimits

0x0b0f,	// (0x00009bea) bg_ai5_widget_pane_g7

0x0b1b,	// (0x00009bf6) bg_ai5_widget_pane_g8_ParamLimits

0x0b1b,	// (0x00009bf6) bg_ai5_widget_pane_g8

0x0b27,	// (0x00009c02) bg_ai5_widget_pane_g9_ParamLimits

0x0b27,	// (0x00009c02) bg_ai5_widget_pane_g9

0x0008,

0xfe6a,	// (0x00018f45) bg_ai5_widget_pane_g_ParamLimits

0xfe6a,	// (0x00018f45) bg_ai5_widget_pane_g

0x0b5a,	// (0x00009c35) cell_shortcut_ai5_widget_pane_ParamLimits

0x0b5a,	// (0x00009c35) cell_shortcut_ai5_widget_pane

0x7f66,	// (0x00011041) bg_cell_shortcut_ai5_widget_pane

0x0b6b,	// (0x00009c46) cell_grid_ai5_widget_pane_g1

0x0b74,	// (0x00009c4f) highlight_cell_shortcut_ai5_widget_pane

0xa8e7,	// (0x000139c2) ai5_sk_left_pane_g1

0x0b7c,	// (0x00009c57) ai5_sk_left_pane_g2

0x0b84,	// (0x00009c5f) ai5_sk_left_pane_g3

0x0b8c,	// (0x00009c67) ai5_sk_left_pane_g4

0x0003,

0xfe7d,	// (0x00018f58) ai5_sk_left_pane_g

0x0b94,	// (0x00009c6f) ai5_sk_left_pane_t1

0xa8ef,	// (0x000139ca) ai5_sk_right_pane_g1

0x0ba2,	// (0x00009c7d) ai5_sk_right_pane_g2

0x0baa,	// (0x00009c85) ai5_sk_right_pane_g3

0x0bb2,	// (0x00009c8d) ai5_sk_right_pane_g4

0x0003,

0xfe86,	// (0x00018f61) ai5_sk_right_pane_g

0x0bba,	// (0x00009c95) ai5_sk_right_pane_t1

0xa8ef,	// (0x000139ca) ai5_sk_middle_pane_g1

0xa8e7,	// (0x000139c2) ai5_sk_middle_pane_g2

0xa907,	// (0x000139e2) ai5_sk_middle_pane_g3

0x0baa,	// (0x00009c85) ai5_sk_middle_pane_g4

0x0b84,	// (0x00009c5f) ai5_sk_middle_pane_g5

0x0bc8,	// (0x00009ca3) ai5_sk_middle_pane_g6

0x0bd0,	// (0x00009cab) ai5_sk_middle_pane_g7

0x0006,

0xfe8f,	// (0x00018f6a) ai5_sk_middle_pane_g

0xa402,	// (0x000134dd) aid_touch_area_size_lc0_ParamLimits

0xa402,	// (0x000134dd) aid_touch_area_size_lc0

0x7344,	// (0x0001041f) cell_hwr_candidate_pane_t1_ParamLimits

0xa41e,	// (0x000134f9) aid_touch_navi_pane

0xa6ea,	// (0x000137c5) status_dt_navi_pane_ParamLimits

0xa6ea,	// (0x000137c5) status_dt_navi_pane

0xa6f7,	// (0x000137d2) status_dt_sta_pane_ParamLimits

0xa6f7,	// (0x000137d2) status_dt_sta_pane

0x0bd8,	// (0x00009cb3) dt_sta_controll_pane

0x0be5,	// (0x00009cc0) dt_sta_indi_pane

0x0bf6,	// (0x00009cd1) dt_sta_title_pane

0x8126,	// (0x00011201) bg_dt_sta_indi_pane_ParamLimits

0x8126,	// (0x00011201) bg_dt_sta_indi_pane

0x0c09,	// (0x00009ce4) dt_sta_battery_pane

0x0c11,	// (0x00009cec) dt_sta_indi_pane_g1

0x0c1a,	// (0x00009cf5) dt_sta_indi_pane_g2

0x0c23,	// (0x00009cfe) dt_sta_indi_pane_g3

0x0002,

0xfe9e,	// (0x00018f79) dt_sta_indi_pane_g

0x0c2c,	// (0x00009d07) dt_sta_signal_pane

0x8c5c,	// (0x00011d37) bg_dt_sta_title_pane_ParamLimits

0x8c5c,	// (0x00011d37) bg_dt_sta_title_pane

0xb804,	// (0x000148df) dt_sta_title_pane_g1

0x0c35,	// (0x00009d10) dt_sta_title_pane_t1_ParamLimits

0x0c35,	// (0x00009d10) dt_sta_title_pane_t1

0x7d8f,	// (0x00010e6a) bg_dt_sta_control_pane

0x0c4a,	// (0x00009d25) dt_sta_controll_pane_g1

0x0c53,	// (0x00009d2e) bg_dt_sta_title_pane_g1

0x0c5c,	// (0x00009d37) bg_dt_sta_title_pane_g2

0x0c65,	// (0x00009d40) bg_dt_sta_title_pane_g3

0x0002,

0xfea5,	// (0x00018f80) bg_dt_sta_title_pane_g

0xd2e3,	// (0x000163be) bg_dt_sta_indi_pane_g1

0x0c6e,	// (0x00009d49) dt_sta_signal_pane_g1

0x0c76,	// (0x00009d51) dt_sta_signal_pane_g2

0x0001,

0xfeac,	// (0x00018f87) dt_sta_signal_pane_g

0x0c7e,	// (0x00009d59) dt_sta_battery_pane_g1

0x0c87,	// (0x00009d62) dt_sta_battery_pane_t1

0xd2e3,	// (0x000163be) bg_dt_sta_control_pane_g1

0x951d,	// (0x000125f8) fep_china_uni_eep_pane

0x9525,	// (0x00012600) fep_china_uni_entry_pane_ParamLimits

0x9535,	// (0x00012610) popup_fep_china_uni_window_g1_ParamLimits

0x9545,	// (0x00012620) popup_fep_china_uni_window_g2_ParamLimits

0x9545,	// (0x00012620) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001880b) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001880b) popup_fep_china_uni_window_g

0x0c96,	// (0x00009d71) fep_china_uni_eep_pane_g1

0x0c9e,	// (0x00009d79) fep_china_uni_eep_pane_t1

0x0763,	// (0x0000983e) aid_touch_area_size_smil_player

0xa56e,	// (0x00013649) lc0_clock_pane

0xa74c,	// (0x00013827) status_pane_g5_ParamLimits

0xa74c,	// (0x00013827) status_pane_g5

0x9fc4,	// (0x0001309f) popup_keymap_window

0xa70c,	// (0x000137e7) status_icon_pane

0x090b,	// (0x000099e6) cell_ai5_widget_pane_g3_ParamLimits

0x092a,	// (0x00009a05) cell_ai5_widget_pane_g4_ParamLimits

0x0936,	// (0x00009a11) cell_ai5_widget_pane_g5_ParamLimits

0x095a,	// (0x00009a35) cell_ai5_widget_pane_g8_ParamLimits

0x095a,	// (0x00009a35) cell_ai5_widget_pane_g8

0x096e,	// (0x00009a49) cell_ai5_widget_pane_g9_ParamLimits

0x096e,	// (0x00009a49) cell_ai5_widget_pane_g9

0x0982,	// (0x00009a5d) cell_ai5_widget_pane_g10_ParamLimits

0x0982,	// (0x00009a5d) cell_ai5_widget_pane_g10

0x0cad,	// (0x00009d88) status_icon_pane_g1

0x7d8f,	// (0x00010e6a) bg_popup_sub_pane_cp13

0x0cb5,	// (0x00009d90) popup_keymap_window_t1

0x9d7a,	// (0x00012e55) control_pane_g6_ParamLimits

0x9d7a,	// (0x00012e55) control_pane_g6

0x9d87,	// (0x00012e62) control_pane_g7_ParamLimits

0x9d87,	// (0x00012e62) control_pane_g7

0x9d94,	// (0x00012e6f) control_pane_g8_ParamLimits

0x9d94,	// (0x00012e6f) control_pane_g8

0x0bd8,	// (0x00009cb3) dt_sta_controll_pane_ParamLimits

0x0be5,	// (0x00009cc0) dt_sta_indi_pane_ParamLimits

0x0bf6,	// (0x00009cd1) dt_sta_title_pane_ParamLimits

0x8628,	// (0x00011703) aid_size_touch_scroll_bar_cale

0x63a9,	// (0x0000f484) popup_discreet_window_ParamLimits

0x63a9,	// (0x0000f484) popup_discreet_window

0x6423,	// (0x0000f4fe) popup_sk_window

0xb036,	// (0x00014111) bg_popup_sub_pane_cp28_ParamLimits

0xb036,	// (0x00014111) bg_popup_sub_pane_cp28

0x0cc3,	// (0x00009d9e) popup_discreet_window_g1_ParamLimits

0x0cc3,	// (0x00009d9e) popup_discreet_window_g1

0x0ce3,	// (0x00009dbe) popup_discreet_window_t1_ParamLimits

0x0ce3,	// (0x00009dbe) popup_discreet_window_t1

0x0d01,	// (0x00009ddc) popup_discreet_window_t2_ParamLimits

0x0d01,	// (0x00009ddc) popup_discreet_window_t2

0x0002,

0xfeb1,	// (0x00018f8c) popup_discreet_window_t_ParamLimits

0xfeb1,	// (0x00018f8c) popup_discreet_window_t

0x7d25,	// (0x00010e00) popup_sk_window_g1

0x7d2f,	// (0x00010e0a) popup_sk_window_g2

0x0001,

0xfeb8,	// (0x00018f93) popup_sk_window_g

0x0d75,	// (0x00009e50) popup_sk_window_t1

0x0d67,	// (0x00009e42) popup_sk_window_t1_copy1

0x08fb,	// (0x000099d6) cell_ai5_widget_pane_g2_ParamLimits

0x0a59,	// (0x00009b34) cell_ai5_widget_pane_t9_ParamLimits

0x0a59,	// (0x00009b34) cell_ai5_widget_pane_t9

0x7d8f,	// (0x00010e6a) main_fep_fshwr2_pane

0x0d83,	// (0x00009e5e) aid_fshwr2_btn_pane

0x0d8b,	// (0x00009e66) aid_fshwr2_syb_pane

0x0d93,	// (0x00009e6e) aid_fshwr2_txt_pane

0x0d9b,	// (0x00009e76) fshwr2_func_candi_pane

0x0da7,	// (0x00009e82) fshwr2_hwr_syb_pane

0x0db3,	// (0x00009e8e) fshwr2_icf_pane

0x7d8f,	// (0x00010e6a) fshwr2_icf_bg_pane

0x0dd1,	// (0x00009eac) fshwr2_icf_pane_t1_ParamLimits

0x0dd1,	// (0x00009eac) fshwr2_icf_pane_t1

0xd2e3,	// (0x000163be) fshwr2_func_candi_pane_g1

0x0de8,	// (0x00009ec3) fshwr2_func_candi_row_pane_ParamLimits

0x0de8,	// (0x00009ec3) fshwr2_func_candi_row_pane

0x0df9,	// (0x00009ed4) cell_fshwr2_syb_pane_ParamLimits

0x0df9,	// (0x00009ed4) cell_fshwr2_syb_pane

0xd57c,	// (0x00016657) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd57c,	// (0x00016657) fshwr2_hwr_syb_pane_g1

0x7d8f,	// (0x00010e6a) bg_popup_call_pane_cp01

0x0e15,	// (0x00009ef0) fshwr2_func_candi_cell_pane_ParamLimits

0x0e15,	// (0x00009ef0) fshwr2_func_candi_cell_pane

0x0e46,	// (0x00009f21) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x0e46,	// (0x00009f21) fshwr2_func_candi_cell_bg_pane

0x0e60,	// (0x00009f3b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x0e60,	// (0x00009f3b) fshwr2_func_candi_cell_pane_g1

0x0e80,	// (0x00009f5b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x0e80,	// (0x00009f5b) fshwr2_func_candi_cell_pane_t1

0x7d8f,	// (0x00010e6a) bg_button_pane_cp08

0x9aa7,	// (0x00012b82) cell_fshwr2_syb_bg_pane

0x0e93,	// (0x00009f6e) cell_fshwr2_syb_bg_pane_g1

0x0e9b,	// (0x00009f76) cell_fshwr2_syb_bg_pane_t1

0x8c5c,	// (0x00011d37) main_tmo_pane

0xbb47,	// (0x00014c22) uni_indicator_pane_g1_ParamLimits

0xbb5c,	// (0x00014c37) uni_indicator_pane_g2_ParamLimits

0xbb72,	// (0x00014c4d) uni_indicator_pane_g3_ParamLimits

0xbb88,	// (0x00014c63) uni_indicator_pane_g4_ParamLimits

0xbb88,	// (0x00014c63) uni_indicator_pane_g4

0xbb9c,	// (0x00014c77) uni_indicator_pane_g5_ParamLimits

0xbb9c,	// (0x00014c77) uni_indicator_pane_g5

0xbbb0,	// (0x00014c8b) uni_indicator_pane_g6_ParamLimits

0xbbb0,	// (0x00014c8b) uni_indicator_pane_g6

0xf92d,	// (0x00018a08) uni_indicator_pane_g_ParamLimits

0xeb24,	// (0x00017bff) popup_tmo_note_window_ParamLimits

0xeb24,	// (0x00017bff) popup_tmo_note_window

0x7d8f,	// (0x00010e6a) fshwr2_bg_pane

0x0e71,	// (0x00009f4c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x0e71,	// (0x00009f4c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebd,	// (0x00018f98) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebd,	// (0x00018f98) fshwr2_func_candi_cell_pane_g

0xd2e3,	// (0x000163be) bg_popup_window_pane_cp01

0x0eaa,	// (0x00009f85) bg_popup_window_pane_g1_cp01

0x0eb3,	// (0x00009f8e) bg_popup_window_pane_cp22_ParamLimits

0x0eb3,	// (0x00009f8e) bg_popup_window_pane_cp22

0x0ec1,	// (0x00009f9c) listscroll_tmo_link_pane_ParamLimits

0x0ec1,	// (0x00009f9c) listscroll_tmo_link_pane

0x0f01,	// (0x00009fdc) popup_tmo_note_window_g1_ParamLimits

0x0f01,	// (0x00009fdc) popup_tmo_note_window_g1

0x0f0e,	// (0x00009fe9) tmo_note_info_pane_ParamLimits

0x0f0e,	// (0x00009fe9) tmo_note_info_pane

0x0f28,	// (0x0000a003) list_tmo_note_info_pane_g1_ParamLimits

0x0f28,	// (0x0000a003) list_tmo_note_info_pane_g1

0x0f3f,	// (0x0000a01a) list_tmo_note_info_pane_g2_ParamLimits

0x0f3f,	// (0x0000a01a) list_tmo_note_info_pane_g2

0x0001,

0xfec2,	// (0x00018f9d) list_tmo_note_info_pane_g_ParamLimits

0xfec2,	// (0x00018f9d) list_tmo_note_info_pane_g

0x0f5b,	// (0x0000a036) list_tmo_note_info_text_pane_ParamLimits

0x0f5b,	// (0x0000a036) list_tmo_note_info_text_pane

0x0fe0,	// (0x0000a0bb) list_tmo_link_pane

0x0fed,	// (0x0000a0c8) scroll_pane_cp20

0x0ffa,	// (0x0000a0d5) list_single_tmo_link_pane_ParamLimits

0x0ffa,	// (0x0000a0d5) list_single_tmo_link_pane

0x100a,	// (0x0000a0e5) list_single_tmo_link_pane_t1

0x1018,	// (0x0000a0f3) list_tmo_note_info_text_pane_t1_ParamLimits

0x1018,	// (0x0000a0f3) list_tmo_note_info_text_pane_t1

0x8e9f,	// (0x00011f7a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8e9f,	// (0x00011f7a) aid_size_touch_scroll_bar_cp01

0x8d16,	// (0x00011df1) aid_size_touch_slider_marker

0x640b,	// (0x0000f4e6) popup_settings_window_ParamLimits

0x640b,	// (0x0000f4e6) popup_settings_window

0x9e55,	// (0x00012f30) popup_candi_list_indi_window

0xa41e,	// (0x000134f9) aid_touch_navi_pane_ParamLimits

0x7502,	// (0x000105dd) rs_clock_indi_pane

0x750b,	// (0x000105e6) sctrl_sk_bottom_pane_ParamLimits

0x751c,	// (0x000105f7) sctrl_sk_top_pane_ParamLimits

0x761f,	// (0x000106fa) popup_fep_tooltip_window

0x08bf,	// (0x0000999a) aid_size_cell_widget_grid_ParamLimits

0x08ef,	// (0x000099ca) cell_ai5_widget_pane_g1_ParamLimits

0x08ef,	// (0x000099ca) cell_ai5_widget_pane_g1

0x0942,	// (0x00009a1d) cell_ai5_widget_pane_g6_ParamLimits

0x094e,	// (0x00009a29) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe40,	// (0x00018f1b) cell_ai5_widget_pane_g_ParamLimits

0xfe40,	// (0x00018f1b) cell_ai5_widget_pane_g

0x0a7d,	// (0x00009b58) cell_ai5_widget_pane_t10_ParamLimits

0x0a7d,	// (0x00009b58) cell_ai5_widget_pane_t10

0x0a93,	// (0x00009b6e) grid_ai5_widget_pane_ParamLimits

0x0b33,	// (0x00009c0e) cell_contacts_ai5_widget_pane_ParamLimits

0x0b33,	// (0x00009c0e) cell_contacts_ai5_widget_pane

0x0d16,	// (0x00009df1) popup_discreet_window_t3_ParamLimits

0x0d16,	// (0x00009df1) popup_discreet_window_t3

0x0dbd,	// (0x00009e98) popup_fshwr2_char_preview_window_ParamLimits

0x0dbd,	// (0x00009e98) popup_fshwr2_char_preview_window

0x0f79,	// (0x0000a054) tmo_note_info_pane_t1

0x0f8e,	// (0x0000a069) tmo_note_info_pane_t2

0x0fa7,	// (0x0000a082) tmo_note_info_pane_t3

0x0fbc,	// (0x0000a097) tmo_note_info_pane_t4

0x0fce,	// (0x0000a0a9) tmo_note_info_pane_t5

0x0004,

0xfec7,	// (0x00018fa2) tmo_note_info_pane_t

0x0fe0,	// (0x0000a0bb) list_tmo_link_pane_ParamLimits

0x0fed,	// (0x0000a0c8) scroll_pane_cp20_ParamLimits

0x7d8f,	// (0x00010e6a) bg_popup_fep_char_preview_window_cp01

0x1031,	// (0x0000a10c) popup_fshwr2_char_preview_window_t1

0x103f,	// (0x0000a11a) popup_candi_list_indi_window_g1

0x1048,	// (0x0000a123) bg_cell_contacts_ai5_widget_pane

0x1054,	// (0x0000a12f) cell_contacts_ai5_widget_pane_g1

0x1068,	// (0x0000a143) cell_contacts_ai5_widget_pane_g2

0x1077,	// (0x0000a152) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed2,	// (0x00018fad) cell_contacts_ai5_widget_pane_g

0x108a,	// (0x0000a165) cell_contacts_ai5_widget_pane_t1

0x8c5c,	// (0x00011d37) highlight_cell_shortcut_ai5_widget_pane_cp01

0x1104,	// (0x0000a1df) settings_container_pane

0x9aa7,	// (0x00012b82) listscroll_set_pane_copy1

0xc79e,	// (0x00015879) scroll_pane_cp121_copy1

0x1110,	// (0x0000a1eb) set_content_pane_copy1

0x1118,	// (0x0000a1f3) aid_height_set_list_copy1_ParamLimits

0x1118,	// (0x0000a1f3) aid_height_set_list_copy1

0xbdcb,	// (0x00014ea6) aid_size_parent_copy1_ParamLimits

0xbdcb,	// (0x00014ea6) aid_size_parent_copy1

0x1124,	// (0x0000a1ff) button_value_adjust_pane_cp6_copy1_ParamLimits

0x1124,	// (0x0000a1ff) button_value_adjust_pane_cp6_copy1

0x9e2d,	// (0x00012f08) list_highlight_pane_cp2_copy1_ParamLimits

0x9e2d,	// (0x00012f08) list_highlight_pane_cp2_copy1

0x1138,	// (0x0000a213) list_set_pane_copy1_ParamLimits

0x1138,	// (0x0000a213) list_set_pane_copy1

0x109f,	// (0x0000a17a) main_pane_set_t1_copy1_ParamLimits

0x109f,	// (0x0000a17a) main_pane_set_t1_copy1

0x10d9,	// (0x0000a1b4) main_pane_set_t2_copy1_ParamLimits

0x10d9,	// (0x0000a1b4) main_pane_set_t2_copy1

0x11e5,	// (0x0000a2c0) main_pane_set_t3_copy1

0x11f3,	// (0x0000a2ce) main_pane_set_t4_copy1

0x10f8,	// (0x0000a1d3) set_content_pane_g1_copy1_ParamLimits

0x10f8,	// (0x0000a1d3) set_content_pane_g1_copy1

0x1201,	// (0x0000a2dc) setting_code_pane_copy1

0x120b,	// (0x0000a2e6) setting_slider_graphic_pane_copy1

0x120b,	// (0x0000a2e6) setting_slider_pane_copy1

0x120b,	// (0x0000a2e6) setting_text_pane_copy1

0x1215,	// (0x0000a2f0) setting_volume_pane_copy1

0x121e,	// (0x0000a2f9) settings_code_pane_cp2_copy1

0x1226,	// (0x0000a301) settings_code_pane_cp_copy1_ParamLimits

0x1226,	// (0x0000a301) settings_code_pane_cp_copy1

0x123a,	// (0x0000a315) volume_set_pane_copy1

0x1242,	// (0x0000a31d) volume_set_pane_g10_copy1

0x124a,	// (0x0000a325) volume_set_pane_g1_copy1

0x1252,	// (0x0000a32d) volume_set_pane_g2_copy1

0x125a,	// (0x0000a335) volume_set_pane_g3_copy1

0x1262,	// (0x0000a33d) volume_set_pane_g4_copy1

0x126a,	// (0x0000a345) volume_set_pane_g5_copy1

0x1272,	// (0x0000a34d) volume_set_pane_g6_copy1

0x127a,	// (0x0000a355) volume_set_pane_g7_copy1

0x1282,	// (0x0000a35d) volume_set_pane_g8_copy1

0x128a,	// (0x0000a365) volume_set_pane_g9_copy1

0x7e83,	// (0x00010f5e) bg_set_opt_pane_cp_copy1_ParamLimits

0x7e83,	// (0x00010f5e) bg_set_opt_pane_cp_copy1

0x1292,	// (0x0000a36d) setting_slider_pane_t1_copy1_ParamLimits

0x1292,	// (0x0000a36d) setting_slider_pane_t1_copy1

0x12b0,	// (0x0000a38b) setting_slider_pane_t2_copy1_ParamLimits

0x12b0,	// (0x0000a38b) setting_slider_pane_t2_copy1

0x12ca,	// (0x0000a3a5) setting_slider_pane_t3_copy1_ParamLimits

0x12ca,	// (0x0000a3a5) setting_slider_pane_t3_copy1

0x12e2,	// (0x0000a3bd) slider_set_pane_copy1_ParamLimits

0x12e2,	// (0x0000a3bd) slider_set_pane_copy1

0x8d98,	// (0x00011e73) set_opt_bg_pane_g1_copy2

0x8da0,	// (0x00011e7b) set_opt_bg_pane_g2_copy2

0x12f8,	// (0x0000a3d3) set_opt_bg_pane_g3_copy2

0x8db0,	// (0x00011e8b) set_opt_bg_pane_g4_copy2

0x8db8,	// (0x00011e93) set_opt_bg_pane_g5_copy2

0x8dc0,	// (0x00011e9b) set_opt_bg_pane_g6_copy2

0x1302,	// (0x0000a3dd) set_opt_bg_pane_g7_copy2

0x130a,	// (0x0000a3e5) set_opt_bg_pane_g8_copy2

0x1314,	// (0x0000a3ef) set_opt_bg_pane_g9_copy2

0x7d39,	// (0x00010e14) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d39,	// (0x00010e14) aid_size_touch_slider_mark_copy1

0x1332,	// (0x0000a40d) slider_set_pane_g1_copy1

0x7d4d,	// (0x00010e28) slider_set_pane_g2_copy1

0x6eed,	// (0x0000ffc8) slider_set_pane_g3_copy1_ParamLimits

0x6eed,	// (0x0000ffc8) slider_set_pane_g3_copy1

0x6f01,	// (0x0000ffdc) slider_set_pane_g4_copy1_ParamLimits

0x6f01,	// (0x0000ffdc) slider_set_pane_g4_copy1

0x6f19,	// (0x0000fff4) slider_set_pane_g5_copy1_ParamLimits

0x6f19,	// (0x0000fff4) slider_set_pane_g5_copy1

0x6eed,	// (0x0000ffc8) slider_set_pane_g6_copy1_ParamLimits

0x6eed,	// (0x0000ffc8) slider_set_pane_g6_copy1

0x7d55,	// (0x00010e30) slider_set_pane_g7_copy1_ParamLimits

0x7d55,	// (0x00010e30) slider_set_pane_g7_copy1

0x7da3,	// (0x00010e7e) bg_set_opt_pane_cp2_copy1

0x1359,	// (0x0000a434) setting_slider_graphic_pane_g1_copy1

0x1362,	// (0x0000a43d) setting_slider_graphic_pane_t1_copy1

0x1372,	// (0x0000a44d) setting_slider_graphic_pane_t2_copy1

0x1382,	// (0x0000a45d) slider_set_pane_cp_copy1

0x1392,	// (0x0000a46d) input_focus_pane_cp1_copy1

0x139b,	// (0x0000a476) list_set_text_pane_copy1

0x13a3,	// (0x0000a47e) setting_text_pane_g1_copy1

0x13ac,	// (0x0000a487) set_text_pane_t1_copy1

0x1392,	// (0x0000a46d) input_focus_pane_cp2_copy1

0x13a3,	// (0x0000a47e) setting_code_pane_g1_copy1

0x13c9,	// (0x0000a4a4) setting_code_pane_t1_copy1

0x13d7,	// (0x0000a4b2) list_set_graphic_pane_copy1

0x7da3,	// (0x00010e7e) bg_set_opt_pane_cp4_copy1

0x97a9,	// (0x00012884) list_set_graphic_pane_g1_copy1_ParamLimits

0x97a9,	// (0x00012884) list_set_graphic_pane_g1_copy1

0x13eb,	// (0x0000a4c6) list_set_graphic_pane_g2_copy1

0x97c1,	// (0x0001289c) list_set_graphic_pane_t1_copy1_ParamLimits

0x97c1,	// (0x0001289c) list_set_graphic_pane_t1_copy1

0xd2e3,	// (0x000163be) rs_clock_indi_pane_g1

0x13f3,	// (0x0000a4ce) rs_clock_indi_pane_t1

0x1401,	// (0x0000a4dc) rs_indi_pane

0x1409,	// (0x0000a4e4) rs_indi_pane_g1

0x1412,	// (0x0000a4ed) rs_indi_pane_g2

0x141b,	// (0x0000a4f6) rs_indi_pane_g3

0x0002,

0xfed9,	// (0x00018fb4) rs_indi_pane_g

0x9aa7,	// (0x00012b82) bg_popup_preview_window_pane_cp03

0x1424,	// (0x0000a4ff) popup_fep_tooltip_window_t1

0xe162,	// (0x0001723d) popup_note2_window_g2_ParamLimits

0xe162,	// (0x0001723d) popup_note2_window_g2

0x0001,

0xfc79,	// (0x00018d54) popup_note2_window_g_ParamLimits

0xfc79,	// (0x00018d54) popup_note2_window_g

0xe744,	// (0x0001781f) bg_popup_sub_pane_cp11_ParamLimits

0xe751,	// (0x0001782c) cell_ai3_links_pane_g1_ParamLimits

0xe768,	// (0x00017843) cell_ai3_links_pane_t1

0x13ac,	// (0x0000a487) set_text_pane_t1_copy1_ParamLimits

0x99b6,	// (0x00012a91) cell_graphic_popup_pane_cp2_ParamLimits

0x99b6,	// (0x00012a91) cell_graphic_popup_pane_cp2

0x1432,	// (0x0000a50d) cell_graphic_popup_pane_g1_cp2

0x843b,	// (0x00011516) cell_graphic_popup_pane_g2_cp2

0x143a,	// (0x0000a515) cell_graphic_popup_pane_g3_cp2

0x1442,	// (0x0000a51d) cell_graphic_popup_pane_t2_cp2

0x844c,	// (0x00011527) grid_highlight_pane_cp3_cp2

0x917e,	// (0x00012259) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8c5c,	// (0x00011d37) main_tmo_pane_ParamLimits

0xeb18,	// (0x00017bf3) popup_tmo_big_image_note_window

0x08df,	// (0x000099ba) cell_ai5_widget_list_pane

0x08e7,	// (0x000099c2) cell_ai5_widget_lrg_icon_pane

0x0f79,	// (0x0000a054) tmo_note_info_pane_t1_ParamLimits

0x0f8e,	// (0x0000a069) tmo_note_info_pane_t2_ParamLimits

0x0fa7,	// (0x0000a082) tmo_note_info_pane_t3_ParamLimits

0x0fbc,	// (0x0000a097) tmo_note_info_pane_t4_ParamLimits

0x0fce,	// (0x0000a0a9) tmo_note_info_pane_t5_ParamLimits

0xfec7,	// (0x00018fa2) tmo_note_info_pane_t_ParamLimits

0x1104,	// (0x0000a1df) settings_container_pane_ParamLimits

0x138a,	// (0x0000a465) indicator_popup_pane_cp5

0x138a,	// (0x0000a465) indicator_popup_pane_cp6

0x13d7,	// (0x0000a4b2) list_set_graphic_pane_copy1_ParamLimits

0x7d8f,	// (0x00010e6a) bg_popup_window_pane_cp23

0x1450,	// (0x0000a52b) popup_tmo_big_image_note_window_g1

0x145b,	// (0x0000a536) popup_tmo_big_image_note_window_t1

0x146b,	// (0x0000a546) popup_tmo_big_image_note_window_t2

0x147b,	// (0x0000a556) popup_tmo_big_image_note_window_t3

0x0002,

0xfee0,	// (0x00018fbb) popup_tmo_big_image_note_window_t

0x148b,	// (0x0000a566) cell_ai5_widget_lrg_icon_pane_g1

0x1493,	// (0x0000a56e) cell_ai5_widget_lrg_icon_pane_t1

0x14a1,	// (0x0000a57c) cell_ai5_widget_list_row_pane_ParamLimits

0x14a1,	// (0x0000a57c) cell_ai5_widget_list_row_pane

0x14ba,	// (0x0000a595) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x14ba,	// (0x0000a595) cell_ai5_widget_list_row_pane_g1

0x14c7,	// (0x0000a5a2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x14c7,	// (0x0000a5a2) cell_ai5_widget_list_row_pane_t1

0x14df,	// (0x0000a5ba) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x14df,	// (0x0000a5ba) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee7,	// (0x00018fc2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee7,	// (0x00018fc2) cell_ai5_widget_list_row_pane_t

0x62d0,	// (0x0000f3ab) main_fep_vtchi_ss_pane

0x14f1,	// (0x0000a5cc) popup_fep_char_pre_window

0x14f9,	// (0x0000a5d4) popup_fep_ituss_window

0x151a,	// (0x0000a5f5) popup_fep_vkbss_window

0x1539,	// (0x0000a614) grid_vkbss_keypad_pane_ParamLimits

0x1539,	// (0x0000a614) grid_vkbss_keypad_pane

0x1549,	// (0x0000a624) ituss_keypad_pane

0x1561,	// (0x0000a63c) aid_vkbss_key_offset_ParamLimits

0x1561,	// (0x0000a63c) aid_vkbss_key_offset

0x156d,	// (0x0000a648) cell_vkbss_key_pane_ParamLimits

0x156d,	// (0x0000a648) cell_vkbss_key_pane

0xa728,	// (0x00013803) bg_cell_vkbss_key_g1_ParamLimits

0xa728,	// (0x00013803) bg_cell_vkbss_key_g1

0x1583,	// (0x0000a65e) cell_vkbss_key_3p_pane_ParamLimits

0x1583,	// (0x0000a65e) cell_vkbss_key_3p_pane

0x159d,	// (0x0000a678) cell_vkbss_key_g1_ParamLimits

0x159d,	// (0x0000a678) cell_vkbss_key_g1

0x15b7,	// (0x0000a692) cell_vkbss_key_t1_ParamLimits

0x15b7,	// (0x0000a692) cell_vkbss_key_t1

0x15e2,	// (0x0000a6bd) cell_ituss_key_pane_ParamLimits

0x15e2,	// (0x0000a6bd) cell_ituss_key_pane

0x15f2,	// (0x0000a6cd) bg_cell_ituss_key_g1_ParamLimits

0x15f2,	// (0x0000a6cd) bg_cell_ituss_key_g1

0x15fe,	// (0x0000a6d9) cell_ituss_key_pane_g1_ParamLimits

0x15fe,	// (0x0000a6d9) cell_ituss_key_pane_g1

0x160a,	// (0x0000a6e5) cell_ituss_key_pane_g2_ParamLimits

0x160a,	// (0x0000a6e5) cell_ituss_key_pane_g2

0x0001,

0xfeec,	// (0x00018fc7) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x00018fc7) cell_ituss_key_pane_g

0x1623,	// (0x0000a6fe) cell_ituss_key_t1_ParamLimits

0x1623,	// (0x0000a6fe) cell_ituss_key_t1

0x1651,	// (0x0000a72c) cell_ituss_key_t2_ParamLimits

0x1651,	// (0x0000a72c) cell_ituss_key_t2

0x1682,	// (0x0000a75d) cell_ituss_key_t3_ParamLimits

0x1682,	// (0x0000a75d) cell_ituss_key_t3

0x16b3,	// (0x0000a78e) cell_ituss_key_t4_ParamLimits

0x16b3,	// (0x0000a78e) cell_ituss_key_t4

0x0003,

0xfef1,	// (0x00018fcc) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x00018fcc) cell_ituss_key_t

0x16e4,	// (0x0000a7bf) cell_vkbss_key_3p_pane_g1

0x16ec,	// (0x0000a7c7) cell_vkbss_key_3p_pane_g2

0x16f4,	// (0x0000a7cf) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x00018fd5) cell_vkbss_key_3p_pane_g

0x7d8f,	// (0x00010e6a) bg_popup_fep_char_preview_window_cp02

0x16fc,	// (0x0000a7d7) popup_fep_char_pre_window_t1

0x08b5,	// (0x00009990) main_ai5_sk_pane

0x1048,	// (0x0000a123) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x1054,	// (0x0000a12f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x1068,	// (0x0000a143) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x1077,	// (0x0000a152) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed2,	// (0x00018fad) cell_contacts_ai5_widget_pane_g_ParamLimits

0x108a,	// (0x0000a165) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8c5c,	// (0x00011d37) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x170b,	// (0x0000a7e6) main_ai5_sk_pane_g1

0xae74,	// (0x00013f4f) popup_query_code_window_g1

0x150f,	// (0x0000a5ea) popup_fep_vkb_icf_pane

0x1523,	// (0x0000a5fe) popup_fep_vtchi_icf_pane

0x8c5c,	// (0x00011d37) bg_icf_pane

0x1723,	// (0x0000a7fe) list_vkb_icf_pane

0x8c5c,	// (0x00011d37) bg_icf_pane_cp01

0x173b,	// (0x0000a816) vtchi_icf_list_pane

0x174b,	// (0x0000a826) list_vkb_icf_pane_t1_ParamLimits

0x174b,	// (0x0000a826) list_vkb_icf_pane_t1

0x1765,	// (0x0000a840) vtchi_icf_list_pane_t1_ParamLimits

0x1765,	// (0x0000a840) vtchi_icf_list_pane_t1

0x14f9,	// (0x0000a5d4) popup_fep_ituss_window_ParamLimits

0x1523,	// (0x0000a5fe) popup_fep_vtchi_icf_pane_ParamLimits

0x1549,	// (0x0000a624) ituss_keypad_pane_ParamLimits

0x1558,	// (0x0000a633) ituss_sks_pane

0x8c5c,	// (0x00011d37) bg_icf_pane_ParamLimits

0x1714,	// (0x0000a7ef) icf_edit_indi_pane_ParamLimits

0x1714,	// (0x0000a7ef) icf_edit_indi_pane

0x1723,	// (0x0000a7fe) list_vkb_icf_pane_ParamLimits

0x8c5c,	// (0x00011d37) bg_icf_pane_cp01_ParamLimits

0x172f,	// (0x0000a80a) icf_edit_indi_pane_cp01_ParamLimits

0x172f,	// (0x0000a80a) icf_edit_indi_pane_cp01

0x1743,	// (0x0000a81e) vtchi_query_pane

0xd57c,	// (0x00016657) icf_edit_indi_pane_g1_ParamLimits

0xd57c,	// (0x00016657) icf_edit_indi_pane_g1

0x178c,	// (0x0000a867) icf_edit_indi_pane_g2_ParamLimits

0x178c,	// (0x0000a867) icf_edit_indi_pane_g2

0x0001,

0xff01,	// (0x00018fdc) icf_edit_indi_pane_g_ParamLimits

0xff01,	// (0x00018fdc) icf_edit_indi_pane_g

0x1798,	// (0x0000a873) icf_edit_indi_pane_t1

0x17a6,	// (0x0000a881) bg_input_focus_pane_cp042

0x861f,	// (0x000116fa) vtchi_button_pane

0x17af,	// (0x0000a88a) vtchi_query_pane_t1

0x17bd,	// (0x0000a898) vtchi_query_pane_t2

0x17cb,	// (0x0000a8a6) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x00018fe1) vtchi_query_pane_t

0x7d8f,	// (0x00010e6a) bg_button_pane_cp13

0x17d9,	// (0x0000a8b4) vtchi_button_pane_g1

0xf022,	// (0x000180fd) ituss_sks_pane_g1

0x17e1,	// (0x0000a8bc) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x00018fe8) ituss_sks_pane_g

0x17ea,	// (0x0000a8c5) ituss_sks_pane_t1

0x17f8,	// (0x0000a8d3) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x00018fed) ituss_sks_pane_t

0xccbf,	// (0x00015d9a) indicator_nsta_pane_cp_g1

0xccc8,	// (0x00015da3) indicator_nsta_pane_cp_g2

0xccd0,	// (0x00015dab) indicator_nsta_pane_cp_g3

0xccd8,	// (0x00015db3) indicator_nsta_pane_cp_g4

0xcce0,	// (0x00015dbb) indicator_nsta_pane_cp_g5

0xcce8,	// (0x00015dc3) indicator_nsta_pane_cp_g6

0x0005,

0xfab7,	// (0x00018b92) indicator_nsta_pane_cp_g

0x02f9,	// (0x000093d4) cell_graphic2_pane_t2_ParamLimits

0x02f9,	// (0x000093d4) cell_graphic2_pane_t2

0x0001,

0xfdc9,	// (0x00018ea4) cell_graphic2_pane_t_ParamLimits

0xfdc9,	// (0x00018ea4) cell_graphic2_pane_t

0x0326,	// (0x00009401) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
