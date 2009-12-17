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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00008c5d };

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
0x7ea2,	// (0x00010aff) Screen

0x7eb6,	// (0x00010b13) application_window_ParamLimits

0x7eb6,	// (0x00010b13) application_window

0x7ed0,	// (0x00010b2d) screen_g1

0x62a9,	// (0x0000ef06) area_bottom_pane_ParamLimits

0x62a9,	// (0x0000ef06) area_bottom_pane

0x6369,	// (0x0000efc6) area_top_pane_ParamLimits

0x6369,	// (0x0000efc6) area_top_pane

0x6407,	// (0x0000f064) main_pane_ParamLimits

0x6407,	// (0x0000f064) main_pane

0x7eda,	// (0x00010b37) misc_graphics

0xa584,	// (0x000131e1) battery_pane_ParamLimits

0xa584,	// (0x000131e1) battery_pane

0xb318,	// (0x00013f75) bg_status_flat_pane_g8

0xb320,	// (0x00013f7d) bg_status_flat_pane_g9

0xa646,	// (0x000132a3) context_pane_ParamLimits

0xa646,	// (0x000132a3) context_pane

0xa75c,	// (0x000133b9) navi_pane_ParamLimits

0xa75c,	// (0x000133b9) navi_pane

0xa7d9,	// (0x00013436) signal_pane_ParamLimits

0xa7d9,	// (0x00013436) signal_pane

0x0008,

0xf8ad,	// (0x0001850a) bg_status_flat_pane_g

0xa846,	// (0x000134a3) status_pane_g1_ParamLimits

0xa846,	// (0x000134a3) status_pane_g1

0xa85a,	// (0x000134b7) status_pane_g2_ParamLimits

0xa85a,	// (0x000134b7) status_pane_g2

0xa866,	// (0x000134c3) status_pane_g3_ParamLimits

0xa866,	// (0x000134c3) status_pane_g3

0x0004,

0xf7db,	// (0x00018438) status_pane_g_ParamLimits

0xf7db,	// (0x00018438) status_pane_g

0xa898,	// (0x000134f5) title_pane_ParamLimits

0xa898,	// (0x000134f5) title_pane

0xa8d5,	// (0x00013532) uni_indicator_pane_ParamLimits

0xa8d5,	// (0x00013532) uni_indicator_pane

0x9efd,	// (0x00012b5a) bg_list_pane_ParamLimits

0x9efd,	// (0x00012b5a) bg_list_pane

0x9f1d,	// (0x00012b7a) find_pane

0x9f25,	// (0x00012b82) listscroll_app_pane_ParamLimits

0x9f25,	// (0x00012b82) listscroll_app_pane

0x9f31,	// (0x00012b8e) listscroll_form_pane

0x9f39,	// (0x00012b96) listscroll_gen_pane_ParamLimits

0x9f39,	// (0x00012b96) listscroll_gen_pane

0x9f31,	// (0x00012b8e) listscroll_set_pane

0x90f9,	// (0x00011d56) main_idle_act_pane

0x9bd9,	// (0x00012836) main_idle_trad_pane

0x9bd9,	// (0x00012836) main_list_empty_pane

0x9f5f,	// (0x00012bbc) main_midp_pane

0x9f6b,	// (0x00012bc8) main_pane_g1_ParamLimits

0x9f6b,	// (0x00012bc8) main_pane_g1

0x9f79,	// (0x00012bd6) popup_ai_message_window_ParamLimits

0x9f79,	// (0x00012bd6) popup_ai_message_window

0xa023,	// (0x00012c80) popup_fep_china_uni_window_ParamLimits

0xa023,	// (0x00012c80) popup_fep_china_uni_window

0xa07d,	// (0x00012cda) popup_fep_japan_candidate_window_ParamLimits

0xa07d,	// (0x00012cda) popup_fep_japan_candidate_window

0xa09b,	// (0x00012cf8) popup_fep_japan_predictive_window_ParamLimits

0xa09b,	// (0x00012cf8) popup_fep_japan_predictive_window

0xa0cb,	// (0x00012d28) popup_find_window

0xa0d8,	// (0x00012d35) popup_grid_graphic_window_ParamLimits

0xa0d8,	// (0x00012d35) popup_grid_graphic_window

0xa0fe,	// (0x00012d5b) popup_large_graphic_colour_window

0xa124,	// (0x00012d81) popup_menu_window_ParamLimits

0xa124,	// (0x00012d81) popup_menu_window

0xa2de,	// (0x00012f3b) popup_note_image_window

0xa2ca,	// (0x00012f27) popup_note_wait_window_ParamLimits

0xa2ca,	// (0x00012f27) popup_note_wait_window

0xa2ca,	// (0x00012f27) popup_note_window_ParamLimits

0xa2ca,	// (0x00012f27) popup_note_window

0xa334,	// (0x00012f91) popup_query_code_window_ParamLimits

0xa334,	// (0x00012f91) popup_query_code_window

0xa348,	// (0x00012fa5) popup_query_data_code_window_ParamLimits

0xa348,	// (0x00012fa5) popup_query_data_code_window

0xa35f,	// (0x00012fbc) popup_query_data_window_ParamLimits

0xa35f,	// (0x00012fbc) popup_query_data_window

0xa377,	// (0x00012fd4) popup_query_sat_info_window_ParamLimits

0xa377,	// (0x00012fd4) popup_query_sat_info_window

0xa3b0,	// (0x0001300d) popup_snote_single_graphic_window_ParamLimits

0xa3b0,	// (0x0001300d) popup_snote_single_graphic_window

0xa3b0,	// (0x0001300d) popup_snote_single_text_window_ParamLimits

0xa3b0,	// (0x0001300d) popup_snote_single_text_window

0xa3c5,	// (0x00013022) popup_sub_window_general

0xa4f3,	// (0x00013150) popup_window_general_ParamLimits

0xa4f3,	// (0x00013150) popup_window_general

0xa508,	// (0x00013165) power_save_pane

0x6b4e,	// (0x0000f7ab) control_pane_g1_ParamLimits

0x6b4e,	// (0x0000f7ab) control_pane_g1

0x6b77,	// (0x0000f7d4) control_pane_g2_ParamLimits

0x6b77,	// (0x0000f7d4) control_pane_g2

0x9e9e,	// (0x00012afb) control_pane_g3_ParamLimits

0x9e9e,	// (0x00012afb) control_pane_g3

0x0007,

0xf7c3,	// (0x00018420) control_pane_g_ParamLimits

0xf7c3,	// (0x00018420) control_pane_g

0x6bb3,	// (0x0000f810) control_pane_t1_ParamLimits

0x6bb3,	// (0x0000f810) control_pane_t1

0x6c05,	// (0x0000f862) control_pane_t2_ParamLimits

0x6c05,	// (0x0000f862) control_pane_t2

0x0002,

0xf7d4,	// (0x00018431) control_pane_t_ParamLimits

0xf7d4,	// (0x00018431) control_pane_t

0x9dbf,	// (0x00012a1c) navi_navi_volume_pane_cp1

0x9dc8,	// (0x00012a25) status_small_icon_pane

0x9dd0,	// (0x00012a2d) status_small_pane_g1_ParamLimits

0x9dd0,	// (0x00012a2d) status_small_pane_g1

0x9e04,	// (0x00012a61) status_small_pane_g2_ParamLimits

0x9e04,	// (0x00012a61) status_small_pane_g2

0x9e10,	// (0x00012a6d) status_small_pane_g3_ParamLimits

0x9e10,	// (0x00012a6d) status_small_pane_g3

0x9e1c,	// (0x00012a79) status_small_pane_g4_ParamLimits

0x9e1c,	// (0x00012a79) status_small_pane_g4

0x9e28,	// (0x00012a85) status_small_pane_g5_ParamLimits

0x9e28,	// (0x00012a85) status_small_pane_g5

0x9e37,	// (0x00012a94) status_small_pane_g6_ParamLimits

0x9e37,	// (0x00012a94) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0001840f) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0001840f) status_small_pane_g

0x9e67,	// (0x00012ac4) status_small_pane_t1

0x9e8a,	// (0x00012ae7) status_small_wait_pane_ParamLimits

0x9e8a,	// (0x00012ae7) status_small_wait_pane

0x95e8,	// (0x00012245) aid_levels_signal_ParamLimits

0x95e8,	// (0x00012245) aid_levels_signal

0x95fa,	// (0x00012257) signal_pane_g1_ParamLimits

0x95fa,	// (0x00012257) signal_pane_g1

0x960f,	// (0x0001226c) signal_pane_g2_ParamLimits

0x960f,	// (0x0001226c) signal_pane_g2

0x0001,

0xf747,	// (0x000183a4) signal_pane_g_ParamLimits

0xf747,	// (0x000183a4) signal_pane_g

0x9624,	// (0x00012281) context_pane_g1

0x7ee4,	// (0x00010b41) title_pane_g1

0x7f1a,	// (0x00010b77) title_pane_t1

0x7f82,	// (0x00010bdf) title_pane_t2

0x7fa8,	// (0x00010c05) title_pane_t3

0x0002,

0xf59b,	// (0x000181f8) title_pane_t

0xa8ed,	// (0x0001354a) aid_levels_battery_ParamLimits

0xa8ed,	// (0x0001354a) aid_levels_battery

0xa901,	// (0x0001355e) battery_pane_g1_ParamLimits

0xa901,	// (0x0001355e) battery_pane_g1

0xa917,	// (0x00013574) battery_pane_g2_ParamLimits

0xa917,	// (0x00013574) battery_pane_g2

0x0001,

0xf7e6,	// (0x00018443) battery_pane_g_ParamLimits

0xf7e6,	// (0x00018443) battery_pane_g

0xbc48,	// (0x000148a5) uni_indicator_pane_g1

0xbc5d,	// (0x000148ba) uni_indicator_pane_g2

0xbc73,	// (0x000148d0) uni_indicator_pane_g3

0x0005,

0xf955,	// (0x000185b2) uni_indicator_pane_g

0x9a49,	// (0x000126a6) navi_icon_pane_ParamLimits

0x9a49,	// (0x000126a6) navi_icon_pane

0x9990,	// (0x000125ed) navi_midp_pane

0x9a65,	// (0x000126c2) navi_navi_pane

0x9a6f,	// (0x000126cc) navi_text_pane_ParamLimits

0x9a6f,	// (0x000126cc) navi_text_pane

0x7ed0,	// (0x00010b2d) status_small_wait_pane_g1

0x83e5,	// (0x00011042) status_small_wait_pane_g2

0x0001,

0xf950,	// (0x000185ad) status_small_wait_pane_g

0xb96b,	// (0x000145c8) navi_navi_icon_text_pane

0xb973,	// (0x000145d0) navi_navi_pane_g1_ParamLimits

0xb973,	// (0x000145d0) navi_navi_pane_g1

0xb985,	// (0x000145e2) navi_navi_pane_g2_ParamLimits

0xb985,	// (0x000145e2) navi_navi_pane_g2

0x0001,

0xf91e,	// (0x0001857b) navi_navi_pane_g_ParamLimits

0xf91e,	// (0x0001857b) navi_navi_pane_g

0xb997,	// (0x000145f4) navi_navi_tabs_pane

0xb9a0,	// (0x000145fd) navi_navi_text_pane

0xb96b,	// (0x000145c8) navi_navi_volume_pane

0xb944,	// (0x000145a1) navi_text_pane_t1

0xb935,	// (0x00014592) navi_icon_pane_g1

0xb888,	// (0x000144e5) navi_navi_text_pane_t1

0x6f9f,	// (0x0000fbfc) navi_navi_volume_pane_g1

0x6fa7,	// (0x0000fc04) volume_small_pane

0xb7ee,	// (0x0001444b) navi_navi_icon_text_pane_g1

0xb7f6,	// (0x00014453) navi_navi_icon_text_pane_t1

0x9a65,	// (0x000126c2) navi_tabs_2_long_pane

0x9a65,	// (0x000126c2) navi_tabs_2_pane

0x9a65,	// (0x000126c2) navi_tabs_3_long_pane

0x9a65,	// (0x000126c2) navi_tabs_3_pane

0x9a65,	// (0x000126c2) navi_tabs_4_pane

0x6f7f,	// (0x0000fbdc) tabs_2_active_pane_ParamLimits

0x6f7f,	// (0x0000fbdc) tabs_2_active_pane

0x6f8f,	// (0x0000fbec) tabs_2_passive_pane_ParamLimits

0x6f8f,	// (0x0000fbec) tabs_2_passive_pane

0x6f4d,	// (0x0000fbaa) tabs_3_active_pane_ParamLimits

0x6f4d,	// (0x0000fbaa) tabs_3_active_pane

0x6f5d,	// (0x0000fbba) tabs_3_passive_pane_ParamLimits

0x6f5d,	// (0x0000fbba) tabs_3_passive_pane

0x6f6e,	// (0x0000fbcb) tabs_3_passive_pane_cp_ParamLimits

0x6f6e,	// (0x0000fbcb) tabs_3_passive_pane_cp

0x6f09,	// (0x0000fb66) tabs_4_active_pane_ParamLimits

0x6f09,	// (0x0000fb66) tabs_4_active_pane

0x6f1a,	// (0x0000fb77) tabs_4_passive_pane_ParamLimits

0x6f1a,	// (0x0000fb77) tabs_4_passive_pane

0x6f2b,	// (0x0000fb88) tabs_4_passive_pane_cp_ParamLimits

0x6f2b,	// (0x0000fb88) tabs_4_passive_pane_cp

0x6f3c,	// (0x0000fb99) tabs_4_passive_pane_cp2_ParamLimits

0x6f3c,	// (0x0000fb99) tabs_4_passive_pane_cp2

0x6ee5,	// (0x0000fb42) tabs_2_long_active_pane_ParamLimits

0x6ee5,	// (0x0000fb42) tabs_2_long_active_pane

0x6ef7,	// (0x0000fb54) tabs_2_long_passive_pane_ParamLimits

0x6ef7,	// (0x0000fb54) tabs_2_long_passive_pane

0x6ea0,	// (0x0000fafd) tabs_3_long_active_pane_ParamLimits

0x6ea0,	// (0x0000fafd) tabs_3_long_active_pane

0x6eb9,	// (0x0000fb16) tabs_3_long_passive_pane_ParamLimits

0x6eb9,	// (0x0000fb16) tabs_3_long_passive_pane

0x6ecc,	// (0x0000fb29) tabs_3_long_passive_pane_cp_ParamLimits

0x6ecc,	// (0x0000fb29) tabs_3_long_passive_pane_cp

0x6e46,	// (0x0000faa3) volume_small_pane_g1

0x6e4f,	// (0x0000faac) volume_small_pane_g2

0x6e58,	// (0x0000fab5) volume_small_pane_g3

0x6e61,	// (0x0000fabe) volume_small_pane_g4

0x6e6a,	// (0x0000fac7) volume_small_pane_g5

0x6e73,	// (0x0000fad0) volume_small_pane_g6

0x6e7c,	// (0x0000fad9) volume_small_pane_g7

0x6e85,	// (0x0000fae2) volume_small_pane_g8

0x6e8e,	// (0x0000faeb) volume_small_pane_g9

0x6e97,	// (0x0000faf4) volume_small_pane_g10

0x0009,

0xf8ea,	// (0x00018547) volume_small_pane_g

0x7fba,	// (0x00010c17) bg_active_tab_pane_cp2_ParamLimits

0x7fba,	// (0x00010c17) bg_active_tab_pane_cp2

0x7fc8,	// (0x00010c25) tabs_3_active_pane_g1

0x7fd0,	// (0x00010c2d) tabs_3_active_pane_t1

0x7fba,	// (0x00010c17) bg_passive_tab_pane_cp2_ParamLimits

0x7fba,	// (0x00010c17) bg_passive_tab_pane_cp2

0x7fc8,	// (0x00010c25) tabs_3_passive_pane_g1

0x7fd0,	// (0x00010c2d) tabs_3_passive_pane_t1

0x7fba,	// (0x00010c17) bg_active_tab_pane_cp3_ParamLimits

0x7fba,	// (0x00010c17) bg_active_tab_pane_cp3

0x7fe2,	// (0x00010c3f) tabs_4_active_pane_g1

0x7fea,	// (0x00010c47) tabs_4_active_pane_t1

0x7fba,	// (0x00010c17) bg_passive_tab_pane_cp3_ParamLimits

0x7fba,	// (0x00010c17) bg_passive_tab_pane_cp3

0x7fe2,	// (0x00010c3f) tabs_4_1_passive_pane_g1

0x7fea,	// (0x00010c47) tabs_4_1_passive_pane_t1

0x9f5f,	// (0x00012bbc) list_highlight_pane_cp2

0xbef4,	// (0x00014b51) list_set_pane_ParamLimits

0xbef4,	// (0x00014b51) list_set_pane

0xbf96,	// (0x00014bf3) main_pane_set_t1_ParamLimits

0xbf96,	// (0x00014bf3) main_pane_set_t1

0xbfb6,	// (0x00014c13) main_pane_set_t2_ParamLimits

0xbfb6,	// (0x00014c13) main_pane_set_t2

0xbfca,	// (0x00014c27) main_pane_set_t3_ParamLimits

0xbfca,	// (0x00014c27) main_pane_set_t3

0xbfdc,	// (0x00014c39) main_pane_set_t4_ParamLimits

0xbfdc,	// (0x00014c39) main_pane_set_t4

0x0003,

0xf9ba,	// (0x00018617) main_pane_set_t_ParamLimits

0xf9ba,	// (0x00018617) main_pane_set_t

0xbfee,	// (0x00014c4b) setting_code_pane

0xbff8,	// (0x00014c55) setting_slider_graphic_pane

0xbff8,	// (0x00014c55) setting_slider_pane

0xbff8,	// (0x00014c55) setting_text_pane

0xbff8,	// (0x00014c55) setting_volume_pane

0x6638,	// (0x0000f295) volume_set_pane

0x7fba,	// (0x00010c17) bg_set_opt_pane_cp

0x6640,	// (0x0000f29d) setting_slider_pane_t1

0x6659,	// (0x0000f2b6) setting_slider_pane_t2

0x6672,	// (0x0000f2cf) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x000181ff) setting_slider_pane_t

0x6689,	// (0x0000f2e6) slider_set_pane

0x7eda,	// (0x00010b37) bg_set_opt_pane_cp2

0x7ffc,	// (0x00010c59) setting_slider_graphic_pane_g1

0x669f,	// (0x0000f2fc) setting_slider_graphic_pane_t1

0x66ae,	// (0x0000f30b) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00018206) setting_slider_graphic_pane_t

0x66bd,	// (0x0000f31a) slider_set_pane_cp

0x7eda,	// (0x00010b37) input_focus_pane_cp1

0xbeb3,	// (0x00014b10) list_set_text_pane

0x7ed0,	// (0x00010b2d) setting_text_pane_g1

0x7eda,	// (0x00010b37) input_focus_pane_cp2

0x7ed0,	// (0x00010b2d) setting_code_pane_g1

0x8005,	// (0x00010c62) setting_code_pane_t1

0x8013,	// (0x00010c70) set_text_pane_t1_ParamLimits

0x8013,	// (0x00010c70) set_text_pane_t1

0x8ecf,	// (0x00011b2c) set_opt_bg_pane_g1

0x8ed7,	// (0x00011b34) set_opt_bg_pane_g2

0xbe93,	// (0x00014af0) set_opt_bg_pane_g3

0x8ee7,	// (0x00011b44) set_opt_bg_pane_g4

0x8eef,	// (0x00011b4c) set_opt_bg_pane_g5

0x8ef7,	// (0x00011b54) set_opt_bg_pane_g6

0xbe9b,	// (0x00014af8) set_opt_bg_pane_g7

0xbea3,	// (0x00014b00) set_opt_bg_pane_g8

0xbeab,	// (0x00014b08) set_opt_bg_pane_g9

0x0008,

0xf9a7,	// (0x00018604) set_opt_bg_pane_g

0xbe86,	// (0x00014ae3) slider_set_pane_g1

0x7014,	// (0x0000fc71) slider_set_pane_g2

0x0006,

0xf998,	// (0x000185f5) slider_set_pane_g

0x6fb0,	// (0x0000fc0d) volume_set_pane_g1

0x6fb8,	// (0x0000fc15) volume_set_pane_g2

0x6fc0,	// (0x0000fc1d) volume_set_pane_g3

0x6fc8,	// (0x0000fc25) volume_set_pane_g4

0x6fd0,	// (0x0000fc2d) volume_set_pane_g5

0x6fd8,	// (0x0000fc35) volume_set_pane_g6

0x6fe0,	// (0x0000fc3d) volume_set_pane_g7

0x6fe8,	// (0x0000fc45) volume_set_pane_g8

0x6ff0,	// (0x0000fc4d) volume_set_pane_g9

0x6ff8,	// (0x0000fc55) volume_set_pane_g10

0x0009,

0xf970,	// (0x000185cd) volume_set_pane_g

0x802d,	// (0x00010c8a) indicator_pane_ParamLimits

0x802d,	// (0x00010c8a) indicator_pane

0x8039,	// (0x00010c96) main_idle_pane_g2_ParamLimits

0x8039,	// (0x00010c96) main_idle_pane_g2

0x8061,	// (0x00010cbe) main_pane_idle_g1_ParamLimits

0x8061,	// (0x00010cbe) main_pane_idle_g1

0x806e,	// (0x00010ccb) popup_clock_digital_analogue_window_ParamLimits

0x806e,	// (0x00010ccb) popup_clock_digital_analogue_window

0x8085,	// (0x00010ce2) soft_indicator_pane_ParamLimits

0x8085,	// (0x00010ce2) soft_indicator_pane

0x8091,	// (0x00010cee) wallpaper_pane_ParamLimits

0x8091,	// (0x00010cee) wallpaper_pane

0x7ed0,	// (0x00010b2d) wallpaper_pane_g1

0x80a5,	// (0x00010d02) indicator_pane_g1_ParamLimits

0x80a5,	// (0x00010d02) indicator_pane_g1

0xc372,	// (0x00014fcf) navi_navi_icon_text_pane_srt_g1

0x80c0,	// (0x00010d1d) soft_indicator_pane_t1

0x80da,	// (0x00010d37) aid_ps_area_pane

0x80eb,	// (0x00010d48) aid_ps_clock_pane

0x80f9,	// (0x00010d56) aid_ps_indicator_pane

0x8105,	// (0x00010d62) indicator_ps_pane_ParamLimits

0x8105,	// (0x00010d62) indicator_ps_pane

0x8114,	// (0x00010d71) power_save_pane_g1_ParamLimits

0x8114,	// (0x00010d71) power_save_pane_g1

0x8120,	// (0x00010d7d) power_save_pane_g2_ParamLimits

0x8120,	// (0x00010d7d) power_save_pane_g2

0x625d,	// (0x0000eeba) aid_navinavi_width_pane

0x80da,	// (0x00010d37) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0001820b) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0001820b) power_save_pane_g

0x812e,	// (0x00010d8b) power_save_pane_t1_ParamLimits

0x812e,	// (0x00010d8b) power_save_pane_t1

0x80eb,	// (0x00010d48) aid_ps_clock_pane_ParamLimits

0x80f9,	// (0x00010d56) aid_ps_indicator_pane_ParamLimits

0x8140,	// (0x00010d9d) power_save_pane_t4_ParamLimits

0x8140,	// (0x00010d9d) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00018210) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00018210) power_save_pane_t

0x816a,	// (0x00010dc7) power_save_t3_ParamLimits

0x816a,	// (0x00010dc7) power_save_t3

0x8155,	// (0x00010db2) power_save_t2_ParamLimits

0x8155,	// (0x00010db2) power_save_t2

0x817f,	// (0x00010ddc) indicator_ps_pane_g1

0x8188,	// (0x00010de5) ai_gene_pane_ParamLimits

0x8188,	// (0x00010de5) ai_gene_pane

0x8194,	// (0x00010df1) ai_links_pane_ParamLimits

0x8194,	// (0x00010df1) ai_links_pane

0x81a0,	// (0x00010dfd) indicator_pane_cp1_ParamLimits

0x81a0,	// (0x00010dfd) indicator_pane_cp1

0x81ac,	// (0x00010e09) main_pane_idle_g1_cp_ParamLimits

0x81ac,	// (0x00010e09) main_pane_idle_g1_cp

0x81b8,	// (0x00010e15) popup_ai_links_title_window

0x81c1,	// (0x00010e1e) soft_indicator_pane_cp1_ParamLimits

0x81c1,	// (0x00010e1e) soft_indicator_pane_cp1

0xbc36,	// (0x00014893) ai_links_pane_g1

0xbc3f,	// (0x0001489c) grid_ai_links_pane

0xbc19,	// (0x00014876) ai_gene_pane_1

0xbc24,	// (0x00014881) ai_gene_pane_2

0xbc2d,	// (0x0001488a) list_highlight_pane_cp4

0xbbfd,	// (0x0001485a) cell_ai_link_pane_ParamLimits

0xbbfd,	// (0x0001485a) cell_ai_link_pane

0xbbf5,	// (0x00014852) cell_ai_link_pane_g1

0x83e5,	// (0x00011042) cell_ai_link_pane_g2

0x0001,

0xf94b,	// (0x000185a8) cell_ai_link_pane_g

0x7eda,	// (0x00010b37) grid_highlight_cp2

0x7eda,	// (0x00010b37) bg_popup_sub_pane_cp1

0x81db,	// (0x00010e38) popup_ai_links_title_window_t1

0xbb43,	// (0x000147a0) ai_gene_pane_1_g1_ParamLimits

0xbb43,	// (0x000147a0) ai_gene_pane_1_g1

0xbb4f,	// (0x000147ac) ai_gene_pane_1_g2_ParamLimits

0xbb4f,	// (0x000147ac) ai_gene_pane_1_g2

0x0001,

0xf941,	// (0x0001859e) ai_gene_pane_1_g_ParamLimits

0xf941,	// (0x0001859e) ai_gene_pane_1_g

0xbb5c,	// (0x000147b9) ai_gene_pane_1_t1_ParamLimits

0xbb5c,	// (0x000147b9) ai_gene_pane_1_t1

0xbb90,	// (0x000147ed) grid_ai_soft_ind_pane

0xbb2e,	// (0x0001478b) ai_gene_pane_2_t1_ParamLimits

0xbb2e,	// (0x0001478b) ai_gene_pane_2_t1

0x81ea,	// (0x00010e47) main_pane_empty_t1_ParamLimits

0x81ea,	// (0x00010e47) main_pane_empty_t1

0x8202,	// (0x00010e5f) main_pane_empty_t2_ParamLimits

0x8202,	// (0x00010e5f) main_pane_empty_t2

0x8217,	// (0x00010e74) main_pane_empty_t3_ParamLimits

0x8217,	// (0x00010e74) main_pane_empty_t3

0x8229,	// (0x00010e86) main_pane_empty_t4_ParamLimits

0x8229,	// (0x00010e86) main_pane_empty_t4

0x823b,	// (0x00010e98) main_pane_empty_t5_ParamLimits

0x823b,	// (0x00010e98) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00018215) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00018215) main_pane_empty_t

0x8fc8,	// (0x00011c25) bg_popup_window_pane_ParamLimits

0x8fc8,	// (0x00011c25) bg_popup_window_pane

0xb896,	// (0x000144f3) find_popup_pane_cp2_ParamLimits

0xb896,	// (0x000144f3) find_popup_pane_cp2

0xb8a2,	// (0x000144ff) heading_pane_ParamLimits

0xb8a2,	// (0x000144ff) heading_pane

0x7eda,	// (0x00010b37) bg_popup_sub_pane

0xb810,	// (0x0001446d) bg_popup_window_pane_g1_ParamLimits

0xb810,	// (0x0001446d) bg_popup_window_pane_g1

0xb81c,	// (0x00014479) bg_popup_window_pane_g2_ParamLimits

0xb81c,	// (0x00014479) bg_popup_window_pane_g2

0xb828,	// (0x00014485) bg_popup_window_pane_g3_ParamLimits

0xb828,	// (0x00014485) bg_popup_window_pane_g3

0xb834,	// (0x00014491) bg_popup_window_pane_g4_ParamLimits

0xb834,	// (0x00014491) bg_popup_window_pane_g4

0xb840,	// (0x0001449d) bg_popup_window_pane_g5_ParamLimits

0xb840,	// (0x0001449d) bg_popup_window_pane_g5

0xb84c,	// (0x000144a9) bg_popup_window_pane_g6_ParamLimits

0xb84c,	// (0x000144a9) bg_popup_window_pane_g6

0xb858,	// (0x000144b5) bg_popup_window_pane_g7_ParamLimits

0xb858,	// (0x000144b5) bg_popup_window_pane_g7

0xb864,	// (0x000144c1) bg_popup_window_pane_g8_ParamLimits

0xb864,	// (0x000144c1) bg_popup_window_pane_g8

0xb870,	// (0x000144cd) bg_popup_window_pane_g9_ParamLimits

0xb870,	// (0x000144cd) bg_popup_window_pane_g9

0xb87c,	// (0x000144d9) bg_popup_window_pane_g10_ParamLimits

0xb87c,	// (0x000144d9) bg_popup_window_pane_g10

0x0009,

0xf909,	// (0x00018566) bg_popup_window_pane_g_ParamLimits

0xf909,	// (0x00018566) bg_popup_window_pane_g

0xb7a5,	// (0x00014402) bg_popup_heading_pane_ParamLimits

0xb7a5,	// (0x00014402) bg_popup_heading_pane

0x709c,	// (0x0000fcf9) tabs_4_passive_pane_cp_srt_ParamLimits

0x709c,	// (0x0000fcf9) tabs_4_passive_pane_cp_srt

0x70ae,	// (0x0000fd0b) tabs_4_passive_pane_srt_ParamLimits

0xb7b9,	// (0x00014416) heading_pane_g2

0x70ae,	// (0x0000fd0b) tabs_4_passive_pane_srt

0x9f5f,	// (0x00012bbc) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9f5f,	// (0x00012bbc) bg_passive_tab_pane_cp3_srt

0xb7c1,	// (0x0001441e) heading_pane_t1_ParamLimits

0xb7c1,	// (0x0001441e) heading_pane_t1

0xb7d8,	// (0x00014435) heading_pane_t2_ParamLimits

0xb7d8,	// (0x00014435) heading_pane_t2

0x0001,

0xf904,	// (0x00018561) heading_pane_t_ParamLimits

0xf904,	// (0x00018561) heading_pane_t

0xb2e0,	// (0x00013f3d) bg_popup_heading_pane_g1

0xb38f,	// (0x00013fec) bg_popup_heading_pane_g2

0xb399,	// (0x00013ff6) bg_popup_heading_pane_g3

0xb3a3,	// (0x00014000) bg_popup_heading_pane_g4

0xb3ad,	// (0x0001400a) bg_popup_heading_pane_g5

0xb3b7,	// (0x00014014) bg_popup_heading_pane_g6

0xb3bf,	// (0x0001401c) bg_popup_heading_pane_g7

0xb3c7,	// (0x00014024) bg_popup_heading_pane_g8

0xb3d1,	// (0x0001402e) bg_popup_heading_pane_g9

0x0008,

0xf8c0,	// (0x0001851d) bg_popup_heading_pane_g

0xaa11,	// (0x0001366e) bg_popup_sub_pane_g1

0xaa21,	// (0x0001367e) bg_popup_sub_pane_g2

0xaa19,	// (0x00013676) bg_popup_sub_pane_g3

0xaa31,	// (0x0001368e) bg_popup_sub_pane_g4

0xaa29,	// (0x00013686) bg_popup_sub_pane_g5

0xaa39,	// (0x00013696) bg_popup_sub_pane_g6

0xaa41,	// (0x0001369e) bg_popup_sub_pane_g7

0xaa51,	// (0x000136ae) bg_popup_sub_pane_g8

0xaa49,	// (0x000136a6) bg_popup_sub_pane_g9

0x0008,

0xf89a,	// (0x000184f7) bg_popup_sub_pane_g

0x824f,	// (0x00010eac) bg_popup_window_pane_cp5_ParamLimits

0x824f,	// (0x00010eac) bg_popup_window_pane_cp5

0x826b,	// (0x00010ec8) popup_note_window_g1_ParamLimits

0x826b,	// (0x00010ec8) popup_note_window_g1

0x8277,	// (0x00010ed4) popup_note_window_t1_ParamLimits

0x8277,	// (0x00010ed4) popup_note_window_t1

0x8289,	// (0x00010ee6) popup_note_window_t2_ParamLimits

0x8289,	// (0x00010ee6) popup_note_window_t2

0x829b,	// (0x00010ef8) popup_note_window_t3_ParamLimits

0x829b,	// (0x00010ef8) popup_note_window_t3

0x82ad,	// (0x00010f0a) popup_note_window_t4_ParamLimits

0x82ad,	// (0x00010f0a) popup_note_window_t4

0x82d5,	// (0x00010f32) popup_note_window_t5_ParamLimits

0x82d5,	// (0x00010f32) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00018220) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00018220) popup_note_window_t

0x82f9,	// (0x00010f56) bg_popup_window_pane_cp6_ParamLimits

0x82f9,	// (0x00010f56) bg_popup_window_pane_cp6

0xb254,	// (0x00013eb1) popup_note_image_window_g1_ParamLimits

0xb254,	// (0x00013eb1) popup_note_image_window_g1

0xb260,	// (0x00013ebd) popup_note_image_window_g2_ParamLimits

0xb260,	// (0x00013ebd) popup_note_image_window_g2

0x0001,

0xf88e,	// (0x000184eb) popup_note_image_window_g_ParamLimits

0xf88e,	// (0x000184eb) popup_note_image_window_g

0xb279,	// (0x00013ed6) popup_note_image_window_t1_ParamLimits

0xb279,	// (0x00013ed6) popup_note_image_window_t1

0xb292,	// (0x00013eef) popup_note_image_window_t2_ParamLimits

0xb292,	// (0x00013eef) popup_note_image_window_t2

0xb2ab,	// (0x00013f08) popup_note_image_window_t3_ParamLimits

0xb2ab,	// (0x00013f08) popup_note_image_window_t3

0x0002,

0xf893,	// (0x000184f0) popup_note_image_window_t_ParamLimits

0xf893,	// (0x000184f0) popup_note_image_window_t

0xb115,	// (0x00013d72) bg_popup_window_pane_cp7_ParamLimits

0xb115,	// (0x00013d72) bg_popup_window_pane_cp7

0xb145,	// (0x00013da2) popup_note_wait_window_g1_ParamLimits

0xb145,	// (0x00013da2) popup_note_wait_window_g1

0xb151,	// (0x00013dae) popup_note_wait_window_g2_ParamLimits

0xb151,	// (0x00013dae) popup_note_wait_window_g2

0x0002,

0xf87c,	// (0x000184d9) popup_note_wait_window_g_ParamLimits

0xf87c,	// (0x000184d9) popup_note_wait_window_g

0xb169,	// (0x00013dc6) popup_note_wait_window_t1_ParamLimits

0xb169,	// (0x00013dc6) popup_note_wait_window_t1

0xb190,	// (0x00013ded) popup_note_wait_window_t2_ParamLimits

0xb190,	// (0x00013ded) popup_note_wait_window_t2

0xb1ad,	// (0x00013e0a) popup_note_wait_window_t3_ParamLimits

0xb1ad,	// (0x00013e0a) popup_note_wait_window_t3

0xb1c0,	// (0x00013e1d) popup_note_wait_window_t4_ParamLimits

0xb1c0,	// (0x00013e1d) popup_note_wait_window_t4

0x0004,

0xf883,	// (0x000184e0) popup_note_wait_window_t_ParamLimits

0xf883,	// (0x000184e0) popup_note_wait_window_t

0xb1e5,	// (0x00013e42) wait_bar_pane_ParamLimits

0xb1e5,	// (0x00013e42) wait_bar_pane

0x7eda,	// (0x00010b37) wait_anim_pane

0x7eda,	// (0x00010b37) wait_border_pane

0x7ed0,	// (0x00010b2d) wait_anim_pane_g1

0x7ed0,	// (0x00010b2d) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0001839f) wait_anim_pane_g

0xb0b9,	// (0x00013d16) wait_border_pane_g1

0xb0c4,	// (0x00013d21) wait_border_pane_g2

0xb0cd,	// (0x00013d2a) wait_border_pane_g3

0x0002,

0xf875,	// (0x000184d2) wait_border_pane_g

0xb01b,	// (0x00013c78) bg_popup_window_pane_cp16_ParamLimits

0xb01b,	// (0x00013c78) bg_popup_window_pane_cp16

0xb029,	// (0x00013c86) indicator_popup_pane_cp4_ParamLimits

0xb029,	// (0x00013c86) indicator_popup_pane_cp4

0xb03d,	// (0x00013c9a) popup_query_data_window_t1_ParamLimits

0xb03d,	// (0x00013c9a) popup_query_data_window_t1

0xb04f,	// (0x00013cac) popup_query_data_window_t2_ParamLimits

0xb04f,	// (0x00013cac) popup_query_data_window_t2

0xb068,	// (0x00013cc5) popup_query_data_window_t3_ParamLimits

0xb068,	// (0x00013cc5) popup_query_data_window_t3

0x0002,

0xf86e,	// (0x000184cb) popup_query_data_window_t_ParamLimits

0xf86e,	// (0x000184cb) popup_query_data_window_t

0xb082,	// (0x00013cdf) query_popup_data_pane_ParamLimits

0xb082,	// (0x00013cdf) query_popup_data_pane

0xb096,	// (0x00013cf3) query_popup_data_pane_cp1_ParamLimits

0xb096,	// (0x00013cf3) query_popup_data_pane_cp1

0x82f9,	// (0x00010f56) bg_popup_window_pane_cp10_ParamLimits

0x82f9,	// (0x00010f56) bg_popup_window_pane_cp10

0xaf7e,	// (0x00013bdb) indicator_popup_pane_ParamLimits

0xaf7e,	// (0x00013bdb) indicator_popup_pane

0x8350,	// (0x00010fad) popup_query_code_window_t1_ParamLimits

0x8350,	// (0x00010fad) popup_query_code_window_t1

0xaf96,	// (0x00013bf3) popup_query_code_window_t2_ParamLimits

0xaf96,	// (0x00013bf3) popup_query_code_window_t2

0xafd4,	// (0x00013c31) popup_query_code_window_t3_ParamLimits

0xafd4,	// (0x00013c31) popup_query_code_window_t3

0x0002,

0xf867,	// (0x000184c4) popup_query_code_window_t_ParamLimits

0xf867,	// (0x000184c4) popup_query_code_window_t

0xb003,	// (0x00013c60) query_popup_pane_ParamLimits

0xb003,	// (0x00013c60) query_popup_pane

0x82f9,	// (0x00010f56) bg_popup_window_pane_cp15_ParamLimits

0x82f9,	// (0x00010f56) bg_popup_window_pane_cp15

0x8317,	// (0x00010f74) indicator_popup_pane_cp1_ParamLimits

0x8317,	// (0x00010f74) indicator_popup_pane_cp1

0x832a,	// (0x00010f87) indicator_popup_pane_cp2_ParamLimits

0x832a,	// (0x00010f87) indicator_popup_pane_cp2

0x833d,	// (0x00010f9a) popup_query_data_code_window_g1_ParamLimits

0x833d,	// (0x00010f9a) popup_query_data_code_window_g1

0x8350,	// (0x00010fad) popup_query_data_code_window_t1_ParamLimits

0x8350,	// (0x00010fad) popup_query_data_code_window_t1

0x8362,	// (0x00010fbf) popup_query_data_code_window_t2_ParamLimits

0x8362,	// (0x00010fbf) popup_query_data_code_window_t2

0x8374,	// (0x00010fd1) popup_query_data_code_window_t3_ParamLimits

0x8374,	// (0x00010fd1) popup_query_data_code_window_t3

0x838a,	// (0x00010fe7) popup_query_data_code_window_t4_ParamLimits

0x838a,	// (0x00010fe7) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0001822b) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0001822b) popup_query_data_code_window_t

0x6d59,	// (0x0000f9b6) list_single_midp_graphic_pane_g3

0x83a2,	// (0x00010fff) query_popup_data_pane_cp2_ParamLimits

0x83b5,	// (0x00011012) query_popup_pane_cp2_ParamLimits

0x83b5,	// (0x00011012) query_popup_pane_cp2

0x7eda,	// (0x00010b37) bg_popup_window_pane_cp11

0xaf52,	// (0x00013baf) heading_pane_cp5

0x849d,	// (0x000110fa) listscroll_popup_info_pane

0x7eda,	// (0x00010b37) input_focus_pane_cp3

0x83c8,	// (0x00011025) query_popup_pane_t1

0x83d6,	// (0x00011033) list_popup_info_pane_ParamLimits

0x83d6,	// (0x00011033) list_popup_info_pane

0x83e5,	// (0x00011042) listscroll_popup_info_pane_g1

0x83ed,	// (0x0001104a) scroll_pane_cp7

0x83f7,	// (0x00011054) popup_info_list_pane_t1_ParamLimits

0x83f7,	// (0x00011054) popup_info_list_pane_t1

0x8411,	// (0x0001106e) popup_info_list_pane_t2_ParamLimits

0x8411,	// (0x0001106e) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00018234) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00018234) popup_info_list_pane_t

0x7eda,	// (0x00010b37) bg_popup_window_pane_cp12

0xc38c,	// (0x00014fe9) find_popup_pane

0x7fba,	// (0x00010c17) bg_popup_window_pane_cp3

0x842b,	// (0x00011088) heading_pane_cp3

0x8437,	// (0x00011094) listscroll_popup_graphic_pane

0x7eda,	// (0x00010b37) bg_popup_window_pane_cp4

0x8493,	// (0x000110f0) heading_pane_cp4

0x849d,	// (0x000110fa) listscroll_popup_colour_pane

0x84a5,	// (0x00011102) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x84a5,	// (0x00011102) cell_large_graphic_colour_none_popup_pane

0x84b9,	// (0x00011116) grid_large_graphic_colour_popup_pane_ParamLimits

0x84b9,	// (0x00011116) grid_large_graphic_colour_popup_pane

0x84dd,	// (0x0001113a) listscroll_popup_colour_pane_g1_ParamLimits

0x84dd,	// (0x0001113a) listscroll_popup_colour_pane_g1

0x84f4,	// (0x00011151) listscroll_popup_colour_pane_g2_ParamLimits

0x84f4,	// (0x00011151) listscroll_popup_colour_pane_g2

0x850b,	// (0x00011168) listscroll_popup_colour_pane_g3_ParamLimits

0x850b,	// (0x00011168) listscroll_popup_colour_pane_g3

0x851b,	// (0x00011178) listscroll_popup_colour_pane_g4_ParamLimits

0x851b,	// (0x00011178) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00018239) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00018239) listscroll_popup_colour_pane_g

0x852a,	// (0x00011187) scroll_pane_cp6_ParamLimits

0x852a,	// (0x00011187) scroll_pane_cp6

0x853c,	// (0x00011199) cell_large_graphic_colour_popup_pane_ParamLimits

0x853c,	// (0x00011199) cell_large_graphic_colour_popup_pane

0x855b,	// (0x000111b8) cell_large_graphic_colour_none_popup_pane_t1

0x7eda,	// (0x00010b37) grid_highlight_pane_cp5

0x856a,	// (0x000111c7) cell_large_graphic_colour_popup_pane_g1

0x8572,	// (0x000111cf) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00018242) cell_large_graphic_colour_popup_pane_g

0x857a,	// (0x000111d7) cell_large_graphic_colour_popup_pane_g2_copy1

0x8583,	// (0x000111e0) grid_highlight_pane_cp4

0x858b,	// (0x000111e8) bg_popup_window_pane_cp8_ParamLimits

0x858b,	// (0x000111e8) bg_popup_window_pane_cp8

0x85a6,	// (0x00011203) popup_snote_single_text_window_g1_ParamLimits

0x85a6,	// (0x00011203) popup_snote_single_text_window_g1

0x85b8,	// (0x00011215) popup_snote_single_text_window_t1_ParamLimits

0x85b8,	// (0x00011215) popup_snote_single_text_window_t1

0x85cb,	// (0x00011228) popup_snote_single_text_window_t2_ParamLimits

0x85cb,	// (0x00011228) popup_snote_single_text_window_t2

0x85de,	// (0x0001123b) popup_snote_single_text_window_t3_ParamLimits

0x85de,	// (0x0001123b) popup_snote_single_text_window_t3

0x8617,	// (0x00011274) popup_snote_single_text_window_t4_ParamLimits

0x8617,	// (0x00011274) popup_snote_single_text_window_t4

0x864b,	// (0x000112a8) popup_snote_single_text_window_t5_ParamLimits

0x864b,	// (0x000112a8) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00018247) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00018247) popup_snote_single_text_window_t

0x867a,	// (0x000112d7) bg_popup_window_pane_cp9_ParamLimits

0x867a,	// (0x000112d7) bg_popup_window_pane_cp9

0x85a6,	// (0x00011203) popup_snote_single_graphic_window_g1_ParamLimits

0x85a6,	// (0x00011203) popup_snote_single_graphic_window_g1

0x8688,	// (0x000112e5) popup_snote_single_graphic_window_g2_ParamLimits

0x8688,	// (0x000112e5) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00018252) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00018252) popup_snote_single_graphic_window_g

0x8694,	// (0x000112f1) popup_snote_single_graphic_window_t1_ParamLimits

0x8694,	// (0x000112f1) popup_snote_single_graphic_window_t1

0x86a7,	// (0x00011304) popup_snote_single_graphic_window_t2_ParamLimits

0x86a7,	// (0x00011304) popup_snote_single_graphic_window_t2

0x86ba,	// (0x00011317) popup_snote_single_graphic_window_t3_ParamLimits

0x86ba,	// (0x00011317) popup_snote_single_graphic_window_t3

0x86f3,	// (0x00011350) popup_snote_single_graphic_window_t4_ParamLimits

0x86f3,	// (0x00011350) popup_snote_single_graphic_window_t4

0x8727,	// (0x00011384) popup_snote_single_graphic_window_t5_ParamLimits

0x8727,	// (0x00011384) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00018257) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00018257) popup_snote_single_graphic_window_t

0xc2cc,	// (0x00014f29) grid_graphic_popup_pane_ParamLimits

0xc2cc,	// (0x00014f29) grid_graphic_popup_pane

0xc2f8,	// (0x00014f55) listscroll_popup_graphic_pane_g1_ParamLimits

0xc2f8,	// (0x00014f55) listscroll_popup_graphic_pane_g1

0xc30c,	// (0x00014f69) listscroll_popup_graphic_pane_g2_ParamLimits

0xc30c,	// (0x00014f69) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e4,	// (0x00018641) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e4,	// (0x00018641) listscroll_popup_graphic_pane_g

0xc320,	// (0x00014f7d) scroll_pane_cp5

0xc277,	// (0x00014ed4) cell_graphic_popup_pane_ParamLimits

0xc277,	// (0x00014ed4) cell_graphic_popup_pane

0xc258,	// (0x00014eb5) cell_graphic_popup_pane_g1

0xc260,	// (0x00014ebd) cell_graphic_popup_pane_g2

0x857a,	// (0x000111d7) cell_graphic_popup_pane_g3

0x0002,

0xf9dd,	// (0x0001863a) cell_graphic_popup_pane_g

0xc269,	// (0x00014ec6) cell_graphic_popup_pane_t2

0x8583,	// (0x000111e0) grid_highlight_pane_cp3

0x8768,	// (0x000113c5) list_gen_pane_ParamLimits

0x8768,	// (0x000113c5) list_gen_pane

0x879a,	// (0x000113f7) scroll_pane

0xc1ba,	// (0x00014e17) bg_list_pane_g1_ParamLimits

0xc1ba,	// (0x00014e17) bg_list_pane_g1

0xc1d5,	// (0x00014e32) bg_list_pane_g2_ParamLimits

0xc1d5,	// (0x00014e32) bg_list_pane_g2

0xc1e8,	// (0x00014e45) bg_list_pane_g3_ParamLimits

0xc1e8,	// (0x00014e45) bg_list_pane_g3

0xc1fa,	// (0x00014e57) bg_list_pane_g4_ParamLimits

0xc1fa,	// (0x00014e57) bg_list_pane_g4

0xc20c,	// (0x00014e69) bg_list_pane_g5_ParamLimits

0xc20c,	// (0x00014e69) bg_list_pane_g5

0x0004,

0xf9d2,	// (0x0001862f) bg_list_pane_g_ParamLimits

0xf9d2,	// (0x0001862f) bg_list_pane_g

0xc0af,	// (0x00014d0c) list_double2_graphic_large_graphic_pane_ParamLimits

0xc0af,	// (0x00014d0c) list_double2_graphic_large_graphic_pane

0xc0af,	// (0x00014d0c) list_double2_graphic_pane_ParamLimits

0xc0af,	// (0x00014d0c) list_double2_graphic_pane

0xc0af,	// (0x00014d0c) list_double2_large_graphic_pane_ParamLimits

0xc0af,	// (0x00014d0c) list_double2_large_graphic_pane

0xc0af,	// (0x00014d0c) list_double2_pane_ParamLimits

0xc0af,	// (0x00014d0c) list_double2_pane

0xc0af,	// (0x00014d0c) list_double_graphic_heading_pane_ParamLimits

0xc0af,	// (0x00014d0c) list_double_graphic_heading_pane

0xc0af,	// (0x00014d0c) list_double_graphic_pane_ParamLimits

0xc0af,	// (0x00014d0c) list_double_graphic_pane

0xc0af,	// (0x00014d0c) list_double_heading_pane_ParamLimits

0xc0af,	// (0x00014d0c) list_double_heading_pane

0xc0af,	// (0x00014d0c) list_double_large_graphic_pane_ParamLimits

0xc0af,	// (0x00014d0c) list_double_large_graphic_pane

0xc0af,	// (0x00014d0c) list_double_number_pane_ParamLimits

0xc0af,	// (0x00014d0c) list_double_number_pane

0xc0af,	// (0x00014d0c) list_double_pane_ParamLimits

0xc0af,	// (0x00014d0c) list_double_pane

0xc0af,	// (0x00014d0c) list_double_time_pane_ParamLimits

0xc0af,	// (0x00014d0c) list_double_time_pane

0xc0af,	// (0x00014d0c) list_setting_number_pane_ParamLimits

0xc0af,	// (0x00014d0c) list_setting_number_pane

0xc0af,	// (0x00014d0c) list_setting_pane_ParamLimits

0xc0af,	// (0x00014d0c) list_setting_pane

0xc106,	// (0x00014d63) list_single_2graphic_pane_ParamLimits

0xc106,	// (0x00014d63) list_single_2graphic_pane

0xc106,	// (0x00014d63) list_single_graphic_heading_pane_ParamLimits

0xc106,	// (0x00014d63) list_single_graphic_heading_pane

0xc106,	// (0x00014d63) list_single_graphic_pane_ParamLimits

0xc106,	// (0x00014d63) list_single_graphic_pane

0xc106,	// (0x00014d63) list_single_heading_pane_ParamLimits

0xc106,	// (0x00014d63) list_single_heading_pane

0xc194,	// (0x00014df1) list_single_large_graphic_pane_ParamLimits

0xc194,	// (0x00014df1) list_single_large_graphic_pane

0xc106,	// (0x00014d63) list_single_number_heading_pane_ParamLimits

0xc106,	// (0x00014d63) list_single_number_heading_pane

0xc106,	// (0x00014d63) list_single_number_pane_ParamLimits

0xc106,	// (0x00014d63) list_single_number_pane

0xc106,	// (0x00014d63) list_single_pane_ParamLimits

0xc106,	// (0x00014d63) list_single_pane

0x7eda,	// (0x00010b37) list_highlight_pane_cp1

0x87da,	// (0x00011437) list_single_pane_g1_ParamLimits

0x87da,	// (0x00011437) list_single_pane_g1

0x87e6,	// (0x00011443) list_single_pane_g2_ParamLimits

0x87e6,	// (0x00011443) list_single_pane_g2

0x0001,

0xf60c,	// (0x00018269) list_single_pane_g_ParamLimits

0xf60c,	// (0x00018269) list_single_pane_g

0xc068,	// (0x00014cc5) list_single_pane_t1_ParamLimits

0xc068,	// (0x00014cc5) list_single_pane_t1

0x87da,	// (0x00011437) list_single_number_pane_g1_ParamLimits

0x87da,	// (0x00011437) list_single_number_pane_g1

0x87e6,	// (0x00011443) list_single_number_pane_g2_ParamLimits

0x87e6,	// (0x00011443) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x00018269) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x00018269) list_single_number_pane_g

0xbe02,	// (0x00014a5f) list_single_number_pane_t1_ParamLimits

0xbe02,	// (0x00014a5f) list_single_number_pane_t1

0xbe18,	// (0x00014a75) list_single_number_pane_t2_ParamLimits

0xbe18,	// (0x00014a75) list_single_number_pane_t2

0x0001,

0xf993,	// (0x000185f0) list_single_number_pane_t_ParamLimits

0xf993,	// (0x000185f0) list_single_number_pane_t

0x87ce,	// (0x0001142b) list_single_graphic_pane_g1_ParamLimits

0x87ce,	// (0x0001142b) list_single_graphic_pane_g1

0x87da,	// (0x00011437) list_single_graphic_pane_g2_ParamLimits

0x87da,	// (0x00011437) list_single_graphic_pane_g2

0x87e6,	// (0x00011443) list_single_graphic_pane_g3_ParamLimits

0x87e6,	// (0x00011443) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00018262) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00018262) list_single_graphic_pane_g

0x87f2,	// (0x0001144f) list_single_graphic_pane_t1_ParamLimits

0x87f2,	// (0x0001144f) list_single_graphic_pane_t1

0x87da,	// (0x00011437) list_single_heading_pane_g1_ParamLimits

0x87da,	// (0x00011437) list_single_heading_pane_g1

0x87e6,	// (0x00011443) list_single_heading_pane_g2_ParamLimits

0x87e6,	// (0x00011443) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00018269) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00018269) list_single_heading_pane_g

0x8808,	// (0x00011465) list_single_heading_pane_t1_ParamLimits

0x8808,	// (0x00011465) list_single_heading_pane_t1

0x881e,	// (0x0001147b) list_single_heading_pane_t2_ParamLimits

0x881e,	// (0x0001147b) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0001826e) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0001826e) list_single_heading_pane_t

0x87da,	// (0x00011437) list_single_number_heading_pane_g1_ParamLimits

0x87da,	// (0x00011437) list_single_number_heading_pane_g1

0x87e6,	// (0x00011443) list_single_number_heading_pane_g2_ParamLimits

0x87e6,	// (0x00011443) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x00018269) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x00018269) list_single_number_heading_pane_g

0x8808,	// (0x00011465) list_single_number_heading_pane_t1_ParamLimits

0x8808,	// (0x00011465) list_single_number_heading_pane_t1

0x8830,	// (0x0001148d) list_single_number_heading_pane_t2_ParamLimits

0x8830,	// (0x0001148d) list_single_number_heading_pane_t2

0x8842,	// (0x0001149f) list_single_number_heading_pane_t3_ParamLimits

0x8842,	// (0x0001149f) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x00018273) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x00018273) list_single_number_heading_pane_t

0x8854,	// (0x000114b1) list_single_graphic_heading_pane_g1_ParamLimits

0x8854,	// (0x000114b1) list_single_graphic_heading_pane_g1

0x8860,	// (0x000114bd) list_single_graphic_heading_pane_g4_ParamLimits

0x8860,	// (0x000114bd) list_single_graphic_heading_pane_g4

0x87e6,	// (0x00011443) list_single_graphic_heading_pane_g5_ParamLimits

0x87e6,	// (0x00011443) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0001827a) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001827a) list_single_graphic_heading_pane_g

0x8808,	// (0x00011465) list_single_graphic_heading_pane_t1_ParamLimits

0x8808,	// (0x00011465) list_single_graphic_heading_pane_t1

0x8871,	// (0x000114ce) list_single_graphic_heading_pane_t2_ParamLimits

0x8871,	// (0x000114ce) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x00018281) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x00018281) list_single_graphic_heading_pane_t

0x8883,	// (0x000114e0) list_single_large_graphic_pane_g1_ParamLimits

0x8883,	// (0x000114e0) list_single_large_graphic_pane_g1

0x888f,	// (0x000114ec) list_single_large_graphic_pane_g2_ParamLimits

0x888f,	// (0x000114ec) list_single_large_graphic_pane_g2

0x889b,	// (0x000114f8) list_single_large_graphic_pane_g3_ParamLimits

0x889b,	// (0x000114f8) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x00018286) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x00018286) list_single_large_graphic_pane_g

0xb0c4,	// (0x00013d21) wait_border_pane_g2_copy1

0x88a7,	// (0x00011504) list_single_large_graphic_pane_g4_cp2

0x88af,	// (0x0001150c) list_single_large_graphic_pane_t1_ParamLimits

0x88af,	// (0x0001150c) list_single_large_graphic_pane_t1

0x88c5,	// (0x00011522) list_double_pane_g1_ParamLimits

0x88c5,	// (0x00011522) list_double_pane_g1

0x88d1,	// (0x0001152e) list_double_pane_g2_ParamLimits

0x88d1,	// (0x0001152e) list_double_pane_g2

0x0001,

0xf630,	// (0x0001828d) list_double_pane_g_ParamLimits

0xf630,	// (0x0001828d) list_double_pane_g

0x88dd,	// (0x0001153a) list_double_pane_t1_ParamLimits

0x88dd,	// (0x0001153a) list_double_pane_t1

0x88f3,	// (0x00011550) list_double_pane_t2_ParamLimits

0x88f3,	// (0x00011550) list_double_pane_t2

0x0001,

0xf635,	// (0x00018292) list_double_pane_t_ParamLimits

0xf635,	// (0x00018292) list_double_pane_t

0x8905,	// (0x00011562) list_double2_pane_g1_ParamLimits

0x8905,	// (0x00011562) list_double2_pane_g1

0x8916,	// (0x00011573) list_double2_pane_g2_ParamLimits

0x8916,	// (0x00011573) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00018297) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00018297) list_double2_pane_g

0x8922,	// (0x0001157f) list_double2_pane_t1_ParamLimits

0x8922,	// (0x0001157f) list_double2_pane_t1

0x8938,	// (0x00011595) list_double2_pane_t2_ParamLimits

0x8938,	// (0x00011595) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0001829c) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0001829c) list_double2_pane_t

0x88c5,	// (0x00011522) list_double_number_pane_g1_ParamLimits

0x88c5,	// (0x00011522) list_double_number_pane_g1

0x88d1,	// (0x0001152e) list_double_number_pane_g2_ParamLimits

0x88d1,	// (0x0001152e) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0001828d) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0001828d) list_double_number_pane_g

0x894a,	// (0x000115a7) list_double_number_pane_t1_ParamLimits

0x894a,	// (0x000115a7) list_double_number_pane_t1

0x895c,	// (0x000115b9) list_double_number_pane_t2_ParamLimits

0x895c,	// (0x000115b9) list_double_number_pane_t2

0x8972,	// (0x000115cf) list_double_number_pane_t3_ParamLimits

0x8972,	// (0x000115cf) list_double_number_pane_t3

0x0002,

0xf644,	// (0x000182a1) list_double_number_pane_t_ParamLimits

0xf644,	// (0x000182a1) list_double_number_pane_t

0x8984,	// (0x000115e1) list_double_graphic_pane_g1_ParamLimits

0x8984,	// (0x000115e1) list_double_graphic_pane_g1

0x8990,	// (0x000115ed) list_double_graphic_pane_g2_ParamLimits

0x8990,	// (0x000115ed) list_double_graphic_pane_g2

0x899f,	// (0x000115fc) list_double_graphic_pane_g3_ParamLimits

0x899f,	// (0x000115fc) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x000182a8) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x000182a8) list_double_graphic_pane_g

0x89b7,	// (0x00011614) list_double_graphic_pane_t1_ParamLimits

0x89b7,	// (0x00011614) list_double_graphic_pane_t1

0x89cd,	// (0x0001162a) list_double_graphic_pane_t2_ParamLimits

0x89cd,	// (0x0001162a) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x000182b1) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x000182b1) list_double_graphic_pane_t

0x89df,	// (0x0001163c) list_double2_graphic_pane_g1_ParamLimits

0x89df,	// (0x0001163c) list_double2_graphic_pane_g1

0x89eb,	// (0x00011648) list_double2_graphic_pane_g2_ParamLimits

0x89eb,	// (0x00011648) list_double2_graphic_pane_g2

0x8916,	// (0x00011573) list_double2_graphic_pane_g3_ParamLimits

0x8916,	// (0x00011573) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x000182b6) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x000182b6) list_double2_graphic_pane_g

0x89f7,	// (0x00011654) list_double2_graphic_pane_t1_ParamLimits

0x89f7,	// (0x00011654) list_double2_graphic_pane_t1

0x8a0d,	// (0x0001166a) list_double2_graphic_pane_t2_ParamLimits

0x8a0d,	// (0x0001166a) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x000182bd) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x000182bd) list_double2_graphic_pane_t

0x8a1f,	// (0x0001167c) list_double_large_graphic_pane_g1_ParamLimits

0x8a1f,	// (0x0001167c) list_double_large_graphic_pane_g1

0x8a4a,	// (0x000116a7) list_double_large_graphic_pane_g2_ParamLimits

0x8a4a,	// (0x000116a7) list_double_large_graphic_pane_g2

0x88d1,	// (0x0001152e) list_double_large_graphic_pane_g3_ParamLimits

0x88d1,	// (0x0001152e) list_double_large_graphic_pane_g3

0x8a5b,	// (0x000116b8) list_double_large_graphic_pane_g4_ParamLimits

0x8a5b,	// (0x000116b8) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x000182c2) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x000182c2) list_double_large_graphic_pane_g

0x8a82,	// (0x000116df) list_double_large_graphic_pane_t1_ParamLimits

0x8a82,	// (0x000116df) list_double_large_graphic_pane_t1

0x8a9b,	// (0x000116f8) list_double_large_graphic_pane_t2_ParamLimits

0x8a9b,	// (0x000116f8) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x000182cd) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x000182cd) list_double_large_graphic_pane_t

0x8aad,	// (0x0001170a) list_double2_large_graphic_pane_g1_ParamLimits

0x8aad,	// (0x0001170a) list_double2_large_graphic_pane_g1

0x8905,	// (0x00011562) list_double2_large_graphic_pane_g2_ParamLimits

0x8905,	// (0x00011562) list_double2_large_graphic_pane_g2

0x8916,	// (0x00011573) list_double2_large_graphic_pane_g3_ParamLimits

0x8916,	// (0x00011573) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x000182d2) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x000182d2) list_double2_large_graphic_pane_g

0x8ab9,	// (0x00011716) list_double2_large_graphic_pane_t1_ParamLimits

0x8ab9,	// (0x00011716) list_double2_large_graphic_pane_t1

0x8acf,	// (0x0001172c) list_double2_large_graphic_pane_t2_ParamLimits

0x8acf,	// (0x0001172c) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x000182d9) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x000182d9) list_double2_large_graphic_pane_t

0x8ae1,	// (0x0001173e) list_double_heading_pane_g1_ParamLimits

0x8ae1,	// (0x0001173e) list_double_heading_pane_g1

0x8af2,	// (0x0001174f) list_double_heading_pane_g2_ParamLimits

0x8af2,	// (0x0001174f) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x000182de) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x000182de) list_double_heading_pane_g

0x8afe,	// (0x0001175b) list_double_heading_pane_t1_ParamLimits

0x8afe,	// (0x0001175b) list_double_heading_pane_t1

0x8b14,	// (0x00011771) list_double_heading_pane_t2_ParamLimits

0x8b14,	// (0x00011771) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x000182e3) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x000182e3) list_double_heading_pane_t

0x8984,	// (0x000115e1) list_double_graphic_heading_pane_g1_ParamLimits

0x8984,	// (0x000115e1) list_double_graphic_heading_pane_g1

0x8ae1,	// (0x0001173e) list_double_graphic_heading_pane_g2_ParamLimits

0x8ae1,	// (0x0001173e) list_double_graphic_heading_pane_g2

0x8af2,	// (0x0001174f) list_double_graphic_heading_pane_g3_ParamLimits

0x8af2,	// (0x0001174f) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x000182e8) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x000182e8) list_double_graphic_heading_pane_g

0x8b26,	// (0x00011783) list_double_graphic_heading_pane_t1_ParamLimits

0x8b26,	// (0x00011783) list_double_graphic_heading_pane_t1

0x8b3c,	// (0x00011799) list_double_graphic_heading_pane_t2_ParamLimits

0x8b3c,	// (0x00011799) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x000182ef) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x000182ef) list_double_graphic_heading_pane_t

0x8a4a,	// (0x000116a7) list_double_time_pane_g1_ParamLimits

0x8a4a,	// (0x000116a7) list_double_time_pane_g1

0x88d1,	// (0x0001152e) list_double_time_pane_g2_ParamLimits

0x88d1,	// (0x0001152e) list_double_time_pane_g2

0x0001,

0xf697,	// (0x000182f4) list_double_time_pane_g_ParamLimits

0xf697,	// (0x000182f4) list_double_time_pane_g

0x8b4e,	// (0x000117ab) list_double_time_pane_t1_ParamLimits

0x8b4e,	// (0x000117ab) list_double_time_pane_t1

0x8b64,	// (0x000117c1) list_double_time_pane_t2_ParamLimits

0x8b64,	// (0x000117c1) list_double_time_pane_t2

0x8b76,	// (0x000117d3) list_double_time_pane_t3_ParamLimits

0x8b76,	// (0x000117d3) list_double_time_pane_t3

0x8b88,	// (0x000117e5) list_double_time_pane_t4_ParamLimits

0x8b88,	// (0x000117e5) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x000182f9) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x000182f9) list_double_time_pane_t

0x89eb,	// (0x00011648) list_setting_pane_g1_ParamLimits

0x89eb,	// (0x00011648) list_setting_pane_g1

0x8916,	// (0x00011573) list_setting_pane_g2_ParamLimits

0x8916,	// (0x00011573) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x00018302) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x00018302) list_setting_pane_g

0x8b9a,	// (0x000117f7) list_setting_pane_t1_ParamLimits

0x8b9a,	// (0x000117f7) list_setting_pane_t1

0x8bb1,	// (0x0001180e) list_setting_pane_t2_ParamLimits

0x8bb1,	// (0x0001180e) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x00018307) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x00018307) list_setting_pane_t

0x8bee,	// (0x0001184b) set_value_pane_cp_ParamLimits

0x8bee,	// (0x0001184b) set_value_pane_cp

0x89eb,	// (0x00011648) list_setting_number_pane_g1_ParamLimits

0x89eb,	// (0x00011648) list_setting_number_pane_g1

0x8916,	// (0x00011573) list_setting_number_pane_g2_ParamLimits

0x8916,	// (0x00011573) list_setting_number_pane_g2

0x0001,

0xf6a5,	// (0x00018302) list_setting_number_pane_g_ParamLimits

0xf6a5,	// (0x00018302) list_setting_number_pane_g

0x8bfa,	// (0x00011857) list_setting_number_pane_t1_ParamLimits

0x8bfa,	// (0x00011857) list_setting_number_pane_t1

0x8c0e,	// (0x0001186b) list_setting_number_pane_t2_ParamLimits

0x8c0e,	// (0x0001186b) list_setting_number_pane_t2

0x8c25,	// (0x00011882) list_setting_number_pane_t3_ParamLimits

0x8c25,	// (0x00011882) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0001830e) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0001830e) list_setting_number_pane_t

0x8bee,	// (0x0001184b) set_value_pane_ParamLimits

0x8bee,	// (0x0001184b) set_value_pane

0x8c68,	// (0x000118c5) bg_set_opt_pane_ParamLimits

0x8c68,	// (0x000118c5) bg_set_opt_pane

0x8c89,	// (0x000118e6) set_value_pane_t1

0x8c97,	// (0x000118f4) slider_set_pane_cp3

0x8ca0,	// (0x000118fd) volume_small_pane_cp

0x8ca9,	// (0x00011906) list_form_gen_pane

0x8cb2,	// (0x0001190f) scroll_pane_cp8

0x8cc3,	// (0x00011920) form_field_data_pane_ParamLimits

0x8cc3,	// (0x00011920) form_field_data_pane

0x8ce3,	// (0x00011940) form_field_data_wide_pane_ParamLimits

0x8ce3,	// (0x00011940) form_field_data_wide_pane

0x8d04,	// (0x00011961) form_field_popup_pane_ParamLimits

0x8d04,	// (0x00011961) form_field_popup_pane

0x8d22,	// (0x0001197f) form_field_popup_wide_pane_ParamLimits

0x8d22,	// (0x0001197f) form_field_popup_wide_pane

0x8d3d,	// (0x0001199a) form_field_slider_pane_ParamLimits

0x8d3d,	// (0x0001199a) form_field_slider_pane

0x8d50,	// (0x000119ad) form_field_slider_wide_pane_ParamLimits

0x8d50,	// (0x000119ad) form_field_slider_wide_pane

0x8d63,	// (0x000119c0) data_form_pane

0x8d79,	// (0x000119d6) form_field_data_pane_t1

0x8d93,	// (0x000119f0) input_focus_pane

0x8da1,	// (0x000119fe) data_form_wide_pane

0x8dd9,	// (0x00011a36) form_field_data_wide_pane_t1

0x8598,	// (0x000111f5) input_focus_pane_cp6

0x8dfb,	// (0x00011a58) form_field_popup_pane_t1

0x8d93,	// (0x000119f0) input_focus_pane_cp7

0x8e15,	// (0x00011a72) list_form_pane

0x8e29,	// (0x00011a86) form_field_popup_wide_pane_t1

0x8d93,	// (0x000119f0) input_focus_pane_cp8

0x8e3e,	// (0x00011a9b) list_form_wide_pane

0x8e55,	// (0x00011ab2) form_field_slider_pane_t1_ParamLimits

0x8e55,	// (0x00011ab2) form_field_slider_pane_t1

0x8e69,	// (0x00011ac6) form_field_slider_pane_t2_ParamLimits

0x8e69,	// (0x00011ac6) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0001831e) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0001831e) form_field_slider_pane_t

0x824f,	// (0x00010eac) input_focus_pane_cp9_ParamLimits

0x824f,	// (0x00010eac) input_focus_pane_cp9

0x8e7b,	// (0x00011ad8) slider_cont_pane_ParamLimits

0x8e7b,	// (0x00011ad8) slider_cont_pane

0x8e8f,	// (0x00011aec) form_field_slider_wide_pane_t1_ParamLimits

0x8e8f,	// (0x00011aec) form_field_slider_wide_pane_t1

0x8ea1,	// (0x00011afe) form_field_slider_wide_pane_t2_ParamLimits

0x8ea1,	// (0x00011afe) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x00018323) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x00018323) form_field_slider_wide_pane_t

0x824f,	// (0x00010eac) input_focus_pane_cp10_ParamLimits

0x824f,	// (0x00010eac) input_focus_pane_cp10

0x8eb3,	// (0x00011b10) slider_cont_pane_cp1_ParamLimits

0x8eb3,	// (0x00011b10) slider_cont_pane_cp1

0x8ec7,	// (0x00011b24) slider_form_pane_cp

0x8ecf,	// (0x00011b2c) input_focus_pane_g1

0x8ed7,	// (0x00011b34) input_focus_pane_g2

0x8edf,	// (0x00011b3c) input_focus_pane_g3

0x8ee7,	// (0x00011b44) input_focus_pane_g4

0x8eef,	// (0x00011b4c) input_focus_pane_g5

0x8ef7,	// (0x00011b54) input_focus_pane_g6

0x8eff,	// (0x00011b5c) input_focus_pane_g7

0x8f07,	// (0x00011b64) input_focus_pane_g8

0x8f0f,	// (0x00011b6c) input_focus_pane_g9

0x7ed0,	// (0x00010b2d) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x00018328) input_focus_pane_g

0xb0cd,	// (0x00013d2a) wait_border_pane_g3_copy1

0x8f17,	// (0x00011b74) data_form_pane_t1

0x7ed0,	// (0x00010b2d) wait_anim_pane_g1_copy1

0xc04b,	// (0x00014ca8) data_form_wide_pane_t1

0x8f32,	// (0x00011b8f) list_form_graphic_pane_cp_ParamLimits

0x8f32,	// (0x00011b8f) list_form_graphic_pane_cp

0xc020,	// (0x00014c7d) slider_form_pane_g1

0xc029,	// (0x00014c86) slider_form_pane_g2

0x0006,

0xf9c3,	// (0x00018620) slider_form_pane_g

0x8f49,	// (0x00011ba6) list_form_graphic_pane_ParamLimits

0x8f49,	// (0x00011ba6) list_form_graphic_pane

0x8f63,	// (0x00011bc0) list_form_graphic_pane_g1

0x8f6b,	// (0x00011bc8) list_form_graphic_pane_t1_ParamLimits

0x8f6b,	// (0x00011bc8) list_form_graphic_pane_t1

0x7fba,	// (0x00010c17) list_highlight_pane_cp5_ParamLimits

0x7fba,	// (0x00010c17) list_highlight_pane_cp5

0x8f80,	// (0x00011bdd) find_pane_g1

0x8f89,	// (0x00011be6) input_find_pane

0x8f92,	// (0x00011bef) input_find_pane_g1_ParamLimits

0x8f92,	// (0x00011bef) input_find_pane_g1

0x8f9e,	// (0x00011bfb) input_find_pane_t1_ParamLimits

0x8f9e,	// (0x00011bfb) input_find_pane_t1

0x8fb3,	// (0x00011c10) input_find_pane_t2_ParamLimits

0x8fb3,	// (0x00011c10) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0001833d) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0001833d) input_find_pane_t

0x8fc8,	// (0x00011c25) input_focus_pane_cp5_ParamLimits

0x8fc8,	// (0x00011c25) input_focus_pane_cp5

0x8fe2,	// (0x00011c3f) bg_popup_window_pane_cp2_ParamLimits

0x8fe2,	// (0x00011c3f) bg_popup_window_pane_cp2

0x8fef,	// (0x00011c4c) listscroll_menu_pane_ParamLimits

0x8fef,	// (0x00011c4c) listscroll_menu_pane

0x8ffb,	// (0x00011c58) popup_submenu_window_ParamLimits

0x8ffb,	// (0x00011c58) popup_submenu_window

0x901f,	// (0x00011c7c) find_popup_pane_g1

0x9027,	// (0x00011c84) input_popup_find_pane_cp

0x8fc8,	// (0x00011c25) input_focus_pane_cp4_ParamLimits

0x8fc8,	// (0x00011c25) input_focus_pane_cp4

0x903f,	// (0x00011c9c) input_popup_find_pane_t1_ParamLimits

0x903f,	// (0x00011c9c) input_popup_find_pane_t1

0x7eda,	// (0x00010b37) bg_popup_sub_pane_cp

0x906d,	// (0x00011cca) listscroll_popup_sub_pane

0x9075,	// (0x00011cd2) list_submenu_pane_ParamLimits

0x9075,	// (0x00011cd2) list_submenu_pane

0x9086,	// (0x00011ce3) scroll_pane_cp4

0x908e,	// (0x00011ceb) list_single_popup_submenu_pane_ParamLimits

0x908e,	// (0x00011ceb) list_single_popup_submenu_pane

0x90a1,	// (0x00011cfe) list_single_popup_submenu_pane_g1

0x90a9,	// (0x00011d06) list_single_popup_submenu_pane_t1_ParamLimits

0x90a9,	// (0x00011d06) list_single_popup_submenu_pane_t1

0x7fba,	// (0x00010c17) bg_active_tab_pane_cp1_ParamLimits

0x7fba,	// (0x00010c17) bg_active_tab_pane_cp1

0x90be,	// (0x00011d1b) tabs_2_active_pane_g1

0x90c6,	// (0x00011d23) tabs_2_active_pane_t1

0x7fba,	// (0x00010c17) bg_passive_tab_pane_cp1_ParamLimits

0x7fba,	// (0x00010c17) bg_passive_tab_pane_cp1

0x90be,	// (0x00011d1b) tabs_2_passive_pane_g1

0x90c6,	// (0x00011d23) tabs_2_passive_pane_t1

0x90d8,	// (0x00011d35) bg_active_tab_pane_cp4

0x90e6,	// (0x00011d43) tabs_2_long_active_pane_t1

0x90f9,	// (0x00011d56) bg_passive_tab_pane_cp4

0x6d61,	// (0x0000f9be) list_single_midp_graphic_pane_g4_ParamLimits

0x90d8,	// (0x00011d35) bg_active_tab_pane_cp5

0x9105,	// (0x00011d62) tabs_3_long_active_pane_t1

0x90f9,	// (0x00011d56) bg_passive_tab_pane_cp5

0x6d61,	// (0x0000f9be) list_single_midp_graphic_pane_g4

0x7fba,	// (0x00010c17) bg_popup_window_pane_cp13_ParamLimits

0x7fba,	// (0x00010c17) bg_popup_window_pane_cp13

0x9120,	// (0x00011d7d) listscroll_popup_fast_pane_ParamLimits

0x9120,	// (0x00011d7d) listscroll_popup_fast_pane

0x912f,	// (0x00011d8c) grid_popup_fast_pane_ParamLimits

0x912f,	// (0x00011d8c) grid_popup_fast_pane

0x9141,	// (0x00011d9e) scroll_pane_cp9_ParamLimits

0x9141,	// (0x00011d9e) scroll_pane_cp9

0xddd0,	// (0x00016a2d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xddd0,	// (0x00016a2d) list_single_graphic_hl_pane_t1_cp2

0x9165,	// (0x00011dc2) input_focus_pane_cp20_ParamLimits

0x9165,	// (0x00011dc2) input_focus_pane_cp20

0x9173,	// (0x00011dd0) query_popup_data_pane_t1_ParamLimits

0x9173,	// (0x00011dd0) query_popup_data_pane_t1

0x9186,	// (0x00011de3) query_popup_data_pane_t2_ParamLimits

0x9186,	// (0x00011de3) query_popup_data_pane_t2

0x91cc,	// (0x00011e29) query_popup_data_pane_t3_ParamLimits

0x91cc,	// (0x00011e29) query_popup_data_pane_t3

0x920d,	// (0x00011e6a) query_popup_data_pane_t4_ParamLimits

0x920d,	// (0x00011e6a) query_popup_data_pane_t4

0x9249,	// (0x00011ea6) query_popup_data_pane_t5_ParamLimits

0x9249,	// (0x00011ea6) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x00018342) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x00018342) query_popup_data_pane_t

0x8ecf,	// (0x00011b2c) bg_set_opt_pane_g1

0x8ed7,	// (0x00011b34) bg_set_opt_pane_g2

0x8edf,	// (0x00011b3c) bg_set_opt_pane_g3

0x8ee7,	// (0x00011b44) bg_set_opt_pane_g4

0x8eef,	// (0x00011b4c) bg_set_opt_pane_g5

0x8ef7,	// (0x00011b54) bg_set_opt_pane_g6

0x8eff,	// (0x00011b5c) bg_set_opt_pane_g7

0x8f07,	// (0x00011b64) bg_set_opt_pane_g8

0x8f0f,	// (0x00011b6c) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0001834d) bg_set_opt_pane_g

0x6964,	// (0x0000f5c1) control_top_pane_stacon_ParamLimits

0x6964,	// (0x0000f5c1) control_top_pane_stacon

0x69b7,	// (0x0000f614) signal_pane_stacon_ParamLimits

0x69b7,	// (0x0000f614) signal_pane_stacon

0x986d,	// (0x000124ca) stacon_top_pane_g1_ParamLimits

0x986d,	// (0x000124ca) stacon_top_pane_g1

0x69dc,	// (0x0000f639) title_pane_stacon_ParamLimits

0x69dc,	// (0x0000f639) title_pane_stacon

0x6a06,	// (0x0000f663) uni_indicator_pane_stacon_ParamLimits

0x6a06,	// (0x0000f663) uni_indicator_pane_stacon

0x6a1b,	// (0x0000f678) battery_pane_stacon_ParamLimits

0x6a1b,	// (0x0000f678) battery_pane_stacon

0x6a5f,	// (0x0000f6bc) control_bottom_pane_stacon_ParamLimits

0x6a5f,	// (0x0000f6bc) control_bottom_pane_stacon

0x6a82,	// (0x0000f6df) navi_pane_stacon_ParamLimits

0x6a82,	// (0x0000f6df) navi_pane_stacon

0x988f,	// (0x000124ec) stacon_bottom_pane_g1_ParamLimits

0x988f,	// (0x000124ec) stacon_bottom_pane_g1

0x66c5,	// (0x0000f322) aid_levels_signal_lsc_ParamLimits

0x66c5,	// (0x0000f322) aid_levels_signal_lsc

0x66dc,	// (0x0000f339) signal_pane_stacon_g1_ParamLimits

0x66dc,	// (0x0000f339) signal_pane_stacon_g1

0x66f0,	// (0x0000f34d) signal_pane_stacon_g2_ParamLimits

0x66f0,	// (0x0000f34d) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x00018360) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x00018360) signal_pane_stacon_g

0x6725,	// (0x0000f382) title_pane_stacon_t1_ParamLimits

0x6725,	// (0x0000f382) title_pane_stacon_t1

0x928d,	// (0x00011eea) uni_indicator_pane_stacon_g1

0x9297,	// (0x00011ef4) uni_indicator_pane_stacon_g2

0x92a1,	// (0x00011efe) uni_indicator_pane_stacon_g3

0x92ab,	// (0x00011f08) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0001836c) uni_indicator_pane_stacon_g

0x674a,	// (0x0000f3a7) control_top_pane_stacon_g1

0x6752,	// (0x0000f3af) control_top_pane_stacon_t1_ParamLimits

0x6752,	// (0x0000f3af) control_top_pane_stacon_t1

0x6789,	// (0x0000f3e6) aid_levels_battery_lsc_ParamLimits

0x6789,	// (0x0000f3e6) aid_levels_battery_lsc

0x67a1,	// (0x0000f3fe) battery_pane_stacon_g1_ParamLimits

0x67a1,	// (0x0000f3fe) battery_pane_stacon_g1

0x67b4,	// (0x0000f411) battery_pane_stacon_g2_ParamLimits

0x67b4,	// (0x0000f411) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x00018375) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x00018375) battery_pane_stacon_g

0x67f2,	// (0x0000f44f) navi_icon_pane_stacon

0x6806,	// (0x0000f463) navi_navi_pane_stacon

0x67f2,	// (0x0000f44f) navi_text_pane_stacon

0x674a,	// (0x0000f3a7) control_bottom_pane_stacon_g1

0x681a,	// (0x0000f477) control_bottom_pane_stacon_t1_ParamLimits

0x681a,	// (0x0000f477) control_bottom_pane_stacon_t1

0x92cf,	// (0x00011f2c) grid_app_pane_ParamLimits

0x92cf,	// (0x00011f2c) grid_app_pane

0x92f1,	// (0x00011f4e) scroll_pane_cp15_ParamLimits

0x92f1,	// (0x00011f4e) scroll_pane_cp15

0x9306,	// (0x00011f63) cell_app_pane_ParamLimits

0x9306,	// (0x00011f63) cell_app_pane

0x9330,	// (0x00011f8d) cell_app_pane_g1_ParamLimits

0x9330,	// (0x00011f8d) cell_app_pane_g1

0x9354,	// (0x00011fb1) cell_app_pane_g2_ParamLimits

0x9354,	// (0x00011fb1) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0001837a) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0001837a) cell_app_pane_g

0x9360,	// (0x00011fbd) cell_app_pane_t1_ParamLimits

0x9360,	// (0x00011fbd) cell_app_pane_t1

0x9372,	// (0x00011fcf) grid_highlight_pane_ParamLimits

0x9372,	// (0x00011fcf) grid_highlight_pane

0x8ecf,	// (0x00011b2c) cell_highlight_pane_g1

0x8ed7,	// (0x00011b34) cell_highlight_pane_g2

0x8edf,	// (0x00011b3c) cell_highlight_pane_g3

0x8ee7,	// (0x00011b44) cell_highlight_pane_g4

0x8eef,	// (0x00011b4c) cell_highlight_pane_g5

0x8ef7,	// (0x00011b54) cell_highlight_pane_g6

0x8eff,	// (0x00011b5c) cell_highlight_pane_g7

0x8f07,	// (0x00011b64) cell_highlight_pane_g8

0x8f0f,	// (0x00011b6c) cell_highlight_pane_g9

0x7ed0,	// (0x00010b2d) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x00018328) cell_highlight_pane_g

0x9383,	// (0x00011fe0) bg_scroll_pane

0x6864,	// (0x0000f4c1) scroll_handle_pane

0x93ca,	// (0x00012027) scroll_bg_pane_g1

0x93df,	// (0x0001203c) scroll_bg_pane_g2

0x93f7,	// (0x00012054) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0001837f) scroll_bg_pane_g

0x940c,	// (0x00012069) scroll_handle_focus_pane_ParamLimits

0x940c,	// (0x00012069) scroll_handle_focus_pane

0x93ca,	// (0x00012027) scroll_handle_pane_g1

0x9419,	// (0x00012076) scroll_handle_pane_g2

0x93f7,	// (0x00012054) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x00018386) scroll_handle_pane_g

0x8fc8,	// (0x00011c25) bg_popup_sub_pane_cp21_ParamLimits

0x8fc8,	// (0x00011c25) bg_popup_sub_pane_cp21

0x942d,	// (0x0001208a) popup_fep_japan_predictive_window_t1_ParamLimits

0x942d,	// (0x0001208a) popup_fep_japan_predictive_window_t1

0x9444,	// (0x000120a1) popup_fep_japan_predictive_window_t2_ParamLimits

0x9444,	// (0x000120a1) popup_fep_japan_predictive_window_t2

0x9477,	// (0x000120d4) popup_fep_japan_predictive_window_t3_ParamLimits

0x9477,	// (0x000120d4) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0001838d) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0001838d) popup_fep_japan_predictive_window_t

0x7eda,	// (0x00010b37) bg_popup_sub_pane_cp23

0x94ae,	// (0x0001210b) listscroll_japin_cand_pane

0x94b6,	// (0x00012113) popup_fep_japan_candidate_window_t1

0x94c4,	// (0x00012121) candidate_pane_ParamLimits

0x94c4,	// (0x00012121) candidate_pane

0x94d6,	// (0x00012133) scroll_pane_cp30

0x94de,	// (0x0001213b) list_single_popup_jap_candidate_pane_ParamLimits

0x94de,	// (0x0001213b) list_single_popup_jap_candidate_pane

0x7eda,	// (0x00010b37) list_highlight_pane_cp30

0x94f2,	// (0x0001214f) list_single_popup_jap_candidate_pane_t1

0x9501,	// (0x0001215e) level_1_signal

0x950e,	// (0x0001216b) level_2_signal

0x951b,	// (0x00012178) level_3_signal

0x9528,	// (0x00012185) level_4_signal

0x9535,	// (0x00012192) level_5_signal

0x9542,	// (0x0001219f) level_6_signal

0x954f,	// (0x000121ac) level_7_signal

0x9501,	// (0x0001215e) level_1_battery

0x950e,	// (0x0001216b) level_2_battery

0x951b,	// (0x00012178) level_3_battery

0x9528,	// (0x00012185) level_4_battery

0x9535,	// (0x00012192) level_5_battery

0x9542,	// (0x0001219f) level_6_battery

0x954f,	// (0x000121ac) level_7_battery

0x9574,	// (0x000121d1) list_menu_pane_ParamLimits

0x9574,	// (0x000121d1) list_menu_pane

0x9585,	// (0x000121e2) scroll_pane_cp25_ParamLimits

0x9585,	// (0x000121e2) scroll_pane_cp25

0x959e,	// (0x000121fb) list_double2_graphic_pane_cp2_ParamLimits

0x959e,	// (0x000121fb) list_double2_graphic_pane_cp2

0x959e,	// (0x000121fb) list_double2_large_graphic_pane_cp2_ParamLimits

0x959e,	// (0x000121fb) list_double2_large_graphic_pane_cp2

0x959e,	// (0x000121fb) list_double2_pane_cp2_ParamLimits

0x959e,	// (0x000121fb) list_double2_pane_cp2

0x959e,	// (0x000121fb) list_double_graphic_pane_cp2_ParamLimits

0x959e,	// (0x000121fb) list_double_graphic_pane_cp2

0x959e,	// (0x000121fb) list_double_large_graphic_pane_cp2_ParamLimits

0x959e,	// (0x000121fb) list_double_large_graphic_pane_cp2

0x959e,	// (0x000121fb) list_double_number_pane_cp2_ParamLimits

0x959e,	// (0x000121fb) list_double_number_pane_cp2

0x959e,	// (0x000121fb) list_double_pane_cp2_ParamLimits

0x959e,	// (0x000121fb) list_double_pane_cp2

0x95c0,	// (0x0001221d) list_single_2graphic_pane_cp2_ParamLimits

0x95c0,	// (0x0001221d) list_single_2graphic_pane_cp2

0x95c0,	// (0x0001221d) list_single_graphic_heading_pane_cp2_ParamLimits

0x95c0,	// (0x0001221d) list_single_graphic_heading_pane_cp2

0x95c0,	// (0x0001221d) list_single_graphic_pane_cp2_ParamLimits

0x95c0,	// (0x0001221d) list_single_graphic_pane_cp2

0x95c0,	// (0x0001221d) list_single_heading_pane_cp2_ParamLimits

0x95c0,	// (0x0001221d) list_single_heading_pane_cp2

0x95d7,	// (0x00012234) list_single_large_graphic_pane_cp2_ParamLimits

0x95d7,	// (0x00012234) list_single_large_graphic_pane_cp2

0x95c0,	// (0x0001221d) list_single_number_heading_pane_cp2_ParamLimits

0x95c0,	// (0x0001221d) list_single_number_heading_pane_cp2

0x95c0,	// (0x0001221d) list_single_number_pane_cp2_ParamLimits

0x95c0,	// (0x0001221d) list_single_number_pane_cp2

0x95c0,	// (0x0001221d) list_single_pane_cp2_ParamLimits

0x95c0,	// (0x0001221d) list_single_pane_cp2

0x962d,	// (0x0001228a) bg_popup_sub_pane_cp22

0x6916,	// (0x0000f573) popup_side_volume_key_window_g1

0x6940,	// (0x0000f59d) popup_side_volume_key_window_t1

0x695c,	// (0x0000f5b9) volume_small_pane_cp1

0x824f,	// (0x00010eac) bg_popup_sub_pane_cp24_ParamLimits

0x824f,	// (0x00010eac) bg_popup_sub_pane_cp24

0x9643,	// (0x000122a0) fep_china_uni_candidate_pane_ParamLimits

0x9643,	// (0x000122a0) fep_china_uni_candidate_pane

0x9657,	// (0x000122b4) fep_china_uni_entry_pane

0x9667,	// (0x000122c4) popup_fep_china_uni_window_g1

0x9683,	// (0x000122e0) fep_china_uni_entry_pane_g1

0x968b,	// (0x000122e8) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x000183ba) fep_china_uni_entry_pane_g

0x9693,	// (0x000122f0) fep_entry_item_pane

0x969d,	// (0x000122fa) fep_candidate_item_pane

0x96a5,	// (0x00012302) fep_china_uni_candidate_pane_g1

0x96ad,	// (0x0001230a) fep_china_uni_candidate_pane_g2

0x96b5,	// (0x00012312) fep_china_uni_candidate_pane_g3

0x96bd,	// (0x0001231a) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x000183bf) fep_china_uni_candidate_pane_g

0x7ed0,	// (0x00010b2d) fep_entry_item_pane_g1

0x96c5,	// (0x00012322) fep_entry_item_pane_t1_ParamLimits

0x96c5,	// (0x00012322) fep_entry_item_pane_t1

0x96db,	// (0x00012338) fep_candidate_item_pane_t1_ParamLimits

0x96db,	// (0x00012338) fep_candidate_item_pane_t1

0x96f0,	// (0x0001234d) fep_candidate_item_pane_t2_ParamLimits

0x96f0,	// (0x0001234d) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x000183c8) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x000183c8) fep_candidate_item_pane_t

0x7fba,	// (0x00010c17) list_highlight_pane_cp31_ParamLimits

0x7fba,	// (0x00010c17) list_highlight_pane_cp31

0x9702,	// (0x0001235f) level_1_signal_lsc

0x970b,	// (0x00012368) level_2_signal_lsc

0x9714,	// (0x00012371) level_3_signal_lsc

0x971d,	// (0x0001237a) level_4_signal_lsc

0x9726,	// (0x00012383) level_5_signal_lsc

0x972f,	// (0x0001238c) level_6_signal_lsc

0x9738,	// (0x00012395) level_7_signal_lsc

0x9738,	// (0x00012395) level_1_battery_lsc

0x9741,	// (0x0001239e) level_2_battery_lsc

0x974a,	// (0x000123a7) level_3_battery_lsc

0x9753,	// (0x000123b0) level_4_battery_lsc

0x975c,	// (0x000123b9) level_5_battery_lsc

0x9765,	// (0x000123c2) level_6_battery_lsc

0x9702,	// (0x0001235f) level_7_battery_lsc

0x976e,	// (0x000123cb) scroll_handle_focus_pane_g1

0x9777,	// (0x000123d4) scroll_handle_focus_pane_g2

0x9780,	// (0x000123dd) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x000183cd) scroll_handle_focus_pane_g

0x9789,	// (0x000123e6) list_single_2graphic_pane_g1_ParamLimits

0x9789,	// (0x000123e6) list_single_2graphic_pane_g1

0x8860,	// (0x000114bd) list_single_2graphic_pane_g2_ParamLimits

0x8860,	// (0x000114bd) list_single_2graphic_pane_g2

0x87e6,	// (0x00011443) list_single_2graphic_pane_g3_ParamLimits

0x87e6,	// (0x00011443) list_single_2graphic_pane_g3

0x9795,	// (0x000123f2) list_single_2graphic_pane_g4_ParamLimits

0x9795,	// (0x000123f2) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x000183d4) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x000183d4) list_single_2graphic_pane_g

0x97a6,	// (0x00012403) list_single_2graphic_pane_t1_ParamLimits

0x97a6,	// (0x00012403) list_single_2graphic_pane_t1

0x97d4,	// (0x00012431) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x97d4,	// (0x00012431) list_double2_graphic_large_graphic_pane_g1

0x8905,	// (0x00011562) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8905,	// (0x00011562) list_double2_graphic_large_graphic_pane_g2

0x8916,	// (0x00011573) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8916,	// (0x00011573) list_double2_graphic_large_graphic_pane_g3

0x97e4,	// (0x00012441) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x97e4,	// (0x00012441) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x000183dd) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x000183dd) list_double2_graphic_large_graphic_pane_g

0x97f0,	// (0x0001244d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x97f0,	// (0x0001244d) list_double2_graphic_large_graphic_pane_t1

0x9806,	// (0x00012463) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9806,	// (0x00012463) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x000183e6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x000183e6) list_double2_graphic_large_graphic_pane_t

0x995a,	// (0x000125b7) popup_fast_swap_window_ParamLimits

0x995a,	// (0x000125b7) popup_fast_swap_window

0x9976,	// (0x000125d3) popup_side_volume_key_window

0x9990,	// (0x000125ed) stacon_top_pane

0x999a,	// (0x000125f7) status_pane_ParamLimits

0x999a,	// (0x000125f7) status_pane

0x9990,	// (0x000125ed) status_small_pane

0x7eda,	// (0x00010b37) control_pane

0x7eda,	// (0x00010b37) stacon_bottom_pane

0x8cb2,	// (0x0001190f) scroll_pane_cp121

0x8ca9,	// (0x00011906) set_content_pane

0x9818,	// (0x00012475) bg_active_tab_pane_g1_cp1

0x9821,	// (0x0001247e) bg_active_tab_pane_g2_cp1

0x982a,	// (0x00012487) bg_active_tab_pane_g3_cp1

0x9818,	// (0x00012475) bg_passive_tab_pane_g1_cp1

0x9821,	// (0x0001247e) bg_passive_tab_pane_g2_cp1

0x982a,	// (0x00012487) bg_passive_tab_pane_g3_cp1

0x9833,	// (0x00012490) bg_active_tab_pane_g1_cp2

0x9821,	// (0x0001247e) bg_active_tab_pane_g2_cp2

0x983c,	// (0x00012499) bg_active_tab_pane_g3_cp2

0x9833,	// (0x00012490) bg_passive_tab_pane_g1_cp2

0x9821,	// (0x0001247e) bg_passive_tab_pane_g2_cp2

0x983c,	// (0x00012499) bg_passive_tab_pane_g3_cp2

0x9845,	// (0x000124a2) bg_active_tab_pane_g1_cp3

0x9821,	// (0x0001247e) bg_active_tab_pane_g2_cp3

0x984e,	// (0x000124ab) bg_active_tab_pane_g3_cp3

0x9845,	// (0x000124a2) bg_passive_tab_pane_g1_cp3

0x9821,	// (0x0001247e) bg_passive_tab_pane_g2_cp3

0x984e,	// (0x000124ab) bg_passive_tab_pane_g3_cp3

0x9857,	// (0x000124b4) bg_active_tab_pane_g1_cp4

0x9821,	// (0x0001247e) bg_active_tab_pane_g2_cp4

0x9862,	// (0x000124bf) bg_active_tab_pane_g3_cp4

0x9857,	// (0x000124b4) bg_passive_tab_pane_g1_cp4

0x9821,	// (0x0001247e) bg_passive_tab_pane_g2_cp4

0x9862,	// (0x000124bf) bg_passive_tab_pane_g3_cp4

0x98ab,	// (0x00012508) bg_active_tab_pane_g1_cp5

0x9821,	// (0x0001247e) bg_active_tab_pane_g2_cp5

0x98b4,	// (0x00012511) bg_active_tab_pane_g3_cp5

0x98ab,	// (0x00012508) bg_passive_tab_pane_g1_cp5

0x9821,	// (0x0001247e) bg_passive_tab_pane_g2_cp5

0x98b4,	// (0x00012511) bg_passive_tab_pane_g3_cp5

0x98bd,	// (0x0001251a) list_set_graphic_pane_ParamLimits

0x98bd,	// (0x0001251a) list_set_graphic_pane

0x7eda,	// (0x00010b37) bg_set_opt_pane_cp4

0x98db,	// (0x00012538) list_set_graphic_pane_g1_ParamLimits

0x98db,	// (0x00012538) list_set_graphic_pane_g1

0x98e7,	// (0x00012544) list_set_graphic_pane_g2_ParamLimits

0x98e7,	// (0x00012544) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x000183eb) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x000183eb) list_set_graphic_pane_g

0x0009,

0xfaf9,	// (0x00018756) volume_small_pane_cp_g

0x990b,	// (0x00012568) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x990b,	// (0x00012568) list_double2_large_graphic_pane_g1_cp2

0x9919,	// (0x00012576) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9919,	// (0x00012576) list_double2_large_graphic_pane_g2_cp2

0x992a,	// (0x00012587) list_double2_large_graphic_pane_g3_cp2

0x9932,	// (0x0001258f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9932,	// (0x0001258f) list_double2_large_graphic_pane_t1_cp2

0x9948,	// (0x000125a5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9948,	// (0x000125a5) list_double2_large_graphic_pane_t2_cp2

0xbba0,	// (0x000147fd) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbba0,	// (0x000147fd) list_double_large_graphic_pane_g1_cp2

0xbbb3,	// (0x00014810) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbbb3,	// (0x00014810) list_double_large_graphic_pane_g2_cp2

0x9ab8,	// (0x00012715) list_double_large_graphic_pane_g3_cp2

0xbbc4,	// (0x00014821) list_double_large_graphic_pane_g4_cp

0xbbcc,	// (0x00014829) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xbbcc,	// (0x00014829) list_double_large_graphic_pane_t1_cp2

0xbbe3,	// (0x00014840) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xbbe3,	// (0x00014840) list_double_large_graphic_pane_t2_cp2

0x99a8,	// (0x00012605) list_double2_graphic_pane_g1_cp2_ParamLimits

0x99a8,	// (0x00012605) list_double2_graphic_pane_g1_cp2

0x99b6,	// (0x00012613) list_double2_graphic_pane_g2_cp2_ParamLimits

0x99b6,	// (0x00012613) list_double2_graphic_pane_g2_cp2

0x99c7,	// (0x00012624) list_double2_graphic_pane_g3_cp2

0x99d1,	// (0x0001262e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x99d1,	// (0x0001262e) list_double2_graphic_pane_t1_cp2

0x99e7,	// (0x00012644) list_double2_graphic_pane_t2_cp2_ParamLimits

0x99e7,	// (0x00012644) list_double2_graphic_pane_t2_cp2

0x99f9,	// (0x00012656) list_single_number_heading_pane_g1_cp2_ParamLimits

0x99f9,	// (0x00012656) list_single_number_heading_pane_g1_cp2

0x9a05,	// (0x00012662) list_single_number_heading_pane_g2_cp2

0x9a0d,	// (0x0001266a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9a0d,	// (0x0001266a) list_single_number_heading_pane_t1_cp2

0x9a23,	// (0x00012680) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9a23,	// (0x00012680) list_single_number_heading_pane_t2_cp2

0x9a37,	// (0x00012694) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9a37,	// (0x00012694) list_single_number_heading_pane_t3_cp2

0x99f9,	// (0x00012656) list_single_heading_pane_g1_cp2_ParamLimits

0x99f9,	// (0x00012656) list_single_heading_pane_g1_cp2

0x9a05,	// (0x00012662) list_single_heading_pane_g2_cp2

0x9a0d,	// (0x0001266a) list_single_heading_pane_t1_cp2_ParamLimits

0x9a0d,	// (0x0001266a) list_single_heading_pane_t1_cp2

0xb9a8,	// (0x00014605) list_single_heading_pane_t2_cp2_ParamLimits

0xb9a8,	// (0x00014605) list_single_heading_pane_t2_cp2

0xb8ea,	// (0x00014547) list_double_graphic_pane_g1_cp2_ParamLimits

0xb8ea,	// (0x00014547) list_double_graphic_pane_g1_cp2

0xb8f6,	// (0x00014553) list_double_graphic_pane_g2_cp2_ParamLimits

0xb8f6,	// (0x00014553) list_double_graphic_pane_g2_cp2

0xb905,	// (0x00014562) list_double_graphic_pane_g3_cp2

0xb90d,	// (0x0001456a) list_double_graphic_pane_t1_cp2_ParamLimits

0xb90d,	// (0x0001456a) list_double_graphic_pane_t1_cp2

0xb923,	// (0x00014580) list_double_graphic_pane_t2_cp2_ParamLimits

0xb923,	// (0x00014580) list_double_graphic_pane_t2_cp2

0x9aac,	// (0x00012709) list_double_number_pane_g1_cp2_ParamLimits

0x9aac,	// (0x00012709) list_double_number_pane_g1_cp2

0x9ab8,	// (0x00012715) list_double_number_pane_g2_cp2

0xb8ae,	// (0x0001450b) list_double_number_pane_t1_cp2_ParamLimits

0xb8ae,	// (0x0001450b) list_double_number_pane_t1_cp2

0xb8c2,	// (0x0001451f) list_double_number_pane_t2_cp2_ParamLimits

0xb8c2,	// (0x0001451f) list_double_number_pane_t2_cp2

0xb8d8,	// (0x00014535) list_double_number_pane_t3_cp2_ParamLimits

0xb8d8,	// (0x00014535) list_double_number_pane_t3_cp2

0xb797,	// (0x000143f4) list_single_graphic_pane_g1_cp2_ParamLimits

0xb797,	// (0x000143f4) list_single_graphic_pane_g1_cp2

0x9b10,	// (0x0001276d) list_single_graphic_pane_g2_cp2_ParamLimits

0x9b10,	// (0x0001276d) list_single_graphic_pane_g2_cp2

0x9b1c,	// (0x00012779) list_single_graphic_pane_g3_cp2

0xb76d,	// (0x000143ca) list_single_graphic_pane_t1_cp2_ParamLimits

0xb76d,	// (0x000143ca) list_single_graphic_pane_t1_cp2

0x9b10,	// (0x0001276d) list_single_number_pane_g1_cp2_ParamLimits

0x9b10,	// (0x0001276d) list_single_number_pane_g1_cp2

0x9b1c,	// (0x00012779) list_single_number_pane_g2_cp2

0xb76d,	// (0x000143ca) list_single_number_pane_t1_cp2_ParamLimits

0xb76d,	// (0x000143ca) list_single_number_pane_t1_cp2

0xb783,	// (0x000143e0) list_single_number_pane_t2_cp2_ParamLimits

0xb783,	// (0x000143e0) list_single_number_pane_t2_cp2

0x9919,	// (0x00012576) list_double2_pane_g1_cp2_ParamLimits

0x9919,	// (0x00012576) list_double2_pane_g1_cp2

0x992a,	// (0x00012587) list_double2_pane_g2_cp2

0x9a84,	// (0x000126e1) list_double2_pane_t1_cp2_ParamLimits

0x9a84,	// (0x000126e1) list_double2_pane_t1_cp2

0x9a9a,	// (0x000126f7) list_double2_pane_t2_cp2_ParamLimits

0x9a9a,	// (0x000126f7) list_double2_pane_t2_cp2

0x9aac,	// (0x00012709) list_double_pane_g1_cp2_ParamLimits

0x9aac,	// (0x00012709) list_double_pane_g1_cp2

0x9ab8,	// (0x00012715) list_double_pane_g2_cp2

0x9ac0,	// (0x0001271d) list_double_pane_t1_cp2_ParamLimits

0x9ac0,	// (0x0001271d) list_double_pane_t1_cp2

0x9ad6,	// (0x00012733) list_double_pane_t2_cp2_ParamLimits

0x9ad6,	// (0x00012733) list_double_pane_t2_cp2

0x9b00,	// (0x0001275d) list_single_pane_cp2_g3

0x9b10,	// (0x0001276d) list_single_pane_g1_cp2_ParamLimits

0x9b10,	// (0x0001276d) list_single_pane_g1_cp2

0x9b1c,	// (0x00012779) list_single_pane_g2_cp2

0x9b24,	// (0x00012781) list_single_pane_t1_cp2_ParamLimits

0x9b24,	// (0x00012781) list_single_pane_t1_cp2

0x9b3c,	// (0x00012799) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9b3c,	// (0x00012799) list_single_large_graphic_pane_g1_cp2

0x9b4a,	// (0x000127a7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9b4a,	// (0x000127a7) list_single_large_graphic_pane_g2_cp2

0x9b56,	// (0x000127b3) list_single_large_graphic_pane_g3_cp2

0x9b5e,	// (0x000127bb) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9b5e,	// (0x000127bb) list_single_large_graphic_pane_g4_cp1

0x9b78,	// (0x000127d5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9b78,	// (0x000127d5) list_single_large_graphic_pane_t1_cp2

0xb737,	// (0x00014394) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xb737,	// (0x00014394) list_single_graphic_heading_pane_g1_cp2

0xb704,	// (0x00014361) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb704,	// (0x00014361) list_single_graphic_heading_pane_g4_cp2

0x9b1c,	// (0x00012779) list_single_graphic_heading_pane_g5_cp2

0xb743,	// (0x000143a0) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xb743,	// (0x000143a0) list_single_graphic_heading_pane_t1_cp2

0xb759,	// (0x000143b6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb759,	// (0x000143b6) list_single_graphic_heading_pane_t2_cp2

0xb6f8,	// (0x00014355) list_single_2graphic_pane_g1_cp2_ParamLimits

0xb6f8,	// (0x00014355) list_single_2graphic_pane_g1_cp2

0xb704,	// (0x00014361) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb704,	// (0x00014361) list_single_2graphic_pane_g2_cp2

0x9b1c,	// (0x00012779) list_single_2graphic_pane_g3_cp2

0xb715,	// (0x00014372) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb715,	// (0x00014372) list_single_2graphic_pane_g4_cp2

0xb721,	// (0x0001437e) list_single_2graphic_pane_t1_cp2_ParamLimits

0xb721,	// (0x0001437e) list_single_2graphic_pane_t1_cp2

0x7ed0,	// (0x00010b2d) list_highlight_pane_g10_cp1

0xb2e0,	// (0x00013f3d) list_highlight_pane_g1_cp1

0xb2e8,	// (0x00013f45) list_highlight_pane_g2_cp1

0xb2f0,	// (0x00013f4d) list_highlight_pane_g3_cp1

0xb2f8,	// (0x00013f55) list_highlight_pane_g4_cp1

0xb300,	// (0x00013f5d) list_highlight_pane_g5_cp1

0xb308,	// (0x00013f65) list_highlight_pane_g6_cp1

0xb310,	// (0x00013f6d) list_highlight_pane_g7_cp1

0xb318,	// (0x00013f75) list_highlight_pane_g8_cp1

0xb320,	// (0x00013f7d) list_highlight_pane_g9_cp1

0xb1f8,	// (0x00013e55) form_field_slider_pane_t3

0xb206,	// (0x00013e63) form_field_slider_pane_t4

0xb214,	// (0x00013e71) slider_form_pane_ParamLimits

0xb214,	// (0x00013e71) slider_form_pane

0x7eda,	// (0x00010b37) control_abbreviations

0x7eda,	// (0x00010b37) control_conventions

0x7eda,	// (0x00010b37) control_definitions

0x7eda,	// (0x00010b37) format_table_attribute

0xb9f4,	// (0x00014651) bg_popup_preview_window_pane_g9

0x7eda,	// (0x00010b37) format_table_data2

0x7eda,	// (0x00010b37) format_table_data3

0x7eda,	// (0x00010b37) format_table_data_example

0x0008,

0x7eda,	// (0x00010b37) intro_purpose

0xf923,	// (0x00018580) bg_popup_preview_window_pane_g

0x7eda,	// (0x00010b37) texts_category

0x7eda,	// (0x00010b37) texts_graphics

0x9b8e,	// (0x000127eb) text_digital

0x9b9d,	// (0x000127fa) text_primary

0x9bac,	// (0x00012809) text_primary_small

0x9bbb,	// (0x00012818) text_secondary

0x9bca,	// (0x00012827) text_title

0xc22c,	// (0x00014e89) bg_passive_tab_pane_g1_cp3_srt

0x9821,	// (0x0001247e) bg_passive_tab_pane_g2_cp3_srt

0xc235,	// (0x00014e92) bg_passive_tab_pane_g3_cp3_srt

0x7fba,	// (0x00010c17) bg_active_tab_pane_cp3_srt_ParamLimits

0x7fba,	// (0x00010c17) bg_active_tab_pane_cp3_srt

0xc23e,	// (0x00014e9b) tabs_4_active_pane_srt_g1

0xc246,	// (0x00014ea3) tabs_4_active_pane_srt_t1_ParamLimits

0xc246,	// (0x00014ea3) tabs_4_active_pane_srt_t1

0xc22c,	// (0x00014e89) bg_active_tab_pane_g1_cp3_copy1

0x9821,	// (0x0001247e) bg_active_tab_pane_g2_cp3_copy1

0xc235,	// (0x00014e92) bg_active_tab_pane_g3_cp3_copy1

0x7fba,	// (0x00010c17) tabs_2_long_active_pane_srt_ParamLimits

0x7fba,	// (0x00010c17) tabs_2_long_active_pane_srt

0x7fba,	// (0x00010c17) tabs_2_long_passive_pane_srt_ParamLimits

0x7fba,	// (0x00010c17) tabs_2_long_passive_pane_srt

0x90f9,	// (0x00011d56) bg_passive_tab_pane_cp4_srt_ParamLimits

0x90f9,	// (0x00011d56) bg_passive_tab_pane_cp4_srt

0xbe61,	// (0x00014abe) bg_passive_tab_pane_g1_cp4_srt

0x9821,	// (0x0001247e) bg_passive_tab_pane_g2_cp4_srt

0xbe6a,	// (0x00014ac7) bg_passive_tab_pane_g3_cp4_srt

0x90d8,	// (0x00011d35) bg_active_tab_pane_cp4_srt_ParamLimits

0x90d8,	// (0x00011d35) bg_active_tab_pane_cp4_srt

0xbe73,	// (0x00014ad0) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbe73,	// (0x00014ad0) tabs_2_long_active_pane_srt_t1

0xbe61,	// (0x00014abe) bg_active_tab_pane_g1_cp4_srt

0x9821,	// (0x0001247e) bg_active_tab_pane_g2_cp4_srt

0xbe6a,	// (0x00014ac7) bg_active_tab_pane_g3_cp4_srt

0x824f,	// (0x00010eac) tabs_3_long_active_pane_srt_ParamLimits

0x824f,	// (0x00010eac) tabs_3_long_active_pane_srt

0x824f,	// (0x00010eac) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x824f,	// (0x00010eac) tabs_3_long_passive_pane_cp_srt

0x824f,	// (0x00010eac) tabs_3_long_passive_pane_srt_ParamLimits

0x824f,	// (0x00010eac) tabs_3_long_passive_pane_srt

0x90f9,	// (0x00011d56) bg_passive_tab_pane_cp5_srt_ParamLimits

0x90f9,	// (0x00011d56) bg_passive_tab_pane_cp5_srt

0x98ab,	// (0x00012508) bg_passive_tab_pane_g1_cp5_srt

0x9821,	// (0x0001247e) bg_passive_tab_pane_g2_cp5_srt

0x98b4,	// (0x00012511) bg_passive_tab_pane_g3_cp5_srt

0x90d8,	// (0x00011d35) bg_active_tab_pane_cp5_srt_ParamLimits

0x90d8,	// (0x00011d35) bg_active_tab_pane_cp5_srt

0xbe4f,	// (0x00014aac) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbe4f,	// (0x00014aac) tabs_3_long_active_pane_srt_t1

0x98ab,	// (0x00012508) bg_active_tab_pane_g1_cp5_srt

0x9821,	// (0x0001247e) bg_active_tab_pane_g2_cp5_srt

0x98b4,	// (0x00012511) bg_active_tab_pane_g3_cp5_srt

0xbe41,	// (0x00014a9e) navi_text_pane_srt_t1

0xbe39,	// (0x00014a96) navi_icon_pane_srt_g1

0x9d99,	// (0x000129f6) midp_editing_number_pane_srt

0x9bd9,	// (0x00012836) midp_ticker_pane_srt

0x9da1,	// (0x000129fe) midp_ticker_pane_srt_g1

0x9da9,	// (0x00012a06) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0001840a) midp_ticker_pane_srt_g

0x9db1,	// (0x00012a0e) midp_ticker_pane_srt_t1

0xbe2a,	// (0x00014a87) midp_editing_number_pane_t1_copy1

0x9be1,	// (0x0001283e) listscroll_midp_pane

0x9be1,	// (0x0001283e) midp_form_pane

0x9c51,	// (0x000128ae) midp_info_popup_window_ParamLimits

0x9c51,	// (0x000128ae) midp_info_popup_window

0x8fc8,	// (0x00011c25) bg_popup_sub_pane_cp50_ParamLimits

0x8fc8,	// (0x00011c25) bg_popup_sub_pane_cp50

0xaf46,	// (0x00013ba3) listscroll_midp_info_pane_ParamLimits

0xaf46,	// (0x00013ba3) listscroll_midp_info_pane

0xaf2e,	// (0x00013b8b) listscroll_form_midp_pane_ParamLimits

0xaf2e,	// (0x00013b8b) listscroll_form_midp_pane

0xaf3a,	// (0x00013b97) scroll_bar_cp050

0xaf0e,	// (0x00013b6b) list_midp_pane

0xcddd,	// (0x00015a3a) signal_pane_g2_cp

0xae48,	// (0x00013aa5) listscroll_midp_info_pane_t1_ParamLimits

0xae48,	// (0x00013aa5) listscroll_midp_info_pane_t1

0xae60,	// (0x00013abd) listscroll_midp_info_pane_t2_ParamLimits

0xae60,	// (0x00013abd) listscroll_midp_info_pane_t2

0xae9e,	// (0x00013afb) listscroll_midp_info_pane_t3_ParamLimits

0xae9e,	// (0x00013afb) listscroll_midp_info_pane_t3

0xaed8,	// (0x00013b35) listscroll_midp_info_pane_t4_ParamLimits

0xaed8,	// (0x00013b35) listscroll_midp_info_pane_t4

0x0003,

0xf85e,	// (0x000184bb) listscroll_midp_info_pane_t_ParamLimits

0xf85e,	// (0x000184bb) listscroll_midp_info_pane_t

0x9086,	// (0x00011ce3) scroll_pane_cp21

0xadec,	// (0x00013a49) form_midp_field_choice_group_pane

0xadf5,	// (0x00013a52) form_midp_field_text_pane

0xae2e,	// (0x00013a8b) form_midp_field_time_pane

0xae36,	// (0x00013a93) form_midp_gauge_slider_pane

0xae3f,	// (0x00013a9c) form_midp_gauge_wait_pane

0x7eda,	// (0x00010b37) form_midp_image_pane

0xadb0,	// (0x00013a0d) list_single_midp_pane_ParamLimits

0xadb0,	// (0x00013a0d) list_single_midp_pane

0xad60,	// (0x000139bd) form_midp_field_text_pane_t1

0xab2b,	// (0x00013788) input_focus_pane_cp050

0xad9f,	// (0x000139fc) list_midp_form_text_pane

0xad2f,	// (0x0001398c) form_midp_field_choice_group_pane_t1

0xad3d,	// (0x0001399a) input_focus_pane_cp051

0xad51,	// (0x000139ae) list_midp_choice_pane

0x7eda,	// (0x00010b37) status_idle_pane

0xad13,	// (0x00013970) form_midp_field_time_pane_t1

0x7ed0,	// (0x00010b2d) wait_anim_pane_g2_copy1

0xad21,	// (0x0001397e) form_midp_field_time_pane_t2

0x0001,

0x9d01,	// (0x0001295e) aid_navinavi_width_2_pane

0xf859,	// (0x000184b6) form_midp_field_time_pane_t

0x7eda,	// (0x00010b37) input_focus_pane_cp052

0x7eda,	// (0x00010b37) bg_input_focus_pane_cp040

0xacd3,	// (0x00013930) form_midp_gauge_slider_pane_t1

0xace1,	// (0x0001393e) form_midp_gauge_slider_pane_t2

0xacef,	// (0x0001394c) form_midp_gauge_slider_pane_t3

0xacfd,	// (0x0001395a) form_midp_gauge_slider_pane_t4

0x0003,

0xf850,	// (0x000184ad) form_midp_gauge_slider_pane_t

0xad0b,	// (0x00013968) form_midp_slider_pane

0x7fba,	// (0x00010c17) bg_input_focus_pane_cp041_ParamLimits

0x7fba,	// (0x00010c17) bg_input_focus_pane_cp041

0xaca0,	// (0x000138fd) form_midp_gauge_wait_pane_t1_ParamLimits

0xaca0,	// (0x000138fd) form_midp_gauge_wait_pane_t1

0xacb2,	// (0x0001390f) form_midp_gauge_wait_pane_t2_ParamLimits

0xacb2,	// (0x0001390f) form_midp_gauge_wait_pane_t2

0x0001,

0xf84b,	// (0x000184a8) form_midp_gauge_wait_pane_t_ParamLimits

0xf84b,	// (0x000184a8) form_midp_gauge_wait_pane_t

0xacc4,	// (0x00013921) form_midp_wait_pane_ParamLimits

0xacc4,	// (0x00013921) form_midp_wait_pane

0xac6a,	// (0x000138c7) form_midp_image_pane_g1

0xac73,	// (0x000138d0) form_midp_image_pane_t1

0xac82,	// (0x000138df) form_midp_image_pane_t2

0xac91,	// (0x000138ee) form_midp_image_pane_t3

0x0002,

0xf844,	// (0x000184a1) form_midp_image_pane_t

0xac52,	// (0x000138af) list_single_midp_pane_g1

0xac5b,	// (0x000138b8) list_single_midp_pane_t1

0xac22,	// (0x0001387f) list_midp_form_item_pane_ParamLimits

0xac22,	// (0x0001387f) list_midp_form_item_pane

0x9ca9,	// (0x00012906) list_midp_form_item_pane_t1

0x9cb8,	// (0x00012915) midp_ticker_pane_g1

0x9cc4,	// (0x00012921) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x000183f0) midp_ticker_pane_g

0x9cd0,	// (0x0001292d) midp_ticker_pane_t1

0xc0a0,	// (0x00014cfd) midp_editing_number_pane_t1

0xc07e,	// (0x00014cdb) midp_editing_number_pane

0xc08d,	// (0x00014cea) midp_ticker_pane

0xbdf2,	// (0x00014a4f) ai_message_heading_pane

0x7eda,	// (0x00010b37) bg_popup_window_pane_cp14

0xbdfa,	// (0x00014a57) listscroll_ai_message_pane

0xbd7c,	// (0x000149d9) ai_message_heading_pane_g1_ParamLimits

0xbd7c,	// (0x000149d9) ai_message_heading_pane_g1

0xbd88,	// (0x000149e5) ai_message_heading_pane_g2_ParamLimits

0xbd88,	// (0x000149e5) ai_message_heading_pane_g2

0xbd94,	// (0x000149f1) ai_message_heading_pane_g3_ParamLimits

0xbd94,	// (0x000149f1) ai_message_heading_pane_g3

0xbda0,	// (0x000149fd) ai_message_heading_pane_g4_ParamLimits

0xbda0,	// (0x000149fd) ai_message_heading_pane_g4

0x0003,

0xf985,	// (0x000185e2) ai_message_heading_pane_g_ParamLimits

0xf985,	// (0x000185e2) ai_message_heading_pane_g

0xbdac,	// (0x00014a09) ai_message_heading_pane_t1_ParamLimits

0xbdac,	// (0x00014a09) ai_message_heading_pane_t1

0xbdc6,	// (0x00014a23) ai_message_heading_pane_t2_ParamLimits

0xbdc6,	// (0x00014a23) ai_message_heading_pane_t2

0x0001,

0xf98e,	// (0x000185eb) ai_message_heading_pane_t_ParamLimits

0xf98e,	// (0x000185eb) ai_message_heading_pane_t

0xbdd8,	// (0x00014a35) bg_popup_heading_pane_cp1_ParamLimits

0xbdd8,	// (0x00014a35) bg_popup_heading_pane_cp1

0xbd6a,	// (0x000149c7) list_ai_message_pane_ParamLimits

0xbd6a,	// (0x000149c7) list_ai_message_pane

0x9086,	// (0x00011ce3) scroll_pane_cp10

0xbd06,	// (0x00014963) list_ai_message_pane_g1

0xbd0e,	// (0x0001496b) list_ai_message_pane_g2

0x0001,

0xf962,	// (0x000185bf) list_ai_message_pane_g

0xbd16,	// (0x00014973) list_ai_message_pane_t1_ParamLimits

0xbd16,	// (0x00014973) list_ai_message_pane_t1

0xbd2b,	// (0x00014988) list_ai_message_pane_t2_ParamLimits

0xbd2b,	// (0x00014988) list_ai_message_pane_t2

0xbd40,	// (0x0001499d) list_ai_message_pane_t3_ParamLimits

0xbd40,	// (0x0001499d) list_ai_message_pane_t3

0xbd55,	// (0x000149b2) list_ai_message_pane_t4_ParamLimits

0xbd55,	// (0x000149b2) list_ai_message_pane_t4

0x0003,

0xf967,	// (0x000185c4) list_ai_message_pane_t_ParamLimits

0xf967,	// (0x000185c4) list_ai_message_pane_t

0xbcf0,	// (0x0001494d) cell_ai_soft_ind_pane_ParamLimits

0xbcf0,	// (0x0001494d) cell_ai_soft_ind_pane

0x9ce2,	// (0x0001293f) cell_ai_soft_ind_pane_g1_ParamLimits

0x9ce2,	// (0x0001293f) cell_ai_soft_ind_pane_g1

0x7eda,	// (0x00010b37) grid_highlight_cp1

0x9cef,	// (0x0001294c) text_secondary_cp56_ParamLimits

0x9cef,	// (0x0001294c) text_secondary_cp56

0xbcc5,	// (0x00014922) example_general_pane_ParamLimits

0xbcc5,	// (0x00014922) example_general_pane

0xbcd1,	// (0x0001492e) example_parent_pane_g1_ParamLimits

0xbcd1,	// (0x0001492e) example_parent_pane_g1

0xbcdd,	// (0x0001493a) example_parent_pane_t1_ParamLimits

0xbcdd,	// (0x0001493a) example_parent_pane_t1

0xa2ec,	// (0x00012f49) popup_preview_text_window_ParamLimits

0xa2ec,	// (0x00012f49) popup_preview_text_window

0x9b08,	// (0x00012765) list_single_pane_cp2_g4

0x82f9,	// (0x00010f56) bg_popup_preview_window_pane_ParamLimits

0x82f9,	// (0x00010f56) bg_popup_preview_window_pane

0xb9fc,	// (0x00014659) popup_preview_text_window_t1_ParamLimits

0xb9fc,	// (0x00014659) popup_preview_text_window_t1

0xba1a,	// (0x00014677) popup_preview_text_window_t2_ParamLimits

0xba1a,	// (0x00014677) popup_preview_text_window_t2

0xba63,	// (0x000146c0) popup_preview_text_window_t3_ParamLimits

0xba63,	// (0x000146c0) popup_preview_text_window_t3

0xbaa8,	// (0x00014705) popup_preview_text_window_t4_ParamLimits

0xbaa8,	// (0x00014705) popup_preview_text_window_t4

0x0004,

0xf936,	// (0x00018593) popup_preview_text_window_t_ParamLimits

0xf936,	// (0x00018593) popup_preview_text_window_t

0xbb26,	// (0x00014783) scroll_pane_cp11

0xaa11,	// (0x0001366e) bg_popup_preview_window_pane_g1

0xb9bc,	// (0x00014619) bg_popup_preview_window_pane_g2

0xb9c4,	// (0x00014621) bg_popup_preview_window_pane_g3

0xb9cc,	// (0x00014629) bg_popup_preview_window_pane_g4

0xb9d4,	// (0x00014631) bg_popup_preview_window_pane_g5

0xb9dc,	// (0x00014639) bg_popup_preview_window_pane_g6

0xb9e4,	// (0x00014641) bg_popup_preview_window_pane_g7

0xb9ec,	// (0x00014649) bg_popup_preview_window_pane_g8

0x6269,	// (0x0000eec6) aid_popup_width_pane

0xa2ca,	// (0x00012f27) popup_midp_note_alarm_window_ParamLimits

0xa2ca,	// (0x00012f27) popup_midp_note_alarm_window

0x8d63,	// (0x000119c0) data_form_pane_ParamLimits

0x8d6f,	// (0x000119cc) form_field_data_pane_g1

0x8d79,	// (0x000119d6) form_field_data_pane_t1_ParamLimits

0x8d93,	// (0x000119f0) input_focus_pane_ParamLimits

0x8da1,	// (0x000119fe) data_form_wide_pane_ParamLimits

0x8dad,	// (0x00011a0a) form_field_data_wide_pane_g1

0x8dd9,	// (0x00011a36) form_field_data_wide_pane_t1_ParamLimits

0x8598,	// (0x000111f5) input_focus_pane_cp6_ParamLimits

0x9031,	// (0x00011c8e) input_popup_find_pane_g1_ParamLimits

0x9031,	// (0x00011c8e) input_popup_find_pane_g1

0x67c5,	// (0x0000f422) aid_navi_side_left_pane

0x67da,	// (0x0000f437) aid_navi_side_right_pane

0xb3db,	// (0x00014038) bg_popup_window_pane_cp30_ParamLimits

0xb3db,	// (0x00014038) bg_popup_window_pane_cp30

0xb455,	// (0x000140b2) popup_midp_note_alarm_window_g1_ParamLimits

0xb455,	// (0x000140b2) popup_midp_note_alarm_window_g1

0xb485,	// (0x000140e2) popup_midp_note_alarm_window_t1_ParamLimits

0xb485,	// (0x000140e2) popup_midp_note_alarm_window_t1

0xb526,	// (0x00014183) popup_midp_note_alarm_window_t2_ParamLimits

0xb526,	// (0x00014183) popup_midp_note_alarm_window_t2

0xb5d4,	// (0x00014231) popup_midp_note_alarm_window_t3_ParamLimits

0xb5d4,	// (0x00014231) popup_midp_note_alarm_window_t3

0xb5fc,	// (0x00014259) popup_midp_note_alarm_window_t4_ParamLimits

0xb5fc,	// (0x00014259) popup_midp_note_alarm_window_t4

0xb61c,	// (0x00014279) popup_midp_note_alarm_window_t5_ParamLimits

0xb61c,	// (0x00014279) popup_midp_note_alarm_window_t5

0x000a,

0xf8d3,	// (0x00018530) popup_midp_note_alarm_window_t_ParamLimits

0xf8d3,	// (0x00018530) popup_midp_note_alarm_window_t

0xb6c8,	// (0x00014325) wait_bar_pane_cp1_ParamLimits

0xb6c8,	// (0x00014325) wait_bar_pane_cp1

0x7eda,	// (0x00010b37) wait_anim_pane_copy1

0x7eda,	// (0x00010b37) wait_border_pane_copy1

0xb0b9,	// (0x00013d16) wait_border_pane_g1_copy1

0x8df3,	// (0x00011a50) form_field_popup_pane_g1

0x8dfb,	// (0x00011a58) form_field_popup_pane_t1_ParamLimits

0x8d93,	// (0x000119f0) input_focus_pane_cp7_ParamLimits

0x8e15,	// (0x00011a72) list_form_pane_ParamLimits

0x8e21,	// (0x00011a7e) form_field_popup_wide_pane_g1

0x8e29,	// (0x00011a86) form_field_popup_wide_pane_t1_ParamLimits

0x8d93,	// (0x000119f0) input_focus_pane_cp8_ParamLimits

0x8e3e,	// (0x00011a9b) list_form_wide_pane_ParamLimits

0xc2b6,	// (0x00014f13) aid_size_cell_graphic_pane

0x8f17,	// (0x00011b74) data_form_pane_t1_ParamLimits

0xc04b,	// (0x00014ca8) data_form_wide_pane_t1_ParamLimits

0xa5c5,	// (0x00013222) bg_status_flat_pane

0x7f1a,	// (0x00010b77) title_pane_t1_ParamLimits

0x7f82,	// (0x00010bdf) title_pane_t2_ParamLimits

0x7fa8,	// (0x00010c05) title_pane_t3_ParamLimits

0xf59b,	// (0x000181f8) title_pane_t_ParamLimits

0x9501,	// (0x0001215e) level_1_signal_ParamLimits

0x950e,	// (0x0001216b) level_2_signal_ParamLimits

0x951b,	// (0x00012178) level_3_signal_ParamLimits

0x9528,	// (0x00012185) level_4_signal_ParamLimits

0x9535,	// (0x00012192) level_5_signal_ParamLimits

0x9542,	// (0x0001219f) level_6_signal_ParamLimits

0x954f,	// (0x000121ac) level_7_signal_ParamLimits

0x9501,	// (0x0001215e) level_1_battery_ParamLimits

0x950e,	// (0x0001216b) level_2_battery_ParamLimits

0x951b,	// (0x00012178) level_3_battery_ParamLimits

0x9528,	// (0x00012185) level_4_battery_ParamLimits

0x9535,	// (0x00012192) level_5_battery_ParamLimits

0x9542,	// (0x0001219f) level_6_battery_ParamLimits

0x954f,	// (0x000121ac) level_7_battery_ParamLimits

0xb2e0,	// (0x00013f3d) bg_status_flat_pane_g1

0xb2e8,	// (0x00013f45) bg_status_flat_pane_g2

0xb2f0,	// (0x00013f4d) bg_status_flat_pane_g3

0xb2f8,	// (0x00013f55) bg_status_flat_pane_g4

0xb300,	// (0x00013f5d) bg_status_flat_pane_g5

0xb308,	// (0x00013f65) bg_status_flat_pane_g6

0xb310,	// (0x00013f6d) bg_status_flat_pane_g7

0x7fd0,	// (0x00010c2d) tabs_3_active_pane_t1_ParamLimits

0x7fd0,	// (0x00010c2d) tabs_3_passive_pane_t1_ParamLimits

0x7fea,	// (0x00010c47) tabs_4_active_pane_t1_ParamLimits

0x7fea,	// (0x00010c47) tabs_4_1_passive_pane_t1_ParamLimits

0x90c6,	// (0x00011d23) tabs_2_active_pane_t1_ParamLimits

0x90c6,	// (0x00011d23) tabs_2_passive_pane_t1_ParamLimits

0x90d8,	// (0x00011d35) bg_active_tab_pane_cp4_ParamLimits

0x90e6,	// (0x00011d43) tabs_2_long_active_pane_t1_ParamLimits

0x90f9,	// (0x00011d56) bg_passive_tab_pane_cp4_ParamLimits

0x6d93,	// (0x0000f9f0) list_single_midp_graphic_pane_t1_ParamLimits

0x90d8,	// (0x00011d35) bg_active_tab_pane_cp5_ParamLimits

0x9105,	// (0x00011d62) tabs_3_long_active_pane_t1_ParamLimits

0x90f9,	// (0x00011d56) bg_passive_tab_pane_cp5_ParamLimits

0x6d93,	// (0x0000f9f0) list_single_midp_graphic_pane_t1

0xa5c5,	// (0x00013222) bg_status_flat_pane_ParamLimits

0xa688,	// (0x000132e5) indicator_pane_cp2_ParamLimits

0xa688,	// (0x000132e5) indicator_pane_cp2

0xa7ac,	// (0x00013409) navi_pane_srt_ParamLimits

0xa7ac,	// (0x00013409) navi_pane_srt

0xa7d0,	// (0x0001342d) popup_clock_digital_analogue_window_cp1

0x80b1,	// (0x00010d0e) indicator_pane_t1

0x9bd9,	// (0x00012836) copy_highlight_pane

0x9bd9,	// (0x00012836) cursor_graphics_pane

0x9bd9,	// (0x00012836) graphic_within_text_pane

0x9bd9,	// (0x00012836) link_highlight_pane

0xbae9,	// (0x00014746) popup_preview_text_window_t5_ParamLimits

0xbae9,	// (0x00014746) popup_preview_text_window_t5

0x9d09,	// (0x00012966) cursor_digital_pane

0x9d09,	// (0x00012966) cursor_primary_pane

0x9d1a,	// (0x00012977) cursor_primary_small_pane

0x9d22,	// (0x0001297f) cursor_secondary_pane

0x9d2a,	// (0x00012987) cursor_title_pane

0x9d09,	// (0x00012966) link_highlight_digital_pane

0x9d11,	// (0x0001296e) link_highlight_primary_pane

0x9d1a,	// (0x00012977) link_highlight_primary_small_pane

0x9d22,	// (0x0001297f) link_highlight_secondary_pane

0x9d2a,	// (0x00012987) link_highlight_title_pane

0x9d09,	// (0x00012966) copy_highlight_digital_pane

0x9d09,	// (0x00012966) copy_highlight_primary_pane

0x9d1a,	// (0x00012977) copy_highlight_primary_small_pane

0x9d22,	// (0x0001297f) copy_highlight_secondary_pane

0x9d2a,	// (0x00012987) copy_highlight_title_pane

0x9d22,	// (0x0001297f) graphic_text_digital_pane

0xb37e,	// (0x00013fdb) graphic_text_primary_pane

0xb387,	// (0x00013fe4) graphic_text_primary_small_pane

0x9d1a,	// (0x00012977) graphic_text_secondary_pane

0x9d09,	// (0x00012966) graphic_text_title_pane

0x9d32,	// (0x0001298f) cursor_primary_pane_g1

0xb370,	// (0x00013fcd) cursor_text_primary_t1

0xb358,	// (0x00013fb5) cursor_primary_small_pane_g1

0xb362,	// (0x00013fbf) cursor_text_primary_small_t1

0xb340,	// (0x00013f9d) cursor_primary_small_pane_g1_copy1

0xb34a,	// (0x00013fa7) cursor_text_primary_small_t1_copy1

0xb328,	// (0x00013f85) cursor_text_title_t1

0xb336,	// (0x00013f93) cursor_title_pane_g1

0x9d32,	// (0x0001298f) cursor_digital_pane_g1

0x9d3c,	// (0x00012999) cursor_text_digital_t1

0xb2c9,	// (0x00013f26) link_highlight_primary_pane_g1

0xb2d1,	// (0x00013f2e) link_highlight_primary_pane_t1

0x9d4a,	// (0x000129a7) link_highlight_primary_small_pane_g1

0x9d52,	// (0x000129af) link_highlight_primary_small_pane_t1

0x9d4a,	// (0x000129a7) link_highlight_secondary_pane_g1

0x9d61,	// (0x000129be) link_highlight_secondary_pane_t1

0xb23d,	// (0x00013e9a) link_highlight_title_pane_g1

0xb245,	// (0x00013ea2) link_highlight_title_pane_t1

0xb226,	// (0x00013e83) link_highlight_digital_pane_g1

0xb22e,	// (0x00013e8b) link_highlight_digital_pane_t1

0xb0fe,	// (0x00013d5b) copy_highlight_primary_pane_g1

0xb106,	// (0x00013d63) copy_highlight_primary_pane_t1

0xb0d8,	// (0x00013d35) copy_highlight_primary_small_pane_g1

0xb0ef,	// (0x00013d4c) copy_highlight_primary_small_pane_t1

0x9d70,	// (0x000129cd) copy_highlight_secondary_pane_g1

0x9d78,	// (0x000129d5) copy_highlight_secondary_pane_t1

0xb0d8,	// (0x00013d35) copy_highlight_title_pane_g1

0xb0e0,	// (0x00013d3d) copy_highlight_title_pane_t1

0xb0fe,	// (0x00013d5b) copy_highlight_digital_pane_g1

0xc484,	// (0x000150e1) copy_highlight_digital_pane_t1

0xc3d8,	// (0x00015035) graphic_text_primary_pane_g1

0xc468,	// (0x000150c5) graphic_text_primary_pane_t1

0xc476,	// (0x000150d3) graphic_text_primary_pane_t2

0x0001,

0xfa02,	// (0x0001865f) graphic_text_primary_pane_t

0xc444,	// (0x000150a1) graphic_text_primary_small_pane_g1

0xc44c,	// (0x000150a9) graphic_text_primary_small_pane_t1

0xc45a,	// (0x000150b7) graphic_text_primary_small_pane_t2

0x0001,

0xf9fd,	// (0x0001865a) graphic_text_primary_small_pane_t

0xc420,	// (0x0001507d) graphic_text_secondary_pane_g1

0xc428,	// (0x00015085) graphic_text_secondary_pane_t1

0xc436,	// (0x00015093) graphic_text_secondary_pane_t2

0x0001,

0xf9f8,	// (0x00018655) graphic_text_secondary_pane_t

0xc3fc,	// (0x00015059) graphic_text_title_pane_g1

0xc404,	// (0x00015061) graphic_text_title_pane_t1

0xc412,	// (0x0001506f) graphic_text_title_pane_t2

0x0001,

0xf9f3,	// (0x00018650) graphic_text_title_pane_t

0xc3d8,	// (0x00015035) graphic_text_digital_pane_g1

0xc3e0,	// (0x0001503d) graphic_text_digital_pane_t1

0xc3ee,	// (0x0001504b) graphic_text_digital_pane_t2

0x0001,

0xf9ee,	// (0x0001864b) graphic_text_digital_pane_t

0x7fba,	// (0x00010c17) navi_icon_pane_srt_ParamLimits

0x7fba,	// (0x00010c17) navi_icon_pane_srt

0x7eda,	// (0x00010b37) navi_midp_pane_srt

0x7eda,	// (0x00010b37) navi_navi_pane_srt

0x7fba,	// (0x00010c17) navi_text_pane_srt_ParamLimits

0x7fba,	// (0x00010c17) navi_text_pane_srt

0xc3a3,	// (0x00015000) navi_navi_icon_text_pane_srt

0xc3ab,	// (0x00015008) navi_navi_pane_srt_g1_ParamLimits

0xc3ab,	// (0x00015008) navi_navi_pane_srt_g1

0xc3bd,	// (0x0001501a) navi_navi_pane_srt_g2_ParamLimits

0xc3bd,	// (0x0001501a) navi_navi_pane_srt_g2

0x0001,

0xf9e9,	// (0x00018646) navi_navi_pane_srt_g_ParamLimits

0xf9e9,	// (0x00018646) navi_navi_pane_srt_g

0xc3cf,	// (0x0001502c) navi_navi_tabs_pane_srt

0xc3a3,	// (0x00015000) navi_navi_text_pane_srt

0xc3a3,	// (0x00015000) navi_navi_volume_pane_srt

0xc394,	// (0x00014ff1) navi_navi_text_pane_srt_t1

0x7113,	// (0x0000fd70) navi_navi_volume_pane_srt_g1

0x711b,	// (0x0000fd78) volume_small_pane_srt_ParamLimits

0x711b,	// (0x0000fd78) volume_small_pane_srt

0x6aa5,	// (0x0000f702) volume_small_pane_srt_g1_ParamLimits

0x6aa5,	// (0x0000f702) volume_small_pane_srt_g1

0x6ab5,	// (0x0000f712) volume_small_pane_srt_g2_ParamLimits

0x6ab5,	// (0x0000f712) volume_small_pane_srt_g2

0x6ac6,	// (0x0000f723) volume_small_pane_srt_g3_ParamLimits

0x6ac6,	// (0x0000f723) volume_small_pane_srt_g3

0x6ad7,	// (0x0000f734) volume_small_pane_srt_g4_ParamLimits

0x6ad7,	// (0x0000f734) volume_small_pane_srt_g4

0x6ae8,	// (0x0000f745) volume_small_pane_srt_g5_ParamLimits

0x6ae8,	// (0x0000f745) volume_small_pane_srt_g5

0x6af9,	// (0x0000f756) volume_small_pane_srt_g6_ParamLimits

0x6af9,	// (0x0000f756) volume_small_pane_srt_g6

0x6b0a,	// (0x0000f767) volume_small_pane_srt_g7_ParamLimits

0x6b0a,	// (0x0000f767) volume_small_pane_srt_g7

0x6b1b,	// (0x0000f778) volume_small_pane_srt_g8_ParamLimits

0x6b1b,	// (0x0000f778) volume_small_pane_srt_g8

0x6b2c,	// (0x0000f789) volume_small_pane_srt_g9_ParamLimits

0x6b2c,	// (0x0000f789) volume_small_pane_srt_g9

0x6b3d,	// (0x0000f79a) volume_small_pane_srt_g10_ParamLimits

0x6b3d,	// (0x0000f79a) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x000183f5) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x000183f5) volume_small_pane_srt_g

0x83a2,	// (0x00010fff) query_popup_data_pane_cp2

0xc37a,	// (0x00014fd7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xc37a,	// (0x00014fd7) navi_navi_icon_text_pane_srt_t1

0xb37e,	// (0x00013fdb) navi_tabs_2_long_pane_srt

0xb37e,	// (0x00013fdb) navi_tabs_2_pane_srt

0xb37e,	// (0x00013fdb) navi_tabs_3_long_pane_srt

0xb37e,	// (0x00013fdb) navi_tabs_3_pane_srt

0xb37e,	// (0x00013fdb) navi_tabs_4_pane_srt

0x70f3,	// (0x0000fd50) tabs_2_active_pane_srt_ParamLimits

0x70f3,	// (0x0000fd50) tabs_2_active_pane_srt

0x7103,	// (0x0000fd60) tabs_2_passive_pane_srt_ParamLimits

0x7103,	// (0x0000fd60) tabs_2_passive_pane_srt

0x9f5f,	// (0x00012bbc) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9f5f,	// (0x00012bbc) bg_passive_tab_pane_cp1_srt

0xc346,	// (0x00014fa3) bg_passive_tab_pane_g1_cp1_srt

0x9821,	// (0x0001247e) bg_passive_tab_pane_g2_cp1_srt

0xc34f,	// (0x00014fac) bg_passive_tab_pane_g3_cp1_srt

0x7fba,	// (0x00010c17) bg_active_tab_pane_cp1_srt_ParamLimits

0x7fba,	// (0x00010c17) bg_active_tab_pane_cp1_srt

0xc358,	// (0x00014fb5) tabs_2_active_pane_srt_g1

0xc360,	// (0x00014fbd) tabs_2_active_pane_srt_t1_ParamLimits

0xc360,	// (0x00014fbd) tabs_2_active_pane_srt_t1

0xc346,	// (0x00014fa3) bg_active_tab_pane_g1_cp1_srt

0x9821,	// (0x0001247e) bg_active_tab_pane_g2_cp1_srt

0xc34f,	// (0x00014fac) bg_active_tab_pane_g3_cp1_srt

0x70c0,	// (0x0000fd1d) tabs_3_active_pane_srt_ParamLimits

0x70c0,	// (0x0000fd1d) tabs_3_active_pane_srt

0x70d1,	// (0x0000fd2e) tabs_3_passive_pane_cp_srt_ParamLimits

0x70d1,	// (0x0000fd2e) tabs_3_passive_pane_cp_srt

0x70e2,	// (0x0000fd3f) tabs_3_passive_pane_srt_ParamLimits

0x70e2,	// (0x0000fd3f) tabs_3_passive_pane_srt

0x9f5f,	// (0x00012bbc) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9f5f,	// (0x00012bbc) bg_passive_tab_pane_cp2_srt

0x9d87,	// (0x000129e4) bg_passive_tab_pane_g1_cp2_srt

0x9821,	// (0x0001247e) bg_passive_tab_pane_g2_cp2_srt

0x9d90,	// (0x000129ed) bg_passive_tab_pane_g3_cp2_srt

0x7fba,	// (0x00010c17) bg_active_tab_pane_cp2_srt_ParamLimits

0x7fba,	// (0x00010c17) bg_active_tab_pane_cp2_srt

0xc32c,	// (0x00014f89) tabs_3_active_pane_srt_g1

0xc334,	// (0x00014f91) tabs_3_active_pane_srt_t1_ParamLimits

0xc334,	// (0x00014f91) tabs_3_active_pane_srt_t1

0x9d87,	// (0x000129e4) bg_active_tab_pane_g1_cp2_srt

0x9821,	// (0x0001247e) bg_active_tab_pane_g2_cp2_srt

0x9d90,	// (0x000129ed) bg_active_tab_pane_g3_cp2_srt

0x7078,	// (0x0000fcd5) tabs_4_active_pane_srt_ParamLimits

0x7078,	// (0x0000fcd5) tabs_4_active_pane_srt

0x708a,	// (0x0000fce7) tabs_4_passive_pane_cp2_srt_ParamLimits

0x708a,	// (0x0000fce7) tabs_4_passive_pane_cp2_srt

0x9ee5,	// (0x00012b42) aid_size_cell_toolbar

0x90f9,	// (0x00011d56) main_idle_act_pane_ParamLimits

0xa0fe,	// (0x00012d5b) popup_large_graphic_colour_window_ParamLimits

0xa45d,	// (0x000130ba) popup_toolbar_window_ParamLimits

0xa45d,	// (0x000130ba) popup_toolbar_window

0xc0ce,	// (0x00014d2b) list_single_graphic_2heading_pane_ParamLimits

0xc0ce,	// (0x00014d2b) list_single_graphic_2heading_pane

0x92b5,	// (0x00011f12) aid_size_cell_apps_grid_lsc_pane

0x92c7,	// (0x00011f24) aid_size_cell_apps_grid_prt_pane

0x9f5f,	// (0x00012bbc) bg_wml_button_pane_cp1_ParamLimits

0x9f5f,	// (0x00012bbc) bg_wml_button_pane_cp1

0xad60,	// (0x000139bd) form_midp_field_text_pane_t1_ParamLimits

0xab2b,	// (0x00013788) input_focus_pane_cp050_ParamLimits

0xad9f,	// (0x000139fc) list_midp_form_text_pane_ParamLimits

0xad3d,	// (0x0001399a) input_focus_pane_cp051_ParamLimits

0xad51,	// (0x000139ae) list_midp_choice_pane_ParamLimits

0xabbc,	// (0x00013819) list_single_2graphic_pane_cp3_ParamLimits

0xabbc,	// (0x00013819) list_single_2graphic_pane_cp3

0xabe8,	// (0x00013845) list_single_midp_graphic_pane_ParamLimits

0xabe8,	// (0x00013845) list_single_midp_graphic_pane

0x6c98,	// (0x0000f8f5) list_single_graphic_2heading_pane_g1_ParamLimits

0x6c98,	// (0x0000f8f5) list_single_graphic_2heading_pane_g1

0x6ca4,	// (0x0000f901) list_single_graphic_2heading_pane_g4_ParamLimits

0x6ca4,	// (0x0000f901) list_single_graphic_2heading_pane_g4

0x6cb0,	// (0x0000f90d) list_single_graphic_2heading_pane_g5_ParamLimits

0x6cb0,	// (0x0000f90d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x00018448) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x00018448) list_single_graphic_2heading_pane_g

0x6cbc,	// (0x0000f919) list_single_graphic_2heading_pane_t1_ParamLimits

0x6cbc,	// (0x0000f919) list_single_graphic_2heading_pane_t1

0x6cd0,	// (0x0000f92d) list_single_graphic_2heading_pane_t2_ParamLimits

0x6cd0,	// (0x0000f92d) list_single_graphic_2heading_pane_t2

0x6cec,	// (0x0000f949) list_single_graphic_2heading_pane_t3_ParamLimits

0x6cec,	// (0x0000f949) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0001844f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0001844f) list_single_graphic_2heading_pane_t

0xa92d,	// (0x0001358a) bg_popup_sub_pane_cp2

0xa957,	// (0x000135b4) grid_toobar_pane

0x6d04,	// (0x0000f961) cell_toolbar_pane_ParamLimits

0x6d04,	// (0x0000f961) cell_toolbar_pane

0xa9b5,	// (0x00013612) cell_toolbar_pane_g1_ParamLimits

0xa9b5,	// (0x00013612) cell_toolbar_pane_g1

0xa9c9,	// (0x00013626) cell_toolbar_pane_g2_ParamLimits

0xa9c9,	// (0x00013626) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0001845d) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0001845d) cell_toolbar_pane_g

0xa9eb,	// (0x00013648) grid_highlight_pane_cp2_ParamLimits

0xa9eb,	// (0x00013648) grid_highlight_pane_cp2

0xaa05,	// (0x00013662) toolbar_button_pane

0xaa11,	// (0x0001366e) toolbar_button_pane_g1

0xaa19,	// (0x00013676) toolbar_button_pane_g2

0xaa21,	// (0x0001367e) toolbar_button_pane_g3

0xaa29,	// (0x00013686) toolbar_button_pane_g4

0xaa31,	// (0x0001368e) toolbar_button_pane_g5

0xaa39,	// (0x00013696) toolbar_button_pane_g6

0xaa41,	// (0x0001369e) toolbar_button_pane_g7

0xaa49,	// (0x000136a6) toolbar_button_pane_g8

0xaa51,	// (0x000136ae) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x00018462) toolbar_button_pane_g

0x6d3c,	// (0x0000f999) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6d3c,	// (0x0000f999) list_single_2graphic_pane_g1_cp3

0x6d48,	// (0x0000f9a5) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6d48,	// (0x0000f9a5) list_single_2graphic_pane_g2_cp3

0x6d59,	// (0x0000f9b6) list_single_2graphic_pane_g3_cp3

0x6d61,	// (0x0000f9be) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6d61,	// (0x0000f9be) list_single_2graphic_pane_g4_cp3

0x6d6d,	// (0x0000f9ca) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6d6d,	// (0x0000f9ca) list_single_2graphic_pane_t1_cp3

0x6d87,	// (0x0000f9e4) list_single_midp_graphic_pane_g2_ParamLimits

0x6d87,	// (0x0000f9e4) list_single_midp_graphic_pane_g2

0x9eed,	// (0x00012b4a) aid_zoom_text_primary

0x9ef5,	// (0x00012b52) aid_zoom_text_secondary

0x9e44,	// (0x00012aa1) status_small_pane_g7_ParamLimits

0x9e44,	// (0x00012aa1) status_small_pane_g7

0x9e67,	// (0x00012ac4) status_small_pane_t1_ParamLimits

0x7ef1,	// (0x00010b4e) title_pane_g2

0x0003,

0xf592,	// (0x000181ef) title_pane_g

0x8443,	// (0x000110a0) aid_size_cell_colour_1_pane_ParamLimits

0x8443,	// (0x000110a0) aid_size_cell_colour_1_pane

0x8457,	// (0x000110b4) aid_size_cell_colour_2_pane_ParamLimits

0x8457,	// (0x000110b4) aid_size_cell_colour_2_pane

0x846b,	// (0x000110c8) aid_size_cell_colour_3_pane_ParamLimits

0x846b,	// (0x000110c8) aid_size_cell_colour_3_pane

0x847f,	// (0x000110dc) aid_size_cell_colour_4_pane_ParamLimits

0x847f,	// (0x000110dc) aid_size_cell_colour_4_pane

0x6701,	// (0x0000f35e) title_pane_stacon_g1_ParamLimits

0x6701,	// (0x0000f35e) title_pane_stacon_g1

0xb15d,	// (0x00013dba) popup_note_wait_window_g3_ParamLimits

0xb15d,	// (0x00013dba) popup_note_wait_window_g3

0xb1d3,	// (0x00013e30) popup_note_wait_window_t5_ParamLimits

0xb1d3,	// (0x00013e30) popup_note_wait_window_t5

0x7eda,	// (0x00010b37) main_feb_china_hwr_fs_writing_pane

0x9fe9,	// (0x00012c46) popup_feb_china_hwr_fs_window_ParamLimits

0x9fe9,	// (0x00012c46) popup_feb_china_hwr_fs_window

0x6da9,	// (0x0000fa06) aid_size_cell_hwr_fs_ParamLimits

0x6da9,	// (0x0000fa06) aid_size_cell_hwr_fs

0xab2b,	// (0x00013788) bg_popup_sub_pane_cp3_ParamLimits

0xab2b,	// (0x00013788) bg_popup_sub_pane_cp3

0x6dbe,	// (0x0000fa1b) grid_hwr_fs_pane_ParamLimits

0x6dbe,	// (0x0000fa1b) grid_hwr_fs_pane

0x6dd6,	// (0x0000fa33) linegrid_hwr_fs_pane_ParamLimits

0x6dd6,	// (0x0000fa33) linegrid_hwr_fs_pane

0x6de6,	// (0x0000fa43) cell_hwr_fs_pane_ParamLimits

0x6de6,	// (0x0000fa43) cell_hwr_fs_pane

0xab37,	// (0x00013794) linegrid_hwr_fs_pane_g1_ParamLimits

0xab37,	// (0x00013794) linegrid_hwr_fs_pane_g1

0xab43,	// (0x000137a0) linegrid_hwr_fs_pane_g2_ParamLimits

0xab43,	// (0x000137a0) linegrid_hwr_fs_pane_g2

0xab55,	// (0x000137b2) linegrid_hwr_fs_pane_g3_ParamLimits

0xab55,	// (0x000137b2) linegrid_hwr_fs_pane_g3

0x6e08,	// (0x0000fa65) linegrid_hwr_fs_pane_g4_ParamLimits

0x6e08,	// (0x0000fa65) linegrid_hwr_fs_pane_g4

0x6e22,	// (0x0000fa7f) linegrid_hwr_fs_pane_g5_ParamLimits

0x6e22,	// (0x0000fa7f) linegrid_hwr_fs_pane_g5

0x0004,

0xf830,	// (0x0001848d) linegrid_hwr_fs_pane_g_ParamLimits

0xf830,	// (0x0001848d) linegrid_hwr_fs_pane_g

0xab61,	// (0x000137be) cell_hwr_fs_pane_g1_ParamLimits

0xab61,	// (0x000137be) cell_hwr_fs_pane_g1

0xa866,	// (0x000134c3) cell_hwr_fs_pane_g2_ParamLimits

0xa866,	// (0x000134c3) cell_hwr_fs_pane_g2

0xab77,	// (0x000137d4) cell_hwr_fs_pane_g3_ParamLimits

0xab77,	// (0x000137d4) cell_hwr_fs_pane_g3

0xab84,	// (0x000137e1) cell_hwr_fs_pane_g4_ParamLimits

0xab84,	// (0x000137e1) cell_hwr_fs_pane_g4

0x0003,

0xf83b,	// (0x00018498) cell_hwr_fs_pane_g_ParamLimits

0xf83b,	// (0x00018498) cell_hwr_fs_pane_g

0x6e38,	// (0x0000fa95) cell_hwr_fs_pane_t1

0x7eda,	// (0x00010b37) grid_highlight_pane_cp6

0x7eda,	// (0x00010b37) main_idle_act2_pane

0x906d,	// (0x00011cca) aid_inside_area_popup_secondary

0xb804,	// (0x00014461) aid_inside_area_window_primary_ParamLimits

0xb804,	// (0x00014461) aid_inside_area_window_primary

0xc493,	// (0x000150f0) ai2_news_ticker_pane

0xc49b,	// (0x000150f8) aid_size_cell_ai1_link_ParamLimits

0xc49b,	// (0x000150f8) aid_size_cell_ai1_link

0xc4b5,	// (0x00015112) popup_ai2_data_window_ParamLimits

0xc4b5,	// (0x00015112) popup_ai2_data_window

0xc4c9,	// (0x00015126) popup_ai2_link_window_ParamLimits

0xc4c9,	// (0x00015126) popup_ai2_link_window

0xab2b,	// (0x00013788) bg_popup_sub_pane_cp4_ParamLimits

0xab2b,	// (0x00013788) bg_popup_sub_pane_cp4

0xc4dd,	// (0x0001513a) grid_ai2_link_pane_ParamLimits

0xc4dd,	// (0x0001513a) grid_ai2_link_pane

0xc4f4,	// (0x00015151) popup_ai2_link_window_g1_ParamLimits

0xc4f4,	// (0x00015151) popup_ai2_link_window_g1

0xc500,	// (0x0001515d) popup_ai2_link_window_g2_ParamLimits

0xc500,	// (0x0001515d) popup_ai2_link_window_g2

0x0001,

0xfa07,	// (0x00018664) popup_ai2_link_window_g_ParamLimits

0xfa07,	// (0x00018664) popup_ai2_link_window_g

0xc50f,	// (0x0001516c) ai2_mp_button_pane

0xc517,	// (0x00015174) ai2_mp_volume_pane

0xad3d,	// (0x0001399a) bg_popup_sub_pane_cp5_ParamLimits

0xad3d,	// (0x0001399a) bg_popup_sub_pane_cp5

0xc51f,	// (0x0001517c) heading_ai2_gene_pane_ParamLimits

0xc51f,	// (0x0001517c) heading_ai2_gene_pane

0xc52b,	// (0x00015188) list_ai2_gene_pane_ParamLimits

0xc52b,	// (0x00015188) list_ai2_gene_pane

0xc573,	// (0x000151d0) cell_ai2_link_pane_ParamLimits

0xc573,	// (0x000151d0) cell_ai2_link_pane

0xc589,	// (0x000151e6) cell_ai2_link_pane_g1

0x7eda,	// (0x00010b37) grid_highlight_pane_cp7

0x7130,	// (0x0000fd8d) ai2_mp_volume_pane_g1

0xc65a,	// (0x000152b7) ai2_mp_volume_pane_g2

0xc5cf,	// (0x0001522c) list_ai2_gene_pane_t1

0xc662,	// (0x000152bf) ai2_mp_volume_pane_g3

0x0002,

0xfa20,	// (0x0001867d) ai2_mp_volume_pane_g

0x7138,	// (0x0000fd95) volume_small_pane_cp3

0xc66a,	// (0x000152c7) aid_size_cell_ai2_button

0xc672,	// (0x000152cf) grid_ai2_button_pane

0xc67b,	// (0x000152d8) cell_ai2_button_pane_ParamLimits

0xc67b,	// (0x000152d8) cell_ai2_button_pane

0x7ed0,	// (0x00010b2d) cell_ai2_button_pane_g1

0x7eda,	// (0x00010b37) grid_highlight_pane_cp8

0xc61a,	// (0x00015277) ai2_gene_pane_t1_ParamLimits

0xc61a,	// (0x00015277) ai2_gene_pane_t1

0x9edb,	// (0x00012b38) aid_height_parent_landscape

0xbebb,	// (0x00014b18) aid_height_set_list

0xbecc,	// (0x00014b29) aid_size_parent

0xc2b6,	// (0x00014f13) aid_size_cell_graphic_pane_ParamLimits

0xc53b,	// (0x00015198) popup_ai2_data_window_g1_ParamLimits

0xc53b,	// (0x00015198) popup_ai2_data_window_g1

0xc547,	// (0x000151a4) ai2_news_ticker_pane_g1

0xc54f,	// (0x000151ac) ai2_news_ticker_pane_g2

0x0001,

0xfa0c,	// (0x00018669) ai2_news_ticker_pane_g

0xc557,	// (0x000151b4) ai2_news_ticker_pane_t1

0xc565,	// (0x000151c2) ai2_news_ticker_pane_t2

0x0001,

0xfa11,	// (0x0001866e) ai2_news_ticker_pane_t

0xc592,	// (0x000151ef) heading_ai2_gene_pane_g1

0xc59a,	// (0x000151f7) heading_ai2_gene_pane_t1_ParamLimits

0xc59a,	// (0x000151f7) heading_ai2_gene_pane_t1

0xc5af,	// (0x0001520c) list_highlight_pane_cp6

0xc5b7,	// (0x00015214) ai2_gene_pane_ParamLimits

0xc5b7,	// (0x00015214) ai2_gene_pane

0xc5dd,	// (0x0001523a) list_ai2_gene_pane_t2

0x0001,

0xfa16,	// (0x00018673) list_ai2_gene_pane_t

0xc5eb,	// (0x00015248) list_highlight_pane_cp8_ParamLimits

0xc5eb,	// (0x00015248) list_highlight_pane_cp8

0xc5fc,	// (0x00015259) ai2_gene_pane_g1_ParamLimits

0xc5fc,	// (0x00015259) ai2_gene_pane_g1

0xc60e,	// (0x0001526b) ai2_gene_pane_g2_ParamLimits

0xc60e,	// (0x0001526b) ai2_gene_pane_g2

0x0001,

0xfa1b,	// (0x00018678) ai2_gene_pane_g_ParamLimits

0xfa1b,	// (0x00018678) ai2_gene_pane_g

0x87bd,	// (0x0001141a) scroll_pane_cp12

0x6c57,	// (0x0000f8b4) control_pane_t3_ParamLimits

0x6c57,	// (0x0000f8b4) control_pane_t3

0x9e58,	// (0x00012ab5) status_small_pane_g8_ParamLimits

0x9e58,	// (0x00012ab5) status_small_pane_g8

0xa0cb,	// (0x00012d28) popup_find_window_ParamLimits

0xa2de,	// (0x00012f3b) popup_note_image_window_ParamLimits

0xa993,	// (0x000135f0) list_double2_graphic_pane_vc_g1_ParamLimits

0xa993,	// (0x000135f0) list_double2_graphic_pane_vc_g1

0x888f,	// (0x000114ec) list_double2_graphic_pane_vc_g2_ParamLimits

0x888f,	// (0x000114ec) list_double2_graphic_pane_vc_g2

0x889b,	// (0x000114f8) list_double2_graphic_pane_vc_g3_ParamLimits

0x889b,	// (0x000114f8) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x00018456) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x00018456) list_double2_graphic_pane_vc_g

0xa99f,	// (0x000135fc) list_double2_graphic_pane_vc_t1_ParamLimits

0xa99f,	// (0x000135fc) list_double2_graphic_pane_vc_t1

0x888f,	// (0x000114ec) list_single_heading_pane_vc_g1_ParamLimits

0x888f,	// (0x000114ec) list_single_heading_pane_vc_g1

0x889b,	// (0x000114f8) list_single_heading_pane_vc_g2_ParamLimits

0x889b,	// (0x000114f8) list_single_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x00018477) list_single_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x00018477) list_single_heading_pane_vc_g

0xaa59,	// (0x000136b6) list_single_heading_pane_vc_t1_ParamLimits

0xaa59,	// (0x000136b6) list_single_heading_pane_vc_t1

0xaa6f,	// (0x000136cc) list_single_heading_pane_vc_t2_ParamLimits

0xaa6f,	// (0x000136cc) list_single_heading_pane_vc_t2

0x0001,

0xf81f,	// (0x0001847c) list_single_heading_pane_vc_t_ParamLimits

0xf81f,	// (0x0001847c) list_single_heading_pane_vc_t

0xaa83,	// (0x000136e0) list_setting_number_pane_vc_g1_ParamLimits

0xaa83,	// (0x000136e0) list_setting_number_pane_vc_g1

0xaa8f,	// (0x000136ec) list_setting_number_pane_vc_g2_ParamLimits

0xaa8f,	// (0x000136ec) list_setting_number_pane_vc_g2

0x0001,

0xf824,	// (0x00018481) list_setting_number_pane_vc_g_ParamLimits

0xf824,	// (0x00018481) list_setting_number_pane_vc_g

0xaa9b,	// (0x000136f8) list_setting_number_pane_vc_t1_ParamLimits

0xaa9b,	// (0x000136f8) list_setting_number_pane_vc_t1

0xaaaf,	// (0x0001370c) list_setting_number_pane_vc_t2_ParamLimits

0xaaaf,	// (0x0001370c) list_setting_number_pane_vc_t2

0xaacb,	// (0x00013728) list_setting_number_pane_vc_t3_ParamLimits

0xaacb,	// (0x00013728) list_setting_number_pane_vc_t3

0x0002,

0xf829,	// (0x00018486) list_setting_number_pane_vc_t_ParamLimits

0xf829,	// (0x00018486) list_setting_number_pane_vc_t

0xaaf3,	// (0x00013750) set_value_pane_vc_ParamLimits

0xaaf3,	// (0x00013750) set_value_pane_vc

0xc0ce,	// (0x00014d2b) list_double2_graphic_pane_vc_ParamLimits

0xc0ce,	// (0x00014d2b) list_double2_graphic_pane_vc

0xc0ce,	// (0x00014d2b) list_double2_large_graphic_pane_vc_ParamLimits

0xc0ce,	// (0x00014d2b) list_double2_large_graphic_pane_vc

0xc0ce,	// (0x00014d2b) list_double2_pane_vc_ParamLimits

0xc0ce,	// (0x00014d2b) list_double2_pane_vc

0xc0ce,	// (0x00014d2b) list_double_graphic_heading_pane_vc_ParamLimits

0xc0ce,	// (0x00014d2b) list_double_graphic_heading_pane_vc

0xc0ce,	// (0x00014d2b) list_double_graphic_pane_vc_ParamLimits

0xc0ce,	// (0x00014d2b) list_double_graphic_pane_vc

0xc0ce,	// (0x00014d2b) list_double_heading_pane_vc_ParamLimits

0xc0ce,	// (0x00014d2b) list_double_heading_pane_vc

0xc0ce,	// (0x00014d2b) list_double_large_graphic_pane_vc_ParamLimits

0xc0ce,	// (0x00014d2b) list_double_large_graphic_pane_vc

0xc0ce,	// (0x00014d2b) list_double_number_pane_vc_ParamLimits

0xc0ce,	// (0x00014d2b) list_double_number_pane_vc

0xc0ce,	// (0x00014d2b) list_double_pane_vc_ParamLimits

0xc0ce,	// (0x00014d2b) list_double_pane_vc

0xc0ce,	// (0x00014d2b) list_double_time_pane_vc_ParamLimits

0xc0ce,	// (0x00014d2b) list_double_time_pane_vc

0xc0ce,	// (0x00014d2b) list_setting_number_pane_vc_ParamLimits

0xc0ce,	// (0x00014d2b) list_setting_number_pane_vc

0xc0ce,	// (0x00014d2b) list_setting_pane_vc_ParamLimits

0xc0ce,	// (0x00014d2b) list_setting_pane_vc

0xc0ce,	// (0x00014d2b) list_single_graphic_heading_pane_vc_ParamLimits

0xc0ce,	// (0x00014d2b) list_single_graphic_heading_pane_vc

0xc0ce,	// (0x00014d2b) list_single_heading_pane_vc_ParamLimits

0xc0ce,	// (0x00014d2b) list_single_heading_pane_vc

0xc0e1,	// (0x00014d3e) list_single_number_heading_pane_vc_ParamLimits

0xc0e1,	// (0x00014d3e) list_single_number_heading_pane_vc

0xa993,	// (0x000135f0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xa993,	// (0x000135f0) list_double_graphic_heading_pane_vc_g1

0x888f,	// (0x000114ec) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x888f,	// (0x000114ec) list_double_graphic_heading_pane_vc_g2

0x889b,	// (0x000114f8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x889b,	// (0x000114f8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7f9,	// (0x00018456) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x00018456) list_double_graphic_heading_pane_vc_g

0xc6af,	// (0x0001530c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc6af,	// (0x0001530c) list_double_graphic_heading_pane_vc_t1

0xaa59,	// (0x000136b6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xaa59,	// (0x000136b6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa27,	// (0x00018684) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x00018684) list_double_graphic_heading_pane_vc_t

0xaa83,	// (0x000136e0) list_setting_pane_vc_g1_ParamLimits

0xaa83,	// (0x000136e0) list_setting_pane_vc_g1

0xaa8f,	// (0x000136ec) list_setting_pane_vc_g2_ParamLimits

0xaa8f,	// (0x000136ec) list_setting_pane_vc_g2

0x0001,

0xf824,	// (0x00018481) list_setting_pane_vc_g_ParamLimits

0xf824,	// (0x00018481) list_setting_pane_vc_g

0xc8a7,	// (0x00015504) list_setting_pane_vc_t1_ParamLimits

0xc8a7,	// (0x00015504) list_setting_pane_vc_t1

0xc8bb,	// (0x00015518) list_setting_pane_vc_t2_ParamLimits

0xc8bb,	// (0x00015518) list_setting_pane_vc_t2

0x0001,

0xfa6a,	// (0x000186c7) list_setting_pane_vc_t_ParamLimits

0xfa6a,	// (0x000186c7) list_setting_pane_vc_t

0xaaf3,	// (0x00013750) set_value_pane_cp_vc_ParamLimits

0xaaf3,	// (0x00013750) set_value_pane_cp_vc

0x888f,	// (0x000114ec) list_single_number_heading_pane_vc_g1_ParamLimits

0x888f,	// (0x000114ec) list_single_number_heading_pane_vc_g1

0x889b,	// (0x000114f8) list_single_number_heading_pane_vc_g2_ParamLimits

0x889b,	// (0x000114f8) list_single_number_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x00018477) list_single_number_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x00018477) list_single_number_heading_pane_vc_g

0xaa59,	// (0x000136b6) list_single_number_heading_pane_vc_t1_ParamLimits

0xaa59,	// (0x000136b6) list_single_number_heading_pane_vc_t1

0xc8dd,	// (0x0001553a) list_single_number_heading_pane_vc_t2_ParamLimits

0xc8dd,	// (0x0001553a) list_single_number_heading_pane_vc_t2

0xc8f1,	// (0x0001554e) list_single_number_heading_pane_vc_t3_ParamLimits

0xc8f1,	// (0x0001554e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6f,	// (0x000186cc) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x000186cc) list_single_number_heading_pane_vc_t

0xa993,	// (0x000135f0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xa993,	// (0x000135f0) list_single_graphic_heading_pane_vc_g1

0x888f,	// (0x000114ec) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x888f,	// (0x000114ec) list_single_graphic_heading_pane_vc_g4

0x889b,	// (0x000114f8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x889b,	// (0x000114f8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x00018456) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x00018456) list_single_graphic_heading_pane_vc_g

0xaa59,	// (0x000136b6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xaa59,	// (0x000136b6) list_single_graphic_heading_pane_vc_t1

0xc903,	// (0x00015560) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc903,	// (0x00015560) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x000186d3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x000186d3) list_single_graphic_heading_pane_vc_t

0x888f,	// (0x000114ec) list_double2_pane_vc_g1_ParamLimits

0x888f,	// (0x000114ec) list_double2_pane_vc_g1

0x889b,	// (0x000114f8) list_double2_pane_vc_g2_ParamLimits

0x889b,	// (0x000114f8) list_double2_pane_vc_g2

0x0001,

0xf81a,	// (0x00018477) list_double2_pane_vc_g_ParamLimits

0xf81a,	// (0x00018477) list_double2_pane_vc_g

0xc917,	// (0x00015574) list_double2_pane_vc_t1_ParamLimits

0xc917,	// (0x00015574) list_double2_pane_vc_t1

0xc92d,	// (0x0001558a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc92d,	// (0x0001558a) list_double2_large_graphic_pane_vc_g1

0x888f,	// (0x000114ec) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x888f,	// (0x000114ec) list_double2_large_graphic_pane_vc_g2

0x889b,	// (0x000114f8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x889b,	// (0x000114f8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa7b,	// (0x000186d8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x000186d8) list_double2_large_graphic_pane_vc_g

0xc939,	// (0x00015596) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc939,	// (0x00015596) list_double2_large_graphic_pane_vc_t1

0xc94f,	// (0x000155ac) list_double_time_pane_vc_g1_ParamLimits

0xc94f,	// (0x000155ac) list_double_time_pane_vc_g1

0xc95b,	// (0x000155b8) list_double_time_pane_vc_g2_ParamLimits

0xc95b,	// (0x000155b8) list_double_time_pane_vc_g2

0x0001,

0xfa82,	// (0x000186df) list_double_time_pane_vc_g_ParamLimits

0xfa82,	// (0x000186df) list_double_time_pane_vc_g

0xc967,	// (0x000155c4) list_double_time_pane_vc_t1_ParamLimits

0xc967,	// (0x000155c4) list_double_time_pane_vc_t1

0xc980,	// (0x000155dd) list_double_time_pane_vc_t2_ParamLimits

0xc980,	// (0x000155dd) list_double_time_pane_vc_t2

0xc9a0,	// (0x000155fd) list_double_time_pane_vc_t3_ParamLimits

0xc9a0,	// (0x000155fd) list_double_time_pane_vc_t3

0xc9b8,	// (0x00015615) list_double_time_pane_vc_t4_ParamLimits

0xc9b8,	// (0x00015615) list_double_time_pane_vc_t4

0x0003,

0xfa87,	// (0x000186e4) list_double_time_pane_vc_t_ParamLimits

0xfa87,	// (0x000186e4) list_double_time_pane_vc_t

0x888f,	// (0x000114ec) list_double_pane_vc_g1_ParamLimits

0x888f,	// (0x000114ec) list_double_pane_vc_g1

0x889b,	// (0x000114f8) list_double_pane_vc_g2_ParamLimits

0x889b,	// (0x000114f8) list_double_pane_vc_g2

0x0001,

0xf81a,	// (0x00018477) list_double_pane_vc_g_ParamLimits

0xf81a,	// (0x00018477) list_double_pane_vc_g

0xc9cc,	// (0x00015629) list_double_pane_vc_t1_ParamLimits

0xc9cc,	// (0x00015629) list_double_pane_vc_t1

0xc9de,	// (0x0001563b) list_double_pane_vc_t2_ParamLimits

0xc9de,	// (0x0001563b) list_double_pane_vc_t2

0x0001,

0xfa90,	// (0x000186ed) list_double_pane_vc_t_ParamLimits

0xfa90,	// (0x000186ed) list_double_pane_vc_t

0x888f,	// (0x000114ec) list_double_number_pane_vc_g1_ParamLimits

0x888f,	// (0x000114ec) list_double_number_pane_vc_g1

0x889b,	// (0x000114f8) list_double_number_pane_vc_g2_ParamLimits

0x889b,	// (0x000114f8) list_double_number_pane_vc_g2

0x0001,

0xf81a,	// (0x00018477) list_double_number_pane_vc_g_ParamLimits

0xf81a,	// (0x00018477) list_double_number_pane_vc_g

0xc9f6,	// (0x00015653) list_double_number_pane_vc_t1_ParamLimits

0xc9f6,	// (0x00015653) list_double_number_pane_vc_t1

0xca0a,	// (0x00015667) list_double_number_pane_vc_t2_ParamLimits

0xca0a,	// (0x00015667) list_double_number_pane_vc_t2

0xc9de,	// (0x0001563b) list_double_number_pane_vc_t3_ParamLimits

0xc9de,	// (0x0001563b) list_double_number_pane_vc_t3

0x0002,

0xfa95,	// (0x000186f2) list_double_number_pane_vc_t_ParamLimits

0xfa95,	// (0x000186f2) list_double_number_pane_vc_t

0xca1c,	// (0x00015679) list_double_large_graphic_pane_vc_g1_ParamLimits

0xca1c,	// (0x00015679) list_double_large_graphic_pane_vc_g1

0xca28,	// (0x00015685) list_double_large_graphic_pane_vc_g2_ParamLimits

0xca28,	// (0x00015685) list_double_large_graphic_pane_vc_g2

0x889b,	// (0x000114f8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x889b,	// (0x000114f8) list_double_large_graphic_pane_vc_g3

0xca37,	// (0x00015694) list_double_large_graphic_pane_vc_g4_ParamLimits

0xca37,	// (0x00015694) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa9c,	// (0x000186f9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa9c,	// (0x000186f9) list_double_large_graphic_pane_vc_g

0xca43,	// (0x000156a0) list_double_large_graphic_pane_vc_t1_ParamLimits

0xca43,	// (0x000156a0) list_double_large_graphic_pane_vc_t1

0xca55,	// (0x000156b2) list_double_large_graphic_pane_vc_t2_ParamLimits

0xca55,	// (0x000156b2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa5,	// (0x00018702) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa5,	// (0x00018702) list_double_large_graphic_pane_vc_t

0x888f,	// (0x000114ec) list_double_heading_pane_vc_g1_ParamLimits

0x888f,	// (0x000114ec) list_double_heading_pane_vc_g1

0x889b,	// (0x000114f8) list_double_heading_pane_vc_g2_ParamLimits

0x889b,	// (0x000114f8) list_double_heading_pane_vc_g2

0x0001,

0xf81a,	// (0x00018477) list_double_heading_pane_vc_g_ParamLimits

0xf81a,	// (0x00018477) list_double_heading_pane_vc_g

0xca6e,	// (0x000156cb) list_double_heading_pane_vc_t1_ParamLimits

0xca6e,	// (0x000156cb) list_double_heading_pane_vc_t1

0xaa59,	// (0x000136b6) list_double_heading_pane_vc_t2_ParamLimits

0xaa59,	// (0x000136b6) list_double_heading_pane_vc_t2

0x0001,

0xfaaa,	// (0x00018707) list_double_heading_pane_vc_t_ParamLimits

0xfaaa,	// (0x00018707) list_double_heading_pane_vc_t

0xa993,	// (0x000135f0) list_double_graphic_pane_vc_g1_ParamLimits

0xa993,	// (0x000135f0) list_double_graphic_pane_vc_g1

0xca82,	// (0x000156df) list_double_graphic_pane_vc_g2_ParamLimits

0xca82,	// (0x000156df) list_double_graphic_pane_vc_g2

0xca91,	// (0x000156ee) list_double_graphic_pane_vc_g3_ParamLimits

0xca91,	// (0x000156ee) list_double_graphic_pane_vc_g3

0x0002,

0xfaaf,	// (0x0001870c) list_double_graphic_pane_vc_g_ParamLimits

0xfaaf,	// (0x0001870c) list_double_graphic_pane_vc_g

0xca9d,	// (0x000156fa) list_double_graphic_pane_vc_t1_ParamLimits

0xca9d,	// (0x000156fa) list_double_graphic_pane_vc_t1

0xc9de,	// (0x0001563b) list_double_graphic_pane_vc_t2_ParamLimits

0xc9de,	// (0x0001563b) list_double_graphic_pane_vc_t2

0x0001,

0xfab6,	// (0x00018713) list_double_graphic_pane_vc_t_ParamLimits

0xfab6,	// (0x00018713) list_double_graphic_pane_vc_t

0x6275,	// (0x0000eed2) aid_size_cell_fastswap

0x627d,	// (0x0000eeda) aid_size_cell_touch_ParamLimits

0x627d,	// (0x0000eeda) aid_size_cell_touch

0x64e2,	// (0x0000f13f) popup_fast_swap_wide_window_ParamLimits

0x64e2,	// (0x0000f13f) popup_fast_swap_wide_window

0x65d8,	// (0x0000f235) touch_pane_ParamLimits

0x65d8,	// (0x0000f235) touch_pane

0x8cbb,	// (0x00011918) button_value_adjust_pane_cp2

0x8cbb,	// (0x00011918) button_value_adjust_pane_cp4

0x8cdb,	// (0x00011938) form_field_data_pane_cp2

0x8cfa,	// (0x00011957) form_field_data_wide_pane_cp2

0x9383,	// (0x00011fe0) bg_scroll_pane_ParamLimits

0x6864,	// (0x0000f4c1) scroll_handle_pane_ParamLimits

0x6878,	// (0x0000f4d5) scroll_sc2_down_pane_ParamLimits

0x6878,	// (0x0000f4d5) scroll_sc2_down_pane

0x93b4,	// (0x00012011) scroll_sc2_up_pane_ParamLimits

0x93b4,	// (0x00012011) scroll_sc2_up_pane

0xceb8,	// (0x00015b15) grid_wheel_folder_pane_g1_ParamLimits

0xceb8,	// (0x00015b15) grid_wheel_folder_pane_g1

0x6a3d,	// (0x0000f69a) clock_nsta_pane_cp2_ParamLimits

0x6a3d,	// (0x0000f69a) clock_nsta_pane_cp2

0x9be1,	// (0x0001283e) listscroll_midp_pane_ParamLimits

0x9bed,	// (0x0001284a) midp_canvas_pane

0x9ed3,	// (0x00012b30) nsta_clock_indic_pane

0x9f31,	// (0x00012b8e) listscroll_form_pane_vc

0x9f4d,	// (0x00012baa) listscroll_set_pane_vc_ParamLimits

0x9f4d,	// (0x00012baa) listscroll_set_pane_vc

0xa5e1,	// (0x0001323e) clock_nsta_pane

0xa656,	// (0x000132b3) indicator_nsta_pane

0xa92d,	// (0x0001358a) bg_popup_sub_pane_cp2_ParamLimits

0xa941,	// (0x0001359e) find_pane_cp2_ParamLimits

0xa941,	// (0x0001359e) find_pane_cp2

0xa957,	// (0x000135b4) grid_toobar_pane_ParamLimits

0xaaff,	// (0x0001375c) list_form_gen_pane_vc_ParamLimits

0xaaff,	// (0x0001375c) list_form_gen_pane_vc

0xab15,	// (0x00013772) scroll_pane_cp8_vc_ParamLimits

0xab15,	// (0x00013772) scroll_pane_cp8_vc

0xab91,	// (0x000137ee) data_form_wide_pane_vc_ParamLimits

0xab91,	// (0x000137ee) data_form_wide_pane_vc

0xab9d,	// (0x000137fa) form_field_data_wide_pane_vc_g1

0xaba5,	// (0x00013802) form_field_data_wide_pane_vc_t1_ParamLimits

0xaba5,	// (0x00013802) form_field_data_wide_pane_vc_t1

0x8d93,	// (0x000119f0) input_focus_pane_cp6_vc_ParamLimits

0x8d93,	// (0x000119f0) input_focus_pane_cp6_vc

0xaf0e,	// (0x00013b6b) list_midp_pane_ParamLimits

0xaf1a,	// (0x00013b77) scroll_pane_cp16_ParamLimits

0xaf1a,	// (0x00013b77) scroll_pane_cp16

0xaf5a,	// (0x00013bb7) button_value_adjust_pane_ParamLimits

0xaf5a,	// (0x00013bb7) button_value_adjust_pane

0xbede,	// (0x00014b3b) button_value_adjust_pane_cp6_ParamLimits

0xbede,	// (0x00014b3b) button_value_adjust_pane_cp6

0xc000,	// (0x00014c5d) settings_code_pane_cp_ParamLimits

0xc000,	// (0x00014c5d) settings_code_pane_cp

0x7ed0,	// (0x00010b2d) cell_touch_pane_g1

0x7ed0,	// (0x00010b2d) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0001839f) cell_touch_pane_g

0xc68d,	// (0x000152ea) cell_touch_pane_cp_ParamLimits

0xc68d,	// (0x000152ea) cell_touch_pane_cp

0xc69d,	// (0x000152fa) cell_touch_pane_ParamLimits

0xc69d,	// (0x000152fa) cell_touch_pane

0x7ed0,	// (0x00010b2d) scroll_sc2_down_pane_g1

0x7ed0,	// (0x00010b2d) scroll_sc2_up_pane_g1

0x7eda,	// (0x00010b37) bg_set_opt_pane_cp4_vc

0xc6c3,	// (0x00015320) list_set_graphic_pane_vc_g1_ParamLimits

0xc6c3,	// (0x00015320) list_set_graphic_pane_vc_g1

0xc6cf,	// (0x0001532c) list_set_graphic_pane_vc_g2_ParamLimits

0xc6cf,	// (0x0001532c) list_set_graphic_pane_vc_g2

0x0001,

0xfa2c,	// (0x00018689) list_set_graphic_pane_vc_g_ParamLimits

0xfa2c,	// (0x00018689) list_set_graphic_pane_vc_g

0xc6db,	// (0x00015338) text_primary_small_cp13_vc_ParamLimits

0xc6db,	// (0x00015338) text_primary_small_cp13_vc

0xc6f3,	// (0x00015350) list_set_graphic_pane_vc_ParamLimits

0xc6f3,	// (0x00015350) list_set_graphic_pane_vc

0x7eda,	// (0x00010b37) input_focus_pane_cp2_vc

0x7ed0,	// (0x00010b2d) setting_code_pane_vc_g1

0xc707,	// (0x00015364) setting_code_pane_vc_t1

0xc715,	// (0x00015372) set_text_pane_vc_t1_ParamLimits

0xc715,	// (0x00015372) set_text_pane_vc_t1

0x7eda,	// (0x00010b37) input_focus_pane_cp1_vc

0xc734,	// (0x00015391) list_set_text_pane_vc

0x7ed0,	// (0x00010b2d) setting_text_pane_vc_g1

0x7eda,	// (0x00010b37) bg_set_opt_pane_cp2_vc

0xc73e,	// (0x0001539b) setting_slider_graphic_pane_vc_g1

0xc746,	// (0x000153a3) setting_slider_graphic_pane_vc_t1

0xc754,	// (0x000153b1) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa31,	// (0x0001868e) setting_slider_graphic_pane_vc_t

0xc762,	// (0x000153bf) slider_set_pane_cp_vc

0xc76a,	// (0x000153c7) slider_set_pane_vc_g1

0xc773,	// (0x000153d0) slider_set_pane_vc_g2

0x0006,

0xfa36,	// (0x00018693) slider_set_pane_vc_g

0x8ecf,	// (0x00011b2c) set_opt_bg_pane_g1_copy1

0x8ed7,	// (0x00011b34) set_opt_bg_pane_g2_copy1

0xc79f,	// (0x000153fc) set_opt_bg_pane_g3_copy1

0x8ee7,	// (0x00011b44) set_opt_bg_pane_g4_copy1

0x8eef,	// (0x00011b4c) set_opt_bg_pane_g5_copy1

0x8ef7,	// (0x00011b54) set_opt_bg_pane_g6_copy1

0xc7a7,	// (0x00015404) set_opt_bg_pane_g7_copy1

0xc7b1,	// (0x0001540e) set_opt_bg_pane_g8_copy1

0xc7b9,	// (0x00015416) set_opt_bg_pane_g9_copy1

0x7eda,	// (0x00010b37) bg_set_opt_pane_cp_vc

0xc7c1,	// (0x0001541e) setting_slider_pane_vc_t1

0xc746,	// (0x000153a3) setting_slider_pane_vc_t2

0xc754,	// (0x000153b1) setting_slider_pane_vc_t3

0x0002,

0xfa45,	// (0x000186a2) setting_slider_pane_vc_t

0xc762,	// (0x000153bf) slider_set_pane_vc

0x6e46,	// (0x0000faa3) volume_set_pane_vc_g1

0x7141,	// (0x0000fd9e) volume_set_pane_vc_g2

0x714a,	// (0x0000fda7) volume_set_pane_vc_g3

0x7153,	// (0x0000fdb0) volume_set_pane_vc_g4

0x715c,	// (0x0000fdb9) volume_set_pane_vc_g5

0x7165,	// (0x0000fdc2) volume_set_pane_vc_g6

0x716e,	// (0x0000fdcb) volume_set_pane_vc_g7

0x7177,	// (0x0000fdd4) volume_set_pane_vc_g8

0x7180,	// (0x0000fddd) volume_set_pane_vc_g9

0x7189,	// (0x0000fde6) volume_set_pane_vc_g10

0x0009,

0xfa4c,	// (0x000186a9) volume_set_pane_vc_g

0xc7d0,	// (0x0001542d) volume_set_pane_vc

0xc7d8,	// (0x00015435) button_value_adjust_pane_cp1_vc

0xc7e2,	// (0x0001543f) list_highlight_pane_cp2_vc

0xc7eb,	// (0x00015448) list_set_pane_vc_ParamLimits

0xc7eb,	// (0x00015448) list_set_pane_vc

0xc83d,	// (0x0001549a) main_pane_set_vc_t1_ParamLimits

0xc83d,	// (0x0001549a) main_pane_set_vc_t1

0xc852,	// (0x000154af) main_pane_set_vc_t2_ParamLimits

0xc852,	// (0x000154af) main_pane_set_vc_t2

0xc864,	// (0x000154c1) main_pane_set_vc_t3_ParamLimits

0xc864,	// (0x000154c1) main_pane_set_vc_t3

0xc876,	// (0x000154d3) main_pane_set_vc_t4_ParamLimits

0xc876,	// (0x000154d3) main_pane_set_vc_t4

0x0003,

0xfa61,	// (0x000186be) main_pane_set_vc_t_ParamLimits

0xfa61,	// (0x000186be) main_pane_set_vc_t

0xc888,	// (0x000154e5) setting_code_pane_vc_ParamLimits

0xc888,	// (0x000154e5) setting_code_pane_vc

0xc897,	// (0x000154f4) setting_slider_graphic_pane_vc

0xc897,	// (0x000154f4) setting_slider_pane_vc

0xc897,	// (0x000154f4) setting_text_pane_vc

0xc897,	// (0x000154f4) setting_volume_pane_vc

0xc89f,	// (0x000154fc) scroll_pane_cp121_vc

0x8ca9,	// (0x00011906) set_content_pane_vc

0xcaaf,	// (0x0001570c) button_value_adjust_pane_g1

0xcab8,	// (0x00015715) button_value_adjust_pane_g2

0x0001,

0xfabb,	// (0x00018718) button_value_adjust_pane_g

0xcac1,	// (0x0001571e) form_field_slider_wide_pane_vc_t1_ParamLimits

0xcac1,	// (0x0001571e) form_field_slider_wide_pane_vc_t1

0xcad5,	// (0x00015732) form_field_slider_wide_pane_vc_t2_ParamLimits

0xcad5,	// (0x00015732) form_field_slider_wide_pane_vc_t2

0x0001,

0xfac0,	// (0x0001871d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfac0,	// (0x0001871d) form_field_slider_wide_pane_vc_t

0x824f,	// (0x00010eac) input_focus_pane_cp10_vc_ParamLimits

0x824f,	// (0x00010eac) input_focus_pane_cp10_vc

0xcae7,	// (0x00015744) slider_cont_pane_cp1_vc_ParamLimits

0xcae7,	// (0x00015744) slider_cont_pane_cp1_vc

0xc76a,	// (0x000153c7) slider_form_pane_g1_cp2

0xc773,	// (0x000153d0) slider_form_pane_g2_cp2

0xcb00,	// (0x0001575d) form_field_slider_pane_vc_t3

0xcb0e,	// (0x0001576b) form_field_slider_pane_vc_t4

0xcb1c,	// (0x00015779) slider_form_pane_vc_ParamLimits

0xcb1c,	// (0x00015779) slider_form_pane_vc

0xcb29,	// (0x00015786) form_field_slider_pane_vc_t1_ParamLimits

0xcb29,	// (0x00015786) form_field_slider_pane_vc_t1

0xcad5,	// (0x00015732) form_field_slider_pane_vc_t2_ParamLimits

0xcad5,	// (0x00015732) form_field_slider_pane_vc_t2

0x0001,

0xfad0,	// (0x0001872d) form_field_slider_pane_vc_t_ParamLimits

0xfad0,	// (0x0001872d) form_field_slider_pane_vc_t

0x824f,	// (0x00010eac) input_focus_pane_cp9_vc_ParamLimits

0x824f,	// (0x00010eac) input_focus_pane_cp9_vc

0xcb45,	// (0x000157a2) slider_cont_pane_vc_ParamLimits

0xcb45,	// (0x000157a2) slider_cont_pane_vc

0xcb57,	// (0x000157b4) list_form_graphic_pane_cp_vc_ParamLimits

0xcb57,	// (0x000157b4) list_form_graphic_pane_cp_vc

0xab9d,	// (0x000137fa) form_field_popup_wide_pane_vc_g1

0xcb6c,	// (0x000157c9) form_field_popup_wide_pane_vc_t1_ParamLimits

0xcb6c,	// (0x000157c9) form_field_popup_wide_pane_vc_t1

0x8d93,	// (0x000119f0) input_focus_pane_cp8_vc_ParamLimits

0x8d93,	// (0x000119f0) input_focus_pane_cp8_vc

0xcb83,	// (0x000157e0) list_form_wide_pane_vc_ParamLimits

0xcb83,	// (0x000157e0) list_form_wide_pane_vc

0xcb8f,	// (0x000157ec) list_form_graphic_pane_vc_g1

0xcb97,	// (0x000157f4) list_form_graphic_pane_vc_t1_ParamLimits

0xcb97,	// (0x000157f4) list_form_graphic_pane_vc_t1

0x7fba,	// (0x00010c17) list_highlight_pane_cp5_vc_ParamLimits

0x7fba,	// (0x00010c17) list_highlight_pane_cp5_vc

0xcbb3,	// (0x00015810) list_form_graphic_pane_vc_ParamLimits

0xcbb3,	// (0x00015810) list_form_graphic_pane_vc

0xab9d,	// (0x000137fa) form_field_popup_pane_vc_g1

0xcbc9,	// (0x00015826) form_field_popup_pane_vc_t1_ParamLimits

0xcbc9,	// (0x00015826) form_field_popup_pane_vc_t1

0x8d93,	// (0x000119f0) input_focus_pane_cp7_vc_ParamLimits

0x8d93,	// (0x000119f0) input_focus_pane_cp7_vc

0xcbe0,	// (0x0001583d) list_form_pane_vc_ParamLimits

0xcbe0,	// (0x0001583d) list_form_pane_vc

0xcbec,	// (0x00015849) data_form_pane_vc_t1_ParamLimits

0xcbec,	// (0x00015849) data_form_pane_vc_t1

0x8ecf,	// (0x00011b2c) input_focus_pane_vc_g1

0x8ed7,	// (0x00011b34) input_focus_pane_vc_g2

0x8edf,	// (0x00011b3c) input_focus_pane_vc_g3

0x8ee7,	// (0x00011b44) input_focus_pane_vc_g4

0x8eef,	// (0x00011b4c) input_focus_pane_vc_g5

0x8ef7,	// (0x00011b54) input_focus_pane_vc_g6

0x8eff,	// (0x00011b5c) input_focus_pane_vc_g7

0x8f07,	// (0x00011b64) input_focus_pane_vc_g8

0x8f0f,	// (0x00011b6c) input_focus_pane_vc_g9

0x7ed0,	// (0x00010b2d) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x00018328) input_focus_pane_vc_g

0xab91,	// (0x000137ee) data_form_pane_vc_ParamLimits

0xab91,	// (0x000137ee) data_form_pane_vc

0xab9d,	// (0x000137fa) form_field_data_pane_vc_g1

0xcc07,	// (0x00015864) form_field_data_pane_vc_t1_ParamLimits

0xcc07,	// (0x00015864) form_field_data_pane_vc_t1

0x8d93,	// (0x000119f0) input_focus_pane_vc_ParamLimits

0x8d93,	// (0x000119f0) input_focus_pane_vc

0xcc21,	// (0x0001587e) button_value_adjust_pane_cp3_vc

0xcc29,	// (0x00015886) button_value_adjust_pane_cp5_vc

0xcc31,	// (0x0001588e) form_field_data_pane_vc_ParamLimits

0xcc31,	// (0x0001588e) form_field_data_pane_vc

0xcc48,	// (0x000158a5) form_field_data_pane_vc_cp2

0xcc50,	// (0x000158ad) form_field_data_wide_pane_vc_ParamLimits

0xcc50,	// (0x000158ad) form_field_data_wide_pane_vc

0xcc66,	// (0x000158c3) form_field_data_wide_pane_vc_cp2

0xcc6e,	// (0x000158cb) form_field_popup_pane_vc_ParamLimits

0xcc6e,	// (0x000158cb) form_field_popup_pane_vc

0xcc85,	// (0x000158e2) form_field_popup_wide_pane_vc_ParamLimits

0xcc85,	// (0x000158e2) form_field_popup_wide_pane_vc

0xcc9b,	// (0x000158f8) form_field_slider_pane_vc_ParamLimits

0xcc9b,	// (0x000158f8) form_field_slider_pane_vc

0xccae,	// (0x0001590b) form_field_slider_wide_pane_vc_ParamLimits

0xccae,	// (0x0001590b) form_field_slider_wide_pane_vc

0xccc1,	// (0x0001591e) grid_touch_1_pane_ParamLimits

0xccc1,	// (0x0001591e) grid_touch_1_pane

0xcccd,	// (0x0001592a) grid_touch_2_pane_ParamLimits

0xcccd,	// (0x0001592a) grid_touch_2_pane

0x9e9e,	// (0x00012afb) touch_pane_g1_ParamLimits

0x9e9e,	// (0x00012afb) touch_pane_g1

0xcce5,	// (0x00015942) cell_app_pane_cp_wide_ParamLimits

0xcce5,	// (0x00015942) cell_app_pane_cp_wide

0xccf6,	// (0x00015953) grid_popup_fast_wide_pane_ParamLimits

0xccf6,	// (0x00015953) grid_popup_fast_wide_pane

0xcd0a,	// (0x00015967) scroll_pane_cp19_ParamLimits

0xcd0a,	// (0x00015967) scroll_pane_cp19

0x7eda,	// (0x00010b37) bg_popup_window_pane_cp20

0xcd1e,	// (0x0001597b) listscroll_popup_fast_wide_pane

0x7fba,	// (0x00010c17) grid_indicator_nsta_pane

0xcd26,	// (0x00015983) clock_nsta_pane_g1

0xcd2f,	// (0x0001598c) clock_nsta_pane_t1

0xcd4b,	// (0x000159a8) cell_indicator_nsta_pane_ParamLimits

0xcd4b,	// (0x000159a8) cell_indicator_nsta_pane

0xcd83,	// (0x000159e0) cell_indicator_nsta_pane_g1

0xcd91,	// (0x000159ee) cell_indicator_nsta_pane_g2

0x0001,

0xfada,	// (0x00018737) cell_indicator_nsta_pane_g

0xcda7,	// (0x00015a04) clock_nsta_pane_cp

0xcdaf,	// (0x00015a0c) indicator_nsta_pane_cp

0xcdb7,	// (0x00015a14) nsta_clock_indic_pane_g1

0x809d,	// (0x00010cfa) grid_indicator_pane

0x94a6,	// (0x00012103) scroll_pane_cp29

0x698c,	// (0x0000f5e9) indicator_nsta_pane_cp2_ParamLimits

0x698c,	// (0x0000f5e9) indicator_nsta_pane_cp2

0x7fba,	// (0x00010c17) main_apps_wheel_pane

0xadf5,	// (0x00013a52) form_midp_field_text_pane_ParamLimits

0xaf3a,	// (0x00013b97) scroll_bar_cp050_ParamLimits

0xcdef,	// (0x00015a4c) cell_indicator_pane_ParamLimits

0xcdef,	// (0x00015a4c) cell_indicator_pane

0xce0c,	// (0x00015a69) cell_indicator_pane_g1

0xce16,	// (0x00015a73) grid_wheel_folder_pane_ParamLimits

0xce16,	// (0x00015a73) grid_wheel_folder_pane

0xce2c,	// (0x00015a89) list_wheel_apps_pane_ParamLimits

0xce2c,	// (0x00015a89) list_wheel_apps_pane

0xce3d,	// (0x00015a9a) main_apps_wheel_pane_g1_ParamLimits

0xce3d,	// (0x00015a9a) main_apps_wheel_pane_g1

0xce51,	// (0x00015aae) main_apps_wheel_pane_g2_ParamLimits

0xce51,	// (0x00015aae) main_apps_wheel_pane_g2

0x0001,

0xfae9,	// (0x00018746) main_apps_wheel_pane_g_ParamLimits

0xfae9,	// (0x00018746) main_apps_wheel_pane_g

0xce69,	// (0x00015ac6) main_apps_wheel_pane_t1_ParamLimits

0xce69,	// (0x00015ac6) main_apps_wheel_pane_t1

0xce8c,	// (0x00015ae9) list_wheel_apps_pane_g1

0xce94,	// (0x00015af1) list_wheel_apps_pane_g2

0xce9c,	// (0x00015af9) list_wheel_apps_pane_g3

0xcea4,	// (0x00015b01) list_wheel_apps_pane_g4

0xceae,	// (0x00015b0b) list_wheel_apps_pane_g5

0x0004,

0xfaee,	// (0x0001874b) list_wheel_apps_pane_g

0x9a57,	// (0x000126b4) navi_icon_text_pane

0xa510,	// (0x0001316d) aid_fill_nsta

0xced1,	// (0x00015b2e) navi_icon_text_pane_g1

0xcee0,	// (0x00015b3d) navi_icon_text_pane_t1

0x98f3,	// (0x00012550) list_set_graphic_pane_t1_ParamLimits

0x98f3,	// (0x00012550) list_set_graphic_pane_t1

0xb64b,	// (0x000142a8) popup_midp_note_alarm_window_t6_ParamLimits

0xb64b,	// (0x000142a8) popup_midp_note_alarm_window_t6

0xb65d,	// (0x000142ba) popup_midp_note_alarm_window_t7_ParamLimits

0xb65d,	// (0x000142ba) popup_midp_note_alarm_window_t7

0xb66f,	// (0x000142cc) popup_midp_note_alarm_window_t8_ParamLimits

0xb66f,	// (0x000142cc) popup_midp_note_alarm_window_t8

0xb681,	// (0x000142de) popup_midp_note_alarm_window_t9_ParamLimits

0xb681,	// (0x000142de) popup_midp_note_alarm_window_t9

0xb693,	// (0x000142f0) popup_midp_note_alarm_window_t10_ParamLimits

0xb693,	// (0x000142f0) popup_midp_note_alarm_window_t10

0xb6a5,	// (0x00014302) popup_midp_note_alarm_window_t11_ParamLimits

0xb6a5,	// (0x00014302) popup_midp_note_alarm_window_t11

0xb6b7,	// (0x00014314) scroll_pane_cp17_ParamLimits

0xb6b7,	// (0x00014314) scroll_pane_cp17

0x6e46,	// (0x0000faa3) volume_small_pane_cp_g1

0x7192,	// (0x0000fdef) volume_small_pane_cp_g2

0x719b,	// (0x0000fdf8) volume_small_pane_cp_g3

0x71a4,	// (0x0000fe01) volume_small_pane_cp_g4

0x71ad,	// (0x0000fe0a) volume_small_pane_cp_g5

0x71b6,	// (0x0000fe13) volume_small_pane_cp_g6

0x71bf,	// (0x0000fe1c) volume_small_pane_cp_g7

0x71c8,	// (0x0000fe25) volume_small_pane_cp_g8

0x71d1,	// (0x0000fe2e) volume_small_pane_cp_g9

0x71da,	// (0x0000fe37) volume_small_pane_cp_g10

0x9cb8,	// (0x00012915) midp_ticker_pane_g1_ParamLimits

0x9cc4,	// (0x00012921) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x000183f0) midp_ticker_pane_g_ParamLimits

0x9cd0,	// (0x0001292d) midp_ticker_pane_t1_ParamLimits

0xa526,	// (0x00013183) aid_fill_nsta_2

0xaf26,	// (0x00013b83) list_form2_midp_pane

0xc07e,	// (0x00014cdb) midp_editing_number_pane_ParamLimits

0xc08d,	// (0x00014cea) midp_ticker_pane_ParamLimits

0xcef5,	// (0x00015b52) form2_midp_field_pane

0xcf19,	// (0x00015b76) scroll_pane_cp51

0xcf39,	// (0x00015b96) form2_midp_button_pane_ParamLimits

0xcf39,	// (0x00015b96) form2_midp_button_pane

0xcf4b,	// (0x00015ba8) form2_midp_content_pane_ParamLimits

0xcf4b,	// (0x00015ba8) form2_midp_content_pane

0xcf65,	// (0x00015bc2) form2_midp_field_choice_group_pane

0xcf6d,	// (0x00015bca) form2_midp_field_pane_g1

0xcf75,	// (0x00015bd2) form2_midp_field_pane_g2

0xcf7d,	// (0x00015bda) form2_midp_field_pane_g3

0xcf85,	// (0x00015be2) form2_midp_field_pane_g4

0x0003,

0xfb13,	// (0x00018770) form2_midp_field_pane_g

0xcf8d,	// (0x00015bea) form2_midp_gauge_slider_pane

0xcf95,	// (0x00015bf2) form2_midp_gauge_wait_pane

0xcf9d,	// (0x00015bfa) form2_midp_image_pane_ParamLimits

0xcf9d,	// (0x00015bfa) form2_midp_image_pane

0xcfb8,	// (0x00015c15) form2_midp_label_pane_ParamLimits

0xcfb8,	// (0x00015c15) form2_midp_label_pane

0xcfd1,	// (0x00015c2e) form2_midp_label_pane_cp_ParamLimits

0xcfd1,	// (0x00015c2e) form2_midp_label_pane_cp

0xcff2,	// (0x00015c4f) form2_midp_string_pane_ParamLimits

0xcff2,	// (0x00015c4f) form2_midp_string_pane

0xd004,	// (0x00015c61) form2_midp_text_pane_ParamLimits

0xd004,	// (0x00015c61) form2_midp_text_pane

0xd01d,	// (0x00015c7a) form2_midp_time_pane

0xd02d,	// (0x00015c8a) input_focus_pane_cp51_ParamLimits

0xd02d,	// (0x00015c8a) input_focus_pane_cp51

0xd045,	// (0x00015ca2) form2_midp_label_pane_t1_ParamLimits

0xd045,	// (0x00015ca2) form2_midp_label_pane_t1

0xd085,	// (0x00015ce2) form2_mdip_text_pane_t1_ParamLimits

0xd085,	// (0x00015ce2) form2_mdip_text_pane_t1

0xd0a1,	// (0x00015cfe) form2_midp_time_pane_t1

0xd0bc,	// (0x00015d19) form2_midp_gauge_slider_pane_t1

0xd0ce,	// (0x00015d2b) form2_midp_gauge_slider_pane_t2

0xd0e0,	// (0x00015d3d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1c,	// (0x00018779) form2_midp_gauge_slider_pane_t

0xd0f2,	// (0x00015d4f) form2_midp_slider_pane

0xd0fe,	// (0x00015d5b) form2_midp_gauge_wait_pane_t1

0xd10c,	// (0x00015d69) form2_midp_wait_pane_ParamLimits

0xd10c,	// (0x00015d69) form2_midp_wait_pane

0xd137,	// (0x00015d94) list_single_2graphic_pane_cp4_ParamLimits

0xd137,	// (0x00015d94) list_single_2graphic_pane_cp4

0xabe8,	// (0x00013845) list_single_midp_graphic_pane_cp_ParamLimits

0xabe8,	// (0x00013845) list_single_midp_graphic_pane_cp

0x7eda,	// (0x00010b37) list_highlight_pane_cp20

0xd166,	// (0x00015dc3) list_single_2graphic_pane_g1_cp4

0xc592,	// (0x000151ef) list_single_2graphic_pane_g2_cp4

0xd16e,	// (0x00015dcb) list_single_2graphic_pane_t1_cp4

0x7fba,	// (0x00010c17) list_highlight_pane_cp21

0xd17d,	// (0x00015dda) list_single_midp_graphic_pane_g4_cp

0xd18c,	// (0x00015de9) list_single_midp_graphic_pane_t1_cp

0xd1a1,	// (0x00015dfe) form2_mdip_string_pane_t1_ParamLimits

0xd1a1,	// (0x00015dfe) form2_mdip_string_pane_t1

0x7eda,	// (0x00010b37) bg_wml_button_pane_cp2

0x7ed0,	// (0x00010b2d) form2_midp_image_pane_g1

0x8a6d,	// (0x000116ca) list_double_large_graphic_pane_g5_ParamLimits

0x8a6d,	// (0x000116ca) list_double_large_graphic_pane_g5

0x9be1,	// (0x0001283e) midp_form_pane_ParamLimits

0x7fba,	// (0x00010c17) main_apps_wheel_pane_ParamLimits

0xa304,	// (0x00012f61) popup_preview_window_ParamLimits

0xa304,	// (0x00012f61) popup_preview_window

0xa4b5,	// (0x00013112) popup_touch_info_window_ParamLimits

0xa4b5,	// (0x00013112) popup_touch_info_window

0xa4d3,	// (0x00013130) popup_touch_menu_window_ParamLimits

0xa4d3,	// (0x00013130) popup_touch_menu_window

0x7ec6,	// (0x00010b23) bg_popup_sub_pane_cp6

0xd2db,	// (0x00015f38) list_touch_menu_pane

0xd2e3,	// (0x00015f40) list_single_touch_menu_pane_ParamLimits

0xd2e3,	// (0x00015f40) list_single_touch_menu_pane

0xd2f8,	// (0x00015f55) list_single_touch_menu_pane_t1

0x7fba,	// (0x00010c17) bg_popup_sub_pane_cp7_ParamLimits

0x7fba,	// (0x00010c17) bg_popup_sub_pane_cp7

0xd306,	// (0x00015f63) heading_sub_pane

0xd30e,	// (0x00015f6b) list_touch_info_pane_ParamLimits

0xd30e,	// (0x00015f6b) list_touch_info_pane

0xd31d,	// (0x00015f7a) list_single_touch_info_pane_ParamLimits

0xd31d,	// (0x00015f7a) list_single_touch_info_pane

0xd32f,	// (0x00015f8c) list_single_touch_info_pane_t1

0xd33d,	// (0x00015f9a) list_single_touch_info_pane_t2

0x0001,

0xfb2a,	// (0x00018787) list_single_touch_info_pane_t

0x9bd9,	// (0x00012836) bg_popup_heading_pane_cp

0xd34b,	// (0x00015fa8) heading_sub_pane_t1

0xab2b,	// (0x00013788) bg_popup_preview_window_pane_cp_ParamLimits

0xab2b,	// (0x00013788) bg_popup_preview_window_pane_cp

0xd306,	// (0x00015f63) heading_preview_pane

0xd30e,	// (0x00015f6b) list_preview_pane_ParamLimits

0xd30e,	// (0x00015f6b) list_preview_pane

0xd359,	// (0x00015fb6) popup_preview_window_g1

0xd31d,	// (0x00015f7a) list_single_preview_pane_ParamLimits

0xd31d,	// (0x00015f7a) list_single_preview_pane

0xd361,	// (0x00015fbe) list_single_preview_pane_g1

0xd369,	// (0x00015fc6) list_single_preview_pane_t1

0xd32f,	// (0x00015f8c) list_single_preview_pane_t2

0x0001,

0xfb2f,	// (0x0001878c) list_single_preview_pane_t

0xd377,	// (0x00015fd4) bg_popup_heading_pane_cp2_ParamLimits

0xd377,	// (0x00015fd4) bg_popup_heading_pane_cp2

0xd38d,	// (0x00015fea) heading_preview_pane_g1

0xd395,	// (0x00015ff2) heading_preview_pane_t1_ParamLimits

0xd395,	// (0x00015ff2) heading_preview_pane_t1

0x80c0,	// (0x00010d1d) soft_indicator_pane_t1_ParamLimits

0x879a,	// (0x000113f7) scroll_pane_ParamLimits

0x93a2,	// (0x00011fff) scroll_sc2_left_pane

0x93ab,	// (0x00012008) scroll_sc2_right_pane

0x93ca,	// (0x00012027) scroll_bg_pane_g1_ParamLimits

0x93df,	// (0x0001203c) scroll_bg_pane_g2_ParamLimits

0x93f7,	// (0x00012054) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0001837f) scroll_bg_pane_g_ParamLimits

0x93ca,	// (0x00012027) scroll_handle_pane_g1_ParamLimits

0x9419,	// (0x00012076) scroll_handle_pane_g2_ParamLimits

0x93f7,	// (0x00012054) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x00018386) scroll_handle_pane_g_ParamLimits

0x9f8f,	// (0x00012bec) popup_choice_list_window_ParamLimits

0x9f8f,	// (0x00012bec) popup_choice_list_window

0xa939,	// (0x00013596) choice_list_pane

0xa9dd,	// (0x0001363a) cell_toolbar_pane_t1

0xaa05,	// (0x00013662) toolbar_button_pane_ParamLimits

0xbb7b,	// (0x000147d8) ai_gene_pane_1_t2_ParamLimits

0xbb7b,	// (0x000147d8) ai_gene_pane_1_t2

0x0001,

0xf946,	// (0x000185a3) ai_gene_pane_1_t_ParamLimits

0xf946,	// (0x000185a3) ai_gene_pane_1_t

0xd3b2,	// (0x0001600f) scroll_sc2_left_pane_g1

0xd3b2,	// (0x0001600f) scroll_sc2_right_pane_g1

0x9f5f,	// (0x00012bbc) bg_popup_sub_pane_cp10

0xd3bc,	// (0x00016019) list_choice_list_pane

0xd3d3,	// (0x00016030) list_single_choice_list_pane_ParamLimits

0xd3d3,	// (0x00016030) list_single_choice_list_pane

0xd3e7,	// (0x00016044) list_single_choice_list_pane_g1

0xd3ef,	// (0x0001604c) list_single_choice_list_pane_t1_ParamLimits

0xd3ef,	// (0x0001604c) list_single_choice_list_pane_t1

0xd404,	// (0x00016061) choice_list_pane_g1

0xd40c,	// (0x00016069) choice_list_pane_t1

0x7ec6,	// (0x00010b23) input_focus_pane_cp11

0x9280,	// (0x00011edd) title_pane_stacon_g2_ParamLimits

0x9280,	// (0x00011edd) title_pane_stacon_g2

0x0002,

0xf708,	// (0x00018365) title_pane_stacon_g_ParamLimits

0xf708,	// (0x00018365) title_pane_stacon_g

0x9bd9,	// (0x00012836) cursor_press_pane

0xa035,	// (0x00012c92) popup_fep_hwr_window_ParamLimits

0xa035,	// (0x00012c92) popup_fep_hwr_window

0xa0ad,	// (0x00012d0a) popup_fep_vkb_window_ParamLimits

0xa0ad,	// (0x00012d0a) popup_fep_vkb_window

0xd41a,	// (0x00016077) cursor_press_pane_g1

0x0002,

0xfb58,	// (0x000187b5) fep_vkb_side_pane_g_ParamLimits

0x721c,	// (0x0000fe79) fep_hwr_candidate_pane_ParamLimits

0x721c,	// (0x0000fe79) fep_hwr_candidate_pane

0x7246,	// (0x0000fea3) fep_hwr_side_pane_ParamLimits

0x7246,	// (0x0000fea3) fep_hwr_side_pane

0x7266,	// (0x0000fec3) fep_hwr_top_pane_ParamLimits

0x7266,	// (0x0000fec3) fep_hwr_top_pane

0x727e,	// (0x0000fedb) fep_hwr_write_pane_ParamLimits

0x727e,	// (0x0000fedb) fep_hwr_write_pane

0xfb58,	// (0x000187b5) fep_vkb_side_pane_g

0xd422,	// (0x0001607f) fep_hwr_top_pane_g1

0xd434,	// (0x00016091) fep_hwr_top_pane_g2

0x72b8,	// (0x0000ff15) fep_hwr_top_pane_g3

0x0002,

0xfb34,	// (0x00018791) fep_hwr_top_pane_g

0x72cd,	// (0x0000ff2a) fep_hwr_top_text_pane

0x956c,	// (0x000121c9) fep_hwr_top_text_pane_g1

0xd478,	// (0x000160d5) fep_hwr_top_text_pane_t1

0x73c3,	// (0x00010020) fep_hwr_candidate_pane_g1

0xd6d2,	// (0x0001632f) fep_vkb_keypad_pane_g3_ParamLimits

0xd6d2,	// (0x0001632f) fep_vkb_keypad_pane_g3

0xd6fa,	// (0x00016357) fep_vkb_keypad_pane_g4_ParamLimits

0xd6fa,	// (0x00016357) fep_vkb_keypad_pane_g4

0xd769,	// (0x000163c6) fep_vkb_bottom_pane_g2_ParamLimits

0xd769,	// (0x000163c6) fep_vkb_bottom_pane_g2

0x0001,

0xfb5f,	// (0x000187bc) fep_vkb_bottom_pane_g_ParamLimits

0xfb5f,	// (0x000187bc) fep_vkb_bottom_pane_g

0xd3b2,	// (0x0001600f) cell_vkb_side_pane_g2

0x0001,

0xfb69,	// (0x000187c6) cell_vkb_side_pane_g

0xd7f4,	// (0x00016451) cell_vkb_side_pane_t1

0xd802,	// (0x0001645f) cell_vkb_side_pane_t1_copy1

0xd3b2,	// (0x0001600f) bg_fep_vkb_candidate_pane_g2

0xd934,	// (0x00016591) cell_vkb_candidate_pane_ParamLimits

0xd486,	// (0x000160e3) aid_size_cell_vkb_ParamLimits

0xd486,	// (0x000160e3) aid_size_cell_vkb

0xd934,	// (0x00016591) cell_vkb_candidate_pane

0x73ea,	// (0x00010047) bg_popup_fep_shadow_pane_g1

0xd514,	// (0x00016171) fep_vkb_bottom_pane_ParamLimits

0xd514,	// (0x00016171) fep_vkb_bottom_pane

0xd551,	// (0x000161ae) fep_vkb_candidate_pane_ParamLimits

0xd551,	// (0x000161ae) fep_vkb_candidate_pane

0xd56d,	// (0x000161ca) fep_vkb_keypad_pane_ParamLimits

0xd56d,	// (0x000161ca) fep_vkb_keypad_pane

0xd5b3,	// (0x00016210) fep_vkb_side_pane_ParamLimits

0xd5b3,	// (0x00016210) fep_vkb_side_pane

0xd5ef,	// (0x0001624c) fep_vkb_top_pane_ParamLimits

0xd5ef,	// (0x0001624c) fep_vkb_top_pane

0xd62b,	// (0x00016288) fep_vkb_top_pane_g1_ParamLimits

0xd62b,	// (0x00016288) fep_vkb_top_pane_g1

0xd63a,	// (0x00016297) fep_vkb_top_pane_g2_ParamLimits

0xd63a,	// (0x00016297) fep_vkb_top_pane_g2

0xd649,	// (0x000162a6) fep_vkb_top_pane_g3_ParamLimits

0xd649,	// (0x000162a6) fep_vkb_top_pane_g3

0x0003,

0xfb4f,	// (0x000187ac) fep_vkb_top_pane_g_ParamLimits

0xfb4f,	// (0x000187ac) fep_vkb_top_pane_g

0xd667,	// (0x000162c4) fep_vkb_top_text_pane_ParamLimits

0xd667,	// (0x000162c4) fep_vkb_top_text_pane

0xd678,	// (0x000162d5) fep_vkb_side_pane_g1_ParamLimits

0xd678,	// (0x000162d5) fep_vkb_side_pane_g1

0xd6c1,	// (0x0001631e) grid_vkb_side_pane_ParamLimits

0xd6c1,	// (0x0001631e) grid_vkb_side_pane

0x73f2,	// (0x0001004f) bg_popup_fep_shadow_pane_g2

0x73fb,	// (0x00010058) bg_popup_fep_shadow_pane_g3

0x7403,	// (0x00010060) bg_popup_fep_shadow_pane_g4

0x740c,	// (0x00010069) bg_popup_fep_shadow_pane_g5

0x7416,	// (0x00010073) bg_popup_fep_shadow_pane_g6

0x741e,	// (0x0001007b) bg_popup_fep_shadow_pane_g7

0x8ee7,	// (0x00011b44) bg_popup_fep_shadow_pane_g8

0xd718,	// (0x00016375) grid_vkb_keypad_number_pane_ParamLimits

0xd718,	// (0x00016375) grid_vkb_keypad_number_pane

0xd728,	// (0x00016385) grid_vkb_keypad_pane_ParamLimits

0xd728,	// (0x00016385) grid_vkb_keypad_pane

0xd74e,	// (0x000163ab) fep_vkb_bottom_pane_g1_ParamLimits

0xd74e,	// (0x000163ab) fep_vkb_bottom_pane_g1

0xd777,	// (0x000163d4) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd777,	// (0x000163d4) grid_vkb_keypad_bottom_left_pane

0xd78c,	// (0x000163e9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd78c,	// (0x000163e9) grid_vkb_keypad_bottom_right_pane

0xd7a1,	// (0x000163fe) fep_vkb_top_text_pane_g1

0xd7bc,	// (0x00016419) fep_vkb_top_text_pane_t1

0xd7d1,	// (0x0001642e) cell_vkb_side_pane_ParamLimits

0xd7d1,	// (0x0001642e) cell_vkb_side_pane

0xd3b2,	// (0x0001600f) cell_vkb_side_pane_g1

0xd810,	// (0x0001646d) cell_vkb_keypad_pane_ParamLimits

0xd810,	// (0x0001646d) cell_vkb_keypad_pane

0xd88b,	// (0x000164e8) cell_vkb_keypad_pane_g1

0x0008,

0xfb7c,	// (0x000187d9) bg_popup_fep_shadow_pane_g

0x7430,	// (0x0001008d) cell_hwr_side_pane_g1

0x7430,	// (0x0001008d) cell_hwr_side_pane_g2

0xd895,	// (0x000164f2) cell_vkb_keypad_pane_t1

0xd8a3,	// (0x00016500) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd8a3,	// (0x00016500) cell_vkb_keypad_bottom_left_pane

0xd8c0,	// (0x0001651d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd8c0,	// (0x0001651d) cell_vkb_keypad_bottom_right_pane

0xd3b2,	// (0x0001600f) cell_vkb_keypad_bottom_left_pane_g1

0xd3b2,	// (0x0001600f) cell_vkb_keypad_bottom_right_pane_g1

0xd8f9,	// (0x00016556) cell_vkb_keypad_number_pane_ParamLimits

0xd8f9,	// (0x00016556) cell_vkb_keypad_number_pane

0xd918,	// (0x00016575) cell_vkb_keypad_number_pane_g1

0xd922,	// (0x0001657f) cell_vkb_keypad_number_pane_g2

0xd92b,	// (0x00016588) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6e,	// (0x000187cb) cell_vkb_keypad_number_pane_g

0xd895,	// (0x000164f2) cell_vkb_keypad_number_pane_t1

0xd951,	// (0x000165ae) fep_vkb_candidate_pane_g1

0x0001,

0xfb8f,	// (0x000187ec) cell_hwr_side_pane_g

0xd96a,	// (0x000165c7) cell_hwr_side_pane_t1

0x743a,	// (0x00010097) cell_hwr_side_pane_t1_copy1

0x7448,	// (0x000100a5) cell_hwr_candidate_pane_g1

0x7477,	// (0x000100d4) cell_hwr_candidate_pane_t1

0xd3b2,	// (0x0001600f) cell_vkb_candidate_pane_g2

0xd9ae,	// (0x0001660b) cell_vkb_candidate_pane_t1

0x71e3,	// (0x0000fe40) bg_popup_fep_shadow_pane_ParamLimits

0x71e3,	// (0x0000fe40) bg_popup_fep_shadow_pane

0x7298,	// (0x0000fef5) bg_fep_hwr_top_pane_g4

0xd454,	// (0x000160b1) bg_hwr_side_pane_g1_ParamLimits

0xd454,	// (0x000160b1) bg_hwr_side_pane_g1

0x7309,	// (0x0000ff66) cell_hwr_side_pane_ParamLimits

0x7309,	// (0x0000ff66) cell_hwr_side_pane

0x7344,	// (0x0000ffa1) fep_hwr_write_pane_g1_ParamLimits

0x7344,	// (0x0000ffa1) fep_hwr_write_pane_g1

0x7351,	// (0x0000ffae) fep_hwr_write_pane_g2_ParamLimits

0x7351,	// (0x0000ffae) fep_hwr_write_pane_g2

0x735e,	// (0x0000ffbb) fep_hwr_write_pane_g3_ParamLimits

0x735e,	// (0x0000ffbb) fep_hwr_write_pane_g3

0x736c,	// (0x0000ffc9) fep_hwr_write_pane_g4_ParamLimits

0x736c,	// (0x0000ffc9) fep_hwr_write_pane_g4

0x0005,

0xfb3b,	// (0x00018798) fep_hwr_write_pane_g_ParamLimits

0xfb3b,	// (0x00018798) fep_hwr_write_pane_g

0x7298,	// (0x0000fef5) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7298,	// (0x0000fef5) bg_fep_hwr_candidate_pane_g2

0x7381,	// (0x0000ffde) cell_hwr_candidate_pane_ParamLimits

0x7381,	// (0x0000ffde) cell_hwr_candidate_pane

0x73c3,	// (0x00010020) fep_hwr_candidate_pane_g1_ParamLimits

0xd4b4,	// (0x00016111) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xd4b4,	// (0x00016111) bg_popup_fep_shadow_pane_cp2

0xd659,	// (0x000162b6) fep_vkb_top_pane_g4_ParamLimits

0xd659,	// (0x000162b6) fep_vkb_top_pane_g4

0xd69f,	// (0x000162fc) fep_vkb_side_pane_g2_ParamLimits

0xd69f,	// (0x000162fc) fep_vkb_side_pane_g2

0x8bc3,	// (0x00011820) list_setting_pane_t4_ParamLimits

0x8bc3,	// (0x00011820) list_setting_pane_t4

0x8c3d,	// (0x0001189a) list_setting_number_pane_t5_ParamLimits

0x8c3d,	// (0x0001189a) list_setting_number_pane_t5

0x95ae,	// (0x0001220b) list_double_heading_pane_cp2_ParamLimits

0x95ae,	// (0x0001220b) list_double_heading_pane_cp2

0x8db9,	// (0x00011a16) list_double_heading_pane_g1_cp2_ParamLimits

0x8db9,	// (0x00011a16) list_double_heading_pane_g1_cp2

0x8dc5,	// (0x00011a22) list_double_heading_pane_g2_cp2_ParamLimits

0x8dc5,	// (0x00011a22) list_double_heading_pane_g2_cp2

0xd9bc,	// (0x00016619) list_double_heading_pane_t1_cp2_ParamLimits

0xd9bc,	// (0x00016619) list_double_heading_pane_t1_cp2

0xd9d2,	// (0x0001662f) list_double_heading_pane_t2_cp2_ParamLimits

0xd9d2,	// (0x0001662f) list_double_heading_pane_t2_cp2

0x7eae,	// (0x00010b0b) aid_value_unit2

0x652e,	// (0x0000f18b) popup_preview_fixed_window

0x825d,	// (0x00010eba) bg_popup_preview_window_pane_cp02

0xd9e4,	// (0x00016641) list_preview_fixed_pane

0xda2a,	// (0x00016687) list_empty_pane_fp_ParamLimits

0xda2a,	// (0x00016687) list_empty_pane_fp

0xda2a,	// (0x00016687) list_single_cale_day_pane_fp_ParamLimits

0xda2a,	// (0x00016687) list_single_cale_day_pane_fp

0xda2a,	// (0x00016687) list_single_graphic_heading_pane_fp_ParamLimits

0xda2a,	// (0x00016687) list_single_graphic_heading_pane_fp

0xda2a,	// (0x00016687) list_single_graphic_pane_fp_ParamLimits

0xda2a,	// (0x00016687) list_single_graphic_pane_fp

0xda2a,	// (0x00016687) list_single_heading_pane_fp_ParamLimits

0xda2a,	// (0x00016687) list_single_heading_pane_fp

0xda2a,	// (0x00016687) list_single_pane_fp_ParamLimits

0xda2a,	// (0x00016687) list_single_pane_fp

0xda41,	// (0x0001669e) list_single_pane_fp_g1_ParamLimits

0xda41,	// (0x0001669e) list_single_pane_fp_g1

0x8db9,	// (0x00011a16) list_single_pane_fp_g2_ParamLimits

0x8db9,	// (0x00011a16) list_single_pane_fp_g2

0x8dc5,	// (0x00011a22) list_single_pane_fp_g3_ParamLimits

0x8dc5,	// (0x00011a22) list_single_pane_fp_g3

0xda4d,	// (0x000166aa) list_single_pane_fp_g4_ParamLimits

0xda4d,	// (0x000166aa) list_single_pane_fp_g4

0x0003,

0xfba2,	// (0x000187ff) list_single_pane_fp_g_ParamLimits

0xfba2,	// (0x000187ff) list_single_pane_fp_g

0xda59,	// (0x000166b6) list_single_pane_fp_t1_ParamLimits

0xda59,	// (0x000166b6) list_single_pane_fp_t1

0xda70,	// (0x000166cd) list_single_graphic_pane_fp_g1_ParamLimits

0xda70,	// (0x000166cd) list_single_graphic_pane_fp_g1

0xda41,	// (0x0001669e) list_single_graphic_pane_fp_g2_ParamLimits

0xda41,	// (0x0001669e) list_single_graphic_pane_fp_g2

0x8db9,	// (0x00011a16) list_single_graphic_pane_fp_g3_ParamLimits

0x8db9,	// (0x00011a16) list_single_graphic_pane_fp_g3

0x8dc5,	// (0x00011a22) list_single_graphic_pane_fp_g4_ParamLimits

0x8dc5,	// (0x00011a22) list_single_graphic_pane_fp_g4

0xda4d,	// (0x000166aa) list_single_graphic_pane_fp_g5_ParamLimits

0xda4d,	// (0x000166aa) list_single_graphic_pane_fp_g5

0x0004,

0xfbab,	// (0x00018808) list_single_graphic_pane_fp_g_ParamLimits

0xfbab,	// (0x00018808) list_single_graphic_pane_fp_g

0xda7c,	// (0x000166d9) list_single_graphic_pane_fp_t1_ParamLimits

0xda7c,	// (0x000166d9) list_single_graphic_pane_fp_t1

0xda70,	// (0x000166cd) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xda70,	// (0x000166cd) list_single_graphic_heading_pane_fp_g1

0xda41,	// (0x0001669e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xda41,	// (0x0001669e) list_single_graphic_heading_pane_fp_g2

0x8db9,	// (0x00011a16) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8db9,	// (0x00011a16) list_single_graphic_heading_pane_fp_g3

0x8dc5,	// (0x00011a22) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8dc5,	// (0x00011a22) list_single_graphic_heading_pane_fp_g4

0xda4d,	// (0x000166aa) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xda4d,	// (0x000166aa) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbab,	// (0x00018808) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbab,	// (0x00018808) list_single_graphic_heading_pane_fp_g

0xda92,	// (0x000166ef) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xda92,	// (0x000166ef) list_single_graphic_heading_pane_fp_t1

0xdaa8,	// (0x00016705) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xdaa8,	// (0x00016705) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb6,	// (0x00018813) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb6,	// (0x00018813) list_single_graphic_heading_pane_fp_t

0xdaba,	// (0x00016717) list_single_cale_day_pane_fp_g1_ParamLimits

0xdaba,	// (0x00016717) list_single_cale_day_pane_fp_g1

0xdaf2,	// (0x0001674f) list_single_cale_day_pane_fp_g2_ParamLimits

0xdaf2,	// (0x0001674f) list_single_cale_day_pane_fp_g2

0xdafe,	// (0x0001675b) list_single_cale_day_pane_fp_g3_ParamLimits

0xdafe,	// (0x0001675b) list_single_cale_day_pane_fp_g3

0xdb26,	// (0x00016783) list_single_cale_day_pane_fp_g4_ParamLimits

0xdb26,	// (0x00016783) list_single_cale_day_pane_fp_g4

0xdb4a,	// (0x000167a7) list_single_cale_day_pane_fp_g5_ParamLimits

0xdb4a,	// (0x000167a7) list_single_cale_day_pane_fp_g5

0x0004,

0xfbbb,	// (0x00018818) list_single_cale_day_pane_fp_g_ParamLimits

0xfbbb,	// (0x00018818) list_single_cale_day_pane_fp_g

0xdb6e,	// (0x000167cb) list_single_cale_day_pane_fp_t1_ParamLimits

0xdb6e,	// (0x000167cb) list_single_cale_day_pane_fp_t1

0xdb94,	// (0x000167f1) list_single_cale_day_pane_fp_t2_ParamLimits

0xdb94,	// (0x000167f1) list_single_cale_day_pane_fp_t2

0xdbad,	// (0x0001680a) list_single_cale_day_pane_fp_t3_ParamLimits

0xdbad,	// (0x0001680a) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc6,	// (0x00018823) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc6,	// (0x00018823) list_single_cale_day_pane_fp_t

0xda41,	// (0x0001669e) list_empty_pane_fp_g1_ParamLimits

0xda41,	// (0x0001669e) list_empty_pane_fp_g1

0xdbc6,	// (0x00016823) list_empty_pane_fp_t1

0xdbd4,	// (0x00016831) list_empty_pane_fp_t2

0x0001,

0xfbcd,	// (0x0001882a) list_empty_pane_fp_t

0xda41,	// (0x0001669e) list_single_heading_pane_fp_g1_ParamLimits

0xda41,	// (0x0001669e) list_single_heading_pane_fp_g1

0x8db9,	// (0x00011a16) list_single_heading_pane_fp_g2_ParamLimits

0x8db9,	// (0x00011a16) list_single_heading_pane_fp_g2

0x8dc5,	// (0x00011a22) list_single_heading_pane_fp_g3_ParamLimits

0x8dc5,	// (0x00011a22) list_single_heading_pane_fp_g3

0x0002,

0xfbd2,	// (0x0001882f) list_single_heading_pane_fp_g_ParamLimits

0xfbd2,	// (0x0001882f) list_single_heading_pane_fp_g

0xdbe2,	// (0x0001683f) list_single_heading_pane_fp_t1_ParamLimits

0xdbe2,	// (0x0001683f) list_single_heading_pane_fp_t1

0xdbf4,	// (0x00016851) list_single_heading_pane_fp_t2_ParamLimits

0xdbf4,	// (0x00016851) list_single_heading_pane_fp_t2

0x0001,

0xfbd9,	// (0x00018836) list_single_heading_pane_fp_t_ParamLimits

0xfbd9,	// (0x00018836) list_single_heading_pane_fp_t

0x9117,	// (0x00011d74) aid_size_cell_fast

0x81cd,	// (0x00010e2a) soft_indicator_pane_cp1_t1

0x9154,	// (0x00011db1) cell_app_pane_cp2_ParamLimits

0x9154,	// (0x00011db1) cell_app_pane_cp2

0x7205,	// (0x0000fe62) fep_hwr_candidate_drop_down_list_pane

0x73dd,	// (0x0001003a) fep_hwr_candidate_pane_g3_ParamLimits

0x73dd,	// (0x0001003a) fep_hwr_candidate_pane_g3

0x59af,	// (0x0000e60c) fep_hwr_candidate_pane_g4_ParamLimits

0x59af,	// (0x0000e60c) fep_hwr_candidate_pane_g4

0x0002,

0xfb48,	// (0x000187a5) fep_hwr_candidate_pane_g_ParamLimits

0xfb48,	// (0x000187a5) fep_hwr_candidate_pane_g

0xd540,	// (0x0001619d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xd540,	// (0x0001619d) fep_vkb_candidate_drop_down_list_pane

0xd959,	// (0x000165b6) fep_vkb_candidate_pane_g3

0xd961,	// (0x000165be) fep_vkb_candidate_pane_g4

0x0002,

0xfb75,	// (0x000187d2) fep_vkb_candidate_pane_g

0x7448,	// (0x000100a5) cell_hwr_candidate_pane_g1_ParamLimits

0x7456,	// (0x000100b3) cell_hwr_candidate_pane_g3_ParamLimits

0x7456,	// (0x000100b3) cell_hwr_candidate_pane_g3

0x08e9,	// (0x00009546) cell_hwr_candidate_pane_g4_ParamLimits

0x08e9,	// (0x00009546) cell_hwr_candidate_pane_g4

0x0002,

0xfb94,	// (0x000187f1) cell_hwr_candidate_pane_g_ParamLimits

0xfb94,	// (0x000187f1) cell_hwr_candidate_pane_g

0xd978,	// (0x000165d5) cell_vkb_candidate_pane_g3_ParamLimits

0xd978,	// (0x000165d5) cell_vkb_candidate_pane_g3

0xd993,	// (0x000165f0) cell_vkb_candidate_pane_g4_ParamLimits

0xd993,	// (0x000165f0) cell_vkb_candidate_pane_g4

0xdc4c,	// (0x000168a9) cell_app_pane_cp2_g1_ParamLimits

0xdc4c,	// (0x000168a9) cell_app_pane_cp2_g1

0xdc6a,	// (0x000168c7) cell_app_pane_cp2_g2_ParamLimits

0xdc6a,	// (0x000168c7) cell_app_pane_cp2_g2

0x0001,

0xfbde,	// (0x0001883b) cell_app_pane_cp2_g_ParamLimits

0xfbde,	// (0x0001883b) cell_app_pane_cp2_g

0xdc76,	// (0x000168d3) cell_app_pane_cp2_t1_ParamLimits

0xdc76,	// (0x000168d3) cell_app_pane_cp2_t1

0x8d93,	// (0x000119f0) grid_highlight_pane_cp1_ParamLimits

0x8d93,	// (0x000119f0) grid_highlight_pane_cp1

0x7495,	// (0x000100f2) cell_hwr_candidate_pane_cp1_ParamLimits

0x7495,	// (0x000100f2) cell_hwr_candidate_pane_cp1

0x7448,	// (0x000100a5) fep_hwr_candidate_drop_down_list_pane_g1

0x74b4,	// (0x00010111) fep_hwr_candidate_drop_down_list_pane_g2

0x74c1,	// (0x0001011e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe3,	// (0x00018840) fep_hwr_candidate_drop_down_list_pane_g

0x74ce,	// (0x0001012b) fep_hwr_candidate_drop_down_list_scroll_pane

0x74d7,	// (0x00010134) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x74d7,	// (0x00010134) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x74e4,	// (0x00010141) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x74e4,	// (0x00010141) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x74f1,	// (0x0001014e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x74f1,	// (0x0001014e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x74fe,	// (0x0001015b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x74fe,	// (0x0001015b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7519,	// (0x00010176) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7519,	// (0x00010176) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7534,	// (0x00010191) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7534,	// (0x00010191) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x754f,	// (0x000101ac) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x754f,	// (0x000101ac) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x756a,	// (0x000101c7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x756a,	// (0x000101c7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbea,	// (0x00018847) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbea,	// (0x00018847) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xdc88,	// (0x000168e5) cell_vkb_candidate_pane_cp1_ParamLimits

0xdc88,	// (0x000168e5) cell_vkb_candidate_pane_cp1

0xd659,	// (0x000162b6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd659,	// (0x000162b6) fep_vkb_candidate_drop_down_list_pane_g1

0xdca8,	// (0x00016905) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xdca8,	// (0x00016905) fep_vkb_candidate_drop_down_list_pane_g2

0xdcb5,	// (0x00016912) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xdcb5,	// (0x00016912) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbfb,	// (0x00018858) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbfb,	// (0x00018858) fep_vkb_candidate_drop_down_list_pane_g

0xdcc2,	// (0x0001691f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xdcc2,	// (0x0001691f) fep_vkb_candidate_drop_down_list_scroll_pane

0xdccf,	// (0x0001692c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xdccf,	// (0x0001692c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xdcdc,	// (0x00016939) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xdcdc,	// (0x00016939) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xdce8,	// (0x00016945) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xdce8,	// (0x00016945) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xdc0a,	// (0x00016867) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xdc0a,	// (0x00016867) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xdc2b,	// (0x00016888) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xdc2b,	// (0x00016888) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xdcf4,	// (0x00016951) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xdcf4,	// (0x00016951) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xdd15,	// (0x00016972) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xdd15,	// (0x00016972) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xdd36,	// (0x00016993) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xdd36,	// (0x00016993) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc02,	// (0x0001885f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc02,	// (0x0001885f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7ee4,	// (0x00010b41) title_pane_g1_ParamLimits

0x7ef1,	// (0x00010b4e) title_pane_g2_ParamLimits

0xf592,	// (0x000181ef) title_pane_g_ParamLimits

0x955c,	// (0x000121b9) aid_call2_pane

0x9564,	// (0x000121c1) aid_call_pane

0x956c,	// (0x000121c9) popup_clock_analogue_window_g1

0x956c,	// (0x000121c9) popup_clock_analogue_window_g2

0x688d,	// (0x0000f4ea) popup_clock_analogue_window_g3

0x6896,	// (0x0000f4f3) popup_clock_analogue_window_g4

0x7ed0,	// (0x00010b2d) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x00018394) popup_clock_analogue_window_g

0x689e,	// (0x0000f4fb) popup_clock_analogue_window_t1

0x68ac,	// (0x0000f509) clock_digital_number_pane_ParamLimits

0x68ac,	// (0x0000f509) clock_digital_number_pane

0x68b8,	// (0x0000f515) clock_digital_number_pane_cp02_ParamLimits

0x68b8,	// (0x0000f515) clock_digital_number_pane_cp02

0x68c4,	// (0x0000f521) clock_digital_number_pane_cp03_ParamLimits

0x68c4,	// (0x0000f521) clock_digital_number_pane_cp03

0x68d0,	// (0x0000f52d) clock_digital_number_pane_cp04_ParamLimits

0x68d0,	// (0x0000f52d) clock_digital_number_pane_cp04

0x68dc,	// (0x0000f539) clock_digital_separator_pane_ParamLimits

0x68dc,	// (0x0000f539) clock_digital_separator_pane

0x68e8,	// (0x0000f545) popup_clock_digital_window_t1_ParamLimits

0x68e8,	// (0x0000f545) popup_clock_digital_window_t1

0x7ed0,	// (0x00010b2d) clock_digital_number_pane_g1

0x7ed0,	// (0x00010b2d) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0001839f) clock_digital_number_pane_g

0x7ed0,	// (0x00010b2d) clock_digital_separator_pane_g1

0x7ed0,	// (0x00010b2d) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0001839f) clock_digital_separator_pane_g

0xa510,	// (0x0001316d) aid_fill_nsta_ParamLimits

0xa656,	// (0x000132b3) indicator_nsta_pane_ParamLimits

0xa7c8,	// (0x00013425) popup_clock_analogue_window

0xa7c8,	// (0x00013425) popup_clock_digital_window

0x7fba,	// (0x00010c17) grid_indicator_nsta_pane_ParamLimits

0xcd3d,	// (0x0001599a) clock_nsta_pane_t2

0x0001,

0xfad5,	// (0x00018732) clock_nsta_pane_t

0x6851,	// (0x0000f4ae) aid_size_max_handle

0x685b,	// (0x0000f4b8) aid_size_min_handle

0x9bd9,	// (0x00012836) editor_scroll_pane

0xdd51,	// (0x000169ae) ex_editor_pane

0x9086,	// (0x00011ce3) scroll_pane_cp13

0x87c6,	// (0x00011423) scroll_pane_cp14

0x9596,	// (0x000121f3) scroll_pane_cp36

0x95c0,	// (0x0001221d) list_single_graphic_hl_pane_cp2_ParamLimits

0x95c0,	// (0x0001221d) list_single_graphic_hl_pane_cp2

0xc152,	// (0x00014daf) list_single_graphic_hl_pane_ParamLimits

0xc152,	// (0x00014daf) list_single_graphic_hl_pane

0xdd59,	// (0x000169b6) aid_size_min_hl_cp1

0xdd62,	// (0x000169bf) list_highlight_pane_cp34_ParamLimits

0xdd62,	// (0x000169bf) list_highlight_pane_cp34

0xdd73,	// (0x000169d0) list_single_graphic_hl_pane_g1_ParamLimits

0xdd73,	// (0x000169d0) list_single_graphic_hl_pane_g1

0xdd80,	// (0x000169dd) list_single_graphic_hl_pane_g2_ParamLimits

0xdd80,	// (0x000169dd) list_single_graphic_hl_pane_g2

0xdd80,	// (0x000169dd) list_single_graphic_hl_pane_g3_ParamLimits

0xdd80,	// (0x000169dd) list_single_graphic_hl_pane_g3

0x9b10,	// (0x0001276d) list_single_graphic_hl_pane_g4_ParamLimits

0x9b10,	// (0x0001276d) list_single_graphic_hl_pane_g4

0xdd8c,	// (0x000169e9) list_single_graphic_hl_pane_g5_ParamLimits

0xdd8c,	// (0x000169e9) list_single_graphic_hl_pane_g5

0x0004,

0xfc13,	// (0x00018870) list_single_graphic_hl_pane_g_ParamLimits

0xfc13,	// (0x00018870) list_single_graphic_hl_pane_g

0xb76d,	// (0x000143ca) list_single_graphic_hl_pane_t1_ParamLimits

0xb76d,	// (0x000143ca) list_single_graphic_hl_pane_t1

0xdda0,	// (0x000169fd) aid_size_min_hl_cp2

0xdda9,	// (0x00016a06) list_highlight_pane_cp34_cp2_ParamLimits

0xdda9,	// (0x00016a06) list_highlight_pane_cp34_cp2

0xdd73,	// (0x000169d0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xdd73,	// (0x000169d0) list_single_graphic_hl_pane_g1_cp2

0xddb6,	// (0x00016a13) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xddb6,	// (0x00016a13) list_single_graphic_hl_pane_g2_cp2

0xddc2,	// (0x00016a1f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xddc2,	// (0x00016a1f) list_single_graphic_hl_pane_g3_cp2

0x9b10,	// (0x0001276d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9b10,	// (0x0001276d) list_single_graphic_hl_pane_g4_cp2

0xdd8c,	// (0x000169e9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xdd8c,	// (0x000169e9) list_single_graphic_hl_pane_g5_cp2

0x6b9a,	// (0x0000f7f7) control_pane_g4_ParamLimits

0x6b9a,	// (0x0000f7f7) control_pane_g4

0x9f5f,	// (0x00012bbc) bg_popup_sub_pane_cp10_ParamLimits

0xd3bc,	// (0x00016019) list_choice_list_pane_ParamLimits

0xd3cb,	// (0x00016028) scroll_pane_cp23

0x825d,	// (0x00010eba) bg_popup_preview_window_pane_cp02_ParamLimits

0xd9e4,	// (0x00016641) list_preview_fixed_pane_ParamLimits

0xd9fa,	// (0x00016657) list_preview_fixed_pane_cp_ParamLimits

0xd9fa,	// (0x00016657) list_preview_fixed_pane_cp

0xda06,	// (0x00016663) popup_preview_fixed_window_g1_ParamLimits

0xda06,	// (0x00016663) popup_preview_fixed_window_g1

0xda12,	// (0x0001666f) popup_preview_fixed_window_g2_ParamLimits

0xda12,	// (0x0001666f) popup_preview_fixed_window_g2

0x0002,

0xfb9b,	// (0x000187f8) popup_preview_fixed_window_g_ParamLimits

0xfb9b,	// (0x000187f8) popup_preview_fixed_window_g

0x67c5,	// (0x0000f422) aid_navi_side_left_pane_ParamLimits

0x67da,	// (0x0000f437) aid_navi_side_right_pane_ParamLimits

0x67f2,	// (0x0000f44f) navi_icon_pane_stacon_ParamLimits

0x6806,	// (0x0000f463) navi_navi_pane_stacon_ParamLimits

0x67f2,	// (0x0000f44f) navi_text_pane_stacon_ParamLimits

0x7ec6,	// (0x00010b23) main_text_info_pane

0xdde6,	// (0x00016a43) listscroll_text_info_pane

0xddee,	// (0x00016a4b) list_text_info_pane_ParamLimits

0xddee,	// (0x00016a4b) list_text_info_pane

0xddfd,	// (0x00016a5a) scroll_pane_cp24_ParamLimits

0xddfd,	// (0x00016a5a) scroll_pane_cp24

0xde1b,	// (0x00016a78) list_text_info_pane_t1_ParamLimits

0xde1b,	// (0x00016a78) list_text_info_pane_t1

0x9fa9,	// (0x00012c06) popup_fast_swap2_window_ParamLimits

0x9fa9,	// (0x00012c06) popup_fast_swap2_window

0xde54,	// (0x00016ab1) aid_size_cell_fast2

0x7ec6,	// (0x00010b23) bg_popup_window_pane_cp17

0xaf52,	// (0x00013baf) heading_pane_cp2

0x849d,	// (0x000110fa) listscroll_fast2_pane

0xde5e,	// (0x00016abb) grid_fast2_pane

0xde68,	// (0x00016ac5) listscroll_fast2_pane_g1

0xde70,	// (0x00016acd) listscroll_fast2_pane_g2

0x0001,

0xfc1e,	// (0x0001887b) listscroll_fast2_pane_g

0x9086,	// (0x00011ce3) scroll_pane_cp26

0xde7a,	// (0x00016ad7) cell_fast2_pane_ParamLimits

0xde7a,	// (0x00016ad7) cell_fast2_pane

0xde8f,	// (0x00016aec) cell_fast2_pane_g1

0xde98,	// (0x00016af5) cell_fast2_pane_g2

0xdea1,	// (0x00016afe) cell_fast2_pane_g3

0x0002,

0xfc23,	// (0x00018880) cell_fast2_pane_g

0x8583,	// (0x000111e0) grid_highlight_pane_cp9

0x8598,	// (0x000111f5) main_eswt_pane_ParamLimits

0x8598,	// (0x000111f5) main_eswt_pane

0xde12,	// (0x00016a6f) list_single_text_info_pane

0xdea9,	// (0x00016b06) eswt_ctrl_button_pane

0xdea9,	// (0x00016b06) eswt_ctrl_canvas_pane

0xdeb1,	// (0x00016b0e) eswt_ctrl_combo_pane

0xdea9,	// (0x00016b06) eswt_ctrl_default_pane

0xdea9,	// (0x00016b06) eswt_ctrl_label_pane

0xdeb9,	// (0x00016b16) eswt_ctrl_wait_pane

0xdec1,	// (0x00016b1e) eswt_shell_pane

0x7ec6,	// (0x00010b23) listscroll_eswt_app_pane

0xdee1,	// (0x00016b3e) popup_eswt_tasktip_window_ParamLimits

0xdee1,	// (0x00016b3e) popup_eswt_tasktip_window

0xab2b,	// (0x00013788) bg_popup_window_pane_cp18

0xdef2,	// (0x00016b4f) eswt_control_pane_g1_ParamLimits

0xdef2,	// (0x00016b4f) eswt_control_pane_g1

0xdeff,	// (0x00016b5c) eswt_control_pane_g2_ParamLimits

0xdeff,	// (0x00016b5c) eswt_control_pane_g2

0xdf0c,	// (0x00016b69) eswt_control_pane_g3_ParamLimits

0xdf0c,	// (0x00016b69) eswt_control_pane_g3

0xdf19,	// (0x00016b76) eswt_control_pane_g4_ParamLimits

0xdf19,	// (0x00016b76) eswt_control_pane_g4

0x0003,

0xfc2a,	// (0x00018887) eswt_control_pane_g_ParamLimits

0xfc2a,	// (0x00018887) eswt_control_pane_g

0x8d93,	// (0x000119f0) bg_button_pane_ParamLimits

0x8d93,	// (0x000119f0) bg_button_pane

0x8598,	// (0x000111f5) common_borders_pane_copy2_ParamLimits

0x8598,	// (0x000111f5) common_borders_pane_copy2

0xdf26,	// (0x00016b83) control_button_pane_g1_ParamLimits

0xdf26,	// (0x00016b83) control_button_pane_g1

0xdf32,	// (0x00016b8f) control_button_pane_g2_ParamLimits

0xdf32,	// (0x00016b8f) control_button_pane_g2

0xdf3e,	// (0x00016b9b) control_button_pane_g3_ParamLimits

0xdf3e,	// (0x00016b9b) control_button_pane_g3

0x0002,

0xfc33,	// (0x00018890) control_button_pane_g_ParamLimits

0xfc33,	// (0x00018890) control_button_pane_g

0xdf52,	// (0x00016baf) control_button_pane_t1

0xdf60,	// (0x00016bbd) control_button_pane_t2

0x0001,

0xfc3a,	// (0x00018897) control_button_pane_t

0xaa11,	// (0x0001366e) bg_button_pane_g1

0xaa21,	// (0x0001367e) bg_button_pane_g2

0xaa19,	// (0x00013676) bg_button_pane_g3

0xaa31,	// (0x0001368e) bg_button_pane_g4

0xaa29,	// (0x00013686) bg_button_pane_g5

0xaa39,	// (0x00013696) bg_button_pane_g6

0xaa41,	// (0x0001369e) bg_button_pane_g7

0xaa51,	// (0x000136ae) bg_button_pane_g8

0xaa49,	// (0x000136a6) bg_button_pane_g9

0x0008,

0xf89a,	// (0x000184f7) bg_button_pane_g

0xd377,	// (0x00015fd4) common_borders_pane_ParamLimits

0xd377,	// (0x00015fd4) common_borders_pane

0xdef2,	// (0x00016b4f) eswt_control_pane_g1_copy1_ParamLimits

0xdef2,	// (0x00016b4f) eswt_control_pane_g1_copy1

0xdeff,	// (0x00016b5c) eswt_control_pane_g2_copy1_ParamLimits

0xdeff,	// (0x00016b5c) eswt_control_pane_g2_copy1

0xdf0c,	// (0x00016b69) eswt_control_pane_g3_copy1_ParamLimits

0xdf0c,	// (0x00016b69) eswt_control_pane_g3_copy1

0xdf19,	// (0x00016b76) eswt_control_pane_g4_copy1_ParamLimits

0xdf19,	// (0x00016b76) eswt_control_pane_g4_copy1

0xd3b2,	// (0x0001600f) bg_eswt_ctrl_canvas_pane_g1

0xd377,	// (0x00015fd4) common_borders_pane_cp2_ParamLimits

0xd377,	// (0x00015fd4) common_borders_pane_cp2

0xd377,	// (0x00015fd4) common_borders_pane_cp3_ParamLimits

0xd377,	// (0x00015fd4) common_borders_pane_cp3

0xdf6e,	// (0x00016bcb) separator_horizontal_pane

0xdf76,	// (0x00016bd3) separator_vertical_pane

0xdef2,	// (0x00016b4f) eswt_control_pane_g1_copy2_ParamLimits

0xdef2,	// (0x00016b4f) eswt_control_pane_g1_copy2

0xdeff,	// (0x00016b5c) eswt_control_pane_g2_copy2_ParamLimits

0xdeff,	// (0x00016b5c) eswt_control_pane_g2_copy2

0xdf0c,	// (0x00016b69) eswt_control_pane_g3_copy2_ParamLimits

0xdf0c,	// (0x00016b69) eswt_control_pane_g3_copy2

0xdf19,	// (0x00016b76) eswt_control_pane_g4_copy2_ParamLimits

0xdf19,	// (0x00016b76) eswt_control_pane_g4_copy2

0x7ec6,	// (0x00010b23) common_borders_pane_cp4

0xdf7f,	// (0x00016bdc) separator_horizontal_pane_g1

0xdf88,	// (0x00016be5) separator_horizontal_pane_g2

0xdf91,	// (0x00016bee) separator_horizontal_pane_g3

0x0002,

0xfc3f,	// (0x0001889c) separator_horizontal_pane_g

0xdef2,	// (0x00016b4f) eswt_control_pane_g1_copy3_ParamLimits

0xdef2,	// (0x00016b4f) eswt_control_pane_g1_copy3

0xdeff,	// (0x00016b5c) eswt_control_pane_g2_copy3_ParamLimits

0xdeff,	// (0x00016b5c) eswt_control_pane_g2_copy3

0xdf0c,	// (0x00016b69) eswt_control_pane_g3_copy3_ParamLimits

0xdf0c,	// (0x00016b69) eswt_control_pane_g3_copy3

0xdf19,	// (0x00016b76) eswt_control_pane_g4_copy3_ParamLimits

0xdf19,	// (0x00016b76) eswt_control_pane_g4_copy3

0x7ec6,	// (0x00010b23) common_borders_pane_cp5

0xdf9a,	// (0x00016bf7) separator_vertical_pane_g1

0xdfa3,	// (0x00016c00) separator_vertical_pane_g2

0xdfac,	// (0x00016c09) separator_vertical_pane_g3

0x0002,

0xfc46,	// (0x000188a3) separator_vertical_pane_g

0xdef2,	// (0x00016b4f) eswt_control_pane_g1_copy4_ParamLimits

0xdef2,	// (0x00016b4f) eswt_control_pane_g1_copy4

0xdeff,	// (0x00016b5c) eswt_control_pane_g2_copy4_ParamLimits

0xdeff,	// (0x00016b5c) eswt_control_pane_g2_copy4

0xdf0c,	// (0x00016b69) eswt_control_pane_g3_copy4_ParamLimits

0xdf0c,	// (0x00016b69) eswt_control_pane_g3_copy4

0xdf19,	// (0x00016b76) eswt_control_pane_g4_copy4_ParamLimits

0xdf19,	// (0x00016b76) eswt_control_pane_g4_copy4

0xdfb5,	// (0x00016c12) eswt_ctrl_combo_button_pane

0xdfbd,	// (0x00016c1a) eswt_ctrl_input_pane

0xdfc5,	// (0x00016c22) popup_choice_list_window_cp70

0xdfcd,	// (0x00016c2a) eswt_ctrl_input_pane_t1

0x7ec6,	// (0x00010b23) input_focus_pane_cp70

0xd377,	// (0x00015fd4) bg_button_pane_cp70_ParamLimits

0xd377,	// (0x00015fd4) bg_button_pane_cp70

0xdfdb,	// (0x00016c38) eswt_ctrl_combo_button_pane_g1

0xdfe3,	// (0x00016c40) wait_bar_pane_cp70

0xab2b,	// (0x00013788) bg_popup_window_pane_cp70_ParamLimits

0xab2b,	// (0x00013788) bg_popup_window_pane_cp70

0xdfeb,	// (0x00016c48) popup_eswt_tasktip_window_t1

0xe001,	// (0x00016c5e) wait_bar_pane_cp71_ParamLimits

0xe001,	// (0x00016c5e) wait_bar_pane_cp71

0xe00d,	// (0x00016c6a) grid_eswt_app_pane

0x93a2,	// (0x00011fff) scroll_pane_cp70

0xe016,	// (0x00016c73) cell_eswt_app_pane_ParamLimits

0xe016,	// (0x00016c73) cell_eswt_app_pane

0xe04a,	// (0x00016ca7) cell_eswt_app_pane_g1_ParamLimits

0xe04a,	// (0x00016ca7) cell_eswt_app_pane_g1

0xe079,	// (0x00016cd6) cell_eswt_app_pane_g2_ParamLimits

0xe079,	// (0x00016cd6) cell_eswt_app_pane_g2

0x0001,

0xfc4d,	// (0x000188aa) cell_eswt_app_pane_g_ParamLimits

0xfc4d,	// (0x000188aa) cell_eswt_app_pane_g

0xe0a2,	// (0x00016cff) cell_eswt_app_pane_t1_ParamLimits

0xe0a2,	// (0x00016cff) cell_eswt_app_pane_t1

0xe0d4,	// (0x00016d31) grid_highlight_pane_cp70_ParamLimits

0xe0d4,	// (0x00016d31) grid_highlight_pane_cp70

0x9aac,	// (0x00012709) set_content_pane_g1

0x9e81,	// (0x00012ade) status_small_volume_pane

0x7585,	// (0x000101e2) status_small_volume_pane_g1

0x758d,	// (0x000101ea) volume_small2_pane

0x7596,	// (0x000101f3) volume_small2_pane_g1

0x759f,	// (0x000101fc) volume_small2_pane_g2

0x75a8,	// (0x00010205) volume_small2_pane_g3

0x75b1,	// (0x0001020e) volume_small2_pane_g4

0x75ba,	// (0x00010217) volume_small2_pane_g5

0x75c3,	// (0x00010220) volume_small2_pane_g6

0x75cc,	// (0x00010229) volume_small2_pane_g7

0x75d5,	// (0x00010232) volume_small2_pane_g8

0x75de,	// (0x0001023b) volume_small2_pane_g9

0x75e7,	// (0x00010244) volume_small2_pane_g10

0x0009,

0xfc52,	// (0x000188af) volume_small2_pane_g

0xd7a1,	// (0x000163fe) fep_vkb_top_text_pane_g1_ParamLimits

0xd7bc,	// (0x00016419) fep_vkb_top_text_pane_t1_ParamLimits

0xda1e,	// (0x0001667b) popup_preview_fixed_window_g3_ParamLimits

0xda1e,	// (0x0001667b) popup_preview_fixed_window_g3

0xa448,	// (0x000130a5) popup_toolbar_trans_pane

0xbebb,	// (0x00014b18) aid_height_set_list_ParamLimits

0xbecc,	// (0x00014b29) aid_size_parent_ParamLimits

0x9f5f,	// (0x00012bbc) list_highlight_pane_cp2_ParamLimits

0x9aac,	// (0x00012709) set_content_pane_g1_ParamLimits

0xc175,	// (0x00014dd2) list_single_image_pane_ParamLimits

0xc175,	// (0x00014dd2) list_single_image_pane

0xe0e0,	// (0x00016d3d) aid_size_cell_image_ParamLimits

0xe0e0,	// (0x00016d3d) aid_size_cell_image

0xe0ed,	// (0x00016d4a) grid_single_image_pane_ParamLimits

0xe0ed,	// (0x00016d4a) grid_single_image_pane

0x8db9,	// (0x00011a16) list_single_image_pane_g1_ParamLimits

0x8db9,	// (0x00011a16) list_single_image_pane_g1

0x8dc5,	// (0x00011a22) list_single_image_pane_g2_ParamLimits

0x8dc5,	// (0x00011a22) list_single_image_pane_g2

0x0001,

0xfc67,	// (0x000188c4) list_single_image_pane_g_ParamLimits

0xfc67,	// (0x000188c4) list_single_image_pane_g

0xe0f9,	// (0x00016d56) list_single_image_pane_t1_ParamLimits

0xe0f9,	// (0x00016d56) list_single_image_pane_t1

0xe10f,	// (0x00016d6c) cell_image_list_pane_ParamLimits

0xe10f,	// (0x00016d6c) cell_image_list_pane

0xe123,	// (0x00016d80) cell_image_list_pane_g1

0xe12c,	// (0x00016d89) cell_image_list_pane_g2

0x0001,

0xfc6c,	// (0x000188c9) cell_image_list_pane_g

0xe135,	// (0x00016d92) aid_size_cell_tb_trans_pane

0x8d93,	// (0x000119f0) bg_tb_trans_pane

0xe147,	// (0x00016da4) grid_tb_trans_pane

0xaa11,	// (0x0001366e) bg_tb_trans_pane_g1

0xaa21,	// (0x0001367e) bg_tb_trans_pane_g2

0xaa19,	// (0x00013676) bg_tb_trans_pane_g3

0xaa31,	// (0x0001368e) bg_tb_trans_pane_g4

0xaa29,	// (0x00013686) bg_tb_trans_pane_g5

0xaa51,	// (0x000136ae) bg_tb_trans_pane_g6

0xaa49,	// (0x000136a6) bg_tb_trans_pane_g7

0xaa39,	// (0x00013696) bg_tb_trans_pane_g8

0xaa41,	// (0x0001369e) bg_tb_trans_pane_g9

0x0008,

0xfc71,	// (0x000188ce) bg_tb_trans_pane_g

0xe15b,	// (0x00016db8) cell_toolbar_trans_pane_ParamLimits

0xe15b,	// (0x00016db8) cell_toolbar_trans_pane

0xd3b2,	// (0x0001600f) cell_toolbar_trans_pane_g1

0xcefd,	// (0x00015b5a) list_form2_midp_pane_t1

0xcf0b,	// (0x00015b68) list_form2_midp_pane_t2

0x0001,

0xfb0e,	// (0x0001876b) list_form2_midp_pane_t

0xcf19,	// (0x00015b76) scroll_pane_cp51_ParamLimits

0xd11c,	// (0x00015d79) form2_midp_wait_pane_g1

0xd125,	// (0x00015d82) form2_midp_wait_pane_g2

0xd12e,	// (0x00015d8b) form2_midp_wait_pane_g3

0x0002,

0xfb23,	// (0x00018780) form2_midp_wait_pane_g

0x7fba,	// (0x00010c17) list_highlight_pane_cp21_ParamLimits

0xd17d,	// (0x00015dda) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xd18c,	// (0x00015de9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xc0e1,	// (0x00014d3e) list_single_2graphic_im_pane_ParamLimits

0xc0e1,	// (0x00014d3e) list_single_2graphic_im_pane

0xe181,	// (0x00016dde) list_single_2graphic_im_pane_g1_ParamLimits

0xe181,	// (0x00016dde) list_single_2graphic_im_pane_g1

0xe192,	// (0x00016def) list_single_2graphic_im_pane_g2_ParamLimits

0xe192,	// (0x00016def) list_single_2graphic_im_pane_g2

0xe19e,	// (0x00016dfb) list_single_2graphic_im_pane_g3_ParamLimits

0xe19e,	// (0x00016dfb) list_single_2graphic_im_pane_g3

0x0003,

0xfc84,	// (0x000188e1) list_single_2graphic_im_pane_g_ParamLimits

0xfc84,	// (0x000188e1) list_single_2graphic_im_pane_g

0xe1be,	// (0x00016e1b) list_single_2graphic_im_pane_t1_ParamLimits

0xe1be,	// (0x00016e1b) list_single_2graphic_im_pane_t1

0xda2a,	// (0x00016687) list_single_graphic_2heading_pane_fp_ParamLimits

0xda2a,	// (0x00016687) list_single_graphic_2heading_pane_fp

0xda70,	// (0x000166cd) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xda70,	// (0x000166cd) list_single_graphic_2heading_pane_fp_g1

0xda41,	// (0x0001669e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xda41,	// (0x0001669e) list_single_graphic_2heading_pane_fp_g2

0x8db9,	// (0x00011a16) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8db9,	// (0x00011a16) list_single_graphic_2heading_pane_fp_g3

0x8dc5,	// (0x00011a22) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8dc5,	// (0x00011a22) list_single_graphic_2heading_pane_fp_g4

0xda4d,	// (0x000166aa) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xda4d,	// (0x000166aa) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbab,	// (0x00018808) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbab,	// (0x00018808) list_single_graphic_2heading_pane_fp_g

0xe1ef,	// (0x00016e4c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe1ef,	// (0x00016e4c) list_single_graphic_2heading_pane_fp_t1

0xdaa8,	// (0x00016705) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xdaa8,	// (0x00016705) list_single_graphic_2heading_pane_fp_t2

0xe205,	// (0x00016e62) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe205,	// (0x00016e62) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8d,	// (0x000188ea) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8d,	// (0x000188ea) list_single_graphic_2heading_pane_fp_t

0xd460,	// (0x000160bd) fep_hwr_write_pane_g5_ParamLimits

0xd460,	// (0x000160bd) fep_hwr_write_pane_g5

0xd46c,	// (0x000160c9) fep_hwr_write_pane_g6_ParamLimits

0xd46c,	// (0x000160c9) fep_hwr_write_pane_g6

0xdec1,	// (0x00016b1e) eswt_shell_pane_ParamLimits

0xab2b,	// (0x00013788) bg_popup_window_pane_cp18_ParamLimits

0xbdf2,	// (0x00014a4f) heading_pane_cp70

0xdfeb,	// (0x00016c48) popup_eswt_tasktip_window_t1_ParamLimits

0xa565,	// (0x000131c2) aid_touch_tab_arrow_left

0xa574,	// (0x000131d1) aid_touch_tab_arrow_right

0x7f02,	// (0x00010b5f) title_pane_g3_ParamLimits

0x7f02,	// (0x00010b5f) title_pane_g3

0x8c80,	// (0x000118dd) set_value_pane_g1

0xa448,	// (0x000130a5) popup_toolbar_trans_pane_ParamLimits

0xe135,	// (0x00016d92) aid_size_cell_tb_trans_pane_ParamLimits

0x8d93,	// (0x000119f0) bg_tb_trans_pane_ParamLimits

0xe147,	// (0x00016da4) grid_tb_trans_pane_ParamLimits

0x825d,	// (0x00010eba) cont_note_pane_ParamLimits

0x825d,	// (0x00010eba) cont_note_pane

0x8598,	// (0x000111f5) cont_snote2_single_text_pane_ParamLimits

0x8598,	// (0x000111f5) cont_snote2_single_text_pane

0x8598,	// (0x000111f5) cont_snote2_single_graphic_pane_ParamLimits

0x8598,	// (0x000111f5) cont_snote2_single_graphic_pane

0xb137,	// (0x00013d94) cont_note_wait_pane_ParamLimits

0xb137,	// (0x00013d94) cont_note_wait_pane

0xb137,	// (0x00013d94) cont_note_image_pane_ParamLimits

0xb137,	// (0x00013d94) cont_note_image_pane

0xe21b,	// (0x00016e78) popup_note2_window_g1_ParamLimits

0xe21b,	// (0x00016e78) popup_note2_window_g1

0xe24c,	// (0x00016ea9) popup_note2_window_t1_ParamLimits

0xe24c,	// (0x00016ea9) popup_note2_window_t1

0xe291,	// (0x00016eee) popup_note2_window_t2_ParamLimits

0xe291,	// (0x00016eee) popup_note2_window_t2

0xe2d6,	// (0x00016f33) popup_note2_window_t3_ParamLimits

0xe2d6,	// (0x00016f33) popup_note2_window_t3

0xe31b,	// (0x00016f78) popup_note2_window_t4_ParamLimits

0xe31b,	// (0x00016f78) popup_note2_window_t4

0x82d5,	// (0x00010f32) popup_note2_window_t5_ParamLimits

0x82d5,	// (0x00010f32) popup_note2_window_t5

0x0004,

0xfc99,	// (0x000188f6) popup_note2_window_t_ParamLimits

0xfc99,	// (0x000188f6) popup_note2_window_t

0xe34a,	// (0x00016fa7) popup_note2_image_window_g1_ParamLimits

0xe34a,	// (0x00016fa7) popup_note2_image_window_g1

0xe356,	// (0x00016fb3) popup_note2_image_window_g2_ParamLimits

0xe356,	// (0x00016fb3) popup_note2_image_window_g2

0x0001,

0xfca4,	// (0x00018901) popup_note2_image_window_g_ParamLimits

0xfca4,	// (0x00018901) popup_note2_image_window_g

0xe368,	// (0x00016fc5) popup_note2_image_window_t1_ParamLimits

0xe368,	// (0x00016fc5) popup_note2_image_window_t1

0xe380,	// (0x00016fdd) popup_note2_image_window_t2_ParamLimits

0xe380,	// (0x00016fdd) popup_note2_image_window_t2

0xe398,	// (0x00016ff5) popup_note2_image_window_t3_ParamLimits

0xe398,	// (0x00016ff5) popup_note2_image_window_t3

0x0002,

0xfca9,	// (0x00018906) popup_note2_image_window_t_ParamLimits

0xfca9,	// (0x00018906) popup_note2_image_window_t

0xb145,	// (0x00013da2) popup_note2_wait_window_g1_ParamLimits

0xb145,	// (0x00013da2) popup_note2_wait_window_g1

0xb151,	// (0x00013dae) popup_note2_wait_window_g2_ParamLimits

0xb151,	// (0x00013dae) popup_note2_wait_window_g2

0xb15d,	// (0x00013dba) popup_note2_wait_window_g3_ParamLimits

0xb15d,	// (0x00013dba) popup_note2_wait_window_g3

0x0002,

0xf87c,	// (0x000184d9) popup_note2_wait_window_g_ParamLimits

0xf87c,	// (0x000184d9) popup_note2_wait_window_g

0xe3b4,	// (0x00017011) popup_note2_wait_window_t1_ParamLimits

0xe3b4,	// (0x00017011) popup_note2_wait_window_t1

0xe3d2,	// (0x0001702f) popup_note2_wait_window_t2_ParamLimits

0xe3d2,	// (0x0001702f) popup_note2_wait_window_t2

0xe3f0,	// (0x0001704d) popup_note2_wait_window_t3_ParamLimits

0xe3f0,	// (0x0001704d) popup_note2_wait_window_t3

0xe402,	// (0x0001705f) popup_note2_wait_window_t4_ParamLimits

0xe402,	// (0x0001705f) popup_note2_wait_window_t4

0x0003,

0xfcb0,	// (0x0001890d) popup_note2_wait_window_t_ParamLimits

0xfcb0,	// (0x0001890d) popup_note2_wait_window_t

0xe414,	// (0x00017071) wait_bar2_pane_ParamLimits

0xe414,	// (0x00017071) wait_bar2_pane

0xe42c,	// (0x00017089) popup_snote2_single_text_window_g1_ParamLimits

0xe42c,	// (0x00017089) popup_snote2_single_text_window_g1

0xe454,	// (0x000170b1) popup_snote2_single_text_window_t1_ParamLimits

0xe454,	// (0x000170b1) popup_snote2_single_text_window_t1

0xe4a0,	// (0x000170fd) popup_snote2_single_text_window_t2_ParamLimits

0xe4a0,	// (0x000170fd) popup_snote2_single_text_window_t2

0xe4ec,	// (0x00017149) popup_snote2_single_text_window_t3_ParamLimits

0xe4ec,	// (0x00017149) popup_snote2_single_text_window_t3

0xe52d,	// (0x0001718a) popup_snote2_single_text_window_t4_ParamLimits

0xe52d,	// (0x0001718a) popup_snote2_single_text_window_t4

0xe563,	// (0x000171c0) popup_snote2_single_text_window_t5_ParamLimits

0xe563,	// (0x000171c0) popup_snote2_single_text_window_t5

0x0004,

0xfcb9,	// (0x00018916) popup_snote2_single_text_window_t_ParamLimits

0xfcb9,	// (0x00018916) popup_snote2_single_text_window_t

0xe58e,	// (0x000171eb) popup_snote2_single_graphic_window_g1_ParamLimits

0xe58e,	// (0x000171eb) popup_snote2_single_graphic_window_g1

0xe5b6,	// (0x00017213) popup_snote2_single_graphic_window_g2_ParamLimits

0xe5b6,	// (0x00017213) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc4,	// (0x00018921) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc4,	// (0x00018921) popup_snote2_single_graphic_window_g

0xe5de,	// (0x0001723b) popup_snote2_single_graphic_window_t1_ParamLimits

0xe5de,	// (0x0001723b) popup_snote2_single_graphic_window_t1

0xe62a,	// (0x00017287) popup_snote2_single_graphic_window_t2_ParamLimits

0xe62a,	// (0x00017287) popup_snote2_single_graphic_window_t2

0xe4ec,	// (0x00017149) popup_snote2_single_graphic_window_t3_ParamLimits

0xe4ec,	// (0x00017149) popup_snote2_single_graphic_window_t3

0xe52d,	// (0x0001718a) popup_snote2_single_graphic_window_t4_ParamLimits

0xe52d,	// (0x0001718a) popup_snote2_single_graphic_window_t4

0xe563,	// (0x000171c0) popup_snote2_single_graphic_window_t5_ParamLimits

0xe563,	// (0x000171c0) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc9,	// (0x00018926) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc9,	// (0x00018926) popup_snote2_single_graphic_window_t

0xcdce,	// (0x00015a2b) clock_nsta_pane_cp2_t1

0xcdce,	// (0x00015a2b) clock_nsta_pane_cp2_t2

0x0001,

0xfae4,	// (0x00018741) clock_nsta_pane_cp2_t

0x8dad,	// (0x00011a0a) form_field_data_wide_pane_g1_ParamLimits

0x8db9,	// (0x00011a16) form_field_data_wide_pane_g2_ParamLimits

0x8db9,	// (0x00011a16) form_field_data_wide_pane_g2

0x8dc5,	// (0x00011a22) form_field_data_wide_pane_g3_ParamLimits

0x8dc5,	// (0x00011a22) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x00018317) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x00018317) form_field_data_wide_pane_g

0xccd9,	// (0x00015936) grid_touch_3_pane_ParamLimits

0xccd9,	// (0x00015936) grid_touch_3_pane

0xe676,	// (0x000172d3) cell_touch_3_pane_ParamLimits

0xe676,	// (0x000172d3) cell_touch_3_pane

0xd3b2,	// (0x0001600f) cell_touch_3_pane_g1

0xd3b2,	// (0x0001600f) cell_touch_3_pane_g2

0x0001,

0xfb69,	// (0x000187c6) cell_touch_3_pane_g

0x8307,	// (0x00010f64) cont_query_data_pane

0x830f,	// (0x00010f6c) cont_query_data_pane_cp1

0xe6a5,	// (0x00017302) button_value_adjust_pane_cp7

0xe6ad,	// (0x0001730a) query_popup_pane_cp3

0x962d,	// (0x0001228a) bg_popup_sub_pane_cp22_ParamLimits

0x6907,	// (0x0000f564) navi_navi_volume_pane_cp2

0x6922,	// (0x0000f57f) popup_side_volume_key_window_g2

0x6931,	// (0x0000f58e) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x000183a9) popup_side_volume_key_window_g

0x694e,	// (0x0000f5ab) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x000183b0) popup_side_volume_key_window_t

0x9976,	// (0x000125d3) popup_side_volume_key_window_ParamLimits

0x89ab,	// (0x00011608) list_double_graphic_pane_g4_ParamLimits

0x89ab,	// (0x00011608) list_double_graphic_pane_g4

0xc12c,	// (0x00014d89) list_single_2heading_msg_pane_ParamLimits

0xc12c,	// (0x00014d89) list_single_2heading_msg_pane

0xe6dc,	// (0x00017339) list_single_2heading_msg_pane_g1_ParamLimits

0xe6dc,	// (0x00017339) list_single_2heading_msg_pane_g1

0x87da,	// (0x00011437) list_single_2heading_msg_pane_g2_ParamLimits

0x87da,	// (0x00011437) list_single_2heading_msg_pane_g2

0xe6e8,	// (0x00017345) list_single_2heading_msg_pane_g3_ParamLimits

0xe6e8,	// (0x00017345) list_single_2heading_msg_pane_g3

0xe6f4,	// (0x00017351) list_single_2heading_msg_pane_g4_ParamLimits

0xe6f4,	// (0x00017351) list_single_2heading_msg_pane_g4

0x0003,

0xfcd4,	// (0x00018931) list_single_2heading_msg_pane_g_ParamLimits

0xfcd4,	// (0x00018931) list_single_2heading_msg_pane_g

0xe70c,	// (0x00017369) list_single_2heading_msg_pane_t1_ParamLimits

0xe70c,	// (0x00017369) list_single_2heading_msg_pane_t1

0xe734,	// (0x00017391) list_single_2heading_msg_pane_t2_ParamLimits

0xe734,	// (0x00017391) list_single_2heading_msg_pane_t2

0xe768,	// (0x000173c5) list_single_2heading_msg_pane_t3_ParamLimits

0xe768,	// (0x000173c5) list_single_2heading_msg_pane_t3

0xe7a1,	// (0x000173fe) list_single_2heading_msg_pane_t4_ParamLimits

0xe7a1,	// (0x000173fe) list_single_2heading_msg_pane_t4

0x0003,

0xfcdd,	// (0x0001893a) list_single_2heading_msg_pane_t_ParamLimits

0xfcdd,	// (0x0001893a) list_single_2heading_msg_pane_t

0x7f0e,	// (0x00010b6b) title_pane_g4_ParamLimits

0x7f0e,	// (0x00010b6b) title_pane_g4

0x6715,	// (0x0000f372) title_pane_stacon_g3_ParamLimits

0x6715,	// (0x0000f372) title_pane_stacon_g3

0xe1b2,	// (0x00016e0f) list_single_2graphic_im_pane_g4_ParamLimits

0xe1b2,	// (0x00016e0f) list_single_2graphic_im_pane_g4

0xbb98,	// (0x000147f5) popup_side_volume_key_window_cp

0xc4a7,	// (0x00015104) main_idle_act2_pane_t1

0x6d34,	// (0x0000f991) toolbar_button_pane_g10

0x8790,	// (0x000113ed) popup_toolbar_window_cp1

0xcdbf,	// (0x00015a1c) clock_nsta_pane_cp_t1

0xcdbf,	// (0x00015a1c) clock_nsta_pane_cp_t2

0x0001,

0xfadf,	// (0x0001873c) clock_nsta_pane_cp_t

0x6907,	// (0x0000f564) navi_navi_volume_pane_cp2_ParamLimits

0x6916,	// (0x0000f573) popup_side_volume_key_window_g1_ParamLimits

0x6922,	// (0x0000f57f) popup_side_volume_key_window_g2_ParamLimits

0x6931,	// (0x0000f58e) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x000183a9) popup_side_volume_key_window_g_ParamLimits

0x71f1,	// (0x0000fe4e) fep_hwr_aid_pane

0x7298,	// (0x0000fef5) bg_fep_hwr_top_pane_g4_ParamLimits

0xd422,	// (0x0001607f) fep_hwr_top_pane_g1_ParamLimits

0xd434,	// (0x00016091) fep_hwr_top_pane_g2_ParamLimits

0x72b8,	// (0x0000ff15) fep_hwr_top_pane_g3_ParamLimits

0xfb34,	// (0x00018791) fep_hwr_top_pane_g_ParamLimits

0x72cd,	// (0x0000ff2a) fep_hwr_top_text_pane_ParamLimits

0xb959,	// (0x000145b6) aid_touch_tab_arrow_arrow_2

0xb962,	// (0x000145bf) aid_touch_tab_arrow_left_2

0x7205,	// (0x0000fe62) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x723c,	// (0x0000fe99) fep_hwr_prediction_pane

0xd5a9,	// (0x00016206) fep_vkb_prediction_pane

0xd6ad,	// (0x0001630a) fep_vkb_side_pane_g3_ParamLimits

0xd6ad,	// (0x0001630a) fep_vkb_side_pane_g3

0x7448,	// (0x000100a5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x74b4,	// (0x00010111) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x74c1,	// (0x0001011e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe3,	// (0x00018840) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x75f0,	// (0x0001024d) fep_hwr_prediction_pane_g1

0x75fa,	// (0x00010257) fep_hwr_prediction_pane_g2

0xd41a,	// (0x00016077) fep_hwr_prediction_pane_g3

0x7602,	// (0x0001025f) fep_hwr_prediction_pane_g4

0x0003,

0xfce6,	// (0x00018943) fep_hwr_prediction_pane_g

0xe7c6,	// (0x00017423) fep_vkb_prediction_pane_g1

0xe7d0,	// (0x0001742d) fep_vkb_prediction_pane_g2

0xe7d8,	// (0x00017435) fep_vkb_prediction_pane_g3

0xe7e0,	// (0x0001743d) fep_vkb_prediction_pane_g4

0x0003,

0xfcef,	// (0x0001894c) fep_vkb_prediction_pane_g

0x7020,	// (0x0000fc7d) slider_set_pane_g3

0x7034,	// (0x0000fc91) slider_set_pane_g4

0x704c,	// (0x0000fca9) slider_set_pane_g5

0x7020,	// (0x0000fc7d) slider_set_pane_g6

0x7062,	// (0x0000fcbf) slider_set_pane_g7

0xc029,	// (0x00014c86) slider_form_pane_g3

0xc032,	// (0x00014c8f) slider_form_pane_g4

0xc03a,	// (0x00014c97) slider_form_pane_g5

0xc029,	// (0x00014c86) slider_form_pane_g6

0xc042,	// (0x00014c9f) slider_form_pane_g7

0xc77b,	// (0x000153d8) slider_set_pane_vc_g3

0xc784,	// (0x000153e1) slider_set_pane_vc_g4

0xc78d,	// (0x000153ea) slider_set_pane_vc_g5

0xc77b,	// (0x000153d8) slider_set_pane_vc_g6

0xc796,	// (0x000153f3) slider_set_pane_vc_g7

0xc77b,	// (0x000153d8) slider_form_pane_vc_g1

0xc784,	// (0x000153e1) slider_form_pane_vc_g2

0xc78d,	// (0x000153ea) slider_form_pane_vc_g3

0xc77b,	// (0x000153d8) slider_form_pane_vc_g4

0xcaf7,	// (0x00015754) slider_form_pane_vc_g5

0x0004,

0xfac5,	// (0x00018722) slider_form_pane_vc_g

0x7ec6,	// (0x00010b23) main_idle_act3_pane

0xe7e8,	// (0x00017445) ai3_links_pane

0xe7f1,	// (0x0001744e) popup_ai3_data_window_ParamLimits

0xe7f1,	// (0x0001744e) popup_ai3_data_window

0x7ec6,	// (0x00010b23) grid_ai3_links_pane

0xe809,	// (0x00017466) cell_ai3_links_pane_ParamLimits

0xe809,	// (0x00017466) cell_ai3_links_pane

0xe821,	// (0x0001747e) bg_popup_sub_pane_cp11

0xe82e,	// (0x0001748b) cell_ai3_links_pane_g1

0x7ec6,	// (0x00010b23) bg_popup_sub_pane_cp12

0xe853,	// (0x000174b0) heading_ai3_data_pane

0xe85b,	// (0x000174b8) list_ai3_gene_pane

0xe867,	// (0x000174c4) popup_ai3_data_window_g1

0xe86f,	// (0x000174cc) heading_ai3_data_pane_g1

0xe877,	// (0x000174d4) heading_ai3_data_pane_t1

0xe885,	// (0x000174e2) list_double_ai3_gene_pane_ParamLimits

0xe885,	// (0x000174e2) list_double_ai3_gene_pane

0xe892,	// (0x000174ef) list_single_ai3_gene_pane_ParamLimits

0xe892,	// (0x000174ef) list_single_ai3_gene_pane

0xd377,	// (0x00015fd4) list_highlight_pane_cp7_ParamLimits

0xd377,	// (0x00015fd4) list_highlight_pane_cp7

0xe89f,	// (0x000174fc) list_single_a13_gene_pane_t1_ParamLimits

0xe89f,	// (0x000174fc) list_single_a13_gene_pane_t1

0xe8b6,	// (0x00017513) list_single_ai3_gene_pane_g1

0xe8bf,	// (0x0001751c) list_single_ai3_gene_pane_g2

0x0001,

0xfcf8,	// (0x00018955) list_single_ai3_gene_pane_g

0xe8c7,	// (0x00017524) list_double_ai3_gene_pane_g1_ParamLimits

0xe8c7,	// (0x00017524) list_double_ai3_gene_pane_g1

0xe8d3,	// (0x00017530) list_double_ai3_gene_pane_t1_ParamLimits

0xe8d3,	// (0x00017530) list_double_ai3_gene_pane_t1

0xe8ef,	// (0x0001754c) list_double_ai3_gene_pane_t2_ParamLimits

0xe8ef,	// (0x0001754c) list_double_ai3_gene_pane_t2

0xe904,	// (0x00017561) list_double_ai3_gene_pane_t3_ParamLimits

0xe904,	// (0x00017561) list_double_ai3_gene_pane_t3

0x0002,

0xfcfd,	// (0x0001895a) list_double_ai3_gene_pane_t_ParamLimits

0xfcfd,	// (0x0001895a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe6be,	// (0x0001731b) aid_size_min_col_2

0xe6c8,	// (0x00017325) aid_size_min_msg_ParamLimits

0xe6c8,	// (0x00017325) aid_size_min_msg

0xd7ad,	// (0x0001640a) fep_vkb_top_text_pane_g2_ParamLimits

0xd7ad,	// (0x0001640a) fep_vkb_top_text_pane_g2

0x0001,

0xfb64,	// (0x000187c1) fep_vkb_top_text_pane_g_ParamLimits

0xfb64,	// (0x000187c1) fep_vkb_top_text_pane_g

0x7ec6,	// (0x00010b23) main_hc_apps_shell_pane

0xe921,	// (0x0001757e) grid_hc_apps_pane_ParamLimits

0xe921,	// (0x0001757e) grid_hc_apps_pane

0xe930,	// (0x0001758d) list_hc_apps_pane

0xe938,	// (0x00017595) scroll_pane_cp37_ParamLimits

0xe938,	// (0x00017595) scroll_pane_cp37

0xe944,	// (0x000175a1) cell_hc_apps_pane_ParamLimits

0xe944,	// (0x000175a1) cell_hc_apps_pane

0xe9f4,	// (0x00017651) cell_hc_apps_pane_g1_ParamLimits

0xe9f4,	// (0x00017651) cell_hc_apps_pane_g1

0xea25,	// (0x00017682) cell_hc_apps_pane_g2_ParamLimits

0xea25,	// (0x00017682) cell_hc_apps_pane_g2

0xea41,	// (0x0001769e) cell_hc_apps_pane_g3_ParamLimits

0xea41,	// (0x0001769e) cell_hc_apps_pane_g3

0x0002,

0xfd04,	// (0x00018961) cell_hc_apps_pane_g_ParamLimits

0xfd04,	// (0x00018961) cell_hc_apps_pane_g

0xea63,	// (0x000176c0) cell_hc_apps_pane_t1_ParamLimits

0xea63,	// (0x000176c0) cell_hc_apps_pane_t1

0x825d,	// (0x00010eba) grid_highlight_pane_cp10_ParamLimits

0x825d,	// (0x00010eba) grid_highlight_pane_cp10

0xeaa3,	// (0x00017700) list_single_hc_apps_pane_ParamLimits

0xeaa3,	// (0x00017700) list_single_hc_apps_pane

0xeb16,	// (0x00017773) list_single_hc_apps_pane_g1

0xeb2f,	// (0x0001778c) list_single_hc_apps_pane_g2

0x0001,

0xfd0b,	// (0x00018968) list_single_hc_apps_pane_g

0xeb48,	// (0x000177a5) list_single_hc_apps_pane_g2_copy1

0xeb64,	// (0x000177c1) list_single_hc_apps_pane_t1

0x7fba,	// (0x00010c17) bg_set_opt_pane_cp_ParamLimits

0x6640,	// (0x0000f29d) setting_slider_pane_t1_ParamLimits

0x6659,	// (0x0000f2b6) setting_slider_pane_t2_ParamLimits

0x6672,	// (0x0000f2cf) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x000181ff) setting_slider_pane_t_ParamLimits

0x6689,	// (0x0000f2e6) slider_set_pane_ParamLimits

0x6ba6,	// (0x0000f803) control_pane_g5_ParamLimits

0x6ba6,	// (0x0000f803) control_pane_g5

0xbe86,	// (0x00014ae3) slider_set_pane_g1_ParamLimits

0x7014,	// (0x0000fc71) slider_set_pane_g2_ParamLimits

0x7020,	// (0x0000fc7d) slider_set_pane_g3_ParamLimits

0x7034,	// (0x0000fc91) slider_set_pane_g4_ParamLimits

0x704c,	// (0x0000fca9) slider_set_pane_g5_ParamLimits

0x7020,	// (0x0000fc7d) slider_set_pane_g6_ParamLimits

0x7062,	// (0x0000fcbf) slider_set_pane_g7_ParamLimits

0xf998,	// (0x000185f5) slider_set_pane_g_ParamLimits

0x9a57,	// (0x000126b4) navi_icon_text_pane_ParamLimits

0xa526,	// (0x00013183) aid_fill_nsta_2_ParamLimits

0xa565,	// (0x000131c2) aid_touch_tab_arrow_left_ParamLimits

0xa574,	// (0x000131d1) aid_touch_tab_arrow_right_ParamLimits

0xa5e1,	// (0x0001323e) clock_nsta_pane_ParamLimits

0xb935,	// (0x00014592) navi_icon_pane_g1_ParamLimits

0xb944,	// (0x000145a1) navi_text_pane_t1_ParamLimits

0xced1,	// (0x00015b2e) navi_icon_text_pane_g1_ParamLimits

0xcee0,	// (0x00015b3d) navi_icon_text_pane_t1_ParamLimits

0xeb16,	// (0x00017773) list_single_hc_apps_pane_g1_ParamLimits

0xeb2f,	// (0x0001778c) list_single_hc_apps_pane_g2_ParamLimits

0xfd0b,	// (0x00018968) list_single_hc_apps_pane_g_ParamLimits

0xeb48,	// (0x000177a5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xeb64,	// (0x000177c1) list_single_hc_apps_pane_t1_ParamLimits

0x655a,	// (0x0000f1b7) popup_toolbar2_fixed_window_ParamLimits

0x655a,	// (0x0000f1b7) popup_toolbar2_fixed_window

0xa43e,	// (0x0001309b) popup_toolbar2_float_window

0x7ec6,	// (0x00010b23) bg_popup_sub_pane_cp27

0xeb92,	// (0x000177ef) grid_toolbar2_float_pane

0x7ec6,	// (0x00010b23) bg_popup_sub_pane_cp26

0xeb92,	// (0x000177ef) grid_toolbar2_fixed_pane

0xeb9a,	// (0x000177f7) cell_toolbar2_fixed_pane_ParamLimits

0xeb9a,	// (0x000177f7) cell_toolbar2_fixed_pane

0xebab,	// (0x00017808) cell_toolbar2_fixed_pane_g1

0xebb4,	// (0x00017811) toolbar2_fixed_button_pane

0xaa11,	// (0x0001366e) toolbar2_fixed_button_pane_g1

0xaa21,	// (0x0001367e) toolbar2_fixed_button_pane_g2

0xaa19,	// (0x00013676) toolbar2_fixed_button_pane_g3

0xaa31,	// (0x0001368e) toolbar2_fixed_button_pane_g4

0xaa29,	// (0x00013686) toolbar2_fixed_button_pane_g5

0xaa39,	// (0x00013696) toolbar2_fixed_button_pane_g6

0xaa41,	// (0x0001369e) toolbar2_fixed_button_pane_g7

0xaa51,	// (0x000136ae) toolbar2_fixed_button_pane_g8

0xaa49,	// (0x000136a6) toolbar2_fixed_button_pane_g9

0x0008,

0xf89a,	// (0x000184f7) toolbar2_fixed_button_pane_g

0xebbc,	// (0x00017819) cell_toolbar2_float_pane_ParamLimits

0xebbc,	// (0x00017819) cell_toolbar2_float_pane

0xebcd,	// (0x0001782a) cell_toolbar2_float_pane_g1

0xebb4,	// (0x00017811) toolbar2_fixed_button_pane_cp

0xd502,	// (0x0001615f) fep_vkb_accented_list_pane_ParamLimits

0xd502,	// (0x0001615f) fep_vkb_accented_list_pane

0x7428,	// (0x00010085) bg_popup_fep_shadow_pane_g9

0x9bd9,	// (0x00012836) bg_popup_fep_shadow_pane_cp3

0x906d,	// (0x00011cca) list_accented_list_pane

0xebd6,	// (0x00017833) list_single_accented_list_pane_ParamLimits

0xebd6,	// (0x00017833) list_single_accented_list_pane

0x9bd9,	// (0x00012836) list_highlight_pane_cp10

0xebe7,	// (0x00017844) list_single_accented_list_pane_t1

0xa38e,	// (0x00012feb) popup_slider_window_ParamLimits

0xa38e,	// (0x00012feb) popup_slider_window

0xe6b5,	// (0x00017312) aid_indentation_list_msg

0xeca1,	// (0x000178fe) bg_popup_window_pane_cp19

0xed0b,	// (0x00017968) popup_slider_window_g1

0xed27,	// (0x00017984) popup_slider_window_g2

0xed43,	// (0x000179a0) popup_slider_window_g3

0x0005,

0xfd10,	// (0x0001896d) popup_slider_window_g

0xed9f,	// (0x000179fc) popup_slider_window_t1

0xee13,	// (0x00017a70) small_volume_slider_vertical_pane

0xd3b2,	// (0x0001600f) small_volume_slider_vertical_pane_g1

0xd3b2,	// (0x0001600f) small_volume_slider_vertical_pane_g2

0xee2f,	// (0x00017a8c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd22,	// (0x0001897f) small_volume_slider_vertical_pane_g

0x6320,	// (0x0000ef7d) area_side_right_pane_ParamLimits

0x6320,	// (0x0000ef7d) area_side_right_pane

0x760a,	// (0x00010267) aid_size_side_button_ParamLimits

0x760a,	// (0x00010267) aid_size_side_button

0x761e,	// (0x0001027b) grid_sctrl_middle_pane_ParamLimits

0x761e,	// (0x0001027b) grid_sctrl_middle_pane

0x763e,	// (0x0001029b) sctrl_sk_bottom_pane

0x764f,	// (0x000102ac) sctrl_sk_top_pane

0x7661,	// (0x000102be) aid_touch_sctrl_top

0x766e,	// (0x000102cb) bg_sctrl_sk_pane_ParamLimits

0x766e,	// (0x000102cb) bg_sctrl_sk_pane

0x767c,	// (0x000102d9) sctrl_sk_top_pane_g1

0x7689,	// (0x000102e6) sctrl_sk_top_pane_t1

0x7661,	// (0x000102be) aid_touch_sctrl_bottom

0x766e,	// (0x000102cb) bg_sctrl_sk_pane_cp_ParamLimits

0x766e,	// (0x000102cb) bg_sctrl_sk_pane_cp

0x76a4,	// (0x00010301) sctrl_sk_bottom_pane_g1

0x7689,	// (0x000102e6) sctrl_sk_bottom_pane_t1

0x76ad,	// (0x0001030a) cell_sctrl_middle_pane_ParamLimits

0x76ad,	// (0x0001030a) cell_sctrl_middle_pane

0x76c8,	// (0x00010325) aid_touch_sctrl_middle_ParamLimits

0x76c8,	// (0x00010325) aid_touch_sctrl_middle

0x76da,	// (0x00010337) bg_sctrl_middle_pane_ParamLimits

0x76da,	// (0x00010337) bg_sctrl_middle_pane

0x7448,	// (0x000100a5) cell_sctrl_middle_pane_g1_ParamLimits

0x7448,	// (0x000100a5) cell_sctrl_middle_pane_g1

0x76e8,	// (0x00010345) cell_sctrl_middle_pane_g2_ParamLimits

0x76e8,	// (0x00010345) cell_sctrl_middle_pane_g2

0x0001,

0xfd2e,	// (0x0001898b) cell_sctrl_middle_pane_g_ParamLimits

0xfd2e,	// (0x0001898b) cell_sctrl_middle_pane_g

0xaa11,	// (0x0001366e) bg_sctrl_middle_pane_g1

0xaa19,	// (0x00013676) bg_sctrl_middle_pane_g2

0xaa21,	// (0x0001367e) bg_sctrl_middle_pane_g3

0xaa29,	// (0x00013686) bg_sctrl_middle_pane_g4

0xaa31,	// (0x0001368e) bg_sctrl_middle_pane_g5

0xaa39,	// (0x00013696) bg_sctrl_middle_pane_g6

0xaa41,	// (0x0001369e) bg_sctrl_middle_pane_g7

0xaa49,	// (0x000136a6) bg_sctrl_middle_pane_g8

0x0007,

0xfd33,	// (0x00018990) bg_sctrl_middle_pane_g

0xaa51,	// (0x000136ae) bg_sctrl_middle_pane_g8_copy1

0xaa11,	// (0x0001366e) bg_sctrl_sk_pane_g1

0xaa21,	// (0x0001367e) bg_sctrl_sk_pane_g2

0xaa19,	// (0x00013676) bg_sctrl_sk_pane_g3

0x0008,

0xf89a,	// (0x000184f7) bg_sctrl_sk_pane_g

0x8756,	// (0x000113b3) aid_size_touch_scroll_bar

0xaa31,	// (0x0001368e) bg_sctrl_sk_pane_g4

0xaa29,	// (0x00013686) bg_sctrl_sk_pane_g5

0xaa39,	// (0x00013696) bg_sctrl_sk_pane_g6

0xaa41,	// (0x0001369e) bg_sctrl_sk_pane_g7

0xaa51,	// (0x000136ae) bg_sctrl_sk_pane_g8

0xaa49,	// (0x000136a6) bg_sctrl_sk_pane_g9

0xa007,	// (0x00012c64) popup_fep_china_hwr2_fs_candidate_window

0xa011,	// (0x00012c6e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa011,	// (0x00012c6e) popup_fep_china_hwr2_fs_control_window

0x7448,	// (0x000100a5) sctrl_sk_top_pane_g2

0x0001,

0xfd29,	// (0x00018986) sctrl_sk_top_pane_g

0xee38,	// (0x00017a95) aid_fep_china_hwr2_fs_cell_ParamLimits

0xee38,	// (0x00017a95) aid_fep_china_hwr2_fs_cell

0xee4a,	// (0x00017aa7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xee4a,	// (0x00017aa7) bg_popup_fep_shadow_pane_cp4

0xee61,	// (0x00017abe) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xee61,	// (0x00017abe) bg_popup_fep_shadow_pane_cp5

0xee73,	// (0x00017ad0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xee73,	// (0x00017ad0) popup_fep_china_hwr2_fs_control_bar_grid

0xee83,	// (0x00017ae0) popup_fep_china_hwr2_fs_control_funtion_grid

0xee8b,	// (0x00017ae8) aid_fep_china_hwr2_fs_candi_cell

0x7ec6,	// (0x00010b23) bg_popup_fep_shadow_pane_cp6

0xee95,	// (0x00017af2) popup_fep_china_hwr2_fs_candidate_grid

0xee9f,	// (0x00017afc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xee9f,	// (0x00017afc) cell_fep_china_hwr2_fs_funtion_grid

0xd3b2,	// (0x0001600f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xeeb7,	// (0x00017b14) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xeeb7,	// (0x00017b14) cell_fep_china_hwr2_fs_funtion_grid_g1

0xeec5,	// (0x00017b22) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xeec5,	// (0x00017b22) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd44,	// (0x000189a1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd44,	// (0x000189a1) cell_fep_china_hwr2_fs_funtion_grid_g

0xeedb,	// (0x00017b38) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xeedb,	// (0x00017b38) cell_fep_china_hwr2_fs_funtion_grid_t1

0xeef0,	// (0x00017b4d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xeef0,	// (0x00017b4d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd49,	// (0x000189a6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd49,	// (0x000189a6) cell_fep_china_hwr2_fs_funtion_grid_t

0xef0c,	// (0x00017b69) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xef14,	// (0x00017b71) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xef1c,	// (0x00017b79) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd4e,	// (0x000189ab) popup_fep_china_hwr2_fs_control_bar_grid_g

0xef24,	// (0x00017b81) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xef24,	// (0x00017b81) cell_fep_china_hwr2_fs_candidate_grid

0xef3d,	// (0x00017b9a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xef45,	// (0x00017ba2) popup_fep_china_hwr2_fs_candidate_grid_g21

0xd3b2,	// (0x0001600f) cell_fep_china_hwr2_fs_candidate_grid_g1

0xd3b2,	// (0x0001600f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb69,	// (0x000187c6) cell_fep_china_hwr2_fs_candidate_grid_g

0xef4d,	// (0x00017baa) cell_fep_china_hwr2_fs_candidate_grid_t1

0xa5ee,	// (0x0001324b) clock_nsta_pane_cp_24_ParamLimits

0xa5ee,	// (0x0001324b) clock_nsta_pane_cp_24

0xa66c,	// (0x000132c9) indicator_nsta_pane_cp_24_ParamLimits

0xa66c,	// (0x000132c9) indicator_nsta_pane_cp_24

0xb7b1,	// (0x0001440e) heading_pane_g1

0x0001,

0xf8ff,	// (0x0001855c) heading_pane_g

0xc2ee,	// (0x00014f4b) grid_sct_catagory_button_pane

0xc320,	// (0x00014f7d) scroll_pane_cp5_ParamLimits

0xcf25,	// (0x00015b82) button_value_adjust_pane_cp5_ParamLimits

0xcf25,	// (0x00015b82) button_value_adjust_pane_cp5

0xd01d,	// (0x00015c7a) form2_midp_time_pane_ParamLimits

0xef5b,	// (0x00017bb8) cell_sct_catagory_button_pane_ParamLimits

0xef5b,	// (0x00017bb8) cell_sct_catagory_button_pane

0xd377,	// (0x00015fd4) bg_button_pane_cp01_ParamLimits

0xd377,	// (0x00015fd4) bg_button_pane_cp01

0xd3b2,	// (0x0001600f) cell_sct_catagory_button_pane_g1

0xa3cd,	// (0x0001302a) popup_tb_extension_window

0xef6d,	// (0x00017bca) aid_size_cell_ext_ParamLimits

0xef6d,	// (0x00017bca) aid_size_cell_ext

0x825d,	// (0x00010eba) bg_tb_trans_pane_cp1_ParamLimits

0x825d,	// (0x00010eba) bg_tb_trans_pane_cp1

0xef8d,	// (0x00017bea) grid_tb_ext_pane_ParamLimits

0xef8d,	// (0x00017bea) grid_tb_ext_pane

0xefbf,	// (0x00017c1c) cell_tb_ext_pane_ParamLimits

0xefbf,	// (0x00017c1c) cell_tb_ext_pane

0xefd6,	// (0x00017c33) cell_tb_ext_pane_g1_ParamLimits

0xefd6,	// (0x00017c33) cell_tb_ext_pane_g1

0xeff3,	// (0x00017c50) cell_tb_ext_pane_t1

0x825d,	// (0x00010eba) list_highlight_pane_cp11_ParamLimits

0x825d,	// (0x00010eba) list_highlight_pane_cp11

0x6579,	// (0x0000f1d6) popup_uni_indicator_window_ParamLimits

0x6579,	// (0x0000f1d6) popup_uni_indicator_window

0x8d93,	// (0x000119f0) bg_popup_sub_pane_cp14

0xf00e,	// (0x00017c6b) list_uniindi_pane

0xf01a,	// (0x00017c77) uniindi_top_pane

0x825d,	// (0x00010eba) bg_uniindi_top_pane

0xf039,	// (0x00017c96) uniindi_top_pane_g1

0xf04f,	// (0x00017cac) uniindi_top_pane_g2

0x0003,

0xfd55,	// (0x000189b2) uniindi_top_pane_g

0xf079,	// (0x00017cd6) uniindi_top_pane_t1

0xf0a3,	// (0x00017d00) list_single_uniindi_pane_ParamLimits

0xf0a3,	// (0x00017d00) list_single_uniindi_pane

0xd3b2,	// (0x0001600f) bg_uniindi_top_pane_g1

0xf0b5,	// (0x00017d12) list_single_uniindi_pane_g1

0xf0c8,	// (0x00017d25) list_single_uniindi_pane_t1

0x63fd,	// (0x0000f05a) control_bg_pane

0xf0ed,	// (0x00017d4a) bg_sctrl_sk_pane_cp1

0xf0f6,	// (0x00017d53) bg_sctrl_sk_pane_cp2

0xf0ff,	// (0x00017d5c) control_bg_pane_g1

0xf108,	// (0x00017d65) control_bg_pane_g2

0x0001,

0xfd5e,	// (0x000189bb) control_bg_pane_g

0xcd83,	// (0x000159e0) cell_indicator_nsta_pane_g1_ParamLimits

0xcd91,	// (0x000159ee) cell_indicator_nsta_pane_g2_ParamLimits

0xfada,	// (0x00018737) cell_indicator_nsta_pane_g_ParamLimits

0xd0a1,	// (0x00015cfe) form2_midp_time_pane_t1_ParamLimits

0x8598,	// (0x000111f5) main_idle_act4_pane_ParamLimits

0x8598,	// (0x000111f5) main_idle_act4_pane

0xa3cd,	// (0x0001302a) popup_tb_extension_window_ParamLimits

0xefaf,	// (0x00017c0c) tb_ext_find_pane_ParamLimits

0xefaf,	// (0x00017c0c) tb_ext_find_pane

0xf111,	// (0x00017d6e) ai_gene_pane_1_cp1

0x9d22,	// (0x0001297f) ai_gene_pane_2_cp1

0xf119,	// (0x00017d76) list_single_idle_plugin_calendar_pane

0xf122,	// (0x00017d7f) list_single_idle_plugin_notification_pane

0xf12b,	// (0x00017d88) list_single_idle_plugin_player_pane

0xf134,	// (0x00017d91) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf134,	// (0x00017d91) list_single_idle_plugin_shortcut_pane

0xf156,	// (0x00017db3) main_idle_act4_pane_t1

0xf168,	// (0x00017dc5) main_idle_act4_pane_t2

0x0001,

0xfd63,	// (0x000189c0) main_idle_act4_pane_t

0xf17a,	// (0x00017dd7) middle_sk_idle_act4_pane_ParamLimits

0xf17a,	// (0x00017dd7) middle_sk_idle_act4_pane

0xf190,	// (0x00017ded) popup_clock_digital_analogue_window_cp2

0xf1aa,	// (0x00017e07) shortcut_wheel_idle_act4_pane_ParamLimits

0xf1aa,	// (0x00017e07) shortcut_wheel_idle_act4_pane

0xd3b2,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g1

0xd3b2,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g2

0xd3b2,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g3

0xd3b2,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g4

0xd3b2,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g5

0xf1be,	// (0x00017e1b) shortcut_wheel_idle_act4_pane_g6

0xf1c6,	// (0x00017e23) shortcut_wheel_idle_act4_pane_g7

0xf1ce,	// (0x00017e2b) shortcut_wheel_idle_act4_pane_g8

0xf1d6,	// (0x00017e33) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd68,	// (0x000189c5) shortcut_wheel_idle_act4_pane_g

0xd659,	// (0x000162b6) middle_sk_idle_act4_pane_g1_ParamLimits

0xd659,	// (0x000162b6) middle_sk_idle_act4_pane_g1

0xf23a,	// (0x00017e97) middle_sk_idle_act4_pane_g2_ParamLimits

0xf23a,	// (0x00017e97) middle_sk_idle_act4_pane_g2

0x0001,

0xfd8b,	// (0x000189e8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd8b,	// (0x000189e8) middle_sk_idle_act4_pane_g

0xf246,	// (0x00017ea3) middle_sk_idle_act4_pane_t1_ParamLimits

0xf246,	// (0x00017ea3) middle_sk_idle_act4_pane_t1

0xf263,	// (0x00017ec0) grid_ai_shortcut_pane_ParamLimits

0xf263,	// (0x00017ec0) grid_ai_shortcut_pane

0xf27c,	// (0x00017ed9) list_highlight_pane_cp16_ParamLimits

0xf27c,	// (0x00017ed9) list_highlight_pane_cp16

0xf289,	// (0x00017ee6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf289,	// (0x00017ee6) list_single_idle_plugin_shortcut_pane_g1

0xf295,	// (0x00017ef2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf295,	// (0x00017ef2) list_single_idle_plugin_shortcut_pane_g2

0xf2ad,	// (0x00017f0a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf2ad,	// (0x00017f0a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd90,	// (0x000189ed) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd90,	// (0x000189ed) list_single_idle_plugin_shortcut_pane_g

0xf2c0,	// (0x00017f1d) cell_ai_shortcut_pane_ParamLimits

0xf2c0,	// (0x00017f1d) cell_ai_shortcut_pane

0xf2e1,	// (0x00017f3e) cell_ai_shortcut_pane_g1_ParamLimits

0xf2e1,	// (0x00017f3e) cell_ai_shortcut_pane_g1

0xf111,	// (0x00017d6e) ai_gene_pane_1_cp2

0xf303,	// (0x00017f60) ai_gene_pane_2_cp2

0xf30b,	// (0x00017f68) list_highlight_pane_cp15

0xf314,	// (0x00017f71) list_single_idle_plugin_calendar_pane_g1

0xf30b,	// (0x00017f68) list_highlight_pane_cp17

0xf31c,	// (0x00017f79) list_single_idle_plugin_calendar_pane_g1_copy1

0xf324,	// (0x00017f81) list_single_idle_plugin_player_pane_g1

0xc547,	// (0x000151a4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd97,	// (0x000189f4) list_single_idle_plugin_player_pane_g

0xf32c,	// (0x00017f89) list_single_idle_plugin_player_pane_t1

0xf33a,	// (0x00017f97) list_single_idle_plugin_player_pane_t2

0xf348,	// (0x00017fa5) list_single_idle_plugin_player_pane_t3

0xf356,	// (0x00017fb3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9c,	// (0x000189f9) list_single_idle_plugin_player_pane_t

0xf364,	// (0x00017fc1) wait_bar_pane_cp15

0xf36c,	// (0x00017fc9) grid_ai_notification_pane

0xc547,	// (0x000151a4) list_single_idle_plugin_notification_pane_g1

0xf375,	// (0x00017fd2) cell_ai_notification_pane_ParamLimits

0xf375,	// (0x00017fd2) cell_ai_notification_pane

0xf382,	// (0x00017fdf) cell_ai_notification_pane_g1

0xf38a,	// (0x00017fe7) cell_ai_notification_pane_t1

0xf398,	// (0x00017ff5) tb_ext_find_button_pane

0xf3a0,	// (0x00017ffd) tb_ext_find_pane_g1

0xf3a8,	// (0x00018005) tb_ext_find_pane_t1

0x956c,	// (0x000121c9) tb_ext_find_button_pane_g1

0xf3b6,	// (0x00018013) tb_ext_find_button_pane_g2

0x0001,

0xfda5,	// (0x00018a02) tb_ext_find_button_pane_g

0xf156,	// (0x00017db3) main_idle_act4_pane_t1_ParamLimits

0xf168,	// (0x00017dc5) main_idle_act4_pane_t2_ParamLimits

0xfd63,	// (0x000189c0) main_idle_act4_pane_t_ParamLimits

0xf190,	// (0x00017ded) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf19e,	// (0x00017dfb) sat_plugin_idle_act4_pane_ParamLimits

0xf19e,	// (0x00017dfb) sat_plugin_idle_act4_pane

0xf3bf,	// (0x0001801c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf3bf,	// (0x0001801c) sat_plugin_idle_act4_pane_t1

0xf3d2,	// (0x0001802f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf3d2,	// (0x0001802f) sat_plugin_idle_act4_pane_t2

0xf3e5,	// (0x00018042) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf3e5,	// (0x00018042) sat_plugin_idle_act4_pane_t3

0xf3f8,	// (0x00018055) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf3f8,	// (0x00018055) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdaa,	// (0x00018a07) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdaa,	// (0x00018a07) sat_plugin_idle_act4_pane_t

0x64c2,	// (0x0000f11f) popup_battery_window_ParamLimits

0x64c2,	// (0x0000f11f) popup_battery_window

0x825d,	// (0x00010eba) bg_popup_sub_pane_cp25_ParamLimits

0x825d,	// (0x00010eba) bg_popup_sub_pane_cp25

0xf40b,	// (0x00018068) popup_battery_window_g1_ParamLimits

0xf40b,	// (0x00018068) popup_battery_window_g1

0xf417,	// (0x00018074) popup_battery_window_t1_ParamLimits

0xf417,	// (0x00018074) popup_battery_window_t1

0xf429,	// (0x00018086) popup_battery_window_t2_ParamLimits

0xf429,	// (0x00018086) popup_battery_window_t2

0x0001,

0xfdb3,	// (0x00018a10) popup_battery_window_t_ParamLimits

0xfdb3,	// (0x00018a10) popup_battery_window_t

0x9bed,	// (0x0001284a) midp_canvas_pane_ParamLimits

0x9c64,	// (0x000128c1) midp_keypad_pane_ParamLimits

0x9c64,	// (0x000128c1) midp_keypad_pane

0x9f5f,	// (0x00012bbc) main_midp_pane_ParamLimits

0xcddd,	// (0x00015a3a) signal_pane_g2_cp_ParamLimits

0xf446,	// (0x000180a3) aid_size_cell_midp_keypad_ParamLimits

0xf446,	// (0x000180a3) aid_size_cell_midp_keypad

0xf460,	// (0x000180bd) midp_keyp_game_grid_pane_ParamLimits

0xf460,	// (0x000180bd) midp_keyp_game_grid_pane

0xf480,	// (0x000180dd) midp_keyp_rocker_pane_ParamLimits

0xf480,	// (0x000180dd) midp_keyp_rocker_pane

0xf4b9,	// (0x00018116) midp_keyp_sk_left_pane_ParamLimits

0xf4b9,	// (0x00018116) midp_keyp_sk_left_pane

0xf513,	// (0x00018170) midp_keyp_sk_right_pane_ParamLimits

0xf513,	// (0x00018170) midp_keyp_sk_right_pane

0x7ec6,	// (0x00010b23) bg_button_pane_cp03

0xf56d,	// (0x000181ca) midp_keyp_sk_left_pane_g1

0x7ec6,	// (0x00010b23) bg_button_pane_cp04

0xf56d,	// (0x000181ca) midp_keyp_sk_right_pane_g1

0xd3b2,	// (0x0001600f) midp_keyp_rocker_pane_g1

0xf576,	// (0x000181d3) keyp_game_cell_pane_ParamLimits

0xf576,	// (0x000181d3) keyp_game_cell_pane

0x7ec6,	// (0x00010b23) bg_button_pane_cp02

0xf589,	// (0x000181e6) keyp_game_cell_pane_g1

0x64f8,	// (0x0000f155) popup_fep_vkb2_window_ParamLimits

0x64f8,	// (0x0000f155) popup_fep_vkb2_window

0x770a,	// (0x00010367) aid_size_cell_vkb2_ParamLimits

0x770a,	// (0x00010367) aid_size_cell_vkb2

0x775e,	// (0x000103bb) popup_fep_vkb2_window_g1_ParamLimits

0x775e,	// (0x000103bb) popup_fep_vkb2_window_g1

0x779e,	// (0x000103fb) vkb2_area_bottom_pane_ParamLimits

0x779e,	// (0x000103fb) vkb2_area_bottom_pane

0x77ea,	// (0x00010447) vkb2_area_keypad_pane_ParamLimits

0x77ea,	// (0x00010447) vkb2_area_keypad_pane

0x782c,	// (0x00010489) vkb2_area_top_pane_ParamLimits

0x782c,	// (0x00010489) vkb2_area_top_pane

0x78a6,	// (0x00010503) vkb2_top_entry_pane_ParamLimits

0x78a6,	// (0x00010503) vkb2_top_entry_pane

0x78d0,	// (0x0001052d) vkb2_top_grid_left_pane_ParamLimits

0x78d0,	// (0x0001052d) vkb2_top_grid_left_pane

0x78ee,	// (0x0001054b) vkb2_top_grid_right_pane_ParamLimits

0x78ee,	// (0x0001054b) vkb2_top_grid_right_pane

0x790c,	// (0x00010569) vkb2_cell_keypad_pane_ParamLimits

0x790c,	// (0x00010569) vkb2_cell_keypad_pane

0x79dd,	// (0x0001063a) vkb2_area_bottom_grid_pane_ParamLimits

0x79dd,	// (0x0001063a) vkb2_area_bottom_grid_pane

0x7a03,	// (0x00010660) vkb2_area_bottom_pane_g1_ParamLimits

0x7a03,	// (0x00010660) vkb2_area_bottom_pane_g1

0x7a27,	// (0x00010684) vkb2_area_bottom_pane_g2_ParamLimits

0x7a27,	// (0x00010684) vkb2_area_bottom_pane_g2

0x7a55,	// (0x000106b2) vkb2_area_bottom_pane_g3_ParamLimits

0x7a55,	// (0x000106b2) vkb2_area_bottom_pane_g3

0x0002,

0xfdb8,	// (0x00018a15) vkb2_area_bottom_pane_g_ParamLimits

0xfdb8,	// (0x00018a15) vkb2_area_bottom_pane_g

0x7ab6,	// (0x00010713) vkb2_top_cell_left_pane_ParamLimits

0x7ab6,	// (0x00010713) vkb2_top_cell_left_pane

0x020f,	// (0x00008e6c) vkb2_top_entry_pane_g1_ParamLimits

0x020f,	// (0x00008e6c) vkb2_top_entry_pane_g1

0x021d,	// (0x00008e7a) vkb2_top_entry_pane_t1_ParamLimits

0x021d,	// (0x00008e7a) vkb2_top_entry_pane_t1

0x024f,	// (0x00008eac) vkb2_top_entry_pane_t2_ParamLimits

0x024f,	// (0x00008eac) vkb2_top_entry_pane_t2

0x0281,	// (0x00008ede) vkb2_top_entry_pane_t3_ParamLimits

0x0281,	// (0x00008ede) vkb2_top_entry_pane_t3

0x0002,

0xfdbf,	// (0x00018a1c) vkb2_top_entry_pane_t_ParamLimits

0xfdbf,	// (0x00018a1c) vkb2_top_entry_pane_t

0x7b03,	// (0x00010760) vkb2_top_grid_right_pane_g1_ParamLimits

0x7b03,	// (0x00010760) vkb2_top_grid_right_pane_g1

0x7b19,	// (0x00010776) vkb2_top_grid_right_pane_g2_ParamLimits

0x7b19,	// (0x00010776) vkb2_top_grid_right_pane_g2

0x7b31,	// (0x0001078e) vkb2_top_grid_right_pane_g3_ParamLimits

0x7b31,	// (0x0001078e) vkb2_top_grid_right_pane_g3

0x7b49,	// (0x000107a6) vkb2_top_grid_right_pane_g4_ParamLimits

0x7b49,	// (0x000107a6) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc6,	// (0x00018a23) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc6,	// (0x00018a23) vkb2_top_grid_right_pane_g

0x7b5f,	// (0x000107bc) vkb2_top_cell_left_pane_g1

0x7b76,	// (0x000107d3) vkb2_cell_keypad_pane_g1_ParamLimits

0x7b76,	// (0x000107d3) vkb2_cell_keypad_pane_g1

0x0345,	// (0x00008fa2) vkb2_cell_keypad_pane_t1_ParamLimits

0x0345,	// (0x00008fa2) vkb2_cell_keypad_pane_t1

0x7b84,	// (0x000107e1) vkb2_cell_bottom_grid_pane_ParamLimits

0x7b84,	// (0x000107e1) vkb2_cell_bottom_grid_pane

0x7bbd,	// (0x0001081a) vkb2_cell_bottom_grid_pane_g1

0xf1de,	// (0x00017e3b) aid_call2_pane_cp02

0xf1e6,	// (0x00017e43) aid_call_pane_cp02

0xf1ee,	// (0x00017e4b) clock_digital_number_pane_cp10

0xf1f6,	// (0x00017e53) clock_digital_number_pane_cp11

0xf1fe,	// (0x00017e5b) clock_digital_number_pane_cp12

0xf206,	// (0x00017e63) clock_digital_number_pane_cp13

0xf20e,	// (0x00017e6b) clock_digital_separator_pane_cp10

0x956c,	// (0x000121c9) popup_clock_digital_analogue_window_cp2_g1

0x956c,	// (0x000121c9) popup_clock_digital_analogue_window_cp2_g2

0xf216,	// (0x00017e73) popup_clock_digital_analogue_window_cp2_g3

0x956c,	// (0x000121c9) popup_clock_digital_analogue_window_cp2_g4

0xf216,	// (0x00017e73) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd7b,	// (0x000189d8) popup_clock_digital_analogue_window_cp2_g

0xf21e,	// (0x00017e7b) popup_clock_digital_analogue_window_cp2_t1

0xf22c,	// (0x00017e89) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd86,	// (0x000189e3) popup_clock_digital_analogue_window_cp2_t

0xd3b2,	// (0x0001600f) clock_digital_number_pane_cp10_g1

0xd3b2,	// (0x0001600f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb69,	// (0x000187c6) clock_digital_number_pane_cp10_g

0xd3b2,	// (0x0001600f) clock_digital_separator_pane_cp10_g1

0xd3b2,	// (0x0001600f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb69,	// (0x000187c6) clock_digital_separator_pane_cp10_g

0xf05b,	// (0x00017cb8) uniindi_top_pane_g3

0xf06c,	// (0x00017cc9) uniindi_top_pane_g4

0x7997,	// (0x000105f4) vkb2_row_keypad_pane_ParamLimits

0x7997,	// (0x000105f4) vkb2_row_keypad_pane

0x7bdd,	// (0x0001083a) vkb2_cell_t_keypad_pane_ParamLimits

0x7bdd,	// (0x0001083a) vkb2_cell_t_keypad_pane

0x7bed,	// (0x0001084a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7bed,	// (0x0001084a) vkb2_cell_t_keypad_pane_cp08

0x7c00,	// (0x0001085d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7c00,	// (0x0001085d) vkb2_cell_t_keypad_pane_cp09

0x7c14,	// (0x00010871) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7c14,	// (0x00010871) vkb2_cell_t_keypad_pane_cp01

0x7c25,	// (0x00010882) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7c25,	// (0x00010882) vkb2_cell_t_keypad_pane_cp02

0x7c36,	// (0x00010893) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7c36,	// (0x00010893) vkb2_cell_t_keypad_pane_cp03

0x7c47,	// (0x000108a4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7c47,	// (0x000108a4) vkb2_cell_t_keypad_pane_cp04

0x7c58,	// (0x000108b5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7c58,	// (0x000108b5) vkb2_cell_t_keypad_pane_cp05

0x7c69,	// (0x000108c6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7c69,	// (0x000108c6) vkb2_cell_t_keypad_pane_cp06

0x7c7a,	// (0x000108d7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7c7a,	// (0x000108d7) vkb2_cell_t_keypad_pane_cp07

0x7c8b,	// (0x000108e8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7c8b,	// (0x000108e8) vkb2_cell_t_keypad_pane_cp10

0x7448,	// (0x000100a5) vkb2_cell_t_keypad_pane_g1

0x0478,	// (0x000090d5) vkb2_cell_t_keypad_pane_t1

0x63fd,	// (0x0000f05a) popup_grid_graphic2_window

0x048a,	// (0x000090e7) aid_size_cell_graphic2_ParamLimits

0x048a,	// (0x000090e7) aid_size_cell_graphic2

0xd446,	// (0x000160a3) bg_popup_window_pane_cp21_ParamLimits

0xd446,	// (0x000160a3) bg_popup_window_pane_cp21

0x04b6,	// (0x00009113) graphic2_pages_pane_ParamLimits

0x04b6,	// (0x00009113) graphic2_pages_pane

0x04fc,	// (0x00009159) grid_graphic2_control_pane_ParamLimits

0x04fc,	// (0x00009159) grid_graphic2_control_pane

0x052a,	// (0x00009187) grid_graphic2_pane_ParamLimits

0x052a,	// (0x00009187) grid_graphic2_pane

0x058a,	// (0x000091e7) cell_graphic2_pane

0x7ec6,	// (0x00010b23) main_comp_mode_pane

0xe85b,	// (0x000174b8) list_ai3_gene_pane_ParamLimits

0xeca1,	// (0x000178fe) bg_popup_window_pane_cp19_ParamLimits

0xecad,	// (0x0001790a) bg_touch_area_indi_pane_ParamLimits

0xecad,	// (0x0001790a) bg_touch_area_indi_pane

0xecc3,	// (0x00017920) bg_touch_area_indi_pane_cp01_ParamLimits

0xecc3,	// (0x00017920) bg_touch_area_indi_pane_cp01

0xecd9,	// (0x00017936) bg_touch_area_indi_pane_cp02_ParamLimits

0xecd9,	// (0x00017936) bg_touch_area_indi_pane_cp02

0xecf1,	// (0x0001794e) bg_touch_area_indi_pane_cp03_ParamLimits

0xecf1,	// (0x0001794e) bg_touch_area_indi_pane_cp03

0xed0b,	// (0x00017968) popup_slider_window_g1_ParamLimits

0xed27,	// (0x00017984) popup_slider_window_g2_ParamLimits

0xed43,	// (0x000179a0) popup_slider_window_g3_ParamLimits

0xfd10,	// (0x0001896d) popup_slider_window_g_ParamLimits

0xed9f,	// (0x000179fc) popup_slider_window_t1_ParamLimits

0xee13,	// (0x00017a70) small_volume_slider_vertical_pane_ParamLimits

0x058a,	// (0x000091e7) cell_graphic2_pane_ParamLimits

0x05d9,	// (0x00009236) bg_button_pane_cp10_ParamLimits

0x05d9,	// (0x00009236) bg_button_pane_cp10

0x05ec,	// (0x00009249) bg_button_pane_cp11_ParamLimits

0x05ec,	// (0x00009249) bg_button_pane_cp11

0x05ff,	// (0x0000925c) graphic2_pages_pane_g1_ParamLimits

0x05ff,	// (0x0000925c) graphic2_pages_pane_g1

0x061a,	// (0x00009277) graphic2_pages_pane_g2_ParamLimits

0x061a,	// (0x00009277) graphic2_pages_pane_g2

0x0001,

0xfdd4,	// (0x00018a31) graphic2_pages_pane_g_ParamLimits

0xfdd4,	// (0x00018a31) graphic2_pages_pane_g

0x0632,	// (0x0000928f) graphic2_pages_pane_t1_ParamLimits

0x0632,	// (0x0000928f) graphic2_pages_pane_t1

0x0648,	// (0x000092a5) cell_graphic2_control_pane_ParamLimits

0x0648,	// (0x000092a5) cell_graphic2_control_pane

0x0662,	// (0x000092bf) cell_graphic2_pane_g1_ParamLimits

0x0662,	// (0x000092bf) cell_graphic2_pane_g1

0x066f,	// (0x000092cc) cell_graphic2_pane_g2_ParamLimits

0x066f,	// (0x000092cc) cell_graphic2_pane_g2

0x067c,	// (0x000092d9) cell_graphic2_pane_g3_ParamLimits

0x067c,	// (0x000092d9) cell_graphic2_pane_g3

0x0689,	// (0x000092e6) cell_graphic2_pane_g4_ParamLimits

0x0689,	// (0x000092e6) cell_graphic2_pane_g4

0x0696,	// (0x000092f3) cell_graphic2_pane_g5_ParamLimits

0x0696,	// (0x000092f3) cell_graphic2_pane_g5

0x0004,

0xfdd9,	// (0x00018a36) cell_graphic2_pane_g_ParamLimits

0xfdd9,	// (0x00018a36) cell_graphic2_pane_g

0x06b1,	// (0x0000930e) cell_graphic2_pane_t1_ParamLimits

0x06b1,	// (0x0000930e) cell_graphic2_pane_t1

0xab2b,	// (0x00013788) grid_highlight_pane_cp11_ParamLimits

0xab2b,	// (0x00013788) grid_highlight_pane_cp11

0x8d93,	// (0x000119f0) bg_button_pane_cp05

0x06c7,	// (0x00009324) cell_graphic2_control_pane_g1

0xd3b2,	// (0x0001600f) bg_touch_area_indi_pane_g1

0x06d4,	// (0x00009331) aid_cmod_rocker_key_size

0x06de,	// (0x0000933b) aid_cmode_itu_key_size

0x06e8,	// (0x00009345) main_cmode_video_pane

0x06f2,	// (0x0000934f) main_comp_mode_itu_pane

0x06fe,	// (0x0000935b) main_comp_mode_rocker_pane

0x070a,	// (0x00009367) cell_cmode_rocker_pane_ParamLimits

0x070a,	// (0x00009367) cell_cmode_rocker_pane

0x071c,	// (0x00009379) cell_cmode_itu_pane_ParamLimits

0x071c,	// (0x00009379) cell_cmode_itu_pane

0x8d93,	// (0x000119f0) bg_button_pane_cp06_ParamLimits

0x8d93,	// (0x000119f0) bg_button_pane_cp06

0xd659,	// (0x000162b6) cell_cmode_rocker_pane_g1_ParamLimits

0xd659,	// (0x000162b6) cell_cmode_rocker_pane_g1

0xeeb7,	// (0x00017b14) cell_cmode_rocker_pane_g2_ParamLimits

0xeeb7,	// (0x00017b14) cell_cmode_rocker_pane_g2

0x0001,

0xfde4,	// (0x00018a41) cell_cmode_rocker_pane_g_ParamLimits

0xfde4,	// (0x00018a41) cell_cmode_rocker_pane_g

0x7ec6,	// (0x00010b23) bg_button_pane_cp07

0x0731,	// (0x0000938e) cell_cmode_itu_pane_g1

0x073a,	// (0x00009397) cell_cmode_itu_pane_t1

0x0748,	// (0x000093a5) cell_cmode_itu_pane_t2

0x0001,

0xfde9,	// (0x00018a46) cell_cmode_itu_pane_t

0xf0dd,	// (0x00017d3a) aid_touch_ctrl_left

0xf0e5,	// (0x00017d42) aid_touch_ctrl_right

0x7ec6,	// (0x00010b23) compa_mode_pane

0x0756,	// (0x000093b3) aid_cmod_rocker_key_size_cp

0x0760,	// (0x000093bd) aid_cmode_itu_key_size_cp

0x076a,	// (0x000093c7) compa_mode_pane_g1

0x0772,	// (0x000093cf) compa_mode_pane_g2

0x077a,	// (0x000093d7) compa_mode_pane_g3

0x0002,

0xfdee,	// (0x00018a4b) compa_mode_pane_g

0x0782,	// (0x000093df) main_comp_mode_itu_pane_cp

0x078a,	// (0x000093e7) main_comp_mode_rocker_pane_cp

0x0792,	// (0x000093ef) cell_cmode_itu_pane_cp_ParamLimits

0x0792,	// (0x000093ef) cell_cmode_itu_pane_cp

0x07a7,	// (0x00009404) cell_cmode_rocker_pane_cp_ParamLimits

0x07a7,	// (0x00009404) cell_cmode_rocker_pane_cp

0x8d93,	// (0x000119f0) bg_button_pane_cp06_cp_ParamLimits

0x8d93,	// (0x000119f0) bg_button_pane_cp06_cp

0xd659,	// (0x000162b6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd659,	// (0x000162b6) cell_cmode_rocker_pane_g1_cp

0xd3b2,	// (0x0001600f) cell_cmode_rocker_pane_g2_cp

0x7ec6,	// (0x00010b23) bg_button_pane_cp07_cp

0x07b9,	// (0x00009416) cell_cmode_itu_pane_g1_cp

0x07c2,	// (0x0000941f) cell_cmode_itu_pane_t1_cp

0x07c2,	// (0x0000941f) cell_cmode_itu_pane_t2_cp

0xc016,	// (0x00014c73) settings_code_pane_cp2

0x7fba,	// (0x00010c17) bg_popup_window_pane_cp3_ParamLimits

0x842b,	// (0x00011088) heading_pane_cp3_ParamLimits

0x8437,	// (0x00011094) listscroll_popup_graphic_pane_ParamLimits

0x71f1,	// (0x0000fe4e) fep_hwr_aid_pane_ParamLimits

0x7661,	// (0x000102be) aid_touch_sctrl_top_ParamLimits

0x767c,	// (0x000102d9) sctrl_sk_top_pane_g1_ParamLimits

0x7448,	// (0x000100a5) sctrl_sk_top_pane_g2_ParamLimits

0xfd29,	// (0x00018986) sctrl_sk_top_pane_g_ParamLimits

0x7689,	// (0x000102e6) sctrl_sk_top_pane_t1_ParamLimits

0x7661,	// (0x000102be) aid_touch_sctrl_bottom_ParamLimits

0x7689,	// (0x000102e6) sctrl_sk_bottom_pane_t1_ParamLimits

0xf027,	// (0x00017c84) aid_area_touch_clock

0x786e,	// (0x000104cb) aid_vkb2_area_top_pane_cell_ParamLimits

0x786e,	// (0x000104cb) aid_vkb2_area_top_pane_cell

0x79b9,	// (0x00010616) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x79b9,	// (0x00010616) aid_vkb2_area_bottom_pane_cell

0x0207,	// (0x00008e64) popup_char_count_window

0x07d0,	// (0x0000942d) popup_char_count_window_g1

0x07d9,	// (0x00009436) popup_char_count_window_g2

0x07e2,	// (0x0000943f) popup_char_count_window_g3

0x0002,

0xfdf5,	// (0x00018a52) popup_char_count_window_g

0x07eb,	// (0x00009448) popup_char_count_window_t1

0x773c,	// (0x00010399) popup_fep_char_preview_window_ParamLimits

0x773c,	// (0x00010399) popup_fep_char_preview_window

0x788c,	// (0x000104e9) vkb2_top_candi_pane_ParamLimits

0x788c,	// (0x000104e9) vkb2_top_candi_pane

0x07f9,	// (0x00009456) cell_vkb2_top_candi_pane_ParamLimits

0x07f9,	// (0x00009456) cell_vkb2_top_candi_pane

0x7ca0,	// (0x000108fd) bg_popup_fep_char_preview_window_ParamLimits

0x7ca0,	// (0x000108fd) bg_popup_fep_char_preview_window

0x7cae,	// (0x0001090b) popup_fep_char_preview_window_t1_ParamLimits

0x7cae,	// (0x0001090b) popup_fep_char_preview_window_t1

0x0890,	// (0x000094ed) bg_popup_fep_char_preview_window_g1

0x0888,	// (0x000094e5) bg_popup_fep_char_preview_window_g2

0x0880,	// (0x000094dd) bg_popup_fep_char_preview_window_g3

0x08b8,	// (0x00009515) bg_popup_fep_char_preview_window_g4

0x08b0,	// (0x0000950d) bg_popup_fep_char_preview_window_g5

0x7ce8,	// (0x00010945) bg_popup_fep_char_preview_window_g6

0x08a0,	// (0x000094fd) bg_popup_fep_char_preview_window_g7

0x0898,	// (0x000094f5) bg_popup_fep_char_preview_window_g8

0x08c0,	// (0x0000951d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfc,	// (0x00018a59) bg_popup_fep_char_preview_window_g

0x7448,	// (0x000100a5) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7448,	// (0x000100a5) cell_vkb2_top_candi_pane_g1

0x7456,	// (0x000100b3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7456,	// (0x000100b3) cell_vkb2_top_candi_pane_g2

0x08e9,	// (0x00009546) cell_vkb2_top_candi_pane_g3_ParamLimits

0x08e9,	// (0x00009546) cell_vkb2_top_candi_pane_g3

0x7cf0,	// (0x0001094d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7cf0,	// (0x0001094d) cell_vkb2_top_candi_pane_g4

0xdc2b,	// (0x00016888) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdc2b,	// (0x00016888) cell_vkb2_top_candi_pane_g5

0x7d11,	// (0x0001096e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7d11,	// (0x0001096e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0f,	// (0x00018a6c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0f,	// (0x00018a6c) cell_vkb2_top_candi_pane_g

0x7d1f,	// (0x0001097c) cell_vkb2_top_candi_pane_t1

0x7000,	// (0x0000fc5d) aid_size_touch_slider_mark_ParamLimits

0x7000,	// (0x0000fc5d) aid_size_touch_slider_mark

0x04ec,	// (0x00009149) grid_graphic2_catg_pane_ParamLimits

0x04ec,	// (0x00009149) grid_graphic2_catg_pane

0x0566,	// (0x000091c3) popup_grid_graphic2_window_t1_ParamLimits

0x0566,	// (0x000091c3) popup_grid_graphic2_window_t1

0x0578,	// (0x000091d5) popup_grid_graphic2_window_t2_ParamLimits

0x0578,	// (0x000091d5) popup_grid_graphic2_window_t2

0x0001,

0xfdcf,	// (0x00018a2c) popup_grid_graphic2_window_t_ParamLimits

0xfdcf,	// (0x00018a2c) popup_grid_graphic2_window_t

0x8d93,	// (0x000119f0) bg_button_pane_cp05_ParamLimits

0x06c7,	// (0x00009324) cell_graphic2_control_pane_g1_ParamLimits

0x0929,	// (0x00009586) cell_graphic2_catg_pane_ParamLimits

0x0929,	// (0x00009586) cell_graphic2_catg_pane

0x7ec6,	// (0x00010b23) bg_button_pane_cp12

0x093b,	// (0x00009598) cell_graphic2_catg_pane_g1

0xeff3,	// (0x00017c50) cell_tb_ext_pane_t1_ParamLimits

0x7ad6,	// (0x00010733) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7ad6,	// (0x00010733) vkb2_top_cell_right_narrow_pane

0x7aee,	// (0x0001074b) vkb2_top_cell_right_wide_pane_ParamLimits

0x7aee,	// (0x0001074b) vkb2_top_cell_right_wide_pane

0x71e3,	// (0x0000fe40) bg_vkb2_func_pane_ParamLimits

0x71e3,	// (0x0000fe40) bg_vkb2_func_pane

0x7b5f,	// (0x000107bc) vkb2_top_cell_left_pane_g1_ParamLimits

0x71e3,	// (0x0000fe40) bg_vkb2_fuc_pane_cp03_ParamLimits

0x71e3,	// (0x0000fe40) bg_vkb2_fuc_pane_cp03

0x7bbd,	// (0x0001081a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xaa19,	// (0x00013676) bg_vkb2_func_pane_g1

0xaa21,	// (0x0001367e) bg_vkb2_func_pane_g2

0xaa31,	// (0x0001368e) bg_vkb2_func_pane_g3

0xaa29,	// (0x00013686) bg_vkb2_func_pane_g4

0xaa39,	// (0x00013696) bg_vkb2_func_pane_g5

0xaa41,	// (0x0001369e) bg_vkb2_func_pane_g6

0xaa49,	// (0x000136a6) bg_vkb2_func_pane_g7

0xaa51,	// (0x000136ae) bg_vkb2_func_pane_g8

0xaa11,	// (0x0001366e) bg_vkb2_func_pane_g9

0x0008,

0xfe1c,	// (0x00018a79) bg_vkb2_func_pane_g

0x71e3,	// (0x0000fe40) bg_vkb2_fuc_pane_cp01_ParamLimits

0x71e3,	// (0x0000fe40) bg_vkb2_fuc_pane_cp01

0x7b5f,	// (0x000107bc) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7b5f,	// (0x000107bc) vkb2_top_cell_right_wide_pane_g1

0x71e3,	// (0x0000fe40) bg_vkb2_fuc_pane_cp02_ParamLimits

0x71e3,	// (0x0000fe40) bg_vkb2_fuc_pane_cp02

0x7bbd,	// (0x0001081a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7bbd,	// (0x0001081a) vkb2_top_cell_right_narrow_pane_g1

0xec1f,	// (0x0001787c) aid_touch_area_decrease_ParamLimits

0xec1f,	// (0x0001787c) aid_touch_area_decrease

0xec43,	// (0x000178a0) aid_touch_area_increase_ParamLimits

0xec43,	// (0x000178a0) aid_touch_area_increase

0xec4f,	// (0x000178ac) aid_touch_area_mute_ParamLimits

0xec4f,	// (0x000178ac) aid_touch_area_mute

0xec73,	// (0x000178d0) aid_touch_area_slider_ParamLimits

0xec73,	// (0x000178d0) aid_touch_area_slider

0xed5f,	// (0x000179bc) popup_slider_window_g4_ParamLimits

0xed5f,	// (0x000179bc) popup_slider_window_g4

0xed6b,	// (0x000179c8) popup_slider_window_g5_ParamLimits

0xed6b,	// (0x000179c8) popup_slider_window_g5

0xed8d,	// (0x000179ea) popup_slider_window_g6_ParamLimits

0xed8d,	// (0x000179ea) popup_slider_window_g6

0xedcd,	// (0x00017a2a) popup_slider_window_t2_ParamLimits

0xedcd,	// (0x00017a2a) popup_slider_window_t2

0x0001,

0xfd1d,	// (0x0001897a) popup_slider_window_t_ParamLimits

0xfd1d,	// (0x0001897a) popup_slider_window_t

0xede5,	// (0x00017a42) slider_pane_ParamLimits

0xede5,	// (0x00017a42) slider_pane

0x0944,	// (0x000095a1) slider_pane_g1_ParamLimits

0x0944,	// (0x000095a1) slider_pane_g1

0x0958,	// (0x000095b5) slider_pane_g2_ParamLimits

0x0958,	// (0x000095b5) slider_pane_g2

0x096e,	// (0x000095cb) slider_pane_g3_ParamLimits

0x096e,	// (0x000095cb) slider_pane_g3

0x0003,

0xfe2f,	// (0x00018a8c) slider_pane_g_ParamLimits

0xfe2f,	// (0x00018a8c) slider_pane_g

0xa429,	// (0x00013086) popup_tb_float_extension_window_ParamLimits

0xa429,	// (0x00013086) popup_tb_float_extension_window

0x099a,	// (0x000095f7) aid_size_cell_tb_float_ext

0x7ec6,	// (0x00010b23) bg_popup_sub_window_cp28

0x09a6,	// (0x00009603) grid_tb_float_ext_pane

0x09b0,	// (0x0000960d) cell_tb_float_ext_pane_ParamLimits

0x09b0,	// (0x0000960d) cell_tb_float_ext_pane

0x09ca,	// (0x00009627) cell_tb_float_ext_pane_g1

0x09d3,	// (0x00009630) grid_highlight_pane_cp12

0x7332,	// (0x0000ff8f) cell_last_hwr_side_pane_ParamLimits

0x7332,	// (0x0000ff8f) cell_last_hwr_side_pane

0xd3b2,	// (0x0001600f) cell_last_hwr_side_pane_g1

0x09dc,	// (0x00009639) cell_last_hwr_side_pane_g2

0x0001,

0xfe38,	// (0x00018a95) cell_last_hwr_side_pane_g

0x7a85,	// (0x000106e2) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7a85,	// (0x000106e2) vkb2_area_bottom_space_btn_pane

0x7448,	// (0x000100a5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x0478,	// (0x000090d5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7d1f,	// (0x0001097c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7d3e,	// (0x0001099b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7d3e,	// (0x0001099b) vkb2_area_bottom_space_btn_pane_g1

0x7d78,	// (0x000109d5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7d78,	// (0x000109d5) vkb2_area_bottom_space_btn_pane_g2

0x7dae,	// (0x00010a0b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7dae,	// (0x00010a0b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3d,	// (0x00018a9a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3d,	// (0x00018a9a) vkb2_area_bottom_space_btn_pane_g

0x72a6,	// (0x0000ff03) cel_fep_hwr_func_pane_ParamLimits

0x72a6,	// (0x0000ff03) cel_fep_hwr_func_pane

0x72e2,	// (0x0000ff3f) cell_hwr_side_button_pane_ParamLimits

0x72e2,	// (0x0000ff3f) cell_hwr_side_button_pane

0xf027,	// (0x00017c84) aid_area_touch_clock_ParamLimits

0x825d,	// (0x00010eba) bg_uniindi_top_pane_ParamLimits

0xf039,	// (0x00017c96) uniindi_top_pane_g1_ParamLimits

0xf04f,	// (0x00017cac) uniindi_top_pane_g2_ParamLimits

0xf05b,	// (0x00017cb8) uniindi_top_pane_g3_ParamLimits

0xf06c,	// (0x00017cc9) uniindi_top_pane_g4_ParamLimits

0xfd55,	// (0x000189b2) uniindi_top_pane_g_ParamLimits

0xf079,	// (0x00017cd6) uniindi_top_pane_t1_ParamLimits

0x825d,	// (0x00010eba) bg_vkb2_func_pane_cp01_ParamLimits

0x825d,	// (0x00010eba) bg_vkb2_func_pane_cp01

0x0a9f,	// (0x000096fc) cel_fep_hwr_func_pane_g1_ParamLimits

0x0a9f,	// (0x000096fc) cel_fep_hwr_func_pane_g1

0x825d,	// (0x00010eba) bg_vkb2_func_pane_cp02_ParamLimits

0x825d,	// (0x00010eba) bg_vkb2_func_pane_cp02

0x0a9f,	// (0x000096fc) cell_hwr_side_button_pane_g1_ParamLimits

0x0a9f,	// (0x000096fc) cell_hwr_side_button_pane_g1

0xa872,	// (0x000134cf) status_pane_g4_ParamLimits

0xa872,	// (0x000134cf) status_pane_g4

0xa88a,	// (0x000134e7) status_pane_t1

0xd0b4,	// (0x00015d11) form2_midp_gauge_slider_cont_pane

0xd0bc,	// (0x00015d19) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd0ce,	// (0x00015d2b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd0e0,	// (0x00015d3d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1c,	// (0x00018779) form2_midp_gauge_slider_pane_t_ParamLimits

0xd0f2,	// (0x00015d4f) form2_midp_slider_pane_ParamLimits

0x76fc,	// (0x00010359) aid_size_cell_func_vkb2_ParamLimits

0x76fc,	// (0x00010359) aid_size_cell_func_vkb2

0x0986,	// (0x000095e3) slider_pane_g4_ParamLimits

0x0986,	// (0x000095e3) slider_pane_g4

0x7df8,	// (0x00010a55) form2_midp_gauge_slider_pane_t2_cp01

0x7e06,	// (0x00010a63) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7e06,	// (0x00010a63) form2_midp_gauge_slider_pane_t3_cp01

0x7e23,	// (0x00010a80) form2_midp_slider_pane_cp01

0x7ec6,	// (0x00010b23) navi_smil_pane

0x0b0c,	// (0x00009769) navi_smil_pane_g1

0x0b14,	// (0x00009771) navi_smil_pane_t1

0x0ae1,	// (0x0000973e) form2_midp_slider_pane_g1

0x0aea,	// (0x00009747) form2_midp_slider_pane_g2

0x0af2,	// (0x0000974f) form2_midp_slider_pane_g3

0x0ae1,	// (0x0000973e) form2_midp_slider_pane_g4

0x0afa,	// (0x00009757) form2_midp_slider_pane_g5

0x0004,

0xfe46,	// (0x00018aa3) form2_midp_slider_pane_g

0x7de8,	// (0x00010a45) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7de8,	// (0x00010a45) vkb2_area_bottom_space_btn_pane_g4

0xa6a8,	// (0x00013305) lc0_navi_pane_ParamLimits

0xa6a8,	// (0x00013305) lc0_navi_pane

0xa71e,	// (0x0001337b) lc0_stat_indi_pane_ParamLimits

0xa71e,	// (0x0001337b) lc0_stat_indi_pane

0xa735,	// (0x00013392) ls0_title_pane_ParamLimits

0xa735,	// (0x00013392) ls0_title_pane

0x8d93,	// (0x000119f0) bg_popup_sub_pane_cp14_ParamLimits

0xf00e,	// (0x00017c6b) list_uniindi_pane_ParamLimits

0xf01a,	// (0x00017c77) uniindi_top_pane_ParamLimits

0xf0b5,	// (0x00017d12) list_single_uniindi_pane_g1_ParamLimits

0xf0c8,	// (0x00017d25) list_single_uniindi_pane_t1_ParamLimits

0x7e2c,	// (0x00010a89) lc0_stat_clock_pane_ParamLimits

0x7e2c,	// (0x00010a89) lc0_stat_clock_pane

0x0b3c,	// (0x00009799) lc0_stat_indi_pane_g1_ParamLimits

0x0b3c,	// (0x00009799) lc0_stat_indi_pane_g1

0x0b2f,	// (0x0000978c) lc0_stat_indi_pane_g2_ParamLimits

0x0b2f,	// (0x0000978c) lc0_stat_indi_pane_g2

0x0001,

0xfe51,	// (0x00018aae) lc0_stat_indi_pane_g_ParamLimits

0xfe51,	// (0x00018aae) lc0_stat_indi_pane_g

0x7e39,	// (0x00010a96) lc0_uni_indicator_pane_ParamLimits

0x7e39,	// (0x00010a96) lc0_uni_indicator_pane

0x0b56,	// (0x000097b3) ls0_title_pane_g1_ParamLimits

0x0b56,	// (0x000097b3) ls0_title_pane_g1

0x0b6a,	// (0x000097c7) ls0_title_pane_t1_ParamLimits

0x0b6a,	// (0x000097c7) ls0_title_pane_t1

0x7e46,	// (0x00010aa3) lc0_uni_indicator_pane_g1_ParamLimits

0x7e46,	// (0x00010aa3) lc0_uni_indicator_pane_g1

0x0bb6,	// (0x00009813) lc0_stat_clock_pane_t1

0x7ec6,	// (0x00010b23) main_ai5_pane

0x0bc4,	// (0x00009821) ai5_sk_pane_ParamLimits

0x0bc4,	// (0x00009821) ai5_sk_pane

0x0bd1,	// (0x0000982e) cell_ai5_widget_pane_ParamLimits

0x0bd1,	// (0x0000982e) cell_ai5_widget_pane

0x0c5f,	// (0x000098bc) aid_size_cell_widget_grid

0x0c71,	// (0x000098ce) bg_ai5_widget_pane_ParamLimits

0x0c71,	// (0x000098ce) bg_ai5_widget_pane

0x0c99,	// (0x000098f6) cell_ai5_widget_pane_g2

0x0ca9,	// (0x00009906) cell_ai5_widget_pane_g3

0x0cbd,	// (0x0000991a) cell_ai5_widget_pane_g4

0x0cc9,	// (0x00009926) cell_ai5_widget_pane_g5

0x0cd5,	// (0x00009932) cell_ai5_widget_pane_g6

0x0ce1,	// (0x0000993e) cell_ai5_widget_pane_g7

0x0d29,	// (0x00009986) cell_ai5_widget_pane_t1_ParamLimits

0x0d29,	// (0x00009986) cell_ai5_widget_pane_t1

0x0d46,	// (0x000099a3) cell_ai5_widget_pane_t2_ParamLimits

0x0d46,	// (0x000099a3) cell_ai5_widget_pane_t2

0x0d5e,	// (0x000099bb) cell_ai5_widget_pane_t3_ParamLimits

0x0d5e,	// (0x000099bb) cell_ai5_widget_pane_t3

0x0d76,	// (0x000099d3) cell_ai5_widget_pane_t4_ParamLimits

0x0d76,	// (0x000099d3) cell_ai5_widget_pane_t4

0x0d90,	// (0x000099ed) cell_ai5_widget_pane_t5_ParamLimits

0x0d90,	// (0x000099ed) cell_ai5_widget_pane_t5

0x0daf,	// (0x00009a0c) cell_ai5_widget_pane_t6_ParamLimits

0x0daf,	// (0x00009a0c) cell_ai5_widget_pane_t6

0x0dc1,	// (0x00009a1e) cell_ai5_widget_pane_t7_ParamLimits

0x0dc1,	// (0x00009a1e) cell_ai5_widget_pane_t7

0x0dda,	// (0x00009a37) cell_ai5_widget_pane_t8_ParamLimits

0x0dda,	// (0x00009a37) cell_ai5_widget_pane_t8

0x0009,

0xfe6b,	// (0x00018ac8) cell_ai5_widget_pane_t_ParamLimits

0xfe6b,	// (0x00018ac8) cell_ai5_widget_pane_t

0x0e22,	// (0x00009a7f) grid_ai5_widget_pane

0x8d93,	// (0x000119f0) highlight_cell_ai5_widget_pane_ParamLimits

0x8d93,	// (0x000119f0) highlight_cell_ai5_widget_pane

0x0e38,	// (0x00009a95) ai5_sk_left_pane

0x0e42,	// (0x00009a9f) ai5_sk_middle_pane

0x0e4c,	// (0x00009aa9) ai5_sk_right_pane

0x0e56,	// (0x00009ab3) bg_ai5_widget_pane_g1_ParamLimits

0x0e56,	// (0x00009ab3) bg_ai5_widget_pane_g1

0x0e62,	// (0x00009abf) bg_ai5_widget_pane_g2_ParamLimits

0x0e62,	// (0x00009abf) bg_ai5_widget_pane_g2

0x0e6e,	// (0x00009acb) bg_ai5_widget_pane_g3_ParamLimits

0x0e6e,	// (0x00009acb) bg_ai5_widget_pane_g3

0x0e7a,	// (0x00009ad7) bg_ai5_widget_pane_g4_ParamLimits

0x0e7a,	// (0x00009ad7) bg_ai5_widget_pane_g4

0x0e86,	// (0x00009ae3) bg_ai5_widget_pane_g5_ParamLimits

0x0e86,	// (0x00009ae3) bg_ai5_widget_pane_g5

0x0e92,	// (0x00009aef) bg_ai5_widget_pane_g6_ParamLimits

0x0e92,	// (0x00009aef) bg_ai5_widget_pane_g6

0x0e9e,	// (0x00009afb) bg_ai5_widget_pane_g7_ParamLimits

0x0e9e,	// (0x00009afb) bg_ai5_widget_pane_g7

0x0eaa,	// (0x00009b07) bg_ai5_widget_pane_g8_ParamLimits

0x0eaa,	// (0x00009b07) bg_ai5_widget_pane_g8

0x0eb6,	// (0x00009b13) bg_ai5_widget_pane_g9_ParamLimits

0x0eb6,	// (0x00009b13) bg_ai5_widget_pane_g9

0x0008,

0xfe80,	// (0x00018add) bg_ai5_widget_pane_g_ParamLimits

0xfe80,	// (0x00018add) bg_ai5_widget_pane_g

0x0ede,	// (0x00009b3b) cell_shortcut_ai5_widget_pane_ParamLimits

0x0ede,	// (0x00009b3b) cell_shortcut_ai5_widget_pane

0x809d,	// (0x00010cfa) bg_cell_shortcut_ai5_widget_pane

0x0ef0,	// (0x00009b4d) cell_grid_ai5_widget_pane_g1

0x0ef9,	// (0x00009b56) highlight_cell_shortcut_ai5_widget_pane

0xaa19,	// (0x00013676) ai5_sk_left_pane_g1

0x0f01,	// (0x00009b5e) ai5_sk_left_pane_g2

0x0f09,	// (0x00009b66) ai5_sk_left_pane_g3

0x0f11,	// (0x00009b6e) ai5_sk_left_pane_g4

0x0003,

0xfe93,	// (0x00018af0) ai5_sk_left_pane_g

0x0f19,	// (0x00009b76) ai5_sk_left_pane_t1

0xaa21,	// (0x0001367e) ai5_sk_right_pane_g1

0x0f27,	// (0x00009b84) ai5_sk_right_pane_g2

0x0f2f,	// (0x00009b8c) ai5_sk_right_pane_g3

0x0f37,	// (0x00009b94) ai5_sk_right_pane_g4

0x0003,

0xfe9c,	// (0x00018af9) ai5_sk_right_pane_g

0x0f3f,	// (0x00009b9c) ai5_sk_right_pane_t1

0xaa21,	// (0x0001367e) ai5_sk_middle_pane_g1

0xaa19,	// (0x00013676) ai5_sk_middle_pane_g2

0xaa39,	// (0x00013696) ai5_sk_middle_pane_g3

0x0f2f,	// (0x00009b8c) ai5_sk_middle_pane_g4

0x0f09,	// (0x00009b66) ai5_sk_middle_pane_g5

0x0f4d,	// (0x00009baa) ai5_sk_middle_pane_g6

0x0f55,	// (0x00009bb2) ai5_sk_middle_pane_g7

0x0006,

0xfea5,	// (0x00018b02) ai5_sk_middle_pane_g

0xa534,	// (0x00013191) aid_touch_area_size_lc0_ParamLimits

0xa534,	// (0x00013191) aid_touch_area_size_lc0

0x7477,	// (0x000100d4) cell_hwr_candidate_pane_t1_ParamLimits

0xa550,	// (0x000131ad) aid_touch_navi_pane

0xa81c,	// (0x00013479) status_dt_navi_pane_ParamLimits

0xa81c,	// (0x00013479) status_dt_navi_pane

0xa829,	// (0x00013486) status_dt_sta_pane_ParamLimits

0xa829,	// (0x00013486) status_dt_sta_pane

0x0f5d,	// (0x00009bba) dt_sta_controll_pane

0x0f6a,	// (0x00009bc7) dt_sta_indi_pane

0x0f7b,	// (0x00009bd8) dt_sta_title_pane

0x825d,	// (0x00010eba) bg_dt_sta_indi_pane_ParamLimits

0x825d,	// (0x00010eba) bg_dt_sta_indi_pane

0x0f8e,	// (0x00009beb) dt_sta_battery_pane

0x0f96,	// (0x00009bf3) dt_sta_indi_pane_g1

0x0f9f,	// (0x00009bfc) dt_sta_indi_pane_g2

0x0fa8,	// (0x00009c05) dt_sta_indi_pane_g3

0x0002,

0xfeb4,	// (0x00018b11) dt_sta_indi_pane_g

0x0fb1,	// (0x00009c0e) dt_sta_signal_pane

0x8d93,	// (0x000119f0) bg_dt_sta_title_pane_ParamLimits

0x8d93,	// (0x000119f0) bg_dt_sta_title_pane

0xb905,	// (0x00014562) dt_sta_title_pane_g1

0x0fba,	// (0x00009c17) dt_sta_title_pane_t1_ParamLimits

0x0fba,	// (0x00009c17) dt_sta_title_pane_t1

0x7ec6,	// (0x00010b23) bg_dt_sta_control_pane

0x0fcf,	// (0x00009c2c) dt_sta_controll_pane_g1

0x0fd8,	// (0x00009c35) bg_dt_sta_title_pane_g1

0x0fe1,	// (0x00009c3e) bg_dt_sta_title_pane_g2

0x0fea,	// (0x00009c47) bg_dt_sta_title_pane_g3

0x0002,

0xfebb,	// (0x00018b18) bg_dt_sta_title_pane_g

0xd3b2,	// (0x0001600f) bg_dt_sta_indi_pane_g1

0x0ff3,	// (0x00009c50) dt_sta_signal_pane_g1

0x0ffb,	// (0x00009c58) dt_sta_signal_pane_g2

0x0001,

0xfec2,	// (0x00018b1f) dt_sta_signal_pane_g

0x1003,	// (0x00009c60) dt_sta_battery_pane_g1

0x100c,	// (0x00009c69) dt_sta_battery_pane_t1

0xd3b2,	// (0x0001600f) bg_dt_sta_control_pane_g1

0x964f,	// (0x000122ac) fep_china_uni_eep_pane

0x9657,	// (0x000122b4) fep_china_uni_entry_pane_ParamLimits

0x9667,	// (0x000122c4) popup_fep_china_uni_window_g1_ParamLimits

0x9677,	// (0x000122d4) popup_fep_china_uni_window_g2_ParamLimits

0x9677,	// (0x000122d4) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x000183b5) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x000183b5) popup_fep_china_uni_window_g

0x101b,	// (0x00009c78) fep_china_uni_eep_pane_g1

0x1023,	// (0x00009c80) fep_china_uni_eep_pane_t1

0x0b03,	// (0x00009760) aid_touch_area_size_smil_player

0xa6a0,	// (0x000132fd) lc0_clock_pane

0xa87e,	// (0x000134db) status_pane_g5_ParamLimits

0xa87e,	// (0x000134db) status_pane_g5

0xa0f6,	// (0x00012d53) popup_keymap_window

0xa83e,	// (0x0001349b) status_icon_pane

0x0ca9,	// (0x00009906) cell_ai5_widget_pane_g3_ParamLimits

0x0cbd,	// (0x0000991a) cell_ai5_widget_pane_g4_ParamLimits

0x0cc9,	// (0x00009926) cell_ai5_widget_pane_g5_ParamLimits

0x0ced,	// (0x0000994a) cell_ai5_widget_pane_g8_ParamLimits

0x0ced,	// (0x0000994a) cell_ai5_widget_pane_g8

0x0d01,	// (0x0000995e) cell_ai5_widget_pane_g9_ParamLimits

0x0d01,	// (0x0000995e) cell_ai5_widget_pane_g9

0x0d15,	// (0x00009972) cell_ai5_widget_pane_g10_ParamLimits

0x0d15,	// (0x00009972) cell_ai5_widget_pane_g10

0x1032,	// (0x00009c8f) status_icon_pane_g1

0x7ec6,	// (0x00010b23) bg_popup_sub_pane_cp13

0x103a,	// (0x00009c97) popup_keymap_window_t1

0x9eac,	// (0x00012b09) control_pane_g6_ParamLimits

0x9eac,	// (0x00012b09) control_pane_g6

0x9eb9,	// (0x00012b16) control_pane_g7_ParamLimits

0x9eb9,	// (0x00012b16) control_pane_g7

0x9ec6,	// (0x00012b23) control_pane_g8_ParamLimits

0x9ec6,	// (0x00012b23) control_pane_g8

0x0f5d,	// (0x00009bba) dt_sta_controll_pane_ParamLimits

0x0f6a,	// (0x00009bc7) dt_sta_indi_pane_ParamLimits

0x0f7b,	// (0x00009bd8) dt_sta_title_pane_ParamLimits

0x875f,	// (0x000113bc) aid_size_touch_scroll_bar_cale

0x64d6,	// (0x0000f133) popup_discreet_window_ParamLimits

0x64d6,	// (0x0000f133) popup_discreet_window

0x6550,	// (0x0000f1ad) popup_sk_window

0xb137,	// (0x00013d94) bg_popup_sub_pane_cp28_ParamLimits

0xb137,	// (0x00013d94) bg_popup_sub_pane_cp28

0x1048,	// (0x00009ca5) popup_discreet_window_g1_ParamLimits

0x1048,	// (0x00009ca5) popup_discreet_window_g1

0x1068,	// (0x00009cc5) popup_discreet_window_t1_ParamLimits

0x1068,	// (0x00009cc5) popup_discreet_window_t1

0x1086,	// (0x00009ce3) popup_discreet_window_t2_ParamLimits

0x1086,	// (0x00009ce3) popup_discreet_window_t2

0x0002,

0xfec7,	// (0x00018b24) popup_discreet_window_t_ParamLimits

0xfec7,	// (0x00018b24) popup_discreet_window_t

0x7e5c,	// (0x00010ab9) popup_sk_window_g1

0x7e66,	// (0x00010ac3) popup_sk_window_g2

0x0001,

0xfece,	// (0x00018b2b) popup_sk_window_g

0x10fa,	// (0x00009d57) popup_sk_window_t1

0x10ec,	// (0x00009d49) popup_sk_window_t1_copy1

0x0c99,	// (0x000098f6) cell_ai5_widget_pane_g2_ParamLimits

0x0dec,	// (0x00009a49) cell_ai5_widget_pane_t9_ParamLimits

0x0dec,	// (0x00009a49) cell_ai5_widget_pane_t9

0x7ec6,	// (0x00010b23) main_fep_fshwr2_pane

0x1108,	// (0x00009d65) aid_fshwr2_btn_pane

0x1110,	// (0x00009d6d) aid_fshwr2_syb_pane

0x1118,	// (0x00009d75) aid_fshwr2_txt_pane

0x1120,	// (0x00009d7d) fshwr2_func_candi_pane

0x112c,	// (0x00009d89) fshwr2_hwr_syb_pane

0x1138,	// (0x00009d95) fshwr2_icf_pane

0x7ec6,	// (0x00010b23) fshwr2_icf_bg_pane

0x1156,	// (0x00009db3) fshwr2_icf_pane_t1_ParamLimits

0x1156,	// (0x00009db3) fshwr2_icf_pane_t1

0xd3b2,	// (0x0001600f) fshwr2_func_candi_pane_g1

0x116d,	// (0x00009dca) fshwr2_func_candi_row_pane_ParamLimits

0x116d,	// (0x00009dca) fshwr2_func_candi_row_pane

0x117e,	// (0x00009ddb) cell_fshwr2_syb_pane_ParamLimits

0x117e,	// (0x00009ddb) cell_fshwr2_syb_pane

0xd659,	// (0x000162b6) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd659,	// (0x000162b6) fshwr2_hwr_syb_pane_g1

0x7ec6,	// (0x00010b23) bg_popup_call_pane_cp01

0x119a,	// (0x00009df7) fshwr2_func_candi_cell_pane_ParamLimits

0x119a,	// (0x00009df7) fshwr2_func_candi_cell_pane

0x11cb,	// (0x00009e28) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x11cb,	// (0x00009e28) fshwr2_func_candi_cell_bg_pane

0x11e5,	// (0x00009e42) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x11e5,	// (0x00009e42) fshwr2_func_candi_cell_pane_g1

0x1205,	// (0x00009e62) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x1205,	// (0x00009e62) fshwr2_func_candi_cell_pane_t1

0x7ec6,	// (0x00010b23) bg_button_pane_cp08

0x9bd9,	// (0x00012836) cell_fshwr2_syb_bg_pane

0x1218,	// (0x00009e75) cell_fshwr2_syb_bg_pane_g1

0x1220,	// (0x00009e7d) cell_fshwr2_syb_bg_pane_t1

0x8d93,	// (0x000119f0) main_tmo_pane

0xbc48,	// (0x000148a5) uni_indicator_pane_g1_ParamLimits

0xbc5d,	// (0x000148ba) uni_indicator_pane_g2_ParamLimits

0xbc73,	// (0x000148d0) uni_indicator_pane_g3_ParamLimits

0xbc89,	// (0x000148e6) uni_indicator_pane_g4_ParamLimits

0xbc89,	// (0x000148e6) uni_indicator_pane_g4

0xbc9d,	// (0x000148fa) uni_indicator_pane_g5_ParamLimits

0xbc9d,	// (0x000148fa) uni_indicator_pane_g5

0xbcb1,	// (0x0001490e) uni_indicator_pane_g6_ParamLimits

0xbcb1,	// (0x0001490e) uni_indicator_pane_g6

0xf955,	// (0x000185b2) uni_indicator_pane_g_ParamLimits

0xec01,	// (0x0001785e) popup_tmo_note_window_ParamLimits

0xec01,	// (0x0001785e) popup_tmo_note_window

0x7ec6,	// (0x00010b23) fshwr2_bg_pane

0x11f6,	// (0x00009e53) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x11f6,	// (0x00009e53) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed3,	// (0x00018b30) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed3,	// (0x00018b30) fshwr2_func_candi_cell_pane_g

0xd3b2,	// (0x0001600f) bg_popup_window_pane_cp01

0x122f,	// (0x00009e8c) bg_popup_window_pane_g1_cp01

0x1238,	// (0x00009e95) bg_popup_window_pane_cp22_ParamLimits

0x1238,	// (0x00009e95) bg_popup_window_pane_cp22

0x1246,	// (0x00009ea3) listscroll_tmo_link_pane_ParamLimits

0x1246,	// (0x00009ea3) listscroll_tmo_link_pane

0x1286,	// (0x00009ee3) popup_tmo_note_window_g1_ParamLimits

0x1286,	// (0x00009ee3) popup_tmo_note_window_g1

0x1293,	// (0x00009ef0) tmo_note_info_pane_ParamLimits

0x1293,	// (0x00009ef0) tmo_note_info_pane

0x12ad,	// (0x00009f0a) list_tmo_note_info_pane_g1_ParamLimits

0x12ad,	// (0x00009f0a) list_tmo_note_info_pane_g1

0x12c4,	// (0x00009f21) list_tmo_note_info_pane_g2_ParamLimits

0x12c4,	// (0x00009f21) list_tmo_note_info_pane_g2

0x0001,

0xfed8,	// (0x00018b35) list_tmo_note_info_pane_g_ParamLimits

0xfed8,	// (0x00018b35) list_tmo_note_info_pane_g

0x12e0,	// (0x00009f3d) list_tmo_note_info_text_pane_ParamLimits

0x12e0,	// (0x00009f3d) list_tmo_note_info_text_pane

0x1365,	// (0x00009fc2) list_tmo_link_pane

0x1372,	// (0x00009fcf) scroll_pane_cp20

0x137f,	// (0x00009fdc) list_single_tmo_link_pane_ParamLimits

0x137f,	// (0x00009fdc) list_single_tmo_link_pane

0x138f,	// (0x00009fec) list_single_tmo_link_pane_t1

0x139d,	// (0x00009ffa) list_tmo_note_info_text_pane_t1_ParamLimits

0x139d,	// (0x00009ffa) list_tmo_note_info_text_pane_t1

0x8fd6,	// (0x00011c33) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8fd6,	// (0x00011c33) aid_size_touch_scroll_bar_cp01

0x8e4d,	// (0x00011aaa) aid_size_touch_slider_marker

0x6538,	// (0x0000f195) popup_settings_window_ParamLimits

0x6538,	// (0x0000f195) popup_settings_window

0x9f87,	// (0x00012be4) popup_candi_list_indi_window

0xa550,	// (0x000131ad) aid_touch_navi_pane_ParamLimits

0x7635,	// (0x00010292) rs_clock_indi_pane

0x763e,	// (0x0001029b) sctrl_sk_bottom_pane_ParamLimits

0x764f,	// (0x000102ac) sctrl_sk_top_pane_ParamLimits

0x7756,	// (0x000103b3) popup_fep_tooltip_window

0x0c5f,	// (0x000098bc) aid_size_cell_widget_grid_ParamLimits

0x0c8d,	// (0x000098ea) cell_ai5_widget_pane_g1_ParamLimits

0x0c8d,	// (0x000098ea) cell_ai5_widget_pane_g1

0x0cd5,	// (0x00009932) cell_ai5_widget_pane_g6_ParamLimits

0x0ce1,	// (0x0000993e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe56,	// (0x00018ab3) cell_ai5_widget_pane_g_ParamLimits

0xfe56,	// (0x00018ab3) cell_ai5_widget_pane_g

0x0e10,	// (0x00009a6d) cell_ai5_widget_pane_t10_ParamLimits

0x0e10,	// (0x00009a6d) cell_ai5_widget_pane_t10

0x0e22,	// (0x00009a7f) grid_ai5_widget_pane_ParamLimits

0x0ec2,	// (0x00009b1f) cell_contacts_ai5_widget_pane_ParamLimits

0x0ec2,	// (0x00009b1f) cell_contacts_ai5_widget_pane

0x109b,	// (0x00009cf8) popup_discreet_window_t3_ParamLimits

0x109b,	// (0x00009cf8) popup_discreet_window_t3

0x1142,	// (0x00009d9f) popup_fshwr2_char_preview_window_ParamLimits

0x1142,	// (0x00009d9f) popup_fshwr2_char_preview_window

0x12fe,	// (0x00009f5b) tmo_note_info_pane_t1

0x1313,	// (0x00009f70) tmo_note_info_pane_t2

0x132c,	// (0x00009f89) tmo_note_info_pane_t3

0x1341,	// (0x00009f9e) tmo_note_info_pane_t4

0x1353,	// (0x00009fb0) tmo_note_info_pane_t5

0x0004,

0xfedd,	// (0x00018b3a) tmo_note_info_pane_t

0x1365,	// (0x00009fc2) list_tmo_link_pane_ParamLimits

0x1372,	// (0x00009fcf) scroll_pane_cp20_ParamLimits

0x7ec6,	// (0x00010b23) bg_popup_fep_char_preview_window_cp01

0x13b6,	// (0x0000a013) popup_fshwr2_char_preview_window_t1

0x13c4,	// (0x0000a021) popup_candi_list_indi_window_g1

0x13cd,	// (0x0000a02a) bg_cell_contacts_ai5_widget_pane

0x13d9,	// (0x0000a036) cell_contacts_ai5_widget_pane_g1

0x13ed,	// (0x0000a04a) cell_contacts_ai5_widget_pane_g2

0x13fc,	// (0x0000a059) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee8,	// (0x00018b45) cell_contacts_ai5_widget_pane_g

0x140f,	// (0x0000a06c) cell_contacts_ai5_widget_pane_t1

0x8d93,	// (0x000119f0) highlight_cell_shortcut_ai5_widget_pane_cp01

0x1489,	// (0x0000a0e6) settings_container_pane

0x9bd9,	// (0x00012836) listscroll_set_pane_copy1

0xc89f,	// (0x000154fc) scroll_pane_cp121_copy1

0x1495,	// (0x0000a0f2) set_content_pane_copy1

0x149d,	// (0x0000a0fa) aid_height_set_list_copy1_ParamLimits

0x149d,	// (0x0000a0fa) aid_height_set_list_copy1

0xbecc,	// (0x00014b29) aid_size_parent_copy1_ParamLimits

0xbecc,	// (0x00014b29) aid_size_parent_copy1

0x14a9,	// (0x0000a106) button_value_adjust_pane_cp6_copy1_ParamLimits

0x14a9,	// (0x0000a106) button_value_adjust_pane_cp6_copy1

0x9f5f,	// (0x00012bbc) list_highlight_pane_cp2_copy1_ParamLimits

0x9f5f,	// (0x00012bbc) list_highlight_pane_cp2_copy1

0x14bd,	// (0x0000a11a) list_set_pane_copy1_ParamLimits

0x14bd,	// (0x0000a11a) list_set_pane_copy1

0x1424,	// (0x0000a081) main_pane_set_t1_copy1_ParamLimits

0x1424,	// (0x0000a081) main_pane_set_t1_copy1

0x145e,	// (0x0000a0bb) main_pane_set_t2_copy1_ParamLimits

0x145e,	// (0x0000a0bb) main_pane_set_t2_copy1

0x156a,	// (0x0000a1c7) main_pane_set_t3_copy1

0x1578,	// (0x0000a1d5) main_pane_set_t4_copy1

0x147d,	// (0x0000a0da) set_content_pane_g1_copy1_ParamLimits

0x147d,	// (0x0000a0da) set_content_pane_g1_copy1

0x1586,	// (0x0000a1e3) setting_code_pane_copy1

0x1590,	// (0x0000a1ed) setting_slider_graphic_pane_copy1

0x1590,	// (0x0000a1ed) setting_slider_pane_copy1

0x159a,	// (0x0000a1f7) setting_text_pane_copy1

0x15a4,	// (0x0000a201) setting_volume_pane_copy1

0x15ad,	// (0x0000a20a) settings_code_pane_cp2_copy1

0x15b5,	// (0x0000a212) settings_code_pane_cp_copy1_ParamLimits

0x15b5,	// (0x0000a212) settings_code_pane_cp_copy1

0x15c9,	// (0x0000a226) volume_set_pane_copy1

0x15d1,	// (0x0000a22e) volume_set_pane_g10_copy1

0x15d9,	// (0x0000a236) volume_set_pane_g1_copy1

0x15e1,	// (0x0000a23e) volume_set_pane_g2_copy1

0x15e9,	// (0x0000a246) volume_set_pane_g3_copy1

0x15f1,	// (0x0000a24e) volume_set_pane_g4_copy1

0x15f9,	// (0x0000a256) volume_set_pane_g5_copy1

0x1601,	// (0x0000a25e) volume_set_pane_g6_copy1

0x1609,	// (0x0000a266) volume_set_pane_g7_copy1

0x1611,	// (0x0000a26e) volume_set_pane_g8_copy1

0x1619,	// (0x0000a276) volume_set_pane_g9_copy1

0x7fba,	// (0x00010c17) bg_set_opt_pane_cp_copy1_ParamLimits

0x7fba,	// (0x00010c17) bg_set_opt_pane_cp_copy1

0x1621,	// (0x0000a27e) setting_slider_pane_t1_copy1_ParamLimits

0x1621,	// (0x0000a27e) setting_slider_pane_t1_copy1

0x163f,	// (0x0000a29c) setting_slider_pane_t2_copy1_ParamLimits

0x163f,	// (0x0000a29c) setting_slider_pane_t2_copy1

0x1659,	// (0x0000a2b6) setting_slider_pane_t3_copy1_ParamLimits

0x1659,	// (0x0000a2b6) setting_slider_pane_t3_copy1

0x1671,	// (0x0000a2ce) slider_set_pane_copy1_ParamLimits

0x1671,	// (0x0000a2ce) slider_set_pane_copy1

0x8ecf,	// (0x00011b2c) set_opt_bg_pane_g1_copy2

0x8ed7,	// (0x00011b34) set_opt_bg_pane_g2_copy2

0x1687,	// (0x0000a2e4) set_opt_bg_pane_g3_copy2

0x8ee7,	// (0x00011b44) set_opt_bg_pane_g4_copy2

0x8eef,	// (0x00011b4c) set_opt_bg_pane_g5_copy2

0x8ef7,	// (0x00011b54) set_opt_bg_pane_g6_copy2

0x1691,	// (0x0000a2ee) set_opt_bg_pane_g7_copy2

0x1699,	// (0x0000a2f6) set_opt_bg_pane_g8_copy2

0x16a3,	// (0x0000a300) set_opt_bg_pane_g9_copy2

0x7e70,	// (0x00010acd) aid_size_touch_slider_mark_copy1_ParamLimits

0x7e70,	// (0x00010acd) aid_size_touch_slider_mark_copy1

0x16c1,	// (0x0000a31e) slider_set_pane_g1_copy1

0x7e84,	// (0x00010ae1) slider_set_pane_g2_copy1

0x7020,	// (0x0000fc7d) slider_set_pane_g3_copy1_ParamLimits

0x7020,	// (0x0000fc7d) slider_set_pane_g3_copy1

0x7034,	// (0x0000fc91) slider_set_pane_g4_copy1_ParamLimits

0x7034,	// (0x0000fc91) slider_set_pane_g4_copy1

0x704c,	// (0x0000fca9) slider_set_pane_g5_copy1_ParamLimits

0x704c,	// (0x0000fca9) slider_set_pane_g5_copy1

0x7020,	// (0x0000fc7d) slider_set_pane_g6_copy1_ParamLimits

0x7020,	// (0x0000fc7d) slider_set_pane_g6_copy1

0x7e8c,	// (0x00010ae9) slider_set_pane_g7_copy1_ParamLimits

0x7e8c,	// (0x00010ae9) slider_set_pane_g7_copy1

0x7eda,	// (0x00010b37) bg_set_opt_pane_cp2_copy1

0x16e8,	// (0x0000a345) setting_slider_graphic_pane_g1_copy1

0x16f1,	// (0x0000a34e) setting_slider_graphic_pane_t1_copy1

0x1701,	// (0x0000a35e) setting_slider_graphic_pane_t2_copy1

0x1711,	// (0x0000a36e) slider_set_pane_cp_copy1

0x1721,	// (0x0000a37e) input_focus_pane_cp1_copy1

0x172a,	// (0x0000a387) list_set_text_pane_copy1

0x1732,	// (0x0000a38f) setting_text_pane_g1_copy1

0x173b,	// (0x0000a398) set_text_pane_t1_copy1

0x1721,	// (0x0000a37e) input_focus_pane_cp2_copy1

0x1732,	// (0x0000a38f) setting_code_pane_g1_copy1

0x1758,	// (0x0000a3b5) setting_code_pane_t1_copy1

0x1766,	// (0x0000a3c3) list_set_graphic_pane_copy1

0x7eda,	// (0x00010b37) bg_set_opt_pane_cp4_copy1

0x98db,	// (0x00012538) list_set_graphic_pane_g1_copy1_ParamLimits

0x98db,	// (0x00012538) list_set_graphic_pane_g1_copy1

0x177a,	// (0x0000a3d7) list_set_graphic_pane_g2_copy1

0x98f3,	// (0x00012550) list_set_graphic_pane_t1_copy1_ParamLimits

0x98f3,	// (0x00012550) list_set_graphic_pane_t1_copy1

0xd3b2,	// (0x0001600f) rs_clock_indi_pane_g1

0x1782,	// (0x0000a3df) rs_clock_indi_pane_t1

0x1790,	// (0x0000a3ed) rs_indi_pane

0x1798,	// (0x0000a3f5) rs_indi_pane_g1

0x17a1,	// (0x0000a3fe) rs_indi_pane_g2

0x17aa,	// (0x0000a407) rs_indi_pane_g3

0x0002,

0xfeef,	// (0x00018b4c) rs_indi_pane_g

0x9bd9,	// (0x00012836) bg_popup_preview_window_pane_cp03

0x17b3,	// (0x0000a410) popup_fep_tooltip_window_t1

0xe23f,	// (0x00016e9c) popup_note2_window_g2_ParamLimits

0xe23f,	// (0x00016e9c) popup_note2_window_g2

0x0001,

0xfc94,	// (0x000188f1) popup_note2_window_g_ParamLimits

0xfc94,	// (0x000188f1) popup_note2_window_g

0xe821,	// (0x0001747e) bg_popup_sub_pane_cp11_ParamLimits

0xe82e,	// (0x0001748b) cell_ai3_links_pane_g1_ParamLimits

0xe845,	// (0x000174a2) cell_ai3_links_pane_t1

0x173b,	// (0x0000a398) set_text_pane_t1_copy1_ParamLimits

0x9ae8,	// (0x00012745) cell_graphic_popup_pane_cp2_ParamLimits

0x9ae8,	// (0x00012745) cell_graphic_popup_pane_cp2

0x17c1,	// (0x0000a41e) cell_graphic_popup_pane_g1_cp2

0x8572,	// (0x000111cf) cell_graphic_popup_pane_g2_cp2

0x17c9,	// (0x0000a426) cell_graphic_popup_pane_g3_cp2

0x17d1,	// (0x0000a42e) cell_graphic_popup_pane_t2_cp2

0x8583,	// (0x000111e0) grid_highlight_pane_cp3_cp2

0x92b5,	// (0x00011f12) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8d93,	// (0x000119f0) main_tmo_pane_ParamLimits

0xebf5,	// (0x00017852) popup_tmo_big_image_note_window

0x0c7d,	// (0x000098da) cell_ai5_widget_list_pane

0x0c85,	// (0x000098e2) cell_ai5_widget_lrg_icon_pane

0x12fe,	// (0x00009f5b) tmo_note_info_pane_t1_ParamLimits

0x1313,	// (0x00009f70) tmo_note_info_pane_t2_ParamLimits

0x132c,	// (0x00009f89) tmo_note_info_pane_t3_ParamLimits

0x1341,	// (0x00009f9e) tmo_note_info_pane_t4_ParamLimits

0x1353,	// (0x00009fb0) tmo_note_info_pane_t5_ParamLimits

0xfedd,	// (0x00018b3a) tmo_note_info_pane_t_ParamLimits

0x1489,	// (0x0000a0e6) settings_container_pane_ParamLimits

0x1719,	// (0x0000a376) indicator_popup_pane_cp5

0x1719,	// (0x0000a376) indicator_popup_pane_cp6

0x1766,	// (0x0000a3c3) list_set_graphic_pane_copy1_ParamLimits

0x7ec6,	// (0x00010b23) bg_popup_window_pane_cp23

0x17df,	// (0x0000a43c) popup_tmo_big_image_note_window_g1

0x17ea,	// (0x0000a447) popup_tmo_big_image_note_window_t1

0x17fa,	// (0x0000a457) popup_tmo_big_image_note_window_t2

0x180a,	// (0x0000a467) popup_tmo_big_image_note_window_t3

0x0002,

0xfef6,	// (0x00018b53) popup_tmo_big_image_note_window_t

0x181a,	// (0x0000a477) cell_ai5_widget_lrg_icon_pane_g1

0x1822,	// (0x0000a47f) cell_ai5_widget_lrg_icon_pane_t1

0x1830,	// (0x0000a48d) cell_ai5_widget_list_row_pane_ParamLimits

0x1830,	// (0x0000a48d) cell_ai5_widget_list_row_pane

0x1849,	// (0x0000a4a6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x1849,	// (0x0000a4a6) cell_ai5_widget_list_row_pane_g1

0x1856,	// (0x0000a4b3) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x1856,	// (0x0000a4b3) cell_ai5_widget_list_row_pane_t1

0x186e,	// (0x0000a4cb) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x186e,	// (0x0000a4cb) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfefd,	// (0x00018b5a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfefd,	// (0x00018b5a) cell_ai5_widget_list_row_pane_t

0x63fd,	// (0x0000f05a) main_fep_vtchi_ss_pane

0x1880,	// (0x0000a4dd) popup_fep_char_pre_window

0x1888,	// (0x0000a4e5) popup_fep_ituss_window

0x1893,	// (0x0000a4f0) popup_fep_vkbss_window

0x189c,	// (0x0000a4f9) grid_vkbss_keypad_pane_ParamLimits

0x189c,	// (0x0000a4f9) grid_vkbss_keypad_pane

0x18ac,	// (0x0000a509) ituss_keypad_pane

0x18b4,	// (0x0000a511) aid_vkbss_key_offset_ParamLimits

0x18b4,	// (0x0000a511) aid_vkbss_key_offset

0x18c3,	// (0x0000a520) cell_vkbss_key_pane_ParamLimits

0x18c3,	// (0x0000a520) cell_vkbss_key_pane

0x18d9,	// (0x0000a536) bg_cell_vkbss_key_g1_ParamLimits

0x18d9,	// (0x0000a536) bg_cell_vkbss_key_g1

0x18e5,	// (0x0000a542) cell_vkbss_key_3p_pane_ParamLimits

0x18e5,	// (0x0000a542) cell_vkbss_key_3p_pane

0x18ff,	// (0x0000a55c) cell_vkbss_key_g1_ParamLimits

0x18ff,	// (0x0000a55c) cell_vkbss_key_g1

0x1919,	// (0x0000a576) cell_vkbss_key_t1_ParamLimits

0x1919,	// (0x0000a576) cell_vkbss_key_t1

0x1944,	// (0x0000a5a1) cell_ituss_key_pane_ParamLimits

0x1944,	// (0x0000a5a1) cell_ituss_key_pane

0x1953,	// (0x0000a5b0) bg_cell_ituss_key_g1_ParamLimits

0x1953,	// (0x0000a5b0) bg_cell_ituss_key_g1

0x195f,	// (0x0000a5bc) cell_ituss_key_pane_g1_ParamLimits

0x195f,	// (0x0000a5bc) cell_ituss_key_pane_g1

0x196b,	// (0x0000a5c8) cell_ituss_key_pane_g2_ParamLimits

0x196b,	// (0x0000a5c8) cell_ituss_key_pane_g2

0x0001,

0xff02,	// (0x00018b5f) cell_ituss_key_pane_g_ParamLimits

0xff02,	// (0x00018b5f) cell_ituss_key_pane_g

0x197e,	// (0x0000a5db) cell_ituss_key_t1_ParamLimits

0x197e,	// (0x0000a5db) cell_ituss_key_t1

0x199c,	// (0x0000a5f9) cell_ituss_key_t2_ParamLimits

0x199c,	// (0x0000a5f9) cell_ituss_key_t2

0x19bb,	// (0x0000a618) cell_ituss_key_t3_ParamLimits

0x19bb,	// (0x0000a618) cell_ituss_key_t3

0x19da,	// (0x0000a637) cell_ituss_key_t4_ParamLimits

0x19da,	// (0x0000a637) cell_ituss_key_t4

0x0003,

0xff07,	// (0x00018b64) cell_ituss_key_t_ParamLimits

0xff07,	// (0x00018b64) cell_ituss_key_t

0x19f9,	// (0x0000a656) cell_vkbss_key_3p_pane_g1

0x1a01,	// (0x0000a65e) cell_vkbss_key_3p_pane_g2

0x1a09,	// (0x0000a666) cell_vkbss_key_3p_pane_g3

0x0002,

0xff10,	// (0x00018b6d) cell_vkbss_key_3p_pane_g

0x7ec6,	// (0x00010b23) bg_popup_fep_char_preview_window_cp02

0x1a11,	// (0x0000a66e) popup_fep_char_pre_window_t1

0x0c55,	// (0x000098b2) main_ai5_sk_pane

0x13cd,	// (0x0000a02a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x13d9,	// (0x0000a036) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x13ed,	// (0x0000a04a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x13fc,	// (0x0000a059) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee8,	// (0x00018b45) cell_contacts_ai5_widget_pane_g_ParamLimits

0x140f,	// (0x0000a06c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8d93,	// (0x000119f0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x1a20,	// (0x0000a67d) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
