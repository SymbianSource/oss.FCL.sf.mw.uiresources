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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000429c3 };

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
0x658f,	// (0x00048f52) Screen

0x659b,	// (0x00048f5e) application_window_ParamLimits

0x659b,	// (0x00048f5e) application_window

0x09ad,	// (0x00043370) screen_g1

0x65f7,	// (0x00048fba) area_bottom_pane_ParamLimits

0x65f7,	// (0x00048fba) area_bottom_pane

0x66b7,	// (0x0004907a) area_top_pane_ParamLimits

0x66b7,	// (0x0004907a) area_top_pane

0x674b,	// (0x0004910e) main_pane_ParamLimits

0x674b,	// (0x0004910e) main_pane

0x09b7,	// (0x0004337a) misc_graphics

0x9835,	// (0x0004c1f8) battery_pane_ParamLimits

0x9835,	// (0x0004c1f8) battery_pane

0xa503,	// (0x0004cec6) bg_status_flat_pane_g8

0xa50b,	// (0x0004cece) bg_status_flat_pane_g9

0x98fd,	// (0x0004c2c0) context_pane_ParamLimits

0x98fd,	// (0x0004c2c0) context_pane

0x9a13,	// (0x0004c3d6) navi_pane_ParamLimits

0x9a13,	// (0x0004c3d6) navi_pane

0x9a97,	// (0x0004c45a) signal_pane_ParamLimits

0x9a97,	// (0x0004c45a) signal_pane

0x0008,

0xf874,	// (0x00052237) bg_status_flat_pane_g

0x9b04,	// (0x0004c4c7) status_pane_g1_ParamLimits

0x9b04,	// (0x0004c4c7) status_pane_g1

0x9b18,	// (0x0004c4db) status_pane_g2_ParamLimits

0x9b18,	// (0x0004c4db) status_pane_g2

0x9b24,	// (0x0004c4e7) status_pane_g3_ParamLimits

0x9b24,	// (0x0004c4e7) status_pane_g3

0x0004,

0xf79b,	// (0x0005215e) status_pane_g_ParamLimits

0xf79b,	// (0x0005215e) status_pane_g

0x9b58,	// (0x0004c51b) title_pane_ParamLimits

0x9b58,	// (0x0004c51b) title_pane

0x9b95,	// (0x0004c558) uni_indicator_pane_ParamLimits

0x9b95,	// (0x0004c558) uni_indicator_pane

0x9765,	// (0x0004c128) bg_list_pane_ParamLimits

0x9765,	// (0x0004c128) bg_list_pane

0x7b8f,	// (0x0004a552) find_pane

0x9785,	// (0x0004c148) listscroll_app_pane_ParamLimits

0x9785,	// (0x0004c148) listscroll_app_pane

0x9791,	// (0x0004c154) listscroll_form_pane

0x7b97,	// (0x0004a55a) listscroll_gen_pane_ParamLimits

0x7b97,	// (0x0004a55a) listscroll_gen_pane

0x7bab,	// (0x0004a56e) listscroll_set_pane

0x70ee,	// (0x00049ab1) main_idle_act_pane

0x4ba3,	// (0x00047566) main_idle_trad_pane

0x4ba3,	// (0x00047566) main_list_empty_pane

0x9785,	// (0x0004c148) main_midp_pane

0x97ab,	// (0x0004c16e) main_pane_g1_ParamLimits

0x97ab,	// (0x0004c16e) main_pane_g1

0x7bb3,	// (0x0004a576) popup_ai_message_window_ParamLimits

0x7bb3,	// (0x0004a576) popup_ai_message_window

0x7c57,	// (0x0004a61a) popup_fep_china_uni_window_ParamLimits

0x7c57,	// (0x0004a61a) popup_fep_china_uni_window

0x7cb1,	// (0x0004a674) popup_fep_japan_candidate_window_ParamLimits

0x7cb1,	// (0x0004a674) popup_fep_japan_candidate_window

0x7ccf,	// (0x0004a692) popup_fep_japan_predictive_window_ParamLimits

0x7ccf,	// (0x0004a692) popup_fep_japan_predictive_window

0x7cff,	// (0x0004a6c2) popup_find_window

0x7d0c,	// (0x0004a6cf) popup_grid_graphic_window_ParamLimits

0x7d0c,	// (0x0004a6cf) popup_grid_graphic_window

0x7d36,	// (0x0004a6f9) popup_large_graphic_colour_window

0x7d5c,	// (0x0004a71f) popup_menu_window_ParamLimits

0x7d5c,	// (0x0004a71f) popup_menu_window

0x7f18,	// (0x0004a8db) popup_note_image_window

0x7f04,	// (0x0004a8c7) popup_note_wait_window_ParamLimits

0x7f04,	// (0x0004a8c7) popup_note_wait_window

0x7f04,	// (0x0004a8c7) popup_note_window_ParamLimits

0x7f04,	// (0x0004a8c7) popup_note_window

0x7f6e,	// (0x0004a931) popup_query_code_window_ParamLimits

0x7f6e,	// (0x0004a931) popup_query_code_window

0x7f82,	// (0x0004a945) popup_query_data_code_window_ParamLimits

0x7f82,	// (0x0004a945) popup_query_data_code_window

0x7f9f,	// (0x0004a962) popup_query_data_window_ParamLimits

0x7f9f,	// (0x0004a962) popup_query_data_window

0x7fbb,	// (0x0004a97e) popup_query_sat_info_window_ParamLimits

0x7fbb,	// (0x0004a97e) popup_query_sat_info_window

0x7ff4,	// (0x0004a9b7) popup_snote_single_graphic_window_ParamLimits

0x7ff4,	// (0x0004a9b7) popup_snote_single_graphic_window

0x7ff4,	// (0x0004a9b7) popup_snote_single_text_window_ParamLimits

0x7ff4,	// (0x0004a9b7) popup_snote_single_text_window

0x8009,	// (0x0004a9cc) popup_sub_window_general

0x8139,	// (0x0004aafc) popup_window_general_ParamLimits

0x8139,	// (0x0004aafc) popup_window_general

0x97b9,	// (0x0004c17c) power_save_pane

0x7a13,	// (0x0004a3d6) control_pane_g1_ParamLimits

0x7a13,	// (0x0004a3d6) control_pane_g1

0x7a3a,	// (0x0004a3fd) control_pane_g2_ParamLimits

0x7a3a,	// (0x0004a3fd) control_pane_g2

0x7a61,	// (0x0004a424) control_pane_g3_ParamLimits

0x7a61,	// (0x0004a424) control_pane_g3

0x0007,

0xf783,	// (0x00052146) control_pane_g_ParamLimits

0xf783,	// (0x00052146) control_pane_g

0x7a92,	// (0x0004a455) control_pane_t1_ParamLimits

0x7a92,	// (0x0004a455) control_pane_t1

0x7ae6,	// (0x0004a4a9) control_pane_t2_ParamLimits

0x7ae6,	// (0x0004a4a9) control_pane_t2

0x0002,

0xf794,	// (0x00052157) control_pane_t_ParamLimits

0xf794,	// (0x00052157) control_pane_t

0x796c,	// (0x0004a32f) navi_navi_volume_pane_cp1

0x7974,	// (0x0004a337) status_small_icon_pane

0x4d4e,	// (0x00047711) status_small_pane_g1_ParamLimits

0x4d4e,	// (0x00047711) status_small_pane_g1

0x797c,	// (0x0004a33f) status_small_pane_g2_ParamLimits

0x797c,	// (0x0004a33f) status_small_pane_g2

0x7988,	// (0x0004a34b) status_small_pane_g3_ParamLimits

0x7988,	// (0x0004a34b) status_small_pane_g3

0x7994,	// (0x0004a357) status_small_pane_g4_ParamLimits

0x7994,	// (0x0004a357) status_small_pane_g4

0x79a0,	// (0x0004a363) status_small_pane_g5_ParamLimits

0x79a0,	// (0x0004a363) status_small_pane_g5

0x79ae,	// (0x0004a371) status_small_pane_g6_ParamLimits

0x79ae,	// (0x0004a371) status_small_pane_g6

0x0007,

0xf772,	// (0x00052135) status_small_pane_g_ParamLimits

0xf772,	// (0x00052135) status_small_pane_g

0x79dd,	// (0x0004a3a0) status_small_pane_t1

0x79ff,	// (0x0004a3c2) status_small_wait_pane_ParamLimits

0x79ff,	// (0x0004a3c2) status_small_wait_pane

0x74c1,	// (0x00049e84) aid_levels_signal_ParamLimits

0x74c1,	// (0x00049e84) aid_levels_signal

0x74d3,	// (0x00049e96) signal_pane_g1_ParamLimits

0x74d3,	// (0x00049e96) signal_pane_g1

0x74e8,	// (0x00049eab) signal_pane_g2_ParamLimits

0x74e8,	// (0x00049eab) signal_pane_g2

0x0003,

0xf703,	// (0x000520c6) signal_pane_g_ParamLimits

0xf703,	// (0x000520c6) signal_pane_g

0x1250,	// (0x00043c13) context_pane_g1

0x698c,	// (0x0004934f) title_pane_g1

0x69b6,	// (0x00049379) title_pane_t1

0x09cd,	// (0x00043390) title_pane_t2

0x09f3,	// (0x000433b6) title_pane_t3

0x0002,

0xf557,	// (0x00051f1a) title_pane_t

0x9bad,	// (0x0004c570) aid_levels_battery_ParamLimits

0x9bad,	// (0x0004c570) aid_levels_battery

0x9bc1,	// (0x0004c584) battery_pane_g1_ParamLimits

0x9bc1,	// (0x0004c584) battery_pane_g1

0x9bd7,	// (0x0004c59a) battery_pane_g2_ParamLimits

0x9bd7,	// (0x0004c59a) battery_pane_g2

0x0001,

0xf7a6,	// (0x00052169) battery_pane_g_ParamLimits

0xf7a6,	// (0x00052169) battery_pane_g

0xae27,	// (0x0004d7ea) uni_indicator_pane_g1

0xae3a,	// (0x0004d7fd) uni_indicator_pane_g2

0xae4c,	// (0x0004d80f) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x000522df) uni_indicator_pane_g

0x4a43,	// (0x00047406) navi_icon_pane_ParamLimits

0x4a43,	// (0x00047406) navi_icon_pane

0x4998,	// (0x0004735b) navi_midp_pane

0x4a5f,	// (0x00047422) navi_navi_pane

0x4a69,	// (0x0004742c) navi_text_pane_ParamLimits

0x4a69,	// (0x0004742c) navi_text_pane

0x09ad,	// (0x00043370) status_small_wait_pane_g1

0x0c44,	// (0x00043607) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x000522da) status_small_wait_pane_g

0xab4e,	// (0x0004d511) navi_navi_icon_text_pane

0xab56,	// (0x0004d519) navi_navi_pane_g1_ParamLimits

0xab56,	// (0x0004d519) navi_navi_pane_g1

0xab68,	// (0x0004d52b) navi_navi_pane_g2_ParamLimits

0xab68,	// (0x0004d52b) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x000522a8) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x000522a8) navi_navi_pane_g

0xab7a,	// (0x0004d53d) navi_navi_tabs_pane

0xab83,	// (0x0004d546) navi_navi_text_pane

0xab4e,	// (0x0004d511) navi_navi_volume_pane

0xab2a,	// (0x0004d4ed) navi_text_pane_t1

0xab1e,	// (0x0004d4e1) navi_icon_pane_g1

0xaa71,	// (0x0004d434) navi_navi_text_pane_t1

0x83ef,	// (0x0004adb2) navi_navi_volume_pane_g1

0x83f7,	// (0x0004adba) volume_small_pane

0xa9d7,	// (0x0004d39a) navi_navi_icon_text_pane_g1

0xa9df,	// (0x0004d3a2) navi_navi_icon_text_pane_t1

0x4a5f,	// (0x00047422) navi_tabs_2_long_pane

0x4a5f,	// (0x00047422) navi_tabs_2_pane

0x4a5f,	// (0x00047422) navi_tabs_3_long_pane

0x4a5f,	// (0x00047422) navi_tabs_3_pane

0x4a5f,	// (0x00047422) navi_tabs_4_pane

0x83cf,	// (0x0004ad92) tabs_2_active_pane_ParamLimits

0x83cf,	// (0x0004ad92) tabs_2_active_pane

0x83df,	// (0x0004ada2) tabs_2_passive_pane_ParamLimits

0x83df,	// (0x0004ada2) tabs_2_passive_pane

0x839d,	// (0x0004ad60) tabs_3_active_pane_ParamLimits

0x839d,	// (0x0004ad60) tabs_3_active_pane

0x83ad,	// (0x0004ad70) tabs_3_passive_pane_ParamLimits

0x83ad,	// (0x0004ad70) tabs_3_passive_pane

0x83be,	// (0x0004ad81) tabs_3_passive_pane_cp_ParamLimits

0x83be,	// (0x0004ad81) tabs_3_passive_pane_cp

0x8359,	// (0x0004ad1c) tabs_4_active_pane_ParamLimits

0x8359,	// (0x0004ad1c) tabs_4_active_pane

0x836a,	// (0x0004ad2d) tabs_4_passive_pane_ParamLimits

0x836a,	// (0x0004ad2d) tabs_4_passive_pane

0x837b,	// (0x0004ad3e) tabs_4_passive_pane_cp_ParamLimits

0x837b,	// (0x0004ad3e) tabs_4_passive_pane_cp

0x838c,	// (0x0004ad4f) tabs_4_passive_pane_cp2_ParamLimits

0x838c,	// (0x0004ad4f) tabs_4_passive_pane_cp2

0x8335,	// (0x0004acf8) tabs_2_long_active_pane_ParamLimits

0x8335,	// (0x0004acf8) tabs_2_long_active_pane

0x8347,	// (0x0004ad0a) tabs_2_long_passive_pane_ParamLimits

0x8347,	// (0x0004ad0a) tabs_2_long_passive_pane

0x82f0,	// (0x0004acb3) tabs_3_long_active_pane_ParamLimits

0x82f0,	// (0x0004acb3) tabs_3_long_active_pane

0x8309,	// (0x0004accc) tabs_3_long_passive_pane_ParamLimits

0x8309,	// (0x0004accc) tabs_3_long_passive_pane

0x831c,	// (0x0004acdf) tabs_3_long_passive_pane_cp_ParamLimits

0x831c,	// (0x0004acdf) tabs_3_long_passive_pane_cp

0x8296,	// (0x0004ac59) volume_small_pane_g1

0x829f,	// (0x0004ac62) volume_small_pane_g2

0x82a8,	// (0x0004ac6b) volume_small_pane_g3

0x82b1,	// (0x0004ac74) volume_small_pane_g4

0x82ba,	// (0x0004ac7d) volume_small_pane_g5

0x82c3,	// (0x0004ac86) volume_small_pane_g6

0x82cc,	// (0x0004ac8f) volume_small_pane_g7

0x82d5,	// (0x0004ac98) volume_small_pane_g8

0x82de,	// (0x0004aca1) volume_small_pane_g9

0x82e7,	// (0x0004acaa) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00052274) volume_small_pane_g

0x0a13,	// (0x000433d6) bg_active_tab_pane_cp2_ParamLimits

0x0a13,	// (0x000433d6) bg_active_tab_pane_cp2

0x6a1e,	// (0x000493e1) tabs_3_active_pane_g1

0x6a26,	// (0x000493e9) tabs_3_active_pane_t1

0x0a13,	// (0x000433d6) bg_passive_tab_pane_cp2_ParamLimits

0x0a13,	// (0x000433d6) bg_passive_tab_pane_cp2

0x6a1e,	// (0x000493e1) tabs_3_passive_pane_g1

0x6a26,	// (0x000493e9) tabs_3_passive_pane_t1

0x0a13,	// (0x000433d6) bg_active_tab_pane_cp3_ParamLimits

0x0a13,	// (0x000433d6) bg_active_tab_pane_cp3

0x6a38,	// (0x000493fb) tabs_4_active_pane_g1

0x6a40,	// (0x00049403) tabs_4_active_pane_t1

0x0a13,	// (0x000433d6) bg_passive_tab_pane_cp3_ParamLimits

0x0a13,	// (0x000433d6) bg_passive_tab_pane_cp3

0x6a38,	// (0x000493fb) tabs_4_1_passive_pane_g1

0x6a40,	// (0x00049403) tabs_4_1_passive_pane_t1

0x9785,	// (0x0004c148) list_highlight_pane_cp2

0xb08f,	// (0x0004da52) list_set_pane_ParamLimits

0xb08f,	// (0x0004da52) list_set_pane

0xb131,	// (0x0004daf4) main_pane_set_t1_ParamLimits

0xb131,	// (0x0004daf4) main_pane_set_t1

0xb151,	// (0x0004db14) main_pane_set_t2_ParamLimits

0xb151,	// (0x0004db14) main_pane_set_t2

0xb165,	// (0x0004db28) main_pane_set_t3_ParamLimits

0xb165,	// (0x0004db28) main_pane_set_t3

0xb177,	// (0x0004db3a) main_pane_set_t4_ParamLimits

0xb177,	// (0x0004db3a) main_pane_set_t4

0x0003,

0xf981,	// (0x00052344) main_pane_set_t_ParamLimits

0xf981,	// (0x00052344) main_pane_set_t

0xb189,	// (0x0004db4c) setting_code_pane

0xb195,	// (0x0004db58) setting_slider_graphic_pane

0xb195,	// (0x0004db58) setting_slider_pane

0xb195,	// (0x0004db58) setting_text_pane

0xb195,	// (0x0004db58) setting_volume_pane

0x6a52,	// (0x00049415) volume_set_pane

0x0a13,	// (0x000433d6) bg_set_opt_pane_cp

0x6a5a,	// (0x0004941d) setting_slider_pane_t1

0x6a73,	// (0x00049436) setting_slider_pane_t2

0x6a8d,	// (0x00049450) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00051f21) setting_slider_pane_t

0x6aa5,	// (0x00049468) slider_set_pane

0x09b7,	// (0x0004337a) bg_set_opt_pane_cp2

0x0a21,	// (0x000433e4) setting_slider_graphic_pane_g1

0x6abb,	// (0x0004947e) setting_slider_graphic_pane_t1

0x6acb,	// (0x0004948e) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00051f28) setting_slider_graphic_pane_t

0x6adb,	// (0x0004949e) slider_set_pane_cp

0x09b7,	// (0x0004337a) input_focus_pane_cp1

0xb04e,	// (0x0004da11) list_set_text_pane

0x09ad,	// (0x00043370) setting_text_pane_g1

0x09b7,	// (0x0004337a) input_focus_pane_cp2

0x09ad,	// (0x00043370) setting_code_pane_g1

0x0a2a,	// (0x000433ed) setting_code_pane_t1

0x573c,	// (0x000480ff) set_text_pane_t1_ParamLimits

0x573c,	// (0x000480ff) set_text_pane_t1

0x0e1d,	// (0x000437e0) set_opt_bg_pane_g1

0x0e25,	// (0x000437e8) set_opt_bg_pane_g2

0xb028,	// (0x0004d9eb) set_opt_bg_pane_g3

0x0e35,	// (0x000437f8) set_opt_bg_pane_g4

0x0e3d,	// (0x00043800) set_opt_bg_pane_g5

0x0e45,	// (0x00043808) set_opt_bg_pane_g6

0xb032,	// (0x0004d9f5) set_opt_bg_pane_g7

0xb03a,	// (0x0004d9fd) set_opt_bg_pane_g8

0xb044,	// (0x0004da07) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00052331) set_opt_bg_pane_g

0xb01b,	// (0x0004d9de) slider_set_pane_g1

0x8464,	// (0x0004ae27) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00052322) slider_set_pane_g

0x8400,	// (0x0004adc3) volume_set_pane_g1

0x8408,	// (0x0004adcb) volume_set_pane_g2

0x8410,	// (0x0004add3) volume_set_pane_g3

0x8418,	// (0x0004addb) volume_set_pane_g4

0x8420,	// (0x0004ade3) volume_set_pane_g5

0x8428,	// (0x0004adeb) volume_set_pane_g6

0x8430,	// (0x0004adf3) volume_set_pane_g7

0x8438,	// (0x0004adfb) volume_set_pane_g8

0x8440,	// (0x0004ae03) volume_set_pane_g9

0x8448,	// (0x0004ae0b) volume_set_pane_g10

0x0009,

0xf937,	// (0x000522fa) volume_set_pane_g

0x6ae3,	// (0x000494a6) indicator_pane_ParamLimits

0x6ae3,	// (0x000494a6) indicator_pane

0x6aef,	// (0x000494b2) main_idle_pane_g2_ParamLimits

0x6aef,	// (0x000494b2) main_idle_pane_g2

0x6b17,	// (0x000494da) main_pane_idle_g1_ParamLimits

0x6b17,	// (0x000494da) main_pane_idle_g1

0x0a38,	// (0x000433fb) popup_clock_digital_analogue_window_ParamLimits

0x0a38,	// (0x000433fb) popup_clock_digital_analogue_window

0x6b24,	// (0x000494e7) soft_indicator_pane_ParamLimits

0x6b24,	// (0x000494e7) soft_indicator_pane

0x6b30,	// (0x000494f3) wallpaper_pane_ParamLimits

0x6b30,	// (0x000494f3) wallpaper_pane

0x09ad,	// (0x00043370) wallpaper_pane_g1

0x6b3c,	// (0x000494ff) indicator_pane_g1_ParamLimits

0x6b3c,	// (0x000494ff) indicator_pane_g1

0xb417,	// (0x0004ddda) navi_navi_icon_text_pane_srt_g1

0x0a66,	// (0x00043429) soft_indicator_pane_t1

0x0a80,	// (0x00043443) aid_ps_area_pane

0x6b48,	// (0x0004950b) aid_ps_clock_pane

0x0a91,	// (0x00043454) aid_ps_indicator_pane

0x0a9d,	// (0x00043460) indicator_ps_pane_ParamLimits

0x0a9d,	// (0x00043460) indicator_ps_pane

0x0aac,	// (0x0004346f) power_save_pane_g1_ParamLimits

0x0aac,	// (0x0004346f) power_save_pane_g1

0x0ab8,	// (0x0004347b) power_save_pane_g2_ParamLimits

0x0ab8,	// (0x0004347b) power_save_pane_g2

0x65ab,	// (0x00048f6e) aid_navinavi_width_pane

0x0a80,	// (0x00043443) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00051f2d) power_save_pane_g_ParamLimits

0xf56a,	// (0x00051f2d) power_save_pane_g

0x0ac6,	// (0x00043489) power_save_pane_t1_ParamLimits

0x0ac6,	// (0x00043489) power_save_pane_t1

0x6b48,	// (0x0004950b) aid_ps_clock_pane_ParamLimits

0x0a91,	// (0x00043454) aid_ps_indicator_pane_ParamLimits

0x0ad8,	// (0x0004349b) power_save_pane_t4_ParamLimits

0x0ad8,	// (0x0004349b) power_save_pane_t4

0x0001,

0xf56f,	// (0x00051f32) power_save_pane_t_ParamLimits

0xf56f,	// (0x00051f32) power_save_pane_t

0x0b02,	// (0x000434c5) power_save_t3_ParamLimits

0x0b02,	// (0x000434c5) power_save_t3

0x0aed,	// (0x000434b0) power_save_t2_ParamLimits

0x0aed,	// (0x000434b0) power_save_t2

0x0b17,	// (0x000434da) indicator_ps_pane_g1

0x6b56,	// (0x00049519) ai_gene_pane_ParamLimits

0x6b56,	// (0x00049519) ai_gene_pane

0x6b62,	// (0x00049525) ai_links_pane_ParamLimits

0x6b62,	// (0x00049525) ai_links_pane

0x6b6e,	// (0x00049531) indicator_pane_cp1_ParamLimits

0x6b6e,	// (0x00049531) indicator_pane_cp1

0x6b7a,	// (0x0004953d) main_pane_idle_g1_cp_ParamLimits

0x6b7a,	// (0x0004953d) main_pane_idle_g1_cp

0x6b86,	// (0x00049549) popup_ai_links_title_window

0x6b8f,	// (0x00049552) soft_indicator_pane_cp1_ParamLimits

0x6b8f,	// (0x00049552) soft_indicator_pane_cp1

0xae15,	// (0x0004d7d8) ai_links_pane_g1

0xae1e,	// (0x0004d7e1) grid_ai_links_pane

0xadf8,	// (0x0004d7bb) ai_gene_pane_1

0xae03,	// (0x0004d7c6) ai_gene_pane_2

0xae0c,	// (0x0004d7cf) list_highlight_pane_cp4

0xaddc,	// (0x0004d79f) cell_ai_link_pane_ParamLimits

0xaddc,	// (0x0004d79f) cell_ai_link_pane

0xadd4,	// (0x0004d797) cell_ai_link_pane_g1

0x0c44,	// (0x00043607) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x000522d5) cell_ai_link_pane_g

0x09b7,	// (0x0004337a) grid_highlight_cp2

0x09b7,	// (0x0004337a) bg_popup_sub_pane_cp1

0x0b2e,	// (0x000434f1) popup_ai_links_title_window_t1

0xad24,	// (0x0004d6e7) ai_gene_pane_1_g1_ParamLimits

0xad24,	// (0x0004d6e7) ai_gene_pane_1_g1

0xad30,	// (0x0004d6f3) ai_gene_pane_1_g2_ParamLimits

0xad30,	// (0x0004d6f3) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x000522cb) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x000522cb) ai_gene_pane_1_g

0xad3d,	// (0x0004d700) ai_gene_pane_1_t1_ParamLimits

0xad3d,	// (0x0004d700) ai_gene_pane_1_t1

0xad71,	// (0x0004d734) grid_ai_soft_ind_pane

0xad0f,	// (0x0004d6d2) ai_gene_pane_2_t1_ParamLimits

0xad0f,	// (0x0004d6d2) ai_gene_pane_2_t1

0x6b9b,	// (0x0004955e) main_pane_empty_t1_ParamLimits

0x6b9b,	// (0x0004955e) main_pane_empty_t1

0x6bb3,	// (0x00049576) main_pane_empty_t2_ParamLimits

0x6bb3,	// (0x00049576) main_pane_empty_t2

0x6bc8,	// (0x0004958b) main_pane_empty_t3_ParamLimits

0x6bc8,	// (0x0004958b) main_pane_empty_t3

0x6bda,	// (0x0004959d) main_pane_empty_t4_ParamLimits

0x6bda,	// (0x0004959d) main_pane_empty_t4

0x6bec,	// (0x000495af) main_pane_empty_t5_ParamLimits

0x6bec,	// (0x000495af) main_pane_empty_t5

0x0004,

0xf574,	// (0x00051f37) main_pane_empty_t_ParamLimits

0xf574,	// (0x00051f37) main_pane_empty_t

0x0e6e,	// (0x00043831) bg_popup_window_pane_ParamLimits

0x0e6e,	// (0x00043831) bg_popup_window_pane

0xaa7f,	// (0x0004d442) find_popup_pane_cp2_ParamLimits

0xaa7f,	// (0x0004d442) find_popup_pane_cp2

0xaa8b,	// (0x0004d44e) heading_pane_ParamLimits

0xaa8b,	// (0x0004d44e) heading_pane

0x09b7,	// (0x0004337a) bg_popup_sub_pane

0xa9f9,	// (0x0004d3bc) bg_popup_window_pane_g1_ParamLimits

0xa9f9,	// (0x0004d3bc) bg_popup_window_pane_g1

0xaa05,	// (0x0004d3c8) bg_popup_window_pane_g2_ParamLimits

0xaa05,	// (0x0004d3c8) bg_popup_window_pane_g2

0xaa11,	// (0x0004d3d4) bg_popup_window_pane_g3_ParamLimits

0xaa11,	// (0x0004d3d4) bg_popup_window_pane_g3

0xaa1d,	// (0x0004d3e0) bg_popup_window_pane_g4_ParamLimits

0xaa1d,	// (0x0004d3e0) bg_popup_window_pane_g4

0xaa29,	// (0x0004d3ec) bg_popup_window_pane_g5_ParamLimits

0xaa29,	// (0x0004d3ec) bg_popup_window_pane_g5

0xaa35,	// (0x0004d3f8) bg_popup_window_pane_g6_ParamLimits

0xaa35,	// (0x0004d3f8) bg_popup_window_pane_g6

0xaa41,	// (0x0004d404) bg_popup_window_pane_g7_ParamLimits

0xaa41,	// (0x0004d404) bg_popup_window_pane_g7

0xaa4d,	// (0x0004d410) bg_popup_window_pane_g8_ParamLimits

0xaa4d,	// (0x0004d410) bg_popup_window_pane_g8

0xaa59,	// (0x0004d41c) bg_popup_window_pane_g9_ParamLimits

0xaa59,	// (0x0004d41c) bg_popup_window_pane_g9

0xaa65,	// (0x0004d428) bg_popup_window_pane_g10_ParamLimits

0xaa65,	// (0x0004d428) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x00052293) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x00052293) bg_popup_window_pane_g

0xa98e,	// (0x0004d351) bg_popup_heading_pane_ParamLimits

0xa98e,	// (0x0004d351) bg_popup_heading_pane

0x8588,	// (0x0004af4b) tabs_4_passive_pane_cp_srt_ParamLimits

0x8588,	// (0x0004af4b) tabs_4_passive_pane_cp_srt

0x859a,	// (0x0004af5d) tabs_4_passive_pane_srt_ParamLimits

0xa9a2,	// (0x0004d365) heading_pane_g2

0x859a,	// (0x0004af5d) tabs_4_passive_pane_srt

0x9785,	// (0x0004c148) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9785,	// (0x0004c148) bg_passive_tab_pane_cp3_srt

0xa9aa,	// (0x0004d36d) heading_pane_t1_ParamLimits

0xa9aa,	// (0x0004d36d) heading_pane_t1

0xa9c1,	// (0x0004d384) heading_pane_t2_ParamLimits

0xa9c1,	// (0x0004d384) heading_pane_t2

0x0001,

0xf8cb,	// (0x0005228e) heading_pane_t_ParamLimits

0xf8cb,	// (0x0005228e) heading_pane_t

0xa4cb,	// (0x0004ce8e) bg_popup_heading_pane_g1

0xa57a,	// (0x0004cf3d) bg_popup_heading_pane_g2

0xa584,	// (0x0004cf47) bg_popup_heading_pane_g3

0xa58e,	// (0x0004cf51) bg_popup_heading_pane_g4

0xa598,	// (0x0004cf5b) bg_popup_heading_pane_g5

0xa5a2,	// (0x0004cf65) bg_popup_heading_pane_g6

0xa5aa,	// (0x0004cf6d) bg_popup_heading_pane_g7

0xa5b2,	// (0x0004cf75) bg_popup_heading_pane_g8

0xa5bc,	// (0x0004cf7f) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0005224a) bg_popup_heading_pane_g

0x9cac,	// (0x0004c66f) bg_popup_sub_pane_g1

0x9cb4,	// (0x0004c677) bg_popup_sub_pane_g2

0x9cbc,	// (0x0004c67f) bg_popup_sub_pane_g3

0x9cc4,	// (0x0004c687) bg_popup_sub_pane_g4

0x9ccc,	// (0x0004c68f) bg_popup_sub_pane_g5

0x9cd4,	// (0x0004c697) bg_popup_sub_pane_g6

0x9cdc,	// (0x0004c69f) bg_popup_sub_pane_g7

0x9ce4,	// (0x0004c6a7) bg_popup_sub_pane_g8

0x9cec,	// (0x0004c6af) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00052224) bg_popup_sub_pane_g

0x0a05,	// (0x000433c8) bg_popup_window_pane_cp5_ParamLimits

0x0a05,	// (0x000433c8) bg_popup_window_pane_cp5

0x0b4b,	// (0x0004350e) popup_note_window_g1_ParamLimits

0x0b4b,	// (0x0004350e) popup_note_window_g1

0x0b57,	// (0x0004351a) popup_note_window_t1_ParamLimits

0x0b57,	// (0x0004351a) popup_note_window_t1

0x0b6d,	// (0x00043530) popup_note_window_t2_ParamLimits

0x0b6d,	// (0x00043530) popup_note_window_t2

0x0b83,	// (0x00043546) popup_note_window_t3_ParamLimits

0x0b83,	// (0x00043546) popup_note_window_t3

0x0b99,	// (0x0004355c) popup_note_window_t4_ParamLimits

0x0b99,	// (0x0004355c) popup_note_window_t4

0x0bc1,	// (0x00043584) popup_note_window_t5_ParamLimits

0x0bc1,	// (0x00043584) popup_note_window_t5

0x0004,

0xf57f,	// (0x00051f42) popup_note_window_t_ParamLimits

0xf57f,	// (0x00051f42) popup_note_window_t

0x0be5,	// (0x000435a8) bg_popup_window_pane_cp6_ParamLimits

0x0be5,	// (0x000435a8) bg_popup_window_pane_cp6

0xa447,	// (0x0004ce0a) popup_note_image_window_g1_ParamLimits

0xa447,	// (0x0004ce0a) popup_note_image_window_g1

0xa453,	// (0x0004ce16) popup_note_image_window_g2_ParamLimits

0xa453,	// (0x0004ce16) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00052218) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00052218) popup_note_image_window_g

0xa46c,	// (0x0004ce2f) popup_note_image_window_t1_ParamLimits

0xa46c,	// (0x0004ce2f) popup_note_image_window_t1

0xa485,	// (0x0004ce48) popup_note_image_window_t2_ParamLimits

0xa485,	// (0x0004ce48) popup_note_image_window_t2

0xa49e,	// (0x0004ce61) popup_note_image_window_t3_ParamLimits

0xa49e,	// (0x0004ce61) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0005221d) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0005221d) popup_note_image_window_t

0xa310,	// (0x0004ccd3) bg_popup_window_pane_cp7_ParamLimits

0xa310,	// (0x0004ccd3) bg_popup_window_pane_cp7

0xa340,	// (0x0004cd03) popup_note_wait_window_g1_ParamLimits

0xa340,	// (0x0004cd03) popup_note_wait_window_g1

0xa34c,	// (0x0004cd0f) popup_note_wait_window_g2_ParamLimits

0xa34c,	// (0x0004cd0f) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00052206) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00052206) popup_note_wait_window_g

0xa364,	// (0x0004cd27) popup_note_wait_window_t1_ParamLimits

0xa364,	// (0x0004cd27) popup_note_wait_window_t1

0xa38b,	// (0x0004cd4e) popup_note_wait_window_t2_ParamLimits

0xa38b,	// (0x0004cd4e) popup_note_wait_window_t2

0xa3a8,	// (0x0004cd6b) popup_note_wait_window_t3_ParamLimits

0xa3a8,	// (0x0004cd6b) popup_note_wait_window_t3

0xa3bb,	// (0x0004cd7e) popup_note_wait_window_t4_ParamLimits

0xa3bb,	// (0x0004cd7e) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0005220d) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0005220d) popup_note_wait_window_t

0xa3e0,	// (0x0004cda3) wait_bar_pane_ParamLimits

0xa3e0,	// (0x0004cda3) wait_bar_pane

0x09b7,	// (0x0004337a) wait_anim_pane

0x09b7,	// (0x0004337a) wait_border_pane

0x09ad,	// (0x00043370) wait_anim_pane_g1

0x09ad,	// (0x00043370) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x000520c1) wait_anim_pane_g

0xa2bc,	// (0x0004cc7f) wait_border_pane_g1

0xa2c7,	// (0x0004cc8a) wait_border_pane_g2

0xa2d0,	// (0x0004cc93) wait_border_pane_g3

0x0002,

0xf83c,	// (0x000521ff) wait_border_pane_g

0xa127,	// (0x0004caea) bg_popup_window_pane_cp16_ParamLimits

0xa127,	// (0x0004caea) bg_popup_window_pane_cp16

0xa227,	// (0x0004cbea) indicator_popup_pane_cp4_ParamLimits

0xa227,	// (0x0004cbea) indicator_popup_pane_cp4

0xa23b,	// (0x0004cbfe) popup_query_data_window_t1_ParamLimits

0xa23b,	// (0x0004cbfe) popup_query_data_window_t1

0xa24d,	// (0x0004cc10) popup_query_data_window_t2_ParamLimits

0xa24d,	// (0x0004cc10) popup_query_data_window_t2

0xa266,	// (0x0004cc29) popup_query_data_window_t3_ParamLimits

0xa266,	// (0x0004cc29) popup_query_data_window_t3

0x0002,

0xf835,	// (0x000521f8) popup_query_data_window_t_ParamLimits

0xf835,	// (0x000521f8) popup_query_data_window_t

0xa280,	// (0x0004cc43) query_popup_data_pane_ParamLimits

0xa280,	// (0x0004cc43) query_popup_data_pane

0xa294,	// (0x0004cc57) query_popup_data_pane_cp1_ParamLimits

0xa294,	// (0x0004cc57) query_popup_data_pane_cp1

0xa127,	// (0x0004caea) bg_popup_window_pane_cp10_ParamLimits

0xa127,	// (0x0004caea) bg_popup_window_pane_cp10

0xa159,	// (0x0004cb1c) indicator_popup_pane_ParamLimits

0xa159,	// (0x0004cb1c) indicator_popup_pane

0xa17b,	// (0x0004cb3e) popup_query_code_window_t1_ParamLimits

0xa17b,	// (0x0004cb3e) popup_query_code_window_t1

0xa195,	// (0x0004cb58) popup_query_code_window_t2_ParamLimits

0xa195,	// (0x0004cb58) popup_query_code_window_t2

0xa1de,	// (0x0004cba1) popup_query_code_window_t3_ParamLimits

0xa1de,	// (0x0004cba1) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x000521f1) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x000521f1) popup_query_code_window_t

0xa20d,	// (0x0004cbd0) query_popup_pane_ParamLimits

0xa20d,	// (0x0004cbd0) query_popup_pane

0x0be5,	// (0x000435a8) bg_popup_window_pane_cp15_ParamLimits

0x0be5,	// (0x000435a8) bg_popup_window_pane_cp15

0x6c26,	// (0x000495e9) indicator_popup_pane_cp1_ParamLimits

0x6c26,	// (0x000495e9) indicator_popup_pane_cp1

0x6c39,	// (0x000495fc) indicator_popup_pane_cp2_ParamLimits

0x6c39,	// (0x000495fc) indicator_popup_pane_cp2

0x6c4c,	// (0x0004960f) popup_query_data_code_window_g1_ParamLimits

0x6c4c,	// (0x0004960f) popup_query_data_code_window_g1

0x0c03,	// (0x000435c6) popup_query_data_code_window_t1_ParamLimits

0x0c03,	// (0x000435c6) popup_query_data_code_window_t1

0x0c15,	// (0x000435d8) popup_query_data_code_window_t2_ParamLimits

0x0c15,	// (0x000435d8) popup_query_data_code_window_t2

0x6c5f,	// (0x00049622) popup_query_data_code_window_t3_ParamLimits

0x6c5f,	// (0x00049622) popup_query_data_code_window_t3

0x6c75,	// (0x00049638) popup_query_data_code_window_t4_ParamLimits

0x6c75,	// (0x00049638) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00051f4d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00051f4d) popup_query_data_code_window_t

0x4a01,	// (0x000473c4) list_single_midp_graphic_pane_g3

0x6c8d,	// (0x00049650) query_popup_data_pane_cp2_ParamLimits

0x6ca0,	// (0x00049663) query_popup_pane_cp2_ParamLimits

0x6ca0,	// (0x00049663) query_popup_pane_cp2

0x09b7,	// (0x0004337a) bg_popup_window_pane_cp11

0xa113,	// (0x0004cad6) heading_pane_cp5

0x0c71,	// (0x00043634) listscroll_popup_info_pane

0x09b7,	// (0x0004337a) input_focus_pane_cp3

0x0c27,	// (0x000435ea) query_popup_pane_t1

0x0c35,	// (0x000435f8) list_popup_info_pane_ParamLimits

0x0c35,	// (0x000435f8) list_popup_info_pane

0x0c44,	// (0x00043607) listscroll_popup_info_pane_g1

0x0c4c,	// (0x0004360f) scroll_pane_cp7

0x6cb3,	// (0x00049676) popup_info_list_pane_t1_ParamLimits

0x6cb3,	// (0x00049676) popup_info_list_pane_t1

0x6ccd,	// (0x00049690) popup_info_list_pane_t2_ParamLimits

0x6ccd,	// (0x00049690) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00051f56) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00051f56) popup_info_list_pane_t

0x09b7,	// (0x0004337a) bg_popup_window_pane_cp12

0xb431,	// (0x0004ddf4) find_popup_pane

0x0a13,	// (0x000433d6) bg_popup_window_pane_cp3

0x0c56,	// (0x00043619) heading_pane_cp3

0x0c62,	// (0x00043625) listscroll_popup_graphic_pane

0x09b7,	// (0x0004337a) bg_popup_window_pane_cp4

0x6d37,	// (0x000496fa) heading_pane_cp4

0x0c71,	// (0x00043634) listscroll_popup_colour_pane

0x6d41,	// (0x00049704) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6d41,	// (0x00049704) cell_large_graphic_colour_none_popup_pane

0x6d55,	// (0x00049718) grid_large_graphic_colour_popup_pane_ParamLimits

0x6d55,	// (0x00049718) grid_large_graphic_colour_popup_pane

0x6d7d,	// (0x00049740) listscroll_popup_colour_pane_g1_ParamLimits

0x6d7d,	// (0x00049740) listscroll_popup_colour_pane_g1

0x6d94,	// (0x00049757) listscroll_popup_colour_pane_g2_ParamLimits

0x6d94,	// (0x00049757) listscroll_popup_colour_pane_g2

0x6dab,	// (0x0004976e) listscroll_popup_colour_pane_g3_ParamLimits

0x6dab,	// (0x0004976e) listscroll_popup_colour_pane_g3

0x6dbb,	// (0x0004977e) listscroll_popup_colour_pane_g4_ParamLimits

0x6dbb,	// (0x0004977e) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00051f5b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00051f5b) listscroll_popup_colour_pane_g

0x0c79,	// (0x0004363c) scroll_pane_cp6_ParamLimits

0x0c79,	// (0x0004363c) scroll_pane_cp6

0x6dcb,	// (0x0004978e) cell_large_graphic_colour_popup_pane_ParamLimits

0x6dcb,	// (0x0004978e) cell_large_graphic_colour_popup_pane

0x6dea,	// (0x000497ad) cell_large_graphic_colour_none_popup_pane_t1

0x09b7,	// (0x0004337a) grid_highlight_pane_cp5

0x0c8b,	// (0x0004364e) cell_large_graphic_colour_popup_pane_g1

0x0c93,	// (0x00043656) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00051f64) cell_large_graphic_colour_popup_pane_g

0x0c9b,	// (0x0004365e) cell_large_graphic_colour_popup_pane_g2_copy1

0x0ca4,	// (0x00043667) grid_highlight_pane_cp4

0x0cac,	// (0x0004366f) bg_popup_window_pane_cp8_ParamLimits

0x0cac,	// (0x0004366f) bg_popup_window_pane_cp8

0x6df9,	// (0x000497bc) popup_snote_single_text_window_g1_ParamLimits

0x6df9,	// (0x000497bc) popup_snote_single_text_window_g1

0x6e0b,	// (0x000497ce) popup_snote_single_text_window_t1_ParamLimits

0x6e0b,	// (0x000497ce) popup_snote_single_text_window_t1

0x6e1e,	// (0x000497e1) popup_snote_single_text_window_t2_ParamLimits

0x6e1e,	// (0x000497e1) popup_snote_single_text_window_t2

0x6e31,	// (0x000497f4) popup_snote_single_text_window_t3_ParamLimits

0x6e31,	// (0x000497f4) popup_snote_single_text_window_t3

0x6e6a,	// (0x0004982d) popup_snote_single_text_window_t4_ParamLimits

0x6e6a,	// (0x0004982d) popup_snote_single_text_window_t4

0x6e9e,	// (0x00049861) popup_snote_single_text_window_t5_ParamLimits

0x6e9e,	// (0x00049861) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00051f69) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00051f69) popup_snote_single_text_window_t

0x0cc7,	// (0x0004368a) bg_popup_window_pane_cp9_ParamLimits

0x0cc7,	// (0x0004368a) bg_popup_window_pane_cp9

0x6df9,	// (0x000497bc) popup_snote_single_graphic_window_g1_ParamLimits

0x6df9,	// (0x000497bc) popup_snote_single_graphic_window_g1

0x0cd5,	// (0x00043698) popup_snote_single_graphic_window_g2_ParamLimits

0x0cd5,	// (0x00043698) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00051f74) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00051f74) popup_snote_single_graphic_window_g

0x0ce1,	// (0x000436a4) popup_snote_single_graphic_window_t1_ParamLimits

0x0ce1,	// (0x000436a4) popup_snote_single_graphic_window_t1

0x0cf4,	// (0x000436b7) popup_snote_single_graphic_window_t2_ParamLimits

0x0cf4,	// (0x000436b7) popup_snote_single_graphic_window_t2

0x6ecd,	// (0x00049890) popup_snote_single_graphic_window_t3_ParamLimits

0x6ecd,	// (0x00049890) popup_snote_single_graphic_window_t3

0x6f06,	// (0x000498c9) popup_snote_single_graphic_window_t4_ParamLimits

0x6f06,	// (0x000498c9) popup_snote_single_graphic_window_t4

0x6f3a,	// (0x000498fd) popup_snote_single_graphic_window_t5_ParamLimits

0x6f3a,	// (0x000498fd) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00051f79) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00051f79) popup_snote_single_graphic_window_t

0xb373,	// (0x0004dd36) grid_graphic_popup_pane_ParamLimits

0xb373,	// (0x0004dd36) grid_graphic_popup_pane

0xb39d,	// (0x0004dd60) listscroll_popup_graphic_pane_g1_ParamLimits

0xb39d,	// (0x0004dd60) listscroll_popup_graphic_pane_g1

0xb3b1,	// (0x0004dd74) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3b1,	// (0x0004dd74) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0005236e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0005236e) listscroll_popup_graphic_pane_g

0xb3c5,	// (0x0004dd88) scroll_pane_cp5

0xb312,	// (0x0004dcd5) cell_graphic_popup_pane_ParamLimits

0xb312,	// (0x0004dcd5) cell_graphic_popup_pane

0xb2f3,	// (0x0004dcb6) cell_graphic_popup_pane_g1

0xb2fb,	// (0x0004dcbe) cell_graphic_popup_pane_g2

0x0c9b,	// (0x0004365e) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00052367) cell_graphic_popup_pane_g

0xb304,	// (0x0004dcc7) cell_graphic_popup_pane_t2

0x0ca4,	// (0x00043667) grid_highlight_pane_cp3

0x0d19,	// (0x000436dc) list_gen_pane_ParamLimits

0x0d19,	// (0x000436dc) list_gen_pane

0x0d41,	// (0x00043704) scroll_pane

0xb24b,	// (0x0004dc0e) bg_list_pane_g1_ParamLimits

0xb24b,	// (0x0004dc0e) bg_list_pane_g1

0xb268,	// (0x0004dc2b) bg_list_pane_g2_ParamLimits

0xb268,	// (0x0004dc2b) bg_list_pane_g2

0xb27d,	// (0x0004dc40) bg_list_pane_g3_ParamLimits

0xb27d,	// (0x0004dc40) bg_list_pane_g3

0xb291,	// (0x0004dc54) bg_list_pane_g4_ParamLimits

0xb291,	// (0x0004dc54) bg_list_pane_g4

0xb2a5,	// (0x0004dc68) bg_list_pane_g5_ParamLimits

0xb2a5,	// (0x0004dc68) bg_list_pane_g5

0x0004,

0xf999,	// (0x0005235c) bg_list_pane_g_ParamLimits

0xf999,	// (0x0005235c) bg_list_pane_g

0x5fc2,	// (0x00048985) list_double2_graphic_large_graphic_pane_ParamLimits

0x5fc2,	// (0x00048985) list_double2_graphic_large_graphic_pane

0x5fc2,	// (0x00048985) list_double2_graphic_pane_ParamLimits

0x5fc2,	// (0x00048985) list_double2_graphic_pane

0x5fc2,	// (0x00048985) list_double2_large_graphic_pane_ParamLimits

0x5fc2,	// (0x00048985) list_double2_large_graphic_pane

0x5fc2,	// (0x00048985) list_double2_pane_ParamLimits

0x5fc2,	// (0x00048985) list_double2_pane

0x5fc2,	// (0x00048985) list_double_graphic_heading_pane_ParamLimits

0x5fc2,	// (0x00048985) list_double_graphic_heading_pane

0x5fc2,	// (0x00048985) list_double_graphic_pane_ParamLimits

0x5fc2,	// (0x00048985) list_double_graphic_pane

0x5fc2,	// (0x00048985) list_double_heading_pane_ParamLimits

0x5fc2,	// (0x00048985) list_double_heading_pane

0x5fc2,	// (0x00048985) list_double_large_graphic_pane_ParamLimits

0x5fc2,	// (0x00048985) list_double_large_graphic_pane

0x5fc2,	// (0x00048985) list_double_number_pane_ParamLimits

0x5fc2,	// (0x00048985) list_double_number_pane

0x5fc2,	// (0x00048985) list_double_pane_ParamLimits

0x5fc2,	// (0x00048985) list_double_pane

0x5fc2,	// (0x00048985) list_double_time_pane_ParamLimits

0x5fc2,	// (0x00048985) list_double_time_pane

0x5fc2,	// (0x00048985) list_setting_number_pane_ParamLimits

0x5fc2,	// (0x00048985) list_setting_number_pane

0x5fc2,	// (0x00048985) list_setting_pane_ParamLimits

0x5fc2,	// (0x00048985) list_setting_pane

0x84e7,	// (0x0004aeaa) list_single_2graphic_pane_ParamLimits

0x84e7,	// (0x0004aeaa) list_single_2graphic_pane

0x84e7,	// (0x0004aeaa) list_single_graphic_heading_pane_ParamLimits

0x84e7,	// (0x0004aeaa) list_single_graphic_heading_pane

0x84e7,	// (0x0004aeaa) list_single_graphic_pane_ParamLimits

0x84e7,	// (0x0004aeaa) list_single_graphic_pane

0x84e7,	// (0x0004aeaa) list_single_heading_pane_ParamLimits

0x84e7,	// (0x0004aeaa) list_single_heading_pane

0x8542,	// (0x0004af05) list_single_large_graphic_pane_ParamLimits

0x8542,	// (0x0004af05) list_single_large_graphic_pane

0x84e7,	// (0x0004aeaa) list_single_number_heading_pane_ParamLimits

0x84e7,	// (0x0004aeaa) list_single_number_heading_pane

0x84e7,	// (0x0004aeaa) list_single_number_pane_ParamLimits

0x84e7,	// (0x0004aeaa) list_single_number_pane

0x84e7,	// (0x0004aeaa) list_single_pane_ParamLimits

0x84e7,	// (0x0004aeaa) list_single_pane

0x09b7,	// (0x0004337a) list_highlight_pane_cp1

0x6f73,	// (0x00049936) list_single_pane_g1_ParamLimits

0x6f73,	// (0x00049936) list_single_pane_g1

0x6f7f,	// (0x00049942) list_single_pane_g2_ParamLimits

0x6f7f,	// (0x00049942) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00051f95) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00051f95) list_single_pane_g

0x5fac,	// (0x0004896f) list_single_pane_t1_ParamLimits

0x5fac,	// (0x0004896f) list_single_pane_t1

0x6f73,	// (0x00049936) list_single_number_pane_g1_ParamLimits

0x6f73,	// (0x00049936) list_single_number_pane_g1

0x6f7f,	// (0x00049942) list_single_number_pane_g2_ParamLimits

0x6f7f,	// (0x00049942) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00051f95) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00051f95) list_single_number_pane_g

0x5761,	// (0x00048124) list_single_number_pane_t1_ParamLimits

0x5761,	// (0x00048124) list_single_number_pane_t1

0x5f6a,	// (0x0004892d) list_single_number_pane_t2_ParamLimits

0x5f6a,	// (0x0004892d) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0005231d) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0005231d) list_single_number_pane_t

0x5755,	// (0x00048118) list_single_graphic_pane_g1_ParamLimits

0x5755,	// (0x00048118) list_single_graphic_pane_g1

0x6f73,	// (0x00049936) list_single_graphic_pane_g2_ParamLimits

0x6f73,	// (0x00049936) list_single_graphic_pane_g2

0x6f7f,	// (0x00049942) list_single_graphic_pane_g3_ParamLimits

0x6f7f,	// (0x00049942) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00051f84) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00051f84) list_single_graphic_pane_g

0x5761,	// (0x00048124) list_single_graphic_pane_t1_ParamLimits

0x5761,	// (0x00048124) list_single_graphic_pane_t1

0x5777,	// (0x0004813a) list_single_heading_pane_g1_ParamLimits

0x5777,	// (0x0004813a) list_single_heading_pane_g1

0x6f7f,	// (0x00049942) list_single_heading_pane_g2_ParamLimits

0x6f7f,	// (0x00049942) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00051f8b) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00051f8b) list_single_heading_pane_g

0x578a,	// (0x0004814d) list_single_heading_pane_t1_ParamLimits

0x578a,	// (0x0004814d) list_single_heading_pane_t1

0x6f8b,	// (0x0004994e) list_single_heading_pane_t2_ParamLimits

0x6f8b,	// (0x0004994e) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00051f90) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00051f90) list_single_heading_pane_t

0x6f73,	// (0x00049936) list_single_number_heading_pane_g1_ParamLimits

0x6f73,	// (0x00049936) list_single_number_heading_pane_g1

0x6f7f,	// (0x00049942) list_single_number_heading_pane_g2_ParamLimits

0x6f7f,	// (0x00049942) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00051f95) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00051f95) list_single_number_heading_pane_g

0x57a0,	// (0x00048163) list_single_number_heading_pane_t1_ParamLimits

0x57a0,	// (0x00048163) list_single_number_heading_pane_t1

0x57b6,	// (0x00048179) list_single_number_heading_pane_t2_ParamLimits

0x57b6,	// (0x00048179) list_single_number_heading_pane_t2

0x57c8,	// (0x0004818b) list_single_number_heading_pane_t3_ParamLimits

0x57c8,	// (0x0004818b) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00051f9a) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00051f9a) list_single_number_heading_pane_t

0x57da,	// (0x0004819d) list_single_graphic_heading_pane_g1_ParamLimits

0x57da,	// (0x0004819d) list_single_graphic_heading_pane_g1

0x6f9d,	// (0x00049960) list_single_graphic_heading_pane_g4_ParamLimits

0x6f9d,	// (0x00049960) list_single_graphic_heading_pane_g4

0x6f7f,	// (0x00049942) list_single_graphic_heading_pane_g5_ParamLimits

0x6f7f,	// (0x00049942) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00051fa1) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00051fa1) list_single_graphic_heading_pane_g

0x57a0,	// (0x00048163) list_single_graphic_heading_pane_t1_ParamLimits

0x57a0,	// (0x00048163) list_single_graphic_heading_pane_t1

0x57f0,	// (0x000481b3) list_single_graphic_heading_pane_t2_ParamLimits

0x57f0,	// (0x000481b3) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00051fa8) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00051fa8) list_single_graphic_heading_pane_t

0x6fae,	// (0x00049971) list_single_large_graphic_pane_g1_ParamLimits

0x6fae,	// (0x00049971) list_single_large_graphic_pane_g1

0x6fba,	// (0x0004997d) list_single_large_graphic_pane_g2_ParamLimits

0x6fba,	// (0x0004997d) list_single_large_graphic_pane_g2

0x6fc6,	// (0x00049989) list_single_large_graphic_pane_g3_ParamLimits

0x6fc6,	// (0x00049989) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00051fad) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00051fad) list_single_large_graphic_pane_g

0xa2c7,	// (0x0004cc8a) wait_border_pane_g2_copy1

0x6fd2,	// (0x00049995) list_single_large_graphic_pane_g4_cp2

0x5808,	// (0x000481cb) list_single_large_graphic_pane_t1_ParamLimits

0x5808,	// (0x000481cb) list_single_large_graphic_pane_t1

0x6fda,	// (0x0004999d) list_double_pane_g1_ParamLimits

0x6fda,	// (0x0004999d) list_double_pane_g1

0x6fe6,	// (0x000499a9) list_double_pane_g2_ParamLimits

0x6fe6,	// (0x000499a9) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00051fb4) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00051fb4) list_double_pane_g

0x581e,	// (0x000481e1) list_double_pane_t1_ParamLimits

0x581e,	// (0x000481e1) list_double_pane_t1

0x5834,	// (0x000481f7) list_double_pane_t2_ParamLimits

0x5834,	// (0x000481f7) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00051fb9) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00051fb9) list_double_pane_t

0x5846,	// (0x00048209) list_double2_pane_g1_ParamLimits

0x5846,	// (0x00048209) list_double2_pane_g1

0x5857,	// (0x0004821a) list_double2_pane_g2_ParamLimits

0x5857,	// (0x0004821a) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00051fbe) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00051fbe) list_double2_pane_g

0x5863,	// (0x00048226) list_double2_pane_t1_ParamLimits

0x5863,	// (0x00048226) list_double2_pane_t1

0x5879,	// (0x0004823c) list_double2_pane_t2_ParamLimits

0x5879,	// (0x0004823c) list_double2_pane_t2

0x0001,

0xf600,	// (0x00051fc3) list_double2_pane_t_ParamLimits

0xf600,	// (0x00051fc3) list_double2_pane_t

0x6fda,	// (0x0004999d) list_double_number_pane_g1_ParamLimits

0x6fda,	// (0x0004999d) list_double_number_pane_g1

0x6fe6,	// (0x000499a9) list_double_number_pane_g2_ParamLimits

0x6fe6,	// (0x000499a9) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00051fb4) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00051fb4) list_double_number_pane_g

0x588b,	// (0x0004824e) list_double_number_pane_t1_ParamLimits

0x588b,	// (0x0004824e) list_double_number_pane_t1

0x589d,	// (0x00048260) list_double_number_pane_t2_ParamLimits

0x589d,	// (0x00048260) list_double_number_pane_t2

0x58b3,	// (0x00048276) list_double_number_pane_t3_ParamLimits

0x58b3,	// (0x00048276) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00051fc8) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00051fc8) list_double_number_pane_t

0x58c5,	// (0x00048288) list_double_graphic_pane_g1_ParamLimits

0x58c5,	// (0x00048288) list_double_graphic_pane_g1

0x6ff2,	// (0x000499b5) list_double_graphic_pane_g2_ParamLimits

0x6ff2,	// (0x000499b5) list_double_graphic_pane_g2

0x7001,	// (0x000499c4) list_double_graphic_pane_g3_ParamLimits

0x7001,	// (0x000499c4) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00051fcf) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00051fcf) list_double_graphic_pane_g

0x589d,	// (0x00048260) list_double_graphic_pane_t1_ParamLimits

0x589d,	// (0x00048260) list_double_graphic_pane_t1

0x58b3,	// (0x00048276) list_double_graphic_pane_t2_ParamLimits

0x58b3,	// (0x00048276) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00051fd8) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00051fd8) list_double_graphic_pane_t

0x58dd,	// (0x000482a0) list_double2_graphic_pane_g1_ParamLimits

0x58dd,	// (0x000482a0) list_double2_graphic_pane_g1

0xc1e4,	// (0x0004eba7) list_double2_graphic_pane_g2_ParamLimits

0xc1e4,	// (0x0004eba7) list_double2_graphic_pane_g2

0x700d,	// (0x000499d0) list_double2_graphic_pane_g3_ParamLimits

0x700d,	// (0x000499d0) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00051fdd) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00051fdd) list_double2_graphic_pane_g

0x58e9,	// (0x000482ac) list_double2_graphic_pane_t1_ParamLimits

0x58e9,	// (0x000482ac) list_double2_graphic_pane_t1

0x58ff,	// (0x000482c2) list_double2_graphic_pane_t2_ParamLimits

0x58ff,	// (0x000482c2) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00051fe4) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00051fe4) list_double2_graphic_pane_t

0x5911,	// (0x000482d4) list_double_large_graphic_pane_g1_ParamLimits

0x5911,	// (0x000482d4) list_double_large_graphic_pane_g1

0x5930,	// (0x000482f3) list_double_large_graphic_pane_g2_ParamLimits

0x5930,	// (0x000482f3) list_double_large_graphic_pane_g2

0x6fe6,	// (0x000499a9) list_double_large_graphic_pane_g3_ParamLimits

0x6fe6,	// (0x000499a9) list_double_large_graphic_pane_g3

0x5946,	// (0x00048309) list_double_large_graphic_pane_g4_ParamLimits

0x5946,	// (0x00048309) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00051fe9) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00051fe9) list_double_large_graphic_pane_g

0x5958,	// (0x0004831b) list_double_large_graphic_pane_t1_ParamLimits

0x5958,	// (0x0004831b) list_double_large_graphic_pane_t1

0x5971,	// (0x00048334) list_double_large_graphic_pane_t2_ParamLimits

0x5971,	// (0x00048334) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00051ff4) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00051ff4) list_double_large_graphic_pane_t

0x5983,	// (0x00048346) list_double2_large_graphic_pane_g1_ParamLimits

0x5983,	// (0x00048346) list_double2_large_graphic_pane_g1

0x598f,	// (0x00048352) list_double2_large_graphic_pane_g2_ParamLimits

0x598f,	// (0x00048352) list_double2_large_graphic_pane_g2

0x700d,	// (0x000499d0) list_double2_large_graphic_pane_g3_ParamLimits

0x700d,	// (0x000499d0) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00051ff9) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00051ff9) list_double2_large_graphic_pane_g

0x58e9,	// (0x000482ac) list_double2_large_graphic_pane_t1_ParamLimits

0x58e9,	// (0x000482ac) list_double2_large_graphic_pane_t1

0x58ff,	// (0x000482c2) list_double2_large_graphic_pane_t2_ParamLimits

0x58ff,	// (0x000482c2) list_double2_large_graphic_pane_t2

0x0001,

0xf621,	// (0x00051fe4) list_double2_large_graphic_pane_t_ParamLimits

0xf621,	// (0x00051fe4) list_double2_large_graphic_pane_t

0x702e,	// (0x000499f1) list_double_heading_pane_g1_ParamLimits

0x702e,	// (0x000499f1) list_double_heading_pane_g1

0x703f,	// (0x00049a02) list_double_heading_pane_g2_ParamLimits

0x703f,	// (0x00049a02) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00052000) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00052000) list_double_heading_pane_g

0x59a0,	// (0x00048363) list_double_heading_pane_t1_ParamLimits

0x59a0,	// (0x00048363) list_double_heading_pane_t1

0x58ff,	// (0x000482c2) list_double_heading_pane_t2_ParamLimits

0x58ff,	// (0x000482c2) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00052005) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00052005) list_double_heading_pane_t

0x59b6,	// (0x00048379) list_double_graphic_heading_pane_g1_ParamLimits

0x59b6,	// (0x00048379) list_double_graphic_heading_pane_g1

0x702e,	// (0x000499f1) list_double_graphic_heading_pane_g2_ParamLimits

0x702e,	// (0x000499f1) list_double_graphic_heading_pane_g2

0x703f,	// (0x00049a02) list_double_graphic_heading_pane_g3_ParamLimits

0x703f,	// (0x00049a02) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0005200a) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0005200a) list_double_graphic_heading_pane_g

0x59a0,	// (0x00048363) list_double_graphic_heading_pane_t1_ParamLimits

0x59a0,	// (0x00048363) list_double_graphic_heading_pane_t1

0x58ff,	// (0x000482c2) list_double_graphic_heading_pane_t2_ParamLimits

0x58ff,	// (0x000482c2) list_double_graphic_heading_pane_t2

0x0001,

0xf642,	// (0x00052005) list_double_graphic_heading_pane_t_ParamLimits

0xf642,	// (0x00052005) list_double_graphic_heading_pane_t

0x59c2,	// (0x00048385) list_double_time_pane_g1_ParamLimits

0x59c2,	// (0x00048385) list_double_time_pane_g1

0x59d3,	// (0x00048396) list_double_time_pane_g2_ParamLimits

0x59d3,	// (0x00048396) list_double_time_pane_g2

0x0001,

0xf64e,	// (0x00052011) list_double_time_pane_g_ParamLimits

0xf64e,	// (0x00052011) list_double_time_pane_g

0x59df,	// (0x000483a2) list_double_time_pane_t1_ParamLimits

0x59df,	// (0x000483a2) list_double_time_pane_t1

0x59f5,	// (0x000483b8) list_double_time_pane_t2_ParamLimits

0x59f5,	// (0x000483b8) list_double_time_pane_t2

0x5a07,	// (0x000483ca) list_double_time_pane_t3_ParamLimits

0x5a07,	// (0x000483ca) list_double_time_pane_t3

0x5a19,	// (0x000483dc) list_double_time_pane_t4_ParamLimits

0x5a19,	// (0x000483dc) list_double_time_pane_t4

0x0003,

0xf653,	// (0x00052016) list_double_time_pane_t_ParamLimits

0xf653,	// (0x00052016) list_double_time_pane_t

0x5a2b,	// (0x000483ee) list_setting_pane_g1_ParamLimits

0x5a2b,	// (0x000483ee) list_setting_pane_g1

0x5857,	// (0x0004821a) list_setting_pane_g2_ParamLimits

0x5857,	// (0x0004821a) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0005201f) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0005201f) list_setting_pane_g

0x5a37,	// (0x000483fa) list_setting_pane_t1_ParamLimits

0x5a37,	// (0x000483fa) list_setting_pane_t1

0x5a51,	// (0x00048414) list_setting_pane_t2_ParamLimits

0x5a51,	// (0x00048414) list_setting_pane_t2

0x0002,

0xf661,	// (0x00052024) list_setting_pane_t_ParamLimits

0xf661,	// (0x00052024) list_setting_pane_t

0x5a8e,	// (0x00048451) set_value_pane_cp_ParamLimits

0x5a8e,	// (0x00048451) set_value_pane_cp

0x5a9a,	// (0x0004845d) list_setting_number_pane_g1_ParamLimits

0x5a9a,	// (0x0004845d) list_setting_number_pane_g1

0x5aa6,	// (0x00048469) list_setting_number_pane_g2_ParamLimits

0x5aa6,	// (0x00048469) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x0005202b) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x0005202b) list_setting_number_pane_g

0x5ab2,	// (0x00048475) list_setting_number_pane_t1_ParamLimits

0x5ab2,	// (0x00048475) list_setting_number_pane_t1

0x5acb,	// (0x0004848e) list_setting_number_pane_t2_ParamLimits

0x5acb,	// (0x0004848e) list_setting_number_pane_t2

0x5ae5,	// (0x000484a8) list_setting_number_pane_t3_ParamLimits

0x5ae5,	// (0x000484a8) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00052030) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00052030) list_setting_number_pane_t

0x5a8e,	// (0x00048451) set_value_pane_ParamLimits

0x5a8e,	// (0x00048451) set_value_pane

0x0d75,	// (0x00043738) bg_set_opt_pane_ParamLimits

0x0d75,	// (0x00043738) bg_set_opt_pane

0x5b28,	// (0x000484eb) set_value_pane_t1

0x0d96,	// (0x00043759) slider_set_pane_cp3

0x704b,	// (0x00049a0e) volume_small_pane_cp

0x0d9f,	// (0x00043762) list_form_gen_pane

0x0da8,	// (0x0004376b) scroll_pane_cp8

0x5b3e,	// (0x00048501) form_field_data_pane_ParamLimits

0x5b3e,	// (0x00048501) form_field_data_pane

0x5b60,	// (0x00048523) form_field_data_wide_pane_ParamLimits

0x5b60,	// (0x00048523) form_field_data_wide_pane

0x5b83,	// (0x00048546) form_field_popup_pane_ParamLimits

0x5b83,	// (0x00048546) form_field_popup_pane

0x5ba3,	// (0x00048566) form_field_popup_wide_pane_ParamLimits

0x5ba3,	// (0x00048566) form_field_popup_wide_pane

0x5bc0,	// (0x00048583) form_field_slider_pane_ParamLimits

0x5bc0,	// (0x00048583) form_field_slider_pane

0x5bd3,	// (0x00048596) form_field_slider_wide_pane_ParamLimits

0x5bd3,	// (0x00048596) form_field_slider_wide_pane

0x0db9,	// (0x0004377c) data_form_pane

0x5bf0,	// (0x000485b3) form_field_data_pane_t1

0x0dc5,	// (0x00043788) input_focus_pane

0x5c08,	// (0x000485cb) data_form_wide_pane

0x5c25,	// (0x000485e8) form_field_data_wide_pane_t1

0x0cb9,	// (0x0004367c) input_focus_pane_cp6

0x5c47,	// (0x0004860a) form_field_popup_pane_t1

0x0dc5,	// (0x00043788) input_focus_pane_cp7

0x0df3,	// (0x000437b6) list_form_pane

0x5c67,	// (0x0004862a) form_field_popup_wide_pane_t1

0x0dc5,	// (0x00043788) input_focus_pane_cp8

0x0dff,	// (0x000437c2) list_form_wide_pane

0x5c84,	// (0x00048647) form_field_slider_pane_t1_ParamLimits

0x5c84,	// (0x00048647) form_field_slider_pane_t1

0x5c9a,	// (0x0004865d) form_field_slider_pane_t2_ParamLimits

0x5c9a,	// (0x0004865d) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00052040) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00052040) form_field_slider_pane_t

0x0a05,	// (0x000433c8) input_focus_pane_cp9_ParamLimits

0x0a05,	// (0x000433c8) input_focus_pane_cp9

0x5caf,	// (0x00048672) slider_cont_pane_ParamLimits

0x5caf,	// (0x00048672) slider_cont_pane

0x0e0b,	// (0x000437ce) form_field_slider_wide_pane_t1_ParamLimits

0x0e0b,	// (0x000437ce) form_field_slider_wide_pane_t1

0x5cc3,	// (0x00048686) form_field_slider_wide_pane_t2_ParamLimits

0x5cc3,	// (0x00048686) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00052045) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00052045) form_field_slider_wide_pane_t

0x0a05,	// (0x000433c8) input_focus_pane_cp10_ParamLimits

0x0a05,	// (0x000433c8) input_focus_pane_cp10

0x5cd5,	// (0x00048698) slider_cont_pane_cp1_ParamLimits

0x5cd5,	// (0x00048698) slider_cont_pane_cp1

0x5ce9,	// (0x000486ac) slider_form_pane_cp

0x0e1d,	// (0x000437e0) input_focus_pane_g1

0x0e25,	// (0x000437e8) input_focus_pane_g2

0x0e2d,	// (0x000437f0) input_focus_pane_g3

0x0e35,	// (0x000437f8) input_focus_pane_g4

0x0e3d,	// (0x00043800) input_focus_pane_g5

0x0e45,	// (0x00043808) input_focus_pane_g6

0x0e4d,	// (0x00043810) input_focus_pane_g7

0x0e55,	// (0x00043818) input_focus_pane_g8

0x0e5d,	// (0x00043820) input_focus_pane_g9

0x09ad,	// (0x00043370) input_focus_pane_g10

0x0009,

0xf687,	// (0x0005204a) input_focus_pane_g

0xa2d0,	// (0x0004cc93) wait_border_pane_g3_copy1

0x5cf1,	// (0x000486b4) data_form_pane_t1

0x09ad,	// (0x00043370) wait_anim_pane_g1_copy1

0x5f7c,	// (0x0004893f) data_form_wide_pane_t1

0x5d0c,	// (0x000486cf) list_form_graphic_pane_cp_ParamLimits

0x5d0c,	// (0x000486cf) list_form_graphic_pane_cp

0xb1bf,	// (0x0004db82) slider_form_pane_g1

0xb1c8,	// (0x0004db8b) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0005234d) slider_form_pane_g

0x5d0c,	// (0x000486cf) list_form_graphic_pane_ParamLimits

0x5d0c,	// (0x000486cf) list_form_graphic_pane

0x5d25,	// (0x000486e8) list_form_graphic_pane_g1

0x5d2d,	// (0x000486f0) list_form_graphic_pane_t1_ParamLimits

0x5d2d,	// (0x000486f0) list_form_graphic_pane_t1

0x0a13,	// (0x000433d6) list_highlight_pane_cp5_ParamLimits

0x0a13,	// (0x000433d6) list_highlight_pane_cp5

0x5d42,	// (0x00048705) find_pane_g1

0x0e65,	// (0x00043828) input_find_pane

0x5d4b,	// (0x0004870e) input_find_pane_g1_ParamLimits

0x5d4b,	// (0x0004870e) input_find_pane_g1

0x5d57,	// (0x0004871a) input_find_pane_t1_ParamLimits

0x5d57,	// (0x0004871a) input_find_pane_t1

0x5d6c,	// (0x0004872f) input_find_pane_t2_ParamLimits

0x5d6c,	// (0x0004872f) input_find_pane_t2

0x0001,

0xf69c,	// (0x0005205f) input_find_pane_t_ParamLimits

0xf69c,	// (0x0005205f) input_find_pane_t

0x0e6e,	// (0x00043831) input_focus_pane_cp5_ParamLimits

0x0e6e,	// (0x00043831) input_focus_pane_cp5

0x0e7c,	// (0x0004383f) bg_popup_window_pane_cp2_ParamLimits

0x0e7c,	// (0x0004383f) bg_popup_window_pane_cp2

0x0e89,	// (0x0004384c) listscroll_menu_pane_ParamLimits

0x0e89,	// (0x0004384c) listscroll_menu_pane

0x7060,	// (0x00049a23) popup_submenu_window_ParamLimits

0x7060,	// (0x00049a23) popup_submenu_window

0x0e95,	// (0x00043858) find_popup_pane_g1

0x7088,	// (0x00049a4b) input_popup_find_pane_cp

0x0e6e,	// (0x00043831) input_focus_pane_cp4_ParamLimits

0x0e6e,	// (0x00043831) input_focus_pane_cp4

0x0e9d,	// (0x00043860) input_popup_find_pane_t1_ParamLimits

0x0e9d,	// (0x00043860) input_popup_find_pane_t1

0x09b7,	// (0x0004337a) bg_popup_sub_pane_cp

0x0ecb,	// (0x0004388e) listscroll_popup_sub_pane

0x0ed3,	// (0x00043896) list_submenu_pane_ParamLimits

0x0ed3,	// (0x00043896) list_submenu_pane

0x0ee4,	// (0x000438a7) scroll_pane_cp4

0x70a0,	// (0x00049a63) list_single_popup_submenu_pane_ParamLimits

0x70a0,	// (0x00049a63) list_single_popup_submenu_pane

0x22ff,	// (0x00044cc2) list_single_popup_submenu_pane_g1

0x70b4,	// (0x00049a77) list_single_popup_submenu_pane_t1_ParamLimits

0x70b4,	// (0x00049a77) list_single_popup_submenu_pane_t1

0x0a13,	// (0x000433d6) bg_active_tab_pane_cp1_ParamLimits

0x0a13,	// (0x000433d6) bg_active_tab_pane_cp1

0x0eec,	// (0x000438af) tabs_2_active_pane_g1

0x70c9,	// (0x00049a8c) tabs_2_active_pane_t1

0x0a13,	// (0x000433d6) bg_passive_tab_pane_cp1_ParamLimits

0x0a13,	// (0x000433d6) bg_passive_tab_pane_cp1

0x0eec,	// (0x000438af) tabs_2_passive_pane_g1

0x70c9,	// (0x00049a8c) tabs_2_passive_pane_t1

0x20bf,	// (0x00044a82) bg_active_tab_pane_cp4

0x70db,	// (0x00049a9e) tabs_2_long_active_pane_t1

0x70ee,	// (0x00049ab1) bg_passive_tab_pane_cp4

0x81a3,	// (0x0004ab66) list_single_midp_graphic_pane_g4_ParamLimits

0x20bf,	// (0x00044a82) bg_active_tab_pane_cp5

0x70fa,	// (0x00049abd) tabs_3_long_active_pane_t1

0x70ee,	// (0x00049ab1) bg_passive_tab_pane_cp5

0x81a3,	// (0x0004ab66) list_single_midp_graphic_pane_g4

0x0a13,	// (0x000433d6) bg_popup_window_pane_cp13_ParamLimits

0x0a13,	// (0x000433d6) bg_popup_window_pane_cp13

0x0ef4,	// (0x000438b7) listscroll_popup_fast_pane_ParamLimits

0x0ef4,	// (0x000438b7) listscroll_popup_fast_pane

0x0f00,	// (0x000438c3) grid_popup_fast_pane_ParamLimits

0x0f00,	// (0x000438c3) grid_popup_fast_pane

0x0f12,	// (0x000438d5) scroll_pane_cp9_ParamLimits

0x0f12,	// (0x000438d5) scroll_pane_cp9

0xcaaf,	// (0x0004f472) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcaaf,	// (0x0004f472) list_single_graphic_hl_pane_t1_cp2

0x0f25,	// (0x000438e8) input_focus_pane_cp20_ParamLimits

0x0f25,	// (0x000438e8) input_focus_pane_cp20

0x0f33,	// (0x000438f6) query_popup_data_pane_t1_ParamLimits

0x0f33,	// (0x000438f6) query_popup_data_pane_t1

0x0f46,	// (0x00043909) query_popup_data_pane_t2_ParamLimits

0x0f46,	// (0x00043909) query_popup_data_pane_t2

0x0f8c,	// (0x0004394f) query_popup_data_pane_t3_ParamLimits

0x0f8c,	// (0x0004394f) query_popup_data_pane_t3

0x0fcd,	// (0x00043990) query_popup_data_pane_t4_ParamLimits

0x0fcd,	// (0x00043990) query_popup_data_pane_t4

0x1009,	// (0x000439cc) query_popup_data_pane_t5_ParamLimits

0x1009,	// (0x000439cc) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00052064) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00052064) query_popup_data_pane_t

0x0e1d,	// (0x000437e0) bg_set_opt_pane_g1

0x0e25,	// (0x000437e8) bg_set_opt_pane_g2

0x0e2d,	// (0x000437f0) bg_set_opt_pane_g3

0x0e35,	// (0x000437f8) bg_set_opt_pane_g4

0x0e3d,	// (0x00043800) bg_set_opt_pane_g5

0x0e45,	// (0x00043808) bg_set_opt_pane_g6

0x0e4d,	// (0x00043810) bg_set_opt_pane_g7

0x0e55,	// (0x00043818) bg_set_opt_pane_g8

0x0e5d,	// (0x00043820) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0005206f) bg_set_opt_pane_g

0x75f1,	// (0x00049fb4) control_top_pane_stacon_ParamLimits

0x75f1,	// (0x00049fb4) control_top_pane_stacon

0x7644,	// (0x0004a007) signal_pane_stacon_ParamLimits

0x7644,	// (0x0004a007) signal_pane_stacon

0x1395,	// (0x00043d58) stacon_top_pane_g1_ParamLimits

0x1395,	// (0x00043d58) stacon_top_pane_g1

0x7669,	// (0x0004a02c) title_pane_stacon_ParamLimits

0x7669,	// (0x0004a02c) title_pane_stacon

0x7693,	// (0x0004a056) uni_indicator_pane_stacon_ParamLimits

0x7693,	// (0x0004a056) uni_indicator_pane_stacon

0x76a8,	// (0x0004a06b) battery_pane_stacon_ParamLimits

0x76a8,	// (0x0004a06b) battery_pane_stacon

0x76ec,	// (0x0004a0af) control_bottom_pane_stacon_ParamLimits

0x76ec,	// (0x0004a0af) control_bottom_pane_stacon

0x770f,	// (0x0004a0d2) navi_pane_stacon_ParamLimits

0x770f,	// (0x0004a0d2) navi_pane_stacon

0x13b7,	// (0x00043d7a) stacon_bottom_pane_g1_ParamLimits

0x13b7,	// (0x00043d7a) stacon_bottom_pane_g1

0x7126,	// (0x00049ae9) aid_levels_signal_lsc_ParamLimits

0x7126,	// (0x00049ae9) aid_levels_signal_lsc

0x713c,	// (0x00049aff) signal_pane_stacon_g1_ParamLimits

0x713c,	// (0x00049aff) signal_pane_stacon_g1

0x7150,	// (0x00049b13) signal_pane_stacon_g2_ParamLimits

0x7150,	// (0x00049b13) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00052082) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00052082) signal_pane_stacon_g

0x7185,	// (0x00049b48) title_pane_stacon_t1_ParamLimits

0x7185,	// (0x00049b48) title_pane_stacon_t1

0x1061,	// (0x00043a24) uni_indicator_pane_stacon_g1

0x106b,	// (0x00043a2e) uni_indicator_pane_stacon_g2

0x104d,	// (0x00043a10) uni_indicator_pane_stacon_g3

0x1057,	// (0x00043a1a) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0005208e) uni_indicator_pane_stacon_g

0x71aa,	// (0x00049b6d) control_top_pane_stacon_g1

0x71b2,	// (0x00049b75) control_top_pane_stacon_t1_ParamLimits

0x71b2,	// (0x00049b75) control_top_pane_stacon_t1

0x71e9,	// (0x00049bac) aid_levels_battery_lsc_ParamLimits

0x71e9,	// (0x00049bac) aid_levels_battery_lsc

0x7200,	// (0x00049bc3) battery_pane_stacon_g1_ParamLimits

0x7200,	// (0x00049bc3) battery_pane_stacon_g1

0x7213,	// (0x00049bd6) battery_pane_stacon_g2_ParamLimits

0x7213,	// (0x00049bd6) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00052097) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00052097) battery_pane_stacon_g

0x7251,	// (0x00049c14) navi_icon_pane_stacon

0x7265,	// (0x00049c28) navi_navi_pane_stacon

0x7251,	// (0x00049c14) navi_text_pane_stacon

0x71aa,	// (0x00049b6d) control_bottom_pane_stacon_g1

0x7279,	// (0x00049c3c) control_bottom_pane_stacon_t1_ParamLimits

0x7279,	// (0x00049c3c) control_bottom_pane_stacon_t1

0x72b0,	// (0x00049c73) grid_app_pane_ParamLimits

0x72b0,	// (0x00049c73) grid_app_pane

0x72d2,	// (0x00049c95) scroll_pane_cp15_ParamLimits

0x72d2,	// (0x00049c95) scroll_pane_cp15

0x72e5,	// (0x00049ca8) cell_app_pane_ParamLimits

0x72e5,	// (0x00049ca8) cell_app_pane

0x730d,	// (0x00049cd0) cell_app_pane_g1_ParamLimits

0x730d,	// (0x00049cd0) cell_app_pane_g1

0x108f,	// (0x00043a52) cell_app_pane_g2_ParamLimits

0x108f,	// (0x00043a52) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0005209c) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0005209c) cell_app_pane_g

0x7331,	// (0x00049cf4) cell_app_pane_t1_ParamLimits

0x7331,	// (0x00049cf4) cell_app_pane_t1

0x109b,	// (0x00043a5e) grid_highlight_pane_ParamLimits

0x109b,	// (0x00043a5e) grid_highlight_pane

0x0e1d,	// (0x000437e0) cell_highlight_pane_g1

0x0e25,	// (0x000437e8) cell_highlight_pane_g2

0x0e2d,	// (0x000437f0) cell_highlight_pane_g3

0x0e35,	// (0x000437f8) cell_highlight_pane_g4

0x0e3d,	// (0x00043800) cell_highlight_pane_g5

0x0e45,	// (0x00043808) cell_highlight_pane_g6

0x0e4d,	// (0x00043810) cell_highlight_pane_g7

0x0e55,	// (0x00043818) cell_highlight_pane_g8

0x0e5d,	// (0x00043820) cell_highlight_pane_g9

0x09ad,	// (0x00043370) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0005204a) cell_highlight_pane_g

0x10ac,	// (0x00043a6f) bg_scroll_pane

0x735b,	// (0x00049d1e) scroll_handle_pane

0x10f3,	// (0x00043ab6) scroll_bg_pane_g1

0x1108,	// (0x00043acb) scroll_bg_pane_g2

0x1120,	// (0x00043ae3) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x000520a1) scroll_bg_pane_g

0x7384,	// (0x00049d47) scroll_handle_focus_pane_ParamLimits

0x7384,	// (0x00049d47) scroll_handle_focus_pane

0x10f3,	// (0x00043ab6) scroll_handle_pane_g1

0x1135,	// (0x00043af8) scroll_handle_pane_g2

0x1120,	// (0x00043ae3) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x000520a8) scroll_handle_pane_g

0x0e6e,	// (0x00043831) bg_popup_sub_pane_cp21_ParamLimits

0x0e6e,	// (0x00043831) bg_popup_sub_pane_cp21

0x7391,	// (0x00049d54) popup_fep_japan_predictive_window_t1_ParamLimits

0x7391,	// (0x00049d54) popup_fep_japan_predictive_window_t1

0x73ab,	// (0x00049d6e) popup_fep_japan_predictive_window_t2_ParamLimits

0x73ab,	// (0x00049d6e) popup_fep_japan_predictive_window_t2

0x73de,	// (0x00049da1) popup_fep_japan_predictive_window_t3_ParamLimits

0x73de,	// (0x00049da1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x000520af) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x000520af) popup_fep_japan_predictive_window_t

0x09b7,	// (0x0004337a) bg_popup_sub_pane_cp23

0x3438,	// (0x00045dfb) listscroll_japin_cand_pane

0x1149,	// (0x00043b0c) popup_fep_japan_candidate_window_t1

0x1157,	// (0x00043b1a) candidate_pane_ParamLimits

0x1157,	// (0x00043b1a) candidate_pane

0x7415,	// (0x00049dd8) scroll_pane_cp30

0x1169,	// (0x00043b2c) list_single_popup_jap_candidate_pane_ParamLimits

0x1169,	// (0x00043b2c) list_single_popup_jap_candidate_pane

0x09b7,	// (0x0004337a) list_highlight_pane_cp30

0x117e,	// (0x00043b41) list_single_popup_jap_candidate_pane_t1

0x118d,	// (0x00043b50) level_1_signal

0x119a,	// (0x00043b5d) level_2_signal

0x11a7,	// (0x00043b6a) level_3_signal

0x11b4,	// (0x00043b77) level_4_signal

0x11c1,	// (0x00043b84) level_5_signal

0x11ce,	// (0x00043b91) level_6_signal

0x11db,	// (0x00043b9e) level_7_signal

0x118d,	// (0x00043b50) level_1_battery

0x119a,	// (0x00043b5d) level_2_battery

0x11a7,	// (0x00043b6a) level_3_battery

0x11b4,	// (0x00043b77) level_4_battery

0x11c1,	// (0x00043b84) level_5_battery

0x11ce,	// (0x00043b91) level_6_battery

0x11db,	// (0x00043b9e) level_7_battery

0x1200,	// (0x00043bc3) list_menu_pane_ParamLimits

0x1200,	// (0x00043bc3) list_menu_pane

0x1216,	// (0x00043bd9) scroll_pane_cp25_ParamLimits

0x1216,	// (0x00043bd9) scroll_pane_cp25

0x122f,	// (0x00043bf2) list_double2_graphic_pane_cp2_ParamLimits

0x122f,	// (0x00043bf2) list_double2_graphic_pane_cp2

0x122f,	// (0x00043bf2) list_double2_large_graphic_pane_cp2_ParamLimits

0x122f,	// (0x00043bf2) list_double2_large_graphic_pane_cp2

0x122f,	// (0x00043bf2) list_double2_pane_cp2_ParamLimits

0x122f,	// (0x00043bf2) list_double2_pane_cp2

0x122f,	// (0x00043bf2) list_double_graphic_pane_cp2_ParamLimits

0x122f,	// (0x00043bf2) list_double_graphic_pane_cp2

0x122f,	// (0x00043bf2) list_double_large_graphic_pane_cp2_ParamLimits

0x122f,	// (0x00043bf2) list_double_large_graphic_pane_cp2

0x122f,	// (0x00043bf2) list_double_number_pane_cp2_ParamLimits

0x122f,	// (0x00043bf2) list_double_number_pane_cp2

0x122f,	// (0x00043bf2) list_double_pane_cp2_ParamLimits

0x122f,	// (0x00043bf2) list_double_pane_cp2

0x7450,	// (0x00049e13) list_single_2graphic_pane_cp2_ParamLimits

0x7450,	// (0x00049e13) list_single_2graphic_pane_cp2

0x7450,	// (0x00049e13) list_single_graphic_heading_pane_cp2_ParamLimits

0x7450,	// (0x00049e13) list_single_graphic_heading_pane_cp2

0x7450,	// (0x00049e13) list_single_graphic_pane_cp2_ParamLimits

0x7450,	// (0x00049e13) list_single_graphic_pane_cp2

0x7450,	// (0x00049e13) list_single_heading_pane_cp2_ParamLimits

0x7450,	// (0x00049e13) list_single_heading_pane_cp2

0x123f,	// (0x00043c02) list_single_large_graphic_pane_cp2_ParamLimits

0x123f,	// (0x00043c02) list_single_large_graphic_pane_cp2

0x7450,	// (0x00049e13) list_single_number_heading_pane_cp2_ParamLimits

0x7450,	// (0x00049e13) list_single_number_heading_pane_cp2

0x7450,	// (0x00049e13) list_single_number_pane_cp2_ParamLimits

0x7450,	// (0x00049e13) list_single_number_pane_cp2

0x7450,	// (0x00049e13) list_single_pane_cp2_ParamLimits

0x7450,	// (0x00049e13) list_single_pane_cp2

0x1259,	// (0x00043c1c) bg_popup_sub_pane_cp22

0x7528,	// (0x00049eeb) popup_side_volume_key_window_g1

0x754c,	// (0x00049f0f) popup_side_volume_key_window_t1

0x7568,	// (0x00049f2b) volume_small_pane_cp1

0x0a05,	// (0x000433c8) bg_popup_sub_pane_cp24_ParamLimits

0x0a05,	// (0x000433c8) bg_popup_sub_pane_cp24

0x126f,	// (0x00043c32) fep_china_uni_candidate_pane_ParamLimits

0x126f,	// (0x00043c32) fep_china_uni_candidate_pane

0x1283,	// (0x00043c46) fep_china_uni_entry_pane

0x1293,	// (0x00043c56) popup_fep_china_uni_window_g1

0x7570,	// (0x00049f33) fep_china_uni_entry_pane_g1

0x7578,	// (0x00049f3b) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x000520e0) fep_china_uni_entry_pane_g

0x12af,	// (0x00043c72) fep_entry_item_pane

0x12b9,	// (0x00043c7c) fep_candidate_item_pane

0x7580,	// (0x00049f43) fep_china_uni_candidate_pane_g1

0x12c1,	// (0x00043c84) fep_china_uni_candidate_pane_g2

0x12c9,	// (0x00043c8c) fep_china_uni_candidate_pane_g3

0x7588,	// (0x00049f4b) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x000520e5) fep_china_uni_candidate_pane_g

0x09ad,	// (0x00043370) fep_entry_item_pane_g1

0x12d1,	// (0x00043c94) fep_entry_item_pane_t1_ParamLimits

0x12d1,	// (0x00043c94) fep_entry_item_pane_t1

0x12e7,	// (0x00043caa) fep_candidate_item_pane_t1_ParamLimits

0x12e7,	// (0x00043caa) fep_candidate_item_pane_t1

0x12fc,	// (0x00043cbf) fep_candidate_item_pane_t2_ParamLimits

0x12fc,	// (0x00043cbf) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x000520ee) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x000520ee) fep_candidate_item_pane_t

0x0a13,	// (0x000433d6) list_highlight_pane_cp31_ParamLimits

0x0a13,	// (0x000433d6) list_highlight_pane_cp31

0x130e,	// (0x00043cd1) level_1_signal_lsc

0x1317,	// (0x00043cda) level_2_signal_lsc

0x1320,	// (0x00043ce3) level_3_signal_lsc

0x1329,	// (0x00043cec) level_4_signal_lsc

0x1332,	// (0x00043cf5) level_5_signal_lsc

0x133b,	// (0x00043cfe) level_6_signal_lsc

0x1344,	// (0x00043d07) level_7_signal_lsc

0x1344,	// (0x00043d07) level_1_battery_lsc

0x134d,	// (0x00043d10) level_2_battery_lsc

0x1356,	// (0x00043d19) level_3_battery_lsc

0x135f,	// (0x00043d22) level_4_battery_lsc

0x1368,	// (0x00043d2b) level_5_battery_lsc

0x1371,	// (0x00043d34) level_6_battery_lsc

0x130e,	// (0x00043cd1) level_7_battery_lsc

0x137a,	// (0x00043d3d) scroll_handle_focus_pane_g1

0x1383,	// (0x00043d46) scroll_handle_focus_pane_g2

0x138c,	// (0x00043d4f) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x000520f3) scroll_handle_focus_pane_g

0x5d81,	// (0x00048744) list_single_2graphic_pane_g1_ParamLimits

0x5d81,	// (0x00048744) list_single_2graphic_pane_g1

0x6f9d,	// (0x00049960) list_single_2graphic_pane_g2_ParamLimits

0x6f9d,	// (0x00049960) list_single_2graphic_pane_g2

0x6f7f,	// (0x00049942) list_single_2graphic_pane_g3_ParamLimits

0x6f7f,	// (0x00049942) list_single_2graphic_pane_g3

0x5d8d,	// (0x00048750) list_single_2graphic_pane_g4_ParamLimits

0x5d8d,	// (0x00048750) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x000520fa) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x000520fa) list_single_2graphic_pane_g

0x5d99,	// (0x0004875c) list_single_2graphic_pane_t1_ParamLimits

0x5d99,	// (0x0004875c) list_single_2graphic_pane_t1

0x5dc7,	// (0x0004878a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5dc7,	// (0x0004878a) list_double2_graphic_large_graphic_pane_g1

0x598f,	// (0x00048352) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x598f,	// (0x00048352) list_double2_graphic_large_graphic_pane_g2

0x700d,	// (0x000499d0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x700d,	// (0x000499d0) list_double2_graphic_large_graphic_pane_g3

0x7590,	// (0x00049f53) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7590,	// (0x00049f53) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00052103) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00052103) list_double2_graphic_large_graphic_pane_g

0x5dd7,	// (0x0004879a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5dd7,	// (0x0004879a) list_double2_graphic_large_graphic_pane_t1

0x5ded,	// (0x000487b0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5ded,	// (0x000487b0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0005210c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0005210c) list_double2_graphic_large_graphic_pane_t

0x776e,	// (0x0004a131) popup_fast_swap_window_ParamLimits

0x776e,	// (0x0004a131) popup_fast_swap_window

0x778a,	// (0x0004a14d) popup_side_volume_key_window

0x4998,	// (0x0004735b) stacon_top_pane

0x49a2,	// (0x00047365) status_pane_ParamLimits

0x49a2,	// (0x00047365) status_pane

0x77a4,	// (0x0004a167) status_small_pane

0x09b7,	// (0x0004337a) control_pane

0x09b7,	// (0x0004337a) stacon_bottom_pane

0x0da8,	// (0x0004376b) scroll_pane_cp121

0x0d9f,	// (0x00043762) set_content_pane

0x759c,	// (0x00049f5f) bg_active_tab_pane_g1_cp1

0x75a5,	// (0x00049f68) bg_active_tab_pane_g2_cp1

0x75ae,	// (0x00049f71) bg_active_tab_pane_g3_cp1

0x759c,	// (0x00049f5f) bg_passive_tab_pane_g1_cp1

0x75a5,	// (0x00049f68) bg_passive_tab_pane_g2_cp1

0x75ae,	// (0x00049f71) bg_passive_tab_pane_g3_cp1

0x75b7,	// (0x00049f7a) bg_active_tab_pane_g1_cp2

0x75a5,	// (0x00049f68) bg_active_tab_pane_g2_cp2

0x75c0,	// (0x00049f83) bg_active_tab_pane_g3_cp2

0x75b7,	// (0x00049f7a) bg_passive_tab_pane_g1_cp2

0x75a5,	// (0x00049f68) bg_passive_tab_pane_g2_cp2

0x75c0,	// (0x00049f83) bg_passive_tab_pane_g3_cp2

0x75c9,	// (0x00049f8c) bg_active_tab_pane_g1_cp3

0x75a5,	// (0x00049f68) bg_active_tab_pane_g2_cp3

0x75d2,	// (0x00049f95) bg_active_tab_pane_g3_cp3

0x75c9,	// (0x00049f8c) bg_passive_tab_pane_g1_cp3

0x75a5,	// (0x00049f68) bg_passive_tab_pane_g2_cp3

0x75d2,	// (0x00049f95) bg_passive_tab_pane_g3_cp3

0x75db,	// (0x00049f9e) bg_active_tab_pane_g1_cp4

0x75a5,	// (0x00049f68) bg_active_tab_pane_g2_cp4

0x75e6,	// (0x00049fa9) bg_active_tab_pane_g3_cp4

0x75db,	// (0x00049f9e) bg_passive_tab_pane_g1_cp4

0x75a5,	// (0x00049f68) bg_passive_tab_pane_g2_cp4

0x75e6,	// (0x00049fa9) bg_passive_tab_pane_g3_cp4

0x7732,	// (0x0004a0f5) bg_active_tab_pane_g1_cp5

0x75a5,	// (0x00049f68) bg_active_tab_pane_g2_cp5

0x773b,	// (0x0004a0fe) bg_active_tab_pane_g3_cp5

0x7732,	// (0x0004a0f5) bg_passive_tab_pane_g1_cp5

0x75a5,	// (0x00049f68) bg_passive_tab_pane_g2_cp5

0x773b,	// (0x0004a0fe) bg_passive_tab_pane_g3_cp5

0x7744,	// (0x0004a107) list_set_graphic_pane_ParamLimits

0x7744,	// (0x0004a107) list_set_graphic_pane

0x09b7,	// (0x0004337a) bg_set_opt_pane_cp4

0x13d3,	// (0x00043d96) list_set_graphic_pane_g1_ParamLimits

0x13d3,	// (0x00043d96) list_set_graphic_pane_g1

0x13df,	// (0x00043da2) list_set_graphic_pane_g2_ParamLimits

0x13df,	// (0x00043da2) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00052111) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00052111) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x000524a9) volume_small_pane_cp_g

0x7762,	// (0x0004a125) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7762,	// (0x0004a125) list_double2_large_graphic_pane_g1_cp2

0x1401,	// (0x00043dc4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1401,	// (0x00043dc4) list_double2_large_graphic_pane_g2_cp2

0x1412,	// (0x00043dd5) list_double2_large_graphic_pane_g3_cp2

0x141a,	// (0x00043ddd) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x141a,	// (0x00043ddd) list_double2_large_graphic_pane_t1_cp2

0x1430,	// (0x00043df3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1430,	// (0x00043df3) list_double2_large_graphic_pane_t2_cp2

0xad81,	// (0x0004d744) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad81,	// (0x0004d744) list_double_large_graphic_pane_g1_cp2

0xad92,	// (0x0004d755) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad92,	// (0x0004d755) list_double_large_graphic_pane_g2_cp2

0x4ab2,	// (0x00047475) list_double_large_graphic_pane_g3_cp2

0xada3,	// (0x0004d766) list_double_large_graphic_pane_g4_cp

0xadab,	// (0x0004d76e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xadab,	// (0x0004d76e) list_double_large_graphic_pane_t1_cp2

0xadc2,	// (0x0004d785) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xadc2,	// (0x0004d785) list_double_large_graphic_pane_t2_cp2

0x49b0,	// (0x00047373) list_double2_graphic_pane_g1_cp2_ParamLimits

0x49b0,	// (0x00047373) list_double2_graphic_pane_g1_cp2

0x49be,	// (0x00047381) list_double2_graphic_pane_g2_cp2_ParamLimits

0x49be,	// (0x00047381) list_double2_graphic_pane_g2_cp2

0x49cf,	// (0x00047392) list_double2_graphic_pane_g3_cp2

0x49d9,	// (0x0004739c) list_double2_graphic_pane_t1_cp2_ParamLimits

0x49d9,	// (0x0004739c) list_double2_graphic_pane_t1_cp2

0x49ef,	// (0x000473b2) list_double2_graphic_pane_t2_cp2_ParamLimits

0x49ef,	// (0x000473b2) list_double2_graphic_pane_t2_cp2

0x1442,	// (0x00043e05) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1442,	// (0x00043e05) list_single_number_heading_pane_g1_cp2

0x4a01,	// (0x000473c4) list_single_number_heading_pane_g2_cp2

0x4a09,	// (0x000473cc) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4a09,	// (0x000473cc) list_single_number_heading_pane_t1_cp2

0x4a1f,	// (0x000473e2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4a1f,	// (0x000473e2) list_single_number_heading_pane_t2_cp2

0x4a31,	// (0x000473f4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4a31,	// (0x000473f4) list_single_number_heading_pane_t3_cp2

0x1442,	// (0x00043e05) list_single_heading_pane_g1_cp2_ParamLimits

0x1442,	// (0x00043e05) list_single_heading_pane_g1_cp2

0x4a01,	// (0x000473c4) list_single_heading_pane_g2_cp2

0x4a09,	// (0x000473cc) list_single_heading_pane_t1_cp2_ParamLimits

0x4a09,	// (0x000473cc) list_single_heading_pane_t1_cp2

0xab8b,	// (0x0004d54e) list_single_heading_pane_t2_cp2_ParamLimits

0xab8b,	// (0x0004d54e) list_single_heading_pane_t2_cp2

0xaad3,	// (0x0004d496) list_double_graphic_pane_g1_cp2_ParamLimits

0xaad3,	// (0x0004d496) list_double_graphic_pane_g1_cp2

0xaadf,	// (0x0004d4a2) list_double_graphic_pane_g2_cp2_ParamLimits

0xaadf,	// (0x0004d4a2) list_double_graphic_pane_g2_cp2

0xaaee,	// (0x0004d4b1) list_double_graphic_pane_g3_cp2

0xaaf6,	// (0x0004d4b9) list_double_graphic_pane_t1_cp2_ParamLimits

0xaaf6,	// (0x0004d4b9) list_double_graphic_pane_t1_cp2

0xab0c,	// (0x0004d4cf) list_double_graphic_pane_t2_cp2_ParamLimits

0xab0c,	// (0x0004d4cf) list_double_graphic_pane_t2_cp2

0x4aa6,	// (0x00047469) list_double_number_pane_g1_cp2_ParamLimits

0x4aa6,	// (0x00047469) list_double_number_pane_g1_cp2

0x4ab2,	// (0x00047475) list_double_number_pane_g2_cp2

0xaa97,	// (0x0004d45a) list_double_number_pane_t1_cp2_ParamLimits

0xaa97,	// (0x0004d45a) list_double_number_pane_t1_cp2

0xaaab,	// (0x0004d46e) list_double_number_pane_t2_cp2_ParamLimits

0xaaab,	// (0x0004d46e) list_double_number_pane_t2_cp2

0xaac1,	// (0x0004d484) list_double_number_pane_t3_cp2_ParamLimits

0xaac1,	// (0x0004d484) list_double_number_pane_t3_cp2

0xa980,	// (0x0004d343) list_single_graphic_pane_g1_cp2_ParamLimits

0xa980,	// (0x0004d343) list_single_graphic_pane_g1_cp2

0x4b02,	// (0x000474c5) list_single_graphic_pane_g2_cp2_ParamLimits

0x4b02,	// (0x000474c5) list_single_graphic_pane_g2_cp2

0x4b0e,	// (0x000474d1) list_single_graphic_pane_g3_cp2

0xa956,	// (0x0004d319) list_single_graphic_pane_t1_cp2_ParamLimits

0xa956,	// (0x0004d319) list_single_graphic_pane_t1_cp2

0x4b02,	// (0x000474c5) list_single_number_pane_g1_cp2_ParamLimits

0x4b02,	// (0x000474c5) list_single_number_pane_g1_cp2

0x4b0e,	// (0x000474d1) list_single_number_pane_g2_cp2

0xa956,	// (0x0004d319) list_single_number_pane_t1_cp2_ParamLimits

0xa956,	// (0x0004d319) list_single_number_pane_t1_cp2

0xa96c,	// (0x0004d32f) list_single_number_pane_t2_cp2_ParamLimits

0xa96c,	// (0x0004d32f) list_single_number_pane_t2_cp2

0x1401,	// (0x00043dc4) list_double2_pane_g1_cp2_ParamLimits

0x1401,	// (0x00043dc4) list_double2_pane_g1_cp2

0x1412,	// (0x00043dd5) list_double2_pane_g2_cp2

0x4a7e,	// (0x00047441) list_double2_pane_t1_cp2_ParamLimits

0x4a7e,	// (0x00047441) list_double2_pane_t1_cp2

0x4a94,	// (0x00047457) list_double2_pane_t2_cp2_ParamLimits

0x4a94,	// (0x00047457) list_double2_pane_t2_cp2

0x4aa6,	// (0x00047469) list_double_pane_g1_cp2_ParamLimits

0x4aa6,	// (0x00047469) list_double_pane_g1_cp2

0x4ab2,	// (0x00047475) list_double_pane_g2_cp2

0x4aba,	// (0x0004747d) list_double_pane_t1_cp2_ParamLimits

0x4aba,	// (0x0004747d) list_double_pane_t1_cp2

0x4ad0,	// (0x00047493) list_double_pane_t2_cp2_ParamLimits

0x4ad0,	// (0x00047493) list_double_pane_t2_cp2

0x77af,	// (0x0004a172) list_single_pane_cp2_g3

0x4b02,	// (0x000474c5) list_single_pane_g1_cp2_ParamLimits

0x4b02,	// (0x000474c5) list_single_pane_g1_cp2

0x4b0e,	// (0x000474d1) list_single_pane_g2_cp2

0x4b16,	// (0x000474d9) list_single_pane_t1_cp2_ParamLimits

0x4b16,	// (0x000474d9) list_single_pane_t1_cp2

0x77b7,	// (0x0004a17a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x77b7,	// (0x0004a17a) list_single_large_graphic_pane_g1_cp2

0x4b2e,	// (0x000474f1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4b2e,	// (0x000474f1) list_single_large_graphic_pane_g2_cp2

0x4b3a,	// (0x000474fd) list_single_large_graphic_pane_g3_cp2

0x77c3,	// (0x0004a186) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x77c3,	// (0x0004a186) list_single_large_graphic_pane_g4_cp1

0x4b42,	// (0x00047505) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4b42,	// (0x00047505) list_single_large_graphic_pane_t1_cp2

0xa922,	// (0x0004d2e5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa922,	// (0x0004d2e5) list_single_graphic_heading_pane_g1_cp2

0xa8ef,	// (0x0004d2b2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8ef,	// (0x0004d2b2) list_single_graphic_heading_pane_g4_cp2

0x4b0e,	// (0x000474d1) list_single_graphic_heading_pane_g5_cp2

0xa92e,	// (0x0004d2f1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa92e,	// (0x0004d2f1) list_single_graphic_heading_pane_t1_cp2

0xa944,	// (0x0004d307) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa944,	// (0x0004d307) list_single_graphic_heading_pane_t2_cp2

0xa8e3,	// (0x0004d2a6) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8e3,	// (0x0004d2a6) list_single_2graphic_pane_g1_cp2

0xa8ef,	// (0x0004d2b2) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8ef,	// (0x0004d2b2) list_single_2graphic_pane_g2_cp2

0x4b0e,	// (0x000474d1) list_single_2graphic_pane_g3_cp2

0xa900,	// (0x0004d2c3) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa900,	// (0x0004d2c3) list_single_2graphic_pane_g4_cp2

0xa90c,	// (0x0004d2cf) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa90c,	// (0x0004d2cf) list_single_2graphic_pane_t1_cp2

0x09ad,	// (0x00043370) list_highlight_pane_g10_cp1

0xa4cb,	// (0x0004ce8e) list_highlight_pane_g1_cp1

0xa4d3,	// (0x0004ce96) list_highlight_pane_g2_cp1

0xa4db,	// (0x0004ce9e) list_highlight_pane_g3_cp1

0xa4e3,	// (0x0004cea6) list_highlight_pane_g4_cp1

0xa4eb,	// (0x0004ceae) list_highlight_pane_g5_cp1

0xa4f3,	// (0x0004ceb6) list_highlight_pane_g6_cp1

0xa4fb,	// (0x0004cebe) list_highlight_pane_g7_cp1

0xa503,	// (0x0004cec6) list_highlight_pane_g8_cp1

0xa50b,	// (0x0004cece) list_highlight_pane_g9_cp1

0xa3f3,	// (0x0004cdb6) form_field_slider_pane_t3

0xa401,	// (0x0004cdc4) form_field_slider_pane_t4

0xa40f,	// (0x0004cdd2) slider_form_pane_ParamLimits

0xa40f,	// (0x0004cdd2) slider_form_pane

0x09b7,	// (0x0004337a) control_abbreviations

0x09b7,	// (0x0004337a) control_conventions

0x09b7,	// (0x0004337a) control_definitions

0x09b7,	// (0x0004337a) format_table_attribute

0xabd5,	// (0x0004d598) bg_popup_preview_window_pane_g9

0x09b7,	// (0x0004337a) format_table_data2

0x09b7,	// (0x0004337a) format_table_data3

0x09b7,	// (0x0004337a) format_table_data_example

0x0008,

0x09b7,	// (0x0004337a) intro_purpose

0xf8ea,	// (0x000522ad) bg_popup_preview_window_pane_g

0x09b7,	// (0x0004337a) texts_category

0x09b7,	// (0x0004337a) texts_graphics

0x4b58,	// (0x0004751b) text_digital

0x4b67,	// (0x0004752a) text_primary

0x4b76,	// (0x00047539) text_primary_small

0x4b85,	// (0x00047548) text_secondary

0x4b94,	// (0x00047557) text_title

0xb2c7,	// (0x0004dc8a) bg_passive_tab_pane_g1_cp3_srt

0x75a5,	// (0x00049f68) bg_passive_tab_pane_g2_cp3_srt

0xb2d0,	// (0x0004dc93) bg_passive_tab_pane_g3_cp3_srt

0x0a13,	// (0x000433d6) bg_active_tab_pane_cp3_srt_ParamLimits

0x0a13,	// (0x000433d6) bg_active_tab_pane_cp3_srt

0xb2d9,	// (0x0004dc9c) tabs_4_active_pane_srt_g1

0xb2e1,	// (0x0004dca4) tabs_4_active_pane_srt_t1_ParamLimits

0xb2e1,	// (0x0004dca4) tabs_4_active_pane_srt_t1

0xb2c7,	// (0x0004dc8a) bg_active_tab_pane_g1_cp3_copy1

0x75a5,	// (0x00049f68) bg_active_tab_pane_g2_cp3_copy1

0xb2d0,	// (0x0004dc93) bg_active_tab_pane_g3_cp3_copy1

0x0a13,	// (0x000433d6) tabs_2_long_active_pane_srt_ParamLimits

0x0a13,	// (0x000433d6) tabs_2_long_active_pane_srt

0x0a13,	// (0x000433d6) tabs_2_long_passive_pane_srt_ParamLimits

0x0a13,	// (0x000433d6) tabs_2_long_passive_pane_srt

0x70ee,	// (0x00049ab1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x70ee,	// (0x00049ab1) bg_passive_tab_pane_cp4_srt

0xaff6,	// (0x0004d9b9) bg_passive_tab_pane_g1_cp4_srt

0x75a5,	// (0x00049f68) bg_passive_tab_pane_g2_cp4_srt

0xafff,	// (0x0004d9c2) bg_passive_tab_pane_g3_cp4_srt

0x20bf,	// (0x00044a82) bg_active_tab_pane_cp4_srt_ParamLimits

0x20bf,	// (0x00044a82) bg_active_tab_pane_cp4_srt

0xb008,	// (0x0004d9cb) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb008,	// (0x0004d9cb) tabs_2_long_active_pane_srt_t1

0xaff6,	// (0x0004d9b9) bg_active_tab_pane_g1_cp4_srt

0x75a5,	// (0x00049f68) bg_active_tab_pane_g2_cp4_srt

0xafff,	// (0x0004d9c2) bg_active_tab_pane_g3_cp4_srt

0x0a05,	// (0x000433c8) tabs_3_long_active_pane_srt_ParamLimits

0x0a05,	// (0x000433c8) tabs_3_long_active_pane_srt

0x0a05,	// (0x000433c8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0a05,	// (0x000433c8) tabs_3_long_passive_pane_cp_srt

0x0a05,	// (0x000433c8) tabs_3_long_passive_pane_srt_ParamLimits

0x0a05,	// (0x000433c8) tabs_3_long_passive_pane_srt

0x70ee,	// (0x00049ab1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x70ee,	// (0x00049ab1) bg_passive_tab_pane_cp5_srt

0x7732,	// (0x0004a0f5) bg_passive_tab_pane_g1_cp5_srt

0x75a5,	// (0x00049f68) bg_passive_tab_pane_g2_cp5_srt

0x773b,	// (0x0004a0fe) bg_passive_tab_pane_g3_cp5_srt

0x20bf,	// (0x00044a82) bg_active_tab_pane_cp5_srt_ParamLimits

0x20bf,	// (0x00044a82) bg_active_tab_pane_cp5_srt

0xafe4,	// (0x0004d9a7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafe4,	// (0x0004d9a7) tabs_3_long_active_pane_srt_t1

0x7732,	// (0x0004a0f5) bg_active_tab_pane_g1_cp5_srt

0x75a5,	// (0x00049f68) bg_active_tab_pane_g2_cp5_srt

0x773b,	// (0x0004a0fe) bg_active_tab_pane_g3_cp5_srt

0xafd6,	// (0x0004d999) navi_text_pane_srt_t1

0xafce,	// (0x0004d991) navi_icon_pane_srt_g1

0x4d28,	// (0x000476eb) midp_editing_number_pane_srt

0x4ba3,	// (0x00047566) midp_ticker_pane_srt

0x4d30,	// (0x000476f3) midp_ticker_pane_srt_g1

0x4d38,	// (0x000476fb) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00052130) midp_ticker_pane_srt_g

0x4d40,	// (0x00047703) midp_ticker_pane_srt_t1

0xafbf,	// (0x0004d982) midp_editing_number_pane_t1_copy1

0x77dd,	// (0x0004a1a0) listscroll_midp_pane

0x77dd,	// (0x0004a1a0) midp_form_pane

0x784f,	// (0x0004a212) midp_info_popup_window_ParamLimits

0x784f,	// (0x0004a212) midp_info_popup_window

0x0e6e,	// (0x00043831) bg_popup_sub_pane_cp50_ParamLimits

0x0e6e,	// (0x00043831) bg_popup_sub_pane_cp50

0xa107,	// (0x0004caca) listscroll_midp_info_pane_ParamLimits

0xa107,	// (0x0004caca) listscroll_midp_info_pane

0xa0e7,	// (0x0004caaa) listscroll_form_midp_pane_ParamLimits

0xa0e7,	// (0x0004caaa) listscroll_form_midp_pane

0xa0f3,	// (0x0004cab6) scroll_bar_cp050

0xa0c7,	// (0x0004ca8a) list_midp_pane

0xbcfe,	// (0x0004e6c1) signal_pane_g2_cp

0xa001,	// (0x0004c9c4) listscroll_midp_info_pane_t1_ParamLimits

0xa001,	// (0x0004c9c4) listscroll_midp_info_pane_t1

0xa019,	// (0x0004c9dc) listscroll_midp_info_pane_t2_ParamLimits

0xa019,	// (0x0004c9dc) listscroll_midp_info_pane_t2

0xa057,	// (0x0004ca1a) listscroll_midp_info_pane_t3_ParamLimits

0xa057,	// (0x0004ca1a) listscroll_midp_info_pane_t3

0xa091,	// (0x0004ca54) listscroll_midp_info_pane_t4_ParamLimits

0xa091,	// (0x0004ca54) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x000521e8) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x000521e8) listscroll_midp_info_pane_t

0x0ee4,	// (0x000438a7) scroll_pane_cp21

0x9fa1,	// (0x0004c964) form_midp_field_choice_group_pane

0x9faa,	// (0x0004c96d) form_midp_field_text_pane

0x9fe7,	// (0x0004c9aa) form_midp_field_time_pane

0x9fef,	// (0x0004c9b2) form_midp_gauge_slider_pane

0x9ff8,	// (0x0004c9bb) form_midp_gauge_wait_pane

0x09b7,	// (0x0004337a) form_midp_image_pane

0x5f3c,	// (0x000488ff) list_single_midp_pane_ParamLimits

0x5f3c,	// (0x000488ff) list_single_midp_pane

0x9f56,	// (0x0004c919) form_midp_field_text_pane_t1

0x9d20,	// (0x0004c6e3) input_focus_pane_cp050

0x9f90,	// (0x0004c953) list_midp_form_text_pane

0x9f25,	// (0x0004c8e8) form_midp_field_choice_group_pane_t1

0x9f33,	// (0x0004c8f6) input_focus_pane_cp051

0x9f47,	// (0x0004c90a) list_midp_choice_pane

0x09b7,	// (0x0004337a) status_idle_pane

0x9f09,	// (0x0004c8cc) form_midp_field_time_pane_t1

0x09ad,	// (0x00043370) wait_anim_pane_g2_copy1

0x9f17,	// (0x0004c8da) form_midp_field_time_pane_t2

0x0001,

0x4c03,	// (0x000475c6) aid_navinavi_width_2_pane

0xf820,	// (0x000521e3) form_midp_field_time_pane_t

0x09b7,	// (0x0004337a) input_focus_pane_cp052

0x09b7,	// (0x0004337a) bg_input_focus_pane_cp040

0x9ec9,	// (0x0004c88c) form_midp_gauge_slider_pane_t1

0x9ed7,	// (0x0004c89a) form_midp_gauge_slider_pane_t2

0x9ee5,	// (0x0004c8a8) form_midp_gauge_slider_pane_t3

0x9ef3,	// (0x0004c8b6) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x000521da) form_midp_gauge_slider_pane_t

0x9f01,	// (0x0004c8c4) form_midp_slider_pane

0x0a13,	// (0x000433d6) bg_input_focus_pane_cp041_ParamLimits

0x0a13,	// (0x000433d6) bg_input_focus_pane_cp041

0x9e96,	// (0x0004c859) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e96,	// (0x0004c859) form_midp_gauge_wait_pane_t1

0x9ea8,	// (0x0004c86b) form_midp_gauge_wait_pane_t2_ParamLimits

0x9ea8,	// (0x0004c86b) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x000521d5) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x000521d5) form_midp_gauge_wait_pane_t

0x9eba,	// (0x0004c87d) form_midp_wait_pane_ParamLimits

0x9eba,	// (0x0004c87d) form_midp_wait_pane

0x9e60,	// (0x0004c823) form_midp_image_pane_g1

0x9e69,	// (0x0004c82c) form_midp_image_pane_t1

0x9e78,	// (0x0004c83b) form_midp_image_pane_t2

0x9e87,	// (0x0004c84a) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x000521ce) form_midp_image_pane_t

0x9e57,	// (0x0004c81a) list_single_midp_pane_g1

0x5f2d,	// (0x000488f0) list_single_midp_pane_t1

0x9e2e,	// (0x0004c7f1) list_midp_form_item_pane_ParamLimits

0x9e2e,	// (0x0004c7f1) list_midp_form_item_pane

0x4bab,	// (0x0004756e) list_midp_form_item_pane_t1

0x4bba,	// (0x0004757d) midp_ticker_pane_g1

0x4bc6,	// (0x00047589) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00052116) midp_ticker_pane_g

0x4bd2,	// (0x00047595) midp_ticker_pane_t1

0xb20c,	// (0x0004dbcf) midp_editing_number_pane_t1

0xb1ea,	// (0x0004dbad) midp_editing_number_pane

0xb1f9,	// (0x0004dbbc) midp_ticker_pane

0xafaf,	// (0x0004d972) ai_message_heading_pane

0x09b7,	// (0x0004337a) bg_popup_window_pane_cp14

0xafb7,	// (0x0004d97a) listscroll_ai_message_pane

0xaf39,	// (0x0004d8fc) ai_message_heading_pane_g1_ParamLimits

0xaf39,	// (0x0004d8fc) ai_message_heading_pane_g1

0xaf45,	// (0x0004d908) ai_message_heading_pane_g2_ParamLimits

0xaf45,	// (0x0004d908) ai_message_heading_pane_g2

0xaf51,	// (0x0004d914) ai_message_heading_pane_g3_ParamLimits

0xaf51,	// (0x0004d914) ai_message_heading_pane_g3

0xaf5d,	// (0x0004d920) ai_message_heading_pane_g4_ParamLimits

0xaf5d,	// (0x0004d920) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0005230f) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0005230f) ai_message_heading_pane_g

0xaf69,	// (0x0004d92c) ai_message_heading_pane_t1_ParamLimits

0xaf69,	// (0x0004d92c) ai_message_heading_pane_t1

0xaf83,	// (0x0004d946) ai_message_heading_pane_t2_ParamLimits

0xaf83,	// (0x0004d946) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00052318) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00052318) ai_message_heading_pane_t

0xaf95,	// (0x0004d958) bg_popup_heading_pane_cp1_ParamLimits

0xaf95,	// (0x0004d958) bg_popup_heading_pane_cp1

0xaf27,	// (0x0004d8ea) list_ai_message_pane_ParamLimits

0xaf27,	// (0x0004d8ea) list_ai_message_pane

0x0ee4,	// (0x000438a7) scroll_pane_cp10

0xaec3,	// (0x0004d886) list_ai_message_pane_g1

0xaecb,	// (0x0004d88e) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x000522ec) list_ai_message_pane_g

0xaed3,	// (0x0004d896) list_ai_message_pane_t1_ParamLimits

0xaed3,	// (0x0004d896) list_ai_message_pane_t1

0xaee8,	// (0x0004d8ab) list_ai_message_pane_t2_ParamLimits

0xaee8,	// (0x0004d8ab) list_ai_message_pane_t2

0xaefd,	// (0x0004d8c0) list_ai_message_pane_t3_ParamLimits

0xaefd,	// (0x0004d8c0) list_ai_message_pane_t3

0xaf12,	// (0x0004d8d5) list_ai_message_pane_t4_ParamLimits

0xaf12,	// (0x0004d8d5) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x000522f1) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x000522f1) list_ai_message_pane_t

0xaeae,	// (0x0004d871) cell_ai_soft_ind_pane_ParamLimits

0xaeae,	// (0x0004d871) cell_ai_soft_ind_pane

0x4be4,	// (0x000475a7) cell_ai_soft_ind_pane_g1_ParamLimits

0x4be4,	// (0x000475a7) cell_ai_soft_ind_pane_g1

0x09b7,	// (0x0004337a) grid_highlight_cp1

0x4bf1,	// (0x000475b4) text_secondary_cp56_ParamLimits

0x4bf1,	// (0x000475b4) text_secondary_cp56

0xae83,	// (0x0004d846) example_general_pane_ParamLimits

0xae83,	// (0x0004d846) example_general_pane

0xae8f,	// (0x0004d852) example_parent_pane_g1_ParamLimits

0xae8f,	// (0x0004d852) example_parent_pane_g1

0xae9b,	// (0x0004d85e) example_parent_pane_t1_ParamLimits

0xae9b,	// (0x0004d85e) example_parent_pane_t1

0x7f26,	// (0x0004a8e9) popup_preview_text_window_ParamLimits

0x7f26,	// (0x0004a8e9) popup_preview_text_window

0x4afa,	// (0x000474bd) list_single_pane_cp2_g4

0x0be5,	// (0x000435a8) bg_popup_preview_window_pane_ParamLimits

0x0be5,	// (0x000435a8) bg_popup_preview_window_pane

0xabdd,	// (0x0004d5a0) popup_preview_text_window_t1_ParamLimits

0xabdd,	// (0x0004d5a0) popup_preview_text_window_t1

0xabfb,	// (0x0004d5be) popup_preview_text_window_t2_ParamLimits

0xabfb,	// (0x0004d5be) popup_preview_text_window_t2

0xac44,	// (0x0004d607) popup_preview_text_window_t3_ParamLimits

0xac44,	// (0x0004d607) popup_preview_text_window_t3

0xac89,	// (0x0004d64c) popup_preview_text_window_t4_ParamLimits

0xac89,	// (0x0004d64c) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x000522c0) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x000522c0) popup_preview_text_window_t

0xad07,	// (0x0004d6ca) scroll_pane_cp11

0x9cac,	// (0x0004c66f) bg_popup_preview_window_pane_g1

0xab9d,	// (0x0004d560) bg_popup_preview_window_pane_g2

0xaba5,	// (0x0004d568) bg_popup_preview_window_pane_g3

0xabad,	// (0x0004d570) bg_popup_preview_window_pane_g4

0xabb5,	// (0x0004d578) bg_popup_preview_window_pane_g5

0xabbd,	// (0x0004d580) bg_popup_preview_window_pane_g6

0xabc5,	// (0x0004d588) bg_popup_preview_window_pane_g7

0xabcd,	// (0x0004d590) bg_popup_preview_window_pane_g8

0x65b7,	// (0x00048f7a) aid_popup_width_pane

0x7f04,	// (0x0004a8c7) popup_midp_note_alarm_window_ParamLimits

0x7f04,	// (0x0004a8c7) popup_midp_note_alarm_window

0x0db9,	// (0x0004377c) data_form_pane_ParamLimits

0x5be6,	// (0x000485a9) form_field_data_pane_g1

0x5bf0,	// (0x000485b3) form_field_data_pane_t1_ParamLimits

0x0dc5,	// (0x00043788) input_focus_pane_ParamLimits

0x5c08,	// (0x000485cb) data_form_wide_pane_ParamLimits

0x5c19,	// (0x000485dc) form_field_data_wide_pane_g1

0x5c25,	// (0x000485e8) form_field_data_wide_pane_t1_ParamLimits

0x0cb9,	// (0x0004367c) input_focus_pane_cp6_ParamLimits

0x7092,	// (0x00049a55) input_popup_find_pane_g1_ParamLimits

0x7092,	// (0x00049a55) input_popup_find_pane_g1

0x7224,	// (0x00049be7) aid_navi_side_left_pane

0x7239,	// (0x00049bfc) aid_navi_side_right_pane

0xa5c6,	// (0x0004cf89) bg_popup_window_pane_cp30_ParamLimits

0xa5c6,	// (0x0004cf89) bg_popup_window_pane_cp30

0xa640,	// (0x0004d003) popup_midp_note_alarm_window_g1_ParamLimits

0xa640,	// (0x0004d003) popup_midp_note_alarm_window_g1

0xa670,	// (0x0004d033) popup_midp_note_alarm_window_t1_ParamLimits

0xa670,	// (0x0004d033) popup_midp_note_alarm_window_t1

0xa711,	// (0x0004d0d4) popup_midp_note_alarm_window_t2_ParamLimits

0xa711,	// (0x0004d0d4) popup_midp_note_alarm_window_t2

0xa7bf,	// (0x0004d182) popup_midp_note_alarm_window_t3_ParamLimits

0xa7bf,	// (0x0004d182) popup_midp_note_alarm_window_t3

0xa7e7,	// (0x0004d1aa) popup_midp_note_alarm_window_t4_ParamLimits

0xa7e7,	// (0x0004d1aa) popup_midp_note_alarm_window_t4

0xa807,	// (0x0004d1ca) popup_midp_note_alarm_window_t5_ParamLimits

0xa807,	// (0x0004d1ca) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0005225d) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0005225d) popup_midp_note_alarm_window_t

0xa8b3,	// (0x0004d276) wait_bar_pane_cp1_ParamLimits

0xa8b3,	// (0x0004d276) wait_bar_pane_cp1

0x09b7,	// (0x0004337a) wait_anim_pane_copy1

0x09b7,	// (0x0004337a) wait_border_pane_copy1

0xa2bc,	// (0x0004cc7f) wait_border_pane_g1_copy1

0x5c3f,	// (0x00048602) form_field_popup_pane_g1

0x5c47,	// (0x0004860a) form_field_popup_pane_t1_ParamLimits

0x0dc5,	// (0x00043788) input_focus_pane_cp7_ParamLimits

0x0df3,	// (0x000437b6) list_form_pane_ParamLimits

0x5c5f,	// (0x00048622) form_field_popup_wide_pane_g1

0x5c67,	// (0x0004862a) form_field_popup_wide_pane_t1_ParamLimits

0x0dc5,	// (0x00043788) input_focus_pane_cp8_ParamLimits

0x0dff,	// (0x000437c2) list_form_wide_pane_ParamLimits

0xb35b,	// (0x0004dd1e) aid_size_cell_graphic_pane

0x5cf1,	// (0x000486b4) data_form_pane_t1_ParamLimits

0x5f7c,	// (0x0004893f) data_form_wide_pane_t1_ParamLimits

0x9876,	// (0x0004c239) bg_status_flat_pane

0x69b6,	// (0x00049379) title_pane_t1_ParamLimits

0x09cd,	// (0x00043390) title_pane_t2_ParamLimits

0x09f3,	// (0x000433b6) title_pane_t3_ParamLimits

0xf557,	// (0x00051f1a) title_pane_t_ParamLimits

0x118d,	// (0x00043b50) level_1_signal_ParamLimits

0x119a,	// (0x00043b5d) level_2_signal_ParamLimits

0x11a7,	// (0x00043b6a) level_3_signal_ParamLimits

0x11b4,	// (0x00043b77) level_4_signal_ParamLimits

0x11c1,	// (0x00043b84) level_5_signal_ParamLimits

0x11ce,	// (0x00043b91) level_6_signal_ParamLimits

0x11db,	// (0x00043b9e) level_7_signal_ParamLimits

0x118d,	// (0x00043b50) level_1_battery_ParamLimits

0x119a,	// (0x00043b5d) level_2_battery_ParamLimits

0x11a7,	// (0x00043b6a) level_3_battery_ParamLimits

0x11b4,	// (0x00043b77) level_4_battery_ParamLimits

0x11c1,	// (0x00043b84) level_5_battery_ParamLimits

0x11ce,	// (0x00043b91) level_6_battery_ParamLimits

0x11db,	// (0x00043b9e) level_7_battery_ParamLimits

0xa4cb,	// (0x0004ce8e) bg_status_flat_pane_g1

0xa4d3,	// (0x0004ce96) bg_status_flat_pane_g2

0xa4db,	// (0x0004ce9e) bg_status_flat_pane_g3

0xa4e3,	// (0x0004cea6) bg_status_flat_pane_g4

0xa4eb,	// (0x0004ceae) bg_status_flat_pane_g5

0xa4f3,	// (0x0004ceb6) bg_status_flat_pane_g6

0xa4fb,	// (0x0004cebe) bg_status_flat_pane_g7

0x6a26,	// (0x000493e9) tabs_3_active_pane_t1_ParamLimits

0x6a26,	// (0x000493e9) tabs_3_passive_pane_t1_ParamLimits

0x6a40,	// (0x00049403) tabs_4_active_pane_t1_ParamLimits

0x6a40,	// (0x00049403) tabs_4_1_passive_pane_t1_ParamLimits

0x70c9,	// (0x00049a8c) tabs_2_active_pane_t1_ParamLimits

0x70c9,	// (0x00049a8c) tabs_2_passive_pane_t1_ParamLimits

0x20bf,	// (0x00044a82) bg_active_tab_pane_cp4_ParamLimits

0x70db,	// (0x00049a9e) tabs_2_long_active_pane_t1_ParamLimits

0x70ee,	// (0x00049ab1) bg_passive_tab_pane_cp4_ParamLimits

0x81cb,	// (0x0004ab8e) list_single_midp_graphic_pane_t1_ParamLimits

0x20bf,	// (0x00044a82) bg_active_tab_pane_cp5_ParamLimits

0x70fa,	// (0x00049abd) tabs_3_long_active_pane_t1_ParamLimits

0x70ee,	// (0x00049ab1) bg_passive_tab_pane_cp5_ParamLimits

0x81cb,	// (0x0004ab8e) list_single_midp_graphic_pane_t1

0x9876,	// (0x0004c239) bg_status_flat_pane_ParamLimits

0x993f,	// (0x0004c302) indicator_pane_cp2_ParamLimits

0x993f,	// (0x0004c302) indicator_pane_cp2

0x9a6a,	// (0x0004c42d) navi_pane_srt_ParamLimits

0x9a6a,	// (0x0004c42d) navi_pane_srt

0x9a8e,	// (0x0004c451) popup_clock_digital_analogue_window_cp1

0x0a57,	// (0x0004341a) indicator_pane_t1

0x4ba3,	// (0x00047566) copy_highlight_pane

0x4ba3,	// (0x00047566) cursor_graphics_pane

0x4ba3,	// (0x00047566) graphic_within_text_pane

0x4ba3,	// (0x00047566) link_highlight_pane

0xacca,	// (0x0004d68d) popup_preview_text_window_t5_ParamLimits

0xacca,	// (0x0004d68d) popup_preview_text_window_t5

0x4c0b,	// (0x000475ce) cursor_digital_pane

0x4c0b,	// (0x000475ce) cursor_primary_pane

0x4c1c,	// (0x000475df) cursor_primary_small_pane

0x4c24,	// (0x000475e7) cursor_secondary_pane

0x4c2c,	// (0x000475ef) cursor_title_pane

0x4c0b,	// (0x000475ce) link_highlight_digital_pane

0x4c13,	// (0x000475d6) link_highlight_primary_pane

0x4c1c,	// (0x000475df) link_highlight_primary_small_pane

0x4c24,	// (0x000475e7) link_highlight_secondary_pane

0x4c2c,	// (0x000475ef) link_highlight_title_pane

0x4c0b,	// (0x000475ce) copy_highlight_digital_pane

0x4c0b,	// (0x000475ce) copy_highlight_primary_pane

0x4c1c,	// (0x000475df) copy_highlight_primary_small_pane

0x4c24,	// (0x000475e7) copy_highlight_secondary_pane

0x4c2c,	// (0x000475ef) copy_highlight_title_pane

0x4c24,	// (0x000475e7) graphic_text_digital_pane

0xa569,	// (0x0004cf2c) graphic_text_primary_pane

0xa572,	// (0x0004cf35) graphic_text_primary_small_pane

0x4c1c,	// (0x000475df) graphic_text_secondary_pane

0x4c0b,	// (0x000475ce) graphic_text_title_pane

0x78a7,	// (0x0004a26a) cursor_primary_pane_g1

0xa55b,	// (0x0004cf1e) cursor_text_primary_t1

0xa543,	// (0x0004cf06) cursor_primary_small_pane_g1

0xa54d,	// (0x0004cf10) cursor_text_primary_small_t1

0xa52b,	// (0x0004ceee) cursor_primary_small_pane_g1_copy1

0xa535,	// (0x0004cef8) cursor_text_primary_small_t1_copy1

0xa513,	// (0x0004ced6) cursor_text_title_t1

0xa521,	// (0x0004cee4) cursor_title_pane_g1

0x78a7,	// (0x0004a26a) cursor_digital_pane_g1

0x4c34,	// (0x000475f7) cursor_text_digital_t1

0x4c42,	// (0x00047605) link_highlight_primary_pane_g1

0xa4bc,	// (0x0004ce7f) link_highlight_primary_pane_t1

0x4c42,	// (0x00047605) link_highlight_primary_small_pane_g1

0x4c4a,	// (0x0004760d) link_highlight_primary_small_pane_t1

0x4c42,	// (0x00047605) link_highlight_secondary_pane_g1

0x4c59,	// (0x0004761c) link_highlight_secondary_pane_t1

0xa421,	// (0x0004cde4) link_highlight_title_pane_g1

0xa438,	// (0x0004cdfb) link_highlight_title_pane_t1

0xa421,	// (0x0004cde4) link_highlight_digital_pane_g1

0xa429,	// (0x0004cdec) link_highlight_digital_pane_t1

0xa2db,	// (0x0004cc9e) copy_highlight_primary_pane_g1

0xa301,	// (0x0004ccc4) copy_highlight_primary_pane_t1

0xa2db,	// (0x0004cc9e) copy_highlight_primary_small_pane_g1

0xa2f2,	// (0x0004ccb5) copy_highlight_primary_small_pane_t1

0x4c68,	// (0x0004762b) copy_highlight_secondary_pane_g1

0x4c70,	// (0x00047633) copy_highlight_secondary_pane_t1

0xa2db,	// (0x0004cc9e) copy_highlight_title_pane_g1

0xa2e3,	// (0x0004cca6) copy_highlight_title_pane_t1

0xa2db,	// (0x0004cc9e) copy_highlight_digital_pane_g1

0xb529,	// (0x0004deec) copy_highlight_digital_pane_t1

0xb47d,	// (0x0004de40) graphic_text_primary_pane_g1

0xb50d,	// (0x0004ded0) graphic_text_primary_pane_t1

0xb51b,	// (0x0004dede) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0005238c) graphic_text_primary_pane_t

0xb4e9,	// (0x0004deac) graphic_text_primary_small_pane_g1

0xb4f1,	// (0x0004deb4) graphic_text_primary_small_pane_t1

0xb4ff,	// (0x0004dec2) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00052387) graphic_text_primary_small_pane_t

0xb4c5,	// (0x0004de88) graphic_text_secondary_pane_g1

0xb4cd,	// (0x0004de90) graphic_text_secondary_pane_t1

0xb4db,	// (0x0004de9e) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00052382) graphic_text_secondary_pane_t

0xb4a1,	// (0x0004de64) graphic_text_title_pane_g1

0xb4a9,	// (0x0004de6c) graphic_text_title_pane_t1

0xb4b7,	// (0x0004de7a) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0005237d) graphic_text_title_pane_t

0xb47d,	// (0x0004de40) graphic_text_digital_pane_g1

0xb485,	// (0x0004de48) graphic_text_digital_pane_t1

0xb493,	// (0x0004de56) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00052378) graphic_text_digital_pane_t

0x0a13,	// (0x000433d6) navi_icon_pane_srt_ParamLimits

0x0a13,	// (0x000433d6) navi_icon_pane_srt

0x09b7,	// (0x0004337a) navi_midp_pane_srt

0x09b7,	// (0x0004337a) navi_navi_pane_srt

0x0a13,	// (0x000433d6) navi_text_pane_srt_ParamLimits

0x0a13,	// (0x000433d6) navi_text_pane_srt

0xb448,	// (0x0004de0b) navi_navi_icon_text_pane_srt

0xb450,	// (0x0004de13) navi_navi_pane_srt_g1_ParamLimits

0xb450,	// (0x0004de13) navi_navi_pane_srt_g1

0xb462,	// (0x0004de25) navi_navi_pane_srt_g2_ParamLimits

0xb462,	// (0x0004de25) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x00052373) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x00052373) navi_navi_pane_srt_g

0xb474,	// (0x0004de37) navi_navi_tabs_pane_srt

0xb448,	// (0x0004de0b) navi_navi_text_pane_srt

0xb448,	// (0x0004de0b) navi_navi_volume_pane_srt

0xb439,	// (0x0004ddfc) navi_navi_text_pane_srt_t1

0x85ff,	// (0x0004afc2) navi_navi_volume_pane_srt_g1

0x8607,	// (0x0004afca) volume_small_pane_srt_ParamLimits

0x8607,	// (0x0004afca) volume_small_pane_srt

0x78b1,	// (0x0004a274) volume_small_pane_srt_g1_ParamLimits

0x78b1,	// (0x0004a274) volume_small_pane_srt_g1

0x78c1,	// (0x0004a284) volume_small_pane_srt_g2_ParamLimits

0x78c1,	// (0x0004a284) volume_small_pane_srt_g2

0x78d2,	// (0x0004a295) volume_small_pane_srt_g3_ParamLimits

0x78d2,	// (0x0004a295) volume_small_pane_srt_g3

0x78e3,	// (0x0004a2a6) volume_small_pane_srt_g4_ParamLimits

0x78e3,	// (0x0004a2a6) volume_small_pane_srt_g4

0x78f4,	// (0x0004a2b7) volume_small_pane_srt_g5_ParamLimits

0x78f4,	// (0x0004a2b7) volume_small_pane_srt_g5

0x7905,	// (0x0004a2c8) volume_small_pane_srt_g6_ParamLimits

0x7905,	// (0x0004a2c8) volume_small_pane_srt_g6

0x7916,	// (0x0004a2d9) volume_small_pane_srt_g7_ParamLimits

0x7916,	// (0x0004a2d9) volume_small_pane_srt_g7

0x7927,	// (0x0004a2ea) volume_small_pane_srt_g8_ParamLimits

0x7927,	// (0x0004a2ea) volume_small_pane_srt_g8

0x7938,	// (0x0004a2fb) volume_small_pane_srt_g9_ParamLimits

0x7938,	// (0x0004a2fb) volume_small_pane_srt_g9

0x7949,	// (0x0004a30c) volume_small_pane_srt_g10_ParamLimits

0x7949,	// (0x0004a30c) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0005211b) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0005211b) volume_small_pane_srt_g

0x6c8d,	// (0x00049650) query_popup_data_pane_cp2

0xb41f,	// (0x0004dde2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb41f,	// (0x0004dde2) navi_navi_icon_text_pane_srt_t1

0xa569,	// (0x0004cf2c) navi_tabs_2_long_pane_srt

0xa569,	// (0x0004cf2c) navi_tabs_2_pane_srt

0xa569,	// (0x0004cf2c) navi_tabs_3_long_pane_srt

0xa569,	// (0x0004cf2c) navi_tabs_3_pane_srt

0xa569,	// (0x0004cf2c) navi_tabs_4_pane_srt

0x85df,	// (0x0004afa2) tabs_2_active_pane_srt_ParamLimits

0x85df,	// (0x0004afa2) tabs_2_active_pane_srt

0x85ef,	// (0x0004afb2) tabs_2_passive_pane_srt_ParamLimits

0x85ef,	// (0x0004afb2) tabs_2_passive_pane_srt

0x9785,	// (0x0004c148) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9785,	// (0x0004c148) bg_passive_tab_pane_cp1_srt

0xb3eb,	// (0x0004ddae) bg_passive_tab_pane_g1_cp1_srt

0x75a5,	// (0x00049f68) bg_passive_tab_pane_g2_cp1_srt

0xb3f4,	// (0x0004ddb7) bg_passive_tab_pane_g3_cp1_srt

0x0a13,	// (0x000433d6) bg_active_tab_pane_cp1_srt_ParamLimits

0x0a13,	// (0x000433d6) bg_active_tab_pane_cp1_srt

0xb3fd,	// (0x0004ddc0) tabs_2_active_pane_srt_g1

0xb405,	// (0x0004ddc8) tabs_2_active_pane_srt_t1_ParamLimits

0xb405,	// (0x0004ddc8) tabs_2_active_pane_srt_t1

0xb3eb,	// (0x0004ddae) bg_active_tab_pane_g1_cp1_srt

0x75a5,	// (0x00049f68) bg_active_tab_pane_g2_cp1_srt

0xb3f4,	// (0x0004ddb7) bg_active_tab_pane_g3_cp1_srt

0x85ac,	// (0x0004af6f) tabs_3_active_pane_srt_ParamLimits

0x85ac,	// (0x0004af6f) tabs_3_active_pane_srt

0x85bd,	// (0x0004af80) tabs_3_passive_pane_cp_srt_ParamLimits

0x85bd,	// (0x0004af80) tabs_3_passive_pane_cp_srt

0x85ce,	// (0x0004af91) tabs_3_passive_pane_srt_ParamLimits

0x85ce,	// (0x0004af91) tabs_3_passive_pane_srt

0x9785,	// (0x0004c148) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9785,	// (0x0004c148) bg_passive_tab_pane_cp2_srt

0x795a,	// (0x0004a31d) bg_passive_tab_pane_g1_cp2_srt

0x75a5,	// (0x00049f68) bg_passive_tab_pane_g2_cp2_srt

0x7963,	// (0x0004a326) bg_passive_tab_pane_g3_cp2_srt

0x0a13,	// (0x000433d6) bg_active_tab_pane_cp2_srt_ParamLimits

0x0a13,	// (0x000433d6) bg_active_tab_pane_cp2_srt

0xb3d1,	// (0x0004dd94) tabs_3_active_pane_srt_g1

0xb3d9,	// (0x0004dd9c) tabs_3_active_pane_srt_t1_ParamLimits

0xb3d9,	// (0x0004dd9c) tabs_3_active_pane_srt_t1

0x795a,	// (0x0004a31d) bg_active_tab_pane_g1_cp2_srt

0x75a5,	// (0x00049f68) bg_active_tab_pane_g2_cp2_srt

0x7963,	// (0x0004a326) bg_active_tab_pane_g3_cp2_srt

0x8564,	// (0x0004af27) tabs_4_active_pane_srt_ParamLimits

0x8564,	// (0x0004af27) tabs_4_active_pane_srt

0x8576,	// (0x0004af39) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8576,	// (0x0004af39) tabs_4_passive_pane_cp2_srt

0x7b7f,	// (0x0004a542) aid_size_cell_toolbar

0x70ee,	// (0x00049ab1) main_idle_act_pane_ParamLimits

0x7d36,	// (0x0004a6f9) popup_large_graphic_colour_window_ParamLimits

0x80a1,	// (0x0004aa64) popup_toolbar_window_ParamLimits

0x80a1,	// (0x0004aa64) popup_toolbar_window

0xb21b,	// (0x0004dbde) list_single_graphic_2heading_pane_ParamLimits

0xb21b,	// (0x0004dbde) list_single_graphic_2heading_pane

0x1075,	// (0x00043a38) aid_size_cell_apps_grid_lsc_pane

0x1087,	// (0x00043a4a) aid_size_cell_apps_grid_prt_pane

0x9785,	// (0x0004c148) bg_wml_button_pane_cp1_ParamLimits

0x9785,	// (0x0004c148) bg_wml_button_pane_cp1

0x9f56,	// (0x0004c919) form_midp_field_text_pane_t1_ParamLimits

0x9d20,	// (0x0004c6e3) input_focus_pane_cp050_ParamLimits

0x9f90,	// (0x0004c953) list_midp_form_text_pane_ParamLimits

0x9f33,	// (0x0004c8f6) input_focus_pane_cp051_ParamLimits

0x9f47,	// (0x0004c90a) list_midp_choice_pane_ParamLimits

0x9dd6,	// (0x0004c799) list_single_2graphic_pane_cp3_ParamLimits

0x9dd6,	// (0x0004c799) list_single_2graphic_pane_cp3

0x9dfb,	// (0x0004c7be) list_single_midp_graphic_pane_ParamLimits

0x9dfb,	// (0x0004c7be) list_single_midp_graphic_pane

0x5e0f,	// (0x000487d2) list_single_graphic_2heading_pane_g1_ParamLimits

0x5e0f,	// (0x000487d2) list_single_graphic_2heading_pane_g1

0x5e1b,	// (0x000487de) list_single_graphic_2heading_pane_g4_ParamLimits

0x5e1b,	// (0x000487de) list_single_graphic_2heading_pane_g4

0x5e27,	// (0x000487ea) list_single_graphic_2heading_pane_g5_ParamLimits

0x5e27,	// (0x000487ea) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0005216e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0005216e) list_single_graphic_2heading_pane_g

0x5e33,	// (0x000487f6) list_single_graphic_2heading_pane_t1_ParamLimits

0x5e33,	// (0x000487f6) list_single_graphic_2heading_pane_t1

0x5e47,	// (0x0004880a) list_single_graphic_2heading_pane_t2_ParamLimits

0x5e47,	// (0x0004880a) list_single_graphic_2heading_pane_t2

0x5e61,	// (0x00048824) list_single_graphic_2heading_pane_t3_ParamLimits

0x5e61,	// (0x00048824) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x00052175) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x00052175) list_single_graphic_2heading_pane_t

0x9bea,	// (0x0004c5ad) bg_popup_sub_pane_cp2

0x9c14,	// (0x0004c5d7) grid_toobar_pane

0x814e,	// (0x0004ab11) cell_toolbar_pane_ParamLimits

0x814e,	// (0x0004ab11) cell_toolbar_pane

0x9c50,	// (0x0004c613) cell_toolbar_pane_g1_ParamLimits

0x9c50,	// (0x0004c613) cell_toolbar_pane_g1

0x9c64,	// (0x0004c627) cell_toolbar_pane_g2_ParamLimits

0x9c64,	// (0x0004c627) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x00052183) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x00052183) cell_toolbar_pane_g

0x9c86,	// (0x0004c649) grid_highlight_pane_cp2_ParamLimits

0x9c86,	// (0x0004c649) grid_highlight_pane_cp2

0x9ca0,	// (0x0004c663) toolbar_button_pane

0x9cac,	// (0x0004c66f) toolbar_button_pane_g1

0x9cb4,	// (0x0004c677) toolbar_button_pane_g2

0x9cbc,	// (0x0004c67f) toolbar_button_pane_g3

0x9cc4,	// (0x0004c687) toolbar_button_pane_g4

0x9ccc,	// (0x0004c68f) toolbar_button_pane_g5

0x9cd4,	// (0x0004c697) toolbar_button_pane_g6

0x9cdc,	// (0x0004c69f) toolbar_button_pane_g7

0x9ce4,	// (0x0004c6a7) toolbar_button_pane_g8

0x9cec,	// (0x0004c6af) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x00052188) toolbar_button_pane_g

0x8186,	// (0x0004ab49) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8186,	// (0x0004ab49) list_single_2graphic_pane_g1_cp3

0x8192,	// (0x0004ab55) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8192,	// (0x0004ab55) list_single_2graphic_pane_g2_cp3

0x4a01,	// (0x000473c4) list_single_2graphic_pane_g3_cp3

0x81a3,	// (0x0004ab66) list_single_2graphic_pane_g4_cp3_ParamLimits

0x81a3,	// (0x0004ab66) list_single_2graphic_pane_g4_cp3

0x81af,	// (0x0004ab72) list_single_2graphic_pane_t1_cp3_ParamLimits

0x81af,	// (0x0004ab72) list_single_2graphic_pane_t1_cp3

0x1442,	// (0x00043e05) list_single_midp_graphic_pane_g2_ParamLimits

0x1442,	// (0x00043e05) list_single_midp_graphic_pane_g2

0x5dff,	// (0x000487c2) aid_zoom_text_primary

0x7b87,	// (0x0004a54a) aid_zoom_text_secondary

0x79ba,	// (0x0004a37d) status_small_pane_g7_ParamLimits

0x79ba,	// (0x0004a37d) status_small_pane_g7

0x79dd,	// (0x0004a3a0) status_small_pane_t1_ParamLimits

0x6999,	// (0x0004935c) title_pane_g2

0x0003,

0xf54e,	// (0x00051f11) title_pane_g

0x6ce7,	// (0x000496aa) aid_size_cell_colour_1_pane_ParamLimits

0x6ce7,	// (0x000496aa) aid_size_cell_colour_1_pane

0x6cfb,	// (0x000496be) aid_size_cell_colour_2_pane_ParamLimits

0x6cfb,	// (0x000496be) aid_size_cell_colour_2_pane

0x6d0f,	// (0x000496d2) aid_size_cell_colour_3_pane_ParamLimits

0x6d0f,	// (0x000496d2) aid_size_cell_colour_3_pane

0x6d23,	// (0x000496e6) aid_size_cell_colour_4_pane_ParamLimits

0x6d23,	// (0x000496e6) aid_size_cell_colour_4_pane

0x7161,	// (0x00049b24) title_pane_stacon_g1_ParamLimits

0x7161,	// (0x00049b24) title_pane_stacon_g1

0xa358,	// (0x0004cd1b) popup_note_wait_window_g3_ParamLimits

0xa358,	// (0x0004cd1b) popup_note_wait_window_g3

0xa3ce,	// (0x0004cd91) popup_note_wait_window_t5_ParamLimits

0xa3ce,	// (0x0004cd91) popup_note_wait_window_t5

0x09b7,	// (0x0004337a) main_feb_china_hwr_fs_writing_pane

0x7c1d,	// (0x0004a5e0) popup_feb_china_hwr_fs_window_ParamLimits

0x7c1d,	// (0x0004a5e0) popup_feb_china_hwr_fs_window

0x81f9,	// (0x0004abbc) aid_size_cell_hwr_fs_ParamLimits

0x81f9,	// (0x0004abbc) aid_size_cell_hwr_fs

0x9d20,	// (0x0004c6e3) bg_popup_sub_pane_cp3_ParamLimits

0x9d20,	// (0x0004c6e3) bg_popup_sub_pane_cp3

0x820e,	// (0x0004abd1) grid_hwr_fs_pane_ParamLimits

0x820e,	// (0x0004abd1) grid_hwr_fs_pane

0x8226,	// (0x0004abe9) linegrid_hwr_fs_pane_ParamLimits

0x8226,	// (0x0004abe9) linegrid_hwr_fs_pane

0x8236,	// (0x0004abf9) cell_hwr_fs_pane_ParamLimits

0x8236,	// (0x0004abf9) cell_hwr_fs_pane

0x9d2c,	// (0x0004c6ef) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d2c,	// (0x0004c6ef) linegrid_hwr_fs_pane_g1

0x9d38,	// (0x0004c6fb) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d38,	// (0x0004c6fb) linegrid_hwr_fs_pane_g2

0x9d4a,	// (0x0004c70d) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d4a,	// (0x0004c70d) linegrid_hwr_fs_pane_g3

0x8258,	// (0x0004ac1b) linegrid_hwr_fs_pane_g4_ParamLimits

0x8258,	// (0x0004ac1b) linegrid_hwr_fs_pane_g4

0x8272,	// (0x0004ac35) linegrid_hwr_fs_pane_g5_ParamLimits

0x8272,	// (0x0004ac35) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x000521b3) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x000521b3) linegrid_hwr_fs_pane_g

0x9d56,	// (0x0004c719) cell_hwr_fs_pane_g1_ParamLimits

0x9d56,	// (0x0004c719) cell_hwr_fs_pane_g1

0x9b24,	// (0x0004c4e7) cell_hwr_fs_pane_g2_ParamLimits

0x9b24,	// (0x0004c4e7) cell_hwr_fs_pane_g2

0x9d6c,	// (0x0004c72f) cell_hwr_fs_pane_g3_ParamLimits

0x9d6c,	// (0x0004c72f) cell_hwr_fs_pane_g3

0x9d79,	// (0x0004c73c) cell_hwr_fs_pane_g4_ParamLimits

0x9d79,	// (0x0004c73c) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x000521be) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x000521be) cell_hwr_fs_pane_g

0x8288,	// (0x0004ac4b) cell_hwr_fs_pane_t1

0x09b7,	// (0x0004337a) grid_highlight_pane_cp6

0x09b7,	// (0x0004337a) main_idle_act2_pane

0x0ecb,	// (0x0004388e) aid_inside_area_popup_secondary

0xa9ed,	// (0x0004d3b0) aid_inside_area_window_primary_ParamLimits

0xa9ed,	// (0x0004d3b0) aid_inside_area_window_primary

0xb538,	// (0x0004defb) ai2_news_ticker_pane

0xb540,	// (0x0004df03) aid_size_cell_ai1_link_ParamLimits

0xb540,	// (0x0004df03) aid_size_cell_ai1_link

0xb55a,	// (0x0004df1d) popup_ai2_data_window_ParamLimits

0xb55a,	// (0x0004df1d) popup_ai2_data_window

0xb570,	// (0x0004df33) popup_ai2_link_window_ParamLimits

0xb570,	// (0x0004df33) popup_ai2_link_window

0x9d20,	// (0x0004c6e3) bg_popup_sub_pane_cp4_ParamLimits

0x9d20,	// (0x0004c6e3) bg_popup_sub_pane_cp4

0xb584,	// (0x0004df47) grid_ai2_link_pane_ParamLimits

0xb584,	// (0x0004df47) grid_ai2_link_pane

0xb59b,	// (0x0004df5e) popup_ai2_link_window_g1_ParamLimits

0xb59b,	// (0x0004df5e) popup_ai2_link_window_g1

0xb5a7,	// (0x0004df6a) popup_ai2_link_window_g2_ParamLimits

0xb5a7,	// (0x0004df6a) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00052391) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00052391) popup_ai2_link_window_g

0xb5b6,	// (0x0004df79) ai2_mp_button_pane

0xb5be,	// (0x0004df81) ai2_mp_volume_pane

0x9f33,	// (0x0004c8f6) bg_popup_sub_pane_cp5_ParamLimits

0x9f33,	// (0x0004c8f6) bg_popup_sub_pane_cp5

0xb5c6,	// (0x0004df89) heading_ai2_gene_pane_ParamLimits

0xb5c6,	// (0x0004df89) heading_ai2_gene_pane

0xb5d2,	// (0x0004df95) list_ai2_gene_pane_ParamLimits

0xb5d2,	// (0x0004df95) list_ai2_gene_pane

0xb61a,	// (0x0004dfdd) cell_ai2_link_pane_ParamLimits

0xb61a,	// (0x0004dfdd) cell_ai2_link_pane

0xb630,	// (0x0004dff3) cell_ai2_link_pane_g1

0x09b7,	// (0x0004337a) grid_highlight_pane_cp7

0x861c,	// (0x0004afdf) ai2_mp_volume_pane_g1

0xb700,	// (0x0004e0c3) ai2_mp_volume_pane_g2

0xb675,	// (0x0004e038) list_ai2_gene_pane_t1

0xb708,	// (0x0004e0cb) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x000523aa) ai2_mp_volume_pane_g

0x8624,	// (0x0004afe7) volume_small_pane_cp3

0xb710,	// (0x0004e0d3) aid_size_cell_ai2_button

0xb718,	// (0x0004e0db) grid_ai2_button_pane

0xb721,	// (0x0004e0e4) cell_ai2_button_pane_ParamLimits

0xb721,	// (0x0004e0e4) cell_ai2_button_pane

0x09ad,	// (0x00043370) cell_ai2_button_pane_g1

0x09b7,	// (0x0004337a) grid_highlight_pane_cp8

0xb6c0,	// (0x0004e083) ai2_gene_pane_t1_ParamLimits

0xb6c0,	// (0x0004e083) ai2_gene_pane_t1

0x7b75,	// (0x0004a538) aid_height_parent_landscape

0xb056,	// (0x0004da19) aid_height_set_list

0xb067,	// (0x0004da2a) aid_size_parent

0xb35b,	// (0x0004dd1e) aid_size_cell_graphic_pane_ParamLimits

0xb5e2,	// (0x0004dfa5) popup_ai2_data_window_g1_ParamLimits

0xb5e2,	// (0x0004dfa5) popup_ai2_data_window_g1

0xb5ee,	// (0x0004dfb1) ai2_news_ticker_pane_g1

0xb5f6,	// (0x0004dfb9) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00052396) ai2_news_ticker_pane_g

0xb5fe,	// (0x0004dfc1) ai2_news_ticker_pane_t1

0xb60c,	// (0x0004dfcf) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0005239b) ai2_news_ticker_pane_t

0xb639,	// (0x0004dffc) heading_ai2_gene_pane_g1

0xb641,	// (0x0004e004) heading_ai2_gene_pane_t1_ParamLimits

0xb641,	// (0x0004e004) heading_ai2_gene_pane_t1

0xb656,	// (0x0004e019) list_highlight_pane_cp6

0xb65e,	// (0x0004e021) ai2_gene_pane_ParamLimits

0xb65e,	// (0x0004e021) ai2_gene_pane

0xb683,	// (0x0004e046) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x000523a0) list_ai2_gene_pane_t

0xb691,	// (0x0004e054) list_highlight_pane_cp8_ParamLimits

0xb691,	// (0x0004e054) list_highlight_pane_cp8

0xb6a2,	// (0x0004e065) ai2_gene_pane_g1_ParamLimits

0xb6a2,	// (0x0004e065) ai2_gene_pane_g1

0xb6b4,	// (0x0004e077) ai2_gene_pane_g2_ParamLimits

0xb6b4,	// (0x0004e077) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x000523a5) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x000523a5) ai2_gene_pane_g

0x0d64,	// (0x00043727) scroll_pane_cp12

0x7b32,	// (0x0004a4f5) control_pane_t3_ParamLimits

0x7b32,	// (0x0004a4f5) control_pane_t3

0x79ce,	// (0x0004a391) status_small_pane_g8_ParamLimits

0x79ce,	// (0x0004a391) status_small_pane_g8

0x7cff,	// (0x0004a6c2) popup_find_window_ParamLimits

0x7f18,	// (0x0004a8db) popup_note_image_window_ParamLimits

0x5e79,	// (0x0004883c) list_double2_graphic_pane_vc_g1_ParamLimits

0x5e79,	// (0x0004883c) list_double2_graphic_pane_vc_g1

0x6fba,	// (0x0004997d) list_double2_graphic_pane_vc_g2_ParamLimits

0x6fba,	// (0x0004997d) list_double2_graphic_pane_vc_g2

0x6fc6,	// (0x00049989) list_double2_graphic_pane_vc_g3_ParamLimits

0x6fc6,	// (0x00049989) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0005217c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0005217c) list_double2_graphic_pane_vc_g

0x5e85,	// (0x00048848) list_double2_graphic_pane_vc_t1_ParamLimits

0x5e85,	// (0x00048848) list_double2_graphic_pane_vc_t1

0x6fba,	// (0x0004997d) list_single_heading_pane_vc_g1_ParamLimits

0x6fba,	// (0x0004997d) list_single_heading_pane_vc_g1

0x6fc6,	// (0x00049989) list_single_heading_pane_vc_g2_ParamLimits

0x6fc6,	// (0x00049989) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0005219d) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0005219d) list_single_heading_pane_vc_g

0x5e9b,	// (0x0004885e) list_single_heading_pane_vc_t1_ParamLimits

0x5e9b,	// (0x0004885e) list_single_heading_pane_vc_t1

0x5eb1,	// (0x00048874) list_single_heading_pane_vc_t2_ParamLimits

0x5eb1,	// (0x00048874) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x000521a2) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x000521a2) list_single_heading_pane_vc_t

0x81e1,	// (0x0004aba4) list_setting_number_pane_vc_g1_ParamLimits

0x81e1,	// (0x0004aba4) list_setting_number_pane_vc_g1

0x81ed,	// (0x0004abb0) list_setting_number_pane_vc_g2_ParamLimits

0x81ed,	// (0x0004abb0) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x000521a7) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x000521a7) list_setting_number_pane_vc_g

0x5ec3,	// (0x00048886) list_setting_number_pane_vc_t1_ParamLimits

0x5ec3,	// (0x00048886) list_setting_number_pane_vc_t1

0x5ed7,	// (0x0004889a) list_setting_number_pane_vc_t2_ParamLimits

0x5ed7,	// (0x0004889a) list_setting_number_pane_vc_t2

0x5ef3,	// (0x000488b6) list_setting_number_pane_vc_t3_ParamLimits

0x5ef3,	// (0x000488b6) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x000521ac) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x000521ac) list_setting_number_pane_vc_t

0x5f1d,	// (0x000488e0) set_value_pane_vc_ParamLimits

0x5f1d,	// (0x000488e0) set_value_pane_vc

0xb21b,	// (0x0004dbde) list_double2_graphic_pane_vc_ParamLimits

0xb21b,	// (0x0004dbde) list_double2_graphic_pane_vc

0xb21b,	// (0x0004dbde) list_double2_large_graphic_pane_vc_ParamLimits

0xb21b,	// (0x0004dbde) list_double2_large_graphic_pane_vc

0xb21b,	// (0x0004dbde) list_double2_pane_vc_ParamLimits

0xb21b,	// (0x0004dbde) list_double2_pane_vc

0xb21b,	// (0x0004dbde) list_double_graphic_heading_pane_vc_ParamLimits

0xb21b,	// (0x0004dbde) list_double_graphic_heading_pane_vc

0xb21b,	// (0x0004dbde) list_double_graphic_pane_vc_ParamLimits

0xb21b,	// (0x0004dbde) list_double_graphic_pane_vc

0xb21b,	// (0x0004dbde) list_double_heading_pane_vc_ParamLimits

0xb21b,	// (0x0004dbde) list_double_heading_pane_vc

0xb22d,	// (0x0004dbf0) list_double_large_graphic_pane_vc_ParamLimits

0xb22d,	// (0x0004dbf0) list_double_large_graphic_pane_vc

0xb21b,	// (0x0004dbde) list_double_number_pane_vc_ParamLimits

0xb21b,	// (0x0004dbde) list_double_number_pane_vc

0xb21b,	// (0x0004dbde) list_double_pane_vc_ParamLimits

0xb21b,	// (0x0004dbde) list_double_pane_vc

0xb21b,	// (0x0004dbde) list_double_time_pane_vc_ParamLimits

0xb21b,	// (0x0004dbde) list_double_time_pane_vc

0xb21b,	// (0x0004dbde) list_setting_number_pane_vc_ParamLimits

0xb21b,	// (0x0004dbde) list_setting_number_pane_vc

0xb21b,	// (0x0004dbde) list_setting_pane_vc_ParamLimits

0xb21b,	// (0x0004dbde) list_setting_pane_vc

0xb21b,	// (0x0004dbde) list_single_graphic_heading_pane_vc_ParamLimits

0xb21b,	// (0x0004dbde) list_single_graphic_heading_pane_vc

0xb21b,	// (0x0004dbde) list_single_heading_pane_vc_ParamLimits

0xb21b,	// (0x0004dbde) list_single_heading_pane_vc

0x84c8,	// (0x0004ae8b) list_single_number_heading_pane_vc_ParamLimits

0x84c8,	// (0x0004ae8b) list_single_number_heading_pane_vc

0x5ffb,	// (0x000489be) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5ffb,	// (0x000489be) list_double_graphic_heading_pane_vc_g1

0x6fba,	// (0x0004997d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6fba,	// (0x0004997d) list_double_graphic_heading_pane_vc_g2

0x6fc6,	// (0x00049989) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6fc6,	// (0x00049989) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x000523b1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x000523b1) list_double_graphic_heading_pane_vc_g

0x6007,	// (0x000489ca) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6007,	// (0x000489ca) list_double_graphic_heading_pane_vc_t1

0x601b,	// (0x000489de) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x601b,	// (0x000489de) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x000523b8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x000523b8) list_double_graphic_heading_pane_vc_t

0x81e1,	// (0x0004aba4) list_setting_pane_vc_g1_ParamLimits

0x81e1,	// (0x0004aba4) list_setting_pane_vc_g1

0x81ed,	// (0x0004abb0) list_setting_pane_vc_g2_ParamLimits

0x81ed,	// (0x0004abb0) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x000521a7) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x000521a7) list_setting_pane_vc_g

0x6033,	// (0x000489f6) list_setting_pane_vc_t1_ParamLimits

0x6033,	// (0x000489f6) list_setting_pane_vc_t1

0x604f,	// (0x00048a12) list_setting_pane_vc_t2_ParamLimits

0x604f,	// (0x00048a12) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x000523fb) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x000523fb) list_setting_pane_vc_t

0x5f1d,	// (0x000488e0) set_value_pane_cp_vc_ParamLimits

0x5f1d,	// (0x000488e0) set_value_pane_cp_vc

0x6fba,	// (0x0004997d) list_single_number_heading_pane_vc_g1_ParamLimits

0x6fba,	// (0x0004997d) list_single_number_heading_pane_vc_g1

0x6fc6,	// (0x00049989) list_single_number_heading_pane_vc_g2_ParamLimits

0x6fc6,	// (0x00049989) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0005219d) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0005219d) list_single_number_heading_pane_vc_g

0x6069,	// (0x00048a2c) list_single_number_heading_pane_vc_t1_ParamLimits

0x6069,	// (0x00048a2c) list_single_number_heading_pane_vc_t1

0x607f,	// (0x00048a42) list_single_number_heading_pane_vc_t2_ParamLimits

0x607f,	// (0x00048a42) list_single_number_heading_pane_vc_t2

0x6091,	// (0x00048a54) list_single_number_heading_pane_vc_t3_ParamLimits

0x6091,	// (0x00048a54) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x00052400) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x00052400) list_single_number_heading_pane_vc_t

0x60a3,	// (0x00048a66) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x60a3,	// (0x00048a66) list_single_graphic_heading_pane_vc_g1

0x6fba,	// (0x0004997d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6fba,	// (0x0004997d) list_single_graphic_heading_pane_vc_g4

0x6fc6,	// (0x00049989) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6fc6,	// (0x00049989) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa44,	// (0x00052407) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x00052407) list_single_graphic_heading_pane_vc_g

0x5e9b,	// (0x0004885e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5e9b,	// (0x0004885e) list_single_graphic_heading_pane_vc_t1

0x60af,	// (0x00048a72) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x60af,	// (0x00048a72) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4b,	// (0x0005240e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4b,	// (0x0005240e) list_single_graphic_heading_pane_vc_t

0x6fba,	// (0x0004997d) list_double2_pane_vc_g1_ParamLimits

0x6fba,	// (0x0004997d) list_double2_pane_vc_g1

0x6fc6,	// (0x00049989) list_double2_pane_vc_g2_ParamLimits

0x6fc6,	// (0x00049989) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0005219d) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0005219d) list_double2_pane_vc_g

0x60c1,	// (0x00048a84) list_double2_pane_vc_t1_ParamLimits

0x60c1,	// (0x00048a84) list_double2_pane_vc_t1

0x867e,	// (0x0004b041) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x867e,	// (0x0004b041) list_double2_large_graphic_pane_vc_g1

0x6fba,	// (0x0004997d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6fba,	// (0x0004997d) list_double2_large_graphic_pane_vc_g2

0x6fc6,	// (0x00049989) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6fc6,	// (0x00049989) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa50,	// (0x00052413) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa50,	// (0x00052413) list_double2_large_graphic_pane_vc_g

0x5e85,	// (0x00048848) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5e85,	// (0x00048848) list_double2_large_graphic_pane_vc_t1

0x868a,	// (0x0004b04d) list_double_time_pane_vc_g1_ParamLimits

0x868a,	// (0x0004b04d) list_double_time_pane_vc_g1

0x8696,	// (0x0004b059) list_double_time_pane_vc_g2_ParamLimits

0x8696,	// (0x0004b059) list_double_time_pane_vc_g2

0x0001,

0xfa57,	// (0x0005241a) list_double_time_pane_vc_g_ParamLimits

0xfa57,	// (0x0005241a) list_double_time_pane_vc_g

0x60d9,	// (0x00048a9c) list_double_time_pane_vc_t1_ParamLimits

0x60d9,	// (0x00048a9c) list_double_time_pane_vc_t1

0x60fd,	// (0x00048ac0) list_double_time_pane_vc_t2_ParamLimits

0x60fd,	// (0x00048ac0) list_double_time_pane_vc_t2

0x614c,	// (0x00048b0f) list_double_time_pane_vc_t3_ParamLimits

0x614c,	// (0x00048b0f) list_double_time_pane_vc_t3

0x615e,	// (0x00048b21) list_double_time_pane_vc_t4_ParamLimits

0x615e,	// (0x00048b21) list_double_time_pane_vc_t4

0x0003,

0xfa5c,	// (0x0005241f) list_double_time_pane_vc_t_ParamLimits

0xfa5c,	// (0x0005241f) list_double_time_pane_vc_t

0x6fba,	// (0x0004997d) list_double_pane_vc_g1_ParamLimits

0x6fba,	// (0x0004997d) list_double_pane_vc_g1

0x6fc6,	// (0x00049989) list_double_pane_vc_g2_ParamLimits

0x6fc6,	// (0x00049989) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0005219d) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0005219d) list_double_pane_vc_g

0x6172,	// (0x00048b35) list_double_pane_vc_t1_ParamLimits

0x6172,	// (0x00048b35) list_double_pane_vc_t1

0x6186,	// (0x00048b49) list_double_pane_vc_t2_ParamLimits

0x6186,	// (0x00048b49) list_double_pane_vc_t2

0x0001,

0xfa65,	// (0x00052428) list_double_pane_vc_t_ParamLimits

0xfa65,	// (0x00052428) list_double_pane_vc_t

0x6fba,	// (0x0004997d) list_double_number_pane_vc_g1_ParamLimits

0x6fba,	// (0x0004997d) list_double_number_pane_vc_g1

0x6fc6,	// (0x00049989) list_double_number_pane_vc_g2_ParamLimits

0x6fc6,	// (0x00049989) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0005219d) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0005219d) list_double_number_pane_vc_g

0x619e,	// (0x00048b61) list_double_number_pane_vc_t1_ParamLimits

0x619e,	// (0x00048b61) list_double_number_pane_vc_t1

0x6172,	// (0x00048b35) list_double_number_pane_vc_t2_ParamLimits

0x6172,	// (0x00048b35) list_double_number_pane_vc_t2

0x61b0,	// (0x00048b73) list_double_number_pane_vc_t3_ParamLimits

0x61b0,	// (0x00048b73) list_double_number_pane_vc_t3

0x0002,

0xfa6a,	// (0x0005242d) list_double_number_pane_vc_t_ParamLimits

0xfa6a,	// (0x0005242d) list_double_number_pane_vc_t

0x86a2,	// (0x0004b065) list_double_large_graphic_pane_vc_g1_ParamLimits

0x86a2,	// (0x0004b065) list_double_large_graphic_pane_vc_g1

0x86c4,	// (0x0004b087) list_double_large_graphic_pane_vc_g2_ParamLimits

0x86c4,	// (0x0004b087) list_double_large_graphic_pane_vc_g2

0x86d8,	// (0x0004b09b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x86d8,	// (0x0004b09b) list_double_large_graphic_pane_vc_g3

0x61c8,	// (0x00048b8b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x61c8,	// (0x00048b8b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa71,	// (0x00052434) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x00052434) list_double_large_graphic_pane_vc_g

0x61d4,	// (0x00048b97) list_double_large_graphic_pane_vc_t1_ParamLimits

0x61d4,	// (0x00048b97) list_double_large_graphic_pane_vc_t1

0x61f0,	// (0x00048bb3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x61f0,	// (0x00048bb3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0005243d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0005243d) list_double_large_graphic_pane_vc_t

0x6fba,	// (0x0004997d) list_double_heading_pane_vc_g1_ParamLimits

0x6fba,	// (0x0004997d) list_double_heading_pane_vc_g1

0x6fc6,	// (0x00049989) list_double_heading_pane_vc_g2_ParamLimits

0x6fc6,	// (0x00049989) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0005219d) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0005219d) list_double_heading_pane_vc_g

0x6212,	// (0x00048bd5) list_double_heading_pane_vc_t1_ParamLimits

0x6212,	// (0x00048bd5) list_double_heading_pane_vc_t1

0x6226,	// (0x00048be9) list_double_heading_pane_vc_t2_ParamLimits

0x6226,	// (0x00048be9) list_double_heading_pane_vc_t2

0x0001,

0xfa7f,	// (0x00052442) list_double_heading_pane_vc_t_ParamLimits

0xfa7f,	// (0x00052442) list_double_heading_pane_vc_t

0x623e,	// (0x00048c01) list_double_graphic_pane_vc_g1_ParamLimits

0x623e,	// (0x00048c01) list_double_graphic_pane_vc_g1

0x86e7,	// (0x0004b0aa) list_double_graphic_pane_vc_g2_ParamLimits

0x86e7,	// (0x0004b0aa) list_double_graphic_pane_vc_g2

0x6fba,	// (0x0004997d) list_double_graphic_pane_vc_g3_ParamLimits

0x6fba,	// (0x0004997d) list_double_graphic_pane_vc_g3

0x0003,

0xfa84,	// (0x00052447) list_double_graphic_pane_vc_g_ParamLimits

0xfa84,	// (0x00052447) list_double_graphic_pane_vc_g

0x6251,	// (0x00048c14) list_double_graphic_pane_vc_t1_ParamLimits

0x6251,	// (0x00048c14) list_double_graphic_pane_vc_t1

0x6270,	// (0x00048c33) list_double_graphic_pane_vc_t2_ParamLimits

0x6270,	// (0x00048c33) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x00052450) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x00052450) list_double_graphic_pane_vc_t

0x65c3,	// (0x00048f86) aid_size_cell_fastswap

0x65cb,	// (0x00048f8e) aid_size_cell_touch_ParamLimits

0x65cb,	// (0x00048f8e) aid_size_cell_touch

0x6826,	// (0x000491e9) popup_fast_swap_wide_window_ParamLimits

0x6826,	// (0x000491e9) popup_fast_swap_wide_window

0x692c,	// (0x000492ef) touch_pane_ParamLimits

0x692c,	// (0x000492ef) touch_pane

0x0db1,	// (0x00043774) button_value_adjust_pane_cp2

0x5b36,	// (0x000484f9) button_value_adjust_pane_cp4

0x5b58,	// (0x0004851b) form_field_data_pane_cp2

0x5b79,	// (0x0004853c) form_field_data_wide_pane_cp2

0x10ac,	// (0x00043a6f) bg_scroll_pane_ParamLimits

0x735b,	// (0x00049d1e) scroll_handle_pane_ParamLimits

0x736f,	// (0x00049d32) scroll_sc2_down_pane_ParamLimits

0x736f,	// (0x00049d32) scroll_sc2_down_pane

0x10dd,	// (0x00043aa0) scroll_sc2_up_pane_ParamLimits

0x10dd,	// (0x00043aa0) scroll_sc2_up_pane

0xbdd7,	// (0x0004e79a) grid_wheel_folder_pane_g1_ParamLimits

0xbdd7,	// (0x0004e79a) grid_wheel_folder_pane_g1

0x76ca,	// (0x0004a08d) clock_nsta_pane_cp2_ParamLimits

0x76ca,	// (0x0004a08d) clock_nsta_pane_cp2

0x77dd,	// (0x0004a1a0) listscroll_midp_pane_ParamLimits

0x77e9,	// (0x0004a1ac) midp_canvas_pane

0x975d,	// (0x0004c120) nsta_clock_indic_pane

0x9791,	// (0x0004c154) listscroll_form_pane_vc

0x9799,	// (0x0004c15c) listscroll_set_pane_vc_ParamLimits

0x9799,	// (0x0004c15c) listscroll_set_pane_vc

0x9892,	// (0x0004c255) clock_nsta_pane

0x990d,	// (0x0004c2d0) indicator_nsta_pane

0x9bea,	// (0x0004c5ad) bg_popup_sub_pane_cp2_ParamLimits

0x9bfe,	// (0x0004c5c1) find_pane_cp2_ParamLimits

0x9bfe,	// (0x0004c5c1) find_pane_cp2

0x9c14,	// (0x0004c5d7) grid_toobar_pane_ParamLimits

0x9cf4,	// (0x0004c6b7) list_form_gen_pane_vc_ParamLimits

0x9cf4,	// (0x0004c6b7) list_form_gen_pane_vc

0x9d0a,	// (0x0004c6cd) scroll_pane_cp8_vc_ParamLimits

0x9d0a,	// (0x0004c6cd) scroll_pane_cp8_vc

0x9d86,	// (0x0004c749) data_form_wide_pane_vc_ParamLimits

0x9d86,	// (0x0004c749) data_form_wide_pane_vc

0x9d92,	// (0x0004c755) form_field_data_wide_pane_vc_g1

0x9d9a,	// (0x0004c75d) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d9a,	// (0x0004c75d) form_field_data_wide_pane_vc_t1

0x0dc5,	// (0x00043788) input_focus_pane_cp6_vc_ParamLimits

0x0dc5,	// (0x00043788) input_focus_pane_cp6_vc

0xa0c7,	// (0x0004ca8a) list_midp_pane_ParamLimits

0xa0d3,	// (0x0004ca96) scroll_pane_cp16_ParamLimits

0xa0d3,	// (0x0004ca96) scroll_pane_cp16

0xa135,	// (0x0004caf8) button_value_adjust_pane_ParamLimits

0xa135,	// (0x0004caf8) button_value_adjust_pane

0xb079,	// (0x0004da3c) button_value_adjust_pane_cp6_ParamLimits

0xb079,	// (0x0004da3c) button_value_adjust_pane_cp6

0xb19f,	// (0x0004db62) settings_code_pane_cp_ParamLimits

0xb19f,	// (0x0004db62) settings_code_pane_cp

0x09ad,	// (0x00043370) cell_touch_pane_g1

0x09ad,	// (0x00043370) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x000520c1) cell_touch_pane_g

0xb733,	// (0x0004e0f6) cell_touch_pane_cp_ParamLimits

0xb733,	// (0x0004e0f6) cell_touch_pane_cp

0xb743,	// (0x0004e106) cell_touch_pane_ParamLimits

0xb743,	// (0x0004e106) cell_touch_pane

0x09ad,	// (0x00043370) scroll_sc2_down_pane_g1

0x09ad,	// (0x00043370) scroll_sc2_up_pane_g1

0x09b7,	// (0x0004337a) bg_set_opt_pane_cp4_vc

0xb755,	// (0x0004e118) list_set_graphic_pane_vc_g1_ParamLimits

0xb755,	// (0x0004e118) list_set_graphic_pane_vc_g1

0xb761,	// (0x0004e124) list_set_graphic_pane_vc_g2_ParamLimits

0xb761,	// (0x0004e124) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x000523bd) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x000523bd) list_set_graphic_pane_vc_g

0xb76d,	// (0x0004e130) text_primary_small_cp13_vc_ParamLimits

0xb76d,	// (0x0004e130) text_primary_small_cp13_vc

0xb785,	// (0x0004e148) list_set_graphic_pane_vc_ParamLimits

0xb785,	// (0x0004e148) list_set_graphic_pane_vc

0x09b7,	// (0x0004337a) input_focus_pane_cp2_vc

0x09ad,	// (0x00043370) setting_code_pane_vc_g1

0x0a2a,	// (0x000433ed) setting_code_pane_vc_t1

0xb798,	// (0x0004e15b) set_text_pane_vc_t1_ParamLimits

0xb798,	// (0x0004e15b) set_text_pane_vc_t1

0x09b7,	// (0x0004337a) input_focus_pane_cp1_vc

0xb7b4,	// (0x0004e177) list_set_text_pane_vc

0x09ad,	// (0x00043370) setting_text_pane_vc_g1

0x09b7,	// (0x0004337a) bg_set_opt_pane_cp2_vc

0x0a21,	// (0x000433e4) setting_slider_graphic_pane_vc_g1

0xb7be,	// (0x0004e181) setting_slider_graphic_pane_vc_t1

0xb7ce,	// (0x0004e191) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x000523c2) setting_slider_graphic_pane_vc_t

0xb7de,	// (0x0004e1a1) slider_set_pane_cp_vc

0xb7e6,	// (0x0004e1a9) slider_set_pane_vc_g1

0xb7ef,	// (0x0004e1b2) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x000523c7) slider_set_pane_vc_g

0x0e1d,	// (0x000437e0) set_opt_bg_pane_g1_copy1

0x0e25,	// (0x000437e8) set_opt_bg_pane_g2_copy1

0xb81b,	// (0x0004e1de) set_opt_bg_pane_g3_copy1

0x0e35,	// (0x000437f8) set_opt_bg_pane_g4_copy1

0x0e3d,	// (0x00043800) set_opt_bg_pane_g5_copy1

0x0e45,	// (0x00043808) set_opt_bg_pane_g6_copy1

0xb823,	// (0x0004e1e6) set_opt_bg_pane_g7_copy1

0xb82b,	// (0x0004e1ee) set_opt_bg_pane_g8_copy1

0xb833,	// (0x0004e1f6) set_opt_bg_pane_g9_copy1

0x09b7,	// (0x0004337a) bg_set_opt_pane_cp_vc

0xb83b,	// (0x0004e1fe) setting_slider_pane_vc_t1

0xb84a,	// (0x0004e20d) setting_slider_pane_vc_t2

0xb85a,	// (0x0004e21d) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x000523d6) setting_slider_pane_vc_t

0xb86a,	// (0x0004e22d) slider_set_pane_vc

0x8296,	// (0x0004ac59) volume_set_pane_vc_g1

0x862d,	// (0x0004aff0) volume_set_pane_vc_g2

0x8636,	// (0x0004aff9) volume_set_pane_vc_g3

0x863f,	// (0x0004b002) volume_set_pane_vc_g4

0x8648,	// (0x0004b00b) volume_set_pane_vc_g5

0x8651,	// (0x0004b014) volume_set_pane_vc_g6

0x865a,	// (0x0004b01d) volume_set_pane_vc_g7

0x8663,	// (0x0004b026) volume_set_pane_vc_g8

0x866c,	// (0x0004b02f) volume_set_pane_vc_g9

0x8675,	// (0x0004b038) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x000523dd) volume_set_pane_vc_g

0xb872,	// (0x0004e235) volume_set_pane_vc

0xb87a,	// (0x0004e23d) button_value_adjust_pane_cp1_vc

0xb884,	// (0x0004e247) list_highlight_pane_cp2_vc

0xb88d,	// (0x0004e250) list_set_pane_vc_ParamLimits

0xb88d,	// (0x0004e250) list_set_pane_vc

0xb8eb,	// (0x0004e2ae) main_pane_set_vc_t1_ParamLimits

0xb8eb,	// (0x0004e2ae) main_pane_set_vc_t1

0xb900,	// (0x0004e2c3) main_pane_set_vc_t2_ParamLimits

0xb900,	// (0x0004e2c3) main_pane_set_vc_t2

0xb912,	// (0x0004e2d5) main_pane_set_vc_t3_ParamLimits

0xb912,	// (0x0004e2d5) main_pane_set_vc_t3

0xb924,	// (0x0004e2e7) main_pane_set_vc_t4_ParamLimits

0xb924,	// (0x0004e2e7) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x000523f2) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x000523f2) main_pane_set_vc_t

0xb936,	// (0x0004e2f9) setting_code_pane_vc_ParamLimits

0xb936,	// (0x0004e2f9) setting_code_pane_vc

0xb945,	// (0x0004e308) setting_slider_graphic_pane_vc

0xb945,	// (0x0004e308) setting_slider_pane_vc

0xb945,	// (0x0004e308) setting_text_pane_vc

0xb945,	// (0x0004e308) setting_volume_pane_vc

0xb94d,	// (0x0004e310) scroll_pane_cp121_vc

0x0d9f,	// (0x00043762) set_content_pane_vc

0xb955,	// (0x0004e318) button_value_adjust_pane_g1

0xb95e,	// (0x0004e321) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x00052455) button_value_adjust_pane_g

0xb967,	// (0x0004e32a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb967,	// (0x0004e32a) form_field_slider_wide_pane_vc_t1

0xb97b,	// (0x0004e33e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb97b,	// (0x0004e33e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x0005245a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0005245a) form_field_slider_wide_pane_vc_t

0x0a05,	// (0x000433c8) input_focus_pane_cp10_vc_ParamLimits

0x0a05,	// (0x000433c8) input_focus_pane_cp10_vc

0xb9a9,	// (0x0004e36c) slider_cont_pane_cp1_vc_ParamLimits

0xb9a9,	// (0x0004e36c) slider_cont_pane_cp1_vc

0xb9bb,	// (0x0004e37e) slider_form_pane_g1_cp2

0xb7ef,	// (0x0004e1b2) slider_form_pane_g2_cp2

0xb9e8,	// (0x0004e3ab) form_field_slider_pane_vc_t3

0xb9f6,	// (0x0004e3b9) form_field_slider_pane_vc_t4

0xba04,	// (0x0004e3c7) slider_form_pane_vc_ParamLimits

0xba04,	// (0x0004e3c7) slider_form_pane_vc

0xba11,	// (0x0004e3d4) form_field_slider_pane_vc_t1_ParamLimits

0xba11,	// (0x0004e3d4) form_field_slider_pane_vc_t1

0xb97b,	// (0x0004e33e) form_field_slider_pane_vc_t2_ParamLimits

0xb97b,	// (0x0004e33e) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x0005246c) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x0005246c) form_field_slider_pane_vc_t

0x0a05,	// (0x000433c8) input_focus_pane_cp9_vc_ParamLimits

0x0a05,	// (0x000433c8) input_focus_pane_cp9_vc

0xba2d,	// (0x0004e3f0) slider_cont_pane_vc_ParamLimits

0xba2d,	// (0x0004e3f0) slider_cont_pane_vc

0xba41,	// (0x0004e404) list_form_graphic_pane_cp_vc_ParamLimits

0xba41,	// (0x0004e404) list_form_graphic_pane_cp_vc

0x9d92,	// (0x0004c755) form_field_popup_wide_pane_vc_g1

0xba56,	// (0x0004e419) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba56,	// (0x0004e419) form_field_popup_wide_pane_vc_t1

0x0dc5,	// (0x00043788) input_focus_pane_cp8_vc_ParamLimits

0x0dc5,	// (0x00043788) input_focus_pane_cp8_vc

0xba9b,	// (0x0004e45e) list_form_wide_pane_vc_ParamLimits

0xba9b,	// (0x0004e45e) list_form_wide_pane_vc

0xbaa7,	// (0x0004e46a) list_form_graphic_pane_vc_g1

0xbaaf,	// (0x0004e472) list_form_graphic_pane_vc_t1_ParamLimits

0xbaaf,	// (0x0004e472) list_form_graphic_pane_vc_t1

0x0a13,	// (0x000433d6) list_highlight_pane_cp5_vc_ParamLimits

0x0a13,	// (0x000433d6) list_highlight_pane_cp5_vc

0xbacb,	// (0x0004e48e) list_form_graphic_pane_vc_ParamLimits

0xbacb,	// (0x0004e48e) list_form_graphic_pane_vc

0x9d92,	// (0x0004c755) form_field_popup_pane_vc_g1

0xbae1,	// (0x0004e4a4) form_field_popup_pane_vc_t1_ParamLimits

0xbae1,	// (0x0004e4a4) form_field_popup_pane_vc_t1

0x0dc5,	// (0x00043788) input_focus_pane_cp7_vc_ParamLimits

0x0dc5,	// (0x00043788) input_focus_pane_cp7_vc

0xbaf8,	// (0x0004e4bb) list_form_pane_vc_ParamLimits

0xbaf8,	// (0x0004e4bb) list_form_pane_vc

0xbb04,	// (0x0004e4c7) data_form_pane_vc_t1_ParamLimits

0xbb04,	// (0x0004e4c7) data_form_pane_vc_t1

0x0e1d,	// (0x000437e0) input_focus_pane_vc_g1

0x0e25,	// (0x000437e8) input_focus_pane_vc_g2

0x0e2d,	// (0x000437f0) input_focus_pane_vc_g3

0x0e35,	// (0x000437f8) input_focus_pane_vc_g4

0x0e3d,	// (0x00043800) input_focus_pane_vc_g5

0x0e45,	// (0x00043808) input_focus_pane_vc_g6

0x0e4d,	// (0x00043810) input_focus_pane_vc_g7

0x0e55,	// (0x00043818) input_focus_pane_vc_g8

0x0e5d,	// (0x00043820) input_focus_pane_vc_g9

0x09ad,	// (0x00043370) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0005204a) input_focus_pane_vc_g

0x9d86,	// (0x0004c749) data_form_pane_vc_ParamLimits

0x9d86,	// (0x0004c749) data_form_pane_vc

0x9d92,	// (0x0004c755) form_field_data_pane_vc_g1

0xbb1f,	// (0x0004e4e2) form_field_data_pane_vc_t1_ParamLimits

0xbb1f,	// (0x0004e4e2) form_field_data_pane_vc_t1

0x0dc5,	// (0x00043788) input_focus_pane_vc_ParamLimits

0x0dc5,	// (0x00043788) input_focus_pane_vc

0xbb39,	// (0x0004e4fc) button_value_adjust_pane_cp3_vc

0xbb41,	// (0x0004e504) button_value_adjust_pane_cp5_vc

0xbb49,	// (0x0004e50c) form_field_data_pane_vc_ParamLimits

0xbb49,	// (0x0004e50c) form_field_data_pane_vc

0xbb60,	// (0x0004e523) form_field_data_pane_vc_cp2

0xbb68,	// (0x0004e52b) form_field_data_wide_pane_vc_ParamLimits

0xbb68,	// (0x0004e52b) form_field_data_wide_pane_vc

0xbb7e,	// (0x0004e541) form_field_data_wide_pane_vc_cp2

0xbb86,	// (0x0004e549) form_field_popup_pane_vc_ParamLimits

0xbb86,	// (0x0004e549) form_field_popup_pane_vc

0xbb9d,	// (0x0004e560) form_field_popup_wide_pane_vc_ParamLimits

0xbb9d,	// (0x0004e560) form_field_popup_wide_pane_vc

0xbbb3,	// (0x0004e576) form_field_slider_pane_vc_ParamLimits

0xbbb3,	// (0x0004e576) form_field_slider_pane_vc

0xbbc6,	// (0x0004e589) form_field_slider_wide_pane_vc_ParamLimits

0xbbc6,	// (0x0004e589) form_field_slider_wide_pane_vc

0xbbd9,	// (0x0004e59c) grid_touch_1_pane_ParamLimits

0xbbd9,	// (0x0004e59c) grid_touch_1_pane

0xbbe5,	// (0x0004e5a8) grid_touch_2_pane_ParamLimits

0xbbe5,	// (0x0004e5a8) grid_touch_2_pane

0x7a61,	// (0x0004a424) touch_pane_g1_ParamLimits

0x7a61,	// (0x0004a424) touch_pane_g1

0xbbfd,	// (0x0004e5c0) cell_app_pane_cp_wide_ParamLimits

0xbbfd,	// (0x0004e5c0) cell_app_pane_cp_wide

0xbc0e,	// (0x0004e5d1) grid_popup_fast_wide_pane_ParamLimits

0xbc0e,	// (0x0004e5d1) grid_popup_fast_wide_pane

0xbc22,	// (0x0004e5e5) scroll_pane_cp19_ParamLimits

0xbc22,	// (0x0004e5e5) scroll_pane_cp19

0x09b7,	// (0x0004337a) bg_popup_window_pane_cp20

0xbc36,	// (0x0004e5f9) listscroll_popup_fast_wide_pane

0x0a13,	// (0x000433d6) grid_indicator_nsta_pane

0xbc3e,	// (0x0004e601) clock_nsta_pane_g1

0xbc47,	// (0x0004e60a) clock_nsta_pane_t1

0xbc63,	// (0x0004e626) cell_indicator_nsta_pane_ParamLimits

0xbc63,	// (0x0004e626) cell_indicator_nsta_pane

0xbc94,	// (0x0004e657) cell_indicator_nsta_pane_g1

0xbca2,	// (0x0004e665) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x0005247d) cell_indicator_nsta_pane_g

0xbcaf,	// (0x0004e672) clock_nsta_pane_cp

0xbcb8,	// (0x0004e67b) indicator_nsta_pane_cp

0xbcc0,	// (0x0004e683) nsta_clock_indic_pane_g1

0x0a4f,	// (0x00043412) grid_indicator_pane

0x740d,	// (0x00049dd0) scroll_pane_cp29

0x7619,	// (0x00049fdc) indicator_nsta_pane_cp2_ParamLimits

0x7619,	// (0x00049fdc) indicator_nsta_pane_cp2

0x0a13,	// (0x000433d6) main_apps_wheel_pane

0x9faa,	// (0x0004c96d) form_midp_field_text_pane_ParamLimits

0xa0f3,	// (0x0004cab6) scroll_bar_cp050_ParamLimits

0xbd10,	// (0x0004e6d3) cell_indicator_pane_ParamLimits

0xbd10,	// (0x0004e6d3) cell_indicator_pane

0xbd29,	// (0x0004e6ec) cell_indicator_pane_g1

0xbd33,	// (0x0004e6f6) grid_wheel_folder_pane_ParamLimits

0xbd33,	// (0x0004e6f6) grid_wheel_folder_pane

0xbd49,	// (0x0004e70c) list_wheel_apps_pane_ParamLimits

0xbd49,	// (0x0004e70c) list_wheel_apps_pane

0xbd5a,	// (0x0004e71d) main_apps_wheel_pane_g1_ParamLimits

0xbd5a,	// (0x0004e71d) main_apps_wheel_pane_g1

0xbd6e,	// (0x0004e731) main_apps_wheel_pane_g2_ParamLimits

0xbd6e,	// (0x0004e731) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x00052499) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x00052499) main_apps_wheel_pane_g

0xbd86,	// (0x0004e749) main_apps_wheel_pane_t1_ParamLimits

0xbd86,	// (0x0004e749) main_apps_wheel_pane_t1

0xbda9,	// (0x0004e76c) list_wheel_apps_pane_g1

0xbdb1,	// (0x0004e774) list_wheel_apps_pane_g2

0xbdb9,	// (0x0004e77c) list_wheel_apps_pane_g3

0xbdc3,	// (0x0004e786) list_wheel_apps_pane_g4

0xbdcd,	// (0x0004e790) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x0005249e) list_wheel_apps_pane_g

0x4a51,	// (0x00047414) navi_icon_text_pane

0x97c1,	// (0x0004c184) aid_fill_nsta

0xbdf0,	// (0x0004e7b3) navi_icon_text_pane_g1

0xbdfc,	// (0x0004e7bf) navi_icon_text_pane_t1

0x13eb,	// (0x00043dae) list_set_graphic_pane_t1_ParamLimits

0x13eb,	// (0x00043dae) list_set_graphic_pane_t1

0xa836,	// (0x0004d1f9) popup_midp_note_alarm_window_t6_ParamLimits

0xa836,	// (0x0004d1f9) popup_midp_note_alarm_window_t6

0xa848,	// (0x0004d20b) popup_midp_note_alarm_window_t7_ParamLimits

0xa848,	// (0x0004d20b) popup_midp_note_alarm_window_t7

0xa85a,	// (0x0004d21d) popup_midp_note_alarm_window_t8_ParamLimits

0xa85a,	// (0x0004d21d) popup_midp_note_alarm_window_t8

0xa86c,	// (0x0004d22f) popup_midp_note_alarm_window_t9_ParamLimits

0xa86c,	// (0x0004d22f) popup_midp_note_alarm_window_t9

0xa87e,	// (0x0004d241) popup_midp_note_alarm_window_t10_ParamLimits

0xa87e,	// (0x0004d241) popup_midp_note_alarm_window_t10

0xa890,	// (0x0004d253) popup_midp_note_alarm_window_t11_ParamLimits

0xa890,	// (0x0004d253) popup_midp_note_alarm_window_t11

0xa8a2,	// (0x0004d265) scroll_pane_cp17_ParamLimits

0xa8a2,	// (0x0004d265) scroll_pane_cp17

0x8296,	// (0x0004ac59) volume_small_pane_cp_g1

0x8704,	// (0x0004b0c7) volume_small_pane_cp_g2

0x870d,	// (0x0004b0d0) volume_small_pane_cp_g3

0x8716,	// (0x0004b0d9) volume_small_pane_cp_g4

0x871f,	// (0x0004b0e2) volume_small_pane_cp_g5

0x8648,	// (0x0004b00b) volume_small_pane_cp_g6

0x8728,	// (0x0004b0eb) volume_small_pane_cp_g7

0x8731,	// (0x0004b0f4) volume_small_pane_cp_g8

0x873a,	// (0x0004b0fd) volume_small_pane_cp_g9

0x8743,	// (0x0004b106) volume_small_pane_cp_g10

0x4bba,	// (0x0004757d) midp_ticker_pane_g1_ParamLimits

0x4bc6,	// (0x00047589) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00052116) midp_ticker_pane_g_ParamLimits

0x4bd2,	// (0x00047595) midp_ticker_pane_t1_ParamLimits

0x97d7,	// (0x0004c19a) aid_fill_nsta_2

0xa0df,	// (0x0004caa2) list_form2_midp_pane

0xb1ea,	// (0x0004dbad) midp_editing_number_pane_ParamLimits

0xb1f9,	// (0x0004dbbc) midp_ticker_pane_ParamLimits

0xbe0e,	// (0x0004e7d1) form2_midp_field_pane

0xbe32,	// (0x0004e7f5) scroll_pane_cp51

0xbe52,	// (0x0004e815) form2_midp_button_pane_ParamLimits

0xbe52,	// (0x0004e815) form2_midp_button_pane

0xbe64,	// (0x0004e827) form2_midp_content_pane_ParamLimits

0xbe64,	// (0x0004e827) form2_midp_content_pane

0xbe7e,	// (0x0004e841) form2_midp_field_choice_group_pane

0xbe86,	// (0x0004e849) form2_midp_field_pane_g1

0xbe8e,	// (0x0004e851) form2_midp_field_pane_g2

0xbe96,	// (0x0004e859) form2_midp_field_pane_g3

0xbe9e,	// (0x0004e861) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x000524c3) form2_midp_field_pane_g

0xbea6,	// (0x0004e869) form2_midp_gauge_slider_pane

0xbeae,	// (0x0004e871) form2_midp_gauge_wait_pane

0xbeb6,	// (0x0004e879) form2_midp_image_pane_ParamLimits

0xbeb6,	// (0x0004e879) form2_midp_image_pane

0xbed1,	// (0x0004e894) form2_midp_label_pane_ParamLimits

0xbed1,	// (0x0004e894) form2_midp_label_pane

0xbeea,	// (0x0004e8ad) form2_midp_label_pane_cp_ParamLimits

0xbeea,	// (0x0004e8ad) form2_midp_label_pane_cp

0xbf0b,	// (0x0004e8ce) form2_midp_string_pane_ParamLimits

0xbf0b,	// (0x0004e8ce) form2_midp_string_pane

0x629a,	// (0x00048c5d) form2_midp_text_pane_ParamLimits

0x629a,	// (0x00048c5d) form2_midp_text_pane

0xbf1d,	// (0x0004e8e0) form2_midp_time_pane

0xbf2d,	// (0x0004e8f0) input_focus_pane_cp51_ParamLimits

0xbf2d,	// (0x0004e8f0) input_focus_pane_cp51

0xbf45,	// (0x0004e908) form2_midp_label_pane_t1_ParamLimits

0xbf45,	// (0x0004e908) form2_midp_label_pane_t1

0x62b7,	// (0x00048c7a) form2_mdip_text_pane_t1_ParamLimits

0x62b7,	// (0x00048c7a) form2_mdip_text_pane_t1

0x62d5,	// (0x00048c98) form2_midp_time_pane_t1

0xbf8e,	// (0x0004e951) form2_midp_gauge_slider_pane_t1

0xbfa0,	// (0x0004e963) form2_midp_gauge_slider_pane_t2

0xbfb2,	// (0x0004e975) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x000524cc) form2_midp_gauge_slider_pane_t

0xbfc4,	// (0x0004e987) form2_midp_slider_pane

0xbfd0,	// (0x0004e993) form2_midp_gauge_wait_pane_t1

0xbfde,	// (0x0004e9a1) form2_midp_wait_pane_ParamLimits

0xbfde,	// (0x0004e9a1) form2_midp_wait_pane

0xc009,	// (0x0004e9cc) list_single_2graphic_pane_cp4_ParamLimits

0xc009,	// (0x0004e9cc) list_single_2graphic_pane_cp4

0x9dfb,	// (0x0004c7be) list_single_midp_graphic_pane_cp_ParamLimits

0x9dfb,	// (0x0004c7be) list_single_midp_graphic_pane_cp

0x09b7,	// (0x0004337a) list_highlight_pane_cp20

0xc031,	// (0x0004e9f4) list_single_2graphic_pane_g1_cp4

0xb639,	// (0x0004dffc) list_single_2graphic_pane_g2_cp4

0xc039,	// (0x0004e9fc) list_single_2graphic_pane_t1_cp4

0x0a13,	// (0x000433d6) list_highlight_pane_cp21

0xc048,	// (0x0004ea0b) list_single_midp_graphic_pane_g4_cp

0xc057,	// (0x0004ea1a) list_single_midp_graphic_pane_t1_cp

0xc06c,	// (0x0004ea2f) form2_mdip_string_pane_t1_ParamLimits

0xc06c,	// (0x0004ea2f) form2_mdip_string_pane_t1

0x09b7,	// (0x0004337a) bg_wml_button_pane_cp2

0x09ad,	// (0x00043370) form2_midp_image_pane_g1

0x7019,	// (0x000499dc) list_double_large_graphic_pane_g5_ParamLimits

0x7019,	// (0x000499dc) list_double_large_graphic_pane_g5

0x77dd,	// (0x0004a1a0) midp_form_pane_ParamLimits

0x0a13,	// (0x000433d6) main_apps_wheel_pane_ParamLimits

0x7f3e,	// (0x0004a901) popup_preview_window_ParamLimits

0x7f3e,	// (0x0004a901) popup_preview_window

0x80f9,	// (0x0004aabc) popup_touch_info_window_ParamLimits

0x80f9,	// (0x0004aabc) popup_touch_info_window

0x8117,	// (0x0004aada) popup_touch_menu_window_ParamLimits

0x8117,	// (0x0004aada) popup_touch_menu_window

0x09a3,	// (0x00043366) bg_popup_sub_pane_cp6

0xc173,	// (0x0004eb36) list_touch_menu_pane

0xc17b,	// (0x0004eb3e) list_single_touch_menu_pane_ParamLimits

0xc17b,	// (0x0004eb3e) list_single_touch_menu_pane

0xc191,	// (0x0004eb54) list_single_touch_menu_pane_t1

0x0a13,	// (0x000433d6) bg_popup_sub_pane_cp7_ParamLimits

0x0a13,	// (0x000433d6) bg_popup_sub_pane_cp7

0xc19f,	// (0x0004eb62) heading_sub_pane

0xc1a7,	// (0x0004eb6a) list_touch_info_pane_ParamLimits

0xc1a7,	// (0x0004eb6a) list_touch_info_pane

0xc1b6,	// (0x0004eb79) list_single_touch_info_pane_ParamLimits

0xc1b6,	// (0x0004eb79) list_single_touch_info_pane

0xc1c8,	// (0x0004eb8b) list_single_touch_info_pane_t1

0xc1d6,	// (0x0004eb99) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x000524da) list_single_touch_info_pane_t

0x4ba3,	// (0x00047566) bg_popup_heading_pane_cp

0xc1f0,	// (0x0004ebb3) heading_sub_pane_t1

0x9d20,	// (0x0004c6e3) bg_popup_preview_window_pane_cp_ParamLimits

0x9d20,	// (0x0004c6e3) bg_popup_preview_window_pane_cp

0xc19f,	// (0x0004eb62) heading_preview_pane

0xc1a7,	// (0x0004eb6a) list_preview_pane_ParamLimits

0xc1a7,	// (0x0004eb6a) list_preview_pane

0xc1fe,	// (0x0004ebc1) popup_preview_window_g1

0xc1b6,	// (0x0004eb79) list_single_preview_pane_ParamLimits

0xc1b6,	// (0x0004eb79) list_single_preview_pane

0xc206,	// (0x0004ebc9) list_single_preview_pane_g1

0xc20e,	// (0x0004ebd1) list_single_preview_pane_t1

0xc1c8,	// (0x0004eb8b) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x000524df) list_single_preview_pane_t

0xc21c,	// (0x0004ebdf) bg_popup_heading_pane_cp2_ParamLimits

0xc21c,	// (0x0004ebdf) bg_popup_heading_pane_cp2

0xc232,	// (0x0004ebf5) heading_preview_pane_g1

0xc23a,	// (0x0004ebfd) heading_preview_pane_t1_ParamLimits

0xc23a,	// (0x0004ebfd) heading_preview_pane_t1

0x0a66,	// (0x00043429) soft_indicator_pane_t1_ParamLimits

0x0d41,	// (0x00043704) scroll_pane_ParamLimits

0x10d4,	// (0x00043a97) scroll_sc2_left_pane

0x10cb,	// (0x00043a8e) scroll_sc2_right_pane

0x10f3,	// (0x00043ab6) scroll_bg_pane_g1_ParamLimits

0x1108,	// (0x00043acb) scroll_bg_pane_g2_ParamLimits

0x1120,	// (0x00043ae3) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x000520a1) scroll_bg_pane_g_ParamLimits

0x10f3,	// (0x00043ab6) scroll_handle_pane_g1_ParamLimits

0x1135,	// (0x00043af8) scroll_handle_pane_g2_ParamLimits

0x1120,	// (0x00043ae3) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x000520a8) scroll_handle_pane_g_ParamLimits

0x7bc1,	// (0x0004a584) popup_choice_list_window_ParamLimits

0x7bc1,	// (0x0004a584) popup_choice_list_window

0x9bf6,	// (0x0004c5b9) choice_list_pane

0x9c78,	// (0x0004c63b) cell_toolbar_pane_t1

0x9ca0,	// (0x0004c663) toolbar_button_pane_ParamLimits

0xad5c,	// (0x0004d71f) ai_gene_pane_1_t2_ParamLimits

0xad5c,	// (0x0004d71f) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x000522d0) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x000522d0) ai_gene_pane_1_t

0xc257,	// (0x0004ec1a) scroll_sc2_left_pane_g1

0xc257,	// (0x0004ec1a) scroll_sc2_right_pane_g1

0x9785,	// (0x0004c148) bg_popup_sub_pane_cp10

0xc261,	// (0x0004ec24) list_choice_list_pane

0xc27a,	// (0x0004ec3d) list_single_choice_list_pane_ParamLimits

0xc27a,	// (0x0004ec3d) list_single_choice_list_pane

0xc28d,	// (0x0004ec50) list_single_choice_list_pane_g1

0x70b4,	// (0x00049a77) list_single_choice_list_pane_t1_ParamLimits

0x70b4,	// (0x00049a77) list_single_choice_list_pane_t1

0xc295,	// (0x0004ec58) choice_list_pane_g1

0xc29d,	// (0x0004ec60) choice_list_pane_t1

0x09a3,	// (0x00043366) input_focus_pane_cp11

0x1040,	// (0x00043a03) title_pane_stacon_g2_ParamLimits

0x1040,	// (0x00043a03) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00052087) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00052087) title_pane_stacon_g

0x4ba3,	// (0x00047566) cursor_press_pane

0x7c69,	// (0x0004a62c) popup_fep_hwr_window_ParamLimits

0x7c69,	// (0x0004a62c) popup_fep_hwr_window

0x7ce1,	// (0x0004a6a4) popup_fep_vkb_window_ParamLimits

0x7ce1,	// (0x0004a6a4) popup_fep_vkb_window

0xc2ab,	// (0x0004ec6e) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x00052508) fep_vkb_side_pane_g_ParamLimits

0x8785,	// (0x0004b148) fep_hwr_candidate_pane_ParamLimits

0x8785,	// (0x0004b148) fep_hwr_candidate_pane

0x87af,	// (0x0004b172) fep_hwr_side_pane_ParamLimits

0x87af,	// (0x0004b172) fep_hwr_side_pane

0x87cf,	// (0x0004b192) fep_hwr_top_pane_ParamLimits

0x87cf,	// (0x0004b192) fep_hwr_top_pane

0x87e7,	// (0x0004b1aa) fep_hwr_write_pane_ParamLimits

0x87e7,	// (0x0004b1aa) fep_hwr_write_pane

0xfb45,	// (0x00052508) fep_vkb_side_pane_g

0xc2b3,	// (0x0004ec76) fep_hwr_top_pane_g1

0xc2c5,	// (0x0004ec88) fep_hwr_top_pane_g2

0x8813,	// (0x0004b1d6) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x000524e4) fep_hwr_top_pane_g

0x8828,	// (0x0004b1eb) fep_hwr_top_text_pane

0x11f8,	// (0x00043bbb) fep_hwr_top_text_pane_g1

0xc2fb,	// (0x0004ecbe) fep_hwr_top_text_pane_t1

0x891e,	// (0x0004b2e1) fep_hwr_candidate_pane_g1

0xc540,	// (0x0004ef03) fep_vkb_keypad_pane_g3_ParamLimits

0xc540,	// (0x0004ef03) fep_vkb_keypad_pane_g3

0xc568,	// (0x0004ef2b) fep_vkb_keypad_pane_g4_ParamLimits

0xc568,	// (0x0004ef2b) fep_vkb_keypad_pane_g4

0xc5d7,	// (0x0004ef9a) fep_vkb_bottom_pane_g2_ParamLimits

0xc5d7,	// (0x0004ef9a) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x0005250f) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x0005250f) fep_vkb_bottom_pane_g

0xc257,	// (0x0004ec1a) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x00052519) cell_vkb_side_pane_g

0xc662,	// (0x0004f025) cell_vkb_side_pane_t1

0xc670,	// (0x0004f033) cell_vkb_side_pane_t1_copy1

0xc257,	// (0x0004ec1a) bg_fep_vkb_candidate_pane_g2

0xc79c,	// (0x0004f15f) cell_vkb_candidate_pane_ParamLimits

0xc309,	// (0x0004eccc) aid_size_cell_vkb_ParamLimits

0xc309,	// (0x0004eccc) aid_size_cell_vkb

0xc79c,	// (0x0004f15f) cell_vkb_candidate_pane

0x8938,	// (0x0004b2fb) bg_popup_fep_shadow_pane_g1

0xc397,	// (0x0004ed5a) fep_vkb_bottom_pane_ParamLimits

0xc397,	// (0x0004ed5a) fep_vkb_bottom_pane

0xc3cd,	// (0x0004ed90) fep_vkb_candidate_pane_ParamLimits

0xc3cd,	// (0x0004ed90) fep_vkb_candidate_pane

0xc3e9,	// (0x0004edac) fep_vkb_keypad_pane_ParamLimits

0xc3e9,	// (0x0004edac) fep_vkb_keypad_pane

0xc428,	// (0x0004edeb) fep_vkb_side_pane_ParamLimits

0xc428,	// (0x0004edeb) fep_vkb_side_pane

0xc464,	// (0x0004ee27) fep_vkb_top_pane_ParamLimits

0xc464,	// (0x0004ee27) fep_vkb_top_pane

0xc499,	// (0x0004ee5c) fep_vkb_top_pane_g1_ParamLimits

0xc499,	// (0x0004ee5c) fep_vkb_top_pane_g1

0xc4a8,	// (0x0004ee6b) fep_vkb_top_pane_g2_ParamLimits

0xc4a8,	// (0x0004ee6b) fep_vkb_top_pane_g2

0xc4b7,	// (0x0004ee7a) fep_vkb_top_pane_g3_ParamLimits

0xc4b7,	// (0x0004ee7a) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x000524ff) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x000524ff) fep_vkb_top_pane_g

0xc4d5,	// (0x0004ee98) fep_vkb_top_text_pane_ParamLimits

0xc4d5,	// (0x0004ee98) fep_vkb_top_text_pane

0xc4e6,	// (0x0004eea9) fep_vkb_side_pane_g1_ParamLimits

0xc4e6,	// (0x0004eea9) fep_vkb_side_pane_g1

0xc52f,	// (0x0004eef2) grid_vkb_side_pane_ParamLimits

0xc52f,	// (0x0004eef2) grid_vkb_side_pane

0x8940,	// (0x0004b303) bg_popup_fep_shadow_pane_g2

0x8949,	// (0x0004b30c) bg_popup_fep_shadow_pane_g3

0x8951,	// (0x0004b314) bg_popup_fep_shadow_pane_g4

0x895a,	// (0x0004b31d) bg_popup_fep_shadow_pane_g5

0x8964,	// (0x0004b327) bg_popup_fep_shadow_pane_g6

0x896c,	// (0x0004b32f) bg_popup_fep_shadow_pane_g7

0x0e3d,	// (0x00043800) bg_popup_fep_shadow_pane_g8

0xc586,	// (0x0004ef49) grid_vkb_keypad_number_pane_ParamLimits

0xc586,	// (0x0004ef49) grid_vkb_keypad_number_pane

0xc596,	// (0x0004ef59) grid_vkb_keypad_pane_ParamLimits

0xc596,	// (0x0004ef59) grid_vkb_keypad_pane

0xc5bc,	// (0x0004ef7f) fep_vkb_bottom_pane_g1_ParamLimits

0xc5bc,	// (0x0004ef7f) fep_vkb_bottom_pane_g1

0xc5e5,	// (0x0004efa8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc5e5,	// (0x0004efa8) grid_vkb_keypad_bottom_left_pane

0xc5fa,	// (0x0004efbd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc5fa,	// (0x0004efbd) grid_vkb_keypad_bottom_right_pane

0xc60f,	// (0x0004efd2) fep_vkb_top_text_pane_g1

0xc62a,	// (0x0004efed) fep_vkb_top_text_pane_t1

0xc63f,	// (0x0004f002) cell_vkb_side_pane_ParamLimits

0xc63f,	// (0x0004f002) cell_vkb_side_pane

0xc257,	// (0x0004ec1a) cell_vkb_side_pane_g1

0xc67e,	// (0x0004f041) cell_vkb_keypad_pane_ParamLimits

0xc67e,	// (0x0004f041) cell_vkb_keypad_pane

0xc6f3,	// (0x0004f0b6) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x0005252c) bg_popup_fep_shadow_pane_g

0xc257,	// (0x0004ec1a) cell_hwr_side_pane_g1

0xc257,	// (0x0004ec1a) cell_hwr_side_pane_g2

0xc6fd,	// (0x0004f0c0) cell_vkb_keypad_pane_t1

0xc70b,	// (0x0004f0ce) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc70b,	// (0x0004f0ce) cell_vkb_keypad_bottom_left_pane

0xc728,	// (0x0004f0eb) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc728,	// (0x0004f0eb) cell_vkb_keypad_bottom_right_pane

0xc257,	// (0x0004ec1a) cell_vkb_keypad_bottom_left_pane_g1

0xc257,	// (0x0004ec1a) cell_vkb_keypad_bottom_right_pane_g1

0xc761,	// (0x0004f124) cell_vkb_keypad_number_pane_ParamLimits

0xc761,	// (0x0004f124) cell_vkb_keypad_number_pane

0xc780,	// (0x0004f143) cell_vkb_keypad_number_pane_g1

0xc78a,	// (0x0004f14d) cell_vkb_keypad_number_pane_g2

0xc793,	// (0x0004f156) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x0005251e) cell_vkb_keypad_number_pane_g

0xc6fd,	// (0x0004f0c0) cell_vkb_keypad_number_pane_t1

0xc7b7,	// (0x0004f17a) fep_vkb_candidate_pane_g1

0x0001,

0xfb56,	// (0x00052519) cell_hwr_side_pane_g

0xc7d0,	// (0x0004f193) cell_hwr_side_pane_t1

0x897e,	// (0x0004b341) cell_hwr_side_pane_t1_copy1

0xc4c7,	// (0x0004ee8a) cell_hwr_candidate_pane_g1

0x898c,	// (0x0004b34f) cell_hwr_candidate_pane_t1

0xc257,	// (0x0004ec1a) cell_vkb_candidate_pane_g2

0xc856,	// (0x0004f219) cell_vkb_candidate_pane_t1

0x874c,	// (0x0004b10f) bg_popup_fep_shadow_pane_ParamLimits

0x874c,	// (0x0004b10f) bg_popup_fep_shadow_pane

0x2ad6,	// (0x00045499) bg_fep_hwr_top_pane_g4

0xc2d7,	// (0x0004ec9a) bg_hwr_side_pane_g1_ParamLimits

0xc2d7,	// (0x0004ec9a) bg_hwr_side_pane_g1

0x8864,	// (0x0004b227) cell_hwr_side_pane_ParamLimits

0x8864,	// (0x0004b227) cell_hwr_side_pane

0x889f,	// (0x0004b262) fep_hwr_write_pane_g1_ParamLimits

0x889f,	// (0x0004b262) fep_hwr_write_pane_g1

0x88ac,	// (0x0004b26f) fep_hwr_write_pane_g2_ParamLimits

0x88ac,	// (0x0004b26f) fep_hwr_write_pane_g2

0x88b9,	// (0x0004b27c) fep_hwr_write_pane_g3_ParamLimits

0x88b9,	// (0x0004b27c) fep_hwr_write_pane_g3

0x88c7,	// (0x0004b28a) fep_hwr_write_pane_g4_ParamLimits

0x88c7,	// (0x0004b28a) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x000524eb) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x000524eb) fep_hwr_write_pane_g

0x2ad6,	// (0x00045499) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2ad6,	// (0x00045499) bg_fep_hwr_candidate_pane_g2

0x88dc,	// (0x0004b29f) cell_hwr_candidate_pane_ParamLimits

0x88dc,	// (0x0004b29f) cell_hwr_candidate_pane

0x891e,	// (0x0004b2e1) fep_hwr_candidate_pane_g1_ParamLimits

0xc337,	// (0x0004ecfa) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc337,	// (0x0004ecfa) bg_popup_fep_shadow_pane_cp2

0xc4c7,	// (0x0004ee8a) fep_vkb_top_pane_g4_ParamLimits

0xc4c7,	// (0x0004ee8a) fep_vkb_top_pane_g4

0xc50d,	// (0x0004eed0) fep_vkb_side_pane_g2_ParamLimits

0xc50d,	// (0x0004eed0) fep_vkb_side_pane_g2

0x5a63,	// (0x00048426) list_setting_pane_t4_ParamLimits

0x5a63,	// (0x00048426) list_setting_pane_t4

0x5afd,	// (0x000484c0) list_setting_number_pane_t5_ParamLimits

0x5afd,	// (0x000484c0) list_setting_number_pane_t5

0x743c,	// (0x00049dff) list_double_heading_pane_cp2_ParamLimits

0x743c,	// (0x00049dff) list_double_heading_pane_cp2

0xc1e4,	// (0x0004eba7) list_double_heading_pane_g1_cp2_ParamLimits

0xc1e4,	// (0x0004eba7) list_double_heading_pane_g1_cp2

0xc864,	// (0x0004f227) list_double_heading_pane_g2_cp2_ParamLimits

0xc864,	// (0x0004f227) list_double_heading_pane_g2_cp2

0xc878,	// (0x0004f23b) list_double_heading_pane_t1_cp2_ParamLimits

0xc878,	// (0x0004f23b) list_double_heading_pane_t1_cp2

0xc88e,	// (0x0004f251) list_double_heading_pane_t2_cp2_ParamLimits

0xc88e,	// (0x0004f251) list_double_heading_pane_t2_cp2

0x099b,	// (0x0004335e) aid_value_unit2

0x6872,	// (0x00049235) popup_preview_fixed_window

0x0b3d,	// (0x00043500) bg_popup_preview_window_pane_cp02

0xc8a0,	// (0x0004f263) list_preview_fixed_pane

0xc8e6,	// (0x0004f2a9) list_empty_pane_fp_ParamLimits

0xc8e6,	// (0x0004f2a9) list_empty_pane_fp

0xc8e6,	// (0x0004f2a9) list_single_cale_day_pane_fp_ParamLimits

0xc8e6,	// (0x0004f2a9) list_single_cale_day_pane_fp

0xc8e6,	// (0x0004f2a9) list_single_graphic_heading_pane_fp_ParamLimits

0xc8e6,	// (0x0004f2a9) list_single_graphic_heading_pane_fp

0xc8e6,	// (0x0004f2a9) list_single_graphic_pane_fp_ParamLimits

0xc8e6,	// (0x0004f2a9) list_single_graphic_pane_fp

0xc8e6,	// (0x0004f2a9) list_single_heading_pane_fp_ParamLimits

0xc8e6,	// (0x0004f2a9) list_single_heading_pane_fp

0xc8e6,	// (0x0004f2a9) list_single_pane_fp_ParamLimits

0xc8e6,	// (0x0004f2a9) list_single_pane_fp

0xc8fc,	// (0x0004f2bf) list_single_pane_fp_g1_ParamLimits

0xc8fc,	// (0x0004f2bf) list_single_pane_fp_g1

0xc908,	// (0x0004f2cb) list_single_pane_fp_g2_ParamLimits

0xc908,	// (0x0004f2cb) list_single_pane_fp_g2

0xc914,	// (0x0004f2d7) list_single_pane_fp_g3_ParamLimits

0xc914,	// (0x0004f2d7) list_single_pane_fp_g3

0xc928,	// (0x0004f2eb) list_single_pane_fp_g4_ParamLimits

0xc928,	// (0x0004f2eb) list_single_pane_fp_g4

0x0003,

0xfb8a,	// (0x0005254d) list_single_pane_fp_g_ParamLimits

0xfb8a,	// (0x0005254d) list_single_pane_fp_g

0x62e8,	// (0x00048cab) list_single_pane_fp_t1_ParamLimits

0x62e8,	// (0x00048cab) list_single_pane_fp_t1

0x62ff,	// (0x00048cc2) list_single_graphic_pane_fp_g1_ParamLimits

0x62ff,	// (0x00048cc2) list_single_graphic_pane_fp_g1

0xc8fc,	// (0x0004f2bf) list_single_graphic_pane_fp_g2_ParamLimits

0xc8fc,	// (0x0004f2bf) list_single_graphic_pane_fp_g2

0xc908,	// (0x0004f2cb) list_single_graphic_pane_fp_g3_ParamLimits

0xc908,	// (0x0004f2cb) list_single_graphic_pane_fp_g3

0xc914,	// (0x0004f2d7) list_single_graphic_pane_fp_g4_ParamLimits

0xc914,	// (0x0004f2d7) list_single_graphic_pane_fp_g4

0xc928,	// (0x0004f2eb) list_single_graphic_pane_fp_g5_ParamLimits

0xc928,	// (0x0004f2eb) list_single_graphic_pane_fp_g5

0x0004,

0xfb93,	// (0x00052556) list_single_graphic_pane_fp_g_ParamLimits

0xfb93,	// (0x00052556) list_single_graphic_pane_fp_g

0x630b,	// (0x00048cce) list_single_graphic_pane_fp_t1_ParamLimits

0x630b,	// (0x00048cce) list_single_graphic_pane_fp_t1

0x62ff,	// (0x00048cc2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x62ff,	// (0x00048cc2) list_single_graphic_heading_pane_fp_g1

0xc8fc,	// (0x0004f2bf) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8fc,	// (0x0004f2bf) list_single_graphic_heading_pane_fp_g2

0xc908,	// (0x0004f2cb) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc908,	// (0x0004f2cb) list_single_graphic_heading_pane_fp_g3

0xc914,	// (0x0004f2d7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc914,	// (0x0004f2d7) list_single_graphic_heading_pane_fp_g4

0xc928,	// (0x0004f2eb) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc928,	// (0x0004f2eb) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb93,	// (0x00052556) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb93,	// (0x00052556) list_single_graphic_heading_pane_fp_g

0x6321,	// (0x00048ce4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6321,	// (0x00048ce4) list_single_graphic_heading_pane_fp_t1

0x6337,	// (0x00048cfa) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6337,	// (0x00048cfa) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9e,	// (0x00052561) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9e,	// (0x00052561) list_single_graphic_heading_pane_fp_t

0x6349,	// (0x00048d0c) list_single_cale_day_pane_fp_g1_ParamLimits

0x6349,	// (0x00048d0c) list_single_cale_day_pane_fp_g1

0xc934,	// (0x0004f2f7) list_single_cale_day_pane_fp_g2_ParamLimits

0xc934,	// (0x0004f2f7) list_single_cale_day_pane_fp_g2

0x89aa,	// (0x0004b36d) list_single_cale_day_pane_fp_g3_ParamLimits

0x89aa,	// (0x0004b36d) list_single_cale_day_pane_fp_g3

0x89d2,	// (0x0004b395) list_single_cale_day_pane_fp_g4_ParamLimits

0x89d2,	// (0x0004b395) list_single_cale_day_pane_fp_g4

0x89f6,	// (0x0004b3b9) list_single_cale_day_pane_fp_g5_ParamLimits

0x89f6,	// (0x0004b3b9) list_single_cale_day_pane_fp_g5

0x0004,

0xfba3,	// (0x00052566) list_single_cale_day_pane_fp_g_ParamLimits

0xfba3,	// (0x00052566) list_single_cale_day_pane_fp_g

0x6381,	// (0x00048d44) list_single_cale_day_pane_fp_t1_ParamLimits

0x6381,	// (0x00048d44) list_single_cale_day_pane_fp_t1

0x63a7,	// (0x00048d6a) list_single_cale_day_pane_fp_t2_ParamLimits

0x63a7,	// (0x00048d6a) list_single_cale_day_pane_fp_t2

0x63c0,	// (0x00048d83) list_single_cale_day_pane_fp_t3_ParamLimits

0x63c0,	// (0x00048d83) list_single_cale_day_pane_fp_t3

0x0002,

0xfbae,	// (0x00052571) list_single_cale_day_pane_fp_t_ParamLimits

0xfbae,	// (0x00052571) list_single_cale_day_pane_fp_t

0xc8fc,	// (0x0004f2bf) list_empty_pane_fp_g1_ParamLimits

0xc8fc,	// (0x0004f2bf) list_empty_pane_fp_g1

0x63d9,	// (0x00048d9c) list_empty_pane_fp_t1

0x63e7,	// (0x00048daa) list_empty_pane_fp_t2

0x0001,

0xfbb5,	// (0x00052578) list_empty_pane_fp_t

0xc8fc,	// (0x0004f2bf) list_single_heading_pane_fp_g1_ParamLimits

0xc8fc,	// (0x0004f2bf) list_single_heading_pane_fp_g1

0xc908,	// (0x0004f2cb) list_single_heading_pane_fp_g2_ParamLimits

0xc908,	// (0x0004f2cb) list_single_heading_pane_fp_g2

0xc914,	// (0x0004f2d7) list_single_heading_pane_fp_g3_ParamLimits

0xc914,	// (0x0004f2d7) list_single_heading_pane_fp_g3

0x0002,

0xfbba,	// (0x0005257d) list_single_heading_pane_fp_g_ParamLimits

0xfbba,	// (0x0005257d) list_single_heading_pane_fp_g

0x63f5,	// (0x00048db8) list_single_heading_pane_fp_t1_ParamLimits

0x63f5,	// (0x00048db8) list_single_heading_pane_fp_t1

0x6407,	// (0x00048dca) list_single_heading_pane_fp_t2_ParamLimits

0x6407,	// (0x00048dca) list_single_heading_pane_fp_t2

0x0001,

0xfbc1,	// (0x00052584) list_single_heading_pane_fp_t_ParamLimits

0xfbc1,	// (0x00052584) list_single_heading_pane_fp_t

0x710c,	// (0x00049acf) aid_size_cell_fast

0x0b20,	// (0x000434e3) soft_indicator_pane_cp1_t1

0x7115,	// (0x00049ad8) cell_app_pane_cp2_ParamLimits

0x7115,	// (0x00049ad8) cell_app_pane_cp2

0x876e,	// (0x0004b131) fep_hwr_candidate_drop_down_list_pane

0x2ae4,	// (0x000454a7) fep_hwr_candidate_pane_g3_ParamLimits

0x2ae4,	// (0x000454a7) fep_hwr_candidate_pane_g3

0x2af1,	// (0x000454b4) fep_hwr_candidate_pane_g4_ParamLimits

0x2af1,	// (0x000454b4) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x000524f8) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x000524f8) fep_hwr_candidate_pane_g

0xc3bc,	// (0x0004ed7f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3bc,	// (0x0004ed7f) fep_vkb_candidate_drop_down_list_pane

0xc7bf,	// (0x0004f182) fep_vkb_candidate_pane_g3

0xc7c7,	// (0x0004f18a) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x00052525) fep_vkb_candidate_pane_g

0xc4c7,	// (0x0004ee8a) cell_hwr_candidate_pane_g1_ParamLimits

0xc7de,	// (0x0004f1a1) cell_hwr_candidate_pane_g3_ParamLimits

0xc7de,	// (0x0004f1a1) cell_hwr_candidate_pane_g3

0xc7ff,	// (0x0004f1c2) cell_hwr_candidate_pane_g4_ParamLimits

0xc7ff,	// (0x0004f1c2) cell_hwr_candidate_pane_g4

0x0002,

0xfb7c,	// (0x0005253f) cell_hwr_candidate_pane_g_ParamLimits

0xfb7c,	// (0x0005253f) cell_hwr_candidate_pane_g

0xc820,	// (0x0004f1e3) cell_vkb_candidate_pane_g3_ParamLimits

0xc820,	// (0x0004f1e3) cell_vkb_candidate_pane_g3

0xc83b,	// (0x0004f1fe) cell_vkb_candidate_pane_g4_ParamLimits

0xc83b,	// (0x0004f1fe) cell_vkb_candidate_pane_g4

0xc940,	// (0x0004f303) cell_app_pane_cp2_g1_ParamLimits

0xc940,	// (0x0004f303) cell_app_pane_cp2_g1

0xc95e,	// (0x0004f321) cell_app_pane_cp2_g2_ParamLimits

0xc95e,	// (0x0004f321) cell_app_pane_cp2_g2

0x0001,

0xfbc6,	// (0x00052589) cell_app_pane_cp2_g_ParamLimits

0xfbc6,	// (0x00052589) cell_app_pane_cp2_g

0xc96a,	// (0x0004f32d) cell_app_pane_cp2_t1_ParamLimits

0xc96a,	// (0x0004f32d) cell_app_pane_cp2_t1

0x0dc5,	// (0x00043788) grid_highlight_pane_cp1_ParamLimits

0x0dc5,	// (0x00043788) grid_highlight_pane_cp1

0x8a1a,	// (0x0004b3dd) cell_hwr_candidate_pane_cp1_ParamLimits

0x8a1a,	// (0x0004b3dd) cell_hwr_candidate_pane_cp1

0xc4c7,	// (0x0004ee8a) fep_hwr_candidate_drop_down_list_pane_g1

0xc97c,	// (0x0004f33f) fep_hwr_candidate_drop_down_list_pane_g2

0xc989,	// (0x0004f34c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x0005258e) fep_hwr_candidate_drop_down_list_pane_g

0x8a39,	// (0x0004b3fc) fep_hwr_candidate_drop_down_list_scroll_pane

0x8a42,	// (0x0004b405) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8a42,	// (0x0004b405) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8a4f,	// (0x0004b412) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8a4f,	// (0x0004b412) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8a5c,	// (0x0004b41f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8a5c,	// (0x0004b41f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc820,	// (0x0004f1e3) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc820,	// (0x0004f1e3) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc83b,	// (0x0004f1fe) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc83b,	// (0x0004f1fe) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8a69,	// (0x0004b42c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8a69,	// (0x0004b42c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8a84,	// (0x0004b447) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8a84,	// (0x0004b447) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8a9f,	// (0x0004b462) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8a9f,	// (0x0004b462) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00052595) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00052595) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc996,	// (0x0004f359) cell_vkb_candidate_pane_cp1_ParamLimits

0xc996,	// (0x0004f359) cell_vkb_candidate_pane_cp1

0xc4c7,	// (0x0004ee8a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4c7,	// (0x0004ee8a) fep_vkb_candidate_drop_down_list_pane_g1

0xc97c,	// (0x0004f33f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc97c,	// (0x0004f33f) fep_vkb_candidate_drop_down_list_pane_g2

0xc989,	// (0x0004f34c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc989,	// (0x0004f34c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x0005258e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcb,	// (0x0005258e) fep_vkb_candidate_drop_down_list_pane_g

0xc9b6,	// (0x0004f379) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9b6,	// (0x0004f379) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9c3,	// (0x0004f386) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9c3,	// (0x0004f386) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9d0,	// (0x0004f393) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9d0,	// (0x0004f393) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9dc,	// (0x0004f39f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9dc,	// (0x0004f39f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7de,	// (0x0004f1a1) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7de,	// (0x0004f1a1) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc7ff,	// (0x0004f1c2) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc7ff,	// (0x0004f1c2) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9e8,	// (0x0004f3ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9e8,	// (0x0004f3ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca09,	// (0x0004f3cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca09,	// (0x0004f3cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca2a,	// (0x0004f3ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca2a,	// (0x0004f3ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x000525a6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x000525a6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x698c,	// (0x0004934f) title_pane_g1_ParamLimits

0x6999,	// (0x0004935c) title_pane_g2_ParamLimits

0xf54e,	// (0x00051f11) title_pane_g_ParamLimits

0x11f0,	// (0x00043bb3) aid_call2_pane

0x11e8,	// (0x00043bab) aid_call_pane

0x11f8,	// (0x00043bbb) popup_clock_analogue_window_g1

0x11f8,	// (0x00043bbb) popup_clock_analogue_window_g2

0x741d,	// (0x00049de0) popup_clock_analogue_window_g3

0x7426,	// (0x00049de9) popup_clock_analogue_window_g4

0x09ad,	// (0x00043370) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x000520b6) popup_clock_analogue_window_g

0x742e,	// (0x00049df1) popup_clock_analogue_window_t1

0x7466,	// (0x00049e29) clock_digital_number_pane_ParamLimits

0x7466,	// (0x00049e29) clock_digital_number_pane

0x7472,	// (0x00049e35) clock_digital_number_pane_cp02_ParamLimits

0x7472,	// (0x00049e35) clock_digital_number_pane_cp02

0x747e,	// (0x00049e41) clock_digital_number_pane_cp03_ParamLimits

0x747e,	// (0x00049e41) clock_digital_number_pane_cp03

0x748a,	// (0x00049e4d) clock_digital_number_pane_cp04_ParamLimits

0x748a,	// (0x00049e4d) clock_digital_number_pane_cp04

0x7496,	// (0x00049e59) clock_digital_separator_pane_ParamLimits

0x7496,	// (0x00049e59) clock_digital_separator_pane

0x74a2,	// (0x00049e65) popup_clock_digital_window_t1_ParamLimits

0x74a2,	// (0x00049e65) popup_clock_digital_window_t1

0x09ad,	// (0x00043370) clock_digital_number_pane_g1

0x09ad,	// (0x00043370) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x000520c1) clock_digital_number_pane_g

0x09ad,	// (0x00043370) clock_digital_separator_pane_g1

0x09ad,	// (0x00043370) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x000520c1) clock_digital_separator_pane_g

0x97c1,	// (0x0004c184) aid_fill_nsta_ParamLimits

0x990d,	// (0x0004c2d0) indicator_nsta_pane_ParamLimits

0x9a86,	// (0x0004c449) popup_clock_analogue_window

0x9a86,	// (0x0004c449) popup_clock_digital_window

0x0a13,	// (0x000433d6) grid_indicator_nsta_pane_ParamLimits

0xbc55,	// (0x0004e618) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x00052478) clock_nsta_pane_t

0x7348,	// (0x00049d0b) aid_size_max_handle

0x7352,	// (0x00049d15) aid_size_min_handle

0x4ba3,	// (0x00047566) editor_scroll_pane

0xca45,	// (0x0004f408) ex_editor_pane

0x0ee4,	// (0x000438a7) scroll_pane_cp13

0x0d6d,	// (0x00043730) scroll_pane_cp14

0x1227,	// (0x00043bea) scroll_pane_cp36

0x7450,	// (0x00049e13) list_single_graphic_hl_pane_cp2_ParamLimits

0x7450,	// (0x00049e13) list_single_graphic_hl_pane_cp2

0x5fdd,	// (0x000489a0) list_single_graphic_hl_pane_ParamLimits

0x5fdd,	// (0x000489a0) list_single_graphic_hl_pane

0x641d,	// (0x00048de0) aid_size_min_hl_cp1

0xca4d,	// (0x0004f410) list_highlight_pane_cp34_ParamLimits

0xca4d,	// (0x0004f410) list_highlight_pane_cp34

0xca5e,	// (0x0004f421) list_single_graphic_hl_pane_g1_ParamLimits

0xca5e,	// (0x0004f421) list_single_graphic_hl_pane_g1

0x6426,	// (0x00048de9) list_single_graphic_hl_pane_g2_ParamLimits

0x6426,	// (0x00048de9) list_single_graphic_hl_pane_g2

0x6426,	// (0x00048de9) list_single_graphic_hl_pane_g3_ParamLimits

0x6426,	// (0x00048de9) list_single_graphic_hl_pane_g3

0x4b2e,	// (0x000474f1) list_single_graphic_hl_pane_g4_ParamLimits

0x4b2e,	// (0x000474f1) list_single_graphic_hl_pane_g4

0x6432,	// (0x00048df5) list_single_graphic_hl_pane_g5_ParamLimits

0x6432,	// (0x00048df5) list_single_graphic_hl_pane_g5

0x0004,

0xfbf4,	// (0x000525b7) list_single_graphic_hl_pane_g_ParamLimits

0xfbf4,	// (0x000525b7) list_single_graphic_hl_pane_g

0x6446,	// (0x00048e09) list_single_graphic_hl_pane_t1_ParamLimits

0x6446,	// (0x00048e09) list_single_graphic_hl_pane_t1

0xca6b,	// (0x0004f42e) aid_size_min_hl_cp2

0xca74,	// (0x0004f437) list_highlight_pane_cp34_cp2_ParamLimits

0xca74,	// (0x0004f437) list_highlight_pane_cp34_cp2

0xca5e,	// (0x0004f421) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca5e,	// (0x0004f421) list_single_graphic_hl_pane_g1_cp2

0xca81,	// (0x0004f444) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca81,	// (0x0004f444) list_single_graphic_hl_pane_g2_cp2

0xca8d,	// (0x0004f450) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca8d,	// (0x0004f450) list_single_graphic_hl_pane_g3_cp2

0x4b02,	// (0x000474c5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4b02,	// (0x000474c5) list_single_graphic_hl_pane_g4_cp2

0xca9b,	// (0x0004f45e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xca9b,	// (0x0004f45e) list_single_graphic_hl_pane_g5_cp2

0x7a6f,	// (0x0004a432) control_pane_g4_ParamLimits

0x7a6f,	// (0x0004a432) control_pane_g4

0x9785,	// (0x0004c148) bg_popup_sub_pane_cp10_ParamLimits

0xc261,	// (0x0004ec24) list_choice_list_pane_ParamLimits

0xc270,	// (0x0004ec33) scroll_pane_cp23

0x0b3d,	// (0x00043500) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8a0,	// (0x0004f263) list_preview_fixed_pane_ParamLimits

0xc8b6,	// (0x0004f279) list_preview_fixed_pane_cp_ParamLimits

0xc8b6,	// (0x0004f279) list_preview_fixed_pane_cp

0xc8c2,	// (0x0004f285) popup_preview_fixed_window_g1_ParamLimits

0xc8c2,	// (0x0004f285) popup_preview_fixed_window_g1

0xc8ce,	// (0x0004f291) popup_preview_fixed_window_g2_ParamLimits

0xc8ce,	// (0x0004f291) popup_preview_fixed_window_g2

0x0002,

0xfb83,	// (0x00052546) popup_preview_fixed_window_g_ParamLimits

0xfb83,	// (0x00052546) popup_preview_fixed_window_g

0x7224,	// (0x00049be7) aid_navi_side_left_pane_ParamLimits

0x7239,	// (0x00049bfc) aid_navi_side_right_pane_ParamLimits

0x7251,	// (0x00049c14) navi_icon_pane_stacon_ParamLimits

0x7265,	// (0x00049c28) navi_navi_pane_stacon_ParamLimits

0x7251,	// (0x00049c14) navi_text_pane_stacon_ParamLimits

0x09a3,	// (0x00043366) main_text_info_pane

0xcac5,	// (0x0004f488) listscroll_text_info_pane

0xcacd,	// (0x0004f490) list_text_info_pane_ParamLimits

0xcacd,	// (0x0004f490) list_text_info_pane

0xcadc,	// (0x0004f49f) scroll_pane_cp24_ParamLimits

0xcadc,	// (0x0004f49f) scroll_pane_cp24

0xcafa,	// (0x0004f4bd) list_text_info_pane_t1_ParamLimits

0xcafa,	// (0x0004f4bd) list_text_info_pane_t1

0x7bdd,	// (0x0004a5a0) popup_fast_swap2_window_ParamLimits

0x7bdd,	// (0x0004a5a0) popup_fast_swap2_window

0xcb2e,	// (0x0004f4f1) aid_size_cell_fast2

0x09a3,	// (0x00043366) bg_popup_window_pane_cp17

0xa113,	// (0x0004cad6) heading_pane_cp2

0x0c71,	// (0x00043634) listscroll_fast2_pane

0xcb38,	// (0x0004f4fb) grid_fast2_pane

0xcb42,	// (0x0004f505) listscroll_fast2_pane_g1

0xcb4a,	// (0x0004f50d) listscroll_fast2_pane_g2

0x0001,

0xfbff,	// (0x000525c2) listscroll_fast2_pane_g

0x0ee4,	// (0x000438a7) scroll_pane_cp26

0xcb54,	// (0x0004f517) cell_fast2_pane_ParamLimits

0xcb54,	// (0x0004f517) cell_fast2_pane

0xcb69,	// (0x0004f52c) cell_fast2_pane_g1

0xcb72,	// (0x0004f535) cell_fast2_pane_g2

0xcb7b,	// (0x0004f53e) cell_fast2_pane_g3

0x0002,

0xfc04,	// (0x000525c7) cell_fast2_pane_g

0x0ca4,	// (0x00043667) grid_highlight_pane_cp9

0x0cb9,	// (0x0004367c) main_eswt_pane_ParamLimits

0x0cb9,	// (0x0004367c) main_eswt_pane

0xcaf1,	// (0x0004f4b4) list_single_text_info_pane

0xcb83,	// (0x0004f546) eswt_ctrl_button_pane

0xcb83,	// (0x0004f546) eswt_ctrl_canvas_pane

0xcb8b,	// (0x0004f54e) eswt_ctrl_combo_pane

0xcb83,	// (0x0004f546) eswt_ctrl_default_pane

0xcb83,	// (0x0004f546) eswt_ctrl_label_pane

0xcb93,	// (0x0004f556) eswt_ctrl_wait_pane

0xcb9b,	// (0x0004f55e) eswt_shell_pane

0x09a3,	// (0x00043366) listscroll_eswt_app_pane

0xcbbb,	// (0x0004f57e) popup_eswt_tasktip_window_ParamLimits

0xcbbb,	// (0x0004f57e) popup_eswt_tasktip_window

0x9d20,	// (0x0004c6e3) bg_popup_window_pane_cp18

0xcbcc,	// (0x0004f58f) eswt_control_pane_g1_ParamLimits

0xcbcc,	// (0x0004f58f) eswt_control_pane_g1

0xcbd9,	// (0x0004f59c) eswt_control_pane_g2_ParamLimits

0xcbd9,	// (0x0004f59c) eswt_control_pane_g2

0xcbe6,	// (0x0004f5a9) eswt_control_pane_g3_ParamLimits

0xcbe6,	// (0x0004f5a9) eswt_control_pane_g3

0xcbf3,	// (0x0004f5b6) eswt_control_pane_g4_ParamLimits

0xcbf3,	// (0x0004f5b6) eswt_control_pane_g4

0x0003,

0xfc0b,	// (0x000525ce) eswt_control_pane_g_ParamLimits

0xfc0b,	// (0x000525ce) eswt_control_pane_g

0x0dc5,	// (0x00043788) bg_button_pane_ParamLimits

0x0dc5,	// (0x00043788) bg_button_pane

0x0cb9,	// (0x0004367c) common_borders_pane_copy2_ParamLimits

0x0cb9,	// (0x0004367c) common_borders_pane_copy2

0xcc00,	// (0x0004f5c3) control_button_pane_g1_ParamLimits

0xcc00,	// (0x0004f5c3) control_button_pane_g1

0xcc0c,	// (0x0004f5cf) control_button_pane_g2_ParamLimits

0xcc0c,	// (0x0004f5cf) control_button_pane_g2

0xcc18,	// (0x0004f5db) control_button_pane_g3_ParamLimits

0xcc18,	// (0x0004f5db) control_button_pane_g3

0x0002,

0xfc14,	// (0x000525d7) control_button_pane_g_ParamLimits

0xfc14,	// (0x000525d7) control_button_pane_g

0xcc2c,	// (0x0004f5ef) control_button_pane_t1

0xcc3a,	// (0x0004f5fd) control_button_pane_t2

0x0001,

0xfc1b,	// (0x000525de) control_button_pane_t

0x9cac,	// (0x0004c66f) bg_button_pane_g1

0x9cb4,	// (0x0004c677) bg_button_pane_g2

0x9cbc,	// (0x0004c67f) bg_button_pane_g3

0x9cc4,	// (0x0004c687) bg_button_pane_g4

0x9ccc,	// (0x0004c68f) bg_button_pane_g5

0x9cd4,	// (0x0004c697) bg_button_pane_g6

0x9cdc,	// (0x0004c69f) bg_button_pane_g7

0x9ce4,	// (0x0004c6a7) bg_button_pane_g8

0x9cec,	// (0x0004c6af) bg_button_pane_g9

0x0008,

0xf861,	// (0x00052224) bg_button_pane_g

0xc21c,	// (0x0004ebdf) common_borders_pane_ParamLimits

0xc21c,	// (0x0004ebdf) common_borders_pane

0xcbcc,	// (0x0004f58f) eswt_control_pane_g1_copy1_ParamLimits

0xcbcc,	// (0x0004f58f) eswt_control_pane_g1_copy1

0xcbd9,	// (0x0004f59c) eswt_control_pane_g2_copy1_ParamLimits

0xcbd9,	// (0x0004f59c) eswt_control_pane_g2_copy1

0xcbe6,	// (0x0004f5a9) eswt_control_pane_g3_copy1_ParamLimits

0xcbe6,	// (0x0004f5a9) eswt_control_pane_g3_copy1

0xcbf3,	// (0x0004f5b6) eswt_control_pane_g4_copy1_ParamLimits

0xcbf3,	// (0x0004f5b6) eswt_control_pane_g4_copy1

0xc257,	// (0x0004ec1a) bg_eswt_ctrl_canvas_pane_g1

0xc21c,	// (0x0004ebdf) common_borders_pane_cp2_ParamLimits

0xc21c,	// (0x0004ebdf) common_borders_pane_cp2

0xc21c,	// (0x0004ebdf) common_borders_pane_cp3_ParamLimits

0xc21c,	// (0x0004ebdf) common_borders_pane_cp3

0xcc48,	// (0x0004f60b) separator_horizontal_pane

0xcc50,	// (0x0004f613) separator_vertical_pane

0xcbcc,	// (0x0004f58f) eswt_control_pane_g1_copy2_ParamLimits

0xcbcc,	// (0x0004f58f) eswt_control_pane_g1_copy2

0xcbd9,	// (0x0004f59c) eswt_control_pane_g2_copy2_ParamLimits

0xcbd9,	// (0x0004f59c) eswt_control_pane_g2_copy2

0xcbe6,	// (0x0004f5a9) eswt_control_pane_g3_copy2_ParamLimits

0xcbe6,	// (0x0004f5a9) eswt_control_pane_g3_copy2

0xcbf3,	// (0x0004f5b6) eswt_control_pane_g4_copy2_ParamLimits

0xcbf3,	// (0x0004f5b6) eswt_control_pane_g4_copy2

0x09a3,	// (0x00043366) common_borders_pane_cp4

0xcc59,	// (0x0004f61c) separator_horizontal_pane_g1

0xcc62,	// (0x0004f625) separator_horizontal_pane_g2

0xcc6b,	// (0x0004f62e) separator_horizontal_pane_g3

0x0002,

0xfc20,	// (0x000525e3) separator_horizontal_pane_g

0xcbcc,	// (0x0004f58f) eswt_control_pane_g1_copy3_ParamLimits

0xcbcc,	// (0x0004f58f) eswt_control_pane_g1_copy3

0xcbd9,	// (0x0004f59c) eswt_control_pane_g2_copy3_ParamLimits

0xcbd9,	// (0x0004f59c) eswt_control_pane_g2_copy3

0xcbe6,	// (0x0004f5a9) eswt_control_pane_g3_copy3_ParamLimits

0xcbe6,	// (0x0004f5a9) eswt_control_pane_g3_copy3

0xcbf3,	// (0x0004f5b6) eswt_control_pane_g4_copy3_ParamLimits

0xcbf3,	// (0x0004f5b6) eswt_control_pane_g4_copy3

0x09a3,	// (0x00043366) common_borders_pane_cp5

0xcc74,	// (0x0004f637) separator_vertical_pane_g1

0xcc7d,	// (0x0004f640) separator_vertical_pane_g2

0xcc86,	// (0x0004f649) separator_vertical_pane_g3

0x0002,

0xfc27,	// (0x000525ea) separator_vertical_pane_g

0xcbcc,	// (0x0004f58f) eswt_control_pane_g1_copy4_ParamLimits

0xcbcc,	// (0x0004f58f) eswt_control_pane_g1_copy4

0xcbd9,	// (0x0004f59c) eswt_control_pane_g2_copy4_ParamLimits

0xcbd9,	// (0x0004f59c) eswt_control_pane_g2_copy4

0xcbe6,	// (0x0004f5a9) eswt_control_pane_g3_copy4_ParamLimits

0xcbe6,	// (0x0004f5a9) eswt_control_pane_g3_copy4

0xcbf3,	// (0x0004f5b6) eswt_control_pane_g4_copy4_ParamLimits

0xcbf3,	// (0x0004f5b6) eswt_control_pane_g4_copy4

0xcc8f,	// (0x0004f652) eswt_ctrl_combo_button_pane

0xcc97,	// (0x0004f65a) eswt_ctrl_input_pane

0xcc9f,	// (0x0004f662) popup_choice_list_window_cp70

0xcca7,	// (0x0004f66a) eswt_ctrl_input_pane_t1

0x09a3,	// (0x00043366) input_focus_pane_cp70

0xc21c,	// (0x0004ebdf) bg_button_pane_cp70_ParamLimits

0xc21c,	// (0x0004ebdf) bg_button_pane_cp70

0xccb5,	// (0x0004f678) eswt_ctrl_combo_button_pane_g1

0xccbd,	// (0x0004f680) wait_bar_pane_cp70

0x9d20,	// (0x0004c6e3) bg_popup_window_pane_cp70_ParamLimits

0x9d20,	// (0x0004c6e3) bg_popup_window_pane_cp70

0xccc5,	// (0x0004f688) popup_eswt_tasktip_window_t1

0xccdb,	// (0x0004f69e) wait_bar_pane_cp71_ParamLimits

0xccdb,	// (0x0004f69e) wait_bar_pane_cp71

0xcce7,	// (0x0004f6aa) grid_eswt_app_pane

0x10cb,	// (0x00043a8e) scroll_pane_cp70

0xccf0,	// (0x0004f6b3) cell_eswt_app_pane_ParamLimits

0xccf0,	// (0x0004f6b3) cell_eswt_app_pane

0xcd20,	// (0x0004f6e3) cell_eswt_app_pane_g1_ParamLimits

0xcd20,	// (0x0004f6e3) cell_eswt_app_pane_g1

0xcd4f,	// (0x0004f712) cell_eswt_app_pane_g2_ParamLimits

0xcd4f,	// (0x0004f712) cell_eswt_app_pane_g2

0x0001,

0xfc2e,	// (0x000525f1) cell_eswt_app_pane_g_ParamLimits

0xfc2e,	// (0x000525f1) cell_eswt_app_pane_g

0xcd73,	// (0x0004f736) cell_eswt_app_pane_t1_ParamLimits

0xcd73,	// (0x0004f736) cell_eswt_app_pane_t1

0xcda5,	// (0x0004f768) grid_highlight_pane_cp70_ParamLimits

0xcda5,	// (0x0004f768) grid_highlight_pane_cp70

0x4aa6,	// (0x00047469) set_content_pane_g1

0x79f7,	// (0x0004a3ba) status_small_volume_pane

0x8aba,	// (0x0004b47d) status_small_volume_pane_g1

0x8ac2,	// (0x0004b485) volume_small2_pane

0x8acb,	// (0x0004b48e) volume_small2_pane_g1

0x8ad4,	// (0x0004b497) volume_small2_pane_g2

0x8add,	// (0x0004b4a0) volume_small2_pane_g3

0x8ae6,	// (0x0004b4a9) volume_small2_pane_g4

0x8aef,	// (0x0004b4b2) volume_small2_pane_g5

0x8af8,	// (0x0004b4bb) volume_small2_pane_g6

0x8b01,	// (0x0004b4c4) volume_small2_pane_g7

0x8b0a,	// (0x0004b4cd) volume_small2_pane_g8

0x8b13,	// (0x0004b4d6) volume_small2_pane_g9

0x8b1c,	// (0x0004b4df) volume_small2_pane_g10

0x0009,

0xfc33,	// (0x000525f6) volume_small2_pane_g

0xc60f,	// (0x0004efd2) fep_vkb_top_text_pane_g1_ParamLimits

0xc62a,	// (0x0004efed) fep_vkb_top_text_pane_t1_ParamLimits

0xc8da,	// (0x0004f29d) popup_preview_fixed_window_g3_ParamLimits

0xc8da,	// (0x0004f29d) popup_preview_fixed_window_g3

0x808c,	// (0x0004aa4f) popup_toolbar_trans_pane

0xb056,	// (0x0004da19) aid_height_set_list_ParamLimits

0xb067,	// (0x0004da2a) aid_size_parent_ParamLimits

0x9785,	// (0x0004c148) list_highlight_pane_cp2_ParamLimits

0x4aa6,	// (0x00047469) set_content_pane_g1_ParamLimits

0x8527,	// (0x0004aeea) list_single_image_pane_ParamLimits

0x8527,	// (0x0004aeea) list_single_image_pane

0xcdb1,	// (0x0004f774) aid_size_cell_image_ParamLimits

0xcdb1,	// (0x0004f774) aid_size_cell_image

0xcdbe,	// (0x0004f781) grid_single_image_pane_ParamLimits

0xcdbe,	// (0x0004f781) grid_single_image_pane

0xc908,	// (0x0004f2cb) list_single_image_pane_g1_ParamLimits

0xc908,	// (0x0004f2cb) list_single_image_pane_g1

0xc914,	// (0x0004f2d7) list_single_image_pane_g2_ParamLimits

0xc914,	// (0x0004f2d7) list_single_image_pane_g2

0x0001,

0xfc48,	// (0x0005260b) list_single_image_pane_g_ParamLimits

0xfc48,	// (0x0005260b) list_single_image_pane_g

0xcdcc,	// (0x0004f78f) list_single_image_pane_t1_ParamLimits

0xcdcc,	// (0x0004f78f) list_single_image_pane_t1

0xcde2,	// (0x0004f7a5) cell_image_list_pane_ParamLimits

0xcde2,	// (0x0004f7a5) cell_image_list_pane

0xcdf6,	// (0x0004f7b9) cell_image_list_pane_g1

0xcdff,	// (0x0004f7c2) cell_image_list_pane_g2

0x0001,

0xfc4d,	// (0x00052610) cell_image_list_pane_g

0xce08,	// (0x0004f7cb) aid_size_cell_tb_trans_pane

0x0dc5,	// (0x00043788) bg_tb_trans_pane

0xce1a,	// (0x0004f7dd) grid_tb_trans_pane

0x9cac,	// (0x0004c66f) bg_tb_trans_pane_g1

0x9cb4,	// (0x0004c677) bg_tb_trans_pane_g2

0x9cbc,	// (0x0004c67f) bg_tb_trans_pane_g3

0x9cc4,	// (0x0004c687) bg_tb_trans_pane_g4

0x9ccc,	// (0x0004c68f) bg_tb_trans_pane_g5

0x9ce4,	// (0x0004c6a7) bg_tb_trans_pane_g6

0x9cec,	// (0x0004c6af) bg_tb_trans_pane_g7

0x9cd4,	// (0x0004c697) bg_tb_trans_pane_g8

0x9cdc,	// (0x0004c69f) bg_tb_trans_pane_g9

0x0008,

0xfc52,	// (0x00052615) bg_tb_trans_pane_g

0xce2e,	// (0x0004f7f1) cell_toolbar_trans_pane_ParamLimits

0xce2e,	// (0x0004f7f1) cell_toolbar_trans_pane

0xc257,	// (0x0004ec1a) cell_toolbar_trans_pane_g1

0xbe16,	// (0x0004e7d9) list_form2_midp_pane_t1

0xbe24,	// (0x0004e7e7) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x000524be) list_form2_midp_pane_t

0xbe32,	// (0x0004e7f5) scroll_pane_cp51_ParamLimits

0xbfee,	// (0x0004e9b1) form2_midp_wait_pane_g1

0xbff7,	// (0x0004e9ba) form2_midp_wait_pane_g2

0xc000,	// (0x0004e9c3) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x000524d3) form2_midp_wait_pane_g

0x0a13,	// (0x000433d6) list_highlight_pane_cp21_ParamLimits

0xc048,	// (0x0004ea0b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc057,	// (0x0004ea1a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x84c8,	// (0x0004ae8b) list_single_2graphic_im_pane_ParamLimits

0x84c8,	// (0x0004ae8b) list_single_2graphic_im_pane

0xce54,	// (0x0004f817) list_single_2graphic_im_pane_g1_ParamLimits

0xce54,	// (0x0004f817) list_single_2graphic_im_pane_g1

0xce65,	// (0x0004f828) list_single_2graphic_im_pane_g2_ParamLimits

0xce65,	// (0x0004f828) list_single_2graphic_im_pane_g2

0xce71,	// (0x0004f834) list_single_2graphic_im_pane_g3_ParamLimits

0xce71,	// (0x0004f834) list_single_2graphic_im_pane_g3

0x0003,

0xfc65,	// (0x00052628) list_single_2graphic_im_pane_g_ParamLimits

0xfc65,	// (0x00052628) list_single_2graphic_im_pane_g

0xce91,	// (0x0004f854) list_single_2graphic_im_pane_t1_ParamLimits

0xce91,	// (0x0004f854) list_single_2graphic_im_pane_t1

0xc8e6,	// (0x0004f2a9) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8e6,	// (0x0004f2a9) list_single_graphic_2heading_pane_fp

0x62ff,	// (0x00048cc2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x62ff,	// (0x00048cc2) list_single_graphic_2heading_pane_fp_g1

0xc8fc,	// (0x0004f2bf) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8fc,	// (0x0004f2bf) list_single_graphic_2heading_pane_fp_g2

0xc908,	// (0x0004f2cb) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc908,	// (0x0004f2cb) list_single_graphic_2heading_pane_fp_g3

0xc914,	// (0x0004f2d7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc914,	// (0x0004f2d7) list_single_graphic_2heading_pane_fp_g4

0xc928,	// (0x0004f2eb) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc928,	// (0x0004f2eb) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb93,	// (0x00052556) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb93,	// (0x00052556) list_single_graphic_2heading_pane_fp_g

0x645c,	// (0x00048e1f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x645c,	// (0x00048e1f) list_single_graphic_2heading_pane_fp_t1

0x6337,	// (0x00048cfa) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6337,	// (0x00048cfa) list_single_graphic_2heading_pane_fp_t2

0x6472,	// (0x00048e35) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6472,	// (0x00048e35) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6e,	// (0x00052631) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6e,	// (0x00052631) list_single_graphic_2heading_pane_fp_t

0xc2e3,	// (0x0004eca6) fep_hwr_write_pane_g5_ParamLimits

0xc2e3,	// (0x0004eca6) fep_hwr_write_pane_g5

0xc2ef,	// (0x0004ecb2) fep_hwr_write_pane_g6_ParamLimits

0xc2ef,	// (0x0004ecb2) fep_hwr_write_pane_g6

0xcb9b,	// (0x0004f55e) eswt_shell_pane_ParamLimits

0x9d20,	// (0x0004c6e3) bg_popup_window_pane_cp18_ParamLimits

0xafaf,	// (0x0004d972) heading_pane_cp70

0xccc5,	// (0x0004f688) popup_eswt_tasktip_window_t1_ParamLimits

0x9816,	// (0x0004c1d9) aid_touch_tab_arrow_left

0x9825,	// (0x0004c1e8) aid_touch_tab_arrow_right

0x69aa,	// (0x0004936d) title_pane_g3_ParamLimits

0x69aa,	// (0x0004936d) title_pane_g3

0x0d8d,	// (0x00043750) set_value_pane_g1

0x808c,	// (0x0004aa4f) popup_toolbar_trans_pane_ParamLimits

0xce08,	// (0x0004f7cb) aid_size_cell_tb_trans_pane_ParamLimits

0x0dc5,	// (0x00043788) bg_tb_trans_pane_ParamLimits

0xce1a,	// (0x0004f7dd) grid_tb_trans_pane_ParamLimits

0x0b3d,	// (0x00043500) cont_note_pane_ParamLimits

0x0b3d,	// (0x00043500) cont_note_pane

0x0cb9,	// (0x0004367c) cont_snote2_single_text_pane_ParamLimits

0x0cb9,	// (0x0004367c) cont_snote2_single_text_pane

0x0cb9,	// (0x0004367c) cont_snote2_single_graphic_pane_ParamLimits

0x0cb9,	// (0x0004367c) cont_snote2_single_graphic_pane

0xa332,	// (0x0004ccf5) cont_note_wait_pane_ParamLimits

0xa332,	// (0x0004ccf5) cont_note_wait_pane

0xa332,	// (0x0004ccf5) cont_note_image_pane_ParamLimits

0xa332,	// (0x0004ccf5) cont_note_image_pane

0xcec2,	// (0x0004f885) popup_note2_window_g1_ParamLimits

0xcec2,	// (0x0004f885) popup_note2_window_g1

0xcef3,	// (0x0004f8b6) popup_note2_window_t1_ParamLimits

0xcef3,	// (0x0004f8b6) popup_note2_window_t1

0xcf38,	// (0x0004f8fb) popup_note2_window_t2_ParamLimits

0xcf38,	// (0x0004f8fb) popup_note2_window_t2

0xcf7d,	// (0x0004f940) popup_note2_window_t3_ParamLimits

0xcf7d,	// (0x0004f940) popup_note2_window_t3

0xcfc2,	// (0x0004f985) popup_note2_window_t4_ParamLimits

0xcfc2,	// (0x0004f985) popup_note2_window_t4

0x0bc1,	// (0x00043584) popup_note2_window_t5_ParamLimits

0x0bc1,	// (0x00043584) popup_note2_window_t5

0x0004,

0xfc7a,	// (0x0005263d) popup_note2_window_t_ParamLimits

0xfc7a,	// (0x0005263d) popup_note2_window_t

0xcff1,	// (0x0004f9b4) popup_note2_image_window_g1_ParamLimits

0xcff1,	// (0x0004f9b4) popup_note2_image_window_g1

0xcffd,	// (0x0004f9c0) popup_note2_image_window_g2_ParamLimits

0xcffd,	// (0x0004f9c0) popup_note2_image_window_g2

0x0001,

0xfc85,	// (0x00052648) popup_note2_image_window_g_ParamLimits

0xfc85,	// (0x00052648) popup_note2_image_window_g

0xd00f,	// (0x0004f9d2) popup_note2_image_window_t1_ParamLimits

0xd00f,	// (0x0004f9d2) popup_note2_image_window_t1

0xd027,	// (0x0004f9ea) popup_note2_image_window_t2_ParamLimits

0xd027,	// (0x0004f9ea) popup_note2_image_window_t2

0xd03f,	// (0x0004fa02) popup_note2_image_window_t3_ParamLimits

0xd03f,	// (0x0004fa02) popup_note2_image_window_t3

0x0002,

0xfc8a,	// (0x0005264d) popup_note2_image_window_t_ParamLimits

0xfc8a,	// (0x0005264d) popup_note2_image_window_t

0xa340,	// (0x0004cd03) popup_note2_wait_window_g1_ParamLimits

0xa340,	// (0x0004cd03) popup_note2_wait_window_g1

0xa34c,	// (0x0004cd0f) popup_note2_wait_window_g2_ParamLimits

0xa34c,	// (0x0004cd0f) popup_note2_wait_window_g2

0xa358,	// (0x0004cd1b) popup_note2_wait_window_g3_ParamLimits

0xa358,	// (0x0004cd1b) popup_note2_wait_window_g3

0x0002,

0xf843,	// (0x00052206) popup_note2_wait_window_g_ParamLimits

0xf843,	// (0x00052206) popup_note2_wait_window_g

0xd05b,	// (0x0004fa1e) popup_note2_wait_window_t1_ParamLimits

0xd05b,	// (0x0004fa1e) popup_note2_wait_window_t1

0xd079,	// (0x0004fa3c) popup_note2_wait_window_t2_ParamLimits

0xd079,	// (0x0004fa3c) popup_note2_wait_window_t2

0xd097,	// (0x0004fa5a) popup_note2_wait_window_t3_ParamLimits

0xd097,	// (0x0004fa5a) popup_note2_wait_window_t3

0xd0a9,	// (0x0004fa6c) popup_note2_wait_window_t4_ParamLimits

0xd0a9,	// (0x0004fa6c) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x00052654) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x00052654) popup_note2_wait_window_t

0xd0bb,	// (0x0004fa7e) wait_bar2_pane_ParamLimits

0xd0bb,	// (0x0004fa7e) wait_bar2_pane

0xd0d3,	// (0x0004fa96) popup_snote2_single_text_window_g1_ParamLimits

0xd0d3,	// (0x0004fa96) popup_snote2_single_text_window_g1

0xd0fb,	// (0x0004fabe) popup_snote2_single_text_window_t1_ParamLimits

0xd0fb,	// (0x0004fabe) popup_snote2_single_text_window_t1

0xd147,	// (0x0004fb0a) popup_snote2_single_text_window_t2_ParamLimits

0xd147,	// (0x0004fb0a) popup_snote2_single_text_window_t2

0xd193,	// (0x0004fb56) popup_snote2_single_text_window_t3_ParamLimits

0xd193,	// (0x0004fb56) popup_snote2_single_text_window_t3

0xd1d4,	// (0x0004fb97) popup_snote2_single_text_window_t4_ParamLimits

0xd1d4,	// (0x0004fb97) popup_snote2_single_text_window_t4

0xd20a,	// (0x0004fbcd) popup_snote2_single_text_window_t5_ParamLimits

0xd20a,	// (0x0004fbcd) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0005265d) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0005265d) popup_snote2_single_text_window_t

0xd235,	// (0x0004fbf8) popup_snote2_single_graphic_window_g1_ParamLimits

0xd235,	// (0x0004fbf8) popup_snote2_single_graphic_window_g1

0xd25d,	// (0x0004fc20) popup_snote2_single_graphic_window_g2_ParamLimits

0xd25d,	// (0x0004fc20) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x00052668) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x00052668) popup_snote2_single_graphic_window_g

0xd285,	// (0x0004fc48) popup_snote2_single_graphic_window_t1_ParamLimits

0xd285,	// (0x0004fc48) popup_snote2_single_graphic_window_t1

0xd2d1,	// (0x0004fc94) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2d1,	// (0x0004fc94) popup_snote2_single_graphic_window_t2

0xd193,	// (0x0004fb56) popup_snote2_single_graphic_window_t3_ParamLimits

0xd193,	// (0x0004fb56) popup_snote2_single_graphic_window_t3

0xd1d4,	// (0x0004fb97) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1d4,	// (0x0004fb97) popup_snote2_single_graphic_window_t4

0xd20a,	// (0x0004fbcd) popup_snote2_single_graphic_window_t5_ParamLimits

0xd20a,	// (0x0004fbcd) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0005266d) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0005266d) popup_snote2_single_graphic_window_t

0xbcef,	// (0x0004e6b2) clock_nsta_pane_cp2_t1

0xbcef,	// (0x0004e6b2) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x00052494) clock_nsta_pane_cp2_t

0x5c19,	// (0x000485dc) form_field_data_wide_pane_g1_ParamLimits

0x0dd3,	// (0x00043796) form_field_data_wide_pane_g2_ParamLimits

0x0dd3,	// (0x00043796) form_field_data_wide_pane_g2

0x0ddf,	// (0x000437a2) form_field_data_wide_pane_g3_ParamLimits

0x0ddf,	// (0x000437a2) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00052039) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00052039) form_field_data_wide_pane_g

0xbbf1,	// (0x0004e5b4) grid_touch_3_pane_ParamLimits

0xbbf1,	// (0x0004e5b4) grid_touch_3_pane

0xd31d,	// (0x0004fce0) cell_touch_3_pane_ParamLimits

0xd31d,	// (0x0004fce0) cell_touch_3_pane

0xc257,	// (0x0004ec1a) cell_touch_3_pane_g1

0xc257,	// (0x0004ec1a) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x00052519) cell_touch_3_pane_g

0x0bf3,	// (0x000435b6) cont_query_data_pane

0x0bfb,	// (0x000435be) cont_query_data_pane_cp1

0xd34b,	// (0x0004fd0e) button_value_adjust_pane_cp7

0xd353,	// (0x0004fd16) query_popup_pane_cp3

0x1259,	// (0x00043c1c) bg_popup_sub_pane_cp22_ParamLimits

0x751c,	// (0x00049edf) navi_navi_volume_pane_cp2

0x7534,	// (0x00049ef7) popup_side_volume_key_window_g2

0x7540,	// (0x00049f03) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x000520cf) popup_side_volume_key_window_g

0x755a,	// (0x00049f1d) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x000520d6) popup_side_volume_key_window_t

0x778a,	// (0x0004a14d) popup_side_volume_key_window_ParamLimits

0x58d1,	// (0x00048294) list_double_graphic_pane_g4_ParamLimits

0x58d1,	// (0x00048294) list_double_graphic_pane_g4

0x8507,	// (0x0004aeca) list_single_2heading_msg_pane_ParamLimits

0x8507,	// (0x0004aeca) list_single_2heading_msg_pane

0x8b25,	// (0x0004b4e8) list_single_2heading_msg_pane_g1_ParamLimits

0x8b25,	// (0x0004b4e8) list_single_2heading_msg_pane_g1

0x6f73,	// (0x00049936) list_single_2heading_msg_pane_g2_ParamLimits

0x6f73,	// (0x00049936) list_single_2heading_msg_pane_g2

0x8b31,	// (0x0004b4f4) list_single_2heading_msg_pane_g3_ParamLimits

0x8b31,	// (0x0004b4f4) list_single_2heading_msg_pane_g3

0x8b3d,	// (0x0004b500) list_single_2heading_msg_pane_g4_ParamLimits

0x8b3d,	// (0x0004b500) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x00052678) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x00052678) list_single_2heading_msg_pane_g

0x6492,	// (0x00048e55) list_single_2heading_msg_pane_t1_ParamLimits

0x6492,	// (0x00048e55) list_single_2heading_msg_pane_t1

0x64ba,	// (0x00048e7d) list_single_2heading_msg_pane_t2_ParamLimits

0x64ba,	// (0x00048e7d) list_single_2heading_msg_pane_t2

0x64e9,	// (0x00048eac) list_single_2heading_msg_pane_t3_ParamLimits

0x64e9,	// (0x00048eac) list_single_2heading_msg_pane_t3

0x6522,	// (0x00048ee5) list_single_2heading_msg_pane_t4_ParamLimits

0x6522,	// (0x00048ee5) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x00052681) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x00052681) list_single_2heading_msg_pane_t

0x09c1,	// (0x00043384) title_pane_g4_ParamLimits

0x09c1,	// (0x00043384) title_pane_g4

0x7175,	// (0x00049b38) title_pane_stacon_g3_ParamLimits

0x7175,	// (0x00049b38) title_pane_stacon_g3

0xce85,	// (0x0004f848) list_single_2graphic_im_pane_g4_ParamLimits

0xce85,	// (0x0004f848) list_single_2graphic_im_pane_g4

0xad79,	// (0x0004d73c) popup_side_volume_key_window_cp

0xb54c,	// (0x0004df0f) main_idle_act2_pane_t1

0x817e,	// (0x0004ab41) toolbar_button_pane_g10

0x6f69,	// (0x0004992c) popup_toolbar_window_cp1

0xbce0,	// (0x0004e6a3) clock_nsta_pane_cp_t1

0xbce0,	// (0x0004e6a3) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x0005248f) clock_nsta_pane_cp_t

0x751c,	// (0x00049edf) navi_navi_volume_pane_cp2_ParamLimits

0x7528,	// (0x00049eeb) popup_side_volume_key_window_g1_ParamLimits

0x7534,	// (0x00049ef7) popup_side_volume_key_window_g2_ParamLimits

0x7540,	// (0x00049f03) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x000520cf) popup_side_volume_key_window_g_ParamLimits

0x875a,	// (0x0004b11d) fep_hwr_aid_pane

0x2ad6,	// (0x00045499) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2b3,	// (0x0004ec76) fep_hwr_top_pane_g1_ParamLimits

0xc2c5,	// (0x0004ec88) fep_hwr_top_pane_g2_ParamLimits

0x8813,	// (0x0004b1d6) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x000524e4) fep_hwr_top_pane_g_ParamLimits

0x8828,	// (0x0004b1eb) fep_hwr_top_text_pane_ParamLimits

0xab3c,	// (0x0004d4ff) aid_touch_tab_arrow_arrow_2

0xab45,	// (0x0004d508) aid_touch_tab_arrow_left_2

0x876e,	// (0x0004b131) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x87a5,	// (0x0004b168) fep_hwr_prediction_pane

0xc41e,	// (0x0004ede1) fep_vkb_prediction_pane

0xc51b,	// (0x0004eede) fep_vkb_side_pane_g3_ParamLimits

0xc51b,	// (0x0004eede) fep_vkb_side_pane_g3

0xc4c7,	// (0x0004ee8a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc97c,	// (0x0004f33f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc989,	// (0x0004f34c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcb,	// (0x0005258e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd378,	// (0x0004fd3b) fep_hwr_prediction_pane_g1

0x8b55,	// (0x0004b518) fep_hwr_prediction_pane_g2

0x8b5d,	// (0x0004b520) fep_hwr_prediction_pane_g3

0x8b65,	// (0x0004b528) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0005268a) fep_hwr_prediction_pane_g

0xd378,	// (0x0004fd3b) fep_vkb_prediction_pane_g1

0xd382,	// (0x0004fd45) fep_vkb_prediction_pane_g2

0xd38a,	// (0x0004fd4d) fep_vkb_prediction_pane_g3

0xd392,	// (0x0004fd55) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x00052693) fep_vkb_prediction_pane_g

0x8470,	// (0x0004ae33) slider_set_pane_g3

0x8484,	// (0x0004ae47) slider_set_pane_g4

0x849c,	// (0x0004ae5f) slider_set_pane_g5

0x8470,	// (0x0004ae33) slider_set_pane_g6

0x84b2,	// (0x0004ae75) slider_set_pane_g7

0xb1c8,	// (0x0004db8b) slider_form_pane_g3

0xb1d1,	// (0x0004db94) slider_form_pane_g4

0xb1d9,	// (0x0004db9c) slider_form_pane_g5

0xb1c8,	// (0x0004db8b) slider_form_pane_g6

0xb1e1,	// (0x0004dba4) slider_form_pane_g7

0xb7f7,	// (0x0004e1ba) slider_set_pane_vc_g3

0xb800,	// (0x0004e1c3) slider_set_pane_vc_g4

0xb809,	// (0x0004e1cc) slider_set_pane_vc_g5

0xb7f7,	// (0x0004e1ba) slider_set_pane_vc_g6

0xb812,	// (0x0004e1d5) slider_set_pane_vc_g7

0xb9c4,	// (0x0004e387) slider_form_pane_vc_g1

0xb9cd,	// (0x0004e390) slider_form_pane_vc_g2

0xb9d6,	// (0x0004e399) slider_form_pane_vc_g3

0xb9c4,	// (0x0004e387) slider_form_pane_vc_g4

0xb9df,	// (0x0004e3a2) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x00052461) slider_form_pane_vc_g

0x09a3,	// (0x00043366) main_idle_act3_pane

0xd39a,	// (0x0004fd5d) ai3_links_pane

0xd3a3,	// (0x0004fd66) popup_ai3_data_window_ParamLimits

0xd3a3,	// (0x0004fd66) popup_ai3_data_window

0x09a3,	// (0x00043366) grid_ai3_links_pane

0xd3bb,	// (0x0004fd7e) cell_ai3_links_pane_ParamLimits

0xd3bb,	// (0x0004fd7e) cell_ai3_links_pane

0xd3d3,	// (0x0004fd96) bg_popup_sub_pane_cp11

0xd3e0,	// (0x0004fda3) cell_ai3_links_pane_g1

0x09a3,	// (0x00043366) bg_popup_sub_pane_cp12

0xd405,	// (0x0004fdc8) heading_ai3_data_pane

0xd40d,	// (0x0004fdd0) list_ai3_gene_pane

0xd419,	// (0x0004fddc) popup_ai3_data_window_g1

0xd421,	// (0x0004fde4) heading_ai3_data_pane_g1

0xd429,	// (0x0004fdec) heading_ai3_data_pane_t1

0xd437,	// (0x0004fdfa) list_double_ai3_gene_pane_ParamLimits

0xd437,	// (0x0004fdfa) list_double_ai3_gene_pane

0xd444,	// (0x0004fe07) list_single_ai3_gene_pane_ParamLimits

0xd444,	// (0x0004fe07) list_single_ai3_gene_pane

0xc21c,	// (0x0004ebdf) list_highlight_pane_cp7_ParamLimits

0xc21c,	// (0x0004ebdf) list_highlight_pane_cp7

0xd451,	// (0x0004fe14) list_single_a13_gene_pane_t1_ParamLimits

0xd451,	// (0x0004fe14) list_single_a13_gene_pane_t1

0xd468,	// (0x0004fe2b) list_single_ai3_gene_pane_g1

0xd471,	// (0x0004fe34) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0005269c) list_single_ai3_gene_pane_g

0xd479,	// (0x0004fe3c) list_double_ai3_gene_pane_g1_ParamLimits

0xd479,	// (0x0004fe3c) list_double_ai3_gene_pane_g1

0xd485,	// (0x0004fe48) list_double_ai3_gene_pane_t1_ParamLimits

0xd485,	// (0x0004fe48) list_double_ai3_gene_pane_t1

0xd4a1,	// (0x0004fe64) list_double_ai3_gene_pane_t2_ParamLimits

0xd4a1,	// (0x0004fe64) list_double_ai3_gene_pane_t2

0xd4b6,	// (0x0004fe79) list_double_ai3_gene_pane_t3_ParamLimits

0xd4b6,	// (0x0004fe79) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x000526a1) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x000526a1) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6488,	// (0x00048e4b) aid_size_min_col_2

0xd364,	// (0x0004fd27) aid_size_min_msg_ParamLimits

0xd364,	// (0x0004fd27) aid_size_min_msg

0xc61b,	// (0x0004efde) fep_vkb_top_text_pane_g2_ParamLimits

0xc61b,	// (0x0004efde) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x00052514) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x00052514) fep_vkb_top_text_pane_g

0x09a3,	// (0x00043366) main_hc_apps_shell_pane

0xd4d3,	// (0x0004fe96) grid_hc_apps_pane_ParamLimits

0xd4d3,	// (0x0004fe96) grid_hc_apps_pane

0xd4e2,	// (0x0004fea5) list_hc_apps_pane

0xd4ea,	// (0x0004fead) scroll_pane_cp37_ParamLimits

0xd4ea,	// (0x0004fead) scroll_pane_cp37

0xd4f6,	// (0x0004feb9) cell_hc_apps_pane_ParamLimits

0xd4f6,	// (0x0004feb9) cell_hc_apps_pane

0xd5a4,	// (0x0004ff67) cell_hc_apps_pane_g1_ParamLimits

0xd5a4,	// (0x0004ff67) cell_hc_apps_pane_g1

0xd5d5,	// (0x0004ff98) cell_hc_apps_pane_g2_ParamLimits

0xd5d5,	// (0x0004ff98) cell_hc_apps_pane_g2

0xd5f1,	// (0x0004ffb4) cell_hc_apps_pane_g3_ParamLimits

0xd5f1,	// (0x0004ffb4) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x000526a8) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x000526a8) cell_hc_apps_pane_g

0xd613,	// (0x0004ffd6) cell_hc_apps_pane_t1_ParamLimits

0xd613,	// (0x0004ffd6) cell_hc_apps_pane_t1

0x0b3d,	// (0x00043500) grid_highlight_pane_cp10_ParamLimits

0x0b3d,	// (0x00043500) grid_highlight_pane_cp10

0xd653,	// (0x00050016) list_single_hc_apps_pane_ParamLimits

0xd653,	// (0x00050016) list_single_hc_apps_pane

0xd6b6,	// (0x00050079) list_single_hc_apps_pane_g1

0x8b6d,	// (0x0004b530) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x000526af) list_single_hc_apps_pane_g

0x8b86,	// (0x0004b549) list_single_hc_apps_pane_g2_copy1

0x6547,	// (0x00048f0a) list_single_hc_apps_pane_t1

0x0a13,	// (0x000433d6) bg_set_opt_pane_cp_ParamLimits

0x6a5a,	// (0x0004941d) setting_slider_pane_t1_ParamLimits

0x6a73,	// (0x00049436) setting_slider_pane_t2_ParamLimits

0x6a8d,	// (0x00049450) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00051f21) setting_slider_pane_t_ParamLimits

0x6aa5,	// (0x00049468) slider_set_pane_ParamLimits

0x7a83,	// (0x0004a446) control_pane_g5_ParamLimits

0x7a83,	// (0x0004a446) control_pane_g5

0xb01b,	// (0x0004d9de) slider_set_pane_g1_ParamLimits

0x8464,	// (0x0004ae27) slider_set_pane_g2_ParamLimits

0x8470,	// (0x0004ae33) slider_set_pane_g3_ParamLimits

0x8484,	// (0x0004ae47) slider_set_pane_g4_ParamLimits

0x849c,	// (0x0004ae5f) slider_set_pane_g5_ParamLimits

0x8470,	// (0x0004ae33) slider_set_pane_g6_ParamLimits

0x84b2,	// (0x0004ae75) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00052322) slider_set_pane_g_ParamLimits

0x4a51,	// (0x00047414) navi_icon_text_pane_ParamLimits

0x97d7,	// (0x0004c19a) aid_fill_nsta_2_ParamLimits

0x9816,	// (0x0004c1d9) aid_touch_tab_arrow_left_ParamLimits

0x9825,	// (0x0004c1e8) aid_touch_tab_arrow_right_ParamLimits

0x9892,	// (0x0004c255) clock_nsta_pane_ParamLimits

0xab1e,	// (0x0004d4e1) navi_icon_pane_g1_ParamLimits

0xab2a,	// (0x0004d4ed) navi_text_pane_t1_ParamLimits

0xbdf0,	// (0x0004e7b3) navi_icon_text_pane_g1_ParamLimits

0xbdfc,	// (0x0004e7bf) navi_icon_text_pane_t1_ParamLimits

0xd6b6,	// (0x00050079) list_single_hc_apps_pane_g1_ParamLimits

0x8b6d,	// (0x0004b530) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x000526af) list_single_hc_apps_pane_g_ParamLimits

0x8b86,	// (0x0004b549) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6547,	// (0x00048f0a) list_single_hc_apps_pane_t1_ParamLimits

0x689e,	// (0x00049261) popup_toolbar2_fixed_window_ParamLimits

0x689e,	// (0x00049261) popup_toolbar2_fixed_window

0x8082,	// (0x0004aa45) popup_toolbar2_float_window

0x09a3,	// (0x00043366) bg_popup_sub_pane_cp27

0xd6cf,	// (0x00050092) grid_toolbar2_float_pane

0x09a3,	// (0x00043366) bg_popup_sub_pane_cp26

0xd6cf,	// (0x00050092) grid_toolbar2_fixed_pane

0xd6d7,	// (0x0005009a) cell_toolbar2_fixed_pane_ParamLimits

0xd6d7,	// (0x0005009a) cell_toolbar2_fixed_pane

0xd6e7,	// (0x000500aa) cell_toolbar2_fixed_pane_g1

0x9c2c,	// (0x0004c5ef) toolbar2_fixed_button_pane

0x9cac,	// (0x0004c66f) toolbar2_fixed_button_pane_g1

0x9cb4,	// (0x0004c677) toolbar2_fixed_button_pane_g2

0x9cbc,	// (0x0004c67f) toolbar2_fixed_button_pane_g3

0x9cc4,	// (0x0004c687) toolbar2_fixed_button_pane_g4

0x9ccc,	// (0x0004c68f) toolbar2_fixed_button_pane_g5

0x9cd4,	// (0x0004c697) toolbar2_fixed_button_pane_g6

0x9cdc,	// (0x0004c69f) toolbar2_fixed_button_pane_g7

0x9ce4,	// (0x0004c6a7) toolbar2_fixed_button_pane_g8

0x9cec,	// (0x0004c6af) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00052224) toolbar2_fixed_button_pane_g

0xd6f0,	// (0x000500b3) cell_toolbar2_float_pane_ParamLimits

0xd6f0,	// (0x000500b3) cell_toolbar2_float_pane

0xd701,	// (0x000500c4) cell_toolbar2_float_pane_g1

0x9c2c,	// (0x0004c5ef) toolbar2_fixed_button_pane_cp

0xc385,	// (0x0004ed48) fep_vkb_accented_list_pane_ParamLimits

0xc385,	// (0x0004ed48) fep_vkb_accented_list_pane

0x8976,	// (0x0004b339) bg_popup_fep_shadow_pane_g9

0x4ba3,	// (0x00047566) bg_popup_fep_shadow_pane_cp3

0x0ecb,	// (0x0004388e) list_accented_list_pane

0xd70a,	// (0x000500cd) list_single_accented_list_pane_ParamLimits

0xd70a,	// (0x000500cd) list_single_accented_list_pane

0x4ba3,	// (0x00047566) list_highlight_pane_cp10

0xd71b,	// (0x000500de) list_single_accented_list_pane_t1

0x7fd2,	// (0x0004a995) popup_slider_window_ParamLimits

0x7fd2,	// (0x0004a995) popup_slider_window

0xd35b,	// (0x0004fd1e) aid_indentation_list_msg

0xd7d9,	// (0x0005019c) bg_popup_window_pane_cp19

0xd841,	// (0x00050204) popup_slider_window_g1

0xd85d,	// (0x00050220) popup_slider_window_g2

0xd879,	// (0x0005023c) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x000526b4) popup_slider_window_g

0xd8df,	// (0x000502a2) popup_slider_window_t1

0xd953,	// (0x00050316) small_volume_slider_vertical_pane

0xc257,	// (0x0004ec1a) small_volume_slider_vertical_pane_g1

0xc257,	// (0x0004ec1a) small_volume_slider_vertical_pane_g2

0xd96f,	// (0x00050332) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x000526c6) small_volume_slider_vertical_pane_g

0x666e,	// (0x00049031) area_side_right_pane_ParamLimits

0x666e,	// (0x00049031) area_side_right_pane

0x8ba2,	// (0x0004b565) aid_size_side_button_ParamLimits

0x8ba2,	// (0x0004b565) aid_size_side_button

0x8bb6,	// (0x0004b579) grid_sctrl_middle_pane_ParamLimits

0x8bb6,	// (0x0004b579) grid_sctrl_middle_pane

0x8bd5,	// (0x0004b598) sctrl_sk_bottom_pane

0x8be6,	// (0x0004b5a9) sctrl_sk_top_pane

0x8bf8,	// (0x0004b5bb) aid_touch_sctrl_top

0x0b3d,	// (0x00043500) bg_sctrl_sk_pane_ParamLimits

0x0b3d,	// (0x00043500) bg_sctrl_sk_pane

0x8c05,	// (0x0004b5c8) sctrl_sk_top_pane_g1

0x8c12,	// (0x0004b5d5) sctrl_sk_top_pane_t1

0x8bf8,	// (0x0004b5bb) aid_touch_sctrl_bottom

0x0b3d,	// (0x00043500) bg_sctrl_sk_pane_cp_ParamLimits

0x0b3d,	// (0x00043500) bg_sctrl_sk_pane_cp

0x8c2d,	// (0x0004b5f0) sctrl_sk_bottom_pane_g1

0x8c12,	// (0x0004b5d5) sctrl_sk_bottom_pane_t1

0x8c36,	// (0x0004b5f9) cell_sctrl_middle_pane_ParamLimits

0x8c36,	// (0x0004b5f9) cell_sctrl_middle_pane

0x8c51,	// (0x0004b614) aid_touch_sctrl_middle_ParamLimits

0x8c51,	// (0x0004b614) aid_touch_sctrl_middle

0x0dc5,	// (0x00043788) bg_sctrl_middle_pane_ParamLimits

0x0dc5,	// (0x00043788) bg_sctrl_middle_pane

0xc4c7,	// (0x0004ee8a) cell_sctrl_middle_pane_g1_ParamLimits

0xc4c7,	// (0x0004ee8a) cell_sctrl_middle_pane_g1

0x8c63,	// (0x0004b626) cell_sctrl_middle_pane_g2_ParamLimits

0x8c63,	// (0x0004b626) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x000526d2) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x000526d2) cell_sctrl_middle_pane_g

0x9cac,	// (0x0004c66f) bg_sctrl_middle_pane_g1

0x9cb4,	// (0x0004c677) bg_sctrl_middle_pane_g2

0x9cbc,	// (0x0004c67f) bg_sctrl_middle_pane_g3

0x9cc4,	// (0x0004c687) bg_sctrl_middle_pane_g4

0x9ccc,	// (0x0004c68f) bg_sctrl_middle_pane_g5

0x9cd4,	// (0x0004c697) bg_sctrl_middle_pane_g6

0x9cdc,	// (0x0004c69f) bg_sctrl_middle_pane_g7

0x9ce4,	// (0x0004c6a7) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x000526d7) bg_sctrl_middle_pane_g

0x9cec,	// (0x0004c6af) bg_sctrl_middle_pane_g8_copy1

0x9cac,	// (0x0004c66f) bg_sctrl_sk_pane_g1

0x9cb4,	// (0x0004c677) bg_sctrl_sk_pane_g2

0x9cbc,	// (0x0004c67f) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00052224) bg_sctrl_sk_pane_g

0x0d07,	// (0x000436ca) aid_size_touch_scroll_bar

0x9cc4,	// (0x0004c687) bg_sctrl_sk_pane_g4

0x9ccc,	// (0x0004c68f) bg_sctrl_sk_pane_g5

0x9cd4,	// (0x0004c697) bg_sctrl_sk_pane_g6

0x9cdc,	// (0x0004c69f) bg_sctrl_sk_pane_g7

0x9ce4,	// (0x0004c6a7) bg_sctrl_sk_pane_g8

0x9cec,	// (0x0004c6af) bg_sctrl_sk_pane_g9

0x7c3b,	// (0x0004a5fe) popup_fep_china_hwr2_fs_candidate_window

0x7c45,	// (0x0004a608) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7c45,	// (0x0004a608) popup_fep_china_hwr2_fs_control_window

0xc4c7,	// (0x0004ee8a) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x000526cd) sctrl_sk_top_pane_g

0xd978,	// (0x0005033b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd978,	// (0x0005033b) aid_fep_china_hwr2_fs_cell

0xd98a,	// (0x0005034d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd98a,	// (0x0005034d) bg_popup_fep_shadow_pane_cp4

0xd9a1,	// (0x00050364) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9a1,	// (0x00050364) bg_popup_fep_shadow_pane_cp5

0xd9b3,	// (0x00050376) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9b3,	// (0x00050376) popup_fep_china_hwr2_fs_control_bar_grid

0xd9c3,	// (0x00050386) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9cb,	// (0x0005038e) aid_fep_china_hwr2_fs_candi_cell

0x09a3,	// (0x00043366) bg_popup_fep_shadow_pane_cp6

0xd9d5,	// (0x00050398) popup_fep_china_hwr2_fs_candidate_grid

0xd9df,	// (0x000503a2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9df,	// (0x000503a2) cell_fep_china_hwr2_fs_funtion_grid

0xc257,	// (0x0004ec1a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd9f7,	// (0x000503ba) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd9f7,	// (0x000503ba) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda05,	// (0x000503c8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda05,	// (0x000503c8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x000526e8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x000526e8) cell_fep_china_hwr2_fs_funtion_grid_g

0xda1b,	// (0x000503de) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda1b,	// (0x000503de) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda30,	// (0x000503f3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda30,	// (0x000503f3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x000526ed) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x000526ed) cell_fep_china_hwr2_fs_funtion_grid_t

0xda4c,	// (0x0005040f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda54,	// (0x00050417) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda5c,	// (0x0005041f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x000526f2) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda64,	// (0x00050427) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda64,	// (0x00050427) cell_fep_china_hwr2_fs_candidate_grid

0xda7d,	// (0x00050440) popup_fep_china_hwr2_fs_candidate_grid_g20

0xda85,	// (0x00050448) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc257,	// (0x0004ec1a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc257,	// (0x0004ec1a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x00052519) cell_fep_china_hwr2_fs_candidate_grid_g

0xda8d,	// (0x00050450) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98a5,	// (0x0004c268) clock_nsta_pane_cp_24_ParamLimits

0x98a5,	// (0x0004c268) clock_nsta_pane_cp_24

0x9923,	// (0x0004c2e6) indicator_nsta_pane_cp_24_ParamLimits

0x9923,	// (0x0004c2e6) indicator_nsta_pane_cp_24

0xa99a,	// (0x0004d35d) heading_pane_g1

0x0001,

0xf8c6,	// (0x00052289) heading_pane_g

0xb395,	// (0x0004dd58) grid_sct_catagory_button_pane

0xb3c5,	// (0x0004dd88) scroll_pane_cp5_ParamLimits

0xbe3e,	// (0x0004e801) button_value_adjust_pane_cp5_ParamLimits

0xbe3e,	// (0x0004e801) button_value_adjust_pane_cp5

0xbf1d,	// (0x0004e8e0) form2_midp_time_pane_ParamLimits

0xda9b,	// (0x0005045e) cell_sct_catagory_button_pane_ParamLimits

0xda9b,	// (0x0005045e) cell_sct_catagory_button_pane

0xc21c,	// (0x0004ebdf) bg_button_pane_cp01_ParamLimits

0xc21c,	// (0x0004ebdf) bg_button_pane_cp01

0xc257,	// (0x0004ec1a) cell_sct_catagory_button_pane_g1

0x8011,	// (0x0004a9d4) popup_tb_extension_window

0xdaad,	// (0x00050470) aid_size_cell_ext_ParamLimits

0xdaad,	// (0x00050470) aid_size_cell_ext

0x0b3d,	// (0x00043500) bg_tb_trans_pane_cp1_ParamLimits

0x0b3d,	// (0x00043500) bg_tb_trans_pane_cp1

0xdacd,	// (0x00050490) grid_tb_ext_pane_ParamLimits

0xdacd,	// (0x00050490) grid_tb_ext_pane

0xdafd,	// (0x000504c0) cell_tb_ext_pane_ParamLimits

0xdafd,	// (0x000504c0) cell_tb_ext_pane

0xdb14,	// (0x000504d7) cell_tb_ext_pane_g1_ParamLimits

0xdb14,	// (0x000504d7) cell_tb_ext_pane_g1

0xdb31,	// (0x000504f4) cell_tb_ext_pane_t1

0x0b3d,	// (0x00043500) list_highlight_pane_cp11_ParamLimits

0x0b3d,	// (0x00043500) list_highlight_pane_cp11

0x68bd,	// (0x00049280) popup_uni_indicator_window_ParamLimits

0x68bd,	// (0x00049280) popup_uni_indicator_window

0x0dc5,	// (0x00043788) bg_popup_sub_pane_cp14

0xdb4d,	// (0x00050510) list_uniindi_pane

0xdb59,	// (0x0005051c) uniindi_top_pane

0x0b3d,	// (0x00043500) bg_uniindi_top_pane

0xdb78,	// (0x0005053b) uniindi_top_pane_g1

0xdb8e,	// (0x00050551) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x000526f9) uniindi_top_pane_g

0xdbb8,	// (0x0005057b) uniindi_top_pane_t1

0xdbe2,	// (0x000505a5) list_single_uniindi_pane_ParamLimits

0xdbe2,	// (0x000505a5) list_single_uniindi_pane

0xc257,	// (0x0004ec1a) bg_uniindi_top_pane_g1

0xdbf4,	// (0x000505b7) list_single_uniindi_pane_g1

0xdc07,	// (0x000505ca) list_single_uniindi_pane_t1

0x09a3,	// (0x00043366) control_bg_pane

0xdc2c,	// (0x000505ef) bg_sctrl_sk_pane_cp1

0xdc35,	// (0x000505f8) bg_sctrl_sk_pane_cp2

0xdc3e,	// (0x00050601) control_bg_pane_g1

0xdc47,	// (0x0005060a) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x00052702) control_bg_pane_g

0xbc94,	// (0x0004e657) cell_indicator_nsta_pane_g1_ParamLimits

0xbca2,	// (0x0004e665) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x0005247d) cell_indicator_nsta_pane_g_ParamLimits

0x62d5,	// (0x00048c98) form2_midp_time_pane_t1_ParamLimits

0x0cb9,	// (0x0004367c) main_idle_act4_pane_ParamLimits

0x0cb9,	// (0x0004367c) main_idle_act4_pane

0x8011,	// (0x0004a9d4) popup_tb_extension_window_ParamLimits

0xdaed,	// (0x000504b0) tb_ext_find_pane_ParamLimits

0xdaed,	// (0x000504b0) tb_ext_find_pane

0xdc50,	// (0x00050613) ai_gene_pane_1_cp1

0x4c24,	// (0x000475e7) ai_gene_pane_2_cp1

0xdc58,	// (0x0005061b) list_single_idle_plugin_calendar_pane

0xdc61,	// (0x00050624) list_single_idle_plugin_notification_pane

0xdc6a,	// (0x0005062d) list_single_idle_plugin_player_pane

0xdc73,	// (0x00050636) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc73,	// (0x00050636) list_single_idle_plugin_shortcut_pane

0xdc95,	// (0x00050658) main_idle_act4_pane_t1

0xdca7,	// (0x0005066a) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x00052707) main_idle_act4_pane_t

0xdcb9,	// (0x0005067c) middle_sk_idle_act4_pane_ParamLimits

0xdcb9,	// (0x0005067c) middle_sk_idle_act4_pane

0xdccf,	// (0x00050692) popup_clock_digital_analogue_window_cp2

0xdce9,	// (0x000506ac) shortcut_wheel_idle_act4_pane_ParamLimits

0xdce9,	// (0x000506ac) shortcut_wheel_idle_act4_pane

0xc257,	// (0x0004ec1a) shortcut_wheel_idle_act4_pane_g1

0xc257,	// (0x0004ec1a) shortcut_wheel_idle_act4_pane_g2

0xc257,	// (0x0004ec1a) shortcut_wheel_idle_act4_pane_g3

0xc257,	// (0x0004ec1a) shortcut_wheel_idle_act4_pane_g4

0xc257,	// (0x0004ec1a) shortcut_wheel_idle_act4_pane_g5

0xdcfd,	// (0x000506c0) shortcut_wheel_idle_act4_pane_g6

0xdd05,	// (0x000506c8) shortcut_wheel_idle_act4_pane_g7

0xdd0d,	// (0x000506d0) shortcut_wheel_idle_act4_pane_g8

0xdd15,	// (0x000506d8) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x0005270c) shortcut_wheel_idle_act4_pane_g

0xc4c7,	// (0x0004ee8a) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4c7,	// (0x0004ee8a) middle_sk_idle_act4_pane_g1

0xdd79,	// (0x0005073c) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd79,	// (0x0005073c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x0005272f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x0005272f) middle_sk_idle_act4_pane_g

0xdd85,	// (0x00050748) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd85,	// (0x00050748) middle_sk_idle_act4_pane_t1

0xdda2,	// (0x00050765) grid_ai_shortcut_pane_ParamLimits

0xdda2,	// (0x00050765) grid_ai_shortcut_pane

0xddbb,	// (0x0005077e) list_highlight_pane_cp16_ParamLimits

0xddbb,	// (0x0005077e) list_highlight_pane_cp16

0xddc8,	// (0x0005078b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddc8,	// (0x0005078b) list_single_idle_plugin_shortcut_pane_g1

0xddd4,	// (0x00050797) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xddd4,	// (0x00050797) list_single_idle_plugin_shortcut_pane_g2

0xddec,	// (0x000507af) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xddec,	// (0x000507af) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x00052734) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x00052734) list_single_idle_plugin_shortcut_pane_g

0xddff,	// (0x000507c2) cell_ai_shortcut_pane_ParamLimits

0xddff,	// (0x000507c2) cell_ai_shortcut_pane

0xde23,	// (0x000507e6) cell_ai_shortcut_pane_g1_ParamLimits

0xde23,	// (0x000507e6) cell_ai_shortcut_pane_g1

0xdc50,	// (0x00050613) ai_gene_pane_1_cp2

0xde45,	// (0x00050808) ai_gene_pane_2_cp2

0xde4d,	// (0x00050810) list_highlight_pane_cp15

0xde56,	// (0x00050819) list_single_idle_plugin_calendar_pane_g1

0xde4d,	// (0x00050810) list_highlight_pane_cp17

0xde5e,	// (0x00050821) list_single_idle_plugin_calendar_pane_g1_copy1

0xde66,	// (0x00050829) list_single_idle_plugin_player_pane_g1

0xb5ee,	// (0x0004dfb1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x0005273b) list_single_idle_plugin_player_pane_g

0xde6e,	// (0x00050831) list_single_idle_plugin_player_pane_t1

0xde7c,	// (0x0005083f) list_single_idle_plugin_player_pane_t2

0xde8a,	// (0x0005084d) list_single_idle_plugin_player_pane_t3

0xde98,	// (0x0005085b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x00052740) list_single_idle_plugin_player_pane_t

0xdea6,	// (0x00050869) wait_bar_pane_cp15

0xdeae,	// (0x00050871) grid_ai_notification_pane

0xb5ee,	// (0x0004dfb1) list_single_idle_plugin_notification_pane_g1

0xdeb7,	// (0x0005087a) cell_ai_notification_pane_ParamLimits

0xdeb7,	// (0x0005087a) cell_ai_notification_pane

0xdec4,	// (0x00050887) cell_ai_notification_pane_g1

0xdecc,	// (0x0005088f) cell_ai_notification_pane_t1

0xdeda,	// (0x0005089d) tb_ext_find_button_pane

0xdee2,	// (0x000508a5) tb_ext_find_pane_g1

0xdeea,	// (0x000508ad) tb_ext_find_pane_t1

0x11f8,	// (0x00043bbb) tb_ext_find_button_pane_g1

0xdef8,	// (0x000508bb) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x00052749) tb_ext_find_button_pane_g

0xdc95,	// (0x00050658) main_idle_act4_pane_t1_ParamLimits

0xdca7,	// (0x0005066a) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x00052707) main_idle_act4_pane_t_ParamLimits

0xdccf,	// (0x00050692) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdcdd,	// (0x000506a0) sat_plugin_idle_act4_pane_ParamLimits

0xdcdd,	// (0x000506a0) sat_plugin_idle_act4_pane

0xdf01,	// (0x000508c4) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf01,	// (0x000508c4) sat_plugin_idle_act4_pane_t1

0xdf14,	// (0x000508d7) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf14,	// (0x000508d7) sat_plugin_idle_act4_pane_t2

0xdf27,	// (0x000508ea) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf27,	// (0x000508ea) sat_plugin_idle_act4_pane_t3

0xdf3a,	// (0x000508fd) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf3a,	// (0x000508fd) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x0005274e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x0005274e) sat_plugin_idle_act4_pane_t

0x6806,	// (0x000491c9) popup_battery_window_ParamLimits

0x6806,	// (0x000491c9) popup_battery_window

0x0b3d,	// (0x00043500) bg_popup_sub_pane_cp25_ParamLimits

0x0b3d,	// (0x00043500) bg_popup_sub_pane_cp25

0xdf4d,	// (0x00050910) popup_battery_window_g1_ParamLimits

0xdf4d,	// (0x00050910) popup_battery_window_g1

0xdf59,	// (0x0005091c) popup_battery_window_t1_ParamLimits

0xdf59,	// (0x0005091c) popup_battery_window_t1

0xdf6b,	// (0x0005092e) popup_battery_window_t2_ParamLimits

0xdf6b,	// (0x0005092e) popup_battery_window_t2

0x0001,

0xfd94,	// (0x00052757) popup_battery_window_t_ParamLimits

0xfd94,	// (0x00052757) popup_battery_window_t

0x77e9,	// (0x0004a1ac) midp_canvas_pane_ParamLimits

0x7862,	// (0x0004a225) midp_keypad_pane_ParamLimits

0x7862,	// (0x0004a225) midp_keypad_pane

0x9785,	// (0x0004c148) main_midp_pane_ParamLimits

0xbcfe,	// (0x0004e6c1) signal_pane_g2_cp_ParamLimits

0xdf88,	// (0x0005094b) aid_size_cell_midp_keypad_ParamLimits

0xdf88,	// (0x0005094b) aid_size_cell_midp_keypad

0xdfa2,	// (0x00050965) midp_keyp_game_grid_pane_ParamLimits

0xdfa2,	// (0x00050965) midp_keyp_game_grid_pane

0xdfc2,	// (0x00050985) midp_keyp_rocker_pane_ParamLimits

0xdfc2,	// (0x00050985) midp_keyp_rocker_pane

0xdffb,	// (0x000509be) midp_keyp_sk_left_pane_ParamLimits

0xdffb,	// (0x000509be) midp_keyp_sk_left_pane

0xe055,	// (0x00050a18) midp_keyp_sk_right_pane_ParamLimits

0xe055,	// (0x00050a18) midp_keyp_sk_right_pane

0x09a3,	// (0x00043366) bg_button_pane_cp03

0xe0af,	// (0x00050a72) midp_keyp_sk_left_pane_g1

0x09a3,	// (0x00043366) bg_button_pane_cp04

0xe0af,	// (0x00050a72) midp_keyp_sk_right_pane_g1

0xc257,	// (0x0004ec1a) midp_keyp_rocker_pane_g1

0xe0b8,	// (0x00050a7b) keyp_game_cell_pane_ParamLimits

0xe0b8,	// (0x00050a7b) keyp_game_cell_pane

0x09a3,	// (0x00043366) bg_button_pane_cp02

0xe0cb,	// (0x00050a8e) keyp_game_cell_pane_g1

0x683c,	// (0x000491ff) popup_fep_vkb2_window_ParamLimits

0x683c,	// (0x000491ff) popup_fep_vkb2_window

0x8c81,	// (0x0004b644) aid_size_cell_vkb2_ParamLimits

0x8c81,	// (0x0004b644) aid_size_cell_vkb2

0x8cd5,	// (0x0004b698) popup_fep_vkb2_window_g1_ParamLimits

0x8cd5,	// (0x0004b698) popup_fep_vkb2_window_g1

0x8d1d,	// (0x0004b6e0) vkb2_area_bottom_pane_ParamLimits

0x8d1d,	// (0x0004b6e0) vkb2_area_bottom_pane

0x8d69,	// (0x0004b72c) vkb2_area_keypad_pane_ParamLimits

0x8d69,	// (0x0004b72c) vkb2_area_keypad_pane

0x8dab,	// (0x0004b76e) vkb2_area_top_pane_ParamLimits

0x8dab,	// (0x0004b76e) vkb2_area_top_pane

0x8e25,	// (0x0004b7e8) vkb2_top_entry_pane_ParamLimits

0x8e25,	// (0x0004b7e8) vkb2_top_entry_pane

0x8e4f,	// (0x0004b812) vkb2_top_grid_left_pane_ParamLimits

0x8e4f,	// (0x0004b812) vkb2_top_grid_left_pane

0x8e6d,	// (0x0004b830) vkb2_top_grid_right_pane_ParamLimits

0x8e6d,	// (0x0004b830) vkb2_top_grid_right_pane

0x8e8b,	// (0x0004b84e) vkb2_cell_keypad_pane_ParamLimits

0x8e8b,	// (0x0004b84e) vkb2_cell_keypad_pane

0x8f5c,	// (0x0004b91f) vkb2_area_bottom_grid_pane_ParamLimits

0x8f5c,	// (0x0004b91f) vkb2_area_bottom_grid_pane

0x8f82,	// (0x0004b945) vkb2_area_bottom_pane_g1_ParamLimits

0x8f82,	// (0x0004b945) vkb2_area_bottom_pane_g1

0x8fa6,	// (0x0004b969) vkb2_area_bottom_pane_g2_ParamLimits

0x8fa6,	// (0x0004b969) vkb2_area_bottom_pane_g2

0x8fd4,	// (0x0004b997) vkb2_area_bottom_pane_g3_ParamLimits

0x8fd4,	// (0x0004b997) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x0005275c) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x0005275c) vkb2_area_bottom_pane_g

0x9035,	// (0x0004b9f8) vkb2_top_cell_left_pane_ParamLimits

0x9035,	// (0x0004b9f8) vkb2_top_cell_left_pane

0xe0dc,	// (0x00050a9f) vkb2_top_entry_pane_g1_ParamLimits

0xe0dc,	// (0x00050a9f) vkb2_top_entry_pane_g1

0xe0ea,	// (0x00050aad) vkb2_top_entry_pane_t1_ParamLimits

0xe0ea,	// (0x00050aad) vkb2_top_entry_pane_t1

0xe11c,	// (0x00050adf) vkb2_top_entry_pane_t2_ParamLimits

0xe11c,	// (0x00050adf) vkb2_top_entry_pane_t2

0xe14e,	// (0x00050b11) vkb2_top_entry_pane_t3_ParamLimits

0xe14e,	// (0x00050b11) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x00052763) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x00052763) vkb2_top_entry_pane_t

0x9082,	// (0x0004ba45) vkb2_top_grid_right_pane_g1_ParamLimits

0x9082,	// (0x0004ba45) vkb2_top_grid_right_pane_g1

0x9098,	// (0x0004ba5b) vkb2_top_grid_right_pane_g2_ParamLimits

0x9098,	// (0x0004ba5b) vkb2_top_grid_right_pane_g2

0x90b0,	// (0x0004ba73) vkb2_top_grid_right_pane_g3_ParamLimits

0x90b0,	// (0x0004ba73) vkb2_top_grid_right_pane_g3

0x90c8,	// (0x0004ba8b) vkb2_top_grid_right_pane_g4_ParamLimits

0x90c8,	// (0x0004ba8b) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x0005276a) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x0005276a) vkb2_top_grid_right_pane_g

0x90de,	// (0x0004baa1) vkb2_top_cell_left_pane_g1

0x90f5,	// (0x0004bab8) vkb2_cell_keypad_pane_g1_ParamLimits

0x90f5,	// (0x0004bab8) vkb2_cell_keypad_pane_g1

0xe172,	// (0x00050b35) vkb2_cell_keypad_pane_t1_ParamLimits

0xe172,	// (0x00050b35) vkb2_cell_keypad_pane_t1

0x9103,	// (0x0004bac6) vkb2_cell_bottom_grid_pane_ParamLimits

0x9103,	// (0x0004bac6) vkb2_cell_bottom_grid_pane

0x913c,	// (0x0004baff) vkb2_cell_bottom_grid_pane_g1

0xdd1d,	// (0x000506e0) aid_call2_pane_cp02

0xdd25,	// (0x000506e8) aid_call_pane_cp02

0xdd2d,	// (0x000506f0) clock_digital_number_pane_cp10

0xdd35,	// (0x000506f8) clock_digital_number_pane_cp11

0xdd3d,	// (0x00050700) clock_digital_number_pane_cp12

0xdd45,	// (0x00050708) clock_digital_number_pane_cp13

0xdd4d,	// (0x00050710) clock_digital_separator_pane_cp10

0x11f8,	// (0x00043bbb) popup_clock_digital_analogue_window_cp2_g1

0x11f8,	// (0x00043bbb) popup_clock_digital_analogue_window_cp2_g2

0xdd55,	// (0x00050718) popup_clock_digital_analogue_window_cp2_g3

0x11f8,	// (0x00043bbb) popup_clock_digital_analogue_window_cp2_g4

0xdd55,	// (0x00050718) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x0005271f) popup_clock_digital_analogue_window_cp2_g

0xdd5d,	// (0x00050720) popup_clock_digital_analogue_window_cp2_t1

0xdd6b,	// (0x0005072e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x0005272a) popup_clock_digital_analogue_window_cp2_t

0xc257,	// (0x0004ec1a) clock_digital_number_pane_cp10_g1

0xc257,	// (0x0004ec1a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x00052519) clock_digital_number_pane_cp10_g

0xc257,	// (0x0004ec1a) clock_digital_separator_pane_cp10_g1

0xc257,	// (0x0004ec1a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x00052519) clock_digital_separator_pane_cp10_g

0xdb9a,	// (0x0005055d) uniindi_top_pane_g3

0xdbab,	// (0x0005056e) uniindi_top_pane_g4

0x8f16,	// (0x0004b8d9) vkb2_row_keypad_pane_ParamLimits

0x8f16,	// (0x0004b8d9) vkb2_row_keypad_pane

0x9158,	// (0x0004bb1b) vkb2_cell_t_keypad_pane_ParamLimits

0x9158,	// (0x0004bb1b) vkb2_cell_t_keypad_pane

0x9168,	// (0x0004bb2b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9168,	// (0x0004bb2b) vkb2_cell_t_keypad_pane_cp08

0x917b,	// (0x0004bb3e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x917b,	// (0x0004bb3e) vkb2_cell_t_keypad_pane_cp09

0x918f,	// (0x0004bb52) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x918f,	// (0x0004bb52) vkb2_cell_t_keypad_pane_cp01

0x91a0,	// (0x0004bb63) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x91a0,	// (0x0004bb63) vkb2_cell_t_keypad_pane_cp02

0x91b1,	// (0x0004bb74) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x91b1,	// (0x0004bb74) vkb2_cell_t_keypad_pane_cp03

0x91c2,	// (0x0004bb85) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x91c2,	// (0x0004bb85) vkb2_cell_t_keypad_pane_cp04

0x91d3,	// (0x0004bb96) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x91d3,	// (0x0004bb96) vkb2_cell_t_keypad_pane_cp05

0x91e4,	// (0x0004bba7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x91e4,	// (0x0004bba7) vkb2_cell_t_keypad_pane_cp06

0x91f5,	// (0x0004bbb8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x91f5,	// (0x0004bbb8) vkb2_cell_t_keypad_pane_cp07

0x9206,	// (0x0004bbc9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9206,	// (0x0004bbc9) vkb2_cell_t_keypad_pane_cp10

0xc4c7,	// (0x0004ee8a) vkb2_cell_t_keypad_pane_g1

0xe189,	// (0x00050b4c) vkb2_cell_t_keypad_pane_t1

0x09a3,	// (0x00043366) popup_grid_graphic2_window

0xe19b,	// (0x00050b5e) aid_size_cell_graphic2_ParamLimits

0xe19b,	// (0x00050b5e) aid_size_cell_graphic2

0xe1d3,	// (0x00050b96) bg_popup_window_pane_cp21_ParamLimits

0xe1d3,	// (0x00050b96) bg_popup_window_pane_cp21

0xe1e1,	// (0x00050ba4) graphic2_pages_pane_ParamLimits

0xe1e1,	// (0x00050ba4) graphic2_pages_pane

0xe227,	// (0x00050bea) grid_graphic2_control_pane_ParamLimits

0xe227,	// (0x00050bea) grid_graphic2_control_pane

0xe265,	// (0x00050c28) grid_graphic2_pane_ParamLimits

0xe265,	// (0x00050c28) grid_graphic2_pane

0xe2d9,	// (0x00050c9c) cell_graphic2_pane

0x09a3,	// (0x00043366) main_comp_mode_pane

0xd40d,	// (0x0004fdd0) list_ai3_gene_pane_ParamLimits

0xd7d9,	// (0x0005019c) bg_popup_window_pane_cp19_ParamLimits

0xd7e5,	// (0x000501a8) bg_touch_area_indi_pane_ParamLimits

0xd7e5,	// (0x000501a8) bg_touch_area_indi_pane

0xd7fb,	// (0x000501be) bg_touch_area_indi_pane_cp01_ParamLimits

0xd7fb,	// (0x000501be) bg_touch_area_indi_pane_cp01

0xd811,	// (0x000501d4) bg_touch_area_indi_pane_cp02_ParamLimits

0xd811,	// (0x000501d4) bg_touch_area_indi_pane_cp02

0xd827,	// (0x000501ea) bg_touch_area_indi_pane_cp03_ParamLimits

0xd827,	// (0x000501ea) bg_touch_area_indi_pane_cp03

0xd841,	// (0x00050204) popup_slider_window_g1_ParamLimits

0xd85d,	// (0x00050220) popup_slider_window_g2_ParamLimits

0xd879,	// (0x0005023c) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x000526b4) popup_slider_window_g_ParamLimits

0xd8df,	// (0x000502a2) popup_slider_window_t1_ParamLimits

0xd953,	// (0x00050316) small_volume_slider_vertical_pane_ParamLimits

0xe2d9,	// (0x00050c9c) cell_graphic2_pane_ParamLimits

0xe328,	// (0x00050ceb) bg_button_pane_cp10_ParamLimits

0xe328,	// (0x00050ceb) bg_button_pane_cp10

0xe33b,	// (0x00050cfe) bg_button_pane_cp11_ParamLimits

0xe33b,	// (0x00050cfe) bg_button_pane_cp11

0xe34e,	// (0x00050d11) graphic2_pages_pane_g1_ParamLimits

0xe34e,	// (0x00050d11) graphic2_pages_pane_g1

0xe369,	// (0x00050d2c) graphic2_pages_pane_g2_ParamLimits

0xe369,	// (0x00050d2c) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x00052778) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x00052778) graphic2_pages_pane_g

0xe381,	// (0x00050d44) graphic2_pages_pane_t1_ParamLimits

0xe381,	// (0x00050d44) graphic2_pages_pane_t1

0xe399,	// (0x00050d5c) cell_graphic2_control_pane_ParamLimits

0xe399,	// (0x00050d5c) cell_graphic2_control_pane

0xe3b7,	// (0x00050d7a) cell_graphic2_pane_g1_ParamLimits

0xe3b7,	// (0x00050d7a) cell_graphic2_pane_g1

0xe3c4,	// (0x00050d87) cell_graphic2_pane_g2_ParamLimits

0xe3c4,	// (0x00050d87) cell_graphic2_pane_g2

0xe3d1,	// (0x00050d94) cell_graphic2_pane_g3_ParamLimits

0xe3d1,	// (0x00050d94) cell_graphic2_pane_g3

0xe3de,	// (0x00050da1) cell_graphic2_pane_g4_ParamLimits

0xe3de,	// (0x00050da1) cell_graphic2_pane_g4

0xe3eb,	// (0x00050dae) cell_graphic2_pane_g5_ParamLimits

0xe3eb,	// (0x00050dae) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x0005277d) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x0005277d) cell_graphic2_pane_g

0xe406,	// (0x00050dc9) cell_graphic2_pane_t1_ParamLimits

0xe406,	// (0x00050dc9) cell_graphic2_pane_t1

0x9d20,	// (0x0004c6e3) grid_highlight_pane_cp11_ParamLimits

0x9d20,	// (0x0004c6e3) grid_highlight_pane_cp11

0x0b3d,	// (0x00043500) bg_button_pane_cp05

0xe43d,	// (0x00050e00) cell_graphic2_control_pane_g1

0xc257,	// (0x0004ec1a) bg_touch_area_indi_pane_g1

0xe465,	// (0x00050e28) aid_cmod_rocker_key_size

0xe46f,	// (0x00050e32) aid_cmode_itu_key_size

0xe479,	// (0x00050e3c) main_cmode_video_pane

0xe483,	// (0x00050e46) main_comp_mode_itu_pane

0xe48f,	// (0x00050e52) main_comp_mode_rocker_pane

0xe49b,	// (0x00050e5e) cell_cmode_rocker_pane_ParamLimits

0xe49b,	// (0x00050e5e) cell_cmode_rocker_pane

0xe4ad,	// (0x00050e70) cell_cmode_itu_pane_ParamLimits

0xe4ad,	// (0x00050e70) cell_cmode_itu_pane

0x0dc5,	// (0x00043788) bg_button_pane_cp06_ParamLimits

0x0dc5,	// (0x00043788) bg_button_pane_cp06

0xc4c7,	// (0x0004ee8a) cell_cmode_rocker_pane_g1_ParamLimits

0xc4c7,	// (0x0004ee8a) cell_cmode_rocker_pane_g1

0xd9f7,	// (0x000503ba) cell_cmode_rocker_pane_g2_ParamLimits

0xd9f7,	// (0x000503ba) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x0005278d) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x0005278d) cell_cmode_rocker_pane_g

0x09a3,	// (0x00043366) bg_button_pane_cp07

0xe4c2,	// (0x00050e85) cell_cmode_itu_pane_g1

0xe4cb,	// (0x00050e8e) cell_cmode_itu_pane_t1

0xe4d9,	// (0x00050e9c) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x00052792) cell_cmode_itu_pane_t

0xdc1c,	// (0x000505df) aid_touch_ctrl_left

0xdc24,	// (0x000505e7) aid_touch_ctrl_right

0x09a3,	// (0x00043366) compa_mode_pane

0xe4e7,	// (0x00050eaa) aid_cmod_rocker_key_size_cp

0xe4f1,	// (0x00050eb4) aid_cmode_itu_key_size_cp

0xe4fb,	// (0x00050ebe) compa_mode_pane_g1

0xe503,	// (0x00050ec6) compa_mode_pane_g2

0xe50b,	// (0x00050ece) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x00052797) compa_mode_pane_g

0xe513,	// (0x00050ed6) main_comp_mode_itu_pane_cp

0xe51b,	// (0x00050ede) main_comp_mode_rocker_pane_cp

0xe523,	// (0x00050ee6) cell_cmode_itu_pane_cp_ParamLimits

0xe523,	// (0x00050ee6) cell_cmode_itu_pane_cp

0xe538,	// (0x00050efb) cell_cmode_rocker_pane_cp_ParamLimits

0xe538,	// (0x00050efb) cell_cmode_rocker_pane_cp

0x0dc5,	// (0x00043788) bg_button_pane_cp06_cp_ParamLimits

0x0dc5,	// (0x00043788) bg_button_pane_cp06_cp

0xc4c7,	// (0x0004ee8a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4c7,	// (0x0004ee8a) cell_cmode_rocker_pane_g1_cp

0xc257,	// (0x0004ec1a) cell_cmode_rocker_pane_g2_cp

0x09a3,	// (0x00043366) bg_button_pane_cp07_cp

0xe54a,	// (0x00050f0d) cell_cmode_itu_pane_g1_cp

0xe553,	// (0x00050f16) cell_cmode_itu_pane_t1_cp

0xe553,	// (0x00050f16) cell_cmode_itu_pane_t2_cp

0xb1b5,	// (0x0004db78) settings_code_pane_cp2

0x0a13,	// (0x000433d6) bg_popup_window_pane_cp3_ParamLimits

0x0c56,	// (0x00043619) heading_pane_cp3_ParamLimits

0x0c62,	// (0x00043625) listscroll_popup_graphic_pane_ParamLimits

0x875a,	// (0x0004b11d) fep_hwr_aid_pane_ParamLimits

0x8bf8,	// (0x0004b5bb) aid_touch_sctrl_top_ParamLimits

0x8c05,	// (0x0004b5c8) sctrl_sk_top_pane_g1_ParamLimits

0xc4c7,	// (0x0004ee8a) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x000526cd) sctrl_sk_top_pane_g_ParamLimits

0x8c12,	// (0x0004b5d5) sctrl_sk_top_pane_t1_ParamLimits

0x8bf8,	// (0x0004b5bb) aid_touch_sctrl_bottom_ParamLimits

0x8c12,	// (0x0004b5d5) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb66,	// (0x00050529) aid_area_touch_clock

0x8ded,	// (0x0004b7b0) aid_vkb2_area_top_pane_cell_ParamLimits

0x8ded,	// (0x0004b7b0) aid_vkb2_area_top_pane_cell

0x8f38,	// (0x0004b8fb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8f38,	// (0x0004b8fb) aid_vkb2_area_bottom_pane_cell

0xe0d4,	// (0x00050a97) popup_char_count_window

0xe561,	// (0x00050f24) popup_char_count_window_g1

0xe56a,	// (0x00050f2d) popup_char_count_window_g2

0xe573,	// (0x00050f36) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x0005279e) popup_char_count_window_g

0xe57c,	// (0x00050f3f) popup_char_count_window_t1

0x8cb3,	// (0x0004b676) popup_fep_char_preview_window_ParamLimits

0x8cb3,	// (0x0004b676) popup_fep_char_preview_window

0x8e0b,	// (0x0004b7ce) vkb2_top_candi_pane_ParamLimits

0x8e0b,	// (0x0004b7ce) vkb2_top_candi_pane

0xe58a,	// (0x00050f4d) cell_vkb2_top_candi_pane_ParamLimits

0xe58a,	// (0x00050f4d) cell_vkb2_top_candi_pane

0xa332,	// (0x0004ccf5) bg_popup_fep_char_preview_window_ParamLimits

0xa332,	// (0x0004ccf5) bg_popup_fep_char_preview_window

0x921b,	// (0x0004bbde) popup_fep_char_preview_window_t1_ParamLimits

0x921b,	// (0x0004bbde) popup_fep_char_preview_window_t1

0xe5d7,	// (0x00050f9a) bg_popup_fep_char_preview_window_g1

0xe5df,	// (0x00050fa2) bg_popup_fep_char_preview_window_g2

0xe5e7,	// (0x00050faa) bg_popup_fep_char_preview_window_g3

0xe5ef,	// (0x00050fb2) bg_popup_fep_char_preview_window_g4

0xe5f7,	// (0x00050fba) bg_popup_fep_char_preview_window_g5

0x9255,	// (0x0004bc18) bg_popup_fep_char_preview_window_g6

0xe5ff,	// (0x00050fc2) bg_popup_fep_char_preview_window_g7

0xe607,	// (0x00050fca) bg_popup_fep_char_preview_window_g8

0xe60f,	// (0x00050fd2) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x000527a5) bg_popup_fep_char_preview_window_g

0xc4c7,	// (0x0004ee8a) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc4c7,	// (0x0004ee8a) cell_vkb2_top_candi_pane_g1

0xc7de,	// (0x0004f1a1) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc7de,	// (0x0004f1a1) cell_vkb2_top_candi_pane_g2

0xc7ff,	// (0x0004f1c2) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc7ff,	// (0x0004f1c2) cell_vkb2_top_candi_pane_g3

0x925d,	// (0x0004bc20) cell_vkb2_top_candi_pane_g4_ParamLimits

0x925d,	// (0x0004bc20) cell_vkb2_top_candi_pane_g4

0xe617,	// (0x00050fda) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe617,	// (0x00050fda) cell_vkb2_top_candi_pane_g5

0xd9f7,	// (0x000503ba) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd9f7,	// (0x000503ba) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x000527b8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x000527b8) cell_vkb2_top_candi_pane_g

0x927e,	// (0x0004bc41) cell_vkb2_top_candi_pane_t1

0x8450,	// (0x0004ae13) aid_size_touch_slider_mark_ParamLimits

0x8450,	// (0x0004ae13) aid_size_touch_slider_mark

0xe217,	// (0x00050bda) grid_graphic2_catg_pane_ParamLimits

0xe217,	// (0x00050bda) grid_graphic2_catg_pane

0xe2b5,	// (0x00050c78) popup_grid_graphic2_window_t1_ParamLimits

0xe2b5,	// (0x00050c78) popup_grid_graphic2_window_t1

0xe2c7,	// (0x00050c8a) popup_grid_graphic2_window_t2_ParamLimits

0xe2c7,	// (0x00050c8a) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x00052773) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x00052773) popup_grid_graphic2_window_t

0x0b3d,	// (0x00043500) bg_button_pane_cp05_ParamLimits

0xe43d,	// (0x00050e00) cell_graphic2_control_pane_g1_ParamLimits

0xe638,	// (0x00050ffb) cell_graphic2_catg_pane_ParamLimits

0xe638,	// (0x00050ffb) cell_graphic2_catg_pane

0x09a3,	// (0x00043366) bg_button_pane_cp12

0xe64a,	// (0x0005100d) cell_graphic2_catg_pane_g1

0xdb31,	// (0x000504f4) cell_tb_ext_pane_t1_ParamLimits

0x9055,	// (0x0004ba18) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9055,	// (0x0004ba18) vkb2_top_cell_right_narrow_pane

0x906d,	// (0x0004ba30) vkb2_top_cell_right_wide_pane_ParamLimits

0x906d,	// (0x0004ba30) vkb2_top_cell_right_wide_pane

0x874c,	// (0x0004b10f) bg_vkb2_func_pane_ParamLimits

0x874c,	// (0x0004b10f) bg_vkb2_func_pane

0x90de,	// (0x0004baa1) vkb2_top_cell_left_pane_g1_ParamLimits

0x874c,	// (0x0004b10f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x874c,	// (0x0004b10f) bg_vkb2_fuc_pane_cp03

0x913c,	// (0x0004baff) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9cb4,	// (0x0004c677) bg_vkb2_func_pane_g1

0x9cbc,	// (0x0004c67f) bg_vkb2_func_pane_g2

0x9ccc,	// (0x0004c68f) bg_vkb2_func_pane_g3

0x9cc4,	// (0x0004c687) bg_vkb2_func_pane_g4

0x9cd4,	// (0x0004c697) bg_vkb2_func_pane_g5

0x9cdc,	// (0x0004c69f) bg_vkb2_func_pane_g6

0x9ce4,	// (0x0004c6a7) bg_vkb2_func_pane_g7

0x9cec,	// (0x0004c6af) bg_vkb2_func_pane_g8

0x9cac,	// (0x0004c66f) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x000527c5) bg_vkb2_func_pane_g

0x874c,	// (0x0004b10f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x874c,	// (0x0004b10f) bg_vkb2_fuc_pane_cp01

0x90de,	// (0x0004baa1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x90de,	// (0x0004baa1) vkb2_top_cell_right_wide_pane_g1

0x874c,	// (0x0004b10f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x874c,	// (0x0004b10f) bg_vkb2_fuc_pane_cp02

0x913c,	// (0x0004baff) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x913c,	// (0x0004baff) vkb2_top_cell_right_narrow_pane_g1

0xd753,	// (0x00050116) aid_touch_area_decrease_ParamLimits

0xd753,	// (0x00050116) aid_touch_area_decrease

0xd777,	// (0x0005013a) aid_touch_area_increase_ParamLimits

0xd777,	// (0x0005013a) aid_touch_area_increase

0xd78f,	// (0x00050152) aid_touch_area_mute_ParamLimits

0xd78f,	// (0x00050152) aid_touch_area_mute

0xd7ab,	// (0x0005016e) aid_touch_area_slider_ParamLimits

0xd7ab,	// (0x0005016e) aid_touch_area_slider

0xd895,	// (0x00050258) popup_slider_window_g4_ParamLimits

0xd895,	// (0x00050258) popup_slider_window_g4

0xd8ad,	// (0x00050270) popup_slider_window_g5_ParamLimits

0xd8ad,	// (0x00050270) popup_slider_window_g5

0xd8cf,	// (0x00050292) popup_slider_window_g6_ParamLimits

0xd8cf,	// (0x00050292) popup_slider_window_g6

0xd90d,	// (0x000502d0) popup_slider_window_t2_ParamLimits

0xd90d,	// (0x000502d0) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x000526c1) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x000526c1) popup_slider_window_t

0xd925,	// (0x000502e8) slider_pane_ParamLimits

0xd925,	// (0x000502e8) slider_pane

0xe653,	// (0x00051016) slider_pane_g1_ParamLimits

0xe653,	// (0x00051016) slider_pane_g1

0xe667,	// (0x0005102a) slider_pane_g2_ParamLimits

0xe667,	// (0x0005102a) slider_pane_g2

0xe67d,	// (0x00051040) slider_pane_g3_ParamLimits

0xe67d,	// (0x00051040) slider_pane_g3

0x0003,

0xfe15,	// (0x000527d8) slider_pane_g_ParamLimits

0xfe15,	// (0x000527d8) slider_pane_g

0x806d,	// (0x0004aa30) popup_tb_float_extension_window_ParamLimits

0x806d,	// (0x0004aa30) popup_tb_float_extension_window

0xe6a9,	// (0x0005106c) aid_size_cell_tb_float_ext

0x09a3,	// (0x00043366) bg_popup_sub_window_cp28

0xe6b5,	// (0x00051078) grid_tb_float_ext_pane

0xe6bf,	// (0x00051082) cell_tb_float_ext_pane_ParamLimits

0xe6bf,	// (0x00051082) cell_tb_float_ext_pane

0xe6d9,	// (0x0005109c) cell_tb_float_ext_pane_g1

0xe6e2,	// (0x000510a5) grid_highlight_pane_cp12

0x888d,	// (0x0004b250) cell_last_hwr_side_pane_ParamLimits

0x888d,	// (0x0004b250) cell_last_hwr_side_pane

0xc257,	// (0x0004ec1a) cell_last_hwr_side_pane_g1

0xe6eb,	// (0x000510ae) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x000527e1) cell_last_hwr_side_pane_g

0x9004,	// (0x0004b9c7) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9004,	// (0x0004b9c7) vkb2_area_bottom_space_btn_pane

0xc4c7,	// (0x0004ee8a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe189,	// (0x00050b4c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x927e,	// (0x0004bc41) cell_vkb2_top_candi_pane_t1_ParamLimits

0x929d,	// (0x0004bc60) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x929d,	// (0x0004bc60) vkb2_area_bottom_space_btn_pane_g1

0x92d7,	// (0x0004bc9a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x92d7,	// (0x0004bc9a) vkb2_area_bottom_space_btn_pane_g2

0x930d,	// (0x0004bcd0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x930d,	// (0x0004bcd0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x000527e6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x000527e6) vkb2_area_bottom_space_btn_pane_g

0x8801,	// (0x0004b1c4) cel_fep_hwr_func_pane_ParamLimits

0x8801,	// (0x0004b1c4) cel_fep_hwr_func_pane

0x883d,	// (0x0004b200) cell_hwr_side_button_pane_ParamLimits

0x883d,	// (0x0004b200) cell_hwr_side_button_pane

0xdb66,	// (0x00050529) aid_area_touch_clock_ParamLimits

0x0b3d,	// (0x00043500) bg_uniindi_top_pane_ParamLimits

0xdb78,	// (0x0005053b) uniindi_top_pane_g1_ParamLimits

0xdb8e,	// (0x00050551) uniindi_top_pane_g2_ParamLimits

0xdb9a,	// (0x0005055d) uniindi_top_pane_g3_ParamLimits

0xdbab,	// (0x0005056e) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x000526f9) uniindi_top_pane_g_ParamLimits

0xdbb8,	// (0x0005057b) uniindi_top_pane_t1_ParamLimits

0x0b3d,	// (0x00043500) bg_vkb2_func_pane_cp01_ParamLimits

0x0b3d,	// (0x00043500) bg_vkb2_func_pane_cp01

0xe6f4,	// (0x000510b7) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6f4,	// (0x000510b7) cel_fep_hwr_func_pane_g1

0x0b3d,	// (0x00043500) bg_vkb2_func_pane_cp02_ParamLimits

0x0b3d,	// (0x00043500) bg_vkb2_func_pane_cp02

0xe6f4,	// (0x000510b7) cell_hwr_side_button_pane_g1_ParamLimits

0xe6f4,	// (0x000510b7) cell_hwr_side_button_pane_g1

0x9b30,	// (0x0004c4f3) status_pane_g4_ParamLimits

0x9b30,	// (0x0004c4f3) status_pane_g4

0x9b4a,	// (0x0004c50d) status_pane_t1

0xbf86,	// (0x0004e949) form2_midp_gauge_slider_cont_pane

0xbf8e,	// (0x0004e951) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfa0,	// (0x0004e963) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfb2,	// (0x0004e975) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x000524cc) form2_midp_gauge_slider_pane_t_ParamLimits

0xbfc4,	// (0x0004e987) form2_midp_slider_pane_ParamLimits

0x8c73,	// (0x0004b636) aid_size_cell_func_vkb2_ParamLimits

0x8c73,	// (0x0004b636) aid_size_cell_func_vkb2

0xe695,	// (0x00051058) slider_pane_g4_ParamLimits

0xe695,	// (0x00051058) slider_pane_g4

0x9357,	// (0x0004bd1a) form2_midp_gauge_slider_pane_t2_cp01

0x9365,	// (0x0004bd28) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9365,	// (0x0004bd28) form2_midp_gauge_slider_pane_t3_cp01

0x9382,	// (0x0004bd45) form2_midp_slider_pane_cp01

0x09a3,	// (0x00043366) navi_smil_pane

0xe72d,	// (0x000510f0) navi_smil_pane_g1

0xe735,	// (0x000510f8) navi_smil_pane_t1

0xe702,	// (0x000510c5) form2_midp_slider_pane_g1

0xe70b,	// (0x000510ce) form2_midp_slider_pane_g2

0xe713,	// (0x000510d6) form2_midp_slider_pane_g3

0xe702,	// (0x000510c5) form2_midp_slider_pane_g4

0xe71b,	// (0x000510de) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x000527ef) form2_midp_slider_pane_g

0x9347,	// (0x0004bd0a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9347,	// (0x0004bd0a) vkb2_area_bottom_space_btn_pane_g4

0x995f,	// (0x0004c322) lc0_navi_pane_ParamLimits

0x995f,	// (0x0004c322) lc0_navi_pane

0x99d5,	// (0x0004c398) lc0_stat_indi_pane_ParamLimits

0x99d5,	// (0x0004c398) lc0_stat_indi_pane

0x99ec,	// (0x0004c3af) ls0_title_pane_ParamLimits

0x99ec,	// (0x0004c3af) ls0_title_pane

0x0dc5,	// (0x00043788) bg_popup_sub_pane_cp14_ParamLimits

0xdb4d,	// (0x00050510) list_uniindi_pane_ParamLimits

0xdb59,	// (0x0005051c) uniindi_top_pane_ParamLimits

0xdbf4,	// (0x000505b7) list_single_uniindi_pane_g1_ParamLimits

0xdc07,	// (0x000505ca) list_single_uniindi_pane_t1_ParamLimits

0x938b,	// (0x0004bd4e) lc0_stat_clock_pane_ParamLimits

0x938b,	// (0x0004bd4e) lc0_stat_clock_pane

0xe743,	// (0x00051106) lc0_stat_indi_pane_g1_ParamLimits

0xe743,	// (0x00051106) lc0_stat_indi_pane_g1

0xe750,	// (0x00051113) lc0_stat_indi_pane_g2_ParamLimits

0xe750,	// (0x00051113) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x000527fa) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x000527fa) lc0_stat_indi_pane_g

0x9398,	// (0x0004bd5b) lc0_uni_indicator_pane_ParamLimits

0x9398,	// (0x0004bd5b) lc0_uni_indicator_pane

0xe75d,	// (0x00051120) ls0_title_pane_g1_ParamLimits

0xe75d,	// (0x00051120) ls0_title_pane_g1

0xe771,	// (0x00051134) ls0_title_pane_t1_ParamLimits

0xe771,	// (0x00051134) ls0_title_pane_t1

0x93a5,	// (0x0004bd68) lc0_uni_indicator_pane_g1_ParamLimits

0x93a5,	// (0x0004bd68) lc0_uni_indicator_pane_g1

0xe7a7,	// (0x0005116a) lc0_stat_clock_pane_t1

0x09a3,	// (0x00043366) main_ai5_pane

0xe7b5,	// (0x00051178) ai5_sk_pane_ParamLimits

0xe7b5,	// (0x00051178) ai5_sk_pane

0xe7c2,	// (0x00051185) cell_ai5_widget_pane_ParamLimits

0xe7c2,	// (0x00051185) cell_ai5_widget_pane

0xe87d,	// (0x00051240) aid_size_cell_widget_grid

0xe88b,	// (0x0005124e) bg_ai5_widget_pane_ParamLimits

0xe88b,	// (0x0005124e) bg_ai5_widget_pane

0xe903,	// (0x000512c6) cell_ai5_widget_pane_g2

0xe917,	// (0x000512da) cell_ai5_widget_pane_g3

0xe931,	// (0x000512f4) cell_ai5_widget_pane_g4

0xe941,	// (0x00051304) cell_ai5_widget_pane_g5

0xe951,	// (0x00051314) cell_ai5_widget_pane_g6

0xe95d,	// (0x00051320) cell_ai5_widget_pane_g7

0xe9a5,	// (0x00051368) cell_ai5_widget_pane_t1_ParamLimits

0xe9a5,	// (0x00051368) cell_ai5_widget_pane_t1

0xe9c2,	// (0x00051385) cell_ai5_widget_pane_t2_ParamLimits

0xe9c2,	// (0x00051385) cell_ai5_widget_pane_t2

0xe9da,	// (0x0005139d) cell_ai5_widget_pane_t3_ParamLimits

0xe9da,	// (0x0005139d) cell_ai5_widget_pane_t3

0xe9f2,	// (0x000513b5) cell_ai5_widget_pane_t4_ParamLimits

0xe9f2,	// (0x000513b5) cell_ai5_widget_pane_t4

0xea18,	// (0x000513db) cell_ai5_widget_pane_t5_ParamLimits

0xea18,	// (0x000513db) cell_ai5_widget_pane_t5

0xea38,	// (0x000513fb) cell_ai5_widget_pane_t6_ParamLimits

0xea38,	// (0x000513fb) cell_ai5_widget_pane_t6

0xea4a,	// (0x0005140d) cell_ai5_widget_pane_t7_ParamLimits

0xea4a,	// (0x0005140d) cell_ai5_widget_pane_t7

0xea63,	// (0x00051426) cell_ai5_widget_pane_t8_ParamLimits

0xea63,	// (0x00051426) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x00052814) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x00052814) cell_ai5_widget_pane_t

0xeac2,	// (0x00051485) grid_ai5_widget_pane

0x0dc5,	// (0x00043788) highlight_cell_ai5_widget_pane_ParamLimits

0x0dc5,	// (0x00043788) highlight_cell_ai5_widget_pane

0xead0,	// (0x00051493) ai5_sk_left_pane

0xeada,	// (0x0005149d) ai5_sk_middle_pane

0xeae4,	// (0x000514a7) ai5_sk_right_pane

0xeaee,	// (0x000514b1) bg_ai5_widget_pane_g1_ParamLimits

0xeaee,	// (0x000514b1) bg_ai5_widget_pane_g1

0xeafa,	// (0x000514bd) bg_ai5_widget_pane_g2_ParamLimits

0xeafa,	// (0x000514bd) bg_ai5_widget_pane_g2

0xeb06,	// (0x000514c9) bg_ai5_widget_pane_g3_ParamLimits

0xeb06,	// (0x000514c9) bg_ai5_widget_pane_g3

0xeb12,	// (0x000514d5) bg_ai5_widget_pane_g4_ParamLimits

0xeb12,	// (0x000514d5) bg_ai5_widget_pane_g4

0xeb1e,	// (0x000514e1) bg_ai5_widget_pane_g5_ParamLimits

0xeb1e,	// (0x000514e1) bg_ai5_widget_pane_g5

0xeb2a,	// (0x000514ed) bg_ai5_widget_pane_g6_ParamLimits

0xeb2a,	// (0x000514ed) bg_ai5_widget_pane_g6

0xeb36,	// (0x000514f9) bg_ai5_widget_pane_g7_ParamLimits

0xeb36,	// (0x000514f9) bg_ai5_widget_pane_g7

0xeb42,	// (0x00051505) bg_ai5_widget_pane_g8_ParamLimits

0xeb42,	// (0x00051505) bg_ai5_widget_pane_g8

0xeb4e,	// (0x00051511) bg_ai5_widget_pane_g9_ParamLimits

0xeb4e,	// (0x00051511) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x00052829) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x00052829) bg_ai5_widget_pane_g

0xeb80,	// (0x00051543) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb80,	// (0x00051543) cell_shortcut_ai5_widget_pane

0x4ba3,	// (0x00047566) bg_cell_shortcut_ai5_widget_pane

0xeb91,	// (0x00051554) cell_grid_ai5_widget_pane_g1

0x4ba3,	// (0x00047566) highlight_cell_shortcut_ai5_widget_pane

0x9cbc,	// (0x0004c67f) ai5_sk_left_pane_g1

0xeb9a,	// (0x0005155d) ai5_sk_left_pane_g2

0xeba2,	// (0x00051565) ai5_sk_left_pane_g3

0xebaa,	// (0x0005156d) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x0005283c) ai5_sk_left_pane_g

0xebb2,	// (0x00051575) ai5_sk_left_pane_t1

0x9cb4,	// (0x0004c677) ai5_sk_right_pane_g1

0xebc0,	// (0x00051583) ai5_sk_right_pane_g2

0xebc8,	// (0x0005158b) ai5_sk_right_pane_g3

0xebd0,	// (0x00051593) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x00052845) ai5_sk_right_pane_g

0xebd8,	// (0x0005159b) ai5_sk_right_pane_t1

0x9cb4,	// (0x0004c677) ai5_sk_middle_pane_g1

0x9cbc,	// (0x0004c67f) ai5_sk_middle_pane_g2

0x9cd4,	// (0x0004c697) ai5_sk_middle_pane_g3

0xebc8,	// (0x0005158b) ai5_sk_middle_pane_g4

0xeba2,	// (0x00051565) ai5_sk_middle_pane_g5

0xebe6,	// (0x000515a9) ai5_sk_middle_pane_g6

0xebee,	// (0x000515b1) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x0005284e) ai5_sk_middle_pane_g

0x97e5,	// (0x0004c1a8) aid_touch_area_size_lc0_ParamLimits

0x97e5,	// (0x0004c1a8) aid_touch_area_size_lc0

0x898c,	// (0x0004b34f) cell_hwr_candidate_pane_t1_ParamLimits

0x9801,	// (0x0004c1c4) aid_touch_navi_pane

0x9ada,	// (0x0004c49d) status_dt_navi_pane_ParamLimits

0x9ada,	// (0x0004c49d) status_dt_navi_pane

0x9ae7,	// (0x0004c4aa) status_dt_sta_pane_ParamLimits

0x9ae7,	// (0x0004c4aa) status_dt_sta_pane

0xebf6,	// (0x000515b9) dt_sta_controll_pane

0xec03,	// (0x000515c6) dt_sta_indi_pane

0xec14,	// (0x000515d7) dt_sta_title_pane

0x0b3d,	// (0x00043500) bg_dt_sta_indi_pane_ParamLimits

0x0b3d,	// (0x00043500) bg_dt_sta_indi_pane

0xec27,	// (0x000515ea) dt_sta_battery_pane

0xec2f,	// (0x000515f2) dt_sta_indi_pane_g1

0xec38,	// (0x000515fb) dt_sta_indi_pane_g2

0xec41,	// (0x00051604) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x0005285d) dt_sta_indi_pane_g

0xec4a,	// (0x0005160d) dt_sta_signal_pane

0x0dc5,	// (0x00043788) bg_dt_sta_title_pane_ParamLimits

0x0dc5,	// (0x00043788) bg_dt_sta_title_pane

0xaaee,	// (0x0004d4b1) dt_sta_title_pane_g1

0xec53,	// (0x00051616) dt_sta_title_pane_t1_ParamLimits

0xec53,	// (0x00051616) dt_sta_title_pane_t1

0x09a3,	// (0x00043366) bg_dt_sta_control_pane

0xec68,	// (0x0005162b) dt_sta_controll_pane_g1

0xec71,	// (0x00051634) bg_dt_sta_title_pane_g1

0xec7a,	// (0x0005163d) bg_dt_sta_title_pane_g2

0xec83,	// (0x00051646) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x00052864) bg_dt_sta_title_pane_g

0xc257,	// (0x0004ec1a) bg_dt_sta_indi_pane_g1

0xec8c,	// (0x0005164f) dt_sta_signal_pane_g1

0xec94,	// (0x00051657) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x0005286b) dt_sta_signal_pane_g

0xec9c,	// (0x0005165f) dt_sta_battery_pane_g1

0xeca5,	// (0x00051668) dt_sta_battery_pane_t1

0xc257,	// (0x0004ec1a) bg_dt_sta_control_pane_g1

0x127b,	// (0x00043c3e) fep_china_uni_eep_pane

0x1283,	// (0x00043c46) fep_china_uni_entry_pane_ParamLimits

0x1293,	// (0x00043c56) popup_fep_china_uni_window_g1_ParamLimits

0x12a3,	// (0x00043c66) popup_fep_china_uni_window_g2_ParamLimits

0x12a3,	// (0x00043c66) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x000520db) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x000520db) popup_fep_china_uni_window_g

0xecb4,	// (0x00051677) fep_china_uni_eep_pane_g1

0xecbc,	// (0x0005167f) fep_china_uni_eep_pane_t1

0xe724,	// (0x000510e7) aid_touch_area_size_smil_player

0x9957,	// (0x0004c31a) lc0_clock_pane

0x9b3e,	// (0x0004c501) status_pane_g5_ParamLimits

0x9b3e,	// (0x0004c501) status_pane_g5

0x7d2e,	// (0x0004a6f1) popup_keymap_window

0x9afc,	// (0x0004c4bf) status_icon_pane

0xe917,	// (0x000512da) cell_ai5_widget_pane_g3_ParamLimits

0xe931,	// (0x000512f4) cell_ai5_widget_pane_g4_ParamLimits

0xe941,	// (0x00051304) cell_ai5_widget_pane_g5_ParamLimits

0xe969,	// (0x0005132c) cell_ai5_widget_pane_g8_ParamLimits

0xe969,	// (0x0005132c) cell_ai5_widget_pane_g8

0xe97d,	// (0x00051340) cell_ai5_widget_pane_g9_ParamLimits

0xe97d,	// (0x00051340) cell_ai5_widget_pane_g9

0xe991,	// (0x00051354) cell_ai5_widget_pane_g10_ParamLimits

0xe991,	// (0x00051354) cell_ai5_widget_pane_g10

0xeccb,	// (0x0005168e) status_icon_pane_g1

0x09a3,	// (0x00043366) bg_popup_sub_pane_cp13

0xecd3,	// (0x00051696) popup_keymap_window_t1

0x9736,	// (0x0004c0f9) control_pane_g6_ParamLimits

0x9736,	// (0x0004c0f9) control_pane_g6

0x9743,	// (0x0004c106) control_pane_g7_ParamLimits

0x9743,	// (0x0004c106) control_pane_g7

0x9750,	// (0x0004c113) control_pane_g8_ParamLimits

0x9750,	// (0x0004c113) control_pane_g8

0xebf6,	// (0x000515b9) dt_sta_controll_pane_ParamLimits

0xec03,	// (0x000515c6) dt_sta_indi_pane_ParamLimits

0xec14,	// (0x000515d7) dt_sta_title_pane_ParamLimits

0x0d10,	// (0x000436d3) aid_size_touch_scroll_bar_cale

0x681a,	// (0x000491dd) popup_discreet_window_ParamLimits

0x681a,	// (0x000491dd) popup_discreet_window

0x6894,	// (0x00049257) popup_sk_window

0xa332,	// (0x0004ccf5) bg_popup_sub_pane_cp28_ParamLimits

0xa332,	// (0x0004ccf5) bg_popup_sub_pane_cp28

0xece1,	// (0x000516a4) popup_discreet_window_g1_ParamLimits

0xece1,	// (0x000516a4) popup_discreet_window_g1

0xed01,	// (0x000516c4) popup_discreet_window_t1_ParamLimits

0xed01,	// (0x000516c4) popup_discreet_window_t1

0xed1f,	// (0x000516e2) popup_discreet_window_t2_ParamLimits

0xed1f,	// (0x000516e2) popup_discreet_window_t2

0x0002,

0xfead,	// (0x00052870) popup_discreet_window_t_ParamLimits

0xfead,	// (0x00052870) popup_discreet_window_t

0x93b9,	// (0x0004bd7c) popup_sk_window_g1

0x93c3,	// (0x0004bd86) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x00052877) popup_sk_window_g

0x93cb,	// (0x0004bd8e) popup_sk_window_t1

0x93d9,	// (0x0004bd9c) popup_sk_window_t1_copy1

0xe903,	// (0x000512c6) cell_ai5_widget_pane_g2_ParamLimits

0xea75,	// (0x00051438) cell_ai5_widget_pane_t9_ParamLimits

0xea75,	// (0x00051438) cell_ai5_widget_pane_t9

0x09a3,	// (0x00043366) main_fep_fshwr2_pane

0x93e7,	// (0x0004bdaa) aid_fshwr2_btn_pane

0x93f3,	// (0x0004bdb6) aid_fshwr2_syb_pane

0x9405,	// (0x0004bdc8) aid_fshwr2_txt_pane

0x9411,	// (0x0004bdd4) fshwr2_func_candi_pane

0x942f,	// (0x0004bdf2) fshwr2_hwr_syb_pane

0x9449,	// (0x0004be0c) fshwr2_icf_pane

0x09a3,	// (0x00043366) fshwr2_icf_bg_pane

0x9475,	// (0x0004be38) fshwr2_icf_pane_t1_ParamLimits

0x9475,	// (0x0004be38) fshwr2_icf_pane_t1

0x11f8,	// (0x00043bbb) fshwr2_func_candi_pane_g1

0xed71,	// (0x00051734) fshwr2_func_candi_row_pane_ParamLimits

0xed71,	// (0x00051734) fshwr2_func_candi_row_pane

0x948e,	// (0x0004be51) cell_fshwr2_syb_pane_ParamLimits

0x948e,	// (0x0004be51) cell_fshwr2_syb_pane

0xe6f4,	// (0x000510b7) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe6f4,	// (0x000510b7) fshwr2_hwr_syb_pane_g1

0x09a3,	// (0x00043366) bg_popup_call_pane_cp01

0x94b1,	// (0x0004be74) fshwr2_func_candi_cell_pane_ParamLimits

0x94b1,	// (0x0004be74) fshwr2_func_candi_cell_pane

0xa98e,	// (0x0004d351) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa98e,	// (0x0004d351) fshwr2_func_candi_cell_bg_pane

0x94fc,	// (0x0004bebf) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x94fc,	// (0x0004bebf) fshwr2_func_candi_cell_pane_g1

0x9524,	// (0x0004bee7) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9524,	// (0x0004bee7) fshwr2_func_candi_cell_pane_t1

0x09a3,	// (0x00043366) bg_button_pane_cp08

0xed98,	// (0x0005175b) cell_fshwr2_syb_bg_pane

0x9537,	// (0x0004befa) cell_fshwr2_syb_bg_pane_g1

0x954b,	// (0x0004bf0e) cell_fshwr2_syb_bg_pane_t1

0x0dc5,	// (0x00043788) main_tmo_pane

0xae27,	// (0x0004d7ea) uni_indicator_pane_g1_ParamLimits

0xae3a,	// (0x0004d7fd) uni_indicator_pane_g2_ParamLimits

0xae4c,	// (0x0004d80f) uni_indicator_pane_g3_ParamLimits

0xae5b,	// (0x0004d81e) uni_indicator_pane_g4_ParamLimits

0xae5b,	// (0x0004d81e) uni_indicator_pane_g4

0xae6f,	// (0x0004d832) uni_indicator_pane_g5_ParamLimits

0xae6f,	// (0x0004d832) uni_indicator_pane_g5

0xae6f,	// (0x0004d832) uni_indicator_pane_g6_ParamLimits

0xae6f,	// (0x0004d832) uni_indicator_pane_g6

0xf91c,	// (0x000522df) uni_indicator_pane_g_ParamLimits

0xd735,	// (0x000500f8) popup_tmo_note_window_ParamLimits

0xd735,	// (0x000500f8) popup_tmo_note_window

0x0dc5,	// (0x00043788) fshwr2_bg_pane

0x9515,	// (0x0004bed8) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9515,	// (0x0004bed8) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x0005287c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x0005287c) fshwr2_func_candi_cell_pane_g

0xc257,	// (0x0004ec1a) bg_popup_window_pane_cp01

0x9561,	// (0x0004bf24) bg_popup_window_pane_g1_cp01

0xeda4,	// (0x00051767) bg_popup_window_pane_cp22_ParamLimits

0xeda4,	// (0x00051767) bg_popup_window_pane_cp22

0xedb2,	// (0x00051775) listscroll_tmo_link_pane_ParamLimits

0xedb2,	// (0x00051775) listscroll_tmo_link_pane

0xedf2,	// (0x000517b5) popup_tmo_note_window_g1_ParamLimits

0xedf2,	// (0x000517b5) popup_tmo_note_window_g1

0xedff,	// (0x000517c2) tmo_note_info_pane_ParamLimits

0xedff,	// (0x000517c2) tmo_note_info_pane

0xee19,	// (0x000517dc) list_tmo_note_info_pane_g1_ParamLimits

0xee19,	// (0x000517dc) list_tmo_note_info_pane_g1

0xee30,	// (0x000517f3) list_tmo_note_info_pane_g2_ParamLimits

0xee30,	// (0x000517f3) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x00052881) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x00052881) list_tmo_note_info_pane_g

0xee4c,	// (0x0005180f) list_tmo_note_info_text_pane_ParamLimits

0xee4c,	// (0x0005180f) list_tmo_note_info_text_pane

0xeecd,	// (0x00051890) list_tmo_link_pane

0xeeda,	// (0x0005189d) scroll_pane_cp20

0xeee7,	// (0x000518aa) list_single_tmo_link_pane_ParamLimits

0xeee7,	// (0x000518aa) list_single_tmo_link_pane

0xeef7,	// (0x000518ba) list_single_tmo_link_pane_t1

0xef05,	// (0x000518c8) list_tmo_note_info_text_pane_t1_ParamLimits

0xef05,	// (0x000518c8) list_tmo_note_info_text_pane_t1

0x7054,	// (0x00049a17) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7054,	// (0x00049a17) aid_size_touch_scroll_bar_cp01

0x5c7c,	// (0x0004863f) aid_size_touch_slider_marker

0x687c,	// (0x0004923f) popup_settings_window_ParamLimits

0x687c,	// (0x0004923f) popup_settings_window

0x5e07,	// (0x000487ca) popup_candi_list_indi_window

0x9801,	// (0x0004c1c4) aid_touch_navi_pane_ParamLimits

0x8bcc,	// (0x0004b58f) rs_clock_indi_pane

0x8bd5,	// (0x0004b598) sctrl_sk_bottom_pane_ParamLimits

0x8be6,	// (0x0004b5a9) sctrl_sk_top_pane_ParamLimits

0x8ccd,	// (0x0004b690) popup_fep_tooltip_window

0xe87d,	// (0x00051240) aid_size_cell_widget_grid_ParamLimits

0xe8ee,	// (0x000512b1) cell_ai5_widget_pane_g1_ParamLimits

0xe8ee,	// (0x000512b1) cell_ai5_widget_pane_g1

0xe951,	// (0x00051314) cell_ai5_widget_pane_g6_ParamLimits

0xe95d,	// (0x00051320) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x000527ff) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x000527ff) cell_ai5_widget_pane_g

0xeaa4,	// (0x00051467) cell_ai5_widget_pane_t10_ParamLimits

0xeaa4,	// (0x00051467) cell_ai5_widget_pane_t10

0xeac2,	// (0x00051485) grid_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x0005151d) cell_contacts_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x0005151d) cell_contacts_ai5_widget_pane

0xed34,	// (0x000516f7) popup_discreet_window_t3_ParamLimits

0xed34,	// (0x000516f7) popup_discreet_window_t3

0x9461,	// (0x0004be24) popup_fshwr2_char_preview_window_ParamLimits

0x9461,	// (0x0004be24) popup_fshwr2_char_preview_window

0xee6a,	// (0x0005182d) tmo_note_info_pane_t1

0xee7f,	// (0x00051842) tmo_note_info_pane_t2

0xee94,	// (0x00051857) tmo_note_info_pane_t3

0xeea9,	// (0x0005186c) tmo_note_info_pane_t4

0xeebb,	// (0x0005187e) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x00052886) tmo_note_info_pane_t

0xeecd,	// (0x00051890) list_tmo_link_pane_ParamLimits

0xeeda,	// (0x0005189d) scroll_pane_cp20_ParamLimits

0x09a3,	// (0x00043366) bg_popup_fep_char_preview_window_cp01

0xef1e,	// (0x000518e1) popup_fshwr2_char_preview_window_t1

0xef2c,	// (0x000518ef) popup_candi_list_indi_window_g1

0xef35,	// (0x000518f8) bg_cell_contacts_ai5_widget_pane

0xef41,	// (0x00051904) cell_contacts_ai5_widget_pane_g1

0xc95e,	// (0x0004f321) cell_contacts_ai5_widget_pane_g2

0xef56,	// (0x00051919) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x00052891) cell_contacts_ai5_widget_pane_g

0xef62,	// (0x00051925) cell_contacts_ai5_widget_pane_t1

0x0dc5,	// (0x00043788) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd9,	// (0x0005199c) settings_container_pane

0x4ba3,	// (0x00047566) listscroll_set_pane_copy1

0xb94d,	// (0x0004e310) scroll_pane_cp121_copy1

0xa0df,	// (0x0004caa2) set_content_pane_copy1

0xefe5,	// (0x000519a8) aid_height_set_list_copy1_ParamLimits

0xefe5,	// (0x000519a8) aid_height_set_list_copy1

0xb067,	// (0x0004da2a) aid_size_parent_copy1_ParamLimits

0xb067,	// (0x0004da2a) aid_size_parent_copy1

0xeff1,	// (0x000519b4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff1,	// (0x000519b4) button_value_adjust_pane_cp6_copy1

0x9785,	// (0x0004c148) list_highlight_pane_cp2_copy1_ParamLimits

0x9785,	// (0x0004c148) list_highlight_pane_cp2_copy1

0xf005,	// (0x000519c8) list_set_pane_copy1_ParamLimits

0xf005,	// (0x000519c8) list_set_pane_copy1

0xef74,	// (0x00051937) main_pane_set_t1_copy1_ParamLimits

0xef74,	// (0x00051937) main_pane_set_t1_copy1

0xefae,	// (0x00051971) main_pane_set_t2_copy1_ParamLimits

0xefae,	// (0x00051971) main_pane_set_t2_copy1

0xf0b2,	// (0x00051a75) main_pane_set_t3_copy1

0xf0c0,	// (0x00051a83) main_pane_set_t4_copy1

0xefcd,	// (0x00051990) set_content_pane_g1_copy1_ParamLimits

0xefcd,	// (0x00051990) set_content_pane_g1_copy1

0xf0ce,	// (0x00051a91) setting_code_pane_copy1

0xf0d6,	// (0x00051a99) setting_slider_graphic_pane_copy1

0xf0d6,	// (0x00051a99) setting_slider_pane_copy1

0xf0d6,	// (0x00051a99) setting_text_pane_copy1

0xf0d6,	// (0x00051a99) setting_volume_pane_copy1

0xf0ce,	// (0x00051a91) settings_code_pane_cp2_copy1

0xf0de,	// (0x00051aa1) settings_code_pane_cp_copy1_ParamLimits

0xf0de,	// (0x00051aa1) settings_code_pane_cp_copy1

0x956a,	// (0x0004bf2d) volume_set_pane_copy1

0xf0f2,	// (0x00051ab5) volume_set_pane_g10_copy1

0xf0fa,	// (0x00051abd) volume_set_pane_g1_copy1

0xf102,	// (0x00051ac5) volume_set_pane_g2_copy1

0xf10a,	// (0x00051acd) volume_set_pane_g3_copy1

0xf112,	// (0x00051ad5) volume_set_pane_g4_copy1

0xf11a,	// (0x00051add) volume_set_pane_g5_copy1

0xf122,	// (0x00051ae5) volume_set_pane_g6_copy1

0xf12a,	// (0x00051aed) volume_set_pane_g7_copy1

0xf132,	// (0x00051af5) volume_set_pane_g8_copy1

0xf13a,	// (0x00051afd) volume_set_pane_g9_copy1

0x0a13,	// (0x000433d6) bg_set_opt_pane_cp_copy1_ParamLimits

0x0a13,	// (0x000433d6) bg_set_opt_pane_cp_copy1

0x9572,	// (0x0004bf35) setting_slider_pane_t1_copy1_ParamLimits

0x9572,	// (0x0004bf35) setting_slider_pane_t1_copy1

0x9590,	// (0x0004bf53) setting_slider_pane_t2_copy1_ParamLimits

0x9590,	// (0x0004bf53) setting_slider_pane_t2_copy1

0x95aa,	// (0x0004bf6d) setting_slider_pane_t3_copy1_ParamLimits

0x95aa,	// (0x0004bf6d) setting_slider_pane_t3_copy1

0x95c2,	// (0x0004bf85) slider_set_pane_copy1_ParamLimits

0x95c2,	// (0x0004bf85) slider_set_pane_copy1

0x0e1d,	// (0x000437e0) set_opt_bg_pane_g1_copy2

0x0e25,	// (0x000437e8) set_opt_bg_pane_g2_copy2

0xf142,	// (0x00051b05) set_opt_bg_pane_g3_copy2

0x0e35,	// (0x000437f8) set_opt_bg_pane_g4_copy2

0x0e3d,	// (0x00043800) set_opt_bg_pane_g5_copy2

0x0e45,	// (0x00043808) set_opt_bg_pane_g6_copy2

0xf14c,	// (0x00051b0f) set_opt_bg_pane_g7_copy2

0xf154,	// (0x00051b17) set_opt_bg_pane_g8_copy2

0xf15e,	// (0x00051b21) set_opt_bg_pane_g9_copy2

0x95d8,	// (0x0004bf9b) aid_size_touch_slider_mark_copy1_ParamLimits

0x95d8,	// (0x0004bf9b) aid_size_touch_slider_mark_copy1

0xf168,	// (0x00051b2b) slider_set_pane_g1_copy1

0x95ec,	// (0x0004bfaf) slider_set_pane_g2_copy1

0x8470,	// (0x0004ae33) slider_set_pane_g3_copy1_ParamLimits

0x8470,	// (0x0004ae33) slider_set_pane_g3_copy1

0x8484,	// (0x0004ae47) slider_set_pane_g4_copy1_ParamLimits

0x8484,	// (0x0004ae47) slider_set_pane_g4_copy1

0x849c,	// (0x0004ae5f) slider_set_pane_g5_copy1_ParamLimits

0x849c,	// (0x0004ae5f) slider_set_pane_g5_copy1

0x8470,	// (0x0004ae33) slider_set_pane_g6_copy1_ParamLimits

0x8470,	// (0x0004ae33) slider_set_pane_g6_copy1

0x95f4,	// (0x0004bfb7) slider_set_pane_g7_copy1_ParamLimits

0x95f4,	// (0x0004bfb7) slider_set_pane_g7_copy1

0x09b7,	// (0x0004337a) bg_set_opt_pane_cp2_copy1

0xf171,	// (0x00051b34) setting_slider_graphic_pane_g1_copy1

0xf17a,	// (0x00051b3d) setting_slider_graphic_pane_t1_copy1

0xf18a,	// (0x00051b4d) setting_slider_graphic_pane_t2_copy1

0xf19a,	// (0x00051b5d) slider_set_pane_cp_copy1

0xf1aa,	// (0x00051b6d) input_focus_pane_cp1_copy1

0xf1b3,	// (0x00051b76) list_set_text_pane_copy1

0xf1bb,	// (0x00051b7e) setting_text_pane_g1_copy1

0x6575,	// (0x00048f38) set_text_pane_t1_copy1

0xf1aa,	// (0x00051b6d) input_focus_pane_cp2_copy1

0xf1bb,	// (0x00051b7e) setting_code_pane_g1_copy1

0xf1c4,	// (0x00051b87) setting_code_pane_t1_copy1

0xf1d2,	// (0x00051b95) list_set_graphic_pane_copy1

0x09b7,	// (0x0004337a) bg_set_opt_pane_cp4_copy1

0x13d3,	// (0x00043d96) list_set_graphic_pane_g1_copy1_ParamLimits

0x13d3,	// (0x00043d96) list_set_graphic_pane_g1_copy1

0xf1e6,	// (0x00051ba9) list_set_graphic_pane_g2_copy1

0x13eb,	// (0x00043dae) list_set_graphic_pane_t1_copy1_ParamLimits

0x13eb,	// (0x00043dae) list_set_graphic_pane_t1_copy1

0xc257,	// (0x0004ec1a) rs_clock_indi_pane_g1

0xf1ee,	// (0x00051bb1) rs_clock_indi_pane_t1

0xf1fc,	// (0x00051bbf) rs_indi_pane

0xf204,	// (0x00051bc7) rs_indi_pane_g1

0xf20d,	// (0x00051bd0) rs_indi_pane_g2

0xef2c,	// (0x000518ef) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x00052898) rs_indi_pane_g

0x4ba3,	// (0x00047566) bg_popup_preview_window_pane_cp03

0xf216,	// (0x00051bd9) popup_fep_tooltip_window_t1

0xcee6,	// (0x0004f8a9) popup_note2_window_g2_ParamLimits

0xcee6,	// (0x0004f8a9) popup_note2_window_g2

0x0001,

0xfc75,	// (0x00052638) popup_note2_window_g_ParamLimits

0xfc75,	// (0x00052638) popup_note2_window_g

0xd3d3,	// (0x0004fd96) bg_popup_sub_pane_cp11_ParamLimits

0xd3e0,	// (0x0004fda3) cell_ai3_links_pane_g1_ParamLimits

0xd3f7,	// (0x0004fdba) cell_ai3_links_pane_t1

0x6575,	// (0x00048f38) set_text_pane_t1_copy1_ParamLimits

0x4ae2,	// (0x000474a5) cell_graphic_popup_pane_cp2_ParamLimits

0x4ae2,	// (0x000474a5) cell_graphic_popup_pane_cp2

0xf224,	// (0x00051be7) cell_graphic_popup_pane_g1_cp2

0x0c93,	// (0x00043656) cell_graphic_popup_pane_g2_cp2

0xf22c,	// (0x00051bef) cell_graphic_popup_pane_g3_cp2

0xf234,	// (0x00051bf7) cell_graphic_popup_pane_t2_cp2

0x0ca4,	// (0x00043667) grid_highlight_pane_cp3_cp2

0x1075,	// (0x00043a38) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0dc5,	// (0x00043788) main_tmo_pane_ParamLimits

0xd729,	// (0x000500ec) popup_tmo_big_image_note_window

0xe8dd,	// (0x000512a0) cell_ai5_widget_list_pane

0xe8e5,	// (0x000512a8) cell_ai5_widget_lrg_icon_pane

0xee6a,	// (0x0005182d) tmo_note_info_pane_t1_ParamLimits

0xee7f,	// (0x00051842) tmo_note_info_pane_t2_ParamLimits

0xee94,	// (0x00051857) tmo_note_info_pane_t3_ParamLimits

0xeea9,	// (0x0005186c) tmo_note_info_pane_t4_ParamLimits

0xeebb,	// (0x0005187e) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x00052886) tmo_note_info_pane_t_ParamLimits

0xefd9,	// (0x0005199c) settings_container_pane_ParamLimits

0xf1a2,	// (0x00051b65) indicator_popup_pane_cp5

0xf1a2,	// (0x00051b65) indicator_popup_pane_cp6

0xf1d2,	// (0x00051b95) list_set_graphic_pane_copy1_ParamLimits

0x09a3,	// (0x00043366) bg_popup_window_pane_cp23

0xf242,	// (0x00051c05) popup_tmo_big_image_note_window_g1

0xf24b,	// (0x00051c0e) popup_tmo_big_image_note_window_t1

0xf25b,	// (0x00051c1e) popup_tmo_big_image_note_window_t2

0xf26b,	// (0x00051c2e) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x0005289f) popup_tmo_big_image_note_window_t

0xc257,	// (0x0004ec1a) cell_ai5_widget_lrg_icon_pane_g1

0xf27b,	// (0x00051c3e) cell_ai5_widget_lrg_icon_pane_t1

0xf289,	// (0x00051c4c) cell_ai5_widget_list_row_pane_ParamLimits

0xf289,	// (0x00051c4c) cell_ai5_widget_list_row_pane

0xf2a0,	// (0x00051c63) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2a0,	// (0x00051c63) cell_ai5_widget_list_row_pane_g1

0xf2ad,	// (0x00051c70) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2ad,	// (0x00051c70) cell_ai5_widget_list_row_pane_t1

0xf2d8,	// (0x00051c9b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2d8,	// (0x00051c9b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee3,	// (0x000528a6) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x000528a6) cell_ai5_widget_list_row_pane_t

0x09a3,	// (0x00043366) main_fep_vtchi_ss_pane

0xf320,	// (0x00051ce3) popup_fep_char_pre_window

0xf328,	// (0x00051ceb) popup_fep_ituss_window

0xf354,	// (0x00051d17) popup_fep_vkbss_window

0xf37e,	// (0x00051d41) grid_vkbss_keypad_pane_ParamLimits

0xf37e,	// (0x00051d41) grid_vkbss_keypad_pane

0xf38e,	// (0x00051d51) ituss_keypad_pane

0x9616,	// (0x0004bfd9) aid_vkbss_key_offset_ParamLimits

0x9616,	// (0x0004bfd9) aid_vkbss_key_offset

0x9622,	// (0x0004bfe5) cell_vkbss_key_pane_ParamLimits

0x9622,	// (0x0004bfe5) cell_vkbss_key_pane

0x9b18,	// (0x0004c4db) bg_cell_vkbss_key_g1_ParamLimits

0x9b18,	// (0x0004c4db) bg_cell_vkbss_key_g1

0xf39d,	// (0x00051d60) cell_vkbss_key_3p_pane_ParamLimits

0xf39d,	// (0x00051d60) cell_vkbss_key_3p_pane

0xf3b1,	// (0x00051d74) cell_vkbss_key_g1_ParamLimits

0xf3b1,	// (0x00051d74) cell_vkbss_key_g1

0xf3c5,	// (0x00051d88) cell_vkbss_key_t1_ParamLimits

0xf3c5,	// (0x00051d88) cell_vkbss_key_t1

0x9638,	// (0x0004bffb) cell_ituss_key_pane_ParamLimits

0x9638,	// (0x0004bffb) cell_ituss_key_pane

0xf3f0,	// (0x00051db3) bg_cell_ituss_key_g1_ParamLimits

0xf3f0,	// (0x00051db3) bg_cell_ituss_key_g1

0xf3fc,	// (0x00051dbf) cell_ituss_key_pane_g1_ParamLimits

0xf3fc,	// (0x00051dbf) cell_ituss_key_pane_g1

0x9649,	// (0x0004c00c) cell_ituss_key_pane_g2_ParamLimits

0x9649,	// (0x0004c00c) cell_ituss_key_pane_g2

0x0002,

0xfeea,	// (0x000528ad) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x000528ad) cell_ituss_key_pane_g

0x9675,	// (0x0004c038) cell_ituss_key_t1_ParamLimits

0x9675,	// (0x0004c038) cell_ituss_key_t1

0x96af,	// (0x0004c072) cell_ituss_key_t2_ParamLimits

0x96af,	// (0x0004c072) cell_ituss_key_t2

0x96e0,	// (0x0004c0a3) cell_ituss_key_t3_ParamLimits

0x96e0,	// (0x0004c0a3) cell_ituss_key_t3

0x96af,	// (0x0004c072) cell_ituss_key_t4_ParamLimits

0x96af,	// (0x0004c072) cell_ituss_key_t4

0x0004,

0xfef1,	// (0x000528b4) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x000528b4) cell_ituss_key_t

0xf422,	// (0x00051de5) cell_vkbss_key_3p_pane_g1

0xf42a,	// (0x00051ded) cell_vkbss_key_3p_pane_g2

0xf432,	// (0x00051df5) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x000528bf) cell_vkbss_key_3p_pane_g

0x4ba3,	// (0x00047566) bg_popup_fep_char_preview_window_cp02

0xf43a,	// (0x00051dfd) popup_fep_char_pre_window_t1

0xe86a,	// (0x0005122d) main_ai5_sk_pane

0xef35,	// (0x000518f8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef41,	// (0x00051904) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc95e,	// (0x0004f321) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef56,	// (0x00051919) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x00052891) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef62,	// (0x00051925) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0dc5,	// (0x00043788) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf448,	// (0x00051e0b) main_ai5_sk_pane_g1

0xa173,	// (0x0004cb36) popup_query_code_window_g1

0xf33e,	// (0x00051d01) popup_fep_vkb_icf_pane

0xf368,	// (0x00051d2b) popup_fep_vtchi_icf_pane

0xf451,	// (0x00051e14) bg_icf_pane

0xf45d,	// (0x00051e20) list_vkb_icf_pane

0xf46c,	// (0x00051e2f) bg_icf_pane_cp01

0xf47f,	// (0x00051e42) vtchi_icf_list_pane

0xf48f,	// (0x00051e52) list_vkb_icf_pane_t1_ParamLimits

0xf48f,	// (0x00051e52) list_vkb_icf_pane_t1

0xf4b0,	// (0x00051e73) vtchi_icf_list_pane_t1_ParamLimits

0xf4b0,	// (0x00051e73) vtchi_icf_list_pane_t1

0xf328,	// (0x00051ceb) popup_fep_ituss_window_ParamLimits

0xf368,	// (0x00051d2b) popup_fep_vtchi_icf_pane_ParamLimits

0xf38e,	// (0x00051d51) ituss_keypad_pane_ParamLimits

0x960a,	// (0x0004bfcd) ituss_sks_pane

0xf451,	// (0x00051e14) bg_icf_pane_ParamLimits

0xf300,	// (0x00051cc3) icf_edit_indi_pane_ParamLimits

0xf300,	// (0x00051cc3) icf_edit_indi_pane

0xf45d,	// (0x00051e20) list_vkb_icf_pane_ParamLimits

0xf46c,	// (0x00051e2f) bg_icf_pane_cp01_ParamLimits

0xf313,	// (0x00051cd6) icf_edit_indi_pane_cp01_ParamLimits

0xf313,	// (0x00051cd6) icf_edit_indi_pane_cp01

0xf487,	// (0x00051e4a) vtchi_query_pane

0xe6f4,	// (0x000510b7) icf_edit_indi_pane_g1_ParamLimits

0xe6f4,	// (0x000510b7) icf_edit_indi_pane_g1

0xf525,	// (0x00051ee8) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x00051ee8) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x000528d7) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x000528d7) icf_edit_indi_pane_g

0xf537,	// (0x00051efa) icf_edit_indi_pane_t1

0xf4ce,	// (0x00051e91) bg_input_focus_pane_cp042

0x0d07,	// (0x000436ca) vtchi_button_pane

0xf4d7,	// (0x00051e9a) vtchi_query_pane_t1

0xf4e5,	// (0x00051ea8) vtchi_query_pane_t2

0xf4f3,	// (0x00051eb6) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x000528c6) vtchi_query_pane_t

0x09a3,	// (0x00043366) bg_button_pane_cp13

0xf501,	// (0x00051ec4) vtchi_button_pane_g1

0x9723,	// (0x0004c0e6) ituss_sks_pane_g1

0x972e,	// (0x0004c0f1) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x000528cd) ituss_sks_pane_g

0xf509,	// (0x00051ecc) ituss_sks_pane_t1

0xf517,	// (0x00051eda) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x000528d2) ituss_sks_pane_t

0xbcc8,	// (0x0004e68b) indicator_nsta_pane_cp_g1

0xbcd0,	// (0x0004e693) indicator_nsta_pane_cp_g2

0xbcd8,	// (0x0004e69b) indicator_nsta_pane_cp_g3

0xbcc8,	// (0x0004e68b) indicator_nsta_pane_cp_g4

0xbcd0,	// (0x0004e693) indicator_nsta_pane_cp_g5

0xbcd8,	// (0x0004e69b) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x00052482) indicator_nsta_pane_cp_g

0xe42a,	// (0x00050ded) cell_graphic2_pane_t2_ParamLimits

0xe42a,	// (0x00050ded) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x00052788) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x00052788) cell_graphic2_pane_t

0xe457,	// (0x00050e1a) cell_graphic2_control_pane_t1

0x74fa,	// (0x00049ebd) signal_pane_g3_ParamLimits

0x74fa,	// (0x00049ebd) signal_pane_g3

0x750c,	// (0x00049ecf) signal_pane_g4_ParamLimits

0x750c,	// (0x00049ecf) signal_pane_g4

0xf2ea,	// (0x00051cad) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2ea,	// (0x00051cad) cell_ai5_widget_list_row_pane_t3

0xf410,	// (0x00051dd3) cell_ituss_key_pane_t1_ParamLimits

0xf410,	// (0x00051dd3) cell_ituss_key_pane_t1

0x9dae,	// (0x0004c771) form_field_data_wide_pane_vc_t2_ParamLimits

0x9dae,	// (0x0004c771) form_field_data_wide_pane_vc_t2

0x9dc2,	// (0x0004c785) form_field_data_wide_pane_vc_t3_ParamLimits

0x9dc2,	// (0x0004c785) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x000521c7) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x000521c7) form_field_data_wide_pane_vc_t

0xb98f,	// (0x0004e352) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb98f,	// (0x0004e352) form_field_slider_wide_pane_vc_t3

0xba6d,	// (0x0004e430) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba6d,	// (0x0004e430) form_field_popup_wide_pane_vc_t2

0xba84,	// (0x0004e447) form_field_popup_wide_pane_vc_t3_ParamLimits

0xba84,	// (0x0004e447) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x00052471) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x00052471) form_field_popup_wide_pane_vc_t

0x93e7,	// (0x0004bdaa) aid_fshwr2_btn_pane_ParamLimits

0x93f3,	// (0x0004bdb6) aid_fshwr2_syb_pane_ParamLimits

0x9405,	// (0x0004bdc8) aid_fshwr2_txt_pane_ParamLimits

0x0dc5,	// (0x00043788) fshwr2_bg_pane_ParamLimits

0x9411,	// (0x0004bdd4) fshwr2_func_candi_pane_ParamLimits

0x942f,	// (0x0004bdf2) fshwr2_hwr_syb_pane_ParamLimits

0x9449,	// (0x0004be0c) fshwr2_icf_pane_ParamLimits

0x86f8,	// (0x0004b0bb) list_double_graphic_pane_vc_g4_ParamLimits

0x86f8,	// (0x0004b0bb) list_double_graphic_pane_vc_g4

0x9669,	// (0x0004c02c) cell_ituss_key_pane_g3_ParamLimits

0x9669,	// (0x0004c02c) cell_ituss_key_pane_g3

0x9711,	// (0x0004c0d4) cell_ituss_key_t5_ParamLimits

0x9711,	// (0x0004c0d4) cell_ituss_key_t5

0xf354,	// (0x00051d17) popup_fep_vkbss_window_ParamLimits

0xe874,	// (0x00051237) aid_cell_ai5_quarter

0xf537,	// (0x00051efa) icf_edit_indi_pane_t1_ParamLimits

0x6c00,	// (0x000495c3) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6c00,	// (0x000495c3) aid_tch_indicator_popup_pane_cp2

0x6c13,	// (0x000495d6) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6c13,	// (0x000495d6) aid_tch_query_popup_data_pane_cp2

0xa11b,	// (0x0004cade) aid_tch_query_popup_pane_ParamLimits

0xa11b,	// (0x0004cade) aid_tch_query_popup_pane

0xa11b,	// (0x0004cade) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xa11b,	// (0x0004cade) aid_tch_query_popup_data_pane_cp1

0xed98,	// (0x0005175b) cell_fshwr2_syb_bg_pane_ParamLimits

0x9537,	// (0x0004befa) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x954b,	// (0x0004bf0e) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf33e,	// (0x00051d01) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
