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

#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0000cf23 };

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
0x2ff8,	// (0x0000ff1b) Screen

0x300a,	// (0x0000ff2d) application_window_ParamLimits

0x300a,	// (0x0000ff2d) application_window

0x3022,	// (0x0000ff45) screen_g1

0x302c,	// (0x0000ff4f) area_bottom_pane_ParamLimits

0x302c,	// (0x0000ff4f) area_bottom_pane

0x3091,	// (0x0000ffb4) area_top_pane_ParamLimits

0x3091,	// (0x0000ffb4) area_top_pane

0xb5f1,	// (0x00018514) main_pane_ParamLimits

0xb5f1,	// (0x00018514) main_pane

0x3109,	// (0x0001002c) misc_graphics

0x5512,	// (0x00012435) battery_pane_ParamLimits

0x5512,	// (0x00012435) battery_pane

0x61de,	// (0x00013101) bg_status_flat_pane_g8

0x61e6,	// (0x00013109) bg_status_flat_pane_g9

0x55c7,	// (0x000124ea) context_pane_ParamLimits

0x55c7,	// (0x000124ea) context_pane

0x56de,	// (0x00012601) navi_pane_ParamLimits

0x56de,	// (0x00012601) navi_pane

0x575b,	// (0x0001267e) signal_pane_ParamLimits

0x575b,	// (0x0001267e) signal_pane

0x0008,

0xf87e,	// (0x0001c7a1) bg_status_flat_pane_g

0x57c4,	// (0x000126e7) status_pane_g1_ParamLimits

0x57c4,	// (0x000126e7) status_pane_g1

0x57d0,	// (0x000126f3) status_pane_g2_ParamLimits

0x57d0,	// (0x000126f3) status_pane_g2

0x57dc,	// (0x000126ff) status_pane_g3_ParamLimits

0x57dc,	// (0x000126ff) status_pane_g3

0x0004,

0xf7b3,	// (0x0001c6d6) status_pane_g_ParamLimits

0xf7b3,	// (0x0001c6d6) status_pane_g

0x580e,	// (0x00012731) title_pane_ParamLimits

0x580e,	// (0x00012731) title_pane

0x584b,	// (0x0001276e) uni_indicator_pane_ParamLimits

0x584b,	// (0x0001276e) uni_indicator_pane

0x4f9c,	// (0x00011ebf) bg_list_pane_ParamLimits

0x4f9c,	// (0x00011ebf) bg_list_pane

0xadd7,	// (0x00017cfa) find_pane

0x4fc4,	// (0x00011ee7) listscroll_app_pane_ParamLimits

0x4fc4,	// (0x00011ee7) listscroll_app_pane

0x4fd0,	// (0x00011ef3) listscroll_form_pane

0xaddf,	// (0x00017d02) listscroll_gen_pane_ParamLimits

0xaddf,	// (0x00017d02) listscroll_gen_pane

0x4fd0,	// (0x00011ef3) listscroll_set_pane

0x423a,	// (0x0001115d) main_idle_act_pane

0x4c8c,	// (0x00011baf) main_idle_trad_pane

0x4c8c,	// (0x00011baf) main_list_empty_pane

0x4fff,	// (0x00011f22) main_midp_pane

0x500b,	// (0x00011f2e) main_pane_g1_ParamLimits

0x500b,	// (0x00011f2e) main_pane_g1

0x5019,	// (0x00011f3c) popup_ai_message_window_ParamLimits

0x5019,	// (0x00011f3c) popup_ai_message_window

0x50b7,	// (0x00011fda) popup_fep_china_uni_window_ParamLimits

0x50b7,	// (0x00011fda) popup_fep_china_uni_window

0x50f5,	// (0x00012018) popup_fep_japan_candidate_window_ParamLimits

0x50f5,	// (0x00012018) popup_fep_japan_candidate_window

0x5113,	// (0x00012036) popup_fep_japan_predictive_window_ParamLimits

0x5113,	// (0x00012036) popup_fep_japan_predictive_window

0x513f,	// (0x00012062) popup_find_window

0x514c,	// (0x0001206f) popup_grid_graphic_window_ParamLimits

0x514c,	// (0x0001206f) popup_grid_graphic_window

0x516a,	// (0x0001208d) popup_large_graphic_colour_window

0x5189,	// (0x000120ac) popup_menu_window_ParamLimits

0x5189,	// (0x000120ac) popup_menu_window

0x52c1,	// (0x000121e4) popup_note_image_window

0x52af,	// (0x000121d2) popup_note_wait_window_ParamLimits

0x52af,	// (0x000121d2) popup_note_wait_window

0x52af,	// (0x000121d2) popup_note_window_ParamLimits

0x52af,	// (0x000121d2) popup_note_window

0x5315,	// (0x00012238) popup_query_code_window_ParamLimits

0x5315,	// (0x00012238) popup_query_code_window

0x5327,	// (0x0001224a) popup_query_data_code_window_ParamLimits

0x5327,	// (0x0001224a) popup_query_data_code_window

0x533c,	// (0x0001225f) popup_query_data_window_ParamLimits

0x533c,	// (0x0001225f) popup_query_data_window

0x5352,	// (0x00012275) popup_query_sat_info_window_ParamLimits

0x5352,	// (0x00012275) popup_query_sat_info_window

0x5383,	// (0x000122a6) popup_snote_single_graphic_window_ParamLimits

0x5383,	// (0x000122a6) popup_snote_single_graphic_window

0x5383,	// (0x000122a6) popup_snote_single_text_window_ParamLimits

0x5383,	// (0x000122a6) popup_snote_single_text_window

0x5396,	// (0x000122b9) popup_sub_window_general

0x549a,	// (0x000123bd) popup_window_general_ParamLimits

0x549a,	// (0x000123bd) popup_window_general

0x54ad,	// (0x000123d0) power_save_pane

0xbc58,	// (0x00018b7b) control_pane_g1_ParamLimits

0xbc58,	// (0x00018b7b) control_pane_g1

0xbc79,	// (0x00018b9c) control_pane_g2_ParamLimits

0xbc79,	// (0x00018b9c) control_pane_g2

0x4f45,	// (0x00011e68) control_pane_g3_ParamLimits

0x4f45,	// (0x00011e68) control_pane_g3

0x0007,

0xf79b,	// (0x0001c6be) control_pane_g_ParamLimits

0xf79b,	// (0x0001c6be) control_pane_g

0xbcbc,	// (0x00018bdf) control_pane_t1_ParamLimits

0xbcbc,	// (0x00018bdf) control_pane_t1

0xbd0e,	// (0x00018c31) control_pane_t2_ParamLimits

0xbd0e,	// (0x00018c31) control_pane_t2

0x0002,

0xf7ac,	// (0x0001c6cf) control_pane_t_ParamLimits

0xf7ac,	// (0x0001c6cf) control_pane_t

0x4e68,	// (0x00011d8b) navi_navi_volume_pane_cp1

0x4e71,	// (0x00011d94) status_small_icon_pane

0x4e79,	// (0x00011d9c) status_small_pane_g1_ParamLimits

0x4e79,	// (0x00011d9c) status_small_pane_g1

0x4ead,	// (0x00011dd0) status_small_pane_g2_ParamLimits

0x4ead,	// (0x00011dd0) status_small_pane_g2

0x4eb9,	// (0x00011ddc) status_small_pane_g3_ParamLimits

0x4eb9,	// (0x00011ddc) status_small_pane_g3

0x4ec5,	// (0x00011de8) status_small_pane_g4_ParamLimits

0x4ec5,	// (0x00011de8) status_small_pane_g4

0x4ed1,	// (0x00011df4) status_small_pane_g5_ParamLimits

0x4ed1,	// (0x00011df4) status_small_pane_g5

0x4ede,	// (0x00011e01) status_small_pane_g6_ParamLimits

0x4ede,	// (0x00011e01) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001c6ad) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001c6ad) status_small_pane_g

0x4f0e,	// (0x00011e31) status_small_pane_t1

0x4f31,	// (0x00011e54) status_small_wait_pane_ParamLimits

0x4f31,	// (0x00011e54) status_small_wait_pane

0x4722,	// (0x00011645) aid_levels_signal_ParamLimits

0x4722,	// (0x00011645) aid_levels_signal

0x4733,	// (0x00011656) signal_pane_g1_ParamLimits

0x4733,	// (0x00011656) signal_pane_g1

0x4749,	// (0x0001166c) signal_pane_g2_ParamLimits

0x4749,	// (0x0001166c) signal_pane_g2

0x0001,

0xf71f,	// (0x0001c642) signal_pane_g_ParamLimits

0xf71f,	// (0x0001c642) signal_pane_g

0x475f,	// (0x00011682) context_pane_g1

0x3113,	// (0x00010036) title_pane_g1

0x3149,	// (0x0001006c) title_pane_t1

0x31b1,	// (0x000100d4) title_pane_t2

0x31d7,	// (0x000100fa) title_pane_t3

0x0002,

0xf573,	// (0x0001c496) title_pane_t

0x5861,	// (0x00012784) aid_levels_battery_ParamLimits

0x5861,	// (0x00012784) aid_levels_battery

0x5874,	// (0x00012797) battery_pane_g1_ParamLimits

0x5874,	// (0x00012797) battery_pane_g1

0x5889,	// (0x000127ac) battery_pane_g2_ParamLimits

0x5889,	// (0x000127ac) battery_pane_g2

0x0001,

0xf7be,	// (0x0001c6e1) battery_pane_g_ParamLimits

0xf7be,	// (0x0001c6e1) battery_pane_g

0xc0bb,	// (0x00018fde) uni_indicator_pane_g1

0xc0d0,	// (0x00018ff3) uni_indicator_pane_g2

0xc0e6,	// (0x00019009) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x0001c849) uni_indicator_pane_g

0x4117,	// (0x0001103a) navi_icon_pane_ParamLimits

0x4117,	// (0x0001103a) navi_icon_pane

0x3109,	// (0x0001002c) navi_midp_pane

0x3109,	// (0x0001002c) navi_navi_pane

0x4117,	// (0x0001103a) navi_text_pane_ParamLimits

0x4117,	// (0x0001103a) navi_text_pane

0x3022,	// (0x0000ff45) status_small_wait_pane_g1

0x3624,	// (0x00010547) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x0001c844) status_small_wait_pane_g

0x7f1d,	// (0x00014e40) navi_navi_icon_text_pane

0x7f37,	// (0x00014e5a) navi_navi_pane_g1_ParamLimits

0x7f37,	// (0x00014e5a) navi_navi_pane_g1

0x7f25,	// (0x00014e48) navi_navi_pane_g2_ParamLimits

0x7f25,	// (0x00014e48) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x0001c812) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x0001c812) navi_navi_pane_g

0x7f49,	// (0x00014e6c) navi_navi_tabs_pane

0x7f1d,	// (0x00014e40) navi_navi_text_pane

0x7f1d,	// (0x00014e40) navi_navi_volume_pane

0x798f,	// (0x000148b2) navi_text_pane_t1

0x7983,	// (0x000148a6) navi_icon_pane_g1

0x78d7,	// (0x000147fa) navi_navi_text_pane_t1

0xc085,	// (0x00018fa8) navi_navi_volume_pane_g1

0xc08d,	// (0x00018fb0) volume_small_pane

0xbff7,	// (0x00018f1a) navi_navi_icon_text_pane_g1

0xbfff,	// (0x00018f22) navi_navi_icon_text_pane_t1

0x623e,	// (0x00013161) navi_tabs_2_long_pane

0x623e,	// (0x00013161) navi_tabs_2_pane

0x623e,	// (0x00013161) navi_tabs_3_long_pane

0x623e,	// (0x00013161) navi_tabs_3_pane

0x623e,	// (0x00013161) navi_tabs_4_pane

0xbfd7,	// (0x00018efa) tabs_2_active_pane_ParamLimits

0xbfd7,	// (0x00018efa) tabs_2_active_pane

0xbfe7,	// (0x00018f0a) tabs_2_passive_pane_ParamLimits

0xbfe7,	// (0x00018f0a) tabs_2_passive_pane

0xbfa5,	// (0x00018ec8) tabs_3_active_pane_ParamLimits

0xbfa5,	// (0x00018ec8) tabs_3_active_pane

0xbfb5,	// (0x00018ed8) tabs_3_passive_pane_ParamLimits

0xbfb5,	// (0x00018ed8) tabs_3_passive_pane

0xbfc6,	// (0x00018ee9) tabs_3_passive_pane_cp_ParamLimits

0xbfc6,	// (0x00018ee9) tabs_3_passive_pane_cp

0xbf61,	// (0x00018e84) tabs_4_active_pane_ParamLimits

0xbf61,	// (0x00018e84) tabs_4_active_pane

0xbf72,	// (0x00018e95) tabs_4_passive_pane_ParamLimits

0xbf72,	// (0x00018e95) tabs_4_passive_pane

0xbf83,	// (0x00018ea6) tabs_4_passive_pane_cp_ParamLimits

0xbf83,	// (0x00018ea6) tabs_4_passive_pane_cp

0xbf94,	// (0x00018eb7) tabs_4_passive_pane_cp2_ParamLimits

0xbf94,	// (0x00018eb7) tabs_4_passive_pane_cp2

0xbf41,	// (0x00018e64) tabs_2_long_active_pane_ParamLimits

0xbf41,	// (0x00018e64) tabs_2_long_active_pane

0xbf51,	// (0x00018e74) tabs_2_long_passive_pane_ParamLimits

0xbf51,	// (0x00018e74) tabs_2_long_passive_pane

0xbf0c,	// (0x00018e2f) tabs_3_long_active_pane_ParamLimits

0xbf0c,	// (0x00018e2f) tabs_3_long_active_pane

0xbf1d,	// (0x00018e40) tabs_3_long_passive_pane_ParamLimits

0xbf1d,	// (0x00018e40) tabs_3_long_passive_pane

0xbf30,	// (0x00018e53) tabs_3_long_passive_pane_cp_ParamLimits

0xbf30,	// (0x00018e53) tabs_3_long_passive_pane_cp

0xbeb2,	// (0x00018dd5) volume_small_pane_g1

0xbebb,	// (0x00018dde) volume_small_pane_g2

0xbec4,	// (0x00018de7) volume_small_pane_g3

0xbecd,	// (0x00018df0) volume_small_pane_g4

0xbed6,	// (0x00018df9) volume_small_pane_g5

0xbedf,	// (0x00018e02) volume_small_pane_g6

0xbee8,	// (0x00018e0b) volume_small_pane_g7

0xbef1,	// (0x00018e14) volume_small_pane_g8

0xbefa,	// (0x00018e1d) volume_small_pane_g9

0xbf03,	// (0x00018e26) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x0001c7de) volume_small_pane_g

0x31e9,	// (0x0001010c) bg_active_tab_pane_cp2_ParamLimits

0x31e9,	// (0x0001010c) bg_active_tab_pane_cp2

0x31f7,	// (0x0001011a) tabs_3_active_pane_g1

0x31ff,	// (0x00010122) tabs_3_active_pane_t1

0x31e9,	// (0x0001010c) bg_passive_tab_pane_cp2_ParamLimits

0x31e9,	// (0x0001010c) bg_passive_tab_pane_cp2

0x31f7,	// (0x0001011a) tabs_3_passive_pane_g1

0x31ff,	// (0x00010122) tabs_3_passive_pane_t1

0x31e9,	// (0x0001010c) bg_active_tab_pane_cp3_ParamLimits

0x31e9,	// (0x0001010c) bg_active_tab_pane_cp3

0x3211,	// (0x00010134) tabs_4_active_pane_g1

0x3219,	// (0x0001013c) tabs_4_active_pane_t1

0x31e9,	// (0x0001010c) bg_passive_tab_pane_cp3_ParamLimits

0x31e9,	// (0x0001010c) bg_passive_tab_pane_cp3

0x3211,	// (0x00010134) tabs_4_1_passive_pane_g1

0x3219,	// (0x0001013c) tabs_4_1_passive_pane_t1

0x4fff,	// (0x00011f22) list_highlight_pane_cp2

0xc1ae,	// (0x000190d1) list_set_pane_ParamLimits

0xc1ae,	// (0x000190d1) list_set_pane

0xc23c,	// (0x0001915f) main_pane_set_t1_ParamLimits

0xc23c,	// (0x0001915f) main_pane_set_t1

0xc25c,	// (0x0001917f) main_pane_set_t2_ParamLimits

0xc25c,	// (0x0001917f) main_pane_set_t2

0xc26e,	// (0x00019191) main_pane_set_t3_ParamLimits

0xc26e,	// (0x00019191) main_pane_set_t3

0xc280,	// (0x000191a3) main_pane_set_t4_ParamLimits

0xc280,	// (0x000191a3) main_pane_set_t4

0x0003,

0xf98b,	// (0x0001c8ae) main_pane_set_t_ParamLimits

0xf98b,	// (0x0001c8ae) main_pane_set_t

0xc292,	// (0x000191b5) setting_code_pane

0xc29a,	// (0x000191bd) setting_slider_graphic_pane

0xc29a,	// (0x000191bd) setting_slider_pane

0xc29a,	// (0x000191bd) setting_text_pane

0xc29a,	// (0x000191bd) setting_volume_pane

0xb7f0,	// (0x00018713) volume_set_pane

0x31e9,	// (0x0001010c) bg_set_opt_pane_cp

0x36a8,	// (0x000105cb) setting_slider_pane_t1

0xb7f8,	// (0x0001871b) setting_slider_pane_t2

0xb811,	// (0x00018734) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0001c49d) setting_slider_pane_t

0x36be,	// (0x000105e1) slider_set_pane

0x3109,	// (0x0001002c) bg_set_opt_pane_cp2

0x322b,	// (0x0001014e) setting_slider_graphic_pane_g1

0xb828,	// (0x0001874b) setting_slider_graphic_pane_t1

0xb837,	// (0x0001875a) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0001c4a4) setting_slider_graphic_pane_t

0xb846,	// (0x00018769) slider_set_pane_cp

0x3109,	// (0x0001002c) input_focus_pane_cp1

0x7ddf,	// (0x00014d02) list_set_text_pane

0x3022,	// (0x0000ff45) setting_text_pane_g1

0x3109,	// (0x0001002c) input_focus_pane_cp2

0x3022,	// (0x0000ff45) setting_code_pane_g1

0x3234,	// (0x00010157) setting_code_pane_t1

0xa6b5,	// (0x000175d8) set_text_pane_t1_ParamLimits

0xa6b5,	// (0x000175d8) set_text_pane_t1

0x4025,	// (0x00010f48) set_opt_bg_pane_g1

0x402d,	// (0x00010f50) set_opt_bg_pane_g2

0xc16e,	// (0x00019091) set_opt_bg_pane_g3

0x403d,	// (0x00010f60) set_opt_bg_pane_g4

0x4045,	// (0x00010f68) set_opt_bg_pane_g5

0x404d,	// (0x00010f70) set_opt_bg_pane_g6

0xc176,	// (0x00019099) set_opt_bg_pane_g7

0xc17e,	// (0x000190a1) set_opt_bg_pane_g8

0xc186,	// (0x000190a9) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0001c89b) set_opt_bg_pane_g

0x7dd2,	// (0x00014cf5) slider_set_pane_g1

0xc14c,	// (0x0001906f) slider_set_pane_g2

0x0006,

0xf969,	// (0x0001c88c) slider_set_pane_g

0xc0fc,	// (0x0001901f) volume_set_pane_g1

0xc104,	// (0x00019027) volume_set_pane_g2

0xc10c,	// (0x0001902f) volume_set_pane_g3

0xc114,	// (0x00019037) volume_set_pane_g4

0xc11c,	// (0x0001903f) volume_set_pane_g5

0xc124,	// (0x00019047) volume_set_pane_g6

0xc12c,	// (0x0001904f) volume_set_pane_g7

0xc134,	// (0x00019057) volume_set_pane_g8

0xc13c,	// (0x0001905f) volume_set_pane_g9

0xc144,	// (0x00019067) volume_set_pane_g10

0x0009,

0xf941,	// (0x0001c864) volume_set_pane_g

0x325d,	// (0x00010180) indicator_pane_ParamLimits

0x325d,	// (0x00010180) indicator_pane

0x3269,	// (0x0001018c) main_idle_pane_g2_ParamLimits

0x3269,	// (0x0001018c) main_idle_pane_g2

0x328d,	// (0x000101b0) main_pane_idle_g1_ParamLimits

0x328d,	// (0x000101b0) main_pane_idle_g1

0x329a,	// (0x000101bd) popup_clock_digital_analogue_window_ParamLimits

0x329a,	// (0x000101bd) popup_clock_digital_analogue_window

0x32b1,	// (0x000101d4) soft_indicator_pane_ParamLimits

0x32b1,	// (0x000101d4) soft_indicator_pane

0x32bd,	// (0x000101e0) wallpaper_pane_ParamLimits

0x32bd,	// (0x000101e0) wallpaper_pane

0x3022,	// (0x0000ff45) wallpaper_pane_g1

0x32d1,	// (0x000101f4) indicator_pane_g1_ParamLimits

0x32d1,	// (0x000101f4) indicator_pane_g1

0x7eec,	// (0x00014e0f) navi_navi_icon_text_pane_srt_g1

0x32ec,	// (0x0001020f) soft_indicator_pane_t1

0x3306,	// (0x00010229) aid_ps_area_pane

0x3317,	// (0x0001023a) aid_ps_clock_pane

0x3323,	// (0x00010246) aid_ps_indicator_pane

0x332f,	// (0x00010252) indicator_ps_pane_ParamLimits

0x332f,	// (0x00010252) indicator_ps_pane

0x333e,	// (0x00010261) power_save_pane_g1_ParamLimits

0x333e,	// (0x00010261) power_save_pane_g1

0x334a,	// (0x0001026d) power_save_pane_g2_ParamLimits

0x334a,	// (0x0001026d) power_save_pane_g2

0xb56d,	// (0x00018490) aid_navinavi_width_pane

0x3306,	// (0x00010229) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0001c4a9) power_save_pane_g_ParamLimits

0xf586,	// (0x0001c4a9) power_save_pane_g

0x3358,	// (0x0001027b) power_save_pane_t1_ParamLimits

0x3358,	// (0x0001027b) power_save_pane_t1

0x3317,	// (0x0001023a) aid_ps_clock_pane_ParamLimits

0x3323,	// (0x00010246) aid_ps_indicator_pane_ParamLimits

0x336a,	// (0x0001028d) power_save_pane_t4_ParamLimits

0x336a,	// (0x0001028d) power_save_pane_t4

0x0001,

0xf58b,	// (0x0001c4ae) power_save_pane_t_ParamLimits

0xf58b,	// (0x0001c4ae) power_save_pane_t

0x3394,	// (0x000102b7) power_save_t3_ParamLimits

0x3394,	// (0x000102b7) power_save_t3

0x337f,	// (0x000102a2) power_save_t2_ParamLimits

0x337f,	// (0x000102a2) power_save_t2

0x33a9,	// (0x000102cc) indicator_ps_pane_g1

0x33b2,	// (0x000102d5) ai_gene_pane_ParamLimits

0x33b2,	// (0x000102d5) ai_gene_pane

0x33be,	// (0x000102e1) ai_links_pane_ParamLimits

0x33be,	// (0x000102e1) ai_links_pane

0x33ca,	// (0x000102ed) indicator_pane_cp1_ParamLimits

0x33ca,	// (0x000102ed) indicator_pane_cp1

0x33d6,	// (0x000102f9) main_pane_idle_g1_cp_ParamLimits

0x33d6,	// (0x000102f9) main_pane_idle_g1_cp

0x33e2,	// (0x00010305) popup_ai_links_title_window

0x33eb,	// (0x0001030e) soft_indicator_pane_cp1_ParamLimits

0x33eb,	// (0x0001030e) soft_indicator_pane_cp1

0x7c14,	// (0x00014b37) ai_links_pane_g1

0x7c1d,	// (0x00014b40) grid_ai_links_pane

0xc0b2,	// (0x00018fd5) ai_gene_pane_1

0x7c02,	// (0x00014b25) ai_gene_pane_2

0x7c0b,	// (0x00014b2e) list_highlight_pane_cp4

0xc096,	// (0x00018fb9) cell_ai_link_pane_ParamLimits

0xc096,	// (0x00018fb9) cell_ai_link_pane

0x7bfa,	// (0x00014b1d) cell_ai_link_pane_g1

0x3624,	// (0x00010547) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x0001c83f) cell_ai_link_pane_g

0x3109,	// (0x0001002c) grid_highlight_cp2

0x3109,	// (0x0001002c) bg_popup_sub_pane_cp1

0x3405,	// (0x00010328) popup_ai_links_title_window_t1

0x7b4c,	// (0x00014a6f) ai_gene_pane_1_g1_ParamLimits

0x7b4c,	// (0x00014a6f) ai_gene_pane_1_g1

0x7b58,	// (0x00014a7b) ai_gene_pane_1_g2_ParamLimits

0x7b58,	// (0x00014a7b) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x0001c835) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x0001c835) ai_gene_pane_1_g

0x7b65,	// (0x00014a88) ai_gene_pane_1_t1_ParamLimits

0x7b65,	// (0x00014a88) ai_gene_pane_1_t1

0x7b99,	// (0x00014abc) grid_ai_soft_ind_pane

0x7b37,	// (0x00014a5a) ai_gene_pane_2_t1_ParamLimits

0x7b37,	// (0x00014a5a) ai_gene_pane_2_t1

0x3414,	// (0x00010337) main_pane_empty_t1_ParamLimits

0x3414,	// (0x00010337) main_pane_empty_t1

0x3431,	// (0x00010354) main_pane_empty_t2_ParamLimits

0x3431,	// (0x00010354) main_pane_empty_t2

0x3449,	// (0x0001036c) main_pane_empty_t3_ParamLimits

0x3449,	// (0x0001036c) main_pane_empty_t3

0x345c,	// (0x0001037f) main_pane_empty_t4_ParamLimits

0x345c,	// (0x0001037f) main_pane_empty_t4

0x346f,	// (0x00010392) main_pane_empty_t5_ParamLimits

0x346f,	// (0x00010392) main_pane_empty_t5

0x0004,

0xf590,	// (0x0001c4b3) main_pane_empty_t_ParamLimits

0xf590,	// (0x0001c4b3) main_pane_empty_t

0x4117,	// (0x0001103a) bg_popup_window_pane_ParamLimits

0x4117,	// (0x0001103a) bg_popup_window_pane

0x78e6,	// (0x00014809) find_popup_pane_cp2_ParamLimits

0x78e6,	// (0x00014809) find_popup_pane_cp2

0x78f2,	// (0x00014815) heading_pane_ParamLimits

0x78f2,	// (0x00014815) heading_pane

0x3109,	// (0x0001002c) bg_popup_sub_pane

0xc019,	// (0x00018f3c) bg_popup_window_pane_g1_ParamLimits

0xc019,	// (0x00018f3c) bg_popup_window_pane_g1

0xc025,	// (0x00018f48) bg_popup_window_pane_g2_ParamLimits

0xc025,	// (0x00018f48) bg_popup_window_pane_g2

0xc031,	// (0x00018f54) bg_popup_window_pane_g3_ParamLimits

0xc031,	// (0x00018f54) bg_popup_window_pane_g3

0xc03d,	// (0x00018f60) bg_popup_window_pane_g4_ParamLimits

0xc03d,	// (0x00018f60) bg_popup_window_pane_g4

0xc049,	// (0x00018f6c) bg_popup_window_pane_g5_ParamLimits

0xc049,	// (0x00018f6c) bg_popup_window_pane_g5

0xc055,	// (0x00018f78) bg_popup_window_pane_g6_ParamLimits

0xc055,	// (0x00018f78) bg_popup_window_pane_g6

0xc061,	// (0x00018f84) bg_popup_window_pane_g7_ParamLimits

0xc061,	// (0x00018f84) bg_popup_window_pane_g7

0xc06d,	// (0x00018f90) bg_popup_window_pane_g8_ParamLimits

0xc06d,	// (0x00018f90) bg_popup_window_pane_g8

0xc079,	// (0x00018f9c) bg_popup_window_pane_g9_ParamLimits

0xc079,	// (0x00018f9c) bg_popup_window_pane_g9

0x78cb,	// (0x000147ee) bg_popup_window_pane_g10_ParamLimits

0x78cb,	// (0x000147ee) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x0001c7fd) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x0001c7fd) bg_popup_window_pane_g

0x7882,	// (0x000147a5) bg_popup_heading_pane_ParamLimits

0x7882,	// (0x000147a5) bg_popup_heading_pane

0xc3fc,	// (0x0001931f) tabs_4_passive_pane_cp_srt_ParamLimits

0xc3fc,	// (0x0001931f) tabs_4_passive_pane_cp_srt

0xc40e,	// (0x00019331) tabs_4_passive_pane_srt_ParamLimits

0x7896,	// (0x000147b9) heading_pane_g2

0xc40e,	// (0x00019331) tabs_4_passive_pane_srt

0x4fff,	// (0x00011f22) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4fff,	// (0x00011f22) bg_passive_tab_pane_cp3_srt

0x789e,	// (0x000147c1) heading_pane_t1_ParamLimits

0x789e,	// (0x000147c1) heading_pane_t1

0x78b5,	// (0x000147d8) heading_pane_t2_ParamLimits

0x78b5,	// (0x000147d8) heading_pane_t2

0x0001,

0xf8d5,	// (0x0001c7f8) heading_pane_t_ParamLimits

0xf8d5,	// (0x0001c7f8) heading_pane_t

0x61a6,	// (0x000130c9) bg_popup_heading_pane_g1

0x624f,	// (0x00013172) bg_popup_heading_pane_g2

0x6257,	// (0x0001317a) bg_popup_heading_pane_g3

0x625f,	// (0x00013182) bg_popup_heading_pane_g4

0x6267,	// (0x0001318a) bg_popup_heading_pane_g5

0x626f,	// (0x00013192) bg_popup_heading_pane_g6

0x6277,	// (0x0001319a) bg_popup_heading_pane_g7

0x627f,	// (0x000131a2) bg_popup_heading_pane_g8

0x6287,	// (0x000131aa) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x0001c7b4) bg_popup_heading_pane_g

0x5954,	// (0x00012877) bg_popup_sub_pane_g1

0x5964,	// (0x00012887) bg_popup_sub_pane_g2

0x595c,	// (0x0001287f) bg_popup_sub_pane_g3

0x5974,	// (0x00012897) bg_popup_sub_pane_g4

0x596c,	// (0x0001288f) bg_popup_sub_pane_g5

0x597c,	// (0x0001289f) bg_popup_sub_pane_g6

0x5984,	// (0x000128a7) bg_popup_sub_pane_g7

0x5994,	// (0x000128b7) bg_popup_sub_pane_g8

0x598c,	// (0x000128af) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x0001c78e) bg_popup_sub_pane_g

0x3482,	// (0x000103a5) bg_popup_window_pane_cp5_ParamLimits

0x3482,	// (0x000103a5) bg_popup_window_pane_cp5

0x349e,	// (0x000103c1) popup_note_window_g1_ParamLimits

0x349e,	// (0x000103c1) popup_note_window_g1

0x34aa,	// (0x000103cd) popup_note_window_t1_ParamLimits

0x34aa,	// (0x000103cd) popup_note_window_t1

0x34c0,	// (0x000103e3) popup_note_window_t2_ParamLimits

0x34c0,	// (0x000103e3) popup_note_window_t2

0x34d6,	// (0x000103f9) popup_note_window_t3_ParamLimits

0x34d6,	// (0x000103f9) popup_note_window_t3

0x34ec,	// (0x0001040f) popup_note_window_t4_ParamLimits

0x34ec,	// (0x0001040f) popup_note_window_t4

0x3514,	// (0x00010437) popup_note_window_t5_ParamLimits

0x3514,	// (0x00010437) popup_note_window_t5

0x0004,

0xf59b,	// (0x0001c4be) popup_note_window_t_ParamLimits

0xf59b,	// (0x0001c4be) popup_note_window_t

0x3538,	// (0x0001045b) bg_popup_window_pane_cp6_ParamLimits

0x3538,	// (0x0001045b) bg_popup_window_pane_cp6

0x6122,	// (0x00013045) popup_note_image_window_g1_ParamLimits

0x6122,	// (0x00013045) popup_note_image_window_g1

0x612e,	// (0x00013051) popup_note_image_window_g2_ParamLimits

0x612e,	// (0x00013051) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x0001c782) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x0001c782) popup_note_image_window_g

0x6147,	// (0x0001306a) popup_note_image_window_t1_ParamLimits

0x6147,	// (0x0001306a) popup_note_image_window_t1

0x6160,	// (0x00013083) popup_note_image_window_t2_ParamLimits

0x6160,	// (0x00013083) popup_note_image_window_t2

0x6179,	// (0x0001309c) popup_note_image_window_t3_ParamLimits

0x6179,	// (0x0001309c) popup_note_image_window_t3

0x0002,

0xf864,	// (0x0001c787) popup_note_image_window_t_ParamLimits

0xf864,	// (0x0001c787) popup_note_image_window_t

0x5ff1,	// (0x00012f14) bg_popup_window_pane_cp7_ParamLimits

0x5ff1,	// (0x00012f14) bg_popup_window_pane_cp7

0x6021,	// (0x00012f44) popup_note_wait_window_g1_ParamLimits

0x6021,	// (0x00012f44) popup_note_wait_window_g1

0x602d,	// (0x00012f50) popup_note_wait_window_g2_ParamLimits

0x602d,	// (0x00012f50) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x0001c770) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x0001c770) popup_note_wait_window_g

0x6045,	// (0x00012f68) popup_note_wait_window_t1_ParamLimits

0x6045,	// (0x00012f68) popup_note_wait_window_t1

0x606c,	// (0x00012f8f) popup_note_wait_window_t2_ParamLimits

0x606c,	// (0x00012f8f) popup_note_wait_window_t2

0x6089,	// (0x00012fac) popup_note_wait_window_t3_ParamLimits

0x6089,	// (0x00012fac) popup_note_wait_window_t3

0x609c,	// (0x00012fbf) popup_note_wait_window_t4_ParamLimits

0x609c,	// (0x00012fbf) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x0001c777) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x0001c777) popup_note_wait_window_t

0x60c1,	// (0x00012fe4) wait_bar_pane_ParamLimits

0x60c1,	// (0x00012fe4) wait_bar_pane

0x3109,	// (0x0001002c) wait_anim_pane

0x3109,	// (0x0001002c) wait_border_pane

0x3022,	// (0x0000ff45) wait_anim_pane_g1

0x3022,	// (0x0000ff45) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0001c63d) wait_anim_pane_g

0x5fa1,	// (0x00012ec4) wait_border_pane_g1

0x5faa,	// (0x00012ecd) wait_border_pane_g2

0x5fb3,	// (0x00012ed6) wait_border_pane_g3

0x0002,

0xf846,	// (0x0001c769) wait_border_pane_g

0x5e11,	// (0x00012d34) bg_popup_window_pane_cp16_ParamLimits

0x5e11,	// (0x00012d34) bg_popup_window_pane_cp16

0x5f11,	// (0x00012e34) indicator_popup_pane_cp4_ParamLimits

0x5f11,	// (0x00012e34) indicator_popup_pane_cp4

0x5f25,	// (0x00012e48) popup_query_data_window_t1_ParamLimits

0x5f25,	// (0x00012e48) popup_query_data_window_t1

0x5f37,	// (0x00012e5a) popup_query_data_window_t2_ParamLimits

0x5f37,	// (0x00012e5a) popup_query_data_window_t2

0x5f50,	// (0x00012e73) popup_query_data_window_t3_ParamLimits

0x5f50,	// (0x00012e73) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x0001c762) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x0001c762) popup_query_data_window_t

0x5f6a,	// (0x00012e8d) query_popup_data_pane_ParamLimits

0x5f6a,	// (0x00012e8d) query_popup_data_pane

0x5f7e,	// (0x00012ea1) query_popup_data_pane_cp1_ParamLimits

0x5f7e,	// (0x00012ea1) query_popup_data_pane_cp1

0x5e11,	// (0x00012d34) bg_popup_window_pane_cp10_ParamLimits

0x5e11,	// (0x00012d34) bg_popup_window_pane_cp10

0x5e43,	// (0x00012d66) indicator_popup_pane_ParamLimits

0x5e43,	// (0x00012d66) indicator_popup_pane

0x5e65,	// (0x00012d88) popup_query_code_window_t1_ParamLimits

0x5e65,	// (0x00012d88) popup_query_code_window_t1

0x5e7f,	// (0x00012da2) popup_query_code_window_t2_ParamLimits

0x5e7f,	// (0x00012da2) popup_query_code_window_t2

0x5ec8,	// (0x00012deb) popup_query_code_window_t3_ParamLimits

0x5ec8,	// (0x00012deb) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0001c75b) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0001c75b) popup_query_code_window_t

0x5ef7,	// (0x00012e1a) query_popup_pane_ParamLimits

0x5ef7,	// (0x00012e1a) query_popup_pane

0x3538,	// (0x0001045b) bg_popup_window_pane_cp15_ParamLimits

0x3538,	// (0x0001045b) bg_popup_window_pane_cp15

0x3556,	// (0x00010479) indicator_popup_pane_cp1_ParamLimits

0x3556,	// (0x00010479) indicator_popup_pane_cp1

0x3569,	// (0x0001048c) indicator_popup_pane_cp2_ParamLimits

0x3569,	// (0x0001048c) indicator_popup_pane_cp2

0x357c,	// (0x0001049f) popup_query_data_code_window_g1_ParamLimits

0x357c,	// (0x0001049f) popup_query_data_code_window_g1

0x358f,	// (0x000104b2) popup_query_data_code_window_t1_ParamLimits

0x358f,	// (0x000104b2) popup_query_data_code_window_t1

0x35a1,	// (0x000104c4) popup_query_data_code_window_t2_ParamLimits

0x35a1,	// (0x000104c4) popup_query_data_code_window_t2

0x35b3,	// (0x000104d6) popup_query_data_code_window_t3_ParamLimits

0x35b3,	// (0x000104d6) popup_query_data_code_window_t3

0x35c9,	// (0x000104ec) popup_query_data_code_window_t4_ParamLimits

0x35c9,	// (0x000104ec) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0001c4c9) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0001c4c9) popup_query_data_code_window_t

0x4b0d,	// (0x00011a30) list_single_midp_graphic_pane_g3

0x35e1,	// (0x00010504) query_popup_data_pane_cp2_ParamLimits

0x35f4,	// (0x00010517) query_popup_pane_cp2_ParamLimits

0x35f4,	// (0x00010517) query_popup_pane_cp2

0x3109,	// (0x0001002c) bg_popup_window_pane_cp11

0x5e09,	// (0x00012d2c) heading_pane_cp5

0x3704,	// (0x00010627) listscroll_popup_info_pane

0x3109,	// (0x0001002c) input_focus_pane_cp3

0x3607,	// (0x0001052a) query_popup_pane_t1

0x3615,	// (0x00010538) list_popup_info_pane_ParamLimits

0x3615,	// (0x00010538) list_popup_info_pane

0x3624,	// (0x00010547) listscroll_popup_info_pane_g1

0x362c,	// (0x0001054f) scroll_pane_cp7

0x3634,	// (0x00010557) popup_info_list_pane_t1_ParamLimits

0x3634,	// (0x00010557) popup_info_list_pane_t1

0x364e,	// (0x00010571) popup_info_list_pane_t2_ParamLimits

0x364e,	// (0x00010571) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0001c4d2) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0001c4d2) popup_info_list_pane_t

0x3109,	// (0x0001002c) bg_popup_window_pane_cp12

0x7f06,	// (0x00014e29) find_popup_pane

0x31e9,	// (0x0001010c) bg_popup_window_pane_cp3

0x3668,	// (0x0001058b) heading_pane_cp3

0x3674,	// (0x00010597) listscroll_popup_graphic_pane

0x3109,	// (0x0001002c) bg_popup_window_pane_cp4

0x36fc,	// (0x0001061f) heading_pane_cp4

0x3704,	// (0x00010627) listscroll_popup_colour_pane

0x370c,	// (0x0001062f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x370c,	// (0x0001062f) cell_large_graphic_colour_none_popup_pane

0x371c,	// (0x0001063f) grid_large_graphic_colour_popup_pane_ParamLimits

0x371c,	// (0x0001063f) grid_large_graphic_colour_popup_pane

0x3738,	// (0x0001065b) listscroll_popup_colour_pane_g1_ParamLimits

0x3738,	// (0x0001065b) listscroll_popup_colour_pane_g1

0x374f,	// (0x00010672) listscroll_popup_colour_pane_g2_ParamLimits

0x374f,	// (0x00010672) listscroll_popup_colour_pane_g2

0x3763,	// (0x00010686) listscroll_popup_colour_pane_g3_ParamLimits

0x3763,	// (0x00010686) listscroll_popup_colour_pane_g3

0x3773,	// (0x00010696) listscroll_popup_colour_pane_g4_ParamLimits

0x3773,	// (0x00010696) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0001c4d7) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0001c4d7) listscroll_popup_colour_pane_g

0x3782,	// (0x000106a5) scroll_pane_cp6_ParamLimits

0x3782,	// (0x000106a5) scroll_pane_cp6

0x3794,	// (0x000106b7) cell_large_graphic_colour_popup_pane_ParamLimits

0x3794,	// (0x000106b7) cell_large_graphic_colour_popup_pane

0x37b3,	// (0x000106d6) cell_large_graphic_colour_none_popup_pane_t1

0x3109,	// (0x0001002c) grid_highlight_pane_cp5

0x37c2,	// (0x000106e5) cell_large_graphic_colour_popup_pane_g1

0x37ca,	// (0x000106ed) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0001c4e0) cell_large_graphic_colour_popup_pane_g

0x37d2,	// (0x000106f5) cell_large_graphic_colour_popup_pane_g2_copy1

0x37db,	// (0x000106fe) grid_highlight_pane_cp4

0x37e3,	// (0x00010706) bg_popup_window_pane_cp8_ParamLimits

0x37e3,	// (0x00010706) bg_popup_window_pane_cp8

0x37fe,	// (0x00010721) popup_snote_single_text_window_g1_ParamLimits

0x37fe,	// (0x00010721) popup_snote_single_text_window_g1

0x3810,	// (0x00010733) popup_snote_single_text_window_t1_ParamLimits

0x3810,	// (0x00010733) popup_snote_single_text_window_t1

0x3823,	// (0x00010746) popup_snote_single_text_window_t2_ParamLimits

0x3823,	// (0x00010746) popup_snote_single_text_window_t2

0x3836,	// (0x00010759) popup_snote_single_text_window_t3_ParamLimits

0x3836,	// (0x00010759) popup_snote_single_text_window_t3

0x386f,	// (0x00010792) popup_snote_single_text_window_t4_ParamLimits

0x386f,	// (0x00010792) popup_snote_single_text_window_t4

0x38a3,	// (0x000107c6) popup_snote_single_text_window_t5_ParamLimits

0x38a3,	// (0x000107c6) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0001c4e5) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0001c4e5) popup_snote_single_text_window_t

0x38d2,	// (0x000107f5) bg_popup_window_pane_cp9_ParamLimits

0x38d2,	// (0x000107f5) bg_popup_window_pane_cp9

0x37fe,	// (0x00010721) popup_snote_single_graphic_window_g1_ParamLimits

0x37fe,	// (0x00010721) popup_snote_single_graphic_window_g1

0x38e0,	// (0x00010803) popup_snote_single_graphic_window_g2_ParamLimits

0x38e0,	// (0x00010803) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0001c4f0) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0001c4f0) popup_snote_single_graphic_window_g

0x38ec,	// (0x0001080f) popup_snote_single_graphic_window_t1_ParamLimits

0x38ec,	// (0x0001080f) popup_snote_single_graphic_window_t1

0x38ff,	// (0x00010822) popup_snote_single_graphic_window_t2_ParamLimits

0x38ff,	// (0x00010822) popup_snote_single_graphic_window_t2

0x3836,	// (0x00010759) popup_snote_single_graphic_window_t3_ParamLimits

0x3836,	// (0x00010759) popup_snote_single_graphic_window_t3

0x386f,	// (0x00010792) popup_snote_single_graphic_window_t4_ParamLimits

0x386f,	// (0x00010792) popup_snote_single_graphic_window_t4

0x38a3,	// (0x000107c6) popup_snote_single_graphic_window_t5_ParamLimits

0x38a3,	// (0x000107c6) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0001c4f5) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0001c4f5) popup_snote_single_graphic_window_t

0xc38d,	// (0x000192b0) grid_graphic_popup_pane_ParamLimits

0xc38d,	// (0x000192b0) grid_graphic_popup_pane

0xc3b0,	// (0x000192d3) listscroll_popup_graphic_pane_g1_ParamLimits

0xc3b0,	// (0x000192d3) listscroll_popup_graphic_pane_g1

0xc3c4,	// (0x000192e7) listscroll_popup_graphic_pane_g2_ParamLimits

0xc3c4,	// (0x000192e7) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x0001c8d8) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x0001c8d8) listscroll_popup_graphic_pane_g

0x7842,	// (0x00014765) scroll_pane_cp5

0xc346,	// (0x00019269) cell_graphic_popup_pane_ParamLimits

0xc346,	// (0x00019269) cell_graphic_popup_pane

0x7eaf,	// (0x00014dd2) cell_graphic_popup_pane_g1

0x7eb7,	// (0x00014dda) cell_graphic_popup_pane_g2

0x37d2,	// (0x000106f5) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x0001c8d1) cell_graphic_popup_pane_g

0x7ec0,	// (0x00014de3) cell_graphic_popup_pane_t2

0x37db,	// (0x000106fe) grid_highlight_pane_cp3

0x3924,	// (0x00010847) list_gen_pane_ParamLimits

0x3924,	// (0x00010847) list_gen_pane

0x3955,	// (0x00010878) scroll_pane

0xc317,	// (0x0001923a) bg_list_pane_g1_ParamLimits

0xc317,	// (0x0001923a) bg_list_pane_g1

0x7e66,	// (0x00014d89) bg_list_pane_g2_ParamLimits

0x7e66,	// (0x00014d89) bg_list_pane_g2

0x7e79,	// (0x00014d9c) bg_list_pane_g3_ParamLimits

0x7e79,	// (0x00014d9c) bg_list_pane_g3

0x7e8b,	// (0x00014dae) bg_list_pane_g4_ParamLimits

0x7e8b,	// (0x00014dae) bg_list_pane_g4

0xc32e,	// (0x00019251) bg_list_pane_g5_ParamLimits

0xc32e,	// (0x00019251) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x0001c8c6) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x0001c8c6) bg_list_pane_g

0xc2c7,	// (0x000191ea) list_double2_graphic_large_graphic_pane_ParamLimits

0xc2c7,	// (0x000191ea) list_double2_graphic_large_graphic_pane

0xc2c7,	// (0x000191ea) list_double2_graphic_pane_ParamLimits

0xc2c7,	// (0x000191ea) list_double2_graphic_pane

0xc2c7,	// (0x000191ea) list_double2_large_graphic_pane_ParamLimits

0xc2c7,	// (0x000191ea) list_double2_large_graphic_pane

0xc2c7,	// (0x000191ea) list_double2_pane_ParamLimits

0xc2c7,	// (0x000191ea) list_double2_pane

0xc2c7,	// (0x000191ea) list_double_graphic_heading_pane_ParamLimits

0xc2c7,	// (0x000191ea) list_double_graphic_heading_pane

0xc2c7,	// (0x000191ea) list_double_graphic_pane_ParamLimits

0xc2c7,	// (0x000191ea) list_double_graphic_pane

0xc2c7,	// (0x000191ea) list_double_heading_pane_ParamLimits

0xc2c7,	// (0x000191ea) list_double_heading_pane

0xc2c7,	// (0x000191ea) list_double_large_graphic_pane_ParamLimits

0xc2c7,	// (0x000191ea) list_double_large_graphic_pane

0xc2c7,	// (0x000191ea) list_double_number_pane_ParamLimits

0xc2c7,	// (0x000191ea) list_double_number_pane

0xc2c7,	// (0x000191ea) list_double_pane_ParamLimits

0xc2c7,	// (0x000191ea) list_double_pane

0xc2c7,	// (0x000191ea) list_double_time_pane_ParamLimits

0xc2c7,	// (0x000191ea) list_double_time_pane

0xc2c7,	// (0x000191ea) list_setting_number_pane_ParamLimits

0xc2c7,	// (0x000191ea) list_setting_number_pane

0xc2c7,	// (0x000191ea) list_setting_pane_ParamLimits

0xc2c7,	// (0x000191ea) list_setting_pane

0xaf3f,	// (0x00017e62) list_single_2graphic_pane_ParamLimits

0xaf3f,	// (0x00017e62) list_single_2graphic_pane

0xaf3f,	// (0x00017e62) list_single_graphic_heading_pane_ParamLimits

0xaf3f,	// (0x00017e62) list_single_graphic_heading_pane

0xaf3f,	// (0x00017e62) list_single_graphic_pane_ParamLimits

0xaf3f,	// (0x00017e62) list_single_graphic_pane

0xaf3f,	// (0x00017e62) list_single_heading_pane_ParamLimits

0xaf3f,	// (0x00017e62) list_single_heading_pane

0xaf56,	// (0x00017e79) list_single_large_graphic_pane_ParamLimits

0xaf56,	// (0x00017e79) list_single_large_graphic_pane

0xaf3f,	// (0x00017e62) list_single_number_heading_pane_ParamLimits

0xaf3f,	// (0x00017e62) list_single_number_heading_pane

0xaf3f,	// (0x00017e62) list_single_number_pane_ParamLimits

0xaf3f,	// (0x00017e62) list_single_number_pane

0xaf3f,	// (0x00017e62) list_single_pane_ParamLimits

0xaf3f,	// (0x00017e62) list_single_pane

0x3109,	// (0x0001002c) list_highlight_pane_cp1

0xa6dd,	// (0x00017600) list_single_pane_g1_ParamLimits

0xa6dd,	// (0x00017600) list_single_pane_g1

0xa6e9,	// (0x0001760c) list_single_pane_g2_ParamLimits

0xa6e9,	// (0x0001760c) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0001c507) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0001c507) list_single_pane_g

0xaeff,	// (0x00017e22) list_single_pane_t1_ParamLimits

0xaeff,	// (0x00017e22) list_single_pane_t1

0xa6dd,	// (0x00017600) list_single_number_pane_g1_ParamLimits

0xa6dd,	// (0x00017600) list_single_number_pane_g1

0xa6e9,	// (0x0001760c) list_single_number_pane_g2_ParamLimits

0xa6e9,	// (0x0001760c) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0001c507) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0001c507) list_single_number_pane_g

0xa6f5,	// (0x00017618) list_single_number_pane_t1_ParamLimits

0xa6f5,	// (0x00017618) list_single_number_pane_t1

0xaec0,	// (0x00017de3) list_single_number_pane_t2_ParamLimits

0xaec0,	// (0x00017de3) list_single_number_pane_t2

0x0001,

0xf964,	// (0x0001c887) list_single_number_pane_t_ParamLimits

0xf964,	// (0x0001c887) list_single_number_pane_t

0xa6d1,	// (0x000175f4) list_single_graphic_pane_g1_ParamLimits

0xa6d1,	// (0x000175f4) list_single_graphic_pane_g1

0xa6dd,	// (0x00017600) list_single_graphic_pane_g2_ParamLimits

0xa6dd,	// (0x00017600) list_single_graphic_pane_g2

0xa6e9,	// (0x0001760c) list_single_graphic_pane_g3_ParamLimits

0xa6e9,	// (0x0001760c) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0001c500) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0001c500) list_single_graphic_pane_g

0xa6f5,	// (0x00017618) list_single_graphic_pane_t1_ParamLimits

0xa6f5,	// (0x00017618) list_single_graphic_pane_t1

0xa6dd,	// (0x00017600) list_single_heading_pane_g1_ParamLimits

0xa6dd,	// (0x00017600) list_single_heading_pane_g1

0xa6e9,	// (0x0001760c) list_single_heading_pane_g2_ParamLimits

0xa6e9,	// (0x0001760c) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001c507) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001c507) list_single_heading_pane_g

0xa70b,	// (0x0001762e) list_single_heading_pane_t1_ParamLimits

0xa70b,	// (0x0001762e) list_single_heading_pane_t1

0xa721,	// (0x00017644) list_single_heading_pane_t2_ParamLimits

0xa721,	// (0x00017644) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0001c50c) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0001c50c) list_single_heading_pane_t

0xa6dd,	// (0x00017600) list_single_number_heading_pane_g1_ParamLimits

0xa6dd,	// (0x00017600) list_single_number_heading_pane_g1

0xa6e9,	// (0x0001760c) list_single_number_heading_pane_g2_ParamLimits

0xa6e9,	// (0x0001760c) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001c507) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001c507) list_single_number_heading_pane_g

0xa70b,	// (0x0001762e) list_single_number_heading_pane_t1_ParamLimits

0xa70b,	// (0x0001762e) list_single_number_heading_pane_t1

0xa733,	// (0x00017656) list_single_number_heading_pane_t2_ParamLimits

0xa733,	// (0x00017656) list_single_number_heading_pane_t2

0xa745,	// (0x00017668) list_single_number_heading_pane_t3_ParamLimits

0xa745,	// (0x00017668) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0001c511) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0001c511) list_single_number_heading_pane_t

0xa6d1,	// (0x000175f4) list_single_graphic_heading_pane_g1_ParamLimits

0xa6d1,	// (0x000175f4) list_single_graphic_heading_pane_g1

0xa757,	// (0x0001767a) list_single_graphic_heading_pane_g4_ParamLimits

0xa757,	// (0x0001767a) list_single_graphic_heading_pane_g4

0xa6e9,	// (0x0001760c) list_single_graphic_heading_pane_g5_ParamLimits

0xa6e9,	// (0x0001760c) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0001c518) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0001c518) list_single_graphic_heading_pane_g

0xa70b,	// (0x0001762e) list_single_graphic_heading_pane_t1_ParamLimits

0xa70b,	// (0x0001762e) list_single_graphic_heading_pane_t1

0xa766,	// (0x00017689) list_single_graphic_heading_pane_t2_ParamLimits

0xa766,	// (0x00017689) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0001c51f) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0001c51f) list_single_graphic_heading_pane_t

0xa778,	// (0x0001769b) list_single_large_graphic_pane_g1_ParamLimits

0xa778,	// (0x0001769b) list_single_large_graphic_pane_g1

0xa784,	// (0x000176a7) list_single_large_graphic_pane_g2_ParamLimits

0xa784,	// (0x000176a7) list_single_large_graphic_pane_g2

0xa790,	// (0x000176b3) list_single_large_graphic_pane_g3_ParamLimits

0xa790,	// (0x000176b3) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0001c524) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0001c524) list_single_large_graphic_pane_g

0x5faa,	// (0x00012ecd) wait_border_pane_g2_copy1

0xa79c,	// (0x000176bf) list_single_large_graphic_pane_g4_cp2

0xa7a4,	// (0x000176c7) list_single_large_graphic_pane_t1_ParamLimits

0xa7a4,	// (0x000176c7) list_single_large_graphic_pane_t1

0xa7ba,	// (0x000176dd) list_double_pane_g1_ParamLimits

0xa7ba,	// (0x000176dd) list_double_pane_g1

0xa7c6,	// (0x000176e9) list_double_pane_g2_ParamLimits

0xa7c6,	// (0x000176e9) list_double_pane_g2

0x0001,

0xf608,	// (0x0001c52b) list_double_pane_g_ParamLimits

0xf608,	// (0x0001c52b) list_double_pane_g

0xa7d2,	// (0x000176f5) list_double_pane_t1_ParamLimits

0xa7d2,	// (0x000176f5) list_double_pane_t1

0xa7e8,	// (0x0001770b) list_double_pane_t2_ParamLimits

0xa7e8,	// (0x0001770b) list_double_pane_t2

0x0001,

0xf60d,	// (0x0001c530) list_double_pane_t_ParamLimits

0xf60d,	// (0x0001c530) list_double_pane_t

0xa7fa,	// (0x0001771d) list_double2_pane_g1_ParamLimits

0xa7fa,	// (0x0001771d) list_double2_pane_g1

0xa7c6,	// (0x000176e9) list_double2_pane_g2_ParamLimits

0xa7c6,	// (0x000176e9) list_double2_pane_g2

0x0001,

0xf612,	// (0x0001c535) list_double2_pane_g_ParamLimits

0xf612,	// (0x0001c535) list_double2_pane_g

0xa7d2,	// (0x000176f5) list_double2_pane_t1_ParamLimits

0xa7d2,	// (0x000176f5) list_double2_pane_t1

0xa809,	// (0x0001772c) list_double2_pane_t2_ParamLimits

0xa809,	// (0x0001772c) list_double2_pane_t2

0x0001,

0xf617,	// (0x0001c53a) list_double2_pane_t_ParamLimits

0xf617,	// (0x0001c53a) list_double2_pane_t

0xa7ba,	// (0x000176dd) list_double_number_pane_g1_ParamLimits

0xa7ba,	// (0x000176dd) list_double_number_pane_g1

0xa7c6,	// (0x000176e9) list_double_number_pane_g2_ParamLimits

0xa7c6,	// (0x000176e9) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0001c52b) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0001c52b) list_double_number_pane_g

0xa81b,	// (0x0001773e) list_double_number_pane_t1_ParamLimits

0xa81b,	// (0x0001773e) list_double_number_pane_t1

0xa82d,	// (0x00017750) list_double_number_pane_t2_ParamLimits

0xa82d,	// (0x00017750) list_double_number_pane_t2

0xa843,	// (0x00017766) list_double_number_pane_t3_ParamLimits

0xa843,	// (0x00017766) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0001c53f) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0001c53f) list_double_number_pane_t

0xa855,	// (0x00017778) list_double_graphic_pane_g1_ParamLimits

0xa855,	// (0x00017778) list_double_graphic_pane_g1

0xa861,	// (0x00017784) list_double_graphic_pane_g2_ParamLimits

0xa861,	// (0x00017784) list_double_graphic_pane_g2

0xa870,	// (0x00017793) list_double_graphic_pane_g3_ParamLimits

0xa870,	// (0x00017793) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0001c546) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0001c546) list_double_graphic_pane_g

0xa888,	// (0x000177ab) list_double_graphic_pane_t1_ParamLimits

0xa888,	// (0x000177ab) list_double_graphic_pane_t1

0xa89e,	// (0x000177c1) list_double_graphic_pane_t2_ParamLimits

0xa89e,	// (0x000177c1) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001c54f) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001c54f) list_double_graphic_pane_t

0xa855,	// (0x00017778) list_double2_graphic_pane_g1_ParamLimits

0xa855,	// (0x00017778) list_double2_graphic_pane_g1

0xa8b0,	// (0x000177d3) list_double2_graphic_pane_g2_ParamLimits

0xa8b0,	// (0x000177d3) list_double2_graphic_pane_g2

0xa8bc,	// (0x000177df) list_double2_graphic_pane_g3_ParamLimits

0xa8bc,	// (0x000177df) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0001c554) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0001c554) list_double2_graphic_pane_g

0xa82d,	// (0x00017750) list_double2_graphic_pane_t1_ParamLimits

0xa82d,	// (0x00017750) list_double2_graphic_pane_t1

0xa8c8,	// (0x000177eb) list_double2_graphic_pane_t2_ParamLimits

0xa8c8,	// (0x000177eb) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0001c55b) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0001c55b) list_double2_graphic_pane_t

0xa8da,	// (0x000177fd) list_double_large_graphic_pane_g1_ParamLimits

0xa8da,	// (0x000177fd) list_double_large_graphic_pane_g1

0xa7fa,	// (0x0001771d) list_double_large_graphic_pane_g2_ParamLimits

0xa7fa,	// (0x0001771d) list_double_large_graphic_pane_g2

0xa7c6,	// (0x000176e9) list_double_large_graphic_pane_g3_ParamLimits

0xa7c6,	// (0x000176e9) list_double_large_graphic_pane_g3

0xa903,	// (0x00017826) list_double_large_graphic_pane_g4_ParamLimits

0xa903,	// (0x00017826) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0001c560) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0001c560) list_double_large_graphic_pane_g

0xa929,	// (0x0001784c) list_double_large_graphic_pane_t1_ParamLimits

0xa929,	// (0x0001784c) list_double_large_graphic_pane_t1

0xa942,	// (0x00017865) list_double_large_graphic_pane_t2_ParamLimits

0xa942,	// (0x00017865) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0001c56b) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0001c56b) list_double_large_graphic_pane_t

0xa954,	// (0x00017877) list_double2_large_graphic_pane_g1_ParamLimits

0xa954,	// (0x00017877) list_double2_large_graphic_pane_g1

0xa7fa,	// (0x0001771d) list_double2_large_graphic_pane_g2_ParamLimits

0xa7fa,	// (0x0001771d) list_double2_large_graphic_pane_g2

0xa7c6,	// (0x000176e9) list_double2_large_graphic_pane_g3_ParamLimits

0xa7c6,	// (0x000176e9) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0001c570) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0001c570) list_double2_large_graphic_pane_g

0xa960,	// (0x00017883) list_double2_large_graphic_pane_t1_ParamLimits

0xa960,	// (0x00017883) list_double2_large_graphic_pane_t1

0xa976,	// (0x00017899) list_double2_large_graphic_pane_t2_ParamLimits

0xa976,	// (0x00017899) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0001c577) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0001c577) list_double2_large_graphic_pane_t

0xa988,	// (0x000178ab) list_double_heading_pane_g1_ParamLimits

0xa988,	// (0x000178ab) list_double_heading_pane_g1

0xa997,	// (0x000178ba) list_double_heading_pane_g2_ParamLimits

0xa997,	// (0x000178ba) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0001c57c) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0001c57c) list_double_heading_pane_g

0xa9a3,	// (0x000178c6) list_double_heading_pane_t1_ParamLimits

0xa9a3,	// (0x000178c6) list_double_heading_pane_t1

0xa9b9,	// (0x000178dc) list_double_heading_pane_t2_ParamLimits

0xa9b9,	// (0x000178dc) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0001c581) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0001c581) list_double_heading_pane_t

0xa9cb,	// (0x000178ee) list_double_graphic_heading_pane_g1_ParamLimits

0xa9cb,	// (0x000178ee) list_double_graphic_heading_pane_g1

0xa988,	// (0x000178ab) list_double_graphic_heading_pane_g2_ParamLimits

0xa988,	// (0x000178ab) list_double_graphic_heading_pane_g2

0xa997,	// (0x000178ba) list_double_graphic_heading_pane_g3_ParamLimits

0xa997,	// (0x000178ba) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0001c586) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0001c586) list_double_graphic_heading_pane_g

0xa9d7,	// (0x000178fa) list_double_graphic_heading_pane_t1_ParamLimits

0xa9d7,	// (0x000178fa) list_double_graphic_heading_pane_t1

0xa9ed,	// (0x00017910) list_double_graphic_heading_pane_t2_ParamLimits

0xa9ed,	// (0x00017910) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0001c58d) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0001c58d) list_double_graphic_heading_pane_t

0xa7fa,	// (0x0001771d) list_double_time_pane_g1_ParamLimits

0xa7fa,	// (0x0001771d) list_double_time_pane_g1

0xa7c6,	// (0x000176e9) list_double_time_pane_g2_ParamLimits

0xa7c6,	// (0x000176e9) list_double_time_pane_g2

0x0001,

0xf612,	// (0x0001c535) list_double_time_pane_g_ParamLimits

0xf612,	// (0x0001c535) list_double_time_pane_g

0xa960,	// (0x00017883) list_double_time_pane_t1_ParamLimits

0xa960,	// (0x00017883) list_double_time_pane_t1

0xa9ff,	// (0x00017922) list_double_time_pane_t2_ParamLimits

0xa9ff,	// (0x00017922) list_double_time_pane_t2

0xaa11,	// (0x00017934) list_double_time_pane_t3_ParamLimits

0xaa11,	// (0x00017934) list_double_time_pane_t3

0xaa23,	// (0x00017946) list_double_time_pane_t4_ParamLimits

0xaa23,	// (0x00017946) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x0001c592) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x0001c592) list_double_time_pane_t

0xaa35,	// (0x00017958) list_setting_pane_g1_ParamLimits

0xaa35,	// (0x00017958) list_setting_pane_g1

0xaa41,	// (0x00017964) list_setting_pane_g2_ParamLimits

0xaa41,	// (0x00017964) list_setting_pane_g2

0x0001,

0xf678,	// (0x0001c59b) list_setting_pane_g_ParamLimits

0xf678,	// (0x0001c59b) list_setting_pane_g

0xaa4d,	// (0x00017970) list_setting_pane_t1_ParamLimits

0xaa4d,	// (0x00017970) list_setting_pane_t1

0xaa64,	// (0x00017987) list_setting_pane_t2_ParamLimits

0xaa64,	// (0x00017987) list_setting_pane_t2

0x0002,

0xf67d,	// (0x0001c5a0) list_setting_pane_t_ParamLimits

0xf67d,	// (0x0001c5a0) list_setting_pane_t

0xaaa1,	// (0x000179c4) set_value_pane_cp_ParamLimits

0xaaa1,	// (0x000179c4) set_value_pane_cp

0xaaad,	// (0x000179d0) list_setting_number_pane_g1_ParamLimits

0xaaad,	// (0x000179d0) list_setting_number_pane_g1

0xaab9,	// (0x000179dc) list_setting_number_pane_g2_ParamLimits

0xaab9,	// (0x000179dc) list_setting_number_pane_g2

0x0001,

0xf684,	// (0x0001c5a7) list_setting_number_pane_g_ParamLimits

0xf684,	// (0x0001c5a7) list_setting_number_pane_g

0xaac5,	// (0x000179e8) list_setting_number_pane_t1_ParamLimits

0xaac5,	// (0x000179e8) list_setting_number_pane_t1

0xaad7,	// (0x000179fa) list_setting_number_pane_t2_ParamLimits

0xaad7,	// (0x000179fa) list_setting_number_pane_t2

0xaaee,	// (0x00017a11) list_setting_number_pane_t3_ParamLimits

0xaaee,	// (0x00017a11) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0001c5ac) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0001c5ac) list_setting_number_pane_t

0xaaa1,	// (0x000179c4) set_value_pane_ParamLimits

0xaaa1,	// (0x000179c4) set_value_pane

0x3de5,	// (0x00010d08) bg_set_opt_pane_ParamLimits

0x3de5,	// (0x00010d08) bg_set_opt_pane

0xab2f,	// (0x00017a52) set_value_pane_t1

0x3e14,	// (0x00010d37) slider_set_pane_cp3

0x3e1d,	// (0x00010d40) volume_small_pane_cp

0x3e26,	// (0x00010d49) list_form_gen_pane

0x3979,	// (0x0001089c) scroll_pane_cp8

0xab45,	// (0x00017a68) form_field_data_pane_ParamLimits

0xab45,	// (0x00017a68) form_field_data_pane

0xab65,	// (0x00017a88) form_field_data_wide_pane_ParamLimits

0xab65,	// (0x00017a88) form_field_data_wide_pane

0xab84,	// (0x00017aa7) form_field_popup_pane_ParamLimits

0xab84,	// (0x00017aa7) form_field_popup_pane

0xab9c,	// (0x00017abf) form_field_popup_wide_pane_ParamLimits

0xab9c,	// (0x00017abf) form_field_popup_wide_pane

0xabb3,	// (0x00017ad6) form_field_slider_pane_ParamLimits

0xabb3,	// (0x00017ad6) form_field_slider_pane

0xabc6,	// (0x00017ae9) form_field_slider_wide_pane_ParamLimits

0xabc6,	// (0x00017ae9) form_field_slider_wide_pane

0x3ed3,	// (0x00010df6) data_form_pane

0x3f5b,	// (0x00010e7e) form_field_data_pane_t1

0x3eff,	// (0x00010e22) input_focus_pane

0x3f0d,	// (0x00010e30) data_form_wide_pane

0xabed,	// (0x00017b10) form_field_data_wide_pane_t1

0x37f0,	// (0x00010713) input_focus_pane_cp6

0xac0f,	// (0x00017b32) form_field_popup_pane_t1

0x3eff,	// (0x00010e22) input_focus_pane_cp7

0x3ed3,	// (0x00010df6) list_form_pane

0xac2f,	// (0x00017b52) form_field_popup_wide_pane_t1

0x3eff,	// (0x00010e22) input_focus_pane_cp8

0x3f90,	// (0x00010eb3) list_form_wide_pane

0xac4c,	// (0x00017b6f) form_field_slider_pane_t1_ParamLimits

0xac4c,	// (0x00017b6f) form_field_slider_pane_t1

0xac5e,	// (0x00017b81) form_field_slider_pane_t2_ParamLimits

0xac5e,	// (0x00017b81) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0001c5bc) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0001c5bc) form_field_slider_pane_t

0x3482,	// (0x000103a5) input_focus_pane_cp9_ParamLimits

0x3482,	// (0x000103a5) input_focus_pane_cp9

0xac70,	// (0x00017b93) slider_cont_pane_ParamLimits

0xac70,	// (0x00017b93) slider_cont_pane

0x3fe3,	// (0x00010f06) form_field_slider_wide_pane_t1_ParamLimits

0x3fe3,	// (0x00010f06) form_field_slider_wide_pane_t1

0xac84,	// (0x00017ba7) form_field_slider_wide_pane_t2_ParamLimits

0xac84,	// (0x00017ba7) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0001c5c1) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0001c5c1) form_field_slider_wide_pane_t

0x3482,	// (0x000103a5) input_focus_pane_cp10_ParamLimits

0x3482,	// (0x000103a5) input_focus_pane_cp10

0xac96,	// (0x00017bb9) slider_cont_pane_cp1_ParamLimits

0xac96,	// (0x00017bb9) slider_cont_pane_cp1

0xacac,	// (0x00017bcf) slider_form_pane_cp

0x4025,	// (0x00010f48) input_focus_pane_g1

0x402d,	// (0x00010f50) input_focus_pane_g2

0x4035,	// (0x00010f58) input_focus_pane_g3

0x403d,	// (0x00010f60) input_focus_pane_g4

0x4045,	// (0x00010f68) input_focus_pane_g5

0x404d,	// (0x00010f70) input_focus_pane_g6

0x4055,	// (0x00010f78) input_focus_pane_g7

0x405d,	// (0x00010f80) input_focus_pane_g8

0x4065,	// (0x00010f88) input_focus_pane_g9

0x3022,	// (0x0000ff45) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0001c5c6) input_focus_pane_g

0x5fb3,	// (0x00012ed6) wait_border_pane_g3_copy1

0xacb4,	// (0x00017bd7) data_form_pane_t1

0x3022,	// (0x0000ff45) wait_anim_pane_g1_copy1

0xaed2,	// (0x00017df5) data_form_wide_pane_t1

0xacce,	// (0x00017bf1) list_form_graphic_pane_cp_ParamLimits

0xacce,	// (0x00017bf1) list_form_graphic_pane_cp

0x7df9,	// (0x00014d1c) slider_form_pane_g1

0x7e02,	// (0x00014d25) slider_form_pane_g2

0x0006,

0xf994,	// (0x0001c8b7) slider_form_pane_g

0xacce,	// (0x00017bf1) list_form_graphic_pane_ParamLimits

0xacce,	// (0x00017bf1) list_form_graphic_pane

0xace4,	// (0x00017c07) list_form_graphic_pane_g1

0xacec,	// (0x00017c0f) list_form_graphic_pane_t1_ParamLimits

0xacec,	// (0x00017c0f) list_form_graphic_pane_t1

0x31e9,	// (0x0001010c) list_highlight_pane_cp5_ParamLimits

0x31e9,	// (0x0001010c) list_highlight_pane_cp5

0xad01,	// (0x00017c24) find_pane_g1

0x40d8,	// (0x00010ffb) input_find_pane

0xad0a,	// (0x00017c2d) input_find_pane_g1_ParamLimits

0xad0a,	// (0x00017c2d) input_find_pane_g1

0xad16,	// (0x00017c39) input_find_pane_t1_ParamLimits

0xad16,	// (0x00017c39) input_find_pane_t1

0xad2b,	// (0x00017c4e) input_find_pane_t2_ParamLimits

0xad2b,	// (0x00017c4e) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0001c5db) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0001c5db) input_find_pane_t

0x4117,	// (0x0001103a) input_focus_pane_cp5_ParamLimits

0x4117,	// (0x0001103a) input_focus_pane_cp5

0x3482,	// (0x000103a5) bg_popup_window_pane_cp2_ParamLimits

0x3482,	// (0x000103a5) bg_popup_window_pane_cp2

0x4131,	// (0x00011054) listscroll_menu_pane_ParamLimits

0x4131,	// (0x00011054) listscroll_menu_pane

0x413d,	// (0x00011060) popup_submenu_window_ParamLimits

0x413d,	// (0x00011060) popup_submenu_window

0x4161,	// (0x00011084) find_popup_pane_g1

0x4169,	// (0x0001108c) input_popup_find_pane_cp

0x4117,	// (0x0001103a) input_focus_pane_cp4_ParamLimits

0x4117,	// (0x0001103a) input_focus_pane_cp4

0x417f,	// (0x000110a2) input_popup_find_pane_t1_ParamLimits

0x417f,	// (0x000110a2) input_popup_find_pane_t1

0x3109,	// (0x0001002c) bg_popup_sub_pane_cp

0x41ad,	// (0x000110d0) listscroll_popup_sub_pane

0x41b5,	// (0x000110d8) list_submenu_pane_ParamLimits

0x41b5,	// (0x000110d8) list_submenu_pane

0x41c6,	// (0x000110e9) scroll_pane_cp4

0x41ce,	// (0x000110f1) list_single_popup_submenu_pane_ParamLimits

0x41ce,	// (0x000110f1) list_single_popup_submenu_pane

0x41e2,	// (0x00011105) list_single_popup_submenu_pane_g1

0x41ea,	// (0x0001110d) list_single_popup_submenu_pane_t1_ParamLimits

0x41ea,	// (0x0001110d) list_single_popup_submenu_pane_t1

0x31e9,	// (0x0001010c) bg_active_tab_pane_cp1_ParamLimits

0x31e9,	// (0x0001010c) bg_active_tab_pane_cp1

0x41ff,	// (0x00011122) tabs_2_active_pane_g1

0x4207,	// (0x0001112a) tabs_2_active_pane_t1

0x31e9,	// (0x0001010c) bg_passive_tab_pane_cp1_ParamLimits

0x31e9,	// (0x0001010c) bg_passive_tab_pane_cp1

0x41ff,	// (0x00011122) tabs_2_passive_pane_g1

0x4207,	// (0x0001112a) tabs_2_passive_pane_t1

0x4219,	// (0x0001113c) bg_active_tab_pane_cp4

0x4227,	// (0x0001114a) tabs_2_long_active_pane_t1

0x423a,	// (0x0001115d) bg_passive_tab_pane_cp4

0x599c,	// (0x000128bf) list_single_midp_graphic_pane_g4_ParamLimits

0x4219,	// (0x0001113c) bg_active_tab_pane_cp5

0x4246,	// (0x00011169) tabs_3_long_active_pane_t1

0x423a,	// (0x0001115d) bg_passive_tab_pane_cp5

0x599c,	// (0x000128bf) list_single_midp_graphic_pane_g4

0x31e9,	// (0x0001010c) bg_popup_window_pane_cp13_ParamLimits

0x31e9,	// (0x0001010c) bg_popup_window_pane_cp13

0x4261,	// (0x00011184) listscroll_popup_fast_pane_ParamLimits

0x4261,	// (0x00011184) listscroll_popup_fast_pane

0x4270,	// (0x00011193) grid_popup_fast_pane_ParamLimits

0x4270,	// (0x00011193) grid_popup_fast_pane

0x4282,	// (0x000111a5) scroll_pane_cp9_ParamLimits

0x4282,	// (0x000111a5) scroll_pane_cp9

0x9481,	// (0x000163a4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x9481,	// (0x000163a4) list_single_graphic_hl_pane_t1_cp2

0x42a6,	// (0x000111c9) input_focus_pane_cp20_ParamLimits

0x42a6,	// (0x000111c9) input_focus_pane_cp20

0x42b4,	// (0x000111d7) query_popup_data_pane_t1_ParamLimits

0x42b4,	// (0x000111d7) query_popup_data_pane_t1

0x42c7,	// (0x000111ea) query_popup_data_pane_t2_ParamLimits

0x42c7,	// (0x000111ea) query_popup_data_pane_t2

0x430d,	// (0x00011230) query_popup_data_pane_t3_ParamLimits

0x430d,	// (0x00011230) query_popup_data_pane_t3

0x434e,	// (0x00011271) query_popup_data_pane_t4_ParamLimits

0x434e,	// (0x00011271) query_popup_data_pane_t4

0x438a,	// (0x000112ad) query_popup_data_pane_t5_ParamLimits

0x438a,	// (0x000112ad) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0001c5e0) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0001c5e0) query_popup_data_pane_t

0x4025,	// (0x00010f48) bg_set_opt_pane_g1

0x402d,	// (0x00010f50) bg_set_opt_pane_g2

0x4035,	// (0x00010f58) bg_set_opt_pane_g3

0x403d,	// (0x00010f60) bg_set_opt_pane_g4

0x4045,	// (0x00010f68) bg_set_opt_pane_g5

0x404d,	// (0x00010f70) bg_set_opt_pane_g6

0x4055,	// (0x00010f78) bg_set_opt_pane_g7

0x405d,	// (0x00010f80) bg_set_opt_pane_g8

0x4065,	// (0x00010f88) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0001c5eb) bg_set_opt_pane_g

0xba82,	// (0x000189a5) control_top_pane_stacon_ParamLimits

0xba82,	// (0x000189a5) control_top_pane_stacon

0xbad5,	// (0x000189f8) signal_pane_stacon_ParamLimits

0xbad5,	// (0x000189f8) signal_pane_stacon

0x499f,	// (0x000118c2) stacon_top_pane_g1_ParamLimits

0x499f,	// (0x000118c2) stacon_top_pane_g1

0xbafa,	// (0x00018a1d) title_pane_stacon_ParamLimits

0xbafa,	// (0x00018a1d) title_pane_stacon

0xbb1c,	// (0x00018a3f) uni_indicator_pane_stacon_ParamLimits

0xbb1c,	// (0x00018a3f) uni_indicator_pane_stacon

0xbb31,	// (0x00018a54) battery_pane_stacon_ParamLimits

0xbb31,	// (0x00018a54) battery_pane_stacon

0xbb71,	// (0x00018a94) control_bottom_pane_stacon_ParamLimits

0xbb71,	// (0x00018a94) control_bottom_pane_stacon

0xbb90,	// (0x00018ab3) navi_pane_stacon_ParamLimits

0xbb90,	// (0x00018ab3) navi_pane_stacon

0x49c1,	// (0x000118e4) stacon_bottom_pane_g1_ParamLimits

0x49c1,	// (0x000118e4) stacon_bottom_pane_g1

0x43c1,	// (0x000112e4) aid_levels_signal_lsc_ParamLimits

0x43c1,	// (0x000112e4) aid_levels_signal_lsc

0xb84e,	// (0x00018771) signal_pane_stacon_g1_ParamLimits

0xb84e,	// (0x00018771) signal_pane_stacon_g1

0xb85a,	// (0x0001877d) signal_pane_stacon_g2_ParamLimits

0xb85a,	// (0x0001877d) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0001c5fe) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0001c5fe) signal_pane_stacon_g

0xb88e,	// (0x000187b1) title_pane_stacon_t1_ParamLimits

0xb88e,	// (0x000187b1) title_pane_stacon_t1

0x43ef,	// (0x00011312) uni_indicator_pane_stacon_g1

0x43f9,	// (0x0001131c) uni_indicator_pane_stacon_g2

0x43db,	// (0x000112fe) uni_indicator_pane_stacon_g3

0x43e5,	// (0x00011308) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0001c60a) uni_indicator_pane_stacon_g

0xb8b3,	// (0x000187d6) control_top_pane_stacon_g1

0xb8bb,	// (0x000187de) control_top_pane_stacon_t1_ParamLimits

0xb8bb,	// (0x000187de) control_top_pane_stacon_t1

0x4403,	// (0x00011326) aid_levels_battery_lsc_ParamLimits

0x4403,	// (0x00011326) aid_levels_battery_lsc

0xb8ec,	// (0x0001880f) battery_pane_stacon_g1_ParamLimits

0xb8ec,	// (0x0001880f) battery_pane_stacon_g1

0xb8f8,	// (0x0001881b) battery_pane_stacon_g2_ParamLimits

0xb8f8,	// (0x0001881b) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0001c613) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0001c613) battery_pane_stacon_g

0xb927,	// (0x0001884a) navi_icon_pane_stacon

0xb937,	// (0x0001885a) navi_navi_pane_stacon

0xb927,	// (0x0001884a) navi_text_pane_stacon

0xb8b3,	// (0x000187d6) control_bottom_pane_stacon_g1

0xb947,	// (0x0001886a) control_bottom_pane_stacon_t1_ParamLimits

0xb947,	// (0x0001886a) control_bottom_pane_stacon_t1

0x442b,	// (0x0001134e) grid_app_pane_ParamLimits

0x442b,	// (0x0001134e) grid_app_pane

0x4447,	// (0x0001136a) scroll_pane_cp15_ParamLimits

0x4447,	// (0x0001136a) scroll_pane_cp15

0x445a,	// (0x0001137d) cell_app_pane_ParamLimits

0x445a,	// (0x0001137d) cell_app_pane

0x447c,	// (0x0001139f) cell_app_pane_g1_ParamLimits

0x447c,	// (0x0001139f) cell_app_pane_g1

0x44a0,	// (0x000113c3) cell_app_pane_g2_ParamLimits

0x44a0,	// (0x000113c3) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0001c618) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0001c618) cell_app_pane_g

0x44ac,	// (0x000113cf) cell_app_pane_t1_ParamLimits

0x44ac,	// (0x000113cf) cell_app_pane_t1

0x44be,	// (0x000113e1) grid_highlight_pane_ParamLimits

0x44be,	// (0x000113e1) grid_highlight_pane

0x4025,	// (0x00010f48) cell_highlight_pane_g1

0x402d,	// (0x00010f50) cell_highlight_pane_g2

0x4035,	// (0x00010f58) cell_highlight_pane_g3

0x403d,	// (0x00010f60) cell_highlight_pane_g4

0x4045,	// (0x00010f68) cell_highlight_pane_g5

0x404d,	// (0x00010f70) cell_highlight_pane_g6

0x4055,	// (0x00010f78) cell_highlight_pane_g7

0x405d,	// (0x00010f80) cell_highlight_pane_g8

0x4065,	// (0x00010f88) cell_highlight_pane_g9

0x3022,	// (0x0000ff45) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0001c5c6) cell_highlight_pane_g

0x44cf,	// (0x000113f2) bg_scroll_pane

0xb98b,	// (0x000188ae) scroll_handle_pane

0x4516,	// (0x00011439) scroll_bg_pane_g1

0x452b,	// (0x0001144e) scroll_bg_pane_g2

0x4543,	// (0x00011466) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0001c61d) scroll_bg_pane_g

0x4558,	// (0x0001147b) scroll_handle_focus_pane_ParamLimits

0x4558,	// (0x0001147b) scroll_handle_focus_pane

0x4516,	// (0x00011439) scroll_handle_pane_g1

0x4565,	// (0x00011488) scroll_handle_pane_g2

0x4543,	// (0x00011466) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0001c624) scroll_handle_pane_g

0x4117,	// (0x0001103a) bg_popup_sub_pane_cp21_ParamLimits

0x4117,	// (0x0001103a) bg_popup_sub_pane_cp21

0x4579,	// (0x0001149c) popup_fep_japan_predictive_window_t1_ParamLimits

0x4579,	// (0x0001149c) popup_fep_japan_predictive_window_t1

0x4590,	// (0x000114b3) popup_fep_japan_predictive_window_t2_ParamLimits

0x4590,	// (0x000114b3) popup_fep_japan_predictive_window_t2

0x45c3,	// (0x000114e6) popup_fep_japan_predictive_window_t3_ParamLimits

0x45c3,	// (0x000114e6) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0001c62b) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0001c62b) popup_fep_japan_predictive_window_t

0x3109,	// (0x0001002c) bg_popup_sub_pane_cp23

0x45fa,	// (0x0001151d) listscroll_japin_cand_pane

0x4602,	// (0x00011525) popup_fep_japan_candidate_window_t1

0x4610,	// (0x00011533) candidate_pane_ParamLimits

0x4610,	// (0x00011533) candidate_pane

0x4623,	// (0x00011546) scroll_pane_cp30

0x462b,	// (0x0001154e) list_single_popup_jap_candidate_pane_ParamLimits

0x462b,	// (0x0001154e) list_single_popup_jap_candidate_pane

0x3109,	// (0x0001002c) list_highlight_pane_cp30

0x4640,	// (0x00011563) list_single_popup_jap_candidate_pane_t1

0x464f,	// (0x00011572) level_1_signal

0x465c,	// (0x0001157f) level_2_signal

0x4669,	// (0x0001158c) level_3_signal

0x4676,	// (0x00011599) level_4_signal

0x4683,	// (0x000115a6) level_5_signal

0x4690,	// (0x000115b3) level_6_signal

0x469d,	// (0x000115c0) level_7_signal

0x464f,	// (0x00011572) level_1_battery

0x465c,	// (0x0001157f) level_2_battery

0x4669,	// (0x0001158c) level_3_battery

0x4676,	// (0x00011599) level_4_battery

0x4683,	// (0x000115a6) level_5_battery

0x4690,	// (0x000115b3) level_6_battery

0x469d,	// (0x000115c0) level_7_battery

0x46c2,	// (0x000115e5) list_menu_pane_ParamLimits

0x46c2,	// (0x000115e5) list_menu_pane

0x46d3,	// (0x000115f6) scroll_pane_cp25_ParamLimits

0x46d3,	// (0x000115f6) scroll_pane_cp25

0x46ec,	// (0x0001160f) list_double2_graphic_pane_cp2_ParamLimits

0x46ec,	// (0x0001160f) list_double2_graphic_pane_cp2

0x46ec,	// (0x0001160f) list_double2_large_graphic_pane_cp2_ParamLimits

0x46ec,	// (0x0001160f) list_double2_large_graphic_pane_cp2

0x46ec,	// (0x0001160f) list_double2_pane_cp2_ParamLimits

0x46ec,	// (0x0001160f) list_double2_pane_cp2

0x46ec,	// (0x0001160f) list_double_graphic_pane_cp2_ParamLimits

0x46ec,	// (0x0001160f) list_double_graphic_pane_cp2

0x46ec,	// (0x0001160f) list_double_large_graphic_pane_cp2_ParamLimits

0x46ec,	// (0x0001160f) list_double_large_graphic_pane_cp2

0x46ec,	// (0x0001160f) list_double_number_pane_cp2_ParamLimits

0x46ec,	// (0x0001160f) list_double_number_pane_cp2

0x46ec,	// (0x0001160f) list_double_pane_cp2_ParamLimits

0x46ec,	// (0x0001160f) list_double_pane_cp2

0x46fc,	// (0x0001161f) list_single_2graphic_pane_cp2_ParamLimits

0x46fc,	// (0x0001161f) list_single_2graphic_pane_cp2

0x46fc,	// (0x0001161f) list_single_graphic_heading_pane_cp2_ParamLimits

0x46fc,	// (0x0001161f) list_single_graphic_heading_pane_cp2

0x46fc,	// (0x0001161f) list_single_graphic_pane_cp2_ParamLimits

0x46fc,	// (0x0001161f) list_single_graphic_pane_cp2

0x46fc,	// (0x0001161f) list_single_heading_pane_cp2_ParamLimits

0x46fc,	// (0x0001161f) list_single_heading_pane_cp2

0x4711,	// (0x00011634) list_single_large_graphic_pane_cp2_ParamLimits

0x4711,	// (0x00011634) list_single_large_graphic_pane_cp2

0x46fc,	// (0x0001161f) list_single_number_heading_pane_cp2_ParamLimits

0x46fc,	// (0x0001161f) list_single_number_heading_pane_cp2

0x46fc,	// (0x0001161f) list_single_number_pane_cp2_ParamLimits

0x46fc,	// (0x0001161f) list_single_number_pane_cp2

0x46fc,	// (0x0001161f) list_single_pane_cp2_ParamLimits

0x46fc,	// (0x0001161f) list_single_pane_cp2

0x4768,	// (0x0001168b) bg_popup_sub_pane_cp22

0xba3a,	// (0x0001895d) popup_side_volume_key_window_g1

0xba5e,	// (0x00018981) popup_side_volume_key_window_t1

0xba7a,	// (0x0001899d) volume_small_pane_cp1

0x3482,	// (0x000103a5) bg_popup_sub_pane_cp24_ParamLimits

0x3482,	// (0x000103a5) bg_popup_sub_pane_cp24

0x477e,	// (0x000116a1) fep_china_uni_candidate_pane_ParamLimits

0x477e,	// (0x000116a1) fep_china_uni_candidate_pane

0x4792,	// (0x000116b5) fep_china_uni_entry_pane

0x47a2,	// (0x000116c5) popup_fep_china_uni_window_g1

0x47be,	// (0x000116e1) fep_china_uni_entry_pane_g1

0x47c6,	// (0x000116e9) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001c658) fep_china_uni_entry_pane_g

0x47ce,	// (0x000116f1) fep_entry_item_pane

0x47d8,	// (0x000116fb) fep_candidate_item_pane

0x47e0,	// (0x00011703) fep_china_uni_candidate_pane_g1

0x47e8,	// (0x0001170b) fep_china_uni_candidate_pane_g2

0x47f0,	// (0x00011713) fep_china_uni_candidate_pane_g3

0x47f8,	// (0x0001171b) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001c65d) fep_china_uni_candidate_pane_g

0x3022,	// (0x0000ff45) fep_entry_item_pane_g1

0x4800,	// (0x00011723) fep_entry_item_pane_t1_ParamLimits

0x4800,	// (0x00011723) fep_entry_item_pane_t1

0x4816,	// (0x00011739) fep_candidate_item_pane_t1_ParamLimits

0x4816,	// (0x00011739) fep_candidate_item_pane_t1

0x482b,	// (0x0001174e) fep_candidate_item_pane_t2_ParamLimits

0x482b,	// (0x0001174e) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001c666) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001c666) fep_candidate_item_pane_t

0x31e9,	// (0x0001010c) list_highlight_pane_cp31_ParamLimits

0x31e9,	// (0x0001010c) list_highlight_pane_cp31

0x483d,	// (0x00011760) level_1_signal_lsc

0x4846,	// (0x00011769) level_2_signal_lsc

0x484f,	// (0x00011772) level_3_signal_lsc

0x4858,	// (0x0001177b) level_4_signal_lsc

0x4861,	// (0x00011784) level_5_signal_lsc

0x486a,	// (0x0001178d) level_6_signal_lsc

0x4873,	// (0x00011796) level_7_signal_lsc

0x4873,	// (0x00011796) level_1_battery_lsc

0x487c,	// (0x0001179f) level_2_battery_lsc

0x4885,	// (0x000117a8) level_3_battery_lsc

0x488e,	// (0x000117b1) level_4_battery_lsc

0x4897,	// (0x000117ba) level_5_battery_lsc

0x48a0,	// (0x000117c3) level_6_battery_lsc

0x483d,	// (0x00011760) level_7_battery_lsc

0x48a9,	// (0x000117cc) scroll_handle_focus_pane_g1

0x48b2,	// (0x000117d5) scroll_handle_focus_pane_g2

0x48bb,	// (0x000117de) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001c66b) scroll_handle_focus_pane_g

0xad40,	// (0x00017c63) list_single_2graphic_pane_g1_ParamLimits

0xad40,	// (0x00017c63) list_single_2graphic_pane_g1

0xa757,	// (0x0001767a) list_single_2graphic_pane_g2_ParamLimits

0xa757,	// (0x0001767a) list_single_2graphic_pane_g2

0xa6e9,	// (0x0001760c) list_single_2graphic_pane_g3_ParamLimits

0xa6e9,	// (0x0001760c) list_single_2graphic_pane_g3

0xad4c,	// (0x00017c6f) list_single_2graphic_pane_g4_ParamLimits

0xad4c,	// (0x00017c6f) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001c672) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001c672) list_single_2graphic_pane_g

0xad5d,	// (0x00017c80) list_single_2graphic_pane_t1_ParamLimits

0xad5d,	// (0x00017c80) list_single_2graphic_pane_t1

0xad8b,	// (0x00017cae) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xad8b,	// (0x00017cae) list_double2_graphic_large_graphic_pane_g1

0xa7fa,	// (0x0001771d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa7fa,	// (0x0001771d) list_double2_graphic_large_graphic_pane_g2

0xa7c6,	// (0x000176e9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa7c6,	// (0x000176e9) list_double2_graphic_large_graphic_pane_g3

0xad9b,	// (0x00017cbe) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xad9b,	// (0x00017cbe) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001c67b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001c67b) list_double2_graphic_large_graphic_pane_g

0xada7,	// (0x00017cca) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xada7,	// (0x00017cca) list_double2_graphic_large_graphic_pane_t1

0xadbd,	// (0x00017ce0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xadbd,	// (0x00017ce0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001c684) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001c684) list_double2_graphic_large_graphic_pane_t

0x4a68,	// (0x0001198b) popup_fast_swap_window_ParamLimits

0x4a68,	// (0x0001198b) popup_fast_swap_window

0x4a84,	// (0x000119a7) popup_side_volume_key_window

0x4a9e,	// (0x000119c1) stacon_top_pane

0x4aa8,	// (0x000119cb) status_pane_ParamLimits

0x4aa8,	// (0x000119cb) status_pane

0x4a9e,	// (0x000119c1) status_small_pane

0x3109,	// (0x0001002c) control_pane

0x3109,	// (0x0001002c) stacon_bottom_pane

0x3979,	// (0x0001089c) scroll_pane_cp121

0x3e26,	// (0x00010d49) set_content_pane

0x4960,	// (0x00011883) bg_active_tab_pane_g1_cp1

0x4957,	// (0x0001187a) bg_active_tab_pane_g2_cp1

0x494e,	// (0x00011871) bg_active_tab_pane_g3_cp1

0x4960,	// (0x00011883) bg_passive_tab_pane_g1_cp1

0x4957,	// (0x0001187a) bg_passive_tab_pane_g2_cp1

0x494e,	// (0x00011871) bg_passive_tab_pane_g3_cp1

0x4972,	// (0x00011895) bg_active_tab_pane_g1_cp2

0x4957,	// (0x0001187a) bg_active_tab_pane_g2_cp2

0x4969,	// (0x0001188c) bg_active_tab_pane_g3_cp2

0x4972,	// (0x00011895) bg_passive_tab_pane_g1_cp2

0x4957,	// (0x0001187a) bg_passive_tab_pane_g2_cp2

0x4969,	// (0x0001188c) bg_passive_tab_pane_g3_cp2

0x4984,	// (0x000118a7) bg_active_tab_pane_g1_cp3

0x4957,	// (0x0001187a) bg_active_tab_pane_g2_cp3

0x497b,	// (0x0001189e) bg_active_tab_pane_g3_cp3

0x4984,	// (0x000118a7) bg_passive_tab_pane_g1_cp3

0x4957,	// (0x0001187a) bg_passive_tab_pane_g2_cp3

0x497b,	// (0x0001189e) bg_passive_tab_pane_g3_cp3

0x4996,	// (0x000118b9) bg_active_tab_pane_g1_cp4

0x4957,	// (0x0001187a) bg_active_tab_pane_g2_cp4

0x498d,	// (0x000118b0) bg_active_tab_pane_g3_cp4

0x4996,	// (0x000118b9) bg_passive_tab_pane_g1_cp4

0x4957,	// (0x0001187a) bg_passive_tab_pane_g2_cp4

0x498d,	// (0x000118b0) bg_passive_tab_pane_g3_cp4

0x49e6,	// (0x00011909) bg_active_tab_pane_g1_cp5

0x4957,	// (0x0001187a) bg_active_tab_pane_g2_cp5

0x49dd,	// (0x00011900) bg_active_tab_pane_g3_cp5

0x49e6,	// (0x00011909) bg_passive_tab_pane_g1_cp5

0x4957,	// (0x0001187a) bg_passive_tab_pane_g2_cp5

0x49dd,	// (0x00011900) bg_passive_tab_pane_g3_cp5

0x409c,	// (0x00010fbf) list_set_graphic_pane_ParamLimits

0x409c,	// (0x00010fbf) list_set_graphic_pane

0x3109,	// (0x0001002c) bg_set_opt_pane_cp4

0x49ef,	// (0x00011912) list_set_graphic_pane_g1_ParamLimits

0x49ef,	// (0x00011912) list_set_graphic_pane_g1

0x49fb,	// (0x0001191e) list_set_graphic_pane_g2_ParamLimits

0x49fb,	// (0x0001191e) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001c689) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001c689) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x0001c9fc) volume_small_pane_cp_g

0x4a1d,	// (0x00011940) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4a1d,	// (0x00011940) list_double2_large_graphic_pane_g1_cp2

0x4a29,	// (0x0001194c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4a29,	// (0x0001194c) list_double2_large_graphic_pane_g2_cp2

0x4a38,	// (0x0001195b) list_double2_large_graphic_pane_g3_cp2

0x4a40,	// (0x00011963) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4a40,	// (0x00011963) list_double2_large_graphic_pane_t1_cp2

0x4a56,	// (0x00011979) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4a56,	// (0x00011979) list_double2_large_graphic_pane_t2_cp2

0x7ba9,	// (0x00014acc) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x7ba9,	// (0x00014acc) list_double_large_graphic_pane_g1_cp2

0x7bba,	// (0x00014add) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x7bba,	// (0x00014add) list_double_large_graphic_pane_g2_cp2

0x4b83,	// (0x00011aa6) list_double_large_graphic_pane_g3_cp2

0x7bc9,	// (0x00014aec) list_double_large_graphic_pane_g4_cp

0x7bd1,	// (0x00014af4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x7bd1,	// (0x00014af4) list_double_large_graphic_pane_t1_cp2

0x7be8,	// (0x00014b0b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x7be8,	// (0x00014b0b) list_double_large_graphic_pane_t2_cp2

0x4ab6,	// (0x000119d9) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4ab6,	// (0x000119d9) list_double2_graphic_pane_g1_cp2

0x4ac2,	// (0x000119e5) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4ac2,	// (0x000119e5) list_double2_graphic_pane_g2_cp2

0x4ad1,	// (0x000119f4) list_double2_graphic_pane_g3_cp2

0x4ad9,	// (0x000119fc) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4ad9,	// (0x000119fc) list_double2_graphic_pane_t1_cp2

0x4aef,	// (0x00011a12) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4aef,	// (0x00011a12) list_double2_graphic_pane_t2_cp2

0x4b01,	// (0x00011a24) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4b01,	// (0x00011a24) list_single_number_heading_pane_g1_cp2

0x4b0d,	// (0x00011a30) list_single_number_heading_pane_g2_cp2

0x4b15,	// (0x00011a38) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4b15,	// (0x00011a38) list_single_number_heading_pane_t1_cp2

0x4b2b,	// (0x00011a4e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4b2b,	// (0x00011a4e) list_single_number_heading_pane_t2_cp2

0x4b3d,	// (0x00011a60) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4b3d,	// (0x00011a60) list_single_number_heading_pane_t3_cp2

0x4b01,	// (0x00011a24) list_single_heading_pane_g1_cp2_ParamLimits

0x4b01,	// (0x00011a24) list_single_heading_pane_g1_cp2

0x4b0d,	// (0x00011a30) list_single_heading_pane_g2_cp2

0x4b15,	// (0x00011a38) list_single_heading_pane_t1_cp2_ParamLimits

0x4b15,	// (0x00011a38) list_single_heading_pane_t1_cp2

0x79b3,	// (0x000148d6) list_single_heading_pane_t2_cp2_ParamLimits

0x79b3,	// (0x000148d6) list_single_heading_pane_t2_cp2

0x7938,	// (0x0001485b) list_double_graphic_pane_g1_cp2_ParamLimits

0x7938,	// (0x0001485b) list_double_graphic_pane_g1_cp2

0x7944,	// (0x00014867) list_double_graphic_pane_g2_cp2_ParamLimits

0x7944,	// (0x00014867) list_double_graphic_pane_g2_cp2

0x7953,	// (0x00014876) list_double_graphic_pane_g3_cp2

0x795b,	// (0x0001487e) list_double_graphic_pane_t1_cp2_ParamLimits

0x795b,	// (0x0001487e) list_double_graphic_pane_t1_cp2

0x7971,	// (0x00014894) list_double_graphic_pane_t2_cp2_ParamLimits

0x7971,	// (0x00014894) list_double_graphic_pane_t2_cp2

0x4b77,	// (0x00011a9a) list_double_number_pane_g1_cp2_ParamLimits

0x4b77,	// (0x00011a9a) list_double_number_pane_g1_cp2

0x4b83,	// (0x00011aa6) list_double_number_pane_g2_cp2

0x78fe,	// (0x00014821) list_double_number_pane_t1_cp2_ParamLimits

0x78fe,	// (0x00014821) list_double_number_pane_t1_cp2

0x7910,	// (0x00014833) list_double_number_pane_t2_cp2_ParamLimits

0x7910,	// (0x00014833) list_double_number_pane_t2_cp2

0x7926,	// (0x00014849) list_double_number_pane_t3_cp2_ParamLimits

0x7926,	// (0x00014849) list_double_number_pane_t3_cp2

0x7876,	// (0x00014799) list_single_graphic_pane_g1_cp2_ParamLimits

0x7876,	// (0x00014799) list_single_graphic_pane_g1_cp2

0x4b01,	// (0x00011a24) list_single_graphic_pane_g2_cp2_ParamLimits

0x4b01,	// (0x00011a24) list_single_graphic_pane_g2_cp2

0x4b0d,	// (0x00011a30) list_single_graphic_pane_g3_cp2

0x784e,	// (0x00014771) list_single_graphic_pane_t1_cp2_ParamLimits

0x784e,	// (0x00014771) list_single_graphic_pane_t1_cp2

0x4b01,	// (0x00011a24) list_single_number_pane_g1_cp2_ParamLimits

0x4b01,	// (0x00011a24) list_single_number_pane_g1_cp2

0x4b0d,	// (0x00011a30) list_single_number_pane_g2_cp2

0x784e,	// (0x00014771) list_single_number_pane_t1_cp2_ParamLimits

0x784e,	// (0x00014771) list_single_number_pane_t1_cp2

0x7864,	// (0x00014787) list_single_number_pane_t2_cp2_ParamLimits

0x7864,	// (0x00014787) list_single_number_pane_t2_cp2

0x4a29,	// (0x0001194c) list_double2_pane_g1_cp2_ParamLimits

0x4a29,	// (0x0001194c) list_double2_pane_g1_cp2

0x4a38,	// (0x0001195b) list_double2_pane_g2_cp2

0x4b4f,	// (0x00011a72) list_double2_pane_t1_cp2_ParamLimits

0x4b4f,	// (0x00011a72) list_double2_pane_t1_cp2

0x4b65,	// (0x00011a88) list_double2_pane_t2_cp2_ParamLimits

0x4b65,	// (0x00011a88) list_double2_pane_t2_cp2

0x4b77,	// (0x00011a9a) list_double_pane_g1_cp2_ParamLimits

0x4b77,	// (0x00011a9a) list_double_pane_g1_cp2

0x4b83,	// (0x00011aa6) list_double_pane_g2_cp2

0x4b8b,	// (0x00011aae) list_double_pane_t1_cp2_ParamLimits

0x4b8b,	// (0x00011aae) list_double_pane_t1_cp2

0x4ba1,	// (0x00011ac4) list_double_pane_t2_cp2_ParamLimits

0x4ba1,	// (0x00011ac4) list_double_pane_t2_cp2

0x4bc9,	// (0x00011aec) list_single_pane_cp2_g3

0x4b01,	// (0x00011a24) list_single_pane_g1_cp2_ParamLimits

0x4b01,	// (0x00011a24) list_single_pane_g1_cp2

0x4b0d,	// (0x00011a30) list_single_pane_g2_cp2

0x4bd9,	// (0x00011afc) list_single_pane_t1_cp2_ParamLimits

0x4bd9,	// (0x00011afc) list_single_pane_t1_cp2

0x4bf1,	// (0x00011b14) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4bf1,	// (0x00011b14) list_single_large_graphic_pane_g1_cp2

0x4bfd,	// (0x00011b20) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4bfd,	// (0x00011b20) list_single_large_graphic_pane_g2_cp2

0x4c09,	// (0x00011b2c) list_single_large_graphic_pane_g3_cp2

0x4c11,	// (0x00011b34) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4c11,	// (0x00011b34) list_single_large_graphic_pane_g4_cp1

0x4c2b,	// (0x00011b4e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4c2b,	// (0x00011b4e) list_single_large_graphic_pane_t1_cp2

0x65dd,	// (0x00013500) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x65dd,	// (0x00013500) list_single_graphic_heading_pane_g1_cp2

0x65b8,	// (0x000134db) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x65b8,	// (0x000134db) list_single_graphic_heading_pane_g4_cp2

0x4b0d,	// (0x00011a30) list_single_graphic_heading_pane_g5_cp2

0x4b15,	// (0x00011a38) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4b15,	// (0x00011a38) list_single_graphic_heading_pane_t1_cp2

0x65e9,	// (0x0001350c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x65e9,	// (0x0001350c) list_single_graphic_heading_pane_t2_cp2

0x65ac,	// (0x000134cf) list_single_2graphic_pane_g1_cp2_ParamLimits

0x65ac,	// (0x000134cf) list_single_2graphic_pane_g1_cp2

0x65b8,	// (0x000134db) list_single_2graphic_pane_g2_cp2_ParamLimits

0x65b8,	// (0x000134db) list_single_2graphic_pane_g2_cp2

0x4b0d,	// (0x00011a30) list_single_2graphic_pane_g3_cp2

0x599c,	// (0x000128bf) list_single_2graphic_pane_g4_cp2_ParamLimits

0x599c,	// (0x000128bf) list_single_2graphic_pane_g4_cp2

0x65c7,	// (0x000134ea) list_single_2graphic_pane_t1_cp2_ParamLimits

0x65c7,	// (0x000134ea) list_single_2graphic_pane_t1_cp2

0x3022,	// (0x0000ff45) list_highlight_pane_g10_cp1

0x61a6,	// (0x000130c9) list_highlight_pane_g1_cp1

0x61ae,	// (0x000130d1) list_highlight_pane_g2_cp1

0x61b6,	// (0x000130d9) list_highlight_pane_g3_cp1

0x61be,	// (0x000130e1) list_highlight_pane_g4_cp1

0x61c6,	// (0x000130e9) list_highlight_pane_g5_cp1

0x61ce,	// (0x000130f1) list_highlight_pane_g6_cp1

0x61d6,	// (0x000130f9) list_highlight_pane_g7_cp1

0x61de,	// (0x00013101) list_highlight_pane_g8_cp1

0x61e6,	// (0x00013109) list_highlight_pane_g9_cp1

0x60d4,	// (0x00012ff7) form_field_slider_pane_t3

0x60e2,	// (0x00013005) form_field_slider_pane_t4

0x60f0,	// (0x00013013) slider_form_pane_ParamLimits

0x60f0,	// (0x00013013) slider_form_pane

0x3109,	// (0x0001002c) control_abbreviations

0x3109,	// (0x0001002c) control_conventions

0x3109,	// (0x0001002c) control_definitions

0x3109,	// (0x0001002c) format_table_attribute

0x79fd,	// (0x00014920) bg_popup_preview_window_pane_g9

0x3109,	// (0x0001002c) format_table_data2

0x3109,	// (0x0001002c) format_table_data3

0x3109,	// (0x0001002c) format_table_data_example

0x0008,

0x3109,	// (0x0001002c) intro_purpose

0xf8f4,	// (0x0001c817) bg_popup_preview_window_pane_g

0x3109,	// (0x0001002c) texts_category

0x3109,	// (0x0001002c) texts_graphics

0x4c41,	// (0x00011b64) text_digital

0x4c50,	// (0x00011b73) text_primary

0x4c5f,	// (0x00011b82) text_primary_small

0x4c6e,	// (0x00011b91) text_secondary

0x4c7d,	// (0x00011ba0) text_title

0x7ea6,	// (0x00014dc9) bg_passive_tab_pane_g1_cp3_srt

0x4957,	// (0x0001187a) bg_passive_tab_pane_g2_cp3_srt

0x7e9d,	// (0x00014dc0) bg_passive_tab_pane_g3_cp3_srt

0x31e9,	// (0x0001010c) bg_active_tab_pane_cp3_srt_ParamLimits

0x31e9,	// (0x0001010c) bg_active_tab_pane_cp3_srt

0x780d,	// (0x00014730) tabs_4_active_pane_srt_g1

0x3219,	// (0x0001013c) tabs_4_active_pane_srt_t1_ParamLimits

0x3219,	// (0x0001013c) tabs_4_active_pane_srt_t1

0x7ea6,	// (0x00014dc9) bg_active_tab_pane_g1_cp3_copy1

0x4957,	// (0x0001187a) bg_active_tab_pane_g2_cp3_copy1

0x7e9d,	// (0x00014dc0) bg_active_tab_pane_g3_cp3_copy1

0x31e9,	// (0x0001010c) tabs_2_long_active_pane_srt_ParamLimits

0x31e9,	// (0x0001010c) tabs_2_long_active_pane_srt

0x31e9,	// (0x0001010c) tabs_2_long_passive_pane_srt_ParamLimits

0x31e9,	// (0x0001010c) tabs_2_long_passive_pane_srt

0x423a,	// (0x0001115d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x423a,	// (0x0001115d) bg_passive_tab_pane_cp4_srt

0x7dc9,	// (0x00014cec) bg_passive_tab_pane_g1_cp4_srt

0x4957,	// (0x0001187a) bg_passive_tab_pane_g2_cp4_srt

0x7dc0,	// (0x00014ce3) bg_passive_tab_pane_g3_cp4_srt

0x4219,	// (0x0001113c) bg_active_tab_pane_cp4_srt_ParamLimits

0x4219,	// (0x0001113c) bg_active_tab_pane_cp4_srt

0x4227,	// (0x0001114a) tabs_2_long_active_pane_srt_t1_ParamLimits

0x4227,	// (0x0001114a) tabs_2_long_active_pane_srt_t1

0x7dc9,	// (0x00014cec) bg_active_tab_pane_g1_cp4_srt

0x4957,	// (0x0001187a) bg_active_tab_pane_g2_cp4_srt

0x7dc0,	// (0x00014ce3) bg_active_tab_pane_g3_cp4_srt

0x3482,	// (0x000103a5) tabs_3_long_active_pane_srt_ParamLimits

0x3482,	// (0x000103a5) tabs_3_long_active_pane_srt

0x3482,	// (0x000103a5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3482,	// (0x000103a5) tabs_3_long_passive_pane_cp_srt

0x3482,	// (0x000103a5) tabs_3_long_passive_pane_srt_ParamLimits

0x3482,	// (0x000103a5) tabs_3_long_passive_pane_srt

0x423a,	// (0x0001115d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x423a,	// (0x0001115d) bg_passive_tab_pane_cp5_srt

0x49e6,	// (0x00011909) bg_passive_tab_pane_g1_cp5_srt

0x4957,	// (0x0001187a) bg_passive_tab_pane_g2_cp5_srt

0x49dd,	// (0x00011900) bg_passive_tab_pane_g3_cp5_srt

0x4219,	// (0x0001113c) bg_active_tab_pane_cp5_srt_ParamLimits

0x4219,	// (0x0001113c) bg_active_tab_pane_cp5_srt

0x4246,	// (0x00011169) tabs_3_long_active_pane_srt_t1_ParamLimits

0x4246,	// (0x00011169) tabs_3_long_active_pane_srt_t1

0x49e6,	// (0x00011909) bg_active_tab_pane_g1_cp5_srt

0x4957,	// (0x0001187a) bg_active_tab_pane_g2_cp5_srt

0x49dd,	// (0x00011900) bg_active_tab_pane_g3_cp5_srt

0x7db2,	// (0x00014cd5) navi_text_pane_srt_t1

0x7daa,	// (0x00014ccd) navi_icon_pane_srt_g1

0x4e42,	// (0x00011d65) midp_editing_number_pane_srt

0x4c8c,	// (0x00011baf) midp_ticker_pane_srt

0x4e4a,	// (0x00011d6d) midp_ticker_pane_srt_g1

0x4e52,	// (0x00011d75) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001c6a8) midp_ticker_pane_srt_g

0x4e5a,	// (0x00011d7d) midp_ticker_pane_srt_t1

0x7d9b,	// (0x00014cbe) midp_editing_number_pane_t1_copy1

0x4c94,	// (0x00011bb7) listscroll_midp_pane

0x4c94,	// (0x00011bb7) midp_form_pane

0x4cfc,	// (0x00011c1f) midp_info_popup_window_ParamLimits

0x4cfc,	// (0x00011c1f) midp_info_popup_window

0x4117,	// (0x0001103a) bg_popup_sub_pane_cp50_ParamLimits

0x4117,	// (0x0001103a) bg_popup_sub_pane_cp50

0x5dfd,	// (0x00012d20) listscroll_midp_info_pane_ParamLimits

0x5dfd,	// (0x00012d20) listscroll_midp_info_pane

0x5de5,	// (0x00012d08) listscroll_form_midp_pane_ParamLimits

0x5de5,	// (0x00012d08) listscroll_form_midp_pane

0x5df1,	// (0x00012d14) scroll_bar_cp050

0x5dc5,	// (0x00012ce8) list_midp_pane

0x88a4,	// (0x000157c7) signal_pane_g2_cp

0x5cff,	// (0x00012c22) listscroll_midp_info_pane_t1_ParamLimits

0x5cff,	// (0x00012c22) listscroll_midp_info_pane_t1

0x5d17,	// (0x00012c3a) listscroll_midp_info_pane_t2_ParamLimits

0x5d17,	// (0x00012c3a) listscroll_midp_info_pane_t2

0x5d55,	// (0x00012c78) listscroll_midp_info_pane_t3_ParamLimits

0x5d55,	// (0x00012c78) listscroll_midp_info_pane_t3

0x5d8f,	// (0x00012cb2) listscroll_midp_info_pane_t4_ParamLimits

0x5d8f,	// (0x00012cb2) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x0001c752) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x0001c752) listscroll_midp_info_pane_t

0x41c6,	// (0x000110e9) scroll_pane_cp21

0x5ca3,	// (0x00012bc6) form_midp_field_choice_group_pane

0x5cac,	// (0x00012bcf) form_midp_field_text_pane

0x5ce5,	// (0x00012c08) form_midp_field_time_pane

0x5ced,	// (0x00012c10) form_midp_gauge_slider_pane

0x5cf6,	// (0x00012c19) form_midp_gauge_wait_pane

0x3109,	// (0x0001002c) form_midp_image_pane

0xaea7,	// (0x00017dca) list_single_midp_pane_ParamLimits

0xaea7,	// (0x00017dca) list_single_midp_pane

0x5c57,	// (0x00012b7a) form_midp_field_text_pane_t1

0x5a76,	// (0x00012999) input_focus_pane_cp050

0x5c7a,	// (0x00012b9d) list_midp_form_text_pane

0x5c26,	// (0x00012b49) form_midp_field_choice_group_pane_t1

0x5c34,	// (0x00012b57) input_focus_pane_cp051

0x5c48,	// (0x00012b6b) list_midp_choice_pane

0x3109,	// (0x0001002c) status_idle_pane

0x5c0a,	// (0x00012b2d) form_midp_field_time_pane_t1

0x3022,	// (0x0000ff45) wait_anim_pane_g2_copy1

0x5c18,	// (0x00012b3b) form_midp_field_time_pane_t2

0x0001,

0x4da4,	// (0x00011cc7) aid_navinavi_width_2_pane

0xf82a,	// (0x0001c74d) form_midp_field_time_pane_t

0x3109,	// (0x0001002c) input_focus_pane_cp052

0x3109,	// (0x0001002c) bg_input_focus_pane_cp040

0x5bca,	// (0x00012aed) form_midp_gauge_slider_pane_t1

0x5bd8,	// (0x00012afb) form_midp_gauge_slider_pane_t2

0x5be6,	// (0x00012b09) form_midp_gauge_slider_pane_t3

0x5bf4,	// (0x00012b17) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0001c744) form_midp_gauge_slider_pane_t

0x5c02,	// (0x00012b25) form_midp_slider_pane

0x31e9,	// (0x0001010c) bg_input_focus_pane_cp041_ParamLimits

0x31e9,	// (0x0001010c) bg_input_focus_pane_cp041

0x5b9a,	// (0x00012abd) form_midp_gauge_wait_pane_t1_ParamLimits

0x5b9a,	// (0x00012abd) form_midp_gauge_wait_pane_t1

0x5bac,	// (0x00012acf) form_midp_gauge_wait_pane_t2_ParamLimits

0x5bac,	// (0x00012acf) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x0001c73f) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x0001c73f) form_midp_gauge_wait_pane_t

0x5bbe,	// (0x00012ae1) form_midp_wait_pane_ParamLimits

0x5bbe,	// (0x00012ae1) form_midp_wait_pane

0x5b64,	// (0x00012a87) form_midp_image_pane_g1

0x5b6d,	// (0x00012a90) form_midp_image_pane_t1

0x5b7c,	// (0x00012a9f) form_midp_image_pane_t2

0x5b8b,	// (0x00012aae) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x0001c738) form_midp_image_pane_t

0x5b4c,	// (0x00012a6f) list_single_midp_pane_g1

0xae98,	// (0x00017dbb) list_single_midp_pane_t1

0x5b36,	// (0x00012a59) list_midp_form_item_pane_ParamLimits

0x5b36,	// (0x00012a59) list_midp_form_item_pane

0x4d4c,	// (0x00011c6f) list_midp_form_item_pane_t1

0x4d5b,	// (0x00011c7e) midp_ticker_pane_g1

0x4d67,	// (0x00011c8a) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001c68e) midp_ticker_pane_g

0x4d73,	// (0x00011c96) midp_ticker_pane_t1

0x7d9b,	// (0x00014cbe) midp_editing_number_pane_t1

0x7e23,	// (0x00014d46) midp_editing_number_pane

0x7e2f,	// (0x00014d52) midp_ticker_pane

0x7d8b,	// (0x00014cae) ai_message_heading_pane

0x3109,	// (0x0001002c) bg_popup_window_pane_cp14

0x7d93,	// (0x00014cb6) listscroll_ai_message_pane

0x7d15,	// (0x00014c38) ai_message_heading_pane_g1_ParamLimits

0x7d15,	// (0x00014c38) ai_message_heading_pane_g1

0x7d21,	// (0x00014c44) ai_message_heading_pane_g2_ParamLimits

0x7d21,	// (0x00014c44) ai_message_heading_pane_g2

0x7d2d,	// (0x00014c50) ai_message_heading_pane_g3_ParamLimits

0x7d2d,	// (0x00014c50) ai_message_heading_pane_g3

0x7d39,	// (0x00014c5c) ai_message_heading_pane_g4_ParamLimits

0x7d39,	// (0x00014c5c) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x0001c879) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x0001c879) ai_message_heading_pane_g

0x7d45,	// (0x00014c68) ai_message_heading_pane_t1_ParamLimits

0x7d45,	// (0x00014c68) ai_message_heading_pane_t1

0x7d5f,	// (0x00014c82) ai_message_heading_pane_t2_ParamLimits

0x7d5f,	// (0x00014c82) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x0001c882) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x0001c882) ai_message_heading_pane_t

0x7d71,	// (0x00014c94) bg_popup_heading_pane_cp1_ParamLimits

0x7d71,	// (0x00014c94) bg_popup_heading_pane_cp1

0x7d03,	// (0x00014c26) list_ai_message_pane_ParamLimits

0x7d03,	// (0x00014c26) list_ai_message_pane

0x41c6,	// (0x000110e9) scroll_pane_cp10

0x7c9f,	// (0x00014bc2) list_ai_message_pane_g1

0x7ca7,	// (0x00014bca) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0001c856) list_ai_message_pane_g

0x7caf,	// (0x00014bd2) list_ai_message_pane_t1_ParamLimits

0x7caf,	// (0x00014bd2) list_ai_message_pane_t1

0x7cc4,	// (0x00014be7) list_ai_message_pane_t2_ParamLimits

0x7cc4,	// (0x00014be7) list_ai_message_pane_t2

0x7cd9,	// (0x00014bfc) list_ai_message_pane_t3_ParamLimits

0x7cd9,	// (0x00014bfc) list_ai_message_pane_t3

0x7cee,	// (0x00014c11) list_ai_message_pane_t4_ParamLimits

0x7cee,	// (0x00014c11) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0001c85b) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0001c85b) list_ai_message_pane_t

0x7c8d,	// (0x00014bb0) cell_ai_soft_ind_pane_ParamLimits

0x7c8d,	// (0x00014bb0) cell_ai_soft_ind_pane

0x4d85,	// (0x00011ca8) cell_ai_soft_ind_pane_g1_ParamLimits

0x4d85,	// (0x00011ca8) cell_ai_soft_ind_pane_g1

0x3109,	// (0x0001002c) grid_highlight_cp1

0x4d92,	// (0x00011cb5) text_secondary_cp56_ParamLimits

0x4d92,	// (0x00011cb5) text_secondary_cp56

0x7c62,	// (0x00014b85) example_general_pane_ParamLimits

0x7c62,	// (0x00014b85) example_general_pane

0x7c6e,	// (0x00014b91) example_parent_pane_g1_ParamLimits

0x7c6e,	// (0x00014b91) example_parent_pane_g1

0x7c7a,	// (0x00014b9d) example_parent_pane_t1_ParamLimits

0x7c7a,	// (0x00014b9d) example_parent_pane_t1

0x52cd,	// (0x000121f0) popup_preview_text_window_ParamLimits

0x52cd,	// (0x000121f0) popup_preview_text_window

0x4bd1,	// (0x00011af4) list_single_pane_cp2_g4

0x3538,	// (0x0001045b) bg_popup_preview_window_pane_ParamLimits

0x3538,	// (0x0001045b) bg_popup_preview_window_pane

0x7a05,	// (0x00014928) popup_preview_text_window_t1_ParamLimits

0x7a05,	// (0x00014928) popup_preview_text_window_t1

0x7a23,	// (0x00014946) popup_preview_text_window_t2_ParamLimits

0x7a23,	// (0x00014946) popup_preview_text_window_t2

0x7a6c,	// (0x0001498f) popup_preview_text_window_t3_ParamLimits

0x7a6c,	// (0x0001498f) popup_preview_text_window_t3

0x7ab1,	// (0x000149d4) popup_preview_text_window_t4_ParamLimits

0x7ab1,	// (0x000149d4) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x0001c82a) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x0001c82a) popup_preview_text_window_t

0x7b2f,	// (0x00014a52) scroll_pane_cp11

0x5954,	// (0x00012877) bg_popup_preview_window_pane_g1

0x79c5,	// (0x000148e8) bg_popup_preview_window_pane_g2

0x79cd,	// (0x000148f0) bg_popup_preview_window_pane_g3

0x79d5,	// (0x000148f8) bg_popup_preview_window_pane_g4

0x79dd,	// (0x00014900) bg_popup_preview_window_pane_g5

0x79e5,	// (0x00014908) bg_popup_preview_window_pane_g6

0x79ed,	// (0x00014910) bg_popup_preview_window_pane_g7

0x79f5,	// (0x00014918) bg_popup_preview_window_pane_g8

0xb575,	// (0x00018498) aid_popup_width_pane

0x52af,	// (0x000121d2) popup_midp_note_alarm_window_ParamLimits

0x52af,	// (0x000121d2) popup_midp_note_alarm_window

0x3ed3,	// (0x00010df6) data_form_pane_ParamLimits

0xabd9,	// (0x00017afc) form_field_data_pane_g1

0x3f5b,	// (0x00010e7e) form_field_data_pane_t1_ParamLimits

0x3eff,	// (0x00010e22) input_focus_pane_ParamLimits

0x3f0d,	// (0x00010e30) data_form_wide_pane_ParamLimits

0xabe1,	// (0x00017b04) form_field_data_wide_pane_g1

0xabed,	// (0x00017b10) form_field_data_wide_pane_t1_ParamLimits

0x37f0,	// (0x00010713) input_focus_pane_cp6_ParamLimits

0x4173,	// (0x00011096) input_popup_find_pane_g1_ParamLimits

0x4173,	// (0x00011096) input_popup_find_pane_g1

0xb908,	// (0x0001882b) aid_navi_side_left_pane

0xb918,	// (0x0001883b) aid_navi_side_right_pane

0x628f,	// (0x000131b2) bg_popup_window_pane_cp30_ParamLimits

0x628f,	// (0x000131b2) bg_popup_window_pane_cp30

0x6309,	// (0x0001322c) popup_midp_note_alarm_window_g1_ParamLimits

0x6309,	// (0x0001322c) popup_midp_note_alarm_window_g1

0x6339,	// (0x0001325c) popup_midp_note_alarm_window_t1_ParamLimits

0x6339,	// (0x0001325c) popup_midp_note_alarm_window_t1

0x63da,	// (0x000132fd) popup_midp_note_alarm_window_t2_ParamLimits

0x63da,	// (0x000132fd) popup_midp_note_alarm_window_t2

0x6488,	// (0x000133ab) popup_midp_note_alarm_window_t3_ParamLimits

0x6488,	// (0x000133ab) popup_midp_note_alarm_window_t3

0x64b0,	// (0x000133d3) popup_midp_note_alarm_window_t4_ParamLimits

0x64b0,	// (0x000133d3) popup_midp_note_alarm_window_t4

0x64d0,	// (0x000133f3) popup_midp_note_alarm_window_t5_ParamLimits

0x64d0,	// (0x000133f3) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x0001c7c7) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x0001c7c7) popup_midp_note_alarm_window_t

0x657c,	// (0x0001349f) wait_bar_pane_cp1_ParamLimits

0x657c,	// (0x0001349f) wait_bar_pane_cp1

0x3109,	// (0x0001002c) wait_anim_pane_copy1

0x3109,	// (0x0001002c) wait_border_pane_copy1

0x5fa1,	// (0x00012ec4) wait_border_pane_g1_copy1

0xac07,	// (0x00017b2a) form_field_popup_pane_g1

0xac0f,	// (0x00017b32) form_field_popup_pane_t1_ParamLimits

0x3eff,	// (0x00010e22) input_focus_pane_cp7_ParamLimits

0x3ed3,	// (0x00010df6) list_form_pane_ParamLimits

0xac27,	// (0x00017b4a) form_field_popup_wide_pane_g1

0xac2f,	// (0x00017b52) form_field_popup_wide_pane_t1_ParamLimits

0x3eff,	// (0x00010e22) input_focus_pane_cp8_ParamLimits

0x3f90,	// (0x00010eb3) list_form_wide_pane_ParamLimits

0x7ece,	// (0x00014df1) aid_size_cell_graphic_pane

0xacb4,	// (0x00017bd7) data_form_pane_t1_ParamLimits

0xaed2,	// (0x00017df5) data_form_wide_pane_t1_ParamLimits

0x5551,	// (0x00012474) bg_status_flat_pane

0x3149,	// (0x0001006c) title_pane_t1_ParamLimits

0x31b1,	// (0x000100d4) title_pane_t2_ParamLimits

0x31d7,	// (0x000100fa) title_pane_t3_ParamLimits

0xf573,	// (0x0001c496) title_pane_t_ParamLimits

0x464f,	// (0x00011572) level_1_signal_ParamLimits

0x465c,	// (0x0001157f) level_2_signal_ParamLimits

0x4669,	// (0x0001158c) level_3_signal_ParamLimits

0x4676,	// (0x00011599) level_4_signal_ParamLimits

0x4683,	// (0x000115a6) level_5_signal_ParamLimits

0x4690,	// (0x000115b3) level_6_signal_ParamLimits

0x469d,	// (0x000115c0) level_7_signal_ParamLimits

0x464f,	// (0x00011572) level_1_battery_ParamLimits

0x465c,	// (0x0001157f) level_2_battery_ParamLimits

0x4669,	// (0x0001158c) level_3_battery_ParamLimits

0x4676,	// (0x00011599) level_4_battery_ParamLimits

0x4683,	// (0x000115a6) level_5_battery_ParamLimits

0x4690,	// (0x000115b3) level_6_battery_ParamLimits

0x469d,	// (0x000115c0) level_7_battery_ParamLimits

0x61a6,	// (0x000130c9) bg_status_flat_pane_g1

0x61ae,	// (0x000130d1) bg_status_flat_pane_g2

0x61b6,	// (0x000130d9) bg_status_flat_pane_g3

0x61be,	// (0x000130e1) bg_status_flat_pane_g4

0x61c6,	// (0x000130e9) bg_status_flat_pane_g5

0x61ce,	// (0x000130f1) bg_status_flat_pane_g6

0x61d6,	// (0x000130f9) bg_status_flat_pane_g7

0x31ff,	// (0x00010122) tabs_3_active_pane_t1_ParamLimits

0x31ff,	// (0x00010122) tabs_3_passive_pane_t1_ParamLimits

0x3219,	// (0x0001013c) tabs_4_active_pane_t1_ParamLimits

0x3219,	// (0x0001013c) tabs_4_1_passive_pane_t1_ParamLimits

0x4207,	// (0x0001112a) tabs_2_active_pane_t1_ParamLimits

0x4207,	// (0x0001112a) tabs_2_passive_pane_t1_ParamLimits

0x4219,	// (0x0001113c) bg_active_tab_pane_cp4_ParamLimits

0x4227,	// (0x0001114a) tabs_2_long_active_pane_t1_ParamLimits

0x423a,	// (0x0001115d) bg_passive_tab_pane_cp4_ParamLimits

0xbe07,	// (0x00018d2a) list_single_midp_graphic_pane_t1_ParamLimits

0x4219,	// (0x0001113c) bg_active_tab_pane_cp5_ParamLimits

0x4246,	// (0x00011169) tabs_3_long_active_pane_t1_ParamLimits

0x423a,	// (0x0001115d) bg_passive_tab_pane_cp5_ParamLimits

0xbe07,	// (0x00018d2a) list_single_midp_graphic_pane_t1

0x5551,	// (0x00012474) bg_status_flat_pane_ParamLimits

0x560a,	// (0x0001252d) indicator_pane_cp2_ParamLimits

0x560a,	// (0x0001252d) indicator_pane_cp2

0x572e,	// (0x00012651) navi_pane_srt_ParamLimits

0x572e,	// (0x00012651) navi_pane_srt

0x5752,	// (0x00012675) popup_clock_digital_analogue_window_cp1

0x32dd,	// (0x00010200) indicator_pane_t1

0x4c8c,	// (0x00011baf) copy_highlight_pane

0x4c8c,	// (0x00011baf) cursor_graphics_pane

0x4c8c,	// (0x00011baf) graphic_within_text_pane

0x4c8c,	// (0x00011baf) link_highlight_pane

0x7af2,	// (0x00014a15) popup_preview_text_window_t5_ParamLimits

0x7af2,	// (0x00014a15) popup_preview_text_window_t5

0x4dac,	// (0x00011ccf) cursor_digital_pane

0x4dac,	// (0x00011ccf) cursor_primary_pane

0x4dbd,	// (0x00011ce0) cursor_primary_small_pane

0x4dc5,	// (0x00011ce8) cursor_secondary_pane

0x4dcd,	// (0x00011cf0) cursor_title_pane

0x4dac,	// (0x00011ccf) link_highlight_digital_pane

0x4db4,	// (0x00011cd7) link_highlight_primary_pane

0x4dbd,	// (0x00011ce0) link_highlight_primary_small_pane

0x4dc5,	// (0x00011ce8) link_highlight_secondary_pane

0x4dcd,	// (0x00011cf0) link_highlight_title_pane

0x4dac,	// (0x00011ccf) copy_highlight_digital_pane

0x4dac,	// (0x00011ccf) copy_highlight_primary_pane

0x4dbd,	// (0x00011ce0) copy_highlight_primary_small_pane

0x4dc5,	// (0x00011ce8) copy_highlight_secondary_pane

0x4dcd,	// (0x00011cf0) copy_highlight_title_pane

0x4dc5,	// (0x00011ce8) graphic_text_digital_pane

0x623e,	// (0x00013161) graphic_text_primary_pane

0x6247,	// (0x0001316a) graphic_text_primary_small_pane

0x4dbd,	// (0x00011ce0) graphic_text_secondary_pane

0x4dac,	// (0x00011ccf) graphic_text_title_pane

0x4dd5,	// (0x00011cf8) cursor_primary_pane_g1

0x6230,	// (0x00013153) cursor_text_primary_t1

0x621a,	// (0x0001313d) cursor_primary_small_pane_g1

0x6222,	// (0x00013145) cursor_text_primary_small_t1

0x6204,	// (0x00013127) cursor_primary_small_pane_g1_copy1

0x620c,	// (0x0001312f) cursor_text_primary_small_t1_copy1

0x61ee,	// (0x00013111) cursor_text_title_t1

0x61fc,	// (0x0001311f) cursor_title_pane_g1

0x4dd5,	// (0x00011cf8) cursor_digital_pane_g1

0x4ddd,	// (0x00011d00) cursor_text_digital_t1

0x4deb,	// (0x00011d0e) link_highlight_primary_pane_g1

0x6197,	// (0x000130ba) link_highlight_primary_pane_t1

0x4deb,	// (0x00011d0e) link_highlight_primary_small_pane_g1

0x4df3,	// (0x00011d16) link_highlight_primary_small_pane_t1

0x4e02,	// (0x00011d25) link_highlight_secondary_pane_g1

0x4e0a,	// (0x00011d2d) link_highlight_secondary_pane_t1

0x60fc,	// (0x0001301f) link_highlight_title_pane_g1

0x6113,	// (0x00013036) link_highlight_title_pane_t1

0x60fc,	// (0x0001301f) link_highlight_digital_pane_g1

0x6104,	// (0x00013027) link_highlight_digital_pane_t1

0x5fbc,	// (0x00012edf) copy_highlight_primary_pane_g1

0x5fe2,	// (0x00012f05) copy_highlight_primary_pane_t1

0x5fbc,	// (0x00012edf) copy_highlight_primary_small_pane_g1

0x5fd3,	// (0x00012ef6) copy_highlight_primary_small_pane_t1

0x4e19,	// (0x00011d3c) copy_highlight_secondary_pane_g1

0x4e21,	// (0x00011d44) copy_highlight_secondary_pane_t1

0x5fbc,	// (0x00012edf) copy_highlight_title_pane_g1

0x5fc4,	// (0x00012ee7) copy_highlight_title_pane_t1

0x5fbc,	// (0x00012edf) copy_highlight_digital_pane_g1

0x7ffe,	// (0x00014f21) copy_highlight_digital_pane_t1

0x7f52,	// (0x00014e75) graphic_text_primary_pane_g1

0x7fe2,	// (0x00014f05) graphic_text_primary_pane_t1

0x7ff0,	// (0x00014f13) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0001c8f1) graphic_text_primary_pane_t

0x7fbe,	// (0x00014ee1) graphic_text_primary_small_pane_g1

0x7fc6,	// (0x00014ee9) graphic_text_primary_small_pane_t1

0x7fd4,	// (0x00014ef7) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0001c8ec) graphic_text_primary_small_pane_t

0x7f9a,	// (0x00014ebd) graphic_text_secondary_pane_g1

0x7fa2,	// (0x00014ec5) graphic_text_secondary_pane_t1

0x7fb0,	// (0x00014ed3) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0001c8e7) graphic_text_secondary_pane_t

0x7f76,	// (0x00014e99) graphic_text_title_pane_g1

0x7f7e,	// (0x00014ea1) graphic_text_title_pane_t1

0x7f8c,	// (0x00014eaf) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0001c8e2) graphic_text_title_pane_t

0x7f52,	// (0x00014e75) graphic_text_digital_pane_g1

0x7f5a,	// (0x00014e7d) graphic_text_digital_pane_t1

0x7f68,	// (0x00014e8b) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0001c8dd) graphic_text_digital_pane_t

0x31e9,	// (0x0001010c) navi_icon_pane_srt_ParamLimits

0x31e9,	// (0x0001010c) navi_icon_pane_srt

0x3109,	// (0x0001002c) navi_midp_pane_srt

0x3109,	// (0x0001002c) navi_navi_pane_srt

0x31e9,	// (0x0001010c) navi_text_pane_srt_ParamLimits

0x31e9,	// (0x0001010c) navi_text_pane_srt

0x7f1d,	// (0x00014e40) navi_navi_icon_text_pane_srt

0x7f37,	// (0x00014e5a) navi_navi_pane_srt_g1_ParamLimits

0x7f37,	// (0x00014e5a) navi_navi_pane_srt_g1

0x7f25,	// (0x00014e48) navi_navi_pane_srt_g2_ParamLimits

0x7f25,	// (0x00014e48) navi_navi_pane_srt_g2

0x0001,

0xf8ef,	// (0x0001c812) navi_navi_pane_srt_g_ParamLimits

0xf8ef,	// (0x0001c812) navi_navi_pane_srt_g

0x7f49,	// (0x00014e6c) navi_navi_tabs_pane_srt

0x7f1d,	// (0x00014e40) navi_navi_text_pane_srt

0x7f1d,	// (0x00014e40) navi_navi_volume_pane_srt

0x7f0e,	// (0x00014e31) navi_navi_text_pane_srt_t1

0xc473,	// (0x00019396) navi_navi_volume_pane_srt_g1

0xc47b,	// (0x0001939e) volume_small_pane_srt_ParamLimits

0xc47b,	// (0x0001939e) volume_small_pane_srt

0xbbaf,	// (0x00018ad2) volume_small_pane_srt_g1_ParamLimits

0xbbaf,	// (0x00018ad2) volume_small_pane_srt_g1

0xbbbf,	// (0x00018ae2) volume_small_pane_srt_g2_ParamLimits

0xbbbf,	// (0x00018ae2) volume_small_pane_srt_g2

0xbbd0,	// (0x00018af3) volume_small_pane_srt_g3_ParamLimits

0xbbd0,	// (0x00018af3) volume_small_pane_srt_g3

0xbbe1,	// (0x00018b04) volume_small_pane_srt_g4_ParamLimits

0xbbe1,	// (0x00018b04) volume_small_pane_srt_g4

0xbbf2,	// (0x00018b15) volume_small_pane_srt_g5_ParamLimits

0xbbf2,	// (0x00018b15) volume_small_pane_srt_g5

0xbc03,	// (0x00018b26) volume_small_pane_srt_g6_ParamLimits

0xbc03,	// (0x00018b26) volume_small_pane_srt_g6

0xbc14,	// (0x00018b37) volume_small_pane_srt_g7_ParamLimits

0xbc14,	// (0x00018b37) volume_small_pane_srt_g7

0xbc25,	// (0x00018b48) volume_small_pane_srt_g8_ParamLimits

0xbc25,	// (0x00018b48) volume_small_pane_srt_g8

0xbc36,	// (0x00018b59) volume_small_pane_srt_g9_ParamLimits

0xbc36,	// (0x00018b59) volume_small_pane_srt_g9

0xbc47,	// (0x00018b6a) volume_small_pane_srt_g10_ParamLimits

0xbc47,	// (0x00018b6a) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001c693) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001c693) volume_small_pane_srt_g

0x35e1,	// (0x00010504) query_popup_data_pane_cp2

0x7ef4,	// (0x00014e17) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x7ef4,	// (0x00014e17) navi_navi_icon_text_pane_srt_t1

0x623e,	// (0x00013161) navi_tabs_2_long_pane_srt

0x623e,	// (0x00013161) navi_tabs_2_pane_srt

0x623e,	// (0x00013161) navi_tabs_3_long_pane_srt

0x623e,	// (0x00013161) navi_tabs_3_pane_srt

0x623e,	// (0x00013161) navi_tabs_4_pane_srt

0xc453,	// (0x00019376) tabs_2_active_pane_srt_ParamLimits

0xc453,	// (0x00019376) tabs_2_active_pane_srt

0xc463,	// (0x00019386) tabs_2_passive_pane_srt_ParamLimits

0xc463,	// (0x00019386) tabs_2_passive_pane_srt

0x4fff,	// (0x00011f22) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4fff,	// (0x00011f22) bg_passive_tab_pane_cp1_srt

0x7839,	// (0x0001475c) bg_passive_tab_pane_g1_cp1_srt

0x4957,	// (0x0001187a) bg_passive_tab_pane_g2_cp1_srt

0x7830,	// (0x00014753) bg_passive_tab_pane_g3_cp1_srt

0x31e9,	// (0x0001010c) bg_active_tab_pane_cp1_srt_ParamLimits

0x31e9,	// (0x0001010c) bg_active_tab_pane_cp1_srt

0x7828,	// (0x0001474b) tabs_2_active_pane_srt_g1

0x4207,	// (0x0001112a) tabs_2_active_pane_srt_t1_ParamLimits

0x4207,	// (0x0001112a) tabs_2_active_pane_srt_t1

0x7839,	// (0x0001475c) bg_active_tab_pane_g1_cp1_srt

0x4957,	// (0x0001187a) bg_active_tab_pane_g2_cp1_srt

0x7830,	// (0x00014753) bg_active_tab_pane_g3_cp1_srt

0xc420,	// (0x00019343) tabs_3_active_pane_srt_ParamLimits

0xc420,	// (0x00019343) tabs_3_active_pane_srt

0xc431,	// (0x00019354) tabs_3_passive_pane_cp_srt_ParamLimits

0xc431,	// (0x00019354) tabs_3_passive_pane_cp_srt

0xc442,	// (0x00019365) tabs_3_passive_pane_srt_ParamLimits

0xc442,	// (0x00019365) tabs_3_passive_pane_srt

0x4fff,	// (0x00011f22) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4fff,	// (0x00011f22) bg_passive_tab_pane_cp2_srt

0x4e39,	// (0x00011d5c) bg_passive_tab_pane_g1_cp2_srt

0x4957,	// (0x0001187a) bg_passive_tab_pane_g2_cp2_srt

0x4e30,	// (0x00011d53) bg_passive_tab_pane_g3_cp2_srt

0x31e9,	// (0x0001010c) bg_active_tab_pane_cp2_srt_ParamLimits

0x31e9,	// (0x0001010c) bg_active_tab_pane_cp2_srt

0x7ee4,	// (0x00014e07) tabs_3_active_pane_srt_g1

0x31ff,	// (0x00010122) tabs_3_active_pane_srt_t1_ParamLimits

0x31ff,	// (0x00010122) tabs_3_active_pane_srt_t1

0x4e39,	// (0x00011d5c) bg_active_tab_pane_g1_cp2_srt

0x4957,	// (0x0001187a) bg_active_tab_pane_g2_cp2_srt

0x4e30,	// (0x00011d53) bg_active_tab_pane_g3_cp2_srt

0xc3d8,	// (0x000192fb) tabs_4_active_pane_srt_ParamLimits

0xc3d8,	// (0x000192fb) tabs_4_active_pane_srt

0xc3ea,	// (0x0001930d) tabs_4_passive_pane_cp2_srt_ParamLimits

0xc3ea,	// (0x0001930d) tabs_4_passive_pane_cp2_srt

0x4f84,	// (0x00011ea7) aid_size_cell_toolbar

0x423a,	// (0x0001115d) main_idle_act_pane_ParamLimits

0x516a,	// (0x0001208d) popup_large_graphic_colour_window_ParamLimits

0x541e,	// (0x00012341) popup_toolbar_window_ParamLimits

0x541e,	// (0x00012341) popup_toolbar_window

0xaf15,	// (0x00017e38) list_single_graphic_2heading_pane_ParamLimits

0xaf15,	// (0x00017e38) list_single_graphic_2heading_pane

0x4411,	// (0x00011334) aid_size_cell_apps_grid_lsc_pane

0x4423,	// (0x00011346) aid_size_cell_apps_grid_prt_pane

0x4fff,	// (0x00011f22) bg_wml_button_pane_cp1_ParamLimits

0x4fff,	// (0x00011f22) bg_wml_button_pane_cp1

0x5c57,	// (0x00012b7a) form_midp_field_text_pane_t1_ParamLimits

0x5a76,	// (0x00012999) input_focus_pane_cp050_ParamLimits

0x5c7a,	// (0x00012b9d) list_midp_form_text_pane_ParamLimits

0x5c34,	// (0x00012b57) input_focus_pane_cp051_ParamLimits

0x5c48,	// (0x00012b6b) list_midp_choice_pane_ParamLimits

0x5b02,	// (0x00012a25) list_single_2graphic_pane_cp3_ParamLimits

0x5b02,	// (0x00012a25) list_single_2graphic_pane_cp3

0x5b16,	// (0x00012a39) list_single_midp_graphic_pane_ParamLimits

0x5b16,	// (0x00012a39) list_single_midp_graphic_pane

0xa6d1,	// (0x000175f4) list_single_graphic_2heading_pane_g1_ParamLimits

0xa6d1,	// (0x000175f4) list_single_graphic_2heading_pane_g1

0xadfc,	// (0x00017d1f) list_single_graphic_2heading_pane_g4_ParamLimits

0xadfc,	// (0x00017d1f) list_single_graphic_2heading_pane_g4

0xae08,	// (0x00017d2b) list_single_graphic_2heading_pane_g5_ParamLimits

0xae08,	// (0x00017d2b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001c6e6) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001c6e6) list_single_graphic_2heading_pane_g

0xae14,	// (0x00017d37) list_single_graphic_2heading_pane_t1_ParamLimits

0xae14,	// (0x00017d37) list_single_graphic_2heading_pane_t1

0xae28,	// (0x00017d4b) list_single_graphic_2heading_pane_t2_ParamLimits

0xae28,	// (0x00017d4b) list_single_graphic_2heading_pane_t2

0xae42,	// (0x00017d65) list_single_graphic_2heading_pane_t3_ParamLimits

0xae42,	// (0x00017d65) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001c6ed) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001c6ed) list_single_graphic_2heading_pane_t

0x589e,	// (0x000127c1) bg_popup_sub_pane_cp2

0x58c4,	// (0x000127e7) grid_toobar_pane

0xbda3,	// (0x00018cc6) cell_toolbar_pane_ParamLimits

0xbda3,	// (0x00018cc6) cell_toolbar_pane

0x58fa,	// (0x0001281d) cell_toolbar_pane_g1_ParamLimits

0x58fa,	// (0x0001281d) cell_toolbar_pane_g1

0x590c,	// (0x0001282f) cell_toolbar_pane_g2_ParamLimits

0x590c,	// (0x0001282f) cell_toolbar_pane_g2

0x0001,

0xf7d1,	// (0x0001c6f4) cell_toolbar_pane_g_ParamLimits

0xf7d1,	// (0x0001c6f4) cell_toolbar_pane_g

0x592e,	// (0x00012851) grid_highlight_pane_cp2_ParamLimits

0x592e,	// (0x00012851) grid_highlight_pane_cp2

0x5948,	// (0x0001286b) toolbar_button_pane

0x5954,	// (0x00012877) toolbar_button_pane_g1

0x5964,	// (0x00012887) toolbar_button_pane_g2

0x595c,	// (0x0001287f) toolbar_button_pane_g3

0x5974,	// (0x00012897) toolbar_button_pane_g4

0x596c,	// (0x0001288f) toolbar_button_pane_g5

0x597c,	// (0x0001289f) toolbar_button_pane_g6

0x5984,	// (0x000128a7) toolbar_button_pane_g7

0x5994,	// (0x000128b7) toolbar_button_pane_g8

0x598c,	// (0x000128af) toolbar_button_pane_g9

0x0009,

0xf7d6,	// (0x0001c6f9) toolbar_button_pane_g

0xbdd2,	// (0x00018cf5) list_single_2graphic_pane_g1_cp3_ParamLimits

0xbdd2,	// (0x00018cf5) list_single_2graphic_pane_g1_cp3

0xbdde,	// (0x00018d01) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbdde,	// (0x00018d01) list_single_2graphic_pane_g2_cp3

0x4b0d,	// (0x00011a30) list_single_2graphic_pane_g3_cp3

0x599c,	// (0x000128bf) list_single_2graphic_pane_g4_cp3_ParamLimits

0x599c,	// (0x000128bf) list_single_2graphic_pane_g4_cp3

0xbded,	// (0x00018d10) list_single_2graphic_pane_t1_cp3_ParamLimits

0xbded,	// (0x00018d10) list_single_2graphic_pane_t1_cp3

0x4b01,	// (0x00011a24) list_single_midp_graphic_pane_g2_ParamLimits

0x4b01,	// (0x00011a24) list_single_midp_graphic_pane_g2

0x4f94,	// (0x00011eb7) aid_zoom_text_primary

0xadcf,	// (0x00017cf2) aid_zoom_text_secondary

0x4eeb,	// (0x00011e0e) status_small_pane_g7_ParamLimits

0x4eeb,	// (0x00011e0e) status_small_pane_g7

0x4f0e,	// (0x00011e31) status_small_pane_t1_ParamLimits

0x3120,	// (0x00010043) title_pane_g2

0x0003,

0xf56a,	// (0x0001c48d) title_pane_g

0x3680,	// (0x000105a3) aid_size_cell_colour_1_pane_ParamLimits

0x3680,	// (0x000105a3) aid_size_cell_colour_1_pane

0x3694,	// (0x000105b7) aid_size_cell_colour_2_pane_ParamLimits

0x3694,	// (0x000105b7) aid_size_cell_colour_2_pane

0x36d4,	// (0x000105f7) aid_size_cell_colour_3_pane_ParamLimits

0x36d4,	// (0x000105f7) aid_size_cell_colour_3_pane

0x36e8,	// (0x0001060b) aid_size_cell_colour_4_pane_ParamLimits

0x36e8,	// (0x0001060b) aid_size_cell_colour_4_pane

0xb86a,	// (0x0001878d) title_pane_stacon_g1_ParamLimits

0xb86a,	// (0x0001878d) title_pane_stacon_g1

0x6039,	// (0x00012f5c) popup_note_wait_window_g3_ParamLimits

0x6039,	// (0x00012f5c) popup_note_wait_window_g3

0x60af,	// (0x00012fd2) popup_note_wait_window_t5_ParamLimits

0x60af,	// (0x00012fd2) popup_note_wait_window_t5

0x3109,	// (0x0001002c) main_feb_china_hwr_fs_writing_pane

0x507f,	// (0x00011fa2) popup_feb_china_hwr_fs_window_ParamLimits

0x507f,	// (0x00011fa2) popup_feb_china_hwr_fs_window

0xbe1d,	// (0x00018d40) aid_size_cell_hwr_fs_ParamLimits

0xbe1d,	// (0x00018d40) aid_size_cell_hwr_fs

0x5a76,	// (0x00012999) bg_popup_sub_pane_cp3_ParamLimits

0x5a76,	// (0x00012999) bg_popup_sub_pane_cp3

0xbe32,	// (0x00018d55) grid_hwr_fs_pane_ParamLimits

0xbe32,	// (0x00018d55) grid_hwr_fs_pane

0xbe46,	// (0x00018d69) linegrid_hwr_fs_pane_ParamLimits

0xbe46,	// (0x00018d69) linegrid_hwr_fs_pane

0xbe56,	// (0x00018d79) cell_hwr_fs_pane_ParamLimits

0xbe56,	// (0x00018d79) cell_hwr_fs_pane

0x5a82,	// (0x000129a5) linegrid_hwr_fs_pane_g1_ParamLimits

0x5a82,	// (0x000129a5) linegrid_hwr_fs_pane_g1

0x5a8e,	// (0x000129b1) linegrid_hwr_fs_pane_g2_ParamLimits

0x5a8e,	// (0x000129b1) linegrid_hwr_fs_pane_g2

0x5aa0,	// (0x000129c3) linegrid_hwr_fs_pane_g3_ParamLimits

0x5aa0,	// (0x000129c3) linegrid_hwr_fs_pane_g3

0xbe74,	// (0x00018d97) linegrid_hwr_fs_pane_g4_ParamLimits

0xbe74,	// (0x00018d97) linegrid_hwr_fs_pane_g4

0xbe8e,	// (0x00018db1) linegrid_hwr_fs_pane_g5_ParamLimits

0xbe8e,	// (0x00018db1) linegrid_hwr_fs_pane_g5

0x0004,

0xf801,	// (0x0001c724) linegrid_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0001c724) linegrid_hwr_fs_pane_g

0x5aac,	// (0x000129cf) cell_hwr_fs_pane_g1_ParamLimits

0x5aac,	// (0x000129cf) cell_hwr_fs_pane_g1

0x57dc,	// (0x000126ff) cell_hwr_fs_pane_g2_ParamLimits

0x57dc,	// (0x000126ff) cell_hwr_fs_pane_g2

0x5ac2,	// (0x000129e5) cell_hwr_fs_pane_g3_ParamLimits

0x5ac2,	// (0x000129e5) cell_hwr_fs_pane_g3

0x5acf,	// (0x000129f2) cell_hwr_fs_pane_g4_ParamLimits

0x5acf,	// (0x000129f2) cell_hwr_fs_pane_g4

0x0003,

0xf80c,	// (0x0001c72f) cell_hwr_fs_pane_g_ParamLimits

0xf80c,	// (0x0001c72f) cell_hwr_fs_pane_g

0xbea4,	// (0x00018dc7) cell_hwr_fs_pane_t1

0x3109,	// (0x0001002c) grid_highlight_pane_cp6

0x3109,	// (0x0001002c) main_idle_act2_pane

0x41ad,	// (0x000110d0) aid_inside_area_popup_secondary

0xc00d,	// (0x00018f30) aid_inside_area_window_primary_ParamLimits

0xc00d,	// (0x00018f30) aid_inside_area_window_primary

0x800d,	// (0x00014f30) ai2_news_ticker_pane

0x8015,	// (0x00014f38) aid_size_cell_ai1_link_ParamLimits

0x8015,	// (0x00014f38) aid_size_cell_ai1_link

0xc490,	// (0x000193b3) popup_ai2_data_window_ParamLimits

0xc490,	// (0x000193b3) popup_ai2_data_window

0x802f,	// (0x00014f52) popup_ai2_link_window_ParamLimits

0x802f,	// (0x00014f52) popup_ai2_link_window

0x5a76,	// (0x00012999) bg_popup_sub_pane_cp4_ParamLimits

0x5a76,	// (0x00012999) bg_popup_sub_pane_cp4

0x8043,	// (0x00014f66) grid_ai2_link_pane_ParamLimits

0x8043,	// (0x00014f66) grid_ai2_link_pane

0x805a,	// (0x00014f7d) popup_ai2_link_window_g1_ParamLimits

0x805a,	// (0x00014f7d) popup_ai2_link_window_g1

0x8066,	// (0x00014f89) popup_ai2_link_window_g2_ParamLimits

0x8066,	// (0x00014f89) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0001c8f6) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0001c8f6) popup_ai2_link_window_g

0x8075,	// (0x00014f98) ai2_mp_button_pane

0x807d,	// (0x00014fa0) ai2_mp_volume_pane

0x5c34,	// (0x00012b57) bg_popup_sub_pane_cp5_ParamLimits

0x5c34,	// (0x00012b57) bg_popup_sub_pane_cp5

0x8085,	// (0x00014fa8) heading_ai2_gene_pane_ParamLimits

0x8085,	// (0x00014fa8) heading_ai2_gene_pane

0x8091,	// (0x00014fb4) list_ai2_gene_pane_ParamLimits

0x8091,	// (0x00014fb4) list_ai2_gene_pane

0x80d9,	// (0x00014ffc) cell_ai2_link_pane_ParamLimits

0x80d9,	// (0x00014ffc) cell_ai2_link_pane

0x80ef,	// (0x00015012) cell_ai2_link_pane_g1

0x3109,	// (0x0001002c) grid_highlight_pane_cp7

0xc4d7,	// (0x000193fa) ai2_mp_volume_pane_g1

0x818c,	// (0x000150af) ai2_mp_volume_pane_g2

0xc4bb,	// (0x000193de) list_ai2_gene_pane_t1

0x8184,	// (0x000150a7) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0001c90f) ai2_mp_volume_pane_g

0xc4df,	// (0x00019402) volume_small_pane_cp3

0x8194,	// (0x000150b7) aid_size_cell_ai2_button

0x819c,	// (0x000150bf) grid_ai2_button_pane

0x81a5,	// (0x000150c8) cell_ai2_button_pane_ParamLimits

0x81a5,	// (0x000150c8) cell_ai2_button_pane

0x3022,	// (0x0000ff45) cell_ai2_button_pane_g1

0x3109,	// (0x0001002c) grid_highlight_pane_cp8

0x8144,	// (0x00015067) ai2_gene_pane_t1_ParamLimits

0x8144,	// (0x00015067) ai2_gene_pane_t1

0x4f7a,	// (0x00011e9d) aid_height_parent_landscape

0xc18e,	// (0x000190b1) aid_height_set_list

0x7de7,	// (0x00014d0a) aid_size_parent

0x7ece,	// (0x00014df1) aid_size_cell_graphic_pane_ParamLimits

0x80a1,	// (0x00014fc4) popup_ai2_data_window_g1_ParamLimits

0x80a1,	// (0x00014fc4) popup_ai2_data_window_g1

0x80ad,	// (0x00014fd0) ai2_news_ticker_pane_g1

0x80b5,	// (0x00014fd8) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0001c8fb) ai2_news_ticker_pane_g

0x80bd,	// (0x00014fe0) ai2_news_ticker_pane_t1

0x80cb,	// (0x00014fee) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0001c900) ai2_news_ticker_pane_t

0x7eaf,	// (0x00014dd2) heading_ai2_gene_pane_g1

0x80f8,	// (0x0001501b) heading_ai2_gene_pane_t1_ParamLimits

0x80f8,	// (0x0001501b) heading_ai2_gene_pane_t1

0x810d,	// (0x00015030) list_highlight_pane_cp6

0xc4a4,	// (0x000193c7) ai2_gene_pane_ParamLimits

0xc4a4,	// (0x000193c7) ai2_gene_pane

0xc4c9,	// (0x000193ec) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0001c905) list_ai2_gene_pane_t

0x8115,	// (0x00015038) list_highlight_pane_cp8_ParamLimits

0x8115,	// (0x00015038) list_highlight_pane_cp8

0x8126,	// (0x00015049) ai2_gene_pane_g1_ParamLimits

0x8126,	// (0x00015049) ai2_gene_pane_g1

0x8138,	// (0x0001505b) ai2_gene_pane_g2_ParamLimits

0x8138,	// (0x0001505b) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0001c90a) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0001c90a) ai2_gene_pane_g

0x3979,	// (0x0001089c) scroll_pane_cp12

0xbd5a,	// (0x00018c7d) control_pane_t3_ParamLimits

0xbd5a,	// (0x00018c7d) control_pane_t3

0x4eff,	// (0x00011e22) status_small_pane_g8_ParamLimits

0x4eff,	// (0x00011e22) status_small_pane_g8

0x513f,	// (0x00012062) popup_find_window_ParamLimits

0x52c1,	// (0x000121e4) popup_note_image_window_ParamLimits

0xa6d1,	// (0x000175f4) list_double2_graphic_pane_vc_g1_ParamLimits

0xa6d1,	// (0x000175f4) list_double2_graphic_pane_vc_g1

0xadfc,	// (0x00017d1f) list_double2_graphic_pane_vc_g2_ParamLimits

0xadfc,	// (0x00017d1f) list_double2_graphic_pane_vc_g2

0xae08,	// (0x00017d2b) list_double2_graphic_pane_vc_g3_ParamLimits

0xae08,	// (0x00017d2b) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0001c6e6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0001c6e6) list_double2_graphic_pane_vc_g

0xae5a,	// (0x00017d7d) list_double2_graphic_pane_vc_t1_ParamLimits

0xae5a,	// (0x00017d7d) list_double2_graphic_pane_vc_t1

0xadfc,	// (0x00017d1f) list_single_heading_pane_vc_g1_ParamLimits

0xadfc,	// (0x00017d1f) list_single_heading_pane_vc_g1

0xae08,	// (0x00017d2b) list_single_heading_pane_vc_g2_ParamLimits

0xae08,	// (0x00017d2b) list_single_heading_pane_vc_g2

0x0001,

0xf7eb,	// (0x0001c70e) list_single_heading_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001c70e) list_single_heading_pane_vc_g

0xae70,	// (0x00017d93) list_single_heading_pane_vc_t1_ParamLimits

0xae70,	// (0x00017d93) list_single_heading_pane_vc_t1

0xae86,	// (0x00017da9) list_single_heading_pane_vc_t2_ParamLimits

0xae86,	// (0x00017da9) list_single_heading_pane_vc_t2

0x0001,

0xf7f0,	// (0x0001c713) list_single_heading_pane_vc_t_ParamLimits

0xf7f0,	// (0x0001c713) list_single_heading_pane_vc_t

0x59d0,	// (0x000128f3) list_setting_number_pane_vc_g1_ParamLimits

0x59d0,	// (0x000128f3) list_setting_number_pane_vc_g1

0x59dc,	// (0x000128ff) list_setting_number_pane_vc_g2_ParamLimits

0x59dc,	// (0x000128ff) list_setting_number_pane_vc_g2

0x0001,

0xf7f5,	// (0x0001c718) list_setting_number_pane_vc_g_ParamLimits

0xf7f5,	// (0x0001c718) list_setting_number_pane_vc_g

0x59e8,	// (0x0001290b) list_setting_number_pane_vc_t1_ParamLimits

0x59e8,	// (0x0001290b) list_setting_number_pane_vc_t1

0x59fc,	// (0x0001291f) list_setting_number_pane_vc_t2_ParamLimits

0x59fc,	// (0x0001291f) list_setting_number_pane_vc_t2

0x5a18,	// (0x0001293b) list_setting_number_pane_vc_t3_ParamLimits

0x5a18,	// (0x0001293b) list_setting_number_pane_vc_t3

0x0002,

0xf7fa,	// (0x0001c71d) list_setting_number_pane_vc_t_ParamLimits

0xf7fa,	// (0x0001c71d) list_setting_number_pane_vc_t

0x5a3e,	// (0x00012961) set_value_pane_vc_ParamLimits

0x5a3e,	// (0x00012961) set_value_pane_vc

0xaf15,	// (0x00017e38) list_double2_graphic_pane_vc_ParamLimits

0xaf15,	// (0x00017e38) list_double2_graphic_pane_vc

0x7e55,	// (0x00014d78) list_double2_large_graphic_pane_vc_ParamLimits

0x7e55,	// (0x00014d78) list_double2_large_graphic_pane_vc

0xaf15,	// (0x00017e38) list_double2_pane_vc_ParamLimits

0xaf15,	// (0x00017e38) list_double2_pane_vc

0xaf15,	// (0x00017e38) list_double_graphic_heading_pane_vc_ParamLimits

0xaf15,	// (0x00017e38) list_double_graphic_heading_pane_vc

0xaf15,	// (0x00017e38) list_double_graphic_pane_vc_ParamLimits

0xaf15,	// (0x00017e38) list_double_graphic_pane_vc

0xaf15,	// (0x00017e38) list_double_heading_pane_vc_ParamLimits

0xaf15,	// (0x00017e38) list_double_heading_pane_vc

0x7e55,	// (0x00014d78) list_double_large_graphic_pane_vc_ParamLimits

0x7e55,	// (0x00014d78) list_double_large_graphic_pane_vc

0xaf15,	// (0x00017e38) list_double_number_pane_vc_ParamLimits

0xaf15,	// (0x00017e38) list_double_number_pane_vc

0xaf15,	// (0x00017e38) list_double_pane_vc_ParamLimits

0xaf15,	// (0x00017e38) list_double_pane_vc

0xaf15,	// (0x00017e38) list_double_time_pane_vc_ParamLimits

0xaf15,	// (0x00017e38) list_double_time_pane_vc

0xaf15,	// (0x00017e38) list_setting_number_pane_vc_ParamLimits

0xaf15,	// (0x00017e38) list_setting_number_pane_vc

0xaf15,	// (0x00017e38) list_setting_pane_vc_ParamLimits

0xaf15,	// (0x00017e38) list_setting_pane_vc

0xaf15,	// (0x00017e38) list_single_graphic_heading_pane_vc_ParamLimits

0xaf15,	// (0x00017e38) list_single_graphic_heading_pane_vc

0xaf15,	// (0x00017e38) list_single_heading_pane_vc_ParamLimits

0xaf15,	// (0x00017e38) list_single_heading_pane_vc

0xaf29,	// (0x00017e4c) list_single_number_heading_pane_vc_ParamLimits

0xaf29,	// (0x00017e4c) list_single_number_heading_pane_vc

0xaf6d,	// (0x00017e90) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xaf6d,	// (0x00017e90) list_double_graphic_heading_pane_vc_g1

0xadfc,	// (0x00017d1f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xadfc,	// (0x00017d1f) list_double_graphic_heading_pane_vc_g2

0xae08,	// (0x00017d2b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xae08,	// (0x00017d2b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x0001c916) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x0001c916) list_double_graphic_heading_pane_vc_g

0xaf79,	// (0x00017e9c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xaf79,	// (0x00017e9c) list_double_graphic_heading_pane_vc_t1

0xae70,	// (0x00017d93) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xae70,	// (0x00017d93) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0001c91d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0001c91d) list_double_graphic_heading_pane_vc_t

0x59d0,	// (0x000128f3) list_setting_pane_vc_g1_ParamLimits

0x59d0,	// (0x000128f3) list_setting_pane_vc_g1

0x59dc,	// (0x000128ff) list_setting_pane_vc_g2_ParamLimits

0x59dc,	// (0x000128ff) list_setting_pane_vc_g2

0x0001,

0xf7f5,	// (0x0001c718) list_setting_pane_vc_g_ParamLimits

0xf7f5,	// (0x0001c718) list_setting_pane_vc_g

0x8428,	// (0x0001534b) list_setting_pane_vc_t1_ParamLimits

0x8428,	// (0x0001534b) list_setting_pane_vc_t1

0x843c,	// (0x0001535f) list_setting_pane_vc_t2_ParamLimits

0x843c,	// (0x0001535f) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0001c960) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0001c960) list_setting_pane_vc_t

0x5a3e,	// (0x00012961) set_value_pane_cp_vc_ParamLimits

0x5a3e,	// (0x00012961) set_value_pane_cp_vc

0xadfc,	// (0x00017d1f) list_single_number_heading_pane_vc_g1_ParamLimits

0xadfc,	// (0x00017d1f) list_single_number_heading_pane_vc_g1

0xae08,	// (0x00017d2b) list_single_number_heading_pane_vc_g2_ParamLimits

0xae08,	// (0x00017d2b) list_single_number_heading_pane_vc_g2

0x0001,

0xf7eb,	// (0x0001c70e) list_single_number_heading_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001c70e) list_single_number_heading_pane_vc_g

0xae70,	// (0x00017d93) list_single_number_heading_pane_vc_t1_ParamLimits

0xae70,	// (0x00017d93) list_single_number_heading_pane_vc_t1

0xaf8b,	// (0x00017eae) list_single_number_heading_pane_vc_t2_ParamLimits

0xaf8b,	// (0x00017eae) list_single_number_heading_pane_vc_t2

0xaf9d,	// (0x00017ec0) list_single_number_heading_pane_vc_t3_ParamLimits

0xaf9d,	// (0x00017ec0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0001c965) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0001c965) list_single_number_heading_pane_vc_t

0xa6d1,	// (0x000175f4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xa6d1,	// (0x000175f4) list_single_graphic_heading_pane_vc_g1

0xadfc,	// (0x00017d1f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xadfc,	// (0x00017d1f) list_single_graphic_heading_pane_vc_g4

0xae08,	// (0x00017d2b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xae08,	// (0x00017d2b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0001c6e6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0001c6e6) list_single_graphic_heading_pane_vc_g

0xae70,	// (0x00017d93) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xae70,	// (0x00017d93) list_single_graphic_heading_pane_vc_t1

0xafaf,	// (0x00017ed2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xafaf,	// (0x00017ed2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0001c96c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0001c96c) list_single_graphic_heading_pane_vc_t

0xadfc,	// (0x00017d1f) list_double2_pane_vc_g1_ParamLimits

0xadfc,	// (0x00017d1f) list_double2_pane_vc_g1

0xae08,	// (0x00017d2b) list_double2_pane_vc_g2_ParamLimits

0xae08,	// (0x00017d2b) list_double2_pane_vc_g2

0x0001,

0xf7eb,	// (0x0001c70e) list_double2_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001c70e) list_double2_pane_vc_g

0xafc1,	// (0x00017ee4) list_double2_pane_vc_t1_ParamLimits

0xafc1,	// (0x00017ee4) list_double2_pane_vc_t1

0xafd7,	// (0x00017efa) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xafd7,	// (0x00017efa) list_double2_large_graphic_pane_vc_g1

0xafe3,	// (0x00017f06) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xafe3,	// (0x00017f06) list_double2_large_graphic_pane_vc_g2

0xafef,	// (0x00017f12) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xafef,	// (0x00017f12) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4e,	// (0x0001c971) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x0001c971) list_double2_large_graphic_pane_vc_g

0xaffb,	// (0x00017f1e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xaffb,	// (0x00017f1e) list_double2_large_graphic_pane_vc_t1

0xb011,	// (0x00017f34) list_double_time_pane_vc_g1_ParamLimits

0xb011,	// (0x00017f34) list_double_time_pane_vc_g1

0xb01d,	// (0x00017f40) list_double_time_pane_vc_g2_ParamLimits

0xb01d,	// (0x00017f40) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x0001c978) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x0001c978) list_double_time_pane_vc_g

0xb029,	// (0x00017f4c) list_double_time_pane_vc_t1_ParamLimits

0xb029,	// (0x00017f4c) list_double_time_pane_vc_t1

0xb042,	// (0x00017f65) list_double_time_pane_vc_t2_ParamLimits

0xb042,	// (0x00017f65) list_double_time_pane_vc_t2

0xb07b,	// (0x00017f9e) list_double_time_pane_vc_t3_ParamLimits

0xb07b,	// (0x00017f9e) list_double_time_pane_vc_t3

0xb093,	// (0x00017fb6) list_double_time_pane_vc_t4_ParamLimits

0xb093,	// (0x00017fb6) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x0001c97d) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x0001c97d) list_double_time_pane_vc_t

0xadfc,	// (0x00017d1f) list_double_pane_vc_g1_ParamLimits

0xadfc,	// (0x00017d1f) list_double_pane_vc_g1

0xae08,	// (0x00017d2b) list_double_pane_vc_g2_ParamLimits

0xae08,	// (0x00017d2b) list_double_pane_vc_g2

0x0001,

0xf7eb,	// (0x0001c70e) list_double_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001c70e) list_double_pane_vc_g

0xb0a5,	// (0x00017fc8) list_double_pane_vc_t1_ParamLimits

0xb0a5,	// (0x00017fc8) list_double_pane_vc_t1

0xb0b7,	// (0x00017fda) list_double_pane_vc_t2_ParamLimits

0xb0b7,	// (0x00017fda) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x0001c986) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x0001c986) list_double_pane_vc_t

0xadfc,	// (0x00017d1f) list_double_number_pane_vc_g1_ParamLimits

0xadfc,	// (0x00017d1f) list_double_number_pane_vc_g1

0xae08,	// (0x00017d2b) list_double_number_pane_vc_g2_ParamLimits

0xae08,	// (0x00017d2b) list_double_number_pane_vc_g2

0x0001,

0xf7eb,	// (0x0001c70e) list_double_number_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001c70e) list_double_number_pane_vc_g

0xb0cd,	// (0x00017ff0) list_double_number_pane_vc_t1_ParamLimits

0xb0cd,	// (0x00017ff0) list_double_number_pane_vc_t1

0xb0e1,	// (0x00018004) list_double_number_pane_vc_t2_ParamLimits

0xb0e1,	// (0x00018004) list_double_number_pane_vc_t2

0xb0b7,	// (0x00017fda) list_double_number_pane_vc_t3_ParamLimits

0xb0b7,	// (0x00017fda) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x0001c98b) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x0001c98b) list_double_number_pane_vc_t

0xb0f3,	// (0x00018016) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb0f3,	// (0x00018016) list_double_large_graphic_pane_vc_g1

0xb0ff,	// (0x00018022) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb0ff,	// (0x00018022) list_double_large_graphic_pane_vc_g2

0xafef,	// (0x00017f12) list_double_large_graphic_pane_vc_g3_ParamLimits

0xafef,	// (0x00017f12) list_double_large_graphic_pane_vc_g3

0xb10e,	// (0x00018031) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb10e,	// (0x00018031) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x0001c992) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0001c992) list_double_large_graphic_pane_vc_g

0xb11a,	// (0x0001803d) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb11a,	// (0x0001803d) list_double_large_graphic_pane_vc_t1

0xb12c,	// (0x0001804f) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb12c,	// (0x0001804f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0001c99b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0001c99b) list_double_large_graphic_pane_vc_t

0xadfc,	// (0x00017d1f) list_double_heading_pane_vc_g1_ParamLimits

0xadfc,	// (0x00017d1f) list_double_heading_pane_vc_g1

0xae08,	// (0x00017d2b) list_double_heading_pane_vc_g2_ParamLimits

0xae08,	// (0x00017d2b) list_double_heading_pane_vc_g2

0x0001,

0xf7eb,	// (0x0001c70e) list_double_heading_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001c70e) list_double_heading_pane_vc_g

0xb143,	// (0x00018066) list_double_heading_pane_vc_t1_ParamLimits

0xb143,	// (0x00018066) list_double_heading_pane_vc_t1

0xae70,	// (0x00017d93) list_double_heading_pane_vc_t2_ParamLimits

0xae70,	// (0x00017d93) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x0001c9a0) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x0001c9a0) list_double_heading_pane_vc_t

0xb155,	// (0x00018078) list_double_graphic_pane_vc_g1_ParamLimits

0xb155,	// (0x00018078) list_double_graphic_pane_vc_g1

0xb165,	// (0x00018088) list_double_graphic_pane_vc_g2_ParamLimits

0xb165,	// (0x00018088) list_double_graphic_pane_vc_g2

0xb174,	// (0x00018097) list_double_graphic_pane_vc_g3_ParamLimits

0xb174,	// (0x00018097) list_double_graphic_pane_vc_g3

0x0002,

0xfa82,	// (0x0001c9a5) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x0001c9a5) list_double_graphic_pane_vc_g

0xb180,	// (0x000180a3) list_double_graphic_pane_vc_t1_ParamLimits

0xb180,	// (0x000180a3) list_double_graphic_pane_vc_t1

0xb0b7,	// (0x00017fda) list_double_graphic_pane_vc_t2_ParamLimits

0xb0b7,	// (0x00017fda) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x0001c9ac) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x0001c9ac) list_double_graphic_pane_vc_t

0xb57d,	// (0x000184a0) aid_size_cell_fastswap

0xb585,	// (0x000184a8) aid_size_cell_touch_ParamLimits

0xb585,	// (0x000184a8) aid_size_cell_touch

0xb6ca,	// (0x000185ed) popup_fast_swap_wide_window_ParamLimits

0xb6ca,	// (0x000185ed) popup_fast_swap_wide_window

0xb790,	// (0x000186b3) touch_pane_ParamLimits

0xb790,	// (0x000186b3) touch_pane

0xab3d,	// (0x00017a60) button_value_adjust_pane_cp2

0x8750,	// (0x00015673) button_value_adjust_pane_cp4

0xab5d,	// (0x00017a80) form_field_data_pane_cp2

0xab7c,	// (0x00017a9f) form_field_data_wide_pane_cp2

0x44cf,	// (0x000113f2) bg_scroll_pane_ParamLimits

0xb98b,	// (0x000188ae) scroll_handle_pane_ParamLimits

0xb99f,	// (0x000188c2) scroll_sc2_down_pane_ParamLimits

0xb99f,	// (0x000188c2) scroll_sc2_down_pane

0x4500,	// (0x00011423) scroll_sc2_up_pane_ParamLimits

0x4500,	// (0x00011423) scroll_sc2_up_pane

0xc65c,	// (0x0001957f) grid_wheel_folder_pane_g1_ParamLimits

0xc65c,	// (0x0001957f) grid_wheel_folder_pane_g1

0xbb53,	// (0x00018a76) clock_nsta_pane_cp2_ParamLimits

0xbb53,	// (0x00018a76) clock_nsta_pane_cp2

0x4c94,	// (0x00011bb7) listscroll_midp_pane_ParamLimits

0x4ca0,	// (0x00011bc3) midp_canvas_pane

0xbd9b,	// (0x00018cbe) nsta_clock_indic_pane

0x4fd0,	// (0x00011ef3) listscroll_form_pane_vc

0x4fed,	// (0x00011f10) listscroll_set_pane_vc_ParamLimits

0x4fed,	// (0x00011f10) listscroll_set_pane_vc

0x556d,	// (0x00012490) clock_nsta_pane

0x55d7,	// (0x000124fa) indicator_nsta_pane

0x589e,	// (0x000127c1) bg_popup_sub_pane_cp2_ParamLimits

0x58b2,	// (0x000127d5) find_pane_cp2_ParamLimits

0x58b2,	// (0x000127d5) find_pane_cp2

0x58c4,	// (0x000127e7) grid_toobar_pane_ParamLimits

0x5a4a,	// (0x0001296d) list_form_gen_pane_vc_ParamLimits

0x5a4a,	// (0x0001296d) list_form_gen_pane_vc

0x5a60,	// (0x00012983) scroll_pane_cp8_vc_ParamLimits

0x5a60,	// (0x00012983) scroll_pane_cp8_vc

0x5adc,	// (0x000129ff) data_form_wide_pane_vc_ParamLimits

0x5adc,	// (0x000129ff) data_form_wide_pane_vc

0x5ae8,	// (0x00012a0b) form_field_data_wide_pane_vc_g1

0x5af0,	// (0x00012a13) form_field_data_wide_pane_vc_t1_ParamLimits

0x5af0,	// (0x00012a13) form_field_data_wide_pane_vc_t1

0x3eff,	// (0x00010e22) input_focus_pane_cp6_vc_ParamLimits

0x3eff,	// (0x00010e22) input_focus_pane_cp6_vc

0x5dc5,	// (0x00012ce8) list_midp_pane_ParamLimits

0x5dd1,	// (0x00012cf4) scroll_pane_cp16_ParamLimits

0x5dd1,	// (0x00012cf4) scroll_pane_cp16

0x5e1f,	// (0x00012d42) button_value_adjust_pane_ParamLimits

0x5e1f,	// (0x00012d42) button_value_adjust_pane

0xc19a,	// (0x000190bd) button_value_adjust_pane_cp6_ParamLimits

0xc19a,	// (0x000190bd) button_value_adjust_pane_cp6

0xc2a2,	// (0x000191c5) settings_code_pane_cp_ParamLimits

0xc2a2,	// (0x000191c5) settings_code_pane_cp

0x3022,	// (0x0000ff45) cell_touch_pane_g1

0x3022,	// (0x0000ff45) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0001c63d) cell_touch_pane_g

0xc4e8,	// (0x0001940b) cell_touch_pane_cp_ParamLimits

0xc4e8,	// (0x0001940b) cell_touch_pane_cp

0xc4f8,	// (0x0001941b) cell_touch_pane_ParamLimits

0xc4f8,	// (0x0001941b) cell_touch_pane

0x3022,	// (0x0000ff45) scroll_sc2_down_pane_g1

0x3022,	// (0x0000ff45) scroll_sc2_up_pane_g1

0x3109,	// (0x0001002c) bg_set_opt_pane_cp4_vc

0x81c9,	// (0x000150ec) list_set_graphic_pane_vc_g1_ParamLimits

0x81c9,	// (0x000150ec) list_set_graphic_pane_vc_g1

0x81d5,	// (0x000150f8) list_set_graphic_pane_vc_g2_ParamLimits

0x81d5,	// (0x000150f8) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0001c922) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0001c922) list_set_graphic_pane_vc_g

0x81e1,	// (0x00015104) text_primary_small_cp13_vc_ParamLimits

0x81e1,	// (0x00015104) text_primary_small_cp13_vc

0x7815,	// (0x00014738) list_set_graphic_pane_vc_ParamLimits

0x7815,	// (0x00014738) list_set_graphic_pane_vc

0x3109,	// (0x0001002c) input_focus_pane_cp2_vc

0x3022,	// (0x0000ff45) setting_code_pane_vc_g1

0x81f9,	// (0x0001511c) setting_code_pane_vc_t1

0x8207,	// (0x0001512a) set_text_pane_vc_t1_ParamLimits

0x8207,	// (0x0001512a) set_text_pane_vc_t1

0x3109,	// (0x0001002c) input_focus_pane_cp1_vc

0x8222,	// (0x00015145) list_set_text_pane_vc

0x3022,	// (0x0000ff45) setting_text_pane_vc_g1

0x3109,	// (0x0001002c) bg_set_opt_pane_cp2_vc

0x822c,	// (0x0001514f) setting_slider_graphic_pane_vc_g1

0x8234,	// (0x00015157) setting_slider_graphic_pane_vc_t1

0x8242,	// (0x00015165) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0001c927) setting_slider_graphic_pane_vc_t

0x8250,	// (0x00015173) slider_set_pane_cp_vc

0x8258,	// (0x0001517b) slider_set_pane_vc_g1

0x8261,	// (0x00015184) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0001c92c) slider_set_pane_vc_g

0x4025,	// (0x00010f48) set_opt_bg_pane_g1_copy1

0x402d,	// (0x00010f50) set_opt_bg_pane_g2_copy1

0x828d,	// (0x000151b0) set_opt_bg_pane_g3_copy1

0x403d,	// (0x00010f60) set_opt_bg_pane_g4_copy1

0x4045,	// (0x00010f68) set_opt_bg_pane_g5_copy1

0x404d,	// (0x00010f70) set_opt_bg_pane_g6_copy1

0x8295,	// (0x000151b8) set_opt_bg_pane_g7_copy1

0x829d,	// (0x000151c0) set_opt_bg_pane_g8_copy1

0x82a5,	// (0x000151c8) set_opt_bg_pane_g9_copy1

0x3109,	// (0x0001002c) bg_set_opt_pane_cp_vc

0x82ad,	// (0x000151d0) setting_slider_pane_vc_t1

0x8234,	// (0x00015157) setting_slider_pane_vc_t2

0x8242,	// (0x00015165) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0001c93b) setting_slider_pane_vc_t

0x8250,	// (0x00015173) slider_set_pane_vc

0xbeb2,	// (0x00018dd5) volume_set_pane_vc_g1

0xc50a,	// (0x0001942d) volume_set_pane_vc_g2

0xc513,	// (0x00019436) volume_set_pane_vc_g3

0xc51c,	// (0x0001943f) volume_set_pane_vc_g4

0xc525,	// (0x00019448) volume_set_pane_vc_g5

0xc52e,	// (0x00019451) volume_set_pane_vc_g6

0xc537,	// (0x0001945a) volume_set_pane_vc_g7

0xc540,	// (0x00019463) volume_set_pane_vc_g8

0xc549,	// (0x0001946c) volume_set_pane_vc_g9

0xc552,	// (0x00019475) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0001c942) volume_set_pane_vc_g

0x8351,	// (0x00015274) volume_set_pane_vc

0x8359,	// (0x0001527c) button_value_adjust_pane_cp1_vc

0x8363,	// (0x00015286) list_highlight_pane_cp2_vc

0x836c,	// (0x0001528f) list_set_pane_vc_ParamLimits

0x836c,	// (0x0001528f) list_set_pane_vc

0x83be,	// (0x000152e1) main_pane_set_vc_t1_ParamLimits

0x83be,	// (0x000152e1) main_pane_set_vc_t1

0x83d3,	// (0x000152f6) main_pane_set_vc_t2_ParamLimits

0x83d3,	// (0x000152f6) main_pane_set_vc_t2

0x83e5,	// (0x00015308) main_pane_set_vc_t3_ParamLimits

0x83e5,	// (0x00015308) main_pane_set_vc_t3

0x83f7,	// (0x0001531a) main_pane_set_vc_t4_ParamLimits

0x83f7,	// (0x0001531a) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0001c957) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0001c957) main_pane_set_vc_t

0x8409,	// (0x0001532c) setting_code_pane_vc_ParamLimits

0x8409,	// (0x0001532c) setting_code_pane_vc

0x8418,	// (0x0001533b) setting_slider_graphic_pane_vc

0x8418,	// (0x0001533b) setting_slider_pane_vc

0x8418,	// (0x0001533b) setting_text_pane_vc

0x8418,	// (0x0001533b) setting_volume_pane_vc

0x8420,	// (0x00015343) scroll_pane_cp121_vc

0x3e26,	// (0x00010d49) set_content_pane_vc

0x85d3,	// (0x000154f6) button_value_adjust_pane_g1

0x85dc,	// (0x000154ff) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x0001c9b1) button_value_adjust_pane_g

0x85e5,	// (0x00015508) form_field_slider_wide_pane_vc_t1_ParamLimits

0x85e5,	// (0x00015508) form_field_slider_wide_pane_vc_t1

0x85fb,	// (0x0001551e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x85fb,	// (0x0001551e) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa93,	// (0x0001c9b6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x0001c9b6) form_field_slider_wide_pane_vc_t

0x3482,	// (0x000103a5) input_focus_pane_cp10_vc_ParamLimits

0x3482,	// (0x000103a5) input_focus_pane_cp10_vc

0x8610,	// (0x00015533) slider_cont_pane_cp1_vc_ParamLimits

0x8610,	// (0x00015533) slider_cont_pane_cp1_vc

0x8258,	// (0x0001517b) slider_form_pane_g1_cp2

0x8261,	// (0x00015184) slider_form_pane_g2_cp2

0x862b,	// (0x0001554e) form_field_slider_pane_vc_t3

0x8639,	// (0x0001555c) form_field_slider_pane_vc_t4

0x8647,	// (0x0001556a) slider_form_pane_vc_ParamLimits

0x8647,	// (0x0001556a) slider_form_pane_vc

0x8654,	// (0x00015577) form_field_slider_pane_vc_t1_ParamLimits

0x8654,	// (0x00015577) form_field_slider_pane_vc_t1

0x866a,	// (0x0001558d) form_field_slider_pane_vc_t2_ParamLimits

0x866a,	// (0x0001558d) form_field_slider_pane_vc_t2

0x0001,

0xfaa3,	// (0x0001c9c6) form_field_slider_pane_vc_t_ParamLimits

0xfaa3,	// (0x0001c9c6) form_field_slider_pane_vc_t

0x3482,	// (0x000103a5) input_focus_pane_cp9_vc_ParamLimits

0x3482,	// (0x000103a5) input_focus_pane_cp9_vc

0x867c,	// (0x0001559f) slider_cont_pane_vc_ParamLimits

0x867c,	// (0x0001559f) slider_cont_pane_vc

0x868e,	// (0x000155b1) list_form_graphic_pane_cp_vc_ParamLimits

0x868e,	// (0x000155b1) list_form_graphic_pane_cp_vc

0x5ae8,	// (0x00012a0b) form_field_popup_wide_pane_vc_g1

0x86a3,	// (0x000155c6) form_field_popup_wide_pane_vc_t1_ParamLimits

0x86a3,	// (0x000155c6) form_field_popup_wide_pane_vc_t1

0x3eff,	// (0x00010e22) input_focus_pane_cp8_vc_ParamLimits

0x3eff,	// (0x00010e22) input_focus_pane_cp8_vc

0x86b8,	// (0x000155db) list_form_wide_pane_vc_ParamLimits

0x86b8,	// (0x000155db) list_form_wide_pane_vc

0x86c4,	// (0x000155e7) list_form_graphic_pane_vc_g1

0x86cc,	// (0x000155ef) list_form_graphic_pane_vc_t1_ParamLimits

0x86cc,	// (0x000155ef) list_form_graphic_pane_vc_t1

0x31e9,	// (0x0001010c) list_highlight_pane_cp5_vc_ParamLimits

0x31e9,	// (0x0001010c) list_highlight_pane_cp5_vc

0x86e8,	// (0x0001560b) list_form_graphic_pane_vc_ParamLimits

0x86e8,	// (0x0001560b) list_form_graphic_pane_vc

0x5ae8,	// (0x00012a0b) form_field_popup_pane_vc_g1

0x86fe,	// (0x00015621) form_field_popup_pane_vc_t1_ParamLimits

0x86fe,	// (0x00015621) form_field_popup_pane_vc_t1

0x3eff,	// (0x00010e22) input_focus_pane_cp7_vc_ParamLimits

0x3eff,	// (0x00010e22) input_focus_pane_cp7_vc

0x8713,	// (0x00015636) list_form_pane_vc_ParamLimits

0x8713,	// (0x00015636) list_form_pane_vc

0x871f,	// (0x00015642) data_form_pane_vc_t1_ParamLimits

0x871f,	// (0x00015642) data_form_pane_vc_t1

0x4025,	// (0x00010f48) input_focus_pane_vc_g1

0x402d,	// (0x00010f50) input_focus_pane_vc_g2

0x4035,	// (0x00010f58) input_focus_pane_vc_g3

0x403d,	// (0x00010f60) input_focus_pane_vc_g4

0x4045,	// (0x00010f68) input_focus_pane_vc_g5

0x404d,	// (0x00010f70) input_focus_pane_vc_g6

0x4055,	// (0x00010f78) input_focus_pane_vc_g7

0x405d,	// (0x00010f80) input_focus_pane_vc_g8

0x4065,	// (0x00010f88) input_focus_pane_vc_g9

0x3022,	// (0x0000ff45) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0001c5c6) input_focus_pane_vc_g

0x5adc,	// (0x000129ff) data_form_pane_vc_ParamLimits

0x5adc,	// (0x000129ff) data_form_pane_vc

0x5ae8,	// (0x00012a0b) form_field_data_pane_vc_g1

0x873a,	// (0x0001565d) form_field_data_pane_vc_t1_ParamLimits

0x873a,	// (0x0001565d) form_field_data_pane_vc_t1

0x3eff,	// (0x00010e22) input_focus_pane_vc_ParamLimits

0x3eff,	// (0x00010e22) input_focus_pane_vc

0x3e2f,	// (0x00010d52) button_value_adjust_pane_cp3_vc

0x8750,	// (0x00015673) button_value_adjust_pane_cp5_vc

0x833a,	// (0x0001525d) form_field_data_pane_vc_ParamLimits

0x833a,	// (0x0001525d) form_field_data_pane_vc

0x3e57,	// (0x00010d7a) form_field_data_pane_vc_cp2

0x8758,	// (0x0001567b) form_field_data_wide_pane_vc_ParamLimits

0x8758,	// (0x0001567b) form_field_data_wide_pane_vc

0x876e,	// (0x00015691) form_field_data_wide_pane_vc_cp2

0x8776,	// (0x00015699) form_field_popup_pane_vc_ParamLimits

0x8776,	// (0x00015699) form_field_popup_pane_vc

0x878d,	// (0x000156b0) form_field_popup_wide_pane_vc_ParamLimits

0x878d,	// (0x000156b0) form_field_popup_wide_pane_vc

0x87a3,	// (0x000156c6) form_field_slider_pane_vc_ParamLimits

0x87a3,	// (0x000156c6) form_field_slider_pane_vc

0x87b6,	// (0x000156d9) form_field_slider_wide_pane_vc_ParamLimits

0x87b6,	// (0x000156d9) form_field_slider_wide_pane_vc

0xc55b,	// (0x0001947e) grid_touch_1_pane_ParamLimits

0xc55b,	// (0x0001947e) grid_touch_1_pane

0xc567,	// (0x0001948a) grid_touch_2_pane_ParamLimits

0xc567,	// (0x0001948a) grid_touch_2_pane

0x4f45,	// (0x00011e68) touch_pane_g1_ParamLimits

0x4f45,	// (0x00011e68) touch_pane_g1

0x87d7,	// (0x000156fa) cell_app_pane_cp_wide_ParamLimits

0x87d7,	// (0x000156fa) cell_app_pane_cp_wide

0x87e7,	// (0x0001570a) grid_popup_fast_wide_pane_ParamLimits

0x87e7,	// (0x0001570a) grid_popup_fast_wide_pane

0x87fb,	// (0x0001571e) scroll_pane_cp19_ParamLimits

0x87fb,	// (0x0001571e) scroll_pane_cp19

0x3109,	// (0x0001002c) bg_popup_window_pane_cp20

0x880f,	// (0x00015732) listscroll_popup_fast_wide_pane

0x31e9,	// (0x0001010c) grid_indicator_nsta_pane

0x8817,	// (0x0001573a) clock_nsta_pane_g1

0x8820,	// (0x00015743) clock_nsta_pane_t1

0xc57f,	// (0x000194a2) cell_indicator_nsta_pane_ParamLimits

0xc57f,	// (0x000194a2) cell_indicator_nsta_pane

0x87c9,	// (0x000156ec) cell_indicator_nsta_pane_g1

0xc5b7,	// (0x000194da) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x0001c9d0) cell_indicator_nsta_pane_g

0x883c,	// (0x0001575f) clock_nsta_pane_cp

0x8844,	// (0x00015767) indicator_nsta_pane_cp

0x884d,	// (0x00015770) nsta_clock_indic_pane_g1

0x32c9,	// (0x000101ec) grid_indicator_pane

0x45f2,	// (0x00011515) scroll_pane_cp29

0xbaaa,	// (0x000189cd) indicator_nsta_pane_cp2_ParamLimits

0xbaaa,	// (0x000189cd) indicator_nsta_pane_cp2

0x31e9,	// (0x0001010c) main_apps_wheel_pane

0x5cac,	// (0x00012bcf) form_midp_field_text_pane_ParamLimits

0x5df1,	// (0x00012d14) scroll_bar_cp050_ParamLimits

0x88b6,	// (0x000157d9) cell_indicator_pane_ParamLimits

0x88b6,	// (0x000157d9) cell_indicator_pane

0x88cc,	// (0x000157ef) cell_indicator_pane_g1

0xc5cc,	// (0x000194ef) grid_wheel_folder_pane_ParamLimits

0xc5cc,	// (0x000194ef) grid_wheel_folder_pane

0xc5de,	// (0x00019501) list_wheel_apps_pane_ParamLimits

0xc5de,	// (0x00019501) list_wheel_apps_pane

0xc5ed,	// (0x00019510) main_apps_wheel_pane_g1_ParamLimits

0xc5ed,	// (0x00019510) main_apps_wheel_pane_g1

0xc601,	// (0x00019524) main_apps_wheel_pane_g2_ParamLimits

0xc601,	// (0x00019524) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x0001c9ec) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x0001c9ec) main_apps_wheel_pane_g

0xc615,	// (0x00019538) main_apps_wheel_pane_t1_ParamLimits

0xc615,	// (0x00019538) main_apps_wheel_pane_t1

0xc634,	// (0x00019557) list_wheel_apps_pane_g1

0xc63c,	// (0x0001955f) list_wheel_apps_pane_g2

0xc644,	// (0x00019567) list_wheel_apps_pane_g3

0xc64c,	// (0x0001956f) list_wheel_apps_pane_g4

0xc654,	// (0x00019577) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x0001c9f1) list_wheel_apps_pane_g

0x31e9,	// (0x0001010c) navi_icon_text_pane

0x54b5,	// (0x000123d8) aid_fill_nsta

0x88d6,	// (0x000157f9) navi_icon_text_pane_g1

0x88e2,	// (0x00015805) navi_icon_text_pane_t1

0x4a07,	// (0x0001192a) list_set_graphic_pane_t1_ParamLimits

0x4a07,	// (0x0001192a) list_set_graphic_pane_t1

0x64ff,	// (0x00013422) popup_midp_note_alarm_window_t6_ParamLimits

0x64ff,	// (0x00013422) popup_midp_note_alarm_window_t6

0x6511,	// (0x00013434) popup_midp_note_alarm_window_t7_ParamLimits

0x6511,	// (0x00013434) popup_midp_note_alarm_window_t7

0x6523,	// (0x00013446) popup_midp_note_alarm_window_t8_ParamLimits

0x6523,	// (0x00013446) popup_midp_note_alarm_window_t8

0x6535,	// (0x00013458) popup_midp_note_alarm_window_t9_ParamLimits

0x6535,	// (0x00013458) popup_midp_note_alarm_window_t9

0x6547,	// (0x0001346a) popup_midp_note_alarm_window_t10_ParamLimits

0x6547,	// (0x0001346a) popup_midp_note_alarm_window_t10

0x6559,	// (0x0001347c) popup_midp_note_alarm_window_t11_ParamLimits

0x6559,	// (0x0001347c) popup_midp_note_alarm_window_t11

0x656b,	// (0x0001348e) scroll_pane_cp17_ParamLimits

0x656b,	// (0x0001348e) scroll_pane_cp17

0xbeb2,	// (0x00018dd5) volume_small_pane_cp_g1

0xc673,	// (0x00019596) volume_small_pane_cp_g2

0xc67c,	// (0x0001959f) volume_small_pane_cp_g3

0xc685,	// (0x000195a8) volume_small_pane_cp_g4

0xbedf,	// (0x00018e02) volume_small_pane_cp_g5

0xc68e,	// (0x000195b1) volume_small_pane_cp_g6

0xc697,	// (0x000195ba) volume_small_pane_cp_g7

0xc6a0,	// (0x000195c3) volume_small_pane_cp_g8

0xc6a9,	// (0x000195cc) volume_small_pane_cp_g9

0xc6b2,	// (0x000195d5) volume_small_pane_cp_g10

0x4d5b,	// (0x00011c7e) midp_ticker_pane_g1_ParamLimits

0x4d67,	// (0x00011c8a) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001c68e) midp_ticker_pane_g_ParamLimits

0x4d73,	// (0x00011c96) midp_ticker_pane_t1_ParamLimits

0x54c5,	// (0x000123e8) aid_fill_nsta_2

0x5ddd,	// (0x00012d00) list_form2_midp_pane

0x7e23,	// (0x00014d46) midp_editing_number_pane_ParamLimits

0x7e2f,	// (0x00014d52) midp_ticker_pane_ParamLimits

0x88f4,	// (0x00015817) form2_midp_field_pane

0x88fc,	// (0x0001581f) scroll_pane_cp51

0x891c,	// (0x0001583f) form2_midp_button_pane_ParamLimits

0x891c,	// (0x0001583f) form2_midp_button_pane

0x892e,	// (0x00015851) form2_midp_content_pane_ParamLimits

0x892e,	// (0x00015851) form2_midp_content_pane

0x8948,	// (0x0001586b) form2_midp_field_choice_group_pane

0x8950,	// (0x00015873) form2_midp_field_pane_g1

0x8958,	// (0x0001587b) form2_midp_field_pane_g2

0x8960,	// (0x00015883) form2_midp_field_pane_g3

0x8968,	// (0x0001588b) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x0001ca16) form2_midp_field_pane_g

0x8970,	// (0x00015893) form2_midp_gauge_slider_pane

0x8978,	// (0x0001589b) form2_midp_gauge_wait_pane

0x8980,	// (0x000158a3) form2_midp_image_pane_ParamLimits

0x8980,	// (0x000158a3) form2_midp_image_pane

0x899b,	// (0x000158be) form2_midp_label_pane_ParamLimits

0x899b,	// (0x000158be) form2_midp_label_pane

0xc6d7,	// (0x000195fa) form2_midp_label_pane_cp_ParamLimits

0xc6d7,	// (0x000195fa) form2_midp_label_pane_cp

0x89b4,	// (0x000158d7) form2_midp_string_pane_ParamLimits

0x89b4,	// (0x000158d7) form2_midp_string_pane

0xb192,	// (0x000180b5) form2_midp_text_pane_ParamLimits

0xb192,	// (0x000180b5) form2_midp_text_pane

0x89c6,	// (0x000158e9) form2_midp_time_pane

0x89d6,	// (0x000158f9) input_focus_pane_cp51_ParamLimits

0x89d6,	// (0x000158f9) input_focus_pane_cp51

0x89ee,	// (0x00015911) form2_midp_label_pane_t1_ParamLimits

0x89ee,	// (0x00015911) form2_midp_label_pane_t1

0xb1ab,	// (0x000180ce) form2_mdip_text_pane_t1_ParamLimits

0xb1ab,	// (0x000180ce) form2_mdip_text_pane_t1

0xb1c8,	// (0x000180eb) form2_midp_time_pane_t1

0x8a49,	// (0x0001596c) form2_midp_gauge_slider_pane_t1

0xc6f6,	// (0x00019619) form2_midp_gauge_slider_pane_t2

0xc708,	// (0x0001962b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x0001ca1f) form2_midp_gauge_slider_pane_t

0x8a5b,	// (0x0001597e) form2_midp_slider_pane

0x8a67,	// (0x0001598a) form2_midp_gauge_wait_pane_t1

0x8a75,	// (0x00015998) form2_midp_wait_pane_ParamLimits

0x8a75,	// (0x00015998) form2_midp_wait_pane

0x46fc,	// (0x0001161f) list_single_2graphic_pane_cp4_ParamLimits

0x46fc,	// (0x0001161f) list_single_2graphic_pane_cp4

0x5b16,	// (0x00012a39) list_single_midp_graphic_pane_cp_ParamLimits

0x5b16,	// (0x00012a39) list_single_midp_graphic_pane_cp

0x3109,	// (0x0001002c) list_highlight_pane_cp20

0x8aa0,	// (0x000159c3) list_single_2graphic_pane_g1_cp4

0x7eaf,	// (0x00014dd2) list_single_2graphic_pane_g2_cp4

0x8aa8,	// (0x000159cb) list_single_2graphic_pane_t1_cp4

0x31e9,	// (0x0001010c) list_highlight_pane_cp21

0x8ab7,	// (0x000159da) list_single_midp_graphic_pane_g4_cp

0x8ac6,	// (0x000159e9) list_single_midp_graphic_pane_t1_cp

0xc71a,	// (0x0001963d) form2_mdip_string_pane_t1_ParamLimits

0xc71a,	// (0x0001963d) form2_mdip_string_pane_t1

0x3109,	// (0x0001002c) bg_wml_button_pane_cp2

0x3022,	// (0x0000ff45) form2_midp_image_pane_g1

0xa914,	// (0x00017837) list_double_large_graphic_pane_g5_ParamLimits

0xa914,	// (0x00017837) list_double_large_graphic_pane_g5

0x4c94,	// (0x00011bb7) midp_form_pane_ParamLimits

0x31e9,	// (0x0001010c) main_apps_wheel_pane_ParamLimits

0x52e5,	// (0x00012208) popup_preview_window_ParamLimits

0x52e5,	// (0x00012208) popup_preview_window

0x5460,	// (0x00012383) popup_touch_info_window_ParamLimits

0x5460,	// (0x00012383) popup_touch_info_window

0x547e,	// (0x000123a1) popup_touch_menu_window_ParamLimits

0x547e,	// (0x000123a1) popup_touch_menu_window

0x3018,	// (0x0000ff3b) bg_popup_sub_pane_cp6

0x8adb,	// (0x000159fe) list_touch_menu_pane

0x8ae3,	// (0x00015a06) list_single_touch_menu_pane_ParamLimits

0x8ae3,	// (0x00015a06) list_single_touch_menu_pane

0x8afa,	// (0x00015a1d) list_single_touch_menu_pane_t1

0x31e9,	// (0x0001010c) bg_popup_sub_pane_cp7_ParamLimits

0x31e9,	// (0x0001010c) bg_popup_sub_pane_cp7

0x8b08,	// (0x00015a2b) heading_sub_pane

0x8b10,	// (0x00015a33) list_touch_info_pane_ParamLimits

0x8b10,	// (0x00015a33) list_touch_info_pane

0x8b1f,	// (0x00015a42) list_single_touch_info_pane_ParamLimits

0x8b1f,	// (0x00015a42) list_single_touch_info_pane

0x8b30,	// (0x00015a53) list_single_touch_info_pane_t1

0x8b3e,	// (0x00015a61) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x0001ca2d) list_single_touch_info_pane_t

0x4c8c,	// (0x00011baf) bg_popup_heading_pane_cp

0x8b4c,	// (0x00015a6f) heading_sub_pane_t1

0x5a76,	// (0x00012999) bg_popup_preview_window_pane_cp_ParamLimits

0x5a76,	// (0x00012999) bg_popup_preview_window_pane_cp

0x8b08,	// (0x00015a2b) heading_preview_pane

0x8b10,	// (0x00015a33) list_preview_pane_ParamLimits

0x8b10,	// (0x00015a33) list_preview_pane

0x8b5a,	// (0x00015a7d) popup_preview_window_g1

0x8b1f,	// (0x00015a42) list_single_preview_pane_ParamLimits

0x8b1f,	// (0x00015a42) list_single_preview_pane

0x8b62,	// (0x00015a85) list_single_preview_pane_g1

0x8b6a,	// (0x00015a8d) list_single_preview_pane_t1

0x8b30,	// (0x00015a53) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x0001ca32) list_single_preview_pane_t

0x8b78,	// (0x00015a9b) bg_popup_heading_pane_cp2_ParamLimits

0x8b78,	// (0x00015a9b) bg_popup_heading_pane_cp2

0x8b8e,	// (0x00015ab1) heading_preview_pane_g1

0x8b96,	// (0x00015ab9) heading_preview_pane_t1_ParamLimits

0x8b96,	// (0x00015ab9) heading_preview_pane_t1

0x32ec,	// (0x0001020f) soft_indicator_pane_t1_ParamLimits

0x3955,	// (0x00010878) scroll_pane_ParamLimits

0x44f7,	// (0x0001141a) scroll_sc2_left_pane

0x44ee,	// (0x00011411) scroll_sc2_right_pane

0x4516,	// (0x00011439) scroll_bg_pane_g1_ParamLimits

0x452b,	// (0x0001144e) scroll_bg_pane_g2_ParamLimits

0x4543,	// (0x00011466) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0001c61d) scroll_bg_pane_g_ParamLimits

0x4516,	// (0x00011439) scroll_handle_pane_g1_ParamLimits

0x4565,	// (0x00011488) scroll_handle_pane_g2_ParamLimits

0x4543,	// (0x00011466) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0001c624) scroll_handle_pane_g_ParamLimits

0x502d,	// (0x00011f50) popup_choice_list_window_ParamLimits

0x502d,	// (0x00011f50) popup_choice_list_window

0x58aa,	// (0x000127cd) choice_list_pane

0x5920,	// (0x00012843) cell_toolbar_pane_t1

0x5948,	// (0x0001286b) toolbar_button_pane_ParamLimits

0x7b84,	// (0x00014aa7) ai_gene_pane_1_t2_ParamLimits

0x7b84,	// (0x00014aa7) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x0001c83a) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x0001c83a) ai_gene_pane_1_t

0x8bb3,	// (0x00015ad6) scroll_sc2_left_pane_g1

0x8bb3,	// (0x00015ad6) scroll_sc2_right_pane_g1

0x4fff,	// (0x00011f22) bg_popup_sub_pane_cp10

0x8bbd,	// (0x00015ae0) list_choice_list_pane

0x8be2,	// (0x00015b05) list_single_choice_list_pane_ParamLimits

0x8be2,	// (0x00015b05) list_single_choice_list_pane

0x8bf6,	// (0x00015b19) list_single_choice_list_pane_g1

0x41ea,	// (0x0001110d) list_single_choice_list_pane_t1_ParamLimits

0x41ea,	// (0x0001110d) list_single_choice_list_pane_t1

0x8bfe,	// (0x00015b21) choice_list_pane_g1

0x8c06,	// (0x00015b29) choice_list_pane_t1

0x3018,	// (0x0000ff3b) input_focus_pane_cp11

0x43ce,	// (0x000112f1) title_pane_stacon_g2_ParamLimits

0x43ce,	// (0x000112f1) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0001c603) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0001c603) title_pane_stacon_g

0x4c8c,	// (0x00011baf) cursor_press_pane

0x50c9,	// (0x00011fec) popup_fep_hwr_window_ParamLimits

0x50c9,	// (0x00011fec) popup_fep_hwr_window

0x5125,	// (0x00012048) popup_fep_vkb_window_ParamLimits

0x5125,	// (0x00012048) popup_fep_vkb_window

0x8c14,	// (0x00015b37) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x0001ca5b) fep_vkb_side_pane_g_ParamLimits

0xc7b9,	// (0x000196dc) fep_hwr_candidate_pane_ParamLimits

0xc7b9,	// (0x000196dc) fep_hwr_candidate_pane

0xc7e1,	// (0x00019704) fep_hwr_side_pane_ParamLimits

0xc7e1,	// (0x00019704) fep_hwr_side_pane

0xc801,	// (0x00019724) fep_hwr_top_pane_ParamLimits

0xc801,	// (0x00019724) fep_hwr_top_pane

0xc819,	// (0x0001973c) fep_hwr_write_pane_ParamLimits

0xc819,	// (0x0001973c) fep_hwr_write_pane

0xfb38,	// (0x0001ca5b) fep_vkb_side_pane_g

0x8c2e,	// (0x00015b51) fep_hwr_top_pane_g1

0x8c1c,	// (0x00015b3f) fep_hwr_top_pane_g2

0xc845,	// (0x00019768) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x0001ca37) fep_hwr_top_pane_g

0xc85a,	// (0x0001977d) fep_hwr_top_text_pane

0x46ba,	// (0x000115dd) fep_hwr_top_text_pane_g1

0x8c64,	// (0x00015b87) fep_hwr_top_text_pane_t1

0xc948,	// (0x0001986b) fep_hwr_candidate_pane_g1

0x8e2d,	// (0x00015d50) fep_vkb_keypad_pane_g3_ParamLimits

0x8e2d,	// (0x00015d50) fep_vkb_keypad_pane_g3

0x8e4f,	// (0x00015d72) fep_vkb_keypad_pane_g4_ParamLimits

0x8e4f,	// (0x00015d72) fep_vkb_keypad_pane_g4

0x8ebe,	// (0x00015de1) fep_vkb_bottom_pane_g2_ParamLimits

0x8ebe,	// (0x00015de1) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x0001ca62) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x0001ca62) fep_vkb_bottom_pane_g

0x8bb3,	// (0x00015ad6) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x0001ca6c) cell_vkb_side_pane_g

0x8f02,	// (0x00015e25) cell_vkb_side_pane_t1

0x8f10,	// (0x00015e33) cell_vkb_side_pane_t1_copy1

0x8bb3,	// (0x00015ad6) bg_fep_vkb_candidate_pane_g2

0x8fde,	// (0x00015f01) cell_vkb_candidate_pane_ParamLimits

0x8c72,	// (0x00015b95) aid_size_cell_vkb_ParamLimits

0x8c72,	// (0x00015b95) aid_size_cell_vkb

0x8fde,	// (0x00015f01) cell_vkb_candidate_pane

0xca46,	// (0x00019969) bg_popup_fep_shadow_pane_g1

0x8cdc,	// (0x00015bff) fep_vkb_bottom_pane_ParamLimits

0x8cdc,	// (0x00015bff) fep_vkb_bottom_pane

0x8d19,	// (0x00015c3c) fep_vkb_candidate_pane_ParamLimits

0x8d19,	// (0x00015c3c) fep_vkb_candidate_pane

0x8d35,	// (0x00015c58) fep_vkb_keypad_pane_ParamLimits

0x8d35,	// (0x00015c58) fep_vkb_keypad_pane

0x8d69,	// (0x00015c8c) fep_vkb_side_pane_ParamLimits

0x8d69,	// (0x00015c8c) fep_vkb_side_pane

0x8d95,	// (0x00015cb8) fep_vkb_top_pane_ParamLimits

0x8d95,	// (0x00015cb8) fep_vkb_top_pane

0x8dc1,	// (0x00015ce4) fep_vkb_top_pane_g1_ParamLimits

0x8dc1,	// (0x00015ce4) fep_vkb_top_pane_g1

0x8dd0,	// (0x00015cf3) fep_vkb_top_pane_g2_ParamLimits

0x8dd0,	// (0x00015cf3) fep_vkb_top_pane_g2

0x8ddf,	// (0x00015d02) fep_vkb_top_pane_g3_ParamLimits

0x8ddf,	// (0x00015d02) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x0001ca52) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x0001ca52) fep_vkb_top_pane_g

0x8dfd,	// (0x00015d20) fep_vkb_top_text_pane_ParamLimits

0x8dfd,	// (0x00015d20) fep_vkb_top_text_pane

0xc96e,	// (0x00019891) fep_vkb_side_pane_g1_ParamLimits

0xc96e,	// (0x00019891) fep_vkb_side_pane_g1

0x8e1c,	// (0x00015d3f) grid_vkb_side_pane_ParamLimits

0x8e1c,	// (0x00015d3f) grid_vkb_side_pane

0xca4e,	// (0x00019971) bg_popup_fep_shadow_pane_g2

0xca57,	// (0x0001997a) bg_popup_fep_shadow_pane_g3

0xca5f,	// (0x00019982) bg_popup_fep_shadow_pane_g4

0xca68,	// (0x0001998b) bg_popup_fep_shadow_pane_g5

0xca70,	// (0x00019993) bg_popup_fep_shadow_pane_g6

0xca78,	// (0x0001999b) bg_popup_fep_shadow_pane_g7

0x4045,	// (0x00010f68) bg_popup_fep_shadow_pane_g8

0x8e6d,	// (0x00015d90) grid_vkb_keypad_number_pane_ParamLimits

0x8e6d,	// (0x00015d90) grid_vkb_keypad_number_pane

0x8e7d,	// (0x00015da0) grid_vkb_keypad_pane_ParamLimits

0x8e7d,	// (0x00015da0) grid_vkb_keypad_pane

0x8ea3,	// (0x00015dc6) fep_vkb_bottom_pane_g1_ParamLimits

0x8ea3,	// (0x00015dc6) fep_vkb_bottom_pane_g1

0x8ecc,	// (0x00015def) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x8ecc,	// (0x00015def) grid_vkb_keypad_bottom_left_pane

0x8ee1,	// (0x00015e04) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x8ee1,	// (0x00015e04) grid_vkb_keypad_bottom_right_pane

0x8ef6,	// (0x00015e19) fep_vkb_top_text_pane_g1

0xc9b8,	// (0x000198db) fep_vkb_top_text_pane_t1

0xc9cd,	// (0x000198f0) cell_vkb_side_pane_ParamLimits

0xc9cd,	// (0x000198f0) cell_vkb_side_pane

0x8bb3,	// (0x00015ad6) cell_vkb_side_pane_g1

0x8f1e,	// (0x00015e41) cell_vkb_keypad_pane_ParamLimits

0x8f1e,	// (0x00015e41) cell_vkb_keypad_pane

0x8f8b,	// (0x00015eae) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x0001ca7f) bg_popup_fep_shadow_pane_g

0x8bb3,	// (0x00015ad6) cell_hwr_side_pane_g1

0x8bb3,	// (0x00015ad6) cell_hwr_side_pane_g2

0x8f95,	// (0x00015eb8) cell_vkb_keypad_pane_t1

0xc9f0,	// (0x00019913) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc9f0,	// (0x00019913) cell_vkb_keypad_bottom_left_pane

0xca0d,	// (0x00019930) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xca0d,	// (0x00019930) cell_vkb_keypad_bottom_right_pane

0x8bb3,	// (0x00015ad6) cell_vkb_keypad_bottom_left_pane_g1

0x8bb3,	// (0x00015ad6) cell_vkb_keypad_bottom_right_pane_g1

0x8fa3,	// (0x00015ec6) cell_vkb_keypad_number_pane_ParamLimits

0x8fa3,	// (0x00015ec6) cell_vkb_keypad_number_pane

0x8fc2,	// (0x00015ee5) cell_vkb_keypad_number_pane_g1

0x8fcc,	// (0x00015eef) cell_vkb_keypad_number_pane_g2

0x8fd5,	// (0x00015ef8) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x0001ca71) cell_vkb_keypad_number_pane_g

0x8f95,	// (0x00015eb8) cell_vkb_keypad_number_pane_t1

0x8ff7,	// (0x00015f1a) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x0001ca6c) cell_hwr_side_pane_g

0x9010,	// (0x00015f33) cell_hwr_side_pane_t1

0xca88,	// (0x000199ab) cell_hwr_side_pane_t1_copy1

0x8def,	// (0x00015d12) cell_hwr_candidate_pane_g1

0xca96,	// (0x000199b9) cell_hwr_candidate_pane_t1

0x8bb3,	// (0x00015ad6) cell_vkb_candidate_pane_g2

0x9054,	// (0x00015f77) cell_vkb_candidate_pane_t1

0x8bd4,	// (0x00015af7) bg_popup_fep_shadow_pane_ParamLimits

0x8bd4,	// (0x00015af7) bg_popup_fep_shadow_pane

0x913a,	// (0x0001605d) bg_fep_hwr_top_pane_g4

0x8c40,	// (0x00015b63) bg_hwr_side_pane_g1_ParamLimits

0x8c40,	// (0x00015b63) bg_hwr_side_pane_g1

0xc896,	// (0x000197b9) cell_hwr_side_pane_ParamLimits

0xc896,	// (0x000197b9) cell_hwr_side_pane

0xc8d1,	// (0x000197f4) fep_hwr_write_pane_g1_ParamLimits

0xc8d1,	// (0x000197f4) fep_hwr_write_pane_g1

0xc8de,	// (0x00019801) fep_hwr_write_pane_g2_ParamLimits

0xc8de,	// (0x00019801) fep_hwr_write_pane_g2

0xc8eb,	// (0x0001980e) fep_hwr_write_pane_g3_ParamLimits

0xc8eb,	// (0x0001980e) fep_hwr_write_pane_g3

0xc8f9,	// (0x0001981c) fep_hwr_write_pane_g4_ParamLimits

0xc8f9,	// (0x0001981c) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x0001ca3e) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x0001ca3e) fep_hwr_write_pane_g

0x913a,	// (0x0001605d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x913a,	// (0x0001605d) bg_fep_hwr_candidate_pane_g2

0xc90e,	// (0x00019831) cell_hwr_candidate_pane_ParamLimits

0xc90e,	// (0x00019831) cell_hwr_candidate_pane

0xc948,	// (0x0001986b) fep_hwr_candidate_pane_g1_ParamLimits

0x8ca0,	// (0x00015bc3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x8ca0,	// (0x00015bc3) bg_popup_fep_shadow_pane_cp2

0x8def,	// (0x00015d12) fep_vkb_top_pane_g4_ParamLimits

0x8def,	// (0x00015d12) fep_vkb_top_pane_g4

0x8e0e,	// (0x00015d31) fep_vkb_side_pane_g2_ParamLimits

0x8e0e,	// (0x00015d31) fep_vkb_side_pane_g2

0xaa76,	// (0x00017999) list_setting_pane_t4_ParamLimits

0xaa76,	// (0x00017999) list_setting_pane_t4

0xab04,	// (0x00017a27) list_setting_number_pane_t5_ParamLimits

0xab04,	// (0x00017a27) list_setting_number_pane_t5

0x46ec,	// (0x0001160f) list_double_heading_pane_cp2_ParamLimits

0x46ec,	// (0x0001160f) list_double_heading_pane_cp2

0x4b01,	// (0x00011a24) list_double_heading_pane_g1_cp2_ParamLimits

0x4b01,	// (0x00011a24) list_double_heading_pane_g1_cp2

0x9062,	// (0x00015f85) list_double_heading_pane_g2_cp2_ParamLimits

0x9062,	// (0x00015f85) list_double_heading_pane_g2_cp2

0x9076,	// (0x00015f99) list_double_heading_pane_t1_cp2_ParamLimits

0x9076,	// (0x00015f99) list_double_heading_pane_t1_cp2

0x908c,	// (0x00015faf) list_double_heading_pane_t2_cp2_ParamLimits

0x908c,	// (0x00015faf) list_double_heading_pane_t2_cp2

0x3002,	// (0x0000ff25) aid_value_unit2

0xb706,	// (0x00018629) popup_preview_fixed_window

0x3490,	// (0x000103b3) bg_popup_preview_window_pane_cp02

0x909e,	// (0x00015fc1) list_preview_fixed_pane

0x90e4,	// (0x00016007) list_empty_pane_fp_ParamLimits

0x90e4,	// (0x00016007) list_empty_pane_fp

0x90e4,	// (0x00016007) list_single_cale_day_pane_fp_ParamLimits

0x90e4,	// (0x00016007) list_single_cale_day_pane_fp

0x90e4,	// (0x00016007) list_single_graphic_heading_pane_fp_ParamLimits

0x90e4,	// (0x00016007) list_single_graphic_heading_pane_fp

0x90e4,	// (0x00016007) list_single_graphic_pane_fp_ParamLimits

0x90e4,	// (0x00016007) list_single_graphic_pane_fp

0x90e4,	// (0x00016007) list_single_heading_pane_fp_ParamLimits

0x90e4,	// (0x00016007) list_single_heading_pane_fp

0x90e4,	// (0x00016007) list_single_pane_fp_ParamLimits

0x90e4,	// (0x00016007) list_single_pane_fp

0x9162,	// (0x00016085) list_single_pane_fp_g1_ParamLimits

0x9162,	// (0x00016085) list_single_pane_fp_g1

0xaa35,	// (0x00017958) list_single_pane_fp_g2_ParamLimits

0xaa35,	// (0x00017958) list_single_pane_fp_g2

0xb1db,	// (0x000180fe) list_single_pane_fp_g3_ParamLimits

0xb1db,	// (0x000180fe) list_single_pane_fp_g3

0x9182,	// (0x000160a5) list_single_pane_fp_g4_ParamLimits

0x9182,	// (0x000160a5) list_single_pane_fp_g4

0x0003,

0xfb7d,	// (0x0001caa0) list_single_pane_fp_g_ParamLimits

0xfb7d,	// (0x0001caa0) list_single_pane_fp_g

0xb1ef,	// (0x00018112) list_single_pane_fp_t1_ParamLimits

0xb1ef,	// (0x00018112) list_single_pane_fp_t1

0xb206,	// (0x00018129) list_single_graphic_pane_fp_g1_ParamLimits

0xb206,	// (0x00018129) list_single_graphic_pane_fp_g1

0x9162,	// (0x00016085) list_single_graphic_pane_fp_g2_ParamLimits

0x9162,	// (0x00016085) list_single_graphic_pane_fp_g2

0xaa35,	// (0x00017958) list_single_graphic_pane_fp_g3_ParamLimits

0xaa35,	// (0x00017958) list_single_graphic_pane_fp_g3

0xb1db,	// (0x000180fe) list_single_graphic_pane_fp_g4_ParamLimits

0xb1db,	// (0x000180fe) list_single_graphic_pane_fp_g4

0x9182,	// (0x000160a5) list_single_graphic_pane_fp_g5_ParamLimits

0x9182,	// (0x000160a5) list_single_graphic_pane_fp_g5

0x0004,

0xfb86,	// (0x0001caa9) list_single_graphic_pane_fp_g_ParamLimits

0xfb86,	// (0x0001caa9) list_single_graphic_pane_fp_g

0xb212,	// (0x00018135) list_single_graphic_pane_fp_t1_ParamLimits

0xb212,	// (0x00018135) list_single_graphic_pane_fp_t1

0xb206,	// (0x00018129) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xb206,	// (0x00018129) list_single_graphic_heading_pane_fp_g1

0x9162,	// (0x00016085) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x9162,	// (0x00016085) list_single_graphic_heading_pane_fp_g2

0xaa35,	// (0x00017958) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xaa35,	// (0x00017958) list_single_graphic_heading_pane_fp_g3

0xb1db,	// (0x000180fe) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb1db,	// (0x000180fe) list_single_graphic_heading_pane_fp_g4

0x9182,	// (0x000160a5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x9182,	// (0x000160a5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb86,	// (0x0001caa9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb86,	// (0x0001caa9) list_single_graphic_heading_pane_fp_g

0xb228,	// (0x0001814b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xb228,	// (0x0001814b) list_single_graphic_heading_pane_fp_t1

0xb23e,	// (0x00018161) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xb23e,	// (0x00018161) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb91,	// (0x0001cab4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb91,	// (0x0001cab4) list_single_graphic_heading_pane_fp_t

0xb250,	// (0x00018173) list_single_cale_day_pane_fp_g1_ParamLimits

0xb250,	// (0x00018173) list_single_cale_day_pane_fp_g1

0x9227,	// (0x0001614a) list_single_cale_day_pane_fp_g2_ParamLimits

0x9227,	// (0x0001614a) list_single_cale_day_pane_fp_g2

0xb288,	// (0x000181ab) list_single_cale_day_pane_fp_g3_ParamLimits

0xb288,	// (0x000181ab) list_single_cale_day_pane_fp_g3

0xb2b0,	// (0x000181d3) list_single_cale_day_pane_fp_g4_ParamLimits

0xb2b0,	// (0x000181d3) list_single_cale_day_pane_fp_g4

0xb2d4,	// (0x000181f7) list_single_cale_day_pane_fp_g5_ParamLimits

0xb2d4,	// (0x000181f7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb96,	// (0x0001cab9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb96,	// (0x0001cab9) list_single_cale_day_pane_fp_g

0xb2f8,	// (0x0001821b) list_single_cale_day_pane_fp_t1_ParamLimits

0xb2f8,	// (0x0001821b) list_single_cale_day_pane_fp_t1

0xb31e,	// (0x00018241) list_single_cale_day_pane_fp_t2_ParamLimits

0xb31e,	// (0x00018241) list_single_cale_day_pane_fp_t2

0xb337,	// (0x0001825a) list_single_cale_day_pane_fp_t3_ParamLimits

0xb337,	// (0x0001825a) list_single_cale_day_pane_fp_t3

0x0002,

0xfba1,	// (0x0001cac4) list_single_cale_day_pane_fp_t_ParamLimits

0xfba1,	// (0x0001cac4) list_single_cale_day_pane_fp_t

0x9162,	// (0x00016085) list_empty_pane_fp_g1_ParamLimits

0x9162,	// (0x00016085) list_empty_pane_fp_g1

0xb350,	// (0x00018273) list_empty_pane_fp_t1

0xb35e,	// (0x00018281) list_empty_pane_fp_t2

0x0001,

0xfba8,	// (0x0001cacb) list_empty_pane_fp_t

0x9162,	// (0x00016085) list_single_heading_pane_fp_g1_ParamLimits

0x9162,	// (0x00016085) list_single_heading_pane_fp_g1

0xaa35,	// (0x00017958) list_single_heading_pane_fp_g2_ParamLimits

0xaa35,	// (0x00017958) list_single_heading_pane_fp_g2

0xb1db,	// (0x000180fe) list_single_heading_pane_fp_g3_ParamLimits

0xb1db,	// (0x000180fe) list_single_heading_pane_fp_g3

0x0002,

0xfbad,	// (0x0001cad0) list_single_heading_pane_fp_g_ParamLimits

0xfbad,	// (0x0001cad0) list_single_heading_pane_fp_g

0xb36c,	// (0x0001828f) list_single_heading_pane_fp_t1_ParamLimits

0xb36c,	// (0x0001828f) list_single_heading_pane_fp_t1

0xb37e,	// (0x000182a1) list_single_heading_pane_fp_t2_ParamLimits

0xb37e,	// (0x000182a1) list_single_heading_pane_fp_t2

0x0001,

0xfbb4,	// (0x0001cad7) list_single_heading_pane_fp_t_ParamLimits

0xfbb4,	// (0x0001cad7) list_single_heading_pane_fp_t

0x4258,	// (0x0001117b) aid_size_cell_fast

0x33f7,	// (0x0001031a) soft_indicator_pane_cp1_t1

0x4295,	// (0x000111b8) cell_app_pane_cp2_ParamLimits

0x4295,	// (0x000111b8) cell_app_pane_cp2

0xc7a6,	// (0x000196c9) fep_hwr_candidate_drop_down_list_pane

0x9148,	// (0x0001606b) fep_hwr_candidate_pane_g3_ParamLimits

0x9148,	// (0x0001606b) fep_hwr_candidate_pane_g3

0x9155,	// (0x00016078) fep_hwr_candidate_pane_g4_ParamLimits

0x9155,	// (0x00016078) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x0001ca4b) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x0001ca4b) fep_hwr_candidate_pane_g

0x8d08,	// (0x00015c2b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x8d08,	// (0x00015c2b) fep_vkb_candidate_drop_down_list_pane

0x8fff,	// (0x00015f22) fep_vkb_candidate_pane_g3

0x9007,	// (0x00015f2a) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x0001ca78) fep_vkb_candidate_pane_g

0x8def,	// (0x00015d12) cell_hwr_candidate_pane_g1_ParamLimits

0x90f8,	// (0x0001601b) cell_hwr_candidate_pane_g3_ParamLimits

0x90f8,	// (0x0001601b) cell_hwr_candidate_pane_g3

0x9119,	// (0x0001603c) cell_hwr_candidate_pane_g4_ParamLimits

0x9119,	// (0x0001603c) cell_hwr_candidate_pane_g4

0x0002,

0xfb6f,	// (0x0001ca92) cell_hwr_candidate_pane_g_ParamLimits

0xfb6f,	// (0x0001ca92) cell_hwr_candidate_pane_g

0x901e,	// (0x00015f41) cell_vkb_candidate_pane_g3_ParamLimits

0x901e,	// (0x00015f41) cell_vkb_candidate_pane_g3

0x9039,	// (0x00015f5c) cell_vkb_candidate_pane_g4_ParamLimits

0x9039,	// (0x00015f5c) cell_vkb_candidate_pane_g4

0x933f,	// (0x00016262) cell_app_pane_cp2_g1_ParamLimits

0x933f,	// (0x00016262) cell_app_pane_cp2_g1

0x935d,	// (0x00016280) cell_app_pane_cp2_g2_ParamLimits

0x935d,	// (0x00016280) cell_app_pane_cp2_g2

0x0001,

0xfbb9,	// (0x0001cadc) cell_app_pane_cp2_g_ParamLimits

0xfbb9,	// (0x0001cadc) cell_app_pane_cp2_g

0x9369,	// (0x0001628c) cell_app_pane_cp2_t1_ParamLimits

0x9369,	// (0x0001628c) cell_app_pane_cp2_t1

0x3eff,	// (0x00010e22) grid_highlight_pane_cp1_ParamLimits

0x3eff,	// (0x00010e22) grid_highlight_pane_cp1

0xcab3,	// (0x000199d6) cell_hwr_candidate_pane_cp1_ParamLimits

0xcab3,	// (0x000199d6) cell_hwr_candidate_pane_cp1

0x8def,	// (0x00015d12) fep_hwr_candidate_drop_down_list_pane_g1

0x937b,	// (0x0001629e) fep_hwr_candidate_drop_down_list_pane_g2

0x9388,	// (0x000162ab) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x0001cae1) fep_hwr_candidate_drop_down_list_pane_g

0xcad1,	// (0x000199f4) fep_hwr_candidate_drop_down_list_scroll_pane

0xcada,	// (0x000199fd) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xcada,	// (0x000199fd) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xcae7,	// (0x00019a0a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xcae7,	// (0x00019a0a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xcaf4,	// (0x00019a17) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xcaf4,	// (0x00019a17) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x901e,	// (0x00015f41) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x901e,	// (0x00015f41) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x9039,	// (0x00015f5c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9039,	// (0x00015f5c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xcb01,	// (0x00019a24) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xcb01,	// (0x00019a24) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xcb1c,	// (0x00019a3f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xcb1c,	// (0x00019a3f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xcb37,	// (0x00019a5a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcb37,	// (0x00019a5a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x0001cae8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x0001cae8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xcb52,	// (0x00019a75) cell_vkb_candidate_pane_cp1_ParamLimits

0xcb52,	// (0x00019a75) cell_vkb_candidate_pane_cp1

0x8def,	// (0x00015d12) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x8def,	// (0x00015d12) fep_vkb_candidate_drop_down_list_pane_g1

0x937b,	// (0x0001629e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x937b,	// (0x0001629e) fep_vkb_candidate_drop_down_list_pane_g2

0x9388,	// (0x000162ab) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x9388,	// (0x000162ab) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x0001cae1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x0001cae1) fep_vkb_candidate_drop_down_list_pane_g

0x9395,	// (0x000162b8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x9395,	// (0x000162b8) fep_vkb_candidate_drop_down_list_scroll_pane

0x93a2,	// (0x000162c5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x93a2,	// (0x000162c5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x93af,	// (0x000162d2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x93af,	// (0x000162d2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x93bb,	// (0x000162de) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x93bb,	// (0x000162de) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x90f8,	// (0x0001601b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x90f8,	// (0x0001601b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x9119,	// (0x0001603c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9119,	// (0x0001603c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x93c7,	// (0x000162ea) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x93c7,	// (0x000162ea) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x93e8,	// (0x0001630b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x93e8,	// (0x0001630b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x9409,	// (0x0001632c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9409,	// (0x0001632c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x0001caf9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x0001caf9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x3113,	// (0x00010036) title_pane_g1_ParamLimits

0x3120,	// (0x00010043) title_pane_g2_ParamLimits

0xf56a,	// (0x0001c48d) title_pane_g_ParamLimits

0x46b2,	// (0x000115d5) aid_call2_pane

0x46aa,	// (0x000115cd) aid_call_pane

0x46ba,	// (0x000115dd) popup_clock_analogue_window_g1

0x46ba,	// (0x000115dd) popup_clock_analogue_window_g2

0xb9b4,	// (0x000188d7) popup_clock_analogue_window_g3

0xb9bd,	// (0x000188e0) popup_clock_analogue_window_g4

0x3022,	// (0x0000ff45) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0001c632) popup_clock_analogue_window_g

0xb9c5,	// (0x000188e8) popup_clock_analogue_window_t1

0xb9d3,	// (0x000188f6) clock_digital_number_pane_ParamLimits

0xb9d3,	// (0x000188f6) clock_digital_number_pane

0xb9df,	// (0x00018902) clock_digital_number_pane_cp02_ParamLimits

0xb9df,	// (0x00018902) clock_digital_number_pane_cp02

0xb9eb,	// (0x0001890e) clock_digital_number_pane_cp03_ParamLimits

0xb9eb,	// (0x0001890e) clock_digital_number_pane_cp03

0xb9f7,	// (0x0001891a) clock_digital_number_pane_cp04_ParamLimits

0xb9f7,	// (0x0001891a) clock_digital_number_pane_cp04

0xba03,	// (0x00018926) clock_digital_separator_pane_ParamLimits

0xba03,	// (0x00018926) clock_digital_separator_pane

0xba0f,	// (0x00018932) popup_clock_digital_window_t1_ParamLimits

0xba0f,	// (0x00018932) popup_clock_digital_window_t1

0x3022,	// (0x0000ff45) clock_digital_number_pane_g1

0x3022,	// (0x0000ff45) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0001c63d) clock_digital_number_pane_g

0x3022,	// (0x0000ff45) clock_digital_separator_pane_g1

0x3022,	// (0x0000ff45) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0001c63d) clock_digital_separator_pane_g

0x54b5,	// (0x000123d8) aid_fill_nsta_ParamLimits

0x55d7,	// (0x000124fa) indicator_nsta_pane_ParamLimits

0x574a,	// (0x0001266d) popup_clock_analogue_window

0x574a,	// (0x0001266d) popup_clock_digital_window

0x31e9,	// (0x0001010c) grid_indicator_nsta_pane_ParamLimits

0x882e,	// (0x00015751) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x0001c9cb) clock_nsta_pane_t

0xb978,	// (0x0001889b) aid_size_max_handle

0xb982,	// (0x000188a5) aid_size_min_handle

0x4c8c,	// (0x00011baf) editor_scroll_pane

0x9424,	// (0x00016347) ex_editor_pane

0x41c6,	// (0x000110e9) scroll_pane_cp13

0x3982,	// (0x000108a5) scroll_pane_cp14

0x46e4,	// (0x00011607) scroll_pane_cp36

0x46fc,	// (0x0001161f) list_single_graphic_hl_pane_cp2_ParamLimits

0x46fc,	// (0x0001161f) list_single_graphic_hl_pane_cp2

0xc2f0,	// (0x00019213) list_single_graphic_hl_pane_ParamLimits

0xc2f0,	// (0x00019213) list_single_graphic_hl_pane

0xb394,	// (0x000182b7) aid_size_min_hl_cp1

0x9435,	// (0x00016358) list_highlight_pane_cp34_ParamLimits

0x9435,	// (0x00016358) list_highlight_pane_cp34

0x9446,	// (0x00016369) list_single_graphic_hl_pane_g1_ParamLimits

0x9446,	// (0x00016369) list_single_graphic_hl_pane_g1

0xb39d,	// (0x000182c0) list_single_graphic_hl_pane_g2_ParamLimits

0xb39d,	// (0x000182c0) list_single_graphic_hl_pane_g2

0xb39d,	// (0x000182c0) list_single_graphic_hl_pane_g3_ParamLimits

0xb39d,	// (0x000182c0) list_single_graphic_hl_pane_g3

0xadfc,	// (0x00017d1f) list_single_graphic_hl_pane_g4_ParamLimits

0xadfc,	// (0x00017d1f) list_single_graphic_hl_pane_g4

0xb3a9,	// (0x000182cc) list_single_graphic_hl_pane_g5_ParamLimits

0xb3a9,	// (0x000182cc) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x0001cb0a) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x0001cb0a) list_single_graphic_hl_pane_g

0xb3bd,	// (0x000182e0) list_single_graphic_hl_pane_t1_ParamLimits

0xb3bd,	// (0x000182e0) list_single_graphic_hl_pane_t1

0x9453,	// (0x00016376) aid_size_min_hl_cp2

0x945c,	// (0x0001637f) list_highlight_pane_cp34_cp2_ParamLimits

0x945c,	// (0x0001637f) list_highlight_pane_cp34_cp2

0x9446,	// (0x00016369) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x9446,	// (0x00016369) list_single_graphic_hl_pane_g1_cp2

0x9469,	// (0x0001638c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x9469,	// (0x0001638c) list_single_graphic_hl_pane_g2_cp2

0x9475,	// (0x00016398) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x9475,	// (0x00016398) list_single_graphic_hl_pane_g3_cp2

0x4b01,	// (0x00011a24) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4b01,	// (0x00011a24) list_single_graphic_hl_pane_g4_cp2

0x9062,	// (0x00015f85) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x9062,	// (0x00015f85) list_single_graphic_hl_pane_g5_cp2

0xbc9a,	// (0x00018bbd) control_pane_g4_ParamLimits

0xbc9a,	// (0x00018bbd) control_pane_g4

0x4fff,	// (0x00011f22) bg_popup_sub_pane_cp10_ParamLimits

0x8bbd,	// (0x00015ae0) list_choice_list_pane_ParamLimits

0x8bcc,	// (0x00015aef) scroll_pane_cp23

0x3490,	// (0x000103b3) bg_popup_preview_window_pane_cp02_ParamLimits

0x909e,	// (0x00015fc1) list_preview_fixed_pane_ParamLimits

0x90b4,	// (0x00015fd7) list_preview_fixed_pane_cp_ParamLimits

0x90b4,	// (0x00015fd7) list_preview_fixed_pane_cp

0x90c0,	// (0x00015fe3) popup_preview_fixed_window_g1_ParamLimits

0x90c0,	// (0x00015fe3) popup_preview_fixed_window_g1

0x90cc,	// (0x00015fef) popup_preview_fixed_window_g2_ParamLimits

0x90cc,	// (0x00015fef) popup_preview_fixed_window_g2

0x0002,

0xfb76,	// (0x0001ca99) popup_preview_fixed_window_g_ParamLimits

0xfb76,	// (0x0001ca99) popup_preview_fixed_window_g

0xb908,	// (0x0001882b) aid_navi_side_left_pane_ParamLimits

0xb918,	// (0x0001883b) aid_navi_side_right_pane_ParamLimits

0xb927,	// (0x0001884a) navi_icon_pane_stacon_ParamLimits

0xb937,	// (0x0001885a) navi_navi_pane_stacon_ParamLimits

0xb927,	// (0x0001884a) navi_text_pane_stacon_ParamLimits

0x3018,	// (0x0000ff3b) main_text_info_pane

0x9497,	// (0x000163ba) listscroll_text_info_pane

0x949f,	// (0x000163c2) list_text_info_pane_ParamLimits

0x949f,	// (0x000163c2) list_text_info_pane

0x94ae,	// (0x000163d1) scroll_pane_cp24_ParamLimits

0x94ae,	// (0x000163d1) scroll_pane_cp24

0xcb75,	// (0x00019a98) list_text_info_pane_t1_ParamLimits

0xcb75,	// (0x00019a98) list_text_info_pane_t1

0x5047,	// (0x00011f6a) popup_fast_swap2_window_ParamLimits

0x5047,	// (0x00011f6a) popup_fast_swap2_window

0x94cc,	// (0x000163ef) aid_size_cell_fast2

0x3018,	// (0x0000ff3b) bg_popup_window_pane_cp17

0x5e09,	// (0x00012d2c) heading_pane_cp2

0x3704,	// (0x00010627) listscroll_fast2_pane

0x94d6,	// (0x000163f9) grid_fast2_pane

0x94de,	// (0x00016401) listscroll_fast2_pane_g1

0x94e6,	// (0x00016409) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x0001cb15) listscroll_fast2_pane_g

0x41c6,	// (0x000110e9) scroll_pane_cp26

0x94ee,	// (0x00016411) cell_fast2_pane_ParamLimits

0x94ee,	// (0x00016411) cell_fast2_pane

0x9504,	// (0x00016427) cell_fast2_pane_g1

0x950d,	// (0x00016430) cell_fast2_pane_g2

0x9516,	// (0x00016439) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x0001cb1a) cell_fast2_pane_g

0x37db,	// (0x000106fe) grid_highlight_pane_cp9

0x37f0,	// (0x00010713) main_eswt_pane_ParamLimits

0x37f0,	// (0x00010713) main_eswt_pane

0x94c3,	// (0x000163e6) list_single_text_info_pane

0x951e,	// (0x00016441) eswt_ctrl_button_pane

0x951e,	// (0x00016441) eswt_ctrl_canvas_pane

0x9526,	// (0x00016449) eswt_ctrl_combo_pane

0x951e,	// (0x00016441) eswt_ctrl_default_pane

0x951e,	// (0x00016441) eswt_ctrl_label_pane

0x952e,	// (0x00016451) eswt_ctrl_wait_pane

0x9536,	// (0x00016459) eswt_shell_pane

0x3018,	// (0x0000ff3b) listscroll_eswt_app_pane

0x9552,	// (0x00016475) popup_eswt_tasktip_window_ParamLimits

0x9552,	// (0x00016475) popup_eswt_tasktip_window

0x5a76,	// (0x00012999) bg_popup_window_pane_cp18

0x9563,	// (0x00016486) eswt_control_pane_g1_ParamLimits

0x9563,	// (0x00016486) eswt_control_pane_g1

0x9570,	// (0x00016493) eswt_control_pane_g2_ParamLimits

0x9570,	// (0x00016493) eswt_control_pane_g2

0x957d,	// (0x000164a0) eswt_control_pane_g3_ParamLimits

0x957d,	// (0x000164a0) eswt_control_pane_g3

0x958a,	// (0x000164ad) eswt_control_pane_g4_ParamLimits

0x958a,	// (0x000164ad) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x0001cb21) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x0001cb21) eswt_control_pane_g

0x3eff,	// (0x00010e22) bg_button_pane_ParamLimits

0x3eff,	// (0x00010e22) bg_button_pane

0x37f0,	// (0x00010713) common_borders_pane_copy2_ParamLimits

0x37f0,	// (0x00010713) common_borders_pane_copy2

0x9597,	// (0x000164ba) control_button_pane_g1_ParamLimits

0x9597,	// (0x000164ba) control_button_pane_g1

0x95a3,	// (0x000164c6) control_button_pane_g2_ParamLimits

0x95a3,	// (0x000164c6) control_button_pane_g2

0x95af,	// (0x000164d2) control_button_pane_g3_ParamLimits

0x95af,	// (0x000164d2) control_button_pane_g3

0x0002,

0xfc07,	// (0x0001cb2a) control_button_pane_g_ParamLimits

0xfc07,	// (0x0001cb2a) control_button_pane_g

0x95c3,	// (0x000164e6) control_button_pane_t1

0x95d1,	// (0x000164f4) control_button_pane_t2

0x0001,

0xfc0e,	// (0x0001cb31) control_button_pane_t

0x5954,	// (0x00012877) bg_button_pane_g1

0x5964,	// (0x00012887) bg_button_pane_g2

0x595c,	// (0x0001287f) bg_button_pane_g3

0x5974,	// (0x00012897) bg_button_pane_g4

0x596c,	// (0x0001288f) bg_button_pane_g5

0x597c,	// (0x0001289f) bg_button_pane_g6

0x5984,	// (0x000128a7) bg_button_pane_g7

0x5994,	// (0x000128b7) bg_button_pane_g8

0x598c,	// (0x000128af) bg_button_pane_g9

0x0008,

0xf86b,	// (0x0001c78e) bg_button_pane_g

0x8b78,	// (0x00015a9b) common_borders_pane_ParamLimits

0x8b78,	// (0x00015a9b) common_borders_pane

0x9563,	// (0x00016486) eswt_control_pane_g1_copy1_ParamLimits

0x9563,	// (0x00016486) eswt_control_pane_g1_copy1

0x9570,	// (0x00016493) eswt_control_pane_g2_copy1_ParamLimits

0x9570,	// (0x00016493) eswt_control_pane_g2_copy1

0x957d,	// (0x000164a0) eswt_control_pane_g3_copy1_ParamLimits

0x957d,	// (0x000164a0) eswt_control_pane_g3_copy1

0x958a,	// (0x000164ad) eswt_control_pane_g4_copy1_ParamLimits

0x958a,	// (0x000164ad) eswt_control_pane_g4_copy1

0x8bb3,	// (0x00015ad6) bg_eswt_ctrl_canvas_pane_g1

0x8b78,	// (0x00015a9b) common_borders_pane_cp2_ParamLimits

0x8b78,	// (0x00015a9b) common_borders_pane_cp2

0x8b78,	// (0x00015a9b) common_borders_pane_cp3_ParamLimits

0x8b78,	// (0x00015a9b) common_borders_pane_cp3

0x95df,	// (0x00016502) separator_horizontal_pane

0x44f7,	// (0x0001141a) separator_vertical_pane

0x9563,	// (0x00016486) eswt_control_pane_g1_copy2_ParamLimits

0x9563,	// (0x00016486) eswt_control_pane_g1_copy2

0x9570,	// (0x00016493) eswt_control_pane_g2_copy2_ParamLimits

0x9570,	// (0x00016493) eswt_control_pane_g2_copy2

0x957d,	// (0x000164a0) eswt_control_pane_g3_copy2_ParamLimits

0x957d,	// (0x000164a0) eswt_control_pane_g3_copy2

0x958a,	// (0x000164ad) eswt_control_pane_g4_copy2_ParamLimits

0x958a,	// (0x000164ad) eswt_control_pane_g4_copy2

0x3018,	// (0x0000ff3b) common_borders_pane_cp4

0x95e7,	// (0x0001650a) separator_horizontal_pane_g1

0x95f0,	// (0x00016513) separator_horizontal_pane_g2

0x95f9,	// (0x0001651c) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x0001cb36) separator_horizontal_pane_g

0x9563,	// (0x00016486) eswt_control_pane_g1_copy3_ParamLimits

0x9563,	// (0x00016486) eswt_control_pane_g1_copy3

0x9570,	// (0x00016493) eswt_control_pane_g2_copy3_ParamLimits

0x9570,	// (0x00016493) eswt_control_pane_g2_copy3

0x957d,	// (0x000164a0) eswt_control_pane_g3_copy3_ParamLimits

0x957d,	// (0x000164a0) eswt_control_pane_g3_copy3

0x958a,	// (0x000164ad) eswt_control_pane_g4_copy3_ParamLimits

0x958a,	// (0x000164ad) eswt_control_pane_g4_copy3

0x3018,	// (0x0000ff3b) common_borders_pane_cp5

0x9602,	// (0x00016525) separator_vertical_pane_g1

0x960b,	// (0x0001652e) separator_vertical_pane_g2

0x9614,	// (0x00016537) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x0001cb3d) separator_vertical_pane_g

0x9563,	// (0x00016486) eswt_control_pane_g1_copy4_ParamLimits

0x9563,	// (0x00016486) eswt_control_pane_g1_copy4

0x9570,	// (0x00016493) eswt_control_pane_g2_copy4_ParamLimits

0x9570,	// (0x00016493) eswt_control_pane_g2_copy4

0x957d,	// (0x000164a0) eswt_control_pane_g3_copy4_ParamLimits

0x957d,	// (0x000164a0) eswt_control_pane_g3_copy4

0x958a,	// (0x000164ad) eswt_control_pane_g4_copy4_ParamLimits

0x958a,	// (0x000164ad) eswt_control_pane_g4_copy4

0xcb92,	// (0x00019ab5) eswt_ctrl_combo_button_pane

0xcb9a,	// (0x00019abd) eswt_ctrl_input_pane

0xcba2,	// (0x00019ac5) popup_choice_list_window_cp70

0xcbaa,	// (0x00019acd) eswt_ctrl_input_pane_t1

0x3018,	// (0x0000ff3b) input_focus_pane_cp70

0x8b78,	// (0x00015a9b) bg_button_pane_cp70_ParamLimits

0x8b78,	// (0x00015a9b) bg_button_pane_cp70

0xcbb8,	// (0x00019adb) eswt_ctrl_combo_button_pane_g1

0x961d,	// (0x00016540) wait_bar_pane_cp70

0x5a76,	// (0x00012999) bg_popup_window_pane_cp70_ParamLimits

0x5a76,	// (0x00012999) bg_popup_window_pane_cp70

0x9625,	// (0x00016548) popup_eswt_tasktip_window_t1

0x963b,	// (0x0001655e) wait_bar_pane_cp71_ParamLimits

0x963b,	// (0x0001655e) wait_bar_pane_cp71

0x9647,	// (0x0001656a) grid_eswt_app_pane

0x44ee,	// (0x00011411) scroll_pane_cp70

0xcbc0,	// (0x00019ae3) cell_eswt_app_pane_ParamLimits

0xcbc0,	// (0x00019ae3) cell_eswt_app_pane

0xcbe8,	// (0x00019b0b) cell_eswt_app_pane_g1_ParamLimits

0xcbe8,	// (0x00019b0b) cell_eswt_app_pane_g1

0xcc17,	// (0x00019b3a) cell_eswt_app_pane_g2_ParamLimits

0xcc17,	// (0x00019b3a) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x0001cb44) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x0001cb44) cell_eswt_app_pane_g

0xcc40,	// (0x00019b63) cell_eswt_app_pane_t1_ParamLimits

0xcc40,	// (0x00019b63) cell_eswt_app_pane_t1

0x9650,	// (0x00016573) grid_highlight_pane_cp70_ParamLimits

0x9650,	// (0x00016573) grid_highlight_pane_cp70

0x3996,	// (0x000108b9) set_content_pane_g1

0x4f28,	// (0x00011e4b) status_small_volume_pane

0xcc72,	// (0x00019b95) status_small_volume_pane_g1

0xcc7a,	// (0x00019b9d) volume_small2_pane

0xcc83,	// (0x00019ba6) volume_small2_pane_g1

0xcc8c,	// (0x00019baf) volume_small2_pane_g2

0xcc95,	// (0x00019bb8) volume_small2_pane_g3

0xcc9e,	// (0x00019bc1) volume_small2_pane_g4

0xcca7,	// (0x00019bca) volume_small2_pane_g5

0xccb0,	// (0x00019bd3) volume_small2_pane_g6

0xccb9,	// (0x00019bdc) volume_small2_pane_g7

0xccc2,	// (0x00019be5) volume_small2_pane_g8

0xcccb,	// (0x00019bee) volume_small2_pane_g9

0xccd4,	// (0x00019bf7) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x0001cb49) volume_small2_pane_g

0x8ef6,	// (0x00015e19) fep_vkb_top_text_pane_g1_ParamLimits

0xc9b8,	// (0x000198db) fep_vkb_top_text_pane_t1_ParamLimits

0x90d8,	// (0x00015ffb) popup_preview_fixed_window_g3_ParamLimits

0x90d8,	// (0x00015ffb) popup_preview_fixed_window_g3

0x5409,	// (0x0001232c) popup_toolbar_trans_pane

0xc18e,	// (0x000190b1) aid_height_set_list_ParamLimits

0x7de7,	// (0x00014d0a) aid_size_parent_ParamLimits

0x4fff,	// (0x00011f22) list_highlight_pane_cp2_ParamLimits

0x3996,	// (0x000108b9) set_content_pane_g1_ParamLimits

0xc305,	// (0x00019228) list_single_image_pane_ParamLimits

0xc305,	// (0x00019228) list_single_image_pane

0xccdd,	// (0x00019c00) aid_size_cell_image_ParamLimits

0xccdd,	// (0x00019c00) aid_size_cell_image

0xccea,	// (0x00019c0d) grid_single_image_pane_ParamLimits

0xccea,	// (0x00019c0d) grid_single_image_pane

0x3996,	// (0x000108b9) list_single_image_pane_g1_ParamLimits

0x3996,	// (0x000108b9) list_single_image_pane_g1

0x3f25,	// (0x00010e48) list_single_image_pane_g2_ParamLimits

0x3f25,	// (0x00010e48) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x0001cb5e) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x0001cb5e) list_single_image_pane_g

0x82bc,	// (0x000151df) list_single_image_pane_t1_ParamLimits

0x82bc,	// (0x000151df) list_single_image_pane_t1

0xccf6,	// (0x00019c19) cell_image_list_pane_ParamLimits

0xccf6,	// (0x00019c19) cell_image_list_pane

0xcd09,	// (0x00019c2c) cell_image_list_pane_g1

0xcd12,	// (0x00019c35) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x0001cb63) cell_image_list_pane_g

0x965c,	// (0x0001657f) aid_size_cell_tb_trans_pane

0x3eff,	// (0x00010e22) bg_tb_trans_pane

0x966e,	// (0x00016591) grid_tb_trans_pane

0x5954,	// (0x00012877) bg_tb_trans_pane_g1

0x5964,	// (0x00012887) bg_tb_trans_pane_g2

0x595c,	// (0x0001287f) bg_tb_trans_pane_g3

0x5974,	// (0x00012897) bg_tb_trans_pane_g4

0x596c,	// (0x0001288f) bg_tb_trans_pane_g5

0x5994,	// (0x000128b7) bg_tb_trans_pane_g6

0x598c,	// (0x000128af) bg_tb_trans_pane_g7

0x597c,	// (0x0001289f) bg_tb_trans_pane_g8

0x5984,	// (0x000128a7) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x0001cb68) bg_tb_trans_pane_g

0x9682,	// (0x000165a5) cell_toolbar_trans_pane_ParamLimits

0x9682,	// (0x000165a5) cell_toolbar_trans_pane

0x8bb3,	// (0x00015ad6) cell_toolbar_trans_pane_g1

0xc6bb,	// (0x000195de) list_form2_midp_pane_t1

0xc6c9,	// (0x000195ec) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x0001ca11) list_form2_midp_pane_t

0x88fc,	// (0x0001581f) scroll_pane_cp51_ParamLimits

0x8a85,	// (0x000159a8) form2_midp_wait_pane_g1

0x8a8e,	// (0x000159b1) form2_midp_wait_pane_g2

0x8a97,	// (0x000159ba) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x0001ca26) form2_midp_wait_pane_g

0x31e9,	// (0x0001010c) list_highlight_pane_cp21_ParamLimits

0x8ab7,	// (0x000159da) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x8ac6,	// (0x000159e9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaf29,	// (0x00017e4c) list_single_2graphic_im_pane_ParamLimits

0xaf29,	// (0x00017e4c) list_single_2graphic_im_pane

0xcd1b,	// (0x00019c3e) list_single_2graphic_im_pane_g1_ParamLimits

0xcd1b,	// (0x00019c3e) list_single_2graphic_im_pane_g1

0xcd2c,	// (0x00019c4f) list_single_2graphic_im_pane_g2_ParamLimits

0xcd2c,	// (0x00019c4f) list_single_2graphic_im_pane_g2

0xcd38,	// (0x00019c5b) list_single_2graphic_im_pane_g3_ParamLimits

0xcd38,	// (0x00019c5b) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x0001cb7b) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x0001cb7b) list_single_2graphic_im_pane_g

0xcd4c,	// (0x00019c6f) list_single_2graphic_im_pane_t1_ParamLimits

0xcd4c,	// (0x00019c6f) list_single_2graphic_im_pane_t1

0x90e4,	// (0x00016007) list_single_graphic_2heading_pane_fp_ParamLimits

0x90e4,	// (0x00016007) list_single_graphic_2heading_pane_fp

0xb206,	// (0x00018129) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xb206,	// (0x00018129) list_single_graphic_2heading_pane_fp_g1

0x9162,	// (0x00016085) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x9162,	// (0x00016085) list_single_graphic_2heading_pane_fp_g2

0xaa35,	// (0x00017958) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xaa35,	// (0x00017958) list_single_graphic_2heading_pane_fp_g3

0xb1db,	// (0x000180fe) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb1db,	// (0x000180fe) list_single_graphic_2heading_pane_fp_g4

0x9182,	// (0x000160a5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x9182,	// (0x000160a5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb86,	// (0x0001caa9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb86,	// (0x0001caa9) list_single_graphic_2heading_pane_fp_g

0xb3d3,	// (0x000182f6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xb3d3,	// (0x000182f6) list_single_graphic_2heading_pane_fp_t1

0xb23e,	// (0x00018161) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xb23e,	// (0x00018161) list_single_graphic_2heading_pane_fp_t2

0xb3e9,	// (0x0001830c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xb3e9,	// (0x0001830c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x0001cb84) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x0001cb84) list_single_graphic_2heading_pane_fp_t

0x8c4c,	// (0x00015b6f) fep_hwr_write_pane_g5_ParamLimits

0x8c4c,	// (0x00015b6f) fep_hwr_write_pane_g5

0x8c58,	// (0x00015b7b) fep_hwr_write_pane_g6_ParamLimits

0x8c58,	// (0x00015b7b) fep_hwr_write_pane_g6

0x9536,	// (0x00016459) eswt_shell_pane_ParamLimits

0x5a76,	// (0x00012999) bg_popup_window_pane_cp18_ParamLimits

0x7d8b,	// (0x00014cae) heading_pane_cp70

0x9625,	// (0x00016548) popup_eswt_tasktip_window_t1_ParamLimits

0x54f7,	// (0x0001241a) aid_touch_tab_arrow_left

0x5503,	// (0x00012426) aid_touch_tab_arrow_right

0x3131,	// (0x00010054) title_pane_g3_ParamLimits

0x3131,	// (0x00010054) title_pane_g3

0x3dfd,	// (0x00010d20) set_value_pane_g1

0x5409,	// (0x0001232c) popup_toolbar_trans_pane_ParamLimits

0x965c,	// (0x0001657f) aid_size_cell_tb_trans_pane_ParamLimits

0x3eff,	// (0x00010e22) bg_tb_trans_pane_ParamLimits

0x966e,	// (0x00016591) grid_tb_trans_pane_ParamLimits

0x3490,	// (0x000103b3) cont_note_pane_ParamLimits

0x3490,	// (0x000103b3) cont_note_pane

0x37f0,	// (0x00010713) cont_snote2_single_text_pane_ParamLimits

0x37f0,	// (0x00010713) cont_snote2_single_text_pane

0x37f0,	// (0x00010713) cont_snote2_single_graphic_pane_ParamLimits

0x37f0,	// (0x00010713) cont_snote2_single_graphic_pane

0x6013,	// (0x00012f36) cont_note_wait_pane_ParamLimits

0x6013,	// (0x00012f36) cont_note_wait_pane

0x6013,	// (0x00012f36) cont_note_image_pane_ParamLimits

0x6013,	// (0x00012f36) cont_note_image_pane

0x96e0,	// (0x00016603) popup_note2_window_g1_ParamLimits

0x96e0,	// (0x00016603) popup_note2_window_g1

0x9711,	// (0x00016634) popup_note2_window_t1_ParamLimits

0x9711,	// (0x00016634) popup_note2_window_t1

0x9756,	// (0x00016679) popup_note2_window_t2_ParamLimits

0x9756,	// (0x00016679) popup_note2_window_t2

0x979b,	// (0x000166be) popup_note2_window_t3_ParamLimits

0x979b,	// (0x000166be) popup_note2_window_t3

0x97e0,	// (0x00016703) popup_note2_window_t4_ParamLimits

0x97e0,	// (0x00016703) popup_note2_window_t4

0x3514,	// (0x00010437) popup_note2_window_t5_ParamLimits

0x3514,	// (0x00010437) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x0001cb90) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x0001cb90) popup_note2_window_t

0x980f,	// (0x00016732) popup_note2_image_window_g1_ParamLimits

0x980f,	// (0x00016732) popup_note2_image_window_g1

0x981b,	// (0x0001673e) popup_note2_image_window_g2_ParamLimits

0x981b,	// (0x0001673e) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x0001cb9b) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x0001cb9b) popup_note2_image_window_g

0x982d,	// (0x00016750) popup_note2_image_window_t1_ParamLimits

0x982d,	// (0x00016750) popup_note2_image_window_t1

0x9845,	// (0x00016768) popup_note2_image_window_t2_ParamLimits

0x9845,	// (0x00016768) popup_note2_image_window_t2

0x985d,	// (0x00016780) popup_note2_image_window_t3_ParamLimits

0x985d,	// (0x00016780) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x0001cba0) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x0001cba0) popup_note2_image_window_t

0x6021,	// (0x00012f44) popup_note2_wait_window_g1_ParamLimits

0x6021,	// (0x00012f44) popup_note2_wait_window_g1

0x602d,	// (0x00012f50) popup_note2_wait_window_g2_ParamLimits

0x602d,	// (0x00012f50) popup_note2_wait_window_g2

0x6039,	// (0x00012f5c) popup_note2_wait_window_g3_ParamLimits

0x6039,	// (0x00012f5c) popup_note2_wait_window_g3

0x0002,

0xf84d,	// (0x0001c770) popup_note2_wait_window_g_ParamLimits

0xf84d,	// (0x0001c770) popup_note2_wait_window_g

0x9879,	// (0x0001679c) popup_note2_wait_window_t1_ParamLimits

0x9879,	// (0x0001679c) popup_note2_wait_window_t1

0x9897,	// (0x000167ba) popup_note2_wait_window_t2_ParamLimits

0x9897,	// (0x000167ba) popup_note2_wait_window_t2

0x98b5,	// (0x000167d8) popup_note2_wait_window_t3_ParamLimits

0x98b5,	// (0x000167d8) popup_note2_wait_window_t3

0x98c7,	// (0x000167ea) popup_note2_wait_window_t4_ParamLimits

0x98c7,	// (0x000167ea) popup_note2_wait_window_t4

0x0003,

0xfc84,	// (0x0001cba7) popup_note2_wait_window_t_ParamLimits

0xfc84,	// (0x0001cba7) popup_note2_wait_window_t

0x98d9,	// (0x000167fc) wait_bar2_pane_ParamLimits

0x98d9,	// (0x000167fc) wait_bar2_pane

0x98f1,	// (0x00016814) popup_snote2_single_text_window_g1_ParamLimits

0x98f1,	// (0x00016814) popup_snote2_single_text_window_g1

0x9919,	// (0x0001683c) popup_snote2_single_text_window_t1_ParamLimits

0x9919,	// (0x0001683c) popup_snote2_single_text_window_t1

0x9965,	// (0x00016888) popup_snote2_single_text_window_t2_ParamLimits

0x9965,	// (0x00016888) popup_snote2_single_text_window_t2

0x99b1,	// (0x000168d4) popup_snote2_single_text_window_t3_ParamLimits

0x99b1,	// (0x000168d4) popup_snote2_single_text_window_t3

0x99f2,	// (0x00016915) popup_snote2_single_text_window_t4_ParamLimits

0x99f2,	// (0x00016915) popup_snote2_single_text_window_t4

0x9a28,	// (0x0001694b) popup_snote2_single_text_window_t5_ParamLimits

0x9a28,	// (0x0001694b) popup_snote2_single_text_window_t5

0x0004,

0xfc8d,	// (0x0001cbb0) popup_snote2_single_text_window_t_ParamLimits

0xfc8d,	// (0x0001cbb0) popup_snote2_single_text_window_t

0x9a53,	// (0x00016976) popup_snote2_single_graphic_window_g1_ParamLimits

0x9a53,	// (0x00016976) popup_snote2_single_graphic_window_g1

0x9a7b,	// (0x0001699e) popup_snote2_single_graphic_window_g2_ParamLimits

0x9a7b,	// (0x0001699e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc98,	// (0x0001cbbb) popup_snote2_single_graphic_window_g_ParamLimits

0xfc98,	// (0x0001cbbb) popup_snote2_single_graphic_window_g

0x9aa3,	// (0x000169c6) popup_snote2_single_graphic_window_t1_ParamLimits

0x9aa3,	// (0x000169c6) popup_snote2_single_graphic_window_t1

0x9aef,	// (0x00016a12) popup_snote2_single_graphic_window_t2_ParamLimits

0x9aef,	// (0x00016a12) popup_snote2_single_graphic_window_t2

0x99b1,	// (0x000168d4) popup_snote2_single_graphic_window_t3_ParamLimits

0x99b1,	// (0x000168d4) popup_snote2_single_graphic_window_t3

0x99f2,	// (0x00016915) popup_snote2_single_graphic_window_t4_ParamLimits

0x99f2,	// (0x00016915) popup_snote2_single_graphic_window_t4

0x9a28,	// (0x0001694b) popup_snote2_single_graphic_window_t5_ParamLimits

0x9a28,	// (0x0001694b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9d,	// (0x0001cbc0) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9d,	// (0x0001cbc0) popup_snote2_single_graphic_window_t

0x8895,	// (0x000157b8) clock_nsta_pane_cp2_t1

0x8895,	// (0x000157b8) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x0001c9e7) clock_nsta_pane_cp2_t

0xabe1,	// (0x00017b04) form_field_data_wide_pane_g1_ParamLimits

0x3996,	// (0x000108b9) form_field_data_wide_pane_g2_ParamLimits

0x3996,	// (0x000108b9) form_field_data_wide_pane_g2

0x3f25,	// (0x00010e48) form_field_data_wide_pane_g3_ParamLimits

0x3f25,	// (0x00010e48) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0001c5b5) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0001c5b5) form_field_data_wide_pane_g

0xc573,	// (0x00019496) grid_touch_3_pane_ParamLimits

0xc573,	// (0x00019496) grid_touch_3_pane

0xcd7d,	// (0x00019ca0) cell_touch_3_pane_ParamLimits

0xcd7d,	// (0x00019ca0) cell_touch_3_pane

0x8bb3,	// (0x00015ad6) cell_touch_3_pane_g1

0x8bb3,	// (0x00015ad6) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x0001ca6c) cell_touch_3_pane_g

0x3546,	// (0x00010469) cont_query_data_pane

0x354e,	// (0x00010471) cont_query_data_pane_cp1

0x9b3b,	// (0x00016a5e) button_value_adjust_pane_cp7

0x9b43,	// (0x00016a66) query_popup_pane_cp3

0x4768,	// (0x0001168b) bg_popup_sub_pane_cp22_ParamLimits

0xba2e,	// (0x00018951) navi_navi_volume_pane_cp2

0xba46,	// (0x00018969) popup_side_volume_key_window_g2

0xba52,	// (0x00018975) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001c647) popup_side_volume_key_window_g

0xba6c,	// (0x0001898f) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001c64e) popup_side_volume_key_window_t

0x4a84,	// (0x000119a7) popup_side_volume_key_window_ParamLimits

0xa87c,	// (0x0001779f) list_double_graphic_pane_g4_ParamLimits

0xa87c,	// (0x0001779f) list_double_graphic_pane_g4

0xc2d9,	// (0x000191fc) list_single_2heading_msg_pane_ParamLimits

0xc2d9,	// (0x000191fc) list_single_2heading_msg_pane

0xb407,	// (0x0001832a) list_single_2heading_msg_pane_g1_ParamLimits

0xb407,	// (0x0001832a) list_single_2heading_msg_pane_g1

0xa6dd,	// (0x00017600) list_single_2heading_msg_pane_g2_ParamLimits

0xa6dd,	// (0x00017600) list_single_2heading_msg_pane_g2

0xb413,	// (0x00018336) list_single_2heading_msg_pane_g3_ParamLimits

0xb413,	// (0x00018336) list_single_2heading_msg_pane_g3

0xb41f,	// (0x00018342) list_single_2heading_msg_pane_g4_ParamLimits

0xb41f,	// (0x00018342) list_single_2heading_msg_pane_g4

0x0003,

0xfca8,	// (0x0001cbcb) list_single_2heading_msg_pane_g_ParamLimits

0xfca8,	// (0x0001cbcb) list_single_2heading_msg_pane_g

0xb437,	// (0x0001835a) list_single_2heading_msg_pane_t1_ParamLimits

0xb437,	// (0x0001835a) list_single_2heading_msg_pane_t1

0xb45f,	// (0x00018382) list_single_2heading_msg_pane_t2_ParamLimits

0xb45f,	// (0x00018382) list_single_2heading_msg_pane_t2

0xb493,	// (0x000183b6) list_single_2heading_msg_pane_t3_ParamLimits

0xb493,	// (0x000183b6) list_single_2heading_msg_pane_t3

0xb4cc,	// (0x000183ef) list_single_2heading_msg_pane_t4_ParamLimits

0xb4cc,	// (0x000183ef) list_single_2heading_msg_pane_t4

0x0003,

0xfcb1,	// (0x0001cbd4) list_single_2heading_msg_pane_t_ParamLimits

0xfcb1,	// (0x0001cbd4) list_single_2heading_msg_pane_t

0x313d,	// (0x00010060) title_pane_g4_ParamLimits

0x313d,	// (0x00010060) title_pane_g4

0xb87e,	// (0x000187a1) title_pane_stacon_g3_ParamLimits

0xb87e,	// (0x000187a1) title_pane_stacon_g3

0x96a8,	// (0x000165cb) list_single_2graphic_im_pane_g4_ParamLimits

0x96a8,	// (0x000165cb) list_single_2graphic_im_pane_g4

0x7ba1,	// (0x00014ac4) popup_side_volume_key_window_cp

0x8021,	// (0x00014f44) main_idle_act2_pane_t1

0xbdca,	// (0x00018ced) toolbar_button_pane_g10

0x394d,	// (0x00010870) popup_toolbar_window_cp1

0x8886,	// (0x000157a9) clock_nsta_pane_cp_t1

0x8886,	// (0x000157a9) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x0001c9e2) clock_nsta_pane_cp_t

0xba2e,	// (0x00018951) navi_navi_volume_pane_cp2_ParamLimits

0xba3a,	// (0x0001895d) popup_side_volume_key_window_g1_ParamLimits

0xba46,	// (0x00018969) popup_side_volume_key_window_g2_ParamLimits

0xba52,	// (0x00018975) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001c647) popup_side_volume_key_window_g_ParamLimits

0xc792,	// (0x000196b5) fep_hwr_aid_pane

0x913a,	// (0x0001605d) bg_fep_hwr_top_pane_g4_ParamLimits

0x8c2e,	// (0x00015b51) fep_hwr_top_pane_g1_ParamLimits

0x8c1c,	// (0x00015b3f) fep_hwr_top_pane_g2_ParamLimits

0xc845,	// (0x00019768) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x0001ca37) fep_hwr_top_pane_g_ParamLimits

0xc85a,	// (0x0001977d) fep_hwr_top_text_pane_ParamLimits

0x79aa,	// (0x000148cd) aid_touch_tab_arrow_arrow_2

0x79a1,	// (0x000148c4) aid_touch_tab_arrow_left_2

0xc7a6,	// (0x000196c9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xc7d9,	// (0x000196fc) fep_hwr_prediction_pane

0x8d61,	// (0x00015c84) fep_vkb_prediction_pane

0xc995,	// (0x000198b8) fep_vkb_side_pane_g3_ParamLimits

0xc995,	// (0x000198b8) fep_vkb_side_pane_g3

0x8def,	// (0x00015d12) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x937b,	// (0x0001629e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x9388,	// (0x000162ab) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbe,	// (0x0001cae1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x9b99,	// (0x00016abc) fep_hwr_prediction_pane_g1

0xcdbe,	// (0x00019ce1) fep_hwr_prediction_pane_g2

0xcdc6,	// (0x00019ce9) fep_hwr_prediction_pane_g3

0xcdce,	// (0x00019cf1) fep_hwr_prediction_pane_g4

0x0003,

0xfcba,	// (0x0001cbdd) fep_hwr_prediction_pane_g

0x9b99,	// (0x00016abc) fep_vkb_prediction_pane_g1

0x9ba3,	// (0x00016ac6) fep_vkb_prediction_pane_g2

0x9bab,	// (0x00016ace) fep_vkb_prediction_pane_g3

0x9bb3,	// (0x00016ad6) fep_vkb_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0001cbe6) fep_vkb_prediction_pane_g

0x82e6,	// (0x00015209) slider_set_pane_g3

0x82fa,	// (0x0001521d) slider_set_pane_g4

0x8312,	// (0x00015235) slider_set_pane_g5

0x82e6,	// (0x00015209) slider_set_pane_g6

0xc158,	// (0x0001907b) slider_set_pane_g7

0x7e0a,	// (0x00014d2d) slider_form_pane_g3

0x7e13,	// (0x00014d36) slider_form_pane_g4

0x7e1b,	// (0x00014d3e) slider_form_pane_g5

0x7e0a,	// (0x00014d2d) slider_form_pane_g6

0xc2be,	// (0x000191e1) slider_form_pane_g7

0x8269,	// (0x0001518c) slider_set_pane_vc_g3

0x8272,	// (0x00015195) slider_set_pane_vc_g4

0x827b,	// (0x0001519e) slider_set_pane_vc_g5

0x8269,	// (0x0001518c) slider_set_pane_vc_g6

0x8284,	// (0x000151a7) slider_set_pane_vc_g7

0x8269,	// (0x0001518c) slider_form_pane_vc_g1

0x8272,	// (0x00015195) slider_form_pane_vc_g2

0x827b,	// (0x0001519e) slider_form_pane_vc_g3

0x8269,	// (0x0001518c) slider_form_pane_vc_g4

0x8622,	// (0x00015545) slider_form_pane_vc_g5

0x0004,

0xfa98,	// (0x0001c9bb) slider_form_pane_vc_g

0x3018,	// (0x0000ff3b) main_idle_act3_pane

0x9bbb,	// (0x00016ade) ai3_links_pane

0xcdd6,	// (0x00019cf9) popup_ai3_data_window_ParamLimits

0xcdd6,	// (0x00019cf9) popup_ai3_data_window

0x3018,	// (0x0000ff3b) grid_ai3_links_pane

0xcdee,	// (0x00019d11) cell_ai3_links_pane_ParamLimits

0xcdee,	// (0x00019d11) cell_ai3_links_pane

0x9bc4,	// (0x00016ae7) bg_popup_sub_pane_cp11

0x9bd1,	// (0x00016af4) cell_ai3_links_pane_g1

0x3018,	// (0x0000ff3b) bg_popup_sub_pane_cp12

0x9bf6,	// (0x00016b19) heading_ai3_data_pane

0x9bfe,	// (0x00016b21) list_ai3_gene_pane

0x9c0a,	// (0x00016b2d) popup_ai3_data_window_g1

0x9c12,	// (0x00016b35) heading_ai3_data_pane_g1

0x9c1a,	// (0x00016b3d) heading_ai3_data_pane_t1

0x9c28,	// (0x00016b4b) list_double_ai3_gene_pane_ParamLimits

0x9c28,	// (0x00016b4b) list_double_ai3_gene_pane

0x9c35,	// (0x00016b58) list_single_ai3_gene_pane_ParamLimits

0x9c35,	// (0x00016b58) list_single_ai3_gene_pane

0x8b78,	// (0x00015a9b) list_highlight_pane_cp7_ParamLimits

0x8b78,	// (0x00015a9b) list_highlight_pane_cp7

0x9c42,	// (0x00016b65) list_single_a13_gene_pane_t1_ParamLimits

0x9c42,	// (0x00016b65) list_single_a13_gene_pane_t1

0x9c59,	// (0x00016b7c) list_single_ai3_gene_pane_g1

0x9c62,	// (0x00016b85) list_single_ai3_gene_pane_g2

0x0001,

0xfccc,	// (0x0001cbef) list_single_ai3_gene_pane_g

0x9c6a,	// (0x00016b8d) list_double_ai3_gene_pane_g1_ParamLimits

0x9c6a,	// (0x00016b8d) list_double_ai3_gene_pane_g1

0x9c76,	// (0x00016b99) list_double_ai3_gene_pane_t1_ParamLimits

0x9c76,	// (0x00016b99) list_double_ai3_gene_pane_t1

0x9c92,	// (0x00016bb5) list_double_ai3_gene_pane_t2_ParamLimits

0x9c92,	// (0x00016bb5) list_double_ai3_gene_pane_t2

0x9ca7,	// (0x00016bca) list_double_ai3_gene_pane_t3_ParamLimits

0x9ca7,	// (0x00016bca) list_double_ai3_gene_pane_t3

0x0002,

0xfcd1,	// (0x0001cbf4) list_double_ai3_gene_pane_t_ParamLimits

0xfcd1,	// (0x0001cbf4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb3ff,	// (0x00018322) aid_size_min_col_2

0xcdaa,	// (0x00019ccd) aid_size_min_msg_ParamLimits

0xcdaa,	// (0x00019ccd) aid_size_min_msg

0xc9a9,	// (0x000198cc) fep_vkb_top_text_pane_g2_ParamLimits

0xc9a9,	// (0x000198cc) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x0001ca67) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x0001ca67) fep_vkb_top_text_pane_g

0x3018,	// (0x0000ff3b) main_hc_apps_shell_pane

0x9cc4,	// (0x00016be7) grid_hc_apps_pane_ParamLimits

0x9cc4,	// (0x00016be7) grid_hc_apps_pane

0x9cd3,	// (0x00016bf6) list_hc_apps_pane

0x9cdb,	// (0x00016bfe) scroll_pane_cp37_ParamLimits

0x9cdb,	// (0x00016bfe) scroll_pane_cp37

0xce02,	// (0x00019d25) cell_hc_apps_pane_ParamLimits

0xce02,	// (0x00019d25) cell_hc_apps_pane

0xce90,	// (0x00019db3) cell_hc_apps_pane_g1_ParamLimits

0xce90,	// (0x00019db3) cell_hc_apps_pane_g1

0x9ce7,	// (0x00016c0a) cell_hc_apps_pane_g2_ParamLimits

0x9ce7,	// (0x00016c0a) cell_hc_apps_pane_g2

0x9d03,	// (0x00016c26) cell_hc_apps_pane_g3_ParamLimits

0x9d03,	// (0x00016c26) cell_hc_apps_pane_g3

0x0002,

0xfcd8,	// (0x0001cbfb) cell_hc_apps_pane_g_ParamLimits

0xfcd8,	// (0x0001cbfb) cell_hc_apps_pane_g

0xcebd,	// (0x00019de0) cell_hc_apps_pane_t1_ParamLimits

0xcebd,	// (0x00019de0) cell_hc_apps_pane_t1

0x3490,	// (0x000103b3) grid_highlight_pane_cp10_ParamLimits

0x3490,	// (0x000103b3) grid_highlight_pane_cp10

0xcefb,	// (0x00019e1e) list_single_hc_apps_pane_ParamLimits

0xcefb,	// (0x00019e1e) list_single_hc_apps_pane

0xcf2b,	// (0x00019e4e) list_single_hc_apps_pane_g1

0xb4f1,	// (0x00018414) list_single_hc_apps_pane_g2

0x0001,

0xfcdf,	// (0x0001cc02) list_single_hc_apps_pane_g

0xb50a,	// (0x0001842d) list_single_hc_apps_pane_g2_copy1

0xb526,	// (0x00018449) list_single_hc_apps_pane_t1

0x31e9,	// (0x0001010c) bg_set_opt_pane_cp_ParamLimits

0x36a8,	// (0x000105cb) setting_slider_pane_t1_ParamLimits

0xb7f8,	// (0x0001871b) setting_slider_pane_t2_ParamLimits

0xb811,	// (0x00018734) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0001c49d) setting_slider_pane_t_ParamLimits

0x36be,	// (0x000105e1) slider_set_pane_ParamLimits

0xbcaf,	// (0x00018bd2) control_pane_g5_ParamLimits

0xbcaf,	// (0x00018bd2) control_pane_g5

0x7dd2,	// (0x00014cf5) slider_set_pane_g1_ParamLimits

0xc14c,	// (0x0001906f) slider_set_pane_g2_ParamLimits

0x82e6,	// (0x00015209) slider_set_pane_g3_ParamLimits

0x82fa,	// (0x0001521d) slider_set_pane_g4_ParamLimits

0x8312,	// (0x00015235) slider_set_pane_g5_ParamLimits

0x82e6,	// (0x00015209) slider_set_pane_g6_ParamLimits

0xc158,	// (0x0001907b) slider_set_pane_g7_ParamLimits

0xf969,	// (0x0001c88c) slider_set_pane_g_ParamLimits

0x31e9,	// (0x0001010c) navi_icon_text_pane_ParamLimits

0x54c5,	// (0x000123e8) aid_fill_nsta_2_ParamLimits

0x54f7,	// (0x0001241a) aid_touch_tab_arrow_left_ParamLimits

0x5503,	// (0x00012426) aid_touch_tab_arrow_right_ParamLimits

0x556d,	// (0x00012490) clock_nsta_pane_ParamLimits

0x7983,	// (0x000148a6) navi_icon_pane_g1_ParamLimits

0x798f,	// (0x000148b2) navi_text_pane_t1_ParamLimits

0x88d6,	// (0x000157f9) navi_icon_text_pane_g1_ParamLimits

0x88e2,	// (0x00015805) navi_icon_text_pane_t1_ParamLimits

0xcf2b,	// (0x00019e4e) list_single_hc_apps_pane_g1_ParamLimits

0xb4f1,	// (0x00018414) list_single_hc_apps_pane_g2_ParamLimits

0xfcdf,	// (0x0001cc02) list_single_hc_apps_pane_g_ParamLimits

0xb50a,	// (0x0001842d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb526,	// (0x00018449) list_single_hc_apps_pane_t1_ParamLimits

0xb72a,	// (0x0001864d) popup_toolbar2_fixed_window_ParamLimits

0xb72a,	// (0x0001864d) popup_toolbar2_fixed_window

0x5401,	// (0x00012324) popup_toolbar2_float_window

0x3018,	// (0x0000ff3b) bg_popup_sub_pane_cp27

0xcf44,	// (0x00019e67) grid_toolbar2_float_pane

0x3018,	// (0x0000ff3b) bg_popup_sub_pane_cp26

0xcf44,	// (0x00019e67) grid_toolbar2_fixed_pane

0xcf4c,	// (0x00019e6f) cell_toolbar2_fixed_pane_ParamLimits

0xcf4c,	// (0x00019e6f) cell_toolbar2_fixed_pane

0xcf5d,	// (0x00019e80) cell_toolbar2_fixed_pane_g1

0xcf66,	// (0x00019e89) toolbar2_fixed_button_pane

0x5954,	// (0x00012877) toolbar2_fixed_button_pane_g1

0x5964,	// (0x00012887) toolbar2_fixed_button_pane_g2

0x595c,	// (0x0001287f) toolbar2_fixed_button_pane_g3

0x5974,	// (0x00012897) toolbar2_fixed_button_pane_g4

0x596c,	// (0x0001288f) toolbar2_fixed_button_pane_g5

0x597c,	// (0x0001289f) toolbar2_fixed_button_pane_g6

0x5984,	// (0x000128a7) toolbar2_fixed_button_pane_g7

0x5994,	// (0x000128b7) toolbar2_fixed_button_pane_g8

0x598c,	// (0x000128af) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x0001c78e) toolbar2_fixed_button_pane_g

0xcf6e,	// (0x00019e91) cell_toolbar2_float_pane_ParamLimits

0xcf6e,	// (0x00019e91) cell_toolbar2_float_pane

0xcf7f,	// (0x00019ea2) cell_toolbar2_float_pane_g1

0xcf66,	// (0x00019e89) toolbar2_fixed_button_pane_cp

0xc962,	// (0x00019885) fep_vkb_accented_list_pane_ParamLimits

0xc962,	// (0x00019885) fep_vkb_accented_list_pane

0xca80,	// (0x000199a3) bg_popup_fep_shadow_pane_g9

0x4c8c,	// (0x00011baf) bg_popup_fep_shadow_pane_cp3

0x41ad,	// (0x000110d0) list_accented_list_pane

0xcf88,	// (0x00019eab) list_single_accented_list_pane_ParamLimits

0xcf88,	// (0x00019eab) list_single_accented_list_pane

0x4c8c,	// (0x00011baf) list_highlight_pane_cp10

0xcf99,	// (0x00019ebc) list_single_accented_list_pane_t1

0x5367,	// (0x0001228a) popup_slider_window_ParamLimits

0x5367,	// (0x0001228a) popup_slider_window

0x9b4b,	// (0x00016a6e) aid_indentation_list_msg

0xd039,	// (0x00019f5c) bg_popup_window_pane_cp19

0xd09d,	// (0x00019fc0) popup_slider_window_g1

0xd0b9,	// (0x00019fdc) popup_slider_window_g2

0xd0d5,	// (0x00019ff8) popup_slider_window_g3

0x0005,

0xfce4,	// (0x0001cc07) popup_slider_window_g

0xd131,	// (0x0001a054) popup_slider_window_t1

0xd1a3,	// (0x0001a0c6) small_volume_slider_vertical_pane

0x8bb3,	// (0x00015ad6) small_volume_slider_vertical_pane_g1

0x8bb3,	// (0x00015ad6) small_volume_slider_vertical_pane_g2

0xd1bf,	// (0x0001a0e2) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf6,	// (0x0001cc19) small_volume_slider_vertical_pane_g

0xb5a8,	// (0x000184cb) area_side_right_pane_ParamLimits

0xb5a8,	// (0x000184cb) area_side_right_pane

0xd1c8,	// (0x0001a0eb) aid_size_side_button_ParamLimits

0xd1c8,	// (0x0001a0eb) aid_size_side_button

0xd1dc,	// (0x0001a0ff) grid_sctrl_middle_pane_ParamLimits

0xd1dc,	// (0x0001a0ff) grid_sctrl_middle_pane

0xd1f8,	// (0x0001a11b) sctrl_sk_bottom_pane

0xd209,	// (0x0001a12c) sctrl_sk_top_pane

0xd21b,	// (0x0001a13e) aid_touch_sctrl_top

0x3490,	// (0x000103b3) bg_sctrl_sk_pane_ParamLimits

0x3490,	// (0x000103b3) bg_sctrl_sk_pane

0xd228,	// (0x0001a14b) sctrl_sk_top_pane_g1

0xd235,	// (0x0001a158) sctrl_sk_top_pane_t1

0xd21b,	// (0x0001a13e) aid_touch_sctrl_bottom

0x3490,	// (0x000103b3) bg_sctrl_sk_pane_cp_ParamLimits

0x3490,	// (0x000103b3) bg_sctrl_sk_pane_cp

0xd250,	// (0x0001a173) sctrl_sk_bottom_pane_g1

0xd235,	// (0x0001a158) sctrl_sk_bottom_pane_t1

0xd259,	// (0x0001a17c) cell_sctrl_middle_pane_ParamLimits

0xd259,	// (0x0001a17c) cell_sctrl_middle_pane

0xd274,	// (0x0001a197) aid_touch_sctrl_middle_ParamLimits

0xd274,	// (0x0001a197) aid_touch_sctrl_middle

0x3eff,	// (0x00010e22) bg_sctrl_middle_pane_ParamLimits

0x3eff,	// (0x00010e22) bg_sctrl_middle_pane

0x8def,	// (0x00015d12) cell_sctrl_middle_pane_g1_ParamLimits

0x8def,	// (0x00015d12) cell_sctrl_middle_pane_g1

0xd285,	// (0x0001a1a8) cell_sctrl_middle_pane_g2_ParamLimits

0xd285,	// (0x0001a1a8) cell_sctrl_middle_pane_g2

0x0001,

0xfd02,	// (0x0001cc25) cell_sctrl_middle_pane_g_ParamLimits

0xfd02,	// (0x0001cc25) cell_sctrl_middle_pane_g

0x5954,	// (0x00012877) bg_sctrl_middle_pane_g1

0x5964,	// (0x00012887) bg_sctrl_middle_pane_g2

0x595c,	// (0x0001287f) bg_sctrl_middle_pane_g3

0x5974,	// (0x00012897) bg_sctrl_middle_pane_g4

0x596c,	// (0x0001288f) bg_sctrl_middle_pane_g5

0x597c,	// (0x0001289f) bg_sctrl_middle_pane_g6

0x5984,	// (0x000128a7) bg_sctrl_middle_pane_g7

0x5994,	// (0x000128b7) bg_sctrl_middle_pane_g8

0x0007,

0xfd07,	// (0x0001cc2a) bg_sctrl_middle_pane_g

0x598c,	// (0x000128af) bg_sctrl_middle_pane_g8_copy1

0x5954,	// (0x00012877) bg_sctrl_sk_pane_g1

0x5964,	// (0x00012887) bg_sctrl_sk_pane_g2

0x595c,	// (0x0001287f) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x0001c78e) bg_sctrl_sk_pane_g

0x3912,	// (0x00010835) aid_size_touch_scroll_bar

0x5974,	// (0x00012897) bg_sctrl_sk_pane_g4

0x596c,	// (0x0001288f) bg_sctrl_sk_pane_g5

0x597c,	// (0x0001289f) bg_sctrl_sk_pane_g6

0x5984,	// (0x000128a7) bg_sctrl_sk_pane_g7

0x5994,	// (0x000128b7) bg_sctrl_sk_pane_g8

0x598c,	// (0x000128af) bg_sctrl_sk_pane_g9

0x509d,	// (0x00011fc0) popup_fep_china_hwr2_fs_candidate_window

0x50a5,	// (0x00011fc8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x50a5,	// (0x00011fc8) popup_fep_china_hwr2_fs_control_window

0x8def,	// (0x00015d12) sctrl_sk_top_pane_g2

0x0001,

0xfcfd,	// (0x0001cc20) sctrl_sk_top_pane_g

0xd29b,	// (0x0001a1be) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd29b,	// (0x0001a1be) aid_fep_china_hwr2_fs_cell

0xd2ac,	// (0x0001a1cf) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd2ac,	// (0x0001a1cf) bg_popup_fep_shadow_pane_cp4

0xd2c3,	// (0x0001a1e6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd2c3,	// (0x0001a1e6) bg_popup_fep_shadow_pane_cp5

0xd2d5,	// (0x0001a1f8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd2d5,	// (0x0001a1f8) popup_fep_china_hwr2_fs_control_bar_grid

0xd2e5,	// (0x0001a208) popup_fep_china_hwr2_fs_control_funtion_grid

0xd2ed,	// (0x0001a210) aid_fep_china_hwr2_fs_candi_cell

0x3018,	// (0x0000ff3b) bg_popup_fep_shadow_pane_cp6

0xd2f7,	// (0x0001a21a) popup_fep_china_hwr2_fs_candidate_grid

0xd2ff,	// (0x0001a222) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd2ff,	// (0x0001a222) cell_fep_china_hwr2_fs_funtion_grid

0x8bb3,	// (0x00015ad6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd317,	// (0x0001a23a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd317,	// (0x0001a23a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd325,	// (0x0001a248) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd325,	// (0x0001a248) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd18,	// (0x0001cc3b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd18,	// (0x0001cc3b) cell_fep_china_hwr2_fs_funtion_grid_g

0xd33b,	// (0x0001a25e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd33b,	// (0x0001a25e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd350,	// (0x0001a273) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd350,	// (0x0001a273) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1d,	// (0x0001cc40) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1d,	// (0x0001cc40) cell_fep_china_hwr2_fs_funtion_grid_t

0xd36c,	// (0x0001a28f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd374,	// (0x0001a297) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd37c,	// (0x0001a29f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd22,	// (0x0001cc45) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd384,	// (0x0001a2a7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd384,	// (0x0001a2a7) cell_fep_china_hwr2_fs_candidate_grid

0xd39d,	// (0x0001a2c0) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd3a5,	// (0x0001a2c8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x8bb3,	// (0x00015ad6) cell_fep_china_hwr2_fs_candidate_grid_g1

0x8bb3,	// (0x00015ad6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x0001ca6c) cell_fep_china_hwr2_fs_candidate_grid_g

0xd3ad,	// (0x0001a2d0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x557a,	// (0x0001249d) clock_nsta_pane_cp_24_ParamLimits

0x557a,	// (0x0001249d) clock_nsta_pane_cp_24

0x55ed,	// (0x00012510) indicator_nsta_pane_cp_24_ParamLimits

0x55ed,	// (0x00012510) indicator_nsta_pane_cp_24

0x788e,	// (0x000147b1) heading_pane_g1

0x0001,

0xf8d0,	// (0x0001c7f3) heading_pane_g

0xc3a8,	// (0x000192cb) grid_sct_catagory_button_pane

0x7842,	// (0x00014765) scroll_pane_cp5_ParamLimits

0x8908,	// (0x0001582b) button_value_adjust_pane_cp5_ParamLimits

0x8908,	// (0x0001582b) button_value_adjust_pane_cp5

0x89c6,	// (0x000158e9) form2_midp_time_pane_ParamLimits

0xd3bb,	// (0x0001a2de) cell_sct_catagory_button_pane_ParamLimits

0xd3bb,	// (0x0001a2de) cell_sct_catagory_button_pane

0x8b78,	// (0x00015a9b) bg_button_pane_cp01_ParamLimits

0x8b78,	// (0x00015a9b) bg_button_pane_cp01

0x8bb3,	// (0x00015ad6) cell_sct_catagory_button_pane_g1

0x539e,	// (0x000122c1) popup_tb_extension_window

0xd3cd,	// (0x0001a2f0) aid_size_cell_ext_ParamLimits

0xd3cd,	// (0x0001a2f0) aid_size_cell_ext

0x3490,	// (0x000103b3) bg_tb_trans_pane_cp1_ParamLimits

0x3490,	// (0x000103b3) bg_tb_trans_pane_cp1

0xd3ed,	// (0x0001a310) grid_tb_ext_pane_ParamLimits

0xd3ed,	// (0x0001a310) grid_tb_ext_pane

0xd413,	// (0x0001a336) cell_tb_ext_pane_ParamLimits

0xd413,	// (0x0001a336) cell_tb_ext_pane

0xd428,	// (0x0001a34b) cell_tb_ext_pane_g1_ParamLimits

0xd428,	// (0x0001a34b) cell_tb_ext_pane_g1

0xd445,	// (0x0001a368) cell_tb_ext_pane_t1

0x3490,	// (0x000103b3) list_highlight_pane_cp11_ParamLimits

0x3490,	// (0x000103b3) list_highlight_pane_cp11

0xb749,	// (0x0001866c) popup_uni_indicator_window_ParamLimits

0xb749,	// (0x0001866c) popup_uni_indicator_window

0x3eff,	// (0x00010e22) bg_popup_sub_pane_cp14

0xd460,	// (0x0001a383) list_uniindi_pane

0xd46c,	// (0x0001a38f) uniindi_top_pane

0x3490,	// (0x000103b3) bg_uniindi_top_pane

0xd48b,	// (0x0001a3ae) uniindi_top_pane_g1

0xd4a1,	// (0x0001a3c4) uniindi_top_pane_g2

0x0003,

0xfd29,	// (0x0001cc4c) uniindi_top_pane_g

0xd4cb,	// (0x0001a3ee) uniindi_top_pane_t1

0xd4f5,	// (0x0001a418) list_single_uniindi_pane_ParamLimits

0xd4f5,	// (0x0001a418) list_single_uniindi_pane

0x8bb3,	// (0x00015ad6) bg_uniindi_top_pane_g1

0xd507,	// (0x0001a42a) list_single_uniindi_pane_g1

0xd51a,	// (0x0001a43d) list_single_uniindi_pane_t1

0x3018,	// (0x0000ff3b) control_bg_pane

0xd53f,	// (0x0001a462) bg_sctrl_sk_pane_cp1

0xd548,	// (0x0001a46b) bg_sctrl_sk_pane_cp2

0xd551,	// (0x0001a474) control_bg_pane_g1

0xd55a,	// (0x0001a47d) control_bg_pane_g2

0x0001,

0xfd32,	// (0x0001cc55) control_bg_pane_g

0x87c9,	// (0x000156ec) cell_indicator_nsta_pane_g1_ParamLimits

0xc5b7,	// (0x000194da) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x0001c9d0) cell_indicator_nsta_pane_g_ParamLimits

0xb1c8,	// (0x000180eb) form2_midp_time_pane_t1_ParamLimits

0x37f0,	// (0x00010713) main_idle_act4_pane_ParamLimits

0x37f0,	// (0x00010713) main_idle_act4_pane

0x539e,	// (0x000122c1) popup_tb_extension_window_ParamLimits

0xd407,	// (0x0001a32a) tb_ext_find_pane_ParamLimits

0xd407,	// (0x0001a32a) tb_ext_find_pane

0xd563,	// (0x0001a486) ai_gene_pane_1_cp1

0x4dc5,	// (0x00011ce8) ai_gene_pane_2_cp1

0xd56b,	// (0x0001a48e) list_single_idle_plugin_calendar_pane

0xd574,	// (0x0001a497) list_single_idle_plugin_notification_pane

0xd57d,	// (0x0001a4a0) list_single_idle_plugin_player_pane

0xd586,	// (0x0001a4a9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd586,	// (0x0001a4a9) list_single_idle_plugin_shortcut_pane

0xd5a8,	// (0x0001a4cb) main_idle_act4_pane_t1

0xd5ba,	// (0x0001a4dd) main_idle_act4_pane_t2

0x0001,

0xfd37,	// (0x0001cc5a) main_idle_act4_pane_t

0xd5cc,	// (0x0001a4ef) middle_sk_idle_act4_pane_ParamLimits

0xd5cc,	// (0x0001a4ef) middle_sk_idle_act4_pane

0xd5e2,	// (0x0001a505) popup_clock_digital_analogue_window_cp2

0xd5fc,	// (0x0001a51f) shortcut_wheel_idle_act4_pane_ParamLimits

0xd5fc,	// (0x0001a51f) shortcut_wheel_idle_act4_pane

0x8bb3,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g1

0x8bb3,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g2

0x8bb3,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g3

0x8bb3,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g4

0x8bb3,	// (0x00015ad6) shortcut_wheel_idle_act4_pane_g5

0xd610,	// (0x0001a533) shortcut_wheel_idle_act4_pane_g6

0xd618,	// (0x0001a53b) shortcut_wheel_idle_act4_pane_g7

0xd620,	// (0x0001a543) shortcut_wheel_idle_act4_pane_g8

0xd628,	// (0x0001a54b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3c,	// (0x0001cc5f) shortcut_wheel_idle_act4_pane_g

0x8def,	// (0x00015d12) middle_sk_idle_act4_pane_g1_ParamLimits

0x8def,	// (0x00015d12) middle_sk_idle_act4_pane_g1

0xd68c,	// (0x0001a5af) middle_sk_idle_act4_pane_g2_ParamLimits

0xd68c,	// (0x0001a5af) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5f,	// (0x0001cc82) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5f,	// (0x0001cc82) middle_sk_idle_act4_pane_g

0xd698,	// (0x0001a5bb) middle_sk_idle_act4_pane_t1_ParamLimits

0xd698,	// (0x0001a5bb) middle_sk_idle_act4_pane_t1

0xd6b5,	// (0x0001a5d8) grid_ai_shortcut_pane_ParamLimits

0xd6b5,	// (0x0001a5d8) grid_ai_shortcut_pane

0xd6ce,	// (0x0001a5f1) list_highlight_pane_cp16_ParamLimits

0xd6ce,	// (0x0001a5f1) list_highlight_pane_cp16

0xd6db,	// (0x0001a5fe) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd6db,	// (0x0001a5fe) list_single_idle_plugin_shortcut_pane_g1

0xd6e7,	// (0x0001a60a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd6e7,	// (0x0001a60a) list_single_idle_plugin_shortcut_pane_g2

0xd6ff,	// (0x0001a622) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd6ff,	// (0x0001a622) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd64,	// (0x0001cc87) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd64,	// (0x0001cc87) list_single_idle_plugin_shortcut_pane_g

0xd712,	// (0x0001a635) cell_ai_shortcut_pane_ParamLimits

0xd712,	// (0x0001a635) cell_ai_shortcut_pane

0xd733,	// (0x0001a656) cell_ai_shortcut_pane_g1_ParamLimits

0xd733,	// (0x0001a656) cell_ai_shortcut_pane_g1

0xd563,	// (0x0001a486) ai_gene_pane_1_cp2

0xd755,	// (0x0001a678) ai_gene_pane_2_cp2

0xd75d,	// (0x0001a680) list_highlight_pane_cp15

0xd766,	// (0x0001a689) list_single_idle_plugin_calendar_pane_g1

0xd75d,	// (0x0001a680) list_highlight_pane_cp17

0xd76e,	// (0x0001a691) list_single_idle_plugin_calendar_pane_g1_copy1

0xd776,	// (0x0001a699) list_single_idle_plugin_player_pane_g1

0x80ad,	// (0x00014fd0) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6b,	// (0x0001cc8e) list_single_idle_plugin_player_pane_g

0xd77e,	// (0x0001a6a1) list_single_idle_plugin_player_pane_t1

0xd78c,	// (0x0001a6af) list_single_idle_plugin_player_pane_t2

0xd79a,	// (0x0001a6bd) list_single_idle_plugin_player_pane_t3

0xd7a8,	// (0x0001a6cb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd70,	// (0x0001cc93) list_single_idle_plugin_player_pane_t

0xd7b6,	// (0x0001a6d9) wait_bar_pane_cp15

0xd7be,	// (0x0001a6e1) grid_ai_notification_pane

0x80ad,	// (0x00014fd0) list_single_idle_plugin_notification_pane_g1

0xd7c7,	// (0x0001a6ea) cell_ai_notification_pane_ParamLimits

0xd7c7,	// (0x0001a6ea) cell_ai_notification_pane

0xd7d4,	// (0x0001a6f7) cell_ai_notification_pane_g1

0xd7dc,	// (0x0001a6ff) cell_ai_notification_pane_t1

0xd7ea,	// (0x0001a70d) tb_ext_find_button_pane

0xd7f2,	// (0x0001a715) tb_ext_find_pane_g1

0xd7fa,	// (0x0001a71d) tb_ext_find_pane_t1

0x46ba,	// (0x000115dd) tb_ext_find_button_pane_g1

0xd808,	// (0x0001a72b) tb_ext_find_button_pane_g2

0x0001,

0xfd79,	// (0x0001cc9c) tb_ext_find_button_pane_g

0xd5a8,	// (0x0001a4cb) main_idle_act4_pane_t1_ParamLimits

0xd5ba,	// (0x0001a4dd) main_idle_act4_pane_t2_ParamLimits

0xfd37,	// (0x0001cc5a) main_idle_act4_pane_t_ParamLimits

0xd5e2,	// (0x0001a505) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd5f0,	// (0x0001a513) sat_plugin_idle_act4_pane_ParamLimits

0xd5f0,	// (0x0001a513) sat_plugin_idle_act4_pane

0xd811,	// (0x0001a734) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd811,	// (0x0001a734) sat_plugin_idle_act4_pane_t1

0xd824,	// (0x0001a747) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd824,	// (0x0001a747) sat_plugin_idle_act4_pane_t2

0xd837,	// (0x0001a75a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd837,	// (0x0001a75a) sat_plugin_idle_act4_pane_t3

0xd84a,	// (0x0001a76d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd84a,	// (0x0001a76d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7e,	// (0x0001cca1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7e,	// (0x0001cca1) sat_plugin_idle_act4_pane_t

0xb6aa,	// (0x000185cd) popup_battery_window_ParamLimits

0xb6aa,	// (0x000185cd) popup_battery_window

0x3490,	// (0x000103b3) bg_popup_sub_pane_cp25_ParamLimits

0x3490,	// (0x000103b3) bg_popup_sub_pane_cp25

0xd85d,	// (0x0001a780) popup_battery_window_g1_ParamLimits

0xd85d,	// (0x0001a780) popup_battery_window_g1

0xd869,	// (0x0001a78c) popup_battery_window_t1_ParamLimits

0xd869,	// (0x0001a78c) popup_battery_window_t1

0xd87b,	// (0x0001a79e) popup_battery_window_t2_ParamLimits

0xd87b,	// (0x0001a79e) popup_battery_window_t2

0x0001,

0xfd87,	// (0x0001ccaa) popup_battery_window_t_ParamLimits

0xfd87,	// (0x0001ccaa) popup_battery_window_t

0x4ca0,	// (0x00011bc3) midp_canvas_pane_ParamLimits

0x4d0f,	// (0x00011c32) midp_keypad_pane_ParamLimits

0x4d0f,	// (0x00011c32) midp_keypad_pane

0x4fff,	// (0x00011f22) main_midp_pane_ParamLimits

0x88a4,	// (0x000157c7) signal_pane_g2_cp_ParamLimits

0xd898,	// (0x0001a7bb) aid_size_cell_midp_keypad_ParamLimits

0xd898,	// (0x0001a7bb) aid_size_cell_midp_keypad

0xd8b2,	// (0x0001a7d5) midp_keyp_game_grid_pane_ParamLimits

0xd8b2,	// (0x0001a7d5) midp_keyp_game_grid_pane

0xd8cc,	// (0x0001a7ef) midp_keyp_rocker_pane_ParamLimits

0xd8cc,	// (0x0001a7ef) midp_keyp_rocker_pane

0xd8f9,	// (0x0001a81c) midp_keyp_sk_left_pane_ParamLimits

0xd8f9,	// (0x0001a81c) midp_keyp_sk_left_pane

0xd951,	// (0x0001a874) midp_keyp_sk_right_pane_ParamLimits

0xd951,	// (0x0001a874) midp_keyp_sk_right_pane

0x3018,	// (0x0000ff3b) bg_button_pane_cp03

0xd9a3,	// (0x0001a8c6) midp_keyp_sk_left_pane_g1

0x3018,	// (0x0000ff3b) bg_button_pane_cp04

0xd9a3,	// (0x0001a8c6) midp_keyp_sk_right_pane_g1

0x8bb3,	// (0x00015ad6) midp_keyp_rocker_pane_g1

0xd9ac,	// (0x0001a8cf) keyp_game_cell_pane_ParamLimits

0xd9ac,	// (0x0001a8cf) keyp_game_cell_pane

0x3018,	// (0x0000ff3b) bg_button_pane_cp02

0xd9bd,	// (0x0001a8e0) keyp_game_cell_pane_g1

0xb6e0,	// (0x00018603) popup_fep_vkb2_window_ParamLimits

0xb6e0,	// (0x00018603) popup_fep_vkb2_window

0xd9d4,	// (0x0001a8f7) aid_size_cell_vkb2_ParamLimits

0xd9d4,	// (0x0001a8f7) aid_size_cell_vkb2

0xda28,	// (0x0001a94b) popup_fep_vkb2_window_g1_ParamLimits

0xda28,	// (0x0001a94b) popup_fep_vkb2_window_g1

0xda70,	// (0x0001a993) vkb2_area_bottom_pane_ParamLimits

0xda70,	// (0x0001a993) vkb2_area_bottom_pane

0xdaa8,	// (0x0001a9cb) vkb2_area_keypad_pane_ParamLimits

0xdaa8,	// (0x0001a9cb) vkb2_area_keypad_pane

0xdae0,	// (0x0001aa03) vkb2_area_top_pane_ParamLimits

0xdae0,	// (0x0001aa03) vkb2_area_top_pane

0xdb50,	// (0x0001aa73) vkb2_top_entry_pane_ParamLimits

0xdb50,	// (0x0001aa73) vkb2_top_entry_pane

0xdb7a,	// (0x0001aa9d) vkb2_top_grid_left_pane_ParamLimits

0xdb7a,	// (0x0001aa9d) vkb2_top_grid_left_pane

0xdb98,	// (0x0001aabb) vkb2_top_grid_right_pane_ParamLimits

0xdb98,	// (0x0001aabb) vkb2_top_grid_right_pane

0xdbb6,	// (0x0001aad9) vkb2_cell_keypad_pane_ParamLimits

0xdbb6,	// (0x0001aad9) vkb2_cell_keypad_pane

0xdc67,	// (0x0001ab8a) vkb2_area_bottom_grid_pane_ParamLimits

0xdc67,	// (0x0001ab8a) vkb2_area_bottom_grid_pane

0xdc8b,	// (0x0001abae) vkb2_area_bottom_pane_g1_ParamLimits

0xdc8b,	// (0x0001abae) vkb2_area_bottom_pane_g1

0xdcaf,	// (0x0001abd2) vkb2_area_bottom_pane_g2_ParamLimits

0xdcaf,	// (0x0001abd2) vkb2_area_bottom_pane_g2

0xdcdd,	// (0x0001ac00) vkb2_area_bottom_pane_g3_ParamLimits

0xdcdd,	// (0x0001ac00) vkb2_area_bottom_pane_g3

0x0002,

0xfd8c,	// (0x0001ccaf) vkb2_area_bottom_pane_g_ParamLimits

0xfd8c,	// (0x0001ccaf) vkb2_area_bottom_pane_g

0xdd2e,	// (0x0001ac51) vkb2_top_cell_left_pane_ParamLimits

0xdd2e,	// (0x0001ac51) vkb2_top_cell_left_pane

0xdd56,	// (0x0001ac79) vkb2_top_entry_pane_g1_ParamLimits

0xdd56,	// (0x0001ac79) vkb2_top_entry_pane_g1

0xdd64,	// (0x0001ac87) vkb2_top_entry_pane_t1_ParamLimits

0xdd64,	// (0x0001ac87) vkb2_top_entry_pane_t1

0xdd96,	// (0x0001acb9) vkb2_top_entry_pane_t2_ParamLimits

0xdd96,	// (0x0001acb9) vkb2_top_entry_pane_t2

0xddc8,	// (0x0001aceb) vkb2_top_entry_pane_t3_ParamLimits

0xddc8,	// (0x0001aceb) vkb2_top_entry_pane_t3

0x0002,

0xfd93,	// (0x0001ccb6) vkb2_top_entry_pane_t_ParamLimits

0xfd93,	// (0x0001ccb6) vkb2_top_entry_pane_t

0xde0b,	// (0x0001ad2e) vkb2_top_grid_right_pane_g1_ParamLimits

0xde0b,	// (0x0001ad2e) vkb2_top_grid_right_pane_g1

0xde21,	// (0x0001ad44) vkb2_top_grid_right_pane_g2_ParamLimits

0xde21,	// (0x0001ad44) vkb2_top_grid_right_pane_g2

0xde39,	// (0x0001ad5c) vkb2_top_grid_right_pane_g3_ParamLimits

0xde39,	// (0x0001ad5c) vkb2_top_grid_right_pane_g3

0xde51,	// (0x0001ad74) vkb2_top_grid_right_pane_g4_ParamLimits

0xde51,	// (0x0001ad74) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9a,	// (0x0001ccbd) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9a,	// (0x0001ccbd) vkb2_top_grid_right_pane_g

0xde67,	// (0x0001ad8a) vkb2_top_cell_left_pane_g1

0xde7e,	// (0x0001ada1) vkb2_cell_keypad_pane_g1_ParamLimits

0xde7e,	// (0x0001ada1) vkb2_cell_keypad_pane_g1

0xde8c,	// (0x0001adaf) vkb2_cell_keypad_pane_t1_ParamLimits

0xde8c,	// (0x0001adaf) vkb2_cell_keypad_pane_t1

0xdea3,	// (0x0001adc6) vkb2_cell_bottom_grid_pane_ParamLimits

0xdea3,	// (0x0001adc6) vkb2_cell_bottom_grid_pane

0xdedc,	// (0x0001adff) vkb2_cell_bottom_grid_pane_g1

0xd630,	// (0x0001a553) aid_call2_pane_cp02

0xd638,	// (0x0001a55b) aid_call_pane_cp02

0xd640,	// (0x0001a563) clock_digital_number_pane_cp10

0xd648,	// (0x0001a56b) clock_digital_number_pane_cp11

0xd650,	// (0x0001a573) clock_digital_number_pane_cp12

0xd658,	// (0x0001a57b) clock_digital_number_pane_cp13

0xd660,	// (0x0001a583) clock_digital_separator_pane_cp10

0x46ba,	// (0x000115dd) popup_clock_digital_analogue_window_cp2_g1

0x46ba,	// (0x000115dd) popup_clock_digital_analogue_window_cp2_g2

0xd668,	// (0x0001a58b) popup_clock_digital_analogue_window_cp2_g3

0x46ba,	// (0x000115dd) popup_clock_digital_analogue_window_cp2_g4

0xd668,	// (0x0001a58b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4f,	// (0x0001cc72) popup_clock_digital_analogue_window_cp2_g

0xd670,	// (0x0001a593) popup_clock_digital_analogue_window_cp2_t1

0xd67e,	// (0x0001a5a1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5a,	// (0x0001cc7d) popup_clock_digital_analogue_window_cp2_t

0x8bb3,	// (0x00015ad6) clock_digital_number_pane_cp10_g1

0x8bb3,	// (0x00015ad6) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x0001ca6c) clock_digital_number_pane_cp10_g

0x8bb3,	// (0x00015ad6) clock_digital_separator_pane_cp10_g1

0x8bb3,	// (0x00015ad6) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x0001ca6c) clock_digital_separator_pane_cp10_g

0xd4ad,	// (0x0001a3d0) uniindi_top_pane_g3

0xd4be,	// (0x0001a3e1) uniindi_top_pane_g4

0xdc21,	// (0x0001ab44) vkb2_row_keypad_pane_ParamLimits

0xdc21,	// (0x0001ab44) vkb2_row_keypad_pane

0xdef8,	// (0x0001ae1b) vkb2_cell_t_keypad_pane_ParamLimits

0xdef8,	// (0x0001ae1b) vkb2_cell_t_keypad_pane

0xdf05,	// (0x0001ae28) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xdf05,	// (0x0001ae28) vkb2_cell_t_keypad_pane_cp08

0xdf15,	// (0x0001ae38) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xdf15,	// (0x0001ae38) vkb2_cell_t_keypad_pane_cp09

0xdf26,	// (0x0001ae49) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xdf26,	// (0x0001ae49) vkb2_cell_t_keypad_pane_cp01

0xdf36,	// (0x0001ae59) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xdf36,	// (0x0001ae59) vkb2_cell_t_keypad_pane_cp02

0xdf46,	// (0x0001ae69) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xdf46,	// (0x0001ae69) vkb2_cell_t_keypad_pane_cp03

0xdf56,	// (0x0001ae79) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xdf56,	// (0x0001ae79) vkb2_cell_t_keypad_pane_cp04

0xdf66,	// (0x0001ae89) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xdf66,	// (0x0001ae89) vkb2_cell_t_keypad_pane_cp05

0xdf76,	// (0x0001ae99) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xdf76,	// (0x0001ae99) vkb2_cell_t_keypad_pane_cp06

0xdf86,	// (0x0001aea9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xdf86,	// (0x0001aea9) vkb2_cell_t_keypad_pane_cp07

0xdf96,	// (0x0001aeb9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xdf96,	// (0x0001aeb9) vkb2_cell_t_keypad_pane_cp10

0x8def,	// (0x00015d12) vkb2_cell_t_keypad_pane_g1

0xdfab,	// (0x0001aece) vkb2_cell_t_keypad_pane_t1

0x3018,	// (0x0000ff3b) popup_grid_graphic2_window

0xdfbd,	// (0x0001aee0) aid_size_cell_graphic2_ParamLimits

0xdfbd,	// (0x0001aee0) aid_size_cell_graphic2

0x8bd4,	// (0x00015af7) bg_popup_window_pane_cp21_ParamLimits

0x8bd4,	// (0x00015af7) bg_popup_window_pane_cp21

0xdfe9,	// (0x0001af0c) graphic2_pages_pane_ParamLimits

0xdfe9,	// (0x0001af0c) graphic2_pages_pane

0xe023,	// (0x0001af46) grid_graphic2_control_pane_ParamLimits

0xe023,	// (0x0001af46) grid_graphic2_control_pane

0xe04b,	// (0x0001af6e) grid_graphic2_pane_ParamLimits

0xe04b,	// (0x0001af6e) grid_graphic2_pane

0xe09b,	// (0x0001afbe) cell_graphic2_pane

0x3018,	// (0x0000ff3b) main_comp_mode_pane

0x9bfe,	// (0x00016b21) list_ai3_gene_pane_ParamLimits

0xd039,	// (0x00019f5c) bg_popup_window_pane_cp19_ParamLimits

0xd045,	// (0x00019f68) bg_touch_area_indi_pane_ParamLimits

0xd045,	// (0x00019f68) bg_touch_area_indi_pane

0xd05b,	// (0x00019f7e) bg_touch_area_indi_pane_cp01_ParamLimits

0xd05b,	// (0x00019f7e) bg_touch_area_indi_pane_cp01

0xd071,	// (0x00019f94) bg_touch_area_indi_pane_cp02_ParamLimits

0xd071,	// (0x00019f94) bg_touch_area_indi_pane_cp02

0xd087,	// (0x00019faa) bg_touch_area_indi_pane_cp03_ParamLimits

0xd087,	// (0x00019faa) bg_touch_area_indi_pane_cp03

0xd09d,	// (0x00019fc0) popup_slider_window_g1_ParamLimits

0xd0b9,	// (0x00019fdc) popup_slider_window_g2_ParamLimits

0xd0d5,	// (0x00019ff8) popup_slider_window_g3_ParamLimits

0xfce4,	// (0x0001cc07) popup_slider_window_g_ParamLimits

0xd131,	// (0x0001a054) popup_slider_window_t1_ParamLimits

0xd1a3,	// (0x0001a0c6) small_volume_slider_vertical_pane_ParamLimits

0xe09b,	// (0x0001afbe) cell_graphic2_pane_ParamLimits

0xe0d8,	// (0x0001affb) bg_button_pane_cp10_ParamLimits

0xe0d8,	// (0x0001affb) bg_button_pane_cp10

0xe0e9,	// (0x0001b00c) bg_button_pane_cp11_ParamLimits

0xe0e9,	// (0x0001b00c) bg_button_pane_cp11

0xe0fa,	// (0x0001b01d) graphic2_pages_pane_g1_ParamLimits

0xe0fa,	// (0x0001b01d) graphic2_pages_pane_g1

0xe10d,	// (0x0001b030) graphic2_pages_pane_g2_ParamLimits

0xe10d,	// (0x0001b030) graphic2_pages_pane_g2

0x0001,

0xfda8,	// (0x0001cccb) graphic2_pages_pane_g_ParamLimits

0xfda8,	// (0x0001cccb) graphic2_pages_pane_g

0xe123,	// (0x0001b046) graphic2_pages_pane_t1_ParamLimits

0xe123,	// (0x0001b046) graphic2_pages_pane_t1

0xe139,	// (0x0001b05c) cell_graphic2_control_pane_ParamLimits

0xe139,	// (0x0001b05c) cell_graphic2_control_pane

0xe153,	// (0x0001b076) cell_graphic2_pane_g1_ParamLimits

0xe153,	// (0x0001b076) cell_graphic2_pane_g1

0xe160,	// (0x0001b083) cell_graphic2_pane_g2_ParamLimits

0xe160,	// (0x0001b083) cell_graphic2_pane_g2

0xe16d,	// (0x0001b090) cell_graphic2_pane_g3_ParamLimits

0xe16d,	// (0x0001b090) cell_graphic2_pane_g3

0xe17a,	// (0x0001b09d) cell_graphic2_pane_g4_ParamLimits

0xe17a,	// (0x0001b09d) cell_graphic2_pane_g4

0xe187,	// (0x0001b0aa) cell_graphic2_pane_g5_ParamLimits

0xe187,	// (0x0001b0aa) cell_graphic2_pane_g5

0x0004,

0xfdad,	// (0x0001ccd0) cell_graphic2_pane_g_ParamLimits

0xfdad,	// (0x0001ccd0) cell_graphic2_pane_g

0xe1a2,	// (0x0001b0c5) cell_graphic2_pane_t1_ParamLimits

0xe1a2,	// (0x0001b0c5) cell_graphic2_pane_t1

0x5a76,	// (0x00012999) grid_highlight_pane_cp11_ParamLimits

0x5a76,	// (0x00012999) grid_highlight_pane_cp11

0x3eff,	// (0x00010e22) bg_button_pane_cp05

0xe1cb,	// (0x0001b0ee) cell_graphic2_control_pane_g1

0x8bb3,	// (0x00015ad6) bg_touch_area_indi_pane_g1

0xe1d8,	// (0x0001b0fb) aid_cmod_rocker_key_size

0xe1e2,	// (0x0001b105) aid_cmode_itu_key_size

0xe1ec,	// (0x0001b10f) main_cmode_video_pane

0xe1f4,	// (0x0001b117) main_comp_mode_itu_pane

0xe1fe,	// (0x0001b121) main_comp_mode_rocker_pane

0xe206,	// (0x0001b129) cell_cmode_rocker_pane_ParamLimits

0xe206,	// (0x0001b129) cell_cmode_rocker_pane

0xe218,	// (0x0001b13b) cell_cmode_itu_pane_ParamLimits

0xe218,	// (0x0001b13b) cell_cmode_itu_pane

0x3eff,	// (0x00010e22) bg_button_pane_cp06_ParamLimits

0x3eff,	// (0x00010e22) bg_button_pane_cp06

0x8def,	// (0x00015d12) cell_cmode_rocker_pane_g1_ParamLimits

0x8def,	// (0x00015d12) cell_cmode_rocker_pane_g1

0xd317,	// (0x0001a23a) cell_cmode_rocker_pane_g2_ParamLimits

0xd317,	// (0x0001a23a) cell_cmode_rocker_pane_g2

0x0001,

0xfdbd,	// (0x0001cce0) cell_cmode_rocker_pane_g_ParamLimits

0xfdbd,	// (0x0001cce0) cell_cmode_rocker_pane_g

0x3018,	// (0x0000ff3b) bg_button_pane_cp07

0xe22d,	// (0x0001b150) cell_cmode_itu_pane_g1

0xe236,	// (0x0001b159) cell_cmode_itu_pane_t1

0xe244,	// (0x0001b167) cell_cmode_itu_pane_t2

0x0001,

0xfdc2,	// (0x0001cce5) cell_cmode_itu_pane_t

0xd52f,	// (0x0001a452) aid_touch_ctrl_left

0xd537,	// (0x0001a45a) aid_touch_ctrl_right

0x3018,	// (0x0000ff3b) compa_mode_pane

0xe252,	// (0x0001b175) aid_cmod_rocker_key_size_cp

0xe25c,	// (0x0001b17f) aid_cmode_itu_key_size_cp

0xe266,	// (0x0001b189) compa_mode_pane_g1

0xe26e,	// (0x0001b191) compa_mode_pane_g2

0xe276,	// (0x0001b199) compa_mode_pane_g3

0x0002,

0xfdc7,	// (0x0001ccea) compa_mode_pane_g

0xe27e,	// (0x0001b1a1) main_comp_mode_itu_pane_cp

0xe286,	// (0x0001b1a9) main_comp_mode_rocker_pane_cp

0xe28e,	// (0x0001b1b1) cell_cmode_itu_pane_cp_ParamLimits

0xe28e,	// (0x0001b1b1) cell_cmode_itu_pane_cp

0xe2a3,	// (0x0001b1c6) cell_cmode_rocker_pane_cp_ParamLimits

0xe2a3,	// (0x0001b1c6) cell_cmode_rocker_pane_cp

0x3eff,	// (0x00010e22) bg_button_pane_cp06_cp_ParamLimits

0x3eff,	// (0x00010e22) bg_button_pane_cp06_cp

0x8def,	// (0x00015d12) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x8def,	// (0x00015d12) cell_cmode_rocker_pane_g1_cp

0x8bb3,	// (0x00015ad6) cell_cmode_rocker_pane_g2_cp

0x3018,	// (0x0000ff3b) bg_button_pane_cp07_cp

0xe2b5,	// (0x0001b1d8) cell_cmode_itu_pane_g1_cp

0xe2be,	// (0x0001b1e1) cell_cmode_itu_pane_t1_cp

0xe2cc,	// (0x0001b1ef) cell_cmode_itu_pane_t2_cp

0xc2b6,	// (0x000191d9) settings_code_pane_cp2

0x31e9,	// (0x0001010c) bg_popup_window_pane_cp3_ParamLimits

0x3668,	// (0x0001058b) heading_pane_cp3_ParamLimits

0x3674,	// (0x00010597) listscroll_popup_graphic_pane_ParamLimits

0xc792,	// (0x000196b5) fep_hwr_aid_pane_ParamLimits

0xd21b,	// (0x0001a13e) aid_touch_sctrl_top_ParamLimits

0xd228,	// (0x0001a14b) sctrl_sk_top_pane_g1_ParamLimits

0x8def,	// (0x00015d12) sctrl_sk_top_pane_g2_ParamLimits

0xfcfd,	// (0x0001cc20) sctrl_sk_top_pane_g_ParamLimits

0xd235,	// (0x0001a158) sctrl_sk_top_pane_t1_ParamLimits

0xd21b,	// (0x0001a13e) aid_touch_sctrl_bottom_ParamLimits

0xd235,	// (0x0001a158) sctrl_sk_bottom_pane_t1_ParamLimits

0xd479,	// (0x0001a39c) aid_area_touch_clock

0xdb18,	// (0x0001aa3b) aid_vkb2_area_top_pane_cell_ParamLimits

0xdb18,	// (0x0001aa3b) aid_vkb2_area_top_pane_cell

0xdc43,	// (0x0001ab66) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xdc43,	// (0x0001ab66) aid_vkb2_area_bottom_pane_cell

0xdd4e,	// (0x0001ac71) popup_char_count_window

0xe2da,	// (0x0001b1fd) popup_char_count_window_g1

0xe2e3,	// (0x0001b206) popup_char_count_window_g2

0xe2ec,	// (0x0001b20f) popup_char_count_window_g3

0x0002,

0xfdce,	// (0x0001ccf1) popup_char_count_window_g

0xe2f5,	// (0x0001b218) popup_char_count_window_t1

0xda06,	// (0x0001a929) popup_fep_char_preview_window_ParamLimits

0xda06,	// (0x0001a929) popup_fep_char_preview_window

0xdb36,	// (0x0001aa59) vkb2_top_candi_pane_ParamLimits

0xdb36,	// (0x0001aa59) vkb2_top_candi_pane

0xe303,	// (0x0001b226) cell_vkb2_top_candi_pane_ParamLimits

0xe303,	// (0x0001b226) cell_vkb2_top_candi_pane

0x6013,	// (0x00012f36) bg_popup_fep_char_preview_window_ParamLimits

0x6013,	// (0x00012f36) bg_popup_fep_char_preview_window

0xe33c,	// (0x0001b25f) popup_fep_char_preview_window_t1_ParamLimits

0xe33c,	// (0x0001b25f) popup_fep_char_preview_window_t1

0xe376,	// (0x0001b299) bg_popup_fep_char_preview_window_g1

0xe37e,	// (0x0001b2a1) bg_popup_fep_char_preview_window_g2

0xe386,	// (0x0001b2a9) bg_popup_fep_char_preview_window_g3

0xe38e,	// (0x0001b2b1) bg_popup_fep_char_preview_window_g4

0xe396,	// (0x0001b2b9) bg_popup_fep_char_preview_window_g5

0xe39e,	// (0x0001b2c1) bg_popup_fep_char_preview_window_g6

0xe3a6,	// (0x0001b2c9) bg_popup_fep_char_preview_window_g7

0xe3ae,	// (0x0001b2d1) bg_popup_fep_char_preview_window_g8

0xe3b6,	// (0x0001b2d9) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd5,	// (0x0001ccf8) bg_popup_fep_char_preview_window_g

0x8def,	// (0x00015d12) cell_vkb2_top_candi_pane_g1_ParamLimits

0x8def,	// (0x00015d12) cell_vkb2_top_candi_pane_g1

0x90f8,	// (0x0001601b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x90f8,	// (0x0001601b) cell_vkb2_top_candi_pane_g2

0x9119,	// (0x0001603c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9119,	// (0x0001603c) cell_vkb2_top_candi_pane_g3

0xe3be,	// (0x0001b2e1) cell_vkb2_top_candi_pane_g4_ParamLimits

0xe3be,	// (0x0001b2e1) cell_vkb2_top_candi_pane_g4

0xe3df,	// (0x0001b302) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3df,	// (0x0001b302) cell_vkb2_top_candi_pane_g5

0xd317,	// (0x0001a23a) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd317,	// (0x0001a23a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde8,	// (0x0001cd0b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde8,	// (0x0001cd0b) cell_vkb2_top_candi_pane_g

0xe400,	// (0x0001b323) cell_vkb2_top_candi_pane_t1

0x82d2,	// (0x000151f5) aid_size_touch_slider_mark_ParamLimits

0x82d2,	// (0x000151f5) aid_size_touch_slider_mark

0xe017,	// (0x0001af3a) grid_graphic2_catg_pane_ParamLimits

0xe017,	// (0x0001af3a) grid_graphic2_catg_pane

0xe077,	// (0x0001af9a) popup_grid_graphic2_window_t1_ParamLimits

0xe077,	// (0x0001af9a) popup_grid_graphic2_window_t1

0xe089,	// (0x0001afac) popup_grid_graphic2_window_t2_ParamLimits

0xe089,	// (0x0001afac) popup_grid_graphic2_window_t2

0x0001,

0xfda3,	// (0x0001ccc6) popup_grid_graphic2_window_t_ParamLimits

0xfda3,	// (0x0001ccc6) popup_grid_graphic2_window_t

0x3eff,	// (0x00010e22) bg_button_pane_cp05_ParamLimits

0xe1cb,	// (0x0001b0ee) cell_graphic2_control_pane_g1_ParamLimits

0xe416,	// (0x0001b339) cell_graphic2_catg_pane_ParamLimits

0xe416,	// (0x0001b339) cell_graphic2_catg_pane

0x3018,	// (0x0000ff3b) bg_button_pane_cp12

0xe428,	// (0x0001b34b) cell_graphic2_catg_pane_g1

0xd445,	// (0x0001a368) cell_tb_ext_pane_t1_ParamLimits

0xddde,	// (0x0001ad01) vkb2_top_cell_right_narrow_pane_ParamLimits

0xddde,	// (0x0001ad01) vkb2_top_cell_right_narrow_pane

0xddf6,	// (0x0001ad19) vkb2_top_cell_right_wide_pane_ParamLimits

0xddf6,	// (0x0001ad19) vkb2_top_cell_right_wide_pane

0x8bd4,	// (0x00015af7) bg_vkb2_func_pane_ParamLimits

0x8bd4,	// (0x00015af7) bg_vkb2_func_pane

0xde67,	// (0x0001ad8a) vkb2_top_cell_left_pane_g1_ParamLimits

0x8bd4,	// (0x00015af7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8bd4,	// (0x00015af7) bg_vkb2_fuc_pane_cp03

0xdedc,	// (0x0001adff) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5964,	// (0x00012887) bg_vkb2_func_pane_g1

0x595c,	// (0x0001287f) bg_vkb2_func_pane_g2

0x596c,	// (0x0001288f) bg_vkb2_func_pane_g3

0x5974,	// (0x00012897) bg_vkb2_func_pane_g4

0x597c,	// (0x0001289f) bg_vkb2_func_pane_g5

0x5984,	// (0x000128a7) bg_vkb2_func_pane_g6

0x5994,	// (0x000128b7) bg_vkb2_func_pane_g7

0x598c,	// (0x000128af) bg_vkb2_func_pane_g8

0x5954,	// (0x00012877) bg_vkb2_func_pane_g9

0x0008,

0xfdf5,	// (0x0001cd18) bg_vkb2_func_pane_g

0x8bd4,	// (0x00015af7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8bd4,	// (0x00015af7) bg_vkb2_fuc_pane_cp01

0xde67,	// (0x0001ad8a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xde67,	// (0x0001ad8a) vkb2_top_cell_right_wide_pane_g1

0x8bd4,	// (0x00015af7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8bd4,	// (0x00015af7) bg_vkb2_fuc_pane_cp02

0xdedc,	// (0x0001adff) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xdedc,	// (0x0001adff) vkb2_top_cell_right_narrow_pane_g1

0xcfcb,	// (0x00019eee) aid_touch_area_decrease_ParamLimits

0xcfcb,	// (0x00019eee) aid_touch_area_decrease

0xcfe3,	// (0x00019f06) aid_touch_area_increase_ParamLimits

0xcfe3,	// (0x00019f06) aid_touch_area_increase

0xcfef,	// (0x00019f12) aid_touch_area_mute_ParamLimits

0xcfef,	// (0x00019f12) aid_touch_area_mute

0xd00b,	// (0x00019f2e) aid_touch_area_slider_ParamLimits

0xd00b,	// (0x00019f2e) aid_touch_area_slider

0xd0f1,	// (0x0001a014) popup_slider_window_g4_ParamLimits

0xd0f1,	// (0x0001a014) popup_slider_window_g4

0xd0fd,	// (0x0001a020) popup_slider_window_g5_ParamLimits

0xd0fd,	// (0x0001a020) popup_slider_window_g5

0xd11f,	// (0x0001a042) popup_slider_window_g6_ParamLimits

0xd11f,	// (0x0001a042) popup_slider_window_g6

0xd15d,	// (0x0001a080) popup_slider_window_t2_ParamLimits

0xd15d,	// (0x0001a080) popup_slider_window_t2

0x0001,

0xfcf1,	// (0x0001cc14) popup_slider_window_t_ParamLimits

0xfcf1,	// (0x0001cc14) popup_slider_window_t

0xd175,	// (0x0001a098) slider_pane_ParamLimits

0xd175,	// (0x0001a098) slider_pane

0xe431,	// (0x0001b354) slider_pane_g1_ParamLimits

0xe431,	// (0x0001b354) slider_pane_g1

0xe445,	// (0x0001b368) slider_pane_g2_ParamLimits

0xe445,	// (0x0001b368) slider_pane_g2

0xe45b,	// (0x0001b37e) slider_pane_g3_ParamLimits

0xe45b,	// (0x0001b37e) slider_pane_g3

0x0003,

0xfe08,	// (0x0001cd2b) slider_pane_g_ParamLimits

0xfe08,	// (0x0001cd2b) slider_pane_g

0x53ee,	// (0x00012311) popup_tb_float_extension_window_ParamLimits

0x53ee,	// (0x00012311) popup_tb_float_extension_window

0xe487,	// (0x0001b3aa) aid_size_cell_tb_float_ext

0x3018,	// (0x0000ff3b) bg_popup_sub_window_cp28

0xe492,	// (0x0001b3b5) grid_tb_float_ext_pane

0xe49a,	// (0x0001b3bd) cell_tb_float_ext_pane_ParamLimits

0xe49a,	// (0x0001b3bd) cell_tb_float_ext_pane

0xe4b2,	// (0x0001b3d5) cell_tb_float_ext_pane_g1

0xe4bb,	// (0x0001b3de) grid_highlight_pane_cp12

0xc8bf,	// (0x000197e2) cell_last_hwr_side_pane_ParamLimits

0xc8bf,	// (0x000197e2) cell_last_hwr_side_pane

0x8bb3,	// (0x00015ad6) cell_last_hwr_side_pane_g1

0xe4c4,	// (0x0001b3e7) cell_last_hwr_side_pane_g2

0x0001,

0xfe11,	// (0x0001cd34) cell_last_hwr_side_pane_g

0xdd0b,	// (0x0001ac2e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xdd0b,	// (0x0001ac2e) vkb2_area_bottom_space_btn_pane

0x8def,	// (0x00015d12) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfab,	// (0x0001aece) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xe400,	// (0x0001b323) cell_vkb2_top_candi_pane_t1_ParamLimits

0xe4cd,	// (0x0001b3f0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xe4cd,	// (0x0001b3f0) vkb2_area_bottom_space_btn_pane_g1

0xe503,	// (0x0001b426) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xe503,	// (0x0001b426) vkb2_area_bottom_space_btn_pane_g2

0xe539,	// (0x0001b45c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xe539,	// (0x0001b45c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe16,	// (0x0001cd39) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe16,	// (0x0001cd39) vkb2_area_bottom_space_btn_pane_g

0xc833,	// (0x00019756) cel_fep_hwr_func_pane_ParamLimits

0xc833,	// (0x00019756) cel_fep_hwr_func_pane

0xc86f,	// (0x00019792) cell_hwr_side_button_pane_ParamLimits

0xc86f,	// (0x00019792) cell_hwr_side_button_pane

0xd479,	// (0x0001a39c) aid_area_touch_clock_ParamLimits

0x3490,	// (0x000103b3) bg_uniindi_top_pane_ParamLimits

0xd48b,	// (0x0001a3ae) uniindi_top_pane_g1_ParamLimits

0xd4a1,	// (0x0001a3c4) uniindi_top_pane_g2_ParamLimits

0xd4ad,	// (0x0001a3d0) uniindi_top_pane_g3_ParamLimits

0xd4be,	// (0x0001a3e1) uniindi_top_pane_g4_ParamLimits

0xfd29,	// (0x0001cc4c) uniindi_top_pane_g_ParamLimits

0xd4cb,	// (0x0001a3ee) uniindi_top_pane_t1_ParamLimits

0x3490,	// (0x000103b3) bg_vkb2_func_pane_cp01_ParamLimits

0x3490,	// (0x000103b3) bg_vkb2_func_pane_cp01

0xe57f,	// (0x0001b4a2) cel_fep_hwr_func_pane_g1_ParamLimits

0xe57f,	// (0x0001b4a2) cel_fep_hwr_func_pane_g1

0x3490,	// (0x000103b3) bg_vkb2_func_pane_cp02_ParamLimits

0x3490,	// (0x000103b3) bg_vkb2_func_pane_cp02

0xe57f,	// (0x0001b4a2) cell_hwr_side_button_pane_g1_ParamLimits

0xe57f,	// (0x0001b4a2) cell_hwr_side_button_pane_g1

0x57e8,	// (0x0001270b) status_pane_g4_ParamLimits

0x57e8,	// (0x0001270b) status_pane_g4

0x5800,	// (0x00012723) status_pane_t1

0x8a41,	// (0x00015964) form2_midp_gauge_slider_cont_pane

0x8a49,	// (0x0001596c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc6f6,	// (0x00019619) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc708,	// (0x0001962b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x0001ca1f) form2_midp_gauge_slider_pane_t_ParamLimits

0x8a5b,	// (0x0001597e) form2_midp_slider_pane_ParamLimits

0xd9c6,	// (0x0001a8e9) aid_size_cell_func_vkb2_ParamLimits

0xd9c6,	// (0x0001a8e9) aid_size_cell_func_vkb2

0xe473,	// (0x0001b396) slider_pane_g4_ParamLimits

0xe473,	// (0x0001b396) slider_pane_g4

0xe58d,	// (0x0001b4b0) form2_midp_gauge_slider_pane_t2_cp01

0xe59b,	// (0x0001b4be) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe59b,	// (0x0001b4be) form2_midp_gauge_slider_pane_t3_cp01

0xe5b8,	// (0x0001b4db) form2_midp_slider_pane_cp01

0x3018,	// (0x0000ff3b) navi_smil_pane

0xe5ec,	// (0x0001b50f) navi_smil_pane_g1

0xe5f4,	// (0x0001b517) navi_smil_pane_t1

0xe5c1,	// (0x0001b4e4) form2_midp_slider_pane_g1

0xe5ca,	// (0x0001b4ed) form2_midp_slider_pane_g2

0xe5d2,	// (0x0001b4f5) form2_midp_slider_pane_g3

0xe5c1,	// (0x0001b4e4) form2_midp_slider_pane_g4

0xe5da,	// (0x0001b4fd) form2_midp_slider_pane_g5

0x0004,

0xfe1f,	// (0x0001cd42) form2_midp_slider_pane_g

0xe56f,	// (0x0001b492) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xe56f,	// (0x0001b492) vkb2_area_bottom_space_btn_pane_g4

0x562a,	// (0x0001254d) lc0_navi_pane_ParamLimits

0x562a,	// (0x0001254d) lc0_navi_pane

0x56a0,	// (0x000125c3) lc0_stat_indi_pane_ParamLimits

0x56a0,	// (0x000125c3) lc0_stat_indi_pane

0x56b7,	// (0x000125da) ls0_title_pane_ParamLimits

0x56b7,	// (0x000125da) ls0_title_pane

0x3eff,	// (0x00010e22) bg_popup_sub_pane_cp14_ParamLimits

0xd460,	// (0x0001a383) list_uniindi_pane_ParamLimits

0xd46c,	// (0x0001a38f) uniindi_top_pane_ParamLimits

0xd507,	// (0x0001a42a) list_single_uniindi_pane_g1_ParamLimits

0xd51a,	// (0x0001a43d) list_single_uniindi_pane_t1_ParamLimits

0xe602,	// (0x0001b525) lc0_stat_clock_pane_ParamLimits

0xe602,	// (0x0001b525) lc0_stat_clock_pane

0xe60f,	// (0x0001b532) lc0_stat_indi_pane_g1_ParamLimits

0xe60f,	// (0x0001b532) lc0_stat_indi_pane_g1

0xe61c,	// (0x0001b53f) lc0_stat_indi_pane_g2_ParamLimits

0xe61c,	// (0x0001b53f) lc0_stat_indi_pane_g2

0x0001,

0xfe2a,	// (0x0001cd4d) lc0_stat_indi_pane_g_ParamLimits

0xfe2a,	// (0x0001cd4d) lc0_stat_indi_pane_g

0xe629,	// (0x0001b54c) lc0_uni_indicator_pane_ParamLimits

0xe629,	// (0x0001b54c) lc0_uni_indicator_pane

0xe636,	// (0x0001b559) ls0_title_pane_g1_ParamLimits

0xe636,	// (0x0001b559) ls0_title_pane_g1

0xe64a,	// (0x0001b56d) ls0_title_pane_t1_ParamLimits

0xe64a,	// (0x0001b56d) ls0_title_pane_t1

0xe680,	// (0x0001b5a3) lc0_uni_indicator_pane_g1_ParamLimits

0xe680,	// (0x0001b5a3) lc0_uni_indicator_pane_g1

0xe692,	// (0x0001b5b5) lc0_stat_clock_pane_t1

0x3018,	// (0x0000ff3b) main_ai5_pane

0xe6a0,	// (0x0001b5c3) ai5_sk_pane_ParamLimits

0xe6a0,	// (0x0001b5c3) ai5_sk_pane

0xe6ad,	// (0x0001b5d0) cell_ai5_widget_pane_ParamLimits

0xe6ad,	// (0x0001b5d0) cell_ai5_widget_pane

0xe706,	// (0x0001b629) aid_size_cell_widget_grid

0xe718,	// (0x0001b63b) bg_ai5_widget_pane_ParamLimits

0xe718,	// (0x0001b63b) bg_ai5_widget_pane

0xe740,	// (0x0001b663) cell_ai5_widget_pane_g2

0xe750,	// (0x0001b673) cell_ai5_widget_pane_g3

0xe76f,	// (0x0001b692) cell_ai5_widget_pane_g4

0xe77b,	// (0x0001b69e) cell_ai5_widget_pane_g5

0xe787,	// (0x0001b6aa) cell_ai5_widget_pane_g6

0xe793,	// (0x0001b6b6) cell_ai5_widget_pane_g7

0xe7db,	// (0x0001b6fe) cell_ai5_widget_pane_t1_ParamLimits

0xe7db,	// (0x0001b6fe) cell_ai5_widget_pane_t1

0xe7f8,	// (0x0001b71b) cell_ai5_widget_pane_t2_ParamLimits

0xe7f8,	// (0x0001b71b) cell_ai5_widget_pane_t2

0xe810,	// (0x0001b733) cell_ai5_widget_pane_t3_ParamLimits

0xe810,	// (0x0001b733) cell_ai5_widget_pane_t3

0xe828,	// (0x0001b74b) cell_ai5_widget_pane_t4_ParamLimits

0xe828,	// (0x0001b74b) cell_ai5_widget_pane_t4

0xe842,	// (0x0001b765) cell_ai5_widget_pane_t5_ParamLimits

0xe842,	// (0x0001b765) cell_ai5_widget_pane_t5

0xe861,	// (0x0001b784) cell_ai5_widget_pane_t6_ParamLimits

0xe861,	// (0x0001b784) cell_ai5_widget_pane_t6

0xe873,	// (0x0001b796) cell_ai5_widget_pane_t7_ParamLimits

0xe873,	// (0x0001b796) cell_ai5_widget_pane_t7

0xe88c,	// (0x0001b7af) cell_ai5_widget_pane_t8_ParamLimits

0xe88c,	// (0x0001b7af) cell_ai5_widget_pane_t8

0x0009,

0xfe44,	// (0x0001cd67) cell_ai5_widget_pane_t_ParamLimits

0xfe44,	// (0x0001cd67) cell_ai5_widget_pane_t

0xe8d7,	// (0x0001b7fa) grid_ai5_widget_pane

0x3eff,	// (0x00010e22) highlight_cell_ai5_widget_pane_ParamLimits

0x3eff,	// (0x00010e22) highlight_cell_ai5_widget_pane

0xe8eb,	// (0x0001b80e) ai5_sk_left_pane

0xe8f5,	// (0x0001b818) ai5_sk_middle_pane

0xe8ff,	// (0x0001b822) ai5_sk_right_pane

0xe909,	// (0x0001b82c) bg_ai5_widget_pane_g1_ParamLimits

0xe909,	// (0x0001b82c) bg_ai5_widget_pane_g1

0xe915,	// (0x0001b838) bg_ai5_widget_pane_g2_ParamLimits

0xe915,	// (0x0001b838) bg_ai5_widget_pane_g2

0xe921,	// (0x0001b844) bg_ai5_widget_pane_g3_ParamLimits

0xe921,	// (0x0001b844) bg_ai5_widget_pane_g3

0xe92d,	// (0x0001b850) bg_ai5_widget_pane_g4_ParamLimits

0xe92d,	// (0x0001b850) bg_ai5_widget_pane_g4

0xe939,	// (0x0001b85c) bg_ai5_widget_pane_g5_ParamLimits

0xe939,	// (0x0001b85c) bg_ai5_widget_pane_g5

0xe945,	// (0x0001b868) bg_ai5_widget_pane_g6_ParamLimits

0xe945,	// (0x0001b868) bg_ai5_widget_pane_g6

0xe951,	// (0x0001b874) bg_ai5_widget_pane_g7_ParamLimits

0xe951,	// (0x0001b874) bg_ai5_widget_pane_g7

0xe95d,	// (0x0001b880) bg_ai5_widget_pane_g8_ParamLimits

0xe95d,	// (0x0001b880) bg_ai5_widget_pane_g8

0xe969,	// (0x0001b88c) bg_ai5_widget_pane_g9_ParamLimits

0xe969,	// (0x0001b88c) bg_ai5_widget_pane_g9

0x0008,

0xfe59,	// (0x0001cd7c) bg_ai5_widget_pane_g_ParamLimits

0xfe59,	// (0x0001cd7c) bg_ai5_widget_pane_g

0xe99b,	// (0x0001b8be) cell_shortcut_ai5_widget_pane_ParamLimits

0xe99b,	// (0x0001b8be) cell_shortcut_ai5_widget_pane

0x32c9,	// (0x000101ec) bg_cell_shortcut_ai5_widget_pane

0xe9a7,	// (0x0001b8ca) cell_grid_ai5_widget_pane_g1

0xe9b0,	// (0x0001b8d3) highlight_cell_shortcut_ai5_widget_pane

0x595c,	// (0x0001287f) ai5_sk_left_pane_g1

0xe9b8,	// (0x0001b8db) ai5_sk_left_pane_g2

0xe9c0,	// (0x0001b8e3) ai5_sk_left_pane_g3

0xe9c8,	// (0x0001b8eb) ai5_sk_left_pane_g4

0x0003,

0xfe6c,	// (0x0001cd8f) ai5_sk_left_pane_g

0xe9d0,	// (0x0001b8f3) ai5_sk_left_pane_t1

0x5964,	// (0x00012887) ai5_sk_right_pane_g1

0xe9de,	// (0x0001b901) ai5_sk_right_pane_g2

0xe9e6,	// (0x0001b909) ai5_sk_right_pane_g3

0xe9ee,	// (0x0001b911) ai5_sk_right_pane_g4

0x0003,

0xfe75,	// (0x0001cd98) ai5_sk_right_pane_g

0xe9f6,	// (0x0001b919) ai5_sk_right_pane_t1

0x5964,	// (0x00012887) ai5_sk_middle_pane_g1

0x595c,	// (0x0001287f) ai5_sk_middle_pane_g2

0x597c,	// (0x0001289f) ai5_sk_middle_pane_g3

0xe9e6,	// (0x0001b909) ai5_sk_middle_pane_g4

0xe9c0,	// (0x0001b8e3) ai5_sk_middle_pane_g5

0xea04,	// (0x0001b927) ai5_sk_middle_pane_g6

0xea0c,	// (0x0001b92f) ai5_sk_middle_pane_g7

0x0006,

0xfe7e,	// (0x0001cda1) ai5_sk_middle_pane_g

0x54d1,	// (0x000123f4) aid_touch_area_size_lc0_ParamLimits

0x54d1,	// (0x000123f4) aid_touch_area_size_lc0

0xca96,	// (0x000199b9) cell_hwr_candidate_pane_t1_ParamLimits

0x54eb,	// (0x0001240e) aid_touch_navi_pane

0x579a,	// (0x000126bd) status_dt_navi_pane_ParamLimits

0x579a,	// (0x000126bd) status_dt_navi_pane

0x57a7,	// (0x000126ca) status_dt_sta_pane_ParamLimits

0x57a7,	// (0x000126ca) status_dt_sta_pane

0xea14,	// (0x0001b937) dt_sta_controll_pane

0xea21,	// (0x0001b944) dt_sta_indi_pane

0xea32,	// (0x0001b955) dt_sta_title_pane

0x3490,	// (0x000103b3) bg_dt_sta_indi_pane_ParamLimits

0x3490,	// (0x000103b3) bg_dt_sta_indi_pane

0xea45,	// (0x0001b968) dt_sta_battery_pane

0xea4d,	// (0x0001b970) dt_sta_indi_pane_g1

0xea56,	// (0x0001b979) dt_sta_indi_pane_g2

0xea5f,	// (0x0001b982) dt_sta_indi_pane_g3

0x0002,

0xfe8d,	// (0x0001cdb0) dt_sta_indi_pane_g

0xea68,	// (0x0001b98b) dt_sta_signal_pane

0x3eff,	// (0x00010e22) bg_dt_sta_title_pane_ParamLimits

0x3eff,	// (0x00010e22) bg_dt_sta_title_pane

0xea71,	// (0x0001b994) dt_sta_title_pane_g1

0xea79,	// (0x0001b99c) dt_sta_title_pane_t1_ParamLimits

0xea79,	// (0x0001b99c) dt_sta_title_pane_t1

0x3018,	// (0x0000ff3b) bg_dt_sta_control_pane

0xea8e,	// (0x0001b9b1) dt_sta_controll_pane_g1

0xea97,	// (0x0001b9ba) bg_dt_sta_title_pane_g1

0xeaa0,	// (0x0001b9c3) bg_dt_sta_title_pane_g2

0xeaa9,	// (0x0001b9cc) bg_dt_sta_title_pane_g3

0x0002,

0xfe94,	// (0x0001cdb7) bg_dt_sta_title_pane_g

0x8bb3,	// (0x00015ad6) bg_dt_sta_indi_pane_g1

0xeab2,	// (0x0001b9d5) dt_sta_signal_pane_g1

0xeaba,	// (0x0001b9dd) dt_sta_signal_pane_g2

0x0001,

0xfe9b,	// (0x0001cdbe) dt_sta_signal_pane_g

0xeac2,	// (0x0001b9e5) dt_sta_battery_pane_g1

0xeacb,	// (0x0001b9ee) dt_sta_battery_pane_t1

0x8bb3,	// (0x00015ad6) bg_dt_sta_control_pane_g1

0x478a,	// (0x000116ad) fep_china_uni_eep_pane

0x4792,	// (0x000116b5) fep_china_uni_entry_pane_ParamLimits

0x47a2,	// (0x000116c5) popup_fep_china_uni_window_g1_ParamLimits

0x47b2,	// (0x000116d5) popup_fep_china_uni_window_g2_ParamLimits

0x47b2,	// (0x000116d5) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001c653) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001c653) popup_fep_china_uni_window_g

0xeada,	// (0x0001b9fd) fep_china_uni_eep_pane_g1

0xeae2,	// (0x0001ba05) fep_china_uni_eep_pane_t1

0xe5e3,	// (0x0001b506) aid_touch_area_size_smil_player

0x5622,	// (0x00012545) lc0_clock_pane

0x57f4,	// (0x00012717) status_pane_g5_ParamLimits

0x57f4,	// (0x00012717) status_pane_g5

0x5162,	// (0x00012085) popup_keymap_window

0x57bc,	// (0x000126df) status_icon_pane

0xe750,	// (0x0001b673) cell_ai5_widget_pane_g3_ParamLimits

0xe76f,	// (0x0001b692) cell_ai5_widget_pane_g4_ParamLimits

0xe77b,	// (0x0001b69e) cell_ai5_widget_pane_g5_ParamLimits

0xe79f,	// (0x0001b6c2) cell_ai5_widget_pane_g8_ParamLimits

0xe79f,	// (0x0001b6c2) cell_ai5_widget_pane_g8

0xe7b3,	// (0x0001b6d6) cell_ai5_widget_pane_g9_ParamLimits

0xe7b3,	// (0x0001b6d6) cell_ai5_widget_pane_g9

0xe7c7,	// (0x0001b6ea) cell_ai5_widget_pane_g10_ParamLimits

0xe7c7,	// (0x0001b6ea) cell_ai5_widget_pane_g10

0xeaf1,	// (0x0001ba14) status_icon_pane_g1

0x3018,	// (0x0000ff3b) bg_popup_sub_pane_cp13

0xeaf9,	// (0x0001ba1c) popup_keymap_window_t1

0x4f6d,	// (0x00011e90) control_pane_g6_ParamLimits

0x4f6d,	// (0x00011e90) control_pane_g6

0x4f60,	// (0x00011e83) control_pane_g7_ParamLimits

0x4f60,	// (0x00011e83) control_pane_g7

0x4f53,	// (0x00011e76) control_pane_g8_ParamLimits

0x4f53,	// (0x00011e76) control_pane_g8

0xea14,	// (0x0001b937) dt_sta_controll_pane_ParamLimits

0xea21,	// (0x0001b944) dt_sta_indi_pane_ParamLimits

0xea32,	// (0x0001b955) dt_sta_title_pane_ParamLimits

0x391b,	// (0x0001083e) aid_size_touch_scroll_bar_cale

0xb6be,	// (0x000185e1) popup_discreet_window_ParamLimits

0xb6be,	// (0x000185e1) popup_discreet_window

0xb722,	// (0x00018645) popup_sk_window

0x6013,	// (0x00012f36) bg_popup_sub_pane_cp28_ParamLimits

0x6013,	// (0x00012f36) bg_popup_sub_pane_cp28

0xeb07,	// (0x0001ba2a) popup_discreet_window_g1_ParamLimits

0xeb07,	// (0x0001ba2a) popup_discreet_window_g1

0xeb27,	// (0x0001ba4a) popup_discreet_window_t1_ParamLimits

0xeb27,	// (0x0001ba4a) popup_discreet_window_t1

0xeb45,	// (0x0001ba68) popup_discreet_window_t2_ParamLimits

0xeb45,	// (0x0001ba68) popup_discreet_window_t2

0x0002,

0xfea0,	// (0x0001cdc3) popup_discreet_window_t_ParamLimits

0xfea0,	// (0x0001cdc3) popup_discreet_window_t

0xeb97,	// (0x0001baba) popup_sk_window_g1

0xeba0,	// (0x0001bac3) popup_sk_window_g2

0x0001,

0xfea7,	// (0x0001cdca) popup_sk_window_g

0xeba9,	// (0x0001bacc) popup_sk_window_t1

0xebb7,	// (0x0001bada) popup_sk_window_t1_copy1

0xe740,	// (0x0001b663) cell_ai5_widget_pane_g2_ParamLimits

0xe89e,	// (0x0001b7c1) cell_ai5_widget_pane_t9_ParamLimits

0xe89e,	// (0x0001b7c1) cell_ai5_widget_pane_t9

0x3018,	// (0x0000ff3b) main_fep_fshwr2_pane

0xebc5,	// (0x0001bae8) aid_fshwr2_btn_pane

0xebcd,	// (0x0001baf0) aid_fshwr2_syb_pane

0xebd5,	// (0x0001baf8) aid_fshwr2_txt_pane

0xebdd,	// (0x0001bb00) fshwr2_func_candi_pane

0xebe5,	// (0x0001bb08) fshwr2_hwr_syb_pane

0xebed,	// (0x0001bb10) fshwr2_icf_pane

0x3018,	// (0x0000ff3b) fshwr2_icf_bg_pane

0xec07,	// (0x0001bb2a) fshwr2_icf_pane_t1_ParamLimits

0xec07,	// (0x0001bb2a) fshwr2_icf_pane_t1

0x8bb3,	// (0x00015ad6) fshwr2_func_candi_pane_g1

0xec1e,	// (0x0001bb41) fshwr2_func_candi_row_pane_ParamLimits

0xec1e,	// (0x0001bb41) fshwr2_func_candi_row_pane

0xec2f,	// (0x0001bb52) cell_fshwr2_syb_pane_ParamLimits

0xec2f,	// (0x0001bb52) cell_fshwr2_syb_pane

0x8def,	// (0x00015d12) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8def,	// (0x00015d12) fshwr2_hwr_syb_pane_g1

0x3018,	// (0x0000ff3b) bg_popup_call_pane_cp01

0xec46,	// (0x0001bb69) fshwr2_func_candi_cell_pane_ParamLimits

0xec46,	// (0x0001bb69) fshwr2_func_candi_cell_pane

0xec71,	// (0x0001bb94) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec71,	// (0x0001bb94) fshwr2_func_candi_cell_bg_pane

0xec8b,	// (0x0001bbae) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec8b,	// (0x0001bbae) fshwr2_func_candi_cell_pane_g1

0xecab,	// (0x0001bbce) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xecab,	// (0x0001bbce) fshwr2_func_candi_cell_pane_t1

0x3018,	// (0x0000ff3b) bg_button_pane_cp08

0x4c8c,	// (0x00011baf) cell_fshwr2_syb_bg_pane

0xecbe,	// (0x0001bbe1) cell_fshwr2_syb_bg_pane_g1

0xecc6,	// (0x0001bbe9) cell_fshwr2_syb_bg_pane_t1

0x3eff,	// (0x00010e22) main_tmo_pane

0xc0bb,	// (0x00018fde) uni_indicator_pane_g1_ParamLimits

0xc0d0,	// (0x00018ff3) uni_indicator_pane_g2_ParamLimits

0xc0e6,	// (0x00019009) uni_indicator_pane_g3_ParamLimits

0x7c26,	// (0x00014b49) uni_indicator_pane_g4_ParamLimits

0x7c26,	// (0x00014b49) uni_indicator_pane_g4

0x7c3a,	// (0x00014b5d) uni_indicator_pane_g5_ParamLimits

0x7c3a,	// (0x00014b5d) uni_indicator_pane_g5

0x7c4e,	// (0x00014b71) uni_indicator_pane_g6_ParamLimits

0x7c4e,	// (0x00014b71) uni_indicator_pane_g6

0xf926,	// (0x0001c849) uni_indicator_pane_g_ParamLimits

0xcfaf,	// (0x00019ed2) popup_tmo_note_window_ParamLimits

0xcfaf,	// (0x00019ed2) popup_tmo_note_window

0x3018,	// (0x0000ff3b) fshwr2_bg_pane

0xec9c,	// (0x0001bbbf) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec9c,	// (0x0001bbbf) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeac,	// (0x0001cdcf) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeac,	// (0x0001cdcf) fshwr2_func_candi_cell_pane_g

0x8bb3,	// (0x00015ad6) bg_popup_window_pane_cp01

0xecd5,	// (0x0001bbf8) bg_popup_window_pane_g1_cp01

0xecde,	// (0x0001bc01) bg_popup_window_pane_cp22_ParamLimits

0xecde,	// (0x0001bc01) bg_popup_window_pane_cp22

0xecec,	// (0x0001bc0f) listscroll_tmo_link_pane_ParamLimits

0xecec,	// (0x0001bc0f) listscroll_tmo_link_pane

0xed2c,	// (0x0001bc4f) popup_tmo_note_window_g1_ParamLimits

0xed2c,	// (0x0001bc4f) popup_tmo_note_window_g1

0xed39,	// (0x0001bc5c) tmo_note_info_pane_ParamLimits

0xed39,	// (0x0001bc5c) tmo_note_info_pane

0xed53,	// (0x0001bc76) list_tmo_note_info_pane_g1_ParamLimits

0xed53,	// (0x0001bc76) list_tmo_note_info_pane_g1

0xed6a,	// (0x0001bc8d) list_tmo_note_info_pane_g2_ParamLimits

0xed6a,	// (0x0001bc8d) list_tmo_note_info_pane_g2

0x0001,

0xfeb1,	// (0x0001cdd4) list_tmo_note_info_pane_g_ParamLimits

0xfeb1,	// (0x0001cdd4) list_tmo_note_info_pane_g

0xed86,	// (0x0001bca9) list_tmo_note_info_text_pane_ParamLimits

0xed86,	// (0x0001bca9) list_tmo_note_info_text_pane

0xee07,	// (0x0001bd2a) list_tmo_link_pane

0xee14,	// (0x0001bd37) scroll_pane_cp20

0xee21,	// (0x0001bd44) list_single_tmo_link_pane_ParamLimits

0xee21,	// (0x0001bd44) list_single_tmo_link_pane

0xee31,	// (0x0001bd54) list_single_tmo_link_pane_t1

0xee3f,	// (0x0001bd62) list_tmo_note_info_text_pane_t1_ParamLimits

0xee3f,	// (0x0001bd62) list_tmo_note_info_text_pane_t1

0x4125,	// (0x00011048) aid_size_touch_scroll_bar_cp01_ParamLimits

0x4125,	// (0x00011048) aid_size_touch_scroll_bar_cp01

0xac44,	// (0x00017b67) aid_size_touch_slider_marker

0xb70e,	// (0x00018631) popup_settings_window_ParamLimits

0xb70e,	// (0x00018631) popup_settings_window

0xadf4,	// (0x00017d17) popup_candi_list_indi_window

0x54eb,	// (0x0001240e) aid_touch_navi_pane_ParamLimits

0xd1ef,	// (0x0001a112) rs_clock_indi_pane

0xd1f8,	// (0x0001a11b) sctrl_sk_bottom_pane_ParamLimits

0xd209,	// (0x0001a12c) sctrl_sk_top_pane_ParamLimits

0xda20,	// (0x0001a943) popup_fep_tooltip_window

0xe706,	// (0x0001b629) aid_size_cell_widget_grid_ParamLimits

0xe734,	// (0x0001b657) cell_ai5_widget_pane_g1_ParamLimits

0xe734,	// (0x0001b657) cell_ai5_widget_pane_g1

0xe787,	// (0x0001b6aa) cell_ai5_widget_pane_g6_ParamLimits

0xe793,	// (0x0001b6b6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2f,	// (0x0001cd52) cell_ai5_widget_pane_g_ParamLimits

0xfe2f,	// (0x0001cd52) cell_ai5_widget_pane_g

0xe8c2,	// (0x0001b7e5) cell_ai5_widget_pane_t10_ParamLimits

0xe8c2,	// (0x0001b7e5) cell_ai5_widget_pane_t10

0xe8d7,	// (0x0001b7fa) grid_ai5_widget_pane_ParamLimits

0xe975,	// (0x0001b898) cell_contacts_ai5_widget_pane_ParamLimits

0xe975,	// (0x0001b898) cell_contacts_ai5_widget_pane

0xeb5a,	// (0x0001ba7d) popup_discreet_window_t3_ParamLimits

0xeb5a,	// (0x0001ba7d) popup_discreet_window_t3

0xebf5,	// (0x0001bb18) popup_fshwr2_char_preview_window_ParamLimits

0xebf5,	// (0x0001bb18) popup_fshwr2_char_preview_window

0xeda4,	// (0x0001bcc7) tmo_note_info_pane_t1

0xedb9,	// (0x0001bcdc) tmo_note_info_pane_t2

0xedce,	// (0x0001bcf1) tmo_note_info_pane_t3

0xede3,	// (0x0001bd06) tmo_note_info_pane_t4

0xedf5,	// (0x0001bd18) tmo_note_info_pane_t5

0x0004,

0xfeb6,	// (0x0001cdd9) tmo_note_info_pane_t

0xee07,	// (0x0001bd2a) list_tmo_link_pane_ParamLimits

0xee14,	// (0x0001bd37) scroll_pane_cp20_ParamLimits

0x3018,	// (0x0000ff3b) bg_popup_fep_char_preview_window_cp01

0xee58,	// (0x0001bd7b) popup_fshwr2_char_preview_window_t1

0xee66,	// (0x0001bd89) popup_candi_list_indi_window_g1

0xee6f,	// (0x0001bd92) bg_cell_contacts_ai5_widget_pane

0xee7b,	// (0x0001bd9e) cell_contacts_ai5_widget_pane_g1

0xee8f,	// (0x0001bdb2) cell_contacts_ai5_widget_pane_g2

0xee9e,	// (0x0001bdc1) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec1,	// (0x0001cde4) cell_contacts_ai5_widget_pane_g

0xeeb1,	// (0x0001bdd4) cell_contacts_ai5_widget_pane_t1

0x3eff,	// (0x00010e22) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef29,	// (0x0001be4c) settings_container_pane

0x4c8c,	// (0x00011baf) listscroll_set_pane_copy1

0x8420,	// (0x00015343) scroll_pane_cp121_copy1

0xef35,	// (0x0001be58) set_content_pane_copy1

0xef3d,	// (0x0001be60) aid_height_set_list_copy1_ParamLimits

0xef3d,	// (0x0001be60) aid_height_set_list_copy1

0x7de7,	// (0x00014d0a) aid_size_parent_copy1_ParamLimits

0x7de7,	// (0x00014d0a) aid_size_parent_copy1

0xef49,	// (0x0001be6c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef49,	// (0x0001be6c) button_value_adjust_pane_cp6_copy1

0x4fff,	// (0x00011f22) list_highlight_pane_cp2_copy1_ParamLimits

0x4fff,	// (0x00011f22) list_highlight_pane_cp2_copy1

0xef5d,	// (0x0001be80) list_set_pane_copy1_ParamLimits

0xef5d,	// (0x0001be80) list_set_pane_copy1

0xeec6,	// (0x0001bde9) main_pane_set_t1_copy1_ParamLimits

0xeec6,	// (0x0001bde9) main_pane_set_t1_copy1

0xef00,	// (0x0001be23) main_pane_set_t2_copy1_ParamLimits

0xef00,	// (0x0001be23) main_pane_set_t2_copy1

0xefeb,	// (0x0001bf0e) main_pane_set_t3_copy1

0xeff9,	// (0x0001bf1c) main_pane_set_t4_copy1

0xef1d,	// (0x0001be40) set_content_pane_g1_copy1_ParamLimits

0xef1d,	// (0x0001be40) set_content_pane_g1_copy1

0xf007,	// (0x0001bf2a) setting_code_pane_copy1

0xf00f,	// (0x0001bf32) setting_slider_graphic_pane_copy1

0xf00f,	// (0x0001bf32) setting_slider_pane_copy1

0xf00f,	// (0x0001bf32) setting_text_pane_copy1

0xf00f,	// (0x0001bf32) setting_volume_pane_copy1

0xf017,	// (0x0001bf3a) settings_code_pane_cp2_copy1

0xf01f,	// (0x0001bf42) settings_code_pane_cp_copy1_ParamLimits

0xf01f,	// (0x0001bf42) settings_code_pane_cp_copy1

0xf033,	// (0x0001bf56) volume_set_pane_copy1

0xf03b,	// (0x0001bf5e) volume_set_pane_g10_copy1

0xf043,	// (0x0001bf66) volume_set_pane_g1_copy1

0xf04b,	// (0x0001bf6e) volume_set_pane_g2_copy1

0xf053,	// (0x0001bf76) volume_set_pane_g3_copy1

0xf05b,	// (0x0001bf7e) volume_set_pane_g4_copy1

0xf063,	// (0x0001bf86) volume_set_pane_g5_copy1

0xf06b,	// (0x0001bf8e) volume_set_pane_g6_copy1

0xf073,	// (0x0001bf96) volume_set_pane_g7_copy1

0xf07b,	// (0x0001bf9e) volume_set_pane_g8_copy1

0xf083,	// (0x0001bfa6) volume_set_pane_g9_copy1

0x31e9,	// (0x0001010c) bg_set_opt_pane_cp_copy1_ParamLimits

0x31e9,	// (0x0001010c) bg_set_opt_pane_cp_copy1

0x36a8,	// (0x000105cb) setting_slider_pane_t1_copy1_ParamLimits

0x36a8,	// (0x000105cb) setting_slider_pane_t1_copy1

0xf08b,	// (0x0001bfae) setting_slider_pane_t2_copy1_ParamLimits

0xf08b,	// (0x0001bfae) setting_slider_pane_t2_copy1

0xf0a4,	// (0x0001bfc7) setting_slider_pane_t3_copy1_ParamLimits

0xf0a4,	// (0x0001bfc7) setting_slider_pane_t3_copy1

0x36be,	// (0x000105e1) slider_set_pane_copy1_ParamLimits

0x36be,	// (0x000105e1) slider_set_pane_copy1

0x4025,	// (0x00010f48) set_opt_bg_pane_g1_copy2

0x402d,	// (0x00010f50) set_opt_bg_pane_g2_copy2

0xf0bb,	// (0x0001bfde) set_opt_bg_pane_g3_copy2

0x403d,	// (0x00010f60) set_opt_bg_pane_g4_copy2

0x4045,	// (0x00010f68) set_opt_bg_pane_g5_copy2

0x404d,	// (0x00010f70) set_opt_bg_pane_g6_copy2

0xf0c3,	// (0x0001bfe6) set_opt_bg_pane_g7_copy2

0xf0cb,	// (0x0001bfee) set_opt_bg_pane_g8_copy2

0xf0d3,	// (0x0001bff6) set_opt_bg_pane_g9_copy2

0x82d2,	// (0x000151f5) aid_size_touch_slider_mark_copy1_ParamLimits

0x82d2,	// (0x000151f5) aid_size_touch_slider_mark_copy1

0x7df9,	// (0x00014d1c) slider_set_pane_g1_copy1

0x7e02,	// (0x00014d25) slider_set_pane_g2_copy1

0x82e6,	// (0x00015209) slider_set_pane_g3_copy1_ParamLimits

0x82e6,	// (0x00015209) slider_set_pane_g3_copy1

0x82fa,	// (0x0001521d) slider_set_pane_g4_copy1_ParamLimits

0x82fa,	// (0x0001521d) slider_set_pane_g4_copy1

0x8312,	// (0x00015235) slider_set_pane_g5_copy1_ParamLimits

0x8312,	// (0x00015235) slider_set_pane_g5_copy1

0x82e6,	// (0x00015209) slider_set_pane_g6_copy1_ParamLimits

0x82e6,	// (0x00015209) slider_set_pane_g6_copy1

0xf0db,	// (0x0001bffe) slider_set_pane_g7_copy1_ParamLimits

0xf0db,	// (0x0001bffe) slider_set_pane_g7_copy1

0x3109,	// (0x0001002c) bg_set_opt_pane_cp2_copy1

0x322b,	// (0x0001014e) setting_slider_graphic_pane_g1_copy1

0xf0f1,	// (0x0001c014) setting_slider_graphic_pane_t1_copy1

0xf100,	// (0x0001c023) setting_slider_graphic_pane_t2_copy1

0xf10f,	// (0x0001c032) slider_set_pane_cp_copy1

0xf11f,	// (0x0001c042) input_focus_pane_cp1_copy1

0xf128,	// (0x0001c04b) list_set_text_pane_copy1

0xf130,	// (0x0001c053) setting_text_pane_g1_copy1

0xb554,	// (0x00018477) set_text_pane_t1_copy1

0xf11f,	// (0x0001c042) input_focus_pane_cp2_copy1

0xf130,	// (0x0001c053) setting_code_pane_g1_copy1

0xf139,	// (0x0001c05c) setting_code_pane_t1_copy1

0xf147,	// (0x0001c06a) list_set_graphic_pane_copy1

0x3109,	// (0x0001002c) bg_set_opt_pane_cp4_copy1

0xf15b,	// (0x0001c07e) list_set_graphic_pane_g1_copy1_ParamLimits

0xf15b,	// (0x0001c07e) list_set_graphic_pane_g1_copy1

0xf167,	// (0x0001c08a) list_set_graphic_pane_g2_copy1

0x4a07,	// (0x0001192a) list_set_graphic_pane_t1_copy1_ParamLimits

0x4a07,	// (0x0001192a) list_set_graphic_pane_t1_copy1

0x8bb3,	// (0x00015ad6) rs_clock_indi_pane_g1

0xf16f,	// (0x0001c092) rs_clock_indi_pane_t1

0xf17d,	// (0x0001c0a0) rs_indi_pane

0xf185,	// (0x0001c0a8) rs_indi_pane_g1

0xf18e,	// (0x0001c0b1) rs_indi_pane_g2

0xee66,	// (0x0001bd89) rs_indi_pane_g3

0x0002,

0xfec8,	// (0x0001cdeb) rs_indi_pane_g

0x4c8c,	// (0x00011baf) bg_popup_preview_window_pane_cp03

0xf197,	// (0x0001c0ba) popup_fep_tooltip_window_t1

0x9704,	// (0x00016627) popup_note2_window_g2_ParamLimits

0x9704,	// (0x00016627) popup_note2_window_g2

0x0001,

0xfc68,	// (0x0001cb8b) popup_note2_window_g_ParamLimits

0xfc68,	// (0x0001cb8b) popup_note2_window_g

0x9bc4,	// (0x00016ae7) bg_popup_sub_pane_cp11_ParamLimits

0x9bd1,	// (0x00016af4) cell_ai3_links_pane_g1_ParamLimits

0x9be8,	// (0x00016b0b) cell_ai3_links_pane_t1

0xb554,	// (0x00018477) set_text_pane_t1_copy1_ParamLimits

0x4bb3,	// (0x00011ad6) cell_graphic_popup_pane_cp2_ParamLimits

0x4bb3,	// (0x00011ad6) cell_graphic_popup_pane_cp2

0xf1a5,	// (0x0001c0c8) cell_graphic_popup_pane_g1_cp2

0x37ca,	// (0x000106ed) cell_graphic_popup_pane_g2_cp2

0xf1ad,	// (0x0001c0d0) cell_graphic_popup_pane_g3_cp2

0xf1b5,	// (0x0001c0d8) cell_graphic_popup_pane_t2_cp2

0x37db,	// (0x000106fe) grid_highlight_pane_cp3_cp2

0x4411,	// (0x00011334) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3eff,	// (0x00010e22) main_tmo_pane_ParamLimits

0xcfa7,	// (0x00019eca) popup_tmo_big_image_note_window

0xe724,	// (0x0001b647) cell_ai5_widget_list_pane

0xe72c,	// (0x0001b64f) cell_ai5_widget_lrg_icon_pane

0xeda4,	// (0x0001bcc7) tmo_note_info_pane_t1_ParamLimits

0xedb9,	// (0x0001bcdc) tmo_note_info_pane_t2_ParamLimits

0xedce,	// (0x0001bcf1) tmo_note_info_pane_t3_ParamLimits

0xede3,	// (0x0001bd06) tmo_note_info_pane_t4_ParamLimits

0xedf5,	// (0x0001bd18) tmo_note_info_pane_t5_ParamLimits

0xfeb6,	// (0x0001cdd9) tmo_note_info_pane_t_ParamLimits

0xef29,	// (0x0001be4c) settings_container_pane_ParamLimits

0xf117,	// (0x0001c03a) indicator_popup_pane_cp5

0xf117,	// (0x0001c03a) indicator_popup_pane_cp6

0xf147,	// (0x0001c06a) list_set_graphic_pane_copy1_ParamLimits

0x3018,	// (0x0000ff3b) bg_popup_window_pane_cp23

0xf1c3,	// (0x0001c0e6) popup_tmo_big_image_note_window_g1

0xf1cc,	// (0x0001c0ef) popup_tmo_big_image_note_window_t1

0xf1da,	// (0x0001c0fd) popup_tmo_big_image_note_window_t2

0xf1e8,	// (0x0001c10b) popup_tmo_big_image_note_window_t3

0x0002,

0xfecf,	// (0x0001cdf2) popup_tmo_big_image_note_window_t

0xf1f6,	// (0x0001c119) cell_ai5_widget_lrg_icon_pane_g1

0xf1fe,	// (0x0001c121) cell_ai5_widget_lrg_icon_pane_t1

0xf20c,	// (0x0001c12f) cell_ai5_widget_list_row_pane_ParamLimits

0xf20c,	// (0x0001c12f) cell_ai5_widget_list_row_pane

0xf225,	// (0x0001c148) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf225,	// (0x0001c148) cell_ai5_widget_list_row_pane_g1

0xf232,	// (0x0001c155) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf232,	// (0x0001c155) cell_ai5_widget_list_row_pane_t1

0xf24a,	// (0x0001c16d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf24a,	// (0x0001c16d) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfed6,	// (0x0001cdf9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed6,	// (0x0001cdf9) cell_ai5_widget_list_row_pane_t

0x3018,	// (0x0000ff3b) main_fep_vtchi_ss_pane

0xf25c,	// (0x0001c17f) popup_fep_char_pre_window

0xf264,	// (0x0001c187) popup_fep_ituss_window

0xf281,	// (0x0001c1a4) popup_fep_vkbss_window

0xf2a0,	// (0x0001c1c3) grid_vkbss_keypad_pane_ParamLimits

0xf2a0,	// (0x0001c1c3) grid_vkbss_keypad_pane

0xf2b0,	// (0x0001c1d3) ituss_keypad_pane

0xf2c9,	// (0x0001c1ec) aid_vkbss_key_offset_ParamLimits

0xf2c9,	// (0x0001c1ec) aid_vkbss_key_offset

0xf2d5,	// (0x0001c1f8) cell_vkbss_key_pane_ParamLimits

0xf2d5,	// (0x0001c1f8) cell_vkbss_key_pane

0xf2eb,	// (0x0001c20e) bg_cell_vkbss_key_g1_ParamLimits

0xf2eb,	// (0x0001c20e) bg_cell_vkbss_key_g1

0xf2f7,	// (0x0001c21a) cell_vkbss_key_3p_pane_ParamLimits

0xf2f7,	// (0x0001c21a) cell_vkbss_key_3p_pane

0xf311,	// (0x0001c234) cell_vkbss_key_g1_ParamLimits

0xf311,	// (0x0001c234) cell_vkbss_key_g1

0xf32b,	// (0x0001c24e) cell_vkbss_key_t1_ParamLimits

0xf32b,	// (0x0001c24e) cell_vkbss_key_t1

0xf356,	// (0x0001c279) cell_ituss_key_pane_ParamLimits

0xf356,	// (0x0001c279) cell_ituss_key_pane

0xf366,	// (0x0001c289) bg_cell_ituss_key_g1_ParamLimits

0xf366,	// (0x0001c289) bg_cell_ituss_key_g1

0xf372,	// (0x0001c295) cell_ituss_key_pane_g1_ParamLimits

0xf372,	// (0x0001c295) cell_ituss_key_pane_g1

0xf37e,	// (0x0001c2a1) cell_ituss_key_pane_g2_ParamLimits

0xf37e,	// (0x0001c2a1) cell_ituss_key_pane_g2

0x0001,

0xfedb,	// (0x0001cdfe) cell_ituss_key_pane_g_ParamLimits

0xfedb,	// (0x0001cdfe) cell_ituss_key_pane_g

0xf397,	// (0x0001c2ba) cell_ituss_key_t1_ParamLimits

0xf397,	// (0x0001c2ba) cell_ituss_key_t1

0xf3c5,	// (0x0001c2e8) cell_ituss_key_t2_ParamLimits

0xf3c5,	// (0x0001c2e8) cell_ituss_key_t2

0xf3f6,	// (0x0001c319) cell_ituss_key_t3_ParamLimits

0xf3f6,	// (0x0001c319) cell_ituss_key_t3

0xf427,	// (0x0001c34a) cell_ituss_key_t4_ParamLimits

0xf427,	// (0x0001c34a) cell_ituss_key_t4

0x0003,

0xfee0,	// (0x0001ce03) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x0001ce03) cell_ituss_key_t

0xf458,	// (0x0001c37b) cell_vkbss_key_3p_pane_g1

0xf460,	// (0x0001c383) cell_vkbss_key_3p_pane_g2

0xf468,	// (0x0001c38b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee9,	// (0x0001ce0c) cell_vkbss_key_3p_pane_g

0x3018,	// (0x0000ff3b) bg_popup_fep_char_preview_window_cp02

0xf470,	// (0x0001c393) popup_fep_char_pre_window_t1

0xe6fc,	// (0x0001b61f) main_ai5_sk_pane

0xee6f,	// (0x0001bd92) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee7b,	// (0x0001bd9e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee8f,	// (0x0001bdb2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee9e,	// (0x0001bdc1) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec1,	// (0x0001cde4) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeeb1,	// (0x0001bdd4) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3eff,	// (0x00010e22) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf47f,	// (0x0001c3a2) main_ai5_sk_pane_g1

0x5e5d,	// (0x00012d80) popup_query_code_window_g1

0xf276,	// (0x0001c199) popup_fep_vkb_icf_pane

0xf28a,	// (0x0001c1ad) popup_fep_vtchi_icf_pane

0x3eff,	// (0x00010e22) bg_icf_pane

0xf497,	// (0x0001c3ba) list_vkb_icf_pane

0x3eff,	// (0x00010e22) bg_icf_pane_cp01

0xcf66,	// (0x00019e89) vtchi_icf_list_pane

0xf4b7,	// (0x0001c3da) list_vkb_icf_pane_t1_ParamLimits

0xf4b7,	// (0x0001c3da) list_vkb_icf_pane_t1

0xf4ce,	// (0x0001c3f1) vtchi_icf_list_pane_t1_ParamLimits

0xf4ce,	// (0x0001c3f1) vtchi_icf_list_pane_t1

0xf264,	// (0x0001c187) popup_fep_ituss_window_ParamLimits

0xf28a,	// (0x0001c1ad) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b0,	// (0x0001c1d3) ituss_keypad_pane_ParamLimits

0xf2c0,	// (0x0001c1e3) ituss_sks_pane

0x3eff,	// (0x00010e22) bg_icf_pane_ParamLimits

0xf488,	// (0x0001c3ab) icf_edit_indi_pane_ParamLimits

0xf488,	// (0x0001c3ab) icf_edit_indi_pane

0xf497,	// (0x0001c3ba) list_vkb_icf_pane_ParamLimits

0x3eff,	// (0x00010e22) bg_icf_pane_cp01_ParamLimits

0xf4a3,	// (0x0001c3c6) icf_edit_indi_pane_cp01_ParamLimits

0xf4a3,	// (0x0001c3c6) icf_edit_indi_pane_cp01

0xf4af,	// (0x0001c3d2) vtchi_query_pane

0x8def,	// (0x00015d12) icf_edit_indi_pane_g1_ParamLimits

0x8def,	// (0x00015d12) icf_edit_indi_pane_g1

0xf4e7,	// (0x0001c40a) icf_edit_indi_pane_g2_ParamLimits

0xf4e7,	// (0x0001c40a) icf_edit_indi_pane_g2

0x0001,

0xfef0,	// (0x0001ce13) icf_edit_indi_pane_g_ParamLimits

0xfef0,	// (0x0001ce13) icf_edit_indi_pane_g

0xf4f3,	// (0x0001c416) icf_edit_indi_pane_t1

0xf501,	// (0x0001c424) bg_input_focus_pane_cp042

0xf50a,	// (0x0001c42d) vtchi_button_pane

0xf513,	// (0x0001c436) vtchi_query_pane_t1

0xf521,	// (0x0001c444) vtchi_query_pane_t2

0xf52f,	// (0x0001c452) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x0001ce18) vtchi_query_pane_t

0x3018,	// (0x0000ff3b) bg_button_pane_cp13

0xf53d,	// (0x0001c460) vtchi_button_pane_g1

0xd551,	// (0x0001a474) ituss_sks_pane_g1

0xf545,	// (0x0001c468) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x0001ce1f) ituss_sks_pane_g

0xf54e,	// (0x0001c471) ituss_sks_pane_t1

0xf55c,	// (0x0001c47f) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x0001ce24) ituss_sks_pane_t

0x8855,	// (0x00015778) indicator_nsta_pane_cp_g1

0x885e,	// (0x00015781) indicator_nsta_pane_cp_g2

0x8866,	// (0x00015789) indicator_nsta_pane_cp_g3

0x886e,	// (0x00015791) indicator_nsta_pane_cp_g4

0x8876,	// (0x00015799) indicator_nsta_pane_cp_g5

0x887e,	// (0x000157a1) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x0001c9d5) indicator_nsta_pane_cp_g

0xe1b8,	// (0x0001b0db) cell_graphic2_pane_t2_ParamLimits

0xe1b8,	// (0x0001b0db) cell_graphic2_pane_t2

0x0001,

0xfdb8,	// (0x0001ccdb) cell_graphic2_pane_t_ParamLimits

0xfdb8,	// (0x0001ccdb) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small
