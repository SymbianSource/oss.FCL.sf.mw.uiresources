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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003f5ce };

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
0xbd3f,	// (0x0004b30d) Screen

0xbd4b,	// (0x0004b319) application_window_ParamLimits

0xbd4b,	// (0x0004b319) application_window

0x3559,	// (0x00042b27) screen_g1

0xbd83,	// (0x0004b351) area_bottom_pane_ParamLimits

0xbd83,	// (0x0004b351) area_bottom_pane

0x0fb1,	// (0x0004057f) area_top_pane_ParamLimits

0x0fb1,	// (0x0004057f) area_top_pane

0x1045,	// (0x00040613) main_pane_ParamLimits

0x1045,	// (0x00040613) main_pane

0x3563,	// (0x00042b31) misc_graphics

0xd66c,	// (0x0004cc3a) battery_pane_ParamLimits

0xd66c,	// (0x0004cc3a) battery_pane

0x5bde,	// (0x000451ac) bg_status_flat_pane_g8

0x5be6,	// (0x000451b4) bg_status_flat_pane_g9

0x4fda,	// (0x000445a8) context_pane_ParamLimits

0x4fda,	// (0x000445a8) context_pane

0xd7d7,	// (0x0004cda5) navi_pane_ParamLimits

0xd7d7,	// (0x0004cda5) navi_pane

0xd855,	// (0x0004ce23) signal_pane_ParamLimits

0xd855,	// (0x0004ce23) signal_pane

0x0008,

0xf879,	// (0x0004ee47) bg_status_flat_pane_g

0xd8e5,	// (0x0004ceb3) status_pane_g1_ParamLimits

0xd8e5,	// (0x0004ceb3) status_pane_g1

0xd8fb,	// (0x0004cec9) status_pane_g2_ParamLimits

0xd8fb,	// (0x0004cec9) status_pane_g2

0x5201,	// (0x000447cf) status_pane_g3_ParamLimits

0x5201,	// (0x000447cf) status_pane_g3

0x0004,

0xf7a5,	// (0x0004ed73) status_pane_g_ParamLimits

0xf7a5,	// (0x0004ed73) status_pane_g

0xd907,	// (0x0004ced5) title_pane_ParamLimits

0xd907,	// (0x0004ced5) title_pane

0xd96a,	// (0x0004cf38) uni_indicator_pane_ParamLimits

0xd96a,	// (0x0004cf38) uni_indicator_pane

0x4e3c,	// (0x0004440a) bg_list_pane_ParamLimits

0x4e3c,	// (0x0004440a) bg_list_pane

0xd5df,	// (0x0004cbad) find_pane

0xc134,	// (0x0004b702) listscroll_app_pane_ParamLimits

0xc134,	// (0x0004b702) listscroll_app_pane

0x4e68,	// (0x00044436) listscroll_form_pane

0xc144,	// (0x0004b712) listscroll_gen_pane_ParamLimits

0xc144,	// (0x0004b712) listscroll_gen_pane

0x19f4,	// (0x00040fc2) listscroll_set_pane

0x676c,	// (0x00045d3a) main_idle_act_pane

0x4b44,	// (0x00044112) main_idle_trad_pane

0x4b44,	// (0x00044112) main_list_empty_pane

0x4e82,	// (0x00044450) main_midp_pane

0x4e8e,	// (0x0004445c) main_pane_g1_ParamLimits

0x4e8e,	// (0x0004445c) main_pane_g1

0xc158,	// (0x0004b726) popup_ai_message_window_ParamLimits

0xc158,	// (0x0004b726) popup_ai_message_window

0xc1e9,	// (0x0004b7b7) popup_fep_china_uni_window_ParamLimits

0xc1e9,	// (0x0004b7b7) popup_fep_china_uni_window

0x1afe,	// (0x000410cc) popup_fep_japan_candidate_window_ParamLimits

0x1afe,	// (0x000410cc) popup_fep_japan_candidate_window

0x1b1e,	// (0x000410ec) popup_fep_japan_predictive_window_ParamLimits

0x1b1e,	// (0x000410ec) popup_fep_japan_predictive_window

0xc245,	// (0x0004b813) popup_find_window

0xc262,	// (0x0004b830) popup_grid_graphic_window_ParamLimits

0xc262,	// (0x0004b830) popup_grid_graphic_window

0x1b85,	// (0x00041153) popup_large_graphic_colour_window

0xc300,	// (0x0004b8ce) popup_menu_window_ParamLimits

0xc300,	// (0x0004b8ce) popup_menu_window

0xc4d2,	// (0x0004baa0) popup_note_image_window

0xc498,	// (0x0004ba66) popup_note_wait_window_ParamLimits

0xc498,	// (0x0004ba66) popup_note_wait_window

0xc4ea,	// (0x0004bab8) popup_note_window_ParamLimits

0xc4ea,	// (0x0004bab8) popup_note_window

0xc590,	// (0x0004bb5e) popup_query_code_window_ParamLimits

0xc590,	// (0x0004bb5e) popup_query_code_window

0x1dcd,	// (0x0004139b) popup_query_data_code_window_ParamLimits

0x1dcd,	// (0x0004139b) popup_query_data_code_window

0xc5ca,	// (0x0004bb98) popup_query_data_window_ParamLimits

0xc5ca,	// (0x0004bb98) popup_query_data_window

0xc64c,	// (0x0004bc1a) popup_query_sat_info_window_ParamLimits

0xc64c,	// (0x0004bc1a) popup_query_sat_info_window

0xc6e3,	// (0x0004bcb1) popup_snote_single_graphic_window_ParamLimits

0xc6e3,	// (0x0004bcb1) popup_snote_single_graphic_window

0xc6e3,	// (0x0004bcb1) popup_snote_single_text_window_ParamLimits

0xc6e3,	// (0x0004bcb1) popup_snote_single_text_window

0x1e54,	// (0x00041422) popup_sub_window_general

0x1f84,	// (0x00041552) popup_window_general_ParamLimits

0x1f84,	// (0x00041552) popup_window_general

0x4e9c,	// (0x0004446a) power_save_pane

0xbfc3,	// (0x0004b591) control_pane_g1_ParamLimits

0xbfc3,	// (0x0004b591) control_pane_g1

0xbfec,	// (0x0004b5ba) control_pane_g2_ParamLimits

0xbfec,	// (0x0004b5ba) control_pane_g2

0x4dff,	// (0x000443cd) control_pane_g3_ParamLimits

0x4dff,	// (0x000443cd) control_pane_g3

0x0007,

0xf78d,	// (0x0004ed5b) control_pane_g_ParamLimits

0xf78d,	// (0x0004ed5b) control_pane_g

0xc02d,	// (0x0004b5fb) control_pane_t1_ParamLimits

0xc02d,	// (0x0004b5fb) control_pane_t1

0xc08b,	// (0x0004b659) control_pane_t2_ParamLimits

0xc08b,	// (0x0004b659) control_pane_t2

0x0002,

0xf79e,	// (0x0004ed6c) control_pane_t_ParamLimits

0xf79e,	// (0x0004ed6c) control_pane_t

0xd511,	// (0x0004cadf) navi_navi_volume_pane_cp1

0xd519,	// (0x0004cae7) status_small_icon_pane

0x4d34,	// (0x00044302) status_small_pane_g1_ParamLimits

0x4d34,	// (0x00044302) status_small_pane_g1

0xd521,	// (0x0004caef) status_small_pane_g2_ParamLimits

0xd521,	// (0x0004caef) status_small_pane_g2

0xd52d,	// (0x0004cafb) status_small_pane_g3_ParamLimits

0xd52d,	// (0x0004cafb) status_small_pane_g3

0xd539,	// (0x0004cb07) status_small_pane_g4_ParamLimits

0xd539,	// (0x0004cb07) status_small_pane_g4

0xd545,	// (0x0004cb13) status_small_pane_g5_ParamLimits

0xd545,	// (0x0004cb13) status_small_pane_g5

0xd553,	// (0x0004cb21) status_small_pane_g6_ParamLimits

0xd553,	// (0x0004cb21) status_small_pane_g6

0x0007,

0xf77c,	// (0x0004ed4a) status_small_pane_g_ParamLimits

0xf77c,	// (0x0004ed4a) status_small_pane_g

0xd582,	// (0x0004cb50) status_small_pane_t1

0xd5a4,	// (0x0004cb72) status_small_wait_pane_ParamLimits

0xd5a4,	// (0x0004cb72) status_small_wait_pane

0xd3b8,	// (0x0004c986) aid_levels_signal_ParamLimits

0xd3b8,	// (0x0004c986) aid_levels_signal

0xd3d0,	// (0x0004c99e) signal_pane_g1_ParamLimits

0xd3d0,	// (0x0004c99e) signal_pane_g1

0xd3eb,	// (0x0004c9b9) signal_pane_g2_ParamLimits

0xd3eb,	// (0x0004c9b9) signal_pane_g2

0x0003,

0xf70d,	// (0x0004ecdb) signal_pane_g_ParamLimits

0xf70d,	// (0x0004ecdb) signal_pane_g

0x4618,	// (0x00043be6) context_pane_g1

0xcf20,	// (0x0004c4ee) title_pane_g1

0xcf57,	// (0x0004c525) title_pane_t1

0x360b,	// (0x00042bd9) title_pane_t2

0x3631,	// (0x00042bff) title_pane_t3

0x0002,

0xf557,	// (0x0004eb25) title_pane_t

0xd992,	// (0x0004cf60) aid_levels_battery_ParamLimits

0xd992,	// (0x0004cf60) aid_levels_battery

0xd9ae,	// (0x0004cf7c) battery_pane_g1_ParamLimits

0xd9ae,	// (0x0004cf7c) battery_pane_g1

0xd9cb,	// (0x0004cf99) battery_pane_g2_ParamLimits

0xd9cb,	// (0x0004cf99) battery_pane_g2

0x0001,

0xf7b0,	// (0x0004ed7e) battery_pane_g_ParamLimits

0xf7b0,	// (0x0004ed7e) battery_pane_g

0xdb9a,	// (0x0004d168) uni_indicator_pane_g1

0xdbb0,	// (0x0004d17e) uni_indicator_pane_g2

0xdbc6,	// (0x0004d194) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0004eeef) uni_indicator_pane_g

0x49b6,	// (0x00043f84) navi_icon_pane_ParamLimits

0x49b6,	// (0x00043f84) navi_icon_pane

0x48f4,	// (0x00043ec2) navi_midp_pane

0x49d2,	// (0x00043fa0) navi_navi_pane

0x49dc,	// (0x00043faa) navi_text_pane_ParamLimits

0x49dc,	// (0x00043faa) navi_text_pane

0x3559,	// (0x00042b27) status_small_wait_pane_g1

0x3a60,	// (0x0004302e) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0004eeea) status_small_wait_pane_g

0x6245,	// (0x00045813) navi_navi_icon_text_pane

0x624d,	// (0x0004581b) navi_navi_pane_g1_ParamLimits

0x624d,	// (0x0004581b) navi_navi_pane_g1

0x625f,	// (0x0004582d) navi_navi_pane_g2_ParamLimits

0x625f,	// (0x0004582d) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0004eeb8) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0004eeb8) navi_navi_pane_g

0x6271,	// (0x0004583f) navi_navi_tabs_pane

0x627a,	// (0x00045848) navi_navi_text_pane

0x6245,	// (0x00045813) navi_navi_volume_pane

0x6221,	// (0x000457ef) navi_text_pane_t1

0x6215,	// (0x000457e3) navi_icon_pane_g1

0x6168,	// (0x00045736) navi_navi_text_pane_t1

0x223c,	// (0x0004180a) navi_navi_volume_pane_g1

0x2244,	// (0x00041812) volume_small_pane

0x60ce,	// (0x0004569c) navi_navi_icon_text_pane_g1

0x60d6,	// (0x000456a4) navi_navi_icon_text_pane_t1

0x49d2,	// (0x00043fa0) navi_tabs_2_long_pane

0x49d2,	// (0x00043fa0) navi_tabs_2_pane

0x49d2,	// (0x00043fa0) navi_tabs_3_long_pane

0x49d2,	// (0x00043fa0) navi_tabs_3_pane

0x49d2,	// (0x00043fa0) navi_tabs_4_pane

0x221c,	// (0x000417ea) tabs_2_active_pane_ParamLimits

0x221c,	// (0x000417ea) tabs_2_active_pane

0x222c,	// (0x000417fa) tabs_2_passive_pane_ParamLimits

0x222c,	// (0x000417fa) tabs_2_passive_pane

0x21ea,	// (0x000417b8) tabs_3_active_pane_ParamLimits

0x21ea,	// (0x000417b8) tabs_3_active_pane

0x21fa,	// (0x000417c8) tabs_3_passive_pane_ParamLimits

0x21fa,	// (0x000417c8) tabs_3_passive_pane

0x220b,	// (0x000417d9) tabs_3_passive_pane_cp_ParamLimits

0x220b,	// (0x000417d9) tabs_3_passive_pane_cp

0x21a6,	// (0x00041774) tabs_4_active_pane_ParamLimits

0x21a6,	// (0x00041774) tabs_4_active_pane

0x21b7,	// (0x00041785) tabs_4_passive_pane_ParamLimits

0x21b7,	// (0x00041785) tabs_4_passive_pane

0x21c8,	// (0x00041796) tabs_4_passive_pane_cp_ParamLimits

0x21c8,	// (0x00041796) tabs_4_passive_pane_cp

0x21d9,	// (0x000417a7) tabs_4_passive_pane_cp2_ParamLimits

0x21d9,	// (0x000417a7) tabs_4_passive_pane_cp2

0x2182,	// (0x00041750) tabs_2_long_active_pane_ParamLimits

0x2182,	// (0x00041750) tabs_2_long_active_pane

0x2194,	// (0x00041762) tabs_2_long_passive_pane_ParamLimits

0x2194,	// (0x00041762) tabs_2_long_passive_pane

0x2143,	// (0x00041711) tabs_3_long_active_pane_ParamLimits

0x2143,	// (0x00041711) tabs_3_long_active_pane

0x2156,	// (0x00041724) tabs_3_long_passive_pane_ParamLimits

0x2156,	// (0x00041724) tabs_3_long_passive_pane

0x216f,	// (0x0004173d) tabs_3_long_passive_pane_cp_ParamLimits

0x216f,	// (0x0004173d) tabs_3_long_passive_pane_cp

0x20e9,	// (0x000416b7) volume_small_pane_g1

0x20f2,	// (0x000416c0) volume_small_pane_g2

0x20fb,	// (0x000416c9) volume_small_pane_g3

0x2104,	// (0x000416d2) volume_small_pane_g4

0x210d,	// (0x000416db) volume_small_pane_g5

0x2116,	// (0x000416e4) volume_small_pane_g6

0x211f,	// (0x000416ed) volume_small_pane_g7

0x2128,	// (0x000416f6) volume_small_pane_g8

0x2131,	// (0x000416ff) volume_small_pane_g9

0x213a,	// (0x00041708) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0004ee84) volume_small_pane_g

0x38be,	// (0x00042e8c) bg_active_tab_pane_cp2_ParamLimits

0x38be,	// (0x00042e8c) bg_active_tab_pane_cp2

0x3651,	// (0x00042c1f) tabs_3_active_pane_g1

0xcfe3,	// (0x0004c5b1) tabs_3_active_pane_t1

0x38be,	// (0x00042e8c) bg_passive_tab_pane_cp2_ParamLimits

0x38be,	// (0x00042e8c) bg_passive_tab_pane_cp2

0x3651,	// (0x00042c1f) tabs_3_passive_pane_g1

0xcfe3,	// (0x0004c5b1) tabs_3_passive_pane_t1

0x38be,	// (0x00042e8c) bg_active_tab_pane_cp3_ParamLimits

0x38be,	// (0x00042e8c) bg_active_tab_pane_cp3

0x366b,	// (0x00042c39) tabs_4_active_pane_g1

0xcff5,	// (0x0004c5c3) tabs_4_active_pane_t1

0x38be,	// (0x00042e8c) bg_passive_tab_pane_cp3_ParamLimits

0x38be,	// (0x00042e8c) bg_passive_tab_pane_cp3

0x366b,	// (0x00042c39) tabs_4_1_passive_pane_g1

0xcff5,	// (0x0004c5c3) tabs_4_1_passive_pane_t1

0x4e82,	// (0x00044450) list_highlight_pane_cp2

0xdc4e,	// (0x0004d21c) list_set_pane_ParamLimits

0xdc4e,	// (0x0004d21c) list_set_pane

0xdce8,	// (0x0004d2b6) main_pane_set_t1_ParamLimits

0xdce8,	// (0x0004d2b6) main_pane_set_t1

0xdd08,	// (0x0004d2d6) main_pane_set_t2_ParamLimits

0xdd08,	// (0x0004d2d6) main_pane_set_t2

0xdd1c,	// (0x0004d2ea) main_pane_set_t3_ParamLimits

0xdd1c,	// (0x0004d2ea) main_pane_set_t3

0xdd2e,	// (0x0004d2fc) main_pane_set_t4_ParamLimits

0xdd2e,	// (0x0004d2fc) main_pane_set_t4

0x0003,

0xf986,	// (0x0004ef54) main_pane_set_t_ParamLimits

0xf986,	// (0x0004ef54) main_pane_set_t

0xdd40,	// (0x0004d30e) setting_code_pane

0xdd4a,	// (0x0004d318) setting_slider_graphic_pane

0xdd4a,	// (0x0004d318) setting_slider_pane

0xdd4a,	// (0x0004d318) setting_text_pane

0xdd4a,	// (0x0004d318) setting_volume_pane

0x1294,	// (0x00040862) volume_set_pane

0x3643,	// (0x00042c11) bg_set_opt_pane_cp

0x129c,	// (0x0004086a) setting_slider_pane_t1

0x12b5,	// (0x00040883) setting_slider_pane_t2

0x12cf,	// (0x0004089d) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004eb2c) setting_slider_pane_t

0x12e7,	// (0x000408b5) slider_set_pane

0x3563,	// (0x00042b31) bg_set_opt_pane_cp2

0x3685,	// (0x00042c53) setting_slider_graphic_pane_g1

0x12fd,	// (0x000408cb) setting_slider_graphic_pane_t1

0x130d,	// (0x000408db) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004eb33) setting_slider_graphic_pane_t

0x131d,	// (0x000408eb) slider_set_pane_cp

0x3563,	// (0x00042b31) input_focus_pane_cp1

0x6753,	// (0x00045d21) list_set_text_pane

0x3559,	// (0x00042b27) setting_text_pane_g1

0x3563,	// (0x00042b31) input_focus_pane_cp2

0x3559,	// (0x00042b27) setting_code_pane_g1

0x368e,	// (0x00042c5c) setting_code_pane_t1

0xf535,	// (0x0004eb03) set_text_pane_t1_ParamLimits

0xf535,	// (0x0004eb03) set_text_pane_t1

0x3f0d,	// (0x000434db) set_opt_bg_pane_g1

0x3f15,	// (0x000434e3) set_opt_bg_pane_g2

0x672d,	// (0x00045cfb) set_opt_bg_pane_g3

0x3f25,	// (0x000434f3) set_opt_bg_pane_g4

0x3f2d,	// (0x000434fb) set_opt_bg_pane_g5

0x3f35,	// (0x00043503) set_opt_bg_pane_g6

0x6737,	// (0x00045d05) set_opt_bg_pane_g7

0x673f,	// (0x00045d0d) set_opt_bg_pane_g8

0x6749,	// (0x00045d17) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0004ef41) set_opt_bg_pane_g

0x6720,	// (0x00045cee) slider_set_pane_g1

0x22b1,	// (0x0004187f) slider_set_pane_g2

0x0006,

0xf964,	// (0x0004ef32) slider_set_pane_g

0x224d,	// (0x0004181b) volume_set_pane_g1

0x2255,	// (0x00041823) volume_set_pane_g2

0x225d,	// (0x0004182b) volume_set_pane_g3

0x2265,	// (0x00041833) volume_set_pane_g4

0x226d,	// (0x0004183b) volume_set_pane_g5

0x2275,	// (0x00041843) volume_set_pane_g6

0x227d,	// (0x0004184b) volume_set_pane_g7

0x2285,	// (0x00041853) volume_set_pane_g8

0x228d,	// (0x0004185b) volume_set_pane_g9

0x2295,	// (0x00041863) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0004ef0a) volume_set_pane_g

0xd007,	// (0x0004c5d5) indicator_pane_ParamLimits

0xd007,	// (0x0004c5d5) indicator_pane

0xd02f,	// (0x0004c5fd) main_idle_pane_g2_ParamLimits

0xd02f,	// (0x0004c5fd) main_idle_pane_g2

0xd067,	// (0x0004c635) main_pane_idle_g1_ParamLimits

0xd067,	// (0x0004c635) main_pane_idle_g1

0x36dd,	// (0x00042cab) popup_clock_digital_analogue_window_ParamLimits

0x36dd,	// (0x00042cab) popup_clock_digital_analogue_window

0xd08e,	// (0x0004c65c) soft_indicator_pane_ParamLimits

0xd08e,	// (0x0004c65c) soft_indicator_pane

0xd0a8,	// (0x0004c676) wallpaper_pane_ParamLimits

0xd0a8,	// (0x0004c676) wallpaper_pane

0x3559,	// (0x00042b27) wallpaper_pane_g1

0xd0ba,	// (0x0004c688) indicator_pane_g1_ParamLimits

0xd0ba,	// (0x0004c688) indicator_pane_g1

0x6b03,	// (0x000460d1) navi_navi_icon_text_pane_srt_g1

0x372f,	// (0x00042cfd) soft_indicator_pane_t1

0x3749,	// (0x00042d17) aid_ps_area_pane

0xd0d0,	// (0x0004c69e) aid_ps_clock_pane

0x3768,	// (0x00042d36) aid_ps_indicator_pane

0x3774,	// (0x00042d42) indicator_ps_pane_ParamLimits

0x3774,	// (0x00042d42) indicator_ps_pane

0x3783,	// (0x00042d51) power_save_pane_g1_ParamLimits

0x3783,	// (0x00042d51) power_save_pane_g1

0x378f,	// (0x00042d5d) power_save_pane_g2_ParamLimits

0x378f,	// (0x00042d5d) power_save_pane_g2

0x0ea5,	// (0x00040473) aid_navinavi_width_pane

0x3749,	// (0x00042d17) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004eb38) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004eb38) power_save_pane_g

0x379d,	// (0x00042d6b) power_save_pane_t1_ParamLimits

0x379d,	// (0x00042d6b) power_save_pane_t1

0xd0d0,	// (0x0004c69e) aid_ps_clock_pane_ParamLimits

0x3768,	// (0x00042d36) aid_ps_indicator_pane_ParamLimits

0x37af,	// (0x00042d7d) power_save_pane_t4_ParamLimits

0x37af,	// (0x00042d7d) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004eb3d) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004eb3d) power_save_pane_t

0x37d9,	// (0x00042da7) power_save_t3_ParamLimits

0x37d9,	// (0x00042da7) power_save_t3

0x37c4,	// (0x00042d92) power_save_t2_ParamLimits

0x37c4,	// (0x00042d92) power_save_t2

0x37ee,	// (0x00042dbc) indicator_ps_pane_g1

0xd0de,	// (0x0004c6ac) ai_gene_pane_ParamLimits

0xd0de,	// (0x0004c6ac) ai_gene_pane

0xd0f5,	// (0x0004c6c3) ai_links_pane_ParamLimits

0xd0f5,	// (0x0004c6c3) ai_links_pane

0xd10d,	// (0x0004c6db) indicator_pane_cp1_ParamLimits

0xd10d,	// (0x0004c6db) indicator_pane_cp1

0xd11c,	// (0x0004c6ea) main_pane_idle_g1_cp_ParamLimits

0xd11c,	// (0x0004c6ea) main_pane_idle_g1_cp

0x3827,	// (0x00042df5) popup_ai_links_title_window

0xd134,	// (0x0004c702) soft_indicator_pane_cp1_ParamLimits

0xd134,	// (0x0004c702) soft_indicator_pane_cp1

0x650e,	// (0x00045adc) ai_links_pane_g1

0x6517,	// (0x00045ae5) grid_ai_links_pane

0xdb91,	// (0x0004d15f) ai_gene_pane_1

0x64fc,	// (0x00045aca) ai_gene_pane_2

0x6505,	// (0x00045ad3) list_highlight_pane_cp4

0xdb6d,	// (0x0004d13b) cell_ai_link_pane_ParamLimits

0xdb6d,	// (0x0004d13b) cell_ai_link_pane

0x64cd,	// (0x00045a9b) cell_ai_link_pane_g1

0x3a60,	// (0x0004302e) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0004eee5) cell_ai_link_pane_g

0x3563,	// (0x00042b31) grid_highlight_cp2

0x3563,	// (0x00042b31) bg_popup_sub_pane_cp1

0x384a,	// (0x00042e18) popup_ai_links_title_window_t1

0x641b,	// (0x000459e9) ai_gene_pane_1_g1_ParamLimits

0x641b,	// (0x000459e9) ai_gene_pane_1_g1

0x6427,	// (0x000459f5) ai_gene_pane_1_g2_ParamLimits

0x6427,	// (0x000459f5) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0004eedb) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0004eedb) ai_gene_pane_1_g

0x6434,	// (0x00045a02) ai_gene_pane_1_t1_ParamLimits

0x6434,	// (0x00045a02) ai_gene_pane_1_t1

0x6468,	// (0x00045a36) grid_ai_soft_ind_pane

0x6406,	// (0x000459d4) ai_gene_pane_2_t1_ParamLimits

0x6406,	// (0x000459d4) ai_gene_pane_2_t1

0xd148,	// (0x0004c716) main_pane_empty_t1_ParamLimits

0xd148,	// (0x0004c716) main_pane_empty_t1

0xd160,	// (0x0004c72e) main_pane_empty_t2_ParamLimits

0xd160,	// (0x0004c72e) main_pane_empty_t2

0xd175,	// (0x0004c743) main_pane_empty_t3_ParamLimits

0xd175,	// (0x0004c743) main_pane_empty_t3

0xd187,	// (0x0004c755) main_pane_empty_t4_ParamLimits

0xd187,	// (0x0004c755) main_pane_empty_t4

0xd199,	// (0x0004c767) main_pane_empty_t5_ParamLimits

0xd199,	// (0x0004c767) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004eb42) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004eb42) main_pane_empty_t

0x3f5e,	// (0x0004352c) bg_popup_window_pane_ParamLimits

0x3f5e,	// (0x0004352c) bg_popup_window_pane

0x6176,	// (0x00045744) find_popup_pane_cp2_ParamLimits

0x6176,	// (0x00045744) find_popup_pane_cp2

0x6182,	// (0x00045750) heading_pane_ParamLimits

0x6182,	// (0x00045750) heading_pane

0x3563,	// (0x00042b31) bg_popup_sub_pane

0xdaee,	// (0x0004d0bc) bg_popup_window_pane_g1_ParamLimits

0xdaee,	// (0x0004d0bc) bg_popup_window_pane_g1

0xdafd,	// (0x0004d0cb) bg_popup_window_pane_g2_ParamLimits

0xdafd,	// (0x0004d0cb) bg_popup_window_pane_g2

0xdb09,	// (0x0004d0d7) bg_popup_window_pane_g3_ParamLimits

0xdb09,	// (0x0004d0d7) bg_popup_window_pane_g3

0xdb15,	// (0x0004d0e3) bg_popup_window_pane_g4_ParamLimits

0xdb15,	// (0x0004d0e3) bg_popup_window_pane_g4

0xdb24,	// (0x0004d0f2) bg_popup_window_pane_g5_ParamLimits

0xdb24,	// (0x0004d0f2) bg_popup_window_pane_g5

0xdb34,	// (0x0004d102) bg_popup_window_pane_g6_ParamLimits

0xdb34,	// (0x0004d102) bg_popup_window_pane_g6

0xdb40,	// (0x0004d10e) bg_popup_window_pane_g7_ParamLimits

0xdb40,	// (0x0004d10e) bg_popup_window_pane_g7

0xdb4f,	// (0x0004d11d) bg_popup_window_pane_g8_ParamLimits

0xdb4f,	// (0x0004d11d) bg_popup_window_pane_g8

0xdb5e,	// (0x0004d12c) bg_popup_window_pane_g9_ParamLimits

0xdb5e,	// (0x0004d12c) bg_popup_window_pane_g9

0x615c,	// (0x0004572a) bg_popup_window_pane_g10_ParamLimits

0x615c,	// (0x0004572a) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0004eea3) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0004eea3) bg_popup_window_pane_g

0x6079,	// (0x00045647) bg_popup_heading_pane_ParamLimits

0x6079,	// (0x00045647) bg_popup_heading_pane

0x23cf,	// (0x0004199d) tabs_4_passive_pane_cp_srt_ParamLimits

0x23cf,	// (0x0004199d) tabs_4_passive_pane_cp_srt

0x23e1,	// (0x000419af) tabs_4_passive_pane_srt_ParamLimits

0x608d,	// (0x0004565b) heading_pane_g2

0x23e1,	// (0x000419af) tabs_4_passive_pane_srt

0x5400,	// (0x000449ce) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5400,	// (0x000449ce) bg_passive_tab_pane_cp3_srt

0x6095,	// (0x00045663) heading_pane_t1_ParamLimits

0x6095,	// (0x00045663) heading_pane_t1

0x60ac,	// (0x0004567a) heading_pane_t2_ParamLimits

0x60ac,	// (0x0004567a) heading_pane_t2

0x0001,

0xf8d0,	// (0x0004ee9e) heading_pane_t_ParamLimits

0xf8d0,	// (0x0004ee9e) heading_pane_t

0x5ba6,	// (0x00045174) bg_popup_heading_pane_g1

0x5c55,	// (0x00045223) bg_popup_heading_pane_g2

0x5c5f,	// (0x0004522d) bg_popup_heading_pane_g3

0x5c69,	// (0x00045237) bg_popup_heading_pane_g4

0x5c73,	// (0x00045241) bg_popup_heading_pane_g5

0x5c7d,	// (0x0004524b) bg_popup_heading_pane_g6

0x5c85,	// (0x00045253) bg_popup_heading_pane_g7

0x5c8d,	// (0x0004525b) bg_popup_heading_pane_g8

0x5c97,	// (0x00045265) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0004ee5a) bg_popup_heading_pane_g

0x538c,	// (0x0004495a) bg_popup_sub_pane_g1

0x5394,	// (0x00044962) bg_popup_sub_pane_g2

0x539c,	// (0x0004496a) bg_popup_sub_pane_g3

0x53a4,	// (0x00044972) bg_popup_sub_pane_g4

0x53ac,	// (0x0004497a) bg_popup_sub_pane_g5

0x53b4,	// (0x00044982) bg_popup_sub_pane_g6

0x53bc,	// (0x0004498a) bg_popup_sub_pane_g7

0x53c4,	// (0x00044992) bg_popup_sub_pane_g8

0x53cc,	// (0x0004499a) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0004ee34) bg_popup_sub_pane_g

0x38be,	// (0x00042e8c) bg_popup_window_pane_cp5_ParamLimits

0x38be,	// (0x00042e8c) bg_popup_window_pane_cp5

0x38da,	// (0x00042ea8) popup_note_window_g1_ParamLimits

0x38da,	// (0x00042ea8) popup_note_window_g1

0x38e6,	// (0x00042eb4) popup_note_window_t1_ParamLimits

0x38e6,	// (0x00042eb4) popup_note_window_t1

0x38fc,	// (0x00042eca) popup_note_window_t2_ParamLimits

0x38fc,	// (0x00042eca) popup_note_window_t2

0x3912,	// (0x00042ee0) popup_note_window_t3_ParamLimits

0x3912,	// (0x00042ee0) popup_note_window_t3

0x3928,	// (0x00042ef6) popup_note_window_t4_ParamLimits

0x3928,	// (0x00042ef6) popup_note_window_t4

0x3950,	// (0x00042f1e) popup_note_window_t5_ParamLimits

0x3950,	// (0x00042f1e) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004eb4d) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004eb4d) popup_note_window_t

0x3974,	// (0x00042f42) bg_popup_window_pane_cp6_ParamLimits

0x3974,	// (0x00042f42) bg_popup_window_pane_cp6

0x5b22,	// (0x000450f0) popup_note_image_window_g1_ParamLimits

0x5b22,	// (0x000450f0) popup_note_image_window_g1

0x5b2e,	// (0x000450fc) popup_note_image_window_g2_ParamLimits

0x5b2e,	// (0x000450fc) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0004ee28) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0004ee28) popup_note_image_window_g

0x5b47,	// (0x00045115) popup_note_image_window_t1_ParamLimits

0x5b47,	// (0x00045115) popup_note_image_window_t1

0x5b60,	// (0x0004512e) popup_note_image_window_t2_ParamLimits

0x5b60,	// (0x0004512e) popup_note_image_window_t2

0x5b79,	// (0x00045147) popup_note_image_window_t3_ParamLimits

0x5b79,	// (0x00045147) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0004ee2d) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0004ee2d) popup_note_image_window_t

0x59e3,	// (0x00044fb1) bg_popup_window_pane_cp7_ParamLimits

0x59e3,	// (0x00044fb1) bg_popup_window_pane_cp7

0x5a13,	// (0x00044fe1) popup_note_wait_window_g1_ParamLimits

0x5a13,	// (0x00044fe1) popup_note_wait_window_g1

0x5a1f,	// (0x00044fed) popup_note_wait_window_g2_ParamLimits

0x5a1f,	// (0x00044fed) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0004ee16) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0004ee16) popup_note_wait_window_g

0x5a37,	// (0x00045005) popup_note_wait_window_t1_ParamLimits

0x5a37,	// (0x00045005) popup_note_wait_window_t1

0x5a5e,	// (0x0004502c) popup_note_wait_window_t2_ParamLimits

0x5a5e,	// (0x0004502c) popup_note_wait_window_t2

0x5a7b,	// (0x00045049) popup_note_wait_window_t3_ParamLimits

0x5a7b,	// (0x00045049) popup_note_wait_window_t3

0x5a8e,	// (0x0004505c) popup_note_wait_window_t4_ParamLimits

0x5a8e,	// (0x0004505c) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0004ee1d) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0004ee1d) popup_note_wait_window_t

0x5ab3,	// (0x00045081) wait_bar_pane_ParamLimits

0x5ab3,	// (0x00045081) wait_bar_pane

0x3563,	// (0x00042b31) wait_anim_pane

0x3563,	// (0x00042b31) wait_border_pane

0x3559,	// (0x00042b27) wait_anim_pane_g1

0x3559,	// (0x00042b27) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0004ecd6) wait_anim_pane_g

0x5987,	// (0x00044f55) wait_border_pane_g1

0x5992,	// (0x00044f60) wait_border_pane_g2

0x599b,	// (0x00044f69) wait_border_pane_g3

0x0002,

0xf841,	// (0x0004ee0f) wait_border_pane_g

0x57f2,	// (0x00044dc0) bg_popup_window_pane_cp16_ParamLimits

0x57f2,	// (0x00044dc0) bg_popup_window_pane_cp16

0x58f2,	// (0x00044ec0) indicator_popup_pane_cp4_ParamLimits

0x58f2,	// (0x00044ec0) indicator_popup_pane_cp4

0x5906,	// (0x00044ed4) popup_query_data_window_t1_ParamLimits

0x5906,	// (0x00044ed4) popup_query_data_window_t1

0x5918,	// (0x00044ee6) popup_query_data_window_t2_ParamLimits

0x5918,	// (0x00044ee6) popup_query_data_window_t2

0x5931,	// (0x00044eff) popup_query_data_window_t3_ParamLimits

0x5931,	// (0x00044eff) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0004ee08) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0004ee08) popup_query_data_window_t

0x594b,	// (0x00044f19) query_popup_data_pane_ParamLimits

0x594b,	// (0x00044f19) query_popup_data_pane

0x595f,	// (0x00044f2d) query_popup_data_pane_cp1_ParamLimits

0x595f,	// (0x00044f2d) query_popup_data_pane_cp1

0x57f2,	// (0x00044dc0) bg_popup_window_pane_cp10_ParamLimits

0x57f2,	// (0x00044dc0) bg_popup_window_pane_cp10

0x5824,	// (0x00044df2) indicator_popup_pane_ParamLimits

0x5824,	// (0x00044df2) indicator_popup_pane

0x5846,	// (0x00044e14) popup_query_code_window_t1_ParamLimits

0x5846,	// (0x00044e14) popup_query_code_window_t1

0x5860,	// (0x00044e2e) popup_query_code_window_t2_ParamLimits

0x5860,	// (0x00044e2e) popup_query_code_window_t2

0x58a9,	// (0x00044e77) popup_query_code_window_t3_ParamLimits

0x58a9,	// (0x00044e77) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0004ee01) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0004ee01) popup_query_code_window_t

0x58d8,	// (0x00044ea6) query_popup_pane_ParamLimits

0x58d8,	// (0x00044ea6) query_popup_pane

0x3974,	// (0x00042f42) bg_popup_window_pane_cp15_ParamLimits

0x3974,	// (0x00042f42) bg_popup_window_pane_cp15

0x3992,	// (0x00042f60) indicator_popup_pane_cp1_ParamLimits

0x3992,	// (0x00042f60) indicator_popup_pane_cp1

0x39a5,	// (0x00042f73) indicator_popup_pane_cp2_ParamLimits

0x39a5,	// (0x00042f73) indicator_popup_pane_cp2

0x39b8,	// (0x00042f86) popup_query_data_code_window_g1_ParamLimits

0x39b8,	// (0x00042f86) popup_query_data_code_window_g1

0x39cb,	// (0x00042f99) popup_query_data_code_window_t1_ParamLimits

0x39cb,	// (0x00042f99) popup_query_data_code_window_t1

0x39dd,	// (0x00042fab) popup_query_data_code_window_t2_ParamLimits

0x39dd,	// (0x00042fab) popup_query_data_code_window_t2

0x39ef,	// (0x00042fbd) popup_query_data_code_window_t3_ParamLimits

0x39ef,	// (0x00042fbd) popup_query_data_code_window_t3

0x3a05,	// (0x00042fd3) popup_query_data_code_window_t4_ParamLimits

0x3a05,	// (0x00042fd3) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004eb58) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004eb58) popup_query_data_code_window_t

0x1ffa,	// (0x000415c8) list_single_midp_graphic_pane_g3

0x3a1d,	// (0x00042feb) query_popup_data_pane_cp2_ParamLimits

0x3a30,	// (0x00042ffe) query_popup_pane_cp2_ParamLimits

0x3a30,	// (0x00042ffe) query_popup_pane_cp2

0x3563,	// (0x00042b31) bg_popup_window_pane_cp11

0x57ea,	// (0x00044db8) heading_pane_cp5

0x3b1b,	// (0x000430e9) listscroll_popup_info_pane

0x3563,	// (0x00042b31) input_focus_pane_cp3

0x3a43,	// (0x00043011) query_popup_pane_t1

0x3a51,	// (0x0004301f) list_popup_info_pane_ParamLimits

0x3a51,	// (0x0004301f) list_popup_info_pane

0x3a60,	// (0x0004302e) listscroll_popup_info_pane_g1

0x3a68,	// (0x00043036) scroll_pane_cp7

0x3a72,	// (0x00043040) popup_info_list_pane_t1_ParamLimits

0x3a72,	// (0x00043040) popup_info_list_pane_t1

0x3a8c,	// (0x0004305a) popup_info_list_pane_t2_ParamLimits

0x3a8c,	// (0x0004305a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004eb61) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004eb61) popup_info_list_pane_t

0x3563,	// (0x00042b31) bg_popup_window_pane_cp12

0x6b1d,	// (0x000460eb) find_popup_pane

0x3643,	// (0x00042c11) bg_popup_window_pane_cp3

0x3aa6,	// (0x00043074) heading_pane_cp3

0x3ab2,	// (0x00043080) listscroll_popup_graphic_pane

0x3563,	// (0x00042b31) bg_popup_window_pane_cp4

0xd1fb,	// (0x0004c7c9) heading_pane_cp4

0x3b1b,	// (0x000430e9) listscroll_popup_colour_pane

0x3b23,	// (0x000430f1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3b23,	// (0x000430f1) cell_large_graphic_colour_none_popup_pane

0xd203,	// (0x0004c7d1) grid_large_graphic_colour_popup_pane_ParamLimits

0xd203,	// (0x0004c7d1) grid_large_graphic_colour_popup_pane

0x3b63,	// (0x00043131) listscroll_popup_colour_pane_g1_ParamLimits

0x3b63,	// (0x00043131) listscroll_popup_colour_pane_g1

0x3b7a,	// (0x00043148) listscroll_popup_colour_pane_g2_ParamLimits

0x3b7a,	// (0x00043148) listscroll_popup_colour_pane_g2

0x3b91,	// (0x0004315f) listscroll_popup_colour_pane_g3_ParamLimits

0x3b91,	// (0x0004315f) listscroll_popup_colour_pane_g3

0xd227,	// (0x0004c7f5) listscroll_popup_colour_pane_g4_ParamLimits

0xd227,	// (0x0004c7f5) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004eb66) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004eb66) listscroll_popup_colour_pane_g

0x3bb5,	// (0x00043183) scroll_pane_cp6_ParamLimits

0x3bb5,	// (0x00043183) scroll_pane_cp6

0xd237,	// (0x0004c805) cell_large_graphic_colour_popup_pane_ParamLimits

0xd237,	// (0x0004c805) cell_large_graphic_colour_popup_pane

0x3be6,	// (0x000431b4) cell_large_graphic_colour_none_popup_pane_t1

0x3563,	// (0x00042b31) grid_highlight_pane_cp5

0x3bf5,	// (0x000431c3) cell_large_graphic_colour_popup_pane_g1

0x3bfd,	// (0x000431cb) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004eb6f) cell_large_graphic_colour_popup_pane_g

0x3c05,	// (0x000431d3) cell_large_graphic_colour_popup_pane_g2_copy1

0x3c0e,	// (0x000431dc) grid_highlight_pane_cp4

0x3c16,	// (0x000431e4) bg_popup_window_pane_cp8_ParamLimits

0x3c16,	// (0x000431e4) bg_popup_window_pane_cp8

0x3c31,	// (0x000431ff) popup_snote_single_text_window_g1_ParamLimits

0x3c31,	// (0x000431ff) popup_snote_single_text_window_g1

0x3c43,	// (0x00043211) popup_snote_single_text_window_t1_ParamLimits

0x3c43,	// (0x00043211) popup_snote_single_text_window_t1

0x3c56,	// (0x00043224) popup_snote_single_text_window_t2_ParamLimits

0x3c56,	// (0x00043224) popup_snote_single_text_window_t2

0x3c69,	// (0x00043237) popup_snote_single_text_window_t3_ParamLimits

0x3c69,	// (0x00043237) popup_snote_single_text_window_t3

0x3ca2,	// (0x00043270) popup_snote_single_text_window_t4_ParamLimits

0x3ca2,	// (0x00043270) popup_snote_single_text_window_t4

0x3cd6,	// (0x000432a4) popup_snote_single_text_window_t5_ParamLimits

0x3cd6,	// (0x000432a4) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004eb74) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004eb74) popup_snote_single_text_window_t

0x3d05,	// (0x000432d3) bg_popup_window_pane_cp9_ParamLimits

0x3d05,	// (0x000432d3) bg_popup_window_pane_cp9

0x3c31,	// (0x000431ff) popup_snote_single_graphic_window_g1_ParamLimits

0x3c31,	// (0x000431ff) popup_snote_single_graphic_window_g1

0x3d13,	// (0x000432e1) popup_snote_single_graphic_window_g2_ParamLimits

0x3d13,	// (0x000432e1) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004eb7f) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004eb7f) popup_snote_single_graphic_window_g

0x3d1f,	// (0x000432ed) popup_snote_single_graphic_window_t1_ParamLimits

0x3d1f,	// (0x000432ed) popup_snote_single_graphic_window_t1

0x3d32,	// (0x00043300) popup_snote_single_graphic_window_t2_ParamLimits

0x3d32,	// (0x00043300) popup_snote_single_graphic_window_t2

0x3d45,	// (0x00043313) popup_snote_single_graphic_window_t3_ParamLimits

0x3d45,	// (0x00043313) popup_snote_single_graphic_window_t3

0x3d7e,	// (0x0004334c) popup_snote_single_graphic_window_t4_ParamLimits

0x3d7e,	// (0x0004334c) popup_snote_single_graphic_window_t4

0x3db2,	// (0x00043380) popup_snote_single_graphic_window_t5_ParamLimits

0x3db2,	// (0x00043380) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0004eb84) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0004eb84) popup_snote_single_graphic_window_t

0xde42,	// (0x0004d410) grid_graphic_popup_pane_ParamLimits

0xde42,	// (0x0004d410) grid_graphic_popup_pane

0x6a89,	// (0x00046057) listscroll_popup_graphic_pane_g1_ParamLimits

0x6a89,	// (0x00046057) listscroll_popup_graphic_pane_g1

0xde61,	// (0x0004d42f) listscroll_popup_graphic_pane_g2_ParamLimits

0xde61,	// (0x0004d42f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0004ef7e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0004ef7e) listscroll_popup_graphic_pane_g

0x6ab1,	// (0x0004607f) scroll_pane_cp5

0xddfe,	// (0x0004d3cc) cell_graphic_popup_pane_ParamLimits

0xddfe,	// (0x0004d3cc) cell_graphic_popup_pane

0x69de,	// (0x00045fac) cell_graphic_popup_pane_g1

0x69e6,	// (0x00045fb4) cell_graphic_popup_pane_g2

0x3c05,	// (0x000431d3) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0004ef77) cell_graphic_popup_pane_g

0x69ef,	// (0x00045fbd) cell_graphic_popup_pane_t2

0x3c0e,	// (0x000431dc) grid_highlight_pane_cp3

0x3df3,	// (0x000433c1) list_gen_pane_ParamLimits

0x3df3,	// (0x000433c1) list_gen_pane

0x3e25,	// (0x000433f3) scroll_pane

0xddb5,	// (0x0004d383) bg_list_pane_g1_ParamLimits

0xddb5,	// (0x0004d383) bg_list_pane_g1

0x6953,	// (0x00045f21) bg_list_pane_g2_ParamLimits

0x6953,	// (0x00045f21) bg_list_pane_g2

0x6968,	// (0x00045f36) bg_list_pane_g3_ParamLimits

0x6968,	// (0x00045f36) bg_list_pane_g3

0x697c,	// (0x00045f4a) bg_list_pane_g4_ParamLimits

0x697c,	// (0x00045f4a) bg_list_pane_g4

0xddd2,	// (0x0004d3a0) bg_list_pane_g5_ParamLimits

0xddd2,	// (0x0004d3a0) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0004ef6c) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0004ef6c) bg_list_pane_g

0xdd7d,	// (0x0004d34b) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd7d,	// (0x0004d34b) list_double2_graphic_large_graphic_pane

0xdd7d,	// (0x0004d34b) list_double2_graphic_pane_ParamLimits

0xdd7d,	// (0x0004d34b) list_double2_graphic_pane

0xdd7d,	// (0x0004d34b) list_double2_large_graphic_pane_ParamLimits

0xdd7d,	// (0x0004d34b) list_double2_large_graphic_pane

0xdd7d,	// (0x0004d34b) list_double2_pane_ParamLimits

0xdd7d,	// (0x0004d34b) list_double2_pane

0xdd7d,	// (0x0004d34b) list_double_graphic_heading_pane_ParamLimits

0xdd7d,	// (0x0004d34b) list_double_graphic_heading_pane

0xdd7d,	// (0x0004d34b) list_double_graphic_pane_ParamLimits

0xdd7d,	// (0x0004d34b) list_double_graphic_pane

0xdd7d,	// (0x0004d34b) list_double_heading_pane_ParamLimits

0xdd7d,	// (0x0004d34b) list_double_heading_pane

0xdd7d,	// (0x0004d34b) list_double_large_graphic_pane_ParamLimits

0xdd7d,	// (0x0004d34b) list_double_large_graphic_pane

0xdd7d,	// (0x0004d34b) list_double_number_pane_ParamLimits

0xdd7d,	// (0x0004d34b) list_double_number_pane

0xdd7d,	// (0x0004d34b) list_double_pane_ParamLimits

0xdd7d,	// (0x0004d34b) list_double_pane

0xdd7d,	// (0x0004d34b) list_double_time_pane_ParamLimits

0xdd7d,	// (0x0004d34b) list_double_time_pane

0xdd7d,	// (0x0004d34b) list_setting_number_pane_ParamLimits

0xdd7d,	// (0x0004d34b) list_setting_number_pane

0xdd7d,	// (0x0004d34b) list_setting_pane_ParamLimits

0xdd7d,	// (0x0004d34b) list_setting_pane

0xdd8f,	// (0x0004d35d) list_single_2graphic_pane_ParamLimits

0xdd8f,	// (0x0004d35d) list_single_2graphic_pane

0xdd8f,	// (0x0004d35d) list_single_graphic_heading_pane_ParamLimits

0xdd8f,	// (0x0004d35d) list_single_graphic_heading_pane

0xdd8f,	// (0x0004d35d) list_single_graphic_pane_ParamLimits

0xdd8f,	// (0x0004d35d) list_single_graphic_pane

0xdd8f,	// (0x0004d35d) list_single_heading_pane_ParamLimits

0xdd8f,	// (0x0004d35d) list_single_heading_pane

0xdd7d,	// (0x0004d34b) list_single_large_graphic_pane_ParamLimits

0xdd7d,	// (0x0004d34b) list_single_large_graphic_pane

0xdd8f,	// (0x0004d35d) list_single_number_heading_pane_ParamLimits

0xdd8f,	// (0x0004d35d) list_single_number_heading_pane

0xdd8f,	// (0x0004d35d) list_single_number_pane_ParamLimits

0xdd8f,	// (0x0004d35d) list_single_number_pane

0xdd8f,	// (0x0004d35d) list_single_pane_ParamLimits

0xdd8f,	// (0x0004d35d) list_single_pane

0x3563,	// (0x00042b31) list_highlight_pane_cp1

0x4a7d,	// (0x0004404b) list_single_pane_g1_ParamLimits

0x4a7d,	// (0x0004404b) list_single_pane_g1

0x1fc9,	// (0x00041597) list_single_pane_g2_ParamLimits

0x1fc9,	// (0x00041597) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004eba0) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004eba0) list_single_pane_g

0x0981,	// (0x0003ff4f) list_single_pane_t1_ParamLimits

0x0981,	// (0x0003ff4f) list_single_pane_t1

0x4a7d,	// (0x0004404b) list_single_number_pane_g1_ParamLimits

0x4a7d,	// (0x0004404b) list_single_number_pane_g1

0x1fc9,	// (0x00041597) list_single_number_pane_g2_ParamLimits

0x1fc9,	// (0x00041597) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004eba0) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004eba0) list_single_number_pane_g

0x0717,	// (0x0003fce5) list_single_number_pane_t1_ParamLimits

0x0717,	// (0x0003fce5) list_single_number_pane_t1

0xbb8b,	// (0x0004b159) list_single_number_pane_t2_ParamLimits

0xbb8b,	// (0x0004b159) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0004ef2d) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0004ef2d) list_single_number_pane_t

0xb52c,	// (0x0004aafa) list_single_graphic_pane_g1_ParamLimits

0xb52c,	// (0x0004aafa) list_single_graphic_pane_g1

0x4a7d,	// (0x0004404b) list_single_graphic_pane_g2_ParamLimits

0x4a7d,	// (0x0004404b) list_single_graphic_pane_g2

0x1fc9,	// (0x00041597) list_single_graphic_pane_g3_ParamLimits

0x1fc9,	// (0x00041597) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004eb8f) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004eb8f) list_single_graphic_pane_g

0xb538,	// (0x0004ab06) list_single_graphic_pane_t1_ParamLimits

0xb538,	// (0x0004ab06) list_single_graphic_pane_t1

0xb54e,	// (0x0004ab1c) list_single_heading_pane_g1_ParamLimits

0xb54e,	// (0x0004ab1c) list_single_heading_pane_g1

0x1fc9,	// (0x00041597) list_single_heading_pane_g2_ParamLimits

0x1fc9,	// (0x00041597) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004eb96) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004eb96) list_single_heading_pane_g

0xb561,	// (0x0004ab2f) list_single_heading_pane_t1_ParamLimits

0xb561,	// (0x0004ab2f) list_single_heading_pane_t1

0xbf61,	// (0x0004b52f) list_single_heading_pane_t2_ParamLimits

0xbf61,	// (0x0004b52f) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0004eb9b) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0004eb9b) list_single_heading_pane_t

0x4a7d,	// (0x0004404b) list_single_number_heading_pane_g1_ParamLimits

0x4a7d,	// (0x0004404b) list_single_number_heading_pane_g1

0x1fc9,	// (0x00041597) list_single_number_heading_pane_g2_ParamLimits

0x1fc9,	// (0x00041597) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004eba0) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004eba0) list_single_number_heading_pane_g

0xb577,	// (0x0004ab45) list_single_number_heading_pane_t1_ParamLimits

0xb577,	// (0x0004ab45) list_single_number_heading_pane_t1

0xb58d,	// (0x0004ab5b) list_single_number_heading_pane_t2_ParamLimits

0xb58d,	// (0x0004ab5b) list_single_number_heading_pane_t2

0x095b,	// (0x0003ff29) list_single_number_heading_pane_t3_ParamLimits

0x095b,	// (0x0003ff29) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004eba5) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004eba5) list_single_number_heading_pane_t

0xb59f,	// (0x0004ab6d) list_single_graphic_heading_pane_g1_ParamLimits

0xb59f,	// (0x0004ab6d) list_single_graphic_heading_pane_g1

0xbf73,	// (0x0004b541) list_single_graphic_heading_pane_g4_ParamLimits

0xbf73,	// (0x0004b541) list_single_graphic_heading_pane_g4

0x1fc9,	// (0x00041597) list_single_graphic_heading_pane_g5_ParamLimits

0x1fc9,	// (0x00041597) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0004ebac) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0004ebac) list_single_graphic_heading_pane_g

0xb577,	// (0x0004ab45) list_single_graphic_heading_pane_t1_ParamLimits

0xb577,	// (0x0004ab45) list_single_graphic_heading_pane_t1

0xb5b7,	// (0x0004ab85) list_single_graphic_heading_pane_t2_ParamLimits

0xb5b7,	// (0x0004ab85) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004ebb3) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004ebb3) list_single_graphic_heading_pane_t

0x0997,	// (0x0003ff65) list_single_large_graphic_pane_g1_ParamLimits

0x0997,	// (0x0003ff65) list_single_large_graphic_pane_g1

0x09a3,	// (0x0003ff71) list_single_large_graphic_pane_g2_ParamLimits

0x09a3,	// (0x0003ff71) list_single_large_graphic_pane_g2

0x09af,	// (0x0003ff7d) list_single_large_graphic_pane_g3_ParamLimits

0x09af,	// (0x0003ff7d) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0004ebb8) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0004ebb8) list_single_large_graphic_pane_g

0x5992,	// (0x00044f60) wait_border_pane_g2_copy1

0x1384,	// (0x00040952) list_single_large_graphic_pane_g4_cp2

0x09bb,	// (0x0003ff89) list_single_large_graphic_pane_t1_ParamLimits

0x09bb,	// (0x0003ff89) list_single_large_graphic_pane_t1

0x4968,	// (0x00043f36) list_double_pane_g1_ParamLimits

0x4968,	// (0x00043f36) list_double_pane_g1

0xbf84,	// (0x0004b552) list_double_pane_g2_ParamLimits

0xbf84,	// (0x0004b552) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004ebbf) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004ebbf) list_double_pane_g

0xb5cd,	// (0x0004ab9b) list_double_pane_t1_ParamLimits

0xb5cd,	// (0x0004ab9b) list_double_pane_t1

0xb5e3,	// (0x0004abb1) list_double_pane_t2_ParamLimits

0xb5e3,	// (0x0004abb1) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004ebc4) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004ebc4) list_double_pane_t

0xb5f5,	// (0x0004abc3) list_double2_pane_g1_ParamLimits

0xb5f5,	// (0x0004abc3) list_double2_pane_g1

0xb606,	// (0x0004abd4) list_double2_pane_g2_ParamLimits

0xb606,	// (0x0004abd4) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0004ebc9) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0004ebc9) list_double2_pane_g

0xb612,	// (0x0004abe0) list_double2_pane_t1_ParamLimits

0xb612,	// (0x0004abe0) list_double2_pane_t1

0xb628,	// (0x0004abf6) list_double2_pane_t2_ParamLimits

0xb628,	// (0x0004abf6) list_double2_pane_t2

0x0001,

0xf600,	// (0x0004ebce) list_double2_pane_t_ParamLimits

0xf600,	// (0x0004ebce) list_double2_pane_t

0x4968,	// (0x00043f36) list_double_number_pane_g1_ParamLimits

0x4968,	// (0x00043f36) list_double_number_pane_g1

0xbf84,	// (0x0004b552) list_double_number_pane_g2_ParamLimits

0xbf84,	// (0x0004b552) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004ebbf) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004ebbf) list_double_number_pane_g

0xb63a,	// (0x0004ac08) list_double_number_pane_t1_ParamLimits

0xb63a,	// (0x0004ac08) list_double_number_pane_t1

0xb64c,	// (0x0004ac1a) list_double_number_pane_t2_ParamLimits

0xb64c,	// (0x0004ac1a) list_double_number_pane_t2

0xb662,	// (0x0004ac30) list_double_number_pane_t3_ParamLimits

0xb662,	// (0x0004ac30) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004ebd3) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004ebd3) list_double_number_pane_t

0xb674,	// (0x0004ac42) list_double_graphic_pane_g1_ParamLimits

0xb674,	// (0x0004ac42) list_double_graphic_pane_g1

0xb680,	// (0x0004ac4e) list_double_graphic_pane_g2_ParamLimits

0xb680,	// (0x0004ac4e) list_double_graphic_pane_g2

0xb68f,	// (0x0004ac5d) list_double_graphic_pane_g3_ParamLimits

0xb68f,	// (0x0004ac5d) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0004ebda) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0004ebda) list_double_graphic_pane_g

0xb69b,	// (0x0004ac69) list_double_graphic_pane_t1_ParamLimits

0xb69b,	// (0x0004ac69) list_double_graphic_pane_t1

0xb6b1,	// (0x0004ac7f) list_double_graphic_pane_t2_ParamLimits

0xb6b1,	// (0x0004ac7f) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004ebe3) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004ebe3) list_double_graphic_pane_t

0xb6c3,	// (0x0004ac91) list_double2_graphic_pane_g1_ParamLimits

0xb6c3,	// (0x0004ac91) list_double2_graphic_pane_g1

0xb6cf,	// (0x0004ac9d) list_double2_graphic_pane_g2_ParamLimits

0xb6cf,	// (0x0004ac9d) list_double2_graphic_pane_g2

0xbf9c,	// (0x0004b56a) list_double2_graphic_pane_g3_ParamLimits

0xbf9c,	// (0x0004b56a) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0004ebe8) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0004ebe8) list_double2_graphic_pane_g

0xb6db,	// (0x0004aca9) list_double2_graphic_pane_t1_ParamLimits

0xb6db,	// (0x0004aca9) list_double2_graphic_pane_t1

0xb6f1,	// (0x0004acbf) list_double2_graphic_pane_t2_ParamLimits

0xb6f1,	// (0x0004acbf) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0004ebef) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0004ebef) list_double2_graphic_pane_t

0xb703,	// (0x0004acd1) list_double_large_graphic_pane_g1_ParamLimits

0xb703,	// (0x0004acd1) list_double_large_graphic_pane_g1

0xb722,	// (0x0004acf0) list_double_large_graphic_pane_g2_ParamLimits

0xb722,	// (0x0004acf0) list_double_large_graphic_pane_g2

0xbf84,	// (0x0004b552) list_double_large_graphic_pane_g3_ParamLimits

0xbf84,	// (0x0004b552) list_double_large_graphic_pane_g3

0xb738,	// (0x0004ad06) list_double_large_graphic_pane_g4_ParamLimits

0xb738,	// (0x0004ad06) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0004ebf4) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0004ebf4) list_double_large_graphic_pane_g

0xb74a,	// (0x0004ad18) list_double_large_graphic_pane_t1_ParamLimits

0xb74a,	// (0x0004ad18) list_double_large_graphic_pane_t1

0xb763,	// (0x0004ad31) list_double_large_graphic_pane_t2_ParamLimits

0xb763,	// (0x0004ad31) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0004ebff) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0004ebff) list_double_large_graphic_pane_t

0xb775,	// (0x0004ad43) list_double2_large_graphic_pane_g1_ParamLimits

0xb775,	// (0x0004ad43) list_double2_large_graphic_pane_g1

0xb781,	// (0x0004ad4f) list_double2_large_graphic_pane_g2_ParamLimits

0xb781,	// (0x0004ad4f) list_double2_large_graphic_pane_g2

0xbf9c,	// (0x0004b56a) list_double2_large_graphic_pane_g3_ParamLimits

0xbf9c,	// (0x0004b56a) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0004ec04) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0004ec04) list_double2_large_graphic_pane_g

0xb792,	// (0x0004ad60) list_double2_large_graphic_pane_t1_ParamLimits

0xb792,	// (0x0004ad60) list_double2_large_graphic_pane_t1

0xb7a8,	// (0x0004ad76) list_double2_large_graphic_pane_t2_ParamLimits

0xb7a8,	// (0x0004ad76) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004ec0b) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004ec0b) list_double2_large_graphic_pane_t

0xb7ba,	// (0x0004ad88) list_double_heading_pane_g1_ParamLimits

0xb7ba,	// (0x0004ad88) list_double_heading_pane_g1

0xb7cb,	// (0x0004ad99) list_double_heading_pane_g2_ParamLimits

0xb7cb,	// (0x0004ad99) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0004ec10) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0004ec10) list_double_heading_pane_g

0xb7d7,	// (0x0004ada5) list_double_heading_pane_t1_ParamLimits

0xb7d7,	// (0x0004ada5) list_double_heading_pane_t1

0xb628,	// (0x0004abf6) list_double_heading_pane_t2_ParamLimits

0xb628,	// (0x0004abf6) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0004ec15) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0004ec15) list_double_heading_pane_t

0xb7ed,	// (0x0004adbb) list_double_graphic_heading_pane_g1_ParamLimits

0xb7ed,	// (0x0004adbb) list_double_graphic_heading_pane_g1

0xb7ba,	// (0x0004ad88) list_double_graphic_heading_pane_g2_ParamLimits

0xb7ba,	// (0x0004ad88) list_double_graphic_heading_pane_g2

0xb7cb,	// (0x0004ad99) list_double_graphic_heading_pane_g3_ParamLimits

0xb7cb,	// (0x0004ad99) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0004ec1a) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0004ec1a) list_double_graphic_heading_pane_g

0xb7f9,	// (0x0004adc7) list_double_graphic_heading_pane_t1_ParamLimits

0xb7f9,	// (0x0004adc7) list_double_graphic_heading_pane_t1

0xb6f1,	// (0x0004acbf) list_double_graphic_heading_pane_t2_ParamLimits

0xb6f1,	// (0x0004acbf) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0004ec21) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0004ec21) list_double_graphic_heading_pane_t

0xb80f,	// (0x0004addd) list_double_time_pane_g1_ParamLimits

0xb80f,	// (0x0004addd) list_double_time_pane_g1

0xb820,	// (0x0004adee) list_double_time_pane_g2_ParamLimits

0xb820,	// (0x0004adee) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0004ec26) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0004ec26) list_double_time_pane_g

0xb82c,	// (0x0004adfa) list_double_time_pane_t1_ParamLimits

0xb82c,	// (0x0004adfa) list_double_time_pane_t1

0xb842,	// (0x0004ae10) list_double_time_pane_t2_ParamLimits

0xb842,	// (0x0004ae10) list_double_time_pane_t2

0xb854,	// (0x0004ae22) list_double_time_pane_t3_ParamLimits

0xb854,	// (0x0004ae22) list_double_time_pane_t3

0xb866,	// (0x0004ae34) list_double_time_pane_t4_ParamLimits

0xb866,	// (0x0004ae34) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0004ec2b) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0004ec2b) list_double_time_pane_t

0xb878,	// (0x0004ae46) list_setting_pane_g1_ParamLimits

0xb878,	// (0x0004ae46) list_setting_pane_g1

0xb606,	// (0x0004abd4) list_setting_pane_g2_ParamLimits

0xb606,	// (0x0004abd4) list_setting_pane_g2

0x0001,

0xf666,	// (0x0004ec34) list_setting_pane_g_ParamLimits

0xf666,	// (0x0004ec34) list_setting_pane_g

0xb884,	// (0x0004ae52) list_setting_pane_t1_ParamLimits

0xb884,	// (0x0004ae52) list_setting_pane_t1

0xb89e,	// (0x0004ae6c) list_setting_pane_t2_ParamLimits

0xb89e,	// (0x0004ae6c) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0004ec39) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0004ec39) list_setting_pane_t

0xb8dd,	// (0x0004aeab) set_value_pane_cp_ParamLimits

0xb8dd,	// (0x0004aeab) set_value_pane_cp

0xb8e9,	// (0x0004aeb7) list_setting_number_pane_g1_ParamLimits

0xb8e9,	// (0x0004aeb7) list_setting_number_pane_g1

0xb8f5,	// (0x0004aec3) list_setting_number_pane_g2_ParamLimits

0xb8f5,	// (0x0004aec3) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0004ec40) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0004ec40) list_setting_number_pane_g

0xb901,	// (0x0004aecf) list_setting_number_pane_t1_ParamLimits

0xb901,	// (0x0004aecf) list_setting_number_pane_t1

0xb91a,	// (0x0004aee8) list_setting_number_pane_t2_ParamLimits

0xb91a,	// (0x0004aee8) list_setting_number_pane_t2

0xb934,	// (0x0004af02) list_setting_number_pane_t3_ParamLimits

0xb934,	// (0x0004af02) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0004ec45) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0004ec45) list_setting_number_pane_t

0xb8dd,	// (0x0004aeab) set_value_pane_ParamLimits

0xb8dd,	// (0x0004aeab) set_value_pane

0x3e65,	// (0x00043433) bg_set_opt_pane_ParamLimits

0x3e65,	// (0x00043433) bg_set_opt_pane

0x03a8,	// (0x0003f976) set_value_pane_t1

0x3e86,	// (0x00043454) slider_set_pane_cp3

0x3e8f,	// (0x0004345d) volume_small_pane_cp

0x3e98,	// (0x00043466) list_form_gen_pane

0x3ea1,	// (0x0004346f) scroll_pane_cp8

0xb977,	// (0x0004af45) form_field_data_pane_ParamLimits

0xb977,	// (0x0004af45) form_field_data_pane

0xb98e,	// (0x0004af5c) form_field_data_wide_pane_ParamLimits

0xb98e,	// (0x0004af5c) form_field_data_wide_pane

0xb9ae,	// (0x0004af7c) form_field_popup_pane_ParamLimits

0xb9ae,	// (0x0004af7c) form_field_popup_pane

0xb9c6,	// (0x0004af94) form_field_popup_wide_pane_ParamLimits

0xb9c6,	// (0x0004af94) form_field_popup_wide_pane

0x0444,	// (0x0003fa12) form_field_slider_pane_ParamLimits

0x0444,	// (0x0003fa12) form_field_slider_pane

0x0457,	// (0x0003fa25) form_field_slider_wide_pane_ParamLimits

0x0457,	// (0x0003fa25) form_field_slider_wide_pane

0x3eb2,	// (0x00043480) data_form_pane

0xb9e7,	// (0x0004afb5) form_field_data_pane_t1

0x3ebe,	// (0x0004348c) input_focus_pane

0x048c,	// (0x0003fa5a) data_form_wide_pane

0x04a9,	// (0x0003fa77) form_field_data_wide_pane_t1

0x3c23,	// (0x000431f1) input_focus_pane_cp6

0xba01,	// (0x0004afcf) form_field_popup_pane_t1

0x3ebe,	// (0x0004348c) input_focus_pane_cp7

0x3ee0,	// (0x000434ae) list_form_pane

0x04eb,	// (0x0003fab9) form_field_popup_wide_pane_t1

0x3ebe,	// (0x0004348c) input_focus_pane_cp8

0x3eec,	// (0x000434ba) list_form_wide_pane

0xba23,	// (0x0004aff1) form_field_slider_pane_t1_ParamLimits

0xba23,	// (0x0004aff1) form_field_slider_pane_t1

0xba3b,	// (0x0004b009) form_field_slider_pane_t2_ParamLimits

0xba3b,	// (0x0004b009) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0004ec55) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0004ec55) form_field_slider_pane_t

0x38be,	// (0x00042e8c) input_focus_pane_cp9_ParamLimits

0x38be,	// (0x00042e8c) input_focus_pane_cp9

0xba50,	// (0x0004b01e) slider_cont_pane_ParamLimits

0xba50,	// (0x0004b01e) slider_cont_pane

0x3efb,	// (0x000434c9) form_field_slider_wide_pane_t1_ParamLimits

0x3efb,	// (0x000434c9) form_field_slider_wide_pane_t1

0x0547,	// (0x0003fb15) form_field_slider_wide_pane_t2_ParamLimits

0x0547,	// (0x0003fb15) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0004ec5a) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0004ec5a) form_field_slider_wide_pane_t

0x38be,	// (0x00042e8c) input_focus_pane_cp10_ParamLimits

0x38be,	// (0x00042e8c) input_focus_pane_cp10

0xba64,	// (0x0004b032) slider_cont_pane_cp1_ParamLimits

0xba64,	// (0x0004b032) slider_cont_pane_cp1

0xba78,	// (0x0004b046) slider_form_pane_cp

0x3f0d,	// (0x000434db) input_focus_pane_g1

0x3f15,	// (0x000434e3) input_focus_pane_g2

0x3f1d,	// (0x000434eb) input_focus_pane_g3

0x3f25,	// (0x000434f3) input_focus_pane_g4

0x3f2d,	// (0x000434fb) input_focus_pane_g5

0x3f35,	// (0x00043503) input_focus_pane_g6

0x3f3d,	// (0x0004350b) input_focus_pane_g7

0x3f45,	// (0x00043513) input_focus_pane_g8

0x3f4d,	// (0x0004351b) input_focus_pane_g9

0x3559,	// (0x00042b27) input_focus_pane_g10

0x0009,

0xf691,	// (0x0004ec5f) input_focus_pane_g

0x599b,	// (0x00044f69) wait_border_pane_g3_copy1

0xba80,	// (0x0004b04e) data_form_pane_t1

0x3559,	// (0x00042b27) wait_anim_pane_g1_copy1

0xbb9d,	// (0x0004b16b) data_form_wide_pane_t1

0xba99,	// (0x0004b067) list_form_graphic_pane_cp_ParamLimits

0xba99,	// (0x0004b067) list_form_graphic_pane_cp

0x68c8,	// (0x00045e96) slider_form_pane_g1

0x68d1,	// (0x00045e9f) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0004ef5d) slider_form_pane_g

0xbaaa,	// (0x0004b078) list_form_graphic_pane_ParamLimits

0xbaaa,	// (0x0004b078) list_form_graphic_pane

0x05c5,	// (0x0003fb93) list_form_graphic_pane_g1

0x05cd,	// (0x0003fb9b) list_form_graphic_pane_t1_ParamLimits

0x05cd,	// (0x0003fb9b) list_form_graphic_pane_t1

0x3643,	// (0x00042c11) list_highlight_pane_cp5_ParamLimits

0x3643,	// (0x00042c11) list_highlight_pane_cp5

0xbabc,	// (0x0004b08a) find_pane_g1

0x3f55,	// (0x00043523) input_find_pane

0xbac5,	// (0x0004b093) input_find_pane_g1_ParamLimits

0xbac5,	// (0x0004b093) input_find_pane_g1

0xbad1,	// (0x0004b09f) input_find_pane_t1_ParamLimits

0xbad1,	// (0x0004b09f) input_find_pane_t1

0xbae6,	// (0x0004b0b4) input_find_pane_t2_ParamLimits

0xbae6,	// (0x0004b0b4) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0004ec74) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0004ec74) input_find_pane_t

0x3f5e,	// (0x0004352c) input_focus_pane_cp5_ParamLimits

0x3f5e,	// (0x0004352c) input_focus_pane_cp5

0x3f78,	// (0x00043546) bg_popup_window_pane_cp2_ParamLimits

0x3f78,	// (0x00043546) bg_popup_window_pane_cp2

0x3f85,	// (0x00043553) listscroll_menu_pane_ParamLimits

0x3f85,	// (0x00043553) listscroll_menu_pane

0xd26c,	// (0x0004c83a) popup_submenu_window_ParamLimits

0xd26c,	// (0x0004c83a) popup_submenu_window

0x3fbd,	// (0x0004358b) find_popup_pane_g1

0x3fc5,	// (0x00043593) input_popup_find_pane_cp

0x3f5e,	// (0x0004352c) input_focus_pane_cp4_ParamLimits

0x3f5e,	// (0x0004352c) input_focus_pane_cp4

0x3fdb,	// (0x000435a9) input_popup_find_pane_t1_ParamLimits

0x3fdb,	// (0x000435a9) input_popup_find_pane_t1

0x3563,	// (0x00042b31) bg_popup_sub_pane_cp

0x4009,	// (0x000435d7) listscroll_popup_sub_pane

0x4011,	// (0x000435df) list_submenu_pane_ParamLimits

0x4011,	// (0x000435df) list_submenu_pane

0x4022,	// (0x000435f0) scroll_pane_cp4

0x402a,	// (0x000435f8) list_single_popup_submenu_pane_ParamLimits

0x402a,	// (0x000435f8) list_single_popup_submenu_pane

0x403e,	// (0x0004360c) list_single_popup_submenu_pane_g1

0x4046,	// (0x00043614) list_single_popup_submenu_pane_t1_ParamLimits

0x4046,	// (0x00043614) list_single_popup_submenu_pane_t1

0x38be,	// (0x00042e8c) bg_active_tab_pane_cp1_ParamLimits

0x38be,	// (0x00042e8c) bg_active_tab_pane_cp1

0x405b,	// (0x00043629) tabs_2_active_pane_g1

0xd2a6,	// (0x0004c874) tabs_2_active_pane_t1

0x38be,	// (0x00042e8c) bg_passive_tab_pane_cp1_ParamLimits

0x38be,	// (0x00042e8c) bg_passive_tab_pane_cp1

0x405b,	// (0x00043629) tabs_2_passive_pane_g1

0xd2a6,	// (0x0004c874) tabs_2_passive_pane_t1

0x3643,	// (0x00042c11) bg_active_tab_pane_cp4

0xd2b8,	// (0x0004c886) tabs_2_long_active_pane_t1

0x4e82,	// (0x00044450) bg_passive_tab_pane_cp4

0x167e,	// (0x00040c4c) list_single_midp_graphic_pane_g4_ParamLimits

0x3643,	// (0x00042c11) bg_active_tab_pane_cp5

0xd2cb,	// (0x0004c899) tabs_3_long_active_pane_t1

0x4e82,	// (0x00044450) bg_passive_tab_pane_cp5

0x167e,	// (0x00040c4c) list_single_midp_graphic_pane_g4

0x3643,	// (0x00042c11) bg_popup_window_pane_cp13_ParamLimits

0x3643,	// (0x00042c11) bg_popup_window_pane_cp13

0x40bd,	// (0x0004368b) listscroll_popup_fast_pane_ParamLimits

0x40bd,	// (0x0004368b) listscroll_popup_fast_pane

0x40cc,	// (0x0004369a) grid_popup_fast_pane_ParamLimits

0x40cc,	// (0x0004369a) grid_popup_fast_pane

0x40de,	// (0x000436ac) scroll_pane_cp9_ParamLimits

0x40de,	// (0x000436ac) scroll_pane_cp9

0x818f,	// (0x0004775d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x818f,	// (0x0004775d) list_single_graphic_hl_pane_t1_cp2

0x4102,	// (0x000436d0) input_focus_pane_cp20_ParamLimits

0x4102,	// (0x000436d0) input_focus_pane_cp20

0x4110,	// (0x000436de) query_popup_data_pane_t1_ParamLimits

0x4110,	// (0x000436de) query_popup_data_pane_t1

0x4123,	// (0x000436f1) query_popup_data_pane_t2_ParamLimits

0x4123,	// (0x000436f1) query_popup_data_pane_t2

0x4169,	// (0x00043737) query_popup_data_pane_t3_ParamLimits

0x4169,	// (0x00043737) query_popup_data_pane_t3

0x41aa,	// (0x00043778) query_popup_data_pane_t4_ParamLimits

0x41aa,	// (0x00043778) query_popup_data_pane_t4

0x41e6,	// (0x000437b4) query_popup_data_pane_t5_ParamLimits

0x41e6,	// (0x000437b4) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0004ec79) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0004ec79) query_popup_data_pane_t

0x3f0d,	// (0x000434db) bg_set_opt_pane_g1

0x3f15,	// (0x000434e3) bg_set_opt_pane_g2

0x3f1d,	// (0x000434eb) bg_set_opt_pane_g3

0x3f25,	// (0x000434f3) bg_set_opt_pane_g4

0x3f2d,	// (0x000434fb) bg_set_opt_pane_g5

0x3f35,	// (0x00043503) bg_set_opt_pane_g6

0x3f3d,	// (0x0004350b) bg_set_opt_pane_g7

0x3f45,	// (0x00043513) bg_set_opt_pane_g8

0x3f4d,	// (0x0004351b) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0004ec84) bg_set_opt_pane_g

0x168a,	// (0x00040c58) control_top_pane_stacon_ParamLimits

0x168a,	// (0x00040c58) control_top_pane_stacon

0x16dd,	// (0x00040cab) signal_pane_stacon_ParamLimits

0x16dd,	// (0x00040cab) signal_pane_stacon

0x47d2,	// (0x00043da0) stacon_top_pane_g1_ParamLimits

0x47d2,	// (0x00043da0) stacon_top_pane_g1

0x1702,	// (0x00040cd0) title_pane_stacon_ParamLimits

0x1702,	// (0x00040cd0) title_pane_stacon

0x172c,	// (0x00040cfa) uni_indicator_pane_stacon_ParamLimits

0x172c,	// (0x00040cfa) uni_indicator_pane_stacon

0x1741,	// (0x00040d0f) battery_pane_stacon_ParamLimits

0x1741,	// (0x00040d0f) battery_pane_stacon

0x1785,	// (0x00040d53) control_bottom_pane_stacon_ParamLimits

0x1785,	// (0x00040d53) control_bottom_pane_stacon

0x17a8,	// (0x00040d76) navi_pane_stacon_ParamLimits

0x17a8,	// (0x00040d76) navi_pane_stacon

0x47f4,	// (0x00043dc2) stacon_bottom_pane_g1_ParamLimits

0x47f4,	// (0x00043dc2) stacon_bottom_pane_g1

0x13d1,	// (0x0004099f) aid_levels_signal_lsc_ParamLimits

0x13d1,	// (0x0004099f) aid_levels_signal_lsc

0x13e7,	// (0x000409b5) signal_pane_stacon_g1_ParamLimits

0x13e7,	// (0x000409b5) signal_pane_stacon_g1

0x13fb,	// (0x000409c9) signal_pane_stacon_g2_ParamLimits

0x13fb,	// (0x000409c9) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0004ec97) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004ec97) signal_pane_stacon_g

0x1430,	// (0x000409fe) title_pane_stacon_t1_ParamLimits

0x1430,	// (0x000409fe) title_pane_stacon_t1

0x422a,	// (0x000437f8) uni_indicator_pane_stacon_g1

0x4234,	// (0x00043802) uni_indicator_pane_stacon_g2

0x423e,	// (0x0004380c) uni_indicator_pane_stacon_g3

0x4248,	// (0x00043816) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0004eca3) uni_indicator_pane_stacon_g

0x1455,	// (0x00040a23) control_top_pane_stacon_g1

0x145d,	// (0x00040a2b) control_top_pane_stacon_t1_ParamLimits

0x145d,	// (0x00040a2b) control_top_pane_stacon_t1

0x1494,	// (0x00040a62) aid_levels_battery_lsc_ParamLimits

0x1494,	// (0x00040a62) aid_levels_battery_lsc

0x14ab,	// (0x00040a79) battery_pane_stacon_g1_ParamLimits

0x14ab,	// (0x00040a79) battery_pane_stacon_g1

0x14be,	// (0x00040a8c) battery_pane_stacon_g2_ParamLimits

0x14be,	// (0x00040a8c) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0004ecac) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0004ecac) battery_pane_stacon_g

0x14fc,	// (0x00040aca) navi_icon_pane_stacon

0x1510,	// (0x00040ade) navi_navi_pane_stacon

0x14fc,	// (0x00040aca) navi_text_pane_stacon

0x1455,	// (0x00040a23) control_bottom_pane_stacon_g1

0x1524,	// (0x00040af2) control_bottom_pane_stacon_t1_ParamLimits

0x1524,	// (0x00040af2) control_bottom_pane_stacon_t1

0xd2dd,	// (0x0004c8ab) grid_app_pane_ParamLimits

0xd2dd,	// (0x0004c8ab) grid_app_pane

0xd315,	// (0x0004c8e3) scroll_pane_cp15_ParamLimits

0xd315,	// (0x0004c8e3) scroll_pane_cp15

0xd32a,	// (0x0004c8f8) cell_app_pane_ParamLimits

0xd32a,	// (0x0004c8f8) cell_app_pane

0xd36f,	// (0x0004c93d) cell_app_pane_g1_ParamLimits

0xd36f,	// (0x0004c93d) cell_app_pane_g1

0x42e7,	// (0x000438b5) cell_app_pane_g2_ParamLimits

0x42e7,	// (0x000438b5) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0004ecb1) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0004ecb1) cell_app_pane_g

0xd38f,	// (0x0004c95d) cell_app_pane_t1_ParamLimits

0xd38f,	// (0x0004c95d) cell_app_pane_t1

0x430a,	// (0x000438d8) grid_highlight_pane_ParamLimits

0x430a,	// (0x000438d8) grid_highlight_pane

0x3f0d,	// (0x000434db) cell_highlight_pane_g1

0x3f15,	// (0x000434e3) cell_highlight_pane_g2

0x3f1d,	// (0x000434eb) cell_highlight_pane_g3

0x3f25,	// (0x000434f3) cell_highlight_pane_g4

0x3f2d,	// (0x000434fb) cell_highlight_pane_g5

0x3f35,	// (0x00043503) cell_highlight_pane_g6

0x3f3d,	// (0x0004350b) cell_highlight_pane_g7

0x3f45,	// (0x00043513) cell_highlight_pane_g8

0x3f4d,	// (0x0004351b) cell_highlight_pane_g9

0x3559,	// (0x00042b27) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0004ec5f) cell_highlight_pane_g

0x431b,	// (0x000438e9) bg_scroll_pane

0x156e,	// (0x00040b3c) scroll_handle_pane

0x4362,	// (0x00043930) scroll_bg_pane_g1

0x4377,	// (0x00043945) scroll_bg_pane_g2

0x438f,	// (0x0004395d) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0004ecb6) scroll_bg_pane_g

0x43a4,	// (0x00043972) scroll_handle_focus_pane_ParamLimits

0x43a4,	// (0x00043972) scroll_handle_focus_pane

0x4362,	// (0x00043930) scroll_handle_pane_g1

0x43b1,	// (0x0004397f) scroll_handle_pane_g2

0x438f,	// (0x0004395d) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0004ecbd) scroll_handle_pane_g

0x3f5e,	// (0x0004352c) bg_popup_sub_pane_cp21_ParamLimits

0x3f5e,	// (0x0004352c) bg_popup_sub_pane_cp21

0x43c5,	// (0x00043993) popup_fep_japan_predictive_window_t1_ParamLimits

0x43c5,	// (0x00043993) popup_fep_japan_predictive_window_t1

0x43df,	// (0x000439ad) popup_fep_japan_predictive_window_t2_ParamLimits

0x43df,	// (0x000439ad) popup_fep_japan_predictive_window_t2

0x4412,	// (0x000439e0) popup_fep_japan_predictive_window_t3_ParamLimits

0x4412,	// (0x000439e0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0004ecc4) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0004ecc4) popup_fep_japan_predictive_window_t

0x3563,	// (0x00042b31) bg_popup_sub_pane_cp23

0x4449,	// (0x00043a17) listscroll_japin_cand_pane

0x4451,	// (0x00043a1f) popup_fep_japan_candidate_window_t1

0x445f,	// (0x00043a2d) candidate_pane_ParamLimits

0x445f,	// (0x00043a2d) candidate_pane

0x4471,	// (0x00043a3f) scroll_pane_cp30

0x4479,	// (0x00043a47) list_single_popup_jap_candidate_pane_ParamLimits

0x4479,	// (0x00043a47) list_single_popup_jap_candidate_pane

0x3563,	// (0x00042b31) list_highlight_pane_cp30

0x448e,	// (0x00043a5c) list_single_popup_jap_candidate_pane_t1

0x449d,	// (0x00043a6b) level_1_signal

0x44af,	// (0x00043a7d) level_2_signal

0x44c2,	// (0x00043a90) level_3_signal

0x44d5,	// (0x00043aa3) level_4_signal

0x44e8,	// (0x00043ab6) level_5_signal

0x44fb,	// (0x00043ac9) level_6_signal

0x450e,	// (0x00043adc) level_7_signal

0x449d,	// (0x00043a6b) level_1_battery

0x44af,	// (0x00043a7d) level_2_battery

0x44c2,	// (0x00043a90) level_3_battery

0x44d5,	// (0x00043aa3) level_4_battery

0x44e8,	// (0x00043ab6) level_5_battery

0x44fb,	// (0x00043ac9) level_6_battery

0x450e,	// (0x00043adc) level_7_battery

0x4539,	// (0x00043b07) list_menu_pane_ParamLimits

0x4539,	// (0x00043b07) list_menu_pane

0x454f,	// (0x00043b1d) scroll_pane_cp25_ParamLimits

0x454f,	// (0x00043b1d) scroll_pane_cp25

0x4568,	// (0x00043b36) list_double2_graphic_pane_cp2_ParamLimits

0x4568,	// (0x00043b36) list_double2_graphic_pane_cp2

0x4568,	// (0x00043b36) list_double2_large_graphic_pane_cp2_ParamLimits

0x4568,	// (0x00043b36) list_double2_large_graphic_pane_cp2

0x4568,	// (0x00043b36) list_double2_pane_cp2_ParamLimits

0x4568,	// (0x00043b36) list_double2_pane_cp2

0x4568,	// (0x00043b36) list_double_graphic_pane_cp2_ParamLimits

0x4568,	// (0x00043b36) list_double_graphic_pane_cp2

0x4568,	// (0x00043b36) list_double_large_graphic_pane_cp2_ParamLimits

0x4568,	// (0x00043b36) list_double_large_graphic_pane_cp2

0x4568,	// (0x00043b36) list_double_number_pane_cp2_ParamLimits

0x4568,	// (0x00043b36) list_double_number_pane_cp2

0x4568,	// (0x00043b36) list_double_pane_cp2_ParamLimits

0x4568,	// (0x00043b36) list_double_pane_cp2

0xd3a6,	// (0x0004c974) list_single_2graphic_pane_cp2_ParamLimits

0xd3a6,	// (0x0004c974) list_single_2graphic_pane_cp2

0xd3a6,	// (0x0004c974) list_single_graphic_heading_pane_cp2_ParamLimits

0xd3a6,	// (0x0004c974) list_single_graphic_heading_pane_cp2

0xd3a6,	// (0x0004c974) list_single_graphic_pane_cp2_ParamLimits

0xd3a6,	// (0x0004c974) list_single_graphic_pane_cp2

0xd3a6,	// (0x0004c974) list_single_heading_pane_cp2_ParamLimits

0xd3a6,	// (0x0004c974) list_single_heading_pane_cp2

0x45a5,	// (0x00043b73) list_single_large_graphic_pane_cp2_ParamLimits

0x45a5,	// (0x00043b73) list_single_large_graphic_pane_cp2

0xd3a6,	// (0x0004c974) list_single_number_heading_pane_cp2_ParamLimits

0xd3a6,	// (0x0004c974) list_single_number_heading_pane_cp2

0xd3a6,	// (0x0004c974) list_single_number_pane_cp2_ParamLimits

0xd3a6,	// (0x0004c974) list_single_number_pane_cp2

0xd3a6,	// (0x0004c974) list_single_pane_cp2_ParamLimits

0xd3a6,	// (0x0004c974) list_single_pane_cp2

0x4621,	// (0x00043bef) bg_popup_sub_pane_cp22

0x1620,	// (0x00040bee) popup_side_volume_key_window_g1

0x164a,	// (0x00040c18) popup_side_volume_key_window_t1

0x1666,	// (0x00040c34) volume_small_pane_cp1

0x38be,	// (0x00042e8c) bg_popup_sub_pane_cp24_ParamLimits

0x38be,	// (0x00042e8c) bg_popup_sub_pane_cp24

0x4637,	// (0x00043c05) fep_china_uni_candidate_pane_ParamLimits

0x4637,	// (0x00043c05) fep_china_uni_candidate_pane

0x464b,	// (0x00043c19) fep_china_uni_entry_pane

0x465b,	// (0x00043c29) popup_fep_china_uni_window_g1

0x4677,	// (0x00043c45) fep_china_uni_entry_pane_g1

0x467f,	// (0x00043c4d) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0004ecf5) fep_china_uni_entry_pane_g

0x4687,	// (0x00043c55) fep_entry_item_pane

0x4691,	// (0x00043c5f) fep_candidate_item_pane

0x4699,	// (0x00043c67) fep_china_uni_candidate_pane_g1

0x46a1,	// (0x00043c6f) fep_china_uni_candidate_pane_g2

0x46a9,	// (0x00043c77) fep_china_uni_candidate_pane_g3

0x46b1,	// (0x00043c7f) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0004ecfa) fep_china_uni_candidate_pane_g

0x3559,	// (0x00042b27) fep_entry_item_pane_g1

0x46b9,	// (0x00043c87) fep_entry_item_pane_t1_ParamLimits

0x46b9,	// (0x00043c87) fep_entry_item_pane_t1

0x46cf,	// (0x00043c9d) fep_candidate_item_pane_t1_ParamLimits

0x46cf,	// (0x00043c9d) fep_candidate_item_pane_t1

0x46e4,	// (0x00043cb2) fep_candidate_item_pane_t2_ParamLimits

0x46e4,	// (0x00043cb2) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0004ed03) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0004ed03) fep_candidate_item_pane_t

0x3643,	// (0x00042c11) list_highlight_pane_cp31_ParamLimits

0x3643,	// (0x00042c11) list_highlight_pane_cp31

0x46f6,	// (0x00043cc4) level_1_signal_lsc

0x46ff,	// (0x00043ccd) level_2_signal_lsc

0x4708,	// (0x00043cd6) level_3_signal_lsc

0x4711,	// (0x00043cdf) level_4_signal_lsc

0x471a,	// (0x00043ce8) level_5_signal_lsc

0x4723,	// (0x00043cf1) level_6_signal_lsc

0x472c,	// (0x00043cfa) level_7_signal_lsc

0x472c,	// (0x00043cfa) level_1_battery_lsc

0x4735,	// (0x00043d03) level_2_battery_lsc

0x473e,	// (0x00043d0c) level_3_battery_lsc

0x4747,	// (0x00043d15) level_4_battery_lsc

0x4750,	// (0x00043d1e) level_5_battery_lsc

0x4759,	// (0x00043d27) level_6_battery_lsc

0x46f6,	// (0x00043cc4) level_7_battery_lsc

0x4762,	// (0x00043d30) scroll_handle_focus_pane_g1

0x476b,	// (0x00043d39) scroll_handle_focus_pane_g2

0x4774,	// (0x00043d42) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0004ed08) scroll_handle_focus_pane_g

0xbafb,	// (0x0004b0c9) list_single_2graphic_pane_g1_ParamLimits

0xbafb,	// (0x0004b0c9) list_single_2graphic_pane_g1

0xbf73,	// (0x0004b541) list_single_2graphic_pane_g2_ParamLimits

0xbf73,	// (0x0004b541) list_single_2graphic_pane_g2

0x1fc9,	// (0x00041597) list_single_2graphic_pane_g3_ParamLimits

0x1fc9,	// (0x00041597) list_single_2graphic_pane_g3

0xbb07,	// (0x0004b0d5) list_single_2graphic_pane_g4_ParamLimits

0xbb07,	// (0x0004b0d5) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0004ed0f) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0004ed0f) list_single_2graphic_pane_g

0xbb13,	// (0x0004b0e1) list_single_2graphic_pane_t1_ParamLimits

0xbb13,	// (0x0004b0e1) list_single_2graphic_pane_t1

0xbfb1,	// (0x0004b57f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbfb1,	// (0x0004b57f) list_double2_graphic_large_graphic_pane_g1

0xb781,	// (0x0004ad4f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb781,	// (0x0004ad4f) list_double2_graphic_large_graphic_pane_g2

0xbf9c,	// (0x0004b56a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbf9c,	// (0x0004b56a) list_double2_graphic_large_graphic_pane_g3

0xbb41,	// (0x0004b10f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbb41,	// (0x0004b10f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0004ed18) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0004ed18) list_double2_graphic_large_graphic_pane_g

0xbb4d,	// (0x0004b11b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbb4d,	// (0x0004b11b) list_double2_graphic_large_graphic_pane_t1

0xbb63,	// (0x0004b131) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbb63,	// (0x0004b131) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0004ed21) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0004ed21) list_double2_graphic_large_graphic_pane_t

0x48bc,	// (0x00043e8a) popup_fast_swap_window_ParamLimits

0x48bc,	// (0x00043e8a) popup_fast_swap_window

0x48d8,	// (0x00043ea6) popup_side_volume_key_window

0x48f4,	// (0x00043ec2) stacon_top_pane

0x48fe,	// (0x00043ecc) status_pane_ParamLimits

0x48fe,	// (0x00043ecc) status_pane

0xd463,	// (0x0004ca31) status_small_pane

0x3563,	// (0x00042b31) control_pane

0x3563,	// (0x00042b31) stacon_bottom_pane

0x3ea1,	// (0x0004346f) scroll_pane_cp121

0x3e98,	// (0x00043466) set_content_pane

0x477d,	// (0x00043d4b) bg_active_tab_pane_g1_cp1

0x4786,	// (0x00043d54) bg_active_tab_pane_g2_cp1

0x478f,	// (0x00043d5d) bg_active_tab_pane_g3_cp1

0x477d,	// (0x00043d4b) bg_passive_tab_pane_g1_cp1

0x4786,	// (0x00043d54) bg_passive_tab_pane_g2_cp1

0x478f,	// (0x00043d5d) bg_passive_tab_pane_g3_cp1

0x4798,	// (0x00043d66) bg_active_tab_pane_g1_cp2

0x4786,	// (0x00043d54) bg_active_tab_pane_g2_cp2

0x47a1,	// (0x00043d6f) bg_active_tab_pane_g3_cp2

0x4798,	// (0x00043d66) bg_passive_tab_pane_g1_cp2

0x4786,	// (0x00043d54) bg_passive_tab_pane_g2_cp2

0x47a1,	// (0x00043d6f) bg_passive_tab_pane_g3_cp2

0x47aa,	// (0x00043d78) bg_active_tab_pane_g1_cp3

0x4786,	// (0x00043d54) bg_active_tab_pane_g2_cp3

0x47b3,	// (0x00043d81) bg_active_tab_pane_g3_cp3

0x47aa,	// (0x00043d78) bg_passive_tab_pane_g1_cp3

0x4786,	// (0x00043d54) bg_passive_tab_pane_g2_cp3

0x47b3,	// (0x00043d81) bg_passive_tab_pane_g3_cp3

0x47bc,	// (0x00043d8a) bg_active_tab_pane_g1_cp4

0x4786,	// (0x00043d54) bg_active_tab_pane_g2_cp4

0x47c7,	// (0x00043d95) bg_active_tab_pane_g3_cp4

0x47bc,	// (0x00043d8a) bg_passive_tab_pane_g1_cp4

0x4786,	// (0x00043d54) bg_passive_tab_pane_g2_cp4

0x47c7,	// (0x00043d95) bg_passive_tab_pane_g3_cp4

0x4810,	// (0x00043dde) bg_active_tab_pane_g1_cp5

0x4786,	// (0x00043d54) bg_active_tab_pane_g2_cp5

0x4819,	// (0x00043de7) bg_active_tab_pane_g3_cp5

0x4810,	// (0x00043dde) bg_passive_tab_pane_g1_cp5

0x4786,	// (0x00043d54) bg_passive_tab_pane_g2_cp5

0x4819,	// (0x00043de7) bg_passive_tab_pane_g3_cp5

0x6e71,	// (0x0004643f) list_set_graphic_pane_ParamLimits

0x6e71,	// (0x0004643f) list_set_graphic_pane

0x3563,	// (0x00042b31) bg_set_opt_pane_cp4

0xd433,	// (0x0004ca01) list_set_graphic_pane_g1_ParamLimits

0xd433,	// (0x0004ca01) list_set_graphic_pane_g1

0xd43f,	// (0x0004ca0d) list_set_graphic_pane_g2_ParamLimits

0xd43f,	// (0x0004ca0d) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0004ed26) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0004ed26) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0004f08f) volume_small_pane_cp_g

0x486f,	// (0x00043e3d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x486f,	// (0x00043e3d) list_double2_large_graphic_pane_g1_cp2

0x487b,	// (0x00043e49) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x487b,	// (0x00043e49) list_double2_large_graphic_pane_g2_cp2

0x488c,	// (0x00043e5a) list_double2_large_graphic_pane_g3_cp2

0x4894,	// (0x00043e62) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4894,	// (0x00043e62) list_double2_large_graphic_pane_t1_cp2

0x48aa,	// (0x00043e78) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x48aa,	// (0x00043e78) list_double2_large_graphic_pane_t2_cp2

0x647a,	// (0x00045a48) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x647a,	// (0x00045a48) list_double_large_graphic_pane_g1_cp2

0x648b,	// (0x00045a59) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x648b,	// (0x00045a59) list_double_large_graphic_pane_g2_cp2

0x4a25,	// (0x00043ff3) list_double_large_graphic_pane_g3_cp2

0x649c,	// (0x00045a6a) list_double_large_graphic_pane_g4_cp

0x64a4,	// (0x00045a72) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x64a4,	// (0x00045a72) list_double_large_graphic_pane_t1_cp2

0x64bb,	// (0x00045a89) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x64bb,	// (0x00045a89) list_double_large_graphic_pane_t2_cp2

0x4917,	// (0x00043ee5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4917,	// (0x00043ee5) list_double2_graphic_pane_g1_cp2

0x4925,	// (0x00043ef3) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4925,	// (0x00043ef3) list_double2_graphic_pane_g2_cp2

0x4936,	// (0x00043f04) list_double2_graphic_pane_g3_cp2

0x4940,	// (0x00043f0e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4940,	// (0x00043f0e) list_double2_graphic_pane_t1_cp2

0x4956,	// (0x00043f24) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4956,	// (0x00043f24) list_double2_graphic_pane_t2_cp2

0x4968,	// (0x00043f36) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4968,	// (0x00043f36) list_single_number_heading_pane_g1_cp2

0x4974,	// (0x00043f42) list_single_number_heading_pane_g2_cp2

0x497c,	// (0x00043f4a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x497c,	// (0x00043f4a) list_single_number_heading_pane_t1_cp2

0x4992,	// (0x00043f60) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4992,	// (0x00043f60) list_single_number_heading_pane_t2_cp2

0x49a4,	// (0x00043f72) list_single_number_heading_pane_t3_cp2_ParamLimits

0x49a4,	// (0x00043f72) list_single_number_heading_pane_t3_cp2

0x4968,	// (0x00043f36) list_single_heading_pane_g1_cp2_ParamLimits

0x4968,	// (0x00043f36) list_single_heading_pane_g1_cp2

0x4974,	// (0x00043f42) list_single_heading_pane_g2_cp2

0x497c,	// (0x00043f4a) list_single_heading_pane_t1_cp2_ParamLimits

0x497c,	// (0x00043f4a) list_single_heading_pane_t1_cp2

0x6282,	// (0x00045850) list_single_heading_pane_t2_cp2_ParamLimits

0x6282,	// (0x00045850) list_single_heading_pane_t2_cp2

0x61ca,	// (0x00045798) list_double_graphic_pane_g1_cp2_ParamLimits

0x61ca,	// (0x00045798) list_double_graphic_pane_g1_cp2

0x61d6,	// (0x000457a4) list_double_graphic_pane_g2_cp2_ParamLimits

0x61d6,	// (0x000457a4) list_double_graphic_pane_g2_cp2

0x61e5,	// (0x000457b3) list_double_graphic_pane_g3_cp2

0x61ed,	// (0x000457bb) list_double_graphic_pane_t1_cp2_ParamLimits

0x61ed,	// (0x000457bb) list_double_graphic_pane_t1_cp2

0x6203,	// (0x000457d1) list_double_graphic_pane_t2_cp2_ParamLimits

0x6203,	// (0x000457d1) list_double_graphic_pane_t2_cp2

0x4a19,	// (0x00043fe7) list_double_number_pane_g1_cp2_ParamLimits

0x4a19,	// (0x00043fe7) list_double_number_pane_g1_cp2

0x4a25,	// (0x00043ff3) list_double_number_pane_g2_cp2

0x618e,	// (0x0004575c) list_double_number_pane_t1_cp2_ParamLimits

0x618e,	// (0x0004575c) list_double_number_pane_t1_cp2

0x61a2,	// (0x00045770) list_double_number_pane_t2_cp2_ParamLimits

0x61a2,	// (0x00045770) list_double_number_pane_t2_cp2

0x61b8,	// (0x00045786) list_double_number_pane_t3_cp2_ParamLimits

0x61b8,	// (0x00045786) list_double_number_pane_t3_cp2

0x606b,	// (0x00045639) list_single_graphic_pane_g1_cp2_ParamLimits

0x606b,	// (0x00045639) list_single_graphic_pane_g1_cp2

0x4a7d,	// (0x0004404b) list_single_graphic_pane_g2_cp2_ParamLimits

0x4a7d,	// (0x0004404b) list_single_graphic_pane_g2_cp2

0x4a89,	// (0x00044057) list_single_graphic_pane_g3_cp2

0x6041,	// (0x0004560f) list_single_graphic_pane_t1_cp2_ParamLimits

0x6041,	// (0x0004560f) list_single_graphic_pane_t1_cp2

0x4a7d,	// (0x0004404b) list_single_number_pane_g1_cp2_ParamLimits

0x4a7d,	// (0x0004404b) list_single_number_pane_g1_cp2

0x4a89,	// (0x00044057) list_single_number_pane_g2_cp2

0x6041,	// (0x0004560f) list_single_number_pane_t1_cp2_ParamLimits

0x6041,	// (0x0004560f) list_single_number_pane_t1_cp2

0x6057,	// (0x00045625) list_single_number_pane_t2_cp2_ParamLimits

0x6057,	// (0x00045625) list_single_number_pane_t2_cp2

0x487b,	// (0x00043e49) list_double2_pane_g1_cp2_ParamLimits

0x487b,	// (0x00043e49) list_double2_pane_g1_cp2

0x488c,	// (0x00043e5a) list_double2_pane_g2_cp2

0x49f1,	// (0x00043fbf) list_double2_pane_t1_cp2_ParamLimits

0x49f1,	// (0x00043fbf) list_double2_pane_t1_cp2

0x4a07,	// (0x00043fd5) list_double2_pane_t2_cp2_ParamLimits

0x4a07,	// (0x00043fd5) list_double2_pane_t2_cp2

0x4a19,	// (0x00043fe7) list_double_pane_g1_cp2_ParamLimits

0x4a19,	// (0x00043fe7) list_double_pane_g1_cp2

0x4a25,	// (0x00043ff3) list_double_pane_g2_cp2

0x4a2d,	// (0x00043ffb) list_double_pane_t1_cp2_ParamLimits

0x4a2d,	// (0x00043ffb) list_double_pane_t1_cp2

0x4a43,	// (0x00044011) list_double_pane_t2_cp2_ParamLimits

0x4a43,	// (0x00044011) list_double_pane_t2_cp2

0x4a6d,	// (0x0004403b) list_single_pane_cp2_g3

0x4a7d,	// (0x0004404b) list_single_pane_g1_cp2_ParamLimits

0x4a7d,	// (0x0004404b) list_single_pane_g1_cp2

0x4a89,	// (0x00044057) list_single_pane_g2_cp2

0x4a91,	// (0x0004405f) list_single_pane_t1_cp2_ParamLimits

0x4a91,	// (0x0004405f) list_single_pane_t1_cp2

0x4aa9,	// (0x00044077) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4aa9,	// (0x00044077) list_single_large_graphic_pane_g1_cp2

0x4ab5,	// (0x00044083) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4ab5,	// (0x00044083) list_single_large_graphic_pane_g2_cp2

0x4ac1,	// (0x0004408f) list_single_large_graphic_pane_g3_cp2

0x4ac9,	// (0x00044097) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4ac9,	// (0x00044097) list_single_large_graphic_pane_g4_cp1

0x4ae3,	// (0x000440b1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4ae3,	// (0x000440b1) list_single_large_graphic_pane_t1_cp2

0x600d,	// (0x000455db) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x600d,	// (0x000455db) list_single_graphic_heading_pane_g1_cp2

0x5fda,	// (0x000455a8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5fda,	// (0x000455a8) list_single_graphic_heading_pane_g4_cp2

0x4a89,	// (0x00044057) list_single_graphic_heading_pane_g5_cp2

0x6019,	// (0x000455e7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6019,	// (0x000455e7) list_single_graphic_heading_pane_t1_cp2

0x602f,	// (0x000455fd) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x602f,	// (0x000455fd) list_single_graphic_heading_pane_t2_cp2

0x5fce,	// (0x0004559c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5fce,	// (0x0004559c) list_single_2graphic_pane_g1_cp2

0x5fda,	// (0x000455a8) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5fda,	// (0x000455a8) list_single_2graphic_pane_g2_cp2

0x4a89,	// (0x00044057) list_single_2graphic_pane_g3_cp2

0x5feb,	// (0x000455b9) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5feb,	// (0x000455b9) list_single_2graphic_pane_g4_cp2

0x5ff7,	// (0x000455c5) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5ff7,	// (0x000455c5) list_single_2graphic_pane_t1_cp2

0x3559,	// (0x00042b27) list_highlight_pane_g10_cp1

0x5ba6,	// (0x00045174) list_highlight_pane_g1_cp1

0x5bae,	// (0x0004517c) list_highlight_pane_g2_cp1

0x5bb6,	// (0x00045184) list_highlight_pane_g3_cp1

0x5bbe,	// (0x0004518c) list_highlight_pane_g4_cp1

0x5bc6,	// (0x00045194) list_highlight_pane_g5_cp1

0x5bce,	// (0x0004519c) list_highlight_pane_g6_cp1

0x5bd6,	// (0x000451a4) list_highlight_pane_g7_cp1

0x5bde,	// (0x000451ac) list_highlight_pane_g8_cp1

0x5be6,	// (0x000451b4) list_highlight_pane_g9_cp1

0xdaa5,	// (0x0004d073) form_field_slider_pane_t3

0xdab3,	// (0x0004d081) form_field_slider_pane_t4

0x5ae2,	// (0x000450b0) slider_form_pane_ParamLimits

0x5ae2,	// (0x000450b0) slider_form_pane

0x3563,	// (0x00042b31) control_abbreviations

0x3563,	// (0x00042b31) control_conventions

0x3563,	// (0x00042b31) control_definitions

0x3563,	// (0x00042b31) format_table_attribute

0x62cc,	// (0x0004589a) bg_popup_preview_window_pane_g9

0x3563,	// (0x00042b31) format_table_data2

0x3563,	// (0x00042b31) format_table_data3

0x3563,	// (0x00042b31) format_table_data_example

0x0008,

0x3563,	// (0x00042b31) intro_purpose

0xf8ef,	// (0x0004eebd) bg_popup_preview_window_pane_g

0x3563,	// (0x00042b31) texts_category

0x3563,	// (0x00042b31) texts_graphics

0x4af9,	// (0x000440c7) text_digital

0x4b08,	// (0x000440d6) text_primary

0x4b17,	// (0x000440e5) text_primary_small

0x4b26,	// (0x000440f4) text_secondary

0x4b35,	// (0x00044103) text_title

0x69b2,	// (0x00045f80) bg_passive_tab_pane_g1_cp3_srt

0x4786,	// (0x00043d54) bg_passive_tab_pane_g2_cp3_srt

0x69bb,	// (0x00045f89) bg_passive_tab_pane_g3_cp3_srt

0x38be,	// (0x00042e8c) bg_active_tab_pane_cp3_srt_ParamLimits

0x38be,	// (0x00042e8c) bg_active_tab_pane_cp3_srt

0x69c4,	// (0x00045f92) tabs_4_active_pane_srt_g1

0xdde8,	// (0x0004d3b6) tabs_4_active_pane_srt_t1_ParamLimits

0xdde8,	// (0x0004d3b6) tabs_4_active_pane_srt_t1

0x69b2,	// (0x00045f80) bg_active_tab_pane_g1_cp3_copy1

0x4786,	// (0x00043d54) bg_active_tab_pane_g2_cp3_copy1

0x69bb,	// (0x00045f89) bg_active_tab_pane_g3_cp3_copy1

0x3643,	// (0x00042c11) tabs_2_long_active_pane_srt_ParamLimits

0x3643,	// (0x00042c11) tabs_2_long_active_pane_srt

0x3643,	// (0x00042c11) tabs_2_long_passive_pane_srt_ParamLimits

0x3643,	// (0x00042c11) tabs_2_long_passive_pane_srt

0x4e82,	// (0x00044450) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4e82,	// (0x00044450) bg_passive_tab_pane_cp4_srt

0x66fb,	// (0x00045cc9) bg_passive_tab_pane_g1_cp4_srt

0x4786,	// (0x00043d54) bg_passive_tab_pane_g2_cp4_srt

0x6704,	// (0x00045cd2) bg_passive_tab_pane_g3_cp4_srt

0x3643,	// (0x00042c11) bg_active_tab_pane_cp4_srt_ParamLimits

0x3643,	// (0x00042c11) bg_active_tab_pane_cp4_srt

0xdc12,	// (0x0004d1e0) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdc12,	// (0x0004d1e0) tabs_2_long_active_pane_srt_t1

0x66fb,	// (0x00045cc9) bg_active_tab_pane_g1_cp4_srt

0x4786,	// (0x00043d54) bg_active_tab_pane_g2_cp4_srt

0x6704,	// (0x00045cd2) bg_active_tab_pane_g3_cp4_srt

0x38be,	// (0x00042e8c) tabs_3_long_active_pane_srt_ParamLimits

0x38be,	// (0x00042e8c) tabs_3_long_active_pane_srt

0x38be,	// (0x00042e8c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x38be,	// (0x00042e8c) tabs_3_long_passive_pane_cp_srt

0x38be,	// (0x00042e8c) tabs_3_long_passive_pane_srt_ParamLimits

0x38be,	// (0x00042e8c) tabs_3_long_passive_pane_srt

0x4e82,	// (0x00044450) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4e82,	// (0x00044450) bg_passive_tab_pane_cp5_srt

0x4810,	// (0x00043dde) bg_passive_tab_pane_g1_cp5_srt

0x4786,	// (0x00043d54) bg_passive_tab_pane_g2_cp5_srt

0x4819,	// (0x00043de7) bg_passive_tab_pane_g3_cp5_srt

0x3643,	// (0x00042c11) bg_active_tab_pane_cp5_srt_ParamLimits

0x3643,	// (0x00042c11) bg_active_tab_pane_cp5_srt

0xdbfc,	// (0x0004d1ca) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdbfc,	// (0x0004d1ca) tabs_3_long_active_pane_srt_t1

0x4810,	// (0x00043dde) bg_active_tab_pane_g1_cp5_srt

0x4786,	// (0x00043d54) bg_active_tab_pane_g2_cp5_srt

0x4819,	// (0x00043de7) bg_active_tab_pane_g3_cp5_srt

0x66db,	// (0x00045ca9) navi_text_pane_srt_t1

0x66d3,	// (0x00045ca1) navi_icon_pane_srt_g1

0x4cfe,	// (0x000442cc) midp_editing_number_pane_srt

0x4b44,	// (0x00044112) midp_ticker_pane_srt

0x4d06,	// (0x000442d4) midp_ticker_pane_srt_g1

0x4d0e,	// (0x000442dc) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0004ed45) midp_ticker_pane_srt_g

0x4d16,	// (0x000442e4) midp_ticker_pane_srt_t1

0x66c4,	// (0x00045c92) midp_editing_number_pane_t1_copy1

0x4e82,	// (0x00044450) listscroll_midp_pane

0x4e82,	// (0x00044450) midp_form_pane

0x4bb0,	// (0x0004417e) midp_info_popup_window_ParamLimits

0x4bb0,	// (0x0004417e) midp_info_popup_window

0x3f5e,	// (0x0004352c) bg_popup_sub_pane_cp50_ParamLimits

0x3f5e,	// (0x0004352c) bg_popup_sub_pane_cp50

0x57de,	// (0x00044dac) listscroll_midp_info_pane_ParamLimits

0x57de,	// (0x00044dac) listscroll_midp_info_pane

0x57c6,	// (0x00044d94) listscroll_form_midp_pane_ParamLimits

0x57c6,	// (0x00044d94) listscroll_form_midp_pane

0x57d2,	// (0x00044da0) scroll_bar_cp050

0xda99,	// (0x0004d067) list_midp_pane

0x7408,	// (0x000469d6) signal_pane_g2_cp

0x56e0,	// (0x00044cae) listscroll_midp_info_pane_t1_ParamLimits

0x56e0,	// (0x00044cae) listscroll_midp_info_pane_t1

0x56f8,	// (0x00044cc6) listscroll_midp_info_pane_t2_ParamLimits

0x56f8,	// (0x00044cc6) listscroll_midp_info_pane_t2

0x5736,	// (0x00044d04) listscroll_midp_info_pane_t3_ParamLimits

0x5736,	// (0x00044d04) listscroll_midp_info_pane_t3

0x5770,	// (0x00044d3e) listscroll_midp_info_pane_t4_ParamLimits

0x5770,	// (0x00044d3e) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0004edf8) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0004edf8) listscroll_midp_info_pane_t

0x4022,	// (0x000435f0) scroll_pane_cp21

0x567e,	// (0x00044c4c) form_midp_field_choice_group_pane

0x5687,	// (0x00044c55) form_midp_field_text_pane

0x56c6,	// (0x00044c94) form_midp_field_time_pane

0x56ce,	// (0x00044c9c) form_midp_gauge_slider_pane

0x56d7,	// (0x00044ca5) form_midp_gauge_wait_pane

0x3563,	// (0x00042b31) form_midp_image_pane

0xbb75,	// (0x0004b143) list_single_midp_pane_ParamLimits

0xbb75,	// (0x0004b143) list_single_midp_pane

0xda77,	// (0x0004d045) form_midp_field_text_pane_t1

0x5400,	// (0x000449ce) input_focus_pane_cp050

0x566d,	// (0x00044c3b) list_midp_form_text_pane

0x5605,	// (0x00044bd3) form_midp_field_choice_group_pane_t1

0x5613,	// (0x00044be1) input_focus_pane_cp051

0x5627,	// (0x00044bf5) list_midp_choice_pane

0x3563,	// (0x00042b31) status_idle_pane

0x55e9,	// (0x00044bb7) form_midp_field_time_pane_t1

0x3559,	// (0x00042b27) wait_anim_pane_g2_copy1

0x55f7,	// (0x00044bc5) form_midp_field_time_pane_t2

0x0001,

0x4c5e,	// (0x0004422c) aid_navinavi_width_2_pane

0xf825,	// (0x0004edf3) form_midp_field_time_pane_t

0x3563,	// (0x00042b31) input_focus_pane_cp052

0x3563,	// (0x00042b31) bg_input_focus_pane_cp040

0x55a9,	// (0x00044b77) form_midp_gauge_slider_pane_t1

0x55b7,	// (0x00044b85) form_midp_gauge_slider_pane_t2

0xda5b,	// (0x0004d029) form_midp_gauge_slider_pane_t3

0xda69,	// (0x0004d037) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0004edea) form_midp_gauge_slider_pane_t

0x55e1,	// (0x00044baf) form_midp_slider_pane

0x3643,	// (0x00042c11) bg_input_focus_pane_cp041_ParamLimits

0x3643,	// (0x00042c11) bg_input_focus_pane_cp041

0x5576,	// (0x00044b44) form_midp_gauge_wait_pane_t1_ParamLimits

0x5576,	// (0x00044b44) form_midp_gauge_wait_pane_t1

0x5588,	// (0x00044b56) form_midp_gauge_wait_pane_t2_ParamLimits

0x5588,	// (0x00044b56) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0004ede5) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0004ede5) form_midp_gauge_wait_pane_t

0x559a,	// (0x00044b68) form_midp_wait_pane_ParamLimits

0x559a,	// (0x00044b68) form_midp_wait_pane

0x5540,	// (0x00044b0e) form_midp_image_pane_g1

0x5549,	// (0x00044b17) form_midp_image_pane_t1

0x5558,	// (0x00044b26) form_midp_image_pane_t2

0x5567,	// (0x00044b35) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0004edde) form_midp_image_pane_t

0x5537,	// (0x00044b05) list_single_midp_pane_g1

0x07cd,	// (0x0003fd9b) list_single_midp_pane_t1

0xda46,	// (0x0004d014) list_midp_form_item_pane_ParamLimits

0xda46,	// (0x0004d014) list_midp_form_item_pane

0x4c06,	// (0x000441d4) list_midp_form_item_pane_t1

0x4c15,	// (0x000441e3) midp_ticker_pane_g1

0x4c21,	// (0x000441ef) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0004ed2b) midp_ticker_pane_g

0x4c2d,	// (0x000441fb) midp_ticker_pane_t1

0x6915,	// (0x00045ee3) midp_editing_number_pane_t1

0x68f3,	// (0x00045ec1) midp_editing_number_pane

0x6902,	// (0x00045ed0) midp_ticker_pane

0x66b4,	// (0x00045c82) ai_message_heading_pane

0x3563,	// (0x00042b31) bg_popup_window_pane_cp14

0x66bc,	// (0x00045c8a) listscroll_ai_message_pane

0x663e,	// (0x00045c0c) ai_message_heading_pane_g1_ParamLimits

0x663e,	// (0x00045c0c) ai_message_heading_pane_g1

0x664a,	// (0x00045c18) ai_message_heading_pane_g2_ParamLimits

0x664a,	// (0x00045c18) ai_message_heading_pane_g2

0x6656,	// (0x00045c24) ai_message_heading_pane_g3_ParamLimits

0x6656,	// (0x00045c24) ai_message_heading_pane_g3

0x6662,	// (0x00045c30) ai_message_heading_pane_g4_ParamLimits

0x6662,	// (0x00045c30) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0004ef1f) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0004ef1f) ai_message_heading_pane_g

0x666e,	// (0x00045c3c) ai_message_heading_pane_t1_ParamLimits

0x666e,	// (0x00045c3c) ai_message_heading_pane_t1

0x6688,	// (0x00045c56) ai_message_heading_pane_t2_ParamLimits

0x6688,	// (0x00045c56) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0004ef28) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0004ef28) ai_message_heading_pane_t

0x669a,	// (0x00045c68) bg_popup_heading_pane_cp1_ParamLimits

0x669a,	// (0x00045c68) bg_popup_heading_pane_cp1

0x662c,	// (0x00045bfa) list_ai_message_pane_ParamLimits

0x662c,	// (0x00045bfa) list_ai_message_pane

0x4022,	// (0x000435f0) scroll_pane_cp10

0x65c8,	// (0x00045b96) list_ai_message_pane_g1

0x65d0,	// (0x00045b9e) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0004eefc) list_ai_message_pane_g

0x65d8,	// (0x00045ba6) list_ai_message_pane_t1_ParamLimits

0x65d8,	// (0x00045ba6) list_ai_message_pane_t1

0x65ed,	// (0x00045bbb) list_ai_message_pane_t2_ParamLimits

0x65ed,	// (0x00045bbb) list_ai_message_pane_t2

0x6602,	// (0x00045bd0) list_ai_message_pane_t3_ParamLimits

0x6602,	// (0x00045bd0) list_ai_message_pane_t3

0x6617,	// (0x00045be5) list_ai_message_pane_t4_ParamLimits

0x6617,	// (0x00045be5) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0004ef01) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0004ef01) list_ai_message_pane_t

0xdbdb,	// (0x0004d1a9) cell_ai_soft_ind_pane_ParamLimits

0xdbdb,	// (0x0004d1a9) cell_ai_soft_ind_pane

0x4c3f,	// (0x0004420d) cell_ai_soft_ind_pane_g1_ParamLimits

0x4c3f,	// (0x0004420d) cell_ai_soft_ind_pane_g1

0x3563,	// (0x00042b31) grid_highlight_cp1

0x4c4c,	// (0x0004421a) text_secondary_cp56_ParamLimits

0x4c4c,	// (0x0004421a) text_secondary_cp56

0x6588,	// (0x00045b56) example_general_pane_ParamLimits

0x6588,	// (0x00045b56) example_general_pane

0x6594,	// (0x00045b62) example_parent_pane_g1_ParamLimits

0x6594,	// (0x00045b62) example_parent_pane_g1

0x65a0,	// (0x00045b6e) example_parent_pane_t1_ParamLimits

0x65a0,	// (0x00045b6e) example_parent_pane_t1

0xc51c,	// (0x0004baea) popup_preview_text_window_ParamLimits

0xc51c,	// (0x0004baea) popup_preview_text_window

0x4a75,	// (0x00044043) list_single_pane_cp2_g4

0x3974,	// (0x00042f42) bg_popup_preview_window_pane_ParamLimits

0x3974,	// (0x00042f42) bg_popup_preview_window_pane

0x62d4,	// (0x000458a2) popup_preview_text_window_t1_ParamLimits

0x62d4,	// (0x000458a2) popup_preview_text_window_t1

0x62f2,	// (0x000458c0) popup_preview_text_window_t2_ParamLimits

0x62f2,	// (0x000458c0) popup_preview_text_window_t2

0x633b,	// (0x00045909) popup_preview_text_window_t3_ParamLimits

0x633b,	// (0x00045909) popup_preview_text_window_t3

0x6380,	// (0x0004594e) popup_preview_text_window_t4_ParamLimits

0x6380,	// (0x0004594e) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0004eed0) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0004eed0) popup_preview_text_window_t

0x63fe,	// (0x000459cc) scroll_pane_cp11

0x538c,	// (0x0004495a) bg_popup_preview_window_pane_g1

0x6294,	// (0x00045862) bg_popup_preview_window_pane_g2

0x629c,	// (0x0004586a) bg_popup_preview_window_pane_g3

0x62a4,	// (0x00045872) bg_popup_preview_window_pane_g4

0x62ac,	// (0x0004587a) bg_popup_preview_window_pane_g5

0x62b4,	// (0x00045882) bg_popup_preview_window_pane_g6

0x62bc,	// (0x0004588a) bg_popup_preview_window_pane_g7

0x62c4,	// (0x00045892) bg_popup_preview_window_pane_g8

0x0eb1,	// (0x0004047f) aid_popup_width_pane

0xc498,	// (0x0004ba66) popup_midp_note_alarm_window_ParamLimits

0xc498,	// (0x0004ba66) popup_midp_note_alarm_window

0x3eb2,	// (0x00043480) data_form_pane_ParamLimits

0xb9dd,	// (0x0004afab) form_field_data_pane_g1

0xb9e7,	// (0x0004afb5) form_field_data_pane_t1_ParamLimits

0x3ebe,	// (0x0004348c) input_focus_pane_ParamLimits

0x048c,	// (0x0003fa5a) data_form_wide_pane_ParamLimits

0x049d,	// (0x0003fa6b) form_field_data_wide_pane_g1

0x04a9,	// (0x0003fa77) form_field_data_wide_pane_t1_ParamLimits

0x3c23,	// (0x000431f1) input_focus_pane_cp6_ParamLimits

0xd298,	// (0x0004c866) input_popup_find_pane_g1_ParamLimits

0xd298,	// (0x0004c866) input_popup_find_pane_g1

0x14cf,	// (0x00040a9d) aid_navi_side_left_pane

0x14e4,	// (0x00040ab2) aid_navi_side_right_pane

0x5ca1,	// (0x0004526f) bg_popup_window_pane_cp30_ParamLimits

0x5ca1,	// (0x0004526f) bg_popup_window_pane_cp30

0x5d1b,	// (0x000452e9) popup_midp_note_alarm_window_g1_ParamLimits

0x5d1b,	// (0x000452e9) popup_midp_note_alarm_window_g1

0x5d4b,	// (0x00045319) popup_midp_note_alarm_window_t1_ParamLimits

0x5d4b,	// (0x00045319) popup_midp_note_alarm_window_t1

0x5dec,	// (0x000453ba) popup_midp_note_alarm_window_t2_ParamLimits

0x5dec,	// (0x000453ba) popup_midp_note_alarm_window_t2

0x5e9a,	// (0x00045468) popup_midp_note_alarm_window_t3_ParamLimits

0x5e9a,	// (0x00045468) popup_midp_note_alarm_window_t3

0x5ecc,	// (0x0004549a) popup_midp_note_alarm_window_t4_ParamLimits

0x5ecc,	// (0x0004549a) popup_midp_note_alarm_window_t4

0x5ef2,	// (0x000454c0) popup_midp_note_alarm_window_t5_ParamLimits

0x5ef2,	// (0x000454c0) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0004ee6d) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0004ee6d) popup_midp_note_alarm_window_t

0x5f9e,	// (0x0004556c) wait_bar_pane_cp1_ParamLimits

0x5f9e,	// (0x0004556c) wait_bar_pane_cp1

0x3563,	// (0x00042b31) wait_anim_pane_copy1

0x3563,	// (0x00042b31) wait_border_pane_copy1

0x5987,	// (0x00044f55) wait_border_pane_g1_copy1

0x04c3,	// (0x0003fa91) form_field_popup_pane_g1

0xba01,	// (0x0004afcf) form_field_popup_pane_t1_ParamLimits

0x3ebe,	// (0x0004348c) input_focus_pane_cp7_ParamLimits

0x3ee0,	// (0x000434ae) list_form_pane_ParamLimits

0x04e3,	// (0x0003fab1) form_field_popup_wide_pane_g1

0x04eb,	// (0x0003fab9) form_field_popup_wide_pane_t1_ParamLimits

0x3ebe,	// (0x0004348c) input_focus_pane_cp8_ParamLimits

0x3eec,	// (0x000434ba) list_form_wide_pane_ParamLimits

0x6a4a,	// (0x00046018) aid_size_cell_graphic_pane

0xba80,	// (0x0004b04e) data_form_pane_t1_ParamLimits

0xbb9d,	// (0x0004b16b) data_form_wide_pane_t1_ParamLimits

0xd6cb,	// (0x0004cc99) bg_status_flat_pane

0xcf57,	// (0x0004c525) title_pane_t1_ParamLimits

0x360b,	// (0x00042bd9) title_pane_t2_ParamLimits

0x3631,	// (0x00042bff) title_pane_t3_ParamLimits

0xf557,	// (0x0004eb25) title_pane_t_ParamLimits

0x449d,	// (0x00043a6b) level_1_signal_ParamLimits

0x44af,	// (0x00043a7d) level_2_signal_ParamLimits

0x44c2,	// (0x00043a90) level_3_signal_ParamLimits

0x44d5,	// (0x00043aa3) level_4_signal_ParamLimits

0x44e8,	// (0x00043ab6) level_5_signal_ParamLimits

0x44fb,	// (0x00043ac9) level_6_signal_ParamLimits

0x450e,	// (0x00043adc) level_7_signal_ParamLimits

0x449d,	// (0x00043a6b) level_1_battery_ParamLimits

0x44af,	// (0x00043a7d) level_2_battery_ParamLimits

0x44c2,	// (0x00043a90) level_3_battery_ParamLimits

0x44d5,	// (0x00043aa3) level_4_battery_ParamLimits

0x44e8,	// (0x00043ab6) level_5_battery_ParamLimits

0x44fb,	// (0x00043ac9) level_6_battery_ParamLimits

0x450e,	// (0x00043adc) level_7_battery_ParamLimits

0x5ba6,	// (0x00045174) bg_status_flat_pane_g1

0x5bae,	// (0x0004517c) bg_status_flat_pane_g2

0x5bb6,	// (0x00045184) bg_status_flat_pane_g3

0x5bbe,	// (0x0004518c) bg_status_flat_pane_g4

0x5bc6,	// (0x00045194) bg_status_flat_pane_g5

0x5bce,	// (0x0004519c) bg_status_flat_pane_g6

0x5bd6,	// (0x000451a4) bg_status_flat_pane_g7

0xcfe3,	// (0x0004c5b1) tabs_3_active_pane_t1_ParamLimits

0xcfe3,	// (0x0004c5b1) tabs_3_passive_pane_t1_ParamLimits

0xcff5,	// (0x0004c5c3) tabs_4_active_pane_t1_ParamLimits

0xcff5,	// (0x0004c5c3) tabs_4_1_passive_pane_t1_ParamLimits

0xd2a6,	// (0x0004c874) tabs_2_active_pane_t1_ParamLimits

0xd2a6,	// (0x0004c874) tabs_2_passive_pane_t1_ParamLimits

0x3643,	// (0x00042c11) bg_active_tab_pane_cp4_ParamLimits

0xd2b8,	// (0x0004c886) tabs_2_long_active_pane_t1_ParamLimits

0x4e82,	// (0x00044450) bg_passive_tab_pane_cp4_ParamLimits

0x201e,	// (0x000415ec) list_single_midp_graphic_pane_t1_ParamLimits

0x3643,	// (0x00042c11) bg_active_tab_pane_cp5_ParamLimits

0xd2cb,	// (0x0004c899) tabs_3_long_active_pane_t1_ParamLimits

0x4e82,	// (0x00044450) bg_passive_tab_pane_cp5_ParamLimits

0x201e,	// (0x000415ec) list_single_midp_graphic_pane_t1

0xd6cb,	// (0x0004cc99) bg_status_flat_pane_ParamLimits

0x501c,	// (0x000445ea) indicator_pane_cp2_ParamLimits

0x501c,	// (0x000445ea) indicator_pane_cp2

0xd849,	// (0x0004ce17) navi_pane_srt_ParamLimits

0xd849,	// (0x0004ce17) navi_pane_srt

0x516b,	// (0x00044739) popup_clock_digital_analogue_window_cp1

0x3720,	// (0x00042cee) indicator_pane_t1

0x4b44,	// (0x00044112) copy_highlight_pane

0x4b44,	// (0x00044112) cursor_graphics_pane

0x4b44,	// (0x00044112) graphic_within_text_pane

0x4b44,	// (0x00044112) link_highlight_pane

0x63c1,	// (0x0004598f) popup_preview_text_window_t5_ParamLimits

0x63c1,	// (0x0004598f) popup_preview_text_window_t5

0x4c66,	// (0x00044234) cursor_digital_pane

0x4c66,	// (0x00044234) cursor_primary_pane

0x4c77,	// (0x00044245) cursor_primary_small_pane

0x4c7f,	// (0x0004424d) cursor_secondary_pane

0x4c87,	// (0x00044255) cursor_title_pane

0x4c66,	// (0x00044234) link_highlight_digital_pane

0x4c6e,	// (0x0004423c) link_highlight_primary_pane

0x4c77,	// (0x00044245) link_highlight_primary_small_pane

0x4c7f,	// (0x0004424d) link_highlight_secondary_pane

0x4c87,	// (0x00044255) link_highlight_title_pane

0x4c66,	// (0x00044234) copy_highlight_digital_pane

0x4c66,	// (0x00044234) copy_highlight_primary_pane

0x4c77,	// (0x00044245) copy_highlight_primary_small_pane

0x4c7f,	// (0x0004424d) copy_highlight_secondary_pane

0x4c87,	// (0x00044255) copy_highlight_title_pane

0x4c7f,	// (0x0004424d) graphic_text_digital_pane

0x5c44,	// (0x00045212) graphic_text_primary_pane

0x5c4d,	// (0x0004521b) graphic_text_primary_small_pane

0x4c77,	// (0x00044245) graphic_text_secondary_pane

0x4c66,	// (0x00044234) graphic_text_title_pane

0xd507,	// (0x0004cad5) cursor_primary_pane_g1

0x5c36,	// (0x00045204) cursor_text_primary_t1

0xdad5,	// (0x0004d0a3) cursor_primary_small_pane_g1

0x5c28,	// (0x000451f6) cursor_text_primary_small_t1

0xdacb,	// (0x0004d099) cursor_primary_small_pane_g1_copy1

0x5c10,	// (0x000451de) cursor_text_primary_small_t1_copy1

0x5bee,	// (0x000451bc) cursor_text_title_t1

0xdac1,	// (0x0004d08f) cursor_title_pane_g1

0xd507,	// (0x0004cad5) cursor_digital_pane_g1

0x4c99,	// (0x00044267) cursor_text_digital_t1

0x4cbe,	// (0x0004428c) link_highlight_primary_pane_g1

0x5b97,	// (0x00045165) link_highlight_primary_pane_t1

0x4ca7,	// (0x00044275) link_highlight_primary_small_pane_g1

0x4caf,	// (0x0004427d) link_highlight_primary_small_pane_t1

0x4cbe,	// (0x0004428c) link_highlight_secondary_pane_g1

0x4cc6,	// (0x00044294) link_highlight_secondary_pane_t1

0x5b0b,	// (0x000450d9) link_highlight_title_pane_g1

0x5b13,	// (0x000450e1) link_highlight_title_pane_t1

0x5af4,	// (0x000450c2) link_highlight_digital_pane_g1

0x5afc,	// (0x000450ca) link_highlight_digital_pane_t1

0x59cc,	// (0x00044f9a) copy_highlight_primary_pane_g1

0x59d4,	// (0x00044fa2) copy_highlight_primary_pane_t1

0x59a6,	// (0x00044f74) copy_highlight_primary_small_pane_g1

0x59bd,	// (0x00044f8b) copy_highlight_primary_small_pane_t1

0x4cd5,	// (0x000442a3) copy_highlight_secondary_pane_g1

0x4cdd,	// (0x000442ab) copy_highlight_secondary_pane_t1

0x59a6,	// (0x00044f74) copy_highlight_title_pane_g1

0x59ae,	// (0x00044f7c) copy_highlight_title_pane_t1

0x59cc,	// (0x00044f9a) copy_highlight_digital_pane_g1

0x6c15,	// (0x000461e3) copy_highlight_digital_pane_t1

0x6b69,	// (0x00046137) graphic_text_primary_pane_g1

0x6bf9,	// (0x000461c7) graphic_text_primary_pane_t1

0x6c07,	// (0x000461d5) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0004ef9c) graphic_text_primary_pane_t

0x6bd5,	// (0x000461a3) graphic_text_primary_small_pane_g1

0x6bdd,	// (0x000461ab) graphic_text_primary_small_pane_t1

0x6beb,	// (0x000461b9) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0004ef97) graphic_text_primary_small_pane_t

0x6bb1,	// (0x0004617f) graphic_text_secondary_pane_g1

0x6bb9,	// (0x00046187) graphic_text_secondary_pane_t1

0x6bc7,	// (0x00046195) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0004ef92) graphic_text_secondary_pane_t

0x6b8d,	// (0x0004615b) graphic_text_title_pane_g1

0x6b95,	// (0x00046163) graphic_text_title_pane_t1

0x6ba3,	// (0x00046171) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0004ef8d) graphic_text_title_pane_t

0x6b69,	// (0x00046137) graphic_text_digital_pane_g1

0x6b71,	// (0x0004613f) graphic_text_digital_pane_t1

0x6b7f,	// (0x0004614d) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0004ef88) graphic_text_digital_pane_t

0x3643,	// (0x00042c11) navi_icon_pane_srt_ParamLimits

0x3643,	// (0x00042c11) navi_icon_pane_srt

0x3563,	// (0x00042b31) navi_midp_pane_srt

0x3563,	// (0x00042b31) navi_navi_pane_srt

0x3643,	// (0x00042c11) navi_text_pane_srt_ParamLimits

0x3643,	// (0x00042c11) navi_text_pane_srt

0x6b34,	// (0x00046102) navi_navi_icon_text_pane_srt

0x6b4e,	// (0x0004611c) navi_navi_pane_srt_g1_ParamLimits

0x6b4e,	// (0x0004611c) navi_navi_pane_srt_g1

0x6b3c,	// (0x0004610a) navi_navi_pane_srt_g2_ParamLimits

0x6b3c,	// (0x0004610a) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0004ef83) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0004ef83) navi_navi_pane_srt_g

0x6b60,	// (0x0004612e) navi_navi_tabs_pane_srt

0x6b34,	// (0x00046102) navi_navi_text_pane_srt

0x6b34,	// (0x00046102) navi_navi_volume_pane_srt

0x6b25,	// (0x000460f3) navi_navi_text_pane_srt_t1

0x2446,	// (0x00041a14) navi_navi_volume_pane_srt_g1

0x244e,	// (0x00041a1c) volume_small_pane_srt_ParamLimits

0x244e,	// (0x00041a1c) volume_small_pane_srt

0x17cb,	// (0x00040d99) volume_small_pane_srt_g1_ParamLimits

0x17cb,	// (0x00040d99) volume_small_pane_srt_g1

0x17db,	// (0x00040da9) volume_small_pane_srt_g2_ParamLimits

0x17db,	// (0x00040da9) volume_small_pane_srt_g2

0x17ec,	// (0x00040dba) volume_small_pane_srt_g3_ParamLimits

0x17ec,	// (0x00040dba) volume_small_pane_srt_g3

0x17fd,	// (0x00040dcb) volume_small_pane_srt_g4_ParamLimits

0x17fd,	// (0x00040dcb) volume_small_pane_srt_g4

0x180e,	// (0x00040ddc) volume_small_pane_srt_g5_ParamLimits

0x180e,	// (0x00040ddc) volume_small_pane_srt_g5

0x181f,	// (0x00040ded) volume_small_pane_srt_g6_ParamLimits

0x181f,	// (0x00040ded) volume_small_pane_srt_g6

0x1830,	// (0x00040dfe) volume_small_pane_srt_g7_ParamLimits

0x1830,	// (0x00040dfe) volume_small_pane_srt_g7

0x1841,	// (0x00040e0f) volume_small_pane_srt_g8_ParamLimits

0x1841,	// (0x00040e0f) volume_small_pane_srt_g8

0x1852,	// (0x00040e20) volume_small_pane_srt_g9_ParamLimits

0x1852,	// (0x00040e20) volume_small_pane_srt_g9

0x1863,	// (0x00040e31) volume_small_pane_srt_g10_ParamLimits

0x1863,	// (0x00040e31) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0004ed30) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0004ed30) volume_small_pane_srt_g

0x3a1d,	// (0x00042feb) query_popup_data_pane_cp2

0x6b0b,	// (0x000460d9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6b0b,	// (0x000460d9) navi_navi_icon_text_pane_srt_t1

0x5c44,	// (0x00045212) navi_tabs_2_long_pane_srt

0x5c44,	// (0x00045212) navi_tabs_2_pane_srt

0x5c44,	// (0x00045212) navi_tabs_3_long_pane_srt

0x5c44,	// (0x00045212) navi_tabs_3_pane_srt

0x5c44,	// (0x00045212) navi_tabs_4_pane_srt

0x2426,	// (0x000419f4) tabs_2_active_pane_srt_ParamLimits

0x2426,	// (0x000419f4) tabs_2_active_pane_srt

0x2436,	// (0x00041a04) tabs_2_passive_pane_srt_ParamLimits

0x2436,	// (0x00041a04) tabs_2_passive_pane_srt

0x5400,	// (0x000449ce) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5400,	// (0x000449ce) bg_passive_tab_pane_cp1_srt

0x6ad7,	// (0x000460a5) bg_passive_tab_pane_g1_cp1_srt

0x4786,	// (0x00043d54) bg_passive_tab_pane_g2_cp1_srt

0x6ae0,	// (0x000460ae) bg_passive_tab_pane_g3_cp1_srt

0x38be,	// (0x00042e8c) bg_active_tab_pane_cp1_srt_ParamLimits

0x38be,	// (0x00042e8c) bg_active_tab_pane_cp1_srt

0x6ae9,	// (0x000460b7) tabs_2_active_pane_srt_g1

0xde8b,	// (0x0004d459) tabs_2_active_pane_srt_t1_ParamLimits

0xde8b,	// (0x0004d459) tabs_2_active_pane_srt_t1

0x6ad7,	// (0x000460a5) bg_active_tab_pane_g1_cp1_srt

0x4786,	// (0x00043d54) bg_active_tab_pane_g2_cp1_srt

0x6ae0,	// (0x000460ae) bg_active_tab_pane_g3_cp1_srt

0x23f3,	// (0x000419c1) tabs_3_active_pane_srt_ParamLimits

0x23f3,	// (0x000419c1) tabs_3_active_pane_srt

0x2404,	// (0x000419d2) tabs_3_passive_pane_cp_srt_ParamLimits

0x2404,	// (0x000419d2) tabs_3_passive_pane_cp_srt

0x2415,	// (0x000419e3) tabs_3_passive_pane_srt_ParamLimits

0x2415,	// (0x000419e3) tabs_3_passive_pane_srt

0x5400,	// (0x000449ce) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5400,	// (0x000449ce) bg_passive_tab_pane_cp2_srt

0x4cec,	// (0x000442ba) bg_passive_tab_pane_g1_cp2_srt

0x4786,	// (0x00043d54) bg_passive_tab_pane_g2_cp2_srt

0x4cf5,	// (0x000442c3) bg_passive_tab_pane_g3_cp2_srt

0x38be,	// (0x00042e8c) bg_active_tab_pane_cp2_srt_ParamLimits

0x38be,	// (0x00042e8c) bg_active_tab_pane_cp2_srt

0x6abd,	// (0x0004608b) tabs_3_active_pane_srt_g1

0xde75,	// (0x0004d443) tabs_3_active_pane_srt_t1_ParamLimits

0xde75,	// (0x0004d443) tabs_3_active_pane_srt_t1

0x4cec,	// (0x000442ba) bg_active_tab_pane_g1_cp2_srt

0x4786,	// (0x00043d54) bg_active_tab_pane_g2_cp2_srt

0x4cf5,	// (0x000442c3) bg_active_tab_pane_g3_cp2_srt

0x23ab,	// (0x00041979) tabs_4_active_pane_srt_ParamLimits

0x23ab,	// (0x00041979) tabs_4_active_pane_srt

0x23bd,	// (0x0004198b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x23bd,	// (0x0004198b) tabs_4_passive_pane_cp2_srt

0x19c8,	// (0x00040f96) aid_size_cell_toolbar

0x676c,	// (0x00045d3a) main_idle_act_pane_ParamLimits

0x1b85,	// (0x00041153) popup_large_graphic_colour_window_ParamLimits

0xc7a8,	// (0x0004bd76) popup_toolbar_window_ParamLimits

0xc7a8,	// (0x0004bd76) popup_toolbar_window

0x6924,	// (0x00045ef2) list_single_graphic_2heading_pane_ParamLimits

0x6924,	// (0x00045ef2) list_single_graphic_2heading_pane

0x4252,	// (0x00043820) aid_size_cell_apps_grid_lsc_pane

0x4264,	// (0x00043832) aid_size_cell_apps_grid_prt_pane

0x4e82,	// (0x00044450) bg_wml_button_pane_cp1_ParamLimits

0x4e82,	// (0x00044450) bg_wml_button_pane_cp1

0xda77,	// (0x0004d045) form_midp_field_text_pane_t1_ParamLimits

0x5400,	// (0x000449ce) input_focus_pane_cp050_ParamLimits

0x566d,	// (0x00044c3b) list_midp_form_text_pane_ParamLimits

0x5613,	// (0x00044be1) input_focus_pane_cp051_ParamLimits

0x5627,	// (0x00044bf5) list_midp_choice_pane_ParamLimits

0xda14,	// (0x0004cfe2) list_single_2graphic_pane_cp3_ParamLimits

0xda14,	// (0x0004cfe2) list_single_2graphic_pane_cp3

0xda27,	// (0x0004cff5) list_single_midp_graphic_pane_ParamLimits

0xda27,	// (0x0004cff5) list_single_midp_graphic_pane

0x069f,	// (0x0003fc6d) list_single_graphic_2heading_pane_g1_ParamLimits

0x069f,	// (0x0003fc6d) list_single_graphic_2heading_pane_g1

0x06ab,	// (0x0003fc79) list_single_graphic_2heading_pane_g4_ParamLimits

0x06ab,	// (0x0003fc79) list_single_graphic_2heading_pane_g4

0x06b7,	// (0x0003fc85) list_single_graphic_2heading_pane_g5_ParamLimits

0x06b7,	// (0x0003fc85) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0004ed83) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0004ed83) list_single_graphic_2heading_pane_g

0x06c3,	// (0x0003fc91) list_single_graphic_2heading_pane_t1_ParamLimits

0x06c3,	// (0x0003fc91) list_single_graphic_2heading_pane_t1

0x06d7,	// (0x0003fca5) list_single_graphic_2heading_pane_t2_ParamLimits

0x06d7,	// (0x0003fca5) list_single_graphic_2heading_pane_t2

0x06f3,	// (0x0003fcc1) list_single_graphic_2heading_pane_t3_ParamLimits

0x06f3,	// (0x0003fcc1) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0004ed8a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0004ed8a) list_single_graphic_2heading_pane_t

0x52ca,	// (0x00044898) bg_popup_sub_pane_cp2

0x52f4,	// (0x000448c2) grid_toobar_pane

0x1f99,	// (0x00041567) cell_toolbar_pane_ParamLimits

0x1f99,	// (0x00041567) cell_toolbar_pane

0x5330,	// (0x000448fe) cell_toolbar_pane_g1_ParamLimits

0x5330,	// (0x000448fe) cell_toolbar_pane_g1

0x5344,	// (0x00044912) cell_toolbar_pane_g2_ParamLimits

0x5344,	// (0x00044912) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0004ed98) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0004ed98) cell_toolbar_pane_g

0x5366,	// (0x00044934) grid_highlight_pane_cp2_ParamLimits

0x5366,	// (0x00044934) grid_highlight_pane_cp2

0x5380,	// (0x0004494e) toolbar_button_pane

0x538c,	// (0x0004495a) toolbar_button_pane_g1

0x5394,	// (0x00044962) toolbar_button_pane_g2

0x539c,	// (0x0004496a) toolbar_button_pane_g3

0x53a4,	// (0x00044972) toolbar_button_pane_g4

0x53ac,	// (0x0004497a) toolbar_button_pane_g5

0x53b4,	// (0x00044982) toolbar_button_pane_g6

0x53bc,	// (0x0004498a) toolbar_button_pane_g7

0x53c4,	// (0x00044992) toolbar_button_pane_g8

0x53cc,	// (0x0004499a) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0004ed9d) toolbar_button_pane_g

0x1fdd,	// (0x000415ab) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1fdd,	// (0x000415ab) list_single_2graphic_pane_g1_cp3

0xc800,	// (0x0004bdce) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc800,	// (0x0004bdce) list_single_2graphic_pane_g2_cp3

0x1ffa,	// (0x000415c8) list_single_2graphic_pane_g3_cp3

0x167e,	// (0x00040c4c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x167e,	// (0x00040c4c) list_single_2graphic_pane_g4_cp3

0x2002,	// (0x000415d0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2002,	// (0x000415d0) list_single_2graphic_pane_t1_cp3

0x60c2,	// (0x00045690) list_single_midp_graphic_pane_g2_ParamLimits

0x60c2,	// (0x00045690) list_single_midp_graphic_pane_g2

0x068f,	// (0x0003fc5d) aid_zoom_text_primary

0x19d0,	// (0x00040f9e) aid_zoom_text_secondary

0xd55f,	// (0x0004cb2d) status_small_pane_g7_ParamLimits

0xd55f,	// (0x0004cb2d) status_small_pane_g7

0xd582,	// (0x0004cb50) status_small_pane_t1_ParamLimits

0xcf33,	// (0x0004c501) title_pane_g2

0x0003,

0xf54e,	// (0x0004eb1c) title_pane_g

0xd1ab,	// (0x0004c779) aid_size_cell_colour_1_pane_ParamLimits

0xd1ab,	// (0x0004c779) aid_size_cell_colour_1_pane

0xd1bf,	// (0x0004c78d) aid_size_cell_colour_2_pane_ParamLimits

0xd1bf,	// (0x0004c78d) aid_size_cell_colour_2_pane

0xd1d3,	// (0x0004c7a1) aid_size_cell_colour_3_pane_ParamLimits

0xd1d3,	// (0x0004c7a1) aid_size_cell_colour_3_pane

0xd1e7,	// (0x0004c7b5) aid_size_cell_colour_4_pane_ParamLimits

0xd1e7,	// (0x0004c7b5) aid_size_cell_colour_4_pane

0x140c,	// (0x000409da) title_pane_stacon_g1_ParamLimits

0x140c,	// (0x000409da) title_pane_stacon_g1

0x5a2b,	// (0x00044ff9) popup_note_wait_window_g3_ParamLimits

0x5a2b,	// (0x00044ff9) popup_note_wait_window_g3

0x5aa1,	// (0x0004506f) popup_note_wait_window_t5_ParamLimits

0x5aa1,	// (0x0004506f) popup_note_wait_window_t5

0x3563,	// (0x00042b31) main_feb_china_hwr_fs_writing_pane

0xc1b0,	// (0x0004b77e) popup_feb_china_hwr_fs_window_ParamLimits

0xc1b0,	// (0x0004b77e) popup_feb_china_hwr_fs_window

0xc811,	// (0x0004bddf) aid_size_cell_hwr_fs_ParamLimits

0xc811,	// (0x0004bddf) aid_size_cell_hwr_fs

0x5400,	// (0x000449ce) bg_popup_sub_pane_cp3_ParamLimits

0x5400,	// (0x000449ce) bg_popup_sub_pane_cp3

0xc826,	// (0x0004bdf4) grid_hwr_fs_pane_ParamLimits

0xc826,	// (0x0004bdf4) grid_hwr_fs_pane

0x2079,	// (0x00041647) linegrid_hwr_fs_pane_ParamLimits

0x2079,	// (0x00041647) linegrid_hwr_fs_pane

0xc83e,	// (0x0004be0c) cell_hwr_fs_pane_ParamLimits

0xc83e,	// (0x0004be0c) cell_hwr_fs_pane

0x540c,	// (0x000449da) linegrid_hwr_fs_pane_g1_ParamLimits

0x540c,	// (0x000449da) linegrid_hwr_fs_pane_g1

0xd9e8,	// (0x0004cfb6) linegrid_hwr_fs_pane_g2_ParamLimits

0xd9e8,	// (0x0004cfb6) linegrid_hwr_fs_pane_g2

0x542a,	// (0x000449f8) linegrid_hwr_fs_pane_g3_ParamLimits

0x542a,	// (0x000449f8) linegrid_hwr_fs_pane_g3

0x20ab,	// (0x00041679) linegrid_hwr_fs_pane_g4_ParamLimits

0x20ab,	// (0x00041679) linegrid_hwr_fs_pane_g4

0x20c5,	// (0x00041693) linegrid_hwr_fs_pane_g5_ParamLimits

0x20c5,	// (0x00041693) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0004edc3) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0004edc3) linegrid_hwr_fs_pane_g

0x5436,	// (0x00044a04) cell_hwr_fs_pane_g1_ParamLimits

0x5436,	// (0x00044a04) cell_hwr_fs_pane_g1

0x5201,	// (0x000447cf) cell_hwr_fs_pane_g2_ParamLimits

0x5201,	// (0x000447cf) cell_hwr_fs_pane_g2

0xd9fa,	// (0x0004cfc8) cell_hwr_fs_pane_g3_ParamLimits

0xd9fa,	// (0x0004cfc8) cell_hwr_fs_pane_g3

0xda07,	// (0x0004cfd5) cell_hwr_fs_pane_g4_ParamLimits

0xda07,	// (0x0004cfd5) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0004edce) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0004edce) cell_hwr_fs_pane_g

0xc864,	// (0x0004be32) cell_hwr_fs_pane_t1

0x3563,	// (0x00042b31) grid_highlight_pane_cp6

0x3563,	// (0x00042b31) main_idle_act2_pane

0x4009,	// (0x000435d7) aid_inside_area_popup_secondary

0xdadf,	// (0x0004d0ad) aid_inside_area_window_primary_ParamLimits

0xdadf,	// (0x0004d0ad) aid_inside_area_window_primary

0x6c24,	// (0x000461f2) ai2_news_ticker_pane

0x6c2c,	// (0x000461fa) aid_size_cell_ai1_link_ParamLimits

0x6c2c,	// (0x000461fa) aid_size_cell_ai1_link

0xdea1,	// (0x0004d46f) popup_ai2_data_window_ParamLimits

0xdea1,	// (0x0004d46f) popup_ai2_data_window

0x6c5c,	// (0x0004622a) popup_ai2_link_window_ParamLimits

0x6c5c,	// (0x0004622a) popup_ai2_link_window

0x5400,	// (0x000449ce) bg_popup_sub_pane_cp4_ParamLimits

0x5400,	// (0x000449ce) bg_popup_sub_pane_cp4

0x6c70,	// (0x0004623e) grid_ai2_link_pane_ParamLimits

0x6c70,	// (0x0004623e) grid_ai2_link_pane

0x6c87,	// (0x00046255) popup_ai2_link_window_g1_ParamLimits

0x6c87,	// (0x00046255) popup_ai2_link_window_g1

0x6c93,	// (0x00046261) popup_ai2_link_window_g2_ParamLimits

0x6c93,	// (0x00046261) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0004efa1) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0004efa1) popup_ai2_link_window_g

0x6ca2,	// (0x00046270) ai2_mp_button_pane

0x6caa,	// (0x00046278) ai2_mp_volume_pane

0x5613,	// (0x00044be1) bg_popup_sub_pane_cp5_ParamLimits

0x5613,	// (0x00044be1) bg_popup_sub_pane_cp5

0x6cb2,	// (0x00046280) heading_ai2_gene_pane_ParamLimits

0x6cb2,	// (0x00046280) heading_ai2_gene_pane

0x6cbe,	// (0x0004628c) list_ai2_gene_pane_ParamLimits

0x6cbe,	// (0x0004628c) list_ai2_gene_pane

0x6d06,	// (0x000462d4) cell_ai2_link_pane_ParamLimits

0x6d06,	// (0x000462d4) cell_ai2_link_pane

0x6d1c,	// (0x000462ea) cell_ai2_link_pane_g1

0x3563,	// (0x00042b31) grid_highlight_pane_cp7

0x2463,	// (0x00041a31) ai2_mp_volume_pane_g1

0x6dec,	// (0x000463ba) ai2_mp_volume_pane_g2

0xdecb,	// (0x0004d499) list_ai2_gene_pane_t1

0x6df4,	// (0x000463c2) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0004efba) ai2_mp_volume_pane_g

0x246b,	// (0x00041a39) volume_small_pane_cp3

0x6dfc,	// (0x000463ca) aid_size_cell_ai2_button

0x6e04,	// (0x000463d2) grid_ai2_button_pane

0x6e0d,	// (0x000463db) cell_ai2_button_pane_ParamLimits

0x6e0d,	// (0x000463db) cell_ai2_button_pane

0x3559,	// (0x00042b27) cell_ai2_button_pane_g1

0x3563,	// (0x00042b31) grid_highlight_pane_cp8

0x6dac,	// (0x0004637a) ai2_gene_pane_t1_ParamLimits

0x6dac,	// (0x0004637a) ai2_gene_pane_t1

0xc12a,	// (0x0004b6f8) aid_height_parent_landscape

0xdc29,	// (0x0004d1f7) aid_height_set_list

0x676c,	// (0x00045d3a) aid_size_parent

0x6a4a,	// (0x00046018) aid_size_cell_graphic_pane_ParamLimits

0x6cce,	// (0x0004629c) popup_ai2_data_window_g1_ParamLimits

0x6cce,	// (0x0004629c) popup_ai2_data_window_g1

0x6cda,	// (0x000462a8) ai2_news_ticker_pane_g1

0x6ce2,	// (0x000462b0) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0004efa6) ai2_news_ticker_pane_g

0x6cea,	// (0x000462b8) ai2_news_ticker_pane_t1

0x6cf8,	// (0x000462c6) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0004efab) ai2_news_ticker_pane_t

0x6d25,	// (0x000462f3) heading_ai2_gene_pane_g1

0x6d2d,	// (0x000462fb) heading_ai2_gene_pane_t1_ParamLimits

0x6d2d,	// (0x000462fb) heading_ai2_gene_pane_t1

0x6d42,	// (0x00046310) list_highlight_pane_cp6

0xdeb5,	// (0x0004d483) ai2_gene_pane_ParamLimits

0xdeb5,	// (0x0004d483) ai2_gene_pane

0xded9,	// (0x0004d4a7) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0004efb0) list_ai2_gene_pane_t

0x6d7d,	// (0x0004634b) list_highlight_pane_cp8_ParamLimits

0x6d7d,	// (0x0004634b) list_highlight_pane_cp8

0x6d8e,	// (0x0004635c) ai2_gene_pane_g1_ParamLimits

0x6d8e,	// (0x0004635c) ai2_gene_pane_g1

0x6da0,	// (0x0004636e) ai2_gene_pane_g2_ParamLimits

0x6da0,	// (0x0004636e) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0004efb5) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0004efb5) ai2_gene_pane_g

0x3e48,	// (0x00043416) scroll_pane_cp12

0xc0e9,	// (0x0004b6b7) control_pane_t3_ParamLimits

0xc0e9,	// (0x0004b6b7) control_pane_t3

0xd573,	// (0x0004cb41) status_small_pane_g8_ParamLimits

0xd573,	// (0x0004cb41) status_small_pane_g8

0xc245,	// (0x0004b813) popup_find_window_ParamLimits

0xc4d2,	// (0x0004baa0) popup_note_image_window_ParamLimits

0x070b,	// (0x0003fcd9) list_double2_graphic_pane_vc_g1_ParamLimits

0x070b,	// (0x0003fcd9) list_double2_graphic_pane_vc_g1

0x4a7d,	// (0x0004404b) list_double2_graphic_pane_vc_g2_ParamLimits

0x4a7d,	// (0x0004404b) list_double2_graphic_pane_vc_g2

0x1fc9,	// (0x00041597) list_double2_graphic_pane_vc_g3_ParamLimits

0x1fc9,	// (0x00041597) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004ed91) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004ed91) list_double2_graphic_pane_vc_g

0x0717,	// (0x0003fce5) list_double2_graphic_pane_vc_t1_ParamLimits

0x0717,	// (0x0003fce5) list_double2_graphic_pane_vc_t1

0x4a7d,	// (0x0004404b) list_single_heading_pane_vc_g1_ParamLimits

0x4a7d,	// (0x0004404b) list_single_heading_pane_vc_g1

0x1fc9,	// (0x00041597) list_single_heading_pane_vc_g2_ParamLimits

0x1fc9,	// (0x00041597) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004eba0) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004eba0) list_single_heading_pane_vc_g

0x072d,	// (0x0003fcfb) list_single_heading_pane_vc_t1_ParamLimits

0x072d,	// (0x0003fcfb) list_single_heading_pane_vc_t1

0x0745,	// (0x0003fd13) list_single_heading_pane_vc_t2_ParamLimits

0x0745,	// (0x0003fd13) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0004edb2) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0004edb2) list_single_heading_pane_vc_t

0x2034,	// (0x00041602) list_setting_number_pane_vc_g1_ParamLimits

0x2034,	// (0x00041602) list_setting_number_pane_vc_g1

0x2040,	// (0x0004160e) list_setting_number_pane_vc_g2_ParamLimits

0x2040,	// (0x0004160e) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004edb7) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004edb7) list_setting_number_pane_vc_g

0x0761,	// (0x0003fd2f) list_setting_number_pane_vc_t1_ParamLimits

0x0761,	// (0x0003fd2f) list_setting_number_pane_vc_t1

0x0775,	// (0x0003fd43) list_setting_number_pane_vc_t2_ParamLimits

0x0775,	// (0x0003fd43) list_setting_number_pane_vc_t2

0x0791,	// (0x0003fd5f) list_setting_number_pane_vc_t3_ParamLimits

0x0791,	// (0x0003fd5f) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0004edbc) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0004edbc) list_setting_number_pane_vc_t

0x07bd,	// (0x0003fd8b) set_value_pane_vc_ParamLimits

0x07bd,	// (0x0003fd8b) set_value_pane_vc

0x6924,	// (0x00045ef2) list_double2_graphic_pane_vc_ParamLimits

0x6924,	// (0x00045ef2) list_double2_graphic_pane_vc

0x0875,	// (0x0003fe43) list_double2_large_graphic_pane_vc_ParamLimits

0x0875,	// (0x0003fe43) list_double2_large_graphic_pane_vc

0x6924,	// (0x00045ef2) list_double2_pane_vc_ParamLimits

0x6924,	// (0x00045ef2) list_double2_pane_vc

0x6924,	// (0x00045ef2) list_double_graphic_heading_pane_vc_ParamLimits

0x6924,	// (0x00045ef2) list_double_graphic_heading_pane_vc

0x6924,	// (0x00045ef2) list_double_graphic_pane_vc_ParamLimits

0x6924,	// (0x00045ef2) list_double_graphic_pane_vc

0x6924,	// (0x00045ef2) list_double_heading_pane_vc_ParamLimits

0x6924,	// (0x00045ef2) list_double_heading_pane_vc

0x0886,	// (0x0003fe54) list_double_large_graphic_pane_vc_ParamLimits

0x0886,	// (0x0003fe54) list_double_large_graphic_pane_vc

0x6924,	// (0x00045ef2) list_double_number_pane_vc_ParamLimits

0x6924,	// (0x00045ef2) list_double_number_pane_vc

0x6924,	// (0x00045ef2) list_double_pane_vc_ParamLimits

0x6924,	// (0x00045ef2) list_double_pane_vc

0x6924,	// (0x00045ef2) list_double_time_pane_vc_ParamLimits

0x6924,	// (0x00045ef2) list_double_time_pane_vc

0x6924,	// (0x00045ef2) list_setting_number_pane_vc_ParamLimits

0x6924,	// (0x00045ef2) list_setting_number_pane_vc

0x6924,	// (0x00045ef2) list_setting_pane_vc_ParamLimits

0x6924,	// (0x00045ef2) list_setting_pane_vc

0x6924,	// (0x00045ef2) list_single_graphic_heading_pane_vc_ParamLimits

0x6924,	// (0x00045ef2) list_single_graphic_heading_pane_vc

0x6924,	// (0x00045ef2) list_single_heading_pane_vc_ParamLimits

0x6924,	// (0x00045ef2) list_single_heading_pane_vc

0x6924,	// (0x00045ef2) list_single_number_heading_pane_vc_ParamLimits

0x6924,	// (0x00045ef2) list_single_number_heading_pane_vc

0x070b,	// (0x0003fcd9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x070b,	// (0x0003fcd9) list_double_graphic_heading_pane_vc_g1

0x4a7d,	// (0x0004404b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4a7d,	// (0x0004404b) list_double_graphic_heading_pane_vc_g2

0x1fc9,	// (0x00041597) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1fc9,	// (0x00041597) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004ed91) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004ed91) list_double_graphic_heading_pane_vc_g

0x08d5,	// (0x0003fea3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x08d5,	// (0x0003fea3) list_double_graphic_heading_pane_vc_t1

0x08f1,	// (0x0003febf) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x08f1,	// (0x0003febf) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0004efc1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0004efc1) list_double_graphic_heading_pane_vc_t

0x2034,	// (0x00041602) list_setting_pane_vc_g1_ParamLimits

0x2034,	// (0x00041602) list_setting_pane_vc_g1

0x2040,	// (0x0004160e) list_setting_pane_vc_g2_ParamLimits

0x2040,	// (0x0004160e) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004edb7) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004edb7) list_setting_pane_vc_g

0x090f,	// (0x0003fedd) list_setting_pane_vc_t1_ParamLimits

0x090f,	// (0x0003fedd) list_setting_pane_vc_t1

0x092b,	// (0x0003fef9) list_setting_pane_vc_t2_ParamLimits

0x092b,	// (0x0003fef9) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0004efef) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0004efef) list_setting_pane_vc_t

0x07bd,	// (0x0003fd8b) set_value_pane_cp_vc_ParamLimits

0x07bd,	// (0x0003fd8b) set_value_pane_cp_vc

0x4a7d,	// (0x0004404b) list_single_number_heading_pane_vc_g1_ParamLimits

0x4a7d,	// (0x0004404b) list_single_number_heading_pane_vc_g1

0x1fc9,	// (0x00041597) list_single_number_heading_pane_vc_g2_ParamLimits

0x1fc9,	// (0x00041597) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004eba0) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004eba0) list_single_number_heading_pane_vc_g

0x072d,	// (0x0003fcfb) list_single_number_heading_pane_vc_t1_ParamLimits

0x072d,	// (0x0003fcfb) list_single_number_heading_pane_vc_t1

0x0947,	// (0x0003ff15) list_single_number_heading_pane_vc_t2_ParamLimits

0x0947,	// (0x0003ff15) list_single_number_heading_pane_vc_t2

0x095b,	// (0x0003ff29) list_single_number_heading_pane_vc_t3_ParamLimits

0x095b,	// (0x0003ff29) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0004eff4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0004eff4) list_single_number_heading_pane_vc_t

0x070b,	// (0x0003fcd9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x070b,	// (0x0003fcd9) list_single_graphic_heading_pane_vc_g1

0x4a7d,	// (0x0004404b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4a7d,	// (0x0004404b) list_single_graphic_heading_pane_vc_g4

0x1fc9,	// (0x00041597) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1fc9,	// (0x00041597) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0004ed91) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004ed91) list_single_graphic_heading_pane_vc_g

0x072d,	// (0x0003fcfb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x072d,	// (0x0003fcfb) list_single_graphic_heading_pane_vc_t1

0x096d,	// (0x0003ff3b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x096d,	// (0x0003ff3b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0004effb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0004effb) list_single_graphic_heading_pane_vc_t

0x4a7d,	// (0x0004404b) list_double2_pane_vc_g1_ParamLimits

0x4a7d,	// (0x0004404b) list_double2_pane_vc_g1

0x1fc9,	// (0x00041597) list_double2_pane_vc_g2_ParamLimits

0x1fc9,	// (0x00041597) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004eba0) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004eba0) list_double2_pane_vc_g

0x0981,	// (0x0003ff4f) list_double2_pane_vc_t1_ParamLimits

0x0981,	// (0x0003ff4f) list_double2_pane_vc_t1

0x0997,	// (0x0003ff65) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0997,	// (0x0003ff65) list_double2_large_graphic_pane_vc_g1

0x09a3,	// (0x0003ff71) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x09a3,	// (0x0003ff71) list_double2_large_graphic_pane_vc_g2

0x09af,	// (0x0003ff7d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x09af,	// (0x0003ff7d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0004ebb8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0004ebb8) list_double2_large_graphic_pane_vc_g

0x09bb,	// (0x0003ff89) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x09bb,	// (0x0003ff89) list_double2_large_graphic_pane_vc_t1

0x2474,	// (0x00041a42) list_double_time_pane_vc_g1_ParamLimits

0x2474,	// (0x00041a42) list_double_time_pane_vc_g1

0x2480,	// (0x00041a4e) list_double_time_pane_vc_g2_ParamLimits

0x2480,	// (0x00041a4e) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0004f000) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0004f000) list_double_time_pane_vc_g

0x09d1,	// (0x0003ff9f) list_double_time_pane_vc_t1_ParamLimits

0x09d1,	// (0x0003ff9f) list_double_time_pane_vc_t1

0x09f5,	// (0x0003ffc3) list_double_time_pane_vc_t2_ParamLimits

0x09f5,	// (0x0003ffc3) list_double_time_pane_vc_t2

0x0a44,	// (0x00040012) list_double_time_pane_vc_t3_ParamLimits

0x0a44,	// (0x00040012) list_double_time_pane_vc_t3

0x0a56,	// (0x00040024) list_double_time_pane_vc_t4_ParamLimits

0x0a56,	// (0x00040024) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0004f005) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0004f005) list_double_time_pane_vc_t

0x4a7d,	// (0x0004404b) list_double_pane_vc_g1_ParamLimits

0x4a7d,	// (0x0004404b) list_double_pane_vc_g1

0x1fc9,	// (0x00041597) list_double_pane_vc_g2_ParamLimits

0x1fc9,	// (0x00041597) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004eba0) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004eba0) list_double_pane_vc_g

0x0a6a,	// (0x00040038) list_double_pane_vc_t1_ParamLimits

0x0a6a,	// (0x00040038) list_double_pane_vc_t1

0x0a7e,	// (0x0004004c) list_double_pane_vc_t2_ParamLimits

0x0a7e,	// (0x0004004c) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0004f00e) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0004f00e) list_double_pane_vc_t

0x4a7d,	// (0x0004404b) list_double_number_pane_vc_g1_ParamLimits

0x4a7d,	// (0x0004404b) list_double_number_pane_vc_g1

0x1fc9,	// (0x00041597) list_double_number_pane_vc_g2_ParamLimits

0x1fc9,	// (0x00041597) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004eba0) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004eba0) list_double_number_pane_vc_g

0x0a96,	// (0x00040064) list_double_number_pane_vc_t1_ParamLimits

0x0a96,	// (0x00040064) list_double_number_pane_vc_t1

0x0aa8,	// (0x00040076) list_double_number_pane_vc_t2_ParamLimits

0x0aa8,	// (0x00040076) list_double_number_pane_vc_t2

0x0abc,	// (0x0004008a) list_double_number_pane_vc_t3_ParamLimits

0x0abc,	// (0x0004008a) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0004f013) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0004f013) list_double_number_pane_vc_t

0x0ad4,	// (0x000400a2) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0ad4,	// (0x000400a2) list_double_large_graphic_pane_vc_g1

0x0af6,	// (0x000400c4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0af6,	// (0x000400c4) list_double_large_graphic_pane_vc_g2

0x0b0a,	// (0x000400d8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0b0a,	// (0x000400d8) list_double_large_graphic_pane_vc_g3

0x0b19,	// (0x000400e7) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0b19,	// (0x000400e7) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0004f01a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0004f01a) list_double_large_graphic_pane_vc_g

0x0b25,	// (0x000400f3) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0b25,	// (0x000400f3) list_double_large_graphic_pane_vc_t1

0x0b41,	// (0x0004010f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0b41,	// (0x0004010f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0004f023) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0004f023) list_double_large_graphic_pane_vc_t

0x4a7d,	// (0x0004404b) list_double_heading_pane_vc_g1_ParamLimits

0x4a7d,	// (0x0004404b) list_double_heading_pane_vc_g1

0x1fc9,	// (0x00041597) list_double_heading_pane_vc_g2_ParamLimits

0x1fc9,	// (0x00041597) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004eba0) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004eba0) list_double_heading_pane_vc_g

0x0b63,	// (0x00040131) list_double_heading_pane_vc_t1_ParamLimits

0x0b63,	// (0x00040131) list_double_heading_pane_vc_t1

0x072d,	// (0x0003fcfb) list_double_heading_pane_vc_t2_ParamLimits

0x072d,	// (0x0003fcfb) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0004f028) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0004f028) list_double_heading_pane_vc_t

0x0b77,	// (0x00040145) list_double_graphic_pane_vc_g1_ParamLimits

0x0b77,	// (0x00040145) list_double_graphic_pane_vc_g1

0x248c,	// (0x00041a5a) list_double_graphic_pane_vc_g2_ParamLimits

0x248c,	// (0x00041a5a) list_double_graphic_pane_vc_g2

0x4a7d,	// (0x0004404b) list_double_graphic_pane_vc_g3_ParamLimits

0x4a7d,	// (0x0004404b) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0004f02d) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0004f02d) list_double_graphic_pane_vc_g

0x0b83,	// (0x00040151) list_double_graphic_pane_vc_t1_ParamLimits

0x0b83,	// (0x00040151) list_double_graphic_pane_vc_t1

0x0bad,	// (0x0004017b) list_double_graphic_pane_vc_t2_ParamLimits

0x0bad,	// (0x0004017b) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0004f036) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0004f036) list_double_graphic_pane_vc_t

0x0ebd,	// (0x0004048b) aid_size_cell_fastswap

0xbd5b,	// (0x0004b329) aid_size_cell_touch_ParamLimits

0xbd5b,	// (0x0004b329) aid_size_cell_touch

0x1120,	// (0x000406ee) popup_fast_swap_wide_window_ParamLimits

0x1120,	// (0x000406ee) popup_fast_swap_wide_window

0xbf0b,	// (0x0004b4d9) touch_pane_ParamLimits

0xbf0b,	// (0x0004b4d9) touch_pane

0x3eaa,	// (0x00043478) button_value_adjust_pane_cp2

0x03b6,	// (0x0003f984) button_value_adjust_pane_cp4

0x03da,	// (0x0003f9a8) form_field_data_pane_cp2

0xb9a4,	// (0x0004af72) form_field_data_wide_pane_cp2

0x431b,	// (0x000438e9) bg_scroll_pane_ParamLimits

0x156e,	// (0x00040b3c) scroll_handle_pane_ParamLimits

0x1582,	// (0x00040b50) scroll_sc2_down_pane_ParamLimits

0x1582,	// (0x00040b50) scroll_sc2_down_pane

0x434c,	// (0x0004391a) scroll_sc2_up_pane_ParamLimits

0x434c,	// (0x0004391a) scroll_sc2_up_pane

0xdff9,	// (0x0004d5c7) grid_wheel_folder_pane_g1_ParamLimits

0xdff9,	// (0x0004d5c7) grid_wheel_folder_pane_g1

0x1763,	// (0x00040d31) clock_nsta_pane_cp2_ParamLimits

0x1763,	// (0x00040d31) clock_nsta_pane_cp2

0x4e82,	// (0x00044450) listscroll_midp_pane_ParamLimits

0xd46e,	// (0x0004ca3c) midp_canvas_pane

0x4e34,	// (0x00044402) nsta_clock_indic_pane

0x4e68,	// (0x00044436) listscroll_form_pane_vc

0x4e70,	// (0x0004443e) listscroll_set_pane_vc_ParamLimits

0x4e70,	// (0x0004443e) listscroll_set_pane_vc

0xd6f3,	// (0x0004ccc1) clock_nsta_pane

0xd71d,	// (0x0004cceb) indicator_nsta_pane

0x52ca,	// (0x00044898) bg_popup_sub_pane_cp2_ParamLimits

0x52de,	// (0x000448ac) find_pane_cp2_ParamLimits

0x52de,	// (0x000448ac) find_pane_cp2

0x52f4,	// (0x000448c2) grid_toobar_pane_ParamLimits

0x53d4,	// (0x000449a2) list_form_gen_pane_vc_ParamLimits

0x53d4,	// (0x000449a2) list_form_gen_pane_vc

0x53ea,	// (0x000449b8) scroll_pane_cp8_vc_ParamLimits

0x53ea,	// (0x000449b8) scroll_pane_cp8_vc

0x5466,	// (0x00044a34) data_form_wide_pane_vc_ParamLimits

0x5466,	// (0x00044a34) data_form_wide_pane_vc

0x5472,	// (0x00044a40) form_field_data_wide_pane_vc_g1

0x547a,	// (0x00044a48) form_field_data_wide_pane_vc_t1_ParamLimits

0x547a,	// (0x00044a48) form_field_data_wide_pane_vc_t1

0x3ebe,	// (0x0004348c) input_focus_pane_cp6_vc_ParamLimits

0x3ebe,	// (0x0004348c) input_focus_pane_cp6_vc

0xda99,	// (0x0004d067) list_midp_pane_ParamLimits

0x6ab1,	// (0x0004607f) scroll_pane_cp16_ParamLimits

0x6ab1,	// (0x0004607f) scroll_pane_cp16

0x5800,	// (0x00044dce) button_value_adjust_pane_ParamLimits

0x5800,	// (0x00044dce) button_value_adjust_pane

0xdc3a,	// (0x0004d208) button_value_adjust_pane_cp6_ParamLimits

0xdc3a,	// (0x0004d208) button_value_adjust_pane_cp6

0xdd54,	// (0x0004d322) settings_code_pane_cp_ParamLimits

0xdd54,	// (0x0004d322) settings_code_pane_cp

0x3559,	// (0x00042b27) cell_touch_pane_g1

0x3559,	// (0x00042b27) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0004ecd6) cell_touch_pane_g

0xdee7,	// (0x0004d4b5) cell_touch_pane_cp_ParamLimits

0xdee7,	// (0x0004d4b5) cell_touch_pane_cp

0xdf03,	// (0x0004d4d1) cell_touch_pane_ParamLimits

0xdf03,	// (0x0004d4d1) cell_touch_pane

0x3559,	// (0x00042b27) scroll_sc2_down_pane_g1

0x3559,	// (0x00042b27) scroll_sc2_up_pane_g1

0x3563,	// (0x00042b31) bg_set_opt_pane_cp4_vc

0x6e41,	// (0x0004640f) list_set_graphic_pane_vc_g1_ParamLimits

0x6e41,	// (0x0004640f) list_set_graphic_pane_vc_g1

0x6e4d,	// (0x0004641b) list_set_graphic_pane_vc_g2_ParamLimits

0x6e4d,	// (0x0004641b) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0004efc6) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0004efc6) list_set_graphic_pane_vc_g

0x6e59,	// (0x00046427) text_primary_small_cp13_vc_ParamLimits

0x6e59,	// (0x00046427) text_primary_small_cp13_vc

0x6e71,	// (0x0004643f) list_set_graphic_pane_vc_ParamLimits

0x6e71,	// (0x0004643f) list_set_graphic_pane_vc

0x3563,	// (0x00042b31) input_focus_pane_cp2_vc

0x3559,	// (0x00042b27) setting_code_pane_vc_g1

0x368e,	// (0x00042c5c) setting_code_pane_vc_t1

0x6e84,	// (0x00046452) set_text_pane_vc_t1_ParamLimits

0x6e84,	// (0x00046452) set_text_pane_vc_t1

0x3563,	// (0x00042b31) input_focus_pane_cp1_vc

0x6ea0,	// (0x0004646e) list_set_text_pane_vc

0x3559,	// (0x00042b27) setting_text_pane_vc_g1

0x3563,	// (0x00042b31) bg_set_opt_pane_cp2_vc

0x3685,	// (0x00042c53) setting_slider_graphic_pane_vc_g1

0x6eaa,	// (0x00046478) setting_slider_graphic_pane_vc_t1

0x6eba,	// (0x00046488) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0004efcb) setting_slider_graphic_pane_vc_t

0x6eca,	// (0x00046498) slider_set_pane_cp_vc

0x6ed2,	// (0x000464a0) slider_set_pane_vc_g1

0x6edb,	// (0x000464a9) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0004efd0) slider_set_pane_vc_g

0x3f0d,	// (0x000434db) set_opt_bg_pane_g1_copy1

0x3f15,	// (0x000434e3) set_opt_bg_pane_g2_copy1

0x6f07,	// (0x000464d5) set_opt_bg_pane_g3_copy1

0x3f25,	// (0x000434f3) set_opt_bg_pane_g4_copy1

0x3f2d,	// (0x000434fb) set_opt_bg_pane_g5_copy1

0x3f35,	// (0x00043503) set_opt_bg_pane_g6_copy1

0x6f11,	// (0x000464df) set_opt_bg_pane_g7_copy1

0x6f19,	// (0x000464e7) set_opt_bg_pane_g8_copy1

0x6f23,	// (0x000464f1) set_opt_bg_pane_g9_copy1

0x3563,	// (0x00042b31) bg_set_opt_pane_cp_vc

0x6f2d,	// (0x000464fb) setting_slider_pane_vc_t1

0x6f3c,	// (0x0004650a) setting_slider_pane_vc_t2

0x6f4c,	// (0x0004651a) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0004efdf) setting_slider_pane_vc_t

0x6f5c,	// (0x0004652a) slider_set_pane_vc

0x20e9,	// (0x000416b7) volume_set_pane_vc_g1

0x20f2,	// (0x000416c0) volume_set_pane_vc_g2

0x20fb,	// (0x000416c9) volume_set_pane_vc_g3

0x2104,	// (0x000416d2) volume_set_pane_vc_g4

0x210d,	// (0x000416db) volume_set_pane_vc_g5

0x2116,	// (0x000416e4) volume_set_pane_vc_g6

0x211f,	// (0x000416ed) volume_set_pane_vc_g7

0x2128,	// (0x000416f6) volume_set_pane_vc_g8

0x2131,	// (0x000416ff) volume_set_pane_vc_g9

0x213a,	// (0x00041708) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0004ee84) volume_set_pane_vc_g

0x6f64,	// (0x00046532) volume_set_pane_vc

0x6f6c,	// (0x0004653a) button_value_adjust_pane_cp1_vc

0x6f76,	// (0x00046544) list_highlight_pane_cp2_vc

0x6f7f,	// (0x0004654d) list_set_pane_vc_ParamLimits

0x6f7f,	// (0x0004654d) list_set_pane_vc

0x6fdd,	// (0x000465ab) main_pane_set_vc_t1_ParamLimits

0x6fdd,	// (0x000465ab) main_pane_set_vc_t1

0x6ff2,	// (0x000465c0) main_pane_set_vc_t2_ParamLimits

0x6ff2,	// (0x000465c0) main_pane_set_vc_t2

0x7004,	// (0x000465d2) main_pane_set_vc_t3_ParamLimits

0x7004,	// (0x000465d2) main_pane_set_vc_t3

0x7018,	// (0x000465e6) main_pane_set_vc_t4_ParamLimits

0x7018,	// (0x000465e6) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0004efe6) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0004efe6) main_pane_set_vc_t

0x702c,	// (0x000465fa) setting_code_pane_vc_ParamLimits

0x702c,	// (0x000465fa) setting_code_pane_vc

0x703d,	// (0x0004660b) setting_slider_graphic_pane_vc

0x703d,	// (0x0004660b) setting_slider_pane_vc

0x703d,	// (0x0004660b) setting_text_pane_vc

0x703d,	// (0x0004660b) setting_volume_pane_vc

0x7047,	// (0x00046615) scroll_pane_cp121_vc

0x3e98,	// (0x00043466) set_content_pane_vc

0x704f,	// (0x0004661d) button_value_adjust_pane_g1

0x7058,	// (0x00046626) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0004f03b) button_value_adjust_pane_g

0x7061,	// (0x0004662f) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7061,	// (0x0004662f) form_field_slider_wide_pane_vc_t1

0x7075,	// (0x00046643) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7075,	// (0x00046643) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0004f040) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0004f040) form_field_slider_wide_pane_vc_t

0x38be,	// (0x00042e8c) input_focus_pane_cp10_vc_ParamLimits

0x38be,	// (0x00042e8c) input_focus_pane_cp10_vc

0x70a3,	// (0x00046671) slider_cont_pane_cp1_vc_ParamLimits

0x70a3,	// (0x00046671) slider_cont_pane_cp1_vc

0x70b5,	// (0x00046683) slider_form_pane_g1_cp2

0x6edb,	// (0x000464a9) slider_form_pane_g2_cp2

0x70e2,	// (0x000466b0) form_field_slider_pane_vc_t3

0x70f0,	// (0x000466be) form_field_slider_pane_vc_t4

0x70fe,	// (0x000466cc) slider_form_pane_vc_ParamLimits

0x70fe,	// (0x000466cc) slider_form_pane_vc

0x710b,	// (0x000466d9) form_field_slider_pane_vc_t1_ParamLimits

0x710b,	// (0x000466d9) form_field_slider_pane_vc_t1

0x7075,	// (0x00046643) form_field_slider_pane_vc_t2_ParamLimits

0x7075,	// (0x00046643) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0004f052) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0004f052) form_field_slider_pane_vc_t

0x38be,	// (0x00042e8c) input_focus_pane_cp9_vc_ParamLimits

0x38be,	// (0x00042e8c) input_focus_pane_cp9_vc

0x7127,	// (0x000466f5) slider_cont_pane_vc_ParamLimits

0x7127,	// (0x000466f5) slider_cont_pane_vc

0x713b,	// (0x00046709) list_form_graphic_pane_cp_vc_ParamLimits

0x713b,	// (0x00046709) list_form_graphic_pane_cp_vc

0x5472,	// (0x00044a40) form_field_popup_wide_pane_vc_g1

0x7150,	// (0x0004671e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7150,	// (0x0004671e) form_field_popup_wide_pane_vc_t1

0x3ebe,	// (0x0004348c) input_focus_pane_cp8_vc_ParamLimits

0x3ebe,	// (0x0004348c) input_focus_pane_cp8_vc

0x7195,	// (0x00046763) list_form_wide_pane_vc_ParamLimits

0x7195,	// (0x00046763) list_form_wide_pane_vc

0x71a1,	// (0x0004676f) list_form_graphic_pane_vc_g1

0x71a9,	// (0x00046777) list_form_graphic_pane_vc_t1_ParamLimits

0x71a9,	// (0x00046777) list_form_graphic_pane_vc_t1

0x3643,	// (0x00042c11) list_highlight_pane_cp5_vc_ParamLimits

0x3643,	// (0x00042c11) list_highlight_pane_cp5_vc

0x71c5,	// (0x00046793) list_form_graphic_pane_vc_ParamLimits

0x71c5,	// (0x00046793) list_form_graphic_pane_vc

0x5472,	// (0x00044a40) form_field_popup_pane_vc_g1

0x71db,	// (0x000467a9) form_field_popup_pane_vc_t1_ParamLimits

0x71db,	// (0x000467a9) form_field_popup_pane_vc_t1

0x3ebe,	// (0x0004348c) input_focus_pane_cp7_vc_ParamLimits

0x3ebe,	// (0x0004348c) input_focus_pane_cp7_vc

0x71f2,	// (0x000467c0) list_form_pane_vc_ParamLimits

0x71f2,	// (0x000467c0) list_form_pane_vc

0x71fe,	// (0x000467cc) data_form_pane_vc_t1_ParamLimits

0x71fe,	// (0x000467cc) data_form_pane_vc_t1

0x3f0d,	// (0x000434db) input_focus_pane_vc_g1

0x3f15,	// (0x000434e3) input_focus_pane_vc_g2

0x3f1d,	// (0x000434eb) input_focus_pane_vc_g3

0x3f25,	// (0x000434f3) input_focus_pane_vc_g4

0x3f2d,	// (0x000434fb) input_focus_pane_vc_g5

0x3f35,	// (0x00043503) input_focus_pane_vc_g6

0x3f3d,	// (0x0004350b) input_focus_pane_vc_g7

0x3f45,	// (0x00043513) input_focus_pane_vc_g8

0x3f4d,	// (0x0004351b) input_focus_pane_vc_g9

0x3559,	// (0x00042b27) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0004ec5f) input_focus_pane_vc_g

0x5466,	// (0x00044a34) data_form_pane_vc_ParamLimits

0x5466,	// (0x00044a34) data_form_pane_vc

0x5472,	// (0x00044a40) form_field_data_pane_vc_g1

0x7219,	// (0x000467e7) form_field_data_pane_vc_t1_ParamLimits

0x7219,	// (0x000467e7) form_field_data_pane_vc_t1

0x3ebe,	// (0x0004348c) input_focus_pane_vc_ParamLimits

0x3ebe,	// (0x0004348c) input_focus_pane_vc

0x7233,	// (0x00046801) button_value_adjust_pane_cp3_vc

0x723b,	// (0x00046809) button_value_adjust_pane_cp5_vc

0x7243,	// (0x00046811) form_field_data_pane_vc_ParamLimits

0x7243,	// (0x00046811) form_field_data_pane_vc

0x725a,	// (0x00046828) form_field_data_pane_vc_cp2

0x7262,	// (0x00046830) form_field_data_wide_pane_vc_ParamLimits

0x7262,	// (0x00046830) form_field_data_wide_pane_vc

0x7278,	// (0x00046846) form_field_data_wide_pane_vc_cp2

0x7280,	// (0x0004684e) form_field_popup_pane_vc_ParamLimits

0x7280,	// (0x0004684e) form_field_popup_pane_vc

0x7297,	// (0x00046865) form_field_popup_wide_pane_vc_ParamLimits

0x7297,	// (0x00046865) form_field_popup_wide_pane_vc

0x72ad,	// (0x0004687b) form_field_slider_pane_vc_ParamLimits

0x72ad,	// (0x0004687b) form_field_slider_pane_vc

0x72c0,	// (0x0004688e) form_field_slider_wide_pane_vc_ParamLimits

0x72c0,	// (0x0004688e) form_field_slider_wide_pane_vc

0xdf21,	// (0x0004d4ef) grid_touch_1_pane_ParamLimits

0xdf21,	// (0x0004d4ef) grid_touch_1_pane

0xdf35,	// (0x0004d503) grid_touch_2_pane_ParamLimits

0xdf35,	// (0x0004d503) grid_touch_2_pane

0x738e,	// (0x0004695c) touch_pane_g1_ParamLimits

0x738e,	// (0x0004695c) touch_pane_g1

0x72f7,	// (0x000468c5) cell_app_pane_cp_wide_ParamLimits

0x72f7,	// (0x000468c5) cell_app_pane_cp_wide

0x7308,	// (0x000468d6) grid_popup_fast_wide_pane_ParamLimits

0x7308,	// (0x000468d6) grid_popup_fast_wide_pane

0x731c,	// (0x000468ea) scroll_pane_cp19_ParamLimits

0x731c,	// (0x000468ea) scroll_pane_cp19

0x3563,	// (0x00042b31) bg_popup_window_pane_cp20

0x7330,	// (0x000468fe) listscroll_popup_fast_wide_pane

0x4075,	// (0x00043643) grid_indicator_nsta_pane

0x7338,	// (0x00046906) clock_nsta_pane_g1

0x7341,	// (0x0004690f) clock_nsta_pane_t1

0xdf5f,	// (0x0004d52d) cell_indicator_nsta_pane_ParamLimits

0xdf5f,	// (0x0004d52d) cell_indicator_nsta_pane

0x738e,	// (0x0004695c) cell_indicator_nsta_pane_g1

0xdf76,	// (0x0004d544) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0004f063) cell_indicator_nsta_pane_g

0x73a9,	// (0x00046977) clock_nsta_pane_cp

0x73b1,	// (0x0004697f) indicator_nsta_pane_cp

0x73b9,	// (0x00046987) nsta_clock_indic_pane_g1

0x370c,	// (0x00042cda) grid_indicator_pane

0x4441,	// (0x00043a0f) scroll_pane_cp29

0x16b2,	// (0x00040c80) indicator_nsta_pane_cp2_ParamLimits

0x16b2,	// (0x00040c80) indicator_nsta_pane_cp2

0x3643,	// (0x00042c11) main_apps_wheel_pane

0x5687,	// (0x00044c55) form_midp_field_text_pane_ParamLimits

0x57d2,	// (0x00044da0) scroll_bar_cp050_ParamLimits

0x741a,	// (0x000469e8) cell_indicator_pane_ParamLimits

0x741a,	// (0x000469e8) cell_indicator_pane

0x7431,	// (0x000469ff) cell_indicator_pane_g1

0xdf83,	// (0x0004d551) grid_wheel_folder_pane_ParamLimits

0xdf83,	// (0x0004d551) grid_wheel_folder_pane

0xdf91,	// (0x0004d55f) list_wheel_apps_pane_ParamLimits

0xdf91,	// (0x0004d55f) list_wheel_apps_pane

0xdf9f,	// (0x0004d56d) main_apps_wheel_pane_g1_ParamLimits

0xdf9f,	// (0x0004d56d) main_apps_wheel_pane_g1

0xdfab,	// (0x0004d579) main_apps_wheel_pane_g2_ParamLimits

0xdfab,	// (0x0004d579) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0004f07f) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0004f07f) main_apps_wheel_pane_g

0xdfb9,	// (0x0004d587) main_apps_wheel_pane_t1_ParamLimits

0xdfb9,	// (0x0004d587) main_apps_wheel_pane_t1

0xdfcd,	// (0x0004d59b) list_wheel_apps_pane_g1

0xdfd5,	// (0x0004d5a3) list_wheel_apps_pane_g2

0xdfdd,	// (0x0004d5ab) list_wheel_apps_pane_g3

0xdfe5,	// (0x0004d5b3) list_wheel_apps_pane_g4

0xdfef,	// (0x0004d5bd) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0004f084) list_wheel_apps_pane_g

0x49c4,	// (0x00043f92) navi_icon_text_pane

0xd5e7,	// (0x0004cbb5) aid_fill_nsta

0x74f6,	// (0x00046ac4) navi_icon_text_pane_g1

0x7502,	// (0x00046ad0) navi_icon_text_pane_t1

0xd44b,	// (0x0004ca19) list_set_graphic_pane_t1_ParamLimits

0xd44b,	// (0x0004ca19) list_set_graphic_pane_t1

0x5f21,	// (0x000454ef) popup_midp_note_alarm_window_t6_ParamLimits

0x5f21,	// (0x000454ef) popup_midp_note_alarm_window_t6

0x5f33,	// (0x00045501) popup_midp_note_alarm_window_t7_ParamLimits

0x5f33,	// (0x00045501) popup_midp_note_alarm_window_t7

0x5f45,	// (0x00045513) popup_midp_note_alarm_window_t8_ParamLimits

0x5f45,	// (0x00045513) popup_midp_note_alarm_window_t8

0x5f57,	// (0x00045525) popup_midp_note_alarm_window_t9_ParamLimits

0x5f57,	// (0x00045525) popup_midp_note_alarm_window_t9

0x5f69,	// (0x00045537) popup_midp_note_alarm_window_t10_ParamLimits

0x5f69,	// (0x00045537) popup_midp_note_alarm_window_t10

0x5f7b,	// (0x00045549) popup_midp_note_alarm_window_t11_ParamLimits

0x5f7b,	// (0x00045549) popup_midp_note_alarm_window_t11

0x5f8d,	// (0x0004555b) scroll_pane_cp17_ParamLimits

0x5f8d,	// (0x0004555b) scroll_pane_cp17

0x20e9,	// (0x000416b7) volume_small_pane_cp_g1

0x24a9,	// (0x00041a77) volume_small_pane_cp_g2

0x24b2,	// (0x00041a80) volume_small_pane_cp_g3

0x24bb,	// (0x00041a89) volume_small_pane_cp_g4

0x24c4,	// (0x00041a92) volume_small_pane_cp_g5

0x24cd,	// (0x00041a9b) volume_small_pane_cp_g6

0x24d6,	// (0x00041aa4) volume_small_pane_cp_g7

0x24df,	// (0x00041aad) volume_small_pane_cp_g8

0x24e8,	// (0x00041ab6) volume_small_pane_cp_g9

0x24f1,	// (0x00041abf) volume_small_pane_cp_g10

0x4c15,	// (0x000441e3) midp_ticker_pane_g1_ParamLimits

0x4c21,	// (0x000441ef) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0004ed2b) midp_ticker_pane_g_ParamLimits

0x4c2d,	// (0x000441fb) midp_ticker_pane_t1_ParamLimits

0xd60b,	// (0x0004cbd9) aid_fill_nsta_2

0x57be,	// (0x00044d8c) list_form2_midp_pane

0x68f3,	// (0x00045ec1) midp_editing_number_pane_ParamLimits

0x6902,	// (0x00045ed0) midp_ticker_pane_ParamLimits

0x7514,	// (0x00046ae2) form2_midp_field_pane

0x7538,	// (0x00046b06) scroll_pane_cp51

0x7558,	// (0x00046b26) form2_midp_button_pane_ParamLimits

0x7558,	// (0x00046b26) form2_midp_button_pane

0x756a,	// (0x00046b38) form2_midp_content_pane_ParamLimits

0x756a,	// (0x00046b38) form2_midp_content_pane

0x7584,	// (0x00046b52) form2_midp_field_choice_group_pane

0x758c,	// (0x00046b5a) form2_midp_field_pane_g1

0x7594,	// (0x00046b62) form2_midp_field_pane_g2

0x759c,	// (0x00046b6a) form2_midp_field_pane_g3

0x75a4,	// (0x00046b72) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0004f0a9) form2_midp_field_pane_g

0x75ac,	// (0x00046b7a) form2_midp_gauge_slider_pane

0x75b4,	// (0x00046b82) form2_midp_gauge_wait_pane

0x75bc,	// (0x00046b8a) form2_midp_image_pane_ParamLimits

0x75bc,	// (0x00046b8a) form2_midp_image_pane

0x75e3,	// (0x00046bb1) form2_midp_label_pane_ParamLimits

0x75e3,	// (0x00046bb1) form2_midp_label_pane

0xe022,	// (0x0004d5f0) form2_midp_label_pane_cp_ParamLimits

0xe022,	// (0x0004d5f0) form2_midp_label_pane_cp

0x761d,	// (0x00046beb) form2_midp_string_pane_ParamLimits

0x761d,	// (0x00046beb) form2_midp_string_pane

0xbbc9,	// (0x0004b197) form2_midp_text_pane_ParamLimits

0xbbc9,	// (0x0004b197) form2_midp_text_pane

0x762f,	// (0x00046bfd) form2_midp_time_pane

0x763f,	// (0x00046c0d) input_focus_pane_cp51_ParamLimits

0x763f,	// (0x00046c0d) input_focus_pane_cp51

0x7657,	// (0x00046c25) form2_midp_label_pane_t1_ParamLimits

0x7657,	// (0x00046c25) form2_midp_label_pane_t1

0xbbe8,	// (0x0004b1b6) form2_mdip_text_pane_t1_ParamLimits

0xbbe8,	// (0x0004b1b6) form2_mdip_text_pane_t1

0x0c14,	// (0x000401e2) form2_midp_time_pane_t1

0x76a0,	// (0x00046c6e) form2_midp_gauge_slider_pane_t1

0xe041,	// (0x0004d60f) form2_midp_gauge_slider_pane_t2

0xe053,	// (0x0004d621) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0004f0b2) form2_midp_gauge_slider_pane_t

0x76d6,	// (0x00046ca4) form2_midp_slider_pane

0x76e2,	// (0x00046cb0) form2_midp_gauge_wait_pane_t1

0x76f0,	// (0x00046cbe) form2_midp_wait_pane_ParamLimits

0x76f0,	// (0x00046cbe) form2_midp_wait_pane

0xe065,	// (0x0004d633) list_single_2graphic_pane_cp4_ParamLimits

0xe065,	// (0x0004d633) list_single_2graphic_pane_cp4

0xda27,	// (0x0004cff5) list_single_midp_graphic_pane_cp_ParamLimits

0xda27,	// (0x0004cff5) list_single_midp_graphic_pane_cp

0x3563,	// (0x00042b31) list_highlight_pane_cp20

0x774a,	// (0x00046d18) list_single_2graphic_pane_g1_cp4

0x7752,	// (0x00046d20) list_single_2graphic_pane_g2_cp4

0x775a,	// (0x00046d28) list_single_2graphic_pane_t1_cp4

0x3643,	// (0x00042c11) list_highlight_pane_cp21

0x7769,	// (0x00046d37) list_single_midp_graphic_pane_g4_cp

0x7778,	// (0x00046d46) list_single_midp_graphic_pane_t1_cp

0xe079,	// (0x0004d647) form2_mdip_string_pane_t1_ParamLimits

0xe079,	// (0x0004d647) form2_mdip_string_pane_t1

0x3563,	// (0x00042b31) bg_wml_button_pane_cp2

0x3559,	// (0x00042b27) form2_midp_image_pane_g1

0x13a4,	// (0x00040972) list_double_large_graphic_pane_g5_ParamLimits

0x13a4,	// (0x00040972) list_double_large_graphic_pane_g5

0x4e82,	// (0x00044450) midp_form_pane_ParamLimits

0x3643,	// (0x00042c11) main_apps_wheel_pane_ParamLimits

0xc550,	// (0x0004bb1e) popup_preview_window_ParamLimits

0xc550,	// (0x0004bb1e) popup_preview_window

0x1f44,	// (0x00041512) popup_touch_info_window_ParamLimits

0x1f44,	// (0x00041512) popup_touch_info_window

0x1f62,	// (0x00041530) popup_touch_menu_window_ParamLimits

0x1f62,	// (0x00041530) popup_touch_menu_window

0x354f,	// (0x00042b1d) bg_popup_sub_pane_cp6

0x7886,	// (0x00046e54) list_touch_menu_pane

0x788e,	// (0x00046e5c) list_single_touch_menu_pane_ParamLimits

0x788e,	// (0x00046e5c) list_single_touch_menu_pane

0x78a4,	// (0x00046e72) list_single_touch_menu_pane_t1

0x3643,	// (0x00042c11) bg_popup_sub_pane_cp7_ParamLimits

0x3643,	// (0x00042c11) bg_popup_sub_pane_cp7

0x78b2,	// (0x00046e80) heading_sub_pane

0x78ba,	// (0x00046e88) list_touch_info_pane_ParamLimits

0x78ba,	// (0x00046e88) list_touch_info_pane

0x78c9,	// (0x00046e97) list_single_touch_info_pane_ParamLimits

0x78c9,	// (0x00046e97) list_single_touch_info_pane

0x78db,	// (0x00046ea9) list_single_touch_info_pane_t1

0x78e9,	// (0x00046eb7) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0004f0c0) list_single_touch_info_pane_t

0x4b44,	// (0x00044112) bg_popup_heading_pane_cp

0x78f7,	// (0x00046ec5) heading_sub_pane_t1

0x5400,	// (0x000449ce) bg_popup_preview_window_pane_cp_ParamLimits

0x5400,	// (0x000449ce) bg_popup_preview_window_pane_cp

0x78b2,	// (0x00046e80) heading_preview_pane

0x78ba,	// (0x00046e88) list_preview_pane_ParamLimits

0x78ba,	// (0x00046e88) list_preview_pane

0x7905,	// (0x00046ed3) popup_preview_window_g1

0x78c9,	// (0x00046e97) list_single_preview_pane_ParamLimits

0x78c9,	// (0x00046e97) list_single_preview_pane

0x790d,	// (0x00046edb) list_single_preview_pane_g1

0x7915,	// (0x00046ee3) list_single_preview_pane_t1

0x78db,	// (0x00046ea9) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0004f0c5) list_single_preview_pane_t

0x7923,	// (0x00046ef1) bg_popup_heading_pane_cp2_ParamLimits

0x7923,	// (0x00046ef1) bg_popup_heading_pane_cp2

0x7939,	// (0x00046f07) heading_preview_pane_g1

0x7941,	// (0x00046f0f) heading_preview_pane_t1_ParamLimits

0x7941,	// (0x00046f0f) heading_preview_pane_t1

0x372f,	// (0x00042cfd) soft_indicator_pane_t1_ParamLimits

0x3e25,	// (0x000433f3) scroll_pane_ParamLimits

0x433a,	// (0x00043908) scroll_sc2_left_pane

0x4343,	// (0x00043911) scroll_sc2_right_pane

0x4362,	// (0x00043930) scroll_bg_pane_g1_ParamLimits

0x4377,	// (0x00043945) scroll_bg_pane_g2_ParamLimits

0x438f,	// (0x0004395d) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0004ecb6) scroll_bg_pane_g_ParamLimits

0x4362,	// (0x00043930) scroll_handle_pane_g1_ParamLimits

0x43b1,	// (0x0004397f) scroll_handle_pane_g2_ParamLimits

0x438f,	// (0x0004395d) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0004ecbd) scroll_handle_pane_g_ParamLimits

0x1a0a,	// (0x00040fd8) popup_choice_list_window_ParamLimits

0x1a0a,	// (0x00040fd8) popup_choice_list_window

0x52d6,	// (0x000448a4) choice_list_pane

0x5358,	// (0x00044926) cell_toolbar_pane_t1

0x5380,	// (0x0004494e) toolbar_button_pane_ParamLimits

0x6453,	// (0x00045a21) ai_gene_pane_1_t2_ParamLimits

0x6453,	// (0x00045a21) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0004eee0) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0004eee0) ai_gene_pane_1_t

0x795e,	// (0x00046f2c) scroll_sc2_left_pane_g1

0x795e,	// (0x00046f2c) scroll_sc2_right_pane_g1

0x4e82,	// (0x00044450) bg_popup_sub_pane_cp10

0x7968,	// (0x00046f36) list_choice_list_pane

0x7981,	// (0x00046f4f) list_single_choice_list_pane_ParamLimits

0x7981,	// (0x00046f4f) list_single_choice_list_pane

0x7994,	// (0x00046f62) list_single_choice_list_pane_g1

0x4046,	// (0x00043614) list_single_choice_list_pane_t1_ParamLimits

0x4046,	// (0x00043614) list_single_choice_list_pane_t1

0x799c,	// (0x00046f6a) choice_list_pane_g1

0x79a4,	// (0x00046f72) choice_list_pane_t1

0x354f,	// (0x00042b1d) input_focus_pane_cp11

0x421d,	// (0x000437eb) title_pane_stacon_g2_ParamLimits

0x421d,	// (0x000437eb) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0004ec9c) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0004ec9c) title_pane_stacon_g

0x4b44,	// (0x00044112) cursor_press_pane

0xc1fd,	// (0x0004b7cb) popup_fep_hwr_window_ParamLimits

0xc1fd,	// (0x0004b7cb) popup_fep_hwr_window

0x1b30,	// (0x000410fe) popup_fep_vkb_window_ParamLimits

0x1b30,	// (0x000410fe) popup_fep_vkb_window

0x79b2,	// (0x00046f80) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0004f0ee) fep_vkb_side_pane_g_ParamLimits

0x2533,	// (0x00041b01) fep_hwr_candidate_pane_ParamLimits

0x2533,	// (0x00041b01) fep_hwr_candidate_pane

0x255d,	// (0x00041b2b) fep_hwr_side_pane_ParamLimits

0x255d,	// (0x00041b2b) fep_hwr_side_pane

0x257d,	// (0x00041b4b) fep_hwr_top_pane_ParamLimits

0x257d,	// (0x00041b4b) fep_hwr_top_pane

0x2595,	// (0x00041b63) fep_hwr_write_pane_ParamLimits

0x2595,	// (0x00041b63) fep_hwr_write_pane

0xfb20,	// (0x0004f0ee) fep_vkb_side_pane_g

0x79ba,	// (0x00046f88) fep_hwr_top_pane_g1

0x79cc,	// (0x00046f9a) fep_hwr_top_pane_g2

0x25c1,	// (0x00041b8f) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0004f0ca) fep_hwr_top_pane_g

0x25d6,	// (0x00041ba4) fep_hwr_top_text_pane

0x4531,	// (0x00043aff) fep_hwr_top_text_pane_g1

0x7a02,	// (0x00046fd0) fep_hwr_top_text_pane_t1

0x26cc,	// (0x00041c9a) fep_hwr_candidate_pane_g1

0x7c55,	// (0x00047223) fep_vkb_keypad_pane_g3_ParamLimits

0x7c55,	// (0x00047223) fep_vkb_keypad_pane_g3

0x7c7d,	// (0x0004724b) fep_vkb_keypad_pane_g4_ParamLimits

0x7c7d,	// (0x0004724b) fep_vkb_keypad_pane_g4

0x7cec,	// (0x000472ba) fep_vkb_bottom_pane_g2_ParamLimits

0x7cec,	// (0x000472ba) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0004f0f5) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0004f0f5) fep_vkb_bottom_pane_g

0x795e,	// (0x00046f2c) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0004f0ff) cell_vkb_side_pane_g

0x7d77,	// (0x00047345) cell_vkb_side_pane_t1

0x7d85,	// (0x00047353) cell_vkb_side_pane_t1_copy1

0x795e,	// (0x00046f2c) bg_fep_vkb_candidate_pane_g2

0x7eb1,	// (0x0004747f) cell_vkb_candidate_pane_ParamLimits

0x7a10,	// (0x00046fde) aid_size_cell_vkb_ParamLimits

0x7a10,	// (0x00046fde) aid_size_cell_vkb

0x7eb1,	// (0x0004747f) cell_vkb_candidate_pane

0x26e6,	// (0x00041cb4) bg_popup_fep_shadow_pane_g1

0xe125,	// (0x0004d6f3) fep_vkb_bottom_pane_ParamLimits

0xe125,	// (0x0004d6f3) fep_vkb_bottom_pane

0x7ad4,	// (0x000470a2) fep_vkb_candidate_pane_ParamLimits

0x7ad4,	// (0x000470a2) fep_vkb_candidate_pane

0xe14a,	// (0x0004d718) fep_vkb_keypad_pane_ParamLimits

0xe14a,	// (0x0004d718) fep_vkb_keypad_pane

0xe186,	// (0x0004d754) fep_vkb_side_pane_ParamLimits

0xe186,	// (0x0004d754) fep_vkb_side_pane

0xe1c2,	// (0x0004d790) fep_vkb_top_pane_ParamLimits

0xe1c2,	// (0x0004d790) fep_vkb_top_pane

0x7bae,	// (0x0004717c) fep_vkb_top_pane_g1_ParamLimits

0x7bae,	// (0x0004717c) fep_vkb_top_pane_g1

0x7bbd,	// (0x0004718b) fep_vkb_top_pane_g2_ParamLimits

0x7bbd,	// (0x0004718b) fep_vkb_top_pane_g2

0x7bcc,	// (0x0004719a) fep_vkb_top_pane_g3_ParamLimits

0x7bcc,	// (0x0004719a) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0004f0e5) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0004f0e5) fep_vkb_top_pane_g

0x7bea,	// (0x000471b8) fep_vkb_top_text_pane_ParamLimits

0x7bea,	// (0x000471b8) fep_vkb_top_text_pane

0xe1fe,	// (0x0004d7cc) fep_vkb_side_pane_g1_ParamLimits

0xe1fe,	// (0x0004d7cc) fep_vkb_side_pane_g1

0x7c44,	// (0x00047212) grid_vkb_side_pane_ParamLimits

0x7c44,	// (0x00047212) grid_vkb_side_pane

0x26ee,	// (0x00041cbc) bg_popup_fep_shadow_pane_g2

0x26f7,	// (0x00041cc5) bg_popup_fep_shadow_pane_g3

0x26ff,	// (0x00041ccd) bg_popup_fep_shadow_pane_g4

0x2708,	// (0x00041cd6) bg_popup_fep_shadow_pane_g5

0x2712,	// (0x00041ce0) bg_popup_fep_shadow_pane_g6

0x271a,	// (0x00041ce8) bg_popup_fep_shadow_pane_g7

0x3f2d,	// (0x000434fb) bg_popup_fep_shadow_pane_g8

0x7c9b,	// (0x00047269) grid_vkb_keypad_number_pane_ParamLimits

0x7c9b,	// (0x00047269) grid_vkb_keypad_number_pane

0x7cab,	// (0x00047279) grid_vkb_keypad_pane_ParamLimits

0x7cab,	// (0x00047279) grid_vkb_keypad_pane

0x7cd1,	// (0x0004729f) fep_vkb_bottom_pane_g1_ParamLimits

0x7cd1,	// (0x0004729f) fep_vkb_bottom_pane_g1

0x7cfa,	// (0x000472c8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7cfa,	// (0x000472c8) grid_vkb_keypad_bottom_left_pane

0x7d0f,	// (0x000472dd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7d0f,	// (0x000472dd) grid_vkb_keypad_bottom_right_pane

0x7d24,	// (0x000472f2) fep_vkb_top_text_pane_g1

0xe245,	// (0x0004d813) fep_vkb_top_text_pane_t1

0xe257,	// (0x0004d825) cell_vkb_side_pane_ParamLimits

0xe257,	// (0x0004d825) cell_vkb_side_pane

0x795e,	// (0x00046f2c) cell_vkb_side_pane_g1

0x7d93,	// (0x00047361) cell_vkb_keypad_pane_ParamLimits

0x7d93,	// (0x00047361) cell_vkb_keypad_pane

0x7e08,	// (0x000473d6) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0004f112) bg_popup_fep_shadow_pane_g

0x795e,	// (0x00046f2c) cell_hwr_side_pane_g1

0x795e,	// (0x00046f2c) cell_hwr_side_pane_g2

0x7e12,	// (0x000473e0) cell_vkb_keypad_pane_t1

0xe26d,	// (0x0004d83b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe26d,	// (0x0004d83b) cell_vkb_keypad_bottom_left_pane

0xe282,	// (0x0004d850) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe282,	// (0x0004d850) cell_vkb_keypad_bottom_right_pane

0x795e,	// (0x00046f2c) cell_vkb_keypad_bottom_left_pane_g1

0x795e,	// (0x00046f2c) cell_vkb_keypad_bottom_right_pane_g1

0x7e76,	// (0x00047444) cell_vkb_keypad_number_pane_ParamLimits

0x7e76,	// (0x00047444) cell_vkb_keypad_number_pane

0x7e95,	// (0x00047463) cell_vkb_keypad_number_pane_g1

0x7e9f,	// (0x0004746d) cell_vkb_keypad_number_pane_g2

0x7ea8,	// (0x00047476) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0004f104) cell_vkb_keypad_number_pane_g

0x7e12,	// (0x000473e0) cell_vkb_keypad_number_pane_t1

0x7ecc,	// (0x0004749a) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x0004f0ff) cell_hwr_side_pane_g

0x7ee5,	// (0x000474b3) cell_hwr_side_pane_t1

0x272c,	// (0x00041cfa) cell_hwr_side_pane_t1_copy1

0x7bdc,	// (0x000471aa) cell_hwr_candidate_pane_g1

0x273a,	// (0x00041d08) cell_hwr_candidate_pane_t1

0x795e,	// (0x00046f2c) cell_vkb_candidate_pane_g2

0x7f29,	// (0x000474f7) cell_vkb_candidate_pane_t1

0x24fa,	// (0x00041ac8) bg_popup_fep_shadow_pane_ParamLimits

0x24fa,	// (0x00041ac8) bg_popup_fep_shadow_pane

0xe0eb,	// (0x0004d6b9) bg_fep_hwr_top_pane_g4

0x79de,	// (0x00046fac) bg_hwr_side_pane_g1_ParamLimits

0x79de,	// (0x00046fac) bg_hwr_side_pane_g1

0xc8ac,	// (0x0004be7a) cell_hwr_side_pane_ParamLimits

0xc8ac,	// (0x0004be7a) cell_hwr_side_pane

0x264d,	// (0x00041c1b) fep_hwr_write_pane_g1_ParamLimits

0x264d,	// (0x00041c1b) fep_hwr_write_pane_g1

0x265a,	// (0x00041c28) fep_hwr_write_pane_g2_ParamLimits

0x265a,	// (0x00041c28) fep_hwr_write_pane_g2

0x2667,	// (0x00041c35) fep_hwr_write_pane_g3_ParamLimits

0x2667,	// (0x00041c35) fep_hwr_write_pane_g3

0xc8cc,	// (0x0004be9a) fep_hwr_write_pane_g4_ParamLimits

0xc8cc,	// (0x0004be9a) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0004f0d1) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0004f0d1) fep_hwr_write_pane_g

0xe0eb,	// (0x0004d6b9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe0eb,	// (0x0004d6b9) bg_fep_hwr_candidate_pane_g2

0x268a,	// (0x00041c58) cell_hwr_candidate_pane_ParamLimits

0x268a,	// (0x00041c58) cell_hwr_candidate_pane

0x26cc,	// (0x00041c9a) fep_hwr_candidate_pane_g1_ParamLimits

0x7a3e,	// (0x0004700c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7a3e,	// (0x0004700c) bg_popup_fep_shadow_pane_cp2

0x7bdc,	// (0x000471aa) fep_vkb_top_pane_g4_ParamLimits

0x7bdc,	// (0x000471aa) fep_vkb_top_pane_g4

0x7c22,	// (0x000471f0) fep_vkb_side_pane_g2_ParamLimits

0x7c22,	// (0x000471f0) fep_vkb_side_pane_g2

0xb8b2,	// (0x0004ae80) list_setting_pane_t4_ParamLimits

0xb8b2,	// (0x0004ae80) list_setting_pane_t4

0xb94c,	// (0x0004af1a) list_setting_number_pane_t5_ParamLimits

0xb94c,	// (0x0004af1a) list_setting_number_pane_t5

0x4568,	// (0x00043b36) list_double_heading_pane_cp2_ParamLimits

0x4568,	// (0x00043b36) list_double_heading_pane_cp2

0x3e59,	// (0x00043427) list_double_heading_pane_g1_cp2_ParamLimits

0x3e59,	// (0x00043427) list_double_heading_pane_g1_cp2

0x3ecc,	// (0x0004349a) list_double_heading_pane_g2_cp2_ParamLimits

0x3ecc,	// (0x0004349a) list_double_heading_pane_g2_cp2

0x7f37,	// (0x00047505) list_double_heading_pane_t1_cp2_ParamLimits

0x7f37,	// (0x00047505) list_double_heading_pane_t1_cp2

0x7f4d,	// (0x0004751b) list_double_heading_pane_t2_cp2_ParamLimits

0x7f4d,	// (0x0004751b) list_double_heading_pane_t2_cp2

0x3537,	// (0x00042b05) aid_value_unit2

0x117a,	// (0x00040748) popup_preview_fixed_window

0x38cc,	// (0x00042e9a) bg_popup_preview_window_pane_cp02

0x7f5f,	// (0x0004752d) list_preview_fixed_pane

0x7fa5,	// (0x00047573) list_empty_pane_fp_ParamLimits

0x7fa5,	// (0x00047573) list_empty_pane_fp

0x7fa5,	// (0x00047573) list_single_cale_day_pane_fp_ParamLimits

0x7fa5,	// (0x00047573) list_single_cale_day_pane_fp

0x7fa5,	// (0x00047573) list_single_graphic_heading_pane_fp_ParamLimits

0x7fa5,	// (0x00047573) list_single_graphic_heading_pane_fp

0x7fa5,	// (0x00047573) list_single_graphic_pane_fp_ParamLimits

0x7fa5,	// (0x00047573) list_single_graphic_pane_fp

0x7fa5,	// (0x00047573) list_single_heading_pane_fp_ParamLimits

0x7fa5,	// (0x00047573) list_single_heading_pane_fp

0x7fa5,	// (0x00047573) list_single_pane_fp_ParamLimits

0x7fa5,	// (0x00047573) list_single_pane_fp

0x7fba,	// (0x00047588) list_single_pane_fp_g1_ParamLimits

0x7fba,	// (0x00047588) list_single_pane_fp_g1

0x3e59,	// (0x00043427) list_single_pane_fp_g2_ParamLimits

0x3e59,	// (0x00043427) list_single_pane_fp_g2

0x3ecc,	// (0x0004349a) list_single_pane_fp_g3_ParamLimits

0x3ecc,	// (0x0004349a) list_single_pane_fp_g3

0x7fc6,	// (0x00047594) list_single_pane_fp_g4_ParamLimits

0x7fc6,	// (0x00047594) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0004f133) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0004f133) list_single_pane_fp_g

0x0c27,	// (0x000401f5) list_single_pane_fp_t1_ParamLimits

0x0c27,	// (0x000401f5) list_single_pane_fp_t1

0x0c3e,	// (0x0004020c) list_single_graphic_pane_fp_g1_ParamLimits

0x0c3e,	// (0x0004020c) list_single_graphic_pane_fp_g1

0x7fba,	// (0x00047588) list_single_graphic_pane_fp_g2_ParamLimits

0x7fba,	// (0x00047588) list_single_graphic_pane_fp_g2

0x3e59,	// (0x00043427) list_single_graphic_pane_fp_g3_ParamLimits

0x3e59,	// (0x00043427) list_single_graphic_pane_fp_g3

0x3ecc,	// (0x0004349a) list_single_graphic_pane_fp_g4_ParamLimits

0x3ecc,	// (0x0004349a) list_single_graphic_pane_fp_g4

0x7fc6,	// (0x00047594) list_single_graphic_pane_fp_g5_ParamLimits

0x7fc6,	// (0x00047594) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004f13c) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004f13c) list_single_graphic_pane_fp_g

0x0c4a,	// (0x00040218) list_single_graphic_pane_fp_t1_ParamLimits

0x0c4a,	// (0x00040218) list_single_graphic_pane_fp_t1

0x0c3e,	// (0x0004020c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0c3e,	// (0x0004020c) list_single_graphic_heading_pane_fp_g1

0x7fba,	// (0x00047588) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7fba,	// (0x00047588) list_single_graphic_heading_pane_fp_g2

0x3e59,	// (0x00043427) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3e59,	// (0x00043427) list_single_graphic_heading_pane_fp_g3

0x3ecc,	// (0x0004349a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3ecc,	// (0x0004349a) list_single_graphic_heading_pane_fp_g4

0x7fc6,	// (0x00047594) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7fc6,	// (0x00047594) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004f13c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004f13c) list_single_graphic_heading_pane_fp_g

0x0c60,	// (0x0004022e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0c60,	// (0x0004022e) list_single_graphic_heading_pane_fp_t1

0x0c76,	// (0x00040244) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0c76,	// (0x00040244) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0004f147) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0004f147) list_single_graphic_heading_pane_fp_t

0x0c88,	// (0x00040256) list_single_cale_day_pane_fp_g1_ParamLimits

0x0c88,	// (0x00040256) list_single_cale_day_pane_fp_g1

0x7fd2,	// (0x000475a0) list_single_cale_day_pane_fp_g2_ParamLimits

0x7fd2,	// (0x000475a0) list_single_cale_day_pane_fp_g2

0x2758,	// (0x00041d26) list_single_cale_day_pane_fp_g3_ParamLimits

0x2758,	// (0x00041d26) list_single_cale_day_pane_fp_g3

0x2780,	// (0x00041d4e) list_single_cale_day_pane_fp_g4_ParamLimits

0x2780,	// (0x00041d4e) list_single_cale_day_pane_fp_g4

0x27a4,	// (0x00041d72) list_single_cale_day_pane_fp_g5_ParamLimits

0x27a4,	// (0x00041d72) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004f14c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004f14c) list_single_cale_day_pane_fp_g

0x0cc0,	// (0x0004028e) list_single_cale_day_pane_fp_t1_ParamLimits

0x0cc0,	// (0x0004028e) list_single_cale_day_pane_fp_t1

0x0ce6,	// (0x000402b4) list_single_cale_day_pane_fp_t2_ParamLimits

0x0ce6,	// (0x000402b4) list_single_cale_day_pane_fp_t2

0x0cff,	// (0x000402cd) list_single_cale_day_pane_fp_t3_ParamLimits

0x0cff,	// (0x000402cd) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0004f157) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0004f157) list_single_cale_day_pane_fp_t

0x7fba,	// (0x00047588) list_empty_pane_fp_g1_ParamLimits

0x7fba,	// (0x00047588) list_empty_pane_fp_g1

0x0d18,	// (0x000402e6) list_empty_pane_fp_t1

0x0d26,	// (0x000402f4) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0004f15e) list_empty_pane_fp_t

0x7fba,	// (0x00047588) list_single_heading_pane_fp_g1_ParamLimits

0x7fba,	// (0x00047588) list_single_heading_pane_fp_g1

0x3e59,	// (0x00043427) list_single_heading_pane_fp_g2_ParamLimits

0x3e59,	// (0x00043427) list_single_heading_pane_fp_g2

0x3ecc,	// (0x0004349a) list_single_heading_pane_fp_g3_ParamLimits

0x3ecc,	// (0x0004349a) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0004f163) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0004f163) list_single_heading_pane_fp_g

0x0d34,	// (0x00040302) list_single_heading_pane_fp_t1_ParamLimits

0x0d34,	// (0x00040302) list_single_heading_pane_fp_t1

0x0d46,	// (0x00040314) list_single_heading_pane_fp_t2_ParamLimits

0x0d46,	// (0x00040314) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0004f16a) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0004f16a) list_single_heading_pane_fp_t

0x40b4,	// (0x00043682) aid_size_cell_fast

0x383c,	// (0x00042e0a) soft_indicator_pane_cp1_t1

0x40f1,	// (0x000436bf) cell_app_pane_cp2_ParamLimits

0x40f1,	// (0x000436bf) cell_app_pane_cp2

0x251c,	// (0x00041aea) fep_hwr_candidate_drop_down_list_pane

0xe0f9,	// (0x0004d6c7) fep_hwr_candidate_pane_g3_ParamLimits

0xe0f9,	// (0x0004d6c7) fep_hwr_candidate_pane_g3

0xe106,	// (0x0004d6d4) fep_hwr_candidate_pane_g4_ParamLimits

0xe106,	// (0x0004d6d4) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0004f0de) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0004f0de) fep_hwr_candidate_pane_g

0x7ac3,	// (0x00047091) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7ac3,	// (0x00047091) fep_vkb_candidate_drop_down_list_pane

0x7ed4,	// (0x000474a2) fep_vkb_candidate_pane_g3

0x7edc,	// (0x000474aa) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0004f10b) fep_vkb_candidate_pane_g

0x7bdc,	// (0x000471aa) cell_hwr_candidate_pane_g1_ParamLimits

0x806e,	// (0x0004763c) cell_hwr_candidate_pane_g3_ParamLimits

0x806e,	// (0x0004763c) cell_hwr_candidate_pane_g3

0x808f,	// (0x0004765d) cell_hwr_candidate_pane_g4_ParamLimits

0x808f,	// (0x0004765d) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0004f125) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0004f125) cell_hwr_candidate_pane_g

0x7ef3,	// (0x000474c1) cell_vkb_candidate_pane_g3_ParamLimits

0x7ef3,	// (0x000474c1) cell_vkb_candidate_pane_g3

0x7f0e,	// (0x000474dc) cell_vkb_candidate_pane_g4_ParamLimits

0x7f0e,	// (0x000474dc) cell_vkb_candidate_pane_g4

0x7fde,	// (0x000475ac) cell_app_pane_cp2_g1_ParamLimits

0x7fde,	// (0x000475ac) cell_app_pane_cp2_g1

0x7ffc,	// (0x000475ca) cell_app_pane_cp2_g2_ParamLimits

0x7ffc,	// (0x000475ca) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0004f16f) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0004f16f) cell_app_pane_cp2_g

0x8008,	// (0x000475d6) cell_app_pane_cp2_t1_ParamLimits

0x8008,	// (0x000475d6) cell_app_pane_cp2_t1

0x3ebe,	// (0x0004348c) grid_highlight_pane_cp1_ParamLimits

0x3ebe,	// (0x0004348c) grid_highlight_pane_cp1

0x27c8,	// (0x00041d96) cell_hwr_candidate_pane_cp1_ParamLimits

0x27c8,	// (0x00041d96) cell_hwr_candidate_pane_cp1

0x7bdc,	// (0x000471aa) fep_hwr_candidate_drop_down_list_pane_g1

0x801a,	// (0x000475e8) fep_hwr_candidate_drop_down_list_pane_g2

0x8027,	// (0x000475f5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0004f174) fep_hwr_candidate_drop_down_list_pane_g

0x27e7,	// (0x00041db5) fep_hwr_candidate_drop_down_list_scroll_pane

0x27f0,	// (0x00041dbe) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x27f0,	// (0x00041dbe) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x27fd,	// (0x00041dcb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x27fd,	// (0x00041dcb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x280a,	// (0x00041dd8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x280a,	// (0x00041dd8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7ef3,	// (0x000474c1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7ef3,	// (0x000474c1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7f0e,	// (0x000474dc) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f0e,	// (0x000474dc) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2817,	// (0x00041de5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2817,	// (0x00041de5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2832,	// (0x00041e00) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2832,	// (0x00041e00) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x284d,	// (0x00041e1b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x284d,	// (0x00041e1b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0004f17b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0004f17b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8034,	// (0x00047602) cell_vkb_candidate_pane_cp1_ParamLimits

0x8034,	// (0x00047602) cell_vkb_candidate_pane_cp1

0x7bdc,	// (0x000471aa) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7bdc,	// (0x000471aa) fep_vkb_candidate_drop_down_list_pane_g1

0x801a,	// (0x000475e8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x801a,	// (0x000475e8) fep_vkb_candidate_drop_down_list_pane_g2

0x8027,	// (0x000475f5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8027,	// (0x000475f5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0004f174) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x0004f174) fep_vkb_candidate_drop_down_list_pane_g

0x8054,	// (0x00047622) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8054,	// (0x00047622) fep_vkb_candidate_drop_down_list_scroll_pane

0x8061,	// (0x0004762f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8061,	// (0x0004762f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x80b0,	// (0x0004767e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x80b0,	// (0x0004767e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x80bc,	// (0x0004768a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x80bc,	// (0x0004768a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x806e,	// (0x0004763c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x806e,	// (0x0004763c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x808f,	// (0x0004765d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x808f,	// (0x0004765d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x80c8,	// (0x00047696) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x80c8,	// (0x00047696) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x80e9,	// (0x000476b7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x80e9,	// (0x000476b7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x810a,	// (0x000476d8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x810a,	// (0x000476d8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0004f18c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0004f18c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcf20,	// (0x0004c4ee) title_pane_g1_ParamLimits

0xcf33,	// (0x0004c501) title_pane_g2_ParamLimits

0xf54e,	// (0x0004eb1c) title_pane_g_ParamLimits

0x4521,	// (0x00043aef) aid_call2_pane

0x4529,	// (0x00043af7) aid_call_pane

0x4531,	// (0x00043aff) popup_clock_analogue_window_g1

0x4531,	// (0x00043aff) popup_clock_analogue_window_g2

0x1597,	// (0x00040b65) popup_clock_analogue_window_g3

0x15a0,	// (0x00040b6e) popup_clock_analogue_window_g4

0x3559,	// (0x00042b27) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0004eccb) popup_clock_analogue_window_g

0x15a8,	// (0x00040b76) popup_clock_analogue_window_t1

0x15b6,	// (0x00040b84) clock_digital_number_pane_ParamLimits

0x15b6,	// (0x00040b84) clock_digital_number_pane

0x15c2,	// (0x00040b90) clock_digital_number_pane_cp02_ParamLimits

0x15c2,	// (0x00040b90) clock_digital_number_pane_cp02

0x15ce,	// (0x00040b9c) clock_digital_number_pane_cp03_ParamLimits

0x15ce,	// (0x00040b9c) clock_digital_number_pane_cp03

0x15da,	// (0x00040ba8) clock_digital_number_pane_cp04_ParamLimits

0x15da,	// (0x00040ba8) clock_digital_number_pane_cp04

0x15e6,	// (0x00040bb4) clock_digital_separator_pane_ParamLimits

0x15e6,	// (0x00040bb4) clock_digital_separator_pane

0x15f2,	// (0x00040bc0) popup_clock_digital_window_t1_ParamLimits

0x15f2,	// (0x00040bc0) popup_clock_digital_window_t1

0x3559,	// (0x00042b27) clock_digital_number_pane_g1

0x3559,	// (0x00042b27) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0004ecd6) clock_digital_number_pane_g

0x3559,	// (0x00042b27) clock_digital_separator_pane_g1

0x3559,	// (0x00042b27) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0004ecd6) clock_digital_separator_pane_g

0xd5e7,	// (0x0004cbb5) aid_fill_nsta_ParamLimits

0xd71d,	// (0x0004cceb) indicator_nsta_pane_ParamLimits

0x5163,	// (0x00044731) popup_clock_analogue_window

0x5163,	// (0x00044731) popup_clock_digital_window

0x4075,	// (0x00043643) grid_indicator_nsta_pane_ParamLimits

0x734f,	// (0x0004691d) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0004f05e) clock_nsta_pane_t

0x155b,	// (0x00040b29) aid_size_max_handle

0xbfa8,	// (0x0004b576) aid_size_min_handle

0x4b44,	// (0x00044112) editor_scroll_pane

0x8125,	// (0x000476f3) ex_editor_pane

0x4022,	// (0x000435f0) scroll_pane_cp13

0x3e51,	// (0x0004341f) scroll_pane_cp14

0x4560,	// (0x00043b2e) scroll_pane_cp36

0xd3a6,	// (0x0004c974) list_single_graphic_hl_pane_cp2_ParamLimits

0xd3a6,	// (0x0004c974) list_single_graphic_hl_pane_cp2

0xc872,	// (0x0004be40) list_single_graphic_hl_pane_ParamLimits

0xc872,	// (0x0004be40) list_single_graphic_hl_pane

0x0d5c,	// (0x0004032a) aid_size_min_hl_cp1

0x812d,	// (0x000476fb) list_highlight_pane_cp34_ParamLimits

0x812d,	// (0x000476fb) list_highlight_pane_cp34

0x813e,	// (0x0004770c) list_single_graphic_hl_pane_g1_ParamLimits

0x813e,	// (0x0004770c) list_single_graphic_hl_pane_g1

0xbc02,	// (0x0004b1d0) list_single_graphic_hl_pane_g2_ParamLimits

0xbc02,	// (0x0004b1d0) list_single_graphic_hl_pane_g2

0xbc02,	// (0x0004b1d0) list_single_graphic_hl_pane_g3_ParamLimits

0xbc02,	// (0x0004b1d0) list_single_graphic_hl_pane_g3

0x4ab5,	// (0x00044083) list_single_graphic_hl_pane_g4_ParamLimits

0x4ab5,	// (0x00044083) list_single_graphic_hl_pane_g4

0x2868,	// (0x00041e36) list_single_graphic_hl_pane_g5_ParamLimits

0x2868,	// (0x00041e36) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0004f19d) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0004f19d) list_single_graphic_hl_pane_g

0xbc0e,	// (0x0004b1dc) list_single_graphic_hl_pane_t1_ParamLimits

0xbc0e,	// (0x0004b1dc) list_single_graphic_hl_pane_t1

0x814b,	// (0x00047719) aid_size_min_hl_cp2

0x8154,	// (0x00047722) list_highlight_pane_cp34_cp2_ParamLimits

0x8154,	// (0x00047722) list_highlight_pane_cp34_cp2

0x813e,	// (0x0004770c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x813e,	// (0x0004770c) list_single_graphic_hl_pane_g1_cp2

0x8161,	// (0x0004772f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8161,	// (0x0004772f) list_single_graphic_hl_pane_g2_cp2

0x816d,	// (0x0004773b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x816d,	// (0x0004773b) list_single_graphic_hl_pane_g3_cp2

0x75d7,	// (0x00046ba5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x75d7,	// (0x00046ba5) list_single_graphic_hl_pane_g4_cp2

0x817b,	// (0x00047749) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x817b,	// (0x00047749) list_single_graphic_hl_pane_g5_cp2

0xc015,	// (0x0004b5e3) control_pane_g4_ParamLimits

0xc015,	// (0x0004b5e3) control_pane_g4

0x4e82,	// (0x00044450) bg_popup_sub_pane_cp10_ParamLimits

0x7968,	// (0x00046f36) list_choice_list_pane_ParamLimits

0x7977,	// (0x00046f45) scroll_pane_cp23

0x38cc,	// (0x00042e9a) bg_popup_preview_window_pane_cp02_ParamLimits

0x7f5f,	// (0x0004752d) list_preview_fixed_pane_ParamLimits

0x7f75,	// (0x00047543) list_preview_fixed_pane_cp_ParamLimits

0x7f75,	// (0x00047543) list_preview_fixed_pane_cp

0x7f81,	// (0x0004754f) popup_preview_fixed_window_g1_ParamLimits

0x7f81,	// (0x0004754f) popup_preview_fixed_window_g1

0x7f8d,	// (0x0004755b) popup_preview_fixed_window_g2_ParamLimits

0x7f8d,	// (0x0004755b) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0004f12c) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0004f12c) popup_preview_fixed_window_g

0x14cf,	// (0x00040a9d) aid_navi_side_left_pane_ParamLimits

0x14e4,	// (0x00040ab2) aid_navi_side_right_pane_ParamLimits

0x14fc,	// (0x00040aca) navi_icon_pane_stacon_ParamLimits

0x1510,	// (0x00040ade) navi_navi_pane_stacon_ParamLimits

0x14fc,	// (0x00040aca) navi_text_pane_stacon_ParamLimits

0x354f,	// (0x00042b1d) main_text_info_pane

0x81a5,	// (0x00047773) listscroll_text_info_pane

0x81ad,	// (0x0004777b) list_text_info_pane_ParamLimits

0x81ad,	// (0x0004777b) list_text_info_pane

0x81bc,	// (0x0004778a) scroll_pane_cp24_ParamLimits

0x81bc,	// (0x0004778a) scroll_pane_cp24

0xe29d,	// (0x0004d86b) list_text_info_pane_t1_ParamLimits

0xe29d,	// (0x0004d86b) list_text_info_pane_t1

0xc170,	// (0x0004b73e) popup_fast_swap2_window_ParamLimits

0xc170,	// (0x0004b73e) popup_fast_swap2_window

0x820b,	// (0x000477d9) aid_size_cell_fast2

0x354f,	// (0x00042b1d) bg_popup_window_pane_cp17

0x57ea,	// (0x00044db8) heading_pane_cp2

0x3b1b,	// (0x000430e9) listscroll_fast2_pane

0x8215,	// (0x000477e3) grid_fast2_pane

0x821f,	// (0x000477ed) listscroll_fast2_pane_g1

0x8227,	// (0x000477f5) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0004f1a8) listscroll_fast2_pane_g

0x4022,	// (0x000435f0) scroll_pane_cp26

0x8231,	// (0x000477ff) cell_fast2_pane_ParamLimits

0x8231,	// (0x000477ff) cell_fast2_pane

0x8246,	// (0x00047814) cell_fast2_pane_g1

0x824f,	// (0x0004781d) cell_fast2_pane_g2

0x8258,	// (0x00047826) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0004f1ad) cell_fast2_pane_g

0x3c0e,	// (0x000431dc) grid_highlight_pane_cp9

0x3c23,	// (0x000431f1) main_eswt_pane_ParamLimits

0x3c23,	// (0x000431f1) main_eswt_pane

0x81d1,	// (0x0004779f) list_single_text_info_pane

0x8260,	// (0x0004782e) eswt_ctrl_button_pane

0x8260,	// (0x0004782e) eswt_ctrl_canvas_pane

0x8268,	// (0x00047836) eswt_ctrl_combo_pane

0x8260,	// (0x0004782e) eswt_ctrl_default_pane

0x8260,	// (0x0004782e) eswt_ctrl_label_pane

0x8270,	// (0x0004783e) eswt_ctrl_wait_pane

0x8278,	// (0x00047846) eswt_shell_pane

0x354f,	// (0x00042b1d) listscroll_eswt_app_pane

0x8298,	// (0x00047866) popup_eswt_tasktip_window_ParamLimits

0x8298,	// (0x00047866) popup_eswt_tasktip_window

0x5400,	// (0x000449ce) bg_popup_window_pane_cp18

0x82a9,	// (0x00047877) eswt_control_pane_g1_ParamLimits

0x82a9,	// (0x00047877) eswt_control_pane_g1

0x82b6,	// (0x00047884) eswt_control_pane_g2_ParamLimits

0x82b6,	// (0x00047884) eswt_control_pane_g2

0x82c3,	// (0x00047891) eswt_control_pane_g3_ParamLimits

0x82c3,	// (0x00047891) eswt_control_pane_g3

0x82d0,	// (0x0004789e) eswt_control_pane_g4_ParamLimits

0x82d0,	// (0x0004789e) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0004f1b4) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0004f1b4) eswt_control_pane_g

0x3ebe,	// (0x0004348c) bg_button_pane_ParamLimits

0x3ebe,	// (0x0004348c) bg_button_pane

0x3c23,	// (0x000431f1) common_borders_pane_copy2_ParamLimits

0x3c23,	// (0x000431f1) common_borders_pane_copy2

0x82dd,	// (0x000478ab) control_button_pane_g1_ParamLimits

0x82dd,	// (0x000478ab) control_button_pane_g1

0x82e9,	// (0x000478b7) control_button_pane_g2_ParamLimits

0x82e9,	// (0x000478b7) control_button_pane_g2

0x82f5,	// (0x000478c3) control_button_pane_g3_ParamLimits

0x82f5,	// (0x000478c3) control_button_pane_g3

0x0002,

0xfbef,	// (0x0004f1bd) control_button_pane_g_ParamLimits

0xfbef,	// (0x0004f1bd) control_button_pane_g

0x8309,	// (0x000478d7) control_button_pane_t1

0x8317,	// (0x000478e5) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0004f1c4) control_button_pane_t

0x538c,	// (0x0004495a) bg_button_pane_g1

0x5394,	// (0x00044962) bg_button_pane_g2

0x539c,	// (0x0004496a) bg_button_pane_g3

0x53a4,	// (0x00044972) bg_button_pane_g4

0x53ac,	// (0x0004497a) bg_button_pane_g5

0x53b4,	// (0x00044982) bg_button_pane_g6

0x53bc,	// (0x0004498a) bg_button_pane_g7

0x53c4,	// (0x00044992) bg_button_pane_g8

0x53cc,	// (0x0004499a) bg_button_pane_g9

0x0008,

0xf866,	// (0x0004ee34) bg_button_pane_g

0x7923,	// (0x00046ef1) common_borders_pane_ParamLimits

0x7923,	// (0x00046ef1) common_borders_pane

0x82a9,	// (0x00047877) eswt_control_pane_g1_copy1_ParamLimits

0x82a9,	// (0x00047877) eswt_control_pane_g1_copy1

0x82b6,	// (0x00047884) eswt_control_pane_g2_copy1_ParamLimits

0x82b6,	// (0x00047884) eswt_control_pane_g2_copy1

0x82c3,	// (0x00047891) eswt_control_pane_g3_copy1_ParamLimits

0x82c3,	// (0x00047891) eswt_control_pane_g3_copy1

0x82d0,	// (0x0004789e) eswt_control_pane_g4_copy1_ParamLimits

0x82d0,	// (0x0004789e) eswt_control_pane_g4_copy1

0x795e,	// (0x00046f2c) bg_eswt_ctrl_canvas_pane_g1

0x7923,	// (0x00046ef1) common_borders_pane_cp2_ParamLimits

0x7923,	// (0x00046ef1) common_borders_pane_cp2

0x7923,	// (0x00046ef1) common_borders_pane_cp3_ParamLimits

0x7923,	// (0x00046ef1) common_borders_pane_cp3

0x8325,	// (0x000478f3) separator_horizontal_pane

0x832d,	// (0x000478fb) separator_vertical_pane

0x82a9,	// (0x00047877) eswt_control_pane_g1_copy2_ParamLimits

0x82a9,	// (0x00047877) eswt_control_pane_g1_copy2

0x82b6,	// (0x00047884) eswt_control_pane_g2_copy2_ParamLimits

0x82b6,	// (0x00047884) eswt_control_pane_g2_copy2

0x82c3,	// (0x00047891) eswt_control_pane_g3_copy2_ParamLimits

0x82c3,	// (0x00047891) eswt_control_pane_g3_copy2

0x82d0,	// (0x0004789e) eswt_control_pane_g4_copy2_ParamLimits

0x82d0,	// (0x0004789e) eswt_control_pane_g4_copy2

0x354f,	// (0x00042b1d) common_borders_pane_cp4

0x8336,	// (0x00047904) separator_horizontal_pane_g1

0x833f,	// (0x0004790d) separator_horizontal_pane_g2

0x8348,	// (0x00047916) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0004f1c9) separator_horizontal_pane_g

0x82a9,	// (0x00047877) eswt_control_pane_g1_copy3_ParamLimits

0x82a9,	// (0x00047877) eswt_control_pane_g1_copy3

0x82b6,	// (0x00047884) eswt_control_pane_g2_copy3_ParamLimits

0x82b6,	// (0x00047884) eswt_control_pane_g2_copy3

0x82c3,	// (0x00047891) eswt_control_pane_g3_copy3_ParamLimits

0x82c3,	// (0x00047891) eswt_control_pane_g3_copy3

0x82d0,	// (0x0004789e) eswt_control_pane_g4_copy3_ParamLimits

0x82d0,	// (0x0004789e) eswt_control_pane_g4_copy3

0x354f,	// (0x00042b1d) common_borders_pane_cp5

0x8351,	// (0x0004791f) separator_vertical_pane_g1

0x835a,	// (0x00047928) separator_vertical_pane_g2

0x8363,	// (0x00047931) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0004f1d0) separator_vertical_pane_g

0x82a9,	// (0x00047877) eswt_control_pane_g1_copy4_ParamLimits

0x82a9,	// (0x00047877) eswt_control_pane_g1_copy4

0x82b6,	// (0x00047884) eswt_control_pane_g2_copy4_ParamLimits

0x82b6,	// (0x00047884) eswt_control_pane_g2_copy4

0x82c3,	// (0x00047891) eswt_control_pane_g3_copy4_ParamLimits

0x82c3,	// (0x00047891) eswt_control_pane_g3_copy4

0x82d0,	// (0x0004789e) eswt_control_pane_g4_copy4_ParamLimits

0x82d0,	// (0x0004789e) eswt_control_pane_g4_copy4

0xe2b8,	// (0x0004d886) eswt_ctrl_combo_button_pane

0xe2c0,	// (0x0004d88e) eswt_ctrl_input_pane

0xe2c8,	// (0x0004d896) popup_choice_list_window_cp70

0xe2d0,	// (0x0004d89e) eswt_ctrl_input_pane_t1

0x354f,	// (0x00042b1d) input_focus_pane_cp70

0x7923,	// (0x00046ef1) bg_button_pane_cp70_ParamLimits

0x7923,	// (0x00046ef1) bg_button_pane_cp70

0xe2de,	// (0x0004d8ac) eswt_ctrl_combo_button_pane_g1

0x839a,	// (0x00047968) wait_bar_pane_cp70

0x5400,	// (0x000449ce) bg_popup_window_pane_cp70_ParamLimits

0x5400,	// (0x000449ce) bg_popup_window_pane_cp70

0x83a2,	// (0x00047970) popup_eswt_tasktip_window_t1

0x83b8,	// (0x00047986) wait_bar_pane_cp71_ParamLimits

0x83b8,	// (0x00047986) wait_bar_pane_cp71

0x83c4,	// (0x00047992) grid_eswt_app_pane

0x4343,	// (0x00043911) scroll_pane_cp70

0xe2e6,	// (0x0004d8b4) cell_eswt_app_pane_ParamLimits

0xe2e6,	// (0x0004d8b4) cell_eswt_app_pane

0xe310,	// (0x0004d8de) cell_eswt_app_pane_g1_ParamLimits

0xe310,	// (0x0004d8de) cell_eswt_app_pane_g1

0xe33f,	// (0x0004d90d) cell_eswt_app_pane_g2_ParamLimits

0xe33f,	// (0x0004d90d) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0004f1d7) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0004f1d7) cell_eswt_app_pane_g

0xe368,	// (0x0004d936) cell_eswt_app_pane_t1_ParamLimits

0xe368,	// (0x0004d936) cell_eswt_app_pane_t1

0x8487,	// (0x00047a55) grid_highlight_pane_cp70_ParamLimits

0x8487,	// (0x00047a55) grid_highlight_pane_cp70

0x4a19,	// (0x00043fe7) set_content_pane_g1

0xd59c,	// (0x0004cb6a) status_small_volume_pane

0x287c,	// (0x00041e4a) status_small_volume_pane_g1

0x2884,	// (0x00041e52) volume_small2_pane

0x288d,	// (0x00041e5b) volume_small2_pane_g1

0x2896,	// (0x00041e64) volume_small2_pane_g2

0x289f,	// (0x00041e6d) volume_small2_pane_g3

0x28a8,	// (0x00041e76) volume_small2_pane_g4

0x28b1,	// (0x00041e7f) volume_small2_pane_g5

0x28ba,	// (0x00041e88) volume_small2_pane_g6

0x28c3,	// (0x00041e91) volume_small2_pane_g7

0x28cc,	// (0x00041e9a) volume_small2_pane_g8

0x28d5,	// (0x00041ea3) volume_small2_pane_g9

0x28de,	// (0x00041eac) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0004f1dc) volume_small2_pane_g

0x7d24,	// (0x000472f2) fep_vkb_top_text_pane_g1_ParamLimits

0xe245,	// (0x0004d813) fep_vkb_top_text_pane_t1_ParamLimits

0x7f99,	// (0x00047567) popup_preview_fixed_window_g3_ParamLimits

0x7f99,	// (0x00047567) popup_preview_fixed_window_g3

0xc793,	// (0x0004bd61) popup_toolbar_trans_pane

0xdc29,	// (0x0004d1f7) aid_height_set_list_ParamLimits

0x676c,	// (0x00045d3a) aid_size_parent_ParamLimits

0x4e82,	// (0x00044450) list_highlight_pane_cp2_ParamLimits

0x4a19,	// (0x00043fe7) set_content_pane_g1_ParamLimits

0xc883,	// (0x0004be51) list_single_image_pane_ParamLimits

0xc883,	// (0x0004be51) list_single_image_pane

0xe39a,	// (0x0004d968) aid_size_cell_image_ParamLimits

0xe39a,	// (0x0004d968) aid_size_cell_image

0xe3a7,	// (0x0004d975) grid_single_image_pane_ParamLimits

0xe3a7,	// (0x0004d975) grid_single_image_pane

0x60c2,	// (0x00045690) list_single_image_pane_g1_ParamLimits

0x60c2,	// (0x00045690) list_single_image_pane_g1

0x84ac,	// (0x00047a7a) list_single_image_pane_g2_ParamLimits

0x84ac,	// (0x00047a7a) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0004f1f1) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0004f1f1) list_single_image_pane_g

0x84c0,	// (0x00047a8e) list_single_image_pane_t1_ParamLimits

0x84c0,	// (0x00047a8e) list_single_image_pane_t1

0xe3b5,	// (0x0004d983) cell_image_list_pane_ParamLimits

0xe3b5,	// (0x0004d983) cell_image_list_pane

0xe3cb,	// (0x0004d999) cell_image_list_pane_g1

0xe3d4,	// (0x0004d9a2) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0004f1f6) cell_image_list_pane_g

0x84fc,	// (0x00047aca) aid_size_cell_tb_trans_pane

0x3ebe,	// (0x0004348c) bg_tb_trans_pane

0x850e,	// (0x00047adc) grid_tb_trans_pane

0x538c,	// (0x0004495a) bg_tb_trans_pane_g1

0x5394,	// (0x00044962) bg_tb_trans_pane_g2

0x539c,	// (0x0004496a) bg_tb_trans_pane_g3

0x53a4,	// (0x00044972) bg_tb_trans_pane_g4

0x53ac,	// (0x0004497a) bg_tb_trans_pane_g5

0x53c4,	// (0x00044992) bg_tb_trans_pane_g6

0x53cc,	// (0x0004499a) bg_tb_trans_pane_g7

0x53b4,	// (0x00044982) bg_tb_trans_pane_g8

0x53bc,	// (0x0004498a) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0004f1fb) bg_tb_trans_pane_g

0x8522,	// (0x00047af0) cell_toolbar_trans_pane_ParamLimits

0x8522,	// (0x00047af0) cell_toolbar_trans_pane

0x795e,	// (0x00046f2c) cell_toolbar_trans_pane_g1

0xe006,	// (0x0004d5d4) list_form2_midp_pane_t1

0xe014,	// (0x0004d5e2) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0004f0a4) list_form2_midp_pane_t

0x7538,	// (0x00046b06) scroll_pane_cp51_ParamLimits

0x7700,	// (0x00046cce) form2_midp_wait_pane_g1

0x7709,	// (0x00046cd7) form2_midp_wait_pane_g2

0x7712,	// (0x00046ce0) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0004f0b9) form2_midp_wait_pane_g

0x3643,	// (0x00042c11) list_highlight_pane_cp21_ParamLimits

0x7769,	// (0x00046d37) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7778,	// (0x00046d46) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6924,	// (0x00045ef2) list_single_2graphic_im_pane_ParamLimits

0x6924,	// (0x00045ef2) list_single_2graphic_im_pane

0xe3dd,	// (0x0004d9ab) list_single_2graphic_im_pane_g1_ParamLimits

0xe3dd,	// (0x0004d9ab) list_single_2graphic_im_pane_g1

0xe3ee,	// (0x0004d9bc) list_single_2graphic_im_pane_g2_ParamLimits

0xe3ee,	// (0x0004d9bc) list_single_2graphic_im_pane_g2

0xe3fa,	// (0x0004d9c8) list_single_2graphic_im_pane_g3_ParamLimits

0xe3fa,	// (0x0004d9c8) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0004f20e) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0004f20e) list_single_2graphic_im_pane_g

0xe40e,	// (0x0004d9dc) list_single_2graphic_im_pane_t1_ParamLimits

0xe40e,	// (0x0004d9dc) list_single_2graphic_im_pane_t1

0x7fa5,	// (0x00047573) list_single_graphic_2heading_pane_fp_ParamLimits

0x7fa5,	// (0x00047573) list_single_graphic_2heading_pane_fp

0x0c3e,	// (0x0004020c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0c3e,	// (0x0004020c) list_single_graphic_2heading_pane_fp_g1

0x7fba,	// (0x00047588) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7fba,	// (0x00047588) list_single_graphic_2heading_pane_fp_g2

0x3e59,	// (0x00043427) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3e59,	// (0x00043427) list_single_graphic_2heading_pane_fp_g3

0x3ecc,	// (0x0004349a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3ecc,	// (0x0004349a) list_single_graphic_2heading_pane_fp_g4

0x7fc6,	// (0x00047594) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7fc6,	// (0x00047594) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004f13c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004f13c) list_single_graphic_2heading_pane_fp_g

0x0d87,	// (0x00040355) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0d87,	// (0x00040355) list_single_graphic_2heading_pane_fp_t1

0x0c76,	// (0x00040244) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0c76,	// (0x00040244) list_single_graphic_2heading_pane_fp_t2

0x0d9d,	// (0x0004036b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0d9d,	// (0x0004036b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0004f217) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0004f217) list_single_graphic_2heading_pane_fp_t

0x79ea,	// (0x00046fb8) fep_hwr_write_pane_g5_ParamLimits

0x79ea,	// (0x00046fb8) fep_hwr_write_pane_g5

0x79f6,	// (0x00046fc4) fep_hwr_write_pane_g6_ParamLimits

0x79f6,	// (0x00046fc4) fep_hwr_write_pane_g6

0x8278,	// (0x00047846) eswt_shell_pane_ParamLimits

0x5400,	// (0x000449ce) bg_popup_window_pane_cp18_ParamLimits

0x66b4,	// (0x00045c82) heading_pane_cp70

0x83a2,	// (0x00047970) popup_eswt_tasktip_window_t1_ParamLimits

0xd642,	// (0x0004cc10) aid_touch_tab_arrow_left

0xd658,	// (0x0004cc26) aid_touch_tab_arrow_right

0xcf4b,	// (0x0004c519) title_pane_g3_ParamLimits

0xcf4b,	// (0x0004c519) title_pane_g3

0x3e7d,	// (0x0004344b) set_value_pane_g1

0xc793,	// (0x0004bd61) popup_toolbar_trans_pane_ParamLimits

0x84fc,	// (0x00047aca) aid_size_cell_tb_trans_pane_ParamLimits

0x3ebe,	// (0x0004348c) bg_tb_trans_pane_ParamLimits

0x850e,	// (0x00047adc) grid_tb_trans_pane_ParamLimits

0x38cc,	// (0x00042e9a) cont_note_pane_ParamLimits

0x38cc,	// (0x00042e9a) cont_note_pane

0x3c23,	// (0x000431f1) cont_snote2_single_text_pane_ParamLimits

0x3c23,	// (0x000431f1) cont_snote2_single_text_pane

0x3c23,	// (0x000431f1) cont_snote2_single_graphic_pane_ParamLimits

0x3c23,	// (0x000431f1) cont_snote2_single_graphic_pane

0x5a05,	// (0x00044fd3) cont_note_wait_pane_ParamLimits

0x5a05,	// (0x00044fd3) cont_note_wait_pane

0x5a05,	// (0x00044fd3) cont_note_image_pane_ParamLimits

0x5a05,	// (0x00044fd3) cont_note_image_pane

0x85b6,	// (0x00047b84) popup_note2_window_g1_ParamLimits

0x85b6,	// (0x00047b84) popup_note2_window_g1

0x85e7,	// (0x00047bb5) popup_note2_window_t1_ParamLimits

0x85e7,	// (0x00047bb5) popup_note2_window_t1

0x862c,	// (0x00047bfa) popup_note2_window_t2_ParamLimits

0x862c,	// (0x00047bfa) popup_note2_window_t2

0x8671,	// (0x00047c3f) popup_note2_window_t3_ParamLimits

0x8671,	// (0x00047c3f) popup_note2_window_t3

0x86b6,	// (0x00047c84) popup_note2_window_t4_ParamLimits

0x86b6,	// (0x00047c84) popup_note2_window_t4

0x3950,	// (0x00042f1e) popup_note2_window_t5_ParamLimits

0x3950,	// (0x00042f1e) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0004f223) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0004f223) popup_note2_window_t

0x86e5,	// (0x00047cb3) popup_note2_image_window_g1_ParamLimits

0x86e5,	// (0x00047cb3) popup_note2_image_window_g1

0x86f1,	// (0x00047cbf) popup_note2_image_window_g2_ParamLimits

0x86f1,	// (0x00047cbf) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0004f22e) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0004f22e) popup_note2_image_window_g

0x8703,	// (0x00047cd1) popup_note2_image_window_t1_ParamLimits

0x8703,	// (0x00047cd1) popup_note2_image_window_t1

0x871b,	// (0x00047ce9) popup_note2_image_window_t2_ParamLimits

0x871b,	// (0x00047ce9) popup_note2_image_window_t2

0x8733,	// (0x00047d01) popup_note2_image_window_t3_ParamLimits

0x8733,	// (0x00047d01) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0004f233) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0004f233) popup_note2_image_window_t

0x5a13,	// (0x00044fe1) popup_note2_wait_window_g1_ParamLimits

0x5a13,	// (0x00044fe1) popup_note2_wait_window_g1

0x874f,	// (0x00047d1d) popup_note2_wait_window_g2_ParamLimits

0x874f,	// (0x00047d1d) popup_note2_wait_window_g2

0x5a2b,	// (0x00044ff9) popup_note2_wait_window_g3_ParamLimits

0x5a2b,	// (0x00044ff9) popup_note2_wait_window_g3

0x0002,

0xfc6c,	// (0x0004f23a) popup_note2_wait_window_g_ParamLimits

0xfc6c,	// (0x0004f23a) popup_note2_wait_window_g

0x875b,	// (0x00047d29) popup_note2_wait_window_t1_ParamLimits

0x875b,	// (0x00047d29) popup_note2_wait_window_t1

0x8779,	// (0x00047d47) popup_note2_wait_window_t2_ParamLimits

0x8779,	// (0x00047d47) popup_note2_wait_window_t2

0x8797,	// (0x00047d65) popup_note2_wait_window_t3_ParamLimits

0x8797,	// (0x00047d65) popup_note2_wait_window_t3

0x87a9,	// (0x00047d77) popup_note2_wait_window_t4_ParamLimits

0x87a9,	// (0x00047d77) popup_note2_wait_window_t4

0x0003,

0xfc73,	// (0x0004f241) popup_note2_wait_window_t_ParamLimits

0xfc73,	// (0x0004f241) popup_note2_wait_window_t

0x87bb,	// (0x00047d89) wait_bar2_pane_ParamLimits

0x87bb,	// (0x00047d89) wait_bar2_pane

0x87d3,	// (0x00047da1) popup_snote2_single_text_window_g1_ParamLimits

0x87d3,	// (0x00047da1) popup_snote2_single_text_window_g1

0x87fb,	// (0x00047dc9) popup_snote2_single_text_window_t1_ParamLimits

0x87fb,	// (0x00047dc9) popup_snote2_single_text_window_t1

0x8847,	// (0x00047e15) popup_snote2_single_text_window_t2_ParamLimits

0x8847,	// (0x00047e15) popup_snote2_single_text_window_t2

0x8893,	// (0x00047e61) popup_snote2_single_text_window_t3_ParamLimits

0x8893,	// (0x00047e61) popup_snote2_single_text_window_t3

0x88d4,	// (0x00047ea2) popup_snote2_single_text_window_t4_ParamLimits

0x88d4,	// (0x00047ea2) popup_snote2_single_text_window_t4

0x890a,	// (0x00047ed8) popup_snote2_single_text_window_t5_ParamLimits

0x890a,	// (0x00047ed8) popup_snote2_single_text_window_t5

0x0004,

0xfc7c,	// (0x0004f24a) popup_snote2_single_text_window_t_ParamLimits

0xfc7c,	// (0x0004f24a) popup_snote2_single_text_window_t

0x8935,	// (0x00047f03) popup_snote2_single_graphic_window_g1_ParamLimits

0x8935,	// (0x00047f03) popup_snote2_single_graphic_window_g1

0x895d,	// (0x00047f2b) popup_snote2_single_graphic_window_g2_ParamLimits

0x895d,	// (0x00047f2b) popup_snote2_single_graphic_window_g2

0x0001,

0xfc87,	// (0x0004f255) popup_snote2_single_graphic_window_g_ParamLimits

0xfc87,	// (0x0004f255) popup_snote2_single_graphic_window_g

0x8985,	// (0x00047f53) popup_snote2_single_graphic_window_t1_ParamLimits

0x8985,	// (0x00047f53) popup_snote2_single_graphic_window_t1

0x89d1,	// (0x00047f9f) popup_snote2_single_graphic_window_t2_ParamLimits

0x89d1,	// (0x00047f9f) popup_snote2_single_graphic_window_t2

0x8893,	// (0x00047e61) popup_snote2_single_graphic_window_t3_ParamLimits

0x8893,	// (0x00047e61) popup_snote2_single_graphic_window_t3

0x88d4,	// (0x00047ea2) popup_snote2_single_graphic_window_t4_ParamLimits

0x88d4,	// (0x00047ea2) popup_snote2_single_graphic_window_t4

0x890a,	// (0x00047ed8) popup_snote2_single_graphic_window_t5_ParamLimits

0x890a,	// (0x00047ed8) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8c,	// (0x0004f25a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8c,	// (0x0004f25a) popup_snote2_single_graphic_window_t

0x73f9,	// (0x000469c7) clock_nsta_pane_cp2_t1

0x73f9,	// (0x000469c7) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0004f07a) clock_nsta_pane_cp2_t

0x049d,	// (0x0003fa6b) form_field_data_wide_pane_g1_ParamLimits

0x3e59,	// (0x00043427) form_field_data_wide_pane_g2_ParamLimits

0x3e59,	// (0x00043427) form_field_data_wide_pane_g2

0x3ecc,	// (0x0004349a) form_field_data_wide_pane_g3_ParamLimits

0x3ecc,	// (0x0004349a) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0004ec4e) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0004ec4e) form_field_data_wide_pane_g

0xdf49,	// (0x0004d517) grid_touch_3_pane_ParamLimits

0xdf49,	// (0x0004d517) grid_touch_3_pane

0xe43f,	// (0x0004da0d) cell_touch_3_pane_ParamLimits

0xe43f,	// (0x0004da0d) cell_touch_3_pane

0x795e,	// (0x00046f2c) cell_touch_3_pane_g1

0x795e,	// (0x00046f2c) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0004f0ff) cell_touch_3_pane_g

0x3982,	// (0x00042f50) cont_query_data_pane

0x398a,	// (0x00042f58) cont_query_data_pane_cp1

0x8a4b,	// (0x00048019) button_value_adjust_pane_cp7

0x8a53,	// (0x00048021) query_popup_pane_cp3

0x4621,	// (0x00043bef) bg_popup_sub_pane_cp22_ParamLimits

0x1611,	// (0x00040bdf) navi_navi_volume_pane_cp2

0x162c,	// (0x00040bfa) popup_side_volume_key_window_g2

0x163b,	// (0x00040c09) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0004ece4) popup_side_volume_key_window_g

0x1658,	// (0x00040c26) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0004eceb) popup_side_volume_key_window_t

0x48d8,	// (0x00043ea6) popup_side_volume_key_window_ParamLimits

0xbf90,	// (0x0004b55e) list_double_graphic_pane_g4_ParamLimits

0xbf90,	// (0x0004b55e) list_double_graphic_pane_g4

0xdda2,	// (0x0004d370) list_single_2heading_msg_pane_ParamLimits

0xdda2,	// (0x0004d370) list_single_2heading_msg_pane

0xc8e1,	// (0x0004beaf) list_single_2heading_msg_pane_g1_ParamLimits

0xc8e1,	// (0x0004beaf) list_single_2heading_msg_pane_g1

0xc8ed,	// (0x0004bebb) list_single_2heading_msg_pane_g2_ParamLimits

0xc8ed,	// (0x0004bebb) list_single_2heading_msg_pane_g2

0xc900,	// (0x0004bece) list_single_2heading_msg_pane_g3_ParamLimits

0xc900,	// (0x0004bece) list_single_2heading_msg_pane_g3

0xc90c,	// (0x0004beda) list_single_2heading_msg_pane_g4_ParamLimits

0xc90c,	// (0x0004beda) list_single_2heading_msg_pane_g4

0x0003,

0xfc97,	// (0x0004f265) list_single_2heading_msg_pane_g_ParamLimits

0xfc97,	// (0x0004f265) list_single_2heading_msg_pane_g

0xbc24,	// (0x0004b1f2) list_single_2heading_msg_pane_t1_ParamLimits

0xbc24,	// (0x0004b1f2) list_single_2heading_msg_pane_t1

0xbc4c,	// (0x0004b21a) list_single_2heading_msg_pane_t2_ParamLimits

0xbc4c,	// (0x0004b21a) list_single_2heading_msg_pane_t2

0xbcb7,	// (0x0004b285) list_single_2heading_msg_pane_t3_ParamLimits

0xbcb7,	// (0x0004b285) list_single_2heading_msg_pane_t3

0x0e52,	// (0x00040420) list_single_2heading_msg_pane_t4_ParamLimits

0x0e52,	// (0x00040420) list_single_2heading_msg_pane_t4

0x0003,

0xfca0,	// (0x0004f26e) list_single_2heading_msg_pane_t_ParamLimits

0xfca0,	// (0x0004f26e) list_single_2heading_msg_pane_t

0x3597,	// (0x00042b65) title_pane_g4_ParamLimits

0x3597,	// (0x00042b65) title_pane_g4

0x1420,	// (0x000409ee) title_pane_stacon_g3_ParamLimits

0x1420,	// (0x000409ee) title_pane_stacon_g3

0x8579,	// (0x00047b47) list_single_2graphic_im_pane_g4_ParamLimits

0x8579,	// (0x00047b47) list_single_2graphic_im_pane_g4

0x6470,	// (0x00045a3e) popup_side_volume_key_window_cp

0x6c38,	// (0x00046206) main_idle_act2_pane_t1

0x1fd5,	// (0x000415a3) toolbar_button_pane_g10

0xd256,	// (0x0004c824) popup_toolbar_window_cp1

0x73ea,	// (0x000469b8) clock_nsta_pane_cp_t1

0x73ea,	// (0x000469b8) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0004f075) clock_nsta_pane_cp_t

0x1611,	// (0x00040bdf) navi_navi_volume_pane_cp2_ParamLimits

0x1620,	// (0x00040bee) popup_side_volume_key_window_g1_ParamLimits

0x162c,	// (0x00040bfa) popup_side_volume_key_window_g2_ParamLimits

0x163b,	// (0x00040c09) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0004ece4) popup_side_volume_key_window_g_ParamLimits

0x2508,	// (0x00041ad6) fep_hwr_aid_pane

0xe0eb,	// (0x0004d6b9) bg_fep_hwr_top_pane_g4_ParamLimits

0x79ba,	// (0x00046f88) fep_hwr_top_pane_g1_ParamLimits

0x79cc,	// (0x00046f9a) fep_hwr_top_pane_g2_ParamLimits

0x25c1,	// (0x00041b8f) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0004f0ca) fep_hwr_top_pane_g_ParamLimits

0x25d6,	// (0x00041ba4) fep_hwr_top_text_pane_ParamLimits

0x6233,	// (0x00045801) aid_touch_tab_arrow_arrow_2

0x623c,	// (0x0004580a) aid_touch_tab_arrow_left_2

0x251c,	// (0x00041aea) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2553,	// (0x00041b21) fep_hwr_prediction_pane

0x7b2c,	// (0x000470fa) fep_vkb_prediction_pane

0xe225,	// (0x0004d7f3) fep_vkb_side_pane_g3_ParamLimits

0xe225,	// (0x0004d7f3) fep_vkb_side_pane_g3

0x7bdc,	// (0x000471aa) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x801a,	// (0x000475e8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8027,	// (0x000475f5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0004f174) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8a78,	// (0x00048046) fep_hwr_prediction_pane_g1

0x290b,	// (0x00041ed9) fep_hwr_prediction_pane_g2

0x2913,	// (0x00041ee1) fep_hwr_prediction_pane_g3

0x291b,	// (0x00041ee9) fep_hwr_prediction_pane_g4

0x0003,

0xfca9,	// (0x0004f277) fep_hwr_prediction_pane_g

0x8a78,	// (0x00048046) fep_vkb_prediction_pane_g1

0x8a82,	// (0x00048050) fep_vkb_prediction_pane_g2

0x8a8a,	// (0x00048058) fep_vkb_prediction_pane_g3

0x8a92,	// (0x00048060) fep_vkb_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0004f280) fep_vkb_prediction_pane_g

0x22bd,	// (0x0004188b) slider_set_pane_g3

0x22d1,	// (0x0004189f) slider_set_pane_g4

0x22e9,	// (0x000418b7) slider_set_pane_g5

0x22bd,	// (0x0004188b) slider_set_pane_g6

0x22ff,	// (0x000418cd) slider_set_pane_g7

0x68d1,	// (0x00045e9f) slider_form_pane_g3

0x68da,	// (0x00045ea8) slider_form_pane_g4

0x68e2,	// (0x00045eb0) slider_form_pane_g5

0x68d1,	// (0x00045e9f) slider_form_pane_g6

0xdd74,	// (0x0004d342) slider_form_pane_g7

0x6ee3,	// (0x000464b1) slider_set_pane_vc_g3

0x6eec,	// (0x000464ba) slider_set_pane_vc_g4

0x6ef5,	// (0x000464c3) slider_set_pane_vc_g5

0x6ee3,	// (0x000464b1) slider_set_pane_vc_g6

0x6efe,	// (0x000464cc) slider_set_pane_vc_g7

0x70be,	// (0x0004668c) slider_form_pane_vc_g1

0x70c7,	// (0x00046695) slider_form_pane_vc_g2

0x70d0,	// (0x0004669e) slider_form_pane_vc_g3

0x70be,	// (0x0004668c) slider_form_pane_vc_g4

0x70d9,	// (0x000466a7) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0004f047) slider_form_pane_vc_g

0x354f,	// (0x00042b1d) main_idle_act3_pane

0x8a9a,	// (0x00048068) ai3_links_pane

0xe487,	// (0x0004da55) popup_ai3_data_window_ParamLimits

0xe487,	// (0x0004da55) popup_ai3_data_window

0x354f,	// (0x00042b1d) grid_ai3_links_pane

0xe4a1,	// (0x0004da6f) cell_ai3_links_pane_ParamLimits

0xe4a1,	// (0x0004da6f) cell_ai3_links_pane

0x8ad5,	// (0x000480a3) bg_popup_sub_pane_cp11

0x8ae2,	// (0x000480b0) cell_ai3_links_pane_g1

0x354f,	// (0x00042b1d) bg_popup_sub_pane_cp12

0x8b07,	// (0x000480d5) heading_ai3_data_pane

0x8b0f,	// (0x000480dd) list_ai3_gene_pane

0x8b1b,	// (0x000480e9) popup_ai3_data_window_g1

0x8b23,	// (0x000480f1) heading_ai3_data_pane_g1

0x8b2b,	// (0x000480f9) heading_ai3_data_pane_t1

0x8b39,	// (0x00048107) list_double_ai3_gene_pane_ParamLimits

0x8b39,	// (0x00048107) list_double_ai3_gene_pane

0x8b46,	// (0x00048114) list_single_ai3_gene_pane_ParamLimits

0x8b46,	// (0x00048114) list_single_ai3_gene_pane

0x7923,	// (0x00046ef1) list_highlight_pane_cp7_ParamLimits

0x7923,	// (0x00046ef1) list_highlight_pane_cp7

0x8b53,	// (0x00048121) list_single_a13_gene_pane_t1_ParamLimits

0x8b53,	// (0x00048121) list_single_a13_gene_pane_t1

0x8b6a,	// (0x00048138) list_single_ai3_gene_pane_g1

0x8b73,	// (0x00048141) list_single_ai3_gene_pane_g2

0x0001,

0xfcbb,	// (0x0004f289) list_single_ai3_gene_pane_g

0x8b7b,	// (0x00048149) list_double_ai3_gene_pane_g1_ParamLimits

0x8b7b,	// (0x00048149) list_double_ai3_gene_pane_g1

0x8b87,	// (0x00048155) list_double_ai3_gene_pane_t1_ParamLimits

0x8b87,	// (0x00048155) list_double_ai3_gene_pane_t1

0x8ba3,	// (0x00048171) list_double_ai3_gene_pane_t2_ParamLimits

0x8ba3,	// (0x00048171) list_double_ai3_gene_pane_t2

0x8bb9,	// (0x00048187) list_double_ai3_gene_pane_t3_ParamLimits

0x8bb9,	// (0x00048187) list_double_ai3_gene_pane_t3

0x0002,

0xfcc0,	// (0x0004f28e) list_double_ai3_gene_pane_t_ParamLimits

0xfcc0,	// (0x0004f28e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0db3,	// (0x00040381) aid_size_min_col_2

0xe471,	// (0x0004da3f) aid_size_min_msg_ParamLimits

0xe471,	// (0x0004da3f) aid_size_min_msg

0xe239,	// (0x0004d807) fep_vkb_top_text_pane_g2_ParamLimits

0xe239,	// (0x0004d807) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0004f0fa) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0004f0fa) fep_vkb_top_text_pane_g

0x354f,	// (0x00042b1d) main_hc_apps_shell_pane

0x8bd6,	// (0x000481a4) grid_hc_apps_pane_ParamLimits

0x8bd6,	// (0x000481a4) grid_hc_apps_pane

0x8be5,	// (0x000481b3) list_hc_apps_pane

0x8bed,	// (0x000481bb) scroll_pane_cp37_ParamLimits

0x8bed,	// (0x000481bb) scroll_pane_cp37

0xe4bb,	// (0x0004da89) cell_hc_apps_pane_ParamLimits

0xe4bb,	// (0x0004da89) cell_hc_apps_pane

0xe586,	// (0x0004db54) cell_hc_apps_pane_g1_ParamLimits

0xe586,	// (0x0004db54) cell_hc_apps_pane_g1

0x8cd8,	// (0x000482a6) cell_hc_apps_pane_g2_ParamLimits

0x8cd8,	// (0x000482a6) cell_hc_apps_pane_g2

0x8cf4,	// (0x000482c2) cell_hc_apps_pane_g3_ParamLimits

0x8cf4,	// (0x000482c2) cell_hc_apps_pane_g3

0x0002,

0xfcc7,	// (0x0004f295) cell_hc_apps_pane_g_ParamLimits

0xfcc7,	// (0x0004f295) cell_hc_apps_pane_g

0xe5b3,	// (0x0004db81) cell_hc_apps_pane_t1_ParamLimits

0xe5b3,	// (0x0004db81) cell_hc_apps_pane_t1

0x38cc,	// (0x00042e9a) grid_highlight_pane_cp10_ParamLimits

0x38cc,	// (0x00042e9a) grid_highlight_pane_cp10

0xe5f1,	// (0x0004dbbf) list_single_hc_apps_pane_ParamLimits

0xe5f1,	// (0x0004dbbf) list_single_hc_apps_pane

0xe61e,	// (0x0004dbec) list_single_hc_apps_pane_g1

0xc924,	// (0x0004bef2) list_single_hc_apps_pane_g2

0x0001,

0xfcce,	// (0x0004f29c) list_single_hc_apps_pane_g

0xc93d,	// (0x0004bf0b) list_single_hc_apps_pane_g2_copy1

0x0e77,	// (0x00040445) list_single_hc_apps_pane_t1

0x3643,	// (0x00042c11) bg_set_opt_pane_cp_ParamLimits

0x129c,	// (0x0004086a) setting_slider_pane_t1_ParamLimits

0x12b5,	// (0x00040883) setting_slider_pane_t2_ParamLimits

0x12cf,	// (0x0004089d) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004eb2c) setting_slider_pane_t_ParamLimits

0x12e7,	// (0x000408b5) slider_set_pane_ParamLimits

0x18d6,	// (0x00040ea4) control_pane_g5_ParamLimits

0x18d6,	// (0x00040ea4) control_pane_g5

0x6720,	// (0x00045cee) slider_set_pane_g1_ParamLimits

0x22b1,	// (0x0004187f) slider_set_pane_g2_ParamLimits

0x22bd,	// (0x0004188b) slider_set_pane_g3_ParamLimits

0x22d1,	// (0x0004189f) slider_set_pane_g4_ParamLimits

0x22e9,	// (0x000418b7) slider_set_pane_g5_ParamLimits

0x22bd,	// (0x0004188b) slider_set_pane_g6_ParamLimits

0x22ff,	// (0x000418cd) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0004ef32) slider_set_pane_g_ParamLimits

0x49c4,	// (0x00043f92) navi_icon_text_pane_ParamLimits

0xd60b,	// (0x0004cbd9) aid_fill_nsta_2_ParamLimits

0xd642,	// (0x0004cc10) aid_touch_tab_arrow_left_ParamLimits

0xd658,	// (0x0004cc26) aid_touch_tab_arrow_right_ParamLimits

0xd6f3,	// (0x0004ccc1) clock_nsta_pane_ParamLimits

0x6215,	// (0x000457e3) navi_icon_pane_g1_ParamLimits

0x6221,	// (0x000457ef) navi_text_pane_t1_ParamLimits

0x74f6,	// (0x00046ac4) navi_icon_text_pane_g1_ParamLimits

0x7502,	// (0x00046ad0) navi_icon_text_pane_t1_ParamLimits

0xe61e,	// (0x0004dbec) list_single_hc_apps_pane_g1_ParamLimits

0xc924,	// (0x0004bef2) list_single_hc_apps_pane_g2_ParamLimits

0xfcce,	// (0x0004f29c) list_single_hc_apps_pane_g_ParamLimits

0xc93d,	// (0x0004bf0b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0e77,	// (0x00040445) list_single_hc_apps_pane_t1_ParamLimits

0xbe91,	// (0x0004b45f) popup_toolbar2_fixed_window_ParamLimits

0xbe91,	// (0x0004b45f) popup_toolbar2_fixed_window

0xc789,	// (0x0004bd57) popup_toolbar2_float_window

0x354f,	// (0x00042b1d) bg_popup_sub_pane_cp27

0x8dcb,	// (0x00048399) grid_toolbar2_float_pane

0x354f,	// (0x00042b1d) bg_popup_sub_pane_cp26

0x8dcb,	// (0x00048399) grid_toolbar2_fixed_pane

0xe637,	// (0x0004dc05) cell_toolbar2_fixed_pane_ParamLimits

0xe637,	// (0x0004dc05) cell_toolbar2_fixed_pane

0xe651,	// (0x0004dc1f) cell_toolbar2_fixed_pane_g1

0x8dec,	// (0x000483ba) toolbar2_fixed_button_pane

0x538c,	// (0x0004495a) toolbar2_fixed_button_pane_g1

0x5394,	// (0x00044962) toolbar2_fixed_button_pane_g2

0x539c,	// (0x0004496a) toolbar2_fixed_button_pane_g3

0x53a4,	// (0x00044972) toolbar2_fixed_button_pane_g4

0x53ac,	// (0x0004497a) toolbar2_fixed_button_pane_g5

0x53b4,	// (0x00044982) toolbar2_fixed_button_pane_g6

0x53bc,	// (0x0004498a) toolbar2_fixed_button_pane_g7

0x53c4,	// (0x00044992) toolbar2_fixed_button_pane_g8

0x53cc,	// (0x0004499a) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0004ee34) toolbar2_fixed_button_pane_g

0x8df4,	// (0x000483c2) cell_toolbar2_float_pane_ParamLimits

0x8df4,	// (0x000483c2) cell_toolbar2_float_pane

0x8e05,	// (0x000483d3) cell_toolbar2_float_pane_g1

0x8dec,	// (0x000483ba) toolbar2_fixed_button_pane_cp

0xe113,	// (0x0004d6e1) fep_vkb_accented_list_pane_ParamLimits

0xe113,	// (0x0004d6e1) fep_vkb_accented_list_pane

0x2724,	// (0x00041cf2) bg_popup_fep_shadow_pane_g9

0x4b44,	// (0x00044112) bg_popup_fep_shadow_pane_cp3

0x4009,	// (0x000435d7) list_accented_list_pane

0x8e0e,	// (0x000483dc) list_single_accented_list_pane_ParamLimits

0x8e0e,	// (0x000483dc) list_single_accented_list_pane

0x4b44,	// (0x00044112) list_highlight_pane_cp10

0x8e1f,	// (0x000483ed) list_single_accented_list_pane_t1

0xc6b3,	// (0x0004bc81) popup_slider_window_ParamLimits

0xc6b3,	// (0x0004bc81) popup_slider_window

0x8a5b,	// (0x00048029) aid_indentation_list_msg

0xe74a,	// (0x0004dd18) bg_popup_window_pane_cp19

0x8f43,	// (0x00048511) popup_slider_window_g1

0x8f5f,	// (0x0004852d) popup_slider_window_g2

0x8f7b,	// (0x00048549) popup_slider_window_g3

0x0005,

0xfcd3,	// (0x0004f2a1) popup_slider_window_g

0x8fd7,	// (0x000485a5) popup_slider_window_t1

0x904b,	// (0x00048619) small_volume_slider_vertical_pane

0x795e,	// (0x00046f2c) small_volume_slider_vertical_pane_g1

0x795e,	// (0x00046f2c) small_volume_slider_vertical_pane_g2

0x9067,	// (0x00048635) small_volume_slider_vertical_pane_g3

0x0002,

0xfce5,	// (0x0004f2b3) small_volume_slider_vertical_pane_g

0xbdff,	// (0x0004b3cd) area_side_right_pane_ParamLimits

0xbdff,	// (0x0004b3cd) area_side_right_pane

0xc959,	// (0x0004bf27) aid_size_side_button_ParamLimits

0xc959,	// (0x0004bf27) aid_size_side_button

0xc972,	// (0x0004bf40) grid_sctrl_middle_pane_ParamLimits

0xc972,	// (0x0004bf40) grid_sctrl_middle_pane

0x298b,	// (0x00041f59) sctrl_sk_bottom_pane

0x299c,	// (0x00041f6a) sctrl_sk_top_pane

0x29ae,	// (0x00041f7c) aid_touch_sctrl_top

0x38cc,	// (0x00042e9a) bg_sctrl_sk_pane_ParamLimits

0x38cc,	// (0x00042e9a) bg_sctrl_sk_pane

0x29bb,	// (0x00041f89) sctrl_sk_top_pane_g1

0x29c8,	// (0x00041f96) sctrl_sk_top_pane_t1

0x29ae,	// (0x00041f7c) aid_touch_sctrl_bottom

0x38cc,	// (0x00042e9a) bg_sctrl_sk_pane_cp_ParamLimits

0x38cc,	// (0x00042e9a) bg_sctrl_sk_pane_cp

0x29e3,	// (0x00041fb1) sctrl_sk_bottom_pane_g1

0x29c8,	// (0x00041f96) sctrl_sk_bottom_pane_t1

0xc98c,	// (0x0004bf5a) cell_sctrl_middle_pane_ParamLimits

0xc98c,	// (0x0004bf5a) cell_sctrl_middle_pane

0xc99d,	// (0x0004bf6b) aid_touch_sctrl_middle_ParamLimits

0xc99d,	// (0x0004bf6b) aid_touch_sctrl_middle

0xc9aa,	// (0x0004bf78) bg_sctrl_middle_pane_ParamLimits

0xc9aa,	// (0x0004bf78) bg_sctrl_middle_pane

0x90ef,	// (0x000486bd) cell_sctrl_middle_pane_g1_ParamLimits

0x90ef,	// (0x000486bd) cell_sctrl_middle_pane_g1

0xc9b8,	// (0x0004bf86) cell_sctrl_middle_pane_g2_ParamLimits

0xc9b8,	// (0x0004bf86) cell_sctrl_middle_pane_g2

0x0001,

0xfcf1,	// (0x0004f2bf) cell_sctrl_middle_pane_g_ParamLimits

0xfcf1,	// (0x0004f2bf) cell_sctrl_middle_pane_g

0x538c,	// (0x0004495a) bg_sctrl_middle_pane_g1

0x5394,	// (0x00044962) bg_sctrl_middle_pane_g2

0x539c,	// (0x0004496a) bg_sctrl_middle_pane_g3

0x53a4,	// (0x00044972) bg_sctrl_middle_pane_g4

0x53ac,	// (0x0004497a) bg_sctrl_middle_pane_g5

0x53b4,	// (0x00044982) bg_sctrl_middle_pane_g6

0x53bc,	// (0x0004498a) bg_sctrl_middle_pane_g7

0x53c4,	// (0x00044992) bg_sctrl_middle_pane_g8

0x0007,

0xfcf6,	// (0x0004f2c4) bg_sctrl_middle_pane_g

0x53cc,	// (0x0004499a) bg_sctrl_middle_pane_g8_copy1

0x538c,	// (0x0004495a) bg_sctrl_sk_pane_g1

0x5394,	// (0x00044962) bg_sctrl_sk_pane_g2

0x539c,	// (0x0004496a) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0004ee34) bg_sctrl_sk_pane_g

0x3de1,	// (0x000433af) aid_size_touch_scroll_bar

0x53a4,	// (0x00044972) bg_sctrl_sk_pane_g4

0x53ac,	// (0x0004497a) bg_sctrl_sk_pane_g5

0x53b4,	// (0x00044982) bg_sctrl_sk_pane_g6

0x53bc,	// (0x0004498a) bg_sctrl_sk_pane_g7

0x53c4,	// (0x00044992) bg_sctrl_sk_pane_g8

0x53cc,	// (0x0004499a) bg_sctrl_sk_pane_g9

0x1a86,	// (0x00041054) popup_fep_china_hwr2_fs_candidate_window

0xc1cd,	// (0x0004b79b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc1cd,	// (0x0004b79b) popup_fep_china_hwr2_fs_control_window

0x7bdc,	// (0x000471aa) sctrl_sk_top_pane_g2

0x0001,

0xfcec,	// (0x0004f2ba) sctrl_sk_top_pane_g

0xe802,	// (0x0004ddd0) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe802,	// (0x0004ddd0) aid_fep_china_hwr2_fs_cell

0xe816,	// (0x0004dde4) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe816,	// (0x0004dde4) bg_popup_fep_shadow_pane_cp4

0xe82d,	// (0x0004ddfb) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe82d,	// (0x0004ddfb) bg_popup_fep_shadow_pane_cp5

0xe83f,	// (0x0004de0d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe83f,	// (0x0004de0d) popup_fep_china_hwr2_fs_control_bar_grid

0xe853,	// (0x0004de21) popup_fep_china_hwr2_fs_control_funtion_grid

0x90c3,	// (0x00048691) aid_fep_china_hwr2_fs_candi_cell

0x354f,	// (0x00042b1d) bg_popup_fep_shadow_pane_cp6

0x90cd,	// (0x0004869b) popup_fep_china_hwr2_fs_candidate_grid

0xe85b,	// (0x0004de29) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe85b,	// (0x0004de29) cell_fep_china_hwr2_fs_funtion_grid

0x795e,	// (0x00046f2c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x90ef,	// (0x000486bd) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x90ef,	// (0x000486bd) cell_fep_china_hwr2_fs_funtion_grid_g1

0x90fd,	// (0x000486cb) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x90fd,	// (0x000486cb) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd07,	// (0x0004f2d5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd07,	// (0x0004f2d5) cell_fep_china_hwr2_fs_funtion_grid_g

0xe873,	// (0x0004de41) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe873,	// (0x0004de41) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe888,	// (0x0004de56) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe888,	// (0x0004de56) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0c,	// (0x0004f2da) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0c,	// (0x0004f2da) cell_fep_china_hwr2_fs_funtion_grid_t

0x9144,	// (0x00048712) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x914c,	// (0x0004871a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9154,	// (0x00048722) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd11,	// (0x0004f2df) popup_fep_china_hwr2_fs_control_bar_grid_g

0x915c,	// (0x0004872a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x915c,	// (0x0004872a) cell_fep_china_hwr2_fs_candidate_grid

0x9175,	// (0x00048743) popup_fep_china_hwr2_fs_candidate_grid_g20

0x917d,	// (0x0004874b) popup_fep_china_hwr2_fs_candidate_grid_g21

0x795e,	// (0x00046f2c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x795e,	// (0x00046f2c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0004f0ff) cell_fep_china_hwr2_fs_candidate_grid_g

0x9185,	// (0x00048753) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4f82,	// (0x00044550) clock_nsta_pane_cp_24_ParamLimits

0x4f82,	// (0x00044550) clock_nsta_pane_cp_24

0x5000,	// (0x000445ce) indicator_nsta_pane_cp_24_ParamLimits

0x5000,	// (0x000445ce) indicator_nsta_pane_cp_24

0x6085,	// (0x00045653) heading_pane_g1

0x0001,

0xf8cb,	// (0x0004ee99) heading_pane_g

0x6a81,	// (0x0004604f) grid_sct_catagory_button_pane

0x6ab1,	// (0x0004607f) scroll_pane_cp5_ParamLimits

0x7544,	// (0x00046b12) button_value_adjust_pane_cp5_ParamLimits

0x7544,	// (0x00046b12) button_value_adjust_pane_cp5

0x762f,	// (0x00046bfd) form2_midp_time_pane_ParamLimits

0x9193,	// (0x00048761) cell_sct_catagory_button_pane_ParamLimits

0x9193,	// (0x00048761) cell_sct_catagory_button_pane

0x7923,	// (0x00046ef1) bg_button_pane_cp01_ParamLimits

0x7923,	// (0x00046ef1) bg_button_pane_cp01

0x795e,	// (0x00046f2c) cell_sct_catagory_button_pane_g1

0xc72c,	// (0x0004bcfa) popup_tb_extension_window

0xe8a4,	// (0x0004de72) aid_size_cell_ext_ParamLimits

0xe8a4,	// (0x0004de72) aid_size_cell_ext

0x3c23,	// (0x000431f1) bg_tb_trans_pane_cp1_ParamLimits

0x3c23,	// (0x000431f1) bg_tb_trans_pane_cp1

0xe8ca,	// (0x0004de98) grid_tb_ext_pane_ParamLimits

0xe8ca,	// (0x0004de98) grid_tb_ext_pane

0xe905,	// (0x0004ded3) cell_tb_ext_pane_ParamLimits

0xe905,	// (0x0004ded3) cell_tb_ext_pane

0xe92d,	// (0x0004defb) cell_tb_ext_pane_g1_ParamLimits

0xe92d,	// (0x0004defb) cell_tb_ext_pane_g1

0x9227,	// (0x000487f5) cell_tb_ext_pane_t1

0x38cc,	// (0x00042e9a) list_highlight_pane_cp11_ParamLimits

0x38cc,	// (0x00042e9a) list_highlight_pane_cp11

0xbea6,	// (0x0004b474) popup_uni_indicator_window_ParamLimits

0xbea6,	// (0x0004b474) popup_uni_indicator_window

0x3ebe,	// (0x0004348c) bg_popup_sub_pane_cp14

0x9242,	// (0x00048810) list_uniindi_pane

0x924e,	// (0x0004881c) uniindi_top_pane

0x38cc,	// (0x00042e9a) bg_uniindi_top_pane

0x926d,	// (0x0004883b) uniindi_top_pane_g1

0x9283,	// (0x00048851) uniindi_top_pane_g2

0x0003,

0xfd18,	// (0x0004f2e6) uniindi_top_pane_g

0x92ad,	// (0x0004887b) uniindi_top_pane_t1

0x92d7,	// (0x000488a5) list_single_uniindi_pane_ParamLimits

0x92d7,	// (0x000488a5) list_single_uniindi_pane

0x795e,	// (0x00046f2c) bg_uniindi_top_pane_g1

0x92ea,	// (0x000488b8) list_single_uniindi_pane_g1

0x92fd,	// (0x000488cb) list_single_uniindi_pane_t1

0x354f,	// (0x00042b1d) control_bg_pane

0x9322,	// (0x000488f0) bg_sctrl_sk_pane_cp1

0x932b,	// (0x000488f9) bg_sctrl_sk_pane_cp2

0x9334,	// (0x00048902) control_bg_pane_g1

0x933d,	// (0x0004890b) control_bg_pane_g2

0x0001,

0xfd21,	// (0x0004f2ef) control_bg_pane_g

0x738e,	// (0x0004695c) cell_indicator_nsta_pane_g1_ParamLimits

0xdf76,	// (0x0004d544) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0004f063) cell_indicator_nsta_pane_g_ParamLimits

0x0c14,	// (0x000401e2) form2_midp_time_pane_t1_ParamLimits

0x24fa,	// (0x00041ac8) main_idle_act4_pane_ParamLimits

0x24fa,	// (0x00041ac8) main_idle_act4_pane

0xc72c,	// (0x0004bcfa) popup_tb_extension_window_ParamLimits

0xe8ec,	// (0x0004deba) tb_ext_find_pane_ParamLimits

0xe8ec,	// (0x0004deba) tb_ext_find_pane

0x9346,	// (0x00048914) ai_gene_pane_1_cp1

0x4c7f,	// (0x0004424d) ai_gene_pane_2_cp1

0x934e,	// (0x0004891c) list_single_idle_plugin_calendar_pane

0x9357,	// (0x00048925) list_single_idle_plugin_notification_pane

0x9360,	// (0x0004892e) list_single_idle_plugin_player_pane

0xe94a,	// (0x0004df18) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe94a,	// (0x0004df18) list_single_idle_plugin_shortcut_pane

0xe972,	// (0x0004df40) main_idle_act4_pane_t1

0xe988,	// (0x0004df56) main_idle_act4_pane_t2

0x0001,

0xfd26,	// (0x0004f2f4) main_idle_act4_pane_t

0xe99e,	// (0x0004df6c) middle_sk_idle_act4_pane_ParamLimits

0xe99e,	// (0x0004df6c) middle_sk_idle_act4_pane

0xe9ba,	// (0x0004df88) popup_clock_digital_analogue_window_cp2

0xe9e2,	// (0x0004dfb0) shortcut_wheel_idle_act4_pane_ParamLimits

0xe9e2,	// (0x0004dfb0) shortcut_wheel_idle_act4_pane

0x795e,	// (0x00046f2c) shortcut_wheel_idle_act4_pane_g1

0x795e,	// (0x00046f2c) shortcut_wheel_idle_act4_pane_g2

0x795e,	// (0x00046f2c) shortcut_wheel_idle_act4_pane_g3

0x795e,	// (0x00046f2c) shortcut_wheel_idle_act4_pane_g4

0x795e,	// (0x00046f2c) shortcut_wheel_idle_act4_pane_g5

0x93f3,	// (0x000489c1) shortcut_wheel_idle_act4_pane_g6

0x93fb,	// (0x000489c9) shortcut_wheel_idle_act4_pane_g7

0x9403,	// (0x000489d1) shortcut_wheel_idle_act4_pane_g8

0x940b,	// (0x000489d9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2b,	// (0x0004f2f9) shortcut_wheel_idle_act4_pane_g

0xe0eb,	// (0x0004d6b9) middle_sk_idle_act4_pane_g1_ParamLimits

0xe0eb,	// (0x0004d6b9) middle_sk_idle_act4_pane_g1

0xea5f,	// (0x0004e02d) middle_sk_idle_act4_pane_g2_ParamLimits

0xea5f,	// (0x0004e02d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4e,	// (0x0004f31c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4e,	// (0x0004f31c) middle_sk_idle_act4_pane_g

0xea77,	// (0x0004e045) middle_sk_idle_act4_pane_t1_ParamLimits

0xea77,	// (0x0004e045) middle_sk_idle_act4_pane_t1

0xeaa6,	// (0x0004e074) grid_ai_shortcut_pane_ParamLimits

0xeaa6,	// (0x0004e074) grid_ai_shortcut_pane

0xeac3,	// (0x0004e091) list_highlight_pane_cp16_ParamLimits

0xeac3,	// (0x0004e091) list_highlight_pane_cp16

0xead0,	// (0x0004e09e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xead0,	// (0x0004e09e) list_single_idle_plugin_shortcut_pane_g1

0xeadc,	// (0x0004e0aa) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeadc,	// (0x0004e0aa) list_single_idle_plugin_shortcut_pane_g2

0xeaf8,	// (0x0004e0c6) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeaf8,	// (0x0004e0c6) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd53,	// (0x0004f321) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd53,	// (0x0004f321) list_single_idle_plugin_shortcut_pane_g

0xeb0d,	// (0x0004e0db) cell_ai_shortcut_pane_ParamLimits

0xeb0d,	// (0x0004e0db) cell_ai_shortcut_pane

0xeb23,	// (0x0004e0f1) cell_ai_shortcut_pane_g1_ParamLimits

0xeb23,	// (0x0004e0f1) cell_ai_shortcut_pane_g1

0x9346,	// (0x00048914) ai_gene_pane_1_cp2

0x953b,	// (0x00048b09) ai_gene_pane_2_cp2

0x9543,	// (0x00048b11) list_highlight_pane_cp15

0x954c,	// (0x00048b1a) list_single_idle_plugin_calendar_pane_g1

0x9543,	// (0x00048b11) list_highlight_pane_cp17

0x9554,	// (0x00048b22) list_single_idle_plugin_calendar_pane_g1_copy1

0x955c,	// (0x00048b2a) list_single_idle_plugin_player_pane_g1

0x6cda,	// (0x000462a8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5a,	// (0x0004f328) list_single_idle_plugin_player_pane_g

0x9585,	// (0x00048b53) list_single_idle_plugin_player_pane_t1

0x9593,	// (0x00048b61) list_single_idle_plugin_player_pane_t2

0x95a1,	// (0x00048b6f) list_single_idle_plugin_player_pane_t3

0x95af,	// (0x00048b7d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5f,	// (0x0004f32d) list_single_idle_plugin_player_pane_t

0x95bd,	// (0x00048b8b) wait_bar_pane_cp15

0x95c5,	// (0x00048b93) grid_ai_notification_pane

0x6cda,	// (0x000462a8) list_single_idle_plugin_notification_pane_g1

0xeb45,	// (0x0004e113) cell_ai_notification_pane_ParamLimits

0xeb45,	// (0x0004e113) cell_ai_notification_pane

0x95db,	// (0x00048ba9) cell_ai_notification_pane_g1

0x95e3,	// (0x00048bb1) cell_ai_notification_pane_t1

0xeb52,	// (0x0004e120) tb_ext_find_button_pane

0xeb5a,	// (0x0004e128) tb_ext_find_pane_g1

0xeb62,	// (0x0004e130) tb_ext_find_pane_t1

0x4531,	// (0x00043aff) tb_ext_find_button_pane_g1

0x960f,	// (0x00048bdd) tb_ext_find_button_pane_g2

0x0001,

0xfd68,	// (0x0004f336) tb_ext_find_button_pane_g

0xe972,	// (0x0004df40) main_idle_act4_pane_t1_ParamLimits

0xe988,	// (0x0004df56) main_idle_act4_pane_t2_ParamLimits

0xfd26,	// (0x0004f2f4) main_idle_act4_pane_t_ParamLimits

0xe9ba,	// (0x0004df88) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe9d2,	// (0x0004dfa0) sat_plugin_idle_act4_pane_ParamLimits

0xe9d2,	// (0x0004dfa0) sat_plugin_idle_act4_pane

0xeb70,	// (0x0004e13e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb70,	// (0x0004e13e) sat_plugin_idle_act4_pane_t1

0xeb88,	// (0x0004e156) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb88,	// (0x0004e156) sat_plugin_idle_act4_pane_t2

0xeba0,	// (0x0004e16e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeba0,	// (0x0004e16e) sat_plugin_idle_act4_pane_t3

0xebb8,	// (0x0004e186) sat_plugin_idle_act4_pane_t4_ParamLimits

0xebb8,	// (0x0004e186) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6d,	// (0x0004f33b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6d,	// (0x0004f33b) sat_plugin_idle_act4_pane_t

0x1100,	// (0x000406ce) popup_battery_window_ParamLimits

0x1100,	// (0x000406ce) popup_battery_window

0x38cc,	// (0x00042e9a) bg_popup_sub_pane_cp25_ParamLimits

0x38cc,	// (0x00042e9a) bg_popup_sub_pane_cp25

0x9664,	// (0x00048c32) popup_battery_window_g1_ParamLimits

0x9664,	// (0x00048c32) popup_battery_window_g1

0x9670,	// (0x00048c3e) popup_battery_window_t1_ParamLimits

0x9670,	// (0x00048c3e) popup_battery_window_t1

0x9682,	// (0x00048c50) popup_battery_window_t2_ParamLimits

0x9682,	// (0x00048c50) popup_battery_window_t2

0x0001,

0xfd76,	// (0x0004f344) popup_battery_window_t_ParamLimits

0xfd76,	// (0x0004f344) popup_battery_window_t

0xd46e,	// (0x0004ca3c) midp_canvas_pane_ParamLimits

0xd4cb,	// (0x0004ca99) midp_keypad_pane_ParamLimits

0xd4cb,	// (0x0004ca99) midp_keypad_pane

0x4e82,	// (0x00044450) main_midp_pane_ParamLimits

0x7408,	// (0x000469d6) signal_pane_g2_cp_ParamLimits

0xebd0,	// (0x0004e19e) aid_size_cell_midp_keypad_ParamLimits

0xebd0,	// (0x0004e19e) aid_size_cell_midp_keypad

0xebee,	// (0x0004e1bc) midp_keyp_game_grid_pane_ParamLimits

0xebee,	// (0x0004e1bc) midp_keyp_game_grid_pane

0xec15,	// (0x0004e1e3) midp_keyp_rocker_pane_ParamLimits

0xec15,	// (0x0004e1e3) midp_keyp_rocker_pane

0xec66,	// (0x0004e234) midp_keyp_sk_left_pane_ParamLimits

0xec66,	// (0x0004e234) midp_keyp_sk_left_pane

0xecba,	// (0x0004e288) midp_keyp_sk_right_pane_ParamLimits

0xecba,	// (0x0004e288) midp_keyp_sk_right_pane

0x354f,	// (0x00042b1d) bg_button_pane_cp03

0xed0e,	// (0x0004e2dc) midp_keyp_sk_left_pane_g1

0x354f,	// (0x00042b1d) bg_button_pane_cp04

0xed0e,	// (0x0004e2dc) midp_keyp_sk_right_pane_g1

0x795e,	// (0x00046f2c) midp_keyp_rocker_pane_g1

0xed17,	// (0x0004e2e5) keyp_game_cell_pane_ParamLimits

0xed17,	// (0x0004e2e5) keyp_game_cell_pane

0x354f,	// (0x00042b1d) bg_button_pane_cp02

0xed3b,	// (0x0004e309) keyp_game_cell_pane_g1

0xbe41,	// (0x0004b40f) popup_fep_vkb2_window_ParamLimits

0xbe41,	// (0x0004b40f) popup_fep_vkb2_window

0xc9c4,	// (0x0004bf92) aid_size_cell_vkb2_ParamLimits

0xc9c4,	// (0x0004bf92) aid_size_cell_vkb2

0xc9fa,	// (0x0004bfc8) popup_fep_vkb2_window_g1_ParamLimits

0xc9fa,	// (0x0004bfc8) popup_fep_vkb2_window_g1

0xca4a,	// (0x0004c018) vkb2_area_bottom_pane_ParamLimits

0xca4a,	// (0x0004c018) vkb2_area_bottom_pane

0xca9e,	// (0x0004c06c) vkb2_area_keypad_pane_ParamLimits

0xca9e,	// (0x0004c06c) vkb2_area_keypad_pane

0xcae6,	// (0x0004c0b4) vkb2_area_top_pane_ParamLimits

0xcae6,	// (0x0004c0b4) vkb2_area_top_pane

0xcb6c,	// (0x0004c13a) vkb2_top_entry_pane_ParamLimits

0xcb6c,	// (0x0004c13a) vkb2_top_entry_pane

0xcb99,	// (0x0004c167) vkb2_top_grid_left_pane_ParamLimits

0xcb99,	// (0x0004c167) vkb2_top_grid_left_pane

0xcbb9,	// (0x0004c187) vkb2_top_grid_right_pane_ParamLimits

0xcbb9,	// (0x0004c187) vkb2_top_grid_right_pane

0x2c41,	// (0x0004220f) vkb2_cell_keypad_pane_ParamLimits

0x2c41,	// (0x0004220f) vkb2_cell_keypad_pane

0xcbff,	// (0x0004c1cd) vkb2_area_bottom_grid_pane_ParamLimits

0xcbff,	// (0x0004c1cd) vkb2_area_bottom_grid_pane

0xcc29,	// (0x0004c1f7) vkb2_area_bottom_pane_g1_ParamLimits

0xcc29,	// (0x0004c1f7) vkb2_area_bottom_pane_g1

0xcc4f,	// (0x0004c21d) vkb2_area_bottom_pane_g2_ParamLimits

0xcc4f,	// (0x0004c21d) vkb2_area_bottom_pane_g2

0xcc80,	// (0x0004c24e) vkb2_area_bottom_pane_g3_ParamLimits

0xcc80,	// (0x0004c24e) vkb2_area_bottom_pane_g3

0x0002,

0xfd7b,	// (0x0004f349) vkb2_area_bottom_pane_g_ParamLimits

0xfd7b,	// (0x0004f349) vkb2_area_bottom_pane_g

0x2deb,	// (0x000423b9) vkb2_top_cell_left_pane_ParamLimits

0x2deb,	// (0x000423b9) vkb2_top_cell_left_pane

0xed44,	// (0x0004e312) vkb2_top_entry_pane_g1_ParamLimits

0xed44,	// (0x0004e312) vkb2_top_entry_pane_g1

0xed52,	// (0x0004e320) vkb2_top_entry_pane_t1_ParamLimits

0xed52,	// (0x0004e320) vkb2_top_entry_pane_t1

0x9833,	// (0x00048e01) vkb2_top_entry_pane_t2_ParamLimits

0x9833,	// (0x00048e01) vkb2_top_entry_pane_t2

0x9865,	// (0x00048e33) vkb2_top_entry_pane_t3_ParamLimits

0x9865,	// (0x00048e33) vkb2_top_entry_pane_t3

0x0002,

0xfd82,	// (0x0004f350) vkb2_top_entry_pane_t_ParamLimits

0xfd82,	// (0x0004f350) vkb2_top_entry_pane_t

0xccea,	// (0x0004c2b8) vkb2_top_grid_right_pane_g1_ParamLimits

0xccea,	// (0x0004c2b8) vkb2_top_grid_right_pane_g1

0x2e4e,	// (0x0004241c) vkb2_top_grid_right_pane_g2_ParamLimits

0x2e4e,	// (0x0004241c) vkb2_top_grid_right_pane_g2

0x2e66,	// (0x00042434) vkb2_top_grid_right_pane_g3_ParamLimits

0x2e66,	// (0x00042434) vkb2_top_grid_right_pane_g3

0xcd00,	// (0x0004c2ce) vkb2_top_grid_right_pane_g4_ParamLimits

0xcd00,	// (0x0004c2ce) vkb2_top_grid_right_pane_g4

0x0003,

0xfd89,	// (0x0004f357) vkb2_top_grid_right_pane_g_ParamLimits

0xfd89,	// (0x0004f357) vkb2_top_grid_right_pane_g

0x2e94,	// (0x00042462) vkb2_top_cell_left_pane_g1

0x2eab,	// (0x00042479) vkb2_cell_keypad_pane_g1_ParamLimits

0x2eab,	// (0x00042479) vkb2_cell_keypad_pane_g1

0x9889,	// (0x00048e57) vkb2_cell_keypad_pane_t1_ParamLimits

0x9889,	// (0x00048e57) vkb2_cell_keypad_pane_t1

0x2eb9,	// (0x00042487) vkb2_cell_bottom_grid_pane_ParamLimits

0x2eb9,	// (0x00042487) vkb2_cell_bottom_grid_pane

0x2ef2,	// (0x000424c0) vkb2_cell_bottom_grid_pane_g1

0xea03,	// (0x0004dfd1) aid_call2_pane_cp02

0xea0b,	// (0x0004dfd9) aid_call_pane_cp02

0xea13,	// (0x0004dfe1) clock_digital_number_pane_cp10

0xea1b,	// (0x0004dfe9) clock_digital_number_pane_cp11

0xea23,	// (0x0004dff1) clock_digital_number_pane_cp12

0xea2b,	// (0x0004dff9) clock_digital_number_pane_cp13

0xea33,	// (0x0004e001) clock_digital_separator_pane_cp10

0x4531,	// (0x00043aff) popup_clock_digital_analogue_window_cp2_g1

0x4531,	// (0x00043aff) popup_clock_digital_analogue_window_cp2_g2

0xea3b,	// (0x0004e009) popup_clock_digital_analogue_window_cp2_g3

0x4531,	// (0x00043aff) popup_clock_digital_analogue_window_cp2_g4

0xea3b,	// (0x0004e009) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3e,	// (0x0004f30c) popup_clock_digital_analogue_window_cp2_g

0xea43,	// (0x0004e011) popup_clock_digital_analogue_window_cp2_t1

0xea51,	// (0x0004e01f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd49,	// (0x0004f317) popup_clock_digital_analogue_window_cp2_t

0x795e,	// (0x00046f2c) clock_digital_number_pane_cp10_g1

0x795e,	// (0x00046f2c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0004f0ff) clock_digital_number_pane_cp10_g

0x795e,	// (0x00046f2c) clock_digital_separator_pane_cp10_g1

0x795e,	// (0x00046f2c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0004f0ff) clock_digital_separator_pane_cp10_g

0x928f,	// (0x0004885d) uniindi_top_pane_g3

0x92a0,	// (0x0004886e) uniindi_top_pane_g4

0x2ccc,	// (0x0004229a) vkb2_row_keypad_pane_ParamLimits

0x2ccc,	// (0x0004229a) vkb2_row_keypad_pane

0x2f0e,	// (0x000424dc) vkb2_cell_t_keypad_pane_ParamLimits

0x2f0e,	// (0x000424dc) vkb2_cell_t_keypad_pane

0x2f1e,	// (0x000424ec) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2f1e,	// (0x000424ec) vkb2_cell_t_keypad_pane_cp08

0x2f31,	// (0x000424ff) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2f31,	// (0x000424ff) vkb2_cell_t_keypad_pane_cp09

0x2f45,	// (0x00042513) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2f45,	// (0x00042513) vkb2_cell_t_keypad_pane_cp01

0x2f56,	// (0x00042524) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2f56,	// (0x00042524) vkb2_cell_t_keypad_pane_cp02

0x2f67,	// (0x00042535) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2f67,	// (0x00042535) vkb2_cell_t_keypad_pane_cp03

0x2f78,	// (0x00042546) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2f78,	// (0x00042546) vkb2_cell_t_keypad_pane_cp04

0x2f89,	// (0x00042557) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2f89,	// (0x00042557) vkb2_cell_t_keypad_pane_cp05

0x2f9a,	// (0x00042568) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2f9a,	// (0x00042568) vkb2_cell_t_keypad_pane_cp06

0x2fab,	// (0x00042579) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2fab,	// (0x00042579) vkb2_cell_t_keypad_pane_cp07

0x2fbc,	// (0x0004258a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2fbc,	// (0x0004258a) vkb2_cell_t_keypad_pane_cp10

0x7bdc,	// (0x000471aa) vkb2_cell_t_keypad_pane_g1

0x98a0,	// (0x00048e6e) vkb2_cell_t_keypad_pane_t1

0x354f,	// (0x00042b1d) popup_grid_graphic2_window

0xed8b,	// (0x0004e359) aid_size_cell_graphic2_ParamLimits

0xed8b,	// (0x0004e359) aid_size_cell_graphic2

0xedc9,	// (0x0004e397) bg_popup_window_pane_cp21_ParamLimits

0xedc9,	// (0x0004e397) bg_popup_window_pane_cp21

0xedd7,	// (0x0004e3a5) graphic2_pages_pane_ParamLimits

0xedd7,	// (0x0004e3a5) graphic2_pages_pane

0xee2d,	// (0x0004e3fb) grid_graphic2_control_pane_ParamLimits

0xee2d,	// (0x0004e3fb) grid_graphic2_control_pane

0xee75,	// (0x0004e443) grid_graphic2_pane_ParamLimits

0xee75,	// (0x0004e443) grid_graphic2_pane

0xeefc,	// (0x0004e4ca) cell_graphic2_pane

0x354f,	// (0x00042b1d) main_comp_mode_pane

0x8b0f,	// (0x000480dd) list_ai3_gene_pane_ParamLimits

0xe74a,	// (0x0004dd18) bg_popup_window_pane_cp19_ParamLimits

0x8ee5,	// (0x000484b3) bg_touch_area_indi_pane_ParamLimits

0x8ee5,	// (0x000484b3) bg_touch_area_indi_pane

0x8efb,	// (0x000484c9) bg_touch_area_indi_pane_cp01_ParamLimits

0x8efb,	// (0x000484c9) bg_touch_area_indi_pane_cp01

0x8f11,	// (0x000484df) bg_touch_area_indi_pane_cp02_ParamLimits

0x8f11,	// (0x000484df) bg_touch_area_indi_pane_cp02

0x8f29,	// (0x000484f7) bg_touch_area_indi_pane_cp03_ParamLimits

0x8f29,	// (0x000484f7) bg_touch_area_indi_pane_cp03

0x8f43,	// (0x00048511) popup_slider_window_g1_ParamLimits

0x8f5f,	// (0x0004852d) popup_slider_window_g2_ParamLimits

0x8f7b,	// (0x00048549) popup_slider_window_g3_ParamLimits

0xfcd3,	// (0x0004f2a1) popup_slider_window_g_ParamLimits

0x8fd7,	// (0x000485a5) popup_slider_window_t1_ParamLimits

0x904b,	// (0x00048619) small_volume_slider_vertical_pane_ParamLimits

0xeefc,	// (0x0004e4ca) cell_graphic2_pane_ParamLimits

0xef59,	// (0x0004e527) bg_button_pane_cp10_ParamLimits

0xef59,	// (0x0004e527) bg_button_pane_cp10

0xef6c,	// (0x0004e53a) bg_button_pane_cp11_ParamLimits

0xef6c,	// (0x0004e53a) bg_button_pane_cp11

0xef7f,	// (0x0004e54d) graphic2_pages_pane_g1_ParamLimits

0xef7f,	// (0x0004e54d) graphic2_pages_pane_g1

0xef9a,	// (0x0004e568) graphic2_pages_pane_g2_ParamLimits

0xef9a,	// (0x0004e568) graphic2_pages_pane_g2

0x0001,

0xfd97,	// (0x0004f365) graphic2_pages_pane_g_ParamLimits

0xfd97,	// (0x0004f365) graphic2_pages_pane_g

0xefb2,	// (0x0004e580) graphic2_pages_pane_t1_ParamLimits

0xefb2,	// (0x0004e580) graphic2_pages_pane_t1

0xefca,	// (0x0004e598) cell_graphic2_control_pane_ParamLimits

0xefca,	// (0x0004e598) cell_graphic2_control_pane

0xeffc,	// (0x0004e5ca) cell_graphic2_pane_g1_ParamLimits

0xeffc,	// (0x0004e5ca) cell_graphic2_pane_g1

0xe0f9,	// (0x0004d6c7) cell_graphic2_pane_g2_ParamLimits

0xe0f9,	// (0x0004d6c7) cell_graphic2_pane_g2

0xe579,	// (0x0004db47) cell_graphic2_pane_g3_ParamLimits

0xe579,	// (0x0004db47) cell_graphic2_pane_g3

0xe106,	// (0x0004d6d4) cell_graphic2_pane_g4_ParamLimits

0xe106,	// (0x0004d6d4) cell_graphic2_pane_g4

0xf009,	// (0x0004e5d7) cell_graphic2_pane_g5_ParamLimits

0xf009,	// (0x0004e5d7) cell_graphic2_pane_g5

0x0004,

0xfd9c,	// (0x0004f36a) cell_graphic2_pane_g_ParamLimits

0xfd9c,	// (0x0004f36a) cell_graphic2_pane_g

0xf029,	// (0x0004e5f7) cell_graphic2_pane_t1_ParamLimits

0xf029,	// (0x0004e5f7) cell_graphic2_pane_t1

0x6079,	// (0x00045647) grid_highlight_pane_cp11_ParamLimits

0x6079,	// (0x00045647) grid_highlight_pane_cp11

0x38cc,	// (0x00042e9a) bg_button_pane_cp05

0xf05e,	// (0x0004e62c) cell_graphic2_control_pane_g1

0x795e,	// (0x00046f2c) bg_touch_area_indi_pane_g1

0x9b70,	// (0x0004913e) aid_cmod_rocker_key_size

0x9b7a,	// (0x00049148) aid_cmode_itu_key_size

0x9b84,	// (0x00049152) main_cmode_video_pane

0x9b8e,	// (0x0004915c) main_comp_mode_itu_pane

0x9b9a,	// (0x00049168) main_comp_mode_rocker_pane

0x9ba6,	// (0x00049174) cell_cmode_rocker_pane_ParamLimits

0x9ba6,	// (0x00049174) cell_cmode_rocker_pane

0x9bb8,	// (0x00049186) cell_cmode_itu_pane_ParamLimits

0x9bb8,	// (0x00049186) cell_cmode_itu_pane

0x3ebe,	// (0x0004348c) bg_button_pane_cp06_ParamLimits

0x3ebe,	// (0x0004348c) bg_button_pane_cp06

0x7bdc,	// (0x000471aa) cell_cmode_rocker_pane_g1_ParamLimits

0x7bdc,	// (0x000471aa) cell_cmode_rocker_pane_g1

0x90ef,	// (0x000486bd) cell_cmode_rocker_pane_g2_ParamLimits

0x90ef,	// (0x000486bd) cell_cmode_rocker_pane_g2

0x0001,

0xfdac,	// (0x0004f37a) cell_cmode_rocker_pane_g_ParamLimits

0xfdac,	// (0x0004f37a) cell_cmode_rocker_pane_g

0x354f,	// (0x00042b1d) bg_button_pane_cp07

0x9bcd,	// (0x0004919b) cell_cmode_itu_pane_g1

0x9bd6,	// (0x000491a4) cell_cmode_itu_pane_t1

0x9be4,	// (0x000491b2) cell_cmode_itu_pane_t2

0x0001,

0xfdb1,	// (0x0004f37f) cell_cmode_itu_pane_t

0x9312,	// (0x000488e0) aid_touch_ctrl_left

0x931a,	// (0x000488e8) aid_touch_ctrl_right

0x354f,	// (0x00042b1d) compa_mode_pane

0xf084,	// (0x0004e652) aid_cmod_rocker_key_size_cp

0xf08e,	// (0x0004e65c) aid_cmode_itu_key_size_cp

0x9c06,	// (0x000491d4) compa_mode_pane_g1

0x9c0e,	// (0x000491dc) compa_mode_pane_g2

0x9c16,	// (0x000491e4) compa_mode_pane_g3

0x0002,

0xfdb6,	// (0x0004f384) compa_mode_pane_g

0xf098,	// (0x0004e666) main_comp_mode_itu_pane_cp

0xf0a0,	// (0x0004e66e) main_comp_mode_rocker_pane_cp

0xf0a8,	// (0x0004e676) cell_cmode_itu_pane_cp_ParamLimits

0xf0a8,	// (0x0004e676) cell_cmode_itu_pane_cp

0xf0bd,	// (0x0004e68b) cell_cmode_rocker_pane_cp_ParamLimits

0xf0bd,	// (0x0004e68b) cell_cmode_rocker_pane_cp

0x3ebe,	// (0x0004348c) bg_button_pane_cp06_cp_ParamLimits

0x3ebe,	// (0x0004348c) bg_button_pane_cp06_cp

0x7bdc,	// (0x000471aa) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7bdc,	// (0x000471aa) cell_cmode_rocker_pane_g1_cp

0x795e,	// (0x00046f2c) cell_cmode_rocker_pane_g2_cp

0x354f,	// (0x00042b1d) bg_button_pane_cp07_cp

0xf0cf,	// (0x0004e69d) cell_cmode_itu_pane_g1_cp

0xf0d8,	// (0x0004e6a6) cell_cmode_itu_pane_t1_cp

0xf0d8,	// (0x0004e6a6) cell_cmode_itu_pane_t2_cp

0xdd6a,	// (0x0004d338) settings_code_pane_cp2

0x3643,	// (0x00042c11) bg_popup_window_pane_cp3_ParamLimits

0x3aa6,	// (0x00043074) heading_pane_cp3_ParamLimits

0x3ab2,	// (0x00043080) listscroll_popup_graphic_pane_ParamLimits

0x2508,	// (0x00041ad6) fep_hwr_aid_pane_ParamLimits

0x29ae,	// (0x00041f7c) aid_touch_sctrl_top_ParamLimits

0x29bb,	// (0x00041f89) sctrl_sk_top_pane_g1_ParamLimits

0x7bdc,	// (0x000471aa) sctrl_sk_top_pane_g2_ParamLimits

0xfcec,	// (0x0004f2ba) sctrl_sk_top_pane_g_ParamLimits

0x29c8,	// (0x00041f96) sctrl_sk_top_pane_t1_ParamLimits

0x29ae,	// (0x00041f7c) aid_touch_sctrl_bottom_ParamLimits

0x29c8,	// (0x00041f96) sctrl_sk_bottom_pane_t1_ParamLimits

0x925b,	// (0x00048829) aid_area_touch_clock

0xcb2e,	// (0x0004c0fc) aid_vkb2_area_top_pane_cell_ParamLimits

0xcb2e,	// (0x0004c0fc) aid_vkb2_area_top_pane_cell

0xcbd9,	// (0x0004c1a7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcbd9,	// (0x0004c1a7) aid_vkb2_area_bottom_pane_cell

0x97eb,	// (0x00048db9) popup_char_count_window

0x9c63,	// (0x00049231) popup_char_count_window_g1

0x9c6c,	// (0x0004923a) popup_char_count_window_g2

0x9c75,	// (0x00049243) popup_char_count_window_g3

0x0002,

0xfdbd,	// (0x0004f38b) popup_char_count_window_g

0x9c7e,	// (0x0004924c) popup_char_count_window_t1

0x2a69,	// (0x00042037) popup_fep_char_preview_window_ParamLimits

0x2a69,	// (0x00042037) popup_fep_char_preview_window

0xcb4e,	// (0x0004c11c) vkb2_top_candi_pane_ParamLimits

0xcb4e,	// (0x0004c11c) vkb2_top_candi_pane

0xf0e6,	// (0x0004e6b4) cell_vkb2_top_candi_pane_ParamLimits

0xf0e6,	// (0x0004e6b4) cell_vkb2_top_candi_pane

0x5a05,	// (0x00044fd3) bg_popup_fep_char_preview_window_ParamLimits

0x5a05,	// (0x00044fd3) bg_popup_fep_char_preview_window

0x2fd1,	// (0x0004259f) popup_fep_char_preview_window_t1_ParamLimits

0x2fd1,	// (0x0004259f) popup_fep_char_preview_window_t1

0x9cd9,	// (0x000492a7) bg_popup_fep_char_preview_window_g1

0x9ce1,	// (0x000492af) bg_popup_fep_char_preview_window_g2

0x9ce9,	// (0x000492b7) bg_popup_fep_char_preview_window_g3

0x9cf1,	// (0x000492bf) bg_popup_fep_char_preview_window_g4

0x9cf9,	// (0x000492c7) bg_popup_fep_char_preview_window_g5

0x300b,	// (0x000425d9) bg_popup_fep_char_preview_window_g6

0x9d01,	// (0x000492cf) bg_popup_fep_char_preview_window_g7

0x9d09,	// (0x000492d7) bg_popup_fep_char_preview_window_g8

0x9d11,	// (0x000492df) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc4,	// (0x0004f392) bg_popup_fep_char_preview_window_g

0x7bdc,	// (0x000471aa) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7bdc,	// (0x000471aa) cell_vkb2_top_candi_pane_g1

0x806e,	// (0x0004763c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x806e,	// (0x0004763c) cell_vkb2_top_candi_pane_g2

0x808f,	// (0x0004765d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x808f,	// (0x0004765d) cell_vkb2_top_candi_pane_g3

0x3013,	// (0x000425e1) cell_vkb2_top_candi_pane_g4_ParamLimits

0x3013,	// (0x000425e1) cell_vkb2_top_candi_pane_g4

0x9564,	// (0x00048b32) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9564,	// (0x00048b32) cell_vkb2_top_candi_pane_g5

0x90ef,	// (0x000486bd) cell_vkb2_top_candi_pane_g6_ParamLimits

0x90ef,	// (0x000486bd) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x0004f3a5) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x0004f3a5) cell_vkb2_top_candi_pane_g

0x3034,	// (0x00042602) cell_vkb2_top_candi_pane_t1

0x229d,	// (0x0004186b) aid_size_touch_slider_mark_ParamLimits

0x229d,	// (0x0004186b) aid_size_touch_slider_mark

0xee13,	// (0x0004e3e1) grid_graphic2_catg_pane_ParamLimits

0xee13,	// (0x0004e3e1) grid_graphic2_catg_pane

0xeecf,	// (0x0004e49d) popup_grid_graphic2_window_t1_ParamLimits

0xeecf,	// (0x0004e49d) popup_grid_graphic2_window_t1

0xeee5,	// (0x0004e4b3) popup_grid_graphic2_window_t2_ParamLimits

0xeee5,	// (0x0004e4b3) popup_grid_graphic2_window_t2

0x0001,

0xfd92,	// (0x0004f360) popup_grid_graphic2_window_t_ParamLimits

0xfd92,	// (0x0004f360) popup_grid_graphic2_window_t

0x38cc,	// (0x00042e9a) bg_button_pane_cp05_ParamLimits

0xf05e,	// (0x0004e62c) cell_graphic2_control_pane_g1_ParamLimits

0xf14c,	// (0x0004e71a) cell_graphic2_catg_pane_ParamLimits

0xf14c,	// (0x0004e71a) cell_graphic2_catg_pane

0x354f,	// (0x00042b1d) bg_button_pane_cp12

0xf15e,	// (0x0004e72c) cell_graphic2_catg_pane_g1

0x9227,	// (0x000487f5) cell_tb_ext_pane_t1_ParamLimits

0x2e0b,	// (0x000423d9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2e0b,	// (0x000423d9) vkb2_top_cell_right_narrow_pane

0x2e23,	// (0x000423f1) vkb2_top_cell_right_wide_pane_ParamLimits

0x2e23,	// (0x000423f1) vkb2_top_cell_right_wide_pane

0x24fa,	// (0x00041ac8) bg_vkb2_func_pane_ParamLimits

0x24fa,	// (0x00041ac8) bg_vkb2_func_pane

0x2e94,	// (0x00042462) vkb2_top_cell_left_pane_g1_ParamLimits

0x24fa,	// (0x00041ac8) bg_vkb2_fuc_pane_cp03_ParamLimits

0x24fa,	// (0x00041ac8) bg_vkb2_fuc_pane_cp03

0x2ef2,	// (0x000424c0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5394,	// (0x00044962) bg_vkb2_func_pane_g1

0x539c,	// (0x0004496a) bg_vkb2_func_pane_g2

0x53ac,	// (0x0004497a) bg_vkb2_func_pane_g3

0x53a4,	// (0x00044972) bg_vkb2_func_pane_g4

0x53b4,	// (0x00044982) bg_vkb2_func_pane_g5

0x53bc,	// (0x0004498a) bg_vkb2_func_pane_g6

0x53c4,	// (0x00044992) bg_vkb2_func_pane_g7

0x53cc,	// (0x0004499a) bg_vkb2_func_pane_g8

0x538c,	// (0x0004495a) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x0004f3b2) bg_vkb2_func_pane_g

0x24fa,	// (0x00041ac8) bg_vkb2_fuc_pane_cp01_ParamLimits

0x24fa,	// (0x00041ac8) bg_vkb2_fuc_pane_cp01

0x2e94,	// (0x00042462) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2e94,	// (0x00042462) vkb2_top_cell_right_wide_pane_g1

0x24fa,	// (0x00041ac8) bg_vkb2_fuc_pane_cp02_ParamLimits

0x24fa,	// (0x00041ac8) bg_vkb2_fuc_pane_cp02

0x2ef2,	// (0x000424c0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2ef2,	// (0x000424c0) vkb2_top_cell_right_narrow_pane_g1

0xe68a,	// (0x0004dc58) aid_touch_area_decrease_ParamLimits

0xe68a,	// (0x0004dc58) aid_touch_area_decrease

0xe6be,	// (0x0004dc8c) aid_touch_area_increase_ParamLimits

0xe6be,	// (0x0004dc8c) aid_touch_area_increase

0xe6e6,	// (0x0004dcb4) aid_touch_area_mute_ParamLimits

0xe6e6,	// (0x0004dcb4) aid_touch_area_mute

0xe716,	// (0x0004dce4) aid_touch_area_slider_ParamLimits

0xe716,	// (0x0004dce4) aid_touch_area_slider

0xe756,	// (0x0004dd24) popup_slider_window_g4_ParamLimits

0xe756,	// (0x0004dd24) popup_slider_window_g4

0xe77e,	// (0x0004dd4c) popup_slider_window_g5_ParamLimits

0xe77e,	// (0x0004dd4c) popup_slider_window_g5

0xe7b2,	// (0x0004dd80) popup_slider_window_g6_ParamLimits

0xe7b2,	// (0x0004dd80) popup_slider_window_g6

0x9005,	// (0x000485d3) popup_slider_window_t2_ParamLimits

0x9005,	// (0x000485d3) popup_slider_window_t2

0x0001,

0xfce0,	// (0x0004f2ae) popup_slider_window_t_ParamLimits

0xfce0,	// (0x0004f2ae) popup_slider_window_t

0xe7ce,	// (0x0004dd9c) slider_pane_ParamLimits

0xe7ce,	// (0x0004dd9c) slider_pane

0x9d34,	// (0x00049302) slider_pane_g1_ParamLimits

0x9d34,	// (0x00049302) slider_pane_g1

0x9d48,	// (0x00049316) slider_pane_g2_ParamLimits

0x9d48,	// (0x00049316) slider_pane_g2

0x9d5e,	// (0x0004932c) slider_pane_g3_ParamLimits

0x9d5e,	// (0x0004932c) slider_pane_g3

0x0003,

0xfdf7,	// (0x0004f3c5) slider_pane_g_ParamLimits

0xfdf7,	// (0x0004f3c5) slider_pane_g

0xc774,	// (0x0004bd42) popup_tb_float_extension_window_ParamLimits

0xc774,	// (0x0004bd42) popup_tb_float_extension_window

0x9d8a,	// (0x00049358) aid_size_cell_tb_float_ext

0x354f,	// (0x00042b1d) bg_popup_sub_window_cp28

0x9d96,	// (0x00049364) grid_tb_float_ext_pane

0x9da0,	// (0x0004936e) cell_tb_float_ext_pane_ParamLimits

0x9da0,	// (0x0004936e) cell_tb_float_ext_pane

0x9dba,	// (0x00049388) cell_tb_float_ext_pane_g1

0x9dc3,	// (0x00049391) grid_highlight_pane_cp12

0xc8bf,	// (0x0004be8d) cell_last_hwr_side_pane_ParamLimits

0xc8bf,	// (0x0004be8d) cell_last_hwr_side_pane

0x795e,	// (0x00046f2c) cell_last_hwr_side_pane_g1

0x9dcc,	// (0x0004939a) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x0004f3ce) cell_last_hwr_side_pane_g

0xccb5,	// (0x0004c283) vkb2_area_bottom_space_btn_pane_ParamLimits

0xccb5,	// (0x0004c283) vkb2_area_bottom_space_btn_pane

0x7bdc,	// (0x000471aa) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x98a0,	// (0x00048e6e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x3034,	// (0x00042602) cell_vkb2_top_candi_pane_t1_ParamLimits

0x3053,	// (0x00042621) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x3053,	// (0x00042621) vkb2_area_bottom_space_btn_pane_g1

0x308d,	// (0x0004265b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x308d,	// (0x0004265b) vkb2_area_bottom_space_btn_pane_g2

0x30c3,	// (0x00042691) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x30c3,	// (0x00042691) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x0004f3d3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x0004f3d3) vkb2_area_bottom_space_btn_pane_g

0x25af,	// (0x00041b7d) cel_fep_hwr_func_pane_ParamLimits

0x25af,	// (0x00041b7d) cel_fep_hwr_func_pane

0xc894,	// (0x0004be62) cell_hwr_side_button_pane_ParamLimits

0xc894,	// (0x0004be62) cell_hwr_side_button_pane

0x925b,	// (0x00048829) aid_area_touch_clock_ParamLimits

0x38cc,	// (0x00042e9a) bg_uniindi_top_pane_ParamLimits

0x926d,	// (0x0004883b) uniindi_top_pane_g1_ParamLimits

0x9283,	// (0x00048851) uniindi_top_pane_g2_ParamLimits

0x928f,	// (0x0004885d) uniindi_top_pane_g3_ParamLimits

0x92a0,	// (0x0004886e) uniindi_top_pane_g4_ParamLimits

0xfd18,	// (0x0004f2e6) uniindi_top_pane_g_ParamLimits

0x92ad,	// (0x0004887b) uniindi_top_pane_t1_ParamLimits

0x38cc,	// (0x00042e9a) bg_vkb2_func_pane_cp01_ParamLimits

0x38cc,	// (0x00042e9a) bg_vkb2_func_pane_cp01

0x9dd5,	// (0x000493a3) cel_fep_hwr_func_pane_g1_ParamLimits

0x9dd5,	// (0x000493a3) cel_fep_hwr_func_pane_g1

0x38cc,	// (0x00042e9a) bg_vkb2_func_pane_cp02_ParamLimits

0x38cc,	// (0x00042e9a) bg_vkb2_func_pane_cp02

0x9dd5,	// (0x000493a3) cell_hwr_side_button_pane_g1_ParamLimits

0x9dd5,	// (0x000493a3) cell_hwr_side_button_pane_g1

0x520d,	// (0x000447db) status_pane_g4_ParamLimits

0x520d,	// (0x000447db) status_pane_g4

0x5227,	// (0x000447f5) status_pane_t1

0x7698,	// (0x00046c66) form2_midp_gauge_slider_cont_pane

0x76a0,	// (0x00046c6e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe041,	// (0x0004d60f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe053,	// (0x0004d621) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0004f0b2) form2_midp_gauge_slider_pane_t_ParamLimits

0x76d6,	// (0x00046ca4) form2_midp_slider_pane_ParamLimits

0x2a29,	// (0x00041ff7) aid_size_cell_func_vkb2_ParamLimits

0x2a29,	// (0x00041ff7) aid_size_cell_func_vkb2

0x9d76,	// (0x00049344) slider_pane_g4_ParamLimits

0x9d76,	// (0x00049344) slider_pane_g4

0xcd16,	// (0x0004c2e4) form2_midp_gauge_slider_pane_t2_cp01

0xcd24,	// (0x0004c2f2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcd24,	// (0x0004c2f2) form2_midp_gauge_slider_pane_t3_cp01

0x3138,	// (0x00042706) form2_midp_slider_pane_cp01

0x354f,	// (0x00042b1d) navi_smil_pane

0x9e0e,	// (0x000493dc) navi_smil_pane_g1

0x9e16,	// (0x000493e4) navi_smil_pane_t1

0x9de3,	// (0x000493b1) form2_midp_slider_pane_g1

0x9dec,	// (0x000493ba) form2_midp_slider_pane_g2

0x9df4,	// (0x000493c2) form2_midp_slider_pane_g3

0x9de3,	// (0x000493b1) form2_midp_slider_pane_g4

0xf167,	// (0x0004e735) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x0004f3dc) form2_midp_slider_pane_g

0x30fd,	// (0x000426cb) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x30fd,	// (0x000426cb) vkb2_area_bottom_space_btn_pane_g4

0xd73e,	// (0x0004cd0c) lc0_navi_pane_ParamLimits

0xd73e,	// (0x0004cd0c) lc0_navi_pane

0xd7a8,	// (0x0004cd76) lc0_stat_indi_pane_ParamLimits

0xd7a8,	// (0x0004cd76) lc0_stat_indi_pane

0xd7bd,	// (0x0004cd8b) ls0_title_pane_ParamLimits

0xd7bd,	// (0x0004cd8b) ls0_title_pane

0x3ebe,	// (0x0004348c) bg_popup_sub_pane_cp14_ParamLimits

0x9242,	// (0x00048810) list_uniindi_pane_ParamLimits

0x924e,	// (0x0004881c) uniindi_top_pane_ParamLimits

0x92ea,	// (0x000488b8) list_single_uniindi_pane_g1_ParamLimits

0x92fd,	// (0x000488cb) list_single_uniindi_pane_t1_ParamLimits

0xcd41,	// (0x0004c30f) lc0_stat_clock_pane_ParamLimits

0xcd41,	// (0x0004c30f) lc0_stat_clock_pane

0xf172,	// (0x0004e740) lc0_stat_indi_pane_g1_ParamLimits

0xf172,	// (0x0004e740) lc0_stat_indi_pane_g1

0xf17f,	// (0x0004e74d) lc0_stat_indi_pane_g2_ParamLimits

0xf17f,	// (0x0004e74d) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x0004f3e7) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x0004f3e7) lc0_stat_indi_pane_g

0xcd4e,	// (0x0004c31c) lc0_uni_indicator_pane_ParamLimits

0xcd4e,	// (0x0004c31c) lc0_uni_indicator_pane

0xf18c,	// (0x0004e75a) ls0_title_pane_g1_ParamLimits

0xf18c,	// (0x0004e75a) ls0_title_pane_g1

0xf1a0,	// (0x0004e76e) ls0_title_pane_t1_ParamLimits

0xf1a0,	// (0x0004e76e) ls0_title_pane_t1

0xcd5b,	// (0x0004c329) lc0_uni_indicator_pane_g1_ParamLimits

0xcd5b,	// (0x0004c329) lc0_uni_indicator_pane_g1

0x9e88,	// (0x00049456) lc0_stat_clock_pane_t1

0x354f,	// (0x00042b1d) main_ai5_pane

0x9e96,	// (0x00049464) ai5_sk_pane_ParamLimits

0x9e96,	// (0x00049464) ai5_sk_pane

0xf1ce,	// (0x0004e79c) cell_ai5_widget_pane_ParamLimits

0xf1ce,	// (0x0004e79c) cell_ai5_widget_pane

0x9f59,	// (0x00049527) aid_size_cell_widget_grid

0x9f6f,	// (0x0004953d) bg_ai5_widget_pane_ParamLimits

0x9f6f,	// (0x0004953d) bg_ai5_widget_pane

0x9fe3,	// (0x000495b1) cell_ai5_widget_pane_g2

0x9ff3,	// (0x000495c1) cell_ai5_widget_pane_g3

0xa00a,	// (0x000495d8) cell_ai5_widget_pane_g4

0xa016,	// (0x000495e4) cell_ai5_widget_pane_g5

0xa022,	// (0x000495f0) cell_ai5_widget_pane_g6

0xa02e,	// (0x000495fc) cell_ai5_widget_pane_g7

0xa076,	// (0x00049644) cell_ai5_widget_pane_t1_ParamLimits

0xa076,	// (0x00049644) cell_ai5_widget_pane_t1

0xa093,	// (0x00049661) cell_ai5_widget_pane_t2_ParamLimits

0xa093,	// (0x00049661) cell_ai5_widget_pane_t2

0xa0ab,	// (0x00049679) cell_ai5_widget_pane_t3_ParamLimits

0xa0ab,	// (0x00049679) cell_ai5_widget_pane_t3

0xa0c3,	// (0x00049691) cell_ai5_widget_pane_t4_ParamLimits

0xa0c3,	// (0x00049691) cell_ai5_widget_pane_t4

0xa0e0,	// (0x000496ae) cell_ai5_widget_pane_t5_ParamLimits

0xa0e0,	// (0x000496ae) cell_ai5_widget_pane_t5

0xa0ff,	// (0x000496cd) cell_ai5_widget_pane_t6_ParamLimits

0xa0ff,	// (0x000496cd) cell_ai5_widget_pane_t6

0xa111,	// (0x000496df) cell_ai5_widget_pane_t7_ParamLimits

0xa111,	// (0x000496df) cell_ai5_widget_pane_t7

0xa12a,	// (0x000496f8) cell_ai5_widget_pane_t8_ParamLimits

0xa12a,	// (0x000496f8) cell_ai5_widget_pane_t8

0x0009,

0xfe33,	// (0x0004f401) cell_ai5_widget_pane_t_ParamLimits

0xfe33,	// (0x0004f401) cell_ai5_widget_pane_t

0xa17e,	// (0x0004974c) grid_ai5_widget_pane

0x3ebe,	// (0x0004348c) highlight_cell_ai5_widget_pane_ParamLimits

0x3ebe,	// (0x0004348c) highlight_cell_ai5_widget_pane

0xf238,	// (0x0004e806) ai5_sk_left_pane

0xf242,	// (0x0004e810) ai5_sk_middle_pane

0xf24c,	// (0x0004e81a) ai5_sk_right_pane

0xa1b3,	// (0x00049781) bg_ai5_widget_pane_g1_ParamLimits

0xa1b3,	// (0x00049781) bg_ai5_widget_pane_g1

0xa1bf,	// (0x0004978d) bg_ai5_widget_pane_g2_ParamLimits

0xa1bf,	// (0x0004978d) bg_ai5_widget_pane_g2

0xa1cb,	// (0x00049799) bg_ai5_widget_pane_g3_ParamLimits

0xa1cb,	// (0x00049799) bg_ai5_widget_pane_g3

0xa1d7,	// (0x000497a5) bg_ai5_widget_pane_g4_ParamLimits

0xa1d7,	// (0x000497a5) bg_ai5_widget_pane_g4

0xa1e3,	// (0x000497b1) bg_ai5_widget_pane_g5_ParamLimits

0xa1e3,	// (0x000497b1) bg_ai5_widget_pane_g5

0xa1ef,	// (0x000497bd) bg_ai5_widget_pane_g6_ParamLimits

0xa1ef,	// (0x000497bd) bg_ai5_widget_pane_g6

0xa1fb,	// (0x000497c9) bg_ai5_widget_pane_g7_ParamLimits

0xa1fb,	// (0x000497c9) bg_ai5_widget_pane_g7

0xa207,	// (0x000497d5) bg_ai5_widget_pane_g8_ParamLimits

0xa207,	// (0x000497d5) bg_ai5_widget_pane_g8

0xa213,	// (0x000497e1) bg_ai5_widget_pane_g9_ParamLimits

0xa213,	// (0x000497e1) bg_ai5_widget_pane_g9

0x0008,

0xfe48,	// (0x0004f416) bg_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0004f416) bg_ai5_widget_pane_g

0xa245,	// (0x00049813) cell_shortcut_ai5_widget_pane_ParamLimits

0xa245,	// (0x00049813) cell_shortcut_ai5_widget_pane

0x4b44,	// (0x00044112) bg_cell_shortcut_ai5_widget_pane

0xa256,	// (0x00049824) cell_grid_ai5_widget_pane_g1

0x4b44,	// (0x00044112) highlight_cell_shortcut_ai5_widget_pane

0x539c,	// (0x0004496a) ai5_sk_left_pane_g1

0xa25f,	// (0x0004982d) ai5_sk_left_pane_g2

0xa267,	// (0x00049835) ai5_sk_left_pane_g3

0xa26f,	// (0x0004983d) ai5_sk_left_pane_g4

0x0003,

0xfe5b,	// (0x0004f429) ai5_sk_left_pane_g

0xa277,	// (0x00049845) ai5_sk_left_pane_t1

0x5394,	// (0x00044962) ai5_sk_right_pane_g1

0xa285,	// (0x00049853) ai5_sk_right_pane_g2

0xa28d,	// (0x0004985b) ai5_sk_right_pane_g3

0xa295,	// (0x00049863) ai5_sk_right_pane_g4

0x0003,

0xfe64,	// (0x0004f432) ai5_sk_right_pane_g

0xa29d,	// (0x0004986b) ai5_sk_right_pane_t1

0x5394,	// (0x00044962) ai5_sk_middle_pane_g1

0x539c,	// (0x0004496a) ai5_sk_middle_pane_g2

0x53b4,	// (0x00044982) ai5_sk_middle_pane_g3

0xa28d,	// (0x0004985b) ai5_sk_middle_pane_g4

0xa267,	// (0x00049835) ai5_sk_middle_pane_g5

0xa2ab,	// (0x00049879) ai5_sk_middle_pane_g6

0xf256,	// (0x0004e824) ai5_sk_middle_pane_g7

0x0006,

0xfe6d,	// (0x0004f43b) ai5_sk_middle_pane_g

0xd62a,	// (0x0004cbf8) aid_touch_area_size_lc0_ParamLimits

0xd62a,	// (0x0004cbf8) aid_touch_area_size_lc0

0x273a,	// (0x00041d08) cell_hwr_candidate_pane_t1_ParamLimits

0x4ee4,	// (0x000444b2) aid_touch_navi_pane

0xd8b6,	// (0x0004ce84) status_dt_navi_pane_ParamLimits

0xd8b6,	// (0x0004ce84) status_dt_navi_pane

0xd8ce,	// (0x0004ce9c) status_dt_sta_pane_ParamLimits

0xd8ce,	// (0x0004ce9c) status_dt_sta_pane

0xf25e,	// (0x0004e82c) dt_sta_controll_pane

0xf26b,	// (0x0004e839) dt_sta_indi_pane

0xf278,	// (0x0004e846) dt_sta_title_pane

0x38cc,	// (0x00042e9a) bg_dt_sta_indi_pane_ParamLimits

0x38cc,	// (0x00042e9a) bg_dt_sta_indi_pane

0xf28a,	// (0x0004e858) dt_sta_battery_pane

0xf292,	// (0x0004e860) dt_sta_indi_pane_g1

0xa2fd,	// (0x000498cb) dt_sta_indi_pane_g2

0xa306,	// (0x000498d4) dt_sta_indi_pane_g3

0x0002,

0xfe7c,	// (0x0004f44a) dt_sta_indi_pane_g

0xa30f,	// (0x000498dd) dt_sta_signal_pane

0x3ebe,	// (0x0004348c) bg_dt_sta_title_pane_ParamLimits

0x3ebe,	// (0x0004348c) bg_dt_sta_title_pane

0xa318,	// (0x000498e6) dt_sta_title_pane_g1

0xa320,	// (0x000498ee) dt_sta_title_pane_t1_ParamLimits

0xa320,	// (0x000498ee) dt_sta_title_pane_t1

0x354f,	// (0x00042b1d) bg_dt_sta_control_pane

0xf29b,	// (0x0004e869) dt_sta_controll_pane_g1

0xa33e,	// (0x0004990c) bg_dt_sta_title_pane_g1

0xa347,	// (0x00049915) bg_dt_sta_title_pane_g2

0xa350,	// (0x0004991e) bg_dt_sta_title_pane_g3

0x0002,

0xfe83,	// (0x0004f451) bg_dt_sta_title_pane_g

0x795e,	// (0x00046f2c) bg_dt_sta_indi_pane_g1

0xa359,	// (0x00049927) dt_sta_signal_pane_g1

0xa361,	// (0x0004992f) dt_sta_signal_pane_g2

0x0001,

0xfe8a,	// (0x0004f458) dt_sta_signal_pane_g

0xa369,	// (0x00049937) dt_sta_battery_pane_g1

0xa372,	// (0x00049940) dt_sta_battery_pane_t1

0x795e,	// (0x00046f2c) bg_dt_sta_control_pane_g1

0x4643,	// (0x00043c11) fep_china_uni_eep_pane

0x464b,	// (0x00043c19) fep_china_uni_entry_pane_ParamLimits

0x465b,	// (0x00043c29) popup_fep_china_uni_window_g1_ParamLimits

0x466b,	// (0x00043c39) popup_fep_china_uni_window_g2_ParamLimits

0x466b,	// (0x00043c39) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0004ecf0) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0004ecf0) popup_fep_china_uni_window_g

0xa381,	// (0x0004994f) fep_china_uni_eep_pane_g1

0xa389,	// (0x00049957) fep_china_uni_eep_pane_t1

0x9e05,	// (0x000493d3) aid_touch_area_size_smil_player

0x5034,	// (0x00044602) lc0_clock_pane

0x521b,	// (0x000447e9) status_pane_g5_ParamLimits

0x521b,	// (0x000447e9) status_pane_g5

0xc2f6,	// (0x0004b8c4) popup_keymap_window

0x51d9,	// (0x000447a7) status_icon_pane

0x9ff3,	// (0x000495c1) cell_ai5_widget_pane_g3_ParamLimits

0xa00a,	// (0x000495d8) cell_ai5_widget_pane_g4_ParamLimits

0xa016,	// (0x000495e4) cell_ai5_widget_pane_g5_ParamLimits

0xa03a,	// (0x00049608) cell_ai5_widget_pane_g8_ParamLimits

0xa03a,	// (0x00049608) cell_ai5_widget_pane_g8

0xa04e,	// (0x0004961c) cell_ai5_widget_pane_g9_ParamLimits

0xa04e,	// (0x0004961c) cell_ai5_widget_pane_g9

0xa062,	// (0x00049630) cell_ai5_widget_pane_g10_ParamLimits

0xa062,	// (0x00049630) cell_ai5_widget_pane_g10

0xa398,	// (0x00049966) status_icon_pane_g1

0x354f,	// (0x00042b1d) bg_popup_sub_pane_cp13

0xa3a0,	// (0x0004996e) popup_keymap_window_t1

0xd5b8,	// (0x0004cb86) control_pane_g6_ParamLimits

0xd5b8,	// (0x0004cb86) control_pane_g6

0xd5c5,	// (0x0004cb93) control_pane_g7_ParamLimits

0xd5c5,	// (0x0004cb93) control_pane_g7

0xd5d2,	// (0x0004cba0) control_pane_g8_ParamLimits

0xd5d2,	// (0x0004cba0) control_pane_g8

0xf25e,	// (0x0004e82c) dt_sta_controll_pane_ParamLimits

0xf26b,	// (0x0004e839) dt_sta_indi_pane_ParamLimits

0xf278,	// (0x0004e846) dt_sta_title_pane_ParamLimits

0x3dea,	// (0x000433b8) aid_size_touch_scroll_bar_cale

0x1114,	// (0x000406e2) popup_discreet_window_ParamLimits

0x1114,	// (0x000406e2) popup_discreet_window

0xbe87,	// (0x0004b455) popup_sk_window

0x5a05,	// (0x00044fd3) bg_popup_sub_pane_cp28_ParamLimits

0x5a05,	// (0x00044fd3) bg_popup_sub_pane_cp28

0xa3ae,	// (0x0004997c) popup_discreet_window_g1_ParamLimits

0xa3ae,	// (0x0004997c) popup_discreet_window_g1

0xa3ce,	// (0x0004999c) popup_discreet_window_t1_ParamLimits

0xa3ce,	// (0x0004999c) popup_discreet_window_t1

0xa3ec,	// (0x000499ba) popup_discreet_window_t2_ParamLimits

0xa3ec,	// (0x000499ba) popup_discreet_window_t2

0x0002,

0xfe8f,	// (0x0004f45d) popup_discreet_window_t_ParamLimits

0xfe8f,	// (0x0004f45d) popup_discreet_window_t

0x316f,	// (0x0004273d) popup_sk_window_g1

0x3179,	// (0x00042747) popup_sk_window_g2

0x0001,

0xfe96,	// (0x0004f464) popup_sk_window_g

0x3183,	// (0x00042751) popup_sk_window_t1

0x3191,	// (0x0004275f) popup_sk_window_t1_copy1

0x9fe3,	// (0x000495b1) cell_ai5_widget_pane_g2_ParamLimits

0xa13c,	// (0x0004970a) cell_ai5_widget_pane_t9_ParamLimits

0xa13c,	// (0x0004970a) cell_ai5_widget_pane_t9

0x354f,	// (0x00042b1d) main_fep_fshwr2_pane

0xcd82,	// (0x0004c350) aid_fshwr2_btn_pane

0xcd93,	// (0x0004c361) aid_fshwr2_syb_pane

0xcda4,	// (0x0004c372) aid_fshwr2_txt_pane

0xcdb0,	// (0x0004c37e) fshwr2_func_candi_pane

0xcdcf,	// (0x0004c39d) fshwr2_hwr_syb_pane

0xcdea,	// (0x0004c3b8) fshwr2_icf_pane

0x354f,	// (0x00042b1d) fshwr2_icf_bg_pane

0x3211,	// (0x000427df) fshwr2_icf_pane_t1_ParamLimits

0x3211,	// (0x000427df) fshwr2_icf_pane_t1

0x4531,	// (0x00043aff) fshwr2_func_candi_pane_g1

0xf2a4,	// (0x0004e872) fshwr2_func_candi_row_pane_ParamLimits

0xf2a4,	// (0x0004e872) fshwr2_func_candi_row_pane

0xce16,	// (0x0004c3e4) cell_fshwr2_syb_pane_ParamLimits

0xce16,	// (0x0004c3e4) cell_fshwr2_syb_pane

0x7bdc,	// (0x000471aa) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7bdc,	// (0x000471aa) fshwr2_hwr_syb_pane_g1

0x354f,	// (0x00042b1d) bg_popup_call_pane_cp01

0xce2c,	// (0x0004c3fa) fshwr2_func_candi_cell_pane_ParamLimits

0xce2c,	// (0x0004c3fa) fshwr2_func_candi_cell_pane

0xf2bc,	// (0x0004e88a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf2bc,	// (0x0004e88a) fshwr2_func_candi_cell_bg_pane

0xce61,	// (0x0004c42f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xce61,	// (0x0004c42f) fshwr2_func_candi_cell_pane_g1

0xce90,	// (0x0004c45e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xce90,	// (0x0004c45e) fshwr2_func_candi_cell_pane_t1

0x354f,	// (0x00042b1d) bg_button_pane_cp08

0xa45a,	// (0x00049a28) cell_fshwr2_syb_bg_pane

0xcea3,	// (0x0004c471) cell_fshwr2_syb_bg_pane_g1

0xceab,	// (0x0004c479) cell_fshwr2_syb_bg_pane_t1

0x3ebe,	// (0x0004348c) main_tmo_pane

0xdb9a,	// (0x0004d168) uni_indicator_pane_g1_ParamLimits

0xdbb0,	// (0x0004d17e) uni_indicator_pane_g2_ParamLimits

0xdbc6,	// (0x0004d194) uni_indicator_pane_g3_ParamLimits

0x6560,	// (0x00045b2e) uni_indicator_pane_g4_ParamLimits

0x6560,	// (0x00045b2e) uni_indicator_pane_g4

0x6574,	// (0x00045b42) uni_indicator_pane_g5_ParamLimits

0x6574,	// (0x00045b42) uni_indicator_pane_g5

0x6574,	// (0x00045b42) uni_indicator_pane_g6_ParamLimits

0x6574,	// (0x00045b42) uni_indicator_pane_g6

0xf921,	// (0x0004eeef) uni_indicator_pane_g_ParamLimits

0xe666,	// (0x0004dc34) popup_tmo_note_window_ParamLimits

0xe666,	// (0x0004dc34) popup_tmo_note_window

0x3ebe,	// (0x0004348c) fshwr2_bg_pane

0xce81,	// (0x0004c44f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xce81,	// (0x0004c44f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9b,	// (0x0004f469) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9b,	// (0x0004f469) fshwr2_func_candi_cell_pane_g

0x795e,	// (0x00046f2c) bg_popup_window_pane_cp01

0x32c6,	// (0x00042894) bg_popup_window_pane_g1_cp01

0xa462,	// (0x00049a30) bg_popup_window_pane_cp22_ParamLimits

0xa462,	// (0x00049a30) bg_popup_window_pane_cp22

0xa470,	// (0x00049a3e) listscroll_tmo_link_pane_ParamLimits

0xa470,	// (0x00049a3e) listscroll_tmo_link_pane

0xa4b0,	// (0x00049a7e) popup_tmo_note_window_g1_ParamLimits

0xa4b0,	// (0x00049a7e) popup_tmo_note_window_g1

0xa4bd,	// (0x00049a8b) tmo_note_info_pane_ParamLimits

0xa4bd,	// (0x00049a8b) tmo_note_info_pane

0xf2c8,	// (0x0004e896) list_tmo_note_info_pane_g1_ParamLimits

0xf2c8,	// (0x0004e896) list_tmo_note_info_pane_g1

0xa4ee,	// (0x00049abc) list_tmo_note_info_pane_g2_ParamLimits

0xa4ee,	// (0x00049abc) list_tmo_note_info_pane_g2

0x0001,

0xfea0,	// (0x0004f46e) list_tmo_note_info_pane_g_ParamLimits

0xfea0,	// (0x0004f46e) list_tmo_note_info_pane_g

0xa50a,	// (0x00049ad8) list_tmo_note_info_text_pane_ParamLimits

0xa50a,	// (0x00049ad8) list_tmo_note_info_text_pane

0xa58b,	// (0x00049b59) list_tmo_link_pane

0xa598,	// (0x00049b66) scroll_pane_cp20

0xa5a5,	// (0x00049b73) list_single_tmo_link_pane_ParamLimits

0xa5a5,	// (0x00049b73) list_single_tmo_link_pane

0xa5b5,	// (0x00049b83) list_single_tmo_link_pane_t1

0xa5c3,	// (0x00049b91) list_tmo_note_info_text_pane_t1_ParamLimits

0xa5c3,	// (0x00049b91) list_tmo_note_info_text_pane_t1

0xd260,	// (0x0004c82e) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd260,	// (0x0004c82e) aid_size_touch_scroll_bar_cp01

0xba1b,	// (0x0004afe9) aid_size_touch_slider_marker

0xbe77,	// (0x0004b445) popup_settings_window_ParamLimits

0xbe77,	// (0x0004b445) popup_settings_window

0x0697,	// (0x0003fc65) popup_candi_list_indi_window

0x4ee4,	// (0x000444b2) aid_touch_navi_pane_ParamLimits

0x2982,	// (0x00041f50) rs_clock_indi_pane

0x298b,	// (0x00041f59) sctrl_sk_bottom_pane_ParamLimits

0x299c,	// (0x00041f6a) sctrl_sk_top_pane_ParamLimits

0x2a83,	// (0x00042051) popup_fep_tooltip_window

0x9f59,	// (0x00049527) aid_size_cell_widget_grid_ParamLimits

0x9fce,	// (0x0004959c) cell_ai5_widget_pane_g1_ParamLimits

0x9fce,	// (0x0004959c) cell_ai5_widget_pane_g1

0xa022,	// (0x000495f0) cell_ai5_widget_pane_g6_ParamLimits

0xa02e,	// (0x000495fc) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1e,	// (0x0004f3ec) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x0004f3ec) cell_ai5_widget_pane_g

0xa160,	// (0x0004972e) cell_ai5_widget_pane_t10_ParamLimits

0xa160,	// (0x0004972e) cell_ai5_widget_pane_t10

0xa17e,	// (0x0004974c) grid_ai5_widget_pane_ParamLimits

0xa21f,	// (0x000497ed) cell_contacts_ai5_widget_pane_ParamLimits

0xa21f,	// (0x000497ed) cell_contacts_ai5_widget_pane

0xa401,	// (0x000499cf) popup_discreet_window_t3_ParamLimits

0xa401,	// (0x000499cf) popup_discreet_window_t3

0xce02,	// (0x0004c3d0) popup_fshwr2_char_preview_window_ParamLimits

0xce02,	// (0x0004c3d0) popup_fshwr2_char_preview_window

0xf2df,	// (0x0004e8ad) tmo_note_info_pane_t1

0xf2f4,	// (0x0004e8c2) tmo_note_info_pane_t2

0xf30b,	// (0x0004e8d9) tmo_note_info_pane_t3

0xa567,	// (0x00049b35) tmo_note_info_pane_t4

0xa579,	// (0x00049b47) tmo_note_info_pane_t5

0x0004,

0xfea5,	// (0x0004f473) tmo_note_info_pane_t

0xa58b,	// (0x00049b59) list_tmo_link_pane_ParamLimits

0xa598,	// (0x00049b66) scroll_pane_cp20_ParamLimits

0x354f,	// (0x00042b1d) bg_popup_fep_char_preview_window_cp01

0xa5dc,	// (0x00049baa) popup_fshwr2_char_preview_window_t1

0xa5ea,	// (0x00049bb8) popup_candi_list_indi_window_g1

0xa5f3,	// (0x00049bc1) bg_cell_contacts_ai5_widget_pane

0xa5ff,	// (0x00049bcd) cell_contacts_ai5_widget_pane_g1

0x7ffc,	// (0x000475ca) cell_contacts_ai5_widget_pane_g2

0xa614,	// (0x00049be2) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb0,	// (0x0004f47e) cell_contacts_ai5_widget_pane_g

0xa620,	// (0x00049bee) cell_contacts_ai5_widget_pane_t1

0x3ebe,	// (0x0004348c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf385,	// (0x0004e953) settings_container_pane

0x4b44,	// (0x00044112) listscroll_set_pane_copy1

0x7047,	// (0x00046615) scroll_pane_cp121_copy1

0xa6a3,	// (0x00049c71) set_content_pane_copy1

0xf391,	// (0x0004e95f) aid_height_set_list_copy1_ParamLimits

0xf391,	// (0x0004e95f) aid_height_set_list_copy1

0x676c,	// (0x00045d3a) aid_size_parent_copy1_ParamLimits

0x676c,	// (0x00045d3a) aid_size_parent_copy1

0xf39d,	// (0x0004e96b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf39d,	// (0x0004e96b) button_value_adjust_pane_cp6_copy1

0x4e82,	// (0x00044450) list_highlight_pane_cp2_copy1_ParamLimits

0x4e82,	// (0x00044450) list_highlight_pane_cp2_copy1

0xf3b1,	// (0x0004e97f) list_set_pane_copy1_ParamLimits

0xf3b1,	// (0x0004e97f) list_set_pane_copy1

0xf320,	// (0x0004e8ee) main_pane_set_t1_copy1_ParamLimits

0xf320,	// (0x0004e8ee) main_pane_set_t1_copy1

0xf35a,	// (0x0004e928) main_pane_set_t2_copy1_ParamLimits

0xf35a,	// (0x0004e928) main_pane_set_t2_copy1

0xf45e,	// (0x0004ea2c) main_pane_set_t3_copy1

0xf46c,	// (0x0004ea3a) main_pane_set_t4_copy1

0xf379,	// (0x0004e947) set_content_pane_g1_copy1_ParamLimits

0xf379,	// (0x0004e947) set_content_pane_g1_copy1

0xf47a,	// (0x0004ea48) setting_code_pane_copy1

0xa79c,	// (0x00049d6a) setting_slider_graphic_pane_copy1

0xa79c,	// (0x00049d6a) setting_slider_pane_copy1

0xa79c,	// (0x00049d6a) setting_text_pane_copy1

0xa79c,	// (0x00049d6a) setting_volume_pane_copy1

0xf47a,	// (0x0004ea48) settings_code_pane_cp2_copy1

0xf482,	// (0x0004ea50) settings_code_pane_cp_copy1_ParamLimits

0xf482,	// (0x0004ea50) settings_code_pane_cp_copy1

0xceba,	// (0x0004c488) volume_set_pane_copy1

0xf496,	// (0x0004ea64) volume_set_pane_g10_copy1

0xf49e,	// (0x0004ea6c) volume_set_pane_g1_copy1

0xf4a6,	// (0x0004ea74) volume_set_pane_g2_copy1

0xf4ae,	// (0x0004ea7c) volume_set_pane_g3_copy1

0xf4b6,	// (0x0004ea84) volume_set_pane_g4_copy1

0xf4be,	// (0x0004ea8c) volume_set_pane_g5_copy1

0xf4c6,	// (0x0004ea94) volume_set_pane_g6_copy1

0xf4ce,	// (0x0004ea9c) volume_set_pane_g7_copy1

0xf4d6,	// (0x0004eaa4) volume_set_pane_g8_copy1

0xf4de,	// (0x0004eaac) volume_set_pane_g9_copy1

0x3643,	// (0x00042c11) bg_set_opt_pane_cp_copy1_ParamLimits

0x3643,	// (0x00042c11) bg_set_opt_pane_cp_copy1

0x32d7,	// (0x000428a5) setting_slider_pane_t1_copy1_ParamLimits

0x32d7,	// (0x000428a5) setting_slider_pane_t1_copy1

0xcec2,	// (0x0004c490) setting_slider_pane_t2_copy1_ParamLimits

0xcec2,	// (0x0004c490) setting_slider_pane_t2_copy1

0xcedc,	// (0x0004c4aa) setting_slider_pane_t3_copy1_ParamLimits

0xcedc,	// (0x0004c4aa) setting_slider_pane_t3_copy1

0xcef4,	// (0x0004c4c2) slider_set_pane_copy1_ParamLimits

0xcef4,	// (0x0004c4c2) slider_set_pane_copy1

0x3f0d,	// (0x000434db) set_opt_bg_pane_g1_copy2

0x3f15,	// (0x000434e3) set_opt_bg_pane_g2_copy2

0xa808,	// (0x00049dd6) set_opt_bg_pane_g3_copy2

0x3f25,	// (0x000434f3) set_opt_bg_pane_g4_copy2

0x3f2d,	// (0x000434fb) set_opt_bg_pane_g5_copy2

0x3f35,	// (0x00043503) set_opt_bg_pane_g6_copy2

0xf4e6,	// (0x0004eab4) set_opt_bg_pane_g7_copy2

0xa81a,	// (0x00049de8) set_opt_bg_pane_g8_copy2

0xa824,	// (0x00049df2) set_opt_bg_pane_g9_copy2

0x333d,	// (0x0004290b) aid_size_touch_slider_mark_copy1_ParamLimits

0x333d,	// (0x0004290b) aid_size_touch_slider_mark_copy1

0xa82e,	// (0x00049dfc) slider_set_pane_g1_copy1

0x3351,	// (0x0004291f) slider_set_pane_g2_copy1

0x22bd,	// (0x0004188b) slider_set_pane_g3_copy1_ParamLimits

0x22bd,	// (0x0004188b) slider_set_pane_g3_copy1

0x22d1,	// (0x0004189f) slider_set_pane_g4_copy1_ParamLimits

0x22d1,	// (0x0004189f) slider_set_pane_g4_copy1

0x22e9,	// (0x000418b7) slider_set_pane_g5_copy1_ParamLimits

0x22e9,	// (0x000418b7) slider_set_pane_g5_copy1

0x22bd,	// (0x0004188b) slider_set_pane_g6_copy1_ParamLimits

0x22bd,	// (0x0004188b) slider_set_pane_g6_copy1

0xcf0a,	// (0x0004c4d8) slider_set_pane_g7_copy1_ParamLimits

0xcf0a,	// (0x0004c4d8) slider_set_pane_g7_copy1

0x3563,	// (0x00042b31) bg_set_opt_pane_cp2_copy1

0xa837,	// (0x00049e05) setting_slider_graphic_pane_g1_copy1

0xf4ee,	// (0x0004eabc) setting_slider_graphic_pane_t1_copy1

0xf4fe,	// (0x0004eacc) setting_slider_graphic_pane_t2_copy1

0xf50e,	// (0x0004eadc) slider_set_pane_cp_copy1

0xa870,	// (0x00049e3e) input_focus_pane_cp1_copy1

0xa879,	// (0x00049e47) list_set_text_pane_copy1

0xa881,	// (0x00049e4f) setting_text_pane_g1_copy1

0xbd25,	// (0x0004b2f3) set_text_pane_t1_copy1

0xa870,	// (0x00049e3e) input_focus_pane_cp2_copy1

0xa881,	// (0x00049e4f) setting_code_pane_g1_copy1

0xf516,	// (0x0004eae4) setting_code_pane_t1_copy1

0x6e71,	// (0x0004643f) list_set_graphic_pane_copy1

0x3563,	// (0x00042b31) bg_set_opt_pane_cp4_copy1

0xd433,	// (0x0004ca01) list_set_graphic_pane_g1_copy1_ParamLimits

0xd433,	// (0x0004ca01) list_set_graphic_pane_g1_copy1

0xf524,	// (0x0004eaf2) list_set_graphic_pane_g2_copy1

0xd44b,	// (0x0004ca19) list_set_graphic_pane_t1_copy1_ParamLimits

0xd44b,	// (0x0004ca19) list_set_graphic_pane_t1_copy1

0x795e,	// (0x00046f2c) rs_clock_indi_pane_g1

0xa8b2,	// (0x00049e80) rs_clock_indi_pane_t1

0xa8c0,	// (0x00049e8e) rs_indi_pane

0xa8c8,	// (0x00049e96) rs_indi_pane_g1

0xa8d1,	// (0x00049e9f) rs_indi_pane_g2

0xa8da,	// (0x00049ea8) rs_indi_pane_g3

0x0002,

0xfeb7,	// (0x0004f485) rs_indi_pane_g

0x4b44,	// (0x00044112) bg_popup_preview_window_pane_cp03

0xa8e3,	// (0x00049eb1) popup_fep_tooltip_window_t1

0x85da,	// (0x00047ba8) popup_note2_window_g2_ParamLimits

0x85da,	// (0x00047ba8) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0004f21e) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0004f21e) popup_note2_window_g

0x8ad5,	// (0x000480a3) bg_popup_sub_pane_cp11_ParamLimits

0x8ae2,	// (0x000480b0) cell_ai3_links_pane_g1_ParamLimits

0x8af9,	// (0x000480c7) cell_ai3_links_pane_t1

0xbd25,	// (0x0004b2f3) set_text_pane_t1_copy1_ParamLimits

0x4a55,	// (0x00044023) cell_graphic_popup_pane_cp2_ParamLimits

0x4a55,	// (0x00044023) cell_graphic_popup_pane_cp2

0xa8f1,	// (0x00049ebf) cell_graphic_popup_pane_g1_cp2

0x3bfd,	// (0x000431cb) cell_graphic_popup_pane_g2_cp2

0xa8f9,	// (0x00049ec7) cell_graphic_popup_pane_g3_cp2

0xa901,	// (0x00049ecf) cell_graphic_popup_pane_t2_cp2

0x3c0e,	// (0x000431dc) grid_highlight_pane_cp3_cp2

0x4252,	// (0x00043820) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3ebe,	// (0x0004348c) main_tmo_pane_ParamLimits

0xe65a,	// (0x0004dc28) popup_tmo_big_image_note_window

0x9fbd,	// (0x0004958b) cell_ai5_widget_list_pane

0x9fc5,	// (0x00049593) cell_ai5_widget_lrg_icon_pane

0xf2df,	// (0x0004e8ad) tmo_note_info_pane_t1_ParamLimits

0xf2f4,	// (0x0004e8c2) tmo_note_info_pane_t2_ParamLimits

0xf30b,	// (0x0004e8d9) tmo_note_info_pane_t3_ParamLimits

0xa567,	// (0x00049b35) tmo_note_info_pane_t4_ParamLimits

0xa579,	// (0x00049b47) tmo_note_info_pane_t5_ParamLimits

0xfea5,	// (0x0004f473) tmo_note_info_pane_t_ParamLimits

0xf385,	// (0x0004e953) settings_container_pane_ParamLimits

0xa868,	// (0x00049e36) indicator_popup_pane_cp5

0xa868,	// (0x00049e36) indicator_popup_pane_cp6

0x6e71,	// (0x0004643f) list_set_graphic_pane_copy1_ParamLimits

0x354f,	// (0x00042b1d) bg_popup_window_pane_cp23

0xa90f,	// (0x00049edd) popup_tmo_big_image_note_window_g1

0xa919,	// (0x00049ee7) popup_tmo_big_image_note_window_t1

0xa929,	// (0x00049ef7) popup_tmo_big_image_note_window_t2

0xa939,	// (0x00049f07) popup_tmo_big_image_note_window_t3

0x0002,

0xfebe,	// (0x0004f48c) popup_tmo_big_image_note_window_t

0x795e,	// (0x00046f2c) cell_ai5_widget_lrg_icon_pane_g1

0xa949,	// (0x00049f17) cell_ai5_widget_lrg_icon_pane_t1

0xa957,	// (0x00049f25) cell_ai5_widget_list_row_pane_ParamLimits

0xa957,	// (0x00049f25) cell_ai5_widget_list_row_pane

0xa96e,	// (0x00049f3c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa96e,	// (0x00049f3c) cell_ai5_widget_list_row_pane_g1

0xa97b,	// (0x00049f49) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa97b,	// (0x00049f49) cell_ai5_widget_list_row_pane_t1

0xa9ac,	// (0x00049f7a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa9ac,	// (0x00049f7a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec5,	// (0x0004f493) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec5,	// (0x0004f493) cell_ai5_widget_list_row_pane_t

0x354f,	// (0x00042b1d) main_fep_vtchi_ss_pane

0x338b,	// (0x00042959) popup_fep_char_pre_window

0x3393,	// (0x00042961) popup_fep_ituss_window

0x33b4,	// (0x00042982) popup_fep_vkbss_window

0xa9d4,	// (0x00049fa2) grid_vkbss_keypad_pane_ParamLimits

0xa9d4,	// (0x00049fa2) grid_vkbss_keypad_pane

0xa9e4,	// (0x00049fb2) ituss_keypad_pane

0x33df,	// (0x000429ad) aid_vkbss_key_offset_ParamLimits

0x33df,	// (0x000429ad) aid_vkbss_key_offset

0x33eb,	// (0x000429b9) cell_vkbss_key_pane_ParamLimits

0x33eb,	// (0x000429b9) cell_vkbss_key_pane

0xa9f3,	// (0x00049fc1) bg_cell_vkbss_key_g1_ParamLimits

0xa9f3,	// (0x00049fc1) bg_cell_vkbss_key_g1

0xa9ff,	// (0x00049fcd) cell_vkbss_key_3p_pane_ParamLimits

0xa9ff,	// (0x00049fcd) cell_vkbss_key_3p_pane

0xaa19,	// (0x00049fe7) cell_vkbss_key_g1_ParamLimits

0xaa19,	// (0x00049fe7) cell_vkbss_key_g1

0xaa33,	// (0x0004a001) cell_vkbss_key_t1_ParamLimits

0xaa33,	// (0x0004a001) cell_vkbss_key_t1

0x3401,	// (0x000429cf) cell_ituss_key_pane_ParamLimits

0x3401,	// (0x000429cf) cell_ituss_key_pane

0xaa5e,	// (0x0004a02c) bg_cell_ituss_key_g1_ParamLimits

0xaa5e,	// (0x0004a02c) bg_cell_ituss_key_g1

0xaa6a,	// (0x0004a038) cell_ituss_key_pane_g1_ParamLimits

0xaa6a,	// (0x0004a038) cell_ituss_key_pane_g1

0x3412,	// (0x000429e0) cell_ituss_key_pane_g2_ParamLimits

0x3412,	// (0x000429e0) cell_ituss_key_pane_g2

0x0002,

0xfecc,	// (0x0004f49a) cell_ituss_key_pane_g_ParamLimits

0xfecc,	// (0x0004f49a) cell_ituss_key_pane_g

0x343e,	// (0x00042a0c) cell_ituss_key_t1_ParamLimits

0x343e,	// (0x00042a0c) cell_ituss_key_t1

0x3478,	// (0x00042a46) cell_ituss_key_t2_ParamLimits

0x3478,	// (0x00042a46) cell_ituss_key_t2

0x34a9,	// (0x00042a77) cell_ituss_key_t3_ParamLimits

0x34a9,	// (0x00042a77) cell_ituss_key_t3

0x3478,	// (0x00042a46) cell_ituss_key_t4_ParamLimits

0x3478,	// (0x00042a46) cell_ituss_key_t4

0x0004,

0xfed3,	// (0x0004f4a1) cell_ituss_key_t_ParamLimits

0xfed3,	// (0x0004f4a1) cell_ituss_key_t

0xaaa6,	// (0x0004a074) cell_vkbss_key_3p_pane_g1

0xaa96,	// (0x0004a064) cell_vkbss_key_3p_pane_g2

0xaa9e,	// (0x0004a06c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x0004f4ac) cell_vkbss_key_3p_pane_g

0x354f,	// (0x00042b1d) bg_popup_fep_char_preview_window_cp02

0x34ec,	// (0x00042aba) popup_fep_char_pre_window_t1

0xf22e,	// (0x0004e7fc) main_ai5_sk_pane

0xa5f3,	// (0x00049bc1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa5ff,	// (0x00049bcd) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7ffc,	// (0x000475ca) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa614,	// (0x00049be2) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb0,	// (0x0004f47e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa620,	// (0x00049bee) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3ebe,	// (0x0004348c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf52c,	// (0x0004eafa) main_ai5_sk_pane_g1

0x583e,	// (0x00044e0c) popup_query_code_window_g1

0x33a9,	// (0x00042977) popup_fep_vkb_icf_pane

0x33bd,	// (0x0004298b) popup_fep_vtchi_icf_pane

0xaab7,	// (0x0004a085) bg_icf_pane

0xaac3,	// (0x0004a091) list_vkb_icf_pane

0xaacf,	// (0x0004a09d) bg_icf_pane_cp01

0xaadb,	// (0x0004a0a9) vtchi_icf_list_pane

0xaaec,	// (0x0004a0ba) list_vkb_icf_pane_t1_ParamLimits

0xaaec,	// (0x0004a0ba) list_vkb_icf_pane_t1

0xab02,	// (0x0004a0d0) vtchi_icf_list_pane_t1_ParamLimits

0xab02,	// (0x0004a0d0) vtchi_icf_list_pane_t1

0x3393,	// (0x00042961) popup_fep_ituss_window_ParamLimits

0x33bd,	// (0x0004298b) popup_fep_vtchi_icf_pane_ParamLimits

0xa9e4,	// (0x00049fb2) ituss_keypad_pane_ParamLimits

0x33d3,	// (0x000429a1) ituss_sks_pane

0xaab7,	// (0x0004a085) bg_icf_pane_ParamLimits

0x336f,	// (0x0004293d) icf_edit_indi_pane_ParamLimits

0x336f,	// (0x0004293d) icf_edit_indi_pane

0xaac3,	// (0x0004a091) list_vkb_icf_pane_ParamLimits

0xaacf,	// (0x0004a09d) bg_icf_pane_cp01_ParamLimits

0x337e,	// (0x0004294c) icf_edit_indi_pane_cp01_ParamLimits

0x337e,	// (0x0004294c) icf_edit_indi_pane_cp01

0xaae3,	// (0x0004a0b1) vtchi_query_pane

0x7bdc,	// (0x000471aa) icf_edit_indi_pane_g1_ParamLimits

0x7bdc,	// (0x000471aa) icf_edit_indi_pane_g1

0x350e,	// (0x00042adc) icf_edit_indi_pane_g2_ParamLimits

0x350e,	// (0x00042adc) icf_edit_indi_pane_g2

0x0001,

0xfef6,	// (0x0004f4c4) icf_edit_indi_pane_g_ParamLimits

0xfef6,	// (0x0004f4c4) icf_edit_indi_pane_g

0x351d,	// (0x00042aeb) icf_edit_indi_pane_t1

0xab1c,	// (0x0004a0ea) bg_input_focus_pane_cp042

0x3de1,	// (0x000433af) vtchi_button_pane

0xab25,	// (0x0004a0f3) vtchi_query_pane_t1

0xab33,	// (0x0004a101) vtchi_query_pane_t2

0xab41,	// (0x0004a10f) vtchi_query_pane_t3

0x0002,

0xfee5,	// (0x0004f4b3) vtchi_query_pane_t

0x354f,	// (0x00042b1d) bg_button_pane_cp13

0xab4f,	// (0x0004a11d) vtchi_button_pane_g1

0x34fb,	// (0x00042ac9) ituss_sks_pane_g1

0x3506,	// (0x00042ad4) ituss_sks_pane_g2

0x0001,

0xfeec,	// (0x0004f4ba) ituss_sks_pane_g

0xab57,	// (0x0004a125) ituss_sks_pane_t1

0xab65,	// (0x0004a133) ituss_sks_pane_t2

0x0001,

0xfef1,	// (0x0004f4bf) ituss_sks_pane_t

0x73c1,	// (0x0004698f) indicator_nsta_pane_cp_g1

0x73ca,	// (0x00046998) indicator_nsta_pane_cp_g2

0x73d2,	// (0x000469a0) indicator_nsta_pane_cp_g3

0x73da,	// (0x000469a8) indicator_nsta_pane_cp_g4

0x73e2,	// (0x000469b0) indicator_nsta_pane_cp_g5

0x73e2,	// (0x000469b0) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0004f068) indicator_nsta_pane_cp_g

0xf040,	// (0x0004e60e) cell_graphic2_pane_t2_ParamLimits

0xf040,	// (0x0004e60e) cell_graphic2_pane_t2

0x0001,

0xfda7,	// (0x0004f375) cell_graphic2_pane_t_ParamLimits

0xfda7,	// (0x0004f375) cell_graphic2_pane_t

0xf076,	// (0x0004e644) cell_graphic2_control_pane_t1

0xd407,	// (0x0004c9d5) signal_pane_g3_ParamLimits

0xd407,	// (0x0004c9d5) signal_pane_g3

0xd41b,	// (0x0004c9e9) signal_pane_g4_ParamLimits

0xd41b,	// (0x0004c9e9) signal_pane_g4

0xa9be,	// (0x00049f8c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa9be,	// (0x00049f8c) cell_ai5_widget_list_row_pane_t3

0xaa84,	// (0x0004a052) cell_ituss_key_pane_t1_ParamLimits

0xaa84,	// (0x0004a052) cell_ituss_key_pane_t1

0x5491,	// (0x00044a5f) form_field_data_wide_pane_vc_t2_ParamLimits

0x5491,	// (0x00044a5f) form_field_data_wide_pane_vc_t2

0x54a5,	// (0x00044a73) form_field_data_wide_pane_vc_t3_ParamLimits

0x54a5,	// (0x00044a73) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0004edd7) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0004edd7) form_field_data_wide_pane_vc_t

0x7089,	// (0x00046657) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7089,	// (0x00046657) form_field_slider_wide_pane_vc_t3

0x7167,	// (0x00046735) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7167,	// (0x00046735) form_field_popup_wide_pane_vc_t2

0x717e,	// (0x0004674c) form_field_popup_wide_pane_vc_t3_ParamLimits

0x717e,	// (0x0004674c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0004f057) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0004f057) form_field_popup_wide_pane_vc_t

0xcd82,	// (0x0004c350) aid_fshwr2_btn_pane_ParamLimits

0xcd93,	// (0x0004c361) aid_fshwr2_syb_pane_ParamLimits

0xcda4,	// (0x0004c372) aid_fshwr2_txt_pane_ParamLimits

0x3ebe,	// (0x0004348c) fshwr2_bg_pane_ParamLimits

0xcdb0,	// (0x0004c37e) fshwr2_func_candi_pane_ParamLimits

0xcdcf,	// (0x0004c39d) fshwr2_hwr_syb_pane_ParamLimits

0xcdea,	// (0x0004c3b8) fshwr2_icf_pane_ParamLimits

0x249d,	// (0x00041a6b) list_double_graphic_pane_vc_g4_ParamLimits

0x249d,	// (0x00041a6b) list_double_graphic_pane_vc_g4

0x3432,	// (0x00042a00) cell_ituss_key_pane_g3_ParamLimits

0x3432,	// (0x00042a00) cell_ituss_key_pane_g3

0x34da,	// (0x00042aa8) cell_ituss_key_t5_ParamLimits

0x34da,	// (0x00042aa8) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
