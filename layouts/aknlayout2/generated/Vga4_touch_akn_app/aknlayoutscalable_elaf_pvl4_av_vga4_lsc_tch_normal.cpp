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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000015d9 };

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
0xa458,	// (0x0000ba31) Screen

0xa464,	// (0x0000ba3d) application_window_ParamLimits

0xa464,	// (0x0000ba3d) application_window

0xea4c,	// (0x00010025) screen_g1

0xa49c,	// (0x0000ba75) area_bottom_pane_ParamLimits

0xa49c,	// (0x0000ba75) area_bottom_pane

0xea76,	// (0x0001004f) area_top_pane_ParamLimits

0xea76,	// (0x0001004f) area_top_pane

0xeb0a,	// (0x000100e3) main_pane_ParamLimits

0xeb0a,	// (0x000100e3) main_pane

0xebc5,	// (0x0001019e) misc_graphics

0xbdda,	// (0x0000d3b3) battery_pane_ParamLimits

0xbdda,	// (0x0000d3b3) battery_pane

0x2c3e,	// (0x00004217) bg_status_flat_pane_g8

0x2c46,	// (0x0000421f) bg_status_flat_pane_g9

0x1da8,	// (0x00003381) context_pane_ParamLimits

0x1da8,	// (0x00003381) context_pane

0xbf51,	// (0x0000d52a) navi_pane_ParamLimits

0xbf51,	// (0x0000d52a) navi_pane

0xbfdb,	// (0x0000d5b4) signal_pane_ParamLimits

0xbfdb,	// (0x0000d5b4) signal_pane

0x0008,

0xf843,	// (0x00010e1c) bg_status_flat_pane_g

0xc06b,	// (0x0000d644) status_pane_g1_ParamLimits

0xc06b,	// (0x0000d644) status_pane_g1

0xc081,	// (0x0000d65a) status_pane_g2_ParamLimits

0xc081,	// (0x0000d65a) status_pane_g2

0x1fe1,	// (0x000035ba) status_pane_g3_ParamLimits

0x1fe1,	// (0x000035ba) status_pane_g3

0x0004,

0xf776,	// (0x00010d4f) status_pane_g_ParamLimits

0xf776,	// (0x00010d4f) status_pane_g

0xc08d,	// (0x0000d666) title_pane_ParamLimits

0xc08d,	// (0x0000d666) title_pane

0xc0f4,	// (0x0000d6cd) uni_indicator_pane_ParamLimits

0xc0f4,	// (0x0000d6cd) uni_indicator_pane

0x15cf,	// (0x00002ba8) bg_list_pane_ParamLimits

0x15cf,	// (0x00002ba8) bg_list_pane

0xb614,	// (0x0000cbed) find_pane

0x23b5,	// (0x0000398e) listscroll_app_pane_ParamLimits

0x23b5,	// (0x0000398e) listscroll_app_pane

0x1603,	// (0x00002bdc) listscroll_form_pane

0xb61c,	// (0x0000cbf5) listscroll_gen_pane_ParamLimits

0xb61c,	// (0x0000cbf5) listscroll_gen_pane

0x161f,	// (0x00002bf8) listscroll_set_pane

0x3a4b,	// (0x00005024) main_idle_act_pane

0x1099,	// (0x00002672) main_idle_trad_pane

0x1099,	// (0x00002672) main_list_empty_pane

0x15f7,	// (0x00002bd0) main_midp_pane

0x1639,	// (0x00002c12) main_pane_g1_ParamLimits

0x1639,	// (0x00002c12) main_pane_g1

0xb630,	// (0x0000cc09) popup_ai_message_window_ParamLimits

0xb630,	// (0x0000cc09) popup_ai_message_window

0xb6d0,	// (0x0000cca9) popup_fep_china_uni_window_ParamLimits

0xb6d0,	// (0x0000cca9) popup_fep_china_uni_window

0x1763,	// (0x00002d3c) popup_fep_japan_candidate_window_ParamLimits

0x1763,	// (0x00002d3c) popup_fep_japan_candidate_window

0x178d,	// (0x00002d66) popup_fep_japan_predictive_window_ParamLimits

0x178d,	// (0x00002d66) popup_fep_japan_predictive_window

0xb730,	// (0x0000cd09) popup_find_window

0xb74d,	// (0x0000cd26) popup_grid_graphic_window_ParamLimits

0xb74d,	// (0x0000cd26) popup_grid_graphic_window

0x1800,	// (0x00002dd9) popup_large_graphic_colour_window

0xb7f7,	// (0x0000cdd0) popup_menu_window_ParamLimits

0xb7f7,	// (0x0000cdd0) popup_menu_window

0xb9e7,	// (0x0000cfc0) popup_note_image_window

0xb9a7,	// (0x0000cf80) popup_note_wait_window_ParamLimits

0xb9a7,	// (0x0000cf80) popup_note_wait_window

0xb9ff,	// (0x0000cfd8) popup_note_window_ParamLimits

0xb9ff,	// (0x0000cfd8) popup_note_window

0xbaad,	// (0x0000d086) popup_query_code_window_ParamLimits

0xbaad,	// (0x0000d086) popup_query_code_window

0x1a6c,	// (0x00003045) popup_query_data_code_window_ParamLimits

0x1a6c,	// (0x00003045) popup_query_data_code_window

0xbaed,	// (0x0000d0c6) popup_query_data_window_ParamLimits

0xbaed,	// (0x0000d0c6) popup_query_data_window

0xbb81,	// (0x0000d15a) popup_query_sat_info_window_ParamLimits

0xbb81,	// (0x0000d15a) popup_query_sat_info_window

0xbc2a,	// (0x0000d203) popup_snote_single_graphic_window_ParamLimits

0xbc2a,	// (0x0000d203) popup_snote_single_graphic_window

0xbc2a,	// (0x0000d203) popup_snote_single_text_window_ParamLimits

0xbc2a,	// (0x0000d203) popup_snote_single_text_window

0x1b07,	// (0x000030e0) popup_sub_window_general

0x1c4d,	// (0x00003226) popup_window_general_ParamLimits

0x1c4d,	// (0x00003226) popup_window_general

0x1c66,	// (0x0000323f) power_save_pane

0xb474,	// (0x0000ca4d) control_pane_g1_ParamLimits

0xb474,	// (0x0000ca4d) control_pane_g1

0xb49d,	// (0x0000ca76) control_pane_g2_ParamLimits

0xb49d,	// (0x0000ca76) control_pane_g2

0x145e,	// (0x00002a37) control_pane_g3_ParamLimits

0x145e,	// (0x00002a37) control_pane_g3

0x0007,

0xf75e,	// (0x00010d37) control_pane_g_ParamLimits

0xf75e,	// (0x00010d37) control_pane_g

0xb503,	// (0x0000cadc) control_pane_t1_ParamLimits

0xb503,	// (0x0000cadc) control_pane_t1

0xb569,	// (0x0000cb42) control_pane_t2_ParamLimits

0xb569,	// (0x0000cb42) control_pane_t2

0x0002,

0xf76f,	// (0x00010d48) control_pane_t_ParamLimits

0xf76f,	// (0x00010d48) control_pane_t

0xb3cd,	// (0x0000c9a6) navi_navi_volume_pane_cp1

0xb3d5,	// (0x0000c9ae) status_small_icon_pane

0x1341,	// (0x0000291a) status_small_pane_g1_ParamLimits

0x1341,	// (0x0000291a) status_small_pane_g1

0xb3dd,	// (0x0000c9b6) status_small_pane_g2_ParamLimits

0xb3dd,	// (0x0000c9b6) status_small_pane_g2

0xb3e9,	// (0x0000c9c2) status_small_pane_g3_ParamLimits

0xb3e9,	// (0x0000c9c2) status_small_pane_g3

0xb3f5,	// (0x0000c9ce) status_small_pane_g4_ParamLimits

0xb3f5,	// (0x0000c9ce) status_small_pane_g4

0xb401,	// (0x0000c9da) status_small_pane_g5_ParamLimits

0xb401,	// (0x0000c9da) status_small_pane_g5

0xb40f,	// (0x0000c9e8) status_small_pane_g6_ParamLimits

0xb40f,	// (0x0000c9e8) status_small_pane_g6

0x0007,

0xf74d,	// (0x00010d26) status_small_pane_g_ParamLimits

0xf74d,	// (0x00010d26) status_small_pane_g

0xb43e,	// (0x0000ca17) status_small_pane_t1

0xb460,	// (0x0000ca39) status_small_wait_pane_ParamLimits

0xb460,	// (0x0000ca39) status_small_wait_pane

0xb187,	// (0x0000c760) aid_levels_signal_ParamLimits

0xb187,	// (0x0000c760) aid_levels_signal

0xb19f,	// (0x0000c778) signal_pane_g1_ParamLimits

0xb19f,	// (0x0000c778) signal_pane_g1

0xb1ba,	// (0x0000c793) signal_pane_g2_ParamLimits

0xb1ba,	// (0x0000c793) signal_pane_g2

0x0003,

0xf6de,	// (0x00010cb7) signal_pane_g_ParamLimits

0xf6de,	// (0x00010cb7) signal_pane_g

0x092f,	// (0x00001f08) context_pane_g1

0xa688,	// (0x0000bc61) title_pane_g1

0xa6cb,	// (0x0000bca4) title_pane_t1

0xec2f,	// (0x00010208) title_pane_t2

0xec55,	// (0x0001022e) title_pane_t3

0x0002,

0xf532,	// (0x00010b0b) title_pane_t

0xc11c,	// (0x0000d6f5) aid_levels_battery_ParamLimits

0xc11c,	// (0x0000d6f5) aid_levels_battery

0xc138,	// (0x0000d711) battery_pane_g1_ParamLimits

0xc138,	// (0x0000d711) battery_pane_g1

0xc155,	// (0x0000d72e) battery_pane_g2_ParamLimits

0xc155,	// (0x0000d72e) battery_pane_g2

0x0001,

0xf781,	// (0x00010d5a) battery_pane_g_ParamLimits

0xf781,	// (0x00010d5a) battery_pane_g

0xc54c,	// (0x0000db25) uni_indicator_pane_g1

0xc562,	// (0x0000db3b) uni_indicator_pane_g2

0xc578,	// (0x0000db51) uni_indicator_pane_g3

0x0005,

0xf8eb,	// (0x00010ec4) uni_indicator_pane_g

0x0f07,	// (0x000024e0) navi_icon_pane_ParamLimits

0x0f07,	// (0x000024e0) navi_icon_pane

0x0e43,	// (0x0000241c) navi_midp_pane

0x0f23,	// (0x000024fc) navi_navi_pane

0x0f2d,	// (0x00002506) navi_text_pane_ParamLimits

0x0f2d,	// (0x00002506) navi_text_pane

0xea4c,	// (0x00010025) status_small_wait_pane_g1

0xf023,	// (0x000105fc) status_small_wait_pane_g2

0x0001,

0xf8e6,	// (0x00010ebf) status_small_wait_pane_g

0xc4eb,	// (0x0000dac4) navi_navi_icon_text_pane

0xc4f3,	// (0x0000dacc) navi_navi_pane_g1_ParamLimits

0xc4f3,	// (0x0000dacc) navi_navi_pane_g1

0xc505,	// (0x0000dade) navi_navi_pane_g2_ParamLimits

0xc505,	// (0x0000dade) navi_navi_pane_g2

0x0001,

0xf8b4,	// (0x00010e8d) navi_navi_pane_g_ParamLimits

0xf8b4,	// (0x00010e8d) navi_navi_pane_g

0x3433,	// (0x00004a0c) navi_navi_tabs_pane

0xc517,	// (0x0000daf0) navi_navi_text_pane

0xc4eb,	// (0x0000dac4) navi_navi_volume_pane

0xc4d9,	// (0x0000dab2) navi_text_pane_t1

0xc4cd,	// (0x0000daa6) navi_icon_pane_g1

0x332a,	// (0x00004903) navi_navi_text_pane_t1

0xc4bc,	// (0x0000da95) navi_navi_volume_pane_g1

0xc4c4,	// (0x0000da9d) volume_small_pane

0xc418,	// (0x0000d9f1) navi_navi_icon_text_pane_g1

0xc420,	// (0x0000d9f9) navi_navi_icon_text_pane_t1

0x0f23,	// (0x000024fc) navi_tabs_2_long_pane

0x0f23,	// (0x000024fc) navi_tabs_2_pane

0x0f23,	// (0x000024fc) navi_tabs_3_long_pane

0x0f23,	// (0x000024fc) navi_tabs_3_pane

0x0f23,	// (0x000024fc) navi_tabs_4_pane

0xc3f8,	// (0x0000d9d1) tabs_2_active_pane_ParamLimits

0xc3f8,	// (0x0000d9d1) tabs_2_active_pane

0xc408,	// (0x0000d9e1) tabs_2_passive_pane_ParamLimits

0xc408,	// (0x0000d9e1) tabs_2_passive_pane

0xc3c6,	// (0x0000d99f) tabs_3_active_pane_ParamLimits

0xc3c6,	// (0x0000d99f) tabs_3_active_pane

0xc3d6,	// (0x0000d9af) tabs_3_passive_pane_ParamLimits

0xc3d6,	// (0x0000d9af) tabs_3_passive_pane

0xc3e7,	// (0x0000d9c0) tabs_3_passive_pane_cp_ParamLimits

0xc3e7,	// (0x0000d9c0) tabs_3_passive_pane_cp

0xc382,	// (0x0000d95b) tabs_4_active_pane_ParamLimits

0xc382,	// (0x0000d95b) tabs_4_active_pane

0xc393,	// (0x0000d96c) tabs_4_passive_pane_ParamLimits

0xc393,	// (0x0000d96c) tabs_4_passive_pane

0xc3a4,	// (0x0000d97d) tabs_4_passive_pane_cp_ParamLimits

0xc3a4,	// (0x0000d97d) tabs_4_passive_pane_cp

0xc3b5,	// (0x0000d98e) tabs_4_passive_pane_cp2_ParamLimits

0xc3b5,	// (0x0000d98e) tabs_4_passive_pane_cp2

0xc35e,	// (0x0000d937) tabs_2_long_active_pane_ParamLimits

0xc35e,	// (0x0000d937) tabs_2_long_active_pane

0xc370,	// (0x0000d949) tabs_2_long_passive_pane_ParamLimits

0xc370,	// (0x0000d949) tabs_2_long_passive_pane

0xc313,	// (0x0000d8ec) tabs_3_long_active_pane_ParamLimits

0xc313,	// (0x0000d8ec) tabs_3_long_active_pane

0xc32c,	// (0x0000d905) tabs_3_long_passive_pane_ParamLimits

0xc32c,	// (0x0000d905) tabs_3_long_passive_pane

0xc345,	// (0x0000d91e) tabs_3_long_passive_pane_cp_ParamLimits

0xc345,	// (0x0000d91e) tabs_3_long_passive_pane_cp

0x30a3,	// (0x0000467c) volume_small_pane_g1

0xc2c2,	// (0x0000d89b) volume_small_pane_g2

0xc2cb,	// (0x0000d8a4) volume_small_pane_g3

0xc2d4,	// (0x0000d8ad) volume_small_pane_g4

0xc2dd,	// (0x0000d8b6) volume_small_pane_g5

0xc2e6,	// (0x0000d8bf) volume_small_pane_g6

0xc2ef,	// (0x0000d8c8) volume_small_pane_g7

0xc2f8,	// (0x0000d8d1) volume_small_pane_g8

0xc301,	// (0x0000d8da) volume_small_pane_g9

0xc30a,	// (0x0000d8e3) volume_small_pane_g10

0x0009,

0xf880,	// (0x00010e59) volume_small_pane_g

0xec67,	// (0x00010240) bg_active_tab_pane_cp2_ParamLimits

0xec67,	// (0x00010240) bg_active_tab_pane_cp2

0xa757,	// (0x0000bd30) tabs_3_active_pane_g1

0xa75f,	// (0x0000bd38) tabs_3_active_pane_t1

0xec67,	// (0x00010240) bg_passive_tab_pane_cp2_ParamLimits

0xec67,	// (0x00010240) bg_passive_tab_pane_cp2

0xa757,	// (0x0000bd30) tabs_3_passive_pane_g1

0xa75f,	// (0x0000bd38) tabs_3_passive_pane_t1

0xec67,	// (0x00010240) bg_active_tab_pane_cp3_ParamLimits

0xec67,	// (0x00010240) bg_active_tab_pane_cp3

0xa771,	// (0x0000bd4a) tabs_4_active_pane_g1

0xa779,	// (0x0000bd52) tabs_4_active_pane_t1

0xec67,	// (0x00010240) bg_passive_tab_pane_cp3_ParamLimits

0xec67,	// (0x00010240) bg_passive_tab_pane_cp3

0xa771,	// (0x0000bd4a) tabs_4_1_passive_pane_g1

0xa779,	// (0x0000bd52) tabs_4_1_passive_pane_t1

0x15f7,	// (0x00002bd0) list_highlight_pane_cp2

0xc60b,	// (0x0000dbe4) list_set_pane_ParamLimits

0xc60b,	// (0x0000dbe4) list_set_pane

0xc6cd,	// (0x0000dca6) main_pane_set_t1_ParamLimits

0xc6cd,	// (0x0000dca6) main_pane_set_t1

0xc6ed,	// (0x0000dcc6) main_pane_set_t2_ParamLimits

0xc6ed,	// (0x0000dcc6) main_pane_set_t2

0xc701,	// (0x0000dcda) main_pane_set_t3_ParamLimits

0xc701,	// (0x0000dcda) main_pane_set_t3

0xc715,	// (0x0000dcee) main_pane_set_t4_ParamLimits

0xc715,	// (0x0000dcee) main_pane_set_t4

0x0003,

0xf950,	// (0x00010f29) main_pane_set_t_ParamLimits

0xf950,	// (0x00010f29) main_pane_set_t

0xc729,	// (0x0000dd02) setting_code_pane

0x3b99,	// (0x00005172) setting_slider_graphic_pane

0x3b99,	// (0x00005172) setting_slider_pane

0x3b99,	// (0x00005172) setting_text_pane

0x3b99,	// (0x00005172) setting_volume_pane

0xec75,	// (0x0001024e) volume_set_pane

0xec7f,	// (0x00010258) bg_set_opt_pane_cp

0xec8d,	// (0x00010266) setting_slider_pane_t1

0xeca6,	// (0x0001027f) setting_slider_pane_t2

0xecc0,	// (0x00010299) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00010b12) setting_slider_pane_t

0xecd8,	// (0x000102b1) slider_set_pane

0xebc5,	// (0x0001019e) bg_set_opt_pane_cp2

0xecee,	// (0x000102c7) setting_slider_graphic_pane_g1

0xecf7,	// (0x000102d0) setting_slider_graphic_pane_t1

0xed07,	// (0x000102e0) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00010b19) setting_slider_graphic_pane_t

0xed17,	// (0x000102f0) slider_set_pane_cp

0xebc5,	// (0x0001019e) input_focus_pane_cp1

0x3a32,	// (0x0000500b) list_set_text_pane

0xea4c,	// (0x00010025) setting_text_pane_g1

0xebc5,	// (0x0001019e) input_focus_pane_cp2

0xea4c,	// (0x00010025) setting_code_pane_g1

0xed1f,	// (0x000102f8) setting_code_pane_t1

0xed2d,	// (0x00010306) set_text_pane_t1_ParamLimits

0xed2d,	// (0x00010306) set_text_pane_t1

0xf4b2,	// (0x00010a8b) set_opt_bg_pane_g1

0xf4ba,	// (0x00010a93) set_opt_bg_pane_g2

0x3a0a,	// (0x00004fe3) set_opt_bg_pane_g3

0xf4ca,	// (0x00010aa3) set_opt_bg_pane_g4

0xf4d2,	// (0x00010aab) set_opt_bg_pane_g5

0xf4da,	// (0x00010ab3) set_opt_bg_pane_g6

0x3a14,	// (0x00004fed) set_opt_bg_pane_g7

0x3a1e,	// (0x00004ff7) set_opt_bg_pane_g8

0x3a28,	// (0x00005001) set_opt_bg_pane_g9

0x0008,

0xf93d,	// (0x00010f16) set_opt_bg_pane_g

0x3999,	// (0x00004f72) slider_set_pane_g1

0x39a6,	// (0x00004f7f) slider_set_pane_g2

0x0006,

0xf92e,	// (0x00010f07) slider_set_pane_g

0x3801,	// (0x00004dda) volume_set_pane_g1

0x380b,	// (0x00004de4) volume_set_pane_g2

0x3815,	// (0x00004dee) volume_set_pane_g3

0x381f,	// (0x00004df8) volume_set_pane_g4

0x3829,	// (0x00004e02) volume_set_pane_g5

0x3833,	// (0x00004e0c) volume_set_pane_g6

0x383d,	// (0x00004e16) volume_set_pane_g7

0x3847,	// (0x00004e20) volume_set_pane_g8

0x3851,	// (0x00004e2a) volume_set_pane_g9

0x385b,	// (0x00004e34) volume_set_pane_g10

0x0009,

0xf906,	// (0x00010edf) volume_set_pane_g

0xa78b,	// (0x0000bd64) indicator_pane_ParamLimits

0xa78b,	// (0x0000bd64) indicator_pane

0xa7b7,	// (0x0000bd90) main_idle_pane_g2_ParamLimits

0xa7b7,	// (0x0000bd90) main_idle_pane_g2

0xa7ef,	// (0x0000bdc8) main_pane_idle_g1_ParamLimits

0xa7ef,	// (0x0000bdc8) main_pane_idle_g1

0xed47,	// (0x00010320) popup_clock_digital_analogue_window_ParamLimits

0xed47,	// (0x00010320) popup_clock_digital_analogue_window

0xa819,	// (0x0000bdf2) soft_indicator_pane_ParamLimits

0xa819,	// (0x0000bdf2) soft_indicator_pane

0xa835,	// (0x0000be0e) wallpaper_pane_ParamLimits

0xa835,	// (0x0000be0e) wallpaper_pane

0xea4c,	// (0x00010025) wallpaper_pane_g1

0xa847,	// (0x0000be20) indicator_pane_g1_ParamLimits

0xa847,	// (0x0000be20) indicator_pane_g1

0x3f9e,	// (0x00005577) navi_navi_icon_text_pane_srt_g1

0xed75,	// (0x0001034e) soft_indicator_pane_t1

0xed8f,	// (0x00010368) aid_ps_area_pane

0xa860,	// (0x0000be39) aid_ps_clock_pane

0xeda0,	// (0x00010379) aid_ps_indicator_pane

0xedac,	// (0x00010385) indicator_ps_pane_ParamLimits

0xedac,	// (0x00010385) indicator_ps_pane

0xedbb,	// (0x00010394) power_save_pane_g1_ParamLimits

0xedbb,	// (0x00010394) power_save_pane_g1

0xedc7,	// (0x000103a0) power_save_pane_g2_ParamLimits

0xedc7,	// (0x000103a0) power_save_pane_g2

0xea56,	// (0x0001002f) aid_navinavi_width_pane

0xed8f,	// (0x00010368) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00010b1e) power_save_pane_g_ParamLimits

0xf545,	// (0x00010b1e) power_save_pane_g

0xedd5,	// (0x000103ae) power_save_pane_t1_ParamLimits

0xedd5,	// (0x000103ae) power_save_pane_t1

0xa860,	// (0x0000be39) aid_ps_clock_pane_ParamLimits

0xeda0,	// (0x00010379) aid_ps_indicator_pane_ParamLimits

0xede7,	// (0x000103c0) power_save_pane_t4_ParamLimits

0xede7,	// (0x000103c0) power_save_pane_t4

0x0001,

0xf54a,	// (0x00010b23) power_save_pane_t_ParamLimits

0xf54a,	// (0x00010b23) power_save_pane_t

0xee11,	// (0x000103ea) power_save_t3_ParamLimits

0xee11,	// (0x000103ea) power_save_t3

0xedfc,	// (0x000103d5) power_save_t2_ParamLimits

0xedfc,	// (0x000103d5) power_save_t2

0xee26,	// (0x000103ff) indicator_ps_pane_g1

0xa86e,	// (0x0000be47) ai_gene_pane_ParamLimits

0xa86e,	// (0x0000be47) ai_gene_pane

0xa885,	// (0x0000be5e) ai_links_pane_ParamLimits

0xa885,	// (0x0000be5e) ai_links_pane

0xa89d,	// (0x0000be76) indicator_pane_cp1_ParamLimits

0xa89d,	// (0x0000be76) indicator_pane_cp1

0xa8ac,	// (0x0000be85) main_pane_idle_g1_cp_ParamLimits

0xa8ac,	// (0x0000be85) main_pane_idle_g1_cp

0xee2f,	// (0x00010408) popup_ai_links_title_window

0xa8c4,	// (0x0000be9d) soft_indicator_pane_cp1_ParamLimits

0xa8c4,	// (0x0000be9d) soft_indicator_pane_cp1

0x36e2,	// (0x00004cbb) ai_links_pane_g1

0x36eb,	// (0x00004cc4) grid_ai_links_pane

0xc543,	// (0x0000db1c) ai_gene_pane_1

0x36d0,	// (0x00004ca9) ai_gene_pane_2

0x36d9,	// (0x00004cb2) list_highlight_pane_cp4

0xc51f,	// (0x0000daf8) cell_ai_link_pane_ParamLimits

0xc51f,	// (0x0000daf8) cell_ai_link_pane

0x369f,	// (0x00004c78) cell_ai_link_pane_g1

0xf023,	// (0x000105fc) cell_ai_link_pane_g2

0x0001,

0xf8e1,	// (0x00010eba) cell_ai_link_pane_g

0xebc5,	// (0x0001019e) grid_highlight_cp2

0xebc5,	// (0x0001019e) bg_popup_sub_pane_cp1

0xee46,	// (0x0001041f) popup_ai_links_title_window_t1

0x35eb,	// (0x00004bc4) ai_gene_pane_1_g1_ParamLimits

0x35eb,	// (0x00004bc4) ai_gene_pane_1_g1

0x35f7,	// (0x00004bd0) ai_gene_pane_1_g2_ParamLimits

0x35f7,	// (0x00004bd0) ai_gene_pane_1_g2

0x0001,

0xf8d7,	// (0x00010eb0) ai_gene_pane_1_g_ParamLimits

0xf8d7,	// (0x00010eb0) ai_gene_pane_1_g

0x3604,	// (0x00004bdd) ai_gene_pane_1_t1_ParamLimits

0x3604,	// (0x00004bdd) ai_gene_pane_1_t1

0x3638,	// (0x00004c11) grid_ai_soft_ind_pane

0x35d6,	// (0x00004baf) ai_gene_pane_2_t1_ParamLimits

0x35d6,	// (0x00004baf) ai_gene_pane_2_t1

0xa8d8,	// (0x0000beb1) main_pane_empty_t1_ParamLimits

0xa8d8,	// (0x0000beb1) main_pane_empty_t1

0xa8f0,	// (0x0000bec9) main_pane_empty_t2_ParamLimits

0xa8f0,	// (0x0000bec9) main_pane_empty_t2

0xa905,	// (0x0000bede) main_pane_empty_t3_ParamLimits

0xa905,	// (0x0000bede) main_pane_empty_t3

0xa917,	// (0x0000bef0) main_pane_empty_t4_ParamLimits

0xa917,	// (0x0000bef0) main_pane_empty_t4

0xa929,	// (0x0000bf02) main_pane_empty_t5_ParamLimits

0xa929,	// (0x0000bf02) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00010b28) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00010b28) main_pane_empty_t

0x00ba,	// (0x00001693) bg_popup_window_pane_ParamLimits

0x00ba,	// (0x00001693) bg_popup_window_pane

0x3338,	// (0x00004911) find_popup_pane_cp2_ParamLimits

0x3338,	// (0x00004911) find_popup_pane_cp2

0x3344,	// (0x0000491d) heading_pane_ParamLimits

0x3344,	// (0x0000491d) heading_pane

0xebc5,	// (0x0001019e) bg_popup_sub_pane

0xc43d,	// (0x0000da16) bg_popup_window_pane_g1_ParamLimits

0xc43d,	// (0x0000da16) bg_popup_window_pane_g1

0xc44c,	// (0x0000da25) bg_popup_window_pane_g2_ParamLimits

0xc44c,	// (0x0000da25) bg_popup_window_pane_g2

0xc458,	// (0x0000da31) bg_popup_window_pane_g3_ParamLimits

0xc458,	// (0x0000da31) bg_popup_window_pane_g3

0xc464,	// (0x0000da3d) bg_popup_window_pane_g4_ParamLimits

0xc464,	// (0x0000da3d) bg_popup_window_pane_g4

0xc473,	// (0x0000da4c) bg_popup_window_pane_g5_ParamLimits

0xc473,	// (0x0000da4c) bg_popup_window_pane_g5

0xc483,	// (0x0000da5c) bg_popup_window_pane_g6_ParamLimits

0xc483,	// (0x0000da5c) bg_popup_window_pane_g6

0xc48f,	// (0x0000da68) bg_popup_window_pane_g7_ParamLimits

0xc48f,	// (0x0000da68) bg_popup_window_pane_g7

0xc49e,	// (0x0000da77) bg_popup_window_pane_g8_ParamLimits

0xc49e,	// (0x0000da77) bg_popup_window_pane_g8

0xc4ad,	// (0x0000da86) bg_popup_window_pane_g9_ParamLimits

0xc4ad,	// (0x0000da86) bg_popup_window_pane_g9

0x330d,	// (0x000048e6) bg_popup_window_pane_g10_ParamLimits

0x330d,	// (0x000048e6) bg_popup_window_pane_g10

0x0009,

0xf89f,	// (0x00010e78) bg_popup_window_pane_g_ParamLimits

0xf89f,	// (0x00010e78) bg_popup_window_pane_g

0x3236,	// (0x0000480f) bg_popup_heading_pane_ParamLimits

0x3236,	// (0x0000480f) bg_popup_heading_pane

0x3ee1,	// (0x000054ba) tabs_4_passive_pane_cp_srt_ParamLimits

0x3ee1,	// (0x000054ba) tabs_4_passive_pane_cp_srt

0x3ef3,	// (0x000054cc) tabs_4_passive_pane_srt_ParamLimits

0x324a,	// (0x00004823) heading_pane_g2

0x3ef3,	// (0x000054cc) tabs_4_passive_pane_srt

0x23b5,	// (0x0000398e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x23b5,	// (0x0000398e) bg_passive_tab_pane_cp3_srt

0x3252,	// (0x0000482b) heading_pane_t1_ParamLimits

0x3252,	// (0x0000482b) heading_pane_t1

0x3269,	// (0x00004842) heading_pane_t2_ParamLimits

0x3269,	// (0x00004842) heading_pane_t2

0x0001,

0xf89a,	// (0x00010e73) heading_pane_t_ParamLimits

0xf89a,	// (0x00010e73) heading_pane_t

0x2c06,	// (0x000041df) bg_popup_heading_pane_g1

0x2cb5,	// (0x0000428e) bg_popup_heading_pane_g2

0x2cbf,	// (0x00004298) bg_popup_heading_pane_g3

0x2cc9,	// (0x000042a2) bg_popup_heading_pane_g4

0x2cd3,	// (0x000042ac) bg_popup_heading_pane_g5

0x2cdd,	// (0x000042b6) bg_popup_heading_pane_g6

0x2ce5,	// (0x000042be) bg_popup_heading_pane_g7

0x2ced,	// (0x000042c6) bg_popup_heading_pane_g8

0x2cf7,	// (0x000042d0) bg_popup_heading_pane_g9

0x0008,

0xf856,	// (0x00010e2f) bg_popup_heading_pane_g

0x221a,	// (0x000037f3) bg_popup_sub_pane_g1

0x2222,	// (0x000037fb) bg_popup_sub_pane_g2

0x222a,	// (0x00003803) bg_popup_sub_pane_g3

0x2232,	// (0x0000380b) bg_popup_sub_pane_g4

0x223a,	// (0x00003813) bg_popup_sub_pane_g5

0x2242,	// (0x0000381b) bg_popup_sub_pane_g6

0x224a,	// (0x00003823) bg_popup_sub_pane_g7

0x2252,	// (0x0000382b) bg_popup_sub_pane_g8

0x225a,	// (0x00003833) bg_popup_sub_pane_g9

0x0008,

0xf830,	// (0x00010e09) bg_popup_sub_pane_g

0xec67,	// (0x00010240) bg_popup_window_pane_cp5_ParamLimits

0xec67,	// (0x00010240) bg_popup_window_pane_cp5

0xee63,	// (0x0001043c) popup_note_window_g1_ParamLimits

0xee63,	// (0x0001043c) popup_note_window_g1

0xee6f,	// (0x00010448) popup_note_window_t1_ParamLimits

0xee6f,	// (0x00010448) popup_note_window_t1

0xee85,	// (0x0001045e) popup_note_window_t2_ParamLimits

0xee85,	// (0x0001045e) popup_note_window_t2

0xee9b,	// (0x00010474) popup_note_window_t3_ParamLimits

0xee9b,	// (0x00010474) popup_note_window_t3

0xeeb1,	// (0x0001048a) popup_note_window_t4_ParamLimits

0xeeb1,	// (0x0001048a) popup_note_window_t4

0xeed9,	// (0x000104b2) popup_note_window_t5_ParamLimits

0xeed9,	// (0x000104b2) popup_note_window_t5

0x0004,

0xf55a,	// (0x00010b33) popup_note_window_t_ParamLimits

0xf55a,	// (0x00010b33) popup_note_window_t

0xef23,	// (0x000104fc) bg_popup_window_pane_cp6_ParamLimits

0xef23,	// (0x000104fc) bg_popup_window_pane_cp6

0x2b82,	// (0x0000415b) popup_note_image_window_g1_ParamLimits

0x2b82,	// (0x0000415b) popup_note_image_window_g1

0x2b8e,	// (0x00004167) popup_note_image_window_g2_ParamLimits

0x2b8e,	// (0x00004167) popup_note_image_window_g2

0x0001,

0xf824,	// (0x00010dfd) popup_note_image_window_g_ParamLimits

0xf824,	// (0x00010dfd) popup_note_image_window_g

0x2ba7,	// (0x00004180) popup_note_image_window_t1_ParamLimits

0x2ba7,	// (0x00004180) popup_note_image_window_t1

0x2bc0,	// (0x00004199) popup_note_image_window_t2_ParamLimits

0x2bc0,	// (0x00004199) popup_note_image_window_t2

0x2bd9,	// (0x000041b2) popup_note_image_window_t3_ParamLimits

0x2bd9,	// (0x000041b2) popup_note_image_window_t3

0x0002,

0xf829,	// (0x00010e02) popup_note_image_window_t_ParamLimits

0xf829,	// (0x00010e02) popup_note_image_window_t

0x2a42,	// (0x0000401b) bg_popup_window_pane_cp7_ParamLimits

0x2a42,	// (0x0000401b) bg_popup_window_pane_cp7

0x2a72,	// (0x0000404b) popup_note_wait_window_g1_ParamLimits

0x2a72,	// (0x0000404b) popup_note_wait_window_g1

0x2a7e,	// (0x00004057) popup_note_wait_window_g2_ParamLimits

0x2a7e,	// (0x00004057) popup_note_wait_window_g2

0x0002,

0xf812,	// (0x00010deb) popup_note_wait_window_g_ParamLimits

0xf812,	// (0x00010deb) popup_note_wait_window_g

0x2a96,	// (0x0000406f) popup_note_wait_window_t1_ParamLimits

0x2a96,	// (0x0000406f) popup_note_wait_window_t1

0x2abd,	// (0x00004096) popup_note_wait_window_t2_ParamLimits

0x2abd,	// (0x00004096) popup_note_wait_window_t2

0x2adb,	// (0x000040b4) popup_note_wait_window_t3_ParamLimits

0x2adb,	// (0x000040b4) popup_note_wait_window_t3

0x2aee,	// (0x000040c7) popup_note_wait_window_t4_ParamLimits

0x2aee,	// (0x000040c7) popup_note_wait_window_t4

0x0004,

0xf819,	// (0x00010df2) popup_note_wait_window_t_ParamLimits

0xf819,	// (0x00010df2) popup_note_wait_window_t

0x2b13,	// (0x000040ec) wait_bar_pane_ParamLimits

0x2b13,	// (0x000040ec) wait_bar_pane

0xebc5,	// (0x0001019e) wait_anim_pane

0xebc5,	// (0x0001019e) wait_border_pane

0xea4c,	// (0x00010025) wait_anim_pane_g1

0xea4c,	// (0x00010025) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x00010cb2) wait_anim_pane_g

0x29e6,	// (0x00003fbf) wait_border_pane_g1

0x29f1,	// (0x00003fca) wait_border_pane_g2

0x29fa,	// (0x00003fd3) wait_border_pane_g3

0x0002,

0xf80b,	// (0x00010de4) wait_border_pane_g

0x2850,	// (0x00003e29) bg_popup_window_pane_cp16_ParamLimits

0x2850,	// (0x00003e29) bg_popup_window_pane_cp16

0x2950,	// (0x00003f29) indicator_popup_pane_cp4_ParamLimits

0x2950,	// (0x00003f29) indicator_popup_pane_cp4

0x2964,	// (0x00003f3d) popup_query_data_window_t1_ParamLimits

0x2964,	// (0x00003f3d) popup_query_data_window_t1

0x2976,	// (0x00003f4f) popup_query_data_window_t2_ParamLimits

0x2976,	// (0x00003f4f) popup_query_data_window_t2

0x298f,	// (0x00003f68) popup_query_data_window_t3_ParamLimits

0x298f,	// (0x00003f68) popup_query_data_window_t3

0x0002,

0xf804,	// (0x00010ddd) popup_query_data_window_t_ParamLimits

0xf804,	// (0x00010ddd) popup_query_data_window_t

0x29a9,	// (0x00003f82) query_popup_data_pane_ParamLimits

0x29a9,	// (0x00003f82) query_popup_data_pane

0x29bd,	// (0x00003f96) query_popup_data_pane_cp1_ParamLimits

0x29bd,	// (0x00003f96) query_popup_data_pane_cp1

0x2850,	// (0x00003e29) bg_popup_window_pane_cp10_ParamLimits

0x2850,	// (0x00003e29) bg_popup_window_pane_cp10

0x2882,	// (0x00003e5b) indicator_popup_pane_ParamLimits

0x2882,	// (0x00003e5b) indicator_popup_pane

0x28a4,	// (0x00003e7d) popup_query_code_window_t1_ParamLimits

0x28a4,	// (0x00003e7d) popup_query_code_window_t1

0x28be,	// (0x00003e97) popup_query_code_window_t2_ParamLimits

0x28be,	// (0x00003e97) popup_query_code_window_t2

0x2907,	// (0x00003ee0) popup_query_code_window_t3_ParamLimits

0x2907,	// (0x00003ee0) popup_query_code_window_t3

0x0002,

0xf7fd,	// (0x00010dd6) popup_query_code_window_t_ParamLimits

0xf7fd,	// (0x00010dd6) popup_query_code_window_t

0x2936,	// (0x00003f0f) query_popup_pane_ParamLimits

0x2936,	// (0x00003f0f) query_popup_pane

0xef23,	// (0x000104fc) bg_popup_window_pane_cp15_ParamLimits

0xef23,	// (0x000104fc) bg_popup_window_pane_cp15

0xef43,	// (0x0001051c) indicator_popup_pane_cp1_ParamLimits

0xef43,	// (0x0001051c) indicator_popup_pane_cp1

0xef56,	// (0x0001052f) indicator_popup_pane_cp2_ParamLimits

0xef56,	// (0x0001052f) indicator_popup_pane_cp2

0xef71,	// (0x0001054a) popup_query_data_code_window_g1_ParamLimits

0xef71,	// (0x0001054a) popup_query_data_code_window_g1

0xef84,	// (0x0001055d) popup_query_data_code_window_t1_ParamLimits

0xef84,	// (0x0001055d) popup_query_data_code_window_t1

0xef96,	// (0x0001056f) popup_query_data_code_window_t2_ParamLimits

0xef96,	// (0x0001056f) popup_query_data_code_window_t2

0xefa8,	// (0x00010581) popup_query_data_code_window_t3_ParamLimits

0xefa8,	// (0x00010581) popup_query_data_code_window_t3

0xefbe,	// (0x00010597) popup_query_data_code_window_t4_ParamLimits

0xefbe,	// (0x00010597) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00010b3e) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00010b3e) popup_query_data_code_window_t

0x0ec3,	// (0x0000249c) list_single_midp_graphic_pane_g3

0xefd8,	// (0x000105b1) query_popup_data_pane_cp2_ParamLimits

0xefeb,	// (0x000105c4) query_popup_pane_cp2_ParamLimits

0xefeb,	// (0x000105c4) query_popup_pane_cp2

0xebc5,	// (0x0001019e) bg_popup_window_pane_cp11

0x2834,	// (0x00003e0d) heading_pane_cp5

0x283c,	// (0x00003e15) listscroll_popup_info_pane

0xebc5,	// (0x0001019e) input_focus_pane_cp3

0xf006,	// (0x000105df) query_popup_pane_t1

0xf014,	// (0x000105ed) list_popup_info_pane_ParamLimits

0xf014,	// (0x000105ed) list_popup_info_pane

0xf023,	// (0x000105fc) listscroll_popup_info_pane_g1

0xf02b,	// (0x00010604) scroll_pane_cp7

0xf035,	// (0x0001060e) popup_info_list_pane_t1_ParamLimits

0xf035,	// (0x0001060e) popup_info_list_pane_t1

0xf04f,	// (0x00010628) popup_info_list_pane_t2_ParamLimits

0xf04f,	// (0x00010628) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00010b47) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00010b47) popup_info_list_pane_t

0xebc5,	// (0x0001019e) bg_popup_window_pane_cp12

0x3fd5,	// (0x000055ae) find_popup_pane

0xec7f,	// (0x00010258) bg_popup_window_pane_cp3

0xf069,	// (0x00010642) heading_pane_cp3

0xf078,	// (0x00010651) listscroll_popup_graphic_pane

0xebc5,	// (0x0001019e) bg_popup_window_pane_cp4

0xa98b,	// (0x0000bf64) heading_pane_cp4

0xf088,	// (0x00010661) listscroll_popup_colour_pane

0xa995,	// (0x0000bf6e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa995,	// (0x0000bf6e) cell_large_graphic_colour_none_popup_pane

0xa9a9,	// (0x0000bf82) grid_large_graphic_colour_popup_pane_ParamLimits

0xa9a9,	// (0x0000bf82) grid_large_graphic_colour_popup_pane

0xa9cd,	// (0x0000bfa6) listscroll_popup_colour_pane_g1_ParamLimits

0xa9cd,	// (0x0000bfa6) listscroll_popup_colour_pane_g1

0xa9e4,	// (0x0000bfbd) listscroll_popup_colour_pane_g2_ParamLimits

0xa9e4,	// (0x0000bfbd) listscroll_popup_colour_pane_g2

0xa9fb,	// (0x0000bfd4) listscroll_popup_colour_pane_g3_ParamLimits

0xa9fb,	// (0x0000bfd4) listscroll_popup_colour_pane_g3

0xaa0b,	// (0x0000bfe4) listscroll_popup_colour_pane_g4_ParamLimits

0xaa0b,	// (0x0000bfe4) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00010b4c) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00010b4c) listscroll_popup_colour_pane_g

0xf090,	// (0x00010669) scroll_pane_cp6_ParamLimits

0xf090,	// (0x00010669) scroll_pane_cp6

0xaa1b,	// (0x0000bff4) cell_large_graphic_colour_popup_pane_ParamLimits

0xaa1b,	// (0x0000bff4) cell_large_graphic_colour_popup_pane

0xf0a2,	// (0x0001067b) cell_large_graphic_colour_none_popup_pane_t1

0xebc5,	// (0x0001019e) grid_highlight_pane_cp5

0xf0b1,	// (0x0001068a) cell_large_graphic_colour_popup_pane_g1

0xf0b9,	// (0x00010692) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00010b55) cell_large_graphic_colour_popup_pane_g

0xf0c1,	// (0x0001069a) cell_large_graphic_colour_popup_pane_g2_copy1

0xf0ca,	// (0x000106a3) grid_highlight_pane_cp4

0xf0d2,	// (0x000106ab) bg_popup_window_pane_cp8_ParamLimits

0xf0d2,	// (0x000106ab) bg_popup_window_pane_cp8

0xf0ed,	// (0x000106c6) popup_snote_single_text_window_g1_ParamLimits

0xf0ed,	// (0x000106c6) popup_snote_single_text_window_g1

0xf0ff,	// (0x000106d8) popup_snote_single_text_window_t1_ParamLimits

0xf0ff,	// (0x000106d8) popup_snote_single_text_window_t1

0xf112,	// (0x000106eb) popup_snote_single_text_window_t2_ParamLimits

0xf112,	// (0x000106eb) popup_snote_single_text_window_t2

0xf125,	// (0x000106fe) popup_snote_single_text_window_t3_ParamLimits

0xf125,	// (0x000106fe) popup_snote_single_text_window_t3

0xf15e,	// (0x00010737) popup_snote_single_text_window_t4_ParamLimits

0xf15e,	// (0x00010737) popup_snote_single_text_window_t4

0xf192,	// (0x0001076b) popup_snote_single_text_window_t5_ParamLimits

0xf192,	// (0x0001076b) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00010b5a) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00010b5a) popup_snote_single_text_window_t

0xf1c1,	// (0x0001079a) bg_popup_window_pane_cp9_ParamLimits

0xf1c1,	// (0x0001079a) bg_popup_window_pane_cp9

0xf0ed,	// (0x000106c6) popup_snote_single_graphic_window_g1_ParamLimits

0xf0ed,	// (0x000106c6) popup_snote_single_graphic_window_g1

0xf1cf,	// (0x000107a8) popup_snote_single_graphic_window_g2_ParamLimits

0xf1cf,	// (0x000107a8) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00010b65) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00010b65) popup_snote_single_graphic_window_g

0xf1db,	// (0x000107b4) popup_snote_single_graphic_window_t1_ParamLimits

0xf1db,	// (0x000107b4) popup_snote_single_graphic_window_t1

0xf1ee,	// (0x000107c7) popup_snote_single_graphic_window_t2_ParamLimits

0xf1ee,	// (0x000107c7) popup_snote_single_graphic_window_t2

0xf201,	// (0x000107da) popup_snote_single_graphic_window_t3_ParamLimits

0xf201,	// (0x000107da) popup_snote_single_graphic_window_t3

0xf23a,	// (0x00010813) popup_snote_single_graphic_window_t4_ParamLimits

0xf23a,	// (0x00010813) popup_snote_single_graphic_window_t4

0xf26e,	// (0x00010847) popup_snote_single_graphic_window_t5_ParamLimits

0xf26e,	// (0x00010847) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00010b6a) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00010b6a) popup_snote_single_graphic_window_t

0x3e5b,	// (0x00005434) grid_graphic_popup_pane_ParamLimits

0x3e5b,	// (0x00005434) grid_graphic_popup_pane

0x3e89,	// (0x00005462) listscroll_popup_graphic_pane_g1_ParamLimits

0x3e89,	// (0x00005462) listscroll_popup_graphic_pane_g1

0xc895,	// (0x0000de6e) listscroll_popup_graphic_pane_g2_ParamLimits

0xc895,	// (0x0000de6e) listscroll_popup_graphic_pane_g2

0x0001,

0xf97a,	// (0x00010f53) listscroll_popup_graphic_pane_g_ParamLimits

0xf97a,	// (0x00010f53) listscroll_popup_graphic_pane_g

0x3eb1,	// (0x0000548a) scroll_pane_cp5

0xc84d,	// (0x0000de26) cell_graphic_popup_pane_ParamLimits

0xc84d,	// (0x0000de26) cell_graphic_popup_pane

0x3dd4,	// (0x000053ad) cell_graphic_popup_pane_g1

0x3ddc,	// (0x000053b5) cell_graphic_popup_pane_g2

0xf0c1,	// (0x0001069a) cell_graphic_popup_pane_g3

0x0002,

0xf973,	// (0x00010f4c) cell_graphic_popup_pane_g

0x3de5,	// (0x000053be) cell_graphic_popup_pane_t2

0xf0ca,	// (0x000106a3) grid_highlight_pane_cp3

0xf2af,	// (0x00010888) list_gen_pane_ParamLimits

0xf2af,	// (0x00010888) list_gen_pane

0xf2d7,	// (0x000108b0) scroll_pane

0xc804,	// (0x0000dddd) bg_list_pane_g1_ParamLimits

0xc804,	// (0x0000dddd) bg_list_pane_g1

0x3d49,	// (0x00005322) bg_list_pane_g2_ParamLimits

0x3d49,	// (0x00005322) bg_list_pane_g2

0x3d5e,	// (0x00005337) bg_list_pane_g3_ParamLimits

0x3d5e,	// (0x00005337) bg_list_pane_g3

0x3d72,	// (0x0000534b) bg_list_pane_g4_ParamLimits

0x3d72,	// (0x0000534b) bg_list_pane_g4

0xc821,	// (0x0000ddfa) bg_list_pane_g5_ParamLimits

0xc821,	// (0x0000ddfa) bg_list_pane_g5

0x0004,

0xf968,	// (0x00010f41) bg_list_pane_g_ParamLimits

0xf968,	// (0x00010f41) bg_list_pane_g

0xc783,	// (0x0000dd5c) list_double2_graphic_large_graphic_pane_ParamLimits

0xc783,	// (0x0000dd5c) list_double2_graphic_large_graphic_pane

0xc783,	// (0x0000dd5c) list_double2_graphic_pane_ParamLimits

0xc783,	// (0x0000dd5c) list_double2_graphic_pane

0xc783,	// (0x0000dd5c) list_double2_large_graphic_pane_ParamLimits

0xc783,	// (0x0000dd5c) list_double2_large_graphic_pane

0xc783,	// (0x0000dd5c) list_double2_pane_ParamLimits

0xc783,	// (0x0000dd5c) list_double2_pane

0xc783,	// (0x0000dd5c) list_double_graphic_heading_pane_ParamLimits

0xc783,	// (0x0000dd5c) list_double_graphic_heading_pane

0xc783,	// (0x0000dd5c) list_double_graphic_pane_ParamLimits

0xc783,	// (0x0000dd5c) list_double_graphic_pane

0xc783,	// (0x0000dd5c) list_double_heading_pane_ParamLimits

0xc783,	// (0x0000dd5c) list_double_heading_pane

0xc783,	// (0x0000dd5c) list_double_large_graphic_pane_ParamLimits

0xc783,	// (0x0000dd5c) list_double_large_graphic_pane

0xc783,	// (0x0000dd5c) list_double_number_pane_ParamLimits

0xc783,	// (0x0000dd5c) list_double_number_pane

0xc783,	// (0x0000dd5c) list_double_pane_ParamLimits

0xc783,	// (0x0000dd5c) list_double_pane

0xc783,	// (0x0000dd5c) list_double_time_pane_ParamLimits

0xc783,	// (0x0000dd5c) list_double_time_pane

0xc783,	// (0x0000dd5c) list_setting_number_pane_ParamLimits

0xc783,	// (0x0000dd5c) list_setting_number_pane

0xc783,	// (0x0000dd5c) list_setting_pane_ParamLimits

0xc783,	// (0x0000dd5c) list_setting_pane

0xc797,	// (0x0000dd70) list_single_2graphic_pane_ParamLimits

0xc797,	// (0x0000dd70) list_single_2graphic_pane

0xc797,	// (0x0000dd70) list_single_graphic_heading_pane_ParamLimits

0xc797,	// (0x0000dd70) list_single_graphic_heading_pane

0xc797,	// (0x0000dd70) list_single_graphic_pane_ParamLimits

0xc797,	// (0x0000dd70) list_single_graphic_pane

0xc797,	// (0x0000dd70) list_single_heading_pane_ParamLimits

0xc797,	// (0x0000dd70) list_single_heading_pane

0xc7ef,	// (0x0000ddc8) list_single_large_graphic_pane_ParamLimits

0xc7ef,	// (0x0000ddc8) list_single_large_graphic_pane

0xc797,	// (0x0000dd70) list_single_number_heading_pane_ParamLimits

0xc797,	// (0x0000dd70) list_single_number_heading_pane

0xc797,	// (0x0000dd70) list_single_number_pane_ParamLimits

0xc797,	// (0x0000dd70) list_single_number_pane

0xc797,	// (0x0000dd70) list_single_pane_ParamLimits

0xc797,	// (0x0000dd70) list_single_pane

0xebc5,	// (0x0001019e) list_highlight_pane_cp1

0x20b2,	// (0x0000368b) list_single_pane_g1_ParamLimits

0x20b2,	// (0x0000368b) list_single_pane_g1

0x20be,	// (0x00003697) list_single_pane_g2_ParamLimits

0x20be,	// (0x00003697) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00010b7c) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00010b7c) list_single_pane_g

0x460f,	// (0x00005be8) list_single_pane_t1_ParamLimits

0x460f,	// (0x00005be8) list_single_pane_t1

0x20b2,	// (0x0000368b) list_single_number_pane_g1_ParamLimits

0x20b2,	// (0x0000368b) list_single_number_pane_g1

0x20be,	// (0x00003697) list_single_number_pane_g2_ParamLimits

0x20be,	// (0x00003697) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00010b7c) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00010b7c) list_single_number_pane_g

0x21a8,	// (0x00003781) list_single_number_pane_t1_ParamLimits

0x21a8,	// (0x00003781) list_single_number_pane_t1

0x4720,	// (0x00005cf9) list_single_number_pane_t2_ParamLimits

0x4720,	// (0x00005cf9) list_single_number_pane_t2

0x0001,

0xf929,	// (0x00010f02) list_single_number_pane_t_ParamLimits

0xf929,	// (0x00010f02) list_single_number_pane_t

0x5f06,	// (0x000074df) list_single_graphic_pane_g1_ParamLimits

0x5f06,	// (0x000074df) list_single_graphic_pane_g1

0x20b2,	// (0x0000368b) list_single_graphic_pane_g2_ParamLimits

0x20b2,	// (0x0000368b) list_single_graphic_pane_g2

0x20be,	// (0x00003697) list_single_graphic_pane_g3_ParamLimits

0x20be,	// (0x00003697) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00010b75) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00010b75) list_single_graphic_pane_g

0xaa46,	// (0x0000c01f) list_single_graphic_pane_t1_ParamLimits

0xaa46,	// (0x0000c01f) list_single_graphic_pane_t1

0x20b2,	// (0x0000368b) list_single_heading_pane_g1_ParamLimits

0x20b2,	// (0x0000368b) list_single_heading_pane_g1

0x20be,	// (0x00003697) list_single_heading_pane_g2_ParamLimits

0x20be,	// (0x00003697) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00010b7c) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00010b7c) list_single_heading_pane_g

0xaa5c,	// (0x0000c035) list_single_heading_pane_t1_ParamLimits

0xaa5c,	// (0x0000c035) list_single_heading_pane_t1

0xaa72,	// (0x0000c04b) list_single_heading_pane_t2_ParamLimits

0xaa72,	// (0x0000c04b) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00010b81) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00010b81) list_single_heading_pane_t

0x20b2,	// (0x0000368b) list_single_number_heading_pane_g1_ParamLimits

0x20b2,	// (0x0000368b) list_single_number_heading_pane_g1

0x20be,	// (0x00003697) list_single_number_heading_pane_g2_ParamLimits

0x20be,	// (0x00003697) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00010b7c) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00010b7c) list_single_number_heading_pane_g

0xaa5c,	// (0x0000c035) list_single_number_heading_pane_t1_ParamLimits

0xaa5c,	// (0x0000c035) list_single_number_heading_pane_t1

0x45d9,	// (0x00005bb2) list_single_number_heading_pane_t2_ParamLimits

0x45d9,	// (0x00005bb2) list_single_number_heading_pane_t2

0x45eb,	// (0x00005bc4) list_single_number_heading_pane_t3_ParamLimits

0x45eb,	// (0x00005bc4) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00010b86) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00010b86) list_single_number_heading_pane_t

0x20a6,	// (0x0000367f) list_single_graphic_heading_pane_g1_ParamLimits

0x20a6,	// (0x0000367f) list_single_graphic_heading_pane_g1

0xaa84,	// (0x0000c05d) list_single_graphic_heading_pane_g4_ParamLimits

0xaa84,	// (0x0000c05d) list_single_graphic_heading_pane_g4

0x20be,	// (0x00003697) list_single_graphic_heading_pane_g5_ParamLimits

0x20be,	// (0x00003697) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00010b8d) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00010b8d) list_single_graphic_heading_pane_g

0xaa5c,	// (0x0000c035) list_single_graphic_heading_pane_t1_ParamLimits

0xaa5c,	// (0x0000c035) list_single_graphic_heading_pane_t1

0xaa95,	// (0x0000c06e) list_single_graphic_heading_pane_t2_ParamLimits

0xaa95,	// (0x0000c06e) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00010b94) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00010b94) list_single_graphic_heading_pane_t

0x4625,	// (0x00005bfe) list_single_large_graphic_pane_g1_ParamLimits

0x4625,	// (0x00005bfe) list_single_large_graphic_pane_g1

0x4631,	// (0x00005c0a) list_single_large_graphic_pane_g2_ParamLimits

0x4631,	// (0x00005c0a) list_single_large_graphic_pane_g2

0x463d,	// (0x00005c16) list_single_large_graphic_pane_g3_ParamLimits

0x463d,	// (0x00005c16) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00010b99) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00010b99) list_single_large_graphic_pane_g

0x29f1,	// (0x00003fca) wait_border_pane_g2_copy1

0xaaa7,	// (0x0000c080) list_single_large_graphic_pane_g4_cp2

0x4649,	// (0x00005c22) list_single_large_graphic_pane_t1_ParamLimits

0x4649,	// (0x00005c22) list_single_large_graphic_pane_t1

0xaaaf,	// (0x0000c088) list_double_pane_g1_ParamLimits

0xaaaf,	// (0x0000c088) list_double_pane_g1

0xaabb,	// (0x0000c094) list_double_pane_g2_ParamLimits

0xaabb,	// (0x0000c094) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00010ba0) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00010ba0) list_double_pane_g

0xaac7,	// (0x0000c0a0) list_double_pane_t1_ParamLimits

0xaac7,	// (0x0000c0a0) list_double_pane_t1

0xaadd,	// (0x0000c0b6) list_double_pane_t2_ParamLimits

0xaadd,	// (0x0000c0b6) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00010ba5) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00010ba5) list_double_pane_t

0xaaef,	// (0x0000c0c8) list_double2_pane_g1_ParamLimits

0xaaef,	// (0x0000c0c8) list_double2_pane_g1

0xab00,	// (0x0000c0d9) list_double2_pane_g2_ParamLimits

0xab00,	// (0x0000c0d9) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00010baa) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00010baa) list_double2_pane_g

0xab0c,	// (0x0000c0e5) list_double2_pane_t1_ParamLimits

0xab0c,	// (0x0000c0e5) list_double2_pane_t1

0xab22,	// (0x0000c0fb) list_double2_pane_t2_ParamLimits

0xab22,	// (0x0000c0fb) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00010baf) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00010baf) list_double2_pane_t

0xaaaf,	// (0x0000c088) list_double_number_pane_g1_ParamLimits

0xaaaf,	// (0x0000c088) list_double_number_pane_g1

0xaabb,	// (0x0000c094) list_double_number_pane_g2_ParamLimits

0xaabb,	// (0x0000c094) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00010ba0) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00010ba0) list_double_number_pane_g

0xab34,	// (0x0000c10d) list_double_number_pane_t1_ParamLimits

0xab34,	// (0x0000c10d) list_double_number_pane_t1

0xab46,	// (0x0000c11f) list_double_number_pane_t2_ParamLimits

0xab46,	// (0x0000c11f) list_double_number_pane_t2

0xab5c,	// (0x0000c135) list_double_number_pane_t3_ParamLimits

0xab5c,	// (0x0000c135) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00010bb4) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00010bb4) list_double_number_pane_t

0xab6e,	// (0x0000c147) list_double_graphic_pane_g1_ParamLimits

0xab6e,	// (0x0000c147) list_double_graphic_pane_g1

0xab7a,	// (0x0000c153) list_double_graphic_pane_g2_ParamLimits

0xab7a,	// (0x0000c153) list_double_graphic_pane_g2

0xab89,	// (0x0000c162) list_double_graphic_pane_g3_ParamLimits

0xab89,	// (0x0000c162) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00010bbb) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00010bbb) list_double_graphic_pane_g

0xaba1,	// (0x0000c17a) list_double_graphic_pane_t1_ParamLimits

0xaba1,	// (0x0000c17a) list_double_graphic_pane_t1

0xabb7,	// (0x0000c190) list_double_graphic_pane_t2_ParamLimits

0xabb7,	// (0x0000c190) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00010bc4) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00010bc4) list_double_graphic_pane_t

0xabc9,	// (0x0000c1a2) list_double2_graphic_pane_g1_ParamLimits

0xabc9,	// (0x0000c1a2) list_double2_graphic_pane_g1

0xabd5,	// (0x0000c1ae) list_double2_graphic_pane_g2_ParamLimits

0xabd5,	// (0x0000c1ae) list_double2_graphic_pane_g2

0xab00,	// (0x0000c0d9) list_double2_graphic_pane_g3_ParamLimits

0xab00,	// (0x0000c0d9) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00010bc9) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00010bc9) list_double2_graphic_pane_g

0xabe1,	// (0x0000c1ba) list_double2_graphic_pane_t1_ParamLimits

0xabe1,	// (0x0000c1ba) list_double2_graphic_pane_t1

0xabf7,	// (0x0000c1d0) list_double2_graphic_pane_t2_ParamLimits

0xabf7,	// (0x0000c1d0) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00010bd0) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00010bd0) list_double2_graphic_pane_t

0xac09,	// (0x0000c1e2) list_double_large_graphic_pane_g1_ParamLimits

0xac09,	// (0x0000c1e2) list_double_large_graphic_pane_g1

0xac28,	// (0x0000c201) list_double_large_graphic_pane_g2_ParamLimits

0xac28,	// (0x0000c201) list_double_large_graphic_pane_g2

0xaabb,	// (0x0000c094) list_double_large_graphic_pane_g3_ParamLimits

0xaabb,	// (0x0000c094) list_double_large_graphic_pane_g3

0xac39,	// (0x0000c212) list_double_large_graphic_pane_g4_ParamLimits

0xac39,	// (0x0000c212) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00010bd5) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00010bd5) list_double_large_graphic_pane_g

0xac4c,	// (0x0000c225) list_double_large_graphic_pane_t1_ParamLimits

0xac4c,	// (0x0000c225) list_double_large_graphic_pane_t1

0xac65,	// (0x0000c23e) list_double_large_graphic_pane_t2_ParamLimits

0xac65,	// (0x0000c23e) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00010be0) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00010be0) list_double_large_graphic_pane_t

0xac77,	// (0x0000c250) list_double2_large_graphic_pane_g1_ParamLimits

0xac77,	// (0x0000c250) list_double2_large_graphic_pane_g1

0xaaef,	// (0x0000c0c8) list_double2_large_graphic_pane_g2_ParamLimits

0xaaef,	// (0x0000c0c8) list_double2_large_graphic_pane_g2

0xab00,	// (0x0000c0d9) list_double2_large_graphic_pane_g3_ParamLimits

0xab00,	// (0x0000c0d9) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00010be5) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00010be5) list_double2_large_graphic_pane_g

0xac83,	// (0x0000c25c) list_double2_large_graphic_pane_t1_ParamLimits

0xac83,	// (0x0000c25c) list_double2_large_graphic_pane_t1

0xac99,	// (0x0000c272) list_double2_large_graphic_pane_t2_ParamLimits

0xac99,	// (0x0000c272) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00010bec) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00010bec) list_double2_large_graphic_pane_t

0xacab,	// (0x0000c284) list_double_heading_pane_g1_ParamLimits

0xacab,	// (0x0000c284) list_double_heading_pane_g1

0xf320,	// (0x000108f9) list_double_heading_pane_g2_ParamLimits

0xf320,	// (0x000108f9) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00010bf1) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00010bf1) list_double_heading_pane_g

0xacbc,	// (0x0000c295) list_double_heading_pane_t1_ParamLimits

0xacbc,	// (0x0000c295) list_double_heading_pane_t1

0xacd2,	// (0x0000c2ab) list_double_heading_pane_t2_ParamLimits

0xacd2,	// (0x0000c2ab) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00010bf6) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00010bf6) list_double_heading_pane_t

0xabc9,	// (0x0000c1a2) list_double_graphic_heading_pane_g1_ParamLimits

0xabc9,	// (0x0000c1a2) list_double_graphic_heading_pane_g1

0xacab,	// (0x0000c284) list_double_graphic_heading_pane_g2_ParamLimits

0xacab,	// (0x0000c284) list_double_graphic_heading_pane_g2

0xf320,	// (0x000108f9) list_double_graphic_heading_pane_g3_ParamLimits

0xf320,	// (0x000108f9) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00010bfb) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00010bfb) list_double_graphic_heading_pane_g

0xace4,	// (0x0000c2bd) list_double_graphic_heading_pane_t1_ParamLimits

0xace4,	// (0x0000c2bd) list_double_graphic_heading_pane_t1

0xacfa,	// (0x0000c2d3) list_double_graphic_heading_pane_t2_ParamLimits

0xacfa,	// (0x0000c2d3) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00010c02) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00010c02) list_double_graphic_heading_pane_t

0xac28,	// (0x0000c201) list_double_time_pane_g1_ParamLimits

0xac28,	// (0x0000c201) list_double_time_pane_g1

0xaabb,	// (0x0000c094) list_double_time_pane_g2_ParamLimits

0xaabb,	// (0x0000c094) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00010c07) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00010c07) list_double_time_pane_g

0xad0c,	// (0x0000c2e5) list_double_time_pane_t1_ParamLimits

0xad0c,	// (0x0000c2e5) list_double_time_pane_t1

0xad22,	// (0x0000c2fb) list_double_time_pane_t2_ParamLimits

0xad22,	// (0x0000c2fb) list_double_time_pane_t2

0xad34,	// (0x0000c30d) list_double_time_pane_t3_ParamLimits

0xad34,	// (0x0000c30d) list_double_time_pane_t3

0xad46,	// (0x0000c31f) list_double_time_pane_t4_ParamLimits

0xad46,	// (0x0000c31f) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00010c0c) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00010c0c) list_double_time_pane_t

0xabd5,	// (0x0000c1ae) list_setting_pane_g1_ParamLimits

0xabd5,	// (0x0000c1ae) list_setting_pane_g1

0xab00,	// (0x0000c0d9) list_setting_pane_g2_ParamLimits

0xab00,	// (0x0000c0d9) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00010c15) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00010c15) list_setting_pane_g

0xad58,	// (0x0000c331) list_setting_pane_t1_ParamLimits

0xad58,	// (0x0000c331) list_setting_pane_t1

0xad6f,	// (0x0000c348) list_setting_pane_t2_ParamLimits

0xad6f,	// (0x0000c348) list_setting_pane_t2

0x0002,

0xf641,	// (0x00010c1a) list_setting_pane_t_ParamLimits

0xf641,	// (0x00010c1a) list_setting_pane_t

0xadae,	// (0x0000c387) set_value_pane_cp_ParamLimits

0xadae,	// (0x0000c387) set_value_pane_cp

0xabd5,	// (0x0000c1ae) list_setting_number_pane_g1_ParamLimits

0xabd5,	// (0x0000c1ae) list_setting_number_pane_g1

0xab00,	// (0x0000c0d9) list_setting_number_pane_g2_ParamLimits

0xab00,	// (0x0000c0d9) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x00010c15) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x00010c15) list_setting_number_pane_g

0xadbc,	// (0x0000c395) list_setting_number_pane_t1_ParamLimits

0xadbc,	// (0x0000c395) list_setting_number_pane_t1

0xadd0,	// (0x0000c3a9) list_setting_number_pane_t2_ParamLimits

0xadd0,	// (0x0000c3a9) list_setting_number_pane_t2

0xade7,	// (0x0000c3c0) list_setting_number_pane_t3_ParamLimits

0xade7,	// (0x0000c3c0) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x00010c21) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x00010c21) list_setting_number_pane_t

0xadae,	// (0x0000c387) set_value_pane_ParamLimits

0xadae,	// (0x0000c387) set_value_pane

0xf338,	// (0x00010911) bg_set_opt_pane_ParamLimits

0xf338,	// (0x00010911) bg_set_opt_pane

0xf359,	// (0x00010932) set_value_pane_t1

0xf367,	// (0x00010940) slider_set_pane_cp3

0xf370,	// (0x00010949) volume_small_pane_cp

0xf379,	// (0x00010952) list_form_gen_pane

0xf382,	// (0x0001095b) scroll_pane_cp8

0xae2a,	// (0x0000c403) form_field_data_pane_ParamLimits

0xae2a,	// (0x0000c403) form_field_data_pane

0xae45,	// (0x0000c41e) form_field_data_wide_pane_ParamLimits

0xae45,	// (0x0000c41e) form_field_data_wide_pane

0xf3a3,	// (0x0001097c) form_field_popup_pane_ParamLimits

0xf3a3,	// (0x0001097c) form_field_popup_pane

0xae69,	// (0x0000c442) form_field_popup_wide_pane_ParamLimits

0xae69,	// (0x0000c442) form_field_popup_wide_pane

0xf3c5,	// (0x0001099e) form_field_slider_pane_ParamLimits

0xf3c5,	// (0x0001099e) form_field_slider_pane

0xf3d8,	// (0x000109b1) form_field_slider_wide_pane_ParamLimits

0xf3d8,	// (0x000109b1) form_field_slider_wide_pane

0xf3eb,	// (0x000109c4) data_form_pane

0xae94,	// (0x0000c46d) form_field_data_pane_t1

0xf3f7,	// (0x000109d0) input_focus_pane

0xf405,	// (0x000109de) data_form_wide_pane

0xf43d,	// (0x00010a16) form_field_data_wide_pane_t1

0xf0df,	// (0x000106b8) input_focus_pane_cp6

0xaeae,	// (0x0000c487) form_field_popup_pane_t1

0xf3f7,	// (0x000109d0) input_focus_pane_cp7

0xf45c,	// (0x00010a35) list_form_pane

0xf470,	// (0x00010a49) form_field_popup_wide_pane_t1

0xf3f7,	// (0x000109d0) input_focus_pane_cp8

0xf482,	// (0x00010a5b) list_form_wide_pane

0xaed0,	// (0x0000c4a9) form_field_slider_pane_t1_ParamLimits

0xaed0,	// (0x0000c4a9) form_field_slider_pane_t1

0xaee8,	// (0x0000c4c1) form_field_slider_pane_t2_ParamLimits

0xaee8,	// (0x0000c4c1) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x00010c31) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x00010c31) form_field_slider_pane_t

0xec67,	// (0x00010240) input_focus_pane_cp9_ParamLimits

0xec67,	// (0x00010240) input_focus_pane_cp9

0xaefd,	// (0x0000c4d6) slider_cont_pane_ParamLimits

0xaefd,	// (0x0000c4d6) slider_cont_pane

0xf48e,	// (0x00010a67) form_field_slider_wide_pane_t1_ParamLimits

0xf48e,	// (0x00010a67) form_field_slider_wide_pane_t1

0xf4a0,	// (0x00010a79) form_field_slider_wide_pane_t2_ParamLimits

0xf4a0,	// (0x00010a79) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x00010c36) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x00010c36) form_field_slider_wide_pane_t

0xec67,	// (0x00010240) input_focus_pane_cp10_ParamLimits

0xec67,	// (0x00010240) input_focus_pane_cp10

0xaf11,	// (0x0000c4ea) slider_cont_pane_cp1_ParamLimits

0xaf11,	// (0x0000c4ea) slider_cont_pane_cp1

0xaf25,	// (0x0000c4fe) slider_form_pane_cp

0xf4b2,	// (0x00010a8b) input_focus_pane_g1

0xf4ba,	// (0x00010a93) input_focus_pane_g2

0xf4c2,	// (0x00010a9b) input_focus_pane_g3

0xf4ca,	// (0x00010aa3) input_focus_pane_g4

0xf4d2,	// (0x00010aab) input_focus_pane_g5

0xf4da,	// (0x00010ab3) input_focus_pane_g6

0xf4e2,	// (0x00010abb) input_focus_pane_g7

0xf4ea,	// (0x00010ac3) input_focus_pane_g8

0xf4f2,	// (0x00010acb) input_focus_pane_g9

0xea4c,	// (0x00010025) input_focus_pane_g10

0x0009,

0xf662,	// (0x00010c3b) input_focus_pane_g

0x29fa,	// (0x00003fd3) wait_border_pane_g3_copy1

0xaf2d,	// (0x0000c506) data_form_pane_t1

0xea4c,	// (0x00010025) wait_anim_pane_g1_copy1

0xc758,	// (0x0000dd31) data_form_wide_pane_t1

0xf4fa,	// (0x00010ad3) list_form_graphic_pane_cp_ParamLimits

0xf4fa,	// (0x00010ad3) list_form_graphic_pane_cp

0x3bc1,	// (0x0000519a) slider_form_pane_g1

0x3bca,	// (0x000051a3) slider_form_pane_g2

0x0006,

0xf959,	// (0x00010f32) slider_form_pane_g

0xf4fa,	// (0x00010ad3) list_form_graphic_pane_ParamLimits

0xf4fa,	// (0x00010ad3) list_form_graphic_pane

0xf50c,	// (0x00010ae5) list_form_graphic_pane_g1

0xf514,	// (0x00010aed) list_form_graphic_pane_t1_ParamLimits

0xf514,	// (0x00010aed) list_form_graphic_pane_t1

0xec7f,	// (0x00010258) list_highlight_pane_cp5_ParamLimits

0xec7f,	// (0x00010258) list_highlight_pane_cp5

0xaf49,	// (0x0000c522) find_pane_g1

0x0001,	// (0x000015da) input_find_pane

0xaf52,	// (0x0000c52b) input_find_pane_g1_ParamLimits

0xaf52,	// (0x0000c52b) input_find_pane_g1

0xaf5e,	// (0x0000c537) input_find_pane_t1_ParamLimits

0xaf5e,	// (0x0000c537) input_find_pane_t1

0xaf73,	// (0x0000c54c) input_find_pane_t2_ParamLimits

0xaf73,	// (0x0000c54c) input_find_pane_t2

0x0001,

0xf677,	// (0x00010c50) input_find_pane_t_ParamLimits

0xf677,	// (0x00010c50) input_find_pane_t

0x0040,	// (0x00001619) input_focus_pane_cp5_ParamLimits

0x0040,	// (0x00001619) input_focus_pane_cp5

0x005f,	// (0x00001638) bg_popup_window_pane_cp2_ParamLimits

0x005f,	// (0x00001638) bg_popup_window_pane_cp2

0x006c,	// (0x00001645) listscroll_menu_pane_ParamLimits

0x006c,	// (0x00001645) listscroll_menu_pane

0xaf94,	// (0x0000c56d) popup_submenu_window_ParamLimits

0xaf94,	// (0x0000c56d) popup_submenu_window

0x00a8,	// (0x00001681) find_popup_pane_g1

0x00b0,	// (0x00001689) input_popup_find_pane_cp

0x00ba,	// (0x00001693) input_focus_pane_cp4_ParamLimits

0x00ba,	// (0x00001693) input_focus_pane_cp4

0x00d6,	// (0x000016af) input_popup_find_pane_t1_ParamLimits

0x00d6,	// (0x000016af) input_popup_find_pane_t1

0xebc5,	// (0x0001019e) bg_popup_sub_pane_cp

0x0104,	// (0x000016dd) listscroll_popup_sub_pane

0x010c,	// (0x000016e5) list_submenu_pane_ParamLimits

0x010c,	// (0x000016e5) list_submenu_pane

0x011d,	// (0x000016f6) scroll_pane_cp4

0x0125,	// (0x000016fe) list_single_popup_submenu_pane_ParamLimits

0x0125,	// (0x000016fe) list_single_popup_submenu_pane

0x013a,	// (0x00001713) list_single_popup_submenu_pane_g1

0x0142,	// (0x0000171b) list_single_popup_submenu_pane_t1_ParamLimits

0x0142,	// (0x0000171b) list_single_popup_submenu_pane_t1

0xec67,	// (0x00010240) bg_active_tab_pane_cp1_ParamLimits

0xec67,	// (0x00010240) bg_active_tab_pane_cp1

0xafd2,	// (0x0000c5ab) tabs_2_active_pane_g1

0xafda,	// (0x0000c5b3) tabs_2_active_pane_t1

0xec67,	// (0x00010240) bg_passive_tab_pane_cp1_ParamLimits

0xec67,	// (0x00010240) bg_passive_tab_pane_cp1

0xafd2,	// (0x0000c5ab) tabs_2_passive_pane_g1

0xafda,	// (0x0000c5b3) tabs_2_passive_pane_t1

0xec7f,	// (0x00010258) bg_active_tab_pane_cp4

0xafec,	// (0x0000c5c5) tabs_2_long_active_pane_t1

0x15f7,	// (0x00002bd0) bg_passive_tab_pane_cp4

0x2287,	// (0x00003860) list_single_midp_graphic_pane_g4_ParamLimits

0xec7f,	// (0x00010258) bg_active_tab_pane_cp5

0xafff,	// (0x0000c5d8) tabs_3_long_active_pane_t1

0x15f7,	// (0x00002bd0) bg_passive_tab_pane_cp5

0x2287,	// (0x00003860) list_single_midp_graphic_pane_g4

0xec7f,	// (0x00010258) bg_popup_window_pane_cp13_ParamLimits

0xec7f,	// (0x00010258) bg_popup_window_pane_cp13

0x01b9,	// (0x00001792) listscroll_popup_fast_pane_ParamLimits

0x01b9,	// (0x00001792) listscroll_popup_fast_pane

0x01c8,	// (0x000017a1) grid_popup_fast_pane_ParamLimits

0x01c8,	// (0x000017a1) grid_popup_fast_pane

0x01da,	// (0x000017b3) scroll_pane_cp9_ParamLimits

0x01da,	// (0x000017b3) scroll_pane_cp9

0x5f80,	// (0x00007559) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5f80,	// (0x00007559) list_single_graphic_hl_pane_t1_cp2

0x01fe,	// (0x000017d7) input_focus_pane_cp20_ParamLimits

0x01fe,	// (0x000017d7) input_focus_pane_cp20

0x020c,	// (0x000017e5) query_popup_data_pane_t1_ParamLimits

0x020c,	// (0x000017e5) query_popup_data_pane_t1

0x021f,	// (0x000017f8) query_popup_data_pane_t2_ParamLimits

0x021f,	// (0x000017f8) query_popup_data_pane_t2

0x0265,	// (0x0000183e) query_popup_data_pane_t3_ParamLimits

0x0265,	// (0x0000183e) query_popup_data_pane_t3

0x02a6,	// (0x0000187f) query_popup_data_pane_t4_ParamLimits

0x02a6,	// (0x0000187f) query_popup_data_pane_t4

0x02e2,	// (0x000018bb) query_popup_data_pane_t5_ParamLimits

0x02e2,	// (0x000018bb) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x00010c55) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x00010c55) query_popup_data_pane_t

0xf4b2,	// (0x00010a8b) bg_set_opt_pane_g1

0xf4ba,	// (0x00010a93) bg_set_opt_pane_g2

0xf4c2,	// (0x00010a9b) bg_set_opt_pane_g3

0xf4ca,	// (0x00010aa3) bg_set_opt_pane_g4

0xf4d2,	// (0x00010aab) bg_set_opt_pane_g5

0xf4da,	// (0x00010ab3) bg_set_opt_pane_g6

0xf4e2,	// (0x00010abb) bg_set_opt_pane_g7

0xf4ea,	// (0x00010ac3) bg_set_opt_pane_g8

0xf4f2,	// (0x00010acb) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x00010c60) bg_set_opt_pane_g

0x0be1,	// (0x000021ba) control_top_pane_stacon_ParamLimits

0x0be1,	// (0x000021ba) control_top_pane_stacon

0x0c34,	// (0x0000220d) signal_pane_stacon_ParamLimits

0x0c34,	// (0x0000220d) signal_pane_stacon

0x0c59,	// (0x00002232) stacon_top_pane_g1_ParamLimits

0x0c59,	// (0x00002232) stacon_top_pane_g1

0x0c7b,	// (0x00002254) title_pane_stacon_ParamLimits

0x0c7b,	// (0x00002254) title_pane_stacon

0x0ca5,	// (0x0000227e) uni_indicator_pane_stacon_ParamLimits

0x0ca5,	// (0x0000227e) uni_indicator_pane_stacon

0x0cba,	// (0x00002293) battery_pane_stacon_ParamLimits

0x0cba,	// (0x00002293) battery_pane_stacon

0x0cfe,	// (0x000022d7) control_bottom_pane_stacon_ParamLimits

0x0cfe,	// (0x000022d7) control_bottom_pane_stacon

0x0d21,	// (0x000022fa) navi_pane_stacon_ParamLimits

0x0d21,	// (0x000022fa) navi_pane_stacon

0x0d44,	// (0x0000231d) stacon_bottom_pane_g1_ParamLimits

0x0d44,	// (0x0000231d) stacon_bottom_pane_g1

0x0319,	// (0x000018f2) aid_levels_signal_lsc_ParamLimits

0x0319,	// (0x000018f2) aid_levels_signal_lsc

0x0330,	// (0x00001909) signal_pane_stacon_g1_ParamLimits

0x0330,	// (0x00001909) signal_pane_stacon_g1

0x0344,	// (0x0000191d) signal_pane_stacon_g2_ParamLimits

0x0344,	// (0x0000191d) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x00010c73) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x00010c73) signal_pane_stacon_g

0x0386,	// (0x0000195f) title_pane_stacon_t1_ParamLimits

0x0386,	// (0x0000195f) title_pane_stacon_t1

0x03ab,	// (0x00001984) uni_indicator_pane_stacon_g1

0x03b5,	// (0x0000198e) uni_indicator_pane_stacon_g2

0x03bf,	// (0x00001998) uni_indicator_pane_stacon_g3

0x03c9,	// (0x000019a2) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x00010c7f) uni_indicator_pane_stacon_g

0x03d3,	// (0x000019ac) control_top_pane_stacon_g1

0x03db,	// (0x000019b4) control_top_pane_stacon_t1_ParamLimits

0x03db,	// (0x000019b4) control_top_pane_stacon_t1

0x0412,	// (0x000019eb) aid_levels_battery_lsc_ParamLimits

0x0412,	// (0x000019eb) aid_levels_battery_lsc

0x042a,	// (0x00001a03) battery_pane_stacon_g1_ParamLimits

0x042a,	// (0x00001a03) battery_pane_stacon_g1

0x043d,	// (0x00001a16) battery_pane_stacon_g2_ParamLimits

0x043d,	// (0x00001a16) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x00010c88) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x00010c88) battery_pane_stacon_g

0x047b,	// (0x00001a54) navi_icon_pane_stacon

0x048f,	// (0x00001a68) navi_navi_pane_stacon

0x047b,	// (0x00001a54) navi_text_pane_stacon

0x03d3,	// (0x000019ac) control_bottom_pane_stacon_g1

0x04a5,	// (0x00001a7e) control_bottom_pane_stacon_t1_ParamLimits

0x04a5,	// (0x00001a7e) control_bottom_pane_stacon_t1

0xb011,	// (0x0000c5ea) grid_app_pane_ParamLimits

0xb011,	// (0x0000c5ea) grid_app_pane

0xb049,	// (0x0000c622) scroll_pane_cp15_ParamLimits

0xb049,	// (0x0000c622) scroll_pane_cp15

0xb05e,	// (0x0000c637) cell_app_pane_ParamLimits

0xb05e,	// (0x0000c637) cell_app_pane

0xb0ab,	// (0x0000c684) cell_app_pane_g1_ParamLimits

0xb0ab,	// (0x0000c684) cell_app_pane_g1

0x057b,	// (0x00001b54) cell_app_pane_g2_ParamLimits

0x057b,	// (0x00001b54) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00010c8d) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00010c8d) cell_app_pane_g

0xb0cf,	// (0x0000c6a8) cell_app_pane_t1_ParamLimits

0xb0cf,	// (0x0000c6a8) cell_app_pane_t1

0x059e,	// (0x00001b77) grid_highlight_pane_ParamLimits

0x059e,	// (0x00001b77) grid_highlight_pane

0xf4b2,	// (0x00010a8b) cell_highlight_pane_g1

0xf4ba,	// (0x00010a93) cell_highlight_pane_g2

0xf4c2,	// (0x00010a9b) cell_highlight_pane_g3

0xf4ca,	// (0x00010aa3) cell_highlight_pane_g4

0xf4d2,	// (0x00010aab) cell_highlight_pane_g5

0xf4da,	// (0x00010ab3) cell_highlight_pane_g6

0xf4e2,	// (0x00010abb) cell_highlight_pane_g7

0xf4ea,	// (0x00010ac3) cell_highlight_pane_g8

0xf4f2,	// (0x00010acb) cell_highlight_pane_g9

0xea4c,	// (0x00010025) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00010c3b) cell_highlight_pane_g

0x05c2,	// (0x00001b9b) bg_scroll_pane

0x05e1,	// (0x00001bba) scroll_handle_pane

0x0632,	// (0x00001c0b) scroll_bg_pane_g1

0x0647,	// (0x00001c20) scroll_bg_pane_g2

0x065f,	// (0x00001c38) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x00010c92) scroll_bg_pane_g

0x0674,	// (0x00001c4d) scroll_handle_focus_pane_ParamLimits

0x0674,	// (0x00001c4d) scroll_handle_focus_pane

0x0632,	// (0x00001c0b) scroll_handle_pane_g1

0x0681,	// (0x00001c5a) scroll_handle_pane_g2

0x065f,	// (0x00001c38) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x00010c99) scroll_handle_pane_g

0x00ba,	// (0x00001693) bg_popup_sub_pane_cp21_ParamLimits

0x00ba,	// (0x00001693) bg_popup_sub_pane_cp21

0x0695,	// (0x00001c6e) popup_fep_japan_predictive_window_t1_ParamLimits

0x0695,	// (0x00001c6e) popup_fep_japan_predictive_window_t1

0x06ac,	// (0x00001c85) popup_fep_japan_predictive_window_t2_ParamLimits

0x06ac,	// (0x00001c85) popup_fep_japan_predictive_window_t2

0x06df,	// (0x00001cb8) popup_fep_japan_predictive_window_t3_ParamLimits

0x06df,	// (0x00001cb8) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x00010ca0) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x00010ca0) popup_fep_japan_predictive_window_t

0xebc5,	// (0x0001019e) bg_popup_sub_pane_cp23

0x0716,	// (0x00001cef) listscroll_japin_cand_pane

0x071e,	// (0x00001cf7) popup_fep_japan_candidate_window_t1

0x072c,	// (0x00001d05) candidate_pane_ParamLimits

0x072c,	// (0x00001d05) candidate_pane

0x073e,	// (0x00001d17) scroll_pane_cp30

0x0748,	// (0x00001d21) list_single_popup_jap_candidate_pane_ParamLimits

0x0748,	// (0x00001d21) list_single_popup_jap_candidate_pane

0xebc5,	// (0x0001019e) list_highlight_pane_cp30

0x075c,	// (0x00001d35) list_single_popup_jap_candidate_pane_t1

0xb0ef,	// (0x0000c6c8) level_1_signal

0xb101,	// (0x0000c6da) level_2_signal

0xb114,	// (0x0000c6ed) level_3_signal

0xb127,	// (0x0000c700) level_4_signal

0xb13a,	// (0x0000c713) level_5_signal

0xb14d,	// (0x0000c726) level_6_signal

0xb160,	// (0x0000c739) level_7_signal

0xb0ef,	// (0x0000c6c8) level_1_battery

0xb101,	// (0x0000c6da) level_2_battery

0xb114,	// (0x0000c6ed) level_3_battery

0xb127,	// (0x0000c700) level_4_battery

0xb13a,	// (0x0000c713) level_5_battery

0xb14d,	// (0x0000c726) level_6_battery

0xb160,	// (0x0000c739) level_7_battery

0x07fd,	// (0x00001dd6) list_menu_pane_ParamLimits

0x07fd,	// (0x00001dd6) list_menu_pane

0x0813,	// (0x00001dec) scroll_pane_cp25_ParamLimits

0x0813,	// (0x00001dec) scroll_pane_cp25

0x082c,	// (0x00001e05) list_double2_graphic_pane_cp2_ParamLimits

0x082c,	// (0x00001e05) list_double2_graphic_pane_cp2

0x082c,	// (0x00001e05) list_double2_large_graphic_pane_cp2_ParamLimits

0x082c,	// (0x00001e05) list_double2_large_graphic_pane_cp2

0x082c,	// (0x00001e05) list_double2_pane_cp2_ParamLimits

0x082c,	// (0x00001e05) list_double2_pane_cp2

0x082c,	// (0x00001e05) list_double_graphic_pane_cp2_ParamLimits

0x082c,	// (0x00001e05) list_double_graphic_pane_cp2

0x082c,	// (0x00001e05) list_double_large_graphic_pane_cp2_ParamLimits

0x082c,	// (0x00001e05) list_double_large_graphic_pane_cp2

0x082c,	// (0x00001e05) list_double_number_pane_cp2_ParamLimits

0x082c,	// (0x00001e05) list_double_number_pane_cp2

0x082c,	// (0x00001e05) list_double_pane_cp2_ParamLimits

0x082c,	// (0x00001e05) list_double_pane_cp2

0xb173,	// (0x0000c74c) list_single_2graphic_pane_cp2_ParamLimits

0xb173,	// (0x0000c74c) list_single_2graphic_pane_cp2

0xb173,	// (0x0000c74c) list_single_graphic_heading_pane_cp2_ParamLimits

0xb173,	// (0x0000c74c) list_single_graphic_heading_pane_cp2

0xb173,	// (0x0000c74c) list_single_graphic_pane_cp2_ParamLimits

0xb173,	// (0x0000c74c) list_single_graphic_pane_cp2

0xb173,	// (0x0000c74c) list_single_heading_pane_cp2_ParamLimits

0xb173,	// (0x0000c74c) list_single_heading_pane_cp2

0x086f,	// (0x00001e48) list_single_large_graphic_pane_cp2_ParamLimits

0x086f,	// (0x00001e48) list_single_large_graphic_pane_cp2

0xb173,	// (0x0000c74c) list_single_number_heading_pane_cp2_ParamLimits

0xb173,	// (0x0000c74c) list_single_number_heading_pane_cp2

0xb173,	// (0x0000c74c) list_single_number_pane_cp2_ParamLimits

0xb173,	// (0x0000c74c) list_single_number_pane_cp2

0xb173,	// (0x0000c74c) list_single_pane_cp2_ParamLimits

0xb173,	// (0x0000c74c) list_single_pane_cp2

0x0938,	// (0x00001f11) bg_popup_sub_pane_cp22

0x095d,	// (0x00001f36) popup_side_volume_key_window_g1

0x0987,	// (0x00001f60) popup_side_volume_key_window_t1

0x09a5,	// (0x00001f7e) volume_small_pane_cp1

0xec67,	// (0x00010240) bg_popup_sub_pane_cp24_ParamLimits

0xec67,	// (0x00010240) bg_popup_sub_pane_cp24

0x09ad,	// (0x00001f86) fep_china_uni_candidate_pane_ParamLimits

0x09ad,	// (0x00001f86) fep_china_uni_candidate_pane

0x09c1,	// (0x00001f9a) fep_china_uni_entry_pane

0x09d1,	// (0x00001faa) popup_fep_china_uni_window_g1

0x09ed,	// (0x00001fc6) fep_china_uni_entry_pane_g1

0x09f7,	// (0x00001fd0) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x00010cd1) fep_china_uni_entry_pane_g

0x0a01,	// (0x00001fda) fep_entry_item_pane

0x0a0b,	// (0x00001fe4) fep_candidate_item_pane

0x0a13,	// (0x00001fec) fep_china_uni_candidate_pane_g1

0x0a1d,	// (0x00001ff6) fep_china_uni_candidate_pane_g2

0x0a25,	// (0x00001ffe) fep_china_uni_candidate_pane_g3

0x0a2d,	// (0x00002006) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x00010cd6) fep_china_uni_candidate_pane_g

0xea4c,	// (0x00010025) fep_entry_item_pane_g1

0x0a37,	// (0x00002010) fep_entry_item_pane_t1_ParamLimits

0x0a37,	// (0x00002010) fep_entry_item_pane_t1

0x0a4d,	// (0x00002026) fep_candidate_item_pane_t1_ParamLimits

0x0a4d,	// (0x00002026) fep_candidate_item_pane_t1

0x0a62,	// (0x0000203b) fep_candidate_item_pane_t2_ParamLimits

0x0a62,	// (0x0000203b) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x00010cdf) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x00010cdf) fep_candidate_item_pane_t

0xec7f,	// (0x00010258) list_highlight_pane_cp31_ParamLimits

0xec7f,	// (0x00010258) list_highlight_pane_cp31

0x0a74,	// (0x0000204d) level_1_signal_lsc

0x0a7d,	// (0x00002056) level_2_signal_lsc

0x0a86,	// (0x0000205f) level_3_signal_lsc

0x0a8f,	// (0x00002068) level_4_signal_lsc

0x0a98,	// (0x00002071) level_5_signal_lsc

0x0aa1,	// (0x0000207a) level_6_signal_lsc

0x0aaa,	// (0x00002083) level_7_signal_lsc

0x0aaa,	// (0x00002083) level_1_battery_lsc

0x0ab3,	// (0x0000208c) level_2_battery_lsc

0x0abc,	// (0x00002095) level_3_battery_lsc

0x0ac5,	// (0x0000209e) level_4_battery_lsc

0x0ace,	// (0x000020a7) level_5_battery_lsc

0x0ad7,	// (0x000020b0) level_6_battery_lsc

0x0a74,	// (0x0000204d) level_7_battery_lsc

0x0ae0,	// (0x000020b9) scroll_handle_focus_pane_g1

0x0ae9,	// (0x000020c2) scroll_handle_focus_pane_g2

0x0af2,	// (0x000020cb) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x00010ce4) scroll_handle_focus_pane_g

0xb202,	// (0x0000c7db) list_single_2graphic_pane_g1_ParamLimits

0xb202,	// (0x0000c7db) list_single_2graphic_pane_g1

0xaa84,	// (0x0000c05d) list_single_2graphic_pane_g2_ParamLimits

0xaa84,	// (0x0000c05d) list_single_2graphic_pane_g2

0x20be,	// (0x00003697) list_single_2graphic_pane_g3_ParamLimits

0x20be,	// (0x00003697) list_single_2graphic_pane_g3

0xb20e,	// (0x0000c7e7) list_single_2graphic_pane_g4_ParamLimits

0xb20e,	// (0x0000c7e7) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x00010ceb) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x00010ceb) list_single_2graphic_pane_g

0xb21f,	// (0x0000c7f8) list_single_2graphic_pane_t1_ParamLimits

0xb21f,	// (0x0000c7f8) list_single_2graphic_pane_t1

0xb24d,	// (0x0000c826) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb24d,	// (0x0000c826) list_double2_graphic_large_graphic_pane_g1

0xaaef,	// (0x0000c0c8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xaaef,	// (0x0000c0c8) list_double2_graphic_large_graphic_pane_g2

0xab00,	// (0x0000c0d9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xab00,	// (0x0000c0d9) list_double2_graphic_large_graphic_pane_g3

0xb25f,	// (0x0000c838) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb25f,	// (0x0000c838) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x00010cf4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x00010cf4) list_double2_graphic_large_graphic_pane_g

0xb26b,	// (0x0000c844) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb26b,	// (0x0000c844) list_double2_graphic_large_graphic_pane_t1

0xb281,	// (0x0000c85a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb281,	// (0x0000c85a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x00010cfd) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x00010cfd) list_double2_graphic_large_graphic_pane_t

0x0e07,	// (0x000023e0) popup_fast_swap_window_ParamLimits

0x0e07,	// (0x000023e0) popup_fast_swap_window

0x0e25,	// (0x000023fe) popup_side_volume_key_window

0x0e43,	// (0x0000241c) stacon_top_pane

0x0e4d,	// (0x00002426) status_pane_ParamLimits

0x0e4d,	// (0x00002426) status_pane

0xb2db,	// (0x0000c8b4) status_small_pane

0xebc5,	// (0x0001019e) control_pane

0xebc5,	// (0x0001019e) stacon_bottom_pane

0xf382,	// (0x0001095b) scroll_pane_cp121

0xf379,	// (0x00010952) set_content_pane

0xb293,	// (0x0000c86c) bg_active_tab_pane_g1_cp1

0x0b95,	// (0x0000216e) bg_active_tab_pane_g2_cp1

0xb29c,	// (0x0000c875) bg_active_tab_pane_g3_cp1

0xb293,	// (0x0000c86c) bg_passive_tab_pane_g1_cp1

0x0b95,	// (0x0000216e) bg_passive_tab_pane_g2_cp1

0xb29c,	// (0x0000c875) bg_passive_tab_pane_g3_cp1

0xb2a5,	// (0x0000c87e) bg_active_tab_pane_g1_cp2

0x0b95,	// (0x0000216e) bg_active_tab_pane_g2_cp2

0xb2ae,	// (0x0000c887) bg_active_tab_pane_g3_cp2

0xb2a5,	// (0x0000c87e) bg_passive_tab_pane_g1_cp2

0x0b95,	// (0x0000216e) bg_passive_tab_pane_g2_cp2

0xb2ae,	// (0x0000c887) bg_passive_tab_pane_g3_cp2

0xb2b7,	// (0x0000c890) bg_active_tab_pane_g1_cp3

0x0b95,	// (0x0000216e) bg_active_tab_pane_g2_cp3

0xb2c0,	// (0x0000c899) bg_active_tab_pane_g3_cp3

0xb2b7,	// (0x0000c890) bg_passive_tab_pane_g1_cp3

0x0b95,	// (0x0000216e) bg_passive_tab_pane_g2_cp3

0xb2c0,	// (0x0000c899) bg_passive_tab_pane_g3_cp3

0xb2c9,	// (0x0000c8a2) bg_active_tab_pane_g1_cp4

0x0b95,	// (0x0000216e) bg_active_tab_pane_g2_cp4

0xb2d2,	// (0x0000c8ab) bg_active_tab_pane_g3_cp4

0xb2c9,	// (0x0000c8a2) bg_passive_tab_pane_g1_cp4

0x0b95,	// (0x0000216e) bg_passive_tab_pane_g2_cp4

0xb2d2,	// (0x0000c8ab) bg_passive_tab_pane_g3_cp4

0x0d60,	// (0x00002339) bg_active_tab_pane_g1_cp5

0x0b95,	// (0x0000216e) bg_active_tab_pane_g2_cp5

0x0d69,	// (0x00002342) bg_active_tab_pane_g3_cp5

0x0d60,	// (0x00002339) bg_passive_tab_pane_g1_cp5

0x0b95,	// (0x0000216e) bg_passive_tab_pane_g2_cp5

0x0d69,	// (0x00002342) bg_passive_tab_pane_g3_cp5

0x4388,	// (0x00005961) list_set_graphic_pane_ParamLimits

0x4388,	// (0x00005961) list_set_graphic_pane

0xebc5,	// (0x0001019e) bg_set_opt_pane_cp4

0x0d88,	// (0x00002361) list_set_graphic_pane_g1_ParamLimits

0x0d88,	// (0x00002361) list_set_graphic_pane_g1

0x0d94,	// (0x0000236d) list_set_graphic_pane_g2_ParamLimits

0x0d94,	// (0x0000236d) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x00010d02) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x00010d02) list_set_graphic_pane_g

0x0009,

0xfaac,	// (0x00011085) volume_small_pane_cp_g

0x0db8,	// (0x00002391) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x0db8,	// (0x00002391) list_double2_large_graphic_pane_g1_cp2

0x0dc6,	// (0x0000239f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x0dc6,	// (0x0000239f) list_double2_large_graphic_pane_g2_cp2

0x0dd7,	// (0x000023b0) list_double2_large_graphic_pane_g3_cp2

0x0ddf,	// (0x000023b8) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0ddf,	// (0x000023b8) list_double2_large_graphic_pane_t1_cp2

0x0df5,	// (0x000023ce) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0df5,	// (0x000023ce) list_double2_large_graphic_pane_t2_cp2

0x364a,	// (0x00004c23) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x364a,	// (0x00004c23) list_double_large_graphic_pane_g1_cp2

0x365d,	// (0x00004c36) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x365d,	// (0x00004c36) list_double_large_graphic_pane_g2_cp2

0x0f76,	// (0x0000254f) list_double_large_graphic_pane_g3_cp2

0x366e,	// (0x00004c47) list_double_large_graphic_pane_g4_cp

0x3676,	// (0x00004c4f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3676,	// (0x00004c4f) list_double_large_graphic_pane_t1_cp2

0x368d,	// (0x00004c66) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x368d,	// (0x00004c66) list_double_large_graphic_pane_t2_cp2

0x0e66,	// (0x0000243f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0e66,	// (0x0000243f) list_double2_graphic_pane_g1_cp2

0x0e74,	// (0x0000244d) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0e74,	// (0x0000244d) list_double2_graphic_pane_g2_cp2

0x0e85,	// (0x0000245e) list_double2_graphic_pane_g3_cp2

0x0e8f,	// (0x00002468) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0e8f,	// (0x00002468) list_double2_graphic_pane_t1_cp2

0x0ea5,	// (0x0000247e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0ea5,	// (0x0000247e) list_double2_graphic_pane_t2_cp2

0x0eb7,	// (0x00002490) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0eb7,	// (0x00002490) list_single_number_heading_pane_g1_cp2

0x0ec3,	// (0x0000249c) list_single_number_heading_pane_g2_cp2

0x0ecb,	// (0x000024a4) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0ecb,	// (0x000024a4) list_single_number_heading_pane_t1_cp2

0x0ee1,	// (0x000024ba) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0ee1,	// (0x000024ba) list_single_number_heading_pane_t2_cp2

0x0ef5,	// (0x000024ce) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0ef5,	// (0x000024ce) list_single_number_heading_pane_t3_cp2

0x0eb7,	// (0x00002490) list_single_heading_pane_g1_cp2_ParamLimits

0x0eb7,	// (0x00002490) list_single_heading_pane_g1_cp2

0x0ec3,	// (0x0000249c) list_single_heading_pane_g2_cp2

0x0ecb,	// (0x000024a4) list_single_heading_pane_t1_cp2_ParamLimits

0x0ecb,	// (0x000024a4) list_single_heading_pane_t1_cp2

0x3444,	// (0x00004a1d) list_single_heading_pane_t2_cp2_ParamLimits

0x3444,	// (0x00004a1d) list_single_heading_pane_t2_cp2

0x338c,	// (0x00004965) list_double_graphic_pane_g1_cp2_ParamLimits

0x338c,	// (0x00004965) list_double_graphic_pane_g1_cp2

0x3398,	// (0x00004971) list_double_graphic_pane_g2_cp2_ParamLimits

0x3398,	// (0x00004971) list_double_graphic_pane_g2_cp2

0x33a7,	// (0x00004980) list_double_graphic_pane_g3_cp2

0x33af,	// (0x00004988) list_double_graphic_pane_t1_cp2_ParamLimits

0x33af,	// (0x00004988) list_double_graphic_pane_t1_cp2

0x33c5,	// (0x0000499e) list_double_graphic_pane_t2_cp2_ParamLimits

0x33c5,	// (0x0000499e) list_double_graphic_pane_t2_cp2

0x0f6a,	// (0x00002543) list_double_number_pane_g1_cp2_ParamLimits

0x0f6a,	// (0x00002543) list_double_number_pane_g1_cp2

0x0f76,	// (0x0000254f) list_double_number_pane_g2_cp2

0x3350,	// (0x00004929) list_double_number_pane_t1_cp2_ParamLimits

0x3350,	// (0x00004929) list_double_number_pane_t1_cp2

0x3364,	// (0x0000493d) list_double_number_pane_t2_cp2_ParamLimits

0x3364,	// (0x0000493d) list_double_number_pane_t2_cp2

0x337a,	// (0x00004953) list_double_number_pane_t3_cp2_ParamLimits

0x337a,	// (0x00004953) list_double_number_pane_t3_cp2

0x3228,	// (0x00004801) list_single_graphic_pane_g1_cp2_ParamLimits

0x3228,	// (0x00004801) list_single_graphic_pane_g1_cp2

0x0fd0,	// (0x000025a9) list_single_graphic_pane_g2_cp2_ParamLimits

0x0fd0,	// (0x000025a9) list_single_graphic_pane_g2_cp2

0x0fdc,	// (0x000025b5) list_single_graphic_pane_g3_cp2

0x31fe,	// (0x000047d7) list_single_graphic_pane_t1_cp2_ParamLimits

0x31fe,	// (0x000047d7) list_single_graphic_pane_t1_cp2

0x0fd0,	// (0x000025a9) list_single_number_pane_g1_cp2_ParamLimits

0x0fd0,	// (0x000025a9) list_single_number_pane_g1_cp2

0x0fdc,	// (0x000025b5) list_single_number_pane_g2_cp2

0x31fe,	// (0x000047d7) list_single_number_pane_t1_cp2_ParamLimits

0x31fe,	// (0x000047d7) list_single_number_pane_t1_cp2

0x3214,	// (0x000047ed) list_single_number_pane_t2_cp2_ParamLimits

0x3214,	// (0x000047ed) list_single_number_pane_t2_cp2

0x0dc6,	// (0x0000239f) list_double2_pane_g1_cp2_ParamLimits

0x0dc6,	// (0x0000239f) list_double2_pane_g1_cp2

0x0dd7,	// (0x000023b0) list_double2_pane_g2_cp2

0x0f42,	// (0x0000251b) list_double2_pane_t1_cp2_ParamLimits

0x0f42,	// (0x0000251b) list_double2_pane_t1_cp2

0x0f58,	// (0x00002531) list_double2_pane_t2_cp2_ParamLimits

0x0f58,	// (0x00002531) list_double2_pane_t2_cp2

0x0f6a,	// (0x00002543) list_double_pane_g1_cp2_ParamLimits

0x0f6a,	// (0x00002543) list_double_pane_g1_cp2

0x0f76,	// (0x0000254f) list_double_pane_g2_cp2

0x0f7e,	// (0x00002557) list_double_pane_t1_cp2_ParamLimits

0x0f7e,	// (0x00002557) list_double_pane_t1_cp2

0x0f94,	// (0x0000256d) list_double_pane_t2_cp2_ParamLimits

0x0f94,	// (0x0000256d) list_double_pane_t2_cp2

0x0fc0,	// (0x00002599) list_single_pane_cp2_g3

0x0fd0,	// (0x000025a9) list_single_pane_g1_cp2_ParamLimits

0x0fd0,	// (0x000025a9) list_single_pane_g1_cp2

0x0fdc,	// (0x000025b5) list_single_pane_g2_cp2

0x0fe4,	// (0x000025bd) list_single_pane_t1_cp2_ParamLimits

0x0fe4,	// (0x000025bd) list_single_pane_t1_cp2

0x0ffc,	// (0x000025d5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x0ffc,	// (0x000025d5) list_single_large_graphic_pane_g1_cp2

0x100a,	// (0x000025e3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x100a,	// (0x000025e3) list_single_large_graphic_pane_g2_cp2

0x1016,	// (0x000025ef) list_single_large_graphic_pane_g3_cp2

0x101e,	// (0x000025f7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x101e,	// (0x000025f7) list_single_large_graphic_pane_g4_cp1

0x1038,	// (0x00002611) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1038,	// (0x00002611) list_single_large_graphic_pane_t1_cp2

0x306d,	// (0x00004646) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x306d,	// (0x00004646) list_single_graphic_heading_pane_g1_cp2

0x303a,	// (0x00004613) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x303a,	// (0x00004613) list_single_graphic_heading_pane_g4_cp2

0x0fdc,	// (0x000025b5) list_single_graphic_heading_pane_g5_cp2

0x3079,	// (0x00004652) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3079,	// (0x00004652) list_single_graphic_heading_pane_t1_cp2

0x308f,	// (0x00004668) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x308f,	// (0x00004668) list_single_graphic_heading_pane_t2_cp2

0x302e,	// (0x00004607) list_single_2graphic_pane_g1_cp2_ParamLimits

0x302e,	// (0x00004607) list_single_2graphic_pane_g1_cp2

0x303a,	// (0x00004613) list_single_2graphic_pane_g2_cp2_ParamLimits

0x303a,	// (0x00004613) list_single_2graphic_pane_g2_cp2

0x0fdc,	// (0x000025b5) list_single_2graphic_pane_g3_cp2

0x304b,	// (0x00004624) list_single_2graphic_pane_g4_cp2_ParamLimits

0x304b,	// (0x00004624) list_single_2graphic_pane_g4_cp2

0x3057,	// (0x00004630) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3057,	// (0x00004630) list_single_2graphic_pane_t1_cp2

0xea4c,	// (0x00010025) list_highlight_pane_g10_cp1

0x2c06,	// (0x000041df) list_highlight_pane_g1_cp1

0x2c0e,	// (0x000041e7) list_highlight_pane_g2_cp1

0x2c16,	// (0x000041ef) list_highlight_pane_g3_cp1

0x2c1e,	// (0x000041f7) list_highlight_pane_g4_cp1

0x2c26,	// (0x000041ff) list_highlight_pane_g5_cp1

0x2c2e,	// (0x00004207) list_highlight_pane_g6_cp1

0x2c36,	// (0x0000420f) list_highlight_pane_g7_cp1

0x2c3e,	// (0x00004217) list_highlight_pane_g8_cp1

0x2c46,	// (0x0000421f) list_highlight_pane_g9_cp1

0xc288,	// (0x0000d861) form_field_slider_pane_t3

0xc296,	// (0x0000d86f) form_field_slider_pane_t4

0x2b42,	// (0x0000411b) slider_form_pane_ParamLimits

0x2b42,	// (0x0000411b) slider_form_pane

0xebc5,	// (0x0001019e) control_abbreviations

0xebc5,	// (0x0001019e) control_conventions

0xebc5,	// (0x0001019e) control_definitions

0xebc5,	// (0x0001019e) format_table_attribute

0x349a,	// (0x00004a73) bg_popup_preview_window_pane_g9

0xebc5,	// (0x0001019e) format_table_data2

0xebc5,	// (0x0001019e) format_table_data3

0xebc5,	// (0x0001019e) format_table_data_example

0x0008,

0xebc5,	// (0x0001019e) intro_purpose

0xf8b9,	// (0x00010e92) bg_popup_preview_window_pane_g

0xebc5,	// (0x0001019e) texts_category

0xebc5,	// (0x0001019e) texts_graphics

0x104e,	// (0x00002627) text_digital

0x105d,	// (0x00002636) text_primary

0x106c,	// (0x00002645) text_primary_small

0x107b,	// (0x00002654) text_secondary

0x108a,	// (0x00002663) text_title

0x3da8,	// (0x00005381) bg_passive_tab_pane_g1_cp3_srt

0x0b95,	// (0x0000216e) bg_passive_tab_pane_g2_cp3_srt

0x3db1,	// (0x0000538a) bg_passive_tab_pane_g3_cp3_srt

0xec67,	// (0x00010240) bg_active_tab_pane_cp3_srt_ParamLimits

0xec67,	// (0x00010240) bg_active_tab_pane_cp3_srt

0x3dba,	// (0x00005393) tabs_4_active_pane_srt_g1

0xc837,	// (0x0000de10) tabs_4_active_pane_srt_t1_ParamLimits

0xc837,	// (0x0000de10) tabs_4_active_pane_srt_t1

0x3da8,	// (0x00005381) bg_active_tab_pane_g1_cp3_copy1

0x0b95,	// (0x0000216e) bg_active_tab_pane_g2_cp3_copy1

0x3db1,	// (0x0000538a) bg_active_tab_pane_g3_cp3_copy1

0xec7f,	// (0x00010258) tabs_2_long_active_pane_srt_ParamLimits

0xec7f,	// (0x00010258) tabs_2_long_active_pane_srt

0xec7f,	// (0x00010258) tabs_2_long_passive_pane_srt_ParamLimits

0xec7f,	// (0x00010258) tabs_2_long_passive_pane_srt

0x15f7,	// (0x00002bd0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x15f7,	// (0x00002bd0) bg_passive_tab_pane_cp4_srt

0x3960,	// (0x00004f39) bg_passive_tab_pane_g1_cp4_srt

0x0b95,	// (0x0000216e) bg_passive_tab_pane_g2_cp4_srt

0x3969,	// (0x00004f42) bg_passive_tab_pane_g3_cp4_srt

0xec7f,	// (0x00010258) bg_active_tab_pane_cp4_srt_ParamLimits

0xec7f,	// (0x00010258) bg_active_tab_pane_cp4_srt

0xc5cf,	// (0x0000dba8) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc5cf,	// (0x0000dba8) tabs_2_long_active_pane_srt_t1

0x3960,	// (0x00004f39) bg_active_tab_pane_g1_cp4_srt

0x0b95,	// (0x0000216e) bg_active_tab_pane_g2_cp4_srt

0x3969,	// (0x00004f42) bg_active_tab_pane_g3_cp4_srt

0xec67,	// (0x00010240) tabs_3_long_active_pane_srt_ParamLimits

0xec67,	// (0x00010240) tabs_3_long_active_pane_srt

0xec67,	// (0x00010240) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xec67,	// (0x00010240) tabs_3_long_passive_pane_cp_srt

0xec67,	// (0x00010240) tabs_3_long_passive_pane_srt_ParamLimits

0xec67,	// (0x00010240) tabs_3_long_passive_pane_srt

0x15f7,	// (0x00002bd0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x15f7,	// (0x00002bd0) bg_passive_tab_pane_cp5_srt

0x0d60,	// (0x00002339) bg_passive_tab_pane_g1_cp5_srt

0x0b95,	// (0x0000216e) bg_passive_tab_pane_g2_cp5_srt

0x0d69,	// (0x00002342) bg_passive_tab_pane_g3_cp5_srt

0xec7f,	// (0x00010258) bg_active_tab_pane_cp5_srt_ParamLimits

0xec7f,	// (0x00010258) bg_active_tab_pane_cp5_srt

0xc5b9,	// (0x0000db92) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc5b9,	// (0x0000db92) tabs_3_long_active_pane_srt_t1

0x0d60,	// (0x00002339) bg_active_tab_pane_g1_cp5_srt

0x0b95,	// (0x0000216e) bg_active_tab_pane_g2_cp5_srt

0x0d69,	// (0x00002342) bg_active_tab_pane_g3_cp5_srt

0x3940,	// (0x00004f19) navi_text_pane_srt_t1

0x3938,	// (0x00004f11) navi_icon_pane_srt_g1

0x130b,	// (0x000028e4) midp_editing_number_pane_srt

0x1099,	// (0x00002672) midp_ticker_pane_srt

0x1313,	// (0x000028ec) midp_ticker_pane_srt_g1

0x131b,	// (0x000028f4) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x00010d21) midp_ticker_pane_srt_g

0x1323,	// (0x000028fc) midp_ticker_pane_srt_t1

0x3929,	// (0x00004f02) midp_editing_number_pane_t1_copy1

0xb30d,	// (0x0000c8e6) listscroll_midp_pane

0xb30d,	// (0x0000c8e6) midp_form_pane

0x1110,	// (0x000026e9) midp_info_popup_window_ParamLimits

0x1110,	// (0x000026e9) midp_info_popup_window

0x00ba,	// (0x00001693) bg_popup_sub_pane_cp50_ParamLimits

0x00ba,	// (0x00001693) bg_popup_sub_pane_cp50

0x2828,	// (0x00003e01) listscroll_midp_info_pane_ParamLimits

0x2828,	// (0x00003e01) listscroll_midp_info_pane

0x2808,	// (0x00003de1) listscroll_form_midp_pane_ParamLimits

0x2808,	// (0x00003de1) listscroll_form_midp_pane

0x2814,	// (0x00003ded) scroll_bar_cp050

0x2808,	// (0x00003de1) list_midp_pane

0x4c48,	// (0x00006221) signal_pane_g2_cp

0x2722,	// (0x00003cfb) listscroll_midp_info_pane_t1_ParamLimits

0x2722,	// (0x00003cfb) listscroll_midp_info_pane_t1

0x273a,	// (0x00003d13) listscroll_midp_info_pane_t2_ParamLimits

0x273a,	// (0x00003d13) listscroll_midp_info_pane_t2

0x2778,	// (0x00003d51) listscroll_midp_info_pane_t3_ParamLimits

0x2778,	// (0x00003d51) listscroll_midp_info_pane_t3

0x27b2,	// (0x00003d8b) listscroll_midp_info_pane_t4_ParamLimits

0x27b2,	// (0x00003d8b) listscroll_midp_info_pane_t4

0x0003,

0xf7f4,	// (0x00010dcd) listscroll_midp_info_pane_t_ParamLimits

0xf7f4,	// (0x00010dcd) listscroll_midp_info_pane_t

0x011d,	// (0x000016f6) scroll_pane_cp21

0x26bc,	// (0x00003c95) form_midp_field_choice_group_pane

0x26c5,	// (0x00003c9e) form_midp_field_text_pane

0x2708,	// (0x00003ce1) form_midp_field_time_pane

0x2710,	// (0x00003ce9) form_midp_gauge_slider_pane

0x2719,	// (0x00003cf2) form_midp_gauge_wait_pane

0xebc5,	// (0x0001019e) form_midp_image_pane

0xc26b,	// (0x0000d844) list_single_midp_pane_ParamLimits

0xc26b,	// (0x0000d844) list_single_midp_pane

0xc243,	// (0x0000d81c) form_midp_field_text_pane_t1

0x23b5,	// (0x0000398e) input_focus_pane_cp050

0x268b,	// (0x00003c64) list_midp_form_text_pane

0x262f,	// (0x00003c08) form_midp_field_choice_group_pane_t1

0x263d,	// (0x00003c16) input_focus_pane_cp051

0x2651,	// (0x00003c2a) list_midp_choice_pane

0xebc5,	// (0x0001019e) status_idle_pane

0x2613,	// (0x00003bec) form_midp_field_time_pane_t1

0xea4c,	// (0x00010025) wait_anim_pane_g2_copy1

0x2621,	// (0x00003bfa) form_midp_field_time_pane_t2

0x0001,

0x11c0,	// (0x00002799) aid_navinavi_width_2_pane

0xf7ef,	// (0x00010dc8) form_midp_field_time_pane_t

0xebc5,	// (0x0001019e) input_focus_pane_cp052

0xebc5,	// (0x0001019e) bg_input_focus_pane_cp040

0x25d3,	// (0x00003bac) form_midp_gauge_slider_pane_t1

0x25e1,	// (0x00003bba) form_midp_gauge_slider_pane_t2

0xc227,	// (0x0000d800) form_midp_gauge_slider_pane_t3

0xc235,	// (0x0000d80e) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e6,	// (0x00010dbf) form_midp_gauge_slider_pane_t

0x260b,	// (0x00003be4) form_midp_slider_pane

0xec7f,	// (0x00010258) bg_input_focus_pane_cp041_ParamLimits

0xec7f,	// (0x00010258) bg_input_focus_pane_cp041

0x25a0,	// (0x00003b79) form_midp_gauge_wait_pane_t1_ParamLimits

0x25a0,	// (0x00003b79) form_midp_gauge_wait_pane_t1

0x25b2,	// (0x00003b8b) form_midp_gauge_wait_pane_t2_ParamLimits

0x25b2,	// (0x00003b8b) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e1,	// (0x00010dba) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e1,	// (0x00010dba) form_midp_gauge_wait_pane_t

0x25c4,	// (0x00003b9d) form_midp_wait_pane_ParamLimits

0x25c4,	// (0x00003b9d) form_midp_wait_pane

0x2568,	// (0x00003b41) form_midp_image_pane_g1

0x2571,	// (0x00003b4a) form_midp_image_pane_t1

0x2580,	// (0x00003b59) form_midp_image_pane_t2

0x258f,	// (0x00003b68) form_midp_image_pane_t3

0x0002,

0xf7da,	// (0x00010db3) form_midp_image_pane_t

0x2550,	// (0x00003b29) list_single_midp_pane_g1

0x2559,	// (0x00003b32) list_single_midp_pane_t1

0xc210,	// (0x0000d7e9) list_midp_form_item_pane_ParamLimits

0xc210,	// (0x0000d7e9) list_midp_form_item_pane

0x1168,	// (0x00002741) list_midp_form_item_pane_t1

0x1177,	// (0x00002750) midp_ticker_pane_g1

0x1183,	// (0x0000275c) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x00010d07) midp_ticker_pane_g

0xb3b1,	// (0x0000c98a) midp_ticker_pane_t1

0xc774,	// (0x0000dd4d) midp_editing_number_pane_t1

0x3c21,	// (0x000051fa) midp_editing_number_pane

0x3c30,	// (0x00005209) midp_ticker_pane

0x38f1,	// (0x00004eca) ai_message_heading_pane

0xebc5,	// (0x0001019e) bg_popup_window_pane_cp14

0x38f9,	// (0x00004ed2) listscroll_ai_message_pane

0x3877,	// (0x00004e50) ai_message_heading_pane_g1_ParamLimits

0x3877,	// (0x00004e50) ai_message_heading_pane_g1

0x3883,	// (0x00004e5c) ai_message_heading_pane_g2_ParamLimits

0x3883,	// (0x00004e5c) ai_message_heading_pane_g2

0x3891,	// (0x00004e6a) ai_message_heading_pane_g3_ParamLimits

0x3891,	// (0x00004e6a) ai_message_heading_pane_g3

0x389d,	// (0x00004e76) ai_message_heading_pane_g4_ParamLimits

0x389d,	// (0x00004e76) ai_message_heading_pane_g4

0x0003,

0xf91b,	// (0x00010ef4) ai_message_heading_pane_g_ParamLimits

0xf91b,	// (0x00010ef4) ai_message_heading_pane_g

0x38a9,	// (0x00004e82) ai_message_heading_pane_t1_ParamLimits

0x38a9,	// (0x00004e82) ai_message_heading_pane_t1

0x38c3,	// (0x00004e9c) ai_message_heading_pane_t2_ParamLimits

0x38c3,	// (0x00004e9c) ai_message_heading_pane_t2

0x0001,

0xf924,	// (0x00010efd) ai_message_heading_pane_t_ParamLimits

0xf924,	// (0x00010efd) ai_message_heading_pane_t

0x38d7,	// (0x00004eb0) bg_popup_heading_pane_cp1_ParamLimits

0x38d7,	// (0x00004eb0) bg_popup_heading_pane_cp1

0x3865,	// (0x00004e3e) list_ai_message_pane_ParamLimits

0x3865,	// (0x00004e3e) list_ai_message_pane

0x011d,	// (0x000016f6) scroll_pane_cp10

0x379d,	// (0x00004d76) list_ai_message_pane_g1

0x37a5,	// (0x00004d7e) list_ai_message_pane_g2

0x0001,

0xf8f8,	// (0x00010ed1) list_ai_message_pane_g

0x37ad,	// (0x00004d86) list_ai_message_pane_t1_ParamLimits

0x37ad,	// (0x00004d86) list_ai_message_pane_t1

0x37c2,	// (0x00004d9b) list_ai_message_pane_t2_ParamLimits

0x37c2,	// (0x00004d9b) list_ai_message_pane_t2

0x37d7,	// (0x00004db0) list_ai_message_pane_t3_ParamLimits

0x37d7,	// (0x00004db0) list_ai_message_pane_t3

0x37ec,	// (0x00004dc5) list_ai_message_pane_t4_ParamLimits

0x37ec,	// (0x00004dc5) list_ai_message_pane_t4

0x0003,

0xf8fd,	// (0x00010ed6) list_ai_message_pane_t_ParamLimits

0xf8fd,	// (0x00010ed6) list_ai_message_pane_t

0xc59f,	// (0x0000db78) cell_ai_soft_ind_pane_ParamLimits

0xc59f,	// (0x0000db78) cell_ai_soft_ind_pane

0x11a1,	// (0x0000277a) cell_ai_soft_ind_pane_g1_ParamLimits

0x11a1,	// (0x0000277a) cell_ai_soft_ind_pane_g1

0xebc5,	// (0x0001019e) grid_highlight_cp1

0x11ae,	// (0x00002787) text_secondary_cp56_ParamLimits

0x11ae,	// (0x00002787) text_secondary_cp56

0x375b,	// (0x00004d34) example_general_pane_ParamLimits

0x375b,	// (0x00004d34) example_general_pane

0x3767,	// (0x00004d40) example_parent_pane_g1_ParamLimits

0x3767,	// (0x00004d40) example_parent_pane_g1

0x3773,	// (0x00004d4c) example_parent_pane_t1_ParamLimits

0x3773,	// (0x00004d4c) example_parent_pane_t1

0xba37,	// (0x0000d010) popup_preview_text_window_ParamLimits

0xba37,	// (0x0000d010) popup_preview_text_window

0x0fc8,	// (0x000025a1) list_single_pane_cp2_g4

0xef23,	// (0x000104fc) bg_popup_preview_window_pane_ParamLimits

0xef23,	// (0x000104fc) bg_popup_preview_window_pane

0x34a4,	// (0x00004a7d) popup_preview_text_window_t1_ParamLimits

0x34a4,	// (0x00004a7d) popup_preview_text_window_t1

0x34c2,	// (0x00004a9b) popup_preview_text_window_t2_ParamLimits

0x34c2,	// (0x00004a9b) popup_preview_text_window_t2

0x350b,	// (0x00004ae4) popup_preview_text_window_t3_ParamLimits

0x350b,	// (0x00004ae4) popup_preview_text_window_t3

0x3550,	// (0x00004b29) popup_preview_text_window_t4_ParamLimits

0x3550,	// (0x00004b29) popup_preview_text_window_t4

0x0004,

0xf8cc,	// (0x00010ea5) popup_preview_text_window_t_ParamLimits

0xf8cc,	// (0x00010ea5) popup_preview_text_window_t

0x35ce,	// (0x00004ba7) scroll_pane_cp11

0x221a,	// (0x000037f3) bg_popup_preview_window_pane_g1

0x3458,	// (0x00004a31) bg_popup_preview_window_pane_g2

0x3462,	// (0x00004a3b) bg_popup_preview_window_pane_g3

0x346c,	// (0x00004a45) bg_popup_preview_window_pane_g4

0x3476,	// (0x00004a4f) bg_popup_preview_window_pane_g5

0x3480,	// (0x00004a59) bg_popup_preview_window_pane_g6

0x3488,	// (0x00004a61) bg_popup_preview_window_pane_g7

0x3490,	// (0x00004a69) bg_popup_preview_window_pane_g8

0xea62,	// (0x0001003b) aid_popup_width_pane

0xb9a7,	// (0x0000cf80) popup_midp_note_alarm_window_ParamLimits

0xb9a7,	// (0x0000cf80) popup_midp_note_alarm_window

0xf3eb,	// (0x000109c4) data_form_pane_ParamLimits

0xae8a,	// (0x0000c463) form_field_data_pane_g1

0xae94,	// (0x0000c46d) form_field_data_pane_t1_ParamLimits

0xf3f7,	// (0x000109d0) input_focus_pane_ParamLimits

0xf405,	// (0x000109de) data_form_wide_pane_ParamLimits

0xf411,	// (0x000109ea) form_field_data_wide_pane_g1

0xf43d,	// (0x00010a16) form_field_data_wide_pane_t1_ParamLimits

0xf0df,	// (0x000106b8) input_focus_pane_cp6_ParamLimits

0xafc4,	// (0x0000c59d) input_popup_find_pane_g1_ParamLimits

0xafc4,	// (0x0000c59d) input_popup_find_pane_g1

0x044e,	// (0x00001a27) aid_navi_side_left_pane

0x0463,	// (0x00001a3c) aid_navi_side_right_pane

0x2d01,	// (0x000042da) bg_popup_window_pane_cp30_ParamLimits

0x2d01,	// (0x000042da) bg_popup_window_pane_cp30

0x2d7b,	// (0x00004354) popup_midp_note_alarm_window_g1_ParamLimits

0x2d7b,	// (0x00004354) popup_midp_note_alarm_window_g1

0x2dab,	// (0x00004384) popup_midp_note_alarm_window_t1_ParamLimits

0x2dab,	// (0x00004384) popup_midp_note_alarm_window_t1

0x2e4c,	// (0x00004425) popup_midp_note_alarm_window_t2_ParamLimits

0x2e4c,	// (0x00004425) popup_midp_note_alarm_window_t2

0x2efa,	// (0x000044d3) popup_midp_note_alarm_window_t3_ParamLimits

0x2efa,	// (0x000044d3) popup_midp_note_alarm_window_t3

0x2f2c,	// (0x00004505) popup_midp_note_alarm_window_t4_ParamLimits

0x2f2c,	// (0x00004505) popup_midp_note_alarm_window_t4

0x2f52,	// (0x0000452b) popup_midp_note_alarm_window_t5_ParamLimits

0x2f52,	// (0x0000452b) popup_midp_note_alarm_window_t5

0x000a,

0xf869,	// (0x00010e42) popup_midp_note_alarm_window_t_ParamLimits

0xf869,	// (0x00010e42) popup_midp_note_alarm_window_t

0x2ffe,	// (0x000045d7) wait_bar_pane_cp1_ParamLimits

0x2ffe,	// (0x000045d7) wait_bar_pane_cp1

0xebc5,	// (0x0001019e) wait_anim_pane_copy1

0xebc5,	// (0x0001019e) wait_border_pane_copy1

0x29e6,	// (0x00003fbf) wait_border_pane_g1_copy1

0xf454,	// (0x00010a2d) form_field_popup_pane_g1

0xaeae,	// (0x0000c487) form_field_popup_pane_t1_ParamLimits

0xf3f7,	// (0x000109d0) input_focus_pane_cp7_ParamLimits

0xf45c,	// (0x00010a35) list_form_pane_ParamLimits

0xf468,	// (0x00010a41) form_field_popup_wide_pane_g1

0xf470,	// (0x00010a49) form_field_popup_wide_pane_t1_ParamLimits

0xf3f7,	// (0x000109d0) input_focus_pane_cp8_ParamLimits

0xf482,	// (0x00010a5b) list_form_wide_pane_ParamLimits

0x3e43,	// (0x0000541c) aid_size_cell_graphic_pane

0xaf2d,	// (0x0000c506) data_form_pane_t1_ParamLimits

0xc758,	// (0x0000dd31) data_form_wide_pane_t1_ParamLimits

0xbe39,	// (0x0000d412) bg_status_flat_pane

0xa6cb,	// (0x0000bca4) title_pane_t1_ParamLimits

0xec2f,	// (0x00010208) title_pane_t2_ParamLimits

0xec55,	// (0x0001022e) title_pane_t3_ParamLimits

0xf532,	// (0x00010b0b) title_pane_t_ParamLimits

0xb0ef,	// (0x0000c6c8) level_1_signal_ParamLimits

0xb101,	// (0x0000c6da) level_2_signal_ParamLimits

0xb114,	// (0x0000c6ed) level_3_signal_ParamLimits

0xb127,	// (0x0000c700) level_4_signal_ParamLimits

0xb13a,	// (0x0000c713) level_5_signal_ParamLimits

0xb14d,	// (0x0000c726) level_6_signal_ParamLimits

0xb160,	// (0x0000c739) level_7_signal_ParamLimits

0xb0ef,	// (0x0000c6c8) level_1_battery_ParamLimits

0xb101,	// (0x0000c6da) level_2_battery_ParamLimits

0xb114,	// (0x0000c6ed) level_3_battery_ParamLimits

0xb127,	// (0x0000c700) level_4_battery_ParamLimits

0xb13a,	// (0x0000c713) level_5_battery_ParamLimits

0xb14d,	// (0x0000c726) level_6_battery_ParamLimits

0xb160,	// (0x0000c739) level_7_battery_ParamLimits

0x2c06,	// (0x000041df) bg_status_flat_pane_g1

0x2c0e,	// (0x000041e7) bg_status_flat_pane_g2

0x2c16,	// (0x000041ef) bg_status_flat_pane_g3

0x2c1e,	// (0x000041f7) bg_status_flat_pane_g4

0x2c26,	// (0x000041ff) bg_status_flat_pane_g5

0x2c2e,	// (0x00004207) bg_status_flat_pane_g6

0x2c36,	// (0x0000420f) bg_status_flat_pane_g7

0xa75f,	// (0x0000bd38) tabs_3_active_pane_t1_ParamLimits

0xa75f,	// (0x0000bd38) tabs_3_passive_pane_t1_ParamLimits

0xa779,	// (0x0000bd52) tabs_4_active_pane_t1_ParamLimits

0xa779,	// (0x0000bd52) tabs_4_1_passive_pane_t1_ParamLimits

0xafda,	// (0x0000c5b3) tabs_2_active_pane_t1_ParamLimits

0xafda,	// (0x0000c5b3) tabs_2_passive_pane_t1_ParamLimits

0xec7f,	// (0x00010258) bg_active_tab_pane_cp4_ParamLimits

0xafec,	// (0x0000c5c5) tabs_2_long_active_pane_t1_ParamLimits

0x15f7,	// (0x00002bd0) bg_passive_tab_pane_cp4_ParamLimits

0x22d6,	// (0x000038af) list_single_midp_graphic_pane_t1_ParamLimits

0xec7f,	// (0x00010258) bg_active_tab_pane_cp5_ParamLimits

0xafff,	// (0x0000c5d8) tabs_3_long_active_pane_t1_ParamLimits

0x15f7,	// (0x00002bd0) bg_passive_tab_pane_cp5_ParamLimits

0x22d6,	// (0x000038af) list_single_midp_graphic_pane_t1

0xbe39,	// (0x0000d412) bg_status_flat_pane_ParamLimits

0x1dec,	// (0x000033c5) indicator_pane_cp2_ParamLimits

0x1dec,	// (0x000033c5) indicator_pane_cp2

0xbfcf,	// (0x0000d5a8) navi_pane_srt_ParamLimits

0xbfcf,	// (0x0000d5a8) navi_pane_srt

0x1f53,	// (0x0000352c) popup_clock_digital_analogue_window_cp1

0xed66,	// (0x0001033f) indicator_pane_t1

0x1099,	// (0x00002672) copy_highlight_pane

0x1099,	// (0x00002672) cursor_graphics_pane

0x1099,	// (0x00002672) graphic_within_text_pane

0x1099,	// (0x00002672) link_highlight_pane

0x3591,	// (0x00004b6a) popup_preview_text_window_t5_ParamLimits

0x3591,	// (0x00004b6a) popup_preview_text_window_t5

0x11ca,	// (0x000027a3) cursor_digital_pane

0x11ca,	// (0x000027a3) cursor_primary_pane

0x11db,	// (0x000027b4) cursor_primary_small_pane

0x11e3,	// (0x000027bc) cursor_secondary_pane

0x11eb,	// (0x000027c4) cursor_title_pane

0x11ca,	// (0x000027a3) link_highlight_digital_pane

0x11d2,	// (0x000027ab) link_highlight_primary_pane

0x11db,	// (0x000027b4) link_highlight_primary_small_pane

0x11e3,	// (0x000027bc) link_highlight_secondary_pane

0x11eb,	// (0x000027c4) link_highlight_title_pane

0x11ca,	// (0x000027a3) copy_highlight_digital_pane

0x11ca,	// (0x000027a3) copy_highlight_primary_pane

0x11db,	// (0x000027b4) copy_highlight_primary_small_pane

0x11e3,	// (0x000027bc) copy_highlight_secondary_pane

0x11eb,	// (0x000027c4) copy_highlight_title_pane

0x11e3,	// (0x000027bc) graphic_text_digital_pane

0x2ca4,	// (0x0000427d) graphic_text_primary_pane

0x2cad,	// (0x00004286) graphic_text_primary_small_pane

0x11db,	// (0x000027b4) graphic_text_secondary_pane

0x11ca,	// (0x000027a3) graphic_text_title_pane

0xb3c3,	// (0x0000c99c) cursor_primary_pane_g1

0x2c96,	// (0x0000426f) cursor_text_primary_t1

0xc2b8,	// (0x0000d891) cursor_primary_small_pane_g1

0x2c88,	// (0x00004261) cursor_text_primary_small_t1

0xc2ae,	// (0x0000d887) cursor_primary_small_pane_g1_copy1

0x2c70,	// (0x00004249) cursor_text_primary_small_t1_copy1

0x2c4e,	// (0x00004227) cursor_text_title_t1

0xc2a4,	// (0x0000d87d) cursor_title_pane_g1

0xb3c3,	// (0x0000c99c) cursor_digital_pane_g1

0x11fd,	// (0x000027d6) cursor_text_digital_t1

0x120b,	// (0x000027e4) link_highlight_primary_pane_g1

0x2bf7,	// (0x000041d0) link_highlight_primary_pane_t1

0x120b,	// (0x000027e4) link_highlight_primary_small_pane_g1

0x1213,	// (0x000027ec) link_highlight_primary_small_pane_t1

0x1222,	// (0x000027fb) link_highlight_secondary_pane_g1

0x122a,	// (0x00002803) link_highlight_secondary_pane_t1

0x2b6b,	// (0x00004144) link_highlight_title_pane_g1

0x2b73,	// (0x0000414c) link_highlight_title_pane_t1

0x2b54,	// (0x0000412d) link_highlight_digital_pane_g1

0x2b5c,	// (0x00004135) link_highlight_digital_pane_t1

0x2a1c,	// (0x00003ff5) copy_highlight_primary_pane_g1

0x2a33,	// (0x0000400c) copy_highlight_primary_pane_t1

0x2a1c,	// (0x00003ff5) copy_highlight_primary_small_pane_g1

0x2a24,	// (0x00003ffd) copy_highlight_primary_small_pane_t1

0x1239,	// (0x00002812) copy_highlight_secondary_pane_g1

0x1241,	// (0x0000281a) copy_highlight_secondary_pane_t1

0x2a05,	// (0x00003fde) copy_highlight_title_pane_g1

0x2a0d,	// (0x00003fe6) copy_highlight_title_pane_t1

0x2a1c,	// (0x00003ff5) copy_highlight_digital_pane_g1

0x40cd,	// (0x000056a6) copy_highlight_digital_pane_t1

0x4021,	// (0x000055fa) graphic_text_primary_pane_g1

0x40b1,	// (0x0000568a) graphic_text_primary_pane_t1

0x40bf,	// (0x00005698) graphic_text_primary_pane_t2

0x0001,

0xf998,	// (0x00010f71) graphic_text_primary_pane_t

0x408d,	// (0x00005666) graphic_text_primary_small_pane_g1

0x4095,	// (0x0000566e) graphic_text_primary_small_pane_t1

0x40a3,	// (0x0000567c) graphic_text_primary_small_pane_t2

0x0001,

0xf993,	// (0x00010f6c) graphic_text_primary_small_pane_t

0x4069,	// (0x00005642) graphic_text_secondary_pane_g1

0x4071,	// (0x0000564a) graphic_text_secondary_pane_t1

0x407f,	// (0x00005658) graphic_text_secondary_pane_t2

0x0001,

0xf98e,	// (0x00010f67) graphic_text_secondary_pane_t

0x4045,	// (0x0000561e) graphic_text_title_pane_g1

0x404d,	// (0x00005626) graphic_text_title_pane_t1

0x405b,	// (0x00005634) graphic_text_title_pane_t2

0x0001,

0xf989,	// (0x00010f62) graphic_text_title_pane_t

0x4021,	// (0x000055fa) graphic_text_digital_pane_g1

0x4029,	// (0x00005602) graphic_text_digital_pane_t1

0x4037,	// (0x00005610) graphic_text_digital_pane_t2

0x0001,

0xf984,	// (0x00010f5d) graphic_text_digital_pane_t

0xec7f,	// (0x00010258) navi_icon_pane_srt_ParamLimits

0xec7f,	// (0x00010258) navi_icon_pane_srt

0xebc5,	// (0x0001019e) navi_midp_pane_srt

0xebc5,	// (0x0001019e) navi_navi_pane_srt

0xec7f,	// (0x00010258) navi_text_pane_srt_ParamLimits

0xec7f,	// (0x00010258) navi_text_pane_srt

0x3fec,	// (0x000055c5) navi_navi_icon_text_pane_srt

0x3ff4,	// (0x000055cd) navi_navi_pane_srt_g1_ParamLimits

0x3ff4,	// (0x000055cd) navi_navi_pane_srt_g1

0x4006,	// (0x000055df) navi_navi_pane_srt_g2_ParamLimits

0x4006,	// (0x000055df) navi_navi_pane_srt_g2

0x0001,

0xf97f,	// (0x00010f58) navi_navi_pane_srt_g_ParamLimits

0xf97f,	// (0x00010f58) navi_navi_pane_srt_g

0x4018,	// (0x000055f1) navi_navi_tabs_pane_srt

0x3fec,	// (0x000055c5) navi_navi_text_pane_srt

0x3fec,	// (0x000055c5) navi_navi_volume_pane_srt

0x3fdd,	// (0x000055b6) navi_navi_text_pane_srt_t1

0x3fb8,	// (0x00005591) navi_navi_volume_pane_srt_g1

0x3fc0,	// (0x00005599) volume_small_pane_srt_ParamLimits

0x3fc0,	// (0x00005599) volume_small_pane_srt

0x1250,	// (0x00002829) volume_small_pane_srt_g1_ParamLimits

0x1250,	// (0x00002829) volume_small_pane_srt_g1

0x1260,	// (0x00002839) volume_small_pane_srt_g2_ParamLimits

0x1260,	// (0x00002839) volume_small_pane_srt_g2

0x1271,	// (0x0000284a) volume_small_pane_srt_g3_ParamLimits

0x1271,	// (0x0000284a) volume_small_pane_srt_g3

0x1282,	// (0x0000285b) volume_small_pane_srt_g4_ParamLimits

0x1282,	// (0x0000285b) volume_small_pane_srt_g4

0x1293,	// (0x0000286c) volume_small_pane_srt_g5_ParamLimits

0x1293,	// (0x0000286c) volume_small_pane_srt_g5

0x12a4,	// (0x0000287d) volume_small_pane_srt_g6_ParamLimits

0x12a4,	// (0x0000287d) volume_small_pane_srt_g6

0x12b5,	// (0x0000288e) volume_small_pane_srt_g7_ParamLimits

0x12b5,	// (0x0000288e) volume_small_pane_srt_g7

0x12c6,	// (0x0000289f) volume_small_pane_srt_g8_ParamLimits

0x12c6,	// (0x0000289f) volume_small_pane_srt_g8

0x12d7,	// (0x000028b0) volume_small_pane_srt_g9_ParamLimits

0x12d7,	// (0x000028b0) volume_small_pane_srt_g9

0x12e8,	// (0x000028c1) volume_small_pane_srt_g10_ParamLimits

0x12e8,	// (0x000028c1) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x00010d0c) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x00010d0c) volume_small_pane_srt_g

0xefd8,	// (0x000105b1) query_popup_data_pane_cp2

0x3fa6,	// (0x0000557f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3fa6,	// (0x0000557f) navi_navi_icon_text_pane_srt_t1

0x2ca4,	// (0x0000427d) navi_tabs_2_long_pane_srt

0x2ca4,	// (0x0000427d) navi_tabs_2_pane_srt

0x2ca4,	// (0x0000427d) navi_tabs_3_long_pane_srt

0x2ca4,	// (0x0000427d) navi_tabs_3_pane_srt

0x2ca4,	// (0x0000427d) navi_tabs_4_pane_srt

0x3f7e,	// (0x00005557) tabs_2_active_pane_srt_ParamLimits

0x3f7e,	// (0x00005557) tabs_2_active_pane_srt

0x3f8e,	// (0x00005567) tabs_2_passive_pane_srt_ParamLimits

0x3f8e,	// (0x00005567) tabs_2_passive_pane_srt

0x23b5,	// (0x0000398e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x23b5,	// (0x0000398e) bg_passive_tab_pane_cp1_srt

0x3f52,	// (0x0000552b) bg_passive_tab_pane_g1_cp1_srt

0x0b95,	// (0x0000216e) bg_passive_tab_pane_g2_cp1_srt

0x3f5b,	// (0x00005534) bg_passive_tab_pane_g3_cp1_srt

0xec67,	// (0x00010240) bg_active_tab_pane_cp1_srt_ParamLimits

0xec67,	// (0x00010240) bg_active_tab_pane_cp1_srt

0x3f64,	// (0x0000553d) tabs_2_active_pane_srt_g1

0xc8bf,	// (0x0000de98) tabs_2_active_pane_srt_t1_ParamLimits

0xc8bf,	// (0x0000de98) tabs_2_active_pane_srt_t1

0x3f52,	// (0x0000552b) bg_active_tab_pane_g1_cp1_srt

0x0b95,	// (0x0000216e) bg_active_tab_pane_g2_cp1_srt

0x3f5b,	// (0x00005534) bg_active_tab_pane_g3_cp1_srt

0x3f1f,	// (0x000054f8) tabs_3_active_pane_srt_ParamLimits

0x3f1f,	// (0x000054f8) tabs_3_active_pane_srt

0x3f30,	// (0x00005509) tabs_3_passive_pane_cp_srt_ParamLimits

0x3f30,	// (0x00005509) tabs_3_passive_pane_cp_srt

0x3f41,	// (0x0000551a) tabs_3_passive_pane_srt_ParamLimits

0x3f41,	// (0x0000551a) tabs_3_passive_pane_srt

0x23b5,	// (0x0000398e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x23b5,	// (0x0000398e) bg_passive_tab_pane_cp2_srt

0x12f9,	// (0x000028d2) bg_passive_tab_pane_g1_cp2_srt

0x0b95,	// (0x0000216e) bg_passive_tab_pane_g2_cp2_srt

0x1302,	// (0x000028db) bg_passive_tab_pane_g3_cp2_srt

0xec67,	// (0x00010240) bg_active_tab_pane_cp2_srt_ParamLimits

0xec67,	// (0x00010240) bg_active_tab_pane_cp2_srt

0x3f05,	// (0x000054de) tabs_3_active_pane_srt_g1

0xc8a9,	// (0x0000de82) tabs_3_active_pane_srt_t1_ParamLimits

0xc8a9,	// (0x0000de82) tabs_3_active_pane_srt_t1

0x12f9,	// (0x000028d2) bg_active_tab_pane_g1_cp2_srt

0x0b95,	// (0x0000216e) bg_active_tab_pane_g2_cp2_srt

0x1302,	// (0x000028db) bg_active_tab_pane_g3_cp2_srt

0x3ebd,	// (0x00005496) tabs_4_active_pane_srt_ParamLimits

0x3ebd,	// (0x00005496) tabs_4_active_pane_srt

0x3ecf,	// (0x000054a8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x3ecf,	// (0x000054a8) tabs_4_passive_pane_cp2_srt

0x15b7,	// (0x00002b90) aid_size_cell_toolbar

0x3a4b,	// (0x00005024) main_idle_act_pane_ParamLimits

0x1800,	// (0x00002dd9) popup_large_graphic_colour_window_ParamLimits

0xbcfb,	// (0x0000d2d4) popup_toolbar_window_ParamLimits

0xbcfb,	// (0x0000d2d4) popup_toolbar_window

0x3c69,	// (0x00005242) list_single_graphic_2heading_pane_ParamLimits

0x3c69,	// (0x00005242) list_single_graphic_2heading_pane

0x04dc,	// (0x00001ab5) aid_size_cell_apps_grid_lsc_pane

0x04ee,	// (0x00001ac7) aid_size_cell_apps_grid_prt_pane

0x15f7,	// (0x00002bd0) bg_wml_button_pane_cp1_ParamLimits

0x15f7,	// (0x00002bd0) bg_wml_button_pane_cp1

0xc243,	// (0x0000d81c) form_midp_field_text_pane_t1_ParamLimits

0x23b5,	// (0x0000398e) input_focus_pane_cp050_ParamLimits

0x268b,	// (0x00003c64) list_midp_form_text_pane_ParamLimits

0x263d,	// (0x00003c16) input_focus_pane_cp051_ParamLimits

0x2651,	// (0x00003c2a) list_midp_choice_pane_ParamLimits

0x24fc,	// (0x00003ad5) list_single_2graphic_pane_cp3_ParamLimits

0x24fc,	// (0x00003ad5) list_single_2graphic_pane_cp3

0x2512,	// (0x00003aeb) list_single_midp_graphic_pane_ParamLimits

0x2512,	// (0x00003aeb) list_single_midp_graphic_pane

0x20a6,	// (0x0000367f) list_single_graphic_2heading_pane_g1_ParamLimits

0x20a6,	// (0x0000367f) list_single_graphic_2heading_pane_g1

0x20b2,	// (0x0000368b) list_single_graphic_2heading_pane_g4_ParamLimits

0x20b2,	// (0x0000368b) list_single_graphic_2heading_pane_g4

0x20be,	// (0x00003697) list_single_graphic_2heading_pane_g5_ParamLimits

0x20be,	// (0x00003697) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x00010d5f) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x00010d5f) list_single_graphic_2heading_pane_g

0x20ca,	// (0x000036a3) list_single_graphic_2heading_pane_t1_ParamLimits

0x20ca,	// (0x000036a3) list_single_graphic_2heading_pane_t1

0x20de,	// (0x000036b7) list_single_graphic_2heading_pane_t2_ParamLimits

0x20de,	// (0x000036b7) list_single_graphic_2heading_pane_t2

0x20fa,	// (0x000036d3) list_single_graphic_2heading_pane_t3_ParamLimits

0x20fa,	// (0x000036d3) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x00010d66) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x00010d66) list_single_graphic_2heading_pane_t

0x2112,	// (0x000036eb) bg_popup_sub_pane_cp2

0x213c,	// (0x00003715) grid_toobar_pane

0x2178,	// (0x00003751) cell_toolbar_pane_ParamLimits

0x2178,	// (0x00003751) cell_toolbar_pane

0x21be,	// (0x00003797) cell_toolbar_pane_g1_ParamLimits

0x21be,	// (0x00003797) cell_toolbar_pane_g1

0x21d2,	// (0x000037ab) cell_toolbar_pane_g2_ParamLimits

0x21d2,	// (0x000037ab) cell_toolbar_pane_g2

0x0001,

0xf794,	// (0x00010d6d) cell_toolbar_pane_g_ParamLimits

0xf794,	// (0x00010d6d) cell_toolbar_pane_g

0x21f4,	// (0x000037cd) grid_highlight_pane_cp2_ParamLimits

0x21f4,	// (0x000037cd) grid_highlight_pane_cp2

0x220e,	// (0x000037e7) toolbar_button_pane

0x221a,	// (0x000037f3) toolbar_button_pane_g1

0x2222,	// (0x000037fb) toolbar_button_pane_g2

0x222a,	// (0x00003803) toolbar_button_pane_g3

0x2232,	// (0x0000380b) toolbar_button_pane_g4

0x223a,	// (0x00003813) toolbar_button_pane_g5

0x2242,	// (0x0000381b) toolbar_button_pane_g6

0x224a,	// (0x00003823) toolbar_button_pane_g7

0x2252,	// (0x0000382b) toolbar_button_pane_g8

0x225a,	// (0x00003833) toolbar_button_pane_g9

0x0009,

0xf799,	// (0x00010d72) toolbar_button_pane_g

0x226a,	// (0x00003843) list_single_2graphic_pane_g1_cp3_ParamLimits

0x226a,	// (0x00003843) list_single_2graphic_pane_g1_cp3

0xc172,	// (0x0000d74b) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc172,	// (0x0000d74b) list_single_2graphic_pane_g2_cp3

0x0ec3,	// (0x0000249c) list_single_2graphic_pane_g3_cp3

0x2287,	// (0x00003860) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2287,	// (0x00003860) list_single_2graphic_pane_g4_cp3

0x2293,	// (0x0000386c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2293,	// (0x0000386c) list_single_2graphic_pane_t1_cp3

0x0eb7,	// (0x00002490) list_single_midp_graphic_pane_g2_ParamLimits

0x0eb7,	// (0x00002490) list_single_midp_graphic_pane_g2

0x15bf,	// (0x00002b98) aid_zoom_text_primary

0x15c7,	// (0x00002ba0) aid_zoom_text_secondary

0xb41b,	// (0x0000c9f4) status_small_pane_g7_ParamLimits

0xb41b,	// (0x0000c9f4) status_small_pane_g7

0xb43e,	// (0x0000ca17) status_small_pane_t1_ParamLimits

0xa69b,	// (0x0000bc74) title_pane_g2

0x0003,

0xf529,	// (0x00010b02) title_pane_g

0xa93b,	// (0x0000bf14) aid_size_cell_colour_1_pane_ParamLimits

0xa93b,	// (0x0000bf14) aid_size_cell_colour_1_pane

0xa94f,	// (0x0000bf28) aid_size_cell_colour_2_pane_ParamLimits

0xa94f,	// (0x0000bf28) aid_size_cell_colour_2_pane

0xa963,	// (0x0000bf3c) aid_size_cell_colour_3_pane_ParamLimits

0xa963,	// (0x0000bf3c) aid_size_cell_colour_3_pane

0xa977,	// (0x0000bf50) aid_size_cell_colour_4_pane_ParamLimits

0xa977,	// (0x0000bf50) aid_size_cell_colour_4_pane

0x0355,	// (0x0000192e) title_pane_stacon_g1_ParamLimits

0x0355,	// (0x0000192e) title_pane_stacon_g1

0x2a8a,	// (0x00004063) popup_note_wait_window_g3_ParamLimits

0x2a8a,	// (0x00004063) popup_note_wait_window_g3

0x2b01,	// (0x000040da) popup_note_wait_window_t5_ParamLimits

0x2b01,	// (0x000040da) popup_note_wait_window_t5

0xebc5,	// (0x0001019e) main_feb_china_hwr_fs_writing_pane

0xb68e,	// (0x0000cc67) popup_feb_china_hwr_fs_window_ParamLimits

0xb68e,	// (0x0000cc67) popup_feb_china_hwr_fs_window

0xc183,	// (0x0000d75c) aid_size_cell_hwr_fs_ParamLimits

0xc183,	// (0x0000d75c) aid_size_cell_hwr_fs

0x23b5,	// (0x0000398e) bg_popup_sub_pane_cp3_ParamLimits

0x23b5,	// (0x0000398e) bg_popup_sub_pane_cp3

0xc198,	// (0x0000d771) grid_hwr_fs_pane_ParamLimits

0xc198,	// (0x0000d771) grid_hwr_fs_pane

0x23d9,	// (0x000039b2) linegrid_hwr_fs_pane_ParamLimits

0x23d9,	// (0x000039b2) linegrid_hwr_fs_pane

0xc1b0,	// (0x0000d789) cell_hwr_fs_pane_ParamLimits

0xc1b0,	// (0x0000d789) cell_hwr_fs_pane

0x240d,	// (0x000039e6) linegrid_hwr_fs_pane_g1_ParamLimits

0x240d,	// (0x000039e6) linegrid_hwr_fs_pane_g1

0xc1d6,	// (0x0000d7af) linegrid_hwr_fs_pane_g2_ParamLimits

0xc1d6,	// (0x0000d7af) linegrid_hwr_fs_pane_g2

0x242b,	// (0x00003a04) linegrid_hwr_fs_pane_g3_ParamLimits

0x242b,	// (0x00003a04) linegrid_hwr_fs_pane_g3

0x2437,	// (0x00003a10) linegrid_hwr_fs_pane_g4_ParamLimits

0x2437,	// (0x00003a10) linegrid_hwr_fs_pane_g4

0x2455,	// (0x00003a2e) linegrid_hwr_fs_pane_g5_ParamLimits

0x2455,	// (0x00003a2e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bf,	// (0x00010d98) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bf,	// (0x00010d98) linegrid_hwr_fs_pane_g

0x246b,	// (0x00003a44) cell_hwr_fs_pane_g1_ParamLimits

0x246b,	// (0x00003a44) cell_hwr_fs_pane_g1

0x1fe1,	// (0x000035ba) cell_hwr_fs_pane_g2_ParamLimits

0x1fe1,	// (0x000035ba) cell_hwr_fs_pane_g2

0xc1e8,	// (0x0000d7c1) cell_hwr_fs_pane_g3_ParamLimits

0xc1e8,	// (0x0000d7c1) cell_hwr_fs_pane_g3

0xc1f5,	// (0x0000d7ce) cell_hwr_fs_pane_g4_ParamLimits

0xc1f5,	// (0x0000d7ce) cell_hwr_fs_pane_g4

0x0003,

0xf7ca,	// (0x00010da3) cell_hwr_fs_pane_g_ParamLimits

0xf7ca,	// (0x00010da3) cell_hwr_fs_pane_g

0xc202,	// (0x0000d7db) cell_hwr_fs_pane_t1

0xebc5,	// (0x0001019e) grid_highlight_pane_cp6

0xebc5,	// (0x0001019e) main_idle_act2_pane

0x0104,	// (0x000016dd) aid_inside_area_popup_secondary

0xc42e,	// (0x0000da07) aid_inside_area_window_primary_ParamLimits

0xc42e,	// (0x0000da07) aid_inside_area_window_primary

0x40dc,	// (0x000056b5) ai2_news_ticker_pane

0x40e4,	// (0x000056bd) aid_size_cell_ai1_link_ParamLimits

0x40e4,	// (0x000056bd) aid_size_cell_ai1_link

0x40fe,	// (0x000056d7) popup_ai2_data_window_ParamLimits

0x40fe,	// (0x000056d7) popup_ai2_data_window

0x411c,	// (0x000056f5) popup_ai2_link_window_ParamLimits

0x411c,	// (0x000056f5) popup_ai2_link_window

0x23b5,	// (0x0000398e) bg_popup_sub_pane_cp4_ParamLimits

0x23b5,	// (0x0000398e) bg_popup_sub_pane_cp4

0x4132,	// (0x0000570b) grid_ai2_link_pane_ParamLimits

0x4132,	// (0x0000570b) grid_ai2_link_pane

0x4149,	// (0x00005722) popup_ai2_link_window_g1_ParamLimits

0x4149,	// (0x00005722) popup_ai2_link_window_g1

0x4155,	// (0x0000572e) popup_ai2_link_window_g2_ParamLimits

0x4155,	// (0x0000572e) popup_ai2_link_window_g2

0x0001,

0xf99d,	// (0x00010f76) popup_ai2_link_window_g_ParamLimits

0xf99d,	// (0x00010f76) popup_ai2_link_window_g

0x4166,	// (0x0000573f) ai2_mp_button_pane

0x416e,	// (0x00005747) ai2_mp_volume_pane

0x263d,	// (0x00003c16) bg_popup_sub_pane_cp5_ParamLimits

0x263d,	// (0x00003c16) bg_popup_sub_pane_cp5

0x4176,	// (0x0000574f) heading_ai2_gene_pane_ParamLimits

0x4176,	// (0x0000574f) heading_ai2_gene_pane

0x4182,	// (0x0000575b) list_ai2_gene_pane_ParamLimits

0x4182,	// (0x0000575b) list_ai2_gene_pane

0x41ca,	// (0x000057a3) cell_ai2_link_pane_ParamLimits

0x41ca,	// (0x000057a3) cell_ai2_link_pane

0x41e0,	// (0x000057b9) cell_ai2_link_pane_g1

0xebc5,	// (0x0001019e) grid_highlight_pane_cp7

0x42b3,	// (0x0000588c) ai2_mp_volume_pane_g1

0x42bb,	// (0x00005894) ai2_mp_volume_pane_g2

0x4228,	// (0x00005801) list_ai2_gene_pane_t1

0x42c3,	// (0x0000589c) ai2_mp_volume_pane_g3

0x0002,

0xf9b6,	// (0x00010f8f) ai2_mp_volume_pane_g

0x42cb,	// (0x000058a4) volume_small_pane_cp3

0x42d4,	// (0x000058ad) aid_size_cell_ai2_button

0x42dc,	// (0x000058b5) grid_ai2_button_pane

0x42e5,	// (0x000058be) cell_ai2_button_pane_ParamLimits

0x42e5,	// (0x000058be) cell_ai2_button_pane

0xea4c,	// (0x00010025) cell_ai2_button_pane_g1

0xebc5,	// (0x0001019e) grid_highlight_pane_cp8

0x4273,	// (0x0000584c) ai2_gene_pane_t1_ParamLimits

0x4273,	// (0x0000584c) ai2_gene_pane_t1

0xb60a,	// (0x0000cbe3) aid_height_parent_landscape

0xc5e6,	// (0x0000dbbf) aid_height_set_list

0x3a4b,	// (0x00005024) aid_size_parent

0x3e43,	// (0x0000541c) aid_size_cell_graphic_pane_ParamLimits

0x4192,	// (0x0000576b) popup_ai2_data_window_g1_ParamLimits

0x4192,	// (0x0000576b) popup_ai2_data_window_g1

0x419e,	// (0x00005777) ai2_news_ticker_pane_g1

0x41a6,	// (0x0000577f) ai2_news_ticker_pane_g2

0x0001,

0xf9a2,	// (0x00010f7b) ai2_news_ticker_pane_g

0x41ae,	// (0x00005787) ai2_news_ticker_pane_t1

0x41bc,	// (0x00005795) ai2_news_ticker_pane_t2

0x0001,

0xf9a7,	// (0x00010f80) ai2_news_ticker_pane_t

0x41e9,	// (0x000057c2) heading_ai2_gene_pane_g1

0x41f1,	// (0x000057ca) heading_ai2_gene_pane_t1_ParamLimits

0x41f1,	// (0x000057ca) heading_ai2_gene_pane_t1

0x4206,	// (0x000057df) list_highlight_pane_cp6

0x420e,	// (0x000057e7) ai2_gene_pane_ParamLimits

0x420e,	// (0x000057e7) ai2_gene_pane

0x4236,	// (0x0000580f) list_ai2_gene_pane_t2

0x0001,

0xf9ac,	// (0x00010f85) list_ai2_gene_pane_t

0x4244,	// (0x0000581d) list_highlight_pane_cp8_ParamLimits

0x4244,	// (0x0000581d) list_highlight_pane_cp8

0x4255,	// (0x0000582e) ai2_gene_pane_g1_ParamLimits

0x4255,	// (0x0000582e) ai2_gene_pane_g1

0x4267,	// (0x00005840) ai2_gene_pane_g2_ParamLimits

0x4267,	// (0x00005840) ai2_gene_pane_g2

0x0001,

0xf9b1,	// (0x00010f8a) ai2_gene_pane_g_ParamLimits

0xf9b1,	// (0x00010f8a) ai2_gene_pane_g

0xf2fa,	// (0x000108d3) scroll_pane_cp12

0xb5c7,	// (0x0000cba0) control_pane_t3_ParamLimits

0xb5c7,	// (0x0000cba0) control_pane_t3

0xb42f,	// (0x0000ca08) status_small_pane_g8_ParamLimits

0xb42f,	// (0x0000ca08) status_small_pane_g8

0xb730,	// (0x0000cd09) popup_find_window_ParamLimits

0xb9e7,	// (0x0000cfc0) popup_note_image_window_ParamLimits

0x20a6,	// (0x0000367f) list_double2_graphic_pane_vc_g1_ParamLimits

0x20a6,	// (0x0000367f) list_double2_graphic_pane_vc_g1

0x20b2,	// (0x0000368b) list_double2_graphic_pane_vc_g2_ParamLimits

0x20b2,	// (0x0000368b) list_double2_graphic_pane_vc_g2

0x20be,	// (0x00003697) list_double2_graphic_pane_vc_g3_ParamLimits

0x20be,	// (0x00003697) list_double2_graphic_pane_vc_g3

0x0002,

0xf786,	// (0x00010d5f) list_double2_graphic_pane_vc_g_ParamLimits

0xf786,	// (0x00010d5f) list_double2_graphic_pane_vc_g

0x21a8,	// (0x00003781) list_double2_graphic_pane_vc_t1_ParamLimits

0x21a8,	// (0x00003781) list_double2_graphic_pane_vc_t1

0x20b2,	// (0x0000368b) list_single_heading_pane_vc_g1_ParamLimits

0x20b2,	// (0x0000368b) list_single_heading_pane_vc_g1

0x20be,	// (0x00003697) list_single_heading_pane_vc_g2_ParamLimits

0x20be,	// (0x00003697) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00010b7c) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00010b7c) list_single_heading_pane_vc_g

0x22ae,	// (0x00003887) list_single_heading_pane_vc_t1_ParamLimits

0x22ae,	// (0x00003887) list_single_heading_pane_vc_t1

0x22c4,	// (0x0000389d) list_single_heading_pane_vc_t2_ParamLimits

0x22c4,	// (0x0000389d) list_single_heading_pane_vc_t2

0x0001,

0xf7ae,	// (0x00010d87) list_single_heading_pane_vc_t_ParamLimits

0xf7ae,	// (0x00010d87) list_single_heading_pane_vc_t

0x22ec,	// (0x000038c5) list_setting_number_pane_vc_g1_ParamLimits

0x22ec,	// (0x000038c5) list_setting_number_pane_vc_g1

0x22f8,	// (0x000038d1) list_setting_number_pane_vc_g2_ParamLimits

0x22f8,	// (0x000038d1) list_setting_number_pane_vc_g2

0x0001,

0xf7b3,	// (0x00010d8c) list_setting_number_pane_vc_g_ParamLimits

0xf7b3,	// (0x00010d8c) list_setting_number_pane_vc_g

0x2304,	// (0x000038dd) list_setting_number_pane_vc_t1_ParamLimits

0x2304,	// (0x000038dd) list_setting_number_pane_vc_t1

0x2318,	// (0x000038f1) list_setting_number_pane_vc_t2_ParamLimits

0x2318,	// (0x000038f1) list_setting_number_pane_vc_t2

0x2334,	// (0x0000390d) list_setting_number_pane_vc_t3_ParamLimits

0x2334,	// (0x0000390d) list_setting_number_pane_vc_t3

0x0002,

0xf7b8,	// (0x00010d91) list_setting_number_pane_vc_t_ParamLimits

0xf7b8,	// (0x00010d91) list_setting_number_pane_vc_t

0x2362,	// (0x0000393b) set_value_pane_vc_ParamLimits

0x2362,	// (0x0000393b) set_value_pane_vc

0x3c69,	// (0x00005242) list_double2_graphic_pane_vc_ParamLimits

0x3c69,	// (0x00005242) list_double2_graphic_pane_vc

0x3c80,	// (0x00005259) list_double2_large_graphic_pane_vc_ParamLimits

0x3c80,	// (0x00005259) list_double2_large_graphic_pane_vc

0x3c69,	// (0x00005242) list_double2_pane_vc_ParamLimits

0x3c69,	// (0x00005242) list_double2_pane_vc

0x3c69,	// (0x00005242) list_double_graphic_heading_pane_vc_ParamLimits

0x3c69,	// (0x00005242) list_double_graphic_heading_pane_vc

0x3c69,	// (0x00005242) list_double_graphic_pane_vc_ParamLimits

0x3c69,	// (0x00005242) list_double_graphic_pane_vc

0x3c69,	// (0x00005242) list_double_heading_pane_vc_ParamLimits

0x3c69,	// (0x00005242) list_double_heading_pane_vc

0x3c94,	// (0x0000526d) list_double_large_graphic_pane_vc_ParamLimits

0x3c94,	// (0x0000526d) list_double_large_graphic_pane_vc

0x3c69,	// (0x00005242) list_double_number_pane_vc_ParamLimits

0x3c69,	// (0x00005242) list_double_number_pane_vc

0x3c69,	// (0x00005242) list_double_pane_vc_ParamLimits

0x3c69,	// (0x00005242) list_double_pane_vc

0x3c69,	// (0x00005242) list_double_time_pane_vc_ParamLimits

0x3c69,	// (0x00005242) list_double_time_pane_vc

0x3c69,	// (0x00005242) list_setting_number_pane_vc_ParamLimits

0x3c69,	// (0x00005242) list_setting_number_pane_vc

0x3c69,	// (0x00005242) list_setting_pane_vc_ParamLimits

0x3c69,	// (0x00005242) list_setting_pane_vc

0x3c69,	// (0x00005242) list_single_graphic_heading_pane_vc_ParamLimits

0x3c69,	// (0x00005242) list_single_graphic_heading_pane_vc

0x3c69,	// (0x00005242) list_single_heading_pane_vc_ParamLimits

0x3c69,	// (0x00005242) list_single_heading_pane_vc

0x3c69,	// (0x00005242) list_single_number_heading_pane_vc_ParamLimits

0x3c69,	// (0x00005242) list_single_number_heading_pane_vc

0x20a6,	// (0x0000367f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x20a6,	// (0x0000367f) list_double_graphic_heading_pane_vc_g1

0x0f6a,	// (0x00002543) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0f6a,	// (0x00002543) list_double_graphic_heading_pane_vc_g2

0x4318,	// (0x000058f1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4318,	// (0x000058f1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9bd,	// (0x00010f96) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9bd,	// (0x00010f96) list_double_graphic_heading_pane_vc_g

0x4324,	// (0x000058fd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4324,	// (0x000058fd) list_double_graphic_heading_pane_vc_t1

0x433a,	// (0x00005913) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x433a,	// (0x00005913) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c4,	// (0x00010f9d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c4,	// (0x00010f9d) list_double_graphic_heading_pane_vc_t

0x22ec,	// (0x000038c5) list_setting_pane_vc_g1_ParamLimits

0x22ec,	// (0x000038c5) list_setting_pane_vc_g1

0x22f8,	// (0x000038d1) list_setting_pane_vc_g2_ParamLimits

0x22f8,	// (0x000038d1) list_setting_pane_vc_g2

0x0001,

0xf7b3,	// (0x00010d8c) list_setting_pane_vc_g_ParamLimits

0xf7b3,	// (0x00010d8c) list_setting_pane_vc_g

0x458b,	// (0x00005b64) list_setting_pane_vc_t1_ParamLimits

0x458b,	// (0x00005b64) list_setting_pane_vc_t1

0x45a7,	// (0x00005b80) list_setting_pane_vc_t2_ParamLimits

0x45a7,	// (0x00005b80) list_setting_pane_vc_t2

0x0001,

0xfa07,	// (0x00010fe0) list_setting_pane_vc_t_ParamLimits

0xfa07,	// (0x00010fe0) list_setting_pane_vc_t

0x2362,	// (0x0000393b) set_value_pane_cp_vc_ParamLimits

0x2362,	// (0x0000393b) set_value_pane_cp_vc

0x20b2,	// (0x0000368b) list_single_number_heading_pane_vc_g1_ParamLimits

0x20b2,	// (0x0000368b) list_single_number_heading_pane_vc_g1

0x20be,	// (0x00003697) list_single_number_heading_pane_vc_g2_ParamLimits

0x20be,	// (0x00003697) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00010b7c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00010b7c) list_single_number_heading_pane_vc_g

0x45c3,	// (0x00005b9c) list_single_number_heading_pane_vc_t1_ParamLimits

0x45c3,	// (0x00005b9c) list_single_number_heading_pane_vc_t1

0x45d9,	// (0x00005bb2) list_single_number_heading_pane_vc_t2_ParamLimits

0x45d9,	// (0x00005bb2) list_single_number_heading_pane_vc_t2

0x45eb,	// (0x00005bc4) list_single_number_heading_pane_vc_t3_ParamLimits

0x45eb,	// (0x00005bc4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0c,	// (0x00010fe5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0c,	// (0x00010fe5) list_single_number_heading_pane_vc_t

0x20a6,	// (0x0000367f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x20a6,	// (0x0000367f) list_single_graphic_heading_pane_vc_g1

0x20b2,	// (0x0000368b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x20b2,	// (0x0000368b) list_single_graphic_heading_pane_vc_g4

0x20be,	// (0x00003697) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x20be,	// (0x00003697) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf786,	// (0x00010d5f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf786,	// (0x00010d5f) list_single_graphic_heading_pane_vc_g

0x45c3,	// (0x00005b9c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x45c3,	// (0x00005b9c) list_single_graphic_heading_pane_vc_t1

0x45fd,	// (0x00005bd6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x45fd,	// (0x00005bd6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa13,	// (0x00010fec) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa13,	// (0x00010fec) list_single_graphic_heading_pane_vc_t

0x20b2,	// (0x0000368b) list_double2_pane_vc_g1_ParamLimits

0x20b2,	// (0x0000368b) list_double2_pane_vc_g1

0x20be,	// (0x00003697) list_double2_pane_vc_g2_ParamLimits

0x20be,	// (0x00003697) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00010b7c) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00010b7c) list_double2_pane_vc_g

0x460f,	// (0x00005be8) list_double2_pane_vc_t1_ParamLimits

0x460f,	// (0x00005be8) list_double2_pane_vc_t1

0x4625,	// (0x00005bfe) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4625,	// (0x00005bfe) list_double2_large_graphic_pane_vc_g1

0x4631,	// (0x00005c0a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4631,	// (0x00005c0a) list_double2_large_graphic_pane_vc_g2

0x463d,	// (0x00005c16) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x463d,	// (0x00005c16) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00010b99) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00010b99) list_double2_large_graphic_pane_vc_g

0x4649,	// (0x00005c22) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4649,	// (0x00005c22) list_double2_large_graphic_pane_vc_t1

0x465f,	// (0x00005c38) list_double_time_pane_vc_g1_ParamLimits

0x465f,	// (0x00005c38) list_double_time_pane_vc_g1

0x466b,	// (0x00005c44) list_double_time_pane_vc_g2_ParamLimits

0x466b,	// (0x00005c44) list_double_time_pane_vc_g2

0x0001,

0xfa18,	// (0x00010ff1) list_double_time_pane_vc_g_ParamLimits

0xfa18,	// (0x00010ff1) list_double_time_pane_vc_g

0x4677,	// (0x00005c50) list_double_time_pane_vc_t1_ParamLimits

0x4677,	// (0x00005c50) list_double_time_pane_vc_t1

0x46a7,	// (0x00005c80) list_double_time_pane_vc_t2_ParamLimits

0x46a7,	// (0x00005c80) list_double_time_pane_vc_t2

0x46d0,	// (0x00005ca9) list_double_time_pane_vc_t3_ParamLimits

0x46d0,	// (0x00005ca9) list_double_time_pane_vc_t3

0x46e2,	// (0x00005cbb) list_double_time_pane_vc_t4_ParamLimits

0x46e2,	// (0x00005cbb) list_double_time_pane_vc_t4

0x0003,

0xfa1d,	// (0x00010ff6) list_double_time_pane_vc_t_ParamLimits

0xfa1d,	// (0x00010ff6) list_double_time_pane_vc_t

0x20b2,	// (0x0000368b) list_double_pane_vc_g1_ParamLimits

0x20b2,	// (0x0000368b) list_double_pane_vc_g1

0x20be,	// (0x00003697) list_double_pane_vc_g2_ParamLimits

0x20be,	// (0x00003697) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00010b7c) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00010b7c) list_double_pane_vc_g

0x46f6,	// (0x00005ccf) list_double_pane_vc_t1_ParamLimits

0x46f6,	// (0x00005ccf) list_double_pane_vc_t1

0x470a,	// (0x00005ce3) list_double_pane_vc_t2_ParamLimits

0x470a,	// (0x00005ce3) list_double_pane_vc_t2

0x0001,

0xfa26,	// (0x00010fff) list_double_pane_vc_t_ParamLimits

0xfa26,	// (0x00010fff) list_double_pane_vc_t

0x20b2,	// (0x0000368b) list_double_number_pane_vc_g1_ParamLimits

0x20b2,	// (0x0000368b) list_double_number_pane_vc_g1

0x20be,	// (0x00003697) list_double_number_pane_vc_g2_ParamLimits

0x20be,	// (0x00003697) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00010b7c) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00010b7c) list_double_number_pane_vc_g

0x4720,	// (0x00005cf9) list_double_number_pane_vc_t1_ParamLimits

0x4720,	// (0x00005cf9) list_double_number_pane_vc_t1

0x4732,	// (0x00005d0b) list_double_number_pane_vc_t2_ParamLimits

0x4732,	// (0x00005d0b) list_double_number_pane_vc_t2

0x470a,	// (0x00005ce3) list_double_number_pane_vc_t3_ParamLimits

0x470a,	// (0x00005ce3) list_double_number_pane_vc_t3

0x0002,

0xfa2b,	// (0x00011004) list_double_number_pane_vc_t_ParamLimits

0xfa2b,	// (0x00011004) list_double_number_pane_vc_t

0x4746,	// (0x00005d1f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4746,	// (0x00005d1f) list_double_large_graphic_pane_vc_g1

0x4768,	// (0x00005d41) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4768,	// (0x00005d41) list_double_large_graphic_pane_vc_g2

0x477c,	// (0x00005d55) list_double_large_graphic_pane_vc_g3_ParamLimits

0x477c,	// (0x00005d55) list_double_large_graphic_pane_vc_g3

0x478b,	// (0x00005d64) list_double_large_graphic_pane_vc_g4_ParamLimits

0x478b,	// (0x00005d64) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa32,	// (0x0001100b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa32,	// (0x0001100b) list_double_large_graphic_pane_vc_g

0x4797,	// (0x00005d70) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4797,	// (0x00005d70) list_double_large_graphic_pane_vc_t1

0x47b3,	// (0x00005d8c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x47b3,	// (0x00005d8c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3b,	// (0x00011014) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3b,	// (0x00011014) list_double_large_graphic_pane_vc_t

0x0f6a,	// (0x00002543) list_double_heading_pane_vc_g1_ParamLimits

0x0f6a,	// (0x00002543) list_double_heading_pane_vc_g1

0x4318,	// (0x000058f1) list_double_heading_pane_vc_g2_ParamLimits

0x4318,	// (0x000058f1) list_double_heading_pane_vc_g2

0x0001,

0xfa40,	// (0x00011019) list_double_heading_pane_vc_g_ParamLimits

0xfa40,	// (0x00011019) list_double_heading_pane_vc_g

0x47d3,	// (0x00005dac) list_double_heading_pane_vc_t1_ParamLimits

0x47d3,	// (0x00005dac) list_double_heading_pane_vc_t1

0x47e5,	// (0x00005dbe) list_double_heading_pane_vc_t2_ParamLimits

0x47e5,	// (0x00005dbe) list_double_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0001101e) list_double_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0001101e) list_double_heading_pane_vc_t

0x47fd,	// (0x00005dd6) list_double_graphic_pane_vc_g1_ParamLimits

0x47fd,	// (0x00005dd6) list_double_graphic_pane_vc_g1

0x4809,	// (0x00005de2) list_double_graphic_pane_vc_g2_ParamLimits

0x4809,	// (0x00005de2) list_double_graphic_pane_vc_g2

0x20b2,	// (0x0000368b) list_double_graphic_pane_vc_g3_ParamLimits

0x20b2,	// (0x0000368b) list_double_graphic_pane_vc_g3

0x0003,

0xfa4a,	// (0x00011023) list_double_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x00011023) list_double_graphic_pane_vc_g

0x4826,	// (0x00005dff) list_double_graphic_pane_vc_t1_ParamLimits

0x4826,	// (0x00005dff) list_double_graphic_pane_vc_t1

0x4850,	// (0x00005e29) list_double_graphic_pane_vc_t2_ParamLimits

0x4850,	// (0x00005e29) list_double_graphic_pane_vc_t2

0x0001,

0xfa53,	// (0x0001102c) list_double_graphic_pane_vc_t_ParamLimits

0xfa53,	// (0x0001102c) list_double_graphic_pane_vc_t

0xea6e,	// (0x00010047) aid_size_cell_fastswap

0xa474,	// (0x0000ba4d) aid_size_cell_touch_ParamLimits

0xa474,	// (0x0000ba4d) aid_size_cell_touch

0xebf5,	// (0x000101ce) popup_fast_swap_wide_window_ParamLimits

0xebf5,	// (0x000101ce) popup_fast_swap_wide_window

0xa632,	// (0x0000bc0b) touch_pane_ParamLimits

0xa632,	// (0x0000bc0b) touch_pane

0xf38b,	// (0x00010964) button_value_adjust_pane_cp2

0xf393,	// (0x0001096c) button_value_adjust_pane_cp4

0xf39b,	// (0x00010974) form_field_data_pane_cp2

0xae5f,	// (0x0000c438) form_field_data_wide_pane_cp2

0x05c2,	// (0x00001b9b) bg_scroll_pane_ParamLimits

0x05e1,	// (0x00001bba) scroll_handle_pane_ParamLimits

0x05f5,	// (0x00001bce) scroll_sc2_down_pane_ParamLimits

0x05f5,	// (0x00001bce) scroll_sc2_down_pane

0x061c,	// (0x00001bf5) scroll_sc2_up_pane_ParamLimits

0x061c,	// (0x00001bf5) scroll_sc2_up_pane

0xca01,	// (0x0000dfda) grid_wheel_folder_pane_g1_ParamLimits

0xca01,	// (0x0000dfda) grid_wheel_folder_pane_g1

0x0cdc,	// (0x000022b5) clock_nsta_pane_cp2_ParamLimits

0x0cdc,	// (0x000022b5) clock_nsta_pane_cp2

0xb30d,	// (0x0000c8e6) listscroll_midp_pane_ParamLimits

0xb319,	// (0x0000c8f2) midp_canvas_pane

0x15a5,	// (0x00002b7e) nsta_clock_indic_pane

0x1603,	// (0x00002bdc) listscroll_form_pane_vc

0x1627,	// (0x00002c00) listscroll_set_pane_vc_ParamLimits

0x1627,	// (0x00002c00) listscroll_set_pane_vc

0xbe61,	// (0x0000d43a) clock_nsta_pane

0xbe8b,	// (0x0000d464) indicator_nsta_pane

0x2112,	// (0x000036eb) bg_popup_sub_pane_cp2_ParamLimits

0x2126,	// (0x000036ff) find_pane_cp2_ParamLimits

0x2126,	// (0x000036ff) find_pane_cp2

0x213c,	// (0x00003715) grid_toobar_pane_ParamLimits

0x2374,	// (0x0000394d) list_form_gen_pane_vc_ParamLimits

0x2374,	// (0x0000394d) list_form_gen_pane_vc

0x238a,	// (0x00003963) scroll_pane_cp8_vc_ParamLimits

0x238a,	// (0x00003963) scroll_pane_cp8_vc

0x24a9,	// (0x00003a82) data_form_wide_pane_vc_ParamLimits

0x24a9,	// (0x00003a82) data_form_wide_pane_vc

0x24b5,	// (0x00003a8e) form_field_data_wide_pane_vc_g1

0x24bd,	// (0x00003a96) form_field_data_wide_pane_vc_t1_ParamLimits

0x24bd,	// (0x00003a96) form_field_data_wide_pane_vc_t1

0xf3f7,	// (0x000109d0) input_focus_pane_cp6_vc_ParamLimits

0xf3f7,	// (0x000109d0) input_focus_pane_cp6_vc

0x2808,	// (0x00003de1) list_midp_pane_ParamLimits

0x3eb1,	// (0x0000548a) scroll_pane_cp16_ParamLimits

0x3eb1,	// (0x0000548a) scroll_pane_cp16

0x285e,	// (0x00003e37) button_value_adjust_pane_ParamLimits

0x285e,	// (0x00003e37) button_value_adjust_pane

0xc5f7,	// (0x0000dbd0) button_value_adjust_pane_cp6_ParamLimits

0xc5f7,	// (0x0000dbd0) button_value_adjust_pane_cp6

0xc733,	// (0x0000dd0c) settings_code_pane_cp_ParamLimits

0xc733,	// (0x0000dd0c) settings_code_pane_cp

0xea4c,	// (0x00010025) cell_touch_pane_g1

0xea4c,	// (0x00010025) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x00010cb2) cell_touch_pane_g

0xc8d5,	// (0x0000deae) cell_touch_pane_cp_ParamLimits

0xc8d5,	// (0x0000deae) cell_touch_pane_cp

0xc8f1,	// (0x0000deca) cell_touch_pane_ParamLimits

0xc8f1,	// (0x0000deca) cell_touch_pane

0xea4c,	// (0x00010025) scroll_sc2_down_pane_g1

0xea4c,	// (0x00010025) scroll_sc2_up_pane_g1

0xebc5,	// (0x0001019e) bg_set_opt_pane_cp4_vc

0x4358,	// (0x00005931) list_set_graphic_pane_vc_g1_ParamLimits

0x4358,	// (0x00005931) list_set_graphic_pane_vc_g1

0x4364,	// (0x0000593d) list_set_graphic_pane_vc_g2_ParamLimits

0x4364,	// (0x0000593d) list_set_graphic_pane_vc_g2

0x0001,

0xf9c9,	// (0x00010fa2) list_set_graphic_pane_vc_g_ParamLimits

0xf9c9,	// (0x00010fa2) list_set_graphic_pane_vc_g

0x4370,	// (0x00005949) text_primary_small_cp13_vc_ParamLimits

0x4370,	// (0x00005949) text_primary_small_cp13_vc

0x4388,	// (0x00005961) list_set_graphic_pane_vc_ParamLimits

0x4388,	// (0x00005961) list_set_graphic_pane_vc

0xebc5,	// (0x0001019e) input_focus_pane_cp2_vc

0xea4c,	// (0x00010025) setting_code_pane_vc_g1

0xed1f,	// (0x000102f8) setting_code_pane_vc_t1

0x439b,	// (0x00005974) set_text_pane_vc_t1_ParamLimits

0x439b,	// (0x00005974) set_text_pane_vc_t1

0xebc5,	// (0x0001019e) input_focus_pane_cp1_vc

0x43bc,	// (0x00005995) list_set_text_pane_vc

0xea4c,	// (0x00010025) setting_text_pane_vc_g1

0xebc5,	// (0x0001019e) bg_set_opt_pane_cp2_vc

0xecee,	// (0x000102c7) setting_slider_graphic_pane_vc_g1

0x43c6,	// (0x0000599f) setting_slider_graphic_pane_vc_t1

0x43d8,	// (0x000059b1) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ce,	// (0x00010fa7) setting_slider_graphic_pane_vc_t

0x43ea,	// (0x000059c3) slider_set_pane_cp_vc

0x43f4,	// (0x000059cd) slider_set_pane_vc_g1

0x43fd,	// (0x000059d6) slider_set_pane_vc_g2

0x0006,

0xf9d3,	// (0x00010fac) slider_set_pane_vc_g

0xf4b2,	// (0x00010a8b) set_opt_bg_pane_g1_copy1

0xf4ba,	// (0x00010a93) set_opt_bg_pane_g2_copy1

0x4429,	// (0x00005a02) set_opt_bg_pane_g3_copy1

0xf4ca,	// (0x00010aa3) set_opt_bg_pane_g4_copy1

0xf4d2,	// (0x00010aab) set_opt_bg_pane_g5_copy1

0xf4da,	// (0x00010ab3) set_opt_bg_pane_g6_copy1

0x4433,	// (0x00005a0c) set_opt_bg_pane_g7_copy1

0x443d,	// (0x00005a16) set_opt_bg_pane_g8_copy1

0x4447,	// (0x00005a20) set_opt_bg_pane_g9_copy1

0xebc5,	// (0x0001019e) bg_set_opt_pane_cp_vc

0x4451,	// (0x00005a2a) setting_slider_pane_vc_t1

0x4460,	// (0x00005a39) setting_slider_pane_vc_t2

0x4472,	// (0x00005a4b) setting_slider_pane_vc_t3

0x0002,

0xf9e2,	// (0x00010fbb) setting_slider_pane_vc_t

0x4484,	// (0x00005a5d) slider_set_pane_vc

0x30a3,	// (0x0000467c) volume_set_pane_vc_g1

0x30ac,	// (0x00004685) volume_set_pane_vc_g2

0x30b5,	// (0x0000468e) volume_set_pane_vc_g3

0x30be,	// (0x00004697) volume_set_pane_vc_g4

0x30c7,	// (0x000046a0) volume_set_pane_vc_g5

0x30d0,	// (0x000046a9) volume_set_pane_vc_g6

0x30d9,	// (0x000046b2) volume_set_pane_vc_g7

0x30e2,	// (0x000046bb) volume_set_pane_vc_g8

0x30eb,	// (0x000046c4) volume_set_pane_vc_g9

0x30f4,	// (0x000046cd) volume_set_pane_vc_g10

0x0009,

0xf9e9,	// (0x00010fc2) volume_set_pane_vc_g

0x448e,	// (0x00005a67) volume_set_pane_vc

0x4498,	// (0x00005a71) button_value_adjust_pane_cp1_vc

0x44a2,	// (0x00005a7b) list_highlight_pane_cp2_vc

0x44ab,	// (0x00005a84) list_set_pane_vc_ParamLimits

0x44ab,	// (0x00005a84) list_set_pane_vc

0x4519,	// (0x00005af2) main_pane_set_vc_t1_ParamLimits

0x4519,	// (0x00005af2) main_pane_set_vc_t1

0x452e,	// (0x00005b07) main_pane_set_vc_t2_ParamLimits

0x452e,	// (0x00005b07) main_pane_set_vc_t2

0x4540,	// (0x00005b19) main_pane_set_vc_t3_ParamLimits

0x4540,	// (0x00005b19) main_pane_set_vc_t3

0x4554,	// (0x00005b2d) main_pane_set_vc_t4_ParamLimits

0x4554,	// (0x00005b2d) main_pane_set_vc_t4

0x0003,

0xf9fe,	// (0x00010fd7) main_pane_set_vc_t_ParamLimits

0xf9fe,	// (0x00010fd7) main_pane_set_vc_t

0x4568,	// (0x00005b41) setting_code_pane_vc_ParamLimits

0x4568,	// (0x00005b41) setting_code_pane_vc

0x4579,	// (0x00005b52) setting_slider_graphic_pane_vc

0x4579,	// (0x00005b52) setting_slider_pane_vc

0x4579,	// (0x00005b52) setting_text_pane_vc

0x4579,	// (0x00005b52) setting_volume_pane_vc

0x4583,	// (0x00005b5c) scroll_pane_cp121_vc

0xf379,	// (0x00010952) set_content_pane_vc

0x486e,	// (0x00005e47) button_value_adjust_pane_g1

0x4877,	// (0x00005e50) button_value_adjust_pane_g2

0x0001,

0xfa58,	// (0x00011031) button_value_adjust_pane_g

0x4880,	// (0x00005e59) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4880,	// (0x00005e59) form_field_slider_wide_pane_vc_t1

0x4892,	// (0x00005e6b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4892,	// (0x00005e6b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5d,	// (0x00011036) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5d,	// (0x00011036) form_field_slider_wide_pane_vc_t

0xec67,	// (0x00010240) input_focus_pane_cp10_vc_ParamLimits

0xec67,	// (0x00010240) input_focus_pane_cp10_vc

0x48be,	// (0x00005e97) slider_cont_pane_cp1_vc_ParamLimits

0x48be,	// (0x00005e97) slider_cont_pane_cp1_vc

0x48d0,	// (0x00005ea9) slider_form_pane_g1_cp2

0x43fd,	// (0x000059d6) slider_form_pane_g2_cp2

0x48fd,	// (0x00005ed6) form_field_slider_pane_vc_t3

0x490b,	// (0x00005ee4) form_field_slider_pane_vc_t4

0x4919,	// (0x00005ef2) slider_form_pane_vc_ParamLimits

0x4919,	// (0x00005ef2) slider_form_pane_vc

0x4926,	// (0x00005eff) form_field_slider_pane_vc_t1_ParamLimits

0x4926,	// (0x00005eff) form_field_slider_pane_vc_t1

0x4892,	// (0x00005e6b) form_field_slider_pane_vc_t2_ParamLimits

0x4892,	// (0x00005e6b) form_field_slider_pane_vc_t2

0x0001,

0xfa6f,	// (0x00011048) form_field_slider_pane_vc_t_ParamLimits

0xfa6f,	// (0x00011048) form_field_slider_pane_vc_t

0xec67,	// (0x00010240) input_focus_pane_cp9_vc_ParamLimits

0xec67,	// (0x00010240) input_focus_pane_cp9_vc

0x493c,	// (0x00005f15) slider_cont_pane_vc_ParamLimits

0x493c,	// (0x00005f15) slider_cont_pane_vc

0x4950,	// (0x00005f29) list_form_graphic_pane_cp_vc_ParamLimits

0x4950,	// (0x00005f29) list_form_graphic_pane_cp_vc

0x24b5,	// (0x00003a8e) form_field_popup_wide_pane_vc_g1

0x4965,	// (0x00005f3e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4965,	// (0x00005f3e) form_field_popup_wide_pane_vc_t1

0xf3f7,	// (0x000109d0) input_focus_pane_cp8_vc_ParamLimits

0xf3f7,	// (0x000109d0) input_focus_pane_cp8_vc

0x49aa,	// (0x00005f83) list_form_wide_pane_vc_ParamLimits

0x49aa,	// (0x00005f83) list_form_wide_pane_vc

0x49b6,	// (0x00005f8f) list_form_graphic_pane_vc_g1

0x49be,	// (0x00005f97) list_form_graphic_pane_vc_t1_ParamLimits

0x49be,	// (0x00005f97) list_form_graphic_pane_vc_t1

0xec7f,	// (0x00010258) list_highlight_pane_cp5_vc_ParamLimits

0xec7f,	// (0x00010258) list_highlight_pane_cp5_vc

0x49da,	// (0x00005fb3) list_form_graphic_pane_vc_ParamLimits

0x49da,	// (0x00005fb3) list_form_graphic_pane_vc

0x24b5,	// (0x00003a8e) form_field_popup_pane_vc_g1

0x49f0,	// (0x00005fc9) form_field_popup_pane_vc_t1_ParamLimits

0x49f0,	// (0x00005fc9) form_field_popup_pane_vc_t1

0xf3f7,	// (0x000109d0) input_focus_pane_cp7_vc_ParamLimits

0xf3f7,	// (0x000109d0) input_focus_pane_cp7_vc

0x4a07,	// (0x00005fe0) list_form_pane_vc_ParamLimits

0x4a07,	// (0x00005fe0) list_form_pane_vc

0x4a13,	// (0x00005fec) data_form_pane_vc_t1_ParamLimits

0x4a13,	// (0x00005fec) data_form_pane_vc_t1

0xf4b2,	// (0x00010a8b) input_focus_pane_vc_g1

0xf4ba,	// (0x00010a93) input_focus_pane_vc_g2

0xf4c2,	// (0x00010a9b) input_focus_pane_vc_g3

0xf4ca,	// (0x00010aa3) input_focus_pane_vc_g4

0xf4d2,	// (0x00010aab) input_focus_pane_vc_g5

0xf4da,	// (0x00010ab3) input_focus_pane_vc_g6

0xf4e2,	// (0x00010abb) input_focus_pane_vc_g7

0xf4ea,	// (0x00010ac3) input_focus_pane_vc_g8

0xf4f2,	// (0x00010acb) input_focus_pane_vc_g9

0xea4c,	// (0x00010025) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00010c3b) input_focus_pane_vc_g

0x24a9,	// (0x00003a82) data_form_pane_vc_ParamLimits

0x24a9,	// (0x00003a82) data_form_pane_vc

0x24b5,	// (0x00003a8e) form_field_data_pane_vc_g1

0x4a30,	// (0x00006009) form_field_data_pane_vc_t1_ParamLimits

0x4a30,	// (0x00006009) form_field_data_pane_vc_t1

0xf3f7,	// (0x000109d0) input_focus_pane_vc_ParamLimits

0xf3f7,	// (0x000109d0) input_focus_pane_vc

0x4a4a,	// (0x00006023) button_value_adjust_pane_cp3_vc

0x4a52,	// (0x0000602b) button_value_adjust_pane_cp5_vc

0x4a5a,	// (0x00006033) form_field_data_pane_vc_ParamLimits

0x4a5a,	// (0x00006033) form_field_data_pane_vc

0x4a75,	// (0x0000604e) form_field_data_pane_vc_cp2

0x4a7d,	// (0x00006056) form_field_data_wide_pane_vc_ParamLimits

0x4a7d,	// (0x00006056) form_field_data_wide_pane_vc

0x4a97,	// (0x00006070) form_field_data_wide_pane_vc_cp2

0x4a9f,	// (0x00006078) form_field_popup_pane_vc_ParamLimits

0x4a9f,	// (0x00006078) form_field_popup_pane_vc

0x4aba,	// (0x00006093) form_field_popup_wide_pane_vc_ParamLimits

0x4aba,	// (0x00006093) form_field_popup_wide_pane_vc

0x4ad4,	// (0x000060ad) form_field_slider_pane_vc_ParamLimits

0x4ad4,	// (0x000060ad) form_field_slider_pane_vc

0x4ae7,	// (0x000060c0) form_field_slider_wide_pane_vc_ParamLimits

0x4ae7,	// (0x000060c0) form_field_slider_wide_pane_vc

0xc90f,	// (0x0000dee8) grid_touch_1_pane_ParamLimits

0xc90f,	// (0x0000dee8) grid_touch_1_pane

0xc923,	// (0x0000defc) grid_touch_2_pane_ParamLimits

0xc923,	// (0x0000defc) grid_touch_2_pane

0x4bcd,	// (0x000061a6) touch_pane_g1_ParamLimits

0x4bcd,	// (0x000061a6) touch_pane_g1

0x4b20,	// (0x000060f9) cell_app_pane_cp_wide_ParamLimits

0x4b20,	// (0x000060f9) cell_app_pane_cp_wide

0x4b31,	// (0x0000610a) grid_popup_fast_wide_pane_ParamLimits

0x4b31,	// (0x0000610a) grid_popup_fast_wide_pane

0x4b45,	// (0x0000611e) scroll_pane_cp19_ParamLimits

0x4b45,	// (0x0000611e) scroll_pane_cp19

0xebc5,	// (0x0001019e) bg_popup_window_pane_cp20

0x4b59,	// (0x00006132) listscroll_popup_fast_wide_pane

0xc94f,	// (0x0000df28) grid_indicator_nsta_pane

0x4b73,	// (0x0000614c) clock_nsta_pane_g1

0x4b7c,	// (0x00006155) clock_nsta_pane_t1

0xc95b,	// (0x0000df34) cell_indicator_nsta_pane_ParamLimits

0xc95b,	// (0x0000df34) cell_indicator_nsta_pane

0x4bcd,	// (0x000061a6) cell_indicator_nsta_pane_g1

0xc976,	// (0x0000df4f) cell_indicator_nsta_pane_g2

0x0001,

0xfa80,	// (0x00011059) cell_indicator_nsta_pane_g

0x4bee,	// (0x000061c7) clock_nsta_pane_cp

0x4bf7,	// (0x000061d0) indicator_nsta_pane_cp

0x4c01,	// (0x000061da) nsta_clock_indic_pane_g1

0xed5e,	// (0x00010337) grid_indicator_pane

0x070e,	// (0x00001ce7) scroll_pane_cp29

0x0c09,	// (0x000021e2) indicator_nsta_pane_cp2_ParamLimits

0x0c09,	// (0x000021e2) indicator_nsta_pane_cp2

0xec7f,	// (0x00010258) main_apps_wheel_pane

0x26c5,	// (0x00003c9e) form_midp_field_text_pane_ParamLimits

0x2814,	// (0x00003ded) scroll_bar_cp050_ParamLimits

0x4c5a,	// (0x00006233) cell_indicator_pane_ParamLimits

0x4c5a,	// (0x00006233) cell_indicator_pane

0x4c72,	// (0x0000624b) cell_indicator_pane_g1

0xc983,	// (0x0000df5c) grid_wheel_folder_pane_ParamLimits

0xc983,	// (0x0000df5c) grid_wheel_folder_pane

0xc991,	// (0x0000df6a) list_wheel_apps_pane_ParamLimits

0xc991,	// (0x0000df6a) list_wheel_apps_pane

0xc99f,	// (0x0000df78) main_apps_wheel_pane_g1_ParamLimits

0xc99f,	// (0x0000df78) main_apps_wheel_pane_g1

0xc9af,	// (0x0000df88) main_apps_wheel_pane_g2_ParamLimits

0xc9af,	// (0x0000df88) main_apps_wheel_pane_g2

0x0001,

0xfa9c,	// (0x00011075) main_apps_wheel_pane_g_ParamLimits

0xfa9c,	// (0x00011075) main_apps_wheel_pane_g

0xc9bf,	// (0x0000df98) main_apps_wheel_pane_t1_ParamLimits

0xc9bf,	// (0x0000df98) main_apps_wheel_pane_t1

0xc9d7,	// (0x0000dfb0) list_wheel_apps_pane_g1

0xc9df,	// (0x0000dfb8) list_wheel_apps_pane_g2

0xc9e7,	// (0x0000dfc0) list_wheel_apps_pane_g3

0xc9ef,	// (0x0000dfc8) list_wheel_apps_pane_g4

0xc9f7,	// (0x0000dfd0) list_wheel_apps_pane_g5

0x0004,

0xfaa1,	// (0x0001107a) list_wheel_apps_pane_g

0x0f15,	// (0x000024ee) navi_icon_text_pane

0xbd53,	// (0x0000d32c) aid_fill_nsta

0xca14,	// (0x0000dfed) navi_icon_text_pane_g1

0xca20,	// (0x0000dff9) navi_icon_text_pane_t1

0x0da0,	// (0x00002379) list_set_graphic_pane_t1_ParamLimits

0x0da0,	// (0x00002379) list_set_graphic_pane_t1

0x2f81,	// (0x0000455a) popup_midp_note_alarm_window_t6_ParamLimits

0x2f81,	// (0x0000455a) popup_midp_note_alarm_window_t6

0x2f93,	// (0x0000456c) popup_midp_note_alarm_window_t7_ParamLimits

0x2f93,	// (0x0000456c) popup_midp_note_alarm_window_t7

0x2fa5,	// (0x0000457e) popup_midp_note_alarm_window_t8_ParamLimits

0x2fa5,	// (0x0000457e) popup_midp_note_alarm_window_t8

0x2fb7,	// (0x00004590) popup_midp_note_alarm_window_t9_ParamLimits

0x2fb7,	// (0x00004590) popup_midp_note_alarm_window_t9

0x2fc9,	// (0x000045a2) popup_midp_note_alarm_window_t10_ParamLimits

0x2fc9,	// (0x000045a2) popup_midp_note_alarm_window_t10

0x2fdb,	// (0x000045b4) popup_midp_note_alarm_window_t11_ParamLimits

0x2fdb,	// (0x000045b4) popup_midp_note_alarm_window_t11

0x2fed,	// (0x000045c6) scroll_pane_cp17_ParamLimits

0x2fed,	// (0x000045c6) scroll_pane_cp17

0x30a3,	// (0x0000467c) volume_small_pane_cp_g1

0x4d65,	// (0x0000633e) volume_small_pane_cp_g2

0x4d6e,	// (0x00006347) volume_small_pane_cp_g3

0x4d77,	// (0x00006350) volume_small_pane_cp_g4

0x4d80,	// (0x00006359) volume_small_pane_cp_g5

0x4d89,	// (0x00006362) volume_small_pane_cp_g6

0x4d92,	// (0x0000636b) volume_small_pane_cp_g7

0x4d9b,	// (0x00006374) volume_small_pane_cp_g8

0x4da4,	// (0x0000637d) volume_small_pane_cp_g9

0x4dad,	// (0x00006386) volume_small_pane_cp_g10

0x1177,	// (0x00002750) midp_ticker_pane_g1_ParamLimits

0x1183,	// (0x0000275c) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x00010d07) midp_ticker_pane_g_ParamLimits

0xb3b1,	// (0x0000c98a) midp_ticker_pane_t1_ParamLimits

0xbd77,	// (0x0000d350) aid_fill_nsta_2

0x2800,	// (0x00003dd9) list_form2_midp_pane

0x3c21,	// (0x000051fa) midp_editing_number_pane_ParamLimits

0x3c30,	// (0x00005209) midp_ticker_pane_ParamLimits

0x4db6,	// (0x0000638f) form2_midp_field_pane

0x4dda,	// (0x000063b3) scroll_pane_cp51

0x4dfa,	// (0x000063d3) form2_midp_button_pane_ParamLimits

0x4dfa,	// (0x000063d3) form2_midp_button_pane

0x4e0c,	// (0x000063e5) form2_midp_content_pane_ParamLimits

0x4e0c,	// (0x000063e5) form2_midp_content_pane

0x4e26,	// (0x000063ff) form2_midp_field_choice_group_pane

0x4e2e,	// (0x00006407) form2_midp_field_pane_g1

0x4e36,	// (0x0000640f) form2_midp_field_pane_g2

0x4e3e,	// (0x00006417) form2_midp_field_pane_g3

0x4e46,	// (0x0000641f) form2_midp_field_pane_g4

0x0003,

0xfac6,	// (0x0001109f) form2_midp_field_pane_g

0x4e4e,	// (0x00006427) form2_midp_gauge_slider_pane

0x4e56,	// (0x0000642f) form2_midp_gauge_wait_pane

0x4e5e,	// (0x00006437) form2_midp_image_pane_ParamLimits

0x4e5e,	// (0x00006437) form2_midp_image_pane

0x4e79,	// (0x00006452) form2_midp_label_pane_ParamLimits

0x4e79,	// (0x00006452) form2_midp_label_pane

0xca4e,	// (0x0000e027) form2_midp_label_pane_cp_ParamLimits

0xca4e,	// (0x0000e027) form2_midp_label_pane_cp

0x4eb9,	// (0x00006492) form2_midp_string_pane_ParamLimits

0x4eb9,	// (0x00006492) form2_midp_string_pane

0x4ecb,	// (0x000064a4) form2_midp_text_pane_ParamLimits

0x4ecb,	// (0x000064a4) form2_midp_text_pane

0x4eec,	// (0x000064c5) form2_midp_time_pane

0x4efc,	// (0x000064d5) input_focus_pane_cp51_ParamLimits

0x4efc,	// (0x000064d5) input_focus_pane_cp51

0x4f14,	// (0x000064ed) form2_midp_label_pane_t1_ParamLimits

0x4f14,	// (0x000064ed) form2_midp_label_pane_t1

0x4f5a,	// (0x00006533) form2_mdip_text_pane_t1_ParamLimits

0x4f5a,	// (0x00006533) form2_mdip_text_pane_t1

0x4f79,	// (0x00006552) form2_midp_time_pane_t1

0x4f94,	// (0x0000656d) form2_midp_gauge_slider_pane_t1

0xca6f,	// (0x0000e048) form2_midp_gauge_slider_pane_t2

0xca81,	// (0x0000e05a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacf,	// (0x000110a8) form2_midp_gauge_slider_pane_t

0x4fca,	// (0x000065a3) form2_midp_slider_pane

0x4fd6,	// (0x000065af) form2_midp_gauge_wait_pane_t1

0x4fe4,	// (0x000065bd) form2_midp_wait_pane_ParamLimits

0x4fe4,	// (0x000065bd) form2_midp_wait_pane

0x24fc,	// (0x00003ad5) list_single_2graphic_pane_cp4_ParamLimits

0x24fc,	// (0x00003ad5) list_single_2graphic_pane_cp4

0xca93,	// (0x0000e06c) list_single_midp_graphic_pane_cp_ParamLimits

0xca93,	// (0x0000e06c) list_single_midp_graphic_pane_cp

0xebc5,	// (0x0001019e) list_highlight_pane_cp20

0x5028,	// (0x00006601) list_single_2graphic_pane_g1_cp4

0x41e9,	// (0x000057c2) list_single_2graphic_pane_g2_cp4

0x5030,	// (0x00006609) list_single_2graphic_pane_t1_cp4

0xec7f,	// (0x00010258) list_highlight_pane_cp21

0x503f,	// (0x00006618) list_single_midp_graphic_pane_g4_cp

0x504e,	// (0x00006627) list_single_midp_graphic_pane_t1_cp

0xcab4,	// (0x0000e08d) form2_mdip_string_pane_t1_ParamLimits

0xcab4,	// (0x0000e08d) form2_mdip_string_pane_t1

0xebc5,	// (0x0001019e) bg_wml_button_pane_cp2

0xea4c,	// (0x00010025) form2_midp_image_pane_g1

0xf30b,	// (0x000108e4) list_double_large_graphic_pane_g5_ParamLimits

0xf30b,	// (0x000108e4) list_double_large_graphic_pane_g5

0xb30d,	// (0x0000c8e6) midp_form_pane_ParamLimits

0xec7f,	// (0x00010258) main_apps_wheel_pane_ParamLimits

0xba6d,	// (0x0000d046) popup_preview_window_ParamLimits

0xba6d,	// (0x0000d046) popup_preview_window

0x1bff,	// (0x000031d8) popup_touch_info_window_ParamLimits

0x1bff,	// (0x000031d8) popup_touch_info_window

0x1c21,	// (0x000031fa) popup_touch_menu_window_ParamLimits

0x1c21,	// (0x000031fa) popup_touch_menu_window

0xea42,	// (0x0001001b) bg_popup_sub_pane_cp6

0x50ff,	// (0x000066d8) list_touch_menu_pane

0x5107,	// (0x000066e0) list_single_touch_menu_pane_ParamLimits

0x5107,	// (0x000066e0) list_single_touch_menu_pane

0x511f,	// (0x000066f8) list_single_touch_menu_pane_t1

0xec7f,	// (0x00010258) bg_popup_sub_pane_cp7_ParamLimits

0xec7f,	// (0x00010258) bg_popup_sub_pane_cp7

0x512d,	// (0x00006706) heading_sub_pane

0x5135,	// (0x0000670e) list_touch_info_pane_ParamLimits

0x5135,	// (0x0000670e) list_touch_info_pane

0x5144,	// (0x0000671d) list_single_touch_info_pane_ParamLimits

0x5144,	// (0x0000671d) list_single_touch_info_pane

0x5156,	// (0x0000672f) list_single_touch_info_pane_t1

0x5164,	// (0x0000673d) list_single_touch_info_pane_t2

0x0001,

0xfadd,	// (0x000110b6) list_single_touch_info_pane_t

0x1099,	// (0x00002672) bg_popup_heading_pane_cp

0x5172,	// (0x0000674b) heading_sub_pane_t1

0x23b5,	// (0x0000398e) bg_popup_preview_window_pane_cp_ParamLimits

0x23b5,	// (0x0000398e) bg_popup_preview_window_pane_cp

0x512d,	// (0x00006706) heading_preview_pane

0x5135,	// (0x0000670e) list_preview_pane_ParamLimits

0x5135,	// (0x0000670e) list_preview_pane

0x5180,	// (0x00006759) popup_preview_window_g1

0x5144,	// (0x0000671d) list_single_preview_pane_ParamLimits

0x5144,	// (0x0000671d) list_single_preview_pane

0x5188,	// (0x00006761) list_single_preview_pane_g1

0x5190,	// (0x00006769) list_single_preview_pane_t1

0x5156,	// (0x0000672f) list_single_preview_pane_t2

0x0001,

0xfae2,	// (0x000110bb) list_single_preview_pane_t

0x519e,	// (0x00006777) bg_popup_heading_pane_cp2_ParamLimits

0x519e,	// (0x00006777) bg_popup_heading_pane_cp2

0x51b4,	// (0x0000678d) heading_preview_pane_g1

0x51bc,	// (0x00006795) heading_preview_pane_t1_ParamLimits

0x51bc,	// (0x00006795) heading_preview_pane_t1

0xed75,	// (0x0001034e) soft_indicator_pane_t1_ParamLimits

0xf2d7,	// (0x000108b0) scroll_pane_ParamLimits

0x060a,	// (0x00001be3) scroll_sc2_left_pane

0x0613,	// (0x00001bec) scroll_sc2_right_pane

0x0632,	// (0x00001c0b) scroll_bg_pane_g1_ParamLimits

0x0647,	// (0x00001c20) scroll_bg_pane_g2_ParamLimits

0x065f,	// (0x00001c38) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x00010c92) scroll_bg_pane_g_ParamLimits

0x0632,	// (0x00001c0b) scroll_handle_pane_g1_ParamLimits

0x0681,	// (0x00001c5a) scroll_handle_pane_g2_ParamLimits

0x065f,	// (0x00001c38) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x00010c99) scroll_handle_pane_g_ParamLimits

0x165d,	// (0x00002c36) popup_choice_list_window_ParamLimits

0x165d,	// (0x00002c36) popup_choice_list_window

0x211e,	// (0x000036f7) choice_list_pane

0x21e6,	// (0x000037bf) cell_toolbar_pane_t1

0x220e,	// (0x000037e7) toolbar_button_pane_ParamLimits

0x3623,	// (0x00004bfc) ai_gene_pane_1_t2_ParamLimits

0x3623,	// (0x00004bfc) ai_gene_pane_1_t2

0x0001,

0xf8dc,	// (0x00010eb5) ai_gene_pane_1_t_ParamLimits

0xf8dc,	// (0x00010eb5) ai_gene_pane_1_t

0x51d9,	// (0x000067b2) scroll_sc2_left_pane_g1

0x51d9,	// (0x000067b2) scroll_sc2_right_pane_g1

0x15f7,	// (0x00002bd0) bg_popup_sub_pane_cp10

0x51e3,	// (0x000067bc) list_choice_list_pane

0x51fc,	// (0x000067d5) list_single_choice_list_pane_ParamLimits

0x51fc,	// (0x000067d5) list_single_choice_list_pane

0x5214,	// (0x000067ed) list_single_choice_list_pane_g1

0x0142,	// (0x0000171b) list_single_choice_list_pane_t1_ParamLimits

0x0142,	// (0x0000171b) list_single_choice_list_pane_t1

0x521c,	// (0x000067f5) choice_list_pane_g1

0x5224,	// (0x000067fd) choice_list_pane_t1

0xea42,	// (0x0001001b) input_focus_pane_cp11

0x0369,	// (0x00001942) title_pane_stacon_g2_ParamLimits

0x0369,	// (0x00001942) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x00010c78) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x00010c78) title_pane_stacon_g

0x1099,	// (0x00002672) cursor_press_pane

0xb6e4,	// (0x0000ccbd) popup_fep_hwr_window_ParamLimits

0xb6e4,	// (0x0000ccbd) popup_fep_hwr_window

0x17a1,	// (0x00002d7a) popup_fep_vkb_window_ParamLimits

0x17a1,	// (0x00002d7a) popup_fep_vkb_window

0x5232,	// (0x0000680b) cursor_press_pane_g1

0x0002,

0xfb0b,	// (0x000110e4) fep_vkb_side_pane_g_ParamLimits

0x5273,	// (0x0000684c) fep_hwr_candidate_pane_ParamLimits

0x5273,	// (0x0000684c) fep_hwr_candidate_pane

0x529d,	// (0x00006876) fep_hwr_side_pane_ParamLimits

0x529d,	// (0x00006876) fep_hwr_side_pane

0x52bf,	// (0x00006898) fep_hwr_top_pane_ParamLimits

0x52bf,	// (0x00006898) fep_hwr_top_pane

0x52d7,	// (0x000068b0) fep_hwr_write_pane_ParamLimits

0x52d7,	// (0x000068b0) fep_hwr_write_pane

0xfb0b,	// (0x000110e4) fep_vkb_side_pane_g

0x5311,	// (0x000068ea) fep_hwr_top_pane_g1

0x5323,	// (0x000068fc) fep_hwr_top_pane_g2

0x5335,	// (0x0000690e) fep_hwr_top_pane_g3

0x0002,

0xfae7,	// (0x000110c0) fep_hwr_top_pane_g

0x534a,	// (0x00006923) fep_hwr_top_text_pane

0x07d6,	// (0x00001daf) fep_hwr_top_text_pane_g1

0x5426,	// (0x000069ff) fep_hwr_top_text_pane_t1

0x5486,	// (0x00006a5f) fep_hwr_candidate_pane_g1

0x56f7,	// (0x00006cd0) fep_vkb_keypad_pane_g3_ParamLimits

0x56f7,	// (0x00006cd0) fep_vkb_keypad_pane_g3

0x5723,	// (0x00006cfc) fep_vkb_keypad_pane_g4_ParamLimits

0x5723,	// (0x00006cfc) fep_vkb_keypad_pane_g4

0x579a,	// (0x00006d73) fep_vkb_bottom_pane_g2_ParamLimits

0x579a,	// (0x00006d73) fep_vkb_bottom_pane_g2

0x0001,

0xfb12,	// (0x000110eb) fep_vkb_bottom_pane_g_ParamLimits

0xfb12,	// (0x000110eb) fep_vkb_bottom_pane_g

0x51d9,	// (0x000067b2) cell_vkb_side_pane_g2

0x0001,

0xfb1c,	// (0x000110f5) cell_vkb_side_pane_g

0x5825,	// (0x00006dfe) cell_vkb_side_pane_t1

0x5833,	// (0x00006e0c) cell_vkb_side_pane_t1_copy1

0x51d9,	// (0x000067b2) bg_fep_vkb_candidate_pane_g2

0x5977,	// (0x00006f50) cell_vkb_candidate_pane_ParamLimits

0x54ba,	// (0x00006a93) aid_size_cell_vkb_ParamLimits

0x54ba,	// (0x00006a93) aid_size_cell_vkb

0x5977,	// (0x00006f50) cell_vkb_candidate_pane

0x59b1,	// (0x00006f8a) bg_popup_fep_shadow_pane_g1

0xcb9d,	// (0x0000e176) fep_vkb_bottom_pane_ParamLimits

0xcb9d,	// (0x0000e176) fep_vkb_bottom_pane

0x5589,	// (0x00006b62) fep_vkb_candidate_pane_ParamLimits

0x5589,	// (0x00006b62) fep_vkb_candidate_pane

0xcbc9,	// (0x0000e1a2) fep_vkb_keypad_pane_ParamLimits

0xcbc9,	// (0x0000e1a2) fep_vkb_keypad_pane

0xcbf0,	// (0x0000e1c9) fep_vkb_side_pane_ParamLimits

0xcbf0,	// (0x0000e1c9) fep_vkb_side_pane

0xcc2c,	// (0x0000e205) fep_vkb_top_pane_ParamLimits

0xcc2c,	// (0x0000e205) fep_vkb_top_pane

0x5650,	// (0x00006c29) fep_vkb_top_pane_g1_ParamLimits

0x5650,	// (0x00006c29) fep_vkb_top_pane_g1

0x565f,	// (0x00006c38) fep_vkb_top_pane_g2_ParamLimits

0x565f,	// (0x00006c38) fep_vkb_top_pane_g2

0x566e,	// (0x00006c47) fep_vkb_top_pane_g3_ParamLimits

0x566e,	// (0x00006c47) fep_vkb_top_pane_g3

0x0003,

0xfb02,	// (0x000110db) fep_vkb_top_pane_g_ParamLimits

0xfb02,	// (0x000110db) fep_vkb_top_pane_g

0x568c,	// (0x00006c65) fep_vkb_top_text_pane_ParamLimits

0x568c,	// (0x00006c65) fep_vkb_top_text_pane

0xcc68,	// (0x0000e241) fep_vkb_side_pane_g1_ParamLimits

0xcc68,	// (0x0000e241) fep_vkb_side_pane_g1

0x56e6,	// (0x00006cbf) grid_vkb_side_pane_ParamLimits

0x56e6,	// (0x00006cbf) grid_vkb_side_pane

0x59b9,	// (0x00006f92) bg_popup_fep_shadow_pane_g2

0x59c2,	// (0x00006f9b) bg_popup_fep_shadow_pane_g3

0x59ca,	// (0x00006fa3) bg_popup_fep_shadow_pane_g4

0x59d3,	// (0x00006fac) bg_popup_fep_shadow_pane_g5

0x59dd,	// (0x00006fb6) bg_popup_fep_shadow_pane_g6

0x59e5,	// (0x00006fbe) bg_popup_fep_shadow_pane_g7

0xf4d2,	// (0x00010aab) bg_popup_fep_shadow_pane_g8

0x5745,	// (0x00006d1e) grid_vkb_keypad_number_pane_ParamLimits

0x5745,	// (0x00006d1e) grid_vkb_keypad_number_pane

0x5759,	// (0x00006d32) grid_vkb_keypad_pane_ParamLimits

0x5759,	// (0x00006d32) grid_vkb_keypad_pane

0x577f,	// (0x00006d58) fep_vkb_bottom_pane_g1_ParamLimits

0x577f,	// (0x00006d58) fep_vkb_bottom_pane_g1

0x57a8,	// (0x00006d81) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x57a8,	// (0x00006d81) grid_vkb_keypad_bottom_left_pane

0x57bd,	// (0x00006d96) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x57bd,	// (0x00006d96) grid_vkb_keypad_bottom_right_pane

0x57d2,	// (0x00006dab) fep_vkb_top_text_pane_g1

0xccaf,	// (0x0000e288) fep_vkb_top_text_pane_t1

0xccc1,	// (0x0000e29a) cell_vkb_side_pane_ParamLimits

0xccc1,	// (0x0000e29a) cell_vkb_side_pane

0x51d9,	// (0x000067b2) cell_vkb_side_pane_g1

0x5841,	// (0x00006e1a) cell_vkb_keypad_pane_ParamLimits

0x5841,	// (0x00006e1a) cell_vkb_keypad_pane

0x58ce,	// (0x00006ea7) cell_vkb_keypad_pane_g1

0x0008,

0xfb2f,	// (0x00011108) bg_popup_fep_shadow_pane_g

0x51d9,	// (0x000067b2) cell_hwr_side_pane_g1

0x51d9,	// (0x000067b2) cell_hwr_side_pane_g2

0x58d8,	// (0x00006eb1) cell_vkb_keypad_pane_t1

0xccd7,	// (0x0000e2b0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xccd7,	// (0x0000e2b0) cell_vkb_keypad_bottom_left_pane

0xccec,	// (0x0000e2c5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xccec,	// (0x0000e2c5) cell_vkb_keypad_bottom_right_pane

0x51d9,	// (0x000067b2) cell_vkb_keypad_bottom_left_pane_g1

0x51d9,	// (0x000067b2) cell_vkb_keypad_bottom_right_pane_g1

0x593c,	// (0x00006f15) cell_vkb_keypad_number_pane_ParamLimits

0x593c,	// (0x00006f15) cell_vkb_keypad_number_pane

0x595b,	// (0x00006f34) cell_vkb_keypad_number_pane_g1

0x5965,	// (0x00006f3e) cell_vkb_keypad_number_pane_g2

0x596e,	// (0x00006f47) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb21,	// (0x000110fa) cell_vkb_keypad_number_pane_g

0x58d8,	// (0x00006eb1) cell_vkb_keypad_number_pane_t1

0x5998,	// (0x00006f71) fep_vkb_candidate_pane_g1

0x0001,

0xfb1c,	// (0x000110f5) cell_hwr_side_pane_g

0x59f7,	// (0x00006fd0) cell_hwr_side_pane_t1

0x5a05,	// (0x00006fde) cell_hwr_side_pane_t1_copy1

0x567e,	// (0x00006c57) cell_hwr_candidate_pane_g1

0x5a55,	// (0x0000702e) cell_hwr_candidate_pane_t1

0x51d9,	// (0x000067b2) cell_vkb_candidate_pane_g2

0x5aa9,	// (0x00007082) cell_vkb_candidate_pane_t1

0x523a,	// (0x00006813) bg_popup_fep_shadow_pane_ParamLimits

0x523a,	// (0x00006813) bg_popup_fep_shadow_pane

0x52f1,	// (0x000068ca) bg_fep_hwr_top_pane_g4

0x535f,	// (0x00006938) bg_hwr_side_pane_g1_ParamLimits

0x535f,	// (0x00006938) bg_hwr_side_pane_g1

0xcb56,	// (0x0000e12f) cell_hwr_side_pane_ParamLimits

0xcb56,	// (0x0000e12f) cell_hwr_side_pane

0x53d1,	// (0x000069aa) fep_hwr_write_pane_g1_ParamLimits

0x53d1,	// (0x000069aa) fep_hwr_write_pane_g1

0x53de,	// (0x000069b7) fep_hwr_write_pane_g2_ParamLimits

0x53de,	// (0x000069b7) fep_hwr_write_pane_g2

0x53eb,	// (0x000069c4) fep_hwr_write_pane_g3_ParamLimits

0x53eb,	// (0x000069c4) fep_hwr_write_pane_g3

0xcb76,	// (0x0000e14f) fep_hwr_write_pane_g4_ParamLimits

0xcb76,	// (0x0000e14f) fep_hwr_write_pane_g4

0x0005,

0xfaee,	// (0x000110c7) fep_hwr_write_pane_g_ParamLimits

0xfaee,	// (0x000110c7) fep_hwr_write_pane_g

0x52f1,	// (0x000068ca) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x52f1,	// (0x000068ca) bg_fep_hwr_candidate_pane_g2

0x5434,	// (0x00006a0d) cell_hwr_candidate_pane_ParamLimits

0x5434,	// (0x00006a0d) cell_hwr_candidate_pane

0x5486,	// (0x00006a5f) fep_hwr_candidate_pane_g1_ParamLimits

0x54e8,	// (0x00006ac1) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x54e8,	// (0x00006ac1) bg_popup_fep_shadow_pane_cp2

0x567e,	// (0x00006c57) fep_vkb_top_pane_g4_ParamLimits

0x567e,	// (0x00006c57) fep_vkb_top_pane_g4

0x56c4,	// (0x00006c9d) fep_vkb_side_pane_g2_ParamLimits

0x56c4,	// (0x00006c9d) fep_vkb_side_pane_g2

0xad83,	// (0x0000c35c) list_setting_pane_t4_ParamLimits

0xad83,	// (0x0000c35c) list_setting_pane_t4

0xadff,	// (0x0000c3d8) list_setting_number_pane_t5_ParamLimits

0xadff,	// (0x0000c3d8) list_setting_number_pane_t5

0x082c,	// (0x00001e05) list_double_heading_pane_cp2_ParamLimits

0x082c,	// (0x00001e05) list_double_heading_pane_cp2

0x5ab7,	// (0x00007090) list_double_heading_pane_g1_cp2_ParamLimits

0x5ab7,	// (0x00007090) list_double_heading_pane_g1_cp2

0x5ac3,	// (0x0000709c) list_double_heading_pane_g2_cp2_ParamLimits

0x5ac3,	// (0x0000709c) list_double_heading_pane_g2_cp2

0x5ad7,	// (0x000070b0) list_double_heading_pane_t1_cp2_ParamLimits

0x5ad7,	// (0x000070b0) list_double_heading_pane_t1_cp2

0x5aed,	// (0x000070c6) list_double_heading_pane_t2_cp2_ParamLimits

0x5aed,	// (0x000070c6) list_double_heading_pane_t2_cp2

0xea3a,	// (0x00010013) aid_value_unit2

0xec19,	// (0x000101f2) popup_preview_fixed_window

0xee55,	// (0x0001042e) bg_popup_preview_window_pane_cp02

0x5aff,	// (0x000070d8) list_preview_fixed_pane

0x5b45,	// (0x0000711e) list_empty_pane_fp_ParamLimits

0x5b45,	// (0x0000711e) list_empty_pane_fp

0x5b45,	// (0x0000711e) list_single_cale_day_pane_fp_ParamLimits

0x5b45,	// (0x0000711e) list_single_cale_day_pane_fp

0x5b45,	// (0x0000711e) list_single_graphic_heading_pane_fp_ParamLimits

0x5b45,	// (0x0000711e) list_single_graphic_heading_pane_fp

0x5b45,	// (0x0000711e) list_single_graphic_pane_fp_ParamLimits

0x5b45,	// (0x0000711e) list_single_graphic_pane_fp

0x5b45,	// (0x0000711e) list_single_heading_pane_fp_ParamLimits

0x5b45,	// (0x0000711e) list_single_heading_pane_fp

0x5b45,	// (0x0000711e) list_single_pane_fp_ParamLimits

0x5b45,	// (0x0000711e) list_single_pane_fp

0x5b5e,	// (0x00007137) list_single_pane_fp_g1_ParamLimits

0x5b5e,	// (0x00007137) list_single_pane_fp_g1

0x5ab7,	// (0x00007090) list_single_pane_fp_g2_ParamLimits

0x5ab7,	// (0x00007090) list_single_pane_fp_g2

0x5ac3,	// (0x0000709c) list_single_pane_fp_g3_ParamLimits

0x5ac3,	// (0x0000709c) list_single_pane_fp_g3

0x5b6a,	// (0x00007143) list_single_pane_fp_g4_ParamLimits

0x5b6a,	// (0x00007143) list_single_pane_fp_g4

0x0003,

0xfb50,	// (0x00011129) list_single_pane_fp_g_ParamLimits

0xfb50,	// (0x00011129) list_single_pane_fp_g

0x5b76,	// (0x0000714f) list_single_pane_fp_t1_ParamLimits

0x5b76,	// (0x0000714f) list_single_pane_fp_t1

0x5b8d,	// (0x00007166) list_single_graphic_pane_fp_g1_ParamLimits

0x5b8d,	// (0x00007166) list_single_graphic_pane_fp_g1

0x5b5e,	// (0x00007137) list_single_graphic_pane_fp_g2_ParamLimits

0x5b5e,	// (0x00007137) list_single_graphic_pane_fp_g2

0x5ab7,	// (0x00007090) list_single_graphic_pane_fp_g3_ParamLimits

0x5ab7,	// (0x00007090) list_single_graphic_pane_fp_g3

0x5ac3,	// (0x0000709c) list_single_graphic_pane_fp_g4_ParamLimits

0x5ac3,	// (0x0000709c) list_single_graphic_pane_fp_g4

0x5b6a,	// (0x00007143) list_single_graphic_pane_fp_g5_ParamLimits

0x5b6a,	// (0x00007143) list_single_graphic_pane_fp_g5

0x0004,

0xfb59,	// (0x00011132) list_single_graphic_pane_fp_g_ParamLimits

0xfb59,	// (0x00011132) list_single_graphic_pane_fp_g

0x5b99,	// (0x00007172) list_single_graphic_pane_fp_t1_ParamLimits

0x5b99,	// (0x00007172) list_single_graphic_pane_fp_t1

0x5b8d,	// (0x00007166) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5b8d,	// (0x00007166) list_single_graphic_heading_pane_fp_g1

0x5b5e,	// (0x00007137) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5b5e,	// (0x00007137) list_single_graphic_heading_pane_fp_g2

0x5ab7,	// (0x00007090) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5ab7,	// (0x00007090) list_single_graphic_heading_pane_fp_g3

0x5ac3,	// (0x0000709c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5ac3,	// (0x0000709c) list_single_graphic_heading_pane_fp_g4

0x5b6a,	// (0x00007143) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5b6a,	// (0x00007143) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb59,	// (0x00011132) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb59,	// (0x00011132) list_single_graphic_heading_pane_fp_g

0x5baf,	// (0x00007188) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5baf,	// (0x00007188) list_single_graphic_heading_pane_fp_t1

0x5bc5,	// (0x0000719e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5bc5,	// (0x0000719e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb64,	// (0x0001113d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb64,	// (0x0001113d) list_single_graphic_heading_pane_fp_t

0x5bd7,	// (0x000071b0) list_single_cale_day_pane_fp_g1_ParamLimits

0x5bd7,	// (0x000071b0) list_single_cale_day_pane_fp_g1

0x5c0f,	// (0x000071e8) list_single_cale_day_pane_fp_g2_ParamLimits

0x5c0f,	// (0x000071e8) list_single_cale_day_pane_fp_g2

0x5c1b,	// (0x000071f4) list_single_cale_day_pane_fp_g3_ParamLimits

0x5c1b,	// (0x000071f4) list_single_cale_day_pane_fp_g3

0x5c43,	// (0x0000721c) list_single_cale_day_pane_fp_g4_ParamLimits

0x5c43,	// (0x0000721c) list_single_cale_day_pane_fp_g4

0x5c67,	// (0x00007240) list_single_cale_day_pane_fp_g5_ParamLimits

0x5c67,	// (0x00007240) list_single_cale_day_pane_fp_g5

0x0004,

0xfb69,	// (0x00011142) list_single_cale_day_pane_fp_g_ParamLimits

0xfb69,	// (0x00011142) list_single_cale_day_pane_fp_g

0x5c8b,	// (0x00007264) list_single_cale_day_pane_fp_t1_ParamLimits

0x5c8b,	// (0x00007264) list_single_cale_day_pane_fp_t1

0x5cb1,	// (0x0000728a) list_single_cale_day_pane_fp_t2_ParamLimits

0x5cb1,	// (0x0000728a) list_single_cale_day_pane_fp_t2

0x5cca,	// (0x000072a3) list_single_cale_day_pane_fp_t3_ParamLimits

0x5cca,	// (0x000072a3) list_single_cale_day_pane_fp_t3

0x0002,

0xfb74,	// (0x0001114d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb74,	// (0x0001114d) list_single_cale_day_pane_fp_t

0x5b5e,	// (0x00007137) list_empty_pane_fp_g1_ParamLimits

0x5b5e,	// (0x00007137) list_empty_pane_fp_g1

0x5ce3,	// (0x000072bc) list_empty_pane_fp_t1

0x5cf1,	// (0x000072ca) list_empty_pane_fp_t2

0x0001,

0xfb7b,	// (0x00011154) list_empty_pane_fp_t

0x5b5e,	// (0x00007137) list_single_heading_pane_fp_g1_ParamLimits

0x5b5e,	// (0x00007137) list_single_heading_pane_fp_g1

0x5ab7,	// (0x00007090) list_single_heading_pane_fp_g2_ParamLimits

0x5ab7,	// (0x00007090) list_single_heading_pane_fp_g2

0x5ac3,	// (0x0000709c) list_single_heading_pane_fp_g3_ParamLimits

0x5ac3,	// (0x0000709c) list_single_heading_pane_fp_g3

0x0002,

0xfb80,	// (0x00011159) list_single_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x00011159) list_single_heading_pane_fp_g

0x5cff,	// (0x000072d8) list_single_heading_pane_fp_t1_ParamLimits

0x5cff,	// (0x000072d8) list_single_heading_pane_fp_t1

0x5d11,	// (0x000072ea) list_single_heading_pane_fp_t2_ParamLimits

0x5d11,	// (0x000072ea) list_single_heading_pane_fp_t2

0x0001,

0xfb87,	// (0x00011160) list_single_heading_pane_fp_t_ParamLimits

0xfb87,	// (0x00011160) list_single_heading_pane_fp_t

0x01b0,	// (0x00001789) aid_size_cell_fast

0xee38,	// (0x00010411) soft_indicator_pane_cp1_t1

0x01ed,	// (0x000017c6) cell_app_pane_cp2_ParamLimits

0x01ed,	// (0x000017c6) cell_app_pane_cp2

0x525c,	// (0x00006835) fep_hwr_candidate_drop_down_list_pane

0x54a0,	// (0x00006a79) fep_hwr_candidate_pane_g3_ParamLimits

0x54a0,	// (0x00006a79) fep_hwr_candidate_pane_g3

0x54ad,	// (0x00006a86) fep_hwr_candidate_pane_g4_ParamLimits

0x54ad,	// (0x00006a86) fep_hwr_candidate_pane_g4

0x0002,

0xfafb,	// (0x000110d4) fep_hwr_candidate_pane_g_ParamLimits

0xfafb,	// (0x000110d4) fep_hwr_candidate_pane_g

0x5578,	// (0x00006b51) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5578,	// (0x00006b51) fep_vkb_candidate_drop_down_list_pane

0x59a0,	// (0x00006f79) fep_vkb_candidate_pane_g3

0x59a8,	// (0x00006f81) fep_vkb_candidate_pane_g4

0x0002,

0xfb28,	// (0x00011101) fep_vkb_candidate_pane_g

0x567e,	// (0x00006c57) cell_hwr_candidate_pane_g1_ParamLimits

0x5a13,	// (0x00006fec) cell_hwr_candidate_pane_g3_ParamLimits

0x5a13,	// (0x00006fec) cell_hwr_candidate_pane_g3

0x5a34,	// (0x0000700d) cell_hwr_candidate_pane_g4_ParamLimits

0x5a34,	// (0x0000700d) cell_hwr_candidate_pane_g4

0x0002,

0xfb42,	// (0x0001111b) cell_hwr_candidate_pane_g_ParamLimits

0xfb42,	// (0x0001111b) cell_hwr_candidate_pane_g

0x5a73,	// (0x0000704c) cell_vkb_candidate_pane_g3_ParamLimits

0x5a73,	// (0x0000704c) cell_vkb_candidate_pane_g3

0x5a8e,	// (0x00007067) cell_vkb_candidate_pane_g4_ParamLimits

0x5a8e,	// (0x00007067) cell_vkb_candidate_pane_g4

0x5d27,	// (0x00007300) cell_app_pane_cp2_g1_ParamLimits

0x5d27,	// (0x00007300) cell_app_pane_cp2_g1

0x5d45,	// (0x0000731e) cell_app_pane_cp2_g2_ParamLimits

0x5d45,	// (0x0000731e) cell_app_pane_cp2_g2

0x0001,

0xfb8c,	// (0x00011165) cell_app_pane_cp2_g_ParamLimits

0xfb8c,	// (0x00011165) cell_app_pane_cp2_g

0x5d51,	// (0x0000732a) cell_app_pane_cp2_t1_ParamLimits

0x5d51,	// (0x0000732a) cell_app_pane_cp2_t1

0xf3f7,	// (0x000109d0) grid_highlight_pane_cp1_ParamLimits

0xf3f7,	// (0x000109d0) grid_highlight_pane_cp1

0x5d63,	// (0x0000733c) cell_hwr_candidate_pane_cp1_ParamLimits

0x5d63,	// (0x0000733c) cell_hwr_candidate_pane_cp1

0x567e,	// (0x00006c57) fep_hwr_candidate_drop_down_list_pane_g1

0x5d87,	// (0x00007360) fep_hwr_candidate_drop_down_list_pane_g2

0x5d94,	// (0x0000736d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb91,	// (0x0001116a) fep_hwr_candidate_drop_down_list_pane_g

0x5da1,	// (0x0000737a) fep_hwr_candidate_drop_down_list_scroll_pane

0x5daa,	// (0x00007383) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5daa,	// (0x00007383) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5db7,	// (0x00007390) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5db7,	// (0x00007390) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5dc4,	// (0x0000739d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5dc4,	// (0x0000739d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5a73,	// (0x0000704c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5a73,	// (0x0000704c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5a8e,	// (0x00007067) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5a8e,	// (0x00007067) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5dd1,	// (0x000073aa) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5dd1,	// (0x000073aa) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5dec,	// (0x000073c5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5dec,	// (0x000073c5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5e07,	// (0x000073e0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5e07,	// (0x000073e0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb98,	// (0x00011171) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb98,	// (0x00011171) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5e22,	// (0x000073fb) cell_vkb_candidate_pane_cp1_ParamLimits

0x5e22,	// (0x000073fb) cell_vkb_candidate_pane_cp1

0x567e,	// (0x00006c57) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x567e,	// (0x00006c57) fep_vkb_candidate_drop_down_list_pane_g1

0x5d87,	// (0x00007360) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5d87,	// (0x00007360) fep_vkb_candidate_drop_down_list_pane_g2

0x5d94,	// (0x0000736d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5d94,	// (0x0000736d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb91,	// (0x0001116a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb91,	// (0x0001116a) fep_vkb_candidate_drop_down_list_pane_g

0x5e48,	// (0x00007421) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5e48,	// (0x00007421) fep_vkb_candidate_drop_down_list_scroll_pane

0x5e55,	// (0x0000742e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5e55,	// (0x0000742e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5e62,	// (0x0000743b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5e62,	// (0x0000743b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5e6e,	// (0x00007447) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5e6e,	// (0x00007447) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5a13,	// (0x00006fec) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5a13,	// (0x00006fec) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5a34,	// (0x0000700d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5a34,	// (0x0000700d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5e7a,	// (0x00007453) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5e7a,	// (0x00007453) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5e9b,	// (0x00007474) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5e9b,	// (0x00007474) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5ebc,	// (0x00007495) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5ebc,	// (0x00007495) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba9,	// (0x00011182) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba9,	// (0x00011182) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa688,	// (0x0000bc61) title_pane_g1_ParamLimits

0xa69b,	// (0x0000bc74) title_pane_g2_ParamLimits

0xf529,	// (0x00010b02) title_pane_g_ParamLimits

0x07c6,	// (0x00001d9f) aid_call2_pane

0x07ce,	// (0x00001da7) aid_call_pane

0x07d6,	// (0x00001daf) popup_clock_analogue_window_g1

0x07d6,	// (0x00001daf) popup_clock_analogue_window_g2

0x07de,	// (0x00001db7) popup_clock_analogue_window_g3

0x07e7,	// (0x00001dc0) popup_clock_analogue_window_g4

0xea4c,	// (0x00010025) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x00010ca7) popup_clock_analogue_window_g

0x07ef,	// (0x00001dc8) popup_clock_analogue_window_t1

0x087f,	// (0x00001e58) clock_digital_number_pane_ParamLimits

0x087f,	// (0x00001e58) clock_digital_number_pane

0x088b,	// (0x00001e64) clock_digital_number_pane_cp02_ParamLimits

0x088b,	// (0x00001e64) clock_digital_number_pane_cp02

0x0897,	// (0x00001e70) clock_digital_number_pane_cp03_ParamLimits

0x0897,	// (0x00001e70) clock_digital_number_pane_cp03

0x08a3,	// (0x00001e7c) clock_digital_number_pane_cp04_ParamLimits

0x08a3,	// (0x00001e7c) clock_digital_number_pane_cp04

0x08af,	// (0x00001e88) clock_digital_separator_pane_ParamLimits

0x08af,	// (0x00001e88) clock_digital_separator_pane

0x08bb,	// (0x00001e94) popup_clock_digital_window_t1_ParamLimits

0x08bb,	// (0x00001e94) popup_clock_digital_window_t1

0xea4c,	// (0x00010025) clock_digital_number_pane_g1

0xea4c,	// (0x00010025) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x00010cb2) clock_digital_number_pane_g

0xea4c,	// (0x00010025) clock_digital_separator_pane_g1

0xea4c,	// (0x00010025) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x00010cb2) clock_digital_separator_pane_g

0xbd53,	// (0x0000d32c) aid_fill_nsta_ParamLimits

0xbe8b,	// (0x0000d464) indicator_nsta_pane_ParamLimits

0x1f4b,	// (0x00003524) popup_clock_analogue_window

0x1f4b,	// (0x00003524) popup_clock_digital_window

0xc94f,	// (0x0000df28) grid_indicator_nsta_pane_ParamLimits

0x4b8a,	// (0x00006163) clock_nsta_pane_t2

0x0001,

0xfa7b,	// (0x00011054) clock_nsta_pane_t

0x05af,	// (0x00001b88) aid_size_max_handle

0xb0e6,	// (0x0000c6bf) aid_size_min_handle

0x1099,	// (0x00002672) editor_scroll_pane

0x5ed7,	// (0x000074b0) ex_editor_pane

0x011d,	// (0x000016f6) scroll_pane_cp13

0xf303,	// (0x000108dc) scroll_pane_cp14

0x0824,	// (0x00001dfd) scroll_pane_cp36

0xb173,	// (0x0000c74c) list_single_graphic_hl_pane_cp2_ParamLimits

0xb173,	// (0x0000c74c) list_single_graphic_hl_pane_cp2

0xc7c7,	// (0x0000dda0) list_single_graphic_hl_pane_ParamLimits

0xc7c7,	// (0x0000dda0) list_single_graphic_hl_pane

0x5edf,	// (0x000074b8) aid_size_min_hl_cp1

0x5ee8,	// (0x000074c1) list_highlight_pane_cp34_ParamLimits

0x5ee8,	// (0x000074c1) list_highlight_pane_cp34

0x5ef9,	// (0x000074d2) list_single_graphic_hl_pane_g1_ParamLimits

0x5ef9,	// (0x000074d2) list_single_graphic_hl_pane_g1

0xf32c,	// (0x00010905) list_single_graphic_hl_pane_g2_ParamLimits

0xf32c,	// (0x00010905) list_single_graphic_hl_pane_g2

0xf32c,	// (0x00010905) list_single_graphic_hl_pane_g3_ParamLimits

0xf32c,	// (0x00010905) list_single_graphic_hl_pane_g3

0x6909,	// (0x00007ee2) list_single_graphic_hl_pane_g4_ParamLimits

0x6909,	// (0x00007ee2) list_single_graphic_hl_pane_g4

0xcd07,	// (0x0000e2e0) list_single_graphic_hl_pane_g5_ParamLimits

0xcd07,	// (0x0000e2e0) list_single_graphic_hl_pane_g5

0x0004,

0xfbba,	// (0x00011193) list_single_graphic_hl_pane_g_ParamLimits

0xfbba,	// (0x00011193) list_single_graphic_hl_pane_g

0xcd1b,	// (0x0000e2f4) list_single_graphic_hl_pane_t1_ParamLimits

0xcd1b,	// (0x0000e2f4) list_single_graphic_hl_pane_t1

0x5f3c,	// (0x00007515) aid_size_min_hl_cp2

0x5f45,	// (0x0000751e) list_highlight_pane_cp34_cp2_ParamLimits

0x5f45,	// (0x0000751e) list_highlight_pane_cp34_cp2

0x5ef9,	// (0x000074d2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5ef9,	// (0x000074d2) list_single_graphic_hl_pane_g1_cp2

0x5f52,	// (0x0000752b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5f52,	// (0x0000752b) list_single_graphic_hl_pane_g2_cp2

0x5f5e,	// (0x00007537) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5f5e,	// (0x00007537) list_single_graphic_hl_pane_g3_cp2

0x20b2,	// (0x0000368b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x20b2,	// (0x0000368b) list_single_graphic_hl_pane_g4_cp2

0x5f6c,	// (0x00007545) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5f6c,	// (0x00007545) list_single_graphic_hl_pane_g5_cp2

0xb4c6,	// (0x0000ca9f) control_pane_g4_ParamLimits

0xb4c6,	// (0x0000ca9f) control_pane_g4

0x15f7,	// (0x00002bd0) bg_popup_sub_pane_cp10_ParamLimits

0x51e3,	// (0x000067bc) list_choice_list_pane_ParamLimits

0x51f2,	// (0x000067cb) scroll_pane_cp23

0xee55,	// (0x0001042e) bg_popup_preview_window_pane_cp02_ParamLimits

0x5aff,	// (0x000070d8) list_preview_fixed_pane_ParamLimits

0x5b15,	// (0x000070ee) list_preview_fixed_pane_cp_ParamLimits

0x5b15,	// (0x000070ee) list_preview_fixed_pane_cp

0x5b21,	// (0x000070fa) popup_preview_fixed_window_g1_ParamLimits

0x5b21,	// (0x000070fa) popup_preview_fixed_window_g1

0x5b2d,	// (0x00007106) popup_preview_fixed_window_g2_ParamLimits

0x5b2d,	// (0x00007106) popup_preview_fixed_window_g2

0x0002,

0xfb49,	// (0x00011122) popup_preview_fixed_window_g_ParamLimits

0xfb49,	// (0x00011122) popup_preview_fixed_window_g

0x044e,	// (0x00001a27) aid_navi_side_left_pane_ParamLimits

0x0463,	// (0x00001a3c) aid_navi_side_right_pane_ParamLimits

0x047b,	// (0x00001a54) navi_icon_pane_stacon_ParamLimits

0x048f,	// (0x00001a68) navi_navi_pane_stacon_ParamLimits

0x047b,	// (0x00001a54) navi_text_pane_stacon_ParamLimits

0xea42,	// (0x0001001b) main_text_info_pane

0x5f96,	// (0x0000756f) listscroll_text_info_pane

0x5f9e,	// (0x00007577) list_text_info_pane_ParamLimits

0x5f9e,	// (0x00007577) list_text_info_pane

0x5fad,	// (0x00007586) scroll_pane_cp24_ParamLimits

0x5fad,	// (0x00007586) scroll_pane_cp24

0xcd31,	// (0x0000e30a) list_text_info_pane_t1_ParamLimits

0xcd31,	// (0x0000e30a) list_text_info_pane_t1

0xb648,	// (0x0000cc21) popup_fast_swap2_window_ParamLimits

0xb648,	// (0x0000cc21) popup_fast_swap2_window

0x5ff0,	// (0x000075c9) aid_size_cell_fast2

0xea42,	// (0x0001001b) bg_popup_window_pane_cp17

0x2834,	// (0x00003e0d) heading_pane_cp2

0x283c,	// (0x00003e15) listscroll_fast2_pane

0x5ffa,	// (0x000075d3) grid_fast2_pane

0x6004,	// (0x000075dd) listscroll_fast2_pane_g1

0x600e,	// (0x000075e7) listscroll_fast2_pane_g2

0x0001,

0xfbc5,	// (0x0001119e) listscroll_fast2_pane_g

0x011d,	// (0x000016f6) scroll_pane_cp26

0x6018,	// (0x000075f1) cell_fast2_pane_ParamLimits

0x6018,	// (0x000075f1) cell_fast2_pane

0x602f,	// (0x00007608) cell_fast2_pane_g1

0x6038,	// (0x00007611) cell_fast2_pane_g2

0x6041,	// (0x0000761a) cell_fast2_pane_g3

0x0002,

0xfbca,	// (0x000111a3) cell_fast2_pane_g

0xf0ca,	// (0x000106a3) grid_highlight_pane_cp9

0xf0df,	// (0x000106b8) main_eswt_pane_ParamLimits

0xf0df,	// (0x000106b8) main_eswt_pane

0x5fc2,	// (0x0000759b) list_single_text_info_pane

0x6049,	// (0x00007622) eswt_ctrl_button_pane

0x6049,	// (0x00007622) eswt_ctrl_canvas_pane

0x6051,	// (0x0000762a) eswt_ctrl_combo_pane

0x6049,	// (0x00007622) eswt_ctrl_default_pane

0x6049,	// (0x00007622) eswt_ctrl_label_pane

0x6059,	// (0x00007632) eswt_ctrl_wait_pane

0x6061,	// (0x0000763a) eswt_shell_pane

0xea42,	// (0x0001001b) listscroll_eswt_app_pane

0x6081,	// (0x0000765a) popup_eswt_tasktip_window_ParamLimits

0x6081,	// (0x0000765a) popup_eswt_tasktip_window

0x23b5,	// (0x0000398e) bg_popup_window_pane_cp18

0x6092,	// (0x0000766b) eswt_control_pane_g1_ParamLimits

0x6092,	// (0x0000766b) eswt_control_pane_g1

0x609f,	// (0x00007678) eswt_control_pane_g2_ParamLimits

0x609f,	// (0x00007678) eswt_control_pane_g2

0x60ac,	// (0x00007685) eswt_control_pane_g3_ParamLimits

0x60ac,	// (0x00007685) eswt_control_pane_g3

0x60b9,	// (0x00007692) eswt_control_pane_g4_ParamLimits

0x60b9,	// (0x00007692) eswt_control_pane_g4

0x0003,

0xfbd1,	// (0x000111aa) eswt_control_pane_g_ParamLimits

0xfbd1,	// (0x000111aa) eswt_control_pane_g

0xf3f7,	// (0x000109d0) bg_button_pane_ParamLimits

0xf3f7,	// (0x000109d0) bg_button_pane

0xf0df,	// (0x000106b8) common_borders_pane_copy2_ParamLimits

0xf0df,	// (0x000106b8) common_borders_pane_copy2

0x60c6,	// (0x0000769f) control_button_pane_g1_ParamLimits

0x60c6,	// (0x0000769f) control_button_pane_g1

0x60d2,	// (0x000076ab) control_button_pane_g2_ParamLimits

0x60d2,	// (0x000076ab) control_button_pane_g2

0x60de,	// (0x000076b7) control_button_pane_g3_ParamLimits

0x60de,	// (0x000076b7) control_button_pane_g3

0x0002,

0xfbda,	// (0x000111b3) control_button_pane_g_ParamLimits

0xfbda,	// (0x000111b3) control_button_pane_g

0x60f2,	// (0x000076cb) control_button_pane_t1

0x6100,	// (0x000076d9) control_button_pane_t2

0x0001,

0xfbe1,	// (0x000111ba) control_button_pane_t

0x221a,	// (0x000037f3) bg_button_pane_g1

0x2222,	// (0x000037fb) bg_button_pane_g2

0x222a,	// (0x00003803) bg_button_pane_g3

0x2232,	// (0x0000380b) bg_button_pane_g4

0x223a,	// (0x00003813) bg_button_pane_g5

0x2242,	// (0x0000381b) bg_button_pane_g6

0x224a,	// (0x00003823) bg_button_pane_g7

0x2252,	// (0x0000382b) bg_button_pane_g8

0x225a,	// (0x00003833) bg_button_pane_g9

0x0008,

0xf830,	// (0x00010e09) bg_button_pane_g

0x519e,	// (0x00006777) common_borders_pane_ParamLimits

0x519e,	// (0x00006777) common_borders_pane

0x6092,	// (0x0000766b) eswt_control_pane_g1_copy1_ParamLimits

0x6092,	// (0x0000766b) eswt_control_pane_g1_copy1

0x609f,	// (0x00007678) eswt_control_pane_g2_copy1_ParamLimits

0x609f,	// (0x00007678) eswt_control_pane_g2_copy1

0x60ac,	// (0x00007685) eswt_control_pane_g3_copy1_ParamLimits

0x60ac,	// (0x00007685) eswt_control_pane_g3_copy1

0x60b9,	// (0x00007692) eswt_control_pane_g4_copy1_ParamLimits

0x60b9,	// (0x00007692) eswt_control_pane_g4_copy1

0x51d9,	// (0x000067b2) bg_eswt_ctrl_canvas_pane_g1

0x519e,	// (0x00006777) common_borders_pane_cp2_ParamLimits

0x519e,	// (0x00006777) common_borders_pane_cp2

0x519e,	// (0x00006777) common_borders_pane_cp3_ParamLimits

0x519e,	// (0x00006777) common_borders_pane_cp3

0x610e,	// (0x000076e7) separator_horizontal_pane

0x6116,	// (0x000076ef) separator_vertical_pane

0x6092,	// (0x0000766b) eswt_control_pane_g1_copy2_ParamLimits

0x6092,	// (0x0000766b) eswt_control_pane_g1_copy2

0x609f,	// (0x00007678) eswt_control_pane_g2_copy2_ParamLimits

0x609f,	// (0x00007678) eswt_control_pane_g2_copy2

0x60ac,	// (0x00007685) eswt_control_pane_g3_copy2_ParamLimits

0x60ac,	// (0x00007685) eswt_control_pane_g3_copy2

0x60b9,	// (0x00007692) eswt_control_pane_g4_copy2_ParamLimits

0x60b9,	// (0x00007692) eswt_control_pane_g4_copy2

0xea42,	// (0x0001001b) common_borders_pane_cp4

0x611f,	// (0x000076f8) separator_horizontal_pane_g1

0x6128,	// (0x00007701) separator_horizontal_pane_g2

0x6131,	// (0x0000770a) separator_horizontal_pane_g3

0x0002,

0xfbe6,	// (0x000111bf) separator_horizontal_pane_g

0x6092,	// (0x0000766b) eswt_control_pane_g1_copy3_ParamLimits

0x6092,	// (0x0000766b) eswt_control_pane_g1_copy3

0x609f,	// (0x00007678) eswt_control_pane_g2_copy3_ParamLimits

0x609f,	// (0x00007678) eswt_control_pane_g2_copy3

0x60ac,	// (0x00007685) eswt_control_pane_g3_copy3_ParamLimits

0x60ac,	// (0x00007685) eswt_control_pane_g3_copy3

0x60b9,	// (0x00007692) eswt_control_pane_g4_copy3_ParamLimits

0x60b9,	// (0x00007692) eswt_control_pane_g4_copy3

0xea42,	// (0x0001001b) common_borders_pane_cp5

0x613a,	// (0x00007713) separator_vertical_pane_g1

0x6143,	// (0x0000771c) separator_vertical_pane_g2

0x614c,	// (0x00007725) separator_vertical_pane_g3

0x0002,

0xfbed,	// (0x000111c6) separator_vertical_pane_g

0x6092,	// (0x0000766b) eswt_control_pane_g1_copy4_ParamLimits

0x6092,	// (0x0000766b) eswt_control_pane_g1_copy4

0x609f,	// (0x00007678) eswt_control_pane_g2_copy4_ParamLimits

0x609f,	// (0x00007678) eswt_control_pane_g2_copy4

0x60ac,	// (0x00007685) eswt_control_pane_g3_copy4_ParamLimits

0x60ac,	// (0x00007685) eswt_control_pane_g3_copy4

0x60b9,	// (0x00007692) eswt_control_pane_g4_copy4_ParamLimits

0x60b9,	// (0x00007692) eswt_control_pane_g4_copy4

0xcd53,	// (0x0000e32c) eswt_ctrl_combo_button_pane

0xcd5b,	// (0x0000e334) eswt_ctrl_input_pane

0xcd63,	// (0x0000e33c) popup_choice_list_window_cp70

0xcd6b,	// (0x0000e344) eswt_ctrl_input_pane_t1

0xea42,	// (0x0001001b) input_focus_pane_cp70

0x519e,	// (0x00006777) bg_button_pane_cp70_ParamLimits

0x519e,	// (0x00006777) bg_button_pane_cp70

0xcd79,	// (0x0000e352) eswt_ctrl_combo_button_pane_g1

0x6183,	// (0x0000775c) wait_bar_pane_cp70

0x23b5,	// (0x0000398e) bg_popup_window_pane_cp70_ParamLimits

0x23b5,	// (0x0000398e) bg_popup_window_pane_cp70

0x618b,	// (0x00007764) popup_eswt_tasktip_window_t1

0x61a1,	// (0x0000777a) wait_bar_pane_cp71_ParamLimits

0x61a1,	// (0x0000777a) wait_bar_pane_cp71

0x61ad,	// (0x00007786) grid_eswt_app_pane

0x0613,	// (0x00001bec) scroll_pane_cp70

0xcd81,	// (0x0000e35a) cell_eswt_app_pane_ParamLimits

0xcd81,	// (0x0000e35a) cell_eswt_app_pane

0xcdb3,	// (0x0000e38c) cell_eswt_app_pane_g1_ParamLimits

0xcdb3,	// (0x0000e38c) cell_eswt_app_pane_g1

0xcde2,	// (0x0000e3bb) cell_eswt_app_pane_g2_ParamLimits

0xcde2,	// (0x0000e3bb) cell_eswt_app_pane_g2

0x0001,

0xfbf4,	// (0x000111cd) cell_eswt_app_pane_g_ParamLimits

0xfbf4,	// (0x000111cd) cell_eswt_app_pane_g

0xce0b,	// (0x0000e3e4) cell_eswt_app_pane_t1_ParamLimits

0xce0b,	// (0x0000e3e4) cell_eswt_app_pane_t1

0x6272,	// (0x0000784b) grid_highlight_pane_cp70_ParamLimits

0x6272,	// (0x0000784b) grid_highlight_pane_cp70

0x0f6a,	// (0x00002543) set_content_pane_g1

0xb458,	// (0x0000ca31) status_small_volume_pane

0x627e,	// (0x00007857) status_small_volume_pane_g1

0x6286,	// (0x0000785f) volume_small2_pane

0x628f,	// (0x00007868) volume_small2_pane_g1

0x6298,	// (0x00007871) volume_small2_pane_g2

0x62a1,	// (0x0000787a) volume_small2_pane_g3

0x62aa,	// (0x00007883) volume_small2_pane_g4

0x62b3,	// (0x0000788c) volume_small2_pane_g5

0x62bc,	// (0x00007895) volume_small2_pane_g6

0x62c5,	// (0x0000789e) volume_small2_pane_g7

0x62ce,	// (0x000078a7) volume_small2_pane_g8

0x62d7,	// (0x000078b0) volume_small2_pane_g9

0x62e0,	// (0x000078b9) volume_small2_pane_g10

0x0009,

0xfbf9,	// (0x000111d2) volume_small2_pane_g

0x57d2,	// (0x00006dab) fep_vkb_top_text_pane_g1_ParamLimits

0xccaf,	// (0x0000e288) fep_vkb_top_text_pane_t1_ParamLimits

0x5b39,	// (0x00007112) popup_preview_fixed_window_g3_ParamLimits

0x5b39,	// (0x00007112) popup_preview_fixed_window_g3

0xbce6,	// (0x0000d2bf) popup_toolbar_trans_pane

0xc5e6,	// (0x0000dbbf) aid_height_set_list_ParamLimits

0x3a4b,	// (0x00005024) aid_size_parent_ParamLimits

0x15f7,	// (0x00002bd0) list_highlight_pane_cp2_ParamLimits

0x0f6a,	// (0x00002543) set_content_pane_g1_ParamLimits

0xc7db,	// (0x0000ddb4) list_single_image_pane_ParamLimits

0xc7db,	// (0x0000ddb4) list_single_image_pane

0xce3d,	// (0x0000e416) aid_size_cell_image_ParamLimits

0xce3d,	// (0x0000e416) aid_size_cell_image

0xce4a,	// (0x0000e423) grid_single_image_pane_ParamLimits

0xce4a,	// (0x0000e423) grid_single_image_pane

0xf41d,	// (0x000109f6) list_single_image_pane_g1_ParamLimits

0xf41d,	// (0x000109f6) list_single_image_pane_g1

0xf429,	// (0x00010a02) list_single_image_pane_g2_ParamLimits

0xf429,	// (0x00010a02) list_single_image_pane_g2

0x0001,

0xfc0e,	// (0x000111e7) list_single_image_pane_g_ParamLimits

0xfc0e,	// (0x000111e7) list_single_image_pane_g

0x6304,	// (0x000078dd) list_single_image_pane_t1_ParamLimits

0x6304,	// (0x000078dd) list_single_image_pane_t1

0xce58,	// (0x0000e431) cell_image_list_pane_ParamLimits

0xce58,	// (0x0000e431) cell_image_list_pane

0xce6e,	// (0x0000e447) cell_image_list_pane_g1

0xce77,	// (0x0000e450) cell_image_list_pane_g2

0x0001,

0xfc13,	// (0x000111ec) cell_image_list_pane_g

0x6344,	// (0x0000791d) aid_size_cell_tb_trans_pane

0xf3f7,	// (0x000109d0) bg_tb_trans_pane

0x6356,	// (0x0000792f) grid_tb_trans_pane

0x221a,	// (0x000037f3) bg_tb_trans_pane_g1

0x2222,	// (0x000037fb) bg_tb_trans_pane_g2

0x222a,	// (0x00003803) bg_tb_trans_pane_g3

0x2232,	// (0x0000380b) bg_tb_trans_pane_g4

0x223a,	// (0x00003813) bg_tb_trans_pane_g5

0x2252,	// (0x0000382b) bg_tb_trans_pane_g6

0x225a,	// (0x00003833) bg_tb_trans_pane_g7

0x2242,	// (0x0000381b) bg_tb_trans_pane_g8

0x224a,	// (0x00003823) bg_tb_trans_pane_g9

0x0008,

0xfc18,	// (0x000111f1) bg_tb_trans_pane_g

0x636a,	// (0x00007943) cell_toolbar_trans_pane_ParamLimits

0x636a,	// (0x00007943) cell_toolbar_trans_pane

0x51d9,	// (0x000067b2) cell_toolbar_trans_pane_g1

0xca32,	// (0x0000e00b) list_form2_midp_pane_t1

0xca40,	// (0x0000e019) list_form2_midp_pane_t2

0x0001,

0xfac1,	// (0x0001109a) list_form2_midp_pane_t

0x4dda,	// (0x000063b3) scroll_pane_cp51_ParamLimits

0x4ff4,	// (0x000065cd) form2_midp_wait_pane_g1

0x4ffd,	// (0x000065d6) form2_midp_wait_pane_g2

0x5006,	// (0x000065df) form2_midp_wait_pane_g3

0x0002,

0xfad6,	// (0x000110af) form2_midp_wait_pane_g

0xec7f,	// (0x00010258) list_highlight_pane_cp21_ParamLimits

0x503f,	// (0x00006618) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x504e,	// (0x00006627) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3c69,	// (0x00005242) list_single_2graphic_im_pane_ParamLimits

0x3c69,	// (0x00005242) list_single_2graphic_im_pane

0xce80,	// (0x0000e459) list_single_2graphic_im_pane_g1_ParamLimits

0xce80,	// (0x0000e459) list_single_2graphic_im_pane_g1

0xce91,	// (0x0000e46a) list_single_2graphic_im_pane_g2_ParamLimits

0xce91,	// (0x0000e46a) list_single_2graphic_im_pane_g2

0xce9d,	// (0x0000e476) list_single_2graphic_im_pane_g3_ParamLimits

0xce9d,	// (0x0000e476) list_single_2graphic_im_pane_g3

0x0003,

0xfc2b,	// (0x00011204) list_single_2graphic_im_pane_g_ParamLimits

0xfc2b,	// (0x00011204) list_single_2graphic_im_pane_g

0xceb1,	// (0x0000e48a) list_single_2graphic_im_pane_t1_ParamLimits

0xceb1,	// (0x0000e48a) list_single_2graphic_im_pane_t1

0x5b45,	// (0x0000711e) list_single_graphic_2heading_pane_fp_ParamLimits

0x5b45,	// (0x0000711e) list_single_graphic_2heading_pane_fp

0x5b8d,	// (0x00007166) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5b8d,	// (0x00007166) list_single_graphic_2heading_pane_fp_g1

0x5b5e,	// (0x00007137) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5b5e,	// (0x00007137) list_single_graphic_2heading_pane_fp_g2

0x5ab7,	// (0x00007090) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5ab7,	// (0x00007090) list_single_graphic_2heading_pane_fp_g3

0x5ac3,	// (0x0000709c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5ac3,	// (0x0000709c) list_single_graphic_2heading_pane_fp_g4

0x5b6a,	// (0x00007143) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5b6a,	// (0x00007143) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb59,	// (0x00011132) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb59,	// (0x00011132) list_single_graphic_2heading_pane_fp_g

0x63fe,	// (0x000079d7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x63fe,	// (0x000079d7) list_single_graphic_2heading_pane_fp_t1

0x5bc5,	// (0x0000719e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5bc5,	// (0x0000719e) list_single_graphic_2heading_pane_fp_t2

0x6414,	// (0x000079ed) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6414,	// (0x000079ed) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc34,	// (0x0001120d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc34,	// (0x0001120d) list_single_graphic_2heading_pane_fp_t

0x540e,	// (0x000069e7) fep_hwr_write_pane_g5_ParamLimits

0x540e,	// (0x000069e7) fep_hwr_write_pane_g5

0x541a,	// (0x000069f3) fep_hwr_write_pane_g6_ParamLimits

0x541a,	// (0x000069f3) fep_hwr_write_pane_g6

0x6061,	// (0x0000763a) eswt_shell_pane_ParamLimits

0x23b5,	// (0x0000398e) bg_popup_window_pane_cp18_ParamLimits

0x38f1,	// (0x00004eca) heading_pane_cp70

0x618b,	// (0x00007764) popup_eswt_tasktip_window_t1_ParamLimits

0xbdb0,	// (0x0000d389) aid_touch_tab_arrow_left

0xbdc6,	// (0x0000d39f) aid_touch_tab_arrow_right

0xa6bf,	// (0x0000bc98) title_pane_g3_ParamLimits

0xa6bf,	// (0x0000bc98) title_pane_g3

0xf350,	// (0x00010929) set_value_pane_g1

0xbce6,	// (0x0000d2bf) popup_toolbar_trans_pane_ParamLimits

0x6344,	// (0x0000791d) aid_size_cell_tb_trans_pane_ParamLimits

0xf3f7,	// (0x000109d0) bg_tb_trans_pane_ParamLimits

0x6356,	// (0x0000792f) grid_tb_trans_pane_ParamLimits

0xee55,	// (0x0001042e) cont_note_pane_ParamLimits

0xee55,	// (0x0001042e) cont_note_pane

0xf0df,	// (0x000106b8) cont_snote2_single_text_pane_ParamLimits

0xf0df,	// (0x000106b8) cont_snote2_single_text_pane

0xf0df,	// (0x000106b8) cont_snote2_single_graphic_pane_ParamLimits

0xf0df,	// (0x000106b8) cont_snote2_single_graphic_pane

0x2a64,	// (0x0000403d) cont_note_wait_pane_ParamLimits

0x2a64,	// (0x0000403d) cont_note_wait_pane

0x2a64,	// (0x0000403d) cont_note_image_pane_ParamLimits

0x2a64,	// (0x0000403d) cont_note_image_pane

0x642a,	// (0x00007a03) popup_note2_window_g1_ParamLimits

0x642a,	// (0x00007a03) popup_note2_window_g1

0x645b,	// (0x00007a34) popup_note2_window_t1_ParamLimits

0x645b,	// (0x00007a34) popup_note2_window_t1

0x64a0,	// (0x00007a79) popup_note2_window_t2_ParamLimits

0x64a0,	// (0x00007a79) popup_note2_window_t2

0x64e5,	// (0x00007abe) popup_note2_window_t3_ParamLimits

0x64e5,	// (0x00007abe) popup_note2_window_t3

0x652a,	// (0x00007b03) popup_note2_window_t4_ParamLimits

0x652a,	// (0x00007b03) popup_note2_window_t4

0xeed9,	// (0x000104b2) popup_note2_window_t5_ParamLimits

0xeed9,	// (0x000104b2) popup_note2_window_t5

0x0004,

0xfc40,	// (0x00011219) popup_note2_window_t_ParamLimits

0xfc40,	// (0x00011219) popup_note2_window_t

0x6559,	// (0x00007b32) popup_note2_image_window_g1_ParamLimits

0x6559,	// (0x00007b32) popup_note2_image_window_g1

0x6565,	// (0x00007b3e) popup_note2_image_window_g2_ParamLimits

0x6565,	// (0x00007b3e) popup_note2_image_window_g2

0x0001,

0xfc4b,	// (0x00011224) popup_note2_image_window_g_ParamLimits

0xfc4b,	// (0x00011224) popup_note2_image_window_g

0x6577,	// (0x00007b50) popup_note2_image_window_t1_ParamLimits

0x6577,	// (0x00007b50) popup_note2_image_window_t1

0x658f,	// (0x00007b68) popup_note2_image_window_t2_ParamLimits

0x658f,	// (0x00007b68) popup_note2_image_window_t2

0x65a7,	// (0x00007b80) popup_note2_image_window_t3_ParamLimits

0x65a7,	// (0x00007b80) popup_note2_image_window_t3

0x0002,

0xfc50,	// (0x00011229) popup_note2_image_window_t_ParamLimits

0xfc50,	// (0x00011229) popup_note2_image_window_t

0x2a72,	// (0x0000404b) popup_note2_wait_window_g1_ParamLimits

0x2a72,	// (0x0000404b) popup_note2_wait_window_g1

0x65c3,	// (0x00007b9c) popup_note2_wait_window_g2_ParamLimits

0x65c3,	// (0x00007b9c) popup_note2_wait_window_g2

0x2a8a,	// (0x00004063) popup_note2_wait_window_g3_ParamLimits

0x2a8a,	// (0x00004063) popup_note2_wait_window_g3

0x0002,

0xfc57,	// (0x00011230) popup_note2_wait_window_g_ParamLimits

0xfc57,	// (0x00011230) popup_note2_wait_window_g

0x65cf,	// (0x00007ba8) popup_note2_wait_window_t1_ParamLimits

0x65cf,	// (0x00007ba8) popup_note2_wait_window_t1

0x65ed,	// (0x00007bc6) popup_note2_wait_window_t2_ParamLimits

0x65ed,	// (0x00007bc6) popup_note2_wait_window_t2

0x660b,	// (0x00007be4) popup_note2_wait_window_t3_ParamLimits

0x660b,	// (0x00007be4) popup_note2_wait_window_t3

0x661d,	// (0x00007bf6) popup_note2_wait_window_t4_ParamLimits

0x661d,	// (0x00007bf6) popup_note2_wait_window_t4

0x0003,

0xfc5e,	// (0x00011237) popup_note2_wait_window_t_ParamLimits

0xfc5e,	// (0x00011237) popup_note2_wait_window_t

0x662f,	// (0x00007c08) wait_bar2_pane_ParamLimits

0x662f,	// (0x00007c08) wait_bar2_pane

0x6647,	// (0x00007c20) popup_snote2_single_text_window_g1_ParamLimits

0x6647,	// (0x00007c20) popup_snote2_single_text_window_g1

0x666f,	// (0x00007c48) popup_snote2_single_text_window_t1_ParamLimits

0x666f,	// (0x00007c48) popup_snote2_single_text_window_t1

0x66bb,	// (0x00007c94) popup_snote2_single_text_window_t2_ParamLimits

0x66bb,	// (0x00007c94) popup_snote2_single_text_window_t2

0x6707,	// (0x00007ce0) popup_snote2_single_text_window_t3_ParamLimits

0x6707,	// (0x00007ce0) popup_snote2_single_text_window_t3

0x6748,	// (0x00007d21) popup_snote2_single_text_window_t4_ParamLimits

0x6748,	// (0x00007d21) popup_snote2_single_text_window_t4

0x677e,	// (0x00007d57) popup_snote2_single_text_window_t5_ParamLimits

0x677e,	// (0x00007d57) popup_snote2_single_text_window_t5

0x0004,

0xfc67,	// (0x00011240) popup_snote2_single_text_window_t_ParamLimits

0xfc67,	// (0x00011240) popup_snote2_single_text_window_t

0x67a9,	// (0x00007d82) popup_snote2_single_graphic_window_g1_ParamLimits

0x67a9,	// (0x00007d82) popup_snote2_single_graphic_window_g1

0x67d1,	// (0x00007daa) popup_snote2_single_graphic_window_g2_ParamLimits

0x67d1,	// (0x00007daa) popup_snote2_single_graphic_window_g2

0x0001,

0xfc72,	// (0x0001124b) popup_snote2_single_graphic_window_g_ParamLimits

0xfc72,	// (0x0001124b) popup_snote2_single_graphic_window_g

0x67f9,	// (0x00007dd2) popup_snote2_single_graphic_window_t1_ParamLimits

0x67f9,	// (0x00007dd2) popup_snote2_single_graphic_window_t1

0x6845,	// (0x00007e1e) popup_snote2_single_graphic_window_t2_ParamLimits

0x6845,	// (0x00007e1e) popup_snote2_single_graphic_window_t2

0x6707,	// (0x00007ce0) popup_snote2_single_graphic_window_t3_ParamLimits

0x6707,	// (0x00007ce0) popup_snote2_single_graphic_window_t3

0x6748,	// (0x00007d21) popup_snote2_single_graphic_window_t4_ParamLimits

0x6748,	// (0x00007d21) popup_snote2_single_graphic_window_t4

0x677e,	// (0x00007d57) popup_snote2_single_graphic_window_t5_ParamLimits

0x677e,	// (0x00007d57) popup_snote2_single_graphic_window_t5

0x0004,

0xfc77,	// (0x00011250) popup_snote2_single_graphic_window_t_ParamLimits

0xfc77,	// (0x00011250) popup_snote2_single_graphic_window_t

0x4c39,	// (0x00006212) clock_nsta_pane_cp2_t1

0x4c39,	// (0x00006212) clock_nsta_pane_cp2_t2

0x0001,

0xfa97,	// (0x00011070) clock_nsta_pane_cp2_t

0xf411,	// (0x000109ea) form_field_data_wide_pane_g1_ParamLimits

0xf41d,	// (0x000109f6) form_field_data_wide_pane_g2_ParamLimits

0xf41d,	// (0x000109f6) form_field_data_wide_pane_g2

0xf429,	// (0x00010a02) form_field_data_wide_pane_g3_ParamLimits

0xf429,	// (0x00010a02) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x00010c2a) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x00010c2a) form_field_data_wide_pane_g

0xc939,	// (0x0000df12) grid_touch_3_pane_ParamLimits

0xc939,	// (0x0000df12) grid_touch_3_pane

0xcee2,	// (0x0000e4bb) cell_touch_3_pane_ParamLimits

0xcee2,	// (0x0000e4bb) cell_touch_3_pane

0x51d9,	// (0x000067b2) cell_touch_3_pane_g1

0x51d9,	// (0x000067b2) cell_touch_3_pane_g2

0x0001,

0xfb1c,	// (0x000110f5) cell_touch_3_pane_g

0xef31,	// (0x0001050a) cont_query_data_pane

0xef39,	// (0x00010512) cont_query_data_pane_cp1

0x68c4,	// (0x00007e9d) button_value_adjust_pane_cp7

0x68cc,	// (0x00007ea5) query_popup_pane_cp3

0x0938,	// (0x00001f11) bg_popup_sub_pane_cp22_ParamLimits

0x094e,	// (0x00001f27) navi_navi_volume_pane_cp2

0x0969,	// (0x00001f42) popup_side_volume_key_window_g2

0x0978,	// (0x00001f51) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x00010cc0) popup_side_volume_key_window_g

0x0995,	// (0x00001f6e) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x00010cc7) popup_side_volume_key_window_t

0x0e25,	// (0x000023fe) popup_side_volume_key_window_ParamLimits

0xab95,	// (0x0000c16e) list_double_graphic_pane_g4_ParamLimits

0xab95,	// (0x0000c16e) list_double_graphic_pane_g4

0xc7af,	// (0x0000dd88) list_single_2heading_msg_pane_ParamLimits

0xc7af,	// (0x0000dd88) list_single_2heading_msg_pane

0xcf2e,	// (0x0000e507) list_single_2heading_msg_pane_g1_ParamLimits

0xcf2e,	// (0x0000e507) list_single_2heading_msg_pane_g1

0xcf3a,	// (0x0000e513) list_single_2heading_msg_pane_g2_ParamLimits

0xcf3a,	// (0x0000e513) list_single_2heading_msg_pane_g2

0xcf4d,	// (0x0000e526) list_single_2heading_msg_pane_g3_ParamLimits

0xcf4d,	// (0x0000e526) list_single_2heading_msg_pane_g3

0xcf59,	// (0x0000e532) list_single_2heading_msg_pane_g4_ParamLimits

0xcf59,	// (0x0000e532) list_single_2heading_msg_pane_g4

0x0003,

0xfc82,	// (0x0001125b) list_single_2heading_msg_pane_g_ParamLimits

0xfc82,	// (0x0001125b) list_single_2heading_msg_pane_g

0xcf71,	// (0x0000e54a) list_single_2heading_msg_pane_t1_ParamLimits

0xcf71,	// (0x0000e54a) list_single_2heading_msg_pane_t1

0xcf99,	// (0x0000e572) list_single_2heading_msg_pane_t2_ParamLimits

0xcf99,	// (0x0000e572) list_single_2heading_msg_pane_t2

0xd004,	// (0x0000e5dd) list_single_2heading_msg_pane_t3_ParamLimits

0xd004,	// (0x0000e5dd) list_single_2heading_msg_pane_t3

0x69c9,	// (0x00007fa2) list_single_2heading_msg_pane_t4_ParamLimits

0x69c9,	// (0x00007fa2) list_single_2heading_msg_pane_t4

0x0003,

0xfc8b,	// (0x00011264) list_single_2heading_msg_pane_t_ParamLimits

0xfc8b,	// (0x00011264) list_single_2heading_msg_pane_t

0xec23,	// (0x000101fc) title_pane_g4_ParamLimits

0xec23,	// (0x000101fc) title_pane_g4

0x0376,	// (0x0000194f) title_pane_stacon_g3_ParamLimits

0x0376,	// (0x0000194f) title_pane_stacon_g3

0x63c1,	// (0x0000799a) list_single_2graphic_im_pane_g4_ParamLimits

0x63c1,	// (0x0000799a) list_single_2graphic_im_pane_g4

0x3640,	// (0x00004c19) popup_side_volume_key_window_cp

0x40f0,	// (0x000056c9) main_idle_act2_pane_t1

0x2262,	// (0x0000383b) toolbar_button_pane_g10

0xaa3c,	// (0x0000c015) popup_toolbar_window_cp1

0x4c2a,	// (0x00006203) clock_nsta_pane_cp_t1

0x4c2a,	// (0x00006203) clock_nsta_pane_cp_t2

0x0001,

0xfa92,	// (0x0001106b) clock_nsta_pane_cp_t

0x094e,	// (0x00001f27) navi_navi_volume_pane_cp2_ParamLimits

0x095d,	// (0x00001f36) popup_side_volume_key_window_g1_ParamLimits

0x0969,	// (0x00001f42) popup_side_volume_key_window_g2_ParamLimits

0x0978,	// (0x00001f51) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x00010cc0) popup_side_volume_key_window_g_ParamLimits

0x5248,	// (0x00006821) fep_hwr_aid_pane

0x52f1,	// (0x000068ca) bg_fep_hwr_top_pane_g4_ParamLimits

0x5311,	// (0x000068ea) fep_hwr_top_pane_g1_ParamLimits

0x5323,	// (0x000068fc) fep_hwr_top_pane_g2_ParamLimits

0x5335,	// (0x0000690e) fep_hwr_top_pane_g3_ParamLimits

0xfae7,	// (0x000110c0) fep_hwr_top_pane_g_ParamLimits

0x534a,	// (0x00006923) fep_hwr_top_text_pane_ParamLimits

0x33f5,	// (0x000049ce) aid_touch_tab_arrow_arrow_2

0x33fe,	// (0x000049d7) aid_touch_tab_arrow_left_2

0x525c,	// (0x00006835) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5293,	// (0x0000686c) fep_hwr_prediction_pane

0x55cc,	// (0x00006ba5) fep_vkb_prediction_pane

0xcc8f,	// (0x0000e268) fep_vkb_side_pane_g3_ParamLimits

0xcc8f,	// (0x0000e268) fep_vkb_side_pane_g3

0x567e,	// (0x00006c57) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5d87,	// (0x00007360) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5d94,	// (0x0000736d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb91,	// (0x0001116a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x69ee,	// (0x00007fc7) fep_hwr_prediction_pane_g1

0x69f8,	// (0x00007fd1) fep_hwr_prediction_pane_g2

0x6a00,	// (0x00007fd9) fep_hwr_prediction_pane_g3

0x6a08,	// (0x00007fe1) fep_hwr_prediction_pane_g4

0x0003,

0xfc94,	// (0x0001126d) fep_hwr_prediction_pane_g

0x69ee,	// (0x00007fc7) fep_vkb_prediction_pane_g1

0x6a10,	// (0x00007fe9) fep_vkb_prediction_pane_g2

0x6a18,	// (0x00007ff1) fep_vkb_prediction_pane_g3

0x6a20,	// (0x00007ff9) fep_vkb_prediction_pane_g4

0x0003,

0xfc9d,	// (0x00011276) fep_vkb_prediction_pane_g

0x39b2,	// (0x00004f8b) slider_set_pane_g3

0x39c6,	// (0x00004f9f) slider_set_pane_g4

0x39de,	// (0x00004fb7) slider_set_pane_g5

0x39b2,	// (0x00004f8b) slider_set_pane_g6

0x39f4,	// (0x00004fcd) slider_set_pane_g7

0x3bca,	// (0x000051a3) slider_form_pane_g3

0x3bd3,	// (0x000051ac) slider_form_pane_g4

0x3bdb,	// (0x000051b4) slider_form_pane_g5

0x3bca,	// (0x000051a3) slider_form_pane_g6

0xc74f,	// (0x0000dd28) slider_form_pane_g7

0x4405,	// (0x000059de) slider_set_pane_vc_g3

0x440e,	// (0x000059e7) slider_set_pane_vc_g4

0x4417,	// (0x000059f0) slider_set_pane_vc_g5

0x4405,	// (0x000059de) slider_set_pane_vc_g6

0x4420,	// (0x000059f9) slider_set_pane_vc_g7

0x48d9,	// (0x00005eb2) slider_form_pane_vc_g1

0x48e2,	// (0x00005ebb) slider_form_pane_vc_g2

0x48eb,	// (0x00005ec4) slider_form_pane_vc_g3

0x48d9,	// (0x00005eb2) slider_form_pane_vc_g4

0x48f4,	// (0x00005ecd) slider_form_pane_vc_g5

0x0004,

0xfa64,	// (0x0001103d) slider_form_pane_vc_g

0xea42,	// (0x0001001b) main_idle_act3_pane

0x6a28,	// (0x00008001) ai3_links_pane

0xd072,	// (0x0000e64b) popup_ai3_data_window_ParamLimits

0xd072,	// (0x0000e64b) popup_ai3_data_window

0xea42,	// (0x0001001b) grid_ai3_links_pane

0xd090,	// (0x0000e669) cell_ai3_links_pane_ParamLimits

0xd090,	// (0x0000e669) cell_ai3_links_pane

0x6a69,	// (0x00008042) bg_popup_sub_pane_cp11

0x6a76,	// (0x0000804f) cell_ai3_links_pane_g1

0xea42,	// (0x0001001b) bg_popup_sub_pane_cp12

0x6a9b,	// (0x00008074) heading_ai3_data_pane

0x6aa3,	// (0x0000807c) list_ai3_gene_pane

0x6aaf,	// (0x00008088) popup_ai3_data_window_g1

0x6ab7,	// (0x00008090) heading_ai3_data_pane_g1

0x6abf,	// (0x00008098) heading_ai3_data_pane_t1

0x6acd,	// (0x000080a6) list_double_ai3_gene_pane_ParamLimits

0x6acd,	// (0x000080a6) list_double_ai3_gene_pane

0x6ada,	// (0x000080b3) list_single_ai3_gene_pane_ParamLimits

0x6ada,	// (0x000080b3) list_single_ai3_gene_pane

0x519e,	// (0x00006777) list_highlight_pane_cp7_ParamLimits

0x519e,	// (0x00006777) list_highlight_pane_cp7

0x6ae7,	// (0x000080c0) list_single_a13_gene_pane_t1_ParamLimits

0x6ae7,	// (0x000080c0) list_single_a13_gene_pane_t1

0x6afe,	// (0x000080d7) list_single_ai3_gene_pane_g1

0x6b07,	// (0x000080e0) list_single_ai3_gene_pane_g2

0x0001,

0xfca6,	// (0x0001127f) list_single_ai3_gene_pane_g

0x6b0f,	// (0x000080e8) list_double_ai3_gene_pane_g1_ParamLimits

0x6b0f,	// (0x000080e8) list_double_ai3_gene_pane_g1

0x6b1b,	// (0x000080f4) list_double_ai3_gene_pane_t1_ParamLimits

0x6b1b,	// (0x000080f4) list_double_ai3_gene_pane_t1

0x6b37,	// (0x00008110) list_double_ai3_gene_pane_t2_ParamLimits

0x6b37,	// (0x00008110) list_double_ai3_gene_pane_t2

0x6b4c,	// (0x00008125) list_double_ai3_gene_pane_t3_ParamLimits

0x6b4c,	// (0x00008125) list_double_ai3_gene_pane_t3

0x0002,

0xfcab,	// (0x00011284) list_double_ai3_gene_pane_t_ParamLimits

0xfcab,	// (0x00011284) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x68dd,	// (0x00007eb6) aid_size_min_col_2

0xcf18,	// (0x0000e4f1) aid_size_min_msg_ParamLimits

0xcf18,	// (0x0000e4f1) aid_size_min_msg

0xcca3,	// (0x0000e27c) fep_vkb_top_text_pane_g2_ParamLimits

0xcca3,	// (0x0000e27c) fep_vkb_top_text_pane_g2

0x0001,

0xfb17,	// (0x000110f0) fep_vkb_top_text_pane_g_ParamLimits

0xfb17,	// (0x000110f0) fep_vkb_top_text_pane_g

0xea42,	// (0x0001001b) main_hc_apps_shell_pane

0x6b69,	// (0x00008142) grid_hc_apps_pane_ParamLimits

0x6b69,	// (0x00008142) grid_hc_apps_pane

0x6b7b,	// (0x00008154) list_hc_apps_pane

0x6b83,	// (0x0000815c) scroll_pane_cp37_ParamLimits

0x6b83,	// (0x0000815c) scroll_pane_cp37

0xd0aa,	// (0x0000e683) cell_hc_apps_pane_ParamLimits

0xd0aa,	// (0x0000e683) cell_hc_apps_pane

0xd172,	// (0x0000e74b) cell_hc_apps_pane_g1_ParamLimits

0xd172,	// (0x0000e74b) cell_hc_apps_pane_g1

0x6c71,	// (0x0000824a) cell_hc_apps_pane_g2_ParamLimits

0x6c71,	// (0x0000824a) cell_hc_apps_pane_g2

0x6c8d,	// (0x00008266) cell_hc_apps_pane_g3_ParamLimits

0x6c8d,	// (0x00008266) cell_hc_apps_pane_g3

0x0002,

0xfcb2,	// (0x0001128b) cell_hc_apps_pane_g_ParamLimits

0xfcb2,	// (0x0001128b) cell_hc_apps_pane_g

0xd19e,	// (0x0000e777) cell_hc_apps_pane_t1_ParamLimits

0xd19e,	// (0x0000e777) cell_hc_apps_pane_t1

0xee55,	// (0x0001042e) grid_highlight_pane_cp10_ParamLimits

0xee55,	// (0x0001042e) grid_highlight_pane_cp10

0xd1de,	// (0x0000e7b7) list_single_hc_apps_pane_ParamLimits

0xd1de,	// (0x0000e7b7) list_single_hc_apps_pane

0xd218,	// (0x0000e7f1) list_single_hc_apps_pane_g1

0xd231,	// (0x0000e80a) list_single_hc_apps_pane_g2

0x0001,

0xfcb9,	// (0x00011292) list_single_hc_apps_pane_g

0xd24a,	// (0x0000e823) list_single_hc_apps_pane_g2_copy1

0xd266,	// (0x0000e83f) list_single_hc_apps_pane_t1

0xec7f,	// (0x00010258) bg_set_opt_pane_cp_ParamLimits

0xec8d,	// (0x00010266) setting_slider_pane_t1_ParamLimits

0xeca6,	// (0x0001027f) setting_slider_pane_t2_ParamLimits

0xecc0,	// (0x00010299) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00010b12) setting_slider_pane_t_ParamLimits

0xecd8,	// (0x000102b1) slider_set_pane_ParamLimits

0x1480,	// (0x00002a59) control_pane_g5_ParamLimits

0x1480,	// (0x00002a59) control_pane_g5

0x3999,	// (0x00004f72) slider_set_pane_g1_ParamLimits

0x39a6,	// (0x00004f7f) slider_set_pane_g2_ParamLimits

0x39b2,	// (0x00004f8b) slider_set_pane_g3_ParamLimits

0x39c6,	// (0x00004f9f) slider_set_pane_g4_ParamLimits

0x39de,	// (0x00004fb7) slider_set_pane_g5_ParamLimits

0x39b2,	// (0x00004f8b) slider_set_pane_g6_ParamLimits

0x39f4,	// (0x00004fcd) slider_set_pane_g7_ParamLimits

0xf92e,	// (0x00010f07) slider_set_pane_g_ParamLimits

0x0f15,	// (0x000024ee) navi_icon_text_pane_ParamLimits

0xbd77,	// (0x0000d350) aid_fill_nsta_2_ParamLimits

0xbdb0,	// (0x0000d389) aid_touch_tab_arrow_left_ParamLimits

0xbdc6,	// (0x0000d39f) aid_touch_tab_arrow_right_ParamLimits

0xbe61,	// (0x0000d43a) clock_nsta_pane_ParamLimits

0xc4cd,	// (0x0000daa6) navi_icon_pane_g1_ParamLimits

0xc4d9,	// (0x0000dab2) navi_text_pane_t1_ParamLimits

0xca14,	// (0x0000dfed) navi_icon_text_pane_g1_ParamLimits

0xca20,	// (0x0000dff9) navi_icon_text_pane_t1_ParamLimits

0xd218,	// (0x0000e7f1) list_single_hc_apps_pane_g1_ParamLimits

0xd231,	// (0x0000e80a) list_single_hc_apps_pane_g2_ParamLimits

0xfcb9,	// (0x00011292) list_single_hc_apps_pane_g_ParamLimits

0xd24a,	// (0x0000e823) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd266,	// (0x0000e83f) list_single_hc_apps_pane_t1_ParamLimits

0xa5ae,	// (0x0000bb87) popup_toolbar2_fixed_window_ParamLimits

0xa5ae,	// (0x0000bb87) popup_toolbar2_fixed_window

0xbcdc,	// (0x0000d2b5) popup_toolbar2_float_window

0xea42,	// (0x0001001b) bg_popup_sub_pane_cp27

0x6daa,	// (0x00008383) grid_toolbar2_float_pane

0xea42,	// (0x0001001b) bg_popup_sub_pane_cp26

0x6daa,	// (0x00008383) grid_toolbar2_fixed_pane

0xd294,	// (0x0000e86d) cell_toolbar2_fixed_pane_ParamLimits

0xd294,	// (0x0000e86d) cell_toolbar2_fixed_pane

0xd2ae,	// (0x0000e887) cell_toolbar2_fixed_pane_g1

0x6dcb,	// (0x000083a4) toolbar2_fixed_button_pane

0x221a,	// (0x000037f3) toolbar2_fixed_button_pane_g1

0x2222,	// (0x000037fb) toolbar2_fixed_button_pane_g2

0x222a,	// (0x00003803) toolbar2_fixed_button_pane_g3

0x2232,	// (0x0000380b) toolbar2_fixed_button_pane_g4

0x223a,	// (0x00003813) toolbar2_fixed_button_pane_g5

0x2242,	// (0x0000381b) toolbar2_fixed_button_pane_g6

0x224a,	// (0x00003823) toolbar2_fixed_button_pane_g7

0x2252,	// (0x0000382b) toolbar2_fixed_button_pane_g8

0x225a,	// (0x00003833) toolbar2_fixed_button_pane_g9

0x0008,

0xf830,	// (0x00010e09) toolbar2_fixed_button_pane_g

0x6dd3,	// (0x000083ac) cell_toolbar2_float_pane_ParamLimits

0x6dd3,	// (0x000083ac) cell_toolbar2_float_pane

0x6de4,	// (0x000083bd) cell_toolbar2_float_pane_g1

0x6dcb,	// (0x000083a4) toolbar2_fixed_button_pane_cp

0xcb8b,	// (0x0000e164) fep_vkb_accented_list_pane_ParamLimits

0xcb8b,	// (0x0000e164) fep_vkb_accented_list_pane

0x59ef,	// (0x00006fc8) bg_popup_fep_shadow_pane_g9

0x1099,	// (0x00002672) bg_popup_fep_shadow_pane_cp3

0x0104,	// (0x000016dd) list_accented_list_pane

0x6ded,	// (0x000083c6) list_single_accented_list_pane_ParamLimits

0x6ded,	// (0x000083c6) list_single_accented_list_pane

0x1099,	// (0x00002672) list_highlight_pane_cp10

0x6dfe,	// (0x000083d7) list_single_accented_list_pane_t1

0xbbfa,	// (0x0000d1d3) popup_slider_window_ParamLimits

0xbbfa,	// (0x0000d1d3) popup_slider_window

0x68d4,	// (0x00007ead) aid_indentation_list_msg

0xd3b1,	// (0x0000e98a) bg_popup_window_pane_cp19

0x6f3a,	// (0x00008513) popup_slider_window_g1

0x6f56,	// (0x0000852f) popup_slider_window_g2

0x6f72,	// (0x0000854b) popup_slider_window_g3

0x0005,

0xfcbe,	// (0x00011297) popup_slider_window_g

0x6fd8,	// (0x000085b1) popup_slider_window_t1

0x704c,	// (0x00008625) small_volume_slider_vertical_pane

0x51d9,	// (0x000067b2) small_volume_slider_vertical_pane_g1

0x51d9,	// (0x000067b2) small_volume_slider_vertical_pane_g2

0x7068,	// (0x00008641) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd0,	// (0x000112a9) small_volume_slider_vertical_pane_g

0xa518,	// (0x0000baf1) area_side_right_pane_ParamLimits

0xa518,	// (0x0000baf1) area_side_right_pane

0xd469,	// (0x0000ea42) aid_size_side_button_ParamLimits

0xd469,	// (0x0000ea42) aid_size_side_button

0xd482,	// (0x0000ea5b) grid_sctrl_middle_pane_ParamLimits

0xd482,	// (0x0000ea5b) grid_sctrl_middle_pane

0x70a4,	// (0x0000867d) sctrl_sk_bottom_pane

0x70b5,	// (0x0000868e) sctrl_sk_top_pane

0x70c7,	// (0x000086a0) aid_touch_sctrl_top

0xee55,	// (0x0001042e) bg_sctrl_sk_pane_ParamLimits

0xee55,	// (0x0001042e) bg_sctrl_sk_pane

0x70d4,	// (0x000086ad) sctrl_sk_top_pane_g1

0x70e1,	// (0x000086ba) sctrl_sk_top_pane_t1

0x70c7,	// (0x000086a0) aid_touch_sctrl_bottom

0xee55,	// (0x0001042e) bg_sctrl_sk_pane_cp_ParamLimits

0xee55,	// (0x0001042e) bg_sctrl_sk_pane_cp

0x70fc,	// (0x000086d5) sctrl_sk_bottom_pane_g1

0x70e1,	// (0x000086ba) sctrl_sk_bottom_pane_t1

0xd49c,	// (0x0000ea75) cell_sctrl_middle_pane_ParamLimits

0xd49c,	// (0x0000ea75) cell_sctrl_middle_pane

0xd4af,	// (0x0000ea88) aid_touch_sctrl_middle_ParamLimits

0xd4af,	// (0x0000ea88) aid_touch_sctrl_middle

0xd4bc,	// (0x0000ea95) bg_sctrl_middle_pane_ParamLimits

0xd4bc,	// (0x0000ea95) bg_sctrl_middle_pane

0x71c6,	// (0x0000879f) cell_sctrl_middle_pane_g1_ParamLimits

0x71c6,	// (0x0000879f) cell_sctrl_middle_pane_g1

0xd4ca,	// (0x0000eaa3) cell_sctrl_middle_pane_g2_ParamLimits

0xd4ca,	// (0x0000eaa3) cell_sctrl_middle_pane_g2

0x0001,

0xfcdc,	// (0x000112b5) cell_sctrl_middle_pane_g_ParamLimits

0xfcdc,	// (0x000112b5) cell_sctrl_middle_pane_g

0x221a,	// (0x000037f3) bg_sctrl_middle_pane_g1

0x2222,	// (0x000037fb) bg_sctrl_middle_pane_g2

0x222a,	// (0x00003803) bg_sctrl_middle_pane_g3

0x2232,	// (0x0000380b) bg_sctrl_middle_pane_g4

0x223a,	// (0x00003813) bg_sctrl_middle_pane_g5

0x2242,	// (0x0000381b) bg_sctrl_middle_pane_g6

0x224a,	// (0x00003823) bg_sctrl_middle_pane_g7

0x2252,	// (0x0000382b) bg_sctrl_middle_pane_g8

0x0007,

0xfce1,	// (0x000112ba) bg_sctrl_middle_pane_g

0x225a,	// (0x00003833) bg_sctrl_middle_pane_g8_copy1

0x221a,	// (0x000037f3) bg_sctrl_sk_pane_g1

0x2222,	// (0x000037fb) bg_sctrl_sk_pane_g2

0x222a,	// (0x00003803) bg_sctrl_sk_pane_g3

0x0008,

0xf830,	// (0x00010e09) bg_sctrl_sk_pane_g

0xf29d,	// (0x00010876) aid_size_touch_scroll_bar

0x2232,	// (0x0000380b) bg_sctrl_sk_pane_g4

0x223a,	// (0x00003813) bg_sctrl_sk_pane_g5

0x2242,	// (0x0000381b) bg_sctrl_sk_pane_g6

0x224a,	// (0x00003823) bg_sctrl_sk_pane_g7

0x2252,	// (0x0000382b) bg_sctrl_sk_pane_g8

0x225a,	// (0x00003833) bg_sctrl_sk_pane_g9

0x16e3,	// (0x00002cbc) popup_fep_china_hwr2_fs_candidate_window

0xb6ac,	// (0x0000cc85) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb6ac,	// (0x0000cc85) popup_fep_china_hwr2_fs_control_window

0x567e,	// (0x00006c57) sctrl_sk_top_pane_g2

0x0001,

0xfcd7,	// (0x000112b0) sctrl_sk_top_pane_g

0xd4d6,	// (0x0000eaaf) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd4d6,	// (0x0000eaaf) aid_fep_china_hwr2_fs_cell

0xd4ec,	// (0x0000eac5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd4ec,	// (0x0000eac5) bg_popup_fep_shadow_pane_cp4

0xd503,	// (0x0000eadc) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd503,	// (0x0000eadc) bg_popup_fep_shadow_pane_cp5

0xd515,	// (0x0000eaee) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd515,	// (0x0000eaee) popup_fep_china_hwr2_fs_control_bar_grid

0xd529,	// (0x0000eb02) popup_fep_china_hwr2_fs_control_funtion_grid

0x719a,	// (0x00008773) aid_fep_china_hwr2_fs_candi_cell

0xea42,	// (0x0001001b) bg_popup_fep_shadow_pane_cp6

0x71a4,	// (0x0000877d) popup_fep_china_hwr2_fs_candidate_grid

0xd531,	// (0x0000eb0a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd531,	// (0x0000eb0a) cell_fep_china_hwr2_fs_funtion_grid

0x51d9,	// (0x000067b2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x71c6,	// (0x0000879f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x71c6,	// (0x0000879f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x71d4,	// (0x000087ad) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x71d4,	// (0x000087ad) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf2,	// (0x000112cb) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf2,	// (0x000112cb) cell_fep_china_hwr2_fs_funtion_grid_g

0xd549,	// (0x0000eb22) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd549,	// (0x0000eb22) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd55e,	// (0x0000eb37) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd55e,	// (0x0000eb37) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf7,	// (0x000112d0) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf7,	// (0x000112d0) cell_fep_china_hwr2_fs_funtion_grid_t

0x721b,	// (0x000087f4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7223,	// (0x000087fc) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x722b,	// (0x00008804) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfc,	// (0x000112d5) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7233,	// (0x0000880c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7233,	// (0x0000880c) cell_fep_china_hwr2_fs_candidate_grid

0x7252,	// (0x0000882b) popup_fep_china_hwr2_fs_candidate_grid_g20

0x725a,	// (0x00008833) popup_fep_china_hwr2_fs_candidate_grid_g21

0x51d9,	// (0x000067b2) cell_fep_china_hwr2_fs_candidate_grid_g1

0x51d9,	// (0x000067b2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1c,	// (0x000110f5) cell_fep_china_hwr2_fs_candidate_grid_g

0x7262,	// (0x0000883b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1d50,	// (0x00003329) clock_nsta_pane_cp_24_ParamLimits

0x1d50,	// (0x00003329) clock_nsta_pane_cp_24

0x1dd0,	// (0x000033a9) indicator_nsta_pane_cp_24_ParamLimits

0x1dd0,	// (0x000033a9) indicator_nsta_pane_cp_24

0x3242,	// (0x0000481b) heading_pane_g1

0x0001,

0xf895,	// (0x00010e6e) heading_pane_g

0x3e7f,	// (0x00005458) grid_sct_catagory_button_pane

0x3eb1,	// (0x0000548a) scroll_pane_cp5_ParamLimits

0x4de6,	// (0x000063bf) button_value_adjust_pane_cp5_ParamLimits

0x4de6,	// (0x000063bf) button_value_adjust_pane_cp5

0x4eec,	// (0x000064c5) form2_midp_time_pane_ParamLimits

0x7270,	// (0x00008849) cell_sct_catagory_button_pane_ParamLimits

0x7270,	// (0x00008849) cell_sct_catagory_button_pane

0x519e,	// (0x00006777) bg_button_pane_cp01_ParamLimits

0x519e,	// (0x00006777) bg_button_pane_cp01

0x51d9,	// (0x000067b2) cell_sct_catagory_button_pane_g1

0xbc79,	// (0x0000d252) popup_tb_extension_window

0xd57a,	// (0x0000eb53) aid_size_cell_ext_ParamLimits

0xd57a,	// (0x0000eb53) aid_size_cell_ext

0xf0df,	// (0x000106b8) bg_tb_trans_pane_cp1_ParamLimits

0xf0df,	// (0x000106b8) bg_tb_trans_pane_cp1

0xd5a0,	// (0x0000eb79) grid_tb_ext_pane_ParamLimits

0xd5a0,	// (0x0000eb79) grid_tb_ext_pane

0xd5dd,	// (0x0000ebb6) cell_tb_ext_pane_ParamLimits

0xd5dd,	// (0x0000ebb6) cell_tb_ext_pane

0xd605,	// (0x0000ebde) cell_tb_ext_pane_g1_ParamLimits

0xd605,	// (0x0000ebde) cell_tb_ext_pane_g1

0x7304,	// (0x000088dd) cell_tb_ext_pane_t1

0xee55,	// (0x0001042e) list_highlight_pane_cp11_ParamLimits

0xee55,	// (0x0001042e) list_highlight_pane_cp11

0xa5c3,	// (0x0000bb9c) popup_uni_indicator_window_ParamLimits

0xa5c3,	// (0x0000bb9c) popup_uni_indicator_window

0xf3f7,	// (0x000109d0) bg_popup_sub_pane_cp14

0x731f,	// (0x000088f8) list_uniindi_pane

0x732b,	// (0x00008904) uniindi_top_pane

0xee55,	// (0x0001042e) bg_uniindi_top_pane

0x734c,	// (0x00008925) uniindi_top_pane_g1

0x7362,	// (0x0000893b) uniindi_top_pane_g2

0x0003,

0xfd03,	// (0x000112dc) uniindi_top_pane_g

0x738c,	// (0x00008965) uniindi_top_pane_t1

0x73b8,	// (0x00008991) list_single_uniindi_pane_ParamLimits

0x73b8,	// (0x00008991) list_single_uniindi_pane

0x51d9,	// (0x000067b2) bg_uniindi_top_pane_g1

0x73cb,	// (0x000089a4) list_single_uniindi_pane_g1

0x73de,	// (0x000089b7) list_single_uniindi_pane_t1

0xea42,	// (0x0001001b) control_bg_pane

0x7403,	// (0x000089dc) bg_sctrl_sk_pane_cp1

0x740c,	// (0x000089e5) bg_sctrl_sk_pane_cp2

0x7415,	// (0x000089ee) control_bg_pane_g1

0x741e,	// (0x000089f7) control_bg_pane_g2

0x0001,

0xfd0c,	// (0x000112e5) control_bg_pane_g

0x4bcd,	// (0x000061a6) cell_indicator_nsta_pane_g1_ParamLimits

0xc976,	// (0x0000df4f) cell_indicator_nsta_pane_g2_ParamLimits

0xfa80,	// (0x00011059) cell_indicator_nsta_pane_g_ParamLimits

0x4f79,	// (0x00006552) form2_midp_time_pane_t1_ParamLimits

0x523a,	// (0x00006813) main_idle_act4_pane_ParamLimits

0x523a,	// (0x00006813) main_idle_act4_pane

0xbc79,	// (0x0000d252) popup_tb_extension_window_ParamLimits

0xd5c5,	// (0x0000eb9e) tb_ext_find_pane_ParamLimits

0xd5c5,	// (0x0000eb9e) tb_ext_find_pane

0x7427,	// (0x00008a00) ai_gene_pane_1_cp1

0x11e3,	// (0x000027bc) ai_gene_pane_2_cp1

0x742f,	// (0x00008a08) list_single_idle_plugin_calendar_pane

0x7438,	// (0x00008a11) list_single_idle_plugin_notification_pane

0x7441,	// (0x00008a1a) list_single_idle_plugin_player_pane

0xd622,	// (0x0000ebfb) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd622,	// (0x0000ebfb) list_single_idle_plugin_shortcut_pane

0xd64a,	// (0x0000ec23) main_idle_act4_pane_t1

0xd662,	// (0x0000ec3b) main_idle_act4_pane_t2

0x0001,

0xfd11,	// (0x000112ea) main_idle_act4_pane_t

0xd67a,	// (0x0000ec53) middle_sk_idle_act4_pane_ParamLimits

0xd67a,	// (0x0000ec53) middle_sk_idle_act4_pane

0xd696,	// (0x0000ec6f) popup_clock_digital_analogue_window_cp2

0xd6bd,	// (0x0000ec96) shortcut_wheel_idle_act4_pane_ParamLimits

0xd6bd,	// (0x0000ec96) shortcut_wheel_idle_act4_pane

0x51d9,	// (0x000067b2) shortcut_wheel_idle_act4_pane_g1

0x51d9,	// (0x000067b2) shortcut_wheel_idle_act4_pane_g2

0x51d9,	// (0x000067b2) shortcut_wheel_idle_act4_pane_g3

0x51d9,	// (0x000067b2) shortcut_wheel_idle_act4_pane_g4

0x51d9,	// (0x000067b2) shortcut_wheel_idle_act4_pane_g5

0x74d4,	// (0x00008aad) shortcut_wheel_idle_act4_pane_g6

0x74dc,	// (0x00008ab5) shortcut_wheel_idle_act4_pane_g7

0x74e4,	// (0x00008abd) shortcut_wheel_idle_act4_pane_g8

0x74ec,	// (0x00008ac5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd16,	// (0x000112ef) shortcut_wheel_idle_act4_pane_g

0x52f1,	// (0x000068ca) middle_sk_idle_act4_pane_g1_ParamLimits

0x52f1,	// (0x000068ca) middle_sk_idle_act4_pane_g1

0xd73a,	// (0x0000ed13) middle_sk_idle_act4_pane_g2_ParamLimits

0xd73a,	// (0x0000ed13) middle_sk_idle_act4_pane_g2

0x0001,

0xfd39,	// (0x00011312) middle_sk_idle_act4_pane_g_ParamLimits

0xfd39,	// (0x00011312) middle_sk_idle_act4_pane_g

0xd752,	// (0x0000ed2b) middle_sk_idle_act4_pane_t1_ParamLimits

0xd752,	// (0x0000ed2b) middle_sk_idle_act4_pane_t1

0xd781,	// (0x0000ed5a) grid_ai_shortcut_pane_ParamLimits

0xd781,	// (0x0000ed5a) grid_ai_shortcut_pane

0xd79e,	// (0x0000ed77) list_highlight_pane_cp16_ParamLimits

0xd79e,	// (0x0000ed77) list_highlight_pane_cp16

0xd7ab,	// (0x0000ed84) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd7ab,	// (0x0000ed84) list_single_idle_plugin_shortcut_pane_g1

0xd7b7,	// (0x0000ed90) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd7b7,	// (0x0000ed90) list_single_idle_plugin_shortcut_pane_g2

0xd7d5,	// (0x0000edae) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd7d5,	// (0x0000edae) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3e,	// (0x00011317) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3e,	// (0x00011317) list_single_idle_plugin_shortcut_pane_g

0xd7ea,	// (0x0000edc3) cell_ai_shortcut_pane_ParamLimits

0xd7ea,	// (0x0000edc3) cell_ai_shortcut_pane

0xd800,	// (0x0000edd9) cell_ai_shortcut_pane_g1_ParamLimits

0xd800,	// (0x0000edd9) cell_ai_shortcut_pane_g1

0x7427,	// (0x00008a00) ai_gene_pane_1_cp2

0x761d,	// (0x00008bf6) ai_gene_pane_2_cp2

0x7625,	// (0x00008bfe) list_highlight_pane_cp15

0x762e,	// (0x00008c07) list_single_idle_plugin_calendar_pane_g1

0x7625,	// (0x00008bfe) list_highlight_pane_cp17

0x7636,	// (0x00008c0f) list_single_idle_plugin_calendar_pane_g1_copy1

0x763e,	// (0x00008c17) list_single_idle_plugin_player_pane_g1

0x419e,	// (0x00005777) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd45,	// (0x0001131e) list_single_idle_plugin_player_pane_g

0x7646,	// (0x00008c1f) list_single_idle_plugin_player_pane_t1

0x7654,	// (0x00008c2d) list_single_idle_plugin_player_pane_t2

0x7662,	// (0x00008c3b) list_single_idle_plugin_player_pane_t3

0x7670,	// (0x00008c49) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4a,	// (0x00011323) list_single_idle_plugin_player_pane_t

0x767e,	// (0x00008c57) wait_bar_pane_cp15

0x7686,	// (0x00008c5f) grid_ai_notification_pane

0x419e,	// (0x00005777) list_single_idle_plugin_notification_pane_g1

0xd822,	// (0x0000edfb) cell_ai_notification_pane_ParamLimits

0xd822,	// (0x0000edfb) cell_ai_notification_pane

0x769c,	// (0x00008c75) cell_ai_notification_pane_g1

0x76a4,	// (0x00008c7d) cell_ai_notification_pane_t1

0xd82f,	// (0x0000ee08) tb_ext_find_button_pane

0xd837,	// (0x0000ee10) tb_ext_find_pane_g1

0xd83f,	// (0x0000ee18) tb_ext_find_pane_t1

0x07d6,	// (0x00001daf) tb_ext_find_button_pane_g1

0x76d0,	// (0x00008ca9) tb_ext_find_button_pane_g2

0x0001,

0xfd53,	// (0x0001132c) tb_ext_find_button_pane_g

0xd64a,	// (0x0000ec23) main_idle_act4_pane_t1_ParamLimits

0xd662,	// (0x0000ec3b) main_idle_act4_pane_t2_ParamLimits

0xfd11,	// (0x000112ea) main_idle_act4_pane_t_ParamLimits

0xd696,	// (0x0000ec6f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd6ad,	// (0x0000ec86) sat_plugin_idle_act4_pane_ParamLimits

0xd6ad,	// (0x0000ec86) sat_plugin_idle_act4_pane

0xd84d,	// (0x0000ee26) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd84d,	// (0x0000ee26) sat_plugin_idle_act4_pane_t1

0xd865,	// (0x0000ee3e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd865,	// (0x0000ee3e) sat_plugin_idle_act4_pane_t2

0xd87d,	// (0x0000ee56) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd87d,	// (0x0000ee56) sat_plugin_idle_act4_pane_t3

0xd895,	// (0x0000ee6e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd895,	// (0x0000ee6e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd58,	// (0x00011331) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd58,	// (0x00011331) sat_plugin_idle_act4_pane_t

0xebcf,	// (0x000101a8) popup_battery_window_ParamLimits

0xebcf,	// (0x000101a8) popup_battery_window

0xee55,	// (0x0001042e) bg_popup_sub_pane_cp25_ParamLimits

0xee55,	// (0x0001042e) bg_popup_sub_pane_cp25

0x7725,	// (0x00008cfe) popup_battery_window_g1_ParamLimits

0x7725,	// (0x00008cfe) popup_battery_window_g1

0x7731,	// (0x00008d0a) popup_battery_window_t1_ParamLimits

0x7731,	// (0x00008d0a) popup_battery_window_t1

0x7743,	// (0x00008d1c) popup_battery_window_t2_ParamLimits

0x7743,	// (0x00008d1c) popup_battery_window_t2

0x0001,

0xfd61,	// (0x0001133a) popup_battery_window_t_ParamLimits

0xfd61,	// (0x0001133a) popup_battery_window_t

0xb319,	// (0x0000c8f2) midp_canvas_pane_ParamLimits

0xb375,	// (0x0000c94e) midp_keypad_pane_ParamLimits

0xb375,	// (0x0000c94e) midp_keypad_pane

0x15f7,	// (0x00002bd0) main_midp_pane_ParamLimits

0x4c48,	// (0x00006221) signal_pane_g2_cp_ParamLimits

0xd8ad,	// (0x0000ee86) aid_size_cell_midp_keypad_ParamLimits

0xd8ad,	// (0x0000ee86) aid_size_cell_midp_keypad

0xd8cb,	// (0x0000eea4) midp_keyp_game_grid_pane_ParamLimits

0xd8cb,	// (0x0000eea4) midp_keyp_game_grid_pane

0xd8f2,	// (0x0000eecb) midp_keyp_rocker_pane_ParamLimits

0xd8f2,	// (0x0000eecb) midp_keyp_rocker_pane

0xd941,	// (0x0000ef1a) midp_keyp_sk_left_pane_ParamLimits

0xd941,	// (0x0000ef1a) midp_keyp_sk_left_pane

0xd997,	// (0x0000ef70) midp_keyp_sk_right_pane_ParamLimits

0xd997,	// (0x0000ef70) midp_keyp_sk_right_pane

0xea42,	// (0x0001001b) bg_button_pane_cp03

0xd9ed,	// (0x0000efc6) midp_keyp_sk_left_pane_g1

0xea42,	// (0x0001001b) bg_button_pane_cp04

0xd9ed,	// (0x0000efc6) midp_keyp_sk_right_pane_g1

0x51d9,	// (0x000067b2) midp_keyp_rocker_pane_g1

0xd9f5,	// (0x0000efce) keyp_game_cell_pane_ParamLimits

0xd9f5,	// (0x0000efce) keyp_game_cell_pane

0xea42,	// (0x0001001b) bg_button_pane_cp02

0xda1b,	// (0x0000eff4) keyp_game_cell_pane_g1

0xa55a,	// (0x0000bb33) popup_fep_vkb2_window_ParamLimits

0xa55a,	// (0x0000bb33) popup_fep_vkb2_window

0xda24,	// (0x0000effd) aid_size_cell_vkb2_ParamLimits

0xda24,	// (0x0000effd) aid_size_cell_vkb2

0xda5a,	// (0x0000f033) popup_fep_vkb2_window_g1_ParamLimits

0xda5a,	// (0x0000f033) popup_fep_vkb2_window_g1

0xdaaa,	// (0x0000f083) vkb2_area_bottom_pane_ParamLimits

0xdaaa,	// (0x0000f083) vkb2_area_bottom_pane

0xdb06,	// (0x0000f0df) vkb2_area_keypad_pane_ParamLimits

0xdb06,	// (0x0000f0df) vkb2_area_keypad_pane

0xdb54,	// (0x0000f12d) vkb2_area_top_pane_ParamLimits

0xdb54,	// (0x0000f12d) vkb2_area_top_pane

0xdbda,	// (0x0000f1b3) vkb2_top_entry_pane_ParamLimits

0xdbda,	// (0x0000f1b3) vkb2_top_entry_pane

0xdc07,	// (0x0000f1e0) vkb2_top_grid_left_pane_ParamLimits

0xdc07,	// (0x0000f1e0) vkb2_top_grid_left_pane

0xdc27,	// (0x0000f200) vkb2_top_grid_right_pane_ParamLimits

0xdc27,	// (0x0000f200) vkb2_top_grid_right_pane

0x7ac9,	// (0x000090a2) vkb2_cell_keypad_pane_ParamLimits

0x7ac9,	// (0x000090a2) vkb2_cell_keypad_pane

0xdc6d,	// (0x0000f246) vkb2_area_bottom_grid_pane_ParamLimits

0xdc6d,	// (0x0000f246) vkb2_area_bottom_grid_pane

0xdc97,	// (0x0000f270) vkb2_area_bottom_pane_g1_ParamLimits

0xdc97,	// (0x0000f270) vkb2_area_bottom_pane_g1

0xdcbd,	// (0x0000f296) vkb2_area_bottom_pane_g2_ParamLimits

0xdcbd,	// (0x0000f296) vkb2_area_bottom_pane_g2

0xdcee,	// (0x0000f2c7) vkb2_area_bottom_pane_g3_ParamLimits

0xdcee,	// (0x0000f2c7) vkb2_area_bottom_pane_g3

0x0002,

0xfd66,	// (0x0001133f) vkb2_area_bottom_pane_g_ParamLimits

0xfd66,	// (0x0001133f) vkb2_area_bottom_pane_g

0x7c73,	// (0x0000924c) vkb2_top_cell_left_pane_ParamLimits

0x7c73,	// (0x0000924c) vkb2_top_cell_left_pane

0xdd58,	// (0x0000f331) vkb2_top_entry_pane_g1_ParamLimits

0xdd58,	// (0x0000f331) vkb2_top_entry_pane_g1

0xdd66,	// (0x0000f33f) vkb2_top_entry_pane_t1_ParamLimits

0xdd66,	// (0x0000f33f) vkb2_top_entry_pane_t1

0x7cdb,	// (0x000092b4) vkb2_top_entry_pane_t2_ParamLimits

0x7cdb,	// (0x000092b4) vkb2_top_entry_pane_t2

0x7d0d,	// (0x000092e6) vkb2_top_entry_pane_t3_ParamLimits

0x7d0d,	// (0x000092e6) vkb2_top_entry_pane_t3

0x0002,

0xfd6d,	// (0x00011346) vkb2_top_entry_pane_t_ParamLimits

0xfd6d,	// (0x00011346) vkb2_top_entry_pane_t

0xdd9f,	// (0x0000f378) vkb2_top_grid_right_pane_g1_ParamLimits

0xdd9f,	// (0x0000f378) vkb2_top_grid_right_pane_g1

0x7d74,	// (0x0000934d) vkb2_top_grid_right_pane_g2_ParamLimits

0x7d74,	// (0x0000934d) vkb2_top_grid_right_pane_g2

0x7d8c,	// (0x00009365) vkb2_top_grid_right_pane_g3_ParamLimits

0x7d8c,	// (0x00009365) vkb2_top_grid_right_pane_g3

0xddb5,	// (0x0000f38e) vkb2_top_grid_right_pane_g4_ParamLimits

0xddb5,	// (0x0000f38e) vkb2_top_grid_right_pane_g4

0x0003,

0xfd74,	// (0x0001134d) vkb2_top_grid_right_pane_g_ParamLimits

0xfd74,	// (0x0001134d) vkb2_top_grid_right_pane_g

0x7dba,	// (0x00009393) vkb2_top_cell_left_pane_g1

0x7dd1,	// (0x000093aa) vkb2_cell_keypad_pane_g1_ParamLimits

0x7dd1,	// (0x000093aa) vkb2_cell_keypad_pane_g1

0x7ddf,	// (0x000093b8) vkb2_cell_keypad_pane_t1_ParamLimits

0x7ddf,	// (0x000093b8) vkb2_cell_keypad_pane_t1

0x7df6,	// (0x000093cf) vkb2_cell_bottom_grid_pane_ParamLimits

0x7df6,	// (0x000093cf) vkb2_cell_bottom_grid_pane

0x7e2f,	// (0x00009408) vkb2_cell_bottom_grid_pane_g1

0xd6de,	// (0x0000ecb7) aid_call2_pane_cp02

0xd6e6,	// (0x0000ecbf) aid_call_pane_cp02

0xd6ee,	// (0x0000ecc7) clock_digital_number_pane_cp10

0xd6f6,	// (0x0000eccf) clock_digital_number_pane_cp11

0xd6fe,	// (0x0000ecd7) clock_digital_number_pane_cp12

0xd706,	// (0x0000ecdf) clock_digital_number_pane_cp13

0xd70e,	// (0x0000ece7) clock_digital_separator_pane_cp10

0x07d6,	// (0x00001daf) popup_clock_digital_analogue_window_cp2_g1

0x07d6,	// (0x00001daf) popup_clock_digital_analogue_window_cp2_g2

0xd716,	// (0x0000ecef) popup_clock_digital_analogue_window_cp2_g3

0x07d6,	// (0x00001daf) popup_clock_digital_analogue_window_cp2_g4

0xd716,	// (0x0000ecef) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd29,	// (0x00011302) popup_clock_digital_analogue_window_cp2_g

0xd71e,	// (0x0000ecf7) popup_clock_digital_analogue_window_cp2_t1

0xd72c,	// (0x0000ed05) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd34,	// (0x0001130d) popup_clock_digital_analogue_window_cp2_t

0x51d9,	// (0x000067b2) clock_digital_number_pane_cp10_g1

0x51d9,	// (0x000067b2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1c,	// (0x000110f5) clock_digital_number_pane_cp10_g

0x51d9,	// (0x000067b2) clock_digital_separator_pane_cp10_g1

0x51d9,	// (0x000067b2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1c,	// (0x000110f5) clock_digital_separator_pane_cp10_g

0x736e,	// (0x00008947) uniindi_top_pane_g3

0x737f,	// (0x00008958) uniindi_top_pane_g4

0x7b54,	// (0x0000912d) vkb2_row_keypad_pane_ParamLimits

0x7b54,	// (0x0000912d) vkb2_row_keypad_pane

0x7e4b,	// (0x00009424) vkb2_cell_t_keypad_pane_ParamLimits

0x7e4b,	// (0x00009424) vkb2_cell_t_keypad_pane

0x7e5b,	// (0x00009434) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7e5b,	// (0x00009434) vkb2_cell_t_keypad_pane_cp08

0x7e70,	// (0x00009449) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7e70,	// (0x00009449) vkb2_cell_t_keypad_pane_cp09

0x7e84,	// (0x0000945d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7e84,	// (0x0000945d) vkb2_cell_t_keypad_pane_cp01

0x7e95,	// (0x0000946e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7e95,	// (0x0000946e) vkb2_cell_t_keypad_pane_cp02

0x7ea6,	// (0x0000947f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7ea6,	// (0x0000947f) vkb2_cell_t_keypad_pane_cp03

0x7eb7,	// (0x00009490) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7eb7,	// (0x00009490) vkb2_cell_t_keypad_pane_cp04

0x7ec8,	// (0x000094a1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7ec8,	// (0x000094a1) vkb2_cell_t_keypad_pane_cp05

0x7ed9,	// (0x000094b2) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7ed9,	// (0x000094b2) vkb2_cell_t_keypad_pane_cp06

0x7eec,	// (0x000094c5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7eec,	// (0x000094c5) vkb2_cell_t_keypad_pane_cp07

0x7f01,	// (0x000094da) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7f01,	// (0x000094da) vkb2_cell_t_keypad_pane_cp10

0x567e,	// (0x00006c57) vkb2_cell_t_keypad_pane_g1

0x7f16,	// (0x000094ef) vkb2_cell_t_keypad_pane_t1

0xea42,	// (0x0001001b) popup_grid_graphic2_window

0xddcb,	// (0x0000f3a4) aid_size_cell_graphic2_ParamLimits

0xddcb,	// (0x0000f3a4) aid_size_cell_graphic2

0xde09,	// (0x0000f3e2) bg_popup_window_pane_cp21_ParamLimits

0xde09,	// (0x0000f3e2) bg_popup_window_pane_cp21

0xde17,	// (0x0000f3f0) graphic2_pages_pane_ParamLimits

0xde17,	// (0x0000f3f0) graphic2_pages_pane

0xde6f,	// (0x0000f448) grid_graphic2_control_pane_ParamLimits

0xde6f,	// (0x0000f448) grid_graphic2_control_pane

0xdeb7,	// (0x0000f490) grid_graphic2_pane_ParamLimits

0xdeb7,	// (0x0000f490) grid_graphic2_pane

0xdf42,	// (0x0000f51b) cell_graphic2_pane

0xea42,	// (0x0001001b) main_comp_mode_pane

0x6aa3,	// (0x0000807c) list_ai3_gene_pane_ParamLimits

0xd3b1,	// (0x0000e98a) bg_popup_window_pane_cp19_ParamLimits

0x6eda,	// (0x000084b3) bg_touch_area_indi_pane_ParamLimits

0x6eda,	// (0x000084b3) bg_touch_area_indi_pane

0x6ef0,	// (0x000084c9) bg_touch_area_indi_pane_cp01_ParamLimits

0x6ef0,	// (0x000084c9) bg_touch_area_indi_pane_cp01

0x6f06,	// (0x000084df) bg_touch_area_indi_pane_cp02_ParamLimits

0x6f06,	// (0x000084df) bg_touch_area_indi_pane_cp02

0x6f20,	// (0x000084f9) bg_touch_area_indi_pane_cp03_ParamLimits

0x6f20,	// (0x000084f9) bg_touch_area_indi_pane_cp03

0x6f3a,	// (0x00008513) popup_slider_window_g1_ParamLimits

0x6f56,	// (0x0000852f) popup_slider_window_g2_ParamLimits

0x6f72,	// (0x0000854b) popup_slider_window_g3_ParamLimits

0xfcbe,	// (0x00011297) popup_slider_window_g_ParamLimits

0x6fd8,	// (0x000085b1) popup_slider_window_t1_ParamLimits

0x704c,	// (0x00008625) small_volume_slider_vertical_pane_ParamLimits

0xdf42,	// (0x0000f51b) cell_graphic2_pane_ParamLimits

0xdfa4,	// (0x0000f57d) bg_button_pane_cp10_ParamLimits

0xdfa4,	// (0x0000f57d) bg_button_pane_cp10

0xdfb7,	// (0x0000f590) bg_button_pane_cp11_ParamLimits

0xdfb7,	// (0x0000f590) bg_button_pane_cp11

0xdfca,	// (0x0000f5a3) graphic2_pages_pane_g1_ParamLimits

0xdfca,	// (0x0000f5a3) graphic2_pages_pane_g1

0xdfe5,	// (0x0000f5be) graphic2_pages_pane_g2_ParamLimits

0xdfe5,	// (0x0000f5be) graphic2_pages_pane_g2

0x0001,

0xfd82,	// (0x0001135b) graphic2_pages_pane_g_ParamLimits

0xfd82,	// (0x0001135b) graphic2_pages_pane_g

0xdffd,	// (0x0000f5d6) graphic2_pages_pane_t1_ParamLimits

0xdffd,	// (0x0000f5d6) graphic2_pages_pane_t1

0xe015,	// (0x0000f5ee) cell_graphic2_control_pane_ParamLimits

0xe015,	// (0x0000f5ee) cell_graphic2_control_pane

0xe043,	// (0x0000f61c) cell_graphic2_pane_g1_ParamLimits

0xe043,	// (0x0000f61c) cell_graphic2_pane_g1

0x54a0,	// (0x00006a79) cell_graphic2_pane_g2_ParamLimits

0x54a0,	// (0x00006a79) cell_graphic2_pane_g2

0xe050,	// (0x0000f629) cell_graphic2_pane_g3_ParamLimits

0xe050,	// (0x0000f629) cell_graphic2_pane_g3

0x54ad,	// (0x00006a86) cell_graphic2_pane_g4_ParamLimits

0x54ad,	// (0x00006a86) cell_graphic2_pane_g4

0xe05d,	// (0x0000f636) cell_graphic2_pane_g5_ParamLimits

0xe05d,	// (0x0000f636) cell_graphic2_pane_g5

0x0004,

0xfd87,	// (0x00011360) cell_graphic2_pane_g_ParamLimits

0xfd87,	// (0x00011360) cell_graphic2_pane_g

0xe079,	// (0x0000f652) cell_graphic2_pane_t1_ParamLimits

0xe079,	// (0x0000f652) cell_graphic2_pane_t1

0x3236,	// (0x0000480f) grid_highlight_pane_cp11_ParamLimits

0x3236,	// (0x0000480f) grid_highlight_pane_cp11

0xee55,	// (0x0001042e) bg_button_pane_cp05

0xe0c2,	// (0x0000f69b) cell_graphic2_control_pane_g1

0x51d9,	// (0x000067b2) bg_touch_area_indi_pane_g1

0x81f9,	// (0x000097d2) aid_cmod_rocker_key_size

0x8203,	// (0x000097dc) aid_cmode_itu_key_size

0x820d,	// (0x000097e6) main_cmode_video_pane

0x8217,	// (0x000097f0) main_comp_mode_itu_pane

0x8223,	// (0x000097fc) main_comp_mode_rocker_pane

0x822f,	// (0x00009808) cell_cmode_rocker_pane_ParamLimits

0x822f,	// (0x00009808) cell_cmode_rocker_pane

0x8243,	// (0x0000981c) cell_cmode_itu_pane_ParamLimits

0x8243,	// (0x0000981c) cell_cmode_itu_pane

0xf3f7,	// (0x000109d0) bg_button_pane_cp06_ParamLimits

0xf3f7,	// (0x000109d0) bg_button_pane_cp06

0x567e,	// (0x00006c57) cell_cmode_rocker_pane_g1_ParamLimits

0x567e,	// (0x00006c57) cell_cmode_rocker_pane_g1

0x71c6,	// (0x0000879f) cell_cmode_rocker_pane_g2_ParamLimits

0x71c6,	// (0x0000879f) cell_cmode_rocker_pane_g2

0x0001,

0xfd97,	// (0x00011370) cell_cmode_rocker_pane_g_ParamLimits

0xfd97,	// (0x00011370) cell_cmode_rocker_pane_g

0xea42,	// (0x0001001b) bg_button_pane_cp07

0x825a,	// (0x00009833) cell_cmode_itu_pane_g1

0x8263,	// (0x0000983c) cell_cmode_itu_pane_t1

0x8271,	// (0x0000984a) cell_cmode_itu_pane_t2

0x0001,

0xfd9c,	// (0x00011375) cell_cmode_itu_pane_t

0x73f3,	// (0x000089cc) aid_touch_ctrl_left

0x73fb,	// (0x000089d4) aid_touch_ctrl_right

0xea42,	// (0x0001001b) compa_mode_pane

0xe0ea,	// (0x0000f6c3) aid_cmod_rocker_key_size_cp

0xe0f4,	// (0x0000f6cd) aid_cmode_itu_key_size_cp

0x8293,	// (0x0000986c) compa_mode_pane_g1

0x829b,	// (0x00009874) compa_mode_pane_g2

0x82a3,	// (0x0000987c) compa_mode_pane_g3

0x0002,

0xfda1,	// (0x0001137a) compa_mode_pane_g

0xe0fe,	// (0x0000f6d7) main_comp_mode_itu_pane_cp

0xe106,	// (0x0000f6df) main_comp_mode_rocker_pane_cp

0xe10e,	// (0x0000f6e7) cell_cmode_itu_pane_cp_ParamLimits

0xe10e,	// (0x0000f6e7) cell_cmode_itu_pane_cp

0xe123,	// (0x0000f6fc) cell_cmode_rocker_pane_cp_ParamLimits

0xe123,	// (0x0000f6fc) cell_cmode_rocker_pane_cp

0xf3f7,	// (0x000109d0) bg_button_pane_cp06_cp_ParamLimits

0xf3f7,	// (0x000109d0) bg_button_pane_cp06_cp

0x567e,	// (0x00006c57) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x567e,	// (0x00006c57) cell_cmode_rocker_pane_g1_cp

0x51d9,	// (0x000067b2) cell_cmode_rocker_pane_g2_cp

0xea42,	// (0x0001001b) bg_button_pane_cp07_cp

0xe135,	// (0x0000f70e) cell_cmode_itu_pane_g1_cp

0xe13e,	// (0x0000f717) cell_cmode_itu_pane_t1_cp

0xe13e,	// (0x0000f717) cell_cmode_itu_pane_t2_cp

0xc747,	// (0x0000dd20) settings_code_pane_cp2

0xec7f,	// (0x00010258) bg_popup_window_pane_cp3_ParamLimits

0xf069,	// (0x00010642) heading_pane_cp3_ParamLimits

0xf078,	// (0x00010651) listscroll_popup_graphic_pane_ParamLimits

0x5248,	// (0x00006821) fep_hwr_aid_pane_ParamLimits

0x70c7,	// (0x000086a0) aid_touch_sctrl_top_ParamLimits

0x70d4,	// (0x000086ad) sctrl_sk_top_pane_g1_ParamLimits

0x567e,	// (0x00006c57) sctrl_sk_top_pane_g2_ParamLimits

0xfcd7,	// (0x000112b0) sctrl_sk_top_pane_g_ParamLimits

0x70e1,	// (0x000086ba) sctrl_sk_top_pane_t1_ParamLimits

0x70c7,	// (0x000086a0) aid_touch_sctrl_bottom_ParamLimits

0x70e1,	// (0x000086ba) sctrl_sk_bottom_pane_t1_ParamLimits

0x7338,	// (0x00008911) aid_area_touch_clock

0xdb9c,	// (0x0000f175) aid_vkb2_area_top_pane_cell_ParamLimits

0xdb9c,	// (0x0000f175) aid_vkb2_area_top_pane_cell

0xdc47,	// (0x0000f220) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xdc47,	// (0x0000f220) aid_vkb2_area_bottom_pane_cell

0x7c93,	// (0x0000926c) popup_char_count_window

0x82f9,	// (0x000098d2) popup_char_count_window_g1

0x8302,	// (0x000098db) popup_char_count_window_g2

0x830b,	// (0x000098e4) popup_char_count_window_g3

0x0002,

0xfda8,	// (0x00011381) popup_char_count_window_g

0x8314,	// (0x000098ed) popup_char_count_window_t1

0x78e5,	// (0x00008ebe) popup_fep_char_preview_window_ParamLimits

0x78e5,	// (0x00008ebe) popup_fep_char_preview_window

0xdbbc,	// (0x0000f195) vkb2_top_candi_pane_ParamLimits

0xdbbc,	// (0x0000f195) vkb2_top_candi_pane

0xe14c,	// (0x0000f725) cell_vkb2_top_candi_pane_ParamLimits

0xe14c,	// (0x0000f725) cell_vkb2_top_candi_pane

0x2a64,	// (0x0000403d) bg_popup_fep_char_preview_window_ParamLimits

0x2a64,	// (0x0000403d) bg_popup_fep_char_preview_window

0x8373,	// (0x0000994c) popup_fep_char_preview_window_t1_ParamLimits

0x8373,	// (0x0000994c) popup_fep_char_preview_window_t1

0x83ad,	// (0x00009986) bg_popup_fep_char_preview_window_g1

0x83b5,	// (0x0000998e) bg_popup_fep_char_preview_window_g2

0x83bd,	// (0x00009996) bg_popup_fep_char_preview_window_g3

0x83c5,	// (0x0000999e) bg_popup_fep_char_preview_window_g4

0x83cd,	// (0x000099a6) bg_popup_fep_char_preview_window_g5

0x83d5,	// (0x000099ae) bg_popup_fep_char_preview_window_g6

0x83dd,	// (0x000099b6) bg_popup_fep_char_preview_window_g7

0x83e5,	// (0x000099be) bg_popup_fep_char_preview_window_g8

0x83ed,	// (0x000099c6) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdaf,	// (0x00011388) bg_popup_fep_char_preview_window_g

0x567e,	// (0x00006c57) cell_vkb2_top_candi_pane_g1_ParamLimits

0x567e,	// (0x00006c57) cell_vkb2_top_candi_pane_g1

0x5a13,	// (0x00006fec) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5a13,	// (0x00006fec) cell_vkb2_top_candi_pane_g2

0x5a34,	// (0x0000700d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5a34,	// (0x0000700d) cell_vkb2_top_candi_pane_g3

0x83fd,	// (0x000099d6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x83fd,	// (0x000099d6) cell_vkb2_top_candi_pane_g4

0x841e,	// (0x000099f7) cell_vkb2_top_candi_pane_g5_ParamLimits

0x841e,	// (0x000099f7) cell_vkb2_top_candi_pane_g5

0x71c6,	// (0x0000879f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x71c6,	// (0x0000879f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc4,	// (0x0001139d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc4,	// (0x0001139d) cell_vkb2_top_candi_pane_g

0x843f,	// (0x00009a18) cell_vkb2_top_candi_pane_t1

0x3985,	// (0x00004f5e) aid_size_touch_slider_mark_ParamLimits

0x3985,	// (0x00004f5e) aid_size_touch_slider_mark

0xde53,	// (0x0000f42c) grid_graphic2_catg_pane_ParamLimits

0xde53,	// (0x0000f42c) grid_graphic2_catg_pane

0xdf11,	// (0x0000f4ea) popup_grid_graphic2_window_t1_ParamLimits

0xdf11,	// (0x0000f4ea) popup_grid_graphic2_window_t1

0xdf27,	// (0x0000f500) popup_grid_graphic2_window_t2_ParamLimits

0xdf27,	// (0x0000f500) popup_grid_graphic2_window_t2

0x0001,

0xfd7d,	// (0x00011356) popup_grid_graphic2_window_t_ParamLimits

0xfd7d,	// (0x00011356) popup_grid_graphic2_window_t

0xee55,	// (0x0001042e) bg_button_pane_cp05_ParamLimits

0xe0c2,	// (0x0000f69b) cell_graphic2_control_pane_g1_ParamLimits

0xe1be,	// (0x0000f797) cell_graphic2_catg_pane_ParamLimits

0xe1be,	// (0x0000f797) cell_graphic2_catg_pane

0xea42,	// (0x0001001b) bg_button_pane_cp12

0xe1d0,	// (0x0000f7a9) cell_graphic2_catg_pane_g1

0x7304,	// (0x000088dd) cell_tb_ext_pane_t1_ParamLimits

0x7d31,	// (0x0000930a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7d31,	// (0x0000930a) vkb2_top_cell_right_narrow_pane

0x7d49,	// (0x00009322) vkb2_top_cell_right_wide_pane_ParamLimits

0x7d49,	// (0x00009322) vkb2_top_cell_right_wide_pane

0x523a,	// (0x00006813) bg_vkb2_func_pane_ParamLimits

0x523a,	// (0x00006813) bg_vkb2_func_pane

0x7dba,	// (0x00009393) vkb2_top_cell_left_pane_g1_ParamLimits

0x523a,	// (0x00006813) bg_vkb2_fuc_pane_cp03_ParamLimits

0x523a,	// (0x00006813) bg_vkb2_fuc_pane_cp03

0x7e2f,	// (0x00009408) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2222,	// (0x000037fb) bg_vkb2_func_pane_g1

0x222a,	// (0x00003803) bg_vkb2_func_pane_g2

0x223a,	// (0x00003813) bg_vkb2_func_pane_g3

0x2232,	// (0x0000380b) bg_vkb2_func_pane_g4

0x2242,	// (0x0000381b) bg_vkb2_func_pane_g5

0x224a,	// (0x00003823) bg_vkb2_func_pane_g6

0x2252,	// (0x0000382b) bg_vkb2_func_pane_g7

0x225a,	// (0x00003833) bg_vkb2_func_pane_g8

0x221a,	// (0x000037f3) bg_vkb2_func_pane_g9

0x0008,

0xfdd1,	// (0x000113aa) bg_vkb2_func_pane_g

0x523a,	// (0x00006813) bg_vkb2_fuc_pane_cp01_ParamLimits

0x523a,	// (0x00006813) bg_vkb2_fuc_pane_cp01

0x7dba,	// (0x00009393) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7dba,	// (0x00009393) vkb2_top_cell_right_wide_pane_g1

0x523a,	// (0x00006813) bg_vkb2_fuc_pane_cp02_ParamLimits

0x523a,	// (0x00006813) bg_vkb2_fuc_pane_cp02

0x7e2f,	// (0x00009408) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7e2f,	// (0x00009408) vkb2_top_cell_right_narrow_pane_g1

0xd2f3,	// (0x0000e8cc) aid_touch_area_decrease_ParamLimits

0xd2f3,	// (0x0000e8cc) aid_touch_area_decrease

0xd32d,	// (0x0000e906) aid_touch_area_increase_ParamLimits

0xd32d,	// (0x0000e906) aid_touch_area_increase

0xd355,	// (0x0000e92e) aid_touch_area_mute_ParamLimits

0xd355,	// (0x0000e92e) aid_touch_area_mute

0xd37d,	// (0x0000e956) aid_touch_area_slider_ParamLimits

0xd37d,	// (0x0000e956) aid_touch_area_slider

0xd3bd,	// (0x0000e996) popup_slider_window_g4_ParamLimits

0xd3bd,	// (0x0000e996) popup_slider_window_g4

0xd3e5,	// (0x0000e9be) popup_slider_window_g5_ParamLimits

0xd3e5,	// (0x0000e9be) popup_slider_window_g5

0xd419,	// (0x0000e9f2) popup_slider_window_g6_ParamLimits

0xd419,	// (0x0000e9f2) popup_slider_window_g6

0x7006,	// (0x000085df) popup_slider_window_t2_ParamLimits

0x7006,	// (0x000085df) popup_slider_window_t2

0x0001,

0xfccb,	// (0x000112a4) popup_slider_window_t_ParamLimits

0xfccb,	// (0x000112a4) popup_slider_window_t

0xd435,	// (0x0000ea0e) slider_pane_ParamLimits

0xd435,	// (0x0000ea0e) slider_pane

0x8478,	// (0x00009a51) slider_pane_g1_ParamLimits

0x8478,	// (0x00009a51) slider_pane_g1

0x848c,	// (0x00009a65) slider_pane_g2_ParamLimits

0x848c,	// (0x00009a65) slider_pane_g2

0x84a2,	// (0x00009a7b) slider_pane_g3_ParamLimits

0x84a2,	// (0x00009a7b) slider_pane_g3

0x0003,

0xfde4,	// (0x000113bd) slider_pane_g_ParamLimits

0xfde4,	// (0x000113bd) slider_pane_g

0xbcc5,	// (0x0000d29e) popup_tb_float_extension_window_ParamLimits

0xbcc5,	// (0x0000d29e) popup_tb_float_extension_window

0x84ce,	// (0x00009aa7) aid_size_cell_tb_float_ext

0xea42,	// (0x0001001b) bg_popup_sub_window_cp28

0x84da,	// (0x00009ab3) grid_tb_float_ext_pane

0x84e6,	// (0x00009abf) cell_tb_float_ext_pane_ParamLimits

0x84e6,	// (0x00009abf) cell_tb_float_ext_pane

0x8502,	// (0x00009adb) cell_tb_float_ext_pane_g1

0x850b,	// (0x00009ae4) grid_highlight_pane_cp12

0xcb69,	// (0x0000e142) cell_last_hwr_side_pane_ParamLimits

0xcb69,	// (0x0000e142) cell_last_hwr_side_pane

0x51d9,	// (0x000067b2) cell_last_hwr_side_pane_g1

0x8514,	// (0x00009aed) cell_last_hwr_side_pane_g2

0x0001,

0xfded,	// (0x000113c6) cell_last_hwr_side_pane_g

0xdd23,	// (0x0000f2fc) vkb2_area_bottom_space_btn_pane_ParamLimits

0xdd23,	// (0x0000f2fc) vkb2_area_bottom_space_btn_pane

0x567e,	// (0x00006c57) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7f16,	// (0x000094ef) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x843f,	// (0x00009a18) cell_vkb2_top_candi_pane_t1_ParamLimits

0x851d,	// (0x00009af6) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x851d,	// (0x00009af6) vkb2_area_bottom_space_btn_pane_g1

0x8557,	// (0x00009b30) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8557,	// (0x00009b30) vkb2_area_bottom_space_btn_pane_g2

0x858d,	// (0x00009b66) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x858d,	// (0x00009b66) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf2,	// (0x000113cb) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf2,	// (0x000113cb) vkb2_area_bottom_space_btn_pane_g

0x52ff,	// (0x000068d8) cel_fep_hwr_func_pane_ParamLimits

0x52ff,	// (0x000068d8) cel_fep_hwr_func_pane

0xcb3e,	// (0x0000e117) cell_hwr_side_button_pane_ParamLimits

0xcb3e,	// (0x0000e117) cell_hwr_side_button_pane

0x7338,	// (0x00008911) aid_area_touch_clock_ParamLimits

0xee55,	// (0x0001042e) bg_uniindi_top_pane_ParamLimits

0x734c,	// (0x00008925) uniindi_top_pane_g1_ParamLimits

0x7362,	// (0x0000893b) uniindi_top_pane_g2_ParamLimits

0x736e,	// (0x00008947) uniindi_top_pane_g3_ParamLimits

0x737f,	// (0x00008958) uniindi_top_pane_g4_ParamLimits

0xfd03,	// (0x000112dc) uniindi_top_pane_g_ParamLimits

0x738c,	// (0x00008965) uniindi_top_pane_t1_ParamLimits

0xee55,	// (0x0001042e) bg_vkb2_func_pane_cp01_ParamLimits

0xee55,	// (0x0001042e) bg_vkb2_func_pane_cp01

0x85d7,	// (0x00009bb0) cel_fep_hwr_func_pane_g1_ParamLimits

0x85d7,	// (0x00009bb0) cel_fep_hwr_func_pane_g1

0xee55,	// (0x0001042e) bg_vkb2_func_pane_cp02_ParamLimits

0xee55,	// (0x0001042e) bg_vkb2_func_pane_cp02

0x85d7,	// (0x00009bb0) cell_hwr_side_button_pane_g1_ParamLimits

0x85d7,	// (0x00009bb0) cell_hwr_side_button_pane_g1

0x1fed,	// (0x000035c6) status_pane_g4_ParamLimits

0x1fed,	// (0x000035c6) status_pane_g4

0x2007,	// (0x000035e0) status_pane_t1

0x4f8c,	// (0x00006565) form2_midp_gauge_slider_cont_pane

0x4f94,	// (0x0000656d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xca6f,	// (0x0000e048) form2_midp_gauge_slider_pane_t2_ParamLimits

0xca81,	// (0x0000e05a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacf,	// (0x000110a8) form2_midp_gauge_slider_pane_t_ParamLimits

0x4fca,	// (0x000065a3) form2_midp_slider_pane_ParamLimits

0x78a5,	// (0x00008e7e) aid_size_cell_func_vkb2_ParamLimits

0x78a5,	// (0x00008e7e) aid_size_cell_func_vkb2

0x84ba,	// (0x00009a93) slider_pane_g4_ParamLimits

0x84ba,	// (0x00009a93) slider_pane_g4

0xe1d9,	// (0x0000f7b2) form2_midp_gauge_slider_pane_t2_cp01

0xe1e7,	// (0x0000f7c0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe1e7,	// (0x0000f7c0) form2_midp_gauge_slider_pane_t3_cp01

0x8610,	// (0x00009be9) form2_midp_slider_pane_cp01

0xea42,	// (0x0001001b) navi_smil_pane

0x8644,	// (0x00009c1d) navi_smil_pane_g1

0x864c,	// (0x00009c25) navi_smil_pane_t1

0x8619,	// (0x00009bf2) form2_midp_slider_pane_g1

0x8622,	// (0x00009bfb) form2_midp_slider_pane_g2

0x862a,	// (0x00009c03) form2_midp_slider_pane_g3

0x8619,	// (0x00009bf2) form2_midp_slider_pane_g4

0xe204,	// (0x0000f7dd) form2_midp_slider_pane_g5

0x0004,

0xfdfb,	// (0x000113d4) form2_midp_slider_pane_g

0x85c7,	// (0x00009ba0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x85c7,	// (0x00009ba0) vkb2_area_bottom_space_btn_pane_g4

0xbeac,	// (0x0000d485) lc0_navi_pane_ParamLimits

0xbeac,	// (0x0000d485) lc0_navi_pane

0xbf1c,	// (0x0000d4f5) lc0_stat_indi_pane_ParamLimits

0xbf1c,	// (0x0000d4f5) lc0_stat_indi_pane

0xbf31,	// (0x0000d50a) ls0_title_pane_ParamLimits

0xbf31,	// (0x0000d50a) ls0_title_pane

0xf3f7,	// (0x000109d0) bg_popup_sub_pane_cp14_ParamLimits

0x731f,	// (0x000088f8) list_uniindi_pane_ParamLimits

0x732b,	// (0x00008904) uniindi_top_pane_ParamLimits

0x73cb,	// (0x000089a4) list_single_uniindi_pane_g1_ParamLimits

0x73de,	// (0x000089b7) list_single_uniindi_pane_t1_ParamLimits

0xe20d,	// (0x0000f7e6) lc0_stat_clock_pane_ParamLimits

0xe20d,	// (0x0000f7e6) lc0_stat_clock_pane

0xe21a,	// (0x0000f7f3) lc0_stat_indi_pane_g1_ParamLimits

0xe21a,	// (0x0000f7f3) lc0_stat_indi_pane_g1

0xe227,	// (0x0000f800) lc0_stat_indi_pane_g2_ParamLimits

0xe227,	// (0x0000f800) lc0_stat_indi_pane_g2

0x0001,

0xfe06,	// (0x000113df) lc0_stat_indi_pane_g_ParamLimits

0xfe06,	// (0x000113df) lc0_stat_indi_pane_g

0xe234,	// (0x0000f80d) lc0_uni_indicator_pane_ParamLimits

0xe234,	// (0x0000f80d) lc0_uni_indicator_pane

0xe241,	// (0x0000f81a) ls0_title_pane_g1_ParamLimits

0xe241,	// (0x0000f81a) ls0_title_pane_g1

0xe255,	// (0x0000f82e) ls0_title_pane_t1_ParamLimits

0xe255,	// (0x0000f82e) ls0_title_pane_t1

0xe283,	// (0x0000f85c) lc0_uni_indicator_pane_g1_ParamLimits

0xe283,	// (0x0000f85c) lc0_uni_indicator_pane_g1

0x86eb,	// (0x00009cc4) lc0_stat_clock_pane_t1

0xea42,	// (0x0001001b) main_ai5_pane

0x86f9,	// (0x00009cd2) ai5_sk_pane_ParamLimits

0x86f9,	// (0x00009cd2) ai5_sk_pane

0xe2a2,	// (0x0000f87b) cell_ai5_widget_pane_ParamLimits

0xe2a2,	// (0x0000f87b) cell_ai5_widget_pane

0xe311,	// (0x0000f8ea) aid_size_cell_widget_grid

0x87b7,	// (0x00009d90) bg_ai5_widget_pane_ParamLimits

0x87b7,	// (0x00009d90) bg_ai5_widget_pane

0xe345,	// (0x0000f91e) cell_ai5_widget_pane_g2

0xe359,	// (0x0000f932) cell_ai5_widget_pane_g3

0xe373,	// (0x0000f94c) cell_ai5_widget_pane_g4

0xe383,	// (0x0000f95c) cell_ai5_widget_pane_g5

0xe393,	// (0x0000f96c) cell_ai5_widget_pane_g6

0xe39f,	// (0x0000f978) cell_ai5_widget_pane_g7

0xe3c3,	// (0x0000f99c) cell_ai5_widget_pane_t1_ParamLimits

0xe3c3,	// (0x0000f99c) cell_ai5_widget_pane_t1

0x8916,	// (0x00009eef) cell_ai5_widget_pane_t2_ParamLimits

0x8916,	// (0x00009eef) cell_ai5_widget_pane_t2

0x892e,	// (0x00009f07) cell_ai5_widget_pane_t3_ParamLimits

0x892e,	// (0x00009f07) cell_ai5_widget_pane_t3

0xe3e0,	// (0x0000f9b9) cell_ai5_widget_pane_t4_ParamLimits

0xe3e0,	// (0x0000f9b9) cell_ai5_widget_pane_t4

0xe406,	// (0x0000f9df) cell_ai5_widget_pane_t5_ParamLimits

0xe406,	// (0x0000f9df) cell_ai5_widget_pane_t5

0x898c,	// (0x00009f65) cell_ai5_widget_pane_t6_ParamLimits

0x898c,	// (0x00009f65) cell_ai5_widget_pane_t6

0x899e,	// (0x00009f77) cell_ai5_widget_pane_t7_ParamLimits

0x899e,	// (0x00009f77) cell_ai5_widget_pane_t7

0x89bd,	// (0x00009f96) cell_ai5_widget_pane_t8_ParamLimits

0x89bd,	// (0x00009f96) cell_ai5_widget_pane_t8

0x000b,

0xfe26,	// (0x000113ff) cell_ai5_widget_pane_t_ParamLimits

0xfe26,	// (0x000113ff) cell_ai5_widget_pane_t

0xe498,	// (0x0000fa71) grid_ai5_widget_pane

0xf3f7,	// (0x000109d0) highlight_cell_ai5_widget_pane_ParamLimits

0xf3f7,	// (0x000109d0) highlight_cell_ai5_widget_pane

0xe4a6,	// (0x0000fa7f) ai5_sk_left_pane

0xe4b0,	// (0x0000fa89) ai5_sk_middle_pane

0xe4ba,	// (0x0000fa93) ai5_sk_right_pane

0x8a6d,	// (0x0000a046) bg_ai5_widget_pane_g1_ParamLimits

0x8a6d,	// (0x0000a046) bg_ai5_widget_pane_g1

0x8a79,	// (0x0000a052) bg_ai5_widget_pane_g2_ParamLimits

0x8a79,	// (0x0000a052) bg_ai5_widget_pane_g2

0x8a85,	// (0x0000a05e) bg_ai5_widget_pane_g3_ParamLimits

0x8a85,	// (0x0000a05e) bg_ai5_widget_pane_g3

0x8a91,	// (0x0000a06a) bg_ai5_widget_pane_g4_ParamLimits

0x8a91,	// (0x0000a06a) bg_ai5_widget_pane_g4

0x8a9d,	// (0x0000a076) bg_ai5_widget_pane_g5_ParamLimits

0x8a9d,	// (0x0000a076) bg_ai5_widget_pane_g5

0x8aa9,	// (0x0000a082) bg_ai5_widget_pane_g6_ParamLimits

0x8aa9,	// (0x0000a082) bg_ai5_widget_pane_g6

0x8ab5,	// (0x0000a08e) bg_ai5_widget_pane_g7_ParamLimits

0x8ab5,	// (0x0000a08e) bg_ai5_widget_pane_g7

0x8ac1,	// (0x0000a09a) bg_ai5_widget_pane_g8_ParamLimits

0x8ac1,	// (0x0000a09a) bg_ai5_widget_pane_g8

0x8acd,	// (0x0000a0a6) bg_ai5_widget_pane_g9_ParamLimits

0x8acd,	// (0x0000a0a6) bg_ai5_widget_pane_g9

0x0008,

0xfe3f,	// (0x00011418) bg_ai5_widget_pane_g_ParamLimits

0xfe3f,	// (0x00011418) bg_ai5_widget_pane_g

0xe4f0,	// (0x0000fac9) cell_shortcut_ai5_widget_pane_ParamLimits

0xe4f0,	// (0x0000fac9) cell_shortcut_ai5_widget_pane

0x1099,	// (0x00002672) bg_cell_shortcut_ai5_widget_pane

0x8b18,	// (0x0000a0f1) cell_grid_ai5_widget_pane_g1

0x1099,	// (0x00002672) highlight_cell_shortcut_ai5_widget_pane

0x222a,	// (0x00003803) ai5_sk_left_pane_g1

0x8b21,	// (0x0000a0fa) ai5_sk_left_pane_g2

0x8b29,	// (0x0000a102) ai5_sk_left_pane_g3

0x8b31,	// (0x0000a10a) ai5_sk_left_pane_g4

0x0003,

0xfe52,	// (0x0001142b) ai5_sk_left_pane_g

0x8b39,	// (0x0000a112) ai5_sk_left_pane_t1

0x2222,	// (0x000037fb) ai5_sk_right_pane_g1

0x8b47,	// (0x0000a120) ai5_sk_right_pane_g2

0x8b4f,	// (0x0000a128) ai5_sk_right_pane_g3

0x8b57,	// (0x0000a130) ai5_sk_right_pane_g4

0x0003,

0xfe5b,	// (0x00011434) ai5_sk_right_pane_g

0x8b5f,	// (0x0000a138) ai5_sk_right_pane_t1

0x2222,	// (0x000037fb) ai5_sk_middle_pane_g1

0x222a,	// (0x00003803) ai5_sk_middle_pane_g2

0x2242,	// (0x0000381b) ai5_sk_middle_pane_g3

0x8b4f,	// (0x0000a128) ai5_sk_middle_pane_g4

0x8b29,	// (0x0000a102) ai5_sk_middle_pane_g5

0x8b6d,	// (0x0000a146) ai5_sk_middle_pane_g6

0xe503,	// (0x0000fadc) ai5_sk_middle_pane_g7

0x0006,

0xfe64,	// (0x0001143d) ai5_sk_middle_pane_g

0xbd96,	// (0x0000d36f) aid_touch_area_size_lc0_ParamLimits

0xbd96,	// (0x0000d36f) aid_touch_area_size_lc0

0x5a55,	// (0x0000702e) cell_hwr_candidate_pane_t1_ParamLimits

0x1cb0,	// (0x00003289) aid_touch_navi_pane

0xc03c,	// (0x0000d615) status_dt_navi_pane_ParamLimits

0xc03c,	// (0x0000d615) status_dt_navi_pane

0xc054,	// (0x0000d62d) status_dt_sta_pane_ParamLimits

0xc054,	// (0x0000d62d) status_dt_sta_pane

0xe50b,	// (0x0000fae4) dt_sta_controll_pane

0xe518,	// (0x0000faf1) dt_sta_indi_pane

0xe525,	// (0x0000fafe) dt_sta_title_pane

0xee55,	// (0x0001042e) bg_dt_sta_indi_pane_ParamLimits

0xee55,	// (0x0001042e) bg_dt_sta_indi_pane

0xe537,	// (0x0000fb10) dt_sta_battery_pane

0xe53f,	// (0x0000fb18) dt_sta_indi_pane_g1

0xe548,	// (0x0000fb21) dt_sta_indi_pane_g2

0xe551,	// (0x0000fb2a) dt_sta_indi_pane_g3

0x0002,

0xfe73,	// (0x0001144c) dt_sta_indi_pane_g

0xe55a,	// (0x0000fb33) dt_sta_signal_pane

0xf3f7,	// (0x000109d0) bg_dt_sta_title_pane_ParamLimits

0xf3f7,	// (0x000109d0) bg_dt_sta_title_pane

0xe563,	// (0x0000fb3c) dt_sta_title_pane_g1

0xe56b,	// (0x0000fb44) dt_sta_title_pane_t1_ParamLimits

0xe56b,	// (0x0000fb44) dt_sta_title_pane_t1

0xea42,	// (0x0001001b) bg_dt_sta_control_pane

0xe580,	// (0x0000fb59) dt_sta_controll_pane_g1

0xe589,	// (0x0000fb62) bg_dt_sta_title_pane_g1

0xe592,	// (0x0000fb6b) bg_dt_sta_title_pane_g2

0xe59b,	// (0x0000fb74) bg_dt_sta_title_pane_g3

0x0002,

0xfe7a,	// (0x00011453) bg_dt_sta_title_pane_g

0x51d9,	// (0x000067b2) bg_dt_sta_indi_pane_g1

0x8c1b,	// (0x0000a1f4) dt_sta_signal_pane_g1

0x8c23,	// (0x0000a1fc) dt_sta_signal_pane_g2

0x0001,

0xfe81,	// (0x0001145a) dt_sta_signal_pane_g

0x8c2b,	// (0x0000a204) dt_sta_battery_pane_g1

0x8c34,	// (0x0000a20d) dt_sta_battery_pane_t1

0x51d9,	// (0x000067b2) bg_dt_sta_control_pane_g1

0x09b9,	// (0x00001f92) fep_china_uni_eep_pane

0x09c1,	// (0x00001f9a) fep_china_uni_entry_pane_ParamLimits

0x09d1,	// (0x00001faa) popup_fep_china_uni_window_g1_ParamLimits

0x09e1,	// (0x00001fba) popup_fep_china_uni_window_g2_ParamLimits

0x09e1,	// (0x00001fba) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x00010ccc) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x00010ccc) popup_fep_china_uni_window_g

0x8c43,	// (0x0000a21c) fep_china_uni_eep_pane_g1

0x8c4b,	// (0x0000a224) fep_china_uni_eep_pane_t1

0x863b,	// (0x00009c14) aid_touch_area_size_smil_player

0x1e04,	// (0x000033dd) lc0_clock_pane

0x1ffb,	// (0x000035d4) status_pane_g5_ParamLimits

0x1ffb,	// (0x000035d4) status_pane_g5

0xb7ed,	// (0x0000cdc6) popup_keymap_window

0x1fc1,	// (0x0000359a) status_icon_pane

0xe359,	// (0x0000f932) cell_ai5_widget_pane_g3_ParamLimits

0xe373,	// (0x0000f94c) cell_ai5_widget_pane_g4_ParamLimits

0xe383,	// (0x0000f95c) cell_ai5_widget_pane_g5_ParamLimits

0x8899,	// (0x00009e72) cell_ai5_widget_pane_g8_ParamLimits

0x8899,	// (0x00009e72) cell_ai5_widget_pane_g8

0x88ad,	// (0x00009e86) cell_ai5_widget_pane_g9_ParamLimits

0x88ad,	// (0x00009e86) cell_ai5_widget_pane_g9

0x88c1,	// (0x00009e9a) cell_ai5_widget_pane_g10_ParamLimits

0x88c1,	// (0x00009e9a) cell_ai5_widget_pane_g10

0x8c5a,	// (0x0000a233) status_icon_pane_g1

0xea42,	// (0x0001001b) bg_popup_sub_pane_cp13

0x8c62,	// (0x0000a23b) popup_keymap_window_t1

0xb4dc,	// (0x0000cab5) control_pane_g6_ParamLimits

0xb4dc,	// (0x0000cab5) control_pane_g6

0xb4e9,	// (0x0000cac2) control_pane_g7_ParamLimits

0xb4e9,	// (0x0000cac2) control_pane_g7

0xb4f6,	// (0x0000cacf) control_pane_g8_ParamLimits

0xb4f6,	// (0x0000cacf) control_pane_g8

0xe50b,	// (0x0000fae4) dt_sta_controll_pane_ParamLimits

0xe518,	// (0x0000faf1) dt_sta_indi_pane_ParamLimits

0xe525,	// (0x0000fafe) dt_sta_title_pane_ParamLimits

0xf2a6,	// (0x0001087f) aid_size_touch_scroll_bar_cale

0xebe7,	// (0x000101c0) popup_discreet_window_ParamLimits

0xebe7,	// (0x000101c0) popup_discreet_window

0xa5a4,	// (0x0000bb7d) popup_sk_window

0x2a64,	// (0x0000403d) bg_popup_sub_pane_cp28_ParamLimits

0x2a64,	// (0x0000403d) bg_popup_sub_pane_cp28

0x8c70,	// (0x0000a249) popup_discreet_window_g1_ParamLimits

0x8c70,	// (0x0000a249) popup_discreet_window_g1

0x8c90,	// (0x0000a269) popup_discreet_window_t1_ParamLimits

0x8c90,	// (0x0000a269) popup_discreet_window_t1

0x8cae,	// (0x0000a287) popup_discreet_window_t2_ParamLimits

0x8cae,	// (0x0000a287) popup_discreet_window_t2

0x0002,

0xfe86,	// (0x0001145f) popup_discreet_window_t_ParamLimits

0xfe86,	// (0x0001145f) popup_discreet_window_t

0x8d00,	// (0x0000a2d9) popup_sk_window_g1

0x8d0a,	// (0x0000a2e3) popup_sk_window_g2

0x0001,

0xfe8d,	// (0x00011466) popup_sk_window_g

0x8d12,	// (0x0000a2eb) popup_sk_window_t1

0x8d20,	// (0x0000a2f9) popup_sk_window_t1_copy1

0xe345,	// (0x0000f91e) cell_ai5_widget_pane_g2_ParamLimits

0xe426,	// (0x0000f9ff) cell_ai5_widget_pane_t9_ParamLimits

0xe426,	// (0x0000f9ff) cell_ai5_widget_pane_t9

0xea42,	// (0x0001001b) main_fep_fshwr2_pane

0xe5a4,	// (0x0000fb7d) aid_fshwr2_btn_pane

0xe5b8,	// (0x0000fb91) aid_fshwr2_syb_pane

0xe5cc,	// (0x0000fba5) aid_fshwr2_txt_pane

0xe5dc,	// (0x0000fbb5) fshwr2_func_candi_pane

0xe5fe,	// (0x0000fbd7) fshwr2_hwr_syb_pane

0xe622,	// (0x0000fbfb) fshwr2_icf_pane

0xea42,	// (0x0001001b) fshwr2_icf_bg_pane

0x8dba,	// (0x0000a393) fshwr2_icf_pane_t1_ParamLimits

0x8dba,	// (0x0000a393) fshwr2_icf_pane_t1

0x07d6,	// (0x00001daf) fshwr2_func_candi_pane_g1

0xe652,	// (0x0000fc2b) fshwr2_func_candi_row_pane_ParamLimits

0xe652,	// (0x0000fc2b) fshwr2_func_candi_row_pane

0xe679,	// (0x0000fc52) cell_fshwr2_syb_pane_ParamLimits

0xe679,	// (0x0000fc52) cell_fshwr2_syb_pane

0x85d7,	// (0x00009bb0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x85d7,	// (0x00009bb0) fshwr2_hwr_syb_pane_g1

0xea42,	// (0x0001001b) bg_popup_call_pane_cp01

0xe6a1,	// (0x0000fc7a) fshwr2_func_candi_cell_pane_ParamLimits

0xe6a1,	// (0x0000fc7a) fshwr2_func_candi_cell_pane

0x2844,	// (0x00003e1d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2844,	// (0x00003e1d) fshwr2_func_candi_cell_bg_pane

0xe6ec,	// (0x0000fcc5) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe6ec,	// (0x0000fcc5) fshwr2_func_candi_cell_pane_g1

0xe723,	// (0x0000fcfc) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe723,	// (0x0000fcfc) fshwr2_func_candi_cell_pane_t1

0xea42,	// (0x0001001b) bg_button_pane_cp08

0x15f7,	// (0x00002bd0) cell_fshwr2_syb_bg_pane

0xe73e,	// (0x0000fd17) cell_fshwr2_syb_bg_pane_g1

0xe752,	// (0x0000fd2b) cell_fshwr2_syb_bg_pane_t1

0xf3f7,	// (0x000109d0) main_tmo_pane

0xc54c,	// (0x0000db25) uni_indicator_pane_g1_ParamLimits

0xc562,	// (0x0000db3b) uni_indicator_pane_g2_ParamLimits

0xc578,	// (0x0000db51) uni_indicator_pane_g3_ParamLimits

0xc58b,	// (0x0000db64) uni_indicator_pane_g4_ParamLimits

0xc58b,	// (0x0000db64) uni_indicator_pane_g4

0x3747,	// (0x00004d20) uni_indicator_pane_g5_ParamLimits

0x3747,	// (0x00004d20) uni_indicator_pane_g5

0x3747,	// (0x00004d20) uni_indicator_pane_g6_ParamLimits

0x3747,	// (0x00004d20) uni_indicator_pane_g6

0xf8eb,	// (0x00010ec4) uni_indicator_pane_g_ParamLimits

0xd2c3,	// (0x0000e89c) popup_tmo_note_window_ParamLimits

0xd2c3,	// (0x0000e89c) popup_tmo_note_window

0xf3f7,	// (0x000109d0) fshwr2_bg_pane

0xe714,	// (0x0000fced) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe714,	// (0x0000fced) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe92,	// (0x0001146b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe92,	// (0x0001146b) fshwr2_func_candi_cell_pane_g

0x51d9,	// (0x000067b2) bg_popup_window_pane_cp01

0x8ec1,	// (0x0000a49a) bg_popup_window_pane_g1_cp01

0x8eca,	// (0x0000a4a3) bg_popup_window_pane_cp22_ParamLimits

0x8eca,	// (0x0000a4a3) bg_popup_window_pane_cp22

0x8ed8,	// (0x0000a4b1) listscroll_tmo_link_pane_ParamLimits

0x8ed8,	// (0x0000a4b1) listscroll_tmo_link_pane

0x8f18,	// (0x0000a4f1) popup_tmo_note_window_g1_ParamLimits

0x8f18,	// (0x0000a4f1) popup_tmo_note_window_g1

0x8f25,	// (0x0000a4fe) tmo_note_info_pane_ParamLimits

0x8f25,	// (0x0000a4fe) tmo_note_info_pane

0xe768,	// (0x0000fd41) list_tmo_note_info_pane_g1_ParamLimits

0xe768,	// (0x0000fd41) list_tmo_note_info_pane_g1

0x8f56,	// (0x0000a52f) list_tmo_note_info_pane_g2_ParamLimits

0x8f56,	// (0x0000a52f) list_tmo_note_info_pane_g2

0x0001,

0xfe97,	// (0x00011470) list_tmo_note_info_pane_g_ParamLimits

0xfe97,	// (0x00011470) list_tmo_note_info_pane_g

0x8f72,	// (0x0000a54b) list_tmo_note_info_text_pane_ParamLimits

0x8f72,	// (0x0000a54b) list_tmo_note_info_text_pane

0x8ff7,	// (0x0000a5d0) list_tmo_link_pane

0x9004,	// (0x0000a5dd) scroll_pane_cp20

0x9011,	// (0x0000a5ea) list_single_tmo_link_pane_ParamLimits

0x9011,	// (0x0000a5ea) list_single_tmo_link_pane

0x9021,	// (0x0000a5fa) list_single_tmo_link_pane_t1

0x902f,	// (0x0000a608) list_tmo_note_info_text_pane_t1_ParamLimits

0x902f,	// (0x0000a608) list_tmo_note_info_text_pane_t1

0xaf88,	// (0x0000c561) aid_size_touch_scroll_bar_cp01_ParamLimits

0xaf88,	// (0x0000c561) aid_size_touch_scroll_bar_cp01

0xaec8,	// (0x0000c4a1) aid_size_touch_slider_marker

0xa594,	// (0x0000bb6d) popup_settings_window_ParamLimits

0xa594,	// (0x0000bb6d) popup_settings_window

0x1655,	// (0x00002c2e) popup_candi_list_indi_window

0x1cb0,	// (0x00003289) aid_touch_navi_pane_ParamLimits

0x709b,	// (0x00008674) rs_clock_indi_pane

0x70a4,	// (0x0000867d) sctrl_sk_bottom_pane_ParamLimits

0x70b5,	// (0x0000868e) sctrl_sk_top_pane_ParamLimits

0x78ff,	// (0x00008ed8) popup_fep_tooltip_window

0xe311,	// (0x0000f8ea) aid_size_cell_widget_grid_ParamLimits

0xe330,	// (0x0000f909) cell_ai5_widget_pane_g1_ParamLimits

0xe330,	// (0x0000f909) cell_ai5_widget_pane_g1

0xe393,	// (0x0000f96c) cell_ai5_widget_pane_g6_ParamLimits

0xe39f,	// (0x0000f978) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0b,	// (0x000113e4) cell_ai5_widget_pane_g_ParamLimits

0xfe0b,	// (0x000113e4) cell_ai5_widget_pane_g

0xe455,	// (0x0000fa2e) cell_ai5_widget_pane_t10_ParamLimits

0xe455,	// (0x0000fa2e) cell_ai5_widget_pane_t10

0xe498,	// (0x0000fa71) grid_ai5_widget_pane_ParamLimits

0xe4c4,	// (0x0000fa9d) cell_contacts_ai5_widget_pane_ParamLimits

0xe4c4,	// (0x0000fa9d) cell_contacts_ai5_widget_pane

0x8cc3,	// (0x0000a29c) popup_discreet_window_t3_ParamLimits

0x8cc3,	// (0x0000a29c) popup_discreet_window_t3

0xe63e,	// (0x0000fc17) popup_fshwr2_char_preview_window_ParamLimits

0xe63e,	// (0x0000fc17) popup_fshwr2_char_preview_window

0xe77f,	// (0x0000fd58) tmo_note_info_pane_t1

0xe794,	// (0x0000fd6d) tmo_note_info_pane_t2

0xe7ad,	// (0x0000fd86) tmo_note_info_pane_t3

0x8fd3,	// (0x0000a5ac) tmo_note_info_pane_t4

0x8fe5,	// (0x0000a5be) tmo_note_info_pane_t5

0x0004,

0xfe9c,	// (0x00011475) tmo_note_info_pane_t

0x8ff7,	// (0x0000a5d0) list_tmo_link_pane_ParamLimits

0x9004,	// (0x0000a5dd) scroll_pane_cp20_ParamLimits

0xea42,	// (0x0001001b) bg_popup_fep_char_preview_window_cp01

0x9048,	// (0x0000a621) popup_fshwr2_char_preview_window_t1

0x9056,	// (0x0000a62f) popup_candi_list_indi_window_g1

0x905f,	// (0x0000a638) bg_cell_contacts_ai5_widget_pane

0x906b,	// (0x0000a644) cell_contacts_ai5_widget_pane_g1

0x9080,	// (0x0000a659) cell_contacts_ai5_widget_pane_g2

0x908c,	// (0x0000a665) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea7,	// (0x00011480) cell_contacts_ai5_widget_pane_g

0x9098,	// (0x0000a671) cell_contacts_ai5_widget_pane_t1

0xf3f7,	// (0x000109d0) highlight_cell_shortcut_ai5_widget_pane_cp01

0x910f,	// (0x0000a6e8) settings_container_pane

0x1099,	// (0x00002672) listscroll_set_pane_copy1

0x4583,	// (0x00005b5c) scroll_pane_cp121_copy1

0x911b,	// (0x0000a6f4) set_content_pane_copy1

0x9123,	// (0x0000a6fc) aid_height_set_list_copy1_ParamLimits

0x9123,	// (0x0000a6fc) aid_height_set_list_copy1

0x3a4b,	// (0x00005024) aid_size_parent_copy1_ParamLimits

0x3a4b,	// (0x00005024) aid_size_parent_copy1

0x912f,	// (0x0000a708) button_value_adjust_pane_cp6_copy1_ParamLimits

0x912f,	// (0x0000a708) button_value_adjust_pane_cp6_copy1

0x15f7,	// (0x00002bd0) list_highlight_pane_cp2_copy1_ParamLimits

0x15f7,	// (0x00002bd0) list_highlight_pane_cp2_copy1

0x9143,	// (0x0000a71c) list_set_pane_copy1_ParamLimits

0x9143,	// (0x0000a71c) list_set_pane_copy1

0x90aa,	// (0x0000a683) main_pane_set_t1_copy1_ParamLimits

0x90aa,	// (0x0000a683) main_pane_set_t1_copy1

0x90e4,	// (0x0000a6bd) main_pane_set_t2_copy1_ParamLimits

0x90e4,	// (0x0000a6bd) main_pane_set_t2_copy1

0x9204,	// (0x0000a7dd) main_pane_set_t3_copy1

0x9212,	// (0x0000a7eb) main_pane_set_t4_copy1

0x9103,	// (0x0000a6dc) set_content_pane_g1_copy1_ParamLimits

0x9103,	// (0x0000a6dc) set_content_pane_g1_copy1

0x9220,	// (0x0000a7f9) setting_code_pane_copy1

0x9228,	// (0x0000a801) setting_slider_graphic_pane_copy1

0x9228,	// (0x0000a801) setting_slider_pane_copy1

0x9230,	// (0x0000a809) setting_text_pane_copy1

0x9230,	// (0x0000a809) setting_volume_pane_copy1

0x9220,	// (0x0000a7f9) settings_code_pane_cp2_copy1

0x9238,	// (0x0000a811) settings_code_pane_cp_copy1_ParamLimits

0x9238,	// (0x0000a811) settings_code_pane_cp_copy1

0x924c,	// (0x0000a825) volume_set_pane_copy1

0x9258,	// (0x0000a831) volume_set_pane_g10_copy1

0x9264,	// (0x0000a83d) volume_set_pane_g1_copy1

0x926e,	// (0x0000a847) volume_set_pane_g2_copy1

0x9278,	// (0x0000a851) volume_set_pane_g3_copy1

0x9282,	// (0x0000a85b) volume_set_pane_g4_copy1

0x928c,	// (0x0000a865) volume_set_pane_g5_copy1

0x9296,	// (0x0000a86f) volume_set_pane_g6_copy1

0x92a0,	// (0x0000a879) volume_set_pane_g7_copy1

0x92aa,	// (0x0000a883) volume_set_pane_g8_copy1

0x92b4,	// (0x0000a88d) volume_set_pane_g9_copy1

0xec7f,	// (0x00010258) bg_set_opt_pane_cp_copy1_ParamLimits

0xec7f,	// (0x00010258) bg_set_opt_pane_cp_copy1

0x92c0,	// (0x0000a899) setting_slider_pane_t1_copy1_ParamLimits

0x92c0,	// (0x0000a899) setting_slider_pane_t1_copy1

0x92df,	// (0x0000a8b8) setting_slider_pane_t2_copy1_ParamLimits

0x92df,	// (0x0000a8b8) setting_slider_pane_t2_copy1

0x92f9,	// (0x0000a8d2) setting_slider_pane_t3_copy1_ParamLimits

0x92f9,	// (0x0000a8d2) setting_slider_pane_t3_copy1

0x9311,	// (0x0000a8ea) slider_set_pane_copy1_ParamLimits

0x9311,	// (0x0000a8ea) slider_set_pane_copy1

0xf4b2,	// (0x00010a8b) set_opt_bg_pane_g1_copy2

0xf4ba,	// (0x00010a93) set_opt_bg_pane_g2_copy2

0x9327,	// (0x0000a900) set_opt_bg_pane_g3_copy2

0xf4ca,	// (0x00010aa3) set_opt_bg_pane_g4_copy2

0xf4d2,	// (0x00010aab) set_opt_bg_pane_g5_copy2

0xf4da,	// (0x00010ab3) set_opt_bg_pane_g6_copy2

0x9331,	// (0x0000a90a) set_opt_bg_pane_g7_copy2

0x933b,	// (0x0000a914) set_opt_bg_pane_g8_copy2

0x9345,	// (0x0000a91e) set_opt_bg_pane_g9_copy2

0x934f,	// (0x0000a928) aid_size_touch_slider_mark_copy1_ParamLimits

0x934f,	// (0x0000a928) aid_size_touch_slider_mark_copy1

0x9363,	// (0x0000a93c) slider_set_pane_g1_copy1

0x936c,	// (0x0000a945) slider_set_pane_g2_copy1

0x39b2,	// (0x00004f8b) slider_set_pane_g3_copy1_ParamLimits

0x39b2,	// (0x00004f8b) slider_set_pane_g3_copy1

0x39c6,	// (0x00004f9f) slider_set_pane_g4_copy1_ParamLimits

0x39c6,	// (0x00004f9f) slider_set_pane_g4_copy1

0x39de,	// (0x00004fb7) slider_set_pane_g5_copy1_ParamLimits

0x39de,	// (0x00004fb7) slider_set_pane_g5_copy1

0x39b2,	// (0x00004f8b) slider_set_pane_g6_copy1_ParamLimits

0x39b2,	// (0x00004f8b) slider_set_pane_g6_copy1

0x9374,	// (0x0000a94d) slider_set_pane_g7_copy1_ParamLimits

0x9374,	// (0x0000a94d) slider_set_pane_g7_copy1

0xebc5,	// (0x0001019e) bg_set_opt_pane_cp2_copy1

0x938a,	// (0x0000a963) setting_slider_graphic_pane_g1_copy1

0x9393,	// (0x0000a96c) setting_slider_graphic_pane_t1_copy1

0x93a3,	// (0x0000a97c) setting_slider_graphic_pane_t2_copy1

0x93b3,	// (0x0000a98c) slider_set_pane_cp_copy1

0x93c3,	// (0x0000a99c) input_focus_pane_cp1_copy1

0x93cc,	// (0x0000a9a5) list_set_text_pane_copy1

0x93d4,	// (0x0000a9ad) setting_text_pane_g1_copy1

0xed2d,	// (0x00010306) set_text_pane_t1_copy1

0x93c3,	// (0x0000a99c) input_focus_pane_cp2_copy1

0x93d4,	// (0x0000a9ad) setting_code_pane_g1_copy1

0x93dd,	// (0x0000a9b6) setting_code_pane_t1_copy1

0x4388,	// (0x00005961) list_set_graphic_pane_copy1

0xebc5,	// (0x0001019e) bg_set_opt_pane_cp4_copy1

0x0d88,	// (0x00002361) list_set_graphic_pane_g1_copy1_ParamLimits

0x0d88,	// (0x00002361) list_set_graphic_pane_g1_copy1

0x93eb,	// (0x0000a9c4) list_set_graphic_pane_g2_copy1

0x0da0,	// (0x00002379) list_set_graphic_pane_t1_copy1_ParamLimits

0x0da0,	// (0x00002379) list_set_graphic_pane_t1_copy1

0x51d9,	// (0x000067b2) rs_clock_indi_pane_g1

0x93f3,	// (0x0000a9cc) rs_clock_indi_pane_t1

0x9401,	// (0x0000a9da) rs_indi_pane

0x9409,	// (0x0000a9e2) rs_indi_pane_g1

0x9412,	// (0x0000a9eb) rs_indi_pane_g2

0x941b,	// (0x0000a9f4) rs_indi_pane_g3

0x0002,

0xfeae,	// (0x00011487) rs_indi_pane_g

0x1099,	// (0x00002672) bg_popup_preview_window_pane_cp03

0x9424,	// (0x0000a9fd) popup_fep_tooltip_window_t1

0x644e,	// (0x00007a27) popup_note2_window_g2_ParamLimits

0x644e,	// (0x00007a27) popup_note2_window_g2

0x0001,

0xfc3b,	// (0x00011214) popup_note2_window_g_ParamLimits

0xfc3b,	// (0x00011214) popup_note2_window_g

0x6a69,	// (0x00008042) bg_popup_sub_pane_cp11_ParamLimits

0x6a76,	// (0x0000804f) cell_ai3_links_pane_g1_ParamLimits

0x6a8d,	// (0x00008066) cell_ai3_links_pane_t1

0xed2d,	// (0x00010306) set_text_pane_t1_copy1_ParamLimits

0xb2e6,	// (0x0000c8bf) cell_graphic_popup_pane_cp2_ParamLimits

0xb2e6,	// (0x0000c8bf) cell_graphic_popup_pane_cp2

0x9432,	// (0x0000aa0b) cell_graphic_popup_pane_g1_cp2

0xf0b9,	// (0x00010692) cell_graphic_popup_pane_g2_cp2

0x943a,	// (0x0000aa13) cell_graphic_popup_pane_g3_cp2

0x9442,	// (0x0000aa1b) cell_graphic_popup_pane_t2_cp2

0xf0ca,	// (0x000106a3) grid_highlight_pane_cp3_cp2

0x04dc,	// (0x00001ab5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf3f7,	// (0x000109d0) main_tmo_pane_ParamLimits

0xd2b7,	// (0x0000e890) popup_tmo_big_image_note_window

0xe31f,	// (0x0000f8f8) cell_ai5_widget_list_pane

0xe327,	// (0x0000f900) cell_ai5_widget_lrg_icon_pane

0xe77f,	// (0x0000fd58) tmo_note_info_pane_t1_ParamLimits

0xe794,	// (0x0000fd6d) tmo_note_info_pane_t2_ParamLimits

0xe7ad,	// (0x0000fd86) tmo_note_info_pane_t3_ParamLimits

0x8fd3,	// (0x0000a5ac) tmo_note_info_pane_t4_ParamLimits

0x8fe5,	// (0x0000a5be) tmo_note_info_pane_t5_ParamLimits

0xfe9c,	// (0x00011475) tmo_note_info_pane_t_ParamLimits

0x910f,	// (0x0000a6e8) settings_container_pane_ParamLimits

0x93bb,	// (0x0000a994) indicator_popup_pane_cp5

0x93bb,	// (0x0000a994) indicator_popup_pane_cp6

0x4388,	// (0x00005961) list_set_graphic_pane_copy1_ParamLimits

0xea42,	// (0x0001001b) bg_popup_window_pane_cp23

0x9450,	// (0x0000aa29) popup_tmo_big_image_note_window_g1

0x945c,	// (0x0000aa35) popup_tmo_big_image_note_window_t1

0x946c,	// (0x0000aa45) popup_tmo_big_image_note_window_t2

0x947c,	// (0x0000aa55) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb5,	// (0x0001148e) popup_tmo_big_image_note_window_t

0x51d9,	// (0x000067b2) cell_ai5_widget_lrg_icon_pane_g1

0xe7c2,	// (0x0000fd9b) cell_ai5_widget_lrg_icon_pane_t1

0xe7d0,	// (0x0000fda9) cell_ai5_widget_list_row_pane_ParamLimits

0xe7d0,	// (0x0000fda9) cell_ai5_widget_list_row_pane

0xe7e8,	// (0x0000fdc1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe7e8,	// (0x0000fdc1) cell_ai5_widget_list_row_pane_g1

0xe7f5,	// (0x0000fdce) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe7f5,	// (0x0000fdce) cell_ai5_widget_list_row_pane_t1

0xe820,	// (0x0000fdf9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe820,	// (0x0000fdf9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebc,	// (0x00011495) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebc,	// (0x00011495) cell_ai5_widget_list_row_pane_t

0xea42,	// (0x0001001b) main_fep_vtchi_ss_pane

0x953a,	// (0x0000ab13) popup_fep_char_pre_window

0x9542,	// (0x0000ab1b) popup_fep_ituss_window

0xe872,	// (0x0000fe4b) popup_fep_vkbss_window

0x15f7,	// (0x00002bd0) grid_vkbss_keypad_pane_ParamLimits

0x15f7,	// (0x00002bd0) grid_vkbss_keypad_pane

0x95b0,	// (0x0000ab89) ituss_keypad_pane

0x95c8,	// (0x0000aba1) aid_vkbss_key_offset_ParamLimits

0x95c8,	// (0x0000aba1) aid_vkbss_key_offset

0xe881,	// (0x0000fe5a) cell_vkbss_key_pane_ParamLimits

0xe881,	// (0x0000fe5a) cell_vkbss_key_pane

0x960e,	// (0x0000abe7) bg_cell_vkbss_key_g1_ParamLimits

0x960e,	// (0x0000abe7) bg_cell_vkbss_key_g1

0xe8c1,	// (0x0000fe9a) cell_vkbss_key_3p_pane_ParamLimits

0xe8c1,	// (0x0000fe9a) cell_vkbss_key_3p_pane

0xe8f7,	// (0x0000fed0) cell_vkbss_key_g1_ParamLimits

0xe8f7,	// (0x0000fed0) cell_vkbss_key_g1

0xe92d,	// (0x0000ff06) cell_vkbss_key_t1_ParamLimits

0xe92d,	// (0x0000ff06) cell_vkbss_key_t1

0x96e2,	// (0x0000acbb) cell_ituss_key_pane_ParamLimits

0x96e2,	// (0x0000acbb) cell_ituss_key_pane

0x96f3,	// (0x0000accc) bg_cell_ituss_key_g1_ParamLimits

0x96f3,	// (0x0000accc) bg_cell_ituss_key_g1

0x96ff,	// (0x0000acd8) cell_ituss_key_pane_g1_ParamLimits

0x96ff,	// (0x0000acd8) cell_ituss_key_pane_g1

0x9713,	// (0x0000acec) cell_ituss_key_pane_g2_ParamLimits

0x9713,	// (0x0000acec) cell_ituss_key_pane_g2

0x0005,

0xfec3,	// (0x0001149c) cell_ituss_key_pane_g_ParamLimits

0xfec3,	// (0x0001149c) cell_ituss_key_pane_g

0x97a9,	// (0x0000ad82) cell_ituss_key_t1_ParamLimits

0x97a9,	// (0x0000ad82) cell_ituss_key_t1

0x97e3,	// (0x0000adbc) cell_ituss_key_t2_ParamLimits

0x97e3,	// (0x0000adbc) cell_ituss_key_t2

0x9814,	// (0x0000aded) cell_ituss_key_t3_ParamLimits

0x9814,	// (0x0000aded) cell_ituss_key_t3

0x97e3,	// (0x0000adbc) cell_ituss_key_t4_ParamLimits

0x97e3,	// (0x0000adbc) cell_ituss_key_t4

0x0004,

0xfed0,	// (0x000114a9) cell_ituss_key_t_ParamLimits

0xfed0,	// (0x000114a9) cell_ituss_key_t

0xe989,	// (0x0000ff62) cell_vkbss_key_3p_pane_g1

0xe991,	// (0x0000ff6a) cell_vkbss_key_3p_pane_g2

0xe999,	// (0x0000ff72) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedb,	// (0x000114b4) cell_vkbss_key_3p_pane_g

0x1099,	// (0x00002672) bg_popup_fep_char_preview_window_cp02

0x986f,	// (0x0000ae48) popup_fep_char_pre_window_t1

0xe2fe,	// (0x0000f8d7) main_ai5_sk_pane

0x905f,	// (0x0000a638) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x906b,	// (0x0000a644) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9080,	// (0x0000a659) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x908c,	// (0x0000a665) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea7,	// (0x00011480) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9098,	// (0x0000a671) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf3f7,	// (0x000109d0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe9a1,	// (0x0000ff7a) main_ai5_sk_pane_g1

0x289c,	// (0x00003e75) popup_query_code_window_g1

0xe863,	// (0x0000fe3c) popup_fep_vkb_icf_pane

0x9587,	// (0x0000ab60) popup_fep_vtchi_icf_pane

0x15f7,	// (0x00002bd0) bg_icf_pane

0x15f7,	// (0x00002bd0) list_vkb_icf_pane

0x9886,	// (0x0000ae5f) bg_icf_pane_cp01

0x9899,	// (0x0000ae72) vtchi_icf_list_pane

0xe9f6,	// (0x0000ffcf) list_vkb_icf_pane_t1_ParamLimits

0xe9f6,	// (0x0000ffcf) list_vkb_icf_pane_t1

0x991d,	// (0x0000aef6) vtchi_icf_list_pane_t1_ParamLimits

0x991d,	// (0x0000aef6) vtchi_icf_list_pane_t1

0x9542,	// (0x0000ab1b) popup_fep_ituss_window_ParamLimits

0x9587,	// (0x0000ab60) popup_fep_vtchi_icf_pane_ParamLimits

0x95b0,	// (0x0000ab89) ituss_keypad_pane_ParamLimits

0x95bc,	// (0x0000ab95) ituss_sks_pane

0x15f7,	// (0x00002bd0) bg_icf_pane_ParamLimits

0xe848,	// (0x0000fe21) icf_edit_indi_pane_ParamLimits

0xe848,	// (0x0000fe21) icf_edit_indi_pane

0x15f7,	// (0x00002bd0) list_vkb_icf_pane_ParamLimits

0x9886,	// (0x0000ae5f) bg_icf_pane_cp01_ParamLimits

0x952d,	// (0x0000ab06) icf_edit_indi_pane_cp01_ParamLimits

0x952d,	// (0x0000ab06) icf_edit_indi_pane_cp01

0x98a1,	// (0x0000ae7a) vtchi_query_pane

0x85d7,	// (0x00009bb0) icf_edit_indi_pane_g1_ParamLimits

0x85d7,	// (0x00009bb0) icf_edit_indi_pane_g1

0xea0d,	// (0x0000ffe6) icf_edit_indi_pane_g2_ParamLimits

0xea0d,	// (0x0000ffe6) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x000114df) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x000114df) icf_edit_indi_pane_g

0xea21,	// (0x0000fffa) icf_edit_indi_pane_t1

0x9936,	// (0x0000af0f) bg_input_focus_pane_cp042

0xf29d,	// (0x00010876) vtchi_button_pane

0x993f,	// (0x0000af18) vtchi_query_pane_t1

0x994d,	// (0x0000af26) vtchi_query_pane_t2

0x995b,	// (0x0000af34) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x000114ce) vtchi_query_pane_t

0xea42,	// (0x0001001b) bg_button_pane_cp13

0x9969,	// (0x0000af42) vtchi_button_pane_g1

0x9971,	// (0x0000af4a) ituss_sks_pane_g1

0x997c,	// (0x0000af55) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x000114d5) ituss_sks_pane_g

0x9984,	// (0x0000af5d) ituss_sks_pane_t1

0x9992,	// (0x0000af6b) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x000114da) ituss_sks_pane_t

0x4c09,	// (0x000061e2) indicator_nsta_pane_cp_g1

0x4c12,	// (0x000061eb) indicator_nsta_pane_cp_g2

0x4c1a,	// (0x000061f3) indicator_nsta_pane_cp_g3

0x4c22,	// (0x000061fb) indicator_nsta_pane_cp_g4

0x4c12,	// (0x000061eb) indicator_nsta_pane_cp_g5

0x4c1a,	// (0x000061f3) indicator_nsta_pane_cp_g6

0x0005,

0xfa85,	// (0x0001105e) indicator_nsta_pane_cp_g

0xe0a4,	// (0x0000f67d) cell_graphic2_pane_t2_ParamLimits

0xe0a4,	// (0x0000f67d) cell_graphic2_pane_t2

0x0001,

0xfd92,	// (0x0001136b) cell_graphic2_pane_t_ParamLimits

0xfd92,	// (0x0001136b) cell_graphic2_pane_t

0xe0dc,	// (0x0000f6b5) cell_graphic2_control_pane_t1

0xb1d6,	// (0x0000c7af) signal_pane_g3_ParamLimits

0xb1d6,	// (0x0000c7af) signal_pane_g3

0xb1ea,	// (0x0000c7c3) signal_pane_g4_ParamLimits

0xb1ea,	// (0x0000c7c3) signal_pane_g4

0xe832,	// (0x0000fe0b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe832,	// (0x0000fe0b) cell_ai5_widget_list_row_pane_t3

0x9797,	// (0x0000ad70) cell_ituss_key_pane_t1_ParamLimits

0x9797,	// (0x0000ad70) cell_ituss_key_pane_t1

0x24d4,	// (0x00003aad) form_field_data_wide_pane_vc_t2_ParamLimits

0x24d4,	// (0x00003aad) form_field_data_wide_pane_vc_t2

0x24e8,	// (0x00003ac1) form_field_data_wide_pane_vc_t3_ParamLimits

0x24e8,	// (0x00003ac1) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d3,	// (0x00010dac) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d3,	// (0x00010dac) form_field_data_wide_pane_vc_t

0x48a6,	// (0x00005e7f) form_field_slider_wide_pane_vc_t3_ParamLimits

0x48a6,	// (0x00005e7f) form_field_slider_wide_pane_vc_t3

0x497c,	// (0x00005f55) form_field_popup_wide_pane_vc_t2_ParamLimits

0x497c,	// (0x00005f55) form_field_popup_wide_pane_vc_t2

0x4993,	// (0x00005f6c) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4993,	// (0x00005f6c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa74,	// (0x0001104d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa74,	// (0x0001104d) form_field_popup_wide_pane_vc_t

0xe5a4,	// (0x0000fb7d) aid_fshwr2_btn_pane_ParamLimits

0xe5b8,	// (0x0000fb91) aid_fshwr2_syb_pane_ParamLimits

0xe5cc,	// (0x0000fba5) aid_fshwr2_txt_pane_ParamLimits

0xf3f7,	// (0x000109d0) fshwr2_bg_pane_ParamLimits

0xe5dc,	// (0x0000fbb5) fshwr2_func_candi_pane_ParamLimits

0xe5fe,	// (0x0000fbd7) fshwr2_hwr_syb_pane_ParamLimits

0xe622,	// (0x0000fbfb) fshwr2_icf_pane_ParamLimits

0x481a,	// (0x00005df3) list_double_graphic_pane_vc_g4_ParamLimits

0x481a,	// (0x00005df3) list_double_graphic_pane_vc_g4

0x9733,	// (0x0000ad0c) cell_ituss_key_pane_g3_ParamLimits

0x9733,	// (0x0000ad0c) cell_ituss_key_pane_g3

0x9845,	// (0x0000ae1e) cell_ituss_key_t5_ParamLimits

0x9845,	// (0x0000ae1e) cell_ituss_key_t5

0xe872,	// (0x0000fe4b) popup_fep_vkbss_window_ParamLimits

0xe308,	// (0x0000f8e1) aid_cell_ai5_quarter

0xea21,	// (0x0000fffa) icf_edit_indi_pane_t1_ParamLimits

0xeefd,	// (0x000104d6) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xeefd,	// (0x000104d6) aid_tch_indicator_popup_pane_cp2

0xef10,	// (0x000104e9) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xef10,	// (0x000104e9) aid_tch_query_popup_data_pane_cp2

0x2844,	// (0x00003e1d) aid_tch_query_popup_pane_ParamLimits

0x2844,	// (0x00003e1d) aid_tch_query_popup_pane

0x2844,	// (0x00003e1d) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2844,	// (0x00003e1d) aid_tch_query_popup_data_pane_cp1

0x15f7,	// (0x00002bd0) cell_fshwr2_syb_bg_pane_ParamLimits

0xe73e,	// (0x0000fd17) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xe752,	// (0x0000fd2b) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe863,	// (0x0000fe3c) popup_fep_vkb_icf_pane_ParamLimits

0xe1b6,	// (0x0000f78f) bg_popup_fep_char_preview_window_g10

0xe3ab,	// (0x0000f984) cell_ai5_widget_pane_g11_ParamLimits

0xe3ab,	// (0x0000f984) cell_ai5_widget_pane_g11

0x88e1,	// (0x00009eba) cell_ai5_widget_pane_g12_ParamLimits

0x88e1,	// (0x00009eba) cell_ai5_widget_pane_g12

0xe3b7,	// (0x0000f990) cell_ai5_widget_pane_g13_ParamLimits

0xe3b7,	// (0x0000f990) cell_ai5_widget_pane_g13

0xe474,	// (0x0000fa4d) cell_ai5_widget_pane_t11_ParamLimits

0xe474,	// (0x0000fa4d) cell_ai5_widget_pane_t11

0xe486,	// (0x0000fa5f) cell_ai5_widget_pane_t12_ParamLimits

0xe486,	// (0x0000fa5f) cell_ai5_widget_pane_t12

0x973f,	// (0x0000ad18) cell_ituss_key_pane_g4_ParamLimits

0x973f,	// (0x0000ad18) cell_ituss_key_pane_g4

0x975b,	// (0x0000ad34) cell_ituss_key_pane_g5_ParamLimits

0x975b,	// (0x0000ad34) cell_ituss_key_pane_g5

0x9777,	// (0x0000ad50) cell_ituss_key_pane_g6_ParamLimits

0x9777,	// (0x0000ad50) cell_ituss_key_pane_g6

0x221a,	// (0x000037f3) bg_icf_pane_g1

0xe9aa,	// (0x0000ff83) bg_icf_pane_g2

0xe9b4,	// (0x0000ff8d) bg_icf_pane_g3

0xe9bc,	// (0x0000ff95) bg_icf_pane_g4

0xe9c6,	// (0x0000ff9f) bg_icf_pane_g5

0xe9d0,	// (0x0000ffa9) bg_icf_pane_g6

0xe9da,	// (0x0000ffb3) bg_icf_pane_g7

0xe9e2,	// (0x0000ffbb) bg_icf_pane_g8

0xe9ec,	// (0x0000ffc5) bg_icf_pane_g9

0x0008,

0xfee2,	// (0x000114bb) bg_icf_pane_g

0x959d,	// (0x0000ab76) popup_hyb_candi_window_ParamLimits

0x959d,	// (0x0000ab76) popup_hyb_candi_window

0x23b5,	// (0x0000398e) bg_popup_sub_pane_cp01_ParamLimits

0x23b5,	// (0x0000398e) bg_popup_sub_pane_cp01

0x99cd,	// (0x0000afa6) entry_hyb_candi_pane_ParamLimits

0x99cd,	// (0x0000afa6) entry_hyb_candi_pane

0x99dc,	// (0x0000afb5) grid_hyb_candi_pane_ParamLimits

0x99dc,	// (0x0000afb5) grid_hyb_candi_pane

0x99f1,	// (0x0000afca) grid_hyb_phrase_pane_ParamLimits

0x99f1,	// (0x0000afca) grid_hyb_phrase_pane

0x9a00,	// (0x0000afd9) cell_hyb_candi_pane_ParamLimits

0x9a00,	// (0x0000afd9) cell_hyb_candi_pane

0xf2a6,	// (0x0001087f) cell_hyb_candi_scroll_pane

0x07d6,	// (0x00001daf) cell_hyb_candi_pane_g1

0x9a1c,	// (0x0000aff5) cell_hyb_candi_pane_t1

0x9a2a,	// (0x0000b003) cell_hyb_phrase_pane

0x07d6,	// (0x00001daf) cell_hyb_phrase_pane_g1

0x9a33,	// (0x0000b00c) cell_hyb_phrase_pane_t1

0x9a41,	// (0x0000b01a) entry_hyb_candi_pane_t1

0x1099,	// (0x00002672) input_focus_pane_cp06

0x9a4f,	// (0x0000b028) cell_hyb_candi_scroll_pane_g1

0x9a57,	// (0x0000b030) cell_hyb_candi_scroll_pane_g1_aid

0x9a5f,	// (0x0000b038) cell_hyb_candi_scroll_pane_g2

0x9a67,	// (0x0000b040) cell_hyb_candi_scroll_pane_g2_aid

0x9a6f,	// (0x0000b048) cell_hyb_candi_scroll_pane_g3

0x9a77,	// (0x0000b050) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
