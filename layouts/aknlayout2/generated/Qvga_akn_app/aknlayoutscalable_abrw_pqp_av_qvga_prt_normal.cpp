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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000088a0 };

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
0x8742,	// (0x00010fe2) Screen

0x8754,	// (0x00010ff4) application_window_ParamLimits

0x8754,	// (0x00010ff4) application_window

0x876c,	// (0x0001100c) screen_g1

0x8776,	// (0x00011016) area_bottom_pane_ParamLimits

0x8776,	// (0x00011016) area_bottom_pane

0x87db,	// (0x0001107b) area_top_pane_ParamLimits

0x87db,	// (0x0001107b) area_top_pane

0x659f,	// (0x0000ee3f) main_pane_ParamLimits

0x659f,	// (0x0000ee3f) main_pane

0x8853,	// (0x000110f3) misc_graphics

0xa805,	// (0x000130a5) battery_pane_ParamLimits

0xa805,	// (0x000130a5) battery_pane

0xb52a,	// (0x00013dca) bg_status_flat_pane_g8

0xb532,	// (0x00013dd2) bg_status_flat_pane_g9

0xa8c0,	// (0x00013160) context_pane_ParamLimits

0xa8c0,	// (0x00013160) context_pane

0xa9d7,	// (0x00013277) navi_pane_ParamLimits

0xa9d7,	// (0x00013277) navi_pane

0xaa54,	// (0x000132f4) signal_pane_ParamLimits

0xaa54,	// (0x000132f4) signal_pane

0x0008,

0xf84f,	// (0x000180ef) bg_status_flat_pane_g

0xaabd,	// (0x0001335d) status_pane_g1_ParamLimits

0xaabd,	// (0x0001335d) status_pane_g1

0xaac9,	// (0x00013369) status_pane_g2_ParamLimits

0xaac9,	// (0x00013369) status_pane_g2

0xaad5,	// (0x00013375) status_pane_g3_ParamLimits

0xaad5,	// (0x00013375) status_pane_g3

0x0004,

0xf776,	// (0x00018016) status_pane_g_ParamLimits

0xf776,	// (0x00018016) status_pane_g

0xab07,	// (0x000133a7) title_pane_ParamLimits

0xab07,	// (0x000133a7) title_pane

0xab44,	// (0x000133e4) uni_indicator_pane_ParamLimits

0xab44,	// (0x000133e4) uni_indicator_pane

0xa71b,	// (0x00012fbb) bg_list_pane_ParamLimits

0xa71b,	// (0x00012fbb) bg_list_pane

0xa73b,	// (0x00012fdb) find_pane

0xa743,	// (0x00012fe3) listscroll_app_pane_ParamLimits

0xa743,	// (0x00012fe3) listscroll_app_pane

0xa74f,	// (0x00012fef) listscroll_form_pane

0xa757,	// (0x00012ff7) listscroll_gen_pane_ParamLimits

0xa757,	// (0x00012ff7) listscroll_gen_pane

0x6da2,	// (0x0000f642) listscroll_set_pane

0x997b,	// (0x0001221b) main_idle_act_pane

0xa42f,	// (0x00012ccf) main_idle_trad_pane

0xa42f,	// (0x00012ccf) main_list_empty_pane

0xa77e,	// (0x0001301e) main_midp_pane

0xa78a,	// (0x0001302a) main_pane_g1_ParamLimits

0xa78a,	// (0x0001302a) main_pane_g1

0x6db8,	// (0x0000f658) popup_ai_message_window_ParamLimits

0x6db8,	// (0x0000f658) popup_ai_message_window

0x6e4e,	// (0x0000f6ee) popup_fep_china_uni_window_ParamLimits

0x6e4e,	// (0x0000f6ee) popup_fep_china_uni_window

0x6e8c,	// (0x0000f72c) popup_fep_japan_candidate_window_ParamLimits

0x6e8c,	// (0x0000f72c) popup_fep_japan_candidate_window

0x6eaa,	// (0x0000f74a) popup_fep_japan_predictive_window_ParamLimits

0x6eaa,	// (0x0000f74a) popup_fep_japan_predictive_window

0x6ed6,	// (0x0000f776) popup_find_window

0x6ee3,	// (0x0000f783) popup_grid_graphic_window_ParamLimits

0x6ee3,	// (0x0000f783) popup_grid_graphic_window

0x6f01,	// (0x0000f7a1) popup_large_graphic_colour_window

0x6f23,	// (0x0000f7c3) popup_menu_window_ParamLimits

0x6f23,	// (0x0000f7c3) popup_menu_window

0x705b,	// (0x0000f8fb) popup_note_image_window

0x7049,	// (0x0000f8e9) popup_note_wait_window_ParamLimits

0x7049,	// (0x0000f8e9) popup_note_wait_window

0x7049,	// (0x0000f8e9) popup_note_window_ParamLimits

0x7049,	// (0x0000f8e9) popup_note_window

0x70af,	// (0x0000f94f) popup_query_code_window_ParamLimits

0x70af,	// (0x0000f94f) popup_query_code_window

0x70c1,	// (0x0000f961) popup_query_data_code_window_ParamLimits

0x70c1,	// (0x0000f961) popup_query_data_code_window

0x70d6,	// (0x0000f976) popup_query_data_window_ParamLimits

0x70d6,	// (0x0000f976) popup_query_data_window

0x70ec,	// (0x0000f98c) popup_query_sat_info_window_ParamLimits

0x70ec,	// (0x0000f98c) popup_query_sat_info_window

0x711d,	// (0x0000f9bd) popup_snote_single_graphic_window_ParamLimits

0x711d,	// (0x0000f9bd) popup_snote_single_graphic_window

0x711d,	// (0x0000f9bd) popup_snote_single_text_window_ParamLimits

0x711d,	// (0x0000f9bd) popup_snote_single_text_window

0x7130,	// (0x0000f9d0) popup_sub_window_general

0x7234,	// (0x0000fad4) popup_window_general_ParamLimits

0x7234,	// (0x0000fad4) popup_window_general

0xa7a0,	// (0x00013040) power_save_pane

0x6c32,	// (0x0000f4d2) control_pane_g1_ParamLimits

0x6c32,	// (0x0000f4d2) control_pane_g1

0x6c53,	// (0x0000f4f3) control_pane_g2_ParamLimits

0x6c53,	// (0x0000f4f3) control_pane_g2

0xa6e6,	// (0x00012f86) control_pane_g3_ParamLimits

0xa6e6,	// (0x00012f86) control_pane_g3

0x0007,

0xf75e,	// (0x00017ffe) control_pane_g_ParamLimits

0xf75e,	// (0x00017ffe) control_pane_g

0x6c95,	// (0x0000f535) control_pane_t1_ParamLimits

0x6c95,	// (0x0000f535) control_pane_t1

0x6ce9,	// (0x0000f589) control_pane_t2_ParamLimits

0x6ce9,	// (0x0000f589) control_pane_t2

0x0002,

0xf76f,	// (0x0001800f) control_pane_t_ParamLimits

0xf76f,	// (0x0001800f) control_pane_t

0xa60d,	// (0x00012ead) navi_navi_volume_pane_cp1

0xa615,	// (0x00012eb5) status_small_icon_pane

0xa61d,	// (0x00012ebd) status_small_pane_g1_ParamLimits

0xa61d,	// (0x00012ebd) status_small_pane_g1

0xa651,	// (0x00012ef1) status_small_pane_g2_ParamLimits

0xa651,	// (0x00012ef1) status_small_pane_g2

0xa65d,	// (0x00012efd) status_small_pane_g3_ParamLimits

0xa65d,	// (0x00012efd) status_small_pane_g3

0xa669,	// (0x00012f09) status_small_pane_g4_ParamLimits

0xa669,	// (0x00012f09) status_small_pane_g4

0xa675,	// (0x00012f15) status_small_pane_g5_ParamLimits

0xa675,	// (0x00012f15) status_small_pane_g5

0xa681,	// (0x00012f21) status_small_pane_g6_ParamLimits

0xa681,	// (0x00012f21) status_small_pane_g6

0x0007,

0xf74d,	// (0x00017fed) status_small_pane_g_ParamLimits

0xf74d,	// (0x00017fed) status_small_pane_g

0xa6b0,	// (0x00012f50) status_small_pane_t1

0xa6d2,	// (0x00012f72) status_small_wait_pane_ParamLimits

0xa6d2,	// (0x00012f72) status_small_wait_pane

0x9e82,	// (0x00012722) aid_levels_signal_ParamLimits

0x9e82,	// (0x00012722) aid_levels_signal

0x9e93,	// (0x00012733) signal_pane_g1_ParamLimits

0x9e93,	// (0x00012733) signal_pane_g1

0x9ea9,	// (0x00012749) signal_pane_g2_ParamLimits

0x9ea9,	// (0x00012749) signal_pane_g2

0x0003,

0xf6de,	// (0x00017f7e) signal_pane_g_ParamLimits

0xf6de,	// (0x00017f7e) signal_pane_g

0x9ee4,	// (0x00012784) context_pane_g1

0x885d,	// (0x000110fd) title_pane_g1

0x8893,	// (0x00011133) title_pane_t1

0x88fb,	// (0x0001119b) title_pane_t2

0x8921,	// (0x000111c1) title_pane_t3

0x0002,

0xf532,	// (0x00017dd2) title_pane_t

0xab5a,	// (0x000133fa) aid_levels_battery_ParamLimits

0xab5a,	// (0x000133fa) aid_levels_battery

0xab6d,	// (0x0001340d) battery_pane_g1_ParamLimits

0xab6d,	// (0x0001340d) battery_pane_g1

0xab82,	// (0x00013422) battery_pane_g2_ParamLimits

0xab82,	// (0x00013422) battery_pane_g2

0x0001,

0xf781,	// (0x00018021) battery_pane_g_ParamLimits

0xf781,	// (0x00018021) battery_pane_g

0xbe13,	// (0x000146b3) uni_indicator_pane_g1

0xbe27,	// (0x000146c7) uni_indicator_pane_g2

0xbe3c,	// (0x000146dc) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x00018197) uni_indicator_pane_g

0x98a8,	// (0x00012148) navi_icon_pane_ParamLimits

0x98a8,	// (0x00012148) navi_icon_pane

0x8853,	// (0x000110f3) navi_midp_pane

0x8853,	// (0x000110f3) navi_navi_pane

0x98a8,	// (0x00012148) navi_text_pane_ParamLimits

0x98a8,	// (0x00012148) navi_text_pane

0x876c,	// (0x0001100c) status_small_wait_pane_g1

0x8d95,	// (0x00011635) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x00018192) status_small_wait_pane_g

0xbb46,	// (0x000143e6) navi_navi_icon_text_pane

0xbb4e,	// (0x000143ee) navi_navi_pane_g1_ParamLimits

0xbb4e,	// (0x000143ee) navi_navi_pane_g1

0xbb60,	// (0x00014400) navi_navi_pane_g2_ParamLimits

0xbb60,	// (0x00014400) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x00018160) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x00018160) navi_navi_pane_g

0xbb72,	// (0x00014412) navi_navi_tabs_pane

0xbb46,	// (0x000143e6) navi_navi_text_pane

0xbb46,	// (0x000143e6) navi_navi_volume_pane

0xbb22,	// (0x000143c2) navi_text_pane_t1

0xbb16,	// (0x000143b6) navi_icon_pane_g1

0xba6a,	// (0x0001430a) navi_navi_text_pane_t1

0x7519,	// (0x0000fdb9) navi_navi_volume_pane_g1

0x7521,	// (0x0000fdc1) volume_small_pane

0xb9d0,	// (0x00014270) navi_navi_icon_text_pane_g1

0xb9d8,	// (0x00014278) navi_navi_icon_text_pane_t1

0xb58a,	// (0x00013e2a) navi_tabs_2_long_pane

0xb58a,	// (0x00013e2a) navi_tabs_2_pane

0xb58a,	// (0x00013e2a) navi_tabs_3_long_pane

0xb58a,	// (0x00013e2a) navi_tabs_3_pane

0xb58a,	// (0x00013e2a) navi_tabs_4_pane

0x74f9,	// (0x0000fd99) tabs_2_active_pane_ParamLimits

0x74f9,	// (0x0000fd99) tabs_2_active_pane

0x7509,	// (0x0000fda9) tabs_2_passive_pane_ParamLimits

0x7509,	// (0x0000fda9) tabs_2_passive_pane

0x74c7,	// (0x0000fd67) tabs_3_active_pane_ParamLimits

0x74c7,	// (0x0000fd67) tabs_3_active_pane

0x74d7,	// (0x0000fd77) tabs_3_passive_pane_ParamLimits

0x74d7,	// (0x0000fd77) tabs_3_passive_pane

0x74e8,	// (0x0000fd88) tabs_3_passive_pane_cp_ParamLimits

0x74e8,	// (0x0000fd88) tabs_3_passive_pane_cp

0x7483,	// (0x0000fd23) tabs_4_active_pane_ParamLimits

0x7483,	// (0x0000fd23) tabs_4_active_pane

0x7494,	// (0x0000fd34) tabs_4_passive_pane_ParamLimits

0x7494,	// (0x0000fd34) tabs_4_passive_pane

0x74a5,	// (0x0000fd45) tabs_4_passive_pane_cp_ParamLimits

0x74a5,	// (0x0000fd45) tabs_4_passive_pane_cp

0x74b6,	// (0x0000fd56) tabs_4_passive_pane_cp2_ParamLimits

0x74b6,	// (0x0000fd56) tabs_4_passive_pane_cp2

0x7463,	// (0x0000fd03) tabs_2_long_active_pane_ParamLimits

0x7463,	// (0x0000fd03) tabs_2_long_active_pane

0x7473,	// (0x0000fd13) tabs_2_long_passive_pane_ParamLimits

0x7473,	// (0x0000fd13) tabs_2_long_passive_pane

0x742e,	// (0x0000fcce) tabs_3_long_active_pane_ParamLimits

0x742e,	// (0x0000fcce) tabs_3_long_active_pane

0x743f,	// (0x0000fcdf) tabs_3_long_passive_pane_ParamLimits

0x743f,	// (0x0000fcdf) tabs_3_long_passive_pane

0x7452,	// (0x0000fcf2) tabs_3_long_passive_pane_cp_ParamLimits

0x7452,	// (0x0000fcf2) tabs_3_long_passive_pane_cp

0x73d4,	// (0x0000fc74) volume_small_pane_g1

0x73dd,	// (0x0000fc7d) volume_small_pane_g2

0x73e6,	// (0x0000fc86) volume_small_pane_g3

0x73ef,	// (0x0000fc8f) volume_small_pane_g4

0x73f8,	// (0x0000fc98) volume_small_pane_g5

0x7401,	// (0x0000fca1) volume_small_pane_g6

0x740a,	// (0x0000fcaa) volume_small_pane_g7

0x7413,	// (0x0000fcb3) volume_small_pane_g8

0x741c,	// (0x0000fcbc) volume_small_pane_g9

0x7425,	// (0x0000fcc5) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0001812c) volume_small_pane_g

0x8933,	// (0x000111d3) bg_active_tab_pane_cp2_ParamLimits

0x8933,	// (0x000111d3) bg_active_tab_pane_cp2

0x8941,	// (0x000111e1) tabs_3_active_pane_g1

0x8949,	// (0x000111e9) tabs_3_active_pane_t1

0x8933,	// (0x000111d3) bg_passive_tab_pane_cp2_ParamLimits

0x8933,	// (0x000111d3) bg_passive_tab_pane_cp2

0x8941,	// (0x000111e1) tabs_3_passive_pane_g1

0x8949,	// (0x000111e9) tabs_3_passive_pane_t1

0x8933,	// (0x000111d3) bg_active_tab_pane_cp3_ParamLimits

0x8933,	// (0x000111d3) bg_active_tab_pane_cp3

0x895b,	// (0x000111fb) tabs_4_active_pane_g1

0x8963,	// (0x00011203) tabs_4_active_pane_t1

0x8933,	// (0x000111d3) bg_passive_tab_pane_cp3_ParamLimits

0x8933,	// (0x000111d3) bg_passive_tab_pane_cp3

0x895b,	// (0x000111fb) tabs_4_1_passive_pane_g1

0x8963,	// (0x00011203) tabs_4_1_passive_pane_t1

0xa77e,	// (0x0001301e) list_highlight_pane_cp2

0xc062,	// (0x00014902) list_set_pane_ParamLimits

0xc062,	// (0x00014902) list_set_pane

0xc0f0,	// (0x00014990) main_pane_set_t1_ParamLimits

0xc0f0,	// (0x00014990) main_pane_set_t1

0xc110,	// (0x000149b0) main_pane_set_t2_ParamLimits

0xc110,	// (0x000149b0) main_pane_set_t2

0xc122,	// (0x000149c2) main_pane_set_t3_ParamLimits

0xc122,	// (0x000149c2) main_pane_set_t3

0xc134,	// (0x000149d4) main_pane_set_t4_ParamLimits

0xc134,	// (0x000149d4) main_pane_set_t4

0x0003,

0xf95c,	// (0x000181fc) main_pane_set_t_ParamLimits

0xf95c,	// (0x000181fc) main_pane_set_t

0xc146,	// (0x000149e6) setting_code_pane

0xc14e,	// (0x000149ee) setting_slider_graphic_pane

0xc14e,	// (0x000149ee) setting_slider_pane

0xc14e,	// (0x000149ee) setting_text_pane

0xc14e,	// (0x000149ee) setting_volume_pane

0x679e,	// (0x0000f03e) volume_set_pane

0x8933,	// (0x000111d3) bg_set_opt_pane_cp

0x67a6,	// (0x0000f046) setting_slider_pane_t1

0x67bc,	// (0x0000f05c) setting_slider_pane_t2

0x67d5,	// (0x0000f075) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00017dd9) setting_slider_pane_t

0x67ec,	// (0x0000f08c) slider_set_pane

0x8853,	// (0x000110f3) bg_set_opt_pane_cp2

0x8975,	// (0x00011215) setting_slider_graphic_pane_g1

0x6802,	// (0x0000f0a2) setting_slider_graphic_pane_t1

0x6811,	// (0x0000f0b1) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00017de0) setting_slider_graphic_pane_t

0x6820,	// (0x0000f0c0) slider_set_pane_cp

0x8853,	// (0x000110f3) input_focus_pane_cp1

0xc028,	// (0x000148c8) list_set_text_pane

0x876c,	// (0x0001100c) setting_text_pane_g1

0x8853,	// (0x000110f3) input_focus_pane_cp2

0x876c,	// (0x0001100c) setting_code_pane_g1

0x897e,	// (0x0001121e) setting_code_pane_t1

0x898c,	// (0x0001122c) set_text_pane_t1_ParamLimits

0x898c,	// (0x0001122c) set_text_pane_t1

0x9755,	// (0x00011ff5) set_opt_bg_pane_g1

0x975d,	// (0x00011ffd) set_opt_bg_pane_g2

0xc008,	// (0x000148a8) set_opt_bg_pane_g3

0x976d,	// (0x0001200d) set_opt_bg_pane_g4

0x9775,	// (0x00012015) set_opt_bg_pane_g5

0x977d,	// (0x0001201d) set_opt_bg_pane_g6

0xc010,	// (0x000148b0) set_opt_bg_pane_g7

0xc018,	// (0x000148b8) set_opt_bg_pane_g8

0xc020,	// (0x000148c0) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x000181e9) set_opt_bg_pane_g

0xbffb,	// (0x0001489b) slider_set_pane_g1

0x758e,	// (0x0000fe2e) slider_set_pane_g2

0x0006,

0xf93a,	// (0x000181da) slider_set_pane_g

0x752a,	// (0x0000fdca) volume_set_pane_g1

0x7532,	// (0x0000fdd2) volume_set_pane_g2

0x753a,	// (0x0000fdda) volume_set_pane_g3

0x7542,	// (0x0000fde2) volume_set_pane_g4

0x754a,	// (0x0000fdea) volume_set_pane_g5

0x7552,	// (0x0000fdf2) volume_set_pane_g6

0x755a,	// (0x0000fdfa) volume_set_pane_g7

0x7562,	// (0x0000fe02) volume_set_pane_g8

0x756a,	// (0x0000fe0a) volume_set_pane_g9

0x7572,	// (0x0000fe12) volume_set_pane_g10

0x0009,

0xf912,	// (0x000181b2) volume_set_pane_g

0x89a8,	// (0x00011248) indicator_pane_ParamLimits

0x89a8,	// (0x00011248) indicator_pane

0x89b4,	// (0x00011254) main_idle_pane_g2_ParamLimits

0x89b4,	// (0x00011254) main_idle_pane_g2

0x89d8,	// (0x00011278) main_pane_idle_g1_ParamLimits

0x89d8,	// (0x00011278) main_pane_idle_g1

0x89e5,	// (0x00011285) popup_clock_digital_analogue_window_ParamLimits

0x89e5,	// (0x00011285) popup_clock_digital_analogue_window

0x89fc,	// (0x0001129c) soft_indicator_pane_ParamLimits

0x89fc,	// (0x0001129c) soft_indicator_pane

0x8a08,	// (0x000112a8) wallpaper_pane_ParamLimits

0x8a08,	// (0x000112a8) wallpaper_pane

0x876c,	// (0x0001100c) wallpaper_pane_g1

0x8a1c,	// (0x000112bc) indicator_pane_g1_ParamLimits

0x8a1c,	// (0x000112bc) indicator_pane_g1

0xc43a,	// (0x00014cda) navi_navi_icon_text_pane_srt_g1

0x8a37,	// (0x000112d7) soft_indicator_pane_t1

0x8a51,	// (0x000112f1) aid_ps_area_pane

0x8a62,	// (0x00011302) aid_ps_clock_pane

0x8a6e,	// (0x0001130e) aid_ps_indicator_pane

0x8a7a,	// (0x0001131a) indicator_ps_pane_ParamLimits

0x8a7a,	// (0x0001131a) indicator_ps_pane

0x8a89,	// (0x00011329) power_save_pane_g1_ParamLimits

0x8a89,	// (0x00011329) power_save_pane_g1

0x8a95,	// (0x00011335) power_save_pane_g2_ParamLimits

0x8a95,	// (0x00011335) power_save_pane_g2

0x6511,	// (0x0000edb1) aid_navinavi_width_pane

0x8a51,	// (0x000112f1) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00017de5) power_save_pane_g_ParamLimits

0xf545,	// (0x00017de5) power_save_pane_g

0x8aa3,	// (0x00011343) power_save_pane_t1_ParamLimits

0x8aa3,	// (0x00011343) power_save_pane_t1

0x8a62,	// (0x00011302) aid_ps_clock_pane_ParamLimits

0x8a6e,	// (0x0001130e) aid_ps_indicator_pane_ParamLimits

0x8ab5,	// (0x00011355) power_save_pane_t4_ParamLimits

0x8ab5,	// (0x00011355) power_save_pane_t4

0x0001,

0xf54a,	// (0x00017dea) power_save_pane_t_ParamLimits

0xf54a,	// (0x00017dea) power_save_pane_t

0x8adf,	// (0x0001137f) power_save_t3_ParamLimits

0x8adf,	// (0x0001137f) power_save_t3

0x8aca,	// (0x0001136a) power_save_t2_ParamLimits

0x8aca,	// (0x0001136a) power_save_t2

0x8af4,	// (0x00011394) indicator_ps_pane_g1

0x8afd,	// (0x0001139d) ai_gene_pane_ParamLimits

0x8afd,	// (0x0001139d) ai_gene_pane

0x8b09,	// (0x000113a9) ai_links_pane_ParamLimits

0x8b09,	// (0x000113a9) ai_links_pane

0x8b15,	// (0x000113b5) indicator_pane_cp1_ParamLimits

0x8b15,	// (0x000113b5) indicator_pane_cp1

0x8b21,	// (0x000113c1) main_pane_idle_g1_cp_ParamLimits

0x8b21,	// (0x000113c1) main_pane_idle_g1_cp

0x8b2d,	// (0x000113cd) popup_ai_links_title_window

0x8b36,	// (0x000113d6) soft_indicator_pane_cp1_ParamLimits

0x8b36,	// (0x000113d6) soft_indicator_pane_cp1

0xbe01,	// (0x000146a1) ai_links_pane_g1

0xbe0a,	// (0x000146aa) grid_ai_links_pane

0xbde6,	// (0x00014686) ai_gene_pane_1

0xbdef,	// (0x0001468f) ai_gene_pane_2

0xbdf8,	// (0x00014698) list_highlight_pane_cp4

0xbdca,	// (0x0001466a) cell_ai_link_pane_ParamLimits

0xbdca,	// (0x0001466a) cell_ai_link_pane

0xbdc2,	// (0x00014662) cell_ai_link_pane_g1

0x8d95,	// (0x00011635) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x0001818d) cell_ai_link_pane_g

0x8853,	// (0x000110f3) grid_highlight_cp2

0x8853,	// (0x000110f3) bg_popup_sub_pane_cp1

0x8b50,	// (0x000113f0) popup_ai_links_title_window_t1

0xbd14,	// (0x000145b4) ai_gene_pane_1_g1_ParamLimits

0xbd14,	// (0x000145b4) ai_gene_pane_1_g1

0xbd20,	// (0x000145c0) ai_gene_pane_1_g2_ParamLimits

0xbd20,	// (0x000145c0) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x00018183) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x00018183) ai_gene_pane_1_g

0xbd2d,	// (0x000145cd) ai_gene_pane_1_t1_ParamLimits

0xbd2d,	// (0x000145cd) ai_gene_pane_1_t1

0xbd61,	// (0x00014601) grid_ai_soft_ind_pane

0xbcff,	// (0x0001459f) ai_gene_pane_2_t1_ParamLimits

0xbcff,	// (0x0001459f) ai_gene_pane_2_t1

0x8b5f,	// (0x000113ff) main_pane_empty_t1_ParamLimits

0x8b5f,	// (0x000113ff) main_pane_empty_t1

0x8b7c,	// (0x0001141c) main_pane_empty_t2_ParamLimits

0x8b7c,	// (0x0001141c) main_pane_empty_t2

0x8b94,	// (0x00011434) main_pane_empty_t3_ParamLimits

0x8b94,	// (0x00011434) main_pane_empty_t3

0x8ba7,	// (0x00011447) main_pane_empty_t4_ParamLimits

0x8ba7,	// (0x00011447) main_pane_empty_t4

0x8bba,	// (0x0001145a) main_pane_empty_t5_ParamLimits

0x8bba,	// (0x0001145a) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00017def) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00017def) main_pane_empty_t

0x98a8,	// (0x00012148) bg_popup_window_pane_ParamLimits

0x98a8,	// (0x00012148) bg_popup_window_pane

0xba79,	// (0x00014319) find_popup_pane_cp2_ParamLimits

0xba79,	// (0x00014319) find_popup_pane_cp2

0xba85,	// (0x00014325) heading_pane_ParamLimits

0xba85,	// (0x00014325) heading_pane

0x8853,	// (0x000110f3) bg_popup_sub_pane

0xb9f2,	// (0x00014292) bg_popup_window_pane_g1_ParamLimits

0xb9f2,	// (0x00014292) bg_popup_window_pane_g1

0xb9fe,	// (0x0001429e) bg_popup_window_pane_g2_ParamLimits

0xb9fe,	// (0x0001429e) bg_popup_window_pane_g2

0xba0a,	// (0x000142aa) bg_popup_window_pane_g3_ParamLimits

0xba0a,	// (0x000142aa) bg_popup_window_pane_g3

0xba16,	// (0x000142b6) bg_popup_window_pane_g4_ParamLimits

0xba16,	// (0x000142b6) bg_popup_window_pane_g4

0xba22,	// (0x000142c2) bg_popup_window_pane_g5_ParamLimits

0xba22,	// (0x000142c2) bg_popup_window_pane_g5

0xba2e,	// (0x000142ce) bg_popup_window_pane_g6_ParamLimits

0xba2e,	// (0x000142ce) bg_popup_window_pane_g6

0xba3a,	// (0x000142da) bg_popup_window_pane_g7_ParamLimits

0xba3a,	// (0x000142da) bg_popup_window_pane_g7

0xba46,	// (0x000142e6) bg_popup_window_pane_g8_ParamLimits

0xba46,	// (0x000142e6) bg_popup_window_pane_g8

0xba52,	// (0x000142f2) bg_popup_window_pane_g9_ParamLimits

0xba52,	// (0x000142f2) bg_popup_window_pane_g9

0xba5e,	// (0x000142fe) bg_popup_window_pane_g10_ParamLimits

0xba5e,	// (0x000142fe) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0001814b) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0001814b) bg_popup_window_pane_g

0xb987,	// (0x00014227) bg_popup_heading_pane_ParamLimits

0xb987,	// (0x00014227) bg_popup_heading_pane

0x7616,	// (0x0000feb6) tabs_4_passive_pane_cp_srt_ParamLimits

0x7616,	// (0x0000feb6) tabs_4_passive_pane_cp_srt

0x7628,	// (0x0000fec8) tabs_4_passive_pane_srt_ParamLimits

0xb99b,	// (0x0001423b) heading_pane_g2

0x7628,	// (0x0000fec8) tabs_4_passive_pane_srt

0xa77e,	// (0x0001301e) bg_passive_tab_pane_cp3_srt_ParamLimits

0xa77e,	// (0x0001301e) bg_passive_tab_pane_cp3_srt

0xb9a3,	// (0x00014243) heading_pane_t1_ParamLimits

0xb9a3,	// (0x00014243) heading_pane_t1

0xb9ba,	// (0x0001425a) heading_pane_t2_ParamLimits

0xb9ba,	// (0x0001425a) heading_pane_t2

0x0001,

0xf8a6,	// (0x00018146) heading_pane_t_ParamLimits

0xf8a6,	// (0x00018146) heading_pane_t

0xb4f2,	// (0x00013d92) bg_popup_heading_pane_g1

0xb59b,	// (0x00013e3b) bg_popup_heading_pane_g2

0xb5a3,	// (0x00013e43) bg_popup_heading_pane_g3

0xb5ab,	// (0x00013e4b) bg_popup_heading_pane_g4

0xb5b3,	// (0x00013e53) bg_popup_heading_pane_g5

0xb5bb,	// (0x00013e5b) bg_popup_heading_pane_g6

0xb5c3,	// (0x00013e63) bg_popup_heading_pane_g7

0xb5cb,	// (0x00013e6b) bg_popup_heading_pane_g8

0xb5d3,	// (0x00013e73) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00018102) bg_popup_heading_pane_g

0xac7b,	// (0x0001351b) bg_popup_sub_pane_g1

0xac8b,	// (0x0001352b) bg_popup_sub_pane_g2

0xac83,	// (0x00013523) bg_popup_sub_pane_g3

0xac9b,	// (0x0001353b) bg_popup_sub_pane_g4

0xac93,	// (0x00013533) bg_popup_sub_pane_g5

0xaca3,	// (0x00013543) bg_popup_sub_pane_g6

0xacab,	// (0x0001354b) bg_popup_sub_pane_g7

0xacbb,	// (0x0001355b) bg_popup_sub_pane_g8

0xacb3,	// (0x00013553) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x000180dc) bg_popup_sub_pane_g

0x8bcd,	// (0x0001146d) bg_popup_window_pane_cp5_ParamLimits

0x8bcd,	// (0x0001146d) bg_popup_window_pane_cp5

0x8be9,	// (0x00011489) popup_note_window_g1_ParamLimits

0x8be9,	// (0x00011489) popup_note_window_g1

0x8bf5,	// (0x00011495) popup_note_window_t1_ParamLimits

0x8bf5,	// (0x00011495) popup_note_window_t1

0x8c0b,	// (0x000114ab) popup_note_window_t2_ParamLimits

0x8c0b,	// (0x000114ab) popup_note_window_t2

0x8c21,	// (0x000114c1) popup_note_window_t3_ParamLimits

0x8c21,	// (0x000114c1) popup_note_window_t3

0x8c37,	// (0x000114d7) popup_note_window_t4_ParamLimits

0x8c37,	// (0x000114d7) popup_note_window_t4

0x8c5f,	// (0x000114ff) popup_note_window_t5_ParamLimits

0x8c5f,	// (0x000114ff) popup_note_window_t5

0x0004,

0xf55a,	// (0x00017dfa) popup_note_window_t_ParamLimits

0xf55a,	// (0x00017dfa) popup_note_window_t

0x8ca9,	// (0x00011549) bg_popup_window_pane_cp6_ParamLimits

0x8ca9,	// (0x00011549) bg_popup_window_pane_cp6

0xb46e,	// (0x00013d0e) popup_note_image_window_g1_ParamLimits

0xb46e,	// (0x00013d0e) popup_note_image_window_g1

0xb47a,	// (0x00013d1a) popup_note_image_window_g2_ParamLimits

0xb47a,	// (0x00013d1a) popup_note_image_window_g2

0x0001,

0xf830,	// (0x000180d0) popup_note_image_window_g_ParamLimits

0xf830,	// (0x000180d0) popup_note_image_window_g

0xb493,	// (0x00013d33) popup_note_image_window_t1_ParamLimits

0xb493,	// (0x00013d33) popup_note_image_window_t1

0xb4ac,	// (0x00013d4c) popup_note_image_window_t2_ParamLimits

0xb4ac,	// (0x00013d4c) popup_note_image_window_t2

0xb4c5,	// (0x00013d65) popup_note_image_window_t3_ParamLimits

0xb4c5,	// (0x00013d65) popup_note_image_window_t3

0x0002,

0xf835,	// (0x000180d5) popup_note_image_window_t_ParamLimits

0xf835,	// (0x000180d5) popup_note_image_window_t

0xb33d,	// (0x00013bdd) bg_popup_window_pane_cp7_ParamLimits

0xb33d,	// (0x00013bdd) bg_popup_window_pane_cp7

0xb36d,	// (0x00013c0d) popup_note_wait_window_g1_ParamLimits

0xb36d,	// (0x00013c0d) popup_note_wait_window_g1

0xb379,	// (0x00013c19) popup_note_wait_window_g2_ParamLimits

0xb379,	// (0x00013c19) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x000180be) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x000180be) popup_note_wait_window_g

0xb391,	// (0x00013c31) popup_note_wait_window_t1_ParamLimits

0xb391,	// (0x00013c31) popup_note_wait_window_t1

0xb3b8,	// (0x00013c58) popup_note_wait_window_t2_ParamLimits

0xb3b8,	// (0x00013c58) popup_note_wait_window_t2

0xb3d5,	// (0x00013c75) popup_note_wait_window_t3_ParamLimits

0xb3d5,	// (0x00013c75) popup_note_wait_window_t3

0xb3e8,	// (0x00013c88) popup_note_wait_window_t4_ParamLimits

0xb3e8,	// (0x00013c88) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x000180c5) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x000180c5) popup_note_wait_window_t

0xb40d,	// (0x00013cad) wait_bar_pane_ParamLimits

0xb40d,	// (0x00013cad) wait_bar_pane

0x8853,	// (0x000110f3) wait_anim_pane

0x8853,	// (0x000110f3) wait_border_pane

0x876c,	// (0x0001100c) wait_anim_pane_g1

0x876c,	// (0x0001100c) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x00017f79) wait_anim_pane_g

0xb2ed,	// (0x00013b8d) wait_border_pane_g1

0xb2f6,	// (0x00013b96) wait_border_pane_g2

0xb2ff,	// (0x00013b9f) wait_border_pane_g3

0x0002,

0xf817,	// (0x000180b7) wait_border_pane_g

0xb15d,	// (0x000139fd) bg_popup_window_pane_cp16_ParamLimits

0xb15d,	// (0x000139fd) bg_popup_window_pane_cp16

0xb25d,	// (0x00013afd) indicator_popup_pane_cp4_ParamLimits

0xb25d,	// (0x00013afd) indicator_popup_pane_cp4

0xb271,	// (0x00013b11) popup_query_data_window_t1_ParamLimits

0xb271,	// (0x00013b11) popup_query_data_window_t1

0xb283,	// (0x00013b23) popup_query_data_window_t2_ParamLimits

0xb283,	// (0x00013b23) popup_query_data_window_t2

0xb29c,	// (0x00013b3c) popup_query_data_window_t3_ParamLimits

0xb29c,	// (0x00013b3c) popup_query_data_window_t3

0x0002,

0xf810,	// (0x000180b0) popup_query_data_window_t_ParamLimits

0xf810,	// (0x000180b0) popup_query_data_window_t

0xb2b6,	// (0x00013b56) query_popup_data_pane_ParamLimits

0xb2b6,	// (0x00013b56) query_popup_data_pane

0xb2ca,	// (0x00013b6a) query_popup_data_pane_cp1_ParamLimits

0xb2ca,	// (0x00013b6a) query_popup_data_pane_cp1

0xb15d,	// (0x000139fd) bg_popup_window_pane_cp10_ParamLimits

0xb15d,	// (0x000139fd) bg_popup_window_pane_cp10

0xb18f,	// (0x00013a2f) indicator_popup_pane_ParamLimits

0xb18f,	// (0x00013a2f) indicator_popup_pane

0xb1b1,	// (0x00013a51) popup_query_code_window_t1_ParamLimits

0xb1b1,	// (0x00013a51) popup_query_code_window_t1

0xb1cb,	// (0x00013a6b) popup_query_code_window_t2_ParamLimits

0xb1cb,	// (0x00013a6b) popup_query_code_window_t2

0xb214,	// (0x00013ab4) popup_query_code_window_t3_ParamLimits

0xb214,	// (0x00013ab4) popup_query_code_window_t3

0x0002,

0xf809,	// (0x000180a9) popup_query_code_window_t_ParamLimits

0xf809,	// (0x000180a9) popup_query_code_window_t

0xb243,	// (0x00013ae3) query_popup_pane_ParamLimits

0xb243,	// (0x00013ae3) query_popup_pane

0x8ca9,	// (0x00011549) bg_popup_window_pane_cp15_ParamLimits

0x8ca9,	// (0x00011549) bg_popup_window_pane_cp15

0x8cc7,	// (0x00011567) indicator_popup_pane_cp1_ParamLimits

0x8cc7,	// (0x00011567) indicator_popup_pane_cp1

0x8cda,	// (0x0001157a) indicator_popup_pane_cp2_ParamLimits

0x8cda,	// (0x0001157a) indicator_popup_pane_cp2

0x8ced,	// (0x0001158d) popup_query_data_code_window_g1_ParamLimits

0x8ced,	// (0x0001158d) popup_query_data_code_window_g1

0x8d00,	// (0x000115a0) popup_query_data_code_window_t1_ParamLimits

0x8d00,	// (0x000115a0) popup_query_data_code_window_t1

0x8d12,	// (0x000115b2) popup_query_data_code_window_t2_ParamLimits

0x8d12,	// (0x000115b2) popup_query_data_code_window_t2

0x8d24,	// (0x000115c4) popup_query_data_code_window_t3_ParamLimits

0x8d24,	// (0x000115c4) popup_query_data_code_window_t3

0x8d3a,	// (0x000115da) popup_query_data_code_window_t4_ParamLimits

0x8d3a,	// (0x000115da) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00017e05) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00017e05) popup_query_data_code_window_t

0x72fb,	// (0x0000fb9b) list_single_midp_graphic_pane_g3

0x8d52,	// (0x000115f2) query_popup_data_pane_cp2_ParamLimits

0x8d65,	// (0x00011605) query_popup_pane_cp2_ParamLimits

0x8d65,	// (0x00011605) query_popup_pane_cp2

0x8853,	// (0x000110f3) bg_popup_window_pane_cp11

0xb141,	// (0x000139e1) heading_pane_cp5

0xb149,	// (0x000139e9) listscroll_popup_info_pane

0x8853,	// (0x000110f3) input_focus_pane_cp3

0x8d78,	// (0x00011618) query_popup_pane_t1

0x8d86,	// (0x00011626) list_popup_info_pane_ParamLimits

0x8d86,	// (0x00011626) list_popup_info_pane

0x8d95,	// (0x00011635) listscroll_popup_info_pane_g1

0x8d9d,	// (0x0001163d) scroll_pane_cp7

0x8da5,	// (0x00011645) popup_info_list_pane_t1_ParamLimits

0x8da5,	// (0x00011645) popup_info_list_pane_t1

0x8dbf,	// (0x0001165f) popup_info_list_pane_t2_ParamLimits

0x8dbf,	// (0x0001165f) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00017e0e) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00017e0e) popup_info_list_pane_t

0x8853,	// (0x000110f3) bg_popup_window_pane_cp12

0xc454,	// (0x00014cf4) find_popup_pane

0x8933,	// (0x000111d3) bg_popup_window_pane_cp3

0x8dd9,	// (0x00011679) heading_pane_cp3

0x8de8,	// (0x00011688) listscroll_popup_graphic_pane

0x8853,	// (0x000110f3) bg_popup_window_pane_cp4

0x8e47,	// (0x000116e7) heading_pane_cp4

0x8e4f,	// (0x000116ef) listscroll_popup_colour_pane

0x8e57,	// (0x000116f7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8e57,	// (0x000116f7) cell_large_graphic_colour_none_popup_pane

0x8e67,	// (0x00011707) grid_large_graphic_colour_popup_pane_ParamLimits

0x8e67,	// (0x00011707) grid_large_graphic_colour_popup_pane

0x8e83,	// (0x00011723) listscroll_popup_colour_pane_g1_ParamLimits

0x8e83,	// (0x00011723) listscroll_popup_colour_pane_g1

0x8e9a,	// (0x0001173a) listscroll_popup_colour_pane_g2_ParamLimits

0x8e9a,	// (0x0001173a) listscroll_popup_colour_pane_g2

0x8eb1,	// (0x00011751) listscroll_popup_colour_pane_g3_ParamLimits

0x8eb1,	// (0x00011751) listscroll_popup_colour_pane_g3

0x8ec1,	// (0x00011761) listscroll_popup_colour_pane_g4_ParamLimits

0x8ec1,	// (0x00011761) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00017e13) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00017e13) listscroll_popup_colour_pane_g

0x8ed0,	// (0x00011770) scroll_pane_cp6_ParamLimits

0x8ed0,	// (0x00011770) scroll_pane_cp6

0x8ee2,	// (0x00011782) cell_large_graphic_colour_popup_pane_ParamLimits

0x8ee2,	// (0x00011782) cell_large_graphic_colour_popup_pane

0x8f01,	// (0x000117a1) cell_large_graphic_colour_none_popup_pane_t1

0x8853,	// (0x000110f3) grid_highlight_pane_cp5

0x8f10,	// (0x000117b0) cell_large_graphic_colour_popup_pane_g1

0x8f18,	// (0x000117b8) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00017e1c) cell_large_graphic_colour_popup_pane_g

0x8f20,	// (0x000117c0) cell_large_graphic_colour_popup_pane_g2_copy1

0x8f29,	// (0x000117c9) grid_highlight_pane_cp4

0x8f31,	// (0x000117d1) bg_popup_window_pane_cp8_ParamLimits

0x8f31,	// (0x000117d1) bg_popup_window_pane_cp8

0x8f4c,	// (0x000117ec) popup_snote_single_text_window_g1_ParamLimits

0x8f4c,	// (0x000117ec) popup_snote_single_text_window_g1

0x8f5e,	// (0x000117fe) popup_snote_single_text_window_t1_ParamLimits

0x8f5e,	// (0x000117fe) popup_snote_single_text_window_t1

0x8f71,	// (0x00011811) popup_snote_single_text_window_t2_ParamLimits

0x8f71,	// (0x00011811) popup_snote_single_text_window_t2

0x8f84,	// (0x00011824) popup_snote_single_text_window_t3_ParamLimits

0x8f84,	// (0x00011824) popup_snote_single_text_window_t3

0x8fbd,	// (0x0001185d) popup_snote_single_text_window_t4_ParamLimits

0x8fbd,	// (0x0001185d) popup_snote_single_text_window_t4

0x8ff1,	// (0x00011891) popup_snote_single_text_window_t5_ParamLimits

0x8ff1,	// (0x00011891) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00017e21) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00017e21) popup_snote_single_text_window_t

0x9020,	// (0x000118c0) bg_popup_window_pane_cp9_ParamLimits

0x9020,	// (0x000118c0) bg_popup_window_pane_cp9

0x8f4c,	// (0x000117ec) popup_snote_single_graphic_window_g1_ParamLimits

0x8f4c,	// (0x000117ec) popup_snote_single_graphic_window_g1

0x902e,	// (0x000118ce) popup_snote_single_graphic_window_g2_ParamLimits

0x902e,	// (0x000118ce) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00017e2c) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00017e2c) popup_snote_single_graphic_window_g

0x903a,	// (0x000118da) popup_snote_single_graphic_window_t1_ParamLimits

0x903a,	// (0x000118da) popup_snote_single_graphic_window_t1

0x904d,	// (0x000118ed) popup_snote_single_graphic_window_t2_ParamLimits

0x904d,	// (0x000118ed) popup_snote_single_graphic_window_t2

0x8f84,	// (0x00011824) popup_snote_single_graphic_window_t3_ParamLimits

0x8f84,	// (0x00011824) popup_snote_single_graphic_window_t3

0x8fbd,	// (0x0001185d) popup_snote_single_graphic_window_t4_ParamLimits

0x8fbd,	// (0x0001185d) popup_snote_single_graphic_window_t4

0x8ff1,	// (0x00011891) popup_snote_single_graphic_window_t5_ParamLimits

0x8ff1,	// (0x00011891) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00017e31) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00017e31) popup_snote_single_graphic_window_t

0xc3c1,	// (0x00014c61) grid_graphic_popup_pane_ParamLimits

0xc3c1,	// (0x00014c61) grid_graphic_popup_pane

0xc3e4,	// (0x00014c84) listscroll_popup_graphic_pane_g1_ParamLimits

0xc3e4,	// (0x00014c84) listscroll_popup_graphic_pane_g1

0xc3f8,	// (0x00014c98) listscroll_popup_graphic_pane_g2_ParamLimits

0xc3f8,	// (0x00014c98) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00018226) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00018226) listscroll_popup_graphic_pane_g

0xc40c,	// (0x00014cac) scroll_pane_cp5

0xc365,	// (0x00014c05) cell_graphic_popup_pane_ParamLimits

0xc365,	// (0x00014c05) cell_graphic_popup_pane

0xc346,	// (0x00014be6) cell_graphic_popup_pane_g1

0xc34e,	// (0x00014bee) cell_graphic_popup_pane_g2

0x8f20,	// (0x000117c0) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x0001821f) cell_graphic_popup_pane_g

0xc357,	// (0x00014bf7) cell_graphic_popup_pane_t2

0x8f29,	// (0x000117c9) grid_highlight_pane_cp3

0x9072,	// (0x00011912) list_gen_pane_ParamLimits

0x9072,	// (0x00011912) list_gen_pane

0x90a3,	// (0x00011943) scroll_pane

0xc2c6,	// (0x00014b66) bg_list_pane_g1_ParamLimits

0xc2c6,	// (0x00014b66) bg_list_pane_g1

0xc2dd,	// (0x00014b7d) bg_list_pane_g2_ParamLimits

0xc2dd,	// (0x00014b7d) bg_list_pane_g2

0xc2f0,	// (0x00014b90) bg_list_pane_g3_ParamLimits

0xc2f0,	// (0x00014b90) bg_list_pane_g3

0xc302,	// (0x00014ba2) bg_list_pane_g4_ParamLimits

0xc302,	// (0x00014ba2) bg_list_pane_g4

0xc314,	// (0x00014bb4) bg_list_pane_g5_ParamLimits

0xc314,	// (0x00014bb4) bg_list_pane_g5

0x0004,

0xf974,	// (0x00018214) bg_list_pane_g_ParamLimits

0xf974,	// (0x00018214) bg_list_pane_g

0xc1f4,	// (0x00014a94) list_double2_graphic_large_graphic_pane_ParamLimits

0xc1f4,	// (0x00014a94) list_double2_graphic_large_graphic_pane

0xc1f4,	// (0x00014a94) list_double2_graphic_pane_ParamLimits

0xc1f4,	// (0x00014a94) list_double2_graphic_pane

0xc1f4,	// (0x00014a94) list_double2_large_graphic_pane_ParamLimits

0xc1f4,	// (0x00014a94) list_double2_large_graphic_pane

0xc1f4,	// (0x00014a94) list_double2_pane_ParamLimits

0xc1f4,	// (0x00014a94) list_double2_pane

0xc1f4,	// (0x00014a94) list_double_graphic_heading_pane_ParamLimits

0xc1f4,	// (0x00014a94) list_double_graphic_heading_pane

0xc1f4,	// (0x00014a94) list_double_graphic_pane_ParamLimits

0xc1f4,	// (0x00014a94) list_double_graphic_pane

0xc1f4,	// (0x00014a94) list_double_heading_pane_ParamLimits

0xc1f4,	// (0x00014a94) list_double_heading_pane

0xc1f4,	// (0x00014a94) list_double_large_graphic_pane_ParamLimits

0xc1f4,	// (0x00014a94) list_double_large_graphic_pane

0xc1f4,	// (0x00014a94) list_double_number_pane_ParamLimits

0xc1f4,	// (0x00014a94) list_double_number_pane

0xc1f4,	// (0x00014a94) list_double_pane_ParamLimits

0xc1f4,	// (0x00014a94) list_double_pane

0xc1f4,	// (0x00014a94) list_double_time_pane_ParamLimits

0xc1f4,	// (0x00014a94) list_double_time_pane

0xc1f4,	// (0x00014a94) list_setting_number_pane_ParamLimits

0xc1f4,	// (0x00014a94) list_setting_number_pane

0xc1f4,	// (0x00014a94) list_setting_pane_ParamLimits

0xc1f4,	// (0x00014a94) list_setting_pane

0xc25c,	// (0x00014afc) list_single_2graphic_pane_ParamLimits

0xc25c,	// (0x00014afc) list_single_2graphic_pane

0xc25c,	// (0x00014afc) list_single_graphic_heading_pane_ParamLimits

0xc25c,	// (0x00014afc) list_single_graphic_heading_pane

0xc25c,	// (0x00014afc) list_single_graphic_pane_ParamLimits

0xc25c,	// (0x00014afc) list_single_graphic_pane

0xc25c,	// (0x00014afc) list_single_heading_pane_ParamLimits

0xc25c,	// (0x00014afc) list_single_heading_pane

0xc2b0,	// (0x00014b50) list_single_large_graphic_pane_ParamLimits

0xc2b0,	// (0x00014b50) list_single_large_graphic_pane

0xc25c,	// (0x00014afc) list_single_number_heading_pane_ParamLimits

0xc25c,	// (0x00014afc) list_single_number_heading_pane

0xc25c,	// (0x00014afc) list_single_number_pane_ParamLimits

0xc25c,	// (0x00014afc) list_single_number_pane

0xc25c,	// (0x00014afc) list_single_pane_ParamLimits

0xc25c,	// (0x00014afc) list_single_pane

0x8853,	// (0x000110f3) list_highlight_pane_cp1

0x90e4,	// (0x00011984) list_single_pane_g1_ParamLimits

0x90e4,	// (0x00011984) list_single_pane_g1

0x90f0,	// (0x00011990) list_single_pane_g2_ParamLimits

0x90f0,	// (0x00011990) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00017e43) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00017e43) list_single_pane_g

0xc1bf,	// (0x00014a5f) list_single_pane_t1_ParamLimits

0xc1bf,	// (0x00014a5f) list_single_pane_t1

0x90e4,	// (0x00011984) list_single_number_pane_g1_ParamLimits

0x90e4,	// (0x00011984) list_single_number_pane_g1

0x90f0,	// (0x00011990) list_single_number_pane_g2_ParamLimits

0x90f0,	// (0x00011990) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00017e43) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00017e43) list_single_number_pane_g

0x90fc,	// (0x0001199c) list_single_number_pane_t1_ParamLimits

0x90fc,	// (0x0001199c) list_single_number_pane_t1

0xbfb2,	// (0x00014852) list_single_number_pane_t2_ParamLimits

0xbfb2,	// (0x00014852) list_single_number_pane_t2

0x0001,

0xf935,	// (0x000181d5) list_single_number_pane_t_ParamLimits

0xf935,	// (0x000181d5) list_single_number_pane_t

0x90d8,	// (0x00011978) list_single_graphic_pane_g1_ParamLimits

0x90d8,	// (0x00011978) list_single_graphic_pane_g1

0x90e4,	// (0x00011984) list_single_graphic_pane_g2_ParamLimits

0x90e4,	// (0x00011984) list_single_graphic_pane_g2

0x90f0,	// (0x00011990) list_single_graphic_pane_g3_ParamLimits

0x90f0,	// (0x00011990) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00017e3c) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00017e3c) list_single_graphic_pane_g

0x90fc,	// (0x0001199c) list_single_graphic_pane_t1_ParamLimits

0x90fc,	// (0x0001199c) list_single_graphic_pane_t1

0x90e4,	// (0x00011984) list_single_heading_pane_g1_ParamLimits

0x90e4,	// (0x00011984) list_single_heading_pane_g1

0x90f0,	// (0x00011990) list_single_heading_pane_g2_ParamLimits

0x90f0,	// (0x00011990) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00017e43) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00017e43) list_single_heading_pane_g

0x9112,	// (0x000119b2) list_single_heading_pane_t1_ParamLimits

0x9112,	// (0x000119b2) list_single_heading_pane_t1

0x9128,	// (0x000119c8) list_single_heading_pane_t2_ParamLimits

0x9128,	// (0x000119c8) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00017e48) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00017e48) list_single_heading_pane_t

0x90e4,	// (0x00011984) list_single_number_heading_pane_g1_ParamLimits

0x90e4,	// (0x00011984) list_single_number_heading_pane_g1

0x90f0,	// (0x00011990) list_single_number_heading_pane_g2_ParamLimits

0x90f0,	// (0x00011990) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00017e43) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00017e43) list_single_number_heading_pane_g

0x9112,	// (0x000119b2) list_single_number_heading_pane_t1_ParamLimits

0x9112,	// (0x000119b2) list_single_number_heading_pane_t1

0x913a,	// (0x000119da) list_single_number_heading_pane_t2_ParamLimits

0x913a,	// (0x000119da) list_single_number_heading_pane_t2

0x914c,	// (0x000119ec) list_single_number_heading_pane_t3_ParamLimits

0x914c,	// (0x000119ec) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00017e4d) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00017e4d) list_single_number_heading_pane_t

0x90d8,	// (0x00011978) list_single_graphic_heading_pane_g1_ParamLimits

0x90d8,	// (0x00011978) list_single_graphic_heading_pane_g1

0x915e,	// (0x000119fe) list_single_graphic_heading_pane_g4_ParamLimits

0x915e,	// (0x000119fe) list_single_graphic_heading_pane_g4

0x90f0,	// (0x00011990) list_single_graphic_heading_pane_g5_ParamLimits

0x90f0,	// (0x00011990) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00017e54) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00017e54) list_single_graphic_heading_pane_g

0x9112,	// (0x000119b2) list_single_graphic_heading_pane_t1_ParamLimits

0x9112,	// (0x000119b2) list_single_graphic_heading_pane_t1

0x916d,	// (0x00011a0d) list_single_graphic_heading_pane_t2_ParamLimits

0x916d,	// (0x00011a0d) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00017e5b) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00017e5b) list_single_graphic_heading_pane_t

0x917f,	// (0x00011a1f) list_single_large_graphic_pane_g1_ParamLimits

0x917f,	// (0x00011a1f) list_single_large_graphic_pane_g1

0x918b,	// (0x00011a2b) list_single_large_graphic_pane_g2_ParamLimits

0x918b,	// (0x00011a2b) list_single_large_graphic_pane_g2

0x9197,	// (0x00011a37) list_single_large_graphic_pane_g3_ParamLimits

0x9197,	// (0x00011a37) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00017e60) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00017e60) list_single_large_graphic_pane_g

0xb2f6,	// (0x00013b96) wait_border_pane_g2_copy1

0x91a3,	// (0x00011a43) list_single_large_graphic_pane_g4_cp2

0x91ab,	// (0x00011a4b) list_single_large_graphic_pane_t1_ParamLimits

0x91ab,	// (0x00011a4b) list_single_large_graphic_pane_t1

0x91c1,	// (0x00011a61) list_double_pane_g1_ParamLimits

0x91c1,	// (0x00011a61) list_double_pane_g1

0x91cd,	// (0x00011a6d) list_double_pane_g2_ParamLimits

0x91cd,	// (0x00011a6d) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00017e67) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00017e67) list_double_pane_g

0x91d9,	// (0x00011a79) list_double_pane_t1_ParamLimits

0x91d9,	// (0x00011a79) list_double_pane_t1

0x91ef,	// (0x00011a8f) list_double_pane_t2_ParamLimits

0x91ef,	// (0x00011a8f) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00017e6c) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00017e6c) list_double_pane_t

0x9201,	// (0x00011aa1) list_double2_pane_g1_ParamLimits

0x9201,	// (0x00011aa1) list_double2_pane_g1

0x9210,	// (0x00011ab0) list_double2_pane_g2_ParamLimits

0x9210,	// (0x00011ab0) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00017e71) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00017e71) list_double2_pane_g

0x921c,	// (0x00011abc) list_double2_pane_t1_ParamLimits

0x921c,	// (0x00011abc) list_double2_pane_t1

0x9232,	// (0x00011ad2) list_double2_pane_t2_ParamLimits

0x9232,	// (0x00011ad2) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00017e76) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00017e76) list_double2_pane_t

0x91c1,	// (0x00011a61) list_double_number_pane_g1_ParamLimits

0x91c1,	// (0x00011a61) list_double_number_pane_g1

0x91cd,	// (0x00011a6d) list_double_number_pane_g2_ParamLimits

0x91cd,	// (0x00011a6d) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00017e67) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00017e67) list_double_number_pane_g

0x9244,	// (0x00011ae4) list_double_number_pane_t1_ParamLimits

0x9244,	// (0x00011ae4) list_double_number_pane_t1

0x9256,	// (0x00011af6) list_double_number_pane_t2_ParamLimits

0x9256,	// (0x00011af6) list_double_number_pane_t2

0x926c,	// (0x00011b0c) list_double_number_pane_t3_ParamLimits

0x926c,	// (0x00011b0c) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00017e7b) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00017e7b) list_double_number_pane_t

0x927e,	// (0x00011b1e) list_double_graphic_pane_g1_ParamLimits

0x927e,	// (0x00011b1e) list_double_graphic_pane_g1

0x928a,	// (0x00011b2a) list_double_graphic_pane_g2_ParamLimits

0x928a,	// (0x00011b2a) list_double_graphic_pane_g2

0x9299,	// (0x00011b39) list_double_graphic_pane_g3_ParamLimits

0x9299,	// (0x00011b39) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00017e82) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00017e82) list_double_graphic_pane_g

0x92b1,	// (0x00011b51) list_double_graphic_pane_t1_ParamLimits

0x92b1,	// (0x00011b51) list_double_graphic_pane_t1

0x92c7,	// (0x00011b67) list_double_graphic_pane_t2_ParamLimits

0x92c7,	// (0x00011b67) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00017e8b) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00017e8b) list_double_graphic_pane_t

0x92d9,	// (0x00011b79) list_double2_graphic_pane_g1_ParamLimits

0x92d9,	// (0x00011b79) list_double2_graphic_pane_g1

0x92e5,	// (0x00011b85) list_double2_graphic_pane_g2_ParamLimits

0x92e5,	// (0x00011b85) list_double2_graphic_pane_g2

0x9210,	// (0x00011ab0) list_double2_graphic_pane_g3_ParamLimits

0x9210,	// (0x00011ab0) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00017e90) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00017e90) list_double2_graphic_pane_g

0x92f1,	// (0x00011b91) list_double2_graphic_pane_t1_ParamLimits

0x92f1,	// (0x00011b91) list_double2_graphic_pane_t1

0x9307,	// (0x00011ba7) list_double2_graphic_pane_t2_ParamLimits

0x9307,	// (0x00011ba7) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00017e97) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00017e97) list_double2_graphic_pane_t

0x9319,	// (0x00011bb9) list_double_large_graphic_pane_g1_ParamLimits

0x9319,	// (0x00011bb9) list_double_large_graphic_pane_g1

0x9342,	// (0x00011be2) list_double_large_graphic_pane_g2_ParamLimits

0x9342,	// (0x00011be2) list_double_large_graphic_pane_g2

0x91cd,	// (0x00011a6d) list_double_large_graphic_pane_g3_ParamLimits

0x91cd,	// (0x00011a6d) list_double_large_graphic_pane_g3

0x9351,	// (0x00011bf1) list_double_large_graphic_pane_g4_ParamLimits

0x9351,	// (0x00011bf1) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00017e9c) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00017e9c) list_double_large_graphic_pane_g

0x9377,	// (0x00011c17) list_double_large_graphic_pane_t1_ParamLimits

0x9377,	// (0x00011c17) list_double_large_graphic_pane_t1

0x9390,	// (0x00011c30) list_double_large_graphic_pane_t2_ParamLimits

0x9390,	// (0x00011c30) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00017ea7) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00017ea7) list_double_large_graphic_pane_t

0x93a2,	// (0x00011c42) list_double2_large_graphic_pane_g1_ParamLimits

0x93a2,	// (0x00011c42) list_double2_large_graphic_pane_g1

0x9201,	// (0x00011aa1) list_double2_large_graphic_pane_g2_ParamLimits

0x9201,	// (0x00011aa1) list_double2_large_graphic_pane_g2

0x9210,	// (0x00011ab0) list_double2_large_graphic_pane_g3_ParamLimits

0x9210,	// (0x00011ab0) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00017eac) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00017eac) list_double2_large_graphic_pane_g

0x93ae,	// (0x00011c4e) list_double2_large_graphic_pane_t1_ParamLimits

0x93ae,	// (0x00011c4e) list_double2_large_graphic_pane_t1

0x93c4,	// (0x00011c64) list_double2_large_graphic_pane_t2_ParamLimits

0x93c4,	// (0x00011c64) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00017eb3) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00017eb3) list_double2_large_graphic_pane_t

0x915e,	// (0x000119fe) list_double_heading_pane_g1_ParamLimits

0x915e,	// (0x000119fe) list_double_heading_pane_g1

0x90f0,	// (0x00011990) list_double_heading_pane_g2_ParamLimits

0x90f0,	// (0x00011990) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00017eb8) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00017eb8) list_double_heading_pane_g

0x93d6,	// (0x00011c76) list_double_heading_pane_t1_ParamLimits

0x93d6,	// (0x00011c76) list_double_heading_pane_t1

0x9232,	// (0x00011ad2) list_double_heading_pane_t2_ParamLimits

0x9232,	// (0x00011ad2) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00017ebd) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00017ebd) list_double_heading_pane_t

0x92d9,	// (0x00011b79) list_double_graphic_heading_pane_g1_ParamLimits

0x92d9,	// (0x00011b79) list_double_graphic_heading_pane_g1

0x915e,	// (0x000119fe) list_double_graphic_heading_pane_g2_ParamLimits

0x915e,	// (0x000119fe) list_double_graphic_heading_pane_g2

0x90f0,	// (0x00011990) list_double_graphic_heading_pane_g3_ParamLimits

0x90f0,	// (0x00011990) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00017ec2) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00017ec2) list_double_graphic_heading_pane_g

0x93ec,	// (0x00011c8c) list_double_graphic_heading_pane_t1_ParamLimits

0x93ec,	// (0x00011c8c) list_double_graphic_heading_pane_t1

0x9307,	// (0x00011ba7) list_double_graphic_heading_pane_t2_ParamLimits

0x9307,	// (0x00011ba7) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00017ec9) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00017ec9) list_double_graphic_heading_pane_t

0x9342,	// (0x00011be2) list_double_time_pane_g1_ParamLimits

0x9342,	// (0x00011be2) list_double_time_pane_g1

0x91cd,	// (0x00011a6d) list_double_time_pane_g2_ParamLimits

0x91cd,	// (0x00011a6d) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00017ece) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00017ece) list_double_time_pane_g

0x9402,	// (0x00011ca2) list_double_time_pane_t1_ParamLimits

0x9402,	// (0x00011ca2) list_double_time_pane_t1

0x9418,	// (0x00011cb8) list_double_time_pane_t2_ParamLimits

0x9418,	// (0x00011cb8) list_double_time_pane_t2

0x942a,	// (0x00011cca) list_double_time_pane_t3_ParamLimits

0x942a,	// (0x00011cca) list_double_time_pane_t3

0x943c,	// (0x00011cdc) list_double_time_pane_t4_ParamLimits

0x943c,	// (0x00011cdc) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00017ed3) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00017ed3) list_double_time_pane_t

0x92e5,	// (0x00011b85) list_setting_pane_g1_ParamLimits

0x92e5,	// (0x00011b85) list_setting_pane_g1

0x9210,	// (0x00011ab0) list_setting_pane_g2_ParamLimits

0x9210,	// (0x00011ab0) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00017edc) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00017edc) list_setting_pane_g

0x944e,	// (0x00011cee) list_setting_pane_t1_ParamLimits

0x944e,	// (0x00011cee) list_setting_pane_t1

0x9465,	// (0x00011d05) list_setting_pane_t2_ParamLimits

0x9465,	// (0x00011d05) list_setting_pane_t2

0x0002,

0xf641,	// (0x00017ee1) list_setting_pane_t_ParamLimits

0xf641,	// (0x00017ee1) list_setting_pane_t

0x94a2,	// (0x00011d42) set_value_pane_cp_ParamLimits

0x94a2,	// (0x00011d42) set_value_pane_cp

0x92e5,	// (0x00011b85) list_setting_number_pane_g1_ParamLimits

0x92e5,	// (0x00011b85) list_setting_number_pane_g1

0x9210,	// (0x00011ab0) list_setting_number_pane_g2_ParamLimits

0x9210,	// (0x00011ab0) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x00017edc) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x00017edc) list_setting_number_pane_g

0x94ae,	// (0x00011d4e) list_setting_number_pane_t1_ParamLimits

0x94ae,	// (0x00011d4e) list_setting_number_pane_t1

0x94c0,	// (0x00011d60) list_setting_number_pane_t2_ParamLimits

0x94c0,	// (0x00011d60) list_setting_number_pane_t2

0x94d7,	// (0x00011d77) list_setting_number_pane_t3_ParamLimits

0x94d7,	// (0x00011d77) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x00017ee8) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x00017ee8) list_setting_number_pane_t

0x94a2,	// (0x00011d42) set_value_pane_ParamLimits

0x94a2,	// (0x00011d42) set_value_pane

0x9518,	// (0x00011db8) bg_set_opt_pane_ParamLimits

0x9518,	// (0x00011db8) bg_set_opt_pane

0x9539,	// (0x00011dd9) set_value_pane_t1

0x9547,	// (0x00011de7) slider_set_pane_cp3

0x9550,	// (0x00011df0) volume_small_pane_cp

0x9559,	// (0x00011df9) list_form_gen_pane

0x90c7,	// (0x00011967) scroll_pane_cp8

0x9572,	// (0x00011e12) form_field_data_pane_ParamLimits

0x9572,	// (0x00011e12) form_field_data_pane

0x9592,	// (0x00011e32) form_field_data_wide_pane_ParamLimits

0x9592,	// (0x00011e32) form_field_data_wide_pane

0x95b1,	// (0x00011e51) form_field_popup_pane_ParamLimits

0x95b1,	// (0x00011e51) form_field_popup_pane

0x95c9,	// (0x00011e69) form_field_popup_wide_pane_ParamLimits

0x95c9,	// (0x00011e69) form_field_popup_wide_pane

0x95e0,	// (0x00011e80) form_field_slider_pane_ParamLimits

0x95e0,	// (0x00011e80) form_field_slider_pane

0x95f3,	// (0x00011e93) form_field_slider_wide_pane_ParamLimits

0x95f3,	// (0x00011e93) form_field_slider_wide_pane

0x9606,	// (0x00011ea6) data_form_pane

0x961a,	// (0x00011eba) form_field_data_pane_t1

0x9632,	// (0x00011ed2) input_focus_pane

0x9640,	// (0x00011ee0) data_form_wide_pane

0x966c,	// (0x00011f0c) form_field_data_wide_pane_t1

0x8f3e,	// (0x000117de) input_focus_pane_cp6

0x968b,	// (0x00011f2b) form_field_popup_pane_t1

0x9632,	// (0x00011ed2) input_focus_pane_cp7

0x9606,	// (0x00011ea6) list_form_pane

0x96ab,	// (0x00011f4b) form_field_popup_wide_pane_t1

0x9632,	// (0x00011ed2) input_focus_pane_cp8

0x96c0,	// (0x00011f60) list_form_wide_pane

0x96d7,	// (0x00011f77) form_field_slider_pane_t1_ParamLimits

0x96d7,	// (0x00011f77) form_field_slider_pane_t1

0x96ed,	// (0x00011f8d) form_field_slider_pane_t2_ParamLimits

0x96ed,	// (0x00011f8d) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x00017ef8) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x00017ef8) form_field_slider_pane_t

0x8bcd,	// (0x0001146d) input_focus_pane_cp9_ParamLimits

0x8bcd,	// (0x0001146d) input_focus_pane_cp9

0x96ff,	// (0x00011f9f) slider_cont_pane_ParamLimits

0x96ff,	// (0x00011f9f) slider_cont_pane

0x9713,	// (0x00011fb3) form_field_slider_wide_pane_t1_ParamLimits

0x9713,	// (0x00011fb3) form_field_slider_wide_pane_t1

0x9725,	// (0x00011fc5) form_field_slider_wide_pane_t2_ParamLimits

0x9725,	// (0x00011fc5) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x00017efd) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x00017efd) form_field_slider_wide_pane_t

0x8bcd,	// (0x0001146d) input_focus_pane_cp10_ParamLimits

0x8bcd,	// (0x0001146d) input_focus_pane_cp10

0x9737,	// (0x00011fd7) slider_cont_pane_cp1_ParamLimits

0x9737,	// (0x00011fd7) slider_cont_pane_cp1

0x974d,	// (0x00011fed) slider_form_pane_cp

0x9755,	// (0x00011ff5) input_focus_pane_g1

0x975d,	// (0x00011ffd) input_focus_pane_g2

0x9765,	// (0x00012005) input_focus_pane_g3

0x976d,	// (0x0001200d) input_focus_pane_g4

0x9775,	// (0x00012015) input_focus_pane_g5

0x977d,	// (0x0001201d) input_focus_pane_g6

0x9785,	// (0x00012025) input_focus_pane_g7

0x978d,	// (0x0001202d) input_focus_pane_g8

0x9795,	// (0x00012035) input_focus_pane_g9

0x876c,	// (0x0001100c) input_focus_pane_g10

0x0009,

0xf662,	// (0x00017f02) input_focus_pane_g

0xb2ff,	// (0x00013b9f) wait_border_pane_g3_copy1

0x979d,	// (0x0001203d) data_form_pane_t1

0x876c,	// (0x0001100c) wait_anim_pane_g1_copy1

0xc1a5,	// (0x00014a45) data_form_wide_pane_t1

0x97b7,	// (0x00012057) list_form_graphic_pane_cp_ParamLimits

0x97b7,	// (0x00012057) list_form_graphic_pane_cp

0xc172,	// (0x00014a12) slider_form_pane_g1

0xc17b,	// (0x00014a1b) slider_form_pane_g2

0x0006,

0xf965,	// (0x00018205) slider_form_pane_g

0x97cc,	// (0x0001206c) list_form_graphic_pane_ParamLimits

0x97cc,	// (0x0001206c) list_form_graphic_pane

0x97e2,	// (0x00012082) list_form_graphic_pane_g1

0x97ea,	// (0x0001208a) list_form_graphic_pane_t1_ParamLimits

0x97ea,	// (0x0001208a) list_form_graphic_pane_t1

0x8933,	// (0x000111d3) list_highlight_pane_cp5_ParamLimits

0x8933,	// (0x000111d3) list_highlight_pane_cp5

0x97ff,	// (0x0001209f) find_pane_g1

0x9808,	// (0x000120a8) input_find_pane

0x9811,	// (0x000120b1) input_find_pane_g1_ParamLimits

0x9811,	// (0x000120b1) input_find_pane_g1

0x981d,	// (0x000120bd) input_find_pane_t1_ParamLimits

0x981d,	// (0x000120bd) input_find_pane_t1

0x9832,	// (0x000120d2) input_find_pane_t2_ParamLimits

0x9832,	// (0x000120d2) input_find_pane_t2

0x0001,

0xf677,	// (0x00017f17) input_find_pane_t_ParamLimits

0xf677,	// (0x00017f17) input_find_pane_t

0x9847,	// (0x000120e7) input_focus_pane_cp5_ParamLimits

0x9847,	// (0x000120e7) input_focus_pane_cp5

0x8bcd,	// (0x0001146d) bg_popup_window_pane_cp2_ParamLimits

0x8bcd,	// (0x0001146d) bg_popup_window_pane_cp2

0x9866,	// (0x00012106) listscroll_menu_pane_ParamLimits

0x9866,	// (0x00012106) listscroll_menu_pane

0x9872,	// (0x00012112) popup_submenu_window_ParamLimits

0x9872,	// (0x00012112) popup_submenu_window

0x9896,	// (0x00012136) find_popup_pane_g1

0x989e,	// (0x0001213e) input_popup_find_pane_cp

0x98a8,	// (0x00012148) input_focus_pane_cp4_ParamLimits

0x98a8,	// (0x00012148) input_focus_pane_cp4

0x98c2,	// (0x00012162) input_popup_find_pane_t1_ParamLimits

0x98c2,	// (0x00012162) input_popup_find_pane_t1

0x8853,	// (0x000110f3) bg_popup_sub_pane_cp

0x98f0,	// (0x00012190) listscroll_popup_sub_pane

0x98f8,	// (0x00012198) list_submenu_pane_ParamLimits

0x98f8,	// (0x00012198) list_submenu_pane

0x9909,	// (0x000121a9) scroll_pane_cp4

0x9911,	// (0x000121b1) list_single_popup_submenu_pane_ParamLimits

0x9911,	// (0x000121b1) list_single_popup_submenu_pane

0x9923,	// (0x000121c3) list_single_popup_submenu_pane_g1

0x992b,	// (0x000121cb) list_single_popup_submenu_pane_t1_ParamLimits

0x992b,	// (0x000121cb) list_single_popup_submenu_pane_t1

0x8933,	// (0x000111d3) bg_active_tab_pane_cp1_ParamLimits

0x8933,	// (0x000111d3) bg_active_tab_pane_cp1

0x9940,	// (0x000121e0) tabs_2_active_pane_g1

0x9948,	// (0x000121e8) tabs_2_active_pane_t1

0x8933,	// (0x000111d3) bg_passive_tab_pane_cp1_ParamLimits

0x8933,	// (0x000111d3) bg_passive_tab_pane_cp1

0x9940,	// (0x000121e0) tabs_2_passive_pane_g1

0x9948,	// (0x000121e8) tabs_2_passive_pane_t1

0x995a,	// (0x000121fa) bg_active_tab_pane_cp4

0x9968,	// (0x00012208) tabs_2_long_active_pane_t1

0x997b,	// (0x0001221b) bg_passive_tab_pane_cp4

0x7303,	// (0x0000fba3) list_single_midp_graphic_pane_g4_ParamLimits

0x995a,	// (0x000121fa) bg_active_tab_pane_cp5

0x9987,	// (0x00012227) tabs_3_long_active_pane_t1

0x997b,	// (0x0001221b) bg_passive_tab_pane_cp5

0x7303,	// (0x0000fba3) list_single_midp_graphic_pane_g4

0x8933,	// (0x000111d3) bg_popup_window_pane_cp13_ParamLimits

0x8933,	// (0x000111d3) bg_popup_window_pane_cp13

0x99a2,	// (0x00012242) listscroll_popup_fast_pane_ParamLimits

0x99a2,	// (0x00012242) listscroll_popup_fast_pane

0x99b1,	// (0x00012251) grid_popup_fast_pane_ParamLimits

0x99b1,	// (0x00012251) grid_popup_fast_pane

0x99c3,	// (0x00012263) scroll_pane_cp9_ParamLimits

0x99c3,	// (0x00012263) scroll_pane_cp9

0xddca,	// (0x0001666a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xddca,	// (0x0001666a) list_single_graphic_hl_pane_t1_cp2

0x99e7,	// (0x00012287) input_focus_pane_cp20_ParamLimits

0x99e7,	// (0x00012287) input_focus_pane_cp20

0x99f5,	// (0x00012295) query_popup_data_pane_t1_ParamLimits

0x99f5,	// (0x00012295) query_popup_data_pane_t1

0x9a08,	// (0x000122a8) query_popup_data_pane_t2_ParamLimits

0x9a08,	// (0x000122a8) query_popup_data_pane_t2

0x9a4e,	// (0x000122ee) query_popup_data_pane_t3_ParamLimits

0x9a4e,	// (0x000122ee) query_popup_data_pane_t3

0x9a8f,	// (0x0001232f) query_popup_data_pane_t4_ParamLimits

0x9a8f,	// (0x0001232f) query_popup_data_pane_t4

0x9acb,	// (0x0001236b) query_popup_data_pane_t5_ParamLimits

0x9acb,	// (0x0001236b) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x00017f1c) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x00017f1c) query_popup_data_pane_t

0x9755,	// (0x00011ff5) bg_set_opt_pane_g1

0x975d,	// (0x00011ffd) bg_set_opt_pane_g2

0x9765,	// (0x00012005) bg_set_opt_pane_g3

0x976d,	// (0x0001200d) bg_set_opt_pane_g4

0x9775,	// (0x00012015) bg_set_opt_pane_g5

0x977d,	// (0x0001201d) bg_set_opt_pane_g6

0x9785,	// (0x00012025) bg_set_opt_pane_g7

0x978d,	// (0x0001202d) bg_set_opt_pane_g8

0x9795,	// (0x00012035) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x00017f27) bg_set_opt_pane_g

0x6a5c,	// (0x0000f2fc) control_top_pane_stacon_ParamLimits

0x6a5c,	// (0x0000f2fc) control_top_pane_stacon

0x6aaf,	// (0x0000f34f) signal_pane_stacon_ParamLimits

0x6aaf,	// (0x0000f34f) signal_pane_stacon

0xa124,	// (0x000129c4) stacon_top_pane_g1_ParamLimits

0xa124,	// (0x000129c4) stacon_top_pane_g1

0x6ad4,	// (0x0000f374) title_pane_stacon_ParamLimits

0x6ad4,	// (0x0000f374) title_pane_stacon

0x6af6,	// (0x0000f396) uni_indicator_pane_stacon_ParamLimits

0x6af6,	// (0x0000f396) uni_indicator_pane_stacon

0x6b0b,	// (0x0000f3ab) battery_pane_stacon_ParamLimits

0x6b0b,	// (0x0000f3ab) battery_pane_stacon

0x6b4b,	// (0x0000f3eb) control_bottom_pane_stacon_ParamLimits

0x6b4b,	// (0x0000f3eb) control_bottom_pane_stacon

0x6b6a,	// (0x0000f40a) navi_pane_stacon_ParamLimits

0x6b6a,	// (0x0000f40a) navi_pane_stacon

0xa146,	// (0x000129e6) stacon_bottom_pane_g1_ParamLimits

0xa146,	// (0x000129e6) stacon_bottom_pane_g1

0x9b02,	// (0x000123a2) aid_levels_signal_lsc_ParamLimits

0x9b02,	// (0x000123a2) aid_levels_signal_lsc

0x6828,	// (0x0000f0c8) signal_pane_stacon_g1_ParamLimits

0x6828,	// (0x0000f0c8) signal_pane_stacon_g1

0x6834,	// (0x0000f0d4) signal_pane_stacon_g2_ParamLimits

0x6834,	// (0x0000f0d4) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x00017f3a) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x00017f3a) signal_pane_stacon_g

0x6868,	// (0x0000f108) title_pane_stacon_t1_ParamLimits

0x6868,	// (0x0000f108) title_pane_stacon_t1

0x9b1c,	// (0x000123bc) uni_indicator_pane_stacon_g1

0x9b26,	// (0x000123c6) uni_indicator_pane_stacon_g2

0x9b30,	// (0x000123d0) uni_indicator_pane_stacon_g3

0x9b3a,	// (0x000123da) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x00017f46) uni_indicator_pane_stacon_g

0x688d,	// (0x0000f12d) control_top_pane_stacon_g1

0x6895,	// (0x0000f135) control_top_pane_stacon_t1_ParamLimits

0x6895,	// (0x0000f135) control_top_pane_stacon_t1

0x9b44,	// (0x000123e4) aid_levels_battery_lsc_ParamLimits

0x9b44,	// (0x000123e4) aid_levels_battery_lsc

0x68c6,	// (0x0000f166) battery_pane_stacon_g1_ParamLimits

0x68c6,	// (0x0000f166) battery_pane_stacon_g1

0x68d2,	// (0x0000f172) battery_pane_stacon_g2_ParamLimits

0x68d2,	// (0x0000f172) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x00017f4f) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x00017f4f) battery_pane_stacon_g

0x6901,	// (0x0000f1a1) navi_icon_pane_stacon

0x6911,	// (0x0000f1b1) navi_navi_pane_stacon

0x6901,	// (0x0000f1a1) navi_text_pane_stacon

0x688d,	// (0x0000f12d) control_bottom_pane_stacon_g1

0x6921,	// (0x0000f1c1) control_bottom_pane_stacon_t1_ParamLimits

0x6921,	// (0x0000f1c1) control_bottom_pane_stacon_t1

0x9b6c,	// (0x0001240c) grid_app_pane_ParamLimits

0x9b6c,	// (0x0001240c) grid_app_pane

0x9b88,	// (0x00012428) scroll_pane_cp15_ParamLimits

0x9b88,	// (0x00012428) scroll_pane_cp15

0x9b99,	// (0x00012439) cell_app_pane_ParamLimits

0x9b99,	// (0x00012439) cell_app_pane

0x9bbd,	// (0x0001245d) cell_app_pane_g1_ParamLimits

0x9bbd,	// (0x0001245d) cell_app_pane_g1

0x9be1,	// (0x00012481) cell_app_pane_g2_ParamLimits

0x9be1,	// (0x00012481) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00017f54) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00017f54) cell_app_pane_g

0x9bed,	// (0x0001248d) cell_app_pane_t1_ParamLimits

0x9bed,	// (0x0001248d) cell_app_pane_t1

0x9c04,	// (0x000124a4) grid_highlight_pane_ParamLimits

0x9c04,	// (0x000124a4) grid_highlight_pane

0x9755,	// (0x00011ff5) cell_highlight_pane_g1

0x975d,	// (0x00011ffd) cell_highlight_pane_g2

0x9765,	// (0x00012005) cell_highlight_pane_g3

0x976d,	// (0x0001200d) cell_highlight_pane_g4

0x9775,	// (0x00012015) cell_highlight_pane_g5

0x977d,	// (0x0001201d) cell_highlight_pane_g6

0x9785,	// (0x00012025) cell_highlight_pane_g7

0x978d,	// (0x0001202d) cell_highlight_pane_g8

0x9795,	// (0x00012035) cell_highlight_pane_g9

0x876c,	// (0x0001100c) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00017f02) cell_highlight_pane_g

0x9c15,	// (0x000124b5) bg_scroll_pane

0x6965,	// (0x0000f205) scroll_handle_pane

0x9c5c,	// (0x000124fc) scroll_bg_pane_g1

0x9c71,	// (0x00012511) scroll_bg_pane_g2

0x9c89,	// (0x00012529) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x00017f59) scroll_bg_pane_g

0x9c9e,	// (0x0001253e) scroll_handle_focus_pane_ParamLimits

0x9c9e,	// (0x0001253e) scroll_handle_focus_pane

0x9c5c,	// (0x000124fc) scroll_handle_pane_g1

0x9cab,	// (0x0001254b) scroll_handle_pane_g2

0x9c89,	// (0x00012529) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x00017f60) scroll_handle_pane_g

0x98a8,	// (0x00012148) bg_popup_sub_pane_cp21_ParamLimits

0x98a8,	// (0x00012148) bg_popup_sub_pane_cp21

0x9cbf,	// (0x0001255f) popup_fep_japan_predictive_window_t1_ParamLimits

0x9cbf,	// (0x0001255f) popup_fep_japan_predictive_window_t1

0x9cd6,	// (0x00012576) popup_fep_japan_predictive_window_t2_ParamLimits

0x9cd6,	// (0x00012576) popup_fep_japan_predictive_window_t2

0x9d09,	// (0x000125a9) popup_fep_japan_predictive_window_t3_ParamLimits

0x9d09,	// (0x000125a9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x00017f67) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x00017f67) popup_fep_japan_predictive_window_t

0x8853,	// (0x000110f3) bg_popup_sub_pane_cp23

0x9d40,	// (0x000125e0) listscroll_japin_cand_pane

0x9d48,	// (0x000125e8) popup_fep_japan_candidate_window_t1

0x9d56,	// (0x000125f6) candidate_pane_ParamLimits

0x9d56,	// (0x000125f6) candidate_pane

0x9d69,	// (0x00012609) scroll_pane_cp30

0x9d71,	// (0x00012611) list_single_popup_jap_candidate_pane_ParamLimits

0x9d71,	// (0x00012611) list_single_popup_jap_candidate_pane

0x8853,	// (0x000110f3) list_highlight_pane_cp30

0x9d86,	// (0x00012626) list_single_popup_jap_candidate_pane_t1

0x9d95,	// (0x00012635) level_1_signal

0x9da2,	// (0x00012642) level_2_signal

0x9daf,	// (0x0001264f) level_3_signal

0x9dbc,	// (0x0001265c) level_4_signal

0x9dc9,	// (0x00012669) level_5_signal

0x9dd6,	// (0x00012676) level_6_signal

0x9de3,	// (0x00012683) level_7_signal

0x9d95,	// (0x00012635) level_1_battery

0x9da2,	// (0x00012642) level_2_battery

0x9daf,	// (0x0001264f) level_3_battery

0x9dbc,	// (0x0001265c) level_4_battery

0x9dc9,	// (0x00012669) level_5_battery

0x9dd6,	// (0x00012676) level_6_battery

0x9de3,	// (0x00012683) level_7_battery

0x9e08,	// (0x000126a8) list_menu_pane_ParamLimits

0x9e08,	// (0x000126a8) list_menu_pane

0x9e1e,	// (0x000126be) scroll_pane_cp25_ParamLimits

0x9e1e,	// (0x000126be) scroll_pane_cp25

0x9e37,	// (0x000126d7) list_double2_graphic_pane_cp2_ParamLimits

0x9e37,	// (0x000126d7) list_double2_graphic_pane_cp2

0x9e37,	// (0x000126d7) list_double2_large_graphic_pane_cp2_ParamLimits

0x9e37,	// (0x000126d7) list_double2_large_graphic_pane_cp2

0x9e37,	// (0x000126d7) list_double2_pane_cp2_ParamLimits

0x9e37,	// (0x000126d7) list_double2_pane_cp2

0x9e37,	// (0x000126d7) list_double_graphic_pane_cp2_ParamLimits

0x9e37,	// (0x000126d7) list_double_graphic_pane_cp2

0x9e37,	// (0x000126d7) list_double_large_graphic_pane_cp2_ParamLimits

0x9e37,	// (0x000126d7) list_double_large_graphic_pane_cp2

0x9e37,	// (0x000126d7) list_double_number_pane_cp2_ParamLimits

0x9e37,	// (0x000126d7) list_double_number_pane_cp2

0x9e37,	// (0x000126d7) list_double_pane_cp2_ParamLimits

0x9e37,	// (0x000126d7) list_double_pane_cp2

0x9e47,	// (0x000126e7) list_single_2graphic_pane_cp2_ParamLimits

0x9e47,	// (0x000126e7) list_single_2graphic_pane_cp2

0x9e47,	// (0x000126e7) list_single_graphic_heading_pane_cp2_ParamLimits

0x9e47,	// (0x000126e7) list_single_graphic_heading_pane_cp2

0x9e47,	// (0x000126e7) list_single_graphic_pane_cp2_ParamLimits

0x9e47,	// (0x000126e7) list_single_graphic_pane_cp2

0x9e47,	// (0x000126e7) list_single_heading_pane_cp2_ParamLimits

0x9e47,	// (0x000126e7) list_single_heading_pane_cp2

0x9e5c,	// (0x000126fc) list_single_large_graphic_pane_cp2_ParamLimits

0x9e5c,	// (0x000126fc) list_single_large_graphic_pane_cp2

0x9e47,	// (0x000126e7) list_single_number_heading_pane_cp2_ParamLimits

0x9e47,	// (0x000126e7) list_single_number_heading_pane_cp2

0x9e47,	// (0x000126e7) list_single_number_pane_cp2_ParamLimits

0x9e47,	// (0x000126e7) list_single_number_pane_cp2

0x9e6d,	// (0x0001270d) list_single_pane_cp2_ParamLimits

0x9e6d,	// (0x0001270d) list_single_pane_cp2

0x9eed,	// (0x0001278d) bg_popup_sub_pane_cp22

0x6a14,	// (0x0000f2b4) popup_side_volume_key_window_g1

0x6a38,	// (0x0000f2d8) popup_side_volume_key_window_t1

0x6a54,	// (0x0000f2f4) volume_small_pane_cp1

0x8bcd,	// (0x0001146d) bg_popup_sub_pane_cp24_ParamLimits

0x8bcd,	// (0x0001146d) bg_popup_sub_pane_cp24

0x9f03,	// (0x000127a3) fep_china_uni_candidate_pane_ParamLimits

0x9f03,	// (0x000127a3) fep_china_uni_candidate_pane

0x9f17,	// (0x000127b7) fep_china_uni_entry_pane

0x9f27,	// (0x000127c7) popup_fep_china_uni_window_g1

0x9f43,	// (0x000127e3) fep_china_uni_entry_pane_g1

0x9f4b,	// (0x000127eb) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x00017f98) fep_china_uni_entry_pane_g

0x9f53,	// (0x000127f3) fep_entry_item_pane

0x9f5d,	// (0x000127fd) fep_candidate_item_pane

0x9f65,	// (0x00012805) fep_china_uni_candidate_pane_g1

0x9f6d,	// (0x0001280d) fep_china_uni_candidate_pane_g2

0x9f75,	// (0x00012815) fep_china_uni_candidate_pane_g3

0x9f7d,	// (0x0001281d) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x00017f9d) fep_china_uni_candidate_pane_g

0x876c,	// (0x0001100c) fep_entry_item_pane_g1

0x9f85,	// (0x00012825) fep_entry_item_pane_t1_ParamLimits

0x9f85,	// (0x00012825) fep_entry_item_pane_t1

0x9f9b,	// (0x0001283b) fep_candidate_item_pane_t1_ParamLimits

0x9f9b,	// (0x0001283b) fep_candidate_item_pane_t1

0x9fb0,	// (0x00012850) fep_candidate_item_pane_t2_ParamLimits

0x9fb0,	// (0x00012850) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x00017fa6) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x00017fa6) fep_candidate_item_pane_t

0x8933,	// (0x000111d3) list_highlight_pane_cp31_ParamLimits

0x8933,	// (0x000111d3) list_highlight_pane_cp31

0x9fc2,	// (0x00012862) level_1_signal_lsc

0x9fcb,	// (0x0001286b) level_2_signal_lsc

0x9fd4,	// (0x00012874) level_3_signal_lsc

0x9fdd,	// (0x0001287d) level_4_signal_lsc

0x9fe6,	// (0x00012886) level_5_signal_lsc

0x9fef,	// (0x0001288f) level_6_signal_lsc

0x9ff8,	// (0x00012898) level_7_signal_lsc

0x9ff8,	// (0x00012898) level_1_battery_lsc

0xa001,	// (0x000128a1) level_2_battery_lsc

0xa00a,	// (0x000128aa) level_3_battery_lsc

0xa013,	// (0x000128b3) level_4_battery_lsc

0xa01c,	// (0x000128bc) level_5_battery_lsc

0xa025,	// (0x000128c5) level_6_battery_lsc

0x9fc2,	// (0x00012862) level_7_battery_lsc

0xa02e,	// (0x000128ce) scroll_handle_focus_pane_g1

0xa037,	// (0x000128d7) scroll_handle_focus_pane_g2

0xa040,	// (0x000128e0) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x00017fab) scroll_handle_focus_pane_g

0xa049,	// (0x000128e9) list_single_2graphic_pane_g1_ParamLimits

0xa049,	// (0x000128e9) list_single_2graphic_pane_g1

0x915e,	// (0x000119fe) list_single_2graphic_pane_g2_ParamLimits

0x915e,	// (0x000119fe) list_single_2graphic_pane_g2

0x90f0,	// (0x00011990) list_single_2graphic_pane_g3_ParamLimits

0x90f0,	// (0x00011990) list_single_2graphic_pane_g3

0xa055,	// (0x000128f5) list_single_2graphic_pane_g4_ParamLimits

0xa055,	// (0x000128f5) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x00017fb2) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x00017fb2) list_single_2graphic_pane_g

0xa061,	// (0x00012901) list_single_2graphic_pane_t1_ParamLimits

0xa061,	// (0x00012901) list_single_2graphic_pane_t1

0xa08f,	// (0x0001292f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa08f,	// (0x0001292f) list_double2_graphic_large_graphic_pane_g1

0x9201,	// (0x00011aa1) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9201,	// (0x00011aa1) list_double2_graphic_large_graphic_pane_g2

0x9210,	// (0x00011ab0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9210,	// (0x00011ab0) list_double2_graphic_large_graphic_pane_g3

0xa09f,	// (0x0001293f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa09f,	// (0x0001293f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x00017fbb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x00017fbb) list_double2_graphic_large_graphic_pane_g

0xa0ab,	// (0x0001294b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa0ab,	// (0x0001294b) list_double2_graphic_large_graphic_pane_t1

0xa0c1,	// (0x00012961) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa0c1,	// (0x00012961) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x00017fc4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x00017fc4) list_double2_graphic_large_graphic_pane_t

0xa204,	// (0x00012aa4) popup_fast_swap_window_ParamLimits

0xa204,	// (0x00012aa4) popup_fast_swap_window

0xa220,	// (0x00012ac0) popup_side_volume_key_window

0xa23a,	// (0x00012ada) stacon_top_pane

0xa244,	// (0x00012ae4) status_pane_ParamLimits

0xa244,	// (0x00012ae4) status_pane

0x8762,	// (0x00011002) status_small_pane

0x8853,	// (0x000110f3) control_pane

0x8853,	// (0x000110f3) stacon_bottom_pane

0x90c7,	// (0x00011967) scroll_pane_cp121

0x9559,	// (0x00011df9) set_content_pane

0xa0d3,	// (0x00012973) bg_active_tab_pane_g1_cp1

0xa0dc,	// (0x0001297c) bg_active_tab_pane_g2_cp1

0xa0e5,	// (0x00012985) bg_active_tab_pane_g3_cp1

0xa0d3,	// (0x00012973) bg_passive_tab_pane_g1_cp1

0xa0dc,	// (0x0001297c) bg_passive_tab_pane_g2_cp1

0xa0e5,	// (0x00012985) bg_passive_tab_pane_g3_cp1

0xa0ee,	// (0x0001298e) bg_active_tab_pane_g1_cp2

0xa0dc,	// (0x0001297c) bg_active_tab_pane_g2_cp2

0xa0f7,	// (0x00012997) bg_active_tab_pane_g3_cp2

0xa0ee,	// (0x0001298e) bg_passive_tab_pane_g1_cp2

0xa0dc,	// (0x0001297c) bg_passive_tab_pane_g2_cp2

0xa0f7,	// (0x00012997) bg_passive_tab_pane_g3_cp2

0xa100,	// (0x000129a0) bg_active_tab_pane_g1_cp3

0xa0dc,	// (0x0001297c) bg_active_tab_pane_g2_cp3

0xa109,	// (0x000129a9) bg_active_tab_pane_g3_cp3

0xa100,	// (0x000129a0) bg_passive_tab_pane_g1_cp3

0xa0dc,	// (0x0001297c) bg_passive_tab_pane_g2_cp3

0xa109,	// (0x000129a9) bg_passive_tab_pane_g3_cp3

0xa112,	// (0x000129b2) bg_active_tab_pane_g1_cp4

0xa0dc,	// (0x0001297c) bg_active_tab_pane_g2_cp4

0xa11b,	// (0x000129bb) bg_active_tab_pane_g3_cp4

0xa112,	// (0x000129b2) bg_passive_tab_pane_g1_cp4

0xa0dc,	// (0x0001297c) bg_passive_tab_pane_g2_cp4

0xa11b,	// (0x000129bb) bg_passive_tab_pane_g3_cp4

0xa162,	// (0x00012a02) bg_active_tab_pane_g1_cp5

0xa0dc,	// (0x0001297c) bg_active_tab_pane_g2_cp5

0xa16b,	// (0x00012a0b) bg_active_tab_pane_g3_cp5

0xa162,	// (0x00012a02) bg_passive_tab_pane_g1_cp5

0xa0dc,	// (0x0001297c) bg_passive_tab_pane_g2_cp5

0xa16b,	// (0x00012a0b) bg_passive_tab_pane_g3_cp5

0xa174,	// (0x00012a14) list_set_graphic_pane_ParamLimits

0xa174,	// (0x00012a14) list_set_graphic_pane

0x8853,	// (0x000110f3) bg_set_opt_pane_cp4

0xa18b,	// (0x00012a2b) list_set_graphic_pane_g1_ParamLimits

0xa18b,	// (0x00012a2b) list_set_graphic_pane_g1

0xa197,	// (0x00012a37) list_set_graphic_pane_g2_ParamLimits

0xa197,	// (0x00012a37) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x00017fc9) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x00017fc9) list_set_graphic_pane_g

0x0009,

0xfaa7,	// (0x00018347) volume_small_pane_cp_g

0xa1b9,	// (0x00012a59) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa1b9,	// (0x00012a59) list_double2_large_graphic_pane_g1_cp2

0xa1c5,	// (0x00012a65) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa1c5,	// (0x00012a65) list_double2_large_graphic_pane_g2_cp2

0xa1d4,	// (0x00012a74) list_double2_large_graphic_pane_g3_cp2

0xa1dc,	// (0x00012a7c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xa1dc,	// (0x00012a7c) list_double2_large_graphic_pane_t1_cp2

0xa1f2,	// (0x00012a92) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xa1f2,	// (0x00012a92) list_double2_large_graphic_pane_t2_cp2

0xbd71,	// (0x00014611) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbd71,	// (0x00014611) list_double_large_graphic_pane_g1_cp2

0xbd82,	// (0x00014622) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbd82,	// (0x00014622) list_double_large_graphic_pane_g2_cp2

0xa31f,	// (0x00012bbf) list_double_large_graphic_pane_g3_cp2

0xbd91,	// (0x00014631) list_double_large_graphic_pane_g4_cp

0xbd99,	// (0x00014639) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xbd99,	// (0x00014639) list_double_large_graphic_pane_t1_cp2

0xbdb0,	// (0x00014650) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xbdb0,	// (0x00014650) list_double_large_graphic_pane_t2_cp2

0xa252,	// (0x00012af2) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa252,	// (0x00012af2) list_double2_graphic_pane_g1_cp2

0xa25e,	// (0x00012afe) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa25e,	// (0x00012afe) list_double2_graphic_pane_g2_cp2

0xa26d,	// (0x00012b0d) list_double2_graphic_pane_g3_cp2

0xa275,	// (0x00012b15) list_double2_graphic_pane_t1_cp2_ParamLimits

0xa275,	// (0x00012b15) list_double2_graphic_pane_t1_cp2

0xa28b,	// (0x00012b2b) list_double2_graphic_pane_t2_cp2_ParamLimits

0xa28b,	// (0x00012b2b) list_double2_graphic_pane_t2_cp2

0xa29d,	// (0x00012b3d) list_single_number_heading_pane_g1_cp2_ParamLimits

0xa29d,	// (0x00012b3d) list_single_number_heading_pane_g1_cp2

0xa2a9,	// (0x00012b49) list_single_number_heading_pane_g2_cp2

0xa2b1,	// (0x00012b51) list_single_number_heading_pane_t1_cp2_ParamLimits

0xa2b1,	// (0x00012b51) list_single_number_heading_pane_t1_cp2

0xa2c7,	// (0x00012b67) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa2c7,	// (0x00012b67) list_single_number_heading_pane_t2_cp2

0xa2d9,	// (0x00012b79) list_single_number_heading_pane_t3_cp2_ParamLimits

0xa2d9,	// (0x00012b79) list_single_number_heading_pane_t3_cp2

0xa29d,	// (0x00012b3d) list_single_heading_pane_g1_cp2_ParamLimits

0xa29d,	// (0x00012b3d) list_single_heading_pane_g1_cp2

0xa2a9,	// (0x00012b49) list_single_heading_pane_g2_cp2

0xa2b1,	// (0x00012b51) list_single_heading_pane_t1_cp2_ParamLimits

0xa2b1,	// (0x00012b51) list_single_heading_pane_t1_cp2

0xbb7b,	// (0x0001441b) list_single_heading_pane_t2_cp2_ParamLimits

0xbb7b,	// (0x0001441b) list_single_heading_pane_t2_cp2

0xbacb,	// (0x0001436b) list_double_graphic_pane_g1_cp2_ParamLimits

0xbacb,	// (0x0001436b) list_double_graphic_pane_g1_cp2

0xbad7,	// (0x00014377) list_double_graphic_pane_g2_cp2_ParamLimits

0xbad7,	// (0x00014377) list_double_graphic_pane_g2_cp2

0xbae6,	// (0x00014386) list_double_graphic_pane_g3_cp2

0xbaee,	// (0x0001438e) list_double_graphic_pane_t1_cp2_ParamLimits

0xbaee,	// (0x0001438e) list_double_graphic_pane_t1_cp2

0xbb04,	// (0x000143a4) list_double_graphic_pane_t2_cp2_ParamLimits

0xbb04,	// (0x000143a4) list_double_graphic_pane_t2_cp2

0xa313,	// (0x00012bb3) list_double_number_pane_g1_cp2_ParamLimits

0xa313,	// (0x00012bb3) list_double_number_pane_g1_cp2

0xa31f,	// (0x00012bbf) list_double_number_pane_g2_cp2

0xba91,	// (0x00014331) list_double_number_pane_t1_cp2_ParamLimits

0xba91,	// (0x00014331) list_double_number_pane_t1_cp2

0xbaa3,	// (0x00014343) list_double_number_pane_t2_cp2_ParamLimits

0xbaa3,	// (0x00014343) list_double_number_pane_t2_cp2

0xbab9,	// (0x00014359) list_double_number_pane_t3_cp2_ParamLimits

0xbab9,	// (0x00014359) list_double_number_pane_t3_cp2

0xb97b,	// (0x0001421b) list_single_graphic_pane_g1_cp2_ParamLimits

0xb97b,	// (0x0001421b) list_single_graphic_pane_g1_cp2

0xa29d,	// (0x00012b3d) list_single_graphic_pane_g2_cp2_ParamLimits

0xa29d,	// (0x00012b3d) list_single_graphic_pane_g2_cp2

0xa2a9,	// (0x00012b49) list_single_graphic_pane_g3_cp2

0xb953,	// (0x000141f3) list_single_graphic_pane_t1_cp2_ParamLimits

0xb953,	// (0x000141f3) list_single_graphic_pane_t1_cp2

0xa29d,	// (0x00012b3d) list_single_number_pane_g1_cp2_ParamLimits

0xa29d,	// (0x00012b3d) list_single_number_pane_g1_cp2

0xa2a9,	// (0x00012b49) list_single_number_pane_g2_cp2

0xb953,	// (0x000141f3) list_single_number_pane_t1_cp2_ParamLimits

0xb953,	// (0x000141f3) list_single_number_pane_t1_cp2

0xb969,	// (0x00014209) list_single_number_pane_t2_cp2_ParamLimits

0xb969,	// (0x00014209) list_single_number_pane_t2_cp2

0xa1c5,	// (0x00012a65) list_double2_pane_g1_cp2_ParamLimits

0xa1c5,	// (0x00012a65) list_double2_pane_g1_cp2

0xa1d4,	// (0x00012a74) list_double2_pane_g2_cp2

0xa2eb,	// (0x00012b8b) list_double2_pane_t1_cp2_ParamLimits

0xa2eb,	// (0x00012b8b) list_double2_pane_t1_cp2

0xa301,	// (0x00012ba1) list_double2_pane_t2_cp2_ParamLimits

0xa301,	// (0x00012ba1) list_double2_pane_t2_cp2

0xa313,	// (0x00012bb3) list_double_pane_g1_cp2_ParamLimits

0xa313,	// (0x00012bb3) list_double_pane_g1_cp2

0xa31f,	// (0x00012bbf) list_double_pane_g2_cp2

0xa327,	// (0x00012bc7) list_double_pane_t1_cp2_ParamLimits

0xa327,	// (0x00012bc7) list_double_pane_t1_cp2

0xa33d,	// (0x00012bdd) list_double_pane_t2_cp2_ParamLimits

0xa33d,	// (0x00012bdd) list_double_pane_t2_cp2

0xa36c,	// (0x00012c0c) list_single_pane_cp2_g3

0xa29d,	// (0x00012b3d) list_single_pane_g1_cp2_ParamLimits

0xa29d,	// (0x00012b3d) list_single_pane_g1_cp2

0xa2a9,	// (0x00012b49) list_single_pane_g2_cp2

0xa37c,	// (0x00012c1c) list_single_pane_t1_cp2_ParamLimits

0xa37c,	// (0x00012c1c) list_single_pane_t1_cp2

0xa394,	// (0x00012c34) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa394,	// (0x00012c34) list_single_large_graphic_pane_g1_cp2

0xa3a0,	// (0x00012c40) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xa3a0,	// (0x00012c40) list_single_large_graphic_pane_g2_cp2

0xa3ac,	// (0x00012c4c) list_single_large_graphic_pane_g3_cp2

0xa3b4,	// (0x00012c54) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa3b4,	// (0x00012c54) list_single_large_graphic_pane_g4_cp1

0xa3ce,	// (0x00012c6e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xa3ce,	// (0x00012c6e) list_single_large_graphic_pane_t1_cp2

0xb7e0,	// (0x00014080) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xb7e0,	// (0x00014080) list_single_graphic_heading_pane_g1_cp2

0xb91c,	// (0x000141bc) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb91c,	// (0x000141bc) list_single_graphic_heading_pane_g4_cp2

0xa2a9,	// (0x00012b49) list_single_graphic_heading_pane_g5_cp2

0xa2b1,	// (0x00012b51) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa2b1,	// (0x00012b51) list_single_graphic_heading_pane_t1_cp2

0xb941,	// (0x000141e1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb941,	// (0x000141e1) list_single_graphic_heading_pane_t2_cp2

0xb910,	// (0x000141b0) list_single_2graphic_pane_g1_cp2_ParamLimits

0xb910,	// (0x000141b0) list_single_2graphic_pane_g1_cp2

0xb91c,	// (0x000141bc) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb91c,	// (0x000141bc) list_single_2graphic_pane_g2_cp2

0xa2a9,	// (0x00012b49) list_single_2graphic_pane_g3_cp2

0xb7d4,	// (0x00014074) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb7d4,	// (0x00014074) list_single_2graphic_pane_g4_cp2

0xb92b,	// (0x000141cb) list_single_2graphic_pane_t1_cp2_ParamLimits

0xb92b,	// (0x000141cb) list_single_2graphic_pane_t1_cp2

0x876c,	// (0x0001100c) list_highlight_pane_g10_cp1

0xb4f2,	// (0x00013d92) list_highlight_pane_g1_cp1

0xb4fa,	// (0x00013d9a) list_highlight_pane_g2_cp1

0xb502,	// (0x00013da2) list_highlight_pane_g3_cp1

0xb50a,	// (0x00013daa) list_highlight_pane_g4_cp1

0xb512,	// (0x00013db2) list_highlight_pane_g5_cp1

0xb51a,	// (0x00013dba) list_highlight_pane_g6_cp1

0xb522,	// (0x00013dc2) list_highlight_pane_g7_cp1

0xb52a,	// (0x00013dca) list_highlight_pane_g8_cp1

0xb532,	// (0x00013dd2) list_highlight_pane_g9_cp1

0xb420,	// (0x00013cc0) form_field_slider_pane_t3

0xb42e,	// (0x00013cce) form_field_slider_pane_t4

0xb43c,	// (0x00013cdc) slider_form_pane_ParamLimits

0xb43c,	// (0x00013cdc) slider_form_pane

0x8853,	// (0x000110f3) control_abbreviations

0x8853,	// (0x000110f3) control_conventions

0x8853,	// (0x000110f3) control_definitions

0x8853,	// (0x000110f3) format_table_attribute

0xbbc5,	// (0x00014465) bg_popup_preview_window_pane_g9

0x8853,	// (0x000110f3) format_table_data2

0x8853,	// (0x000110f3) format_table_data3

0x8853,	// (0x000110f3) format_table_data_example

0x0008,

0x8853,	// (0x000110f3) intro_purpose

0xf8c5,	// (0x00018165) bg_popup_preview_window_pane_g

0x8853,	// (0x000110f3) texts_category

0x8853,	// (0x000110f3) texts_graphics

0xa3e4,	// (0x00012c84) text_digital

0xa3f3,	// (0x00012c93) text_primary

0xa402,	// (0x00012ca2) text_primary_small

0xa411,	// (0x00012cb1) text_secondary

0xa420,	// (0x00012cc0) text_title

0xc32c,	// (0x00014bcc) bg_passive_tab_pane_g1_cp3_srt

0xa0dc,	// (0x0001297c) bg_passive_tab_pane_g2_cp3_srt

0xc335,	// (0x00014bd5) bg_passive_tab_pane_g3_cp3_srt

0x8933,	// (0x000111d3) bg_active_tab_pane_cp3_srt_ParamLimits

0x8933,	// (0x000111d3) bg_active_tab_pane_cp3_srt

0xc33e,	// (0x00014bde) tabs_4_active_pane_srt_g1

0x8963,	// (0x00011203) tabs_4_active_pane_srt_t1_ParamLimits

0x8963,	// (0x00011203) tabs_4_active_pane_srt_t1

0xc32c,	// (0x00014bcc) bg_active_tab_pane_g1_cp3_copy1

0xa0dc,	// (0x0001297c) bg_active_tab_pane_g2_cp3_copy1

0xc335,	// (0x00014bd5) bg_active_tab_pane_g3_cp3_copy1

0x8933,	// (0x000111d3) tabs_2_long_active_pane_srt_ParamLimits

0x8933,	// (0x000111d3) tabs_2_long_active_pane_srt

0x8933,	// (0x000111d3) tabs_2_long_passive_pane_srt_ParamLimits

0x8933,	// (0x000111d3) tabs_2_long_passive_pane_srt

0x997b,	// (0x0001221b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x997b,	// (0x0001221b) bg_passive_tab_pane_cp4_srt

0xbfe9,	// (0x00014889) bg_passive_tab_pane_g1_cp4_srt

0xa0dc,	// (0x0001297c) bg_passive_tab_pane_g2_cp4_srt

0xbff2,	// (0x00014892) bg_passive_tab_pane_g3_cp4_srt

0x995a,	// (0x000121fa) bg_active_tab_pane_cp4_srt_ParamLimits

0x995a,	// (0x000121fa) bg_active_tab_pane_cp4_srt

0x9968,	// (0x00012208) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9968,	// (0x00012208) tabs_2_long_active_pane_srt_t1

0xbfe9,	// (0x00014889) bg_active_tab_pane_g1_cp4_srt

0xa0dc,	// (0x0001297c) bg_active_tab_pane_g2_cp4_srt

0xbff2,	// (0x00014892) bg_active_tab_pane_g3_cp4_srt

0x8bcd,	// (0x0001146d) tabs_3_long_active_pane_srt_ParamLimits

0x8bcd,	// (0x0001146d) tabs_3_long_active_pane_srt

0x8bcd,	// (0x0001146d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8bcd,	// (0x0001146d) tabs_3_long_passive_pane_cp_srt

0x8bcd,	// (0x0001146d) tabs_3_long_passive_pane_srt_ParamLimits

0x8bcd,	// (0x0001146d) tabs_3_long_passive_pane_srt

0x997b,	// (0x0001221b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x997b,	// (0x0001221b) bg_passive_tab_pane_cp5_srt

0xa162,	// (0x00012a02) bg_passive_tab_pane_g1_cp5_srt

0xa0dc,	// (0x0001297c) bg_passive_tab_pane_g2_cp5_srt

0xa16b,	// (0x00012a0b) bg_passive_tab_pane_g3_cp5_srt

0x995a,	// (0x000121fa) bg_active_tab_pane_cp5_srt_ParamLimits

0x995a,	// (0x000121fa) bg_active_tab_pane_cp5_srt

0x9987,	// (0x00012227) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9987,	// (0x00012227) tabs_3_long_active_pane_srt_t1

0xa162,	// (0x00012a02) bg_active_tab_pane_g1_cp5_srt

0xa0dc,	// (0x0001297c) bg_active_tab_pane_g2_cp5_srt

0xa16b,	// (0x00012a0b) bg_active_tab_pane_g3_cp5_srt

0xbfdb,	// (0x0001487b) navi_text_pane_srt_t1

0xbfd3,	// (0x00014873) navi_icon_pane_srt_g1

0xa5e7,	// (0x00012e87) midp_editing_number_pane_srt

0xa42f,	// (0x00012ccf) midp_ticker_pane_srt

0xa5ef,	// (0x00012e8f) midp_ticker_pane_srt_g1

0xa5f7,	// (0x00012e97) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x00017fe8) midp_ticker_pane_srt_g

0xa5ff,	// (0x00012e9f) midp_ticker_pane_srt_t1

0xbfc4,	// (0x00014864) midp_editing_number_pane_t1_copy1

0xa437,	// (0x00012cd7) listscroll_midp_pane

0xa437,	// (0x00012cd7) midp_form_pane

0xa49f,	// (0x00012d3f) midp_info_popup_window_ParamLimits

0xa49f,	// (0x00012d3f) midp_info_popup_window

0x98a8,	// (0x00012148) bg_popup_sub_pane_cp50_ParamLimits

0x98a8,	// (0x00012148) bg_popup_sub_pane_cp50

0xb135,	// (0x000139d5) listscroll_midp_info_pane_ParamLimits

0xb135,	// (0x000139d5) listscroll_midp_info_pane

0xb11d,	// (0x000139bd) listscroll_form_midp_pane_ParamLimits

0xb11d,	// (0x000139bd) listscroll_form_midp_pane

0xb129,	// (0x000139c9) scroll_bar_cp050

0xb0fd,	// (0x0001399d) list_midp_pane

0xcf49,	// (0x000157e9) signal_pane_g2_cp

0xb037,	// (0x000138d7) listscroll_midp_info_pane_t1_ParamLimits

0xb037,	// (0x000138d7) listscroll_midp_info_pane_t1

0xb04f,	// (0x000138ef) listscroll_midp_info_pane_t2_ParamLimits

0xb04f,	// (0x000138ef) listscroll_midp_info_pane_t2

0xb08d,	// (0x0001392d) listscroll_midp_info_pane_t3_ParamLimits

0xb08d,	// (0x0001392d) listscroll_midp_info_pane_t3

0xb0c7,	// (0x00013967) listscroll_midp_info_pane_t4_ParamLimits

0xb0c7,	// (0x00013967) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x000180a0) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x000180a0) listscroll_midp_info_pane_t

0x9909,	// (0x000121a9) scroll_pane_cp21

0xafdb,	// (0x0001387b) form_midp_field_choice_group_pane

0xafe4,	// (0x00013884) form_midp_field_text_pane

0xb01d,	// (0x000138bd) form_midp_field_time_pane

0xb025,	// (0x000138c5) form_midp_gauge_slider_pane

0xb02e,	// (0x000138ce) form_midp_gauge_wait_pane

0x8853,	// (0x000110f3) form_midp_image_pane

0xafc6,	// (0x00013866) list_single_midp_pane_ParamLimits

0xafc6,	// (0x00013866) list_single_midp_pane

0xaf94,	// (0x00013834) form_midp_field_text_pane_t1

0xad93,	// (0x00013633) input_focus_pane_cp050

0xafb5,	// (0x00013855) list_midp_form_text_pane

0xaf63,	// (0x00013803) form_midp_field_choice_group_pane_t1

0xaf71,	// (0x00013811) input_focus_pane_cp051

0xaf85,	// (0x00013825) list_midp_choice_pane

0x8853,	// (0x000110f3) status_idle_pane

0xaf47,	// (0x000137e7) form_midp_field_time_pane_t1

0x876c,	// (0x0001100c) wait_anim_pane_g2_copy1

0xaf55,	// (0x000137f5) form_midp_field_time_pane_t2

0x0001,

0xa549,	// (0x00012de9) aid_navinavi_width_2_pane

0xf7fb,	// (0x0001809b) form_midp_field_time_pane_t

0x8853,	// (0x000110f3) input_focus_pane_cp052

0x8853,	// (0x000110f3) bg_input_focus_pane_cp040

0xaf07,	// (0x000137a7) form_midp_gauge_slider_pane_t1

0xaf15,	// (0x000137b5) form_midp_gauge_slider_pane_t2

0xaf23,	// (0x000137c3) form_midp_gauge_slider_pane_t3

0xaf31,	// (0x000137d1) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x00018092) form_midp_gauge_slider_pane_t

0xaf3f,	// (0x000137df) form_midp_slider_pane

0x8933,	// (0x000111d3) bg_input_focus_pane_cp041_ParamLimits

0x8933,	// (0x000111d3) bg_input_focus_pane_cp041

0xaed7,	// (0x00013777) form_midp_gauge_wait_pane_t1_ParamLimits

0xaed7,	// (0x00013777) form_midp_gauge_wait_pane_t1

0xaee9,	// (0x00013789) form_midp_gauge_wait_pane_t2_ParamLimits

0xaee9,	// (0x00013789) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x0001808d) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x0001808d) form_midp_gauge_wait_pane_t

0xaefb,	// (0x0001379b) form_midp_wait_pane_ParamLimits

0xaefb,	// (0x0001379b) form_midp_wait_pane

0xaea1,	// (0x00013741) form_midp_image_pane_g1

0xaeaa,	// (0x0001374a) form_midp_image_pane_t1

0xaeb9,	// (0x00013759) form_midp_image_pane_t2

0xaec8,	// (0x00013768) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x00018086) form_midp_image_pane_t

0xae89,	// (0x00013729) list_single_midp_pane_g1

0xae92,	// (0x00013732) list_single_midp_pane_t1

0xae75,	// (0x00013715) list_midp_form_item_pane_ParamLimits

0xae75,	// (0x00013715) list_midp_form_item_pane

0xa4f1,	// (0x00012d91) list_midp_form_item_pane_t1

0xa500,	// (0x00012da0) midp_ticker_pane_g1

0xa50c,	// (0x00012dac) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x00017fce) midp_ticker_pane_g

0xa518,	// (0x00012db8) midp_ticker_pane_t1

0xbfc4,	// (0x00014864) midp_editing_number_pane_t1

0xc1d5,	// (0x00014a75) midp_editing_number_pane

0xc1e1,	// (0x00014a81) midp_ticker_pane

0xbfa2,	// (0x00014842) ai_message_heading_pane

0x8853,	// (0x000110f3) bg_popup_window_pane_cp14

0xbfaa,	// (0x0001484a) listscroll_ai_message_pane

0xbf2c,	// (0x000147cc) ai_message_heading_pane_g1_ParamLimits

0xbf2c,	// (0x000147cc) ai_message_heading_pane_g1

0xbf38,	// (0x000147d8) ai_message_heading_pane_g2_ParamLimits

0xbf38,	// (0x000147d8) ai_message_heading_pane_g2

0xbf44,	// (0x000147e4) ai_message_heading_pane_g3_ParamLimits

0xbf44,	// (0x000147e4) ai_message_heading_pane_g3

0xbf50,	// (0x000147f0) ai_message_heading_pane_g4_ParamLimits

0xbf50,	// (0x000147f0) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x000181c7) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x000181c7) ai_message_heading_pane_g

0xbf5c,	// (0x000147fc) ai_message_heading_pane_t1_ParamLimits

0xbf5c,	// (0x000147fc) ai_message_heading_pane_t1

0xbf76,	// (0x00014816) ai_message_heading_pane_t2_ParamLimits

0xbf76,	// (0x00014816) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x000181d0) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x000181d0) ai_message_heading_pane_t

0xbf88,	// (0x00014828) bg_popup_heading_pane_cp1_ParamLimits

0xbf88,	// (0x00014828) bg_popup_heading_pane_cp1

0xbf1a,	// (0x000147ba) list_ai_message_pane_ParamLimits

0xbf1a,	// (0x000147ba) list_ai_message_pane

0x9909,	// (0x000121a9) scroll_pane_cp10

0xbeb6,	// (0x00014756) list_ai_message_pane_g1

0xbebe,	// (0x0001475e) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x000181a4) list_ai_message_pane_g

0xbec6,	// (0x00014766) list_ai_message_pane_t1_ParamLimits

0xbec6,	// (0x00014766) list_ai_message_pane_t1

0xbedb,	// (0x0001477b) list_ai_message_pane_t2_ParamLimits

0xbedb,	// (0x0001477b) list_ai_message_pane_t2

0xbef0,	// (0x00014790) list_ai_message_pane_t3_ParamLimits

0xbef0,	// (0x00014790) list_ai_message_pane_t3

0xbf05,	// (0x000147a5) list_ai_message_pane_t4_ParamLimits

0xbf05,	// (0x000147a5) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x000181a9) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x000181a9) list_ai_message_pane_t

0xbea4,	// (0x00014744) cell_ai_soft_ind_pane_ParamLimits

0xbea4,	// (0x00014744) cell_ai_soft_ind_pane

0xa52a,	// (0x00012dca) cell_ai_soft_ind_pane_g1_ParamLimits

0xa52a,	// (0x00012dca) cell_ai_soft_ind_pane_g1

0x8853,	// (0x000110f3) grid_highlight_cp1

0xa537,	// (0x00012dd7) text_secondary_cp56_ParamLimits

0xa537,	// (0x00012dd7) text_secondary_cp56

0xbe79,	// (0x00014719) example_general_pane_ParamLimits

0xbe79,	// (0x00014719) example_general_pane

0xbe85,	// (0x00014725) example_parent_pane_g1_ParamLimits

0xbe85,	// (0x00014725) example_parent_pane_g1

0xbe91,	// (0x00014731) example_parent_pane_t1_ParamLimits

0xbe91,	// (0x00014731) example_parent_pane_t1

0x7067,	// (0x0000f907) popup_preview_text_window_ParamLimits

0x7067,	// (0x0000f907) popup_preview_text_window

0xa374,	// (0x00012c14) list_single_pane_cp2_g4

0x8ca9,	// (0x00011549) bg_popup_preview_window_pane_ParamLimits

0x8ca9,	// (0x00011549) bg_popup_preview_window_pane

0xbbcd,	// (0x0001446d) popup_preview_text_window_t1_ParamLimits

0xbbcd,	// (0x0001446d) popup_preview_text_window_t1

0xbbeb,	// (0x0001448b) popup_preview_text_window_t2_ParamLimits

0xbbeb,	// (0x0001448b) popup_preview_text_window_t2

0xbc34,	// (0x000144d4) popup_preview_text_window_t3_ParamLimits

0xbc34,	// (0x000144d4) popup_preview_text_window_t3

0xbc79,	// (0x00014519) popup_preview_text_window_t4_ParamLimits

0xbc79,	// (0x00014519) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x00018178) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x00018178) popup_preview_text_window_t

0xbcf7,	// (0x00014597) scroll_pane_cp11

0xac7b,	// (0x0001351b) bg_popup_preview_window_pane_g1

0xbb8d,	// (0x0001442d) bg_popup_preview_window_pane_g2

0xbb95,	// (0x00014435) bg_popup_preview_window_pane_g3

0xbb9d,	// (0x0001443d) bg_popup_preview_window_pane_g4

0xbba5,	// (0x00014445) bg_popup_preview_window_pane_g5

0xbbad,	// (0x0001444d) bg_popup_preview_window_pane_g6

0xbbb5,	// (0x00014455) bg_popup_preview_window_pane_g7

0xbbbd,	// (0x0001445d) bg_popup_preview_window_pane_g8

0x6519,	// (0x0000edb9) aid_popup_width_pane

0x7049,	// (0x0000f8e9) popup_midp_note_alarm_window_ParamLimits

0x7049,	// (0x0000f8e9) popup_midp_note_alarm_window

0x9606,	// (0x00011ea6) data_form_pane_ParamLimits

0x9612,	// (0x00011eb2) form_field_data_pane_g1

0x961a,	// (0x00011eba) form_field_data_pane_t1_ParamLimits

0x9632,	// (0x00011ed2) input_focus_pane_ParamLimits

0x9640,	// (0x00011ee0) data_form_wide_pane_ParamLimits

0x964c,	// (0x00011eec) form_field_data_wide_pane_g1

0x966c,	// (0x00011f0c) form_field_data_wide_pane_t1_ParamLimits

0x8f3e,	// (0x000117de) input_focus_pane_cp6_ParamLimits

0x98b6,	// (0x00012156) input_popup_find_pane_g1_ParamLimits

0x98b6,	// (0x00012156) input_popup_find_pane_g1

0x68e2,	// (0x0000f182) aid_navi_side_left_pane

0x68f2,	// (0x0000f192) aid_navi_side_right_pane

0xb5db,	// (0x00013e7b) bg_popup_window_pane_cp30_ParamLimits

0xb5db,	// (0x00013e7b) bg_popup_window_pane_cp30

0xb655,	// (0x00013ef5) popup_midp_note_alarm_window_g1_ParamLimits

0xb655,	// (0x00013ef5) popup_midp_note_alarm_window_g1

0xb685,	// (0x00013f25) popup_midp_note_alarm_window_t1_ParamLimits

0xb685,	// (0x00013f25) popup_midp_note_alarm_window_t1

0xb726,	// (0x00013fc6) popup_midp_note_alarm_window_t2_ParamLimits

0xb726,	// (0x00013fc6) popup_midp_note_alarm_window_t2

0xb7ec,	// (0x0001408c) popup_midp_note_alarm_window_t3_ParamLimits

0xb7ec,	// (0x0001408c) popup_midp_note_alarm_window_t3

0xb814,	// (0x000140b4) popup_midp_note_alarm_window_t4_ParamLimits

0xb814,	// (0x000140b4) popup_midp_note_alarm_window_t4

0xb834,	// (0x000140d4) popup_midp_note_alarm_window_t5_ParamLimits

0xb834,	// (0x000140d4) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00018115) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00018115) popup_midp_note_alarm_window_t

0xb8e0,	// (0x00014180) wait_bar_pane_cp1_ParamLimits

0xb8e0,	// (0x00014180) wait_bar_pane_cp1

0x8853,	// (0x000110f3) wait_anim_pane_copy1

0x8853,	// (0x000110f3) wait_border_pane_copy1

0xb2ed,	// (0x00013b8d) wait_border_pane_g1_copy1

0x9683,	// (0x00011f23) form_field_popup_pane_g1

0x968b,	// (0x00011f2b) form_field_popup_pane_t1_ParamLimits

0x9632,	// (0x00011ed2) input_focus_pane_cp7_ParamLimits

0x9606,	// (0x00011ea6) list_form_pane_ParamLimits

0x96a3,	// (0x00011f43) form_field_popup_wide_pane_g1

0x96ab,	// (0x00011f4b) form_field_popup_wide_pane_t1_ParamLimits

0x9632,	// (0x00011ed2) input_focus_pane_cp8_ParamLimits

0x96c0,	// (0x00011f60) list_form_wide_pane_ParamLimits

0xc3ab,	// (0x00014c4b) aid_size_cell_graphic_pane

0x979d,	// (0x0001203d) data_form_pane_t1_ParamLimits

0xc1a5,	// (0x00014a45) data_form_wide_pane_t1_ParamLimits

0xa844,	// (0x000130e4) bg_status_flat_pane

0x8893,	// (0x00011133) title_pane_t1_ParamLimits

0x88fb,	// (0x0001119b) title_pane_t2_ParamLimits

0x8921,	// (0x000111c1) title_pane_t3_ParamLimits

0xf532,	// (0x00017dd2) title_pane_t_ParamLimits

0x9d95,	// (0x00012635) level_1_signal_ParamLimits

0x9da2,	// (0x00012642) level_2_signal_ParamLimits

0x9daf,	// (0x0001264f) level_3_signal_ParamLimits

0x9dbc,	// (0x0001265c) level_4_signal_ParamLimits

0x9dc9,	// (0x00012669) level_5_signal_ParamLimits

0x9dd6,	// (0x00012676) level_6_signal_ParamLimits

0x9de3,	// (0x00012683) level_7_signal_ParamLimits

0x9d95,	// (0x00012635) level_1_battery_ParamLimits

0x9da2,	// (0x00012642) level_2_battery_ParamLimits

0x9daf,	// (0x0001264f) level_3_battery_ParamLimits

0x9dbc,	// (0x0001265c) level_4_battery_ParamLimits

0x9dc9,	// (0x00012669) level_5_battery_ParamLimits

0x9dd6,	// (0x00012676) level_6_battery_ParamLimits

0x9de3,	// (0x00012683) level_7_battery_ParamLimits

0xb4f2,	// (0x00013d92) bg_status_flat_pane_g1

0xb4fa,	// (0x00013d9a) bg_status_flat_pane_g2

0xb502,	// (0x00013da2) bg_status_flat_pane_g3

0xb50a,	// (0x00013daa) bg_status_flat_pane_g4

0xb512,	// (0x00013db2) bg_status_flat_pane_g5

0xb51a,	// (0x00013dba) bg_status_flat_pane_g6

0xb522,	// (0x00013dc2) bg_status_flat_pane_g7

0x8949,	// (0x000111e9) tabs_3_active_pane_t1_ParamLimits

0x8949,	// (0x000111e9) tabs_3_passive_pane_t1_ParamLimits

0x8963,	// (0x00011203) tabs_4_active_pane_t1_ParamLimits

0x8963,	// (0x00011203) tabs_4_1_passive_pane_t1_ParamLimits

0x9948,	// (0x000121e8) tabs_2_active_pane_t1_ParamLimits

0x9948,	// (0x000121e8) tabs_2_passive_pane_t1_ParamLimits

0x995a,	// (0x000121fa) bg_active_tab_pane_cp4_ParamLimits

0x9968,	// (0x00012208) tabs_2_long_active_pane_t1_ParamLimits

0x997b,	// (0x0001221b) bg_passive_tab_pane_cp4_ParamLimits

0x7329,	// (0x0000fbc9) list_single_midp_graphic_pane_t1_ParamLimits

0x995a,	// (0x000121fa) bg_active_tab_pane_cp5_ParamLimits

0x9987,	// (0x00012227) tabs_3_long_active_pane_t1_ParamLimits

0x997b,	// (0x0001221b) bg_passive_tab_pane_cp5_ParamLimits

0x7329,	// (0x0000fbc9) list_single_midp_graphic_pane_t1

0xa844,	// (0x000130e4) bg_status_flat_pane_ParamLimits

0xa903,	// (0x000131a3) indicator_pane_cp2_ParamLimits

0xa903,	// (0x000131a3) indicator_pane_cp2

0xaa27,	// (0x000132c7) navi_pane_srt_ParamLimits

0xaa27,	// (0x000132c7) navi_pane_srt

0xaa4b,	// (0x000132eb) popup_clock_digital_analogue_window_cp1

0x8a28,	// (0x000112c8) indicator_pane_t1

0xa42f,	// (0x00012ccf) copy_highlight_pane

0xa42f,	// (0x00012ccf) cursor_graphics_pane

0xa42f,	// (0x00012ccf) graphic_within_text_pane

0xa42f,	// (0x00012ccf) link_highlight_pane

0xbcba,	// (0x0001455a) popup_preview_text_window_t5_ParamLimits

0xbcba,	// (0x0001455a) popup_preview_text_window_t5

0xa551,	// (0x00012df1) cursor_digital_pane

0xa551,	// (0x00012df1) cursor_primary_pane

0xa562,	// (0x00012e02) cursor_primary_small_pane

0xa56a,	// (0x00012e0a) cursor_secondary_pane

0xa572,	// (0x00012e12) cursor_title_pane

0xa551,	// (0x00012df1) link_highlight_digital_pane

0xa559,	// (0x00012df9) link_highlight_primary_pane

0xa562,	// (0x00012e02) link_highlight_primary_small_pane

0xa56a,	// (0x00012e0a) link_highlight_secondary_pane

0xa572,	// (0x00012e12) link_highlight_title_pane

0xa551,	// (0x00012df1) copy_highlight_digital_pane

0xa551,	// (0x00012df1) copy_highlight_primary_pane

0xa562,	// (0x00012e02) copy_highlight_primary_small_pane

0xa56a,	// (0x00012e0a) copy_highlight_secondary_pane

0xa572,	// (0x00012e12) copy_highlight_title_pane

0xa56a,	// (0x00012e0a) graphic_text_digital_pane

0xb58a,	// (0x00013e2a) graphic_text_primary_pane

0xb593,	// (0x00013e33) graphic_text_primary_small_pane

0xa562,	// (0x00012e02) graphic_text_secondary_pane

0xa551,	// (0x00012df1) graphic_text_title_pane

0xa57a,	// (0x00012e1a) cursor_primary_pane_g1

0xb57c,	// (0x00013e1c) cursor_text_primary_t1

0xb566,	// (0x00013e06) cursor_primary_small_pane_g1

0xb56e,	// (0x00013e0e) cursor_text_primary_small_t1

0xb550,	// (0x00013df0) cursor_primary_small_pane_g1_copy1

0xb558,	// (0x00013df8) cursor_text_primary_small_t1_copy1

0xb53a,	// (0x00013dda) cursor_text_title_t1

0xb548,	// (0x00013de8) cursor_title_pane_g1

0xa57a,	// (0x00012e1a) cursor_digital_pane_g1

0xa582,	// (0x00012e22) cursor_text_digital_t1

0xa590,	// (0x00012e30) link_highlight_primary_pane_g1

0xb4e3,	// (0x00013d83) link_highlight_primary_pane_t1

0xa590,	// (0x00012e30) link_highlight_primary_small_pane_g1

0xa598,	// (0x00012e38) link_highlight_primary_small_pane_t1

0xa5a7,	// (0x00012e47) link_highlight_secondary_pane_g1

0xa5af,	// (0x00012e4f) link_highlight_secondary_pane_t1

0xb448,	// (0x00013ce8) link_highlight_title_pane_g1

0xb45f,	// (0x00013cff) link_highlight_title_pane_t1

0xb448,	// (0x00013ce8) link_highlight_digital_pane_g1

0xb450,	// (0x00013cf0) link_highlight_digital_pane_t1

0xb308,	// (0x00013ba8) copy_highlight_primary_pane_g1

0xb32e,	// (0x00013bce) copy_highlight_primary_pane_t1

0xb308,	// (0x00013ba8) copy_highlight_primary_small_pane_g1

0xb31f,	// (0x00013bbf) copy_highlight_primary_small_pane_t1

0xa5be,	// (0x00012e5e) copy_highlight_secondary_pane_g1

0xa5c6,	// (0x00012e66) copy_highlight_secondary_pane_t1

0xb308,	// (0x00013ba8) copy_highlight_title_pane_g1

0xb310,	// (0x00013bb0) copy_highlight_title_pane_t1

0xb308,	// (0x00013ba8) copy_highlight_digital_pane_g1

0xc517,	// (0x00014db7) copy_highlight_digital_pane_t1

0xc46b,	// (0x00014d0b) graphic_text_primary_pane_g1

0xc4fb,	// (0x00014d9b) graphic_text_primary_pane_t1

0xc509,	// (0x00014da9) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x0001823f) graphic_text_primary_pane_t

0xc4d7,	// (0x00014d77) graphic_text_primary_small_pane_g1

0xc4df,	// (0x00014d7f) graphic_text_primary_small_pane_t1

0xc4ed,	// (0x00014d8d) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x0001823a) graphic_text_primary_small_pane_t

0xc4b3,	// (0x00014d53) graphic_text_secondary_pane_g1

0xc4bb,	// (0x00014d5b) graphic_text_secondary_pane_t1

0xc4c9,	// (0x00014d69) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x00018235) graphic_text_secondary_pane_t

0xc48f,	// (0x00014d2f) graphic_text_title_pane_g1

0xc497,	// (0x00014d37) graphic_text_title_pane_t1

0xc4a5,	// (0x00014d45) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x00018230) graphic_text_title_pane_t

0xc46b,	// (0x00014d0b) graphic_text_digital_pane_g1

0xc473,	// (0x00014d13) graphic_text_digital_pane_t1

0xc481,	// (0x00014d21) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x0001822b) graphic_text_digital_pane_t

0x8933,	// (0x000111d3) navi_icon_pane_srt_ParamLimits

0x8933,	// (0x000111d3) navi_icon_pane_srt

0x8853,	// (0x000110f3) navi_midp_pane_srt

0x8853,	// (0x000110f3) navi_navi_pane_srt

0x8933,	// (0x000111d3) navi_text_pane_srt_ParamLimits

0x8933,	// (0x000111d3) navi_text_pane_srt

0xbb46,	// (0x000143e6) navi_navi_icon_text_pane_srt

0xbb4e,	// (0x000143ee) navi_navi_pane_srt_g1_ParamLimits

0xbb4e,	// (0x000143ee) navi_navi_pane_srt_g1

0xbb60,	// (0x00014400) navi_navi_pane_srt_g2_ParamLimits

0xbb60,	// (0x00014400) navi_navi_pane_srt_g2

0x0001,

0xf8c0,	// (0x00018160) navi_navi_pane_srt_g_ParamLimits

0xf8c0,	// (0x00018160) navi_navi_pane_srt_g

0xbb72,	// (0x00014412) navi_navi_tabs_pane_srt

0xbb46,	// (0x000143e6) navi_navi_text_pane_srt

0xbb46,	// (0x000143e6) navi_navi_volume_pane_srt

0xc45c,	// (0x00014cfc) navi_navi_text_pane_srt_t1

0x768d,	// (0x0000ff2d) navi_navi_volume_pane_srt_g1

0x7695,	// (0x0000ff35) volume_small_pane_srt_ParamLimits

0x7695,	// (0x0000ff35) volume_small_pane_srt

0x6b89,	// (0x0000f429) volume_small_pane_srt_g1_ParamLimits

0x6b89,	// (0x0000f429) volume_small_pane_srt_g1

0x6b99,	// (0x0000f439) volume_small_pane_srt_g2_ParamLimits

0x6b99,	// (0x0000f439) volume_small_pane_srt_g2

0x6baa,	// (0x0000f44a) volume_small_pane_srt_g3_ParamLimits

0x6baa,	// (0x0000f44a) volume_small_pane_srt_g3

0x6bbb,	// (0x0000f45b) volume_small_pane_srt_g4_ParamLimits

0x6bbb,	// (0x0000f45b) volume_small_pane_srt_g4

0x6bcc,	// (0x0000f46c) volume_small_pane_srt_g5_ParamLimits

0x6bcc,	// (0x0000f46c) volume_small_pane_srt_g5

0x6bdd,	// (0x0000f47d) volume_small_pane_srt_g6_ParamLimits

0x6bdd,	// (0x0000f47d) volume_small_pane_srt_g6

0x6bee,	// (0x0000f48e) volume_small_pane_srt_g7_ParamLimits

0x6bee,	// (0x0000f48e) volume_small_pane_srt_g7

0x6bff,	// (0x0000f49f) volume_small_pane_srt_g8_ParamLimits

0x6bff,	// (0x0000f49f) volume_small_pane_srt_g8

0x6c10,	// (0x0000f4b0) volume_small_pane_srt_g9_ParamLimits

0x6c10,	// (0x0000f4b0) volume_small_pane_srt_g9

0x6c21,	// (0x0000f4c1) volume_small_pane_srt_g10_ParamLimits

0x6c21,	// (0x0000f4c1) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x00017fd3) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x00017fd3) volume_small_pane_srt_g

0x8d52,	// (0x000115f2) query_popup_data_pane_cp2

0xc442,	// (0x00014ce2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xc442,	// (0x00014ce2) navi_navi_icon_text_pane_srt_t1

0xb58a,	// (0x00013e2a) navi_tabs_2_long_pane_srt

0xb58a,	// (0x00013e2a) navi_tabs_2_pane_srt

0xb58a,	// (0x00013e2a) navi_tabs_3_long_pane_srt

0xb58a,	// (0x00013e2a) navi_tabs_3_pane_srt

0xb58a,	// (0x00013e2a) navi_tabs_4_pane_srt

0x766d,	// (0x0000ff0d) tabs_2_active_pane_srt_ParamLimits

0x766d,	// (0x0000ff0d) tabs_2_active_pane_srt

0x767d,	// (0x0000ff1d) tabs_2_passive_pane_srt_ParamLimits

0x767d,	// (0x0000ff1d) tabs_2_passive_pane_srt

0xa77e,	// (0x0001301e) bg_passive_tab_pane_cp1_srt_ParamLimits

0xa77e,	// (0x0001301e) bg_passive_tab_pane_cp1_srt

0xc420,	// (0x00014cc0) bg_passive_tab_pane_g1_cp1_srt

0xa0dc,	// (0x0001297c) bg_passive_tab_pane_g2_cp1_srt

0xc429,	// (0x00014cc9) bg_passive_tab_pane_g3_cp1_srt

0x8933,	// (0x000111d3) bg_active_tab_pane_cp1_srt_ParamLimits

0x8933,	// (0x000111d3) bg_active_tab_pane_cp1_srt

0xc432,	// (0x00014cd2) tabs_2_active_pane_srt_g1

0x9948,	// (0x000121e8) tabs_2_active_pane_srt_t1_ParamLimits

0x9948,	// (0x000121e8) tabs_2_active_pane_srt_t1

0xc420,	// (0x00014cc0) bg_active_tab_pane_g1_cp1_srt

0xa0dc,	// (0x0001297c) bg_active_tab_pane_g2_cp1_srt

0xc429,	// (0x00014cc9) bg_active_tab_pane_g3_cp1_srt

0x763a,	// (0x0000feda) tabs_3_active_pane_srt_ParamLimits

0x763a,	// (0x0000feda) tabs_3_active_pane_srt

0x764b,	// (0x0000feeb) tabs_3_passive_pane_cp_srt_ParamLimits

0x764b,	// (0x0000feeb) tabs_3_passive_pane_cp_srt

0x765c,	// (0x0000fefc) tabs_3_passive_pane_srt_ParamLimits

0x765c,	// (0x0000fefc) tabs_3_passive_pane_srt

0xa77e,	// (0x0001301e) bg_passive_tab_pane_cp2_srt_ParamLimits

0xa77e,	// (0x0001301e) bg_passive_tab_pane_cp2_srt

0xa5d5,	// (0x00012e75) bg_passive_tab_pane_g1_cp2_srt

0xa0dc,	// (0x0001297c) bg_passive_tab_pane_g2_cp2_srt

0xa5de,	// (0x00012e7e) bg_passive_tab_pane_g3_cp2_srt

0x8933,	// (0x000111d3) bg_active_tab_pane_cp2_srt_ParamLimits

0x8933,	// (0x000111d3) bg_active_tab_pane_cp2_srt

0xc418,	// (0x00014cb8) tabs_3_active_pane_srt_g1

0x8949,	// (0x000111e9) tabs_3_active_pane_srt_t1_ParamLimits

0x8949,	// (0x000111e9) tabs_3_active_pane_srt_t1

0xa5d5,	// (0x00012e75) bg_active_tab_pane_g1_cp2_srt

0xa0dc,	// (0x0001297c) bg_active_tab_pane_g2_cp2_srt

0xa5de,	// (0x00012e7e) bg_active_tab_pane_g3_cp2_srt

0x75f2,	// (0x0000fe92) tabs_4_active_pane_srt_ParamLimits

0x75f2,	// (0x0000fe92) tabs_4_active_pane_srt

0x7604,	// (0x0000fea4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7604,	// (0x0000fea4) tabs_4_passive_pane_cp2_srt

0x6d8a,	// (0x0000f62a) aid_size_cell_toolbar

0x997b,	// (0x0001221b) main_idle_act_pane_ParamLimits

0x6f01,	// (0x0000f7a1) popup_large_graphic_colour_window_ParamLimits

0x71b8,	// (0x0000fa58) popup_toolbar_window_ParamLimits

0x71b8,	// (0x0000fa58) popup_toolbar_window

0xc206,	// (0x00014aa6) list_single_graphic_2heading_pane_ParamLimits

0xc206,	// (0x00014aa6) list_single_graphic_2heading_pane

0x9b52,	// (0x000123f2) aid_size_cell_apps_grid_lsc_pane

0x9b64,	// (0x00012404) aid_size_cell_apps_grid_prt_pane

0xa77e,	// (0x0001301e) bg_wml_button_pane_cp1_ParamLimits

0xa77e,	// (0x0001301e) bg_wml_button_pane_cp1

0xaf94,	// (0x00013834) form_midp_field_text_pane_t1_ParamLimits

0xad93,	// (0x00013633) input_focus_pane_cp050_ParamLimits

0xafb5,	// (0x00013855) list_midp_form_text_pane_ParamLimits

0xaf71,	// (0x00013811) input_focus_pane_cp051_ParamLimits

0xaf85,	// (0x00013825) list_midp_choice_pane_ParamLimits

0xae43,	// (0x000136e3) list_single_2graphic_pane_cp3_ParamLimits

0xae43,	// (0x000136e3) list_single_2graphic_pane_cp3

0xae56,	// (0x000136f6) list_single_midp_graphic_pane_ParamLimits

0xae56,	// (0x000136f6) list_single_midp_graphic_pane

0x7247,	// (0x0000fae7) list_single_graphic_2heading_pane_g1_ParamLimits

0x7247,	// (0x0000fae7) list_single_graphic_2heading_pane_g1

0x7253,	// (0x0000faf3) list_single_graphic_2heading_pane_g4_ParamLimits

0x7253,	// (0x0000faf3) list_single_graphic_2heading_pane_g4

0x725f,	// (0x0000faff) list_single_graphic_2heading_pane_g5_ParamLimits

0x725f,	// (0x0000faff) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x00018026) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x00018026) list_single_graphic_2heading_pane_g

0x726b,	// (0x0000fb0b) list_single_graphic_2heading_pane_t1_ParamLimits

0x726b,	// (0x0000fb0b) list_single_graphic_2heading_pane_t1

0x727f,	// (0x0000fb1f) list_single_graphic_2heading_pane_t2_ParamLimits

0x727f,	// (0x0000fb1f) list_single_graphic_2heading_pane_t2

0x7299,	// (0x0000fb39) list_single_graphic_2heading_pane_t3_ParamLimits

0x7299,	// (0x0000fb39) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0001802d) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0001802d) list_single_graphic_2heading_pane_t

0xab97,	// (0x00013437) bg_popup_sub_pane_cp2

0xabbd,	// (0x0001345d) grid_toobar_pane

0x72b1,	// (0x0000fb51) cell_toolbar_pane_ParamLimits

0x72b1,	// (0x0000fb51) cell_toolbar_pane

0xac21,	// (0x000134c1) cell_toolbar_pane_g1_ParamLimits

0xac21,	// (0x000134c1) cell_toolbar_pane_g1

0xac33,	// (0x000134d3) cell_toolbar_pane_g2_ParamLimits

0xac33,	// (0x000134d3) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x0001803b) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x0001803b) cell_toolbar_pane_g

0xac55,	// (0x000134f5) grid_highlight_pane_cp2_ParamLimits

0xac55,	// (0x000134f5) grid_highlight_pane_cp2

0xac6f,	// (0x0001350f) toolbar_button_pane

0xac7b,	// (0x0001351b) toolbar_button_pane_g1

0xac83,	// (0x00013523) toolbar_button_pane_g2

0xac8b,	// (0x0001352b) toolbar_button_pane_g3

0xac93,	// (0x00013533) toolbar_button_pane_g4

0xac9b,	// (0x0001353b) toolbar_button_pane_g5

0xaca3,	// (0x00013543) toolbar_button_pane_g6

0xacab,	// (0x0001354b) toolbar_button_pane_g7

0xacb3,	// (0x00013553) toolbar_button_pane_g8

0xacbb,	// (0x0001355b) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x00018040) toolbar_button_pane_g

0x72e0,	// (0x0000fb80) list_single_2graphic_pane_g1_cp3_ParamLimits

0x72e0,	// (0x0000fb80) list_single_2graphic_pane_g1_cp3

0x72ec,	// (0x0000fb8c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x72ec,	// (0x0000fb8c) list_single_2graphic_pane_g2_cp3

0x72fb,	// (0x0000fb9b) list_single_2graphic_pane_g3_cp3

0x7303,	// (0x0000fba3) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7303,	// (0x0000fba3) list_single_2graphic_pane_g4_cp3

0x730f,	// (0x0000fbaf) list_single_2graphic_pane_t1_cp3_ParamLimits

0x730f,	// (0x0000fbaf) list_single_2graphic_pane_t1_cp3

0x7253,	// (0x0000faf3) list_single_midp_graphic_pane_g2_ParamLimits

0x7253,	// (0x0000faf3) list_single_midp_graphic_pane_g2

0x6d92,	// (0x0000f632) aid_zoom_text_primary

0x6d9a,	// (0x0000f63a) aid_zoom_text_secondary

0xa68d,	// (0x00012f2d) status_small_pane_g7_ParamLimits

0xa68d,	// (0x00012f2d) status_small_pane_g7

0xa6b0,	// (0x00012f50) status_small_pane_t1_ParamLimits

0x886a,	// (0x0001110a) title_pane_g2

0x0003,

0xf529,	// (0x00017dc9) title_pane_g

0x8df7,	// (0x00011697) aid_size_cell_colour_1_pane_ParamLimits

0x8df7,	// (0x00011697) aid_size_cell_colour_1_pane

0x8e0b,	// (0x000116ab) aid_size_cell_colour_2_pane_ParamLimits

0x8e0b,	// (0x000116ab) aid_size_cell_colour_2_pane

0x8e1f,	// (0x000116bf) aid_size_cell_colour_3_pane_ParamLimits

0x8e1f,	// (0x000116bf) aid_size_cell_colour_3_pane

0x8e33,	// (0x000116d3) aid_size_cell_colour_4_pane_ParamLimits

0x8e33,	// (0x000116d3) aid_size_cell_colour_4_pane

0x6844,	// (0x0000f0e4) title_pane_stacon_g1_ParamLimits

0x6844,	// (0x0000f0e4) title_pane_stacon_g1

0xb385,	// (0x00013c25) popup_note_wait_window_g3_ParamLimits

0xb385,	// (0x00013c25) popup_note_wait_window_g3

0xb3fb,	// (0x00013c9b) popup_note_wait_window_t5_ParamLimits

0xb3fb,	// (0x00013c9b) popup_note_wait_window_t5

0x8853,	// (0x000110f3) main_feb_china_hwr_fs_writing_pane

0x6e16,	// (0x0000f6b6) popup_feb_china_hwr_fs_window_ParamLimits

0x6e16,	// (0x0000f6b6) popup_feb_china_hwr_fs_window

0x733f,	// (0x0000fbdf) aid_size_cell_hwr_fs_ParamLimits

0x733f,	// (0x0000fbdf) aid_size_cell_hwr_fs

0xad93,	// (0x00013633) bg_popup_sub_pane_cp3_ParamLimits

0xad93,	// (0x00013633) bg_popup_sub_pane_cp3

0x7354,	// (0x0000fbf4) grid_hwr_fs_pane_ParamLimits

0x7354,	// (0x0000fbf4) grid_hwr_fs_pane

0x7368,	// (0x0000fc08) linegrid_hwr_fs_pane_ParamLimits

0x7368,	// (0x0000fc08) linegrid_hwr_fs_pane

0x7378,	// (0x0000fc18) cell_hwr_fs_pane_ParamLimits

0x7378,	// (0x0000fc18) cell_hwr_fs_pane

0xad9f,	// (0x0001363f) linegrid_hwr_fs_pane_g1_ParamLimits

0xad9f,	// (0x0001363f) linegrid_hwr_fs_pane_g1

0xadab,	// (0x0001364b) linegrid_hwr_fs_pane_g2_ParamLimits

0xadab,	// (0x0001364b) linegrid_hwr_fs_pane_g2

0xadbd,	// (0x0001365d) linegrid_hwr_fs_pane_g3_ParamLimits

0xadbd,	// (0x0001365d) linegrid_hwr_fs_pane_g3

0x7396,	// (0x0000fc36) linegrid_hwr_fs_pane_g4_ParamLimits

0x7396,	// (0x0000fc36) linegrid_hwr_fs_pane_g4

0x73b0,	// (0x0000fc50) linegrid_hwr_fs_pane_g5_ParamLimits

0x73b0,	// (0x0000fc50) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x0001806b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x0001806b) linegrid_hwr_fs_pane_g

0xadc9,	// (0x00013669) cell_hwr_fs_pane_g1_ParamLimits

0xadc9,	// (0x00013669) cell_hwr_fs_pane_g1

0xaad5,	// (0x00013375) cell_hwr_fs_pane_g2_ParamLimits

0xaad5,	// (0x00013375) cell_hwr_fs_pane_g2

0xaddf,	// (0x0001367f) cell_hwr_fs_pane_g3_ParamLimits

0xaddf,	// (0x0001367f) cell_hwr_fs_pane_g3

0xadec,	// (0x0001368c) cell_hwr_fs_pane_g4_ParamLimits

0xadec,	// (0x0001368c) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x00018076) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x00018076) cell_hwr_fs_pane_g

0x73c6,	// (0x0000fc66) cell_hwr_fs_pane_t1

0x8853,	// (0x000110f3) grid_highlight_pane_cp6

0x8853,	// (0x000110f3) main_idle_act2_pane

0x98f0,	// (0x00012190) aid_inside_area_popup_secondary

0xb9e6,	// (0x00014286) aid_inside_area_window_primary_ParamLimits

0xb9e6,	// (0x00014286) aid_inside_area_window_primary

0xc526,	// (0x00014dc6) ai2_news_ticker_pane

0xc52e,	// (0x00014dce) aid_size_cell_ai1_link_ParamLimits

0xc52e,	// (0x00014dce) aid_size_cell_ai1_link

0xc548,	// (0x00014de8) popup_ai2_data_window_ParamLimits

0xc548,	// (0x00014de8) popup_ai2_data_window

0xc55c,	// (0x00014dfc) popup_ai2_link_window_ParamLimits

0xc55c,	// (0x00014dfc) popup_ai2_link_window

0xad93,	// (0x00013633) bg_popup_sub_pane_cp4_ParamLimits

0xad93,	// (0x00013633) bg_popup_sub_pane_cp4

0xc570,	// (0x00014e10) grid_ai2_link_pane_ParamLimits

0xc570,	// (0x00014e10) grid_ai2_link_pane

0xc587,	// (0x00014e27) popup_ai2_link_window_g1_ParamLimits

0xc587,	// (0x00014e27) popup_ai2_link_window_g1

0xc593,	// (0x00014e33) popup_ai2_link_window_g2_ParamLimits

0xc593,	// (0x00014e33) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x00018244) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x00018244) popup_ai2_link_window_g

0xc5a2,	// (0x00014e42) ai2_mp_button_pane

0xc5aa,	// (0x00014e4a) ai2_mp_volume_pane

0xaf71,	// (0x00013811) bg_popup_sub_pane_cp5_ParamLimits

0xaf71,	// (0x00013811) bg_popup_sub_pane_cp5

0xc5b2,	// (0x00014e52) heading_ai2_gene_pane_ParamLimits

0xc5b2,	// (0x00014e52) heading_ai2_gene_pane

0xc5be,	// (0x00014e5e) list_ai2_gene_pane_ParamLimits

0xc5be,	// (0x00014e5e) list_ai2_gene_pane

0xc606,	// (0x00014ea6) cell_ai2_link_pane_ParamLimits

0xc606,	// (0x00014ea6) cell_ai2_link_pane

0xc61c,	// (0x00014ebc) cell_ai2_link_pane_g1

0x8853,	// (0x000110f3) grid_highlight_pane_cp7

0x76aa,	// (0x0000ff4a) ai2_mp_volume_pane_g1

0xc6ec,	// (0x00014f8c) ai2_mp_volume_pane_g2

0xc661,	// (0x00014f01) list_ai2_gene_pane_t1

0xc6f4,	// (0x00014f94) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x0001825d) ai2_mp_volume_pane_g

0x76b2,	// (0x0000ff52) volume_small_pane_cp3

0xc6fc,	// (0x00014f9c) aid_size_cell_ai2_button

0xc704,	// (0x00014fa4) grid_ai2_button_pane

0xc70d,	// (0x00014fad) cell_ai2_button_pane_ParamLimits

0xc70d,	// (0x00014fad) cell_ai2_button_pane

0x876c,	// (0x0001100c) cell_ai2_button_pane_g1

0x8853,	// (0x000110f3) grid_highlight_pane_cp8

0xc6ac,	// (0x00014f4c) ai2_gene_pane_t1_ParamLimits

0xc6ac,	// (0x00014f4c) ai2_gene_pane_t1

0x6d80,	// (0x0000f620) aid_height_parent_landscape

0xc030,	// (0x000148d0) aid_height_set_list

0xc03c,	// (0x000148dc) aid_size_parent

0xc3ab,	// (0x00014c4b) aid_size_cell_graphic_pane_ParamLimits

0xc5ce,	// (0x00014e6e) popup_ai2_data_window_g1_ParamLimits

0xc5ce,	// (0x00014e6e) popup_ai2_data_window_g1

0xc5da,	// (0x00014e7a) ai2_news_ticker_pane_g1

0xc5e2,	// (0x00014e82) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x00018249) ai2_news_ticker_pane_g

0xc5ea,	// (0x00014e8a) ai2_news_ticker_pane_t1

0xc5f8,	// (0x00014e98) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x0001824e) ai2_news_ticker_pane_t

0xc625,	// (0x00014ec5) heading_ai2_gene_pane_g1

0xc62d,	// (0x00014ecd) heading_ai2_gene_pane_t1_ParamLimits

0xc62d,	// (0x00014ecd) heading_ai2_gene_pane_t1

0xc642,	// (0x00014ee2) list_highlight_pane_cp6

0xc64a,	// (0x00014eea) ai2_gene_pane_ParamLimits

0xc64a,	// (0x00014eea) ai2_gene_pane

0xc66f,	// (0x00014f0f) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x00018253) list_ai2_gene_pane_t

0xc67d,	// (0x00014f1d) list_highlight_pane_cp8_ParamLimits

0xc67d,	// (0x00014f1d) list_highlight_pane_cp8

0xc68e,	// (0x00014f2e) ai2_gene_pane_g1_ParamLimits

0xc68e,	// (0x00014f2e) ai2_gene_pane_g1

0xc6a0,	// (0x00014f40) ai2_gene_pane_g2_ParamLimits

0xc6a0,	// (0x00014f40) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x00018258) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x00018258) ai2_gene_pane_g

0x90c7,	// (0x00011967) scroll_pane_cp12

0x6d37,	// (0x0000f5d7) control_pane_t3_ParamLimits

0x6d37,	// (0x0000f5d7) control_pane_t3

0xa6a1,	// (0x00012f41) status_small_pane_g8_ParamLimits

0xa6a1,	// (0x00012f41) status_small_pane_g8

0x6ed6,	// (0x0000f776) popup_find_window_ParamLimits

0x705b,	// (0x0000f8fb) popup_note_image_window_ParamLimits

0xabf3,	// (0x00013493) list_double2_graphic_pane_vc_g1_ParamLimits

0xabf3,	// (0x00013493) list_double2_graphic_pane_vc_g1

0xa29d,	// (0x00012b3d) list_double2_graphic_pane_vc_g2_ParamLimits

0xa29d,	// (0x00012b3d) list_double2_graphic_pane_vc_g2

0xabff,	// (0x0001349f) list_double2_graphic_pane_vc_g3_ParamLimits

0xabff,	// (0x0001349f) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x00018034) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x00018034) list_double2_graphic_pane_vc_g

0xac0b,	// (0x000134ab) list_double2_graphic_pane_vc_t1_ParamLimits

0xac0b,	// (0x000134ab) list_double2_graphic_pane_vc_t1

0xa29d,	// (0x00012b3d) list_single_heading_pane_vc_g1_ParamLimits

0xa29d,	// (0x00012b3d) list_single_heading_pane_vc_g1

0xabff,	// (0x0001349f) list_single_heading_pane_vc_g2_ParamLimits

0xabff,	// (0x0001349f) list_single_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00018055) list_single_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00018055) list_single_heading_pane_vc_g

0xacc3,	// (0x00013563) list_single_heading_pane_vc_t1_ParamLimits

0xacc3,	// (0x00013563) list_single_heading_pane_vc_t1

0xacd9,	// (0x00013579) list_single_heading_pane_vc_t2_ParamLimits

0xacd9,	// (0x00013579) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x0001805a) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x0001805a) list_single_heading_pane_vc_t

0xaceb,	// (0x0001358b) list_setting_number_pane_vc_g1_ParamLimits

0xaceb,	// (0x0001358b) list_setting_number_pane_vc_g1

0xacf7,	// (0x00013597) list_setting_number_pane_vc_g2_ParamLimits

0xacf7,	// (0x00013597) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0001805f) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001805f) list_setting_number_pane_vc_g

0xad03,	// (0x000135a3) list_setting_number_pane_vc_t1_ParamLimits

0xad03,	// (0x000135a3) list_setting_number_pane_vc_t1

0xad17,	// (0x000135b7) list_setting_number_pane_vc_t2_ParamLimits

0xad17,	// (0x000135b7) list_setting_number_pane_vc_t2

0xad33,	// (0x000135d3) list_setting_number_pane_vc_t3_ParamLimits

0xad33,	// (0x000135d3) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x00018064) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x00018064) list_setting_number_pane_vc_t

0xad5b,	// (0x000135fb) set_value_pane_vc_ParamLimits

0xad5b,	// (0x000135fb) set_value_pane_vc

0xc206,	// (0x00014aa6) list_double2_graphic_pane_vc_ParamLimits

0xc206,	// (0x00014aa6) list_double2_graphic_pane_vc

0xc21a,	// (0x00014aba) list_double2_large_graphic_pane_vc_ParamLimits

0xc21a,	// (0x00014aba) list_double2_large_graphic_pane_vc

0xc206,	// (0x00014aa6) list_double2_pane_vc_ParamLimits

0xc206,	// (0x00014aa6) list_double2_pane_vc

0xc206,	// (0x00014aa6) list_double_graphic_heading_pane_vc_ParamLimits

0xc206,	// (0x00014aa6) list_double_graphic_heading_pane_vc

0xc206,	// (0x00014aa6) list_double_graphic_pane_vc_ParamLimits

0xc206,	// (0x00014aa6) list_double_graphic_pane_vc

0xc206,	// (0x00014aa6) list_double_heading_pane_vc_ParamLimits

0xc206,	// (0x00014aa6) list_double_heading_pane_vc

0xc22b,	// (0x00014acb) list_double_large_graphic_pane_vc_ParamLimits

0xc22b,	// (0x00014acb) list_double_large_graphic_pane_vc

0xc206,	// (0x00014aa6) list_double_number_pane_vc_ParamLimits

0xc206,	// (0x00014aa6) list_double_number_pane_vc

0xc206,	// (0x00014aa6) list_double_pane_vc_ParamLimits

0xc206,	// (0x00014aa6) list_double_pane_vc

0xc206,	// (0x00014aa6) list_double_time_pane_vc_ParamLimits

0xc206,	// (0x00014aa6) list_double_time_pane_vc

0xc206,	// (0x00014aa6) list_setting_number_pane_vc_ParamLimits

0xc206,	// (0x00014aa6) list_setting_number_pane_vc

0xc206,	// (0x00014aa6) list_setting_pane_vc_ParamLimits

0xc206,	// (0x00014aa6) list_setting_pane_vc

0xc206,	// (0x00014aa6) list_single_graphic_heading_pane_vc_ParamLimits

0xc206,	// (0x00014aa6) list_single_graphic_heading_pane_vc

0xc206,	// (0x00014aa6) list_single_heading_pane_vc_ParamLimits

0xc206,	// (0x00014aa6) list_single_heading_pane_vc

0xc247,	// (0x00014ae7) list_single_number_heading_pane_vc_ParamLimits

0xc247,	// (0x00014ae7) list_single_number_heading_pane_vc

0xabf3,	// (0x00013493) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xabf3,	// (0x00013493) list_double_graphic_heading_pane_vc_g1

0xa29d,	// (0x00012b3d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xa29d,	// (0x00012b3d) list_double_graphic_heading_pane_vc_g2

0xabff,	// (0x0001349f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xabff,	// (0x0001349f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf794,	// (0x00018034) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x00018034) list_double_graphic_heading_pane_vc_g

0xc741,	// (0x00014fe1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc741,	// (0x00014fe1) list_double_graphic_heading_pane_vc_t1

0xc757,	// (0x00014ff7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xc757,	// (0x00014ff7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c4,	// (0x00018264) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c4,	// (0x00018264) list_double_graphic_heading_pane_vc_t

0xaceb,	// (0x0001358b) list_setting_pane_vc_g1_ParamLimits

0xaceb,	// (0x0001358b) list_setting_pane_vc_g1

0xacf7,	// (0x00013597) list_setting_pane_vc_g2_ParamLimits

0xacf7,	// (0x00013597) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0001805f) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001805f) list_setting_pane_vc_g

0xc94c,	// (0x000151ec) list_setting_pane_vc_t1_ParamLimits

0xc94c,	// (0x000151ec) list_setting_pane_vc_t1

0xc960,	// (0x00015200) list_setting_pane_vc_t2_ParamLimits

0xc960,	// (0x00015200) list_setting_pane_vc_t2

0x0001,

0xfa07,	// (0x000182a7) list_setting_pane_vc_t_ParamLimits

0xfa07,	// (0x000182a7) list_setting_pane_vc_t

0xad5b,	// (0x000135fb) set_value_pane_cp_vc_ParamLimits

0xad5b,	// (0x000135fb) set_value_pane_cp_vc

0xa29d,	// (0x00012b3d) list_single_number_heading_pane_vc_g1_ParamLimits

0xa29d,	// (0x00012b3d) list_single_number_heading_pane_vc_g1

0xabff,	// (0x0001349f) list_single_number_heading_pane_vc_g2_ParamLimits

0xabff,	// (0x0001349f) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00018055) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00018055) list_single_number_heading_pane_vc_g

0xacc3,	// (0x00013563) list_single_number_heading_pane_vc_t1_ParamLimits

0xacc3,	// (0x00013563) list_single_number_heading_pane_vc_t1

0xc982,	// (0x00015222) list_single_number_heading_pane_vc_t2_ParamLimits

0xc982,	// (0x00015222) list_single_number_heading_pane_vc_t2

0xa2d9,	// (0x00012b79) list_single_number_heading_pane_vc_t3_ParamLimits

0xa2d9,	// (0x00012b79) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0c,	// (0x000182ac) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0c,	// (0x000182ac) list_single_number_heading_pane_vc_t

0xabf3,	// (0x00013493) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xabf3,	// (0x00013493) list_single_graphic_heading_pane_vc_g1

0xa29d,	// (0x00012b3d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xa29d,	// (0x00012b3d) list_single_graphic_heading_pane_vc_g4

0xabff,	// (0x0001349f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xabff,	// (0x0001349f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x00018034) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x00018034) list_single_graphic_heading_pane_vc_g

0xacc3,	// (0x00013563) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xacc3,	// (0x00013563) list_single_graphic_heading_pane_vc_t1

0xc994,	// (0x00015234) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc994,	// (0x00015234) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa13,	// (0x000182b3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa13,	// (0x000182b3) list_single_graphic_heading_pane_vc_t

0xa29d,	// (0x00012b3d) list_double2_pane_vc_g1_ParamLimits

0xa29d,	// (0x00012b3d) list_double2_pane_vc_g1

0xabff,	// (0x0001349f) list_double2_pane_vc_g2_ParamLimits

0xabff,	// (0x0001349f) list_double2_pane_vc_g2

0x0001,

0xf7b5,	// (0x00018055) list_double2_pane_vc_g_ParamLimits

0xf7b5,	// (0x00018055) list_double2_pane_vc_g

0xc9a6,	// (0x00015246) list_double2_pane_vc_t1_ParamLimits

0xc9a6,	// (0x00015246) list_double2_pane_vc_t1

0x917f,	// (0x00011a1f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x917f,	// (0x00011a1f) list_double2_large_graphic_pane_vc_g1

0x918b,	// (0x00011a2b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x918b,	// (0x00011a2b) list_double2_large_graphic_pane_vc_g2

0x9197,	// (0x00011a37) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9197,	// (0x00011a37) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00017e60) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00017e60) list_double2_large_graphic_pane_vc_g

0x91ab,	// (0x00011a4b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x91ab,	// (0x00011a4b) list_double2_large_graphic_pane_vc_t1

0xc9bc,	// (0x0001525c) list_double_time_pane_vc_g1_ParamLimits

0xc9bc,	// (0x0001525c) list_double_time_pane_vc_g1

0xc9c8,	// (0x00015268) list_double_time_pane_vc_g2_ParamLimits

0xc9c8,	// (0x00015268) list_double_time_pane_vc_g2

0x0001,

0xfa18,	// (0x000182b8) list_double_time_pane_vc_g_ParamLimits

0xfa18,	// (0x000182b8) list_double_time_pane_vc_g

0xc9d4,	// (0x00015274) list_double_time_pane_vc_t1_ParamLimits

0xc9d4,	// (0x00015274) list_double_time_pane_vc_t1

0xc9f2,	// (0x00015292) list_double_time_pane_vc_t2_ParamLimits

0xc9f2,	// (0x00015292) list_double_time_pane_vc_t2

0xca16,	// (0x000152b6) list_double_time_pane_vc_t3_ParamLimits

0xca16,	// (0x000152b6) list_double_time_pane_vc_t3

0xca28,	// (0x000152c8) list_double_time_pane_vc_t4_ParamLimits

0xca28,	// (0x000152c8) list_double_time_pane_vc_t4

0x0003,

0xfa1d,	// (0x000182bd) list_double_time_pane_vc_t_ParamLimits

0xfa1d,	// (0x000182bd) list_double_time_pane_vc_t

0xa29d,	// (0x00012b3d) list_double_pane_vc_g1_ParamLimits

0xa29d,	// (0x00012b3d) list_double_pane_vc_g1

0xabff,	// (0x0001349f) list_double_pane_vc_g2_ParamLimits

0xabff,	// (0x0001349f) list_double_pane_vc_g2

0x0001,

0xf7b5,	// (0x00018055) list_double_pane_vc_g_ParamLimits

0xf7b5,	// (0x00018055) list_double_pane_vc_g

0xca3a,	// (0x000152da) list_double_pane_vc_t1_ParamLimits

0xca3a,	// (0x000152da) list_double_pane_vc_t1

0xca4c,	// (0x000152ec) list_double_pane_vc_t2_ParamLimits

0xca4c,	// (0x000152ec) list_double_pane_vc_t2

0x0001,

0xfa26,	// (0x000182c6) list_double_pane_vc_t_ParamLimits

0xfa26,	// (0x000182c6) list_double_pane_vc_t

0xa29d,	// (0x00012b3d) list_double_number_pane_vc_g1_ParamLimits

0xa29d,	// (0x00012b3d) list_double_number_pane_vc_g1

0xabff,	// (0x0001349f) list_double_number_pane_vc_g2_ParamLimits

0xabff,	// (0x0001349f) list_double_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x00018055) list_double_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x00018055) list_double_number_pane_vc_g

0xca62,	// (0x00015302) list_double_number_pane_vc_t1_ParamLimits

0xca62,	// (0x00015302) list_double_number_pane_vc_t1

0xca76,	// (0x00015316) list_double_number_pane_vc_t2_ParamLimits

0xca76,	// (0x00015316) list_double_number_pane_vc_t2

0xca88,	// (0x00015328) list_double_number_pane_vc_t3_ParamLimits

0xca88,	// (0x00015328) list_double_number_pane_vc_t3

0x0002,

0xfa2b,	// (0x000182cb) list_double_number_pane_vc_t_ParamLimits

0xfa2b,	// (0x000182cb) list_double_number_pane_vc_t

0xca9e,	// (0x0001533e) list_double_large_graphic_pane_vc_g1_ParamLimits

0xca9e,	// (0x0001533e) list_double_large_graphic_pane_vc_g1

0xcac6,	// (0x00015366) list_double_large_graphic_pane_vc_g2_ParamLimits

0xcac6,	// (0x00015366) list_double_large_graphic_pane_vc_g2

0xcada,	// (0x0001537a) list_double_large_graphic_pane_vc_g3_ParamLimits

0xcada,	// (0x0001537a) list_double_large_graphic_pane_vc_g3

0xcae9,	// (0x00015389) list_double_large_graphic_pane_vc_g4_ParamLimits

0xcae9,	// (0x00015389) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa32,	// (0x000182d2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa32,	// (0x000182d2) list_double_large_graphic_pane_vc_g

0xcaf9,	// (0x00015399) list_double_large_graphic_pane_vc_t1_ParamLimits

0xcaf9,	// (0x00015399) list_double_large_graphic_pane_vc_t1

0xcb13,	// (0x000153b3) list_double_large_graphic_pane_vc_t2_ParamLimits

0xcb13,	// (0x000153b3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3b,	// (0x000182db) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3b,	// (0x000182db) list_double_large_graphic_pane_vc_t

0xa29d,	// (0x00012b3d) list_double_heading_pane_vc_g1_ParamLimits

0xa29d,	// (0x00012b3d) list_double_heading_pane_vc_g1

0xabff,	// (0x0001349f) list_double_heading_pane_vc_g2_ParamLimits

0xabff,	// (0x0001349f) list_double_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00018055) list_double_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00018055) list_double_heading_pane_vc_g

0xcb33,	// (0x000153d3) list_double_heading_pane_vc_t1_ParamLimits

0xcb33,	// (0x000153d3) list_double_heading_pane_vc_t1

0xacc3,	// (0x00013563) list_double_heading_pane_vc_t2_ParamLimits

0xacc3,	// (0x00013563) list_double_heading_pane_vc_t2

0x0001,

0xfa40,	// (0x000182e0) list_double_heading_pane_vc_t_ParamLimits

0xfa40,	// (0x000182e0) list_double_heading_pane_vc_t

0xcb45,	// (0x000153e5) list_double_graphic_pane_vc_g1_ParamLimits

0xcb45,	// (0x000153e5) list_double_graphic_pane_vc_g1

0xcb51,	// (0x000153f1) list_double_graphic_pane_vc_g2_ParamLimits

0xcb51,	// (0x000153f1) list_double_graphic_pane_vc_g2

0xa29d,	// (0x00012b3d) list_double_graphic_pane_vc_g3_ParamLimits

0xa29d,	// (0x00012b3d) list_double_graphic_pane_vc_g3

0x0003,

0xfa45,	// (0x000182e5) list_double_graphic_pane_vc_g_ParamLimits

0xfa45,	// (0x000182e5) list_double_graphic_pane_vc_g

0xcb6e,	// (0x0001540e) list_double_graphic_pane_vc_t1_ParamLimits

0xcb6e,	// (0x0001540e) list_double_graphic_pane_vc_t1

0xcb8c,	// (0x0001542c) list_double_graphic_pane_vc_t2_ParamLimits

0xcb8c,	// (0x0001542c) list_double_graphic_pane_vc_t2

0x0001,

0xfa4e,	// (0x000182ee) list_double_graphic_pane_vc_t_ParamLimits

0xfa4e,	// (0x000182ee) list_double_graphic_pane_vc_t

0x6521,	// (0x0000edc1) aid_size_cell_fastswap

0x6529,	// (0x0000edc9) aid_size_cell_touch_ParamLimits

0x6529,	// (0x0000edc9) aid_size_cell_touch

0x6678,	// (0x0000ef18) popup_fast_swap_wide_window_ParamLimits

0x6678,	// (0x0000ef18) popup_fast_swap_wide_window

0x673e,	// (0x0000efde) touch_pane_ParamLimits

0x673e,	// (0x0000efde) touch_pane

0x9562,	// (0x00011e02) button_value_adjust_pane_cp2

0x956a,	// (0x00011e0a) button_value_adjust_pane_cp4

0x958a,	// (0x00011e2a) form_field_data_pane_cp2

0x95a9,	// (0x00011e49) form_field_data_wide_pane_cp2

0x9c15,	// (0x000124b5) bg_scroll_pane_ParamLimits

0x6965,	// (0x0000f205) scroll_handle_pane_ParamLimits

0x6979,	// (0x0000f219) scroll_sc2_down_pane_ParamLimits

0x6979,	// (0x0000f219) scroll_sc2_down_pane

0x9c46,	// (0x000124e6) scroll_sc2_up_pane_ParamLimits

0x9c46,	// (0x000124e6) scroll_sc2_up_pane

0xd00b,	// (0x000158ab) grid_wheel_folder_pane_g1_ParamLimits

0xd00b,	// (0x000158ab) grid_wheel_folder_pane_g1

0x6b2d,	// (0x0000f3cd) clock_nsta_pane_cp2_ParamLimits

0x6b2d,	// (0x0000f3cd) clock_nsta_pane_cp2

0xa437,	// (0x00012cd7) listscroll_midp_pane_ParamLimits

0xa443,	// (0x00012ce3) midp_canvas_pane

0x6d78,	// (0x0000f618) nsta_clock_indic_pane

0xa74f,	// (0x00012fef) listscroll_form_pane_vc

0xa76c,	// (0x0001300c) listscroll_set_pane_vc_ParamLimits

0xa76c,	// (0x0001300c) listscroll_set_pane_vc

0xa860,	// (0x00013100) clock_nsta_pane

0xa8d0,	// (0x00013170) indicator_nsta_pane

0xab97,	// (0x00013437) bg_popup_sub_pane_cp2_ParamLimits

0xabab,	// (0x0001344b) find_pane_cp2_ParamLimits

0xabab,	// (0x0001344b) find_pane_cp2

0xabbd,	// (0x0001345d) grid_toobar_pane_ParamLimits

0xad67,	// (0x00013607) list_form_gen_pane_vc_ParamLimits

0xad67,	// (0x00013607) list_form_gen_pane_vc

0xad7d,	// (0x0001361d) scroll_pane_cp8_vc_ParamLimits

0xad7d,	// (0x0001361d) scroll_pane_cp8_vc

0xadf9,	// (0x00013699) data_form_wide_pane_vc_ParamLimits

0xadf9,	// (0x00013699) data_form_wide_pane_vc

0xae05,	// (0x000136a5) form_field_data_wide_pane_vc_g1

0xae0d,	// (0x000136ad) form_field_data_wide_pane_vc_t1_ParamLimits

0xae0d,	// (0x000136ad) form_field_data_wide_pane_vc_t1

0x9632,	// (0x00011ed2) input_focus_pane_cp6_vc_ParamLimits

0x9632,	// (0x00011ed2) input_focus_pane_cp6_vc

0xb0fd,	// (0x0001399d) list_midp_pane_ParamLimits

0xb109,	// (0x000139a9) scroll_pane_cp16_ParamLimits

0xb109,	// (0x000139a9) scroll_pane_cp16

0xb16b,	// (0x00013a0b) button_value_adjust_pane_ParamLimits

0xb16b,	// (0x00013a0b) button_value_adjust_pane

0xc04e,	// (0x000148ee) button_value_adjust_pane_cp6_ParamLimits

0xc04e,	// (0x000148ee) button_value_adjust_pane_cp6

0xc156,	// (0x000149f6) settings_code_pane_cp_ParamLimits

0xc156,	// (0x000149f6) settings_code_pane_cp

0x876c,	// (0x0001100c) cell_touch_pane_g1

0x876c,	// (0x0001100c) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x00017f79) cell_touch_pane_g

0xc71f,	// (0x00014fbf) cell_touch_pane_cp_ParamLimits

0xc71f,	// (0x00014fbf) cell_touch_pane_cp

0xc72f,	// (0x00014fcf) cell_touch_pane_ParamLimits

0xc72f,	// (0x00014fcf) cell_touch_pane

0x876c,	// (0x0001100c) scroll_sc2_down_pane_g1

0x876c,	// (0x0001100c) scroll_sc2_up_pane_g1

0x8853,	// (0x000110f3) bg_set_opt_pane_cp4_vc

0xc76f,	// (0x0001500f) list_set_graphic_pane_vc_g1_ParamLimits

0xc76f,	// (0x0001500f) list_set_graphic_pane_vc_g1

0xc77b,	// (0x0001501b) list_set_graphic_pane_vc_g2_ParamLimits

0xc77b,	// (0x0001501b) list_set_graphic_pane_vc_g2

0x0001,

0xf9c9,	// (0x00018269) list_set_graphic_pane_vc_g_ParamLimits

0xf9c9,	// (0x00018269) list_set_graphic_pane_vc_g

0xc787,	// (0x00015027) text_primary_small_cp13_vc_ParamLimits

0xc787,	// (0x00015027) text_primary_small_cp13_vc

0xc79f,	// (0x0001503f) list_set_graphic_pane_vc_ParamLimits

0xc79f,	// (0x0001503f) list_set_graphic_pane_vc

0x8853,	// (0x000110f3) input_focus_pane_cp2_vc

0x876c,	// (0x0001100c) setting_code_pane_vc_g1

0xc7b2,	// (0x00015052) setting_code_pane_vc_t1

0xc7c0,	// (0x00015060) set_text_pane_vc_t1_ParamLimits

0xc7c0,	// (0x00015060) set_text_pane_vc_t1

0x8853,	// (0x000110f3) input_focus_pane_cp1_vc

0xc7db,	// (0x0001507b) list_set_text_pane_vc

0x876c,	// (0x0001100c) setting_text_pane_vc_g1

0x8853,	// (0x000110f3) bg_set_opt_pane_cp2_vc

0xc7e5,	// (0x00015085) setting_slider_graphic_pane_vc_g1

0xc7ed,	// (0x0001508d) setting_slider_graphic_pane_vc_t1

0xc7fb,	// (0x0001509b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ce,	// (0x0001826e) setting_slider_graphic_pane_vc_t

0xc809,	// (0x000150a9) slider_set_pane_cp_vc

0xc811,	// (0x000150b1) slider_set_pane_vc_g1

0xc81a,	// (0x000150ba) slider_set_pane_vc_g2

0x0006,

0xf9d3,	// (0x00018273) slider_set_pane_vc_g

0x9755,	// (0x00011ff5) set_opt_bg_pane_g1_copy1

0x975d,	// (0x00011ffd) set_opt_bg_pane_g2_copy1

0xc846,	// (0x000150e6) set_opt_bg_pane_g3_copy1

0x976d,	// (0x0001200d) set_opt_bg_pane_g4_copy1

0x9775,	// (0x00012015) set_opt_bg_pane_g5_copy1

0x977d,	// (0x0001201d) set_opt_bg_pane_g6_copy1

0xc84e,	// (0x000150ee) set_opt_bg_pane_g7_copy1

0xc856,	// (0x000150f6) set_opt_bg_pane_g8_copy1

0xc85e,	// (0x000150fe) set_opt_bg_pane_g9_copy1

0x8853,	// (0x000110f3) bg_set_opt_pane_cp_vc

0xc866,	// (0x00015106) setting_slider_pane_vc_t1

0xc7ed,	// (0x0001508d) setting_slider_pane_vc_t2

0xc7fb,	// (0x0001509b) setting_slider_pane_vc_t3

0x0002,

0xf9e2,	// (0x00018282) setting_slider_pane_vc_t

0xc809,	// (0x000150a9) slider_set_pane_vc

0x73d4,	// (0x0000fc74) volume_set_pane_vc_g1

0x76bb,	// (0x0000ff5b) volume_set_pane_vc_g2

0x76c4,	// (0x0000ff64) volume_set_pane_vc_g3

0x76cd,	// (0x0000ff6d) volume_set_pane_vc_g4

0x76d6,	// (0x0000ff76) volume_set_pane_vc_g5

0x76df,	// (0x0000ff7f) volume_set_pane_vc_g6

0x76e8,	// (0x0000ff88) volume_set_pane_vc_g7

0x76f1,	// (0x0000ff91) volume_set_pane_vc_g8

0x76fa,	// (0x0000ff9a) volume_set_pane_vc_g9

0x7703,	// (0x0000ffa3) volume_set_pane_vc_g10

0x0009,

0xf9e9,	// (0x00018289) volume_set_pane_vc_g

0xc875,	// (0x00015115) volume_set_pane_vc

0xc87d,	// (0x0001511d) button_value_adjust_pane_cp1_vc

0xc887,	// (0x00015127) list_highlight_pane_cp2_vc

0xc890,	// (0x00015130) list_set_pane_vc_ParamLimits

0xc890,	// (0x00015130) list_set_pane_vc

0xc8e2,	// (0x00015182) main_pane_set_vc_t1_ParamLimits

0xc8e2,	// (0x00015182) main_pane_set_vc_t1

0xc8f7,	// (0x00015197) main_pane_set_vc_t2_ParamLimits

0xc8f7,	// (0x00015197) main_pane_set_vc_t2

0xc909,	// (0x000151a9) main_pane_set_vc_t3_ParamLimits

0xc909,	// (0x000151a9) main_pane_set_vc_t3

0xc91b,	// (0x000151bb) main_pane_set_vc_t4_ParamLimits

0xc91b,	// (0x000151bb) main_pane_set_vc_t4

0x0003,

0xf9fe,	// (0x0001829e) main_pane_set_vc_t_ParamLimits

0xf9fe,	// (0x0001829e) main_pane_set_vc_t

0xc92d,	// (0x000151cd) setting_code_pane_vc_ParamLimits

0xc92d,	// (0x000151cd) setting_code_pane_vc

0xc93c,	// (0x000151dc) setting_slider_graphic_pane_vc

0xc93c,	// (0x000151dc) setting_slider_pane_vc

0xc93c,	// (0x000151dc) setting_text_pane_vc

0xc93c,	// (0x000151dc) setting_volume_pane_vc

0xc944,	// (0x000151e4) scroll_pane_cp121_vc

0x9559,	// (0x00011df9) set_content_pane_vc

0xcbaa,	// (0x0001544a) button_value_adjust_pane_g1

0xcbb3,	// (0x00015453) button_value_adjust_pane_g2

0x0001,

0xfa53,	// (0x000182f3) button_value_adjust_pane_g

0xcbbc,	// (0x0001545c) form_field_slider_wide_pane_vc_t1_ParamLimits

0xcbbc,	// (0x0001545c) form_field_slider_wide_pane_vc_t1

0xcbd2,	// (0x00015472) form_field_slider_wide_pane_vc_t2_ParamLimits

0xcbd2,	// (0x00015472) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa58,	// (0x000182f8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa58,	// (0x000182f8) form_field_slider_wide_pane_vc_t

0x8bcd,	// (0x0001146d) input_focus_pane_cp10_vc_ParamLimits

0x8bcd,	// (0x0001146d) input_focus_pane_cp10_vc

0xcbfd,	// (0x0001549d) slider_cont_pane_cp1_vc_ParamLimits

0xcbfd,	// (0x0001549d) slider_cont_pane_cp1_vc

0xc811,	// (0x000150b1) slider_form_pane_g1_cp2

0xc81a,	// (0x000150ba) slider_form_pane_g2_cp2

0xcc18,	// (0x000154b8) form_field_slider_pane_vc_t3

0xcc26,	// (0x000154c6) form_field_slider_pane_vc_t4

0xcc34,	// (0x000154d4) slider_form_pane_vc_ParamLimits

0xcc34,	// (0x000154d4) slider_form_pane_vc

0xcc41,	// (0x000154e1) form_field_slider_pane_vc_t1_ParamLimits

0xcc41,	// (0x000154e1) form_field_slider_pane_vc_t1

0xcc57,	// (0x000154f7) form_field_slider_pane_vc_t2_ParamLimits

0xcc57,	// (0x000154f7) form_field_slider_pane_vc_t2

0x0001,

0xfa6a,	// (0x0001830a) form_field_slider_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001830a) form_field_slider_pane_vc_t

0x8bcd,	// (0x0001146d) input_focus_pane_cp9_vc_ParamLimits

0x8bcd,	// (0x0001146d) input_focus_pane_cp9_vc

0xcc69,	// (0x00015509) slider_cont_pane_vc_ParamLimits

0xcc69,	// (0x00015509) slider_cont_pane_vc

0xcc7b,	// (0x0001551b) list_form_graphic_pane_cp_vc_ParamLimits

0xcc7b,	// (0x0001551b) list_form_graphic_pane_cp_vc

0xae05,	// (0x000136a5) form_field_popup_wide_pane_vc_g1

0xcc90,	// (0x00015530) form_field_popup_wide_pane_vc_t1_ParamLimits

0xcc90,	// (0x00015530) form_field_popup_wide_pane_vc_t1

0x9632,	// (0x00011ed2) input_focus_pane_cp8_vc_ParamLimits

0x9632,	// (0x00011ed2) input_focus_pane_cp8_vc

0xcccf,	// (0x0001556f) list_form_wide_pane_vc_ParamLimits

0xcccf,	// (0x0001556f) list_form_wide_pane_vc

0xccdb,	// (0x0001557b) list_form_graphic_pane_vc_g1

0xcce3,	// (0x00015583) list_form_graphic_pane_vc_t1_ParamLimits

0xcce3,	// (0x00015583) list_form_graphic_pane_vc_t1

0x8933,	// (0x000111d3) list_highlight_pane_cp5_vc_ParamLimits

0x8933,	// (0x000111d3) list_highlight_pane_cp5_vc

0xccff,	// (0x0001559f) list_form_graphic_pane_vc_ParamLimits

0xccff,	// (0x0001559f) list_form_graphic_pane_vc

0xae05,	// (0x000136a5) form_field_popup_pane_vc_g1

0xcd15,	// (0x000155b5) form_field_popup_pane_vc_t1_ParamLimits

0xcd15,	// (0x000155b5) form_field_popup_pane_vc_t1

0x9632,	// (0x00011ed2) input_focus_pane_cp7_vc_ParamLimits

0x9632,	// (0x00011ed2) input_focus_pane_cp7_vc

0xcd2a,	// (0x000155ca) list_form_pane_vc_ParamLimits

0xcd2a,	// (0x000155ca) list_form_pane_vc

0xcd36,	// (0x000155d6) data_form_pane_vc_t1_ParamLimits

0xcd36,	// (0x000155d6) data_form_pane_vc_t1

0x9755,	// (0x00011ff5) input_focus_pane_vc_g1

0x975d,	// (0x00011ffd) input_focus_pane_vc_g2

0x9765,	// (0x00012005) input_focus_pane_vc_g3

0x976d,	// (0x0001200d) input_focus_pane_vc_g4

0x9775,	// (0x00012015) input_focus_pane_vc_g5

0x977d,	// (0x0001201d) input_focus_pane_vc_g6

0x9785,	// (0x00012025) input_focus_pane_vc_g7

0x978d,	// (0x0001202d) input_focus_pane_vc_g8

0x9795,	// (0x00012035) input_focus_pane_vc_g9

0x876c,	// (0x0001100c) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00017f02) input_focus_pane_vc_g

0xadf9,	// (0x00013699) data_form_pane_vc_ParamLimits

0xadf9,	// (0x00013699) data_form_pane_vc

0xae05,	// (0x000136a5) form_field_data_pane_vc_g1

0xcd51,	// (0x000155f1) form_field_data_pane_vc_t1_ParamLimits

0xcd51,	// (0x000155f1) form_field_data_pane_vc_t1

0x9632,	// (0x00011ed2) input_focus_pane_vc_ParamLimits

0x9632,	// (0x00011ed2) input_focus_pane_vc

0x9562,	// (0x00011e02) button_value_adjust_pane_cp3_vc

0xcd67,	// (0x00015607) button_value_adjust_pane_cp5_vc

0xcd6f,	// (0x0001560f) form_field_data_pane_vc_ParamLimits

0xcd6f,	// (0x0001560f) form_field_data_pane_vc

0x958a,	// (0x00011e2a) form_field_data_pane_vc_cp2

0xcd86,	// (0x00015626) form_field_data_wide_pane_vc_ParamLimits

0xcd86,	// (0x00015626) form_field_data_wide_pane_vc

0xcd9c,	// (0x0001563c) form_field_data_wide_pane_vc_cp2

0xcda4,	// (0x00015644) form_field_popup_pane_vc_ParamLimits

0xcda4,	// (0x00015644) form_field_popup_pane_vc

0xcdbb,	// (0x0001565b) form_field_popup_wide_pane_vc_ParamLimits

0xcdbb,	// (0x0001565b) form_field_popup_wide_pane_vc

0xcdd1,	// (0x00015671) form_field_slider_pane_vc_ParamLimits

0xcdd1,	// (0x00015671) form_field_slider_pane_vc

0xcde4,	// (0x00015684) form_field_slider_wide_pane_vc_ParamLimits

0xcde4,	// (0x00015684) form_field_slider_wide_pane_vc

0xcdf7,	// (0x00015697) grid_touch_1_pane_ParamLimits

0xcdf7,	// (0x00015697) grid_touch_1_pane

0xce03,	// (0x000156a3) grid_touch_2_pane_ParamLimits

0xce03,	// (0x000156a3) grid_touch_2_pane

0xa6e6,	// (0x00012f86) touch_pane_g1_ParamLimits

0xa6e6,	// (0x00012f86) touch_pane_g1

0xce1b,	// (0x000156bb) cell_app_pane_cp_wide_ParamLimits

0xce1b,	// (0x000156bb) cell_app_pane_cp_wide

0xce2b,	// (0x000156cb) grid_popup_fast_wide_pane_ParamLimits

0xce2b,	// (0x000156cb) grid_popup_fast_wide_pane

0xce3f,	// (0x000156df) scroll_pane_cp19_ParamLimits

0xce3f,	// (0x000156df) scroll_pane_cp19

0x8853,	// (0x000110f3) bg_popup_window_pane_cp20

0xce53,	// (0x000156f3) listscroll_popup_fast_wide_pane

0xce5b,	// (0x000156fb) grid_indicator_nsta_pane

0xce6d,	// (0x0001570d) clock_nsta_pane_g1

0xce76,	// (0x00015716) clock_nsta_pane_t1

0xce92,	// (0x00015732) cell_indicator_nsta_pane_ParamLimits

0xce92,	// (0x00015732) cell_indicator_nsta_pane

0xcec3,	// (0x00015763) cell_indicator_nsta_pane_g1

0xced1,	// (0x00015771) cell_indicator_nsta_pane_g2

0x0001,

0xfa7b,	// (0x0001831b) cell_indicator_nsta_pane_g

0xcee1,	// (0x00015781) clock_nsta_pane_cp

0xcee9,	// (0x00015789) indicator_nsta_pane_cp

0xcef2,	// (0x00015792) nsta_clock_indic_pane_g1

0x8a14,	// (0x000112b4) grid_indicator_pane

0x9d38,	// (0x000125d8) scroll_pane_cp29

0x6a84,	// (0x0000f324) indicator_nsta_pane_cp2_ParamLimits

0x6a84,	// (0x0000f324) indicator_nsta_pane_cp2

0x8933,	// (0x000111d3) main_apps_wheel_pane

0xafe4,	// (0x00013884) form_midp_field_text_pane_ParamLimits

0xb129,	// (0x000139c9) scroll_bar_cp050_ParamLimits

0xcf5b,	// (0x000157fb) cell_indicator_pane_ParamLimits

0xcf5b,	// (0x000157fb) cell_indicator_pane

0xcf71,	// (0x00015811) cell_indicator_pane_g1

0xcf7b,	// (0x0001581b) grid_wheel_folder_pane_ParamLimits

0xcf7b,	// (0x0001581b) grid_wheel_folder_pane

0xcf8d,	// (0x0001582d) list_wheel_apps_pane_ParamLimits

0xcf8d,	// (0x0001582d) list_wheel_apps_pane

0xcf9c,	// (0x0001583c) main_apps_wheel_pane_g1_ParamLimits

0xcf9c,	// (0x0001583c) main_apps_wheel_pane_g1

0xcfb0,	// (0x00015850) main_apps_wheel_pane_g2_ParamLimits

0xcfb0,	// (0x00015850) main_apps_wheel_pane_g2

0x0001,

0xfa97,	// (0x00018337) main_apps_wheel_pane_g_ParamLimits

0xfa97,	// (0x00018337) main_apps_wheel_pane_g

0xcfc4,	// (0x00015864) main_apps_wheel_pane_t1_ParamLimits

0xcfc4,	// (0x00015864) main_apps_wheel_pane_t1

0xcfe3,	// (0x00015883) list_wheel_apps_pane_g1

0xcfeb,	// (0x0001588b) list_wheel_apps_pane_g2

0xcff3,	// (0x00015893) list_wheel_apps_pane_g3

0xcffb,	// (0x0001589b) list_wheel_apps_pane_g4

0xd003,	// (0x000158a3) list_wheel_apps_pane_g5

0x0004,

0xfa9c,	// (0x0001833c) list_wheel_apps_pane_g

0x8933,	// (0x000111d3) navi_icon_text_pane

0xa7a8,	// (0x00013048) aid_fill_nsta

0xd022,	// (0x000158c2) navi_icon_text_pane_g1

0xd02e,	// (0x000158ce) navi_icon_text_pane_t1

0xa1a3,	// (0x00012a43) list_set_graphic_pane_t1_ParamLimits

0xa1a3,	// (0x00012a43) list_set_graphic_pane_t1

0xb863,	// (0x00014103) popup_midp_note_alarm_window_t6_ParamLimits

0xb863,	// (0x00014103) popup_midp_note_alarm_window_t6

0xb875,	// (0x00014115) popup_midp_note_alarm_window_t7_ParamLimits

0xb875,	// (0x00014115) popup_midp_note_alarm_window_t7

0xb887,	// (0x00014127) popup_midp_note_alarm_window_t8_ParamLimits

0xb887,	// (0x00014127) popup_midp_note_alarm_window_t8

0xb899,	// (0x00014139) popup_midp_note_alarm_window_t9_ParamLimits

0xb899,	// (0x00014139) popup_midp_note_alarm_window_t9

0xb8ab,	// (0x0001414b) popup_midp_note_alarm_window_t10_ParamLimits

0xb8ab,	// (0x0001414b) popup_midp_note_alarm_window_t10

0xb8bd,	// (0x0001415d) popup_midp_note_alarm_window_t11_ParamLimits

0xb8bd,	// (0x0001415d) popup_midp_note_alarm_window_t11

0xb8cf,	// (0x0001416f) scroll_pane_cp17_ParamLimits

0xb8cf,	// (0x0001416f) scroll_pane_cp17

0x73d4,	// (0x0000fc74) volume_small_pane_cp_g1

0x770c,	// (0x0000ffac) volume_small_pane_cp_g2

0x7715,	// (0x0000ffb5) volume_small_pane_cp_g3

0x771e,	// (0x0000ffbe) volume_small_pane_cp_g4

0x7401,	// (0x0000fca1) volume_small_pane_cp_g5

0x7727,	// (0x0000ffc7) volume_small_pane_cp_g6

0x7730,	// (0x0000ffd0) volume_small_pane_cp_g7

0x7739,	// (0x0000ffd9) volume_small_pane_cp_g8

0x7742,	// (0x0000ffe2) volume_small_pane_cp_g9

0x774b,	// (0x0000ffeb) volume_small_pane_cp_g10

0xa500,	// (0x00012da0) midp_ticker_pane_g1_ParamLimits

0xa50c,	// (0x00012dac) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x00017fce) midp_ticker_pane_g_ParamLimits

0xa518,	// (0x00012db8) midp_ticker_pane_t1_ParamLimits

0xa7b8,	// (0x00013058) aid_fill_nsta_2

0xb115,	// (0x000139b5) list_form2_midp_pane

0xc1d5,	// (0x00014a75) midp_editing_number_pane_ParamLimits

0xc1e1,	// (0x00014a81) midp_ticker_pane_ParamLimits

0xd040,	// (0x000158e0) form2_midp_field_pane

0xd064,	// (0x00015904) scroll_pane_cp51

0xd084,	// (0x00015924) form2_midp_button_pane_ParamLimits

0xd084,	// (0x00015924) form2_midp_button_pane

0xd096,	// (0x00015936) form2_midp_content_pane_ParamLimits

0xd096,	// (0x00015936) form2_midp_content_pane

0xd0b0,	// (0x00015950) form2_midp_field_choice_group_pane

0xd0b8,	// (0x00015958) form2_midp_field_pane_g1

0xd0c0,	// (0x00015960) form2_midp_field_pane_g2

0xd0c8,	// (0x00015968) form2_midp_field_pane_g3

0xd0d0,	// (0x00015970) form2_midp_field_pane_g4

0x0003,

0xfac1,	// (0x00018361) form2_midp_field_pane_g

0xd0d8,	// (0x00015978) form2_midp_gauge_slider_pane

0xd0e0,	// (0x00015980) form2_midp_gauge_wait_pane

0xd0e8,	// (0x00015988) form2_midp_image_pane_ParamLimits

0xd0e8,	// (0x00015988) form2_midp_image_pane

0xd103,	// (0x000159a3) form2_midp_label_pane_ParamLimits

0xd103,	// (0x000159a3) form2_midp_label_pane

0xd11c,	// (0x000159bc) form2_midp_label_pane_cp_ParamLimits

0xd11c,	// (0x000159bc) form2_midp_label_pane_cp

0xd13b,	// (0x000159db) form2_midp_string_pane_ParamLimits

0xd13b,	// (0x000159db) form2_midp_string_pane

0xd14d,	// (0x000159ed) form2_midp_text_pane_ParamLimits

0xd14d,	// (0x000159ed) form2_midp_text_pane

0xd166,	// (0x00015a06) form2_midp_time_pane

0xd176,	// (0x00015a16) input_focus_pane_cp51_ParamLimits

0xd176,	// (0x00015a16) input_focus_pane_cp51

0xd18e,	// (0x00015a2e) form2_midp_label_pane_t1_ParamLimits

0xd18e,	// (0x00015a2e) form2_midp_label_pane_t1

0x979d,	// (0x0001203d) form2_mdip_text_pane_t1_ParamLimits

0x979d,	// (0x0001203d) form2_mdip_text_pane_t1

0xd1ce,	// (0x00015a6e) form2_midp_time_pane_t1

0xd1e9,	// (0x00015a89) form2_midp_gauge_slider_pane_t1

0xd1fb,	// (0x00015a9b) form2_midp_gauge_slider_pane_t2

0xd20d,	// (0x00015aad) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaca,	// (0x0001836a) form2_midp_gauge_slider_pane_t

0xd21f,	// (0x00015abf) form2_midp_slider_pane

0xd22b,	// (0x00015acb) form2_midp_gauge_wait_pane_t1

0xd239,	// (0x00015ad9) form2_midp_wait_pane_ParamLimits

0xd239,	// (0x00015ad9) form2_midp_wait_pane

0xae43,	// (0x000136e3) list_single_2graphic_pane_cp4_ParamLimits

0xae43,	// (0x000136e3) list_single_2graphic_pane_cp4

0xd264,	// (0x00015b04) list_single_midp_graphic_pane_cp_ParamLimits

0xd264,	// (0x00015b04) list_single_midp_graphic_pane_cp

0x8853,	// (0x000110f3) list_highlight_pane_cp20

0xd282,	// (0x00015b22) list_single_2graphic_pane_g1_cp4

0xc625,	// (0x00014ec5) list_single_2graphic_pane_g2_cp4

0xd28a,	// (0x00015b2a) list_single_2graphic_pane_t1_cp4

0x8933,	// (0x000111d3) list_highlight_pane_cp21

0xd299,	// (0x00015b39) list_single_midp_graphic_pane_g4_cp

0xd2a8,	// (0x00015b48) list_single_midp_graphic_pane_t1_cp

0xd2bd,	// (0x00015b5d) form2_mdip_string_pane_t1_ParamLimits

0xd2bd,	// (0x00015b5d) form2_mdip_string_pane_t1

0x8853,	// (0x000110f3) bg_wml_button_pane_cp2

0x876c,	// (0x0001100c) form2_midp_image_pane_g1

0x9362,	// (0x00011c02) list_double_large_graphic_pane_g5_ParamLimits

0x9362,	// (0x00011c02) list_double_large_graphic_pane_g5

0xa437,	// (0x00012cd7) midp_form_pane_ParamLimits

0x8933,	// (0x000111d3) main_apps_wheel_pane_ParamLimits

0x707f,	// (0x0000f91f) popup_preview_window_ParamLimits

0x707f,	// (0x0000f91f) popup_preview_window

0x71fa,	// (0x0000fa9a) popup_touch_info_window_ParamLimits

0x71fa,	// (0x0000fa9a) popup_touch_info_window

0x7218,	// (0x0000fab8) popup_touch_menu_window_ParamLimits

0x7218,	// (0x0000fab8) popup_touch_menu_window

0x8762,	// (0x00011002) bg_popup_sub_pane_cp6

0xd327,	// (0x00015bc7) list_touch_menu_pane

0xd32f,	// (0x00015bcf) list_single_touch_menu_pane_ParamLimits

0xd32f,	// (0x00015bcf) list_single_touch_menu_pane

0xd346,	// (0x00015be6) list_single_touch_menu_pane_t1

0x8933,	// (0x000111d3) bg_popup_sub_pane_cp7_ParamLimits

0x8933,	// (0x000111d3) bg_popup_sub_pane_cp7

0xd354,	// (0x00015bf4) heading_sub_pane

0xd35c,	// (0x00015bfc) list_touch_info_pane_ParamLimits

0xd35c,	// (0x00015bfc) list_touch_info_pane

0xd36b,	// (0x00015c0b) list_single_touch_info_pane_ParamLimits

0xd36b,	// (0x00015c0b) list_single_touch_info_pane

0xd37c,	// (0x00015c1c) list_single_touch_info_pane_t1

0xd38a,	// (0x00015c2a) list_single_touch_info_pane_t2

0x0001,

0xfad8,	// (0x00018378) list_single_touch_info_pane_t

0xa42f,	// (0x00012ccf) bg_popup_heading_pane_cp

0xd398,	// (0x00015c38) heading_sub_pane_t1

0xad93,	// (0x00013633) bg_popup_preview_window_pane_cp_ParamLimits

0xad93,	// (0x00013633) bg_popup_preview_window_pane_cp

0xd354,	// (0x00015bf4) heading_preview_pane

0xd35c,	// (0x00015bfc) list_preview_pane_ParamLimits

0xd35c,	// (0x00015bfc) list_preview_pane

0xd3a6,	// (0x00015c46) popup_preview_window_g1

0xd36b,	// (0x00015c0b) list_single_preview_pane_ParamLimits

0xd36b,	// (0x00015c0b) list_single_preview_pane

0xd3ae,	// (0x00015c4e) list_single_preview_pane_g1

0xd3b6,	// (0x00015c56) list_single_preview_pane_t1

0xd37c,	// (0x00015c1c) list_single_preview_pane_t2

0x0001,

0xfadd,	// (0x0001837d) list_single_preview_pane_t

0xd3c4,	// (0x00015c64) bg_popup_heading_pane_cp2_ParamLimits

0xd3c4,	// (0x00015c64) bg_popup_heading_pane_cp2

0xd3da,	// (0x00015c7a) heading_preview_pane_g1

0xd3e2,	// (0x00015c82) heading_preview_pane_t1_ParamLimits

0xd3e2,	// (0x00015c82) heading_preview_pane_t1

0x8a37,	// (0x000112d7) soft_indicator_pane_t1_ParamLimits

0x90a3,	// (0x00011943) scroll_pane_ParamLimits

0x9c34,	// (0x000124d4) scroll_sc2_left_pane

0x9c3d,	// (0x000124dd) scroll_sc2_right_pane

0x9c5c,	// (0x000124fc) scroll_bg_pane_g1_ParamLimits

0x9c71,	// (0x00012511) scroll_bg_pane_g2_ParamLimits

0x9c89,	// (0x00012529) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x00017f59) scroll_bg_pane_g_ParamLimits

0x9c5c,	// (0x000124fc) scroll_handle_pane_g1_ParamLimits

0x9cab,	// (0x0001254b) scroll_handle_pane_g2_ParamLimits

0x9c89,	// (0x00012529) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x00017f60) scroll_handle_pane_g_ParamLimits

0x6dc4,	// (0x0000f664) popup_choice_list_window_ParamLimits

0x6dc4,	// (0x0000f664) popup_choice_list_window

0xaba3,	// (0x00013443) choice_list_pane

0xac47,	// (0x000134e7) cell_toolbar_pane_t1

0xac6f,	// (0x0001350f) toolbar_button_pane_ParamLimits

0xbd4c,	// (0x000145ec) ai_gene_pane_1_t2_ParamLimits

0xbd4c,	// (0x000145ec) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x00018188) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x00018188) ai_gene_pane_1_t

0xd3ff,	// (0x00015c9f) scroll_sc2_left_pane_g1

0xd3ff,	// (0x00015c9f) scroll_sc2_right_pane_g1

0xa77e,	// (0x0001301e) bg_popup_sub_pane_cp10

0xd409,	// (0x00015ca9) list_choice_list_pane

0xd420,	// (0x00015cc0) list_single_choice_list_pane_ParamLimits

0xd420,	// (0x00015cc0) list_single_choice_list_pane

0xd432,	// (0x00015cd2) list_single_choice_list_pane_g1

0x992b,	// (0x000121cb) list_single_choice_list_pane_t1_ParamLimits

0x992b,	// (0x000121cb) list_single_choice_list_pane_t1

0xd43a,	// (0x00015cda) choice_list_pane_g1

0xd442,	// (0x00015ce2) choice_list_pane_t1

0x8762,	// (0x00011002) input_focus_pane_cp11

0x9b0f,	// (0x000123af) title_pane_stacon_g2_ParamLimits

0x9b0f,	// (0x000123af) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x00017f3f) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x00017f3f) title_pane_stacon_g

0xa42f,	// (0x00012ccf) cursor_press_pane

0x6e60,	// (0x0000f700) popup_fep_hwr_window_ParamLimits

0x6e60,	// (0x0000f700) popup_fep_hwr_window

0x6ebc,	// (0x0000f75c) popup_fep_vkb_window_ParamLimits

0x6ebc,	// (0x0000f75c) popup_fep_vkb_window

0xd450,	// (0x00015cf0) cursor_press_pane_g1

0x0002,

0xfb06,	// (0x000183a6) fep_vkb_side_pane_g_ParamLimits

0x7789,	// (0x00010029) fep_hwr_candidate_pane_ParamLimits

0x7789,	// (0x00010029) fep_hwr_candidate_pane

0x77b1,	// (0x00010051) fep_hwr_side_pane_ParamLimits

0x77b1,	// (0x00010051) fep_hwr_side_pane

0x77d1,	// (0x00010071) fep_hwr_top_pane_ParamLimits

0x77d1,	// (0x00010071) fep_hwr_top_pane

0x77e9,	// (0x00010089) fep_hwr_write_pane_ParamLimits

0x77e9,	// (0x00010089) fep_hwr_write_pane

0xfb06,	// (0x000183a6) fep_vkb_side_pane_g

0xd458,	// (0x00015cf8) fep_hwr_top_pane_g1

0xd46a,	// (0x00015d0a) fep_hwr_top_pane_g2

0x7823,	// (0x000100c3) fep_hwr_top_pane_g3

0x0002,

0xfae2,	// (0x00018382) fep_hwr_top_pane_g

0x7838,	// (0x000100d8) fep_hwr_top_text_pane

0x9e00,	// (0x000126a0) fep_hwr_top_text_pane_g1

0xd4a0,	// (0x00015d40) fep_hwr_top_text_pane_t1

0x7926,	// (0x000101c6) fep_hwr_candidate_pane_g1

0xd6b0,	// (0x00015f50) fep_vkb_keypad_pane_g3_ParamLimits

0xd6b0,	// (0x00015f50) fep_vkb_keypad_pane_g3

0xd6d2,	// (0x00015f72) fep_vkb_keypad_pane_g4_ParamLimits

0xd6d2,	// (0x00015f72) fep_vkb_keypad_pane_g4

0xd741,	// (0x00015fe1) fep_vkb_bottom_pane_g2_ParamLimits

0xd741,	// (0x00015fe1) fep_vkb_bottom_pane_g2

0x0001,

0xfb0d,	// (0x000183ad) fep_vkb_bottom_pane_g_ParamLimits

0xfb0d,	// (0x000183ad) fep_vkb_bottom_pane_g

0xd3ff,	// (0x00015c9f) cell_vkb_side_pane_g2

0x0001,

0xfb17,	// (0x000183b7) cell_vkb_side_pane_g

0xd7cc,	// (0x0001606c) cell_vkb_side_pane_t1

0xd7da,	// (0x0001607a) cell_vkb_side_pane_t1_copy1

0xd3ff,	// (0x00015c9f) bg_fep_vkb_candidate_pane_g2

0xd8fe,	// (0x0001619e) cell_vkb_candidate_pane_ParamLimits

0xd4ae,	// (0x00015d4e) aid_size_cell_vkb_ParamLimits

0xd4ae,	// (0x00015d4e) aid_size_cell_vkb

0xd8fe,	// (0x0001619e) cell_vkb_candidate_pane

0x794d,	// (0x000101ed) bg_popup_fep_shadow_pane_g1

0xd524,	// (0x00015dc4) fep_vkb_bottom_pane_ParamLimits

0xd524,	// (0x00015dc4) fep_vkb_bottom_pane

0xd561,	// (0x00015e01) fep_vkb_candidate_pane_ParamLimits

0xd561,	// (0x00015e01) fep_vkb_candidate_pane

0xd57d,	// (0x00015e1d) fep_vkb_keypad_pane_ParamLimits

0xd57d,	// (0x00015e1d) fep_vkb_keypad_pane

0xd5b1,	// (0x00015e51) fep_vkb_side_pane_ParamLimits

0xd5b1,	// (0x00015e51) fep_vkb_side_pane

0xd5dd,	// (0x00015e7d) fep_vkb_top_pane_ParamLimits

0xd5dd,	// (0x00015e7d) fep_vkb_top_pane

0xd609,	// (0x00015ea9) fep_vkb_top_pane_g1_ParamLimits

0xd609,	// (0x00015ea9) fep_vkb_top_pane_g1

0xd618,	// (0x00015eb8) fep_vkb_top_pane_g2_ParamLimits

0xd618,	// (0x00015eb8) fep_vkb_top_pane_g2

0xd627,	// (0x00015ec7) fep_vkb_top_pane_g3_ParamLimits

0xd627,	// (0x00015ec7) fep_vkb_top_pane_g3

0x0003,

0xfafd,	// (0x0001839d) fep_vkb_top_pane_g_ParamLimits

0xfafd,	// (0x0001839d) fep_vkb_top_pane_g

0xd645,	// (0x00015ee5) fep_vkb_top_text_pane_ParamLimits

0xd645,	// (0x00015ee5) fep_vkb_top_text_pane

0xd656,	// (0x00015ef6) fep_vkb_side_pane_g1_ParamLimits

0xd656,	// (0x00015ef6) fep_vkb_side_pane_g1

0xd69f,	// (0x00015f3f) grid_vkb_side_pane_ParamLimits

0xd69f,	// (0x00015f3f) grid_vkb_side_pane

0x7955,	// (0x000101f5) bg_popup_fep_shadow_pane_g2

0x795e,	// (0x000101fe) bg_popup_fep_shadow_pane_g3

0x7966,	// (0x00010206) bg_popup_fep_shadow_pane_g4

0x796f,	// (0x0001020f) bg_popup_fep_shadow_pane_g5

0x7977,	// (0x00010217) bg_popup_fep_shadow_pane_g6

0x797f,	// (0x0001021f) bg_popup_fep_shadow_pane_g7

0x976d,	// (0x0001200d) bg_popup_fep_shadow_pane_g8

0xd6f0,	// (0x00015f90) grid_vkb_keypad_number_pane_ParamLimits

0xd6f0,	// (0x00015f90) grid_vkb_keypad_number_pane

0xd700,	// (0x00015fa0) grid_vkb_keypad_pane_ParamLimits

0xd700,	// (0x00015fa0) grid_vkb_keypad_pane

0xd726,	// (0x00015fc6) fep_vkb_bottom_pane_g1_ParamLimits

0xd726,	// (0x00015fc6) fep_vkb_bottom_pane_g1

0xd74f,	// (0x00015fef) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd74f,	// (0x00015fef) grid_vkb_keypad_bottom_left_pane

0xd764,	// (0x00016004) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd764,	// (0x00016004) grid_vkb_keypad_bottom_right_pane

0xd779,	// (0x00016019) fep_vkb_top_text_pane_g1

0xd794,	// (0x00016034) fep_vkb_top_text_pane_t1

0xd7a9,	// (0x00016049) cell_vkb_side_pane_ParamLimits

0xd7a9,	// (0x00016049) cell_vkb_side_pane

0xd3ff,	// (0x00015c9f) cell_vkb_side_pane_g1

0xd7e8,	// (0x00016088) cell_vkb_keypad_pane_ParamLimits

0xd7e8,	// (0x00016088) cell_vkb_keypad_pane

0xd855,	// (0x000160f5) cell_vkb_keypad_pane_g1

0x0008,

0xfb2a,	// (0x000183ca) bg_popup_fep_shadow_pane_g

0x798f,	// (0x0001022f) cell_hwr_side_pane_g1

0x798f,	// (0x0001022f) cell_hwr_side_pane_g2

0xd85f,	// (0x000160ff) cell_vkb_keypad_pane_t1

0xd86d,	// (0x0001610d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd86d,	// (0x0001610d) cell_vkb_keypad_bottom_left_pane

0xd88a,	// (0x0001612a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd88a,	// (0x0001612a) cell_vkb_keypad_bottom_right_pane

0xd3ff,	// (0x00015c9f) cell_vkb_keypad_bottom_left_pane_g1

0xd3ff,	// (0x00015c9f) cell_vkb_keypad_bottom_right_pane_g1

0xd8c3,	// (0x00016163) cell_vkb_keypad_number_pane_ParamLimits

0xd8c3,	// (0x00016163) cell_vkb_keypad_number_pane

0xd8e2,	// (0x00016182) cell_vkb_keypad_number_pane_g1

0xd8ec,	// (0x0001618c) cell_vkb_keypad_number_pane_g2

0xd8f5,	// (0x00016195) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1c,	// (0x000183bc) cell_vkb_keypad_number_pane_g

0xd85f,	// (0x000160ff) cell_vkb_keypad_number_pane_t1

0xd917,	// (0x000161b7) fep_vkb_candidate_pane_g1

0x0001,

0xfb3d,	// (0x000183dd) cell_hwr_side_pane_g

0xd930,	// (0x000161d0) cell_hwr_side_pane_t1

0x7999,	// (0x00010239) cell_hwr_side_pane_t1_copy1

0x79a7,	// (0x00010247) cell_hwr_candidate_pane_g1

0x79d6,	// (0x00010276) cell_hwr_candidate_pane_t1

0xd3ff,	// (0x00015c9f) cell_vkb_candidate_pane_g2

0xd974,	// (0x00016214) cell_vkb_candidate_pane_t1

0x7754,	// (0x0000fff4) bg_popup_fep_shadow_pane_ParamLimits

0x7754,	// (0x0000fff4) bg_popup_fep_shadow_pane

0x7803,	// (0x000100a3) bg_fep_hwr_top_pane_g4

0xd47c,	// (0x00015d1c) bg_hwr_side_pane_g1_ParamLimits

0xd47c,	// (0x00015d1c) bg_hwr_side_pane_g1

0x7874,	// (0x00010114) cell_hwr_side_pane_ParamLimits

0x7874,	// (0x00010114) cell_hwr_side_pane

0x78af,	// (0x0001014f) fep_hwr_write_pane_g1_ParamLimits

0x78af,	// (0x0001014f) fep_hwr_write_pane_g1

0x78bc,	// (0x0001015c) fep_hwr_write_pane_g2_ParamLimits

0x78bc,	// (0x0001015c) fep_hwr_write_pane_g2

0x78c9,	// (0x00010169) fep_hwr_write_pane_g3_ParamLimits

0x78c9,	// (0x00010169) fep_hwr_write_pane_g3

0x78d7,	// (0x00010177) fep_hwr_write_pane_g4_ParamLimits

0x78d7,	// (0x00010177) fep_hwr_write_pane_g4

0x0005,

0xfae9,	// (0x00018389) fep_hwr_write_pane_g_ParamLimits

0xfae9,	// (0x00018389) fep_hwr_write_pane_g

0x7803,	// (0x000100a3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7803,	// (0x000100a3) bg_fep_hwr_candidate_pane_g2

0x78ec,	// (0x0001018c) cell_hwr_candidate_pane_ParamLimits

0x78ec,	// (0x0001018c) cell_hwr_candidate_pane

0x7926,	// (0x000101c6) fep_hwr_candidate_pane_g1_ParamLimits

0xd4dc,	// (0x00015d7c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xd4dc,	// (0x00015d7c) bg_popup_fep_shadow_pane_cp2

0xd637,	// (0x00015ed7) fep_vkb_top_pane_g4_ParamLimits

0xd637,	// (0x00015ed7) fep_vkb_top_pane_g4

0xd67d,	// (0x00015f1d) fep_vkb_side_pane_g2_ParamLimits

0xd67d,	// (0x00015f1d) fep_vkb_side_pane_g2

0x9477,	// (0x00011d17) list_setting_pane_t4_ParamLimits

0x9477,	// (0x00011d17) list_setting_pane_t4

0x94ed,	// (0x00011d8d) list_setting_number_pane_t5_ParamLimits

0x94ed,	// (0x00011d8d) list_setting_number_pane_t5

0x9e37,	// (0x000126d7) list_double_heading_pane_cp2_ParamLimits

0x9e37,	// (0x000126d7) list_double_heading_pane_cp2

0xa29d,	// (0x00012b3d) list_double_heading_pane_g1_cp2_ParamLimits

0xa29d,	// (0x00012b3d) list_double_heading_pane_g1_cp2

0xd982,	// (0x00016222) list_double_heading_pane_g2_cp2_ParamLimits

0xd982,	// (0x00016222) list_double_heading_pane_g2_cp2

0xd996,	// (0x00016236) list_double_heading_pane_t1_cp2_ParamLimits

0xd996,	// (0x00016236) list_double_heading_pane_t1_cp2

0xd9ac,	// (0x0001624c) list_double_heading_pane_t2_cp2_ParamLimits

0xd9ac,	// (0x0001624c) list_double_heading_pane_t2_cp2

0x874c,	// (0x00010fec) aid_value_unit2

0x66b4,	// (0x0000ef54) popup_preview_fixed_window

0x8bdb,	// (0x0001147b) bg_popup_preview_window_pane_cp02

0xd9be,	// (0x0001625e) list_preview_fixed_pane

0xda04,	// (0x000162a4) list_empty_pane_fp_ParamLimits

0xda04,	// (0x000162a4) list_empty_pane_fp

0xda04,	// (0x000162a4) list_single_cale_day_pane_fp_ParamLimits

0xda04,	// (0x000162a4) list_single_cale_day_pane_fp

0xda04,	// (0x000162a4) list_single_graphic_heading_pane_fp_ParamLimits

0xda04,	// (0x000162a4) list_single_graphic_heading_pane_fp

0xda04,	// (0x000162a4) list_single_graphic_pane_fp_ParamLimits

0xda04,	// (0x000162a4) list_single_graphic_pane_fp

0xda04,	// (0x000162a4) list_single_heading_pane_fp_ParamLimits

0xda04,	// (0x000162a4) list_single_heading_pane_fp

0xda04,	// (0x000162a4) list_single_pane_fp_ParamLimits

0xda04,	// (0x000162a4) list_single_pane_fp

0xda5a,	// (0x000162fa) list_single_pane_fp_g1_ParamLimits

0xda5a,	// (0x000162fa) list_single_pane_fp_g1

0xda66,	// (0x00016306) list_single_pane_fp_g2_ParamLimits

0xda66,	// (0x00016306) list_single_pane_fp_g2

0xda72,	// (0x00016312) list_single_pane_fp_g3_ParamLimits

0xda72,	// (0x00016312) list_single_pane_fp_g3

0xda86,	// (0x00016326) list_single_pane_fp_g4_ParamLimits

0xda86,	// (0x00016326) list_single_pane_fp_g4

0x0003,

0xfb50,	// (0x000183f0) list_single_pane_fp_g_ParamLimits

0xfb50,	// (0x000183f0) list_single_pane_fp_g

0xda92,	// (0x00016332) list_single_pane_fp_t1_ParamLimits

0xda92,	// (0x00016332) list_single_pane_fp_t1

0xdaa9,	// (0x00016349) list_single_graphic_pane_fp_g1_ParamLimits

0xdaa9,	// (0x00016349) list_single_graphic_pane_fp_g1

0xda5a,	// (0x000162fa) list_single_graphic_pane_fp_g2_ParamLimits

0xda5a,	// (0x000162fa) list_single_graphic_pane_fp_g2

0xda66,	// (0x00016306) list_single_graphic_pane_fp_g3_ParamLimits

0xda66,	// (0x00016306) list_single_graphic_pane_fp_g3

0xda72,	// (0x00016312) list_single_graphic_pane_fp_g4_ParamLimits

0xda72,	// (0x00016312) list_single_graphic_pane_fp_g4

0xda86,	// (0x00016326) list_single_graphic_pane_fp_g5_ParamLimits

0xda86,	// (0x00016326) list_single_graphic_pane_fp_g5

0x0004,

0xfb59,	// (0x000183f9) list_single_graphic_pane_fp_g_ParamLimits

0xfb59,	// (0x000183f9) list_single_graphic_pane_fp_g

0xdab5,	// (0x00016355) list_single_graphic_pane_fp_t1_ParamLimits

0xdab5,	// (0x00016355) list_single_graphic_pane_fp_t1

0xdaa9,	// (0x00016349) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xdaa9,	// (0x00016349) list_single_graphic_heading_pane_fp_g1

0xda5a,	// (0x000162fa) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xda5a,	// (0x000162fa) list_single_graphic_heading_pane_fp_g2

0xda66,	// (0x00016306) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xda66,	// (0x00016306) list_single_graphic_heading_pane_fp_g3

0xda72,	// (0x00016312) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xda72,	// (0x00016312) list_single_graphic_heading_pane_fp_g4

0xda86,	// (0x00016326) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xda86,	// (0x00016326) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb59,	// (0x000183f9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb59,	// (0x000183f9) list_single_graphic_heading_pane_fp_g

0xdacb,	// (0x0001636b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xdacb,	// (0x0001636b) list_single_graphic_heading_pane_fp_t1

0xdae1,	// (0x00016381) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xdae1,	// (0x00016381) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb64,	// (0x00018404) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb64,	// (0x00018404) list_single_graphic_heading_pane_fp_t

0xdaf3,	// (0x00016393) list_single_cale_day_pane_fp_g1_ParamLimits

0xdaf3,	// (0x00016393) list_single_cale_day_pane_fp_g1

0xdb2b,	// (0x000163cb) list_single_cale_day_pane_fp_g2_ParamLimits

0xdb2b,	// (0x000163cb) list_single_cale_day_pane_fp_g2

0xdb37,	// (0x000163d7) list_single_cale_day_pane_fp_g3_ParamLimits

0xdb37,	// (0x000163d7) list_single_cale_day_pane_fp_g3

0xdb5f,	// (0x000163ff) list_single_cale_day_pane_fp_g4_ParamLimits

0xdb5f,	// (0x000163ff) list_single_cale_day_pane_fp_g4

0xdb83,	// (0x00016423) list_single_cale_day_pane_fp_g5_ParamLimits

0xdb83,	// (0x00016423) list_single_cale_day_pane_fp_g5

0x0004,

0xfb69,	// (0x00018409) list_single_cale_day_pane_fp_g_ParamLimits

0xfb69,	// (0x00018409) list_single_cale_day_pane_fp_g

0xdba7,	// (0x00016447) list_single_cale_day_pane_fp_t1_ParamLimits

0xdba7,	// (0x00016447) list_single_cale_day_pane_fp_t1

0xdbcd,	// (0x0001646d) list_single_cale_day_pane_fp_t2_ParamLimits

0xdbcd,	// (0x0001646d) list_single_cale_day_pane_fp_t2

0xdbe6,	// (0x00016486) list_single_cale_day_pane_fp_t3_ParamLimits

0xdbe6,	// (0x00016486) list_single_cale_day_pane_fp_t3

0x0002,

0xfb74,	// (0x00018414) list_single_cale_day_pane_fp_t_ParamLimits

0xfb74,	// (0x00018414) list_single_cale_day_pane_fp_t

0xda5a,	// (0x000162fa) list_empty_pane_fp_g1_ParamLimits

0xda5a,	// (0x000162fa) list_empty_pane_fp_g1

0xdbff,	// (0x0001649f) list_empty_pane_fp_t1

0xdc0d,	// (0x000164ad) list_empty_pane_fp_t2

0x0001,

0xfb7b,	// (0x0001841b) list_empty_pane_fp_t

0xda5a,	// (0x000162fa) list_single_heading_pane_fp_g1_ParamLimits

0xda5a,	// (0x000162fa) list_single_heading_pane_fp_g1

0xda66,	// (0x00016306) list_single_heading_pane_fp_g2_ParamLimits

0xda66,	// (0x00016306) list_single_heading_pane_fp_g2

0xda72,	// (0x00016312) list_single_heading_pane_fp_g3_ParamLimits

0xda72,	// (0x00016312) list_single_heading_pane_fp_g3

0x0002,

0xfb80,	// (0x00018420) list_single_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x00018420) list_single_heading_pane_fp_g

0xdc1b,	// (0x000164bb) list_single_heading_pane_fp_t1_ParamLimits

0xdc1b,	// (0x000164bb) list_single_heading_pane_fp_t1

0xdc2d,	// (0x000164cd) list_single_heading_pane_fp_t2_ParamLimits

0xdc2d,	// (0x000164cd) list_single_heading_pane_fp_t2

0x0001,

0xfb87,	// (0x00018427) list_single_heading_pane_fp_t_ParamLimits

0xfb87,	// (0x00018427) list_single_heading_pane_fp_t

0x9999,	// (0x00012239) aid_size_cell_fast

0x8b42,	// (0x000113e2) soft_indicator_pane_cp1_t1

0x99d6,	// (0x00012276) cell_app_pane_cp2_ParamLimits

0x99d6,	// (0x00012276) cell_app_pane_cp2

0x7776,	// (0x00010016) fep_hwr_candidate_drop_down_list_pane

0x7940,	// (0x000101e0) fep_hwr_candidate_pane_g3_ParamLimits

0x7940,	// (0x000101e0) fep_hwr_candidate_pane_g3

0x58f4,	// (0x0000e194) fep_hwr_candidate_pane_g4_ParamLimits

0x58f4,	// (0x0000e194) fep_hwr_candidate_pane_g4

0x0002,

0xfaf6,	// (0x00018396) fep_hwr_candidate_pane_g_ParamLimits

0xfaf6,	// (0x00018396) fep_hwr_candidate_pane_g

0xd550,	// (0x00015df0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xd550,	// (0x00015df0) fep_vkb_candidate_drop_down_list_pane

0xd91f,	// (0x000161bf) fep_vkb_candidate_pane_g3

0xd927,	// (0x000161c7) fep_vkb_candidate_pane_g4

0x0002,

0xfb23,	// (0x000183c3) fep_vkb_candidate_pane_g

0x79a7,	// (0x00010247) cell_hwr_candidate_pane_g1_ParamLimits

0x79b5,	// (0x00010255) cell_hwr_candidate_pane_g3_ParamLimits

0x79b5,	// (0x00010255) cell_hwr_candidate_pane_g3

0x056c,	// (0x00008e0c) cell_hwr_candidate_pane_g4_ParamLimits

0x056c,	// (0x00008e0c) cell_hwr_candidate_pane_g4

0x0002,

0xfb42,	// (0x000183e2) cell_hwr_candidate_pane_g_ParamLimits

0xfb42,	// (0x000183e2) cell_hwr_candidate_pane_g

0xd93e,	// (0x000161de) cell_vkb_candidate_pane_g3_ParamLimits

0xd93e,	// (0x000161de) cell_vkb_candidate_pane_g3

0xd959,	// (0x000161f9) cell_vkb_candidate_pane_g4_ParamLimits

0xd959,	// (0x000161f9) cell_vkb_candidate_pane_g4

0xdc43,	// (0x000164e3) cell_app_pane_cp2_g1_ParamLimits

0xdc43,	// (0x000164e3) cell_app_pane_cp2_g1

0xdc61,	// (0x00016501) cell_app_pane_cp2_g2_ParamLimits

0xdc61,	// (0x00016501) cell_app_pane_cp2_g2

0x0001,

0xfb8c,	// (0x0001842c) cell_app_pane_cp2_g_ParamLimits

0xfb8c,	// (0x0001842c) cell_app_pane_cp2_g

0xdc6d,	// (0x0001650d) cell_app_pane_cp2_t1_ParamLimits

0xdc6d,	// (0x0001650d) cell_app_pane_cp2_t1

0x9632,	// (0x00011ed2) grid_highlight_pane_cp1_ParamLimits

0x9632,	// (0x00011ed2) grid_highlight_pane_cp1

0x79f3,	// (0x00010293) cell_hwr_candidate_pane_cp1_ParamLimits

0x79f3,	// (0x00010293) cell_hwr_candidate_pane_cp1

0x79a7,	// (0x00010247) fep_hwr_candidate_drop_down_list_pane_g1

0x7a11,	// (0x000102b1) fep_hwr_candidate_drop_down_list_pane_g2

0x7a1e,	// (0x000102be) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb91,	// (0x00018431) fep_hwr_candidate_drop_down_list_pane_g

0x7a2b,	// (0x000102cb) fep_hwr_candidate_drop_down_list_scroll_pane

0x7a34,	// (0x000102d4) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7a34,	// (0x000102d4) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7a41,	// (0x000102e1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7a41,	// (0x000102e1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7a4e,	// (0x000102ee) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7a4e,	// (0x000102ee) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7a5b,	// (0x000102fb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7a5b,	// (0x000102fb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7a76,	// (0x00010316) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7a76,	// (0x00010316) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7a91,	// (0x00010331) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7a91,	// (0x00010331) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7aac,	// (0x0001034c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7aac,	// (0x0001034c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7ac7,	// (0x00010367) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7ac7,	// (0x00010367) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb98,	// (0x00018438) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb98,	// (0x00018438) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xdc7f,	// (0x0001651f) cell_vkb_candidate_pane_cp1_ParamLimits

0xdc7f,	// (0x0001651f) cell_vkb_candidate_pane_cp1

0xd637,	// (0x00015ed7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd637,	// (0x00015ed7) fep_vkb_candidate_drop_down_list_pane_g1

0xdca2,	// (0x00016542) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xdca2,	// (0x00016542) fep_vkb_candidate_drop_down_list_pane_g2

0xdcaf,	// (0x0001654f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xdcaf,	// (0x0001654f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba9,	// (0x00018449) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba9,	// (0x00018449) fep_vkb_candidate_drop_down_list_pane_g

0xdcbc,	// (0x0001655c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xdcbc,	// (0x0001655c) fep_vkb_candidate_drop_down_list_scroll_pane

0xdcc9,	// (0x00016569) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xdcc9,	// (0x00016569) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xdcd6,	// (0x00016576) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xdcd6,	// (0x00016576) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xdce2,	// (0x00016582) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xdce2,	// (0x00016582) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xda18,	// (0x000162b8) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xda18,	// (0x000162b8) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xda39,	// (0x000162d9) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xda39,	// (0x000162d9) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xdcee,	// (0x0001658e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xdcee,	// (0x0001658e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xdd0f,	// (0x000165af) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xdd0f,	// (0x000165af) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xdd30,	// (0x000165d0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xdd30,	// (0x000165d0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb0,	// (0x00018450) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb0,	// (0x00018450) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x885d,	// (0x000110fd) title_pane_g1_ParamLimits

0x886a,	// (0x0001110a) title_pane_g2_ParamLimits

0xf529,	// (0x00017dc9) title_pane_g_ParamLimits

0x9df0,	// (0x00012690) aid_call2_pane

0x9df8,	// (0x00012698) aid_call_pane

0x9e00,	// (0x000126a0) popup_clock_analogue_window_g1

0x9e00,	// (0x000126a0) popup_clock_analogue_window_g2

0x698e,	// (0x0000f22e) popup_clock_analogue_window_g3

0x6997,	// (0x0000f237) popup_clock_analogue_window_g4

0x876c,	// (0x0001100c) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x00017f6e) popup_clock_analogue_window_g

0x699f,	// (0x0000f23f) popup_clock_analogue_window_t1

0x69ad,	// (0x0000f24d) clock_digital_number_pane_ParamLimits

0x69ad,	// (0x0000f24d) clock_digital_number_pane

0x69b9,	// (0x0000f259) clock_digital_number_pane_cp02_ParamLimits

0x69b9,	// (0x0000f259) clock_digital_number_pane_cp02

0x69c5,	// (0x0000f265) clock_digital_number_pane_cp03_ParamLimits

0x69c5,	// (0x0000f265) clock_digital_number_pane_cp03

0x69d1,	// (0x0000f271) clock_digital_number_pane_cp04_ParamLimits

0x69d1,	// (0x0000f271) clock_digital_number_pane_cp04

0x69dd,	// (0x0000f27d) clock_digital_separator_pane_ParamLimits

0x69dd,	// (0x0000f27d) clock_digital_separator_pane

0x69e9,	// (0x0000f289) popup_clock_digital_window_t1_ParamLimits

0x69e9,	// (0x0000f289) popup_clock_digital_window_t1

0x876c,	// (0x0001100c) clock_digital_number_pane_g1

0x876c,	// (0x0001100c) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x00017f79) clock_digital_number_pane_g

0x876c,	// (0x0001100c) clock_digital_separator_pane_g1

0x876c,	// (0x0001100c) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x00017f79) clock_digital_separator_pane_g

0xa7a8,	// (0x00013048) aid_fill_nsta_ParamLimits

0xa8d0,	// (0x00013170) indicator_nsta_pane_ParamLimits

0xaa43,	// (0x000132e3) popup_clock_analogue_window

0xaa43,	// (0x000132e3) popup_clock_digital_window

0xce5b,	// (0x000156fb) grid_indicator_nsta_pane_ParamLimits

0xce84,	// (0x00015724) clock_nsta_pane_t2

0x0001,

0xfa76,	// (0x00018316) clock_nsta_pane_t

0x6952,	// (0x0000f1f2) aid_size_max_handle

0x695c,	// (0x0000f1fc) aid_size_min_handle

0xa42f,	// (0x00012ccf) editor_scroll_pane

0xdd4b,	// (0x000165eb) ex_editor_pane

0x9909,	// (0x000121a9) scroll_pane_cp13

0x90d0,	// (0x00011970) scroll_pane_cp14

0x9e2f,	// (0x000126cf) scroll_pane_cp36

0x9e47,	// (0x000126e7) list_single_graphic_hl_pane_cp2_ParamLimits

0x9e47,	// (0x000126e7) list_single_graphic_hl_pane_cp2

0xc289,	// (0x00014b29) list_single_graphic_hl_pane_ParamLimits

0xc289,	// (0x00014b29) list_single_graphic_hl_pane

0xdd53,	// (0x000165f3) aid_size_min_hl_cp1

0xdd5c,	// (0x000165fc) list_highlight_pane_cp34_ParamLimits

0xdd5c,	// (0x000165fc) list_highlight_pane_cp34

0xdd6d,	// (0x0001660d) list_single_graphic_hl_pane_g1_ParamLimits

0xdd6d,	// (0x0001660d) list_single_graphic_hl_pane_g1

0xdd7a,	// (0x0001661a) list_single_graphic_hl_pane_g2_ParamLimits

0xdd7a,	// (0x0001661a) list_single_graphic_hl_pane_g2

0xdd7a,	// (0x0001661a) list_single_graphic_hl_pane_g3_ParamLimits

0xdd7a,	// (0x0001661a) list_single_graphic_hl_pane_g3

0xa29d,	// (0x00012b3d) list_single_graphic_hl_pane_g4_ParamLimits

0xa29d,	// (0x00012b3d) list_single_graphic_hl_pane_g4

0xd982,	// (0x00016222) list_single_graphic_hl_pane_g5_ParamLimits

0xd982,	// (0x00016222) list_single_graphic_hl_pane_g5

0x0004,

0xfbc1,	// (0x00018461) list_single_graphic_hl_pane_g_ParamLimits

0xfbc1,	// (0x00018461) list_single_graphic_hl_pane_g

0xdd86,	// (0x00016626) list_single_graphic_hl_pane_t1_ParamLimits

0xdd86,	// (0x00016626) list_single_graphic_hl_pane_t1

0xdd9c,	// (0x0001663c) aid_size_min_hl_cp2

0xdda5,	// (0x00016645) list_highlight_pane_cp34_cp2_ParamLimits

0xdda5,	// (0x00016645) list_highlight_pane_cp34_cp2

0xdd6d,	// (0x0001660d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xdd6d,	// (0x0001660d) list_single_graphic_hl_pane_g1_cp2

0xddb2,	// (0x00016652) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xddb2,	// (0x00016652) list_single_graphic_hl_pane_g2_cp2

0xddbe,	// (0x0001665e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xddbe,	// (0x0001665e) list_single_graphic_hl_pane_g3_cp2

0xa29d,	// (0x00012b3d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xa29d,	// (0x00012b3d) list_single_graphic_hl_pane_g4_cp2

0xd982,	// (0x00016222) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd982,	// (0x00016222) list_single_graphic_hl_pane_g5_cp2

0x6c74,	// (0x0000f514) control_pane_g4_ParamLimits

0x6c74,	// (0x0000f514) control_pane_g4

0xa77e,	// (0x0001301e) bg_popup_sub_pane_cp10_ParamLimits

0xd409,	// (0x00015ca9) list_choice_list_pane_ParamLimits

0xd418,	// (0x00015cb8) scroll_pane_cp23

0x8bdb,	// (0x0001147b) bg_popup_preview_window_pane_cp02_ParamLimits

0xd9be,	// (0x0001625e) list_preview_fixed_pane_ParamLimits

0xd9d4,	// (0x00016274) list_preview_fixed_pane_cp_ParamLimits

0xd9d4,	// (0x00016274) list_preview_fixed_pane_cp

0xd9e0,	// (0x00016280) popup_preview_fixed_window_g1_ParamLimits

0xd9e0,	// (0x00016280) popup_preview_fixed_window_g1

0xd9ec,	// (0x0001628c) popup_preview_fixed_window_g2_ParamLimits

0xd9ec,	// (0x0001628c) popup_preview_fixed_window_g2

0x0002,

0xfb49,	// (0x000183e9) popup_preview_fixed_window_g_ParamLimits

0xfb49,	// (0x000183e9) popup_preview_fixed_window_g

0x68e2,	// (0x0000f182) aid_navi_side_left_pane_ParamLimits

0x68f2,	// (0x0000f192) aid_navi_side_right_pane_ParamLimits

0x6901,	// (0x0000f1a1) navi_icon_pane_stacon_ParamLimits

0x6911,	// (0x0000f1b1) navi_navi_pane_stacon_ParamLimits

0x6901,	// (0x0000f1a1) navi_text_pane_stacon_ParamLimits

0x6595,	// (0x0000ee35) main_text_info_pane

0xdde0,	// (0x00016680) listscroll_text_info_pane

0xdde8,	// (0x00016688) list_text_info_pane_ParamLimits

0xdde8,	// (0x00016688) list_text_info_pane

0xddf7,	// (0x00016697) scroll_pane_cp24_ParamLimits

0xddf7,	// (0x00016697) scroll_pane_cp24

0xde15,	// (0x000166b5) list_text_info_pane_t1_ParamLimits

0xde15,	// (0x000166b5) list_text_info_pane_t1

0x6dde,	// (0x0000f67e) popup_fast_swap2_window_ParamLimits

0x6dde,	// (0x0000f67e) popup_fast_swap2_window

0xde32,	// (0x000166d2) aid_size_cell_fast2

0x8762,	// (0x00011002) bg_popup_window_pane_cp17

0xb141,	// (0x000139e1) heading_pane_cp2

0xb149,	// (0x000139e9) listscroll_fast2_pane

0xde3c,	// (0x000166dc) grid_fast2_pane

0xde44,	// (0x000166e4) listscroll_fast2_pane_g1

0xde4c,	// (0x000166ec) listscroll_fast2_pane_g2

0x0001,

0xfbcc,	// (0x0001846c) listscroll_fast2_pane_g

0x9909,	// (0x000121a9) scroll_pane_cp26

0xde54,	// (0x000166f4) cell_fast2_pane_ParamLimits

0xde54,	// (0x000166f4) cell_fast2_pane

0xde6a,	// (0x0001670a) cell_fast2_pane_g1

0xde73,	// (0x00016713) cell_fast2_pane_g2

0xde7c,	// (0x0001671c) cell_fast2_pane_g3

0x0002,

0xfbd1,	// (0x00018471) cell_fast2_pane_g

0x8f29,	// (0x000117c9) grid_highlight_pane_cp9

0x6daa,	// (0x0000f64a) main_eswt_pane_ParamLimits

0x6daa,	// (0x0000f64a) main_eswt_pane

0xde0c,	// (0x000166ac) list_single_text_info_pane

0xde84,	// (0x00016724) eswt_ctrl_button_pane

0xde84,	// (0x00016724) eswt_ctrl_canvas_pane

0xde8c,	// (0x0001672c) eswt_ctrl_combo_pane

0xde84,	// (0x00016724) eswt_ctrl_default_pane

0xde84,	// (0x00016724) eswt_ctrl_label_pane

0xde94,	// (0x00016734) eswt_ctrl_wait_pane

0xde9c,	// (0x0001673c) eswt_shell_pane

0x8762,	// (0x00011002) listscroll_eswt_app_pane

0xdeb8,	// (0x00016758) popup_eswt_tasktip_window_ParamLimits

0xdeb8,	// (0x00016758) popup_eswt_tasktip_window

0xad93,	// (0x00013633) bg_popup_window_pane_cp18

0xdec9,	// (0x00016769) eswt_control_pane_g1_ParamLimits

0xdec9,	// (0x00016769) eswt_control_pane_g1

0xded6,	// (0x00016776) eswt_control_pane_g2_ParamLimits

0xded6,	// (0x00016776) eswt_control_pane_g2

0xdee3,	// (0x00016783) eswt_control_pane_g3_ParamLimits

0xdee3,	// (0x00016783) eswt_control_pane_g3

0xdef0,	// (0x00016790) eswt_control_pane_g4_ParamLimits

0xdef0,	// (0x00016790) eswt_control_pane_g4

0x0003,

0xfbd8,	// (0x00018478) eswt_control_pane_g_ParamLimits

0xfbd8,	// (0x00018478) eswt_control_pane_g

0x9632,	// (0x00011ed2) bg_button_pane_ParamLimits

0x9632,	// (0x00011ed2) bg_button_pane

0x8f3e,	// (0x000117de) common_borders_pane_copy2_ParamLimits

0x8f3e,	// (0x000117de) common_borders_pane_copy2

0xdefd,	// (0x0001679d) control_button_pane_g1_ParamLimits

0xdefd,	// (0x0001679d) control_button_pane_g1

0xdf09,	// (0x000167a9) control_button_pane_g2_ParamLimits

0xdf09,	// (0x000167a9) control_button_pane_g2

0xdf15,	// (0x000167b5) control_button_pane_g3_ParamLimits

0xdf15,	// (0x000167b5) control_button_pane_g3

0x0002,

0xfbe1,	// (0x00018481) control_button_pane_g_ParamLimits

0xfbe1,	// (0x00018481) control_button_pane_g

0xdf29,	// (0x000167c9) control_button_pane_t1

0xdf37,	// (0x000167d7) control_button_pane_t2

0x0001,

0xfbe8,	// (0x00018488) control_button_pane_t

0xac7b,	// (0x0001351b) bg_button_pane_g1

0xac8b,	// (0x0001352b) bg_button_pane_g2

0xac83,	// (0x00013523) bg_button_pane_g3

0xac9b,	// (0x0001353b) bg_button_pane_g4

0xac93,	// (0x00013533) bg_button_pane_g5

0xaca3,	// (0x00013543) bg_button_pane_g6

0xacab,	// (0x0001354b) bg_button_pane_g7

0xacbb,	// (0x0001355b) bg_button_pane_g8

0xacb3,	// (0x00013553) bg_button_pane_g9

0x0008,

0xf83c,	// (0x000180dc) bg_button_pane_g

0xd3c4,	// (0x00015c64) common_borders_pane_ParamLimits

0xd3c4,	// (0x00015c64) common_borders_pane

0xdec9,	// (0x00016769) eswt_control_pane_g1_copy1_ParamLimits

0xdec9,	// (0x00016769) eswt_control_pane_g1_copy1

0xded6,	// (0x00016776) eswt_control_pane_g2_copy1_ParamLimits

0xded6,	// (0x00016776) eswt_control_pane_g2_copy1

0xdee3,	// (0x00016783) eswt_control_pane_g3_copy1_ParamLimits

0xdee3,	// (0x00016783) eswt_control_pane_g3_copy1

0xdef0,	// (0x00016790) eswt_control_pane_g4_copy1_ParamLimits

0xdef0,	// (0x00016790) eswt_control_pane_g4_copy1

0xd3ff,	// (0x00015c9f) bg_eswt_ctrl_canvas_pane_g1

0xd3c4,	// (0x00015c64) common_borders_pane_cp2_ParamLimits

0xd3c4,	// (0x00015c64) common_borders_pane_cp2

0xd3c4,	// (0x00015c64) common_borders_pane_cp3_ParamLimits

0xd3c4,	// (0x00015c64) common_borders_pane_cp3

0xdf45,	// (0x000167e5) separator_horizontal_pane

0x9c3d,	// (0x000124dd) separator_vertical_pane

0xdec9,	// (0x00016769) eswt_control_pane_g1_copy2_ParamLimits

0xdec9,	// (0x00016769) eswt_control_pane_g1_copy2

0xded6,	// (0x00016776) eswt_control_pane_g2_copy2_ParamLimits

0xded6,	// (0x00016776) eswt_control_pane_g2_copy2

0xdee3,	// (0x00016783) eswt_control_pane_g3_copy2_ParamLimits

0xdee3,	// (0x00016783) eswt_control_pane_g3_copy2

0xdef0,	// (0x00016790) eswt_control_pane_g4_copy2_ParamLimits

0xdef0,	// (0x00016790) eswt_control_pane_g4_copy2

0x8762,	// (0x00011002) common_borders_pane_cp4

0xdf4d,	// (0x000167ed) separator_horizontal_pane_g1

0xdf56,	// (0x000167f6) separator_horizontal_pane_g2

0xdf5f,	// (0x000167ff) separator_horizontal_pane_g3

0x0002,

0xfbed,	// (0x0001848d) separator_horizontal_pane_g

0xdec9,	// (0x00016769) eswt_control_pane_g1_copy3_ParamLimits

0xdec9,	// (0x00016769) eswt_control_pane_g1_copy3

0xded6,	// (0x00016776) eswt_control_pane_g2_copy3_ParamLimits

0xded6,	// (0x00016776) eswt_control_pane_g2_copy3

0xdee3,	// (0x00016783) eswt_control_pane_g3_copy3_ParamLimits

0xdee3,	// (0x00016783) eswt_control_pane_g3_copy3

0xdef0,	// (0x00016790) eswt_control_pane_g4_copy3_ParamLimits

0xdef0,	// (0x00016790) eswt_control_pane_g4_copy3

0x8762,	// (0x00011002) common_borders_pane_cp5

0xdf68,	// (0x00016808) separator_vertical_pane_g1

0xdf71,	// (0x00016811) separator_vertical_pane_g2

0xdf7a,	// (0x0001681a) separator_vertical_pane_g3

0x0002,

0xfbf4,	// (0x00018494) separator_vertical_pane_g

0xdec9,	// (0x00016769) eswt_control_pane_g1_copy4_ParamLimits

0xdec9,	// (0x00016769) eswt_control_pane_g1_copy4

0xded6,	// (0x00016776) eswt_control_pane_g2_copy4_ParamLimits

0xded6,	// (0x00016776) eswt_control_pane_g2_copy4

0xdee3,	// (0x00016783) eswt_control_pane_g3_copy4_ParamLimits

0xdee3,	// (0x00016783) eswt_control_pane_g3_copy4

0xdef0,	// (0x00016790) eswt_control_pane_g4_copy4_ParamLimits

0xdef0,	// (0x00016790) eswt_control_pane_g4_copy4

0xdf83,	// (0x00016823) eswt_ctrl_combo_button_pane

0xdf8b,	// (0x0001682b) eswt_ctrl_input_pane

0xdf93,	// (0x00016833) popup_choice_list_window_cp70

0xdf9b,	// (0x0001683b) eswt_ctrl_input_pane_t1

0x8762,	// (0x00011002) input_focus_pane_cp70

0xd3c4,	// (0x00015c64) bg_button_pane_cp70_ParamLimits

0xd3c4,	// (0x00015c64) bg_button_pane_cp70

0xdfa9,	// (0x00016849) eswt_ctrl_combo_button_pane_g1

0xdfb1,	// (0x00016851) wait_bar_pane_cp70

0xad93,	// (0x00013633) bg_popup_window_pane_cp70_ParamLimits

0xad93,	// (0x00013633) bg_popup_window_pane_cp70

0xdfb9,	// (0x00016859) popup_eswt_tasktip_window_t1

0xdfcf,	// (0x0001686f) wait_bar_pane_cp71_ParamLimits

0xdfcf,	// (0x0001686f) wait_bar_pane_cp71

0xdfdb,	// (0x0001687b) grid_eswt_app_pane

0x9c34,	// (0x000124d4) scroll_pane_cp70

0xdfe4,	// (0x00016884) cell_eswt_app_pane_ParamLimits

0xdfe4,	// (0x00016884) cell_eswt_app_pane

0xe00c,	// (0x000168ac) cell_eswt_app_pane_g1_ParamLimits

0xe00c,	// (0x000168ac) cell_eswt_app_pane_g1

0xe03b,	// (0x000168db) cell_eswt_app_pane_g2_ParamLimits

0xe03b,	// (0x000168db) cell_eswt_app_pane_g2

0x0001,

0xfbfb,	// (0x0001849b) cell_eswt_app_pane_g_ParamLimits

0xfbfb,	// (0x0001849b) cell_eswt_app_pane_g

0xe064,	// (0x00016904) cell_eswt_app_pane_t1_ParamLimits

0xe064,	// (0x00016904) cell_eswt_app_pane_t1

0xe096,	// (0x00016936) grid_highlight_pane_cp70_ParamLimits

0xe096,	// (0x00016936) grid_highlight_pane_cp70

0x90e4,	// (0x00011984) set_content_pane_g1

0xa6ca,	// (0x00012f6a) status_small_volume_pane

0x7ae2,	// (0x00010382) status_small_volume_pane_g1

0x7aea,	// (0x0001038a) volume_small2_pane

0x7af3,	// (0x00010393) volume_small2_pane_g1

0x7afc,	// (0x0001039c) volume_small2_pane_g2

0x7b05,	// (0x000103a5) volume_small2_pane_g3

0x7b0e,	// (0x000103ae) volume_small2_pane_g4

0x7b17,	// (0x000103b7) volume_small2_pane_g5

0x7b20,	// (0x000103c0) volume_small2_pane_g6

0x7b29,	// (0x000103c9) volume_small2_pane_g7

0x7b32,	// (0x000103d2) volume_small2_pane_g8

0x7b3b,	// (0x000103db) volume_small2_pane_g9

0x7b44,	// (0x000103e4) volume_small2_pane_g10

0x0009,

0xfc00,	// (0x000184a0) volume_small2_pane_g

0xd779,	// (0x00016019) fep_vkb_top_text_pane_g1_ParamLimits

0xd794,	// (0x00016034) fep_vkb_top_text_pane_t1_ParamLimits

0xd9f8,	// (0x00016298) popup_preview_fixed_window_g3_ParamLimits

0xd9f8,	// (0x00016298) popup_preview_fixed_window_g3

0x71a3,	// (0x0000fa43) popup_toolbar_trans_pane

0xc030,	// (0x000148d0) aid_height_set_list_ParamLimits

0xc03c,	// (0x000148dc) aid_size_parent_ParamLimits

0xa77e,	// (0x0001301e) list_highlight_pane_cp2_ParamLimits

0x90e4,	// (0x00011984) set_content_pane_g1_ParamLimits

0xc29e,	// (0x00014b3e) list_single_image_pane_ParamLimits

0xc29e,	// (0x00014b3e) list_single_image_pane

0xe0a2,	// (0x00016942) aid_size_cell_image_ParamLimits

0xe0a2,	// (0x00016942) aid_size_cell_image

0xe0af,	// (0x0001694f) grid_single_image_pane_ParamLimits

0xe0af,	// (0x0001694f) grid_single_image_pane

0x90e4,	// (0x00011984) list_single_image_pane_g1_ParamLimits

0x90e4,	// (0x00011984) list_single_image_pane_g1

0x9658,	// (0x00011ef8) list_single_image_pane_g2_ParamLimits

0x9658,	// (0x00011ef8) list_single_image_pane_g2

0x0001,

0xfc15,	// (0x000184b5) list_single_image_pane_g_ParamLimits

0xfc15,	// (0x000184b5) list_single_image_pane_g

0xc1bf,	// (0x00014a5f) list_single_image_pane_t1_ParamLimits

0xc1bf,	// (0x00014a5f) list_single_image_pane_t1

0xe0bb,	// (0x0001695b) cell_image_list_pane_ParamLimits

0xe0bb,	// (0x0001695b) cell_image_list_pane

0xe0ce,	// (0x0001696e) cell_image_list_pane_g1

0xe0d7,	// (0x00016977) cell_image_list_pane_g2

0x0001,

0xfc1a,	// (0x000184ba) cell_image_list_pane_g

0xe0e0,	// (0x00016980) aid_size_cell_tb_trans_pane

0x9632,	// (0x00011ed2) bg_tb_trans_pane

0xe0f2,	// (0x00016992) grid_tb_trans_pane

0xac7b,	// (0x0001351b) bg_tb_trans_pane_g1

0xac8b,	// (0x0001352b) bg_tb_trans_pane_g2

0xac83,	// (0x00013523) bg_tb_trans_pane_g3

0xac9b,	// (0x0001353b) bg_tb_trans_pane_g4

0xac93,	// (0x00013533) bg_tb_trans_pane_g5

0xacbb,	// (0x0001355b) bg_tb_trans_pane_g6

0xacb3,	// (0x00013553) bg_tb_trans_pane_g7

0xaca3,	// (0x00013543) bg_tb_trans_pane_g8

0xacab,	// (0x0001354b) bg_tb_trans_pane_g9

0x0008,

0xfc1f,	// (0x000184bf) bg_tb_trans_pane_g

0xe106,	// (0x000169a6) cell_toolbar_trans_pane_ParamLimits

0xe106,	// (0x000169a6) cell_toolbar_trans_pane

0xd3ff,	// (0x00015c9f) cell_toolbar_trans_pane_g1

0xd048,	// (0x000158e8) list_form2_midp_pane_t1

0xd056,	// (0x000158f6) list_form2_midp_pane_t2

0x0001,

0xfabc,	// (0x0001835c) list_form2_midp_pane_t

0xd064,	// (0x00015904) scroll_pane_cp51_ParamLimits

0xd249,	// (0x00015ae9) form2_midp_wait_pane_g1

0xd252,	// (0x00015af2) form2_midp_wait_pane_g2

0xd25b,	// (0x00015afb) form2_midp_wait_pane_g3

0x0002,

0xfad1,	// (0x00018371) form2_midp_wait_pane_g

0x8933,	// (0x000111d3) list_highlight_pane_cp21_ParamLimits

0xd299,	// (0x00015b39) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xd2a8,	// (0x00015b48) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xc247,	// (0x00014ae7) list_single_2graphic_im_pane_ParamLimits

0xc247,	// (0x00014ae7) list_single_2graphic_im_pane

0xe12c,	// (0x000169cc) list_single_2graphic_im_pane_g1_ParamLimits

0xe12c,	// (0x000169cc) list_single_2graphic_im_pane_g1

0xe13d,	// (0x000169dd) list_single_2graphic_im_pane_g2_ParamLimits

0xe13d,	// (0x000169dd) list_single_2graphic_im_pane_g2

0xe149,	// (0x000169e9) list_single_2graphic_im_pane_g3_ParamLimits

0xe149,	// (0x000169e9) list_single_2graphic_im_pane_g3

0x0003,

0xfc32,	// (0x000184d2) list_single_2graphic_im_pane_g_ParamLimits

0xfc32,	// (0x000184d2) list_single_2graphic_im_pane_g

0xe169,	// (0x00016a09) list_single_2graphic_im_pane_t1_ParamLimits

0xe169,	// (0x00016a09) list_single_2graphic_im_pane_t1

0xda04,	// (0x000162a4) list_single_graphic_2heading_pane_fp_ParamLimits

0xda04,	// (0x000162a4) list_single_graphic_2heading_pane_fp

0xdaa9,	// (0x00016349) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xdaa9,	// (0x00016349) list_single_graphic_2heading_pane_fp_g1

0xda5a,	// (0x000162fa) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xda5a,	// (0x000162fa) list_single_graphic_2heading_pane_fp_g2

0xda66,	// (0x00016306) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xda66,	// (0x00016306) list_single_graphic_2heading_pane_fp_g3

0xda72,	// (0x00016312) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xda72,	// (0x00016312) list_single_graphic_2heading_pane_fp_g4

0xda86,	// (0x00016326) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xda86,	// (0x00016326) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb59,	// (0x000183f9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb59,	// (0x000183f9) list_single_graphic_2heading_pane_fp_g

0xe19a,	// (0x00016a3a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe19a,	// (0x00016a3a) list_single_graphic_2heading_pane_fp_t1

0xdae1,	// (0x00016381) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xdae1,	// (0x00016381) list_single_graphic_2heading_pane_fp_t2

0xe1b0,	// (0x00016a50) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe1b0,	// (0x00016a50) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3b,	// (0x000184db) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3b,	// (0x000184db) list_single_graphic_2heading_pane_fp_t

0xd488,	// (0x00015d28) fep_hwr_write_pane_g5_ParamLimits

0xd488,	// (0x00015d28) fep_hwr_write_pane_g5

0xd494,	// (0x00015d34) fep_hwr_write_pane_g6_ParamLimits

0xd494,	// (0x00015d34) fep_hwr_write_pane_g6

0xde9c,	// (0x0001673c) eswt_shell_pane_ParamLimits

0xad93,	// (0x00013633) bg_popup_window_pane_cp18_ParamLimits

0xbfa2,	// (0x00014842) heading_pane_cp70

0xdfb9,	// (0x00016859) popup_eswt_tasktip_window_t1_ParamLimits

0xa7ea,	// (0x0001308a) aid_touch_tab_arrow_left

0xa7f6,	// (0x00013096) aid_touch_tab_arrow_right

0x887b,	// (0x0001111b) title_pane_g3_ParamLimits

0x887b,	// (0x0001111b) title_pane_g3

0x9530,	// (0x00011dd0) set_value_pane_g1

0x71a3,	// (0x0000fa43) popup_toolbar_trans_pane_ParamLimits

0xe0e0,	// (0x00016980) aid_size_cell_tb_trans_pane_ParamLimits

0x9632,	// (0x00011ed2) bg_tb_trans_pane_ParamLimits

0xe0f2,	// (0x00016992) grid_tb_trans_pane_ParamLimits

0x8bdb,	// (0x0001147b) cont_note_pane_ParamLimits

0x8bdb,	// (0x0001147b) cont_note_pane

0x8f3e,	// (0x000117de) cont_snote2_single_text_pane_ParamLimits

0x8f3e,	// (0x000117de) cont_snote2_single_text_pane

0x8f3e,	// (0x000117de) cont_snote2_single_graphic_pane_ParamLimits

0x8f3e,	// (0x000117de) cont_snote2_single_graphic_pane

0xb35f,	// (0x00013bff) cont_note_wait_pane_ParamLimits

0xb35f,	// (0x00013bff) cont_note_wait_pane

0xb35f,	// (0x00013bff) cont_note_image_pane_ParamLimits

0xb35f,	// (0x00013bff) cont_note_image_pane

0xe1c6,	// (0x00016a66) popup_note2_window_g1_ParamLimits

0xe1c6,	// (0x00016a66) popup_note2_window_g1

0xe1f7,	// (0x00016a97) popup_note2_window_t1_ParamLimits

0xe1f7,	// (0x00016a97) popup_note2_window_t1

0xe23c,	// (0x00016adc) popup_note2_window_t2_ParamLimits

0xe23c,	// (0x00016adc) popup_note2_window_t2

0xe281,	// (0x00016b21) popup_note2_window_t3_ParamLimits

0xe281,	// (0x00016b21) popup_note2_window_t3

0xe2c6,	// (0x00016b66) popup_note2_window_t4_ParamLimits

0xe2c6,	// (0x00016b66) popup_note2_window_t4

0x8c5f,	// (0x000114ff) popup_note2_window_t5_ParamLimits

0x8c5f,	// (0x000114ff) popup_note2_window_t5

0x0004,

0xfc47,	// (0x000184e7) popup_note2_window_t_ParamLimits

0xfc47,	// (0x000184e7) popup_note2_window_t

0xe2f5,	// (0x00016b95) popup_note2_image_window_g1_ParamLimits

0xe2f5,	// (0x00016b95) popup_note2_image_window_g1

0xe301,	// (0x00016ba1) popup_note2_image_window_g2_ParamLimits

0xe301,	// (0x00016ba1) popup_note2_image_window_g2

0x0001,

0xfc52,	// (0x000184f2) popup_note2_image_window_g_ParamLimits

0xfc52,	// (0x000184f2) popup_note2_image_window_g

0xe313,	// (0x00016bb3) popup_note2_image_window_t1_ParamLimits

0xe313,	// (0x00016bb3) popup_note2_image_window_t1

0xe32b,	// (0x00016bcb) popup_note2_image_window_t2_ParamLimits

0xe32b,	// (0x00016bcb) popup_note2_image_window_t2

0xe343,	// (0x00016be3) popup_note2_image_window_t3_ParamLimits

0xe343,	// (0x00016be3) popup_note2_image_window_t3

0x0002,

0xfc57,	// (0x000184f7) popup_note2_image_window_t_ParamLimits

0xfc57,	// (0x000184f7) popup_note2_image_window_t

0xb36d,	// (0x00013c0d) popup_note2_wait_window_g1_ParamLimits

0xb36d,	// (0x00013c0d) popup_note2_wait_window_g1

0xb379,	// (0x00013c19) popup_note2_wait_window_g2_ParamLimits

0xb379,	// (0x00013c19) popup_note2_wait_window_g2

0xb385,	// (0x00013c25) popup_note2_wait_window_g3_ParamLimits

0xb385,	// (0x00013c25) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x000180be) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x000180be) popup_note2_wait_window_g

0xe35f,	// (0x00016bff) popup_note2_wait_window_t1_ParamLimits

0xe35f,	// (0x00016bff) popup_note2_wait_window_t1

0xe37d,	// (0x00016c1d) popup_note2_wait_window_t2_ParamLimits

0xe37d,	// (0x00016c1d) popup_note2_wait_window_t2

0xe39b,	// (0x00016c3b) popup_note2_wait_window_t3_ParamLimits

0xe39b,	// (0x00016c3b) popup_note2_wait_window_t3

0xe3ad,	// (0x00016c4d) popup_note2_wait_window_t4_ParamLimits

0xe3ad,	// (0x00016c4d) popup_note2_wait_window_t4

0x0003,

0xfc5e,	// (0x000184fe) popup_note2_wait_window_t_ParamLimits

0xfc5e,	// (0x000184fe) popup_note2_wait_window_t

0xe3bf,	// (0x00016c5f) wait_bar2_pane_ParamLimits

0xe3bf,	// (0x00016c5f) wait_bar2_pane

0xe3d7,	// (0x00016c77) popup_snote2_single_text_window_g1_ParamLimits

0xe3d7,	// (0x00016c77) popup_snote2_single_text_window_g1

0xe3ff,	// (0x00016c9f) popup_snote2_single_text_window_t1_ParamLimits

0xe3ff,	// (0x00016c9f) popup_snote2_single_text_window_t1

0xe44b,	// (0x00016ceb) popup_snote2_single_text_window_t2_ParamLimits

0xe44b,	// (0x00016ceb) popup_snote2_single_text_window_t2

0xe497,	// (0x00016d37) popup_snote2_single_text_window_t3_ParamLimits

0xe497,	// (0x00016d37) popup_snote2_single_text_window_t3

0xe4d8,	// (0x00016d78) popup_snote2_single_text_window_t4_ParamLimits

0xe4d8,	// (0x00016d78) popup_snote2_single_text_window_t4

0xe50e,	// (0x00016dae) popup_snote2_single_text_window_t5_ParamLimits

0xe50e,	// (0x00016dae) popup_snote2_single_text_window_t5

0x0004,

0xfc67,	// (0x00018507) popup_snote2_single_text_window_t_ParamLimits

0xfc67,	// (0x00018507) popup_snote2_single_text_window_t

0xe539,	// (0x00016dd9) popup_snote2_single_graphic_window_g1_ParamLimits

0xe539,	// (0x00016dd9) popup_snote2_single_graphic_window_g1

0xe561,	// (0x00016e01) popup_snote2_single_graphic_window_g2_ParamLimits

0xe561,	// (0x00016e01) popup_snote2_single_graphic_window_g2

0x0001,

0xfc72,	// (0x00018512) popup_snote2_single_graphic_window_g_ParamLimits

0xfc72,	// (0x00018512) popup_snote2_single_graphic_window_g

0xe589,	// (0x00016e29) popup_snote2_single_graphic_window_t1_ParamLimits

0xe589,	// (0x00016e29) popup_snote2_single_graphic_window_t1

0xe5d5,	// (0x00016e75) popup_snote2_single_graphic_window_t2_ParamLimits

0xe5d5,	// (0x00016e75) popup_snote2_single_graphic_window_t2

0xe497,	// (0x00016d37) popup_snote2_single_graphic_window_t3_ParamLimits

0xe497,	// (0x00016d37) popup_snote2_single_graphic_window_t3

0xe4d8,	// (0x00016d78) popup_snote2_single_graphic_window_t4_ParamLimits

0xe4d8,	// (0x00016d78) popup_snote2_single_graphic_window_t4

0xe50e,	// (0x00016dae) popup_snote2_single_graphic_window_t5_ParamLimits

0xe50e,	// (0x00016dae) popup_snote2_single_graphic_window_t5

0x0004,

0xfc77,	// (0x00018517) popup_snote2_single_graphic_window_t_ParamLimits

0xfc77,	// (0x00018517) popup_snote2_single_graphic_window_t

0xcf3a,	// (0x000157da) clock_nsta_pane_cp2_t1

0xcf3a,	// (0x000157da) clock_nsta_pane_cp2_t2

0x0001,

0xfa92,	// (0x00018332) clock_nsta_pane_cp2_t

0x964c,	// (0x00011eec) form_field_data_wide_pane_g1_ParamLimits

0x90e4,	// (0x00011984) form_field_data_wide_pane_g2_ParamLimits

0x90e4,	// (0x00011984) form_field_data_wide_pane_g2

0x9658,	// (0x00011ef8) form_field_data_wide_pane_g3_ParamLimits

0x9658,	// (0x00011ef8) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x00017ef1) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x00017ef1) form_field_data_wide_pane_g

0xce0f,	// (0x000156af) grid_touch_3_pane_ParamLimits

0xce0f,	// (0x000156af) grid_touch_3_pane

0xe621,	// (0x00016ec1) cell_touch_3_pane_ParamLimits

0xe621,	// (0x00016ec1) cell_touch_3_pane

0xd3ff,	// (0x00015c9f) cell_touch_3_pane_g1

0xd3ff,	// (0x00015c9f) cell_touch_3_pane_g2

0x0001,

0xfb17,	// (0x000183b7) cell_touch_3_pane_g

0x8cb7,	// (0x00011557) cont_query_data_pane

0x8cbf,	// (0x0001155f) cont_query_data_pane_cp1

0xe64e,	// (0x00016eee) button_value_adjust_pane_cp7

0xe656,	// (0x00016ef6) query_popup_pane_cp3

0x9eed,	// (0x0001278d) bg_popup_sub_pane_cp22_ParamLimits

0x6a08,	// (0x0000f2a8) navi_navi_volume_pane_cp2

0x6a20,	// (0x0000f2c0) popup_side_volume_key_window_g2

0x6a2c,	// (0x0000f2cc) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x00017f87) popup_side_volume_key_window_g

0x6a46,	// (0x0000f2e6) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x00017f8e) popup_side_volume_key_window_t

0xa220,	// (0x00012ac0) popup_side_volume_key_window_ParamLimits

0x92a5,	// (0x00011b45) list_double_graphic_pane_g4_ParamLimits

0x92a5,	// (0x00011b45) list_double_graphic_pane_g4

0xc272,	// (0x00014b12) list_single_2heading_msg_pane_ParamLimits

0xc272,	// (0x00014b12) list_single_2heading_msg_pane

0xe683,	// (0x00016f23) list_single_2heading_msg_pane_g1_ParamLimits

0xe683,	// (0x00016f23) list_single_2heading_msg_pane_g1

0xe68f,	// (0x00016f2f) list_single_2heading_msg_pane_g2_ParamLimits

0xe68f,	// (0x00016f2f) list_single_2heading_msg_pane_g2

0xe69b,	// (0x00016f3b) list_single_2heading_msg_pane_g3_ParamLimits

0xe69b,	// (0x00016f3b) list_single_2heading_msg_pane_g3

0xe6a7,	// (0x00016f47) list_single_2heading_msg_pane_g4_ParamLimits

0xe6a7,	// (0x00016f47) list_single_2heading_msg_pane_g4

0x0003,

0xfc82,	// (0x00018522) list_single_2heading_msg_pane_g_ParamLimits

0xfc82,	// (0x00018522) list_single_2heading_msg_pane_g

0xe6bf,	// (0x00016f5f) list_single_2heading_msg_pane_t1_ParamLimits

0xe6bf,	// (0x00016f5f) list_single_2heading_msg_pane_t1

0xe6e7,	// (0x00016f87) list_single_2heading_msg_pane_t2_ParamLimits

0xe6e7,	// (0x00016f87) list_single_2heading_msg_pane_t2

0xe716,	// (0x00016fb6) list_single_2heading_msg_pane_t3_ParamLimits

0xe716,	// (0x00016fb6) list_single_2heading_msg_pane_t3

0xe74f,	// (0x00016fef) list_single_2heading_msg_pane_t4_ParamLimits

0xe74f,	// (0x00016fef) list_single_2heading_msg_pane_t4

0x0003,

0xfc8b,	// (0x0001852b) list_single_2heading_msg_pane_t_ParamLimits

0xfc8b,	// (0x0001852b) list_single_2heading_msg_pane_t

0x8887,	// (0x00011127) title_pane_g4_ParamLimits

0x8887,	// (0x00011127) title_pane_g4

0x6858,	// (0x0000f0f8) title_pane_stacon_g3_ParamLimits

0x6858,	// (0x0000f0f8) title_pane_stacon_g3

0xe15d,	// (0x000169fd) list_single_2graphic_im_pane_g4_ParamLimits

0xe15d,	// (0x000169fd) list_single_2graphic_im_pane_g4

0xbd69,	// (0x00014609) popup_side_volume_key_window_cp

0xc53a,	// (0x00014dda) main_idle_act2_pane_t1

0x72d8,	// (0x0000fb78) toolbar_button_pane_g10

0x909b,	// (0x0001193b) popup_toolbar_window_cp1

0xcf2b,	// (0x000157cb) clock_nsta_pane_cp_t1

0xcf2b,	// (0x000157cb) clock_nsta_pane_cp_t2

0x0001,

0xfa8d,	// (0x0001832d) clock_nsta_pane_cp_t

0x6a08,	// (0x0000f2a8) navi_navi_volume_pane_cp2_ParamLimits

0x6a14,	// (0x0000f2b4) popup_side_volume_key_window_g1_ParamLimits

0x6a20,	// (0x0000f2c0) popup_side_volume_key_window_g2_ParamLimits

0x6a2c,	// (0x0000f2cc) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x00017f87) popup_side_volume_key_window_g_ParamLimits

0x7762,	// (0x00010002) fep_hwr_aid_pane

0x7803,	// (0x000100a3) bg_fep_hwr_top_pane_g4_ParamLimits

0xd458,	// (0x00015cf8) fep_hwr_top_pane_g1_ParamLimits

0xd46a,	// (0x00015d0a) fep_hwr_top_pane_g2_ParamLimits

0x7823,	// (0x000100c3) fep_hwr_top_pane_g3_ParamLimits

0xfae2,	// (0x00018382) fep_hwr_top_pane_g_ParamLimits

0x7838,	// (0x000100d8) fep_hwr_top_text_pane_ParamLimits

0xbb34,	// (0x000143d4) aid_touch_tab_arrow_arrow_2

0xbb3d,	// (0x000143dd) aid_touch_tab_arrow_left_2

0x7776,	// (0x00010016) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x77a9,	// (0x00010049) fep_hwr_prediction_pane

0xd5a9,	// (0x00015e49) fep_vkb_prediction_pane

0xd68b,	// (0x00015f2b) fep_vkb_side_pane_g3_ParamLimits

0xd68b,	// (0x00015f2b) fep_vkb_side_pane_g3

0x79a7,	// (0x00010247) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7a11,	// (0x000102b1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7a1e,	// (0x000102be) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb91,	// (0x00018431) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7b4d,	// (0x000103ed) fep_hwr_prediction_pane_g1

0x7b57,	// (0x000103f7) fep_hwr_prediction_pane_g2

0x7b5f,	// (0x000103ff) fep_hwr_prediction_pane_g3

0x7b67,	// (0x00010407) fep_hwr_prediction_pane_g4

0x0003,

0xfc94,	// (0x00018534) fep_hwr_prediction_pane_g

0xe774,	// (0x00017014) fep_vkb_prediction_pane_g1

0xe77e,	// (0x0001701e) fep_vkb_prediction_pane_g2

0xe786,	// (0x00017026) fep_vkb_prediction_pane_g3

0xe78e,	// (0x0001702e) fep_vkb_prediction_pane_g4

0x0003,

0xfc9d,	// (0x0001853d) fep_vkb_prediction_pane_g

0x759a,	// (0x0000fe3a) slider_set_pane_g3

0x75ae,	// (0x0000fe4e) slider_set_pane_g4

0x75c6,	// (0x0000fe66) slider_set_pane_g5

0x759a,	// (0x0000fe3a) slider_set_pane_g6

0x75dc,	// (0x0000fe7c) slider_set_pane_g7

0xc183,	// (0x00014a23) slider_form_pane_g3

0xc18c,	// (0x00014a2c) slider_form_pane_g4

0xc194,	// (0x00014a34) slider_form_pane_g5

0xc183,	// (0x00014a23) slider_form_pane_g6

0xc19c,	// (0x00014a3c) slider_form_pane_g7

0xc822,	// (0x000150c2) slider_set_pane_vc_g3

0xc82b,	// (0x000150cb) slider_set_pane_vc_g4

0xc834,	// (0x000150d4) slider_set_pane_vc_g5

0xc822,	// (0x000150c2) slider_set_pane_vc_g6

0xc83d,	// (0x000150dd) slider_set_pane_vc_g7

0xc822,	// (0x000150c2) slider_form_pane_vc_g1

0xc82b,	// (0x000150cb) slider_form_pane_vc_g2

0xc834,	// (0x000150d4) slider_form_pane_vc_g3

0xc822,	// (0x000150c2) slider_form_pane_vc_g4

0xcc0f,	// (0x000154af) slider_form_pane_vc_g5

0x0004,

0xfa5f,	// (0x000182ff) slider_form_pane_vc_g

0x6595,	// (0x0000ee35) main_idle_act3_pane

0xe796,	// (0x00017036) ai3_links_pane

0xe79f,	// (0x0001703f) popup_ai3_data_window_ParamLimits

0xe79f,	// (0x0001703f) popup_ai3_data_window

0x8762,	// (0x00011002) grid_ai3_links_pane

0xe7b7,	// (0x00017057) cell_ai3_links_pane_ParamLimits

0xe7b7,	// (0x00017057) cell_ai3_links_pane

0xe7cb,	// (0x0001706b) bg_popup_sub_pane_cp11

0xe7d8,	// (0x00017078) cell_ai3_links_pane_g1

0x8762,	// (0x00011002) bg_popup_sub_pane_cp12

0xe7fd,	// (0x0001709d) heading_ai3_data_pane

0xe805,	// (0x000170a5) list_ai3_gene_pane

0xe811,	// (0x000170b1) popup_ai3_data_window_g1

0xe819,	// (0x000170b9) heading_ai3_data_pane_g1

0xe821,	// (0x000170c1) heading_ai3_data_pane_t1

0xe82f,	// (0x000170cf) list_double_ai3_gene_pane_ParamLimits

0xe82f,	// (0x000170cf) list_double_ai3_gene_pane

0xe83c,	// (0x000170dc) list_single_ai3_gene_pane_ParamLimits

0xe83c,	// (0x000170dc) list_single_ai3_gene_pane

0xd3c4,	// (0x00015c64) list_highlight_pane_cp7_ParamLimits

0xd3c4,	// (0x00015c64) list_highlight_pane_cp7

0xe849,	// (0x000170e9) list_single_a13_gene_pane_t1_ParamLimits

0xe849,	// (0x000170e9) list_single_a13_gene_pane_t1

0xe860,	// (0x00017100) list_single_ai3_gene_pane_g1

0xe869,	// (0x00017109) list_single_ai3_gene_pane_g2

0x0001,

0xfca6,	// (0x00018546) list_single_ai3_gene_pane_g

0xe871,	// (0x00017111) list_double_ai3_gene_pane_g1_ParamLimits

0xe871,	// (0x00017111) list_double_ai3_gene_pane_g1

0xe87d,	// (0x0001711d) list_double_ai3_gene_pane_t1_ParamLimits

0xe87d,	// (0x0001711d) list_double_ai3_gene_pane_t1

0xe899,	// (0x00017139) list_double_ai3_gene_pane_t2_ParamLimits

0xe899,	// (0x00017139) list_double_ai3_gene_pane_t2

0xe8ae,	// (0x0001714e) list_double_ai3_gene_pane_t3_ParamLimits

0xe8ae,	// (0x0001714e) list_double_ai3_gene_pane_t3

0x0002,

0xfcab,	// (0x0001854b) list_double_ai3_gene_pane_t_ParamLimits

0xfcab,	// (0x0001854b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe667,	// (0x00016f07) aid_size_min_col_2

0xe66f,	// (0x00016f0f) aid_size_min_msg_ParamLimits

0xe66f,	// (0x00016f0f) aid_size_min_msg

0xd785,	// (0x00016025) fep_vkb_top_text_pane_g2_ParamLimits

0xd785,	// (0x00016025) fep_vkb_top_text_pane_g2

0x0001,

0xfb12,	// (0x000183b2) fep_vkb_top_text_pane_g_ParamLimits

0xfb12,	// (0x000183b2) fep_vkb_top_text_pane_g

0x6595,	// (0x0000ee35) main_hc_apps_shell_pane

0xe8cb,	// (0x0001716b) grid_hc_apps_pane_ParamLimits

0xe8cb,	// (0x0001716b) grid_hc_apps_pane

0xe8dd,	// (0x0001717d) list_hc_apps_pane

0xe8e5,	// (0x00017185) scroll_pane_cp37_ParamLimits

0xe8e5,	// (0x00017185) scroll_pane_cp37

0xe8f1,	// (0x00017191) cell_hc_apps_pane_ParamLimits

0xe8f1,	// (0x00017191) cell_hc_apps_pane

0xe97f,	// (0x0001721f) cell_hc_apps_pane_g1_ParamLimits

0xe97f,	// (0x0001721f) cell_hc_apps_pane_g1

0xe9ab,	// (0x0001724b) cell_hc_apps_pane_g2_ParamLimits

0xe9ab,	// (0x0001724b) cell_hc_apps_pane_g2

0xe9c7,	// (0x00017267) cell_hc_apps_pane_g3_ParamLimits

0xe9c7,	// (0x00017267) cell_hc_apps_pane_g3

0x0002,

0xfcb2,	// (0x00018552) cell_hc_apps_pane_g_ParamLimits

0xfcb2,	// (0x00018552) cell_hc_apps_pane_g

0xe9e9,	// (0x00017289) cell_hc_apps_pane_t1_ParamLimits

0xe9e9,	// (0x00017289) cell_hc_apps_pane_t1

0x8bdb,	// (0x0001147b) grid_highlight_pane_cp10_ParamLimits

0x8bdb,	// (0x0001147b) grid_highlight_pane_cp10

0xea27,	// (0x000172c7) list_single_hc_apps_pane_ParamLimits

0xea27,	// (0x000172c7) list_single_hc_apps_pane

0xea57,	// (0x000172f7) list_single_hc_apps_pane_g1

0xea70,	// (0x00017310) list_single_hc_apps_pane_g2

0x0001,

0xfcb9,	// (0x00018559) list_single_hc_apps_pane_g

0xea89,	// (0x00017329) list_single_hc_apps_pane_g2_copy1

0xeaa5,	// (0x00017345) list_single_hc_apps_pane_t1

0x8933,	// (0x000111d3) bg_set_opt_pane_cp_ParamLimits

0x67a6,	// (0x0000f046) setting_slider_pane_t1_ParamLimits

0x67bc,	// (0x0000f05c) setting_slider_pane_t2_ParamLimits

0x67d5,	// (0x0000f075) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00017dd9) setting_slider_pane_t_ParamLimits

0x67ec,	// (0x0000f08c) slider_set_pane_ParamLimits

0x6c88,	// (0x0000f528) control_pane_g5_ParamLimits

0x6c88,	// (0x0000f528) control_pane_g5

0xbffb,	// (0x0001489b) slider_set_pane_g1_ParamLimits

0x758e,	// (0x0000fe2e) slider_set_pane_g2_ParamLimits

0x759a,	// (0x0000fe3a) slider_set_pane_g3_ParamLimits

0x75ae,	// (0x0000fe4e) slider_set_pane_g4_ParamLimits

0x75c6,	// (0x0000fe66) slider_set_pane_g5_ParamLimits

0x759a,	// (0x0000fe3a) slider_set_pane_g6_ParamLimits

0x75dc,	// (0x0000fe7c) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x000181da) slider_set_pane_g_ParamLimits

0x8933,	// (0x000111d3) navi_icon_text_pane_ParamLimits

0xa7b8,	// (0x00013058) aid_fill_nsta_2_ParamLimits

0xa7ea,	// (0x0001308a) aid_touch_tab_arrow_left_ParamLimits

0xa7f6,	// (0x00013096) aid_touch_tab_arrow_right_ParamLimits

0xa860,	// (0x00013100) clock_nsta_pane_ParamLimits

0xbb16,	// (0x000143b6) navi_icon_pane_g1_ParamLimits

0xbb22,	// (0x000143c2) navi_text_pane_t1_ParamLimits

0xd022,	// (0x000158c2) navi_icon_text_pane_g1_ParamLimits

0xd02e,	// (0x000158ce) navi_icon_text_pane_t1_ParamLimits

0xea57,	// (0x000172f7) list_single_hc_apps_pane_g1_ParamLimits

0xea70,	// (0x00017310) list_single_hc_apps_pane_g2_ParamLimits

0xfcb9,	// (0x00018559) list_single_hc_apps_pane_g_ParamLimits

0xea89,	// (0x00017329) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xeaa5,	// (0x00017345) list_single_hc_apps_pane_t1_ParamLimits

0x66d8,	// (0x0000ef78) popup_toolbar2_fixed_window_ParamLimits

0x66d8,	// (0x0000ef78) popup_toolbar2_fixed_window

0x719b,	// (0x0000fa3b) popup_toolbar2_float_window

0x8762,	// (0x00011002) bg_popup_sub_pane_cp27

0xead3,	// (0x00017373) grid_toolbar2_float_pane

0x8762,	// (0x00011002) bg_popup_sub_pane_cp26

0xead3,	// (0x00017373) grid_toolbar2_fixed_pane

0xeadb,	// (0x0001737b) cell_toolbar2_fixed_pane_ParamLimits

0xeadb,	// (0x0001737b) cell_toolbar2_fixed_pane

0xeaec,	// (0x0001738c) cell_toolbar2_fixed_pane_g1

0xeaf5,	// (0x00017395) toolbar2_fixed_button_pane

0xac7b,	// (0x0001351b) toolbar2_fixed_button_pane_g1

0xac8b,	// (0x0001352b) toolbar2_fixed_button_pane_g2

0xac83,	// (0x00013523) toolbar2_fixed_button_pane_g3

0xac9b,	// (0x0001353b) toolbar2_fixed_button_pane_g4

0xac93,	// (0x00013533) toolbar2_fixed_button_pane_g5

0xaca3,	// (0x00013543) toolbar2_fixed_button_pane_g6

0xacab,	// (0x0001354b) toolbar2_fixed_button_pane_g7

0xacbb,	// (0x0001355b) toolbar2_fixed_button_pane_g8

0xacb3,	// (0x00013553) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x000180dc) toolbar2_fixed_button_pane_g

0xeafd,	// (0x0001739d) cell_toolbar2_float_pane_ParamLimits

0xeafd,	// (0x0001739d) cell_toolbar2_float_pane

0xeb0e,	// (0x000173ae) cell_toolbar2_float_pane_g1

0xeaf5,	// (0x00017395) toolbar2_fixed_button_pane_cp

0xd518,	// (0x00015db8) fep_vkb_accented_list_pane_ParamLimits

0xd518,	// (0x00015db8) fep_vkb_accented_list_pane

0x7987,	// (0x00010227) bg_popup_fep_shadow_pane_g9

0xa42f,	// (0x00012ccf) bg_popup_fep_shadow_pane_cp3

0x98f0,	// (0x00012190) list_accented_list_pane

0xeb17,	// (0x000173b7) list_single_accented_list_pane_ParamLimits

0xeb17,	// (0x000173b7) list_single_accented_list_pane

0xa42f,	// (0x00012ccf) list_highlight_pane_cp10

0xeb28,	// (0x000173c8) list_single_accented_list_pane_t1

0x7101,	// (0x0000f9a1) popup_slider_window_ParamLimits

0x7101,	// (0x0000f9a1) popup_slider_window

0xe65e,	// (0x00016efe) aid_indentation_list_msg

0xebc8,	// (0x00017468) bg_popup_window_pane_cp19

0xec2c,	// (0x000174cc) popup_slider_window_g1

0xec48,	// (0x000174e8) popup_slider_window_g2

0xec64,	// (0x00017504) popup_slider_window_g3

0x0005,

0xfcbe,	// (0x0001855e) popup_slider_window_g

0xecc0,	// (0x00017560) popup_slider_window_t1

0xed32,	// (0x000175d2) small_volume_slider_vertical_pane

0xd3ff,	// (0x00015c9f) small_volume_slider_vertical_pane_g1

0xd3ff,	// (0x00015c9f) small_volume_slider_vertical_pane_g2

0xed4e,	// (0x000175ee) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd0,	// (0x00018570) small_volume_slider_vertical_pane_g

0x654c,	// (0x0000edec) area_side_right_pane_ParamLimits

0x654c,	// (0x0000edec) area_side_right_pane

0x7b6f,	// (0x0001040f) aid_size_side_button_ParamLimits

0x7b6f,	// (0x0001040f) aid_size_side_button

0x7b83,	// (0x00010423) grid_sctrl_middle_pane_ParamLimits

0x7b83,	// (0x00010423) grid_sctrl_middle_pane

0x7b9f,	// (0x0001043f) sctrl_sk_bottom_pane

0x7bb0,	// (0x00010450) sctrl_sk_top_pane

0x7bc2,	// (0x00010462) aid_touch_sctrl_top

0x7bcf,	// (0x0001046f) bg_sctrl_sk_pane_ParamLimits

0x7bcf,	// (0x0001046f) bg_sctrl_sk_pane

0x7bdd,	// (0x0001047d) sctrl_sk_top_pane_g1

0x7bea,	// (0x0001048a) sctrl_sk_top_pane_t1

0x7bc2,	// (0x00010462) aid_touch_sctrl_bottom

0x7bcf,	// (0x0001046f) bg_sctrl_sk_pane_cp_ParamLimits

0x7bcf,	// (0x0001046f) bg_sctrl_sk_pane_cp

0x7c05,	// (0x000104a5) sctrl_sk_bottom_pane_g1

0x7bea,	// (0x0001048a) sctrl_sk_bottom_pane_t1

0x7c0e,	// (0x000104ae) cell_sctrl_middle_pane_ParamLimits

0x7c0e,	// (0x000104ae) cell_sctrl_middle_pane

0x7c29,	// (0x000104c9) aid_touch_sctrl_middle_ParamLimits

0x7c29,	// (0x000104c9) aid_touch_sctrl_middle

0x7c3a,	// (0x000104da) bg_sctrl_middle_pane_ParamLimits

0x7c3a,	// (0x000104da) bg_sctrl_middle_pane

0x79a7,	// (0x00010247) cell_sctrl_middle_pane_g1_ParamLimits

0x79a7,	// (0x00010247) cell_sctrl_middle_pane_g1

0x7c48,	// (0x000104e8) cell_sctrl_middle_pane_g2_ParamLimits

0x7c48,	// (0x000104e8) cell_sctrl_middle_pane_g2

0x0001,

0xfcdc,	// (0x0001857c) cell_sctrl_middle_pane_g_ParamLimits

0xfcdc,	// (0x0001857c) cell_sctrl_middle_pane_g

0xac7b,	// (0x0001351b) bg_sctrl_middle_pane_g1

0xac83,	// (0x00013523) bg_sctrl_middle_pane_g2

0xac8b,	// (0x0001352b) bg_sctrl_middle_pane_g3

0xac93,	// (0x00013533) bg_sctrl_middle_pane_g4

0xac9b,	// (0x0001353b) bg_sctrl_middle_pane_g5

0xaca3,	// (0x00013543) bg_sctrl_middle_pane_g6

0xacab,	// (0x0001354b) bg_sctrl_middle_pane_g7

0xacb3,	// (0x00013553) bg_sctrl_middle_pane_g8

0x0007,

0xfce1,	// (0x00018581) bg_sctrl_middle_pane_g

0xacbb,	// (0x0001355b) bg_sctrl_middle_pane_g8_copy1

0xac7b,	// (0x0001351b) bg_sctrl_sk_pane_g1

0xac8b,	// (0x0001352b) bg_sctrl_sk_pane_g2

0xac83,	// (0x00013523) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x000180dc) bg_sctrl_sk_pane_g

0x9060,	// (0x00011900) aid_size_touch_scroll_bar

0xac9b,	// (0x0001353b) bg_sctrl_sk_pane_g4

0xac93,	// (0x00013533) bg_sctrl_sk_pane_g5

0xaca3,	// (0x00013543) bg_sctrl_sk_pane_g6

0xacab,	// (0x0001354b) bg_sctrl_sk_pane_g7

0xacbb,	// (0x0001355b) bg_sctrl_sk_pane_g8

0xacb3,	// (0x00013553) bg_sctrl_sk_pane_g9

0x6e34,	// (0x0000f6d4) popup_fep_china_hwr2_fs_candidate_window

0x6e3c,	// (0x0000f6dc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6e3c,	// (0x0000f6dc) popup_fep_china_hwr2_fs_control_window

0x79a7,	// (0x00010247) sctrl_sk_top_pane_g2

0x0001,

0xfcd7,	// (0x00018577) sctrl_sk_top_pane_g

0xed57,	// (0x000175f7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xed57,	// (0x000175f7) aid_fep_china_hwr2_fs_cell

0xed68,	// (0x00017608) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xed68,	// (0x00017608) bg_popup_fep_shadow_pane_cp4

0xed7f,	// (0x0001761f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xed7f,	// (0x0001761f) bg_popup_fep_shadow_pane_cp5

0xed91,	// (0x00017631) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xed91,	// (0x00017631) popup_fep_china_hwr2_fs_control_bar_grid

0xeda1,	// (0x00017641) popup_fep_china_hwr2_fs_control_funtion_grid

0xeda9,	// (0x00017649) aid_fep_china_hwr2_fs_candi_cell

0x8762,	// (0x00011002) bg_popup_fep_shadow_pane_cp6

0xedb3,	// (0x00017653) popup_fep_china_hwr2_fs_candidate_grid

0xedbb,	// (0x0001765b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xedbb,	// (0x0001765b) cell_fep_china_hwr2_fs_funtion_grid

0xd3ff,	// (0x00015c9f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xedd3,	// (0x00017673) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xedd3,	// (0x00017673) cell_fep_china_hwr2_fs_funtion_grid_g1

0xede1,	// (0x00017681) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xede1,	// (0x00017681) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf2,	// (0x00018592) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf2,	// (0x00018592) cell_fep_china_hwr2_fs_funtion_grid_g

0xedf7,	// (0x00017697) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xedf7,	// (0x00017697) cell_fep_china_hwr2_fs_funtion_grid_t1

0xee0c,	// (0x000176ac) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xee0c,	// (0x000176ac) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf7,	// (0x00018597) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf7,	// (0x00018597) cell_fep_china_hwr2_fs_funtion_grid_t

0xee28,	// (0x000176c8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xee30,	// (0x000176d0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xee38,	// (0x000176d8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfc,	// (0x0001859c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xee40,	// (0x000176e0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xee40,	// (0x000176e0) cell_fep_china_hwr2_fs_candidate_grid

0xee59,	// (0x000176f9) popup_fep_china_hwr2_fs_candidate_grid_g20

0xee61,	// (0x00017701) popup_fep_china_hwr2_fs_candidate_grid_g21

0xd3ff,	// (0x00015c9f) cell_fep_china_hwr2_fs_candidate_grid_g1

0xd3ff,	// (0x00015c9f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb17,	// (0x000183b7) cell_fep_china_hwr2_fs_candidate_grid_g

0xee69,	// (0x00017709) cell_fep_china_hwr2_fs_candidate_grid_t1

0xa873,	// (0x00013113) clock_nsta_pane_cp_24_ParamLimits

0xa873,	// (0x00013113) clock_nsta_pane_cp_24

0xa8e6,	// (0x00013186) indicator_nsta_pane_cp_24_ParamLimits

0xa8e6,	// (0x00013186) indicator_nsta_pane_cp_24

0xb993,	// (0x00014233) heading_pane_g1

0x0001,

0xf8a1,	// (0x00018141) heading_pane_g

0xc3dc,	// (0x00014c7c) grid_sct_catagory_button_pane

0xc40c,	// (0x00014cac) scroll_pane_cp5_ParamLimits

0xd070,	// (0x00015910) button_value_adjust_pane_cp5_ParamLimits

0xd070,	// (0x00015910) button_value_adjust_pane_cp5

0xd166,	// (0x00015a06) form2_midp_time_pane_ParamLimits

0xee77,	// (0x00017717) cell_sct_catagory_button_pane_ParamLimits

0xee77,	// (0x00017717) cell_sct_catagory_button_pane

0xd3c4,	// (0x00015c64) bg_button_pane_cp01_ParamLimits

0xd3c4,	// (0x00015c64) bg_button_pane_cp01

0xd3ff,	// (0x00015c9f) cell_sct_catagory_button_pane_g1

0x7138,	// (0x0000f9d8) popup_tb_extension_window

0xee89,	// (0x00017729) aid_size_cell_ext_ParamLimits

0xee89,	// (0x00017729) aid_size_cell_ext

0x8bdb,	// (0x0001147b) bg_tb_trans_pane_cp1_ParamLimits

0x8bdb,	// (0x0001147b) bg_tb_trans_pane_cp1

0xeea9,	// (0x00017749) grid_tb_ext_pane_ParamLimits

0xeea9,	// (0x00017749) grid_tb_ext_pane

0xeecf,	// (0x0001776f) cell_tb_ext_pane_ParamLimits

0xeecf,	// (0x0001776f) cell_tb_ext_pane

0xeee4,	// (0x00017784) cell_tb_ext_pane_g1_ParamLimits

0xeee4,	// (0x00017784) cell_tb_ext_pane_g1

0xef01,	// (0x000177a1) cell_tb_ext_pane_t1

0x8bdb,	// (0x0001147b) list_highlight_pane_cp11_ParamLimits

0x8bdb,	// (0x0001147b) list_highlight_pane_cp11

0x66f7,	// (0x0000ef97) popup_uni_indicator_window_ParamLimits

0x66f7,	// (0x0000ef97) popup_uni_indicator_window

0x9632,	// (0x00011ed2) bg_popup_sub_pane_cp14

0xef1c,	// (0x000177bc) list_uniindi_pane

0xef28,	// (0x000177c8) uniindi_top_pane

0x8bdb,	// (0x0001147b) bg_uniindi_top_pane

0xef47,	// (0x000177e7) uniindi_top_pane_g1

0xef5d,	// (0x000177fd) uniindi_top_pane_g2

0x0003,

0xfd03,	// (0x000185a3) uniindi_top_pane_g

0xef87,	// (0x00017827) uniindi_top_pane_t1

0xefb1,	// (0x00017851) list_single_uniindi_pane_ParamLimits

0xefb1,	// (0x00017851) list_single_uniindi_pane

0xd3ff,	// (0x00015c9f) bg_uniindi_top_pane_g1

0xefc3,	// (0x00017863) list_single_uniindi_pane_g1

0xefd6,	// (0x00017876) list_single_uniindi_pane_t1

0x6595,	// (0x0000ee35) control_bg_pane

0xeffb,	// (0x0001789b) bg_sctrl_sk_pane_cp1

0xf004,	// (0x000178a4) bg_sctrl_sk_pane_cp2

0xf00d,	// (0x000178ad) control_bg_pane_g1

0xf016,	// (0x000178b6) control_bg_pane_g2

0x0001,

0xfd0c,	// (0x000185ac) control_bg_pane_g

0xcec3,	// (0x00015763) cell_indicator_nsta_pane_g1_ParamLimits

0xced1,	// (0x00015771) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7b,	// (0x0001831b) cell_indicator_nsta_pane_g_ParamLimits

0xd1ce,	// (0x00015a6e) form2_midp_time_pane_t1_ParamLimits

0x6daa,	// (0x0000f64a) main_idle_act4_pane_ParamLimits

0x6daa,	// (0x0000f64a) main_idle_act4_pane

0x7138,	// (0x0000f9d8) popup_tb_extension_window_ParamLimits

0xeec3,	// (0x00017763) tb_ext_find_pane_ParamLimits

0xeec3,	// (0x00017763) tb_ext_find_pane

0xf01f,	// (0x000178bf) ai_gene_pane_1_cp1

0xa56a,	// (0x00012e0a) ai_gene_pane_2_cp1

0xf027,	// (0x000178c7) list_single_idle_plugin_calendar_pane

0xf030,	// (0x000178d0) list_single_idle_plugin_notification_pane

0xf039,	// (0x000178d9) list_single_idle_plugin_player_pane

0xf042,	// (0x000178e2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf042,	// (0x000178e2) list_single_idle_plugin_shortcut_pane

0xf064,	// (0x00017904) main_idle_act4_pane_t1

0xf076,	// (0x00017916) main_idle_act4_pane_t2

0x0001,

0xfd11,	// (0x000185b1) main_idle_act4_pane_t

0xf088,	// (0x00017928) middle_sk_idle_act4_pane_ParamLimits

0xf088,	// (0x00017928) middle_sk_idle_act4_pane

0xf09e,	// (0x0001793e) popup_clock_digital_analogue_window_cp2

0xf0b8,	// (0x00017958) shortcut_wheel_idle_act4_pane_ParamLimits

0xf0b8,	// (0x00017958) shortcut_wheel_idle_act4_pane

0xd3ff,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g1

0xd3ff,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g2

0xd3ff,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g3

0xd3ff,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g4

0xd3ff,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g5

0xf0cc,	// (0x0001796c) shortcut_wheel_idle_act4_pane_g6

0xf0d4,	// (0x00017974) shortcut_wheel_idle_act4_pane_g7

0xf0dc,	// (0x0001797c) shortcut_wheel_idle_act4_pane_g8

0xf0e4,	// (0x00017984) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd16,	// (0x000185b6) shortcut_wheel_idle_act4_pane_g

0xd637,	// (0x00015ed7) middle_sk_idle_act4_pane_g1_ParamLimits

0xd637,	// (0x00015ed7) middle_sk_idle_act4_pane_g1

0xf148,	// (0x000179e8) middle_sk_idle_act4_pane_g2_ParamLimits

0xf148,	// (0x000179e8) middle_sk_idle_act4_pane_g2

0x0001,

0xfd39,	// (0x000185d9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd39,	// (0x000185d9) middle_sk_idle_act4_pane_g

0xf154,	// (0x000179f4) middle_sk_idle_act4_pane_t1_ParamLimits

0xf154,	// (0x000179f4) middle_sk_idle_act4_pane_t1

0xf171,	// (0x00017a11) grid_ai_shortcut_pane_ParamLimits

0xf171,	// (0x00017a11) grid_ai_shortcut_pane

0xf18a,	// (0x00017a2a) list_highlight_pane_cp16_ParamLimits

0xf18a,	// (0x00017a2a) list_highlight_pane_cp16

0xf197,	// (0x00017a37) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf197,	// (0x00017a37) list_single_idle_plugin_shortcut_pane_g1

0xf1a3,	// (0x00017a43) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf1a3,	// (0x00017a43) list_single_idle_plugin_shortcut_pane_g2

0xf1bb,	// (0x00017a5b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf1bb,	// (0x00017a5b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3e,	// (0x000185de) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3e,	// (0x000185de) list_single_idle_plugin_shortcut_pane_g

0xf1ce,	// (0x00017a6e) cell_ai_shortcut_pane_ParamLimits

0xf1ce,	// (0x00017a6e) cell_ai_shortcut_pane

0xf1ef,	// (0x00017a8f) cell_ai_shortcut_pane_g1_ParamLimits

0xf1ef,	// (0x00017a8f) cell_ai_shortcut_pane_g1

0xf01f,	// (0x000178bf) ai_gene_pane_1_cp2

0xf211,	// (0x00017ab1) ai_gene_pane_2_cp2

0xf219,	// (0x00017ab9) list_highlight_pane_cp15

0xf222,	// (0x00017ac2) list_single_idle_plugin_calendar_pane_g1

0xf219,	// (0x00017ab9) list_highlight_pane_cp17

0xf22a,	// (0x00017aca) list_single_idle_plugin_calendar_pane_g1_copy1

0xf232,	// (0x00017ad2) list_single_idle_plugin_player_pane_g1

0xc5da,	// (0x00014e7a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd45,	// (0x000185e5) list_single_idle_plugin_player_pane_g

0xf23a,	// (0x00017ada) list_single_idle_plugin_player_pane_t1

0xf248,	// (0x00017ae8) list_single_idle_plugin_player_pane_t2

0xf256,	// (0x00017af6) list_single_idle_plugin_player_pane_t3

0xf264,	// (0x00017b04) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4a,	// (0x000185ea) list_single_idle_plugin_player_pane_t

0xf272,	// (0x00017b12) wait_bar_pane_cp15

0xf27a,	// (0x00017b1a) grid_ai_notification_pane

0xc5da,	// (0x00014e7a) list_single_idle_plugin_notification_pane_g1

0xf283,	// (0x00017b23) cell_ai_notification_pane_ParamLimits

0xf283,	// (0x00017b23) cell_ai_notification_pane

0xf290,	// (0x00017b30) cell_ai_notification_pane_g1

0xf298,	// (0x00017b38) cell_ai_notification_pane_t1

0xf2a6,	// (0x00017b46) tb_ext_find_button_pane

0xf2ae,	// (0x00017b4e) tb_ext_find_pane_g1

0xf2b6,	// (0x00017b56) tb_ext_find_pane_t1

0x9e00,	// (0x000126a0) tb_ext_find_button_pane_g1

0xf2c4,	// (0x00017b64) tb_ext_find_button_pane_g2

0x0001,

0xfd53,	// (0x000185f3) tb_ext_find_button_pane_g

0xf064,	// (0x00017904) main_idle_act4_pane_t1_ParamLimits

0xf076,	// (0x00017916) main_idle_act4_pane_t2_ParamLimits

0xfd11,	// (0x000185b1) main_idle_act4_pane_t_ParamLimits

0xf09e,	// (0x0001793e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf0ac,	// (0x0001794c) sat_plugin_idle_act4_pane_ParamLimits

0xf0ac,	// (0x0001794c) sat_plugin_idle_act4_pane

0xf2cd,	// (0x00017b6d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf2cd,	// (0x00017b6d) sat_plugin_idle_act4_pane_t1

0xf2e0,	// (0x00017b80) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf2e0,	// (0x00017b80) sat_plugin_idle_act4_pane_t2

0xf2f3,	// (0x00017b93) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf2f3,	// (0x00017b93) sat_plugin_idle_act4_pane_t3

0xf306,	// (0x00017ba6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf306,	// (0x00017ba6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd58,	// (0x000185f8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd58,	// (0x000185f8) sat_plugin_idle_act4_pane_t

0x6658,	// (0x0000eef8) popup_battery_window_ParamLimits

0x6658,	// (0x0000eef8) popup_battery_window

0x8bdb,	// (0x0001147b) bg_popup_sub_pane_cp25_ParamLimits

0x8bdb,	// (0x0001147b) bg_popup_sub_pane_cp25

0xf319,	// (0x00017bb9) popup_battery_window_g1_ParamLimits

0xf319,	// (0x00017bb9) popup_battery_window_g1

0xf325,	// (0x00017bc5) popup_battery_window_t1_ParamLimits

0xf325,	// (0x00017bc5) popup_battery_window_t1

0xf337,	// (0x00017bd7) popup_battery_window_t2_ParamLimits

0xf337,	// (0x00017bd7) popup_battery_window_t2

0x0001,

0xfd61,	// (0x00018601) popup_battery_window_t_ParamLimits

0xfd61,	// (0x00018601) popup_battery_window_t

0xa443,	// (0x00012ce3) midp_canvas_pane_ParamLimits

0xa4b2,	// (0x00012d52) midp_keypad_pane_ParamLimits

0xa4b2,	// (0x00012d52) midp_keypad_pane

0xa77e,	// (0x0001301e) main_midp_pane_ParamLimits

0xcf49,	// (0x000157e9) signal_pane_g2_cp_ParamLimits

0xf354,	// (0x00017bf4) aid_size_cell_midp_keypad_ParamLimits

0xf354,	// (0x00017bf4) aid_size_cell_midp_keypad

0xf36e,	// (0x00017c0e) midp_keyp_game_grid_pane_ParamLimits

0xf36e,	// (0x00017c0e) midp_keyp_game_grid_pane

0xf388,	// (0x00017c28) midp_keyp_rocker_pane_ParamLimits

0xf388,	// (0x00017c28) midp_keyp_rocker_pane

0xf3b5,	// (0x00017c55) midp_keyp_sk_left_pane_ParamLimits

0xf3b5,	// (0x00017c55) midp_keyp_sk_left_pane

0xf40d,	// (0x00017cad) midp_keyp_sk_right_pane_ParamLimits

0xf40d,	// (0x00017cad) midp_keyp_sk_right_pane

0x8762,	// (0x00011002) bg_button_pane_cp03

0xf45f,	// (0x00017cff) midp_keyp_sk_left_pane_g1

0x8762,	// (0x00011002) bg_button_pane_cp04

0xf45f,	// (0x00017cff) midp_keyp_sk_right_pane_g1

0xd3ff,	// (0x00015c9f) midp_keyp_rocker_pane_g1

0xf468,	// (0x00017d08) keyp_game_cell_pane_ParamLimits

0xf468,	// (0x00017d08) keyp_game_cell_pane

0x8762,	// (0x00011002) bg_button_pane_cp02

0xf479,	// (0x00017d19) keyp_game_cell_pane_g1

0x668e,	// (0x0000ef2e) popup_fep_vkb2_window_ParamLimits

0x668e,	// (0x0000ef2e) popup_fep_vkb2_window

0x7c6c,	// (0x0001050c) aid_size_cell_vkb2_ParamLimits

0x7c6c,	// (0x0001050c) aid_size_cell_vkb2

0x7cb8,	// (0x00010558) popup_fep_vkb2_window_g1_ParamLimits

0x7cb8,	// (0x00010558) popup_fep_vkb2_window_g1

0x7d00,	// (0x000105a0) vkb2_area_bottom_pane_ParamLimits

0x7d00,	// (0x000105a0) vkb2_area_bottom_pane

0x7d38,	// (0x000105d8) vkb2_area_keypad_pane_ParamLimits

0x7d38,	// (0x000105d8) vkb2_area_keypad_pane

0x7d70,	// (0x00010610) vkb2_area_top_pane_ParamLimits

0x7d70,	// (0x00010610) vkb2_area_top_pane

0x7de5,	// (0x00010685) vkb2_top_entry_pane_ParamLimits

0x7de5,	// (0x00010685) vkb2_top_entry_pane

0x7e0f,	// (0x000106af) vkb2_top_grid_left_pane_ParamLimits

0x7e0f,	// (0x000106af) vkb2_top_grid_left_pane

0x7e2e,	// (0x000106ce) vkb2_top_grid_right_pane_ParamLimits

0x7e2e,	// (0x000106ce) vkb2_top_grid_right_pane

0x7e4d,	// (0x000106ed) vkb2_cell_keypad_pane_ParamLimits

0x7e4d,	// (0x000106ed) vkb2_cell_keypad_pane

0x7efe,	// (0x0001079e) vkb2_area_bottom_grid_pane_ParamLimits

0x7efe,	// (0x0001079e) vkb2_area_bottom_grid_pane

0x7f22,	// (0x000107c2) vkb2_area_bottom_pane_g1_ParamLimits

0x7f22,	// (0x000107c2) vkb2_area_bottom_pane_g1

0x7f46,	// (0x000107e6) vkb2_area_bottom_pane_g2_ParamLimits

0x7f46,	// (0x000107e6) vkb2_area_bottom_pane_g2

0x7f74,	// (0x00010814) vkb2_area_bottom_pane_g3_ParamLimits

0x7f74,	// (0x00010814) vkb2_area_bottom_pane_g3

0x0002,

0xfd66,	// (0x00018606) vkb2_area_bottom_pane_g_ParamLimits

0xfd66,	// (0x00018606) vkb2_area_bottom_pane_g

0x7fc5,	// (0x00010865) vkb2_top_cell_left_pane_ParamLimits

0x7fc5,	// (0x00010865) vkb2_top_cell_left_pane

0xf48a,	// (0x00017d2a) vkb2_top_entry_pane_g1_ParamLimits

0xf48a,	// (0x00017d2a) vkb2_top_entry_pane_g1

0xf498,	// (0x00017d38) vkb2_top_entry_pane_t1_ParamLimits

0xf498,	// (0x00017d38) vkb2_top_entry_pane_t1

0xf4ca,	// (0x00017d6a) vkb2_top_entry_pane_t2_ParamLimits

0xf4ca,	// (0x00017d6a) vkb2_top_entry_pane_t2

0xf4fc,	// (0x00017d9c) vkb2_top_entry_pane_t3_ParamLimits

0xf4fc,	// (0x00017d9c) vkb2_top_entry_pane_t3

0x0002,

0xfd6d,	// (0x0001860d) vkb2_top_entry_pane_t_ParamLimits

0xfd6d,	// (0x0001860d) vkb2_top_entry_pane_t

0x8012,	// (0x000108b2) vkb2_top_grid_right_pane_g1_ParamLimits

0x8012,	// (0x000108b2) vkb2_top_grid_right_pane_g1

0x8028,	// (0x000108c8) vkb2_top_grid_right_pane_g2_ParamLimits

0x8028,	// (0x000108c8) vkb2_top_grid_right_pane_g2

0x8040,	// (0x000108e0) vkb2_top_grid_right_pane_g3_ParamLimits

0x8040,	// (0x000108e0) vkb2_top_grid_right_pane_g3

0x8058,	// (0x000108f8) vkb2_top_grid_right_pane_g4_ParamLimits

0x8058,	// (0x000108f8) vkb2_top_grid_right_pane_g4

0x0003,

0xfd74,	// (0x00018614) vkb2_top_grid_right_pane_g_ParamLimits

0xfd74,	// (0x00018614) vkb2_top_grid_right_pane_g

0x806e,	// (0x0001090e) vkb2_top_cell_left_pane_g1

0x8085,	// (0x00010925) vkb2_cell_keypad_pane_g1_ParamLimits

0x8085,	// (0x00010925) vkb2_cell_keypad_pane_g1

0xf512,	// (0x00017db2) vkb2_cell_keypad_pane_t1_ParamLimits

0xf512,	// (0x00017db2) vkb2_cell_keypad_pane_t1

0x8093,	// (0x00010933) vkb2_cell_bottom_grid_pane_ParamLimits

0x8093,	// (0x00010933) vkb2_cell_bottom_grid_pane

0x80cc,	// (0x0001096c) vkb2_cell_bottom_grid_pane_g1

0xf0ec,	// (0x0001798c) aid_call2_pane_cp02

0xf0f4,	// (0x00017994) aid_call_pane_cp02

0xf0fc,	// (0x0001799c) clock_digital_number_pane_cp10

0xf104,	// (0x000179a4) clock_digital_number_pane_cp11

0xf10c,	// (0x000179ac) clock_digital_number_pane_cp12

0xf114,	// (0x000179b4) clock_digital_number_pane_cp13

0xf11c,	// (0x000179bc) clock_digital_separator_pane_cp10

0x9e00,	// (0x000126a0) popup_clock_digital_analogue_window_cp2_g1

0x9e00,	// (0x000126a0) popup_clock_digital_analogue_window_cp2_g2

0xf124,	// (0x000179c4) popup_clock_digital_analogue_window_cp2_g3

0x9e00,	// (0x000126a0) popup_clock_digital_analogue_window_cp2_g4

0xf124,	// (0x000179c4) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd29,	// (0x000185c9) popup_clock_digital_analogue_window_cp2_g

0xf12c,	// (0x000179cc) popup_clock_digital_analogue_window_cp2_t1

0xf13a,	// (0x000179da) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd34,	// (0x000185d4) popup_clock_digital_analogue_window_cp2_t

0xd3ff,	// (0x00015c9f) clock_digital_number_pane_cp10_g1

0xd3ff,	// (0x00015c9f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb17,	// (0x000183b7) clock_digital_number_pane_cp10_g

0xd3ff,	// (0x00015c9f) clock_digital_separator_pane_cp10_g1

0xd3ff,	// (0x00015c9f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb17,	// (0x000183b7) clock_digital_separator_pane_cp10_g

0xef69,	// (0x00017809) uniindi_top_pane_g3

0xef7a,	// (0x0001781a) uniindi_top_pane_g4

0x7eb8,	// (0x00010758) vkb2_row_keypad_pane_ParamLimits

0x7eb8,	// (0x00010758) vkb2_row_keypad_pane

0x80e8,	// (0x00010988) vkb2_cell_t_keypad_pane_ParamLimits

0x80e8,	// (0x00010988) vkb2_cell_t_keypad_pane

0x80f5,	// (0x00010995) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x80f5,	// (0x00010995) vkb2_cell_t_keypad_pane_cp08

0x8105,	// (0x000109a5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8105,	// (0x000109a5) vkb2_cell_t_keypad_pane_cp09

0x8116,	// (0x000109b6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8116,	// (0x000109b6) vkb2_cell_t_keypad_pane_cp01

0x8126,	// (0x000109c6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8126,	// (0x000109c6) vkb2_cell_t_keypad_pane_cp02

0x8136,	// (0x000109d6) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8136,	// (0x000109d6) vkb2_cell_t_keypad_pane_cp03

0x8146,	// (0x000109e6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8146,	// (0x000109e6) vkb2_cell_t_keypad_pane_cp04

0x8156,	// (0x000109f6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8156,	// (0x000109f6) vkb2_cell_t_keypad_pane_cp05

0x8166,	// (0x00010a06) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8166,	// (0x00010a06) vkb2_cell_t_keypad_pane_cp06

0x8176,	// (0x00010a16) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8176,	// (0x00010a16) vkb2_cell_t_keypad_pane_cp07

0x8186,	// (0x00010a26) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8186,	// (0x00010a26) vkb2_cell_t_keypad_pane_cp10

0x79a7,	// (0x00010247) vkb2_cell_t_keypad_pane_g1

0x00df,	// (0x0000897f) vkb2_cell_t_keypad_pane_t1

0x6595,	// (0x0000ee35) popup_grid_graphic2_window

0x00f1,	// (0x00008991) aid_size_cell_graphic2_ParamLimits

0x00f1,	// (0x00008991) aid_size_cell_graphic2

0x0129,	// (0x000089c9) bg_popup_window_pane_cp21_ParamLimits

0x0129,	// (0x000089c9) bg_popup_window_pane_cp21

0x0137,	// (0x000089d7) graphic2_pages_pane_ParamLimits

0x0137,	// (0x000089d7) graphic2_pages_pane

0x0171,	// (0x00008a11) grid_graphic2_control_pane_ParamLimits

0x0171,	// (0x00008a11) grid_graphic2_control_pane

0x01a7,	// (0x00008a47) grid_graphic2_pane_ParamLimits

0x01a7,	// (0x00008a47) grid_graphic2_pane

0x0207,	// (0x00008aa7) cell_graphic2_pane

0x6595,	// (0x0000ee35) main_comp_mode_pane

0xe805,	// (0x000170a5) list_ai3_gene_pane_ParamLimits

0xebc8,	// (0x00017468) bg_popup_window_pane_cp19_ParamLimits

0xebd4,	// (0x00017474) bg_touch_area_indi_pane_ParamLimits

0xebd4,	// (0x00017474) bg_touch_area_indi_pane

0xebea,	// (0x0001748a) bg_touch_area_indi_pane_cp01_ParamLimits

0xebea,	// (0x0001748a) bg_touch_area_indi_pane_cp01

0xec00,	// (0x000174a0) bg_touch_area_indi_pane_cp02_ParamLimits

0xec00,	// (0x000174a0) bg_touch_area_indi_pane_cp02

0xec16,	// (0x000174b6) bg_touch_area_indi_pane_cp03_ParamLimits

0xec16,	// (0x000174b6) bg_touch_area_indi_pane_cp03

0xec2c,	// (0x000174cc) popup_slider_window_g1_ParamLimits

0xec48,	// (0x000174e8) popup_slider_window_g2_ParamLimits

0xec64,	// (0x00017504) popup_slider_window_g3_ParamLimits

0xfcbe,	// (0x0001855e) popup_slider_window_g_ParamLimits

0xecc0,	// (0x00017560) popup_slider_window_t1_ParamLimits

0xed32,	// (0x000175d2) small_volume_slider_vertical_pane_ParamLimits

0x0207,	// (0x00008aa7) cell_graphic2_pane_ParamLimits

0x0243,	// (0x00008ae3) bg_button_pane_cp10_ParamLimits

0x0243,	// (0x00008ae3) bg_button_pane_cp10

0x0254,	// (0x00008af4) bg_button_pane_cp11_ParamLimits

0x0254,	// (0x00008af4) bg_button_pane_cp11

0x0265,	// (0x00008b05) graphic2_pages_pane_g1_ParamLimits

0x0265,	// (0x00008b05) graphic2_pages_pane_g1

0x0278,	// (0x00008b18) graphic2_pages_pane_g2_ParamLimits

0x0278,	// (0x00008b18) graphic2_pages_pane_g2

0x0001,

0xfd82,	// (0x00018622) graphic2_pages_pane_g_ParamLimits

0xfd82,	// (0x00018622) graphic2_pages_pane_g

0x028e,	// (0x00008b2e) graphic2_pages_pane_t1_ParamLimits

0x028e,	// (0x00008b2e) graphic2_pages_pane_t1

0x02a4,	// (0x00008b44) cell_graphic2_control_pane_ParamLimits

0x02a4,	// (0x00008b44) cell_graphic2_control_pane

0x02c3,	// (0x00008b63) cell_graphic2_pane_g1_ParamLimits

0x02c3,	// (0x00008b63) cell_graphic2_pane_g1

0x02d0,	// (0x00008b70) cell_graphic2_pane_g2_ParamLimits

0x02d0,	// (0x00008b70) cell_graphic2_pane_g2

0x02dd,	// (0x00008b7d) cell_graphic2_pane_g3_ParamLimits

0x02dd,	// (0x00008b7d) cell_graphic2_pane_g3

0x02ea,	// (0x00008b8a) cell_graphic2_pane_g4_ParamLimits

0x02ea,	// (0x00008b8a) cell_graphic2_pane_g4

0x02f7,	// (0x00008b97) cell_graphic2_pane_g5_ParamLimits

0x02f7,	// (0x00008b97) cell_graphic2_pane_g5

0x0004,

0xfd87,	// (0x00018627) cell_graphic2_pane_g_ParamLimits

0xfd87,	// (0x00018627) cell_graphic2_pane_g

0x0310,	// (0x00008bb0) cell_graphic2_pane_t1_ParamLimits

0x0310,	// (0x00008bb0) cell_graphic2_pane_t1

0xad93,	// (0x00013633) grid_highlight_pane_cp11_ParamLimits

0xad93,	// (0x00013633) grid_highlight_pane_cp11

0x8bdb,	// (0x0001147b) bg_button_pane_cp05

0x0338,	// (0x00008bd8) cell_graphic2_control_pane_g1

0xd3ff,	// (0x00015c9f) bg_touch_area_indi_pane_g1

0x0360,	// (0x00008c00) aid_cmod_rocker_key_size

0x036a,	// (0x00008c0a) aid_cmode_itu_key_size

0x0374,	// (0x00008c14) main_cmode_video_pane

0x037c,	// (0x00008c1c) main_comp_mode_itu_pane

0x0386,	// (0x00008c26) main_comp_mode_rocker_pane

0x038e,	// (0x00008c2e) cell_cmode_rocker_pane_ParamLimits

0x038e,	// (0x00008c2e) cell_cmode_rocker_pane

0x03a0,	// (0x00008c40) cell_cmode_itu_pane_ParamLimits

0x03a0,	// (0x00008c40) cell_cmode_itu_pane

0x9632,	// (0x00011ed2) bg_button_pane_cp06_ParamLimits

0x9632,	// (0x00011ed2) bg_button_pane_cp06

0xd637,	// (0x00015ed7) cell_cmode_rocker_pane_g1_ParamLimits

0xd637,	// (0x00015ed7) cell_cmode_rocker_pane_g1

0xedd3,	// (0x00017673) cell_cmode_rocker_pane_g2_ParamLimits

0xedd3,	// (0x00017673) cell_cmode_rocker_pane_g2

0x0001,

0xfd97,	// (0x00018637) cell_cmode_rocker_pane_g_ParamLimits

0xfd97,	// (0x00018637) cell_cmode_rocker_pane_g

0x8762,	// (0x00011002) bg_button_pane_cp07

0x03b5,	// (0x00008c55) cell_cmode_itu_pane_g1

0x03be,	// (0x00008c5e) cell_cmode_itu_pane_t1

0x03cc,	// (0x00008c6c) cell_cmode_itu_pane_t2

0x0001,

0xfd9c,	// (0x0001863c) cell_cmode_itu_pane_t

0xefeb,	// (0x0001788b) aid_touch_ctrl_left

0xeff3,	// (0x00017893) aid_touch_ctrl_right

0x8762,	// (0x00011002) compa_mode_pane

0x03da,	// (0x00008c7a) aid_cmod_rocker_key_size_cp

0x03e4,	// (0x00008c84) aid_cmode_itu_key_size_cp

0x03ee,	// (0x00008c8e) compa_mode_pane_g1

0x03f6,	// (0x00008c96) compa_mode_pane_g2

0x03fe,	// (0x00008c9e) compa_mode_pane_g3

0x0002,

0xfda1,	// (0x00018641) compa_mode_pane_g

0x0406,	// (0x00008ca6) main_comp_mode_itu_pane_cp

0x040e,	// (0x00008cae) main_comp_mode_rocker_pane_cp

0x0416,	// (0x00008cb6) cell_cmode_itu_pane_cp_ParamLimits

0x0416,	// (0x00008cb6) cell_cmode_itu_pane_cp

0x042b,	// (0x00008ccb) cell_cmode_rocker_pane_cp_ParamLimits

0x042b,	// (0x00008ccb) cell_cmode_rocker_pane_cp

0x9632,	// (0x00011ed2) bg_button_pane_cp06_cp_ParamLimits

0x9632,	// (0x00011ed2) bg_button_pane_cp06_cp

0xd637,	// (0x00015ed7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd637,	// (0x00015ed7) cell_cmode_rocker_pane_g1_cp

0xd3ff,	// (0x00015c9f) cell_cmode_rocker_pane_g2_cp

0x8762,	// (0x00011002) bg_button_pane_cp07_cp

0x043d,	// (0x00008cdd) cell_cmode_itu_pane_g1_cp

0x0446,	// (0x00008ce6) cell_cmode_itu_pane_t1_cp

0x0454,	// (0x00008cf4) cell_cmode_itu_pane_t2_cp

0xc16a,	// (0x00014a0a) settings_code_pane_cp2

0x8933,	// (0x000111d3) bg_popup_window_pane_cp3_ParamLimits

0x8dd9,	// (0x00011679) heading_pane_cp3_ParamLimits

0x8de8,	// (0x00011688) listscroll_popup_graphic_pane_ParamLimits

0x7762,	// (0x00010002) fep_hwr_aid_pane_ParamLimits

0x7bc2,	// (0x00010462) aid_touch_sctrl_top_ParamLimits

0x7bdd,	// (0x0001047d) sctrl_sk_top_pane_g1_ParamLimits

0x79a7,	// (0x00010247) sctrl_sk_top_pane_g2_ParamLimits

0xfcd7,	// (0x00018577) sctrl_sk_top_pane_g_ParamLimits

0x7bea,	// (0x0001048a) sctrl_sk_top_pane_t1_ParamLimits

0x7bc2,	// (0x00010462) aid_touch_sctrl_bottom_ParamLimits

0x7bea,	// (0x0001048a) sctrl_sk_bottom_pane_t1_ParamLimits

0xef35,	// (0x000177d5) aid_area_touch_clock

0x7dac,	// (0x0001064c) aid_vkb2_area_top_pane_cell_ParamLimits

0x7dac,	// (0x0001064c) aid_vkb2_area_top_pane_cell

0x7eda,	// (0x0001077a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7eda,	// (0x0001077a) aid_vkb2_area_bottom_pane_cell

0xf482,	// (0x00017d22) popup_char_count_window

0x0462,	// (0x00008d02) popup_char_count_window_g1

0x046b,	// (0x00008d0b) popup_char_count_window_g2

0x0474,	// (0x00008d14) popup_char_count_window_g3

0x0002,

0xfda8,	// (0x00018648) popup_char_count_window_g

0x047d,	// (0x00008d1d) popup_char_count_window_t1

0x7c96,	// (0x00010536) popup_fep_char_preview_window_ParamLimits

0x7c96,	// (0x00010536) popup_fep_char_preview_window

0x7dca,	// (0x0001066a) vkb2_top_candi_pane_ParamLimits

0x7dca,	// (0x0001066a) vkb2_top_candi_pane

0x048b,	// (0x00008d2b) cell_vkb2_top_candi_pane_ParamLimits

0x048b,	// (0x00008d2b) cell_vkb2_top_candi_pane

0x819b,	// (0x00010a3b) bg_popup_fep_char_preview_window_ParamLimits

0x819b,	// (0x00010a3b) bg_popup_fep_char_preview_window

0x81a9,	// (0x00010a49) popup_fep_char_preview_window_t1_ParamLimits

0x81a9,	// (0x00010a49) popup_fep_char_preview_window_t1

0x050b,	// (0x00008dab) bg_popup_fep_char_preview_window_g1

0x0503,	// (0x00008da3) bg_popup_fep_char_preview_window_g2

0x04fb,	// (0x00008d9b) bg_popup_fep_char_preview_window_g3

0x0533,	// (0x00008dd3) bg_popup_fep_char_preview_window_g4

0x052b,	// (0x00008dcb) bg_popup_fep_char_preview_window_g5

0x0523,	// (0x00008dc3) bg_popup_fep_char_preview_window_g6

0x051b,	// (0x00008dbb) bg_popup_fep_char_preview_window_g7

0x0513,	// (0x00008db3) bg_popup_fep_char_preview_window_g8

0x053b,	// (0x00008ddb) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdaf,	// (0x0001864f) bg_popup_fep_char_preview_window_g

0x79a7,	// (0x00010247) cell_vkb2_top_candi_pane_g1_ParamLimits

0x79a7,	// (0x00010247) cell_vkb2_top_candi_pane_g1

0x79b5,	// (0x00010255) cell_vkb2_top_candi_pane_g2_ParamLimits

0x79b5,	// (0x00010255) cell_vkb2_top_candi_pane_g2

0x056c,	// (0x00008e0c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x056c,	// (0x00008e0c) cell_vkb2_top_candi_pane_g3

0x81eb,	// (0x00010a8b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x81eb,	// (0x00010a8b) cell_vkb2_top_candi_pane_g4

0xda39,	// (0x000162d9) cell_vkb2_top_candi_pane_g5_ParamLimits

0xda39,	// (0x000162d9) cell_vkb2_top_candi_pane_g5

0x820c,	// (0x00010aac) cell_vkb2_top_candi_pane_g6_ParamLimits

0x820c,	// (0x00010aac) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc4,	// (0x00018664) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc4,	// (0x00018664) cell_vkb2_top_candi_pane_g

0x821a,	// (0x00010aba) cell_vkb2_top_candi_pane_t1

0x757a,	// (0x0000fe1a) aid_size_touch_slider_mark_ParamLimits

0x757a,	// (0x0000fe1a) aid_size_touch_slider_mark

0x0165,	// (0x00008a05) grid_graphic2_catg_pane_ParamLimits

0x0165,	// (0x00008a05) grid_graphic2_catg_pane

0x01e3,	// (0x00008a83) popup_grid_graphic2_window_t1_ParamLimits

0x01e3,	// (0x00008a83) popup_grid_graphic2_window_t1

0x01f5,	// (0x00008a95) popup_grid_graphic2_window_t2_ParamLimits

0x01f5,	// (0x00008a95) popup_grid_graphic2_window_t2

0x0001,

0xfd7d,	// (0x0001861d) popup_grid_graphic2_window_t_ParamLimits

0xfd7d,	// (0x0001861d) popup_grid_graphic2_window_t

0x8bdb,	// (0x0001147b) bg_button_pane_cp05_ParamLimits

0x0338,	// (0x00008bd8) cell_graphic2_control_pane_g1_ParamLimits

0x05a4,	// (0x00008e44) cell_graphic2_catg_pane_ParamLimits

0x05a4,	// (0x00008e44) cell_graphic2_catg_pane

0x8762,	// (0x00011002) bg_button_pane_cp12

0x05b6,	// (0x00008e56) cell_graphic2_catg_pane_g1

0xef01,	// (0x000177a1) cell_tb_ext_pane_t1_ParamLimits

0x7fe5,	// (0x00010885) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7fe5,	// (0x00010885) vkb2_top_cell_right_narrow_pane

0x7ffd,	// (0x0001089d) vkb2_top_cell_right_wide_pane_ParamLimits

0x7ffd,	// (0x0001089d) vkb2_top_cell_right_wide_pane

0x7754,	// (0x0000fff4) bg_vkb2_func_pane_ParamLimits

0x7754,	// (0x0000fff4) bg_vkb2_func_pane

0x806e,	// (0x0001090e) vkb2_top_cell_left_pane_g1_ParamLimits

0x7754,	// (0x0000fff4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7754,	// (0x0000fff4) bg_vkb2_fuc_pane_cp03

0x80cc,	// (0x0001096c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xac83,	// (0x00013523) bg_vkb2_func_pane_g1

0xac8b,	// (0x0001352b) bg_vkb2_func_pane_g2

0xac9b,	// (0x0001353b) bg_vkb2_func_pane_g3

0xac93,	// (0x00013533) bg_vkb2_func_pane_g4

0xaca3,	// (0x00013543) bg_vkb2_func_pane_g5

0xacab,	// (0x0001354b) bg_vkb2_func_pane_g6

0xacb3,	// (0x00013553) bg_vkb2_func_pane_g7

0xacbb,	// (0x0001355b) bg_vkb2_func_pane_g8

0xac7b,	// (0x0001351b) bg_vkb2_func_pane_g9

0x0008,

0xfdd1,	// (0x00018671) bg_vkb2_func_pane_g

0x7754,	// (0x0000fff4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7754,	// (0x0000fff4) bg_vkb2_fuc_pane_cp01

0x806e,	// (0x0001090e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x806e,	// (0x0001090e) vkb2_top_cell_right_wide_pane_g1

0x7754,	// (0x0000fff4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7754,	// (0x0000fff4) bg_vkb2_fuc_pane_cp02

0x80cc,	// (0x0001096c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x80cc,	// (0x0001096c) vkb2_top_cell_right_narrow_pane_g1

0xeb5a,	// (0x000173fa) aid_touch_area_decrease_ParamLimits

0xeb5a,	// (0x000173fa) aid_touch_area_decrease

0xeb72,	// (0x00017412) aid_touch_area_increase_ParamLimits

0xeb72,	// (0x00017412) aid_touch_area_increase

0xeb7e,	// (0x0001741e) aid_touch_area_mute_ParamLimits

0xeb7e,	// (0x0001741e) aid_touch_area_mute

0xeb9a,	// (0x0001743a) aid_touch_area_slider_ParamLimits

0xeb9a,	// (0x0001743a) aid_touch_area_slider

0xec80,	// (0x00017520) popup_slider_window_g4_ParamLimits

0xec80,	// (0x00017520) popup_slider_window_g4

0xec8c,	// (0x0001752c) popup_slider_window_g5_ParamLimits

0xec8c,	// (0x0001752c) popup_slider_window_g5

0xecae,	// (0x0001754e) popup_slider_window_g6_ParamLimits

0xecae,	// (0x0001754e) popup_slider_window_g6

0xecec,	// (0x0001758c) popup_slider_window_t2_ParamLimits

0xecec,	// (0x0001758c) popup_slider_window_t2

0x0001,

0xfccb,	// (0x0001856b) popup_slider_window_t_ParamLimits

0xfccb,	// (0x0001856b) popup_slider_window_t

0xed04,	// (0x000175a4) slider_pane_ParamLimits

0xed04,	// (0x000175a4) slider_pane

0x05bf,	// (0x00008e5f) slider_pane_g1_ParamLimits

0x05bf,	// (0x00008e5f) slider_pane_g1

0x05d3,	// (0x00008e73) slider_pane_g2_ParamLimits

0x05d3,	// (0x00008e73) slider_pane_g2

0x05e9,	// (0x00008e89) slider_pane_g3_ParamLimits

0x05e9,	// (0x00008e89) slider_pane_g3

0x0003,

0xfde4,	// (0x00018684) slider_pane_g_ParamLimits

0xfde4,	// (0x00018684) slider_pane_g

0x7188,	// (0x0000fa28) popup_tb_float_extension_window_ParamLimits

0x7188,	// (0x0000fa28) popup_tb_float_extension_window

0x0615,	// (0x00008eb5) aid_size_cell_tb_float_ext

0x8762,	// (0x00011002) bg_popup_sub_window_cp28

0x0620,	// (0x00008ec0) grid_tb_float_ext_pane

0x0628,	// (0x00008ec8) cell_tb_float_ext_pane_ParamLimits

0x0628,	// (0x00008ec8) cell_tb_float_ext_pane

0x0640,	// (0x00008ee0) cell_tb_float_ext_pane_g1

0x0649,	// (0x00008ee9) grid_highlight_pane_cp12

0x789d,	// (0x0001013d) cell_last_hwr_side_pane_ParamLimits

0x789d,	// (0x0001013d) cell_last_hwr_side_pane

0xd3ff,	// (0x00015c9f) cell_last_hwr_side_pane_g1

0x0652,	// (0x00008ef2) cell_last_hwr_side_pane_g2

0x0001,

0xfded,	// (0x0001868d) cell_last_hwr_side_pane_g

0x7fa2,	// (0x00010842) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7fa2,	// (0x00010842) vkb2_area_bottom_space_btn_pane

0x79a7,	// (0x00010247) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x00df,	// (0x0000897f) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x821a,	// (0x00010aba) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8231,	// (0x00010ad1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8231,	// (0x00010ad1) vkb2_area_bottom_space_btn_pane_g1

0x8267,	// (0x00010b07) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8267,	// (0x00010b07) vkb2_area_bottom_space_btn_pane_g2

0x829d,	// (0x00010b3d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x829d,	// (0x00010b3d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf2,	// (0x00018692) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf2,	// (0x00018692) vkb2_area_bottom_space_btn_pane_g

0x7811,	// (0x000100b1) cel_fep_hwr_func_pane_ParamLimits

0x7811,	// (0x000100b1) cel_fep_hwr_func_pane

0x784d,	// (0x000100ed) cell_hwr_side_button_pane_ParamLimits

0x784d,	// (0x000100ed) cell_hwr_side_button_pane

0xef35,	// (0x000177d5) aid_area_touch_clock_ParamLimits

0x8bdb,	// (0x0001147b) bg_uniindi_top_pane_ParamLimits

0xef47,	// (0x000177e7) uniindi_top_pane_g1_ParamLimits

0xef5d,	// (0x000177fd) uniindi_top_pane_g2_ParamLimits

0xef69,	// (0x00017809) uniindi_top_pane_g3_ParamLimits

0xef7a,	// (0x0001781a) uniindi_top_pane_g4_ParamLimits

0xfd03,	// (0x000185a3) uniindi_top_pane_g_ParamLimits

0xef87,	// (0x00017827) uniindi_top_pane_t1_ParamLimits

0x8bdb,	// (0x0001147b) bg_vkb2_func_pane_cp01_ParamLimits

0x8bdb,	// (0x0001147b) bg_vkb2_func_pane_cp01

0x070d,	// (0x00008fad) cel_fep_hwr_func_pane_g1_ParamLimits

0x070d,	// (0x00008fad) cel_fep_hwr_func_pane_g1

0x8bdb,	// (0x0001147b) bg_vkb2_func_pane_cp02_ParamLimits

0x8bdb,	// (0x0001147b) bg_vkb2_func_pane_cp02

0x070d,	// (0x00008fad) cell_hwr_side_button_pane_g1_ParamLimits

0x070d,	// (0x00008fad) cell_hwr_side_button_pane_g1

0xaae1,	// (0x00013381) status_pane_g4_ParamLimits

0xaae1,	// (0x00013381) status_pane_g4

0xaaf9,	// (0x00013399) status_pane_t1

0xd1e1,	// (0x00015a81) form2_midp_gauge_slider_cont_pane

0xd1e9,	// (0x00015a89) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd1fb,	// (0x00015a9b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd20d,	// (0x00015aad) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaca,	// (0x0001836a) form2_midp_gauge_slider_pane_t_ParamLimits

0xd21f,	// (0x00015abf) form2_midp_slider_pane_ParamLimits

0x7c5e,	// (0x000104fe) aid_size_cell_func_vkb2_ParamLimits

0x7c5e,	// (0x000104fe) aid_size_cell_func_vkb2

0x0601,	// (0x00008ea1) slider_pane_g4_ParamLimits

0x0601,	// (0x00008ea1) slider_pane_g4

0x82e3,	// (0x00010b83) form2_midp_gauge_slider_pane_t2_cp01

0x82f1,	// (0x00010b91) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x82f1,	// (0x00010b91) form2_midp_gauge_slider_pane_t3_cp01

0x830e,	// (0x00010bae) form2_midp_slider_pane_cp01

0x8762,	// (0x00011002) navi_smil_pane

0x077a,	// (0x0000901a) navi_smil_pane_g1

0x0782,	// (0x00009022) navi_smil_pane_t1

0x074f,	// (0x00008fef) form2_midp_slider_pane_g1

0x0758,	// (0x00008ff8) form2_midp_slider_pane_g2

0x0760,	// (0x00009000) form2_midp_slider_pane_g3

0x074f,	// (0x00008fef) form2_midp_slider_pane_g4

0x0768,	// (0x00009008) form2_midp_slider_pane_g5

0x0004,

0xfdfb,	// (0x0001869b) form2_midp_slider_pane_g

0x82d3,	// (0x00010b73) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x82d3,	// (0x00010b73) vkb2_area_bottom_space_btn_pane_g4

0xa923,	// (0x000131c3) lc0_navi_pane_ParamLimits

0xa923,	// (0x000131c3) lc0_navi_pane

0xa999,	// (0x00013239) lc0_stat_indi_pane_ParamLimits

0xa999,	// (0x00013239) lc0_stat_indi_pane

0xa9b0,	// (0x00013250) ls0_title_pane_ParamLimits

0xa9b0,	// (0x00013250) ls0_title_pane

0x9632,	// (0x00011ed2) bg_popup_sub_pane_cp14_ParamLimits

0xef1c,	// (0x000177bc) list_uniindi_pane_ParamLimits

0xef28,	// (0x000177c8) uniindi_top_pane_ParamLimits

0xefc3,	// (0x00017863) list_single_uniindi_pane_g1_ParamLimits

0xefd6,	// (0x00017876) list_single_uniindi_pane_t1_ParamLimits

0x8317,	// (0x00010bb7) lc0_stat_clock_pane_ParamLimits

0x8317,	// (0x00010bb7) lc0_stat_clock_pane

0x07aa,	// (0x0000904a) lc0_stat_indi_pane_g1_ParamLimits

0x07aa,	// (0x0000904a) lc0_stat_indi_pane_g1

0x079d,	// (0x0000903d) lc0_stat_indi_pane_g2_ParamLimits

0x079d,	// (0x0000903d) lc0_stat_indi_pane_g2

0x0001,

0xfe06,	// (0x000186a6) lc0_stat_indi_pane_g_ParamLimits

0xfe06,	// (0x000186a6) lc0_stat_indi_pane_g

0x8324,	// (0x00010bc4) lc0_uni_indicator_pane_ParamLimits

0x8324,	// (0x00010bc4) lc0_uni_indicator_pane

0x07c4,	// (0x00009064) ls0_title_pane_g1_ParamLimits

0x07c4,	// (0x00009064) ls0_title_pane_g1

0x07d8,	// (0x00009078) ls0_title_pane_t1_ParamLimits

0x07d8,	// (0x00009078) ls0_title_pane_t1

0x8331,	// (0x00010bd1) lc0_uni_indicator_pane_g1_ParamLimits

0x8331,	// (0x00010bd1) lc0_uni_indicator_pane_g1

0x0820,	// (0x000090c0) lc0_stat_clock_pane_t1

0x6595,	// (0x0000ee35) main_ai5_pane

0x082e,	// (0x000090ce) ai5_sk_pane_ParamLimits

0x082e,	// (0x000090ce) ai5_sk_pane

0x083b,	// (0x000090db) cell_ai5_widget_pane_ParamLimits

0x083b,	// (0x000090db) cell_ai5_widget_pane

0x08b1,	// (0x00009151) aid_size_cell_widget_grid

0x08be,	// (0x0000915e) bg_ai5_widget_pane_ParamLimits

0x08be,	// (0x0000915e) bg_ai5_widget_pane

0x0915,	// (0x000091b5) cell_ai5_widget_pane_g2

0x0929,	// (0x000091c9) cell_ai5_widget_pane_g3

0x0943,	// (0x000091e3) cell_ai5_widget_pane_g4

0x0953,	// (0x000091f3) cell_ai5_widget_pane_g5

0x0963,	// (0x00009203) cell_ai5_widget_pane_g6

0x096f,	// (0x0000920f) cell_ai5_widget_pane_g7

0x09db,	// (0x0000927b) cell_ai5_widget_pane_t1_ParamLimits

0x09db,	// (0x0000927b) cell_ai5_widget_pane_t1

0x09f8,	// (0x00009298) cell_ai5_widget_pane_t2_ParamLimits

0x09f8,	// (0x00009298) cell_ai5_widget_pane_t2

0x0a10,	// (0x000092b0) cell_ai5_widget_pane_t3_ParamLimits

0x0a10,	// (0x000092b0) cell_ai5_widget_pane_t3

0x0a28,	// (0x000092c8) cell_ai5_widget_pane_t4_ParamLimits

0x0a28,	// (0x000092c8) cell_ai5_widget_pane_t4

0x0a4e,	// (0x000092ee) cell_ai5_widget_pane_t5_ParamLimits

0x0a4e,	// (0x000092ee) cell_ai5_widget_pane_t5

0x0a6d,	// (0x0000930d) cell_ai5_widget_pane_t6_ParamLimits

0x0a6d,	// (0x0000930d) cell_ai5_widget_pane_t6

0x0a7f,	// (0x0000931f) cell_ai5_widget_pane_t7_ParamLimits

0x0a7f,	// (0x0000931f) cell_ai5_widget_pane_t7

0x0a9e,	// (0x0000933e) cell_ai5_widget_pane_t8_ParamLimits

0x0a9e,	// (0x0000933e) cell_ai5_widget_pane_t8

0x000b,

0xfe26,	// (0x000186c6) cell_ai5_widget_pane_t_ParamLimits

0xfe26,	// (0x000186c6) cell_ai5_widget_pane_t

0x0b21,	// (0x000093c1) grid_ai5_widget_pane

0x9632,	// (0x00011ed2) highlight_cell_ai5_widget_pane_ParamLimits

0x9632,	// (0x00011ed2) highlight_cell_ai5_widget_pane

0x0b2d,	// (0x000093cd) ai5_sk_left_pane

0x0b37,	// (0x000093d7) ai5_sk_middle_pane

0x0b41,	// (0x000093e1) ai5_sk_right_pane

0x0b4b,	// (0x000093eb) bg_ai5_widget_pane_g1_ParamLimits

0x0b4b,	// (0x000093eb) bg_ai5_widget_pane_g1

0x0b57,	// (0x000093f7) bg_ai5_widget_pane_g2_ParamLimits

0x0b57,	// (0x000093f7) bg_ai5_widget_pane_g2

0x0b63,	// (0x00009403) bg_ai5_widget_pane_g3_ParamLimits

0x0b63,	// (0x00009403) bg_ai5_widget_pane_g3

0x0b6f,	// (0x0000940f) bg_ai5_widget_pane_g4_ParamLimits

0x0b6f,	// (0x0000940f) bg_ai5_widget_pane_g4

0x0b7b,	// (0x0000941b) bg_ai5_widget_pane_g5_ParamLimits

0x0b7b,	// (0x0000941b) bg_ai5_widget_pane_g5

0x0b87,	// (0x00009427) bg_ai5_widget_pane_g6_ParamLimits

0x0b87,	// (0x00009427) bg_ai5_widget_pane_g6

0x0b93,	// (0x00009433) bg_ai5_widget_pane_g7_ParamLimits

0x0b93,	// (0x00009433) bg_ai5_widget_pane_g7

0x0b9f,	// (0x0000943f) bg_ai5_widget_pane_g8_ParamLimits

0x0b9f,	// (0x0000943f) bg_ai5_widget_pane_g8

0x0bab,	// (0x0000944b) bg_ai5_widget_pane_g9_ParamLimits

0x0bab,	// (0x0000944b) bg_ai5_widget_pane_g9

0x0008,

0xfe3f,	// (0x000186df) bg_ai5_widget_pane_g_ParamLimits

0xfe3f,	// (0x000186df) bg_ai5_widget_pane_g

0x0bdb,	// (0x0000947b) cell_shortcut_ai5_widget_pane_ParamLimits

0x0bdb,	// (0x0000947b) cell_shortcut_ai5_widget_pane

0x0bec,	// (0x0000948c) bg_cell_shortcut_ai5_widget_pane

0x8d95,	// (0x00011635) cell_grid_ai5_widget_pane_g1

0xa42f,	// (0x00012ccf) highlight_cell_shortcut_ai5_widget_pane

0xac83,	// (0x00013523) ai5_sk_left_pane_g1

0x0bf4,	// (0x00009494) ai5_sk_left_pane_g2

0x0bfc,	// (0x0000949c) ai5_sk_left_pane_g3

0x0c04,	// (0x000094a4) ai5_sk_left_pane_g4

0x0003,

0xfe52,	// (0x000186f2) ai5_sk_left_pane_g

0x0c0c,	// (0x000094ac) ai5_sk_left_pane_t1

0xac8b,	// (0x0001352b) ai5_sk_right_pane_g1

0x0c1a,	// (0x000094ba) ai5_sk_right_pane_g2

0x0c22,	// (0x000094c2) ai5_sk_right_pane_g3

0x0c2a,	// (0x000094ca) ai5_sk_right_pane_g4

0x0003,

0xfe5b,	// (0x000186fb) ai5_sk_right_pane_g

0x0c32,	// (0x000094d2) ai5_sk_right_pane_t1

0xac8b,	// (0x0001352b) ai5_sk_middle_pane_g1

0xac83,	// (0x00013523) ai5_sk_middle_pane_g2

0xaca3,	// (0x00013543) ai5_sk_middle_pane_g3

0x0c22,	// (0x000094c2) ai5_sk_middle_pane_g4

0x0bfc,	// (0x0000949c) ai5_sk_middle_pane_g5

0x0c40,	// (0x000094e0) ai5_sk_middle_pane_g6

0x0c48,	// (0x000094e8) ai5_sk_middle_pane_g7

0x0006,

0xfe64,	// (0x00018704) ai5_sk_middle_pane_g

0xa7c4,	// (0x00013064) aid_touch_area_size_lc0_ParamLimits

0xa7c4,	// (0x00013064) aid_touch_area_size_lc0

0x79d6,	// (0x00010276) cell_hwr_candidate_pane_t1_ParamLimits

0xa7de,	// (0x0001307e) aid_touch_navi_pane

0xaa93,	// (0x00013333) status_dt_navi_pane_ParamLimits

0xaa93,	// (0x00013333) status_dt_navi_pane

0xaaa0,	// (0x00013340) status_dt_sta_pane_ParamLimits

0xaaa0,	// (0x00013340) status_dt_sta_pane

0x0c50,	// (0x000094f0) dt_sta_controll_pane

0x0c5d,	// (0x000094fd) dt_sta_indi_pane

0x0c6e,	// (0x0000950e) dt_sta_title_pane

0x8bdb,	// (0x0001147b) bg_dt_sta_indi_pane_ParamLimits

0x8bdb,	// (0x0001147b) bg_dt_sta_indi_pane

0x0c81,	// (0x00009521) dt_sta_battery_pane

0x0c89,	// (0x00009529) dt_sta_indi_pane_g1

0x0c92,	// (0x00009532) dt_sta_indi_pane_g2

0x0c9b,	// (0x0000953b) dt_sta_indi_pane_g3

0x0002,

0xfe73,	// (0x00018713) dt_sta_indi_pane_g

0x0ca4,	// (0x00009544) dt_sta_signal_pane

0x9632,	// (0x00011ed2) bg_dt_sta_title_pane_ParamLimits

0x9632,	// (0x00011ed2) bg_dt_sta_title_pane

0x0cad,	// (0x0000954d) dt_sta_title_pane_g1

0x0cb5,	// (0x00009555) dt_sta_title_pane_t1_ParamLimits

0x0cb5,	// (0x00009555) dt_sta_title_pane_t1

0x8762,	// (0x00011002) bg_dt_sta_control_pane

0x0cca,	// (0x0000956a) dt_sta_controll_pane_g1

0x0cd3,	// (0x00009573) bg_dt_sta_title_pane_g1

0x0cdc,	// (0x0000957c) bg_dt_sta_title_pane_g2

0x0ce5,	// (0x00009585) bg_dt_sta_title_pane_g3

0x0002,

0xfe7a,	// (0x0001871a) bg_dt_sta_title_pane_g

0xd3ff,	// (0x00015c9f) bg_dt_sta_indi_pane_g1

0x0cee,	// (0x0000958e) dt_sta_signal_pane_g1

0x0cf6,	// (0x00009596) dt_sta_signal_pane_g2

0x0001,

0xfe81,	// (0x00018721) dt_sta_signal_pane_g

0x0cfe,	// (0x0000959e) dt_sta_battery_pane_g1

0x0d07,	// (0x000095a7) dt_sta_battery_pane_t1

0xd3ff,	// (0x00015c9f) bg_dt_sta_control_pane_g1

0x9f0f,	// (0x000127af) fep_china_uni_eep_pane

0x9f17,	// (0x000127b7) fep_china_uni_entry_pane_ParamLimits

0x9f27,	// (0x000127c7) popup_fep_china_uni_window_g1_ParamLimits

0x9f37,	// (0x000127d7) popup_fep_china_uni_window_g2_ParamLimits

0x9f37,	// (0x000127d7) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x00017f93) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x00017f93) popup_fep_china_uni_window_g

0x0d16,	// (0x000095b6) fep_china_uni_eep_pane_g1

0x0d1e,	// (0x000095be) fep_china_uni_eep_pane_t1

0x0771,	// (0x00009011) aid_touch_area_size_smil_player

0xa91b,	// (0x000131bb) lc0_clock_pane

0xaaed,	// (0x0001338d) status_pane_g5_ParamLimits

0xaaed,	// (0x0001338d) status_pane_g5

0x6ef9,	// (0x0000f799) popup_keymap_window

0xaab5,	// (0x00013355) status_icon_pane

0x0929,	// (0x000091c9) cell_ai5_widget_pane_g3_ParamLimits

0x0943,	// (0x000091e3) cell_ai5_widget_pane_g4_ParamLimits

0x0953,	// (0x000091f3) cell_ai5_widget_pane_g5_ParamLimits

0x097b,	// (0x0000921b) cell_ai5_widget_pane_g8_ParamLimits

0x097b,	// (0x0000921b) cell_ai5_widget_pane_g8

0x098f,	// (0x0000922f) cell_ai5_widget_pane_g9_ParamLimits

0x098f,	// (0x0000922f) cell_ai5_widget_pane_g9

0x09a3,	// (0x00009243) cell_ai5_widget_pane_g10_ParamLimits

0x09a3,	// (0x00009243) cell_ai5_widget_pane_g10

0x0d2d,	// (0x000095cd) status_icon_pane_g1

0x8762,	// (0x00011002) bg_popup_sub_pane_cp13

0x0d35,	// (0x000095d5) popup_keymap_window_t1

0xa6f4,	// (0x00012f94) control_pane_g6_ParamLimits

0xa6f4,	// (0x00012f94) control_pane_g6

0xa701,	// (0x00012fa1) control_pane_g7_ParamLimits

0xa701,	// (0x00012fa1) control_pane_g7

0xa70e,	// (0x00012fae) control_pane_g8_ParamLimits

0xa70e,	// (0x00012fae) control_pane_g8

0x0c50,	// (0x000094f0) dt_sta_controll_pane_ParamLimits

0x0c5d,	// (0x000094fd) dt_sta_indi_pane_ParamLimits

0x0c6e,	// (0x0000950e) dt_sta_title_pane_ParamLimits

0x9069,	// (0x00011909) aid_size_touch_scroll_bar_cale

0x666c,	// (0x0000ef0c) popup_discreet_window_ParamLimits

0x666c,	// (0x0000ef0c) popup_discreet_window

0x66d0,	// (0x0000ef70) popup_sk_window

0xb35f,	// (0x00013bff) bg_popup_sub_pane_cp28_ParamLimits

0xb35f,	// (0x00013bff) bg_popup_sub_pane_cp28

0x0d43,	// (0x000095e3) popup_discreet_window_g1_ParamLimits

0x0d43,	// (0x000095e3) popup_discreet_window_g1

0x0d63,	// (0x00009603) popup_discreet_window_t1_ParamLimits

0x0d63,	// (0x00009603) popup_discreet_window_t1

0x0d81,	// (0x00009621) popup_discreet_window_t2_ParamLimits

0x0d81,	// (0x00009621) popup_discreet_window_t2

0x0002,

0xfe86,	// (0x00018726) popup_discreet_window_t_ParamLimits

0xfe86,	// (0x00018726) popup_discreet_window_t

0x8343,	// (0x00010be3) popup_sk_window_g1

0x834c,	// (0x00010bec) popup_sk_window_g2

0x0001,

0xfe8d,	// (0x0001872d) popup_sk_window_g

0x8355,	// (0x00010bf5) popup_sk_window_t1

0x8363,	// (0x00010c03) popup_sk_window_t1_copy1

0x0915,	// (0x000091b5) cell_ai5_widget_pane_g2_ParamLimits

0x0ab0,	// (0x00009350) cell_ai5_widget_pane_t9_ParamLimits

0x0ab0,	// (0x00009350) cell_ai5_widget_pane_t9

0x8762,	// (0x00011002) main_fep_fshwr2_pane

0x8371,	// (0x00010c11) aid_fshwr2_btn_pane

0x8381,	// (0x00010c21) aid_fshwr2_syb_pane

0x8395,	// (0x00010c35) aid_fshwr2_txt_pane

0x83a5,	// (0x00010c45) fshwr2_func_candi_pane

0x83bd,	// (0x00010c5d) fshwr2_hwr_syb_pane

0x83cf,	// (0x00010c6f) fshwr2_icf_pane

0x6595,	// (0x0000ee35) fshwr2_icf_bg_pane

0x83f7,	// (0x00010c97) fshwr2_icf_pane_t1_ParamLimits

0x83f7,	// (0x00010c97) fshwr2_icf_pane_t1

0x9e00,	// (0x000126a0) fshwr2_func_candi_pane_g1

0x0e9f,	// (0x0000973f) fshwr2_func_candi_row_pane_ParamLimits

0x0e9f,	// (0x0000973f) fshwr2_func_candi_row_pane

0x840f,	// (0x00010caf) cell_fshwr2_syb_pane_ParamLimits

0x840f,	// (0x00010caf) cell_fshwr2_syb_pane

0x842e,	// (0x00010cce) fshwr2_hwr_syb_pane_g1_ParamLimits

0x842e,	// (0x00010cce) fshwr2_hwr_syb_pane_g1

0x6595,	// (0x0000ee35) bg_popup_call_pane_cp01

0x843c,	// (0x00010cdc) fshwr2_func_candi_cell_pane_ParamLimits

0x843c,	// (0x00010cdc) fshwr2_func_candi_cell_pane

0xb987,	// (0x00014227) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xb987,	// (0x00014227) fshwr2_func_candi_cell_bg_pane

0x847b,	// (0x00010d1b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x847b,	// (0x00010d1b) fshwr2_func_candi_cell_pane_g1

0x84a6,	// (0x00010d46) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x84a6,	// (0x00010d46) fshwr2_func_candi_cell_pane_t1

0x6595,	// (0x0000ee35) bg_button_pane_cp08

0xa77e,	// (0x0001301e) cell_fshwr2_syb_bg_pane

0x84b9,	// (0x00010d59) cell_fshwr2_syb_bg_pane_g1

0x84cd,	// (0x00010d6d) cell_fshwr2_syb_bg_pane_t1

0x9632,	// (0x00011ed2) main_tmo_pane

0xbe13,	// (0x000146b3) uni_indicator_pane_g1_ParamLimits

0xbe27,	// (0x000146c7) uni_indicator_pane_g2_ParamLimits

0xbe3c,	// (0x000146dc) uni_indicator_pane_g3_ParamLimits

0xbe51,	// (0x000146f1) uni_indicator_pane_g4_ParamLimits

0xbe51,	// (0x000146f1) uni_indicator_pane_g4

0xbe65,	// (0x00014705) uni_indicator_pane_g5_ParamLimits

0xbe65,	// (0x00014705) uni_indicator_pane_g5

0xbe65,	// (0x00014705) uni_indicator_pane_g6_ParamLimits

0xbe65,	// (0x00014705) uni_indicator_pane_g6

0xf8f7,	// (0x00018197) uni_indicator_pane_g_ParamLimits

0xeb3e,	// (0x000173de) popup_tmo_note_window_ParamLimits

0xeb3e,	// (0x000173de) popup_tmo_note_window

0x7c3a,	// (0x000104da) fshwr2_bg_pane

0x8497,	// (0x00010d37) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8497,	// (0x00010d37) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe92,	// (0x00018732) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe92,	// (0x00018732) fshwr2_func_candi_cell_pane_g

0x798f,	// (0x0001022f) bg_popup_window_pane_cp01

0x84e3,	// (0x00010d83) bg_popup_window_pane_g1_cp01

0x0f91,	// (0x00009831) bg_popup_window_pane_cp22_ParamLimits

0x0f91,	// (0x00009831) bg_popup_window_pane_cp22

0x0f9f,	// (0x0000983f) listscroll_tmo_link_pane_ParamLimits

0x0f9f,	// (0x0000983f) listscroll_tmo_link_pane

0x0fdf,	// (0x0000987f) popup_tmo_note_window_g1_ParamLimits

0x0fdf,	// (0x0000987f) popup_tmo_note_window_g1

0x0fec,	// (0x0000988c) tmo_note_info_pane_ParamLimits

0x0fec,	// (0x0000988c) tmo_note_info_pane

0x1006,	// (0x000098a6) list_tmo_note_info_pane_g1_ParamLimits

0x1006,	// (0x000098a6) list_tmo_note_info_pane_g1

0x101d,	// (0x000098bd) list_tmo_note_info_pane_g2_ParamLimits

0x101d,	// (0x000098bd) list_tmo_note_info_pane_g2

0x0001,

0xfe97,	// (0x00018737) list_tmo_note_info_pane_g_ParamLimits

0xfe97,	// (0x00018737) list_tmo_note_info_pane_g

0x1039,	// (0x000098d9) list_tmo_note_info_text_pane_ParamLimits

0x1039,	// (0x000098d9) list_tmo_note_info_text_pane

0x10ba,	// (0x0000995a) list_tmo_link_pane

0x10c7,	// (0x00009967) scroll_pane_cp20

0x10d4,	// (0x00009974) list_single_tmo_link_pane_ParamLimits

0x10d4,	// (0x00009974) list_single_tmo_link_pane

0x10e4,	// (0x00009984) list_single_tmo_link_pane_t1

0x10f2,	// (0x00009992) list_tmo_note_info_text_pane_t1_ParamLimits

0x10f2,	// (0x00009992) list_tmo_note_info_text_pane_t1

0x985a,	// (0x000120fa) aid_size_touch_scroll_bar_cp01_ParamLimits

0x985a,	// (0x000120fa) aid_size_touch_scroll_bar_cp01

0x96cf,	// (0x00011f6f) aid_size_touch_slider_marker

0x66bc,	// (0x0000ef5c) popup_settings_window_ParamLimits

0x66bc,	// (0x0000ef5c) popup_settings_window

0xa798,	// (0x00013038) popup_candi_list_indi_window

0xa7de,	// (0x0001307e) aid_touch_navi_pane_ParamLimits

0x7b96,	// (0x00010436) rs_clock_indi_pane

0x7b9f,	// (0x0001043f) sctrl_sk_bottom_pane_ParamLimits

0x7bb0,	// (0x00010450) sctrl_sk_top_pane_ParamLimits

0x7cb0,	// (0x00010550) popup_fep_tooltip_window

0x08b1,	// (0x00009151) aid_size_cell_widget_grid_ParamLimits

0x0901,	// (0x000091a1) cell_ai5_widget_pane_g1_ParamLimits

0x0901,	// (0x000091a1) cell_ai5_widget_pane_g1

0x0963,	// (0x00009203) cell_ai5_widget_pane_g6_ParamLimits

0x096f,	// (0x0000920f) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0b,	// (0x000186ab) cell_ai5_widget_pane_g_ParamLimits

0xfe0b,	// (0x000186ab) cell_ai5_widget_pane_g

0x0adf,	// (0x0000937f) cell_ai5_widget_pane_t10_ParamLimits

0x0adf,	// (0x0000937f) cell_ai5_widget_pane_t10

0x0b21,	// (0x000093c1) grid_ai5_widget_pane_ParamLimits

0x0bb7,	// (0x00009457) cell_contacts_ai5_widget_pane_ParamLimits

0x0bb7,	// (0x00009457) cell_contacts_ai5_widget_pane

0x0d96,	// (0x00009636) popup_discreet_window_t3_ParamLimits

0x0d96,	// (0x00009636) popup_discreet_window_t3

0x83e5,	// (0x00010c85) popup_fshwr2_char_preview_window_ParamLimits

0x83e5,	// (0x00010c85) popup_fshwr2_char_preview_window

0x1057,	// (0x000098f7) tmo_note_info_pane_t1

0x106c,	// (0x0000990c) tmo_note_info_pane_t2

0x1081,	// (0x00009921) tmo_note_info_pane_t3

0x1096,	// (0x00009936) tmo_note_info_pane_t4

0x10a8,	// (0x00009948) tmo_note_info_pane_t5

0x0004,

0xfe9c,	// (0x0001873c) tmo_note_info_pane_t

0x10ba,	// (0x0000995a) list_tmo_link_pane_ParamLimits

0x10c7,	// (0x00009967) scroll_pane_cp20_ParamLimits

0x6595,	// (0x0000ee35) bg_popup_fep_char_preview_window_cp01

0x110b,	// (0x000099ab) popup_fshwr2_char_preview_window_t1

0x1119,	// (0x000099b9) popup_candi_list_indi_window_g1

0x1122,	// (0x000099c2) bg_cell_contacts_ai5_widget_pane

0x112e,	// (0x000099ce) cell_contacts_ai5_widget_pane_g1

0x1143,	// (0x000099e3) cell_contacts_ai5_widget_pane_g2

0x114f,	// (0x000099ef) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea7,	// (0x00018747) cell_contacts_ai5_widget_pane_g

0x115b,	// (0x000099fb) cell_contacts_ai5_widget_pane_t1

0x9632,	// (0x00011ed2) highlight_cell_shortcut_ai5_widget_pane_cp01

0x11d0,	// (0x00009a70) settings_container_pane

0xa42f,	// (0x00012ccf) listscroll_set_pane_copy1

0xc944,	// (0x000151e4) scroll_pane_cp121_copy1

0x11dc,	// (0x00009a7c) set_content_pane_copy1

0x11e4,	// (0x00009a84) aid_height_set_list_copy1_ParamLimits

0x11e4,	// (0x00009a84) aid_height_set_list_copy1

0xc03c,	// (0x000148dc) aid_size_parent_copy1_ParamLimits

0xc03c,	// (0x000148dc) aid_size_parent_copy1

0x11f0,	// (0x00009a90) button_value_adjust_pane_cp6_copy1_ParamLimits

0x11f0,	// (0x00009a90) button_value_adjust_pane_cp6_copy1

0xa77e,	// (0x0001301e) list_highlight_pane_cp2_copy1_ParamLimits

0xa77e,	// (0x0001301e) list_highlight_pane_cp2_copy1

0x1204,	// (0x00009aa4) list_set_pane_copy1_ParamLimits

0x1204,	// (0x00009aa4) list_set_pane_copy1

0x116d,	// (0x00009a0d) main_pane_set_t1_copy1_ParamLimits

0x116d,	// (0x00009a0d) main_pane_set_t1_copy1

0x11a7,	// (0x00009a47) main_pane_set_t2_copy1_ParamLimits

0x11a7,	// (0x00009a47) main_pane_set_t2_copy1

0x1292,	// (0x00009b32) main_pane_set_t3_copy1

0x12a0,	// (0x00009b40) main_pane_set_t4_copy1

0x11c4,	// (0x00009a64) set_content_pane_g1_copy1_ParamLimits

0x11c4,	// (0x00009a64) set_content_pane_g1_copy1

0x12ae,	// (0x00009b4e) setting_code_pane_copy1

0x12b6,	// (0x00009b56) setting_slider_graphic_pane_copy1

0x12b6,	// (0x00009b56) setting_slider_pane_copy1

0x12b6,	// (0x00009b56) setting_text_pane_copy1

0x12b6,	// (0x00009b56) setting_volume_pane_copy1

0x12be,	// (0x00009b5e) settings_code_pane_cp2_copy1

0x12c6,	// (0x00009b66) settings_code_pane_cp_copy1_ParamLimits

0x12c6,	// (0x00009b66) settings_code_pane_cp_copy1

0x84ec,	// (0x00010d8c) volume_set_pane_copy1

0x12e2,	// (0x00009b82) volume_set_pane_g10_copy1

0x12ea,	// (0x00009b8a) volume_set_pane_g1_copy1

0x12f2,	// (0x00009b92) volume_set_pane_g2_copy1

0x12fa,	// (0x00009b9a) volume_set_pane_g3_copy1

0x1302,	// (0x00009ba2) volume_set_pane_g4_copy1

0x130a,	// (0x00009baa) volume_set_pane_g5_copy1

0x1312,	// (0x00009bb2) volume_set_pane_g6_copy1

0x131a,	// (0x00009bba) volume_set_pane_g7_copy1

0x1322,	// (0x00009bc2) volume_set_pane_g8_copy1

0x132a,	// (0x00009bca) volume_set_pane_g9_copy1

0x8933,	// (0x000111d3) bg_set_opt_pane_cp_copy1_ParamLimits

0x8933,	// (0x000111d3) bg_set_opt_pane_cp_copy1

0x84f4,	// (0x00010d94) setting_slider_pane_t1_copy1_ParamLimits

0x84f4,	// (0x00010d94) setting_slider_pane_t1_copy1

0x850b,	// (0x00010dab) setting_slider_pane_t2_copy1_ParamLimits

0x850b,	// (0x00010dab) setting_slider_pane_t2_copy1

0x8524,	// (0x00010dc4) setting_slider_pane_t3_copy1_ParamLimits

0x8524,	// (0x00010dc4) setting_slider_pane_t3_copy1

0x67ec,	// (0x0000f08c) slider_set_pane_copy1_ParamLimits

0x67ec,	// (0x0000f08c) slider_set_pane_copy1

0x9755,	// (0x00011ff5) set_opt_bg_pane_g1_copy2

0x975d,	// (0x00011ffd) set_opt_bg_pane_g2_copy2

0x1379,	// (0x00009c19) set_opt_bg_pane_g3_copy2

0x976d,	// (0x0001200d) set_opt_bg_pane_g4_copy2

0x9775,	// (0x00012015) set_opt_bg_pane_g5_copy2

0x977d,	// (0x0001201d) set_opt_bg_pane_g6_copy2

0x1381,	// (0x00009c21) set_opt_bg_pane_g7_copy2

0x1389,	// (0x00009c29) set_opt_bg_pane_g8_copy2

0x1391,	// (0x00009c31) set_opt_bg_pane_g9_copy2

0x757a,	// (0x0000fe1a) aid_size_touch_slider_mark_copy1_ParamLimits

0x757a,	// (0x0000fe1a) aid_size_touch_slider_mark_copy1

0xc172,	// (0x00014a12) slider_set_pane_g1_copy1

0xc194,	// (0x00014a34) slider_set_pane_g2_copy1

0x759a,	// (0x0000fe3a) slider_set_pane_g3_copy1_ParamLimits

0x759a,	// (0x0000fe3a) slider_set_pane_g3_copy1

0x75ae,	// (0x0000fe4e) slider_set_pane_g4_copy1_ParamLimits

0x75ae,	// (0x0000fe4e) slider_set_pane_g4_copy1

0x75c6,	// (0x0000fe66) slider_set_pane_g5_copy1_ParamLimits

0x75c6,	// (0x0000fe66) slider_set_pane_g5_copy1

0x759a,	// (0x0000fe3a) slider_set_pane_g6_copy1_ParamLimits

0x759a,	// (0x0000fe3a) slider_set_pane_g6_copy1

0x853b,	// (0x00010ddb) slider_set_pane_g7_copy1_ParamLimits

0x853b,	// (0x00010ddb) slider_set_pane_g7_copy1

0x8853,	// (0x000110f3) bg_set_opt_pane_cp2_copy1

0x8975,	// (0x00011215) setting_slider_graphic_pane_g1_copy1

0x8551,	// (0x00010df1) setting_slider_graphic_pane_t1_copy1

0x8560,	// (0x00010e00) setting_slider_graphic_pane_t2_copy1

0x856f,	// (0x00010e0f) slider_set_pane_cp_copy1

0x13dd,	// (0x00009c7d) input_focus_pane_cp1_copy1

0x13e6,	// (0x00009c86) list_set_text_pane_copy1

0x13ee,	// (0x00009c8e) setting_text_pane_g1_copy1

0x13f7,	// (0x00009c97) set_text_pane_t1_copy1

0x13dd,	// (0x00009c7d) input_focus_pane_cp2_copy1

0x13ee,	// (0x00009c8e) setting_code_pane_g1_copy1

0x1410,	// (0x00009cb0) setting_code_pane_t1_copy1

0x141e,	// (0x00009cbe) list_set_graphic_pane_copy1

0x8853,	// (0x000110f3) bg_set_opt_pane_cp4_copy1

0xa18b,	// (0x00012a2b) list_set_graphic_pane_g1_copy1_ParamLimits

0xa18b,	// (0x00012a2b) list_set_graphic_pane_g1_copy1

0x1433,	// (0x00009cd3) list_set_graphic_pane_g2_copy1

0xa1a3,	// (0x00012a43) list_set_graphic_pane_t1_copy1_ParamLimits

0xa1a3,	// (0x00012a43) list_set_graphic_pane_t1_copy1

0xd3ff,	// (0x00015c9f) rs_clock_indi_pane_g1

0x143b,	// (0x00009cdb) rs_clock_indi_pane_t1

0x1449,	// (0x00009ce9) rs_indi_pane

0x1451,	// (0x00009cf1) rs_indi_pane_g1

0x145a,	// (0x00009cfa) rs_indi_pane_g2

0x1119,	// (0x000099b9) rs_indi_pane_g3

0x0002,

0xfeae,	// (0x0001874e) rs_indi_pane_g

0xa42f,	// (0x00012ccf) bg_popup_preview_window_pane_cp03

0x1463,	// (0x00009d03) popup_fep_tooltip_window_t1

0xe1ea,	// (0x00016a8a) popup_note2_window_g2_ParamLimits

0xe1ea,	// (0x00016a8a) popup_note2_window_g2

0x0001,

0xfc42,	// (0x000184e2) popup_note2_window_g_ParamLimits

0xfc42,	// (0x000184e2) popup_note2_window_g

0xe7cb,	// (0x0001706b) bg_popup_sub_pane_cp11_ParamLimits

0xe7d8,	// (0x00017078) cell_ai3_links_pane_g1_ParamLimits

0xe7ef,	// (0x0001708f) cell_ai3_links_pane_t1

0x13f7,	// (0x00009c97) set_text_pane_t1_copy1_ParamLimits

0xa34f,	// (0x00012bef) cell_graphic_popup_pane_cp2_ParamLimits

0xa34f,	// (0x00012bef) cell_graphic_popup_pane_cp2

0x1471,	// (0x00009d11) cell_graphic_popup_pane_g1_cp2

0x8f18,	// (0x000117b8) cell_graphic_popup_pane_g2_cp2

0x1479,	// (0x00009d19) cell_graphic_popup_pane_g3_cp2

0x1481,	// (0x00009d21) cell_graphic_popup_pane_t2_cp2

0x8f29,	// (0x000117c9) grid_highlight_pane_cp3_cp2

0x9b52,	// (0x000123f2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x9632,	// (0x00011ed2) main_tmo_pane_ParamLimits

0xeb36,	// (0x000173d6) popup_tmo_big_image_note_window

0x08f0,	// (0x00009190) cell_ai5_widget_list_pane

0x08f8,	// (0x00009198) cell_ai5_widget_lrg_icon_pane

0x1057,	// (0x000098f7) tmo_note_info_pane_t1_ParamLimits

0x106c,	// (0x0000990c) tmo_note_info_pane_t2_ParamLimits

0x1081,	// (0x00009921) tmo_note_info_pane_t3_ParamLimits

0x1096,	// (0x00009936) tmo_note_info_pane_t4_ParamLimits

0x10a8,	// (0x00009948) tmo_note_info_pane_t5_ParamLimits

0xfe9c,	// (0x0001873c) tmo_note_info_pane_t_ParamLimits

0x11d0,	// (0x00009a70) settings_container_pane_ParamLimits

0x13d5,	// (0x00009c75) indicator_popup_pane_cp5

0x13d5,	// (0x00009c75) indicator_popup_pane_cp6

0x141e,	// (0x00009cbe) list_set_graphic_pane_copy1_ParamLimits

0x8762,	// (0x00011002) bg_popup_window_pane_cp23

0x148f,	// (0x00009d2f) popup_tmo_big_image_note_window_g1

0x1498,	// (0x00009d38) popup_tmo_big_image_note_window_t1

0x14a6,	// (0x00009d46) popup_tmo_big_image_note_window_t2

0x14b4,	// (0x00009d54) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb5,	// (0x00018755) popup_tmo_big_image_note_window_t

0xd3ff,	// (0x00015c9f) cell_ai5_widget_lrg_icon_pane_g1

0x14c2,	// (0x00009d62) cell_ai5_widget_lrg_icon_pane_t1

0x14d0,	// (0x00009d70) cell_ai5_widget_list_row_pane_ParamLimits

0x14d0,	// (0x00009d70) cell_ai5_widget_list_row_pane

0x14e7,	// (0x00009d87) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x14e7,	// (0x00009d87) cell_ai5_widget_list_row_pane_g1

0x14f4,	// (0x00009d94) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x14f4,	// (0x00009d94) cell_ai5_widget_list_row_pane_t1

0x1522,	// (0x00009dc2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x1522,	// (0x00009dc2) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebc,	// (0x0001875c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebc,	// (0x0001875c) cell_ai5_widget_list_row_pane_t

0x6595,	// (0x0000ee35) main_fep_vtchi_ss_pane

0x1572,	// (0x00009e12) popup_fep_char_pre_window

0x157a,	// (0x00009e1a) popup_fep_ituss_window

0x15a1,	// (0x00009e41) popup_fep_vkbss_window

0x15dd,	// (0x00009e7d) grid_vkbss_keypad_pane_ParamLimits

0x15dd,	// (0x00009e7d) grid_vkbss_keypad_pane

0x15ed,	// (0x00009e8d) ituss_keypad_pane

0x857f,	// (0x00010e1f) aid_vkbss_key_offset_ParamLimits

0x857f,	// (0x00010e1f) aid_vkbss_key_offset

0x858b,	// (0x00010e2b) cell_vkbss_key_pane_ParamLimits

0x858b,	// (0x00010e2b) cell_vkbss_key_pane

0x1641,	// (0x00009ee1) bg_cell_vkbss_key_g1_ParamLimits

0x1641,	// (0x00009ee1) bg_cell_vkbss_key_g1

0x164d,	// (0x00009eed) cell_vkbss_key_3p_pane_ParamLimits

0x164d,	// (0x00009eed) cell_vkbss_key_3p_pane

0x1683,	// (0x00009f23) cell_vkbss_key_g1_ParamLimits

0x1683,	// (0x00009f23) cell_vkbss_key_g1

0x16b9,	// (0x00009f59) cell_vkbss_key_t1_ParamLimits

0x16b9,	// (0x00009f59) cell_vkbss_key_t1

0x85bf,	// (0x00010e5f) cell_ituss_key_pane_ParamLimits

0x85bf,	// (0x00010e5f) cell_ituss_key_pane

0x173a,	// (0x00009fda) bg_cell_ituss_key_g1_ParamLimits

0x173a,	// (0x00009fda) bg_cell_ituss_key_g1

0x1746,	// (0x00009fe6) cell_ituss_key_pane_g1_ParamLimits

0x1746,	// (0x00009fe6) cell_ituss_key_pane_g1

0x85d0,	// (0x00010e70) cell_ituss_key_pane_g2_ParamLimits

0x85d0,	// (0x00010e70) cell_ituss_key_pane_g2

0x0005,

0xfec3,	// (0x00018763) cell_ituss_key_pane_g_ParamLimits

0xfec3,	// (0x00018763) cell_ituss_key_pane_g

0x8654,	// (0x00010ef4) cell_ituss_key_t1_ParamLimits

0x8654,	// (0x00010ef4) cell_ituss_key_t1

0x868a,	// (0x00010f2a) cell_ituss_key_t2_ParamLimits

0x868a,	// (0x00010f2a) cell_ituss_key_t2

0x86bc,	// (0x00010f5c) cell_ituss_key_t3_ParamLimits

0x86bc,	// (0x00010f5c) cell_ituss_key_t3

0x86ed,	// (0x00010f8d) cell_ituss_key_t4_ParamLimits

0x86ed,	// (0x00010f8d) cell_ituss_key_t4

0x0004,

0xfed0,	// (0x00018770) cell_ituss_key_t_ParamLimits

0xfed0,	// (0x00018770) cell_ituss_key_t

0x18dc,	// (0x0000a17c) cell_vkbss_key_3p_pane_g1

0x18d4,	// (0x0000a174) cell_vkbss_key_3p_pane_g2

0x18cc,	// (0x0000a16c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedb,	// (0x0001877b) cell_vkbss_key_3p_pane_g

0xa42f,	// (0x00012ccf) bg_popup_fep_char_preview_window_cp02

0x18e4,	// (0x0000a184) popup_fep_char_pre_window_t1

0x089e,	// (0x0000913e) main_ai5_sk_pane

0x1122,	// (0x000099c2) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x112e,	// (0x000099ce) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x1143,	// (0x000099e3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x114f,	// (0x000099ef) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea7,	// (0x00018747) cell_contacts_ai5_widget_pane_g_ParamLimits

0x115b,	// (0x000099fb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x9632,	// (0x00011ed2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x18f2,	// (0x0000a192) main_ai5_sk_pane_g1

0xb1a9,	// (0x00013a49) popup_query_code_window_g1

0x158c,	// (0x00009e2c) popup_fep_vkb_icf_pane

0x15b4,	// (0x00009e54) popup_fep_vtchi_icf_pane

0x18fb,	// (0x0000a19b) bg_icf_pane

0x18fb,	// (0x0000a19b) list_vkb_icf_pane

0x1907,	// (0x0000a1a7) bg_icf_pane_cp01

0x191a,	// (0x0000a1ba) vtchi_icf_list_pane

0x196a,	// (0x0000a20a) list_vkb_icf_pane_t1_ParamLimits

0x196a,	// (0x0000a20a) list_vkb_icf_pane_t1

0x1982,	// (0x0000a222) vtchi_icf_list_pane_t1_ParamLimits

0x1982,	// (0x0000a222) vtchi_icf_list_pane_t1

0x157a,	// (0x00009e1a) popup_fep_ituss_window_ParamLimits

0x15b4,	// (0x00009e54) popup_fep_vtchi_icf_pane_ParamLimits

0x15ed,	// (0x00009e8d) ituss_keypad_pane_ParamLimits

0x8577,	// (0x00010e17) ituss_sks_pane

0x18fb,	// (0x0000a19b) bg_icf_pane_ParamLimits

0x154a,	// (0x00009dea) icf_edit_indi_pane_ParamLimits

0x154a,	// (0x00009dea) icf_edit_indi_pane

0x18fb,	// (0x0000a19b) list_vkb_icf_pane_ParamLimits

0x1907,	// (0x0000a1a7) bg_icf_pane_cp01_ParamLimits

0x1565,	// (0x00009e05) icf_edit_indi_pane_cp01_ParamLimits

0x1565,	// (0x00009e05) icf_edit_indi_pane_cp01

0x1922,	// (0x0000a1c2) vtchi_query_pane

0x070d,	// (0x00008fad) icf_edit_indi_pane_g1_ParamLimits

0x070d,	// (0x00008fad) icf_edit_indi_pane_g1

0x1a0c,	// (0x0000a2ac) icf_edit_indi_pane_g2_ParamLimits

0x1a0c,	// (0x0000a2ac) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x000187a6) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x000187a6) icf_edit_indi_pane_g

0x1a1e,	// (0x0000a2be) icf_edit_indi_pane_t1

0x199a,	// (0x0000a23a) bg_input_focus_pane_cp042

0x19a3,	// (0x0000a243) vtchi_button_pane

0x19ac,	// (0x0000a24c) vtchi_query_pane_t1

0x19ba,	// (0x0000a25a) vtchi_query_pane_t2

0x19c8,	// (0x0000a268) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x00018795) vtchi_query_pane_t

0x6595,	// (0x0000ee35) bg_button_pane_cp13

0x19d6,	// (0x0000a276) vtchi_button_pane_g1

0x8730,	// (0x00010fd0) ituss_sks_pane_g1

0x8739,	// (0x00010fd9) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x0001879c) ituss_sks_pane_g

0x19fe,	// (0x0000a29e) ituss_sks_pane_t1

0x19f0,	// (0x0000a290) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x000187a1) ituss_sks_pane_t

0xcefa,	// (0x0001579a) indicator_nsta_pane_cp_g1

0xcf03,	// (0x000157a3) indicator_nsta_pane_cp_g2

0xcf0b,	// (0x000157ab) indicator_nsta_pane_cp_g3

0xcf13,	// (0x000157b3) indicator_nsta_pane_cp_g4

0xcf1b,	// (0x000157bb) indicator_nsta_pane_cp_g5

0xcf23,	// (0x000157c3) indicator_nsta_pane_cp_g6

0x0005,

0xfa80,	// (0x00018320) indicator_nsta_pane_cp_g

0x0326,	// (0x00008bc6) cell_graphic2_pane_t2_ParamLimits

0x0326,	// (0x00008bc6) cell_graphic2_pane_t2

0x0001,

0xfd92,	// (0x00018632) cell_graphic2_pane_t_ParamLimits

0xfd92,	// (0x00018632) cell_graphic2_pane_t

0x0352,	// (0x00008bf2) cell_graphic2_control_pane_t1

0x9ebf,	// (0x0001275f) signal_pane_g3_ParamLimits

0x9ebf,	// (0x0001275f) signal_pane_g3

0x9ed0,	// (0x00012770) signal_pane_g4_ParamLimits

0x9ed0,	// (0x00012770) signal_pane_g4

0x1534,	// (0x00009dd4) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x1534,	// (0x00009dd4) cell_ai5_widget_list_row_pane_t3

0x17de,	// (0x0000a07e) cell_ituss_key_pane_t1_ParamLimits

0x17de,	// (0x0000a07e) cell_ituss_key_pane_t1

0xae1f,	// (0x000136bf) form_field_data_wide_pane_vc_t2_ParamLimits

0xae1f,	// (0x000136bf) form_field_data_wide_pane_vc_t2

0xae31,	// (0x000136d1) form_field_data_wide_pane_vc_t3_ParamLimits

0xae31,	// (0x000136d1) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0001807f) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0001807f) form_field_data_wide_pane_vc_t

0xcbe7,	// (0x00015487) form_field_slider_wide_pane_vc_t3_ParamLimits

0xcbe7,	// (0x00015487) form_field_slider_wide_pane_vc_t3

0xcca5,	// (0x00015545) form_field_popup_wide_pane_vc_t2_ParamLimits

0xcca5,	// (0x00015545) form_field_popup_wide_pane_vc_t2

0xccba,	// (0x0001555a) form_field_popup_wide_pane_vc_t3_ParamLimits

0xccba,	// (0x0001555a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6f,	// (0x0001830f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6f,	// (0x0001830f) form_field_popup_wide_pane_vc_t

0x8371,	// (0x00010c11) aid_fshwr2_btn_pane_ParamLimits

0x8381,	// (0x00010c21) aid_fshwr2_syb_pane_ParamLimits

0x8395,	// (0x00010c35) aid_fshwr2_txt_pane_ParamLimits

0x7c3a,	// (0x000104da) fshwr2_bg_pane_ParamLimits

0x83a5,	// (0x00010c45) fshwr2_func_candi_pane_ParamLimits

0x83bd,	// (0x00010c5d) fshwr2_hwr_syb_pane_ParamLimits

0x83cf,	// (0x00010c6f) fshwr2_icf_pane_ParamLimits

0xcb62,	// (0x00015402) list_double_graphic_pane_vc_g4_ParamLimits

0xcb62,	// (0x00015402) list_double_graphic_pane_vc_g4

0x85f0,	// (0x00010e90) cell_ituss_key_pane_g3_ParamLimits

0x85f0,	// (0x00010e90) cell_ituss_key_pane_g3

0x871e,	// (0x00010fbe) cell_ituss_key_t5_ParamLimits

0x871e,	// (0x00010fbe) cell_ituss_key_t5

0x15a1,	// (0x00009e41) popup_fep_vkbss_window_ParamLimits

0x08a8,	// (0x00009148) aid_cell_ai5_quarter

0x1a1e,	// (0x0000a2be) icf_edit_indi_pane_t1_ParamLimits

0x8c83,	// (0x00011523) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8c83,	// (0x00011523) aid_tch_indicator_popup_pane_cp2

0x8c96,	// (0x00011536) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8c96,	// (0x00011536) aid_tch_query_popup_data_pane_cp2

0xb151,	// (0x000139f1) aid_tch_query_popup_pane_ParamLimits

0xb151,	// (0x000139f1) aid_tch_query_popup_pane

0xb151,	// (0x000139f1) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xb151,	// (0x000139f1) aid_tch_query_popup_data_pane_cp1

0xa77e,	// (0x0001301e) cell_fshwr2_syb_bg_pane_ParamLimits

0x84b9,	// (0x00010d59) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x84cd,	// (0x00010d6d) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x158c,	// (0x00009e2c) popup_fep_vkb_icf_pane_ParamLimits

0x81e3,	// (0x00010a83) bg_popup_fep_char_preview_window_g10

0x09b7,	// (0x00009257) cell_ai5_widget_pane_g11_ParamLimits

0x09b7,	// (0x00009257) cell_ai5_widget_pane_g11

0x09c3,	// (0x00009263) cell_ai5_widget_pane_g12_ParamLimits

0x09c3,	// (0x00009263) cell_ai5_widget_pane_g12

0x09cf,	// (0x0000926f) cell_ai5_widget_pane_g13_ParamLimits

0x09cf,	// (0x0000926f) cell_ai5_widget_pane_g13

0x0afd,	// (0x0000939d) cell_ai5_widget_pane_t11_ParamLimits

0x0afd,	// (0x0000939d) cell_ai5_widget_pane_t11

0x0b0f,	// (0x000093af) cell_ai5_widget_pane_t12_ParamLimits

0x0b0f,	// (0x000093af) cell_ai5_widget_pane_t12

0x85fc,	// (0x00010e9c) cell_ituss_key_pane_g4_ParamLimits

0x85fc,	// (0x00010e9c) cell_ituss_key_pane_g4

0x8618,	// (0x00010eb8) cell_ituss_key_pane_g5_ParamLimits

0x8618,	// (0x00010eb8) cell_ituss_key_pane_g5

0x8634,	// (0x00010ed4) cell_ituss_key_pane_g6_ParamLimits

0x8634,	// (0x00010ed4) cell_ituss_key_pane_g6

0xac7b,	// (0x0001351b) bg_icf_pane_g1

0x192a,	// (0x0000a1ca) bg_icf_pane_g2

0x1932,	// (0x0000a1d2) bg_icf_pane_g3

0x193a,	// (0x0000a1da) bg_icf_pane_g4

0x1942,	// (0x0000a1e2) bg_icf_pane_g5

0x194a,	// (0x0000a1ea) bg_icf_pane_g6

0x1952,	// (0x0000a1f2) bg_icf_pane_g7

0x195a,	// (0x0000a1fa) bg_icf_pane_g8

0x1962,	// (0x0000a202) bg_icf_pane_g9

0x0008,

0xfee2,	// (0x00018782) bg_icf_pane_g

0x15ca,	// (0x00009e6a) popup_hyb_candi_window_ParamLimits

0x15ca,	// (0x00009e6a) popup_hyb_candi_window

0xad93,	// (0x00013633) bg_popup_sub_pane_cp01_ParamLimits

0xad93,	// (0x00013633) bg_popup_sub_pane_cp01

0x1a3c,	// (0x0000a2dc) entry_hyb_candi_pane_ParamLimits

0x1a3c,	// (0x0000a2dc) entry_hyb_candi_pane

0x1a4b,	// (0x0000a2eb) grid_hyb_candi_pane_ParamLimits

0x1a4b,	// (0x0000a2eb) grid_hyb_candi_pane

0x1a60,	// (0x0000a300) grid_hyb_phrase_pane_ParamLimits

0x1a60,	// (0x0000a300) grid_hyb_phrase_pane

0x1a6f,	// (0x0000a30f) cell_hyb_candi_pane_ParamLimits

0x1a6f,	// (0x0000a30f) cell_hyb_candi_pane

0x1a87,	// (0x0000a327) cell_hyb_candi_scroll_pane

0x9e00,	// (0x000126a0) cell_hyb_candi_pane_g1

0x1a90,	// (0x0000a330) cell_hyb_candi_pane_t1

0x1a9e,	// (0x0000a33e) cell_hyb_phrase_pane

0x9e00,	// (0x000126a0) cell_hyb_phrase_pane_g1

0x1aa7,	// (0x0000a347) cell_hyb_phrase_pane_t1

0x1ab5,	// (0x0000a355) entry_hyb_candi_pane_t1

0xa42f,	// (0x00012ccf) input_focus_pane_cp06

0x1ac3,	// (0x0000a363) cell_hyb_candi_scroll_pane_g1

0x1acb,	// (0x0000a36b) cell_hyb_candi_scroll_pane_g1_aid

0x1ad3,	// (0x0000a373) cell_hyb_candi_scroll_pane_g2

0x1adb,	// (0x0000a37b) cell_hyb_candi_scroll_pane_g2_aid

0x1ae3,	// (0x0000a383) cell_hyb_candi_scroll_pane_g3

0x1aeb,	// (0x0000a38b) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Normal
