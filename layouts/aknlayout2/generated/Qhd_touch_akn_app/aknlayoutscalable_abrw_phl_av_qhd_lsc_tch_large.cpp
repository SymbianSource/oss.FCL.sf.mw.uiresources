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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x000516da };

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
0xb3f3,	// (0x0005cacd) Screen

0xb3ff,	// (0x0005cad9) application_window_ParamLimits

0xb3ff,	// (0x0005cad9) application_window

0xdcee,	// (0x0005f3c8) screen_g1

0xb437,	// (0x0005cb11) area_bottom_pane_ParamLimits

0xb437,	// (0x0005cb11) area_bottom_pane

0xf27d,	// (0x00060957) area_top_pane_ParamLimits

0xf27d,	// (0x00060957) area_top_pane

0xf31b,	// (0x000609f5) main_pane_ParamLimits

0xf31b,	// (0x000609f5) main_pane

0x2c4e,	// (0x00054328) misc_graphics

0xd327,	// (0x0005ea01) battery_pane_ParamLimits

0xd327,	// (0x0005ea01) battery_pane

0x573e,	// (0x00056e18) bg_status_flat_pane_g8

0x5746,	// (0x00056e20) bg_status_flat_pane_g9

0x4b24,	// (0x000561fe) context_pane_ParamLimits

0x4b24,	// (0x000561fe) context_pane

0xd492,	// (0x0005eb6c) navi_pane_ParamLimits

0xd492,	// (0x0005eb6c) navi_pane

0xd510,	// (0x0005ebea) signal_pane_ParamLimits

0xd510,	// (0x0005ebea) signal_pane

0x0008,

0xf854,	// (0x00060f2e) bg_status_flat_pane_g

0xd5a0,	// (0x0005ec7a) status_pane_g1_ParamLimits

0xd5a0,	// (0x0005ec7a) status_pane_g1

0xd5b6,	// (0x0005ec90) status_pane_g2_ParamLimits

0xd5b6,	// (0x0005ec90) status_pane_g2

0x4d4b,	// (0x00056425) status_pane_g3_ParamLimits

0x4d4b,	// (0x00056425) status_pane_g3

0x0004,

0xf780,	// (0x00060e5a) status_pane_g_ParamLimits

0xf780,	// (0x00060e5a) status_pane_g

0xd5c2,	// (0x0005ec9c) title_pane_ParamLimits

0xd5c2,	// (0x0005ec9c) title_pane

0xd625,	// (0x0005ecff) uni_indicator_pane_ParamLimits

0xd625,	// (0x0005ecff) uni_indicator_pane

0x498c,	// (0x00056066) bg_list_pane_ParamLimits

0x498c,	// (0x00056066) bg_list_pane

0x3613,	// (0x00054ced) find_pane

0x4f4a,	// (0x00056624) listscroll_app_pane_ParamLimits

0x4f4a,	// (0x00056624) listscroll_app_pane

0x49b8,	// (0x00056092) listscroll_form_pane

0x0b2e,	// (0x00052208) listscroll_gen_pane_ParamLimits

0x0b2e,	// (0x00052208) listscroll_gen_pane

0x0b42,	// (0x0005221c) listscroll_set_pane

0x62bf,	// (0x00057999) main_idle_act_pane

0x4688,	// (0x00055d62) main_idle_trad_pane

0x4688,	// (0x00055d62) main_list_empty_pane

0x49ac,	// (0x00056086) main_midp_pane

0x49d2,	// (0x000560ac) main_pane_g1_ParamLimits

0x49d2,	// (0x000560ac) main_pane_g1

0xc010,	// (0x0005d6ea) popup_ai_message_window_ParamLimits

0xc010,	// (0x0005d6ea) popup_ai_message_window

0xc0a1,	// (0x0005d77b) popup_fep_china_uni_window_ParamLimits

0xc0a1,	// (0x0005d77b) popup_fep_china_uni_window

0x0c62,	// (0x0005233c) popup_fep_japan_candidate_window_ParamLimits

0x0c62,	// (0x0005233c) popup_fep_japan_candidate_window

0x0c82,	// (0x0005235c) popup_fep_japan_predictive_window_ParamLimits

0x0c82,	// (0x0005235c) popup_fep_japan_predictive_window

0xc0fd,	// (0x0005d7d7) popup_find_window

0xc11a,	// (0x0005d7f4) popup_grid_graphic_window_ParamLimits

0xc11a,	// (0x0005d7f4) popup_grid_graphic_window

0x0ceb,	// (0x000523c5) popup_large_graphic_colour_window

0xc1be,	// (0x0005d898) popup_menu_window_ParamLimits

0xc1be,	// (0x0005d898) popup_menu_window

0xc390,	// (0x0005da6a) popup_note_image_window

0xc356,	// (0x0005da30) popup_note_wait_window_ParamLimits

0xc356,	// (0x0005da30) popup_note_wait_window

0xc3a8,	// (0x0005da82) popup_note_window_ParamLimits

0xc3a8,	// (0x0005da82) popup_note_window

0xc44e,	// (0x0005db28) popup_query_code_window_ParamLimits

0xc44e,	// (0x0005db28) popup_query_code_window

0x0f33,	// (0x0005260d) popup_query_data_code_window_ParamLimits

0x0f33,	// (0x0005260d) popup_query_data_code_window

0xc488,	// (0x0005db62) popup_query_data_window_ParamLimits

0xc488,	// (0x0005db62) popup_query_data_window

0xc50a,	// (0x0005dbe4) popup_query_sat_info_window_ParamLimits

0xc50a,	// (0x0005dbe4) popup_query_sat_info_window

0xc5a1,	// (0x0005dc7b) popup_snote_single_graphic_window_ParamLimits

0xc5a1,	// (0x0005dc7b) popup_snote_single_graphic_window

0xc5a1,	// (0x0005dc7b) popup_snote_single_text_window_ParamLimits

0xc5a1,	// (0x0005dc7b) popup_snote_single_text_window

0x0fba,	// (0x00052694) popup_sub_window_general

0x10ea,	// (0x000527c4) popup_window_general_ParamLimits

0x10ea,	// (0x000527c4) popup_window_general

0x49e0,	// (0x000560ba) power_save_pane

0xbe91,	// (0x0005d56b) control_pane_g1_ParamLimits

0xbe91,	// (0x0005d56b) control_pane_g1

0xbeba,	// (0x0005d594) control_pane_g2_ParamLimits

0xbeba,	// (0x0005d594) control_pane_g2

0x494f,	// (0x00056029) control_pane_g3_ParamLimits

0x494f,	// (0x00056029) control_pane_g3

0x0007,

0xf768,	// (0x00060e42) control_pane_g_ParamLimits

0xf768,	// (0x00060e42) control_pane_g

0xbefb,	// (0x0005d5d5) control_pane_t1_ParamLimits

0xbefb,	// (0x0005d5d5) control_pane_t1

0xbf63,	// (0x0005d63d) control_pane_t2_ParamLimits

0xbf63,	// (0x0005d63d) control_pane_t2

0x0002,

0xf779,	// (0x00060e53) control_pane_t_ParamLimits

0xf779,	// (0x00060e53) control_pane_t

0x4874,	// (0x00055f4e) navi_navi_volume_pane_cp1

0x487c,	// (0x00055f56) status_small_icon_pane

0x4884,	// (0x00055f5e) status_small_pane_g1_ParamLimits

0x4884,	// (0x00055f5e) status_small_pane_g1

0x48b8,	// (0x00055f92) status_small_pane_g2_ParamLimits

0x48b8,	// (0x00055f92) status_small_pane_g2

0x48c4,	// (0x00055f9e) status_small_pane_g3_ParamLimits

0x48c4,	// (0x00055f9e) status_small_pane_g3

0xd243,	// (0x0005e91d) status_small_pane_g4_ParamLimits

0xd243,	// (0x0005e91d) status_small_pane_g4

0xd251,	// (0x0005e92b) status_small_pane_g5_ParamLimits

0xd251,	// (0x0005e92b) status_small_pane_g5

0x48ea,	// (0x00055fc4) status_small_pane_g6_ParamLimits

0x48ea,	// (0x00055fc4) status_small_pane_g6

0x0007,

0xf757,	// (0x00060e31) status_small_pane_g_ParamLimits

0xf757,	// (0x00060e31) status_small_pane_g

0x4919,	// (0x00055ff3) status_small_pane_t1

0xd267,	// (0x0005e941) status_small_wait_pane_ParamLimits

0xd267,	// (0x0005e941) status_small_wait_pane

0xd119,	// (0x0005e7f3) aid_levels_signal_ParamLimits

0xd119,	// (0x0005e7f3) aid_levels_signal

0xd131,	// (0x0005e80b) signal_pane_g1_ParamLimits

0xd131,	// (0x0005e80b) signal_pane_g1

0xd14c,	// (0x0005e826) signal_pane_g2_ParamLimits

0xd14c,	// (0x0005e826) signal_pane_g2

0x0003,

0xf6e8,	// (0x00060dc2) signal_pane_g_ParamLimits

0xf6e8,	// (0x00060dc2) signal_pane_g

0x4167,	// (0x00055841) context_pane_g1

0xb615,	// (0x0005ccef) title_pane_g1

0xb64c,	// (0x0005cd26) title_pane_t1

0x2cf6,	// (0x000543d0) title_pane_t2

0x2d1c,	// (0x000543f6) title_pane_t3

0x0002,

0xf532,	// (0x00060c0c) title_pane_t

0xd64d,	// (0x0005ed27) aid_levels_battery_ParamLimits

0xd64d,	// (0x0005ed27) aid_levels_battery

0xd669,	// (0x0005ed43) battery_pane_g1_ParamLimits

0xd669,	// (0x0005ed43) battery_pane_g1

0xd686,	// (0x0005ed60) battery_pane_g2_ParamLimits

0xd686,	// (0x0005ed60) battery_pane_g2

0x0001,

0xf78b,	// (0x00060e65) battery_pane_g_ParamLimits

0xf78b,	// (0x00060e65) battery_pane_g

0xd847,	// (0x0005ef21) uni_indicator_pane_g1

0xd85d,	// (0x0005ef37) uni_indicator_pane_g2

0xd873,	// (0x0005ef4d) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x00060fd6) uni_indicator_pane_g

0x44fd,	// (0x00055bd7) navi_icon_pane_ParamLimits

0x44fd,	// (0x00055bd7) navi_icon_pane

0x4446,	// (0x00055b20) navi_midp_pane

0x4519,	// (0x00055bf3) navi_navi_pane

0x4523,	// (0x00055bfd) navi_text_pane_ParamLimits

0x4523,	// (0x00055bfd) navi_text_pane

0xdcee,	// (0x0005f3c8) status_small_wait_pane_g1

0x3171,	// (0x0005484b) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x00060fd1) status_small_wait_pane_g

0x5d99,	// (0x00057473) navi_navi_icon_text_pane

0x5da1,	// (0x0005747b) navi_navi_pane_g1_ParamLimits

0x5da1,	// (0x0005747b) navi_navi_pane_g1

0x5db3,	// (0x0005748d) navi_navi_pane_g2_ParamLimits

0x5db3,	// (0x0005748d) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x00060f9f) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x00060f9f) navi_navi_pane_g

0x5dc5,	// (0x0005749f) navi_navi_tabs_pane

0x5dce,	// (0x000574a8) navi_navi_text_pane

0x5d99,	// (0x00057473) navi_navi_volume_pane

0x5d75,	// (0x0005744f) navi_text_pane_t1

0x5d69,	// (0x00057443) navi_icon_pane_g1

0x5cbc,	// (0x00057396) navi_navi_text_pane_t1

0x1479,	// (0x00052b53) navi_navi_volume_pane_g1

0x1481,	// (0x00052b5b) volume_small_pane

0x5c22,	// (0x000572fc) navi_navi_icon_text_pane_g1

0x5c2a,	// (0x00057304) navi_navi_icon_text_pane_t1

0x4519,	// (0x00055bf3) navi_tabs_2_long_pane

0x4519,	// (0x00055bf3) navi_tabs_2_pane

0x4519,	// (0x00055bf3) navi_tabs_3_long_pane

0x4519,	// (0x00055bf3) navi_tabs_3_pane

0x4519,	// (0x00055bf3) navi_tabs_4_pane

0x1459,	// (0x00052b33) tabs_2_active_pane_ParamLimits

0x1459,	// (0x00052b33) tabs_2_active_pane

0x1469,	// (0x00052b43) tabs_2_passive_pane_ParamLimits

0x1469,	// (0x00052b43) tabs_2_passive_pane

0x1427,	// (0x00052b01) tabs_3_active_pane_ParamLimits

0x1427,	// (0x00052b01) tabs_3_active_pane

0x1437,	// (0x00052b11) tabs_3_passive_pane_ParamLimits

0x1437,	// (0x00052b11) tabs_3_passive_pane

0x1448,	// (0x00052b22) tabs_3_passive_pane_cp_ParamLimits

0x1448,	// (0x00052b22) tabs_3_passive_pane_cp

0x13e3,	// (0x00052abd) tabs_4_active_pane_ParamLimits

0x13e3,	// (0x00052abd) tabs_4_active_pane

0x13f4,	// (0x00052ace) tabs_4_passive_pane_ParamLimits

0x13f4,	// (0x00052ace) tabs_4_passive_pane

0x1405,	// (0x00052adf) tabs_4_passive_pane_cp_ParamLimits

0x1405,	// (0x00052adf) tabs_4_passive_pane_cp

0x1416,	// (0x00052af0) tabs_4_passive_pane_cp2_ParamLimits

0x1416,	// (0x00052af0) tabs_4_passive_pane_cp2

0x13bf,	// (0x00052a99) tabs_2_long_active_pane_ParamLimits

0x13bf,	// (0x00052a99) tabs_2_long_active_pane

0x13d1,	// (0x00052aab) tabs_2_long_passive_pane_ParamLimits

0x13d1,	// (0x00052aab) tabs_2_long_passive_pane

0x1380,	// (0x00052a5a) tabs_3_long_active_pane_ParamLimits

0x1380,	// (0x00052a5a) tabs_3_long_active_pane

0x1393,	// (0x00052a6d) tabs_3_long_passive_pane_ParamLimits

0x1393,	// (0x00052a6d) tabs_3_long_passive_pane

0x13ac,	// (0x00052a86) tabs_3_long_passive_pane_cp_ParamLimits

0x13ac,	// (0x00052a86) tabs_3_long_passive_pane_cp

0x1326,	// (0x00052a00) volume_small_pane_g1

0x132f,	// (0x00052a09) volume_small_pane_g2

0x1338,	// (0x00052a12) volume_small_pane_g3

0x1341,	// (0x00052a1b) volume_small_pane_g4

0x134a,	// (0x00052a24) volume_small_pane_g5

0x1353,	// (0x00052a2d) volume_small_pane_g6

0x135c,	// (0x00052a36) volume_small_pane_g7

0x1365,	// (0x00052a3f) volume_small_pane_g8

0x136e,	// (0x00052a48) volume_small_pane_g9

0x1377,	// (0x00052a51) volume_small_pane_g10

0x0009,

0xf891,	// (0x00060f6b) volume_small_pane_g

0x2fa9,	// (0x00054683) bg_active_tab_pane_cp2_ParamLimits

0x2fa9,	// (0x00054683) bg_active_tab_pane_cp2

0x2d3c,	// (0x00054416) tabs_3_active_pane_g1

0xb6d8,	// (0x0005cdb2) tabs_3_active_pane_t1

0x2fa9,	// (0x00054683) bg_passive_tab_pane_cp2_ParamLimits

0x2fa9,	// (0x00054683) bg_passive_tab_pane_cp2

0x2d3c,	// (0x00054416) tabs_3_passive_pane_g1

0xb6d8,	// (0x0005cdb2) tabs_3_passive_pane_t1

0x2fa9,	// (0x00054683) bg_active_tab_pane_cp3_ParamLimits

0x2fa9,	// (0x00054683) bg_active_tab_pane_cp3

0x2d56,	// (0x00054430) tabs_4_active_pane_g1

0xb6ea,	// (0x0005cdc4) tabs_4_active_pane_t1

0x2fa9,	// (0x00054683) bg_passive_tab_pane_cp3_ParamLimits

0x2fa9,	// (0x00054683) bg_passive_tab_pane_cp3

0x2d56,	// (0x00054430) tabs_4_1_passive_pane_g1

0xb6ea,	// (0x0005cdc4) tabs_4_1_passive_pane_t1

0x49ac,	// (0x00056086) list_highlight_pane_cp2

0xd8f9,	// (0x0005efd3) list_set_pane_ParamLimits

0xd8f9,	// (0x0005efd3) list_set_pane

0xd993,	// (0x0005f06d) main_pane_set_t1_ParamLimits

0xd993,	// (0x0005f06d) main_pane_set_t1

0xd9b3,	// (0x0005f08d) main_pane_set_t2_ParamLimits

0xd9b3,	// (0x0005f08d) main_pane_set_t2

0xd9c7,	// (0x0005f0a1) main_pane_set_t3_ParamLimits

0xd9c7,	// (0x0005f0a1) main_pane_set_t3

0xd9d9,	// (0x0005f0b3) main_pane_set_t4_ParamLimits

0xd9d9,	// (0x0005f0b3) main_pane_set_t4

0x0003,

0xf961,	// (0x0006103b) main_pane_set_t_ParamLimits

0xf961,	// (0x0006103b) main_pane_set_t

0xd9eb,	// (0x0005f0c5) setting_code_pane

0xd9f5,	// (0x0005f0cf) setting_slider_graphic_pane

0xd9f5,	// (0x0005f0cf) setting_slider_pane

0xd9f5,	// (0x0005f0cf) setting_text_pane

0xd9f5,	// (0x0005f0cf) setting_volume_pane

0xf498,	// (0x00060b72) volume_set_pane

0x2d2e,	// (0x00054408) bg_set_opt_pane_cp

0xf4a0,	// (0x00060b7a) setting_slider_pane_t1

0xf4b9,	// (0x00060b93) setting_slider_pane_t2

0xf4d3,	// (0x00060bad) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00060c13) setting_slider_pane_t

0xf4eb,	// (0x00060bc5) slider_set_pane

0x2c4e,	// (0x00054328) bg_set_opt_pane_cp2

0x2d70,	// (0x0005444a) setting_slider_graphic_pane_g1

0xf501,	// (0x00060bdb) setting_slider_graphic_pane_t1

0xf511,	// (0x00060beb) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00060c1a) setting_slider_graphic_pane_t

0xf521,	// (0x00060bfb) slider_set_pane_cp

0x2c4e,	// (0x00054328) input_focus_pane_cp1

0x62a6,	// (0x00057980) list_set_text_pane

0xdcee,	// (0x0005f3c8) setting_text_pane_g1

0x2c4e,	// (0x00054328) input_focus_pane_cp2

0xdcee,	// (0x0005f3c8) setting_code_pane_g1

0x2d79,	// (0x00054453) setting_code_pane_t1

0xea4e,	// (0x00060128) set_text_pane_t1_ParamLimits

0xea4e,	// (0x00060128) set_text_pane_t1

0x3a2a,	// (0x00055104) set_opt_bg_pane_g1

0x3a32,	// (0x0005510c) set_opt_bg_pane_g2

0x6280,	// (0x0005795a) set_opt_bg_pane_g3

0x3a42,	// (0x0005511c) set_opt_bg_pane_g4

0x3a4a,	// (0x00055124) set_opt_bg_pane_g5

0x3a52,	// (0x0005512c) set_opt_bg_pane_g6

0x628a,	// (0x00057964) set_opt_bg_pane_g7

0x6292,	// (0x0005796c) set_opt_bg_pane_g8

0x629c,	// (0x00057976) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x00061028) set_opt_bg_pane_g

0x6273,	// (0x0005794d) slider_set_pane_g1

0x1500,	// (0x00052bda) slider_set_pane_g2

0x0006,

0xf93f,	// (0x00061019) slider_set_pane_g

0x148a,	// (0x00052b64) volume_set_pane_g1

0x1492,	// (0x00052b6c) volume_set_pane_g2

0x149a,	// (0x00052b74) volume_set_pane_g3

0x14a2,	// (0x00052b7c) volume_set_pane_g4

0x14aa,	// (0x00052b84) volume_set_pane_g5

0x14b2,	// (0x00052b8c) volume_set_pane_g6

0x14ba,	// (0x00052b94) volume_set_pane_g7

0x14c2,	// (0x00052b9c) volume_set_pane_g8

0x14ca,	// (0x00052ba4) volume_set_pane_g9

0x14d2,	// (0x00052bac) volume_set_pane_g10

0x0009,

0xf917,	// (0x00060ff1) volume_set_pane_g

0xb6fc,	// (0x0005cdd6) indicator_pane_ParamLimits

0xb6fc,	// (0x0005cdd6) indicator_pane

0xb724,	// (0x0005cdfe) main_idle_pane_g2_ParamLimits

0xb724,	// (0x0005cdfe) main_idle_pane_g2

0xb75c,	// (0x0005ce36) main_pane_idle_g1_ParamLimits

0xb75c,	// (0x0005ce36) main_pane_idle_g1

0x2dc8,	// (0x000544a2) popup_clock_digital_analogue_window_ParamLimits

0x2dc8,	// (0x000544a2) popup_clock_digital_analogue_window

0xb783,	// (0x0005ce5d) soft_indicator_pane_ParamLimits

0xb783,	// (0x0005ce5d) soft_indicator_pane

0xb79d,	// (0x0005ce77) wallpaper_pane_ParamLimits

0xb79d,	// (0x0005ce77) wallpaper_pane

0xdcee,	// (0x0005f3c8) wallpaper_pane_g1

0xb7af,	// (0x0005ce89) indicator_pane_g1_ParamLimits

0xb7af,	// (0x0005ce89) indicator_pane_g1

0x669f,	// (0x00057d79) navi_navi_icon_text_pane_srt_g1

0x2e1a,	// (0x000544f4) soft_indicator_pane_t1

0x2e34,	// (0x0005450e) aid_ps_area_pane

0xb7c5,	// (0x0005ce9f) aid_ps_clock_pane

0x2e53,	// (0x0005452d) aid_ps_indicator_pane

0x2e5f,	// (0x00054539) indicator_ps_pane_ParamLimits

0x2e5f,	// (0x00054539) indicator_ps_pane

0x2e6e,	// (0x00054548) power_save_pane_g1_ParamLimits

0x2e6e,	// (0x00054548) power_save_pane_g1

0x2e7a,	// (0x00054554) power_save_pane_g2_ParamLimits

0x2e7a,	// (0x00054554) power_save_pane_g2

0xf25d,	// (0x00060937) aid_navinavi_width_pane

0x2e34,	// (0x0005450e) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00060c1f) power_save_pane_g_ParamLimits

0xf545,	// (0x00060c1f) power_save_pane_g

0x2e88,	// (0x00054562) power_save_pane_t1_ParamLimits

0x2e88,	// (0x00054562) power_save_pane_t1

0xb7c5,	// (0x0005ce9f) aid_ps_clock_pane_ParamLimits

0x2e53,	// (0x0005452d) aid_ps_indicator_pane_ParamLimits

0x2e9a,	// (0x00054574) power_save_pane_t4_ParamLimits

0x2e9a,	// (0x00054574) power_save_pane_t4

0x0001,

0xf54a,	// (0x00060c24) power_save_pane_t_ParamLimits

0xf54a,	// (0x00060c24) power_save_pane_t

0x2ec4,	// (0x0005459e) power_save_t3_ParamLimits

0x2ec4,	// (0x0005459e) power_save_t3

0x2eaf,	// (0x00054589) power_save_t2_ParamLimits

0x2eaf,	// (0x00054589) power_save_t2

0x2ed9,	// (0x000545b3) indicator_ps_pane_g1

0xb7d3,	// (0x0005cead) ai_gene_pane_ParamLimits

0xb7d3,	// (0x0005cead) ai_gene_pane

0xb7ea,	// (0x0005cec4) ai_links_pane_ParamLimits

0xb7ea,	// (0x0005cec4) ai_links_pane

0xb802,	// (0x0005cedc) indicator_pane_cp1_ParamLimits

0xb802,	// (0x0005cedc) indicator_pane_cp1

0xb811,	// (0x0005ceeb) main_pane_idle_g1_cp_ParamLimits

0xb811,	// (0x0005ceeb) main_pane_idle_g1_cp

0x2f12,	// (0x000545ec) popup_ai_links_title_window

0xb829,	// (0x0005cf03) soft_indicator_pane_cp1_ParamLimits

0xb829,	// (0x0005cf03) soft_indicator_pane_cp1

0x6062,	// (0x0005773c) ai_links_pane_g1

0x606b,	// (0x00057745) grid_ai_links_pane

0xd83e,	// (0x0005ef18) ai_gene_pane_1

0x6050,	// (0x0005772a) ai_gene_pane_2

0x6059,	// (0x00057733) list_highlight_pane_cp4

0xd81a,	// (0x0005eef4) cell_ai_link_pane_ParamLimits

0xd81a,	// (0x0005eef4) cell_ai_link_pane

0x6021,	// (0x000576fb) cell_ai_link_pane_g1

0x3171,	// (0x0005484b) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x00060fcc) cell_ai_link_pane_g

0x2c4e,	// (0x00054328) grid_highlight_cp2

0x2c4e,	// (0x00054328) bg_popup_sub_pane_cp1

0x2f35,	// (0x0005460f) popup_ai_links_title_window_t1

0x5f6f,	// (0x00057649) ai_gene_pane_1_g1_ParamLimits

0x5f6f,	// (0x00057649) ai_gene_pane_1_g1

0x5f7b,	// (0x00057655) ai_gene_pane_1_g2_ParamLimits

0x5f7b,	// (0x00057655) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x00060fc2) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x00060fc2) ai_gene_pane_1_g

0x5f88,	// (0x00057662) ai_gene_pane_1_t1_ParamLimits

0x5f88,	// (0x00057662) ai_gene_pane_1_t1

0x5fbc,	// (0x00057696) grid_ai_soft_ind_pane

0x5f5a,	// (0x00057634) ai_gene_pane_2_t1_ParamLimits

0x5f5a,	// (0x00057634) ai_gene_pane_2_t1

0xb83d,	// (0x0005cf17) main_pane_empty_t1_ParamLimits

0xb83d,	// (0x0005cf17) main_pane_empty_t1

0xb855,	// (0x0005cf2f) main_pane_empty_t2_ParamLimits

0xb855,	// (0x0005cf2f) main_pane_empty_t2

0xb86a,	// (0x0005cf44) main_pane_empty_t3_ParamLimits

0xb86a,	// (0x0005cf44) main_pane_empty_t3

0xb87c,	// (0x0005cf56) main_pane_empty_t4_ParamLimits

0xb87c,	// (0x0005cf56) main_pane_empty_t4

0xb88e,	// (0x0005cf68) main_pane_empty_t5_ParamLimits

0xb88e,	// (0x0005cf68) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00060c29) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00060c29) main_pane_empty_t

0x3af1,	// (0x000551cb) bg_popup_window_pane_ParamLimits

0x3af1,	// (0x000551cb) bg_popup_window_pane

0x5cca,	// (0x000573a4) find_popup_pane_cp2_ParamLimits

0x5cca,	// (0x000573a4) find_popup_pane_cp2

0x5cd6,	// (0x000573b0) heading_pane_ParamLimits

0x5cd6,	// (0x000573b0) heading_pane

0x2c4e,	// (0x00054328) bg_popup_sub_pane

0xd79b,	// (0x0005ee75) bg_popup_window_pane_g1_ParamLimits

0xd79b,	// (0x0005ee75) bg_popup_window_pane_g1

0xd7aa,	// (0x0005ee84) bg_popup_window_pane_g2_ParamLimits

0xd7aa,	// (0x0005ee84) bg_popup_window_pane_g2

0xd7b6,	// (0x0005ee90) bg_popup_window_pane_g3_ParamLimits

0xd7b6,	// (0x0005ee90) bg_popup_window_pane_g3

0xd7c2,	// (0x0005ee9c) bg_popup_window_pane_g4_ParamLimits

0xd7c2,	// (0x0005ee9c) bg_popup_window_pane_g4

0xd7d1,	// (0x0005eeab) bg_popup_window_pane_g5_ParamLimits

0xd7d1,	// (0x0005eeab) bg_popup_window_pane_g5

0xd7e1,	// (0x0005eebb) bg_popup_window_pane_g6_ParamLimits

0xd7e1,	// (0x0005eebb) bg_popup_window_pane_g6

0xd7ed,	// (0x0005eec7) bg_popup_window_pane_g7_ParamLimits

0xd7ed,	// (0x0005eec7) bg_popup_window_pane_g7

0xd7fc,	// (0x0005eed6) bg_popup_window_pane_g8_ParamLimits

0xd7fc,	// (0x0005eed6) bg_popup_window_pane_g8

0xd80b,	// (0x0005eee5) bg_popup_window_pane_g9_ParamLimits

0xd80b,	// (0x0005eee5) bg_popup_window_pane_g9

0x5cb0,	// (0x0005738a) bg_popup_window_pane_g10_ParamLimits

0x5cb0,	// (0x0005738a) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x00060f8a) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x00060f8a) bg_popup_window_pane_g

0x5bd9,	// (0x000572b3) bg_popup_heading_pane_ParamLimits

0x5bd9,	// (0x000572b3) bg_popup_heading_pane

0x1605,	// (0x00052cdf) tabs_4_passive_pane_cp_srt_ParamLimits

0x1605,	// (0x00052cdf) tabs_4_passive_pane_cp_srt

0x1617,	// (0x00052cf1) tabs_4_passive_pane_srt_ParamLimits

0x5bed,	// (0x000572c7) heading_pane_g2

0x1617,	// (0x00052cf1) tabs_4_passive_pane_srt

0x4f4a,	// (0x00056624) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4f4a,	// (0x00056624) bg_passive_tab_pane_cp3_srt

0x5bf5,	// (0x000572cf) heading_pane_t1_ParamLimits

0x5bf5,	// (0x000572cf) heading_pane_t1

0x5c0c,	// (0x000572e6) heading_pane_t2_ParamLimits

0x5c0c,	// (0x000572e6) heading_pane_t2

0x0001,

0xf8ab,	// (0x00060f85) heading_pane_t_ParamLimits

0xf8ab,	// (0x00060f85) heading_pane_t

0x5706,	// (0x00056de0) bg_popup_heading_pane_g1

0x57b5,	// (0x00056e8f) bg_popup_heading_pane_g2

0x57bf,	// (0x00056e99) bg_popup_heading_pane_g3

0x57c9,	// (0x00056ea3) bg_popup_heading_pane_g4

0x57d3,	// (0x00056ead) bg_popup_heading_pane_g5

0x57dd,	// (0x00056eb7) bg_popup_heading_pane_g6

0x57e5,	// (0x00056ebf) bg_popup_heading_pane_g7

0x57ed,	// (0x00056ec7) bg_popup_heading_pane_g8

0x57f7,	// (0x00056ed1) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x00060f41) bg_popup_heading_pane_g

0x4ed6,	// (0x000565b0) bg_popup_sub_pane_g1

0x4ee6,	// (0x000565c0) bg_popup_sub_pane_g2

0x4ede,	// (0x000565b8) bg_popup_sub_pane_g3

0x4ef6,	// (0x000565d0) bg_popup_sub_pane_g4

0x4eee,	// (0x000565c8) bg_popup_sub_pane_g5

0x4efe,	// (0x000565d8) bg_popup_sub_pane_g6

0x4f06,	// (0x000565e0) bg_popup_sub_pane_g7

0x4f16,	// (0x000565f0) bg_popup_sub_pane_g8

0x4f0e,	// (0x000565e8) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x00060f1b) bg_popup_sub_pane_g

0x2fa9,	// (0x00054683) bg_popup_window_pane_cp5_ParamLimits

0x2fa9,	// (0x00054683) bg_popup_window_pane_cp5

0x2fc5,	// (0x0005469f) popup_note_window_g1_ParamLimits

0x2fc5,	// (0x0005469f) popup_note_window_g1

0x2fd1,	// (0x000546ab) popup_note_window_t1_ParamLimits

0x2fd1,	// (0x000546ab) popup_note_window_t1

0x2fe7,	// (0x000546c1) popup_note_window_t2_ParamLimits

0x2fe7,	// (0x000546c1) popup_note_window_t2

0x2ffd,	// (0x000546d7) popup_note_window_t3_ParamLimits

0x2ffd,	// (0x000546d7) popup_note_window_t3

0x3013,	// (0x000546ed) popup_note_window_t4_ParamLimits

0x3013,	// (0x000546ed) popup_note_window_t4

0x303b,	// (0x00054715) popup_note_window_t5_ParamLimits

0x303b,	// (0x00054715) popup_note_window_t5

0x0004,

0xf55a,	// (0x00060c34) popup_note_window_t_ParamLimits

0xf55a,	// (0x00060c34) popup_note_window_t

0x3085,	// (0x0005475f) bg_popup_window_pane_cp6_ParamLimits

0x3085,	// (0x0005475f) bg_popup_window_pane_cp6

0x5682,	// (0x00056d5c) popup_note_image_window_g1_ParamLimits

0x5682,	// (0x00056d5c) popup_note_image_window_g1

0x568e,	// (0x00056d68) popup_note_image_window_g2_ParamLimits

0x568e,	// (0x00056d68) popup_note_image_window_g2

0x0001,

0xf835,	// (0x00060f0f) popup_note_image_window_g_ParamLimits

0xf835,	// (0x00060f0f) popup_note_image_window_g

0x56a7,	// (0x00056d81) popup_note_image_window_t1_ParamLimits

0x56a7,	// (0x00056d81) popup_note_image_window_t1

0x56c0,	// (0x00056d9a) popup_note_image_window_t2_ParamLimits

0x56c0,	// (0x00056d9a) popup_note_image_window_t2

0x56d9,	// (0x00056db3) popup_note_image_window_t3_ParamLimits

0x56d9,	// (0x00056db3) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x00060f14) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x00060f14) popup_note_image_window_t

0x5543,	// (0x00056c1d) bg_popup_window_pane_cp7_ParamLimits

0x5543,	// (0x00056c1d) bg_popup_window_pane_cp7

0x5573,	// (0x00056c4d) popup_note_wait_window_g1_ParamLimits

0x5573,	// (0x00056c4d) popup_note_wait_window_g1

0x557f,	// (0x00056c59) popup_note_wait_window_g2_ParamLimits

0x557f,	// (0x00056c59) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x00060efd) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x00060efd) popup_note_wait_window_g

0x5597,	// (0x00056c71) popup_note_wait_window_t1_ParamLimits

0x5597,	// (0x00056c71) popup_note_wait_window_t1

0x55be,	// (0x00056c98) popup_note_wait_window_t2_ParamLimits

0x55be,	// (0x00056c98) popup_note_wait_window_t2

0x55db,	// (0x00056cb5) popup_note_wait_window_t3_ParamLimits

0x55db,	// (0x00056cb5) popup_note_wait_window_t3

0x55ee,	// (0x00056cc8) popup_note_wait_window_t4_ParamLimits

0x55ee,	// (0x00056cc8) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x00060f04) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x00060f04) popup_note_wait_window_t

0x5613,	// (0x00056ced) wait_bar_pane_ParamLimits

0x5613,	// (0x00056ced) wait_bar_pane

0x2c4e,	// (0x00054328) wait_anim_pane

0x2c4e,	// (0x00054328) wait_border_pane

0xdcee,	// (0x0005f3c8) wait_anim_pane_g1

0xdcee,	// (0x0005f3c8) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00060dbd) wait_anim_pane_g

0x54e7,	// (0x00056bc1) wait_border_pane_g1

0x54f2,	// (0x00056bcc) wait_border_pane_g2

0x54fb,	// (0x00056bd5) wait_border_pane_g3

0x0002,

0xf81c,	// (0x00060ef6) wait_border_pane_g

0x5352,	// (0x00056a2c) bg_popup_window_pane_cp16_ParamLimits

0x5352,	// (0x00056a2c) bg_popup_window_pane_cp16

0x5452,	// (0x00056b2c) indicator_popup_pane_cp4_ParamLimits

0x5452,	// (0x00056b2c) indicator_popup_pane_cp4

0x5466,	// (0x00056b40) popup_query_data_window_t1_ParamLimits

0x5466,	// (0x00056b40) popup_query_data_window_t1

0x5478,	// (0x00056b52) popup_query_data_window_t2_ParamLimits

0x5478,	// (0x00056b52) popup_query_data_window_t2

0x5491,	// (0x00056b6b) popup_query_data_window_t3_ParamLimits

0x5491,	// (0x00056b6b) popup_query_data_window_t3

0x0002,

0xf815,	// (0x00060eef) popup_query_data_window_t_ParamLimits

0xf815,	// (0x00060eef) popup_query_data_window_t

0x54ab,	// (0x00056b85) query_popup_data_pane_ParamLimits

0x54ab,	// (0x00056b85) query_popup_data_pane

0x54bf,	// (0x00056b99) query_popup_data_pane_cp1_ParamLimits

0x54bf,	// (0x00056b99) query_popup_data_pane_cp1

0x5352,	// (0x00056a2c) bg_popup_window_pane_cp10_ParamLimits

0x5352,	// (0x00056a2c) bg_popup_window_pane_cp10

0x5384,	// (0x00056a5e) indicator_popup_pane_ParamLimits

0x5384,	// (0x00056a5e) indicator_popup_pane

0x53a6,	// (0x00056a80) popup_query_code_window_t1_ParamLimits

0x53a6,	// (0x00056a80) popup_query_code_window_t1

0x53c0,	// (0x00056a9a) popup_query_code_window_t2_ParamLimits

0x53c0,	// (0x00056a9a) popup_query_code_window_t2

0x5409,	// (0x00056ae3) popup_query_code_window_t3_ParamLimits

0x5409,	// (0x00056ae3) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x00060ee8) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x00060ee8) popup_query_code_window_t

0x5438,	// (0x00056b12) query_popup_pane_ParamLimits

0x5438,	// (0x00056b12) query_popup_pane

0x3085,	// (0x0005475f) bg_popup_window_pane_cp15_ParamLimits

0x3085,	// (0x0005475f) bg_popup_window_pane_cp15

0x30a3,	// (0x0005477d) indicator_popup_pane_cp1_ParamLimits

0x30a3,	// (0x0005477d) indicator_popup_pane_cp1

0x30b6,	// (0x00054790) indicator_popup_pane_cp2_ParamLimits

0x30b6,	// (0x00054790) indicator_popup_pane_cp2

0x30c9,	// (0x000547a3) popup_query_data_code_window_g1_ParamLimits

0x30c9,	// (0x000547a3) popup_query_data_code_window_g1

0x30dc,	// (0x000547b6) popup_query_data_code_window_t1_ParamLimits

0x30dc,	// (0x000547b6) popup_query_data_code_window_t1

0x30ee,	// (0x000547c8) popup_query_data_code_window_t2_ParamLimits

0x30ee,	// (0x000547c8) popup_query_data_code_window_t2

0x3100,	// (0x000547da) popup_query_data_code_window_t3_ParamLimits

0x3100,	// (0x000547da) popup_query_data_code_window_t3

0x3116,	// (0x000547f0) popup_query_data_code_window_t4_ParamLimits

0x3116,	// (0x000547f0) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00060c3f) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00060c3f) popup_query_data_code_window_t

0x116a,	// (0x00052844) list_single_midp_graphic_pane_g3

0x312e,	// (0x00054808) query_popup_data_pane_cp2_ParamLimits

0x3141,	// (0x0005481b) query_popup_pane_cp2_ParamLimits

0x3141,	// (0x0005481b) query_popup_pane_cp2

0x2c4e,	// (0x00054328) bg_popup_window_pane_cp11

0x5336,	// (0x00056a10) heading_pane_cp5

0x533e,	// (0x00056a18) listscroll_popup_info_pane

0x2c4e,	// (0x00054328) input_focus_pane_cp3

0x3154,	// (0x0005482e) query_popup_pane_t1

0x3162,	// (0x0005483c) list_popup_info_pane_ParamLimits

0x3162,	// (0x0005483c) list_popup_info_pane

0x3171,	// (0x0005484b) listscroll_popup_info_pane_g1

0x3179,	// (0x00054853) scroll_pane_cp7

0x3183,	// (0x0005485d) popup_info_list_pane_t1_ParamLimits

0x3183,	// (0x0005485d) popup_info_list_pane_t1

0x319d,	// (0x00054877) popup_info_list_pane_t2_ParamLimits

0x319d,	// (0x00054877) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00060c48) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00060c48) popup_info_list_pane_t

0x2c4e,	// (0x00054328) bg_popup_window_pane_cp12

0x66b9,	// (0x00057d93) find_popup_pane

0x2d2e,	// (0x00054408) bg_popup_window_pane_cp3

0x31b7,	// (0x00054891) heading_pane_cp3

0x31c6,	// (0x000548a0) listscroll_popup_graphic_pane

0x2c4e,	// (0x00054328) bg_popup_window_pane_cp4

0xb8f0,	// (0x0005cfca) heading_pane_cp4

0x3230,	// (0x0005490a) listscroll_popup_colour_pane

0xb8fa,	// (0x0005cfd4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb8fa,	// (0x0005cfd4) cell_large_graphic_colour_none_popup_pane

0xb90e,	// (0x0005cfe8) grid_large_graphic_colour_popup_pane_ParamLimits

0xb90e,	// (0x0005cfe8) grid_large_graphic_colour_popup_pane

0xb932,	// (0x0005d00c) listscroll_popup_colour_pane_g1_ParamLimits

0xb932,	// (0x0005d00c) listscroll_popup_colour_pane_g1

0xb949,	// (0x0005d023) listscroll_popup_colour_pane_g2_ParamLimits

0xb949,	// (0x0005d023) listscroll_popup_colour_pane_g2

0xb95d,	// (0x0005d037) listscroll_popup_colour_pane_g3_ParamLimits

0xb95d,	// (0x0005d037) listscroll_popup_colour_pane_g3

0xb96d,	// (0x0005d047) listscroll_popup_colour_pane_g4_ParamLimits

0xb96d,	// (0x0005d047) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00060c4d) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00060c4d) listscroll_popup_colour_pane_g

0x32be,	// (0x00054998) scroll_pane_cp6_ParamLimits

0x32be,	// (0x00054998) scroll_pane_cp6

0xb97d,	// (0x0005d057) cell_large_graphic_colour_popup_pane_ParamLimits

0xb97d,	// (0x0005d057) cell_large_graphic_colour_popup_pane

0x32ef,	// (0x000549c9) cell_large_graphic_colour_none_popup_pane_t1

0x2c4e,	// (0x00054328) grid_highlight_pane_cp5

0x32fe,	// (0x000549d8) cell_large_graphic_colour_popup_pane_g1

0x3306,	// (0x000549e0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00060c56) cell_large_graphic_colour_popup_pane_g

0x330e,	// (0x000549e8) cell_large_graphic_colour_popup_pane_g2_copy1

0x3317,	// (0x000549f1) grid_highlight_pane_cp4

0x331f,	// (0x000549f9) bg_popup_window_pane_cp8_ParamLimits

0x331f,	// (0x000549f9) bg_popup_window_pane_cp8

0x333a,	// (0x00054a14) popup_snote_single_text_window_g1_ParamLimits

0x333a,	// (0x00054a14) popup_snote_single_text_window_g1

0x334c,	// (0x00054a26) popup_snote_single_text_window_t1_ParamLimits

0x334c,	// (0x00054a26) popup_snote_single_text_window_t1

0x335f,	// (0x00054a39) popup_snote_single_text_window_t2_ParamLimits

0x335f,	// (0x00054a39) popup_snote_single_text_window_t2

0x3372,	// (0x00054a4c) popup_snote_single_text_window_t3_ParamLimits

0x3372,	// (0x00054a4c) popup_snote_single_text_window_t3

0x33ab,	// (0x00054a85) popup_snote_single_text_window_t4_ParamLimits

0x33ab,	// (0x00054a85) popup_snote_single_text_window_t4

0x33df,	// (0x00054ab9) popup_snote_single_text_window_t5_ParamLimits

0x33df,	// (0x00054ab9) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00060c5b) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00060c5b) popup_snote_single_text_window_t

0x340e,	// (0x00054ae8) bg_popup_window_pane_cp9_ParamLimits

0x340e,	// (0x00054ae8) bg_popup_window_pane_cp9

0x333a,	// (0x00054a14) popup_snote_single_graphic_window_g1_ParamLimits

0x333a,	// (0x00054a14) popup_snote_single_graphic_window_g1

0x341c,	// (0x00054af6) popup_snote_single_graphic_window_g2_ParamLimits

0x341c,	// (0x00054af6) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00060c66) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00060c66) popup_snote_single_graphic_window_g

0x3428,	// (0x00054b02) popup_snote_single_graphic_window_t1_ParamLimits

0x3428,	// (0x00054b02) popup_snote_single_graphic_window_t1

0x343b,	// (0x00054b15) popup_snote_single_graphic_window_t2_ParamLimits

0x343b,	// (0x00054b15) popup_snote_single_graphic_window_t2

0x344e,	// (0x00054b28) popup_snote_single_graphic_window_t3_ParamLimits

0x344e,	// (0x00054b28) popup_snote_single_graphic_window_t3

0x3487,	// (0x00054b61) popup_snote_single_graphic_window_t4_ParamLimits

0x3487,	// (0x00054b61) popup_snote_single_graphic_window_t4

0x34bb,	// (0x00054b95) popup_snote_single_graphic_window_t5_ParamLimits

0x34bb,	// (0x00054b95) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00060c6b) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00060c6b) popup_snote_single_graphic_window_t

0x65fb,	// (0x00057cd5) grid_graphic_popup_pane_ParamLimits

0x65fb,	// (0x00057cd5) grid_graphic_popup_pane

0x6625,	// (0x00057cff) listscroll_popup_graphic_pane_g1_ParamLimits

0x6625,	// (0x00057cff) listscroll_popup_graphic_pane_g1

0xdafe,	// (0x0005f1d8) listscroll_popup_graphic_pane_g2_ParamLimits

0xdafe,	// (0x0005f1d8) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x00061065) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x00061065) listscroll_popup_graphic_pane_g

0x664d,	// (0x00057d27) scroll_pane_cp5

0xdabb,	// (0x0005f195) cell_graphic_popup_pane_ParamLimits

0xdabb,	// (0x0005f195) cell_graphic_popup_pane

0x656d,	// (0x00057c47) cell_graphic_popup_pane_g1

0x6575,	// (0x00057c4f) cell_graphic_popup_pane_g2

0x330e,	// (0x000549e8) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0006105e) cell_graphic_popup_pane_g

0x657e,	// (0x00057c58) cell_graphic_popup_pane_t2

0x3317,	// (0x000549f1) grid_highlight_pane_cp3

0x34fc,	// (0x00054bd6) list_gen_pane_ParamLimits

0x34fc,	// (0x00054bd6) list_gen_pane

0x352e,	// (0x00054c08) scroll_pane

0xda72,	// (0x0005f14c) bg_list_pane_g1_ParamLimits

0xda72,	// (0x0005f14c) bg_list_pane_g1

0x64e2,	// (0x00057bbc) bg_list_pane_g2_ParamLimits

0x64e2,	// (0x00057bbc) bg_list_pane_g2

0x64f7,	// (0x00057bd1) bg_list_pane_g3_ParamLimits

0x64f7,	// (0x00057bd1) bg_list_pane_g3

0x650b,	// (0x00057be5) bg_list_pane_g4_ParamLimits

0x650b,	// (0x00057be5) bg_list_pane_g4

0xda8f,	// (0x0005f169) bg_list_pane_g5_ParamLimits

0xda8f,	// (0x0005f169) bg_list_pane_g5

0x0004,

0xf979,	// (0x00061053) bg_list_pane_g_ParamLimits

0xf979,	// (0x00061053) bg_list_pane_g

0xda28,	// (0x0005f102) list_double2_graphic_large_graphic_pane_ParamLimits

0xda28,	// (0x0005f102) list_double2_graphic_large_graphic_pane

0xda28,	// (0x0005f102) list_double2_graphic_pane_ParamLimits

0xda28,	// (0x0005f102) list_double2_graphic_pane

0xda28,	// (0x0005f102) list_double2_large_graphic_pane_ParamLimits

0xda28,	// (0x0005f102) list_double2_large_graphic_pane

0xda28,	// (0x0005f102) list_double2_pane_ParamLimits

0xda28,	// (0x0005f102) list_double2_pane

0xda28,	// (0x0005f102) list_double_graphic_heading_pane_ParamLimits

0xda28,	// (0x0005f102) list_double_graphic_heading_pane

0xda28,	// (0x0005f102) list_double_graphic_pane_ParamLimits

0xda28,	// (0x0005f102) list_double_graphic_pane

0xda28,	// (0x0005f102) list_double_heading_pane_ParamLimits

0xda28,	// (0x0005f102) list_double_heading_pane

0xda28,	// (0x0005f102) list_double_large_graphic_pane_ParamLimits

0xda28,	// (0x0005f102) list_double_large_graphic_pane

0xda28,	// (0x0005f102) list_double_number_pane_ParamLimits

0xda28,	// (0x0005f102) list_double_number_pane

0xda28,	// (0x0005f102) list_double_pane_ParamLimits

0xda28,	// (0x0005f102) list_double_pane

0xda28,	// (0x0005f102) list_double_time_pane_ParamLimits

0xda28,	// (0x0005f102) list_double_time_pane

0xda28,	// (0x0005f102) list_setting_number_pane_ParamLimits

0xda28,	// (0x0005f102) list_setting_number_pane

0xda28,	// (0x0005f102) list_setting_pane_ParamLimits

0xda28,	// (0x0005f102) list_setting_pane

0xda3a,	// (0x0005f114) list_single_2graphic_pane_ParamLimits

0xda3a,	// (0x0005f114) list_single_2graphic_pane

0xda3a,	// (0x0005f114) list_single_graphic_heading_pane_ParamLimits

0xda3a,	// (0x0005f114) list_single_graphic_heading_pane

0xda3a,	// (0x0005f114) list_single_graphic_pane_ParamLimits

0xda3a,	// (0x0005f114) list_single_graphic_pane

0xda3a,	// (0x0005f114) list_single_heading_pane_ParamLimits

0xda3a,	// (0x0005f114) list_single_heading_pane

0xda3a,	// (0x0005f114) list_single_large_graphic_pane_ParamLimits

0xda3a,	// (0x0005f114) list_single_large_graphic_pane

0xda3a,	// (0x0005f114) list_single_number_heading_pane_ParamLimits

0xda3a,	// (0x0005f114) list_single_number_heading_pane

0xda3a,	// (0x0005f114) list_single_number_pane_ParamLimits

0xda3a,	// (0x0005f114) list_single_number_pane

0xda3a,	// (0x0005f114) list_single_pane_ParamLimits

0xda3a,	// (0x0005f114) list_single_pane

0x2c4e,	// (0x00054328) list_highlight_pane_cp1

0x396d,	// (0x00055047) list_single_pane_g1_ParamLimits

0x396d,	// (0x00055047) list_single_pane_g1

0x3562,	// (0x00054c3c) list_single_pane_g2_ParamLimits

0x3562,	// (0x00054c3c) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00060c87) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00060c87) list_single_pane_g

0x1594,	// (0x00052c6e) list_single_pane_t1_ParamLimits

0x1594,	// (0x00052c6e) list_single_pane_t1

0x396d,	// (0x00055047) list_single_number_pane_g1_ParamLimits

0x396d,	// (0x00055047) list_single_number_pane_g1

0x3562,	// (0x00054c3c) list_single_number_pane_g2_ParamLimits

0x3562,	// (0x00054c3c) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00060c87) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00060c87) list_single_number_pane_g

0x112f,	// (0x00052809) list_single_number_pane_t1_ParamLimits

0x112f,	// (0x00052809) list_single_number_pane_t1

0x14da,	// (0x00052bb4) list_single_number_pane_t2_ParamLimits

0x14da,	// (0x00052bb4) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x00061014) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x00061014) list_single_number_pane_t

0xea67,	// (0x00060141) list_single_graphic_pane_g1_ParamLimits

0xea67,	// (0x00060141) list_single_graphic_pane_g1

0x396d,	// (0x00055047) list_single_graphic_pane_g2_ParamLimits

0x396d,	// (0x00055047) list_single_graphic_pane_g2

0x3562,	// (0x00054c3c) list_single_graphic_pane_g3_ParamLimits

0x3562,	// (0x00054c3c) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00060c76) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00060c76) list_single_graphic_pane_g

0xea73,	// (0x0006014d) list_single_graphic_pane_t1_ParamLimits

0xea73,	// (0x0006014d) list_single_graphic_pane_t1

0xea89,	// (0x00060163) list_single_heading_pane_g1_ParamLimits

0xea89,	// (0x00060163) list_single_heading_pane_g1

0x3562,	// (0x00054c3c) list_single_heading_pane_g2_ParamLimits

0x3562,	// (0x00054c3c) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00060c7d) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00060c7d) list_single_heading_pane_g

0xea9c,	// (0x00060176) list_single_heading_pane_t1_ParamLimits

0xea9c,	// (0x00060176) list_single_heading_pane_t1

0x356e,	// (0x00054c48) list_single_heading_pane_t2_ParamLimits

0x356e,	// (0x00054c48) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00060c82) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00060c82) list_single_heading_pane_t

0x396d,	// (0x00055047) list_single_number_heading_pane_g1_ParamLimits

0x396d,	// (0x00055047) list_single_number_heading_pane_g1

0x3562,	// (0x00054c3c) list_single_number_heading_pane_g2_ParamLimits

0x3562,	// (0x00054c3c) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00060c87) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00060c87) list_single_number_heading_pane_g

0xeab2,	// (0x0006018c) list_single_number_heading_pane_t1_ParamLimits

0xeab2,	// (0x0006018c) list_single_number_heading_pane_t1

0xeac8,	// (0x000601a2) list_single_number_heading_pane_t2_ParamLimits

0xeac8,	// (0x000601a2) list_single_number_heading_pane_t2

0xeada,	// (0x000601b4) list_single_number_heading_pane_t3_ParamLimits

0xeada,	// (0x000601b4) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00060c8c) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00060c8c) list_single_number_heading_pane_t

0xeaec,	// (0x000601c6) list_single_graphic_heading_pane_g1_ParamLimits

0xeaec,	// (0x000601c6) list_single_graphic_heading_pane_g1

0xb9a6,	// (0x0005d080) list_single_graphic_heading_pane_g4_ParamLimits

0xb9a6,	// (0x0005d080) list_single_graphic_heading_pane_g4

0x3562,	// (0x00054c3c) list_single_graphic_heading_pane_g5_ParamLimits

0x3562,	// (0x00054c3c) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00060c93) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00060c93) list_single_graphic_heading_pane_g

0xeab2,	// (0x0006018c) list_single_graphic_heading_pane_t1_ParamLimits

0xeab2,	// (0x0006018c) list_single_graphic_heading_pane_t1

0x3591,	// (0x00054c6b) list_single_graphic_heading_pane_t2_ParamLimits

0x3591,	// (0x00054c6b) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00060c9a) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00060c9a) list_single_graphic_heading_pane_t

0x36aa,	// (0x00054d84) list_single_large_graphic_pane_g1_ParamLimits

0x36aa,	// (0x00054d84) list_single_large_graphic_pane_g1

0x396d,	// (0x00055047) list_single_large_graphic_pane_g2_ParamLimits

0x396d,	// (0x00055047) list_single_large_graphic_pane_g2

0x3562,	// (0x00054c3c) list_single_large_graphic_pane_g3_ParamLimits

0x3562,	// (0x00054c3c) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00060c9f) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00060c9f) list_single_large_graphic_pane_g

0x54f2,	// (0x00056bcc) wait_border_pane_g2_copy1

0xb9b7,	// (0x0005d091) list_single_large_graphic_pane_g4_cp2

0x1744,	// (0x00052e1e) list_single_large_graphic_pane_t1_ParamLimits

0x1744,	// (0x00052e1e) list_single_large_graphic_pane_t1

0x3979,	// (0x00055053) list_double_pane_g1_ParamLimits

0x3979,	// (0x00055053) list_double_pane_g1

0x35d6,	// (0x00054cb0) list_double_pane_g2_ParamLimits

0x35d6,	// (0x00054cb0) list_double_pane_g2

0x0001,

0xf5cc,	// (0x00060ca6) list_double_pane_g_ParamLimits

0xf5cc,	// (0x00060ca6) list_double_pane_g

0xb9bf,	// (0x0005d099) list_double_pane_t1_ParamLimits

0xb9bf,	// (0x0005d099) list_double_pane_t1

0xb9d5,	// (0x0005d0af) list_double_pane_t2_ParamLimits

0xb9d5,	// (0x0005d0af) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00060cab) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00060cab) list_double_pane_t

0xb9e7,	// (0x0005d0c1) list_double2_pane_g1_ParamLimits

0xb9e7,	// (0x0005d0c1) list_double2_pane_g1

0x014f,	// (0x00051829) list_double2_pane_g2_ParamLimits

0x014f,	// (0x00051829) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00060cb0) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00060cb0) list_double2_pane_g

0xb9f8,	// (0x0005d0d2) list_double2_pane_t1_ParamLimits

0xb9f8,	// (0x0005d0d2) list_double2_pane_t1

0xba0e,	// (0x0005d0e8) list_double2_pane_t2_ParamLimits

0xba0e,	// (0x0005d0e8) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00060cb5) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00060cb5) list_double2_pane_t

0x3979,	// (0x00055053) list_double_number_pane_g1_ParamLimits

0x3979,	// (0x00055053) list_double_number_pane_g1

0x35d6,	// (0x00054cb0) list_double_number_pane_g2_ParamLimits

0x35d6,	// (0x00054cb0) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x00060ca6) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x00060ca6) list_double_number_pane_g

0xba20,	// (0x0005d0fa) list_double_number_pane_t1_ParamLimits

0xba20,	// (0x0005d0fa) list_double_number_pane_t1

0xeaf8,	// (0x000601d2) list_double_number_pane_t2_ParamLimits

0xeaf8,	// (0x000601d2) list_double_number_pane_t2

0xba32,	// (0x0005d10c) list_double_number_pane_t3_ParamLimits

0xba32,	// (0x0005d10c) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00060cba) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00060cba) list_double_number_pane_t

0xeb0e,	// (0x000601e8) list_double_graphic_pane_g1_ParamLimits

0xeb0e,	// (0x000601e8) list_double_graphic_pane_g1

0xba44,	// (0x0005d11e) list_double_graphic_pane_g2_ParamLimits

0xba44,	// (0x0005d11e) list_double_graphic_pane_g2

0xba53,	// (0x0005d12d) list_double_graphic_pane_g3_ParamLimits

0xba53,	// (0x0005d12d) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00060cc1) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00060cc1) list_double_graphic_pane_g

0xba6b,	// (0x0005d145) list_double_graphic_pane_t1_ParamLimits

0xba6b,	// (0x0005d145) list_double_graphic_pane_t1

0xba81,	// (0x0005d15b) list_double_graphic_pane_t2_ParamLimits

0xba81,	// (0x0005d15b) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00060cca) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00060cca) list_double_graphic_pane_t

0xba93,	// (0x0005d16d) list_double2_graphic_pane_g1_ParamLimits

0xba93,	// (0x0005d16d) list_double2_graphic_pane_g1

0x6eba,	// (0x00058594) list_double2_graphic_pane_g2_ParamLimits

0x6eba,	// (0x00058594) list_double2_graphic_pane_g2

0xba9f,	// (0x0005d179) list_double2_graphic_pane_g3_ParamLimits

0xba9f,	// (0x0005d179) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00060ccf) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00060ccf) list_double2_graphic_pane_g

0xbaab,	// (0x0005d185) list_double2_graphic_pane_t1_ParamLimits

0xbaab,	// (0x0005d185) list_double2_graphic_pane_t1

0xbac1,	// (0x0005d19b) list_double2_graphic_pane_t2_ParamLimits

0xbac1,	// (0x0005d19b) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00060cd6) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00060cd6) list_double2_graphic_pane_t

0xbad3,	// (0x0005d1ad) list_double_large_graphic_pane_g1_ParamLimits

0xbad3,	// (0x0005d1ad) list_double_large_graphic_pane_g1

0xbaf2,	// (0x0005d1cc) list_double_large_graphic_pane_g2_ParamLimits

0xbaf2,	// (0x0005d1cc) list_double_large_graphic_pane_g2

0x35d6,	// (0x00054cb0) list_double_large_graphic_pane_g3_ParamLimits

0x35d6,	// (0x00054cb0) list_double_large_graphic_pane_g3

0xbb08,	// (0x0005d1e2) list_double_large_graphic_pane_g4_ParamLimits

0xbb08,	// (0x0005d1e2) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00060cdb) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00060cdb) list_double_large_graphic_pane_g

0xbb1b,	// (0x0005d1f5) list_double_large_graphic_pane_t1_ParamLimits

0xbb1b,	// (0x0005d1f5) list_double_large_graphic_pane_t1

0xbb34,	// (0x0005d20e) list_double_large_graphic_pane_t2_ParamLimits

0xbb34,	// (0x0005d20e) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00060ce6) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00060ce6) list_double_large_graphic_pane_t

0xbb46,	// (0x0005d220) list_double2_large_graphic_pane_g1_ParamLimits

0xbb46,	// (0x0005d220) list_double2_large_graphic_pane_g1

0xbb52,	// (0x0005d22c) list_double2_large_graphic_pane_g2_ParamLimits

0xbb52,	// (0x0005d22c) list_double2_large_graphic_pane_g2

0xba9f,	// (0x0005d179) list_double2_large_graphic_pane_g3_ParamLimits

0xba9f,	// (0x0005d179) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00060ceb) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00060ceb) list_double2_large_graphic_pane_g

0xbb63,	// (0x0005d23d) list_double2_large_graphic_pane_t1_ParamLimits

0xbb63,	// (0x0005d23d) list_double2_large_graphic_pane_t1

0xbb79,	// (0x0005d253) list_double2_large_graphic_pane_t2_ParamLimits

0xbb79,	// (0x0005d253) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x00060cf2) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x00060cf2) list_double2_large_graphic_pane_t

0xbb8b,	// (0x0005d265) list_double_heading_pane_g1_ParamLimits

0xbb8b,	// (0x0005d265) list_double_heading_pane_g1

0xbb9c,	// (0x0005d276) list_double_heading_pane_g2_ParamLimits

0xbb9c,	// (0x0005d276) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x00060cf7) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x00060cf7) list_double_heading_pane_g

0xbba8,	// (0x0005d282) list_double_heading_pane_t1_ParamLimits

0xbba8,	// (0x0005d282) list_double_heading_pane_t1

0xba0e,	// (0x0005d0e8) list_double_heading_pane_t2_ParamLimits

0xba0e,	// (0x0005d0e8) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x00060cfc) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x00060cfc) list_double_heading_pane_t

0xeb1a,	// (0x000601f4) list_double_graphic_heading_pane_g1_ParamLimits

0xeb1a,	// (0x000601f4) list_double_graphic_heading_pane_g1

0xbb8b,	// (0x0005d265) list_double_graphic_heading_pane_g2_ParamLimits

0xbb8b,	// (0x0005d265) list_double_graphic_heading_pane_g2

0xbb9c,	// (0x0005d276) list_double_graphic_heading_pane_g3_ParamLimits

0xbb9c,	// (0x0005d276) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x00060d01) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x00060d01) list_double_graphic_heading_pane_g

0xbbbe,	// (0x0005d298) list_double_graphic_heading_pane_t1_ParamLimits

0xbbbe,	// (0x0005d298) list_double_graphic_heading_pane_t1

0xbac1,	// (0x0005d19b) list_double_graphic_heading_pane_t2_ParamLimits

0xbac1,	// (0x0005d19b) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x00060d08) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x00060d08) list_double_graphic_heading_pane_t

0xbbd4,	// (0x0005d2ae) list_double_time_pane_g1_ParamLimits

0xbbd4,	// (0x0005d2ae) list_double_time_pane_g1

0xeb26,	// (0x00060200) list_double_time_pane_g2_ParamLimits

0xeb26,	// (0x00060200) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00060d0d) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00060d0d) list_double_time_pane_g

0xbbe5,	// (0x0005d2bf) list_double_time_pane_t1_ParamLimits

0xbbe5,	// (0x0005d2bf) list_double_time_pane_t1

0xbbfb,	// (0x0005d2d5) list_double_time_pane_t2_ParamLimits

0xbbfb,	// (0x0005d2d5) list_double_time_pane_t2

0xbc0d,	// (0x0005d2e7) list_double_time_pane_t3_ParamLimits

0xbc0d,	// (0x0005d2e7) list_double_time_pane_t3

0xbc1f,	// (0x0005d2f9) list_double_time_pane_t4_ParamLimits

0xbc1f,	// (0x0005d2f9) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00060d12) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00060d12) list_double_time_pane_t

0x0143,	// (0x0005181d) list_setting_pane_g1_ParamLimits

0x0143,	// (0x0005181d) list_setting_pane_g1

0x014f,	// (0x00051829) list_setting_pane_g2_ParamLimits

0x014f,	// (0x00051829) list_setting_pane_g2

0x0001,

0xf641,	// (0x00060d1b) list_setting_pane_g_ParamLimits

0xf641,	// (0x00060d1b) list_setting_pane_g

0xbc31,	// (0x0005d30b) list_setting_pane_t1_ParamLimits

0xbc31,	// (0x0005d30b) list_setting_pane_t1

0xbc4b,	// (0x0005d325) list_setting_pane_t2_ParamLimits

0xbc4b,	// (0x0005d325) list_setting_pane_t2

0x0002,

0xf646,	// (0x00060d20) list_setting_pane_t_ParamLimits

0xf646,	// (0x00060d20) list_setting_pane_t

0xbc8a,	// (0x0005d364) set_value_pane_cp_ParamLimits

0xbc8a,	// (0x0005d364) set_value_pane_cp

0x01c0,	// (0x0005189a) list_setting_number_pane_g1_ParamLimits

0x01c0,	// (0x0005189a) list_setting_number_pane_g1

0x01cc,	// (0x000518a6) list_setting_number_pane_g2_ParamLimits

0x01cc,	// (0x000518a6) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x00060d27) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x00060d27) list_setting_number_pane_g

0xbc96,	// (0x0005d370) list_setting_number_pane_t1_ParamLimits

0xbc96,	// (0x0005d370) list_setting_number_pane_t1

0xbcaf,	// (0x0005d389) list_setting_number_pane_t2_ParamLimits

0xbcaf,	// (0x0005d389) list_setting_number_pane_t2

0xbcc9,	// (0x0005d3a3) list_setting_number_pane_t3_ParamLimits

0xbcc9,	// (0x0005d3a3) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00060d2c) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00060d2c) list_setting_number_pane_t

0xbc8a,	// (0x0005d364) set_value_pane_ParamLimits

0xbc8a,	// (0x0005d364) set_value_pane

0x3985,	// (0x0005505f) bg_set_opt_pane_ParamLimits

0x3985,	// (0x0005505f) bg_set_opt_pane

0x024e,	// (0x00051928) set_value_pane_t1

0x39a6,	// (0x00055080) slider_set_pane_cp3

0x39af,	// (0x00055089) volume_small_pane_cp

0x39b8,	// (0x00055092) list_form_gen_pane

0x39c1,	// (0x0005509b) scroll_pane_cp8

0xbd0c,	// (0x0005d3e6) form_field_data_pane_ParamLimits

0xbd0c,	// (0x0005d3e6) form_field_data_pane

0xbd25,	// (0x0005d3ff) form_field_data_wide_pane_ParamLimits

0xbd25,	// (0x0005d3ff) form_field_data_wide_pane

0xbd45,	// (0x0005d41f) form_field_popup_pane_ParamLimits

0xbd45,	// (0x0005d41f) form_field_popup_pane

0xbd5d,	// (0x0005d437) form_field_popup_wide_pane_ParamLimits

0xbd5d,	// (0x0005d437) form_field_popup_wide_pane

0x02ea,	// (0x000519c4) form_field_slider_pane_ParamLimits

0x02ea,	// (0x000519c4) form_field_slider_pane

0x02fd,	// (0x000519d7) form_field_slider_wide_pane_ParamLimits

0x02fd,	// (0x000519d7) form_field_slider_wide_pane

0x39d2,	// (0x000550ac) data_form_pane

0xbd86,	// (0x0005d460) form_field_data_pane_t1

0x39de,	// (0x000550b8) input_focus_pane

0x0332,	// (0x00051a0c) data_form_wide_pane

0x034f,	// (0x00051a29) form_field_data_wide_pane_t1

0x332c,	// (0x00054a06) input_focus_pane_cp6

0xbda0,	// (0x0005d47a) form_field_popup_pane_t1

0x39de,	// (0x000550b8) input_focus_pane_cp7

0x3a00,	// (0x000550da) list_form_pane

0x0391,	// (0x00051a6b) form_field_popup_wide_pane_t1

0x39de,	// (0x000550b8) input_focus_pane_cp8

0x3a0c,	// (0x000550e6) list_form_wide_pane

0xbdc2,	// (0x0005d49c) form_field_slider_pane_t1_ParamLimits

0xbdc2,	// (0x0005d49c) form_field_slider_pane_t1

0xbdda,	// (0x0005d4b4) form_field_slider_pane_t2_ParamLimits

0xbdda,	// (0x0005d4b4) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00060d3c) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00060d3c) form_field_slider_pane_t

0x2fa9,	// (0x00054683) input_focus_pane_cp9_ParamLimits

0x2fa9,	// (0x00054683) input_focus_pane_cp9

0xbdef,	// (0x0005d4c9) slider_cont_pane_ParamLimits

0xbdef,	// (0x0005d4c9) slider_cont_pane

0x3a18,	// (0x000550f2) form_field_slider_wide_pane_t1_ParamLimits

0x3a18,	// (0x000550f2) form_field_slider_wide_pane_t1

0x03ed,	// (0x00051ac7) form_field_slider_wide_pane_t2_ParamLimits

0x03ed,	// (0x00051ac7) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00060d41) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00060d41) form_field_slider_wide_pane_t

0x2fa9,	// (0x00054683) input_focus_pane_cp10_ParamLimits

0x2fa9,	// (0x00054683) input_focus_pane_cp10

0xbe03,	// (0x0005d4dd) slider_cont_pane_cp1_ParamLimits

0xbe03,	// (0x0005d4dd) slider_cont_pane_cp1

0xbe17,	// (0x0005d4f1) slider_form_pane_cp

0x3a2a,	// (0x00055104) input_focus_pane_g1

0x3a32,	// (0x0005510c) input_focus_pane_g2

0x3a3a,	// (0x00055114) input_focus_pane_g3

0x3a42,	// (0x0005511c) input_focus_pane_g4

0x3a4a,	// (0x00055124) input_focus_pane_g5

0x3a52,	// (0x0005512c) input_focus_pane_g6

0x3a5a,	// (0x00055134) input_focus_pane_g7

0x3a62,	// (0x0005513c) input_focus_pane_g8

0x3a6a,	// (0x00055144) input_focus_pane_g9

0xdcee,	// (0x0005f3c8) input_focus_pane_g10

0x0009,

0xf66c,	// (0x00060d46) input_focus_pane_g

0x54fb,	// (0x00056bd5) wait_border_pane_g3_copy1

0xbe1f,	// (0x0005d4f9) data_form_pane_t1

0xdcee,	// (0x0005f3c8) wait_anim_pane_g1_copy1

0xc745,	// (0x0005de1f) data_form_wide_pane_t1

0xbe39,	// (0x0005d513) list_form_graphic_pane_cp_ParamLimits

0xbe39,	// (0x0005d513) list_form_graphic_pane_cp

0x641b,	// (0x00057af5) slider_form_pane_g1

0x6424,	// (0x00057afe) slider_form_pane_g2

0x0006,

0xf96a,	// (0x00061044) slider_form_pane_g

0xbe39,	// (0x0005d513) list_form_graphic_pane_ParamLimits

0xbe39,	// (0x0005d513) list_form_graphic_pane

0x046b,	// (0x00051b45) list_form_graphic_pane_g1

0x0473,	// (0x00051b4d) list_form_graphic_pane_t1_ParamLimits

0x0473,	// (0x00051b4d) list_form_graphic_pane_t1

0x2d2e,	// (0x00054408) list_highlight_pane_cp5_ParamLimits

0x2d2e,	// (0x00054408) list_highlight_pane_cp5

0x0488,	// (0x00051b62) find_pane_g1

0x3a72,	// (0x0005514c) input_find_pane

0x0491,	// (0x00051b6b) input_find_pane_g1_ParamLimits

0x0491,	// (0x00051b6b) input_find_pane_g1

0x049d,	// (0x00051b77) input_find_pane_t1_ParamLimits

0x049d,	// (0x00051b77) input_find_pane_t1

0x04b2,	// (0x00051b8c) input_find_pane_t2_ParamLimits

0x04b2,	// (0x00051b8c) input_find_pane_t2

0x0001,

0xf681,	// (0x00060d5b) input_find_pane_t_ParamLimits

0xf681,	// (0x00060d5b) input_find_pane_t

0x3a7b,	// (0x00055155) input_focus_pane_cp5_ParamLimits

0x3a7b,	// (0x00055155) input_focus_pane_cp5

0x3a9a,	// (0x00055174) bg_popup_window_pane_cp2_ParamLimits

0x3a9a,	// (0x00055174) bg_popup_window_pane_cp2

0x3aa7,	// (0x00055181) listscroll_menu_pane_ParamLimits

0x3aa7,	// (0x00055181) listscroll_menu_pane

0xcfb7,	// (0x0005e691) popup_submenu_window_ParamLimits

0xcfb7,	// (0x0005e691) popup_submenu_window

0x3adf,	// (0x000551b9) find_popup_pane_g1

0x3ae7,	// (0x000551c1) input_popup_find_pane_cp

0x3af1,	// (0x000551cb) input_focus_pane_cp4_ParamLimits

0x3af1,	// (0x000551cb) input_focus_pane_cp4

0x3b0b,	// (0x000551e5) input_popup_find_pane_t1_ParamLimits

0x3b0b,	// (0x000551e5) input_popup_find_pane_t1

0x2c4e,	// (0x00054328) bg_popup_sub_pane_cp

0x3b39,	// (0x00055213) listscroll_popup_sub_pane

0x3b41,	// (0x0005521b) list_submenu_pane_ParamLimits

0x3b41,	// (0x0005521b) list_submenu_pane

0x3b52,	// (0x0005522c) scroll_pane_cp4

0x3b5a,	// (0x00055234) list_single_popup_submenu_pane_ParamLimits

0x3b5a,	// (0x00055234) list_single_popup_submenu_pane

0x3b6e,	// (0x00055248) list_single_popup_submenu_pane_g1

0x3b76,	// (0x00055250) list_single_popup_submenu_pane_t1_ParamLimits

0x3b76,	// (0x00055250) list_single_popup_submenu_pane_t1

0x2fa9,	// (0x00054683) bg_active_tab_pane_cp1_ParamLimits

0x2fa9,	// (0x00054683) bg_active_tab_pane_cp1

0x3b8b,	// (0x00055265) tabs_2_active_pane_g1

0xcff1,	// (0x0005e6cb) tabs_2_active_pane_t1

0x2fa9,	// (0x00054683) bg_passive_tab_pane_cp1_ParamLimits

0x2fa9,	// (0x00054683) bg_passive_tab_pane_cp1

0x3b8b,	// (0x00055265) tabs_2_passive_pane_g1

0xcff1,	// (0x0005e6cb) tabs_2_passive_pane_t1

0x2d2e,	// (0x00054408) bg_active_tab_pane_cp4

0xd003,	// (0x0005e6dd) tabs_2_long_active_pane_t1

0x49ac,	// (0x00056086) bg_passive_tab_pane_cp4

0x1172,	// (0x0005284c) list_single_midp_graphic_pane_g4_ParamLimits

0x2d2e,	// (0x00054408) bg_active_tab_pane_cp5

0xd016,	// (0x0005e6f0) tabs_3_long_active_pane_t1

0x49ac,	// (0x00056086) bg_passive_tab_pane_cp5

0x1172,	// (0x0005284c) list_single_midp_graphic_pane_g4

0x2d2e,	// (0x00054408) bg_popup_window_pane_cp13_ParamLimits

0x2d2e,	// (0x00054408) bg_popup_window_pane_cp13

0x3bed,	// (0x000552c7) listscroll_popup_fast_pane_ParamLimits

0x3bed,	// (0x000552c7) listscroll_popup_fast_pane

0x3bfc,	// (0x000552d6) grid_popup_fast_pane_ParamLimits

0x3bfc,	// (0x000552d6) grid_popup_fast_pane

0x3c0e,	// (0x000552e8) scroll_pane_cp9_ParamLimits

0x3c0e,	// (0x000552e8) scroll_pane_cp9

0x7d44,	// (0x0005941e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7d44,	// (0x0005941e) list_single_graphic_hl_pane_t1_cp2

0x3c32,	// (0x0005530c) input_focus_pane_cp20_ParamLimits

0x3c32,	// (0x0005530c) input_focus_pane_cp20

0x3c40,	// (0x0005531a) query_popup_data_pane_t1_ParamLimits

0x3c40,	// (0x0005531a) query_popup_data_pane_t1

0x3c53,	// (0x0005532d) query_popup_data_pane_t2_ParamLimits

0x3c53,	// (0x0005532d) query_popup_data_pane_t2

0x3c99,	// (0x00055373) query_popup_data_pane_t3_ParamLimits

0x3c99,	// (0x00055373) query_popup_data_pane_t3

0x3cda,	// (0x000553b4) query_popup_data_pane_t4_ParamLimits

0x3cda,	// (0x000553b4) query_popup_data_pane_t4

0x3d16,	// (0x000553f0) query_popup_data_pane_t5_ParamLimits

0x3d16,	// (0x000553f0) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00060d60) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00060d60) query_popup_data_pane_t

0x3a2a,	// (0x00055104) bg_set_opt_pane_g1

0x3a32,	// (0x0005510c) bg_set_opt_pane_g2

0x3a3a,	// (0x00055114) bg_set_opt_pane_g3

0x3a42,	// (0x0005511c) bg_set_opt_pane_g4

0x3a4a,	// (0x00055124) bg_set_opt_pane_g5

0x3a52,	// (0x0005512c) bg_set_opt_pane_g6

0x3a5a,	// (0x00055134) bg_set_opt_pane_g7

0x3a62,	// (0x0005513c) bg_set_opt_pane_g8

0x3a6a,	// (0x00055144) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x00060d6b) bg_set_opt_pane_g

0x07d2,	// (0x00051eac) control_top_pane_stacon_ParamLimits

0x07d2,	// (0x00051eac) control_top_pane_stacon

0x0825,	// (0x00051eff) signal_pane_stacon_ParamLimits

0x0825,	// (0x00051eff) signal_pane_stacon

0x4321,	// (0x000559fb) stacon_top_pane_g1_ParamLimits

0x4321,	// (0x000559fb) stacon_top_pane_g1

0x084a,	// (0x00051f24) title_pane_stacon_ParamLimits

0x084a,	// (0x00051f24) title_pane_stacon

0x0874,	// (0x00051f4e) uni_indicator_pane_stacon_ParamLimits

0x0874,	// (0x00051f4e) uni_indicator_pane_stacon

0x0889,	// (0x00051f63) battery_pane_stacon_ParamLimits

0x0889,	// (0x00051f63) battery_pane_stacon

0x08cd,	// (0x00051fa7) control_bottom_pane_stacon_ParamLimits

0x08cd,	// (0x00051fa7) control_bottom_pane_stacon

0x08f0,	// (0x00051fca) navi_pane_stacon_ParamLimits

0x08f0,	// (0x00051fca) navi_pane_stacon

0x4343,	// (0x00055a1d) stacon_bottom_pane_g1_ParamLimits

0x4343,	// (0x00055a1d) stacon_bottom_pane_g1

0x04c7,	// (0x00051ba1) aid_levels_signal_lsc_ParamLimits

0x04c7,	// (0x00051ba1) aid_levels_signal_lsc

0x04dd,	// (0x00051bb7) signal_pane_stacon_g1_ParamLimits

0x04dd,	// (0x00051bb7) signal_pane_stacon_g1

0x04f1,	// (0x00051bcb) signal_pane_stacon_g2_ParamLimits

0x04f1,	// (0x00051bcb) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x00060d7e) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00060d7e) signal_pane_stacon_g

0x0526,	// (0x00051c00) title_pane_stacon_t1_ParamLimits

0x0526,	// (0x00051c00) title_pane_stacon_t1

0x3d5a,	// (0x00055434) uni_indicator_pane_stacon_g1

0x3d64,	// (0x0005543e) uni_indicator_pane_stacon_g2

0x3d6e,	// (0x00055448) uni_indicator_pane_stacon_g3

0x3d78,	// (0x00055452) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00060d8a) uni_indicator_pane_stacon_g

0x054b,	// (0x00051c25) control_top_pane_stacon_g1

0x0553,	// (0x00051c2d) control_top_pane_stacon_t1_ParamLimits

0x0553,	// (0x00051c2d) control_top_pane_stacon_t1

0x058a,	// (0x00051c64) aid_levels_battery_lsc_ParamLimits

0x058a,	// (0x00051c64) aid_levels_battery_lsc

0x05a1,	// (0x00051c7b) battery_pane_stacon_g1_ParamLimits

0x05a1,	// (0x00051c7b) battery_pane_stacon_g1

0x05b4,	// (0x00051c8e) battery_pane_stacon_g2_ParamLimits

0x05b4,	// (0x00051c8e) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x00060d93) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x00060d93) battery_pane_stacon_g

0x05f2,	// (0x00051ccc) navi_icon_pane_stacon

0x0606,	// (0x00051ce0) navi_navi_pane_stacon

0x05f2,	// (0x00051ccc) navi_text_pane_stacon

0x054b,	// (0x00051c25) control_bottom_pane_stacon_g1

0x061a,	// (0x00051cf4) control_bottom_pane_stacon_t1_ParamLimits

0x061a,	// (0x00051cf4) control_bottom_pane_stacon_t1

0xd028,	// (0x0005e702) grid_app_pane_ParamLimits

0xd028,	// (0x0005e702) grid_app_pane

0xd060,	// (0x0005e73a) scroll_pane_cp15_ParamLimits

0xd060,	// (0x0005e73a) scroll_pane_cp15

0xd075,	// (0x0005e74f) cell_app_pane_ParamLimits

0xd075,	// (0x0005e74f) cell_app_pane

0xd0ba,	// (0x0005e794) cell_app_pane_g1_ParamLimits

0xd0ba,	// (0x0005e794) cell_app_pane_g1

0x3e1d,	// (0x000554f7) cell_app_pane_g2_ParamLimits

0x3e1d,	// (0x000554f7) cell_app_pane_g2

0x0001,

0xf6be,	// (0x00060d98) cell_app_pane_g_ParamLimits

0xf6be,	// (0x00060d98) cell_app_pane_g

0xd0de,	// (0x0005e7b8) cell_app_pane_t1_ParamLimits

0xd0de,	// (0x0005e7b8) cell_app_pane_t1

0x3e40,	// (0x0005551a) grid_highlight_pane_ParamLimits

0x3e40,	// (0x0005551a) grid_highlight_pane

0x3a2a,	// (0x00055104) cell_highlight_pane_g1

0x3a32,	// (0x0005510c) cell_highlight_pane_g2

0x3a3a,	// (0x00055114) cell_highlight_pane_g3

0x3a42,	// (0x0005511c) cell_highlight_pane_g4

0x3a4a,	// (0x00055124) cell_highlight_pane_g5

0x3a52,	// (0x0005512c) cell_highlight_pane_g6

0x3a5a,	// (0x00055134) cell_highlight_pane_g7

0x3a62,	// (0x0005513c) cell_highlight_pane_g8

0x3a6a,	// (0x00055144) cell_highlight_pane_g9

0xdcee,	// (0x0005f3c8) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x00060d46) cell_highlight_pane_g

0x3e51,	// (0x0005552b) bg_scroll_pane

0x0664,	// (0x00051d3e) scroll_handle_pane

0x3e98,	// (0x00055572) scroll_bg_pane_g1

0x3ead,	// (0x00055587) scroll_bg_pane_g2

0x3ec5,	// (0x0005559f) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00060d9d) scroll_bg_pane_g

0x3eda,	// (0x000555b4) scroll_handle_focus_pane_ParamLimits

0x3eda,	// (0x000555b4) scroll_handle_focus_pane

0x3e98,	// (0x00055572) scroll_handle_pane_g1

0x3ee7,	// (0x000555c1) scroll_handle_pane_g2

0x3ec5,	// (0x0005559f) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x00060da4) scroll_handle_pane_g

0x3af1,	// (0x000551cb) bg_popup_sub_pane_cp21_ParamLimits

0x3af1,	// (0x000551cb) bg_popup_sub_pane_cp21

0x3efb,	// (0x000555d5) popup_fep_japan_predictive_window_t1_ParamLimits

0x3efb,	// (0x000555d5) popup_fep_japan_predictive_window_t1

0x3f15,	// (0x000555ef) popup_fep_japan_predictive_window_t2_ParamLimits

0x3f15,	// (0x000555ef) popup_fep_japan_predictive_window_t2

0x3f48,	// (0x00055622) popup_fep_japan_predictive_window_t3_ParamLimits

0x3f48,	// (0x00055622) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00060dab) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00060dab) popup_fep_japan_predictive_window_t

0x2c4e,	// (0x00054328) bg_popup_sub_pane_cp23

0x3f7f,	// (0x00055659) listscroll_japin_cand_pane

0x3f87,	// (0x00055661) popup_fep_japan_candidate_window_t1

0x3f95,	// (0x0005566f) candidate_pane_ParamLimits

0x3f95,	// (0x0005566f) candidate_pane

0x3fa7,	// (0x00055681) scroll_pane_cp30

0x3faf,	// (0x00055689) list_single_popup_jap_candidate_pane_ParamLimits

0x3faf,	// (0x00055689) list_single_popup_jap_candidate_pane

0x2c4e,	// (0x00054328) list_highlight_pane_cp30

0x3fc4,	// (0x0005569e) list_single_popup_jap_candidate_pane_t1

0x3fd3,	// (0x000556ad) level_1_signal

0x3fe5,	// (0x000556bf) level_2_signal

0x3ff8,	// (0x000556d2) level_3_signal

0x400b,	// (0x000556e5) level_4_signal

0x401e,	// (0x000556f8) level_5_signal

0x4031,	// (0x0005570b) level_6_signal

0x4044,	// (0x0005571e) level_7_signal

0x3fd3,	// (0x000556ad) level_1_battery

0x3fe5,	// (0x000556bf) level_2_battery

0x3ff8,	// (0x000556d2) level_3_battery

0x400b,	// (0x000556e5) level_4_battery

0x401e,	// (0x000556f8) level_5_battery

0x4031,	// (0x0005570b) level_6_battery

0x4044,	// (0x0005571e) level_7_battery

0x406f,	// (0x00055749) list_menu_pane_ParamLimits

0x406f,	// (0x00055749) list_menu_pane

0x4085,	// (0x0005575f) scroll_pane_cp25_ParamLimits

0x4085,	// (0x0005575f) scroll_pane_cp25

0x409e,	// (0x00055778) list_double2_graphic_pane_cp2_ParamLimits

0x409e,	// (0x00055778) list_double2_graphic_pane_cp2

0x409e,	// (0x00055778) list_double2_large_graphic_pane_cp2_ParamLimits

0x409e,	// (0x00055778) list_double2_large_graphic_pane_cp2

0x409e,	// (0x00055778) list_double2_pane_cp2_ParamLimits

0x409e,	// (0x00055778) list_double2_pane_cp2

0x409e,	// (0x00055778) list_double_graphic_pane_cp2_ParamLimits

0x409e,	// (0x00055778) list_double_graphic_pane_cp2

0x409e,	// (0x00055778) list_double_large_graphic_pane_cp2_ParamLimits

0x409e,	// (0x00055778) list_double_large_graphic_pane_cp2

0x409e,	// (0x00055778) list_double_number_pane_cp2_ParamLimits

0x409e,	// (0x00055778) list_double_number_pane_cp2

0x409e,	// (0x00055778) list_double_pane_cp2_ParamLimits

0x409e,	// (0x00055778) list_double_pane_cp2

0xd0f5,	// (0x0005e7cf) list_single_2graphic_pane_cp2_ParamLimits

0xd0f5,	// (0x0005e7cf) list_single_2graphic_pane_cp2

0xd0f5,	// (0x0005e7cf) list_single_graphic_heading_pane_cp2_ParamLimits

0xd0f5,	// (0x0005e7cf) list_single_graphic_heading_pane_cp2

0xd0f5,	// (0x0005e7cf) list_single_graphic_pane_cp2_ParamLimits

0xd0f5,	// (0x0005e7cf) list_single_graphic_pane_cp2

0xd0f5,	// (0x0005e7cf) list_single_heading_pane_cp2_ParamLimits

0xd0f5,	// (0x0005e7cf) list_single_heading_pane_cp2

0x40db,	// (0x000557b5) list_single_large_graphic_pane_cp2_ParamLimits

0x40db,	// (0x000557b5) list_single_large_graphic_pane_cp2

0xd0f5,	// (0x0005e7cf) list_single_number_heading_pane_cp2_ParamLimits

0xd0f5,	// (0x0005e7cf) list_single_number_heading_pane_cp2

0xd0f5,	// (0x0005e7cf) list_single_number_pane_cp2_ParamLimits

0xd0f5,	// (0x0005e7cf) list_single_number_pane_cp2

0xd107,	// (0x0005e7e1) list_single_pane_cp2_ParamLimits

0xd107,	// (0x0005e7e1) list_single_pane_cp2

0x4170,	// (0x0005584a) bg_popup_sub_pane_cp22

0x0716,	// (0x00051df0) popup_side_volume_key_window_g1

0x0740,	// (0x00051e1a) popup_side_volume_key_window_t1

0x075c,	// (0x00051e36) volume_small_pane_cp1

0x2fa9,	// (0x00054683) bg_popup_sub_pane_cp24_ParamLimits

0x2fa9,	// (0x00054683) bg_popup_sub_pane_cp24

0x4186,	// (0x00055860) fep_china_uni_candidate_pane_ParamLimits

0x4186,	// (0x00055860) fep_china_uni_candidate_pane

0x419a,	// (0x00055874) fep_china_uni_entry_pane

0x41aa,	// (0x00055884) popup_fep_china_uni_window_g1

0x41c6,	// (0x000558a0) fep_china_uni_entry_pane_g1

0x41ce,	// (0x000558a8) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00060ddc) fep_china_uni_entry_pane_g

0x41d6,	// (0x000558b0) fep_entry_item_pane

0x41e0,	// (0x000558ba) fep_candidate_item_pane

0x41e8,	// (0x000558c2) fep_china_uni_candidate_pane_g1

0x41f0,	// (0x000558ca) fep_china_uni_candidate_pane_g2

0x41f8,	// (0x000558d2) fep_china_uni_candidate_pane_g3

0x4200,	// (0x000558da) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00060de1) fep_china_uni_candidate_pane_g

0xdcee,	// (0x0005f3c8) fep_entry_item_pane_g1

0x4208,	// (0x000558e2) fep_entry_item_pane_t1_ParamLimits

0x4208,	// (0x000558e2) fep_entry_item_pane_t1

0x421e,	// (0x000558f8) fep_candidate_item_pane_t1_ParamLimits

0x421e,	// (0x000558f8) fep_candidate_item_pane_t1

0x4233,	// (0x0005590d) fep_candidate_item_pane_t2_ParamLimits

0x4233,	// (0x0005590d) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x00060dea) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x00060dea) fep_candidate_item_pane_t

0x2d2e,	// (0x00054408) list_highlight_pane_cp31_ParamLimits

0x2d2e,	// (0x00054408) list_highlight_pane_cp31

0x4245,	// (0x0005591f) level_1_signal_lsc

0x424e,	// (0x00055928) level_2_signal_lsc

0x4257,	// (0x00055931) level_3_signal_lsc

0x4260,	// (0x0005593a) level_4_signal_lsc

0x4269,	// (0x00055943) level_5_signal_lsc

0x4272,	// (0x0005594c) level_6_signal_lsc

0x427b,	// (0x00055955) level_7_signal_lsc

0x427b,	// (0x00055955) level_1_battery_lsc

0x4284,	// (0x0005595e) level_2_battery_lsc

0x428d,	// (0x00055967) level_3_battery_lsc

0x4296,	// (0x00055970) level_4_battery_lsc

0x429f,	// (0x00055979) level_5_battery_lsc

0x42a8,	// (0x00055982) level_6_battery_lsc

0x4245,	// (0x0005591f) level_7_battery_lsc

0x42b1,	// (0x0005598b) scroll_handle_focus_pane_g1

0x42ba,	// (0x00055994) scroll_handle_focus_pane_g2

0x42c3,	// (0x0005599d) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00060def) scroll_handle_focus_pane_g

0x0764,	// (0x00051e3e) list_single_2graphic_pane_g1_ParamLimits

0x0764,	// (0x00051e3e) list_single_2graphic_pane_g1

0xb9a6,	// (0x0005d080) list_single_2graphic_pane_g2_ParamLimits

0xb9a6,	// (0x0005d080) list_single_2graphic_pane_g2

0x3562,	// (0x00054c3c) list_single_2graphic_pane_g3_ParamLimits

0x3562,	// (0x00054c3c) list_single_2graphic_pane_g3

0x0770,	// (0x00051e4a) list_single_2graphic_pane_g4_ParamLimits

0x0770,	// (0x00051e4a) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x00060df6) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x00060df6) list_single_2graphic_pane_g

0x077c,	// (0x00051e56) list_single_2graphic_pane_t1_ParamLimits

0x077c,	// (0x00051e56) list_single_2graphic_pane_t1

0xbe4b,	// (0x0005d525) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbe4b,	// (0x0005d525) list_double2_graphic_large_graphic_pane_g1

0xbb52,	// (0x0005d22c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbb52,	// (0x0005d22c) list_double2_graphic_large_graphic_pane_g2

0xba9f,	// (0x0005d179) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xba9f,	// (0x0005d179) list_double2_graphic_large_graphic_pane_g3

0xbe5d,	// (0x0005d537) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbe5d,	// (0x0005d537) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x00060dff) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x00060dff) list_double2_graphic_large_graphic_pane_g

0xbe69,	// (0x0005d543) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbe69,	// (0x0005d543) list_double2_graphic_large_graphic_pane_t1

0xbe7f,	// (0x0005d559) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbe7f,	// (0x0005d559) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x00060e08) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x00060e08) list_double2_graphic_large_graphic_pane_t

0x440e,	// (0x00055ae8) popup_fast_swap_window_ParamLimits

0x440e,	// (0x00055ae8) popup_fast_swap_window

0x442a,	// (0x00055b04) popup_side_volume_key_window

0x4446,	// (0x00055b20) stacon_top_pane

0x4450,	// (0x00055b2a) status_pane_ParamLimits

0x4450,	// (0x00055b2a) status_pane

0xcfa1,	// (0x0005e67b) status_small_pane

0x2c4e,	// (0x00054328) control_pane

0x2c4e,	// (0x00054328) stacon_bottom_pane

0x39c1,	// (0x0005509b) scroll_pane_cp121

0x39b8,	// (0x00055092) set_content_pane

0x42cc,	// (0x000559a6) bg_active_tab_pane_g1_cp1

0x42d5,	// (0x000559af) bg_active_tab_pane_g2_cp1

0x42de,	// (0x000559b8) bg_active_tab_pane_g3_cp1

0x42cc,	// (0x000559a6) bg_passive_tab_pane_g1_cp1

0x42d5,	// (0x000559af) bg_passive_tab_pane_g2_cp1

0x42de,	// (0x000559b8) bg_passive_tab_pane_g3_cp1

0x42e7,	// (0x000559c1) bg_active_tab_pane_g1_cp2

0x42d5,	// (0x000559af) bg_active_tab_pane_g2_cp2

0x42f0,	// (0x000559ca) bg_active_tab_pane_g3_cp2

0x42e7,	// (0x000559c1) bg_passive_tab_pane_g1_cp2

0x42d5,	// (0x000559af) bg_passive_tab_pane_g2_cp2

0x42f0,	// (0x000559ca) bg_passive_tab_pane_g3_cp2

0x42f9,	// (0x000559d3) bg_active_tab_pane_g1_cp3

0x42d5,	// (0x000559af) bg_active_tab_pane_g2_cp3

0x4302,	// (0x000559dc) bg_active_tab_pane_g3_cp3

0x42f9,	// (0x000559d3) bg_passive_tab_pane_g1_cp3

0x42d5,	// (0x000559af) bg_passive_tab_pane_g2_cp3

0x4302,	// (0x000559dc) bg_passive_tab_pane_g3_cp3

0x430b,	// (0x000559e5) bg_active_tab_pane_g1_cp4

0x42d5,	// (0x000559af) bg_active_tab_pane_g2_cp4

0x4316,	// (0x000559f0) bg_active_tab_pane_g3_cp4

0x430b,	// (0x000559e5) bg_passive_tab_pane_g1_cp4

0x42d5,	// (0x000559af) bg_passive_tab_pane_g2_cp4

0x4316,	// (0x000559f0) bg_passive_tab_pane_g3_cp4

0x435f,	// (0x00055a39) bg_active_tab_pane_g1_cp5

0x42d5,	// (0x000559af) bg_active_tab_pane_g2_cp5

0x4368,	// (0x00055a42) bg_active_tab_pane_g3_cp5

0x435f,	// (0x00055a39) bg_passive_tab_pane_g1_cp5

0x42d5,	// (0x000559af) bg_passive_tab_pane_g2_cp5

0x4368,	// (0x00055a42) bg_passive_tab_pane_g3_cp5

0x6a0d,	// (0x000580e7) list_set_graphic_pane_ParamLimits

0x6a0d,	// (0x000580e7) list_set_graphic_pane

0x2c4e,	// (0x00054328) bg_set_opt_pane_cp4

0x4391,	// (0x00055a6b) list_set_graphic_pane_g1_ParamLimits

0x4391,	// (0x00055a6b) list_set_graphic_pane_g1

0x439d,	// (0x00055a77) list_set_graphic_pane_g2_ParamLimits

0x439d,	// (0x00055a77) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00060e0d) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00060e0d) list_set_graphic_pane_g

0x0009,

0xfa9c,	// (0x00061176) volume_small_pane_cp_g

0x43c1,	// (0x00055a9b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x43c1,	// (0x00055a9b) list_double2_large_graphic_pane_g1_cp2

0x43cd,	// (0x00055aa7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x43cd,	// (0x00055aa7) list_double2_large_graphic_pane_g2_cp2

0x43de,	// (0x00055ab8) list_double2_large_graphic_pane_g3_cp2

0x43e6,	// (0x00055ac0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x43e6,	// (0x00055ac0) list_double2_large_graphic_pane_t1_cp2

0x43fc,	// (0x00055ad6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x43fc,	// (0x00055ad6) list_double2_large_graphic_pane_t2_cp2

0x5fce,	// (0x000576a8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5fce,	// (0x000576a8) list_double_large_graphic_pane_g1_cp2

0x5fdf,	// (0x000576b9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5fdf,	// (0x000576b9) list_double_large_graphic_pane_g2_cp2

0x456c,	// (0x00055c46) list_double_large_graphic_pane_g3_cp2

0x5ff0,	// (0x000576ca) list_double_large_graphic_pane_g4_cp

0x5ff8,	// (0x000576d2) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5ff8,	// (0x000576d2) list_double_large_graphic_pane_t1_cp2

0x600f,	// (0x000576e9) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x600f,	// (0x000576e9) list_double_large_graphic_pane_t2_cp2

0x445e,	// (0x00055b38) list_double2_graphic_pane_g1_cp2_ParamLimits

0x445e,	// (0x00055b38) list_double2_graphic_pane_g1_cp2

0x446c,	// (0x00055b46) list_double2_graphic_pane_g2_cp2_ParamLimits

0x446c,	// (0x00055b46) list_double2_graphic_pane_g2_cp2

0x447d,	// (0x00055b57) list_double2_graphic_pane_g3_cp2

0x4487,	// (0x00055b61) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4487,	// (0x00055b61) list_double2_graphic_pane_t1_cp2

0x449d,	// (0x00055b77) list_double2_graphic_pane_t2_cp2_ParamLimits

0x449d,	// (0x00055b77) list_double2_graphic_pane_t2_cp2

0x44af,	// (0x00055b89) list_single_number_heading_pane_g1_cp2_ParamLimits

0x44af,	// (0x00055b89) list_single_number_heading_pane_g1_cp2

0x44bb,	// (0x00055b95) list_single_number_heading_pane_g2_cp2

0x44c3,	// (0x00055b9d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x44c3,	// (0x00055b9d) list_single_number_heading_pane_t1_cp2

0x44d9,	// (0x00055bb3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x44d9,	// (0x00055bb3) list_single_number_heading_pane_t2_cp2

0x44eb,	// (0x00055bc5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x44eb,	// (0x00055bc5) list_single_number_heading_pane_t3_cp2

0x44af,	// (0x00055b89) list_single_heading_pane_g1_cp2_ParamLimits

0x44af,	// (0x00055b89) list_single_heading_pane_g1_cp2

0x44bb,	// (0x00055b95) list_single_heading_pane_g2_cp2

0x44c3,	// (0x00055b9d) list_single_heading_pane_t1_cp2_ParamLimits

0x44c3,	// (0x00055b9d) list_single_heading_pane_t1_cp2

0x5dd6,	// (0x000574b0) list_single_heading_pane_t2_cp2_ParamLimits

0x5dd6,	// (0x000574b0) list_single_heading_pane_t2_cp2

0x5d1e,	// (0x000573f8) list_double_graphic_pane_g1_cp2_ParamLimits

0x5d1e,	// (0x000573f8) list_double_graphic_pane_g1_cp2

0x5d2a,	// (0x00057404) list_double_graphic_pane_g2_cp2_ParamLimits

0x5d2a,	// (0x00057404) list_double_graphic_pane_g2_cp2

0x5d39,	// (0x00057413) list_double_graphic_pane_g3_cp2

0x5d41,	// (0x0005741b) list_double_graphic_pane_t1_cp2_ParamLimits

0x5d41,	// (0x0005741b) list_double_graphic_pane_t1_cp2

0x5d57,	// (0x00057431) list_double_graphic_pane_t2_cp2_ParamLimits

0x5d57,	// (0x00057431) list_double_graphic_pane_t2_cp2

0x4560,	// (0x00055c3a) list_double_number_pane_g1_cp2_ParamLimits

0x4560,	// (0x00055c3a) list_double_number_pane_g1_cp2

0x456c,	// (0x00055c46) list_double_number_pane_g2_cp2

0x5ce2,	// (0x000573bc) list_double_number_pane_t1_cp2_ParamLimits

0x5ce2,	// (0x000573bc) list_double_number_pane_t1_cp2

0x5cf6,	// (0x000573d0) list_double_number_pane_t2_cp2_ParamLimits

0x5cf6,	// (0x000573d0) list_double_number_pane_t2_cp2

0x5d0c,	// (0x000573e6) list_double_number_pane_t3_cp2_ParamLimits

0x5d0c,	// (0x000573e6) list_double_number_pane_t3_cp2

0x5bcb,	// (0x000572a5) list_single_graphic_pane_g1_cp2_ParamLimits

0x5bcb,	// (0x000572a5) list_single_graphic_pane_g1_cp2

0x45cd,	// (0x00055ca7) list_single_graphic_pane_g2_cp2_ParamLimits

0x45cd,	// (0x00055ca7) list_single_graphic_pane_g2_cp2

0x45d9,	// (0x00055cb3) list_single_graphic_pane_g3_cp2

0x5ba1,	// (0x0005727b) list_single_graphic_pane_t1_cp2_ParamLimits

0x5ba1,	// (0x0005727b) list_single_graphic_pane_t1_cp2

0x45cd,	// (0x00055ca7) list_single_number_pane_g1_cp2_ParamLimits

0x45cd,	// (0x00055ca7) list_single_number_pane_g1_cp2

0x45d9,	// (0x00055cb3) list_single_number_pane_g2_cp2

0x5ba1,	// (0x0005727b) list_single_number_pane_t1_cp2_ParamLimits

0x5ba1,	// (0x0005727b) list_single_number_pane_t1_cp2

0x5bb7,	// (0x00057291) list_single_number_pane_t2_cp2_ParamLimits

0x5bb7,	// (0x00057291) list_single_number_pane_t2_cp2

0x43cd,	// (0x00055aa7) list_double2_pane_g1_cp2_ParamLimits

0x43cd,	// (0x00055aa7) list_double2_pane_g1_cp2

0x43de,	// (0x00055ab8) list_double2_pane_g2_cp2

0x4538,	// (0x00055c12) list_double2_pane_t1_cp2_ParamLimits

0x4538,	// (0x00055c12) list_double2_pane_t1_cp2

0x454e,	// (0x00055c28) list_double2_pane_t2_cp2_ParamLimits

0x454e,	// (0x00055c28) list_double2_pane_t2_cp2

0x4560,	// (0x00055c3a) list_double_pane_g1_cp2_ParamLimits

0x4560,	// (0x00055c3a) list_double_pane_g1_cp2

0x456c,	// (0x00055c46) list_double_pane_g2_cp2

0x4574,	// (0x00055c4e) list_double_pane_t1_cp2_ParamLimits

0x4574,	// (0x00055c4e) list_double_pane_t1_cp2

0x458a,	// (0x00055c64) list_double_pane_t2_cp2_ParamLimits

0x458a,	// (0x00055c64) list_double_pane_t2_cp2

0x45bd,	// (0x00055c97) list_single_pane_cp2_g3

0x45cd,	// (0x00055ca7) list_single_pane_g1_cp2_ParamLimits

0x45cd,	// (0x00055ca7) list_single_pane_g1_cp2

0x45d9,	// (0x00055cb3) list_single_pane_g2_cp2

0x45e1,	// (0x00055cbb) list_single_pane_t1_cp2_ParamLimits

0x45e1,	// (0x00055cbb) list_single_pane_t1_cp2

0x45f9,	// (0x00055cd3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x45f9,	// (0x00055cd3) list_single_large_graphic_pane_g1_cp2

0x396d,	// (0x00055047) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x396d,	// (0x00055047) list_single_large_graphic_pane_g2_cp2

0x4605,	// (0x00055cdf) list_single_large_graphic_pane_g3_cp2

0x460d,	// (0x00055ce7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x460d,	// (0x00055ce7) list_single_large_graphic_pane_g4_cp1

0x4627,	// (0x00055d01) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4627,	// (0x00055d01) list_single_large_graphic_pane_t1_cp2

0x5b6d,	// (0x00057247) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5b6d,	// (0x00057247) list_single_graphic_heading_pane_g1_cp2

0x5b3a,	// (0x00057214) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5b3a,	// (0x00057214) list_single_graphic_heading_pane_g4_cp2

0x45d9,	// (0x00055cb3) list_single_graphic_heading_pane_g5_cp2

0x5b79,	// (0x00057253) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5b79,	// (0x00057253) list_single_graphic_heading_pane_t1_cp2

0x5b8f,	// (0x00057269) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5b8f,	// (0x00057269) list_single_graphic_heading_pane_t2_cp2

0x5b2e,	// (0x00057208) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5b2e,	// (0x00057208) list_single_2graphic_pane_g1_cp2

0x5b3a,	// (0x00057214) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5b3a,	// (0x00057214) list_single_2graphic_pane_g2_cp2

0x45d9,	// (0x00055cb3) list_single_2graphic_pane_g3_cp2

0x5b4b,	// (0x00057225) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5b4b,	// (0x00057225) list_single_2graphic_pane_g4_cp2

0x5b57,	// (0x00057231) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5b57,	// (0x00057231) list_single_2graphic_pane_t1_cp2

0xdcee,	// (0x0005f3c8) list_highlight_pane_g10_cp1

0x5706,	// (0x00056de0) list_highlight_pane_g1_cp1

0x570e,	// (0x00056de8) list_highlight_pane_g2_cp1

0x5716,	// (0x00056df0) list_highlight_pane_g3_cp1

0x571e,	// (0x00056df8) list_highlight_pane_g4_cp1

0x5726,	// (0x00056e00) list_highlight_pane_g5_cp1

0x572e,	// (0x00056e08) list_highlight_pane_g6_cp1

0x5736,	// (0x00056e10) list_highlight_pane_g7_cp1

0x573e,	// (0x00056e18) list_highlight_pane_g8_cp1

0x5746,	// (0x00056e20) list_highlight_pane_g9_cp1

0xd752,	// (0x0005ee2c) form_field_slider_pane_t3

0xd760,	// (0x0005ee3a) form_field_slider_pane_t4

0x5642,	// (0x00056d1c) slider_form_pane_ParamLimits

0x5642,	// (0x00056d1c) slider_form_pane

0x2c4e,	// (0x00054328) control_abbreviations

0x2c4e,	// (0x00054328) control_conventions

0x2c4e,	// (0x00054328) control_definitions

0x2c4e,	// (0x00054328) format_table_attribute

0x5e20,	// (0x000574fa) bg_popup_preview_window_pane_g9

0x2c4e,	// (0x00054328) format_table_data2

0x2c4e,	// (0x00054328) format_table_data3

0x2c4e,	// (0x00054328) format_table_data_example

0x0008,

0x2c4e,	// (0x00054328) intro_purpose

0xf8ca,	// (0x00060fa4) bg_popup_preview_window_pane_g

0x2c4e,	// (0x00054328) texts_category

0x2c4e,	// (0x00054328) texts_graphics

0x463d,	// (0x00055d17) text_digital

0x464c,	// (0x00055d26) text_primary

0x465b,	// (0x00055d35) text_primary_small

0x466a,	// (0x00055d44) text_secondary

0x4679,	// (0x00055d53) text_title

0x6541,	// (0x00057c1b) bg_passive_tab_pane_g1_cp3_srt

0x42d5,	// (0x000559af) bg_passive_tab_pane_g2_cp3_srt

0x654a,	// (0x00057c24) bg_passive_tab_pane_g3_cp3_srt

0x2fa9,	// (0x00054683) bg_active_tab_pane_cp3_srt_ParamLimits

0x2fa9,	// (0x00054683) bg_active_tab_pane_cp3_srt

0x6553,	// (0x00057c2d) tabs_4_active_pane_srt_g1

0xdaa5,	// (0x0005f17f) tabs_4_active_pane_srt_t1_ParamLimits

0xdaa5,	// (0x0005f17f) tabs_4_active_pane_srt_t1

0x6541,	// (0x00057c1b) bg_active_tab_pane_g1_cp3_copy1

0x42d5,	// (0x000559af) bg_active_tab_pane_g2_cp3_copy1

0x654a,	// (0x00057c24) bg_active_tab_pane_g3_cp3_copy1

0x2d2e,	// (0x00054408) tabs_2_long_active_pane_srt_ParamLimits

0x2d2e,	// (0x00054408) tabs_2_long_active_pane_srt

0x2d2e,	// (0x00054408) tabs_2_long_passive_pane_srt_ParamLimits

0x2d2e,	// (0x00054408) tabs_2_long_passive_pane_srt

0x49ac,	// (0x00056086) bg_passive_tab_pane_cp4_srt_ParamLimits

0x49ac,	// (0x00056086) bg_passive_tab_pane_cp4_srt

0x624e,	// (0x00057928) bg_passive_tab_pane_g1_cp4_srt

0x42d5,	// (0x000559af) bg_passive_tab_pane_g2_cp4_srt

0x6257,	// (0x00057931) bg_passive_tab_pane_g3_cp4_srt

0x2d2e,	// (0x00054408) bg_active_tab_pane_cp4_srt_ParamLimits

0x2d2e,	// (0x00054408) bg_active_tab_pane_cp4_srt

0xd8bd,	// (0x0005ef97) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd8bd,	// (0x0005ef97) tabs_2_long_active_pane_srt_t1

0x624e,	// (0x00057928) bg_active_tab_pane_g1_cp4_srt

0x42d5,	// (0x000559af) bg_active_tab_pane_g2_cp4_srt

0x6257,	// (0x00057931) bg_active_tab_pane_g3_cp4_srt

0x2fa9,	// (0x00054683) tabs_3_long_active_pane_srt_ParamLimits

0x2fa9,	// (0x00054683) tabs_3_long_active_pane_srt

0x2fa9,	// (0x00054683) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2fa9,	// (0x00054683) tabs_3_long_passive_pane_cp_srt

0x2fa9,	// (0x00054683) tabs_3_long_passive_pane_srt_ParamLimits

0x2fa9,	// (0x00054683) tabs_3_long_passive_pane_srt

0x49ac,	// (0x00056086) bg_passive_tab_pane_cp5_srt_ParamLimits

0x49ac,	// (0x00056086) bg_passive_tab_pane_cp5_srt

0x435f,	// (0x00055a39) bg_passive_tab_pane_g1_cp5_srt

0x42d5,	// (0x000559af) bg_passive_tab_pane_g2_cp5_srt

0x4368,	// (0x00055a42) bg_passive_tab_pane_g3_cp5_srt

0x2d2e,	// (0x00054408) bg_active_tab_pane_cp5_srt_ParamLimits

0x2d2e,	// (0x00054408) bg_active_tab_pane_cp5_srt

0xd8a7,	// (0x0005ef81) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd8a7,	// (0x0005ef81) tabs_3_long_active_pane_srt_t1

0x435f,	// (0x00055a39) bg_active_tab_pane_g1_cp5_srt

0x42d5,	// (0x000559af) bg_active_tab_pane_g2_cp5_srt

0x4368,	// (0x00055a42) bg_active_tab_pane_g3_cp5_srt

0x622e,	// (0x00057908) navi_text_pane_srt_t1

0x6226,	// (0x00057900) navi_icon_pane_srt_g1

0x484e,	// (0x00055f28) midp_editing_number_pane_srt

0x4688,	// (0x00055d62) midp_ticker_pane_srt

0x4856,	// (0x00055f30) midp_ticker_pane_srt_g1

0x485e,	// (0x00055f38) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00060e2c) midp_ticker_pane_srt_g

0x4866,	// (0x00055f40) midp_ticker_pane_srt_t1

0x6217,	// (0x000578f1) midp_editing_number_pane_t1_copy1

0xd194,	// (0x0005e86e) listscroll_midp_pane

0xd194,	// (0x0005e86e) midp_form_pane

0x4700,	// (0x00055dda) midp_info_popup_window_ParamLimits

0x4700,	// (0x00055dda) midp_info_popup_window

0x3af1,	// (0x000551cb) bg_popup_sub_pane_cp50_ParamLimits

0x3af1,	// (0x000551cb) bg_popup_sub_pane_cp50

0x532a,	// (0x00056a04) listscroll_midp_info_pane_ParamLimits

0x532a,	// (0x00056a04) listscroll_midp_info_pane

0x530a,	// (0x000569e4) listscroll_form_midp_pane_ParamLimits

0x530a,	// (0x000569e4) listscroll_form_midp_pane

0x5316,	// (0x000569f0) scroll_bar_cp050

0x530a,	// (0x000569e4) list_midp_pane

0x6fc8,	// (0x000586a2) signal_pane_g2_cp

0x5224,	// (0x000568fe) listscroll_midp_info_pane_t1_ParamLimits

0x5224,	// (0x000568fe) listscroll_midp_info_pane_t1

0x523c,	// (0x00056916) listscroll_midp_info_pane_t2_ParamLimits

0x523c,	// (0x00056916) listscroll_midp_info_pane_t2

0x527a,	// (0x00056954) listscroll_midp_info_pane_t3_ParamLimits

0x527a,	// (0x00056954) listscroll_midp_info_pane_t3

0x52b4,	// (0x0005698e) listscroll_midp_info_pane_t4_ParamLimits

0x52b4,	// (0x0005698e) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x00060edf) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x00060edf) listscroll_midp_info_pane_t

0x3b52,	// (0x0005522c) scroll_pane_cp21

0x51c2,	// (0x0005689c) form_midp_field_choice_group_pane

0x51cb,	// (0x000568a5) form_midp_field_text_pane

0x520a,	// (0x000568e4) form_midp_field_time_pane

0x5212,	// (0x000568ec) form_midp_gauge_slider_pane

0x521b,	// (0x000568f5) form_midp_gauge_wait_pane

0x2c4e,	// (0x00054328) form_midp_image_pane

0xc730,	// (0x0005de0a) list_single_midp_pane_ParamLimits

0xc730,	// (0x0005de0a) list_single_midp_pane

0xd731,	// (0x0005ee0b) form_midp_field_text_pane_t1

0x4f4a,	// (0x00056624) input_focus_pane_cp050

0x51b1,	// (0x0005688b) list_midp_form_text_pane

0x5149,	// (0x00056823) form_midp_field_choice_group_pane_t1

0x5157,	// (0x00056831) input_focus_pane_cp051

0x516b,	// (0x00056845) list_midp_choice_pane

0x2c4e,	// (0x00054328) status_idle_pane

0x512d,	// (0x00056807) form_midp_field_time_pane_t1

0xdcee,	// (0x0005f3c8) wait_anim_pane_g2_copy1

0x513b,	// (0x00056815) form_midp_field_time_pane_t2

0x0001,

0x47ae,	// (0x00055e88) aid_navinavi_width_2_pane

0xf800,	// (0x00060eda) form_midp_field_time_pane_t

0x2c4e,	// (0x00054328) input_focus_pane_cp052

0x2c4e,	// (0x00054328) bg_input_focus_pane_cp040

0x50ed,	// (0x000567c7) form_midp_gauge_slider_pane_t1

0x50fb,	// (0x000567d5) form_midp_gauge_slider_pane_t2

0xd715,	// (0x0005edef) form_midp_gauge_slider_pane_t3

0xd723,	// (0x0005edfd) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x00060ed1) form_midp_gauge_slider_pane_t

0x5125,	// (0x000567ff) form_midp_slider_pane

0x2d2e,	// (0x00054408) bg_input_focus_pane_cp041_ParamLimits

0x2d2e,	// (0x00054408) bg_input_focus_pane_cp041

0x50ba,	// (0x00056794) form_midp_gauge_wait_pane_t1_ParamLimits

0x50ba,	// (0x00056794) form_midp_gauge_wait_pane_t1

0x50cc,	// (0x000567a6) form_midp_gauge_wait_pane_t2_ParamLimits

0x50cc,	// (0x000567a6) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x00060ecc) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x00060ecc) form_midp_gauge_wait_pane_t

0x50de,	// (0x000567b8) form_midp_wait_pane_ParamLimits

0x50de,	// (0x000567b8) form_midp_wait_pane

0x5084,	// (0x0005675e) form_midp_image_pane_g1

0x508d,	// (0x00056767) form_midp_image_pane_t1

0x509c,	// (0x00056776) form_midp_image_pane_t2

0x50ab,	// (0x00056785) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x00060ec5) form_midp_image_pane_t

0x507b,	// (0x00056755) list_single_midp_pane_g1

0x12ed,	// (0x000529c7) list_single_midp_pane_t1

0xd701,	// (0x0005eddb) list_midp_form_item_pane_ParamLimits

0xd701,	// (0x0005eddb) list_midp_form_item_pane

0x4756,	// (0x00055e30) list_midp_form_item_pane_t1

0x4765,	// (0x00055e3f) midp_ticker_pane_g1

0x4771,	// (0x00055e4b) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00060e12) midp_ticker_pane_g

0x477d,	// (0x00055e57) midp_ticker_pane_t1

0x6468,	// (0x00057b42) midp_editing_number_pane_t1

0x6446,	// (0x00057b20) midp_editing_number_pane

0x6455,	// (0x00057b2f) midp_ticker_pane

0x6207,	// (0x000578e1) ai_message_heading_pane

0x2c4e,	// (0x00054328) bg_popup_window_pane_cp14

0x620f,	// (0x000578e9) listscroll_ai_message_pane

0x6191,	// (0x0005786b) ai_message_heading_pane_g1_ParamLimits

0x6191,	// (0x0005786b) ai_message_heading_pane_g1

0x619d,	// (0x00057877) ai_message_heading_pane_g2_ParamLimits

0x619d,	// (0x00057877) ai_message_heading_pane_g2

0x61a9,	// (0x00057883) ai_message_heading_pane_g3_ParamLimits

0x61a9,	// (0x00057883) ai_message_heading_pane_g3

0x61b5,	// (0x0005788f) ai_message_heading_pane_g4_ParamLimits

0x61b5,	// (0x0005788f) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x00061006) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x00061006) ai_message_heading_pane_g

0x61c1,	// (0x0005789b) ai_message_heading_pane_t1_ParamLimits

0x61c1,	// (0x0005789b) ai_message_heading_pane_t1

0x61db,	// (0x000578b5) ai_message_heading_pane_t2_ParamLimits

0x61db,	// (0x000578b5) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0006100f) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0006100f) ai_message_heading_pane_t

0x61ed,	// (0x000578c7) bg_popup_heading_pane_cp1_ParamLimits

0x61ed,	// (0x000578c7) bg_popup_heading_pane_cp1

0x617f,	// (0x00057859) list_ai_message_pane_ParamLimits

0x617f,	// (0x00057859) list_ai_message_pane

0x3b52,	// (0x0005522c) scroll_pane_cp10

0x611b,	// (0x000577f5) list_ai_message_pane_g1

0x6123,	// (0x000577fd) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x00060fe3) list_ai_message_pane_g

0x612b,	// (0x00057805) list_ai_message_pane_t1_ParamLimits

0x612b,	// (0x00057805) list_ai_message_pane_t1

0x6140,	// (0x0005781a) list_ai_message_pane_t2_ParamLimits

0x6140,	// (0x0005781a) list_ai_message_pane_t2

0x6155,	// (0x0005782f) list_ai_message_pane_t3_ParamLimits

0x6155,	// (0x0005782f) list_ai_message_pane_t3

0x616a,	// (0x00057844) list_ai_message_pane_t4_ParamLimits

0x616a,	// (0x00057844) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x00060fe8) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x00060fe8) list_ai_message_pane_t

0xd886,	// (0x0005ef60) cell_ai_soft_ind_pane_ParamLimits

0xd886,	// (0x0005ef60) cell_ai_soft_ind_pane

0x478f,	// (0x00055e69) cell_ai_soft_ind_pane_g1_ParamLimits

0x478f,	// (0x00055e69) cell_ai_soft_ind_pane_g1

0x2c4e,	// (0x00054328) grid_highlight_cp1

0x479c,	// (0x00055e76) text_secondary_cp56_ParamLimits

0x479c,	// (0x00055e76) text_secondary_cp56

0x60db,	// (0x000577b5) example_general_pane_ParamLimits

0x60db,	// (0x000577b5) example_general_pane

0x60e7,	// (0x000577c1) example_parent_pane_g1_ParamLimits

0x60e7,	// (0x000577c1) example_parent_pane_g1

0x60f3,	// (0x000577cd) example_parent_pane_t1_ParamLimits

0x60f3,	// (0x000577cd) example_parent_pane_t1

0xc3da,	// (0x0005dab4) popup_preview_text_window_ParamLimits

0xc3da,	// (0x0005dab4) popup_preview_text_window

0x45c5,	// (0x00055c9f) list_single_pane_cp2_g4

0x3085,	// (0x0005475f) bg_popup_preview_window_pane_ParamLimits

0x3085,	// (0x0005475f) bg_popup_preview_window_pane

0x5e28,	// (0x00057502) popup_preview_text_window_t1_ParamLimits

0x5e28,	// (0x00057502) popup_preview_text_window_t1

0x5e46,	// (0x00057520) popup_preview_text_window_t2_ParamLimits

0x5e46,	// (0x00057520) popup_preview_text_window_t2

0x5e8f,	// (0x00057569) popup_preview_text_window_t3_ParamLimits

0x5e8f,	// (0x00057569) popup_preview_text_window_t3

0x5ed4,	// (0x000575ae) popup_preview_text_window_t4_ParamLimits

0x5ed4,	// (0x000575ae) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x00060fb7) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x00060fb7) popup_preview_text_window_t

0x5f52,	// (0x0005762c) scroll_pane_cp11

0x4ed6,	// (0x000565b0) bg_popup_preview_window_pane_g1

0x5de8,	// (0x000574c2) bg_popup_preview_window_pane_g2

0x5df0,	// (0x000574ca) bg_popup_preview_window_pane_g3

0x5df8,	// (0x000574d2) bg_popup_preview_window_pane_g4

0x5e00,	// (0x000574da) bg_popup_preview_window_pane_g5

0x5e08,	// (0x000574e2) bg_popup_preview_window_pane_g6

0x5e10,	// (0x000574ea) bg_popup_preview_window_pane_g7

0x5e18,	// (0x000574f2) bg_popup_preview_window_pane_g8

0xf269,	// (0x00060943) aid_popup_width_pane

0xc356,	// (0x0005da30) popup_midp_note_alarm_window_ParamLimits

0xc356,	// (0x0005da30) popup_midp_note_alarm_window

0x39d2,	// (0x000550ac) data_form_pane_ParamLimits

0xbd7c,	// (0x0005d456) form_field_data_pane_g1

0xbd86,	// (0x0005d460) form_field_data_pane_t1_ParamLimits

0x39de,	// (0x000550b8) input_focus_pane_ParamLimits

0x0332,	// (0x00051a0c) data_form_wide_pane_ParamLimits

0x0343,	// (0x00051a1d) form_field_data_wide_pane_g1

0x034f,	// (0x00051a29) form_field_data_wide_pane_t1_ParamLimits

0x332c,	// (0x00054a06) input_focus_pane_cp6_ParamLimits

0xcfe3,	// (0x0005e6bd) input_popup_find_pane_g1_ParamLimits

0xcfe3,	// (0x0005e6bd) input_popup_find_pane_g1

0x05c5,	// (0x00051c9f) aid_navi_side_left_pane

0x05da,	// (0x00051cb4) aid_navi_side_right_pane

0x5801,	// (0x00056edb) bg_popup_window_pane_cp30_ParamLimits

0x5801,	// (0x00056edb) bg_popup_window_pane_cp30

0x587b,	// (0x00056f55) popup_midp_note_alarm_window_g1_ParamLimits

0x587b,	// (0x00056f55) popup_midp_note_alarm_window_g1

0x58ab,	// (0x00056f85) popup_midp_note_alarm_window_t1_ParamLimits

0x58ab,	// (0x00056f85) popup_midp_note_alarm_window_t1

0x594c,	// (0x00057026) popup_midp_note_alarm_window_t2_ParamLimits

0x594c,	// (0x00057026) popup_midp_note_alarm_window_t2

0x59fa,	// (0x000570d4) popup_midp_note_alarm_window_t3_ParamLimits

0x59fa,	// (0x000570d4) popup_midp_note_alarm_window_t3

0x5a2c,	// (0x00057106) popup_midp_note_alarm_window_t4_ParamLimits

0x5a2c,	// (0x00057106) popup_midp_note_alarm_window_t4

0x5a52,	// (0x0005712c) popup_midp_note_alarm_window_t5_ParamLimits

0x5a52,	// (0x0005712c) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x00060f54) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x00060f54) popup_midp_note_alarm_window_t

0x5afe,	// (0x000571d8) wait_bar_pane_cp1_ParamLimits

0x5afe,	// (0x000571d8) wait_bar_pane_cp1

0x2c4e,	// (0x00054328) wait_anim_pane_copy1

0x2c4e,	// (0x00054328) wait_border_pane_copy1

0x54e7,	// (0x00056bc1) wait_border_pane_g1_copy1

0x0369,	// (0x00051a43) form_field_popup_pane_g1

0xbda0,	// (0x0005d47a) form_field_popup_pane_t1_ParamLimits

0x39de,	// (0x000550b8) input_focus_pane_cp7_ParamLimits

0x3a00,	// (0x000550da) list_form_pane_ParamLimits

0x0389,	// (0x00051a63) form_field_popup_wide_pane_g1

0x0391,	// (0x00051a6b) form_field_popup_wide_pane_t1_ParamLimits

0x39de,	// (0x000550b8) input_focus_pane_cp8_ParamLimits

0x3a0c,	// (0x000550e6) list_form_wide_pane_ParamLimits

0x65e3,	// (0x00057cbd) aid_size_cell_graphic_pane

0xbe1f,	// (0x0005d4f9) data_form_pane_t1_ParamLimits

0xc745,	// (0x0005de1f) data_form_wide_pane_t1_ParamLimits

0xd386,	// (0x0005ea60) bg_status_flat_pane

0xb64c,	// (0x0005cd26) title_pane_t1_ParamLimits

0x2cf6,	// (0x000543d0) title_pane_t2_ParamLimits

0x2d1c,	// (0x000543f6) title_pane_t3_ParamLimits

0xf532,	// (0x00060c0c) title_pane_t_ParamLimits

0x3fd3,	// (0x000556ad) level_1_signal_ParamLimits

0x3fe5,	// (0x000556bf) level_2_signal_ParamLimits

0x3ff8,	// (0x000556d2) level_3_signal_ParamLimits

0x400b,	// (0x000556e5) level_4_signal_ParamLimits

0x401e,	// (0x000556f8) level_5_signal_ParamLimits

0x4031,	// (0x0005570b) level_6_signal_ParamLimits

0x4044,	// (0x0005571e) level_7_signal_ParamLimits

0x3fd3,	// (0x000556ad) level_1_battery_ParamLimits

0x3fe5,	// (0x000556bf) level_2_battery_ParamLimits

0x3ff8,	// (0x000556d2) level_3_battery_ParamLimits

0x400b,	// (0x000556e5) level_4_battery_ParamLimits

0x401e,	// (0x000556f8) level_5_battery_ParamLimits

0x4031,	// (0x0005570b) level_6_battery_ParamLimits

0x4044,	// (0x0005571e) level_7_battery_ParamLimits

0x5706,	// (0x00056de0) bg_status_flat_pane_g1

0x570e,	// (0x00056de8) bg_status_flat_pane_g2

0x5716,	// (0x00056df0) bg_status_flat_pane_g3

0x571e,	// (0x00056df8) bg_status_flat_pane_g4

0x5726,	// (0x00056e00) bg_status_flat_pane_g5

0x572e,	// (0x00056e08) bg_status_flat_pane_g6

0x5736,	// (0x00056e10) bg_status_flat_pane_g7

0xb6d8,	// (0x0005cdb2) tabs_3_active_pane_t1_ParamLimits

0xb6d8,	// (0x0005cdb2) tabs_3_passive_pane_t1_ParamLimits

0xb6ea,	// (0x0005cdc4) tabs_4_active_pane_t1_ParamLimits

0xb6ea,	// (0x0005cdc4) tabs_4_1_passive_pane_t1_ParamLimits

0xcff1,	// (0x0005e6cb) tabs_2_active_pane_t1_ParamLimits

0xcff1,	// (0x0005e6cb) tabs_2_passive_pane_t1_ParamLimits

0x2d2e,	// (0x00054408) bg_active_tab_pane_cp4_ParamLimits

0xd003,	// (0x0005e6dd) tabs_2_long_active_pane_t1_ParamLimits

0x49ac,	// (0x00056086) bg_passive_tab_pane_cp4_ParamLimits

0x11ce,	// (0x000528a8) list_single_midp_graphic_pane_t1_ParamLimits

0x2d2e,	// (0x00054408) bg_active_tab_pane_cp5_ParamLimits

0xd016,	// (0x0005e6f0) tabs_3_long_active_pane_t1_ParamLimits

0x49ac,	// (0x00056086) bg_passive_tab_pane_cp5_ParamLimits

0x11ce,	// (0x000528a8) list_single_midp_graphic_pane_t1

0xd386,	// (0x0005ea60) bg_status_flat_pane_ParamLimits

0x4b66,	// (0x00056240) indicator_pane_cp2_ParamLimits

0x4b66,	// (0x00056240) indicator_pane_cp2

0xd504,	// (0x0005ebde) navi_pane_srt_ParamLimits

0xd504,	// (0x0005ebde) navi_pane_srt

0x4cb5,	// (0x0005638f) popup_clock_digital_analogue_window_cp1

0x2e0b,	// (0x000544e5) indicator_pane_t1

0x4688,	// (0x00055d62) copy_highlight_pane

0x4688,	// (0x00055d62) cursor_graphics_pane

0x4688,	// (0x00055d62) graphic_within_text_pane

0x4688,	// (0x00055d62) link_highlight_pane

0x5f15,	// (0x000575ef) popup_preview_text_window_t5_ParamLimits

0x5f15,	// (0x000575ef) popup_preview_text_window_t5

0x47b6,	// (0x00055e90) cursor_digital_pane

0x47b6,	// (0x00055e90) cursor_primary_pane

0x47c7,	// (0x00055ea1) cursor_primary_small_pane

0x47cf,	// (0x00055ea9) cursor_secondary_pane

0x47d7,	// (0x00055eb1) cursor_title_pane

0x47b6,	// (0x00055e90) link_highlight_digital_pane

0x47be,	// (0x00055e98) link_highlight_primary_pane

0x47c7,	// (0x00055ea1) link_highlight_primary_small_pane

0x47cf,	// (0x00055ea9) link_highlight_secondary_pane

0x47d7,	// (0x00055eb1) link_highlight_title_pane

0x47b6,	// (0x00055e90) copy_highlight_digital_pane

0x47b6,	// (0x00055e90) copy_highlight_primary_pane

0x47c7,	// (0x00055ea1) copy_highlight_primary_small_pane

0x47cf,	// (0x00055ea9) copy_highlight_secondary_pane

0x47d7,	// (0x00055eb1) copy_highlight_title_pane

0x47cf,	// (0x00055ea9) graphic_text_digital_pane

0x57a4,	// (0x00056e7e) graphic_text_primary_pane

0x57ad,	// (0x00056e87) graphic_text_primary_small_pane

0x47c7,	// (0x00055ea1) graphic_text_secondary_pane

0x47b6,	// (0x00055e90) graphic_text_title_pane

0xd239,	// (0x0005e913) cursor_primary_pane_g1

0x5796,	// (0x00056e70) cursor_text_primary_t1

0xd782,	// (0x0005ee5c) cursor_primary_small_pane_g1

0x5788,	// (0x00056e62) cursor_text_primary_small_t1

0xd778,	// (0x0005ee52) cursor_primary_small_pane_g1_copy1

0x5770,	// (0x00056e4a) cursor_text_primary_small_t1_copy1

0x574e,	// (0x00056e28) cursor_text_title_t1

0xd76e,	// (0x0005ee48) cursor_title_pane_g1

0xd239,	// (0x0005e913) cursor_digital_pane_g1

0x47e9,	// (0x00055ec3) cursor_text_digital_t1

0x480e,	// (0x00055ee8) link_highlight_primary_pane_g1

0x56f7,	// (0x00056dd1) link_highlight_primary_pane_t1

0x47f7,	// (0x00055ed1) link_highlight_primary_small_pane_g1

0x47ff,	// (0x00055ed9) link_highlight_primary_small_pane_t1

0x480e,	// (0x00055ee8) link_highlight_secondary_pane_g1

0x4816,	// (0x00055ef0) link_highlight_secondary_pane_t1

0x566b,	// (0x00056d45) link_highlight_title_pane_g1

0x5673,	// (0x00056d4d) link_highlight_title_pane_t1

0x5654,	// (0x00056d2e) link_highlight_digital_pane_g1

0x565c,	// (0x00056d36) link_highlight_digital_pane_t1

0x552c,	// (0x00056c06) copy_highlight_primary_pane_g1

0x5534,	// (0x00056c0e) copy_highlight_primary_pane_t1

0x5506,	// (0x00056be0) copy_highlight_primary_small_pane_g1

0x551d,	// (0x00056bf7) copy_highlight_primary_small_pane_t1

0x4825,	// (0x00055eff) copy_highlight_secondary_pane_g1

0x482d,	// (0x00055f07) copy_highlight_secondary_pane_t1

0x5506,	// (0x00056be0) copy_highlight_title_pane_g1

0x550e,	// (0x00056be8) copy_highlight_title_pane_t1

0x552c,	// (0x00056c06) copy_highlight_digital_pane_g1

0x67b1,	// (0x00057e8b) copy_highlight_digital_pane_t1

0x6705,	// (0x00057ddf) graphic_text_primary_pane_g1

0x6795,	// (0x00057e6f) graphic_text_primary_pane_t1

0x67a3,	// (0x00057e7d) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x00061083) graphic_text_primary_pane_t

0x6771,	// (0x00057e4b) graphic_text_primary_small_pane_g1

0x6779,	// (0x00057e53) graphic_text_primary_small_pane_t1

0x6787,	// (0x00057e61) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0006107e) graphic_text_primary_small_pane_t

0x674d,	// (0x00057e27) graphic_text_secondary_pane_g1

0x6755,	// (0x00057e2f) graphic_text_secondary_pane_t1

0x6763,	// (0x00057e3d) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x00061079) graphic_text_secondary_pane_t

0x6729,	// (0x00057e03) graphic_text_title_pane_g1

0x6731,	// (0x00057e0b) graphic_text_title_pane_t1

0x673f,	// (0x00057e19) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x00061074) graphic_text_title_pane_t

0x6705,	// (0x00057ddf) graphic_text_digital_pane_g1

0x670d,	// (0x00057de7) graphic_text_digital_pane_t1

0x671b,	// (0x00057df5) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0006106f) graphic_text_digital_pane_t

0x2d2e,	// (0x00054408) navi_icon_pane_srt_ParamLimits

0x2d2e,	// (0x00054408) navi_icon_pane_srt

0x2c4e,	// (0x00054328) navi_midp_pane_srt

0x2c4e,	// (0x00054328) navi_navi_pane_srt

0x2d2e,	// (0x00054408) navi_text_pane_srt_ParamLimits

0x2d2e,	// (0x00054408) navi_text_pane_srt

0x66d0,	// (0x00057daa) navi_navi_icon_text_pane_srt

0x66d8,	// (0x00057db2) navi_navi_pane_srt_g1_ParamLimits

0x66d8,	// (0x00057db2) navi_navi_pane_srt_g1

0x66ea,	// (0x00057dc4) navi_navi_pane_srt_g2_ParamLimits

0x66ea,	// (0x00057dc4) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0006106a) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0006106a) navi_navi_pane_srt_g

0x66fc,	// (0x00057dd6) navi_navi_tabs_pane_srt

0x66d0,	// (0x00057daa) navi_navi_text_pane_srt

0x66d0,	// (0x00057daa) navi_navi_volume_pane_srt

0x66c1,	// (0x00057d9b) navi_navi_text_pane_srt_t1

0x167c,	// (0x00052d56) navi_navi_volume_pane_srt_g1

0x1684,	// (0x00052d5e) volume_small_pane_srt_ParamLimits

0x1684,	// (0x00052d5e) volume_small_pane_srt

0x0913,	// (0x00051fed) volume_small_pane_srt_g1_ParamLimits

0x0913,	// (0x00051fed) volume_small_pane_srt_g1

0x0923,	// (0x00051ffd) volume_small_pane_srt_g2_ParamLimits

0x0923,	// (0x00051ffd) volume_small_pane_srt_g2

0x0934,	// (0x0005200e) volume_small_pane_srt_g3_ParamLimits

0x0934,	// (0x0005200e) volume_small_pane_srt_g3

0x0945,	// (0x0005201f) volume_small_pane_srt_g4_ParamLimits

0x0945,	// (0x0005201f) volume_small_pane_srt_g4

0x0956,	// (0x00052030) volume_small_pane_srt_g5_ParamLimits

0x0956,	// (0x00052030) volume_small_pane_srt_g5

0x0967,	// (0x00052041) volume_small_pane_srt_g6_ParamLimits

0x0967,	// (0x00052041) volume_small_pane_srt_g6

0x0978,	// (0x00052052) volume_small_pane_srt_g7_ParamLimits

0x0978,	// (0x00052052) volume_small_pane_srt_g7

0x0989,	// (0x00052063) volume_small_pane_srt_g8_ParamLimits

0x0989,	// (0x00052063) volume_small_pane_srt_g8

0x099a,	// (0x00052074) volume_small_pane_srt_g9_ParamLimits

0x099a,	// (0x00052074) volume_small_pane_srt_g9

0x09ab,	// (0x00052085) volume_small_pane_srt_g10_ParamLimits

0x09ab,	// (0x00052085) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x00060e17) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x00060e17) volume_small_pane_srt_g

0x312e,	// (0x00054808) query_popup_data_pane_cp2

0x66a7,	// (0x00057d81) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x66a7,	// (0x00057d81) navi_navi_icon_text_pane_srt_t1

0x57a4,	// (0x00056e7e) navi_tabs_2_long_pane_srt

0x57a4,	// (0x00056e7e) navi_tabs_2_pane_srt

0x57a4,	// (0x00056e7e) navi_tabs_3_long_pane_srt

0x57a4,	// (0x00056e7e) navi_tabs_3_pane_srt

0x57a4,	// (0x00056e7e) navi_tabs_4_pane_srt

0x165c,	// (0x00052d36) tabs_2_active_pane_srt_ParamLimits

0x165c,	// (0x00052d36) tabs_2_active_pane_srt

0x166c,	// (0x00052d46) tabs_2_passive_pane_srt_ParamLimits

0x166c,	// (0x00052d46) tabs_2_passive_pane_srt

0x4f4a,	// (0x00056624) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4f4a,	// (0x00056624) bg_passive_tab_pane_cp1_srt

0x6673,	// (0x00057d4d) bg_passive_tab_pane_g1_cp1_srt

0x42d5,	// (0x000559af) bg_passive_tab_pane_g2_cp1_srt

0x667c,	// (0x00057d56) bg_passive_tab_pane_g3_cp1_srt

0x2fa9,	// (0x00054683) bg_active_tab_pane_cp1_srt_ParamLimits

0x2fa9,	// (0x00054683) bg_active_tab_pane_cp1_srt

0x6685,	// (0x00057d5f) tabs_2_active_pane_srt_g1

0xdb28,	// (0x0005f202) tabs_2_active_pane_srt_t1_ParamLimits

0xdb28,	// (0x0005f202) tabs_2_active_pane_srt_t1

0x6673,	// (0x00057d4d) bg_active_tab_pane_g1_cp1_srt

0x42d5,	// (0x000559af) bg_active_tab_pane_g2_cp1_srt

0x667c,	// (0x00057d56) bg_active_tab_pane_g3_cp1_srt

0x1629,	// (0x00052d03) tabs_3_active_pane_srt_ParamLimits

0x1629,	// (0x00052d03) tabs_3_active_pane_srt

0x163a,	// (0x00052d14) tabs_3_passive_pane_cp_srt_ParamLimits

0x163a,	// (0x00052d14) tabs_3_passive_pane_cp_srt

0x164b,	// (0x00052d25) tabs_3_passive_pane_srt_ParamLimits

0x164b,	// (0x00052d25) tabs_3_passive_pane_srt

0x4f4a,	// (0x00056624) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4f4a,	// (0x00056624) bg_passive_tab_pane_cp2_srt

0x483c,	// (0x00055f16) bg_passive_tab_pane_g1_cp2_srt

0x42d5,	// (0x000559af) bg_passive_tab_pane_g2_cp2_srt

0x4845,	// (0x00055f1f) bg_passive_tab_pane_g3_cp2_srt

0x2fa9,	// (0x00054683) bg_active_tab_pane_cp2_srt_ParamLimits

0x2fa9,	// (0x00054683) bg_active_tab_pane_cp2_srt

0x6659,	// (0x00057d33) tabs_3_active_pane_srt_g1

0xdb12,	// (0x0005f1ec) tabs_3_active_pane_srt_t1_ParamLimits

0xdb12,	// (0x0005f1ec) tabs_3_active_pane_srt_t1

0x483c,	// (0x00055f16) bg_active_tab_pane_g1_cp2_srt

0x42d5,	// (0x000559af) bg_active_tab_pane_g2_cp2_srt

0x4845,	// (0x00055f1f) bg_active_tab_pane_g3_cp2_srt

0x15e1,	// (0x00052cbb) tabs_4_active_pane_srt_ParamLimits

0x15e1,	// (0x00052cbb) tabs_4_active_pane_srt

0x15f3,	// (0x00052ccd) tabs_4_passive_pane_cp2_srt_ParamLimits

0x15f3,	// (0x00052ccd) tabs_4_passive_pane_cp2_srt

0x0b1e,	// (0x000521f8) aid_size_cell_toolbar

0x62bf,	// (0x00057999) main_idle_act_pane_ParamLimits

0x0ceb,	// (0x000523c5) popup_large_graphic_colour_window_ParamLimits

0xc666,	// (0x0005dd40) popup_toolbar_window_ParamLimits

0xc666,	// (0x0005dd40) popup_toolbar_window

0x6477,	// (0x00057b51) list_single_graphic_2heading_pane_ParamLimits

0x6477,	// (0x00057b51) list_single_graphic_2heading_pane

0x3d82,	// (0x0005545c) aid_size_cell_apps_grid_lsc_pane

0x3d94,	// (0x0005546e) aid_size_cell_apps_grid_prt_pane

0x49ac,	// (0x00056086) bg_wml_button_pane_cp1_ParamLimits

0x49ac,	// (0x00056086) bg_wml_button_pane_cp1

0xd731,	// (0x0005ee0b) form_midp_field_text_pane_t1_ParamLimits

0x4f4a,	// (0x00056624) input_focus_pane_cp050_ParamLimits

0x51b1,	// (0x0005688b) list_midp_form_text_pane_ParamLimits

0x5157,	// (0x00056831) input_focus_pane_cp051_ParamLimits

0x516b,	// (0x00056845) list_midp_choice_pane_ParamLimits

0xd6cf,	// (0x0005eda9) list_single_2graphic_pane_cp3_ParamLimits

0xd6cf,	// (0x0005eda9) list_single_2graphic_pane_cp3

0xd6e2,	// (0x0005edbc) list_single_midp_graphic_pane_ParamLimits

0xd6e2,	// (0x0005edbc) list_single_midp_graphic_pane

0xf42c,	// (0x00060b06) list_single_graphic_2heading_pane_g1_ParamLimits

0xf42c,	// (0x00060b06) list_single_graphic_2heading_pane_g1

0xf438,	// (0x00060b12) list_single_graphic_2heading_pane_g4_ParamLimits

0xf438,	// (0x00060b12) list_single_graphic_2heading_pane_g4

0xf444,	// (0x00060b1e) list_single_graphic_2heading_pane_g5_ParamLimits

0xf444,	// (0x00060b1e) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00060e6a) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00060e6a) list_single_graphic_2heading_pane_g

0xf450,	// (0x00060b2a) list_single_graphic_2heading_pane_t1_ParamLimits

0xf450,	// (0x00060b2a) list_single_graphic_2heading_pane_t1

0xf464,	// (0x00060b3e) list_single_graphic_2heading_pane_t2_ParamLimits

0xf464,	// (0x00060b3e) list_single_graphic_2heading_pane_t2

0xf480,	// (0x00060b5a) list_single_graphic_2heading_pane_t3_ParamLimits

0xf480,	// (0x00060b5a) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00060e71) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00060e71) list_single_graphic_2heading_pane_t

0x4e14,	// (0x000564ee) bg_popup_sub_pane_cp2

0x4e3e,	// (0x00056518) grid_toobar_pane

0x10ff,	// (0x000527d9) cell_toolbar_pane_ParamLimits

0x10ff,	// (0x000527d9) cell_toolbar_pane

0x4e7a,	// (0x00056554) cell_toolbar_pane_g1_ParamLimits

0x4e7a,	// (0x00056554) cell_toolbar_pane_g1

0x4e8e,	// (0x00056568) cell_toolbar_pane_g2_ParamLimits

0x4e8e,	// (0x00056568) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x00060e7f) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x00060e7f) cell_toolbar_pane_g

0x4eb0,	// (0x0005658a) grid_highlight_pane_cp2_ParamLimits

0x4eb0,	// (0x0005658a) grid_highlight_pane_cp2

0x4eca,	// (0x000565a4) toolbar_button_pane

0x4ed6,	// (0x000565b0) toolbar_button_pane_g1

0x4ede,	// (0x000565b8) toolbar_button_pane_g2

0x4ee6,	// (0x000565c0) toolbar_button_pane_g3

0x4eee,	// (0x000565c8) toolbar_button_pane_g4

0x4ef6,	// (0x000565d0) toolbar_button_pane_g5

0x4efe,	// (0x000565d8) toolbar_button_pane_g6

0x4f06,	// (0x000565e0) toolbar_button_pane_g7

0x4f0e,	// (0x000565e8) toolbar_button_pane_g8

0x4f16,	// (0x000565f0) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x00060e84) toolbar_button_pane_g

0x114d,	// (0x00052827) list_single_2graphic_pane_g1_cp3_ParamLimits

0x114d,	// (0x00052827) list_single_2graphic_pane_g1_cp3

0xc6be,	// (0x0005dd98) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc6be,	// (0x0005dd98) list_single_2graphic_pane_g2_cp3

0x116a,	// (0x00052844) list_single_2graphic_pane_g3_cp3

0x1172,	// (0x0005284c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1172,	// (0x0005284c) list_single_2graphic_pane_g4_cp3

0x117e,	// (0x00052858) list_single_2graphic_pane_t1_cp3_ParamLimits

0x117e,	// (0x00052858) list_single_2graphic_pane_t1_cp3

0x11c2,	// (0x0005289c) list_single_midp_graphic_pane_g2_ParamLimits

0x11c2,	// (0x0005289c) list_single_midp_graphic_pane_g2

0xf424,	// (0x00060afe) aid_zoom_text_primary

0x0b26,	// (0x00052200) aid_zoom_text_secondary

0x48f6,	// (0x00055fd0) status_small_pane_g7_ParamLimits

0x48f6,	// (0x00055fd0) status_small_pane_g7

0x4919,	// (0x00055ff3) status_small_pane_t1_ParamLimits

0xb628,	// (0x0005cd02) title_pane_g2

0x0003,

0xf529,	// (0x00060c03) title_pane_g

0xb8a0,	// (0x0005cf7a) aid_size_cell_colour_1_pane_ParamLimits

0xb8a0,	// (0x0005cf7a) aid_size_cell_colour_1_pane

0xb8b4,	// (0x0005cf8e) aid_size_cell_colour_2_pane_ParamLimits

0xb8b4,	// (0x0005cf8e) aid_size_cell_colour_2_pane

0xb8c8,	// (0x0005cfa2) aid_size_cell_colour_3_pane_ParamLimits

0xb8c8,	// (0x0005cfa2) aid_size_cell_colour_3_pane

0xb8dc,	// (0x0005cfb6) aid_size_cell_colour_4_pane_ParamLimits

0xb8dc,	// (0x0005cfb6) aid_size_cell_colour_4_pane

0x0502,	// (0x00051bdc) title_pane_stacon_g1_ParamLimits

0x0502,	// (0x00051bdc) title_pane_stacon_g1

0x558b,	// (0x00056c65) popup_note_wait_window_g3_ParamLimits

0x558b,	// (0x00056c65) popup_note_wait_window_g3

0x5601,	// (0x00056cdb) popup_note_wait_window_t5_ParamLimits

0x5601,	// (0x00056cdb) popup_note_wait_window_t5

0x2c4e,	// (0x00054328) main_feb_china_hwr_fs_writing_pane

0xc068,	// (0x0005d742) popup_feb_china_hwr_fs_window_ParamLimits

0xc068,	// (0x0005d742) popup_feb_china_hwr_fs_window

0xc6cf,	// (0x0005dda9) aid_size_cell_hwr_fs_ParamLimits

0xc6cf,	// (0x0005dda9) aid_size_cell_hwr_fs

0x4f4a,	// (0x00056624) bg_popup_sub_pane_cp3_ParamLimits

0x4f4a,	// (0x00056624) bg_popup_sub_pane_cp3

0xc6e4,	// (0x0005ddbe) grid_hwr_fs_pane_ParamLimits

0xc6e4,	// (0x0005ddbe) grid_hwr_fs_pane

0x127d,	// (0x00052957) linegrid_hwr_fs_pane_ParamLimits

0x127d,	// (0x00052957) linegrid_hwr_fs_pane

0xc6fc,	// (0x0005ddd6) cell_hwr_fs_pane_ParamLimits

0xc6fc,	// (0x0005ddd6) cell_hwr_fs_pane

0x4f56,	// (0x00056630) linegrid_hwr_fs_pane_g1_ParamLimits

0x4f56,	// (0x00056630) linegrid_hwr_fs_pane_g1

0xd6a3,	// (0x0005ed7d) linegrid_hwr_fs_pane_g2_ParamLimits

0xd6a3,	// (0x0005ed7d) linegrid_hwr_fs_pane_g2

0x4f74,	// (0x0005664e) linegrid_hwr_fs_pane_g3_ParamLimits

0x4f74,	// (0x0005664e) linegrid_hwr_fs_pane_g3

0x12af,	// (0x00052989) linegrid_hwr_fs_pane_g4_ParamLimits

0x12af,	// (0x00052989) linegrid_hwr_fs_pane_g4

0x12c9,	// (0x000529a3) linegrid_hwr_fs_pane_g5_ParamLimits

0x12c9,	// (0x000529a3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x00060eaa) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x00060eaa) linegrid_hwr_fs_pane_g

0x4f80,	// (0x0005665a) cell_hwr_fs_pane_g1_ParamLimits

0x4f80,	// (0x0005665a) cell_hwr_fs_pane_g1

0x4d4b,	// (0x00056425) cell_hwr_fs_pane_g2_ParamLimits

0x4d4b,	// (0x00056425) cell_hwr_fs_pane_g2

0xd6b5,	// (0x0005ed8f) cell_hwr_fs_pane_g3_ParamLimits

0xd6b5,	// (0x0005ed8f) cell_hwr_fs_pane_g3

0xd6c2,	// (0x0005ed9c) cell_hwr_fs_pane_g4_ParamLimits

0xd6c2,	// (0x0005ed9c) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x00060eb5) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x00060eb5) cell_hwr_fs_pane_g

0xc722,	// (0x0005ddfc) cell_hwr_fs_pane_t1

0x2c4e,	// (0x00054328) grid_highlight_pane_cp6

0x2c4e,	// (0x00054328) main_idle_act2_pane

0x3b39,	// (0x00055213) aid_inside_area_popup_secondary

0xd78c,	// (0x0005ee66) aid_inside_area_window_primary_ParamLimits

0xd78c,	// (0x0005ee66) aid_inside_area_window_primary

0x67c0,	// (0x00057e9a) ai2_news_ticker_pane

0x67c8,	// (0x00057ea2) aid_size_cell_ai1_link_ParamLimits

0x67c8,	// (0x00057ea2) aid_size_cell_ai1_link

0xdb3e,	// (0x0005f218) popup_ai2_data_window_ParamLimits

0xdb3e,	// (0x0005f218) popup_ai2_data_window

0x67f8,	// (0x00057ed2) popup_ai2_link_window_ParamLimits

0x67f8,	// (0x00057ed2) popup_ai2_link_window

0x4f4a,	// (0x00056624) bg_popup_sub_pane_cp4_ParamLimits

0x4f4a,	// (0x00056624) bg_popup_sub_pane_cp4

0x680c,	// (0x00057ee6) grid_ai2_link_pane_ParamLimits

0x680c,	// (0x00057ee6) grid_ai2_link_pane

0x6823,	// (0x00057efd) popup_ai2_link_window_g1_ParamLimits

0x6823,	// (0x00057efd) popup_ai2_link_window_g1

0x682f,	// (0x00057f09) popup_ai2_link_window_g2_ParamLimits

0x682f,	// (0x00057f09) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x00061088) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x00061088) popup_ai2_link_window_g

0x683e,	// (0x00057f18) ai2_mp_button_pane

0x6846,	// (0x00057f20) ai2_mp_volume_pane

0x5157,	// (0x00056831) bg_popup_sub_pane_cp5_ParamLimits

0x5157,	// (0x00056831) bg_popup_sub_pane_cp5

0x684e,	// (0x00057f28) heading_ai2_gene_pane_ParamLimits

0x684e,	// (0x00057f28) heading_ai2_gene_pane

0x685a,	// (0x00057f34) list_ai2_gene_pane_ParamLimits

0x685a,	// (0x00057f34) list_ai2_gene_pane

0x68a2,	// (0x00057f7c) cell_ai2_link_pane_ParamLimits

0x68a2,	// (0x00057f7c) cell_ai2_link_pane

0x68b8,	// (0x00057f92) cell_ai2_link_pane_g1

0x2c4e,	// (0x00054328) grid_highlight_pane_cp7

0x1699,	// (0x00052d73) ai2_mp_volume_pane_g1

0x6988,	// (0x00058062) ai2_mp_volume_pane_g2

0xdb68,	// (0x0005f242) list_ai2_gene_pane_t1

0x6990,	// (0x0005806a) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x000610a1) ai2_mp_volume_pane_g

0x16a1,	// (0x00052d7b) volume_small_pane_cp3

0x6998,	// (0x00058072) aid_size_cell_ai2_button

0x69a0,	// (0x0005807a) grid_ai2_button_pane

0x69a9,	// (0x00058083) cell_ai2_button_pane_ParamLimits

0x69a9,	// (0x00058083) cell_ai2_button_pane

0xdcee,	// (0x0005f3c8) cell_ai2_button_pane_g1

0x2c4e,	// (0x00054328) grid_highlight_pane_cp8

0x6948,	// (0x00058022) ai2_gene_pane_t1_ParamLimits

0x6948,	// (0x00058022) ai2_gene_pane_t1

0xc006,	// (0x0005d6e0) aid_height_parent_landscape

0xd8d4,	// (0x0005efae) aid_height_set_list

0x62bf,	// (0x00057999) aid_size_parent

0x65e3,	// (0x00057cbd) aid_size_cell_graphic_pane_ParamLimits

0x686a,	// (0x00057f44) popup_ai2_data_window_g1_ParamLimits

0x686a,	// (0x00057f44) popup_ai2_data_window_g1

0x6876,	// (0x00057f50) ai2_news_ticker_pane_g1

0x687e,	// (0x00057f58) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0006108d) ai2_news_ticker_pane_g

0x6886,	// (0x00057f60) ai2_news_ticker_pane_t1

0x6894,	// (0x00057f6e) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x00061092) ai2_news_ticker_pane_t

0x68c1,	// (0x00057f9b) heading_ai2_gene_pane_g1

0x68c9,	// (0x00057fa3) heading_ai2_gene_pane_t1_ParamLimits

0x68c9,	// (0x00057fa3) heading_ai2_gene_pane_t1

0x68de,	// (0x00057fb8) list_highlight_pane_cp6

0xdb52,	// (0x0005f22c) ai2_gene_pane_ParamLimits

0xdb52,	// (0x0005f22c) ai2_gene_pane

0xdb76,	// (0x0005f250) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x00061097) list_ai2_gene_pane_t

0x6919,	// (0x00057ff3) list_highlight_pane_cp8_ParamLimits

0x6919,	// (0x00057ff3) list_highlight_pane_cp8

0x692a,	// (0x00058004) ai2_gene_pane_g1_ParamLimits

0x692a,	// (0x00058004) ai2_gene_pane_g1

0x693c,	// (0x00058016) ai2_gene_pane_g2_ParamLimits

0x693c,	// (0x00058016) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0006109c) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0006109c) ai2_gene_pane_g

0x3551,	// (0x00054c2b) scroll_pane_cp12

0xbfc3,	// (0x0005d69d) control_pane_t3_ParamLimits

0xbfc3,	// (0x0005d69d) control_pane_t3

0x490a,	// (0x00055fe4) status_small_pane_g8_ParamLimits

0x490a,	// (0x00055fe4) status_small_pane_g8

0xc0fd,	// (0x0005d7d7) popup_find_window_ParamLimits

0xc390,	// (0x0005da6a) popup_note_image_window_ParamLimits

0xeaec,	// (0x000601c6) list_double2_graphic_pane_vc_g1_ParamLimits

0xeaec,	// (0x000601c6) list_double2_graphic_pane_vc_g1

0x396d,	// (0x00055047) list_double2_graphic_pane_vc_g2_ParamLimits

0x396d,	// (0x00055047) list_double2_graphic_pane_vc_g2

0x3562,	// (0x00054c3c) list_double2_graphic_pane_vc_g3_ParamLimits

0x3562,	// (0x00054c3c) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x00060e78) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x00060e78) list_double2_graphic_pane_vc_g

0x112f,	// (0x00052809) list_double2_graphic_pane_vc_t1_ParamLimits

0x112f,	// (0x00052809) list_double2_graphic_pane_vc_t1

0x396d,	// (0x00055047) list_single_heading_pane_vc_g1_ParamLimits

0x396d,	// (0x00055047) list_single_heading_pane_vc_g1

0x3562,	// (0x00054c3c) list_single_heading_pane_vc_g2_ParamLimits

0x3562,	// (0x00054c3c) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00060c87) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00060c87) list_single_heading_pane_vc_g

0x119a,	// (0x00052874) list_single_heading_pane_vc_t1_ParamLimits

0x119a,	// (0x00052874) list_single_heading_pane_vc_t1

0x11b0,	// (0x0005288a) list_single_heading_pane_vc_t2_ParamLimits

0x11b0,	// (0x0005288a) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x00060e99) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x00060e99) list_single_heading_pane_vc_t

0x361b,	// (0x00054cf5) list_setting_number_pane_vc_g1_ParamLimits

0x361b,	// (0x00054cf5) list_setting_number_pane_vc_g1

0x3627,	// (0x00054d01) list_setting_number_pane_vc_g2_ParamLimits

0x3627,	// (0x00054d01) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x00060e9e) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x00060e9e) list_setting_number_pane_vc_g

0x11e4,	// (0x000528be) list_setting_number_pane_vc_t1_ParamLimits

0x11e4,	// (0x000528be) list_setting_number_pane_vc_t1

0x11f8,	// (0x000528d2) list_setting_number_pane_vc_t2_ParamLimits

0x11f8,	// (0x000528d2) list_setting_number_pane_vc_t2

0x1214,	// (0x000528ee) list_setting_number_pane_vc_t3_ParamLimits

0x1214,	// (0x000528ee) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x00060ea3) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x00060ea3) list_setting_number_pane_vc_t

0x1240,	// (0x0005291a) set_value_pane_vc_ParamLimits

0x1240,	// (0x0005291a) set_value_pane_vc

0x6477,	// (0x00057b51) list_double2_graphic_pane_vc_ParamLimits

0x6477,	// (0x00057b51) list_double2_graphic_pane_vc

0x6477,	// (0x00057b51) list_double2_large_graphic_pane_vc_ParamLimits

0x6477,	// (0x00057b51) list_double2_large_graphic_pane_vc

0x6477,	// (0x00057b51) list_double2_pane_vc_ParamLimits

0x6477,	// (0x00057b51) list_double2_pane_vc

0x6477,	// (0x00057b51) list_double_graphic_heading_pane_vc_ParamLimits

0x6477,	// (0x00057b51) list_double_graphic_heading_pane_vc

0x6477,	// (0x00057b51) list_double_graphic_pane_vc_ParamLimits

0x6477,	// (0x00057b51) list_double_graphic_pane_vc

0x6477,	// (0x00057b51) list_double_heading_pane_vc_ParamLimits

0x6477,	// (0x00057b51) list_double_heading_pane_vc

0x6489,	// (0x00057b63) list_double_large_graphic_pane_vc_ParamLimits

0x6489,	// (0x00057b63) list_double_large_graphic_pane_vc

0x6477,	// (0x00057b51) list_double_number_pane_vc_ParamLimits

0x6477,	// (0x00057b51) list_double_number_pane_vc

0x6477,	// (0x00057b51) list_double_pane_vc_ParamLimits

0x6477,	// (0x00057b51) list_double_pane_vc

0x6477,	// (0x00057b51) list_double_time_pane_vc_ParamLimits

0x6477,	// (0x00057b51) list_double_time_pane_vc

0x6477,	// (0x00057b51) list_setting_number_pane_vc_ParamLimits

0x6477,	// (0x00057b51) list_setting_number_pane_vc

0x6477,	// (0x00057b51) list_setting_pane_vc_ParamLimits

0x6477,	// (0x00057b51) list_setting_pane_vc

0x6477,	// (0x00057b51) list_single_graphic_heading_pane_vc_ParamLimits

0x6477,	// (0x00057b51) list_single_graphic_heading_pane_vc

0x6477,	// (0x00057b51) list_single_heading_pane_vc_ParamLimits

0x6477,	// (0x00057b51) list_single_heading_pane_vc

0x6477,	// (0x00057b51) list_single_number_heading_pane_vc_ParamLimits

0x6477,	// (0x00057b51) list_single_number_heading_pane_vc

0xeaec,	// (0x000601c6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeaec,	// (0x000601c6) list_double_graphic_heading_pane_vc_g1

0x396d,	// (0x00055047) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x396d,	// (0x00055047) list_double_graphic_heading_pane_vc_g2

0x3562,	// (0x00054c3c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3562,	// (0x00054c3c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf79e,	// (0x00060e78) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00060e78) list_double_graphic_heading_pane_vc_g

0x16aa,	// (0x00052d84) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x16aa,	// (0x00052d84) list_double_graphic_heading_pane_vc_t1

0x16c6,	// (0x00052da0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x16c6,	// (0x00052da0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x000610a8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x000610a8) list_double_graphic_heading_pane_vc_t

0x361b,	// (0x00054cf5) list_setting_pane_vc_g1_ParamLimits

0x361b,	// (0x00054cf5) list_setting_pane_vc_g1

0x3627,	// (0x00054d01) list_setting_pane_vc_g2_ParamLimits

0x3627,	// (0x00054d01) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x00060e9e) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x00060e9e) list_setting_pane_vc_g

0x16e4,	// (0x00052dbe) list_setting_pane_vc_t1_ParamLimits

0x16e4,	// (0x00052dbe) list_setting_pane_vc_t1

0x1700,	// (0x00052dda) list_setting_pane_vc_t2_ParamLimits

0x1700,	// (0x00052dda) list_setting_pane_vc_t2

0x0001,

0xf9fc,	// (0x000610d6) list_setting_pane_vc_t_ParamLimits

0xf9fc,	// (0x000610d6) list_setting_pane_vc_t

0x1240,	// (0x0005291a) set_value_pane_cp_vc_ParamLimits

0x1240,	// (0x0005291a) set_value_pane_cp_vc

0x396d,	// (0x00055047) list_single_number_heading_pane_vc_g1_ParamLimits

0x396d,	// (0x00055047) list_single_number_heading_pane_vc_g1

0x3562,	// (0x00054c3c) list_single_number_heading_pane_vc_g2_ParamLimits

0x3562,	// (0x00054c3c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00060c87) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00060c87) list_single_number_heading_pane_vc_g

0xeab2,	// (0x0006018c) list_single_number_heading_pane_vc_t1_ParamLimits

0xeab2,	// (0x0006018c) list_single_number_heading_pane_vc_t1

0x171c,	// (0x00052df6) list_single_number_heading_pane_vc_t2_ParamLimits

0x171c,	// (0x00052df6) list_single_number_heading_pane_vc_t2

0xeada,	// (0x000601b4) list_single_number_heading_pane_vc_t3_ParamLimits

0xeada,	// (0x000601b4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa01,	// (0x000610db) list_single_number_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x000610db) list_single_number_heading_pane_vc_t

0xeaec,	// (0x000601c6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeaec,	// (0x000601c6) list_single_graphic_heading_pane_vc_g1

0x396d,	// (0x00055047) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x396d,	// (0x00055047) list_single_graphic_heading_pane_vc_g4

0x3562,	// (0x00054c3c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3562,	// (0x00054c3c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x00060e78) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00060e78) list_single_graphic_heading_pane_vc_g

0xeab2,	// (0x0006018c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xeab2,	// (0x0006018c) list_single_graphic_heading_pane_vc_t1

0x1732,	// (0x00052e0c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x1732,	// (0x00052e0c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa08,	// (0x000610e2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x000610e2) list_single_graphic_heading_pane_vc_t

0x396d,	// (0x00055047) list_double2_pane_vc_g1_ParamLimits

0x396d,	// (0x00055047) list_double2_pane_vc_g1

0x3562,	// (0x00054c3c) list_double2_pane_vc_g2_ParamLimits

0x3562,	// (0x00054c3c) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x00060c87) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x00060c87) list_double2_pane_vc_g

0x1594,	// (0x00052c6e) list_double2_pane_vc_t1_ParamLimits

0x1594,	// (0x00052c6e) list_double2_pane_vc_t1

0x36aa,	// (0x00054d84) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x36aa,	// (0x00054d84) list_double2_large_graphic_pane_vc_g1

0x396d,	// (0x00055047) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x396d,	// (0x00055047) list_double2_large_graphic_pane_vc_g2

0x3562,	// (0x00054c3c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3562,	// (0x00054c3c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x00060c9f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x00060c9f) list_double2_large_graphic_pane_vc_g

0x1744,	// (0x00052e1e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x1744,	// (0x00052e1e) list_double2_large_graphic_pane_vc_t1

0x36b6,	// (0x00054d90) list_double_time_pane_vc_g1_ParamLimits

0x36b6,	// (0x00054d90) list_double_time_pane_vc_g1

0x36c2,	// (0x00054d9c) list_double_time_pane_vc_g2_ParamLimits

0x36c2,	// (0x00054d9c) list_double_time_pane_vc_g2

0x0001,

0xfa0d,	// (0x000610e7) list_double_time_pane_vc_g_ParamLimits

0xfa0d,	// (0x000610e7) list_double_time_pane_vc_g

0x175a,	// (0x00052e34) list_double_time_pane_vc_t1_ParamLimits

0x175a,	// (0x00052e34) list_double_time_pane_vc_t1

0x177e,	// (0x00052e58) list_double_time_pane_vc_t2_ParamLimits

0x177e,	// (0x00052e58) list_double_time_pane_vc_t2

0x17cd,	// (0x00052ea7) list_double_time_pane_vc_t3_ParamLimits

0x17cd,	// (0x00052ea7) list_double_time_pane_vc_t3

0x17df,	// (0x00052eb9) list_double_time_pane_vc_t4_ParamLimits

0x17df,	// (0x00052eb9) list_double_time_pane_vc_t4

0x0003,

0xfa12,	// (0x000610ec) list_double_time_pane_vc_t_ParamLimits

0xfa12,	// (0x000610ec) list_double_time_pane_vc_t

0x396d,	// (0x00055047) list_double_pane_vc_g1_ParamLimits

0x396d,	// (0x00055047) list_double_pane_vc_g1

0x3562,	// (0x00054c3c) list_double_pane_vc_g2_ParamLimits

0x3562,	// (0x00054c3c) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x00060c87) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x00060c87) list_double_pane_vc_g

0x17f3,	// (0x00052ecd) list_double_pane_vc_t1_ParamLimits

0x17f3,	// (0x00052ecd) list_double_pane_vc_t1

0x1807,	// (0x00052ee1) list_double_pane_vc_t2_ParamLimits

0x1807,	// (0x00052ee1) list_double_pane_vc_t2

0x0001,

0xfa1b,	// (0x000610f5) list_double_pane_vc_t_ParamLimits

0xfa1b,	// (0x000610f5) list_double_pane_vc_t

0x396d,	// (0x00055047) list_double_number_pane_vc_g1_ParamLimits

0x396d,	// (0x00055047) list_double_number_pane_vc_g1

0x3562,	// (0x00054c3c) list_double_number_pane_vc_g2_ParamLimits

0x3562,	// (0x00054c3c) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x00060c87) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x00060c87) list_double_number_pane_vc_g

0x181f,	// (0x00052ef9) list_double_number_pane_vc_t1_ParamLimits

0x181f,	// (0x00052ef9) list_double_number_pane_vc_t1

0x1831,	// (0x00052f0b) list_double_number_pane_vc_t2_ParamLimits

0x1831,	// (0x00052f0b) list_double_number_pane_vc_t2

0x1845,	// (0x00052f1f) list_double_number_pane_vc_t3_ParamLimits

0x1845,	// (0x00052f1f) list_double_number_pane_vc_t3

0x0002,

0xfa20,	// (0x000610fa) list_double_number_pane_vc_t_ParamLimits

0xfa20,	// (0x000610fa) list_double_number_pane_vc_t

0x36ce,	// (0x00054da8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x36ce,	// (0x00054da8) list_double_large_graphic_pane_vc_g1

0x36ea,	// (0x00054dc4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x36ea,	// (0x00054dc4) list_double_large_graphic_pane_vc_g2

0x36fe,	// (0x00054dd8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x36fe,	// (0x00054dd8) list_double_large_graphic_pane_vc_g3

0x185d,	// (0x00052f37) list_double_large_graphic_pane_vc_g4_ParamLimits

0x185d,	// (0x00052f37) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa27,	// (0x00061101) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa27,	// (0x00061101) list_double_large_graphic_pane_vc_g

0x186c,	// (0x00052f46) list_double_large_graphic_pane_vc_t1_ParamLimits

0x186c,	// (0x00052f46) list_double_large_graphic_pane_vc_t1

0x1888,	// (0x00052f62) list_double_large_graphic_pane_vc_t2_ParamLimits

0x1888,	// (0x00052f62) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa30,	// (0x0006110a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa30,	// (0x0006110a) list_double_large_graphic_pane_vc_t

0x396d,	// (0x00055047) list_double_heading_pane_vc_g1_ParamLimits

0x396d,	// (0x00055047) list_double_heading_pane_vc_g1

0x3562,	// (0x00054c3c) list_double_heading_pane_vc_g2_ParamLimits

0x3562,	// (0x00054c3c) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00060c87) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00060c87) list_double_heading_pane_vc_g

0x18aa,	// (0x00052f84) list_double_heading_pane_vc_t1_ParamLimits

0x18aa,	// (0x00052f84) list_double_heading_pane_vc_t1

0x18be,	// (0x00052f98) list_double_heading_pane_vc_t2_ParamLimits

0x18be,	// (0x00052f98) list_double_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x0006110f) list_double_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x0006110f) list_double_heading_pane_vc_t

0x18d6,	// (0x00052fb0) list_double_graphic_pane_vc_g1_ParamLimits

0x18d6,	// (0x00052fb0) list_double_graphic_pane_vc_g1

0x370d,	// (0x00054de7) list_double_graphic_pane_vc_g2_ParamLimits

0x370d,	// (0x00054de7) list_double_graphic_pane_vc_g2

0x396d,	// (0x00055047) list_double_graphic_pane_vc_g3_ParamLimits

0x396d,	// (0x00055047) list_double_graphic_pane_vc_g3

0x0003,

0xfa3a,	// (0x00061114) list_double_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x00061114) list_double_graphic_pane_vc_g

0x18e2,	// (0x00052fbc) list_double_graphic_pane_vc_t1_ParamLimits

0x18e2,	// (0x00052fbc) list_double_graphic_pane_vc_t1

0x190c,	// (0x00052fe6) list_double_graphic_pane_vc_t2_ParamLimits

0x190c,	// (0x00052fe6) list_double_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x0006111d) list_double_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x0006111d) list_double_graphic_pane_vc_t

0xf275,	// (0x0006094f) aid_size_cell_fastswap

0xb40f,	// (0x0005cae9) aid_size_cell_touch_ParamLimits

0xb40f,	// (0x0005cae9) aid_size_cell_touch

0xf3f6,	// (0x00060ad0) popup_fast_swap_wide_window_ParamLimits

0xf3f6,	// (0x00060ad0) popup_fast_swap_wide_window

0xb5bf,	// (0x0005cc99) touch_pane_ParamLimits

0xb5bf,	// (0x0005cc99) touch_pane

0x39ca,	// (0x000550a4) button_value_adjust_pane_cp2

0x025c,	// (0x00051936) button_value_adjust_pane_cp4

0x0280,	// (0x0005195a) form_field_data_pane_cp2

0xbd3b,	// (0x0005d415) form_field_data_wide_pane_cp2

0x3e51,	// (0x0005552b) bg_scroll_pane_ParamLimits

0x0664,	// (0x00051d3e) scroll_handle_pane_ParamLimits

0x0678,	// (0x00051d52) scroll_sc2_down_pane_ParamLimits

0x0678,	// (0x00051d52) scroll_sc2_down_pane

0x3e82,	// (0x0005555c) scroll_sc2_up_pane_ParamLimits

0x3e82,	// (0x0005555c) scroll_sc2_up_pane

0xdd24,	// (0x0005f3fe) grid_wheel_folder_pane_g1_ParamLimits

0xdd24,	// (0x0005f3fe) grid_wheel_folder_pane_g1

0x08ab,	// (0x00051f85) clock_nsta_pane_cp2_ParamLimits

0x08ab,	// (0x00051f85) clock_nsta_pane_cp2

0xd194,	// (0x0005e86e) listscroll_midp_pane_ParamLimits

0xd1a0,	// (0x0005e87a) midp_canvas_pane

0x4984,	// (0x0005605e) nsta_clock_indic_pane

0x49b8,	// (0x00056092) listscroll_form_pane_vc

0x49c0,	// (0x0005609a) listscroll_set_pane_vc_ParamLimits

0x49c0,	// (0x0005609a) listscroll_set_pane_vc

0xd3ae,	// (0x0005ea88) clock_nsta_pane

0xd3d8,	// (0x0005eab2) indicator_nsta_pane

0x4e14,	// (0x000564ee) bg_popup_sub_pane_cp2_ParamLimits

0x4e28,	// (0x00056502) find_pane_cp2_ParamLimits

0x4e28,	// (0x00056502) find_pane_cp2

0x4e3e,	// (0x00056518) grid_toobar_pane_ParamLimits

0x4f1e,	// (0x000565f8) list_form_gen_pane_vc_ParamLimits

0x4f1e,	// (0x000565f8) list_form_gen_pane_vc

0x4f34,	// (0x0005660e) scroll_pane_cp8_vc_ParamLimits

0x4f34,	// (0x0005660e) scroll_pane_cp8_vc

0x4fb0,	// (0x0005668a) data_form_wide_pane_vc_ParamLimits

0x4fb0,	// (0x0005668a) data_form_wide_pane_vc

0x4fbc,	// (0x00056696) form_field_data_wide_pane_vc_g1

0x4fc4,	// (0x0005669e) form_field_data_wide_pane_vc_t1_ParamLimits

0x4fc4,	// (0x0005669e) form_field_data_wide_pane_vc_t1

0x39de,	// (0x000550b8) input_focus_pane_cp6_vc_ParamLimits

0x39de,	// (0x000550b8) input_focus_pane_cp6_vc

0x530a,	// (0x000569e4) list_midp_pane_ParamLimits

0x664d,	// (0x00057d27) scroll_pane_cp16_ParamLimits

0x664d,	// (0x00057d27) scroll_pane_cp16

0x5360,	// (0x00056a3a) button_value_adjust_pane_ParamLimits

0x5360,	// (0x00056a3a) button_value_adjust_pane

0xd8e5,	// (0x0005efbf) button_value_adjust_pane_cp6_ParamLimits

0xd8e5,	// (0x0005efbf) button_value_adjust_pane_cp6

0xd9ff,	// (0x0005f0d9) settings_code_pane_cp_ParamLimits

0xd9ff,	// (0x0005f0d9) settings_code_pane_cp

0xdcee,	// (0x0005f3c8) cell_touch_pane_g1

0xdcee,	// (0x0005f3c8) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00060dbd) cell_touch_pane_g

0xdb84,	// (0x0005f25e) cell_touch_pane_cp_ParamLimits

0xdb84,	// (0x0005f25e) cell_touch_pane_cp

0xdba0,	// (0x0005f27a) cell_touch_pane_ParamLimits

0xdba0,	// (0x0005f27a) cell_touch_pane

0xdcee,	// (0x0005f3c8) scroll_sc2_down_pane_g1

0xdcee,	// (0x0005f3c8) scroll_sc2_up_pane_g1

0x2c4e,	// (0x00054328) bg_set_opt_pane_cp4_vc

0x69dd,	// (0x000580b7) list_set_graphic_pane_vc_g1_ParamLimits

0x69dd,	// (0x000580b7) list_set_graphic_pane_vc_g1

0x69e9,	// (0x000580c3) list_set_graphic_pane_vc_g2_ParamLimits

0x69e9,	// (0x000580c3) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x000610ad) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x000610ad) list_set_graphic_pane_vc_g

0x69f5,	// (0x000580cf) text_primary_small_cp13_vc_ParamLimits

0x69f5,	// (0x000580cf) text_primary_small_cp13_vc

0x6a0d,	// (0x000580e7) list_set_graphic_pane_vc_ParamLimits

0x6a0d,	// (0x000580e7) list_set_graphic_pane_vc

0x2c4e,	// (0x00054328) input_focus_pane_cp2_vc

0xdcee,	// (0x0005f3c8) setting_code_pane_vc_g1

0x2d79,	// (0x00054453) setting_code_pane_vc_t1

0x6a20,	// (0x000580fa) set_text_pane_vc_t1_ParamLimits

0x6a20,	// (0x000580fa) set_text_pane_vc_t1

0x2c4e,	// (0x00054328) input_focus_pane_cp1_vc

0x6a3c,	// (0x00058116) list_set_text_pane_vc

0xdcee,	// (0x0005f3c8) setting_text_pane_vc_g1

0x2c4e,	// (0x00054328) bg_set_opt_pane_cp2_vc

0x2d70,	// (0x0005444a) setting_slider_graphic_pane_vc_g1

0x6a46,	// (0x00058120) setting_slider_graphic_pane_vc_t1

0x6a56,	// (0x00058130) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x000610b2) setting_slider_graphic_pane_vc_t

0x6a66,	// (0x00058140) slider_set_pane_cp_vc

0x6a6e,	// (0x00058148) slider_set_pane_vc_g1

0x6a77,	// (0x00058151) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x000610b7) slider_set_pane_vc_g

0x3a2a,	// (0x00055104) set_opt_bg_pane_g1_copy1

0x3a32,	// (0x0005510c) set_opt_bg_pane_g2_copy1

0x6aa3,	// (0x0005817d) set_opt_bg_pane_g3_copy1

0x3a42,	// (0x0005511c) set_opt_bg_pane_g4_copy1

0x3a4a,	// (0x00055124) set_opt_bg_pane_g5_copy1

0x3a52,	// (0x0005512c) set_opt_bg_pane_g6_copy1

0x6aad,	// (0x00058187) set_opt_bg_pane_g7_copy1

0x6ab7,	// (0x00058191) set_opt_bg_pane_g8_copy1

0x6ac1,	// (0x0005819b) set_opt_bg_pane_g9_copy1

0x2c4e,	// (0x00054328) bg_set_opt_pane_cp_vc

0x6acb,	// (0x000581a5) setting_slider_pane_vc_t1

0x6ada,	// (0x000581b4) setting_slider_pane_vc_t2

0x6aea,	// (0x000581c4) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x000610c6) setting_slider_pane_vc_t

0x6afa,	// (0x000581d4) slider_set_pane_vc

0x1326,	// (0x00052a00) volume_set_pane_vc_g1

0x132f,	// (0x00052a09) volume_set_pane_vc_g2

0x1338,	// (0x00052a12) volume_set_pane_vc_g3

0x1341,	// (0x00052a1b) volume_set_pane_vc_g4

0x134a,	// (0x00052a24) volume_set_pane_vc_g5

0x1353,	// (0x00052a2d) volume_set_pane_vc_g6

0x135c,	// (0x00052a36) volume_set_pane_vc_g7

0x1365,	// (0x00052a3f) volume_set_pane_vc_g8

0x136e,	// (0x00052a48) volume_set_pane_vc_g9

0x1377,	// (0x00052a51) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x00060f6b) volume_set_pane_vc_g

0x6b02,	// (0x000581dc) volume_set_pane_vc

0x6b0a,	// (0x000581e4) button_value_adjust_pane_cp1_vc

0x6b14,	// (0x000581ee) list_highlight_pane_cp2_vc

0x6b1d,	// (0x000581f7) list_set_pane_vc_ParamLimits

0x6b1d,	// (0x000581f7) list_set_pane_vc

0x6b7b,	// (0x00058255) main_pane_set_vc_t1_ParamLimits

0x6b7b,	// (0x00058255) main_pane_set_vc_t1

0x6b90,	// (0x0005826a) main_pane_set_vc_t2_ParamLimits

0x6b90,	// (0x0005826a) main_pane_set_vc_t2

0x6ba2,	// (0x0005827c) main_pane_set_vc_t3_ParamLimits

0x6ba2,	// (0x0005827c) main_pane_set_vc_t3

0x6bb6,	// (0x00058290) main_pane_set_vc_t4_ParamLimits

0x6bb6,	// (0x00058290) main_pane_set_vc_t4

0x0003,

0xf9f3,	// (0x000610cd) main_pane_set_vc_t_ParamLimits

0xf9f3,	// (0x000610cd) main_pane_set_vc_t

0x6bca,	// (0x000582a4) setting_code_pane_vc_ParamLimits

0x6bca,	// (0x000582a4) setting_code_pane_vc

0x6bdb,	// (0x000582b5) setting_slider_graphic_pane_vc

0x6bdb,	// (0x000582b5) setting_slider_pane_vc

0x6bdb,	// (0x000582b5) setting_text_pane_vc

0x6bdb,	// (0x000582b5) setting_volume_pane_vc

0x6be5,	// (0x000582bf) scroll_pane_cp121_vc

0x39b8,	// (0x00055092) set_content_pane_vc

0x6bed,	// (0x000582c7) button_value_adjust_pane_g1

0x6bf6,	// (0x000582d0) button_value_adjust_pane_g2

0x0001,

0xfa48,	// (0x00061122) button_value_adjust_pane_g

0x6bff,	// (0x000582d9) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6bff,	// (0x000582d9) form_field_slider_wide_pane_vc_t1

0x6c13,	// (0x000582ed) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6c13,	// (0x000582ed) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa4d,	// (0x00061127) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa4d,	// (0x00061127) form_field_slider_wide_pane_vc_t

0x2fa9,	// (0x00054683) input_focus_pane_cp10_vc_ParamLimits

0x2fa9,	// (0x00054683) input_focus_pane_cp10_vc

0x6c41,	// (0x0005831b) slider_cont_pane_cp1_vc_ParamLimits

0x6c41,	// (0x0005831b) slider_cont_pane_cp1_vc

0x6c53,	// (0x0005832d) slider_form_pane_g1_cp2

0x6a77,	// (0x00058151) slider_form_pane_g2_cp2

0x6c80,	// (0x0005835a) form_field_slider_pane_vc_t3

0x6c8e,	// (0x00058368) form_field_slider_pane_vc_t4

0x6c9c,	// (0x00058376) slider_form_pane_vc_ParamLimits

0x6c9c,	// (0x00058376) slider_form_pane_vc

0x6ca9,	// (0x00058383) form_field_slider_pane_vc_t1_ParamLimits

0x6ca9,	// (0x00058383) form_field_slider_pane_vc_t1

0x6c13,	// (0x000582ed) form_field_slider_pane_vc_t2_ParamLimits

0x6c13,	// (0x000582ed) form_field_slider_pane_vc_t2

0x0001,

0xfa5f,	// (0x00061139) form_field_slider_pane_vc_t_ParamLimits

0xfa5f,	// (0x00061139) form_field_slider_pane_vc_t

0x2fa9,	// (0x00054683) input_focus_pane_cp9_vc_ParamLimits

0x2fa9,	// (0x00054683) input_focus_pane_cp9_vc

0x6cc5,	// (0x0005839f) slider_cont_pane_vc_ParamLimits

0x6cc5,	// (0x0005839f) slider_cont_pane_vc

0x6cd9,	// (0x000583b3) list_form_graphic_pane_cp_vc_ParamLimits

0x6cd9,	// (0x000583b3) list_form_graphic_pane_cp_vc

0x4fbc,	// (0x00056696) form_field_popup_wide_pane_vc_g1

0x6cee,	// (0x000583c8) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6cee,	// (0x000583c8) form_field_popup_wide_pane_vc_t1

0x39de,	// (0x000550b8) input_focus_pane_cp8_vc_ParamLimits

0x39de,	// (0x000550b8) input_focus_pane_cp8_vc

0x6d33,	// (0x0005840d) list_form_wide_pane_vc_ParamLimits

0x6d33,	// (0x0005840d) list_form_wide_pane_vc

0x6d3f,	// (0x00058419) list_form_graphic_pane_vc_g1

0x6d47,	// (0x00058421) list_form_graphic_pane_vc_t1_ParamLimits

0x6d47,	// (0x00058421) list_form_graphic_pane_vc_t1

0x2d2e,	// (0x00054408) list_highlight_pane_cp5_vc_ParamLimits

0x2d2e,	// (0x00054408) list_highlight_pane_cp5_vc

0x6d63,	// (0x0005843d) list_form_graphic_pane_vc_ParamLimits

0x6d63,	// (0x0005843d) list_form_graphic_pane_vc

0x4fbc,	// (0x00056696) form_field_popup_pane_vc_g1

0x6d79,	// (0x00058453) form_field_popup_pane_vc_t1_ParamLimits

0x6d79,	// (0x00058453) form_field_popup_pane_vc_t1

0x39de,	// (0x000550b8) input_focus_pane_cp7_vc_ParamLimits

0x39de,	// (0x000550b8) input_focus_pane_cp7_vc

0x6d90,	// (0x0005846a) list_form_pane_vc_ParamLimits

0x6d90,	// (0x0005846a) list_form_pane_vc

0x6d9c,	// (0x00058476) data_form_pane_vc_t1_ParamLimits

0x6d9c,	// (0x00058476) data_form_pane_vc_t1

0x3a2a,	// (0x00055104) input_focus_pane_vc_g1

0x3a32,	// (0x0005510c) input_focus_pane_vc_g2

0x3a3a,	// (0x00055114) input_focus_pane_vc_g3

0x3a42,	// (0x0005511c) input_focus_pane_vc_g4

0x3a4a,	// (0x00055124) input_focus_pane_vc_g5

0x3a52,	// (0x0005512c) input_focus_pane_vc_g6

0x3a5a,	// (0x00055134) input_focus_pane_vc_g7

0x3a62,	// (0x0005513c) input_focus_pane_vc_g8

0x3a6a,	// (0x00055144) input_focus_pane_vc_g9

0xdcee,	// (0x0005f3c8) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x00060d46) input_focus_pane_vc_g

0x4fb0,	// (0x0005668a) data_form_pane_vc_ParamLimits

0x4fb0,	// (0x0005668a) data_form_pane_vc

0x4fbc,	// (0x00056696) form_field_data_pane_vc_g1

0x6db7,	// (0x00058491) form_field_data_pane_vc_t1_ParamLimits

0x6db7,	// (0x00058491) form_field_data_pane_vc_t1

0x39de,	// (0x000550b8) input_focus_pane_vc_ParamLimits

0x39de,	// (0x000550b8) input_focus_pane_vc

0x6dd1,	// (0x000584ab) button_value_adjust_pane_cp3_vc

0x6dd9,	// (0x000584b3) button_value_adjust_pane_cp5_vc

0x6de1,	// (0x000584bb) form_field_data_pane_vc_ParamLimits

0x6de1,	// (0x000584bb) form_field_data_pane_vc

0x6df8,	// (0x000584d2) form_field_data_pane_vc_cp2

0x6e00,	// (0x000584da) form_field_data_wide_pane_vc_ParamLimits

0x6e00,	// (0x000584da) form_field_data_wide_pane_vc

0x6e16,	// (0x000584f0) form_field_data_wide_pane_vc_cp2

0x6e1e,	// (0x000584f8) form_field_popup_pane_vc_ParamLimits

0x6e1e,	// (0x000584f8) form_field_popup_pane_vc

0x6e35,	// (0x0005850f) form_field_popup_wide_pane_vc_ParamLimits

0x6e35,	// (0x0005850f) form_field_popup_wide_pane_vc

0x6e4b,	// (0x00058525) form_field_slider_pane_vc_ParamLimits

0x6e4b,	// (0x00058525) form_field_slider_pane_vc

0x6e5e,	// (0x00058538) form_field_slider_wide_pane_vc_ParamLimits

0x6e5e,	// (0x00058538) form_field_slider_wide_pane_vc

0xdbbe,	// (0x0005f298) grid_touch_1_pane_ParamLimits

0xdbbe,	// (0x0005f298) grid_touch_1_pane

0xdbd2,	// (0x0005f2ac) grid_touch_2_pane_ParamLimits

0xdbd2,	// (0x0005f2ac) grid_touch_2_pane

0x6f4e,	// (0x00058628) touch_pane_g1_ParamLimits

0x6f4e,	// (0x00058628) touch_pane_g1

0x6e95,	// (0x0005856f) cell_app_pane_cp_wide_ParamLimits

0x6e95,	// (0x0005856f) cell_app_pane_cp_wide

0x6ea6,	// (0x00058580) grid_popup_fast_wide_pane_ParamLimits

0x6ea6,	// (0x00058580) grid_popup_fast_wide_pane

0x6ec6,	// (0x000585a0) scroll_pane_cp19_ParamLimits

0x6ec6,	// (0x000585a0) scroll_pane_cp19

0x2c4e,	// (0x00054328) bg_popup_window_pane_cp20

0x6eda,	// (0x000585b4) listscroll_popup_fast_wide_pane

0xdbfc,	// (0x0005f2d6) grid_indicator_nsta_pane

0x6ef4,	// (0x000585ce) clock_nsta_pane_g1

0x6efd,	// (0x000585d7) clock_nsta_pane_t1

0xdc08,	// (0x0005f2e2) cell_indicator_nsta_pane_ParamLimits

0xdc08,	// (0x0005f2e2) cell_indicator_nsta_pane

0x6f4e,	// (0x00058628) cell_indicator_nsta_pane_g1

0xdc23,	// (0x0005f2fd) cell_indicator_nsta_pane_g2

0x0001,

0xfa70,	// (0x0006114a) cell_indicator_nsta_pane_g

0x6f6e,	// (0x00058648) clock_nsta_pane_cp

0x6f77,	// (0x00058651) indicator_nsta_pane_cp

0x6f81,	// (0x0005865b) nsta_clock_indic_pane_g1

0x2df7,	// (0x000544d1) grid_indicator_pane

0x3f77,	// (0x00055651) scroll_pane_cp29

0x07fa,	// (0x00051ed4) indicator_nsta_pane_cp2_ParamLimits

0x07fa,	// (0x00051ed4) indicator_nsta_pane_cp2

0x2d2e,	// (0x00054408) main_apps_wheel_pane

0x51cb,	// (0x000568a5) form_midp_field_text_pane_ParamLimits

0x5316,	// (0x000569f0) scroll_bar_cp050_ParamLimits

0x6fda,	// (0x000586b4) cell_indicator_pane_ParamLimits

0x6fda,	// (0x000586b4) cell_indicator_pane

0x6ff1,	// (0x000586cb) cell_indicator_pane_g1

0xdc30,	// (0x0005f30a) grid_wheel_folder_pane_ParamLimits

0xdc30,	// (0x0005f30a) grid_wheel_folder_pane

0xdc3e,	// (0x0005f318) list_wheel_apps_pane_ParamLimits

0xdc3e,	// (0x0005f318) list_wheel_apps_pane

0xdc4c,	// (0x0005f326) main_apps_wheel_pane_g1_ParamLimits

0xdc4c,	// (0x0005f326) main_apps_wheel_pane_g1

0xdc58,	// (0x0005f332) main_apps_wheel_pane_g2_ParamLimits

0xdc58,	// (0x0005f332) main_apps_wheel_pane_g2

0x0001,

0xfa8c,	// (0x00061166) main_apps_wheel_pane_g_ParamLimits

0xfa8c,	// (0x00061166) main_apps_wheel_pane_g

0xdc66,	// (0x0005f340) main_apps_wheel_pane_t1_ParamLimits

0xdc66,	// (0x0005f340) main_apps_wheel_pane_t1

0xdcf8,	// (0x0005f3d2) list_wheel_apps_pane_g1

0xdd00,	// (0x0005f3da) list_wheel_apps_pane_g2

0xdd08,	// (0x0005f3e2) list_wheel_apps_pane_g3

0xdd10,	// (0x0005f3ea) list_wheel_apps_pane_g4

0xdd1a,	// (0x0005f3f4) list_wheel_apps_pane_g5

0x0004,

0xfa91,	// (0x0006116b) list_wheel_apps_pane_g

0x450b,	// (0x00055be5) navi_icon_text_pane

0xd2a2,	// (0x0005e97c) aid_fill_nsta

0x70b6,	// (0x00058790) navi_icon_text_pane_g1

0x70c2,	// (0x0005879c) navi_icon_text_pane_t1

0x43a9,	// (0x00055a83) list_set_graphic_pane_t1_ParamLimits

0x43a9,	// (0x00055a83) list_set_graphic_pane_t1

0x5a81,	// (0x0005715b) popup_midp_note_alarm_window_t6_ParamLimits

0x5a81,	// (0x0005715b) popup_midp_note_alarm_window_t6

0x5a93,	// (0x0005716d) popup_midp_note_alarm_window_t7_ParamLimits

0x5a93,	// (0x0005716d) popup_midp_note_alarm_window_t7

0x5aa5,	// (0x0005717f) popup_midp_note_alarm_window_t8_ParamLimits

0x5aa5,	// (0x0005717f) popup_midp_note_alarm_window_t8

0x5ab7,	// (0x00057191) popup_midp_note_alarm_window_t9_ParamLimits

0x5ab7,	// (0x00057191) popup_midp_note_alarm_window_t9

0x5ac9,	// (0x000571a3) popup_midp_note_alarm_window_t10_ParamLimits

0x5ac9,	// (0x000571a3) popup_midp_note_alarm_window_t10

0x5adb,	// (0x000571b5) popup_midp_note_alarm_window_t11_ParamLimits

0x5adb,	// (0x000571b5) popup_midp_note_alarm_window_t11

0x5aed,	// (0x000571c7) scroll_pane_cp17_ParamLimits

0x5aed,	// (0x000571c7) scroll_pane_cp17

0x1326,	// (0x00052a00) volume_small_pane_cp_g1

0x1936,	// (0x00053010) volume_small_pane_cp_g2

0x193f,	// (0x00053019) volume_small_pane_cp_g3

0x1948,	// (0x00053022) volume_small_pane_cp_g4

0x1951,	// (0x0005302b) volume_small_pane_cp_g5

0x195a,	// (0x00053034) volume_small_pane_cp_g6

0x1963,	// (0x0005303d) volume_small_pane_cp_g7

0x196c,	// (0x00053046) volume_small_pane_cp_g8

0x1975,	// (0x0005304f) volume_small_pane_cp_g9

0x197e,	// (0x00053058) volume_small_pane_cp_g10

0x4765,	// (0x00055e3f) midp_ticker_pane_g1_ParamLimits

0x4771,	// (0x00055e4b) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00060e12) midp_ticker_pane_g_ParamLimits

0x477d,	// (0x00055e57) midp_ticker_pane_t1_ParamLimits

0xd2c6,	// (0x0005e9a0) aid_fill_nsta_2

0x5302,	// (0x000569dc) list_form2_midp_pane

0x6446,	// (0x00057b20) midp_editing_number_pane_ParamLimits

0x6455,	// (0x00057b2f) midp_ticker_pane_ParamLimits

0x70d4,	// (0x000587ae) form2_midp_field_pane

0x70f8,	// (0x000587d2) scroll_pane_cp51

0x7118,	// (0x000587f2) form2_midp_button_pane_ParamLimits

0x7118,	// (0x000587f2) form2_midp_button_pane

0x712a,	// (0x00058804) form2_midp_content_pane_ParamLimits

0x712a,	// (0x00058804) form2_midp_content_pane

0x7144,	// (0x0005881e) form2_midp_field_choice_group_pane

0x714c,	// (0x00058826) form2_midp_field_pane_g1

0x7154,	// (0x0005882e) form2_midp_field_pane_g2

0x715c,	// (0x00058836) form2_midp_field_pane_g3

0x7164,	// (0x0005883e) form2_midp_field_pane_g4

0x0003,

0xfab6,	// (0x00061190) form2_midp_field_pane_g

0x716c,	// (0x00058846) form2_midp_gauge_slider_pane

0x7174,	// (0x0005884e) form2_midp_gauge_wait_pane

0x717c,	// (0x00058856) form2_midp_image_pane_ParamLimits

0x717c,	// (0x00058856) form2_midp_image_pane

0x7197,	// (0x00058871) form2_midp_label_pane_ParamLimits

0x7197,	// (0x00058871) form2_midp_label_pane

0xdd4d,	// (0x0005f427) form2_midp_label_pane_cp_ParamLimits

0xdd4d,	// (0x0005f427) form2_midp_label_pane_cp

0x71d1,	// (0x000588ab) form2_midp_string_pane_ParamLimits

0x71d1,	// (0x000588ab) form2_midp_string_pane

0xc782,	// (0x0005de5c) form2_midp_text_pane_ParamLimits

0xc782,	// (0x0005de5c) form2_midp_text_pane

0x71e3,	// (0x000588bd) form2_midp_time_pane

0x71f3,	// (0x000588cd) input_focus_pane_cp51_ParamLimits

0x71f3,	// (0x000588cd) input_focus_pane_cp51

0x720b,	// (0x000588e5) form2_midp_label_pane_t1_ParamLimits

0x720b,	// (0x000588e5) form2_midp_label_pane_t1

0xc79b,	// (0x0005de75) form2_mdip_text_pane_t1_ParamLimits

0xc79b,	// (0x0005de75) form2_mdip_text_pane_t1

0x19c4,	// (0x0005309e) form2_midp_time_pane_t1

0x7254,	// (0x0005892e) form2_midp_gauge_slider_pane_t1

0xdd6c,	// (0x0005f446) form2_midp_gauge_slider_pane_t2

0xdd7e,	// (0x0005f458) form2_midp_gauge_slider_pane_t3

0x0002,

0xfabf,	// (0x00061199) form2_midp_gauge_slider_pane_t

0x728a,	// (0x00058964) form2_midp_slider_pane

0x7296,	// (0x00058970) form2_midp_gauge_wait_pane_t1

0x72a4,	// (0x0005897e) form2_midp_wait_pane_ParamLimits

0x72a4,	// (0x0005897e) form2_midp_wait_pane

0xdd90,	// (0x0005f46a) list_single_2graphic_pane_cp4_ParamLimits

0xdd90,	// (0x0005f46a) list_single_2graphic_pane_cp4

0xd6e2,	// (0x0005edbc) list_single_midp_graphic_pane_cp_ParamLimits

0xd6e2,	// (0x0005edbc) list_single_midp_graphic_pane_cp

0x2c4e,	// (0x00054328) list_highlight_pane_cp20

0x72f3,	// (0x000589cd) list_single_2graphic_pane_g1_cp4

0x72fb,	// (0x000589d5) list_single_2graphic_pane_g2_cp4

0x7303,	// (0x000589dd) list_single_2graphic_pane_t1_cp4

0x2d2e,	// (0x00054408) list_highlight_pane_cp21

0x7312,	// (0x000589ec) list_single_midp_graphic_pane_g4_cp

0x7321,	// (0x000589fb) list_single_midp_graphic_pane_t1_cp

0xdda4,	// (0x0005f47e) form2_mdip_string_pane_t1_ParamLimits

0xdda4,	// (0x0005f47e) form2_mdip_string_pane_t1

0x2c4e,	// (0x00054328) bg_wml_button_pane_cp2

0xdcee,	// (0x0005f3c8) form2_midp_image_pane_g1

0x35e2,	// (0x00054cbc) list_double_large_graphic_pane_g5_ParamLimits

0x35e2,	// (0x00054cbc) list_double_large_graphic_pane_g5

0xd194,	// (0x0005e86e) midp_form_pane_ParamLimits

0x2d2e,	// (0x00054408) main_apps_wheel_pane_ParamLimits

0xc40e,	// (0x0005dae8) popup_preview_window_ParamLimits

0xc40e,	// (0x0005dae8) popup_preview_window

0x10aa,	// (0x00052784) popup_touch_info_window_ParamLimits

0x10aa,	// (0x00052784) popup_touch_info_window

0x10c8,	// (0x000527a2) popup_touch_menu_window_ParamLimits

0x10c8,	// (0x000527a2) popup_touch_menu_window

0xcfa1,	// (0x0005e67b) bg_popup_sub_pane_cp6

0x742f,	// (0x00058b09) list_touch_menu_pane

0x7437,	// (0x00058b11) list_single_touch_menu_pane_ParamLimits

0x7437,	// (0x00058b11) list_single_touch_menu_pane

0x744d,	// (0x00058b27) list_single_touch_menu_pane_t1

0x2d2e,	// (0x00054408) bg_popup_sub_pane_cp7_ParamLimits

0x2d2e,	// (0x00054408) bg_popup_sub_pane_cp7

0x745b,	// (0x00058b35) heading_sub_pane

0x7463,	// (0x00058b3d) list_touch_info_pane_ParamLimits

0x7463,	// (0x00058b3d) list_touch_info_pane

0x7472,	// (0x00058b4c) list_single_touch_info_pane_ParamLimits

0x7472,	// (0x00058b4c) list_single_touch_info_pane

0x7484,	// (0x00058b5e) list_single_touch_info_pane_t1

0x7492,	// (0x00058b6c) list_single_touch_info_pane_t2

0x0001,

0xfacd,	// (0x000611a7) list_single_touch_info_pane_t

0x4688,	// (0x00055d62) bg_popup_heading_pane_cp

0x74a0,	// (0x00058b7a) heading_sub_pane_t1

0x4f4a,	// (0x00056624) bg_popup_preview_window_pane_cp_ParamLimits

0x4f4a,	// (0x00056624) bg_popup_preview_window_pane_cp

0x745b,	// (0x00058b35) heading_preview_pane

0x7463,	// (0x00058b3d) list_preview_pane_ParamLimits

0x7463,	// (0x00058b3d) list_preview_pane

0x74ae,	// (0x00058b88) popup_preview_window_g1

0x7472,	// (0x00058b4c) list_single_preview_pane_ParamLimits

0x7472,	// (0x00058b4c) list_single_preview_pane

0x74b6,	// (0x00058b90) list_single_preview_pane_g1

0x74be,	// (0x00058b98) list_single_preview_pane_t1

0x7484,	// (0x00058b5e) list_single_preview_pane_t2

0x0001,

0xfad2,	// (0x000611ac) list_single_preview_pane_t

0x74cc,	// (0x00058ba6) bg_popup_heading_pane_cp2_ParamLimits

0x74cc,	// (0x00058ba6) bg_popup_heading_pane_cp2

0x74e2,	// (0x00058bbc) heading_preview_pane_g1

0x74ea,	// (0x00058bc4) heading_preview_pane_t1_ParamLimits

0x74ea,	// (0x00058bc4) heading_preview_pane_t1

0x2e1a,	// (0x000544f4) soft_indicator_pane_t1_ParamLimits

0x352e,	// (0x00054c08) scroll_pane_ParamLimits

0x3e70,	// (0x0005554a) scroll_sc2_left_pane

0x3e79,	// (0x00055553) scroll_sc2_right_pane

0x3e98,	// (0x00055572) scroll_bg_pane_g1_ParamLimits

0x3ead,	// (0x00055587) scroll_bg_pane_g2_ParamLimits

0x3ec5,	// (0x0005559f) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00060d9d) scroll_bg_pane_g_ParamLimits

0x3e98,	// (0x00055572) scroll_handle_pane_g1_ParamLimits

0x3ee7,	// (0x000555c1) scroll_handle_pane_g2_ParamLimits

0x3ec5,	// (0x0005559f) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x00060da4) scroll_handle_pane_g_ParamLimits

0x0b6e,	// (0x00052248) popup_choice_list_window_ParamLimits

0x0b6e,	// (0x00052248) popup_choice_list_window

0x4e20,	// (0x000564fa) choice_list_pane

0x4ea2,	// (0x0005657c) cell_toolbar_pane_t1

0x4eca,	// (0x000565a4) toolbar_button_pane_ParamLimits

0x5fa7,	// (0x00057681) ai_gene_pane_1_t2_ParamLimits

0x5fa7,	// (0x00057681) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x00060fc7) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x00060fc7) ai_gene_pane_1_t

0x7507,	// (0x00058be1) scroll_sc2_left_pane_g1

0x7507,	// (0x00058be1) scroll_sc2_right_pane_g1

0x49ac,	// (0x00056086) bg_popup_sub_pane_cp10

0x7511,	// (0x00058beb) list_choice_list_pane

0x752a,	// (0x00058c04) list_single_choice_list_pane_ParamLimits

0x752a,	// (0x00058c04) list_single_choice_list_pane

0x753d,	// (0x00058c17) list_single_choice_list_pane_g1

0x3b76,	// (0x00055250) list_single_choice_list_pane_t1_ParamLimits

0x3b76,	// (0x00055250) list_single_choice_list_pane_t1

0x7545,	// (0x00058c1f) choice_list_pane_g1

0x754d,	// (0x00058c27) choice_list_pane_t1

0xcfa1,	// (0x0005e67b) input_focus_pane_cp11

0x3d4d,	// (0x00055427) title_pane_stacon_g2_ParamLimits

0x3d4d,	// (0x00055427) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x00060d83) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x00060d83) title_pane_stacon_g

0x4688,	// (0x00055d62) cursor_press_pane

0xc0b5,	// (0x0005d78f) popup_fep_hwr_window_ParamLimits

0xc0b5,	// (0x0005d78f) popup_fep_hwr_window

0x0c94,	// (0x0005236e) popup_fep_vkb_window_ParamLimits

0x0c94,	// (0x0005236e) popup_fep_vkb_window

0x755b,	// (0x00058c35) cursor_press_pane_g1

0x0002,

0xfafb,	// (0x000611d5) fep_vkb_side_pane_g_ParamLimits

0x1a10,	// (0x000530ea) fep_hwr_candidate_pane_ParamLimits

0x1a10,	// (0x000530ea) fep_hwr_candidate_pane

0x1a3a,	// (0x00053114) fep_hwr_side_pane_ParamLimits

0x1a3a,	// (0x00053114) fep_hwr_side_pane

0x1a5a,	// (0x00053134) fep_hwr_top_pane_ParamLimits

0x1a5a,	// (0x00053134) fep_hwr_top_pane

0x1a72,	// (0x0005314c) fep_hwr_write_pane_ParamLimits

0x1a72,	// (0x0005314c) fep_hwr_write_pane

0xfafb,	// (0x000611d5) fep_vkb_side_pane_g

0x7563,	// (0x00058c3d) fep_hwr_top_pane_g1

0x7575,	// (0x00058c4f) fep_hwr_top_pane_g2

0x1aac,	// (0x00053186) fep_hwr_top_pane_g3

0x0002,

0xfad7,	// (0x000611b1) fep_hwr_top_pane_g

0x1ac1,	// (0x0005319b) fep_hwr_top_text_pane

0x4067,	// (0x00055741) fep_hwr_top_text_pane_g1

0x75ab,	// (0x00058c85) fep_hwr_top_text_pane_t1

0x1bb7,	// (0x00053291) fep_hwr_candidate_pane_g1

0x77fe,	// (0x00058ed8) fep_vkb_keypad_pane_g3_ParamLimits

0x77fe,	// (0x00058ed8) fep_vkb_keypad_pane_g3

0x7826,	// (0x00058f00) fep_vkb_keypad_pane_g4_ParamLimits

0x7826,	// (0x00058f00) fep_vkb_keypad_pane_g4

0x7895,	// (0x00058f6f) fep_vkb_bottom_pane_g2_ParamLimits

0x7895,	// (0x00058f6f) fep_vkb_bottom_pane_g2

0x0001,

0xfb02,	// (0x000611dc) fep_vkb_bottom_pane_g_ParamLimits

0xfb02,	// (0x000611dc) fep_vkb_bottom_pane_g

0x7507,	// (0x00058be1) cell_vkb_side_pane_g2

0x0001,

0xfb0c,	// (0x000611e6) cell_vkb_side_pane_g

0x7920,	// (0x00058ffa) cell_vkb_side_pane_t1

0x792e,	// (0x00059008) cell_vkb_side_pane_t1_copy1

0x7507,	// (0x00058be1) bg_fep_vkb_candidate_pane_g2

0x7a5a,	// (0x00059134) cell_vkb_candidate_pane_ParamLimits

0x75b9,	// (0x00058c93) aid_size_cell_vkb_ParamLimits

0x75b9,	// (0x00058c93) aid_size_cell_vkb

0x7a5a,	// (0x00059134) cell_vkb_candidate_pane

0x1bde,	// (0x000532b8) bg_popup_fep_shadow_pane_g1

0xde26,	// (0x0005f500) fep_vkb_bottom_pane_ParamLimits

0xde26,	// (0x0005f500) fep_vkb_bottom_pane

0x767d,	// (0x00058d57) fep_vkb_candidate_pane_ParamLimits

0x767d,	// (0x00058d57) fep_vkb_candidate_pane

0xde4b,	// (0x0005f525) fep_vkb_keypad_pane_ParamLimits

0xde4b,	// (0x0005f525) fep_vkb_keypad_pane

0xde87,	// (0x0005f561) fep_vkb_side_pane_ParamLimits

0xde87,	// (0x0005f561) fep_vkb_side_pane

0xdec3,	// (0x0005f59d) fep_vkb_top_pane_ParamLimits

0xdec3,	// (0x0005f59d) fep_vkb_top_pane

0x7757,	// (0x00058e31) fep_vkb_top_pane_g1_ParamLimits

0x7757,	// (0x00058e31) fep_vkb_top_pane_g1

0x7766,	// (0x00058e40) fep_vkb_top_pane_g2_ParamLimits

0x7766,	// (0x00058e40) fep_vkb_top_pane_g2

0x7775,	// (0x00058e4f) fep_vkb_top_pane_g3_ParamLimits

0x7775,	// (0x00058e4f) fep_vkb_top_pane_g3

0x0003,

0xfaf2,	// (0x000611cc) fep_vkb_top_pane_g_ParamLimits

0xfaf2,	// (0x000611cc) fep_vkb_top_pane_g

0x7793,	// (0x00058e6d) fep_vkb_top_text_pane_ParamLimits

0x7793,	// (0x00058e6d) fep_vkb_top_text_pane

0xdeff,	// (0x0005f5d9) fep_vkb_side_pane_g1_ParamLimits

0xdeff,	// (0x0005f5d9) fep_vkb_side_pane_g1

0x77ed,	// (0x00058ec7) grid_vkb_side_pane_ParamLimits

0x77ed,	// (0x00058ec7) grid_vkb_side_pane

0x1be6,	// (0x000532c0) bg_popup_fep_shadow_pane_g2

0x1bef,	// (0x000532c9) bg_popup_fep_shadow_pane_g3

0x1bf7,	// (0x000532d1) bg_popup_fep_shadow_pane_g4

0x1c00,	// (0x000532da) bg_popup_fep_shadow_pane_g5

0x1c0a,	// (0x000532e4) bg_popup_fep_shadow_pane_g6

0x1c12,	// (0x000532ec) bg_popup_fep_shadow_pane_g7

0x3a42,	// (0x0005511c) bg_popup_fep_shadow_pane_g8

0x7844,	// (0x00058f1e) grid_vkb_keypad_number_pane_ParamLimits

0x7844,	// (0x00058f1e) grid_vkb_keypad_number_pane

0x7854,	// (0x00058f2e) grid_vkb_keypad_pane_ParamLimits

0x7854,	// (0x00058f2e) grid_vkb_keypad_pane

0x787a,	// (0x00058f54) fep_vkb_bottom_pane_g1_ParamLimits

0x787a,	// (0x00058f54) fep_vkb_bottom_pane_g1

0x78a3,	// (0x00058f7d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x78a3,	// (0x00058f7d) grid_vkb_keypad_bottom_left_pane

0x78b8,	// (0x00058f92) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x78b8,	// (0x00058f92) grid_vkb_keypad_bottom_right_pane

0x78cd,	// (0x00058fa7) fep_vkb_top_text_pane_g1

0xdf46,	// (0x0005f620) fep_vkb_top_text_pane_t1

0xdf58,	// (0x0005f632) cell_vkb_side_pane_ParamLimits

0xdf58,	// (0x0005f632) cell_vkb_side_pane

0x7507,	// (0x00058be1) cell_vkb_side_pane_g1

0x793c,	// (0x00059016) cell_vkb_keypad_pane_ParamLimits

0x793c,	// (0x00059016) cell_vkb_keypad_pane

0x79b1,	// (0x0005908b) cell_vkb_keypad_pane_g1

0x0008,

0xfb1f,	// (0x000611f9) bg_popup_fep_shadow_pane_g

0x1c24,	// (0x000532fe) cell_hwr_side_pane_g1

0x1c24,	// (0x000532fe) cell_hwr_side_pane_g2

0x79bb,	// (0x00059095) cell_vkb_keypad_pane_t1

0xdf6e,	// (0x0005f648) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdf6e,	// (0x0005f648) cell_vkb_keypad_bottom_left_pane

0xdf83,	// (0x0005f65d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf83,	// (0x0005f65d) cell_vkb_keypad_bottom_right_pane

0x7507,	// (0x00058be1) cell_vkb_keypad_bottom_left_pane_g1

0x7507,	// (0x00058be1) cell_vkb_keypad_bottom_right_pane_g1

0x7a1f,	// (0x000590f9) cell_vkb_keypad_number_pane_ParamLimits

0x7a1f,	// (0x000590f9) cell_vkb_keypad_number_pane

0x7a3e,	// (0x00059118) cell_vkb_keypad_number_pane_g1

0x7a48,	// (0x00059122) cell_vkb_keypad_number_pane_g2

0x7a51,	// (0x0005912b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb11,	// (0x000611eb) cell_vkb_keypad_number_pane_g

0x79bb,	// (0x00059095) cell_vkb_keypad_number_pane_t1

0x7a75,	// (0x0005914f) fep_vkb_candidate_pane_g1

0x0001,

0xfb32,	// (0x0006120c) cell_hwr_side_pane_g

0x7a8e,	// (0x00059168) cell_hwr_side_pane_t1

0x1c2e,	// (0x00053308) cell_hwr_side_pane_t1_copy1

0x1c3c,	// (0x00053316) cell_hwr_candidate_pane_g1

0x1c6b,	// (0x00053345) cell_hwr_candidate_pane_t1

0x7507,	// (0x00058be1) cell_vkb_candidate_pane_g2

0x7ad2,	// (0x000591ac) cell_vkb_candidate_pane_t1

0x19d7,	// (0x000530b1) bg_popup_fep_shadow_pane_ParamLimits

0x19d7,	// (0x000530b1) bg_popup_fep_shadow_pane

0x1a8c,	// (0x00053166) bg_fep_hwr_top_pane_g4

0x7587,	// (0x00058c61) bg_hwr_side_pane_g1_ParamLimits

0x7587,	// (0x00058c61) bg_hwr_side_pane_g1

0xc7cc,	// (0x0005dea6) cell_hwr_side_pane_ParamLimits

0xc7cc,	// (0x0005dea6) cell_hwr_side_pane

0x1b38,	// (0x00053212) fep_hwr_write_pane_g1_ParamLimits

0x1b38,	// (0x00053212) fep_hwr_write_pane_g1

0x1b45,	// (0x0005321f) fep_hwr_write_pane_g2_ParamLimits

0x1b45,	// (0x0005321f) fep_hwr_write_pane_g2

0x1b52,	// (0x0005322c) fep_hwr_write_pane_g3_ParamLimits

0x1b52,	// (0x0005322c) fep_hwr_write_pane_g3

0xc7ec,	// (0x0005dec6) fep_hwr_write_pane_g4_ParamLimits

0xc7ec,	// (0x0005dec6) fep_hwr_write_pane_g4

0x0005,

0xfade,	// (0x000611b8) fep_hwr_write_pane_g_ParamLimits

0xfade,	// (0x000611b8) fep_hwr_write_pane_g

0x1a8c,	// (0x00053166) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1a8c,	// (0x00053166) bg_fep_hwr_candidate_pane_g2

0x1b75,	// (0x0005324f) cell_hwr_candidate_pane_ParamLimits

0x1b75,	// (0x0005324f) cell_hwr_candidate_pane

0x1bb7,	// (0x00053291) fep_hwr_candidate_pane_g1_ParamLimits

0x75e7,	// (0x00058cc1) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x75e7,	// (0x00058cc1) bg_popup_fep_shadow_pane_cp2

0x7785,	// (0x00058e5f) fep_vkb_top_pane_g4_ParamLimits

0x7785,	// (0x00058e5f) fep_vkb_top_pane_g4

0x77cb,	// (0x00058ea5) fep_vkb_side_pane_g2_ParamLimits

0x77cb,	// (0x00058ea5) fep_vkb_side_pane_g2

0xbc5f,	// (0x0005d339) list_setting_pane_t4_ParamLimits

0xbc5f,	// (0x0005d339) list_setting_pane_t4

0xbce1,	// (0x0005d3bb) list_setting_number_pane_t5_ParamLimits

0xbce1,	// (0x0005d3bb) list_setting_number_pane_t5

0x409e,	// (0x00055778) list_double_heading_pane_cp2_ParamLimits

0x409e,	// (0x00055778) list_double_heading_pane_cp2

0x3979,	// (0x00055053) list_double_heading_pane_g1_cp2_ParamLimits

0x3979,	// (0x00055053) list_double_heading_pane_g1_cp2

0x39ec,	// (0x000550c6) list_double_heading_pane_g2_cp2_ParamLimits

0x39ec,	// (0x000550c6) list_double_heading_pane_g2_cp2

0x7ae0,	// (0x000591ba) list_double_heading_pane_t1_cp2_ParamLimits

0x7ae0,	// (0x000591ba) list_double_heading_pane_t1_cp2

0x7af6,	// (0x000591d0) list_double_heading_pane_t2_cp2_ParamLimits

0x7af6,	// (0x000591d0) list_double_heading_pane_t2_cp2

0xcf99,	// (0x0005e673) aid_value_unit2

0xf41a,	// (0x00060af4) popup_preview_fixed_window

0x2fb7,	// (0x00054691) bg_popup_preview_window_pane_cp02

0x7b08,	// (0x000591e2) list_preview_fixed_pane

0x7b4e,	// (0x00059228) list_empty_pane_fp_ParamLimits

0x7b4e,	// (0x00059228) list_empty_pane_fp

0x7b4e,	// (0x00059228) list_single_cale_day_pane_fp_ParamLimits

0x7b4e,	// (0x00059228) list_single_cale_day_pane_fp

0x7b4e,	// (0x00059228) list_single_graphic_heading_pane_fp_ParamLimits

0x7b4e,	// (0x00059228) list_single_graphic_heading_pane_fp

0x7b4e,	// (0x00059228) list_single_graphic_pane_fp_ParamLimits

0x7b4e,	// (0x00059228) list_single_graphic_pane_fp

0x7b4e,	// (0x00059228) list_single_heading_pane_fp_ParamLimits

0x7b4e,	// (0x00059228) list_single_heading_pane_fp

0x7b4e,	// (0x00059228) list_single_pane_fp_ParamLimits

0x7b4e,	// (0x00059228) list_single_pane_fp

0x7b63,	// (0x0005923d) list_single_pane_fp_g1_ParamLimits

0x7b63,	// (0x0005923d) list_single_pane_fp_g1

0x3979,	// (0x00055053) list_single_pane_fp_g2_ParamLimits

0x3979,	// (0x00055053) list_single_pane_fp_g2

0x39ec,	// (0x000550c6) list_single_pane_fp_g3_ParamLimits

0x39ec,	// (0x000550c6) list_single_pane_fp_g3

0x7b6f,	// (0x00059249) list_single_pane_fp_g4_ParamLimits

0x7b6f,	// (0x00059249) list_single_pane_fp_g4

0x0003,

0xfb45,	// (0x0006121f) list_single_pane_fp_g_ParamLimits

0xfb45,	// (0x0006121f) list_single_pane_fp_g

0x1c89,	// (0x00053363) list_single_pane_fp_t1_ParamLimits

0x1c89,	// (0x00053363) list_single_pane_fp_t1

0x1ca0,	// (0x0005337a) list_single_graphic_pane_fp_g1_ParamLimits

0x1ca0,	// (0x0005337a) list_single_graphic_pane_fp_g1

0x7b63,	// (0x0005923d) list_single_graphic_pane_fp_g2_ParamLimits

0x7b63,	// (0x0005923d) list_single_graphic_pane_fp_g2

0x3979,	// (0x00055053) list_single_graphic_pane_fp_g3_ParamLimits

0x3979,	// (0x00055053) list_single_graphic_pane_fp_g3

0x39ec,	// (0x000550c6) list_single_graphic_pane_fp_g4_ParamLimits

0x39ec,	// (0x000550c6) list_single_graphic_pane_fp_g4

0x7b6f,	// (0x00059249) list_single_graphic_pane_fp_g5_ParamLimits

0x7b6f,	// (0x00059249) list_single_graphic_pane_fp_g5

0x0004,

0xfb4e,	// (0x00061228) list_single_graphic_pane_fp_g_ParamLimits

0xfb4e,	// (0x00061228) list_single_graphic_pane_fp_g

0x1cac,	// (0x00053386) list_single_graphic_pane_fp_t1_ParamLimits

0x1cac,	// (0x00053386) list_single_graphic_pane_fp_t1

0x1ca0,	// (0x0005337a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x1ca0,	// (0x0005337a) list_single_graphic_heading_pane_fp_g1

0x7b63,	// (0x0005923d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7b63,	// (0x0005923d) list_single_graphic_heading_pane_fp_g2

0x3979,	// (0x00055053) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3979,	// (0x00055053) list_single_graphic_heading_pane_fp_g3

0x39ec,	// (0x000550c6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x39ec,	// (0x000550c6) list_single_graphic_heading_pane_fp_g4

0x7b6f,	// (0x00059249) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7b6f,	// (0x00059249) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb4e,	// (0x00061228) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb4e,	// (0x00061228) list_single_graphic_heading_pane_fp_g

0x1cc2,	// (0x0005339c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1cc2,	// (0x0005339c) list_single_graphic_heading_pane_fp_t1

0x1cd8,	// (0x000533b2) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1cd8,	// (0x000533b2) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb59,	// (0x00061233) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb59,	// (0x00061233) list_single_graphic_heading_pane_fp_t

0x1cea,	// (0x000533c4) list_single_cale_day_pane_fp_g1_ParamLimits

0x1cea,	// (0x000533c4) list_single_cale_day_pane_fp_g1

0x7b7b,	// (0x00059255) list_single_cale_day_pane_fp_g2_ParamLimits

0x7b7b,	// (0x00059255) list_single_cale_day_pane_fp_g2

0x372a,	// (0x00054e04) list_single_cale_day_pane_fp_g3_ParamLimits

0x372a,	// (0x00054e04) list_single_cale_day_pane_fp_g3

0x3752,	// (0x00054e2c) list_single_cale_day_pane_fp_g4_ParamLimits

0x3752,	// (0x00054e2c) list_single_cale_day_pane_fp_g4

0x3776,	// (0x00054e50) list_single_cale_day_pane_fp_g5_ParamLimits

0x3776,	// (0x00054e50) list_single_cale_day_pane_fp_g5

0x0004,

0xfb5e,	// (0x00061238) list_single_cale_day_pane_fp_g_ParamLimits

0xfb5e,	// (0x00061238) list_single_cale_day_pane_fp_g

0x1d22,	// (0x000533fc) list_single_cale_day_pane_fp_t1_ParamLimits

0x1d22,	// (0x000533fc) list_single_cale_day_pane_fp_t1

0x1d48,	// (0x00053422) list_single_cale_day_pane_fp_t2_ParamLimits

0x1d48,	// (0x00053422) list_single_cale_day_pane_fp_t2

0x1d61,	// (0x0005343b) list_single_cale_day_pane_fp_t3_ParamLimits

0x1d61,	// (0x0005343b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb69,	// (0x00061243) list_single_cale_day_pane_fp_t_ParamLimits

0xfb69,	// (0x00061243) list_single_cale_day_pane_fp_t

0x7b63,	// (0x0005923d) list_empty_pane_fp_g1_ParamLimits

0x7b63,	// (0x0005923d) list_empty_pane_fp_g1

0x1d7a,	// (0x00053454) list_empty_pane_fp_t1

0x1d88,	// (0x00053462) list_empty_pane_fp_t2

0x0001,

0xfb70,	// (0x0006124a) list_empty_pane_fp_t

0x7b63,	// (0x0005923d) list_single_heading_pane_fp_g1_ParamLimits

0x7b63,	// (0x0005923d) list_single_heading_pane_fp_g1

0x3979,	// (0x00055053) list_single_heading_pane_fp_g2_ParamLimits

0x3979,	// (0x00055053) list_single_heading_pane_fp_g2

0x39ec,	// (0x000550c6) list_single_heading_pane_fp_g3_ParamLimits

0x39ec,	// (0x000550c6) list_single_heading_pane_fp_g3

0x0002,

0xfb75,	// (0x0006124f) list_single_heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0006124f) list_single_heading_pane_fp_g

0x1d96,	// (0x00053470) list_single_heading_pane_fp_t1_ParamLimits

0x1d96,	// (0x00053470) list_single_heading_pane_fp_t1

0x1da8,	// (0x00053482) list_single_heading_pane_fp_t2_ParamLimits

0x1da8,	// (0x00053482) list_single_heading_pane_fp_t2

0x0001,

0xfb7c,	// (0x00061256) list_single_heading_pane_fp_t_ParamLimits

0xfb7c,	// (0x00061256) list_single_heading_pane_fp_t

0x3be4,	// (0x000552be) aid_size_cell_fast

0x2f27,	// (0x00054601) soft_indicator_pane_cp1_t1

0x3c21,	// (0x000552fb) cell_app_pane_cp2_ParamLimits

0x3c21,	// (0x000552fb) cell_app_pane_cp2

0x19f9,	// (0x000530d3) fep_hwr_candidate_drop_down_list_pane

0x1bd1,	// (0x000532ab) fep_hwr_candidate_pane_g3_ParamLimits

0x1bd1,	// (0x000532ab) fep_hwr_candidate_pane_g3

0xeb32,	// (0x0006020c) fep_hwr_candidate_pane_g4_ParamLimits

0xeb32,	// (0x0006020c) fep_hwr_candidate_pane_g4

0x0002,

0xfaeb,	// (0x000611c5) fep_hwr_candidate_pane_g_ParamLimits

0xfaeb,	// (0x000611c5) fep_hwr_candidate_pane_g

0x766c,	// (0x00058d46) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x766c,	// (0x00058d46) fep_vkb_candidate_drop_down_list_pane

0x7a7d,	// (0x00059157) fep_vkb_candidate_pane_g3

0x7a85,	// (0x0005915f) fep_vkb_candidate_pane_g4

0x0002,

0xfb18,	// (0x000611f2) fep_vkb_candidate_pane_g

0x1c3c,	// (0x00053316) cell_hwr_candidate_pane_g1_ParamLimits

0x1c4a,	// (0x00053324) cell_hwr_candidate_pane_g3_ParamLimits

0x1c4a,	// (0x00053324) cell_hwr_candidate_pane_g3

0x96b5,	// (0x0005ad8f) cell_hwr_candidate_pane_g4_ParamLimits

0x96b5,	// (0x0005ad8f) cell_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x00061211) cell_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x00061211) cell_hwr_candidate_pane_g

0x7a9c,	// (0x00059176) cell_vkb_candidate_pane_g3_ParamLimits

0x7a9c,	// (0x00059176) cell_vkb_candidate_pane_g3

0x7ab7,	// (0x00059191) cell_vkb_candidate_pane_g4_ParamLimits

0x7ab7,	// (0x00059191) cell_vkb_candidate_pane_g4

0x7b87,	// (0x00059261) cell_app_pane_cp2_g1_ParamLimits

0x7b87,	// (0x00059261) cell_app_pane_cp2_g1

0x7ba5,	// (0x0005927f) cell_app_pane_cp2_g2_ParamLimits

0x7ba5,	// (0x0005927f) cell_app_pane_cp2_g2

0x0001,

0xfb81,	// (0x0006125b) cell_app_pane_cp2_g_ParamLimits

0xfb81,	// (0x0006125b) cell_app_pane_cp2_g

0x7bb1,	// (0x0005928b) cell_app_pane_cp2_t1_ParamLimits

0x7bb1,	// (0x0005928b) cell_app_pane_cp2_t1

0x39de,	// (0x000550b8) grid_highlight_pane_cp1_ParamLimits

0x39de,	// (0x000550b8) grid_highlight_pane_cp1

0x1dbe,	// (0x00053498) cell_hwr_candidate_pane_cp1_ParamLimits

0x1dbe,	// (0x00053498) cell_hwr_candidate_pane_cp1

0x1c3c,	// (0x00053316) fep_hwr_candidate_drop_down_list_pane_g1

0x1ddd,	// (0x000534b7) fep_hwr_candidate_drop_down_list_pane_g2

0x1dea,	// (0x000534c4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb86,	// (0x00061260) fep_hwr_candidate_drop_down_list_pane_g

0x1df7,	// (0x000534d1) fep_hwr_candidate_drop_down_list_scroll_pane

0x1e00,	// (0x000534da) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1e00,	// (0x000534da) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1e0d,	// (0x000534e7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1e0d,	// (0x000534e7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1e1a,	// (0x000534f4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1e1a,	// (0x000534f4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1e27,	// (0x00053501) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1e27,	// (0x00053501) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1e42,	// (0x0005351c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1e42,	// (0x0005351c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1e5d,	// (0x00053537) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1e5d,	// (0x00053537) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1e78,	// (0x00053552) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1e78,	// (0x00053552) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1e93,	// (0x0005356d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1e93,	// (0x0005356d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8d,	// (0x00061267) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8d,	// (0x00061267) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7c05,	// (0x000592df) cell_vkb_candidate_pane_cp1_ParamLimits

0x7c05,	// (0x000592df) cell_vkb_candidate_pane_cp1

0x7785,	// (0x00058e5f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7785,	// (0x00058e5f) fep_vkb_candidate_drop_down_list_pane_g1

0x7c25,	// (0x000592ff) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7c25,	// (0x000592ff) fep_vkb_candidate_drop_down_list_pane_g2

0x7c32,	// (0x0005930c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7c32,	// (0x0005930c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9e,	// (0x00061278) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9e,	// (0x00061278) fep_vkb_candidate_drop_down_list_pane_g

0x7c3f,	// (0x00059319) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7c3f,	// (0x00059319) fep_vkb_candidate_drop_down_list_scroll_pane

0x7c4c,	// (0x00059326) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c4c,	// (0x00059326) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7c59,	// (0x00059333) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c59,	// (0x00059333) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7c65,	// (0x0005933f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c65,	// (0x0005933f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7bc3,	// (0x0005929d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7bc3,	// (0x0005929d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7be4,	// (0x000592be) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7be4,	// (0x000592be) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7c71,	// (0x0005934b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c71,	// (0x0005934b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7c92,	// (0x0005936c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7c92,	// (0x0005936c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7cb3,	// (0x0005938d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7cb3,	// (0x0005938d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba5,	// (0x0006127f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba5,	// (0x0006127f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb615,	// (0x0005ccef) title_pane_g1_ParamLimits

0xb628,	// (0x0005cd02) title_pane_g2_ParamLimits

0xf529,	// (0x00060c03) title_pane_g_ParamLimits

0x4057,	// (0x00055731) aid_call2_pane

0x405f,	// (0x00055739) aid_call_pane

0x4067,	// (0x00055741) popup_clock_analogue_window_g1

0x4067,	// (0x00055741) popup_clock_analogue_window_g2

0x068d,	// (0x00051d67) popup_clock_analogue_window_g3

0x0696,	// (0x00051d70) popup_clock_analogue_window_g4

0xdcee,	// (0x0005f3c8) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00060db2) popup_clock_analogue_window_g

0x069e,	// (0x00051d78) popup_clock_analogue_window_t1

0x06ac,	// (0x00051d86) clock_digital_number_pane_ParamLimits

0x06ac,	// (0x00051d86) clock_digital_number_pane

0x06b8,	// (0x00051d92) clock_digital_number_pane_cp02_ParamLimits

0x06b8,	// (0x00051d92) clock_digital_number_pane_cp02

0x06c4,	// (0x00051d9e) clock_digital_number_pane_cp03_ParamLimits

0x06c4,	// (0x00051d9e) clock_digital_number_pane_cp03

0x06d0,	// (0x00051daa) clock_digital_number_pane_cp04_ParamLimits

0x06d0,	// (0x00051daa) clock_digital_number_pane_cp04

0x06dc,	// (0x00051db6) clock_digital_separator_pane_ParamLimits

0x06dc,	// (0x00051db6) clock_digital_separator_pane

0x06e8,	// (0x00051dc2) popup_clock_digital_window_t1_ParamLimits

0x06e8,	// (0x00051dc2) popup_clock_digital_window_t1

0xdcee,	// (0x0005f3c8) clock_digital_number_pane_g1

0xdcee,	// (0x0005f3c8) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00060dbd) clock_digital_number_pane_g

0xdcee,	// (0x0005f3c8) clock_digital_separator_pane_g1

0xdcee,	// (0x0005f3c8) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00060dbd) clock_digital_separator_pane_g

0xd2a2,	// (0x0005e97c) aid_fill_nsta_ParamLimits

0xd3d8,	// (0x0005eab2) indicator_nsta_pane_ParamLimits

0x4cad,	// (0x00056387) popup_clock_analogue_window

0x4cad,	// (0x00056387) popup_clock_digital_window

0xdbfc,	// (0x0005f2d6) grid_indicator_nsta_pane_ParamLimits

0x6f0b,	// (0x000585e5) clock_nsta_pane_t2

0x0001,

0xfa6b,	// (0x00061145) clock_nsta_pane_t

0x0651,	// (0x00051d2b) aid_size_max_handle

0x065b,	// (0x00051d35) aid_size_min_handle

0x4688,	// (0x00055d62) editor_scroll_pane

0x7cce,	// (0x000593a8) ex_editor_pane

0x3b52,	// (0x0005522c) scroll_pane_cp13

0x355a,	// (0x00054c34) scroll_pane_cp14

0x4096,	// (0x00055770) scroll_pane_cp36

0xd0f5,	// (0x0005e7cf) list_single_graphic_hl_pane_cp2_ParamLimits

0xd0f5,	// (0x0005e7cf) list_single_graphic_hl_pane_cp2

0xda60,	// (0x0005f13a) list_single_graphic_hl_pane_ParamLimits

0xda60,	// (0x0005f13a) list_single_graphic_hl_pane

0x1eae,	// (0x00053588) aid_size_min_hl_cp1

0x7cd6,	// (0x000593b0) list_highlight_pane_cp34_ParamLimits

0x7cd6,	// (0x000593b0) list_highlight_pane_cp34

0x7ce7,	// (0x000593c1) list_single_graphic_hl_pane_g1_ParamLimits

0x7ce7,	// (0x000593c1) list_single_graphic_hl_pane_g1

0xc801,	// (0x0005dedb) list_single_graphic_hl_pane_g2_ParamLimits

0xc801,	// (0x0005dedb) list_single_graphic_hl_pane_g2

0xc801,	// (0x0005dedb) list_single_graphic_hl_pane_g3_ParamLimits

0xc801,	// (0x0005dedb) list_single_graphic_hl_pane_g3

0x4560,	// (0x00055c3a) list_single_graphic_hl_pane_g4_ParamLimits

0x4560,	// (0x00055c3a) list_single_graphic_hl_pane_g4

0xdc7a,	// (0x0005f354) list_single_graphic_hl_pane_g5_ParamLimits

0xdc7a,	// (0x0005f354) list_single_graphic_hl_pane_g5

0x0004,

0xfbb6,	// (0x00061290) list_single_graphic_hl_pane_g_ParamLimits

0xfbb6,	// (0x00061290) list_single_graphic_hl_pane_g

0xc80d,	// (0x0005dee7) list_single_graphic_hl_pane_t1_ParamLimits

0xc80d,	// (0x0005dee7) list_single_graphic_hl_pane_t1

0x7cf4,	// (0x000593ce) aid_size_min_hl_cp2

0x7cfd,	// (0x000593d7) list_highlight_pane_cp34_cp2_ParamLimits

0x7cfd,	// (0x000593d7) list_highlight_pane_cp34_cp2

0x7ce7,	// (0x000593c1) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7ce7,	// (0x000593c1) list_single_graphic_hl_pane_g1_cp2

0x7d0a,	// (0x000593e4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7d0a,	// (0x000593e4) list_single_graphic_hl_pane_g2_cp2

0x7d16,	// (0x000593f0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7d16,	// (0x000593f0) list_single_graphic_hl_pane_g3_cp2

0x7d24,	// (0x000593fe) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7d24,	// (0x000593fe) list_single_graphic_hl_pane_g4_cp2

0x7d30,	// (0x0005940a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7d30,	// (0x0005940a) list_single_graphic_hl_pane_g5_cp2

0xbee3,	// (0x0005d5bd) control_pane_g4_ParamLimits

0xbee3,	// (0x0005d5bd) control_pane_g4

0x49ac,	// (0x00056086) bg_popup_sub_pane_cp10_ParamLimits

0x7511,	// (0x00058beb) list_choice_list_pane_ParamLimits

0x7520,	// (0x00058bfa) scroll_pane_cp23

0x2fb7,	// (0x00054691) bg_popup_preview_window_pane_cp02_ParamLimits

0x7b08,	// (0x000591e2) list_preview_fixed_pane_ParamLimits

0x7b1e,	// (0x000591f8) list_preview_fixed_pane_cp_ParamLimits

0x7b1e,	// (0x000591f8) list_preview_fixed_pane_cp

0x7b2a,	// (0x00059204) popup_preview_fixed_window_g1_ParamLimits

0x7b2a,	// (0x00059204) popup_preview_fixed_window_g1

0x7b36,	// (0x00059210) popup_preview_fixed_window_g2_ParamLimits

0x7b36,	// (0x00059210) popup_preview_fixed_window_g2

0x0002,

0xfb3e,	// (0x00061218) popup_preview_fixed_window_g_ParamLimits

0xfb3e,	// (0x00061218) popup_preview_fixed_window_g

0x05c5,	// (0x00051c9f) aid_navi_side_left_pane_ParamLimits

0x05da,	// (0x00051cb4) aid_navi_side_right_pane_ParamLimits

0x05f2,	// (0x00051ccc) navi_icon_pane_stacon_ParamLimits

0x0606,	// (0x00051ce0) navi_navi_pane_stacon_ParamLimits

0x05f2,	// (0x00051ccc) navi_text_pane_stacon_ParamLimits

0xf311,	// (0x000609eb) main_text_info_pane

0x7d5a,	// (0x00059434) listscroll_text_info_pane

0x7d62,	// (0x0005943c) list_text_info_pane_ParamLimits

0x7d62,	// (0x0005943c) list_text_info_pane

0x7d71,	// (0x0005944b) scroll_pane_cp24_ParamLimits

0x7d71,	// (0x0005944b) scroll_pane_cp24

0xdf9e,	// (0x0005f678) list_text_info_pane_t1_ParamLimits

0xdf9e,	// (0x0005f678) list_text_info_pane_t1

0xc028,	// (0x0005d702) popup_fast_swap2_window_ParamLimits

0xc028,	// (0x0005d702) popup_fast_swap2_window

0x7dc0,	// (0x0005949a) aid_size_cell_fast2

0xcfa1,	// (0x0005e67b) bg_popup_window_pane_cp17

0x7dca,	// (0x000594a4) heading_pane_cp2

0x7dd2,	// (0x000594ac) listscroll_fast2_pane

0x7dda,	// (0x000594b4) grid_fast2_pane

0x7de4,	// (0x000594be) listscroll_fast2_pane_g1

0x7dec,	// (0x000594c6) listscroll_fast2_pane_g2

0x0001,

0xfbc1,	// (0x0006129b) listscroll_fast2_pane_g

0x3b52,	// (0x0005522c) scroll_pane_cp26

0x7df6,	// (0x000594d0) cell_fast2_pane_ParamLimits

0x7df6,	// (0x000594d0) cell_fast2_pane

0x7e0b,	// (0x000594e5) cell_fast2_pane_g1

0x7e14,	// (0x000594ee) cell_fast2_pane_g2

0x7e1d,	// (0x000594f7) cell_fast2_pane_g3

0x0002,

0xfbc6,	// (0x000612a0) cell_fast2_pane_g

0x3317,	// (0x000549f1) grid_highlight_pane_cp9

0x0b4a,	// (0x00052224) main_eswt_pane_ParamLimits

0x0b4a,	// (0x00052224) main_eswt_pane

0x7d86,	// (0x00059460) list_single_text_info_pane

0x7e25,	// (0x000594ff) eswt_ctrl_button_pane

0x7e25,	// (0x000594ff) eswt_ctrl_canvas_pane

0x7e2d,	// (0x00059507) eswt_ctrl_combo_pane

0x7e25,	// (0x000594ff) eswt_ctrl_default_pane

0x7e25,	// (0x000594ff) eswt_ctrl_label_pane

0x7e35,	// (0x0005950f) eswt_ctrl_wait_pane

0x7e3d,	// (0x00059517) eswt_shell_pane

0xcfa1,	// (0x0005e67b) listscroll_eswt_app_pane

0x7e5d,	// (0x00059537) popup_eswt_tasktip_window_ParamLimits

0x7e5d,	// (0x00059537) popup_eswt_tasktip_window

0x4f4a,	// (0x00056624) bg_popup_window_pane_cp18

0x7e76,	// (0x00059550) eswt_control_pane_g1_ParamLimits

0x7e76,	// (0x00059550) eswt_control_pane_g1

0x7e83,	// (0x0005955d) eswt_control_pane_g2_ParamLimits

0x7e83,	// (0x0005955d) eswt_control_pane_g2

0x7e90,	// (0x0005956a) eswt_control_pane_g3_ParamLimits

0x7e90,	// (0x0005956a) eswt_control_pane_g3

0x7e9d,	// (0x00059577) eswt_control_pane_g4_ParamLimits

0x7e9d,	// (0x00059577) eswt_control_pane_g4

0x0003,

0xfbcd,	// (0x000612a7) eswt_control_pane_g_ParamLimits

0xfbcd,	// (0x000612a7) eswt_control_pane_g

0x39de,	// (0x000550b8) bg_button_pane_ParamLimits

0x39de,	// (0x000550b8) bg_button_pane

0x332c,	// (0x00054a06) common_borders_pane_copy2_ParamLimits

0x332c,	// (0x00054a06) common_borders_pane_copy2

0x7eaa,	// (0x00059584) control_button_pane_g1_ParamLimits

0x7eaa,	// (0x00059584) control_button_pane_g1

0x7eb6,	// (0x00059590) control_button_pane_g2_ParamLimits

0x7eb6,	// (0x00059590) control_button_pane_g2

0x7ec2,	// (0x0005959c) control_button_pane_g3_ParamLimits

0x7ec2,	// (0x0005959c) control_button_pane_g3

0x0002,

0xfbd6,	// (0x000612b0) control_button_pane_g_ParamLimits

0xfbd6,	// (0x000612b0) control_button_pane_g

0x7ed6,	// (0x000595b0) control_button_pane_t1

0x7ee4,	// (0x000595be) control_button_pane_t2

0x0001,

0xfbdd,	// (0x000612b7) control_button_pane_t

0x4ed6,	// (0x000565b0) bg_button_pane_g1

0x4ee6,	// (0x000565c0) bg_button_pane_g2

0x4ede,	// (0x000565b8) bg_button_pane_g3

0x4ef6,	// (0x000565d0) bg_button_pane_g4

0x4eee,	// (0x000565c8) bg_button_pane_g5

0x4efe,	// (0x000565d8) bg_button_pane_g6

0x4f06,	// (0x000565e0) bg_button_pane_g7

0x4f16,	// (0x000565f0) bg_button_pane_g8

0x4f0e,	// (0x000565e8) bg_button_pane_g9

0x0008,

0xf841,	// (0x00060f1b) bg_button_pane_g

0x74cc,	// (0x00058ba6) common_borders_pane_ParamLimits

0x74cc,	// (0x00058ba6) common_borders_pane

0x7e76,	// (0x00059550) eswt_control_pane_g1_copy1_ParamLimits

0x7e76,	// (0x00059550) eswt_control_pane_g1_copy1

0x7e83,	// (0x0005955d) eswt_control_pane_g2_copy1_ParamLimits

0x7e83,	// (0x0005955d) eswt_control_pane_g2_copy1

0x7e90,	// (0x0005956a) eswt_control_pane_g3_copy1_ParamLimits

0x7e90,	// (0x0005956a) eswt_control_pane_g3_copy1

0x7e9d,	// (0x00059577) eswt_control_pane_g4_copy1_ParamLimits

0x7e9d,	// (0x00059577) eswt_control_pane_g4_copy1

0x7507,	// (0x00058be1) bg_eswt_ctrl_canvas_pane_g1

0x74cc,	// (0x00058ba6) common_borders_pane_cp2_ParamLimits

0x74cc,	// (0x00058ba6) common_borders_pane_cp2

0x74cc,	// (0x00058ba6) common_borders_pane_cp3_ParamLimits

0x74cc,	// (0x00058ba6) common_borders_pane_cp3

0x7ef2,	// (0x000595cc) separator_horizontal_pane

0x7efa,	// (0x000595d4) separator_vertical_pane

0x7e76,	// (0x00059550) eswt_control_pane_g1_copy2_ParamLimits

0x7e76,	// (0x00059550) eswt_control_pane_g1_copy2

0x7e83,	// (0x0005955d) eswt_control_pane_g2_copy2_ParamLimits

0x7e83,	// (0x0005955d) eswt_control_pane_g2_copy2

0x7e90,	// (0x0005956a) eswt_control_pane_g3_copy2_ParamLimits

0x7e90,	// (0x0005956a) eswt_control_pane_g3_copy2

0x7e9d,	// (0x00059577) eswt_control_pane_g4_copy2_ParamLimits

0x7e9d,	// (0x00059577) eswt_control_pane_g4_copy2

0xcfa1,	// (0x0005e67b) common_borders_pane_cp4

0x7f03,	// (0x000595dd) separator_horizontal_pane_g1

0x7f0c,	// (0x000595e6) separator_horizontal_pane_g2

0x7f15,	// (0x000595ef) separator_horizontal_pane_g3

0x0002,

0xfbe2,	// (0x000612bc) separator_horizontal_pane_g

0x7e76,	// (0x00059550) eswt_control_pane_g1_copy3_ParamLimits

0x7e76,	// (0x00059550) eswt_control_pane_g1_copy3

0x7e83,	// (0x0005955d) eswt_control_pane_g2_copy3_ParamLimits

0x7e83,	// (0x0005955d) eswt_control_pane_g2_copy3

0x7e90,	// (0x0005956a) eswt_control_pane_g3_copy3_ParamLimits

0x7e90,	// (0x0005956a) eswt_control_pane_g3_copy3

0x7e9d,	// (0x00059577) eswt_control_pane_g4_copy3_ParamLimits

0x7e9d,	// (0x00059577) eswt_control_pane_g4_copy3

0xcfa1,	// (0x0005e67b) common_borders_pane_cp5

0x7f1e,	// (0x000595f8) separator_vertical_pane_g1

0x7f27,	// (0x00059601) separator_vertical_pane_g2

0x7f30,	// (0x0005960a) separator_vertical_pane_g3

0x0002,

0xfbe9,	// (0x000612c3) separator_vertical_pane_g

0x7e76,	// (0x00059550) eswt_control_pane_g1_copy4_ParamLimits

0x7e76,	// (0x00059550) eswt_control_pane_g1_copy4

0x7e83,	// (0x0005955d) eswt_control_pane_g2_copy4_ParamLimits

0x7e83,	// (0x0005955d) eswt_control_pane_g2_copy4

0x7e90,	// (0x0005956a) eswt_control_pane_g3_copy4_ParamLimits

0x7e90,	// (0x0005956a) eswt_control_pane_g3_copy4

0x7e9d,	// (0x00059577) eswt_control_pane_g4_copy4_ParamLimits

0x7e9d,	// (0x00059577) eswt_control_pane_g4_copy4

0x7f39,	// (0x00059613) eswt_ctrl_combo_button_pane

0x7f41,	// (0x0005961b) eswt_ctrl_input_pane

0x7f49,	// (0x00059623) popup_choice_list_window_cp70

0x7f51,	// (0x0005962b) eswt_ctrl_input_pane_t1

0xcfa1,	// (0x0005e67b) input_focus_pane_cp70

0x74cc,	// (0x00058ba6) bg_button_pane_cp70_ParamLimits

0x74cc,	// (0x00058ba6) bg_button_pane_cp70

0x7f5f,	// (0x00059639) eswt_ctrl_combo_button_pane_g1

0x7f67,	// (0x00059641) wait_bar_pane_cp70

0x4f4a,	// (0x00056624) bg_popup_window_pane_cp70_ParamLimits

0x4f4a,	// (0x00056624) bg_popup_window_pane_cp70

0x7f6f,	// (0x00059649) popup_eswt_tasktip_window_t1

0x7f85,	// (0x0005965f) wait_bar_pane_cp71_ParamLimits

0x7f85,	// (0x0005965f) wait_bar_pane_cp71

0x7f91,	// (0x0005966b) grid_eswt_app_pane

0x3e70,	// (0x0005554a) scroll_pane_cp70

0xdfb9,	// (0x0005f693) cell_eswt_app_pane_ParamLimits

0xdfb9,	// (0x0005f693) cell_eswt_app_pane

0xdfe3,	// (0x0005f6bd) cell_eswt_app_pane_g1_ParamLimits

0xdfe3,	// (0x0005f6bd) cell_eswt_app_pane_g1

0xe012,	// (0x0005f6ec) cell_eswt_app_pane_g2_ParamLimits

0xe012,	// (0x0005f6ec) cell_eswt_app_pane_g2

0x0001,

0xfbf0,	// (0x000612ca) cell_eswt_app_pane_g_ParamLimits

0xfbf0,	// (0x000612ca) cell_eswt_app_pane_g

0xe03b,	// (0x0005f715) cell_eswt_app_pane_t1_ParamLimits

0xe03b,	// (0x0005f715) cell_eswt_app_pane_t1

0x8054,	// (0x0005972e) grid_highlight_pane_cp70_ParamLimits

0x8054,	// (0x0005972e) grid_highlight_pane_cp70

0x4560,	// (0x00055c3a) set_content_pane_g1

0xd25f,	// (0x0005e939) status_small_volume_pane

0xc823,	// (0x0005defd) status_small_volume_pane_g1

0xc82b,	// (0x0005df05) volume_small2_pane

0xc834,	// (0x0005df0e) volume_small2_pane_g1

0xc83d,	// (0x0005df17) volume_small2_pane_g2

0xc846,	// (0x0005df20) volume_small2_pane_g3

0xc84f,	// (0x0005df29) volume_small2_pane_g4

0xc858,	// (0x0005df32) volume_small2_pane_g5

0xc861,	// (0x0005df3b) volume_small2_pane_g6

0xc86a,	// (0x0005df44) volume_small2_pane_g7

0xc873,	// (0x0005df4d) volume_small2_pane_g8

0xc87c,	// (0x0005df56) volume_small2_pane_g9

0xc885,	// (0x0005df5f) volume_small2_pane_g10

0x0009,

0xfbf5,	// (0x000612cf) volume_small2_pane_g

0x78cd,	// (0x00058fa7) fep_vkb_top_text_pane_g1_ParamLimits

0xdf46,	// (0x0005f620) fep_vkb_top_text_pane_t1_ParamLimits

0x7b42,	// (0x0005921c) popup_preview_fixed_window_g3_ParamLimits

0x7b42,	// (0x0005921c) popup_preview_fixed_window_g3

0xc651,	// (0x0005dd2b) popup_toolbar_trans_pane

0xd8d4,	// (0x0005efae) aid_height_set_list_ParamLimits

0x62bf,	// (0x00057999) aid_size_parent_ParamLimits

0x49ac,	// (0x00056086) list_highlight_pane_cp2_ParamLimits

0x4560,	// (0x00055c3a) set_content_pane_g1_ParamLimits

0xc771,	// (0x0005de4b) list_single_image_pane_ParamLimits

0xc771,	// (0x0005de4b) list_single_image_pane

0xe06d,	// (0x0005f747) aid_size_cell_image_ParamLimits

0xe06d,	// (0x0005f747) aid_size_cell_image

0xe07a,	// (0x0005f754) grid_single_image_pane_ParamLimits

0xe07a,	// (0x0005f754) grid_single_image_pane

0x6eba,	// (0x00058594) list_single_image_pane_g1_ParamLimits

0x6eba,	// (0x00058594) list_single_image_pane_g1

0x8079,	// (0x00059753) list_single_image_pane_g2_ParamLimits

0x8079,	// (0x00059753) list_single_image_pane_g2

0x0001,

0xfc0a,	// (0x000612e4) list_single_image_pane_g_ParamLimits

0xfc0a,	// (0x000612e4) list_single_image_pane_g

0x808d,	// (0x00059767) list_single_image_pane_t1_ParamLimits

0x808d,	// (0x00059767) list_single_image_pane_t1

0xe086,	// (0x0005f760) cell_image_list_pane_ParamLimits

0xe086,	// (0x0005f760) cell_image_list_pane

0xe09a,	// (0x0005f774) cell_image_list_pane_g1

0xe0a3,	// (0x0005f77d) cell_image_list_pane_g2

0x0001,

0xfc0f,	// (0x000612e9) cell_image_list_pane_g

0x80c9,	// (0x000597a3) aid_size_cell_tb_trans_pane

0x39de,	// (0x000550b8) bg_tb_trans_pane

0x80db,	// (0x000597b5) grid_tb_trans_pane

0x4ed6,	// (0x000565b0) bg_tb_trans_pane_g1

0x4ee6,	// (0x000565c0) bg_tb_trans_pane_g2

0x4ede,	// (0x000565b8) bg_tb_trans_pane_g3

0x4ef6,	// (0x000565d0) bg_tb_trans_pane_g4

0x4eee,	// (0x000565c8) bg_tb_trans_pane_g5

0x4f16,	// (0x000565f0) bg_tb_trans_pane_g6

0x4f0e,	// (0x000565e8) bg_tb_trans_pane_g7

0x4efe,	// (0x000565d8) bg_tb_trans_pane_g8

0x4f06,	// (0x000565e0) bg_tb_trans_pane_g9

0x0008,

0xfc14,	// (0x000612ee) bg_tb_trans_pane_g

0x80ef,	// (0x000597c9) cell_toolbar_trans_pane_ParamLimits

0x80ef,	// (0x000597c9) cell_toolbar_trans_pane

0x7507,	// (0x00058be1) cell_toolbar_trans_pane_g1

0xdd31,	// (0x0005f40b) list_form2_midp_pane_t1

0xdd3f,	// (0x0005f419) list_form2_midp_pane_t2

0x0001,

0xfab1,	// (0x0006118b) list_form2_midp_pane_t

0x70f8,	// (0x000587d2) scroll_pane_cp51_ParamLimits

0x72b4,	// (0x0005898e) form2_midp_wait_pane_g1

0x72bd,	// (0x00058997) form2_midp_wait_pane_g2

0x72c6,	// (0x000589a0) form2_midp_wait_pane_g3

0x0002,

0xfac6,	// (0x000611a0) form2_midp_wait_pane_g

0x2d2e,	// (0x00054408) list_highlight_pane_cp21_ParamLimits

0x7312,	// (0x000589ec) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7321,	// (0x000589fb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6477,	// (0x00057b51) list_single_2graphic_im_pane_ParamLimits

0x6477,	// (0x00057b51) list_single_2graphic_im_pane

0x8115,	// (0x000597ef) list_single_2graphic_im_pane_g1_ParamLimits

0x8115,	// (0x000597ef) list_single_2graphic_im_pane_g1

0x8126,	// (0x00059800) list_single_2graphic_im_pane_g2_ParamLimits

0x8126,	// (0x00059800) list_single_2graphic_im_pane_g2

0x8132,	// (0x0005980c) list_single_2graphic_im_pane_g3_ParamLimits

0x8132,	// (0x0005980c) list_single_2graphic_im_pane_g3

0x0003,

0xfc27,	// (0x00061301) list_single_2graphic_im_pane_g_ParamLimits

0xfc27,	// (0x00061301) list_single_2graphic_im_pane_g

0x8152,	// (0x0005982c) list_single_2graphic_im_pane_t1_ParamLimits

0x8152,	// (0x0005982c) list_single_2graphic_im_pane_t1

0x7b4e,	// (0x00059228) list_single_graphic_2heading_pane_fp_ParamLimits

0x7b4e,	// (0x00059228) list_single_graphic_2heading_pane_fp

0x1ca0,	// (0x0005337a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x1ca0,	// (0x0005337a) list_single_graphic_2heading_pane_fp_g1

0x7b63,	// (0x0005923d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7b63,	// (0x0005923d) list_single_graphic_2heading_pane_fp_g2

0x3979,	// (0x00055053) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3979,	// (0x00055053) list_single_graphic_2heading_pane_fp_g3

0x39ec,	// (0x000550c6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x39ec,	// (0x000550c6) list_single_graphic_2heading_pane_fp_g4

0x7b6f,	// (0x00059249) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7b6f,	// (0x00059249) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb4e,	// (0x00061228) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb4e,	// (0x00061228) list_single_graphic_2heading_pane_fp_g

0x37c4,	// (0x00054e9e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x37c4,	// (0x00054e9e) list_single_graphic_2heading_pane_fp_t1

0x1cd8,	// (0x000533b2) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1cd8,	// (0x000533b2) list_single_graphic_2heading_pane_fp_t2

0x37da,	// (0x00054eb4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x37da,	// (0x00054eb4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc30,	// (0x0006130a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc30,	// (0x0006130a) list_single_graphic_2heading_pane_fp_t

0x7593,	// (0x00058c6d) fep_hwr_write_pane_g5_ParamLimits

0x7593,	// (0x00058c6d) fep_hwr_write_pane_g5

0x759f,	// (0x00058c79) fep_hwr_write_pane_g6_ParamLimits

0x759f,	// (0x00058c79) fep_hwr_write_pane_g6

0x7e3d,	// (0x00059517) eswt_shell_pane_ParamLimits

0x4f4a,	// (0x00056624) bg_popup_window_pane_cp18_ParamLimits

0x7e6e,	// (0x00059548) heading_pane_cp70

0x7f6f,	// (0x00059649) popup_eswt_tasktip_window_t1_ParamLimits

0xd2fd,	// (0x0005e9d7) aid_touch_tab_arrow_left

0xd313,	// (0x0005e9ed) aid_touch_tab_arrow_right

0xb640,	// (0x0005cd1a) title_pane_g3_ParamLimits

0xb640,	// (0x0005cd1a) title_pane_g3

0x399d,	// (0x00055077) set_value_pane_g1

0xc651,	// (0x0005dd2b) popup_toolbar_trans_pane_ParamLimits

0x80c9,	// (0x000597a3) aid_size_cell_tb_trans_pane_ParamLimits

0x39de,	// (0x000550b8) bg_tb_trans_pane_ParamLimits

0x80db,	// (0x000597b5) grid_tb_trans_pane_ParamLimits

0x2fb7,	// (0x00054691) cont_note_pane_ParamLimits

0x2fb7,	// (0x00054691) cont_note_pane

0x332c,	// (0x00054a06) cont_snote2_single_text_pane_ParamLimits

0x332c,	// (0x00054a06) cont_snote2_single_text_pane

0x332c,	// (0x00054a06) cont_snote2_single_graphic_pane_ParamLimits

0x332c,	// (0x00054a06) cont_snote2_single_graphic_pane

0x5565,	// (0x00056c3f) cont_note_wait_pane_ParamLimits

0x5565,	// (0x00056c3f) cont_note_wait_pane

0x5565,	// (0x00056c3f) cont_note_image_pane_ParamLimits

0x5565,	// (0x00056c3f) cont_note_image_pane

0x8183,	// (0x0005985d) popup_note2_window_g1_ParamLimits

0x8183,	// (0x0005985d) popup_note2_window_g1

0x81b4,	// (0x0005988e) popup_note2_window_t1_ParamLimits

0x81b4,	// (0x0005988e) popup_note2_window_t1

0x81f9,	// (0x000598d3) popup_note2_window_t2_ParamLimits

0x81f9,	// (0x000598d3) popup_note2_window_t2

0x823e,	// (0x00059918) popup_note2_window_t3_ParamLimits

0x823e,	// (0x00059918) popup_note2_window_t3

0x8283,	// (0x0005995d) popup_note2_window_t4_ParamLimits

0x8283,	// (0x0005995d) popup_note2_window_t4

0x303b,	// (0x00054715) popup_note2_window_t5_ParamLimits

0x303b,	// (0x00054715) popup_note2_window_t5

0x0004,

0xfc3c,	// (0x00061316) popup_note2_window_t_ParamLimits

0xfc3c,	// (0x00061316) popup_note2_window_t

0x82b2,	// (0x0005998c) popup_note2_image_window_g1_ParamLimits

0x82b2,	// (0x0005998c) popup_note2_image_window_g1

0x82be,	// (0x00059998) popup_note2_image_window_g2_ParamLimits

0x82be,	// (0x00059998) popup_note2_image_window_g2

0x0001,

0xfc47,	// (0x00061321) popup_note2_image_window_g_ParamLimits

0xfc47,	// (0x00061321) popup_note2_image_window_g

0x82d0,	// (0x000599aa) popup_note2_image_window_t1_ParamLimits

0x82d0,	// (0x000599aa) popup_note2_image_window_t1

0x82e8,	// (0x000599c2) popup_note2_image_window_t2_ParamLimits

0x82e8,	// (0x000599c2) popup_note2_image_window_t2

0x8300,	// (0x000599da) popup_note2_image_window_t3_ParamLimits

0x8300,	// (0x000599da) popup_note2_image_window_t3

0x0002,

0xfc4c,	// (0x00061326) popup_note2_image_window_t_ParamLimits

0xfc4c,	// (0x00061326) popup_note2_image_window_t

0x5573,	// (0x00056c4d) popup_note2_wait_window_g1_ParamLimits

0x5573,	// (0x00056c4d) popup_note2_wait_window_g1

0x831c,	// (0x000599f6) popup_note2_wait_window_g2_ParamLimits

0x831c,	// (0x000599f6) popup_note2_wait_window_g2

0x558b,	// (0x00056c65) popup_note2_wait_window_g3_ParamLimits

0x558b,	// (0x00056c65) popup_note2_wait_window_g3

0x0002,

0xfc53,	// (0x0006132d) popup_note2_wait_window_g_ParamLimits

0xfc53,	// (0x0006132d) popup_note2_wait_window_g

0x8328,	// (0x00059a02) popup_note2_wait_window_t1_ParamLimits

0x8328,	// (0x00059a02) popup_note2_wait_window_t1

0x8346,	// (0x00059a20) popup_note2_wait_window_t2_ParamLimits

0x8346,	// (0x00059a20) popup_note2_wait_window_t2

0x8364,	// (0x00059a3e) popup_note2_wait_window_t3_ParamLimits

0x8364,	// (0x00059a3e) popup_note2_wait_window_t3

0x8376,	// (0x00059a50) popup_note2_wait_window_t4_ParamLimits

0x8376,	// (0x00059a50) popup_note2_wait_window_t4

0x0003,

0xfc5a,	// (0x00061334) popup_note2_wait_window_t_ParamLimits

0xfc5a,	// (0x00061334) popup_note2_wait_window_t

0x8388,	// (0x00059a62) wait_bar2_pane_ParamLimits

0x8388,	// (0x00059a62) wait_bar2_pane

0x83a0,	// (0x00059a7a) popup_snote2_single_text_window_g1_ParamLimits

0x83a0,	// (0x00059a7a) popup_snote2_single_text_window_g1

0x83c8,	// (0x00059aa2) popup_snote2_single_text_window_t1_ParamLimits

0x83c8,	// (0x00059aa2) popup_snote2_single_text_window_t1

0x8414,	// (0x00059aee) popup_snote2_single_text_window_t2_ParamLimits

0x8414,	// (0x00059aee) popup_snote2_single_text_window_t2

0x8460,	// (0x00059b3a) popup_snote2_single_text_window_t3_ParamLimits

0x8460,	// (0x00059b3a) popup_snote2_single_text_window_t3

0x84a1,	// (0x00059b7b) popup_snote2_single_text_window_t4_ParamLimits

0x84a1,	// (0x00059b7b) popup_snote2_single_text_window_t4

0x84d7,	// (0x00059bb1) popup_snote2_single_text_window_t5_ParamLimits

0x84d7,	// (0x00059bb1) popup_snote2_single_text_window_t5

0x0004,

0xfc63,	// (0x0006133d) popup_snote2_single_text_window_t_ParamLimits

0xfc63,	// (0x0006133d) popup_snote2_single_text_window_t

0x8502,	// (0x00059bdc) popup_snote2_single_graphic_window_g1_ParamLimits

0x8502,	// (0x00059bdc) popup_snote2_single_graphic_window_g1

0x852a,	// (0x00059c04) popup_snote2_single_graphic_window_g2_ParamLimits

0x852a,	// (0x00059c04) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6e,	// (0x00061348) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6e,	// (0x00061348) popup_snote2_single_graphic_window_g

0x8552,	// (0x00059c2c) popup_snote2_single_graphic_window_t1_ParamLimits

0x8552,	// (0x00059c2c) popup_snote2_single_graphic_window_t1

0x859e,	// (0x00059c78) popup_snote2_single_graphic_window_t2_ParamLimits

0x859e,	// (0x00059c78) popup_snote2_single_graphic_window_t2

0x8460,	// (0x00059b3a) popup_snote2_single_graphic_window_t3_ParamLimits

0x8460,	// (0x00059b3a) popup_snote2_single_graphic_window_t3

0x84a1,	// (0x00059b7b) popup_snote2_single_graphic_window_t4_ParamLimits

0x84a1,	// (0x00059b7b) popup_snote2_single_graphic_window_t4

0x84d7,	// (0x00059bb1) popup_snote2_single_graphic_window_t5_ParamLimits

0x84d7,	// (0x00059bb1) popup_snote2_single_graphic_window_t5

0x0004,

0xfc73,	// (0x0006134d) popup_snote2_single_graphic_window_t_ParamLimits

0xfc73,	// (0x0006134d) popup_snote2_single_graphic_window_t

0x6fb9,	// (0x00058693) clock_nsta_pane_cp2_t1

0x6fb9,	// (0x00058693) clock_nsta_pane_cp2_t2

0x0001,

0xfa87,	// (0x00061161) clock_nsta_pane_cp2_t

0x0343,	// (0x00051a1d) form_field_data_wide_pane_g1_ParamLimits

0x3979,	// (0x00055053) form_field_data_wide_pane_g2_ParamLimits

0x3979,	// (0x00055053) form_field_data_wide_pane_g2

0x39ec,	// (0x000550c6) form_field_data_wide_pane_g3_ParamLimits

0x39ec,	// (0x000550c6) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00060d35) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00060d35) form_field_data_wide_pane_g

0xdbe6,	// (0x0005f2c0) grid_touch_3_pane_ParamLimits

0xdbe6,	// (0x0005f2c0) grid_touch_3_pane

0xe0ac,	// (0x0005f786) cell_touch_3_pane_ParamLimits

0xe0ac,	// (0x0005f786) cell_touch_3_pane

0x7507,	// (0x00058be1) cell_touch_3_pane_g1

0x7507,	// (0x00058be1) cell_touch_3_pane_g2

0x0001,

0xfb0c,	// (0x000611e6) cell_touch_3_pane_g

0x3093,	// (0x0005476d) cont_query_data_pane

0x309b,	// (0x00054775) cont_query_data_pane_cp1

0x8618,	// (0x00059cf2) button_value_adjust_pane_cp7

0x8620,	// (0x00059cfa) query_popup_pane_cp3

0x4170,	// (0x0005584a) bg_popup_sub_pane_cp22_ParamLimits

0x0707,	// (0x00051de1) navi_navi_volume_pane_cp2

0x0722,	// (0x00051dfc) popup_side_volume_key_window_g2

0x0731,	// (0x00051e0b) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00060dcb) popup_side_volume_key_window_g

0x074e,	// (0x00051e28) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00060dd2) popup_side_volume_key_window_t

0x442a,	// (0x00055b04) popup_side_volume_key_window_ParamLimits

0xba5f,	// (0x0005d139) list_double_graphic_pane_g4_ParamLimits

0xba5f,	// (0x0005d139) list_double_graphic_pane_g4

0xda4d,	// (0x0005f127) list_single_2heading_msg_pane_ParamLimits

0xda4d,	// (0x0005f127) list_single_2heading_msg_pane

0xdc8e,	// (0x0005f368) list_single_2heading_msg_pane_g1_ParamLimits

0xdc8e,	// (0x0005f368) list_single_2heading_msg_pane_g1

0xdc9a,	// (0x0005f374) list_single_2heading_msg_pane_g2_ParamLimits

0xdc9a,	// (0x0005f374) list_single_2heading_msg_pane_g2

0xdcad,	// (0x0005f387) list_single_2heading_msg_pane_g3_ParamLimits

0xdcad,	// (0x0005f387) list_single_2heading_msg_pane_g3

0x381e,	// (0x00054ef8) list_single_2heading_msg_pane_g4_ParamLimits

0x381e,	// (0x00054ef8) list_single_2heading_msg_pane_g4

0x0003,

0xfc7e,	// (0x00061358) list_single_2heading_msg_pane_g_ParamLimits

0xfc7e,	// (0x00061358) list_single_2heading_msg_pane_g

0x3836,	// (0x00054f10) list_single_2heading_msg_pane_t1_ParamLimits

0x3836,	// (0x00054f10) list_single_2heading_msg_pane_t1

0xc88e,	// (0x0005df68) list_single_2heading_msg_pane_t2_ParamLimits

0xc88e,	// (0x0005df68) list_single_2heading_msg_pane_t2

0xc8f9,	// (0x0005dfd3) list_single_2heading_msg_pane_t3_ParamLimits

0xc8f9,	// (0x0005dfd3) list_single_2heading_msg_pane_t3

0x38cb,	// (0x00054fa5) list_single_2heading_msg_pane_t4_ParamLimits

0x38cb,	// (0x00054fa5) list_single_2heading_msg_pane_t4

0x0003,

0xfc87,	// (0x00061361) list_single_2heading_msg_pane_t_ParamLimits

0xfc87,	// (0x00061361) list_single_2heading_msg_pane_t

0x2c82,	// (0x0005435c) title_pane_g4_ParamLimits

0x2c82,	// (0x0005435c) title_pane_g4

0x0516,	// (0x00051bf0) title_pane_stacon_g3_ParamLimits

0x0516,	// (0x00051bf0) title_pane_stacon_g3

0x8146,	// (0x00059820) list_single_2graphic_im_pane_g4_ParamLimits

0x8146,	// (0x00059820) list_single_2graphic_im_pane_g4

0x5fc4,	// (0x0005769e) popup_side_volume_key_window_cp

0x67d4,	// (0x00057eae) main_idle_act2_pane_t1

0x1145,	// (0x0005281f) toolbar_button_pane_g10

0xb99c,	// (0x0005d076) popup_toolbar_window_cp1

0x6faa,	// (0x00058684) clock_nsta_pane_cp_t1

0x6faa,	// (0x00058684) clock_nsta_pane_cp_t2

0x0001,

0xfa82,	// (0x0006115c) clock_nsta_pane_cp_t

0x0707,	// (0x00051de1) navi_navi_volume_pane_cp2_ParamLimits

0x0716,	// (0x00051df0) popup_side_volume_key_window_g1_ParamLimits

0x0722,	// (0x00051dfc) popup_side_volume_key_window_g2_ParamLimits

0x0731,	// (0x00051e0b) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00060dcb) popup_side_volume_key_window_g_ParamLimits

0x19e5,	// (0x000530bf) fep_hwr_aid_pane

0x1a8c,	// (0x00053166) bg_fep_hwr_top_pane_g4_ParamLimits

0x7563,	// (0x00058c3d) fep_hwr_top_pane_g1_ParamLimits

0x7575,	// (0x00058c4f) fep_hwr_top_pane_g2_ParamLimits

0x1aac,	// (0x00053186) fep_hwr_top_pane_g3_ParamLimits

0xfad7,	// (0x000611b1) fep_hwr_top_pane_g_ParamLimits

0x1ac1,	// (0x0005319b) fep_hwr_top_text_pane_ParamLimits

0x5d87,	// (0x00057461) aid_touch_tab_arrow_arrow_2

0x5d90,	// (0x0005746a) aid_touch_tab_arrow_left_2

0x19f9,	// (0x000530d3) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1a30,	// (0x0005310a) fep_hwr_prediction_pane

0x76d5,	// (0x00058daf) fep_vkb_prediction_pane

0xdf26,	// (0x0005f600) fep_vkb_side_pane_g3_ParamLimits

0xdf26,	// (0x0005f600) fep_vkb_side_pane_g3

0x1c3c,	// (0x00053316) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1ddd,	// (0x000534b7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1dea,	// (0x000534c4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb86,	// (0x00061260) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1f2e,	// (0x00053608) fep_hwr_prediction_pane_g1

0x1f38,	// (0x00053612) fep_hwr_prediction_pane_g2

0x1f40,	// (0x0005361a) fep_hwr_prediction_pane_g3

0x1f48,	// (0x00053622) fep_hwr_prediction_pane_g4

0x0003,

0xfc90,	// (0x0006136a) fep_hwr_prediction_pane_g

0x8645,	// (0x00059d1f) fep_vkb_prediction_pane_g1

0x864f,	// (0x00059d29) fep_vkb_prediction_pane_g2

0x8657,	// (0x00059d31) fep_vkb_prediction_pane_g3

0x865f,	// (0x00059d39) fep_vkb_prediction_pane_g4

0x0003,

0xfc99,	// (0x00061373) fep_vkb_prediction_pane_g

0x150c,	// (0x00052be6) slider_set_pane_g3

0x1520,	// (0x00052bfa) slider_set_pane_g4

0x1538,	// (0x00052c12) slider_set_pane_g5

0x150c,	// (0x00052be6) slider_set_pane_g6

0x154e,	// (0x00052c28) slider_set_pane_g7

0x6424,	// (0x00057afe) slider_form_pane_g3

0x642d,	// (0x00057b07) slider_form_pane_g4

0x6435,	// (0x00057b0f) slider_form_pane_g5

0x6424,	// (0x00057afe) slider_form_pane_g6

0xda1f,	// (0x0005f0f9) slider_form_pane_g7

0x6a7f,	// (0x00058159) slider_set_pane_vc_g3

0x6a88,	// (0x00058162) slider_set_pane_vc_g4

0x6a91,	// (0x0005816b) slider_set_pane_vc_g5

0x6a7f,	// (0x00058159) slider_set_pane_vc_g6

0x6a9a,	// (0x00058174) slider_set_pane_vc_g7

0x6c5c,	// (0x00058336) slider_form_pane_vc_g1

0x6c65,	// (0x0005833f) slider_form_pane_vc_g2

0x6c6e,	// (0x00058348) slider_form_pane_vc_g3

0x6c5c,	// (0x00058336) slider_form_pane_vc_g4

0x6c77,	// (0x00058351) slider_form_pane_vc_g5

0x0004,

0xfa54,	// (0x0006112e) slider_form_pane_vc_g

0xf311,	// (0x000609eb) main_idle_act3_pane

0x8667,	// (0x00059d41) ai3_links_pane

0xe0f4,	// (0x0005f7ce) popup_ai3_data_window_ParamLimits

0xe0f4,	// (0x0005f7ce) popup_ai3_data_window

0xcfa1,	// (0x0005e67b) grid_ai3_links_pane

0xe10e,	// (0x0005f7e8) cell_ai3_links_pane_ParamLimits

0xe10e,	// (0x0005f7e8) cell_ai3_links_pane

0x86a2,	// (0x00059d7c) bg_popup_sub_pane_cp11

0x86af,	// (0x00059d89) cell_ai3_links_pane_g1

0xcfa1,	// (0x0005e67b) bg_popup_sub_pane_cp12

0x86d4,	// (0x00059dae) heading_ai3_data_pane

0x86dc,	// (0x00059db6) list_ai3_gene_pane

0x86e8,	// (0x00059dc2) popup_ai3_data_window_g1

0x86f0,	// (0x00059dca) heading_ai3_data_pane_g1

0x86f8,	// (0x00059dd2) heading_ai3_data_pane_t1

0x8706,	// (0x00059de0) list_double_ai3_gene_pane_ParamLimits

0x8706,	// (0x00059de0) list_double_ai3_gene_pane

0x8713,	// (0x00059ded) list_single_ai3_gene_pane_ParamLimits

0x8713,	// (0x00059ded) list_single_ai3_gene_pane

0x74cc,	// (0x00058ba6) list_highlight_pane_cp7_ParamLimits

0x74cc,	// (0x00058ba6) list_highlight_pane_cp7

0x8720,	// (0x00059dfa) list_single_a13_gene_pane_t1_ParamLimits

0x8720,	// (0x00059dfa) list_single_a13_gene_pane_t1

0x8737,	// (0x00059e11) list_single_ai3_gene_pane_g1

0x8740,	// (0x00059e1a) list_single_ai3_gene_pane_g2

0x0001,

0xfca2,	// (0x0006137c) list_single_ai3_gene_pane_g

0x8748,	// (0x00059e22) list_double_ai3_gene_pane_g1_ParamLimits

0x8748,	// (0x00059e22) list_double_ai3_gene_pane_g1

0x8754,	// (0x00059e2e) list_double_ai3_gene_pane_t1_ParamLimits

0x8754,	// (0x00059e2e) list_double_ai3_gene_pane_t1

0x8770,	// (0x00059e4a) list_double_ai3_gene_pane_t2_ParamLimits

0x8770,	// (0x00059e4a) list_double_ai3_gene_pane_t2

0x8786,	// (0x00059e60) list_double_ai3_gene_pane_t3_ParamLimits

0x8786,	// (0x00059e60) list_double_ai3_gene_pane_t3

0x0002,

0xfca7,	// (0x00061381) list_double_ai3_gene_pane_t_ParamLimits

0xfca7,	// (0x00061381) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x37f0,	// (0x00054eca) aid_size_min_col_2

0xe0de,	// (0x0005f7b8) aid_size_min_msg_ParamLimits

0xe0de,	// (0x0005f7b8) aid_size_min_msg

0xdf3a,	// (0x0005f614) fep_vkb_top_text_pane_g2_ParamLimits

0xdf3a,	// (0x0005f614) fep_vkb_top_text_pane_g2

0x0001,

0xfb07,	// (0x000611e1) fep_vkb_top_text_pane_g_ParamLimits

0xfb07,	// (0x000611e1) fep_vkb_top_text_pane_g

0xf311,	// (0x000609eb) main_hc_apps_shell_pane

0x87a3,	// (0x00059e7d) grid_hc_apps_pane_ParamLimits

0x87a3,	// (0x00059e7d) grid_hc_apps_pane

0x87b5,	// (0x00059e8f) list_hc_apps_pane

0x87bd,	// (0x00059e97) scroll_pane_cp37_ParamLimits

0x87bd,	// (0x00059e97) scroll_pane_cp37

0xe128,	// (0x0005f802) cell_hc_apps_pane_ParamLimits

0xe128,	// (0x0005f802) cell_hc_apps_pane

0xe1e6,	// (0x0005f8c0) cell_hc_apps_pane_g1_ParamLimits

0xe1e6,	// (0x0005f8c0) cell_hc_apps_pane_g1

0x88a7,	// (0x00059f81) cell_hc_apps_pane_g2_ParamLimits

0x88a7,	// (0x00059f81) cell_hc_apps_pane_g2

0x88c3,	// (0x00059f9d) cell_hc_apps_pane_g3_ParamLimits

0x88c3,	// (0x00059f9d) cell_hc_apps_pane_g3

0x0002,

0xfcae,	// (0x00061388) cell_hc_apps_pane_g_ParamLimits

0xfcae,	// (0x00061388) cell_hc_apps_pane_g

0xe212,	// (0x0005f8ec) cell_hc_apps_pane_t1_ParamLimits

0xe212,	// (0x0005f8ec) cell_hc_apps_pane_t1

0x2fb7,	// (0x00054691) grid_highlight_pane_cp10_ParamLimits

0x2fb7,	// (0x00054691) grid_highlight_pane_cp10

0xe250,	// (0x0005f92a) list_single_hc_apps_pane_ParamLimits

0xe250,	// (0x0005f92a) list_single_hc_apps_pane

0xe27d,	// (0x0005f957) list_single_hc_apps_pane_g1

0xdcb9,	// (0x0005f393) list_single_hc_apps_pane_g2

0x0001,

0xfcb5,	// (0x0006138f) list_single_hc_apps_pane_g

0xdcd2,	// (0x0005f3ac) list_single_hc_apps_pane_g2_copy1

0x3925,	// (0x00054fff) list_single_hc_apps_pane_t1

0x2d2e,	// (0x00054408) bg_set_opt_pane_cp_ParamLimits

0xf4a0,	// (0x00060b7a) setting_slider_pane_t1_ParamLimits

0xf4b9,	// (0x00060b93) setting_slider_pane_t2_ParamLimits

0xf4d3,	// (0x00060bad) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00060c13) setting_slider_pane_t_ParamLimits

0xf4eb,	// (0x00060bc5) slider_set_pane_ParamLimits

0x0a1e,	// (0x000520f8) control_pane_g5_ParamLimits

0x0a1e,	// (0x000520f8) control_pane_g5

0x6273,	// (0x0005794d) slider_set_pane_g1_ParamLimits

0x1500,	// (0x00052bda) slider_set_pane_g2_ParamLimits

0x150c,	// (0x00052be6) slider_set_pane_g3_ParamLimits

0x1520,	// (0x00052bfa) slider_set_pane_g4_ParamLimits

0x1538,	// (0x00052c12) slider_set_pane_g5_ParamLimits

0x150c,	// (0x00052be6) slider_set_pane_g6_ParamLimits

0x154e,	// (0x00052c28) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x00061019) slider_set_pane_g_ParamLimits

0x450b,	// (0x00055be5) navi_icon_text_pane_ParamLimits

0xd2c6,	// (0x0005e9a0) aid_fill_nsta_2_ParamLimits

0xd2fd,	// (0x0005e9d7) aid_touch_tab_arrow_left_ParamLimits

0xd313,	// (0x0005e9ed) aid_touch_tab_arrow_right_ParamLimits

0xd3ae,	// (0x0005ea88) clock_nsta_pane_ParamLimits

0x5d69,	// (0x00057443) navi_icon_pane_g1_ParamLimits

0x5d75,	// (0x0005744f) navi_text_pane_t1_ParamLimits

0x70b6,	// (0x00058790) navi_icon_text_pane_g1_ParamLimits

0x70c2,	// (0x0005879c) navi_icon_text_pane_t1_ParamLimits

0xe27d,	// (0x0005f957) list_single_hc_apps_pane_g1_ParamLimits

0xdcb9,	// (0x0005f393) list_single_hc_apps_pane_g2_ParamLimits

0xfcb5,	// (0x0006138f) list_single_hc_apps_pane_g_ParamLimits

0xdcd2,	// (0x0005f3ac) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x3925,	// (0x00054fff) list_single_hc_apps_pane_t1_ParamLimits

0xb545,	// (0x0005cc1f) popup_toolbar2_fixed_window_ParamLimits

0xb545,	// (0x0005cc1f) popup_toolbar2_fixed_window

0xc647,	// (0x0005dd21) popup_toolbar2_float_window

0xcfa1,	// (0x0005e67b) bg_popup_sub_pane_cp27

0x899a,	// (0x0005a074) grid_toolbar2_float_pane

0xcfa1,	// (0x0005e67b) bg_popup_sub_pane_cp26

0x899a,	// (0x0005a074) grid_toolbar2_fixed_pane

0xe296,	// (0x0005f970) cell_toolbar2_fixed_pane_ParamLimits

0xe296,	// (0x0005f970) cell_toolbar2_fixed_pane

0xe2b0,	// (0x0005f98a) cell_toolbar2_fixed_pane_g1

0x89bb,	// (0x0005a095) toolbar2_fixed_button_pane

0x4ed6,	// (0x000565b0) toolbar2_fixed_button_pane_g1

0x4ee6,	// (0x000565c0) toolbar2_fixed_button_pane_g2

0x4ede,	// (0x000565b8) toolbar2_fixed_button_pane_g3

0x4ef6,	// (0x000565d0) toolbar2_fixed_button_pane_g4

0x4eee,	// (0x000565c8) toolbar2_fixed_button_pane_g5

0x4efe,	// (0x000565d8) toolbar2_fixed_button_pane_g6

0x4f06,	// (0x000565e0) toolbar2_fixed_button_pane_g7

0x4f16,	// (0x000565f0) toolbar2_fixed_button_pane_g8

0x4f0e,	// (0x000565e8) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x00060f1b) toolbar2_fixed_button_pane_g

0x89c3,	// (0x0005a09d) cell_toolbar2_float_pane_ParamLimits

0x89c3,	// (0x0005a09d) cell_toolbar2_float_pane

0x89d4,	// (0x0005a0ae) cell_toolbar2_float_pane_g1

0x89bb,	// (0x0005a095) toolbar2_fixed_button_pane_cp

0xde14,	// (0x0005f4ee) fep_vkb_accented_list_pane_ParamLimits

0xde14,	// (0x0005f4ee) fep_vkb_accented_list_pane

0x1c1c,	// (0x000532f6) bg_popup_fep_shadow_pane_g9

0x4688,	// (0x00055d62) bg_popup_fep_shadow_pane_cp3

0x3b39,	// (0x00055213) list_accented_list_pane

0x89dd,	// (0x0005a0b7) list_single_accented_list_pane_ParamLimits

0x89dd,	// (0x0005a0b7) list_single_accented_list_pane

0x4688,	// (0x00055d62) list_highlight_pane_cp10

0x89ee,	// (0x0005a0c8) list_single_accented_list_pane_t1

0xc571,	// (0x0005dc4b) popup_slider_window_ParamLimits

0xc571,	// (0x0005dc4b) popup_slider_window

0x8628,	// (0x00059d02) aid_indentation_list_msg

0xe3a7,	// (0x0005fa81) bg_popup_window_pane_cp19

0x8b1a,	// (0x0005a1f4) popup_slider_window_g1

0x8b36,	// (0x0005a210) popup_slider_window_g2

0x8b52,	// (0x0005a22c) popup_slider_window_g3

0x0005,

0xfcba,	// (0x00061394) popup_slider_window_g

0x8bb8,	// (0x0005a292) popup_slider_window_t1

0x8c2c,	// (0x0005a306) small_volume_slider_vertical_pane

0x7507,	// (0x00058be1) small_volume_slider_vertical_pane_g1

0x7507,	// (0x00058be1) small_volume_slider_vertical_pane_g2

0x8c48,	// (0x0005a322) small_volume_slider_vertical_pane_g3

0x0002,

0xfccc,	// (0x000613a6) small_volume_slider_vertical_pane_g

0xb4b3,	// (0x0005cb8d) area_side_right_pane_ParamLimits

0xb4b3,	// (0x0005cb8d) area_side_right_pane

0xc967,	// (0x0005e041) aid_size_side_button_ParamLimits

0xc967,	// (0x0005e041) aid_size_side_button

0xc980,	// (0x0005e05a) grid_sctrl_middle_pane_ParamLimits

0xc980,	// (0x0005e05a) grid_sctrl_middle_pane

0x1f83,	// (0x0005365d) sctrl_sk_bottom_pane

0x1f94,	// (0x0005366e) sctrl_sk_top_pane

0x1fa6,	// (0x00053680) aid_touch_sctrl_top

0x1fb3,	// (0x0005368d) bg_sctrl_sk_pane_ParamLimits

0x1fb3,	// (0x0005368d) bg_sctrl_sk_pane

0x1fc1,	// (0x0005369b) sctrl_sk_top_pane_g1

0x1fce,	// (0x000536a8) sctrl_sk_top_pane_t1

0x1fa6,	// (0x00053680) aid_touch_sctrl_bottom

0x1fb3,	// (0x0005368d) bg_sctrl_sk_pane_cp_ParamLimits

0x1fb3,	// (0x0005368d) bg_sctrl_sk_pane_cp

0x1fe9,	// (0x000536c3) sctrl_sk_bottom_pane_g1

0x1fce,	// (0x000536a8) sctrl_sk_bottom_pane_t1

0xc99a,	// (0x0005e074) cell_sctrl_middle_pane_ParamLimits

0xc99a,	// (0x0005e074) cell_sctrl_middle_pane

0xc9ab,	// (0x0005e085) aid_touch_sctrl_middle_ParamLimits

0xc9ab,	// (0x0005e085) aid_touch_sctrl_middle

0xc9b8,	// (0x0005e092) bg_sctrl_middle_pane_ParamLimits

0xc9b8,	// (0x0005e092) bg_sctrl_middle_pane

0x2659,	// (0x00053d33) cell_sctrl_middle_pane_g1_ParamLimits

0x2659,	// (0x00053d33) cell_sctrl_middle_pane_g1

0xc9c6,	// (0x0005e0a0) cell_sctrl_middle_pane_g2_ParamLimits

0xc9c6,	// (0x0005e0a0) cell_sctrl_middle_pane_g2

0x0001,

0xfcd8,	// (0x000613b2) cell_sctrl_middle_pane_g_ParamLimits

0xfcd8,	// (0x000613b2) cell_sctrl_middle_pane_g

0x4ed6,	// (0x000565b0) bg_sctrl_middle_pane_g1

0x4ede,	// (0x000565b8) bg_sctrl_middle_pane_g2

0x4ee6,	// (0x000565c0) bg_sctrl_middle_pane_g3

0x4eee,	// (0x000565c8) bg_sctrl_middle_pane_g4

0x4ef6,	// (0x000565d0) bg_sctrl_middle_pane_g5

0x4efe,	// (0x000565d8) bg_sctrl_middle_pane_g6

0x4f06,	// (0x000565e0) bg_sctrl_middle_pane_g7

0x4f0e,	// (0x000565e8) bg_sctrl_middle_pane_g8

0x0007,

0xfcdd,	// (0x000613b7) bg_sctrl_middle_pane_g

0x4f16,	// (0x000565f0) bg_sctrl_middle_pane_g8_copy1

0x4ed6,	// (0x000565b0) bg_sctrl_sk_pane_g1

0x4ee6,	// (0x000565c0) bg_sctrl_sk_pane_g2

0x4ede,	// (0x000565b8) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x00060f1b) bg_sctrl_sk_pane_g

0x34ea,	// (0x00054bc4) aid_size_touch_scroll_bar

0x4ef6,	// (0x000565d0) bg_sctrl_sk_pane_g4

0x4eee,	// (0x000565c8) bg_sctrl_sk_pane_g5

0x4efe,	// (0x000565d8) bg_sctrl_sk_pane_g6

0x4f06,	// (0x000565e0) bg_sctrl_sk_pane_g7

0x4f16,	// (0x000565f0) bg_sctrl_sk_pane_g8

0x4f0e,	// (0x000565e8) bg_sctrl_sk_pane_g9

0x0bea,	// (0x000522c4) popup_fep_china_hwr2_fs_candidate_window

0xc085,	// (0x0005d75f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc085,	// (0x0005d75f) popup_fep_china_hwr2_fs_control_window

0x1c3c,	// (0x00053316) sctrl_sk_top_pane_g2

0x0001,

0xfcd3,	// (0x000613ad) sctrl_sk_top_pane_g

0xe45f,	// (0x0005fb39) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe45f,	// (0x0005fb39) aid_fep_china_hwr2_fs_cell

0xe473,	// (0x0005fb4d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe473,	// (0x0005fb4d) bg_popup_fep_shadow_pane_cp4

0xe48a,	// (0x0005fb64) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe48a,	// (0x0005fb64) bg_popup_fep_shadow_pane_cp5

0xe49c,	// (0x0005fb76) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe49c,	// (0x0005fb76) popup_fep_china_hwr2_fs_control_bar_grid

0xe4b0,	// (0x0005fb8a) popup_fep_china_hwr2_fs_control_funtion_grid

0x8ca4,	// (0x0005a37e) aid_fep_china_hwr2_fs_candi_cell

0xcfa1,	// (0x0005e67b) bg_popup_fep_shadow_pane_cp6

0x8cae,	// (0x0005a388) popup_fep_china_hwr2_fs_candidate_grid

0xe4b8,	// (0x0005fb92) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe4b8,	// (0x0005fb92) cell_fep_china_hwr2_fs_funtion_grid

0x7507,	// (0x00058be1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8cd0,	// (0x0005a3aa) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8cd0,	// (0x0005a3aa) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8cde,	// (0x0005a3b8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8cde,	// (0x0005a3b8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcee,	// (0x000613c8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcee,	// (0x000613c8) cell_fep_china_hwr2_fs_funtion_grid_g

0xe4d0,	// (0x0005fbaa) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe4d0,	// (0x0005fbaa) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe4e5,	// (0x0005fbbf) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe4e5,	// (0x0005fbbf) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf3,	// (0x000613cd) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf3,	// (0x000613cd) cell_fep_china_hwr2_fs_funtion_grid_t

0x8d25,	// (0x0005a3ff) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8d2d,	// (0x0005a407) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8d35,	// (0x0005a40f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf8,	// (0x000613d2) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8d3d,	// (0x0005a417) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8d3d,	// (0x0005a417) cell_fep_china_hwr2_fs_candidate_grid

0x8d56,	// (0x0005a430) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8d5e,	// (0x0005a438) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7507,	// (0x00058be1) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7507,	// (0x00058be1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0c,	// (0x000611e6) cell_fep_china_hwr2_fs_candidate_grid_g

0x8d66,	// (0x0005a440) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4acc,	// (0x000561a6) clock_nsta_pane_cp_24_ParamLimits

0x4acc,	// (0x000561a6) clock_nsta_pane_cp_24

0x4b4a,	// (0x00056224) indicator_nsta_pane_cp_24_ParamLimits

0x4b4a,	// (0x00056224) indicator_nsta_pane_cp_24

0x5be5,	// (0x000572bf) heading_pane_g1

0x0001,

0xf8a6,	// (0x00060f80) heading_pane_g

0x661d,	// (0x00057cf7) grid_sct_catagory_button_pane

0x664d,	// (0x00057d27) scroll_pane_cp5_ParamLimits

0x7104,	// (0x000587de) button_value_adjust_pane_cp5_ParamLimits

0x7104,	// (0x000587de) button_value_adjust_pane_cp5

0x71e3,	// (0x000588bd) form2_midp_time_pane_ParamLimits

0x8d74,	// (0x0005a44e) cell_sct_catagory_button_pane_ParamLimits

0x8d74,	// (0x0005a44e) cell_sct_catagory_button_pane

0x74cc,	// (0x00058ba6) bg_button_pane_cp01_ParamLimits

0x74cc,	// (0x00058ba6) bg_button_pane_cp01

0x7507,	// (0x00058be1) cell_sct_catagory_button_pane_g1

0xc5ea,	// (0x0005dcc4) popup_tb_extension_window

0xe501,	// (0x0005fbdb) aid_size_cell_ext_ParamLimits

0xe501,	// (0x0005fbdb) aid_size_cell_ext

0x332c,	// (0x00054a06) bg_tb_trans_pane_cp1_ParamLimits

0x332c,	// (0x00054a06) bg_tb_trans_pane_cp1

0xe527,	// (0x0005fc01) grid_tb_ext_pane_ParamLimits

0xe527,	// (0x0005fc01) grid_tb_ext_pane

0xe562,	// (0x0005fc3c) cell_tb_ext_pane_ParamLimits

0xe562,	// (0x0005fc3c) cell_tb_ext_pane

0xe58a,	// (0x0005fc64) cell_tb_ext_pane_g1_ParamLimits

0xe58a,	// (0x0005fc64) cell_tb_ext_pane_g1

0x8e08,	// (0x0005a4e2) cell_tb_ext_pane_t1

0x2fb7,	// (0x00054691) list_highlight_pane_cp11_ParamLimits

0x2fb7,	// (0x00054691) list_highlight_pane_cp11

0xb55a,	// (0x0005cc34) popup_uni_indicator_window_ParamLimits

0xb55a,	// (0x0005cc34) popup_uni_indicator_window

0x39de,	// (0x000550b8) bg_popup_sub_pane_cp14

0x8e23,	// (0x0005a4fd) list_uniindi_pane

0x8e2f,	// (0x0005a509) uniindi_top_pane

0x2fb7,	// (0x00054691) bg_uniindi_top_pane

0x8e4e,	// (0x0005a528) uniindi_top_pane_g1

0x8e64,	// (0x0005a53e) uniindi_top_pane_g2

0x0003,

0xfcff,	// (0x000613d9) uniindi_top_pane_g

0x8e8e,	// (0x0005a568) uniindi_top_pane_t1

0x8eb8,	// (0x0005a592) list_single_uniindi_pane_ParamLimits

0x8eb8,	// (0x0005a592) list_single_uniindi_pane

0x7507,	// (0x00058be1) bg_uniindi_top_pane_g1

0x8ecb,	// (0x0005a5a5) list_single_uniindi_pane_g1

0x8ede,	// (0x0005a5b8) list_single_uniindi_pane_t1

0xf311,	// (0x000609eb) control_bg_pane

0x8f03,	// (0x0005a5dd) bg_sctrl_sk_pane_cp1

0x8f0c,	// (0x0005a5e6) bg_sctrl_sk_pane_cp2

0x8f15,	// (0x0005a5ef) control_bg_pane_g1

0x8f1e,	// (0x0005a5f8) control_bg_pane_g2

0x0001,

0xfd08,	// (0x000613e2) control_bg_pane_g

0x6f4e,	// (0x00058628) cell_indicator_nsta_pane_g1_ParamLimits

0xdc23,	// (0x0005f2fd) cell_indicator_nsta_pane_g2_ParamLimits

0xfa70,	// (0x0006114a) cell_indicator_nsta_pane_g_ParamLimits

0x19c4,	// (0x0005309e) form2_midp_time_pane_t1_ParamLimits

0x19d7,	// (0x000530b1) main_idle_act4_pane_ParamLimits

0x19d7,	// (0x000530b1) main_idle_act4_pane

0xc5ea,	// (0x0005dcc4) popup_tb_extension_window_ParamLimits

0xe549,	// (0x0005fc23) tb_ext_find_pane_ParamLimits

0xe549,	// (0x0005fc23) tb_ext_find_pane

0x8f27,	// (0x0005a601) ai_gene_pane_1_cp1

0x47cf,	// (0x00055ea9) ai_gene_pane_2_cp1

0x8f2f,	// (0x0005a609) list_single_idle_plugin_calendar_pane

0x8f38,	// (0x0005a612) list_single_idle_plugin_notification_pane

0x8f41,	// (0x0005a61b) list_single_idle_plugin_player_pane

0xe5a7,	// (0x0005fc81) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe5a7,	// (0x0005fc81) list_single_idle_plugin_shortcut_pane

0xe5cf,	// (0x0005fca9) main_idle_act4_pane_t1

0xe5e5,	// (0x0005fcbf) main_idle_act4_pane_t2

0x0001,

0xfd0d,	// (0x000613e7) main_idle_act4_pane_t

0xe5fb,	// (0x0005fcd5) middle_sk_idle_act4_pane_ParamLimits

0xe5fb,	// (0x0005fcd5) middle_sk_idle_act4_pane

0xe617,	// (0x0005fcf1) popup_clock_digital_analogue_window_cp2

0xe63f,	// (0x0005fd19) shortcut_wheel_idle_act4_pane_ParamLimits

0xe63f,	// (0x0005fd19) shortcut_wheel_idle_act4_pane

0x7507,	// (0x00058be1) shortcut_wheel_idle_act4_pane_g1

0x7507,	// (0x00058be1) shortcut_wheel_idle_act4_pane_g2

0x7507,	// (0x00058be1) shortcut_wheel_idle_act4_pane_g3

0x7507,	// (0x00058be1) shortcut_wheel_idle_act4_pane_g4

0x7507,	// (0x00058be1) shortcut_wheel_idle_act4_pane_g5

0x8fd4,	// (0x0005a6ae) shortcut_wheel_idle_act4_pane_g6

0x8fdc,	// (0x0005a6b6) shortcut_wheel_idle_act4_pane_g7

0x8fe4,	// (0x0005a6be) shortcut_wheel_idle_act4_pane_g8

0x8fec,	// (0x0005a6c6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd12,	// (0x000613ec) shortcut_wheel_idle_act4_pane_g

0xe6bc,	// (0x0005fd96) middle_sk_idle_act4_pane_g1_ParamLimits

0xe6bc,	// (0x0005fd96) middle_sk_idle_act4_pane_g1

0xe6ca,	// (0x0005fda4) middle_sk_idle_act4_pane_g2_ParamLimits

0xe6ca,	// (0x0005fda4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd35,	// (0x0006140f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd35,	// (0x0006140f) middle_sk_idle_act4_pane_g

0xe6e2,	// (0x0005fdbc) middle_sk_idle_act4_pane_t1_ParamLimits

0xe6e2,	// (0x0005fdbc) middle_sk_idle_act4_pane_t1

0xe711,	// (0x0005fdeb) grid_ai_shortcut_pane_ParamLimits

0xe711,	// (0x0005fdeb) grid_ai_shortcut_pane

0xe72e,	// (0x0005fe08) list_highlight_pane_cp16_ParamLimits

0xe72e,	// (0x0005fe08) list_highlight_pane_cp16

0xe73b,	// (0x0005fe15) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe73b,	// (0x0005fe15) list_single_idle_plugin_shortcut_pane_g1

0xe747,	// (0x0005fe21) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe747,	// (0x0005fe21) list_single_idle_plugin_shortcut_pane_g2

0xe763,	// (0x0005fe3d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe763,	// (0x0005fe3d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3a,	// (0x00061414) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3a,	// (0x00061414) list_single_idle_plugin_shortcut_pane_g

0xe778,	// (0x0005fe52) cell_ai_shortcut_pane_ParamLimits

0xe778,	// (0x0005fe52) cell_ai_shortcut_pane

0xe78e,	// (0x0005fe68) cell_ai_shortcut_pane_g1_ParamLimits

0xe78e,	// (0x0005fe68) cell_ai_shortcut_pane_g1

0x8f27,	// (0x0005a601) ai_gene_pane_1_cp2

0x911c,	// (0x0005a7f6) ai_gene_pane_2_cp2

0x9124,	// (0x0005a7fe) list_highlight_pane_cp15

0x912d,	// (0x0005a807) list_single_idle_plugin_calendar_pane_g1

0x9124,	// (0x0005a7fe) list_highlight_pane_cp17

0x9135,	// (0x0005a80f) list_single_idle_plugin_calendar_pane_g1_copy1

0x913d,	// (0x0005a817) list_single_idle_plugin_player_pane_g1

0x6876,	// (0x00057f50) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd41,	// (0x0006141b) list_single_idle_plugin_player_pane_g

0x9145,	// (0x0005a81f) list_single_idle_plugin_player_pane_t1

0x9153,	// (0x0005a82d) list_single_idle_plugin_player_pane_t2

0x9161,	// (0x0005a83b) list_single_idle_plugin_player_pane_t3

0x916f,	// (0x0005a849) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd46,	// (0x00061420) list_single_idle_plugin_player_pane_t

0x917d,	// (0x0005a857) wait_bar_pane_cp15

0x9185,	// (0x0005a85f) grid_ai_notification_pane

0x6876,	// (0x00057f50) list_single_idle_plugin_notification_pane_g1

0xe7b0,	// (0x0005fe8a) cell_ai_notification_pane_ParamLimits

0xe7b0,	// (0x0005fe8a) cell_ai_notification_pane

0x919b,	// (0x0005a875) cell_ai_notification_pane_g1

0x91a3,	// (0x0005a87d) cell_ai_notification_pane_t1

0xe7bd,	// (0x0005fe97) tb_ext_find_button_pane

0xe7c5,	// (0x0005fe9f) tb_ext_find_pane_g1

0xe7cd,	// (0x0005fea7) tb_ext_find_pane_t1

0x4067,	// (0x00055741) tb_ext_find_button_pane_g1

0x91cf,	// (0x0005a8a9) tb_ext_find_button_pane_g2

0x0001,

0xfd4f,	// (0x00061429) tb_ext_find_button_pane_g

0xe5cf,	// (0x0005fca9) main_idle_act4_pane_t1_ParamLimits

0xe5e5,	// (0x0005fcbf) main_idle_act4_pane_t2_ParamLimits

0xfd0d,	// (0x000613e7) main_idle_act4_pane_t_ParamLimits

0xe617,	// (0x0005fcf1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe62f,	// (0x0005fd09) sat_plugin_idle_act4_pane_ParamLimits

0xe62f,	// (0x0005fd09) sat_plugin_idle_act4_pane

0xe7db,	// (0x0005feb5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe7db,	// (0x0005feb5) sat_plugin_idle_act4_pane_t1

0xe7f3,	// (0x0005fecd) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe7f3,	// (0x0005fecd) sat_plugin_idle_act4_pane_t2

0xe80b,	// (0x0005fee5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe80b,	// (0x0005fee5) sat_plugin_idle_act4_pane_t3

0xe823,	// (0x0005fefd) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe823,	// (0x0005fefd) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd54,	// (0x0006142e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd54,	// (0x0006142e) sat_plugin_idle_act4_pane_t

0xf3d6,	// (0x00060ab0) popup_battery_window_ParamLimits

0xf3d6,	// (0x00060ab0) popup_battery_window

0x2fb7,	// (0x00054691) bg_popup_sub_pane_cp25_ParamLimits

0x2fb7,	// (0x00054691) bg_popup_sub_pane_cp25

0x9224,	// (0x0005a8fe) popup_battery_window_g1_ParamLimits

0x9224,	// (0x0005a8fe) popup_battery_window_g1

0x9230,	// (0x0005a90a) popup_battery_window_t1_ParamLimits

0x9230,	// (0x0005a90a) popup_battery_window_t1

0x9242,	// (0x0005a91c) popup_battery_window_t2_ParamLimits

0x9242,	// (0x0005a91c) popup_battery_window_t2

0x0001,

0xfd5d,	// (0x00061437) popup_battery_window_t_ParamLimits

0xfd5d,	// (0x00061437) popup_battery_window_t

0xd1a0,	// (0x0005e87a) midp_canvas_pane_ParamLimits

0xd1fd,	// (0x0005e8d7) midp_keypad_pane_ParamLimits

0xd1fd,	// (0x0005e8d7) midp_keypad_pane

0x49ac,	// (0x00056086) main_midp_pane_ParamLimits

0x6fc8,	// (0x000586a2) signal_pane_g2_cp_ParamLimits

0xe83b,	// (0x0005ff15) aid_size_cell_midp_keypad_ParamLimits

0xe83b,	// (0x0005ff15) aid_size_cell_midp_keypad

0xe859,	// (0x0005ff33) midp_keyp_game_grid_pane_ParamLimits

0xe859,	// (0x0005ff33) midp_keyp_game_grid_pane

0xe880,	// (0x0005ff5a) midp_keyp_rocker_pane_ParamLimits

0xe880,	// (0x0005ff5a) midp_keyp_rocker_pane

0xe8d1,	// (0x0005ffab) midp_keyp_sk_left_pane_ParamLimits

0xe8d1,	// (0x0005ffab) midp_keyp_sk_left_pane

0xe925,	// (0x0005ffff) midp_keyp_sk_right_pane_ParamLimits

0xe925,	// (0x0005ffff) midp_keyp_sk_right_pane

0xcfa1,	// (0x0005e67b) bg_button_pane_cp03

0xe979,	// (0x00060053) midp_keyp_sk_left_pane_g1

0xcfa1,	// (0x0005e67b) bg_button_pane_cp04

0xe979,	// (0x00060053) midp_keyp_sk_right_pane_g1

0x7507,	// (0x00058be1) midp_keyp_rocker_pane_g1

0xe982,	// (0x0006005c) keyp_game_cell_pane_ParamLimits

0xe982,	// (0x0006005c) keyp_game_cell_pane

0xcfa1,	// (0x0005e67b) bg_button_pane_cp02

0xe9a6,	// (0x00060080) keyp_game_cell_pane_g1

0xb4f5,	// (0x0005cbcf) popup_fep_vkb2_window_ParamLimits

0xb4f5,	// (0x0005cbcf) popup_fep_vkb2_window

0xc9d2,	// (0x0005e0ac) aid_size_cell_vkb2_ParamLimits

0xc9d2,	// (0x0005e0ac) aid_size_cell_vkb2

0xc9fe,	// (0x0005e0d8) popup_fep_vkb2_window_g1_ParamLimits

0xc9fe,	// (0x0005e0d8) popup_fep_vkb2_window_g1

0xca4e,	// (0x0005e128) vkb2_area_bottom_pane_ParamLimits

0xca4e,	// (0x0005e128) vkb2_area_bottom_pane

0xcaa2,	// (0x0005e17c) vkb2_area_keypad_pane_ParamLimits

0xcaa2,	// (0x0005e17c) vkb2_area_keypad_pane

0xcaea,	// (0x0005e1c4) vkb2_area_top_pane_ParamLimits

0xcaea,	// (0x0005e1c4) vkb2_area_top_pane

0xcb76,	// (0x0005e250) vkb2_top_entry_pane_ParamLimits

0xcb76,	// (0x0005e250) vkb2_top_entry_pane

0xcba3,	// (0x0005e27d) vkb2_top_grid_left_pane_ParamLimits

0xcba3,	// (0x0005e27d) vkb2_top_grid_left_pane

0xcbc4,	// (0x0005e29e) vkb2_top_grid_right_pane_ParamLimits

0xcbc4,	// (0x0005e29e) vkb2_top_grid_right_pane

0x2254,	// (0x0005392e) vkb2_cell_keypad_pane_ParamLimits

0x2254,	// (0x0005392e) vkb2_cell_keypad_pane

0xcc0c,	// (0x0005e2e6) vkb2_area_bottom_grid_pane_ParamLimits

0xcc0c,	// (0x0005e2e6) vkb2_area_bottom_grid_pane

0xcc36,	// (0x0005e310) vkb2_area_bottom_pane_g1_ParamLimits

0xcc36,	// (0x0005e310) vkb2_area_bottom_pane_g1

0xcc5c,	// (0x0005e336) vkb2_area_bottom_pane_g2_ParamLimits

0xcc5c,	// (0x0005e336) vkb2_area_bottom_pane_g2

0xcc8d,	// (0x0005e367) vkb2_area_bottom_pane_g3_ParamLimits

0xcc8d,	// (0x0005e367) vkb2_area_bottom_pane_g3

0x0002,

0xfd62,	// (0x0006143c) vkb2_area_bottom_pane_g_ParamLimits

0xfd62,	// (0x0006143c) vkb2_area_bottom_pane_g

0x23fe,	// (0x00053ad8) vkb2_top_cell_left_pane_ParamLimits

0x23fe,	// (0x00053ad8) vkb2_top_cell_left_pane

0xe9af,	// (0x00060089) vkb2_top_entry_pane_g1_ParamLimits

0xe9af,	// (0x00060089) vkb2_top_entry_pane_g1

0xe9bd,	// (0x00060097) vkb2_top_entry_pane_t1_ParamLimits

0xe9bd,	// (0x00060097) vkb2_top_entry_pane_t1

0x93f3,	// (0x0005aacd) vkb2_top_entry_pane_t2_ParamLimits

0x93f3,	// (0x0005aacd) vkb2_top_entry_pane_t2

0x9425,	// (0x0005aaff) vkb2_top_entry_pane_t3_ParamLimits

0x9425,	// (0x0005aaff) vkb2_top_entry_pane_t3

0x0002,

0xfd69,	// (0x00061443) vkb2_top_entry_pane_t_ParamLimits

0xfd69,	// (0x00061443) vkb2_top_entry_pane_t

0xccf7,	// (0x0005e3d1) vkb2_top_grid_right_pane_g1_ParamLimits

0xccf7,	// (0x0005e3d1) vkb2_top_grid_right_pane_g1

0x2461,	// (0x00053b3b) vkb2_top_grid_right_pane_g2_ParamLimits

0x2461,	// (0x00053b3b) vkb2_top_grid_right_pane_g2

0x2479,	// (0x00053b53) vkb2_top_grid_right_pane_g3_ParamLimits

0x2479,	// (0x00053b53) vkb2_top_grid_right_pane_g3

0xcd0d,	// (0x0005e3e7) vkb2_top_grid_right_pane_g4_ParamLimits

0xcd0d,	// (0x0005e3e7) vkb2_top_grid_right_pane_g4

0x0003,

0xfd70,	// (0x0006144a) vkb2_top_grid_right_pane_g_ParamLimits

0xfd70,	// (0x0006144a) vkb2_top_grid_right_pane_g

0x24a7,	// (0x00053b81) vkb2_top_cell_left_pane_g1

0x24be,	// (0x00053b98) vkb2_cell_keypad_pane_g1_ParamLimits

0x24be,	// (0x00053b98) vkb2_cell_keypad_pane_g1

0x9449,	// (0x0005ab23) vkb2_cell_keypad_pane_t1_ParamLimits

0x9449,	// (0x0005ab23) vkb2_cell_keypad_pane_t1

0x24cc,	// (0x00053ba6) vkb2_cell_bottom_grid_pane_ParamLimits

0x24cc,	// (0x00053ba6) vkb2_cell_bottom_grid_pane

0x2505,	// (0x00053bdf) vkb2_cell_bottom_grid_pane_g1

0xe660,	// (0x0005fd3a) aid_call2_pane_cp02

0xe668,	// (0x0005fd42) aid_call_pane_cp02

0xe670,	// (0x0005fd4a) clock_digital_number_pane_cp10

0xe678,	// (0x0005fd52) clock_digital_number_pane_cp11

0xe680,	// (0x0005fd5a) clock_digital_number_pane_cp12

0xe688,	// (0x0005fd62) clock_digital_number_pane_cp13

0xe690,	// (0x0005fd6a) clock_digital_separator_pane_cp10

0x4067,	// (0x00055741) popup_clock_digital_analogue_window_cp2_g1

0x4067,	// (0x00055741) popup_clock_digital_analogue_window_cp2_g2

0xe698,	// (0x0005fd72) popup_clock_digital_analogue_window_cp2_g3

0x4067,	// (0x00055741) popup_clock_digital_analogue_window_cp2_g4

0xe698,	// (0x0005fd72) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd25,	// (0x000613ff) popup_clock_digital_analogue_window_cp2_g

0xe6a0,	// (0x0005fd7a) popup_clock_digital_analogue_window_cp2_t1

0xe6ae,	// (0x0005fd88) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd30,	// (0x0006140a) popup_clock_digital_analogue_window_cp2_t

0x7507,	// (0x00058be1) clock_digital_number_pane_cp10_g1

0x7507,	// (0x00058be1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0c,	// (0x000611e6) clock_digital_number_pane_cp10_g

0x7507,	// (0x00058be1) clock_digital_separator_pane_cp10_g1

0x7507,	// (0x00058be1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0c,	// (0x000611e6) clock_digital_separator_pane_cp10_g

0x8e70,	// (0x0005a54a) uniindi_top_pane_g3

0x8e81,	// (0x0005a55b) uniindi_top_pane_g4

0x22df,	// (0x000539b9) vkb2_row_keypad_pane_ParamLimits

0x22df,	// (0x000539b9) vkb2_row_keypad_pane

0x2525,	// (0x00053bff) vkb2_cell_t_keypad_pane_ParamLimits

0x2525,	// (0x00053bff) vkb2_cell_t_keypad_pane

0x2535,	// (0x00053c0f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2535,	// (0x00053c0f) vkb2_cell_t_keypad_pane_cp08

0x2548,	// (0x00053c22) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2548,	// (0x00053c22) vkb2_cell_t_keypad_pane_cp09

0x255c,	// (0x00053c36) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x255c,	// (0x00053c36) vkb2_cell_t_keypad_pane_cp01

0x256d,	// (0x00053c47) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x256d,	// (0x00053c47) vkb2_cell_t_keypad_pane_cp02

0x257e,	// (0x00053c58) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x257e,	// (0x00053c58) vkb2_cell_t_keypad_pane_cp03

0x258f,	// (0x00053c69) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x258f,	// (0x00053c69) vkb2_cell_t_keypad_pane_cp04

0x25a0,	// (0x00053c7a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x25a0,	// (0x00053c7a) vkb2_cell_t_keypad_pane_cp05

0x25b1,	// (0x00053c8b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x25b1,	// (0x00053c8b) vkb2_cell_t_keypad_pane_cp06

0x25c2,	// (0x00053c9c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x25c2,	// (0x00053c9c) vkb2_cell_t_keypad_pane_cp07

0x25d3,	// (0x00053cad) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x25d3,	// (0x00053cad) vkb2_cell_t_keypad_pane_cp10

0x1c3c,	// (0x00053316) vkb2_cell_t_keypad_pane_g1

0x9460,	// (0x0005ab3a) vkb2_cell_t_keypad_pane_t1

0xf311,	// (0x000609eb) popup_grid_graphic2_window

0xe9f6,	// (0x000600d0) aid_size_cell_graphic2_ParamLimits

0xe9f6,	// (0x000600d0) aid_size_cell_graphic2

0xeb3f,	// (0x00060219) bg_popup_window_pane_cp21_ParamLimits

0xeb3f,	// (0x00060219) bg_popup_window_pane_cp21

0xeb4d,	// (0x00060227) graphic2_pages_pane_ParamLimits

0xeb4d,	// (0x00060227) graphic2_pages_pane

0xeba3,	// (0x0006027d) grid_graphic2_control_pane_ParamLimits

0xeba3,	// (0x0006027d) grid_graphic2_control_pane

0xebeb,	// (0x000602c5) grid_graphic2_pane_ParamLimits

0xebeb,	// (0x000602c5) grid_graphic2_pane

0xec72,	// (0x0006034c) cell_graphic2_pane

0xf311,	// (0x000609eb) main_comp_mode_pane

0x86dc,	// (0x00059db6) list_ai3_gene_pane_ParamLimits

0xe3a7,	// (0x0005fa81) bg_popup_window_pane_cp19_ParamLimits

0x8abe,	// (0x0005a198) bg_touch_area_indi_pane_ParamLimits

0x8abe,	// (0x0005a198) bg_touch_area_indi_pane

0x8ad4,	// (0x0005a1ae) bg_touch_area_indi_pane_cp01_ParamLimits

0x8ad4,	// (0x0005a1ae) bg_touch_area_indi_pane_cp01

0x8aea,	// (0x0005a1c4) bg_touch_area_indi_pane_cp02_ParamLimits

0x8aea,	// (0x0005a1c4) bg_touch_area_indi_pane_cp02

0x8b00,	// (0x0005a1da) bg_touch_area_indi_pane_cp03_ParamLimits

0x8b00,	// (0x0005a1da) bg_touch_area_indi_pane_cp03

0x8b1a,	// (0x0005a1f4) popup_slider_window_g1_ParamLimits

0x8b36,	// (0x0005a210) popup_slider_window_g2_ParamLimits

0x8b52,	// (0x0005a22c) popup_slider_window_g3_ParamLimits

0xfcba,	// (0x00061394) popup_slider_window_g_ParamLimits

0x8bb8,	// (0x0005a292) popup_slider_window_t1_ParamLimits

0x8c2c,	// (0x0005a306) small_volume_slider_vertical_pane_ParamLimits

0xec72,	// (0x0006034c) cell_graphic2_pane_ParamLimits

0xeccd,	// (0x000603a7) bg_button_pane_cp10_ParamLimits

0xeccd,	// (0x000603a7) bg_button_pane_cp10

0xece0,	// (0x000603ba) bg_button_pane_cp11_ParamLimits

0xece0,	// (0x000603ba) bg_button_pane_cp11

0xecf3,	// (0x000603cd) graphic2_pages_pane_g1_ParamLimits

0xecf3,	// (0x000603cd) graphic2_pages_pane_g1

0xed0e,	// (0x000603e8) graphic2_pages_pane_g2_ParamLimits

0xed0e,	// (0x000603e8) graphic2_pages_pane_g2

0x0001,

0xfd7e,	// (0x00061458) graphic2_pages_pane_g_ParamLimits

0xfd7e,	// (0x00061458) graphic2_pages_pane_g

0xed26,	// (0x00060400) graphic2_pages_pane_t1_ParamLimits

0xed26,	// (0x00060400) graphic2_pages_pane_t1

0xed3e,	// (0x00060418) cell_graphic2_control_pane_ParamLimits

0xed3e,	// (0x00060418) cell_graphic2_control_pane

0xed70,	// (0x0006044a) cell_graphic2_pane_g1_ParamLimits

0xed70,	// (0x0006044a) cell_graphic2_pane_g1

0xea34,	// (0x0006010e) cell_graphic2_pane_g2_ParamLimits

0xea34,	// (0x0006010e) cell_graphic2_pane_g2

0xeb32,	// (0x0006020c) cell_graphic2_pane_g3_ParamLimits

0xeb32,	// (0x0006020c) cell_graphic2_pane_g3

0xea41,	// (0x0006011b) cell_graphic2_pane_g4_ParamLimits

0xea41,	// (0x0006011b) cell_graphic2_pane_g4

0xed7d,	// (0x00060457) cell_graphic2_pane_g5_ParamLimits

0xed7d,	// (0x00060457) cell_graphic2_pane_g5

0x0004,

0xfd83,	// (0x0006145d) cell_graphic2_pane_g_ParamLimits

0xfd83,	// (0x0006145d) cell_graphic2_pane_g

0xed9a,	// (0x00060474) cell_graphic2_pane_t1_ParamLimits

0xed9a,	// (0x00060474) cell_graphic2_pane_t1

0x5bd9,	// (0x000572b3) grid_highlight_pane_cp11_ParamLimits

0x5bd9,	// (0x000572b3) grid_highlight_pane_cp11

0x2fb7,	// (0x00054691) bg_button_pane_cp05

0xede4,	// (0x000604be) cell_graphic2_control_pane_g1

0x7507,	// (0x00058be1) bg_touch_area_indi_pane_g1

0x975a,	// (0x0005ae34) aid_cmod_rocker_key_size

0x9764,	// (0x0005ae3e) aid_cmode_itu_key_size

0x976e,	// (0x0005ae48) main_cmode_video_pane

0x9778,	// (0x0005ae52) main_comp_mode_itu_pane

0x9784,	// (0x0005ae5e) main_comp_mode_rocker_pane

0x9790,	// (0x0005ae6a) cell_cmode_rocker_pane_ParamLimits

0x9790,	// (0x0005ae6a) cell_cmode_rocker_pane

0x97a2,	// (0x0005ae7c) cell_cmode_itu_pane_ParamLimits

0x97a2,	// (0x0005ae7c) cell_cmode_itu_pane

0x39de,	// (0x000550b8) bg_button_pane_cp06_ParamLimits

0x39de,	// (0x000550b8) bg_button_pane_cp06

0x7785,	// (0x00058e5f) cell_cmode_rocker_pane_g1_ParamLimits

0x7785,	// (0x00058e5f) cell_cmode_rocker_pane_g1

0x8cd0,	// (0x0005a3aa) cell_cmode_rocker_pane_g2_ParamLimits

0x8cd0,	// (0x0005a3aa) cell_cmode_rocker_pane_g2

0x0001,

0xfd93,	// (0x0006146d) cell_cmode_rocker_pane_g_ParamLimits

0xfd93,	// (0x0006146d) cell_cmode_rocker_pane_g

0xcfa1,	// (0x0005e67b) bg_button_pane_cp07

0x97b7,	// (0x0005ae91) cell_cmode_itu_pane_g1

0x97c0,	// (0x0005ae9a) cell_cmode_itu_pane_t1

0x97ce,	// (0x0005aea8) cell_cmode_itu_pane_t2

0x0001,

0xfd98,	// (0x00061472) cell_cmode_itu_pane_t

0x8ef3,	// (0x0005a5cd) aid_touch_ctrl_left

0x8efb,	// (0x0005a5d5) aid_touch_ctrl_right

0xcfa1,	// (0x0005e67b) compa_mode_pane

0xee08,	// (0x000604e2) aid_cmod_rocker_key_size_cp

0xee12,	// (0x000604ec) aid_cmode_itu_key_size_cp

0x97f0,	// (0x0005aeca) compa_mode_pane_g1

0x97f8,	// (0x0005aed2) compa_mode_pane_g2

0x9800,	// (0x0005aeda) compa_mode_pane_g3

0x0002,

0xfd9d,	// (0x00061477) compa_mode_pane_g

0xee1c,	// (0x000604f6) main_comp_mode_itu_pane_cp

0xee24,	// (0x000604fe) main_comp_mode_rocker_pane_cp

0xee2c,	// (0x00060506) cell_cmode_itu_pane_cp_ParamLimits

0xee2c,	// (0x00060506) cell_cmode_itu_pane_cp

0xee41,	// (0x0006051b) cell_cmode_rocker_pane_cp_ParamLimits

0xee41,	// (0x0006051b) cell_cmode_rocker_pane_cp

0x39de,	// (0x000550b8) bg_button_pane_cp06_cp_ParamLimits

0x39de,	// (0x000550b8) bg_button_pane_cp06_cp

0x7785,	// (0x00058e5f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7785,	// (0x00058e5f) cell_cmode_rocker_pane_g1_cp

0x7507,	// (0x00058be1) cell_cmode_rocker_pane_g2_cp

0xcfa1,	// (0x0005e67b) bg_button_pane_cp07_cp

0xee53,	// (0x0006052d) cell_cmode_itu_pane_g1_cp

0xee5c,	// (0x00060536) cell_cmode_itu_pane_t1_cp

0xee5c,	// (0x00060536) cell_cmode_itu_pane_t2_cp

0xda15,	// (0x0005f0ef) settings_code_pane_cp2

0x2d2e,	// (0x00054408) bg_popup_window_pane_cp3_ParamLimits

0x31b7,	// (0x00054891) heading_pane_cp3_ParamLimits

0x31c6,	// (0x000548a0) listscroll_popup_graphic_pane_ParamLimits

0x19e5,	// (0x000530bf) fep_hwr_aid_pane_ParamLimits

0x1fa6,	// (0x00053680) aid_touch_sctrl_top_ParamLimits

0x1fc1,	// (0x0005369b) sctrl_sk_top_pane_g1_ParamLimits

0x1c3c,	// (0x00053316) sctrl_sk_top_pane_g2_ParamLimits

0xfcd3,	// (0x000613ad) sctrl_sk_top_pane_g_ParamLimits

0x1fce,	// (0x000536a8) sctrl_sk_top_pane_t1_ParamLimits

0x1fa6,	// (0x00053680) aid_touch_sctrl_bottom_ParamLimits

0x1fce,	// (0x000536a8) sctrl_sk_bottom_pane_t1_ParamLimits

0x8e3c,	// (0x0005a516) aid_area_touch_clock

0xcb36,	// (0x0005e210) aid_vkb2_area_top_pane_cell_ParamLimits

0xcb36,	// (0x0005e210) aid_vkb2_area_top_pane_cell

0xcbe5,	// (0x0005e2bf) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcbe5,	// (0x0005e2bf) aid_vkb2_area_bottom_pane_cell

0x93ab,	// (0x0005aa85) popup_char_count_window

0x984d,	// (0x0005af27) popup_char_count_window_g1

0x9856,	// (0x0005af30) popup_char_count_window_g2

0x985f,	// (0x0005af39) popup_char_count_window_g3

0x0002,

0xfda4,	// (0x0006147e) popup_char_count_window_g

0x9868,	// (0x0005af42) popup_char_count_window_t1

0x2075,	// (0x0005374f) popup_fep_char_preview_window_ParamLimits

0x2075,	// (0x0005374f) popup_fep_char_preview_window

0xcb56,	// (0x0005e230) vkb2_top_candi_pane_ParamLimits

0xcb56,	// (0x0005e230) vkb2_top_candi_pane

0xee6a,	// (0x00060544) cell_vkb2_top_candi_pane_ParamLimits

0xee6a,	// (0x00060544) cell_vkb2_top_candi_pane

0x25e8,	// (0x00053cc2) bg_popup_fep_char_preview_window_ParamLimits

0x25e8,	// (0x00053cc2) bg_popup_fep_char_preview_window

0x25f6,	// (0x00053cd0) popup_fep_char_preview_window_t1_ParamLimits

0x25f6,	// (0x00053cd0) popup_fep_char_preview_window_t1

0x98c0,	// (0x0005af9a) bg_popup_fep_char_preview_window_g1

0x98c8,	// (0x0005afa2) bg_popup_fep_char_preview_window_g2

0x98d0,	// (0x0005afaa) bg_popup_fep_char_preview_window_g3

0x98d8,	// (0x0005afb2) bg_popup_fep_char_preview_window_g4

0x98e0,	// (0x0005afba) bg_popup_fep_char_preview_window_g5

0x98e8,	// (0x0005afc2) bg_popup_fep_char_preview_window_g6

0x98f0,	// (0x0005afca) bg_popup_fep_char_preview_window_g7

0x98f8,	// (0x0005afd2) bg_popup_fep_char_preview_window_g8

0x9900,	// (0x0005afda) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdab,	// (0x00061485) bg_popup_fep_char_preview_window_g

0x1c3c,	// (0x00053316) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1c3c,	// (0x00053316) cell_vkb2_top_candi_pane_g1

0x1c4a,	// (0x00053324) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1c4a,	// (0x00053324) cell_vkb2_top_candi_pane_g2

0x96b5,	// (0x0005ad8f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x96b5,	// (0x0005ad8f) cell_vkb2_top_candi_pane_g3

0x2638,	// (0x00053d12) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2638,	// (0x00053d12) cell_vkb2_top_candi_pane_g4

0x7be4,	// (0x000592be) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7be4,	// (0x000592be) cell_vkb2_top_candi_pane_g5

0x2659,	// (0x00053d33) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2659,	// (0x00053d33) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc0,	// (0x0006149a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc0,	// (0x0006149a) cell_vkb2_top_candi_pane_g

0x2667,	// (0x00053d41) cell_vkb2_top_candi_pane_t1

0x14ec,	// (0x00052bc6) aid_size_touch_slider_mark_ParamLimits

0x14ec,	// (0x00052bc6) aid_size_touch_slider_mark

0xeb89,	// (0x00060263) grid_graphic2_catg_pane_ParamLimits

0xeb89,	// (0x00060263) grid_graphic2_catg_pane

0xec45,	// (0x0006031f) popup_grid_graphic2_window_t1_ParamLimits

0xec45,	// (0x0006031f) popup_grid_graphic2_window_t1

0xec5b,	// (0x00060335) popup_grid_graphic2_window_t2_ParamLimits

0xec5b,	// (0x00060335) popup_grid_graphic2_window_t2

0x0001,

0xfd79,	// (0x00061453) popup_grid_graphic2_window_t_ParamLimits

0xfd79,	// (0x00061453) popup_grid_graphic2_window_t

0x2fb7,	// (0x00054691) bg_button_pane_cp05_ParamLimits

0xede4,	// (0x000604be) cell_graphic2_control_pane_g1_ParamLimits

0xeeca,	// (0x000605a4) cell_graphic2_catg_pane_ParamLimits

0xeeca,	// (0x000605a4) cell_graphic2_catg_pane

0xcfa1,	// (0x0005e67b) bg_button_pane_cp12

0xeedc,	// (0x000605b6) cell_graphic2_catg_pane_g1

0x8e08,	// (0x0005a4e2) cell_tb_ext_pane_t1_ParamLimits

0x241e,	// (0x00053af8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x241e,	// (0x00053af8) vkb2_top_cell_right_narrow_pane

0x2436,	// (0x00053b10) vkb2_top_cell_right_wide_pane_ParamLimits

0x2436,	// (0x00053b10) vkb2_top_cell_right_wide_pane

0x19d7,	// (0x000530b1) bg_vkb2_func_pane_ParamLimits

0x19d7,	// (0x000530b1) bg_vkb2_func_pane

0x24a7,	// (0x00053b81) vkb2_top_cell_left_pane_g1_ParamLimits

0x19d7,	// (0x000530b1) bg_vkb2_fuc_pane_cp03_ParamLimits

0x19d7,	// (0x000530b1) bg_vkb2_fuc_pane_cp03

0x2505,	// (0x00053bdf) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4ede,	// (0x000565b8) bg_vkb2_func_pane_g1

0x4ee6,	// (0x000565c0) bg_vkb2_func_pane_g2

0x4ef6,	// (0x000565d0) bg_vkb2_func_pane_g3

0x4eee,	// (0x000565c8) bg_vkb2_func_pane_g4

0x4efe,	// (0x000565d8) bg_vkb2_func_pane_g5

0x4f06,	// (0x000565e0) bg_vkb2_func_pane_g6

0x4f0e,	// (0x000565e8) bg_vkb2_func_pane_g7

0x4f16,	// (0x000565f0) bg_vkb2_func_pane_g8

0x4ed6,	// (0x000565b0) bg_vkb2_func_pane_g9

0x0008,

0xfdcd,	// (0x000614a7) bg_vkb2_func_pane_g

0x19d7,	// (0x000530b1) bg_vkb2_fuc_pane_cp01_ParamLimits

0x19d7,	// (0x000530b1) bg_vkb2_fuc_pane_cp01

0x24a7,	// (0x00053b81) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x24a7,	// (0x00053b81) vkb2_top_cell_right_wide_pane_g1

0x19d7,	// (0x000530b1) bg_vkb2_fuc_pane_cp02_ParamLimits

0x19d7,	// (0x000530b1) bg_vkb2_fuc_pane_cp02

0x2686,	// (0x00053d60) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2686,	// (0x00053d60) vkb2_top_cell_right_narrow_pane_g1

0xe2e9,	// (0x0005f9c3) aid_touch_area_decrease_ParamLimits

0xe2e9,	// (0x0005f9c3) aid_touch_area_decrease

0xe323,	// (0x0005f9fd) aid_touch_area_increase_ParamLimits

0xe323,	// (0x0005f9fd) aid_touch_area_increase

0xe34b,	// (0x0005fa25) aid_touch_area_mute_ParamLimits

0xe34b,	// (0x0005fa25) aid_touch_area_mute

0xe373,	// (0x0005fa4d) aid_touch_area_slider_ParamLimits

0xe373,	// (0x0005fa4d) aid_touch_area_slider

0xe3b3,	// (0x0005fa8d) popup_slider_window_g4_ParamLimits

0xe3b3,	// (0x0005fa8d) popup_slider_window_g4

0xe3db,	// (0x0005fab5) popup_slider_window_g5_ParamLimits

0xe3db,	// (0x0005fab5) popup_slider_window_g5

0xe40f,	// (0x0005fae9) popup_slider_window_g6_ParamLimits

0xe40f,	// (0x0005fae9) popup_slider_window_g6

0x8be6,	// (0x0005a2c0) popup_slider_window_t2_ParamLimits

0x8be6,	// (0x0005a2c0) popup_slider_window_t2

0x0001,

0xfcc7,	// (0x000613a1) popup_slider_window_t_ParamLimits

0xfcc7,	// (0x000613a1) popup_slider_window_t

0xe42b,	// (0x0005fb05) slider_pane_ParamLimits

0xe42b,	// (0x0005fb05) slider_pane

0x9923,	// (0x0005affd) slider_pane_g1_ParamLimits

0x9923,	// (0x0005affd) slider_pane_g1

0x9937,	// (0x0005b011) slider_pane_g2_ParamLimits

0x9937,	// (0x0005b011) slider_pane_g2

0x994d,	// (0x0005b027) slider_pane_g3_ParamLimits

0x994d,	// (0x0005b027) slider_pane_g3

0x0003,

0xfde0,	// (0x000614ba) slider_pane_g_ParamLimits

0xfde0,	// (0x000614ba) slider_pane_g

0xc632,	// (0x0005dd0c) popup_tb_float_extension_window_ParamLimits

0xc632,	// (0x0005dd0c) popup_tb_float_extension_window

0x9979,	// (0x0005b053) aid_size_cell_tb_float_ext

0xcfa1,	// (0x0005e67b) bg_popup_sub_window_cp28

0x9985,	// (0x0005b05f) grid_tb_float_ext_pane

0x998f,	// (0x0005b069) cell_tb_float_ext_pane_ParamLimits

0x998f,	// (0x0005b069) cell_tb_float_ext_pane

0x99a9,	// (0x0005b083) cell_tb_float_ext_pane_g1

0x99b2,	// (0x0005b08c) grid_highlight_pane_cp12

0xc7df,	// (0x0005deb9) cell_last_hwr_side_pane_ParamLimits

0xc7df,	// (0x0005deb9) cell_last_hwr_side_pane

0x7507,	// (0x00058be1) cell_last_hwr_side_pane_g1

0x99bb,	// (0x0005b095) cell_last_hwr_side_pane_g2

0x0001,

0xfde9,	// (0x000614c3) cell_last_hwr_side_pane_g

0xccc2,	// (0x0005e39c) vkb2_area_bottom_space_btn_pane_ParamLimits

0xccc2,	// (0x0005e39c) vkb2_area_bottom_space_btn_pane

0x1c3c,	// (0x00053316) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9460,	// (0x0005ab3a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2667,	// (0x00053d41) cell_vkb2_top_candi_pane_t1_ParamLimits

0x26a6,	// (0x00053d80) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x26a6,	// (0x00053d80) vkb2_area_bottom_space_btn_pane_g1

0x26e0,	// (0x00053dba) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x26e0,	// (0x00053dba) vkb2_area_bottom_space_btn_pane_g2

0x2716,	// (0x00053df0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2716,	// (0x00053df0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdee,	// (0x000614c8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdee,	// (0x000614c8) vkb2_area_bottom_space_btn_pane_g

0x1a9a,	// (0x00053174) cel_fep_hwr_func_pane_ParamLimits

0x1a9a,	// (0x00053174) cel_fep_hwr_func_pane

0xc7b4,	// (0x0005de8e) cell_hwr_side_button_pane_ParamLimits

0xc7b4,	// (0x0005de8e) cell_hwr_side_button_pane

0x8e3c,	// (0x0005a516) aid_area_touch_clock_ParamLimits

0x2fb7,	// (0x00054691) bg_uniindi_top_pane_ParamLimits

0x8e4e,	// (0x0005a528) uniindi_top_pane_g1_ParamLimits

0x8e64,	// (0x0005a53e) uniindi_top_pane_g2_ParamLimits

0x8e70,	// (0x0005a54a) uniindi_top_pane_g3_ParamLimits

0x8e81,	// (0x0005a55b) uniindi_top_pane_g4_ParamLimits

0xfcff,	// (0x000613d9) uniindi_top_pane_g_ParamLimits

0x8e8e,	// (0x0005a568) uniindi_top_pane_t1_ParamLimits

0x2fb7,	// (0x00054691) bg_vkb2_func_pane_cp01_ParamLimits

0x2fb7,	// (0x00054691) bg_vkb2_func_pane_cp01

0x99c4,	// (0x0005b09e) cel_fep_hwr_func_pane_g1_ParamLimits

0x99c4,	// (0x0005b09e) cel_fep_hwr_func_pane_g1

0x2fb7,	// (0x00054691) bg_vkb2_func_pane_cp02_ParamLimits

0x2fb7,	// (0x00054691) bg_vkb2_func_pane_cp02

0x99c4,	// (0x0005b09e) cell_hwr_side_button_pane_g1_ParamLimits

0x99c4,	// (0x0005b09e) cell_hwr_side_button_pane_g1

0x4d57,	// (0x00056431) status_pane_g4_ParamLimits

0x4d57,	// (0x00056431) status_pane_g4

0x4d71,	// (0x0005644b) status_pane_t1

0x724c,	// (0x00058926) form2_midp_gauge_slider_cont_pane

0x7254,	// (0x0005892e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdd6c,	// (0x0005f446) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdd7e,	// (0x0005f458) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfabf,	// (0x00061199) form2_midp_gauge_slider_pane_t_ParamLimits

0x728a,	// (0x00058964) form2_midp_slider_pane_ParamLimits

0x203d,	// (0x00053717) aid_size_cell_func_vkb2_ParamLimits

0x203d,	// (0x00053717) aid_size_cell_func_vkb2

0x9965,	// (0x0005b03f) slider_pane_g4_ParamLimits

0x9965,	// (0x0005b03f) slider_pane_g4

0xcd2b,	// (0x0005e405) form2_midp_gauge_slider_pane_t2_cp01

0xcd39,	// (0x0005e413) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcd39,	// (0x0005e413) form2_midp_gauge_slider_pane_t3_cp01

0x278b,	// (0x00053e65) form2_midp_slider_pane_cp01

0xcfa1,	// (0x0005e67b) navi_smil_pane

0x99fd,	// (0x0005b0d7) navi_smil_pane_g1

0x9a05,	// (0x0005b0df) navi_smil_pane_t1

0x99d2,	// (0x0005b0ac) form2_midp_slider_pane_g1

0x99db,	// (0x0005b0b5) form2_midp_slider_pane_g2

0x99e3,	// (0x0005b0bd) form2_midp_slider_pane_g3

0x99d2,	// (0x0005b0ac) form2_midp_slider_pane_g4

0xeee5,	// (0x000605bf) form2_midp_slider_pane_g5

0x0004,

0xfdf7,	// (0x000614d1) form2_midp_slider_pane_g

0x2750,	// (0x00053e2a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2750,	// (0x00053e2a) vkb2_area_bottom_space_btn_pane_g4

0xd3f9,	// (0x0005ead3) lc0_navi_pane_ParamLimits

0xd3f9,	// (0x0005ead3) lc0_navi_pane

0xd463,	// (0x0005eb3d) lc0_stat_indi_pane_ParamLimits

0xd463,	// (0x0005eb3d) lc0_stat_indi_pane

0xd478,	// (0x0005eb52) ls0_title_pane_ParamLimits

0xd478,	// (0x0005eb52) ls0_title_pane

0x39de,	// (0x000550b8) bg_popup_sub_pane_cp14_ParamLimits

0x8e23,	// (0x0005a4fd) list_uniindi_pane_ParamLimits

0x8e2f,	// (0x0005a509) uniindi_top_pane_ParamLimits

0x8ecb,	// (0x0005a5a5) list_single_uniindi_pane_g1_ParamLimits

0x8ede,	// (0x0005a5b8) list_single_uniindi_pane_t1_ParamLimits

0xcd56,	// (0x0005e430) lc0_stat_clock_pane_ParamLimits

0xcd56,	// (0x0005e430) lc0_stat_clock_pane

0xeef0,	// (0x000605ca) lc0_stat_indi_pane_g1_ParamLimits

0xeef0,	// (0x000605ca) lc0_stat_indi_pane_g1

0xeefd,	// (0x000605d7) lc0_stat_indi_pane_g2_ParamLimits

0xeefd,	// (0x000605d7) lc0_stat_indi_pane_g2

0x0001,

0xfe02,	// (0x000614dc) lc0_stat_indi_pane_g_ParamLimits

0xfe02,	// (0x000614dc) lc0_stat_indi_pane_g

0xcd63,	// (0x0005e43d) lc0_uni_indicator_pane_ParamLimits

0xcd63,	// (0x0005e43d) lc0_uni_indicator_pane

0xef0a,	// (0x000605e4) ls0_title_pane_g1_ParamLimits

0xef0a,	// (0x000605e4) ls0_title_pane_g1

0xef1e,	// (0x000605f8) ls0_title_pane_t1_ParamLimits

0xef1e,	// (0x000605f8) ls0_title_pane_t1

0xcd70,	// (0x0005e44a) lc0_uni_indicator_pane_g1_ParamLimits

0xcd70,	// (0x0005e44a) lc0_uni_indicator_pane_g1

0x9a77,	// (0x0005b151) lc0_stat_clock_pane_t1

0xf311,	// (0x000609eb) main_ai5_pane

0x9a85,	// (0x0005b15f) ai5_sk_pane_ParamLimits

0x9a85,	// (0x0005b15f) ai5_sk_pane

0xef4c,	// (0x00060626) cell_ai5_widget_pane_ParamLimits

0xef4c,	// (0x00060626) cell_ai5_widget_pane

0x9b5b,	// (0x0005b235) aid_size_cell_widget_grid

0x9b69,	// (0x0005b243) bg_ai5_widget_pane_ParamLimits

0x9b69,	// (0x0005b243) bg_ai5_widget_pane

0x9be5,	// (0x0005b2bf) cell_ai5_widget_pane_g2

0x9bf9,	// (0x0005b2d3) cell_ai5_widget_pane_g3

0x9c13,	// (0x0005b2ed) cell_ai5_widget_pane_g4

0x9c23,	// (0x0005b2fd) cell_ai5_widget_pane_g5

0x9c33,	// (0x0005b30d) cell_ai5_widget_pane_g6

0x9c3f,	// (0x0005b319) cell_ai5_widget_pane_g7

0x9cab,	// (0x0005b385) cell_ai5_widget_pane_t1_ParamLimits

0x9cab,	// (0x0005b385) cell_ai5_widget_pane_t1

0x9cc8,	// (0x0005b3a2) cell_ai5_widget_pane_t2_ParamLimits

0x9cc8,	// (0x0005b3a2) cell_ai5_widget_pane_t2

0x9ce0,	// (0x0005b3ba) cell_ai5_widget_pane_t3_ParamLimits

0x9ce0,	// (0x0005b3ba) cell_ai5_widget_pane_t3

0x9cf8,	// (0x0005b3d2) cell_ai5_widget_pane_t4_ParamLimits

0x9cf8,	// (0x0005b3d2) cell_ai5_widget_pane_t4

0x9d1e,	// (0x0005b3f8) cell_ai5_widget_pane_t5_ParamLimits

0x9d1e,	// (0x0005b3f8) cell_ai5_widget_pane_t5

0x9d3d,	// (0x0005b417) cell_ai5_widget_pane_t6_ParamLimits

0x9d3d,	// (0x0005b417) cell_ai5_widget_pane_t6

0x9d4f,	// (0x0005b429) cell_ai5_widget_pane_t7_ParamLimits

0x9d4f,	// (0x0005b429) cell_ai5_widget_pane_t7

0x9d6e,	// (0x0005b448) cell_ai5_widget_pane_t8_ParamLimits

0x9d6e,	// (0x0005b448) cell_ai5_widget_pane_t8

0x000b,

0xfe22,	// (0x000614fc) cell_ai5_widget_pane_t_ParamLimits

0xfe22,	// (0x000614fc) cell_ai5_widget_pane_t

0x9df2,	// (0x0005b4cc) grid_ai5_widget_pane

0x39de,	// (0x000550b8) highlight_cell_ai5_widget_pane_ParamLimits

0x39de,	// (0x000550b8) highlight_cell_ai5_widget_pane

0xefb8,	// (0x00060692) ai5_sk_left_pane

0xefc2,	// (0x0006069c) ai5_sk_middle_pane

0xefcc,	// (0x000606a6) ai5_sk_right_pane

0x9e1e,	// (0x0005b4f8) bg_ai5_widget_pane_g1_ParamLimits

0x9e1e,	// (0x0005b4f8) bg_ai5_widget_pane_g1

0x9e2a,	// (0x0005b504) bg_ai5_widget_pane_g2_ParamLimits

0x9e2a,	// (0x0005b504) bg_ai5_widget_pane_g2

0x9e36,	// (0x0005b510) bg_ai5_widget_pane_g3_ParamLimits

0x9e36,	// (0x0005b510) bg_ai5_widget_pane_g3

0x9e42,	// (0x0005b51c) bg_ai5_widget_pane_g4_ParamLimits

0x9e42,	// (0x0005b51c) bg_ai5_widget_pane_g4

0x9e4e,	// (0x0005b528) bg_ai5_widget_pane_g5_ParamLimits

0x9e4e,	// (0x0005b528) bg_ai5_widget_pane_g5

0x9e5a,	// (0x0005b534) bg_ai5_widget_pane_g6_ParamLimits

0x9e5a,	// (0x0005b534) bg_ai5_widget_pane_g6

0x9e66,	// (0x0005b540) bg_ai5_widget_pane_g7_ParamLimits

0x9e66,	// (0x0005b540) bg_ai5_widget_pane_g7

0x9e72,	// (0x0005b54c) bg_ai5_widget_pane_g8_ParamLimits

0x9e72,	// (0x0005b54c) bg_ai5_widget_pane_g8

0x9e7e,	// (0x0005b558) bg_ai5_widget_pane_g9_ParamLimits

0x9e7e,	// (0x0005b558) bg_ai5_widget_pane_g9

0x0008,

0xfe3b,	// (0x00061515) bg_ai5_widget_pane_g_ParamLimits

0xfe3b,	// (0x00061515) bg_ai5_widget_pane_g

0x9eb0,	// (0x0005b58a) cell_shortcut_ai5_widget_pane_ParamLimits

0x9eb0,	// (0x0005b58a) cell_shortcut_ai5_widget_pane

0x4688,	// (0x00055d62) bg_cell_shortcut_ai5_widget_pane

0x9ec1,	// (0x0005b59b) cell_grid_ai5_widget_pane_g1

0x4688,	// (0x00055d62) highlight_cell_shortcut_ai5_widget_pane

0x4ede,	// (0x000565b8) ai5_sk_left_pane_g1

0x9eca,	// (0x0005b5a4) ai5_sk_left_pane_g2

0x9ed2,	// (0x0005b5ac) ai5_sk_left_pane_g3

0x9eda,	// (0x0005b5b4) ai5_sk_left_pane_g4

0x0003,

0xfe4e,	// (0x00061528) ai5_sk_left_pane_g

0x9ee2,	// (0x0005b5bc) ai5_sk_left_pane_t1

0x4ee6,	// (0x000565c0) ai5_sk_right_pane_g1

0x9ef0,	// (0x0005b5ca) ai5_sk_right_pane_g2

0x9ef8,	// (0x0005b5d2) ai5_sk_right_pane_g3

0x9f00,	// (0x0005b5da) ai5_sk_right_pane_g4

0x0003,

0xfe57,	// (0x00061531) ai5_sk_right_pane_g

0x9f08,	// (0x0005b5e2) ai5_sk_right_pane_t1

0x4ee6,	// (0x000565c0) ai5_sk_middle_pane_g1

0x4ede,	// (0x000565b8) ai5_sk_middle_pane_g2

0x4efe,	// (0x000565d8) ai5_sk_middle_pane_g3

0x9ef8,	// (0x0005b5d2) ai5_sk_middle_pane_g4

0x9ed2,	// (0x0005b5ac) ai5_sk_middle_pane_g5

0x9f16,	// (0x0005b5f0) ai5_sk_middle_pane_g6

0xefd6,	// (0x000606b0) ai5_sk_middle_pane_g7

0x0006,

0xfe60,	// (0x0006153a) ai5_sk_middle_pane_g

0xd2e5,	// (0x0005e9bf) aid_touch_area_size_lc0_ParamLimits

0xd2e5,	// (0x0005e9bf) aid_touch_area_size_lc0

0x1c6b,	// (0x00053345) cell_hwr_candidate_pane_t1_ParamLimits

0x4a28,	// (0x00056102) aid_touch_navi_pane

0xd571,	// (0x0005ec4b) status_dt_navi_pane_ParamLimits

0xd571,	// (0x0005ec4b) status_dt_navi_pane

0xd589,	// (0x0005ec63) status_dt_sta_pane_ParamLimits

0xd589,	// (0x0005ec63) status_dt_sta_pane

0xefde,	// (0x000606b8) dt_sta_controll_pane

0xefeb,	// (0x000606c5) dt_sta_indi_pane

0xeff8,	// (0x000606d2) dt_sta_title_pane

0x2fb7,	// (0x00054691) bg_dt_sta_indi_pane_ParamLimits

0x2fb7,	// (0x00054691) bg_dt_sta_indi_pane

0xf00a,	// (0x000606e4) dt_sta_battery_pane

0xf012,	// (0x000606ec) dt_sta_indi_pane_g1

0x9f68,	// (0x0005b642) dt_sta_indi_pane_g2

0x9f71,	// (0x0005b64b) dt_sta_indi_pane_g3

0x0002,

0xfe6f,	// (0x00061549) dt_sta_indi_pane_g

0x9f7a,	// (0x0005b654) dt_sta_signal_pane

0x39de,	// (0x000550b8) bg_dt_sta_title_pane_ParamLimits

0x39de,	// (0x000550b8) bg_dt_sta_title_pane

0x9f83,	// (0x0005b65d) dt_sta_title_pane_g1

0x9f8b,	// (0x0005b665) dt_sta_title_pane_t1_ParamLimits

0x9f8b,	// (0x0005b665) dt_sta_title_pane_t1

0xcfa1,	// (0x0005e67b) bg_dt_sta_control_pane

0xf01b,	// (0x000606f5) dt_sta_controll_pane_g1

0x9fa9,	// (0x0005b683) bg_dt_sta_title_pane_g1

0x9fb2,	// (0x0005b68c) bg_dt_sta_title_pane_g2

0x9fbb,	// (0x0005b695) bg_dt_sta_title_pane_g3

0x0002,

0xfe76,	// (0x00061550) bg_dt_sta_title_pane_g

0x7507,	// (0x00058be1) bg_dt_sta_indi_pane_g1

0x9fc4,	// (0x0005b69e) dt_sta_signal_pane_g1

0x9fcc,	// (0x0005b6a6) dt_sta_signal_pane_g2

0x0001,

0xfe7d,	// (0x00061557) dt_sta_signal_pane_g

0x9fd4,	// (0x0005b6ae) dt_sta_battery_pane_g1

0x9fdd,	// (0x0005b6b7) dt_sta_battery_pane_t1

0x7507,	// (0x00058be1) bg_dt_sta_control_pane_g1

0x4192,	// (0x0005586c) fep_china_uni_eep_pane

0x419a,	// (0x00055874) fep_china_uni_entry_pane_ParamLimits

0x41aa,	// (0x00055884) popup_fep_china_uni_window_g1_ParamLimits

0x41ba,	// (0x00055894) popup_fep_china_uni_window_g2_ParamLimits

0x41ba,	// (0x00055894) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x00060dd7) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x00060dd7) popup_fep_china_uni_window_g

0x9fec,	// (0x0005b6c6) fep_china_uni_eep_pane_g1

0x9ff4,	// (0x0005b6ce) fep_china_uni_eep_pane_t1

0x99f4,	// (0x0005b0ce) aid_touch_area_size_smil_player

0x4b7e,	// (0x00056258) lc0_clock_pane

0x4d65,	// (0x0005643f) status_pane_g5_ParamLimits

0x4d65,	// (0x0005643f) status_pane_g5

0xc1b4,	// (0x0005d88e) popup_keymap_window

0x4d23,	// (0x000563fd) status_icon_pane

0x9bf9,	// (0x0005b2d3) cell_ai5_widget_pane_g3_ParamLimits

0x9c13,	// (0x0005b2ed) cell_ai5_widget_pane_g4_ParamLimits

0x9c23,	// (0x0005b2fd) cell_ai5_widget_pane_g5_ParamLimits

0x9c4b,	// (0x0005b325) cell_ai5_widget_pane_g8_ParamLimits

0x9c4b,	// (0x0005b325) cell_ai5_widget_pane_g8

0x9c5f,	// (0x0005b339) cell_ai5_widget_pane_g9_ParamLimits

0x9c5f,	// (0x0005b339) cell_ai5_widget_pane_g9

0x9c73,	// (0x0005b34d) cell_ai5_widget_pane_g10_ParamLimits

0x9c73,	// (0x0005b34d) cell_ai5_widget_pane_g10

0xa003,	// (0x0005b6dd) status_icon_pane_g1

0xcfa1,	// (0x0005e67b) bg_popup_sub_pane_cp13

0xa00b,	// (0x0005b6e5) popup_keymap_window_t1

0xd27b,	// (0x0005e955) control_pane_g6_ParamLimits

0xd27b,	// (0x0005e955) control_pane_g6

0xd288,	// (0x0005e962) control_pane_g7_ParamLimits

0xd288,	// (0x0005e962) control_pane_g7

0xd295,	// (0x0005e96f) control_pane_g8_ParamLimits

0xd295,	// (0x0005e96f) control_pane_g8

0xefde,	// (0x000606b8) dt_sta_controll_pane_ParamLimits

0xefeb,	// (0x000606c5) dt_sta_indi_pane_ParamLimits

0xeff8,	// (0x000606d2) dt_sta_title_pane_ParamLimits

0x34f3,	// (0x00054bcd) aid_size_touch_scroll_bar_cale

0xf3ea,	// (0x00060ac4) popup_discreet_window_ParamLimits

0xf3ea,	// (0x00060ac4) popup_discreet_window

0xb53b,	// (0x0005cc15) popup_sk_window

0x5565,	// (0x00056c3f) bg_popup_sub_pane_cp28_ParamLimits

0x5565,	// (0x00056c3f) bg_popup_sub_pane_cp28

0xa019,	// (0x0005b6f3) popup_discreet_window_g1_ParamLimits

0xa019,	// (0x0005b6f3) popup_discreet_window_g1

0xa039,	// (0x0005b713) popup_discreet_window_t1_ParamLimits

0xa039,	// (0x0005b713) popup_discreet_window_t1

0xa057,	// (0x0005b731) popup_discreet_window_t2_ParamLimits

0xa057,	// (0x0005b731) popup_discreet_window_t2

0x0002,

0xfe82,	// (0x0006155c) popup_discreet_window_t_ParamLimits

0xfe82,	// (0x0006155c) popup_discreet_window_t

0x27c2,	// (0x00053e9c) popup_sk_window_g1

0x27cc,	// (0x00053ea6) popup_sk_window_g2

0x0001,

0xfe89,	// (0x00061563) popup_sk_window_g

0x27d4,	// (0x00053eae) popup_sk_window_t1

0x27e2,	// (0x00053ebc) popup_sk_window_t1_copy1

0x9be5,	// (0x0005b2bf) cell_ai5_widget_pane_g2_ParamLimits

0x9d80,	// (0x0005b45a) cell_ai5_widget_pane_t9_ParamLimits

0x9d80,	// (0x0005b45a) cell_ai5_widget_pane_t9

0xcfa1,	// (0x0005e67b) main_fep_fshwr2_pane

0xcd97,	// (0x0005e471) aid_fshwr2_btn_pane

0xcda7,	// (0x0005e481) aid_fshwr2_syb_pane

0xcdbb,	// (0x0005e495) aid_fshwr2_txt_pane

0xcdcb,	// (0x0005e4a5) fshwr2_func_candi_pane

0xcdeb,	// (0x0005e4c5) fshwr2_hwr_syb_pane

0xce0d,	// (0x0005e4e7) fshwr2_icf_pane

0xf311,	// (0x000609eb) fshwr2_icf_bg_pane

0xce3d,	// (0x0005e517) fshwr2_icf_pane_t1_ParamLimits

0xce3d,	// (0x0005e517) fshwr2_icf_pane_t1

0x4067,	// (0x00055741) fshwr2_func_candi_pane_g1

0xf024,	// (0x000606fe) fshwr2_func_candi_row_pane_ParamLimits

0xf024,	// (0x000606fe) fshwr2_func_candi_row_pane

0xce56,	// (0x0005e530) cell_fshwr2_syb_pane_ParamLimits

0xce56,	// (0x0005e530) cell_fshwr2_syb_pane

0x28cb,	// (0x00053fa5) fshwr2_hwr_syb_pane_g1_ParamLimits

0x28cb,	// (0x00053fa5) fshwr2_hwr_syb_pane_g1

0xf311,	// (0x000609eb) bg_popup_call_pane_cp01

0xce7c,	// (0x0005e556) fshwr2_func_candi_cell_pane_ParamLimits

0xce7c,	// (0x0005e556) fshwr2_func_candi_cell_pane

0x5346,	// (0x00056a20) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5346,	// (0x00056a20) fshwr2_func_candi_cell_bg_pane

0xcec7,	// (0x0005e5a1) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcec7,	// (0x0005e5a1) fshwr2_func_candi_cell_pane_g1

0xcefe,	// (0x0005e5d8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcefe,	// (0x0005e5d8) fshwr2_func_candi_cell_pane_t1

0xf311,	// (0x000609eb) bg_button_pane_cp08

0x49ac,	// (0x00056086) cell_fshwr2_syb_bg_pane

0xcf19,	// (0x0005e5f3) cell_fshwr2_syb_bg_pane_g1

0xcf2c,	// (0x0005e606) cell_fshwr2_syb_bg_pane_t1

0x39de,	// (0x000550b8) main_tmo_pane

0xd847,	// (0x0005ef21) uni_indicator_pane_g1_ParamLimits

0xd85d,	// (0x0005ef37) uni_indicator_pane_g2_ParamLimits

0xd873,	// (0x0005ef4d) uni_indicator_pane_g3_ParamLimits

0x60b3,	// (0x0005778d) uni_indicator_pane_g4_ParamLimits

0x60b3,	// (0x0005778d) uni_indicator_pane_g4

0x60c7,	// (0x000577a1) uni_indicator_pane_g5_ParamLimits

0x60c7,	// (0x000577a1) uni_indicator_pane_g5

0x60c7,	// (0x000577a1) uni_indicator_pane_g6_ParamLimits

0x60c7,	// (0x000577a1) uni_indicator_pane_g6

0xf8fc,	// (0x00060fd6) uni_indicator_pane_g_ParamLimits

0xe2c5,	// (0x0005f99f) popup_tmo_note_window_ParamLimits

0xe2c5,	// (0x0005f99f) popup_tmo_note_window

0x201f,	// (0x000536f9) fshwr2_bg_pane

0xceef,	// (0x0005e5c9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xceef,	// (0x0005e5c9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8e,	// (0x00061568) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8e,	// (0x00061568) fshwr2_func_candi_cell_pane_g

0x1c24,	// (0x000532fe) bg_popup_window_pane_cp01

0x298c,	// (0x00054066) bg_popup_window_pane_g1_cp01

0xa0d0,	// (0x0005b7aa) bg_popup_window_pane_cp22_ParamLimits

0xa0d0,	// (0x0005b7aa) bg_popup_window_pane_cp22

0xa0de,	// (0x0005b7b8) listscroll_tmo_link_pane_ParamLimits

0xa0de,	// (0x0005b7b8) listscroll_tmo_link_pane

0xa11e,	// (0x0005b7f8) popup_tmo_note_window_g1_ParamLimits

0xa11e,	// (0x0005b7f8) popup_tmo_note_window_g1

0xa12b,	// (0x0005b805) tmo_note_info_pane_ParamLimits

0xa12b,	// (0x0005b805) tmo_note_info_pane

0xf047,	// (0x00060721) list_tmo_note_info_pane_g1_ParamLimits

0xf047,	// (0x00060721) list_tmo_note_info_pane_g1

0xa15c,	// (0x0005b836) list_tmo_note_info_pane_g2_ParamLimits

0xa15c,	// (0x0005b836) list_tmo_note_info_pane_g2

0x0001,

0xfe93,	// (0x0006156d) list_tmo_note_info_pane_g_ParamLimits

0xfe93,	// (0x0006156d) list_tmo_note_info_pane_g

0xa178,	// (0x0005b852) list_tmo_note_info_text_pane_ParamLimits

0xa178,	// (0x0005b852) list_tmo_note_info_text_pane

0xa1f9,	// (0x0005b8d3) list_tmo_link_pane

0xa206,	// (0x0005b8e0) scroll_pane_cp20

0xa213,	// (0x0005b8ed) list_single_tmo_link_pane_ParamLimits

0xa213,	// (0x0005b8ed) list_single_tmo_link_pane

0xa223,	// (0x0005b8fd) list_single_tmo_link_pane_t1

0xa231,	// (0x0005b90b) list_tmo_note_info_text_pane_t1_ParamLimits

0xa231,	// (0x0005b90b) list_tmo_note_info_text_pane_t1

0xcfab,	// (0x0005e685) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcfab,	// (0x0005e685) aid_size_touch_scroll_bar_cp01

0xbdba,	// (0x0005d494) aid_size_touch_slider_marker

0xb52b,	// (0x0005cc05) popup_settings_window_ParamLimits

0xb52b,	// (0x0005cc05) popup_settings_window

0x0b66,	// (0x00052240) popup_candi_list_indi_window

0x4a28,	// (0x00056102) aid_touch_navi_pane_ParamLimits

0x1f7a,	// (0x00053654) rs_clock_indi_pane

0x1f83,	// (0x0005365d) sctrl_sk_bottom_pane_ParamLimits

0x1f94,	// (0x0005366e) sctrl_sk_top_pane_ParamLimits

0x208f,	// (0x00053769) popup_fep_tooltip_window

0x9b5b,	// (0x0005b235) aid_size_cell_widget_grid_ParamLimits

0x9bd0,	// (0x0005b2aa) cell_ai5_widget_pane_g1_ParamLimits

0x9bd0,	// (0x0005b2aa) cell_ai5_widget_pane_g1

0x9c33,	// (0x0005b30d) cell_ai5_widget_pane_g6_ParamLimits

0x9c3f,	// (0x0005b319) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe07,	// (0x000614e1) cell_ai5_widget_pane_g_ParamLimits

0xfe07,	// (0x000614e1) cell_ai5_widget_pane_g

0x9daf,	// (0x0005b489) cell_ai5_widget_pane_t10_ParamLimits

0x9daf,	// (0x0005b489) cell_ai5_widget_pane_t10

0x9df2,	// (0x0005b4cc) grid_ai5_widget_pane_ParamLimits

0x9e8a,	// (0x0005b564) cell_contacts_ai5_widget_pane_ParamLimits

0x9e8a,	// (0x0005b564) cell_contacts_ai5_widget_pane

0xa06c,	// (0x0005b746) popup_discreet_window_t3_ParamLimits

0xa06c,	// (0x0005b746) popup_discreet_window_t3

0xce29,	// (0x0005e503) popup_fshwr2_char_preview_window_ParamLimits

0xce29,	// (0x0005e503) popup_fshwr2_char_preview_window

0xf05e,	// (0x00060738) tmo_note_info_pane_t1

0xf073,	// (0x0006074d) tmo_note_info_pane_t2

0xf08a,	// (0x00060764) tmo_note_info_pane_t3

0xa1d5,	// (0x0005b8af) tmo_note_info_pane_t4

0xa1e7,	// (0x0005b8c1) tmo_note_info_pane_t5

0x0004,

0xfe98,	// (0x00061572) tmo_note_info_pane_t

0xa1f9,	// (0x0005b8d3) list_tmo_link_pane_ParamLimits

0xa206,	// (0x0005b8e0) scroll_pane_cp20_ParamLimits

0xf311,	// (0x000609eb) bg_popup_fep_char_preview_window_cp01

0xf09f,	// (0x00060779) popup_fshwr2_char_preview_window_t1

0xa258,	// (0x0005b932) popup_candi_list_indi_window_g1

0xa261,	// (0x0005b93b) bg_cell_contacts_ai5_widget_pane

0xa26d,	// (0x0005b947) cell_contacts_ai5_widget_pane_g1

0x7ba5,	// (0x0005927f) cell_contacts_ai5_widget_pane_g2

0xa282,	// (0x0005b95c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea3,	// (0x0006157d) cell_contacts_ai5_widget_pane_g

0xa28e,	// (0x0005b968) cell_contacts_ai5_widget_pane_t1

0x39de,	// (0x000550b8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa305,	// (0x0005b9df) settings_container_pane

0x4688,	// (0x00055d62) listscroll_set_pane_copy1

0x6be5,	// (0x000582bf) scroll_pane_cp121_copy1

0x5302,	// (0x000569dc) set_content_pane_copy1

0xa311,	// (0x0005b9eb) aid_height_set_list_copy1_ParamLimits

0xa311,	// (0x0005b9eb) aid_height_set_list_copy1

0x62bf,	// (0x00057999) aid_size_parent_copy1_ParamLimits

0x62bf,	// (0x00057999) aid_size_parent_copy1

0xa31d,	// (0x0005b9f7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa31d,	// (0x0005b9f7) button_value_adjust_pane_cp6_copy1

0x49ac,	// (0x00056086) list_highlight_pane_cp2_copy1_ParamLimits

0x49ac,	// (0x00056086) list_highlight_pane_cp2_copy1

0xa331,	// (0x0005ba0b) list_set_pane_copy1_ParamLimits

0xa331,	// (0x0005ba0b) list_set_pane_copy1

0xa2a0,	// (0x0005b97a) main_pane_set_t1_copy1_ParamLimits

0xa2a0,	// (0x0005b97a) main_pane_set_t1_copy1

0xa2da,	// (0x0005b9b4) main_pane_set_t2_copy1_ParamLimits

0xa2da,	// (0x0005b9b4) main_pane_set_t2_copy1

0xa3de,	// (0x0005bab8) main_pane_set_t3_copy1

0xa3ec,	// (0x0005bac6) main_pane_set_t4_copy1

0xa2f9,	// (0x0005b9d3) set_content_pane_g1_copy1_ParamLimits

0xa2f9,	// (0x0005b9d3) set_content_pane_g1_copy1

0xa3fa,	// (0x0005bad4) setting_code_pane_copy1

0xa402,	// (0x0005badc) setting_slider_graphic_pane_copy1

0xa402,	// (0x0005badc) setting_slider_pane_copy1

0xa40a,	// (0x0005bae4) setting_text_pane_copy1

0xa40a,	// (0x0005bae4) setting_volume_pane_copy1

0xa3fa,	// (0x0005bad4) settings_code_pane_cp2_copy1

0xa412,	// (0x0005baec) settings_code_pane_cp_copy1_ParamLimits

0xa412,	// (0x0005baec) settings_code_pane_cp_copy1

0x2995,	// (0x0005406f) volume_set_pane_copy1

0xa426,	// (0x0005bb00) volume_set_pane_g10_copy1

0xa42e,	// (0x0005bb08) volume_set_pane_g1_copy1

0xa436,	// (0x0005bb10) volume_set_pane_g2_copy1

0xa43e,	// (0x0005bb18) volume_set_pane_g3_copy1

0xa446,	// (0x0005bb20) volume_set_pane_g4_copy1

0xa44e,	// (0x0005bb28) volume_set_pane_g5_copy1

0xa456,	// (0x0005bb30) volume_set_pane_g6_copy1

0xa45e,	// (0x0005bb38) volume_set_pane_g7_copy1

0xa466,	// (0x0005bb40) volume_set_pane_g8_copy1

0xa46e,	// (0x0005bb48) volume_set_pane_g9_copy1

0x2d2e,	// (0x00054408) bg_set_opt_pane_cp_copy1_ParamLimits

0x2d2e,	// (0x00054408) bg_set_opt_pane_cp_copy1

0x299d,	// (0x00054077) setting_slider_pane_t1_copy1_ParamLimits

0x299d,	// (0x00054077) setting_slider_pane_t1_copy1

0x29bc,	// (0x00054096) setting_slider_pane_t2_copy1_ParamLimits

0x29bc,	// (0x00054096) setting_slider_pane_t2_copy1

0x29d6,	// (0x000540b0) setting_slider_pane_t3_copy1_ParamLimits

0x29d6,	// (0x000540b0) setting_slider_pane_t3_copy1

0x29ee,	// (0x000540c8) slider_set_pane_copy1_ParamLimits

0x29ee,	// (0x000540c8) slider_set_pane_copy1

0x3a2a,	// (0x00055104) set_opt_bg_pane_g1_copy2

0x3a32,	// (0x0005510c) set_opt_bg_pane_g2_copy2

0xa476,	// (0x0005bb50) set_opt_bg_pane_g3_copy2

0x3a42,	// (0x0005511c) set_opt_bg_pane_g4_copy2

0x3a4a,	// (0x00055124) set_opt_bg_pane_g5_copy2

0x3a52,	// (0x0005512c) set_opt_bg_pane_g6_copy2

0xa480,	// (0x0005bb5a) set_opt_bg_pane_g7_copy2

0xa488,	// (0x0005bb62) set_opt_bg_pane_g8_copy2

0xa492,	// (0x0005bb6c) set_opt_bg_pane_g9_copy2

0x2a04,	// (0x000540de) aid_size_touch_slider_mark_copy1_ParamLimits

0x2a04,	// (0x000540de) aid_size_touch_slider_mark_copy1

0xa49c,	// (0x0005bb76) slider_set_pane_g1_copy1

0x2a18,	// (0x000540f2) slider_set_pane_g2_copy1

0x150c,	// (0x00052be6) slider_set_pane_g3_copy1_ParamLimits

0x150c,	// (0x00052be6) slider_set_pane_g3_copy1

0x1520,	// (0x00052bfa) slider_set_pane_g4_copy1_ParamLimits

0x1520,	// (0x00052bfa) slider_set_pane_g4_copy1

0x1538,	// (0x00052c12) slider_set_pane_g5_copy1_ParamLimits

0x1538,	// (0x00052c12) slider_set_pane_g5_copy1

0x150c,	// (0x00052be6) slider_set_pane_g6_copy1_ParamLimits

0x150c,	// (0x00052be6) slider_set_pane_g6_copy1

0x2a20,	// (0x000540fa) slider_set_pane_g7_copy1_ParamLimits

0x2a20,	// (0x000540fa) slider_set_pane_g7_copy1

0x2c4e,	// (0x00054328) bg_set_opt_pane_cp2_copy1

0xa4a5,	// (0x0005bb7f) setting_slider_graphic_pane_g1_copy1

0xa4ae,	// (0x0005bb88) setting_slider_graphic_pane_t1_copy1

0xa4be,	// (0x0005bb98) setting_slider_graphic_pane_t2_copy1

0xa4ce,	// (0x0005bba8) slider_set_pane_cp_copy1

0xa4de,	// (0x0005bbb8) input_focus_pane_cp1_copy1

0xa4e7,	// (0x0005bbc1) list_set_text_pane_copy1

0xa4ef,	// (0x0005bbc9) setting_text_pane_g1_copy1

0x3953,	// (0x0005502d) set_text_pane_t1_copy1

0xa4de,	// (0x0005bbb8) input_focus_pane_cp2_copy1

0xa4ef,	// (0x0005bbc9) setting_code_pane_g1_copy1

0xa4f8,	// (0x0005bbd2) setting_code_pane_t1_copy1

0x6a0d,	// (0x000580e7) list_set_graphic_pane_copy1

0x2c4e,	// (0x00054328) bg_set_opt_pane_cp4_copy1

0x4391,	// (0x00055a6b) list_set_graphic_pane_g1_copy1_ParamLimits

0x4391,	// (0x00055a6b) list_set_graphic_pane_g1_copy1

0xa506,	// (0x0005bbe0) list_set_graphic_pane_g2_copy1

0x43a9,	// (0x00055a83) list_set_graphic_pane_t1_copy1_ParamLimits

0x43a9,	// (0x00055a83) list_set_graphic_pane_t1_copy1

0x7507,	// (0x00058be1) rs_clock_indi_pane_g1

0xa50e,	// (0x0005bbe8) rs_clock_indi_pane_t1

0xa51c,	// (0x0005bbf6) rs_indi_pane

0xa524,	// (0x0005bbfe) rs_indi_pane_g1

0xa52d,	// (0x0005bc07) rs_indi_pane_g2

0xa536,	// (0x0005bc10) rs_indi_pane_g3

0x0002,

0xfeaa,	// (0x00061584) rs_indi_pane_g

0x4688,	// (0x00055d62) bg_popup_preview_window_pane_cp03

0xa53f,	// (0x0005bc19) popup_fep_tooltip_window_t1

0x81a7,	// (0x00059881) popup_note2_window_g2_ParamLimits

0x81a7,	// (0x00059881) popup_note2_window_g2

0x0001,

0xfc37,	// (0x00061311) popup_note2_window_g_ParamLimits

0xfc37,	// (0x00061311) popup_note2_window_g

0x86a2,	// (0x00059d7c) bg_popup_sub_pane_cp11_ParamLimits

0x86af,	// (0x00059d89) cell_ai3_links_pane_g1_ParamLimits

0x86c6,	// (0x00059da0) cell_ai3_links_pane_t1

0x3953,	// (0x0005502d) set_text_pane_t1_copy1_ParamLimits

0x459c,	// (0x00055c76) cell_graphic_popup_pane_cp2_ParamLimits

0x459c,	// (0x00055c76) cell_graphic_popup_pane_cp2

0xa54d,	// (0x0005bc27) cell_graphic_popup_pane_g1_cp2

0x3306,	// (0x000549e0) cell_graphic_popup_pane_g2_cp2

0xa555,	// (0x0005bc2f) cell_graphic_popup_pane_g3_cp2

0xa55d,	// (0x0005bc37) cell_graphic_popup_pane_t2_cp2

0x3317,	// (0x000549f1) grid_highlight_pane_cp3_cp2

0x3d82,	// (0x0005545c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x39de,	// (0x000550b8) main_tmo_pane_ParamLimits

0xe2b9,	// (0x0005f993) popup_tmo_big_image_note_window

0x9bbf,	// (0x0005b299) cell_ai5_widget_list_pane

0x9bc7,	// (0x0005b2a1) cell_ai5_widget_lrg_icon_pane

0xf05e,	// (0x00060738) tmo_note_info_pane_t1_ParamLimits

0xf073,	// (0x0006074d) tmo_note_info_pane_t2_ParamLimits

0xf08a,	// (0x00060764) tmo_note_info_pane_t3_ParamLimits

0xa1d5,	// (0x0005b8af) tmo_note_info_pane_t4_ParamLimits

0xa1e7,	// (0x0005b8c1) tmo_note_info_pane_t5_ParamLimits

0xfe98,	// (0x00061572) tmo_note_info_pane_t_ParamLimits

0xa305,	// (0x0005b9df) settings_container_pane_ParamLimits

0xa4d6,	// (0x0005bbb0) indicator_popup_pane_cp5

0xa4d6,	// (0x0005bbb0) indicator_popup_pane_cp6

0x6a0d,	// (0x000580e7) list_set_graphic_pane_copy1_ParamLimits

0xcfa1,	// (0x0005e67b) bg_popup_window_pane_cp23

0xa56b,	// (0x0005bc45) popup_tmo_big_image_note_window_g1

0xa575,	// (0x0005bc4f) popup_tmo_big_image_note_window_t1

0xa585,	// (0x0005bc5f) popup_tmo_big_image_note_window_t2

0xa595,	// (0x0005bc6f) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb1,	// (0x0006158b) popup_tmo_big_image_note_window_t

0x7507,	// (0x00058be1) cell_ai5_widget_lrg_icon_pane_g1

0xa5a5,	// (0x0005bc7f) cell_ai5_widget_lrg_icon_pane_t1

0xa5b3,	// (0x0005bc8d) cell_ai5_widget_list_row_pane_ParamLimits

0xa5b3,	// (0x0005bc8d) cell_ai5_widget_list_row_pane

0xa5ca,	// (0x0005bca4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa5ca,	// (0x0005bca4) cell_ai5_widget_list_row_pane_g1

0xa5d7,	// (0x0005bcb1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa5d7,	// (0x0005bcb1) cell_ai5_widget_list_row_pane_t1

0xa608,	// (0x0005bce2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa608,	// (0x0005bce2) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb8,	// (0x00061592) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb8,	// (0x00061592) cell_ai5_widget_list_row_pane_t

0xf311,	// (0x000609eb) main_fep_vtchi_ss_pane

0xa658,	// (0x0005bd32) popup_fep_char_pre_window

0xa660,	// (0x0005bd3a) popup_fep_ituss_window

0xf0d7,	// (0x000607b1) popup_fep_vkbss_window

0x49ac,	// (0x00056086) grid_vkbss_keypad_pane_ParamLimits

0x49ac,	// (0x00056086) grid_vkbss_keypad_pane

0xa6cc,	// (0x0005bda6) ituss_keypad_pane

0x2a40,	// (0x0005411a) aid_vkbss_key_offset_ParamLimits

0x2a40,	// (0x0005411a) aid_vkbss_key_offset

0xcf42,	// (0x0005e61c) cell_vkbss_key_pane_ParamLimits

0xcf42,	// (0x0005e61c) cell_vkbss_key_pane

0xa6d8,	// (0x0005bdb2) bg_cell_vkbss_key_g1_ParamLimits

0xa6d8,	// (0x0005bdb2) bg_cell_vkbss_key_g1

0xf0e4,	// (0x000607be) cell_vkbss_key_3p_pane_ParamLimits

0xf0e4,	// (0x000607be) cell_vkbss_key_3p_pane

0xf11a,	// (0x000607f4) cell_vkbss_key_g1_ParamLimits

0xf11a,	// (0x000607f4) cell_vkbss_key_g1

0xf150,	// (0x0006082a) cell_vkbss_key_t1_ParamLimits

0xf150,	// (0x0006082a) cell_vkbss_key_t1

0x2aaa,	// (0x00054184) cell_ituss_key_pane_ParamLimits

0x2aaa,	// (0x00054184) cell_ituss_key_pane

0xa7ac,	// (0x0005be86) bg_cell_ituss_key_g1_ParamLimits

0xa7ac,	// (0x0005be86) bg_cell_ituss_key_g1

0xa7b8,	// (0x0005be92) cell_ituss_key_pane_g1_ParamLimits

0xa7b8,	// (0x0005be92) cell_ituss_key_pane_g1

0x2abb,	// (0x00054195) cell_ituss_key_pane_g2_ParamLimits

0x2abb,	// (0x00054195) cell_ituss_key_pane_g2

0x0005,

0xfebf,	// (0x00061599) cell_ituss_key_pane_g_ParamLimits

0xfebf,	// (0x00061599) cell_ituss_key_pane_g

0x2b3f,	// (0x00054219) cell_ituss_key_t1_ParamLimits

0x2b3f,	// (0x00054219) cell_ituss_key_t1

0x2b79,	// (0x00054253) cell_ituss_key_t2_ParamLimits

0x2b79,	// (0x00054253) cell_ituss_key_t2

0x2bab,	// (0x00054285) cell_ituss_key_t3_ParamLimits

0x2bab,	// (0x00054285) cell_ituss_key_t3

0x2bdc,	// (0x000542b6) cell_ituss_key_t4_ParamLimits

0x2bdc,	// (0x000542b6) cell_ituss_key_t4

0x0004,

0xfecc,	// (0x000615a6) cell_ituss_key_t_ParamLimits

0xfecc,	// (0x000615a6) cell_ituss_key_t

0xf1ac,	// (0x00060886) cell_vkbss_key_3p_pane_g1

0xf1b4,	// (0x0006088e) cell_vkbss_key_3p_pane_g2

0xf1bc,	// (0x00060896) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed7,	// (0x000615b1) cell_vkbss_key_3p_pane_g

0x4688,	// (0x00055d62) bg_popup_fep_char_preview_window_cp02

0xa7f6,	// (0x0005bed0) popup_fep_char_pre_window_t1

0xefae,	// (0x00060688) main_ai5_sk_pane

0xa261,	// (0x0005b93b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa26d,	// (0x0005b947) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7ba5,	// (0x0005927f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa282,	// (0x0005b95c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea3,	// (0x0006157d) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa28e,	// (0x0005b968) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x39de,	// (0x000550b8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf1c4,	// (0x0006089e) main_ai5_sk_pane_g1

0x539e,	// (0x00056a78) popup_query_code_window_g1

0xf0c8,	// (0x000607a2) popup_fep_vkb_icf_pane

0xa6a3,	// (0x0005bd7d) popup_fep_vtchi_icf_pane

0xa80d,	// (0x0005bee7) bg_icf_pane

0xa80d,	// (0x0005bee7) list_vkb_icf_pane

0xa819,	// (0x0005bef3) bg_icf_pane_cp01

0xa82c,	// (0x0005bf06) vtchi_icf_list_pane

0xf219,	// (0x000608f3) list_vkb_icf_pane_t1_ParamLimits

0xf219,	// (0x000608f3) list_vkb_icf_pane_t1

0xa8aa,	// (0x0005bf84) vtchi_icf_list_pane_t1_ParamLimits

0xa8aa,	// (0x0005bf84) vtchi_icf_list_pane_t1

0xa660,	// (0x0005bd3a) popup_fep_ituss_window_ParamLimits

0xa6a3,	// (0x0005bd7d) popup_fep_vtchi_icf_pane_ParamLimits

0xa6cc,	// (0x0005bda6) ituss_keypad_pane_ParamLimits

0x2a36,	// (0x00054110) ituss_sks_pane

0xa80d,	// (0x0005bee7) bg_icf_pane_ParamLimits

0xf0ad,	// (0x00060787) icf_edit_indi_pane_ParamLimits

0xf0ad,	// (0x00060787) icf_edit_indi_pane

0xa80d,	// (0x0005bee7) list_vkb_icf_pane_ParamLimits

0xa819,	// (0x0005bef3) bg_icf_pane_cp01_ParamLimits

0xa64b,	// (0x0005bd25) icf_edit_indi_pane_cp01_ParamLimits

0xa64b,	// (0x0005bd25) icf_edit_indi_pane_cp01

0xa82c,	// (0x0005bf06) vtchi_query_pane

0x99c4,	// (0x0005b09e) icf_edit_indi_pane_g1_ParamLimits

0x99c4,	// (0x0005b09e) icf_edit_indi_pane_g1

0xf230,	// (0x0006090a) icf_edit_indi_pane_g2_ParamLimits

0xf230,	// (0x0006090a) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x000615dc) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x000615dc) icf_edit_indi_pane_g

0xf244,	// (0x0006091e) icf_edit_indi_pane_t1

0xa8c8,	// (0x0005bfa2) bg_input_focus_pane_cp042

0x34ea,	// (0x00054bc4) vtchi_button_pane

0xa8d1,	// (0x0005bfab) vtchi_query_pane_t1

0xa8df,	// (0x0005bfb9) vtchi_query_pane_t2

0xa8ed,	// (0x0005bfc7) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x000615cb) vtchi_query_pane_t

0xf311,	// (0x000609eb) bg_button_pane_cp13

0xa8fb,	// (0x0005bfd5) vtchi_button_pane_g1

0x2c1f,	// (0x000542f9) ituss_sks_pane_g1

0x2c2a,	// (0x00054304) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x000615d2) ituss_sks_pane_g

0xa903,	// (0x0005bfdd) ituss_sks_pane_t1

0xa911,	// (0x0005bfeb) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x000615d7) ituss_sks_pane_t

0x6f89,	// (0x00058663) indicator_nsta_pane_cp_g1

0x6f92,	// (0x0005866c) indicator_nsta_pane_cp_g2

0x6f9a,	// (0x00058674) indicator_nsta_pane_cp_g3

0x6fa2,	// (0x0005867c) indicator_nsta_pane_cp_g4

0x6f92,	// (0x0005866c) indicator_nsta_pane_cp_g5

0x6f9a,	// (0x00058674) indicator_nsta_pane_cp_g6

0x0005,

0xfa75,	// (0x0006114f) indicator_nsta_pane_cp_g

0xedc5,	// (0x0006049f) cell_graphic2_pane_t2_ParamLimits

0xedc5,	// (0x0006049f) cell_graphic2_pane_t2

0x0001,

0xfd8e,	// (0x00061468) cell_graphic2_pane_t_ParamLimits

0xfd8e,	// (0x00061468) cell_graphic2_pane_t

0xedfa,	// (0x000604d4) cell_graphic2_control_pane_t1

0xd168,	// (0x0005e842) signal_pane_g3_ParamLimits

0xd168,	// (0x0005e842) signal_pane_g3

0xd17c,	// (0x0005e856) signal_pane_g4_ParamLimits

0xd17c,	// (0x0005e856) signal_pane_g4

0xa61a,	// (0x0005bcf4) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa61a,	// (0x0005bcf4) cell_ai5_widget_list_row_pane_t3

0xa7cc,	// (0x0005bea6) cell_ituss_key_pane_t1_ParamLimits

0xa7cc,	// (0x0005bea6) cell_ituss_key_pane_t1

0x4fdb,	// (0x000566b5) form_field_data_wide_pane_vc_t2_ParamLimits

0x4fdb,	// (0x000566b5) form_field_data_wide_pane_vc_t2

0x4fef,	// (0x000566c9) form_field_data_wide_pane_vc_t3_ParamLimits

0x4fef,	// (0x000566c9) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x00060ebe) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x00060ebe) form_field_data_wide_pane_vc_t

0x6c27,	// (0x00058301) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6c27,	// (0x00058301) form_field_slider_wide_pane_vc_t3

0x6d05,	// (0x000583df) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6d05,	// (0x000583df) form_field_popup_wide_pane_vc_t2

0x6d1c,	// (0x000583f6) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6d1c,	// (0x000583f6) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa64,	// (0x0006113e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x0006113e) form_field_popup_wide_pane_vc_t

0xcd97,	// (0x0005e471) aid_fshwr2_btn_pane_ParamLimits

0xcda7,	// (0x0005e481) aid_fshwr2_syb_pane_ParamLimits

0xcdbb,	// (0x0005e495) aid_fshwr2_txt_pane_ParamLimits

0x201f,	// (0x000536f9) fshwr2_bg_pane_ParamLimits

0xcdcb,	// (0x0005e4a5) fshwr2_func_candi_pane_ParamLimits

0xcdeb,	// (0x0005e4c5) fshwr2_hwr_syb_pane_ParamLimits

0xce0d,	// (0x0005e4e7) fshwr2_icf_pane_ParamLimits

0x371e,	// (0x00054df8) list_double_graphic_pane_vc_g4_ParamLimits

0x371e,	// (0x00054df8) list_double_graphic_pane_vc_g4

0x2adb,	// (0x000541b5) cell_ituss_key_pane_g3_ParamLimits

0x2adb,	// (0x000541b5) cell_ituss_key_pane_g3

0x2c0d,	// (0x000542e7) cell_ituss_key_t5_ParamLimits

0x2c0d,	// (0x000542e7) cell_ituss_key_t5

0xf0d7,	// (0x000607b1) popup_fep_vkbss_window_ParamLimits

0x9b52,	// (0x0005b22c) aid_cell_ai5_quarter

0xf244,	// (0x0006091e) icf_edit_indi_pane_t1_ParamLimits

0x305f,	// (0x00054739) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x305f,	// (0x00054739) aid_tch_indicator_popup_pane_cp2

0x3072,	// (0x0005474c) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3072,	// (0x0005474c) aid_tch_query_popup_data_pane_cp2

0x5346,	// (0x00056a20) aid_tch_query_popup_pane_ParamLimits

0x5346,	// (0x00056a20) aid_tch_query_popup_pane

0x5346,	// (0x00056a20) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x5346,	// (0x00056a20) aid_tch_query_popup_data_pane_cp1

0x49ac,	// (0x00056086) cell_fshwr2_syb_bg_pane_ParamLimits

0xcf19,	// (0x0005e5f3) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xcf2c,	// (0x0005e606) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf0c8,	// (0x000607a2) popup_fep_vkb_icf_pane_ParamLimits

0xcd23,	// (0x0005e3fd) bg_popup_fep_char_preview_window_g10

0x9c87,	// (0x0005b361) cell_ai5_widget_pane_g11_ParamLimits

0x9c87,	// (0x0005b361) cell_ai5_widget_pane_g11

0x9c93,	// (0x0005b36d) cell_ai5_widget_pane_g12_ParamLimits

0x9c93,	// (0x0005b36d) cell_ai5_widget_pane_g12

0x9c9f,	// (0x0005b379) cell_ai5_widget_pane_g13_ParamLimits

0x9c9f,	// (0x0005b379) cell_ai5_widget_pane_g13

0x9dce,	// (0x0005b4a8) cell_ai5_widget_pane_t11_ParamLimits

0x9dce,	// (0x0005b4a8) cell_ai5_widget_pane_t11

0x9de0,	// (0x0005b4ba) cell_ai5_widget_pane_t12_ParamLimits

0x9de0,	// (0x0005b4ba) cell_ai5_widget_pane_t12

0x2ae7,	// (0x000541c1) cell_ituss_key_pane_g4_ParamLimits

0x2ae7,	// (0x000541c1) cell_ituss_key_pane_g4

0x2b03,	// (0x000541dd) cell_ituss_key_pane_g5_ParamLimits

0x2b03,	// (0x000541dd) cell_ituss_key_pane_g5

0x2b1f,	// (0x000541f9) cell_ituss_key_pane_g6_ParamLimits

0x2b1f,	// (0x000541f9) cell_ituss_key_pane_g6

0x4ed6,	// (0x000565b0) bg_icf_pane_g1

0xf1cd,	// (0x000608a7) bg_icf_pane_g2

0xf1d7,	// (0x000608b1) bg_icf_pane_g3

0xf1df,	// (0x000608b9) bg_icf_pane_g4

0xf1e9,	// (0x000608c3) bg_icf_pane_g5

0xf1f3,	// (0x000608cd) bg_icf_pane_g6

0xf1fd,	// (0x000608d7) bg_icf_pane_g7

0xf205,	// (0x000608df) bg_icf_pane_g8

0xf20f,	// (0x000608e9) bg_icf_pane_g9

0x0008,

0xfede,	// (0x000615b8) bg_icf_pane_g

0xa6b9,	// (0x0005bd93) popup_hyb_candi_window_ParamLimits

0xa6b9,	// (0x0005bd93) popup_hyb_candi_window

0x4f4a,	// (0x00056624) bg_popup_sub_pane_cp01_ParamLimits

0x4f4a,	// (0x00056624) bg_popup_sub_pane_cp01

0xa94c,	// (0x0005c026) entry_hyb_candi_pane_ParamLimits

0xa94c,	// (0x0005c026) entry_hyb_candi_pane

0xa95b,	// (0x0005c035) grid_hyb_candi_pane_ParamLimits

0xa95b,	// (0x0005c035) grid_hyb_candi_pane

0xa970,	// (0x0005c04a) grid_hyb_phrase_pane_ParamLimits

0xa970,	// (0x0005c04a) grid_hyb_phrase_pane

0xa97f,	// (0x0005c059) cell_hyb_candi_pane_ParamLimits

0xa97f,	// (0x0005c059) cell_hyb_candi_pane

0xa9a2,	// (0x0005c07c) cell_hyb_candi_scroll_pane

0x4067,	// (0x00055741) cell_hyb_candi_pane_g1

0xa9ab,	// (0x0005c085) cell_hyb_candi_pane_t1

0xa9b9,	// (0x0005c093) cell_hyb_phrase_pane

0x4067,	// (0x00055741) cell_hyb_phrase_pane_g1

0xa9c2,	// (0x0005c09c) cell_hyb_phrase_pane_t1

0xa9d0,	// (0x0005c0aa) entry_hyb_candi_pane_t1

0x4688,	// (0x00055d62) input_focus_pane_cp06

0xa9de,	// (0x0005c0b8) cell_hyb_candi_scroll_pane_g1

0xa9e6,	// (0x0005c0c0) cell_hyb_candi_scroll_pane_g1_aid

0xa9ee,	// (0x0005c0c8) cell_hyb_candi_scroll_pane_g2

0xa9f6,	// (0x0005c0d0) cell_hyb_candi_scroll_pane_g2_aid

0xa9fe,	// (0x0005c0d8) cell_hyb_candi_scroll_pane_g3

0xaa06,	// (0x0005c0e0) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
