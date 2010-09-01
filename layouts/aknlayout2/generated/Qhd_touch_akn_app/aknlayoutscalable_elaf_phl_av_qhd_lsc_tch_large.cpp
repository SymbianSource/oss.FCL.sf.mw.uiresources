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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00040fce };

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
0xbca5,	// (0x0004cc73) Screen

0xbcb1,	// (0x0004cc7f) application_window_ParamLimits

0xbcb1,	// (0x0004cc7f) application_window

0xe163,	// (0x0004f131) screen_g1

0xbce9,	// (0x0004ccb7) area_bottom_pane_ParamLimits

0xbce9,	// (0x0004ccb7) area_bottom_pane

0x0d10,	// (0x00041cde) area_top_pane_ParamLimits

0x0d10,	// (0x00041cde) area_top_pane

0x0da4,	// (0x00041d72) main_pane_ParamLimits

0x0da4,	// (0x00041d72) main_pane

0x3320,	// (0x000442ee) misc_graphics

0xd654,	// (0x0004e622) battery_pane_ParamLimits

0xd654,	// (0x0004e622) battery_pane

0x59ee,	// (0x000469bc) bg_status_flat_pane_g8

0x59f6,	// (0x000469c4) bg_status_flat_pane_g9

0x4dd4,	// (0x00045da2) context_pane_ParamLimits

0x4dd4,	// (0x00045da2) context_pane

0xd7bf,	// (0x0004e78d) navi_pane_ParamLimits

0xd7bf,	// (0x0004e78d) navi_pane

0xd83d,	// (0x0004e80b) signal_pane_ParamLimits

0xd83d,	// (0x0004e80b) signal_pane

0x0008,

0xf854,	// (0x00050822) bg_status_flat_pane_g

0xd8cd,	// (0x0004e89b) status_pane_g1_ParamLimits

0xd8cd,	// (0x0004e89b) status_pane_g1

0xd8e3,	// (0x0004e8b1) status_pane_g2_ParamLimits

0xd8e3,	// (0x0004e8b1) status_pane_g2

0x4ffb,	// (0x00045fc9) status_pane_g3_ParamLimits

0x4ffb,	// (0x00045fc9) status_pane_g3

0x0004,

0xf780,	// (0x0005074e) status_pane_g_ParamLimits

0xf780,	// (0x0005074e) status_pane_g

0xd8ef,	// (0x0004e8bd) title_pane_ParamLimits

0xd8ef,	// (0x0004e8bd) title_pane

0xd952,	// (0x0004e920) uni_indicator_pane_ParamLimits

0xd952,	// (0x0004e920) uni_indicator_pane

0x4c3c,	// (0x00045c0a) bg_list_pane_ParamLimits

0x4c3c,	// (0x00045c0a) bg_list_pane

0x1718,	// (0x000426e6) find_pane

0x51fa,	// (0x000461c8) listscroll_app_pane_ParamLimits

0x51fa,	// (0x000461c8) listscroll_app_pane

0x4c68,	// (0x00045c36) listscroll_form_pane

0x1720,	// (0x000426ee) listscroll_gen_pane_ParamLimits

0x1720,	// (0x000426ee) listscroll_gen_pane

0x1734,	// (0x00042702) listscroll_set_pane

0x656f,	// (0x0004753d) main_idle_act_pane

0x4938,	// (0x00045906) main_idle_trad_pane

0x4938,	// (0x00045906) main_list_empty_pane

0x4c5c,	// (0x00045c2a) main_midp_pane

0x4c82,	// (0x00045c50) main_pane_g1_ParamLimits

0x4c82,	// (0x00045c50) main_pane_g1

0xc40d,	// (0x0004d3db) popup_ai_message_window_ParamLimits

0xc40d,	// (0x0004d3db) popup_ai_message_window

0xc49e,	// (0x0004d46c) popup_fep_china_uni_window_ParamLimits

0xc49e,	// (0x0004d46c) popup_fep_china_uni_window

0x183e,	// (0x0004280c) popup_fep_japan_candidate_window_ParamLimits

0x183e,	// (0x0004280c) popup_fep_japan_candidate_window

0x185e,	// (0x0004282c) popup_fep_japan_predictive_window_ParamLimits

0x185e,	// (0x0004282c) popup_fep_japan_predictive_window

0xc4fa,	// (0x0004d4c8) popup_find_window

0xc517,	// (0x0004d4e5) popup_grid_graphic_window_ParamLimits

0xc517,	// (0x0004d4e5) popup_grid_graphic_window

0x18c7,	// (0x00042895) popup_large_graphic_colour_window

0xc5bb,	// (0x0004d589) popup_menu_window_ParamLimits

0xc5bb,	// (0x0004d589) popup_menu_window

0xc78d,	// (0x0004d75b) popup_note_image_window

0xc753,	// (0x0004d721) popup_note_wait_window_ParamLimits

0xc753,	// (0x0004d721) popup_note_wait_window

0xc7a5,	// (0x0004d773) popup_note_window_ParamLimits

0xc7a5,	// (0x0004d773) popup_note_window

0xc84b,	// (0x0004d819) popup_query_code_window_ParamLimits

0xc84b,	// (0x0004d819) popup_query_code_window

0x1b0f,	// (0x00042add) popup_query_data_code_window_ParamLimits

0x1b0f,	// (0x00042add) popup_query_data_code_window

0xc885,	// (0x0004d853) popup_query_data_window_ParamLimits

0xc885,	// (0x0004d853) popup_query_data_window

0xc907,	// (0x0004d8d5) popup_query_sat_info_window_ParamLimits

0xc907,	// (0x0004d8d5) popup_query_sat_info_window

0xc99e,	// (0x0004d96c) popup_snote_single_graphic_window_ParamLimits

0xc99e,	// (0x0004d96c) popup_snote_single_graphic_window

0xc99e,	// (0x0004d96c) popup_snote_single_text_window_ParamLimits

0xc99e,	// (0x0004d96c) popup_snote_single_text_window

0x1b96,	// (0x00042b64) popup_sub_window_general

0x1cc6,	// (0x00042c94) popup_window_general_ParamLimits

0x1cc6,	// (0x00042c94) popup_window_general

0x4c90,	// (0x00045c5e) power_save_pane

0xc292,	// (0x0004d260) control_pane_g1_ParamLimits

0xc292,	// (0x0004d260) control_pane_g1

0xc2bb,	// (0x0004d289) control_pane_g2_ParamLimits

0xc2bb,	// (0x0004d289) control_pane_g2

0x4bff,	// (0x00045bcd) control_pane_g3_ParamLimits

0x4bff,	// (0x00045bcd) control_pane_g3

0x0007,

0xf768,	// (0x00050736) control_pane_g_ParamLimits

0xf768,	// (0x00050736) control_pane_g

0xc2fc,	// (0x0004d2ca) control_pane_t1_ParamLimits

0xc2fc,	// (0x0004d2ca) control_pane_t1

0xc362,	// (0x0004d330) control_pane_t2_ParamLimits

0xc362,	// (0x0004d330) control_pane_t2

0x0002,

0xf779,	// (0x00050747) control_pane_t_ParamLimits

0xf779,	// (0x00050747) control_pane_t

0xd501,	// (0x0004e4cf) navi_navi_volume_pane_cp1

0xd509,	// (0x0004e4d7) status_small_icon_pane

0x4b34,	// (0x00045b02) status_small_pane_g1_ParamLimits

0x4b34,	// (0x00045b02) status_small_pane_g1

0xd511,	// (0x0004e4df) status_small_pane_g2_ParamLimits

0xd511,	// (0x0004e4df) status_small_pane_g2

0xd51d,	// (0x0004e4eb) status_small_pane_g3_ParamLimits

0xd51d,	// (0x0004e4eb) status_small_pane_g3

0xd529,	// (0x0004e4f7) status_small_pane_g4_ParamLimits

0xd529,	// (0x0004e4f7) status_small_pane_g4

0xd535,	// (0x0004e503) status_small_pane_g5_ParamLimits

0xd535,	// (0x0004e503) status_small_pane_g5

0xd543,	// (0x0004e511) status_small_pane_g6_ParamLimits

0xd543,	// (0x0004e511) status_small_pane_g6

0x0007,

0xf757,	// (0x00050725) status_small_pane_g_ParamLimits

0xf757,	// (0x00050725) status_small_pane_g

0xd572,	// (0x0004e540) status_small_pane_t1

0xd594,	// (0x0004e562) status_small_wait_pane_ParamLimits

0xd594,	// (0x0004e562) status_small_wait_pane

0xd3a9,	// (0x0004e377) aid_levels_signal_ParamLimits

0xd3a9,	// (0x0004e377) aid_levels_signal

0xd3c1,	// (0x0004e38f) signal_pane_g1_ParamLimits

0xd3c1,	// (0x0004e38f) signal_pane_g1

0xd3dc,	// (0x0004e3aa) signal_pane_g2_ParamLimits

0xd3dc,	// (0x0004e3aa) signal_pane_g2

0x0003,

0xf6e8,	// (0x000506b6) signal_pane_g_ParamLimits

0xf6e8,	// (0x000506b6) signal_pane_g

0x4409,	// (0x000453d7) context_pane_g1

0xbec7,	// (0x0004ce95) title_pane_g1

0xbefe,	// (0x0004cecc) title_pane_t1

0x33c8,	// (0x00044396) title_pane_t2

0x33ee,	// (0x000443bc) title_pane_t3

0x0002,

0xf532,	// (0x00050500) title_pane_t

0xd97a,	// (0x0004e948) aid_levels_battery_ParamLimits

0xd97a,	// (0x0004e948) aid_levels_battery

0xd996,	// (0x0004e964) battery_pane_g1_ParamLimits

0xd996,	// (0x0004e964) battery_pane_g1

0xd9b3,	// (0x0004e981) battery_pane_g2_ParamLimits

0xd9b3,	// (0x0004e981) battery_pane_g2

0x0001,

0xf78b,	// (0x00050759) battery_pane_g_ParamLimits

0xf78b,	// (0x00050759) battery_pane_g

0xdb74,	// (0x0004eb42) uni_indicator_pane_g1

0xdb8a,	// (0x0004eb58) uni_indicator_pane_g2

0xdba0,	// (0x0004eb6e) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x000508ca) uni_indicator_pane_g

0x47b6,	// (0x00045784) navi_icon_pane_ParamLimits

0x47b6,	// (0x00045784) navi_icon_pane

0x46f4,	// (0x000456c2) navi_midp_pane

0x47d2,	// (0x000457a0) navi_navi_pane

0x47dc,	// (0x000457aa) navi_text_pane_ParamLimits

0x47dc,	// (0x000457aa) navi_text_pane

0xe163,	// (0x0004f131) status_small_wait_pane_g1

0x3843,	// (0x00044811) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x000508c5) status_small_wait_pane_g

0x6049,	// (0x00047017) navi_navi_icon_text_pane

0x6051,	// (0x0004701f) navi_navi_pane_g1_ParamLimits

0x6051,	// (0x0004701f) navi_navi_pane_g1

0x6063,	// (0x00047031) navi_navi_pane_g2_ParamLimits

0x6063,	// (0x00047031) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x00050893) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x00050893) navi_navi_pane_g

0x6075,	// (0x00047043) navi_navi_tabs_pane

0x607e,	// (0x0004704c) navi_navi_text_pane

0x6049,	// (0x00047017) navi_navi_volume_pane

0x6025,	// (0x00046ff3) navi_text_pane_t1

0x6019,	// (0x00046fe7) navi_icon_pane_g1

0x5f6c,	// (0x00046f3a) navi_navi_text_pane_t1

0x1f7e,	// (0x00042f4c) navi_navi_volume_pane_g1

0x1f86,	// (0x00042f54) volume_small_pane

0x5ed2,	// (0x00046ea0) navi_navi_icon_text_pane_g1

0x5eda,	// (0x00046ea8) navi_navi_icon_text_pane_t1

0x47d2,	// (0x000457a0) navi_tabs_2_long_pane

0x47d2,	// (0x000457a0) navi_tabs_2_pane

0x47d2,	// (0x000457a0) navi_tabs_3_long_pane

0x47d2,	// (0x000457a0) navi_tabs_3_pane

0x47d2,	// (0x000457a0) navi_tabs_4_pane

0x1f5e,	// (0x00042f2c) tabs_2_active_pane_ParamLimits

0x1f5e,	// (0x00042f2c) tabs_2_active_pane

0x1f6e,	// (0x00042f3c) tabs_2_passive_pane_ParamLimits

0x1f6e,	// (0x00042f3c) tabs_2_passive_pane

0x1f2c,	// (0x00042efa) tabs_3_active_pane_ParamLimits

0x1f2c,	// (0x00042efa) tabs_3_active_pane

0x1f3c,	// (0x00042f0a) tabs_3_passive_pane_ParamLimits

0x1f3c,	// (0x00042f0a) tabs_3_passive_pane

0x1f4d,	// (0x00042f1b) tabs_3_passive_pane_cp_ParamLimits

0x1f4d,	// (0x00042f1b) tabs_3_passive_pane_cp

0x1ee8,	// (0x00042eb6) tabs_4_active_pane_ParamLimits

0x1ee8,	// (0x00042eb6) tabs_4_active_pane

0x1ef9,	// (0x00042ec7) tabs_4_passive_pane_ParamLimits

0x1ef9,	// (0x00042ec7) tabs_4_passive_pane

0x1f0a,	// (0x00042ed8) tabs_4_passive_pane_cp_ParamLimits

0x1f0a,	// (0x00042ed8) tabs_4_passive_pane_cp

0x1f1b,	// (0x00042ee9) tabs_4_passive_pane_cp2_ParamLimits

0x1f1b,	// (0x00042ee9) tabs_4_passive_pane_cp2

0x1ec4,	// (0x00042e92) tabs_2_long_active_pane_ParamLimits

0x1ec4,	// (0x00042e92) tabs_2_long_active_pane

0x1ed6,	// (0x00042ea4) tabs_2_long_passive_pane_ParamLimits

0x1ed6,	// (0x00042ea4) tabs_2_long_passive_pane

0x1e85,	// (0x00042e53) tabs_3_long_active_pane_ParamLimits

0x1e85,	// (0x00042e53) tabs_3_long_active_pane

0x1e98,	// (0x00042e66) tabs_3_long_passive_pane_ParamLimits

0x1e98,	// (0x00042e66) tabs_3_long_passive_pane

0x1eb1,	// (0x00042e7f) tabs_3_long_passive_pane_cp_ParamLimits

0x1eb1,	// (0x00042e7f) tabs_3_long_passive_pane_cp

0x1e2b,	// (0x00042df9) volume_small_pane_g1

0x1e34,	// (0x00042e02) volume_small_pane_g2

0x1e3d,	// (0x00042e0b) volume_small_pane_g3

0x1e46,	// (0x00042e14) volume_small_pane_g4

0x1e4f,	// (0x00042e1d) volume_small_pane_g5

0x1e58,	// (0x00042e26) volume_small_pane_g6

0x1e61,	// (0x00042e2f) volume_small_pane_g7

0x1e6a,	// (0x00042e38) volume_small_pane_g8

0x1e73,	// (0x00042e41) volume_small_pane_g9

0x1e7c,	// (0x00042e4a) volume_small_pane_g10

0x0009,

0xf891,	// (0x0005085f) volume_small_pane_g

0x367b,	// (0x00044649) bg_active_tab_pane_cp2_ParamLimits

0x367b,	// (0x00044649) bg_active_tab_pane_cp2

0x340e,	// (0x000443dc) tabs_3_active_pane_g1

0xbf8a,	// (0x0004cf58) tabs_3_active_pane_t1

0x367b,	// (0x00044649) bg_passive_tab_pane_cp2_ParamLimits

0x367b,	// (0x00044649) bg_passive_tab_pane_cp2

0x340e,	// (0x000443dc) tabs_3_passive_pane_g1

0xbf8a,	// (0x0004cf58) tabs_3_passive_pane_t1

0x367b,	// (0x00044649) bg_active_tab_pane_cp3_ParamLimits

0x367b,	// (0x00044649) bg_active_tab_pane_cp3

0x3428,	// (0x000443f6) tabs_4_active_pane_g1

0xbf9c,	// (0x0004cf6a) tabs_4_active_pane_t1

0x367b,	// (0x00044649) bg_passive_tab_pane_cp3_ParamLimits

0x367b,	// (0x00044649) bg_passive_tab_pane_cp3

0x3428,	// (0x000443f6) tabs_4_1_passive_pane_g1

0xbf9c,	// (0x0004cf6a) tabs_4_1_passive_pane_t1

0x4c5c,	// (0x00045c2a) list_highlight_pane_cp2

0xdc26,	// (0x0004ebf4) list_set_pane_ParamLimits

0xdc26,	// (0x0004ebf4) list_set_pane

0xdcc0,	// (0x0004ec8e) main_pane_set_t1_ParamLimits

0xdcc0,	// (0x0004ec8e) main_pane_set_t1

0xdce0,	// (0x0004ecae) main_pane_set_t2_ParamLimits

0xdce0,	// (0x0004ecae) main_pane_set_t2

0xdcf4,	// (0x0004ecc2) main_pane_set_t3_ParamLimits

0xdcf4,	// (0x0004ecc2) main_pane_set_t3

0xdd06,	// (0x0004ecd4) main_pane_set_t4_ParamLimits

0xdd06,	// (0x0004ecd4) main_pane_set_t4

0x0003,

0xf961,	// (0x0005092f) main_pane_set_t_ParamLimits

0xf961,	// (0x0005092f) main_pane_set_t

0xdd18,	// (0x0004ece6) setting_code_pane

0xdd22,	// (0x0004ecf0) setting_slider_graphic_pane

0xdd22,	// (0x0004ecf0) setting_slider_pane

0xdd22,	// (0x0004ecf0) setting_text_pane

0xdd22,	// (0x0004ecf0) setting_volume_pane

0x0ff3,	// (0x00041fc1) volume_set_pane

0x3400,	// (0x000443ce) bg_set_opt_pane_cp

0x0ffb,	// (0x00041fc9) setting_slider_pane_t1

0x1014,	// (0x00041fe2) setting_slider_pane_t2

0x102e,	// (0x00041ffc) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00050507) setting_slider_pane_t

0x1046,	// (0x00042014) slider_set_pane

0x3320,	// (0x000442ee) bg_set_opt_pane_cp2

0x3442,	// (0x00044410) setting_slider_graphic_pane_g1

0x105c,	// (0x0004202a) setting_slider_graphic_pane_t1

0x106c,	// (0x0004203a) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0005050e) setting_slider_graphic_pane_t

0x107c,	// (0x0004204a) slider_set_pane_cp

0x3320,	// (0x000442ee) input_focus_pane_cp1

0x6556,	// (0x00047524) list_set_text_pane

0xe163,	// (0x0004f131) setting_text_pane_g1

0x3320,	// (0x000442ee) input_focus_pane_cp2

0xe163,	// (0x0004f131) setting_code_pane_g1

0x344b,	// (0x00044419) setting_code_pane_t1

0xf42f,	// (0x000503fd) set_text_pane_t1_ParamLimits

0xf42f,	// (0x000503fd) set_text_pane_t1

0x3ce5,	// (0x00044cb3) set_opt_bg_pane_g1

0x3ced,	// (0x00044cbb) set_opt_bg_pane_g2

0x6530,	// (0x000474fe) set_opt_bg_pane_g3

0x3cfd,	// (0x00044ccb) set_opt_bg_pane_g4

0x3d05,	// (0x00044cd3) set_opt_bg_pane_g5

0x3d0d,	// (0x00044cdb) set_opt_bg_pane_g6

0x653a,	// (0x00047508) set_opt_bg_pane_g7

0x6542,	// (0x00047510) set_opt_bg_pane_g8

0x654c,	// (0x0004751a) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0005091c) set_opt_bg_pane_g

0x6523,	// (0x000474f1) slider_set_pane_g1

0x1ff3,	// (0x00042fc1) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0005090d) slider_set_pane_g

0x1f8f,	// (0x00042f5d) volume_set_pane_g1

0x1f97,	// (0x00042f65) volume_set_pane_g2

0x1f9f,	// (0x00042f6d) volume_set_pane_g3

0x1fa7,	// (0x00042f75) volume_set_pane_g4

0x1faf,	// (0x00042f7d) volume_set_pane_g5

0x1fb7,	// (0x00042f85) volume_set_pane_g6

0x1fbf,	// (0x00042f8d) volume_set_pane_g7

0x1fc7,	// (0x00042f95) volume_set_pane_g8

0x1fcf,	// (0x00042f9d) volume_set_pane_g9

0x1fd7,	// (0x00042fa5) volume_set_pane_g10

0x0009,

0xf917,	// (0x000508e5) volume_set_pane_g

0xbfae,	// (0x0004cf7c) indicator_pane_ParamLimits

0xbfae,	// (0x0004cf7c) indicator_pane

0xbfd6,	// (0x0004cfa4) main_idle_pane_g2_ParamLimits

0xbfd6,	// (0x0004cfa4) main_idle_pane_g2

0xc00e,	// (0x0004cfdc) main_pane_idle_g1_ParamLimits

0xc00e,	// (0x0004cfdc) main_pane_idle_g1

0x349a,	// (0x00044468) popup_clock_digital_analogue_window_ParamLimits

0x349a,	// (0x00044468) popup_clock_digital_analogue_window

0xc035,	// (0x0004d003) soft_indicator_pane_ParamLimits

0xc035,	// (0x0004d003) soft_indicator_pane

0xc04f,	// (0x0004d01d) wallpaper_pane_ParamLimits

0xc04f,	// (0x0004d01d) wallpaper_pane

0xe163,	// (0x0004f131) wallpaper_pane_g1

0xc061,	// (0x0004d02f) indicator_pane_g1_ParamLimits

0xc061,	// (0x0004d02f) indicator_pane_g1

0x695b,	// (0x00047929) navi_navi_icon_text_pane_srt_g1

0x34ec,	// (0x000444ba) soft_indicator_pane_t1

0x3506,	// (0x000444d4) aid_ps_area_pane

0xc077,	// (0x0004d045) aid_ps_clock_pane

0x3525,	// (0x000444f3) aid_ps_indicator_pane

0x3531,	// (0x000444ff) indicator_ps_pane_ParamLimits

0x3531,	// (0x000444ff) indicator_ps_pane

0x3540,	// (0x0004450e) power_save_pane_g1_ParamLimits

0x3540,	// (0x0004450e) power_save_pane_g1

0x354c,	// (0x0004451a) power_save_pane_g2_ParamLimits

0x354c,	// (0x0004451a) power_save_pane_g2

0x0c04,	// (0x00041bd2) aid_navinavi_width_pane

0x3506,	// (0x000444d4) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00050513) power_save_pane_g_ParamLimits

0xf545,	// (0x00050513) power_save_pane_g

0x355a,	// (0x00044528) power_save_pane_t1_ParamLimits

0x355a,	// (0x00044528) power_save_pane_t1

0xc077,	// (0x0004d045) aid_ps_clock_pane_ParamLimits

0x3525,	// (0x000444f3) aid_ps_indicator_pane_ParamLimits

0x356c,	// (0x0004453a) power_save_pane_t4_ParamLimits

0x356c,	// (0x0004453a) power_save_pane_t4

0x0001,

0xf54a,	// (0x00050518) power_save_pane_t_ParamLimits

0xf54a,	// (0x00050518) power_save_pane_t

0x3596,	// (0x00044564) power_save_t3_ParamLimits

0x3596,	// (0x00044564) power_save_t3

0x3581,	// (0x0004454f) power_save_t2_ParamLimits

0x3581,	// (0x0004454f) power_save_t2

0x35ab,	// (0x00044579) indicator_ps_pane_g1

0xc085,	// (0x0004d053) ai_gene_pane_ParamLimits

0xc085,	// (0x0004d053) ai_gene_pane

0xc09c,	// (0x0004d06a) ai_links_pane_ParamLimits

0xc09c,	// (0x0004d06a) ai_links_pane

0xc0b4,	// (0x0004d082) indicator_pane_cp1_ParamLimits

0xc0b4,	// (0x0004d082) indicator_pane_cp1

0xc0c3,	// (0x0004d091) main_pane_idle_g1_cp_ParamLimits

0xc0c3,	// (0x0004d091) main_pane_idle_g1_cp

0x35e4,	// (0x000445b2) popup_ai_links_title_window

0xc0db,	// (0x0004d0a9) soft_indicator_pane_cp1_ParamLimits

0xc0db,	// (0x0004d0a9) soft_indicator_pane_cp1

0x6312,	// (0x000472e0) ai_links_pane_g1

0x631b,	// (0x000472e9) grid_ai_links_pane

0xdb6b,	// (0x0004eb39) ai_gene_pane_1

0x6300,	// (0x000472ce) ai_gene_pane_2

0x6309,	// (0x000472d7) list_highlight_pane_cp4

0xdb47,	// (0x0004eb15) cell_ai_link_pane_ParamLimits

0xdb47,	// (0x0004eb15) cell_ai_link_pane

0x62d1,	// (0x0004729f) cell_ai_link_pane_g1

0x3843,	// (0x00044811) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x000508c0) cell_ai_link_pane_g

0x3320,	// (0x000442ee) grid_highlight_cp2

0x3320,	// (0x000442ee) bg_popup_sub_pane_cp1

0x3607,	// (0x000445d5) popup_ai_links_title_window_t1

0x621f,	// (0x000471ed) ai_gene_pane_1_g1_ParamLimits

0x621f,	// (0x000471ed) ai_gene_pane_1_g1

0x622b,	// (0x000471f9) ai_gene_pane_1_g2_ParamLimits

0x622b,	// (0x000471f9) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x000508b6) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x000508b6) ai_gene_pane_1_g

0x6238,	// (0x00047206) ai_gene_pane_1_t1_ParamLimits

0x6238,	// (0x00047206) ai_gene_pane_1_t1

0x626c,	// (0x0004723a) grid_ai_soft_ind_pane

0x620a,	// (0x000471d8) ai_gene_pane_2_t1_ParamLimits

0x620a,	// (0x000471d8) ai_gene_pane_2_t1

0xc0ef,	// (0x0004d0bd) main_pane_empty_t1_ParamLimits

0xc0ef,	// (0x0004d0bd) main_pane_empty_t1

0xc107,	// (0x0004d0d5) main_pane_empty_t2_ParamLimits

0xc107,	// (0x0004d0d5) main_pane_empty_t2

0xc11c,	// (0x0004d0ea) main_pane_empty_t3_ParamLimits

0xc11c,	// (0x0004d0ea) main_pane_empty_t3

0xc12e,	// (0x0004d0fc) main_pane_empty_t4_ParamLimits

0xc12e,	// (0x0004d0fc) main_pane_empty_t4

0xc140,	// (0x0004d10e) main_pane_empty_t5_ParamLimits

0xc140,	// (0x0004d10e) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0005051d) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0005051d) main_pane_empty_t

0x3dac,	// (0x00044d7a) bg_popup_window_pane_ParamLimits

0x3dac,	// (0x00044d7a) bg_popup_window_pane

0x5f7a,	// (0x00046f48) find_popup_pane_cp2_ParamLimits

0x5f7a,	// (0x00046f48) find_popup_pane_cp2

0x5f86,	// (0x00046f54) heading_pane_ParamLimits

0x5f86,	// (0x00046f54) heading_pane

0x3320,	// (0x000442ee) bg_popup_sub_pane

0xdac8,	// (0x0004ea96) bg_popup_window_pane_g1_ParamLimits

0xdac8,	// (0x0004ea96) bg_popup_window_pane_g1

0xdad7,	// (0x0004eaa5) bg_popup_window_pane_g2_ParamLimits

0xdad7,	// (0x0004eaa5) bg_popup_window_pane_g2

0xdae3,	// (0x0004eab1) bg_popup_window_pane_g3_ParamLimits

0xdae3,	// (0x0004eab1) bg_popup_window_pane_g3

0xdaef,	// (0x0004eabd) bg_popup_window_pane_g4_ParamLimits

0xdaef,	// (0x0004eabd) bg_popup_window_pane_g4

0xdafe,	// (0x0004eacc) bg_popup_window_pane_g5_ParamLimits

0xdafe,	// (0x0004eacc) bg_popup_window_pane_g5

0xdb0e,	// (0x0004eadc) bg_popup_window_pane_g6_ParamLimits

0xdb0e,	// (0x0004eadc) bg_popup_window_pane_g6

0xdb1a,	// (0x0004eae8) bg_popup_window_pane_g7_ParamLimits

0xdb1a,	// (0x0004eae8) bg_popup_window_pane_g7

0xdb29,	// (0x0004eaf7) bg_popup_window_pane_g8_ParamLimits

0xdb29,	// (0x0004eaf7) bg_popup_window_pane_g8

0xdb38,	// (0x0004eb06) bg_popup_window_pane_g9_ParamLimits

0xdb38,	// (0x0004eb06) bg_popup_window_pane_g9

0x5f60,	// (0x00046f2e) bg_popup_window_pane_g10_ParamLimits

0x5f60,	// (0x00046f2e) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0005087e) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0005087e) bg_popup_window_pane_g

0x5e89,	// (0x00046e57) bg_popup_heading_pane_ParamLimits

0x5e89,	// (0x00046e57) bg_popup_heading_pane

0x20f2,	// (0x000430c0) tabs_4_passive_pane_cp_srt_ParamLimits

0x20f2,	// (0x000430c0) tabs_4_passive_pane_cp_srt

0x2104,	// (0x000430d2) tabs_4_passive_pane_srt_ParamLimits

0x5e9d,	// (0x00046e6b) heading_pane_g2

0x2104,	// (0x000430d2) tabs_4_passive_pane_srt

0x51fa,	// (0x000461c8) bg_passive_tab_pane_cp3_srt_ParamLimits

0x51fa,	// (0x000461c8) bg_passive_tab_pane_cp3_srt

0x5ea5,	// (0x00046e73) heading_pane_t1_ParamLimits

0x5ea5,	// (0x00046e73) heading_pane_t1

0x5ebc,	// (0x00046e8a) heading_pane_t2_ParamLimits

0x5ebc,	// (0x00046e8a) heading_pane_t2

0x0001,

0xf8ab,	// (0x00050879) heading_pane_t_ParamLimits

0xf8ab,	// (0x00050879) heading_pane_t

0x59b6,	// (0x00046984) bg_popup_heading_pane_g1

0x5a65,	// (0x00046a33) bg_popup_heading_pane_g2

0x5a6f,	// (0x00046a3d) bg_popup_heading_pane_g3

0x5a79,	// (0x00046a47) bg_popup_heading_pane_g4

0x5a83,	// (0x00046a51) bg_popup_heading_pane_g5

0x5a8d,	// (0x00046a5b) bg_popup_heading_pane_g6

0x5a95,	// (0x00046a63) bg_popup_heading_pane_g7

0x5a9d,	// (0x00046a6b) bg_popup_heading_pane_g8

0x5aa7,	// (0x00046a75) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x00050835) bg_popup_heading_pane_g

0x5186,	// (0x00046154) bg_popup_sub_pane_g1

0x518e,	// (0x0004615c) bg_popup_sub_pane_g2

0x5196,	// (0x00046164) bg_popup_sub_pane_g3

0x519e,	// (0x0004616c) bg_popup_sub_pane_g4

0x51a6,	// (0x00046174) bg_popup_sub_pane_g5

0x51ae,	// (0x0004617c) bg_popup_sub_pane_g6

0x51b6,	// (0x00046184) bg_popup_sub_pane_g7

0x51be,	// (0x0004618c) bg_popup_sub_pane_g8

0x51c6,	// (0x00046194) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0005080f) bg_popup_sub_pane_g

0x367b,	// (0x00044649) bg_popup_window_pane_cp5_ParamLimits

0x367b,	// (0x00044649) bg_popup_window_pane_cp5

0x3697,	// (0x00044665) popup_note_window_g1_ParamLimits

0x3697,	// (0x00044665) popup_note_window_g1

0x36a3,	// (0x00044671) popup_note_window_t1_ParamLimits

0x36a3,	// (0x00044671) popup_note_window_t1

0x36b9,	// (0x00044687) popup_note_window_t2_ParamLimits

0x36b9,	// (0x00044687) popup_note_window_t2

0x36cf,	// (0x0004469d) popup_note_window_t3_ParamLimits

0x36cf,	// (0x0004469d) popup_note_window_t3

0x36e5,	// (0x000446b3) popup_note_window_t4_ParamLimits

0x36e5,	// (0x000446b3) popup_note_window_t4

0x370d,	// (0x000446db) popup_note_window_t5_ParamLimits

0x370d,	// (0x000446db) popup_note_window_t5

0x0004,

0xf55a,	// (0x00050528) popup_note_window_t_ParamLimits

0xf55a,	// (0x00050528) popup_note_window_t

0x3757,	// (0x00044725) bg_popup_window_pane_cp6_ParamLimits

0x3757,	// (0x00044725) bg_popup_window_pane_cp6

0x5932,	// (0x00046900) popup_note_image_window_g1_ParamLimits

0x5932,	// (0x00046900) popup_note_image_window_g1

0x593e,	// (0x0004690c) popup_note_image_window_g2_ParamLimits

0x593e,	// (0x0004690c) popup_note_image_window_g2

0x0001,

0xf835,	// (0x00050803) popup_note_image_window_g_ParamLimits

0xf835,	// (0x00050803) popup_note_image_window_g

0x5957,	// (0x00046925) popup_note_image_window_t1_ParamLimits

0x5957,	// (0x00046925) popup_note_image_window_t1

0x5970,	// (0x0004693e) popup_note_image_window_t2_ParamLimits

0x5970,	// (0x0004693e) popup_note_image_window_t2

0x5989,	// (0x00046957) popup_note_image_window_t3_ParamLimits

0x5989,	// (0x00046957) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x00050808) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x00050808) popup_note_image_window_t

0x57f3,	// (0x000467c1) bg_popup_window_pane_cp7_ParamLimits

0x57f3,	// (0x000467c1) bg_popup_window_pane_cp7

0x5823,	// (0x000467f1) popup_note_wait_window_g1_ParamLimits

0x5823,	// (0x000467f1) popup_note_wait_window_g1

0x582f,	// (0x000467fd) popup_note_wait_window_g2_ParamLimits

0x582f,	// (0x000467fd) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x000507f1) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x000507f1) popup_note_wait_window_g

0x5847,	// (0x00046815) popup_note_wait_window_t1_ParamLimits

0x5847,	// (0x00046815) popup_note_wait_window_t1

0x586e,	// (0x0004683c) popup_note_wait_window_t2_ParamLimits

0x586e,	// (0x0004683c) popup_note_wait_window_t2

0x588b,	// (0x00046859) popup_note_wait_window_t3_ParamLimits

0x588b,	// (0x00046859) popup_note_wait_window_t3

0x589e,	// (0x0004686c) popup_note_wait_window_t4_ParamLimits

0x589e,	// (0x0004686c) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x000507f8) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x000507f8) popup_note_wait_window_t

0x58c3,	// (0x00046891) wait_bar_pane_ParamLimits

0x58c3,	// (0x00046891) wait_bar_pane

0x3320,	// (0x000442ee) wait_anim_pane

0x3320,	// (0x000442ee) wait_border_pane

0xe163,	// (0x0004f131) wait_anim_pane_g1

0xe163,	// (0x0004f131) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x000506b1) wait_anim_pane_g

0x5797,	// (0x00046765) wait_border_pane_g1

0x57a2,	// (0x00046770) wait_border_pane_g2

0x57ab,	// (0x00046779) wait_border_pane_g3

0x0002,

0xf81c,	// (0x000507ea) wait_border_pane_g

0x5602,	// (0x000465d0) bg_popup_window_pane_cp16_ParamLimits

0x5602,	// (0x000465d0) bg_popup_window_pane_cp16

0x5702,	// (0x000466d0) indicator_popup_pane_cp4_ParamLimits

0x5702,	// (0x000466d0) indicator_popup_pane_cp4

0x5716,	// (0x000466e4) popup_query_data_window_t1_ParamLimits

0x5716,	// (0x000466e4) popup_query_data_window_t1

0x5728,	// (0x000466f6) popup_query_data_window_t2_ParamLimits

0x5728,	// (0x000466f6) popup_query_data_window_t2

0x5741,	// (0x0004670f) popup_query_data_window_t3_ParamLimits

0x5741,	// (0x0004670f) popup_query_data_window_t3

0x0002,

0xf815,	// (0x000507e3) popup_query_data_window_t_ParamLimits

0xf815,	// (0x000507e3) popup_query_data_window_t

0x575b,	// (0x00046729) query_popup_data_pane_ParamLimits

0x575b,	// (0x00046729) query_popup_data_pane

0x576f,	// (0x0004673d) query_popup_data_pane_cp1_ParamLimits

0x576f,	// (0x0004673d) query_popup_data_pane_cp1

0x5602,	// (0x000465d0) bg_popup_window_pane_cp10_ParamLimits

0x5602,	// (0x000465d0) bg_popup_window_pane_cp10

0x5634,	// (0x00046602) indicator_popup_pane_ParamLimits

0x5634,	// (0x00046602) indicator_popup_pane

0x5656,	// (0x00046624) popup_query_code_window_t1_ParamLimits

0x5656,	// (0x00046624) popup_query_code_window_t1

0x5670,	// (0x0004663e) popup_query_code_window_t2_ParamLimits

0x5670,	// (0x0004663e) popup_query_code_window_t2

0x56b9,	// (0x00046687) popup_query_code_window_t3_ParamLimits

0x56b9,	// (0x00046687) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x000507dc) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x000507dc) popup_query_code_window_t

0x56e8,	// (0x000466b6) query_popup_pane_ParamLimits

0x56e8,	// (0x000466b6) query_popup_pane

0x3757,	// (0x00044725) bg_popup_window_pane_cp15_ParamLimits

0x3757,	// (0x00044725) bg_popup_window_pane_cp15

0x3775,	// (0x00044743) indicator_popup_pane_cp1_ParamLimits

0x3775,	// (0x00044743) indicator_popup_pane_cp1

0x3788,	// (0x00044756) indicator_popup_pane_cp2_ParamLimits

0x3788,	// (0x00044756) indicator_popup_pane_cp2

0x379b,	// (0x00044769) popup_query_data_code_window_g1_ParamLimits

0x379b,	// (0x00044769) popup_query_data_code_window_g1

0x37ae,	// (0x0004477c) popup_query_data_code_window_t1_ParamLimits

0x37ae,	// (0x0004477c) popup_query_data_code_window_t1

0x37c0,	// (0x0004478e) popup_query_data_code_window_t2_ParamLimits

0x37c0,	// (0x0004478e) popup_query_data_code_window_t2

0x37d2,	// (0x000447a0) popup_query_data_code_window_t3_ParamLimits

0x37d2,	// (0x000447a0) popup_query_data_code_window_t3

0x37e8,	// (0x000447b6) popup_query_data_code_window_t4_ParamLimits

0x37e8,	// (0x000447b6) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00050533) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00050533) popup_query_data_code_window_t

0x1d30,	// (0x00042cfe) list_single_midp_graphic_pane_g3

0x3800,	// (0x000447ce) query_popup_data_pane_cp2_ParamLimits

0x3813,	// (0x000447e1) query_popup_pane_cp2_ParamLimits

0x3813,	// (0x000447e1) query_popup_pane_cp2

0x3320,	// (0x000442ee) bg_popup_window_pane_cp11

0x55e6,	// (0x000465b4) heading_pane_cp5

0x55ee,	// (0x000465bc) listscroll_popup_info_pane

0x3320,	// (0x000442ee) input_focus_pane_cp3

0x3826,	// (0x000447f4) query_popup_pane_t1

0x3834,	// (0x00044802) list_popup_info_pane_ParamLimits

0x3834,	// (0x00044802) list_popup_info_pane

0x3843,	// (0x00044811) listscroll_popup_info_pane_g1

0x384b,	// (0x00044819) scroll_pane_cp7

0x3855,	// (0x00044823) popup_info_list_pane_t1_ParamLimits

0x3855,	// (0x00044823) popup_info_list_pane_t1

0x386f,	// (0x0004483d) popup_info_list_pane_t2_ParamLimits

0x386f,	// (0x0004483d) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0005053c) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0005053c) popup_info_list_pane_t

0x3320,	// (0x000442ee) bg_popup_window_pane_cp12

0x6975,	// (0x00047943) find_popup_pane

0x3400,	// (0x000443ce) bg_popup_window_pane_cp3

0x3889,	// (0x00044857) heading_pane_cp3

0x3898,	// (0x00044866) listscroll_popup_graphic_pane

0x3320,	// (0x000442ee) bg_popup_window_pane_cp4

0xc1a2,	// (0x0004d170) heading_pane_cp4

0x3902,	// (0x000448d0) listscroll_popup_colour_pane

0xc1ac,	// (0x0004d17a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc1ac,	// (0x0004d17a) cell_large_graphic_colour_none_popup_pane

0xc1c0,	// (0x0004d18e) grid_large_graphic_colour_popup_pane_ParamLimits

0xc1c0,	// (0x0004d18e) grid_large_graphic_colour_popup_pane

0xc1e4,	// (0x0004d1b2) listscroll_popup_colour_pane_g1_ParamLimits

0xc1e4,	// (0x0004d1b2) listscroll_popup_colour_pane_g1

0xc1fb,	// (0x0004d1c9) listscroll_popup_colour_pane_g2_ParamLimits

0xc1fb,	// (0x0004d1c9) listscroll_popup_colour_pane_g2

0xc212,	// (0x0004d1e0) listscroll_popup_colour_pane_g3_ParamLimits

0xc212,	// (0x0004d1e0) listscroll_popup_colour_pane_g3

0xc222,	// (0x0004d1f0) listscroll_popup_colour_pane_g4_ParamLimits

0xc222,	// (0x0004d1f0) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00050541) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00050541) listscroll_popup_colour_pane_g

0x3990,	// (0x0004495e) scroll_pane_cp6_ParamLimits

0x3990,	// (0x0004495e) scroll_pane_cp6

0xc232,	// (0x0004d200) cell_large_graphic_colour_popup_pane_ParamLimits

0xc232,	// (0x0004d200) cell_large_graphic_colour_popup_pane

0x39c1,	// (0x0004498f) cell_large_graphic_colour_none_popup_pane_t1

0x3320,	// (0x000442ee) grid_highlight_pane_cp5

0x39d0,	// (0x0004499e) cell_large_graphic_colour_popup_pane_g1

0x39d8,	// (0x000449a6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0005054a) cell_large_graphic_colour_popup_pane_g

0x39e0,	// (0x000449ae) cell_large_graphic_colour_popup_pane_g2_copy1

0x39e9,	// (0x000449b7) grid_highlight_pane_cp4

0x39f1,	// (0x000449bf) bg_popup_window_pane_cp8_ParamLimits

0x39f1,	// (0x000449bf) bg_popup_window_pane_cp8

0x3a0c,	// (0x000449da) popup_snote_single_text_window_g1_ParamLimits

0x3a0c,	// (0x000449da) popup_snote_single_text_window_g1

0x3a1e,	// (0x000449ec) popup_snote_single_text_window_t1_ParamLimits

0x3a1e,	// (0x000449ec) popup_snote_single_text_window_t1

0x3a31,	// (0x000449ff) popup_snote_single_text_window_t2_ParamLimits

0x3a31,	// (0x000449ff) popup_snote_single_text_window_t2

0x3a44,	// (0x00044a12) popup_snote_single_text_window_t3_ParamLimits

0x3a44,	// (0x00044a12) popup_snote_single_text_window_t3

0x3a7d,	// (0x00044a4b) popup_snote_single_text_window_t4_ParamLimits

0x3a7d,	// (0x00044a4b) popup_snote_single_text_window_t4

0x3ab1,	// (0x00044a7f) popup_snote_single_text_window_t5_ParamLimits

0x3ab1,	// (0x00044a7f) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0005054f) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0005054f) popup_snote_single_text_window_t

0x3ae0,	// (0x00044aae) bg_popup_window_pane_cp9_ParamLimits

0x3ae0,	// (0x00044aae) bg_popup_window_pane_cp9

0x3a0c,	// (0x000449da) popup_snote_single_graphic_window_g1_ParamLimits

0x3a0c,	// (0x000449da) popup_snote_single_graphic_window_g1

0x3aee,	// (0x00044abc) popup_snote_single_graphic_window_g2_ParamLimits

0x3aee,	// (0x00044abc) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0005055a) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0005055a) popup_snote_single_graphic_window_g

0x3afa,	// (0x00044ac8) popup_snote_single_graphic_window_t1_ParamLimits

0x3afa,	// (0x00044ac8) popup_snote_single_graphic_window_t1

0x3b0d,	// (0x00044adb) popup_snote_single_graphic_window_t2_ParamLimits

0x3b0d,	// (0x00044adb) popup_snote_single_graphic_window_t2

0x3b20,	// (0x00044aee) popup_snote_single_graphic_window_t3_ParamLimits

0x3b20,	// (0x00044aee) popup_snote_single_graphic_window_t3

0x3b59,	// (0x00044b27) popup_snote_single_graphic_window_t4_ParamLimits

0x3b59,	// (0x00044b27) popup_snote_single_graphic_window_t4

0x3b8d,	// (0x00044b5b) popup_snote_single_graphic_window_t5_ParamLimits

0x3b8d,	// (0x00044b5b) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0005055f) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0005055f) popup_snote_single_graphic_window_t

0x68b7,	// (0x00047885) grid_graphic_popup_pane_ParamLimits

0x68b7,	// (0x00047885) grid_graphic_popup_pane

0x68e1,	// (0x000478af) listscroll_popup_graphic_pane_g1_ParamLimits

0x68e1,	// (0x000478af) listscroll_popup_graphic_pane_g1

0xde26,	// (0x0004edf4) listscroll_popup_graphic_pane_g2_ParamLimits

0xde26,	// (0x0004edf4) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x00050959) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x00050959) listscroll_popup_graphic_pane_g

0x6909,	// (0x000478d7) scroll_pane_cp5

0xdde3,	// (0x0004edb1) cell_graphic_popup_pane_ParamLimits

0xdde3,	// (0x0004edb1) cell_graphic_popup_pane

0x6829,	// (0x000477f7) cell_graphic_popup_pane_g1

0x6831,	// (0x000477ff) cell_graphic_popup_pane_g2

0x39e0,	// (0x000449ae) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x00050952) cell_graphic_popup_pane_g

0xddd5,	// (0x0004eda3) cell_graphic_popup_pane_t2

0x39e9,	// (0x000449b7) grid_highlight_pane_cp3

0x3bce,	// (0x00044b9c) list_gen_pane_ParamLimits

0x3bce,	// (0x00044b9c) list_gen_pane

0x3c00,	// (0x00044bce) scroll_pane

0xdd8c,	// (0x0004ed5a) bg_list_pane_g1_ParamLimits

0xdd8c,	// (0x0004ed5a) bg_list_pane_g1

0x679e,	// (0x0004776c) bg_list_pane_g2_ParamLimits

0x679e,	// (0x0004776c) bg_list_pane_g2

0x67b3,	// (0x00047781) bg_list_pane_g3_ParamLimits

0x67b3,	// (0x00047781) bg_list_pane_g3

0x67c7,	// (0x00047795) bg_list_pane_g4_ParamLimits

0x67c7,	// (0x00047795) bg_list_pane_g4

0xdda9,	// (0x0004ed77) bg_list_pane_g5_ParamLimits

0xdda9,	// (0x0004ed77) bg_list_pane_g5

0x0004,

0xf979,	// (0x00050947) bg_list_pane_g_ParamLimits

0xf979,	// (0x00050947) bg_list_pane_g

0xdd55,	// (0x0004ed23) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd55,	// (0x0004ed23) list_double2_graphic_large_graphic_pane

0xdd55,	// (0x0004ed23) list_double2_graphic_pane_ParamLimits

0xdd55,	// (0x0004ed23) list_double2_graphic_pane

0xdd55,	// (0x0004ed23) list_double2_large_graphic_pane_ParamLimits

0xdd55,	// (0x0004ed23) list_double2_large_graphic_pane

0xdd55,	// (0x0004ed23) list_double2_pane_ParamLimits

0xdd55,	// (0x0004ed23) list_double2_pane

0xdd55,	// (0x0004ed23) list_double_graphic_heading_pane_ParamLimits

0xdd55,	// (0x0004ed23) list_double_graphic_heading_pane

0xdd55,	// (0x0004ed23) list_double_graphic_pane_ParamLimits

0xdd55,	// (0x0004ed23) list_double_graphic_pane

0xdd55,	// (0x0004ed23) list_double_heading_pane_ParamLimits

0xdd55,	// (0x0004ed23) list_double_heading_pane

0xdd55,	// (0x0004ed23) list_double_large_graphic_pane_ParamLimits

0xdd55,	// (0x0004ed23) list_double_large_graphic_pane

0xdd55,	// (0x0004ed23) list_double_number_pane_ParamLimits

0xdd55,	// (0x0004ed23) list_double_number_pane

0xdd55,	// (0x0004ed23) list_double_pane_ParamLimits

0xdd55,	// (0x0004ed23) list_double_pane

0xdd55,	// (0x0004ed23) list_double_time_pane_ParamLimits

0xdd55,	// (0x0004ed23) list_double_time_pane

0xdd55,	// (0x0004ed23) list_setting_number_pane_ParamLimits

0xdd55,	// (0x0004ed23) list_setting_number_pane

0xdd55,	// (0x0004ed23) list_setting_pane_ParamLimits

0xdd55,	// (0x0004ed23) list_setting_pane

0xdd67,	// (0x0004ed35) list_single_2graphic_pane_ParamLimits

0xdd67,	// (0x0004ed35) list_single_2graphic_pane

0xdd67,	// (0x0004ed35) list_single_graphic_heading_pane_ParamLimits

0xdd67,	// (0x0004ed35) list_single_graphic_heading_pane

0xdd67,	// (0x0004ed35) list_single_graphic_pane_ParamLimits

0xdd67,	// (0x0004ed35) list_single_graphic_pane

0xdd67,	// (0x0004ed35) list_single_heading_pane_ParamLimits

0xdd67,	// (0x0004ed35) list_single_heading_pane

0xdd67,	// (0x0004ed35) list_single_large_graphic_pane_ParamLimits

0xdd67,	// (0x0004ed35) list_single_large_graphic_pane

0xdd67,	// (0x0004ed35) list_single_number_heading_pane_ParamLimits

0xdd67,	// (0x0004ed35) list_single_number_heading_pane

0xdd67,	// (0x0004ed35) list_single_number_pane_ParamLimits

0xdd67,	// (0x0004ed35) list_single_number_pane

0xdd67,	// (0x0004ed35) list_single_pane_ParamLimits

0xdd67,	// (0x0004ed35) list_single_pane

0x3320,	// (0x000442ee) list_highlight_pane_cp1

0x4434,	// (0x00045402) list_single_pane_g1_ParamLimits

0x4434,	// (0x00045402) list_single_pane_g1

0x1084,	// (0x00042052) list_single_pane_g2_ParamLimits

0x1084,	// (0x00042052) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0005057b) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0005057b) list_single_pane_g

0x0643,	// (0x00041611) list_single_pane_t1_ParamLimits

0x0643,	// (0x00041611) list_single_pane_t1

0x4434,	// (0x00045402) list_single_number_pane_g1_ParamLimits

0x4434,	// (0x00045402) list_single_number_pane_g1

0x1084,	// (0x00042052) list_single_number_pane_g2_ParamLimits

0x1084,	// (0x00042052) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0005057b) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0005057b) list_single_number_pane_g

0x051e,	// (0x000414ec) list_single_number_pane_t1_ParamLimits

0x051e,	// (0x000414ec) list_single_number_pane_t1

0x0601,	// (0x000415cf) list_single_number_pane_t2_ParamLimits

0x0601,	// (0x000415cf) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x00050908) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x00050908) list_single_number_pane_t

0xf448,	// (0x00050416) list_single_graphic_pane_g1_ParamLimits

0xf448,	// (0x00050416) list_single_graphic_pane_g1

0x4434,	// (0x00045402) list_single_graphic_pane_g2_ParamLimits

0x4434,	// (0x00045402) list_single_graphic_pane_g2

0x1084,	// (0x00042052) list_single_graphic_pane_g3_ParamLimits

0x1084,	// (0x00042052) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0005056a) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0005056a) list_single_graphic_pane_g

0xf454,	// (0x00050422) list_single_graphic_pane_t1_ParamLimits

0xf454,	// (0x00050422) list_single_graphic_pane_t1

0xf46a,	// (0x00050438) list_single_heading_pane_g1_ParamLimits

0xf46a,	// (0x00050438) list_single_heading_pane_g1

0x1084,	// (0x00042052) list_single_heading_pane_g2_ParamLimits

0x1084,	// (0x00042052) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00050571) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00050571) list_single_heading_pane_g

0xf47d,	// (0x0005044b) list_single_heading_pane_t1_ParamLimits

0xf47d,	// (0x0005044b) list_single_heading_pane_t1

0x1090,	// (0x0004205e) list_single_heading_pane_t2_ParamLimits

0x1090,	// (0x0004205e) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00050576) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00050576) list_single_heading_pane_t

0x4434,	// (0x00045402) list_single_number_heading_pane_g1_ParamLimits

0x4434,	// (0x00045402) list_single_number_heading_pane_g1

0x1084,	// (0x00042052) list_single_number_heading_pane_g2_ParamLimits

0x1084,	// (0x00042052) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0005057b) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0005057b) list_single_number_heading_pane_g

0xf493,	// (0x00050461) list_single_number_heading_pane_t1_ParamLimits

0xf493,	// (0x00050461) list_single_number_heading_pane_t1

0xf4a9,	// (0x00050477) list_single_number_heading_pane_t2_ParamLimits

0xf4a9,	// (0x00050477) list_single_number_heading_pane_t2

0xf4bb,	// (0x00050489) list_single_number_heading_pane_t3_ParamLimits

0xf4bb,	// (0x00050489) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00050580) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00050580) list_single_number_heading_pane_t

0xf4cd,	// (0x0005049b) list_single_graphic_heading_pane_g1_ParamLimits

0xf4cd,	// (0x0005049b) list_single_graphic_heading_pane_g1

0xc25b,	// (0x0004d229) list_single_graphic_heading_pane_g4_ParamLimits

0xc25b,	// (0x0004d229) list_single_graphic_heading_pane_g4

0x1084,	// (0x00042052) list_single_graphic_heading_pane_g5_ParamLimits

0x1084,	// (0x00042052) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00050587) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00050587) list_single_graphic_heading_pane_g

0xf493,	// (0x00050461) list_single_graphic_heading_pane_t1_ParamLimits

0xf493,	// (0x00050461) list_single_graphic_heading_pane_t1

0xf4e5,	// (0x000504b3) list_single_graphic_heading_pane_t2_ParamLimits

0xf4e5,	// (0x000504b3) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0005058e) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0005058e) list_single_graphic_heading_pane_t

0x2197,	// (0x00043165) list_single_large_graphic_pane_g1_ParamLimits

0x2197,	// (0x00043165) list_single_large_graphic_pane_g1

0x4434,	// (0x00045402) list_single_large_graphic_pane_g2_ParamLimits

0x4434,	// (0x00045402) list_single_large_graphic_pane_g2

0x1084,	// (0x00042052) list_single_large_graphic_pane_g3_ParamLimits

0x1084,	// (0x00042052) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00050593) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00050593) list_single_large_graphic_pane_g

0x57a2,	// (0x00046770) wait_border_pane_g2_copy1

0xc26c,	// (0x0004d23a) list_single_large_graphic_pane_g4_cp2

0x072a,	// (0x000416f8) list_single_large_graphic_pane_t1_ParamLimits

0x072a,	// (0x000416f8) list_single_large_graphic_pane_t1

0x3c34,	// (0x00044c02) list_double_pane_g1_ParamLimits

0x3c34,	// (0x00044c02) list_double_pane_g1

0x10e6,	// (0x000420b4) list_double_pane_g2_ParamLimits

0x10e6,	// (0x000420b4) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0005059a) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0005059a) list_double_pane_g

0xb67e,	// (0x0004c64c) list_double_pane_t1_ParamLimits

0xb67e,	// (0x0004c64c) list_double_pane_t1

0xb694,	// (0x0004c662) list_double_pane_t2_ParamLimits

0xb694,	// (0x0004c662) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0005059f) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0005059f) list_double_pane_t

0xb6a6,	// (0x0004c674) list_double2_pane_g1_ParamLimits

0xb6a6,	// (0x0004c674) list_double2_pane_g1

0x00b0,	// (0x0004107e) list_double2_pane_g2_ParamLimits

0x00b0,	// (0x0004107e) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x000505a4) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x000505a4) list_double2_pane_g

0xb6b7,	// (0x0004c685) list_double2_pane_t1_ParamLimits

0xb6b7,	// (0x0004c685) list_double2_pane_t1

0xb6cd,	// (0x0004c69b) list_double2_pane_t2_ParamLimits

0xb6cd,	// (0x0004c69b) list_double2_pane_t2

0x0001,

0xf5db,	// (0x000505a9) list_double2_pane_t_ParamLimits

0xf5db,	// (0x000505a9) list_double2_pane_t

0x3c34,	// (0x00044c02) list_double_number_pane_g1_ParamLimits

0x3c34,	// (0x00044c02) list_double_number_pane_g1

0x10e6,	// (0x000420b4) list_double_number_pane_g2_ParamLimits

0x10e6,	// (0x000420b4) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0005059a) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0005059a) list_double_number_pane_g

0xb6df,	// (0x0004c6ad) list_double_number_pane_t1_ParamLimits

0xb6df,	// (0x0004c6ad) list_double_number_pane_t1

0xf507,	// (0x000504d5) list_double_number_pane_t2_ParamLimits

0xf507,	// (0x000504d5) list_double_number_pane_t2

0xb6f1,	// (0x0004c6bf) list_double_number_pane_t3_ParamLimits

0xb6f1,	// (0x0004c6bf) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x000505ae) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x000505ae) list_double_number_pane_t

0xf51d,	// (0x000504eb) list_double_graphic_pane_g1_ParamLimits

0xf51d,	// (0x000504eb) list_double_graphic_pane_g1

0xb703,	// (0x0004c6d1) list_double_graphic_pane_g2_ParamLimits

0xb703,	// (0x0004c6d1) list_double_graphic_pane_g2

0xb712,	// (0x0004c6e0) list_double_graphic_pane_g3_ParamLimits

0xb712,	// (0x0004c6e0) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x000505b5) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x000505b5) list_double_graphic_pane_g

0xb72a,	// (0x0004c6f8) list_double_graphic_pane_t1_ParamLimits

0xb72a,	// (0x0004c6f8) list_double_graphic_pane_t1

0xb740,	// (0x0004c70e) list_double_graphic_pane_t2_ParamLimits

0xb740,	// (0x0004c70e) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x000505be) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x000505be) list_double_graphic_pane_t

0xb752,	// (0x0004c720) list_double2_graphic_pane_g1_ParamLimits

0xb752,	// (0x0004c720) list_double2_graphic_pane_g1

0x6695,	// (0x00047663) list_double2_graphic_pane_g2_ParamLimits

0x6695,	// (0x00047663) list_double2_graphic_pane_g2

0xb75e,	// (0x0004c72c) list_double2_graphic_pane_g3_ParamLimits

0xb75e,	// (0x0004c72c) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x000505c3) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x000505c3) list_double2_graphic_pane_g

0xb76a,	// (0x0004c738) list_double2_graphic_pane_t1_ParamLimits

0xb76a,	// (0x0004c738) list_double2_graphic_pane_t1

0xb780,	// (0x0004c74e) list_double2_graphic_pane_t2_ParamLimits

0xb780,	// (0x0004c74e) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x000505ca) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x000505ca) list_double2_graphic_pane_t

0xb792,	// (0x0004c760) list_double_large_graphic_pane_g1_ParamLimits

0xb792,	// (0x0004c760) list_double_large_graphic_pane_g1

0xb7b1,	// (0x0004c77f) list_double_large_graphic_pane_g2_ParamLimits

0xb7b1,	// (0x0004c77f) list_double_large_graphic_pane_g2

0x10e6,	// (0x000420b4) list_double_large_graphic_pane_g3_ParamLimits

0x10e6,	// (0x000420b4) list_double_large_graphic_pane_g3

0xb7c7,	// (0x0004c795) list_double_large_graphic_pane_g4_ParamLimits

0xb7c7,	// (0x0004c795) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x000505cf) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x000505cf) list_double_large_graphic_pane_g

0xb7da,	// (0x0004c7a8) list_double_large_graphic_pane_t1_ParamLimits

0xb7da,	// (0x0004c7a8) list_double_large_graphic_pane_t1

0xb7f3,	// (0x0004c7c1) list_double_large_graphic_pane_t2_ParamLimits

0xb7f3,	// (0x0004c7c1) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x000505da) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x000505da) list_double_large_graphic_pane_t

0xc274,	// (0x0004d242) list_double2_large_graphic_pane_g1_ParamLimits

0xc274,	// (0x0004d242) list_double2_large_graphic_pane_g1

0xb805,	// (0x0004c7d3) list_double2_large_graphic_pane_g2_ParamLimits

0xb805,	// (0x0004c7d3) list_double2_large_graphic_pane_g2

0xb75e,	// (0x0004c72c) list_double2_large_graphic_pane_g3_ParamLimits

0xb75e,	// (0x0004c72c) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x000505df) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x000505df) list_double2_large_graphic_pane_g

0xb816,	// (0x0004c7e4) list_double2_large_graphic_pane_t1_ParamLimits

0xb816,	// (0x0004c7e4) list_double2_large_graphic_pane_t1

0xb82c,	// (0x0004c7fa) list_double2_large_graphic_pane_t2_ParamLimits

0xb82c,	// (0x0004c7fa) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x000505e6) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x000505e6) list_double2_large_graphic_pane_t

0xb83e,	// (0x0004c80c) list_double_heading_pane_g1_ParamLimits

0xb83e,	// (0x0004c80c) list_double_heading_pane_g1

0xb84f,	// (0x0004c81d) list_double_heading_pane_g2_ParamLimits

0xb84f,	// (0x0004c81d) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x000505eb) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x000505eb) list_double_heading_pane_g

0xb85b,	// (0x0004c829) list_double_heading_pane_t1_ParamLimits

0xb85b,	// (0x0004c829) list_double_heading_pane_t1

0xb6cd,	// (0x0004c69b) list_double_heading_pane_t2_ParamLimits

0xb6cd,	// (0x0004c69b) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x000505f0) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x000505f0) list_double_heading_pane_t

0x0019,	// (0x00040fe7) list_double_graphic_heading_pane_g1_ParamLimits

0x0019,	// (0x00040fe7) list_double_graphic_heading_pane_g1

0xb83e,	// (0x0004c80c) list_double_graphic_heading_pane_g2_ParamLimits

0xb83e,	// (0x0004c80c) list_double_graphic_heading_pane_g2

0xb84f,	// (0x0004c81d) list_double_graphic_heading_pane_g3_ParamLimits

0xb84f,	// (0x0004c81d) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x000505f5) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x000505f5) list_double_graphic_heading_pane_g

0xb871,	// (0x0004c83f) list_double_graphic_heading_pane_t1_ParamLimits

0xb871,	// (0x0004c83f) list_double_graphic_heading_pane_t1

0xb780,	// (0x0004c74e) list_double_graphic_heading_pane_t2_ParamLimits

0xb780,	// (0x0004c74e) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x000505fc) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x000505fc) list_double_graphic_heading_pane_t

0xb887,	// (0x0004c855) list_double_time_pane_g1_ParamLimits

0xb887,	// (0x0004c855) list_double_time_pane_g1

0xf4fb,	// (0x000504c9) list_double_time_pane_g2_ParamLimits

0xf4fb,	// (0x000504c9) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00050601) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00050601) list_double_time_pane_g

0xb898,	// (0x0004c866) list_double_time_pane_t1_ParamLimits

0xb898,	// (0x0004c866) list_double_time_pane_t1

0xb8ae,	// (0x0004c87c) list_double_time_pane_t2_ParamLimits

0xb8ae,	// (0x0004c87c) list_double_time_pane_t2

0xb8c0,	// (0x0004c88e) list_double_time_pane_t3_ParamLimits

0xb8c0,	// (0x0004c88e) list_double_time_pane_t3

0xb8d2,	// (0x0004c8a0) list_double_time_pane_t4_ParamLimits

0xb8d2,	// (0x0004c8a0) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00050606) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00050606) list_double_time_pane_t

0x00a4,	// (0x00041072) list_setting_pane_g1_ParamLimits

0x00a4,	// (0x00041072) list_setting_pane_g1

0x00b0,	// (0x0004107e) list_setting_pane_g2_ParamLimits

0x00b0,	// (0x0004107e) list_setting_pane_g2

0x0001,

0xf641,	// (0x0005060f) list_setting_pane_g_ParamLimits

0xf641,	// (0x0005060f) list_setting_pane_g

0xb8e4,	// (0x0004c8b2) list_setting_pane_t1_ParamLimits

0xb8e4,	// (0x0004c8b2) list_setting_pane_t1

0xb8fe,	// (0x0004c8cc) list_setting_pane_t2_ParamLimits

0xb8fe,	// (0x0004c8cc) list_setting_pane_t2

0x0002,

0xf646,	// (0x00050614) list_setting_pane_t_ParamLimits

0xf646,	// (0x00050614) list_setting_pane_t

0xb93d,	// (0x0004c90b) set_value_pane_cp_ParamLimits

0xb93d,	// (0x0004c90b) set_value_pane_cp

0x0121,	// (0x000410ef) list_setting_number_pane_g1_ParamLimits

0x0121,	// (0x000410ef) list_setting_number_pane_g1

0x012d,	// (0x000410fb) list_setting_number_pane_g2_ParamLimits

0x012d,	// (0x000410fb) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0005061b) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0005061b) list_setting_number_pane_g

0xb949,	// (0x0004c917) list_setting_number_pane_t1_ParamLimits

0xb949,	// (0x0004c917) list_setting_number_pane_t1

0xb962,	// (0x0004c930) list_setting_number_pane_t2_ParamLimits

0xb962,	// (0x0004c930) list_setting_number_pane_t2

0xb97c,	// (0x0004c94a) list_setting_number_pane_t3_ParamLimits

0xb97c,	// (0x0004c94a) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00050620) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00050620) list_setting_number_pane_t

0xb93d,	// (0x0004c90b) set_value_pane_ParamLimits

0xb93d,	// (0x0004c90b) set_value_pane

0x3c40,	// (0x00044c0e) bg_set_opt_pane_ParamLimits

0x3c40,	// (0x00044c0e) bg_set_opt_pane

0x01af,	// (0x0004117d) set_value_pane_t1

0x3c61,	// (0x00044c2f) slider_set_pane_cp3

0x3c6a,	// (0x00044c38) volume_small_pane_cp

0x3c73,	// (0x00044c41) list_form_gen_pane

0x3c7c,	// (0x00044c4a) scroll_pane_cp8

0xb9bf,	// (0x0004c98d) form_field_data_pane_ParamLimits

0xb9bf,	// (0x0004c98d) form_field_data_pane

0xb9d8,	// (0x0004c9a6) form_field_data_wide_pane_ParamLimits

0xb9d8,	// (0x0004c9a6) form_field_data_wide_pane

0xb9f8,	// (0x0004c9c6) form_field_popup_pane_ParamLimits

0xb9f8,	// (0x0004c9c6) form_field_popup_pane

0xba10,	// (0x0004c9de) form_field_popup_wide_pane_ParamLimits

0xba10,	// (0x0004c9de) form_field_popup_wide_pane

0x024b,	// (0x00041219) form_field_slider_pane_ParamLimits

0x024b,	// (0x00041219) form_field_slider_pane

0x025e,	// (0x0004122c) form_field_slider_wide_pane_ParamLimits

0x025e,	// (0x0004122c) form_field_slider_wide_pane

0x3c8d,	// (0x00044c5b) data_form_pane

0xba39,	// (0x0004ca07) form_field_data_pane_t1

0x3c99,	// (0x00044c67) input_focus_pane

0x0293,	// (0x00041261) data_form_wide_pane

0x02b0,	// (0x0004127e) form_field_data_wide_pane_t1

0x39fe,	// (0x000449cc) input_focus_pane_cp6

0xba53,	// (0x0004ca21) form_field_popup_pane_t1

0x3c99,	// (0x00044c67) input_focus_pane_cp7

0x3cbb,	// (0x00044c89) list_form_pane

0x02f2,	// (0x000412c0) form_field_popup_wide_pane_t1

0x3c99,	// (0x00044c67) input_focus_pane_cp8

0x3cc7,	// (0x00044c95) list_form_wide_pane

0xba75,	// (0x0004ca43) form_field_slider_pane_t1_ParamLimits

0xba75,	// (0x0004ca43) form_field_slider_pane_t1

0xba8d,	// (0x0004ca5b) form_field_slider_pane_t2_ParamLimits

0xba8d,	// (0x0004ca5b) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00050630) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00050630) form_field_slider_pane_t

0x367b,	// (0x00044649) input_focus_pane_cp9_ParamLimits

0x367b,	// (0x00044649) input_focus_pane_cp9

0xbaa2,	// (0x0004ca70) slider_cont_pane_ParamLimits

0xbaa2,	// (0x0004ca70) slider_cont_pane

0x3cd3,	// (0x00044ca1) form_field_slider_wide_pane_t1_ParamLimits

0x3cd3,	// (0x00044ca1) form_field_slider_wide_pane_t1

0x034e,	// (0x0004131c) form_field_slider_wide_pane_t2_ParamLimits

0x034e,	// (0x0004131c) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00050635) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00050635) form_field_slider_wide_pane_t

0x367b,	// (0x00044649) input_focus_pane_cp10_ParamLimits

0x367b,	// (0x00044649) input_focus_pane_cp10

0xbab6,	// (0x0004ca84) slider_cont_pane_cp1_ParamLimits

0xbab6,	// (0x0004ca84) slider_cont_pane_cp1

0xbaca,	// (0x0004ca98) slider_form_pane_cp

0x3ce5,	// (0x00044cb3) input_focus_pane_g1

0x3ced,	// (0x00044cbb) input_focus_pane_g2

0x3cf5,	// (0x00044cc3) input_focus_pane_g3

0x3cfd,	// (0x00044ccb) input_focus_pane_g4

0x3d05,	// (0x00044cd3) input_focus_pane_g5

0x3d0d,	// (0x00044cdb) input_focus_pane_g6

0x3d15,	// (0x00044ce3) input_focus_pane_g7

0x3d1d,	// (0x00044ceb) input_focus_pane_g8

0x3d25,	// (0x00044cf3) input_focus_pane_g9

0xe163,	// (0x0004f131) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0005063a) input_focus_pane_g

0x57ab,	// (0x00046779) wait_border_pane_g3_copy1

0xbad2,	// (0x0004caa0) data_form_pane_t1

0xe163,	// (0x0004f131) wait_anim_pane_g1_copy1

0xbb3b,	// (0x0004cb09) data_form_wide_pane_t1

0xbaec,	// (0x0004caba) list_form_graphic_pane_cp_ParamLimits

0xbaec,	// (0x0004caba) list_form_graphic_pane_cp

0x66d7,	// (0x000476a5) slider_form_pane_g1

0x66e0,	// (0x000476ae) slider_form_pane_g2

0x0006,

0xf96a,	// (0x00050938) slider_form_pane_g

0xbaec,	// (0x0004caba) list_form_graphic_pane_ParamLimits

0xbaec,	// (0x0004caba) list_form_graphic_pane

0x03cc,	// (0x0004139a) list_form_graphic_pane_g1

0x03d4,	// (0x000413a2) list_form_graphic_pane_t1_ParamLimits

0x03d4,	// (0x000413a2) list_form_graphic_pane_t1

0x3400,	// (0x000443ce) list_highlight_pane_cp5_ParamLimits

0x3400,	// (0x000443ce) list_highlight_pane_cp5

0x03e9,	// (0x000413b7) find_pane_g1

0x3d2d,	// (0x00044cfb) input_find_pane

0x03f2,	// (0x000413c0) input_find_pane_g1_ParamLimits

0x03f2,	// (0x000413c0) input_find_pane_g1

0x03fe,	// (0x000413cc) input_find_pane_t1_ParamLimits

0x03fe,	// (0x000413cc) input_find_pane_t1

0x0413,	// (0x000413e1) input_find_pane_t2_ParamLimits

0x0413,	// (0x000413e1) input_find_pane_t2

0x0001,

0xf681,	// (0x0005064f) input_find_pane_t_ParamLimits

0xf681,	// (0x0005064f) input_find_pane_t

0x3d36,	// (0x00044d04) input_focus_pane_cp5_ParamLimits

0x3d36,	// (0x00044d04) input_focus_pane_cp5

0x3d55,	// (0x00044d23) bg_popup_window_pane_cp2_ParamLimits

0x3d55,	// (0x00044d23) bg_popup_window_pane_cp2

0x3d62,	// (0x00044d30) listscroll_menu_pane_ParamLimits

0x3d62,	// (0x00044d30) listscroll_menu_pane

0xd259,	// (0x0004e227) popup_submenu_window_ParamLimits

0xd259,	// (0x0004e227) popup_submenu_window

0x3d9a,	// (0x00044d68) find_popup_pane_g1

0x3da2,	// (0x00044d70) input_popup_find_pane_cp

0x3dac,	// (0x00044d7a) input_focus_pane_cp4_ParamLimits

0x3dac,	// (0x00044d7a) input_focus_pane_cp4

0x3dc6,	// (0x00044d94) input_popup_find_pane_t1_ParamLimits

0x3dc6,	// (0x00044d94) input_popup_find_pane_t1

0x3320,	// (0x000442ee) bg_popup_sub_pane_cp

0x3df4,	// (0x00044dc2) listscroll_popup_sub_pane

0x3dfc,	// (0x00044dca) list_submenu_pane_ParamLimits

0x3dfc,	// (0x00044dca) list_submenu_pane

0x3e0d,	// (0x00044ddb) scroll_pane_cp4

0x3e15,	// (0x00044de3) list_single_popup_submenu_pane_ParamLimits

0x3e15,	// (0x00044de3) list_single_popup_submenu_pane

0x3e29,	// (0x00044df7) list_single_popup_submenu_pane_g1

0x3e31,	// (0x00044dff) list_single_popup_submenu_pane_t1_ParamLimits

0x3e31,	// (0x00044dff) list_single_popup_submenu_pane_t1

0x367b,	// (0x00044649) bg_active_tab_pane_cp1_ParamLimits

0x367b,	// (0x00044649) bg_active_tab_pane_cp1

0x3e46,	// (0x00044e14) tabs_2_active_pane_g1

0xd293,	// (0x0004e261) tabs_2_active_pane_t1

0x367b,	// (0x00044649) bg_passive_tab_pane_cp1_ParamLimits

0x367b,	// (0x00044649) bg_passive_tab_pane_cp1

0x3e46,	// (0x00044e14) tabs_2_passive_pane_g1

0xd293,	// (0x0004e261) tabs_2_passive_pane_t1

0x3400,	// (0x000443ce) bg_active_tab_pane_cp4

0xd2a5,	// (0x0004e273) tabs_2_long_active_pane_t1

0x4c5c,	// (0x00045c2a) bg_passive_tab_pane_cp4

0x1d38,	// (0x00042d06) list_single_midp_graphic_pane_g4_ParamLimits

0x3400,	// (0x000443ce) bg_active_tab_pane_cp5

0xd2b8,	// (0x0004e286) tabs_3_long_active_pane_t1

0x4c5c,	// (0x00045c2a) bg_passive_tab_pane_cp5

0x1d38,	// (0x00042d06) list_single_midp_graphic_pane_g4

0x3400,	// (0x000443ce) bg_popup_window_pane_cp13_ParamLimits

0x3400,	// (0x000443ce) bg_popup_window_pane_cp13

0x3ea8,	// (0x00044e76) listscroll_popup_fast_pane_ParamLimits

0x3ea8,	// (0x00044e76) listscroll_popup_fast_pane

0x3eb7,	// (0x00044e85) grid_popup_fast_pane_ParamLimits

0x3eb7,	// (0x00044e85) grid_popup_fast_pane

0x3ec9,	// (0x00044e97) scroll_pane_cp9_ParamLimits

0x3ec9,	// (0x00044e97) scroll_pane_cp9

0x7ff4,	// (0x00048fc2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ff4,	// (0x00048fc2) list_single_graphic_hl_pane_t1_cp2

0x3eed,	// (0x00044ebb) input_focus_pane_cp20_ParamLimits

0x3eed,	// (0x00044ebb) input_focus_pane_cp20

0x3efb,	// (0x00044ec9) query_popup_data_pane_t1_ParamLimits

0x3efb,	// (0x00044ec9) query_popup_data_pane_t1

0x3f0e,	// (0x00044edc) query_popup_data_pane_t2_ParamLimits

0x3f0e,	// (0x00044edc) query_popup_data_pane_t2

0x3f54,	// (0x00044f22) query_popup_data_pane_t3_ParamLimits

0x3f54,	// (0x00044f22) query_popup_data_pane_t3

0x3f95,	// (0x00044f63) query_popup_data_pane_t4_ParamLimits

0x3f95,	// (0x00044f63) query_popup_data_pane_t4

0x3fd1,	// (0x00044f9f) query_popup_data_pane_t5_ParamLimits

0x3fd1,	// (0x00044f9f) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00050654) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00050654) query_popup_data_pane_t

0x3ce5,	// (0x00044cb3) bg_set_opt_pane_g1

0x3ced,	// (0x00044cbb) bg_set_opt_pane_g2

0x3cf5,	// (0x00044cc3) bg_set_opt_pane_g3

0x3cfd,	// (0x00044ccb) bg_set_opt_pane_g4

0x3d05,	// (0x00044cd3) bg_set_opt_pane_g5

0x3d0d,	// (0x00044cdb) bg_set_opt_pane_g6

0x3d15,	// (0x00044ce3) bg_set_opt_pane_g7

0x3d1d,	// (0x00044ceb) bg_set_opt_pane_g8

0x3d25,	// (0x00044cf3) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0005065f) bg_set_opt_pane_g

0x13c0,	// (0x0004238e) control_top_pane_stacon_ParamLimits

0x13c0,	// (0x0004238e) control_top_pane_stacon

0x1413,	// (0x000423e1) signal_pane_stacon_ParamLimits

0x1413,	// (0x000423e1) signal_pane_stacon

0x45cf,	// (0x0004559d) stacon_top_pane_g1_ParamLimits

0x45cf,	// (0x0004559d) stacon_top_pane_g1

0x1438,	// (0x00042406) title_pane_stacon_ParamLimits

0x1438,	// (0x00042406) title_pane_stacon

0x1462,	// (0x00042430) uni_indicator_pane_stacon_ParamLimits

0x1462,	// (0x00042430) uni_indicator_pane_stacon

0x1477,	// (0x00042445) battery_pane_stacon_ParamLimits

0x1477,	// (0x00042445) battery_pane_stacon

0x14bb,	// (0x00042489) control_bottom_pane_stacon_ParamLimits

0x14bb,	// (0x00042489) control_bottom_pane_stacon

0x14de,	// (0x000424ac) navi_pane_stacon_ParamLimits

0x14de,	// (0x000424ac) navi_pane_stacon

0x45f1,	// (0x000455bf) stacon_bottom_pane_g1_ParamLimits

0x45f1,	// (0x000455bf) stacon_bottom_pane_g1

0x1107,	// (0x000420d5) aid_levels_signal_lsc_ParamLimits

0x1107,	// (0x000420d5) aid_levels_signal_lsc

0x111d,	// (0x000420eb) signal_pane_stacon_g1_ParamLimits

0x111d,	// (0x000420eb) signal_pane_stacon_g1

0x1131,	// (0x000420ff) signal_pane_stacon_g2_ParamLimits

0x1131,	// (0x000420ff) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x00050672) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00050672) signal_pane_stacon_g

0x1166,	// (0x00042134) title_pane_stacon_t1_ParamLimits

0x1166,	// (0x00042134) title_pane_stacon_t1

0x4015,	// (0x00044fe3) uni_indicator_pane_stacon_g1

0x401f,	// (0x00044fed) uni_indicator_pane_stacon_g2

0x4029,	// (0x00044ff7) uni_indicator_pane_stacon_g3

0x4033,	// (0x00045001) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x0005067e) uni_indicator_pane_stacon_g

0x118b,	// (0x00042159) control_top_pane_stacon_g1

0x1193,	// (0x00042161) control_top_pane_stacon_t1_ParamLimits

0x1193,	// (0x00042161) control_top_pane_stacon_t1

0x11ca,	// (0x00042198) aid_levels_battery_lsc_ParamLimits

0x11ca,	// (0x00042198) aid_levels_battery_lsc

0x11e1,	// (0x000421af) battery_pane_stacon_g1_ParamLimits

0x11e1,	// (0x000421af) battery_pane_stacon_g1

0x11f4,	// (0x000421c2) battery_pane_stacon_g2_ParamLimits

0x11f4,	// (0x000421c2) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x00050687) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x00050687) battery_pane_stacon_g

0x1232,	// (0x00042200) navi_icon_pane_stacon

0x1246,	// (0x00042214) navi_navi_pane_stacon

0x1232,	// (0x00042200) navi_text_pane_stacon

0x118b,	// (0x00042159) control_bottom_pane_stacon_g1

0x125a,	// (0x00042228) control_bottom_pane_stacon_t1_ParamLimits

0x125a,	// (0x00042228) control_bottom_pane_stacon_t1

0xd2ca,	// (0x0004e298) grid_app_pane_ParamLimits

0xd2ca,	// (0x0004e298) grid_app_pane

0xd302,	// (0x0004e2d0) scroll_pane_cp15_ParamLimits

0xd302,	// (0x0004e2d0) scroll_pane_cp15

0xd317,	// (0x0004e2e5) cell_app_pane_ParamLimits

0xd317,	// (0x0004e2e5) cell_app_pane

0xd35c,	// (0x0004e32a) cell_app_pane_g1_ParamLimits

0xd35c,	// (0x0004e32a) cell_app_pane_g1

0x40d8,	// (0x000450a6) cell_app_pane_g2_ParamLimits

0x40d8,	// (0x000450a6) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0005068c) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0005068c) cell_app_pane_g

0xd380,	// (0x0004e34e) cell_app_pane_t1_ParamLimits

0xd380,	// (0x0004e34e) cell_app_pane_t1

0x40fb,	// (0x000450c9) grid_highlight_pane_ParamLimits

0x40fb,	// (0x000450c9) grid_highlight_pane

0x3ce5,	// (0x00044cb3) cell_highlight_pane_g1

0x3ced,	// (0x00044cbb) cell_highlight_pane_g2

0x3cf5,	// (0x00044cc3) cell_highlight_pane_g3

0x3cfd,	// (0x00044ccb) cell_highlight_pane_g4

0x3d05,	// (0x00044cd3) cell_highlight_pane_g5

0x3d0d,	// (0x00044cdb) cell_highlight_pane_g6

0x3d15,	// (0x00044ce3) cell_highlight_pane_g7

0x3d1d,	// (0x00044ceb) cell_highlight_pane_g8

0x3d25,	// (0x00044cf3) cell_highlight_pane_g9

0xe163,	// (0x0004f131) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0005063a) cell_highlight_pane_g

0x410c,	// (0x000450da) bg_scroll_pane

0x12a4,	// (0x00042272) scroll_handle_pane

0x4153,	// (0x00045121) scroll_bg_pane_g1

0x4168,	// (0x00045136) scroll_bg_pane_g2

0x4180,	// (0x0004514e) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00050691) scroll_bg_pane_g

0x4195,	// (0x00045163) scroll_handle_focus_pane_ParamLimits

0x4195,	// (0x00045163) scroll_handle_focus_pane

0x4153,	// (0x00045121) scroll_handle_pane_g1

0x41a2,	// (0x00045170) scroll_handle_pane_g2

0x4180,	// (0x0004514e) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x00050698) scroll_handle_pane_g

0x3dac,	// (0x00044d7a) bg_popup_sub_pane_cp21_ParamLimits

0x3dac,	// (0x00044d7a) bg_popup_sub_pane_cp21

0x41b6,	// (0x00045184) popup_fep_japan_predictive_window_t1_ParamLimits

0x41b6,	// (0x00045184) popup_fep_japan_predictive_window_t1

0x41d0,	// (0x0004519e) popup_fep_japan_predictive_window_t2_ParamLimits

0x41d0,	// (0x0004519e) popup_fep_japan_predictive_window_t2

0x4203,	// (0x000451d1) popup_fep_japan_predictive_window_t3_ParamLimits

0x4203,	// (0x000451d1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0005069f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0005069f) popup_fep_japan_predictive_window_t

0x3320,	// (0x000442ee) bg_popup_sub_pane_cp23

0x423a,	// (0x00045208) listscroll_japin_cand_pane

0x4242,	// (0x00045210) popup_fep_japan_candidate_window_t1

0x4250,	// (0x0004521e) candidate_pane_ParamLimits

0x4250,	// (0x0004521e) candidate_pane

0x4262,	// (0x00045230) scroll_pane_cp30

0x426a,	// (0x00045238) list_single_popup_jap_candidate_pane_ParamLimits

0x426a,	// (0x00045238) list_single_popup_jap_candidate_pane

0x3320,	// (0x000442ee) list_highlight_pane_cp30

0x427f,	// (0x0004524d) list_single_popup_jap_candidate_pane_t1

0x428e,	// (0x0004525c) level_1_signal

0x42a0,	// (0x0004526e) level_2_signal

0x42b3,	// (0x00045281) level_3_signal

0x42c6,	// (0x00045294) level_4_signal

0x42d9,	// (0x000452a7) level_5_signal

0x42ec,	// (0x000452ba) level_6_signal

0x42ff,	// (0x000452cd) level_7_signal

0x428e,	// (0x0004525c) level_1_battery

0x42a0,	// (0x0004526e) level_2_battery

0x42b3,	// (0x00045281) level_3_battery

0x42c6,	// (0x00045294) level_4_battery

0x42d9,	// (0x000452a7) level_5_battery

0x42ec,	// (0x000452ba) level_6_battery

0x42ff,	// (0x000452cd) level_7_battery

0x432a,	// (0x000452f8) list_menu_pane_ParamLimits

0x432a,	// (0x000452f8) list_menu_pane

0x4340,	// (0x0004530e) scroll_pane_cp25_ParamLimits

0x4340,	// (0x0004530e) scroll_pane_cp25

0x4359,	// (0x00045327) list_double2_graphic_pane_cp2_ParamLimits

0x4359,	// (0x00045327) list_double2_graphic_pane_cp2

0x4359,	// (0x00045327) list_double2_large_graphic_pane_cp2_ParamLimits

0x4359,	// (0x00045327) list_double2_large_graphic_pane_cp2

0x4359,	// (0x00045327) list_double2_pane_cp2_ParamLimits

0x4359,	// (0x00045327) list_double2_pane_cp2

0x4359,	// (0x00045327) list_double_graphic_pane_cp2_ParamLimits

0x4359,	// (0x00045327) list_double_graphic_pane_cp2

0x4359,	// (0x00045327) list_double_large_graphic_pane_cp2_ParamLimits

0x4359,	// (0x00045327) list_double_large_graphic_pane_cp2

0x4359,	// (0x00045327) list_double_number_pane_cp2_ParamLimits

0x4359,	// (0x00045327) list_double_number_pane_cp2

0x4359,	// (0x00045327) list_double_pane_cp2_ParamLimits

0x4359,	// (0x00045327) list_double_pane_cp2

0xd397,	// (0x0004e365) list_single_2graphic_pane_cp2_ParamLimits

0xd397,	// (0x0004e365) list_single_2graphic_pane_cp2

0xd397,	// (0x0004e365) list_single_graphic_heading_pane_cp2_ParamLimits

0xd397,	// (0x0004e365) list_single_graphic_heading_pane_cp2

0xd397,	// (0x0004e365) list_single_graphic_pane_cp2_ParamLimits

0xd397,	// (0x0004e365) list_single_graphic_pane_cp2

0xd397,	// (0x0004e365) list_single_heading_pane_cp2_ParamLimits

0xd397,	// (0x0004e365) list_single_heading_pane_cp2

0x4396,	// (0x00045364) list_single_large_graphic_pane_cp2_ParamLimits

0x4396,	// (0x00045364) list_single_large_graphic_pane_cp2

0xd397,	// (0x0004e365) list_single_number_heading_pane_cp2_ParamLimits

0xd397,	// (0x0004e365) list_single_number_heading_pane_cp2

0xd397,	// (0x0004e365) list_single_number_pane_cp2_ParamLimits

0xd397,	// (0x0004e365) list_single_number_pane_cp2

0xd397,	// (0x0004e365) list_single_pane_cp2_ParamLimits

0xd397,	// (0x0004e365) list_single_pane_cp2

0x4412,	// (0x000453e0) bg_popup_sub_pane_cp22

0x1356,	// (0x00042324) popup_side_volume_key_window_g1

0x1380,	// (0x0004234e) popup_side_volume_key_window_t1

0x139c,	// (0x0004236a) volume_small_pane_cp1

0x367b,	// (0x00044649) bg_popup_sub_pane_cp24_ParamLimits

0x367b,	// (0x00044649) bg_popup_sub_pane_cp24

0x4428,	// (0x000453f6) fep_china_uni_candidate_pane_ParamLimits

0x4428,	// (0x000453f6) fep_china_uni_candidate_pane

0x4448,	// (0x00045416) fep_china_uni_entry_pane

0x4458,	// (0x00045426) popup_fep_china_uni_window_g1

0x4474,	// (0x00045442) fep_china_uni_entry_pane_g1

0x447c,	// (0x0004544a) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x000506d0) fep_china_uni_entry_pane_g

0x4484,	// (0x00045452) fep_entry_item_pane

0x448e,	// (0x0004545c) fep_candidate_item_pane

0x4496,	// (0x00045464) fep_china_uni_candidate_pane_g1

0x449e,	// (0x0004546c) fep_china_uni_candidate_pane_g2

0x44a6,	// (0x00045474) fep_china_uni_candidate_pane_g3

0x44ae,	// (0x0004547c) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x000506d5) fep_china_uni_candidate_pane_g

0xe163,	// (0x0004f131) fep_entry_item_pane_g1

0x44b6,	// (0x00045484) fep_entry_item_pane_t1_ParamLimits

0x44b6,	// (0x00045484) fep_entry_item_pane_t1

0x44cc,	// (0x0004549a) fep_candidate_item_pane_t1_ParamLimits

0x44cc,	// (0x0004549a) fep_candidate_item_pane_t1

0x44e1,	// (0x000454af) fep_candidate_item_pane_t2_ParamLimits

0x44e1,	// (0x000454af) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x000506de) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x000506de) fep_candidate_item_pane_t

0x3400,	// (0x000443ce) list_highlight_pane_cp31_ParamLimits

0x3400,	// (0x000443ce) list_highlight_pane_cp31

0x44f3,	// (0x000454c1) level_1_signal_lsc

0x44fc,	// (0x000454ca) level_2_signal_lsc

0x4505,	// (0x000454d3) level_3_signal_lsc

0x450e,	// (0x000454dc) level_4_signal_lsc

0x4517,	// (0x000454e5) level_5_signal_lsc

0x4520,	// (0x000454ee) level_6_signal_lsc

0x4529,	// (0x000454f7) level_7_signal_lsc

0x4529,	// (0x000454f7) level_1_battery_lsc

0x4532,	// (0x00045500) level_2_battery_lsc

0x453b,	// (0x00045509) level_3_battery_lsc

0x4544,	// (0x00045512) level_4_battery_lsc

0x454d,	// (0x0004551b) level_5_battery_lsc

0x4556,	// (0x00045524) level_6_battery_lsc

0x44f3,	// (0x000454c1) level_7_battery_lsc

0x455f,	// (0x0004552d) scroll_handle_focus_pane_g1

0x4568,	// (0x00045536) scroll_handle_focus_pane_g2

0x4571,	// (0x0004553f) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x000506e3) scroll_handle_focus_pane_g

0x0428,	// (0x000413f6) list_single_2graphic_pane_g1_ParamLimits

0x0428,	// (0x000413f6) list_single_2graphic_pane_g1

0xc25b,	// (0x0004d229) list_single_2graphic_pane_g2_ParamLimits

0xc25b,	// (0x0004d229) list_single_2graphic_pane_g2

0x1084,	// (0x00042052) list_single_2graphic_pane_g3_ParamLimits

0x1084,	// (0x00042052) list_single_2graphic_pane_g3

0x0434,	// (0x00041402) list_single_2graphic_pane_g4_ParamLimits

0x0434,	// (0x00041402) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x000506ea) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x000506ea) list_single_2graphic_pane_g

0x0440,	// (0x0004140e) list_single_2graphic_pane_t1_ParamLimits

0x0440,	// (0x0004140e) list_single_2graphic_pane_t1

0xc280,	// (0x0004d24e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc280,	// (0x0004d24e) list_double2_graphic_large_graphic_pane_g1

0xb805,	// (0x0004c7d3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb805,	// (0x0004c7d3) list_double2_graphic_large_graphic_pane_g2

0xb75e,	// (0x0004c72c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb75e,	// (0x0004c72c) list_double2_graphic_large_graphic_pane_g3

0x1d38,	// (0x00042d06) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x1d38,	// (0x00042d06) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x000506f3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x000506f3) list_double2_graphic_large_graphic_pane_g

0xbafe,	// (0x0004cacc) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbafe,	// (0x0004cacc) list_double2_graphic_large_graphic_pane_t1

0xbb14,	// (0x0004cae2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbb14,	// (0x0004cae2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x000506fc) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x000506fc) list_double2_graphic_large_graphic_pane_t

0x46bc,	// (0x0004568a) popup_fast_swap_window_ParamLimits

0x46bc,	// (0x0004568a) popup_fast_swap_window

0x46d8,	// (0x000456a6) popup_side_volume_key_window

0x46f4,	// (0x000456c2) stacon_top_pane

0x46fe,	// (0x000456cc) status_pane_ParamLimits

0x46fe,	// (0x000456cc) status_pane

0xd424,	// (0x0004e3f2) status_small_pane

0x3320,	// (0x000442ee) control_pane

0x3320,	// (0x000442ee) stacon_bottom_pane

0x3c7c,	// (0x00044c4a) scroll_pane_cp121

0x3c73,	// (0x00044c41) set_content_pane

0x457a,	// (0x00045548) bg_active_tab_pane_g1_cp1

0x4583,	// (0x00045551) bg_active_tab_pane_g2_cp1

0x458c,	// (0x0004555a) bg_active_tab_pane_g3_cp1

0x457a,	// (0x00045548) bg_passive_tab_pane_g1_cp1

0x4583,	// (0x00045551) bg_passive_tab_pane_g2_cp1

0x458c,	// (0x0004555a) bg_passive_tab_pane_g3_cp1

0x4595,	// (0x00045563) bg_active_tab_pane_g1_cp2

0x4583,	// (0x00045551) bg_active_tab_pane_g2_cp2

0x459e,	// (0x0004556c) bg_active_tab_pane_g3_cp2

0x4595,	// (0x00045563) bg_passive_tab_pane_g1_cp2

0x4583,	// (0x00045551) bg_passive_tab_pane_g2_cp2

0x459e,	// (0x0004556c) bg_passive_tab_pane_g3_cp2

0x45a7,	// (0x00045575) bg_active_tab_pane_g1_cp3

0x4583,	// (0x00045551) bg_active_tab_pane_g2_cp3

0x45b0,	// (0x0004557e) bg_active_tab_pane_g3_cp3

0x45a7,	// (0x00045575) bg_passive_tab_pane_g1_cp3

0x4583,	// (0x00045551) bg_passive_tab_pane_g2_cp3

0x45b0,	// (0x0004557e) bg_passive_tab_pane_g3_cp3

0x45b9,	// (0x00045587) bg_active_tab_pane_g1_cp4

0x4583,	// (0x00045551) bg_active_tab_pane_g2_cp4

0x45c4,	// (0x00045592) bg_active_tab_pane_g3_cp4

0x45b9,	// (0x00045587) bg_passive_tab_pane_g1_cp4

0x4583,	// (0x00045551) bg_passive_tab_pane_g2_cp4

0x45c4,	// (0x00045592) bg_passive_tab_pane_g3_cp4

0x460d,	// (0x000455db) bg_active_tab_pane_g1_cp5

0x4583,	// (0x00045551) bg_active_tab_pane_g2_cp5

0x4616,	// (0x000455e4) bg_active_tab_pane_g3_cp5

0x460d,	// (0x000455db) bg_passive_tab_pane_g1_cp5

0x4583,	// (0x00045551) bg_passive_tab_pane_g2_cp5

0x4616,	// (0x000455e4) bg_passive_tab_pane_g3_cp5

0x6cc9,	// (0x00047c97) list_set_graphic_pane_ParamLimits

0x6cc9,	// (0x00047c97) list_set_graphic_pane

0x3320,	// (0x000442ee) bg_set_opt_pane_cp4

0x463f,	// (0x0004560d) list_set_graphic_pane_g1_ParamLimits

0x463f,	// (0x0004560d) list_set_graphic_pane_g1

0x464b,	// (0x00045619) list_set_graphic_pane_g2_ParamLimits

0x464b,	// (0x00045619) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00050701) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00050701) list_set_graphic_pane_g

0x0009,

0xfa9c,	// (0x00050a6a) volume_small_pane_cp_g

0x466f,	// (0x0004563d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x466f,	// (0x0004563d) list_double2_large_graphic_pane_g1_cp2

0x467b,	// (0x00045649) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x467b,	// (0x00045649) list_double2_large_graphic_pane_g2_cp2

0x468c,	// (0x0004565a) list_double2_large_graphic_pane_g3_cp2

0x4694,	// (0x00045662) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4694,	// (0x00045662) list_double2_large_graphic_pane_t1_cp2

0x46aa,	// (0x00045678) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x46aa,	// (0x00045678) list_double2_large_graphic_pane_t2_cp2

0x627e,	// (0x0004724c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x627e,	// (0x0004724c) list_double_large_graphic_pane_g1_cp2

0x628f,	// (0x0004725d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x628f,	// (0x0004725d) list_double_large_graphic_pane_g2_cp2

0x4825,	// (0x000457f3) list_double_large_graphic_pane_g3_cp2

0x62a0,	// (0x0004726e) list_double_large_graphic_pane_g4_cp

0x62a8,	// (0x00047276) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x62a8,	// (0x00047276) list_double_large_graphic_pane_t1_cp2

0x62bf,	// (0x0004728d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x62bf,	// (0x0004728d) list_double_large_graphic_pane_t2_cp2

0x4717,	// (0x000456e5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4717,	// (0x000456e5) list_double2_graphic_pane_g1_cp2

0x4725,	// (0x000456f3) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4725,	// (0x000456f3) list_double2_graphic_pane_g2_cp2

0x4736,	// (0x00045704) list_double2_graphic_pane_g3_cp2

0x4740,	// (0x0004570e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4740,	// (0x0004570e) list_double2_graphic_pane_t1_cp2

0x4756,	// (0x00045724) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4756,	// (0x00045724) list_double2_graphic_pane_t2_cp2

0x4768,	// (0x00045736) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4768,	// (0x00045736) list_single_number_heading_pane_g1_cp2

0x4774,	// (0x00045742) list_single_number_heading_pane_g2_cp2

0x477c,	// (0x0004574a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x477c,	// (0x0004574a) list_single_number_heading_pane_t1_cp2

0x4792,	// (0x00045760) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4792,	// (0x00045760) list_single_number_heading_pane_t2_cp2

0x47a4,	// (0x00045772) list_single_number_heading_pane_t3_cp2_ParamLimits

0x47a4,	// (0x00045772) list_single_number_heading_pane_t3_cp2

0x4768,	// (0x00045736) list_single_heading_pane_g1_cp2_ParamLimits

0x4768,	// (0x00045736) list_single_heading_pane_g1_cp2

0x4774,	// (0x00045742) list_single_heading_pane_g2_cp2

0x477c,	// (0x0004574a) list_single_heading_pane_t1_cp2_ParamLimits

0x477c,	// (0x0004574a) list_single_heading_pane_t1_cp2

0x6086,	// (0x00047054) list_single_heading_pane_t2_cp2_ParamLimits

0x6086,	// (0x00047054) list_single_heading_pane_t2_cp2

0x5fce,	// (0x00046f9c) list_double_graphic_pane_g1_cp2_ParamLimits

0x5fce,	// (0x00046f9c) list_double_graphic_pane_g1_cp2

0x5fda,	// (0x00046fa8) list_double_graphic_pane_g2_cp2_ParamLimits

0x5fda,	// (0x00046fa8) list_double_graphic_pane_g2_cp2

0x5fe9,	// (0x00046fb7) list_double_graphic_pane_g3_cp2

0x5ff1,	// (0x00046fbf) list_double_graphic_pane_t1_cp2_ParamLimits

0x5ff1,	// (0x00046fbf) list_double_graphic_pane_t1_cp2

0x6007,	// (0x00046fd5) list_double_graphic_pane_t2_cp2_ParamLimits

0x6007,	// (0x00046fd5) list_double_graphic_pane_t2_cp2

0x4819,	// (0x000457e7) list_double_number_pane_g1_cp2_ParamLimits

0x4819,	// (0x000457e7) list_double_number_pane_g1_cp2

0x4825,	// (0x000457f3) list_double_number_pane_g2_cp2

0x5f92,	// (0x00046f60) list_double_number_pane_t1_cp2_ParamLimits

0x5f92,	// (0x00046f60) list_double_number_pane_t1_cp2

0x5fa6,	// (0x00046f74) list_double_number_pane_t2_cp2_ParamLimits

0x5fa6,	// (0x00046f74) list_double_number_pane_t2_cp2

0x5fbc,	// (0x00046f8a) list_double_number_pane_t3_cp2_ParamLimits

0x5fbc,	// (0x00046f8a) list_double_number_pane_t3_cp2

0x5e7b,	// (0x00046e49) list_single_graphic_pane_g1_cp2_ParamLimits

0x5e7b,	// (0x00046e49) list_single_graphic_pane_g1_cp2

0x487d,	// (0x0004584b) list_single_graphic_pane_g2_cp2_ParamLimits

0x487d,	// (0x0004584b) list_single_graphic_pane_g2_cp2

0x4889,	// (0x00045857) list_single_graphic_pane_g3_cp2

0x5e51,	// (0x00046e1f) list_single_graphic_pane_t1_cp2_ParamLimits

0x5e51,	// (0x00046e1f) list_single_graphic_pane_t1_cp2

0x487d,	// (0x0004584b) list_single_number_pane_g1_cp2_ParamLimits

0x487d,	// (0x0004584b) list_single_number_pane_g1_cp2

0x4889,	// (0x00045857) list_single_number_pane_g2_cp2

0x5e51,	// (0x00046e1f) list_single_number_pane_t1_cp2_ParamLimits

0x5e51,	// (0x00046e1f) list_single_number_pane_t1_cp2

0x5e67,	// (0x00046e35) list_single_number_pane_t2_cp2_ParamLimits

0x5e67,	// (0x00046e35) list_single_number_pane_t2_cp2

0x467b,	// (0x00045649) list_double2_pane_g1_cp2_ParamLimits

0x467b,	// (0x00045649) list_double2_pane_g1_cp2

0x468c,	// (0x0004565a) list_double2_pane_g2_cp2

0x47f1,	// (0x000457bf) list_double2_pane_t1_cp2_ParamLimits

0x47f1,	// (0x000457bf) list_double2_pane_t1_cp2

0x4807,	// (0x000457d5) list_double2_pane_t2_cp2_ParamLimits

0x4807,	// (0x000457d5) list_double2_pane_t2_cp2

0x4819,	// (0x000457e7) list_double_pane_g1_cp2_ParamLimits

0x4819,	// (0x000457e7) list_double_pane_g1_cp2

0x4825,	// (0x000457f3) list_double_pane_g2_cp2

0x482d,	// (0x000457fb) list_double_pane_t1_cp2_ParamLimits

0x482d,	// (0x000457fb) list_double_pane_t1_cp2

0x4843,	// (0x00045811) list_double_pane_t2_cp2_ParamLimits

0x4843,	// (0x00045811) list_double_pane_t2_cp2

0x486d,	// (0x0004583b) list_single_pane_cp2_g3

0x487d,	// (0x0004584b) list_single_pane_g1_cp2_ParamLimits

0x487d,	// (0x0004584b) list_single_pane_g1_cp2

0x4889,	// (0x00045857) list_single_pane_g2_cp2

0x4891,	// (0x0004585f) list_single_pane_t1_cp2_ParamLimits

0x4891,	// (0x0004585f) list_single_pane_t1_cp2

0x48a9,	// (0x00045877) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x48a9,	// (0x00045877) list_single_large_graphic_pane_g1_cp2

0x4434,	// (0x00045402) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4434,	// (0x00045402) list_single_large_graphic_pane_g2_cp2

0x48b5,	// (0x00045883) list_single_large_graphic_pane_g3_cp2

0x48bd,	// (0x0004588b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x48bd,	// (0x0004588b) list_single_large_graphic_pane_g4_cp1

0x48d7,	// (0x000458a5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x48d7,	// (0x000458a5) list_single_large_graphic_pane_t1_cp2

0x5e1d,	// (0x00046deb) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5e1d,	// (0x00046deb) list_single_graphic_heading_pane_g1_cp2

0x5dea,	// (0x00046db8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5dea,	// (0x00046db8) list_single_graphic_heading_pane_g4_cp2

0x4889,	// (0x00045857) list_single_graphic_heading_pane_g5_cp2

0x5e29,	// (0x00046df7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5e29,	// (0x00046df7) list_single_graphic_heading_pane_t1_cp2

0x5e3f,	// (0x00046e0d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5e3f,	// (0x00046e0d) list_single_graphic_heading_pane_t2_cp2

0x5dde,	// (0x00046dac) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5dde,	// (0x00046dac) list_single_2graphic_pane_g1_cp2

0x5dea,	// (0x00046db8) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5dea,	// (0x00046db8) list_single_2graphic_pane_g2_cp2

0x4889,	// (0x00045857) list_single_2graphic_pane_g3_cp2

0x5dfb,	// (0x00046dc9) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5dfb,	// (0x00046dc9) list_single_2graphic_pane_g4_cp2

0x5e07,	// (0x00046dd5) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5e07,	// (0x00046dd5) list_single_2graphic_pane_t1_cp2

0xe163,	// (0x0004f131) list_highlight_pane_g10_cp1

0x59b6,	// (0x00046984) list_highlight_pane_g1_cp1

0x59be,	// (0x0004698c) list_highlight_pane_g2_cp1

0x59c6,	// (0x00046994) list_highlight_pane_g3_cp1

0x59ce,	// (0x0004699c) list_highlight_pane_g4_cp1

0x59d6,	// (0x000469a4) list_highlight_pane_g5_cp1

0x59de,	// (0x000469ac) list_highlight_pane_g6_cp1

0x59e6,	// (0x000469b4) list_highlight_pane_g7_cp1

0x59ee,	// (0x000469bc) list_highlight_pane_g8_cp1

0x59f6,	// (0x000469c4) list_highlight_pane_g9_cp1

0xda7f,	// (0x0004ea4d) form_field_slider_pane_t3

0xda8d,	// (0x0004ea5b) form_field_slider_pane_t4

0x58f2,	// (0x000468c0) slider_form_pane_ParamLimits

0x58f2,	// (0x000468c0) slider_form_pane

0x3320,	// (0x000442ee) control_abbreviations

0x3320,	// (0x000442ee) control_conventions

0x3320,	// (0x000442ee) control_definitions

0x3320,	// (0x000442ee) format_table_attribute

0x60d0,	// (0x0004709e) bg_popup_preview_window_pane_g9

0x3320,	// (0x000442ee) format_table_data2

0x3320,	// (0x000442ee) format_table_data3

0x3320,	// (0x000442ee) format_table_data_example

0x0008,

0x3320,	// (0x000442ee) intro_purpose

0xf8ca,	// (0x00050898) bg_popup_preview_window_pane_g

0x3320,	// (0x000442ee) texts_category

0x3320,	// (0x000442ee) texts_graphics

0x48ed,	// (0x000458bb) text_digital

0x48fc,	// (0x000458ca) text_primary

0x490b,	// (0x000458d9) text_primary_small

0x491a,	// (0x000458e8) text_secondary

0x4929,	// (0x000458f7) text_title

0x67fd,	// (0x000477cb) bg_passive_tab_pane_g1_cp3_srt

0x4583,	// (0x00045551) bg_passive_tab_pane_g2_cp3_srt

0x6806,	// (0x000477d4) bg_passive_tab_pane_g3_cp3_srt

0x367b,	// (0x00044649) bg_active_tab_pane_cp3_srt_ParamLimits

0x367b,	// (0x00044649) bg_active_tab_pane_cp3_srt

0x680f,	// (0x000477dd) tabs_4_active_pane_srt_g1

0xddbf,	// (0x0004ed8d) tabs_4_active_pane_srt_t1_ParamLimits

0xddbf,	// (0x0004ed8d) tabs_4_active_pane_srt_t1

0x67fd,	// (0x000477cb) bg_active_tab_pane_g1_cp3_copy1

0x4583,	// (0x00045551) bg_active_tab_pane_g2_cp3_copy1

0x6806,	// (0x000477d4) bg_active_tab_pane_g3_cp3_copy1

0x3400,	// (0x000443ce) tabs_2_long_active_pane_srt_ParamLimits

0x3400,	// (0x000443ce) tabs_2_long_active_pane_srt

0x3400,	// (0x000443ce) tabs_2_long_passive_pane_srt_ParamLimits

0x3400,	// (0x000443ce) tabs_2_long_passive_pane_srt

0x4c5c,	// (0x00045c2a) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4c5c,	// (0x00045c2a) bg_passive_tab_pane_cp4_srt

0x64fe,	// (0x000474cc) bg_passive_tab_pane_g1_cp4_srt

0x4583,	// (0x00045551) bg_passive_tab_pane_g2_cp4_srt

0x6507,	// (0x000474d5) bg_passive_tab_pane_g3_cp4_srt

0x3400,	// (0x000443ce) bg_active_tab_pane_cp4_srt_ParamLimits

0x3400,	// (0x000443ce) bg_active_tab_pane_cp4_srt

0xdbea,	// (0x0004ebb8) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdbea,	// (0x0004ebb8) tabs_2_long_active_pane_srt_t1

0x64fe,	// (0x000474cc) bg_active_tab_pane_g1_cp4_srt

0x4583,	// (0x00045551) bg_active_tab_pane_g2_cp4_srt

0x6507,	// (0x000474d5) bg_active_tab_pane_g3_cp4_srt

0x367b,	// (0x00044649) tabs_3_long_active_pane_srt_ParamLimits

0x367b,	// (0x00044649) tabs_3_long_active_pane_srt

0x367b,	// (0x00044649) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x367b,	// (0x00044649) tabs_3_long_passive_pane_cp_srt

0x367b,	// (0x00044649) tabs_3_long_passive_pane_srt_ParamLimits

0x367b,	// (0x00044649) tabs_3_long_passive_pane_srt

0x4c5c,	// (0x00045c2a) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4c5c,	// (0x00045c2a) bg_passive_tab_pane_cp5_srt

0x460d,	// (0x000455db) bg_passive_tab_pane_g1_cp5_srt

0x4583,	// (0x00045551) bg_passive_tab_pane_g2_cp5_srt

0x4616,	// (0x000455e4) bg_passive_tab_pane_g3_cp5_srt

0x3400,	// (0x000443ce) bg_active_tab_pane_cp5_srt_ParamLimits

0x3400,	// (0x000443ce) bg_active_tab_pane_cp5_srt

0xdbd4,	// (0x0004eba2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdbd4,	// (0x0004eba2) tabs_3_long_active_pane_srt_t1

0x460d,	// (0x000455db) bg_active_tab_pane_g1_cp5_srt

0x4583,	// (0x00045551) bg_active_tab_pane_g2_cp5_srt

0x4616,	// (0x000455e4) bg_active_tab_pane_g3_cp5_srt

0x64de,	// (0x000474ac) navi_text_pane_srt_t1

0x64d6,	// (0x000474a4) navi_icon_pane_srt_g1

0x4afe,	// (0x00045acc) midp_editing_number_pane_srt

0x4938,	// (0x00045906) midp_ticker_pane_srt

0x4b06,	// (0x00045ad4) midp_ticker_pane_srt_g1

0x4b0e,	// (0x00045adc) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00050720) midp_ticker_pane_srt_g

0x4b16,	// (0x00045ae4) midp_ticker_pane_srt_t1

0x64c7,	// (0x00047495) midp_editing_number_pane_t1_copy1

0xd452,	// (0x0004e420) listscroll_midp_pane

0xd452,	// (0x0004e420) midp_form_pane

0x49b0,	// (0x0004597e) midp_info_popup_window_ParamLimits

0x49b0,	// (0x0004597e) midp_info_popup_window

0x3dac,	// (0x00044d7a) bg_popup_sub_pane_cp50_ParamLimits

0x3dac,	// (0x00044d7a) bg_popup_sub_pane_cp50

0x55da,	// (0x000465a8) listscroll_midp_info_pane_ParamLimits

0x55da,	// (0x000465a8) listscroll_midp_info_pane

0x55ba,	// (0x00046588) listscroll_form_midp_pane_ParamLimits

0x55ba,	// (0x00046588) listscroll_form_midp_pane

0x55c6,	// (0x00046594) scroll_bar_cp050

0x55ba,	// (0x00046588) list_midp_pane

0x7278,	// (0x00048246) signal_pane_g2_cp

0x54d4,	// (0x000464a2) listscroll_midp_info_pane_t1_ParamLimits

0x54d4,	// (0x000464a2) listscroll_midp_info_pane_t1

0x54ec,	// (0x000464ba) listscroll_midp_info_pane_t2_ParamLimits

0x54ec,	// (0x000464ba) listscroll_midp_info_pane_t2

0x552a,	// (0x000464f8) listscroll_midp_info_pane_t3_ParamLimits

0x552a,	// (0x000464f8) listscroll_midp_info_pane_t3

0x5564,	// (0x00046532) listscroll_midp_info_pane_t4_ParamLimits

0x5564,	// (0x00046532) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x000507d3) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x000507d3) listscroll_midp_info_pane_t

0x3e0d,	// (0x00044ddb) scroll_pane_cp21

0x5472,	// (0x00046440) form_midp_field_choice_group_pane

0x547b,	// (0x00046449) form_midp_field_text_pane

0x54ba,	// (0x00046488) form_midp_field_time_pane

0x54c2,	// (0x00046490) form_midp_gauge_slider_pane

0x54cb,	// (0x00046499) form_midp_gauge_wait_pane

0x3320,	// (0x000442ee) form_midp_image_pane

0xbb26,	// (0x0004caf4) list_single_midp_pane_ParamLimits

0xbb26,	// (0x0004caf4) list_single_midp_pane

0xda5e,	// (0x0004ea2c) form_midp_field_text_pane_t1

0x51fa,	// (0x000461c8) input_focus_pane_cp050

0x5461,	// (0x0004642f) list_midp_form_text_pane

0x53f9,	// (0x000463c7) form_midp_field_choice_group_pane_t1

0x5407,	// (0x000463d5) input_focus_pane_cp051

0x541b,	// (0x000463e9) list_midp_choice_pane

0x3320,	// (0x000442ee) status_idle_pane

0x53dd,	// (0x000463ab) form_midp_field_time_pane_t1

0xe163,	// (0x0004f131) wait_anim_pane_g2_copy1

0x53eb,	// (0x000463b9) form_midp_field_time_pane_t2

0x0001,

0x4a5e,	// (0x00045a2c) aid_navinavi_width_2_pane

0xf800,	// (0x000507ce) form_midp_field_time_pane_t

0x3320,	// (0x000442ee) input_focus_pane_cp052

0x3320,	// (0x000442ee) bg_input_focus_pane_cp040

0x539d,	// (0x0004636b) form_midp_gauge_slider_pane_t1

0x53ab,	// (0x00046379) form_midp_gauge_slider_pane_t2

0xda42,	// (0x0004ea10) form_midp_gauge_slider_pane_t3

0xda50,	// (0x0004ea1e) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x000507c5) form_midp_gauge_slider_pane_t

0x53d5,	// (0x000463a3) form_midp_slider_pane

0x3400,	// (0x000443ce) bg_input_focus_pane_cp041_ParamLimits

0x3400,	// (0x000443ce) bg_input_focus_pane_cp041

0x536a,	// (0x00046338) form_midp_gauge_wait_pane_t1_ParamLimits

0x536a,	// (0x00046338) form_midp_gauge_wait_pane_t1

0x537c,	// (0x0004634a) form_midp_gauge_wait_pane_t2_ParamLimits

0x537c,	// (0x0004634a) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x000507c0) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x000507c0) form_midp_gauge_wait_pane_t

0x538e,	// (0x0004635c) form_midp_wait_pane_ParamLimits

0x538e,	// (0x0004635c) form_midp_wait_pane

0x5334,	// (0x00046302) form_midp_image_pane_g1

0x533d,	// (0x0004630b) form_midp_image_pane_t1

0x534c,	// (0x0004631a) form_midp_image_pane_t2

0x535b,	// (0x00046329) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x000507b9) form_midp_image_pane_t

0x532b,	// (0x000462f9) list_single_midp_pane_g1

0x05c8,	// (0x00041596) list_single_midp_pane_t1

0xda2e,	// (0x0004e9fc) list_midp_form_item_pane_ParamLimits

0xda2e,	// (0x0004e9fc) list_midp_form_item_pane

0x4a06,	// (0x000459d4) list_midp_form_item_pane_t1

0x4a15,	// (0x000459e3) midp_ticker_pane_g1

0x4a21,	// (0x000459ef) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00050706) midp_ticker_pane_g

0x4a2d,	// (0x000459fb) midp_ticker_pane_t1

0x6724,	// (0x000476f2) midp_editing_number_pane_t1

0x6702,	// (0x000476d0) midp_editing_number_pane

0x6711,	// (0x000476df) midp_ticker_pane

0x64b7,	// (0x00047485) ai_message_heading_pane

0x3320,	// (0x000442ee) bg_popup_window_pane_cp14

0x64bf,	// (0x0004748d) listscroll_ai_message_pane

0x6441,	// (0x0004740f) ai_message_heading_pane_g1_ParamLimits

0x6441,	// (0x0004740f) ai_message_heading_pane_g1

0x644d,	// (0x0004741b) ai_message_heading_pane_g2_ParamLimits

0x644d,	// (0x0004741b) ai_message_heading_pane_g2

0x6459,	// (0x00047427) ai_message_heading_pane_g3_ParamLimits

0x6459,	// (0x00047427) ai_message_heading_pane_g3

0x6465,	// (0x00047433) ai_message_heading_pane_g4_ParamLimits

0x6465,	// (0x00047433) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x000508fa) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x000508fa) ai_message_heading_pane_g

0x6471,	// (0x0004743f) ai_message_heading_pane_t1_ParamLimits

0x6471,	// (0x0004743f) ai_message_heading_pane_t1

0x648b,	// (0x00047459) ai_message_heading_pane_t2_ParamLimits

0x648b,	// (0x00047459) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x00050903) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x00050903) ai_message_heading_pane_t

0x649d,	// (0x0004746b) bg_popup_heading_pane_cp1_ParamLimits

0x649d,	// (0x0004746b) bg_popup_heading_pane_cp1

0x642f,	// (0x000473fd) list_ai_message_pane_ParamLimits

0x642f,	// (0x000473fd) list_ai_message_pane

0x3e0d,	// (0x00044ddb) scroll_pane_cp10

0x63cb,	// (0x00047399) list_ai_message_pane_g1

0x63d3,	// (0x000473a1) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x000508d7) list_ai_message_pane_g

0x63db,	// (0x000473a9) list_ai_message_pane_t1_ParamLimits

0x63db,	// (0x000473a9) list_ai_message_pane_t1

0x63f0,	// (0x000473be) list_ai_message_pane_t2_ParamLimits

0x63f0,	// (0x000473be) list_ai_message_pane_t2

0x6405,	// (0x000473d3) list_ai_message_pane_t3_ParamLimits

0x6405,	// (0x000473d3) list_ai_message_pane_t3

0x641a,	// (0x000473e8) list_ai_message_pane_t4_ParamLimits

0x641a,	// (0x000473e8) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x000508dc) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x000508dc) list_ai_message_pane_t

0xdbb3,	// (0x0004eb81) cell_ai_soft_ind_pane_ParamLimits

0xdbb3,	// (0x0004eb81) cell_ai_soft_ind_pane

0x4a3f,	// (0x00045a0d) cell_ai_soft_ind_pane_g1_ParamLimits

0x4a3f,	// (0x00045a0d) cell_ai_soft_ind_pane_g1

0x3320,	// (0x000442ee) grid_highlight_cp1

0x4a4c,	// (0x00045a1a) text_secondary_cp56_ParamLimits

0x4a4c,	// (0x00045a1a) text_secondary_cp56

0x638b,	// (0x00047359) example_general_pane_ParamLimits

0x638b,	// (0x00047359) example_general_pane

0x6397,	// (0x00047365) example_parent_pane_g1_ParamLimits

0x6397,	// (0x00047365) example_parent_pane_g1

0x63a3,	// (0x00047371) example_parent_pane_t1_ParamLimits

0x63a3,	// (0x00047371) example_parent_pane_t1

0xc7d7,	// (0x0004d7a5) popup_preview_text_window_ParamLimits

0xc7d7,	// (0x0004d7a5) popup_preview_text_window

0x4875,	// (0x00045843) list_single_pane_cp2_g4

0x3757,	// (0x00044725) bg_popup_preview_window_pane_ParamLimits

0x3757,	// (0x00044725) bg_popup_preview_window_pane

0x60d8,	// (0x000470a6) popup_preview_text_window_t1_ParamLimits

0x60d8,	// (0x000470a6) popup_preview_text_window_t1

0x60f6,	// (0x000470c4) popup_preview_text_window_t2_ParamLimits

0x60f6,	// (0x000470c4) popup_preview_text_window_t2

0x613f,	// (0x0004710d) popup_preview_text_window_t3_ParamLimits

0x613f,	// (0x0004710d) popup_preview_text_window_t3

0x6184,	// (0x00047152) popup_preview_text_window_t4_ParamLimits

0x6184,	// (0x00047152) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x000508ab) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x000508ab) popup_preview_text_window_t

0x6202,	// (0x000471d0) scroll_pane_cp11

0x5186,	// (0x00046154) bg_popup_preview_window_pane_g1

0x6098,	// (0x00047066) bg_popup_preview_window_pane_g2

0x60a0,	// (0x0004706e) bg_popup_preview_window_pane_g3

0x60a8,	// (0x00047076) bg_popup_preview_window_pane_g4

0x60b0,	// (0x0004707e) bg_popup_preview_window_pane_g5

0x60b8,	// (0x00047086) bg_popup_preview_window_pane_g6

0x60c0,	// (0x0004708e) bg_popup_preview_window_pane_g7

0x60c8,	// (0x00047096) bg_popup_preview_window_pane_g8

0x0c10,	// (0x00041bde) aid_popup_width_pane

0xc753,	// (0x0004d721) popup_midp_note_alarm_window_ParamLimits

0xc753,	// (0x0004d721) popup_midp_note_alarm_window

0x3c8d,	// (0x00044c5b) data_form_pane_ParamLimits

0xba2f,	// (0x0004c9fd) form_field_data_pane_g1

0xba39,	// (0x0004ca07) form_field_data_pane_t1_ParamLimits

0x3c99,	// (0x00044c67) input_focus_pane_ParamLimits

0x0293,	// (0x00041261) data_form_wide_pane_ParamLimits

0x02a4,	// (0x00041272) form_field_data_wide_pane_g1

0x02b0,	// (0x0004127e) form_field_data_wide_pane_t1_ParamLimits

0x39fe,	// (0x000449cc) input_focus_pane_cp6_ParamLimits

0xd285,	// (0x0004e253) input_popup_find_pane_g1_ParamLimits

0xd285,	// (0x0004e253) input_popup_find_pane_g1

0x1205,	// (0x000421d3) aid_navi_side_left_pane

0x121a,	// (0x000421e8) aid_navi_side_right_pane

0x5ab1,	// (0x00046a7f) bg_popup_window_pane_cp30_ParamLimits

0x5ab1,	// (0x00046a7f) bg_popup_window_pane_cp30

0x5b2b,	// (0x00046af9) popup_midp_note_alarm_window_g1_ParamLimits

0x5b2b,	// (0x00046af9) popup_midp_note_alarm_window_g1

0x5b5b,	// (0x00046b29) popup_midp_note_alarm_window_t1_ParamLimits

0x5b5b,	// (0x00046b29) popup_midp_note_alarm_window_t1

0x5bfc,	// (0x00046bca) popup_midp_note_alarm_window_t2_ParamLimits

0x5bfc,	// (0x00046bca) popup_midp_note_alarm_window_t2

0x5caa,	// (0x00046c78) popup_midp_note_alarm_window_t3_ParamLimits

0x5caa,	// (0x00046c78) popup_midp_note_alarm_window_t3

0x5cdc,	// (0x00046caa) popup_midp_note_alarm_window_t4_ParamLimits

0x5cdc,	// (0x00046caa) popup_midp_note_alarm_window_t4

0x5d02,	// (0x00046cd0) popup_midp_note_alarm_window_t5_ParamLimits

0x5d02,	// (0x00046cd0) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x00050848) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x00050848) popup_midp_note_alarm_window_t

0x5dae,	// (0x00046d7c) wait_bar_pane_cp1_ParamLimits

0x5dae,	// (0x00046d7c) wait_bar_pane_cp1

0x3320,	// (0x000442ee) wait_anim_pane_copy1

0x3320,	// (0x000442ee) wait_border_pane_copy1

0x5797,	// (0x00046765) wait_border_pane_g1_copy1

0x02ca,	// (0x00041298) form_field_popup_pane_g1

0xba53,	// (0x0004ca21) form_field_popup_pane_t1_ParamLimits

0x3c99,	// (0x00044c67) input_focus_pane_cp7_ParamLimits

0x3cbb,	// (0x00044c89) list_form_pane_ParamLimits

0x02ea,	// (0x000412b8) form_field_popup_wide_pane_g1

0x02f2,	// (0x000412c0) form_field_popup_wide_pane_t1_ParamLimits

0x3c99,	// (0x00044c67) input_focus_pane_cp8_ParamLimits

0x3cc7,	// (0x00044c95) list_form_wide_pane_ParamLimits

0x689f,	// (0x0004786d) aid_size_cell_graphic_pane

0xbad2,	// (0x0004caa0) data_form_pane_t1_ParamLimits

0xbb3b,	// (0x0004cb09) data_form_wide_pane_t1_ParamLimits

0xd6b3,	// (0x0004e681) bg_status_flat_pane

0xbefe,	// (0x0004cecc) title_pane_t1_ParamLimits

0x33c8,	// (0x00044396) title_pane_t2_ParamLimits

0x33ee,	// (0x000443bc) title_pane_t3_ParamLimits

0xf532,	// (0x00050500) title_pane_t_ParamLimits

0x428e,	// (0x0004525c) level_1_signal_ParamLimits

0x42a0,	// (0x0004526e) level_2_signal_ParamLimits

0x42b3,	// (0x00045281) level_3_signal_ParamLimits

0x42c6,	// (0x00045294) level_4_signal_ParamLimits

0x42d9,	// (0x000452a7) level_5_signal_ParamLimits

0x42ec,	// (0x000452ba) level_6_signal_ParamLimits

0x42ff,	// (0x000452cd) level_7_signal_ParamLimits

0x428e,	// (0x0004525c) level_1_battery_ParamLimits

0x42a0,	// (0x0004526e) level_2_battery_ParamLimits

0x42b3,	// (0x00045281) level_3_battery_ParamLimits

0x42c6,	// (0x00045294) level_4_battery_ParamLimits

0x42d9,	// (0x000452a7) level_5_battery_ParamLimits

0x42ec,	// (0x000452ba) level_6_battery_ParamLimits

0x42ff,	// (0x000452cd) level_7_battery_ParamLimits

0x59b6,	// (0x00046984) bg_status_flat_pane_g1

0x59be,	// (0x0004698c) bg_status_flat_pane_g2

0x59c6,	// (0x00046994) bg_status_flat_pane_g3

0x59ce,	// (0x0004699c) bg_status_flat_pane_g4

0x59d6,	// (0x000469a4) bg_status_flat_pane_g5

0x59de,	// (0x000469ac) bg_status_flat_pane_g6

0x59e6,	// (0x000469b4) bg_status_flat_pane_g7

0xbf8a,	// (0x0004cf58) tabs_3_active_pane_t1_ParamLimits

0xbf8a,	// (0x0004cf58) tabs_3_passive_pane_t1_ParamLimits

0xbf9c,	// (0x0004cf6a) tabs_4_active_pane_t1_ParamLimits

0xbf9c,	// (0x0004cf6a) tabs_4_1_passive_pane_t1_ParamLimits

0xd293,	// (0x0004e261) tabs_2_active_pane_t1_ParamLimits

0xd293,	// (0x0004e261) tabs_2_passive_pane_t1_ParamLimits

0x3400,	// (0x000443ce) bg_active_tab_pane_cp4_ParamLimits

0xd2a5,	// (0x0004e273) tabs_2_long_active_pane_t1_ParamLimits

0x4c5c,	// (0x00045c2a) bg_passive_tab_pane_cp4_ParamLimits

0x1d60,	// (0x00042d2e) list_single_midp_graphic_pane_t1_ParamLimits

0x3400,	// (0x000443ce) bg_active_tab_pane_cp5_ParamLimits

0xd2b8,	// (0x0004e286) tabs_3_long_active_pane_t1_ParamLimits

0x4c5c,	// (0x00045c2a) bg_passive_tab_pane_cp5_ParamLimits

0x1d60,	// (0x00042d2e) list_single_midp_graphic_pane_t1

0xd6b3,	// (0x0004e681) bg_status_flat_pane_ParamLimits

0x4e16,	// (0x00045de4) indicator_pane_cp2_ParamLimits

0x4e16,	// (0x00045de4) indicator_pane_cp2

0xd831,	// (0x0004e7ff) navi_pane_srt_ParamLimits

0xd831,	// (0x0004e7ff) navi_pane_srt

0x4f65,	// (0x00045f33) popup_clock_digital_analogue_window_cp1

0x34dd,	// (0x000444ab) indicator_pane_t1

0x4938,	// (0x00045906) copy_highlight_pane

0x4938,	// (0x00045906) cursor_graphics_pane

0x4938,	// (0x00045906) graphic_within_text_pane

0x4938,	// (0x00045906) link_highlight_pane

0x61c5,	// (0x00047193) popup_preview_text_window_t5_ParamLimits

0x61c5,	// (0x00047193) popup_preview_text_window_t5

0x4a66,	// (0x00045a34) cursor_digital_pane

0x4a66,	// (0x00045a34) cursor_primary_pane

0x4a77,	// (0x00045a45) cursor_primary_small_pane

0x4a7f,	// (0x00045a4d) cursor_secondary_pane

0x4a87,	// (0x00045a55) cursor_title_pane

0x4a66,	// (0x00045a34) link_highlight_digital_pane

0x4a6e,	// (0x00045a3c) link_highlight_primary_pane

0x4a77,	// (0x00045a45) link_highlight_primary_small_pane

0x4a7f,	// (0x00045a4d) link_highlight_secondary_pane

0x4a87,	// (0x00045a55) link_highlight_title_pane

0x4a66,	// (0x00045a34) copy_highlight_digital_pane

0x4a66,	// (0x00045a34) copy_highlight_primary_pane

0x4a77,	// (0x00045a45) copy_highlight_primary_small_pane

0x4a7f,	// (0x00045a4d) copy_highlight_secondary_pane

0x4a87,	// (0x00045a55) copy_highlight_title_pane

0x4a7f,	// (0x00045a4d) graphic_text_digital_pane

0x5a54,	// (0x00046a22) graphic_text_primary_pane

0x5a5d,	// (0x00046a2b) graphic_text_primary_small_pane

0x4a77,	// (0x00045a45) graphic_text_secondary_pane

0x4a66,	// (0x00045a34) graphic_text_title_pane

0xd4f7,	// (0x0004e4c5) cursor_primary_pane_g1

0x5a46,	// (0x00046a14) cursor_text_primary_t1

0xdaaf,	// (0x0004ea7d) cursor_primary_small_pane_g1

0x5a38,	// (0x00046a06) cursor_text_primary_small_t1

0xdaa5,	// (0x0004ea73) cursor_primary_small_pane_g1_copy1

0x5a20,	// (0x000469ee) cursor_text_primary_small_t1_copy1

0x59fe,	// (0x000469cc) cursor_text_title_t1

0xda9b,	// (0x0004ea69) cursor_title_pane_g1

0xd4f7,	// (0x0004e4c5) cursor_digital_pane_g1

0x4a99,	// (0x00045a67) cursor_text_digital_t1

0x4abe,	// (0x00045a8c) link_highlight_primary_pane_g1

0x59a7,	// (0x00046975) link_highlight_primary_pane_t1

0x4aa7,	// (0x00045a75) link_highlight_primary_small_pane_g1

0x4aaf,	// (0x00045a7d) link_highlight_primary_small_pane_t1

0x4abe,	// (0x00045a8c) link_highlight_secondary_pane_g1

0x4ac6,	// (0x00045a94) link_highlight_secondary_pane_t1

0x591b,	// (0x000468e9) link_highlight_title_pane_g1

0x5923,	// (0x000468f1) link_highlight_title_pane_t1

0x5904,	// (0x000468d2) link_highlight_digital_pane_g1

0x590c,	// (0x000468da) link_highlight_digital_pane_t1

0x57dc,	// (0x000467aa) copy_highlight_primary_pane_g1

0x57e4,	// (0x000467b2) copy_highlight_primary_pane_t1

0x57b6,	// (0x00046784) copy_highlight_primary_small_pane_g1

0x57cd,	// (0x0004679b) copy_highlight_primary_small_pane_t1

0x4ad5,	// (0x00045aa3) copy_highlight_secondary_pane_g1

0x4add,	// (0x00045aab) copy_highlight_secondary_pane_t1

0x57b6,	// (0x00046784) copy_highlight_title_pane_g1

0x57be,	// (0x0004678c) copy_highlight_title_pane_t1

0x57dc,	// (0x000467aa) copy_highlight_digital_pane_g1

0x6a6d,	// (0x00047a3b) copy_highlight_digital_pane_t1

0x69c1,	// (0x0004798f) graphic_text_primary_pane_g1

0x6a51,	// (0x00047a1f) graphic_text_primary_pane_t1

0x6a5f,	// (0x00047a2d) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x00050977) graphic_text_primary_pane_t

0x6a2d,	// (0x000479fb) graphic_text_primary_small_pane_g1

0x6a35,	// (0x00047a03) graphic_text_primary_small_pane_t1

0x6a43,	// (0x00047a11) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x00050972) graphic_text_primary_small_pane_t

0x6a09,	// (0x000479d7) graphic_text_secondary_pane_g1

0x6a11,	// (0x000479df) graphic_text_secondary_pane_t1

0x6a1f,	// (0x000479ed) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0005096d) graphic_text_secondary_pane_t

0x69e5,	// (0x000479b3) graphic_text_title_pane_g1

0x69ed,	// (0x000479bb) graphic_text_title_pane_t1

0x69fb,	// (0x000479c9) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x00050968) graphic_text_title_pane_t

0x69c1,	// (0x0004798f) graphic_text_digital_pane_g1

0x69c9,	// (0x00047997) graphic_text_digital_pane_t1

0x69d7,	// (0x000479a5) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x00050963) graphic_text_digital_pane_t

0x3400,	// (0x000443ce) navi_icon_pane_srt_ParamLimits

0x3400,	// (0x000443ce) navi_icon_pane_srt

0x3320,	// (0x000442ee) navi_midp_pane_srt

0x3320,	// (0x000442ee) navi_navi_pane_srt

0x3400,	// (0x000443ce) navi_text_pane_srt_ParamLimits

0x3400,	// (0x000443ce) navi_text_pane_srt

0x698c,	// (0x0004795a) navi_navi_icon_text_pane_srt

0x6994,	// (0x00047962) navi_navi_pane_srt_g1_ParamLimits

0x6994,	// (0x00047962) navi_navi_pane_srt_g1

0x69a6,	// (0x00047974) navi_navi_pane_srt_g2_ParamLimits

0x69a6,	// (0x00047974) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0005095e) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0005095e) navi_navi_pane_srt_g

0x69b8,	// (0x00047986) navi_navi_tabs_pane_srt

0x698c,	// (0x0004795a) navi_navi_text_pane_srt

0x698c,	// (0x0004795a) navi_navi_volume_pane_srt

0x697d,	// (0x0004794b) navi_navi_text_pane_srt_t1

0x2169,	// (0x00043137) navi_navi_volume_pane_srt_g1

0x2171,	// (0x0004313f) volume_small_pane_srt_ParamLimits

0x2171,	// (0x0004313f) volume_small_pane_srt

0x1501,	// (0x000424cf) volume_small_pane_srt_g1_ParamLimits

0x1501,	// (0x000424cf) volume_small_pane_srt_g1

0x1511,	// (0x000424df) volume_small_pane_srt_g2_ParamLimits

0x1511,	// (0x000424df) volume_small_pane_srt_g2

0x1522,	// (0x000424f0) volume_small_pane_srt_g3_ParamLimits

0x1522,	// (0x000424f0) volume_small_pane_srt_g3

0x1533,	// (0x00042501) volume_small_pane_srt_g4_ParamLimits

0x1533,	// (0x00042501) volume_small_pane_srt_g4

0x1544,	// (0x00042512) volume_small_pane_srt_g5_ParamLimits

0x1544,	// (0x00042512) volume_small_pane_srt_g5

0x1555,	// (0x00042523) volume_small_pane_srt_g6_ParamLimits

0x1555,	// (0x00042523) volume_small_pane_srt_g6

0x1566,	// (0x00042534) volume_small_pane_srt_g7_ParamLimits

0x1566,	// (0x00042534) volume_small_pane_srt_g7

0x1577,	// (0x00042545) volume_small_pane_srt_g8_ParamLimits

0x1577,	// (0x00042545) volume_small_pane_srt_g8

0x1588,	// (0x00042556) volume_small_pane_srt_g9_ParamLimits

0x1588,	// (0x00042556) volume_small_pane_srt_g9

0x1599,	// (0x00042567) volume_small_pane_srt_g10_ParamLimits

0x1599,	// (0x00042567) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0005070b) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0005070b) volume_small_pane_srt_g

0x3800,	// (0x000447ce) query_popup_data_pane_cp2

0x6963,	// (0x00047931) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6963,	// (0x00047931) navi_navi_icon_text_pane_srt_t1

0x5a54,	// (0x00046a22) navi_tabs_2_long_pane_srt

0x5a54,	// (0x00046a22) navi_tabs_2_pane_srt

0x5a54,	// (0x00046a22) navi_tabs_3_long_pane_srt

0x5a54,	// (0x00046a22) navi_tabs_3_pane_srt

0x5a54,	// (0x00046a22) navi_tabs_4_pane_srt

0x2149,	// (0x00043117) tabs_2_active_pane_srt_ParamLimits

0x2149,	// (0x00043117) tabs_2_active_pane_srt

0x2159,	// (0x00043127) tabs_2_passive_pane_srt_ParamLimits

0x2159,	// (0x00043127) tabs_2_passive_pane_srt

0x51fa,	// (0x000461c8) bg_passive_tab_pane_cp1_srt_ParamLimits

0x51fa,	// (0x000461c8) bg_passive_tab_pane_cp1_srt

0x692f,	// (0x000478fd) bg_passive_tab_pane_g1_cp1_srt

0x4583,	// (0x00045551) bg_passive_tab_pane_g2_cp1_srt

0x6938,	// (0x00047906) bg_passive_tab_pane_g3_cp1_srt

0x367b,	// (0x00044649) bg_active_tab_pane_cp1_srt_ParamLimits

0x367b,	// (0x00044649) bg_active_tab_pane_cp1_srt

0x6941,	// (0x0004790f) tabs_2_active_pane_srt_g1

0xde50,	// (0x0004ee1e) tabs_2_active_pane_srt_t1_ParamLimits

0xde50,	// (0x0004ee1e) tabs_2_active_pane_srt_t1

0x692f,	// (0x000478fd) bg_active_tab_pane_g1_cp1_srt

0x4583,	// (0x00045551) bg_active_tab_pane_g2_cp1_srt

0x6938,	// (0x00047906) bg_active_tab_pane_g3_cp1_srt

0x2116,	// (0x000430e4) tabs_3_active_pane_srt_ParamLimits

0x2116,	// (0x000430e4) tabs_3_active_pane_srt

0x2127,	// (0x000430f5) tabs_3_passive_pane_cp_srt_ParamLimits

0x2127,	// (0x000430f5) tabs_3_passive_pane_cp_srt

0x2138,	// (0x00043106) tabs_3_passive_pane_srt_ParamLimits

0x2138,	// (0x00043106) tabs_3_passive_pane_srt

0x51fa,	// (0x000461c8) bg_passive_tab_pane_cp2_srt_ParamLimits

0x51fa,	// (0x000461c8) bg_passive_tab_pane_cp2_srt

0x4aec,	// (0x00045aba) bg_passive_tab_pane_g1_cp2_srt

0x4583,	// (0x00045551) bg_passive_tab_pane_g2_cp2_srt

0x4af5,	// (0x00045ac3) bg_passive_tab_pane_g3_cp2_srt

0x367b,	// (0x00044649) bg_active_tab_pane_cp2_srt_ParamLimits

0x367b,	// (0x00044649) bg_active_tab_pane_cp2_srt

0x6915,	// (0x000478e3) tabs_3_active_pane_srt_g1

0xde3a,	// (0x0004ee08) tabs_3_active_pane_srt_t1_ParamLimits

0xde3a,	// (0x0004ee08) tabs_3_active_pane_srt_t1

0x4aec,	// (0x00045aba) bg_active_tab_pane_g1_cp2_srt

0x4583,	// (0x00045551) bg_active_tab_pane_g2_cp2_srt

0x4af5,	// (0x00045ac3) bg_active_tab_pane_g3_cp2_srt

0x20ce,	// (0x0004309c) tabs_4_active_pane_srt_ParamLimits

0x20ce,	// (0x0004309c) tabs_4_active_pane_srt

0x20e0,	// (0x000430ae) tabs_4_passive_pane_cp2_srt_ParamLimits

0x20e0,	// (0x000430ae) tabs_4_passive_pane_cp2_srt

0x1708,	// (0x000426d6) aid_size_cell_toolbar

0x656f,	// (0x0004753d) main_idle_act_pane_ParamLimits

0x18c7,	// (0x00042895) popup_large_graphic_colour_window_ParamLimits

0xca63,	// (0x0004da31) popup_toolbar_window_ParamLimits

0xca63,	// (0x0004da31) popup_toolbar_window

0x6733,	// (0x00047701) list_single_graphic_2heading_pane_ParamLimits

0x6733,	// (0x00047701) list_single_graphic_2heading_pane

0x403d,	// (0x0004500b) aid_size_cell_apps_grid_lsc_pane

0x404f,	// (0x0004501d) aid_size_cell_apps_grid_prt_pane

0x4c5c,	// (0x00045c2a) bg_wml_button_pane_cp1_ParamLimits

0x4c5c,	// (0x00045c2a) bg_wml_button_pane_cp1

0xda5e,	// (0x0004ea2c) form_midp_field_text_pane_t1_ParamLimits

0x51fa,	// (0x000461c8) input_focus_pane_cp050_ParamLimits

0x5461,	// (0x0004642f) list_midp_form_text_pane_ParamLimits

0x5407,	// (0x000463d5) input_focus_pane_cp051_ParamLimits

0x541b,	// (0x000463e9) list_midp_choice_pane_ParamLimits

0xd9fc,	// (0x0004e9ca) list_single_2graphic_pane_cp3_ParamLimits

0xd9fc,	// (0x0004e9ca) list_single_2graphic_pane_cp3

0xda0f,	// (0x0004e9dd) list_single_midp_graphic_pane_ParamLimits

0xda0f,	// (0x0004e9dd) list_single_midp_graphic_pane

0x04a6,	// (0x00041474) list_single_graphic_2heading_pane_g1_ParamLimits

0x04a6,	// (0x00041474) list_single_graphic_2heading_pane_g1

0x04b2,	// (0x00041480) list_single_graphic_2heading_pane_g4_ParamLimits

0x04b2,	// (0x00041480) list_single_graphic_2heading_pane_g4

0x04be,	// (0x0004148c) list_single_graphic_2heading_pane_g5_ParamLimits

0x04be,	// (0x0004148c) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x0005075e) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x0005075e) list_single_graphic_2heading_pane_g

0x04ca,	// (0x00041498) list_single_graphic_2heading_pane_t1_ParamLimits

0x04ca,	// (0x00041498) list_single_graphic_2heading_pane_t1

0x04de,	// (0x000414ac) list_single_graphic_2heading_pane_t2_ParamLimits

0x04de,	// (0x000414ac) list_single_graphic_2heading_pane_t2

0x04fa,	// (0x000414c8) list_single_graphic_2heading_pane_t3_ParamLimits

0x04fa,	// (0x000414c8) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00050765) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00050765) list_single_graphic_2heading_pane_t

0x50c4,	// (0x00046092) bg_popup_sub_pane_cp2

0x50ee,	// (0x000460bc) grid_toobar_pane

0x1cdb,	// (0x00042ca9) cell_toolbar_pane_ParamLimits

0x1cdb,	// (0x00042ca9) cell_toolbar_pane

0x512a,	// (0x000460f8) cell_toolbar_pane_g1_ParamLimits

0x512a,	// (0x000460f8) cell_toolbar_pane_g1

0x513e,	// (0x0004610c) cell_toolbar_pane_g2_ParamLimits

0x513e,	// (0x0004610c) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x00050773) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x00050773) cell_toolbar_pane_g

0x5160,	// (0x0004612e) grid_highlight_pane_cp2_ParamLimits

0x5160,	// (0x0004612e) grid_highlight_pane_cp2

0x517a,	// (0x00046148) toolbar_button_pane

0x5186,	// (0x00046154) toolbar_button_pane_g1

0x518e,	// (0x0004615c) toolbar_button_pane_g2

0x5196,	// (0x00046164) toolbar_button_pane_g3

0x519e,	// (0x0004616c) toolbar_button_pane_g4

0x51a6,	// (0x00046174) toolbar_button_pane_g5

0x51ae,	// (0x0004617c) toolbar_button_pane_g6

0x51b6,	// (0x00046184) toolbar_button_pane_g7

0x51be,	// (0x0004618c) toolbar_button_pane_g8

0x51c6,	// (0x00046194) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x00050778) toolbar_button_pane_g

0x1d13,	// (0x00042ce1) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1d13,	// (0x00042ce1) list_single_2graphic_pane_g1_cp3

0xcabb,	// (0x0004da89) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcabb,	// (0x0004da89) list_single_2graphic_pane_g2_cp3

0x1d30,	// (0x00042cfe) list_single_2graphic_pane_g3_cp3

0x1d38,	// (0x00042d06) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1d38,	// (0x00042d06) list_single_2graphic_pane_g4_cp3

0x1d44,	// (0x00042d12) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1d44,	// (0x00042d12) list_single_2graphic_pane_t1_cp3

0x6695,	// (0x00047663) list_single_midp_graphic_pane_g2_ParamLimits

0x6695,	// (0x00047663) list_single_midp_graphic_pane_g2

0x0496,	// (0x00041464) aid_zoom_text_primary

0x1710,	// (0x000426de) aid_zoom_text_secondary

0xd54f,	// (0x0004e51d) status_small_pane_g7_ParamLimits

0xd54f,	// (0x0004e51d) status_small_pane_g7

0xd572,	// (0x0004e540) status_small_pane_t1_ParamLimits

0xbeda,	// (0x0004cea8) title_pane_g2

0x0003,

0xf529,	// (0x000504f7) title_pane_g

0xc152,	// (0x0004d120) aid_size_cell_colour_1_pane_ParamLimits

0xc152,	// (0x0004d120) aid_size_cell_colour_1_pane

0xc166,	// (0x0004d134) aid_size_cell_colour_2_pane_ParamLimits

0xc166,	// (0x0004d134) aid_size_cell_colour_2_pane

0xc17a,	// (0x0004d148) aid_size_cell_colour_3_pane_ParamLimits

0xc17a,	// (0x0004d148) aid_size_cell_colour_3_pane

0xc18e,	// (0x0004d15c) aid_size_cell_colour_4_pane_ParamLimits

0xc18e,	// (0x0004d15c) aid_size_cell_colour_4_pane

0x1142,	// (0x00042110) title_pane_stacon_g1_ParamLimits

0x1142,	// (0x00042110) title_pane_stacon_g1

0x583b,	// (0x00046809) popup_note_wait_window_g3_ParamLimits

0x583b,	// (0x00046809) popup_note_wait_window_g3

0x58b1,	// (0x0004687f) popup_note_wait_window_t5_ParamLimits

0x58b1,	// (0x0004687f) popup_note_wait_window_t5

0x3320,	// (0x000442ee) main_feb_china_hwr_fs_writing_pane

0xc465,	// (0x0004d433) popup_feb_china_hwr_fs_window_ParamLimits

0xc465,	// (0x0004d433) popup_feb_china_hwr_fs_window

0xcacc,	// (0x0004da9a) aid_size_cell_hwr_fs_ParamLimits

0xcacc,	// (0x0004da9a) aid_size_cell_hwr_fs

0x51fa,	// (0x000461c8) bg_popup_sub_pane_cp3_ParamLimits

0x51fa,	// (0x000461c8) bg_popup_sub_pane_cp3

0xcae1,	// (0x0004daaf) grid_hwr_fs_pane_ParamLimits

0xcae1,	// (0x0004daaf) grid_hwr_fs_pane

0x1dbb,	// (0x00042d89) linegrid_hwr_fs_pane_ParamLimits

0x1dbb,	// (0x00042d89) linegrid_hwr_fs_pane

0xcaf9,	// (0x0004dac7) cell_hwr_fs_pane_ParamLimits

0xcaf9,	// (0x0004dac7) cell_hwr_fs_pane

0x5206,	// (0x000461d4) linegrid_hwr_fs_pane_g1_ParamLimits

0x5206,	// (0x000461d4) linegrid_hwr_fs_pane_g1

0xd9d0,	// (0x0004e99e) linegrid_hwr_fs_pane_g2_ParamLimits

0xd9d0,	// (0x0004e99e) linegrid_hwr_fs_pane_g2

0x5224,	// (0x000461f2) linegrid_hwr_fs_pane_g3_ParamLimits

0x5224,	// (0x000461f2) linegrid_hwr_fs_pane_g3

0x1ded,	// (0x00042dbb) linegrid_hwr_fs_pane_g4_ParamLimits

0x1ded,	// (0x00042dbb) linegrid_hwr_fs_pane_g4

0x1e07,	// (0x00042dd5) linegrid_hwr_fs_pane_g5_ParamLimits

0x1e07,	// (0x00042dd5) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0005079e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0005079e) linegrid_hwr_fs_pane_g

0x5230,	// (0x000461fe) cell_hwr_fs_pane_g1_ParamLimits

0x5230,	// (0x000461fe) cell_hwr_fs_pane_g1

0x4ffb,	// (0x00045fc9) cell_hwr_fs_pane_g2_ParamLimits

0x4ffb,	// (0x00045fc9) cell_hwr_fs_pane_g2

0xd9e2,	// (0x0004e9b0) cell_hwr_fs_pane_g3_ParamLimits

0xd9e2,	// (0x0004e9b0) cell_hwr_fs_pane_g3

0xd9ef,	// (0x0004e9bd) cell_hwr_fs_pane_g4_ParamLimits

0xd9ef,	// (0x0004e9bd) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x000507a9) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x000507a9) cell_hwr_fs_pane_g

0xcb1f,	// (0x0004daed) cell_hwr_fs_pane_t1

0x3320,	// (0x000442ee) grid_highlight_pane_cp6

0x3320,	// (0x000442ee) main_idle_act2_pane

0x3df4,	// (0x00044dc2) aid_inside_area_popup_secondary

0xdab9,	// (0x0004ea87) aid_inside_area_window_primary_ParamLimits

0xdab9,	// (0x0004ea87) aid_inside_area_window_primary

0x6a7c,	// (0x00047a4a) ai2_news_ticker_pane

0x6a84,	// (0x00047a52) aid_size_cell_ai1_link_ParamLimits

0x6a84,	// (0x00047a52) aid_size_cell_ai1_link

0xde66,	// (0x0004ee34) popup_ai2_data_window_ParamLimits

0xde66,	// (0x0004ee34) popup_ai2_data_window

0x6ab4,	// (0x00047a82) popup_ai2_link_window_ParamLimits

0x6ab4,	// (0x00047a82) popup_ai2_link_window

0x51fa,	// (0x000461c8) bg_popup_sub_pane_cp4_ParamLimits

0x51fa,	// (0x000461c8) bg_popup_sub_pane_cp4

0x6ac8,	// (0x00047a96) grid_ai2_link_pane_ParamLimits

0x6ac8,	// (0x00047a96) grid_ai2_link_pane

0x6adf,	// (0x00047aad) popup_ai2_link_window_g1_ParamLimits

0x6adf,	// (0x00047aad) popup_ai2_link_window_g1

0x6aeb,	// (0x00047ab9) popup_ai2_link_window_g2_ParamLimits

0x6aeb,	// (0x00047ab9) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0005097c) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0005097c) popup_ai2_link_window_g

0x6afa,	// (0x00047ac8) ai2_mp_button_pane

0x6b02,	// (0x00047ad0) ai2_mp_volume_pane

0x5407,	// (0x000463d5) bg_popup_sub_pane_cp5_ParamLimits

0x5407,	// (0x000463d5) bg_popup_sub_pane_cp5

0x6b0a,	// (0x00047ad8) heading_ai2_gene_pane_ParamLimits

0x6b0a,	// (0x00047ad8) heading_ai2_gene_pane

0x6b16,	// (0x00047ae4) list_ai2_gene_pane_ParamLimits

0x6b16,	// (0x00047ae4) list_ai2_gene_pane

0x6b5e,	// (0x00047b2c) cell_ai2_link_pane_ParamLimits

0x6b5e,	// (0x00047b2c) cell_ai2_link_pane

0x6b74,	// (0x00047b42) cell_ai2_link_pane_g1

0x3320,	// (0x000442ee) grid_highlight_pane_cp7

0x2186,	// (0x00043154) ai2_mp_volume_pane_g1

0x6c44,	// (0x00047c12) ai2_mp_volume_pane_g2

0xde90,	// (0x0004ee5e) list_ai2_gene_pane_t1

0x6c4c,	// (0x00047c1a) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x00050995) ai2_mp_volume_pane_g

0x218e,	// (0x0004315c) volume_small_pane_cp3

0x6c54,	// (0x00047c22) aid_size_cell_ai2_button

0x6c5c,	// (0x00047c2a) grid_ai2_button_pane

0x6c65,	// (0x00047c33) cell_ai2_button_pane_ParamLimits

0x6c65,	// (0x00047c33) cell_ai2_button_pane

0xe163,	// (0x0004f131) cell_ai2_button_pane_g1

0x3320,	// (0x000442ee) grid_highlight_pane_cp8

0x6c04,	// (0x00047bd2) ai2_gene_pane_t1_ParamLimits

0x6c04,	// (0x00047bd2) ai2_gene_pane_t1

0xc403,	// (0x0004d3d1) aid_height_parent_landscape

0xdc01,	// (0x0004ebcf) aid_height_set_list

0x656f,	// (0x0004753d) aid_size_parent

0x689f,	// (0x0004786d) aid_size_cell_graphic_pane_ParamLimits

0x6b26,	// (0x00047af4) popup_ai2_data_window_g1_ParamLimits

0x6b26,	// (0x00047af4) popup_ai2_data_window_g1

0x6b32,	// (0x00047b00) ai2_news_ticker_pane_g1

0x6b3a,	// (0x00047b08) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x00050981) ai2_news_ticker_pane_g

0x6b42,	// (0x00047b10) ai2_news_ticker_pane_t1

0x6b50,	// (0x00047b1e) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x00050986) ai2_news_ticker_pane_t

0x6b7d,	// (0x00047b4b) heading_ai2_gene_pane_g1

0x6b85,	// (0x00047b53) heading_ai2_gene_pane_t1_ParamLimits

0x6b85,	// (0x00047b53) heading_ai2_gene_pane_t1

0x6b9a,	// (0x00047b68) list_highlight_pane_cp6

0xde7a,	// (0x0004ee48) ai2_gene_pane_ParamLimits

0xde7a,	// (0x0004ee48) ai2_gene_pane

0xde9e,	// (0x0004ee6c) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0005098b) list_ai2_gene_pane_t

0x6bd5,	// (0x00047ba3) list_highlight_pane_cp8_ParamLimits

0x6bd5,	// (0x00047ba3) list_highlight_pane_cp8

0x6be6,	// (0x00047bb4) ai2_gene_pane_g1_ParamLimits

0x6be6,	// (0x00047bb4) ai2_gene_pane_g1

0x6bf8,	// (0x00047bc6) ai2_gene_pane_g2_ParamLimits

0x6bf8,	// (0x00047bc6) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x00050990) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x00050990) ai2_gene_pane_g

0x3c23,	// (0x00044bf1) scroll_pane_cp12

0xc3c0,	// (0x0004d38e) control_pane_t3_ParamLimits

0xc3c0,	// (0x0004d38e) control_pane_t3

0xd563,	// (0x0004e531) status_small_pane_g8_ParamLimits

0xd563,	// (0x0004e531) status_small_pane_g8

0xc4fa,	// (0x0004d4c8) popup_find_window_ParamLimits

0xc78d,	// (0x0004d75b) popup_note_image_window_ParamLimits

0x0512,	// (0x000414e0) list_double2_graphic_pane_vc_g1_ParamLimits

0x0512,	// (0x000414e0) list_double2_graphic_pane_vc_g1

0x4434,	// (0x00045402) list_double2_graphic_pane_vc_g2_ParamLimits

0x4434,	// (0x00045402) list_double2_graphic_pane_vc_g2

0x1084,	// (0x00042052) list_double2_graphic_pane_vc_g3_ParamLimits

0x1084,	// (0x00042052) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x0005076c) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x0005076c) list_double2_graphic_pane_vc_g

0x051e,	// (0x000414ec) list_double2_graphic_pane_vc_t1_ParamLimits

0x051e,	// (0x000414ec) list_double2_graphic_pane_vc_t1

0x4434,	// (0x00045402) list_single_heading_pane_vc_g1_ParamLimits

0x4434,	// (0x00045402) list_single_heading_pane_vc_g1

0x1084,	// (0x00042052) list_single_heading_pane_vc_g2_ParamLimits

0x1084,	// (0x00042052) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005057b) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005057b) list_single_heading_pane_vc_g

0x0534,	// (0x00041502) list_single_heading_pane_vc_t1_ParamLimits

0x0534,	// (0x00041502) list_single_heading_pane_vc_t1

0x054a,	// (0x00041518) list_single_heading_pane_vc_t2_ParamLimits

0x054a,	// (0x00041518) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0005078d) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0005078d) list_single_heading_pane_vc_t

0x1d76,	// (0x00042d44) list_setting_number_pane_vc_g1_ParamLimits

0x1d76,	// (0x00042d44) list_setting_number_pane_vc_g1

0x1d82,	// (0x00042d50) list_setting_number_pane_vc_g2_ParamLimits

0x1d82,	// (0x00042d50) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x00050792) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x00050792) list_setting_number_pane_vc_g

0x055c,	// (0x0004152a) list_setting_number_pane_vc_t1_ParamLimits

0x055c,	// (0x0004152a) list_setting_number_pane_vc_t1

0x0570,	// (0x0004153e) list_setting_number_pane_vc_t2_ParamLimits

0x0570,	// (0x0004153e) list_setting_number_pane_vc_t2

0x058c,	// (0x0004155a) list_setting_number_pane_vc_t3_ParamLimits

0x058c,	// (0x0004155a) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x00050797) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x00050797) list_setting_number_pane_vc_t

0x05b8,	// (0x00041586) set_value_pane_vc_ParamLimits

0x05b8,	// (0x00041586) set_value_pane_vc

0x6733,	// (0x00047701) list_double2_graphic_pane_vc_ParamLimits

0x6733,	// (0x00047701) list_double2_graphic_pane_vc

0x6733,	// (0x00047701) list_double2_large_graphic_pane_vc_ParamLimits

0x6733,	// (0x00047701) list_double2_large_graphic_pane_vc

0x6733,	// (0x00047701) list_double2_pane_vc_ParamLimits

0x6733,	// (0x00047701) list_double2_pane_vc

0x6733,	// (0x00047701) list_double_graphic_heading_pane_vc_ParamLimits

0x6733,	// (0x00047701) list_double_graphic_heading_pane_vc

0x6733,	// (0x00047701) list_double_graphic_pane_vc_ParamLimits

0x6733,	// (0x00047701) list_double_graphic_pane_vc

0x6733,	// (0x00047701) list_double_heading_pane_vc_ParamLimits

0x6733,	// (0x00047701) list_double_heading_pane_vc

0x6745,	// (0x00047713) list_double_large_graphic_pane_vc_ParamLimits

0x6745,	// (0x00047713) list_double_large_graphic_pane_vc

0x6733,	// (0x00047701) list_double_number_pane_vc_ParamLimits

0x6733,	// (0x00047701) list_double_number_pane_vc

0x6733,	// (0x00047701) list_double_pane_vc_ParamLimits

0x6733,	// (0x00047701) list_double_pane_vc

0x6733,	// (0x00047701) list_double_time_pane_vc_ParamLimits

0x6733,	// (0x00047701) list_double_time_pane_vc

0x6733,	// (0x00047701) list_setting_number_pane_vc_ParamLimits

0x6733,	// (0x00047701) list_setting_number_pane_vc

0x6733,	// (0x00047701) list_setting_pane_vc_ParamLimits

0x6733,	// (0x00047701) list_setting_pane_vc

0x6733,	// (0x00047701) list_single_graphic_heading_pane_vc_ParamLimits

0x6733,	// (0x00047701) list_single_graphic_heading_pane_vc

0x6733,	// (0x00047701) list_single_heading_pane_vc_ParamLimits

0x6733,	// (0x00047701) list_single_heading_pane_vc

0x6733,	// (0x00047701) list_single_number_heading_pane_vc_ParamLimits

0x6733,	// (0x00047701) list_single_number_heading_pane_vc

0x0512,	// (0x000414e0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0512,	// (0x000414e0) list_double_graphic_heading_pane_vc_g1

0x4434,	// (0x00045402) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4434,	// (0x00045402) list_double_graphic_heading_pane_vc_g2

0x1084,	// (0x00042052) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1084,	// (0x00042052) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf79e,	// (0x0005076c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0005076c) list_double_graphic_heading_pane_vc_g

0x0690,	// (0x0004165e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0690,	// (0x0004165e) list_double_graphic_heading_pane_vc_t1

0x06ac,	// (0x0004167a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x06ac,	// (0x0004167a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x0005099c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x0005099c) list_double_graphic_heading_pane_vc_t

0x1d76,	// (0x00042d44) list_setting_pane_vc_g1_ParamLimits

0x1d76,	// (0x00042d44) list_setting_pane_vc_g1

0x1d82,	// (0x00042d50) list_setting_pane_vc_g2_ParamLimits

0x1d82,	// (0x00042d50) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x00050792) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x00050792) list_setting_pane_vc_g

0x06ca,	// (0x00041698) list_setting_pane_vc_t1_ParamLimits

0x06ca,	// (0x00041698) list_setting_pane_vc_t1

0x06e6,	// (0x000416b4) list_setting_pane_vc_t2_ParamLimits

0x06e6,	// (0x000416b4) list_setting_pane_vc_t2

0x0001,

0xf9fc,	// (0x000509ca) list_setting_pane_vc_t_ParamLimits

0xf9fc,	// (0x000509ca) list_setting_pane_vc_t

0x05b8,	// (0x00041586) set_value_pane_cp_vc_ParamLimits

0x05b8,	// (0x00041586) set_value_pane_cp_vc

0x4434,	// (0x00045402) list_single_number_heading_pane_vc_g1_ParamLimits

0x4434,	// (0x00045402) list_single_number_heading_pane_vc_g1

0x1084,	// (0x00042052) list_single_number_heading_pane_vc_g2_ParamLimits

0x1084,	// (0x00042052) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005057b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005057b) list_single_number_heading_pane_vc_g

0x0702,	// (0x000416d0) list_single_number_heading_pane_vc_t1_ParamLimits

0x0702,	// (0x000416d0) list_single_number_heading_pane_vc_t1

0xf4a9,	// (0x00050477) list_single_number_heading_pane_vc_t2_ParamLimits

0xf4a9,	// (0x00050477) list_single_number_heading_pane_vc_t2

0xf4bb,	// (0x00050489) list_single_number_heading_pane_vc_t3_ParamLimits

0xf4bb,	// (0x00050489) list_single_number_heading_pane_vc_t3

0x0002,

0xfa01,	// (0x000509cf) list_single_number_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x000509cf) list_single_number_heading_pane_vc_t

0x0512,	// (0x000414e0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0512,	// (0x000414e0) list_single_graphic_heading_pane_vc_g1

0x4434,	// (0x00045402) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4434,	// (0x00045402) list_single_graphic_heading_pane_vc_g4

0x1084,	// (0x00042052) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1084,	// (0x00042052) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x0005076c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0005076c) list_single_graphic_heading_pane_vc_g

0x0702,	// (0x000416d0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0702,	// (0x000416d0) list_single_graphic_heading_pane_vc_t1

0x0718,	// (0x000416e6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0718,	// (0x000416e6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa08,	// (0x000509d6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x000509d6) list_single_graphic_heading_pane_vc_t

0x4434,	// (0x00045402) list_double2_pane_vc_g1_ParamLimits

0x4434,	// (0x00045402) list_double2_pane_vc_g1

0x1084,	// (0x00042052) list_double2_pane_vc_g2_ParamLimits

0x1084,	// (0x00042052) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005057b) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005057b) list_double2_pane_vc_g

0x0643,	// (0x00041611) list_double2_pane_vc_t1_ParamLimits

0x0643,	// (0x00041611) list_double2_pane_vc_t1

0x2197,	// (0x00043165) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2197,	// (0x00043165) list_double2_large_graphic_pane_vc_g1

0x4434,	// (0x00045402) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4434,	// (0x00045402) list_double2_large_graphic_pane_vc_g2

0x1084,	// (0x00042052) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1084,	// (0x00042052) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x00050593) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x00050593) list_double2_large_graphic_pane_vc_g

0x072a,	// (0x000416f8) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x072a,	// (0x000416f8) list_double2_large_graphic_pane_vc_t1

0x21a3,	// (0x00043171) list_double_time_pane_vc_g1_ParamLimits

0x21a3,	// (0x00043171) list_double_time_pane_vc_g1

0x21af,	// (0x0004317d) list_double_time_pane_vc_g2_ParamLimits

0x21af,	// (0x0004317d) list_double_time_pane_vc_g2

0x0001,

0xfa0d,	// (0x000509db) list_double_time_pane_vc_g_ParamLimits

0xfa0d,	// (0x000509db) list_double_time_pane_vc_g

0x0740,	// (0x0004170e) list_double_time_pane_vc_t1_ParamLimits

0x0740,	// (0x0004170e) list_double_time_pane_vc_t1

0x0764,	// (0x00041732) list_double_time_pane_vc_t2_ParamLimits

0x0764,	// (0x00041732) list_double_time_pane_vc_t2

0x07b3,	// (0x00041781) list_double_time_pane_vc_t3_ParamLimits

0x07b3,	// (0x00041781) list_double_time_pane_vc_t3

0x07c5,	// (0x00041793) list_double_time_pane_vc_t4_ParamLimits

0x07c5,	// (0x00041793) list_double_time_pane_vc_t4

0x0003,

0xfa12,	// (0x000509e0) list_double_time_pane_vc_t_ParamLimits

0xfa12,	// (0x000509e0) list_double_time_pane_vc_t

0x4434,	// (0x00045402) list_double_pane_vc_g1_ParamLimits

0x4434,	// (0x00045402) list_double_pane_vc_g1

0x1084,	// (0x00042052) list_double_pane_vc_g2_ParamLimits

0x1084,	// (0x00042052) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005057b) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005057b) list_double_pane_vc_g

0x07d9,	// (0x000417a7) list_double_pane_vc_t1_ParamLimits

0x07d9,	// (0x000417a7) list_double_pane_vc_t1

0x07ed,	// (0x000417bb) list_double_pane_vc_t2_ParamLimits

0x07ed,	// (0x000417bb) list_double_pane_vc_t2

0x0001,

0xfa1b,	// (0x000509e9) list_double_pane_vc_t_ParamLimits

0xfa1b,	// (0x000509e9) list_double_pane_vc_t

0x4434,	// (0x00045402) list_double_number_pane_vc_g1_ParamLimits

0x4434,	// (0x00045402) list_double_number_pane_vc_g1

0x1084,	// (0x00042052) list_double_number_pane_vc_g2_ParamLimits

0x1084,	// (0x00042052) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005057b) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005057b) list_double_number_pane_vc_g

0x0805,	// (0x000417d3) list_double_number_pane_vc_t1_ParamLimits

0x0805,	// (0x000417d3) list_double_number_pane_vc_t1

0x0817,	// (0x000417e5) list_double_number_pane_vc_t2_ParamLimits

0x0817,	// (0x000417e5) list_double_number_pane_vc_t2

0x082b,	// (0x000417f9) list_double_number_pane_vc_t3_ParamLimits

0x082b,	// (0x000417f9) list_double_number_pane_vc_t3

0x0002,

0xfa20,	// (0x000509ee) list_double_number_pane_vc_t_ParamLimits

0xfa20,	// (0x000509ee) list_double_number_pane_vc_t

0x21bb,	// (0x00043189) list_double_large_graphic_pane_vc_g1_ParamLimits

0x21bb,	// (0x00043189) list_double_large_graphic_pane_vc_g1

0x21d7,	// (0x000431a5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x21d7,	// (0x000431a5) list_double_large_graphic_pane_vc_g2

0x21eb,	// (0x000431b9) list_double_large_graphic_pane_vc_g3_ParamLimits

0x21eb,	// (0x000431b9) list_double_large_graphic_pane_vc_g3

0x0843,	// (0x00041811) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0843,	// (0x00041811) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa27,	// (0x000509f5) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa27,	// (0x000509f5) list_double_large_graphic_pane_vc_g

0x0852,	// (0x00041820) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0852,	// (0x00041820) list_double_large_graphic_pane_vc_t1

0x086e,	// (0x0004183c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x086e,	// (0x0004183c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa30,	// (0x000509fe) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa30,	// (0x000509fe) list_double_large_graphic_pane_vc_t

0x4434,	// (0x00045402) list_double_heading_pane_vc_g1_ParamLimits

0x4434,	// (0x00045402) list_double_heading_pane_vc_g1

0x1084,	// (0x00042052) list_double_heading_pane_vc_g2_ParamLimits

0x1084,	// (0x00042052) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005057b) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005057b) list_double_heading_pane_vc_g

0x0890,	// (0x0004185e) list_double_heading_pane_vc_t1_ParamLimits

0x0890,	// (0x0004185e) list_double_heading_pane_vc_t1

0x08a4,	// (0x00041872) list_double_heading_pane_vc_t2_ParamLimits

0x08a4,	// (0x00041872) list_double_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x00050a03) list_double_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x00050a03) list_double_heading_pane_vc_t

0x08bc,	// (0x0004188a) list_double_graphic_pane_vc_g1_ParamLimits

0x08bc,	// (0x0004188a) list_double_graphic_pane_vc_g1

0x21fa,	// (0x000431c8) list_double_graphic_pane_vc_g2_ParamLimits

0x21fa,	// (0x000431c8) list_double_graphic_pane_vc_g2

0x4434,	// (0x00045402) list_double_graphic_pane_vc_g3_ParamLimits

0x4434,	// (0x00045402) list_double_graphic_pane_vc_g3

0x0003,

0xfa3a,	// (0x00050a08) list_double_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x00050a08) list_double_graphic_pane_vc_g

0x08c8,	// (0x00041896) list_double_graphic_pane_vc_t1_ParamLimits

0x08c8,	// (0x00041896) list_double_graphic_pane_vc_t1

0x08f2,	// (0x000418c0) list_double_graphic_pane_vc_t2_ParamLimits

0x08f2,	// (0x000418c0) list_double_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x00050a11) list_double_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x00050a11) list_double_graphic_pane_vc_t

0x0c1c,	// (0x00041bea) aid_size_cell_fastswap

0xbcc1,	// (0x0004cc8f) aid_size_cell_touch_ParamLimits

0xbcc1,	// (0x0004cc8f) aid_size_cell_touch

0x0e7f,	// (0x00041e4d) popup_fast_swap_wide_window_ParamLimits

0x0e7f,	// (0x00041e4d) popup_fast_swap_wide_window

0xbe71,	// (0x0004ce3f) touch_pane_ParamLimits

0xbe71,	// (0x0004ce3f) touch_pane

0x3c85,	// (0x00044c53) button_value_adjust_pane_cp2

0x01bd,	// (0x0004118b) button_value_adjust_pane_cp4

0x01e1,	// (0x000411af) form_field_data_pane_cp2

0xb9ee,	// (0x0004c9bc) form_field_data_wide_pane_cp2

0x410c,	// (0x000450da) bg_scroll_pane_ParamLimits

0x12a4,	// (0x00042272) scroll_handle_pane_ParamLimits

0x12b8,	// (0x00042286) scroll_sc2_down_pane_ParamLimits

0x12b8,	// (0x00042286) scroll_sc2_down_pane

0x413d,	// (0x0004510b) scroll_sc2_up_pane_ParamLimits

0x413d,	// (0x0004510b) scroll_sc2_up_pane

0xdfce,	// (0x0004ef9c) grid_wheel_folder_pane_g1_ParamLimits

0xdfce,	// (0x0004ef9c) grid_wheel_folder_pane_g1

0x1499,	// (0x00042467) clock_nsta_pane_cp2_ParamLimits

0x1499,	// (0x00042467) clock_nsta_pane_cp2

0xd452,	// (0x0004e420) listscroll_midp_pane_ParamLimits

0xd45e,	// (0x0004e42c) midp_canvas_pane

0x4c34,	// (0x00045c02) nsta_clock_indic_pane

0x4c68,	// (0x00045c36) listscroll_form_pane_vc

0x4c70,	// (0x00045c3e) listscroll_set_pane_vc_ParamLimits

0x4c70,	// (0x00045c3e) listscroll_set_pane_vc

0xd6db,	// (0x0004e6a9) clock_nsta_pane

0xd705,	// (0x0004e6d3) indicator_nsta_pane

0x50c4,	// (0x00046092) bg_popup_sub_pane_cp2_ParamLimits

0x50d8,	// (0x000460a6) find_pane_cp2_ParamLimits

0x50d8,	// (0x000460a6) find_pane_cp2

0x50ee,	// (0x000460bc) grid_toobar_pane_ParamLimits

0x51ce,	// (0x0004619c) list_form_gen_pane_vc_ParamLimits

0x51ce,	// (0x0004619c) list_form_gen_pane_vc

0x51e4,	// (0x000461b2) scroll_pane_cp8_vc_ParamLimits

0x51e4,	// (0x000461b2) scroll_pane_cp8_vc

0x5260,	// (0x0004622e) data_form_wide_pane_vc_ParamLimits

0x5260,	// (0x0004622e) data_form_wide_pane_vc

0x526c,	// (0x0004623a) form_field_data_wide_pane_vc_g1

0x5274,	// (0x00046242) form_field_data_wide_pane_vc_t1_ParamLimits

0x5274,	// (0x00046242) form_field_data_wide_pane_vc_t1

0x3c99,	// (0x00044c67) input_focus_pane_cp6_vc_ParamLimits

0x3c99,	// (0x00044c67) input_focus_pane_cp6_vc

0x55ba,	// (0x00046588) list_midp_pane_ParamLimits

0x6909,	// (0x000478d7) scroll_pane_cp16_ParamLimits

0x6909,	// (0x000478d7) scroll_pane_cp16

0x5610,	// (0x000465de) button_value_adjust_pane_ParamLimits

0x5610,	// (0x000465de) button_value_adjust_pane

0xdc12,	// (0x0004ebe0) button_value_adjust_pane_cp6_ParamLimits

0xdc12,	// (0x0004ebe0) button_value_adjust_pane_cp6

0xdd2c,	// (0x0004ecfa) settings_code_pane_cp_ParamLimits

0xdd2c,	// (0x0004ecfa) settings_code_pane_cp

0xe163,	// (0x0004f131) cell_touch_pane_g1

0xe163,	// (0x0004f131) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x000506b1) cell_touch_pane_g

0xdeac,	// (0x0004ee7a) cell_touch_pane_cp_ParamLimits

0xdeac,	// (0x0004ee7a) cell_touch_pane_cp

0xdec8,	// (0x0004ee96) cell_touch_pane_ParamLimits

0xdec8,	// (0x0004ee96) cell_touch_pane

0xe163,	// (0x0004f131) scroll_sc2_down_pane_g1

0xe163,	// (0x0004f131) scroll_sc2_up_pane_g1

0x3320,	// (0x000442ee) bg_set_opt_pane_cp4_vc

0x6c99,	// (0x00047c67) list_set_graphic_pane_vc_g1_ParamLimits

0x6c99,	// (0x00047c67) list_set_graphic_pane_vc_g1

0x6ca5,	// (0x00047c73) list_set_graphic_pane_vc_g2_ParamLimits

0x6ca5,	// (0x00047c73) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x000509a1) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x000509a1) list_set_graphic_pane_vc_g

0x6cb1,	// (0x00047c7f) text_primary_small_cp13_vc_ParamLimits

0x6cb1,	// (0x00047c7f) text_primary_small_cp13_vc

0x6cc9,	// (0x00047c97) list_set_graphic_pane_vc_ParamLimits

0x6cc9,	// (0x00047c97) list_set_graphic_pane_vc

0x3320,	// (0x000442ee) input_focus_pane_cp2_vc

0xe163,	// (0x0004f131) setting_code_pane_vc_g1

0x344b,	// (0x00044419) setting_code_pane_vc_t1

0x6cdc,	// (0x00047caa) set_text_pane_vc_t1_ParamLimits

0x6cdc,	// (0x00047caa) set_text_pane_vc_t1

0x3320,	// (0x000442ee) input_focus_pane_cp1_vc

0x6cf8,	// (0x00047cc6) list_set_text_pane_vc

0xe163,	// (0x0004f131) setting_text_pane_vc_g1

0x3320,	// (0x000442ee) bg_set_opt_pane_cp2_vc

0x3442,	// (0x00044410) setting_slider_graphic_pane_vc_g1

0x6d02,	// (0x00047cd0) setting_slider_graphic_pane_vc_t1

0x6d12,	// (0x00047ce0) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x000509a6) setting_slider_graphic_pane_vc_t

0x6d22,	// (0x00047cf0) slider_set_pane_cp_vc

0x6d2a,	// (0x00047cf8) slider_set_pane_vc_g1

0x6d33,	// (0x00047d01) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x000509ab) slider_set_pane_vc_g

0x3ce5,	// (0x00044cb3) set_opt_bg_pane_g1_copy1

0x3ced,	// (0x00044cbb) set_opt_bg_pane_g2_copy1

0x6d5f,	// (0x00047d2d) set_opt_bg_pane_g3_copy1

0x3cfd,	// (0x00044ccb) set_opt_bg_pane_g4_copy1

0x3d05,	// (0x00044cd3) set_opt_bg_pane_g5_copy1

0x3d0d,	// (0x00044cdb) set_opt_bg_pane_g6_copy1

0x6d69,	// (0x00047d37) set_opt_bg_pane_g7_copy1

0x6d73,	// (0x00047d41) set_opt_bg_pane_g8_copy1

0x6d7d,	// (0x00047d4b) set_opt_bg_pane_g9_copy1

0x3320,	// (0x000442ee) bg_set_opt_pane_cp_vc

0x6d87,	// (0x00047d55) setting_slider_pane_vc_t1

0x6d96,	// (0x00047d64) setting_slider_pane_vc_t2

0x6da6,	// (0x00047d74) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x000509ba) setting_slider_pane_vc_t

0x6db6,	// (0x00047d84) slider_set_pane_vc

0x1e2b,	// (0x00042df9) volume_set_pane_vc_g1

0x1e34,	// (0x00042e02) volume_set_pane_vc_g2

0x1e3d,	// (0x00042e0b) volume_set_pane_vc_g3

0x1e46,	// (0x00042e14) volume_set_pane_vc_g4

0x1e4f,	// (0x00042e1d) volume_set_pane_vc_g5

0x1e58,	// (0x00042e26) volume_set_pane_vc_g6

0x1e61,	// (0x00042e2f) volume_set_pane_vc_g7

0x1e6a,	// (0x00042e38) volume_set_pane_vc_g8

0x1e73,	// (0x00042e41) volume_set_pane_vc_g9

0x1e7c,	// (0x00042e4a) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0005085f) volume_set_pane_vc_g

0x6dbe,	// (0x00047d8c) volume_set_pane_vc

0x6dc6,	// (0x00047d94) button_value_adjust_pane_cp1_vc

0x6dd0,	// (0x00047d9e) list_highlight_pane_cp2_vc

0x6dd9,	// (0x00047da7) list_set_pane_vc_ParamLimits

0x6dd9,	// (0x00047da7) list_set_pane_vc

0x6e37,	// (0x00047e05) main_pane_set_vc_t1_ParamLimits

0x6e37,	// (0x00047e05) main_pane_set_vc_t1

0x6e4c,	// (0x00047e1a) main_pane_set_vc_t2_ParamLimits

0x6e4c,	// (0x00047e1a) main_pane_set_vc_t2

0x6e5e,	// (0x00047e2c) main_pane_set_vc_t3_ParamLimits

0x6e5e,	// (0x00047e2c) main_pane_set_vc_t3

0x6e72,	// (0x00047e40) main_pane_set_vc_t4_ParamLimits

0x6e72,	// (0x00047e40) main_pane_set_vc_t4

0x0003,

0xf9f3,	// (0x000509c1) main_pane_set_vc_t_ParamLimits

0xf9f3,	// (0x000509c1) main_pane_set_vc_t

0x6e86,	// (0x00047e54) setting_code_pane_vc_ParamLimits

0x6e86,	// (0x00047e54) setting_code_pane_vc

0x6e97,	// (0x00047e65) setting_slider_graphic_pane_vc

0x6e97,	// (0x00047e65) setting_slider_pane_vc

0x6e97,	// (0x00047e65) setting_text_pane_vc

0x6e97,	// (0x00047e65) setting_volume_pane_vc

0x6ea1,	// (0x00047e6f) scroll_pane_cp121_vc

0x3c73,	// (0x00044c41) set_content_pane_vc

0x6ea9,	// (0x00047e77) button_value_adjust_pane_g1

0x6eb2,	// (0x00047e80) button_value_adjust_pane_g2

0x0001,

0xfa48,	// (0x00050a16) button_value_adjust_pane_g

0x6ebb,	// (0x00047e89) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6ebb,	// (0x00047e89) form_field_slider_wide_pane_vc_t1

0x6ecf,	// (0x00047e9d) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6ecf,	// (0x00047e9d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa4d,	// (0x00050a1b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa4d,	// (0x00050a1b) form_field_slider_wide_pane_vc_t

0x367b,	// (0x00044649) input_focus_pane_cp10_vc_ParamLimits

0x367b,	// (0x00044649) input_focus_pane_cp10_vc

0x6efd,	// (0x00047ecb) slider_cont_pane_cp1_vc_ParamLimits

0x6efd,	// (0x00047ecb) slider_cont_pane_cp1_vc

0x6f0f,	// (0x00047edd) slider_form_pane_g1_cp2

0x6d33,	// (0x00047d01) slider_form_pane_g2_cp2

0x6f3c,	// (0x00047f0a) form_field_slider_pane_vc_t3

0x6f4a,	// (0x00047f18) form_field_slider_pane_vc_t4

0x6f58,	// (0x00047f26) slider_form_pane_vc_ParamLimits

0x6f58,	// (0x00047f26) slider_form_pane_vc

0x6f65,	// (0x00047f33) form_field_slider_pane_vc_t1_ParamLimits

0x6f65,	// (0x00047f33) form_field_slider_pane_vc_t1

0x6ecf,	// (0x00047e9d) form_field_slider_pane_vc_t2_ParamLimits

0x6ecf,	// (0x00047e9d) form_field_slider_pane_vc_t2

0x0001,

0xfa5f,	// (0x00050a2d) form_field_slider_pane_vc_t_ParamLimits

0xfa5f,	// (0x00050a2d) form_field_slider_pane_vc_t

0x367b,	// (0x00044649) input_focus_pane_cp9_vc_ParamLimits

0x367b,	// (0x00044649) input_focus_pane_cp9_vc

0x6f81,	// (0x00047f4f) slider_cont_pane_vc_ParamLimits

0x6f81,	// (0x00047f4f) slider_cont_pane_vc

0x6f95,	// (0x00047f63) list_form_graphic_pane_cp_vc_ParamLimits

0x6f95,	// (0x00047f63) list_form_graphic_pane_cp_vc

0x526c,	// (0x0004623a) form_field_popup_wide_pane_vc_g1

0x6faa,	// (0x00047f78) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6faa,	// (0x00047f78) form_field_popup_wide_pane_vc_t1

0x3c99,	// (0x00044c67) input_focus_pane_cp8_vc_ParamLimits

0x3c99,	// (0x00044c67) input_focus_pane_cp8_vc

0x6fef,	// (0x00047fbd) list_form_wide_pane_vc_ParamLimits

0x6fef,	// (0x00047fbd) list_form_wide_pane_vc

0x6ffb,	// (0x00047fc9) list_form_graphic_pane_vc_g1

0x7003,	// (0x00047fd1) list_form_graphic_pane_vc_t1_ParamLimits

0x7003,	// (0x00047fd1) list_form_graphic_pane_vc_t1

0x3400,	// (0x000443ce) list_highlight_pane_cp5_vc_ParamLimits

0x3400,	// (0x000443ce) list_highlight_pane_cp5_vc

0x701f,	// (0x00047fed) list_form_graphic_pane_vc_ParamLimits

0x701f,	// (0x00047fed) list_form_graphic_pane_vc

0x526c,	// (0x0004623a) form_field_popup_pane_vc_g1

0x7035,	// (0x00048003) form_field_popup_pane_vc_t1_ParamLimits

0x7035,	// (0x00048003) form_field_popup_pane_vc_t1

0x3c99,	// (0x00044c67) input_focus_pane_cp7_vc_ParamLimits

0x3c99,	// (0x00044c67) input_focus_pane_cp7_vc

0x704c,	// (0x0004801a) list_form_pane_vc_ParamLimits

0x704c,	// (0x0004801a) list_form_pane_vc

0x7058,	// (0x00048026) data_form_pane_vc_t1_ParamLimits

0x7058,	// (0x00048026) data_form_pane_vc_t1

0x3ce5,	// (0x00044cb3) input_focus_pane_vc_g1

0x3ced,	// (0x00044cbb) input_focus_pane_vc_g2

0x3cf5,	// (0x00044cc3) input_focus_pane_vc_g3

0x3cfd,	// (0x00044ccb) input_focus_pane_vc_g4

0x3d05,	// (0x00044cd3) input_focus_pane_vc_g5

0x3d0d,	// (0x00044cdb) input_focus_pane_vc_g6

0x3d15,	// (0x00044ce3) input_focus_pane_vc_g7

0x3d1d,	// (0x00044ceb) input_focus_pane_vc_g8

0x3d25,	// (0x00044cf3) input_focus_pane_vc_g9

0xe163,	// (0x0004f131) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0005063a) input_focus_pane_vc_g

0x5260,	// (0x0004622e) data_form_pane_vc_ParamLimits

0x5260,	// (0x0004622e) data_form_pane_vc

0x526c,	// (0x0004623a) form_field_data_pane_vc_g1

0x7073,	// (0x00048041) form_field_data_pane_vc_t1_ParamLimits

0x7073,	// (0x00048041) form_field_data_pane_vc_t1

0x3c99,	// (0x00044c67) input_focus_pane_vc_ParamLimits

0x3c99,	// (0x00044c67) input_focus_pane_vc

0x708d,	// (0x0004805b) button_value_adjust_pane_cp3_vc

0x7095,	// (0x00048063) button_value_adjust_pane_cp5_vc

0x709d,	// (0x0004806b) form_field_data_pane_vc_ParamLimits

0x709d,	// (0x0004806b) form_field_data_pane_vc

0x70b4,	// (0x00048082) form_field_data_pane_vc_cp2

0x70bc,	// (0x0004808a) form_field_data_wide_pane_vc_ParamLimits

0x70bc,	// (0x0004808a) form_field_data_wide_pane_vc

0x70d2,	// (0x000480a0) form_field_data_wide_pane_vc_cp2

0x70da,	// (0x000480a8) form_field_popup_pane_vc_ParamLimits

0x70da,	// (0x000480a8) form_field_popup_pane_vc

0x70f1,	// (0x000480bf) form_field_popup_wide_pane_vc_ParamLimits

0x70f1,	// (0x000480bf) form_field_popup_wide_pane_vc

0x7107,	// (0x000480d5) form_field_slider_pane_vc_ParamLimits

0x7107,	// (0x000480d5) form_field_slider_pane_vc

0x711a,	// (0x000480e8) form_field_slider_wide_pane_vc_ParamLimits

0x711a,	// (0x000480e8) form_field_slider_wide_pane_vc

0xdee6,	// (0x0004eeb4) grid_touch_1_pane_ParamLimits

0xdee6,	// (0x0004eeb4) grid_touch_1_pane

0xdefa,	// (0x0004eec8) grid_touch_2_pane_ParamLimits

0xdefa,	// (0x0004eec8) grid_touch_2_pane

0x71fe,	// (0x000481cc) touch_pane_g1_ParamLimits

0x71fe,	// (0x000481cc) touch_pane_g1

0x7151,	// (0x0004811f) cell_app_pane_cp_wide_ParamLimits

0x7151,	// (0x0004811f) cell_app_pane_cp_wide

0x7162,	// (0x00048130) grid_popup_fast_wide_pane_ParamLimits

0x7162,	// (0x00048130) grid_popup_fast_wide_pane

0x7176,	// (0x00048144) scroll_pane_cp19_ParamLimits

0x7176,	// (0x00048144) scroll_pane_cp19

0x3320,	// (0x000442ee) bg_popup_window_pane_cp20

0x718a,	// (0x00048158) listscroll_popup_fast_wide_pane

0xdf24,	// (0x0004eef2) grid_indicator_nsta_pane

0x71a4,	// (0x00048172) clock_nsta_pane_g1

0x71ad,	// (0x0004817b) clock_nsta_pane_t1

0xdf30,	// (0x0004eefe) cell_indicator_nsta_pane_ParamLimits

0xdf30,	// (0x0004eefe) cell_indicator_nsta_pane

0x71fe,	// (0x000481cc) cell_indicator_nsta_pane_g1

0xdf4b,	// (0x0004ef19) cell_indicator_nsta_pane_g2

0x0001,

0xfa70,	// (0x00050a3e) cell_indicator_nsta_pane_g

0x721e,	// (0x000481ec) clock_nsta_pane_cp

0x7227,	// (0x000481f5) indicator_nsta_pane_cp

0x7231,	// (0x000481ff) nsta_clock_indic_pane_g1

0x34c9,	// (0x00044497) grid_indicator_pane

0x4232,	// (0x00045200) scroll_pane_cp29

0x13e8,	// (0x000423b6) indicator_nsta_pane_cp2_ParamLimits

0x13e8,	// (0x000423b6) indicator_nsta_pane_cp2

0x3400,	// (0x000443ce) main_apps_wheel_pane

0x547b,	// (0x00046449) form_midp_field_text_pane_ParamLimits

0x55c6,	// (0x00046594) scroll_bar_cp050_ParamLimits

0x728a,	// (0x00048258) cell_indicator_pane_ParamLimits

0x728a,	// (0x00048258) cell_indicator_pane

0x72a1,	// (0x0004826f) cell_indicator_pane_g1

0xdf58,	// (0x0004ef26) grid_wheel_folder_pane_ParamLimits

0xdf58,	// (0x0004ef26) grid_wheel_folder_pane

0xdf66,	// (0x0004ef34) list_wheel_apps_pane_ParamLimits

0xdf66,	// (0x0004ef34) list_wheel_apps_pane

0xdf74,	// (0x0004ef42) main_apps_wheel_pane_g1_ParamLimits

0xdf74,	// (0x0004ef42) main_apps_wheel_pane_g1

0xdf80,	// (0x0004ef4e) main_apps_wheel_pane_g2_ParamLimits

0xdf80,	// (0x0004ef4e) main_apps_wheel_pane_g2

0x0001,

0xfa8c,	// (0x00050a5a) main_apps_wheel_pane_g_ParamLimits

0xfa8c,	// (0x00050a5a) main_apps_wheel_pane_g

0xdf8e,	// (0x0004ef5c) main_apps_wheel_pane_t1_ParamLimits

0xdf8e,	// (0x0004ef5c) main_apps_wheel_pane_t1

0xdfa2,	// (0x0004ef70) list_wheel_apps_pane_g1

0xdfaa,	// (0x0004ef78) list_wheel_apps_pane_g2

0xdfb2,	// (0x0004ef80) list_wheel_apps_pane_g3

0xdfba,	// (0x0004ef88) list_wheel_apps_pane_g4

0xdfc4,	// (0x0004ef92) list_wheel_apps_pane_g5

0x0004,

0xfa91,	// (0x00050a5f) list_wheel_apps_pane_g

0x47c4,	// (0x00045792) navi_icon_text_pane

0xd5cf,	// (0x0004e59d) aid_fill_nsta

0x7366,	// (0x00048334) navi_icon_text_pane_g1

0x7372,	// (0x00048340) navi_icon_text_pane_t1

0x4657,	// (0x00045625) list_set_graphic_pane_t1_ParamLimits

0x4657,	// (0x00045625) list_set_graphic_pane_t1

0x5d31,	// (0x00046cff) popup_midp_note_alarm_window_t6_ParamLimits

0x5d31,	// (0x00046cff) popup_midp_note_alarm_window_t6

0x5d43,	// (0x00046d11) popup_midp_note_alarm_window_t7_ParamLimits

0x5d43,	// (0x00046d11) popup_midp_note_alarm_window_t7

0x5d55,	// (0x00046d23) popup_midp_note_alarm_window_t8_ParamLimits

0x5d55,	// (0x00046d23) popup_midp_note_alarm_window_t8

0x5d67,	// (0x00046d35) popup_midp_note_alarm_window_t9_ParamLimits

0x5d67,	// (0x00046d35) popup_midp_note_alarm_window_t9

0x5d79,	// (0x00046d47) popup_midp_note_alarm_window_t10_ParamLimits

0x5d79,	// (0x00046d47) popup_midp_note_alarm_window_t10

0x5d8b,	// (0x00046d59) popup_midp_note_alarm_window_t11_ParamLimits

0x5d8b,	// (0x00046d59) popup_midp_note_alarm_window_t11

0x5d9d,	// (0x00046d6b) scroll_pane_cp17_ParamLimits

0x5d9d,	// (0x00046d6b) scroll_pane_cp17

0x1e2b,	// (0x00042df9) volume_small_pane_cp_g1

0x2217,	// (0x000431e5) volume_small_pane_cp_g2

0x2220,	// (0x000431ee) volume_small_pane_cp_g3

0x2229,	// (0x000431f7) volume_small_pane_cp_g4

0x2232,	// (0x00043200) volume_small_pane_cp_g5

0x223b,	// (0x00043209) volume_small_pane_cp_g6

0x2244,	// (0x00043212) volume_small_pane_cp_g7

0x224d,	// (0x0004321b) volume_small_pane_cp_g8

0x2256,	// (0x00043224) volume_small_pane_cp_g9

0x225f,	// (0x0004322d) volume_small_pane_cp_g10

0x4a15,	// (0x000459e3) midp_ticker_pane_g1_ParamLimits

0x4a21,	// (0x000459ef) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00050706) midp_ticker_pane_g_ParamLimits

0x4a2d,	// (0x000459fb) midp_ticker_pane_t1_ParamLimits

0xd5f3,	// (0x0004e5c1) aid_fill_nsta_2

0x55b2,	// (0x00046580) list_form2_midp_pane

0x6702,	// (0x000476d0) midp_editing_number_pane_ParamLimits

0x6711,	// (0x000476df) midp_ticker_pane_ParamLimits

0x7384,	// (0x00048352) form2_midp_field_pane

0x73a8,	// (0x00048376) scroll_pane_cp51

0x73c8,	// (0x00048396) form2_midp_button_pane_ParamLimits

0x73c8,	// (0x00048396) form2_midp_button_pane

0x73da,	// (0x000483a8) form2_midp_content_pane_ParamLimits

0x73da,	// (0x000483a8) form2_midp_content_pane

0x73f4,	// (0x000483c2) form2_midp_field_choice_group_pane

0x73fc,	// (0x000483ca) form2_midp_field_pane_g1

0x7404,	// (0x000483d2) form2_midp_field_pane_g2

0x740c,	// (0x000483da) form2_midp_field_pane_g3

0x7414,	// (0x000483e2) form2_midp_field_pane_g4

0x0003,

0xfab6,	// (0x00050a84) form2_midp_field_pane_g

0x741c,	// (0x000483ea) form2_midp_gauge_slider_pane

0x7424,	// (0x000483f2) form2_midp_gauge_wait_pane

0x742c,	// (0x000483fa) form2_midp_image_pane_ParamLimits

0x742c,	// (0x000483fa) form2_midp_image_pane

0x7447,	// (0x00048415) form2_midp_label_pane_ParamLimits

0x7447,	// (0x00048415) form2_midp_label_pane

0xdff7,	// (0x0004efc5) form2_midp_label_pane_cp_ParamLimits

0xdff7,	// (0x0004efc5) form2_midp_label_pane_cp

0x7481,	// (0x0004844f) form2_midp_string_pane_ParamLimits

0x7481,	// (0x0004844f) form2_midp_string_pane

0xbb78,	// (0x0004cb46) form2_midp_text_pane_ParamLimits

0xbb78,	// (0x0004cb46) form2_midp_text_pane

0x7493,	// (0x00048461) form2_midp_time_pane

0x74a3,	// (0x00048471) input_focus_pane_cp51_ParamLimits

0x74a3,	// (0x00048471) input_focus_pane_cp51

0x74bb,	// (0x00048489) form2_midp_label_pane_t1_ParamLimits

0x74bb,	// (0x00048489) form2_midp_label_pane_t1

0xbb91,	// (0x0004cb5f) form2_mdip_text_pane_t1_ParamLimits

0xbb91,	// (0x0004cb5f) form2_mdip_text_pane_t1

0x0959,	// (0x00041927) form2_midp_time_pane_t1

0x7504,	// (0x000484d2) form2_midp_gauge_slider_pane_t1

0xe016,	// (0x0004efe4) form2_midp_gauge_slider_pane_t2

0xe028,	// (0x0004eff6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfabf,	// (0x00050a8d) form2_midp_gauge_slider_pane_t

0x753a,	// (0x00048508) form2_midp_slider_pane

0x7546,	// (0x00048514) form2_midp_gauge_wait_pane_t1

0x7554,	// (0x00048522) form2_midp_wait_pane_ParamLimits

0x7554,	// (0x00048522) form2_midp_wait_pane

0xe03a,	// (0x0004f008) list_single_2graphic_pane_cp4_ParamLimits

0xe03a,	// (0x0004f008) list_single_2graphic_pane_cp4

0xda0f,	// (0x0004e9dd) list_single_midp_graphic_pane_cp_ParamLimits

0xda0f,	// (0x0004e9dd) list_single_midp_graphic_pane_cp

0x3320,	// (0x000442ee) list_highlight_pane_cp20

0x75a3,	// (0x00048571) list_single_2graphic_pane_g1_cp4

0x75ab,	// (0x00048579) list_single_2graphic_pane_g2_cp4

0x75b3,	// (0x00048581) list_single_2graphic_pane_t1_cp4

0x3400,	// (0x000443ce) list_highlight_pane_cp21

0x75c2,	// (0x00048590) list_single_midp_graphic_pane_g4_cp

0x75d1,	// (0x0004859f) list_single_midp_graphic_pane_t1_cp

0xe04e,	// (0x0004f01c) form2_mdip_string_pane_t1_ParamLimits

0xe04e,	// (0x0004f01c) form2_mdip_string_pane_t1

0x3320,	// (0x000442ee) bg_wml_button_pane_cp2

0xe163,	// (0x0004f131) form2_midp_image_pane_g1

0x10f2,	// (0x000420c0) list_double_large_graphic_pane_g5_ParamLimits

0x10f2,	// (0x000420c0) list_double_large_graphic_pane_g5

0xd452,	// (0x0004e420) midp_form_pane_ParamLimits

0x3400,	// (0x000443ce) main_apps_wheel_pane_ParamLimits

0xc80b,	// (0x0004d7d9) popup_preview_window_ParamLimits

0xc80b,	// (0x0004d7d9) popup_preview_window

0x1c86,	// (0x00042c54) popup_touch_info_window_ParamLimits

0x1c86,	// (0x00042c54) popup_touch_info_window

0x1ca4,	// (0x00042c72) popup_touch_menu_window_ParamLimits

0x1ca4,	// (0x00042c72) popup_touch_menu_window

0xe159,	// (0x0004f127) bg_popup_sub_pane_cp6

0x76df,	// (0x000486ad) list_touch_menu_pane

0x76e7,	// (0x000486b5) list_single_touch_menu_pane_ParamLimits

0x76e7,	// (0x000486b5) list_single_touch_menu_pane

0x76fd,	// (0x000486cb) list_single_touch_menu_pane_t1

0x3400,	// (0x000443ce) bg_popup_sub_pane_cp7_ParamLimits

0x3400,	// (0x000443ce) bg_popup_sub_pane_cp7

0x770b,	// (0x000486d9) heading_sub_pane

0x7713,	// (0x000486e1) list_touch_info_pane_ParamLimits

0x7713,	// (0x000486e1) list_touch_info_pane

0x7722,	// (0x000486f0) list_single_touch_info_pane_ParamLimits

0x7722,	// (0x000486f0) list_single_touch_info_pane

0x7734,	// (0x00048702) list_single_touch_info_pane_t1

0x7742,	// (0x00048710) list_single_touch_info_pane_t2

0x0001,

0xfacd,	// (0x00050a9b) list_single_touch_info_pane_t

0x4938,	// (0x00045906) bg_popup_heading_pane_cp

0x7750,	// (0x0004871e) heading_sub_pane_t1

0x51fa,	// (0x000461c8) bg_popup_preview_window_pane_cp_ParamLimits

0x51fa,	// (0x000461c8) bg_popup_preview_window_pane_cp

0x770b,	// (0x000486d9) heading_preview_pane

0x7713,	// (0x000486e1) list_preview_pane_ParamLimits

0x7713,	// (0x000486e1) list_preview_pane

0x775e,	// (0x0004872c) popup_preview_window_g1

0x7722,	// (0x000486f0) list_single_preview_pane_ParamLimits

0x7722,	// (0x000486f0) list_single_preview_pane

0x7766,	// (0x00048734) list_single_preview_pane_g1

0x776e,	// (0x0004873c) list_single_preview_pane_t1

0x7734,	// (0x00048702) list_single_preview_pane_t2

0x0001,

0xfad2,	// (0x00050aa0) list_single_preview_pane_t

0x777c,	// (0x0004874a) bg_popup_heading_pane_cp2_ParamLimits

0x777c,	// (0x0004874a) bg_popup_heading_pane_cp2

0x7792,	// (0x00048760) heading_preview_pane_g1

0x779a,	// (0x00048768) heading_preview_pane_t1_ParamLimits

0x779a,	// (0x00048768) heading_preview_pane_t1

0x34ec,	// (0x000444ba) soft_indicator_pane_t1_ParamLimits

0x3c00,	// (0x00044bce) scroll_pane_ParamLimits

0x412b,	// (0x000450f9) scroll_sc2_left_pane

0x4134,	// (0x00045102) scroll_sc2_right_pane

0x4153,	// (0x00045121) scroll_bg_pane_g1_ParamLimits

0x4168,	// (0x00045136) scroll_bg_pane_g2_ParamLimits

0x4180,	// (0x0004514e) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00050691) scroll_bg_pane_g_ParamLimits

0x4153,	// (0x00045121) scroll_handle_pane_g1_ParamLimits

0x41a2,	// (0x00045170) scroll_handle_pane_g2_ParamLimits

0x4180,	// (0x0004514e) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x00050698) scroll_handle_pane_g_ParamLimits

0x174a,	// (0x00042718) popup_choice_list_window_ParamLimits

0x174a,	// (0x00042718) popup_choice_list_window

0x50d0,	// (0x0004609e) choice_list_pane

0x5152,	// (0x00046120) cell_toolbar_pane_t1

0x517a,	// (0x00046148) toolbar_button_pane_ParamLimits

0x6257,	// (0x00047225) ai_gene_pane_1_t2_ParamLimits

0x6257,	// (0x00047225) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x000508bb) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x000508bb) ai_gene_pane_1_t

0x77b7,	// (0x00048785) scroll_sc2_left_pane_g1

0x77b7,	// (0x00048785) scroll_sc2_right_pane_g1

0x4c5c,	// (0x00045c2a) bg_popup_sub_pane_cp10

0x77c1,	// (0x0004878f) list_choice_list_pane

0x77da,	// (0x000487a8) list_single_choice_list_pane_ParamLimits

0x77da,	// (0x000487a8) list_single_choice_list_pane

0x77ed,	// (0x000487bb) list_single_choice_list_pane_g1

0x3e31,	// (0x00044dff) list_single_choice_list_pane_t1_ParamLimits

0x3e31,	// (0x00044dff) list_single_choice_list_pane_t1

0x77f5,	// (0x000487c3) choice_list_pane_g1

0x77fd,	// (0x000487cb) choice_list_pane_t1

0xe159,	// (0x0004f127) input_focus_pane_cp11

0x4008,	// (0x00044fd6) title_pane_stacon_g2_ParamLimits

0x4008,	// (0x00044fd6) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x00050677) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x00050677) title_pane_stacon_g

0x4938,	// (0x00045906) cursor_press_pane

0xc4b2,	// (0x0004d480) popup_fep_hwr_window_ParamLimits

0xc4b2,	// (0x0004d480) popup_fep_hwr_window

0x1870,	// (0x0004283e) popup_fep_vkb_window_ParamLimits

0x1870,	// (0x0004283e) popup_fep_vkb_window

0x780b,	// (0x000487d9) cursor_press_pane_g1

0x0002,

0xfafb,	// (0x00050ac9) fep_vkb_side_pane_g_ParamLimits

0x22a1,	// (0x0004326f) fep_hwr_candidate_pane_ParamLimits

0x22a1,	// (0x0004326f) fep_hwr_candidate_pane

0x22cb,	// (0x00043299) fep_hwr_side_pane_ParamLimits

0x22cb,	// (0x00043299) fep_hwr_side_pane

0x22eb,	// (0x000432b9) fep_hwr_top_pane_ParamLimits

0x22eb,	// (0x000432b9) fep_hwr_top_pane

0x2303,	// (0x000432d1) fep_hwr_write_pane_ParamLimits

0x2303,	// (0x000432d1) fep_hwr_write_pane

0xfafb,	// (0x00050ac9) fep_vkb_side_pane_g

0x7813,	// (0x000487e1) fep_hwr_top_pane_g1

0x7825,	// (0x000487f3) fep_hwr_top_pane_g2

0x232f,	// (0x000432fd) fep_hwr_top_pane_g3

0x0002,

0xfad7,	// (0x00050aa5) fep_hwr_top_pane_g

0x2344,	// (0x00043312) fep_hwr_top_text_pane

0x4322,	// (0x000452f0) fep_hwr_top_text_pane_g1

0x785b,	// (0x00048829) fep_hwr_top_text_pane_t1

0x243a,	// (0x00043408) fep_hwr_candidate_pane_g1

0x7aae,	// (0x00048a7c) fep_vkb_keypad_pane_g3_ParamLimits

0x7aae,	// (0x00048a7c) fep_vkb_keypad_pane_g3

0x7ad6,	// (0x00048aa4) fep_vkb_keypad_pane_g4_ParamLimits

0x7ad6,	// (0x00048aa4) fep_vkb_keypad_pane_g4

0x7b45,	// (0x00048b13) fep_vkb_bottom_pane_g2_ParamLimits

0x7b45,	// (0x00048b13) fep_vkb_bottom_pane_g2

0x0001,

0xfb02,	// (0x00050ad0) fep_vkb_bottom_pane_g_ParamLimits

0xfb02,	// (0x00050ad0) fep_vkb_bottom_pane_g

0x77b7,	// (0x00048785) cell_vkb_side_pane_g2

0x0001,

0xfb0c,	// (0x00050ada) cell_vkb_side_pane_g

0x7bd0,	// (0x00048b9e) cell_vkb_side_pane_t1

0x7bde,	// (0x00048bac) cell_vkb_side_pane_t1_copy1

0x77b7,	// (0x00048785) bg_fep_vkb_candidate_pane_g2

0x7d0a,	// (0x00048cd8) cell_vkb_candidate_pane_ParamLimits

0x7869,	// (0x00048837) aid_size_cell_vkb_ParamLimits

0x7869,	// (0x00048837) aid_size_cell_vkb

0x7d0a,	// (0x00048cd8) cell_vkb_candidate_pane

0x2454,	// (0x00043422) bg_popup_fep_shadow_pane_g1

0xe0f8,	// (0x0004f0c6) fep_vkb_bottom_pane_ParamLimits

0xe0f8,	// (0x0004f0c6) fep_vkb_bottom_pane

0x792d,	// (0x000488fb) fep_vkb_candidate_pane_ParamLimits

0x792d,	// (0x000488fb) fep_vkb_candidate_pane

0xe11d,	// (0x0004f0eb) fep_vkb_keypad_pane_ParamLimits

0xe11d,	// (0x0004f0eb) fep_vkb_keypad_pane

0xe16d,	// (0x0004f13b) fep_vkb_side_pane_ParamLimits

0xe16d,	// (0x0004f13b) fep_vkb_side_pane

0xe1a9,	// (0x0004f177) fep_vkb_top_pane_ParamLimits

0xe1a9,	// (0x0004f177) fep_vkb_top_pane

0x7a07,	// (0x000489d5) fep_vkb_top_pane_g1_ParamLimits

0x7a07,	// (0x000489d5) fep_vkb_top_pane_g1

0x7a16,	// (0x000489e4) fep_vkb_top_pane_g2_ParamLimits

0x7a16,	// (0x000489e4) fep_vkb_top_pane_g2

0x7a25,	// (0x000489f3) fep_vkb_top_pane_g3_ParamLimits

0x7a25,	// (0x000489f3) fep_vkb_top_pane_g3

0x0003,

0xfaf2,	// (0x00050ac0) fep_vkb_top_pane_g_ParamLimits

0xfaf2,	// (0x00050ac0) fep_vkb_top_pane_g

0x7a43,	// (0x00048a11) fep_vkb_top_text_pane_ParamLimits

0x7a43,	// (0x00048a11) fep_vkb_top_text_pane

0xe1e5,	// (0x0004f1b3) fep_vkb_side_pane_g1_ParamLimits

0xe1e5,	// (0x0004f1b3) fep_vkb_side_pane_g1

0x7a9d,	// (0x00048a6b) grid_vkb_side_pane_ParamLimits

0x7a9d,	// (0x00048a6b) grid_vkb_side_pane

0x245c,	// (0x0004342a) bg_popup_fep_shadow_pane_g2

0x2465,	// (0x00043433) bg_popup_fep_shadow_pane_g3

0x246d,	// (0x0004343b) bg_popup_fep_shadow_pane_g4

0x2476,	// (0x00043444) bg_popup_fep_shadow_pane_g5

0x2480,	// (0x0004344e) bg_popup_fep_shadow_pane_g6

0x2488,	// (0x00043456) bg_popup_fep_shadow_pane_g7

0x3d05,	// (0x00044cd3) bg_popup_fep_shadow_pane_g8

0x7af4,	// (0x00048ac2) grid_vkb_keypad_number_pane_ParamLimits

0x7af4,	// (0x00048ac2) grid_vkb_keypad_number_pane

0x7b04,	// (0x00048ad2) grid_vkb_keypad_pane_ParamLimits

0x7b04,	// (0x00048ad2) grid_vkb_keypad_pane

0x7b2a,	// (0x00048af8) fep_vkb_bottom_pane_g1_ParamLimits

0x7b2a,	// (0x00048af8) fep_vkb_bottom_pane_g1

0x7b53,	// (0x00048b21) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7b53,	// (0x00048b21) grid_vkb_keypad_bottom_left_pane

0x7b68,	// (0x00048b36) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7b68,	// (0x00048b36) grid_vkb_keypad_bottom_right_pane

0x7b7d,	// (0x00048b4b) fep_vkb_top_text_pane_g1

0xe22c,	// (0x0004f1fa) fep_vkb_top_text_pane_t1

0xe23e,	// (0x0004f20c) cell_vkb_side_pane_ParamLimits

0xe23e,	// (0x0004f20c) cell_vkb_side_pane

0x77b7,	// (0x00048785) cell_vkb_side_pane_g1

0x7bec,	// (0x00048bba) cell_vkb_keypad_pane_ParamLimits

0x7bec,	// (0x00048bba) cell_vkb_keypad_pane

0x7c61,	// (0x00048c2f) cell_vkb_keypad_pane_g1

0x0008,

0xfb1f,	// (0x00050aed) bg_popup_fep_shadow_pane_g

0x77b7,	// (0x00048785) cell_hwr_side_pane_g1

0x77b7,	// (0x00048785) cell_hwr_side_pane_g2

0x7c6b,	// (0x00048c39) cell_vkb_keypad_pane_t1

0xe254,	// (0x0004f222) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe254,	// (0x0004f222) cell_vkb_keypad_bottom_left_pane

0xe269,	// (0x0004f237) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe269,	// (0x0004f237) cell_vkb_keypad_bottom_right_pane

0x77b7,	// (0x00048785) cell_vkb_keypad_bottom_left_pane_g1

0x77b7,	// (0x00048785) cell_vkb_keypad_bottom_right_pane_g1

0x7ccf,	// (0x00048c9d) cell_vkb_keypad_number_pane_ParamLimits

0x7ccf,	// (0x00048c9d) cell_vkb_keypad_number_pane

0x7cee,	// (0x00048cbc) cell_vkb_keypad_number_pane_g1

0x7cf8,	// (0x00048cc6) cell_vkb_keypad_number_pane_g2

0x7d01,	// (0x00048ccf) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb11,	// (0x00050adf) cell_vkb_keypad_number_pane_g

0x7c6b,	// (0x00048c39) cell_vkb_keypad_number_pane_t1

0x7d25,	// (0x00048cf3) fep_vkb_candidate_pane_g1

0x0001,

0xfb0c,	// (0x00050ada) cell_hwr_side_pane_g

0x7d3e,	// (0x00048d0c) cell_hwr_side_pane_t1

0x249a,	// (0x00043468) cell_hwr_side_pane_t1_copy1

0x7a35,	// (0x00048a03) cell_hwr_candidate_pane_g1

0x24a8,	// (0x00043476) cell_hwr_candidate_pane_t1

0x77b7,	// (0x00048785) cell_vkb_candidate_pane_g2

0x7dc4,	// (0x00048d92) cell_vkb_candidate_pane_t1

0x2268,	// (0x00043236) bg_popup_fep_shadow_pane_ParamLimits

0x2268,	// (0x00043236) bg_popup_fep_shadow_pane

0xe0be,	// (0x0004f08c) bg_fep_hwr_top_pane_g4

0x7837,	// (0x00048805) bg_hwr_side_pane_g1_ParamLimits

0x7837,	// (0x00048805) bg_hwr_side_pane_g1

0xcb58,	// (0x0004db26) cell_hwr_side_pane_ParamLimits

0xcb58,	// (0x0004db26) cell_hwr_side_pane

0x23bb,	// (0x00043389) fep_hwr_write_pane_g1_ParamLimits

0x23bb,	// (0x00043389) fep_hwr_write_pane_g1

0x23c8,	// (0x00043396) fep_hwr_write_pane_g2_ParamLimits

0x23c8,	// (0x00043396) fep_hwr_write_pane_g2

0x23d5,	// (0x000433a3) fep_hwr_write_pane_g3_ParamLimits

0x23d5,	// (0x000433a3) fep_hwr_write_pane_g3

0xcb78,	// (0x0004db46) fep_hwr_write_pane_g4_ParamLimits

0xcb78,	// (0x0004db46) fep_hwr_write_pane_g4

0x0005,

0xfade,	// (0x00050aac) fep_hwr_write_pane_g_ParamLimits

0xfade,	// (0x00050aac) fep_hwr_write_pane_g

0xe0be,	// (0x0004f08c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe0be,	// (0x0004f08c) bg_fep_hwr_candidate_pane_g2

0x23f8,	// (0x000433c6) cell_hwr_candidate_pane_ParamLimits

0x23f8,	// (0x000433c6) cell_hwr_candidate_pane

0x243a,	// (0x00043408) fep_hwr_candidate_pane_g1_ParamLimits

0x7897,	// (0x00048865) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7897,	// (0x00048865) bg_popup_fep_shadow_pane_cp2

0x7a35,	// (0x00048a03) fep_vkb_top_pane_g4_ParamLimits

0x7a35,	// (0x00048a03) fep_vkb_top_pane_g4

0x7a7b,	// (0x00048a49) fep_vkb_side_pane_g2_ParamLimits

0x7a7b,	// (0x00048a49) fep_vkb_side_pane_g2

0xb912,	// (0x0004c8e0) list_setting_pane_t4_ParamLimits

0xb912,	// (0x0004c8e0) list_setting_pane_t4

0xb994,	// (0x0004c962) list_setting_number_pane_t5_ParamLimits

0xb994,	// (0x0004c962) list_setting_number_pane_t5

0x4359,	// (0x00045327) list_double_heading_pane_cp2_ParamLimits

0x4359,	// (0x00045327) list_double_heading_pane_cp2

0x3c34,	// (0x00044c02) list_double_heading_pane_g1_cp2_ParamLimits

0x3c34,	// (0x00044c02) list_double_heading_pane_g1_cp2

0x3ca7,	// (0x00044c75) list_double_heading_pane_g2_cp2_ParamLimits

0x3ca7,	// (0x00044c75) list_double_heading_pane_g2_cp2

0x7dd2,	// (0x00048da0) list_double_heading_pane_t1_cp2_ParamLimits

0x7dd2,	// (0x00048da0) list_double_heading_pane_t1_cp2

0x7de8,	// (0x00048db6) list_double_heading_pane_t2_cp2_ParamLimits

0x7de8,	// (0x00048db6) list_double_heading_pane_t2_cp2

0xd245,	// (0x0004e213) aid_value_unit2

0x0ed9,	// (0x00041ea7) popup_preview_fixed_window

0x3689,	// (0x00044657) bg_popup_preview_window_pane_cp02

0x7dfa,	// (0x00048dc8) list_preview_fixed_pane

0x7e40,	// (0x00048e0e) list_empty_pane_fp_ParamLimits

0x7e40,	// (0x00048e0e) list_empty_pane_fp

0x7e40,	// (0x00048e0e) list_single_cale_day_pane_fp_ParamLimits

0x7e40,	// (0x00048e0e) list_single_cale_day_pane_fp

0x7e40,	// (0x00048e0e) list_single_graphic_heading_pane_fp_ParamLimits

0x7e40,	// (0x00048e0e) list_single_graphic_heading_pane_fp

0x7e40,	// (0x00048e0e) list_single_graphic_pane_fp_ParamLimits

0x7e40,	// (0x00048e0e) list_single_graphic_pane_fp

0x7e40,	// (0x00048e0e) list_single_heading_pane_fp_ParamLimits

0x7e40,	// (0x00048e0e) list_single_heading_pane_fp

0x7e40,	// (0x00048e0e) list_single_pane_fp_ParamLimits

0x7e40,	// (0x00048e0e) list_single_pane_fp

0x7e55,	// (0x00048e23) list_single_pane_fp_g1_ParamLimits

0x7e55,	// (0x00048e23) list_single_pane_fp_g1

0x3c34,	// (0x00044c02) list_single_pane_fp_g2_ParamLimits

0x3c34,	// (0x00044c02) list_single_pane_fp_g2

0x3ca7,	// (0x00044c75) list_single_pane_fp_g3_ParamLimits

0x3ca7,	// (0x00044c75) list_single_pane_fp_g3

0x7e61,	// (0x00048e2f) list_single_pane_fp_g4_ParamLimits

0x7e61,	// (0x00048e2f) list_single_pane_fp_g4

0x0003,

0xfb40,	// (0x00050b0e) list_single_pane_fp_g_ParamLimits

0xfb40,	// (0x00050b0e) list_single_pane_fp_g

0x096c,	// (0x0004193a) list_single_pane_fp_t1_ParamLimits

0x096c,	// (0x0004193a) list_single_pane_fp_t1

0x0983,	// (0x00041951) list_single_graphic_pane_fp_g1_ParamLimits

0x0983,	// (0x00041951) list_single_graphic_pane_fp_g1

0x7e55,	// (0x00048e23) list_single_graphic_pane_fp_g2_ParamLimits

0x7e55,	// (0x00048e23) list_single_graphic_pane_fp_g2

0x3c34,	// (0x00044c02) list_single_graphic_pane_fp_g3_ParamLimits

0x3c34,	// (0x00044c02) list_single_graphic_pane_fp_g3

0x3ca7,	// (0x00044c75) list_single_graphic_pane_fp_g4_ParamLimits

0x3ca7,	// (0x00044c75) list_single_graphic_pane_fp_g4

0x7e61,	// (0x00048e2f) list_single_graphic_pane_fp_g5_ParamLimits

0x7e61,	// (0x00048e2f) list_single_graphic_pane_fp_g5

0x0004,

0xfb49,	// (0x00050b17) list_single_graphic_pane_fp_g_ParamLimits

0xfb49,	// (0x00050b17) list_single_graphic_pane_fp_g

0x098f,	// (0x0004195d) list_single_graphic_pane_fp_t1_ParamLimits

0x098f,	// (0x0004195d) list_single_graphic_pane_fp_t1

0x0983,	// (0x00041951) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0983,	// (0x00041951) list_single_graphic_heading_pane_fp_g1

0x7e55,	// (0x00048e23) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7e55,	// (0x00048e23) list_single_graphic_heading_pane_fp_g2

0x3c34,	// (0x00044c02) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3c34,	// (0x00044c02) list_single_graphic_heading_pane_fp_g3

0x3ca7,	// (0x00044c75) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3ca7,	// (0x00044c75) list_single_graphic_heading_pane_fp_g4

0x7e61,	// (0x00048e2f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7e61,	// (0x00048e2f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb49,	// (0x00050b17) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb49,	// (0x00050b17) list_single_graphic_heading_pane_fp_g

0x09a5,	// (0x00041973) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x09a5,	// (0x00041973) list_single_graphic_heading_pane_fp_t1

0x09bb,	// (0x00041989) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x09bb,	// (0x00041989) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb54,	// (0x00050b22) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb54,	// (0x00050b22) list_single_graphic_heading_pane_fp_t

0x09cd,	// (0x0004199b) list_single_cale_day_pane_fp_g1_ParamLimits

0x09cd,	// (0x0004199b) list_single_cale_day_pane_fp_g1

0x7e6d,	// (0x00048e3b) list_single_cale_day_pane_fp_g2_ParamLimits

0x7e6d,	// (0x00048e3b) list_single_cale_day_pane_fp_g2

0x24c6,	// (0x00043494) list_single_cale_day_pane_fp_g3_ParamLimits

0x24c6,	// (0x00043494) list_single_cale_day_pane_fp_g3

0x24ee,	// (0x000434bc) list_single_cale_day_pane_fp_g4_ParamLimits

0x24ee,	// (0x000434bc) list_single_cale_day_pane_fp_g4

0x2512,	// (0x000434e0) list_single_cale_day_pane_fp_g5_ParamLimits

0x2512,	// (0x000434e0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb59,	// (0x00050b27) list_single_cale_day_pane_fp_g_ParamLimits

0xfb59,	// (0x00050b27) list_single_cale_day_pane_fp_g

0x0a05,	// (0x000419d3) list_single_cale_day_pane_fp_t1_ParamLimits

0x0a05,	// (0x000419d3) list_single_cale_day_pane_fp_t1

0x0a2b,	// (0x000419f9) list_single_cale_day_pane_fp_t2_ParamLimits

0x0a2b,	// (0x000419f9) list_single_cale_day_pane_fp_t2

0x0a44,	// (0x00041a12) list_single_cale_day_pane_fp_t3_ParamLimits

0x0a44,	// (0x00041a12) list_single_cale_day_pane_fp_t3

0x0002,

0xfb64,	// (0x00050b32) list_single_cale_day_pane_fp_t_ParamLimits

0xfb64,	// (0x00050b32) list_single_cale_day_pane_fp_t

0x7e55,	// (0x00048e23) list_empty_pane_fp_g1_ParamLimits

0x7e55,	// (0x00048e23) list_empty_pane_fp_g1

0x0a5d,	// (0x00041a2b) list_empty_pane_fp_t1

0x0a6b,	// (0x00041a39) list_empty_pane_fp_t2

0x0001,

0xfb6b,	// (0x00050b39) list_empty_pane_fp_t

0x7e55,	// (0x00048e23) list_single_heading_pane_fp_g1_ParamLimits

0x7e55,	// (0x00048e23) list_single_heading_pane_fp_g1

0x3c34,	// (0x00044c02) list_single_heading_pane_fp_g2_ParamLimits

0x3c34,	// (0x00044c02) list_single_heading_pane_fp_g2

0x3ca7,	// (0x00044c75) list_single_heading_pane_fp_g3_ParamLimits

0x3ca7,	// (0x00044c75) list_single_heading_pane_fp_g3

0x0002,

0xfb70,	// (0x00050b3e) list_single_heading_pane_fp_g_ParamLimits

0xfb70,	// (0x00050b3e) list_single_heading_pane_fp_g

0x0a79,	// (0x00041a47) list_single_heading_pane_fp_t1_ParamLimits

0x0a79,	// (0x00041a47) list_single_heading_pane_fp_t1

0x0a8b,	// (0x00041a59) list_single_heading_pane_fp_t2_ParamLimits

0x0a8b,	// (0x00041a59) list_single_heading_pane_fp_t2

0x0001,

0xfb77,	// (0x00050b45) list_single_heading_pane_fp_t_ParamLimits

0xfb77,	// (0x00050b45) list_single_heading_pane_fp_t

0x3e9f,	// (0x00044e6d) aid_size_cell_fast

0x35f9,	// (0x000445c7) soft_indicator_pane_cp1_t1

0x3edc,	// (0x00044eaa) cell_app_pane_cp2_ParamLimits

0x3edc,	// (0x00044eaa) cell_app_pane_cp2

0x228a,	// (0x00043258) fep_hwr_candidate_drop_down_list_pane

0xe0cc,	// (0x0004f09a) fep_hwr_candidate_pane_g3_ParamLimits

0xe0cc,	// (0x0004f09a) fep_hwr_candidate_pane_g3

0xe0d9,	// (0x0004f0a7) fep_hwr_candidate_pane_g4_ParamLimits

0xe0d9,	// (0x0004f0a7) fep_hwr_candidate_pane_g4

0x0002,

0xfaeb,	// (0x00050ab9) fep_hwr_candidate_pane_g_ParamLimits

0xfaeb,	// (0x00050ab9) fep_hwr_candidate_pane_g

0x791c,	// (0x000488ea) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x791c,	// (0x000488ea) fep_vkb_candidate_drop_down_list_pane

0x7d2d,	// (0x00048cfb) fep_vkb_candidate_pane_g3

0x7d35,	// (0x00048d03) fep_vkb_candidate_pane_g4

0x0002,

0xfb18,	// (0x00050ae6) fep_vkb_candidate_pane_g

0x7a35,	// (0x00048a03) cell_hwr_candidate_pane_g1_ParamLimits

0x7d4c,	// (0x00048d1a) cell_hwr_candidate_pane_g3_ParamLimits

0x7d4c,	// (0x00048d1a) cell_hwr_candidate_pane_g3

0x7d6d,	// (0x00048d3b) cell_hwr_candidate_pane_g4_ParamLimits

0x7d6d,	// (0x00048d3b) cell_hwr_candidate_pane_g4

0x0002,

0xfb32,	// (0x00050b00) cell_hwr_candidate_pane_g_ParamLimits

0xfb32,	// (0x00050b00) cell_hwr_candidate_pane_g

0x7d8e,	// (0x00048d5c) cell_vkb_candidate_pane_g3_ParamLimits

0x7d8e,	// (0x00048d5c) cell_vkb_candidate_pane_g3

0x7da9,	// (0x00048d77) cell_vkb_candidate_pane_g4_ParamLimits

0x7da9,	// (0x00048d77) cell_vkb_candidate_pane_g4

0x7e79,	// (0x00048e47) cell_app_pane_cp2_g1_ParamLimits

0x7e79,	// (0x00048e47) cell_app_pane_cp2_g1

0x7e97,	// (0x00048e65) cell_app_pane_cp2_g2_ParamLimits

0x7e97,	// (0x00048e65) cell_app_pane_cp2_g2

0x0001,

0xfb7c,	// (0x00050b4a) cell_app_pane_cp2_g_ParamLimits

0xfb7c,	// (0x00050b4a) cell_app_pane_cp2_g

0x7ea3,	// (0x00048e71) cell_app_pane_cp2_t1_ParamLimits

0x7ea3,	// (0x00048e71) cell_app_pane_cp2_t1

0x3c99,	// (0x00044c67) grid_highlight_pane_cp1_ParamLimits

0x3c99,	// (0x00044c67) grid_highlight_pane_cp1

0x2536,	// (0x00043504) cell_hwr_candidate_pane_cp1_ParamLimits

0x2536,	// (0x00043504) cell_hwr_candidate_pane_cp1

0x7a35,	// (0x00048a03) fep_hwr_candidate_drop_down_list_pane_g1

0x7eb5,	// (0x00048e83) fep_hwr_candidate_drop_down_list_pane_g2

0x7ec2,	// (0x00048e90) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb81,	// (0x00050b4f) fep_hwr_candidate_drop_down_list_pane_g

0x2555,	// (0x00043523) fep_hwr_candidate_drop_down_list_scroll_pane

0x255e,	// (0x0004352c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x255e,	// (0x0004352c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x256b,	// (0x00043539) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x256b,	// (0x00043539) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2578,	// (0x00043546) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2578,	// (0x00043546) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7d8e,	// (0x00048d5c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d8e,	// (0x00048d5c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7da9,	// (0x00048d77) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7da9,	// (0x00048d77) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2585,	// (0x00043553) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2585,	// (0x00043553) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x25a0,	// (0x0004356e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x25a0,	// (0x0004356e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x25bb,	// (0x00043589) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x25bb,	// (0x00043589) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb88,	// (0x00050b56) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb88,	// (0x00050b56) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7ecf,	// (0x00048e9d) cell_vkb_candidate_pane_cp1_ParamLimits

0x7ecf,	// (0x00048e9d) cell_vkb_candidate_pane_cp1

0x7a35,	// (0x00048a03) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7a35,	// (0x00048a03) fep_vkb_candidate_drop_down_list_pane_g1

0x7eb5,	// (0x00048e83) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7eb5,	// (0x00048e83) fep_vkb_candidate_drop_down_list_pane_g2

0x7ec2,	// (0x00048e90) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7ec2,	// (0x00048e90) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb81,	// (0x00050b4f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb81,	// (0x00050b4f) fep_vkb_candidate_drop_down_list_pane_g

0x7eef,	// (0x00048ebd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7eef,	// (0x00048ebd) fep_vkb_candidate_drop_down_list_scroll_pane

0x7efc,	// (0x00048eca) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7efc,	// (0x00048eca) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7f09,	// (0x00048ed7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f09,	// (0x00048ed7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7f15,	// (0x00048ee3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f15,	// (0x00048ee3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7d4c,	// (0x00048d1a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d4c,	// (0x00048d1a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7d6d,	// (0x00048d3b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7d6d,	// (0x00048d3b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7f21,	// (0x00048eef) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f21,	// (0x00048eef) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7f42,	// (0x00048f10) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f42,	// (0x00048f10) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7f63,	// (0x00048f31) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7f63,	// (0x00048f31) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb99,	// (0x00050b67) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb99,	// (0x00050b67) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbec7,	// (0x0004ce95) title_pane_g1_ParamLimits

0xbeda,	// (0x0004cea8) title_pane_g2_ParamLimits

0xf529,	// (0x000504f7) title_pane_g_ParamLimits

0x4312,	// (0x000452e0) aid_call2_pane

0x431a,	// (0x000452e8) aid_call_pane

0x4322,	// (0x000452f0) popup_clock_analogue_window_g1

0x4322,	// (0x000452f0) popup_clock_analogue_window_g2

0x12cd,	// (0x0004229b) popup_clock_analogue_window_g3

0x12d6,	// (0x000422a4) popup_clock_analogue_window_g4

0xe163,	// (0x0004f131) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x000506a6) popup_clock_analogue_window_g

0x12de,	// (0x000422ac) popup_clock_analogue_window_t1

0x12ec,	// (0x000422ba) clock_digital_number_pane_ParamLimits

0x12ec,	// (0x000422ba) clock_digital_number_pane

0x12f8,	// (0x000422c6) clock_digital_number_pane_cp02_ParamLimits

0x12f8,	// (0x000422c6) clock_digital_number_pane_cp02

0x1304,	// (0x000422d2) clock_digital_number_pane_cp03_ParamLimits

0x1304,	// (0x000422d2) clock_digital_number_pane_cp03

0x1310,	// (0x000422de) clock_digital_number_pane_cp04_ParamLimits

0x1310,	// (0x000422de) clock_digital_number_pane_cp04

0x131c,	// (0x000422ea) clock_digital_separator_pane_ParamLimits

0x131c,	// (0x000422ea) clock_digital_separator_pane

0x1328,	// (0x000422f6) popup_clock_digital_window_t1_ParamLimits

0x1328,	// (0x000422f6) popup_clock_digital_window_t1

0xe163,	// (0x0004f131) clock_digital_number_pane_g1

0xe163,	// (0x0004f131) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x000506b1) clock_digital_number_pane_g

0xe163,	// (0x0004f131) clock_digital_separator_pane_g1

0xe163,	// (0x0004f131) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x000506b1) clock_digital_separator_pane_g

0xd5cf,	// (0x0004e59d) aid_fill_nsta_ParamLimits

0xd705,	// (0x0004e6d3) indicator_nsta_pane_ParamLimits

0x4f5d,	// (0x00045f2b) popup_clock_analogue_window

0x4f5d,	// (0x00045f2b) popup_clock_digital_window

0xdf24,	// (0x0004eef2) grid_indicator_nsta_pane_ParamLimits

0x71bb,	// (0x00048189) clock_nsta_pane_t2

0x0001,

0xfa6b,	// (0x00050a39) clock_nsta_pane_t

0x1291,	// (0x0004225f) aid_size_max_handle

0x129b,	// (0x00042269) aid_size_min_handle

0x4938,	// (0x00045906) editor_scroll_pane

0x7f7e,	// (0x00048f4c) ex_editor_pane

0x3e0d,	// (0x00044ddb) scroll_pane_cp13

0x3c2c,	// (0x00044bfa) scroll_pane_cp14

0x4351,	// (0x0004531f) scroll_pane_cp36

0xd397,	// (0x0004e365) list_single_graphic_hl_pane_cp2_ParamLimits

0xd397,	// (0x0004e365) list_single_graphic_hl_pane_cp2

0xdd7a,	// (0x0004ed48) list_single_graphic_hl_pane_ParamLimits

0xdd7a,	// (0x0004ed48) list_single_graphic_hl_pane

0x0aa1,	// (0x00041a6f) aid_size_min_hl_cp1

0x7f86,	// (0x00048f54) list_highlight_pane_cp34_ParamLimits

0x7f86,	// (0x00048f54) list_highlight_pane_cp34

0x7f97,	// (0x00048f65) list_single_graphic_hl_pane_g1_ParamLimits

0x7f97,	// (0x00048f65) list_single_graphic_hl_pane_g1

0xbbaa,	// (0x0004cb78) list_single_graphic_hl_pane_g2_ParamLimits

0xbbaa,	// (0x0004cb78) list_single_graphic_hl_pane_g2

0xbbaa,	// (0x0004cb78) list_single_graphic_hl_pane_g3_ParamLimits

0xbbaa,	// (0x0004cb78) list_single_graphic_hl_pane_g3

0x4819,	// (0x000457e7) list_single_graphic_hl_pane_g4_ParamLimits

0x4819,	// (0x000457e7) list_single_graphic_hl_pane_g4

0xcb8d,	// (0x0004db5b) list_single_graphic_hl_pane_g5_ParamLimits

0xcb8d,	// (0x0004db5b) list_single_graphic_hl_pane_g5

0x0004,

0xfbaa,	// (0x00050b78) list_single_graphic_hl_pane_g_ParamLimits

0xfbaa,	// (0x00050b78) list_single_graphic_hl_pane_g

0xbbb6,	// (0x0004cb84) list_single_graphic_hl_pane_t1_ParamLimits

0xbbb6,	// (0x0004cb84) list_single_graphic_hl_pane_t1

0x7fa4,	// (0x00048f72) aid_size_min_hl_cp2

0x7fad,	// (0x00048f7b) list_highlight_pane_cp34_cp2_ParamLimits

0x7fad,	// (0x00048f7b) list_highlight_pane_cp34_cp2

0x7f97,	// (0x00048f65) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7f97,	// (0x00048f65) list_single_graphic_hl_pane_g1_cp2

0x7fba,	// (0x00048f88) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7fba,	// (0x00048f88) list_single_graphic_hl_pane_g2_cp2

0x7fc6,	// (0x00048f94) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7fc6,	// (0x00048f94) list_single_graphic_hl_pane_g3_cp2

0x7fd4,	// (0x00048fa2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7fd4,	// (0x00048fa2) list_single_graphic_hl_pane_g4_cp2

0x7fe0,	// (0x00048fae) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7fe0,	// (0x00048fae) list_single_graphic_hl_pane_g5_cp2

0xc2e4,	// (0x0004d2b2) control_pane_g4_ParamLimits

0xc2e4,	// (0x0004d2b2) control_pane_g4

0x4c5c,	// (0x00045c2a) bg_popup_sub_pane_cp10_ParamLimits

0x77c1,	// (0x0004878f) list_choice_list_pane_ParamLimits

0x77d0,	// (0x0004879e) scroll_pane_cp23

0x3689,	// (0x00044657) bg_popup_preview_window_pane_cp02_ParamLimits

0x7dfa,	// (0x00048dc8) list_preview_fixed_pane_ParamLimits

0x7e10,	// (0x00048dde) list_preview_fixed_pane_cp_ParamLimits

0x7e10,	// (0x00048dde) list_preview_fixed_pane_cp

0x7e1c,	// (0x00048dea) popup_preview_fixed_window_g1_ParamLimits

0x7e1c,	// (0x00048dea) popup_preview_fixed_window_g1

0x7e28,	// (0x00048df6) popup_preview_fixed_window_g2_ParamLimits

0x7e28,	// (0x00048df6) popup_preview_fixed_window_g2

0x0002,

0xfb39,	// (0x00050b07) popup_preview_fixed_window_g_ParamLimits

0xfb39,	// (0x00050b07) popup_preview_fixed_window_g

0x1205,	// (0x000421d3) aid_navi_side_left_pane_ParamLimits

0x121a,	// (0x000421e8) aid_navi_side_right_pane_ParamLimits

0x1232,	// (0x00042200) navi_icon_pane_stacon_ParamLimits

0x1246,	// (0x00042214) navi_navi_pane_stacon_ParamLimits

0x1232,	// (0x00042200) navi_text_pane_stacon_ParamLimits

0xe159,	// (0x0004f127) main_text_info_pane

0x800a,	// (0x00048fd8) listscroll_text_info_pane

0x8012,	// (0x00048fe0) list_text_info_pane_ParamLimits

0x8012,	// (0x00048fe0) list_text_info_pane

0x8021,	// (0x00048fef) scroll_pane_cp24_ParamLimits

0x8021,	// (0x00048fef) scroll_pane_cp24

0xe284,	// (0x0004f252) list_text_info_pane_t1_ParamLimits

0xe284,	// (0x0004f252) list_text_info_pane_t1

0xc425,	// (0x0004d3f3) popup_fast_swap2_window_ParamLimits

0xc425,	// (0x0004d3f3) popup_fast_swap2_window

0x8070,	// (0x0004903e) aid_size_cell_fast2

0xe159,	// (0x0004f127) bg_popup_window_pane_cp17

0x55e6,	// (0x000465b4) heading_pane_cp2

0x55ee,	// (0x000465bc) listscroll_fast2_pane

0x807a,	// (0x00049048) grid_fast2_pane

0x8084,	// (0x00049052) listscroll_fast2_pane_g1

0x808c,	// (0x0004905a) listscroll_fast2_pane_g2

0x0001,

0xfbb5,	// (0x00050b83) listscroll_fast2_pane_g

0x3e0d,	// (0x00044ddb) scroll_pane_cp26

0x8096,	// (0x00049064) cell_fast2_pane_ParamLimits

0x8096,	// (0x00049064) cell_fast2_pane

0x80ab,	// (0x00049079) cell_fast2_pane_g1

0x80b4,	// (0x00049082) cell_fast2_pane_g2

0x80bd,	// (0x0004908b) cell_fast2_pane_g3

0x0002,

0xfbba,	// (0x00050b88) cell_fast2_pane_g

0x39e9,	// (0x000449b7) grid_highlight_pane_cp9

0x39fe,	// (0x000449cc) main_eswt_pane_ParamLimits

0x39fe,	// (0x000449cc) main_eswt_pane

0x8036,	// (0x00049004) list_single_text_info_pane

0x80c5,	// (0x00049093) eswt_ctrl_button_pane

0x80c5,	// (0x00049093) eswt_ctrl_canvas_pane

0x80cd,	// (0x0004909b) eswt_ctrl_combo_pane

0x80c5,	// (0x00049093) eswt_ctrl_default_pane

0x80c5,	// (0x00049093) eswt_ctrl_label_pane

0x80d5,	// (0x000490a3) eswt_ctrl_wait_pane

0x80dd,	// (0x000490ab) eswt_shell_pane

0xe159,	// (0x0004f127) listscroll_eswt_app_pane

0x80fd,	// (0x000490cb) popup_eswt_tasktip_window_ParamLimits

0x80fd,	// (0x000490cb) popup_eswt_tasktip_window

0x51fa,	// (0x000461c8) bg_popup_window_pane_cp18

0x810e,	// (0x000490dc) eswt_control_pane_g1_ParamLimits

0x810e,	// (0x000490dc) eswt_control_pane_g1

0x811b,	// (0x000490e9) eswt_control_pane_g2_ParamLimits

0x811b,	// (0x000490e9) eswt_control_pane_g2

0x8128,	// (0x000490f6) eswt_control_pane_g3_ParamLimits

0x8128,	// (0x000490f6) eswt_control_pane_g3

0x8135,	// (0x00049103) eswt_control_pane_g4_ParamLimits

0x8135,	// (0x00049103) eswt_control_pane_g4

0x0003,

0xfbc1,	// (0x00050b8f) eswt_control_pane_g_ParamLimits

0xfbc1,	// (0x00050b8f) eswt_control_pane_g

0x3c99,	// (0x00044c67) bg_button_pane_ParamLimits

0x3c99,	// (0x00044c67) bg_button_pane

0x39fe,	// (0x000449cc) common_borders_pane_copy2_ParamLimits

0x39fe,	// (0x000449cc) common_borders_pane_copy2

0x8142,	// (0x00049110) control_button_pane_g1_ParamLimits

0x8142,	// (0x00049110) control_button_pane_g1

0x814e,	// (0x0004911c) control_button_pane_g2_ParamLimits

0x814e,	// (0x0004911c) control_button_pane_g2

0x815a,	// (0x00049128) control_button_pane_g3_ParamLimits

0x815a,	// (0x00049128) control_button_pane_g3

0x0002,

0xfbca,	// (0x00050b98) control_button_pane_g_ParamLimits

0xfbca,	// (0x00050b98) control_button_pane_g

0x816e,	// (0x0004913c) control_button_pane_t1

0x817c,	// (0x0004914a) control_button_pane_t2

0x0001,

0xfbd1,	// (0x00050b9f) control_button_pane_t

0x5186,	// (0x00046154) bg_button_pane_g1

0x518e,	// (0x0004615c) bg_button_pane_g2

0x5196,	// (0x00046164) bg_button_pane_g3

0x519e,	// (0x0004616c) bg_button_pane_g4

0x51a6,	// (0x00046174) bg_button_pane_g5

0x51ae,	// (0x0004617c) bg_button_pane_g6

0x51b6,	// (0x00046184) bg_button_pane_g7

0x51be,	// (0x0004618c) bg_button_pane_g8

0x51c6,	// (0x00046194) bg_button_pane_g9

0x0008,

0xf841,	// (0x0005080f) bg_button_pane_g

0x777c,	// (0x0004874a) common_borders_pane_ParamLimits

0x777c,	// (0x0004874a) common_borders_pane

0x810e,	// (0x000490dc) eswt_control_pane_g1_copy1_ParamLimits

0x810e,	// (0x000490dc) eswt_control_pane_g1_copy1

0x811b,	// (0x000490e9) eswt_control_pane_g2_copy1_ParamLimits

0x811b,	// (0x000490e9) eswt_control_pane_g2_copy1

0x8128,	// (0x000490f6) eswt_control_pane_g3_copy1_ParamLimits

0x8128,	// (0x000490f6) eswt_control_pane_g3_copy1

0x8135,	// (0x00049103) eswt_control_pane_g4_copy1_ParamLimits

0x8135,	// (0x00049103) eswt_control_pane_g4_copy1

0x77b7,	// (0x00048785) bg_eswt_ctrl_canvas_pane_g1

0x777c,	// (0x0004874a) common_borders_pane_cp2_ParamLimits

0x777c,	// (0x0004874a) common_borders_pane_cp2

0x777c,	// (0x0004874a) common_borders_pane_cp3_ParamLimits

0x777c,	// (0x0004874a) common_borders_pane_cp3

0x818a,	// (0x00049158) separator_horizontal_pane

0x8192,	// (0x00049160) separator_vertical_pane

0x810e,	// (0x000490dc) eswt_control_pane_g1_copy2_ParamLimits

0x810e,	// (0x000490dc) eswt_control_pane_g1_copy2

0x811b,	// (0x000490e9) eswt_control_pane_g2_copy2_ParamLimits

0x811b,	// (0x000490e9) eswt_control_pane_g2_copy2

0x8128,	// (0x000490f6) eswt_control_pane_g3_copy2_ParamLimits

0x8128,	// (0x000490f6) eswt_control_pane_g3_copy2

0x8135,	// (0x00049103) eswt_control_pane_g4_copy2_ParamLimits

0x8135,	// (0x00049103) eswt_control_pane_g4_copy2

0xe159,	// (0x0004f127) common_borders_pane_cp4

0x819b,	// (0x00049169) separator_horizontal_pane_g1

0x81a4,	// (0x00049172) separator_horizontal_pane_g2

0x81ad,	// (0x0004917b) separator_horizontal_pane_g3

0x0002,

0xfbd6,	// (0x00050ba4) separator_horizontal_pane_g

0x810e,	// (0x000490dc) eswt_control_pane_g1_copy3_ParamLimits

0x810e,	// (0x000490dc) eswt_control_pane_g1_copy3

0x811b,	// (0x000490e9) eswt_control_pane_g2_copy3_ParamLimits

0x811b,	// (0x000490e9) eswt_control_pane_g2_copy3

0x8128,	// (0x000490f6) eswt_control_pane_g3_copy3_ParamLimits

0x8128,	// (0x000490f6) eswt_control_pane_g3_copy3

0x8135,	// (0x00049103) eswt_control_pane_g4_copy3_ParamLimits

0x8135,	// (0x00049103) eswt_control_pane_g4_copy3

0xe159,	// (0x0004f127) common_borders_pane_cp5

0x81b6,	// (0x00049184) separator_vertical_pane_g1

0x81bf,	// (0x0004918d) separator_vertical_pane_g2

0x81c8,	// (0x00049196) separator_vertical_pane_g3

0x0002,

0xfbdd,	// (0x00050bab) separator_vertical_pane_g

0x810e,	// (0x000490dc) eswt_control_pane_g1_copy4_ParamLimits

0x810e,	// (0x000490dc) eswt_control_pane_g1_copy4

0x811b,	// (0x000490e9) eswt_control_pane_g2_copy4_ParamLimits

0x811b,	// (0x000490e9) eswt_control_pane_g2_copy4

0x8128,	// (0x000490f6) eswt_control_pane_g3_copy4_ParamLimits

0x8128,	// (0x000490f6) eswt_control_pane_g3_copy4

0x8135,	// (0x00049103) eswt_control_pane_g4_copy4_ParamLimits

0x8135,	// (0x00049103) eswt_control_pane_g4_copy4

0x81d1,	// (0x0004919f) eswt_ctrl_combo_button_pane

0x81d9,	// (0x000491a7) eswt_ctrl_input_pane

0x81e1,	// (0x000491af) popup_choice_list_window_cp70

0x81e9,	// (0x000491b7) eswt_ctrl_input_pane_t1

0xe159,	// (0x0004f127) input_focus_pane_cp70

0x777c,	// (0x0004874a) bg_button_pane_cp70_ParamLimits

0x777c,	// (0x0004874a) bg_button_pane_cp70

0x81f7,	// (0x000491c5) eswt_ctrl_combo_button_pane_g1

0x81ff,	// (0x000491cd) wait_bar_pane_cp70

0x51fa,	// (0x000461c8) bg_popup_window_pane_cp70_ParamLimits

0x51fa,	// (0x000461c8) bg_popup_window_pane_cp70

0x8207,	// (0x000491d5) popup_eswt_tasktip_window_t1

0x821d,	// (0x000491eb) wait_bar_pane_cp71_ParamLimits

0x821d,	// (0x000491eb) wait_bar_pane_cp71

0x8229,	// (0x000491f7) grid_eswt_app_pane

0x4134,	// (0x00045102) scroll_pane_cp70

0xe29f,	// (0x0004f26d) cell_eswt_app_pane_ParamLimits

0xe29f,	// (0x0004f26d) cell_eswt_app_pane

0xe2c9,	// (0x0004f297) cell_eswt_app_pane_g1_ParamLimits

0xe2c9,	// (0x0004f297) cell_eswt_app_pane_g1

0xe2f8,	// (0x0004f2c6) cell_eswt_app_pane_g2_ParamLimits

0xe2f8,	// (0x0004f2c6) cell_eswt_app_pane_g2

0x0001,

0xfbe4,	// (0x00050bb2) cell_eswt_app_pane_g_ParamLimits

0xfbe4,	// (0x00050bb2) cell_eswt_app_pane_g

0xe321,	// (0x0004f2ef) cell_eswt_app_pane_t1_ParamLimits

0xe321,	// (0x0004f2ef) cell_eswt_app_pane_t1

0x82ec,	// (0x000492ba) grid_highlight_pane_cp70_ParamLimits

0x82ec,	// (0x000492ba) grid_highlight_pane_cp70

0x4819,	// (0x000457e7) set_content_pane_g1

0xd58c,	// (0x0004e55a) status_small_volume_pane

0x25ea,	// (0x000435b8) status_small_volume_pane_g1

0x25f2,	// (0x000435c0) volume_small2_pane

0x25fb,	// (0x000435c9) volume_small2_pane_g1

0x2604,	// (0x000435d2) volume_small2_pane_g2

0x260d,	// (0x000435db) volume_small2_pane_g3

0x2616,	// (0x000435e4) volume_small2_pane_g4

0x261f,	// (0x000435ed) volume_small2_pane_g5

0x2628,	// (0x000435f6) volume_small2_pane_g6

0x2631,	// (0x000435ff) volume_small2_pane_g7

0x263a,	// (0x00043608) volume_small2_pane_g8

0x2643,	// (0x00043611) volume_small2_pane_g9

0x264c,	// (0x0004361a) volume_small2_pane_g10

0x0009,

0xfbe9,	// (0x00050bb7) volume_small2_pane_g

0x7b7d,	// (0x00048b4b) fep_vkb_top_text_pane_g1_ParamLimits

0xe22c,	// (0x0004f1fa) fep_vkb_top_text_pane_t1_ParamLimits

0x7e34,	// (0x00048e02) popup_preview_fixed_window_g3_ParamLimits

0x7e34,	// (0x00048e02) popup_preview_fixed_window_g3

0xca4e,	// (0x0004da1c) popup_toolbar_trans_pane

0xdc01,	// (0x0004ebcf) aid_height_set_list_ParamLimits

0x656f,	// (0x0004753d) aid_size_parent_ParamLimits

0x4c5c,	// (0x00045c2a) list_highlight_pane_cp2_ParamLimits

0x4819,	// (0x000457e7) set_content_pane_g1_ParamLimits

0xbb67,	// (0x0004cb35) list_single_image_pane_ParamLimits

0xbb67,	// (0x0004cb35) list_single_image_pane

0xe353,	// (0x0004f321) aid_size_cell_image_ParamLimits

0xe353,	// (0x0004f321) aid_size_cell_image

0xe360,	// (0x0004f32e) grid_single_image_pane_ParamLimits

0xe360,	// (0x0004f32e) grid_single_image_pane

0x6695,	// (0x00047663) list_single_image_pane_g1_ParamLimits

0x6695,	// (0x00047663) list_single_image_pane_g1

0x8311,	// (0x000492df) list_single_image_pane_g2_ParamLimits

0x8311,	// (0x000492df) list_single_image_pane_g2

0x0001,

0xfbfe,	// (0x00050bcc) list_single_image_pane_g_ParamLimits

0xfbfe,	// (0x00050bcc) list_single_image_pane_g

0x8325,	// (0x000492f3) list_single_image_pane_t1_ParamLimits

0x8325,	// (0x000492f3) list_single_image_pane_t1

0xe36c,	// (0x0004f33a) cell_image_list_pane_ParamLimits

0xe36c,	// (0x0004f33a) cell_image_list_pane

0xe380,	// (0x0004f34e) cell_image_list_pane_g1

0xe389,	// (0x0004f357) cell_image_list_pane_g2

0x0001,

0xfc03,	// (0x00050bd1) cell_image_list_pane_g

0x8361,	// (0x0004932f) aid_size_cell_tb_trans_pane

0x3c99,	// (0x00044c67) bg_tb_trans_pane

0x8373,	// (0x00049341) grid_tb_trans_pane

0x5186,	// (0x00046154) bg_tb_trans_pane_g1

0x518e,	// (0x0004615c) bg_tb_trans_pane_g2

0x5196,	// (0x00046164) bg_tb_trans_pane_g3

0x519e,	// (0x0004616c) bg_tb_trans_pane_g4

0x51a6,	// (0x00046174) bg_tb_trans_pane_g5

0x51be,	// (0x0004618c) bg_tb_trans_pane_g6

0x51c6,	// (0x00046194) bg_tb_trans_pane_g7

0x51ae,	// (0x0004617c) bg_tb_trans_pane_g8

0x51b6,	// (0x00046184) bg_tb_trans_pane_g9

0x0008,

0xfc08,	// (0x00050bd6) bg_tb_trans_pane_g

0x8387,	// (0x00049355) cell_toolbar_trans_pane_ParamLimits

0x8387,	// (0x00049355) cell_toolbar_trans_pane

0x77b7,	// (0x00048785) cell_toolbar_trans_pane_g1

0xdfdb,	// (0x0004efa9) list_form2_midp_pane_t1

0xdfe9,	// (0x0004efb7) list_form2_midp_pane_t2

0x0001,

0xfab1,	// (0x00050a7f) list_form2_midp_pane_t

0x73a8,	// (0x00048376) scroll_pane_cp51_ParamLimits

0x7564,	// (0x00048532) form2_midp_wait_pane_g1

0x756d,	// (0x0004853b) form2_midp_wait_pane_g2

0x7576,	// (0x00048544) form2_midp_wait_pane_g3

0x0002,

0xfac6,	// (0x00050a94) form2_midp_wait_pane_g

0x3400,	// (0x000443ce) list_highlight_pane_cp21_ParamLimits

0x75c2,	// (0x00048590) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x75d1,	// (0x0004859f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6733,	// (0x00047701) list_single_2graphic_im_pane_ParamLimits

0x6733,	// (0x00047701) list_single_2graphic_im_pane

0x83ad,	// (0x0004937b) list_single_2graphic_im_pane_g1_ParamLimits

0x83ad,	// (0x0004937b) list_single_2graphic_im_pane_g1

0x83be,	// (0x0004938c) list_single_2graphic_im_pane_g2_ParamLimits

0x83be,	// (0x0004938c) list_single_2graphic_im_pane_g2

0x83ca,	// (0x00049398) list_single_2graphic_im_pane_g3_ParamLimits

0x83ca,	// (0x00049398) list_single_2graphic_im_pane_g3

0x0003,

0xfc1b,	// (0x00050be9) list_single_2graphic_im_pane_g_ParamLimits

0xfc1b,	// (0x00050be9) list_single_2graphic_im_pane_g

0x83ea,	// (0x000493b8) list_single_2graphic_im_pane_t1_ParamLimits

0x83ea,	// (0x000493b8) list_single_2graphic_im_pane_t1

0x7e40,	// (0x00048e0e) list_single_graphic_2heading_pane_fp_ParamLimits

0x7e40,	// (0x00048e0e) list_single_graphic_2heading_pane_fp

0x0983,	// (0x00041951) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0983,	// (0x00041951) list_single_graphic_2heading_pane_fp_g1

0x7e55,	// (0x00048e23) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7e55,	// (0x00048e23) list_single_graphic_2heading_pane_fp_g2

0x3c34,	// (0x00044c02) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3c34,	// (0x00044c02) list_single_graphic_2heading_pane_fp_g3

0x3ca7,	// (0x00044c75) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3ca7,	// (0x00044c75) list_single_graphic_2heading_pane_fp_g4

0x7e61,	// (0x00048e2f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7e61,	// (0x00048e2f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb49,	// (0x00050b17) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb49,	// (0x00050b17) list_single_graphic_2heading_pane_fp_g

0x0acc,	// (0x00041a9a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0acc,	// (0x00041a9a) list_single_graphic_2heading_pane_fp_t1

0x09bb,	// (0x00041989) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x09bb,	// (0x00041989) list_single_graphic_2heading_pane_fp_t2

0x0ae2,	// (0x00041ab0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0ae2,	// (0x00041ab0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc24,	// (0x00050bf2) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc24,	// (0x00050bf2) list_single_graphic_2heading_pane_fp_t

0x7843,	// (0x00048811) fep_hwr_write_pane_g5_ParamLimits

0x7843,	// (0x00048811) fep_hwr_write_pane_g5

0x784f,	// (0x0004881d) fep_hwr_write_pane_g6_ParamLimits

0x784f,	// (0x0004881d) fep_hwr_write_pane_g6

0x80dd,	// (0x000490ab) eswt_shell_pane_ParamLimits

0x51fa,	// (0x000461c8) bg_popup_window_pane_cp18_ParamLimits

0x64b7,	// (0x00047485) heading_pane_cp70

0x8207,	// (0x000491d5) popup_eswt_tasktip_window_t1_ParamLimits

0xd62a,	// (0x0004e5f8) aid_touch_tab_arrow_left

0xd640,	// (0x0004e60e) aid_touch_tab_arrow_right

0xbef2,	// (0x0004cec0) title_pane_g3_ParamLimits

0xbef2,	// (0x0004cec0) title_pane_g3

0x3c58,	// (0x00044c26) set_value_pane_g1

0xca4e,	// (0x0004da1c) popup_toolbar_trans_pane_ParamLimits

0x8361,	// (0x0004932f) aid_size_cell_tb_trans_pane_ParamLimits

0x3c99,	// (0x00044c67) bg_tb_trans_pane_ParamLimits

0x8373,	// (0x00049341) grid_tb_trans_pane_ParamLimits

0x3689,	// (0x00044657) cont_note_pane_ParamLimits

0x3689,	// (0x00044657) cont_note_pane

0x39fe,	// (0x000449cc) cont_snote2_single_text_pane_ParamLimits

0x39fe,	// (0x000449cc) cont_snote2_single_text_pane

0x39fe,	// (0x000449cc) cont_snote2_single_graphic_pane_ParamLimits

0x39fe,	// (0x000449cc) cont_snote2_single_graphic_pane

0x5815,	// (0x000467e3) cont_note_wait_pane_ParamLimits

0x5815,	// (0x000467e3) cont_note_wait_pane

0x5815,	// (0x000467e3) cont_note_image_pane_ParamLimits

0x5815,	// (0x000467e3) cont_note_image_pane

0x841b,	// (0x000493e9) popup_note2_window_g1_ParamLimits

0x841b,	// (0x000493e9) popup_note2_window_g1

0x844c,	// (0x0004941a) popup_note2_window_t1_ParamLimits

0x844c,	// (0x0004941a) popup_note2_window_t1

0x8491,	// (0x0004945f) popup_note2_window_t2_ParamLimits

0x8491,	// (0x0004945f) popup_note2_window_t2

0x84d6,	// (0x000494a4) popup_note2_window_t3_ParamLimits

0x84d6,	// (0x000494a4) popup_note2_window_t3

0x851b,	// (0x000494e9) popup_note2_window_t4_ParamLimits

0x851b,	// (0x000494e9) popup_note2_window_t4

0x370d,	// (0x000446db) popup_note2_window_t5_ParamLimits

0x370d,	// (0x000446db) popup_note2_window_t5

0x0004,

0xfc30,	// (0x00050bfe) popup_note2_window_t_ParamLimits

0xfc30,	// (0x00050bfe) popup_note2_window_t

0x854a,	// (0x00049518) popup_note2_image_window_g1_ParamLimits

0x854a,	// (0x00049518) popup_note2_image_window_g1

0x8556,	// (0x00049524) popup_note2_image_window_g2_ParamLimits

0x8556,	// (0x00049524) popup_note2_image_window_g2

0x0001,

0xfc3b,	// (0x00050c09) popup_note2_image_window_g_ParamLimits

0xfc3b,	// (0x00050c09) popup_note2_image_window_g

0x8568,	// (0x00049536) popup_note2_image_window_t1_ParamLimits

0x8568,	// (0x00049536) popup_note2_image_window_t1

0x8580,	// (0x0004954e) popup_note2_image_window_t2_ParamLimits

0x8580,	// (0x0004954e) popup_note2_image_window_t2

0x8598,	// (0x00049566) popup_note2_image_window_t3_ParamLimits

0x8598,	// (0x00049566) popup_note2_image_window_t3

0x0002,

0xfc40,	// (0x00050c0e) popup_note2_image_window_t_ParamLimits

0xfc40,	// (0x00050c0e) popup_note2_image_window_t

0x5823,	// (0x000467f1) popup_note2_wait_window_g1_ParamLimits

0x5823,	// (0x000467f1) popup_note2_wait_window_g1

0x85b4,	// (0x00049582) popup_note2_wait_window_g2_ParamLimits

0x85b4,	// (0x00049582) popup_note2_wait_window_g2

0x583b,	// (0x00046809) popup_note2_wait_window_g3_ParamLimits

0x583b,	// (0x00046809) popup_note2_wait_window_g3

0x0002,

0xfc47,	// (0x00050c15) popup_note2_wait_window_g_ParamLimits

0xfc47,	// (0x00050c15) popup_note2_wait_window_g

0x85c0,	// (0x0004958e) popup_note2_wait_window_t1_ParamLimits

0x85c0,	// (0x0004958e) popup_note2_wait_window_t1

0x85de,	// (0x000495ac) popup_note2_wait_window_t2_ParamLimits

0x85de,	// (0x000495ac) popup_note2_wait_window_t2

0x85fc,	// (0x000495ca) popup_note2_wait_window_t3_ParamLimits

0x85fc,	// (0x000495ca) popup_note2_wait_window_t3

0x860e,	// (0x000495dc) popup_note2_wait_window_t4_ParamLimits

0x860e,	// (0x000495dc) popup_note2_wait_window_t4

0x0003,

0xfc4e,	// (0x00050c1c) popup_note2_wait_window_t_ParamLimits

0xfc4e,	// (0x00050c1c) popup_note2_wait_window_t

0x8620,	// (0x000495ee) wait_bar2_pane_ParamLimits

0x8620,	// (0x000495ee) wait_bar2_pane

0x8638,	// (0x00049606) popup_snote2_single_text_window_g1_ParamLimits

0x8638,	// (0x00049606) popup_snote2_single_text_window_g1

0x8660,	// (0x0004962e) popup_snote2_single_text_window_t1_ParamLimits

0x8660,	// (0x0004962e) popup_snote2_single_text_window_t1

0x86ac,	// (0x0004967a) popup_snote2_single_text_window_t2_ParamLimits

0x86ac,	// (0x0004967a) popup_snote2_single_text_window_t2

0x86f8,	// (0x000496c6) popup_snote2_single_text_window_t3_ParamLimits

0x86f8,	// (0x000496c6) popup_snote2_single_text_window_t3

0x8739,	// (0x00049707) popup_snote2_single_text_window_t4_ParamLimits

0x8739,	// (0x00049707) popup_snote2_single_text_window_t4

0x876f,	// (0x0004973d) popup_snote2_single_text_window_t5_ParamLimits

0x876f,	// (0x0004973d) popup_snote2_single_text_window_t5

0x0004,

0xfc57,	// (0x00050c25) popup_snote2_single_text_window_t_ParamLimits

0xfc57,	// (0x00050c25) popup_snote2_single_text_window_t

0x879a,	// (0x00049768) popup_snote2_single_graphic_window_g1_ParamLimits

0x879a,	// (0x00049768) popup_snote2_single_graphic_window_g1

0x87c2,	// (0x00049790) popup_snote2_single_graphic_window_g2_ParamLimits

0x87c2,	// (0x00049790) popup_snote2_single_graphic_window_g2

0x0001,

0xfc62,	// (0x00050c30) popup_snote2_single_graphic_window_g_ParamLimits

0xfc62,	// (0x00050c30) popup_snote2_single_graphic_window_g

0x87ea,	// (0x000497b8) popup_snote2_single_graphic_window_t1_ParamLimits

0x87ea,	// (0x000497b8) popup_snote2_single_graphic_window_t1

0x8836,	// (0x00049804) popup_snote2_single_graphic_window_t2_ParamLimits

0x8836,	// (0x00049804) popup_snote2_single_graphic_window_t2

0x86f8,	// (0x000496c6) popup_snote2_single_graphic_window_t3_ParamLimits

0x86f8,	// (0x000496c6) popup_snote2_single_graphic_window_t3

0x8739,	// (0x00049707) popup_snote2_single_graphic_window_t4_ParamLimits

0x8739,	// (0x00049707) popup_snote2_single_graphic_window_t4

0x876f,	// (0x0004973d) popup_snote2_single_graphic_window_t5_ParamLimits

0x876f,	// (0x0004973d) popup_snote2_single_graphic_window_t5

0x0004,

0xfc67,	// (0x00050c35) popup_snote2_single_graphic_window_t_ParamLimits

0xfc67,	// (0x00050c35) popup_snote2_single_graphic_window_t

0x7269,	// (0x00048237) clock_nsta_pane_cp2_t1

0x7269,	// (0x00048237) clock_nsta_pane_cp2_t2

0x0001,

0xfa87,	// (0x00050a55) clock_nsta_pane_cp2_t

0x02a4,	// (0x00041272) form_field_data_wide_pane_g1_ParamLimits

0x3c34,	// (0x00044c02) form_field_data_wide_pane_g2_ParamLimits

0x3c34,	// (0x00044c02) form_field_data_wide_pane_g2

0x3ca7,	// (0x00044c75) form_field_data_wide_pane_g3_ParamLimits

0x3ca7,	// (0x00044c75) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00050629) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00050629) form_field_data_wide_pane_g

0xdf0e,	// (0x0004eedc) grid_touch_3_pane_ParamLimits

0xdf0e,	// (0x0004eedc) grid_touch_3_pane

0xe392,	// (0x0004f360) cell_touch_3_pane_ParamLimits

0xe392,	// (0x0004f360) cell_touch_3_pane

0x77b7,	// (0x00048785) cell_touch_3_pane_g1

0x77b7,	// (0x00048785) cell_touch_3_pane_g2

0x0001,

0xfb0c,	// (0x00050ada) cell_touch_3_pane_g

0x3765,	// (0x00044733) cont_query_data_pane

0x376d,	// (0x0004473b) cont_query_data_pane_cp1

0x88b0,	// (0x0004987e) button_value_adjust_pane_cp7

0x88b8,	// (0x00049886) query_popup_pane_cp3

0x4412,	// (0x000453e0) bg_popup_sub_pane_cp22_ParamLimits

0x1347,	// (0x00042315) navi_navi_volume_pane_cp2

0x1362,	// (0x00042330) popup_side_volume_key_window_g2

0x1371,	// (0x0004233f) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x000506bf) popup_side_volume_key_window_g

0x138e,	// (0x0004235c) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x000506c6) popup_side_volume_key_window_t

0x46d8,	// (0x000456a6) popup_side_volume_key_window_ParamLimits

0xb71e,	// (0x0004c6ec) list_double_graphic_pane_g4_ParamLimits

0xb71e,	// (0x0004c6ec) list_double_graphic_pane_g4

0xcb2d,	// (0x0004dafb) list_single_2heading_msg_pane_ParamLimits

0xcb2d,	// (0x0004dafb) list_single_2heading_msg_pane

0xcba1,	// (0x0004db6f) list_single_2heading_msg_pane_g1_ParamLimits

0xcba1,	// (0x0004db6f) list_single_2heading_msg_pane_g1

0xcbad,	// (0x0004db7b) list_single_2heading_msg_pane_g2_ParamLimits

0xcbad,	// (0x0004db7b) list_single_2heading_msg_pane_g2

0xcbc0,	// (0x0004db8e) list_single_2heading_msg_pane_g3_ParamLimits

0xcbc0,	// (0x0004db8e) list_single_2heading_msg_pane_g3

0x2679,	// (0x00043647) list_single_2heading_msg_pane_g4_ParamLimits

0x2679,	// (0x00043647) list_single_2heading_msg_pane_g4

0x0003,

0xfc72,	// (0x00050c40) list_single_2heading_msg_pane_g_ParamLimits

0xfc72,	// (0x00050c40) list_single_2heading_msg_pane_g

0x0b02,	// (0x00041ad0) list_single_2heading_msg_pane_t1_ParamLimits

0x0b02,	// (0x00041ad0) list_single_2heading_msg_pane_t1

0xbbcc,	// (0x0004cb9a) list_single_2heading_msg_pane_t2_ParamLimits

0xbbcc,	// (0x0004cb9a) list_single_2heading_msg_pane_t2

0xbc37,	// (0x0004cc05) list_single_2heading_msg_pane_t3_ParamLimits

0xbc37,	// (0x0004cc05) list_single_2heading_msg_pane_t3

0x0b97,	// (0x00041b65) list_single_2heading_msg_pane_t4_ParamLimits

0x0b97,	// (0x00041b65) list_single_2heading_msg_pane_t4

0x0003,

0xfc7b,	// (0x00050c49) list_single_2heading_msg_pane_t_ParamLimits

0xfc7b,	// (0x00050c49) list_single_2heading_msg_pane_t

0x3354,	// (0x00044322) title_pane_g4_ParamLimits

0x3354,	// (0x00044322) title_pane_g4

0x1156,	// (0x00042124) title_pane_stacon_g3_ParamLimits

0x1156,	// (0x00042124) title_pane_stacon_g3

0x83de,	// (0x000493ac) list_single_2graphic_im_pane_g4_ParamLimits

0x83de,	// (0x000493ac) list_single_2graphic_im_pane_g4

0x6274,	// (0x00047242) popup_side_volume_key_window_cp

0x6a90,	// (0x00047a5e) main_idle_act2_pane_t1

0x1d0b,	// (0x00042cd9) toolbar_button_pane_g10

0xc251,	// (0x0004d21f) popup_toolbar_window_cp1

0x725a,	// (0x00048228) clock_nsta_pane_cp_t1

0x725a,	// (0x00048228) clock_nsta_pane_cp_t2

0x0001,

0xfa82,	// (0x00050a50) clock_nsta_pane_cp_t

0x1347,	// (0x00042315) navi_navi_volume_pane_cp2_ParamLimits

0x1356,	// (0x00042324) popup_side_volume_key_window_g1_ParamLimits

0x1362,	// (0x00042330) popup_side_volume_key_window_g2_ParamLimits

0x1371,	// (0x0004233f) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x000506bf) popup_side_volume_key_window_g_ParamLimits

0x2276,	// (0x00043244) fep_hwr_aid_pane

0xe0be,	// (0x0004f08c) bg_fep_hwr_top_pane_g4_ParamLimits

0x7813,	// (0x000487e1) fep_hwr_top_pane_g1_ParamLimits

0x7825,	// (0x000487f3) fep_hwr_top_pane_g2_ParamLimits

0x232f,	// (0x000432fd) fep_hwr_top_pane_g3_ParamLimits

0xfad7,	// (0x00050aa5) fep_hwr_top_pane_g_ParamLimits

0x2344,	// (0x00043312) fep_hwr_top_text_pane_ParamLimits

0x6037,	// (0x00047005) aid_touch_tab_arrow_arrow_2

0x6040,	// (0x0004700e) aid_touch_tab_arrow_left_2

0x228a,	// (0x00043258) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x22c1,	// (0x0004328f) fep_hwr_prediction_pane

0x7985,	// (0x00048953) fep_vkb_prediction_pane

0xe20c,	// (0x0004f1da) fep_vkb_side_pane_g3_ParamLimits

0xe20c,	// (0x0004f1da) fep_vkb_side_pane_g3

0x7a35,	// (0x00048a03) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7eb5,	// (0x00048e83) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7ec2,	// (0x00048e90) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb81,	// (0x00050b4f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x88dd,	// (0x000498ab) fep_hwr_prediction_pane_g1

0x2691,	// (0x0004365f) fep_hwr_prediction_pane_g2

0x2699,	// (0x00043667) fep_hwr_prediction_pane_g3

0x26a1,	// (0x0004366f) fep_hwr_prediction_pane_g4

0x0003,

0xfc84,	// (0x00050c52) fep_hwr_prediction_pane_g

0x88dd,	// (0x000498ab) fep_vkb_prediction_pane_g1

0x88e7,	// (0x000498b5) fep_vkb_prediction_pane_g2

0x88ef,	// (0x000498bd) fep_vkb_prediction_pane_g3

0x88f7,	// (0x000498c5) fep_vkb_prediction_pane_g4

0x0003,

0xfc8d,	// (0x00050c5b) fep_vkb_prediction_pane_g

0x1fff,	// (0x00042fcd) slider_set_pane_g3

0x2013,	// (0x00042fe1) slider_set_pane_g4

0x202b,	// (0x00042ff9) slider_set_pane_g5

0x1fff,	// (0x00042fcd) slider_set_pane_g6

0x2041,	// (0x0004300f) slider_set_pane_g7

0x66e0,	// (0x000476ae) slider_form_pane_g3

0x66e9,	// (0x000476b7) slider_form_pane_g4

0x66f1,	// (0x000476bf) slider_form_pane_g5

0x66e0,	// (0x000476ae) slider_form_pane_g6

0xdd4c,	// (0x0004ed1a) slider_form_pane_g7

0x6d3b,	// (0x00047d09) slider_set_pane_vc_g3

0x6d44,	// (0x00047d12) slider_set_pane_vc_g4

0x6d4d,	// (0x00047d1b) slider_set_pane_vc_g5

0x6d3b,	// (0x00047d09) slider_set_pane_vc_g6

0x6d56,	// (0x00047d24) slider_set_pane_vc_g7

0x6f18,	// (0x00047ee6) slider_form_pane_vc_g1

0x6f21,	// (0x00047eef) slider_form_pane_vc_g2

0x6f2a,	// (0x00047ef8) slider_form_pane_vc_g3

0x6f18,	// (0x00047ee6) slider_form_pane_vc_g4

0x6f33,	// (0x00047f01) slider_form_pane_vc_g5

0x0004,

0xfa54,	// (0x00050a22) slider_form_pane_vc_g

0xe159,	// (0x0004f127) main_idle_act3_pane

0x88ff,	// (0x000498cd) ai3_links_pane

0xe3da,	// (0x0004f3a8) popup_ai3_data_window_ParamLimits

0xe3da,	// (0x0004f3a8) popup_ai3_data_window

0xe159,	// (0x0004f127) grid_ai3_links_pane

0xe3f4,	// (0x0004f3c2) cell_ai3_links_pane_ParamLimits

0xe3f4,	// (0x0004f3c2) cell_ai3_links_pane

0x893a,	// (0x00049908) bg_popup_sub_pane_cp11

0x8947,	// (0x00049915) cell_ai3_links_pane_g1

0xe159,	// (0x0004f127) bg_popup_sub_pane_cp12

0x896c,	// (0x0004993a) heading_ai3_data_pane

0x8974,	// (0x00049942) list_ai3_gene_pane

0x8980,	// (0x0004994e) popup_ai3_data_window_g1

0x8988,	// (0x00049956) heading_ai3_data_pane_g1

0x8990,	// (0x0004995e) heading_ai3_data_pane_t1

0x899e,	// (0x0004996c) list_double_ai3_gene_pane_ParamLimits

0x899e,	// (0x0004996c) list_double_ai3_gene_pane

0x89ab,	// (0x00049979) list_single_ai3_gene_pane_ParamLimits

0x89ab,	// (0x00049979) list_single_ai3_gene_pane

0x777c,	// (0x0004874a) list_highlight_pane_cp7_ParamLimits

0x777c,	// (0x0004874a) list_highlight_pane_cp7

0x89b8,	// (0x00049986) list_single_a13_gene_pane_t1_ParamLimits

0x89b8,	// (0x00049986) list_single_a13_gene_pane_t1

0x89cf,	// (0x0004999d) list_single_ai3_gene_pane_g1

0x89d8,	// (0x000499a6) list_single_ai3_gene_pane_g2

0x0001,

0xfc96,	// (0x00050c64) list_single_ai3_gene_pane_g

0x89e0,	// (0x000499ae) list_double_ai3_gene_pane_g1_ParamLimits

0x89e0,	// (0x000499ae) list_double_ai3_gene_pane_g1

0x89ec,	// (0x000499ba) list_double_ai3_gene_pane_t1_ParamLimits

0x89ec,	// (0x000499ba) list_double_ai3_gene_pane_t1

0x8a08,	// (0x000499d6) list_double_ai3_gene_pane_t2_ParamLimits

0x8a08,	// (0x000499d6) list_double_ai3_gene_pane_t2

0x8a1e,	// (0x000499ec) list_double_ai3_gene_pane_t3_ParamLimits

0x8a1e,	// (0x000499ec) list_double_ai3_gene_pane_t3

0x0002,

0xfc9b,	// (0x00050c69) list_double_ai3_gene_pane_t_ParamLimits

0xfc9b,	// (0x00050c69) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0af8,	// (0x00041ac6) aid_size_min_col_2

0xe3c4,	// (0x0004f392) aid_size_min_msg_ParamLimits

0xe3c4,	// (0x0004f392) aid_size_min_msg

0xe220,	// (0x0004f1ee) fep_vkb_top_text_pane_g2_ParamLimits

0xe220,	// (0x0004f1ee) fep_vkb_top_text_pane_g2

0x0001,

0xfb07,	// (0x00050ad5) fep_vkb_top_text_pane_g_ParamLimits

0xfb07,	// (0x00050ad5) fep_vkb_top_text_pane_g

0xe159,	// (0x0004f127) main_hc_apps_shell_pane

0x8a3b,	// (0x00049a09) grid_hc_apps_pane_ParamLimits

0x8a3b,	// (0x00049a09) grid_hc_apps_pane

0x8a4d,	// (0x00049a1b) list_hc_apps_pane

0x8a55,	// (0x00049a23) scroll_pane_cp37_ParamLimits

0x8a55,	// (0x00049a23) scroll_pane_cp37

0xe40e,	// (0x0004f3dc) cell_hc_apps_pane_ParamLimits

0xe40e,	// (0x0004f3dc) cell_hc_apps_pane

0xe4cc,	// (0x0004f49a) cell_hc_apps_pane_g1_ParamLimits

0xe4cc,	// (0x0004f49a) cell_hc_apps_pane_g1

0x8b3f,	// (0x00049b0d) cell_hc_apps_pane_g2_ParamLimits

0x8b3f,	// (0x00049b0d) cell_hc_apps_pane_g2

0x8b5b,	// (0x00049b29) cell_hc_apps_pane_g3_ParamLimits

0x8b5b,	// (0x00049b29) cell_hc_apps_pane_g3

0x0002,

0xfca2,	// (0x00050c70) cell_hc_apps_pane_g_ParamLimits

0xfca2,	// (0x00050c70) cell_hc_apps_pane_g

0xe4f8,	// (0x0004f4c6) cell_hc_apps_pane_t1_ParamLimits

0xe4f8,	// (0x0004f4c6) cell_hc_apps_pane_t1

0x3689,	// (0x00044657) grid_highlight_pane_cp10_ParamLimits

0x3689,	// (0x00044657) grid_highlight_pane_cp10

0xe536,	// (0x0004f504) list_single_hc_apps_pane_ParamLimits

0xe536,	// (0x0004f504) list_single_hc_apps_pane

0xe563,	// (0x0004f531) list_single_hc_apps_pane_g1

0xcbcc,	// (0x0004db9a) list_single_hc_apps_pane_g2

0x0001,

0xfca9,	// (0x00050c77) list_single_hc_apps_pane_g

0xcbe5,	// (0x0004dbb3) list_single_hc_apps_pane_g2_copy1

0x0bbc,	// (0x00041b8a) list_single_hc_apps_pane_t1

0x3400,	// (0x000443ce) bg_set_opt_pane_cp_ParamLimits

0x0ffb,	// (0x00041fc9) setting_slider_pane_t1_ParamLimits

0x1014,	// (0x00041fe2) setting_slider_pane_t2_ParamLimits

0x102e,	// (0x00041ffc) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00050507) setting_slider_pane_t_ParamLimits

0x1046,	// (0x00042014) slider_set_pane_ParamLimits

0x160c,	// (0x000425da) control_pane_g5_ParamLimits

0x160c,	// (0x000425da) control_pane_g5

0x6523,	// (0x000474f1) slider_set_pane_g1_ParamLimits

0x1ff3,	// (0x00042fc1) slider_set_pane_g2_ParamLimits

0x1fff,	// (0x00042fcd) slider_set_pane_g3_ParamLimits

0x2013,	// (0x00042fe1) slider_set_pane_g4_ParamLimits

0x202b,	// (0x00042ff9) slider_set_pane_g5_ParamLimits

0x1fff,	// (0x00042fcd) slider_set_pane_g6_ParamLimits

0x2041,	// (0x0004300f) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0005090d) slider_set_pane_g_ParamLimits

0x47c4,	// (0x00045792) navi_icon_text_pane_ParamLimits

0xd5f3,	// (0x0004e5c1) aid_fill_nsta_2_ParamLimits

0xd62a,	// (0x0004e5f8) aid_touch_tab_arrow_left_ParamLimits

0xd640,	// (0x0004e60e) aid_touch_tab_arrow_right_ParamLimits

0xd6db,	// (0x0004e6a9) clock_nsta_pane_ParamLimits

0x6019,	// (0x00046fe7) navi_icon_pane_g1_ParamLimits

0x6025,	// (0x00046ff3) navi_text_pane_t1_ParamLimits

0x7366,	// (0x00048334) navi_icon_text_pane_g1_ParamLimits

0x7372,	// (0x00048340) navi_icon_text_pane_t1_ParamLimits

0xe563,	// (0x0004f531) list_single_hc_apps_pane_g1_ParamLimits

0xcbcc,	// (0x0004db9a) list_single_hc_apps_pane_g2_ParamLimits

0xfca9,	// (0x00050c77) list_single_hc_apps_pane_g_ParamLimits

0xcbe5,	// (0x0004dbb3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0bbc,	// (0x00041b8a) list_single_hc_apps_pane_t1_ParamLimits

0xbdf7,	// (0x0004cdc5) popup_toolbar2_fixed_window_ParamLimits

0xbdf7,	// (0x0004cdc5) popup_toolbar2_fixed_window

0xca44,	// (0x0004da12) popup_toolbar2_float_window

0xe159,	// (0x0004f127) bg_popup_sub_pane_cp27

0x8c32,	// (0x00049c00) grid_toolbar2_float_pane

0xe159,	// (0x0004f127) bg_popup_sub_pane_cp26

0x8c32,	// (0x00049c00) grid_toolbar2_fixed_pane

0xe57c,	// (0x0004f54a) cell_toolbar2_fixed_pane_ParamLimits

0xe57c,	// (0x0004f54a) cell_toolbar2_fixed_pane

0xe596,	// (0x0004f564) cell_toolbar2_fixed_pane_g1

0x8c53,	// (0x00049c21) toolbar2_fixed_button_pane

0x5186,	// (0x00046154) toolbar2_fixed_button_pane_g1

0x518e,	// (0x0004615c) toolbar2_fixed_button_pane_g2

0x5196,	// (0x00046164) toolbar2_fixed_button_pane_g3

0x519e,	// (0x0004616c) toolbar2_fixed_button_pane_g4

0x51a6,	// (0x00046174) toolbar2_fixed_button_pane_g5

0x51ae,	// (0x0004617c) toolbar2_fixed_button_pane_g6

0x51b6,	// (0x00046184) toolbar2_fixed_button_pane_g7

0x51be,	// (0x0004618c) toolbar2_fixed_button_pane_g8

0x51c6,	// (0x00046194) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0005080f) toolbar2_fixed_button_pane_g

0x8c5b,	// (0x00049c29) cell_toolbar2_float_pane_ParamLimits

0x8c5b,	// (0x00049c29) cell_toolbar2_float_pane

0x8c6c,	// (0x00049c3a) cell_toolbar2_float_pane_g1

0x8c53,	// (0x00049c21) toolbar2_fixed_button_pane_cp

0xe0e6,	// (0x0004f0b4) fep_vkb_accented_list_pane_ParamLimits

0xe0e6,	// (0x0004f0b4) fep_vkb_accented_list_pane

0x2492,	// (0x00043460) bg_popup_fep_shadow_pane_g9

0x4938,	// (0x00045906) bg_popup_fep_shadow_pane_cp3

0x3df4,	// (0x00044dc2) list_accented_list_pane

0x8c75,	// (0x00049c43) list_single_accented_list_pane_ParamLimits

0x8c75,	// (0x00049c43) list_single_accented_list_pane

0x4938,	// (0x00045906) list_highlight_pane_cp10

0x8c86,	// (0x00049c54) list_single_accented_list_pane_t1

0xc96e,	// (0x0004d93c) popup_slider_window_ParamLimits

0xc96e,	// (0x0004d93c) popup_slider_window

0x88c0,	// (0x0004988e) aid_indentation_list_msg

0xe68d,	// (0x0004f65b) bg_popup_window_pane_cp19

0x8db2,	// (0x00049d80) popup_slider_window_g1

0x8dce,	// (0x00049d9c) popup_slider_window_g2

0x8dea,	// (0x00049db8) popup_slider_window_g3

0x0005,

0xfcae,	// (0x00050c7c) popup_slider_window_g

0x8e50,	// (0x00049e1e) popup_slider_window_t1

0x8ec4,	// (0x00049e92) small_volume_slider_vertical_pane

0x77b7,	// (0x00048785) small_volume_slider_vertical_pane_g1

0x77b7,	// (0x00048785) small_volume_slider_vertical_pane_g2

0x8ee0,	// (0x00049eae) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc0,	// (0x00050c8e) small_volume_slider_vertical_pane_g

0xbd65,	// (0x0004cd33) area_side_right_pane_ParamLimits

0xbd65,	// (0x0004cd33) area_side_right_pane

0xcc01,	// (0x0004dbcf) aid_size_side_button_ParamLimits

0xcc01,	// (0x0004dbcf) aid_size_side_button

0xcc1a,	// (0x0004dbe8) grid_sctrl_middle_pane_ParamLimits

0xcc1a,	// (0x0004dbe8) grid_sctrl_middle_pane

0x2711,	// (0x000436df) sctrl_sk_bottom_pane

0x2722,	// (0x000436f0) sctrl_sk_top_pane

0x2734,	// (0x00043702) aid_touch_sctrl_top

0x3689,	// (0x00044657) bg_sctrl_sk_pane_ParamLimits

0x3689,	// (0x00044657) bg_sctrl_sk_pane

0x2741,	// (0x0004370f) sctrl_sk_top_pane_g1

0x274e,	// (0x0004371c) sctrl_sk_top_pane_t1

0x2734,	// (0x00043702) aid_touch_sctrl_bottom

0x3689,	// (0x00044657) bg_sctrl_sk_pane_cp_ParamLimits

0x3689,	// (0x00044657) bg_sctrl_sk_pane_cp

0x2769,	// (0x00043737) sctrl_sk_bottom_pane_g1

0x274e,	// (0x0004371c) sctrl_sk_bottom_pane_t1

0xcc34,	// (0x0004dc02) cell_sctrl_middle_pane_ParamLimits

0xcc34,	// (0x0004dc02) cell_sctrl_middle_pane

0xcc45,	// (0x0004dc13) aid_touch_sctrl_middle_ParamLimits

0xcc45,	// (0x0004dc13) aid_touch_sctrl_middle

0xcc52,	// (0x0004dc20) bg_sctrl_middle_pane_ParamLimits

0xcc52,	// (0x0004dc20) bg_sctrl_middle_pane

0x8f68,	// (0x00049f36) cell_sctrl_middle_pane_g1_ParamLimits

0x8f68,	// (0x00049f36) cell_sctrl_middle_pane_g1

0xcc60,	// (0x0004dc2e) cell_sctrl_middle_pane_g2_ParamLimits

0xcc60,	// (0x0004dc2e) cell_sctrl_middle_pane_g2

0x0001,

0xfccc,	// (0x00050c9a) cell_sctrl_middle_pane_g_ParamLimits

0xfccc,	// (0x00050c9a) cell_sctrl_middle_pane_g

0x5186,	// (0x00046154) bg_sctrl_middle_pane_g1

0x518e,	// (0x0004615c) bg_sctrl_middle_pane_g2

0x5196,	// (0x00046164) bg_sctrl_middle_pane_g3

0x519e,	// (0x0004616c) bg_sctrl_middle_pane_g4

0x51a6,	// (0x00046174) bg_sctrl_middle_pane_g5

0x51ae,	// (0x0004617c) bg_sctrl_middle_pane_g6

0x51b6,	// (0x00046184) bg_sctrl_middle_pane_g7

0x51be,	// (0x0004618c) bg_sctrl_middle_pane_g8

0x0007,

0xfcd1,	// (0x00050c9f) bg_sctrl_middle_pane_g

0x51c6,	// (0x00046194) bg_sctrl_middle_pane_g8_copy1

0x5186,	// (0x00046154) bg_sctrl_sk_pane_g1

0x518e,	// (0x0004615c) bg_sctrl_sk_pane_g2

0x5196,	// (0x00046164) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0005080f) bg_sctrl_sk_pane_g

0x3bbc,	// (0x00044b8a) aid_size_touch_scroll_bar

0x519e,	// (0x0004616c) bg_sctrl_sk_pane_g4

0x51a6,	// (0x00046174) bg_sctrl_sk_pane_g5

0x51ae,	// (0x0004617c) bg_sctrl_sk_pane_g6

0x51b6,	// (0x00046184) bg_sctrl_sk_pane_g7

0x51be,	// (0x0004618c) bg_sctrl_sk_pane_g8

0x51c6,	// (0x00046194) bg_sctrl_sk_pane_g9

0x17c6,	// (0x00042794) popup_fep_china_hwr2_fs_candidate_window

0xc482,	// (0x0004d450) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc482,	// (0x0004d450) popup_fep_china_hwr2_fs_control_window

0x7a35,	// (0x00048a03) sctrl_sk_top_pane_g2

0x0001,

0xfcc7,	// (0x00050c95) sctrl_sk_top_pane_g

0xe745,	// (0x0004f713) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe745,	// (0x0004f713) aid_fep_china_hwr2_fs_cell

0xe759,	// (0x0004f727) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe759,	// (0x0004f727) bg_popup_fep_shadow_pane_cp4

0xe770,	// (0x0004f73e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe770,	// (0x0004f73e) bg_popup_fep_shadow_pane_cp5

0xe782,	// (0x0004f750) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe782,	// (0x0004f750) popup_fep_china_hwr2_fs_control_bar_grid

0xe796,	// (0x0004f764) popup_fep_china_hwr2_fs_control_funtion_grid

0x8f3c,	// (0x00049f0a) aid_fep_china_hwr2_fs_candi_cell

0xe159,	// (0x0004f127) bg_popup_fep_shadow_pane_cp6

0x8f46,	// (0x00049f14) popup_fep_china_hwr2_fs_candidate_grid

0xe79e,	// (0x0004f76c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe79e,	// (0x0004f76c) cell_fep_china_hwr2_fs_funtion_grid

0x77b7,	// (0x00048785) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8f68,	// (0x00049f36) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8f68,	// (0x00049f36) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8f76,	// (0x00049f44) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8f76,	// (0x00049f44) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce2,	// (0x00050cb0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce2,	// (0x00050cb0) cell_fep_china_hwr2_fs_funtion_grid_g

0xe7b6,	// (0x0004f784) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe7b6,	// (0x0004f784) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe7cb,	// (0x0004f799) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe7cb,	// (0x0004f799) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce7,	// (0x00050cb5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce7,	// (0x00050cb5) cell_fep_china_hwr2_fs_funtion_grid_t

0x8fbd,	// (0x00049f8b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8fc5,	// (0x00049f93) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8fcd,	// (0x00049f9b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcec,	// (0x00050cba) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8fd5,	// (0x00049fa3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8fd5,	// (0x00049fa3) cell_fep_china_hwr2_fs_candidate_grid

0x8fee,	// (0x00049fbc) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8ff6,	// (0x00049fc4) popup_fep_china_hwr2_fs_candidate_grid_g21

0x77b7,	// (0x00048785) cell_fep_china_hwr2_fs_candidate_grid_g1

0x77b7,	// (0x00048785) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0c,	// (0x00050ada) cell_fep_china_hwr2_fs_candidate_grid_g

0x8ffe,	// (0x00049fcc) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4d7c,	// (0x00045d4a) clock_nsta_pane_cp_24_ParamLimits

0x4d7c,	// (0x00045d4a) clock_nsta_pane_cp_24

0x4dfa,	// (0x00045dc8) indicator_nsta_pane_cp_24_ParamLimits

0x4dfa,	// (0x00045dc8) indicator_nsta_pane_cp_24

0x5e95,	// (0x00046e63) heading_pane_g1

0x0001,

0xf8a6,	// (0x00050874) heading_pane_g

0x68d9,	// (0x000478a7) grid_sct_catagory_button_pane

0x6909,	// (0x000478d7) scroll_pane_cp5_ParamLimits

0x73b4,	// (0x00048382) button_value_adjust_pane_cp5_ParamLimits

0x73b4,	// (0x00048382) button_value_adjust_pane_cp5

0x7493,	// (0x00048461) form2_midp_time_pane_ParamLimits

0x900c,	// (0x00049fda) cell_sct_catagory_button_pane_ParamLimits

0x900c,	// (0x00049fda) cell_sct_catagory_button_pane

0x777c,	// (0x0004874a) bg_button_pane_cp01_ParamLimits

0x777c,	// (0x0004874a) bg_button_pane_cp01

0x77b7,	// (0x00048785) cell_sct_catagory_button_pane_g1

0xc9e7,	// (0x0004d9b5) popup_tb_extension_window

0xe7e7,	// (0x0004f7b5) aid_size_cell_ext_ParamLimits

0xe7e7,	// (0x0004f7b5) aid_size_cell_ext

0x39fe,	// (0x000449cc) bg_tb_trans_pane_cp1_ParamLimits

0x39fe,	// (0x000449cc) bg_tb_trans_pane_cp1

0xe80d,	// (0x0004f7db) grid_tb_ext_pane_ParamLimits

0xe80d,	// (0x0004f7db) grid_tb_ext_pane

0xe848,	// (0x0004f816) cell_tb_ext_pane_ParamLimits

0xe848,	// (0x0004f816) cell_tb_ext_pane

0xe870,	// (0x0004f83e) cell_tb_ext_pane_g1_ParamLimits

0xe870,	// (0x0004f83e) cell_tb_ext_pane_g1

0x90a0,	// (0x0004a06e) cell_tb_ext_pane_t1

0x3689,	// (0x00044657) list_highlight_pane_cp11_ParamLimits

0x3689,	// (0x00044657) list_highlight_pane_cp11

0xbe0c,	// (0x0004cdda) popup_uni_indicator_window_ParamLimits

0xbe0c,	// (0x0004cdda) popup_uni_indicator_window

0x3c99,	// (0x00044c67) bg_popup_sub_pane_cp14

0x90bb,	// (0x0004a089) list_uniindi_pane

0x90c7,	// (0x0004a095) uniindi_top_pane

0x3689,	// (0x00044657) bg_uniindi_top_pane

0x90e6,	// (0x0004a0b4) uniindi_top_pane_g1

0x90fc,	// (0x0004a0ca) uniindi_top_pane_g2

0x0003,

0xfcf3,	// (0x00050cc1) uniindi_top_pane_g

0x9126,	// (0x0004a0f4) uniindi_top_pane_t1

0x9150,	// (0x0004a11e) list_single_uniindi_pane_ParamLimits

0x9150,	// (0x0004a11e) list_single_uniindi_pane

0x77b7,	// (0x00048785) bg_uniindi_top_pane_g1

0x9163,	// (0x0004a131) list_single_uniindi_pane_g1

0x9176,	// (0x0004a144) list_single_uniindi_pane_t1

0xe159,	// (0x0004f127) control_bg_pane

0x919b,	// (0x0004a169) bg_sctrl_sk_pane_cp1

0x91a4,	// (0x0004a172) bg_sctrl_sk_pane_cp2

0x91ad,	// (0x0004a17b) control_bg_pane_g1

0x91b6,	// (0x0004a184) control_bg_pane_g2

0x0001,

0xfcfc,	// (0x00050cca) control_bg_pane_g

0x71fe,	// (0x000481cc) cell_indicator_nsta_pane_g1_ParamLimits

0xdf4b,	// (0x0004ef19) cell_indicator_nsta_pane_g2_ParamLimits

0xfa70,	// (0x00050a3e) cell_indicator_nsta_pane_g_ParamLimits

0x0959,	// (0x00041927) form2_midp_time_pane_t1_ParamLimits

0x2268,	// (0x00043236) main_idle_act4_pane_ParamLimits

0x2268,	// (0x00043236) main_idle_act4_pane

0xc9e7,	// (0x0004d9b5) popup_tb_extension_window_ParamLimits

0xe82f,	// (0x0004f7fd) tb_ext_find_pane_ParamLimits

0xe82f,	// (0x0004f7fd) tb_ext_find_pane

0x91bf,	// (0x0004a18d) ai_gene_pane_1_cp1

0x4a7f,	// (0x00045a4d) ai_gene_pane_2_cp1

0x91c7,	// (0x0004a195) list_single_idle_plugin_calendar_pane

0x91d0,	// (0x0004a19e) list_single_idle_plugin_notification_pane

0x91d9,	// (0x0004a1a7) list_single_idle_plugin_player_pane

0xe88d,	// (0x0004f85b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe88d,	// (0x0004f85b) list_single_idle_plugin_shortcut_pane

0xe8b5,	// (0x0004f883) main_idle_act4_pane_t1

0xe8cb,	// (0x0004f899) main_idle_act4_pane_t2

0x0001,

0xfd01,	// (0x00050ccf) main_idle_act4_pane_t

0xe8e1,	// (0x0004f8af) middle_sk_idle_act4_pane_ParamLimits

0xe8e1,	// (0x0004f8af) middle_sk_idle_act4_pane

0xe8fd,	// (0x0004f8cb) popup_clock_digital_analogue_window_cp2

0xe925,	// (0x0004f8f3) shortcut_wheel_idle_act4_pane_ParamLimits

0xe925,	// (0x0004f8f3) shortcut_wheel_idle_act4_pane

0x77b7,	// (0x00048785) shortcut_wheel_idle_act4_pane_g1

0x77b7,	// (0x00048785) shortcut_wheel_idle_act4_pane_g2

0x77b7,	// (0x00048785) shortcut_wheel_idle_act4_pane_g3

0x77b7,	// (0x00048785) shortcut_wheel_idle_act4_pane_g4

0x77b7,	// (0x00048785) shortcut_wheel_idle_act4_pane_g5

0x926c,	// (0x0004a23a) shortcut_wheel_idle_act4_pane_g6

0x9274,	// (0x0004a242) shortcut_wheel_idle_act4_pane_g7

0x927c,	// (0x0004a24a) shortcut_wheel_idle_act4_pane_g8

0x9284,	// (0x0004a252) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd06,	// (0x00050cd4) shortcut_wheel_idle_act4_pane_g

0xe0be,	// (0x0004f08c) middle_sk_idle_act4_pane_g1_ParamLimits

0xe0be,	// (0x0004f08c) middle_sk_idle_act4_pane_g1

0xe9a2,	// (0x0004f970) middle_sk_idle_act4_pane_g2_ParamLimits

0xe9a2,	// (0x0004f970) middle_sk_idle_act4_pane_g2

0x0001,

0xfd29,	// (0x00050cf7) middle_sk_idle_act4_pane_g_ParamLimits

0xfd29,	// (0x00050cf7) middle_sk_idle_act4_pane_g

0xe9ba,	// (0x0004f988) middle_sk_idle_act4_pane_t1_ParamLimits

0xe9ba,	// (0x0004f988) middle_sk_idle_act4_pane_t1

0xe9e9,	// (0x0004f9b7) grid_ai_shortcut_pane_ParamLimits

0xe9e9,	// (0x0004f9b7) grid_ai_shortcut_pane

0xea06,	// (0x0004f9d4) list_highlight_pane_cp16_ParamLimits

0xea06,	// (0x0004f9d4) list_highlight_pane_cp16

0xea13,	// (0x0004f9e1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea13,	// (0x0004f9e1) list_single_idle_plugin_shortcut_pane_g1

0xea1f,	// (0x0004f9ed) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea1f,	// (0x0004f9ed) list_single_idle_plugin_shortcut_pane_g2

0xea3b,	// (0x0004fa09) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xea3b,	// (0x0004fa09) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd2e,	// (0x00050cfc) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd2e,	// (0x00050cfc) list_single_idle_plugin_shortcut_pane_g

0xea50,	// (0x0004fa1e) cell_ai_shortcut_pane_ParamLimits

0xea50,	// (0x0004fa1e) cell_ai_shortcut_pane

0xea66,	// (0x0004fa34) cell_ai_shortcut_pane_g1_ParamLimits

0xea66,	// (0x0004fa34) cell_ai_shortcut_pane_g1

0x91bf,	// (0x0004a18d) ai_gene_pane_1_cp2

0x93b4,	// (0x0004a382) ai_gene_pane_2_cp2

0x93bc,	// (0x0004a38a) list_highlight_pane_cp15

0x93c5,	// (0x0004a393) list_single_idle_plugin_calendar_pane_g1

0x93bc,	// (0x0004a38a) list_highlight_pane_cp17

0x93cd,	// (0x0004a39b) list_single_idle_plugin_calendar_pane_g1_copy1

0x93d5,	// (0x0004a3a3) list_single_idle_plugin_player_pane_g1

0x6b32,	// (0x00047b00) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd35,	// (0x00050d03) list_single_idle_plugin_player_pane_g

0x93dd,	// (0x0004a3ab) list_single_idle_plugin_player_pane_t1

0x93eb,	// (0x0004a3b9) list_single_idle_plugin_player_pane_t2

0x93f9,	// (0x0004a3c7) list_single_idle_plugin_player_pane_t3

0x9407,	// (0x0004a3d5) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd3a,	// (0x00050d08) list_single_idle_plugin_player_pane_t

0x9415,	// (0x0004a3e3) wait_bar_pane_cp15

0x941d,	// (0x0004a3eb) grid_ai_notification_pane

0x6b32,	// (0x00047b00) list_single_idle_plugin_notification_pane_g1

0xea88,	// (0x0004fa56) cell_ai_notification_pane_ParamLimits

0xea88,	// (0x0004fa56) cell_ai_notification_pane

0x9433,	// (0x0004a401) cell_ai_notification_pane_g1

0x943b,	// (0x0004a409) cell_ai_notification_pane_t1

0xea95,	// (0x0004fa63) tb_ext_find_button_pane

0xea9d,	// (0x0004fa6b) tb_ext_find_pane_g1

0xeaa5,	// (0x0004fa73) tb_ext_find_pane_t1

0x4322,	// (0x000452f0) tb_ext_find_button_pane_g1

0x9467,	// (0x0004a435) tb_ext_find_button_pane_g2

0x0001,

0xfd43,	// (0x00050d11) tb_ext_find_button_pane_g

0xe8b5,	// (0x0004f883) main_idle_act4_pane_t1_ParamLimits

0xe8cb,	// (0x0004f899) main_idle_act4_pane_t2_ParamLimits

0xfd01,	// (0x00050ccf) main_idle_act4_pane_t_ParamLimits

0xe8fd,	// (0x0004f8cb) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe915,	// (0x0004f8e3) sat_plugin_idle_act4_pane_ParamLimits

0xe915,	// (0x0004f8e3) sat_plugin_idle_act4_pane

0xeab3,	// (0x0004fa81) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeab3,	// (0x0004fa81) sat_plugin_idle_act4_pane_t1

0xeacb,	// (0x0004fa99) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeacb,	// (0x0004fa99) sat_plugin_idle_act4_pane_t2

0xeae3,	// (0x0004fab1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeae3,	// (0x0004fab1) sat_plugin_idle_act4_pane_t3

0xeafb,	// (0x0004fac9) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeafb,	// (0x0004fac9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd48,	// (0x00050d16) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd48,	// (0x00050d16) sat_plugin_idle_act4_pane_t

0x0e5f,	// (0x00041e2d) popup_battery_window_ParamLimits

0x0e5f,	// (0x00041e2d) popup_battery_window

0x3689,	// (0x00044657) bg_popup_sub_pane_cp25_ParamLimits

0x3689,	// (0x00044657) bg_popup_sub_pane_cp25

0x94bc,	// (0x0004a48a) popup_battery_window_g1_ParamLimits

0x94bc,	// (0x0004a48a) popup_battery_window_g1

0x94c8,	// (0x0004a496) popup_battery_window_t1_ParamLimits

0x94c8,	// (0x0004a496) popup_battery_window_t1

0x94da,	// (0x0004a4a8) popup_battery_window_t2_ParamLimits

0x94da,	// (0x0004a4a8) popup_battery_window_t2

0x0001,

0xfd51,	// (0x00050d1f) popup_battery_window_t_ParamLimits

0xfd51,	// (0x00050d1f) popup_battery_window_t

0xd45e,	// (0x0004e42c) midp_canvas_pane_ParamLimits

0xd4bb,	// (0x0004e489) midp_keypad_pane_ParamLimits

0xd4bb,	// (0x0004e489) midp_keypad_pane

0x4c5c,	// (0x00045c2a) main_midp_pane_ParamLimits

0x7278,	// (0x00048246) signal_pane_g2_cp_ParamLimits

0xeb13,	// (0x0004fae1) aid_size_cell_midp_keypad_ParamLimits

0xeb13,	// (0x0004fae1) aid_size_cell_midp_keypad

0xeb31,	// (0x0004faff) midp_keyp_game_grid_pane_ParamLimits

0xeb31,	// (0x0004faff) midp_keyp_game_grid_pane

0xeb58,	// (0x0004fb26) midp_keyp_rocker_pane_ParamLimits

0xeb58,	// (0x0004fb26) midp_keyp_rocker_pane

0xeba9,	// (0x0004fb77) midp_keyp_sk_left_pane_ParamLimits

0xeba9,	// (0x0004fb77) midp_keyp_sk_left_pane

0xebfd,	// (0x0004fbcb) midp_keyp_sk_right_pane_ParamLimits

0xebfd,	// (0x0004fbcb) midp_keyp_sk_right_pane

0xe159,	// (0x0004f127) bg_button_pane_cp03

0xec51,	// (0x0004fc1f) midp_keyp_sk_left_pane_g1

0xe159,	// (0x0004f127) bg_button_pane_cp04

0xec51,	// (0x0004fc1f) midp_keyp_sk_right_pane_g1

0x77b7,	// (0x00048785) midp_keyp_rocker_pane_g1

0xec5a,	// (0x0004fc28) keyp_game_cell_pane_ParamLimits

0xec5a,	// (0x0004fc28) keyp_game_cell_pane

0xe159,	// (0x0004f127) bg_button_pane_cp02

0xec7e,	// (0x0004fc4c) keyp_game_cell_pane_g1

0xbda7,	// (0x0004cd75) popup_fep_vkb2_window_ParamLimits

0xbda7,	// (0x0004cd75) popup_fep_vkb2_window

0xcc6c,	// (0x0004dc3a) aid_size_cell_vkb2_ParamLimits

0xcc6c,	// (0x0004dc3a) aid_size_cell_vkb2

0xcca2,	// (0x0004dc70) popup_fep_vkb2_window_g1_ParamLimits

0xcca2,	// (0x0004dc70) popup_fep_vkb2_window_g1

0xccf2,	// (0x0004dcc0) vkb2_area_bottom_pane_ParamLimits

0xccf2,	// (0x0004dcc0) vkb2_area_bottom_pane

0xcd46,	// (0x0004dd14) vkb2_area_keypad_pane_ParamLimits

0xcd46,	// (0x0004dd14) vkb2_area_keypad_pane

0xcd8e,	// (0x0004dd5c) vkb2_area_top_pane_ParamLimits

0xcd8e,	// (0x0004dd5c) vkb2_area_top_pane

0xce14,	// (0x0004dde2) vkb2_top_entry_pane_ParamLimits

0xce14,	// (0x0004dde2) vkb2_top_entry_pane

0xce41,	// (0x0004de0f) vkb2_top_grid_left_pane_ParamLimits

0xce41,	// (0x0004de0f) vkb2_top_grid_left_pane

0xce61,	// (0x0004de2f) vkb2_top_grid_right_pane_ParamLimits

0xce61,	// (0x0004de2f) vkb2_top_grid_right_pane

0x29c7,	// (0x00043995) vkb2_cell_keypad_pane_ParamLimits

0x29c7,	// (0x00043995) vkb2_cell_keypad_pane

0xcea7,	// (0x0004de75) vkb2_area_bottom_grid_pane_ParamLimits

0xcea7,	// (0x0004de75) vkb2_area_bottom_grid_pane

0xced1,	// (0x0004de9f) vkb2_area_bottom_pane_g1_ParamLimits

0xced1,	// (0x0004de9f) vkb2_area_bottom_pane_g1

0xcef7,	// (0x0004dec5) vkb2_area_bottom_pane_g2_ParamLimits

0xcef7,	// (0x0004dec5) vkb2_area_bottom_pane_g2

0xcf28,	// (0x0004def6) vkb2_area_bottom_pane_g3_ParamLimits

0xcf28,	// (0x0004def6) vkb2_area_bottom_pane_g3

0x0002,

0xfd56,	// (0x00050d24) vkb2_area_bottom_pane_g_ParamLimits

0xfd56,	// (0x00050d24) vkb2_area_bottom_pane_g

0x2b71,	// (0x00043b3f) vkb2_top_cell_left_pane_ParamLimits

0x2b71,	// (0x00043b3f) vkb2_top_cell_left_pane

0xec87,	// (0x0004fc55) vkb2_top_entry_pane_g1_ParamLimits

0xec87,	// (0x0004fc55) vkb2_top_entry_pane_g1

0xec95,	// (0x0004fc63) vkb2_top_entry_pane_t1_ParamLimits

0xec95,	// (0x0004fc63) vkb2_top_entry_pane_t1

0x968b,	// (0x0004a659) vkb2_top_entry_pane_t2_ParamLimits

0x968b,	// (0x0004a659) vkb2_top_entry_pane_t2

0x96bd,	// (0x0004a68b) vkb2_top_entry_pane_t3_ParamLimits

0x96bd,	// (0x0004a68b) vkb2_top_entry_pane_t3

0x0002,

0xfd5d,	// (0x00050d2b) vkb2_top_entry_pane_t_ParamLimits

0xfd5d,	// (0x00050d2b) vkb2_top_entry_pane_t

0xcf92,	// (0x0004df60) vkb2_top_grid_right_pane_g1_ParamLimits

0xcf92,	// (0x0004df60) vkb2_top_grid_right_pane_g1

0x2bd4,	// (0x00043ba2) vkb2_top_grid_right_pane_g2_ParamLimits

0x2bd4,	// (0x00043ba2) vkb2_top_grid_right_pane_g2

0x2bec,	// (0x00043bba) vkb2_top_grid_right_pane_g3_ParamLimits

0x2bec,	// (0x00043bba) vkb2_top_grid_right_pane_g3

0xcfa8,	// (0x0004df76) vkb2_top_grid_right_pane_g4_ParamLimits

0xcfa8,	// (0x0004df76) vkb2_top_grid_right_pane_g4

0x0003,

0xfd64,	// (0x00050d32) vkb2_top_grid_right_pane_g_ParamLimits

0xfd64,	// (0x00050d32) vkb2_top_grid_right_pane_g

0x2c1a,	// (0x00043be8) vkb2_top_cell_left_pane_g1

0x2c31,	// (0x00043bff) vkb2_cell_keypad_pane_g1_ParamLimits

0x2c31,	// (0x00043bff) vkb2_cell_keypad_pane_g1

0x96e1,	// (0x0004a6af) vkb2_cell_keypad_pane_t1_ParamLimits

0x96e1,	// (0x0004a6af) vkb2_cell_keypad_pane_t1

0x2c3f,	// (0x00043c0d) vkb2_cell_bottom_grid_pane_ParamLimits

0x2c3f,	// (0x00043c0d) vkb2_cell_bottom_grid_pane

0x2c78,	// (0x00043c46) vkb2_cell_bottom_grid_pane_g1

0xe946,	// (0x0004f914) aid_call2_pane_cp02

0xe94e,	// (0x0004f91c) aid_call_pane_cp02

0xe956,	// (0x0004f924) clock_digital_number_pane_cp10

0xe95e,	// (0x0004f92c) clock_digital_number_pane_cp11

0xe966,	// (0x0004f934) clock_digital_number_pane_cp12

0xe96e,	// (0x0004f93c) clock_digital_number_pane_cp13

0xe976,	// (0x0004f944) clock_digital_separator_pane_cp10

0x4322,	// (0x000452f0) popup_clock_digital_analogue_window_cp2_g1

0x4322,	// (0x000452f0) popup_clock_digital_analogue_window_cp2_g2

0xe97e,	// (0x0004f94c) popup_clock_digital_analogue_window_cp2_g3

0x4322,	// (0x000452f0) popup_clock_digital_analogue_window_cp2_g4

0xe97e,	// (0x0004f94c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd19,	// (0x00050ce7) popup_clock_digital_analogue_window_cp2_g

0xe986,	// (0x0004f954) popup_clock_digital_analogue_window_cp2_t1

0xe994,	// (0x0004f962) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd24,	// (0x00050cf2) popup_clock_digital_analogue_window_cp2_t

0x77b7,	// (0x00048785) clock_digital_number_pane_cp10_g1

0x77b7,	// (0x00048785) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0c,	// (0x00050ada) clock_digital_number_pane_cp10_g

0x77b7,	// (0x00048785) clock_digital_separator_pane_cp10_g1

0x77b7,	// (0x00048785) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0c,	// (0x00050ada) clock_digital_separator_pane_cp10_g

0x9108,	// (0x0004a0d6) uniindi_top_pane_g3

0x9119,	// (0x0004a0e7) uniindi_top_pane_g4

0x2a52,	// (0x00043a20) vkb2_row_keypad_pane_ParamLimits

0x2a52,	// (0x00043a20) vkb2_row_keypad_pane

0x2c94,	// (0x00043c62) vkb2_cell_t_keypad_pane_ParamLimits

0x2c94,	// (0x00043c62) vkb2_cell_t_keypad_pane

0x2ca4,	// (0x00043c72) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2ca4,	// (0x00043c72) vkb2_cell_t_keypad_pane_cp08

0x2cb7,	// (0x00043c85) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2cb7,	// (0x00043c85) vkb2_cell_t_keypad_pane_cp09

0x2ccb,	// (0x00043c99) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2ccb,	// (0x00043c99) vkb2_cell_t_keypad_pane_cp01

0x2cdc,	// (0x00043caa) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2cdc,	// (0x00043caa) vkb2_cell_t_keypad_pane_cp02

0x2ced,	// (0x00043cbb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2ced,	// (0x00043cbb) vkb2_cell_t_keypad_pane_cp03

0x2cfe,	// (0x00043ccc) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2cfe,	// (0x00043ccc) vkb2_cell_t_keypad_pane_cp04

0x2d0f,	// (0x00043cdd) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2d0f,	// (0x00043cdd) vkb2_cell_t_keypad_pane_cp05

0x2d20,	// (0x00043cee) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2d20,	// (0x00043cee) vkb2_cell_t_keypad_pane_cp06

0x2d31,	// (0x00043cff) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2d31,	// (0x00043cff) vkb2_cell_t_keypad_pane_cp07

0x2d42,	// (0x00043d10) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2d42,	// (0x00043d10) vkb2_cell_t_keypad_pane_cp10

0x7a35,	// (0x00048a03) vkb2_cell_t_keypad_pane_g1

0x96f8,	// (0x0004a6c6) vkb2_cell_t_keypad_pane_t1

0xe159,	// (0x0004f127) popup_grid_graphic2_window

0xecce,	// (0x0004fc9c) aid_size_cell_graphic2_ParamLimits

0xecce,	// (0x0004fc9c) aid_size_cell_graphic2

0xed0c,	// (0x0004fcda) bg_popup_window_pane_cp21_ParamLimits

0xed0c,	// (0x0004fcda) bg_popup_window_pane_cp21

0xed1a,	// (0x0004fce8) graphic2_pages_pane_ParamLimits

0xed1a,	// (0x0004fce8) graphic2_pages_pane

0xed70,	// (0x0004fd3e) grid_graphic2_control_pane_ParamLimits

0xed70,	// (0x0004fd3e) grid_graphic2_control_pane

0xedb8,	// (0x0004fd86) grid_graphic2_pane_ParamLimits

0xedb8,	// (0x0004fd86) grid_graphic2_pane

0xee3f,	// (0x0004fe0d) cell_graphic2_pane

0xe159,	// (0x0004f127) main_comp_mode_pane

0x8974,	// (0x00049942) list_ai3_gene_pane_ParamLimits

0xe68d,	// (0x0004f65b) bg_popup_window_pane_cp19_ParamLimits

0x8d56,	// (0x00049d24) bg_touch_area_indi_pane_ParamLimits

0x8d56,	// (0x00049d24) bg_touch_area_indi_pane

0x8d6c,	// (0x00049d3a) bg_touch_area_indi_pane_cp01_ParamLimits

0x8d6c,	// (0x00049d3a) bg_touch_area_indi_pane_cp01

0x8d82,	// (0x00049d50) bg_touch_area_indi_pane_cp02_ParamLimits

0x8d82,	// (0x00049d50) bg_touch_area_indi_pane_cp02

0x8d98,	// (0x00049d66) bg_touch_area_indi_pane_cp03_ParamLimits

0x8d98,	// (0x00049d66) bg_touch_area_indi_pane_cp03

0x8db2,	// (0x00049d80) popup_slider_window_g1_ParamLimits

0x8dce,	// (0x00049d9c) popup_slider_window_g2_ParamLimits

0x8dea,	// (0x00049db8) popup_slider_window_g3_ParamLimits

0xfcae,	// (0x00050c7c) popup_slider_window_g_ParamLimits

0x8e50,	// (0x00049e1e) popup_slider_window_t1_ParamLimits

0x8ec4,	// (0x00049e92) small_volume_slider_vertical_pane_ParamLimits

0xee3f,	// (0x0004fe0d) cell_graphic2_pane_ParamLimits

0xee9a,	// (0x0004fe68) bg_button_pane_cp10_ParamLimits

0xee9a,	// (0x0004fe68) bg_button_pane_cp10

0xeead,	// (0x0004fe7b) bg_button_pane_cp11_ParamLimits

0xeead,	// (0x0004fe7b) bg_button_pane_cp11

0xeec0,	// (0x0004fe8e) graphic2_pages_pane_g1_ParamLimits

0xeec0,	// (0x0004fe8e) graphic2_pages_pane_g1

0xeedb,	// (0x0004fea9) graphic2_pages_pane_g2_ParamLimits

0xeedb,	// (0x0004fea9) graphic2_pages_pane_g2

0x0001,

0xfd72,	// (0x00050d40) graphic2_pages_pane_g_ParamLimits

0xfd72,	// (0x00050d40) graphic2_pages_pane_g

0xeef3,	// (0x0004fec1) graphic2_pages_pane_t1_ParamLimits

0xeef3,	// (0x0004fec1) graphic2_pages_pane_t1

0xef0b,	// (0x0004fed9) cell_graphic2_control_pane_ParamLimits

0xef0b,	// (0x0004fed9) cell_graphic2_control_pane

0xef3d,	// (0x0004ff0b) cell_graphic2_pane_g1_ParamLimits

0xef3d,	// (0x0004ff0b) cell_graphic2_pane_g1

0xe0cc,	// (0x0004f09a) cell_graphic2_pane_g2_ParamLimits

0xe0cc,	// (0x0004f09a) cell_graphic2_pane_g2

0xef4a,	// (0x0004ff18) cell_graphic2_pane_g3_ParamLimits

0xef4a,	// (0x0004ff18) cell_graphic2_pane_g3

0xe0d9,	// (0x0004f0a7) cell_graphic2_pane_g4_ParamLimits

0xe0d9,	// (0x0004f0a7) cell_graphic2_pane_g4

0xef57,	// (0x0004ff25) cell_graphic2_pane_g5_ParamLimits

0xef57,	// (0x0004ff25) cell_graphic2_pane_g5

0x0004,

0xfd77,	// (0x00050d45) cell_graphic2_pane_g_ParamLimits

0xfd77,	// (0x00050d45) cell_graphic2_pane_g

0xef74,	// (0x0004ff42) cell_graphic2_pane_t1_ParamLimits

0xef74,	// (0x0004ff42) cell_graphic2_pane_t1

0x5e89,	// (0x00046e57) grid_highlight_pane_cp11_ParamLimits

0x5e89,	// (0x00046e57) grid_highlight_pane_cp11

0x3689,	// (0x00044657) bg_button_pane_cp05

0xefbe,	// (0x0004ff8c) cell_graphic2_control_pane_g1

0x77b7,	// (0x00048785) bg_touch_area_indi_pane_g1

0x99f2,	// (0x0004a9c0) aid_cmod_rocker_key_size

0x99fc,	// (0x0004a9ca) aid_cmode_itu_key_size

0x9a06,	// (0x0004a9d4) main_cmode_video_pane

0x9a10,	// (0x0004a9de) main_comp_mode_itu_pane

0x9a1c,	// (0x0004a9ea) main_comp_mode_rocker_pane

0x9a28,	// (0x0004a9f6) cell_cmode_rocker_pane_ParamLimits

0x9a28,	// (0x0004a9f6) cell_cmode_rocker_pane

0x9a3a,	// (0x0004aa08) cell_cmode_itu_pane_ParamLimits

0x9a3a,	// (0x0004aa08) cell_cmode_itu_pane

0x3c99,	// (0x00044c67) bg_button_pane_cp06_ParamLimits

0x3c99,	// (0x00044c67) bg_button_pane_cp06

0x7a35,	// (0x00048a03) cell_cmode_rocker_pane_g1_ParamLimits

0x7a35,	// (0x00048a03) cell_cmode_rocker_pane_g1

0x8f68,	// (0x00049f36) cell_cmode_rocker_pane_g2_ParamLimits

0x8f68,	// (0x00049f36) cell_cmode_rocker_pane_g2

0x0001,

0xfd87,	// (0x00050d55) cell_cmode_rocker_pane_g_ParamLimits

0xfd87,	// (0x00050d55) cell_cmode_rocker_pane_g

0xe159,	// (0x0004f127) bg_button_pane_cp07

0x9a4f,	// (0x0004aa1d) cell_cmode_itu_pane_g1

0x9a58,	// (0x0004aa26) cell_cmode_itu_pane_t1

0x9a66,	// (0x0004aa34) cell_cmode_itu_pane_t2

0x0001,

0xfd8c,	// (0x00050d5a) cell_cmode_itu_pane_t

0x918b,	// (0x0004a159) aid_touch_ctrl_left

0x9193,	// (0x0004a161) aid_touch_ctrl_right

0xe159,	// (0x0004f127) compa_mode_pane

0xefe2,	// (0x0004ffb0) aid_cmod_rocker_key_size_cp

0xefec,	// (0x0004ffba) aid_cmode_itu_key_size_cp

0x9a88,	// (0x0004aa56) compa_mode_pane_g1

0x9a90,	// (0x0004aa5e) compa_mode_pane_g2

0x9a98,	// (0x0004aa66) compa_mode_pane_g3

0x0002,

0xfd91,	// (0x00050d5f) compa_mode_pane_g

0xeff6,	// (0x0004ffc4) main_comp_mode_itu_pane_cp

0xeffe,	// (0x0004ffcc) main_comp_mode_rocker_pane_cp

0xf006,	// (0x0004ffd4) cell_cmode_itu_pane_cp_ParamLimits

0xf006,	// (0x0004ffd4) cell_cmode_itu_pane_cp

0xf01b,	// (0x0004ffe9) cell_cmode_rocker_pane_cp_ParamLimits

0xf01b,	// (0x0004ffe9) cell_cmode_rocker_pane_cp

0x3c99,	// (0x00044c67) bg_button_pane_cp06_cp_ParamLimits

0x3c99,	// (0x00044c67) bg_button_pane_cp06_cp

0x7a35,	// (0x00048a03) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7a35,	// (0x00048a03) cell_cmode_rocker_pane_g1_cp

0x77b7,	// (0x00048785) cell_cmode_rocker_pane_g2_cp

0xe159,	// (0x0004f127) bg_button_pane_cp07_cp

0xf02d,	// (0x0004fffb) cell_cmode_itu_pane_g1_cp

0xf036,	// (0x00050004) cell_cmode_itu_pane_t1_cp

0xf036,	// (0x00050004) cell_cmode_itu_pane_t2_cp

0xdd42,	// (0x0004ed10) settings_code_pane_cp2

0x3400,	// (0x000443ce) bg_popup_window_pane_cp3_ParamLimits

0x3889,	// (0x00044857) heading_pane_cp3_ParamLimits

0x3898,	// (0x00044866) listscroll_popup_graphic_pane_ParamLimits

0x2276,	// (0x00043244) fep_hwr_aid_pane_ParamLimits

0x2734,	// (0x00043702) aid_touch_sctrl_top_ParamLimits

0x2741,	// (0x0004370f) sctrl_sk_top_pane_g1_ParamLimits

0x7a35,	// (0x00048a03) sctrl_sk_top_pane_g2_ParamLimits

0xfcc7,	// (0x00050c95) sctrl_sk_top_pane_g_ParamLimits

0x274e,	// (0x0004371c) sctrl_sk_top_pane_t1_ParamLimits

0x2734,	// (0x00043702) aid_touch_sctrl_bottom_ParamLimits

0x274e,	// (0x0004371c) sctrl_sk_bottom_pane_t1_ParamLimits

0x90d4,	// (0x0004a0a2) aid_area_touch_clock

0xcdd6,	// (0x0004dda4) aid_vkb2_area_top_pane_cell_ParamLimits

0xcdd6,	// (0x0004dda4) aid_vkb2_area_top_pane_cell

0xce81,	// (0x0004de4f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xce81,	// (0x0004de4f) aid_vkb2_area_bottom_pane_cell

0x9643,	// (0x0004a611) popup_char_count_window

0x9ae5,	// (0x0004aab3) popup_char_count_window_g1

0x9aee,	// (0x0004aabc) popup_char_count_window_g2

0x9af7,	// (0x0004aac5) popup_char_count_window_g3

0x0002,

0xfd98,	// (0x00050d66) popup_char_count_window_g

0x9b00,	// (0x0004aace) popup_char_count_window_t1

0x27ef,	// (0x000437bd) popup_fep_char_preview_window_ParamLimits

0x27ef,	// (0x000437bd) popup_fep_char_preview_window

0xcdf6,	// (0x0004ddc4) vkb2_top_candi_pane_ParamLimits

0xcdf6,	// (0x0004ddc4) vkb2_top_candi_pane

0xf044,	// (0x00050012) cell_vkb2_top_candi_pane_ParamLimits

0xf044,	// (0x00050012) cell_vkb2_top_candi_pane

0x5815,	// (0x000467e3) bg_popup_fep_char_preview_window_ParamLimits

0x5815,	// (0x000467e3) bg_popup_fep_char_preview_window

0x2d57,	// (0x00043d25) popup_fep_char_preview_window_t1_ParamLimits

0x2d57,	// (0x00043d25) popup_fep_char_preview_window_t1

0x9b5b,	// (0x0004ab29) bg_popup_fep_char_preview_window_g1

0x9b63,	// (0x0004ab31) bg_popup_fep_char_preview_window_g2

0x9b6b,	// (0x0004ab39) bg_popup_fep_char_preview_window_g3

0x9b73,	// (0x0004ab41) bg_popup_fep_char_preview_window_g4

0x9b7b,	// (0x0004ab49) bg_popup_fep_char_preview_window_g5

0x9b83,	// (0x0004ab51) bg_popup_fep_char_preview_window_g6

0x9b8b,	// (0x0004ab59) bg_popup_fep_char_preview_window_g7

0x9b93,	// (0x0004ab61) bg_popup_fep_char_preview_window_g8

0x9b9b,	// (0x0004ab69) bg_popup_fep_char_preview_window_g9

0x0009,

0xfd9f,	// (0x00050d6d) bg_popup_fep_char_preview_window_g

0x7a35,	// (0x00048a03) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7a35,	// (0x00048a03) cell_vkb2_top_candi_pane_g1

0x7d4c,	// (0x00048d1a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7d4c,	// (0x00048d1a) cell_vkb2_top_candi_pane_g2

0x7d6d,	// (0x00048d3b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7d6d,	// (0x00048d3b) cell_vkb2_top_candi_pane_g3

0x2d99,	// (0x00043d67) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2d99,	// (0x00043d67) cell_vkb2_top_candi_pane_g4

0x9997,	// (0x0004a965) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9997,	// (0x0004a965) cell_vkb2_top_candi_pane_g5

0x8f68,	// (0x00049f36) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8f68,	// (0x00049f36) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb4,	// (0x00050d82) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb4,	// (0x00050d82) cell_vkb2_top_candi_pane_g

0x2dba,	// (0x00043d88) cell_vkb2_top_candi_pane_t1

0x1fdf,	// (0x00042fad) aid_size_touch_slider_mark_ParamLimits

0x1fdf,	// (0x00042fad) aid_size_touch_slider_mark

0xed56,	// (0x0004fd24) grid_graphic2_catg_pane_ParamLimits

0xed56,	// (0x0004fd24) grid_graphic2_catg_pane

0xee12,	// (0x0004fde0) popup_grid_graphic2_window_t1_ParamLimits

0xee12,	// (0x0004fde0) popup_grid_graphic2_window_t1

0xee28,	// (0x0004fdf6) popup_grid_graphic2_window_t2_ParamLimits

0xee28,	// (0x0004fdf6) popup_grid_graphic2_window_t2

0x0001,

0xfd6d,	// (0x00050d3b) popup_grid_graphic2_window_t_ParamLimits

0xfd6d,	// (0x00050d3b) popup_grid_graphic2_window_t

0x3689,	// (0x00044657) bg_button_pane_cp05_ParamLimits

0xefbe,	// (0x0004ff8c) cell_graphic2_control_pane_g1_ParamLimits

0xf0aa,	// (0x00050078) cell_graphic2_catg_pane_ParamLimits

0xf0aa,	// (0x00050078) cell_graphic2_catg_pane

0xe159,	// (0x0004f127) bg_button_pane_cp12

0xf0bc,	// (0x0005008a) cell_graphic2_catg_pane_g1

0x90a0,	// (0x0004a06e) cell_tb_ext_pane_t1_ParamLimits

0x2b91,	// (0x00043b5f) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2b91,	// (0x00043b5f) vkb2_top_cell_right_narrow_pane

0x2ba9,	// (0x00043b77) vkb2_top_cell_right_wide_pane_ParamLimits

0x2ba9,	// (0x00043b77) vkb2_top_cell_right_wide_pane

0x2268,	// (0x00043236) bg_vkb2_func_pane_ParamLimits

0x2268,	// (0x00043236) bg_vkb2_func_pane

0x2c1a,	// (0x00043be8) vkb2_top_cell_left_pane_g1_ParamLimits

0x2268,	// (0x00043236) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2268,	// (0x00043236) bg_vkb2_fuc_pane_cp03

0x2c78,	// (0x00043c46) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x518e,	// (0x0004615c) bg_vkb2_func_pane_g1

0x5196,	// (0x00046164) bg_vkb2_func_pane_g2

0x51a6,	// (0x00046174) bg_vkb2_func_pane_g3

0x519e,	// (0x0004616c) bg_vkb2_func_pane_g4

0x51ae,	// (0x0004617c) bg_vkb2_func_pane_g5

0x51b6,	// (0x00046184) bg_vkb2_func_pane_g6

0x51be,	// (0x0004618c) bg_vkb2_func_pane_g7

0x51c6,	// (0x00046194) bg_vkb2_func_pane_g8

0x5186,	// (0x00046154) bg_vkb2_func_pane_g9

0x0008,

0xfdc1,	// (0x00050d8f) bg_vkb2_func_pane_g

0x2268,	// (0x00043236) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2268,	// (0x00043236) bg_vkb2_fuc_pane_cp01

0x2c1a,	// (0x00043be8) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2c1a,	// (0x00043be8) vkb2_top_cell_right_wide_pane_g1

0x2268,	// (0x00043236) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2268,	// (0x00043236) bg_vkb2_fuc_pane_cp02

0x2c78,	// (0x00043c46) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2c78,	// (0x00043c46) vkb2_top_cell_right_narrow_pane_g1

0xe5cf,	// (0x0004f59d) aid_touch_area_decrease_ParamLimits

0xe5cf,	// (0x0004f59d) aid_touch_area_decrease

0xe609,	// (0x0004f5d7) aid_touch_area_increase_ParamLimits

0xe609,	// (0x0004f5d7) aid_touch_area_increase

0xe631,	// (0x0004f5ff) aid_touch_area_mute_ParamLimits

0xe631,	// (0x0004f5ff) aid_touch_area_mute

0xe659,	// (0x0004f627) aid_touch_area_slider_ParamLimits

0xe659,	// (0x0004f627) aid_touch_area_slider

0xe699,	// (0x0004f667) popup_slider_window_g4_ParamLimits

0xe699,	// (0x0004f667) popup_slider_window_g4

0xe6c1,	// (0x0004f68f) popup_slider_window_g5_ParamLimits

0xe6c1,	// (0x0004f68f) popup_slider_window_g5

0xe6f5,	// (0x0004f6c3) popup_slider_window_g6_ParamLimits

0xe6f5,	// (0x0004f6c3) popup_slider_window_g6

0x8e7e,	// (0x00049e4c) popup_slider_window_t2_ParamLimits

0x8e7e,	// (0x00049e4c) popup_slider_window_t2

0x0001,

0xfcbb,	// (0x00050c89) popup_slider_window_t_ParamLimits

0xfcbb,	// (0x00050c89) popup_slider_window_t

0xe711,	// (0x0004f6df) slider_pane_ParamLimits

0xe711,	// (0x0004f6df) slider_pane

0x9bbe,	// (0x0004ab8c) slider_pane_g1_ParamLimits

0x9bbe,	// (0x0004ab8c) slider_pane_g1

0x9bd2,	// (0x0004aba0) slider_pane_g2_ParamLimits

0x9bd2,	// (0x0004aba0) slider_pane_g2

0x9be8,	// (0x0004abb6) slider_pane_g3_ParamLimits

0x9be8,	// (0x0004abb6) slider_pane_g3

0x0003,

0xfdd4,	// (0x00050da2) slider_pane_g_ParamLimits

0xfdd4,	// (0x00050da2) slider_pane_g

0xca2f,	// (0x0004d9fd) popup_tb_float_extension_window_ParamLimits

0xca2f,	// (0x0004d9fd) popup_tb_float_extension_window

0x9c14,	// (0x0004abe2) aid_size_cell_tb_float_ext

0xe159,	// (0x0004f127) bg_popup_sub_window_cp28

0x9c20,	// (0x0004abee) grid_tb_float_ext_pane

0x9c2a,	// (0x0004abf8) cell_tb_float_ext_pane_ParamLimits

0x9c2a,	// (0x0004abf8) cell_tb_float_ext_pane

0x9c44,	// (0x0004ac12) cell_tb_float_ext_pane_g1

0x9c4d,	// (0x0004ac1b) grid_highlight_pane_cp12

0xcb6b,	// (0x0004db39) cell_last_hwr_side_pane_ParamLimits

0xcb6b,	// (0x0004db39) cell_last_hwr_side_pane

0x77b7,	// (0x00048785) cell_last_hwr_side_pane_g1

0x9c56,	// (0x0004ac24) cell_last_hwr_side_pane_g2

0x0001,

0xfddd,	// (0x00050dab) cell_last_hwr_side_pane_g

0xcf5d,	// (0x0004df2b) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcf5d,	// (0x0004df2b) vkb2_area_bottom_space_btn_pane

0x7a35,	// (0x00048a03) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x96f8,	// (0x0004a6c6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2dba,	// (0x00043d88) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2dd9,	// (0x00043da7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2dd9,	// (0x00043da7) vkb2_area_bottom_space_btn_pane_g1

0x2e13,	// (0x00043de1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2e13,	// (0x00043de1) vkb2_area_bottom_space_btn_pane_g2

0x2e49,	// (0x00043e17) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2e49,	// (0x00043e17) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde2,	// (0x00050db0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde2,	// (0x00050db0) vkb2_area_bottom_space_btn_pane_g

0x231d,	// (0x000432eb) cel_fep_hwr_func_pane_ParamLimits

0x231d,	// (0x000432eb) cel_fep_hwr_func_pane

0xcb40,	// (0x0004db0e) cell_hwr_side_button_pane_ParamLimits

0xcb40,	// (0x0004db0e) cell_hwr_side_button_pane

0x90d4,	// (0x0004a0a2) aid_area_touch_clock_ParamLimits

0x3689,	// (0x00044657) bg_uniindi_top_pane_ParamLimits

0x90e6,	// (0x0004a0b4) uniindi_top_pane_g1_ParamLimits

0x90fc,	// (0x0004a0ca) uniindi_top_pane_g2_ParamLimits

0x9108,	// (0x0004a0d6) uniindi_top_pane_g3_ParamLimits

0x9119,	// (0x0004a0e7) uniindi_top_pane_g4_ParamLimits

0xfcf3,	// (0x00050cc1) uniindi_top_pane_g_ParamLimits

0x9126,	// (0x0004a0f4) uniindi_top_pane_t1_ParamLimits

0x3689,	// (0x00044657) bg_vkb2_func_pane_cp01_ParamLimits

0x3689,	// (0x00044657) bg_vkb2_func_pane_cp01

0x9c5f,	// (0x0004ac2d) cel_fep_hwr_func_pane_g1_ParamLimits

0x9c5f,	// (0x0004ac2d) cel_fep_hwr_func_pane_g1

0x3689,	// (0x00044657) bg_vkb2_func_pane_cp02_ParamLimits

0x3689,	// (0x00044657) bg_vkb2_func_pane_cp02

0x9c5f,	// (0x0004ac2d) cell_hwr_side_button_pane_g1_ParamLimits

0x9c5f,	// (0x0004ac2d) cell_hwr_side_button_pane_g1

0x5007,	// (0x00045fd5) status_pane_g4_ParamLimits

0x5007,	// (0x00045fd5) status_pane_g4

0x5021,	// (0x00045fef) status_pane_t1

0x74fc,	// (0x000484ca) form2_midp_gauge_slider_cont_pane

0x7504,	// (0x000484d2) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe016,	// (0x0004efe4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe028,	// (0x0004eff6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfabf,	// (0x00050a8d) form2_midp_gauge_slider_pane_t_ParamLimits

0x753a,	// (0x00048508) form2_midp_slider_pane_ParamLimits

0x27af,	// (0x0004377d) aid_size_cell_func_vkb2_ParamLimits

0x27af,	// (0x0004377d) aid_size_cell_func_vkb2

0x9c00,	// (0x0004abce) slider_pane_g4_ParamLimits

0x9c00,	// (0x0004abce) slider_pane_g4

0xcfc6,	// (0x0004df94) form2_midp_gauge_slider_pane_t2_cp01

0xcfd4,	// (0x0004dfa2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcfd4,	// (0x0004dfa2) form2_midp_gauge_slider_pane_t3_cp01

0x2ebe,	// (0x00043e8c) form2_midp_slider_pane_cp01

0xe159,	// (0x0004f127) navi_smil_pane

0x9c98,	// (0x0004ac66) navi_smil_pane_g1

0x9ca0,	// (0x0004ac6e) navi_smil_pane_t1

0x9c6d,	// (0x0004ac3b) form2_midp_slider_pane_g1

0x9c76,	// (0x0004ac44) form2_midp_slider_pane_g2

0x9c7e,	// (0x0004ac4c) form2_midp_slider_pane_g3

0x9c6d,	// (0x0004ac3b) form2_midp_slider_pane_g4

0xf0c5,	// (0x00050093) form2_midp_slider_pane_g5

0x0004,

0xfdeb,	// (0x00050db9) form2_midp_slider_pane_g

0x2e83,	// (0x00043e51) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2e83,	// (0x00043e51) vkb2_area_bottom_space_btn_pane_g4

0xd726,	// (0x0004e6f4) lc0_navi_pane_ParamLimits

0xd726,	// (0x0004e6f4) lc0_navi_pane

0xd790,	// (0x0004e75e) lc0_stat_indi_pane_ParamLimits

0xd790,	// (0x0004e75e) lc0_stat_indi_pane

0xd7a5,	// (0x0004e773) ls0_title_pane_ParamLimits

0xd7a5,	// (0x0004e773) ls0_title_pane

0x3c99,	// (0x00044c67) bg_popup_sub_pane_cp14_ParamLimits

0x90bb,	// (0x0004a089) list_uniindi_pane_ParamLimits

0x90c7,	// (0x0004a095) uniindi_top_pane_ParamLimits

0x9163,	// (0x0004a131) list_single_uniindi_pane_g1_ParamLimits

0x9176,	// (0x0004a144) list_single_uniindi_pane_t1_ParamLimits

0xcff1,	// (0x0004dfbf) lc0_stat_clock_pane_ParamLimits

0xcff1,	// (0x0004dfbf) lc0_stat_clock_pane

0xf0d0,	// (0x0005009e) lc0_stat_indi_pane_g1_ParamLimits

0xf0d0,	// (0x0005009e) lc0_stat_indi_pane_g1

0xf0dd,	// (0x000500ab) lc0_stat_indi_pane_g2_ParamLimits

0xf0dd,	// (0x000500ab) lc0_stat_indi_pane_g2

0x0001,

0xfdf6,	// (0x00050dc4) lc0_stat_indi_pane_g_ParamLimits

0xfdf6,	// (0x00050dc4) lc0_stat_indi_pane_g

0xcffe,	// (0x0004dfcc) lc0_uni_indicator_pane_ParamLimits

0xcffe,	// (0x0004dfcc) lc0_uni_indicator_pane

0xf0ea,	// (0x000500b8) ls0_title_pane_g1_ParamLimits

0xf0ea,	// (0x000500b8) ls0_title_pane_g1

0xf0fe,	// (0x000500cc) ls0_title_pane_t1_ParamLimits

0xf0fe,	// (0x000500cc) ls0_title_pane_t1

0xd00b,	// (0x0004dfd9) lc0_uni_indicator_pane_g1_ParamLimits

0xd00b,	// (0x0004dfd9) lc0_uni_indicator_pane_g1

0x9d12,	// (0x0004ace0) lc0_stat_clock_pane_t1

0xe159,	// (0x0004f127) main_ai5_pane

0x9d20,	// (0x0004acee) ai5_sk_pane_ParamLimits

0x9d20,	// (0x0004acee) ai5_sk_pane

0xf12c,	// (0x000500fa) cell_ai5_widget_pane_ParamLimits

0xf12c,	// (0x000500fa) cell_ai5_widget_pane

0x9df6,	// (0x0004adc4) aid_size_cell_widget_grid

0x9e0c,	// (0x0004adda) bg_ai5_widget_pane_ParamLimits

0x9e0c,	// (0x0004adda) bg_ai5_widget_pane

0x9e88,	// (0x0004ae56) cell_ai5_widget_pane_g2

0x9e9c,	// (0x0004ae6a) cell_ai5_widget_pane_g3

0x9eb6,	// (0x0004ae84) cell_ai5_widget_pane_g4

0x9ec6,	// (0x0004ae94) cell_ai5_widget_pane_g5

0x9ed6,	// (0x0004aea4) cell_ai5_widget_pane_g6

0x9ee2,	// (0x0004aeb0) cell_ai5_widget_pane_g7

0x9f4e,	// (0x0004af1c) cell_ai5_widget_pane_t1_ParamLimits

0x9f4e,	// (0x0004af1c) cell_ai5_widget_pane_t1

0x9f6b,	// (0x0004af39) cell_ai5_widget_pane_t2_ParamLimits

0x9f6b,	// (0x0004af39) cell_ai5_widget_pane_t2

0x9f83,	// (0x0004af51) cell_ai5_widget_pane_t3_ParamLimits

0x9f83,	// (0x0004af51) cell_ai5_widget_pane_t3

0x9f9b,	// (0x0004af69) cell_ai5_widget_pane_t4_ParamLimits

0x9f9b,	// (0x0004af69) cell_ai5_widget_pane_t4

0x9fc1,	// (0x0004af8f) cell_ai5_widget_pane_t5_ParamLimits

0x9fc1,	// (0x0004af8f) cell_ai5_widget_pane_t5

0x9fe0,	// (0x0004afae) cell_ai5_widget_pane_t6_ParamLimits

0x9fe0,	// (0x0004afae) cell_ai5_widget_pane_t6

0x9ff2,	// (0x0004afc0) cell_ai5_widget_pane_t7_ParamLimits

0x9ff2,	// (0x0004afc0) cell_ai5_widget_pane_t7

0xa011,	// (0x0004afdf) cell_ai5_widget_pane_t8_ParamLimits

0xa011,	// (0x0004afdf) cell_ai5_widget_pane_t8

0x000b,

0xfe16,	// (0x00050de4) cell_ai5_widget_pane_t_ParamLimits

0xfe16,	// (0x00050de4) cell_ai5_widget_pane_t

0xa095,	// (0x0004b063) grid_ai5_widget_pane

0x3c99,	// (0x00044c67) highlight_cell_ai5_widget_pane_ParamLimits

0x3c99,	// (0x00044c67) highlight_cell_ai5_widget_pane

0xf198,	// (0x00050166) ai5_sk_left_pane

0xf1a2,	// (0x00050170) ai5_sk_middle_pane

0xf1ac,	// (0x0005017a) ai5_sk_right_pane

0xa0ca,	// (0x0004b098) bg_ai5_widget_pane_g1_ParamLimits

0xa0ca,	// (0x0004b098) bg_ai5_widget_pane_g1

0xa0d6,	// (0x0004b0a4) bg_ai5_widget_pane_g2_ParamLimits

0xa0d6,	// (0x0004b0a4) bg_ai5_widget_pane_g2

0xa0e2,	// (0x0004b0b0) bg_ai5_widget_pane_g3_ParamLimits

0xa0e2,	// (0x0004b0b0) bg_ai5_widget_pane_g3

0xa0ee,	// (0x0004b0bc) bg_ai5_widget_pane_g4_ParamLimits

0xa0ee,	// (0x0004b0bc) bg_ai5_widget_pane_g4

0xa0fa,	// (0x0004b0c8) bg_ai5_widget_pane_g5_ParamLimits

0xa0fa,	// (0x0004b0c8) bg_ai5_widget_pane_g5

0xa106,	// (0x0004b0d4) bg_ai5_widget_pane_g6_ParamLimits

0xa106,	// (0x0004b0d4) bg_ai5_widget_pane_g6

0xa112,	// (0x0004b0e0) bg_ai5_widget_pane_g7_ParamLimits

0xa112,	// (0x0004b0e0) bg_ai5_widget_pane_g7

0xa11e,	// (0x0004b0ec) bg_ai5_widget_pane_g8_ParamLimits

0xa11e,	// (0x0004b0ec) bg_ai5_widget_pane_g8

0xa12a,	// (0x0004b0f8) bg_ai5_widget_pane_g9_ParamLimits

0xa12a,	// (0x0004b0f8) bg_ai5_widget_pane_g9

0x0008,

0xfe2f,	// (0x00050dfd) bg_ai5_widget_pane_g_ParamLimits

0xfe2f,	// (0x00050dfd) bg_ai5_widget_pane_g

0xa15c,	// (0x0004b12a) cell_shortcut_ai5_widget_pane_ParamLimits

0xa15c,	// (0x0004b12a) cell_shortcut_ai5_widget_pane

0x4938,	// (0x00045906) bg_cell_shortcut_ai5_widget_pane

0xa16d,	// (0x0004b13b) cell_grid_ai5_widget_pane_g1

0x4938,	// (0x00045906) highlight_cell_shortcut_ai5_widget_pane

0x5196,	// (0x00046164) ai5_sk_left_pane_g1

0xa176,	// (0x0004b144) ai5_sk_left_pane_g2

0xa17e,	// (0x0004b14c) ai5_sk_left_pane_g3

0xa186,	// (0x0004b154) ai5_sk_left_pane_g4

0x0003,

0xfe42,	// (0x00050e10) ai5_sk_left_pane_g

0xa18e,	// (0x0004b15c) ai5_sk_left_pane_t1

0x518e,	// (0x0004615c) ai5_sk_right_pane_g1

0xa19c,	// (0x0004b16a) ai5_sk_right_pane_g2

0xa1a4,	// (0x0004b172) ai5_sk_right_pane_g3

0xa1ac,	// (0x0004b17a) ai5_sk_right_pane_g4

0x0003,

0xfe4b,	// (0x00050e19) ai5_sk_right_pane_g

0xa1b4,	// (0x0004b182) ai5_sk_right_pane_t1

0x518e,	// (0x0004615c) ai5_sk_middle_pane_g1

0x5196,	// (0x00046164) ai5_sk_middle_pane_g2

0x51ae,	// (0x0004617c) ai5_sk_middle_pane_g3

0xa1a4,	// (0x0004b172) ai5_sk_middle_pane_g4

0xa17e,	// (0x0004b14c) ai5_sk_middle_pane_g5

0xa1c2,	// (0x0004b190) ai5_sk_middle_pane_g6

0xf1b6,	// (0x00050184) ai5_sk_middle_pane_g7

0x0006,

0xfe54,	// (0x00050e22) ai5_sk_middle_pane_g

0xd612,	// (0x0004e5e0) aid_touch_area_size_lc0_ParamLimits

0xd612,	// (0x0004e5e0) aid_touch_area_size_lc0

0x24a8,	// (0x00043476) cell_hwr_candidate_pane_t1_ParamLimits

0x4cd8,	// (0x00045ca6) aid_touch_navi_pane

0xd89e,	// (0x0004e86c) status_dt_navi_pane_ParamLimits

0xd89e,	// (0x0004e86c) status_dt_navi_pane

0xd8b6,	// (0x0004e884) status_dt_sta_pane_ParamLimits

0xd8b6,	// (0x0004e884) status_dt_sta_pane

0xf1be,	// (0x0005018c) dt_sta_controll_pane

0xf1cb,	// (0x00050199) dt_sta_indi_pane

0xf1d8,	// (0x000501a6) dt_sta_title_pane

0x3689,	// (0x00044657) bg_dt_sta_indi_pane_ParamLimits

0x3689,	// (0x00044657) bg_dt_sta_indi_pane

0xf1ea,	// (0x000501b8) dt_sta_battery_pane

0xf1f2,	// (0x000501c0) dt_sta_indi_pane_g1

0xa214,	// (0x0004b1e2) dt_sta_indi_pane_g2

0xa21d,	// (0x0004b1eb) dt_sta_indi_pane_g3

0x0002,

0xfe63,	// (0x00050e31) dt_sta_indi_pane_g

0xa226,	// (0x0004b1f4) dt_sta_signal_pane

0x3c99,	// (0x00044c67) bg_dt_sta_title_pane_ParamLimits

0x3c99,	// (0x00044c67) bg_dt_sta_title_pane

0xa22f,	// (0x0004b1fd) dt_sta_title_pane_g1

0xa237,	// (0x0004b205) dt_sta_title_pane_t1_ParamLimits

0xa237,	// (0x0004b205) dt_sta_title_pane_t1

0xe159,	// (0x0004f127) bg_dt_sta_control_pane

0xf1fb,	// (0x000501c9) dt_sta_controll_pane_g1

0xa255,	// (0x0004b223) bg_dt_sta_title_pane_g1

0xa25e,	// (0x0004b22c) bg_dt_sta_title_pane_g2

0xa267,	// (0x0004b235) bg_dt_sta_title_pane_g3

0x0002,

0xfe6a,	// (0x00050e38) bg_dt_sta_title_pane_g

0x77b7,	// (0x00048785) bg_dt_sta_indi_pane_g1

0xa270,	// (0x0004b23e) dt_sta_signal_pane_g1

0xa278,	// (0x0004b246) dt_sta_signal_pane_g2

0x0001,

0xfe71,	// (0x00050e3f) dt_sta_signal_pane_g

0xa280,	// (0x0004b24e) dt_sta_battery_pane_g1

0xa289,	// (0x0004b257) dt_sta_battery_pane_t1

0x77b7,	// (0x00048785) bg_dt_sta_control_pane_g1

0x4440,	// (0x0004540e) fep_china_uni_eep_pane

0x4448,	// (0x00045416) fep_china_uni_entry_pane_ParamLimits

0x4458,	// (0x00045426) popup_fep_china_uni_window_g1_ParamLimits

0x4468,	// (0x00045436) popup_fep_china_uni_window_g2_ParamLimits

0x4468,	// (0x00045436) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x000506cb) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x000506cb) popup_fep_china_uni_window_g

0xa298,	// (0x0004b266) fep_china_uni_eep_pane_g1

0xa2a0,	// (0x0004b26e) fep_china_uni_eep_pane_t1

0x9c8f,	// (0x0004ac5d) aid_touch_area_size_smil_player

0x4e2e,	// (0x00045dfc) lc0_clock_pane

0x5015,	// (0x00045fe3) status_pane_g5_ParamLimits

0x5015,	// (0x00045fe3) status_pane_g5

0xc5b1,	// (0x0004d57f) popup_keymap_window

0x4fd3,	// (0x00045fa1) status_icon_pane

0x9e9c,	// (0x0004ae6a) cell_ai5_widget_pane_g3_ParamLimits

0x9eb6,	// (0x0004ae84) cell_ai5_widget_pane_g4_ParamLimits

0x9ec6,	// (0x0004ae94) cell_ai5_widget_pane_g5_ParamLimits

0x9eee,	// (0x0004aebc) cell_ai5_widget_pane_g8_ParamLimits

0x9eee,	// (0x0004aebc) cell_ai5_widget_pane_g8

0x9f02,	// (0x0004aed0) cell_ai5_widget_pane_g9_ParamLimits

0x9f02,	// (0x0004aed0) cell_ai5_widget_pane_g9

0x9f16,	// (0x0004aee4) cell_ai5_widget_pane_g10_ParamLimits

0x9f16,	// (0x0004aee4) cell_ai5_widget_pane_g10

0xa2af,	// (0x0004b27d) status_icon_pane_g1

0xe159,	// (0x0004f127) bg_popup_sub_pane_cp13

0xa2b7,	// (0x0004b285) popup_keymap_window_t1

0xd5a8,	// (0x0004e576) control_pane_g6_ParamLimits

0xd5a8,	// (0x0004e576) control_pane_g6

0xd5b5,	// (0x0004e583) control_pane_g7_ParamLimits

0xd5b5,	// (0x0004e583) control_pane_g7

0xd5c2,	// (0x0004e590) control_pane_g8_ParamLimits

0xd5c2,	// (0x0004e590) control_pane_g8

0xf1be,	// (0x0005018c) dt_sta_controll_pane_ParamLimits

0xf1cb,	// (0x00050199) dt_sta_indi_pane_ParamLimits

0xf1d8,	// (0x000501a6) dt_sta_title_pane_ParamLimits

0x3bc5,	// (0x00044b93) aid_size_touch_scroll_bar_cale

0x0e73,	// (0x00041e41) popup_discreet_window_ParamLimits

0x0e73,	// (0x00041e41) popup_discreet_window

0xbded,	// (0x0004cdbb) popup_sk_window

0x5815,	// (0x000467e3) bg_popup_sub_pane_cp28_ParamLimits

0x5815,	// (0x000467e3) bg_popup_sub_pane_cp28

0xa2c5,	// (0x0004b293) popup_discreet_window_g1_ParamLimits

0xa2c5,	// (0x0004b293) popup_discreet_window_g1

0xa2e5,	// (0x0004b2b3) popup_discreet_window_t1_ParamLimits

0xa2e5,	// (0x0004b2b3) popup_discreet_window_t1

0xa303,	// (0x0004b2d1) popup_discreet_window_t2_ParamLimits

0xa303,	// (0x0004b2d1) popup_discreet_window_t2

0x0002,

0xfe76,	// (0x00050e44) popup_discreet_window_t_ParamLimits

0xfe76,	// (0x00050e44) popup_discreet_window_t

0x2ef5,	// (0x00043ec3) popup_sk_window_g1

0x2eff,	// (0x00043ecd) popup_sk_window_g2

0x0001,

0xfe7d,	// (0x00050e4b) popup_sk_window_g

0x2f07,	// (0x00043ed5) popup_sk_window_t1

0x2f15,	// (0x00043ee3) popup_sk_window_t1_copy1

0x9e88,	// (0x0004ae56) cell_ai5_widget_pane_g2_ParamLimits

0xa023,	// (0x0004aff1) cell_ai5_widget_pane_t9_ParamLimits

0xa023,	// (0x0004aff1) cell_ai5_widget_pane_t9

0xe159,	// (0x0004f127) main_fep_fshwr2_pane

0xd032,	// (0x0004e000) aid_fshwr2_btn_pane

0xd046,	// (0x0004e014) aid_fshwr2_syb_pane

0xd05a,	// (0x0004e028) aid_fshwr2_txt_pane

0xd06a,	// (0x0004e038) fshwr2_func_candi_pane

0xd08a,	// (0x0004e058) fshwr2_hwr_syb_pane

0xd0ac,	// (0x0004e07a) fshwr2_icf_pane

0xe159,	// (0x0004f127) fshwr2_icf_bg_pane

0xd0dc,	// (0x0004e0aa) fshwr2_icf_pane_t1_ParamLimits

0xd0dc,	// (0x0004e0aa) fshwr2_icf_pane_t1

0x4322,	// (0x000452f0) fshwr2_func_candi_pane_g1

0xf204,	// (0x000501d2) fshwr2_func_candi_row_pane_ParamLimits

0xf204,	// (0x000501d2) fshwr2_func_candi_row_pane

0xd0f5,	// (0x0004e0c3) cell_fshwr2_syb_pane_ParamLimits

0xd0f5,	// (0x0004e0c3) cell_fshwr2_syb_pane

0x9c5f,	// (0x0004ac2d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9c5f,	// (0x0004ac2d) fshwr2_hwr_syb_pane_g1

0xe159,	// (0x0004f127) bg_popup_call_pane_cp01

0xd11b,	// (0x0004e0e9) fshwr2_func_candi_cell_pane_ParamLimits

0xd11b,	// (0x0004e0e9) fshwr2_func_candi_cell_pane

0x55f6,	// (0x000465c4) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x55f6,	// (0x000465c4) fshwr2_func_candi_cell_bg_pane

0xd166,	// (0x0004e134) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd166,	// (0x0004e134) fshwr2_func_candi_cell_pane_g1

0xd19d,	// (0x0004e16b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd19d,	// (0x0004e16b) fshwr2_func_candi_cell_pane_t1

0xe159,	// (0x0004f127) bg_button_pane_cp08

0x4c5c,	// (0x00045c2a) cell_fshwr2_syb_bg_pane

0xd1b8,	// (0x0004e186) cell_fshwr2_syb_bg_pane_g1

0xd1cb,	// (0x0004e199) cell_fshwr2_syb_bg_pane_t1

0x3c99,	// (0x00044c67) main_tmo_pane

0xdb74,	// (0x0004eb42) uni_indicator_pane_g1_ParamLimits

0xdb8a,	// (0x0004eb58) uni_indicator_pane_g2_ParamLimits

0xdba0,	// (0x0004eb6e) uni_indicator_pane_g3_ParamLimits

0x6363,	// (0x00047331) uni_indicator_pane_g4_ParamLimits

0x6363,	// (0x00047331) uni_indicator_pane_g4

0x6377,	// (0x00047345) uni_indicator_pane_g5_ParamLimits

0x6377,	// (0x00047345) uni_indicator_pane_g5

0x6377,	// (0x00047345) uni_indicator_pane_g6_ParamLimits

0x6377,	// (0x00047345) uni_indicator_pane_g6

0xf8fc,	// (0x000508ca) uni_indicator_pane_g_ParamLimits

0xe5ab,	// (0x0004f579) popup_tmo_note_window_ParamLimits

0xe5ab,	// (0x0004f579) popup_tmo_note_window

0x3c99,	// (0x00044c67) fshwr2_bg_pane

0xd18e,	// (0x0004e15c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd18e,	// (0x0004e15c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe82,	// (0x00050e50) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe82,	// (0x00050e50) fshwr2_func_candi_cell_pane_g

0x77b7,	// (0x00048785) bg_popup_window_pane_cp01

0x3094,	// (0x00044062) bg_popup_window_pane_g1_cp01

0xa37c,	// (0x0004b34a) bg_popup_window_pane_cp22_ParamLimits

0xa37c,	// (0x0004b34a) bg_popup_window_pane_cp22

0xa38a,	// (0x0004b358) listscroll_tmo_link_pane_ParamLimits

0xa38a,	// (0x0004b358) listscroll_tmo_link_pane

0xa3ca,	// (0x0004b398) popup_tmo_note_window_g1_ParamLimits

0xa3ca,	// (0x0004b398) popup_tmo_note_window_g1

0xa3d7,	// (0x0004b3a5) tmo_note_info_pane_ParamLimits

0xa3d7,	// (0x0004b3a5) tmo_note_info_pane

0xf227,	// (0x000501f5) list_tmo_note_info_pane_g1_ParamLimits

0xf227,	// (0x000501f5) list_tmo_note_info_pane_g1

0xa408,	// (0x0004b3d6) list_tmo_note_info_pane_g2_ParamLimits

0xa408,	// (0x0004b3d6) list_tmo_note_info_pane_g2

0x0001,

0xfe87,	// (0x00050e55) list_tmo_note_info_pane_g_ParamLimits

0xfe87,	// (0x00050e55) list_tmo_note_info_pane_g

0xa424,	// (0x0004b3f2) list_tmo_note_info_text_pane_ParamLimits

0xa424,	// (0x0004b3f2) list_tmo_note_info_text_pane

0xa4a5,	// (0x0004b473) list_tmo_link_pane

0xa4b2,	// (0x0004b480) scroll_pane_cp20

0xa4bf,	// (0x0004b48d) list_single_tmo_link_pane_ParamLimits

0xa4bf,	// (0x0004b48d) list_single_tmo_link_pane

0xa4cf,	// (0x0004b49d) list_single_tmo_link_pane_t1

0xa4dd,	// (0x0004b4ab) list_tmo_note_info_text_pane_t1_ParamLimits

0xa4dd,	// (0x0004b4ab) list_tmo_note_info_text_pane_t1

0xd24d,	// (0x0004e21b) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd24d,	// (0x0004e21b) aid_size_touch_scroll_bar_cp01

0xba6d,	// (0x0004ca3b) aid_size_touch_slider_marker

0xbddd,	// (0x0004cdab) popup_settings_window_ParamLimits

0xbddd,	// (0x0004cdab) popup_settings_window

0x049e,	// (0x0004146c) popup_candi_list_indi_window

0x4cd8,	// (0x00045ca6) aid_touch_navi_pane_ParamLimits

0x2708,	// (0x000436d6) rs_clock_indi_pane

0x2711,	// (0x000436df) sctrl_sk_bottom_pane_ParamLimits

0x2722,	// (0x000436f0) sctrl_sk_top_pane_ParamLimits

0x2809,	// (0x000437d7) popup_fep_tooltip_window

0x9df6,	// (0x0004adc4) aid_size_cell_widget_grid_ParamLimits

0x9e73,	// (0x0004ae41) cell_ai5_widget_pane_g1_ParamLimits

0x9e73,	// (0x0004ae41) cell_ai5_widget_pane_g1

0x9ed6,	// (0x0004aea4) cell_ai5_widget_pane_g6_ParamLimits

0x9ee2,	// (0x0004aeb0) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdfb,	// (0x00050dc9) cell_ai5_widget_pane_g_ParamLimits

0xfdfb,	// (0x00050dc9) cell_ai5_widget_pane_g

0xa052,	// (0x0004b020) cell_ai5_widget_pane_t10_ParamLimits

0xa052,	// (0x0004b020) cell_ai5_widget_pane_t10

0xa095,	// (0x0004b063) grid_ai5_widget_pane_ParamLimits

0xa136,	// (0x0004b104) cell_contacts_ai5_widget_pane_ParamLimits

0xa136,	// (0x0004b104) cell_contacts_ai5_widget_pane

0xa318,	// (0x0004b2e6) popup_discreet_window_t3_ParamLimits

0xa318,	// (0x0004b2e6) popup_discreet_window_t3

0xd0c8,	// (0x0004e096) popup_fshwr2_char_preview_window_ParamLimits

0xd0c8,	// (0x0004e096) popup_fshwr2_char_preview_window

0xf23e,	// (0x0005020c) tmo_note_info_pane_t1

0xf253,	// (0x00050221) tmo_note_info_pane_t2

0xf26a,	// (0x00050238) tmo_note_info_pane_t3

0xa481,	// (0x0004b44f) tmo_note_info_pane_t4

0xa493,	// (0x0004b461) tmo_note_info_pane_t5

0x0004,

0xfe8c,	// (0x00050e5a) tmo_note_info_pane_t

0xa4a5,	// (0x0004b473) list_tmo_link_pane_ParamLimits

0xa4b2,	// (0x0004b480) scroll_pane_cp20_ParamLimits

0xe159,	// (0x0004f127) bg_popup_fep_char_preview_window_cp01

0xa4f6,	// (0x0004b4c4) popup_fshwr2_char_preview_window_t1

0xa504,	// (0x0004b4d2) popup_candi_list_indi_window_g1

0xa50d,	// (0x0004b4db) bg_cell_contacts_ai5_widget_pane

0xa519,	// (0x0004b4e7) cell_contacts_ai5_widget_pane_g1

0x7e97,	// (0x00048e65) cell_contacts_ai5_widget_pane_g2

0xa52e,	// (0x0004b4fc) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe97,	// (0x00050e65) cell_contacts_ai5_widget_pane_g

0xa53a,	// (0x0004b508) cell_contacts_ai5_widget_pane_t1

0x3c99,	// (0x00044c67) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa5b1,	// (0x0004b57f) settings_container_pane

0x4938,	// (0x00045906) listscroll_set_pane_copy1

0x6ea1,	// (0x00047e6f) scroll_pane_cp121_copy1

0x55b2,	// (0x00046580) set_content_pane_copy1

0xa5bd,	// (0x0004b58b) aid_height_set_list_copy1_ParamLimits

0xa5bd,	// (0x0004b58b) aid_height_set_list_copy1

0x656f,	// (0x0004753d) aid_size_parent_copy1_ParamLimits

0x656f,	// (0x0004753d) aid_size_parent_copy1

0xa5c9,	// (0x0004b597) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa5c9,	// (0x0004b597) button_value_adjust_pane_cp6_copy1

0x4c5c,	// (0x00045c2a) list_highlight_pane_cp2_copy1_ParamLimits

0x4c5c,	// (0x00045c2a) list_highlight_pane_cp2_copy1

0xa5dd,	// (0x0004b5ab) list_set_pane_copy1_ParamLimits

0xa5dd,	// (0x0004b5ab) list_set_pane_copy1

0xa54c,	// (0x0004b51a) main_pane_set_t1_copy1_ParamLimits

0xa54c,	// (0x0004b51a) main_pane_set_t1_copy1

0xa586,	// (0x0004b554) main_pane_set_t2_copy1_ParamLimits

0xa586,	// (0x0004b554) main_pane_set_t2_copy1

0xa68a,	// (0x0004b658) main_pane_set_t3_copy1

0xa698,	// (0x0004b666) main_pane_set_t4_copy1

0xa5a5,	// (0x0004b573) set_content_pane_g1_copy1_ParamLimits

0xa5a5,	// (0x0004b573) set_content_pane_g1_copy1

0xa6a6,	// (0x0004b674) setting_code_pane_copy1

0xa6ae,	// (0x0004b67c) setting_slider_graphic_pane_copy1

0xa6ae,	// (0x0004b67c) setting_slider_pane_copy1

0xa6b6,	// (0x0004b684) setting_text_pane_copy1

0xa6b6,	// (0x0004b684) setting_volume_pane_copy1

0xa6a6,	// (0x0004b674) settings_code_pane_cp2_copy1

0xa6be,	// (0x0004b68c) settings_code_pane_cp_copy1_ParamLimits

0xa6be,	// (0x0004b68c) settings_code_pane_cp_copy1

0x309d,	// (0x0004406b) volume_set_pane_copy1

0xa6d2,	// (0x0004b6a0) volume_set_pane_g10_copy1

0xa6da,	// (0x0004b6a8) volume_set_pane_g1_copy1

0xa6e2,	// (0x0004b6b0) volume_set_pane_g2_copy1

0xa6ea,	// (0x0004b6b8) volume_set_pane_g3_copy1

0xa6f2,	// (0x0004b6c0) volume_set_pane_g4_copy1

0xa6fa,	// (0x0004b6c8) volume_set_pane_g5_copy1

0xa702,	// (0x0004b6d0) volume_set_pane_g6_copy1

0xa70a,	// (0x0004b6d8) volume_set_pane_g7_copy1

0xa712,	// (0x0004b6e0) volume_set_pane_g8_copy1

0xa71a,	// (0x0004b6e8) volume_set_pane_g9_copy1

0x3400,	// (0x000443ce) bg_set_opt_pane_cp_copy1_ParamLimits

0x3400,	// (0x000443ce) bg_set_opt_pane_cp_copy1

0x30a5,	// (0x00044073) setting_slider_pane_t1_copy1_ParamLimits

0x30a5,	// (0x00044073) setting_slider_pane_t1_copy1

0x30c4,	// (0x00044092) setting_slider_pane_t2_copy1_ParamLimits

0x30c4,	// (0x00044092) setting_slider_pane_t2_copy1

0x30de,	// (0x000440ac) setting_slider_pane_t3_copy1_ParamLimits

0x30de,	// (0x000440ac) setting_slider_pane_t3_copy1

0x30f6,	// (0x000440c4) slider_set_pane_copy1_ParamLimits

0x30f6,	// (0x000440c4) slider_set_pane_copy1

0x3ce5,	// (0x00044cb3) set_opt_bg_pane_g1_copy2

0x3ced,	// (0x00044cbb) set_opt_bg_pane_g2_copy2

0xa722,	// (0x0004b6f0) set_opt_bg_pane_g3_copy2

0x3cfd,	// (0x00044ccb) set_opt_bg_pane_g4_copy2

0x3d05,	// (0x00044cd3) set_opt_bg_pane_g5_copy2

0x3d0d,	// (0x00044cdb) set_opt_bg_pane_g6_copy2

0xa72c,	// (0x0004b6fa) set_opt_bg_pane_g7_copy2

0xa734,	// (0x0004b702) set_opt_bg_pane_g8_copy2

0xa73e,	// (0x0004b70c) set_opt_bg_pane_g9_copy2

0x310c,	// (0x000440da) aid_size_touch_slider_mark_copy1_ParamLimits

0x310c,	// (0x000440da) aid_size_touch_slider_mark_copy1

0xa748,	// (0x0004b716) slider_set_pane_g1_copy1

0x3120,	// (0x000440ee) slider_set_pane_g2_copy1

0x1fff,	// (0x00042fcd) slider_set_pane_g3_copy1_ParamLimits

0x1fff,	// (0x00042fcd) slider_set_pane_g3_copy1

0x2013,	// (0x00042fe1) slider_set_pane_g4_copy1_ParamLimits

0x2013,	// (0x00042fe1) slider_set_pane_g4_copy1

0x202b,	// (0x00042ff9) slider_set_pane_g5_copy1_ParamLimits

0x202b,	// (0x00042ff9) slider_set_pane_g5_copy1

0x1fff,	// (0x00042fcd) slider_set_pane_g6_copy1_ParamLimits

0x1fff,	// (0x00042fcd) slider_set_pane_g6_copy1

0x3128,	// (0x000440f6) slider_set_pane_g7_copy1_ParamLimits

0x3128,	// (0x000440f6) slider_set_pane_g7_copy1

0x3320,	// (0x000442ee) bg_set_opt_pane_cp2_copy1

0xa751,	// (0x0004b71f) setting_slider_graphic_pane_g1_copy1

0xa75a,	// (0x0004b728) setting_slider_graphic_pane_t1_copy1

0xa76a,	// (0x0004b738) setting_slider_graphic_pane_t2_copy1

0xa77a,	// (0x0004b748) slider_set_pane_cp_copy1

0xa78a,	// (0x0004b758) input_focus_pane_cp1_copy1

0xa793,	// (0x0004b761) list_set_text_pane_copy1

0xa79b,	// (0x0004b769) setting_text_pane_g1_copy1

0x0bea,	// (0x00041bb8) set_text_pane_t1_copy1

0xa78a,	// (0x0004b758) input_focus_pane_cp2_copy1

0xa79b,	// (0x0004b769) setting_code_pane_g1_copy1

0xa7a4,	// (0x0004b772) setting_code_pane_t1_copy1

0x6cc9,	// (0x00047c97) list_set_graphic_pane_copy1

0x3320,	// (0x000442ee) bg_set_opt_pane_cp4_copy1

0x463f,	// (0x0004560d) list_set_graphic_pane_g1_copy1_ParamLimits

0x463f,	// (0x0004560d) list_set_graphic_pane_g1_copy1

0xa7b2,	// (0x0004b780) list_set_graphic_pane_g2_copy1

0x4657,	// (0x00045625) list_set_graphic_pane_t1_copy1_ParamLimits

0x4657,	// (0x00045625) list_set_graphic_pane_t1_copy1

0x77b7,	// (0x00048785) rs_clock_indi_pane_g1

0xa7ba,	// (0x0004b788) rs_clock_indi_pane_t1

0xa7c8,	// (0x0004b796) rs_indi_pane

0xa7d0,	// (0x0004b79e) rs_indi_pane_g1

0xa7d9,	// (0x0004b7a7) rs_indi_pane_g2

0xa7e2,	// (0x0004b7b0) rs_indi_pane_g3

0x0002,

0xfe9e,	// (0x00050e6c) rs_indi_pane_g

0x4938,	// (0x00045906) bg_popup_preview_window_pane_cp03

0xa7eb,	// (0x0004b7b9) popup_fep_tooltip_window_t1

0x843f,	// (0x0004940d) popup_note2_window_g2_ParamLimits

0x843f,	// (0x0004940d) popup_note2_window_g2

0x0001,

0xfc2b,	// (0x00050bf9) popup_note2_window_g_ParamLimits

0xfc2b,	// (0x00050bf9) popup_note2_window_g

0x893a,	// (0x00049908) bg_popup_sub_pane_cp11_ParamLimits

0x8947,	// (0x00049915) cell_ai3_links_pane_g1_ParamLimits

0x895e,	// (0x0004992c) cell_ai3_links_pane_t1

0x0bea,	// (0x00041bb8) set_text_pane_t1_copy1_ParamLimits

0xd42f,	// (0x0004e3fd) cell_graphic_popup_pane_cp2_ParamLimits

0xd42f,	// (0x0004e3fd) cell_graphic_popup_pane_cp2

0xa7f9,	// (0x0004b7c7) cell_graphic_popup_pane_g1_cp2

0x39d8,	// (0x000449a6) cell_graphic_popup_pane_g2_cp2

0xa801,	// (0x0004b7cf) cell_graphic_popup_pane_g3_cp2

0xa809,	// (0x0004b7d7) cell_graphic_popup_pane_t2_cp2

0x39e9,	// (0x000449b7) grid_highlight_pane_cp3_cp2

0x403d,	// (0x0004500b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3c99,	// (0x00044c67) main_tmo_pane_ParamLimits

0xe59f,	// (0x0004f56d) popup_tmo_big_image_note_window

0x9e62,	// (0x0004ae30) cell_ai5_widget_list_pane

0x9e6a,	// (0x0004ae38) cell_ai5_widget_lrg_icon_pane

0xf23e,	// (0x0005020c) tmo_note_info_pane_t1_ParamLimits

0xf253,	// (0x00050221) tmo_note_info_pane_t2_ParamLimits

0xf26a,	// (0x00050238) tmo_note_info_pane_t3_ParamLimits

0xa481,	// (0x0004b44f) tmo_note_info_pane_t4_ParamLimits

0xa493,	// (0x0004b461) tmo_note_info_pane_t5_ParamLimits

0xfe8c,	// (0x00050e5a) tmo_note_info_pane_t_ParamLimits

0xa5b1,	// (0x0004b57f) settings_container_pane_ParamLimits

0xa782,	// (0x0004b750) indicator_popup_pane_cp5

0xa782,	// (0x0004b750) indicator_popup_pane_cp6

0x6cc9,	// (0x00047c97) list_set_graphic_pane_copy1_ParamLimits

0xe159,	// (0x0004f127) bg_popup_window_pane_cp23

0xa817,	// (0x0004b7e5) popup_tmo_big_image_note_window_g1

0xa821,	// (0x0004b7ef) popup_tmo_big_image_note_window_t1

0xa831,	// (0x0004b7ff) popup_tmo_big_image_note_window_t2

0xa841,	// (0x0004b80f) popup_tmo_big_image_note_window_t3

0x0002,

0xfea5,	// (0x00050e73) popup_tmo_big_image_note_window_t

0x77b7,	// (0x00048785) cell_ai5_widget_lrg_icon_pane_g1

0xa851,	// (0x0004b81f) cell_ai5_widget_lrg_icon_pane_t1

0xa85f,	// (0x0004b82d) cell_ai5_widget_list_row_pane_ParamLimits

0xa85f,	// (0x0004b82d) cell_ai5_widget_list_row_pane

0xa876,	// (0x0004b844) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa876,	// (0x0004b844) cell_ai5_widget_list_row_pane_g1

0xa883,	// (0x0004b851) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa883,	// (0x0004b851) cell_ai5_widget_list_row_pane_t1

0xa8b4,	// (0x0004b882) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa8b4,	// (0x0004b882) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeac,	// (0x00050e7a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeac,	// (0x00050e7a) cell_ai5_widget_list_row_pane_t

0xe159,	// (0x0004f127) main_fep_vtchi_ss_pane

0xa904,	// (0x0004b8d2) popup_fep_char_pre_window

0xa90c,	// (0x0004b8da) popup_fep_ituss_window

0xf2a9,	// (0x00050277) popup_fep_vkbss_window

0x4c5c,	// (0x00045c2a) grid_vkbss_keypad_pane_ParamLimits

0x4c5c,	// (0x00045c2a) grid_vkbss_keypad_pane

0x4c5c,	// (0x00045c2a) ituss_keypad_pane

0x314a,	// (0x00044118) aid_vkbss_key_offset_ParamLimits

0x314a,	// (0x00044118) aid_vkbss_key_offset

0xd1e1,	// (0x0004e1af) cell_vkbss_key_pane_ParamLimits

0xd1e1,	// (0x0004e1af) cell_vkbss_key_pane

0xa978,	// (0x0004b946) bg_cell_vkbss_key_g1_ParamLimits

0xa978,	// (0x0004b946) bg_cell_vkbss_key_g1

0xf2b6,	// (0x00050284) cell_vkbss_key_3p_pane_ParamLimits

0xf2b6,	// (0x00050284) cell_vkbss_key_3p_pane

0xf2ec,	// (0x000502ba) cell_vkbss_key_g1_ParamLimits

0xf2ec,	// (0x000502ba) cell_vkbss_key_g1

0xf322,	// (0x000502f0) cell_vkbss_key_t1_ParamLimits

0xf322,	// (0x000502f0) cell_vkbss_key_t1

0x31ae,	// (0x0004417c) cell_ituss_key_pane_ParamLimits

0x31ae,	// (0x0004417c) cell_ituss_key_pane

0xaa4c,	// (0x0004ba1a) bg_cell_ituss_key_g1_ParamLimits

0xaa4c,	// (0x0004ba1a) bg_cell_ituss_key_g1

0xaa58,	// (0x0004ba26) cell_ituss_key_pane_g1_ParamLimits

0xaa58,	// (0x0004ba26) cell_ituss_key_pane_g1

0x31bf,	// (0x0004418d) cell_ituss_key_pane_g2_ParamLimits

0x31bf,	// (0x0004418d) cell_ituss_key_pane_g2

0x0005,

0xfeb3,	// (0x00050e81) cell_ituss_key_pane_g_ParamLimits

0xfeb3,	// (0x00050e81) cell_ituss_key_pane_g

0x3243,	// (0x00044211) cell_ituss_key_t1_ParamLimits

0x3243,	// (0x00044211) cell_ituss_key_t1

0x327d,	// (0x0004424b) cell_ituss_key_t2_ParamLimits

0x327d,	// (0x0004424b) cell_ituss_key_t2

0x32ae,	// (0x0004427c) cell_ituss_key_t3_ParamLimits

0x32ae,	// (0x0004427c) cell_ituss_key_t3

0x327d,	// (0x0004424b) cell_ituss_key_t4_ParamLimits

0x327d,	// (0x0004424b) cell_ituss_key_t4

0x0004,

0xfec0,	// (0x00050e8e) cell_ituss_key_t_ParamLimits

0xfec0,	// (0x00050e8e) cell_ituss_key_t

0xf37e,	// (0x0005034c) cell_vkbss_key_3p_pane_g1

0xf386,	// (0x00050354) cell_vkbss_key_3p_pane_g2

0xf38e,	// (0x0005035c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfecb,	// (0x00050e99) cell_vkbss_key_3p_pane_g

0x4938,	// (0x00045906) bg_popup_fep_char_preview_window_cp02

0xaa96,	// (0x0004ba64) popup_fep_char_pre_window_t1

0xf18e,	// (0x0005015c) main_ai5_sk_pane

0xa50d,	// (0x0004b4db) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa519,	// (0x0004b4e7) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7e97,	// (0x00048e65) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa52e,	// (0x0004b4fc) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe97,	// (0x00050e65) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa53a,	// (0x0004b508) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3c99,	// (0x00044c67) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf396,	// (0x00050364) main_ai5_sk_pane_g1

0x564e,	// (0x0004661c) popup_query_code_window_g1

0xf29a,	// (0x00050268) popup_fep_vkb_icf_pane

0xa94f,	// (0x0004b91d) popup_fep_vtchi_icf_pane

0x4c5c,	// (0x00045c2a) bg_icf_pane

0x4c5c,	// (0x00045c2a) list_vkb_icf_pane

0xaaad,	// (0x0004ba7b) bg_icf_pane_cp01

0x4938,	// (0x00045906) vtchi_icf_list_pane

0xf3eb,	// (0x000503b9) list_vkb_icf_pane_t1_ParamLimits

0xf3eb,	// (0x000503b9) list_vkb_icf_pane_t1

0xab41,	// (0x0004bb0f) vtchi_icf_list_pane_t1_ParamLimits

0xab41,	// (0x0004bb0f) vtchi_icf_list_pane_t1

0xa90c,	// (0x0004b8da) popup_fep_ituss_window_ParamLimits

0xa94f,	// (0x0004b91d) popup_fep_vtchi_icf_pane_ParamLimits

0x4c5c,	// (0x00045c2a) ituss_keypad_pane_ParamLimits

0x313e,	// (0x0004410c) ituss_sks_pane

0x4c5c,	// (0x00045c2a) bg_icf_pane_ParamLimits

0xf27f,	// (0x0005024d) icf_edit_indi_pane_ParamLimits

0xf27f,	// (0x0005024d) icf_edit_indi_pane

0x4c5c,	// (0x00045c2a) list_vkb_icf_pane_ParamLimits

0xaaad,	// (0x0004ba7b) bg_icf_pane_cp01_ParamLimits

0xa8f7,	// (0x0004b8c5) icf_edit_indi_pane_cp01_ParamLimits

0xa8f7,	// (0x0004b8c5) icf_edit_indi_pane_cp01

0xaac0,	// (0x0004ba8e) vtchi_query_pane

0x9c5f,	// (0x0004ac2d) icf_edit_indi_pane_g1_ParamLimits

0x9c5f,	// (0x0004ac2d) icf_edit_indi_pane_g1

0xf402,	// (0x000503d0) icf_edit_indi_pane_g2_ParamLimits

0xf402,	// (0x000503d0) icf_edit_indi_pane_g2

0x0001,

0xfef6,	// (0x00050ec4) icf_edit_indi_pane_g_ParamLimits

0xfef6,	// (0x00050ec4) icf_edit_indi_pane_g

0xf416,	// (0x000503e4) icf_edit_indi_pane_t1

0xab5f,	// (0x0004bb2d) bg_input_focus_pane_cp042

0x3bbc,	// (0x00044b8a) vtchi_button_pane

0xab68,	// (0x0004bb36) vtchi_query_pane_t1

0xab76,	// (0x0004bb44) vtchi_query_pane_t2

0xab84,	// (0x0004bb52) vtchi_query_pane_t3

0x0002,

0xfee5,	// (0x00050eb3) vtchi_query_pane_t

0xe159,	// (0x0004f127) bg_button_pane_cp13

0xab92,	// (0x0004bb60) vtchi_button_pane_g1

0x32f1,	// (0x000442bf) ituss_sks_pane_g1

0x32fc,	// (0x000442ca) ituss_sks_pane_g2

0x0001,

0xfeec,	// (0x00050eba) ituss_sks_pane_g

0xab9a,	// (0x0004bb68) ituss_sks_pane_t1

0xaba8,	// (0x0004bb76) ituss_sks_pane_t2

0x0001,

0xfef1,	// (0x00050ebf) ituss_sks_pane_t

0x7239,	// (0x00048207) indicator_nsta_pane_cp_g1

0x7242,	// (0x00048210) indicator_nsta_pane_cp_g2

0x724a,	// (0x00048218) indicator_nsta_pane_cp_g3

0x7252,	// (0x00048220) indicator_nsta_pane_cp_g4

0x7242,	// (0x00048210) indicator_nsta_pane_cp_g5

0x724a,	// (0x00048218) indicator_nsta_pane_cp_g6

0x0005,

0xfa75,	// (0x00050a43) indicator_nsta_pane_cp_g

0xef9f,	// (0x0004ff6d) cell_graphic2_pane_t2_ParamLimits

0xef9f,	// (0x0004ff6d) cell_graphic2_pane_t2

0x0001,

0xfd82,	// (0x00050d50) cell_graphic2_pane_t_ParamLimits

0xfd82,	// (0x00050d50) cell_graphic2_pane_t

0xefd4,	// (0x0004ffa2) cell_graphic2_control_pane_t1

0xd3f8,	// (0x0004e3c6) signal_pane_g3_ParamLimits

0xd3f8,	// (0x0004e3c6) signal_pane_g3

0xd40c,	// (0x0004e3da) signal_pane_g4_ParamLimits

0xd40c,	// (0x0004e3da) signal_pane_g4

0xa8c6,	// (0x0004b894) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa8c6,	// (0x0004b894) cell_ai5_widget_list_row_pane_t3

0xaa6c,	// (0x0004ba3a) cell_ituss_key_pane_t1_ParamLimits

0xaa6c,	// (0x0004ba3a) cell_ituss_key_pane_t1

0x528b,	// (0x00046259) form_field_data_wide_pane_vc_t2_ParamLimits

0x528b,	// (0x00046259) form_field_data_wide_pane_vc_t2

0x529f,	// (0x0004626d) form_field_data_wide_pane_vc_t3_ParamLimits

0x529f,	// (0x0004626d) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x000507b2) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x000507b2) form_field_data_wide_pane_vc_t

0x6ee3,	// (0x00047eb1) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6ee3,	// (0x00047eb1) form_field_slider_wide_pane_vc_t3

0x6fc1,	// (0x00047f8f) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6fc1,	// (0x00047f8f) form_field_popup_wide_pane_vc_t2

0x6fd8,	// (0x00047fa6) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6fd8,	// (0x00047fa6) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa64,	// (0x00050a32) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x00050a32) form_field_popup_wide_pane_vc_t

0xd032,	// (0x0004e000) aid_fshwr2_btn_pane_ParamLimits

0xd046,	// (0x0004e014) aid_fshwr2_syb_pane_ParamLimits

0xd05a,	// (0x0004e028) aid_fshwr2_txt_pane_ParamLimits

0x3c99,	// (0x00044c67) fshwr2_bg_pane_ParamLimits

0xd06a,	// (0x0004e038) fshwr2_func_candi_pane_ParamLimits

0xd08a,	// (0x0004e058) fshwr2_hwr_syb_pane_ParamLimits

0xd0ac,	// (0x0004e07a) fshwr2_icf_pane_ParamLimits

0x220b,	// (0x000431d9) list_double_graphic_pane_vc_g4_ParamLimits

0x220b,	// (0x000431d9) list_double_graphic_pane_vc_g4

0x31df,	// (0x000441ad) cell_ituss_key_pane_g3_ParamLimits

0x31df,	// (0x000441ad) cell_ituss_key_pane_g3

0x32df,	// (0x000442ad) cell_ituss_key_t5_ParamLimits

0x32df,	// (0x000442ad) cell_ituss_key_t5

0xf2a9,	// (0x00050277) popup_fep_vkbss_window_ParamLimits

0x9ded,	// (0x0004adbb) aid_cell_ai5_quarter

0xf416,	// (0x000503e4) icf_edit_indi_pane_t1_ParamLimits

0x3731,	// (0x000446ff) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3731,	// (0x000446ff) aid_tch_indicator_popup_pane_cp2

0x3744,	// (0x00044712) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3744,	// (0x00044712) aid_tch_query_popup_data_pane_cp2

0x55f6,	// (0x000465c4) aid_tch_query_popup_pane_ParamLimits

0x55f6,	// (0x000465c4) aid_tch_query_popup_pane

0x55f6,	// (0x000465c4) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x55f6,	// (0x000465c4) aid_tch_query_popup_data_pane_cp1

0x4c5c,	// (0x00045c2a) cell_fshwr2_syb_bg_pane_ParamLimits

0xd1b8,	// (0x0004e186) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd1cb,	// (0x0004e199) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf29a,	// (0x00050268) popup_fep_vkb_icf_pane_ParamLimits

0xcfbe,	// (0x0004df8c) bg_popup_fep_char_preview_window_g10

0x9f2a,	// (0x0004aef8) cell_ai5_widget_pane_g11_ParamLimits

0x9f2a,	// (0x0004aef8) cell_ai5_widget_pane_g11

0x9f36,	// (0x0004af04) cell_ai5_widget_pane_g12_ParamLimits

0x9f36,	// (0x0004af04) cell_ai5_widget_pane_g12

0x9f42,	// (0x0004af10) cell_ai5_widget_pane_g13_ParamLimits

0x9f42,	// (0x0004af10) cell_ai5_widget_pane_g13

0xa071,	// (0x0004b03f) cell_ai5_widget_pane_t11_ParamLimits

0xa071,	// (0x0004b03f) cell_ai5_widget_pane_t11

0xa083,	// (0x0004b051) cell_ai5_widget_pane_t12_ParamLimits

0xa083,	// (0x0004b051) cell_ai5_widget_pane_t12

0x31eb,	// (0x000441b9) cell_ituss_key_pane_g4_ParamLimits

0x31eb,	// (0x000441b9) cell_ituss_key_pane_g4

0x3207,	// (0x000441d5) cell_ituss_key_pane_g5_ParamLimits

0x3207,	// (0x000441d5) cell_ituss_key_pane_g5

0x3223,	// (0x000441f1) cell_ituss_key_pane_g6_ParamLimits

0x3223,	// (0x000441f1) cell_ituss_key_pane_g6

0x5186,	// (0x00046154) bg_icf_pane_g1

0xf39f,	// (0x0005036d) bg_icf_pane_g2

0xf3a9,	// (0x00050377) bg_icf_pane_g3

0xf3b1,	// (0x0005037f) bg_icf_pane_g4

0xf3bb,	// (0x00050389) bg_icf_pane_g5

0xf3c5,	// (0x00050393) bg_icf_pane_g6

0xf3cf,	// (0x0005039d) bg_icf_pane_g7

0xf3d7,	// (0x000503a5) bg_icf_pane_g8

0xf3e1,	// (0x000503af) bg_icf_pane_g9

0x0008,

0xfed2,	// (0x00050ea0) bg_icf_pane_g

0xa965,	// (0x0004b933) popup_hyb_candi_window_ParamLimits

0xa965,	// (0x0004b933) popup_hyb_candi_window

0x51fa,	// (0x000461c8) bg_popup_sub_pane_cp01_ParamLimits

0x51fa,	// (0x000461c8) bg_popup_sub_pane_cp01

0xabe3,	// (0x0004bbb1) entry_hyb_candi_pane_ParamLimits

0xabe3,	// (0x0004bbb1) entry_hyb_candi_pane

0xabf2,	// (0x0004bbc0) grid_hyb_candi_pane_ParamLimits

0xabf2,	// (0x0004bbc0) grid_hyb_candi_pane

0xac07,	// (0x0004bbd5) grid_hyb_phrase_pane_ParamLimits

0xac07,	// (0x0004bbd5) grid_hyb_phrase_pane

0xac16,	// (0x0004bbe4) cell_hyb_candi_pane_ParamLimits

0xac16,	// (0x0004bbe4) cell_hyb_candi_pane

0xac39,	// (0x0004bc07) cell_hyb_candi_scroll_pane

0x4322,	// (0x000452f0) cell_hyb_candi_pane_g1

0xac42,	// (0x0004bc10) cell_hyb_candi_pane_t1

0xac50,	// (0x0004bc1e) cell_hyb_phrase_pane

0x4322,	// (0x000452f0) cell_hyb_phrase_pane_g1

0xac59,	// (0x0004bc27) cell_hyb_phrase_pane_t1

0xac67,	// (0x0004bc35) entry_hyb_candi_pane_t1

0x4938,	// (0x00045906) input_focus_pane_cp06

0xac75,	// (0x0004bc43) cell_hyb_candi_scroll_pane_g1

0xac7d,	// (0x0004bc4b) cell_hyb_candi_scroll_pane_g1_aid

0xac85,	// (0x0004bc53) cell_hyb_candi_scroll_pane_g2

0xac8d,	// (0x0004bc5b) cell_hyb_candi_scroll_pane_g2_aid

0xac95,	// (0x0004bc63) cell_hyb_candi_scroll_pane_g3

0xac9d,	// (0x0004bc6b) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
