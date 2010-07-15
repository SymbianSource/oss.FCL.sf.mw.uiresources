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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000381f7 };

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
0x86ec,	// (0x000408e3) Screen

0x86f8,	// (0x000408ef) application_window_ParamLimits

0x86f8,	// (0x000408ef) application_window

0xb179,	// (0x00043370) screen_g1

0x8730,	// (0x00040927) area_bottom_pane_ParamLimits

0x8730,	// (0x00040927) area_bottom_pane

0xebe7,	// (0x00046dde) area_top_pane_ParamLimits

0xebe7,	// (0x00046dde) area_top_pane

0xec85,	// (0x00046e7c) main_pane_ParamLimits

0xec85,	// (0x00046e7c) main_pane

0xb183,	// (0x0004337a) misc_graphics

0xa4d6,	// (0x000426cd) battery_pane_ParamLimits

0xa4d6,	// (0x000426cd) battery_pane

0x2c99,	// (0x0003ae90) bg_status_flat_pane_g8

0x2ca1,	// (0x0003ae98) bg_status_flat_pane_g9

0x2093,	// (0x0003a28a) context_pane_ParamLimits

0x2093,	// (0x0003a28a) context_pane

0xbc49,	// (0x00043e40) navi_pane_ParamLimits

0xbc49,	// (0x00043e40) navi_pane

0xbcc7,	// (0x00043ebe) signal_pane_ParamLimits

0xbcc7,	// (0x00043ebe) signal_pane

0x0008,

0xf85e,	// (0x00047a55) bg_status_flat_pane_g

0xbd57,	// (0x00043f4e) status_pane_g1_ParamLimits

0xbd57,	// (0x00043f4e) status_pane_g1

0xbd6d,	// (0x00043f64) status_pane_g2_ParamLimits

0xbd6d,	// (0x00043f64) status_pane_g2

0x22ba,	// (0x0003a4b1) status_pane_g3_ParamLimits

0x22ba,	// (0x0003a4b1) status_pane_g3

0x0004,

0xf791,	// (0x00047988) status_pane_g_ParamLimits

0xf791,	// (0x00047988) status_pane_g

0xbd79,	// (0x00043f70) title_pane_ParamLimits

0xbd79,	// (0x00043f70) title_pane

0xbddc,	// (0x00043fd3) uni_indicator_pane_ParamLimits

0xbddc,	// (0x00043fd3) uni_indicator_pane

0x1efb,	// (0x0003a0f2) bg_list_pane_ParamLimits

0x1efb,	// (0x0003a0f2) bg_list_pane

0xd3fe,	// (0x000455f5) find_pane

0x24b6,	// (0x0003a6ad) listscroll_app_pane_ParamLimits

0x24b6,	// (0x0003a6ad) listscroll_app_pane

0x1f27,	// (0x0003a11e) listscroll_form_pane

0xef11,	// (0x00047108) listscroll_gen_pane_ParamLimits

0xef11,	// (0x00047108) listscroll_gen_pane

0x01cf,	// (0x000383c6) listscroll_set_pane

0x37fd,	// (0x0003b9f4) main_idle_act_pane

0xf36f,	// (0x00047566) main_idle_trad_pane

0xf36f,	// (0x00047566) main_list_empty_pane

0x1f1b,	// (0x0003a112) main_midp_pane

0x1f41,	// (0x0003a138) main_pane_g1_ParamLimits

0x1f41,	// (0x0003a138) main_pane_g1

0x9cba,	// (0x00041eb1) popup_ai_message_window_ParamLimits

0x9cba,	// (0x00041eb1) popup_ai_message_window

0x9d6b,	// (0x00041f62) popup_fep_china_uni_window_ParamLimits

0x9d6b,	// (0x00041f62) popup_fep_china_uni_window

0x9dc5,	// (0x00041fbc) popup_fep_japan_candidate_window_ParamLimits

0x9dc5,	// (0x00041fbc) popup_fep_japan_candidate_window

0x9de3,	// (0x00041fda) popup_fep_japan_predictive_window_ParamLimits

0x9de3,	// (0x00041fda) popup_fep_japan_predictive_window

0x9df5,	// (0x00041fec) popup_find_window

0x9e12,	// (0x00042009) popup_grid_graphic_window_ParamLimits

0x9e12,	// (0x00042009) popup_grid_graphic_window

0x9eb0,	// (0x000420a7) popup_large_graphic_colour_window

0x9ed6,	// (0x000420cd) popup_menu_window_ParamLimits

0x9ed6,	// (0x000420cd) popup_menu_window

0xa0a8,	// (0x0004229f) popup_note_image_window

0xa06e,	// (0x00042265) popup_note_wait_window_ParamLimits

0xa06e,	// (0x00042265) popup_note_wait_window

0xa0c0,	// (0x000422b7) popup_note_window_ParamLimits

0xa0c0,	// (0x000422b7) popup_note_window

0xa16f,	// (0x00042366) popup_query_code_window_ParamLimits

0xa16f,	// (0x00042366) popup_query_code_window

0xa1a9,	// (0x000423a0) popup_query_data_code_window_ParamLimits

0xa1a9,	// (0x000423a0) popup_query_data_code_window

0xa1c6,	// (0x000423bd) popup_query_data_window_ParamLimits

0xa1c6,	// (0x000423bd) popup_query_data_window

0xa248,	// (0x0004243f) popup_query_sat_info_window_ParamLimits

0xa248,	// (0x0004243f) popup_query_sat_info_window

0xa2df,	// (0x000424d6) popup_snote_single_graphic_window_ParamLimits

0xa2df,	// (0x000424d6) popup_snote_single_graphic_window

0xa2df,	// (0x000424d6) popup_snote_single_text_window_ParamLimits

0xa2df,	// (0x000424d6) popup_snote_single_text_window

0x063b,	// (0x00038832) popup_sub_window_general

0xa43c,	// (0x00042633) popup_window_general_ParamLimits

0xa43c,	// (0x00042633) popup_window_general

0x1f4f,	// (0x0003a146) power_save_pane

0x9b18,	// (0x00041d0f) control_pane_g1_ParamLimits

0x9b18,	// (0x00041d0f) control_pane_g1

0x9b41,	// (0x00041d38) control_pane_g2_ParamLimits

0x9b41,	// (0x00041d38) control_pane_g2

0x00a1,	// (0x00038298) control_pane_g3_ParamLimits

0x00a1,	// (0x00038298) control_pane_g3

0x0007,

0xf779,	// (0x00047970) control_pane_g_ParamLimits

0xf779,	// (0x00047970) control_pane_g

0x9ba9,	// (0x00041da0) control_pane_t1_ParamLimits

0x9ba9,	// (0x00041da0) control_pane_t1

0x9c0f,	// (0x00041e06) control_pane_t2_ParamLimits

0x9c0f,	// (0x00041e06) control_pane_t2

0x0002,

0xf78a,	// (0x00047981) control_pane_t_ParamLimits

0xf78a,	// (0x00047981) control_pane_t

0x9a71,	// (0x00041c68) navi_navi_volume_pane_cp1

0x9a79,	// (0x00041c70) status_small_icon_pane

0xf51a,	// (0x00047711) status_small_pane_g1_ParamLimits

0xf51a,	// (0x00047711) status_small_pane_g1

0x9a81,	// (0x00041c78) status_small_pane_g2_ParamLimits

0x9a81,	// (0x00041c78) status_small_pane_g2

0x9a8d,	// (0x00041c84) status_small_pane_g3_ParamLimits

0x9a8d,	// (0x00041c84) status_small_pane_g3

0x9a99,	// (0x00041c90) status_small_pane_g4_ParamLimits

0x9a99,	// (0x00041c90) status_small_pane_g4

0x9aa5,	// (0x00041c9c) status_small_pane_g5_ParamLimits

0x9aa5,	// (0x00041c9c) status_small_pane_g5

0x9ab3,	// (0x00041caa) status_small_pane_g6_ParamLimits

0x9ab3,	// (0x00041caa) status_small_pane_g6

0x0007,

0xf768,	// (0x0004795f) status_small_pane_g_ParamLimits

0xf768,	// (0x0004795f) status_small_pane_g

0x9ae2,	// (0x00041cd9) status_small_pane_t1

0x9b04,	// (0x00041cfb) status_small_wait_pane_ParamLimits

0x9b04,	// (0x00041cfb) status_small_wait_pane

0x9763,	// (0x0004195a) aid_levels_signal_ParamLimits

0x9763,	// (0x0004195a) aid_levels_signal

0x977b,	// (0x00041972) signal_pane_g1_ParamLimits

0x977b,	// (0x00041972) signal_pane_g1

0x9796,	// (0x0004198d) signal_pane_g2_ParamLimits

0x9796,	// (0x0004198d) signal_pane_g2

0x0003,

0xf6f9,	// (0x000478f0) signal_pane_g_ParamLimits

0xf6f9,	// (0x000478f0) signal_pane_g

0xba1c,	// (0x00043c13) context_pane_g1

0x892e,	// (0x00040b25) title_pane_g1

0x8965,	// (0x00040b5c) title_pane_t1

0xb199,	// (0x00043390) title_pane_t2

0xb1bf,	// (0x000433b6) title_pane_t3

0x0002,

0xf557,	// (0x0004774e) title_pane_t

0xbe04,	// (0x00043ffb) aid_levels_battery_ParamLimits

0xbe04,	// (0x00043ffb) aid_levels_battery

0xbe20,	// (0x00044017) battery_pane_g1_ParamLimits

0xbe20,	// (0x00044017) battery_pane_g1

0xbe3d,	// (0x00044034) battery_pane_g2_ParamLimits

0xbe3d,	// (0x00044034) battery_pane_g2

0x0001,

0xf79c,	// (0x00047993) battery_pane_g_ParamLimits

0xf79c,	// (0x00047993) battery_pane_g

0xc403,	// (0x000445fa) uni_indicator_pane_g1

0xc419,	// (0x00044610) uni_indicator_pane_g2

0xc42f,	// (0x00044626) uni_indicator_pane_g3

0x0005,

0xf906,	// (0x00047afd) uni_indicator_pane_g

0xf20f,	// (0x00047406) navi_icon_pane_ParamLimits

0xf20f,	// (0x00047406) navi_icon_pane

0xf164,	// (0x0004735b) navi_midp_pane

0xf22b,	// (0x00047422) navi_navi_pane

0xf235,	// (0x0004742c) navi_text_pane_ParamLimits

0xf235,	// (0x0004742c) navi_text_pane

0xb179,	// (0x00043370) status_small_wait_pane_g1

0xb410,	// (0x00043607) status_small_wait_pane_g2

0x0001,

0xf901,	// (0x00047af8) status_small_wait_pane_g

0xc35c,	// (0x00044553) navi_navi_icon_text_pane

0x32ec,	// (0x0003b4e3) navi_navi_pane_g1_ParamLimits

0x32ec,	// (0x0003b4e3) navi_navi_pane_g1

0x32fe,	// (0x0003b4f5) navi_navi_pane_g2_ParamLimits

0x32fe,	// (0x0003b4f5) navi_navi_pane_g2

0x0001,

0xf8cf,	// (0x00047ac6) navi_navi_pane_g_ParamLimits

0xf8cf,	// (0x00047ac6) navi_navi_pane_g

0x3310,	// (0x0003b507) navi_navi_tabs_pane

0x3319,	// (0x0003b510) navi_navi_text_pane

0xc35c,	// (0x00044553) navi_navi_volume_pane

0x32c0,	// (0x0003b4b7) navi_text_pane_t1

0x32b4,	// (0x0003b4ab) navi_icon_pane_g1

0x3207,	// (0x0003b3fe) navi_navi_text_pane_t1

0xa6d2,	// (0x000428c9) navi_navi_volume_pane_g1

0x0a58,	// (0x00038c4f) volume_small_pane

0x316d,	// (0x0003b364) navi_navi_icon_text_pane_g1

0xc2b4,	// (0x000444ab) navi_navi_icon_text_pane_t1

0xf22b,	// (0x00047422) navi_tabs_2_long_pane

0xf22b,	// (0x00047422) navi_tabs_2_pane

0xf22b,	// (0x00047422) navi_tabs_3_long_pane

0xf22b,	// (0x00047422) navi_tabs_3_pane

0xf22b,	// (0x00047422) navi_tabs_4_pane

0x0a30,	// (0x00038c27) tabs_2_active_pane_ParamLimits

0x0a30,	// (0x00038c27) tabs_2_active_pane

0x0a40,	// (0x00038c37) tabs_2_passive_pane_ParamLimits

0x0a40,	// (0x00038c37) tabs_2_passive_pane

0x09fe,	// (0x00038bf5) tabs_3_active_pane_ParamLimits

0x09fe,	// (0x00038bf5) tabs_3_active_pane

0x0a0e,	// (0x00038c05) tabs_3_passive_pane_ParamLimits

0x0a0e,	// (0x00038c05) tabs_3_passive_pane

0x0a1f,	// (0x00038c16) tabs_3_passive_pane_cp_ParamLimits

0x0a1f,	// (0x00038c16) tabs_3_passive_pane_cp

0x09ba,	// (0x00038bb1) tabs_4_active_pane_ParamLimits

0x09ba,	// (0x00038bb1) tabs_4_active_pane

0x09cb,	// (0x00038bc2) tabs_4_passive_pane_ParamLimits

0x09cb,	// (0x00038bc2) tabs_4_passive_pane

0x09dc,	// (0x00038bd3) tabs_4_passive_pane_cp_ParamLimits

0x09dc,	// (0x00038bd3) tabs_4_passive_pane_cp

0x09ed,	// (0x00038be4) tabs_4_passive_pane_cp2_ParamLimits

0x09ed,	// (0x00038be4) tabs_4_passive_pane_cp2

0x0996,	// (0x00038b8d) tabs_2_long_active_pane_ParamLimits

0x0996,	// (0x00038b8d) tabs_2_long_active_pane

0x09a8,	// (0x00038b9f) tabs_2_long_passive_pane_ParamLimits

0x09a8,	// (0x00038b9f) tabs_2_long_passive_pane

0x0951,	// (0x00038b48) tabs_3_long_active_pane_ParamLimits

0x0951,	// (0x00038b48) tabs_3_long_active_pane

0x096a,	// (0x00038b61) tabs_3_long_passive_pane_ParamLimits

0x096a,	// (0x00038b61) tabs_3_long_passive_pane

0x097d,	// (0x00038b74) tabs_3_long_passive_pane_cp_ParamLimits

0x097d,	// (0x00038b74) tabs_3_long_passive_pane_cp

0x08f7,	// (0x00038aee) volume_small_pane_g1

0x0900,	// (0x00038af7) volume_small_pane_g2

0x0909,	// (0x00038b00) volume_small_pane_g3

0x0912,	// (0x00038b09) volume_small_pane_g4

0x091b,	// (0x00038b12) volume_small_pane_g5

0x0924,	// (0x00038b1b) volume_small_pane_g6

0x092d,	// (0x00038b24) volume_small_pane_g7

0x0936,	// (0x00038b2d) volume_small_pane_g8

0x093f,	// (0x00038b36) volume_small_pane_g9

0x0948,	// (0x00038b3f) volume_small_pane_g10

0x0009,

0xf89b,	// (0x00047a92) volume_small_pane_g

0xb1d1,	// (0x000433c8) bg_active_tab_pane_cp2_ParamLimits

0xb1d1,	// (0x000433c8) bg_active_tab_pane_cp2

0x89f1,	// (0x00040be8) tabs_3_active_pane_g1

0x89f9,	// (0x00040bf0) tabs_3_active_pane_t1

0xb1d1,	// (0x000433c8) bg_passive_tab_pane_cp2_ParamLimits

0xb1d1,	// (0x000433c8) bg_passive_tab_pane_cp2

0x89f1,	// (0x00040be8) tabs_3_passive_pane_g1

0x89f9,	// (0x00040bf0) tabs_3_passive_pane_t1

0xb1d1,	// (0x000433c8) bg_active_tab_pane_cp3_ParamLimits

0xb1d1,	// (0x000433c8) bg_active_tab_pane_cp3

0x8a0b,	// (0x00040c02) tabs_4_active_pane_g1

0x8a13,	// (0x00040c0a) tabs_4_active_pane_t1

0xb1d1,	// (0x000433c8) bg_passive_tab_pane_cp3_ParamLimits

0xb1d1,	// (0x000433c8) bg_passive_tab_pane_cp3

0x8a0b,	// (0x00040c02) tabs_4_1_passive_pane_g1

0x8a13,	// (0x00040c0a) tabs_4_1_passive_pane_t1

0x1f1b,	// (0x0003a112) list_highlight_pane_cp2

0xc535,	// (0x0004472c) list_set_pane_ParamLimits

0xc535,	// (0x0004472c) list_set_pane

0xc5cf,	// (0x000447c6) main_pane_set_t1_ParamLimits

0xc5cf,	// (0x000447c6) main_pane_set_t1

0xc5ef,	// (0x000447e6) main_pane_set_t2_ParamLimits

0xc5ef,	// (0x000447e6) main_pane_set_t2

0xc603,	// (0x000447fa) main_pane_set_t3_ParamLimits

0xc603,	// (0x000447fa) main_pane_set_t3

0xc615,	// (0x0004480c) main_pane_set_t4_ParamLimits

0xc615,	// (0x0004480c) main_pane_set_t4

0x0003,

0xf96b,	// (0x00047b62) main_pane_set_t_ParamLimits

0xf96b,	// (0x00047b62) main_pane_set_t

0xc627,	// (0x0004481e) setting_code_pane

0xc631,	// (0x00044828) setting_slider_graphic_pane

0xc631,	// (0x00044828) setting_slider_pane

0xc631,	// (0x00044828) setting_text_pane

0xc631,	// (0x00044828) setting_volume_pane

0x8a25,	// (0x00040c1c) volume_set_pane

0xb1df,	// (0x000433d6) bg_set_opt_pane_cp

0x8a2d,	// (0x00040c24) setting_slider_pane_t1

0x8a46,	// (0x00040c3d) setting_slider_pane_t2

0x8a60,	// (0x00040c57) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00047755) setting_slider_pane_t

0x8a78,	// (0x00040c6f) slider_set_pane

0xb183,	// (0x0004337a) bg_set_opt_pane_cp2

0xb1ed,	// (0x000433e4) setting_slider_graphic_pane_g1

0x8a8e,	// (0x00040c85) setting_slider_graphic_pane_t1

0x8a9e,	// (0x00040c95) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004775c) setting_slider_graphic_pane_t

0x8aae,	// (0x00040ca5) slider_set_pane_cp

0xb183,	// (0x0004337a) input_focus_pane_cp1

0x37e4,	// (0x0003b9db) list_set_text_pane

0xb179,	// (0x00043370) setting_text_pane_g1

0xb183,	// (0x0004337a) input_focus_pane_cp2

0xb179,	// (0x00043370) setting_code_pane_g1

0xb1f6,	// (0x000433ed) setting_code_pane_t1

0xd2ca,	// (0x000454c1) set_text_pane_t1_ParamLimits

0xd2ca,	// (0x000454c1) set_text_pane_t1

0xb5e9,	// (0x000437e0) set_opt_bg_pane_g1

0xb5f1,	// (0x000437e8) set_opt_bg_pane_g2

0xc4ea,	// (0x000446e1) set_opt_bg_pane_g3

0xb601,	// (0x000437f8) set_opt_bg_pane_g4

0xb609,	// (0x00043800) set_opt_bg_pane_g5

0xb611,	// (0x00043808) set_opt_bg_pane_g6

0xc4f4,	// (0x000446eb) set_opt_bg_pane_g7

0xc4fc,	// (0x000446f3) set_opt_bg_pane_g8

0xc506,	// (0x000446fd) set_opt_bg_pane_g9

0x0008,

0xf958,	// (0x00047b4f) set_opt_bg_pane_g

0xc4dd,	// (0x000446d4) slider_set_pane_g1

0x0ad7,	// (0x00038cce) slider_set_pane_g2

0x0006,

0xf949,	// (0x00047b40) slider_set_pane_g

0xa6da,	// (0x000428d1) volume_set_pane_g1

0xa6e2,	// (0x000428d9) volume_set_pane_g2

0xa6ea,	// (0x000428e1) volume_set_pane_g3

0xa6f2,	// (0x000428e9) volume_set_pane_g4

0xa6fa,	// (0x000428f1) volume_set_pane_g5

0xa702,	// (0x000428f9) volume_set_pane_g6

0xa70a,	// (0x00042901) volume_set_pane_g7

0xa712,	// (0x00042909) volume_set_pane_g8

0xa71a,	// (0x00042911) volume_set_pane_g9

0xa722,	// (0x00042919) volume_set_pane_g10

0x0009,

0xf921,	// (0x00047b18) volume_set_pane_g

0x8ab6,	// (0x00040cad) indicator_pane_ParamLimits

0x8ab6,	// (0x00040cad) indicator_pane

0x8ade,	// (0x00040cd5) main_idle_pane_g2_ParamLimits

0x8ade,	// (0x00040cd5) main_idle_pane_g2

0x8b16,	// (0x00040d0d) main_pane_idle_g1_ParamLimits

0x8b16,	// (0x00040d0d) main_pane_idle_g1

0xb204,	// (0x000433fb) popup_clock_digital_analogue_window_ParamLimits

0xb204,	// (0x000433fb) popup_clock_digital_analogue_window

0x8b3d,	// (0x00040d34) soft_indicator_pane_ParamLimits

0x8b3d,	// (0x00040d34) soft_indicator_pane

0x8b61,	// (0x00040d58) wallpaper_pane_ParamLimits

0x8b61,	// (0x00040d58) wallpaper_pane

0xb179,	// (0x00043370) wallpaper_pane_g1

0x8b73,	// (0x00040d6a) indicator_pane_g1_ParamLimits

0x8b73,	// (0x00040d6a) indicator_pane_g1

0x3be8,	// (0x0003bddf) navi_navi_icon_text_pane_srt_g1

0xb232,	// (0x00043429) soft_indicator_pane_t1

0xb24c,	// (0x00043443) aid_ps_area_pane

0x8b89,	// (0x00040d80) aid_ps_clock_pane

0xb25d,	// (0x00043454) aid_ps_indicator_pane

0xb269,	// (0x00043460) indicator_ps_pane_ParamLimits

0xb269,	// (0x00043460) indicator_ps_pane

0xb278,	// (0x0004346f) power_save_pane_g1_ParamLimits

0xb278,	// (0x0004346f) power_save_pane_g1

0xb284,	// (0x0004347b) power_save_pane_g2_ParamLimits

0xb284,	// (0x0004347b) power_save_pane_g2

0xebc7,	// (0x00046dbe) aid_navinavi_width_pane

0xb24c,	// (0x00043443) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00047761) power_save_pane_g_ParamLimits

0xf56a,	// (0x00047761) power_save_pane_g

0xb292,	// (0x00043489) power_save_pane_t1_ParamLimits

0xb292,	// (0x00043489) power_save_pane_t1

0x8b89,	// (0x00040d80) aid_ps_clock_pane_ParamLimits

0xb25d,	// (0x00043454) aid_ps_indicator_pane_ParamLimits

0xb2a4,	// (0x0004349b) power_save_pane_t4_ParamLimits

0xb2a4,	// (0x0004349b) power_save_pane_t4

0x0001,

0xf56f,	// (0x00047766) power_save_pane_t_ParamLimits

0xf56f,	// (0x00047766) power_save_pane_t

0xb2ce,	// (0x000434c5) power_save_t3_ParamLimits

0xb2ce,	// (0x000434c5) power_save_t3

0xb2b9,	// (0x000434b0) power_save_t2_ParamLimits

0xb2b9,	// (0x000434b0) power_save_t2

0xb2e3,	// (0x000434da) indicator_ps_pane_g1

0x8b97,	// (0x00040d8e) ai_gene_pane_ParamLimits

0x8b97,	// (0x00040d8e) ai_gene_pane

0x8bae,	// (0x00040da5) ai_links_pane_ParamLimits

0x8bae,	// (0x00040da5) ai_links_pane

0x8bc6,	// (0x00040dbd) indicator_pane_cp1_ParamLimits

0x8bc6,	// (0x00040dbd) indicator_pane_cp1

0x8bd5,	// (0x00040dcc) main_pane_idle_g1_cp_ParamLimits

0x8bd5,	// (0x00040dcc) main_pane_idle_g1_cp

0x8bed,	// (0x00040de4) popup_ai_links_title_window

0x8bf6,	// (0x00040ded) soft_indicator_pane_cp1_ParamLimits

0x8bf6,	// (0x00040ded) soft_indicator_pane_cp1

0x35ab,	// (0x0003b7a2) ai_links_pane_g1

0x35b4,	// (0x0003b7ab) grid_ai_links_pane

0xc3fa,	// (0x000445f1) ai_gene_pane_1

0x3599,	// (0x0003b790) ai_gene_pane_2

0x35a2,	// (0x0003b799) list_highlight_pane_cp4

0xc3d6,	// (0x000445cd) cell_ai_link_pane_ParamLimits

0xc3d6,	// (0x000445cd) cell_ai_link_pane

0x356a,	// (0x0003b761) cell_ai_link_pane_g1

0xb410,	// (0x00043607) cell_ai_link_pane_g2

0x0001,

0xf8fc,	// (0x00047af3) cell_ai_link_pane_g

0xb183,	// (0x0004337a) grid_highlight_cp2

0xb183,	// (0x0004337a) bg_popup_sub_pane_cp1

0xb2fa,	// (0x000434f1) popup_ai_links_title_window_t1

0x34ba,	// (0x0003b6b1) ai_gene_pane_1_g1_ParamLimits

0x34ba,	// (0x0003b6b1) ai_gene_pane_1_g1

0x34c6,	// (0x0003b6bd) ai_gene_pane_1_g2_ParamLimits

0x34c6,	// (0x0003b6bd) ai_gene_pane_1_g2

0x0001,

0xf8f2,	// (0x00047ae9) ai_gene_pane_1_g_ParamLimits

0xf8f2,	// (0x00047ae9) ai_gene_pane_1_g

0x34d3,	// (0x0003b6ca) ai_gene_pane_1_t1_ParamLimits

0x34d3,	// (0x0003b6ca) ai_gene_pane_1_t1

0x3507,	// (0x0003b6fe) grid_ai_soft_ind_pane

0x34a5,	// (0x0003b69c) ai_gene_pane_2_t1_ParamLimits

0x34a5,	// (0x0003b69c) ai_gene_pane_2_t1

0x8c0a,	// (0x00040e01) main_pane_empty_t1_ParamLimits

0x8c0a,	// (0x00040e01) main_pane_empty_t1

0x8c22,	// (0x00040e19) main_pane_empty_t2_ParamLimits

0x8c22,	// (0x00040e19) main_pane_empty_t2

0x8c37,	// (0x00040e2e) main_pane_empty_t3_ParamLimits

0x8c37,	// (0x00040e2e) main_pane_empty_t3

0x8c49,	// (0x00040e40) main_pane_empty_t4_ParamLimits

0x8c49,	// (0x00040e40) main_pane_empty_t4

0x8c5b,	// (0x00040e52) main_pane_empty_t5_ParamLimits

0x8c5b,	// (0x00040e52) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004776b) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004776b) main_pane_empty_t

0xb63a,	// (0x00043831) bg_popup_window_pane_ParamLimits

0xb63a,	// (0x00043831) bg_popup_window_pane

0xc350,	// (0x00044547) find_popup_pane_cp2_ParamLimits

0xc350,	// (0x00044547) find_popup_pane_cp2

0x3221,	// (0x0003b418) heading_pane_ParamLimits

0x3221,	// (0x0003b418) heading_pane

0xb183,	// (0x0004337a) bg_popup_sub_pane

0xc2d1,	// (0x000444c8) bg_popup_window_pane_g1_ParamLimits

0xc2d1,	// (0x000444c8) bg_popup_window_pane_g1

0xc2e0,	// (0x000444d7) bg_popup_window_pane_g2_ParamLimits

0xc2e0,	// (0x000444d7) bg_popup_window_pane_g2

0xc2ec,	// (0x000444e3) bg_popup_window_pane_g3_ParamLimits

0xc2ec,	// (0x000444e3) bg_popup_window_pane_g3

0xc2f8,	// (0x000444ef) bg_popup_window_pane_g4_ParamLimits

0xc2f8,	// (0x000444ef) bg_popup_window_pane_g4

0xc307,	// (0x000444fe) bg_popup_window_pane_g5_ParamLimits

0xc307,	// (0x000444fe) bg_popup_window_pane_g5

0xc317,	// (0x0004450e) bg_popup_window_pane_g6_ParamLimits

0xc317,	// (0x0004450e) bg_popup_window_pane_g6

0xc323,	// (0x0004451a) bg_popup_window_pane_g7_ParamLimits

0xc323,	// (0x0004451a) bg_popup_window_pane_g7

0xc332,	// (0x00044529) bg_popup_window_pane_g8_ParamLimits

0xc332,	// (0x00044529) bg_popup_window_pane_g8

0xc341,	// (0x00044538) bg_popup_window_pane_g9_ParamLimits

0xc341,	// (0x00044538) bg_popup_window_pane_g9

0x31fb,	// (0x0003b3f2) bg_popup_window_pane_g10_ParamLimits

0x31fb,	// (0x0003b3f2) bg_popup_window_pane_g10

0x0009,

0xf8ba,	// (0x00047ab1) bg_popup_window_pane_g_ParamLimits

0xf8ba,	// (0x00047ab1) bg_popup_window_pane_g

0x3124,	// (0x0003b31b) bg_popup_heading_pane_ParamLimits

0x3124,	// (0x0003b31b) bg_popup_heading_pane

0x0c67,	// (0x00038e5e) tabs_4_passive_pane_cp_srt_ParamLimits

0x0c67,	// (0x00038e5e) tabs_4_passive_pane_cp_srt

0x0c79,	// (0x00038e70) tabs_4_passive_pane_srt_ParamLimits

0x3138,	// (0x0003b32f) heading_pane_g2

0x0c79,	// (0x00038e70) tabs_4_passive_pane_srt

0x24b6,	// (0x0003a6ad) bg_passive_tab_pane_cp3_srt_ParamLimits

0x24b6,	// (0x0003a6ad) bg_passive_tab_pane_cp3_srt

0x3140,	// (0x0003b337) heading_pane_t1_ParamLimits

0x3140,	// (0x0003b337) heading_pane_t1

0x3157,	// (0x0003b34e) heading_pane_t2_ParamLimits

0x3157,	// (0x0003b34e) heading_pane_t2

0x0001,

0xf8b5,	// (0x00047aac) heading_pane_t_ParamLimits

0xf8b5,	// (0x00047aac) heading_pane_t

0x2c61,	// (0x0003ae58) bg_popup_heading_pane_g1

0x2d10,	// (0x0003af07) bg_popup_heading_pane_g2

0x2d1a,	// (0x0003af11) bg_popup_heading_pane_g3

0x2d24,	// (0x0003af1b) bg_popup_heading_pane_g4

0x2d2e,	// (0x0003af25) bg_popup_heading_pane_g5

0x2d38,	// (0x0003af2f) bg_popup_heading_pane_g6

0x2d40,	// (0x0003af37) bg_popup_heading_pane_g7

0x2d48,	// (0x0003af3f) bg_popup_heading_pane_g8

0x2d52,	// (0x0003af49) bg_popup_heading_pane_g9

0x0008,

0xf871,	// (0x00047a68) bg_popup_heading_pane_g

0x2442,	// (0x0003a639) bg_popup_sub_pane_g1

0x2452,	// (0x0003a649) bg_popup_sub_pane_g2

0x244a,	// (0x0003a641) bg_popup_sub_pane_g3

0x2462,	// (0x0003a659) bg_popup_sub_pane_g4

0x245a,	// (0x0003a651) bg_popup_sub_pane_g5

0x246a,	// (0x0003a661) bg_popup_sub_pane_g6

0x2472,	// (0x0003a669) bg_popup_sub_pane_g7

0x2482,	// (0x0003a679) bg_popup_sub_pane_g8

0x247a,	// (0x0003a671) bg_popup_sub_pane_g9

0x0008,

0xf84b,	// (0x00047a42) bg_popup_sub_pane_g

0xb1d1,	// (0x000433c8) bg_popup_window_pane_cp5_ParamLimits

0xb1d1,	// (0x000433c8) bg_popup_window_pane_cp5

0xb317,	// (0x0004350e) popup_note_window_g1_ParamLimits

0xb317,	// (0x0004350e) popup_note_window_g1

0xb323,	// (0x0004351a) popup_note_window_t1_ParamLimits

0xb323,	// (0x0004351a) popup_note_window_t1

0xb339,	// (0x00043530) popup_note_window_t2_ParamLimits

0xb339,	// (0x00043530) popup_note_window_t2

0xb34f,	// (0x00043546) popup_note_window_t3_ParamLimits

0xb34f,	// (0x00043546) popup_note_window_t3

0xb365,	// (0x0004355c) popup_note_window_t4_ParamLimits

0xb365,	// (0x0004355c) popup_note_window_t4

0xb38d,	// (0x00043584) popup_note_window_t5_ParamLimits

0xb38d,	// (0x00043584) popup_note_window_t5

0x0004,

0xf57f,	// (0x00047776) popup_note_window_t_ParamLimits

0xf57f,	// (0x00047776) popup_note_window_t

0xb3b1,	// (0x000435a8) bg_popup_window_pane_cp6_ParamLimits

0xb3b1,	// (0x000435a8) bg_popup_window_pane_cp6

0x2bdd,	// (0x0003add4) popup_note_image_window_g1_ParamLimits

0x2bdd,	// (0x0003add4) popup_note_image_window_g1

0xc176,	// (0x0004436d) popup_note_image_window_g2_ParamLimits

0xc176,	// (0x0004436d) popup_note_image_window_g2

0x0001,

0xf83f,	// (0x00047a36) popup_note_image_window_g_ParamLimits

0xf83f,	// (0x00047a36) popup_note_image_window_g

0x2c02,	// (0x0003adf9) popup_note_image_window_t1_ParamLimits

0x2c02,	// (0x0003adf9) popup_note_image_window_t1

0x2c1b,	// (0x0003ae12) popup_note_image_window_t2_ParamLimits

0x2c1b,	// (0x0003ae12) popup_note_image_window_t2

0x2c34,	// (0x0003ae2b) popup_note_image_window_t3_ParamLimits

0x2c34,	// (0x0003ae2b) popup_note_image_window_t3

0x0002,

0xf844,	// (0x00047a3b) popup_note_image_window_t_ParamLimits

0xf844,	// (0x00047a3b) popup_note_image_window_t

0x2aa6,	// (0x0003ac9d) bg_popup_window_pane_cp7_ParamLimits

0x2aa6,	// (0x0003ac9d) bg_popup_window_pane_cp7

0x2ad6,	// (0x0003accd) popup_note_wait_window_g1_ParamLimits

0x2ad6,	// (0x0003accd) popup_note_wait_window_g1

0x2ae2,	// (0x0003acd9) popup_note_wait_window_g2_ParamLimits

0x2ae2,	// (0x0003acd9) popup_note_wait_window_g2

0x0002,

0xf82d,	// (0x00047a24) popup_note_wait_window_g_ParamLimits

0xf82d,	// (0x00047a24) popup_note_wait_window_g

0x2afa,	// (0x0003acf1) popup_note_wait_window_t1_ParamLimits

0x2afa,	// (0x0003acf1) popup_note_wait_window_t1

0xc117,	// (0x0004430e) popup_note_wait_window_t2_ParamLimits

0xc117,	// (0x0004430e) popup_note_wait_window_t2

0xc134,	// (0x0004432b) popup_note_wait_window_t3_ParamLimits

0xc134,	// (0x0004432b) popup_note_wait_window_t3

0xc147,	// (0x0004433e) popup_note_wait_window_t4_ParamLimits

0xc147,	// (0x0004433e) popup_note_wait_window_t4

0x0004,

0xf834,	// (0x00047a2b) popup_note_wait_window_t_ParamLimits

0xf834,	// (0x00047a2b) popup_note_wait_window_t

0x2b76,	// (0x0003ad6d) wait_bar_pane_ParamLimits

0x2b76,	// (0x0003ad6d) wait_bar_pane

0xb183,	// (0x0004337a) wait_anim_pane

0xb183,	// (0x0004337a) wait_border_pane

0xb179,	// (0x00043370) wait_anim_pane_g1

0xb179,	// (0x00043370) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x000478eb) wait_anim_pane_g

0x2a52,	// (0x0003ac49) wait_border_pane_g1

0x2a5d,	// (0x0003ac54) wait_border_pane_g2

0x2a66,	// (0x0003ac5d) wait_border_pane_g3

0x0002,

0xf826,	// (0x00047a1d) wait_border_pane_g

0x28bd,	// (0x0003aab4) bg_popup_window_pane_cp16_ParamLimits

0x28bd,	// (0x0003aab4) bg_popup_window_pane_cp16

0xc0c7,	// (0x000442be) indicator_popup_pane_cp4_ParamLimits

0xc0c7,	// (0x000442be) indicator_popup_pane_cp4

0x29d1,	// (0x0003abc8) popup_query_data_window_t1_ParamLimits

0x29d1,	// (0x0003abc8) popup_query_data_window_t1

0x29e3,	// (0x0003abda) popup_query_data_window_t2_ParamLimits

0x29e3,	// (0x0003abda) popup_query_data_window_t2

0x29fc,	// (0x0003abf3) popup_query_data_window_t3_ParamLimits

0x29fc,	// (0x0003abf3) popup_query_data_window_t3

0x0002,

0xf81f,	// (0x00047a16) popup_query_data_window_t_ParamLimits

0xf81f,	// (0x00047a16) popup_query_data_window_t

0xc0db,	// (0x000442d2) query_popup_data_pane_ParamLimits

0xc0db,	// (0x000442d2) query_popup_data_pane

0xc0ef,	// (0x000442e6) query_popup_data_pane_cp1_ParamLimits

0xc0ef,	// (0x000442e6) query_popup_data_pane_cp1

0x28bd,	// (0x0003aab4) bg_popup_window_pane_cp10_ParamLimits

0x28bd,	// (0x0003aab4) bg_popup_window_pane_cp10

0xc042,	// (0x00044239) indicator_popup_pane_ParamLimits

0xc042,	// (0x00044239) indicator_popup_pane

0xc064,	// (0x0004425b) popup_query_code_window_t1_ParamLimits

0xc064,	// (0x0004425b) popup_query_code_window_t1

0xc07e,	// (0x00044275) popup_query_code_window_t2_ParamLimits

0xc07e,	// (0x00044275) popup_query_code_window_t2

0x2974,	// (0x0003ab6b) popup_query_code_window_t3_ParamLimits

0x2974,	// (0x0003ab6b) popup_query_code_window_t3

0x0002,

0xf818,	// (0x00047a0f) popup_query_code_window_t_ParamLimits

0xf818,	// (0x00047a0f) popup_query_code_window_t

0x29a3,	// (0x0003ab9a) query_popup_pane_ParamLimits

0x29a3,	// (0x0003ab9a) query_popup_pane

0xb3b1,	// (0x000435a8) bg_popup_window_pane_cp15_ParamLimits

0xb3b1,	// (0x000435a8) bg_popup_window_pane_cp15

0x8c93,	// (0x00040e8a) indicator_popup_pane_cp1_ParamLimits

0x8c93,	// (0x00040e8a) indicator_popup_pane_cp1

0x8ca6,	// (0x00040e9d) indicator_popup_pane_cp2_ParamLimits

0x8ca6,	// (0x00040e9d) indicator_popup_pane_cp2

0x8cb9,	// (0x00040eb0) popup_query_data_code_window_g1_ParamLimits

0x8cb9,	// (0x00040eb0) popup_query_data_code_window_g1

0xb3cf,	// (0x000435c6) popup_query_data_code_window_t1_ParamLimits

0xb3cf,	// (0x000435c6) popup_query_data_code_window_t1

0xb3e1,	// (0x000435d8) popup_query_data_code_window_t2_ParamLimits

0xb3e1,	// (0x000435d8) popup_query_data_code_window_t2

0x8ccc,	// (0x00040ec3) popup_query_data_code_window_t3_ParamLimits

0x8ccc,	// (0x00040ec3) popup_query_data_code_window_t3

0x8ce2,	// (0x00040ed9) popup_query_data_code_window_t4_ParamLimits

0x8ce2,	// (0x00040ed9) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00047781) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00047781) popup_query_data_code_window_t

0x07d5,	// (0x000389cc) list_single_midp_graphic_pane_g3

0x8cfa,	// (0x00040ef1) query_popup_data_pane_cp2_ParamLimits

0x8d0d,	// (0x00040f04) query_popup_pane_cp2_ParamLimits

0x8d0d,	// (0x00040f04) query_popup_pane_cp2

0xb183,	// (0x0004337a) bg_popup_window_pane_cp11

0x28a9,	// (0x0003aaa0) heading_pane_cp5

0xb43d,	// (0x00043634) listscroll_popup_info_pane

0xb183,	// (0x0004337a) input_focus_pane_cp3

0xb3f3,	// (0x000435ea) query_popup_pane_t1

0xb401,	// (0x000435f8) list_popup_info_pane_ParamLimits

0xb401,	// (0x000435f8) list_popup_info_pane

0xb410,	// (0x00043607) listscroll_popup_info_pane_g1

0xb418,	// (0x0004360f) scroll_pane_cp7

0x8d20,	// (0x00040f17) popup_info_list_pane_t1_ParamLimits

0x8d20,	// (0x00040f17) popup_info_list_pane_t1

0x8d3a,	// (0x00040f31) popup_info_list_pane_t2_ParamLimits

0x8d3a,	// (0x00040f31) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004778a) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004778a) popup_info_list_pane_t

0xb183,	// (0x0004337a) bg_popup_window_pane_cp12

0xc7ee,	// (0x000449e5) find_popup_pane

0xb1df,	// (0x000433d6) bg_popup_window_pane_cp3

0xb422,	// (0x00043619) heading_pane_cp3

0xb42e,	// (0x00043625) listscroll_popup_graphic_pane

0xb183,	// (0x0004337a) bg_popup_window_pane_cp4

0x8da4,	// (0x00040f9b) heading_pane_cp4

0xb43d,	// (0x00043634) listscroll_popup_colour_pane

0x8dac,	// (0x00040fa3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8dac,	// (0x00040fa3) cell_large_graphic_colour_none_popup_pane

0x8dc0,	// (0x00040fb7) grid_large_graphic_colour_popup_pane_ParamLimits

0x8dc0,	// (0x00040fb7) grid_large_graphic_colour_popup_pane

0x8de4,	// (0x00040fdb) listscroll_popup_colour_pane_g1_ParamLimits

0x8de4,	// (0x00040fdb) listscroll_popup_colour_pane_g1

0x8dfb,	// (0x00040ff2) listscroll_popup_colour_pane_g2_ParamLimits

0x8dfb,	// (0x00040ff2) listscroll_popup_colour_pane_g2

0x8e12,	// (0x00041009) listscroll_popup_colour_pane_g3_ParamLimits

0x8e12,	// (0x00041009) listscroll_popup_colour_pane_g3

0x8e22,	// (0x00041019) listscroll_popup_colour_pane_g4_ParamLimits

0x8e22,	// (0x00041019) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004778f) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004778f) listscroll_popup_colour_pane_g

0xb445,	// (0x0004363c) scroll_pane_cp6_ParamLimits

0xb445,	// (0x0004363c) scroll_pane_cp6

0x8e32,	// (0x00041029) cell_large_graphic_colour_popup_pane_ParamLimits

0x8e32,	// (0x00041029) cell_large_graphic_colour_popup_pane

0x8e51,	// (0x00041048) cell_large_graphic_colour_none_popup_pane_t1

0xb183,	// (0x0004337a) grid_highlight_pane_cp5

0xb457,	// (0x0004364e) cell_large_graphic_colour_popup_pane_g1

0xb45f,	// (0x00043656) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00047798) cell_large_graphic_colour_popup_pane_g

0xb467,	// (0x0004365e) cell_large_graphic_colour_popup_pane_g2_copy1

0xb470,	// (0x00043667) grid_highlight_pane_cp4

0xb478,	// (0x0004366f) bg_popup_window_pane_cp8_ParamLimits

0xb478,	// (0x0004366f) bg_popup_window_pane_cp8

0x8e60,	// (0x00041057) popup_snote_single_text_window_g1_ParamLimits

0x8e60,	// (0x00041057) popup_snote_single_text_window_g1

0x8e72,	// (0x00041069) popup_snote_single_text_window_t1_ParamLimits

0x8e72,	// (0x00041069) popup_snote_single_text_window_t1

0x8e85,	// (0x0004107c) popup_snote_single_text_window_t2_ParamLimits

0x8e85,	// (0x0004107c) popup_snote_single_text_window_t2

0x8e98,	// (0x0004108f) popup_snote_single_text_window_t3_ParamLimits

0x8e98,	// (0x0004108f) popup_snote_single_text_window_t3

0x8ed1,	// (0x000410c8) popup_snote_single_text_window_t4_ParamLimits

0x8ed1,	// (0x000410c8) popup_snote_single_text_window_t4

0x8f05,	// (0x000410fc) popup_snote_single_text_window_t5_ParamLimits

0x8f05,	// (0x000410fc) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004779d) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004779d) popup_snote_single_text_window_t

0xb493,	// (0x0004368a) bg_popup_window_pane_cp9_ParamLimits

0xb493,	// (0x0004368a) bg_popup_window_pane_cp9

0x8e60,	// (0x00041057) popup_snote_single_graphic_window_g1_ParamLimits

0x8e60,	// (0x00041057) popup_snote_single_graphic_window_g1

0xb4a1,	// (0x00043698) popup_snote_single_graphic_window_g2_ParamLimits

0xb4a1,	// (0x00043698) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000477a8) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000477a8) popup_snote_single_graphic_window_g

0xb4ad,	// (0x000436a4) popup_snote_single_graphic_window_t1_ParamLimits

0xb4ad,	// (0x000436a4) popup_snote_single_graphic_window_t1

0xb4c0,	// (0x000436b7) popup_snote_single_graphic_window_t2_ParamLimits

0xb4c0,	// (0x000436b7) popup_snote_single_graphic_window_t2

0x8e98,	// (0x0004108f) popup_snote_single_graphic_window_t3_ParamLimits

0x8e98,	// (0x0004108f) popup_snote_single_graphic_window_t3

0x8ed1,	// (0x000410c8) popup_snote_single_graphic_window_t4_ParamLimits

0x8ed1,	// (0x000410c8) popup_snote_single_graphic_window_t4

0x8f34,	// (0x0004112b) popup_snote_single_graphic_window_t5_ParamLimits

0x8f34,	// (0x0004112b) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000477ad) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000477ad) popup_snote_single_graphic_window_t

0x3b44,	// (0x0003bd3b) grid_graphic_popup_pane_ParamLimits

0x3b44,	// (0x0003bd3b) grid_graphic_popup_pane

0x3b6e,	// (0x0003bd65) listscroll_popup_graphic_pane_g1_ParamLimits

0x3b6e,	// (0x0003bd65) listscroll_popup_graphic_pane_g1

0xc78c,	// (0x00044983) listscroll_popup_graphic_pane_g2_ParamLimits

0xc78c,	// (0x00044983) listscroll_popup_graphic_pane_g2

0x0001,

0xf995,	// (0x00047b8c) listscroll_popup_graphic_pane_g_ParamLimits

0xf995,	// (0x00047b8c) listscroll_popup_graphic_pane_g

0x3b96,	// (0x0003bd8d) scroll_pane_cp5

0xc731,	// (0x00044928) cell_graphic_popup_pane_ParamLimits

0xc731,	// (0x00044928) cell_graphic_popup_pane

0x3ac4,	// (0x0003bcbb) cell_graphic_popup_pane_g1

0x3acc,	// (0x0003bcc3) cell_graphic_popup_pane_g2

0xb467,	// (0x0004365e) cell_graphic_popup_pane_g3

0x0002,

0xf98e,	// (0x00047b85) cell_graphic_popup_pane_g

0x3ad5,	// (0x0003bccc) cell_graphic_popup_pane_t2

0xb470,	// (0x00043667) grid_highlight_pane_cp3

0xb4e5,	// (0x000436dc) list_gen_pane_ParamLimits

0xb4e5,	// (0x000436dc) list_gen_pane

0xb50d,	// (0x00043704) scroll_pane

0xc69b,	// (0x00044892) bg_list_pane_g1_ParamLimits

0xc69b,	// (0x00044892) bg_list_pane_g1

0xc6b6,	// (0x000448ad) bg_list_pane_g2_ParamLimits

0xc6b6,	// (0x000448ad) bg_list_pane_g2

0xc6c9,	// (0x000448c0) bg_list_pane_g3_ParamLimits

0xc6c9,	// (0x000448c0) bg_list_pane_g3

0xc6db,	// (0x000448d2) bg_list_pane_g4_ParamLimits

0xc6db,	// (0x000448d2) bg_list_pane_g4

0xc6ed,	// (0x000448e4) bg_list_pane_g5_ParamLimits

0xc6ed,	// (0x000448e4) bg_list_pane_g5

0x0004,

0xf983,	// (0x00047b7a) bg_list_pane_g_ParamLimits

0xf983,	// (0x00047b7a) bg_list_pane_g

0xc664,	// (0x0004485b) list_double2_graphic_large_graphic_pane_ParamLimits

0xc664,	// (0x0004485b) list_double2_graphic_large_graphic_pane

0xc664,	// (0x0004485b) list_double2_graphic_pane_ParamLimits

0xc664,	// (0x0004485b) list_double2_graphic_pane

0xc664,	// (0x0004485b) list_double2_large_graphic_pane_ParamLimits

0xc664,	// (0x0004485b) list_double2_large_graphic_pane

0xc664,	// (0x0004485b) list_double2_pane_ParamLimits

0xc664,	// (0x0004485b) list_double2_pane

0xc664,	// (0x0004485b) list_double_graphic_heading_pane_ParamLimits

0xc664,	// (0x0004485b) list_double_graphic_heading_pane

0xc664,	// (0x0004485b) list_double_graphic_pane_ParamLimits

0xc664,	// (0x0004485b) list_double_graphic_pane

0xc664,	// (0x0004485b) list_double_heading_pane_ParamLimits

0xc664,	// (0x0004485b) list_double_heading_pane

0xc664,	// (0x0004485b) list_double_large_graphic_pane_ParamLimits

0xc664,	// (0x0004485b) list_double_large_graphic_pane

0xc664,	// (0x0004485b) list_double_number_pane_ParamLimits

0xc664,	// (0x0004485b) list_double_number_pane

0xc664,	// (0x0004485b) list_double_pane_ParamLimits

0xc664,	// (0x0004485b) list_double_pane

0xc664,	// (0x0004485b) list_double_time_pane_ParamLimits

0xc664,	// (0x0004485b) list_double_time_pane

0xc664,	// (0x0004485b) list_setting_number_pane_ParamLimits

0xc664,	// (0x0004485b) list_setting_number_pane

0xc664,	// (0x0004485b) list_setting_pane_ParamLimits

0xc664,	// (0x0004485b) list_setting_pane

0xa7ea,	// (0x000429e1) list_single_2graphic_pane_ParamLimits

0xa7ea,	// (0x000429e1) list_single_2graphic_pane

0xa7ea,	// (0x000429e1) list_single_graphic_heading_pane_ParamLimits

0xa7ea,	// (0x000429e1) list_single_graphic_heading_pane

0xa7ea,	// (0x000429e1) list_single_graphic_pane_ParamLimits

0xa7ea,	// (0x000429e1) list_single_graphic_pane

0xa7ea,	// (0x000429e1) list_single_heading_pane_ParamLimits

0xa7ea,	// (0x000429e1) list_single_heading_pane

0xc664,	// (0x0004485b) list_single_large_graphic_pane_ParamLimits

0xc664,	// (0x0004485b) list_single_large_graphic_pane

0xa7ea,	// (0x000429e1) list_single_number_heading_pane_ParamLimits

0xa7ea,	// (0x000429e1) list_single_number_heading_pane

0xa7ea,	// (0x000429e1) list_single_number_pane_ParamLimits

0xa7ea,	// (0x000429e1) list_single_number_pane

0xa7ea,	// (0x000429e1) list_single_pane_ParamLimits

0xa7ea,	// (0x000429e1) list_single_pane

0xb183,	// (0x0004337a) list_highlight_pane_cp1

0xd2f1,	// (0x000454e8) list_single_pane_g1_ParamLimits

0xd2f1,	// (0x000454e8) list_single_pane_g1

0xd2fd,	// (0x000454f4) list_single_pane_g2_ParamLimits

0xd2fd,	// (0x000454f4) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000477bf) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000477bf) list_single_pane_g

0xa7d4,	// (0x000429cb) list_single_pane_t1_ParamLimits

0xa7d4,	// (0x000429cb) list_single_pane_t1

0xd2f1,	// (0x000454e8) list_single_number_pane_g1_ParamLimits

0xd2f1,	// (0x000454e8) list_single_number_pane_g1

0xd2fd,	// (0x000454f4) list_single_number_pane_g2_ParamLimits

0xd2fd,	// (0x000454f4) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000477bf) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000477bf) list_single_number_pane_g

0xd309,	// (0x00045500) list_single_number_pane_t1_ParamLimits

0xd309,	// (0x00045500) list_single_number_pane_t1

0xa72a,	// (0x00042921) list_single_number_pane_t2_ParamLimits

0xa72a,	// (0x00042921) list_single_number_pane_t2

0x0001,

0xf944,	// (0x00047b3b) list_single_number_pane_t_ParamLimits

0xf944,	// (0x00047b3b) list_single_number_pane_t

0xd2e5,	// (0x000454dc) list_single_graphic_pane_g1_ParamLimits

0xd2e5,	// (0x000454dc) list_single_graphic_pane_g1

0xd2f1,	// (0x000454e8) list_single_graphic_pane_g2_ParamLimits

0xd2f1,	// (0x000454e8) list_single_graphic_pane_g2

0xd2fd,	// (0x000454f4) list_single_graphic_pane_g3_ParamLimits

0xd2fd,	// (0x000454f4) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000477b8) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000477b8) list_single_graphic_pane_g

0xd309,	// (0x00045500) list_single_graphic_pane_t1_ParamLimits

0xd309,	// (0x00045500) list_single_graphic_pane_t1

0xd2f1,	// (0x000454e8) list_single_heading_pane_g1_ParamLimits

0xd2f1,	// (0x000454e8) list_single_heading_pane_g1

0xd2fd,	// (0x000454f4) list_single_heading_pane_g2_ParamLimits

0xd2fd,	// (0x000454f4) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000477bf) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000477bf) list_single_heading_pane_g

0xd31f,	// (0x00045516) list_single_heading_pane_t1_ParamLimits

0xd31f,	// (0x00045516) list_single_heading_pane_t1

0xd335,	// (0x0004552c) list_single_heading_pane_t2_ParamLimits

0xd335,	// (0x0004552c) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000477c4) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000477c4) list_single_heading_pane_t

0xd2f1,	// (0x000454e8) list_single_number_heading_pane_g1_ParamLimits

0xd2f1,	// (0x000454e8) list_single_number_heading_pane_g1

0xd2fd,	// (0x000454f4) list_single_number_heading_pane_g2_ParamLimits

0xd2fd,	// (0x000454f4) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000477bf) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000477bf) list_single_number_heading_pane_g

0xd31f,	// (0x00045516) list_single_number_heading_pane_t1_ParamLimits

0xd31f,	// (0x00045516) list_single_number_heading_pane_t1

0xd347,	// (0x0004553e) list_single_number_heading_pane_t2_ParamLimits

0xd347,	// (0x0004553e) list_single_number_heading_pane_t2

0xd359,	// (0x00045550) list_single_number_heading_pane_t3_ParamLimits

0xd359,	// (0x00045550) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x000477c9) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x000477c9) list_single_number_heading_pane_t

0xd36b,	// (0x00045562) list_single_graphic_heading_pane_g1_ParamLimits

0xd36b,	// (0x00045562) list_single_graphic_heading_pane_g1

0x8f6d,	// (0x00041164) list_single_graphic_heading_pane_g4_ParamLimits

0x8f6d,	// (0x00041164) list_single_graphic_heading_pane_g4

0xd2fd,	// (0x000454f4) list_single_graphic_heading_pane_g5_ParamLimits

0xd2fd,	// (0x000454f4) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x000477d0) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x000477d0) list_single_graphic_heading_pane_g

0xd31f,	// (0x00045516) list_single_graphic_heading_pane_t1_ParamLimits

0xd31f,	// (0x00045516) list_single_graphic_heading_pane_t1

0x8f7e,	// (0x00041175) list_single_graphic_heading_pane_t2_ParamLimits

0x8f7e,	// (0x00041175) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x000477d7) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x000477d7) list_single_graphic_heading_pane_t

0xd377,	// (0x0004556e) list_single_large_graphic_pane_g1_ParamLimits

0xd377,	// (0x0004556e) list_single_large_graphic_pane_g1

0xd383,	// (0x0004557a) list_single_large_graphic_pane_g2_ParamLimits

0xd383,	// (0x0004557a) list_single_large_graphic_pane_g2

0xd38f,	// (0x00045586) list_single_large_graphic_pane_g3_ParamLimits

0xd38f,	// (0x00045586) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x000477dc) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000477dc) list_single_large_graphic_pane_g

0x2a5d,	// (0x0003ac54) wait_border_pane_g2_copy1

0x8f90,	// (0x00041187) list_single_large_graphic_pane_g4_cp2

0xd39b,	// (0x00045592) list_single_large_graphic_pane_t1_ParamLimits

0xd39b,	// (0x00045592) list_single_large_graphic_pane_t1

0x8f98,	// (0x0004118f) list_double_pane_g1_ParamLimits

0x8f98,	// (0x0004118f) list_double_pane_g1

0xd3b1,	// (0x000455a8) list_double_pane_g2_ParamLimits

0xd3b1,	// (0x000455a8) list_double_pane_g2

0x0001,

0xf5ec,	// (0x000477e3) list_double_pane_g_ParamLimits

0xf5ec,	// (0x000477e3) list_double_pane_g

0x8fa4,	// (0x0004119b) list_double_pane_t1_ParamLimits

0x8fa4,	// (0x0004119b) list_double_pane_t1

0x8fba,	// (0x000411b1) list_double_pane_t2_ParamLimits

0x8fba,	// (0x000411b1) list_double_pane_t2

0x0001,

0xf5f1,	// (0x000477e8) list_double_pane_t_ParamLimits

0xf5f1,	// (0x000477e8) list_double_pane_t

0x8fcc,	// (0x000411c3) list_double2_pane_g1_ParamLimits

0x8fcc,	// (0x000411c3) list_double2_pane_g1

0xd3b1,	// (0x000455a8) list_double2_pane_g2_ParamLimits

0xd3b1,	// (0x000455a8) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x000477ed) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x000477ed) list_double2_pane_g

0x8fa4,	// (0x0004119b) list_double2_pane_t1_ParamLimits

0x8fa4,	// (0x0004119b) list_double2_pane_t1

0x8fdd,	// (0x000411d4) list_double2_pane_t2_ParamLimits

0x8fdd,	// (0x000411d4) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000477f2) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000477f2) list_double2_pane_t

0x8f98,	// (0x0004118f) list_double_number_pane_g1_ParamLimits

0x8f98,	// (0x0004118f) list_double_number_pane_g1

0xd3b1,	// (0x000455a8) list_double_number_pane_g2_ParamLimits

0xd3b1,	// (0x000455a8) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x000477e3) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x000477e3) list_double_number_pane_g

0x8fef,	// (0x000411e6) list_double_number_pane_t1_ParamLimits

0x8fef,	// (0x000411e6) list_double_number_pane_t1

0x9001,	// (0x000411f8) list_double_number_pane_t2_ParamLimits

0x9001,	// (0x000411f8) list_double_number_pane_t2

0x9017,	// (0x0004120e) list_double_number_pane_t3_ParamLimits

0x9017,	// (0x0004120e) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000477f7) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000477f7) list_double_number_pane_t

0x9029,	// (0x00041220) list_double_graphic_pane_g1_ParamLimits

0x9029,	// (0x00041220) list_double_graphic_pane_g1

0x9035,	// (0x0004122c) list_double_graphic_pane_g2_ParamLimits

0x9035,	// (0x0004122c) list_double_graphic_pane_g2

0x9044,	// (0x0004123b) list_double_graphic_pane_g3_ParamLimits

0x9044,	// (0x0004123b) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x000477fe) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x000477fe) list_double_graphic_pane_g

0x905c,	// (0x00041253) list_double_graphic_pane_t1_ParamLimits

0x905c,	// (0x00041253) list_double_graphic_pane_t1

0x9072,	// (0x00041269) list_double_graphic_pane_t2_ParamLimits

0x9072,	// (0x00041269) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00047807) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00047807) list_double_graphic_pane_t

0x9084,	// (0x0004127b) list_double2_graphic_pane_g1_ParamLimits

0x9084,	// (0x0004127b) list_double2_graphic_pane_g1

0x9090,	// (0x00041287) list_double2_graphic_pane_g2_ParamLimits

0x9090,	// (0x00041287) list_double2_graphic_pane_g2

0x909c,	// (0x00041293) list_double2_graphic_pane_g3_ParamLimits

0x909c,	// (0x00041293) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0004780c) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0004780c) list_double2_graphic_pane_g

0x9001,	// (0x000411f8) list_double2_graphic_pane_t1_ParamLimits

0x9001,	// (0x000411f8) list_double2_graphic_pane_t1

0x90a8,	// (0x0004129f) list_double2_graphic_pane_t2_ParamLimits

0x90a8,	// (0x0004129f) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00047813) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00047813) list_double2_graphic_pane_t

0x90ba,	// (0x000412b1) list_double_large_graphic_pane_g1_ParamLimits

0x90ba,	// (0x000412b1) list_double_large_graphic_pane_g1

0x8fcc,	// (0x000411c3) list_double_large_graphic_pane_g2_ParamLimits

0x8fcc,	// (0x000411c3) list_double_large_graphic_pane_g2

0xd3b1,	// (0x000455a8) list_double_large_graphic_pane_g3_ParamLimits

0xd3b1,	// (0x000455a8) list_double_large_graphic_pane_g3

0x90d9,	// (0x000412d0) list_double_large_graphic_pane_g4_ParamLimits

0x90d9,	// (0x000412d0) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00047818) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00047818) list_double_large_graphic_pane_g

0x90ec,	// (0x000412e3) list_double_large_graphic_pane_t1_ParamLimits

0x90ec,	// (0x000412e3) list_double_large_graphic_pane_t1

0x9105,	// (0x000412fc) list_double_large_graphic_pane_t2_ParamLimits

0x9105,	// (0x000412fc) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00047823) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00047823) list_double_large_graphic_pane_t

0x9117,	// (0x0004130e) list_double2_large_graphic_pane_g1_ParamLimits

0x9117,	// (0x0004130e) list_double2_large_graphic_pane_g1

0x8fcc,	// (0x000411c3) list_double2_large_graphic_pane_g2_ParamLimits

0x8fcc,	// (0x000411c3) list_double2_large_graphic_pane_g2

0xd3b1,	// (0x000455a8) list_double2_large_graphic_pane_g3_ParamLimits

0xd3b1,	// (0x000455a8) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00047828) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00047828) list_double2_large_graphic_pane_g

0x9001,	// (0x000411f8) list_double2_large_graphic_pane_t1_ParamLimits

0x9001,	// (0x000411f8) list_double2_large_graphic_pane_t1

0x90a8,	// (0x0004129f) list_double2_large_graphic_pane_t2_ParamLimits

0x90a8,	// (0x0004129f) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x00047813) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x00047813) list_double2_large_graphic_pane_t

0x9123,	// (0x0004131a) list_double_heading_pane_g1_ParamLimits

0x9123,	// (0x0004131a) list_double_heading_pane_g1

0x9134,	// (0x0004132b) list_double_heading_pane_g2_ParamLimits

0x9134,	// (0x0004132b) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0004782f) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0004782f) list_double_heading_pane_g

0x9140,	// (0x00041337) list_double_heading_pane_t1_ParamLimits

0x9140,	// (0x00041337) list_double_heading_pane_t1

0x90a8,	// (0x0004129f) list_double_heading_pane_t2_ParamLimits

0x90a8,	// (0x0004129f) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x00047834) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x00047834) list_double_heading_pane_t

0x9156,	// (0x0004134d) list_double_graphic_heading_pane_g1_ParamLimits

0x9156,	// (0x0004134d) list_double_graphic_heading_pane_g1

0x9123,	// (0x0004131a) list_double_graphic_heading_pane_g2_ParamLimits

0x9123,	// (0x0004131a) list_double_graphic_heading_pane_g2

0x9134,	// (0x0004132b) list_double_graphic_heading_pane_g3_ParamLimits

0x9134,	// (0x0004132b) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x00047839) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x00047839) list_double_graphic_heading_pane_g

0x9140,	// (0x00041337) list_double_graphic_heading_pane_t1_ParamLimits

0x9140,	// (0x00041337) list_double_graphic_heading_pane_t1

0x90a8,	// (0x0004129f) list_double_graphic_heading_pane_t2_ParamLimits

0x90a8,	// (0x0004129f) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x00047834) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x00047834) list_double_graphic_heading_pane_t

0x8fcc,	// (0x000411c3) list_double_time_pane_g1_ParamLimits

0x8fcc,	// (0x000411c3) list_double_time_pane_g1

0xd3b1,	// (0x000455a8) list_double_time_pane_g2_ParamLimits

0xd3b1,	// (0x000455a8) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x000477ed) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x000477ed) list_double_time_pane_g

0x9162,	// (0x00041359) list_double_time_pane_t1_ParamLimits

0x9162,	// (0x00041359) list_double_time_pane_t1

0x9178,	// (0x0004136f) list_double_time_pane_t2_ParamLimits

0x9178,	// (0x0004136f) list_double_time_pane_t2

0x918a,	// (0x00041381) list_double_time_pane_t3_ParamLimits

0x918a,	// (0x00041381) list_double_time_pane_t3

0x919c,	// (0x00041393) list_double_time_pane_t4_ParamLimits

0x919c,	// (0x00041393) list_double_time_pane_t4

0x0003,

0xf649,	// (0x00047840) list_double_time_pane_t_ParamLimits

0xf649,	// (0x00047840) list_double_time_pane_t

0x91ae,	// (0x000413a5) list_setting_pane_g1_ParamLimits

0x91ae,	// (0x000413a5) list_setting_pane_g1

0x91ba,	// (0x000413b1) list_setting_pane_g2_ParamLimits

0x91ba,	// (0x000413b1) list_setting_pane_g2

0x0001,

0xf652,	// (0x00047849) list_setting_pane_g_ParamLimits

0xf652,	// (0x00047849) list_setting_pane_g

0x91c6,	// (0x000413bd) list_setting_pane_t1_ParamLimits

0x91c6,	// (0x000413bd) list_setting_pane_t1

0x91e0,	// (0x000413d7) list_setting_pane_t2_ParamLimits

0x91e0,	// (0x000413d7) list_setting_pane_t2

0x0002,

0xf657,	// (0x0004784e) list_setting_pane_t_ParamLimits

0xf657,	// (0x0004784e) list_setting_pane_t

0x921f,	// (0x00041416) set_value_pane_cp_ParamLimits

0x921f,	// (0x00041416) set_value_pane_cp

0x922b,	// (0x00041422) list_setting_number_pane_g1_ParamLimits

0x922b,	// (0x00041422) list_setting_number_pane_g1

0x9237,	// (0x0004142e) list_setting_number_pane_g2_ParamLimits

0x9237,	// (0x0004142e) list_setting_number_pane_g2

0x0001,

0xf65e,	// (0x00047855) list_setting_number_pane_g_ParamLimits

0xf65e,	// (0x00047855) list_setting_number_pane_g

0x9243,	// (0x0004143a) list_setting_number_pane_t1_ParamLimits

0x9243,	// (0x0004143a) list_setting_number_pane_t1

0x925c,	// (0x00041453) list_setting_number_pane_t2_ParamLimits

0x925c,	// (0x00041453) list_setting_number_pane_t2

0x9276,	// (0x0004146d) list_setting_number_pane_t3_ParamLimits

0x9276,	// (0x0004146d) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x0004785a) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x0004785a) list_setting_number_pane_t

0x921f,	// (0x00041416) set_value_pane_ParamLimits

0x921f,	// (0x00041416) set_value_pane

0xb541,	// (0x00043738) bg_set_opt_pane_ParamLimits

0xb541,	// (0x00043738) bg_set_opt_pane

0x92b9,	// (0x000414b0) set_value_pane_t1

0xb562,	// (0x00043759) slider_set_pane_cp3

0x92c7,	// (0x000414be) volume_small_pane_cp

0xb56b,	// (0x00043762) list_form_gen_pane

0xb574,	// (0x0004376b) scroll_pane_cp8

0x92d0,	// (0x000414c7) form_field_data_pane_ParamLimits

0x92d0,	// (0x000414c7) form_field_data_pane

0x92e7,	// (0x000414de) form_field_data_wide_pane_ParamLimits

0x92e7,	// (0x000414de) form_field_data_wide_pane

0x9307,	// (0x000414fe) form_field_popup_pane_ParamLimits

0x9307,	// (0x000414fe) form_field_popup_pane

0x931f,	// (0x00041516) form_field_popup_wide_pane_ParamLimits

0x931f,	// (0x00041516) form_field_popup_wide_pane

0xd3e2,	// (0x000455d9) form_field_slider_pane_ParamLimits

0xd3e2,	// (0x000455d9) form_field_slider_pane

0x9336,	// (0x0004152d) form_field_slider_wide_pane_ParamLimits

0x9336,	// (0x0004152d) form_field_slider_wide_pane

0xb585,	// (0x0004377c) data_form_pane

0x9353,	// (0x0004154a) form_field_data_pane_t1

0xb591,	// (0x00043788) input_focus_pane

0x936d,	// (0x00041564) data_form_wide_pane

0x938a,	// (0x00041581) form_field_data_wide_pane_t1

0xb485,	// (0x0004367c) input_focus_pane_cp6

0x93ac,	// (0x000415a3) form_field_popup_pane_t1

0xb591,	// (0x00043788) input_focus_pane_cp7

0xb5bf,	// (0x000437b6) list_form_pane

0x93ce,	// (0x000415c5) form_field_popup_wide_pane_t1

0xb591,	// (0x00043788) input_focus_pane_cp8

0xb5cb,	// (0x000437c2) list_form_wide_pane

0x93eb,	// (0x000415e2) form_field_slider_pane_t1_ParamLimits

0x93eb,	// (0x000415e2) form_field_slider_pane_t1

0x9403,	// (0x000415fa) form_field_slider_pane_t2_ParamLimits

0x9403,	// (0x000415fa) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x0004786a) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x0004786a) form_field_slider_pane_t

0xb1d1,	// (0x000433c8) input_focus_pane_cp9_ParamLimits

0xb1d1,	// (0x000433c8) input_focus_pane_cp9

0x9418,	// (0x0004160f) slider_cont_pane_ParamLimits

0x9418,	// (0x0004160f) slider_cont_pane

0xb5d7,	// (0x000437ce) form_field_slider_wide_pane_t1_ParamLimits

0xb5d7,	// (0x000437ce) form_field_slider_wide_pane_t1

0x942c,	// (0x00041623) form_field_slider_wide_pane_t2_ParamLimits

0x942c,	// (0x00041623) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x0004786f) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x0004786f) form_field_slider_wide_pane_t

0xb1d1,	// (0x000433c8) input_focus_pane_cp10_ParamLimits

0xb1d1,	// (0x000433c8) input_focus_pane_cp10

0x943e,	// (0x00041635) slider_cont_pane_cp1_ParamLimits

0x943e,	// (0x00041635) slider_cont_pane_cp1

0x9452,	// (0x00041649) slider_form_pane_cp

0xb5e9,	// (0x000437e0) input_focus_pane_g1

0xb5f1,	// (0x000437e8) input_focus_pane_g2

0xb5f9,	// (0x000437f0) input_focus_pane_g3

0xb601,	// (0x000437f8) input_focus_pane_g4

0xb609,	// (0x00043800) input_focus_pane_g5

0xb611,	// (0x00043808) input_focus_pane_g6

0xb619,	// (0x00043810) input_focus_pane_g7

0xb621,	// (0x00043818) input_focus_pane_g8

0xb629,	// (0x00043820) input_focus_pane_g9

0xb179,	// (0x00043370) input_focus_pane_g10

0x0009,

0xf67d,	// (0x00047874) input_focus_pane_g

0x2a66,	// (0x0003ac5d) wait_border_pane_g3_copy1

0x945a,	// (0x00041651) data_form_pane_t1

0xb179,	// (0x00043370) wait_anim_pane_g1_copy1

0xa7a8,	// (0x0004299f) data_form_wide_pane_t1

0x9474,	// (0x0004166b) list_form_graphic_pane_cp_ParamLimits

0x9474,	// (0x0004166b) list_form_graphic_pane_cp

0x3955,	// (0x0003bb4c) slider_form_pane_g1

0x395e,	// (0x0003bb55) slider_form_pane_g2

0x0006,

0xf974,	// (0x00047b6b) slider_form_pane_g

0x9486,	// (0x0004167d) list_form_graphic_pane_ParamLimits

0x9486,	// (0x0004167d) list_form_graphic_pane

0x9499,	// (0x00041690) list_form_graphic_pane_g1

0x94a1,	// (0x00041698) list_form_graphic_pane_t1_ParamLimits

0x94a1,	// (0x00041698) list_form_graphic_pane_t1

0xb1df,	// (0x000433d6) list_highlight_pane_cp5_ParamLimits

0xb1df,	// (0x000433d6) list_highlight_pane_cp5

0xd3f5,	// (0x000455ec) find_pane_g1

0xb631,	// (0x00043828) input_find_pane

0x94b6,	// (0x000416ad) input_find_pane_g1_ParamLimits

0x94b6,	// (0x000416ad) input_find_pane_g1

0x94c2,	// (0x000416b9) input_find_pane_t1_ParamLimits

0x94c2,	// (0x000416b9) input_find_pane_t1

0x94d7,	// (0x000416ce) input_find_pane_t2_ParamLimits

0x94d7,	// (0x000416ce) input_find_pane_t2

0x0001,

0xf692,	// (0x00047889) input_find_pane_t_ParamLimits

0xf692,	// (0x00047889) input_find_pane_t

0xb63a,	// (0x00043831) input_focus_pane_cp5_ParamLimits

0xb63a,	// (0x00043831) input_focus_pane_cp5

0xb648,	// (0x0004383f) bg_popup_window_pane_cp2_ParamLimits

0xb648,	// (0x0004383f) bg_popup_window_pane_cp2

0xb655,	// (0x0004384c) listscroll_menu_pane_ParamLimits

0xb655,	// (0x0004384c) listscroll_menu_pane

0x94f8,	// (0x000416ef) popup_submenu_window_ParamLimits

0x94f8,	// (0x000416ef) popup_submenu_window

0xb661,	// (0x00043858) find_popup_pane_g1

0x9520,	// (0x00041717) input_popup_find_pane_cp

0xb63a,	// (0x00043831) input_focus_pane_cp4_ParamLimits

0xb63a,	// (0x00043831) input_focus_pane_cp4

0xb669,	// (0x00043860) input_popup_find_pane_t1_ParamLimits

0xb669,	// (0x00043860) input_popup_find_pane_t1

0xb183,	// (0x0004337a) bg_popup_sub_pane_cp

0xb697,	// (0x0004388e) listscroll_popup_sub_pane

0xb69f,	// (0x00043896) list_submenu_pane_ParamLimits

0xb69f,	// (0x00043896) list_submenu_pane

0xb6b0,	// (0x000438a7) scroll_pane_cp4

0x9538,	// (0x0004172f) list_single_popup_submenu_pane_ParamLimits

0x9538,	// (0x0004172f) list_single_popup_submenu_pane

0x954c,	// (0x00041743) list_single_popup_submenu_pane_g1

0x9554,	// (0x0004174b) list_single_popup_submenu_pane_t1_ParamLimits

0x9554,	// (0x0004174b) list_single_popup_submenu_pane_t1

0xb1d1,	// (0x000433c8) bg_active_tab_pane_cp1_ParamLimits

0xb1d1,	// (0x000433c8) bg_active_tab_pane_cp1

0xb6b8,	// (0x000438af) tabs_2_active_pane_g1

0x9569,	// (0x00041760) tabs_2_active_pane_t1

0xb1d1,	// (0x000433c8) bg_passive_tab_pane_cp1_ParamLimits

0xb1d1,	// (0x000433c8) bg_passive_tab_pane_cp1

0xb6b8,	// (0x000438af) tabs_2_passive_pane_g1

0x9569,	// (0x00041760) tabs_2_passive_pane_t1

0xb1df,	// (0x000433d6) bg_active_tab_pane_cp4

0x957b,	// (0x00041772) tabs_2_long_active_pane_t1

0x1f1b,	// (0x0003a112) bg_passive_tab_pane_cp4

0x07dd,	// (0x000389d4) list_single_midp_graphic_pane_g4_ParamLimits

0xb1df,	// (0x000433d6) bg_active_tab_pane_cp5

0x958e,	// (0x00041785) tabs_3_long_active_pane_t1

0x1f1b,	// (0x0003a112) bg_passive_tab_pane_cp5

0x07dd,	// (0x000389d4) list_single_midp_graphic_pane_g4

0xb1df,	// (0x000433d6) bg_popup_window_pane_cp13_ParamLimits

0xb1df,	// (0x000433d6) bg_popup_window_pane_cp13

0xb6c0,	// (0x000438b7) listscroll_popup_fast_pane_ParamLimits

0xb6c0,	// (0x000438b7) listscroll_popup_fast_pane

0xb6cc,	// (0x000438c3) grid_popup_fast_pane_ParamLimits

0xb6cc,	// (0x000438c3) grid_popup_fast_pane

0xb6de,	// (0x000438d5) scroll_pane_cp9_ParamLimits

0xb6de,	// (0x000438d5) scroll_pane_cp9

0x5269,	// (0x0003d460) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5269,	// (0x0003d460) list_single_graphic_hl_pane_t1_cp2

0xb6f1,	// (0x000438e8) input_focus_pane_cp20_ParamLimits

0xb6f1,	// (0x000438e8) input_focus_pane_cp20

0xb6ff,	// (0x000438f6) query_popup_data_pane_t1_ParamLimits

0xb6ff,	// (0x000438f6) query_popup_data_pane_t1

0xb712,	// (0x00043909) query_popup_data_pane_t2_ParamLimits

0xb712,	// (0x00043909) query_popup_data_pane_t2

0xb758,	// (0x0004394f) query_popup_data_pane_t3_ParamLimits

0xb758,	// (0x0004394f) query_popup_data_pane_t3

0xb799,	// (0x00043990) query_popup_data_pane_t4_ParamLimits

0xb799,	// (0x00043990) query_popup_data_pane_t4

0xb7d5,	// (0x000439cc) query_popup_data_pane_t5_ParamLimits

0xb7d5,	// (0x000439cc) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x0004788e) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x0004788e) query_popup_data_pane_t

0xb5e9,	// (0x000437e0) bg_set_opt_pane_g1

0xb5f1,	// (0x000437e8) bg_set_opt_pane_g2

0xb5f9,	// (0x000437f0) bg_set_opt_pane_g3

0xb601,	// (0x000437f8) bg_set_opt_pane_g4

0xb609,	// (0x00043800) bg_set_opt_pane_g5

0xb611,	// (0x00043808) bg_set_opt_pane_g6

0xb619,	// (0x00043810) bg_set_opt_pane_g7

0xb621,	// (0x00043818) bg_set_opt_pane_g8

0xb629,	// (0x00043820) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x00047899) bg_set_opt_pane_g

0xf023,	// (0x0004721a) control_top_pane_stacon_ParamLimits

0xf023,	// (0x0004721a) control_top_pane_stacon

0xf076,	// (0x0004726d) signal_pane_stacon_ParamLimits

0xf076,	// (0x0004726d) signal_pane_stacon

0xbb61,	// (0x00043d58) stacon_top_pane_g1_ParamLimits

0xbb61,	// (0x00043d58) stacon_top_pane_g1

0xf09b,	// (0x00047292) title_pane_stacon_ParamLimits

0xf09b,	// (0x00047292) title_pane_stacon

0xf0c5,	// (0x000472bc) uni_indicator_pane_stacon_ParamLimits

0xf0c5,	// (0x000472bc) uni_indicator_pane_stacon

0xf0da,	// (0x000472d1) battery_pane_stacon_ParamLimits

0xf0da,	// (0x000472d1) battery_pane_stacon

0xf11e,	// (0x00047315) control_bottom_pane_stacon_ParamLimits

0xf11e,	// (0x00047315) control_bottom_pane_stacon

0xf141,	// (0x00047338) navi_pane_stacon_ParamLimits

0xf141,	// (0x00047338) navi_pane_stacon

0xbb83,	// (0x00043d7a) stacon_bottom_pane_g1_ParamLimits

0xbb83,	// (0x00043d7a) stacon_bottom_pane_g1

0xed60,	// (0x00046f57) aid_levels_signal_lsc_ParamLimits

0xed60,	// (0x00046f57) aid_levels_signal_lsc

0xed76,	// (0x00046f6d) signal_pane_stacon_g1_ParamLimits

0xed76,	// (0x00046f6d) signal_pane_stacon_g1

0xed8a,	// (0x00046f81) signal_pane_stacon_g2_ParamLimits

0xed8a,	// (0x00046f81) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x000478ac) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x000478ac) signal_pane_stacon_g

0xedbf,	// (0x00046fb6) title_pane_stacon_t1_ParamLimits

0xedbf,	// (0x00046fb6) title_pane_stacon_t1

0xb819,	// (0x00043a10) uni_indicator_pane_stacon_g1

0xb823,	// (0x00043a1a) uni_indicator_pane_stacon_g2

0xb82d,	// (0x00043a24) uni_indicator_pane_stacon_g3

0xb837,	// (0x00043a2e) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x000478b8) uni_indicator_pane_stacon_g

0xede4,	// (0x00046fdb) control_top_pane_stacon_g1

0xedec,	// (0x00046fe3) control_top_pane_stacon_t1_ParamLimits

0xedec,	// (0x00046fe3) control_top_pane_stacon_t1

0xee23,	// (0x0004701a) aid_levels_battery_lsc_ParamLimits

0xee23,	// (0x0004701a) aid_levels_battery_lsc

0xee3a,	// (0x00047031) battery_pane_stacon_g1_ParamLimits

0xee3a,	// (0x00047031) battery_pane_stacon_g1

0xee4d,	// (0x00047044) battery_pane_stacon_g2_ParamLimits

0xee4d,	// (0x00047044) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x000478c1) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x000478c1) battery_pane_stacon_g

0xee8b,	// (0x00047082) navi_icon_pane_stacon

0xee9f,	// (0x00047096) navi_navi_pane_stacon

0xee8b,	// (0x00047082) navi_text_pane_stacon

0xede4,	// (0x00046fdb) control_bottom_pane_stacon_g1

0xeeb3,	// (0x000470aa) control_bottom_pane_stacon_t1_ParamLimits

0xeeb3,	// (0x000470aa) control_bottom_pane_stacon_t1

0x95ba,	// (0x000417b1) grid_app_pane_ParamLimits

0x95ba,	// (0x000417b1) grid_app_pane

0x95f2,	// (0x000417e9) scroll_pane_cp15_ParamLimits

0x95f2,	// (0x000417e9) scroll_pane_cp15

0x9607,	// (0x000417fe) cell_app_pane_ParamLimits

0x9607,	// (0x000417fe) cell_app_pane

0x964c,	// (0x00041843) cell_app_pane_g1_ParamLimits

0x964c,	// (0x00041843) cell_app_pane_g1

0xb85b,	// (0x00043a52) cell_app_pane_g2_ParamLimits

0xb85b,	// (0x00043a52) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x000478c6) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x000478c6) cell_app_pane_g

0x9670,	// (0x00041867) cell_app_pane_t1_ParamLimits

0x9670,	// (0x00041867) cell_app_pane_t1

0xb867,	// (0x00043a5e) grid_highlight_pane_ParamLimits

0xb867,	// (0x00043a5e) grid_highlight_pane

0xb5e9,	// (0x000437e0) cell_highlight_pane_g1

0xb5f1,	// (0x000437e8) cell_highlight_pane_g2

0xb5f9,	// (0x000437f0) cell_highlight_pane_g3

0xb601,	// (0x000437f8) cell_highlight_pane_g4

0xb609,	// (0x00043800) cell_highlight_pane_g5

0xb611,	// (0x00043808) cell_highlight_pane_g6

0xb619,	// (0x00043810) cell_highlight_pane_g7

0xb621,	// (0x00043818) cell_highlight_pane_g8

0xb629,	// (0x00043820) cell_highlight_pane_g9

0xb179,	// (0x00043370) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x00047874) cell_highlight_pane_g

0xb878,	// (0x00043a6f) bg_scroll_pane

0x9690,	// (0x00041887) scroll_handle_pane

0xb8bf,	// (0x00043ab6) scroll_bg_pane_g1

0xb8d4,	// (0x00043acb) scroll_bg_pane_g2

0xb8ec,	// (0x00043ae3) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x000478cb) scroll_bg_pane_g

0x96a4,	// (0x0004189b) scroll_handle_focus_pane_ParamLimits

0x96a4,	// (0x0004189b) scroll_handle_focus_pane

0xb8bf,	// (0x00043ab6) scroll_handle_pane_g1

0xb901,	// (0x00043af8) scroll_handle_pane_g2

0xb8ec,	// (0x00043ae3) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x000478d2) scroll_handle_pane_g

0xb63a,	// (0x00043831) bg_popup_sub_pane_cp21_ParamLimits

0xb63a,	// (0x00043831) bg_popup_sub_pane_cp21

0x96b1,	// (0x000418a8) popup_fep_japan_predictive_window_t1_ParamLimits

0x96b1,	// (0x000418a8) popup_fep_japan_predictive_window_t1

0x96c8,	// (0x000418bf) popup_fep_japan_predictive_window_t2_ParamLimits

0x96c8,	// (0x000418bf) popup_fep_japan_predictive_window_t2

0x96fb,	// (0x000418f2) popup_fep_japan_predictive_window_t3_ParamLimits

0x96fb,	// (0x000418f2) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x000478d9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x000478d9) popup_fep_japan_predictive_window_t

0xb183,	// (0x0004337a) bg_popup_sub_pane_cp23

0x9732,	// (0x00041929) listscroll_japin_cand_pane

0xb915,	// (0x00043b0c) popup_fep_japan_candidate_window_t1

0xb923,	// (0x00043b1a) candidate_pane_ParamLimits

0xb923,	// (0x00043b1a) candidate_pane

0x973a,	// (0x00041931) scroll_pane_cp30

0xb935,	// (0x00043b2c) list_single_popup_jap_candidate_pane_ParamLimits

0xb935,	// (0x00043b2c) list_single_popup_jap_candidate_pane

0xb183,	// (0x0004337a) list_highlight_pane_cp30

0xb94a,	// (0x00043b41) list_single_popup_jap_candidate_pane_t1

0xb959,	// (0x00043b50) level_1_signal

0xb966,	// (0x00043b5d) level_2_signal

0xb973,	// (0x00043b6a) level_3_signal

0xb980,	// (0x00043b77) level_4_signal

0xb98d,	// (0x00043b84) level_5_signal

0xb99a,	// (0x00043b91) level_6_signal

0xb9a7,	// (0x00043b9e) level_7_signal

0xb959,	// (0x00043b50) level_1_battery

0xb966,	// (0x00043b5d) level_2_battery

0xb973,	// (0x00043b6a) level_3_battery

0xb980,	// (0x00043b77) level_4_battery

0xb98d,	// (0x00043b84) level_5_battery

0xb99a,	// (0x00043b91) level_6_battery

0xb9a7,	// (0x00043b9e) level_7_battery

0xb9cc,	// (0x00043bc3) list_menu_pane_ParamLimits

0xb9cc,	// (0x00043bc3) list_menu_pane

0xb9e2,	// (0x00043bd9) scroll_pane_cp25_ParamLimits

0xb9e2,	// (0x00043bd9) scroll_pane_cp25

0x9742,	// (0x00041939) list_double2_graphic_pane_cp2_ParamLimits

0x9742,	// (0x00041939) list_double2_graphic_pane_cp2

0x9742,	// (0x00041939) list_double2_large_graphic_pane_cp2_ParamLimits

0x9742,	// (0x00041939) list_double2_large_graphic_pane_cp2

0x9742,	// (0x00041939) list_double2_pane_cp2_ParamLimits

0x9742,	// (0x00041939) list_double2_pane_cp2

0x9742,	// (0x00041939) list_double_graphic_pane_cp2_ParamLimits

0x9742,	// (0x00041939) list_double_graphic_pane_cp2

0x9742,	// (0x00041939) list_double_large_graphic_pane_cp2_ParamLimits

0x9742,	// (0x00041939) list_double_large_graphic_pane_cp2

0x9742,	// (0x00041939) list_double_number_pane_cp2_ParamLimits

0x9742,	// (0x00041939) list_double_number_pane_cp2

0x9742,	// (0x00041939) list_double_pane_cp2_ParamLimits

0x9742,	// (0x00041939) list_double_pane_cp2

0x9751,	// (0x00041948) list_single_2graphic_pane_cp2_ParamLimits

0x9751,	// (0x00041948) list_single_2graphic_pane_cp2

0x9751,	// (0x00041948) list_single_graphic_heading_pane_cp2_ParamLimits

0x9751,	// (0x00041948) list_single_graphic_heading_pane_cp2

0x9751,	// (0x00041948) list_single_graphic_pane_cp2_ParamLimits

0x9751,	// (0x00041948) list_single_graphic_pane_cp2

0x9751,	// (0x00041948) list_single_heading_pane_cp2_ParamLimits

0x9751,	// (0x00041948) list_single_heading_pane_cp2

0xba0b,	// (0x00043c02) list_single_large_graphic_pane_cp2_ParamLimits

0xba0b,	// (0x00043c02) list_single_large_graphic_pane_cp2

0x9751,	// (0x00041948) list_single_number_heading_pane_cp2_ParamLimits

0x9751,	// (0x00041948) list_single_number_heading_pane_cp2

0x9751,	// (0x00041948) list_single_number_pane_cp2_ParamLimits

0x9751,	// (0x00041948) list_single_number_pane_cp2

0x9751,	// (0x00041948) list_single_pane_cp2_ParamLimits

0x9751,	// (0x00041948) list_single_pane_cp2

0xba25,	// (0x00043c1c) bg_popup_sub_pane_cp22

0xf009,	// (0x00047200) popup_side_volume_key_window_g1

0xf015,	// (0x0004720c) popup_side_volume_key_window_t1

0x9819,	// (0x00041a10) volume_small_pane_cp1

0xb1d1,	// (0x000433c8) bg_popup_sub_pane_cp24_ParamLimits

0xb1d1,	// (0x000433c8) bg_popup_sub_pane_cp24

0xba3b,	// (0x00043c32) fep_china_uni_candidate_pane_ParamLimits

0xba3b,	// (0x00043c32) fep_china_uni_candidate_pane

0xba4f,	// (0x00043c46) fep_china_uni_entry_pane

0xba5f,	// (0x00043c56) popup_fep_china_uni_window_g1

0x9821,	// (0x00041a18) fep_china_uni_entry_pane_g1

0x9829,	// (0x00041a20) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x0004790a) fep_china_uni_entry_pane_g

0xba7b,	// (0x00043c72) fep_entry_item_pane

0xba85,	// (0x00043c7c) fep_candidate_item_pane

0x9831,	// (0x00041a28) fep_china_uni_candidate_pane_g1

0xba8d,	// (0x00043c84) fep_china_uni_candidate_pane_g2

0xba95,	// (0x00043c8c) fep_china_uni_candidate_pane_g3

0x9839,	// (0x00041a30) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x0004790f) fep_china_uni_candidate_pane_g

0xb179,	// (0x00043370) fep_entry_item_pane_g1

0xba9d,	// (0x00043c94) fep_entry_item_pane_t1_ParamLimits

0xba9d,	// (0x00043c94) fep_entry_item_pane_t1

0xbab3,	// (0x00043caa) fep_candidate_item_pane_t1_ParamLimits

0xbab3,	// (0x00043caa) fep_candidate_item_pane_t1

0xbac8,	// (0x00043cbf) fep_candidate_item_pane_t2_ParamLimits

0xbac8,	// (0x00043cbf) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x00047918) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x00047918) fep_candidate_item_pane_t

0xb1df,	// (0x000433d6) list_highlight_pane_cp31_ParamLimits

0xb1df,	// (0x000433d6) list_highlight_pane_cp31

0xbada,	// (0x00043cd1) level_1_signal_lsc

0xbae3,	// (0x00043cda) level_2_signal_lsc

0xbaec,	// (0x00043ce3) level_3_signal_lsc

0xbaf5,	// (0x00043cec) level_4_signal_lsc

0xbafe,	// (0x00043cf5) level_5_signal_lsc

0xbb07,	// (0x00043cfe) level_6_signal_lsc

0xbb10,	// (0x00043d07) level_7_signal_lsc

0xbb10,	// (0x00043d07) level_1_battery_lsc

0xbb19,	// (0x00043d10) level_2_battery_lsc

0xbb22,	// (0x00043d19) level_3_battery_lsc

0xbb2b,	// (0x00043d22) level_4_battery_lsc

0xbb34,	// (0x00043d2b) level_5_battery_lsc

0xbb3d,	// (0x00043d34) level_6_battery_lsc

0xbada,	// (0x00043cd1) level_7_battery_lsc

0xbb46,	// (0x00043d3d) scroll_handle_focus_pane_g1

0xbb4f,	// (0x00043d46) scroll_handle_focus_pane_g2

0xbb58,	// (0x00043d4f) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x0004791d) scroll_handle_focus_pane_g

0x9841,	// (0x00041a38) list_single_2graphic_pane_g1_ParamLimits

0x9841,	// (0x00041a38) list_single_2graphic_pane_g1

0x8f6d,	// (0x00041164) list_single_2graphic_pane_g2_ParamLimits

0x8f6d,	// (0x00041164) list_single_2graphic_pane_g2

0xd2fd,	// (0x000454f4) list_single_2graphic_pane_g3_ParamLimits

0xd2fd,	// (0x000454f4) list_single_2graphic_pane_g3

0x984d,	// (0x00041a44) list_single_2graphic_pane_g4_ParamLimits

0x984d,	// (0x00041a44) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x00047924) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x00047924) list_single_2graphic_pane_g

0x9859,	// (0x00041a50) list_single_2graphic_pane_t1_ParamLimits

0x9859,	// (0x00041a50) list_single_2graphic_pane_t1

0x9887,	// (0x00041a7e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9887,	// (0x00041a7e) list_double2_graphic_large_graphic_pane_g1

0x8fcc,	// (0x000411c3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8fcc,	// (0x000411c3) list_double2_graphic_large_graphic_pane_g2

0xd3b1,	// (0x000455a8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd3b1,	// (0x000455a8) list_double2_graphic_large_graphic_pane_g3

0x9899,	// (0x00041a90) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9899,	// (0x00041a90) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x0004792d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x0004792d) list_double2_graphic_large_graphic_pane_g

0x9162,	// (0x00041359) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9162,	// (0x00041359) list_double2_graphic_large_graphic_pane_t1

0x98a5,	// (0x00041a9c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x98a5,	// (0x00041a9c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x00047936) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x00047936) list_double2_graphic_large_graphic_pane_t

0x992a,	// (0x00041b21) popup_fast_swap_window_ParamLimits

0x992a,	// (0x00041b21) popup_fast_swap_window

0x9946,	// (0x00041b3d) popup_side_volume_key_window

0xf164,	// (0x0004735b) stacon_top_pane

0xf16e,	// (0x00047365) status_pane_ParamLimits

0xf16e,	// (0x00047365) status_pane

0x9960,	// (0x00041b57) status_small_pane

0xb183,	// (0x0004337a) control_pane

0xb183,	// (0x0004337a) stacon_bottom_pane

0xb574,	// (0x0004376b) scroll_pane_cp121

0xb56b,	// (0x00043762) set_content_pane

0x98b7,	// (0x00041aae) bg_active_tab_pane_g1_cp1

0x98c0,	// (0x00041ab7) bg_active_tab_pane_g2_cp1

0x98c9,	// (0x00041ac0) bg_active_tab_pane_g3_cp1

0x98b7,	// (0x00041aae) bg_passive_tab_pane_g1_cp1

0x98c0,	// (0x00041ab7) bg_passive_tab_pane_g2_cp1

0x98c9,	// (0x00041ac0) bg_passive_tab_pane_g3_cp1

0x98d2,	// (0x00041ac9) bg_active_tab_pane_g1_cp2

0x98c0,	// (0x00041ab7) bg_active_tab_pane_g2_cp2

0x98db,	// (0x00041ad2) bg_active_tab_pane_g3_cp2

0x98d2,	// (0x00041ac9) bg_passive_tab_pane_g1_cp2

0x98c0,	// (0x00041ab7) bg_passive_tab_pane_g2_cp2

0x98db,	// (0x00041ad2) bg_passive_tab_pane_g3_cp2

0x98e4,	// (0x00041adb) bg_active_tab_pane_g1_cp3

0x98c0,	// (0x00041ab7) bg_active_tab_pane_g2_cp3

0x98ed,	// (0x00041ae4) bg_active_tab_pane_g3_cp3

0x98e4,	// (0x00041adb) bg_passive_tab_pane_g1_cp3

0x98c0,	// (0x00041ab7) bg_passive_tab_pane_g2_cp3

0x98ed,	// (0x00041ae4) bg_passive_tab_pane_g3_cp3

0x98f6,	// (0x00041aed) bg_active_tab_pane_g1_cp4

0x98c0,	// (0x00041ab7) bg_active_tab_pane_g2_cp4

0x9901,	// (0x00041af8) bg_active_tab_pane_g3_cp4

0x98f6,	// (0x00041aed) bg_passive_tab_pane_g1_cp4

0x98c0,	// (0x00041ab7) bg_passive_tab_pane_g2_cp4

0x9901,	// (0x00041af8) bg_passive_tab_pane_g3_cp4

0x990c,	// (0x00041b03) bg_active_tab_pane_g1_cp5

0x98c0,	// (0x00041ab7) bg_active_tab_pane_g2_cp5

0x9915,	// (0x00041b0c) bg_active_tab_pane_g3_cp5

0x990c,	// (0x00041b03) bg_passive_tab_pane_g1_cp5

0x98c0,	// (0x00041ab7) bg_passive_tab_pane_g2_cp5

0x9915,	// (0x00041b0c) bg_passive_tab_pane_g3_cp5

0x3f56,	// (0x0003c14d) list_set_graphic_pane_ParamLimits

0x3f56,	// (0x0003c14d) list_set_graphic_pane

0xb183,	// (0x0004337a) bg_set_opt_pane_cp4

0xbb9f,	// (0x00043d96) list_set_graphic_pane_g1_ParamLimits

0xbb9f,	// (0x00043d96) list_set_graphic_pane_g1

0xbbab,	// (0x00043da2) list_set_graphic_pane_g2_ParamLimits

0xbbab,	// (0x00043da2) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x0004793b) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x0004793b) list_set_graphic_pane_g

0x0009,

0xfac9,	// (0x00047cc0) volume_small_pane_cp_g

0x991e,	// (0x00041b15) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x991e,	// (0x00041b15) list_double2_large_graphic_pane_g1_cp2

0xbbcd,	// (0x00043dc4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbbcd,	// (0x00043dc4) list_double2_large_graphic_pane_g2_cp2

0xbbde,	// (0x00043dd5) list_double2_large_graphic_pane_g3_cp2

0xbbe6,	// (0x00043ddd) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbbe6,	// (0x00043ddd) list_double2_large_graphic_pane_t1_cp2

0xbbfc,	// (0x00043df3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbbfc,	// (0x00043df3) list_double2_large_graphic_pane_t2_cp2

0xc3c5,	// (0x000445bc) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc3c5,	// (0x000445bc) list_double_large_graphic_pane_g1_cp2

0x3528,	// (0x0003b71f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3528,	// (0x0003b71f) list_double_large_graphic_pane_g2_cp2

0xf27e,	// (0x00047475) list_double_large_graphic_pane_g3_cp2

0x3539,	// (0x0003b730) list_double_large_graphic_pane_g4_cp

0x3541,	// (0x0003b738) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3541,	// (0x0003b738) list_double_large_graphic_pane_t1_cp2

0x3558,	// (0x0003b74f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3558,	// (0x0003b74f) list_double_large_graphic_pane_t2_cp2

0xf17c,	// (0x00047373) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf17c,	// (0x00047373) list_double2_graphic_pane_g1_cp2

0xf18a,	// (0x00047381) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf18a,	// (0x00047381) list_double2_graphic_pane_g2_cp2

0xf19b,	// (0x00047392) list_double2_graphic_pane_g3_cp2

0xf1a5,	// (0x0004739c) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf1a5,	// (0x0004739c) list_double2_graphic_pane_t1_cp2

0xf1bb,	// (0x000473b2) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf1bb,	// (0x000473b2) list_double2_graphic_pane_t2_cp2

0xbc0e,	// (0x00043e05) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbc0e,	// (0x00043e05) list_single_number_heading_pane_g1_cp2

0xf1cd,	// (0x000473c4) list_single_number_heading_pane_g2_cp2

0xf1d5,	// (0x000473cc) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf1d5,	// (0x000473cc) list_single_number_heading_pane_t1_cp2

0xf1eb,	// (0x000473e2) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf1eb,	// (0x000473e2) list_single_number_heading_pane_t2_cp2

0xf1fd,	// (0x000473f4) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf1fd,	// (0x000473f4) list_single_number_heading_pane_t3_cp2

0xbc0e,	// (0x00043e05) list_single_heading_pane_g1_cp2_ParamLimits

0xbc0e,	// (0x00043e05) list_single_heading_pane_g1_cp2

0xf1cd,	// (0x000473c4) list_single_heading_pane_g2_cp2

0xf1d5,	// (0x000473cc) list_single_heading_pane_t1_cp2_ParamLimits

0xf1d5,	// (0x000473cc) list_single_heading_pane_t1_cp2

0x3321,	// (0x0003b518) list_single_heading_pane_t2_cp2_ParamLimits

0x3321,	// (0x0003b518) list_single_heading_pane_t2_cp2

0x3269,	// (0x0003b460) list_double_graphic_pane_g1_cp2_ParamLimits

0x3269,	// (0x0003b460) list_double_graphic_pane_g1_cp2

0x3275,	// (0x0003b46c) list_double_graphic_pane_g2_cp2_ParamLimits

0x3275,	// (0x0003b46c) list_double_graphic_pane_g2_cp2

0x3284,	// (0x0003b47b) list_double_graphic_pane_g3_cp2

0x328c,	// (0x0003b483) list_double_graphic_pane_t1_cp2_ParamLimits

0x328c,	// (0x0003b483) list_double_graphic_pane_t1_cp2

0x32a2,	// (0x0003b499) list_double_graphic_pane_t2_cp2_ParamLimits

0x32a2,	// (0x0003b499) list_double_graphic_pane_t2_cp2

0xf272,	// (0x00047469) list_double_number_pane_g1_cp2_ParamLimits

0xf272,	// (0x00047469) list_double_number_pane_g1_cp2

0xf27e,	// (0x00047475) list_double_number_pane_g2_cp2

0x322d,	// (0x0003b424) list_double_number_pane_t1_cp2_ParamLimits

0x322d,	// (0x0003b424) list_double_number_pane_t1_cp2

0x3241,	// (0x0003b438) list_double_number_pane_t2_cp2_ParamLimits

0x3241,	// (0x0003b438) list_double_number_pane_t2_cp2

0x3257,	// (0x0003b44e) list_double_number_pane_t3_cp2_ParamLimits

0x3257,	// (0x0003b44e) list_double_number_pane_t3_cp2

0x3116,	// (0x0003b30d) list_single_graphic_pane_g1_cp2_ParamLimits

0x3116,	// (0x0003b30d) list_single_graphic_pane_g1_cp2

0xf2ce,	// (0x000474c5) list_single_graphic_pane_g2_cp2_ParamLimits

0xf2ce,	// (0x000474c5) list_single_graphic_pane_g2_cp2

0xf2da,	// (0x000474d1) list_single_graphic_pane_g3_cp2

0x30ec,	// (0x0003b2e3) list_single_graphic_pane_t1_cp2_ParamLimits

0x30ec,	// (0x0003b2e3) list_single_graphic_pane_t1_cp2

0xf2ce,	// (0x000474c5) list_single_number_pane_g1_cp2_ParamLimits

0xf2ce,	// (0x000474c5) list_single_number_pane_g1_cp2

0xf2da,	// (0x000474d1) list_single_number_pane_g2_cp2

0x30ec,	// (0x0003b2e3) list_single_number_pane_t1_cp2_ParamLimits

0x30ec,	// (0x0003b2e3) list_single_number_pane_t1_cp2

0x3102,	// (0x0003b2f9) list_single_number_pane_t2_cp2_ParamLimits

0x3102,	// (0x0003b2f9) list_single_number_pane_t2_cp2

0xbbcd,	// (0x00043dc4) list_double2_pane_g1_cp2_ParamLimits

0xbbcd,	// (0x00043dc4) list_double2_pane_g1_cp2

0xbbde,	// (0x00043dd5) list_double2_pane_g2_cp2

0xf24a,	// (0x00047441) list_double2_pane_t1_cp2_ParamLimits

0xf24a,	// (0x00047441) list_double2_pane_t1_cp2

0xf260,	// (0x00047457) list_double2_pane_t2_cp2_ParamLimits

0xf260,	// (0x00047457) list_double2_pane_t2_cp2

0xf272,	// (0x00047469) list_double_pane_g1_cp2_ParamLimits

0xf272,	// (0x00047469) list_double_pane_g1_cp2

0xf27e,	// (0x00047475) list_double_pane_g2_cp2

0xf286,	// (0x0004747d) list_double_pane_t1_cp2_ParamLimits

0xf286,	// (0x0004747d) list_double_pane_t1_cp2

0xf29c,	// (0x00047493) list_double_pane_t2_cp2_ParamLimits

0xf29c,	// (0x00047493) list_double_pane_t2_cp2

0x996b,	// (0x00041b62) list_single_pane_cp2_g3

0xf2ce,	// (0x000474c5) list_single_pane_g1_cp2_ParamLimits

0xf2ce,	// (0x000474c5) list_single_pane_g1_cp2

0xf2da,	// (0x000474d1) list_single_pane_g2_cp2

0xf2e2,	// (0x000474d9) list_single_pane_t1_cp2_ParamLimits

0xf2e2,	// (0x000474d9) list_single_pane_t1_cp2

0x9973,	// (0x00041b6a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9973,	// (0x00041b6a) list_single_large_graphic_pane_g1_cp2

0xf2fa,	// (0x000474f1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf2fa,	// (0x000474f1) list_single_large_graphic_pane_g2_cp2

0xf306,	// (0x000474fd) list_single_large_graphic_pane_g3_cp2

0x997f,	// (0x00041b76) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x997f,	// (0x00041b76) list_single_large_graphic_pane_g4_cp1

0xf30e,	// (0x00047505) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf30e,	// (0x00047505) list_single_large_graphic_pane_t1_cp2

0x30b8,	// (0x0003b2af) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x30b8,	// (0x0003b2af) list_single_graphic_heading_pane_g1_cp2

0x3085,	// (0x0003b27c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3085,	// (0x0003b27c) list_single_graphic_heading_pane_g4_cp2

0xf2da,	// (0x000474d1) list_single_graphic_heading_pane_g5_cp2

0x30c4,	// (0x0003b2bb) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x30c4,	// (0x0003b2bb) list_single_graphic_heading_pane_t1_cp2

0x30da,	// (0x0003b2d1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x30da,	// (0x0003b2d1) list_single_graphic_heading_pane_t2_cp2

0x3079,	// (0x0003b270) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3079,	// (0x0003b270) list_single_2graphic_pane_g1_cp2

0x3085,	// (0x0003b27c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3085,	// (0x0003b27c) list_single_2graphic_pane_g2_cp2

0xf2da,	// (0x000474d1) list_single_2graphic_pane_g3_cp2

0x3096,	// (0x0003b28d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3096,	// (0x0003b28d) list_single_2graphic_pane_g4_cp2

0x30a2,	// (0x0003b299) list_single_2graphic_pane_t1_cp2_ParamLimits

0x30a2,	// (0x0003b299) list_single_2graphic_pane_t1_cp2

0xb179,	// (0x00043370) list_highlight_pane_g10_cp1

0x2c61,	// (0x0003ae58) list_highlight_pane_g1_cp1

0x2c69,	// (0x0003ae60) list_highlight_pane_g2_cp1

0x2c71,	// (0x0003ae68) list_highlight_pane_g3_cp1

0x2c79,	// (0x0003ae70) list_highlight_pane_g4_cp1

0x2c81,	// (0x0003ae78) list_highlight_pane_g5_cp1

0x2c89,	// (0x0003ae80) list_highlight_pane_g6_cp1

0x2c91,	// (0x0003ae88) list_highlight_pane_g7_cp1

0x2c99,	// (0x0003ae90) list_highlight_pane_g8_cp1

0x2ca1,	// (0x0003ae98) list_highlight_pane_g9_cp1

0xc15a,	// (0x00044351) form_field_slider_pane_t3

0xc168,	// (0x0004435f) form_field_slider_pane_t4

0x2ba5,	// (0x0003ad9c) slider_form_pane_ParamLimits

0x2ba5,	// (0x0003ad9c) slider_form_pane

0xb183,	// (0x0004337a) control_abbreviations

0xb183,	// (0x0004337a) control_conventions

0xb183,	// (0x0004337a) control_definitions

0xb183,	// (0x0004337a) format_table_attribute

0xc39c,	// (0x00044593) bg_popup_preview_window_pane_g9

0xb183,	// (0x0004337a) format_table_data2

0xb183,	// (0x0004337a) format_table_data3

0xb183,	// (0x0004337a) format_table_data_example

0x0008,

0xb183,	// (0x0004337a) intro_purpose

0xf8d4,	// (0x00047acb) bg_popup_preview_window_pane_g

0xb183,	// (0x0004337a) texts_category

0xb183,	// (0x0004337a) texts_graphics

0xf324,	// (0x0004751b) text_digital

0xf333,	// (0x0004752a) text_primary

0xf342,	// (0x00047539) text_primary_small

0xf351,	// (0x00047548) text_secondary

0xf360,	// (0x00047557) text_title

0xc701,	// (0x000448f8) bg_passive_tab_pane_g1_cp3_srt

0x98c0,	// (0x00041ab7) bg_passive_tab_pane_g2_cp3_srt

0xc70a,	// (0x00044901) bg_passive_tab_pane_g3_cp3_srt

0xb1d1,	// (0x000433c8) bg_active_tab_pane_cp3_srt_ParamLimits

0xb1d1,	// (0x000433c8) bg_active_tab_pane_cp3_srt

0xc713,	// (0x0004490a) tabs_4_active_pane_srt_g1

0xc71b,	// (0x00044912) tabs_4_active_pane_srt_t1_ParamLimits

0xc71b,	// (0x00044912) tabs_4_active_pane_srt_t1

0xc701,	// (0x000448f8) bg_active_tab_pane_g1_cp3_copy1

0x98c0,	// (0x00041ab7) bg_active_tab_pane_g2_cp3_copy1

0xc70a,	// (0x00044901) bg_active_tab_pane_g3_cp3_copy1

0xb1df,	// (0x000433d6) tabs_2_long_active_pane_srt_ParamLimits

0xb1df,	// (0x000433d6) tabs_2_long_active_pane_srt

0xb1df,	// (0x000433d6) tabs_2_long_passive_pane_srt_ParamLimits

0xb1df,	// (0x000433d6) tabs_2_long_passive_pane_srt

0x1f1b,	// (0x0003a112) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1f1b,	// (0x0003a112) bg_passive_tab_pane_cp4_srt

0xc4b4,	// (0x000446ab) bg_passive_tab_pane_g1_cp4_srt

0x98c0,	// (0x00041ab7) bg_passive_tab_pane_g2_cp4_srt

0xc4bd,	// (0x000446b4) bg_passive_tab_pane_g3_cp4_srt

0xb1df,	// (0x000433d6) bg_active_tab_pane_cp4_srt_ParamLimits

0xb1df,	// (0x000433d6) bg_active_tab_pane_cp4_srt

0xc4c6,	// (0x000446bd) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc4c6,	// (0x000446bd) tabs_2_long_active_pane_srt_t1

0xc4b4,	// (0x000446ab) bg_active_tab_pane_g1_cp4_srt

0x98c0,	// (0x00041ab7) bg_active_tab_pane_g2_cp4_srt

0xc4bd,	// (0x000446b4) bg_active_tab_pane_g3_cp4_srt

0xb1d1,	// (0x000433c8) tabs_3_long_active_pane_srt_ParamLimits

0xb1d1,	// (0x000433c8) tabs_3_long_active_pane_srt

0xb1d1,	// (0x000433c8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb1d1,	// (0x000433c8) tabs_3_long_passive_pane_cp_srt

0xb1d1,	// (0x000433c8) tabs_3_long_passive_pane_srt_ParamLimits

0xb1d1,	// (0x000433c8) tabs_3_long_passive_pane_srt

0x1f1b,	// (0x0003a112) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1f1b,	// (0x0003a112) bg_passive_tab_pane_cp5_srt

0x990c,	// (0x00041b03) bg_passive_tab_pane_g1_cp5_srt

0x98c0,	// (0x00041ab7) bg_passive_tab_pane_g2_cp5_srt

0x9915,	// (0x00041b0c) bg_passive_tab_pane_g3_cp5_srt

0xb1df,	// (0x000433d6) bg_active_tab_pane_cp5_srt_ParamLimits

0xb1df,	// (0x000433d6) bg_active_tab_pane_cp5_srt

0xc49e,	// (0x00044695) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc49e,	// (0x00044695) tabs_3_long_active_pane_srt_t1

0x990c,	// (0x00041b03) bg_active_tab_pane_g1_cp5_srt

0x98c0,	// (0x00041ab7) bg_active_tab_pane_g2_cp5_srt

0x9915,	// (0x00041b0c) bg_active_tab_pane_g3_cp5_srt

0x376c,	// (0x0003b963) navi_text_pane_srt_t1

0x3764,	// (0x0003b95b) navi_icon_pane_srt_g1

0xf4f4,	// (0x000476eb) midp_editing_number_pane_srt

0xf36f,	// (0x00047566) midp_ticker_pane_srt

0xf4fc,	// (0x000476f3) midp_ticker_pane_srt_g1

0xf504,	// (0x000476fb) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x0004795a) midp_ticker_pane_srt_g

0xf50c,	// (0x00047703) midp_ticker_pane_srt_t1

0x3755,	// (0x0003b94c) midp_editing_number_pane_t1_copy1

0x9999,	// (0x00041b90) listscroll_midp_pane

0x9999,	// (0x00041b90) midp_form_pane

0x9a04,	// (0x00041bfb) midp_info_popup_window_ParamLimits

0x9a04,	// (0x00041bfb) midp_info_popup_window

0xb63a,	// (0x00043831) bg_popup_sub_pane_cp50_ParamLimits

0xb63a,	// (0x00043831) bg_popup_sub_pane_cp50

0x289d,	// (0x0003aa94) listscroll_midp_info_pane_ParamLimits

0x289d,	// (0x0003aa94) listscroll_midp_info_pane

0x287d,	// (0x0003aa74) listscroll_form_midp_pane_ParamLimits

0x287d,	// (0x0003aa74) listscroll_form_midp_pane

0x2889,	// (0x0003aa80) scroll_bar_cp050

0x287d,	// (0x0003aa74) list_midp_pane

0xc8bd,	// (0x00044ab4) signal_pane_g2_cp

0x2797,	// (0x0003a98e) listscroll_midp_info_pane_t1_ParamLimits

0x2797,	// (0x0003a98e) listscroll_midp_info_pane_t1

0xbf94,	// (0x0004418b) listscroll_midp_info_pane_t2_ParamLimits

0xbf94,	// (0x0004418b) listscroll_midp_info_pane_t2

0xbfd2,	// (0x000441c9) listscroll_midp_info_pane_t3_ParamLimits

0xbfd2,	// (0x000441c9) listscroll_midp_info_pane_t3

0xc00c,	// (0x00044203) listscroll_midp_info_pane_t4_ParamLimits

0xc00c,	// (0x00044203) listscroll_midp_info_pane_t4

0x0003,

0xf80f,	// (0x00047a06) listscroll_midp_info_pane_t_ParamLimits

0xf80f,	// (0x00047a06) listscroll_midp_info_pane_t

0xb6b0,	// (0x000438a7) scroll_pane_cp21

0x2737,	// (0x0003a92e) form_midp_field_choice_group_pane

0xbf57,	// (0x0004414e) form_midp_field_text_pane

0x277d,	// (0x0003a974) form_midp_field_time_pane

0x2785,	// (0x0003a97c) form_midp_gauge_slider_pane

0x278e,	// (0x0003a985) form_midp_gauge_wait_pane

0xb183,	// (0x0004337a) form_midp_image_pane

0xa6ba,	// (0x000428b1) list_single_midp_pane_ParamLimits

0xa6ba,	// (0x000428b1) list_single_midp_pane

0xbf35,	// (0x0004412c) form_midp_field_text_pane_t1

0x24b6,	// (0x0003a6ad) input_focus_pane_cp050

0x2726,	// (0x0003a91d) list_midp_form_text_pane

0x26bb,	// (0x0003a8b2) form_midp_field_choice_group_pane_t1

0x26c9,	// (0x0003a8c0) input_focus_pane_cp051

0x26dd,	// (0x0003a8d4) list_midp_choice_pane

0xb183,	// (0x0004337a) status_idle_pane

0x269f,	// (0x0003a896) form_midp_field_time_pane_t1

0xb179,	// (0x00043370) wait_anim_pane_g2_copy1

0x26ad,	// (0x0003a8a4) form_midp_field_time_pane_t2

0x0001,

0xf3cf,	// (0x000475c6) aid_navinavi_width_2_pane

0xf80a,	// (0x00047a01) form_midp_field_time_pane_t

0xb183,	// (0x0004337a) input_focus_pane_cp052

0xb183,	// (0x0004337a) bg_input_focus_pane_cp040

0x265f,	// (0x0003a856) form_midp_gauge_slider_pane_t1

0x266d,	// (0x0003a864) form_midp_gauge_slider_pane_t2

0xbf19,	// (0x00044110) form_midp_gauge_slider_pane_t3

0xbf27,	// (0x0004411e) form_midp_gauge_slider_pane_t4

0x0003,

0xf801,	// (0x000479f8) form_midp_gauge_slider_pane_t

0x2697,	// (0x0003a88e) form_midp_slider_pane

0xb1df,	// (0x000433d6) bg_input_focus_pane_cp041_ParamLimits

0xb1df,	// (0x000433d6) bg_input_focus_pane_cp041

0x262c,	// (0x0003a823) form_midp_gauge_wait_pane_t1_ParamLimits

0x262c,	// (0x0003a823) form_midp_gauge_wait_pane_t1

0x263e,	// (0x0003a835) form_midp_gauge_wait_pane_t2_ParamLimits

0x263e,	// (0x0003a835) form_midp_gauge_wait_pane_t2

0x0001,

0xf7fc,	// (0x000479f3) form_midp_gauge_wait_pane_t_ParamLimits

0xf7fc,	// (0x000479f3) form_midp_gauge_wait_pane_t

0x2650,	// (0x0003a847) form_midp_wait_pane_ParamLimits

0x2650,	// (0x0003a847) form_midp_wait_pane

0xbee3,	// (0x000440da) form_midp_image_pane_g1

0xbeec,	// (0x000440e3) form_midp_image_pane_t1

0xbefb,	// (0x000440f2) form_midp_image_pane_t2

0xbf0a,	// (0x00044101) form_midp_image_pane_t3

0x0002,

0xf7f5,	// (0x000479ec) form_midp_image_pane_t

0x25ed,	// (0x0003a7e4) list_single_midp_pane_g1

0xd4ba,	// (0x000456b1) list_single_midp_pane_t1

0xbece,	// (0x000440c5) list_midp_form_item_pane_ParamLimits

0xbece,	// (0x000440c5) list_midp_form_item_pane

0xf377,	// (0x0004756e) list_midp_form_item_pane_t1

0xf386,	// (0x0004757d) midp_ticker_pane_g1

0xf392,	// (0x00047589) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x00047940) midp_ticker_pane_g

0xf39e,	// (0x00047595) midp_ticker_pane_t1

0x39a2,	// (0x0003bb99) midp_editing_number_pane_t1

0x3980,	// (0x0003bb77) midp_editing_number_pane

0x398f,	// (0x0003bb86) midp_ticker_pane

0x3745,	// (0x0003b93c) ai_message_heading_pane

0xb183,	// (0x0004337a) bg_popup_window_pane_cp14

0x374d,	// (0x0003b944) listscroll_ai_message_pane

0x36cf,	// (0x0003b8c6) ai_message_heading_pane_g1_ParamLimits

0x36cf,	// (0x0003b8c6) ai_message_heading_pane_g1

0xc466,	// (0x0004465d) ai_message_heading_pane_g2_ParamLimits

0xc466,	// (0x0004465d) ai_message_heading_pane_g2

0x36e7,	// (0x0003b8de) ai_message_heading_pane_g3_ParamLimits

0x36e7,	// (0x0003b8de) ai_message_heading_pane_g3

0x36f3,	// (0x0003b8ea) ai_message_heading_pane_g4_ParamLimits

0x36f3,	// (0x0003b8ea) ai_message_heading_pane_g4

0x0003,

0xf936,	// (0x00047b2d) ai_message_heading_pane_g_ParamLimits

0xf936,	// (0x00047b2d) ai_message_heading_pane_g

0xc472,	// (0x00044669) ai_message_heading_pane_t1_ParamLimits

0xc472,	// (0x00044669) ai_message_heading_pane_t1

0xc48c,	// (0x00044683) ai_message_heading_pane_t2_ParamLimits

0xc48c,	// (0x00044683) ai_message_heading_pane_t2

0x0001,

0xf93f,	// (0x00047b36) ai_message_heading_pane_t_ParamLimits

0xf93f,	// (0x00047b36) ai_message_heading_pane_t

0x372b,	// (0x0003b922) bg_popup_heading_pane_cp1_ParamLimits

0x372b,	// (0x0003b922) bg_popup_heading_pane_cp1

0x36bd,	// (0x0003b8b4) list_ai_message_pane_ParamLimits

0x36bd,	// (0x0003b8b4) list_ai_message_pane

0xb6b0,	// (0x000438a7) scroll_pane_cp10

0x3659,	// (0x0003b850) list_ai_message_pane_g1

0x3661,	// (0x0003b858) list_ai_message_pane_g2

0x0001,

0xf913,	// (0x00047b0a) list_ai_message_pane_g

0x3669,	// (0x0003b860) list_ai_message_pane_t1_ParamLimits

0x3669,	// (0x0003b860) list_ai_message_pane_t1

0x367e,	// (0x0003b875) list_ai_message_pane_t2_ParamLimits

0x367e,	// (0x0003b875) list_ai_message_pane_t2

0x3693,	// (0x0003b88a) list_ai_message_pane_t3_ParamLimits

0x3693,	// (0x0003b88a) list_ai_message_pane_t3

0x36a8,	// (0x0003b89f) list_ai_message_pane_t4_ParamLimits

0x36a8,	// (0x0003b89f) list_ai_message_pane_t4

0x0003,

0xf918,	// (0x00047b0f) list_ai_message_pane_t_ParamLimits

0xf918,	// (0x00047b0f) list_ai_message_pane_t

0xc442,	// (0x00044639) cell_ai_soft_ind_pane_ParamLimits

0xc442,	// (0x00044639) cell_ai_soft_ind_pane

0xf3b0,	// (0x000475a7) cell_ai_soft_ind_pane_g1_ParamLimits

0xf3b0,	// (0x000475a7) cell_ai_soft_ind_pane_g1

0xb183,	// (0x0004337a) grid_highlight_cp1

0xf3bd,	// (0x000475b4) text_secondary_cp56_ParamLimits

0xf3bd,	// (0x000475b4) text_secondary_cp56

0x3619,	// (0x0003b810) example_general_pane_ParamLimits

0x3619,	// (0x0003b810) example_general_pane

0x3625,	// (0x0003b81c) example_parent_pane_g1_ParamLimits

0x3625,	// (0x0003b81c) example_parent_pane_g1

0x3631,	// (0x0003b828) example_parent_pane_t1_ParamLimits

0x3631,	// (0x0003b828) example_parent_pane_t1

0xa0f2,	// (0x000422e9) popup_preview_text_window_ParamLimits

0xa0f2,	// (0x000422e9) popup_preview_text_window

0xf2c6,	// (0x000474bd) list_single_pane_cp2_g4

0xb3b1,	// (0x000435a8) bg_popup_preview_window_pane_ParamLimits

0xb3b1,	// (0x000435a8) bg_popup_preview_window_pane

0xc3a4,	// (0x0004459b) popup_preview_text_window_t1_ParamLimits

0xc3a4,	// (0x0004459b) popup_preview_text_window_t1

0x3391,	// (0x0003b588) popup_preview_text_window_t2_ParamLimits

0x3391,	// (0x0003b588) popup_preview_text_window_t2

0x33da,	// (0x0003b5d1) popup_preview_text_window_t3_ParamLimits

0x33da,	// (0x0003b5d1) popup_preview_text_window_t3

0x341f,	// (0x0003b616) popup_preview_text_window_t4_ParamLimits

0x341f,	// (0x0003b616) popup_preview_text_window_t4

0x0004,

0xf8e7,	// (0x00047ade) popup_preview_text_window_t_ParamLimits

0xf8e7,	// (0x00047ade) popup_preview_text_window_t

0x349d,	// (0x0003b694) scroll_pane_cp11

0x2442,	// (0x0003a639) bg_popup_preview_window_pane_g1

0xc364,	// (0x0004455b) bg_popup_preview_window_pane_g2

0xc36c,	// (0x00044563) bg_popup_preview_window_pane_g3

0xc374,	// (0x0004456b) bg_popup_preview_window_pane_g4

0xc37c,	// (0x00044573) bg_popup_preview_window_pane_g5

0xc384,	// (0x0004457b) bg_popup_preview_window_pane_g6

0xc38c,	// (0x00044583) bg_popup_preview_window_pane_g7

0xc394,	// (0x0004458b) bg_popup_preview_window_pane_g8

0xebd3,	// (0x00046dca) aid_popup_width_pane

0xa06e,	// (0x00042265) popup_midp_note_alarm_window_ParamLimits

0xa06e,	// (0x00042265) popup_midp_note_alarm_window

0xb585,	// (0x0004377c) data_form_pane_ParamLimits

0x9349,	// (0x00041540) form_field_data_pane_g1

0x9353,	// (0x0004154a) form_field_data_pane_t1_ParamLimits

0xb591,	// (0x00043788) input_focus_pane_ParamLimits

0x936d,	// (0x00041564) data_form_wide_pane_ParamLimits

0x937e,	// (0x00041575) form_field_data_wide_pane_g1

0x938a,	// (0x00041581) form_field_data_wide_pane_t1_ParamLimits

0xb485,	// (0x0004367c) input_focus_pane_cp6_ParamLimits

0x952a,	// (0x00041721) input_popup_find_pane_g1_ParamLimits

0x952a,	// (0x00041721) input_popup_find_pane_g1

0xee5e,	// (0x00047055) aid_navi_side_left_pane

0xee73,	// (0x0004706a) aid_navi_side_right_pane

0x2d5c,	// (0x0003af53) bg_popup_window_pane_cp30_ParamLimits

0x2d5c,	// (0x0003af53) bg_popup_window_pane_cp30

0x2dd6,	// (0x0003afcd) popup_midp_note_alarm_window_g1_ParamLimits

0x2dd6,	// (0x0003afcd) popup_midp_note_alarm_window_g1

0x2e06,	// (0x0003affd) popup_midp_note_alarm_window_t1_ParamLimits

0x2e06,	// (0x0003affd) popup_midp_note_alarm_window_t1

0xc1ad,	// (0x000443a4) popup_midp_note_alarm_window_t2_ParamLimits

0xc1ad,	// (0x000443a4) popup_midp_note_alarm_window_t2

0xc25b,	// (0x00044452) popup_midp_note_alarm_window_t3_ParamLimits

0xc25b,	// (0x00044452) popup_midp_note_alarm_window_t3

0xc283,	// (0x0004447a) popup_midp_note_alarm_window_t4_ParamLimits

0xc283,	// (0x0004447a) popup_midp_note_alarm_window_t4

0x2f9d,	// (0x0003b194) popup_midp_note_alarm_window_t5_ParamLimits

0x2f9d,	// (0x0003b194) popup_midp_note_alarm_window_t5

0x000a,

0xf884,	// (0x00047a7b) popup_midp_note_alarm_window_t_ParamLimits

0xf884,	// (0x00047a7b) popup_midp_note_alarm_window_t

0x3049,	// (0x0003b240) wait_bar_pane_cp1_ParamLimits

0x3049,	// (0x0003b240) wait_bar_pane_cp1

0xb183,	// (0x0004337a) wait_anim_pane_copy1

0xb183,	// (0x0004337a) wait_border_pane_copy1

0x2a52,	// (0x0003ac49) wait_border_pane_g1_copy1

0x93a4,	// (0x0004159b) form_field_popup_pane_g1

0x93ac,	// (0x000415a3) form_field_popup_pane_t1_ParamLimits

0xb591,	// (0x00043788) input_focus_pane_cp7_ParamLimits

0xb5bf,	// (0x000437b6) list_form_pane_ParamLimits

0x93c6,	// (0x000415bd) form_field_popup_wide_pane_g1

0x93ce,	// (0x000415c5) form_field_popup_wide_pane_t1_ParamLimits

0xb591,	// (0x00043788) input_focus_pane_cp8_ParamLimits

0xb5cb,	// (0x000437c2) list_form_wide_pane_ParamLimits

0xc774,	// (0x0004496b) aid_size_cell_graphic_pane

0x945a,	// (0x00041651) data_form_pane_t1_ParamLimits

0xa7a8,	// (0x0004299f) data_form_wide_pane_t1_ParamLimits

0xa535,	// (0x0004272c) bg_status_flat_pane

0x8965,	// (0x00040b5c) title_pane_t1_ParamLimits

0xb199,	// (0x00043390) title_pane_t2_ParamLimits

0xb1bf,	// (0x000433b6) title_pane_t3_ParamLimits

0xf557,	// (0x0004774e) title_pane_t_ParamLimits

0xb959,	// (0x00043b50) level_1_signal_ParamLimits

0xb966,	// (0x00043b5d) level_2_signal_ParamLimits

0xb973,	// (0x00043b6a) level_3_signal_ParamLimits

0xb980,	// (0x00043b77) level_4_signal_ParamLimits

0xb98d,	// (0x00043b84) level_5_signal_ParamLimits

0xb99a,	// (0x00043b91) level_6_signal_ParamLimits

0xb9a7,	// (0x00043b9e) level_7_signal_ParamLimits

0xb959,	// (0x00043b50) level_1_battery_ParamLimits

0xb966,	// (0x00043b5d) level_2_battery_ParamLimits

0xb973,	// (0x00043b6a) level_3_battery_ParamLimits

0xb980,	// (0x00043b77) level_4_battery_ParamLimits

0xb98d,	// (0x00043b84) level_5_battery_ParamLimits

0xb99a,	// (0x00043b91) level_6_battery_ParamLimits

0xb9a7,	// (0x00043b9e) level_7_battery_ParamLimits

0x2c61,	// (0x0003ae58) bg_status_flat_pane_g1

0x2c69,	// (0x0003ae60) bg_status_flat_pane_g2

0x2c71,	// (0x0003ae68) bg_status_flat_pane_g3

0x2c79,	// (0x0003ae70) bg_status_flat_pane_g4

0x2c81,	// (0x0003ae78) bg_status_flat_pane_g5

0x2c89,	// (0x0003ae80) bg_status_flat_pane_g6

0x2c91,	// (0x0003ae88) bg_status_flat_pane_g7

0x89f9,	// (0x00040bf0) tabs_3_active_pane_t1_ParamLimits

0x89f9,	// (0x00040bf0) tabs_3_passive_pane_t1_ParamLimits

0x8a13,	// (0x00040c0a) tabs_4_active_pane_t1_ParamLimits

0x8a13,	// (0x00040c0a) tabs_4_1_passive_pane_t1_ParamLimits

0x9569,	// (0x00041760) tabs_2_active_pane_t1_ParamLimits

0x9569,	// (0x00041760) tabs_2_passive_pane_t1_ParamLimits

0xb1df,	// (0x000433d6) bg_active_tab_pane_cp4_ParamLimits

0x957b,	// (0x00041772) tabs_2_long_active_pane_t1_ParamLimits

0x1f1b,	// (0x0003a112) bg_passive_tab_pane_cp4_ParamLimits

0x0811,	// (0x00038a08) list_single_midp_graphic_pane_t1_ParamLimits

0xb1df,	// (0x000433d6) bg_active_tab_pane_cp5_ParamLimits

0x958e,	// (0x00041785) tabs_3_long_active_pane_t1_ParamLimits

0x1f1b,	// (0x0003a112) bg_passive_tab_pane_cp5_ParamLimits

0x0811,	// (0x00038a08) list_single_midp_graphic_pane_t1

0xa535,	// (0x0004272c) bg_status_flat_pane_ParamLimits

0x20d5,	// (0x0003a2cc) indicator_pane_cp2_ParamLimits

0x20d5,	// (0x0003a2cc) indicator_pane_cp2

0xbcbb,	// (0x00043eb2) navi_pane_srt_ParamLimits

0xbcbb,	// (0x00043eb2) navi_pane_srt

0x2224,	// (0x0003a41b) popup_clock_digital_analogue_window_cp1

0xb223,	// (0x0004341a) indicator_pane_t1

0xf36f,	// (0x00047566) copy_highlight_pane

0xf36f,	// (0x00047566) cursor_graphics_pane

0xf36f,	// (0x00047566) graphic_within_text_pane

0xf36f,	// (0x00047566) link_highlight_pane

0x3460,	// (0x0003b657) popup_preview_text_window_t5_ParamLimits

0x3460,	// (0x0003b657) popup_preview_text_window_t5

0xf3d7,	// (0x000475ce) cursor_digital_pane

0xf3d7,	// (0x000475ce) cursor_primary_pane

0xf3e8,	// (0x000475df) cursor_primary_small_pane

0xf3f0,	// (0x000475e7) cursor_secondary_pane

0xf3f8,	// (0x000475ef) cursor_title_pane

0xf3d7,	// (0x000475ce) link_highlight_digital_pane

0xf3df,	// (0x000475d6) link_highlight_primary_pane

0xf3e8,	// (0x000475df) link_highlight_primary_small_pane

0xf3f0,	// (0x000475e7) link_highlight_secondary_pane

0xf3f8,	// (0x000475ef) link_highlight_title_pane

0xf3d7,	// (0x000475ce) copy_highlight_digital_pane

0xf3d7,	// (0x000475ce) copy_highlight_primary_pane

0xf3e8,	// (0x000475df) copy_highlight_primary_small_pane

0xf3f0,	// (0x000475e7) copy_highlight_secondary_pane

0xf3f8,	// (0x000475ef) copy_highlight_title_pane

0xf3f0,	// (0x000475e7) graphic_text_digital_pane

0x2cff,	// (0x0003aef6) graphic_text_primary_pane

0x2d08,	// (0x0003aeff) graphic_text_primary_small_pane

0xf3e8,	// (0x000475df) graphic_text_secondary_pane

0xf3d7,	// (0x000475ce) graphic_text_title_pane

0x9a55,	// (0x00041c4c) cursor_primary_pane_g1

0x2cf1,	// (0x0003aee8) cursor_text_primary_t1

0xc1a3,	// (0x0004439a) cursor_primary_small_pane_g1

0x2ce3,	// (0x0003aeda) cursor_text_primary_small_t1

0xc199,	// (0x00044390) cursor_primary_small_pane_g1_copy1

0x2ccb,	// (0x0003aec2) cursor_text_primary_small_t1_copy1

0x2ca9,	// (0x0003aea0) cursor_text_title_t1

0xc18f,	// (0x00044386) cursor_title_pane_g1

0x9a55,	// (0x00041c4c) cursor_digital_pane_g1

0xf400,	// (0x000475f7) cursor_text_digital_t1

0xf40e,	// (0x00047605) link_highlight_primary_pane_g1

0x2c52,	// (0x0003ae49) link_highlight_primary_pane_t1

0xf40e,	// (0x00047605) link_highlight_primary_small_pane_g1

0xf416,	// (0x0004760d) link_highlight_primary_small_pane_t1

0xf40e,	// (0x00047605) link_highlight_secondary_pane_g1

0xf425,	// (0x0004761c) link_highlight_secondary_pane_t1

0x2bb7,	// (0x0003adae) link_highlight_title_pane_g1

0x2bce,	// (0x0003adc5) link_highlight_title_pane_t1

0x2bb7,	// (0x0003adae) link_highlight_digital_pane_g1

0x2bbf,	// (0x0003adb6) link_highlight_digital_pane_t1

0x2a71,	// (0x0003ac68) copy_highlight_primary_pane_g1

0x2a97,	// (0x0003ac8e) copy_highlight_primary_pane_t1

0x2a71,	// (0x0003ac68) copy_highlight_primary_small_pane_g1

0x2a88,	// (0x0003ac7f) copy_highlight_primary_small_pane_t1

0xf434,	// (0x0004762b) copy_highlight_secondary_pane_g1

0xf43c,	// (0x00047633) copy_highlight_secondary_pane_t1

0x2a71,	// (0x0003ac68) copy_highlight_title_pane_g1

0x2a79,	// (0x0003ac70) copy_highlight_title_pane_t1

0x2a71,	// (0x0003ac68) copy_highlight_digital_pane_g1

0x3cfa,	// (0x0003bef1) copy_highlight_digital_pane_t1

0x3c4e,	// (0x0003be45) graphic_text_primary_pane_g1

0x3cde,	// (0x0003bed5) graphic_text_primary_pane_t1

0x3cec,	// (0x0003bee3) graphic_text_primary_pane_t2

0x0001,

0xf9b3,	// (0x00047baa) graphic_text_primary_pane_t

0x3cba,	// (0x0003beb1) graphic_text_primary_small_pane_g1

0x3cc2,	// (0x0003beb9) graphic_text_primary_small_pane_t1

0x3cd0,	// (0x0003bec7) graphic_text_primary_small_pane_t2

0x0001,

0xf9ae,	// (0x00047ba5) graphic_text_primary_small_pane_t

0x3c96,	// (0x0003be8d) graphic_text_secondary_pane_g1

0x3c9e,	// (0x0003be95) graphic_text_secondary_pane_t1

0x3cac,	// (0x0003bea3) graphic_text_secondary_pane_t2

0x0001,

0xf9a9,	// (0x00047ba0) graphic_text_secondary_pane_t

0x3c72,	// (0x0003be69) graphic_text_title_pane_g1

0x3c7a,	// (0x0003be71) graphic_text_title_pane_t1

0x3c88,	// (0x0003be7f) graphic_text_title_pane_t2

0x0001,

0xf9a4,	// (0x00047b9b) graphic_text_title_pane_t

0x3c4e,	// (0x0003be45) graphic_text_digital_pane_g1

0x3c56,	// (0x0003be4d) graphic_text_digital_pane_t1

0x3c64,	// (0x0003be5b) graphic_text_digital_pane_t2

0x0001,

0xf99f,	// (0x00047b96) graphic_text_digital_pane_t

0xb1df,	// (0x000433d6) navi_icon_pane_srt_ParamLimits

0xb1df,	// (0x000433d6) navi_icon_pane_srt

0xb183,	// (0x0004337a) navi_midp_pane_srt

0xb183,	// (0x0004337a) navi_navi_pane_srt

0xb1df,	// (0x000433d6) navi_text_pane_srt_ParamLimits

0xb1df,	// (0x000433d6) navi_text_pane_srt

0x3c19,	// (0x0003be10) navi_navi_icon_text_pane_srt

0x3c21,	// (0x0003be18) navi_navi_pane_srt_g1_ParamLimits

0x3c21,	// (0x0003be18) navi_navi_pane_srt_g1

0x3c33,	// (0x0003be2a) navi_navi_pane_srt_g2_ParamLimits

0x3c33,	// (0x0003be2a) navi_navi_pane_srt_g2

0x0001,

0xf99a,	// (0x00047b91) navi_navi_pane_srt_g_ParamLimits

0xf99a,	// (0x00047b91) navi_navi_pane_srt_g

0x3c45,	// (0x0003be3c) navi_navi_tabs_pane_srt

0x3c19,	// (0x0003be10) navi_navi_text_pane_srt

0x3c19,	// (0x0003be10) navi_navi_volume_pane_srt

0x3c0a,	// (0x0003be01) navi_navi_text_pane_srt_t1

0x0cde,	// (0x00038ed5) navi_navi_volume_pane_srt_g1

0x0ce6,	// (0x00038edd) volume_small_pane_srt_ParamLimits

0x0ce6,	// (0x00038edd) volume_small_pane_srt

0xf44b,	// (0x00047642) volume_small_pane_srt_g1_ParamLimits

0xf44b,	// (0x00047642) volume_small_pane_srt_g1

0xf45b,	// (0x00047652) volume_small_pane_srt_g2_ParamLimits

0xf45b,	// (0x00047652) volume_small_pane_srt_g2

0xf46c,	// (0x00047663) volume_small_pane_srt_g3_ParamLimits

0xf46c,	// (0x00047663) volume_small_pane_srt_g3

0xf47d,	// (0x00047674) volume_small_pane_srt_g4_ParamLimits

0xf47d,	// (0x00047674) volume_small_pane_srt_g4

0xf48e,	// (0x00047685) volume_small_pane_srt_g5_ParamLimits

0xf48e,	// (0x00047685) volume_small_pane_srt_g5

0xf49f,	// (0x00047696) volume_small_pane_srt_g6_ParamLimits

0xf49f,	// (0x00047696) volume_small_pane_srt_g6

0xf4b0,	// (0x000476a7) volume_small_pane_srt_g7_ParamLimits

0xf4b0,	// (0x000476a7) volume_small_pane_srt_g7

0xf4c1,	// (0x000476b8) volume_small_pane_srt_g8_ParamLimits

0xf4c1,	// (0x000476b8) volume_small_pane_srt_g8

0xf4d2,	// (0x000476c9) volume_small_pane_srt_g9_ParamLimits

0xf4d2,	// (0x000476c9) volume_small_pane_srt_g9

0xf4e3,	// (0x000476da) volume_small_pane_srt_g10_ParamLimits

0xf4e3,	// (0x000476da) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x00047945) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x00047945) volume_small_pane_srt_g

0x8cfa,	// (0x00040ef1) query_popup_data_pane_cp2

0x3bf0,	// (0x0003bde7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3bf0,	// (0x0003bde7) navi_navi_icon_text_pane_srt_t1

0x2cff,	// (0x0003aef6) navi_tabs_2_long_pane_srt

0x2cff,	// (0x0003aef6) navi_tabs_2_pane_srt

0x2cff,	// (0x0003aef6) navi_tabs_3_long_pane_srt

0x2cff,	// (0x0003aef6) navi_tabs_3_pane_srt

0x2cff,	// (0x0003aef6) navi_tabs_4_pane_srt

0xa845,	// (0x00042a3c) tabs_2_active_pane_srt_ParamLimits

0xa845,	// (0x00042a3c) tabs_2_active_pane_srt

0xa855,	// (0x00042a4c) tabs_2_passive_pane_srt_ParamLimits

0xa855,	// (0x00042a4c) tabs_2_passive_pane_srt

0x24b6,	// (0x0003a6ad) bg_passive_tab_pane_cp1_srt_ParamLimits

0x24b6,	// (0x0003a6ad) bg_passive_tab_pane_cp1_srt

0xc7be,	// (0x000449b5) bg_passive_tab_pane_g1_cp1_srt

0x98c0,	// (0x00041ab7) bg_passive_tab_pane_g2_cp1_srt

0xc7c7,	// (0x000449be) bg_passive_tab_pane_g3_cp1_srt

0xb1d1,	// (0x000433c8) bg_active_tab_pane_cp1_srt_ParamLimits

0xb1d1,	// (0x000433c8) bg_active_tab_pane_cp1_srt

0xc7d0,	// (0x000449c7) tabs_2_active_pane_srt_g1

0xc7d8,	// (0x000449cf) tabs_2_active_pane_srt_t1_ParamLimits

0xc7d8,	// (0x000449cf) tabs_2_active_pane_srt_t1

0xc7be,	// (0x000449b5) bg_active_tab_pane_g1_cp1_srt

0x98c0,	// (0x00041ab7) bg_active_tab_pane_g2_cp1_srt

0xc7c7,	// (0x000449be) bg_active_tab_pane_g3_cp1_srt

0xa812,	// (0x00042a09) tabs_3_active_pane_srt_ParamLimits

0xa812,	// (0x00042a09) tabs_3_active_pane_srt

0xa823,	// (0x00042a1a) tabs_3_passive_pane_cp_srt_ParamLimits

0xa823,	// (0x00042a1a) tabs_3_passive_pane_cp_srt

0xa834,	// (0x00042a2b) tabs_3_passive_pane_srt_ParamLimits

0xa834,	// (0x00042a2b) tabs_3_passive_pane_srt

0x24b6,	// (0x0003a6ad) bg_passive_tab_pane_cp2_srt_ParamLimits

0x24b6,	// (0x0003a6ad) bg_passive_tab_pane_cp2_srt

0x9a5f,	// (0x00041c56) bg_passive_tab_pane_g1_cp2_srt

0x98c0,	// (0x00041ab7) bg_passive_tab_pane_g2_cp2_srt

0x9a68,	// (0x00041c5f) bg_passive_tab_pane_g3_cp2_srt

0xb1d1,	// (0x000433c8) bg_active_tab_pane_cp2_srt_ParamLimits

0xb1d1,	// (0x000433c8) bg_active_tab_pane_cp2_srt

0xc7a0,	// (0x00044997) tabs_3_active_pane_srt_g1

0xc7a8,	// (0x0004499f) tabs_3_active_pane_srt_t1_ParamLimits

0xc7a8,	// (0x0004499f) tabs_3_active_pane_srt_t1

0x9a5f,	// (0x00041c56) bg_active_tab_pane_g1_cp2_srt

0x98c0,	// (0x00041ab7) bg_active_tab_pane_g2_cp2_srt

0x9a68,	// (0x00041c5f) bg_active_tab_pane_g3_cp2_srt

0x0c43,	// (0x00038e3a) tabs_4_active_pane_srt_ParamLimits

0x0c43,	// (0x00038e3a) tabs_4_active_pane_srt

0x0c55,	// (0x00038e4c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0c55,	// (0x00038e4c) tabs_4_passive_pane_cp2_srt

0x01bf,	// (0x000383b6) aid_size_cell_toolbar

0x37fd,	// (0x0003b9f4) main_idle_act_pane_ParamLimits

0x9eb0,	// (0x000420a7) popup_large_graphic_colour_window_ParamLimits

0xa3a4,	// (0x0004259b) popup_toolbar_window_ParamLimits

0xa3a4,	// (0x0004259b) popup_toolbar_window

0xd4c9,	// (0x000456c0) list_single_graphic_2heading_pane_ParamLimits

0xd4c9,	// (0x000456c0) list_single_graphic_2heading_pane

0xb841,	// (0x00043a38) aid_size_cell_apps_grid_lsc_pane

0xb853,	// (0x00043a4a) aid_size_cell_apps_grid_prt_pane

0x1f1b,	// (0x0003a112) bg_wml_button_pane_cp1_ParamLimits

0x1f1b,	// (0x0003a112) bg_wml_button_pane_cp1

0xbf35,	// (0x0004412c) form_midp_field_text_pane_t1_ParamLimits

0x24b6,	// (0x0003a6ad) input_focus_pane_cp050_ParamLimits

0x2726,	// (0x0003a91d) list_midp_form_text_pane_ParamLimits

0x26c9,	// (0x0003a8c0) input_focus_pane_cp051_ParamLimits

0x26dd,	// (0x0003a8d4) list_midp_choice_pane_ParamLimits

0xbe9a,	// (0x00044091) list_single_2graphic_pane_cp3_ParamLimits

0xbe9a,	// (0x00044091) list_single_2graphic_pane_cp3

0xbeae,	// (0x000440a5) list_single_midp_graphic_pane_ParamLimits

0xbeae,	// (0x000440a5) list_single_midp_graphic_pane

0xef25,	// (0x0004711c) list_single_graphic_2heading_pane_g1_ParamLimits

0xef25,	// (0x0004711c) list_single_graphic_2heading_pane_g1

0xef31,	// (0x00047128) list_single_graphic_2heading_pane_g4_ParamLimits

0xef31,	// (0x00047128) list_single_graphic_2heading_pane_g4

0xef3d,	// (0x00047134) list_single_graphic_2heading_pane_g5_ParamLimits

0xef3d,	// (0x00047134) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x00047998) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x00047998) list_single_graphic_2heading_pane_g

0xef49,	// (0x00047140) list_single_graphic_2heading_pane_t1_ParamLimits

0xef49,	// (0x00047140) list_single_graphic_2heading_pane_t1

0xef5d,	// (0x00047154) list_single_graphic_2heading_pane_t2_ParamLimits

0xef5d,	// (0x00047154) list_single_graphic_2heading_pane_t2

0xef77,	// (0x0004716e) list_single_graphic_2heading_pane_t3_ParamLimits

0xef77,	// (0x0004716e) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x0004799f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x0004799f) list_single_graphic_2heading_pane_t

0x2380,	// (0x0003a577) bg_popup_sub_pane_cp2

0x23aa,	// (0x0003a5a1) grid_toobar_pane

0x0780,	// (0x00038977) cell_toolbar_pane_ParamLimits

0x0780,	// (0x00038977) cell_toolbar_pane

0x23e6,	// (0x0003a5dd) cell_toolbar_pane_g1_ParamLimits

0x23e6,	// (0x0003a5dd) cell_toolbar_pane_g1

0xbe5a,	// (0x00044051) cell_toolbar_pane_g2_ParamLimits

0xbe5a,	// (0x00044051) cell_toolbar_pane_g2

0x0001,

0xf7af,	// (0x000479a6) cell_toolbar_pane_g_ParamLimits

0xf7af,	// (0x000479a6) cell_toolbar_pane_g

0x241c,	// (0x0003a613) grid_highlight_pane_cp2_ParamLimits

0x241c,	// (0x0003a613) grid_highlight_pane_cp2

0x2436,	// (0x0003a62d) toolbar_button_pane

0x2442,	// (0x0003a639) toolbar_button_pane_g1

0x244a,	// (0x0003a641) toolbar_button_pane_g2

0x2452,	// (0x0003a649) toolbar_button_pane_g3

0x245a,	// (0x0003a651) toolbar_button_pane_g4

0x2462,	// (0x0003a659) toolbar_button_pane_g5

0x246a,	// (0x0003a661) toolbar_button_pane_g6

0x2472,	// (0x0003a669) toolbar_button_pane_g7

0x247a,	// (0x0003a671) toolbar_button_pane_g8

0x2482,	// (0x0003a679) toolbar_button_pane_g9

0x0009,

0xf7b4,	// (0x000479ab) toolbar_button_pane_g

0x07b8,	// (0x000389af) list_single_2graphic_pane_g1_cp3_ParamLimits

0x07b8,	// (0x000389af) list_single_2graphic_pane_g1_cp3

0xa612,	// (0x00042809) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa612,	// (0x00042809) list_single_2graphic_pane_g2_cp3

0x07d5,	// (0x000389cc) list_single_2graphic_pane_g3_cp3

0x07dd,	// (0x000389d4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x07dd,	// (0x000389d4) list_single_2graphic_pane_g4_cp3

0xa623,	// (0x0004281a) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa623,	// (0x0004281a) list_single_2graphic_pane_t1_cp3

0x0805,	// (0x000389fc) list_single_midp_graphic_pane_g2_ParamLimits

0x0805,	// (0x000389fc) list_single_midp_graphic_pane_g2

0x01c7,	// (0x000383be) aid_zoom_text_primary

0xef09,	// (0x00047100) aid_zoom_text_secondary

0x9abf,	// (0x00041cb6) status_small_pane_g7_ParamLimits

0x9abf,	// (0x00041cb6) status_small_pane_g7

0x9ae2,	// (0x00041cd9) status_small_pane_t1_ParamLimits

0x8941,	// (0x00040b38) title_pane_g2

0x0003,

0xf54e,	// (0x00047745) title_pane_g

0x8d54,	// (0x00040f4b) aid_size_cell_colour_1_pane_ParamLimits

0x8d54,	// (0x00040f4b) aid_size_cell_colour_1_pane

0x8d68,	// (0x00040f5f) aid_size_cell_colour_2_pane_ParamLimits

0x8d68,	// (0x00040f5f) aid_size_cell_colour_2_pane

0x8d7c,	// (0x00040f73) aid_size_cell_colour_3_pane_ParamLimits

0x8d7c,	// (0x00040f73) aid_size_cell_colour_3_pane

0x8d90,	// (0x00040f87) aid_size_cell_colour_4_pane_ParamLimits

0x8d90,	// (0x00040f87) aid_size_cell_colour_4_pane

0xed9b,	// (0x00046f92) title_pane_stacon_g1_ParamLimits

0xed9b,	// (0x00046f92) title_pane_stacon_g1

0x2aee,	// (0x0003ace5) popup_note_wait_window_g3_ParamLimits

0x2aee,	// (0x0003ace5) popup_note_wait_window_g3

0x2b64,	// (0x0003ad5b) popup_note_wait_window_t5_ParamLimits

0x2b64,	// (0x0003ad5b) popup_note_wait_window_t5

0xb183,	// (0x0004337a) main_feb_china_hwr_fs_writing_pane

0x9d32,	// (0x00041f29) popup_feb_china_hwr_fs_window_ParamLimits

0x9d32,	// (0x00041f29) popup_feb_china_hwr_fs_window

0xa63f,	// (0x00042836) aid_size_cell_hwr_fs_ParamLimits

0xa63f,	// (0x00042836) aid_size_cell_hwr_fs

0x24b6,	// (0x0003a6ad) bg_popup_sub_pane_cp3_ParamLimits

0x24b6,	// (0x0003a6ad) bg_popup_sub_pane_cp3

0xa654,	// (0x0004284b) grid_hwr_fs_pane_ParamLimits

0xa654,	// (0x0004284b) grid_hwr_fs_pane

0x0854,	// (0x00038a4b) linegrid_hwr_fs_pane_ParamLimits

0x0854,	// (0x00038a4b) linegrid_hwr_fs_pane

0xa66c,	// (0x00042863) cell_hwr_fs_pane_ParamLimits

0xa66c,	// (0x00042863) cell_hwr_fs_pane

0x24c2,	// (0x0003a6b9) linegrid_hwr_fs_pane_g1_ParamLimits

0x24c2,	// (0x0003a6b9) linegrid_hwr_fs_pane_g1

0xbe6e,	// (0x00044065) linegrid_hwr_fs_pane_g2_ParamLimits

0xbe6e,	// (0x00044065) linegrid_hwr_fs_pane_g2

0x24e0,	// (0x0003a6d7) linegrid_hwr_fs_pane_g3_ParamLimits

0x24e0,	// (0x0003a6d7) linegrid_hwr_fs_pane_g3

0xa692,	// (0x00042889) linegrid_hwr_fs_pane_g4_ParamLimits

0xa692,	// (0x00042889) linegrid_hwr_fs_pane_g4

0x08a0,	// (0x00038a97) linegrid_hwr_fs_pane_g5_ParamLimits

0x08a0,	// (0x00038a97) linegrid_hwr_fs_pane_g5

0x0004,

0xf7da,	// (0x000479d1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7da,	// (0x000479d1) linegrid_hwr_fs_pane_g

0x24ec,	// (0x0003a6e3) cell_hwr_fs_pane_g1_ParamLimits

0x24ec,	// (0x0003a6e3) cell_hwr_fs_pane_g1

0x22ba,	// (0x0003a4b1) cell_hwr_fs_pane_g2_ParamLimits

0x22ba,	// (0x0003a4b1) cell_hwr_fs_pane_g2

0xbe80,	// (0x00044077) cell_hwr_fs_pane_g3_ParamLimits

0xbe80,	// (0x00044077) cell_hwr_fs_pane_g3

0xbe8d,	// (0x00044084) cell_hwr_fs_pane_g4_ParamLimits

0xbe8d,	// (0x00044084) cell_hwr_fs_pane_g4

0x0003,

0xf7e5,	// (0x000479dc) cell_hwr_fs_pane_g_ParamLimits

0xf7e5,	// (0x000479dc) cell_hwr_fs_pane_g

0xa6ac,	// (0x000428a3) cell_hwr_fs_pane_t1

0xb183,	// (0x0004337a) grid_highlight_pane_cp6

0xb183,	// (0x0004337a) main_idle_act2_pane

0xb697,	// (0x0004388e) aid_inside_area_popup_secondary

0xc2c2,	// (0x000444b9) aid_inside_area_window_primary_ParamLimits

0xc2c2,	// (0x000444b9) aid_inside_area_window_primary

0xc7f6,	// (0x000449ed) ai2_news_ticker_pane

0x3d11,	// (0x0003bf08) aid_size_cell_ai1_link_ParamLimits

0x3d11,	// (0x0003bf08) aid_size_cell_ai1_link

0xc7fe,	// (0x000449f5) popup_ai2_data_window_ParamLimits

0xc7fe,	// (0x000449f5) popup_ai2_data_window

0x3d41,	// (0x0003bf38) popup_ai2_link_window_ParamLimits

0x3d41,	// (0x0003bf38) popup_ai2_link_window

0x24b6,	// (0x0003a6ad) bg_popup_sub_pane_cp4_ParamLimits

0x24b6,	// (0x0003a6ad) bg_popup_sub_pane_cp4

0x3d55,	// (0x0003bf4c) grid_ai2_link_pane_ParamLimits

0x3d55,	// (0x0003bf4c) grid_ai2_link_pane

0x3d6c,	// (0x0003bf63) popup_ai2_link_window_g1_ParamLimits

0x3d6c,	// (0x0003bf63) popup_ai2_link_window_g1

0x3d78,	// (0x0003bf6f) popup_ai2_link_window_g2_ParamLimits

0x3d78,	// (0x0003bf6f) popup_ai2_link_window_g2

0x0001,

0xf9b8,	// (0x00047baf) popup_ai2_link_window_g_ParamLimits

0xf9b8,	// (0x00047baf) popup_ai2_link_window_g

0x3d87,	// (0x0003bf7e) ai2_mp_button_pane

0x3d8f,	// (0x0003bf86) ai2_mp_volume_pane

0x26c9,	// (0x0003a8c0) bg_popup_sub_pane_cp5_ParamLimits

0x26c9,	// (0x0003a8c0) bg_popup_sub_pane_cp5

0x3d97,	// (0x0003bf8e) heading_ai2_gene_pane_ParamLimits

0x3d97,	// (0x0003bf8e) heading_ai2_gene_pane

0x3da3,	// (0x0003bf9a) list_ai2_gene_pane_ParamLimits

0x3da3,	// (0x0003bf9a) list_ai2_gene_pane

0x3deb,	// (0x0003bfe2) cell_ai2_link_pane_ParamLimits

0x3deb,	// (0x0003bfe2) cell_ai2_link_pane

0x3e01,	// (0x0003bff8) cell_ai2_link_pane_g1

0xb183,	// (0x0004337a) grid_highlight_pane_cp7

0x0cfb,	// (0x00038ef2) ai2_mp_volume_pane_g1

0x3ed1,	// (0x0003c0c8) ai2_mp_volume_pane_g2

0x3e46,	// (0x0003c03d) list_ai2_gene_pane_t1

0x3ed9,	// (0x0003c0d0) ai2_mp_volume_pane_g3

0x0002,

0xf9d1,	// (0x00047bc8) ai2_mp_volume_pane_g

0xa865,	// (0x00042a5c) volume_small_pane_cp3

0x3ee1,	// (0x0003c0d8) aid_size_cell_ai2_button

0x3ee9,	// (0x0003c0e0) grid_ai2_button_pane

0x3ef2,	// (0x0003c0e9) cell_ai2_button_pane_ParamLimits

0x3ef2,	// (0x0003c0e9) cell_ai2_button_pane

0xb179,	// (0x00043370) cell_ai2_button_pane_g1

0xb183,	// (0x0004337a) grid_highlight_pane_cp8

0x3e91,	// (0x0003c088) ai2_gene_pane_t1_ParamLimits

0x3e91,	// (0x0003c088) ai2_gene_pane_t1

0x9cb0,	// (0x00041ea7) aid_height_parent_landscape

0xc510,	// (0x00044707) aid_height_set_list

0x37fd,	// (0x0003b9f4) aid_size_parent

0xc774,	// (0x0004496b) aid_size_cell_graphic_pane_ParamLimits

0x3db3,	// (0x0003bfaa) popup_ai2_data_window_g1_ParamLimits

0x3db3,	// (0x0003bfaa) popup_ai2_data_window_g1

0x3dbf,	// (0x0003bfb6) ai2_news_ticker_pane_g1

0x3dc7,	// (0x0003bfbe) ai2_news_ticker_pane_g2

0x0001,

0xf9bd,	// (0x00047bb4) ai2_news_ticker_pane_g

0x3dcf,	// (0x0003bfc6) ai2_news_ticker_pane_t1

0x3ddd,	// (0x0003bfd4) ai2_news_ticker_pane_t2

0x0001,

0xf9c2,	// (0x00047bb9) ai2_news_ticker_pane_t

0x3e0a,	// (0x0003c001) heading_ai2_gene_pane_g1

0x3e12,	// (0x0003c009) heading_ai2_gene_pane_t1_ParamLimits

0x3e12,	// (0x0003c009) heading_ai2_gene_pane_t1

0x3e27,	// (0x0003c01e) list_highlight_pane_cp6

0x3e2f,	// (0x0003c026) ai2_gene_pane_ParamLimits

0x3e2f,	// (0x0003c026) ai2_gene_pane

0x3e54,	// (0x0003c04b) list_ai2_gene_pane_t2

0x0001,

0xf9c7,	// (0x00047bbe) list_ai2_gene_pane_t

0x3e62,	// (0x0003c059) list_highlight_pane_cp8_ParamLimits

0x3e62,	// (0x0003c059) list_highlight_pane_cp8

0x3e73,	// (0x0003c06a) ai2_gene_pane_g1_ParamLimits

0x3e73,	// (0x0003c06a) ai2_gene_pane_g1

0x3e85,	// (0x0003c07c) ai2_gene_pane_g2_ParamLimits

0x3e85,	// (0x0003c07c) ai2_gene_pane_g2

0x0001,

0xf9cc,	// (0x00047bc3) ai2_gene_pane_g_ParamLimits

0xf9cc,	// (0x00047bc3) ai2_gene_pane_g

0xb530,	// (0x00043727) scroll_pane_cp12

0x9c6d,	// (0x00041e64) control_pane_t3_ParamLimits

0x9c6d,	// (0x00041e64) control_pane_t3

0x9ad3,	// (0x00041cca) status_small_pane_g8_ParamLimits

0x9ad3,	// (0x00041cca) status_small_pane_g8

0x9df5,	// (0x00041fec) popup_find_window_ParamLimits

0xa0a8,	// (0x0004229f) popup_note_image_window_ParamLimits

0xd2e5,	// (0x000454dc) list_double2_graphic_pane_vc_g1_ParamLimits

0xd2e5,	// (0x000454dc) list_double2_graphic_pane_vc_g1

0xd2f1,	// (0x000454e8) list_double2_graphic_pane_vc_g2_ParamLimits

0xd2f1,	// (0x000454e8) list_double2_graphic_pane_vc_g2

0xd2fd,	// (0x000454f4) list_double2_graphic_pane_vc_g3_ParamLimits

0xd2fd,	// (0x000454f4) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x000477b8) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x000477b8) list_double2_graphic_pane_vc_g

0xd309,	// (0x00045500) list_double2_graphic_pane_vc_t1_ParamLimits

0xd309,	// (0x00045500) list_double2_graphic_pane_vc_t1

0xd2f1,	// (0x000454e8) list_single_heading_pane_vc_g1_ParamLimits

0xd2f1,	// (0x000454e8) list_single_heading_pane_vc_g1

0xd2fd,	// (0x000454f4) list_single_heading_pane_vc_g2_ParamLimits

0xd2fd,	// (0x000454f4) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000477bf) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000477bf) list_single_heading_pane_vc_g

0xd40e,	// (0x00045605) list_single_heading_pane_vc_t1_ParamLimits

0xd40e,	// (0x00045605) list_single_heading_pane_vc_t1

0xd424,	// (0x0004561b) list_single_heading_pane_vc_t2_ParamLimits

0xd424,	// (0x0004561b) list_single_heading_pane_vc_t2

0x0001,

0xf7c9,	// (0x000479c0) list_single_heading_pane_vc_t_ParamLimits

0xf7c9,	// (0x000479c0) list_single_heading_pane_vc_t

0xd436,	// (0x0004562d) list_setting_number_pane_vc_g1_ParamLimits

0xd436,	// (0x0004562d) list_setting_number_pane_vc_g1

0xd442,	// (0x00045639) list_setting_number_pane_vc_g2_ParamLimits

0xd442,	// (0x00045639) list_setting_number_pane_vc_g2

0x0001,

0xf7ce,	// (0x000479c5) list_setting_number_pane_vc_g_ParamLimits

0xf7ce,	// (0x000479c5) list_setting_number_pane_vc_g

0xd44e,	// (0x00045645) list_setting_number_pane_vc_t1_ParamLimits

0xd44e,	// (0x00045645) list_setting_number_pane_vc_t1

0xd462,	// (0x00045659) list_setting_number_pane_vc_t2_ParamLimits

0xd462,	// (0x00045659) list_setting_number_pane_vc_t2

0xd47e,	// (0x00045675) list_setting_number_pane_vc_t3_ParamLimits

0xd47e,	// (0x00045675) list_setting_number_pane_vc_t3

0x0002,

0xf7d3,	// (0x000479ca) list_setting_number_pane_vc_t_ParamLimits

0xf7d3,	// (0x000479ca) list_setting_number_pane_vc_t

0xd4aa,	// (0x000456a1) set_value_pane_vc_ParamLimits

0xd4aa,	// (0x000456a1) set_value_pane_vc

0xd4c9,	// (0x000456c0) list_double2_graphic_pane_vc_ParamLimits

0xd4c9,	// (0x000456c0) list_double2_graphic_pane_vc

0x39cd,	// (0x0003bbc4) list_double2_large_graphic_pane_vc_ParamLimits

0x39cd,	// (0x0003bbc4) list_double2_large_graphic_pane_vc

0xd4c9,	// (0x000456c0) list_double2_pane_vc_ParamLimits

0xd4c9,	// (0x000456c0) list_double2_pane_vc

0xd4c9,	// (0x000456c0) list_double_graphic_heading_pane_vc_ParamLimits

0xd4c9,	// (0x000456c0) list_double_graphic_heading_pane_vc

0xd4c9,	// (0x000456c0) list_double_graphic_pane_vc_ParamLimits

0xd4c9,	// (0x000456c0) list_double_graphic_pane_vc

0xd4c9,	// (0x000456c0) list_double_heading_pane_vc_ParamLimits

0xd4c9,	// (0x000456c0) list_double_heading_pane_vc

0x39df,	// (0x0003bbd6) list_double_large_graphic_pane_vc_ParamLimits

0x39df,	// (0x0003bbd6) list_double_large_graphic_pane_vc

0xd4c9,	// (0x000456c0) list_double_number_pane_vc_ParamLimits

0xd4c9,	// (0x000456c0) list_double_number_pane_vc

0xd4c9,	// (0x000456c0) list_double_pane_vc_ParamLimits

0xd4c9,	// (0x000456c0) list_double_pane_vc

0xd4c9,	// (0x000456c0) list_double_time_pane_vc_ParamLimits

0xd4c9,	// (0x000456c0) list_double_time_pane_vc

0xd4c9,	// (0x000456c0) list_setting_number_pane_vc_ParamLimits

0xd4c9,	// (0x000456c0) list_setting_number_pane_vc

0xd4c9,	// (0x000456c0) list_setting_pane_vc_ParamLimits

0xd4c9,	// (0x000456c0) list_setting_pane_vc

0xd4c9,	// (0x000456c0) list_single_graphic_heading_pane_vc_ParamLimits

0xd4c9,	// (0x000456c0) list_single_graphic_heading_pane_vc

0xd4c9,	// (0x000456c0) list_single_heading_pane_vc_ParamLimits

0xd4c9,	// (0x000456c0) list_single_heading_pane_vc

0xd4c9,	// (0x000456c0) list_single_number_heading_pane_vc_ParamLimits

0xd4c9,	// (0x000456c0) list_single_number_heading_pane_vc

0xd36b,	// (0x00045562) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd36b,	// (0x00045562) list_double_graphic_heading_pane_vc_g1

0xd2f1,	// (0x000454e8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd2f1,	// (0x000454e8) list_double_graphic_heading_pane_vc_g2

0xd2fd,	// (0x000454f4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd2fd,	// (0x000454f4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d8,	// (0x00047bcf) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d8,	// (0x00047bcf) list_double_graphic_heading_pane_vc_g

0xd4dc,	// (0x000456d3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd4dc,	// (0x000456d3) list_double_graphic_heading_pane_vc_t1

0xd4f0,	// (0x000456e7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd4f0,	// (0x000456e7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9df,	// (0x00047bd6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9df,	// (0x00047bd6) list_double_graphic_heading_pane_vc_t

0xd436,	// (0x0004562d) list_setting_pane_vc_g1_ParamLimits

0xd436,	// (0x0004562d) list_setting_pane_vc_g1

0xd442,	// (0x00045639) list_setting_pane_vc_g2_ParamLimits

0xd442,	// (0x00045639) list_setting_pane_vc_g2

0x0001,

0xf7ce,	// (0x000479c5) list_setting_pane_vc_g_ParamLimits

0xf7ce,	// (0x000479c5) list_setting_pane_vc_g

0xd508,	// (0x000456ff) list_setting_pane_vc_t1_ParamLimits

0xd508,	// (0x000456ff) list_setting_pane_vc_t1

0xd524,	// (0x0004571b) list_setting_pane_vc_t2_ParamLimits

0xd524,	// (0x0004571b) list_setting_pane_vc_t2

0x0001,

0xfa22,	// (0x00047c19) list_setting_pane_vc_t_ParamLimits

0xfa22,	// (0x00047c19) list_setting_pane_vc_t

0xd4aa,	// (0x000456a1) set_value_pane_cp_vc_ParamLimits

0xd4aa,	// (0x000456a1) set_value_pane_cp_vc

0xd2f1,	// (0x000454e8) list_single_number_heading_pane_vc_g1_ParamLimits

0xd2f1,	// (0x000454e8) list_single_number_heading_pane_vc_g1

0xd2fd,	// (0x000454f4) list_single_number_heading_pane_vc_g2_ParamLimits

0xd2fd,	// (0x000454f4) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000477bf) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000477bf) list_single_number_heading_pane_vc_g

0xd53e,	// (0x00045735) list_single_number_heading_pane_vc_t1_ParamLimits

0xd53e,	// (0x00045735) list_single_number_heading_pane_vc_t1

0xd554,	// (0x0004574b) list_single_number_heading_pane_vc_t2_ParamLimits

0xd554,	// (0x0004574b) list_single_number_heading_pane_vc_t2

0xd566,	// (0x0004575d) list_single_number_heading_pane_vc_t3_ParamLimits

0xd566,	// (0x0004575d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa27,	// (0x00047c1e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x00047c1e) list_single_number_heading_pane_vc_t

0xd578,	// (0x0004576f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd578,	// (0x0004576f) list_single_graphic_heading_pane_vc_g1

0xd2f1,	// (0x000454e8) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd2f1,	// (0x000454e8) list_single_graphic_heading_pane_vc_g4

0xd2fd,	// (0x000454f4) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd2fd,	// (0x000454f4) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2e,	// (0x00047c25) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2e,	// (0x00047c25) list_single_graphic_heading_pane_vc_g

0xd584,	// (0x0004577b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd584,	// (0x0004577b) list_single_graphic_heading_pane_vc_t1

0xd59a,	// (0x00045791) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd59a,	// (0x00045791) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x00047c2c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x00047c2c) list_single_graphic_heading_pane_vc_t

0xd2f1,	// (0x000454e8) list_double2_pane_vc_g1_ParamLimits

0xd2f1,	// (0x000454e8) list_double2_pane_vc_g1

0xd2fd,	// (0x000454f4) list_double2_pane_vc_g2_ParamLimits

0xd2fd,	// (0x000454f4) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x000477bf) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x000477bf) list_double2_pane_vc_g

0xd5ac,	// (0x000457a3) list_double2_pane_vc_t1_ParamLimits

0xd5ac,	// (0x000457a3) list_double2_pane_vc_t1

0xd377,	// (0x0004556e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd377,	// (0x0004556e) list_double2_large_graphic_pane_vc_g1

0xd383,	// (0x0004557a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd383,	// (0x0004557a) list_double2_large_graphic_pane_vc_g2

0xd38f,	// (0x00045586) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd38f,	// (0x00045586) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x000477dc) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x000477dc) list_double2_large_graphic_pane_vc_g

0xd39b,	// (0x00045592) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd39b,	// (0x00045592) list_double2_large_graphic_pane_vc_t1

0xd5c4,	// (0x000457bb) list_double_time_pane_vc_g1_ParamLimits

0xd5c4,	// (0x000457bb) list_double_time_pane_vc_g1

0xd5d0,	// (0x000457c7) list_double_time_pane_vc_g2_ParamLimits

0xd5d0,	// (0x000457c7) list_double_time_pane_vc_g2

0x0001,

0xfa3a,	// (0x00047c31) list_double_time_pane_vc_g_ParamLimits

0xfa3a,	// (0x00047c31) list_double_time_pane_vc_g

0xd5dc,	// (0x000457d3) list_double_time_pane_vc_t1_ParamLimits

0xd5dc,	// (0x000457d3) list_double_time_pane_vc_t1

0xd600,	// (0x000457f7) list_double_time_pane_vc_t2_ParamLimits

0xd600,	// (0x000457f7) list_double_time_pane_vc_t2

0xd64f,	// (0x00045846) list_double_time_pane_vc_t3_ParamLimits

0xd64f,	// (0x00045846) list_double_time_pane_vc_t3

0xd661,	// (0x00045858) list_double_time_pane_vc_t4_ParamLimits

0xd661,	// (0x00045858) list_double_time_pane_vc_t4

0x0003,

0xfa3f,	// (0x00047c36) list_double_time_pane_vc_t_ParamLimits

0xfa3f,	// (0x00047c36) list_double_time_pane_vc_t

0xd2f1,	// (0x000454e8) list_double_pane_vc_g1_ParamLimits

0xd2f1,	// (0x000454e8) list_double_pane_vc_g1

0xd2fd,	// (0x000454f4) list_double_pane_vc_g2_ParamLimits

0xd2fd,	// (0x000454f4) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x000477bf) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x000477bf) list_double_pane_vc_g

0xd675,	// (0x0004586c) list_double_pane_vc_t1_ParamLimits

0xd675,	// (0x0004586c) list_double_pane_vc_t1

0xd689,	// (0x00045880) list_double_pane_vc_t2_ParamLimits

0xd689,	// (0x00045880) list_double_pane_vc_t2

0x0001,

0xfa48,	// (0x00047c3f) list_double_pane_vc_t_ParamLimits

0xfa48,	// (0x00047c3f) list_double_pane_vc_t

0xd2f1,	// (0x000454e8) list_double_number_pane_vc_g1_ParamLimits

0xd2f1,	// (0x000454e8) list_double_number_pane_vc_g1

0xd2fd,	// (0x000454f4) list_double_number_pane_vc_g2_ParamLimits

0xd2fd,	// (0x000454f4) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x000477bf) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x000477bf) list_double_number_pane_vc_g

0xd6a1,	// (0x00045898) list_double_number_pane_vc_t1_ParamLimits

0xd6a1,	// (0x00045898) list_double_number_pane_vc_t1

0xd675,	// (0x0004586c) list_double_number_pane_vc_t2_ParamLimits

0xd675,	// (0x0004586c) list_double_number_pane_vc_t2

0xd6b3,	// (0x000458aa) list_double_number_pane_vc_t3_ParamLimits

0xd6b3,	// (0x000458aa) list_double_number_pane_vc_t3

0x0002,

0xfa4d,	// (0x00047c44) list_double_number_pane_vc_t_ParamLimits

0xfa4d,	// (0x00047c44) list_double_number_pane_vc_t

0xd6cb,	// (0x000458c2) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd6cb,	// (0x000458c2) list_double_large_graphic_pane_vc_g1

0xd6ed,	// (0x000458e4) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd6ed,	// (0x000458e4) list_double_large_graphic_pane_vc_g2

0xd701,	// (0x000458f8) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd701,	// (0x000458f8) list_double_large_graphic_pane_vc_g3

0xd710,	// (0x00045907) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd710,	// (0x00045907) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa54,	// (0x00047c4b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x00047c4b) list_double_large_graphic_pane_vc_g

0xd71c,	// (0x00045913) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd71c,	// (0x00045913) list_double_large_graphic_pane_vc_t1

0xd738,	// (0x0004592f) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd738,	// (0x0004592f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5d,	// (0x00047c54) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5d,	// (0x00047c54) list_double_large_graphic_pane_vc_t

0xd2f1,	// (0x000454e8) list_double_heading_pane_vc_g1_ParamLimits

0xd2f1,	// (0x000454e8) list_double_heading_pane_vc_g1

0xd2fd,	// (0x000454f4) list_double_heading_pane_vc_g2_ParamLimits

0xd2fd,	// (0x000454f4) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000477bf) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000477bf) list_double_heading_pane_vc_g

0xd75a,	// (0x00045951) list_double_heading_pane_vc_t1_ParamLimits

0xd75a,	// (0x00045951) list_double_heading_pane_vc_t1

0xd76e,	// (0x00045965) list_double_heading_pane_vc_t2_ParamLimits

0xd76e,	// (0x00045965) list_double_heading_pane_vc_t2

0x0001,

0xfa62,	// (0x00047c59) list_double_heading_pane_vc_t_ParamLimits

0xfa62,	// (0x00047c59) list_double_heading_pane_vc_t

0xd786,	// (0x0004597d) list_double_graphic_pane_vc_g1_ParamLimits

0xd786,	// (0x0004597d) list_double_graphic_pane_vc_g1

0xd79e,	// (0x00045995) list_double_graphic_pane_vc_g2_ParamLimits

0xd79e,	// (0x00045995) list_double_graphic_pane_vc_g2

0xd2f1,	// (0x000454e8) list_double_graphic_pane_vc_g3_ParamLimits

0xd2f1,	// (0x000454e8) list_double_graphic_pane_vc_g3

0x0003,

0xfa67,	// (0x00047c5e) list_double_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x00047c5e) list_double_graphic_pane_vc_g

0xd7bb,	// (0x000459b2) list_double_graphic_pane_vc_t1_ParamLimits

0xd7bb,	// (0x000459b2) list_double_graphic_pane_vc_t1

0xd7da,	// (0x000459d1) list_double_graphic_pane_vc_t2_ParamLimits

0xd7da,	// (0x000459d1) list_double_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x00047c67) list_double_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x00047c67) list_double_graphic_pane_vc_t

0xebdf,	// (0x00046dd6) aid_size_cell_fastswap

0x8708,	// (0x000408ff) aid_size_cell_touch_ParamLimits

0x8708,	// (0x000408ff) aid_size_cell_touch

0xed40,	// (0x00046f37) popup_fast_swap_wide_window_ParamLimits

0xed40,	// (0x00046f37) popup_fast_swap_wide_window

0x88d8,	// (0x00040acf) touch_pane_ParamLimits

0x88d8,	// (0x00040acf) touch_pane

0xb57d,	// (0x00043774) button_value_adjust_pane_cp2

0xd3d2,	// (0x000455c9) button_value_adjust_pane_cp4

0xd3da,	// (0x000455d1) form_field_data_pane_cp2

0x92fd,	// (0x000414f4) form_field_data_wide_pane_cp2

0xb878,	// (0x00043a6f) bg_scroll_pane_ParamLimits

0x9690,	// (0x00041887) scroll_handle_pane_ParamLimits

0xeef4,	// (0x000470eb) scroll_sc2_down_pane_ParamLimits

0xeef4,	// (0x000470eb) scroll_sc2_down_pane

0xb8a9,	// (0x00043aa0) scroll_sc2_up_pane_ParamLimits

0xb8a9,	// (0x00043aa0) scroll_sc2_up_pane

0xc945,	// (0x00044b3c) grid_wheel_folder_pane_g1_ParamLimits

0xc945,	// (0x00044b3c) grid_wheel_folder_pane_g1

0xf0fc,	// (0x000472f3) clock_nsta_pane_cp2_ParamLimits

0xf0fc,	// (0x000472f3) clock_nsta_pane_cp2

0x9999,	// (0x00041b90) listscroll_midp_pane_ParamLimits

0x99a5,	// (0x00041b9c) midp_canvas_pane

0x1ef3,	// (0x0003a0ea) nsta_clock_indic_pane

0x1f27,	// (0x0003a11e) listscroll_form_pane_vc

0x1f2f,	// (0x0003a126) listscroll_set_pane_vc_ParamLimits

0x1f2f,	// (0x0003a126) listscroll_set_pane_vc

0xa55d,	// (0x00042754) clock_nsta_pane

0xa587,	// (0x0004277e) indicator_nsta_pane

0x2380,	// (0x0003a577) bg_popup_sub_pane_cp2_ParamLimits

0x2394,	// (0x0003a58b) find_pane_cp2_ParamLimits

0x2394,	// (0x0003a58b) find_pane_cp2

0x23aa,	// (0x0003a5a1) grid_toobar_pane_ParamLimits

0x248a,	// (0x0003a681) list_form_gen_pane_vc_ParamLimits

0x248a,	// (0x0003a681) list_form_gen_pane_vc

0x24a0,	// (0x0003a697) scroll_pane_cp8_vc_ParamLimits

0x24a0,	// (0x0003a697) scroll_pane_cp8_vc

0x251c,	// (0x0003a713) data_form_wide_pane_vc_ParamLimits

0x251c,	// (0x0003a713) data_form_wide_pane_vc

0x2528,	// (0x0003a71f) form_field_data_wide_pane_vc_g1

0x2530,	// (0x0003a727) form_field_data_wide_pane_vc_t1_ParamLimits

0x2530,	// (0x0003a727) form_field_data_wide_pane_vc_t1

0xb591,	// (0x00043788) input_focus_pane_cp6_vc_ParamLimits

0xb591,	// (0x00043788) input_focus_pane_cp6_vc

0x287d,	// (0x0003aa74) list_midp_pane_ParamLimits

0x3b96,	// (0x0003bd8d) scroll_pane_cp16_ParamLimits

0x3b96,	// (0x0003bd8d) scroll_pane_cp16

0x28cb,	// (0x0003aac2) button_value_adjust_pane_ParamLimits

0x28cb,	// (0x0003aac2) button_value_adjust_pane

0xc521,	// (0x00044718) button_value_adjust_pane_cp6_ParamLimits

0xc521,	// (0x00044718) button_value_adjust_pane_cp6

0xc63b,	// (0x00044832) settings_code_pane_cp_ParamLimits

0xc63b,	// (0x00044832) settings_code_pane_cp

0xb179,	// (0x00043370) cell_touch_pane_g1

0xb179,	// (0x00043370) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x000478eb) cell_touch_pane_g

0xc814,	// (0x00044a0b) cell_touch_pane_cp_ParamLimits

0xc814,	// (0x00044a0b) cell_touch_pane_cp

0xc830,	// (0x00044a27) cell_touch_pane_ParamLimits

0xc830,	// (0x00044a27) cell_touch_pane

0xb179,	// (0x00043370) scroll_sc2_down_pane_g1

0xb179,	// (0x00043370) scroll_sc2_up_pane_g1

0xb183,	// (0x0004337a) bg_set_opt_pane_cp4_vc

0x3f26,	// (0x0003c11d) list_set_graphic_pane_vc_g1_ParamLimits

0x3f26,	// (0x0003c11d) list_set_graphic_pane_vc_g1

0x3f32,	// (0x0003c129) list_set_graphic_pane_vc_g2_ParamLimits

0x3f32,	// (0x0003c129) list_set_graphic_pane_vc_g2

0x0001,

0xf9e4,	// (0x00047bdb) list_set_graphic_pane_vc_g_ParamLimits

0xf9e4,	// (0x00047bdb) list_set_graphic_pane_vc_g

0x3f3e,	// (0x0003c135) text_primary_small_cp13_vc_ParamLimits

0x3f3e,	// (0x0003c135) text_primary_small_cp13_vc

0x3f56,	// (0x0003c14d) list_set_graphic_pane_vc_ParamLimits

0x3f56,	// (0x0003c14d) list_set_graphic_pane_vc

0xb183,	// (0x0004337a) input_focus_pane_cp2_vc

0xb179,	// (0x00043370) setting_code_pane_vc_g1

0xb1f6,	// (0x000433ed) setting_code_pane_vc_t1

0x3f69,	// (0x0003c160) set_text_pane_vc_t1_ParamLimits

0x3f69,	// (0x0003c160) set_text_pane_vc_t1

0xb183,	// (0x0004337a) input_focus_pane_cp1_vc

0x3f85,	// (0x0003c17c) list_set_text_pane_vc

0xb179,	// (0x00043370) setting_text_pane_vc_g1

0xb183,	// (0x0004337a) bg_set_opt_pane_cp2_vc

0xb1ed,	// (0x000433e4) setting_slider_graphic_pane_vc_g1

0x3f8f,	// (0x0003c186) setting_slider_graphic_pane_vc_t1

0x3f9f,	// (0x0003c196) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e9,	// (0x00047be0) setting_slider_graphic_pane_vc_t

0x3faf,	// (0x0003c1a6) slider_set_pane_cp_vc

0x3fb7,	// (0x0003c1ae) slider_set_pane_vc_g1

0x3fc0,	// (0x0003c1b7) slider_set_pane_vc_g2

0x0006,

0xf9ee,	// (0x00047be5) slider_set_pane_vc_g

0xb5e9,	// (0x000437e0) set_opt_bg_pane_g1_copy1

0xb5f1,	// (0x000437e8) set_opt_bg_pane_g2_copy1

0x3fec,	// (0x0003c1e3) set_opt_bg_pane_g3_copy1

0xb601,	// (0x000437f8) set_opt_bg_pane_g4_copy1

0xb609,	// (0x00043800) set_opt_bg_pane_g5_copy1

0xb611,	// (0x00043808) set_opt_bg_pane_g6_copy1

0x3ff4,	// (0x0003c1eb) set_opt_bg_pane_g7_copy1

0x3ffc,	// (0x0003c1f3) set_opt_bg_pane_g8_copy1

0x4004,	// (0x0003c1fb) set_opt_bg_pane_g9_copy1

0xb183,	// (0x0004337a) bg_set_opt_pane_cp_vc

0x400c,	// (0x0003c203) setting_slider_pane_vc_t1

0x401b,	// (0x0003c212) setting_slider_pane_vc_t2

0x402b,	// (0x0003c222) setting_slider_pane_vc_t3

0x0002,

0xf9fd,	// (0x00047bf4) setting_slider_pane_vc_t

0x403b,	// (0x0003c232) slider_set_pane_vc

0x08f7,	// (0x00038aee) volume_set_pane_vc_g1

0x0d0c,	// (0x00038f03) volume_set_pane_vc_g2

0x0d15,	// (0x00038f0c) volume_set_pane_vc_g3

0x0d1e,	// (0x00038f15) volume_set_pane_vc_g4

0x0d27,	// (0x00038f1e) volume_set_pane_vc_g5

0x0d30,	// (0x00038f27) volume_set_pane_vc_g6

0x0d39,	// (0x00038f30) volume_set_pane_vc_g7

0x0d42,	// (0x00038f39) volume_set_pane_vc_g8

0x0d4b,	// (0x00038f42) volume_set_pane_vc_g9

0x0d54,	// (0x00038f4b) volume_set_pane_vc_g10

0x0009,

0xfa04,	// (0x00047bfb) volume_set_pane_vc_g

0x4043,	// (0x0003c23a) volume_set_pane_vc

0x404b,	// (0x0003c242) button_value_adjust_pane_cp1_vc

0x4055,	// (0x0003c24c) list_highlight_pane_cp2_vc

0x405e,	// (0x0003c255) list_set_pane_vc_ParamLimits

0x405e,	// (0x0003c255) list_set_pane_vc

0x40bc,	// (0x0003c2b3) main_pane_set_vc_t1_ParamLimits

0x40bc,	// (0x0003c2b3) main_pane_set_vc_t1

0x40d1,	// (0x0003c2c8) main_pane_set_vc_t2_ParamLimits

0x40d1,	// (0x0003c2c8) main_pane_set_vc_t2

0x40e3,	// (0x0003c2da) main_pane_set_vc_t3_ParamLimits

0x40e3,	// (0x0003c2da) main_pane_set_vc_t3

0x40f5,	// (0x0003c2ec) main_pane_set_vc_t4_ParamLimits

0x40f5,	// (0x0003c2ec) main_pane_set_vc_t4

0x0003,

0xfa19,	// (0x00047c10) main_pane_set_vc_t_ParamLimits

0xfa19,	// (0x00047c10) main_pane_set_vc_t

0x4107,	// (0x0003c2fe) setting_code_pane_vc_ParamLimits

0x4107,	// (0x0003c2fe) setting_code_pane_vc

0x4116,	// (0x0003c30d) setting_slider_graphic_pane_vc

0x4116,	// (0x0003c30d) setting_slider_pane_vc

0x4116,	// (0x0003c30d) setting_text_pane_vc

0x4116,	// (0x0003c30d) setting_volume_pane_vc

0x411e,	// (0x0003c315) scroll_pane_cp121_vc

0xb56b,	// (0x00043762) set_content_pane_vc

0x4126,	// (0x0003c31d) button_value_adjust_pane_g1

0x412f,	// (0x0003c326) button_value_adjust_pane_g2

0x0001,

0xfa75,	// (0x00047c6c) button_value_adjust_pane_g

0x4138,	// (0x0003c32f) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4138,	// (0x0003c32f) form_field_slider_wide_pane_vc_t1

0x414c,	// (0x0003c343) form_field_slider_wide_pane_vc_t2_ParamLimits

0x414c,	// (0x0003c343) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7a,	// (0x00047c71) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7a,	// (0x00047c71) form_field_slider_wide_pane_vc_t

0xb1d1,	// (0x000433c8) input_focus_pane_cp10_vc_ParamLimits

0xb1d1,	// (0x000433c8) input_focus_pane_cp10_vc

0x417a,	// (0x0003c371) slider_cont_pane_cp1_vc_ParamLimits

0x417a,	// (0x0003c371) slider_cont_pane_cp1_vc

0x418c,	// (0x0003c383) slider_form_pane_g1_cp2

0x3fc0,	// (0x0003c1b7) slider_form_pane_g2_cp2

0x41b9,	// (0x0003c3b0) form_field_slider_pane_vc_t3

0x41c7,	// (0x0003c3be) form_field_slider_pane_vc_t4

0x41d5,	// (0x0003c3cc) slider_form_pane_vc_ParamLimits

0x41d5,	// (0x0003c3cc) slider_form_pane_vc

0x41e2,	// (0x0003c3d9) form_field_slider_pane_vc_t1_ParamLimits

0x41e2,	// (0x0003c3d9) form_field_slider_pane_vc_t1

0x414c,	// (0x0003c343) form_field_slider_pane_vc_t2_ParamLimits

0x414c,	// (0x0003c343) form_field_slider_pane_vc_t2

0x0001,

0xfa8c,	// (0x00047c83) form_field_slider_pane_vc_t_ParamLimits

0xfa8c,	// (0x00047c83) form_field_slider_pane_vc_t

0xb1d1,	// (0x000433c8) input_focus_pane_cp9_vc_ParamLimits

0xb1d1,	// (0x000433c8) input_focus_pane_cp9_vc

0x41fe,	// (0x0003c3f5) slider_cont_pane_vc_ParamLimits

0x41fe,	// (0x0003c3f5) slider_cont_pane_vc

0x4212,	// (0x0003c409) list_form_graphic_pane_cp_vc_ParamLimits

0x4212,	// (0x0003c409) list_form_graphic_pane_cp_vc

0x2528,	// (0x0003a71f) form_field_popup_wide_pane_vc_g1

0x4227,	// (0x0003c41e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4227,	// (0x0003c41e) form_field_popup_wide_pane_vc_t1

0xb591,	// (0x00043788) input_focus_pane_cp8_vc_ParamLimits

0xb591,	// (0x00043788) input_focus_pane_cp8_vc

0x426c,	// (0x0003c463) list_form_wide_pane_vc_ParamLimits

0x426c,	// (0x0003c463) list_form_wide_pane_vc

0x4278,	// (0x0003c46f) list_form_graphic_pane_vc_g1

0x4280,	// (0x0003c477) list_form_graphic_pane_vc_t1_ParamLimits

0x4280,	// (0x0003c477) list_form_graphic_pane_vc_t1

0xb1df,	// (0x000433d6) list_highlight_pane_cp5_vc_ParamLimits

0xb1df,	// (0x000433d6) list_highlight_pane_cp5_vc

0x429c,	// (0x0003c493) list_form_graphic_pane_vc_ParamLimits

0x429c,	// (0x0003c493) list_form_graphic_pane_vc

0x2528,	// (0x0003a71f) form_field_popup_pane_vc_g1

0x42b2,	// (0x0003c4a9) form_field_popup_pane_vc_t1_ParamLimits

0x42b2,	// (0x0003c4a9) form_field_popup_pane_vc_t1

0xb591,	// (0x00043788) input_focus_pane_cp7_vc_ParamLimits

0xb591,	// (0x00043788) input_focus_pane_cp7_vc

0x42c9,	// (0x0003c4c0) list_form_pane_vc_ParamLimits

0x42c9,	// (0x0003c4c0) list_form_pane_vc

0x42d5,	// (0x0003c4cc) data_form_pane_vc_t1_ParamLimits

0x42d5,	// (0x0003c4cc) data_form_pane_vc_t1

0xb5e9,	// (0x000437e0) input_focus_pane_vc_g1

0xb5f1,	// (0x000437e8) input_focus_pane_vc_g2

0xb5f9,	// (0x000437f0) input_focus_pane_vc_g3

0xb601,	// (0x000437f8) input_focus_pane_vc_g4

0xb609,	// (0x00043800) input_focus_pane_vc_g5

0xb611,	// (0x00043808) input_focus_pane_vc_g6

0xb619,	// (0x00043810) input_focus_pane_vc_g7

0xb621,	// (0x00043818) input_focus_pane_vc_g8

0xb629,	// (0x00043820) input_focus_pane_vc_g9

0xb179,	// (0x00043370) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x00047874) input_focus_pane_vc_g

0x251c,	// (0x0003a713) data_form_pane_vc_ParamLimits

0x251c,	// (0x0003a713) data_form_pane_vc

0x2528,	// (0x0003a71f) form_field_data_pane_vc_g1

0x42f0,	// (0x0003c4e7) form_field_data_pane_vc_t1_ParamLimits

0x42f0,	// (0x0003c4e7) form_field_data_pane_vc_t1

0xb591,	// (0x00043788) input_focus_pane_vc_ParamLimits

0xb591,	// (0x00043788) input_focus_pane_vc

0x430a,	// (0x0003c501) button_value_adjust_pane_cp3_vc

0x4312,	// (0x0003c509) button_value_adjust_pane_cp5_vc

0x431a,	// (0x0003c511) form_field_data_pane_vc_ParamLimits

0x431a,	// (0x0003c511) form_field_data_pane_vc

0x4331,	// (0x0003c528) form_field_data_pane_vc_cp2

0x4339,	// (0x0003c530) form_field_data_wide_pane_vc_ParamLimits

0x4339,	// (0x0003c530) form_field_data_wide_pane_vc

0x434f,	// (0x0003c546) form_field_data_wide_pane_vc_cp2

0x4357,	// (0x0003c54e) form_field_popup_pane_vc_ParamLimits

0x4357,	// (0x0003c54e) form_field_popup_pane_vc

0x436e,	// (0x0003c565) form_field_popup_wide_pane_vc_ParamLimits

0x436e,	// (0x0003c565) form_field_popup_wide_pane_vc

0x4384,	// (0x0003c57b) form_field_slider_pane_vc_ParamLimits

0x4384,	// (0x0003c57b) form_field_slider_pane_vc

0x4397,	// (0x0003c58e) form_field_slider_wide_pane_vc_ParamLimits

0x4397,	// (0x0003c58e) form_field_slider_wide_pane_vc

0xc84d,	// (0x00044a44) grid_touch_1_pane_ParamLimits

0xc84d,	// (0x00044a44) grid_touch_1_pane

0xc861,	// (0x00044a58) grid_touch_2_pane_ParamLimits

0xc861,	// (0x00044a58) grid_touch_2_pane

0x4465,	// (0x0003c65c) touch_pane_g1_ParamLimits

0x4465,	// (0x0003c65c) touch_pane_g1

0x43ce,	// (0x0003c5c5) cell_app_pane_cp_wide_ParamLimits

0x43ce,	// (0x0003c5c5) cell_app_pane_cp_wide

0x43df,	// (0x0003c5d6) grid_popup_fast_wide_pane_ParamLimits

0x43df,	// (0x0003c5d6) grid_popup_fast_wide_pane

0x43f3,	// (0x0003c5ea) scroll_pane_cp19_ParamLimits

0x43f3,	// (0x0003c5ea) scroll_pane_cp19

0xb183,	// (0x0004337a) bg_popup_window_pane_cp20

0x4407,	// (0x0003c5fe) listscroll_popup_fast_wide_pane

0xc88b,	// (0x00044a82) grid_indicator_nsta_pane

0x440f,	// (0x0003c606) clock_nsta_pane_g1

0x4418,	// (0x0003c60f) clock_nsta_pane_t1

0xc899,	// (0x00044a90) cell_indicator_nsta_pane_ParamLimits

0xc899,	// (0x00044a90) cell_indicator_nsta_pane

0x4465,	// (0x0003c65c) cell_indicator_nsta_pane_g1

0xc8b0,	// (0x00044aa7) cell_indicator_nsta_pane_g2

0x0001,

0xfa9d,	// (0x00047c94) cell_indicator_nsta_pane_g

0x4480,	// (0x0003c677) clock_nsta_pane_cp

0x4489,	// (0x0003c680) indicator_nsta_pane_cp

0x4491,	// (0x0003c688) nsta_clock_indic_pane_g1

0xb21b,	// (0x00043412) grid_indicator_pane

0x972a,	// (0x00041921) scroll_pane_cp29

0xf04b,	// (0x00047242) indicator_nsta_pane_cp2_ParamLimits

0xf04b,	// (0x00047242) indicator_nsta_pane_cp2

0xb1df,	// (0x000433d6) main_apps_wheel_pane

0xbf57,	// (0x0004414e) form_midp_field_text_pane_ParamLimits

0x2889,	// (0x0003aa80) scroll_bar_cp050_ParamLimits

0x44e1,	// (0x0003c6d8) cell_indicator_pane_ParamLimits

0x44e1,	// (0x0003c6d8) cell_indicator_pane

0x44fa,	// (0x0003c6f1) cell_indicator_pane_g1

0xc8cf,	// (0x00044ac6) grid_wheel_folder_pane_ParamLimits

0xc8cf,	// (0x00044ac6) grid_wheel_folder_pane

0xc8dd,	// (0x00044ad4) list_wheel_apps_pane_ParamLimits

0xc8dd,	// (0x00044ad4) list_wheel_apps_pane

0xc8eb,	// (0x00044ae2) main_apps_wheel_pane_g1_ParamLimits

0xc8eb,	// (0x00044ae2) main_apps_wheel_pane_g1

0xc8f7,	// (0x00044aee) main_apps_wheel_pane_g2_ParamLimits

0xc8f7,	// (0x00044aee) main_apps_wheel_pane_g2

0x0001,

0xfab9,	// (0x00047cb0) main_apps_wheel_pane_g_ParamLimits

0xfab9,	// (0x00047cb0) main_apps_wheel_pane_g

0xc905,	// (0x00044afc) main_apps_wheel_pane_t1_ParamLimits

0xc905,	// (0x00044afc) main_apps_wheel_pane_t1

0xc919,	// (0x00044b10) list_wheel_apps_pane_g1

0xc921,	// (0x00044b18) list_wheel_apps_pane_g2

0xc929,	// (0x00044b20) list_wheel_apps_pane_g3

0xc931,	// (0x00044b28) list_wheel_apps_pane_g4

0xc93b,	// (0x00044b32) list_wheel_apps_pane_g5

0x0004,

0xfabe,	// (0x00047cb5) list_wheel_apps_pane_g

0xf21d,	// (0x00047414) navi_icon_text_pane

0xa451,	// (0x00042648) aid_fill_nsta

0x45c1,	// (0x0003c7b8) navi_icon_text_pane_g1

0x45cd,	// (0x0003c7c4) navi_icon_text_pane_t1

0xbbb7,	// (0x00043dae) list_set_graphic_pane_t1_ParamLimits

0xbbb7,	// (0x00043dae) list_set_graphic_pane_t1

0x2fcc,	// (0x0003b1c3) popup_midp_note_alarm_window_t6_ParamLimits

0x2fcc,	// (0x0003b1c3) popup_midp_note_alarm_window_t6

0x2fde,	// (0x0003b1d5) popup_midp_note_alarm_window_t7_ParamLimits

0x2fde,	// (0x0003b1d5) popup_midp_note_alarm_window_t7

0x2ff0,	// (0x0003b1e7) popup_midp_note_alarm_window_t8_ParamLimits

0x2ff0,	// (0x0003b1e7) popup_midp_note_alarm_window_t8

0x3002,	// (0x0003b1f9) popup_midp_note_alarm_window_t9_ParamLimits

0x3002,	// (0x0003b1f9) popup_midp_note_alarm_window_t9

0x3014,	// (0x0003b20b) popup_midp_note_alarm_window_t10_ParamLimits

0x3014,	// (0x0003b20b) popup_midp_note_alarm_window_t10

0x3026,	// (0x0003b21d) popup_midp_note_alarm_window_t11_ParamLimits

0x3026,	// (0x0003b21d) popup_midp_note_alarm_window_t11

0xc2a3,	// (0x0004449a) scroll_pane_cp17_ParamLimits

0xc2a3,	// (0x0004449a) scroll_pane_cp17

0x08f7,	// (0x00038aee) volume_small_pane_cp_g1

0x0d5d,	// (0x00038f54) volume_small_pane_cp_g2

0x0d66,	// (0x00038f5d) volume_small_pane_cp_g3

0x0d6f,	// (0x00038f66) volume_small_pane_cp_g4

0x0d78,	// (0x00038f6f) volume_small_pane_cp_g5

0x0d27,	// (0x00038f1e) volume_small_pane_cp_g6

0x0d81,	// (0x00038f78) volume_small_pane_cp_g7

0x0d8a,	// (0x00038f81) volume_small_pane_cp_g8

0x0d93,	// (0x00038f8a) volume_small_pane_cp_g9

0x0d9c,	// (0x00038f93) volume_small_pane_cp_g10

0xf386,	// (0x0004757d) midp_ticker_pane_g1_ParamLimits

0xf392,	// (0x00047589) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x00047940) midp_ticker_pane_g_ParamLimits

0xf39e,	// (0x00047595) midp_ticker_pane_t1_ParamLimits

0xa475,	// (0x0004266c) aid_fill_nsta_2

0x2875,	// (0x0003aa6c) list_form2_midp_pane

0x3980,	// (0x0003bb77) midp_editing_number_pane_ParamLimits

0x398f,	// (0x0003bb86) midp_ticker_pane_ParamLimits

0x45df,	// (0x0003c7d6) form2_midp_field_pane

0x4603,	// (0x0003c7fa) scroll_pane_cp51

0x4623,	// (0x0003c81a) form2_midp_button_pane_ParamLimits

0x4623,	// (0x0003c81a) form2_midp_button_pane

0x4635,	// (0x0003c82c) form2_midp_content_pane_ParamLimits

0x4635,	// (0x0003c82c) form2_midp_content_pane

0x464f,	// (0x0003c846) form2_midp_field_choice_group_pane

0x4657,	// (0x0003c84e) form2_midp_field_pane_g1

0x465f,	// (0x0003c856) form2_midp_field_pane_g2

0x4667,	// (0x0003c85e) form2_midp_field_pane_g3

0x466f,	// (0x0003c866) form2_midp_field_pane_g4

0x0003,

0xfae3,	// (0x00047cda) form2_midp_field_pane_g

0x4677,	// (0x0003c86e) form2_midp_gauge_slider_pane

0x467f,	// (0x0003c876) form2_midp_gauge_wait_pane

0x4687,	// (0x0003c87e) form2_midp_image_pane_ParamLimits

0x4687,	// (0x0003c87e) form2_midp_image_pane

0xc96e,	// (0x00044b65) form2_midp_label_pane_ParamLimits

0xc96e,	// (0x00044b65) form2_midp_label_pane

0xc987,	// (0x00044b7e) form2_midp_label_pane_cp_ParamLimits

0xc987,	// (0x00044b7e) form2_midp_label_pane_cp

0x46dc,	// (0x0003c8d3) form2_midp_string_pane_ParamLimits

0x46dc,	// (0x0003c8d3) form2_midp_string_pane

0xd804,	// (0x000459fb) form2_midp_text_pane_ParamLimits

0xd804,	// (0x000459fb) form2_midp_text_pane

0x46ee,	// (0x0003c8e5) form2_midp_time_pane

0x46fe,	// (0x0003c8f5) input_focus_pane_cp51_ParamLimits

0x46fe,	// (0x0003c8f5) input_focus_pane_cp51

0xc9a6,	// (0x00044b9d) form2_midp_label_pane_t1_ParamLimits

0xc9a6,	// (0x00044b9d) form2_midp_label_pane_t1

0xd81d,	// (0x00045a14) form2_mdip_text_pane_t1_ParamLimits

0xd81d,	// (0x00045a14) form2_mdip_text_pane_t1

0xd83b,	// (0x00045a32) form2_midp_time_pane_t1

0x475f,	// (0x0003c956) form2_midp_gauge_slider_pane_t1

0xc9e6,	// (0x00044bdd) form2_midp_gauge_slider_pane_t2

0xc9f8,	// (0x00044bef) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaec,	// (0x00047ce3) form2_midp_gauge_slider_pane_t

0x4795,	// (0x0003c98c) form2_midp_slider_pane

0x47a1,	// (0x0003c998) form2_midp_gauge_wait_pane_t1

0x47af,	// (0x0003c9a6) form2_midp_wait_pane_ParamLimits

0x47af,	// (0x0003c9a6) form2_midp_wait_pane

0xca0a,	// (0x00044c01) list_single_2graphic_pane_cp4_ParamLimits

0xca0a,	// (0x00044c01) list_single_2graphic_pane_cp4

0xbeae,	// (0x000440a5) list_single_midp_graphic_pane_cp_ParamLimits

0xbeae,	// (0x000440a5) list_single_midp_graphic_pane_cp

0xb183,	// (0x0004337a) list_highlight_pane_cp20

0x4802,	// (0x0003c9f9) list_single_2graphic_pane_g1_cp4

0x3e0a,	// (0x0003c001) list_single_2graphic_pane_g2_cp4

0x480a,	// (0x0003ca01) list_single_2graphic_pane_t1_cp4

0xb1df,	// (0x000433d6) list_highlight_pane_cp21

0x4819,	// (0x0003ca10) list_single_midp_graphic_pane_g4_cp

0x4828,	// (0x0003ca1f) list_single_midp_graphic_pane_t1_cp

0xca1f,	// (0x00044c16) form2_mdip_string_pane_t1_ParamLimits

0xca1f,	// (0x00044c16) form2_mdip_string_pane_t1

0xb183,	// (0x0004337a) bg_wml_button_pane_cp2

0xb179,	// (0x00043370) form2_midp_image_pane_g1

0xd3bd,	// (0x000455b4) list_double_large_graphic_pane_g5_ParamLimits

0xd3bd,	// (0x000455b4) list_double_large_graphic_pane_g5

0x9999,	// (0x00041b90) midp_form_pane_ParamLimits

0xb1df,	// (0x000433d6) main_apps_wheel_pane_ParamLimits

0xa12f,	// (0x00042326) popup_preview_window_ParamLimits

0xa12f,	// (0x00042326) popup_preview_window

0xa3fc,	// (0x000425f3) popup_touch_info_window_ParamLimits

0xa3fc,	// (0x000425f3) popup_touch_info_window

0xa41a,	// (0x00042611) popup_touch_menu_window_ParamLimits

0xa41a,	// (0x00042611) popup_touch_menu_window

0xb16f,	// (0x00043366) bg_popup_sub_pane_cp6

0x4944,	// (0x0003cb3b) list_touch_menu_pane

0xca95,	// (0x00044c8c) list_single_touch_menu_pane_ParamLimits

0xca95,	// (0x00044c8c) list_single_touch_menu_pane

0xcaa9,	// (0x00044ca0) list_single_touch_menu_pane_t1

0xb1df,	// (0x000433d6) bg_popup_sub_pane_cp7_ParamLimits

0xb1df,	// (0x000433d6) bg_popup_sub_pane_cp7

0x4970,	// (0x0003cb67) heading_sub_pane

0x4978,	// (0x0003cb6f) list_touch_info_pane_ParamLimits

0x4978,	// (0x0003cb6f) list_touch_info_pane

0x4987,	// (0x0003cb7e) list_single_touch_info_pane_ParamLimits

0x4987,	// (0x0003cb7e) list_single_touch_info_pane

0x4999,	// (0x0003cb90) list_single_touch_info_pane_t1

0x49a7,	// (0x0003cb9e) list_single_touch_info_pane_t2

0x0001,

0xfafa,	// (0x00047cf1) list_single_touch_info_pane_t

0xf36f,	// (0x00047566) bg_popup_heading_pane_cp

0x49b5,	// (0x0003cbac) heading_sub_pane_t1

0x24b6,	// (0x0003a6ad) bg_popup_preview_window_pane_cp_ParamLimits

0x24b6,	// (0x0003a6ad) bg_popup_preview_window_pane_cp

0x4970,	// (0x0003cb67) heading_preview_pane

0x4978,	// (0x0003cb6f) list_preview_pane_ParamLimits

0x4978,	// (0x0003cb6f) list_preview_pane

0x49c3,	// (0x0003cbba) popup_preview_window_g1

0x4987,	// (0x0003cb7e) list_single_preview_pane_ParamLimits

0x4987,	// (0x0003cb7e) list_single_preview_pane

0x49cb,	// (0x0003cbc2) list_single_preview_pane_g1

0x49d3,	// (0x0003cbca) list_single_preview_pane_t1

0x4999,	// (0x0003cb90) list_single_preview_pane_t2

0x0001,

0xfaff,	// (0x00047cf6) list_single_preview_pane_t

0x49e1,	// (0x0003cbd8) bg_popup_heading_pane_cp2_ParamLimits

0x49e1,	// (0x0003cbd8) bg_popup_heading_pane_cp2

0x49f7,	// (0x0003cbee) heading_preview_pane_g1

0x49ff,	// (0x0003cbf6) heading_preview_pane_t1_ParamLimits

0x49ff,	// (0x0003cbf6) heading_preview_pane_t1

0xb232,	// (0x00043429) soft_indicator_pane_t1_ParamLimits

0xb50d,	// (0x00043704) scroll_pane_ParamLimits

0xb897,	// (0x00043a8e) scroll_sc2_left_pane

0xb8a0,	// (0x00043a97) scroll_sc2_right_pane

0xb8bf,	// (0x00043ab6) scroll_bg_pane_g1_ParamLimits

0xb8d4,	// (0x00043acb) scroll_bg_pane_g2_ParamLimits

0xb8ec,	// (0x00043ae3) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x000478cb) scroll_bg_pane_g_ParamLimits

0xb8bf,	// (0x00043ab6) scroll_handle_pane_g1_ParamLimits

0xb901,	// (0x00043af8) scroll_handle_pane_g2_ParamLimits

0xb8ec,	// (0x00043ae3) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x000478d2) scroll_handle_pane_g_ParamLimits

0x9cd6,	// (0x00041ecd) popup_choice_list_window_ParamLimits

0x9cd6,	// (0x00041ecd) popup_choice_list_window

0x238c,	// (0x0003a583) choice_list_pane

0x240e,	// (0x0003a605) cell_toolbar_pane_t1

0x2436,	// (0x0003a62d) toolbar_button_pane_ParamLimits

0x34f2,	// (0x0003b6e9) ai_gene_pane_1_t2_ParamLimits

0x34f2,	// (0x0003b6e9) ai_gene_pane_1_t2

0x0001,

0xf8f7,	// (0x00047aee) ai_gene_pane_1_t_ParamLimits

0xf8f7,	// (0x00047aee) ai_gene_pane_1_t

0x4a1c,	// (0x0003cc13) scroll_sc2_left_pane_g1

0x4a1c,	// (0x0003cc13) scroll_sc2_right_pane_g1

0x1f1b,	// (0x0003a112) bg_popup_sub_pane_cp10

0x4a26,	// (0x0003cc1d) list_choice_list_pane

0xcab7,	// (0x00044cae) list_single_choice_list_pane_ParamLimits

0xcab7,	// (0x00044cae) list_single_choice_list_pane

0xcacb,	// (0x00044cc2) list_single_choice_list_pane_g1

0x9554,	// (0x0004174b) list_single_choice_list_pane_t1_ParamLimits

0x9554,	// (0x0004174b) list_single_choice_list_pane_t1

0x4a5a,	// (0x0003cc51) choice_list_pane_g1

0xcad3,	// (0x00044cca) choice_list_pane_t1

0xb16f,	// (0x00043366) input_focus_pane_cp11

0xb80c,	// (0x00043a03) title_pane_stacon_g2_ParamLimits

0xb80c,	// (0x00043a03) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x000478b1) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x000478b1) title_pane_stacon_g

0xf36f,	// (0x00047566) cursor_press_pane

0x9d7d,	// (0x00041f74) popup_fep_hwr_window_ParamLimits

0x9d7d,	// (0x00041f74) popup_fep_hwr_window

0x0313,	// (0x0003850a) popup_fep_vkb_window_ParamLimits

0x0313,	// (0x0003850a) popup_fep_vkb_window

0xcae1,	// (0x00044cd8) cursor_press_pane_g1

0x0002,

0xfb28,	// (0x00047d1f) fep_vkb_side_pane_g_ParamLimits

0x0dde,	// (0x00038fd5) fep_hwr_candidate_pane_ParamLimits

0x0dde,	// (0x00038fd5) fep_hwr_candidate_pane

0x0e08,	// (0x00038fff) fep_hwr_side_pane_ParamLimits

0x0e08,	// (0x00038fff) fep_hwr_side_pane

0x0e28,	// (0x0003901f) fep_hwr_top_pane_ParamLimits

0x0e28,	// (0x0003901f) fep_hwr_top_pane

0x0e40,	// (0x00039037) fep_hwr_write_pane_ParamLimits

0x0e40,	// (0x00039037) fep_hwr_write_pane

0xfb28,	// (0x00047d1f) fep_vkb_side_pane_g

0x4a78,	// (0x0003cc6f) fep_hwr_top_pane_g1

0x4a8a,	// (0x0003cc81) fep_hwr_top_pane_g2

0x0e7a,	// (0x00039071) fep_hwr_top_pane_g3

0x0002,

0xfb04,	// (0x00047cfb) fep_hwr_top_pane_g

0x0e8f,	// (0x00039086) fep_hwr_top_text_pane

0xb9c4,	// (0x00043bbb) fep_hwr_top_text_pane_g1

0x4ac0,	// (0x0003ccb7) fep_hwr_top_text_pane_t1

0x0f85,	// (0x0003917c) fep_hwr_candidate_pane_g1

0x4d05,	// (0x0003cefc) fep_vkb_keypad_pane_g3_ParamLimits

0x4d05,	// (0x0003cefc) fep_vkb_keypad_pane_g3

0x4d2d,	// (0x0003cf24) fep_vkb_keypad_pane_g4_ParamLimits

0x4d2d,	// (0x0003cf24) fep_vkb_keypad_pane_g4

0x4d9c,	// (0x0003cf93) fep_vkb_bottom_pane_g2_ParamLimits

0x4d9c,	// (0x0003cf93) fep_vkb_bottom_pane_g2

0x0001,

0xfb2f,	// (0x00047d26) fep_vkb_bottom_pane_g_ParamLimits

0xfb2f,	// (0x00047d26) fep_vkb_bottom_pane_g

0x4a1c,	// (0x0003cc13) cell_vkb_side_pane_g2

0x0001,

0xfb39,	// (0x00047d30) cell_vkb_side_pane_g

0x4e27,	// (0x0003d01e) cell_vkb_side_pane_t1

0x4e35,	// (0x0003d02c) cell_vkb_side_pane_t1_copy1

0x4a1c,	// (0x0003cc13) bg_fep_vkb_candidate_pane_g2

0x4f61,	// (0x0003d158) cell_vkb_candidate_pane_ParamLimits

0x4ace,	// (0x0003ccc5) aid_size_cell_vkb_ParamLimits

0x4ace,	// (0x0003ccc5) aid_size_cell_vkb

0x4f61,	// (0x0003d158) cell_vkb_candidate_pane

0x0fac,	// (0x000391a3) bg_popup_fep_shadow_pane_g1

0xcafb,	// (0x00044cf2) fep_vkb_bottom_pane_ParamLimits

0xcafb,	// (0x00044cf2) fep_vkb_bottom_pane

0x4b92,	// (0x0003cd89) fep_vkb_candidate_pane_ParamLimits

0x4b92,	// (0x0003cd89) fep_vkb_candidate_pane

0xcb20,	// (0x00044d17) fep_vkb_keypad_pane_ParamLimits

0xcb20,	// (0x00044d17) fep_vkb_keypad_pane

0xcb55,	// (0x00044d4c) fep_vkb_side_pane_ParamLimits

0xcb55,	// (0x00044d4c) fep_vkb_side_pane

0xcb91,	// (0x00044d88) fep_vkb_top_pane_ParamLimits

0xcb91,	// (0x00044d88) fep_vkb_top_pane

0x4c5e,	// (0x0003ce55) fep_vkb_top_pane_g1_ParamLimits

0x4c5e,	// (0x0003ce55) fep_vkb_top_pane_g1

0x4c6d,	// (0x0003ce64) fep_vkb_top_pane_g2_ParamLimits

0x4c6d,	// (0x0003ce64) fep_vkb_top_pane_g2

0x4c7c,	// (0x0003ce73) fep_vkb_top_pane_g3_ParamLimits

0x4c7c,	// (0x0003ce73) fep_vkb_top_pane_g3

0x0003,

0xfb1f,	// (0x00047d16) fep_vkb_top_pane_g_ParamLimits

0xfb1f,	// (0x00047d16) fep_vkb_top_pane_g

0x4c9a,	// (0x0003ce91) fep_vkb_top_text_pane_ParamLimits

0x4c9a,	// (0x0003ce91) fep_vkb_top_text_pane

0xcbc6,	// (0x00044dbd) fep_vkb_side_pane_g1_ParamLimits

0xcbc6,	// (0x00044dbd) fep_vkb_side_pane_g1

0x4cf4,	// (0x0003ceeb) grid_vkb_side_pane_ParamLimits

0x4cf4,	// (0x0003ceeb) grid_vkb_side_pane

0x0fb4,	// (0x000391ab) bg_popup_fep_shadow_pane_g2

0x0fbd,	// (0x000391b4) bg_popup_fep_shadow_pane_g3

0x0fc5,	// (0x000391bc) bg_popup_fep_shadow_pane_g4

0x0fce,	// (0x000391c5) bg_popup_fep_shadow_pane_g5

0x0fd8,	// (0x000391cf) bg_popup_fep_shadow_pane_g6

0x0fe0,	// (0x000391d7) bg_popup_fep_shadow_pane_g7

0xb601,	// (0x000437f8) bg_popup_fep_shadow_pane_g8

0x4d4b,	// (0x0003cf42) grid_vkb_keypad_number_pane_ParamLimits

0x4d4b,	// (0x0003cf42) grid_vkb_keypad_number_pane

0x4d5b,	// (0x0003cf52) grid_vkb_keypad_pane_ParamLimits

0x4d5b,	// (0x0003cf52) grid_vkb_keypad_pane

0x4d81,	// (0x0003cf78) fep_vkb_bottom_pane_g1_ParamLimits

0x4d81,	// (0x0003cf78) fep_vkb_bottom_pane_g1

0x4daa,	// (0x0003cfa1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4daa,	// (0x0003cfa1) grid_vkb_keypad_bottom_left_pane

0x4dbf,	// (0x0003cfb6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4dbf,	// (0x0003cfb6) grid_vkb_keypad_bottom_right_pane

0x4dd4,	// (0x0003cfcb) fep_vkb_top_text_pane_g1

0xcc0d,	// (0x00044e04) fep_vkb_top_text_pane_t1

0xcc1f,	// (0x00044e16) cell_vkb_side_pane_ParamLimits

0xcc1f,	// (0x00044e16) cell_vkb_side_pane

0x4a1c,	// (0x0003cc13) cell_vkb_side_pane_g1

0x4e43,	// (0x0003d03a) cell_vkb_keypad_pane_ParamLimits

0x4e43,	// (0x0003d03a) cell_vkb_keypad_pane

0x4eb8,	// (0x0003d0af) cell_vkb_keypad_pane_g1

0x0008,

0xfb4c,	// (0x00047d43) bg_popup_fep_shadow_pane_g

0x0ff2,	// (0x000391e9) cell_hwr_side_pane_g1

0x0ff2,	// (0x000391e9) cell_hwr_side_pane_g2

0x4ec2,	// (0x0003d0b9) cell_vkb_keypad_pane_t1

0xcc35,	// (0x00044e2c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcc35,	// (0x00044e2c) cell_vkb_keypad_bottom_left_pane

0xcc4a,	// (0x00044e41) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcc4a,	// (0x00044e41) cell_vkb_keypad_bottom_right_pane

0x4a1c,	// (0x0003cc13) cell_vkb_keypad_bottom_left_pane_g1

0x4a1c,	// (0x0003cc13) cell_vkb_keypad_bottom_right_pane_g1

0x4f26,	// (0x0003d11d) cell_vkb_keypad_number_pane_ParamLimits

0x4f26,	// (0x0003d11d) cell_vkb_keypad_number_pane

0x4f45,	// (0x0003d13c) cell_vkb_keypad_number_pane_g1

0x4f4f,	// (0x0003d146) cell_vkb_keypad_number_pane_g2

0x4f58,	// (0x0003d14f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3e,	// (0x00047d35) cell_vkb_keypad_number_pane_g

0x4ec2,	// (0x0003d0b9) cell_vkb_keypad_number_pane_t1

0x4f7c,	// (0x0003d173) fep_vkb_candidate_pane_g1

0x0001,

0xfb5f,	// (0x00047d56) cell_hwr_side_pane_g

0x4f95,	// (0x0003d18c) cell_hwr_side_pane_t1

0x0ffc,	// (0x000391f3) cell_hwr_side_pane_t1_copy1

0x100a,	// (0x00039201) cell_hwr_candidate_pane_g1

0x1039,	// (0x00039230) cell_hwr_candidate_pane_t1

0x4a1c,	// (0x0003cc13) cell_vkb_candidate_pane_g2

0x4fd9,	// (0x0003d1d0) cell_vkb_candidate_pane_t1

0x0da5,	// (0x00038f9c) bg_popup_fep_shadow_pane_ParamLimits

0x0da5,	// (0x00038f9c) bg_popup_fep_shadow_pane

0x0e5a,	// (0x00039051) bg_fep_hwr_top_pane_g4

0x4a9c,	// (0x0003cc93) bg_hwr_side_pane_g1_ParamLimits

0x4a9c,	// (0x0003cc93) bg_hwr_side_pane_g1

0xa886,	// (0x00042a7d) cell_hwr_side_pane_ParamLimits

0xa886,	// (0x00042a7d) cell_hwr_side_pane

0x0f06,	// (0x000390fd) fep_hwr_write_pane_g1_ParamLimits

0x0f06,	// (0x000390fd) fep_hwr_write_pane_g1

0x0f13,	// (0x0003910a) fep_hwr_write_pane_g2_ParamLimits

0x0f13,	// (0x0003910a) fep_hwr_write_pane_g2

0x0f20,	// (0x00039117) fep_hwr_write_pane_g3_ParamLimits

0x0f20,	// (0x00039117) fep_hwr_write_pane_g3

0xa8a6,	// (0x00042a9d) fep_hwr_write_pane_g4_ParamLimits

0xa8a6,	// (0x00042a9d) fep_hwr_write_pane_g4

0x0005,

0xfb0b,	// (0x00047d02) fep_hwr_write_pane_g_ParamLimits

0xfb0b,	// (0x00047d02) fep_hwr_write_pane_g

0x0e5a,	// (0x00039051) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0e5a,	// (0x00039051) bg_fep_hwr_candidate_pane_g2

0x0f43,	// (0x0003913a) cell_hwr_candidate_pane_ParamLimits

0x0f43,	// (0x0003913a) cell_hwr_candidate_pane

0x0f85,	// (0x0003917c) fep_hwr_candidate_pane_g1_ParamLimits

0x4afc,	// (0x0003ccf3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4afc,	// (0x0003ccf3) bg_popup_fep_shadow_pane_cp2

0x4c8c,	// (0x0003ce83) fep_vkb_top_pane_g4_ParamLimits

0x4c8c,	// (0x0003ce83) fep_vkb_top_pane_g4

0x4cd2,	// (0x0003cec9) fep_vkb_side_pane_g2_ParamLimits

0x4cd2,	// (0x0003cec9) fep_vkb_side_pane_g2

0x91f4,	// (0x000413eb) list_setting_pane_t4_ParamLimits

0x91f4,	// (0x000413eb) list_setting_pane_t4

0x928e,	// (0x00041485) list_setting_number_pane_t5_ParamLimits

0x928e,	// (0x00041485) list_setting_number_pane_t5

0xb9fb,	// (0x00043bf2) list_double_heading_pane_cp2_ParamLimits

0xb9fb,	// (0x00043bf2) list_double_heading_pane_cp2

0x4fe7,	// (0x0003d1de) list_double_heading_pane_g1_cp2_ParamLimits

0x4fe7,	// (0x0003d1de) list_double_heading_pane_g1_cp2

0x4ff3,	// (0x0003d1ea) list_double_heading_pane_g2_cp2_ParamLimits

0x4ff3,	// (0x0003d1ea) list_double_heading_pane_g2_cp2

0x5007,	// (0x0003d1fe) list_double_heading_pane_t1_cp2_ParamLimits

0x5007,	// (0x0003d1fe) list_double_heading_pane_t1_cp2

0x501d,	// (0x0003d214) list_double_heading_pane_t2_cp2_ParamLimits

0x501d,	// (0x0003d214) list_double_heading_pane_t2_cp2

0xb167,	// (0x0004335e) aid_value_unit2

0xed56,	// (0x00046f4d) popup_preview_fixed_window

0xb309,	// (0x00043500) bg_popup_preview_window_pane_cp02

0x502f,	// (0x0003d226) list_preview_fixed_pane

0x5075,	// (0x0003d26c) list_empty_pane_fp_ParamLimits

0x5075,	// (0x0003d26c) list_empty_pane_fp

0x5075,	// (0x0003d26c) list_single_cale_day_pane_fp_ParamLimits

0x5075,	// (0x0003d26c) list_single_cale_day_pane_fp

0x5075,	// (0x0003d26c) list_single_graphic_heading_pane_fp_ParamLimits

0x5075,	// (0x0003d26c) list_single_graphic_heading_pane_fp

0x5075,	// (0x0003d26c) list_single_graphic_pane_fp_ParamLimits

0x5075,	// (0x0003d26c) list_single_graphic_pane_fp

0x5075,	// (0x0003d26c) list_single_heading_pane_fp_ParamLimits

0x5075,	// (0x0003d26c) list_single_heading_pane_fp

0x5075,	// (0x0003d26c) list_single_pane_fp_ParamLimits

0x5075,	// (0x0003d26c) list_single_pane_fp

0x508b,	// (0x0003d282) list_single_pane_fp_g1_ParamLimits

0x508b,	// (0x0003d282) list_single_pane_fp_g1

0xd85b,	// (0x00045a52) list_single_pane_fp_g2_ParamLimits

0xd85b,	// (0x00045a52) list_single_pane_fp_g2

0xd867,	// (0x00045a5e) list_single_pane_fp_g3_ParamLimits

0xd867,	// (0x00045a5e) list_single_pane_fp_g3

0x5097,	// (0x0003d28e) list_single_pane_fp_g4_ParamLimits

0x5097,	// (0x0003d28e) list_single_pane_fp_g4

0x0003,

0xfb72,	// (0x00047d69) list_single_pane_fp_g_ParamLimits

0xfb72,	// (0x00047d69) list_single_pane_fp_g

0xd87b,	// (0x00045a72) list_single_pane_fp_t1_ParamLimits

0xd87b,	// (0x00045a72) list_single_pane_fp_t1

0xd892,	// (0x00045a89) list_single_graphic_pane_fp_g1_ParamLimits

0xd892,	// (0x00045a89) list_single_graphic_pane_fp_g1

0x508b,	// (0x0003d282) list_single_graphic_pane_fp_g2_ParamLimits

0x508b,	// (0x0003d282) list_single_graphic_pane_fp_g2

0xd85b,	// (0x00045a52) list_single_graphic_pane_fp_g3_ParamLimits

0xd85b,	// (0x00045a52) list_single_graphic_pane_fp_g3

0xd867,	// (0x00045a5e) list_single_graphic_pane_fp_g4_ParamLimits

0xd867,	// (0x00045a5e) list_single_graphic_pane_fp_g4

0x5097,	// (0x0003d28e) list_single_graphic_pane_fp_g5_ParamLimits

0x5097,	// (0x0003d28e) list_single_graphic_pane_fp_g5

0x0004,

0xfb7b,	// (0x00047d72) list_single_graphic_pane_fp_g_ParamLimits

0xfb7b,	// (0x00047d72) list_single_graphic_pane_fp_g

0xd89e,	// (0x00045a95) list_single_graphic_pane_fp_t1_ParamLimits

0xd89e,	// (0x00045a95) list_single_graphic_pane_fp_t1

0xd892,	// (0x00045a89) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd892,	// (0x00045a89) list_single_graphic_heading_pane_fp_g1

0x508b,	// (0x0003d282) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x508b,	// (0x0003d282) list_single_graphic_heading_pane_fp_g2

0xd85b,	// (0x00045a52) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd85b,	// (0x00045a52) list_single_graphic_heading_pane_fp_g3

0xd867,	// (0x00045a5e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd867,	// (0x00045a5e) list_single_graphic_heading_pane_fp_g4

0x5097,	// (0x0003d28e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5097,	// (0x0003d28e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x00047d72) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x00047d72) list_single_graphic_heading_pane_fp_g

0xd8b4,	// (0x00045aab) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd8b4,	// (0x00045aab) list_single_graphic_heading_pane_fp_t1

0xd8ca,	// (0x00045ac1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd8ca,	// (0x00045ac1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb86,	// (0x00047d7d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb86,	// (0x00047d7d) list_single_graphic_heading_pane_fp_t

0xd8dc,	// (0x00045ad3) list_single_cale_day_pane_fp_g1_ParamLimits

0xd8dc,	// (0x00045ad3) list_single_cale_day_pane_fp_g1

0x50a3,	// (0x0003d29a) list_single_cale_day_pane_fp_g2_ParamLimits

0x50a3,	// (0x0003d29a) list_single_cale_day_pane_fp_g2

0xd914,	// (0x00045b0b) list_single_cale_day_pane_fp_g3_ParamLimits

0xd914,	// (0x00045b0b) list_single_cale_day_pane_fp_g3

0xd93c,	// (0x00045b33) list_single_cale_day_pane_fp_g4_ParamLimits

0xd93c,	// (0x00045b33) list_single_cale_day_pane_fp_g4

0xd960,	// (0x00045b57) list_single_cale_day_pane_fp_g5_ParamLimits

0xd960,	// (0x00045b57) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8b,	// (0x00047d82) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8b,	// (0x00047d82) list_single_cale_day_pane_fp_g

0xd984,	// (0x00045b7b) list_single_cale_day_pane_fp_t1_ParamLimits

0xd984,	// (0x00045b7b) list_single_cale_day_pane_fp_t1

0xd9aa,	// (0x00045ba1) list_single_cale_day_pane_fp_t2_ParamLimits

0xd9aa,	// (0x00045ba1) list_single_cale_day_pane_fp_t2

0xd9c3,	// (0x00045bba) list_single_cale_day_pane_fp_t3_ParamLimits

0xd9c3,	// (0x00045bba) list_single_cale_day_pane_fp_t3

0x0002,

0xfb96,	// (0x00047d8d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb96,	// (0x00047d8d) list_single_cale_day_pane_fp_t

0x508b,	// (0x0003d282) list_empty_pane_fp_g1_ParamLimits

0x508b,	// (0x0003d282) list_empty_pane_fp_g1

0xd9dc,	// (0x00045bd3) list_empty_pane_fp_t1

0xd9ea,	// (0x00045be1) list_empty_pane_fp_t2

0x0001,

0xfb9d,	// (0x00047d94) list_empty_pane_fp_t

0x508b,	// (0x0003d282) list_single_heading_pane_fp_g1_ParamLimits

0x508b,	// (0x0003d282) list_single_heading_pane_fp_g1

0xd85b,	// (0x00045a52) list_single_heading_pane_fp_g2_ParamLimits

0xd85b,	// (0x00045a52) list_single_heading_pane_fp_g2

0xd867,	// (0x00045a5e) list_single_heading_pane_fp_g3_ParamLimits

0xd867,	// (0x00045a5e) list_single_heading_pane_fp_g3

0x0002,

0xfba2,	// (0x00047d99) list_single_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x00047d99) list_single_heading_pane_fp_g

0xd9f8,	// (0x00045bef) list_single_heading_pane_fp_t1_ParamLimits

0xd9f8,	// (0x00045bef) list_single_heading_pane_fp_t1

0xda0a,	// (0x00045c01) list_single_heading_pane_fp_t2_ParamLimits

0xda0a,	// (0x00045c01) list_single_heading_pane_fp_t2

0x0001,

0xfba9,	// (0x00047da0) list_single_heading_pane_fp_t_ParamLimits

0xfba9,	// (0x00047da0) list_single_heading_pane_fp_t

0x95a0,	// (0x00041797) aid_size_cell_fast

0xb2ec,	// (0x000434e3) soft_indicator_pane_cp1_t1

0x95a9,	// (0x000417a0) cell_app_pane_cp2_ParamLimits

0x95a9,	// (0x000417a0) cell_app_pane_cp2

0x0dc7,	// (0x00038fbe) fep_hwr_candidate_drop_down_list_pane

0x0f9f,	// (0x00039196) fep_hwr_candidate_pane_g3_ParamLimits

0x0f9f,	// (0x00039196) fep_hwr_candidate_pane_g3

0xd84e,	// (0x00045a45) fep_hwr_candidate_pane_g4_ParamLimits

0xd84e,	// (0x00045a45) fep_hwr_candidate_pane_g4

0x0002,

0xfb18,	// (0x00047d0f) fep_hwr_candidate_pane_g_ParamLimits

0xfb18,	// (0x00047d0f) fep_hwr_candidate_pane_g

0x4b81,	// (0x0003cd78) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4b81,	// (0x0003cd78) fep_vkb_candidate_drop_down_list_pane

0x4f84,	// (0x0003d17b) fep_vkb_candidate_pane_g3

0x4f8c,	// (0x0003d183) fep_vkb_candidate_pane_g4

0x0002,

0xfb45,	// (0x00047d3c) fep_vkb_candidate_pane_g

0x100a,	// (0x00039201) cell_hwr_candidate_pane_g1_ParamLimits

0x1018,	// (0x0003920f) cell_hwr_candidate_pane_g3_ParamLimits

0x1018,	// (0x0003920f) cell_hwr_candidate_pane_g3

0x618d,	// (0x0003e384) cell_hwr_candidate_pane_g4_ParamLimits

0x618d,	// (0x0003e384) cell_hwr_candidate_pane_g4

0x0002,

0xfb64,	// (0x00047d5b) cell_hwr_candidate_pane_g_ParamLimits

0xfb64,	// (0x00047d5b) cell_hwr_candidate_pane_g

0x4fa3,	// (0x0003d19a) cell_vkb_candidate_pane_g3_ParamLimits

0x4fa3,	// (0x0003d19a) cell_vkb_candidate_pane_g3

0x4fbe,	// (0x0003d1b5) cell_vkb_candidate_pane_g4_ParamLimits

0x4fbe,	// (0x0003d1b5) cell_vkb_candidate_pane_g4

0xcc65,	// (0x00044e5c) cell_app_pane_cp2_g1_ParamLimits

0xcc65,	// (0x00044e5c) cell_app_pane_cp2_g1

0x50cd,	// (0x0003d2c4) cell_app_pane_cp2_g2_ParamLimits

0x50cd,	// (0x0003d2c4) cell_app_pane_cp2_g2

0x0001,

0xfbae,	// (0x00047da5) cell_app_pane_cp2_g_ParamLimits

0xfbae,	// (0x00047da5) cell_app_pane_cp2_g

0x50d9,	// (0x0003d2d0) cell_app_pane_cp2_t1_ParamLimits

0x50d9,	// (0x0003d2d0) cell_app_pane_cp2_t1

0xb591,	// (0x00043788) grid_highlight_pane_cp1_ParamLimits

0xb591,	// (0x00043788) grid_highlight_pane_cp1

0x1057,	// (0x0003924e) cell_hwr_candidate_pane_cp1_ParamLimits

0x1057,	// (0x0003924e) cell_hwr_candidate_pane_cp1

0x100a,	// (0x00039201) fep_hwr_candidate_drop_down_list_pane_g1

0x1076,	// (0x0003926d) fep_hwr_candidate_drop_down_list_pane_g2

0x1083,	// (0x0003927a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x00047daa) fep_hwr_candidate_drop_down_list_pane_g

0x1090,	// (0x00039287) fep_hwr_candidate_drop_down_list_scroll_pane

0x1099,	// (0x00039290) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1099,	// (0x00039290) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x10a6,	// (0x0003929d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x10a6,	// (0x0003929d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x10b3,	// (0x000392aa) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x10b3,	// (0x000392aa) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x10c0,	// (0x000392b7) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x10c0,	// (0x000392b7) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x10db,	// (0x000392d2) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x10db,	// (0x000392d2) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x10f6,	// (0x000392ed) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x10f6,	// (0x000392ed) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1111,	// (0x00039308) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1111,	// (0x00039308) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x112c,	// (0x00039323) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x112c,	// (0x00039323) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x00047db1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x00047db1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x50eb,	// (0x0003d2e2) cell_vkb_candidate_pane_cp1_ParamLimits

0x50eb,	// (0x0003d2e2) cell_vkb_candidate_pane_cp1

0x4c8c,	// (0x0003ce83) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4c8c,	// (0x0003ce83) fep_vkb_candidate_drop_down_list_pane_g1

0x510b,	// (0x0003d302) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x510b,	// (0x0003d302) fep_vkb_candidate_drop_down_list_pane_g2

0x5118,	// (0x0003d30f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5118,	// (0x0003d30f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x00047dc2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcb,	// (0x00047dc2) fep_vkb_candidate_drop_down_list_pane_g

0x5125,	// (0x0003d31c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5125,	// (0x0003d31c) fep_vkb_candidate_drop_down_list_scroll_pane

0x5132,	// (0x0003d329) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5132,	// (0x0003d329) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x513f,	// (0x0003d336) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x513f,	// (0x0003d336) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x514b,	// (0x0003d342) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x514b,	// (0x0003d342) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5157,	// (0x0003d34e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5157,	// (0x0003d34e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5178,	// (0x0003d36f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5178,	// (0x0003d36f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5199,	// (0x0003d390) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5199,	// (0x0003d390) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x51ba,	// (0x0003d3b1) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x51ba,	// (0x0003d3b1) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x51db,	// (0x0003d3d2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x51db,	// (0x0003d3d2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00047dc9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00047dc9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x892e,	// (0x00040b25) title_pane_g1_ParamLimits

0x8941,	// (0x00040b38) title_pane_g2_ParamLimits

0xf54e,	// (0x00047745) title_pane_g_ParamLimits

0xb9b4,	// (0x00043bab) aid_call2_pane

0xb9bc,	// (0x00043bb3) aid_call_pane

0xb9c4,	// (0x00043bbb) popup_clock_analogue_window_g1

0xb9c4,	// (0x00043bbb) popup_clock_analogue_window_g2

0xef8f,	// (0x00047186) popup_clock_analogue_window_g3

0xef98,	// (0x0004718f) popup_clock_analogue_window_g4

0xb179,	// (0x00043370) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x000478e0) popup_clock_analogue_window_g

0xefa0,	// (0x00047197) popup_clock_analogue_window_t1

0xefae,	// (0x000471a5) clock_digital_number_pane_ParamLimits

0xefae,	// (0x000471a5) clock_digital_number_pane

0xefba,	// (0x000471b1) clock_digital_number_pane_cp02_ParamLimits

0xefba,	// (0x000471b1) clock_digital_number_pane_cp02

0xefc6,	// (0x000471bd) clock_digital_number_pane_cp03_ParamLimits

0xefc6,	// (0x000471bd) clock_digital_number_pane_cp03

0xefd2,	// (0x000471c9) clock_digital_number_pane_cp04_ParamLimits

0xefd2,	// (0x000471c9) clock_digital_number_pane_cp04

0xefde,	// (0x000471d5) clock_digital_separator_pane_ParamLimits

0xefde,	// (0x000471d5) clock_digital_separator_pane

0xefea,	// (0x000471e1) popup_clock_digital_window_t1_ParamLimits

0xefea,	// (0x000471e1) popup_clock_digital_window_t1

0xb179,	// (0x00043370) clock_digital_number_pane_g1

0xb179,	// (0x00043370) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x000478eb) clock_digital_number_pane_g

0xb179,	// (0x00043370) clock_digital_separator_pane_g1

0xb179,	// (0x00043370) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x000478eb) clock_digital_separator_pane_g

0xa451,	// (0x00042648) aid_fill_nsta_ParamLimits

0xa587,	// (0x0004277e) indicator_nsta_pane_ParamLimits

0x221c,	// (0x0003a413) popup_clock_analogue_window

0x221c,	// (0x0003a413) popup_clock_digital_window

0xc88b,	// (0x00044a82) grid_indicator_nsta_pane_ParamLimits

0x4426,	// (0x0003c61d) clock_nsta_pane_t2

0x0001,

0xfa98,	// (0x00047c8f) clock_nsta_pane_t

0xeeea,	// (0x000470e1) aid_size_max_handle

0x9687,	// (0x0004187e) aid_size_min_handle

0xf36f,	// (0x00047566) editor_scroll_pane

0x51f6,	// (0x0003d3ed) ex_editor_pane

0xb6b0,	// (0x000438a7) scroll_pane_cp13

0xb539,	// (0x00043730) scroll_pane_cp14

0xb9f3,	// (0x00043bea) scroll_pane_cp36

0x9751,	// (0x00041948) list_single_graphic_hl_pane_cp2_ParamLimits

0x9751,	// (0x00041948) list_single_graphic_hl_pane_cp2

0xc677,	// (0x0004486e) list_single_graphic_hl_pane_ParamLimits

0xc677,	// (0x0004486e) list_single_graphic_hl_pane

0xa8bb,	// (0x00042ab2) aid_size_min_hl_cp1

0x5207,	// (0x0003d3fe) list_highlight_pane_cp34_ParamLimits

0x5207,	// (0x0003d3fe) list_highlight_pane_cp34

0x5218,	// (0x0003d40f) list_single_graphic_hl_pane_g1_ParamLimits

0x5218,	// (0x0003d40f) list_single_graphic_hl_pane_g1

0xa8c4,	// (0x00042abb) list_single_graphic_hl_pane_g2_ParamLimits

0xa8c4,	// (0x00042abb) list_single_graphic_hl_pane_g2

0xa8c4,	// (0x00042abb) list_single_graphic_hl_pane_g3_ParamLimits

0xa8c4,	// (0x00042abb) list_single_graphic_hl_pane_g3

0xda20,	// (0x00045c17) list_single_graphic_hl_pane_g4_ParamLimits

0xda20,	// (0x00045c17) list_single_graphic_hl_pane_g4

0xa8d0,	// (0x00042ac7) list_single_graphic_hl_pane_g5_ParamLimits

0xa8d0,	// (0x00042ac7) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x00047dda) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x00047dda) list_single_graphic_hl_pane_g

0xa8e4,	// (0x00042adb) list_single_graphic_hl_pane_t1_ParamLimits

0xa8e4,	// (0x00042adb) list_single_graphic_hl_pane_t1

0x5225,	// (0x0003d41c) aid_size_min_hl_cp2

0x522e,	// (0x0003d425) list_highlight_pane_cp34_cp2_ParamLimits

0x522e,	// (0x0003d425) list_highlight_pane_cp34_cp2

0x5218,	// (0x0003d40f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5218,	// (0x0003d40f) list_single_graphic_hl_pane_g1_cp2

0x523b,	// (0x0003d432) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x523b,	// (0x0003d432) list_single_graphic_hl_pane_g2_cp2

0xcc83,	// (0x00044e7a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcc83,	// (0x00044e7a) list_single_graphic_hl_pane_g3_cp2

0xf2ce,	// (0x000474c5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xf2ce,	// (0x000474c5) list_single_graphic_hl_pane_g4_cp2

0x5255,	// (0x0003d44c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5255,	// (0x0003d44c) list_single_graphic_hl_pane_g5_cp2

0x9b6a,	// (0x00041d61) control_pane_g4_ParamLimits

0x9b6a,	// (0x00041d61) control_pane_g4

0x1f1b,	// (0x0003a112) bg_popup_sub_pane_cp10_ParamLimits

0x4a26,	// (0x0003cc1d) list_choice_list_pane_ParamLimits

0x4a35,	// (0x0003cc2c) scroll_pane_cp23

0xb309,	// (0x00043500) bg_popup_preview_window_pane_cp02_ParamLimits

0x502f,	// (0x0003d226) list_preview_fixed_pane_ParamLimits

0x5045,	// (0x0003d23c) list_preview_fixed_pane_cp_ParamLimits

0x5045,	// (0x0003d23c) list_preview_fixed_pane_cp

0x5051,	// (0x0003d248) popup_preview_fixed_window_g1_ParamLimits

0x5051,	// (0x0003d248) popup_preview_fixed_window_g1

0x505d,	// (0x0003d254) popup_preview_fixed_window_g2_ParamLimits

0x505d,	// (0x0003d254) popup_preview_fixed_window_g2

0x0002,

0xfb6b,	// (0x00047d62) popup_preview_fixed_window_g_ParamLimits

0xfb6b,	// (0x00047d62) popup_preview_fixed_window_g

0xee5e,	// (0x00047055) aid_navi_side_left_pane_ParamLimits

0xee73,	// (0x0004706a) aid_navi_side_right_pane_ParamLimits

0xee8b,	// (0x00047082) navi_icon_pane_stacon_ParamLimits

0xee9f,	// (0x00047096) navi_navi_pane_stacon_ParamLimits

0xee8b,	// (0x00047082) navi_text_pane_stacon_ParamLimits

0xec7b,	// (0x00046e72) main_text_info_pane

0x527f,	// (0x0003d476) listscroll_text_info_pane

0x5287,	// (0x0003d47e) list_text_info_pane_ParamLimits

0x5287,	// (0x0003d47e) list_text_info_pane

0x5296,	// (0x0003d48d) scroll_pane_cp24_ParamLimits

0x5296,	// (0x0003d48d) scroll_pane_cp24

0xcc91,	// (0x00044e88) list_text_info_pane_t1_ParamLimits

0xcc91,	// (0x00044e88) list_text_info_pane_t1

0x9cf2,	// (0x00041ee9) popup_fast_swap2_window_ParamLimits

0x9cf2,	// (0x00041ee9) popup_fast_swap2_window

0x52e8,	// (0x0003d4df) aid_size_cell_fast2

0xb16f,	// (0x00043366) bg_popup_window_pane_cp17

0x28a9,	// (0x0003aaa0) heading_pane_cp2

0xb43d,	// (0x00043634) listscroll_fast2_pane

0x52f2,	// (0x0003d4e9) grid_fast2_pane

0x52fc,	// (0x0003d4f3) listscroll_fast2_pane_g1

0x5304,	// (0x0003d4fb) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x00047de5) listscroll_fast2_pane_g

0xb6b0,	// (0x000438a7) scroll_pane_cp26

0x530e,	// (0x0003d505) cell_fast2_pane_ParamLimits

0x530e,	// (0x0003d505) cell_fast2_pane

0x5323,	// (0x0003d51a) cell_fast2_pane_g1

0x532c,	// (0x0003d523) cell_fast2_pane_g2

0x5335,	// (0x0003d52c) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x00047dea) cell_fast2_pane_g

0xb470,	// (0x00043667) grid_highlight_pane_cp9

0x01d7,	// (0x000383ce) main_eswt_pane_ParamLimits

0x01d7,	// (0x000383ce) main_eswt_pane

0x52ab,	// (0x0003d4a2) list_single_text_info_pane

0x533d,	// (0x0003d534) eswt_ctrl_button_pane

0x533d,	// (0x0003d534) eswt_ctrl_canvas_pane

0xccad,	// (0x00044ea4) eswt_ctrl_combo_pane

0x533d,	// (0x0003d534) eswt_ctrl_default_pane

0x533d,	// (0x0003d534) eswt_ctrl_label_pane

0x534d,	// (0x0003d544) eswt_ctrl_wait_pane

0xccb5,	// (0x00044eac) eswt_shell_pane

0xb16f,	// (0x00043366) listscroll_eswt_app_pane

0x5375,	// (0x0003d56c) popup_eswt_tasktip_window_ParamLimits

0x5375,	// (0x0003d56c) popup_eswt_tasktip_window

0x24b6,	// (0x0003a6ad) bg_popup_window_pane_cp18

0x5386,	// (0x0003d57d) eswt_control_pane_g1_ParamLimits

0x5386,	// (0x0003d57d) eswt_control_pane_g1

0x5393,	// (0x0003d58a) eswt_control_pane_g2_ParamLimits

0x5393,	// (0x0003d58a) eswt_control_pane_g2

0x53a0,	// (0x0003d597) eswt_control_pane_g3_ParamLimits

0x53a0,	// (0x0003d597) eswt_control_pane_g3

0x53ad,	// (0x0003d5a4) eswt_control_pane_g4_ParamLimits

0x53ad,	// (0x0003d5a4) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x00047df1) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x00047df1) eswt_control_pane_g

0xb591,	// (0x00043788) bg_button_pane_ParamLimits

0xb591,	// (0x00043788) bg_button_pane

0xb485,	// (0x0004367c) common_borders_pane_copy2_ParamLimits

0xb485,	// (0x0004367c) common_borders_pane_copy2

0x53ba,	// (0x0003d5b1) control_button_pane_g1_ParamLimits

0x53ba,	// (0x0003d5b1) control_button_pane_g1

0x53c6,	// (0x0003d5bd) control_button_pane_g2_ParamLimits

0x53c6,	// (0x0003d5bd) control_button_pane_g2

0x53d2,	// (0x0003d5c9) control_button_pane_g3_ParamLimits

0x53d2,	// (0x0003d5c9) control_button_pane_g3

0x0002,

0xfc03,	// (0x00047dfa) control_button_pane_g_ParamLimits

0xfc03,	// (0x00047dfa) control_button_pane_g

0x53e6,	// (0x0003d5dd) control_button_pane_t1

0x53f4,	// (0x0003d5eb) control_button_pane_t2

0x0001,

0xfc0a,	// (0x00047e01) control_button_pane_t

0x2442,	// (0x0003a639) bg_button_pane_g1

0x2452,	// (0x0003a649) bg_button_pane_g2

0x244a,	// (0x0003a641) bg_button_pane_g3

0x2462,	// (0x0003a659) bg_button_pane_g4

0x245a,	// (0x0003a651) bg_button_pane_g5

0x246a,	// (0x0003a661) bg_button_pane_g6

0x2472,	// (0x0003a669) bg_button_pane_g7

0x2482,	// (0x0003a679) bg_button_pane_g8

0x247a,	// (0x0003a671) bg_button_pane_g9

0x0008,

0xf84b,	// (0x00047a42) bg_button_pane_g

0x49e1,	// (0x0003cbd8) common_borders_pane_ParamLimits

0x49e1,	// (0x0003cbd8) common_borders_pane

0x5386,	// (0x0003d57d) eswt_control_pane_g1_copy1_ParamLimits

0x5386,	// (0x0003d57d) eswt_control_pane_g1_copy1

0x5393,	// (0x0003d58a) eswt_control_pane_g2_copy1_ParamLimits

0x5393,	// (0x0003d58a) eswt_control_pane_g2_copy1

0x53a0,	// (0x0003d597) eswt_control_pane_g3_copy1_ParamLimits

0x53a0,	// (0x0003d597) eswt_control_pane_g3_copy1

0x53ad,	// (0x0003d5a4) eswt_control_pane_g4_copy1_ParamLimits

0x53ad,	// (0x0003d5a4) eswt_control_pane_g4_copy1

0x4a1c,	// (0x0003cc13) bg_eswt_ctrl_canvas_pane_g1

0x49e1,	// (0x0003cbd8) common_borders_pane_cp2_ParamLimits

0x49e1,	// (0x0003cbd8) common_borders_pane_cp2

0x49e1,	// (0x0003cbd8) common_borders_pane_cp3_ParamLimits

0x49e1,	// (0x0003cbd8) common_borders_pane_cp3

0x5402,	// (0x0003d5f9) separator_horizontal_pane

0x540a,	// (0x0003d601) separator_vertical_pane

0x5386,	// (0x0003d57d) eswt_control_pane_g1_copy2_ParamLimits

0x5386,	// (0x0003d57d) eswt_control_pane_g1_copy2

0x5393,	// (0x0003d58a) eswt_control_pane_g2_copy2_ParamLimits

0x5393,	// (0x0003d58a) eswt_control_pane_g2_copy2

0x53a0,	// (0x0003d597) eswt_control_pane_g3_copy2_ParamLimits

0x53a0,	// (0x0003d597) eswt_control_pane_g3_copy2

0x53ad,	// (0x0003d5a4) eswt_control_pane_g4_copy2_ParamLimits

0x53ad,	// (0x0003d5a4) eswt_control_pane_g4_copy2

0xb16f,	// (0x00043366) common_borders_pane_cp4

0x5413,	// (0x0003d60a) separator_horizontal_pane_g1

0x541c,	// (0x0003d613) separator_horizontal_pane_g2

0x5425,	// (0x0003d61c) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x00047e06) separator_horizontal_pane_g

0x5386,	// (0x0003d57d) eswt_control_pane_g1_copy3_ParamLimits

0x5386,	// (0x0003d57d) eswt_control_pane_g1_copy3

0x5393,	// (0x0003d58a) eswt_control_pane_g2_copy3_ParamLimits

0x5393,	// (0x0003d58a) eswt_control_pane_g2_copy3

0x53a0,	// (0x0003d597) eswt_control_pane_g3_copy3_ParamLimits

0x53a0,	// (0x0003d597) eswt_control_pane_g3_copy3

0x53ad,	// (0x0003d5a4) eswt_control_pane_g4_copy3_ParamLimits

0x53ad,	// (0x0003d5a4) eswt_control_pane_g4_copy3

0xb16f,	// (0x00043366) common_borders_pane_cp5

0x542e,	// (0x0003d625) separator_vertical_pane_g1

0x5437,	// (0x0003d62e) separator_vertical_pane_g2

0x5440,	// (0x0003d637) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x00047e0d) separator_vertical_pane_g

0x5386,	// (0x0003d57d) eswt_control_pane_g1_copy4_ParamLimits

0x5386,	// (0x0003d57d) eswt_control_pane_g1_copy4

0x5393,	// (0x0003d58a) eswt_control_pane_g2_copy4_ParamLimits

0x5393,	// (0x0003d58a) eswt_control_pane_g2_copy4

0x53a0,	// (0x0003d597) eswt_control_pane_g3_copy4_ParamLimits

0x53a0,	// (0x0003d597) eswt_control_pane_g3_copy4

0x53ad,	// (0x0003d5a4) eswt_control_pane_g4_copy4_ParamLimits

0x53ad,	// (0x0003d5a4) eswt_control_pane_g4_copy4

0xccd5,	// (0x00044ecc) eswt_ctrl_combo_button_pane

0xccdd,	// (0x00044ed4) eswt_ctrl_input_pane

0xcce5,	// (0x00044edc) popup_choice_list_window_cp70

0xcced,	// (0x00044ee4) eswt_ctrl_input_pane_t1

0xb16f,	// (0x00043366) input_focus_pane_cp70

0x49e1,	// (0x0003cbd8) bg_button_pane_cp70_ParamLimits

0x49e1,	// (0x0003cbd8) bg_button_pane_cp70

0xccfb,	// (0x00044ef2) eswt_ctrl_combo_button_pane_g1

0x5477,	// (0x0003d66e) wait_bar_pane_cp70

0x24b6,	// (0x0003a6ad) bg_popup_window_pane_cp70_ParamLimits

0x24b6,	// (0x0003a6ad) bg_popup_window_pane_cp70

0x547f,	// (0x0003d676) popup_eswt_tasktip_window_t1

0x5495,	// (0x0003d68c) wait_bar_pane_cp71_ParamLimits

0x5495,	// (0x0003d68c) wait_bar_pane_cp71

0x54a1,	// (0x0003d698) grid_eswt_app_pane

0xb897,	// (0x00043a8e) scroll_pane_cp70

0xcd03,	// (0x00044efa) cell_eswt_app_pane_ParamLimits

0xcd03,	// (0x00044efa) cell_eswt_app_pane

0xcd2d,	// (0x00044f24) cell_eswt_app_pane_g1_ParamLimits

0xcd2d,	// (0x00044f24) cell_eswt_app_pane_g1

0xcd5c,	// (0x00044f53) cell_eswt_app_pane_g2_ParamLimits

0xcd5c,	// (0x00044f53) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x00047e14) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x00047e14) cell_eswt_app_pane_g

0xcd80,	// (0x00044f77) cell_eswt_app_pane_t1_ParamLimits

0xcd80,	// (0x00044f77) cell_eswt_app_pane_t1

0x555f,	// (0x0003d756) grid_highlight_pane_cp70_ParamLimits

0x555f,	// (0x0003d756) grid_highlight_pane_cp70

0xf272,	// (0x00047469) set_content_pane_g1

0x9afc,	// (0x00041cf3) status_small_volume_pane

0xa8fa,	// (0x00042af1) status_small_volume_pane_g1

0xa902,	// (0x00042af9) volume_small2_pane

0xa90b,	// (0x00042b02) volume_small2_pane_g1

0xa914,	// (0x00042b0b) volume_small2_pane_g2

0xa91d,	// (0x00042b14) volume_small2_pane_g3

0xa926,	// (0x00042b1d) volume_small2_pane_g4

0xa92f,	// (0x00042b26) volume_small2_pane_g5

0xa938,	// (0x00042b2f) volume_small2_pane_g6

0xa941,	// (0x00042b38) volume_small2_pane_g7

0xa94a,	// (0x00042b41) volume_small2_pane_g8

0xa953,	// (0x00042b4a) volume_small2_pane_g9

0xa95c,	// (0x00042b53) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x00047e19) volume_small2_pane_g

0x4dd4,	// (0x0003cfcb) fep_vkb_top_text_pane_g1_ParamLimits

0xcc0d,	// (0x00044e04) fep_vkb_top_text_pane_t1_ParamLimits

0x5069,	// (0x0003d260) popup_preview_fixed_window_g3_ParamLimits

0x5069,	// (0x0003d260) popup_preview_fixed_window_g3

0xa38f,	// (0x00042586) popup_toolbar_trans_pane

0xc510,	// (0x00044707) aid_height_set_list_ParamLimits

0x37fd,	// (0x0003b9f4) aid_size_parent_ParamLimits

0x1f1b,	// (0x0003a112) list_highlight_pane_cp2_ParamLimits

0xf272,	// (0x00047469) set_content_pane_g1_ParamLimits

0xc689,	// (0x00044880) list_single_image_pane_ParamLimits

0xc689,	// (0x00044880) list_single_image_pane

0xcdb2,	// (0x00044fa9) aid_size_cell_image_ParamLimits

0xcdb2,	// (0x00044fa9) aid_size_cell_image

0xcdbf,	// (0x00044fb6) grid_single_image_pane_ParamLimits

0xcdbf,	// (0x00044fb6) grid_single_image_pane

0x5586,	// (0x0003d77d) list_single_image_pane_g1_ParamLimits

0x5586,	// (0x0003d77d) list_single_image_pane_g1

0x5592,	// (0x0003d789) list_single_image_pane_g2_ParamLimits

0x5592,	// (0x0003d789) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x00047e2e) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x00047e2e) list_single_image_pane_g

0x55a6,	// (0x0003d79d) list_single_image_pane_t1_ParamLimits

0x55a6,	// (0x0003d79d) list_single_image_pane_t1

0xcdcb,	// (0x00044fc2) cell_image_list_pane_ParamLimits

0xcdcb,	// (0x00044fc2) cell_image_list_pane

0xcddf,	// (0x00044fd6) cell_image_list_pane_g1

0xcde8,	// (0x00044fdf) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x00047e33) cell_image_list_pane_g

0xcdf1,	// (0x00044fe8) aid_size_cell_tb_trans_pane

0xb591,	// (0x00043788) bg_tb_trans_pane

0xce03,	// (0x00044ffa) grid_tb_trans_pane

0x2442,	// (0x0003a639) bg_tb_trans_pane_g1

0x2452,	// (0x0003a649) bg_tb_trans_pane_g2

0x244a,	// (0x0003a641) bg_tb_trans_pane_g3

0x2462,	// (0x0003a659) bg_tb_trans_pane_g4

0x245a,	// (0x0003a651) bg_tb_trans_pane_g5

0x2482,	// (0x0003a679) bg_tb_trans_pane_g6

0x247a,	// (0x0003a671) bg_tb_trans_pane_g7

0x246a,	// (0x0003a661) bg_tb_trans_pane_g8

0x2472,	// (0x0003a669) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x00047e38) bg_tb_trans_pane_g

0xce17,	// (0x0004500e) cell_toolbar_trans_pane_ParamLimits

0xce17,	// (0x0004500e) cell_toolbar_trans_pane

0x4a1c,	// (0x0003cc13) cell_toolbar_trans_pane_g1

0xc952,	// (0x00044b49) list_form2_midp_pane_t1

0xc960,	// (0x00044b57) list_form2_midp_pane_t2

0x0001,

0xfade,	// (0x00047cd5) list_form2_midp_pane_t

0x4603,	// (0x0003c7fa) scroll_pane_cp51_ParamLimits

0x47bf,	// (0x0003c9b6) form2_midp_wait_pane_g1

0x47c8,	// (0x0003c9bf) form2_midp_wait_pane_g2

0x47d1,	// (0x0003c9c8) form2_midp_wait_pane_g3

0x0002,

0xfaf3,	// (0x00047cea) form2_midp_wait_pane_g

0xb1df,	// (0x000433d6) list_highlight_pane_cp21_ParamLimits

0x4819,	// (0x0003ca10) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4828,	// (0x0003ca1f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd4c9,	// (0x000456c0) list_single_2graphic_im_pane_ParamLimits

0xd4c9,	// (0x000456c0) list_single_2graphic_im_pane

0xce3d,	// (0x00045034) list_single_2graphic_im_pane_g1_ParamLimits

0xce3d,	// (0x00045034) list_single_2graphic_im_pane_g1

0xce4e,	// (0x00045045) list_single_2graphic_im_pane_g2_ParamLimits

0xce4e,	// (0x00045045) list_single_2graphic_im_pane_g2

0xce5a,	// (0x00045051) list_single_2graphic_im_pane_g3_ParamLimits

0xce5a,	// (0x00045051) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x00047e4b) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x00047e4b) list_single_2graphic_im_pane_g

0xce6e,	// (0x00045065) list_single_2graphic_im_pane_t1_ParamLimits

0xce6e,	// (0x00045065) list_single_2graphic_im_pane_t1

0x5075,	// (0x0003d26c) list_single_graphic_2heading_pane_fp_ParamLimits

0x5075,	// (0x0003d26c) list_single_graphic_2heading_pane_fp

0xd892,	// (0x00045a89) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd892,	// (0x00045a89) list_single_graphic_2heading_pane_fp_g1

0x508b,	// (0x0003d282) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x508b,	// (0x0003d282) list_single_graphic_2heading_pane_fp_g2

0xd85b,	// (0x00045a52) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd85b,	// (0x00045a52) list_single_graphic_2heading_pane_fp_g3

0xd867,	// (0x00045a5e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd867,	// (0x00045a5e) list_single_graphic_2heading_pane_fp_g4

0x5097,	// (0x0003d28e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5097,	// (0x0003d28e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x00047d72) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x00047d72) list_single_graphic_2heading_pane_fp_g

0xda2c,	// (0x00045c23) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xda2c,	// (0x00045c23) list_single_graphic_2heading_pane_fp_t1

0xd8ca,	// (0x00045ac1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd8ca,	// (0x00045ac1) list_single_graphic_2heading_pane_fp_t2

0xda42,	// (0x00045c39) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xda42,	// (0x00045c39) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x00047e54) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x00047e54) list_single_graphic_2heading_pane_fp_t

0x4aa8,	// (0x0003cc9f) fep_hwr_write_pane_g5_ParamLimits

0x4aa8,	// (0x0003cc9f) fep_hwr_write_pane_g5

0x4ab4,	// (0x0003ccab) fep_hwr_write_pane_g6_ParamLimits

0x4ab4,	// (0x0003ccab) fep_hwr_write_pane_g6

0xccb5,	// (0x00044eac) eswt_shell_pane_ParamLimits

0x24b6,	// (0x0003a6ad) bg_popup_window_pane_cp18_ParamLimits

0x3745,	// (0x0003b93c) heading_pane_cp70

0x547f,	// (0x0003d676) popup_eswt_tasktip_window_t1_ParamLimits

0xa4ac,	// (0x000426a3) aid_touch_tab_arrow_left

0xa4c2,	// (0x000426b9) aid_touch_tab_arrow_right

0x8959,	// (0x00040b50) title_pane_g3_ParamLimits

0x8959,	// (0x00040b50) title_pane_g3

0xb559,	// (0x00043750) set_value_pane_g1

0xa38f,	// (0x00042586) popup_toolbar_trans_pane_ParamLimits

0xcdf1,	// (0x00044fe8) aid_size_cell_tb_trans_pane_ParamLimits

0xb591,	// (0x00043788) bg_tb_trans_pane_ParamLimits

0xce03,	// (0x00044ffa) grid_tb_trans_pane_ParamLimits

0xb309,	// (0x00043500) cont_note_pane_ParamLimits

0xb309,	// (0x00043500) cont_note_pane

0xb485,	// (0x0004367c) cont_snote2_single_text_pane_ParamLimits

0xb485,	// (0x0004367c) cont_snote2_single_text_pane

0xb485,	// (0x0004367c) cont_snote2_single_graphic_pane_ParamLimits

0xb485,	// (0x0004367c) cont_snote2_single_graphic_pane

0x2ac8,	// (0x0003acbf) cont_note_wait_pane_ParamLimits

0x2ac8,	// (0x0003acbf) cont_note_wait_pane

0x2ac8,	// (0x0003acbf) cont_note_image_pane_ParamLimits

0x2ac8,	// (0x0003acbf) cont_note_image_pane

0x569c,	// (0x0003d893) popup_note2_window_g1_ParamLimits

0x569c,	// (0x0003d893) popup_note2_window_g1

0xceac,	// (0x000450a3) popup_note2_window_t1_ParamLimits

0xceac,	// (0x000450a3) popup_note2_window_t1

0xcef1,	// (0x000450e8) popup_note2_window_t2_ParamLimits

0xcef1,	// (0x000450e8) popup_note2_window_t2

0xcf36,	// (0x0004512d) popup_note2_window_t3_ParamLimits

0xcf36,	// (0x0004512d) popup_note2_window_t3

0x579c,	// (0x0003d993) popup_note2_window_t4_ParamLimits

0x579c,	// (0x0003d993) popup_note2_window_t4

0xb38d,	// (0x00043584) popup_note2_window_t5_ParamLimits

0xb38d,	// (0x00043584) popup_note2_window_t5

0x0004,

0xfc69,	// (0x00047e60) popup_note2_window_t_ParamLimits

0xfc69,	// (0x00047e60) popup_note2_window_t

0x57cb,	// (0x0003d9c2) popup_note2_image_window_g1_ParamLimits

0x57cb,	// (0x0003d9c2) popup_note2_image_window_g1

0xcf7b,	// (0x00045172) popup_note2_image_window_g2_ParamLimits

0xcf7b,	// (0x00045172) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x00047e6b) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x00047e6b) popup_note2_image_window_g

0x57e9,	// (0x0003d9e0) popup_note2_image_window_t1_ParamLimits

0x57e9,	// (0x0003d9e0) popup_note2_image_window_t1

0x5801,	// (0x0003d9f8) popup_note2_image_window_t2_ParamLimits

0x5801,	// (0x0003d9f8) popup_note2_image_window_t2

0x5819,	// (0x0003da10) popup_note2_image_window_t3_ParamLimits

0x5819,	// (0x0003da10) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x00047e70) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x00047e70) popup_note2_image_window_t

0x2ad6,	// (0x0003accd) popup_note2_wait_window_g1_ParamLimits

0x2ad6,	// (0x0003accd) popup_note2_wait_window_g1

0x2ae2,	// (0x0003acd9) popup_note2_wait_window_g2_ParamLimits

0x2ae2,	// (0x0003acd9) popup_note2_wait_window_g2

0x2aee,	// (0x0003ace5) popup_note2_wait_window_g3_ParamLimits

0x2aee,	// (0x0003ace5) popup_note2_wait_window_g3

0x0002,

0xf82d,	// (0x00047a24) popup_note2_wait_window_g_ParamLimits

0xf82d,	// (0x00047a24) popup_note2_wait_window_g

0x5835,	// (0x0003da2c) popup_note2_wait_window_t1_ParamLimits

0x5835,	// (0x0003da2c) popup_note2_wait_window_t1

0x5853,	// (0x0003da4a) popup_note2_wait_window_t2_ParamLimits

0x5853,	// (0x0003da4a) popup_note2_wait_window_t2

0x5871,	// (0x0003da68) popup_note2_wait_window_t3_ParamLimits

0x5871,	// (0x0003da68) popup_note2_wait_window_t3

0x5883,	// (0x0003da7a) popup_note2_wait_window_t4_ParamLimits

0x5883,	// (0x0003da7a) popup_note2_wait_window_t4

0x0003,

0xfc80,	// (0x00047e77) popup_note2_wait_window_t_ParamLimits

0xfc80,	// (0x00047e77) popup_note2_wait_window_t

0x5895,	// (0x0003da8c) wait_bar2_pane_ParamLimits

0x5895,	// (0x0003da8c) wait_bar2_pane

0x58ad,	// (0x0003daa4) popup_snote2_single_text_window_g1_ParamLimits

0x58ad,	// (0x0003daa4) popup_snote2_single_text_window_g1

0x58d5,	// (0x0003dacc) popup_snote2_single_text_window_t1_ParamLimits

0x58d5,	// (0x0003dacc) popup_snote2_single_text_window_t1

0x5921,	// (0x0003db18) popup_snote2_single_text_window_t2_ParamLimits

0x5921,	// (0x0003db18) popup_snote2_single_text_window_t2

0x596d,	// (0x0003db64) popup_snote2_single_text_window_t3_ParamLimits

0x596d,	// (0x0003db64) popup_snote2_single_text_window_t3

0x59ae,	// (0x0003dba5) popup_snote2_single_text_window_t4_ParamLimits

0x59ae,	// (0x0003dba5) popup_snote2_single_text_window_t4

0x59e4,	// (0x0003dbdb) popup_snote2_single_text_window_t5_ParamLimits

0x59e4,	// (0x0003dbdb) popup_snote2_single_text_window_t5

0x0004,

0xfc89,	// (0x00047e80) popup_snote2_single_text_window_t_ParamLimits

0xfc89,	// (0x00047e80) popup_snote2_single_text_window_t

0xcf8d,	// (0x00045184) popup_snote2_single_graphic_window_g1_ParamLimits

0xcf8d,	// (0x00045184) popup_snote2_single_graphic_window_g1

0x5a37,	// (0x0003dc2e) popup_snote2_single_graphic_window_g2_ParamLimits

0x5a37,	// (0x0003dc2e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc94,	// (0x00047e8b) popup_snote2_single_graphic_window_g_ParamLimits

0xfc94,	// (0x00047e8b) popup_snote2_single_graphic_window_g

0x5a5f,	// (0x0003dc56) popup_snote2_single_graphic_window_t1_ParamLimits

0x5a5f,	// (0x0003dc56) popup_snote2_single_graphic_window_t1

0x5aab,	// (0x0003dca2) popup_snote2_single_graphic_window_t2_ParamLimits

0x5aab,	// (0x0003dca2) popup_snote2_single_graphic_window_t2

0x596d,	// (0x0003db64) popup_snote2_single_graphic_window_t3_ParamLimits

0x596d,	// (0x0003db64) popup_snote2_single_graphic_window_t3

0x59ae,	// (0x0003dba5) popup_snote2_single_graphic_window_t4_ParamLimits

0x59ae,	// (0x0003dba5) popup_snote2_single_graphic_window_t4

0x59e4,	// (0x0003dbdb) popup_snote2_single_graphic_window_t5_ParamLimits

0x59e4,	// (0x0003dbdb) popup_snote2_single_graphic_window_t5

0x0004,

0xfc99,	// (0x00047e90) popup_snote2_single_graphic_window_t_ParamLimits

0xfc99,	// (0x00047e90) popup_snote2_single_graphic_window_t

0x44c0,	// (0x0003c6b7) clock_nsta_pane_cp2_t1

0x44c0,	// (0x0003c6b7) clock_nsta_pane_cp2_t2

0x0001,

0xfab4,	// (0x00047cab) clock_nsta_pane_cp2_t

0x937e,	// (0x00041575) form_field_data_wide_pane_g1_ParamLimits

0xb59f,	// (0x00043796) form_field_data_wide_pane_g2_ParamLimits

0xb59f,	// (0x00043796) form_field_data_wide_pane_g2

0xb5ab,	// (0x000437a2) form_field_data_wide_pane_g3_ParamLimits

0xb5ab,	// (0x000437a2) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x00047863) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x00047863) form_field_data_wide_pane_g

0xc875,	// (0x00044a6c) grid_touch_3_pane_ParamLimits

0xc875,	// (0x00044a6c) grid_touch_3_pane

0xcfb5,	// (0x000451ac) cell_touch_3_pane_ParamLimits

0xcfb5,	// (0x000451ac) cell_touch_3_pane

0x4a1c,	// (0x0003cc13) cell_touch_3_pane_g1

0x4a1c,	// (0x0003cc13) cell_touch_3_pane_g2

0x0001,

0xfb39,	// (0x00047d30) cell_touch_3_pane_g

0xb3bf,	// (0x000435b6) cont_query_data_pane

0xb3c7,	// (0x000435be) cont_query_data_pane_cp1

0x5b25,	// (0x0003dd1c) button_value_adjust_pane_cp7

0x5b2d,	// (0x0003dd24) query_popup_pane_cp3

0xba25,	// (0x00043c1c) bg_popup_sub_pane_cp22_ParamLimits

0x97de,	// (0x000419d5) navi_navi_volume_pane_cp2

0x97ed,	// (0x000419e4) popup_side_volume_key_window_g2

0x97fc,	// (0x000419f3) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x000478f9) popup_side_volume_key_window_g

0x980b,	// (0x00041a02) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x00047900) popup_side_volume_key_window_t

0x9946,	// (0x00041b3d) popup_side_volume_key_window_ParamLimits

0x9050,	// (0x00041247) list_double_graphic_pane_g4_ParamLimits

0x9050,	// (0x00041247) list_double_graphic_pane_g4

0xa7fe,	// (0x000429f5) list_single_2heading_msg_pane_ParamLimits

0xa7fe,	// (0x000429f5) list_single_2heading_msg_pane

0xa965,	// (0x00042b5c) list_single_2heading_msg_pane_g1_ParamLimits

0xa965,	// (0x00042b5c) list_single_2heading_msg_pane_g1

0xa971,	// (0x00042b68) list_single_2heading_msg_pane_g2_ParamLimits

0xa971,	// (0x00042b68) list_single_2heading_msg_pane_g2

0xa984,	// (0x00042b7b) list_single_2heading_msg_pane_g3_ParamLimits

0xa984,	// (0x00042b7b) list_single_2heading_msg_pane_g3

0xda62,	// (0x00045c59) list_single_2heading_msg_pane_g4_ParamLimits

0xda62,	// (0x00045c59) list_single_2heading_msg_pane_g4

0x0003,

0xfca4,	// (0x00047e9b) list_single_2heading_msg_pane_g_ParamLimits

0xfca4,	// (0x00047e9b) list_single_2heading_msg_pane_g

0xda7a,	// (0x00045c71) list_single_2heading_msg_pane_t1_ParamLimits

0xda7a,	// (0x00045c71) list_single_2heading_msg_pane_t1

0xa990,	// (0x00042b87) list_single_2heading_msg_pane_t2_ParamLimits

0xa990,	// (0x00042b87) list_single_2heading_msg_pane_t2

0xa9fb,	// (0x00042bf2) list_single_2heading_msg_pane_t3_ParamLimits

0xa9fb,	// (0x00042bf2) list_single_2heading_msg_pane_t3

0xdaa2,	// (0x00045c99) list_single_2heading_msg_pane_t4_ParamLimits

0xdaa2,	// (0x00045c99) list_single_2heading_msg_pane_t4

0x0003,

0xfcad,	// (0x00047ea4) list_single_2heading_msg_pane_t_ParamLimits

0xfcad,	// (0x00047ea4) list_single_2heading_msg_pane_t

0xb18d,	// (0x00043384) title_pane_g4_ParamLimits

0xb18d,	// (0x00043384) title_pane_g4

0xedaf,	// (0x00046fa6) title_pane_stacon_g3_ParamLimits

0xedaf,	// (0x00046fa6) title_pane_stacon_g3

0x565f,	// (0x0003d856) list_single_2graphic_im_pane_g4_ParamLimits

0x565f,	// (0x0003d856) list_single_2graphic_im_pane_g4

0xc3bd,	// (0x000445b4) popup_side_volume_key_window_cp

0x3d1d,	// (0x0003bf14) main_idle_act2_pane_t1

0x07b0,	// (0x000389a7) toolbar_button_pane_g10

0x8f63,	// (0x0004115a) popup_toolbar_window_cp1

0x44b1,	// (0x0003c6a8) clock_nsta_pane_cp_t1

0x44b1,	// (0x0003c6a8) clock_nsta_pane_cp_t2

0x0001,

0xfaaf,	// (0x00047ca6) clock_nsta_pane_cp_t

0x97de,	// (0x000419d5) navi_navi_volume_pane_cp2_ParamLimits

0xf009,	// (0x00047200) popup_side_volume_key_window_g1_ParamLimits

0x97ed,	// (0x000419e4) popup_side_volume_key_window_g2_ParamLimits

0x97fc,	// (0x000419f3) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x000478f9) popup_side_volume_key_window_g_ParamLimits

0x0db3,	// (0x00038faa) fep_hwr_aid_pane

0x0e5a,	// (0x00039051) bg_fep_hwr_top_pane_g4_ParamLimits

0x4a78,	// (0x0003cc6f) fep_hwr_top_pane_g1_ParamLimits

0x4a8a,	// (0x0003cc81) fep_hwr_top_pane_g2_ParamLimits

0x0e7a,	// (0x00039071) fep_hwr_top_pane_g3_ParamLimits

0xfb04,	// (0x00047cfb) fep_hwr_top_pane_g_ParamLimits

0x0e8f,	// (0x00039086) fep_hwr_top_text_pane_ParamLimits

0x32d2,	// (0x0003b4c9) aid_touch_tab_arrow_arrow_2

0x32db,	// (0x0003b4d2) aid_touch_tab_arrow_left_2

0x0dc7,	// (0x00038fbe) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0dfe,	// (0x00038ff5) fep_hwr_prediction_pane

0x4be3,	// (0x0003cdda) fep_vkb_prediction_pane

0xcbed,	// (0x00044de4) fep_vkb_side_pane_g3_ParamLimits

0xcbed,	// (0x00044de4) fep_vkb_side_pane_g3

0x100a,	// (0x00039201) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1076,	// (0x0003926d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1083,	// (0x0003927a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb3,	// (0x00047daa) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x126d,	// (0x00039464) fep_hwr_prediction_pane_g1

0x1277,	// (0x0003946e) fep_hwr_prediction_pane_g2

0x127f,	// (0x00039476) fep_hwr_prediction_pane_g3

0x1287,	// (0x0003947e) fep_hwr_prediction_pane_g4

0x0003,

0xfcb6,	// (0x00047ead) fep_hwr_prediction_pane_g

0x5b52,	// (0x0003dd49) fep_vkb_prediction_pane_g1

0x5b5c,	// (0x0003dd53) fep_vkb_prediction_pane_g2

0x5b64,	// (0x0003dd5b) fep_vkb_prediction_pane_g3

0x5b6c,	// (0x0003dd63) fep_vkb_prediction_pane_g4

0x0003,

0xfcbf,	// (0x00047eb6) fep_vkb_prediction_pane_g

0xa750,	// (0x00042947) slider_set_pane_g3

0xa764,	// (0x0004295b) slider_set_pane_g4

0xa77c,	// (0x00042973) slider_set_pane_g5

0xa750,	// (0x00042947) slider_set_pane_g6

0xa792,	// (0x00042989) slider_set_pane_g7

0x395e,	// (0x0003bb55) slider_form_pane_g3

0x3967,	// (0x0003bb5e) slider_form_pane_g4

0x396f,	// (0x0003bb66) slider_form_pane_g5

0x395e,	// (0x0003bb55) slider_form_pane_g6

0xc65b,	// (0x00044852) slider_form_pane_g7

0x3fc8,	// (0x0003c1bf) slider_set_pane_vc_g3

0x3fd1,	// (0x0003c1c8) slider_set_pane_vc_g4

0x3fda,	// (0x0003c1d1) slider_set_pane_vc_g5

0x3fc8,	// (0x0003c1bf) slider_set_pane_vc_g6

0x3fe3,	// (0x0003c1da) slider_set_pane_vc_g7

0x4195,	// (0x0003c38c) slider_form_pane_vc_g1

0x419e,	// (0x0003c395) slider_form_pane_vc_g2

0x41a7,	// (0x0003c39e) slider_form_pane_vc_g3

0x4195,	// (0x0003c38c) slider_form_pane_vc_g4

0x41b0,	// (0x0003c3a7) slider_form_pane_vc_g5

0x0004,

0xfa81,	// (0x00047c78) slider_form_pane_vc_g

0xec7b,	// (0x00046e72) main_idle_act3_pane

0x5b74,	// (0x0003dd6b) ai3_links_pane

0xcffe,	// (0x000451f5) popup_ai3_data_window_ParamLimits

0xcffe,	// (0x000451f5) popup_ai3_data_window

0xb16f,	// (0x00043366) grid_ai3_links_pane

0xd016,	// (0x0004520d) cell_ai3_links_pane_ParamLimits

0xd016,	// (0x0004520d) cell_ai3_links_pane

0x5bad,	// (0x0003dda4) bg_popup_sub_pane_cp11

0x5bba,	// (0x0003ddb1) cell_ai3_links_pane_g1

0xb16f,	// (0x00043366) bg_popup_sub_pane_cp12

0x5bdf,	// (0x0003ddd6) heading_ai3_data_pane

0x5be7,	// (0x0003ddde) list_ai3_gene_pane

0x5bf3,	// (0x0003ddea) popup_ai3_data_window_g1

0x5bfb,	// (0x0003ddf2) heading_ai3_data_pane_g1

0x5c03,	// (0x0003ddfa) heading_ai3_data_pane_t1

0xd030,	// (0x00045227) list_double_ai3_gene_pane_ParamLimits

0xd030,	// (0x00045227) list_double_ai3_gene_pane

0x5c1e,	// (0x0003de15) list_single_ai3_gene_pane_ParamLimits

0x5c1e,	// (0x0003de15) list_single_ai3_gene_pane

0x49e1,	// (0x0003cbd8) list_highlight_pane_cp7_ParamLimits

0x49e1,	// (0x0003cbd8) list_highlight_pane_cp7

0x5c2b,	// (0x0003de22) list_single_a13_gene_pane_t1_ParamLimits

0x5c2b,	// (0x0003de22) list_single_a13_gene_pane_t1

0x5c42,	// (0x0003de39) list_single_ai3_gene_pane_g1

0x5c4b,	// (0x0003de42) list_single_ai3_gene_pane_g2

0x0001,

0xfcc8,	// (0x00047ebf) list_single_ai3_gene_pane_g

0x5c53,	// (0x0003de4a) list_double_ai3_gene_pane_g1_ParamLimits

0x5c53,	// (0x0003de4a) list_double_ai3_gene_pane_g1

0xd03d,	// (0x00045234) list_double_ai3_gene_pane_t1_ParamLimits

0xd03d,	// (0x00045234) list_double_ai3_gene_pane_t1

0x5c7b,	// (0x0003de72) list_double_ai3_gene_pane_t2_ParamLimits

0x5c7b,	// (0x0003de72) list_double_ai3_gene_pane_t2

0x5c90,	// (0x0003de87) list_double_ai3_gene_pane_t3_ParamLimits

0x5c90,	// (0x0003de87) list_double_ai3_gene_pane_t3

0x0002,

0xfccd,	// (0x00047ec4) list_double_ai3_gene_pane_t_ParamLimits

0xfccd,	// (0x00047ec4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xda58,	// (0x00045c4f) aid_size_min_col_2

0xcfe8,	// (0x000451df) aid_size_min_msg_ParamLimits

0xcfe8,	// (0x000451df) aid_size_min_msg

0xcc01,	// (0x00044df8) fep_vkb_top_text_pane_g2_ParamLimits

0xcc01,	// (0x00044df8) fep_vkb_top_text_pane_g2

0x0001,

0xfb34,	// (0x00047d2b) fep_vkb_top_text_pane_g_ParamLimits

0xfb34,	// (0x00047d2b) fep_vkb_top_text_pane_g

0xec7b,	// (0x00046e72) main_hc_apps_shell_pane

0x5cad,	// (0x0003dea4) grid_hc_apps_pane_ParamLimits

0x5cad,	// (0x0003dea4) grid_hc_apps_pane

0x5cbc,	// (0x0003deb3) list_hc_apps_pane

0x5cc4,	// (0x0003debb) scroll_pane_cp37_ParamLimits

0x5cc4,	// (0x0003debb) scroll_pane_cp37

0xd059,	// (0x00045250) cell_hc_apps_pane_ParamLimits

0xd059,	// (0x00045250) cell_hc_apps_pane

0xd117,	// (0x0004530e) cell_hc_apps_pane_g1_ParamLimits

0xd117,	// (0x0004530e) cell_hc_apps_pane_g1

0x5daf,	// (0x0003dfa6) cell_hc_apps_pane_g2_ParamLimits

0x5daf,	// (0x0003dfa6) cell_hc_apps_pane_g2

0x5dcb,	// (0x0003dfc2) cell_hc_apps_pane_g3_ParamLimits

0x5dcb,	// (0x0003dfc2) cell_hc_apps_pane_g3

0x0002,

0xfcd4,	// (0x00047ecb) cell_hc_apps_pane_g_ParamLimits

0xfcd4,	// (0x00047ecb) cell_hc_apps_pane_g

0xd144,	// (0x0004533b) cell_hc_apps_pane_t1_ParamLimits

0xd144,	// (0x0004533b) cell_hc_apps_pane_t1

0xb309,	// (0x00043500) grid_highlight_pane_cp10_ParamLimits

0xb309,	// (0x00043500) grid_highlight_pane_cp10

0xd182,	// (0x00045379) list_single_hc_apps_pane_ParamLimits

0xd182,	// (0x00045379) list_single_hc_apps_pane

0xd1b2,	// (0x000453a9) list_single_hc_apps_pane_g1

0xaa69,	// (0x00042c60) list_single_hc_apps_pane_g2

0x0001,

0xfcdb,	// (0x00047ed2) list_single_hc_apps_pane_g

0xaa82,	// (0x00042c79) list_single_hc_apps_pane_g2_copy1

0xaa9e,	// (0x00042c95) list_single_hc_apps_pane_t1

0xb1df,	// (0x000433d6) bg_set_opt_pane_cp_ParamLimits

0x8a2d,	// (0x00040c24) setting_slider_pane_t1_ParamLimits

0x8a46,	// (0x00040c3d) setting_slider_pane_t2_ParamLimits

0x8a60,	// (0x00040c57) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00047755) setting_slider_pane_t_ParamLimits

0x8a78,	// (0x00040c6f) slider_set_pane_ParamLimits

0x00c3,	// (0x000382ba) control_pane_g5_ParamLimits

0x00c3,	// (0x000382ba) control_pane_g5

0xc4dd,	// (0x000446d4) slider_set_pane_g1_ParamLimits

0x0ad7,	// (0x00038cce) slider_set_pane_g2_ParamLimits

0xa750,	// (0x00042947) slider_set_pane_g3_ParamLimits

0xa764,	// (0x0004295b) slider_set_pane_g4_ParamLimits

0xa77c,	// (0x00042973) slider_set_pane_g5_ParamLimits

0xa750,	// (0x00042947) slider_set_pane_g6_ParamLimits

0xa792,	// (0x00042989) slider_set_pane_g7_ParamLimits

0xf949,	// (0x00047b40) slider_set_pane_g_ParamLimits

0xf21d,	// (0x00047414) navi_icon_text_pane_ParamLimits

0xa475,	// (0x0004266c) aid_fill_nsta_2_ParamLimits

0xa4ac,	// (0x000426a3) aid_touch_tab_arrow_left_ParamLimits

0xa4c2,	// (0x000426b9) aid_touch_tab_arrow_right_ParamLimits

0xa55d,	// (0x00042754) clock_nsta_pane_ParamLimits

0x32b4,	// (0x0003b4ab) navi_icon_pane_g1_ParamLimits

0x32c0,	// (0x0003b4b7) navi_text_pane_t1_ParamLimits

0x45c1,	// (0x0003c7b8) navi_icon_text_pane_g1_ParamLimits

0x45cd,	// (0x0003c7c4) navi_icon_text_pane_t1_ParamLimits

0xd1b2,	// (0x000453a9) list_single_hc_apps_pane_g1_ParamLimits

0xaa69,	// (0x00042c60) list_single_hc_apps_pane_g2_ParamLimits

0xfcdb,	// (0x00047ed2) list_single_hc_apps_pane_g_ParamLimits

0xaa82,	// (0x00042c79) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xaa9e,	// (0x00042c95) list_single_hc_apps_pane_t1_ParamLimits

0x885e,	// (0x00040a55) popup_toolbar2_fixed_window_ParamLimits

0x885e,	// (0x00040a55) popup_toolbar2_fixed_window

0xa385,	// (0x0004257c) popup_toolbar2_float_window

0xb16f,	// (0x00043366) bg_popup_sub_pane_cp27

0x5ea9,	// (0x0003e0a0) grid_toolbar2_float_pane

0xb16f,	// (0x00043366) bg_popup_sub_pane_cp26

0x5ea9,	// (0x0003e0a0) grid_toolbar2_fixed_pane

0xd1cb,	// (0x000453c2) cell_toolbar2_fixed_pane_ParamLimits

0xd1cb,	// (0x000453c2) cell_toolbar2_fixed_pane

0xd1e5,	// (0x000453dc) cell_toolbar2_fixed_pane_g1

0x0586,	// (0x0003877d) toolbar2_fixed_button_pane

0x2442,	// (0x0003a639) toolbar2_fixed_button_pane_g1

0x2452,	// (0x0003a649) toolbar2_fixed_button_pane_g2

0x244a,	// (0x0003a641) toolbar2_fixed_button_pane_g3

0x2462,	// (0x0003a659) toolbar2_fixed_button_pane_g4

0x245a,	// (0x0003a651) toolbar2_fixed_button_pane_g5

0x246a,	// (0x0003a661) toolbar2_fixed_button_pane_g6

0x2472,	// (0x0003a669) toolbar2_fixed_button_pane_g7

0x2482,	// (0x0003a679) toolbar2_fixed_button_pane_g8

0x247a,	// (0x0003a671) toolbar2_fixed_button_pane_g9

0x0008,

0xf84b,	// (0x00047a42) toolbar2_fixed_button_pane_g

0x5eca,	// (0x0003e0c1) cell_toolbar2_float_pane_ParamLimits

0x5eca,	// (0x0003e0c1) cell_toolbar2_float_pane

0x5edb,	// (0x0003e0d2) cell_toolbar2_float_pane_g1

0x0586,	// (0x0003877d) toolbar2_fixed_button_pane_cp

0xcae9,	// (0x00044ce0) fep_vkb_accented_list_pane_ParamLimits

0xcae9,	// (0x00044ce0) fep_vkb_accented_list_pane

0x0fea,	// (0x000391e1) bg_popup_fep_shadow_pane_g9

0xf36f,	// (0x00047566) bg_popup_fep_shadow_pane_cp3

0xb697,	// (0x0004388e) list_accented_list_pane

0x5ee4,	// (0x0003e0db) list_single_accented_list_pane_ParamLimits

0x5ee4,	// (0x0003e0db) list_single_accented_list_pane

0xf36f,	// (0x00047566) list_highlight_pane_cp10

0x5ef5,	// (0x0003e0ec) list_single_accented_list_pane_t1

0xa2af,	// (0x000424a6) popup_slider_window_ParamLimits

0xa2af,	// (0x000424a6) popup_slider_window

0x5b35,	// (0x0003dd2c) aid_indentation_list_msg

0xdafb,	// (0x00045cf2) bg_popup_window_pane_cp19

0x601b,	// (0x0003e212) popup_slider_window_g1

0x6037,	// (0x0003e22e) popup_slider_window_g2

0x6053,	// (0x0003e24a) popup_slider_window_g3

0x0005,

0xfce0,	// (0x00047ed7) popup_slider_window_g

0x60b9,	// (0x0003e2b0) popup_slider_window_t1

0x612d,	// (0x0003e324) small_volume_slider_vertical_pane

0x4a1c,	// (0x0003cc13) small_volume_slider_vertical_pane_g1

0x4a1c,	// (0x0003cc13) small_volume_slider_vertical_pane_g2

0x6149,	// (0x0003e340) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf2,	// (0x00047ee9) small_volume_slider_vertical_pane_g

0x87ac,	// (0x000409a3) area_side_right_pane_ParamLimits

0x87ac,	// (0x000409a3) area_side_right_pane

0xaacc,	// (0x00042cc3) aid_size_side_button_ParamLimits

0xaacc,	// (0x00042cc3) aid_size_side_button

0xaae5,	// (0x00042cdc) grid_sctrl_middle_pane_ParamLimits

0xaae5,	// (0x00042cdc) grid_sctrl_middle_pane

0x1325,	// (0x0003951c) sctrl_sk_bottom_pane

0x1336,	// (0x0003952d) sctrl_sk_top_pane

0x1348,	// (0x0003953f) aid_touch_sctrl_top

0x1355,	// (0x0003954c) bg_sctrl_sk_pane_ParamLimits

0x1355,	// (0x0003954c) bg_sctrl_sk_pane

0x1363,	// (0x0003955a) sctrl_sk_top_pane_g1

0x1370,	// (0x00039567) sctrl_sk_top_pane_t1

0x1348,	// (0x0003953f) aid_touch_sctrl_bottom

0x1355,	// (0x0003954c) bg_sctrl_sk_pane_cp_ParamLimits

0x1355,	// (0x0003954c) bg_sctrl_sk_pane_cp

0x138b,	// (0x00039582) sctrl_sk_bottom_pane_g1

0x1370,	// (0x00039567) sctrl_sk_bottom_pane_t1

0xaaff,	// (0x00042cf6) cell_sctrl_middle_pane_ParamLimits

0xaaff,	// (0x00042cf6) cell_sctrl_middle_pane

0xab10,	// (0x00042d07) aid_touch_sctrl_middle_ParamLimits

0xab10,	// (0x00042d07) aid_touch_sctrl_middle

0xab1d,	// (0x00042d14) bg_sctrl_middle_pane_ParamLimits

0xab1d,	// (0x00042d14) bg_sctrl_middle_pane

0x19f8,	// (0x00039bef) cell_sctrl_middle_pane_g1_ParamLimits

0x19f8,	// (0x00039bef) cell_sctrl_middle_pane_g1

0xab2b,	// (0x00042d22) cell_sctrl_middle_pane_g2_ParamLimits

0xab2b,	// (0x00042d22) cell_sctrl_middle_pane_g2

0x0001,

0xfcfe,	// (0x00047ef5) cell_sctrl_middle_pane_g_ParamLimits

0xfcfe,	// (0x00047ef5) cell_sctrl_middle_pane_g

0x2442,	// (0x0003a639) bg_sctrl_middle_pane_g1

0x244a,	// (0x0003a641) bg_sctrl_middle_pane_g2

0x2452,	// (0x0003a649) bg_sctrl_middle_pane_g3

0x245a,	// (0x0003a651) bg_sctrl_middle_pane_g4

0x2462,	// (0x0003a659) bg_sctrl_middle_pane_g5

0x246a,	// (0x0003a661) bg_sctrl_middle_pane_g6

0x2472,	// (0x0003a669) bg_sctrl_middle_pane_g7

0x247a,	// (0x0003a671) bg_sctrl_middle_pane_g8

0x0007,

0xfd03,	// (0x00047efa) bg_sctrl_middle_pane_g

0x2482,	// (0x0003a679) bg_sctrl_middle_pane_g8_copy1

0x2442,	// (0x0003a639) bg_sctrl_sk_pane_g1

0x2452,	// (0x0003a649) bg_sctrl_sk_pane_g2

0x244a,	// (0x0003a641) bg_sctrl_sk_pane_g3

0x0008,

0xf84b,	// (0x00047a42) bg_sctrl_sk_pane_g

0xb4d3,	// (0x000436ca) aid_size_touch_scroll_bar

0x2462,	// (0x0003a659) bg_sctrl_sk_pane_g4

0x245a,	// (0x0003a651) bg_sctrl_sk_pane_g5

0x246a,	// (0x0003a661) bg_sctrl_sk_pane_g6

0x2472,	// (0x0003a669) bg_sctrl_sk_pane_g7

0x2482,	// (0x0003a679) bg_sctrl_sk_pane_g8

0x247a,	// (0x0003a671) bg_sctrl_sk_pane_g9

0x026d,	// (0x00038464) popup_fep_china_hwr2_fs_candidate_window

0x9d4f,	// (0x00041f46) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9d4f,	// (0x00041f46) popup_fep_china_hwr2_fs_control_window

0x100a,	// (0x00039201) sctrl_sk_top_pane_g2

0x0001,

0xfcf9,	// (0x00047ef0) sctrl_sk_top_pane_g

0xdbb3,	// (0x00045daa) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdbb3,	// (0x00045daa) aid_fep_china_hwr2_fs_cell

0xdbc7,	// (0x00045dbe) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdbc7,	// (0x00045dbe) bg_popup_fep_shadow_pane_cp4

0xdbde,	// (0x00045dd5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdbde,	// (0x00045dd5) bg_popup_fep_shadow_pane_cp5

0xdbf0,	// (0x00045de7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdbf0,	// (0x00045de7) popup_fep_china_hwr2_fs_control_bar_grid

0xdc04,	// (0x00045dfb) popup_fep_china_hwr2_fs_control_funtion_grid

0x61c6,	// (0x0003e3bd) aid_fep_china_hwr2_fs_candi_cell

0xb16f,	// (0x00043366) bg_popup_fep_shadow_pane_cp6

0x61d0,	// (0x0003e3c7) popup_fep_china_hwr2_fs_candidate_grid

0xdc0c,	// (0x00045e03) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdc0c,	// (0x00045e03) cell_fep_china_hwr2_fs_funtion_grid

0x4a1c,	// (0x0003cc13) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x61f2,	// (0x0003e3e9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x61f2,	// (0x0003e3e9) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6200,	// (0x0003e3f7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6200,	// (0x0003e3f7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd14,	// (0x00047f0b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd14,	// (0x00047f0b) cell_fep_china_hwr2_fs_funtion_grid_g

0xdc24,	// (0x00045e1b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdc24,	// (0x00045e1b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdc39,	// (0x00045e30) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdc39,	// (0x00045e30) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd19,	// (0x00047f10) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd19,	// (0x00047f10) cell_fep_china_hwr2_fs_funtion_grid_t

0x6247,	// (0x0003e43e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x624f,	// (0x0003e446) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6257,	// (0x0003e44e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1e,	// (0x00047f15) popup_fep_china_hwr2_fs_control_bar_grid_g

0x625f,	// (0x0003e456) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x625f,	// (0x0003e456) cell_fep_china_hwr2_fs_candidate_grid

0x6278,	// (0x0003e46f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6280,	// (0x0003e477) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4a1c,	// (0x0003cc13) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4a1c,	// (0x0003cc13) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb39,	// (0x00047d30) cell_fep_china_hwr2_fs_candidate_grid_g

0x6288,	// (0x0003e47f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x203b,	// (0x0003a232) clock_nsta_pane_cp_24_ParamLimits

0x203b,	// (0x0003a232) clock_nsta_pane_cp_24

0x20b9,	// (0x0003a2b0) indicator_nsta_pane_cp_24_ParamLimits

0x20b9,	// (0x0003a2b0) indicator_nsta_pane_cp_24

0x3130,	// (0x0003b327) heading_pane_g1

0x0001,

0xf8b0,	// (0x00047aa7) heading_pane_g

0x3b66,	// (0x0003bd5d) grid_sct_catagory_button_pane

0x3b96,	// (0x0003bd8d) scroll_pane_cp5_ParamLimits

0x460f,	// (0x0003c806) button_value_adjust_pane_cp5_ParamLimits

0x460f,	// (0x0003c806) button_value_adjust_pane_cp5

0x46ee,	// (0x0003c8e5) form2_midp_time_pane_ParamLimits

0x6296,	// (0x0003e48d) cell_sct_catagory_button_pane_ParamLimits

0x6296,	// (0x0003e48d) cell_sct_catagory_button_pane

0x49e1,	// (0x0003cbd8) bg_button_pane_cp01_ParamLimits

0x49e1,	// (0x0003cbd8) bg_button_pane_cp01

0x4a1c,	// (0x0003cc13) cell_sct_catagory_button_pane_g1

0xa328,	// (0x0004251f) popup_tb_extension_window

0xdc55,	// (0x00045e4c) aid_size_cell_ext_ParamLimits

0xdc55,	// (0x00045e4c) aid_size_cell_ext

0xb485,	// (0x0004367c) bg_tb_trans_pane_cp1_ParamLimits

0xb485,	// (0x0004367c) bg_tb_trans_pane_cp1

0xdc7b,	// (0x00045e72) grid_tb_ext_pane_ParamLimits

0xdc7b,	// (0x00045e72) grid_tb_ext_pane

0xdcba,	// (0x00045eb1) cell_tb_ext_pane_ParamLimits

0xdcba,	// (0x00045eb1) cell_tb_ext_pane

0xdce2,	// (0x00045ed9) cell_tb_ext_pane_g1_ParamLimits

0xdce2,	// (0x00045ed9) cell_tb_ext_pane_g1

0x632c,	// (0x0003e523) cell_tb_ext_pane_t1

0xb309,	// (0x00043500) list_highlight_pane_cp11_ParamLimits

0xb309,	// (0x00043500) list_highlight_pane_cp11

0x8873,	// (0x00040a6a) popup_uni_indicator_window_ParamLimits

0x8873,	// (0x00040a6a) popup_uni_indicator_window

0xb591,	// (0x00043788) bg_popup_sub_pane_cp14

0xdcff,	// (0x00045ef6) list_uniindi_pane

0xdd0b,	// (0x00045f02) uniindi_top_pane

0xb309,	// (0x00043500) bg_uniindi_top_pane

0xdd2a,	// (0x00045f21) uniindi_top_pane_g1

0xdd40,	// (0x00045f37) uniindi_top_pane_g2

0x0003,

0xfd25,	// (0x00047f1c) uniindi_top_pane_g

0xdd5d,	// (0x00045f54) uniindi_top_pane_t1

0x63dd,	// (0x0003e5d4) list_single_uniindi_pane_ParamLimits

0x63dd,	// (0x0003e5d4) list_single_uniindi_pane

0x4a1c,	// (0x0003cc13) bg_uniindi_top_pane_g1

0x63ef,	// (0x0003e5e6) list_single_uniindi_pane_g1

0x6402,	// (0x0003e5f9) list_single_uniindi_pane_t1

0xec7b,	// (0x00046e72) control_bg_pane

0x6427,	// (0x0003e61e) bg_sctrl_sk_pane_cp1

0x6430,	// (0x0003e627) bg_sctrl_sk_pane_cp2

0x6439,	// (0x0003e630) control_bg_pane_g1

0x6442,	// (0x0003e639) control_bg_pane_g2

0x0001,

0xfd2e,	// (0x00047f25) control_bg_pane_g

0x4465,	// (0x0003c65c) cell_indicator_nsta_pane_g1_ParamLimits

0xc8b0,	// (0x00044aa7) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9d,	// (0x00047c94) cell_indicator_nsta_pane_g_ParamLimits

0xd83b,	// (0x00045a32) form2_midp_time_pane_t1_ParamLimits

0x0da5,	// (0x00038f9c) main_idle_act4_pane_ParamLimits

0x0da5,	// (0x00038f9c) main_idle_act4_pane

0xa328,	// (0x0004251f) popup_tb_extension_window_ParamLimits

0xdca0,	// (0x00045e97) tb_ext_find_pane_ParamLimits

0xdca0,	// (0x00045e97) tb_ext_find_pane

0x644b,	// (0x0003e642) ai_gene_pane_1_cp1

0xf3f0,	// (0x000475e7) ai_gene_pane_2_cp1

0xdd87,	// (0x00045f7e) list_single_idle_plugin_calendar_pane

0x645c,	// (0x0003e653) list_single_idle_plugin_notification_pane

0x6465,	// (0x0003e65c) list_single_idle_plugin_player_pane

0xdd90,	// (0x00045f87) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd90,	// (0x00045f87) list_single_idle_plugin_shortcut_pane

0xddb8,	// (0x00045faf) main_idle_act4_pane_t1

0xddcf,	// (0x00045fc6) main_idle_act4_pane_t2

0x0001,

0xfd33,	// (0x00047f2a) main_idle_act4_pane_t

0xdde6,	// (0x00045fdd) middle_sk_idle_act4_pane_ParamLimits

0xdde6,	// (0x00045fdd) middle_sk_idle_act4_pane

0xde02,	// (0x00045ff9) popup_clock_digital_analogue_window_cp2

0xde2e,	// (0x00046025) shortcut_wheel_idle_act4_pane_ParamLimits

0xde2e,	// (0x00046025) shortcut_wheel_idle_act4_pane

0x4a1c,	// (0x0003cc13) shortcut_wheel_idle_act4_pane_g1

0x4a1c,	// (0x0003cc13) shortcut_wheel_idle_act4_pane_g2

0x4a1c,	// (0x0003cc13) shortcut_wheel_idle_act4_pane_g3

0x4a1c,	// (0x0003cc13) shortcut_wheel_idle_act4_pane_g4

0x4a1c,	// (0x0003cc13) shortcut_wheel_idle_act4_pane_g5

0x64f8,	// (0x0003e6ef) shortcut_wheel_idle_act4_pane_g6

0x6500,	// (0x0003e6f7) shortcut_wheel_idle_act4_pane_g7

0x6508,	// (0x0003e6ff) shortcut_wheel_idle_act4_pane_g8

0x6510,	// (0x0003e707) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd38,	// (0x00047f2f) shortcut_wheel_idle_act4_pane_g

0xd2a2,	// (0x00045499) middle_sk_idle_act4_pane_g1_ParamLimits

0xd2a2,	// (0x00045499) middle_sk_idle_act4_pane_g1

0xdeab,	// (0x000460a2) middle_sk_idle_act4_pane_g2_ParamLimits

0xdeab,	// (0x000460a2) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5b,	// (0x00047f52) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5b,	// (0x00047f52) middle_sk_idle_act4_pane_g

0xdec3,	// (0x000460ba) middle_sk_idle_act4_pane_t1_ParamLimits

0xdec3,	// (0x000460ba) middle_sk_idle_act4_pane_t1

0xdef2,	// (0x000460e9) grid_ai_shortcut_pane_ParamLimits

0xdef2,	// (0x000460e9) grid_ai_shortcut_pane

0xdf0f,	// (0x00046106) list_highlight_pane_cp16_ParamLimits

0xdf0f,	// (0x00046106) list_highlight_pane_cp16

0xdf1c,	// (0x00046113) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdf1c,	// (0x00046113) list_single_idle_plugin_shortcut_pane_g1

0xdf28,	// (0x0004611f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdf28,	// (0x0004611f) list_single_idle_plugin_shortcut_pane_g2

0xdf44,	// (0x0004613b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdf44,	// (0x0004613b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd60,	// (0x00047f57) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd60,	// (0x00047f57) list_single_idle_plugin_shortcut_pane_g

0xdf59,	// (0x00046150) cell_ai_shortcut_pane_ParamLimits

0xdf59,	// (0x00046150) cell_ai_shortcut_pane

0xdf6f,	// (0x00046166) cell_ai_shortcut_pane_g1_ParamLimits

0xdf6f,	// (0x00046166) cell_ai_shortcut_pane_g1

0x644b,	// (0x0003e642) ai_gene_pane_1_cp2

0x6640,	// (0x0003e837) ai_gene_pane_2_cp2

0x6648,	// (0x0003e83f) list_highlight_pane_cp15

0xdf91,	// (0x00046188) list_single_idle_plugin_calendar_pane_g1

0x6648,	// (0x0003e83f) list_highlight_pane_cp17

0x6659,	// (0x0003e850) list_single_idle_plugin_calendar_pane_g1_copy1

0x6661,	// (0x0003e858) list_single_idle_plugin_player_pane_g1

0x3dbf,	// (0x0003bfb6) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd67,	// (0x00047f5e) list_single_idle_plugin_player_pane_g

0x6669,	// (0x0003e860) list_single_idle_plugin_player_pane_t1

0x6677,	// (0x0003e86e) list_single_idle_plugin_player_pane_t2

0x6685,	// (0x0003e87c) list_single_idle_plugin_player_pane_t3

0x6693,	// (0x0003e88a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6c,	// (0x00047f63) list_single_idle_plugin_player_pane_t

0x66a1,	// (0x0003e898) wait_bar_pane_cp15

0x66a9,	// (0x0003e8a0) grid_ai_notification_pane

0x3dbf,	// (0x0003bfb6) list_single_idle_plugin_notification_pane_g1

0xdf99,	// (0x00046190) cell_ai_notification_pane_ParamLimits

0xdf99,	// (0x00046190) cell_ai_notification_pane

0x66bf,	// (0x0003e8b6) cell_ai_notification_pane_g1

0x66c7,	// (0x0003e8be) cell_ai_notification_pane_t1

0xdfa6,	// (0x0004619d) tb_ext_find_button_pane

0xdfae,	// (0x000461a5) tb_ext_find_pane_g1

0xdfb6,	// (0x000461ad) tb_ext_find_pane_t1

0xb9c4,	// (0x00043bbb) tb_ext_find_button_pane_g1

0xdfc4,	// (0x000461bb) tb_ext_find_button_pane_g2

0x0001,

0xfd75,	// (0x00047f6c) tb_ext_find_button_pane_g

0xddb8,	// (0x00045faf) main_idle_act4_pane_t1_ParamLimits

0xddcf,	// (0x00045fc6) main_idle_act4_pane_t2_ParamLimits

0xfd33,	// (0x00047f2a) main_idle_act4_pane_t_ParamLimits

0xde02,	// (0x00045ff9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xde1a,	// (0x00046011) sat_plugin_idle_act4_pane_ParamLimits

0xde1a,	// (0x00046011) sat_plugin_idle_act4_pane

0xdfcd,	// (0x000461c4) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdfcd,	// (0x000461c4) sat_plugin_idle_act4_pane_t1

0xdfe5,	// (0x000461dc) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfe5,	// (0x000461dc) sat_plugin_idle_act4_pane_t2

0xdffd,	// (0x000461f4) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdffd,	// (0x000461f4) sat_plugin_idle_act4_pane_t3

0xe015,	// (0x0004620c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe015,	// (0x0004620c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7a,	// (0x00047f71) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7a,	// (0x00047f71) sat_plugin_idle_act4_pane_t

0x87ee,	// (0x000409e5) popup_battery_window_ParamLimits

0x87ee,	// (0x000409e5) popup_battery_window

0xb309,	// (0x00043500) bg_popup_sub_pane_cp25_ParamLimits

0xb309,	// (0x00043500) bg_popup_sub_pane_cp25

0x6748,	// (0x0003e93f) popup_battery_window_g1_ParamLimits

0x6748,	// (0x0003e93f) popup_battery_window_g1

0x6754,	// (0x0003e94b) popup_battery_window_t1_ParamLimits

0x6754,	// (0x0003e94b) popup_battery_window_t1

0x6766,	// (0x0003e95d) popup_battery_window_t2_ParamLimits

0x6766,	// (0x0003e95d) popup_battery_window_t2

0x0001,

0xfd83,	// (0x00047f7a) popup_battery_window_t_ParamLimits

0xfd83,	// (0x00047f7a) popup_battery_window_t

0x99a5,	// (0x00041b9c) midp_canvas_pane_ParamLimits

0x9a17,	// (0x00041c0e) midp_keypad_pane_ParamLimits

0x9a17,	// (0x00041c0e) midp_keypad_pane

0x1f1b,	// (0x0003a112) main_midp_pane_ParamLimits

0xc8bd,	// (0x00044ab4) signal_pane_g2_cp_ParamLimits

0xe02d,	// (0x00046224) aid_size_cell_midp_keypad_ParamLimits

0xe02d,	// (0x00046224) aid_size_cell_midp_keypad

0xe04b,	// (0x00046242) midp_keyp_game_grid_pane_ParamLimits

0xe04b,	// (0x00046242) midp_keyp_game_grid_pane

0xe072,	// (0x00046269) midp_keyp_rocker_pane_ParamLimits

0xe072,	// (0x00046269) midp_keyp_rocker_pane

0xe0c3,	// (0x000462ba) midp_keyp_sk_left_pane_ParamLimits

0xe0c3,	// (0x000462ba) midp_keyp_sk_left_pane

0xe117,	// (0x0004630e) midp_keyp_sk_right_pane_ParamLimits

0xe117,	// (0x0004630e) midp_keyp_sk_right_pane

0xb16f,	// (0x00043366) bg_button_pane_cp03

0xe16b,	// (0x00046362) midp_keyp_sk_left_pane_g1

0xb16f,	// (0x00043366) bg_button_pane_cp04

0xe16b,	// (0x00046362) midp_keyp_sk_right_pane_g1

0x4a1c,	// (0x0003cc13) midp_keyp_rocker_pane_g1

0xe174,	// (0x0004636b) keyp_game_cell_pane_ParamLimits

0xe174,	// (0x0004636b) keyp_game_cell_pane

0xb16f,	// (0x00043366) bg_button_pane_cp02

0xe198,	// (0x0004638f) keyp_game_cell_pane_g1

0x880e,	// (0x00040a05) popup_fep_vkb2_window_ParamLimits

0x880e,	// (0x00040a05) popup_fep_vkb2_window

0xab37,	// (0x00042d2e) aid_size_cell_vkb2_ParamLimits

0xab37,	// (0x00042d2e) aid_size_cell_vkb2

0xab75,	// (0x00042d6c) popup_fep_vkb2_window_g1_ParamLimits

0xab75,	// (0x00042d6c) popup_fep_vkb2_window_g1

0xabc5,	// (0x00042dbc) vkb2_area_bottom_pane_ParamLimits

0xabc5,	// (0x00042dbc) vkb2_area_bottom_pane

0xac19,	// (0x00042e10) vkb2_area_keypad_pane_ParamLimits

0xac19,	// (0x00042e10) vkb2_area_keypad_pane

0xac61,	// (0x00042e58) vkb2_area_top_pane_ParamLimits

0xac61,	// (0x00042e58) vkb2_area_top_pane

0xace7,	// (0x00042ede) vkb2_top_entry_pane_ParamLimits

0xace7,	// (0x00042ede) vkb2_top_entry_pane

0xad14,	// (0x00042f0b) vkb2_top_grid_left_pane_ParamLimits

0xad14,	// (0x00042f0b) vkb2_top_grid_left_pane

0xad34,	// (0x00042f2b) vkb2_top_grid_right_pane_ParamLimits

0xad34,	// (0x00042f2b) vkb2_top_grid_right_pane

0x15f7,	// (0x000397ee) vkb2_cell_keypad_pane_ParamLimits

0x15f7,	// (0x000397ee) vkb2_cell_keypad_pane

0xad7a,	// (0x00042f71) vkb2_area_bottom_grid_pane_ParamLimits

0xad7a,	// (0x00042f71) vkb2_area_bottom_grid_pane

0xada4,	// (0x00042f9b) vkb2_area_bottom_pane_g1_ParamLimits

0xada4,	// (0x00042f9b) vkb2_area_bottom_pane_g1

0xadca,	// (0x00042fc1) vkb2_area_bottom_pane_g2_ParamLimits

0xadca,	// (0x00042fc1) vkb2_area_bottom_pane_g2

0xadfb,	// (0x00042ff2) vkb2_area_bottom_pane_g3_ParamLimits

0xadfb,	// (0x00042ff2) vkb2_area_bottom_pane_g3

0x0002,

0xfd88,	// (0x00047f7f) vkb2_area_bottom_pane_g_ParamLimits

0xfd88,	// (0x00047f7f) vkb2_area_bottom_pane_g

0x17a1,	// (0x00039998) vkb2_top_cell_left_pane_ParamLimits

0x17a1,	// (0x00039998) vkb2_top_cell_left_pane

0xe1a1,	// (0x00046398) vkb2_top_entry_pane_g1_ParamLimits

0xe1a1,	// (0x00046398) vkb2_top_entry_pane_g1

0xe1af,	// (0x000463a6) vkb2_top_entry_pane_t1_ParamLimits

0xe1af,	// (0x000463a6) vkb2_top_entry_pane_t1

0x6917,	// (0x0003eb0e) vkb2_top_entry_pane_t2_ParamLimits

0x6917,	// (0x0003eb0e) vkb2_top_entry_pane_t2

0x6949,	// (0x0003eb40) vkb2_top_entry_pane_t3_ParamLimits

0x6949,	// (0x0003eb40) vkb2_top_entry_pane_t3

0x0002,

0xfd8f,	// (0x00047f86) vkb2_top_entry_pane_t_ParamLimits

0xfd8f,	// (0x00047f86) vkb2_top_entry_pane_t

0xae65,	// (0x0004305c) vkb2_top_grid_right_pane_g1_ParamLimits

0xae65,	// (0x0004305c) vkb2_top_grid_right_pane_g1

0x1804,	// (0x000399fb) vkb2_top_grid_right_pane_g2_ParamLimits

0x1804,	// (0x000399fb) vkb2_top_grid_right_pane_g2

0x181c,	// (0x00039a13) vkb2_top_grid_right_pane_g3_ParamLimits

0x181c,	// (0x00039a13) vkb2_top_grid_right_pane_g3

0xae7b,	// (0x00043072) vkb2_top_grid_right_pane_g4_ParamLimits

0xae7b,	// (0x00043072) vkb2_top_grid_right_pane_g4

0x0003,

0xfd96,	// (0x00047f8d) vkb2_top_grid_right_pane_g_ParamLimits

0xfd96,	// (0x00047f8d) vkb2_top_grid_right_pane_g

0x184a,	// (0x00039a41) vkb2_top_cell_left_pane_g1

0x1861,	// (0x00039a58) vkb2_cell_keypad_pane_g1_ParamLimits

0x1861,	// (0x00039a58) vkb2_cell_keypad_pane_g1

0x696d,	// (0x0003eb64) vkb2_cell_keypad_pane_t1_ParamLimits

0x696d,	// (0x0003eb64) vkb2_cell_keypad_pane_t1

0x186f,	// (0x00039a66) vkb2_cell_bottom_grid_pane_ParamLimits

0x186f,	// (0x00039a66) vkb2_cell_bottom_grid_pane

0x18a8,	// (0x00039a9f) vkb2_cell_bottom_grid_pane_g1

0xde4f,	// (0x00046046) aid_call2_pane_cp02

0xde57,	// (0x0004604e) aid_call_pane_cp02

0xde5f,	// (0x00046056) clock_digital_number_pane_cp10

0xde67,	// (0x0004605e) clock_digital_number_pane_cp11

0xde6f,	// (0x00046066) clock_digital_number_pane_cp12

0xde77,	// (0x0004606e) clock_digital_number_pane_cp13

0xde7f,	// (0x00046076) clock_digital_separator_pane_cp10

0xb9c4,	// (0x00043bbb) popup_clock_digital_analogue_window_cp2_g1

0xb9c4,	// (0x00043bbb) popup_clock_digital_analogue_window_cp2_g2

0xde87,	// (0x0004607e) popup_clock_digital_analogue_window_cp2_g3

0xb9c4,	// (0x00043bbb) popup_clock_digital_analogue_window_cp2_g4

0xde87,	// (0x0004607e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4b,	// (0x00047f42) popup_clock_digital_analogue_window_cp2_g

0xde8f,	// (0x00046086) popup_clock_digital_analogue_window_cp2_t1

0xde9d,	// (0x00046094) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd56,	// (0x00047f4d) popup_clock_digital_analogue_window_cp2_t

0x4a1c,	// (0x0003cc13) clock_digital_number_pane_cp10_g1

0x4a1c,	// (0x0003cc13) clock_digital_number_pane_cp10_g2

0x0001,

0xfb39,	// (0x00047d30) clock_digital_number_pane_cp10_g

0x4a1c,	// (0x0003cc13) clock_digital_separator_pane_cp10_g1

0x4a1c,	// (0x0003cc13) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb39,	// (0x00047d30) clock_digital_separator_pane_cp10_g

0xdd4c,	// (0x00045f43) uniindi_top_pane_g3

0x63a6,	// (0x0003e59d) uniindi_top_pane_g4

0x1682,	// (0x00039879) vkb2_row_keypad_pane_ParamLimits

0x1682,	// (0x00039879) vkb2_row_keypad_pane

0x18c4,	// (0x00039abb) vkb2_cell_t_keypad_pane_ParamLimits

0x18c4,	// (0x00039abb) vkb2_cell_t_keypad_pane

0x18d4,	// (0x00039acb) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x18d4,	// (0x00039acb) vkb2_cell_t_keypad_pane_cp08

0x18e7,	// (0x00039ade) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x18e7,	// (0x00039ade) vkb2_cell_t_keypad_pane_cp09

0x18fb,	// (0x00039af2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x18fb,	// (0x00039af2) vkb2_cell_t_keypad_pane_cp01

0x190c,	// (0x00039b03) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x190c,	// (0x00039b03) vkb2_cell_t_keypad_pane_cp02

0x191d,	// (0x00039b14) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x191d,	// (0x00039b14) vkb2_cell_t_keypad_pane_cp03

0x192e,	// (0x00039b25) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x192e,	// (0x00039b25) vkb2_cell_t_keypad_pane_cp04

0x193f,	// (0x00039b36) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x193f,	// (0x00039b36) vkb2_cell_t_keypad_pane_cp05

0x1950,	// (0x00039b47) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1950,	// (0x00039b47) vkb2_cell_t_keypad_pane_cp06

0x1961,	// (0x00039b58) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1961,	// (0x00039b58) vkb2_cell_t_keypad_pane_cp07

0x1972,	// (0x00039b69) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1972,	// (0x00039b69) vkb2_cell_t_keypad_pane_cp10

0x100a,	// (0x00039201) vkb2_cell_t_keypad_pane_g1

0x6984,	// (0x0003eb7b) vkb2_cell_t_keypad_pane_t1

0xec7b,	// (0x00046e72) popup_grid_graphic2_window

0xe1e8,	// (0x000463df) aid_size_cell_graphic2_ParamLimits

0xe1e8,	// (0x000463df) aid_size_cell_graphic2

0xe226,	// (0x0004641d) bg_popup_window_pane_cp21_ParamLimits

0xe226,	// (0x0004641d) bg_popup_window_pane_cp21

0xe234,	// (0x0004642b) graphic2_pages_pane_ParamLimits

0xe234,	// (0x0004642b) graphic2_pages_pane

0xe28a,	// (0x00046481) grid_graphic2_control_pane_ParamLimits

0xe28a,	// (0x00046481) grid_graphic2_control_pane

0xe2d2,	// (0x000464c9) grid_graphic2_pane_ParamLimits

0xe2d2,	// (0x000464c9) grid_graphic2_pane

0xe359,	// (0x00046550) cell_graphic2_pane

0xec7b,	// (0x00046e72) main_comp_mode_pane

0x5be7,	// (0x0003ddde) list_ai3_gene_pane_ParamLimits

0xdafb,	// (0x00045cf2) bg_popup_window_pane_cp19_ParamLimits

0x5fbf,	// (0x0003e1b6) bg_touch_area_indi_pane_ParamLimits

0x5fbf,	// (0x0003e1b6) bg_touch_area_indi_pane

0x5fd5,	// (0x0003e1cc) bg_touch_area_indi_pane_cp01_ParamLimits

0x5fd5,	// (0x0003e1cc) bg_touch_area_indi_pane_cp01

0x5feb,	// (0x0003e1e2) bg_touch_area_indi_pane_cp02_ParamLimits

0x5feb,	// (0x0003e1e2) bg_touch_area_indi_pane_cp02

0x6001,	// (0x0003e1f8) bg_touch_area_indi_pane_cp03_ParamLimits

0x6001,	// (0x0003e1f8) bg_touch_area_indi_pane_cp03

0x601b,	// (0x0003e212) popup_slider_window_g1_ParamLimits

0x6037,	// (0x0003e22e) popup_slider_window_g2_ParamLimits

0x6053,	// (0x0003e24a) popup_slider_window_g3_ParamLimits

0xfce0,	// (0x00047ed7) popup_slider_window_g_ParamLimits

0x60b9,	// (0x0003e2b0) popup_slider_window_t1_ParamLimits

0x612d,	// (0x0003e324) small_volume_slider_vertical_pane_ParamLimits

0xe359,	// (0x00046550) cell_graphic2_pane_ParamLimits

0xe3b4,	// (0x000465ab) bg_button_pane_cp10_ParamLimits

0xe3b4,	// (0x000465ab) bg_button_pane_cp10

0xe3c7,	// (0x000465be) bg_button_pane_cp11_ParamLimits

0xe3c7,	// (0x000465be) bg_button_pane_cp11

0xe3da,	// (0x000465d1) graphic2_pages_pane_g1_ParamLimits

0xe3da,	// (0x000465d1) graphic2_pages_pane_g1

0xe3f5,	// (0x000465ec) graphic2_pages_pane_g2_ParamLimits

0xe3f5,	// (0x000465ec) graphic2_pages_pane_g2

0x0001,

0xfda4,	// (0x00047f9b) graphic2_pages_pane_g_ParamLimits

0xfda4,	// (0x00047f9b) graphic2_pages_pane_g

0xe40d,	// (0x00046604) graphic2_pages_pane_t1_ParamLimits

0xe40d,	// (0x00046604) graphic2_pages_pane_t1

0xe425,	// (0x0004661c) cell_graphic2_control_pane_ParamLimits

0xe425,	// (0x0004661c) cell_graphic2_control_pane

0xe457,	// (0x0004664e) cell_graphic2_pane_g1_ParamLimits

0xe457,	// (0x0004664e) cell_graphic2_pane_g1

0xd2b0,	// (0x000454a7) cell_graphic2_pane_g2_ParamLimits

0xd2b0,	// (0x000454a7) cell_graphic2_pane_g2

0xd84e,	// (0x00045a45) cell_graphic2_pane_g3_ParamLimits

0xd84e,	// (0x00045a45) cell_graphic2_pane_g3

0xd2bd,	// (0x000454b4) cell_graphic2_pane_g4_ParamLimits

0xd2bd,	// (0x000454b4) cell_graphic2_pane_g4

0xe464,	// (0x0004665b) cell_graphic2_pane_g5_ParamLimits

0xe464,	// (0x0004665b) cell_graphic2_pane_g5

0x0004,

0xfda9,	// (0x00047fa0) cell_graphic2_pane_g_ParamLimits

0xfda9,	// (0x00047fa0) cell_graphic2_pane_g

0xe484,	// (0x0004667b) cell_graphic2_pane_t1_ParamLimits

0xe484,	// (0x0004667b) cell_graphic2_pane_t1

0x3124,	// (0x0003b31b) grid_highlight_pane_cp11_ParamLimits

0x3124,	// (0x0003b31b) grid_highlight_pane_cp11

0xb309,	// (0x00043500) bg_button_pane_cp05

0xe4d0,	// (0x000466c7) cell_graphic2_control_pane_g1

0x4a1c,	// (0x0003cc13) bg_touch_area_indi_pane_g1

0x6c60,	// (0x0003ee57) aid_cmod_rocker_key_size

0x6c6a,	// (0x0003ee61) aid_cmode_itu_key_size

0x6c74,	// (0x0003ee6b) main_cmode_video_pane

0x6c7e,	// (0x0003ee75) main_comp_mode_itu_pane

0x6c8a,	// (0x0003ee81) main_comp_mode_rocker_pane

0x6c96,	// (0x0003ee8d) cell_cmode_rocker_pane_ParamLimits

0x6c96,	// (0x0003ee8d) cell_cmode_rocker_pane

0x6ca8,	// (0x0003ee9f) cell_cmode_itu_pane_ParamLimits

0x6ca8,	// (0x0003ee9f) cell_cmode_itu_pane

0xb591,	// (0x00043788) bg_button_pane_cp06_ParamLimits

0xb591,	// (0x00043788) bg_button_pane_cp06

0x4c8c,	// (0x0003ce83) cell_cmode_rocker_pane_g1_ParamLimits

0x4c8c,	// (0x0003ce83) cell_cmode_rocker_pane_g1

0x61f2,	// (0x0003e3e9) cell_cmode_rocker_pane_g2_ParamLimits

0x61f2,	// (0x0003e3e9) cell_cmode_rocker_pane_g2

0x0001,

0xfdb9,	// (0x00047fb0) cell_cmode_rocker_pane_g_ParamLimits

0xfdb9,	// (0x00047fb0) cell_cmode_rocker_pane_g

0xb16f,	// (0x00043366) bg_button_pane_cp07

0x6cbd,	// (0x0003eeb4) cell_cmode_itu_pane_g1

0x6cc6,	// (0x0003eebd) cell_cmode_itu_pane_t1

0x6cd4,	// (0x0003eecb) cell_cmode_itu_pane_t2

0x0001,

0xfdbe,	// (0x00047fb5) cell_cmode_itu_pane_t

0x6417,	// (0x0003e60e) aid_touch_ctrl_left

0x641f,	// (0x0003e616) aid_touch_ctrl_right

0xb16f,	// (0x00043366) compa_mode_pane

0xe4f6,	// (0x000466ed) aid_cmod_rocker_key_size_cp

0xe500,	// (0x000466f7) aid_cmode_itu_key_size_cp

0x6cf6,	// (0x0003eeed) compa_mode_pane_g1

0x6cfe,	// (0x0003eef5) compa_mode_pane_g2

0x6d06,	// (0x0003eefd) compa_mode_pane_g3

0x0002,

0xfdc3,	// (0x00047fba) compa_mode_pane_g

0xe50a,	// (0x00046701) main_comp_mode_itu_pane_cp

0xe512,	// (0x00046709) main_comp_mode_rocker_pane_cp

0xe51a,	// (0x00046711) cell_cmode_itu_pane_cp_ParamLimits

0xe51a,	// (0x00046711) cell_cmode_itu_pane_cp

0xe52f,	// (0x00046726) cell_cmode_rocker_pane_cp_ParamLimits

0xe52f,	// (0x00046726) cell_cmode_rocker_pane_cp

0xb591,	// (0x00043788) bg_button_pane_cp06_cp_ParamLimits

0xb591,	// (0x00043788) bg_button_pane_cp06_cp

0x4c8c,	// (0x0003ce83) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4c8c,	// (0x0003ce83) cell_cmode_rocker_pane_g1_cp

0x4a1c,	// (0x0003cc13) cell_cmode_rocker_pane_g2_cp

0xb16f,	// (0x00043366) bg_button_pane_cp07_cp

0xe541,	// (0x00046738) cell_cmode_itu_pane_g1_cp

0xe54a,	// (0x00046741) cell_cmode_itu_pane_t1_cp

0xe54a,	// (0x00046741) cell_cmode_itu_pane_t2_cp

0xc651,	// (0x00044848) settings_code_pane_cp2

0xb1df,	// (0x000433d6) bg_popup_window_pane_cp3_ParamLimits

0xb422,	// (0x00043619) heading_pane_cp3_ParamLimits

0xb42e,	// (0x00043625) listscroll_popup_graphic_pane_ParamLimits

0x0db3,	// (0x00038faa) fep_hwr_aid_pane_ParamLimits

0x1348,	// (0x0003953f) aid_touch_sctrl_top_ParamLimits

0x1363,	// (0x0003955a) sctrl_sk_top_pane_g1_ParamLimits

0x100a,	// (0x00039201) sctrl_sk_top_pane_g2_ParamLimits

0xfcf9,	// (0x00047ef0) sctrl_sk_top_pane_g_ParamLimits

0x1370,	// (0x00039567) sctrl_sk_top_pane_t1_ParamLimits

0x1348,	// (0x0003953f) aid_touch_sctrl_bottom_ParamLimits

0x1370,	// (0x00039567) sctrl_sk_bottom_pane_t1_ParamLimits

0xdd18,	// (0x00045f0f) aid_area_touch_clock

0xaca9,	// (0x00042ea0) aid_vkb2_area_top_pane_cell_ParamLimits

0xaca9,	// (0x00042ea0) aid_vkb2_area_top_pane_cell

0xad54,	// (0x00042f4b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xad54,	// (0x00042f4b) aid_vkb2_area_bottom_pane_cell

0x68cf,	// (0x0003eac6) popup_char_count_window

0x6d5c,	// (0x0003ef53) popup_char_count_window_g1

0x6d65,	// (0x0003ef5c) popup_char_count_window_g2

0x6d6e,	// (0x0003ef65) popup_char_count_window_g3

0x0002,

0xfdca,	// (0x00047fc1) popup_char_count_window_g

0x6d77,	// (0x0003ef6e) popup_char_count_window_t1

0x141f,	// (0x00039616) popup_fep_char_preview_window_ParamLimits

0x141f,	// (0x00039616) popup_fep_char_preview_window

0xacc9,	// (0x00042ec0) vkb2_top_candi_pane_ParamLimits

0xacc9,	// (0x00042ec0) vkb2_top_candi_pane

0xe558,	// (0x0004674f) cell_vkb2_top_candi_pane_ParamLimits

0xe558,	// (0x0004674f) cell_vkb2_top_candi_pane

0x1987,	// (0x00039b7e) bg_popup_fep_char_preview_window_ParamLimits

0x1987,	// (0x00039b7e) bg_popup_fep_char_preview_window

0x1995,	// (0x00039b8c) popup_fep_char_preview_window_t1_ParamLimits

0x1995,	// (0x00039b8c) popup_fep_char_preview_window_t1

0x6dd2,	// (0x0003efc9) bg_popup_fep_char_preview_window_g1

0x6dda,	// (0x0003efd1) bg_popup_fep_char_preview_window_g2

0x6de2,	// (0x0003efd9) bg_popup_fep_char_preview_window_g3

0x6dea,	// (0x0003efe1) bg_popup_fep_char_preview_window_g4

0x6df2,	// (0x0003efe9) bg_popup_fep_char_preview_window_g5

0x19cf,	// (0x00039bc6) bg_popup_fep_char_preview_window_g6

0x6dfa,	// (0x0003eff1) bg_popup_fep_char_preview_window_g7

0x6e02,	// (0x0003eff9) bg_popup_fep_char_preview_window_g8

0x6e0a,	// (0x0003f001) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd1,	// (0x00047fc8) bg_popup_fep_char_preview_window_g

0x100a,	// (0x00039201) cell_vkb2_top_candi_pane_g1_ParamLimits

0x100a,	// (0x00039201) cell_vkb2_top_candi_pane_g1

0x1018,	// (0x0003920f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1018,	// (0x0003920f) cell_vkb2_top_candi_pane_g2

0x618d,	// (0x0003e384) cell_vkb2_top_candi_pane_g3_ParamLimits

0x618d,	// (0x0003e384) cell_vkb2_top_candi_pane_g3

0x19d7,	// (0x00039bce) cell_vkb2_top_candi_pane_g4_ParamLimits

0x19d7,	// (0x00039bce) cell_vkb2_top_candi_pane_g4

0x5178,	// (0x0003d36f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5178,	// (0x0003d36f) cell_vkb2_top_candi_pane_g5

0x19f8,	// (0x00039bef) cell_vkb2_top_candi_pane_g6_ParamLimits

0x19f8,	// (0x00039bef) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde4,	// (0x00047fdb) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde4,	// (0x00047fdb) cell_vkb2_top_candi_pane_g

0x1a06,	// (0x00039bfd) cell_vkb2_top_candi_pane_t1

0xa73c,	// (0x00042933) aid_size_touch_slider_mark_ParamLimits

0xa73c,	// (0x00042933) aid_size_touch_slider_mark

0xe270,	// (0x00046467) grid_graphic2_catg_pane_ParamLimits

0xe270,	// (0x00046467) grid_graphic2_catg_pane

0xe32c,	// (0x00046523) popup_grid_graphic2_window_t1_ParamLimits

0xe32c,	// (0x00046523) popup_grid_graphic2_window_t1

0xe342,	// (0x00046539) popup_grid_graphic2_window_t2_ParamLimits

0xe342,	// (0x00046539) popup_grid_graphic2_window_t2

0x0001,

0xfd9f,	// (0x00047f96) popup_grid_graphic2_window_t_ParamLimits

0xfd9f,	// (0x00047f96) popup_grid_graphic2_window_t

0xb309,	// (0x00043500) bg_button_pane_cp05_ParamLimits

0xe4d0,	// (0x000466c7) cell_graphic2_control_pane_g1_ParamLimits

0xe5be,	// (0x000467b5) cell_graphic2_catg_pane_ParamLimits

0xe5be,	// (0x000467b5) cell_graphic2_catg_pane

0xb16f,	// (0x00043366) bg_button_pane_cp12

0xe5d0,	// (0x000467c7) cell_graphic2_catg_pane_g1

0x632c,	// (0x0003e523) cell_tb_ext_pane_t1_ParamLimits

0x17c1,	// (0x000399b8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x17c1,	// (0x000399b8) vkb2_top_cell_right_narrow_pane

0x17d9,	// (0x000399d0) vkb2_top_cell_right_wide_pane_ParamLimits

0x17d9,	// (0x000399d0) vkb2_top_cell_right_wide_pane

0x0da5,	// (0x00038f9c) bg_vkb2_func_pane_ParamLimits

0x0da5,	// (0x00038f9c) bg_vkb2_func_pane

0x184a,	// (0x00039a41) vkb2_top_cell_left_pane_g1_ParamLimits

0x0da5,	// (0x00038f9c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0da5,	// (0x00038f9c) bg_vkb2_fuc_pane_cp03

0x18a8,	// (0x00039a9f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x244a,	// (0x0003a641) bg_vkb2_func_pane_g1

0x2452,	// (0x0003a649) bg_vkb2_func_pane_g2

0x2462,	// (0x0003a659) bg_vkb2_func_pane_g3

0x245a,	// (0x0003a651) bg_vkb2_func_pane_g4

0x246a,	// (0x0003a661) bg_vkb2_func_pane_g5

0x2472,	// (0x0003a669) bg_vkb2_func_pane_g6

0x247a,	// (0x0003a671) bg_vkb2_func_pane_g7

0x2482,	// (0x0003a679) bg_vkb2_func_pane_g8

0x2442,	// (0x0003a639) bg_vkb2_func_pane_g9

0x0008,

0xfdf1,	// (0x00047fe8) bg_vkb2_func_pane_g

0x0da5,	// (0x00038f9c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0da5,	// (0x00038f9c) bg_vkb2_fuc_pane_cp01

0x184a,	// (0x00039a41) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x184a,	// (0x00039a41) vkb2_top_cell_right_wide_pane_g1

0x0da5,	// (0x00038f9c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0da5,	// (0x00038f9c) bg_vkb2_fuc_pane_cp02

0x18a8,	// (0x00039a9f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x18a8,	// (0x00039a9f) vkb2_top_cell_right_narrow_pane_g1

0xd218,	// (0x0004540f) aid_touch_area_decrease_ParamLimits

0xd218,	// (0x0004540f) aid_touch_area_decrease

0xd252,	// (0x00045449) aid_touch_area_increase_ParamLimits

0xd252,	// (0x00045449) aid_touch_area_increase

0xd27a,	// (0x00045471) aid_touch_area_mute_ParamLimits

0xd27a,	// (0x00045471) aid_touch_area_mute

0xdac7,	// (0x00045cbe) aid_touch_area_slider_ParamLimits

0xdac7,	// (0x00045cbe) aid_touch_area_slider

0xdb07,	// (0x00045cfe) popup_slider_window_g4_ParamLimits

0xdb07,	// (0x00045cfe) popup_slider_window_g4

0xdb2f,	// (0x00045d26) popup_slider_window_g5_ParamLimits

0xdb2f,	// (0x00045d26) popup_slider_window_g5

0xdb63,	// (0x00045d5a) popup_slider_window_g6_ParamLimits

0xdb63,	// (0x00045d5a) popup_slider_window_g6

0x60e7,	// (0x0003e2de) popup_slider_window_t2_ParamLimits

0x60e7,	// (0x0003e2de) popup_slider_window_t2

0x0001,

0xfced,	// (0x00047ee4) popup_slider_window_t_ParamLimits

0xfced,	// (0x00047ee4) popup_slider_window_t

0xdb7f,	// (0x00045d76) slider_pane_ParamLimits

0xdb7f,	// (0x00045d76) slider_pane

0x6e2d,	// (0x0003f024) slider_pane_g1_ParamLimits

0x6e2d,	// (0x0003f024) slider_pane_g1

0x6e41,	// (0x0003f038) slider_pane_g2_ParamLimits

0x6e41,	// (0x0003f038) slider_pane_g2

0x6e57,	// (0x0003f04e) slider_pane_g3_ParamLimits

0x6e57,	// (0x0003f04e) slider_pane_g3

0x0003,

0xfe04,	// (0x00047ffb) slider_pane_g_ParamLimits

0xfe04,	// (0x00047ffb) slider_pane_g

0xa370,	// (0x00042567) popup_tb_float_extension_window_ParamLimits

0xa370,	// (0x00042567) popup_tb_float_extension_window

0x6e83,	// (0x0003f07a) aid_size_cell_tb_float_ext

0xb16f,	// (0x00043366) bg_popup_sub_window_cp28

0xe5d9,	// (0x000467d0) grid_tb_float_ext_pane

0xe5e3,	// (0x000467da) cell_tb_float_ext_pane_ParamLimits

0xe5e3,	// (0x000467da) cell_tb_float_ext_pane

0xe5fd,	// (0x000467f4) cell_tb_float_ext_pane_g1

0xe606,	// (0x000467fd) grid_highlight_pane_cp12

0xa899,	// (0x00042a90) cell_last_hwr_side_pane_ParamLimits

0xa899,	// (0x00042a90) cell_last_hwr_side_pane

0x4a1c,	// (0x0003cc13) cell_last_hwr_side_pane_g1

0x6ec5,	// (0x0003f0bc) cell_last_hwr_side_pane_g2

0x0001,

0xfe0d,	// (0x00048004) cell_last_hwr_side_pane_g

0xae30,	// (0x00043027) vkb2_area_bottom_space_btn_pane_ParamLimits

0xae30,	// (0x00043027) vkb2_area_bottom_space_btn_pane

0x100a,	// (0x00039201) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6984,	// (0x0003eb7b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1a06,	// (0x00039bfd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1a25,	// (0x00039c1c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1a25,	// (0x00039c1c) vkb2_area_bottom_space_btn_pane_g1

0x1a5f,	// (0x00039c56) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1a5f,	// (0x00039c56) vkb2_area_bottom_space_btn_pane_g2

0x1a95,	// (0x00039c8c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1a95,	// (0x00039c8c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe12,	// (0x00048009) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe12,	// (0x00048009) vkb2_area_bottom_space_btn_pane_g

0x0e68,	// (0x0003905f) cel_fep_hwr_func_pane_ParamLimits

0x0e68,	// (0x0003905f) cel_fep_hwr_func_pane

0xa86e,	// (0x00042a65) cell_hwr_side_button_pane_ParamLimits

0xa86e,	// (0x00042a65) cell_hwr_side_button_pane

0xdd18,	// (0x00045f0f) aid_area_touch_clock_ParamLimits

0xb309,	// (0x00043500) bg_uniindi_top_pane_ParamLimits

0xdd2a,	// (0x00045f21) uniindi_top_pane_g1_ParamLimits

0xdd40,	// (0x00045f37) uniindi_top_pane_g2_ParamLimits

0xdd4c,	// (0x00045f43) uniindi_top_pane_g3_ParamLimits

0x63a6,	// (0x0003e59d) uniindi_top_pane_g4_ParamLimits

0xfd25,	// (0x00047f1c) uniindi_top_pane_g_ParamLimits

0xdd5d,	// (0x00045f54) uniindi_top_pane_t1_ParamLimits

0xb309,	// (0x00043500) bg_vkb2_func_pane_cp01_ParamLimits

0xb309,	// (0x00043500) bg_vkb2_func_pane_cp01

0x6ece,	// (0x0003f0c5) cel_fep_hwr_func_pane_g1_ParamLimits

0x6ece,	// (0x0003f0c5) cel_fep_hwr_func_pane_g1

0xb309,	// (0x00043500) bg_vkb2_func_pane_cp02_ParamLimits

0xb309,	// (0x00043500) bg_vkb2_func_pane_cp02

0x6ece,	// (0x0003f0c5) cell_hwr_side_button_pane_g1_ParamLimits

0x6ece,	// (0x0003f0c5) cell_hwr_side_button_pane_g1

0x22c6,	// (0x0003a4bd) status_pane_g4_ParamLimits

0x22c6,	// (0x0003a4bd) status_pane_g4

0x22e0,	// (0x0003a4d7) status_pane_t1

0x4757,	// (0x0003c94e) form2_midp_gauge_slider_cont_pane

0x475f,	// (0x0003c956) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc9e6,	// (0x00044bdd) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc9f8,	// (0x00044bef) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaec,	// (0x00047ce3) form2_midp_gauge_slider_pane_t_ParamLimits

0x4795,	// (0x0003c98c) form2_midp_slider_pane_ParamLimits

0x13df,	// (0x000395d6) aid_size_cell_func_vkb2_ParamLimits

0x13df,	// (0x000395d6) aid_size_cell_func_vkb2

0x6e6f,	// (0x0003f066) slider_pane_g4_ParamLimits

0x6e6f,	// (0x0003f066) slider_pane_g4

0xae91,	// (0x00043088) form2_midp_gauge_slider_pane_t2_cp01

0xae9f,	// (0x00043096) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xae9f,	// (0x00043096) form2_midp_gauge_slider_pane_t3_cp01

0x1b0a,	// (0x00039d01) form2_midp_slider_pane_cp01

0xb16f,	// (0x00043366) navi_smil_pane

0x6f07,	// (0x0003f0fe) navi_smil_pane_g1

0x6f0f,	// (0x0003f106) navi_smil_pane_t1

0x6edc,	// (0x0003f0d3) form2_midp_slider_pane_g1

0x6ee5,	// (0x0003f0dc) form2_midp_slider_pane_g2

0x6eed,	// (0x0003f0e4) form2_midp_slider_pane_g3

0x6edc,	// (0x0003f0d3) form2_midp_slider_pane_g4

0xe60f,	// (0x00046806) form2_midp_slider_pane_g5

0x0004,

0xfe1b,	// (0x00048012) form2_midp_slider_pane_g

0x1acf,	// (0x00039cc6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1acf,	// (0x00039cc6) vkb2_area_bottom_space_btn_pane_g4

0xa5a8,	// (0x0004279f) lc0_navi_pane_ParamLimits

0xa5a8,	// (0x0004279f) lc0_navi_pane

0xbc1a,	// (0x00043e11) lc0_stat_indi_pane_ParamLimits

0xbc1a,	// (0x00043e11) lc0_stat_indi_pane

0xbc2f,	// (0x00043e26) ls0_title_pane_ParamLimits

0xbc2f,	// (0x00043e26) ls0_title_pane

0xb591,	// (0x00043788) bg_popup_sub_pane_cp14_ParamLimits

0xdcff,	// (0x00045ef6) list_uniindi_pane_ParamLimits

0xdd0b,	// (0x00045f02) uniindi_top_pane_ParamLimits

0x63ef,	// (0x0003e5e6) list_single_uniindi_pane_g1_ParamLimits

0x6402,	// (0x0003e5f9) list_single_uniindi_pane_t1_ParamLimits

0xaebc,	// (0x000430b3) lc0_stat_clock_pane_ParamLimits

0xaebc,	// (0x000430b3) lc0_stat_clock_pane

0xe61a,	// (0x00046811) lc0_stat_indi_pane_g1_ParamLimits

0xe61a,	// (0x00046811) lc0_stat_indi_pane_g1

0xe627,	// (0x0004681e) lc0_stat_indi_pane_g2_ParamLimits

0xe627,	// (0x0004681e) lc0_stat_indi_pane_g2

0x0001,

0xfe26,	// (0x0004801d) lc0_stat_indi_pane_g_ParamLimits

0xfe26,	// (0x0004801d) lc0_stat_indi_pane_g

0xaecc,	// (0x000430c3) lc0_uni_indicator_pane_ParamLimits

0xaecc,	// (0x000430c3) lc0_uni_indicator_pane

0xe634,	// (0x0004682b) ls0_title_pane_g1_ParamLimits

0xe634,	// (0x0004682b) ls0_title_pane_g1

0xe648,	// (0x0004683f) ls0_title_pane_t1_ParamLimits

0xe648,	// (0x0004683f) ls0_title_pane_t1

0xaedc,	// (0x000430d3) lc0_uni_indicator_pane_g1_ParamLimits

0xaedc,	// (0x000430d3) lc0_uni_indicator_pane_g1

0x6f81,	// (0x0003f178) lc0_stat_clock_pane_t1

0xec7b,	// (0x00046e72) main_ai5_pane

0x6f8f,	// (0x0003f186) ai5_sk_pane_ParamLimits

0x6f8f,	// (0x0003f186) ai5_sk_pane

0xe676,	// (0x0004686d) cell_ai5_widget_pane_ParamLimits

0xe676,	// (0x0004686d) cell_ai5_widget_pane

0x704e,	// (0x0003f245) aid_size_cell_widget_grid

0x705c,	// (0x0003f253) bg_ai5_widget_pane_ParamLimits

0x705c,	// (0x0003f253) bg_ai5_widget_pane

0x70d4,	// (0x0003f2cb) cell_ai5_widget_pane_g2

0x70e8,	// (0x0003f2df) cell_ai5_widget_pane_g3

0x7102,	// (0x0003f2f9) cell_ai5_widget_pane_g4

0x7112,	// (0x0003f309) cell_ai5_widget_pane_g5

0x7122,	// (0x0003f319) cell_ai5_widget_pane_g6

0x712e,	// (0x0003f325) cell_ai5_widget_pane_g7

0x7176,	// (0x0003f36d) cell_ai5_widget_pane_t1_ParamLimits

0x7176,	// (0x0003f36d) cell_ai5_widget_pane_t1

0x7193,	// (0x0003f38a) cell_ai5_widget_pane_t2_ParamLimits

0x7193,	// (0x0003f38a) cell_ai5_widget_pane_t2

0x71ab,	// (0x0003f3a2) cell_ai5_widget_pane_t3_ParamLimits

0x71ab,	// (0x0003f3a2) cell_ai5_widget_pane_t3

0x71c3,	// (0x0003f3ba) cell_ai5_widget_pane_t4_ParamLimits

0x71c3,	// (0x0003f3ba) cell_ai5_widget_pane_t4

0x71e9,	// (0x0003f3e0) cell_ai5_widget_pane_t5_ParamLimits

0x71e9,	// (0x0003f3e0) cell_ai5_widget_pane_t5

0x7209,	// (0x0003f400) cell_ai5_widget_pane_t6_ParamLimits

0x7209,	// (0x0003f400) cell_ai5_widget_pane_t6

0x721b,	// (0x0003f412) cell_ai5_widget_pane_t7_ParamLimits

0x721b,	// (0x0003f412) cell_ai5_widget_pane_t7

0x7234,	// (0x0003f42b) cell_ai5_widget_pane_t8_ParamLimits

0x7234,	// (0x0003f42b) cell_ai5_widget_pane_t8

0x0009,

0xfe40,	// (0x00048037) cell_ai5_widget_pane_t_ParamLimits

0xfe40,	// (0x00048037) cell_ai5_widget_pane_t

0x7293,	// (0x0003f48a) grid_ai5_widget_pane

0xb591,	// (0x00043788) highlight_cell_ai5_widget_pane_ParamLimits

0xb591,	// (0x00043788) highlight_cell_ai5_widget_pane

0xe6dc,	// (0x000468d3) ai5_sk_left_pane

0xe6e6,	// (0x000468dd) ai5_sk_middle_pane

0xe6f0,	// (0x000468e7) ai5_sk_right_pane

0x72bf,	// (0x0003f4b6) bg_ai5_widget_pane_g1_ParamLimits

0x72bf,	// (0x0003f4b6) bg_ai5_widget_pane_g1

0x72cb,	// (0x0003f4c2) bg_ai5_widget_pane_g2_ParamLimits

0x72cb,	// (0x0003f4c2) bg_ai5_widget_pane_g2

0x72d7,	// (0x0003f4ce) bg_ai5_widget_pane_g3_ParamLimits

0x72d7,	// (0x0003f4ce) bg_ai5_widget_pane_g3

0x72e3,	// (0x0003f4da) bg_ai5_widget_pane_g4_ParamLimits

0x72e3,	// (0x0003f4da) bg_ai5_widget_pane_g4

0x72ef,	// (0x0003f4e6) bg_ai5_widget_pane_g5_ParamLimits

0x72ef,	// (0x0003f4e6) bg_ai5_widget_pane_g5

0x72fb,	// (0x0003f4f2) bg_ai5_widget_pane_g6_ParamLimits

0x72fb,	// (0x0003f4f2) bg_ai5_widget_pane_g6

0x7307,	// (0x0003f4fe) bg_ai5_widget_pane_g7_ParamLimits

0x7307,	// (0x0003f4fe) bg_ai5_widget_pane_g7

0x7313,	// (0x0003f50a) bg_ai5_widget_pane_g8_ParamLimits

0x7313,	// (0x0003f50a) bg_ai5_widget_pane_g8

0x731f,	// (0x0003f516) bg_ai5_widget_pane_g9_ParamLimits

0x731f,	// (0x0003f516) bg_ai5_widget_pane_g9

0x0008,

0xfe55,	// (0x0004804c) bg_ai5_widget_pane_g_ParamLimits

0xfe55,	// (0x0004804c) bg_ai5_widget_pane_g

0x7351,	// (0x0003f548) cell_shortcut_ai5_widget_pane_ParamLimits

0x7351,	// (0x0003f548) cell_shortcut_ai5_widget_pane

0xf36f,	// (0x00047566) bg_cell_shortcut_ai5_widget_pane

0x7362,	// (0x0003f559) cell_grid_ai5_widget_pane_g1

0xf36f,	// (0x00047566) highlight_cell_shortcut_ai5_widget_pane

0x244a,	// (0x0003a641) ai5_sk_left_pane_g1

0x736b,	// (0x0003f562) ai5_sk_left_pane_g2

0x7373,	// (0x0003f56a) ai5_sk_left_pane_g3

0x737b,	// (0x0003f572) ai5_sk_left_pane_g4

0x0003,

0xfe68,	// (0x0004805f) ai5_sk_left_pane_g

0x7383,	// (0x0003f57a) ai5_sk_left_pane_t1

0x2452,	// (0x0003a649) ai5_sk_right_pane_g1

0x7391,	// (0x0003f588) ai5_sk_right_pane_g2

0x7399,	// (0x0003f590) ai5_sk_right_pane_g3

0x73a1,	// (0x0003f598) ai5_sk_right_pane_g4

0x0003,

0xfe71,	// (0x00048068) ai5_sk_right_pane_g

0x73a9,	// (0x0003f5a0) ai5_sk_right_pane_t1

0x2452,	// (0x0003a649) ai5_sk_middle_pane_g1

0x244a,	// (0x0003a641) ai5_sk_middle_pane_g2

0x246a,	// (0x0003a661) ai5_sk_middle_pane_g3

0x7399,	// (0x0003f590) ai5_sk_middle_pane_g4

0x7373,	// (0x0003f56a) ai5_sk_middle_pane_g5

0x73b7,	// (0x0003f5ae) ai5_sk_middle_pane_g6

0xe6fa,	// (0x000468f1) ai5_sk_middle_pane_g7

0x0006,

0xfe7a,	// (0x00048071) ai5_sk_middle_pane_g

0xa494,	// (0x0004268b) aid_touch_area_size_lc0_ParamLimits

0xa494,	// (0x0004268b) aid_touch_area_size_lc0

0x1039,	// (0x00039230) cell_hwr_candidate_pane_t1_ParamLimits

0x1f97,	// (0x0003a18e) aid_touch_navi_pane

0xbd28,	// (0x00043f1f) status_dt_navi_pane_ParamLimits

0xbd28,	// (0x00043f1f) status_dt_navi_pane

0xbd40,	// (0x00043f37) status_dt_sta_pane_ParamLimits

0xbd40,	// (0x00043f37) status_dt_sta_pane

0xe702,	// (0x000468f9) dt_sta_controll_pane

0xe70f,	// (0x00046906) dt_sta_indi_pane

0xe71c,	// (0x00046913) dt_sta_title_pane

0xb309,	// (0x00043500) bg_dt_sta_indi_pane_ParamLimits

0xb309,	// (0x00043500) bg_dt_sta_indi_pane

0xe72e,	// (0x00046925) dt_sta_battery_pane

0xe736,	// (0x0004692d) dt_sta_indi_pane_g1

0x7409,	// (0x0003f600) dt_sta_indi_pane_g2

0x7412,	// (0x0003f609) dt_sta_indi_pane_g3

0x0002,

0xfe89,	// (0x00048080) dt_sta_indi_pane_g

0x741b,	// (0x0003f612) dt_sta_signal_pane

0xb591,	// (0x00043788) bg_dt_sta_title_pane_ParamLimits

0xb591,	// (0x00043788) bg_dt_sta_title_pane

0x3284,	// (0x0003b47b) dt_sta_title_pane_g1

0xe73f,	// (0x00046936) dt_sta_title_pane_t1_ParamLimits

0xe73f,	// (0x00046936) dt_sta_title_pane_t1

0xb16f,	// (0x00043366) bg_dt_sta_control_pane

0xe754,	// (0x0004694b) dt_sta_controll_pane_g1

0xe75d,	// (0x00046954) bg_dt_sta_title_pane_g1

0xe766,	// (0x0004695d) bg_dt_sta_title_pane_g2

0xe76f,	// (0x00046966) bg_dt_sta_title_pane_g3

0x0002,

0xfe90,	// (0x00048087) bg_dt_sta_title_pane_g

0x4a1c,	// (0x0003cc13) bg_dt_sta_indi_pane_g1

0x745d,	// (0x0003f654) dt_sta_signal_pane_g1

0x7465,	// (0x0003f65c) dt_sta_signal_pane_g2

0x0001,

0xfe97,	// (0x0004808e) dt_sta_signal_pane_g

0x746d,	// (0x0003f664) dt_sta_battery_pane_g1

0x7476,	// (0x0003f66d) dt_sta_battery_pane_t1

0x4a1c,	// (0x0003cc13) bg_dt_sta_control_pane_g1

0xba47,	// (0x00043c3e) fep_china_uni_eep_pane

0xba4f,	// (0x00043c46) fep_china_uni_entry_pane_ParamLimits

0xba5f,	// (0x00043c56) popup_fep_china_uni_window_g1_ParamLimits

0xba6f,	// (0x00043c66) popup_fep_china_uni_window_g2_ParamLimits

0xba6f,	// (0x00043c66) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x00047905) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x00047905) popup_fep_china_uni_window_g

0x7485,	// (0x0003f67c) fep_china_uni_eep_pane_g1

0x748d,	// (0x0003f684) fep_china_uni_eep_pane_t1

0x6efe,	// (0x0003f0f5) aid_touch_area_size_smil_player

0x20ed,	// (0x0003a2e4) lc0_clock_pane

0x22d4,	// (0x0003a4cb) status_pane_g5_ParamLimits

0x22d4,	// (0x0003a4cb) status_pane_g5

0x9ea6,	// (0x0004209d) popup_keymap_window

0x2292,	// (0x0003a489) status_icon_pane

0x70e8,	// (0x0003f2df) cell_ai5_widget_pane_g3_ParamLimits

0x7102,	// (0x0003f2f9) cell_ai5_widget_pane_g4_ParamLimits

0x7112,	// (0x0003f309) cell_ai5_widget_pane_g5_ParamLimits

0x713a,	// (0x0003f331) cell_ai5_widget_pane_g8_ParamLimits

0x713a,	// (0x0003f331) cell_ai5_widget_pane_g8

0x714e,	// (0x0003f345) cell_ai5_widget_pane_g9_ParamLimits

0x714e,	// (0x0003f345) cell_ai5_widget_pane_g9

0x7162,	// (0x0003f359) cell_ai5_widget_pane_g10_ParamLimits

0x7162,	// (0x0003f359) cell_ai5_widget_pane_g10

0x749c,	// (0x0003f693) status_icon_pane_g1

0xb16f,	// (0x00043366) bg_popup_sub_pane_cp13

0x74a4,	// (0x0003f69b) popup_keymap_window_t1

0x9b82,	// (0x00041d79) control_pane_g6_ParamLimits

0x9b82,	// (0x00041d79) control_pane_g6

0x9b8f,	// (0x00041d86) control_pane_g7_ParamLimits

0x9b8f,	// (0x00041d86) control_pane_g7

0x9b9c,	// (0x00041d93) control_pane_g8_ParamLimits

0x9b9c,	// (0x00041d93) control_pane_g8

0xe702,	// (0x000468f9) dt_sta_controll_pane_ParamLimits

0xe70f,	// (0x00046906) dt_sta_indi_pane_ParamLimits

0xe71c,	// (0x00046913) dt_sta_title_pane_ParamLimits

0xb4dc,	// (0x000436d3) aid_size_touch_scroll_bar_cale

0x8802,	// (0x000409f9) popup_discreet_window_ParamLimits

0x8802,	// (0x000409f9) popup_discreet_window

0x8854,	// (0x00040a4b) popup_sk_window

0x2ac8,	// (0x0003acbf) bg_popup_sub_pane_cp28_ParamLimits

0x2ac8,	// (0x0003acbf) bg_popup_sub_pane_cp28

0x74b2,	// (0x0003f6a9) popup_discreet_window_g1_ParamLimits

0x74b2,	// (0x0003f6a9) popup_discreet_window_g1

0xe778,	// (0x0004696f) popup_discreet_window_t1_ParamLimits

0xe778,	// (0x0004696f) popup_discreet_window_t1

0x74f0,	// (0x0003f6e7) popup_discreet_window_t2_ParamLimits

0x74f0,	// (0x0003f6e7) popup_discreet_window_t2

0x0002,

0xfe9c,	// (0x00048093) popup_discreet_window_t_ParamLimits

0xfe9c,	// (0x00048093) popup_discreet_window_t

0x1b41,	// (0x00039d38) popup_sk_window_g1

0x1b4b,	// (0x00039d42) popup_sk_window_g2

0x0001,

0xfea3,	// (0x0004809a) popup_sk_window_g

0xaf07,	// (0x000430fe) popup_sk_window_t1

0xaf15,	// (0x0004310c) popup_sk_window_t1_copy1

0x70d4,	// (0x0003f2cb) cell_ai5_widget_pane_g2_ParamLimits

0x7246,	// (0x0003f43d) cell_ai5_widget_pane_t9_ParamLimits

0x7246,	// (0x0003f43d) cell_ai5_widget_pane_t9

0xb16f,	// (0x00043366) main_fep_fshwr2_pane

0xaf23,	// (0x0004311a) aid_fshwr2_btn_pane

0xaf37,	// (0x0004312e) aid_fshwr2_syb_pane

0xaf4b,	// (0x00043142) aid_fshwr2_txt_pane

0xaf5b,	// (0x00043152) fshwr2_func_candi_pane

0xaf7b,	// (0x00043172) fshwr2_hwr_syb_pane

0xaf9d,	// (0x00043194) fshwr2_icf_pane

0xec7b,	// (0x00046e72) fshwr2_icf_bg_pane

0x1bfd,	// (0x00039df4) fshwr2_icf_pane_t1_ParamLimits

0x1bfd,	// (0x00039df4) fshwr2_icf_pane_t1

0xb9c4,	// (0x00043bbb) fshwr2_func_candi_pane_g1

0xe796,	// (0x0004698d) fshwr2_func_candi_row_pane_ParamLimits

0xe796,	// (0x0004698d) fshwr2_func_candi_row_pane

0xafcd,	// (0x000431c4) cell_fshwr2_syb_pane_ParamLimits

0xafcd,	// (0x000431c4) cell_fshwr2_syb_pane

0x1c39,	// (0x00039e30) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1c39,	// (0x00039e30) fshwr2_hwr_syb_pane_g1

0xec7b,	// (0x00046e72) bg_popup_call_pane_cp01

0xaff3,	// (0x000431ea) fshwr2_func_candi_cell_pane_ParamLimits

0xaff3,	// (0x000431ea) fshwr2_func_candi_cell_pane

0x28b1,	// (0x0003aaa8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x28b1,	// (0x0003aaa8) fshwr2_func_candi_cell_bg_pane

0xb03e,	// (0x00043235) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb03e,	// (0x00043235) fshwr2_func_candi_cell_pane_g1

0xb075,	// (0x0004326c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb075,	// (0x0004326c) fshwr2_func_candi_cell_pane_t1

0xec7b,	// (0x00046e72) bg_button_pane_cp08

0x7569,	// (0x0003f760) cell_fshwr2_syb_bg_pane

0xb090,	// (0x00043287) cell_fshwr2_syb_bg_pane_g1

0xb0a3,	// (0x0004329a) cell_fshwr2_syb_bg_pane_t1

0xb591,	// (0x00043788) main_tmo_pane

0xc403,	// (0x000445fa) uni_indicator_pane_g1_ParamLimits

0xc419,	// (0x00044610) uni_indicator_pane_g2_ParamLimits

0xc42f,	// (0x00044626) uni_indicator_pane_g3_ParamLimits

0x35f1,	// (0x0003b7e8) uni_indicator_pane_g4_ParamLimits

0x35f1,	// (0x0003b7e8) uni_indicator_pane_g4

0x3605,	// (0x0003b7fc) uni_indicator_pane_g5_ParamLimits

0x3605,	// (0x0003b7fc) uni_indicator_pane_g5

0x3605,	// (0x0003b7fc) uni_indicator_pane_g6_ParamLimits

0x3605,	// (0x0003b7fc) uni_indicator_pane_g6

0xf906,	// (0x00047afd) uni_indicator_pane_g_ParamLimits

0xd1fa,	// (0x000453f1) popup_tmo_note_window_ParamLimits

0xd1fa,	// (0x000453f1) popup_tmo_note_window

0x13c1,	// (0x000395b8) fshwr2_bg_pane

0xb066,	// (0x0004325d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb066,	// (0x0004325d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea8,	// (0x0004809f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea8,	// (0x0004809f) fshwr2_func_candi_cell_pane_g

0x0ff2,	// (0x000391e9) bg_popup_window_pane_cp01

0x1cf7,	// (0x00039eee) bg_popup_window_pane_g1_cp01

0x7575,	// (0x0003f76c) bg_popup_window_pane_cp22_ParamLimits

0x7575,	// (0x0003f76c) bg_popup_window_pane_cp22

0xe7b9,	// (0x000469b0) listscroll_tmo_link_pane_ParamLimits

0xe7b9,	// (0x000469b0) listscroll_tmo_link_pane

0x75c3,	// (0x0003f7ba) popup_tmo_note_window_g1_ParamLimits

0x75c3,	// (0x0003f7ba) popup_tmo_note_window_g1

0xe7f9,	// (0x000469f0) tmo_note_info_pane_ParamLimits

0xe7f9,	// (0x000469f0) tmo_note_info_pane

0xe813,	// (0x00046a0a) list_tmo_note_info_pane_g1_ParamLimits

0xe813,	// (0x00046a0a) list_tmo_note_info_pane_g1

0x7601,	// (0x0003f7f8) list_tmo_note_info_pane_g2_ParamLimits

0x7601,	// (0x0003f7f8) list_tmo_note_info_pane_g2

0x0001,

0xfead,	// (0x000480a4) list_tmo_note_info_pane_g_ParamLimits

0xfead,	// (0x000480a4) list_tmo_note_info_pane_g

0x761d,	// (0x0003f814) list_tmo_note_info_text_pane_ParamLimits

0x761d,	// (0x0003f814) list_tmo_note_info_text_pane

0x769e,	// (0x0003f895) list_tmo_link_pane

0x76ab,	// (0x0003f8a2) scroll_pane_cp20

0x76b8,	// (0x0003f8af) list_single_tmo_link_pane_ParamLimits

0x76b8,	// (0x0003f8af) list_single_tmo_link_pane

0x76c8,	// (0x0003f8bf) list_single_tmo_link_pane_t1

0x76d6,	// (0x0003f8cd) list_tmo_note_info_text_pane_t1_ParamLimits

0x76d6,	// (0x0003f8cd) list_tmo_note_info_text_pane_t1

0x94ec,	// (0x000416e3) aid_size_touch_scroll_bar_cp01_ParamLimits

0x94ec,	// (0x000416e3) aid_size_touch_scroll_bar_cp01

0x93e3,	// (0x000415da) aid_size_touch_slider_marker

0x8844,	// (0x00040a3b) popup_settings_window_ParamLimits

0x8844,	// (0x00040a3b) popup_settings_window

0xd406,	// (0x000455fd) popup_candi_list_indi_window

0x1f97,	// (0x0003a18e) aid_touch_navi_pane_ParamLimits

0x131c,	// (0x00039513) rs_clock_indi_pane

0x1325,	// (0x0003951c) sctrl_sk_bottom_pane_ParamLimits

0x1336,	// (0x0003952d) sctrl_sk_top_pane_ParamLimits

0xab6d,	// (0x00042d64) popup_fep_tooltip_window

0x704e,	// (0x0003f245) aid_size_cell_widget_grid_ParamLimits

0x70bf,	// (0x0003f2b6) cell_ai5_widget_pane_g1_ParamLimits

0x70bf,	// (0x0003f2b6) cell_ai5_widget_pane_g1

0x7122,	// (0x0003f319) cell_ai5_widget_pane_g6_ParamLimits

0x712e,	// (0x0003f325) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2b,	// (0x00048022) cell_ai5_widget_pane_g_ParamLimits

0xfe2b,	// (0x00048022) cell_ai5_widget_pane_g

0x7275,	// (0x0003f46c) cell_ai5_widget_pane_t10_ParamLimits

0x7275,	// (0x0003f46c) cell_ai5_widget_pane_t10

0x7293,	// (0x0003f48a) grid_ai5_widget_pane_ParamLimits

0x732b,	// (0x0003f522) cell_contacts_ai5_widget_pane_ParamLimits

0x732b,	// (0x0003f522) cell_contacts_ai5_widget_pane

0x7505,	// (0x0003f6fc) popup_discreet_window_t3_ParamLimits

0x7505,	// (0x0003f6fc) popup_discreet_window_t3

0xafb9,	// (0x000431b0) popup_fshwr2_char_preview_window_ParamLimits

0xafb9,	// (0x000431b0) popup_fshwr2_char_preview_window

0xe82a,	// (0x00046a21) tmo_note_info_pane_t1

0xe83f,	// (0x00046a36) tmo_note_info_pane_t2

0xe856,	// (0x00046a4d) tmo_note_info_pane_t3

0x767a,	// (0x0003f871) tmo_note_info_pane_t4

0x768c,	// (0x0003f883) tmo_note_info_pane_t5

0x0004,

0xfeb2,	// (0x000480a9) tmo_note_info_pane_t

0x769e,	// (0x0003f895) list_tmo_link_pane_ParamLimits

0x76ab,	// (0x0003f8a2) scroll_pane_cp20_ParamLimits

0xec7b,	// (0x00046e72) bg_popup_fep_char_preview_window_cp01

0xe86b,	// (0x00046a62) popup_fshwr2_char_preview_window_t1

0x76fd,	// (0x0003f8f4) popup_candi_list_indi_window_g1

0x7706,	// (0x0003f8fd) bg_cell_contacts_ai5_widget_pane

0x7712,	// (0x0003f909) cell_contacts_ai5_widget_pane_g1

0x50cd,	// (0x0003d2c4) cell_contacts_ai5_widget_pane_g2

0x7727,	// (0x0003f91e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebd,	// (0x000480b4) cell_contacts_ai5_widget_pane_g

0x7733,	// (0x0003f92a) cell_contacts_ai5_widget_pane_t1

0xb591,	// (0x00043788) highlight_cell_shortcut_ai5_widget_pane_cp01

0x77aa,	// (0x0003f9a1) settings_container_pane

0xf36f,	// (0x00047566) listscroll_set_pane_copy1

0x411e,	// (0x0003c315) scroll_pane_cp121_copy1

0x2875,	// (0x0003aa6c) set_content_pane_copy1

0xe8de,	// (0x00046ad5) aid_height_set_list_copy1_ParamLimits

0xe8de,	// (0x00046ad5) aid_height_set_list_copy1

0x37fd,	// (0x0003b9f4) aid_size_parent_copy1_ParamLimits

0x37fd,	// (0x0003b9f4) aid_size_parent_copy1

0xe8ea,	// (0x00046ae1) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe8ea,	// (0x00046ae1) button_value_adjust_pane_cp6_copy1

0x1f1b,	// (0x0003a112) list_highlight_pane_cp2_copy1_ParamLimits

0x1f1b,	// (0x0003a112) list_highlight_pane_cp2_copy1

0xe8fe,	// (0x00046af5) list_set_pane_copy1_ParamLimits

0xe8fe,	// (0x00046af5) list_set_pane_copy1

0xe879,	// (0x00046a70) main_pane_set_t1_copy1_ParamLimits

0xe879,	// (0x00046a70) main_pane_set_t1_copy1

0xe8b3,	// (0x00046aaa) main_pane_set_t2_copy1_ParamLimits

0xe8b3,	// (0x00046aaa) main_pane_set_t2_copy1

0xe9ab,	// (0x00046ba2) main_pane_set_t3_copy1

0xe9b9,	// (0x00046bb0) main_pane_set_t4_copy1

0xe8d2,	// (0x00046ac9) set_content_pane_g1_copy1_ParamLimits

0xe8d2,	// (0x00046ac9) set_content_pane_g1_copy1

0xe9c7,	// (0x00046bbe) setting_code_pane_copy1

0x78a7,	// (0x0003fa9e) setting_slider_graphic_pane_copy1

0x78a7,	// (0x0003fa9e) setting_slider_pane_copy1

0x78a7,	// (0x0003fa9e) setting_text_pane_copy1

0x78a7,	// (0x0003fa9e) setting_volume_pane_copy1

0xe9c7,	// (0x00046bbe) settings_code_pane_cp2_copy1

0xe9cf,	// (0x00046bc6) settings_code_pane_cp_copy1_ParamLimits

0xe9cf,	// (0x00046bc6) settings_code_pane_cp_copy1

0xb0b9,	// (0x000432b0) volume_set_pane_copy1

0xe9e3,	// (0x00046bda) volume_set_pane_g10_copy1

0xe9eb,	// (0x00046be2) volume_set_pane_g1_copy1

0xe9f3,	// (0x00046bea) volume_set_pane_g2_copy1

0xe9fb,	// (0x00046bf2) volume_set_pane_g3_copy1

0xea03,	// (0x00046bfa) volume_set_pane_g4_copy1

0xea0b,	// (0x00046c02) volume_set_pane_g5_copy1

0xea13,	// (0x00046c0a) volume_set_pane_g6_copy1

0xea1b,	// (0x00046c12) volume_set_pane_g7_copy1

0xea23,	// (0x00046c1a) volume_set_pane_g8_copy1

0xea2b,	// (0x00046c22) volume_set_pane_g9_copy1

0xb1df,	// (0x000433d6) bg_set_opt_pane_cp_copy1_ParamLimits

0xb1df,	// (0x000433d6) bg_set_opt_pane_cp_copy1

0xb0c1,	// (0x000432b8) setting_slider_pane_t1_copy1_ParamLimits

0xb0c1,	// (0x000432b8) setting_slider_pane_t1_copy1

0xb0df,	// (0x000432d6) setting_slider_pane_t2_copy1_ParamLimits

0xb0df,	// (0x000432d6) setting_slider_pane_t2_copy1

0xb0f9,	// (0x000432f0) setting_slider_pane_t3_copy1_ParamLimits

0xb0f9,	// (0x000432f0) setting_slider_pane_t3_copy1

0xb111,	// (0x00043308) slider_set_pane_copy1_ParamLimits

0xb111,	// (0x00043308) slider_set_pane_copy1

0xb5e9,	// (0x000437e0) set_opt_bg_pane_g1_copy2

0xb5f1,	// (0x000437e8) set_opt_bg_pane_g2_copy2

0x7913,	// (0x0003fb0a) set_opt_bg_pane_g3_copy2

0xb601,	// (0x000437f8) set_opt_bg_pane_g4_copy2

0xb609,	// (0x00043800) set_opt_bg_pane_g5_copy2

0xb611,	// (0x00043808) set_opt_bg_pane_g6_copy2

0xea33,	// (0x00046c2a) set_opt_bg_pane_g7_copy2

0x7925,	// (0x0003fb1c) set_opt_bg_pane_g8_copy2

0x792f,	// (0x0003fb26) set_opt_bg_pane_g9_copy2

0xb127,	// (0x0004331e) aid_size_touch_slider_mark_copy1_ParamLimits

0xb127,	// (0x0004331e) aid_size_touch_slider_mark_copy1

0xea3b,	// (0x00046c32) slider_set_pane_g1_copy1

0x1d82,	// (0x00039f79) slider_set_pane_g2_copy1

0xa750,	// (0x00042947) slider_set_pane_g3_copy1_ParamLimits

0xa750,	// (0x00042947) slider_set_pane_g3_copy1

0xa764,	// (0x0004295b) slider_set_pane_g4_copy1_ParamLimits

0xa764,	// (0x0004295b) slider_set_pane_g4_copy1

0xa77c,	// (0x00042973) slider_set_pane_g5_copy1_ParamLimits

0xa77c,	// (0x00042973) slider_set_pane_g5_copy1

0xa750,	// (0x00042947) slider_set_pane_g6_copy1_ParamLimits

0xa750,	// (0x00042947) slider_set_pane_g6_copy1

0xb13b,	// (0x00043332) slider_set_pane_g7_copy1_ParamLimits

0xb13b,	// (0x00043332) slider_set_pane_g7_copy1

0xb183,	// (0x0004337a) bg_set_opt_pane_cp2_copy1

0xea44,	// (0x00046c3b) setting_slider_graphic_pane_g1_copy1

0xea4d,	// (0x00046c44) setting_slider_graphic_pane_t1_copy1

0xea5d,	// (0x00046c54) setting_slider_graphic_pane_t2_copy1

0xea6d,	// (0x00046c64) slider_set_pane_cp_copy1

0x797b,	// (0x0003fb72) input_focus_pane_cp1_copy1

0x7984,	// (0x0003fb7b) list_set_text_pane_copy1

0x798c,	// (0x0003fb83) setting_text_pane_g1_copy1

0xea7d,	// (0x00046c74) set_text_pane_t1_copy1

0x797b,	// (0x0003fb72) input_focus_pane_cp2_copy1

0x798c,	// (0x0003fb83) setting_code_pane_g1_copy1

0x7995,	// (0x0003fb8c) setting_code_pane_t1_copy1

0x79a3,	// (0x0003fb9a) list_set_graphic_pane_copy1

0xb183,	// (0x0004337a) bg_set_opt_pane_cp4_copy1

0xbb9f,	// (0x00043d96) list_set_graphic_pane_g1_copy1_ParamLimits

0xbb9f,	// (0x00043d96) list_set_graphic_pane_g1_copy1

0x79b7,	// (0x0003fbae) list_set_graphic_pane_g2_copy1

0xbbb7,	// (0x00043dae) list_set_graphic_pane_t1_copy1_ParamLimits

0xbbb7,	// (0x00043dae) list_set_graphic_pane_t1_copy1

0x4a1c,	// (0x0003cc13) rs_clock_indi_pane_g1

0x79bf,	// (0x0003fbb6) rs_clock_indi_pane_t1

0x79cd,	// (0x0003fbc4) rs_indi_pane

0x79d5,	// (0x0003fbcc) rs_indi_pane_g1

0x79de,	// (0x0003fbd5) rs_indi_pane_g2

0x76fd,	// (0x0003f8f4) rs_indi_pane_g3

0x0002,

0xfec4,	// (0x000480bb) rs_indi_pane_g

0xf36f,	// (0x00047566) bg_popup_preview_window_pane_cp03

0x79e7,	// (0x0003fbde) popup_fep_tooltip_window_t1

0xce9f,	// (0x00045096) popup_note2_window_g2_ParamLimits

0xce9f,	// (0x00045096) popup_note2_window_g2

0x0001,

0xfc64,	// (0x00047e5b) popup_note2_window_g_ParamLimits

0xfc64,	// (0x00047e5b) popup_note2_window_g

0x5bad,	// (0x0003dda4) bg_popup_sub_pane_cp11_ParamLimits

0x5bba,	// (0x0003ddb1) cell_ai3_links_pane_g1_ParamLimits

0x5bd1,	// (0x0003ddc8) cell_ai3_links_pane_t1

0xea7d,	// (0x00046c74) set_text_pane_t1_copy1_ParamLimits

0xf2ae,	// (0x000474a5) cell_graphic_popup_pane_cp2_ParamLimits

0xf2ae,	// (0x000474a5) cell_graphic_popup_pane_cp2

0xea99,	// (0x00046c90) cell_graphic_popup_pane_g1_cp2

0xb45f,	// (0x00043656) cell_graphic_popup_pane_g2_cp2

0x79fd,	// (0x0003fbf4) cell_graphic_popup_pane_g3_cp2

0xeaa1,	// (0x00046c98) cell_graphic_popup_pane_t2_cp2

0xb470,	// (0x00043667) grid_highlight_pane_cp3_cp2

0xb841,	// (0x00043a38) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb591,	// (0x00043788) main_tmo_pane_ParamLimits

0xd1ee,	// (0x000453e5) popup_tmo_big_image_note_window

0x70ae,	// (0x0003f2a5) cell_ai5_widget_list_pane

0x70b6,	// (0x0003f2ad) cell_ai5_widget_lrg_icon_pane

0xe82a,	// (0x00046a21) tmo_note_info_pane_t1_ParamLimits

0xe83f,	// (0x00046a36) tmo_note_info_pane_t2_ParamLimits

0xe856,	// (0x00046a4d) tmo_note_info_pane_t3_ParamLimits

0x767a,	// (0x0003f871) tmo_note_info_pane_t4_ParamLimits

0x768c,	// (0x0003f883) tmo_note_info_pane_t5_ParamLimits

0xfeb2,	// (0x000480a9) tmo_note_info_pane_t_ParamLimits

0x77aa,	// (0x0003f9a1) settings_container_pane_ParamLimits

0xea75,	// (0x00046c6c) indicator_popup_pane_cp5

0xea75,	// (0x00046c6c) indicator_popup_pane_cp6

0x79a3,	// (0x0003fb9a) list_set_graphic_pane_copy1_ParamLimits

0xb16f,	// (0x00043366) bg_popup_window_pane_cp23

0x7a13,	// (0x0003fc0a) popup_tmo_big_image_note_window_g1

0x7a1c,	// (0x0003fc13) popup_tmo_big_image_note_window_t1

0x7a2c,	// (0x0003fc23) popup_tmo_big_image_note_window_t2

0x7a3c,	// (0x0003fc33) popup_tmo_big_image_note_window_t3

0x0002,

0xfecb,	// (0x000480c2) popup_tmo_big_image_note_window_t

0x4a1c,	// (0x0003cc13) cell_ai5_widget_lrg_icon_pane_g1

0x7a4c,	// (0x0003fc43) cell_ai5_widget_lrg_icon_pane_t1

0x7a5a,	// (0x0003fc51) cell_ai5_widget_list_row_pane_ParamLimits

0x7a5a,	// (0x0003fc51) cell_ai5_widget_list_row_pane

0x7a71,	// (0x0003fc68) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7a71,	// (0x0003fc68) cell_ai5_widget_list_row_pane_g1

0xeaaf,	// (0x00046ca6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeaaf,	// (0x00046ca6) cell_ai5_widget_list_row_pane_t1

0x7aa9,	// (0x0003fca0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7aa9,	// (0x0003fca0) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed2,	// (0x000480c9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed2,	// (0x000480c9) cell_ai5_widget_list_row_pane_t

0xec7b,	// (0x00046e72) main_fep_vtchi_ss_pane

0x7af1,	// (0x0003fce8) popup_fep_char_pre_window

0x7af9,	// (0x0003fcf0) popup_fep_ituss_window

0xeb02,	// (0x00046cf9) popup_fep_vkbss_window

0xeb0f,	// (0x00046d06) grid_vkbss_keypad_pane_ParamLimits

0xeb0f,	// (0x00046d06) grid_vkbss_keypad_pane

0x7b5f,	// (0x0003fd56) ituss_keypad_pane

0x1dac,	// (0x00039fa3) aid_vkbss_key_offset_ParamLimits

0x1dac,	// (0x00039fa3) aid_vkbss_key_offset

0xb151,	// (0x00043348) cell_vkbss_key_pane_ParamLimits

0xb151,	// (0x00043348) cell_vkbss_key_pane

0x22ae,	// (0x0003a4a5) bg_cell_vkbss_key_g1_ParamLimits

0x22ae,	// (0x0003a4a5) bg_cell_vkbss_key_g1

0xeb1f,	// (0x00046d16) cell_vkbss_key_3p_pane_ParamLimits

0xeb1f,	// (0x00046d16) cell_vkbss_key_3p_pane

0xeb39,	// (0x00046d30) cell_vkbss_key_g1_ParamLimits

0xeb39,	// (0x00046d30) cell_vkbss_key_g1

0xeb53,	// (0x00046d4a) cell_vkbss_key_t1_ParamLimits

0xeb53,	// (0x00046d4a) cell_vkbss_key_t1

0x1dce,	// (0x00039fc5) cell_ituss_key_pane_ParamLimits

0x1dce,	// (0x00039fc5) cell_ituss_key_pane

0x7bc1,	// (0x0003fdb8) bg_cell_ituss_key_g1_ParamLimits

0x7bc1,	// (0x0003fdb8) bg_cell_ituss_key_g1

0x7bcd,	// (0x0003fdc4) cell_ituss_key_pane_g1_ParamLimits

0x7bcd,	// (0x0003fdc4) cell_ituss_key_pane_g1

0x1ddf,	// (0x00039fd6) cell_ituss_key_pane_g2_ParamLimits

0x1ddf,	// (0x00039fd6) cell_ituss_key_pane_g2

0x0002,

0xfed9,	// (0x000480d0) cell_ituss_key_pane_g_ParamLimits

0xfed9,	// (0x000480d0) cell_ituss_key_pane_g

0x1e0b,	// (0x0003a002) cell_ituss_key_t1_ParamLimits

0x1e0b,	// (0x0003a002) cell_ituss_key_t1

0x1e45,	// (0x0003a03c) cell_ituss_key_t2_ParamLimits

0x1e45,	// (0x0003a03c) cell_ituss_key_t2

0x1e76,	// (0x0003a06d) cell_ituss_key_t3_ParamLimits

0x1e76,	// (0x0003a06d) cell_ituss_key_t3

0x1e45,	// (0x0003a03c) cell_ituss_key_t4_ParamLimits

0x1e45,	// (0x0003a03c) cell_ituss_key_t4

0x0004,

0xfee0,	// (0x000480d7) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x000480d7) cell_ituss_key_t

0x7bf3,	// (0x0003fdea) cell_vkbss_key_3p_pane_g1

0x7bfb,	// (0x0003fdf2) cell_vkbss_key_3p_pane_g2

0x7c03,	// (0x0003fdfa) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeeb,	// (0x000480e2) cell_vkbss_key_3p_pane_g

0xf36f,	// (0x00047566) bg_popup_fep_char_preview_window_cp02

0x7c0b,	// (0x0003fe02) popup_fep_char_pre_window_t1

0xe6d2,	// (0x000468c9) main_ai5_sk_pane

0x7706,	// (0x0003f8fd) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7712,	// (0x0003f909) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x50cd,	// (0x0003d2c4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7727,	// (0x0003f91e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebd,	// (0x000480b4) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7733,	// (0x0003f92a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb591,	// (0x00043788) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeb7e,	// (0x00046d75) main_ai5_sk_pane_g1

0xc05c,	// (0x00044253) popup_query_code_window_g1

0xeaf3,	// (0x00046cea) popup_fep_vkb_icf_pane

0x7b39,	// (0x0003fd30) popup_fep_vtchi_icf_pane

0x7c22,	// (0x0003fe19) bg_icf_pane

0x7c2e,	// (0x0003fe25) list_vkb_icf_pane

0x7c3d,	// (0x0003fe34) bg_icf_pane_cp01

0x7c50,	// (0x0003fe47) vtchi_icf_list_pane

0xeb87,	// (0x00046d7e) list_vkb_icf_pane_t1_ParamLimits

0xeb87,	// (0x00046d7e) list_vkb_icf_pane_t1

0x7c81,	// (0x0003fe78) vtchi_icf_list_pane_t1_ParamLimits

0x7c81,	// (0x0003fe78) vtchi_icf_list_pane_t1

0x7af9,	// (0x0003fcf0) popup_fep_ituss_window_ParamLimits

0x7b39,	// (0x0003fd30) popup_fep_vtchi_icf_pane_ParamLimits

0x7b5f,	// (0x0003fd56) ituss_keypad_pane_ParamLimits

0x1da0,	// (0x00039f97) ituss_sks_pane

0x7c22,	// (0x0003fe19) bg_icf_pane_ParamLimits

0xeae0,	// (0x00046cd7) icf_edit_indi_pane_ParamLimits

0xeae0,	// (0x00046cd7) icf_edit_indi_pane

0x7c2e,	// (0x0003fe25) list_vkb_icf_pane_ParamLimits

0x7c3d,	// (0x0003fe34) bg_icf_pane_cp01_ParamLimits

0x7ae4,	// (0x0003fcdb) icf_edit_indi_pane_cp01_ParamLimits

0x7ae4,	// (0x0003fcdb) icf_edit_indi_pane_cp01

0x7c58,	// (0x0003fe4f) vtchi_query_pane

0x6ece,	// (0x0003f0c5) icf_edit_indi_pane_g1_ParamLimits

0x6ece,	// (0x0003f0c5) icf_edit_indi_pane_g1

0xeb9e,	// (0x00046d95) icf_edit_indi_pane_g2_ParamLimits

0xeb9e,	// (0x00046d95) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x000480fa) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x000480fa) icf_edit_indi_pane_g

0xebb0,	// (0x00046da7) icf_edit_indi_pane_t1

0x7c9f,	// (0x0003fe96) bg_input_focus_pane_cp042

0xb4d3,	// (0x000436ca) vtchi_button_pane

0x7ca8,	// (0x0003fe9f) vtchi_query_pane_t1

0x7cb6,	// (0x0003fead) vtchi_query_pane_t2

0x7cc4,	// (0x0003febb) vtchi_query_pane_t3

0x0002,

0xfef2,	// (0x000480e9) vtchi_query_pane_t

0xec7b,	// (0x00046e72) bg_button_pane_cp13

0x7cd2,	// (0x0003fec9) vtchi_button_pane_g1

0x1eb9,	// (0x0003a0b0) ituss_sks_pane_g1

0x1ec4,	// (0x0003a0bb) ituss_sks_pane_g2

0x0001,

0xfef9,	// (0x000480f0) ituss_sks_pane_g

0x7cda,	// (0x0003fed1) ituss_sks_pane_t1

0x7ce8,	// (0x0003fedf) ituss_sks_pane_t2

0x0001,

0xfefe,	// (0x000480f5) ituss_sks_pane_t

0x4499,	// (0x0003c690) indicator_nsta_pane_cp_g1

0x44a1,	// (0x0003c698) indicator_nsta_pane_cp_g2

0x44a9,	// (0x0003c6a0) indicator_nsta_pane_cp_g3

0x4499,	// (0x0003c690) indicator_nsta_pane_cp_g4

0x44a1,	// (0x0003c698) indicator_nsta_pane_cp_g5

0x44a9,	// (0x0003c6a0) indicator_nsta_pane_cp_g6

0x0005,

0xfaa2,	// (0x00047c99) indicator_nsta_pane_cp_g

0xe4af,	// (0x000466a6) cell_graphic2_pane_t2_ParamLimits

0xe4af,	// (0x000466a6) cell_graphic2_pane_t2

0x0001,

0xfdb4,	// (0x00047fab) cell_graphic2_pane_t_ParamLimits

0xfdb4,	// (0x00047fab) cell_graphic2_pane_t

0xe4e8,	// (0x000466df) cell_graphic2_control_pane_t1

0x97b2,	// (0x000419a9) signal_pane_g3_ParamLimits

0x97b2,	// (0x000419a9) signal_pane_g3

0x97c6,	// (0x000419bd) signal_pane_g4_ParamLimits

0x97c6,	// (0x000419bd) signal_pane_g4

0x7abb,	// (0x0003fcb2) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7abb,	// (0x0003fcb2) cell_ai5_widget_list_row_pane_t3

0x7be1,	// (0x0003fdd8) cell_ituss_key_pane_t1_ParamLimits

0x7be1,	// (0x0003fdd8) cell_ituss_key_pane_t1

0x2544,	// (0x0003a73b) form_field_data_wide_pane_vc_t2_ParamLimits

0x2544,	// (0x0003a73b) form_field_data_wide_pane_vc_t2

0x2558,	// (0x0003a74f) form_field_data_wide_pane_vc_t3_ParamLimits

0x2558,	// (0x0003a74f) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ee,	// (0x000479e5) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ee,	// (0x000479e5) form_field_data_wide_pane_vc_t

0x4160,	// (0x0003c357) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4160,	// (0x0003c357) form_field_slider_wide_pane_vc_t3

0x423e,	// (0x0003c435) form_field_popup_wide_pane_vc_t2_ParamLimits

0x423e,	// (0x0003c435) form_field_popup_wide_pane_vc_t2

0x4255,	// (0x0003c44c) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4255,	// (0x0003c44c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa91,	// (0x00047c88) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x00047c88) form_field_popup_wide_pane_vc_t

0xaf23,	// (0x0004311a) aid_fshwr2_btn_pane_ParamLimits

0xaf37,	// (0x0004312e) aid_fshwr2_syb_pane_ParamLimits

0xaf4b,	// (0x00043142) aid_fshwr2_txt_pane_ParamLimits

0x13c1,	// (0x000395b8) fshwr2_bg_pane_ParamLimits

0xaf5b,	// (0x00043152) fshwr2_func_candi_pane_ParamLimits

0xaf7b,	// (0x00043172) fshwr2_hwr_syb_pane_ParamLimits

0xaf9d,	// (0x00043194) fshwr2_icf_pane_ParamLimits

0xd7af,	// (0x000459a6) list_double_graphic_pane_vc_g4_ParamLimits

0xd7af,	// (0x000459a6) list_double_graphic_pane_vc_g4

0x1dff,	// (0x00039ff6) cell_ituss_key_pane_g3_ParamLimits

0x1dff,	// (0x00039ff6) cell_ituss_key_pane_g3

0x1ea7,	// (0x0003a09e) cell_ituss_key_t5_ParamLimits

0x1ea7,	// (0x0003a09e) cell_ituss_key_t5

0xeb02,	// (0x00046cf9) popup_fep_vkbss_window_ParamLimits

0x51fe,	// (0x0003d3f5) aid_cell_ai5_quarter

0xebb0,	// (0x00046da7) icf_edit_indi_pane_t1_ParamLimits

0x8c6d,	// (0x00040e64) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8c6d,	// (0x00040e64) aid_tch_indicator_popup_pane_cp2

0x8c80,	// (0x00040e77) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8c80,	// (0x00040e77) aid_tch_query_popup_data_pane_cp2

0x28b1,	// (0x0003aaa8) aid_tch_query_popup_pane_ParamLimits

0x28b1,	// (0x0003aaa8) aid_tch_query_popup_pane

0x28b1,	// (0x0003aaa8) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x28b1,	// (0x0003aaa8) aid_tch_query_popup_data_pane_cp1

0x7569,	// (0x0003f760) cell_fshwr2_syb_bg_pane_ParamLimits

0xb090,	// (0x00043287) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xb0a3,	// (0x0004329a) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeaf3,	// (0x00046cea) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
