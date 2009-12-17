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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000b0fc };

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
0xf576,	// (0x0001a672) Screen

0xf582,	// (0x0001a67e) application_window_ParamLimits

0xf582,	// (0x0001a67e) application_window

0x5ef6,	// (0x00010ff2) screen_g1

0xe4e4,	// (0x000195e0) area_bottom_pane_ParamLimits

0xe4e4,	// (0x000195e0) area_bottom_pane

0x43c1,	// (0x0000f4bd) area_top_pane_ParamLimits

0x43c1,	// (0x0000f4bd) area_top_pane

0x445f,	// (0x0000f55b) main_pane_ParamLimits

0x445f,	// (0x0000f55b) main_pane

0x5f00,	// (0x00010ffc) misc_graphics

0x1597,	// (0x0000c693) battery_pane_ParamLimits

0x1597,	// (0x0000c693) battery_pane

0x9350,	// (0x0001444c) bg_status_flat_pane_g8

0x9358,	// (0x00014454) bg_status_flat_pane_g9

0x868e,	// (0x0001378a) context_pane_ParamLimits

0x868e,	// (0x0001378a) context_pane

0x1702,	// (0x0000c7fe) navi_pane_ParamLimits

0x1702,	// (0x0000c7fe) navi_pane

0x1779,	// (0x0000c875) signal_pane_ParamLimits

0x1779,	// (0x0000c875) signal_pane

0x0008,

0xf8a8,	// (0x0001a9a4) bg_status_flat_pane_g

0x1809,	// (0x0000c905) status_pane_g1_ParamLimits

0x1809,	// (0x0000c905) status_pane_g1

0x181f,	// (0x0000c91b) status_pane_g2_ParamLimits

0x181f,	// (0x0000c91b) status_pane_g2

0x88ae,	// (0x000139aa) status_pane_g3_ParamLimits

0x88ae,	// (0x000139aa) status_pane_g3

0x0004,

0xf7db,	// (0x0001a8d7) status_pane_g_ParamLimits

0xf7db,	// (0x0001a8d7) status_pane_g

0x182b,	// (0x0000c927) title_pane_ParamLimits

0x182b,	// (0x0000c927) title_pane

0x188c,	// (0x0000c988) uni_indicator_pane_ParamLimits

0x188c,	// (0x0000c988) uni_indicator_pane

0x7f39,	// (0x00013035) bg_list_pane_ParamLimits

0x7f39,	// (0x00013035) bg_list_pane

0x0e73,	// (0x0000bf6f) find_pane

0x0e7b,	// (0x0000bf77) listscroll_app_pane_ParamLimits

0x0e7b,	// (0x0000bf77) listscroll_app_pane

0x7f6d,	// (0x00013069) listscroll_form_pane

0x0e87,	// (0x0000bf83) listscroll_gen_pane_ParamLimits

0x0e87,	// (0x0000bf83) listscroll_gen_pane

0x7f6d,	// (0x00013069) listscroll_set_pane

0x9f15,	// (0x00015011) main_idle_act_pane

0x7c11,	// (0x00012d0d) main_idle_trad_pane

0x7c11,	// (0x00012d0d) main_list_empty_pane

0x7f9b,	// (0x00013097) main_midp_pane

0x7fa7,	// (0x000130a3) main_pane_g1_ParamLimits

0x7fa7,	// (0x000130a3) main_pane_g1

0x0e9b,	// (0x0000bf97) popup_ai_message_window_ParamLimits

0x0e9b,	// (0x0000bf97) popup_ai_message_window

0x0f2c,	// (0x0000c028) popup_fep_china_uni_window_ParamLimits

0x0f2c,	// (0x0000c028) popup_fep_china_uni_window

0x80bb,	// (0x000131b7) popup_fep_japan_candidate_window_ParamLimits

0x80bb,	// (0x000131b7) popup_fep_japan_candidate_window

0x80db,	// (0x000131d7) popup_fep_japan_predictive_window_ParamLimits

0x80db,	// (0x000131d7) popup_fep_japan_predictive_window

0x0f88,	// (0x0000c084) popup_find_window

0x0fa5,	// (0x0000c0a1) popup_grid_graphic_window_ParamLimits

0x0fa5,	// (0x0000c0a1) popup_grid_graphic_window

0x8140,	// (0x0001323c) popup_large_graphic_colour_window

0x103d,	// (0x0000c139) popup_menu_window_ParamLimits

0x103d,	// (0x0000c139) popup_menu_window

0x11f7,	// (0x0000c2f3) popup_note_image_window

0x11bd,	// (0x0000c2b9) popup_note_wait_window_ParamLimits

0x11bd,	// (0x0000c2b9) popup_note_wait_window

0x120f,	// (0x0000c30b) popup_note_window_ParamLimits

0x120f,	// (0x0000c30b) popup_note_window

0x12b5,	// (0x0000c3b1) popup_query_code_window_ParamLimits

0x12b5,	// (0x0000c3b1) popup_query_code_window

0x8388,	// (0x00013484) popup_query_data_code_window_ParamLimits

0x8388,	// (0x00013484) popup_query_data_code_window

0x12ef,	// (0x0000c3eb) popup_query_data_window_ParamLimits

0x12ef,	// (0x0000c3eb) popup_query_data_window

0x1365,	// (0x0000c461) popup_query_sat_info_window_ParamLimits

0x1365,	// (0x0000c461) popup_query_sat_info_window

0x13fc,	// (0x0000c4f8) popup_snote_single_graphic_window_ParamLimits

0x13fc,	// (0x0000c4f8) popup_snote_single_graphic_window

0x13fc,	// (0x0000c4f8) popup_snote_single_text_window_ParamLimits

0x13fc,	// (0x0000c4f8) popup_snote_single_text_window

0x840f,	// (0x0001350b) popup_sub_window_general

0x853f,	// (0x0001363b) popup_window_general_ParamLimits

0x853f,	// (0x0001363b) popup_window_general

0x8554,	// (0x00013650) power_save_pane

0xe666,	// (0x00019762) control_pane_g1_ParamLimits

0xe666,	// (0x00019762) control_pane_g1

0x4be7,	// (0x0000fce3) control_pane_g2_ParamLimits

0x4be7,	// (0x0000fce3) control_pane_g2

0x7eda,	// (0x00012fd6) control_pane_g3_ParamLimits

0x7eda,	// (0x00012fd6) control_pane_g3

0x0007,

0xf7c3,	// (0x0001a8bf) control_pane_g_ParamLimits

0xf7c3,	// (0x0001a8bf) control_pane_g

0xe69d,	// (0x00019799) control_pane_t1_ParamLimits

0xe69d,	// (0x00019799) control_pane_t1

0xe6fb,	// (0x000197f7) control_pane_t2_ParamLimits

0xe6fb,	// (0x000197f7) control_pane_t2

0x0002,

0xf7d4,	// (0x0001a8d0) control_pane_t_ParamLimits

0xf7d4,	// (0x0001a8d0) control_pane_t

0x7dfb,	// (0x00012ef7) navi_navi_volume_pane_cp1

0x7e04,	// (0x00012f00) status_small_icon_pane

0x7e0c,	// (0x00012f08) status_small_pane_g1_ParamLimits

0x7e0c,	// (0x00012f08) status_small_pane_g1

0x7e40,	// (0x00012f3c) status_small_pane_g2_ParamLimits

0x7e40,	// (0x00012f3c) status_small_pane_g2

0x7e4c,	// (0x00012f48) status_small_pane_g3_ParamLimits

0x7e4c,	// (0x00012f48) status_small_pane_g3

0x7e58,	// (0x00012f54) status_small_pane_g4_ParamLimits

0x7e58,	// (0x00012f54) status_small_pane_g4

0x7e64,	// (0x00012f60) status_small_pane_g5_ParamLimits

0x7e64,	// (0x00012f60) status_small_pane_g5

0x7e73,	// (0x00012f6f) status_small_pane_g6_ParamLimits

0x7e73,	// (0x00012f6f) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0001a8ae) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0001a8ae) status_small_pane_g

0x7ea3,	// (0x00012f9f) status_small_pane_t1

0x7ec6,	// (0x00012fc2) status_small_wait_pane_ParamLimits

0x7ec6,	// (0x00012fc2) status_small_wait_pane

0x0af5,	// (0x0000bbf1) aid_levels_signal_ParamLimits

0x0af5,	// (0x0000bbf1) aid_levels_signal

0x0b0d,	// (0x0000bc09) signal_pane_g1_ParamLimits

0x0b0d,	// (0x0000bc09) signal_pane_g1

0x0b28,	// (0x0000bc24) signal_pane_g2_ParamLimits

0x0b28,	// (0x0000bc24) signal_pane_g2

0x0001,

0xf747,	// (0x0001a843) signal_pane_g_ParamLimits

0xf747,	// (0x0001a843) signal_pane_g

0x7661,	// (0x0001275d) context_pane_g1

0x005a,	// (0x0000b156) title_pane_g1

0x008f,	// (0x0000b18b) title_pane_t1

0x5fa8,	// (0x000110a4) title_pane_t2

0x5fce,	// (0x000110ca) title_pane_t3

0x0002,

0xf59b,	// (0x0001a697) title_pane_t

0x18b4,	// (0x0000c9b0) aid_levels_battery_ParamLimits

0x18b4,	// (0x0000c9b0) aid_levels_battery

0x18d0,	// (0x0000c9cc) battery_pane_g1_ParamLimits

0x18d0,	// (0x0000c9cc) battery_pane_g1

0x18ed,	// (0x0000c9e9) battery_pane_g2_ParamLimits

0x18ed,	// (0x0000c9e9) battery_pane_g2

0x0001,

0xf7e6,	// (0x0001a8e2) battery_pane_g_ParamLimits

0xf7e6,	// (0x0001a8e2) battery_pane_g

0x1cc8,	// (0x0000cdc4) uni_indicator_pane_g1

0x1cdd,	// (0x0000cdd9) uni_indicator_pane_g2

0x1cf2,	// (0x0000cdee) uni_indicator_pane_g3

0x0005,

0xf950,	// (0x0001aa4c) uni_indicator_pane_g

0x7a83,	// (0x00012b7f) navi_icon_pane_ParamLimits

0x7a83,	// (0x00012b7f) navi_icon_pane

0x79cc,	// (0x00012ac8) navi_midp_pane

0x7a9f,	// (0x00012b9b) navi_navi_pane

0x7aa9,	// (0x00012ba5) navi_text_pane_ParamLimits

0x7aa9,	// (0x00012ba5) navi_text_pane

0x5ef6,	// (0x00010ff2) status_small_wait_pane_g1

0x6417,	// (0x00011513) status_small_wait_pane_g2

0x0001,

0xf94b,	// (0x0001aa47) status_small_wait_pane_g

0x99b1,	// (0x00014aad) navi_navi_icon_text_pane

0x99b9,	// (0x00014ab5) navi_navi_pane_g1_ParamLimits

0x99b9,	// (0x00014ab5) navi_navi_pane_g1

0x99cb,	// (0x00014ac7) navi_navi_pane_g2_ParamLimits

0x99cb,	// (0x00014ac7) navi_navi_pane_g2

0x0001,

0xf919,	// (0x0001aa15) navi_navi_pane_g_ParamLimits

0xf919,	// (0x0001aa15) navi_navi_pane_g

0x99dd,	// (0x00014ad9) navi_navi_tabs_pane

0x99e6,	// (0x00014ae2) navi_navi_text_pane

0x99b1,	// (0x00014aad) navi_navi_volume_pane

0x1c89,	// (0x0000cd85) navi_text_pane_t1

0x1c7d,	// (0x0000cd79) navi_icon_pane_g1

0x98ce,	// (0x000149ca) navi_navi_text_pane_t1

0xe948,	// (0x00019a44) navi_navi_volume_pane_g1

0xe950,	// (0x00019a4c) volume_small_pane

0x1bc8,	// (0x0000ccc4) navi_navi_icon_text_pane_g1

0x1bd0,	// (0x0000cccc) navi_navi_icon_text_pane_t1

0x7a9f,	// (0x00012b9b) navi_tabs_2_long_pane

0x7a9f,	// (0x00012b9b) navi_tabs_2_pane

0x7a9f,	// (0x00012b9b) navi_tabs_3_long_pane

0x7a9f,	// (0x00012b9b) navi_tabs_3_pane

0x7a9f,	// (0x00012b9b) navi_tabs_4_pane

0xe928,	// (0x00019a24) tabs_2_active_pane_ParamLimits

0xe928,	// (0x00019a24) tabs_2_active_pane

0xe938,	// (0x00019a34) tabs_2_passive_pane_ParamLimits

0xe938,	// (0x00019a34) tabs_2_passive_pane

0xe8f6,	// (0x000199f2) tabs_3_active_pane_ParamLimits

0xe8f6,	// (0x000199f2) tabs_3_active_pane

0xe906,	// (0x00019a02) tabs_3_passive_pane_ParamLimits

0xe906,	// (0x00019a02) tabs_3_passive_pane

0xe917,	// (0x00019a13) tabs_3_passive_pane_cp_ParamLimits

0xe917,	// (0x00019a13) tabs_3_passive_pane_cp

0xe8b2,	// (0x000199ae) tabs_4_active_pane_ParamLimits

0xe8b2,	// (0x000199ae) tabs_4_active_pane

0xe8c3,	// (0x000199bf) tabs_4_passive_pane_ParamLimits

0xe8c3,	// (0x000199bf) tabs_4_passive_pane

0xe8d4,	// (0x000199d0) tabs_4_passive_pane_cp_ParamLimits

0xe8d4,	// (0x000199d0) tabs_4_passive_pane_cp

0xe8e5,	// (0x000199e1) tabs_4_passive_pane_cp2_ParamLimits

0xe8e5,	// (0x000199e1) tabs_4_passive_pane_cp2

0xe892,	// (0x0001998e) tabs_2_long_active_pane_ParamLimits

0xe892,	// (0x0001998e) tabs_2_long_active_pane

0xe8a2,	// (0x0001999e) tabs_2_long_passive_pane_ParamLimits

0xe8a2,	// (0x0001999e) tabs_2_long_passive_pane

0xe85f,	// (0x0001995b) tabs_3_long_active_pane_ParamLimits

0xe85f,	// (0x0001995b) tabs_3_long_active_pane

0xe870,	// (0x0001996c) tabs_3_long_passive_pane_ParamLimits

0xe870,	// (0x0001996c) tabs_3_long_passive_pane

0xe881,	// (0x0001997d) tabs_3_long_passive_pane_cp_ParamLimits

0xe881,	// (0x0001997d) tabs_3_long_passive_pane_cp

0x4eba,	// (0x0000ffb6) volume_small_pane_g1

0xe80e,	// (0x0001990a) volume_small_pane_g2

0xe817,	// (0x00019913) volume_small_pane_g3

0xe820,	// (0x0001991c) volume_small_pane_g4

0xe829,	// (0x00019925) volume_small_pane_g5

0xe832,	// (0x0001992e) volume_small_pane_g6

0xe83b,	// (0x00019937) volume_small_pane_g7

0xe844,	// (0x00019940) volume_small_pane_g8

0xe84d,	// (0x00019949) volume_small_pane_g9

0xe856,	// (0x00019952) volume_small_pane_g10

0x0009,

0xf8e5,	// (0x0001a9e1) volume_small_pane_g

0x6275,	// (0x00011371) bg_active_tab_pane_cp2_ParamLimits

0x6275,	// (0x00011371) bg_active_tab_pane_cp2

0x011b,	// (0x0000b217) tabs_3_active_pane_g1

0x0123,	// (0x0000b21f) tabs_3_active_pane_t1

0x6275,	// (0x00011371) bg_passive_tab_pane_cp2_ParamLimits

0x6275,	// (0x00011371) bg_passive_tab_pane_cp2

0x011b,	// (0x0000b217) tabs_3_passive_pane_g1

0x0123,	// (0x0000b21f) tabs_3_passive_pane_t1

0x6275,	// (0x00011371) bg_active_tab_pane_cp3_ParamLimits

0x6275,	// (0x00011371) bg_active_tab_pane_cp3

0x0135,	// (0x0000b231) tabs_4_active_pane_g1

0x013d,	// (0x0000b239) tabs_4_active_pane_t1

0x6275,	// (0x00011371) bg_passive_tab_pane_cp3_ParamLimits

0x6275,	// (0x00011371) bg_passive_tab_pane_cp3

0x0135,	// (0x0000b231) tabs_4_1_passive_pane_g1

0x013d,	// (0x0000b239) tabs_4_1_passive_pane_t1

0x7f9b,	// (0x00013097) list_highlight_pane_cp2

0x1d8d,	// (0x0000ce89) list_set_pane_ParamLimits

0x1d8d,	// (0x0000ce89) list_set_pane

0x1e27,	// (0x0000cf23) main_pane_set_t1_ParamLimits

0x1e27,	// (0x0000cf23) main_pane_set_t1

0x1e47,	// (0x0000cf43) main_pane_set_t2_ParamLimits

0x1e47,	// (0x0000cf43) main_pane_set_t2

0x1e5b,	// (0x0000cf57) main_pane_set_t3_ParamLimits

0x1e5b,	// (0x0000cf57) main_pane_set_t3

0x1e6d,	// (0x0000cf69) main_pane_set_t4_ParamLimits

0x1e6d,	// (0x0000cf69) main_pane_set_t4

0x0003,

0xf9b5,	// (0x0001aab1) main_pane_set_t_ParamLimits

0xf9b5,	// (0x0001aab1) main_pane_set_t

0x1e7f,	// (0x0000cf7b) setting_code_pane

0x1e89,	// (0x0000cf85) setting_slider_graphic_pane

0x1e89,	// (0x0000cf85) setting_slider_pane

0x1e89,	// (0x0000cf85) setting_text_pane

0x1e89,	// (0x0000cf85) setting_volume_pane

0x46a4,	// (0x0000f7a0) volume_set_pane

0x5fe0,	// (0x000110dc) bg_set_opt_pane_cp

0x46ac,	// (0x0000f7a8) setting_slider_pane_t1

0x46c5,	// (0x0000f7c1) setting_slider_pane_t2

0x46df,	// (0x0000f7db) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0001a69e) setting_slider_pane_t

0x46f7,	// (0x0000f7f3) slider_set_pane

0x5f00,	// (0x00010ffc) bg_set_opt_pane_cp2

0x6022,	// (0x0001111e) setting_slider_graphic_pane_g1

0x470d,	// (0x0000f809) setting_slider_graphic_pane_t1

0x471d,	// (0x0000f819) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0001a6a5) setting_slider_graphic_pane_t

0x472d,	// (0x0000f829) slider_set_pane_cp

0x5f00,	// (0x00010ffc) input_focus_pane_cp1

0x9efc,	// (0x00014ff8) list_set_text_pane

0x5ef6,	// (0x00010ff2) setting_text_pane_g1

0x5f00,	// (0x00010ffc) input_focus_pane_cp2

0x5ef6,	// (0x00010ff2) setting_code_pane_g1

0x602b,	// (0x00011127) setting_code_pane_t1

0x6039,	// (0x00011135) set_text_pane_t1_ParamLimits

0x6039,	// (0x00011135) set_text_pane_t1

0x6eff,	// (0x00011ffb) set_opt_bg_pane_g1

0x6f07,	// (0x00012003) set_opt_bg_pane_g2

0x9ed6,	// (0x00014fd2) set_opt_bg_pane_g3

0x6f17,	// (0x00012013) set_opt_bg_pane_g4

0x6f1f,	// (0x0001201b) set_opt_bg_pane_g5

0x6f27,	// (0x00012023) set_opt_bg_pane_g6

0x9ee0,	// (0x00014fdc) set_opt_bg_pane_g7

0x9ee8,	// (0x00014fe4) set_opt_bg_pane_g8

0x9ef2,	// (0x00014fee) set_opt_bg_pane_g9

0x0008,

0xf9a2,	// (0x0001aa9e) set_opt_bg_pane_g

0x9ec9,	// (0x00014fc5) slider_set_pane_g1

0x5082,	// (0x0001017e) slider_set_pane_g2

0x0006,

0xf993,	// (0x0001aa8f) slider_set_pane_g

0x501e,	// (0x0001011a) volume_set_pane_g1

0x5026,	// (0x00010122) volume_set_pane_g2

0x502e,	// (0x0001012a) volume_set_pane_g3

0x5036,	// (0x00010132) volume_set_pane_g4

0x503e,	// (0x0001013a) volume_set_pane_g5

0x5046,	// (0x00010142) volume_set_pane_g6

0x504e,	// (0x0001014a) volume_set_pane_g7

0x5056,	// (0x00010152) volume_set_pane_g8

0x505e,	// (0x0001015a) volume_set_pane_g9

0x5066,	// (0x00010162) volume_set_pane_g10

0x0009,

0xf96b,	// (0x0001aa67) volume_set_pane_g

0x014f,	// (0x0000b24b) indicator_pane_ParamLimits

0x014f,	// (0x0000b24b) indicator_pane

0x0177,	// (0x0000b273) main_idle_pane_g2_ParamLimits

0x0177,	// (0x0000b273) main_idle_pane_g2

0x01af,	// (0x0000b2ab) main_pane_idle_g1_ParamLimits

0x01af,	// (0x0000b2ab) main_pane_idle_g1

0x6094,	// (0x00011190) popup_clock_digital_analogue_window_ParamLimits

0x6094,	// (0x00011190) popup_clock_digital_analogue_window

0x01d6,	// (0x0000b2d2) soft_indicator_pane_ParamLimits

0x01d6,	// (0x0000b2d2) soft_indicator_pane

0x01f0,	// (0x0000b2ec) wallpaper_pane_ParamLimits

0x01f0,	// (0x0000b2ec) wallpaper_pane

0x5ef6,	// (0x00010ff2) wallpaper_pane_g1

0x0202,	// (0x0000b2fe) indicator_pane_g1_ParamLimits

0x0202,	// (0x0000b2fe) indicator_pane_g1

0xa3a3,	// (0x0001549f) navi_navi_icon_text_pane_srt_g1

0x60e6,	// (0x000111e2) soft_indicator_pane_t1

0x6100,	// (0x000111fc) aid_ps_area_pane

0x0218,	// (0x0000b314) aid_ps_clock_pane

0x611f,	// (0x0001121b) aid_ps_indicator_pane

0x612b,	// (0x00011227) indicator_ps_pane_ParamLimits

0x612b,	// (0x00011227) indicator_ps_pane

0x613a,	// (0x00011236) power_save_pane_g1_ParamLimits

0x613a,	// (0x00011236) power_save_pane_g1

0x6146,	// (0x00011242) power_save_pane_g2_ParamLimits

0x6146,	// (0x00011242) power_save_pane_g2

0x42b5,	// (0x0000f3b1) aid_navinavi_width_pane

0x6100,	// (0x000111fc) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0001a6aa) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0001a6aa) power_save_pane_g

0x6154,	// (0x00011250) power_save_pane_t1_ParamLimits

0x6154,	// (0x00011250) power_save_pane_t1

0x0218,	// (0x0000b314) aid_ps_clock_pane_ParamLimits

0x611f,	// (0x0001121b) aid_ps_indicator_pane_ParamLimits

0x6166,	// (0x00011262) power_save_pane_t4_ParamLimits

0x6166,	// (0x00011262) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0001a6af) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0001a6af) power_save_pane_t

0x6190,	// (0x0001128c) power_save_t3_ParamLimits

0x6190,	// (0x0001128c) power_save_t3

0x617b,	// (0x00011277) power_save_t2_ParamLimits

0x617b,	// (0x00011277) power_save_t2

0x61a5,	// (0x000112a1) indicator_ps_pane_g1

0x0226,	// (0x0000b322) ai_gene_pane_ParamLimits

0x0226,	// (0x0000b322) ai_gene_pane

0x023d,	// (0x0000b339) ai_links_pane_ParamLimits

0x023d,	// (0x0000b339) ai_links_pane

0x0255,	// (0x0000b351) indicator_pane_cp1_ParamLimits

0x0255,	// (0x0000b351) indicator_pane_cp1

0x0264,	// (0x0000b360) main_pane_idle_g1_cp_ParamLimits

0x0264,	// (0x0000b360) main_pane_idle_g1_cp

0x61de,	// (0x000112da) popup_ai_links_title_window

0x027c,	// (0x0000b378) soft_indicator_pane_cp1_ParamLimits

0x027c,	// (0x0000b378) soft_indicator_pane_cp1

0x9c7a,	// (0x00014d76) ai_links_pane_g1

0x9c83,	// (0x00014d7f) grid_ai_links_pane

0x1cbf,	// (0x0000cdbb) ai_gene_pane_1

0x9c68,	// (0x00014d64) ai_gene_pane_2

0x9c71,	// (0x00014d6d) list_highlight_pane_cp4

0x1c9b,	// (0x0000cd97) cell_ai_link_pane_ParamLimits

0x1c9b,	// (0x0000cd97) cell_ai_link_pane

0x9c39,	// (0x00014d35) cell_ai_link_pane_g1

0x6417,	// (0x00011513) cell_ai_link_pane_g2

0x0001,

0xf946,	// (0x0001aa42) cell_ai_link_pane_g

0x5f00,	// (0x00010ffc) grid_highlight_cp2

0x5f00,	// (0x00010ffc) bg_popup_sub_pane_cp1

0x6201,	// (0x000112fd) popup_ai_links_title_window_t1

0x9b87,	// (0x00014c83) ai_gene_pane_1_g1_ParamLimits

0x9b87,	// (0x00014c83) ai_gene_pane_1_g1

0x9b93,	// (0x00014c8f) ai_gene_pane_1_g2_ParamLimits

0x9b93,	// (0x00014c8f) ai_gene_pane_1_g2

0x0001,

0xf93c,	// (0x0001aa38) ai_gene_pane_1_g_ParamLimits

0xf93c,	// (0x0001aa38) ai_gene_pane_1_g

0x9ba0,	// (0x00014c9c) ai_gene_pane_1_t1_ParamLimits

0x9ba0,	// (0x00014c9c) ai_gene_pane_1_t1

0x9bd4,	// (0x00014cd0) grid_ai_soft_ind_pane

0x9b72,	// (0x00014c6e) ai_gene_pane_2_t1_ParamLimits

0x9b72,	// (0x00014c6e) ai_gene_pane_2_t1

0x0290,	// (0x0000b38c) main_pane_empty_t1_ParamLimits

0x0290,	// (0x0000b38c) main_pane_empty_t1

0x02a8,	// (0x0000b3a4) main_pane_empty_t2_ParamLimits

0x02a8,	// (0x0000b3a4) main_pane_empty_t2

0x02bd,	// (0x0000b3b9) main_pane_empty_t3_ParamLimits

0x02bd,	// (0x0000b3b9) main_pane_empty_t3

0x02cf,	// (0x0000b3cb) main_pane_empty_t4_ParamLimits

0x02cf,	// (0x0000b3cb) main_pane_empty_t4

0x02e1,	// (0x0000b3dd) main_pane_empty_t5_ParamLimits

0x02e1,	// (0x0000b3dd) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0001a6b4) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0001a6b4) main_pane_empty_t

0x6ffc,	// (0x000120f8) bg_popup_window_pane_ParamLimits

0x6ffc,	// (0x000120f8) bg_popup_window_pane

0x98dc,	// (0x000149d8) find_popup_pane_cp2_ParamLimits

0x98dc,	// (0x000149d8) find_popup_pane_cp2

0x98e8,	// (0x000149e4) heading_pane_ParamLimits

0x98e8,	// (0x000149e4) heading_pane

0x5f00,	// (0x00010ffc) bg_popup_sub_pane

0x1bed,	// (0x0000cce9) bg_popup_window_pane_g1_ParamLimits

0x1bed,	// (0x0000cce9) bg_popup_window_pane_g1

0x1bfc,	// (0x0000ccf8) bg_popup_window_pane_g2_ParamLimits

0x1bfc,	// (0x0000ccf8) bg_popup_window_pane_g2

0x1c08,	// (0x0000cd04) bg_popup_window_pane_g3_ParamLimits

0x1c08,	// (0x0000cd04) bg_popup_window_pane_g3

0x1c14,	// (0x0000cd10) bg_popup_window_pane_g4_ParamLimits

0x1c14,	// (0x0000cd10) bg_popup_window_pane_g4

0x1c23,	// (0x0000cd1f) bg_popup_window_pane_g5_ParamLimits

0x1c23,	// (0x0000cd1f) bg_popup_window_pane_g5

0x1c33,	// (0x0000cd2f) bg_popup_window_pane_g6_ParamLimits

0x1c33,	// (0x0000cd2f) bg_popup_window_pane_g6

0x1c3f,	// (0x0000cd3b) bg_popup_window_pane_g7_ParamLimits

0x1c3f,	// (0x0000cd3b) bg_popup_window_pane_g7

0x1c4e,	// (0x0000cd4a) bg_popup_window_pane_g8_ParamLimits

0x1c4e,	// (0x0000cd4a) bg_popup_window_pane_g8

0x1c5d,	// (0x0000cd59) bg_popup_window_pane_g9_ParamLimits

0x1c5d,	// (0x0000cd59) bg_popup_window_pane_g9

0x98c2,	// (0x000149be) bg_popup_window_pane_g10_ParamLimits

0x98c2,	// (0x000149be) bg_popup_window_pane_g10

0x0009,

0xf904,	// (0x0001aa00) bg_popup_window_pane_g_ParamLimits

0xf904,	// (0x0001aa00) bg_popup_window_pane_g

0x97eb,	// (0x000148e7) bg_popup_heading_pane_ParamLimits

0x97eb,	// (0x000148e7) bg_popup_heading_pane

0x510a,	// (0x00010206) tabs_4_passive_pane_cp_srt_ParamLimits

0x510a,	// (0x00010206) tabs_4_passive_pane_cp_srt

0x511c,	// (0x00010218) tabs_4_passive_pane_srt_ParamLimits

0x97ff,	// (0x000148fb) heading_pane_g2

0x511c,	// (0x00010218) tabs_4_passive_pane_srt

0x8b8d,	// (0x00013c89) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8b8d,	// (0x00013c89) bg_passive_tab_pane_cp3_srt

0x9807,	// (0x00014903) heading_pane_t1_ParamLimits

0x9807,	// (0x00014903) heading_pane_t1

0x981e,	// (0x0001491a) heading_pane_t2_ParamLimits

0x981e,	// (0x0001491a) heading_pane_t2

0x0001,

0xf8ff,	// (0x0001a9fb) heading_pane_t_ParamLimits

0xf8ff,	// (0x0001a9fb) heading_pane_t

0x9318,	// (0x00014414) bg_popup_heading_pane_g1

0x93c7,	// (0x000144c3) bg_popup_heading_pane_g2

0x93d1,	// (0x000144cd) bg_popup_heading_pane_g3

0x93db,	// (0x000144d7) bg_popup_heading_pane_g4

0x93e5,	// (0x000144e1) bg_popup_heading_pane_g5

0x93ef,	// (0x000144eb) bg_popup_heading_pane_g6

0x93f7,	// (0x000144f3) bg_popup_heading_pane_g7

0x93ff,	// (0x000144fb) bg_popup_heading_pane_g8

0x9409,	// (0x00014505) bg_popup_heading_pane_g9

0x0008,

0xf8bb,	// (0x0001a9b7) bg_popup_heading_pane_g

0x8a73,	// (0x00013b6f) bg_popup_sub_pane_g1

0x8a83,	// (0x00013b7f) bg_popup_sub_pane_g2

0x8a7b,	// (0x00013b77) bg_popup_sub_pane_g3

0x8a93,	// (0x00013b8f) bg_popup_sub_pane_g4

0x8a8b,	// (0x00013b87) bg_popup_sub_pane_g5

0x8a9b,	// (0x00013b97) bg_popup_sub_pane_g6

0x8aa3,	// (0x00013b9f) bg_popup_sub_pane_g7

0x8ab3,	// (0x00013baf) bg_popup_sub_pane_g8

0x8aab,	// (0x00013ba7) bg_popup_sub_pane_g9

0x0008,

0xf895,	// (0x0001a991) bg_popup_sub_pane_g

0x6275,	// (0x00011371) bg_popup_window_pane_cp5_ParamLimits

0x6275,	// (0x00011371) bg_popup_window_pane_cp5

0x6291,	// (0x0001138d) popup_note_window_g1_ParamLimits

0x6291,	// (0x0001138d) popup_note_window_g1

0x629d,	// (0x00011399) popup_note_window_t1_ParamLimits

0x629d,	// (0x00011399) popup_note_window_t1

0x62b3,	// (0x000113af) popup_note_window_t2_ParamLimits

0x62b3,	// (0x000113af) popup_note_window_t2

0x62c9,	// (0x000113c5) popup_note_window_t3_ParamLimits

0x62c9,	// (0x000113c5) popup_note_window_t3

0x62df,	// (0x000113db) popup_note_window_t4_ParamLimits

0x62df,	// (0x000113db) popup_note_window_t4

0x6307,	// (0x00011403) popup_note_window_t5_ParamLimits

0x6307,	// (0x00011403) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0001a6bf) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0001a6bf) popup_note_window_t

0x632b,	// (0x00011427) bg_popup_window_pane_cp6_ParamLimits

0x632b,	// (0x00011427) bg_popup_window_pane_cp6

0x9294,	// (0x00014390) popup_note_image_window_g1_ParamLimits

0x9294,	// (0x00014390) popup_note_image_window_g1

0x92a0,	// (0x0001439c) popup_note_image_window_g2_ParamLimits

0x92a0,	// (0x0001439c) popup_note_image_window_g2

0x0001,

0xf889,	// (0x0001a985) popup_note_image_window_g_ParamLimits

0xf889,	// (0x0001a985) popup_note_image_window_g

0x92b9,	// (0x000143b5) popup_note_image_window_t1_ParamLimits

0x92b9,	// (0x000143b5) popup_note_image_window_t1

0x92d2,	// (0x000143ce) popup_note_image_window_t2_ParamLimits

0x92d2,	// (0x000143ce) popup_note_image_window_t2

0x92eb,	// (0x000143e7) popup_note_image_window_t3_ParamLimits

0x92eb,	// (0x000143e7) popup_note_image_window_t3

0x0002,

0xf88e,	// (0x0001a98a) popup_note_image_window_t_ParamLimits

0xf88e,	// (0x0001a98a) popup_note_image_window_t

0x9155,	// (0x00014251) bg_popup_window_pane_cp7_ParamLimits

0x9155,	// (0x00014251) bg_popup_window_pane_cp7

0x9185,	// (0x00014281) popup_note_wait_window_g1_ParamLimits

0x9185,	// (0x00014281) popup_note_wait_window_g1

0x9191,	// (0x0001428d) popup_note_wait_window_g2_ParamLimits

0x9191,	// (0x0001428d) popup_note_wait_window_g2

0x0002,

0xf877,	// (0x0001a973) popup_note_wait_window_g_ParamLimits

0xf877,	// (0x0001a973) popup_note_wait_window_g

0x91a9,	// (0x000142a5) popup_note_wait_window_t1_ParamLimits

0x91a9,	// (0x000142a5) popup_note_wait_window_t1

0x91d0,	// (0x000142cc) popup_note_wait_window_t2_ParamLimits

0x91d0,	// (0x000142cc) popup_note_wait_window_t2

0x91ed,	// (0x000142e9) popup_note_wait_window_t3_ParamLimits

0x91ed,	// (0x000142e9) popup_note_wait_window_t3

0x9200,	// (0x000142fc) popup_note_wait_window_t4_ParamLimits

0x9200,	// (0x000142fc) popup_note_wait_window_t4

0x0004,

0xf87e,	// (0x0001a97a) popup_note_wait_window_t_ParamLimits

0xf87e,	// (0x0001a97a) popup_note_wait_window_t

0x9225,	// (0x00014321) wait_bar_pane_ParamLimits

0x9225,	// (0x00014321) wait_bar_pane

0x5f00,	// (0x00010ffc) wait_anim_pane

0x5f00,	// (0x00010ffc) wait_border_pane

0x5ef6,	// (0x00010ff2) wait_anim_pane_g1

0x5ef6,	// (0x00010ff2) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0001a83e) wait_anim_pane_g

0x90f9,	// (0x000141f5) wait_border_pane_g1

0x9104,	// (0x00014200) wait_border_pane_g2

0x910d,	// (0x00014209) wait_border_pane_g3

0x0002,

0xf870,	// (0x0001a96c) wait_border_pane_g

0x9056,	// (0x00014152) bg_popup_window_pane_cp16_ParamLimits

0x9056,	// (0x00014152) bg_popup_window_pane_cp16

0x9064,	// (0x00014160) indicator_popup_pane_cp4_ParamLimits

0x9064,	// (0x00014160) indicator_popup_pane_cp4

0x9078,	// (0x00014174) popup_query_data_window_t1_ParamLimits

0x9078,	// (0x00014174) popup_query_data_window_t1

0x908a,	// (0x00014186) popup_query_data_window_t2_ParamLimits

0x908a,	// (0x00014186) popup_query_data_window_t2

0x90a3,	// (0x0001419f) popup_query_data_window_t3_ParamLimits

0x90a3,	// (0x0001419f) popup_query_data_window_t3

0x0002,

0xf869,	// (0x0001a965) popup_query_data_window_t_ParamLimits

0xf869,	// (0x0001a965) popup_query_data_window_t

0x90bd,	// (0x000141b9) query_popup_data_pane_ParamLimits

0x90bd,	// (0x000141b9) query_popup_data_pane

0x90d1,	// (0x000141cd) query_popup_data_pane_cp1_ParamLimits

0x90d1,	// (0x000141cd) query_popup_data_pane_cp1

0x632b,	// (0x00011427) bg_popup_window_pane_cp10_ParamLimits

0x632b,	// (0x00011427) bg_popup_window_pane_cp10

0x8fb9,	// (0x000140b5) indicator_popup_pane_ParamLimits

0x8fb9,	// (0x000140b5) indicator_popup_pane

0x6382,	// (0x0001147e) popup_query_code_window_t1_ParamLimits

0x6382,	// (0x0001147e) popup_query_code_window_t1

0x8fd1,	// (0x000140cd) popup_query_code_window_t2_ParamLimits

0x8fd1,	// (0x000140cd) popup_query_code_window_t2

0x900f,	// (0x0001410b) popup_query_code_window_t3_ParamLimits

0x900f,	// (0x0001410b) popup_query_code_window_t3

0x0002,

0xf862,	// (0x0001a95e) popup_query_code_window_t_ParamLimits

0xf862,	// (0x0001a95e) popup_query_code_window_t

0x903e,	// (0x0001413a) query_popup_pane_ParamLimits

0x903e,	// (0x0001413a) query_popup_pane

0x632b,	// (0x00011427) bg_popup_window_pane_cp15_ParamLimits

0x632b,	// (0x00011427) bg_popup_window_pane_cp15

0x6349,	// (0x00011445) indicator_popup_pane_cp1_ParamLimits

0x6349,	// (0x00011445) indicator_popup_pane_cp1

0x635c,	// (0x00011458) indicator_popup_pane_cp2_ParamLimits

0x635c,	// (0x00011458) indicator_popup_pane_cp2

0x636f,	// (0x0001146b) popup_query_data_code_window_g1_ParamLimits

0x636f,	// (0x0001146b) popup_query_data_code_window_g1

0x6382,	// (0x0001147e) popup_query_data_code_window_t1_ParamLimits

0x6382,	// (0x0001147e) popup_query_data_code_window_t1

0x6394,	// (0x00011490) popup_query_data_code_window_t2_ParamLimits

0x6394,	// (0x00011490) popup_query_data_code_window_t2

0x63a6,	// (0x000114a2) popup_query_data_code_window_t3_ParamLimits

0x63a6,	// (0x000114a2) popup_query_data_code_window_t3

0x63bc,	// (0x000114b8) popup_query_data_code_window_t4_ParamLimits

0x63bc,	// (0x000114b8) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0001a6ca) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0001a6ca) popup_query_data_code_window_t

0x4dcb,	// (0x0000fec7) list_single_midp_graphic_pane_g3

0x63d4,	// (0x000114d0) query_popup_data_pane_cp2_ParamLimits

0x63e7,	// (0x000114e3) query_popup_pane_cp2_ParamLimits

0x63e7,	// (0x000114e3) query_popup_pane_cp2

0x5f00,	// (0x00010ffc) bg_popup_window_pane_cp11

0x8f8d,	// (0x00014089) heading_pane_cp5

0x64cf,	// (0x000115cb) listscroll_popup_info_pane

0x5f00,	// (0x00010ffc) input_focus_pane_cp3

0x63fa,	// (0x000114f6) query_popup_pane_t1

0x6408,	// (0x00011504) list_popup_info_pane_ParamLimits

0x6408,	// (0x00011504) list_popup_info_pane

0x6417,	// (0x00011513) listscroll_popup_info_pane_g1

0x641f,	// (0x0001151b) scroll_pane_cp7

0x6429,	// (0x00011525) popup_info_list_pane_t1_ParamLimits

0x6429,	// (0x00011525) popup_info_list_pane_t1

0x6443,	// (0x0001153f) popup_info_list_pane_t2_ParamLimits

0x6443,	// (0x0001153f) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0001a6d3) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0001a6d3) popup_info_list_pane_t

0x5f00,	// (0x00010ffc) bg_popup_window_pane_cp12

0xa3bd,	// (0x000154b9) find_popup_pane

0x5fe0,	// (0x000110dc) bg_popup_window_pane_cp3

0x645d,	// (0x00011559) heading_pane_cp3

0x6469,	// (0x00011565) listscroll_popup_graphic_pane

0x5f00,	// (0x00010ffc) bg_popup_window_pane_cp4

0x0343,	// (0x0000b43f) heading_pane_cp4

0x64cf,	// (0x000115cb) listscroll_popup_colour_pane

0x034b,	// (0x0000b447) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x034b,	// (0x0000b447) cell_large_graphic_colour_none_popup_pane

0x035f,	// (0x0000b45b) grid_large_graphic_colour_popup_pane_ParamLimits

0x035f,	// (0x0000b45b) grid_large_graphic_colour_popup_pane

0x0383,	// (0x0000b47f) listscroll_popup_colour_pane_g1_ParamLimits

0x0383,	// (0x0000b47f) listscroll_popup_colour_pane_g1

0x039a,	// (0x0000b496) listscroll_popup_colour_pane_g2_ParamLimits

0x039a,	// (0x0000b496) listscroll_popup_colour_pane_g2

0x03b1,	// (0x0000b4ad) listscroll_popup_colour_pane_g3_ParamLimits

0x03b1,	// (0x0000b4ad) listscroll_popup_colour_pane_g3

0x03c1,	// (0x0000b4bd) listscroll_popup_colour_pane_g4_ParamLimits

0x03c1,	// (0x0000b4bd) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0001a6d8) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0001a6d8) listscroll_popup_colour_pane_g

0x6569,	// (0x00011665) scroll_pane_cp6_ParamLimits

0x6569,	// (0x00011665) scroll_pane_cp6

0x03d1,	// (0x0000b4cd) cell_large_graphic_colour_popup_pane_ParamLimits

0x03d1,	// (0x0000b4cd) cell_large_graphic_colour_popup_pane

0x659a,	// (0x00011696) cell_large_graphic_colour_none_popup_pane_t1

0x5f00,	// (0x00010ffc) grid_highlight_pane_cp5

0x65a9,	// (0x000116a5) cell_large_graphic_colour_popup_pane_g1

0x65b1,	// (0x000116ad) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0001a6e1) cell_large_graphic_colour_popup_pane_g

0x65b9,	// (0x000116b5) cell_large_graphic_colour_popup_pane_g2_copy1

0x65c2,	// (0x000116be) grid_highlight_pane_cp4

0x65ca,	// (0x000116c6) bg_popup_window_pane_cp8_ParamLimits

0x65ca,	// (0x000116c6) bg_popup_window_pane_cp8

0x65e5,	// (0x000116e1) popup_snote_single_text_window_g1_ParamLimits

0x65e5,	// (0x000116e1) popup_snote_single_text_window_g1

0x65f7,	// (0x000116f3) popup_snote_single_text_window_t1_ParamLimits

0x65f7,	// (0x000116f3) popup_snote_single_text_window_t1

0x660a,	// (0x00011706) popup_snote_single_text_window_t2_ParamLimits

0x660a,	// (0x00011706) popup_snote_single_text_window_t2

0x661d,	// (0x00011719) popup_snote_single_text_window_t3_ParamLimits

0x661d,	// (0x00011719) popup_snote_single_text_window_t3

0x6656,	// (0x00011752) popup_snote_single_text_window_t4_ParamLimits

0x6656,	// (0x00011752) popup_snote_single_text_window_t4

0x668a,	// (0x00011786) popup_snote_single_text_window_t5_ParamLimits

0x668a,	// (0x00011786) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0001a6e6) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0001a6e6) popup_snote_single_text_window_t

0x66b9,	// (0x000117b5) bg_popup_window_pane_cp9_ParamLimits

0x66b9,	// (0x000117b5) bg_popup_window_pane_cp9

0x65e5,	// (0x000116e1) popup_snote_single_graphic_window_g1_ParamLimits

0x65e5,	// (0x000116e1) popup_snote_single_graphic_window_g1

0x66c7,	// (0x000117c3) popup_snote_single_graphic_window_g2_ParamLimits

0x66c7,	// (0x000117c3) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0001a6f1) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0001a6f1) popup_snote_single_graphic_window_g

0x66d3,	// (0x000117cf) popup_snote_single_graphic_window_t1_ParamLimits

0x66d3,	// (0x000117cf) popup_snote_single_graphic_window_t1

0x66e6,	// (0x000117e2) popup_snote_single_graphic_window_t2_ParamLimits

0x66e6,	// (0x000117e2) popup_snote_single_graphic_window_t2

0x66f9,	// (0x000117f5) popup_snote_single_graphic_window_t3_ParamLimits

0x66f9,	// (0x000117f5) popup_snote_single_graphic_window_t3

0x6732,	// (0x0001182e) popup_snote_single_graphic_window_t4_ParamLimits

0x6732,	// (0x0001182e) popup_snote_single_graphic_window_t4

0x6766,	// (0x00011862) popup_snote_single_graphic_window_t5_ParamLimits

0x6766,	// (0x00011862) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0001a6f6) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0001a6f6) popup_snote_single_graphic_window_t

0xa301,	// (0x000153fd) grid_graphic_popup_pane_ParamLimits

0xa301,	// (0x000153fd) grid_graphic_popup_pane

0xa329,	// (0x00015425) listscroll_popup_graphic_pane_g1_ParamLimits

0xa329,	// (0x00015425) listscroll_popup_graphic_pane_g1

0x1fc2,	// (0x0000d0be) listscroll_popup_graphic_pane_g2_ParamLimits

0x1fc2,	// (0x0000d0be) listscroll_popup_graphic_pane_g2

0x0001,

0xf9df,	// (0x0001aadb) listscroll_popup_graphic_pane_g_ParamLimits

0xf9df,	// (0x0001aadb) listscroll_popup_graphic_pane_g

0xa351,	// (0x0001544d) scroll_pane_cp5

0x1f86,	// (0x0000d082) cell_graphic_popup_pane_ParamLimits

0x1f86,	// (0x0000d082) cell_graphic_popup_pane

0xa28b,	// (0x00015387) cell_graphic_popup_pane_g1

0xa293,	// (0x0001538f) cell_graphic_popup_pane_g2

0x65b9,	// (0x000116b5) cell_graphic_popup_pane_g3

0x0002,

0xf9d8,	// (0x0001aad4) cell_graphic_popup_pane_g

0xa29c,	// (0x00015398) cell_graphic_popup_pane_t2

0x65c2,	// (0x000116be) grid_highlight_pane_cp3

0x67a7,	// (0x000118a3) list_gen_pane_ParamLimits

0x67a7,	// (0x000118a3) list_gen_pane

0x67d9,	// (0x000118d5) scroll_pane

0x1f41,	// (0x0000d03d) bg_list_pane_g1_ParamLimits

0x1f41,	// (0x0000d03d) bg_list_pane_g1

0xa208,	// (0x00015304) bg_list_pane_g2_ParamLimits

0xa208,	// (0x00015304) bg_list_pane_g2

0xa21b,	// (0x00015317) bg_list_pane_g3_ParamLimits

0xa21b,	// (0x00015317) bg_list_pane_g3

0xa22d,	// (0x00015329) bg_list_pane_g4_ParamLimits

0xa22d,	// (0x00015329) bg_list_pane_g4

0x1f5c,	// (0x0000d058) bg_list_pane_g5_ParamLimits

0x1f5c,	// (0x0000d058) bg_list_pane_g5

0x0004,

0xf9cd,	// (0x0001aac9) bg_list_pane_g_ParamLimits

0xf9cd,	// (0x0001aac9) bg_list_pane_g

0x1ee7,	// (0x0000cfe3) list_double2_graphic_large_graphic_pane_ParamLimits

0x1ee7,	// (0x0000cfe3) list_double2_graphic_large_graphic_pane

0x1ee7,	// (0x0000cfe3) list_double2_graphic_pane_ParamLimits

0x1ee7,	// (0x0000cfe3) list_double2_graphic_pane

0x1ee7,	// (0x0000cfe3) list_double2_large_graphic_pane_ParamLimits

0x1ee7,	// (0x0000cfe3) list_double2_large_graphic_pane

0x1ee7,	// (0x0000cfe3) list_double2_pane_ParamLimits

0x1ee7,	// (0x0000cfe3) list_double2_pane

0x1ee7,	// (0x0000cfe3) list_double_graphic_heading_pane_ParamLimits

0x1ee7,	// (0x0000cfe3) list_double_graphic_heading_pane

0x1ee7,	// (0x0000cfe3) list_double_graphic_pane_ParamLimits

0x1ee7,	// (0x0000cfe3) list_double_graphic_pane

0x1ee7,	// (0x0000cfe3) list_double_heading_pane_ParamLimits

0x1ee7,	// (0x0000cfe3) list_double_heading_pane

0x1ee7,	// (0x0000cfe3) list_double_large_graphic_pane_ParamLimits

0x1ee7,	// (0x0000cfe3) list_double_large_graphic_pane

0x1ee7,	// (0x0000cfe3) list_double_number_pane_ParamLimits

0x1ee7,	// (0x0000cfe3) list_double_number_pane

0x1ee7,	// (0x0000cfe3) list_double_pane_ParamLimits

0x1ee7,	// (0x0000cfe3) list_double_pane

0x1ee7,	// (0x0000cfe3) list_double_time_pane_ParamLimits

0x1ee7,	// (0x0000cfe3) list_double_time_pane

0x1ee7,	// (0x0000cfe3) list_setting_number_pane_ParamLimits

0x1ee7,	// (0x0000cfe3) list_setting_number_pane

0x1ee7,	// (0x0000cfe3) list_setting_pane_ParamLimits

0x1ee7,	// (0x0000cfe3) list_setting_pane

0x1ef9,	// (0x0000cff5) list_single_2graphic_pane_ParamLimits

0x1ef9,	// (0x0000cff5) list_single_2graphic_pane

0x1ef9,	// (0x0000cff5) list_single_graphic_heading_pane_ParamLimits

0x1ef9,	// (0x0000cff5) list_single_graphic_heading_pane

0x1ef9,	// (0x0000cff5) list_single_graphic_pane_ParamLimits

0x1ef9,	// (0x0000cff5) list_single_graphic_pane

0x1ef9,	// (0x0000cff5) list_single_heading_pane_ParamLimits

0x1ef9,	// (0x0000cff5) list_single_heading_pane

0x1ee7,	// (0x0000cfe3) list_single_large_graphic_pane_ParamLimits

0x1ee7,	// (0x0000cfe3) list_single_large_graphic_pane

0x1ef9,	// (0x0000cff5) list_single_number_heading_pane_ParamLimits

0x1ef9,	// (0x0000cff5) list_single_number_heading_pane

0x1ef9,	// (0x0000cff5) list_single_number_pane_ParamLimits

0x1ef9,	// (0x0000cff5) list_single_number_pane

0x1ef9,	// (0x0000cff5) list_single_pane_ParamLimits

0x1ef9,	// (0x0000cff5) list_single_pane

0x5f00,	// (0x00010ffc) list_highlight_pane_cp1

0x89e9,	// (0x00013ae5) list_single_pane_g1_ParamLimits

0x89e9,	// (0x00013ae5) list_single_pane_g1

0x89f5,	// (0x00013af1) list_single_pane_g2_ParamLimits

0x89f5,	// (0x00013af1) list_single_pane_g2

0x0001,

0xf60c,	// (0x0001a708) list_single_pane_g_ParamLimits

0xf60c,	// (0x0001a708) list_single_pane_g

0xa975,	// (0x00015a71) list_single_pane_t1_ParamLimits

0xa975,	// (0x00015a71) list_single_pane_t1

0x89e9,	// (0x00013ae5) list_single_number_pane_g1_ParamLimits

0x89e9,	// (0x00013ae5) list_single_number_pane_g1

0x89f5,	// (0x00013af1) list_single_number_pane_g2_ParamLimits

0x89f5,	// (0x00013af1) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0001a708) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0001a708) list_single_number_pane_g

0x8a01,	// (0x00013afd) list_single_number_pane_t1_ParamLimits

0x8a01,	// (0x00013afd) list_single_number_pane_t1

0x1d29,	// (0x0000ce25) list_single_number_pane_t2_ParamLimits

0x1d29,	// (0x0000ce25) list_single_number_pane_t2

0x0001,

0xf98e,	// (0x0001aa8a) list_single_number_pane_t_ParamLimits

0xf98e,	// (0x0001aa8a) list_single_number_pane_t

0xbdbd,	// (0x00016eb9) list_single_graphic_pane_g1_ParamLimits

0xbdbd,	// (0x00016eb9) list_single_graphic_pane_g1

0x89e9,	// (0x00013ae5) list_single_graphic_pane_g2_ParamLimits

0x89e9,	// (0x00013ae5) list_single_graphic_pane_g2

0x89f5,	// (0x00013af1) list_single_graphic_pane_g3_ParamLimits

0x89f5,	// (0x00013af1) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0001a701) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0001a701) list_single_graphic_pane_g

0x03fa,	// (0x0000b4f6) list_single_graphic_pane_t1_ParamLimits

0x03fa,	// (0x0000b4f6) list_single_graphic_pane_t1

0x89e9,	// (0x00013ae5) list_single_heading_pane_g1_ParamLimits

0x89e9,	// (0x00013ae5) list_single_heading_pane_g1

0x89f5,	// (0x00013af1) list_single_heading_pane_g2_ParamLimits

0x89f5,	// (0x00013af1) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0001a708) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0001a708) list_single_heading_pane_g

0x0410,	// (0x0000b50c) list_single_heading_pane_t1_ParamLimits

0x0410,	// (0x0000b50c) list_single_heading_pane_t1

0x0426,	// (0x0000b522) list_single_heading_pane_t2_ParamLimits

0x0426,	// (0x0000b522) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0001a70d) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0001a70d) list_single_heading_pane_t

0x89e9,	// (0x00013ae5) list_single_number_heading_pane_g1_ParamLimits

0x89e9,	// (0x00013ae5) list_single_number_heading_pane_g1

0x89f5,	// (0x00013af1) list_single_number_heading_pane_g2_ParamLimits

0x89f5,	// (0x00013af1) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0001a708) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0001a708) list_single_number_heading_pane_g

0x0410,	// (0x0000b50c) list_single_number_heading_pane_t1_ParamLimits

0x0410,	// (0x0000b50c) list_single_number_heading_pane_t1

0x0438,	// (0x0000b534) list_single_number_heading_pane_t2_ParamLimits

0x0438,	// (0x0000b534) list_single_number_heading_pane_t2

0xa94f,	// (0x00015a4b) list_single_number_heading_pane_t3_ParamLimits

0xa94f,	// (0x00015a4b) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0001a712) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0001a712) list_single_number_heading_pane_t

0x89dd,	// (0x00013ad9) list_single_graphic_heading_pane_g1_ParamLimits

0x89dd,	// (0x00013ad9) list_single_graphic_heading_pane_g1

0x044a,	// (0x0000b546) list_single_graphic_heading_pane_g4_ParamLimits

0x044a,	// (0x0000b546) list_single_graphic_heading_pane_g4

0x89f5,	// (0x00013af1) list_single_graphic_heading_pane_g5_ParamLimits

0x89f5,	// (0x00013af1) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0001a719) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001a719) list_single_graphic_heading_pane_g

0x0410,	// (0x0000b50c) list_single_graphic_heading_pane_t1_ParamLimits

0x0410,	// (0x0000b50c) list_single_graphic_heading_pane_t1

0x045b,	// (0x0000b557) list_single_graphic_heading_pane_t2_ParamLimits

0x045b,	// (0x0000b557) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0001a720) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0001a720) list_single_graphic_heading_pane_t

0xa98b,	// (0x00015a87) list_single_large_graphic_pane_g1_ParamLimits

0xa98b,	// (0x00015a87) list_single_large_graphic_pane_g1

0xa997,	// (0x00015a93) list_single_large_graphic_pane_g2_ParamLimits

0xa997,	// (0x00015a93) list_single_large_graphic_pane_g2

0xa9a3,	// (0x00015a9f) list_single_large_graphic_pane_g3_ParamLimits

0xa9a3,	// (0x00015a9f) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0001a725) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0001a725) list_single_large_graphic_pane_g

0x9104,	// (0x00014200) wait_border_pane_g2_copy1

0x046d,	// (0x0000b569) list_single_large_graphic_pane_g4_cp2

0xa9af,	// (0x00015aab) list_single_large_graphic_pane_t1_ParamLimits

0xa9af,	// (0x00015aab) list_single_large_graphic_pane_t1

0x7a35,	// (0x00012b31) list_double_pane_g1_ParamLimits

0x7a35,	// (0x00012b31) list_double_pane_g1

0x0475,	// (0x0000b571) list_double_pane_g2_ParamLimits

0x0475,	// (0x0000b571) list_double_pane_g2

0x0001,

0xf630,	// (0x0001a72c) list_double_pane_g_ParamLimits

0xf630,	// (0x0001a72c) list_double_pane_g

0x0481,	// (0x0000b57d) list_double_pane_t1_ParamLimits

0x0481,	// (0x0000b57d) list_double_pane_t1

0x0497,	// (0x0000b593) list_double_pane_t2_ParamLimits

0x0497,	// (0x0000b593) list_double_pane_t2

0x0001,

0xf635,	// (0x0001a731) list_double_pane_t_ParamLimits

0xf635,	// (0x0001a731) list_double_pane_t

0x04a9,	// (0x0000b5a5) list_double2_pane_g1_ParamLimits

0x04a9,	// (0x0000b5a5) list_double2_pane_g1

0x6b2e,	// (0x00011c2a) list_double2_pane_g2_ParamLimits

0x6b2e,	// (0x00011c2a) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0001a736) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0001a736) list_double2_pane_g

0x04ba,	// (0x0000b5b6) list_double2_pane_t1_ParamLimits

0x04ba,	// (0x0000b5b6) list_double2_pane_t1

0x04d0,	// (0x0000b5cc) list_double2_pane_t2_ParamLimits

0x04d0,	// (0x0000b5cc) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0001a73b) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0001a73b) list_double2_pane_t

0x7a35,	// (0x00012b31) list_double_number_pane_g1_ParamLimits

0x7a35,	// (0x00012b31) list_double_number_pane_g1

0x0475,	// (0x0000b571) list_double_number_pane_g2_ParamLimits

0x0475,	// (0x0000b571) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0001a72c) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0001a72c) list_double_number_pane_g

0x04e2,	// (0x0000b5de) list_double_number_pane_t1_ParamLimits

0x04e2,	// (0x0000b5de) list_double_number_pane_t1

0x04f4,	// (0x0000b5f0) list_double_number_pane_t2_ParamLimits

0x04f4,	// (0x0000b5f0) list_double_number_pane_t2

0x050a,	// (0x0000b606) list_double_number_pane_t3_ParamLimits

0x050a,	// (0x0000b606) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0001a740) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0001a740) list_double_number_pane_t

0x051c,	// (0x0000b618) list_double_graphic_pane_g1_ParamLimits

0x051c,	// (0x0000b618) list_double_graphic_pane_g1

0x0528,	// (0x0000b624) list_double_graphic_pane_g2_ParamLimits

0x0528,	// (0x0000b624) list_double_graphic_pane_g2

0x0537,	// (0x0000b633) list_double_graphic_pane_g3_ParamLimits

0x0537,	// (0x0000b633) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0001a747) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0001a747) list_double_graphic_pane_g

0x054f,	// (0x0000b64b) list_double_graphic_pane_t1_ParamLimits

0x054f,	// (0x0000b64b) list_double_graphic_pane_t1

0x0565,	// (0x0000b661) list_double_graphic_pane_t2_ParamLimits

0x0565,	// (0x0000b661) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0001a750) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0001a750) list_double_graphic_pane_t

0x0577,	// (0x0000b673) list_double2_graphic_pane_g1_ParamLimits

0x0577,	// (0x0000b673) list_double2_graphic_pane_g1

0x0583,	// (0x0000b67f) list_double2_graphic_pane_g2_ParamLimits

0x0583,	// (0x0000b67f) list_double2_graphic_pane_g2

0x6b2e,	// (0x00011c2a) list_double2_graphic_pane_g3_ParamLimits

0x6b2e,	// (0x00011c2a) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0001a755) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0001a755) list_double2_graphic_pane_g

0x058f,	// (0x0000b68b) list_double2_graphic_pane_t1_ParamLimits

0x058f,	// (0x0000b68b) list_double2_graphic_pane_t1

0x05a5,	// (0x0000b6a1) list_double2_graphic_pane_t2_ParamLimits

0x05a5,	// (0x0000b6a1) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0001a75c) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0001a75c) list_double2_graphic_pane_t

0x05b7,	// (0x0000b6b3) list_double_large_graphic_pane_g1_ParamLimits

0x05b7,	// (0x0000b6b3) list_double_large_graphic_pane_g1

0x05e2,	// (0x0000b6de) list_double_large_graphic_pane_g2_ParamLimits

0x05e2,	// (0x0000b6de) list_double_large_graphic_pane_g2

0x0475,	// (0x0000b571) list_double_large_graphic_pane_g3_ParamLimits

0x0475,	// (0x0000b571) list_double_large_graphic_pane_g3

0x05f3,	// (0x0000b6ef) list_double_large_graphic_pane_g4_ParamLimits

0x05f3,	// (0x0000b6ef) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0001a761) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0001a761) list_double_large_graphic_pane_g

0x0605,	// (0x0000b701) list_double_large_graphic_pane_t1_ParamLimits

0x0605,	// (0x0000b701) list_double_large_graphic_pane_t1

0x061e,	// (0x0000b71a) list_double_large_graphic_pane_t2_ParamLimits

0x061e,	// (0x0000b71a) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0001a76c) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0001a76c) list_double_large_graphic_pane_t

0x0630,	// (0x0000b72c) list_double2_large_graphic_pane_g1_ParamLimits

0x0630,	// (0x0000b72c) list_double2_large_graphic_pane_g1

0x04a9,	// (0x0000b5a5) list_double2_large_graphic_pane_g2_ParamLimits

0x04a9,	// (0x0000b5a5) list_double2_large_graphic_pane_g2

0x6b2e,	// (0x00011c2a) list_double2_large_graphic_pane_g3_ParamLimits

0x6b2e,	// (0x00011c2a) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0001a771) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0001a771) list_double2_large_graphic_pane_g

0x063c,	// (0x0000b738) list_double2_large_graphic_pane_t1_ParamLimits

0x063c,	// (0x0000b738) list_double2_large_graphic_pane_t1

0x0652,	// (0x0000b74e) list_double2_large_graphic_pane_t2_ParamLimits

0x0652,	// (0x0000b74e) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0001a778) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0001a778) list_double2_large_graphic_pane_t

0x0664,	// (0x0000b760) list_double_heading_pane_g1_ParamLimits

0x0664,	// (0x0000b760) list_double_heading_pane_g1

0x0675,	// (0x0000b771) list_double_heading_pane_g2_ParamLimits

0x0675,	// (0x0000b771) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0001a77d) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0001a77d) list_double_heading_pane_g

0x0681,	// (0x0000b77d) list_double_heading_pane_t1_ParamLimits

0x0681,	// (0x0000b77d) list_double_heading_pane_t1

0x0697,	// (0x0000b793) list_double_heading_pane_t2_ParamLimits

0x0697,	// (0x0000b793) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0001a782) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0001a782) list_double_heading_pane_t

0x69c3,	// (0x00011abf) list_double_graphic_heading_pane_g1_ParamLimits

0x69c3,	// (0x00011abf) list_double_graphic_heading_pane_g1

0x0664,	// (0x0000b760) list_double_graphic_heading_pane_g2_ParamLimits

0x0664,	// (0x0000b760) list_double_graphic_heading_pane_g2

0x0675,	// (0x0000b771) list_double_graphic_heading_pane_g3_ParamLimits

0x0675,	// (0x0000b771) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0001a787) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0001a787) list_double_graphic_heading_pane_g

0x06a9,	// (0x0000b7a5) list_double_graphic_heading_pane_t1_ParamLimits

0x06a9,	// (0x0000b7a5) list_double_graphic_heading_pane_t1

0x06bf,	// (0x0000b7bb) list_double_graphic_heading_pane_t2_ParamLimits

0x06bf,	// (0x0000b7bb) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0001a78e) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0001a78e) list_double_graphic_heading_pane_t

0x05e2,	// (0x0000b6de) list_double_time_pane_g1_ParamLimits

0x05e2,	// (0x0000b6de) list_double_time_pane_g1

0x0475,	// (0x0000b571) list_double_time_pane_g2_ParamLimits

0x0475,	// (0x0000b571) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0001a793) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0001a793) list_double_time_pane_g

0x06d1,	// (0x0000b7cd) list_double_time_pane_t1_ParamLimits

0x06d1,	// (0x0000b7cd) list_double_time_pane_t1

0x06e7,	// (0x0000b7e3) list_double_time_pane_t2_ParamLimits

0x06e7,	// (0x0000b7e3) list_double_time_pane_t2

0x06f9,	// (0x0000b7f5) list_double_time_pane_t3_ParamLimits

0x06f9,	// (0x0000b7f5) list_double_time_pane_t3

0x070b,	// (0x0000b807) list_double_time_pane_t4_ParamLimits

0x070b,	// (0x0000b807) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0001a798) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0001a798) list_double_time_pane_t

0x0583,	// (0x0000b67f) list_setting_pane_g1_ParamLimits

0x0583,	// (0x0000b67f) list_setting_pane_g1

0x6b2e,	// (0x00011c2a) list_setting_pane_g2_ParamLimits

0x6b2e,	// (0x00011c2a) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0001a7a1) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0001a7a1) list_setting_pane_g

0x071d,	// (0x0000b819) list_setting_pane_t1_ParamLimits

0x071d,	// (0x0000b819) list_setting_pane_t1

0x0734,	// (0x0000b830) list_setting_pane_t2_ParamLimits

0x0734,	// (0x0000b830) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0001a7a6) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0001a7a6) list_setting_pane_t

0x0773,	// (0x0000b86f) set_value_pane_cp_ParamLimits

0x0773,	// (0x0000b86f) set_value_pane_cp

0x0583,	// (0x0000b67f) list_setting_number_pane_g1_ParamLimits

0x0583,	// (0x0000b67f) list_setting_number_pane_g1

0x6b2e,	// (0x00011c2a) list_setting_number_pane_g2_ParamLimits

0x6b2e,	// (0x00011c2a) list_setting_number_pane_g2

0x0001,

0xf6a5,	// (0x0001a7a1) list_setting_number_pane_g_ParamLimits

0xf6a5,	// (0x0001a7a1) list_setting_number_pane_g

0x077f,	// (0x0000b87b) list_setting_number_pane_t1_ParamLimits

0x077f,	// (0x0000b87b) list_setting_number_pane_t1

0x0793,	// (0x0000b88f) list_setting_number_pane_t2_ParamLimits

0x0793,	// (0x0000b88f) list_setting_number_pane_t2

0x07aa,	// (0x0000b8a6) list_setting_number_pane_t3_ParamLimits

0x07aa,	// (0x0000b8a6) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0001a7ad) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0001a7ad) list_setting_number_pane_t

0x0773,	// (0x0000b86f) set_value_pane_ParamLimits

0x0773,	// (0x0000b86f) set_value_pane

0x6c8e,	// (0x00011d8a) bg_set_opt_pane_ParamLimits

0x6c8e,	// (0x00011d8a) bg_set_opt_pane

0x6caf,	// (0x00011dab) set_value_pane_t1

0x6cbd,	// (0x00011db9) slider_set_pane_cp3

0x6cc6,	// (0x00011dc2) volume_small_pane_cp

0x6ccf,	// (0x00011dcb) list_form_gen_pane

0x6cd8,	// (0x00011dd4) scroll_pane_cp8

0x07ed,	// (0x0000b8e9) form_field_data_pane_ParamLimits

0x07ed,	// (0x0000b8e9) form_field_data_pane

0x0804,	// (0x0000b900) form_field_data_wide_pane_ParamLimits

0x0804,	// (0x0000b900) form_field_data_wide_pane

0x0824,	// (0x0000b920) form_field_popup_pane_ParamLimits

0x0824,	// (0x0000b920) form_field_popup_pane

0x083c,	// (0x0000b938) form_field_popup_wide_pane_ParamLimits

0x083c,	// (0x0000b938) form_field_popup_wide_pane

0x6d73,	// (0x00011e6f) form_field_slider_pane_ParamLimits

0x6d73,	// (0x00011e6f) form_field_slider_pane

0x6d86,	// (0x00011e82) form_field_slider_wide_pane_ParamLimits

0x6d86,	// (0x00011e82) form_field_slider_wide_pane

0x6d99,	// (0x00011e95) data_form_pane

0x085d,	// (0x0000b959) form_field_data_pane_t1

0x6dc7,	// (0x00011ec3) input_focus_pane

0x6dd5,	// (0x00011ed1) data_form_wide_pane

0x6e0d,	// (0x00011f09) form_field_data_wide_pane_t1

0x65d7,	// (0x000116d3) input_focus_pane_cp6

0x0877,	// (0x0000b973) form_field_popup_pane_t1

0x6dc7,	// (0x00011ec3) input_focus_pane_cp7

0x6e47,	// (0x00011f43) list_form_pane

0x6e5b,	// (0x00011f57) form_field_popup_wide_pane_t1

0x6dc7,	// (0x00011ec3) input_focus_pane_cp8

0x6e70,	// (0x00011f6c) list_form_wide_pane

0x0899,	// (0x0000b995) form_field_slider_pane_t1_ParamLimits

0x0899,	// (0x0000b995) form_field_slider_pane_t1

0x08b1,	// (0x0000b9ad) form_field_slider_pane_t2_ParamLimits

0x08b1,	// (0x0000b9ad) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0001a7bd) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0001a7bd) form_field_slider_pane_t

0x6275,	// (0x00011371) input_focus_pane_cp9_ParamLimits

0x6275,	// (0x00011371) input_focus_pane_cp9

0x08c6,	// (0x0000b9c2) slider_cont_pane_ParamLimits

0x08c6,	// (0x0000b9c2) slider_cont_pane

0x6ebf,	// (0x00011fbb) form_field_slider_wide_pane_t1_ParamLimits

0x6ebf,	// (0x00011fbb) form_field_slider_wide_pane_t1

0x6ed1,	// (0x00011fcd) form_field_slider_wide_pane_t2_ParamLimits

0x6ed1,	// (0x00011fcd) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0001a7c2) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0001a7c2) form_field_slider_wide_pane_t

0x6275,	// (0x00011371) input_focus_pane_cp10_ParamLimits

0x6275,	// (0x00011371) input_focus_pane_cp10

0x08da,	// (0x0000b9d6) slider_cont_pane_cp1_ParamLimits

0x08da,	// (0x0000b9d6) slider_cont_pane_cp1

0x08ee,	// (0x0000b9ea) slider_form_pane_cp

0x6eff,	// (0x00011ffb) input_focus_pane_g1

0x6f07,	// (0x00012003) input_focus_pane_g2

0x6f0f,	// (0x0001200b) input_focus_pane_g3

0x6f17,	// (0x00012013) input_focus_pane_g4

0x6f1f,	// (0x0001201b) input_focus_pane_g5

0x6f27,	// (0x00012023) input_focus_pane_g6

0x6f2f,	// (0x0001202b) input_focus_pane_g7

0x6f37,	// (0x00012033) input_focus_pane_g8

0x6f3f,	// (0x0001203b) input_focus_pane_g9

0x5ef6,	// (0x00010ff2) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0001a7c7) input_focus_pane_g

0x910d,	// (0x00014209) wait_border_pane_g3_copy1

0x08f6,	// (0x0000b9f2) data_form_pane_t1

0x5ef6,	// (0x00010ff2) wait_anim_pane_g1_copy1

0x1ebc,	// (0x0000cfb8) data_form_wide_pane_t1

0x0910,	// (0x0000ba0c) list_form_graphic_pane_cp_ParamLimits

0x0910,	// (0x0000ba0c) list_form_graphic_pane_cp

0xa071,	// (0x0001516d) slider_form_pane_g1

0xa07a,	// (0x00015176) slider_form_pane_g2

0x0006,

0xf9be,	// (0x0001aaba) slider_form_pane_g

0x0921,	// (0x0000ba1d) list_form_graphic_pane_ParamLimits

0x0921,	// (0x0000ba1d) list_form_graphic_pane

0x6f97,	// (0x00012093) list_form_graphic_pane_g1

0x6f9f,	// (0x0001209b) list_form_graphic_pane_t1_ParamLimits

0x6f9f,	// (0x0001209b) list_form_graphic_pane_t1

0x5fe0,	// (0x000110dc) list_highlight_pane_cp5_ParamLimits

0x5fe0,	// (0x000110dc) list_highlight_pane_cp5

0x0933,	// (0x0000ba2f) find_pane_g1

0x6fbd,	// (0x000120b9) input_find_pane

0x093c,	// (0x0000ba38) input_find_pane_g1_ParamLimits

0x093c,	// (0x0000ba38) input_find_pane_g1

0x0948,	// (0x0000ba44) input_find_pane_t1_ParamLimits

0x0948,	// (0x0000ba44) input_find_pane_t1

0x095d,	// (0x0000ba59) input_find_pane_t2_ParamLimits

0x095d,	// (0x0000ba59) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0001a7dc) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0001a7dc) input_find_pane_t

0x6ffc,	// (0x000120f8) input_focus_pane_cp5_ParamLimits

0x6ffc,	// (0x000120f8) input_focus_pane_cp5

0x097e,	// (0x0000ba7a) bg_popup_window_pane_cp2_ParamLimits

0x097e,	// (0x0000ba7a) bg_popup_window_pane_cp2

0x098b,	// (0x0000ba87) listscroll_menu_pane_ParamLimits

0x098b,	// (0x0000ba87) listscroll_menu_pane

0x0997,	// (0x0000ba93) popup_submenu_window_ParamLimits

0x0997,	// (0x0000ba93) popup_submenu_window

0x7059,	// (0x00012155) find_popup_pane_g1

0x7061,	// (0x0001215d) input_popup_find_pane_cp

0x6ffc,	// (0x000120f8) input_focus_pane_cp4_ParamLimits

0x6ffc,	// (0x000120f8) input_focus_pane_cp4

0x7077,	// (0x00012173) input_popup_find_pane_t1_ParamLimits

0x7077,	// (0x00012173) input_popup_find_pane_t1

0x5f00,	// (0x00010ffc) bg_popup_sub_pane_cp

0x70a5,	// (0x000121a1) listscroll_popup_sub_pane

0x70ad,	// (0x000121a9) list_submenu_pane_ParamLimits

0x70ad,	// (0x000121a9) list_submenu_pane

0x70be,	// (0x000121ba) scroll_pane_cp4

0x70c6,	// (0x000121c2) list_single_popup_submenu_pane_ParamLimits

0x70c6,	// (0x000121c2) list_single_popup_submenu_pane

0x70da,	// (0x000121d6) list_single_popup_submenu_pane_g1

0x70e2,	// (0x000121de) list_single_popup_submenu_pane_t1_ParamLimits

0x70e2,	// (0x000121de) list_single_popup_submenu_pane_t1

0x6275,	// (0x00011371) bg_active_tab_pane_cp1_ParamLimits

0x6275,	// (0x00011371) bg_active_tab_pane_cp1

0x09cf,	// (0x0000bacb) tabs_2_active_pane_g1

0x09d7,	// (0x0000bad3) tabs_2_active_pane_t1

0x6275,	// (0x00011371) bg_passive_tab_pane_cp1_ParamLimits

0x6275,	// (0x00011371) bg_passive_tab_pane_cp1

0x09cf,	// (0x0000bacb) tabs_2_passive_pane_g1

0x09d7,	// (0x0000bad3) tabs_2_passive_pane_t1

0x5fe0,	// (0x000110dc) bg_active_tab_pane_cp4

0x09e9,	// (0x0000bae5) tabs_2_long_active_pane_t1

0x7f9b,	// (0x00013097) bg_passive_tab_pane_cp4

0x4dd3,	// (0x0000fecf) list_single_midp_graphic_pane_g4_ParamLimits

0x5fe0,	// (0x000110dc) bg_active_tab_pane_cp5

0x09fc,	// (0x0000baf8) tabs_3_long_active_pane_t1

0x7f9b,	// (0x00013097) bg_passive_tab_pane_cp5

0x4dd3,	// (0x0000fecf) list_single_midp_graphic_pane_g4

0x5fe0,	// (0x000110dc) bg_popup_window_pane_cp13_ParamLimits

0x5fe0,	// (0x000110dc) bg_popup_window_pane_cp13

0x7159,	// (0x00012255) listscroll_popup_fast_pane_ParamLimits

0x7159,	// (0x00012255) listscroll_popup_fast_pane

0x7168,	// (0x00012264) grid_popup_fast_pane_ParamLimits

0x7168,	// (0x00012264) grid_popup_fast_pane

0x717a,	// (0x00012276) scroll_pane_cp9_ParamLimits

0x717a,	// (0x00012276) scroll_pane_cp9

0xbe23,	// (0x00016f1f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbe23,	// (0x00016f1f) list_single_graphic_hl_pane_t1_cp2

0x719e,	// (0x0001229a) input_focus_pane_cp20_ParamLimits

0x719e,	// (0x0001229a) input_focus_pane_cp20

0x71ac,	// (0x000122a8) query_popup_data_pane_t1_ParamLimits

0x71ac,	// (0x000122a8) query_popup_data_pane_t1

0x71bf,	// (0x000122bb) query_popup_data_pane_t2_ParamLimits

0x71bf,	// (0x000122bb) query_popup_data_pane_t2

0x7205,	// (0x00012301) query_popup_data_pane_t3_ParamLimits

0x7205,	// (0x00012301) query_popup_data_pane_t3

0x7246,	// (0x00012342) query_popup_data_pane_t4_ParamLimits

0x7246,	// (0x00012342) query_popup_data_pane_t4

0x7282,	// (0x0001237e) query_popup_data_pane_t5_ParamLimits

0x7282,	// (0x0001237e) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0001a7e1) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0001a7e1) query_popup_data_pane_t

0x6eff,	// (0x00011ffb) bg_set_opt_pane_g1

0x6f07,	// (0x00012003) bg_set_opt_pane_g2

0x6f0f,	// (0x0001200b) bg_set_opt_pane_g3

0x6f17,	// (0x00012013) bg_set_opt_pane_g4

0x6f1f,	// (0x0001201b) bg_set_opt_pane_g5

0x6f27,	// (0x00012023) bg_set_opt_pane_g6

0x6f2f,	// (0x0001202b) bg_set_opt_pane_g7

0x6f37,	// (0x00012033) bg_set_opt_pane_g8

0x6f3f,	// (0x0001203b) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0001a7ec) bg_set_opt_pane_g

0x49d4,	// (0x0000fad0) control_top_pane_stacon_ParamLimits

0x49d4,	// (0x0000fad0) control_top_pane_stacon

0x4a27,	// (0x0000fb23) signal_pane_stacon_ParamLimits

0x4a27,	// (0x0000fb23) signal_pane_stacon

0x78aa,	// (0x000129a6) stacon_top_pane_g1_ParamLimits

0x78aa,	// (0x000129a6) stacon_top_pane_g1

0x4a4c,	// (0x0000fb48) title_pane_stacon_ParamLimits

0x4a4c,	// (0x0000fb48) title_pane_stacon

0x4a76,	// (0x0000fb72) uni_indicator_pane_stacon_ParamLimits

0x4a76,	// (0x0000fb72) uni_indicator_pane_stacon

0x4a8b,	// (0x0000fb87) battery_pane_stacon_ParamLimits

0x4a8b,	// (0x0000fb87) battery_pane_stacon

0x4acf,	// (0x0000fbcb) control_bottom_pane_stacon_ParamLimits

0x4acf,	// (0x0000fbcb) control_bottom_pane_stacon

0x4af2,	// (0x0000fbee) navi_pane_stacon_ParamLimits

0x4af2,	// (0x0000fbee) navi_pane_stacon

0x78cc,	// (0x000129c8) stacon_bottom_pane_g1_ParamLimits

0x78cc,	// (0x000129c8) stacon_bottom_pane_g1

0x4735,	// (0x0000f831) aid_levels_signal_lsc_ParamLimits

0x4735,	// (0x0000f831) aid_levels_signal_lsc

0x474c,	// (0x0000f848) signal_pane_stacon_g1_ParamLimits

0x474c,	// (0x0000f848) signal_pane_stacon_g1

0x4760,	// (0x0000f85c) signal_pane_stacon_g2_ParamLimits

0x4760,	// (0x0000f85c) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0001a7ff) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0001a7ff) signal_pane_stacon_g

0x4795,	// (0x0000f891) title_pane_stacon_t1_ParamLimits

0x4795,	// (0x0000f891) title_pane_stacon_t1

0x72c6,	// (0x000123c2) uni_indicator_pane_stacon_g1

0x72d0,	// (0x000123cc) uni_indicator_pane_stacon_g2

0x72da,	// (0x000123d6) uni_indicator_pane_stacon_g3

0x72e4,	// (0x000123e0) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0001a80b) uni_indicator_pane_stacon_g

0x47ba,	// (0x0000f8b6) control_top_pane_stacon_g1

0x47c2,	// (0x0000f8be) control_top_pane_stacon_t1_ParamLimits

0x47c2,	// (0x0000f8be) control_top_pane_stacon_t1

0x47f9,	// (0x0000f8f5) aid_levels_battery_lsc_ParamLimits

0x47f9,	// (0x0000f8f5) aid_levels_battery_lsc

0x4811,	// (0x0000f90d) battery_pane_stacon_g1_ParamLimits

0x4811,	// (0x0000f90d) battery_pane_stacon_g1

0x4824,	// (0x0000f920) battery_pane_stacon_g2_ParamLimits

0x4824,	// (0x0000f920) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0001a814) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0001a814) battery_pane_stacon_g

0x4862,	// (0x0000f95e) navi_icon_pane_stacon

0x4876,	// (0x0000f972) navi_navi_pane_stacon

0x4862,	// (0x0000f95e) navi_text_pane_stacon

0x47ba,	// (0x0000f8b6) control_bottom_pane_stacon_g1

0x488a,	// (0x0000f986) control_bottom_pane_stacon_t1_ParamLimits

0x488a,	// (0x0000f986) control_bottom_pane_stacon_t1

0x0a0e,	// (0x0000bb0a) grid_app_pane_ParamLimits

0x0a0e,	// (0x0000bb0a) grid_app_pane

0x0a46,	// (0x0000bb42) scroll_pane_cp15_ParamLimits

0x0a46,	// (0x0000bb42) scroll_pane_cp15

0x0a63,	// (0x0000bb5f) cell_app_pane_ParamLimits

0x0a63,	// (0x0000bb5f) cell_app_pane

0x0aa8,	// (0x0000bba4) cell_app_pane_g1_ParamLimits

0x0aa8,	// (0x0000bba4) cell_app_pane_g1

0x7389,	// (0x00012485) cell_app_pane_g2_ParamLimits

0x7389,	// (0x00012485) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0001a819) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0001a819) cell_app_pane_g

0x7395,	// (0x00012491) cell_app_pane_t1_ParamLimits

0x7395,	// (0x00012491) cell_app_pane_t1

0x73a7,	// (0x000124a3) grid_highlight_pane_ParamLimits

0x73a7,	// (0x000124a3) grid_highlight_pane

0x6eff,	// (0x00011ffb) cell_highlight_pane_g1

0x6f07,	// (0x00012003) cell_highlight_pane_g2

0x6f0f,	// (0x0001200b) cell_highlight_pane_g3

0x6f17,	// (0x00012013) cell_highlight_pane_g4

0x6f1f,	// (0x0001201b) cell_highlight_pane_g5

0x6f27,	// (0x00012023) cell_highlight_pane_g6

0x6f2f,	// (0x0001202b) cell_highlight_pane_g7

0x6f37,	// (0x00012033) cell_highlight_pane_g8

0x6f3f,	// (0x0001203b) cell_highlight_pane_g9

0x5ef6,	// (0x00010ff2) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0001a7c7) cell_highlight_pane_g

0x73b8,	// (0x000124b4) bg_scroll_pane

0x48d4,	// (0x0000f9d0) scroll_handle_pane

0x73ff,	// (0x000124fb) scroll_bg_pane_g1

0x7414,	// (0x00012510) scroll_bg_pane_g2

0x742c,	// (0x00012528) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0001a81e) scroll_bg_pane_g

0x7441,	// (0x0001253d) scroll_handle_focus_pane_ParamLimits

0x7441,	// (0x0001253d) scroll_handle_focus_pane

0x73ff,	// (0x000124fb) scroll_handle_pane_g1

0x744e,	// (0x0001254a) scroll_handle_pane_g2

0x742c,	// (0x00012528) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0001a825) scroll_handle_pane_g

0x6ffc,	// (0x000120f8) bg_popup_sub_pane_cp21_ParamLimits

0x6ffc,	// (0x000120f8) bg_popup_sub_pane_cp21

0x7462,	// (0x0001255e) popup_fep_japan_predictive_window_t1_ParamLimits

0x7462,	// (0x0001255e) popup_fep_japan_predictive_window_t1

0x747c,	// (0x00012578) popup_fep_japan_predictive_window_t2_ParamLimits

0x747c,	// (0x00012578) popup_fep_japan_predictive_window_t2

0x74af,	// (0x000125ab) popup_fep_japan_predictive_window_t3_ParamLimits

0x74af,	// (0x000125ab) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0001a82c) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0001a82c) popup_fep_japan_predictive_window_t

0x5f00,	// (0x00010ffc) bg_popup_sub_pane_cp23

0x74e6,	// (0x000125e2) listscroll_japin_cand_pane

0x74ee,	// (0x000125ea) popup_fep_japan_candidate_window_t1

0x74fc,	// (0x000125f8) candidate_pane_ParamLimits

0x74fc,	// (0x000125f8) candidate_pane

0x750e,	// (0x0001260a) scroll_pane_cp30

0x7516,	// (0x00012612) list_single_popup_jap_candidate_pane_ParamLimits

0x7516,	// (0x00012612) list_single_popup_jap_candidate_pane

0x5f00,	// (0x00010ffc) list_highlight_pane_cp30

0x752b,	// (0x00012627) list_single_popup_jap_candidate_pane_t1

0x753a,	// (0x00012636) level_1_signal

0x7547,	// (0x00012643) level_2_signal

0x7554,	// (0x00012650) level_3_signal

0x7561,	// (0x0001265d) level_4_signal

0x756e,	// (0x0001266a) level_5_signal

0x757b,	// (0x00012677) level_6_signal

0x7588,	// (0x00012684) level_7_signal

0x753a,	// (0x00012636) level_1_battery

0x7547,	// (0x00012643) level_2_battery

0x7554,	// (0x00012650) level_3_battery

0x7561,	// (0x0001265d) level_4_battery

0x756e,	// (0x0001266a) level_5_battery

0x757b,	// (0x00012677) level_6_battery

0x7588,	// (0x00012684) level_7_battery

0x75ad,	// (0x000126a9) list_menu_pane_ParamLimits

0x75ad,	// (0x000126a9) list_menu_pane

0x75be,	// (0x000126ba) scroll_pane_cp25_ParamLimits

0x75be,	// (0x000126ba) scroll_pane_cp25

0x75d7,	// (0x000126d3) list_double2_graphic_pane_cp2_ParamLimits

0x75d7,	// (0x000126d3) list_double2_graphic_pane_cp2

0x75d7,	// (0x000126d3) list_double2_large_graphic_pane_cp2_ParamLimits

0x75d7,	// (0x000126d3) list_double2_large_graphic_pane_cp2

0x75d7,	// (0x000126d3) list_double2_pane_cp2_ParamLimits

0x75d7,	// (0x000126d3) list_double2_pane_cp2

0x75d7,	// (0x000126d3) list_double_graphic_pane_cp2_ParamLimits

0x75d7,	// (0x000126d3) list_double_graphic_pane_cp2

0x75d7,	// (0x000126d3) list_double_large_graphic_pane_cp2_ParamLimits

0x75d7,	// (0x000126d3) list_double_large_graphic_pane_cp2

0x75d7,	// (0x000126d3) list_double_number_pane_cp2_ParamLimits

0x75d7,	// (0x000126d3) list_double_number_pane_cp2

0x75d7,	// (0x000126d3) list_double_pane_cp2_ParamLimits

0x75d7,	// (0x000126d3) list_double_pane_cp2

0x0ae4,	// (0x0000bbe0) list_single_2graphic_pane_cp2_ParamLimits

0x0ae4,	// (0x0000bbe0) list_single_2graphic_pane_cp2

0x0ae4,	// (0x0000bbe0) list_single_graphic_heading_pane_cp2_ParamLimits

0x0ae4,	// (0x0000bbe0) list_single_graphic_heading_pane_cp2

0x0ae4,	// (0x0000bbe0) list_single_graphic_pane_cp2_ParamLimits

0x0ae4,	// (0x0000bbe0) list_single_graphic_pane_cp2

0x0ae4,	// (0x0000bbe0) list_single_heading_pane_cp2_ParamLimits

0x0ae4,	// (0x0000bbe0) list_single_heading_pane_cp2

0x7614,	// (0x00012710) list_single_large_graphic_pane_cp2_ParamLimits

0x7614,	// (0x00012710) list_single_large_graphic_pane_cp2

0x0ae4,	// (0x0000bbe0) list_single_number_heading_pane_cp2_ParamLimits

0x0ae4,	// (0x0000bbe0) list_single_number_heading_pane_cp2

0x0ae4,	// (0x0000bbe0) list_single_number_pane_cp2_ParamLimits

0x0ae4,	// (0x0000bbe0) list_single_number_pane_cp2

0x0ae4,	// (0x0000bbe0) list_single_pane_cp2_ParamLimits

0x0ae4,	// (0x0000bbe0) list_single_pane_cp2

0x766a,	// (0x00012766) bg_popup_sub_pane_cp22

0x4986,	// (0x0000fa82) popup_side_volume_key_window_g1

0x49b0,	// (0x0000faac) popup_side_volume_key_window_t1

0x49cc,	// (0x0000fac8) volume_small_pane_cp1

0x6275,	// (0x00011371) bg_popup_sub_pane_cp24_ParamLimits

0x6275,	// (0x00011371) bg_popup_sub_pane_cp24

0x7680,	// (0x0001277c) fep_china_uni_candidate_pane_ParamLimits

0x7680,	// (0x0001277c) fep_china_uni_candidate_pane

0x7694,	// (0x00012790) fep_china_uni_entry_pane

0x76a4,	// (0x000127a0) popup_fep_china_uni_window_g1

0x76c0,	// (0x000127bc) fep_china_uni_entry_pane_g1

0x76c8,	// (0x000127c4) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0001a859) fep_china_uni_entry_pane_g

0x76d0,	// (0x000127cc) fep_entry_item_pane

0x76da,	// (0x000127d6) fep_candidate_item_pane

0x76e2,	// (0x000127de) fep_china_uni_candidate_pane_g1

0x76ea,	// (0x000127e6) fep_china_uni_candidate_pane_g2

0x76f2,	// (0x000127ee) fep_china_uni_candidate_pane_g3

0x76fa,	// (0x000127f6) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0001a85e) fep_china_uni_candidate_pane_g

0x5ef6,	// (0x00010ff2) fep_entry_item_pane_g1

0x7702,	// (0x000127fe) fep_entry_item_pane_t1_ParamLimits

0x7702,	// (0x000127fe) fep_entry_item_pane_t1

0x7718,	// (0x00012814) fep_candidate_item_pane_t1_ParamLimits

0x7718,	// (0x00012814) fep_candidate_item_pane_t1

0x772d,	// (0x00012829) fep_candidate_item_pane_t2_ParamLimits

0x772d,	// (0x00012829) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0001a867) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0001a867) fep_candidate_item_pane_t

0x5fe0,	// (0x000110dc) list_highlight_pane_cp31_ParamLimits

0x5fe0,	// (0x000110dc) list_highlight_pane_cp31

0x773f,	// (0x0001283b) level_1_signal_lsc

0x7748,	// (0x00012844) level_2_signal_lsc

0x7751,	// (0x0001284d) level_3_signal_lsc

0x775a,	// (0x00012856) level_4_signal_lsc

0x7763,	// (0x0001285f) level_5_signal_lsc

0x776c,	// (0x00012868) level_6_signal_lsc

0x7775,	// (0x00012871) level_7_signal_lsc

0x7775,	// (0x00012871) level_1_battery_lsc

0x777e,	// (0x0001287a) level_2_battery_lsc

0x7787,	// (0x00012883) level_3_battery_lsc

0x7790,	// (0x0001288c) level_4_battery_lsc

0x7799,	// (0x00012895) level_5_battery_lsc

0x77a2,	// (0x0001289e) level_6_battery_lsc

0x773f,	// (0x0001283b) level_7_battery_lsc

0x77ab,	// (0x000128a7) scroll_handle_focus_pane_g1

0x77b4,	// (0x000128b0) scroll_handle_focus_pane_g2

0x77bd,	// (0x000128b9) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0001a86c) scroll_handle_focus_pane_g

0x0b44,	// (0x0000bc40) list_single_2graphic_pane_g1_ParamLimits

0x0b44,	// (0x0000bc40) list_single_2graphic_pane_g1

0x044a,	// (0x0000b546) list_single_2graphic_pane_g2_ParamLimits

0x044a,	// (0x0000b546) list_single_2graphic_pane_g2

0x89f5,	// (0x00013af1) list_single_2graphic_pane_g3_ParamLimits

0x89f5,	// (0x00013af1) list_single_2graphic_pane_g3

0x0b50,	// (0x0000bc4c) list_single_2graphic_pane_g4_ParamLimits

0x0b50,	// (0x0000bc4c) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0001a873) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0001a873) list_single_2graphic_pane_g

0x0b5c,	// (0x0000bc58) list_single_2graphic_pane_t1_ParamLimits

0x0b5c,	// (0x0000bc58) list_single_2graphic_pane_t1

0x0b8a,	// (0x0000bc86) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x0b8a,	// (0x0000bc86) list_double2_graphic_large_graphic_pane_g1

0x04a9,	// (0x0000b5a5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x04a9,	// (0x0000b5a5) list_double2_graphic_large_graphic_pane_g2

0x6b2e,	// (0x00011c2a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6b2e,	// (0x00011c2a) list_double2_graphic_large_graphic_pane_g3

0x0b9c,	// (0x0000bc98) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x0b9c,	// (0x0000bc98) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0001a87c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0001a87c) list_double2_graphic_large_graphic_pane_g

0x0ba8,	// (0x0000bca4) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x0ba8,	// (0x0000bca4) list_double2_graphic_large_graphic_pane_t1

0x0bbe,	// (0x0000bcba) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x0bbe,	// (0x0000bcba) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0001a885) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0001a885) list_double2_graphic_large_graphic_pane_t

0x7994,	// (0x00012a90) popup_fast_swap_window_ParamLimits

0x7994,	// (0x00012a90) popup_fast_swap_window

0x79b0,	// (0x00012aac) popup_side_volume_key_window

0x79cc,	// (0x00012ac8) stacon_top_pane

0x79d6,	// (0x00012ad2) status_pane_ParamLimits

0x79d6,	// (0x00012ad2) status_pane

0x79cc,	// (0x00012ac8) status_small_pane

0x5f00,	// (0x00010ffc) control_pane

0x5f00,	// (0x00010ffc) stacon_bottom_pane

0x6cd8,	// (0x00011dd4) scroll_pane_cp121

0x6ccf,	// (0x00011dcb) set_content_pane

0x7870,	// (0x0001296c) bg_active_tab_pane_g1_cp1

0x785e,	// (0x0001295a) bg_active_tab_pane_g2_cp1

0x7879,	// (0x00012975) bg_active_tab_pane_g3_cp1

0x7870,	// (0x0001296c) bg_passive_tab_pane_g1_cp1

0x785e,	// (0x0001295a) bg_passive_tab_pane_g2_cp1

0x7879,	// (0x00012975) bg_passive_tab_pane_g3_cp1

0x0bd9,	// (0x0000bcd5) bg_active_tab_pane_g1_cp2

0x785e,	// (0x0001295a) bg_active_tab_pane_g2_cp2

0x0bd0,	// (0x0000bccc) bg_active_tab_pane_g3_cp2

0x0bd9,	// (0x0000bcd5) bg_passive_tab_pane_g1_cp2

0x785e,	// (0x0001295a) bg_passive_tab_pane_g2_cp2

0x0bd0,	// (0x0000bccc) bg_passive_tab_pane_g3_cp2

0x0beb,	// (0x0000bce7) bg_active_tab_pane_g1_cp3

0x785e,	// (0x0001295a) bg_active_tab_pane_g2_cp3

0x0be2,	// (0x0000bcde) bg_active_tab_pane_g3_cp3

0x0beb,	// (0x0000bce7) bg_passive_tab_pane_g1_cp3

0x785e,	// (0x0001295a) bg_passive_tab_pane_g2_cp3

0x0be2,	// (0x0000bcde) bg_passive_tab_pane_g3_cp3

0x0bfd,	// (0x0000bcf9) bg_active_tab_pane_g1_cp4

0x785e,	// (0x0001295a) bg_active_tab_pane_g2_cp4

0x0bf4,	// (0x0000bcf0) bg_active_tab_pane_g3_cp4

0x0bfd,	// (0x0000bcf9) bg_passive_tab_pane_g1_cp4

0x785e,	// (0x0001295a) bg_passive_tab_pane_g2_cp4

0x0bf4,	// (0x0000bcf0) bg_passive_tab_pane_g3_cp4

0x78e8,	// (0x000129e4) bg_active_tab_pane_g1_cp5

0x785e,	// (0x0001295a) bg_active_tab_pane_g2_cp5

0x78f1,	// (0x000129ed) bg_active_tab_pane_g3_cp5

0x78e8,	// (0x000129e4) bg_passive_tab_pane_g1_cp5

0x785e,	// (0x0001295a) bg_passive_tab_pane_g2_cp5

0x78f1,	// (0x000129ed) bg_passive_tab_pane_g3_cp5

0x0c06,	// (0x0000bd02) list_set_graphic_pane_ParamLimits

0x0c06,	// (0x0000bd02) list_set_graphic_pane

0x5f00,	// (0x00010ffc) bg_set_opt_pane_cp4

0x0c18,	// (0x0000bd14) list_set_graphic_pane_g1_ParamLimits

0x0c18,	// (0x0000bd14) list_set_graphic_pane_g1

0x0c24,	// (0x0000bd20) list_set_graphic_pane_g2_ParamLimits

0x0c24,	// (0x0000bd20) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0001a88a) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0001a88a) list_set_graphic_pane_g

0x0009,

0xfaf4,	// (0x0001abf0) volume_small_pane_cp_g

0x7947,	// (0x00012a43) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7947,	// (0x00012a43) list_double2_large_graphic_pane_g1_cp2

0x7953,	// (0x00012a4f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7953,	// (0x00012a4f) list_double2_large_graphic_pane_g2_cp2

0x7964,	// (0x00012a60) list_double2_large_graphic_pane_g3_cp2

0x796c,	// (0x00012a68) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x796c,	// (0x00012a68) list_double2_large_graphic_pane_t1_cp2

0x7982,	// (0x00012a7e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7982,	// (0x00012a7e) list_double2_large_graphic_pane_t2_cp2

0x9be6,	// (0x00014ce2) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9be6,	// (0x00014ce2) list_double_large_graphic_pane_g1_cp2

0x9bf7,	// (0x00014cf3) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9bf7,	// (0x00014cf3) list_double_large_graphic_pane_g2_cp2

0x7af2,	// (0x00012bee) list_double_large_graphic_pane_g3_cp2

0x9c08,	// (0x00014d04) list_double_large_graphic_pane_g4_cp

0x9c10,	// (0x00014d0c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9c10,	// (0x00014d0c) list_double_large_graphic_pane_t1_cp2

0x9c27,	// (0x00014d23) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9c27,	// (0x00014d23) list_double_large_graphic_pane_t2_cp2

0x79e4,	// (0x00012ae0) list_double2_graphic_pane_g1_cp2_ParamLimits

0x79e4,	// (0x00012ae0) list_double2_graphic_pane_g1_cp2

0x79f2,	// (0x00012aee) list_double2_graphic_pane_g2_cp2_ParamLimits

0x79f2,	// (0x00012aee) list_double2_graphic_pane_g2_cp2

0x7a03,	// (0x00012aff) list_double2_graphic_pane_g3_cp2

0x7a0d,	// (0x00012b09) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7a0d,	// (0x00012b09) list_double2_graphic_pane_t1_cp2

0x7a23,	// (0x00012b1f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x7a23,	// (0x00012b1f) list_double2_graphic_pane_t2_cp2

0x7a35,	// (0x00012b31) list_single_number_heading_pane_g1_cp2_ParamLimits

0x7a35,	// (0x00012b31) list_single_number_heading_pane_g1_cp2

0x7a41,	// (0x00012b3d) list_single_number_heading_pane_g2_cp2

0x7a49,	// (0x00012b45) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7a49,	// (0x00012b45) list_single_number_heading_pane_t1_cp2

0x7a5f,	// (0x00012b5b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7a5f,	// (0x00012b5b) list_single_number_heading_pane_t2_cp2

0x7a71,	// (0x00012b6d) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7a71,	// (0x00012b6d) list_single_number_heading_pane_t3_cp2

0x7a35,	// (0x00012b31) list_single_heading_pane_g1_cp2_ParamLimits

0x7a35,	// (0x00012b31) list_single_heading_pane_g1_cp2

0x7a41,	// (0x00012b3d) list_single_heading_pane_g2_cp2

0x7a49,	// (0x00012b45) list_single_heading_pane_t1_cp2_ParamLimits

0x7a49,	// (0x00012b45) list_single_heading_pane_t1_cp2

0x99ee,	// (0x00014aea) list_single_heading_pane_t2_cp2_ParamLimits

0x99ee,	// (0x00014aea) list_single_heading_pane_t2_cp2

0x9930,	// (0x00014a2c) list_double_graphic_pane_g1_cp2_ParamLimits

0x9930,	// (0x00014a2c) list_double_graphic_pane_g1_cp2

0x993c,	// (0x00014a38) list_double_graphic_pane_g2_cp2_ParamLimits

0x993c,	// (0x00014a38) list_double_graphic_pane_g2_cp2

0x994b,	// (0x00014a47) list_double_graphic_pane_g3_cp2

0x9953,	// (0x00014a4f) list_double_graphic_pane_t1_cp2_ParamLimits

0x9953,	// (0x00014a4f) list_double_graphic_pane_t1_cp2

0x9969,	// (0x00014a65) list_double_graphic_pane_t2_cp2_ParamLimits

0x9969,	// (0x00014a65) list_double_graphic_pane_t2_cp2

0x7ae6,	// (0x00012be2) list_double_number_pane_g1_cp2_ParamLimits

0x7ae6,	// (0x00012be2) list_double_number_pane_g1_cp2

0x7af2,	// (0x00012bee) list_double_number_pane_g2_cp2

0x98f4,	// (0x000149f0) list_double_number_pane_t1_cp2_ParamLimits

0x98f4,	// (0x000149f0) list_double_number_pane_t1_cp2

0x9908,	// (0x00014a04) list_double_number_pane_t2_cp2_ParamLimits

0x9908,	// (0x00014a04) list_double_number_pane_t2_cp2

0x991e,	// (0x00014a1a) list_double_number_pane_t3_cp2_ParamLimits

0x991e,	// (0x00014a1a) list_double_number_pane_t3_cp2

0x97dd,	// (0x000148d9) list_single_graphic_pane_g1_cp2_ParamLimits

0x97dd,	// (0x000148d9) list_single_graphic_pane_g1_cp2

0x7b4a,	// (0x00012c46) list_single_graphic_pane_g2_cp2_ParamLimits

0x7b4a,	// (0x00012c46) list_single_graphic_pane_g2_cp2

0x7b56,	// (0x00012c52) list_single_graphic_pane_g3_cp2

0x97b3,	// (0x000148af) list_single_graphic_pane_t1_cp2_ParamLimits

0x97b3,	// (0x000148af) list_single_graphic_pane_t1_cp2

0x7b4a,	// (0x00012c46) list_single_number_pane_g1_cp2_ParamLimits

0x7b4a,	// (0x00012c46) list_single_number_pane_g1_cp2

0x7b56,	// (0x00012c52) list_single_number_pane_g2_cp2

0x97b3,	// (0x000148af) list_single_number_pane_t1_cp2_ParamLimits

0x97b3,	// (0x000148af) list_single_number_pane_t1_cp2

0x97c9,	// (0x000148c5) list_single_number_pane_t2_cp2_ParamLimits

0x97c9,	// (0x000148c5) list_single_number_pane_t2_cp2

0x7953,	// (0x00012a4f) list_double2_pane_g1_cp2_ParamLimits

0x7953,	// (0x00012a4f) list_double2_pane_g1_cp2

0x7964,	// (0x00012a60) list_double2_pane_g2_cp2

0x7abe,	// (0x00012bba) list_double2_pane_t1_cp2_ParamLimits

0x7abe,	// (0x00012bba) list_double2_pane_t1_cp2

0x7ad4,	// (0x00012bd0) list_double2_pane_t2_cp2_ParamLimits

0x7ad4,	// (0x00012bd0) list_double2_pane_t2_cp2

0x7ae6,	// (0x00012be2) list_double_pane_g1_cp2_ParamLimits

0x7ae6,	// (0x00012be2) list_double_pane_g1_cp2

0x7af2,	// (0x00012bee) list_double_pane_g2_cp2

0x7afa,	// (0x00012bf6) list_double_pane_t1_cp2_ParamLimits

0x7afa,	// (0x00012bf6) list_double_pane_t1_cp2

0x7b10,	// (0x00012c0c) list_double_pane_t2_cp2_ParamLimits

0x7b10,	// (0x00012c0c) list_double_pane_t2_cp2

0x7b3a,	// (0x00012c36) list_single_pane_cp2_g3

0x7b4a,	// (0x00012c46) list_single_pane_g1_cp2_ParamLimits

0x7b4a,	// (0x00012c46) list_single_pane_g1_cp2

0x7b56,	// (0x00012c52) list_single_pane_g2_cp2

0x7b5e,	// (0x00012c5a) list_single_pane_t1_cp2_ParamLimits

0x7b5e,	// (0x00012c5a) list_single_pane_t1_cp2

0x7b76,	// (0x00012c72) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7b76,	// (0x00012c72) list_single_large_graphic_pane_g1_cp2

0x7b82,	// (0x00012c7e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7b82,	// (0x00012c7e) list_single_large_graphic_pane_g2_cp2

0x7b8e,	// (0x00012c8a) list_single_large_graphic_pane_g3_cp2

0x7b96,	// (0x00012c92) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7b96,	// (0x00012c92) list_single_large_graphic_pane_g4_cp1

0x7bb0,	// (0x00012cac) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7bb0,	// (0x00012cac) list_single_large_graphic_pane_t1_cp2

0x977f,	// (0x0001487b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x977f,	// (0x0001487b) list_single_graphic_heading_pane_g1_cp2

0x974c,	// (0x00014848) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x974c,	// (0x00014848) list_single_graphic_heading_pane_g4_cp2

0x7b56,	// (0x00012c52) list_single_graphic_heading_pane_g5_cp2

0x978b,	// (0x00014887) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x978b,	// (0x00014887) list_single_graphic_heading_pane_t1_cp2

0x97a1,	// (0x0001489d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x97a1,	// (0x0001489d) list_single_graphic_heading_pane_t2_cp2

0x9740,	// (0x0001483c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9740,	// (0x0001483c) list_single_2graphic_pane_g1_cp2

0x974c,	// (0x00014848) list_single_2graphic_pane_g2_cp2_ParamLimits

0x974c,	// (0x00014848) list_single_2graphic_pane_g2_cp2

0x7b56,	// (0x00012c52) list_single_2graphic_pane_g3_cp2

0x975d,	// (0x00014859) list_single_2graphic_pane_g4_cp2_ParamLimits

0x975d,	// (0x00014859) list_single_2graphic_pane_g4_cp2

0x9769,	// (0x00014865) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9769,	// (0x00014865) list_single_2graphic_pane_t1_cp2

0x5ef6,	// (0x00010ff2) list_highlight_pane_g10_cp1

0x9318,	// (0x00014414) list_highlight_pane_g1_cp1

0x9320,	// (0x0001441c) list_highlight_pane_g2_cp1

0x9328,	// (0x00014424) list_highlight_pane_g3_cp1

0x9330,	// (0x0001442c) list_highlight_pane_g4_cp1

0x9338,	// (0x00014434) list_highlight_pane_g5_cp1

0x9340,	// (0x0001443c) list_highlight_pane_g6_cp1

0x9348,	// (0x00014444) list_highlight_pane_g7_cp1

0x9350,	// (0x0001444c) list_highlight_pane_g8_cp1

0x9358,	// (0x00014454) list_highlight_pane_g9_cp1

0x1a54,	// (0x0000cb50) form_field_slider_pane_t3

0x1a62,	// (0x0000cb5e) form_field_slider_pane_t4

0x9254,	// (0x00014350) slider_form_pane_ParamLimits

0x9254,	// (0x00014350) slider_form_pane

0x5f00,	// (0x00010ffc) control_abbreviations

0x5f00,	// (0x00010ffc) control_conventions

0x5f00,	// (0x00010ffc) control_definitions

0x5f00,	// (0x00010ffc) format_table_attribute

0x9a38,	// (0x00014b34) bg_popup_preview_window_pane_g9

0x5f00,	// (0x00010ffc) format_table_data2

0x5f00,	// (0x00010ffc) format_table_data3

0x5f00,	// (0x00010ffc) format_table_data_example

0x0008,

0x5f00,	// (0x00010ffc) intro_purpose

0xf91e,	// (0x0001aa1a) bg_popup_preview_window_pane_g

0x5f00,	// (0x00010ffc) texts_category

0x5f00,	// (0x00010ffc) texts_graphics

0x7bc6,	// (0x00012cc2) text_digital

0x7bd5,	// (0x00012cd1) text_primary

0x7be4,	// (0x00012ce0) text_primary_small

0x7bf3,	// (0x00012cef) text_secondary

0x7c02,	// (0x00012cfe) text_title

0xa25f,	// (0x0001535b) bg_passive_tab_pane_g1_cp3_srt

0x785e,	// (0x0001295a) bg_passive_tab_pane_g2_cp3_srt

0xa268,	// (0x00015364) bg_passive_tab_pane_g3_cp3_srt

0x6275,	// (0x00011371) bg_active_tab_pane_cp3_srt_ParamLimits

0x6275,	// (0x00011371) bg_active_tab_pane_cp3_srt

0xa271,	// (0x0001536d) tabs_4_active_pane_srt_g1

0x1f70,	// (0x0000d06c) tabs_4_active_pane_srt_t1_ParamLimits

0x1f70,	// (0x0000d06c) tabs_4_active_pane_srt_t1

0xa25f,	// (0x0001535b) bg_active_tab_pane_g1_cp3_copy1

0x785e,	// (0x0001295a) bg_active_tab_pane_g2_cp3_copy1

0xa268,	// (0x00015364) bg_active_tab_pane_g3_cp3_copy1

0x5fe0,	// (0x000110dc) tabs_2_long_active_pane_srt_ParamLimits

0x5fe0,	// (0x000110dc) tabs_2_long_active_pane_srt

0x5fe0,	// (0x000110dc) tabs_2_long_passive_pane_srt_ParamLimits

0x5fe0,	// (0x000110dc) tabs_2_long_passive_pane_srt

0x7f9b,	// (0x00013097) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7f9b,	// (0x00013097) bg_passive_tab_pane_cp4_srt

0x9ea4,	// (0x00014fa0) bg_passive_tab_pane_g1_cp4_srt

0x785e,	// (0x0001295a) bg_passive_tab_pane_g2_cp4_srt

0x9ead,	// (0x00014fa9) bg_passive_tab_pane_g3_cp4_srt

0x5fe0,	// (0x000110dc) bg_active_tab_pane_cp4_srt_ParamLimits

0x5fe0,	// (0x000110dc) bg_active_tab_pane_cp4_srt

0x1d51,	// (0x0000ce4d) tabs_2_long_active_pane_srt_t1_ParamLimits

0x1d51,	// (0x0000ce4d) tabs_2_long_active_pane_srt_t1

0x9ea4,	// (0x00014fa0) bg_active_tab_pane_g1_cp4_srt

0x785e,	// (0x0001295a) bg_active_tab_pane_g2_cp4_srt

0x9ead,	// (0x00014fa9) bg_active_tab_pane_g3_cp4_srt

0x6275,	// (0x00011371) tabs_3_long_active_pane_srt_ParamLimits

0x6275,	// (0x00011371) tabs_3_long_active_pane_srt

0x6275,	// (0x00011371) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6275,	// (0x00011371) tabs_3_long_passive_pane_cp_srt

0x6275,	// (0x00011371) tabs_3_long_passive_pane_srt_ParamLimits

0x6275,	// (0x00011371) tabs_3_long_passive_pane_srt

0x7f9b,	// (0x00013097) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7f9b,	// (0x00013097) bg_passive_tab_pane_cp5_srt

0x78e8,	// (0x000129e4) bg_passive_tab_pane_g1_cp5_srt

0x785e,	// (0x0001295a) bg_passive_tab_pane_g2_cp5_srt

0x78f1,	// (0x000129ed) bg_passive_tab_pane_g3_cp5_srt

0x5fe0,	// (0x000110dc) bg_active_tab_pane_cp5_srt_ParamLimits

0x5fe0,	// (0x000110dc) bg_active_tab_pane_cp5_srt

0x1d3b,	// (0x0000ce37) tabs_3_long_active_pane_srt_t1_ParamLimits

0x1d3b,	// (0x0000ce37) tabs_3_long_active_pane_srt_t1

0x78e8,	// (0x000129e4) bg_active_tab_pane_g1_cp5_srt

0x785e,	// (0x0001295a) bg_active_tab_pane_g2_cp5_srt

0x78f1,	// (0x000129ed) bg_active_tab_pane_g3_cp5_srt

0x9e84,	// (0x00014f80) navi_text_pane_srt_t1

0x9e7c,	// (0x00014f78) navi_icon_pane_srt_g1

0x7dd5,	// (0x00012ed1) midp_editing_number_pane_srt

0x7c11,	// (0x00012d0d) midp_ticker_pane_srt

0x7ddd,	// (0x00012ed9) midp_ticker_pane_srt_g1

0x7de5,	// (0x00012ee1) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0001a8a9) midp_ticker_pane_srt_g

0x7ded,	// (0x00012ee9) midp_ticker_pane_srt_t1

0x9e6d,	// (0x00014f69) midp_editing_number_pane_t1_copy1

0x0c48,	// (0x0000bd44) listscroll_midp_pane

0x0c48,	// (0x0000bd44) midp_form_pane

0x7c87,	// (0x00012d83) midp_info_popup_window_ParamLimits

0x7c87,	// (0x00012d83) midp_info_popup_window

0x6ffc,	// (0x000120f8) bg_popup_sub_pane_cp50_ParamLimits

0x6ffc,	// (0x000120f8) bg_popup_sub_pane_cp50

0x8f81,	// (0x0001407d) listscroll_midp_info_pane_ParamLimits

0x8f81,	// (0x0001407d) listscroll_midp_info_pane

0x8f69,	// (0x00014065) listscroll_form_midp_pane_ParamLimits

0x8f69,	// (0x00014065) listscroll_form_midp_pane

0x8f75,	// (0x00014071) scroll_bar_cp050

0x1a48,	// (0x0000cb44) list_midp_pane

0xae4e,	// (0x00015f4a) signal_pane_g2_cp

0x8e83,	// (0x00013f7f) listscroll_midp_info_pane_t1_ParamLimits

0x8e83,	// (0x00013f7f) listscroll_midp_info_pane_t1

0x8e9b,	// (0x00013f97) listscroll_midp_info_pane_t2_ParamLimits

0x8e9b,	// (0x00013f97) listscroll_midp_info_pane_t2

0x8ed9,	// (0x00013fd5) listscroll_midp_info_pane_t3_ParamLimits

0x8ed9,	// (0x00013fd5) listscroll_midp_info_pane_t3

0x8f13,	// (0x0001400f) listscroll_midp_info_pane_t4_ParamLimits

0x8f13,	// (0x0001400f) listscroll_midp_info_pane_t4

0x0003,

0xf859,	// (0x0001a955) listscroll_midp_info_pane_t_ParamLimits

0xf859,	// (0x0001a955) listscroll_midp_info_pane_t

0x70be,	// (0x000121ba) scroll_pane_cp21

0x8e21,	// (0x00013f1d) form_midp_field_choice_group_pane

0x8e2a,	// (0x00013f26) form_midp_field_text_pane

0x8e69,	// (0x00013f65) form_midp_field_time_pane

0x8e71,	// (0x00013f6d) form_midp_gauge_slider_pane

0x8e7a,	// (0x00013f76) form_midp_gauge_wait_pane

0x5f00,	// (0x00010ffc) form_midp_image_pane

0x1a2f,	// (0x0000cb2b) list_single_midp_pane_ParamLimits

0x1a2f,	// (0x0000cb2b) list_single_midp_pane

0x1a0d,	// (0x0000cb09) form_midp_field_text_pane_t1

0x8b8d,	// (0x00013c89) input_focus_pane_cp050

0x8de1,	// (0x00013edd) list_midp_form_text_pane

0x8d79,	// (0x00013e75) form_midp_field_choice_group_pane_t1

0x8d87,	// (0x00013e83) input_focus_pane_cp051

0x8d9b,	// (0x00013e97) list_midp_choice_pane

0x5f00,	// (0x00010ffc) status_idle_pane

0x8d5d,	// (0x00013e59) form_midp_field_time_pane_t1

0x5ef6,	// (0x00010ff2) wait_anim_pane_g2_copy1

0x8d6b,	// (0x00013e67) form_midp_field_time_pane_t2

0x0001,

0x7d35,	// (0x00012e31) aid_navinavi_width_2_pane

0xf854,	// (0x0001a950) form_midp_field_time_pane_t

0x5f00,	// (0x00010ffc) input_focus_pane_cp052

0x5f00,	// (0x00010ffc) bg_input_focus_pane_cp040

0x8d1d,	// (0x00013e19) form_midp_gauge_slider_pane_t1

0x8d2b,	// (0x00013e27) form_midp_gauge_slider_pane_t2

0x19f1,	// (0x0000caed) form_midp_gauge_slider_pane_t3

0x19ff,	// (0x0000cafb) form_midp_gauge_slider_pane_t4

0x0003,

0xf84b,	// (0x0001a947) form_midp_gauge_slider_pane_t

0x8d55,	// (0x00013e51) form_midp_slider_pane

0x5fe0,	// (0x000110dc) bg_input_focus_pane_cp041_ParamLimits

0x5fe0,	// (0x000110dc) bg_input_focus_pane_cp041

0x8cea,	// (0x00013de6) form_midp_gauge_wait_pane_t1_ParamLimits

0x8cea,	// (0x00013de6) form_midp_gauge_wait_pane_t1

0x8cfc,	// (0x00013df8) form_midp_gauge_wait_pane_t2_ParamLimits

0x8cfc,	// (0x00013df8) form_midp_gauge_wait_pane_t2

0x0001,

0xf846,	// (0x0001a942) form_midp_gauge_wait_pane_t_ParamLimits

0xf846,	// (0x0001a942) form_midp_gauge_wait_pane_t

0x8d0e,	// (0x00013e0a) form_midp_wait_pane_ParamLimits

0x8d0e,	// (0x00013e0a) form_midp_wait_pane

0x8cb4,	// (0x00013db0) form_midp_image_pane_g1

0x8cbd,	// (0x00013db9) form_midp_image_pane_t1

0x8ccc,	// (0x00013dc8) form_midp_image_pane_t2

0x8cdb,	// (0x00013dd7) form_midp_image_pane_t3

0x0002,

0xf83f,	// (0x0001a93b) form_midp_image_pane_t

0x8c9c,	// (0x00013d98) list_single_midp_pane_g1

0x8ca5,	// (0x00013da1) list_single_midp_pane_t1

0x19dc,	// (0x0000cad8) list_midp_form_item_pane_ParamLimits

0x19dc,	// (0x0000cad8) list_midp_form_item_pane

0x7cdd,	// (0x00012dd9) list_midp_form_item_pane_t1

0x7cec,	// (0x00012de8) midp_ticker_pane_g1

0x7cf8,	// (0x00012df4) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0001a88f) midp_ticker_pane_g

0x0cf0,	// (0x0000bdec) midp_ticker_pane_t1

0x1ed8,	// (0x0000cfd4) midp_editing_number_pane_t1

0xa0cf,	// (0x000151cb) midp_editing_number_pane

0xa0de,	// (0x000151da) midp_ticker_pane

0x9e35,	// (0x00014f31) ai_message_heading_pane

0x5f00,	// (0x00010ffc) bg_popup_window_pane_cp14

0x9e3d,	// (0x00014f39) listscroll_ai_message_pane

0x9dbf,	// (0x00014ebb) ai_message_heading_pane_g1_ParamLimits

0x9dbf,	// (0x00014ebb) ai_message_heading_pane_g1

0x9dcb,	// (0x00014ec7) ai_message_heading_pane_g2_ParamLimits

0x9dcb,	// (0x00014ec7) ai_message_heading_pane_g2

0x9dd7,	// (0x00014ed3) ai_message_heading_pane_g3_ParamLimits

0x9dd7,	// (0x00014ed3) ai_message_heading_pane_g3

0x9de3,	// (0x00014edf) ai_message_heading_pane_g4_ParamLimits

0x9de3,	// (0x00014edf) ai_message_heading_pane_g4

0x0003,

0xf980,	// (0x0001aa7c) ai_message_heading_pane_g_ParamLimits

0xf980,	// (0x0001aa7c) ai_message_heading_pane_g

0x9def,	// (0x00014eeb) ai_message_heading_pane_t1_ParamLimits

0x9def,	// (0x00014eeb) ai_message_heading_pane_t1

0x9e09,	// (0x00014f05) ai_message_heading_pane_t2_ParamLimits

0x9e09,	// (0x00014f05) ai_message_heading_pane_t2

0x0001,

0xf989,	// (0x0001aa85) ai_message_heading_pane_t_ParamLimits

0xf989,	// (0x0001aa85) ai_message_heading_pane_t

0x9e1b,	// (0x00014f17) bg_popup_heading_pane_cp1_ParamLimits

0x9e1b,	// (0x00014f17) bg_popup_heading_pane_cp1

0x9dad,	// (0x00014ea9) list_ai_message_pane_ParamLimits

0x9dad,	// (0x00014ea9) list_ai_message_pane

0x70be,	// (0x000121ba) scroll_pane_cp10

0x9d49,	// (0x00014e45) list_ai_message_pane_g1

0x9d51,	// (0x00014e4d) list_ai_message_pane_g2

0x0001,

0xf95d,	// (0x0001aa59) list_ai_message_pane_g

0x9d59,	// (0x00014e55) list_ai_message_pane_t1_ParamLimits

0x9d59,	// (0x00014e55) list_ai_message_pane_t1

0x9d6e,	// (0x00014e6a) list_ai_message_pane_t2_ParamLimits

0x9d6e,	// (0x00014e6a) list_ai_message_pane_t2

0x9d83,	// (0x00014e7f) list_ai_message_pane_t3_ParamLimits

0x9d83,	// (0x00014e7f) list_ai_message_pane_t3

0x9d98,	// (0x00014e94) list_ai_message_pane_t4_ParamLimits

0x9d98,	// (0x00014e94) list_ai_message_pane_t4

0x0003,

0xf962,	// (0x0001aa5e) list_ai_message_pane_t_ParamLimits

0xf962,	// (0x0001aa5e) list_ai_message_pane_t

0x1d08,	// (0x0000ce04) cell_ai_soft_ind_pane_ParamLimits

0x1d08,	// (0x0000ce04) cell_ai_soft_ind_pane

0x7d16,	// (0x00012e12) cell_ai_soft_ind_pane_g1_ParamLimits

0x7d16,	// (0x00012e12) cell_ai_soft_ind_pane_g1

0x5f00,	// (0x00010ffc) grid_highlight_cp1

0x7d23,	// (0x00012e1f) text_secondary_cp56_ParamLimits

0x7d23,	// (0x00012e1f) text_secondary_cp56

0x9d09,	// (0x00014e05) example_general_pane_ParamLimits

0x9d09,	// (0x00014e05) example_general_pane

0x9d15,	// (0x00014e11) example_parent_pane_g1_ParamLimits

0x9d15,	// (0x00014e11) example_parent_pane_g1

0x9d21,	// (0x00014e1d) example_parent_pane_t1_ParamLimits

0x9d21,	// (0x00014e1d) example_parent_pane_t1

0x1241,	// (0x0000c33d) popup_preview_text_window_ParamLimits

0x1241,	// (0x0000c33d) popup_preview_text_window

0x7b42,	// (0x00012c3e) list_single_pane_cp2_g4

0x632b,	// (0x00011427) bg_popup_preview_window_pane_ParamLimits

0x632b,	// (0x00011427) bg_popup_preview_window_pane

0x9a40,	// (0x00014b3c) popup_preview_text_window_t1_ParamLimits

0x9a40,	// (0x00014b3c) popup_preview_text_window_t1

0x9a5e,	// (0x00014b5a) popup_preview_text_window_t2_ParamLimits

0x9a5e,	// (0x00014b5a) popup_preview_text_window_t2

0x9aa7,	// (0x00014ba3) popup_preview_text_window_t3_ParamLimits

0x9aa7,	// (0x00014ba3) popup_preview_text_window_t3

0x9aec,	// (0x00014be8) popup_preview_text_window_t4_ParamLimits

0x9aec,	// (0x00014be8) popup_preview_text_window_t4

0x0004,

0xf931,	// (0x0001aa2d) popup_preview_text_window_t_ParamLimits

0xf931,	// (0x0001aa2d) popup_preview_text_window_t

0x9b6a,	// (0x00014c66) scroll_pane_cp11

0x8a73,	// (0x00013b6f) bg_popup_preview_window_pane_g1

0x9a00,	// (0x00014afc) bg_popup_preview_window_pane_g2

0x9a08,	// (0x00014b04) bg_popup_preview_window_pane_g3

0x9a10,	// (0x00014b0c) bg_popup_preview_window_pane_g4

0x9a18,	// (0x00014b14) bg_popup_preview_window_pane_g5

0x9a20,	// (0x00014b1c) bg_popup_preview_window_pane_g6

0x9a28,	// (0x00014b24) bg_popup_preview_window_pane_g7

0x9a30,	// (0x00014b2c) bg_popup_preview_window_pane_g8

0x42c1,	// (0x0000f3bd) aid_popup_width_pane

0x11bd,	// (0x0000c2b9) popup_midp_note_alarm_window_ParamLimits

0x11bd,	// (0x0000c2b9) popup_midp_note_alarm_window

0x6d99,	// (0x00011e95) data_form_pane_ParamLimits

0x0853,	// (0x0000b94f) form_field_data_pane_g1

0x085d,	// (0x0000b959) form_field_data_pane_t1_ParamLimits

0x6dc7,	// (0x00011ec3) input_focus_pane_ParamLimits

0x6dd5,	// (0x00011ed1) data_form_wide_pane_ParamLimits

0x6de1,	// (0x00011edd) form_field_data_wide_pane_g1

0x6e0d,	// (0x00011f09) form_field_data_wide_pane_t1_ParamLimits

0x65d7,	// (0x000116d3) input_focus_pane_cp6_ParamLimits

0x09c1,	// (0x0000babd) input_popup_find_pane_g1_ParamLimits

0x09c1,	// (0x0000babd) input_popup_find_pane_g1

0x4835,	// (0x0000f931) aid_navi_side_left_pane

0x484a,	// (0x0000f946) aid_navi_side_right_pane

0x9413,	// (0x0001450f) bg_popup_window_pane_cp30_ParamLimits

0x9413,	// (0x0001450f) bg_popup_window_pane_cp30

0x948d,	// (0x00014589) popup_midp_note_alarm_window_g1_ParamLimits

0x948d,	// (0x00014589) popup_midp_note_alarm_window_g1

0x94bd,	// (0x000145b9) popup_midp_note_alarm_window_t1_ParamLimits

0x94bd,	// (0x000145b9) popup_midp_note_alarm_window_t1

0x955e,	// (0x0001465a) popup_midp_note_alarm_window_t2_ParamLimits

0x955e,	// (0x0001465a) popup_midp_note_alarm_window_t2

0x960c,	// (0x00014708) popup_midp_note_alarm_window_t3_ParamLimits

0x960c,	// (0x00014708) popup_midp_note_alarm_window_t3

0x963e,	// (0x0001473a) popup_midp_note_alarm_window_t4_ParamLimits

0x963e,	// (0x0001473a) popup_midp_note_alarm_window_t4

0x9664,	// (0x00014760) popup_midp_note_alarm_window_t5_ParamLimits

0x9664,	// (0x00014760) popup_midp_note_alarm_window_t5

0x000a,

0xf8ce,	// (0x0001a9ca) popup_midp_note_alarm_window_t_ParamLimits

0xf8ce,	// (0x0001a9ca) popup_midp_note_alarm_window_t

0x9710,	// (0x0001480c) wait_bar_pane_cp1_ParamLimits

0x9710,	// (0x0001480c) wait_bar_pane_cp1

0x5f00,	// (0x00010ffc) wait_anim_pane_copy1

0x5f00,	// (0x00010ffc) wait_border_pane_copy1

0x90f9,	// (0x000141f5) wait_border_pane_g1_copy1

0x6e27,	// (0x00011f23) form_field_popup_pane_g1

0x0877,	// (0x0000b973) form_field_popup_pane_t1_ParamLimits

0x6dc7,	// (0x00011ec3) input_focus_pane_cp7_ParamLimits

0x6e47,	// (0x00011f43) list_form_pane_ParamLimits

0x6e53,	// (0x00011f4f) form_field_popup_wide_pane_g1

0x6e5b,	// (0x00011f57) form_field_popup_wide_pane_t1_ParamLimits

0x6dc7,	// (0x00011ec3) input_focus_pane_cp8_ParamLimits

0x6e70,	// (0x00011f6c) list_form_wide_pane_ParamLimits

0xa2eb,	// (0x000153e7) aid_size_cell_graphic_pane

0x08f6,	// (0x0000b9f2) data_form_pane_t1_ParamLimits

0x1ebc,	// (0x0000cfb8) data_form_wide_pane_t1_ParamLimits

0x15f6,	// (0x0000c6f2) bg_status_flat_pane

0x008f,	// (0x0000b18b) title_pane_t1_ParamLimits

0x5fa8,	// (0x000110a4) title_pane_t2_ParamLimits

0x5fce,	// (0x000110ca) title_pane_t3_ParamLimits

0xf59b,	// (0x0001a697) title_pane_t_ParamLimits

0x753a,	// (0x00012636) level_1_signal_ParamLimits

0x7547,	// (0x00012643) level_2_signal_ParamLimits

0x7554,	// (0x00012650) level_3_signal_ParamLimits

0x7561,	// (0x0001265d) level_4_signal_ParamLimits

0x756e,	// (0x0001266a) level_5_signal_ParamLimits

0x757b,	// (0x00012677) level_6_signal_ParamLimits

0x7588,	// (0x00012684) level_7_signal_ParamLimits

0x753a,	// (0x00012636) level_1_battery_ParamLimits

0x7547,	// (0x00012643) level_2_battery_ParamLimits

0x7554,	// (0x00012650) level_3_battery_ParamLimits

0x7561,	// (0x0001265d) level_4_battery_ParamLimits

0x756e,	// (0x0001266a) level_5_battery_ParamLimits

0x757b,	// (0x00012677) level_6_battery_ParamLimits

0x7588,	// (0x00012684) level_7_battery_ParamLimits

0x9318,	// (0x00014414) bg_status_flat_pane_g1

0x9320,	// (0x0001441c) bg_status_flat_pane_g2

0x9328,	// (0x00014424) bg_status_flat_pane_g3

0x9330,	// (0x0001442c) bg_status_flat_pane_g4

0x9338,	// (0x00014434) bg_status_flat_pane_g5

0x9340,	// (0x0001443c) bg_status_flat_pane_g6

0x9348,	// (0x00014444) bg_status_flat_pane_g7

0x0123,	// (0x0000b21f) tabs_3_active_pane_t1_ParamLimits

0x0123,	// (0x0000b21f) tabs_3_passive_pane_t1_ParamLimits

0x013d,	// (0x0000b239) tabs_4_active_pane_t1_ParamLimits

0x013d,	// (0x0000b239) tabs_4_1_passive_pane_t1_ParamLimits

0x09d7,	// (0x0000bad3) tabs_2_active_pane_t1_ParamLimits

0x09d7,	// (0x0000bad3) tabs_2_passive_pane_t1_ParamLimits

0x5fe0,	// (0x000110dc) bg_active_tab_pane_cp4_ParamLimits

0x09e9,	// (0x0000bae5) tabs_2_long_active_pane_t1_ParamLimits

0x7f9b,	// (0x00013097) bg_passive_tab_pane_cp4_ParamLimits

0x4e07,	// (0x0000ff03) list_single_midp_graphic_pane_t1_ParamLimits

0x5fe0,	// (0x000110dc) bg_active_tab_pane_cp5_ParamLimits

0x09fc,	// (0x0000baf8) tabs_3_long_active_pane_t1_ParamLimits

0x7f9b,	// (0x00013097) bg_passive_tab_pane_cp5_ParamLimits

0x4e07,	// (0x0000ff03) list_single_midp_graphic_pane_t1

0x15f6,	// (0x0000c6f2) bg_status_flat_pane_ParamLimits

0x86d0,	// (0x000137cc) indicator_pane_cp2_ParamLimits

0x86d0,	// (0x000137cc) indicator_pane_cp2

0x176d,	// (0x0000c869) navi_pane_srt_ParamLimits

0x176d,	// (0x0000c869) navi_pane_srt

0x8818,	// (0x00013914) popup_clock_digital_analogue_window_cp1

0x60d7,	// (0x000111d3) indicator_pane_t1

0x7c11,	// (0x00012d0d) copy_highlight_pane

0x7c11,	// (0x00012d0d) cursor_graphics_pane

0x7c11,	// (0x00012d0d) graphic_within_text_pane

0x7c11,	// (0x00012d0d) link_highlight_pane

0x9b2d,	// (0x00014c29) popup_preview_text_window_t5_ParamLimits

0x9b2d,	// (0x00014c29) popup_preview_text_window_t5

0x7d3d,	// (0x00012e39) cursor_digital_pane

0x7d3d,	// (0x00012e39) cursor_primary_pane

0x7d4e,	// (0x00012e4a) cursor_primary_small_pane

0x7d56,	// (0x00012e52) cursor_secondary_pane

0x7d5e,	// (0x00012e5a) cursor_title_pane

0x7d3d,	// (0x00012e39) link_highlight_digital_pane

0x7d45,	// (0x00012e41) link_highlight_primary_pane

0x7d4e,	// (0x00012e4a) link_highlight_primary_small_pane

0x7d56,	// (0x00012e52) link_highlight_secondary_pane

0x7d5e,	// (0x00012e5a) link_highlight_title_pane

0x7d3d,	// (0x00012e39) copy_highlight_digital_pane

0x7d3d,	// (0x00012e39) copy_highlight_primary_pane

0x7d4e,	// (0x00012e4a) copy_highlight_primary_small_pane

0x7d56,	// (0x00012e52) copy_highlight_secondary_pane

0x7d5e,	// (0x00012e5a) copy_highlight_title_pane

0x7d56,	// (0x00012e52) graphic_text_digital_pane

0x93b6,	// (0x000144b2) graphic_text_primary_pane

0x93bf,	// (0x000144bb) graphic_text_primary_small_pane

0x7d4e,	// (0x00012e4a) graphic_text_secondary_pane

0x7d3d,	// (0x00012e39) graphic_text_title_pane

0x0d02,	// (0x0000bdfe) cursor_primary_pane_g1

0x93a8,	// (0x000144a4) cursor_text_primary_t1

0x1a84,	// (0x0000cb80) cursor_primary_small_pane_g1

0x939a,	// (0x00014496) cursor_text_primary_small_t1

0x1a7a,	// (0x0000cb76) cursor_primary_small_pane_g1_copy1

0x9382,	// (0x0001447e) cursor_text_primary_small_t1_copy1

0x9360,	// (0x0001445c) cursor_text_title_t1

0x1a70,	// (0x0000cb6c) cursor_title_pane_g1

0x0d02,	// (0x0000bdfe) cursor_digital_pane_g1

0x7d70,	// (0x00012e6c) cursor_text_digital_t1

0x7d95,	// (0x00012e91) link_highlight_primary_pane_g1

0x9309,	// (0x00014405) link_highlight_primary_pane_t1

0x7d7e,	// (0x00012e7a) link_highlight_primary_small_pane_g1

0x7d86,	// (0x00012e82) link_highlight_primary_small_pane_t1

0x7d95,	// (0x00012e91) link_highlight_secondary_pane_g1

0x7d9d,	// (0x00012e99) link_highlight_secondary_pane_t1

0x927d,	// (0x00014379) link_highlight_title_pane_g1

0x9285,	// (0x00014381) link_highlight_title_pane_t1

0x9266,	// (0x00014362) link_highlight_digital_pane_g1

0x926e,	// (0x0001436a) link_highlight_digital_pane_t1

0x913e,	// (0x0001423a) copy_highlight_primary_pane_g1

0x9146,	// (0x00014242) copy_highlight_primary_pane_t1

0x9118,	// (0x00014214) copy_highlight_primary_small_pane_g1

0x912f,	// (0x0001422b) copy_highlight_primary_small_pane_t1

0x7dac,	// (0x00012ea8) copy_highlight_secondary_pane_g1

0x7db4,	// (0x00012eb0) copy_highlight_secondary_pane_t1

0x9118,	// (0x00014214) copy_highlight_title_pane_g1

0x9120,	// (0x0001421c) copy_highlight_title_pane_t1

0x913e,	// (0x0001423a) copy_highlight_digital_pane_g1

0xa4b5,	// (0x000155b1) copy_highlight_digital_pane_t1

0xa409,	// (0x00015505) graphic_text_primary_pane_g1

0xa499,	// (0x00015595) graphic_text_primary_pane_t1

0xa4a7,	// (0x000155a3) graphic_text_primary_pane_t2

0x0001,

0xf9fd,	// (0x0001aaf9) graphic_text_primary_pane_t

0xa475,	// (0x00015571) graphic_text_primary_small_pane_g1

0xa47d,	// (0x00015579) graphic_text_primary_small_pane_t1

0xa48b,	// (0x00015587) graphic_text_primary_small_pane_t2

0x0001,

0xf9f8,	// (0x0001aaf4) graphic_text_primary_small_pane_t

0xa451,	// (0x0001554d) graphic_text_secondary_pane_g1

0xa459,	// (0x00015555) graphic_text_secondary_pane_t1

0xa467,	// (0x00015563) graphic_text_secondary_pane_t2

0x0001,

0xf9f3,	// (0x0001aaef) graphic_text_secondary_pane_t

0xa42d,	// (0x00015529) graphic_text_title_pane_g1

0xa435,	// (0x00015531) graphic_text_title_pane_t1

0xa443,	// (0x0001553f) graphic_text_title_pane_t2

0x0001,

0xf9ee,	// (0x0001aaea) graphic_text_title_pane_t

0xa409,	// (0x00015505) graphic_text_digital_pane_g1

0xa411,	// (0x0001550d) graphic_text_digital_pane_t1

0xa41f,	// (0x0001551b) graphic_text_digital_pane_t2

0x0001,

0xf9e9,	// (0x0001aae5) graphic_text_digital_pane_t

0x5fe0,	// (0x000110dc) navi_icon_pane_srt_ParamLimits

0x5fe0,	// (0x000110dc) navi_icon_pane_srt

0x5f00,	// (0x00010ffc) navi_midp_pane_srt

0x5f00,	// (0x00010ffc) navi_navi_pane_srt

0x5fe0,	// (0x000110dc) navi_text_pane_srt_ParamLimits

0x5fe0,	// (0x000110dc) navi_text_pane_srt

0xa3d4,	// (0x000154d0) navi_navi_icon_text_pane_srt

0xa3dc,	// (0x000154d8) navi_navi_pane_srt_g1_ParamLimits

0xa3dc,	// (0x000154d8) navi_navi_pane_srt_g1

0xa3ee,	// (0x000154ea) navi_navi_pane_srt_g2_ParamLimits

0xa3ee,	// (0x000154ea) navi_navi_pane_srt_g2

0x0001,

0xf9e4,	// (0x0001aae0) navi_navi_pane_srt_g_ParamLimits

0xf9e4,	// (0x0001aae0) navi_navi_pane_srt_g

0xa400,	// (0x000154fc) navi_navi_tabs_pane_srt

0xa3d4,	// (0x000154d0) navi_navi_text_pane_srt

0xa3d4,	// (0x000154d0) navi_navi_volume_pane_srt

0xa3c5,	// (0x000154c1) navi_navi_text_pane_srt_t1

0x5181,	// (0x0001027d) navi_navi_volume_pane_srt_g1

0x5189,	// (0x00010285) volume_small_pane_srt_ParamLimits

0x5189,	// (0x00010285) volume_small_pane_srt

0x4b15,	// (0x0000fc11) volume_small_pane_srt_g1_ParamLimits

0x4b15,	// (0x0000fc11) volume_small_pane_srt_g1

0x4b25,	// (0x0000fc21) volume_small_pane_srt_g2_ParamLimits

0x4b25,	// (0x0000fc21) volume_small_pane_srt_g2

0x4b36,	// (0x0000fc32) volume_small_pane_srt_g3_ParamLimits

0x4b36,	// (0x0000fc32) volume_small_pane_srt_g3

0x4b47,	// (0x0000fc43) volume_small_pane_srt_g4_ParamLimits

0x4b47,	// (0x0000fc43) volume_small_pane_srt_g4

0x4b58,	// (0x0000fc54) volume_small_pane_srt_g5_ParamLimits

0x4b58,	// (0x0000fc54) volume_small_pane_srt_g5

0x4b69,	// (0x0000fc65) volume_small_pane_srt_g6_ParamLimits

0x4b69,	// (0x0000fc65) volume_small_pane_srt_g6

0x4b7a,	// (0x0000fc76) volume_small_pane_srt_g7_ParamLimits

0x4b7a,	// (0x0000fc76) volume_small_pane_srt_g7

0x4b8b,	// (0x0000fc87) volume_small_pane_srt_g8_ParamLimits

0x4b8b,	// (0x0000fc87) volume_small_pane_srt_g8

0x4b9c,	// (0x0000fc98) volume_small_pane_srt_g9_ParamLimits

0x4b9c,	// (0x0000fc98) volume_small_pane_srt_g9

0x4bad,	// (0x0000fca9) volume_small_pane_srt_g10_ParamLimits

0x4bad,	// (0x0000fca9) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0001a894) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0001a894) volume_small_pane_srt_g

0x63d4,	// (0x000114d0) query_popup_data_pane_cp2

0xa3ab,	// (0x000154a7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa3ab,	// (0x000154a7) navi_navi_icon_text_pane_srt_t1

0x93b6,	// (0x000144b2) navi_tabs_2_long_pane_srt

0x93b6,	// (0x000144b2) navi_tabs_2_pane_srt

0x93b6,	// (0x000144b2) navi_tabs_3_long_pane_srt

0x93b6,	// (0x000144b2) navi_tabs_3_pane_srt

0x93b6,	// (0x000144b2) navi_tabs_4_pane_srt

0x5161,	// (0x0001025d) tabs_2_active_pane_srt_ParamLimits

0x5161,	// (0x0001025d) tabs_2_active_pane_srt

0x5171,	// (0x0001026d) tabs_2_passive_pane_srt_ParamLimits

0x5171,	// (0x0001026d) tabs_2_passive_pane_srt

0x8b8d,	// (0x00013c89) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8b8d,	// (0x00013c89) bg_passive_tab_pane_cp1_srt

0xa377,	// (0x00015473) bg_passive_tab_pane_g1_cp1_srt

0x785e,	// (0x0001295a) bg_passive_tab_pane_g2_cp1_srt

0xa380,	// (0x0001547c) bg_passive_tab_pane_g3_cp1_srt

0x6275,	// (0x00011371) bg_active_tab_pane_cp1_srt_ParamLimits

0x6275,	// (0x00011371) bg_active_tab_pane_cp1_srt

0xa389,	// (0x00015485) tabs_2_active_pane_srt_g1

0x1fec,	// (0x0000d0e8) tabs_2_active_pane_srt_t1_ParamLimits

0x1fec,	// (0x0000d0e8) tabs_2_active_pane_srt_t1

0xa377,	// (0x00015473) bg_active_tab_pane_g1_cp1_srt

0x785e,	// (0x0001295a) bg_active_tab_pane_g2_cp1_srt

0xa380,	// (0x0001547c) bg_active_tab_pane_g3_cp1_srt

0x512e,	// (0x0001022a) tabs_3_active_pane_srt_ParamLimits

0x512e,	// (0x0001022a) tabs_3_active_pane_srt

0x513f,	// (0x0001023b) tabs_3_passive_pane_cp_srt_ParamLimits

0x513f,	// (0x0001023b) tabs_3_passive_pane_cp_srt

0x5150,	// (0x0001024c) tabs_3_passive_pane_srt_ParamLimits

0x5150,	// (0x0001024c) tabs_3_passive_pane_srt

0x8b8d,	// (0x00013c89) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8b8d,	// (0x00013c89) bg_passive_tab_pane_cp2_srt

0x7dc3,	// (0x00012ebf) bg_passive_tab_pane_g1_cp2_srt

0x785e,	// (0x0001295a) bg_passive_tab_pane_g2_cp2_srt

0x7dcc,	// (0x00012ec8) bg_passive_tab_pane_g3_cp2_srt

0x6275,	// (0x00011371) bg_active_tab_pane_cp2_srt_ParamLimits

0x6275,	// (0x00011371) bg_active_tab_pane_cp2_srt

0xa35d,	// (0x00015459) tabs_3_active_pane_srt_g1

0x1fd6,	// (0x0000d0d2) tabs_3_active_pane_srt_t1_ParamLimits

0x1fd6,	// (0x0000d0d2) tabs_3_active_pane_srt_t1

0x7dc3,	// (0x00012ebf) bg_active_tab_pane_g1_cp2_srt

0x785e,	// (0x0001295a) bg_active_tab_pane_g2_cp2_srt

0x7dcc,	// (0x00012ec8) bg_active_tab_pane_g3_cp2_srt

0x50e6,	// (0x000101e2) tabs_4_active_pane_srt_ParamLimits

0x50e6,	// (0x000101e2) tabs_4_active_pane_srt

0x50f8,	// (0x000101f4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x50f8,	// (0x000101f4) tabs_4_passive_pane_cp2_srt

0x7f21,	// (0x0001301d) aid_size_cell_toolbar

0x9f15,	// (0x00015011) main_idle_act_pane_ParamLimits

0x8140,	// (0x0001323c) popup_large_graphic_colour_window_ParamLimits

0x14c1,	// (0x0000c5bd) popup_toolbar_window_ParamLimits

0x14c1,	// (0x0000c5bd) popup_toolbar_window

0xa11b,	// (0x00015217) list_single_graphic_2heading_pane_ParamLimits

0xa11b,	// (0x00015217) list_single_graphic_2heading_pane

0x72ee,	// (0x000123ea) aid_size_cell_apps_grid_lsc_pane

0x7300,	// (0x000123fc) aid_size_cell_apps_grid_prt_pane

0x7f9b,	// (0x00013097) bg_wml_button_pane_cp1_ParamLimits

0x7f9b,	// (0x00013097) bg_wml_button_pane_cp1

0x1a0d,	// (0x0000cb09) form_midp_field_text_pane_t1_ParamLimits

0x8b8d,	// (0x00013c89) input_focus_pane_cp050_ParamLimits

0x8de1,	// (0x00013edd) list_midp_form_text_pane_ParamLimits

0x8d87,	// (0x00013e83) input_focus_pane_cp051_ParamLimits

0x8d9b,	// (0x00013e97) list_midp_choice_pane_ParamLimits

0x19a8,	// (0x0000caa4) list_single_2graphic_pane_cp3_ParamLimits

0x19a8,	// (0x0000caa4) list_single_2graphic_pane_cp3

0x19bc,	// (0x0000cab8) list_single_midp_graphic_pane_ParamLimits

0x19bc,	// (0x0000cab8) list_single_midp_graphic_pane

0x4d0a,	// (0x0000fe06) list_single_graphic_2heading_pane_g1_ParamLimits

0x4d0a,	// (0x0000fe06) list_single_graphic_2heading_pane_g1

0x4d16,	// (0x0000fe12) list_single_graphic_2heading_pane_g4_ParamLimits

0x4d16,	// (0x0000fe12) list_single_graphic_2heading_pane_g4

0x4d22,	// (0x0000fe1e) list_single_graphic_2heading_pane_g5_ParamLimits

0x4d22,	// (0x0000fe1e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0001a8e7) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0001a8e7) list_single_graphic_2heading_pane_g

0x4d2e,	// (0x0000fe2a) list_single_graphic_2heading_pane_t1_ParamLimits

0x4d2e,	// (0x0000fe2a) list_single_graphic_2heading_pane_t1

0x4d42,	// (0x0000fe3e) list_single_graphic_2heading_pane_t2_ParamLimits

0x4d42,	// (0x0000fe3e) list_single_graphic_2heading_pane_t2

0x4d5e,	// (0x0000fe5a) list_single_graphic_2heading_pane_t3_ParamLimits

0x4d5e,	// (0x0000fe5a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0001a8ee) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0001a8ee) list_single_graphic_2heading_pane_t

0x8977,	// (0x00013a73) bg_popup_sub_pane_cp2

0x89a1,	// (0x00013a9d) grid_toobar_pane

0x4d76,	// (0x0000fe72) cell_toolbar_pane_ParamLimits

0x4d76,	// (0x0000fe72) cell_toolbar_pane

0x8a17,	// (0x00013b13) cell_toolbar_pane_g1_ParamLimits

0x8a17,	// (0x00013b13) cell_toolbar_pane_g1

0x8a2b,	// (0x00013b27) cell_toolbar_pane_g2_ParamLimits

0x8a2b,	// (0x00013b27) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0001a8fc) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0001a8fc) cell_toolbar_pane_g

0x8a4d,	// (0x00013b49) grid_highlight_pane_cp2_ParamLimits

0x8a4d,	// (0x00013b49) grid_highlight_pane_cp2

0x8a67,	// (0x00013b63) toolbar_button_pane

0x8a73,	// (0x00013b6f) toolbar_button_pane_g1

0x8a7b,	// (0x00013b77) toolbar_button_pane_g2

0x8a83,	// (0x00013b7f) toolbar_button_pane_g3

0x8a8b,	// (0x00013b87) toolbar_button_pane_g4

0x8a93,	// (0x00013b8f) toolbar_button_pane_g5

0x8a9b,	// (0x00013b97) toolbar_button_pane_g6

0x8aa3,	// (0x00013b9f) toolbar_button_pane_g7

0x8aab,	// (0x00013ba7) toolbar_button_pane_g8

0x8ab3,	// (0x00013baf) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0001a901) toolbar_button_pane_g

0x4dae,	// (0x0000feaa) list_single_2graphic_pane_g1_cp3_ParamLimits

0x4dae,	// (0x0000feaa) list_single_2graphic_pane_g1_cp3

0xe79c,	// (0x00019898) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe79c,	// (0x00019898) list_single_2graphic_pane_g2_cp3

0x4dcb,	// (0x0000fec7) list_single_2graphic_pane_g3_cp3

0x4dd3,	// (0x0000fecf) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4dd3,	// (0x0000fecf) list_single_2graphic_pane_g4_cp3

0x4ddf,	// (0x0000fedb) list_single_2graphic_pane_t1_cp3_ParamLimits

0x4ddf,	// (0x0000fedb) list_single_2graphic_pane_t1_cp3

0x4dfb,	// (0x0000fef7) list_single_midp_graphic_pane_g2_ParamLimits

0x4dfb,	// (0x0000fef7) list_single_midp_graphic_pane_g2

0x7f29,	// (0x00013025) aid_zoom_text_primary

0x7f31,	// (0x0001302d) aid_zoom_text_secondary

0x7e80,	// (0x00012f7c) status_small_pane_g7_ParamLimits

0x7e80,	// (0x00012f7c) status_small_pane_g7

0x7ea3,	// (0x00012f9f) status_small_pane_t1_ParamLimits

0x006b,	// (0x0000b167) title_pane_g2

0x0003,

0xf592,	// (0x0001a68e) title_pane_g

0x02f3,	// (0x0000b3ef) aid_size_cell_colour_1_pane_ParamLimits

0x02f3,	// (0x0000b3ef) aid_size_cell_colour_1_pane

0x0307,	// (0x0000b403) aid_size_cell_colour_2_pane_ParamLimits

0x0307,	// (0x0000b403) aid_size_cell_colour_2_pane

0x031b,	// (0x0000b417) aid_size_cell_colour_3_pane_ParamLimits

0x031b,	// (0x0000b417) aid_size_cell_colour_3_pane

0x032f,	// (0x0000b42b) aid_size_cell_colour_4_pane_ParamLimits

0x032f,	// (0x0000b42b) aid_size_cell_colour_4_pane

0x4771,	// (0x0000f86d) title_pane_stacon_g1_ParamLimits

0x4771,	// (0x0000f86d) title_pane_stacon_g1

0x919d,	// (0x00014299) popup_note_wait_window_g3_ParamLimits

0x919d,	// (0x00014299) popup_note_wait_window_g3

0x9213,	// (0x0001430f) popup_note_wait_window_t5_ParamLimits

0x9213,	// (0x0001430f) popup_note_wait_window_t5

0x5f00,	// (0x00010ffc) main_feb_china_hwr_fs_writing_pane

0x0ef3,	// (0x0000bfef) popup_feb_china_hwr_fs_window_ParamLimits

0x0ef3,	// (0x0000bfef) popup_feb_china_hwr_fs_window

0xe7ad,	// (0x000198a9) aid_size_cell_hwr_fs_ParamLimits

0xe7ad,	// (0x000198a9) aid_size_cell_hwr_fs

0x8b8d,	// (0x00013c89) bg_popup_sub_pane_cp3_ParamLimits

0x8b8d,	// (0x00013c89) bg_popup_sub_pane_cp3

0xe7c2,	// (0x000198be) grid_hwr_fs_pane_ParamLimits

0xe7c2,	// (0x000198be) grid_hwr_fs_pane

0x4e4a,	// (0x0000ff46) linegrid_hwr_fs_pane_ParamLimits

0x4e4a,	// (0x0000ff46) linegrid_hwr_fs_pane

0xe7da,	// (0x000198d6) cell_hwr_fs_pane_ParamLimits

0xe7da,	// (0x000198d6) cell_hwr_fs_pane

0x8b99,	// (0x00013c95) linegrid_hwr_fs_pane_g1_ParamLimits

0x8b99,	// (0x00013c95) linegrid_hwr_fs_pane_g1

0x196e,	// (0x0000ca6a) linegrid_hwr_fs_pane_g2_ParamLimits

0x196e,	// (0x0000ca6a) linegrid_hwr_fs_pane_g2

0x8bb7,	// (0x00013cb3) linegrid_hwr_fs_pane_g3_ParamLimits

0x8bb7,	// (0x00013cb3) linegrid_hwr_fs_pane_g3

0x4e7c,	// (0x0000ff78) linegrid_hwr_fs_pane_g4_ParamLimits

0x4e7c,	// (0x0000ff78) linegrid_hwr_fs_pane_g4

0x4e96,	// (0x0000ff92) linegrid_hwr_fs_pane_g5_ParamLimits

0x4e96,	// (0x0000ff92) linegrid_hwr_fs_pane_g5

0x0004,

0xf82b,	// (0x0001a927) linegrid_hwr_fs_pane_g_ParamLimits

0xf82b,	// (0x0001a927) linegrid_hwr_fs_pane_g

0x8bc3,	// (0x00013cbf) cell_hwr_fs_pane_g1_ParamLimits

0x8bc3,	// (0x00013cbf) cell_hwr_fs_pane_g1

0x88ae,	// (0x000139aa) cell_hwr_fs_pane_g2_ParamLimits

0x88ae,	// (0x000139aa) cell_hwr_fs_pane_g2

0x1980,	// (0x0000ca7c) cell_hwr_fs_pane_g3_ParamLimits

0x1980,	// (0x0000ca7c) cell_hwr_fs_pane_g3

0x198d,	// (0x0000ca89) cell_hwr_fs_pane_g4_ParamLimits

0x198d,	// (0x0000ca89) cell_hwr_fs_pane_g4

0x0003,

0xf836,	// (0x0001a932) cell_hwr_fs_pane_g_ParamLimits

0xf836,	// (0x0001a932) cell_hwr_fs_pane_g

0xe800,	// (0x000198fc) cell_hwr_fs_pane_t1

0x5f00,	// (0x00010ffc) grid_highlight_pane_cp6

0x5f00,	// (0x00010ffc) main_idle_act2_pane

0x70a5,	// (0x000121a1) aid_inside_area_popup_secondary

0x1bde,	// (0x0000ccda) aid_inside_area_window_primary_ParamLimits

0x1bde,	// (0x0000ccda) aid_inside_area_window_primary

0xa4c4,	// (0x000155c0) ai2_news_ticker_pane

0xa4cc,	// (0x000155c8) aid_size_cell_ai1_link_ParamLimits

0xa4cc,	// (0x000155c8) aid_size_cell_ai1_link

0x2002,	// (0x0000d0fe) popup_ai2_data_window_ParamLimits

0x2002,	// (0x0000d0fe) popup_ai2_data_window

0xa4fc,	// (0x000155f8) popup_ai2_link_window_ParamLimits

0xa4fc,	// (0x000155f8) popup_ai2_link_window

0x8b8d,	// (0x00013c89) bg_popup_sub_pane_cp4_ParamLimits

0x8b8d,	// (0x00013c89) bg_popup_sub_pane_cp4

0xa510,	// (0x0001560c) grid_ai2_link_pane_ParamLimits

0xa510,	// (0x0001560c) grid_ai2_link_pane

0xa527,	// (0x00015623) popup_ai2_link_window_g1_ParamLimits

0xa527,	// (0x00015623) popup_ai2_link_window_g1

0xa533,	// (0x0001562f) popup_ai2_link_window_g2_ParamLimits

0xa533,	// (0x0001562f) popup_ai2_link_window_g2

0x0001,

0xfa02,	// (0x0001aafe) popup_ai2_link_window_g_ParamLimits

0xfa02,	// (0x0001aafe) popup_ai2_link_window_g

0xa542,	// (0x0001563e) ai2_mp_button_pane

0xa54a,	// (0x00015646) ai2_mp_volume_pane

0x8d87,	// (0x00013e83) bg_popup_sub_pane_cp5_ParamLimits

0x8d87,	// (0x00013e83) bg_popup_sub_pane_cp5

0xa552,	// (0x0001564e) heading_ai2_gene_pane_ParamLimits

0xa552,	// (0x0001564e) heading_ai2_gene_pane

0xa55e,	// (0x0001565a) list_ai2_gene_pane_ParamLimits

0xa55e,	// (0x0001565a) list_ai2_gene_pane

0xa5a6,	// (0x000156a2) cell_ai2_link_pane_ParamLimits

0xa5a6,	// (0x000156a2) cell_ai2_link_pane

0xa5bc,	// (0x000156b8) cell_ai2_link_pane_g1

0x5f00,	// (0x00010ffc) grid_highlight_pane_cp7

0x519e,	// (0x0001029a) ai2_mp_volume_pane_g1

0xa68c,	// (0x00015788) ai2_mp_volume_pane_g2

0x202c,	// (0x0000d128) list_ai2_gene_pane_t1

0xa694,	// (0x00015790) ai2_mp_volume_pane_g3

0x0002,

0xfa1b,	// (0x0001ab17) ai2_mp_volume_pane_g

0x51a6,	// (0x000102a2) volume_small_pane_cp3

0xa69c,	// (0x00015798) aid_size_cell_ai2_button

0xa6a4,	// (0x000157a0) grid_ai2_button_pane

0xa6ad,	// (0x000157a9) cell_ai2_button_pane_ParamLimits

0xa6ad,	// (0x000157a9) cell_ai2_button_pane

0x5ef6,	// (0x00010ff2) cell_ai2_button_pane_g1

0x5f00,	// (0x00010ffc) grid_highlight_pane_cp8

0xa64c,	// (0x00015748) ai2_gene_pane_t1_ParamLimits

0xa64c,	// (0x00015748) ai2_gene_pane_t1

0x0e69,	// (0x0000bf65) aid_height_parent_landscape

0x1d68,	// (0x0000ce64) aid_height_set_list

0x9f15,	// (0x00015011) aid_size_parent

0xa2eb,	// (0x000153e7) aid_size_cell_graphic_pane_ParamLimits

0xa56e,	// (0x0001566a) popup_ai2_data_window_g1_ParamLimits

0xa56e,	// (0x0001566a) popup_ai2_data_window_g1

0xa57a,	// (0x00015676) ai2_news_ticker_pane_g1

0xa582,	// (0x0001567e) ai2_news_ticker_pane_g2

0x0001,

0xfa07,	// (0x0001ab03) ai2_news_ticker_pane_g

0xa58a,	// (0x00015686) ai2_news_ticker_pane_t1

0xa598,	// (0x00015694) ai2_news_ticker_pane_t2

0x0001,

0xfa0c,	// (0x0001ab08) ai2_news_ticker_pane_t

0xa5c5,	// (0x000156c1) heading_ai2_gene_pane_g1

0xa5cd,	// (0x000156c9) heading_ai2_gene_pane_t1_ParamLimits

0xa5cd,	// (0x000156c9) heading_ai2_gene_pane_t1

0xa5e2,	// (0x000156de) list_highlight_pane_cp6

0x2016,	// (0x0000d112) ai2_gene_pane_ParamLimits

0x2016,	// (0x0000d112) ai2_gene_pane

0x203a,	// (0x0000d136) list_ai2_gene_pane_t2

0x0001,

0xfa11,	// (0x0001ab0d) list_ai2_gene_pane_t

0xa61d,	// (0x00015719) list_highlight_pane_cp8_ParamLimits

0xa61d,	// (0x00015719) list_highlight_pane_cp8

0xa62e,	// (0x0001572a) ai2_gene_pane_g1_ParamLimits

0xa62e,	// (0x0001572a) ai2_gene_pane_g1

0xa640,	// (0x0001573c) ai2_gene_pane_g2_ParamLimits

0xa640,	// (0x0001573c) ai2_gene_pane_g2

0x0001,

0xfa16,	// (0x0001ab12) ai2_gene_pane_g_ParamLimits

0xfa16,	// (0x0001ab12) ai2_gene_pane_g

0x67fc,	// (0x000118f8) scroll_pane_cp12

0xe759,	// (0x00019855) control_pane_t3_ParamLimits

0xe759,	// (0x00019855) control_pane_t3

0x7e94,	// (0x00012f90) status_small_pane_g8_ParamLimits

0x7e94,	// (0x00012f90) status_small_pane_g8

0x0f88,	// (0x0000c084) popup_find_window_ParamLimits

0x11f7,	// (0x0000c2f3) popup_note_image_window_ParamLimits

0x89dd,	// (0x00013ad9) list_double2_graphic_pane_vc_g1_ParamLimits

0x89dd,	// (0x00013ad9) list_double2_graphic_pane_vc_g1

0x89e9,	// (0x00013ae5) list_double2_graphic_pane_vc_g2_ParamLimits

0x89e9,	// (0x00013ae5) list_double2_graphic_pane_vc_g2

0x89f5,	// (0x00013af1) list_double2_graphic_pane_vc_g3_ParamLimits

0x89f5,	// (0x00013af1) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0001a8f5) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001a8f5) list_double2_graphic_pane_vc_g

0x8a01,	// (0x00013afd) list_double2_graphic_pane_vc_t1_ParamLimits

0x8a01,	// (0x00013afd) list_double2_graphic_pane_vc_t1

0x89e9,	// (0x00013ae5) list_single_heading_pane_vc_g1_ParamLimits

0x89e9,	// (0x00013ae5) list_single_heading_pane_vc_g1

0x89f5,	// (0x00013af1) list_single_heading_pane_vc_g2_ParamLimits

0x89f5,	// (0x00013af1) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a708) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a708) list_single_heading_pane_vc_g

0x8abb,	// (0x00013bb7) list_single_heading_pane_vc_t1_ParamLimits

0x8abb,	// (0x00013bb7) list_single_heading_pane_vc_t1

0x8ad1,	// (0x00013bcd) list_single_heading_pane_vc_t2_ParamLimits

0x8ad1,	// (0x00013bcd) list_single_heading_pane_vc_t2

0x0001,

0xf81a,	// (0x0001a916) list_single_heading_pane_vc_t_ParamLimits

0xf81a,	// (0x0001a916) list_single_heading_pane_vc_t

0x8ae5,	// (0x00013be1) list_setting_number_pane_vc_g1_ParamLimits

0x8ae5,	// (0x00013be1) list_setting_number_pane_vc_g1

0x8af1,	// (0x00013bed) list_setting_number_pane_vc_g2_ParamLimits

0x8af1,	// (0x00013bed) list_setting_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0001a91b) list_setting_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0001a91b) list_setting_number_pane_vc_g

0x8afd,	// (0x00013bf9) list_setting_number_pane_vc_t1_ParamLimits

0x8afd,	// (0x00013bf9) list_setting_number_pane_vc_t1

0x8b11,	// (0x00013c0d) list_setting_number_pane_vc_t2_ParamLimits

0x8b11,	// (0x00013c0d) list_setting_number_pane_vc_t2

0x8b2d,	// (0x00013c29) list_setting_number_pane_vc_t3_ParamLimits

0x8b2d,	// (0x00013c29) list_setting_number_pane_vc_t3

0x0002,

0xf824,	// (0x0001a920) list_setting_number_pane_vc_t_ParamLimits

0xf824,	// (0x0001a920) list_setting_number_pane_vc_t

0x8b53,	// (0x00013c4f) set_value_pane_vc_ParamLimits

0x8b53,	// (0x00013c4f) set_value_pane_vc

0xa11b,	// (0x00015217) list_double2_graphic_pane_vc_ParamLimits

0xa11b,	// (0x00015217) list_double2_graphic_pane_vc

0xa12d,	// (0x00015229) list_double2_large_graphic_pane_vc_ParamLimits

0xa12d,	// (0x00015229) list_double2_large_graphic_pane_vc

0xa11b,	// (0x00015217) list_double2_pane_vc_ParamLimits

0xa11b,	// (0x00015217) list_double2_pane_vc

0xa11b,	// (0x00015217) list_double_graphic_heading_pane_vc_ParamLimits

0xa11b,	// (0x00015217) list_double_graphic_heading_pane_vc

0xa11b,	// (0x00015217) list_double_graphic_pane_vc_ParamLimits

0xa11b,	// (0x00015217) list_double_graphic_pane_vc

0xa11b,	// (0x00015217) list_double_heading_pane_vc_ParamLimits

0xa11b,	// (0x00015217) list_double_heading_pane_vc

0xa12d,	// (0x00015229) list_double_large_graphic_pane_vc_ParamLimits

0xa12d,	// (0x00015229) list_double_large_graphic_pane_vc

0xa11b,	// (0x00015217) list_double_number_pane_vc_ParamLimits

0xa11b,	// (0x00015217) list_double_number_pane_vc

0xa11b,	// (0x00015217) list_double_pane_vc_ParamLimits

0xa11b,	// (0x00015217) list_double_pane_vc

0xa11b,	// (0x00015217) list_double_time_pane_vc_ParamLimits

0xa11b,	// (0x00015217) list_double_time_pane_vc

0xa11b,	// (0x00015217) list_setting_number_pane_vc_ParamLimits

0xa11b,	// (0x00015217) list_setting_number_pane_vc

0xa11b,	// (0x00015217) list_setting_pane_vc_ParamLimits

0xa11b,	// (0x00015217) list_setting_pane_vc

0xa11b,	// (0x00015217) list_single_graphic_heading_pane_vc_ParamLimits

0xa11b,	// (0x00015217) list_single_graphic_heading_pane_vc

0xa11b,	// (0x00015217) list_single_heading_pane_vc_ParamLimits

0xa11b,	// (0x00015217) list_single_heading_pane_vc

0xa11b,	// (0x00015217) list_single_number_heading_pane_vc_ParamLimits

0xa11b,	// (0x00015217) list_single_number_heading_pane_vc

0xa6e1,	// (0x000157dd) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xa6e1,	// (0x000157dd) list_double_graphic_heading_pane_vc_g1

0x89e9,	// (0x00013ae5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x89e9,	// (0x00013ae5) list_double_graphic_heading_pane_vc_g2

0x89f5,	// (0x00013af1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x89f5,	// (0x00013af1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa22,	// (0x0001ab1e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa22,	// (0x0001ab1e) list_double_graphic_heading_pane_vc_g

0xa6ed,	// (0x000157e9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xa6ed,	// (0x000157e9) list_double_graphic_heading_pane_vc_t1

0x8abb,	// (0x00013bb7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x8abb,	// (0x00013bb7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa29,	// (0x0001ab25) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa29,	// (0x0001ab25) list_double_graphic_heading_pane_vc_t

0x8ae5,	// (0x00013be1) list_setting_pane_vc_g1_ParamLimits

0x8ae5,	// (0x00013be1) list_setting_pane_vc_g1

0x8af1,	// (0x00013bed) list_setting_pane_vc_g2_ParamLimits

0x8af1,	// (0x00013bed) list_setting_pane_vc_g2

0x0001,

0xf81f,	// (0x0001a91b) list_setting_pane_vc_g_ParamLimits

0xf81f,	// (0x0001a91b) list_setting_pane_vc_g

0xa905,	// (0x00015a01) list_setting_pane_vc_t1_ParamLimits

0xa905,	// (0x00015a01) list_setting_pane_vc_t1

0xa919,	// (0x00015a15) list_setting_pane_vc_t2_ParamLimits

0xa919,	// (0x00015a15) list_setting_pane_vc_t2

0x0001,

0xfa6c,	// (0x0001ab68) list_setting_pane_vc_t_ParamLimits

0xfa6c,	// (0x0001ab68) list_setting_pane_vc_t

0x8b53,	// (0x00013c4f) set_value_pane_cp_vc_ParamLimits

0x8b53,	// (0x00013c4f) set_value_pane_cp_vc

0x89e9,	// (0x00013ae5) list_single_number_heading_pane_vc_g1_ParamLimits

0x89e9,	// (0x00013ae5) list_single_number_heading_pane_vc_g1

0x89f5,	// (0x00013af1) list_single_number_heading_pane_vc_g2_ParamLimits

0x89f5,	// (0x00013af1) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a708) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a708) list_single_number_heading_pane_vc_g

0x8abb,	// (0x00013bb7) list_single_number_heading_pane_vc_t1_ParamLimits

0x8abb,	// (0x00013bb7) list_single_number_heading_pane_vc_t1

0xa93b,	// (0x00015a37) list_single_number_heading_pane_vc_t2_ParamLimits

0xa93b,	// (0x00015a37) list_single_number_heading_pane_vc_t2

0xa94f,	// (0x00015a4b) list_single_number_heading_pane_vc_t3_ParamLimits

0xa94f,	// (0x00015a4b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa71,	// (0x0001ab6d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0001ab6d) list_single_number_heading_pane_vc_t

0x89dd,	// (0x00013ad9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x89dd,	// (0x00013ad9) list_single_graphic_heading_pane_vc_g1

0x89e9,	// (0x00013ae5) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x89e9,	// (0x00013ae5) list_single_graphic_heading_pane_vc_g4

0x89f5,	// (0x00013af1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x89f5,	// (0x00013af1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x0001a8f5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001a8f5) list_single_graphic_heading_pane_vc_g

0x8abb,	// (0x00013bb7) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8abb,	// (0x00013bb7) list_single_graphic_heading_pane_vc_t1

0xa961,	// (0x00015a5d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xa961,	// (0x00015a5d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x0001ab74) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x0001ab74) list_single_graphic_heading_pane_vc_t

0x89e9,	// (0x00013ae5) list_double2_pane_vc_g1_ParamLimits

0x89e9,	// (0x00013ae5) list_double2_pane_vc_g1

0x89f5,	// (0x00013af1) list_double2_pane_vc_g2_ParamLimits

0x89f5,	// (0x00013af1) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a708) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a708) list_double2_pane_vc_g

0xa975,	// (0x00015a71) list_double2_pane_vc_t1_ParamLimits

0xa975,	// (0x00015a71) list_double2_pane_vc_t1

0xa98b,	// (0x00015a87) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xa98b,	// (0x00015a87) list_double2_large_graphic_pane_vc_g1

0xa997,	// (0x00015a93) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xa997,	// (0x00015a93) list_double2_large_graphic_pane_vc_g2

0xa9a3,	// (0x00015a9f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xa9a3,	// (0x00015a9f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x0001a725) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x0001a725) list_double2_large_graphic_pane_vc_g

0xa9af,	// (0x00015aab) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xa9af,	// (0x00015aab) list_double2_large_graphic_pane_vc_t1

0xa9c5,	// (0x00015ac1) list_double_time_pane_vc_g1_ParamLimits

0xa9c5,	// (0x00015ac1) list_double_time_pane_vc_g1

0xa9d1,	// (0x00015acd) list_double_time_pane_vc_g2_ParamLimits

0xa9d1,	// (0x00015acd) list_double_time_pane_vc_g2

0x0001,

0xfa7d,	// (0x0001ab79) list_double_time_pane_vc_g_ParamLimits

0xfa7d,	// (0x0001ab79) list_double_time_pane_vc_g

0xa9dd,	// (0x00015ad9) list_double_time_pane_vc_t1_ParamLimits

0xa9dd,	// (0x00015ad9) list_double_time_pane_vc_t1

0xa9f6,	// (0x00015af2) list_double_time_pane_vc_t2_ParamLimits

0xa9f6,	// (0x00015af2) list_double_time_pane_vc_t2

0xaa11,	// (0x00015b0d) list_double_time_pane_vc_t3_ParamLimits

0xaa11,	// (0x00015b0d) list_double_time_pane_vc_t3

0xaa29,	// (0x00015b25) list_double_time_pane_vc_t4_ParamLimits

0xaa29,	// (0x00015b25) list_double_time_pane_vc_t4

0x0003,

0xfa82,	// (0x0001ab7e) list_double_time_pane_vc_t_ParamLimits

0xfa82,	// (0x0001ab7e) list_double_time_pane_vc_t

0x89e9,	// (0x00013ae5) list_double_pane_vc_g1_ParamLimits

0x89e9,	// (0x00013ae5) list_double_pane_vc_g1

0x89f5,	// (0x00013af1) list_double_pane_vc_g2_ParamLimits

0x89f5,	// (0x00013af1) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a708) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a708) list_double_pane_vc_g

0xaa3d,	// (0x00015b39) list_double_pane_vc_t1_ParamLimits

0xaa3d,	// (0x00015b39) list_double_pane_vc_t1

0xaa4f,	// (0x00015b4b) list_double_pane_vc_t2_ParamLimits

0xaa4f,	// (0x00015b4b) list_double_pane_vc_t2

0x0001,

0xfa8b,	// (0x0001ab87) list_double_pane_vc_t_ParamLimits

0xfa8b,	// (0x0001ab87) list_double_pane_vc_t

0x89e9,	// (0x00013ae5) list_double_number_pane_vc_g1_ParamLimits

0x89e9,	// (0x00013ae5) list_double_number_pane_vc_g1

0x89f5,	// (0x00013af1) list_double_number_pane_vc_g2_ParamLimits

0x89f5,	// (0x00013af1) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a708) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a708) list_double_number_pane_vc_g

0xaa67,	// (0x00015b63) list_double_number_pane_vc_t1_ParamLimits

0xaa67,	// (0x00015b63) list_double_number_pane_vc_t1

0xaa7b,	// (0x00015b77) list_double_number_pane_vc_t2_ParamLimits

0xaa7b,	// (0x00015b77) list_double_number_pane_vc_t2

0xaa4f,	// (0x00015b4b) list_double_number_pane_vc_t3_ParamLimits

0xaa4f,	// (0x00015b4b) list_double_number_pane_vc_t3

0x0002,

0xfa90,	// (0x0001ab8c) list_double_number_pane_vc_t_ParamLimits

0xfa90,	// (0x0001ab8c) list_double_number_pane_vc_t

0xaa8d,	// (0x00015b89) list_double_large_graphic_pane_vc_g1_ParamLimits

0xaa8d,	// (0x00015b89) list_double_large_graphic_pane_vc_g1

0xaa99,	// (0x00015b95) list_double_large_graphic_pane_vc_g2_ParamLimits

0xaa99,	// (0x00015b95) list_double_large_graphic_pane_vc_g2

0xa9a3,	// (0x00015a9f) list_double_large_graphic_pane_vc_g3_ParamLimits

0xa9a3,	// (0x00015a9f) list_double_large_graphic_pane_vc_g3

0xaaa8,	// (0x00015ba4) list_double_large_graphic_pane_vc_g4_ParamLimits

0xaaa8,	// (0x00015ba4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa97,	// (0x0001ab93) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa97,	// (0x0001ab93) list_double_large_graphic_pane_vc_g

0xaab4,	// (0x00015bb0) list_double_large_graphic_pane_vc_t1_ParamLimits

0xaab4,	// (0x00015bb0) list_double_large_graphic_pane_vc_t1

0xaac6,	// (0x00015bc2) list_double_large_graphic_pane_vc_t2_ParamLimits

0xaac6,	// (0x00015bc2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa0,	// (0x0001ab9c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa0,	// (0x0001ab9c) list_double_large_graphic_pane_vc_t

0x89e9,	// (0x00013ae5) list_double_heading_pane_vc_g1_ParamLimits

0x89e9,	// (0x00013ae5) list_double_heading_pane_vc_g1

0x89f5,	// (0x00013af1) list_double_heading_pane_vc_g2_ParamLimits

0x89f5,	// (0x00013af1) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a708) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a708) list_double_heading_pane_vc_g

0xaadf,	// (0x00015bdb) list_double_heading_pane_vc_t1_ParamLimits

0xaadf,	// (0x00015bdb) list_double_heading_pane_vc_t1

0x8abb,	// (0x00013bb7) list_double_heading_pane_vc_t2_ParamLimits

0x8abb,	// (0x00013bb7) list_double_heading_pane_vc_t2

0x0001,

0xfaa5,	// (0x0001aba1) list_double_heading_pane_vc_t_ParamLimits

0xfaa5,	// (0x0001aba1) list_double_heading_pane_vc_t

0x89dd,	// (0x00013ad9) list_double_graphic_pane_vc_g1_ParamLimits

0x89dd,	// (0x00013ad9) list_double_graphic_pane_vc_g1

0xaaf3,	// (0x00015bef) list_double_graphic_pane_vc_g2_ParamLimits

0xaaf3,	// (0x00015bef) list_double_graphic_pane_vc_g2

0xab02,	// (0x00015bfe) list_double_graphic_pane_vc_g3_ParamLimits

0xab02,	// (0x00015bfe) list_double_graphic_pane_vc_g3

0x0002,

0xfaaa,	// (0x0001aba6) list_double_graphic_pane_vc_g_ParamLimits

0xfaaa,	// (0x0001aba6) list_double_graphic_pane_vc_g

0xab0e,	// (0x00015c0a) list_double_graphic_pane_vc_t1_ParamLimits

0xab0e,	// (0x00015c0a) list_double_graphic_pane_vc_t1

0xaa4f,	// (0x00015b4b) list_double_graphic_pane_vc_t2_ParamLimits

0xaa4f,	// (0x00015b4b) list_double_graphic_pane_vc_t2

0x0001,

0xfab1,	// (0x0001abad) list_double_graphic_pane_vc_t_ParamLimits

0xfab1,	// (0x0001abad) list_double_graphic_pane_vc_t

0x42cd,	// (0x0000f3c9) aid_size_cell_fastswap

0xe4bc,	// (0x000195b8) aid_size_cell_touch_ParamLimits

0xe4bc,	// (0x000195b8) aid_size_cell_touch

0x453a,	// (0x0000f636) popup_fast_swap_wide_window_ParamLimits

0x453a,	// (0x0000f636) popup_fast_swap_wide_window

0xe607,	// (0x00019703) touch_pane_ParamLimits

0xe607,	// (0x00019703) touch_pane

0x6ce1,	// (0x00011ddd) button_value_adjust_pane_cp2

0x6ce9,	// (0x00011de5) button_value_adjust_pane_cp4

0x6d0b,	// (0x00011e07) form_field_data_pane_cp2

0x081a,	// (0x0000b916) form_field_data_wide_pane_cp2

0x73b8,	// (0x000124b4) bg_scroll_pane_ParamLimits

0x48d4,	// (0x0000f9d0) scroll_handle_pane_ParamLimits

0x48e8,	// (0x0000f9e4) scroll_sc2_down_pane_ParamLimits

0x48e8,	// (0x0000f9e4) scroll_sc2_down_pane

0x73e9,	// (0x000124e5) scroll_sc2_up_pane_ParamLimits

0x73e9,	// (0x000124e5) scroll_sc2_up_pane

0x2165,	// (0x0000d261) grid_wheel_folder_pane_g1_ParamLimits

0x2165,	// (0x0000d261) grid_wheel_folder_pane_g1

0x4aad,	// (0x0000fba9) clock_nsta_pane_cp2_ParamLimits

0x4aad,	// (0x0000fba9) clock_nsta_pane_cp2

0x0c48,	// (0x0000bd44) listscroll_midp_pane_ParamLimits

0x0c59,	// (0x0000bd55) midp_canvas_pane

0x7f0f,	// (0x0001300b) nsta_clock_indic_pane

0x7f6d,	// (0x00013069) listscroll_form_pane_vc

0x7f89,	// (0x00013085) listscroll_set_pane_vc_ParamLimits

0x7f89,	// (0x00013085) listscroll_set_pane_vc

0x161e,	// (0x0000c71a) clock_nsta_pane

0x1648,	// (0x0000c744) indicator_nsta_pane

0x8977,	// (0x00013a73) bg_popup_sub_pane_cp2_ParamLimits

0x898b,	// (0x00013a87) find_pane_cp2_ParamLimits

0x898b,	// (0x00013a87) find_pane_cp2

0x89a1,	// (0x00013a9d) grid_toobar_pane_ParamLimits

0x8b61,	// (0x00013c5d) list_form_gen_pane_vc_ParamLimits

0x8b61,	// (0x00013c5d) list_form_gen_pane_vc

0x8b77,	// (0x00013c73) scroll_pane_cp8_vc_ParamLimits

0x8b77,	// (0x00013c73) scroll_pane_cp8_vc

0x8bf3,	// (0x00013cef) data_form_wide_pane_vc_ParamLimits

0x8bf3,	// (0x00013cef) data_form_wide_pane_vc

0x8bff,	// (0x00013cfb) form_field_data_wide_pane_vc_g1

0x8c07,	// (0x00013d03) form_field_data_wide_pane_vc_t1_ParamLimits

0x8c07,	// (0x00013d03) form_field_data_wide_pane_vc_t1

0x6dc7,	// (0x00011ec3) input_focus_pane_cp6_vc_ParamLimits

0x6dc7,	// (0x00011ec3) input_focus_pane_cp6_vc

0x1a48,	// (0x0000cb44) list_midp_pane_ParamLimits

0xa351,	// (0x0001544d) scroll_pane_cp16_ParamLimits

0xa351,	// (0x0001544d) scroll_pane_cp16

0x8f95,	// (0x00014091) button_value_adjust_pane_ParamLimits

0x8f95,	// (0x00014091) button_value_adjust_pane

0x1d79,	// (0x0000ce75) button_value_adjust_pane_cp6_ParamLimits

0x1d79,	// (0x0000ce75) button_value_adjust_pane_cp6

0x1e93,	// (0x0000cf8f) settings_code_pane_cp_ParamLimits

0x1e93,	// (0x0000cf8f) settings_code_pane_cp

0x5ef6,	// (0x00010ff2) cell_touch_pane_g1

0x5ef6,	// (0x00010ff2) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0001a83e) cell_touch_pane_g

0x2048,	// (0x0000d144) cell_touch_pane_cp_ParamLimits

0x2048,	// (0x0000d144) cell_touch_pane_cp

0x2064,	// (0x0000d160) cell_touch_pane_ParamLimits

0x2064,	// (0x0000d160) cell_touch_pane

0x5ef6,	// (0x00010ff2) scroll_sc2_down_pane_g1

0x5ef6,	// (0x00010ff2) scroll_sc2_up_pane_g1

0x5f00,	// (0x00010ffc) bg_set_opt_pane_cp4_vc

0xa701,	// (0x000157fd) list_set_graphic_pane_vc_g1_ParamLimits

0xa701,	// (0x000157fd) list_set_graphic_pane_vc_g1

0xa70d,	// (0x00015809) list_set_graphic_pane_vc_g2_ParamLimits

0xa70d,	// (0x00015809) list_set_graphic_pane_vc_g2

0x0001,

0xfa2e,	// (0x0001ab2a) list_set_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0001ab2a) list_set_graphic_pane_vc_g

0xa719,	// (0x00015815) text_primary_small_cp13_vc_ParamLimits

0xa719,	// (0x00015815) text_primary_small_cp13_vc

0xa731,	// (0x0001582d) list_set_graphic_pane_vc_ParamLimits

0xa731,	// (0x0001582d) list_set_graphic_pane_vc

0x5f00,	// (0x00010ffc) input_focus_pane_cp2_vc

0x5ef6,	// (0x00010ff2) setting_code_pane_vc_g1

0xa745,	// (0x00015841) setting_code_pane_vc_t1

0xa753,	// (0x0001584f) set_text_pane_vc_t1_ParamLimits

0xa753,	// (0x0001584f) set_text_pane_vc_t1

0x5f00,	// (0x00010ffc) input_focus_pane_cp1_vc

0xa76e,	// (0x0001586a) list_set_text_pane_vc

0x5ef6,	// (0x00010ff2) setting_text_pane_vc_g1

0x5f00,	// (0x00010ffc) bg_set_opt_pane_cp2_vc

0xa778,	// (0x00015874) setting_slider_graphic_pane_vc_g1

0xa780,	// (0x0001587c) setting_slider_graphic_pane_vc_t1

0xa78e,	// (0x0001588a) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x0001ab2f) setting_slider_graphic_pane_vc_t

0xa79c,	// (0x00015898) slider_set_pane_cp_vc

0xa7a4,	// (0x000158a0) slider_set_pane_vc_g1

0xa7ad,	// (0x000158a9) slider_set_pane_vc_g2

0x0006,

0xfa38,	// (0x0001ab34) slider_set_pane_vc_g

0x6eff,	// (0x00011ffb) set_opt_bg_pane_g1_copy1

0x6f07,	// (0x00012003) set_opt_bg_pane_g2_copy1

0xa7d9,	// (0x000158d5) set_opt_bg_pane_g3_copy1

0x6f17,	// (0x00012013) set_opt_bg_pane_g4_copy1

0x6f1f,	// (0x0001201b) set_opt_bg_pane_g5_copy1

0x6f27,	// (0x00012023) set_opt_bg_pane_g6_copy1

0xa7e3,	// (0x000158df) set_opt_bg_pane_g7_copy1

0xa7eb,	// (0x000158e7) set_opt_bg_pane_g8_copy1

0xa7f5,	// (0x000158f1) set_opt_bg_pane_g9_copy1

0x5f00,	// (0x00010ffc) bg_set_opt_pane_cp_vc

0xa7ff,	// (0x000158fb) setting_slider_pane_vc_t1

0xa780,	// (0x0001587c) setting_slider_pane_vc_t2

0xa78e,	// (0x0001588a) setting_slider_pane_vc_t3

0x0002,

0xfa47,	// (0x0001ab43) setting_slider_pane_vc_t

0xa79c,	// (0x00015898) slider_set_pane_vc

0x4eba,	// (0x0000ffb6) volume_set_pane_vc_g1

0x4ec3,	// (0x0000ffbf) volume_set_pane_vc_g2

0x4ecc,	// (0x0000ffc8) volume_set_pane_vc_g3

0x4ed5,	// (0x0000ffd1) volume_set_pane_vc_g4

0x4ede,	// (0x0000ffda) volume_set_pane_vc_g5

0x4ee7,	// (0x0000ffe3) volume_set_pane_vc_g6

0x4ef0,	// (0x0000ffec) volume_set_pane_vc_g7

0x4ef9,	// (0x0000fff5) volume_set_pane_vc_g8

0x4f02,	// (0x0000fffe) volume_set_pane_vc_g9

0x4f0b,	// (0x00010007) volume_set_pane_vc_g10

0x0009,

0xfa4e,	// (0x0001ab4a) volume_set_pane_vc_g

0xa80e,	// (0x0001590a) volume_set_pane_vc

0xa816,	// (0x00015912) button_value_adjust_pane_cp1_vc

0xa820,	// (0x0001591c) list_highlight_pane_cp2_vc

0xa829,	// (0x00015925) list_set_pane_vc_ParamLimits

0xa829,	// (0x00015925) list_set_pane_vc

0xa893,	// (0x0001598f) main_pane_set_vc_t1_ParamLimits

0xa893,	// (0x0001598f) main_pane_set_vc_t1

0xa8a8,	// (0x000159a4) main_pane_set_vc_t2_ParamLimits

0xa8a8,	// (0x000159a4) main_pane_set_vc_t2

0xa8ba,	// (0x000159b6) main_pane_set_vc_t3_ParamLimits

0xa8ba,	// (0x000159b6) main_pane_set_vc_t3

0xa8ce,	// (0x000159ca) main_pane_set_vc_t4_ParamLimits

0xa8ce,	// (0x000159ca) main_pane_set_vc_t4

0x0003,

0xfa63,	// (0x0001ab5f) main_pane_set_vc_t_ParamLimits

0xfa63,	// (0x0001ab5f) main_pane_set_vc_t

0xa8e2,	// (0x000159de) setting_code_pane_vc_ParamLimits

0xa8e2,	// (0x000159de) setting_code_pane_vc

0xa8f3,	// (0x000159ef) setting_slider_graphic_pane_vc

0xa8f3,	// (0x000159ef) setting_slider_pane_vc

0xa8f3,	// (0x000159ef) setting_text_pane_vc

0xa8f3,	// (0x000159ef) setting_volume_pane_vc

0xa8fd,	// (0x000159f9) scroll_pane_cp121_vc

0x6ccf,	// (0x00011dcb) set_content_pane_vc

0xab20,	// (0x00015c1c) button_value_adjust_pane_g1

0xab29,	// (0x00015c25) button_value_adjust_pane_g2

0x0001,

0xfab6,	// (0x0001abb2) button_value_adjust_pane_g

0xab32,	// (0x00015c2e) form_field_slider_wide_pane_vc_t1_ParamLimits

0xab32,	// (0x00015c2e) form_field_slider_wide_pane_vc_t1

0xab46,	// (0x00015c42) form_field_slider_wide_pane_vc_t2_ParamLimits

0xab46,	// (0x00015c42) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabb,	// (0x0001abb7) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabb,	// (0x0001abb7) form_field_slider_wide_pane_vc_t

0x6275,	// (0x00011371) input_focus_pane_cp10_vc_ParamLimits

0x6275,	// (0x00011371) input_focus_pane_cp10_vc

0xab58,	// (0x00015c54) slider_cont_pane_cp1_vc_ParamLimits

0xab58,	// (0x00015c54) slider_cont_pane_cp1_vc

0xa7a4,	// (0x000158a0) slider_form_pane_g1_cp2

0xa7ad,	// (0x000158a9) slider_form_pane_g2_cp2

0xab71,	// (0x00015c6d) form_field_slider_pane_vc_t3

0xab7f,	// (0x00015c7b) form_field_slider_pane_vc_t4

0xab8d,	// (0x00015c89) slider_form_pane_vc_ParamLimits

0xab8d,	// (0x00015c89) slider_form_pane_vc

0xab9a,	// (0x00015c96) form_field_slider_pane_vc_t1_ParamLimits

0xab9a,	// (0x00015c96) form_field_slider_pane_vc_t1

0xab46,	// (0x00015c42) form_field_slider_pane_vc_t2_ParamLimits

0xab46,	// (0x00015c42) form_field_slider_pane_vc_t2

0x0001,

0xfacb,	// (0x0001abc7) form_field_slider_pane_vc_t_ParamLimits

0xfacb,	// (0x0001abc7) form_field_slider_pane_vc_t

0x6275,	// (0x00011371) input_focus_pane_cp9_vc_ParamLimits

0x6275,	// (0x00011371) input_focus_pane_cp9_vc

0xabb6,	// (0x00015cb2) slider_cont_pane_vc_ParamLimits

0xabb6,	// (0x00015cb2) slider_cont_pane_vc

0xabc8,	// (0x00015cc4) list_form_graphic_pane_cp_vc_ParamLimits

0xabc8,	// (0x00015cc4) list_form_graphic_pane_cp_vc

0x8bff,	// (0x00013cfb) form_field_popup_wide_pane_vc_g1

0xabdd,	// (0x00015cd9) form_field_popup_wide_pane_vc_t1_ParamLimits

0xabdd,	// (0x00015cd9) form_field_popup_wide_pane_vc_t1

0x6dc7,	// (0x00011ec3) input_focus_pane_cp8_vc_ParamLimits

0x6dc7,	// (0x00011ec3) input_focus_pane_cp8_vc

0xabf4,	// (0x00015cf0) list_form_wide_pane_vc_ParamLimits

0xabf4,	// (0x00015cf0) list_form_wide_pane_vc

0xac00,	// (0x00015cfc) list_form_graphic_pane_vc_g1

0xac08,	// (0x00015d04) list_form_graphic_pane_vc_t1_ParamLimits

0xac08,	// (0x00015d04) list_form_graphic_pane_vc_t1

0x5fe0,	// (0x000110dc) list_highlight_pane_cp5_vc_ParamLimits

0x5fe0,	// (0x000110dc) list_highlight_pane_cp5_vc

0xac24,	// (0x00015d20) list_form_graphic_pane_vc_ParamLimits

0xac24,	// (0x00015d20) list_form_graphic_pane_vc

0x8bff,	// (0x00013cfb) form_field_popup_pane_vc_g1

0xac3a,	// (0x00015d36) form_field_popup_pane_vc_t1_ParamLimits

0xac3a,	// (0x00015d36) form_field_popup_pane_vc_t1

0x6dc7,	// (0x00011ec3) input_focus_pane_cp7_vc_ParamLimits

0x6dc7,	// (0x00011ec3) input_focus_pane_cp7_vc

0xac51,	// (0x00015d4d) list_form_pane_vc_ParamLimits

0xac51,	// (0x00015d4d) list_form_pane_vc

0xac5d,	// (0x00015d59) data_form_pane_vc_t1_ParamLimits

0xac5d,	// (0x00015d59) data_form_pane_vc_t1

0x6eff,	// (0x00011ffb) input_focus_pane_vc_g1

0x6f07,	// (0x00012003) input_focus_pane_vc_g2

0x6f0f,	// (0x0001200b) input_focus_pane_vc_g3

0x6f17,	// (0x00012013) input_focus_pane_vc_g4

0x6f1f,	// (0x0001201b) input_focus_pane_vc_g5

0x6f27,	// (0x00012023) input_focus_pane_vc_g6

0x6f2f,	// (0x0001202b) input_focus_pane_vc_g7

0x6f37,	// (0x00012033) input_focus_pane_vc_g8

0x6f3f,	// (0x0001203b) input_focus_pane_vc_g9

0x5ef6,	// (0x00010ff2) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0001a7c7) input_focus_pane_vc_g

0x8bf3,	// (0x00013cef) data_form_pane_vc_ParamLimits

0x8bf3,	// (0x00013cef) data_form_pane_vc

0x8bff,	// (0x00013cfb) form_field_data_pane_vc_g1

0xac78,	// (0x00015d74) form_field_data_pane_vc_t1_ParamLimits

0xac78,	// (0x00015d74) form_field_data_pane_vc_t1

0x6dc7,	// (0x00011ec3) input_focus_pane_vc_ParamLimits

0x6dc7,	// (0x00011ec3) input_focus_pane_vc

0xac92,	// (0x00015d8e) button_value_adjust_pane_cp3_vc

0xac9a,	// (0x00015d96) button_value_adjust_pane_cp5_vc

0xaca2,	// (0x00015d9e) form_field_data_pane_vc_ParamLimits

0xaca2,	// (0x00015d9e) form_field_data_pane_vc

0xacb9,	// (0x00015db5) form_field_data_pane_vc_cp2

0xacc1,	// (0x00015dbd) form_field_data_wide_pane_vc_ParamLimits

0xacc1,	// (0x00015dbd) form_field_data_wide_pane_vc

0xacd7,	// (0x00015dd3) form_field_data_wide_pane_vc_cp2

0xacdf,	// (0x00015ddb) form_field_popup_pane_vc_ParamLimits

0xacdf,	// (0x00015ddb) form_field_popup_pane_vc

0xacf6,	// (0x00015df2) form_field_popup_wide_pane_vc_ParamLimits

0xacf6,	// (0x00015df2) form_field_popup_wide_pane_vc

0xad0c,	// (0x00015e08) form_field_slider_pane_vc_ParamLimits

0xad0c,	// (0x00015e08) form_field_slider_pane_vc

0xad1f,	// (0x00015e1b) form_field_slider_wide_pane_vc_ParamLimits

0xad1f,	// (0x00015e1b) form_field_slider_wide_pane_vc

0x2082,	// (0x0000d17e) grid_touch_1_pane_ParamLimits

0x2082,	// (0x0000d17e) grid_touch_1_pane

0x2096,	// (0x0000d192) grid_touch_2_pane_ParamLimits

0x2096,	// (0x0000d192) grid_touch_2_pane

0xadf4,	// (0x00015ef0) touch_pane_g1_ParamLimits

0xadf4,	// (0x00015ef0) touch_pane_g1

0xad56,	// (0x00015e52) cell_app_pane_cp_wide_ParamLimits

0xad56,	// (0x00015e52) cell_app_pane_cp_wide

0xad67,	// (0x00015e63) grid_popup_fast_wide_pane_ParamLimits

0xad67,	// (0x00015e63) grid_popup_fast_wide_pane

0xad7b,	// (0x00015e77) scroll_pane_cp19_ParamLimits

0xad7b,	// (0x00015e77) scroll_pane_cp19

0x5f00,	// (0x00010ffc) bg_popup_window_pane_cp20

0xad8f,	// (0x00015e8b) listscroll_popup_fast_wide_pane

0x7111,	// (0x0001220d) grid_indicator_nsta_pane

0xad97,	// (0x00015e93) clock_nsta_pane_g1

0xada0,	// (0x00015e9c) clock_nsta_pane_t1

0x20c0,	// (0x0000d1bc) cell_indicator_nsta_pane_ParamLimits

0x20c0,	// (0x0000d1bc) cell_indicator_nsta_pane

0xadf4,	// (0x00015ef0) cell_indicator_nsta_pane_g1

0x20d9,	// (0x0000d1d5) cell_indicator_nsta_pane_g2

0x0001,

0xfad5,	// (0x0001abd1) cell_indicator_nsta_pane_g

0xae18,	// (0x00015f14) clock_nsta_pane_cp

0xae20,	// (0x00015f1c) indicator_nsta_pane_cp

0xae28,	// (0x00015f24) nsta_clock_indic_pane_g1

0x60c3,	// (0x000111bf) grid_indicator_pane

0x74de,	// (0x000125da) scroll_pane_cp29

0x49fc,	// (0x0000faf8) indicator_nsta_pane_cp2_ParamLimits

0x49fc,	// (0x0000faf8) indicator_nsta_pane_cp2

0x5fe0,	// (0x000110dc) main_apps_wheel_pane

0x8e2a,	// (0x00013f26) form_midp_field_text_pane_ParamLimits

0x8f75,	// (0x00014071) scroll_bar_cp050_ParamLimits

0xae60,	// (0x00015f5c) cell_indicator_pane_ParamLimits

0xae60,	// (0x00015f5c) cell_indicator_pane

0xae77,	// (0x00015f73) cell_indicator_pane_g1

0x20ef,	// (0x0000d1eb) grid_wheel_folder_pane_ParamLimits

0x20ef,	// (0x0000d1eb) grid_wheel_folder_pane

0x20fd,	// (0x0000d1f9) list_wheel_apps_pane_ParamLimits

0x20fd,	// (0x0000d1f9) list_wheel_apps_pane

0x210b,	// (0x0000d207) main_apps_wheel_pane_g1_ParamLimits

0x210b,	// (0x0000d207) main_apps_wheel_pane_g1

0x2117,	// (0x0000d213) main_apps_wheel_pane_g2_ParamLimits

0x2117,	// (0x0000d213) main_apps_wheel_pane_g2

0x0001,

0xfae4,	// (0x0001abe0) main_apps_wheel_pane_g_ParamLimits

0xfae4,	// (0x0001abe0) main_apps_wheel_pane_g

0x2125,	// (0x0000d221) main_apps_wheel_pane_t1_ParamLimits

0x2125,	// (0x0000d221) main_apps_wheel_pane_t1

0x2139,	// (0x0000d235) list_wheel_apps_pane_g1

0x2141,	// (0x0000d23d) list_wheel_apps_pane_g2

0x2149,	// (0x0000d245) list_wheel_apps_pane_g3

0x2151,	// (0x0000d24d) list_wheel_apps_pane_g4

0x215b,	// (0x0000d257) list_wheel_apps_pane_g5

0x0004,

0xfae9,	// (0x0001abe5) list_wheel_apps_pane_g

0x7a91,	// (0x00012b8d) navi_icon_text_pane

0x1519,	// (0x0000c615) aid_fill_nsta

0x2172,	// (0x0000d26e) navi_icon_text_pane_g1

0x217e,	// (0x0000d27a) navi_icon_text_pane_t1

0x0c30,	// (0x0000bd2c) list_set_graphic_pane_t1_ParamLimits

0x0c30,	// (0x0000bd2c) list_set_graphic_pane_t1

0x9693,	// (0x0001478f) popup_midp_note_alarm_window_t6_ParamLimits

0x9693,	// (0x0001478f) popup_midp_note_alarm_window_t6

0x96a5,	// (0x000147a1) popup_midp_note_alarm_window_t7_ParamLimits

0x96a5,	// (0x000147a1) popup_midp_note_alarm_window_t7

0x96b7,	// (0x000147b3) popup_midp_note_alarm_window_t8_ParamLimits

0x96b7,	// (0x000147b3) popup_midp_note_alarm_window_t8

0x96c9,	// (0x000147c5) popup_midp_note_alarm_window_t9_ParamLimits

0x96c9,	// (0x000147c5) popup_midp_note_alarm_window_t9

0x96db,	// (0x000147d7) popup_midp_note_alarm_window_t10_ParamLimits

0x96db,	// (0x000147d7) popup_midp_note_alarm_window_t10

0x96ed,	// (0x000147e9) popup_midp_note_alarm_window_t11_ParamLimits

0x96ed,	// (0x000147e9) popup_midp_note_alarm_window_t11

0x96ff,	// (0x000147fb) scroll_pane_cp17_ParamLimits

0x96ff,	// (0x000147fb) scroll_pane_cp17

0x4eba,	// (0x0000ffb6) volume_small_pane_cp_g1

0x51af,	// (0x000102ab) volume_small_pane_cp_g2

0x51b8,	// (0x000102b4) volume_small_pane_cp_g3

0x51c1,	// (0x000102bd) volume_small_pane_cp_g4

0x51ca,	// (0x000102c6) volume_small_pane_cp_g5

0x51d3,	// (0x000102cf) volume_small_pane_cp_g6

0x51dc,	// (0x000102d8) volume_small_pane_cp_g7

0x51e5,	// (0x000102e1) volume_small_pane_cp_g8

0x51ee,	// (0x000102ea) volume_small_pane_cp_g9

0x51f7,	// (0x000102f3) volume_small_pane_cp_g10

0x7cec,	// (0x00012de8) midp_ticker_pane_g1_ParamLimits

0x7cf8,	// (0x00012df4) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0001a88f) midp_ticker_pane_g_ParamLimits

0x0cf0,	// (0x0000bdec) midp_ticker_pane_t1_ParamLimits

0x1539,	// (0x0000c635) aid_fill_nsta_2

0x8f61,	// (0x0001405d) list_form2_midp_pane

0xa0cf,	// (0x000151cb) midp_editing_number_pane_ParamLimits

0xa0de,	// (0x000151da) midp_ticker_pane_ParamLimits

0xaf5e,	// (0x0001605a) form2_midp_field_pane

0xaf82,	// (0x0001607e) scroll_pane_cp51

0xafa2,	// (0x0001609e) form2_midp_button_pane_ParamLimits

0xafa2,	// (0x0001609e) form2_midp_button_pane

0xafb4,	// (0x000160b0) form2_midp_content_pane_ParamLimits

0xafb4,	// (0x000160b0) form2_midp_content_pane

0xafce,	// (0x000160ca) form2_midp_field_choice_group_pane

0xafd6,	// (0x000160d2) form2_midp_field_pane_g1

0xafde,	// (0x000160da) form2_midp_field_pane_g2

0xafe6,	// (0x000160e2) form2_midp_field_pane_g3

0xafee,	// (0x000160ea) form2_midp_field_pane_g4

0x0003,

0xfb0e,	// (0x0001ac0a) form2_midp_field_pane_g

0xaff6,	// (0x000160f2) form2_midp_gauge_slider_pane

0xaffe,	// (0x000160fa) form2_midp_gauge_wait_pane

0xb006,	// (0x00016102) form2_midp_image_pane_ParamLimits

0xb006,	// (0x00016102) form2_midp_image_pane

0xb021,	// (0x0001611d) form2_midp_label_pane_ParamLimits

0xb021,	// (0x0001611d) form2_midp_label_pane

0x21ac,	// (0x0000d2a8) form2_midp_label_pane_cp_ParamLimits

0x21ac,	// (0x0000d2a8) form2_midp_label_pane_cp

0xb05b,	// (0x00016157) form2_midp_string_pane_ParamLimits

0xb05b,	// (0x00016157) form2_midp_string_pane

0x21cd,	// (0x0000d2c9) form2_midp_text_pane_ParamLimits

0x21cd,	// (0x0000d2c9) form2_midp_text_pane

0xb08a,	// (0x00016186) form2_midp_time_pane

0xb09a,	// (0x00016196) input_focus_pane_cp51_ParamLimits

0xb09a,	// (0x00016196) input_focus_pane_cp51

0xb0b2,	// (0x000161ae) form2_midp_label_pane_t1_ParamLimits

0xb0b2,	// (0x000161ae) form2_midp_label_pane_t1

0x21ea,	// (0x0000d2e6) form2_mdip_text_pane_t1_ParamLimits

0x21ea,	// (0x0000d2e6) form2_mdip_text_pane_t1

0xb112,	// (0x0001620e) form2_midp_time_pane_t1

0xb12d,	// (0x00016229) form2_midp_gauge_slider_pane_t1

0x2206,	// (0x0000d302) form2_midp_gauge_slider_pane_t2

0x2218,	// (0x0000d314) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb17,	// (0x0001ac13) form2_midp_gauge_slider_pane_t

0xb163,	// (0x0001625f) form2_midp_slider_pane

0xb16f,	// (0x0001626b) form2_midp_gauge_wait_pane_t1

0xb17d,	// (0x00016279) form2_midp_wait_pane_ParamLimits

0xb17d,	// (0x00016279) form2_midp_wait_pane

0x222a,	// (0x0000d326) list_single_2graphic_pane_cp4_ParamLimits

0x222a,	// (0x0000d326) list_single_2graphic_pane_cp4

0x19bc,	// (0x0000cab8) list_single_midp_graphic_pane_cp_ParamLimits

0x19bc,	// (0x0000cab8) list_single_midp_graphic_pane_cp

0x5f00,	// (0x00010ffc) list_highlight_pane_cp20

0xb1d7,	// (0x000162d3) list_single_2graphic_pane_g1_cp4

0xb1df,	// (0x000162db) list_single_2graphic_pane_g2_cp4

0xb1e7,	// (0x000162e3) list_single_2graphic_pane_t1_cp4

0x5fe0,	// (0x000110dc) list_highlight_pane_cp21

0xb1f6,	// (0x000162f2) list_single_midp_graphic_pane_g4_cp

0xb205,	// (0x00016301) list_single_midp_graphic_pane_t1_cp

0x223f,	// (0x0000d33b) form2_mdip_string_pane_t1_ParamLimits

0x223f,	// (0x0000d33b) form2_mdip_string_pane_t1

0x5f00,	// (0x00010ffc) bg_wml_button_pane_cp2

0x5ef6,	// (0x00010ff2) form2_midp_image_pane_g1

0x6aa9,	// (0x00011ba5) list_double_large_graphic_pane_g5_ParamLimits

0x6aa9,	// (0x00011ba5) list_double_large_graphic_pane_g5

0x0c48,	// (0x0000bd44) midp_form_pane_ParamLimits

0x5fe0,	// (0x000110dc) main_apps_wheel_pane_ParamLimits

0x1275,	// (0x0000c371) popup_preview_window_ParamLimits

0x1275,	// (0x0000c371) popup_preview_window

0x84ff,	// (0x000135fb) popup_touch_info_window_ParamLimits

0x84ff,	// (0x000135fb) popup_touch_info_window

0x851d,	// (0x00013619) popup_touch_menu_window_ParamLimits

0x851d,	// (0x00013619) popup_touch_menu_window

0x5eec,	// (0x00010fe8) bg_popup_sub_pane_cp6

0xb313,	// (0x0001640f) list_touch_menu_pane

0xb31b,	// (0x00016417) list_single_touch_menu_pane_ParamLimits

0xb31b,	// (0x00016417) list_single_touch_menu_pane

0xb332,	// (0x0001642e) list_single_touch_menu_pane_t1

0x5fe0,	// (0x000110dc) bg_popup_sub_pane_cp7_ParamLimits

0x5fe0,	// (0x000110dc) bg_popup_sub_pane_cp7

0xb340,	// (0x0001643c) heading_sub_pane

0xb348,	// (0x00016444) list_touch_info_pane_ParamLimits

0xb348,	// (0x00016444) list_touch_info_pane

0xb357,	// (0x00016453) list_single_touch_info_pane_ParamLimits

0xb357,	// (0x00016453) list_single_touch_info_pane

0xb369,	// (0x00016465) list_single_touch_info_pane_t1

0xb377,	// (0x00016473) list_single_touch_info_pane_t2

0x0001,

0xfb25,	// (0x0001ac21) list_single_touch_info_pane_t

0x7c11,	// (0x00012d0d) bg_popup_heading_pane_cp

0xb385,	// (0x00016481) heading_sub_pane_t1

0x8b8d,	// (0x00013c89) bg_popup_preview_window_pane_cp_ParamLimits

0x8b8d,	// (0x00013c89) bg_popup_preview_window_pane_cp

0xb340,	// (0x0001643c) heading_preview_pane

0xb348,	// (0x00016444) list_preview_pane_ParamLimits

0xb348,	// (0x00016444) list_preview_pane

0xb393,	// (0x0001648f) popup_preview_window_g1

0xb357,	// (0x00016453) list_single_preview_pane_ParamLimits

0xb357,	// (0x00016453) list_single_preview_pane

0xb39b,	// (0x00016497) list_single_preview_pane_g1

0xb3a3,	// (0x0001649f) list_single_preview_pane_t1

0xb369,	// (0x00016465) list_single_preview_pane_t2

0x0001,

0xfb2a,	// (0x0001ac26) list_single_preview_pane_t

0xb3b1,	// (0x000164ad) bg_popup_heading_pane_cp2_ParamLimits

0xb3b1,	// (0x000164ad) bg_popup_heading_pane_cp2

0xb3c7,	// (0x000164c3) heading_preview_pane_g1

0xb3cf,	// (0x000164cb) heading_preview_pane_t1_ParamLimits

0xb3cf,	// (0x000164cb) heading_preview_pane_t1

0x60e6,	// (0x000111e2) soft_indicator_pane_t1_ParamLimits

0x67d9,	// (0x000118d5) scroll_pane_ParamLimits

0x73d7,	// (0x000124d3) scroll_sc2_left_pane

0x73e0,	// (0x000124dc) scroll_sc2_right_pane

0x73ff,	// (0x000124fb) scroll_bg_pane_g1_ParamLimits

0x7414,	// (0x00012510) scroll_bg_pane_g2_ParamLimits

0x742c,	// (0x00012528) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0001a81e) scroll_bg_pane_g_ParamLimits

0x73ff,	// (0x000124fb) scroll_handle_pane_g1_ParamLimits

0x744e,	// (0x0001254a) scroll_handle_pane_g2_ParamLimits

0x742c,	// (0x00012528) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0001a825) scroll_handle_pane_g_ParamLimits

0x7fcb,	// (0x000130c7) popup_choice_list_window_ParamLimits

0x7fcb,	// (0x000130c7) popup_choice_list_window

0x8983,	// (0x00013a7f) choice_list_pane

0x8a3f,	// (0x00013b3b) cell_toolbar_pane_t1

0x8a67,	// (0x00013b63) toolbar_button_pane_ParamLimits

0x9bbf,	// (0x00014cbb) ai_gene_pane_1_t2_ParamLimits

0x9bbf,	// (0x00014cbb) ai_gene_pane_1_t2

0x0001,

0xf941,	// (0x0001aa3d) ai_gene_pane_1_t_ParamLimits

0xf941,	// (0x0001aa3d) ai_gene_pane_1_t

0xb3ec,	// (0x000164e8) scroll_sc2_left_pane_g1

0xb3ec,	// (0x000164e8) scroll_sc2_right_pane_g1

0x7f9b,	// (0x00013097) bg_popup_sub_pane_cp10

0xb3f6,	// (0x000164f2) list_choice_list_pane

0xb40d,	// (0x00016509) list_single_choice_list_pane_ParamLimits

0xb40d,	// (0x00016509) list_single_choice_list_pane

0xb421,	// (0x0001651d) list_single_choice_list_pane_g1

0xb429,	// (0x00016525) list_single_choice_list_pane_t1_ParamLimits

0xb429,	// (0x00016525) list_single_choice_list_pane_t1

0xb43e,	// (0x0001653a) choice_list_pane_g1

0xb446,	// (0x00016542) choice_list_pane_t1

0x5eec,	// (0x00010fe8) input_focus_pane_cp11

0x72b9,	// (0x000123b5) title_pane_stacon_g2_ParamLimits

0x72b9,	// (0x000123b5) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0001a804) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0001a804) title_pane_stacon_g

0x7c11,	// (0x00012d0d) cursor_press_pane

0x0f40,	// (0x0000c03c) popup_fep_hwr_window_ParamLimits

0x0f40,	// (0x0000c03c) popup_fep_hwr_window

0x80ed,	// (0x000131e9) popup_fep_vkb_window_ParamLimits

0x80ed,	// (0x000131e9) popup_fep_vkb_window

0xb454,	// (0x00016550) cursor_press_pane_g1

0x0002,

0xfb53,	// (0x0001ac4f) fep_vkb_side_pane_g_ParamLimits

0x5239,	// (0x00010335) fep_hwr_candidate_pane_ParamLimits

0x5239,	// (0x00010335) fep_hwr_candidate_pane

0x5263,	// (0x0001035f) fep_hwr_side_pane_ParamLimits

0x5263,	// (0x0001035f) fep_hwr_side_pane

0x5283,	// (0x0001037f) fep_hwr_top_pane_ParamLimits

0x5283,	// (0x0001037f) fep_hwr_top_pane

0x529b,	// (0x00010397) fep_hwr_write_pane_ParamLimits

0x529b,	// (0x00010397) fep_hwr_write_pane

0xfb53,	// (0x0001ac4f) fep_vkb_side_pane_g

0xb46a,	// (0x00016566) fep_hwr_top_pane_g1

0xb47c,	// (0x00016578) fep_hwr_top_pane_g2

0x52d5,	// (0x000103d1) fep_hwr_top_pane_g3

0x0002,

0xfb2f,	// (0x0001ac2b) fep_hwr_top_pane_g

0x52ea,	// (0x000103e6) fep_hwr_top_text_pane

0x75a5,	// (0x000126a1) fep_hwr_top_text_pane_g1

0xb4b2,	// (0x000165ae) fep_hwr_top_text_pane_t1

0x53e0,	// (0x000104dc) fep_hwr_candidate_pane_g1

0xb705,	// (0x00016801) fep_vkb_keypad_pane_g3_ParamLimits

0xb705,	// (0x00016801) fep_vkb_keypad_pane_g3

0xb72d,	// (0x00016829) fep_vkb_keypad_pane_g4_ParamLimits

0xb72d,	// (0x00016829) fep_vkb_keypad_pane_g4

0xb79c,	// (0x00016898) fep_vkb_bottom_pane_g2_ParamLimits

0xb79c,	// (0x00016898) fep_vkb_bottom_pane_g2

0x0001,

0xfb5a,	// (0x0001ac56) fep_vkb_bottom_pane_g_ParamLimits

0xfb5a,	// (0x0001ac56) fep_vkb_bottom_pane_g

0xb3ec,	// (0x000164e8) cell_vkb_side_pane_g2

0x0001,

0xfb64,	// (0x0001ac60) cell_vkb_side_pane_g

0xb827,	// (0x00016923) cell_vkb_side_pane_t1

0xb835,	// (0x00016931) cell_vkb_side_pane_t1_copy1

0xb3ec,	// (0x000164e8) bg_fep_vkb_candidate_pane_g2

0xb961,	// (0x00016a5d) cell_vkb_candidate_pane_ParamLimits

0xb4c0,	// (0x000165bc) aid_size_cell_vkb_ParamLimits

0xb4c0,	// (0x000165bc) aid_size_cell_vkb

0xb961,	// (0x00016a5d) cell_vkb_candidate_pane

0x5407,	// (0x00010503) bg_popup_fep_shadow_pane_g1

0x231a,	// (0x0000d416) fep_vkb_bottom_pane_ParamLimits

0x231a,	// (0x0000d416) fep_vkb_bottom_pane

0xb584,	// (0x00016680) fep_vkb_candidate_pane_ParamLimits

0xb584,	// (0x00016680) fep_vkb_candidate_pane

0x233f,	// (0x0000d43b) fep_vkb_keypad_pane_ParamLimits

0x233f,	// (0x0000d43b) fep_vkb_keypad_pane

0x237b,	// (0x0000d477) fep_vkb_side_pane_ParamLimits

0x237b,	// (0x0000d477) fep_vkb_side_pane

0x23b7,	// (0x0000d4b3) fep_vkb_top_pane_ParamLimits

0x23b7,	// (0x0000d4b3) fep_vkb_top_pane

0xb65e,	// (0x0001675a) fep_vkb_top_pane_g1_ParamLimits

0xb65e,	// (0x0001675a) fep_vkb_top_pane_g1

0xb66d,	// (0x00016769) fep_vkb_top_pane_g2_ParamLimits

0xb66d,	// (0x00016769) fep_vkb_top_pane_g2

0xb67c,	// (0x00016778) fep_vkb_top_pane_g3_ParamLimits

0xb67c,	// (0x00016778) fep_vkb_top_pane_g3

0x0003,

0xfb4a,	// (0x0001ac46) fep_vkb_top_pane_g_ParamLimits

0xfb4a,	// (0x0001ac46) fep_vkb_top_pane_g

0xb69a,	// (0x00016796) fep_vkb_top_text_pane_ParamLimits

0xb69a,	// (0x00016796) fep_vkb_top_text_pane

0x23f3,	// (0x0000d4ef) fep_vkb_side_pane_g1_ParamLimits

0x23f3,	// (0x0000d4ef) fep_vkb_side_pane_g1

0xb6f4,	// (0x000167f0) grid_vkb_side_pane_ParamLimits

0xb6f4,	// (0x000167f0) grid_vkb_side_pane

0x540f,	// (0x0001050b) bg_popup_fep_shadow_pane_g2

0x5418,	// (0x00010514) bg_popup_fep_shadow_pane_g3

0x5420,	// (0x0001051c) bg_popup_fep_shadow_pane_g4

0x5429,	// (0x00010525) bg_popup_fep_shadow_pane_g5

0x5433,	// (0x0001052f) bg_popup_fep_shadow_pane_g6

0x543b,	// (0x00010537) bg_popup_fep_shadow_pane_g7

0x6f17,	// (0x00012013) bg_popup_fep_shadow_pane_g8

0xb74b,	// (0x00016847) grid_vkb_keypad_number_pane_ParamLimits

0xb74b,	// (0x00016847) grid_vkb_keypad_number_pane

0xb75b,	// (0x00016857) grid_vkb_keypad_pane_ParamLimits

0xb75b,	// (0x00016857) grid_vkb_keypad_pane

0xb781,	// (0x0001687d) fep_vkb_bottom_pane_g1_ParamLimits

0xb781,	// (0x0001687d) fep_vkb_bottom_pane_g1

0xb7aa,	// (0x000168a6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb7aa,	// (0x000168a6) grid_vkb_keypad_bottom_left_pane

0xb7bf,	// (0x000168bb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb7bf,	// (0x000168bb) grid_vkb_keypad_bottom_right_pane

0xb7d4,	// (0x000168d0) fep_vkb_top_text_pane_g1

0x243a,	// (0x0000d536) fep_vkb_top_text_pane_t1

0x244c,	// (0x0000d548) cell_vkb_side_pane_ParamLimits

0x244c,	// (0x0000d548) cell_vkb_side_pane

0xb3ec,	// (0x000164e8) cell_vkb_side_pane_g1

0xb843,	// (0x0001693f) cell_vkb_keypad_pane_ParamLimits

0xb843,	// (0x0001693f) cell_vkb_keypad_pane

0xb8b8,	// (0x000169b4) cell_vkb_keypad_pane_g1

0x0008,

0xfb77,	// (0x0001ac73) bg_popup_fep_shadow_pane_g

0x544d,	// (0x00010549) cell_hwr_side_pane_g1

0x544d,	// (0x00010549) cell_hwr_side_pane_g2

0xb8c2,	// (0x000169be) cell_vkb_keypad_pane_t1

0x2462,	// (0x0000d55e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x2462,	// (0x0000d55e) cell_vkb_keypad_bottom_left_pane

0x2477,	// (0x0000d573) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x2477,	// (0x0000d573) cell_vkb_keypad_bottom_right_pane

0xb3ec,	// (0x000164e8) cell_vkb_keypad_bottom_left_pane_g1

0xb3ec,	// (0x000164e8) cell_vkb_keypad_bottom_right_pane_g1

0xb926,	// (0x00016a22) cell_vkb_keypad_number_pane_ParamLimits

0xb926,	// (0x00016a22) cell_vkb_keypad_number_pane

0xb945,	// (0x00016a41) cell_vkb_keypad_number_pane_g1

0xb94f,	// (0x00016a4b) cell_vkb_keypad_number_pane_g2

0xb958,	// (0x00016a54) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb69,	// (0x0001ac65) cell_vkb_keypad_number_pane_g

0xb8c2,	// (0x000169be) cell_vkb_keypad_number_pane_t1

0xb97c,	// (0x00016a78) fep_vkb_candidate_pane_g1

0x0001,

0xfb8a,	// (0x0001ac86) cell_hwr_side_pane_g

0xb995,	// (0x00016a91) cell_hwr_side_pane_t1

0x5457,	// (0x00010553) cell_hwr_side_pane_t1_copy1

0x5465,	// (0x00010561) cell_hwr_candidate_pane_g1

0x5494,	// (0x00010590) cell_hwr_candidate_pane_t1

0xb3ec,	// (0x000164e8) cell_vkb_candidate_pane_g2

0xb9d9,	// (0x00016ad5) cell_vkb_candidate_pane_t1

0x5200,	// (0x000102fc) bg_popup_fep_shadow_pane_ParamLimits

0x5200,	// (0x000102fc) bg_popup_fep_shadow_pane

0x52b5,	// (0x000103b1) bg_fep_hwr_top_pane_g4

0xb48e,	// (0x0001658a) bg_hwr_side_pane_g1_ParamLimits

0xb48e,	// (0x0001658a) bg_hwr_side_pane_g1

0xe971,	// (0x00019a6d) cell_hwr_side_pane_ParamLimits

0xe971,	// (0x00019a6d) cell_hwr_side_pane

0x5361,	// (0x0001045d) fep_hwr_write_pane_g1_ParamLimits

0x5361,	// (0x0001045d) fep_hwr_write_pane_g1

0x536e,	// (0x0001046a) fep_hwr_write_pane_g2_ParamLimits

0x536e,	// (0x0001046a) fep_hwr_write_pane_g2

0x537b,	// (0x00010477) fep_hwr_write_pane_g3_ParamLimits

0x537b,	// (0x00010477) fep_hwr_write_pane_g3

0xe991,	// (0x00019a8d) fep_hwr_write_pane_g4_ParamLimits

0xe991,	// (0x00019a8d) fep_hwr_write_pane_g4

0x0005,

0xfb36,	// (0x0001ac32) fep_hwr_write_pane_g_ParamLimits

0xfb36,	// (0x0001ac32) fep_hwr_write_pane_g

0x52b5,	// (0x000103b1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x52b5,	// (0x000103b1) bg_fep_hwr_candidate_pane_g2

0x539e,	// (0x0001049a) cell_hwr_candidate_pane_ParamLimits

0x539e,	// (0x0001049a) cell_hwr_candidate_pane

0x53e0,	// (0x000104dc) fep_hwr_candidate_pane_g1_ParamLimits

0xb4ee,	// (0x000165ea) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb4ee,	// (0x000165ea) bg_popup_fep_shadow_pane_cp2

0xb68c,	// (0x00016788) fep_vkb_top_pane_g4_ParamLimits

0xb68c,	// (0x00016788) fep_vkb_top_pane_g4

0xb6d2,	// (0x000167ce) fep_vkb_side_pane_g2_ParamLimits

0xb6d2,	// (0x000167ce) fep_vkb_side_pane_g2

0x0748,	// (0x0000b844) list_setting_pane_t4_ParamLimits

0x0748,	// (0x0000b844) list_setting_pane_t4

0x07c2,	// (0x0000b8be) list_setting_number_pane_t5_ParamLimits

0x07c2,	// (0x0000b8be) list_setting_number_pane_t5

0x0ad5,	// (0x0000bbd1) list_double_heading_pane_cp2_ParamLimits

0x0ad5,	// (0x0000bbd1) list_double_heading_pane_cp2

0x6ded,	// (0x00011ee9) list_double_heading_pane_g1_cp2_ParamLimits

0x6ded,	// (0x00011ee9) list_double_heading_pane_g1_cp2

0x6df9,	// (0x00011ef5) list_double_heading_pane_g2_cp2_ParamLimits

0x6df9,	// (0x00011ef5) list_double_heading_pane_g2_cp2

0xb9e7,	// (0x00016ae3) list_double_heading_pane_t1_cp2_ParamLimits

0xb9e7,	// (0x00016ae3) list_double_heading_pane_t1_cp2

0xb9fd,	// (0x00016af9) list_double_heading_pane_t2_cp2_ParamLimits

0xb9fd,	// (0x00016af9) list_double_heading_pane_t2_cp2

0x5ed4,	// (0x00010fd0) aid_value_unit2

0x4594,	// (0x0000f690) popup_preview_fixed_window

0x6283,	// (0x0001137f) bg_popup_preview_window_pane_cp02

0xba0f,	// (0x00016b0b) list_preview_fixed_pane

0xba55,	// (0x00016b51) list_empty_pane_fp_ParamLimits

0xba55,	// (0x00016b51) list_empty_pane_fp

0xba55,	// (0x00016b51) list_single_cale_day_pane_fp_ParamLimits

0xba55,	// (0x00016b51) list_single_cale_day_pane_fp

0xba55,	// (0x00016b51) list_single_graphic_heading_pane_fp_ParamLimits

0xba55,	// (0x00016b51) list_single_graphic_heading_pane_fp

0xba55,	// (0x00016b51) list_single_graphic_pane_fp_ParamLimits

0xba55,	// (0x00016b51) list_single_graphic_pane_fp

0xba55,	// (0x00016b51) list_single_heading_pane_fp_ParamLimits

0xba55,	// (0x00016b51) list_single_heading_pane_fp

0xba55,	// (0x00016b51) list_single_pane_fp_ParamLimits

0xba55,	// (0x00016b51) list_single_pane_fp

0xba6a,	// (0x00016b66) list_single_pane_fp_g1_ParamLimits

0xba6a,	// (0x00016b66) list_single_pane_fp_g1

0x6a2a,	// (0x00011b26) list_single_pane_fp_g2_ParamLimits

0x6a2a,	// (0x00011b26) list_single_pane_fp_g2

0xba76,	// (0x00016b72) list_single_pane_fp_g3_ParamLimits

0xba76,	// (0x00016b72) list_single_pane_fp_g3

0xba8a,	// (0x00016b86) list_single_pane_fp_g4_ParamLimits

0xba8a,	// (0x00016b86) list_single_pane_fp_g4

0x0003,

0xfb9d,	// (0x0001ac99) list_single_pane_fp_g_ParamLimits

0xfb9d,	// (0x0001ac99) list_single_pane_fp_g

0xba96,	// (0x00016b92) list_single_pane_fp_t1_ParamLimits

0xba96,	// (0x00016b92) list_single_pane_fp_t1

0xbaad,	// (0x00016ba9) list_single_graphic_pane_fp_g1_ParamLimits

0xbaad,	// (0x00016ba9) list_single_graphic_pane_fp_g1

0xba6a,	// (0x00016b66) list_single_graphic_pane_fp_g2_ParamLimits

0xba6a,	// (0x00016b66) list_single_graphic_pane_fp_g2

0x6a2a,	// (0x00011b26) list_single_graphic_pane_fp_g3_ParamLimits

0x6a2a,	// (0x00011b26) list_single_graphic_pane_fp_g3

0xba76,	// (0x00016b72) list_single_graphic_pane_fp_g4_ParamLimits

0xba76,	// (0x00016b72) list_single_graphic_pane_fp_g4

0xba8a,	// (0x00016b86) list_single_graphic_pane_fp_g5_ParamLimits

0xba8a,	// (0x00016b86) list_single_graphic_pane_fp_g5

0x0004,

0xfba6,	// (0x0001aca2) list_single_graphic_pane_fp_g_ParamLimits

0xfba6,	// (0x0001aca2) list_single_graphic_pane_fp_g

0xbab9,	// (0x00016bb5) list_single_graphic_pane_fp_t1_ParamLimits

0xbab9,	// (0x00016bb5) list_single_graphic_pane_fp_t1

0xbaad,	// (0x00016ba9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xbaad,	// (0x00016ba9) list_single_graphic_heading_pane_fp_g1

0xba6a,	// (0x00016b66) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xba6a,	// (0x00016b66) list_single_graphic_heading_pane_fp_g2

0x6a2a,	// (0x00011b26) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6a2a,	// (0x00011b26) list_single_graphic_heading_pane_fp_g3

0xba76,	// (0x00016b72) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xba76,	// (0x00016b72) list_single_graphic_heading_pane_fp_g4

0xba8a,	// (0x00016b86) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xba8a,	// (0x00016b86) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba6,	// (0x0001aca2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0001aca2) list_single_graphic_heading_pane_fp_g

0xbacf,	// (0x00016bcb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xbacf,	// (0x00016bcb) list_single_graphic_heading_pane_fp_t1

0xbae5,	// (0x00016be1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xbae5,	// (0x00016be1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x0001acad) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x0001acad) list_single_graphic_heading_pane_fp_t

0xbaf7,	// (0x00016bf3) list_single_cale_day_pane_fp_g1_ParamLimits

0xbaf7,	// (0x00016bf3) list_single_cale_day_pane_fp_g1

0xbb2f,	// (0x00016c2b) list_single_cale_day_pane_fp_g2_ParamLimits

0xbb2f,	// (0x00016c2b) list_single_cale_day_pane_fp_g2

0xbb3b,	// (0x00016c37) list_single_cale_day_pane_fp_g3_ParamLimits

0xbb3b,	// (0x00016c37) list_single_cale_day_pane_fp_g3

0xbb63,	// (0x00016c5f) list_single_cale_day_pane_fp_g4_ParamLimits

0xbb63,	// (0x00016c5f) list_single_cale_day_pane_fp_g4

0xbb87,	// (0x00016c83) list_single_cale_day_pane_fp_g5_ParamLimits

0xbb87,	// (0x00016c83) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb6,	// (0x0001acb2) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb6,	// (0x0001acb2) list_single_cale_day_pane_fp_g

0xbbab,	// (0x00016ca7) list_single_cale_day_pane_fp_t1_ParamLimits

0xbbab,	// (0x00016ca7) list_single_cale_day_pane_fp_t1

0xbbd1,	// (0x00016ccd) list_single_cale_day_pane_fp_t2_ParamLimits

0xbbd1,	// (0x00016ccd) list_single_cale_day_pane_fp_t2

0xbbea,	// (0x00016ce6) list_single_cale_day_pane_fp_t3_ParamLimits

0xbbea,	// (0x00016ce6) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc1,	// (0x0001acbd) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc1,	// (0x0001acbd) list_single_cale_day_pane_fp_t

0xba6a,	// (0x00016b66) list_empty_pane_fp_g1_ParamLimits

0xba6a,	// (0x00016b66) list_empty_pane_fp_g1

0xbc03,	// (0x00016cff) list_empty_pane_fp_t1

0xbc11,	// (0x00016d0d) list_empty_pane_fp_t2

0x0001,

0xfbc8,	// (0x0001acc4) list_empty_pane_fp_t

0xba6a,	// (0x00016b66) list_single_heading_pane_fp_g1_ParamLimits

0xba6a,	// (0x00016b66) list_single_heading_pane_fp_g1

0x6a2a,	// (0x00011b26) list_single_heading_pane_fp_g2_ParamLimits

0x6a2a,	// (0x00011b26) list_single_heading_pane_fp_g2

0xba76,	// (0x00016b72) list_single_heading_pane_fp_g3_ParamLimits

0xba76,	// (0x00016b72) list_single_heading_pane_fp_g3

0x0002,

0xfbcd,	// (0x0001acc9) list_single_heading_pane_fp_g_ParamLimits

0xfbcd,	// (0x0001acc9) list_single_heading_pane_fp_g

0xbc1f,	// (0x00016d1b) list_single_heading_pane_fp_t1_ParamLimits

0xbc1f,	// (0x00016d1b) list_single_heading_pane_fp_t1

0xbc31,	// (0x00016d2d) list_single_heading_pane_fp_t2_ParamLimits

0xbc31,	// (0x00016d2d) list_single_heading_pane_fp_t2

0x0001,

0xfbd4,	// (0x0001acd0) list_single_heading_pane_fp_t_ParamLimits

0xfbd4,	// (0x0001acd0) list_single_heading_pane_fp_t

0x7150,	// (0x0001224c) aid_size_cell_fast

0x61f3,	// (0x000112ef) soft_indicator_pane_cp1_t1

0x718d,	// (0x00012289) cell_app_pane_cp2_ParamLimits

0x718d,	// (0x00012289) cell_app_pane_cp2

0x5222,	// (0x0001031e) fep_hwr_candidate_drop_down_list_pane

0x53fa,	// (0x000104f6) fep_hwr_candidate_pane_g3_ParamLimits

0x53fa,	// (0x000104f6) fep_hwr_candidate_pane_g3

0x36ec,	// (0x0000e7e8) fep_hwr_candidate_pane_g4_ParamLimits

0x36ec,	// (0x0000e7e8) fep_hwr_candidate_pane_g4

0x0002,

0xfb43,	// (0x0001ac3f) fep_hwr_candidate_pane_g_ParamLimits

0xfb43,	// (0x0001ac3f) fep_hwr_candidate_pane_g

0xb573,	// (0x0001666f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb573,	// (0x0001666f) fep_vkb_candidate_drop_down_list_pane

0xb984,	// (0x00016a80) fep_vkb_candidate_pane_g3

0xb98c,	// (0x00016a88) fep_vkb_candidate_pane_g4

0x0002,

0xfb70,	// (0x0001ac6c) fep_vkb_candidate_pane_g

0x5465,	// (0x00010561) cell_hwr_candidate_pane_g1_ParamLimits

0x5473,	// (0x0001056f) cell_hwr_candidate_pane_g3_ParamLimits

0x5473,	// (0x0001056f) cell_hwr_candidate_pane_g3

0xda49,	// (0x00018b45) cell_hwr_candidate_pane_g4_ParamLimits

0xda49,	// (0x00018b45) cell_hwr_candidate_pane_g4

0x0002,

0xfb8f,	// (0x0001ac8b) cell_hwr_candidate_pane_g_ParamLimits

0xfb8f,	// (0x0001ac8b) cell_hwr_candidate_pane_g

0xb9a3,	// (0x00016a9f) cell_vkb_candidate_pane_g3_ParamLimits

0xb9a3,	// (0x00016a9f) cell_vkb_candidate_pane_g3

0xb9be,	// (0x00016aba) cell_vkb_candidate_pane_g4_ParamLimits

0xb9be,	// (0x00016aba) cell_vkb_candidate_pane_g4

0xbc47,	// (0x00016d43) cell_app_pane_cp2_g1_ParamLimits

0xbc47,	// (0x00016d43) cell_app_pane_cp2_g1

0xbc65,	// (0x00016d61) cell_app_pane_cp2_g2_ParamLimits

0xbc65,	// (0x00016d61) cell_app_pane_cp2_g2

0x0001,

0xfbd9,	// (0x0001acd5) cell_app_pane_cp2_g_ParamLimits

0xfbd9,	// (0x0001acd5) cell_app_pane_cp2_g

0xbc71,	// (0x00016d6d) cell_app_pane_cp2_t1_ParamLimits

0xbc71,	// (0x00016d6d) cell_app_pane_cp2_t1

0x6dc7,	// (0x00011ec3) grid_highlight_pane_cp1_ParamLimits

0x6dc7,	// (0x00011ec3) grid_highlight_pane_cp1

0x54b2,	// (0x000105ae) cell_hwr_candidate_pane_cp1_ParamLimits

0x54b2,	// (0x000105ae) cell_hwr_candidate_pane_cp1

0x5465,	// (0x00010561) fep_hwr_candidate_drop_down_list_pane_g1

0x54d1,	// (0x000105cd) fep_hwr_candidate_drop_down_list_pane_g2

0x54de,	// (0x000105da) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0001acda) fep_hwr_candidate_drop_down_list_pane_g

0x54eb,	// (0x000105e7) fep_hwr_candidate_drop_down_list_scroll_pane

0x54f4,	// (0x000105f0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x54f4,	// (0x000105f0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5501,	// (0x000105fd) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5501,	// (0x000105fd) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x550e,	// (0x0001060a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x550e,	// (0x0001060a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x551b,	// (0x00010617) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x551b,	// (0x00010617) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5536,	// (0x00010632) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5536,	// (0x00010632) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5551,	// (0x0001064d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5551,	// (0x0001064d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x556c,	// (0x00010668) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x556c,	// (0x00010668) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5587,	// (0x00010683) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5587,	// (0x00010683) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0001ace1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0001ace1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbcdf,	// (0x00016ddb) cell_vkb_candidate_pane_cp1_ParamLimits

0xbcdf,	// (0x00016ddb) cell_vkb_candidate_pane_cp1

0xb68c,	// (0x00016788) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb68c,	// (0x00016788) fep_vkb_candidate_drop_down_list_pane_g1

0xbc83,	// (0x00016d7f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbc83,	// (0x00016d7f) fep_vkb_candidate_drop_down_list_pane_g2

0xbc90,	// (0x00016d8c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbc90,	// (0x00016d8c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf6,	// (0x0001acf2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf6,	// (0x0001acf2) fep_vkb_candidate_drop_down_list_pane_g

0xbcff,	// (0x00016dfb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbcff,	// (0x00016dfb) fep_vkb_candidate_drop_down_list_scroll_pane

0xbd0c,	// (0x00016e08) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbd0c,	// (0x00016e08) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbd19,	// (0x00016e15) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbd19,	// (0x00016e15) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbd25,	// (0x00016e21) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbd25,	// (0x00016e21) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbc9d,	// (0x00016d99) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbc9d,	// (0x00016d99) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbcbe,	// (0x00016dba) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbcbe,	// (0x00016dba) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbd31,	// (0x00016e2d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbd31,	// (0x00016e2d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbd52,	// (0x00016e4e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbd52,	// (0x00016e4e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbd73,	// (0x00016e6f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbd73,	// (0x00016e6f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbfd,	// (0x0001acf9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbfd,	// (0x0001acf9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x005a,	// (0x0000b156) title_pane_g1_ParamLimits

0x006b,	// (0x0000b167) title_pane_g2_ParamLimits

0xf592,	// (0x0001a68e) title_pane_g_ParamLimits

0x7595,	// (0x00012691) aid_call2_pane

0x759d,	// (0x00012699) aid_call_pane

0x75a5,	// (0x000126a1) popup_clock_analogue_window_g1

0x75a5,	// (0x000126a1) popup_clock_analogue_window_g2

0x48fd,	// (0x0000f9f9) popup_clock_analogue_window_g3

0x4906,	// (0x0000fa02) popup_clock_analogue_window_g4

0x5ef6,	// (0x00010ff2) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0001a833) popup_clock_analogue_window_g

0x490e,	// (0x0000fa0a) popup_clock_analogue_window_t1

0x491c,	// (0x0000fa18) clock_digital_number_pane_ParamLimits

0x491c,	// (0x0000fa18) clock_digital_number_pane

0x4928,	// (0x0000fa24) clock_digital_number_pane_cp02_ParamLimits

0x4928,	// (0x0000fa24) clock_digital_number_pane_cp02

0x4934,	// (0x0000fa30) clock_digital_number_pane_cp03_ParamLimits

0x4934,	// (0x0000fa30) clock_digital_number_pane_cp03

0x4940,	// (0x0000fa3c) clock_digital_number_pane_cp04_ParamLimits

0x4940,	// (0x0000fa3c) clock_digital_number_pane_cp04

0x494c,	// (0x0000fa48) clock_digital_separator_pane_ParamLimits

0x494c,	// (0x0000fa48) clock_digital_separator_pane

0x4958,	// (0x0000fa54) popup_clock_digital_window_t1_ParamLimits

0x4958,	// (0x0000fa54) popup_clock_digital_window_t1

0x5ef6,	// (0x00010ff2) clock_digital_number_pane_g1

0x5ef6,	// (0x00010ff2) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0001a83e) clock_digital_number_pane_g

0x5ef6,	// (0x00010ff2) clock_digital_separator_pane_g1

0x5ef6,	// (0x00010ff2) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0001a83e) clock_digital_separator_pane_g

0x1519,	// (0x0000c615) aid_fill_nsta_ParamLimits

0x1648,	// (0x0000c744) indicator_nsta_pane_ParamLimits

0x8810,	// (0x0001390c) popup_clock_analogue_window

0x8810,	// (0x0001390c) popup_clock_digital_window

0x7111,	// (0x0001220d) grid_indicator_nsta_pane_ParamLimits

0xadae,	// (0x00015eaa) clock_nsta_pane_t2

0x0001,

0xfad0,	// (0x0001abcc) clock_nsta_pane_t

0x48c1,	// (0x0000f9bd) aid_size_max_handle

0xe65d,	// (0x00019759) aid_size_min_handle

0x7c11,	// (0x00012d0d) editor_scroll_pane

0xbd8e,	// (0x00016e8a) ex_editor_pane

0x70be,	// (0x000121ba) scroll_pane_cp13

0x6805,	// (0x00011901) scroll_pane_cp14

0x75cf,	// (0x000126cb) scroll_pane_cp36

0x0ae4,	// (0x0000bbe0) list_single_graphic_hl_pane_cp2_ParamLimits

0x0ae4,	// (0x0000bbe0) list_single_graphic_hl_pane_cp2

0x1f1f,	// (0x0000d01b) list_single_graphic_hl_pane_ParamLimits

0x1f1f,	// (0x0000d01b) list_single_graphic_hl_pane

0xbd96,	// (0x00016e92) aid_size_min_hl_cp1

0xbd9f,	// (0x00016e9b) list_highlight_pane_cp34_ParamLimits

0xbd9f,	// (0x00016e9b) list_highlight_pane_cp34

0xbdb0,	// (0x00016eac) list_single_graphic_hl_pane_g1_ParamLimits

0xbdb0,	// (0x00016eac) list_single_graphic_hl_pane_g1

0x2492,	// (0x0000d58e) list_single_graphic_hl_pane_g2_ParamLimits

0x2492,	// (0x0000d58e) list_single_graphic_hl_pane_g2

0x2492,	// (0x0000d58e) list_single_graphic_hl_pane_g3_ParamLimits

0x2492,	// (0x0000d58e) list_single_graphic_hl_pane_g3

0x7b82,	// (0x00012c7e) list_single_graphic_hl_pane_g4_ParamLimits

0x7b82,	// (0x00012c7e) list_single_graphic_hl_pane_g4

0x249e,	// (0x0000d59a) list_single_graphic_hl_pane_g5_ParamLimits

0x249e,	// (0x0000d59a) list_single_graphic_hl_pane_g5

0x0004,

0xfc0e,	// (0x0001ad0a) list_single_graphic_hl_pane_g_ParamLimits

0xfc0e,	// (0x0001ad0a) list_single_graphic_hl_pane_g

0x24b2,	// (0x0000d5ae) list_single_graphic_hl_pane_t1_ParamLimits

0x24b2,	// (0x0000d5ae) list_single_graphic_hl_pane_t1

0xbdf3,	// (0x00016eef) aid_size_min_hl_cp2

0xbdfc,	// (0x00016ef8) list_highlight_pane_cp34_cp2_ParamLimits

0xbdfc,	// (0x00016ef8) list_highlight_pane_cp34_cp2

0xbdb0,	// (0x00016eac) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbdb0,	// (0x00016eac) list_single_graphic_hl_pane_g1_cp2

0xbe09,	// (0x00016f05) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbe09,	// (0x00016f05) list_single_graphic_hl_pane_g2_cp2

0xbe15,	// (0x00016f11) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbe15,	// (0x00016f11) list_single_graphic_hl_pane_g3_cp2

0x89e9,	// (0x00013ae5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x89e9,	// (0x00013ae5) list_single_graphic_hl_pane_g4_cp2

0xbdc9,	// (0x00016ec5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbdc9,	// (0x00016ec5) list_single_graphic_hl_pane_g5_cp2

0xe68f,	// (0x0001978b) control_pane_g4_ParamLimits

0xe68f,	// (0x0001978b) control_pane_g4

0x7f9b,	// (0x00013097) bg_popup_sub_pane_cp10_ParamLimits

0xb3f6,	// (0x000164f2) list_choice_list_pane_ParamLimits

0xb405,	// (0x00016501) scroll_pane_cp23

0x6283,	// (0x0001137f) bg_popup_preview_window_pane_cp02_ParamLimits

0xba0f,	// (0x00016b0b) list_preview_fixed_pane_ParamLimits

0xba25,	// (0x00016b21) list_preview_fixed_pane_cp_ParamLimits

0xba25,	// (0x00016b21) list_preview_fixed_pane_cp

0xba31,	// (0x00016b2d) popup_preview_fixed_window_g1_ParamLimits

0xba31,	// (0x00016b2d) popup_preview_fixed_window_g1

0xba3d,	// (0x00016b39) popup_preview_fixed_window_g2_ParamLimits

0xba3d,	// (0x00016b39) popup_preview_fixed_window_g2

0x0002,

0xfb96,	// (0x0001ac92) popup_preview_fixed_window_g_ParamLimits

0xfb96,	// (0x0001ac92) popup_preview_fixed_window_g

0x4835,	// (0x0000f931) aid_navi_side_left_pane_ParamLimits

0x484a,	// (0x0000f946) aid_navi_side_right_pane_ParamLimits

0x4862,	// (0x0000f95e) navi_icon_pane_stacon_ParamLimits

0x4876,	// (0x0000f972) navi_navi_pane_stacon_ParamLimits

0x4862,	// (0x0000f95e) navi_text_pane_stacon_ParamLimits

0x5eec,	// (0x00010fe8) main_text_info_pane

0xbe39,	// (0x00016f35) listscroll_text_info_pane

0xbe41,	// (0x00016f3d) list_text_info_pane_ParamLimits

0xbe41,	// (0x00016f3d) list_text_info_pane

0xbe50,	// (0x00016f4c) scroll_pane_cp24_ParamLimits

0xbe50,	// (0x00016f4c) scroll_pane_cp24

0x24c8,	// (0x0000d5c4) list_text_info_pane_t1_ParamLimits

0x24c8,	// (0x0000d5c4) list_text_info_pane_t1

0x0eb3,	// (0x0000bfaf) popup_fast_swap2_window_ParamLimits

0x0eb3,	// (0x0000bfaf) popup_fast_swap2_window

0xbe9f,	// (0x00016f9b) aid_size_cell_fast2

0x5eec,	// (0x00010fe8) bg_popup_window_pane_cp17

0x8f8d,	// (0x00014089) heading_pane_cp2

0x64cf,	// (0x000115cb) listscroll_fast2_pane

0xbea9,	// (0x00016fa5) grid_fast2_pane

0xbeb3,	// (0x00016faf) listscroll_fast2_pane_g1

0xbebb,	// (0x00016fb7) listscroll_fast2_pane_g2

0x0001,

0xfc19,	// (0x0001ad15) listscroll_fast2_pane_g

0x70be,	// (0x000121ba) scroll_pane_cp26

0xbec5,	// (0x00016fc1) cell_fast2_pane_ParamLimits

0xbec5,	// (0x00016fc1) cell_fast2_pane

0xbeda,	// (0x00016fd6) cell_fast2_pane_g1

0xbee3,	// (0x00016fdf) cell_fast2_pane_g2

0xbeec,	// (0x00016fe8) cell_fast2_pane_g3

0x0002,

0xfc1e,	// (0x0001ad1a) cell_fast2_pane_g

0x65c2,	// (0x000116be) grid_highlight_pane_cp9

0x65d7,	// (0x000116d3) main_eswt_pane_ParamLimits

0x65d7,	// (0x000116d3) main_eswt_pane

0xbe65,	// (0x00016f61) list_single_text_info_pane

0xbef4,	// (0x00016ff0) eswt_ctrl_button_pane

0xbef4,	// (0x00016ff0) eswt_ctrl_canvas_pane

0xbefc,	// (0x00016ff8) eswt_ctrl_combo_pane

0xbef4,	// (0x00016ff0) eswt_ctrl_default_pane

0xbef4,	// (0x00016ff0) eswt_ctrl_label_pane

0xbf04,	// (0x00017000) eswt_ctrl_wait_pane

0xbf0c,	// (0x00017008) eswt_shell_pane

0x5eec,	// (0x00010fe8) listscroll_eswt_app_pane

0xbf2c,	// (0x00017028) popup_eswt_tasktip_window_ParamLimits

0xbf2c,	// (0x00017028) popup_eswt_tasktip_window

0x8b8d,	// (0x00013c89) bg_popup_window_pane_cp18

0xbf3d,	// (0x00017039) eswt_control_pane_g1_ParamLimits

0xbf3d,	// (0x00017039) eswt_control_pane_g1

0xbf4a,	// (0x00017046) eswt_control_pane_g2_ParamLimits

0xbf4a,	// (0x00017046) eswt_control_pane_g2

0xbf57,	// (0x00017053) eswt_control_pane_g3_ParamLimits

0xbf57,	// (0x00017053) eswt_control_pane_g3

0xbf64,	// (0x00017060) eswt_control_pane_g4_ParamLimits

0xbf64,	// (0x00017060) eswt_control_pane_g4

0x0003,

0xfc25,	// (0x0001ad21) eswt_control_pane_g_ParamLimits

0xfc25,	// (0x0001ad21) eswt_control_pane_g

0x6dc7,	// (0x00011ec3) bg_button_pane_ParamLimits

0x6dc7,	// (0x00011ec3) bg_button_pane

0x65d7,	// (0x000116d3) common_borders_pane_copy2_ParamLimits

0x65d7,	// (0x000116d3) common_borders_pane_copy2

0xbf71,	// (0x0001706d) control_button_pane_g1_ParamLimits

0xbf71,	// (0x0001706d) control_button_pane_g1

0xbf7d,	// (0x00017079) control_button_pane_g2_ParamLimits

0xbf7d,	// (0x00017079) control_button_pane_g2

0xbf89,	// (0x00017085) control_button_pane_g3_ParamLimits

0xbf89,	// (0x00017085) control_button_pane_g3

0x0002,

0xfc2e,	// (0x0001ad2a) control_button_pane_g_ParamLimits

0xfc2e,	// (0x0001ad2a) control_button_pane_g

0xbf9d,	// (0x00017099) control_button_pane_t1

0xbfab,	// (0x000170a7) control_button_pane_t2

0x0001,

0xfc35,	// (0x0001ad31) control_button_pane_t

0x8a73,	// (0x00013b6f) bg_button_pane_g1

0x8a83,	// (0x00013b7f) bg_button_pane_g2

0x8a7b,	// (0x00013b77) bg_button_pane_g3

0x8a93,	// (0x00013b8f) bg_button_pane_g4

0x8a8b,	// (0x00013b87) bg_button_pane_g5

0x8a9b,	// (0x00013b97) bg_button_pane_g6

0x8aa3,	// (0x00013b9f) bg_button_pane_g7

0x8ab3,	// (0x00013baf) bg_button_pane_g8

0x8aab,	// (0x00013ba7) bg_button_pane_g9

0x0008,

0xf895,	// (0x0001a991) bg_button_pane_g

0xb3b1,	// (0x000164ad) common_borders_pane_ParamLimits

0xb3b1,	// (0x000164ad) common_borders_pane

0xbf3d,	// (0x00017039) eswt_control_pane_g1_copy1_ParamLimits

0xbf3d,	// (0x00017039) eswt_control_pane_g1_copy1

0xbf4a,	// (0x00017046) eswt_control_pane_g2_copy1_ParamLimits

0xbf4a,	// (0x00017046) eswt_control_pane_g2_copy1

0xbf57,	// (0x00017053) eswt_control_pane_g3_copy1_ParamLimits

0xbf57,	// (0x00017053) eswt_control_pane_g3_copy1

0xbf64,	// (0x00017060) eswt_control_pane_g4_copy1_ParamLimits

0xbf64,	// (0x00017060) eswt_control_pane_g4_copy1

0xb3ec,	// (0x000164e8) bg_eswt_ctrl_canvas_pane_g1

0xb3b1,	// (0x000164ad) common_borders_pane_cp2_ParamLimits

0xb3b1,	// (0x000164ad) common_borders_pane_cp2

0xb3b1,	// (0x000164ad) common_borders_pane_cp3_ParamLimits

0xb3b1,	// (0x000164ad) common_borders_pane_cp3

0xbfb9,	// (0x000170b5) separator_horizontal_pane

0xbfc1,	// (0x000170bd) separator_vertical_pane

0xbf3d,	// (0x00017039) eswt_control_pane_g1_copy2_ParamLimits

0xbf3d,	// (0x00017039) eswt_control_pane_g1_copy2

0xbf4a,	// (0x00017046) eswt_control_pane_g2_copy2_ParamLimits

0xbf4a,	// (0x00017046) eswt_control_pane_g2_copy2

0xbf57,	// (0x00017053) eswt_control_pane_g3_copy2_ParamLimits

0xbf57,	// (0x00017053) eswt_control_pane_g3_copy2

0xbf64,	// (0x00017060) eswt_control_pane_g4_copy2_ParamLimits

0xbf64,	// (0x00017060) eswt_control_pane_g4_copy2

0x5eec,	// (0x00010fe8) common_borders_pane_cp4

0xbfca,	// (0x000170c6) separator_horizontal_pane_g1

0xbfd3,	// (0x000170cf) separator_horizontal_pane_g2

0xbfdc,	// (0x000170d8) separator_horizontal_pane_g3

0x0002,

0xfc3a,	// (0x0001ad36) separator_horizontal_pane_g

0xbf3d,	// (0x00017039) eswt_control_pane_g1_copy3_ParamLimits

0xbf3d,	// (0x00017039) eswt_control_pane_g1_copy3

0xbf4a,	// (0x00017046) eswt_control_pane_g2_copy3_ParamLimits

0xbf4a,	// (0x00017046) eswt_control_pane_g2_copy3

0xbf57,	// (0x00017053) eswt_control_pane_g3_copy3_ParamLimits

0xbf57,	// (0x00017053) eswt_control_pane_g3_copy3

0xbf64,	// (0x00017060) eswt_control_pane_g4_copy3_ParamLimits

0xbf64,	// (0x00017060) eswt_control_pane_g4_copy3

0x5eec,	// (0x00010fe8) common_borders_pane_cp5

0xbfe5,	// (0x000170e1) separator_vertical_pane_g1

0xbfee,	// (0x000170ea) separator_vertical_pane_g2

0xbff7,	// (0x000170f3) separator_vertical_pane_g3

0x0002,

0xfc41,	// (0x0001ad3d) separator_vertical_pane_g

0xbf3d,	// (0x00017039) eswt_control_pane_g1_copy4_ParamLimits

0xbf3d,	// (0x00017039) eswt_control_pane_g1_copy4

0xbf4a,	// (0x00017046) eswt_control_pane_g2_copy4_ParamLimits

0xbf4a,	// (0x00017046) eswt_control_pane_g2_copy4

0xbf57,	// (0x00017053) eswt_control_pane_g3_copy4_ParamLimits

0xbf57,	// (0x00017053) eswt_control_pane_g3_copy4

0xbf64,	// (0x00017060) eswt_control_pane_g4_copy4_ParamLimits

0xbf64,	// (0x00017060) eswt_control_pane_g4_copy4

0x24e3,	// (0x0000d5df) eswt_ctrl_combo_button_pane

0x24eb,	// (0x0000d5e7) eswt_ctrl_input_pane

0x24f3,	// (0x0000d5ef) popup_choice_list_window_cp70

0x24fb,	// (0x0000d5f7) eswt_ctrl_input_pane_t1

0x5eec,	// (0x00010fe8) input_focus_pane_cp70

0xb3b1,	// (0x000164ad) bg_button_pane_cp70_ParamLimits

0xb3b1,	// (0x000164ad) bg_button_pane_cp70

0x2509,	// (0x0000d605) eswt_ctrl_combo_button_pane_g1

0xc02e,	// (0x0001712a) wait_bar_pane_cp70

0x8b8d,	// (0x00013c89) bg_popup_window_pane_cp70_ParamLimits

0x8b8d,	// (0x00013c89) bg_popup_window_pane_cp70

0xc036,	// (0x00017132) popup_eswt_tasktip_window_t1

0xc04c,	// (0x00017148) wait_bar_pane_cp71_ParamLimits

0xc04c,	// (0x00017148) wait_bar_pane_cp71

0xc058,	// (0x00017154) grid_eswt_app_pane

0x73d7,	// (0x000124d3) scroll_pane_cp70

0x2511,	// (0x0000d60d) cell_eswt_app_pane_ParamLimits

0x2511,	// (0x0000d60d) cell_eswt_app_pane

0x253b,	// (0x0000d637) cell_eswt_app_pane_g1_ParamLimits

0x253b,	// (0x0000d637) cell_eswt_app_pane_g1

0x256a,	// (0x0000d666) cell_eswt_app_pane_g2_ParamLimits

0x256a,	// (0x0000d666) cell_eswt_app_pane_g2

0x0001,

0xfc48,	// (0x0001ad44) cell_eswt_app_pane_g_ParamLimits

0xfc48,	// (0x0001ad44) cell_eswt_app_pane_g

0x2593,	// (0x0000d68f) cell_eswt_app_pane_t1_ParamLimits

0x2593,	// (0x0000d68f) cell_eswt_app_pane_t1

0xc11b,	// (0x00017217) grid_highlight_pane_cp70_ParamLimits

0xc11b,	// (0x00017217) grid_highlight_pane_cp70

0x7ae6,	// (0x00012be2) set_content_pane_g1

0x7ebd,	// (0x00012fb9) status_small_volume_pane

0x55a2,	// (0x0001069e) status_small_volume_pane_g1

0x55aa,	// (0x000106a6) volume_small2_pane

0x55b3,	// (0x000106af) volume_small2_pane_g1

0x55bc,	// (0x000106b8) volume_small2_pane_g2

0x55c5,	// (0x000106c1) volume_small2_pane_g3

0x55ce,	// (0x000106ca) volume_small2_pane_g4

0x55d7,	// (0x000106d3) volume_small2_pane_g5

0x55e0,	// (0x000106dc) volume_small2_pane_g6

0x55e9,	// (0x000106e5) volume_small2_pane_g7

0x55f2,	// (0x000106ee) volume_small2_pane_g8

0x55fb,	// (0x000106f7) volume_small2_pane_g9

0x5604,	// (0x00010700) volume_small2_pane_g10

0x0009,

0xfc4d,	// (0x0001ad49) volume_small2_pane_g

0xb7d4,	// (0x000168d0) fep_vkb_top_text_pane_g1_ParamLimits

0x243a,	// (0x0000d536) fep_vkb_top_text_pane_t1_ParamLimits

0xba49,	// (0x00016b45) popup_preview_fixed_window_g3_ParamLimits

0xba49,	// (0x00016b45) popup_preview_fixed_window_g3

0x14ac,	// (0x0000c5a8) popup_toolbar_trans_pane

0x1d68,	// (0x0000ce64) aid_height_set_list_ParamLimits

0x9f15,	// (0x00015011) aid_size_parent_ParamLimits

0x7f9b,	// (0x00013097) list_highlight_pane_cp2_ParamLimits

0x7ae6,	// (0x00012be2) set_content_pane_g1_ParamLimits

0x1f30,	// (0x0000d02c) list_single_image_pane_ParamLimits

0x1f30,	// (0x0000d02c) list_single_image_pane

0xc127,	// (0x00017223) aid_size_cell_image_ParamLimits

0xc127,	// (0x00017223) aid_size_cell_image

0x25c5,	// (0x0000d6c1) grid_single_image_pane_ParamLimits

0x25c5,	// (0x0000d6c1) grid_single_image_pane

0x6a2a,	// (0x00011b26) list_single_image_pane_g1_ParamLimits

0x6a2a,	// (0x00011b26) list_single_image_pane_g1

0xba76,	// (0x00016b72) list_single_image_pane_g2_ParamLimits

0xba76,	// (0x00016b72) list_single_image_pane_g2

0x0001,

0xfc62,	// (0x0001ad5e) list_single_image_pane_g_ParamLimits

0xfc62,	// (0x0001ad5e) list_single_image_pane_g

0x6961,	// (0x00011a5d) list_single_image_pane_t1_ParamLimits

0x6961,	// (0x00011a5d) list_single_image_pane_t1

0x25d3,	// (0x0000d6cf) cell_image_list_pane_ParamLimits

0x25d3,	// (0x0000d6cf) cell_image_list_pane

0xc155,	// (0x00017251) cell_image_list_pane_g1

0xc15e,	// (0x0001725a) cell_image_list_pane_g2

0x0001,

0xfc67,	// (0x0001ad63) cell_image_list_pane_g

0xc167,	// (0x00017263) aid_size_cell_tb_trans_pane

0x6dc7,	// (0x00011ec3) bg_tb_trans_pane

0xc179,	// (0x00017275) grid_tb_trans_pane

0x8a73,	// (0x00013b6f) bg_tb_trans_pane_g1

0x8a83,	// (0x00013b7f) bg_tb_trans_pane_g2

0x8a7b,	// (0x00013b77) bg_tb_trans_pane_g3

0x8a93,	// (0x00013b8f) bg_tb_trans_pane_g4

0x8a8b,	// (0x00013b87) bg_tb_trans_pane_g5

0x8ab3,	// (0x00013baf) bg_tb_trans_pane_g6

0x8aab,	// (0x00013ba7) bg_tb_trans_pane_g7

0x8a9b,	// (0x00013b97) bg_tb_trans_pane_g8

0x8aa3,	// (0x00013b9f) bg_tb_trans_pane_g9

0x0008,

0xfc6c,	// (0x0001ad68) bg_tb_trans_pane_g

0xc18d,	// (0x00017289) cell_toolbar_trans_pane_ParamLimits

0xc18d,	// (0x00017289) cell_toolbar_trans_pane

0xb3ec,	// (0x000164e8) cell_toolbar_trans_pane_g1

0x2190,	// (0x0000d28c) list_form2_midp_pane_t1

0x219e,	// (0x0000d29a) list_form2_midp_pane_t2

0x0001,

0xfb09,	// (0x0001ac05) list_form2_midp_pane_t

0xaf82,	// (0x0001607e) scroll_pane_cp51_ParamLimits

0xb18d,	// (0x00016289) form2_midp_wait_pane_g1

0xb196,	// (0x00016292) form2_midp_wait_pane_g2

0xb19f,	// (0x0001629b) form2_midp_wait_pane_g3

0x0002,

0xfb1e,	// (0x0001ac1a) form2_midp_wait_pane_g

0x5fe0,	// (0x000110dc) list_highlight_pane_cp21_ParamLimits

0xb1f6,	// (0x000162f2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb205,	// (0x00016301) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa11b,	// (0x00015217) list_single_2graphic_im_pane_ParamLimits

0xa11b,	// (0x00015217) list_single_2graphic_im_pane

0x25e9,	// (0x0000d6e5) list_single_2graphic_im_pane_g1_ParamLimits

0x25e9,	// (0x0000d6e5) list_single_2graphic_im_pane_g1

0x25fa,	// (0x0000d6f6) list_single_2graphic_im_pane_g2_ParamLimits

0x25fa,	// (0x0000d6f6) list_single_2graphic_im_pane_g2

0x2606,	// (0x0000d702) list_single_2graphic_im_pane_g3_ParamLimits

0x2606,	// (0x0000d702) list_single_2graphic_im_pane_g3

0x0003,

0xfc7f,	// (0x0001ad7b) list_single_2graphic_im_pane_g_ParamLimits

0xfc7f,	// (0x0001ad7b) list_single_2graphic_im_pane_g

0x261a,	// (0x0000d716) list_single_2graphic_im_pane_t1_ParamLimits

0x261a,	// (0x0000d716) list_single_2graphic_im_pane_t1

0xba55,	// (0x00016b51) list_single_graphic_2heading_pane_fp_ParamLimits

0xba55,	// (0x00016b51) list_single_graphic_2heading_pane_fp

0xbaad,	// (0x00016ba9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xbaad,	// (0x00016ba9) list_single_graphic_2heading_pane_fp_g1

0xba6a,	// (0x00016b66) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xba6a,	// (0x00016b66) list_single_graphic_2heading_pane_fp_g2

0x6a2a,	// (0x00011b26) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6a2a,	// (0x00011b26) list_single_graphic_2heading_pane_fp_g3

0xba76,	// (0x00016b72) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xba76,	// (0x00016b72) list_single_graphic_2heading_pane_fp_g4

0xba8a,	// (0x00016b86) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xba8a,	// (0x00016b86) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba6,	// (0x0001aca2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0001aca2) list_single_graphic_2heading_pane_fp_g

0xc221,	// (0x0001731d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc221,	// (0x0001731d) list_single_graphic_2heading_pane_fp_t1

0xbae5,	// (0x00016be1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xbae5,	// (0x00016be1) list_single_graphic_2heading_pane_fp_t2

0xc237,	// (0x00017333) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc237,	// (0x00017333) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc88,	// (0x0001ad84) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc88,	// (0x0001ad84) list_single_graphic_2heading_pane_fp_t

0xb49a,	// (0x00016596) fep_hwr_write_pane_g5_ParamLimits

0xb49a,	// (0x00016596) fep_hwr_write_pane_g5

0xb4a6,	// (0x000165a2) fep_hwr_write_pane_g6_ParamLimits

0xb4a6,	// (0x000165a2) fep_hwr_write_pane_g6

0xbf0c,	// (0x00017008) eswt_shell_pane_ParamLimits

0x8b8d,	// (0x00013c89) bg_popup_window_pane_cp18_ParamLimits

0x9e35,	// (0x00014f31) heading_pane_cp70

0xc036,	// (0x00017132) popup_eswt_tasktip_window_t1_ParamLimits

0x156d,	// (0x0000c669) aid_touch_tab_arrow_left

0x1583,	// (0x0000c67f) aid_touch_tab_arrow_right

0x0083,	// (0x0000b17f) title_pane_g3_ParamLimits

0x0083,	// (0x0000b17f) title_pane_g3

0x6ca6,	// (0x00011da2) set_value_pane_g1

0x14ac,	// (0x0000c5a8) popup_toolbar_trans_pane_ParamLimits

0xc167,	// (0x00017263) aid_size_cell_tb_trans_pane_ParamLimits

0x6dc7,	// (0x00011ec3) bg_tb_trans_pane_ParamLimits

0xc179,	// (0x00017275) grid_tb_trans_pane_ParamLimits

0x6283,	// (0x0001137f) cont_note_pane_ParamLimits

0x6283,	// (0x0001137f) cont_note_pane

0x65d7,	// (0x000116d3) cont_snote2_single_text_pane_ParamLimits

0x65d7,	// (0x000116d3) cont_snote2_single_text_pane

0x65d7,	// (0x000116d3) cont_snote2_single_graphic_pane_ParamLimits

0x65d7,	// (0x000116d3) cont_snote2_single_graphic_pane

0x9177,	// (0x00014273) cont_note_wait_pane_ParamLimits

0x9177,	// (0x00014273) cont_note_wait_pane

0x9177,	// (0x00014273) cont_note_image_pane_ParamLimits

0x9177,	// (0x00014273) cont_note_image_pane

0xc24d,	// (0x00017349) popup_note2_window_g1_ParamLimits

0xc24d,	// (0x00017349) popup_note2_window_g1

0xc27e,	// (0x0001737a) popup_note2_window_t1_ParamLimits

0xc27e,	// (0x0001737a) popup_note2_window_t1

0xc2c3,	// (0x000173bf) popup_note2_window_t2_ParamLimits

0xc2c3,	// (0x000173bf) popup_note2_window_t2

0xc308,	// (0x00017404) popup_note2_window_t3_ParamLimits

0xc308,	// (0x00017404) popup_note2_window_t3

0xc34d,	// (0x00017449) popup_note2_window_t4_ParamLimits

0xc34d,	// (0x00017449) popup_note2_window_t4

0x6307,	// (0x00011403) popup_note2_window_t5_ParamLimits

0x6307,	// (0x00011403) popup_note2_window_t5

0x0004,

0xfc94,	// (0x0001ad90) popup_note2_window_t_ParamLimits

0xfc94,	// (0x0001ad90) popup_note2_window_t

0xc37c,	// (0x00017478) popup_note2_image_window_g1_ParamLimits

0xc37c,	// (0x00017478) popup_note2_image_window_g1

0xc388,	// (0x00017484) popup_note2_image_window_g2_ParamLimits

0xc388,	// (0x00017484) popup_note2_image_window_g2

0x0001,

0xfc9f,	// (0x0001ad9b) popup_note2_image_window_g_ParamLimits

0xfc9f,	// (0x0001ad9b) popup_note2_image_window_g

0xc39a,	// (0x00017496) popup_note2_image_window_t1_ParamLimits

0xc39a,	// (0x00017496) popup_note2_image_window_t1

0xc3b2,	// (0x000174ae) popup_note2_image_window_t2_ParamLimits

0xc3b2,	// (0x000174ae) popup_note2_image_window_t2

0xc3ca,	// (0x000174c6) popup_note2_image_window_t3_ParamLimits

0xc3ca,	// (0x000174c6) popup_note2_image_window_t3

0x0002,

0xfca4,	// (0x0001ada0) popup_note2_image_window_t_ParamLimits

0xfca4,	// (0x0001ada0) popup_note2_image_window_t

0x9185,	// (0x00014281) popup_note2_wait_window_g1_ParamLimits

0x9185,	// (0x00014281) popup_note2_wait_window_g1

0xc3e6,	// (0x000174e2) popup_note2_wait_window_g2_ParamLimits

0xc3e6,	// (0x000174e2) popup_note2_wait_window_g2

0x919d,	// (0x00014299) popup_note2_wait_window_g3_ParamLimits

0x919d,	// (0x00014299) popup_note2_wait_window_g3

0x0002,

0xfcab,	// (0x0001ada7) popup_note2_wait_window_g_ParamLimits

0xfcab,	// (0x0001ada7) popup_note2_wait_window_g

0xc3f2,	// (0x000174ee) popup_note2_wait_window_t1_ParamLimits

0xc3f2,	// (0x000174ee) popup_note2_wait_window_t1

0xc410,	// (0x0001750c) popup_note2_wait_window_t2_ParamLimits

0xc410,	// (0x0001750c) popup_note2_wait_window_t2

0xc42e,	// (0x0001752a) popup_note2_wait_window_t3_ParamLimits

0xc42e,	// (0x0001752a) popup_note2_wait_window_t3

0xc440,	// (0x0001753c) popup_note2_wait_window_t4_ParamLimits

0xc440,	// (0x0001753c) popup_note2_wait_window_t4

0x0003,

0xfcb2,	// (0x0001adae) popup_note2_wait_window_t_ParamLimits

0xfcb2,	// (0x0001adae) popup_note2_wait_window_t

0xc452,	// (0x0001754e) wait_bar2_pane_ParamLimits

0xc452,	// (0x0001754e) wait_bar2_pane

0xc46a,	// (0x00017566) popup_snote2_single_text_window_g1_ParamLimits

0xc46a,	// (0x00017566) popup_snote2_single_text_window_g1

0xc492,	// (0x0001758e) popup_snote2_single_text_window_t1_ParamLimits

0xc492,	// (0x0001758e) popup_snote2_single_text_window_t1

0xc4de,	// (0x000175da) popup_snote2_single_text_window_t2_ParamLimits

0xc4de,	// (0x000175da) popup_snote2_single_text_window_t2

0xc52a,	// (0x00017626) popup_snote2_single_text_window_t3_ParamLimits

0xc52a,	// (0x00017626) popup_snote2_single_text_window_t3

0xc56b,	// (0x00017667) popup_snote2_single_text_window_t4_ParamLimits

0xc56b,	// (0x00017667) popup_snote2_single_text_window_t4

0xc5a1,	// (0x0001769d) popup_snote2_single_text_window_t5_ParamLimits

0xc5a1,	// (0x0001769d) popup_snote2_single_text_window_t5

0x0004,

0xfcbb,	// (0x0001adb7) popup_snote2_single_text_window_t_ParamLimits

0xfcbb,	// (0x0001adb7) popup_snote2_single_text_window_t

0xc5cc,	// (0x000176c8) popup_snote2_single_graphic_window_g1_ParamLimits

0xc5cc,	// (0x000176c8) popup_snote2_single_graphic_window_g1

0xc5f4,	// (0x000176f0) popup_snote2_single_graphic_window_g2_ParamLimits

0xc5f4,	// (0x000176f0) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc6,	// (0x0001adc2) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc6,	// (0x0001adc2) popup_snote2_single_graphic_window_g

0xc61c,	// (0x00017718) popup_snote2_single_graphic_window_t1_ParamLimits

0xc61c,	// (0x00017718) popup_snote2_single_graphic_window_t1

0xc668,	// (0x00017764) popup_snote2_single_graphic_window_t2_ParamLimits

0xc668,	// (0x00017764) popup_snote2_single_graphic_window_t2

0xc52a,	// (0x00017626) popup_snote2_single_graphic_window_t3_ParamLimits

0xc52a,	// (0x00017626) popup_snote2_single_graphic_window_t3

0xc56b,	// (0x00017667) popup_snote2_single_graphic_window_t4_ParamLimits

0xc56b,	// (0x00017667) popup_snote2_single_graphic_window_t4

0xc5a1,	// (0x0001769d) popup_snote2_single_graphic_window_t5_ParamLimits

0xc5a1,	// (0x0001769d) popup_snote2_single_graphic_window_t5

0x0004,

0xfccb,	// (0x0001adc7) popup_snote2_single_graphic_window_t_ParamLimits

0xfccb,	// (0x0001adc7) popup_snote2_single_graphic_window_t

0xae3f,	// (0x00015f3b) clock_nsta_pane_cp2_t1

0xae3f,	// (0x00015f3b) clock_nsta_pane_cp2_t2

0x0001,

0xfadf,	// (0x0001abdb) clock_nsta_pane_cp2_t

0x6de1,	// (0x00011edd) form_field_data_wide_pane_g1_ParamLimits

0x6ded,	// (0x00011ee9) form_field_data_wide_pane_g2_ParamLimits

0x6ded,	// (0x00011ee9) form_field_data_wide_pane_g2

0x6df9,	// (0x00011ef5) form_field_data_wide_pane_g3_ParamLimits

0x6df9,	// (0x00011ef5) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0001a7b6) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0001a7b6) form_field_data_wide_pane_g

0x20aa,	// (0x0000d1a6) grid_touch_3_pane_ParamLimits

0x20aa,	// (0x0000d1a6) grid_touch_3_pane

0x264b,	// (0x0000d747) cell_touch_3_pane_ParamLimits

0x264b,	// (0x0000d747) cell_touch_3_pane

0xb3ec,	// (0x000164e8) cell_touch_3_pane_g1

0xb3ec,	// (0x000164e8) cell_touch_3_pane_g2

0x0001,

0xfb64,	// (0x0001ac60) cell_touch_3_pane_g

0x6339,	// (0x00011435) cont_query_data_pane

0x6341,	// (0x0001143d) cont_query_data_pane_cp1

0xc6e2,	// (0x000177de) button_value_adjust_pane_cp7

0xc6ea,	// (0x000177e6) query_popup_pane_cp3

0x766a,	// (0x00012766) bg_popup_sub_pane_cp22_ParamLimits

0x4977,	// (0x0000fa73) navi_navi_volume_pane_cp2

0x4992,	// (0x0000fa8e) popup_side_volume_key_window_g2

0x49a1,	// (0x0000fa9d) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0001a848) popup_side_volume_key_window_g

0x49be,	// (0x0000faba) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0001a84f) popup_side_volume_key_window_t

0x79b0,	// (0x00012aac) popup_side_volume_key_window_ParamLimits

0x0543,	// (0x0000b63f) list_double_graphic_pane_g4_ParamLimits

0x0543,	// (0x0000b63f) list_double_graphic_pane_g4

0x1f0c,	// (0x0000d008) list_single_2heading_msg_pane_ParamLimits

0x1f0c,	// (0x0000d008) list_single_2heading_msg_pane

0x2694,	// (0x0000d790) list_single_2heading_msg_pane_g1_ParamLimits

0x2694,	// (0x0000d790) list_single_2heading_msg_pane_g1

0x26a0,	// (0x0000d79c) list_single_2heading_msg_pane_g2_ParamLimits

0x26a0,	// (0x0000d79c) list_single_2heading_msg_pane_g2

0x26b3,	// (0x0000d7af) list_single_2heading_msg_pane_g3_ParamLimits

0x26b3,	// (0x0000d7af) list_single_2heading_msg_pane_g3

0x26bf,	// (0x0000d7bb) list_single_2heading_msg_pane_g4_ParamLimits

0x26bf,	// (0x0000d7bb) list_single_2heading_msg_pane_g4

0x0003,

0xfcd6,	// (0x0001add2) list_single_2heading_msg_pane_g_ParamLimits

0xfcd6,	// (0x0001add2) list_single_2heading_msg_pane_g

0x26d7,	// (0x0000d7d3) list_single_2heading_msg_pane_t1_ParamLimits

0x26d7,	// (0x0000d7d3) list_single_2heading_msg_pane_t1

0x26ff,	// (0x0000d7fb) list_single_2heading_msg_pane_t2_ParamLimits

0x26ff,	// (0x0000d7fb) list_single_2heading_msg_pane_t2

0x276a,	// (0x0000d866) list_single_2heading_msg_pane_t3_ParamLimits

0x276a,	// (0x0000d866) list_single_2heading_msg_pane_t3

0xc7d9,	// (0x000178d5) list_single_2heading_msg_pane_t4_ParamLimits

0xc7d9,	// (0x000178d5) list_single_2heading_msg_pane_t4

0x0003,

0xfcdf,	// (0x0001addb) list_single_2heading_msg_pane_t_ParamLimits

0xfcdf,	// (0x0001addb) list_single_2heading_msg_pane_t

0x5f34,	// (0x00011030) title_pane_g4_ParamLimits

0x5f34,	// (0x00011030) title_pane_g4

0x4785,	// (0x0000f881) title_pane_stacon_g3_ParamLimits

0x4785,	// (0x0000f881) title_pane_stacon_g3

0xc1e4,	// (0x000172e0) list_single_2graphic_im_pane_g4_ParamLimits

0xc1e4,	// (0x000172e0) list_single_2graphic_im_pane_g4

0x9bdc,	// (0x00014cd8) popup_side_volume_key_window_cp

0xa4d8,	// (0x000155d4) main_idle_act2_pane_t1

0x4da6,	// (0x0000fea2) toolbar_button_pane_g10

0x03f0,	// (0x0000b4ec) popup_toolbar_window_cp1

0xae30,	// (0x00015f2c) clock_nsta_pane_cp_t1

0xae30,	// (0x00015f2c) clock_nsta_pane_cp_t2

0x0001,

0xfada,	// (0x0001abd6) clock_nsta_pane_cp_t

0x4977,	// (0x0000fa73) navi_navi_volume_pane_cp2_ParamLimits

0x4986,	// (0x0000fa82) popup_side_volume_key_window_g1_ParamLimits

0x4992,	// (0x0000fa8e) popup_side_volume_key_window_g2_ParamLimits

0x49a1,	// (0x0000fa9d) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0001a848) popup_side_volume_key_window_g_ParamLimits

0x520e,	// (0x0001030a) fep_hwr_aid_pane

0x52b5,	// (0x000103b1) bg_fep_hwr_top_pane_g4_ParamLimits

0xb46a,	// (0x00016566) fep_hwr_top_pane_g1_ParamLimits

0xb47c,	// (0x00016578) fep_hwr_top_pane_g2_ParamLimits

0x52d5,	// (0x000103d1) fep_hwr_top_pane_g3_ParamLimits

0xfb2f,	// (0x0001ac2b) fep_hwr_top_pane_g_ParamLimits

0x52ea,	// (0x000103e6) fep_hwr_top_text_pane_ParamLimits

0x999f,	// (0x00014a9b) aid_touch_tab_arrow_arrow_2

0x99a8,	// (0x00014aa4) aid_touch_tab_arrow_left_2

0x5222,	// (0x0001031e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5259,	// (0x00010355) fep_hwr_prediction_pane

0xb5dc,	// (0x000166d8) fep_vkb_prediction_pane

0x241a,	// (0x0000d516) fep_vkb_side_pane_g3_ParamLimits

0x241a,	// (0x0000d516) fep_vkb_side_pane_g3

0x5465,	// (0x00010561) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x54d1,	// (0x000105cd) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x54de,	// (0x000105da) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbde,	// (0x0001acda) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x560d,	// (0x00010709) fep_hwr_prediction_pane_g1

0x5617,	// (0x00010713) fep_hwr_prediction_pane_g2

0x561f,	// (0x0001071b) fep_hwr_prediction_pane_g3

0x5627,	// (0x00010723) fep_hwr_prediction_pane_g4

0x0003,

0xfce8,	// (0x0001ade4) fep_hwr_prediction_pane_g

0xc7fe,	// (0x000178fa) fep_vkb_prediction_pane_g1

0xc808,	// (0x00017904) fep_vkb_prediction_pane_g2

0xc810,	// (0x0001790c) fep_vkb_prediction_pane_g3

0xc818,	// (0x00017914) fep_vkb_prediction_pane_g4

0x0003,

0xfcf1,	// (0x0001aded) fep_vkb_prediction_pane_g

0x508e,	// (0x0001018a) slider_set_pane_g3

0x50a2,	// (0x0001019e) slider_set_pane_g4

0x50ba,	// (0x000101b6) slider_set_pane_g5

0x508e,	// (0x0001018a) slider_set_pane_g6

0x50d0,	// (0x000101cc) slider_set_pane_g7

0xa07a,	// (0x00015176) slider_form_pane_g3

0xa083,	// (0x0001517f) slider_form_pane_g4

0xa08b,	// (0x00015187) slider_form_pane_g5

0xa07a,	// (0x00015176) slider_form_pane_g6

0x1eb3,	// (0x0000cfaf) slider_form_pane_g7

0xa7b5,	// (0x000158b1) slider_set_pane_vc_g3

0xa7be,	// (0x000158ba) slider_set_pane_vc_g4

0xa7c7,	// (0x000158c3) slider_set_pane_vc_g5

0xa7b5,	// (0x000158b1) slider_set_pane_vc_g6

0xa7d0,	// (0x000158cc) slider_set_pane_vc_g7

0xa7b5,	// (0x000158b1) slider_form_pane_vc_g1

0xa7be,	// (0x000158ba) slider_form_pane_vc_g2

0xa7c7,	// (0x000158c3) slider_form_pane_vc_g3

0xa7b5,	// (0x000158b1) slider_form_pane_vc_g4

0xab68,	// (0x00015c64) slider_form_pane_vc_g5

0x0004,

0xfac0,	// (0x0001abbc) slider_form_pane_vc_g

0x5eec,	// (0x00010fe8) main_idle_act3_pane

0xc820,	// (0x0001791c) ai3_links_pane

0x27d8,	// (0x0000d8d4) popup_ai3_data_window_ParamLimits

0x27d8,	// (0x0000d8d4) popup_ai3_data_window

0x5eec,	// (0x00010fe8) grid_ai3_links_pane

0x27f2,	// (0x0000d8ee) cell_ai3_links_pane_ParamLimits

0x27f2,	// (0x0000d8ee) cell_ai3_links_pane

0xc85b,	// (0x00017957) bg_popup_sub_pane_cp11

0xc868,	// (0x00017964) cell_ai3_links_pane_g1

0x5eec,	// (0x00010fe8) bg_popup_sub_pane_cp12

0xc88d,	// (0x00017989) heading_ai3_data_pane

0xc895,	// (0x00017991) list_ai3_gene_pane

0xc8a1,	// (0x0001799d) popup_ai3_data_window_g1

0xc8a9,	// (0x000179a5) heading_ai3_data_pane_g1

0xc8b1,	// (0x000179ad) heading_ai3_data_pane_t1

0xc8bf,	// (0x000179bb) list_double_ai3_gene_pane_ParamLimits

0xc8bf,	// (0x000179bb) list_double_ai3_gene_pane

0xc8cc,	// (0x000179c8) list_single_ai3_gene_pane_ParamLimits

0xc8cc,	// (0x000179c8) list_single_ai3_gene_pane

0xb3b1,	// (0x000164ad) list_highlight_pane_cp7_ParamLimits

0xb3b1,	// (0x000164ad) list_highlight_pane_cp7

0xc8d9,	// (0x000179d5) list_single_a13_gene_pane_t1_ParamLimits

0xc8d9,	// (0x000179d5) list_single_a13_gene_pane_t1

0xc8f0,	// (0x000179ec) list_single_ai3_gene_pane_g1

0xc8f9,	// (0x000179f5) list_single_ai3_gene_pane_g2

0x0001,

0xfcfa,	// (0x0001adf6) list_single_ai3_gene_pane_g

0xc901,	// (0x000179fd) list_double_ai3_gene_pane_g1_ParamLimits

0xc901,	// (0x000179fd) list_double_ai3_gene_pane_g1

0xc90d,	// (0x00017a09) list_double_ai3_gene_pane_t1_ParamLimits

0xc90d,	// (0x00017a09) list_double_ai3_gene_pane_t1

0xc929,	// (0x00017a25) list_double_ai3_gene_pane_t2_ParamLimits

0xc929,	// (0x00017a25) list_double_ai3_gene_pane_t2

0xc93f,	// (0x00017a3b) list_double_ai3_gene_pane_t3_ParamLimits

0xc93f,	// (0x00017a3b) list_double_ai3_gene_pane_t3

0x0002,

0xfcff,	// (0x0001adfb) list_double_ai3_gene_pane_t_ParamLimits

0xfcff,	// (0x0001adfb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc6fb,	// (0x000177f7) aid_size_min_col_2

0x267e,	// (0x0000d77a) aid_size_min_msg_ParamLimits

0x267e,	// (0x0000d77a) aid_size_min_msg

0x242e,	// (0x0000d52a) fep_vkb_top_text_pane_g2_ParamLimits

0x242e,	// (0x0000d52a) fep_vkb_top_text_pane_g2

0x0001,

0xfb5f,	// (0x0001ac5b) fep_vkb_top_text_pane_g_ParamLimits

0xfb5f,	// (0x0001ac5b) fep_vkb_top_text_pane_g

0x5eec,	// (0x00010fe8) main_hc_apps_shell_pane

0xc95c,	// (0x00017a58) grid_hc_apps_pane_ParamLimits

0xc95c,	// (0x00017a58) grid_hc_apps_pane

0xc96b,	// (0x00017a67) list_hc_apps_pane

0xc973,	// (0x00017a6f) scroll_pane_cp37_ParamLimits

0xc973,	// (0x00017a6f) scroll_pane_cp37

0x280c,	// (0x0000d908) cell_hc_apps_pane_ParamLimits

0x280c,	// (0x0000d908) cell_hc_apps_pane

0x28ca,	// (0x0000d9c6) cell_hc_apps_pane_g1_ParamLimits

0x28ca,	// (0x0000d9c6) cell_hc_apps_pane_g1

0xca5e,	// (0x00017b5a) cell_hc_apps_pane_g2_ParamLimits

0xca5e,	// (0x00017b5a) cell_hc_apps_pane_g2

0xca7a,	// (0x00017b76) cell_hc_apps_pane_g3_ParamLimits

0xca7a,	// (0x00017b76) cell_hc_apps_pane_g3

0x0002,

0xfd06,	// (0x0001ae02) cell_hc_apps_pane_g_ParamLimits

0xfd06,	// (0x0001ae02) cell_hc_apps_pane_g

0x28f7,	// (0x0000d9f3) cell_hc_apps_pane_t1_ParamLimits

0x28f7,	// (0x0000d9f3) cell_hc_apps_pane_t1

0x6283,	// (0x0001137f) grid_highlight_pane_cp10_ParamLimits

0x6283,	// (0x0001137f) grid_highlight_pane_cp10

0x2935,	// (0x0000da31) list_single_hc_apps_pane_ParamLimits

0x2935,	// (0x0000da31) list_single_hc_apps_pane

0x2962,	// (0x0000da5e) list_single_hc_apps_pane_g1

0x297b,	// (0x0000da77) list_single_hc_apps_pane_g2

0x0001,

0xfd0d,	// (0x0001ae09) list_single_hc_apps_pane_g

0x2994,	// (0x0000da90) list_single_hc_apps_pane_g2_copy1

0xcb86,	// (0x00017c82) list_single_hc_apps_pane_t1

0x5fe0,	// (0x000110dc) bg_set_opt_pane_cp_ParamLimits

0x46ac,	// (0x0000f7a8) setting_slider_pane_t1_ParamLimits

0x46c5,	// (0x0000f7c1) setting_slider_pane_t2_ParamLimits

0x46df,	// (0x0000f7db) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0001a69e) setting_slider_pane_t_ParamLimits

0x46f7,	// (0x0000f7f3) slider_set_pane_ParamLimits

0x4c16,	// (0x0000fd12) control_pane_g5_ParamLimits

0x4c16,	// (0x0000fd12) control_pane_g5

0x9ec9,	// (0x00014fc5) slider_set_pane_g1_ParamLimits

0x5082,	// (0x0001017e) slider_set_pane_g2_ParamLimits

0x508e,	// (0x0001018a) slider_set_pane_g3_ParamLimits

0x50a2,	// (0x0001019e) slider_set_pane_g4_ParamLimits

0x50ba,	// (0x000101b6) slider_set_pane_g5_ParamLimits

0x508e,	// (0x0001018a) slider_set_pane_g6_ParamLimits

0x50d0,	// (0x000101cc) slider_set_pane_g7_ParamLimits

0xf993,	// (0x0001aa8f) slider_set_pane_g_ParamLimits

0x7a91,	// (0x00012b8d) navi_icon_text_pane_ParamLimits

0x1539,	// (0x0000c635) aid_fill_nsta_2_ParamLimits

0x156d,	// (0x0000c669) aid_touch_tab_arrow_left_ParamLimits

0x1583,	// (0x0000c67f) aid_touch_tab_arrow_right_ParamLimits

0x161e,	// (0x0000c71a) clock_nsta_pane_ParamLimits

0x1c7d,	// (0x0000cd79) navi_icon_pane_g1_ParamLimits

0x1c89,	// (0x0000cd85) navi_text_pane_t1_ParamLimits

0x2172,	// (0x0000d26e) navi_icon_text_pane_g1_ParamLimits

0x217e,	// (0x0000d27a) navi_icon_text_pane_t1_ParamLimits

0x2962,	// (0x0000da5e) list_single_hc_apps_pane_g1_ParamLimits

0x297b,	// (0x0000da77) list_single_hc_apps_pane_g2_ParamLimits

0xfd0d,	// (0x0001ae09) list_single_hc_apps_pane_g_ParamLimits

0x2994,	// (0x0000da90) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcb86,	// (0x00017c82) list_single_hc_apps_pane_t1_ParamLimits

0xe5f2,	// (0x000196ee) popup_toolbar2_fixed_window_ParamLimits

0xe5f2,	// (0x000196ee) popup_toolbar2_fixed_window

0x14a2,	// (0x0000c59e) popup_toolbar2_float_window

0x5eec,	// (0x00010fe8) bg_popup_sub_pane_cp27

0xcbb4,	// (0x00017cb0) grid_toolbar2_float_pane

0x5eec,	// (0x00010fe8) bg_popup_sub_pane_cp26

0xcbb4,	// (0x00017cb0) grid_toolbar2_fixed_pane

0x29b0,	// (0x0000daac) cell_toolbar2_fixed_pane_ParamLimits

0x29b0,	// (0x0000daac) cell_toolbar2_fixed_pane

0x29cb,	// (0x0000dac7) cell_toolbar2_fixed_pane_g1

0xcbd5,	// (0x00017cd1) toolbar2_fixed_button_pane

0x8a73,	// (0x00013b6f) toolbar2_fixed_button_pane_g1

0x8a83,	// (0x00013b7f) toolbar2_fixed_button_pane_g2

0x8a7b,	// (0x00013b77) toolbar2_fixed_button_pane_g3

0x8a93,	// (0x00013b8f) toolbar2_fixed_button_pane_g4

0x8a8b,	// (0x00013b87) toolbar2_fixed_button_pane_g5

0x8a9b,	// (0x00013b97) toolbar2_fixed_button_pane_g6

0x8aa3,	// (0x00013b9f) toolbar2_fixed_button_pane_g7

0x8ab3,	// (0x00013baf) toolbar2_fixed_button_pane_g8

0x8aab,	// (0x00013ba7) toolbar2_fixed_button_pane_g9

0x0008,

0xf895,	// (0x0001a991) toolbar2_fixed_button_pane_g

0xcbdd,	// (0x00017cd9) cell_toolbar2_float_pane_ParamLimits

0xcbdd,	// (0x00017cd9) cell_toolbar2_float_pane

0xcbee,	// (0x00017cea) cell_toolbar2_float_pane_g1

0xcbd5,	// (0x00017cd1) toolbar2_fixed_button_pane_cp

0x2308,	// (0x0000d404) fep_vkb_accented_list_pane_ParamLimits

0x2308,	// (0x0000d404) fep_vkb_accented_list_pane

0x5445,	// (0x00010541) bg_popup_fep_shadow_pane_g9

0x7c11,	// (0x00012d0d) bg_popup_fep_shadow_pane_cp3

0x70a5,	// (0x000121a1) list_accented_list_pane

0xcbf7,	// (0x00017cf3) list_single_accented_list_pane_ParamLimits

0xcbf7,	// (0x00017cf3) list_single_accented_list_pane

0x7c11,	// (0x00012d0d) list_highlight_pane_cp10

0xcc08,	// (0x00017d04) list_single_accented_list_pane_t1

0x13cc,	// (0x0000c4c8) popup_slider_window_ParamLimits

0x13cc,	// (0x0000c4c8) popup_slider_window

0xc6f2,	// (0x000177ee) aid_indentation_list_msg

0x2ac4,	// (0x0000dbc0) bg_popup_window_pane_cp19

0xcd2c,	// (0x00017e28) popup_slider_window_g1

0xcd48,	// (0x00017e44) popup_slider_window_g2

0xcd64,	// (0x00017e60) popup_slider_window_g3

0x0005,

0xfd12,	// (0x0001ae0e) popup_slider_window_g

0xcdc0,	// (0x00017ebc) popup_slider_window_t1

0xce34,	// (0x00017f30) small_volume_slider_vertical_pane

0xb3ec,	// (0x000164e8) small_volume_slider_vertical_pane_g1

0xb3ec,	// (0x000164e8) small_volume_slider_vertical_pane_g2

0xce50,	// (0x00017f4c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd24,	// (0x0001ae20) small_volume_slider_vertical_pane_g

0xe560,	// (0x0001965c) area_side_right_pane_ParamLimits

0xe560,	// (0x0001965c) area_side_right_pane

0xe9a6,	// (0x00019aa2) aid_size_side_button_ParamLimits

0xe9a6,	// (0x00019aa2) aid_size_side_button

0xe9bf,	// (0x00019abb) grid_sctrl_middle_pane_ParamLimits

0xe9bf,	// (0x00019abb) grid_sctrl_middle_pane

0x5663,	// (0x0001075f) sctrl_sk_bottom_pane

0x5674,	// (0x00010770) sctrl_sk_top_pane

0x5686,	// (0x00010782) aid_touch_sctrl_top

0x5693,	// (0x0001078f) bg_sctrl_sk_pane_ParamLimits

0x5693,	// (0x0001078f) bg_sctrl_sk_pane

0x56a1,	// (0x0001079d) sctrl_sk_top_pane_g1

0x56ae,	// (0x000107aa) sctrl_sk_top_pane_t1

0x5686,	// (0x00010782) aid_touch_sctrl_bottom

0x5693,	// (0x0001078f) bg_sctrl_sk_pane_cp_ParamLimits

0x5693,	// (0x0001078f) bg_sctrl_sk_pane_cp

0x56c9,	// (0x000107c5) sctrl_sk_bottom_pane_g1

0x56ae,	// (0x000107aa) sctrl_sk_bottom_pane_t1

0xe9d9,	// (0x00019ad5) cell_sctrl_middle_pane_ParamLimits

0xe9d9,	// (0x00019ad5) cell_sctrl_middle_pane

0xe9ea,	// (0x00019ae6) aid_touch_sctrl_middle_ParamLimits

0xe9ea,	// (0x00019ae6) aid_touch_sctrl_middle

0xe9f7,	// (0x00019af3) bg_sctrl_middle_pane_ParamLimits

0xe9f7,	// (0x00019af3) bg_sctrl_middle_pane

0x5d39,	// (0x00010e35) cell_sctrl_middle_pane_g1_ParamLimits

0x5d39,	// (0x00010e35) cell_sctrl_middle_pane_g1

0xea05,	// (0x00019b01) cell_sctrl_middle_pane_g2_ParamLimits

0xea05,	// (0x00019b01) cell_sctrl_middle_pane_g2

0x0001,

0xfd30,	// (0x0001ae2c) cell_sctrl_middle_pane_g_ParamLimits

0xfd30,	// (0x0001ae2c) cell_sctrl_middle_pane_g

0x8a73,	// (0x00013b6f) bg_sctrl_middle_pane_g1

0x8a7b,	// (0x00013b77) bg_sctrl_middle_pane_g2

0x8a83,	// (0x00013b7f) bg_sctrl_middle_pane_g3

0x8a8b,	// (0x00013b87) bg_sctrl_middle_pane_g4

0x8a93,	// (0x00013b8f) bg_sctrl_middle_pane_g5

0x8a9b,	// (0x00013b97) bg_sctrl_middle_pane_g6

0x8aa3,	// (0x00013b9f) bg_sctrl_middle_pane_g7

0x8aab,	// (0x00013ba7) bg_sctrl_middle_pane_g8

0x0007,

0xfd35,	// (0x0001ae31) bg_sctrl_middle_pane_g

0x8ab3,	// (0x00013baf) bg_sctrl_middle_pane_g8_copy1

0x8a73,	// (0x00013b6f) bg_sctrl_sk_pane_g1

0x8a83,	// (0x00013b7f) bg_sctrl_sk_pane_g2

0x8a7b,	// (0x00013b77) bg_sctrl_sk_pane_g3

0x0008,

0xf895,	// (0x0001a991) bg_sctrl_sk_pane_g

0x6795,	// (0x00011891) aid_size_touch_scroll_bar

0x8a93,	// (0x00013b8f) bg_sctrl_sk_pane_g4

0x8a8b,	// (0x00013b87) bg_sctrl_sk_pane_g5

0x8a9b,	// (0x00013b97) bg_sctrl_sk_pane_g6

0x8aa3,	// (0x00013b9f) bg_sctrl_sk_pane_g7

0x8ab3,	// (0x00013baf) bg_sctrl_sk_pane_g8

0x8aab,	// (0x00013ba7) bg_sctrl_sk_pane_g9

0x8043,	// (0x0001313f) popup_fep_china_hwr2_fs_candidate_window

0x0f10,	// (0x0000c00c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x0f10,	// (0x0000c00c) popup_fep_china_hwr2_fs_control_window

0x5465,	// (0x00010561) sctrl_sk_top_pane_g2

0x0001,

0xfd2b,	// (0x0001ae27) sctrl_sk_top_pane_g

0x2be7,	// (0x0000dce3) aid_fep_china_hwr2_fs_cell_ParamLimits

0x2be7,	// (0x0000dce3) aid_fep_china_hwr2_fs_cell

0x2bfb,	// (0x0000dcf7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x2bfb,	// (0x0000dcf7) bg_popup_fep_shadow_pane_cp4

0x2c12,	// (0x0000dd0e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x2c12,	// (0x0000dd0e) bg_popup_fep_shadow_pane_cp5

0x2c24,	// (0x0000dd20) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x2c24,	// (0x0000dd20) popup_fep_china_hwr2_fs_control_bar_grid

0x2c38,	// (0x0000dd34) popup_fep_china_hwr2_fs_control_funtion_grid

0xceac,	// (0x00017fa8) aid_fep_china_hwr2_fs_candi_cell

0x5eec,	// (0x00010fe8) bg_popup_fep_shadow_pane_cp6

0xceb6,	// (0x00017fb2) popup_fep_china_hwr2_fs_candidate_grid

0x2c40,	// (0x0000dd3c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x2c40,	// (0x0000dd3c) cell_fep_china_hwr2_fs_funtion_grid

0xb3ec,	// (0x000164e8) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xced8,	// (0x00017fd4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xced8,	// (0x00017fd4) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcee6,	// (0x00017fe2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcee6,	// (0x00017fe2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd46,	// (0x0001ae42) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd46,	// (0x0001ae42) cell_fep_china_hwr2_fs_funtion_grid_g

0x2c58,	// (0x0000dd54) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x2c58,	// (0x0000dd54) cell_fep_china_hwr2_fs_funtion_grid_t1

0x2c6d,	// (0x0000dd69) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x2c6d,	// (0x0000dd69) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd4b,	// (0x0001ae47) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd4b,	// (0x0001ae47) cell_fep_china_hwr2_fs_funtion_grid_t

0xcf2d,	// (0x00018029) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcf35,	// (0x00018031) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcf3d,	// (0x00018039) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd50,	// (0x0001ae4c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcf45,	// (0x00018041) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcf45,	// (0x00018041) cell_fep_china_hwr2_fs_candidate_grid

0xcf5e,	// (0x0001805a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcf66,	// (0x00018062) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb3ec,	// (0x000164e8) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb3ec,	// (0x000164e8) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb64,	// (0x0001ac60) cell_fep_china_hwr2_fs_candidate_grid_g

0xcf6e,	// (0x0001806a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8636,	// (0x00013732) clock_nsta_pane_cp_24_ParamLimits

0x8636,	// (0x00013732) clock_nsta_pane_cp_24

0x86b4,	// (0x000137b0) indicator_nsta_pane_cp_24_ParamLimits

0x86b4,	// (0x000137b0) indicator_nsta_pane_cp_24

0x97f7,	// (0x000148f3) heading_pane_g1

0x0001,

0xf8fa,	// (0x0001a9f6) heading_pane_g

0xa321,	// (0x0001541d) grid_sct_catagory_button_pane

0xa351,	// (0x0001544d) scroll_pane_cp5_ParamLimits

0xaf8e,	// (0x0001608a) button_value_adjust_pane_cp5_ParamLimits

0xaf8e,	// (0x0001608a) button_value_adjust_pane_cp5

0xb08a,	// (0x00016186) form2_midp_time_pane_ParamLimits

0xcf7c,	// (0x00018078) cell_sct_catagory_button_pane_ParamLimits

0xcf7c,	// (0x00018078) cell_sct_catagory_button_pane

0xb3b1,	// (0x000164ad) bg_button_pane_cp01_ParamLimits

0xb3b1,	// (0x000164ad) bg_button_pane_cp01

0xb3ec,	// (0x000164e8) cell_sct_catagory_button_pane_g1

0x1445,	// (0x0000c541) popup_tb_extension_window

0x2c89,	// (0x0000dd85) aid_size_cell_ext_ParamLimits

0x2c89,	// (0x0000dd85) aid_size_cell_ext

0x65d7,	// (0x000116d3) bg_tb_trans_pane_cp1_ParamLimits

0x65d7,	// (0x000116d3) bg_tb_trans_pane_cp1

0x2caf,	// (0x0000ddab) grid_tb_ext_pane_ParamLimits

0x2caf,	// (0x0000ddab) grid_tb_ext_pane

0x2cea,	// (0x0000dde6) cell_tb_ext_pane_ParamLimits

0x2cea,	// (0x0000dde6) cell_tb_ext_pane

0x2d12,	// (0x0000de0e) cell_tb_ext_pane_g1_ParamLimits

0x2d12,	// (0x0000de0e) cell_tb_ext_pane_g1

0xd010,	// (0x0001810c) cell_tb_ext_pane_t1

0x6283,	// (0x0001137f) list_highlight_pane_cp11_ParamLimits

0x6283,	// (0x0001137f) list_highlight_pane_cp11

0x45df,	// (0x0000f6db) popup_uni_indicator_window_ParamLimits

0x45df,	// (0x0000f6db) popup_uni_indicator_window

0x6dc7,	// (0x00011ec3) bg_popup_sub_pane_cp14

0xd02b,	// (0x00018127) list_uniindi_pane

0xd037,	// (0x00018133) uniindi_top_pane

0x6283,	// (0x0001137f) bg_uniindi_top_pane

0xd056,	// (0x00018152) uniindi_top_pane_g1

0xd06c,	// (0x00018168) uniindi_top_pane_g2

0x0003,

0xfd57,	// (0x0001ae53) uniindi_top_pane_g

0xd096,	// (0x00018192) uniindi_top_pane_t1

0xd0c0,	// (0x000181bc) list_single_uniindi_pane_ParamLimits

0xd0c0,	// (0x000181bc) list_single_uniindi_pane

0xb3ec,	// (0x000164e8) bg_uniindi_top_pane_g1

0xd0d3,	// (0x000181cf) list_single_uniindi_pane_g1

0xd0e6,	// (0x000181e2) list_single_uniindi_pane_t1

0x4455,	// (0x0000f551) control_bg_pane

0xd10b,	// (0x00018207) bg_sctrl_sk_pane_cp1

0xd114,	// (0x00018210) bg_sctrl_sk_pane_cp2

0xd11d,	// (0x00018219) control_bg_pane_g1

0xd126,	// (0x00018222) control_bg_pane_g2

0x0001,

0xfd60,	// (0x0001ae5c) control_bg_pane_g

0xadf4,	// (0x00015ef0) cell_indicator_nsta_pane_g1_ParamLimits

0x20d9,	// (0x0000d1d5) cell_indicator_nsta_pane_g2_ParamLimits

0xfad5,	// (0x0001abd1) cell_indicator_nsta_pane_g_ParamLimits

0xb112,	// (0x0001620e) form2_midp_time_pane_t1_ParamLimits

0xb45c,	// (0x00016558) main_idle_act4_pane_ParamLimits

0xb45c,	// (0x00016558) main_idle_act4_pane

0x1445,	// (0x0000c541) popup_tb_extension_window_ParamLimits

0x2cd1,	// (0x0000ddcd) tb_ext_find_pane_ParamLimits

0x2cd1,	// (0x0000ddcd) tb_ext_find_pane

0xd12f,	// (0x0001822b) ai_gene_pane_1_cp1

0x7d56,	// (0x00012e52) ai_gene_pane_2_cp1

0xd137,	// (0x00018233) list_single_idle_plugin_calendar_pane

0xd140,	// (0x0001823c) list_single_idle_plugin_notification_pane

0xd149,	// (0x00018245) list_single_idle_plugin_player_pane

0x2d2f,	// (0x0000de2b) list_single_idle_plugin_shortcut_pane_ParamLimits

0x2d2f,	// (0x0000de2b) list_single_idle_plugin_shortcut_pane

0x2d57,	// (0x0000de53) main_idle_act4_pane_t1

0x2d6d,	// (0x0000de69) main_idle_act4_pane_t2

0x0001,

0xfd65,	// (0x0001ae61) main_idle_act4_pane_t

0x2d83,	// (0x0000de7f) middle_sk_idle_act4_pane_ParamLimits

0x2d83,	// (0x0000de7f) middle_sk_idle_act4_pane

0x2d9f,	// (0x0000de9b) popup_clock_digital_analogue_window_cp2

0x2dc7,	// (0x0000dec3) shortcut_wheel_idle_act4_pane_ParamLimits

0x2dc7,	// (0x0000dec3) shortcut_wheel_idle_act4_pane

0xb3ec,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g1

0xb3ec,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g2

0xb3ec,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g3

0xb3ec,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g4

0xb3ec,	// (0x000164e8) shortcut_wheel_idle_act4_pane_g5

0xd1dc,	// (0x000182d8) shortcut_wheel_idle_act4_pane_g6

0xd1e4,	// (0x000182e0) shortcut_wheel_idle_act4_pane_g7

0xd1ec,	// (0x000182e8) shortcut_wheel_idle_act4_pane_g8

0xd1f4,	// (0x000182f0) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd6a,	// (0x0001ae66) shortcut_wheel_idle_act4_pane_g

0xede5,	// (0x00019ee1) middle_sk_idle_act4_pane_g1_ParamLimits

0xede5,	// (0x00019ee1) middle_sk_idle_act4_pane_g1

0x2e44,	// (0x0000df40) middle_sk_idle_act4_pane_g2_ParamLimits

0x2e44,	// (0x0000df40) middle_sk_idle_act4_pane_g2

0x0001,

0xfd8d,	// (0x0001ae89) middle_sk_idle_act4_pane_g_ParamLimits

0xfd8d,	// (0x0001ae89) middle_sk_idle_act4_pane_g

0x2e5c,	// (0x0000df58) middle_sk_idle_act4_pane_t1_ParamLimits

0x2e5c,	// (0x0000df58) middle_sk_idle_act4_pane_t1

0x2e8b,	// (0x0000df87) grid_ai_shortcut_pane_ParamLimits

0x2e8b,	// (0x0000df87) grid_ai_shortcut_pane

0x2ea8,	// (0x0000dfa4) list_highlight_pane_cp16_ParamLimits

0x2ea8,	// (0x0000dfa4) list_highlight_pane_cp16

0x2eb5,	// (0x0000dfb1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x2eb5,	// (0x0000dfb1) list_single_idle_plugin_shortcut_pane_g1

0x2ec1,	// (0x0000dfbd) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x2ec1,	// (0x0000dfbd) list_single_idle_plugin_shortcut_pane_g2

0x2edd,	// (0x0000dfd9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x2edd,	// (0x0000dfd9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd92,	// (0x0001ae8e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd92,	// (0x0001ae8e) list_single_idle_plugin_shortcut_pane_g

0x2ef2,	// (0x0000dfee) cell_ai_shortcut_pane_ParamLimits

0x2ef2,	// (0x0000dfee) cell_ai_shortcut_pane

0x2f08,	// (0x0000e004) cell_ai_shortcut_pane_g1_ParamLimits

0x2f08,	// (0x0000e004) cell_ai_shortcut_pane_g1

0xd12f,	// (0x0001822b) ai_gene_pane_1_cp2

0xd324,	// (0x00018420) ai_gene_pane_2_cp2

0xd32c,	// (0x00018428) list_highlight_pane_cp15

0xd335,	// (0x00018431) list_single_idle_plugin_calendar_pane_g1

0xd32c,	// (0x00018428) list_highlight_pane_cp17

0xd33d,	// (0x00018439) list_single_idle_plugin_calendar_pane_g1_copy1

0xd345,	// (0x00018441) list_single_idle_plugin_player_pane_g1

0xa57a,	// (0x00015676) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd99,	// (0x0001ae95) list_single_idle_plugin_player_pane_g

0xd34d,	// (0x00018449) list_single_idle_plugin_player_pane_t1

0xd35b,	// (0x00018457) list_single_idle_plugin_player_pane_t2

0xd369,	// (0x00018465) list_single_idle_plugin_player_pane_t3

0xd377,	// (0x00018473) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9e,	// (0x0001ae9a) list_single_idle_plugin_player_pane_t

0xd385,	// (0x00018481) wait_bar_pane_cp15

0xd38d,	// (0x00018489) grid_ai_notification_pane

0xa57a,	// (0x00015676) list_single_idle_plugin_notification_pane_g1

0x2f2a,	// (0x0000e026) cell_ai_notification_pane_ParamLimits

0x2f2a,	// (0x0000e026) cell_ai_notification_pane

0xd3a3,	// (0x0001849f) cell_ai_notification_pane_g1

0xd3ab,	// (0x000184a7) cell_ai_notification_pane_t1

0x2f37,	// (0x0000e033) tb_ext_find_button_pane

0x2f3f,	// (0x0000e03b) tb_ext_find_pane_g1

0x2f47,	// (0x0000e043) tb_ext_find_pane_t1

0x75a5,	// (0x000126a1) tb_ext_find_button_pane_g1

0xd3d7,	// (0x000184d3) tb_ext_find_button_pane_g2

0x0001,

0xfda7,	// (0x0001aea3) tb_ext_find_button_pane_g

0x2d57,	// (0x0000de53) main_idle_act4_pane_t1_ParamLimits

0x2d6d,	// (0x0000de69) main_idle_act4_pane_t2_ParamLimits

0xfd65,	// (0x0001ae61) main_idle_act4_pane_t_ParamLimits

0x2d9f,	// (0x0000de9b) popup_clock_digital_analogue_window_cp2_ParamLimits

0x2db7,	// (0x0000deb3) sat_plugin_idle_act4_pane_ParamLimits

0x2db7,	// (0x0000deb3) sat_plugin_idle_act4_pane

0x2f55,	// (0x0000e051) sat_plugin_idle_act4_pane_t1_ParamLimits

0x2f55,	// (0x0000e051) sat_plugin_idle_act4_pane_t1

0x2f6d,	// (0x0000e069) sat_plugin_idle_act4_pane_t2_ParamLimits

0x2f6d,	// (0x0000e069) sat_plugin_idle_act4_pane_t2

0x2f85,	// (0x0000e081) sat_plugin_idle_act4_pane_t3_ParamLimits

0x2f85,	// (0x0000e081) sat_plugin_idle_act4_pane_t3

0x2f9d,	// (0x0000e099) sat_plugin_idle_act4_pane_t4_ParamLimits

0x2f9d,	// (0x0000e099) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdac,	// (0x0001aea8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdac,	// (0x0001aea8) sat_plugin_idle_act4_pane_t

0x451a,	// (0x0000f616) popup_battery_window_ParamLimits

0x451a,	// (0x0000f616) popup_battery_window

0x6283,	// (0x0001137f) bg_popup_sub_pane_cp25_ParamLimits

0x6283,	// (0x0001137f) bg_popup_sub_pane_cp25

0xd42c,	// (0x00018528) popup_battery_window_g1_ParamLimits

0xd42c,	// (0x00018528) popup_battery_window_g1

0xd438,	// (0x00018534) popup_battery_window_t1_ParamLimits

0xd438,	// (0x00018534) popup_battery_window_t1

0xd44a,	// (0x00018546) popup_battery_window_t2_ParamLimits

0xd44a,	// (0x00018546) popup_battery_window_t2

0x0001,

0xfdb5,	// (0x0001aeb1) popup_battery_window_t_ParamLimits

0xfdb5,	// (0x0001aeb1) popup_battery_window_t

0x0c59,	// (0x0000bd55) midp_canvas_pane_ParamLimits

0x0cb4,	// (0x0000bdb0) midp_keypad_pane_ParamLimits

0x0cb4,	// (0x0000bdb0) midp_keypad_pane

0x7f9b,	// (0x00013097) main_midp_pane_ParamLimits

0xae4e,	// (0x00015f4a) signal_pane_g2_cp_ParamLimits

0x2fb5,	// (0x0000e0b1) aid_size_cell_midp_keypad_ParamLimits

0x2fb5,	// (0x0000e0b1) aid_size_cell_midp_keypad

0x2fd3,	// (0x0000e0cf) midp_keyp_game_grid_pane_ParamLimits

0x2fd3,	// (0x0000e0cf) midp_keyp_game_grid_pane

0x2ffa,	// (0x0000e0f6) midp_keyp_rocker_pane_ParamLimits

0x2ffa,	// (0x0000e0f6) midp_keyp_rocker_pane

0x3053,	// (0x0000e14f) midp_keyp_sk_left_pane_ParamLimits

0x3053,	// (0x0000e14f) midp_keyp_sk_left_pane

0x30a7,	// (0x0000e1a3) midp_keyp_sk_right_pane_ParamLimits

0x30a7,	// (0x0000e1a3) midp_keyp_sk_right_pane

0x5eec,	// (0x00010fe8) bg_button_pane_cp03

0x30fb,	// (0x0000e1f7) midp_keyp_sk_left_pane_g1

0x5eec,	// (0x00010fe8) bg_button_pane_cp04

0x30fb,	// (0x0000e1f7) midp_keyp_sk_right_pane_g1

0xb3ec,	// (0x000164e8) midp_keyp_rocker_pane_g1

0x3104,	// (0x0000e200) keyp_game_cell_pane_ParamLimits

0x3104,	// (0x0000e200) keyp_game_cell_pane

0x5eec,	// (0x00010fe8) bg_button_pane_cp02

0x3128,	// (0x0000e224) keyp_game_cell_pane_g1

0xe5a2,	// (0x0001969e) popup_fep_vkb2_window_ParamLimits

0xe5a2,	// (0x0001969e) popup_fep_vkb2_window

0xea11,	// (0x00019b0d) aid_size_cell_vkb2_ParamLimits

0xea11,	// (0x00019b0d) aid_size_cell_vkb2

0xea47,	// (0x00019b43) popup_fep_vkb2_window_g1_ParamLimits

0xea47,	// (0x00019b43) popup_fep_vkb2_window_g1

0xea97,	// (0x00019b93) vkb2_area_bottom_pane_ParamLimits

0xea97,	// (0x00019b93) vkb2_area_bottom_pane

0xeaeb,	// (0x00019be7) vkb2_area_keypad_pane_ParamLimits

0xeaeb,	// (0x00019be7) vkb2_area_keypad_pane

0xeb33,	// (0x00019c2f) vkb2_area_top_pane_ParamLimits

0xeb33,	// (0x00019c2f) vkb2_area_top_pane

0xebb9,	// (0x00019cb5) vkb2_top_entry_pane_ParamLimits

0xebb9,	// (0x00019cb5) vkb2_top_entry_pane

0xebe6,	// (0x00019ce2) vkb2_top_grid_left_pane_ParamLimits

0xebe6,	// (0x00019ce2) vkb2_top_grid_left_pane

0xec06,	// (0x00019d02) vkb2_top_grid_right_pane_ParamLimits

0xec06,	// (0x00019d02) vkb2_top_grid_right_pane

0x5938,	// (0x00010a34) vkb2_cell_keypad_pane_ParamLimits

0x5938,	// (0x00010a34) vkb2_cell_keypad_pane

0xec4c,	// (0x00019d48) vkb2_area_bottom_grid_pane_ParamLimits

0xec4c,	// (0x00019d48) vkb2_area_bottom_grid_pane

0xec76,	// (0x00019d72) vkb2_area_bottom_pane_g1_ParamLimits

0xec76,	// (0x00019d72) vkb2_area_bottom_pane_g1

0xec9c,	// (0x00019d98) vkb2_area_bottom_pane_g2_ParamLimits

0xec9c,	// (0x00019d98) vkb2_area_bottom_pane_g2

0xeccd,	// (0x00019dc9) vkb2_area_bottom_pane_g3_ParamLimits

0xeccd,	// (0x00019dc9) vkb2_area_bottom_pane_g3

0x0002,

0xfdba,	// (0x0001aeb6) vkb2_area_bottom_pane_g_ParamLimits

0xfdba,	// (0x0001aeb6) vkb2_area_bottom_pane_g

0x5ae2,	// (0x00010bde) vkb2_top_cell_left_pane_ParamLimits

0x5ae2,	// (0x00010bde) vkb2_top_cell_left_pane

0x3457,	// (0x0000e553) vkb2_top_entry_pane_g1_ParamLimits

0x3457,	// (0x0000e553) vkb2_top_entry_pane_g1

0x3465,	// (0x0000e561) vkb2_top_entry_pane_t1_ParamLimits

0x3465,	// (0x0000e561) vkb2_top_entry_pane_t1

0xd5fb,	// (0x000186f7) vkb2_top_entry_pane_t2_ParamLimits

0xd5fb,	// (0x000186f7) vkb2_top_entry_pane_t2

0xd62d,	// (0x00018729) vkb2_top_entry_pane_t3_ParamLimits

0xd62d,	// (0x00018729) vkb2_top_entry_pane_t3

0x0002,

0xfdc1,	// (0x0001aebd) vkb2_top_entry_pane_t_ParamLimits

0xfdc1,	// (0x0001aebd) vkb2_top_entry_pane_t

0xed37,	// (0x00019e33) vkb2_top_grid_right_pane_g1_ParamLimits

0xed37,	// (0x00019e33) vkb2_top_grid_right_pane_g1

0x5b45,	// (0x00010c41) vkb2_top_grid_right_pane_g2_ParamLimits

0x5b45,	// (0x00010c41) vkb2_top_grid_right_pane_g2

0x5b5d,	// (0x00010c59) vkb2_top_grid_right_pane_g3_ParamLimits

0x5b5d,	// (0x00010c59) vkb2_top_grid_right_pane_g3

0xed4d,	// (0x00019e49) vkb2_top_grid_right_pane_g4_ParamLimits

0xed4d,	// (0x00019e49) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc8,	// (0x0001aec4) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc8,	// (0x0001aec4) vkb2_top_grid_right_pane_g

0x5b8b,	// (0x00010c87) vkb2_top_cell_left_pane_g1

0x5ba2,	// (0x00010c9e) vkb2_cell_keypad_pane_g1_ParamLimits

0x5ba2,	// (0x00010c9e) vkb2_cell_keypad_pane_g1

0xd643,	// (0x0001873f) vkb2_cell_keypad_pane_t1_ParamLimits

0xd643,	// (0x0001873f) vkb2_cell_keypad_pane_t1

0x5bb0,	// (0x00010cac) vkb2_cell_bottom_grid_pane_ParamLimits

0x5bb0,	// (0x00010cac) vkb2_cell_bottom_grid_pane

0x5be9,	// (0x00010ce5) vkb2_cell_bottom_grid_pane_g1

0x2de8,	// (0x0000dee4) aid_call2_pane_cp02

0x2df0,	// (0x0000deec) aid_call_pane_cp02

0x2df8,	// (0x0000def4) clock_digital_number_pane_cp10

0x2e00,	// (0x0000defc) clock_digital_number_pane_cp11

0x2e08,	// (0x0000df04) clock_digital_number_pane_cp12

0x2e10,	// (0x0000df0c) clock_digital_number_pane_cp13

0x2e18,	// (0x0000df14) clock_digital_separator_pane_cp10

0x75a5,	// (0x000126a1) popup_clock_digital_analogue_window_cp2_g1

0x75a5,	// (0x000126a1) popup_clock_digital_analogue_window_cp2_g2

0x2e20,	// (0x0000df1c) popup_clock_digital_analogue_window_cp2_g3

0x75a5,	// (0x000126a1) popup_clock_digital_analogue_window_cp2_g4

0x2e20,	// (0x0000df1c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd7d,	// (0x0001ae79) popup_clock_digital_analogue_window_cp2_g

0x2e28,	// (0x0000df24) popup_clock_digital_analogue_window_cp2_t1

0x2e36,	// (0x0000df32) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd88,	// (0x0001ae84) popup_clock_digital_analogue_window_cp2_t

0xb3ec,	// (0x000164e8) clock_digital_number_pane_cp10_g1

0xb3ec,	// (0x000164e8) clock_digital_number_pane_cp10_g2

0x0001,

0xfb64,	// (0x0001ac60) clock_digital_number_pane_cp10_g

0xb3ec,	// (0x000164e8) clock_digital_separator_pane_cp10_g1

0xb3ec,	// (0x000164e8) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb64,	// (0x0001ac60) clock_digital_separator_pane_cp10_g

0xd078,	// (0x00018174) uniindi_top_pane_g3

0xd089,	// (0x00018185) uniindi_top_pane_g4

0x59c3,	// (0x00010abf) vkb2_row_keypad_pane_ParamLimits

0x59c3,	// (0x00010abf) vkb2_row_keypad_pane

0x5c05,	// (0x00010d01) vkb2_cell_t_keypad_pane_ParamLimits

0x5c05,	// (0x00010d01) vkb2_cell_t_keypad_pane

0x5c15,	// (0x00010d11) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x5c15,	// (0x00010d11) vkb2_cell_t_keypad_pane_cp08

0x5c28,	// (0x00010d24) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5c28,	// (0x00010d24) vkb2_cell_t_keypad_pane_cp09

0x5c3c,	// (0x00010d38) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x5c3c,	// (0x00010d38) vkb2_cell_t_keypad_pane_cp01

0x5c4d,	// (0x00010d49) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5c4d,	// (0x00010d49) vkb2_cell_t_keypad_pane_cp02

0x5c5e,	// (0x00010d5a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5c5e,	// (0x00010d5a) vkb2_cell_t_keypad_pane_cp03

0x5c6f,	// (0x00010d6b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5c6f,	// (0x00010d6b) vkb2_cell_t_keypad_pane_cp04

0x5c80,	// (0x00010d7c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x5c80,	// (0x00010d7c) vkb2_cell_t_keypad_pane_cp05

0x5c91,	// (0x00010d8d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5c91,	// (0x00010d8d) vkb2_cell_t_keypad_pane_cp06

0x5ca2,	// (0x00010d9e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5ca2,	// (0x00010d9e) vkb2_cell_t_keypad_pane_cp07

0x5cb3,	// (0x00010daf) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5cb3,	// (0x00010daf) vkb2_cell_t_keypad_pane_cp10

0x5465,	// (0x00010561) vkb2_cell_t_keypad_pane_g1

0xd65a,	// (0x00018756) vkb2_cell_t_keypad_pane_t1

0x4455,	// (0x0000f551) popup_grid_graphic2_window

0x34ca,	// (0x0000e5c6) aid_size_cell_graphic2_ParamLimits

0x34ca,	// (0x0000e5c6) aid_size_cell_graphic2

0x9177,	// (0x00014273) bg_popup_window_pane_cp21_ParamLimits

0x9177,	// (0x00014273) bg_popup_window_pane_cp21

0x34fc,	// (0x0000e5f8) graphic2_pages_pane_ParamLimits

0x34fc,	// (0x0000e5f8) graphic2_pages_pane

0x3552,	// (0x0000e64e) grid_graphic2_control_pane_ParamLimits

0x3552,	// (0x0000e64e) grid_graphic2_control_pane

0x3586,	// (0x0000e682) grid_graphic2_pane_ParamLimits

0x3586,	// (0x0000e682) grid_graphic2_pane

0x35f9,	// (0x0000e6f5) cell_graphic2_pane

0x5eec,	// (0x00010fe8) main_comp_mode_pane

0xc895,	// (0x00017991) list_ai3_gene_pane_ParamLimits

0x2ac4,	// (0x0000dbc0) bg_popup_window_pane_cp19_ParamLimits

0xccce,	// (0x00017dca) bg_touch_area_indi_pane_ParamLimits

0xccce,	// (0x00017dca) bg_touch_area_indi_pane

0xcce4,	// (0x00017de0) bg_touch_area_indi_pane_cp01_ParamLimits

0xcce4,	// (0x00017de0) bg_touch_area_indi_pane_cp01

0xccfa,	// (0x00017df6) bg_touch_area_indi_pane_cp02_ParamLimits

0xccfa,	// (0x00017df6) bg_touch_area_indi_pane_cp02

0xcd12,	// (0x00017e0e) bg_touch_area_indi_pane_cp03_ParamLimits

0xcd12,	// (0x00017e0e) bg_touch_area_indi_pane_cp03

0xcd2c,	// (0x00017e28) popup_slider_window_g1_ParamLimits

0xcd48,	// (0x00017e44) popup_slider_window_g2_ParamLimits

0xcd64,	// (0x00017e60) popup_slider_window_g3_ParamLimits

0xfd12,	// (0x0001ae0e) popup_slider_window_g_ParamLimits

0xcdc0,	// (0x00017ebc) popup_slider_window_t1_ParamLimits

0xce34,	// (0x00017f30) small_volume_slider_vertical_pane_ParamLimits

0x35f9,	// (0x0000e6f5) cell_graphic2_pane_ParamLimits

0x3654,	// (0x0000e750) bg_button_pane_cp10_ParamLimits

0x3654,	// (0x0000e750) bg_button_pane_cp10

0x3667,	// (0x0000e763) bg_button_pane_cp11_ParamLimits

0x3667,	// (0x0000e763) bg_button_pane_cp11

0x367a,	// (0x0000e776) graphic2_pages_pane_g1_ParamLimits

0x367a,	// (0x0000e776) graphic2_pages_pane_g1

0x3695,	// (0x0000e791) graphic2_pages_pane_g2_ParamLimits

0x3695,	// (0x0000e791) graphic2_pages_pane_g2

0x0001,

0xfdd6,	// (0x0001aed2) graphic2_pages_pane_g_ParamLimits

0xfdd6,	// (0x0001aed2) graphic2_pages_pane_g

0x36ad,	// (0x0000e7a9) graphic2_pages_pane_t1_ParamLimits

0x36ad,	// (0x0000e7a9) graphic2_pages_pane_t1

0x36c5,	// (0x0000e7c1) cell_graphic2_control_pane_ParamLimits

0x36c5,	// (0x0000e7c1) cell_graphic2_control_pane

0x36df,	// (0x0000e7db) cell_graphic2_pane_g1_ParamLimits

0x36df,	// (0x0000e7db) cell_graphic2_pane_g1

0xedf3,	// (0x00019eef) cell_graphic2_pane_g2_ParamLimits

0xedf3,	// (0x00019eef) cell_graphic2_pane_g2

0x36ec,	// (0x0000e7e8) cell_graphic2_pane_g3_ParamLimits

0x36ec,	// (0x0000e7e8) cell_graphic2_pane_g3

0xee00,	// (0x00019efc) cell_graphic2_pane_g4_ParamLimits

0xee00,	// (0x00019efc) cell_graphic2_pane_g4

0x36f9,	// (0x0000e7f5) cell_graphic2_pane_g5_ParamLimits

0x36f9,	// (0x0000e7f5) cell_graphic2_pane_g5

0x0004,

0xfddb,	// (0x0001aed7) cell_graphic2_pane_g_ParamLimits

0xfddb,	// (0x0001aed7) cell_graphic2_pane_g

0x3719,	// (0x0000e815) cell_graphic2_pane_t1_ParamLimits

0x3719,	// (0x0000e815) cell_graphic2_pane_t1

0x97eb,	// (0x000148e7) grid_highlight_pane_cp11_ParamLimits

0x97eb,	// (0x000148e7) grid_highlight_pane_cp11

0x6dc7,	// (0x00011ec3) bg_button_pane_cp05

0x3730,	// (0x0000e82c) cell_graphic2_control_pane_g1

0xb3ec,	// (0x000164e8) bg_touch_area_indi_pane_g1

0xd8b8,	// (0x000189b4) aid_cmod_rocker_key_size

0xd8c2,	// (0x000189be) aid_cmode_itu_key_size

0xd8cc,	// (0x000189c8) main_cmode_video_pane

0xd8d6,	// (0x000189d2) main_comp_mode_itu_pane

0xd8e2,	// (0x000189de) main_comp_mode_rocker_pane

0xd8ee,	// (0x000189ea) cell_cmode_rocker_pane_ParamLimits

0xd8ee,	// (0x000189ea) cell_cmode_rocker_pane

0xd900,	// (0x000189fc) cell_cmode_itu_pane_ParamLimits

0xd900,	// (0x000189fc) cell_cmode_itu_pane

0x6dc7,	// (0x00011ec3) bg_button_pane_cp06_ParamLimits

0x6dc7,	// (0x00011ec3) bg_button_pane_cp06

0xb68c,	// (0x00016788) cell_cmode_rocker_pane_g1_ParamLimits

0xb68c,	// (0x00016788) cell_cmode_rocker_pane_g1

0xced8,	// (0x00017fd4) cell_cmode_rocker_pane_g2_ParamLimits

0xced8,	// (0x00017fd4) cell_cmode_rocker_pane_g2

0x0001,

0xfde6,	// (0x0001aee2) cell_cmode_rocker_pane_g_ParamLimits

0xfde6,	// (0x0001aee2) cell_cmode_rocker_pane_g

0x5eec,	// (0x00010fe8) bg_button_pane_cp07

0xd915,	// (0x00018a11) cell_cmode_itu_pane_g1

0xd91e,	// (0x00018a1a) cell_cmode_itu_pane_t1

0xd92c,	// (0x00018a28) cell_cmode_itu_pane_t2

0x0001,

0xfdeb,	// (0x0001aee7) cell_cmode_itu_pane_t

0xd0fb,	// (0x000181f7) aid_touch_ctrl_left

0xd103,	// (0x000181ff) aid_touch_ctrl_right

0x5eec,	// (0x00010fe8) compa_mode_pane

0x373d,	// (0x0000e839) aid_cmod_rocker_key_size_cp

0x3747,	// (0x0000e843) aid_cmode_itu_key_size_cp

0xd94e,	// (0x00018a4a) compa_mode_pane_g1

0xd956,	// (0x00018a52) compa_mode_pane_g2

0xd95e,	// (0x00018a5a) compa_mode_pane_g3

0x0002,

0xfdf0,	// (0x0001aeec) compa_mode_pane_g

0x3751,	// (0x0000e84d) main_comp_mode_itu_pane_cp

0x3759,	// (0x0000e855) main_comp_mode_rocker_pane_cp

0x3761,	// (0x0000e85d) cell_cmode_itu_pane_cp_ParamLimits

0x3761,	// (0x0000e85d) cell_cmode_itu_pane_cp

0x3776,	// (0x0000e872) cell_cmode_rocker_pane_cp_ParamLimits

0x3776,	// (0x0000e872) cell_cmode_rocker_pane_cp

0x6dc7,	// (0x00011ec3) bg_button_pane_cp06_cp_ParamLimits

0x6dc7,	// (0x00011ec3) bg_button_pane_cp06_cp

0xb68c,	// (0x00016788) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb68c,	// (0x00016788) cell_cmode_rocker_pane_g1_cp

0xb3ec,	// (0x000164e8) cell_cmode_rocker_pane_g2_cp

0x5eec,	// (0x00010fe8) bg_button_pane_cp07_cp

0x3788,	// (0x0000e884) cell_cmode_itu_pane_g1_cp

0x3791,	// (0x0000e88d) cell_cmode_itu_pane_t1_cp

0x3791,	// (0x0000e88d) cell_cmode_itu_pane_t2_cp

0x1ea9,	// (0x0000cfa5) settings_code_pane_cp2

0x5fe0,	// (0x000110dc) bg_popup_window_pane_cp3_ParamLimits

0x645d,	// (0x00011559) heading_pane_cp3_ParamLimits

0x6469,	// (0x00011565) listscroll_popup_graphic_pane_ParamLimits

0x520e,	// (0x0001030a) fep_hwr_aid_pane_ParamLimits

0x5686,	// (0x00010782) aid_touch_sctrl_top_ParamLimits

0x56a1,	// (0x0001079d) sctrl_sk_top_pane_g1_ParamLimits

0x5465,	// (0x00010561) sctrl_sk_top_pane_g2_ParamLimits

0xfd2b,	// (0x0001ae27) sctrl_sk_top_pane_g_ParamLimits

0x56ae,	// (0x000107aa) sctrl_sk_top_pane_t1_ParamLimits

0x5686,	// (0x00010782) aid_touch_sctrl_bottom_ParamLimits

0x56ae,	// (0x000107aa) sctrl_sk_bottom_pane_t1_ParamLimits

0xd044,	// (0x00018140) aid_area_touch_clock

0xeb7b,	// (0x00019c77) aid_vkb2_area_top_pane_cell_ParamLimits

0xeb7b,	// (0x00019c77) aid_vkb2_area_top_pane_cell

0xec26,	// (0x00019d22) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xec26,	// (0x00019d22) aid_vkb2_area_bottom_pane_cell

0xd5b3,	// (0x000186af) popup_char_count_window

0xd9ab,	// (0x00018aa7) popup_char_count_window_g1

0xd9b4,	// (0x00018ab0) popup_char_count_window_g2

0xd9bd,	// (0x00018ab9) popup_char_count_window_g3

0x0002,

0xfdf7,	// (0x0001aef3) popup_char_count_window_g

0xd9c6,	// (0x00018ac2) popup_char_count_window_t1

0x5760,	// (0x0001085c) popup_fep_char_preview_window_ParamLimits

0x5760,	// (0x0001085c) popup_fep_char_preview_window

0xeb9b,	// (0x00019c97) vkb2_top_candi_pane_ParamLimits

0xeb9b,	// (0x00019c97) vkb2_top_candi_pane

0x379f,	// (0x0000e89b) cell_vkb2_top_candi_pane_ParamLimits

0x379f,	// (0x0000e89b) cell_vkb2_top_candi_pane

0x5cc8,	// (0x00010dc4) bg_popup_fep_char_preview_window_ParamLimits

0x5cc8,	// (0x00010dc4) bg_popup_fep_char_preview_window

0x5cd6,	// (0x00010dd2) popup_fep_char_preview_window_t1_ParamLimits

0x5cd6,	// (0x00010dd2) popup_fep_char_preview_window_t1

0xda21,	// (0x00018b1d) bg_popup_fep_char_preview_window_g1

0xda29,	// (0x00018b25) bg_popup_fep_char_preview_window_g2

0xda31,	// (0x00018b2d) bg_popup_fep_char_preview_window_g3

0xda6a,	// (0x00018b66) bg_popup_fep_char_preview_window_g4

0xda72,	// (0x00018b6e) bg_popup_fep_char_preview_window_g5

0x5d10,	// (0x00010e0c) bg_popup_fep_char_preview_window_g6

0xda39,	// (0x00018b35) bg_popup_fep_char_preview_window_g7

0xda41,	// (0x00018b3d) bg_popup_fep_char_preview_window_g8

0xda7a,	// (0x00018b76) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfe,	// (0x0001aefa) bg_popup_fep_char_preview_window_g

0x5465,	// (0x00010561) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5465,	// (0x00010561) cell_vkb2_top_candi_pane_g1

0x5473,	// (0x0001056f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5473,	// (0x0001056f) cell_vkb2_top_candi_pane_g2

0xda49,	// (0x00018b45) cell_vkb2_top_candi_pane_g3_ParamLimits

0xda49,	// (0x00018b45) cell_vkb2_top_candi_pane_g3

0x5d18,	// (0x00010e14) cell_vkb2_top_candi_pane_g4_ParamLimits

0x5d18,	// (0x00010e14) cell_vkb2_top_candi_pane_g4

0xbcbe,	// (0x00016dba) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbcbe,	// (0x00016dba) cell_vkb2_top_candi_pane_g5

0x5d39,	// (0x00010e35) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5d39,	// (0x00010e35) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe11,	// (0x0001af0d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe11,	// (0x0001af0d) cell_vkb2_top_candi_pane_g

0x5d47,	// (0x00010e43) cell_vkb2_top_candi_pane_t1

0x506e,	// (0x0001016a) aid_size_touch_slider_mark_ParamLimits

0x506e,	// (0x0001016a) aid_size_touch_slider_mark

0x3538,	// (0x0000e634) grid_graphic2_catg_pane_ParamLimits

0x3538,	// (0x0000e634) grid_graphic2_catg_pane

0x35cc,	// (0x0000e6c8) popup_grid_graphic2_window_t1_ParamLimits

0x35cc,	// (0x0000e6c8) popup_grid_graphic2_window_t1

0x35e2,	// (0x0000e6de) popup_grid_graphic2_window_t2_ParamLimits

0x35e2,	// (0x0000e6de) popup_grid_graphic2_window_t2

0x0001,

0xfdd1,	// (0x0001aecd) popup_grid_graphic2_window_t_ParamLimits

0xfdd1,	// (0x0001aecd) popup_grid_graphic2_window_t

0x6dc7,	// (0x00011ec3) bg_button_pane_cp05_ParamLimits

0x3730,	// (0x0000e82c) cell_graphic2_control_pane_g1_ParamLimits

0x3805,	// (0x0000e901) cell_graphic2_catg_pane_ParamLimits

0x3805,	// (0x0000e901) cell_graphic2_catg_pane

0x5eec,	// (0x00010fe8) bg_button_pane_cp12

0x3817,	// (0x0000e913) cell_graphic2_catg_pane_g1

0xd010,	// (0x0001810c) cell_tb_ext_pane_t1_ParamLimits

0x5b02,	// (0x00010bfe) vkb2_top_cell_right_narrow_pane_ParamLimits

0x5b02,	// (0x00010bfe) vkb2_top_cell_right_narrow_pane

0x5b1a,	// (0x00010c16) vkb2_top_cell_right_wide_pane_ParamLimits

0x5b1a,	// (0x00010c16) vkb2_top_cell_right_wide_pane

0x5200,	// (0x000102fc) bg_vkb2_func_pane_ParamLimits

0x5200,	// (0x000102fc) bg_vkb2_func_pane

0x5b8b,	// (0x00010c87) vkb2_top_cell_left_pane_g1_ParamLimits

0x5200,	// (0x000102fc) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5200,	// (0x000102fc) bg_vkb2_fuc_pane_cp03

0x5be9,	// (0x00010ce5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8a7b,	// (0x00013b77) bg_vkb2_func_pane_g1

0x8a83,	// (0x00013b7f) bg_vkb2_func_pane_g2

0x8a93,	// (0x00013b8f) bg_vkb2_func_pane_g3

0x8a8b,	// (0x00013b87) bg_vkb2_func_pane_g4

0x8a9b,	// (0x00013b97) bg_vkb2_func_pane_g5

0x8aa3,	// (0x00013b9f) bg_vkb2_func_pane_g6

0x8aab,	// (0x00013ba7) bg_vkb2_func_pane_g7

0x8ab3,	// (0x00013baf) bg_vkb2_func_pane_g8

0x8a73,	// (0x00013b6f) bg_vkb2_func_pane_g9

0x0008,

0xfe1e,	// (0x0001af1a) bg_vkb2_func_pane_g

0x5200,	// (0x000102fc) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5200,	// (0x000102fc) bg_vkb2_fuc_pane_cp01

0x5b8b,	// (0x00010c87) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x5b8b,	// (0x00010c87) vkb2_top_cell_right_wide_pane_g1

0x5200,	// (0x000102fc) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5200,	// (0x000102fc) bg_vkb2_fuc_pane_cp02

0x5be9,	// (0x00010ce5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x5be9,	// (0x00010ce5) vkb2_top_cell_right_narrow_pane_g1

0x2a04,	// (0x0000db00) aid_touch_area_decrease_ParamLimits

0x2a04,	// (0x0000db00) aid_touch_area_decrease

0x2a38,	// (0x0000db34) aid_touch_area_increase_ParamLimits

0x2a38,	// (0x0000db34) aid_touch_area_increase

0x2a60,	// (0x0000db5c) aid_touch_area_mute_ParamLimits

0x2a60,	// (0x0000db5c) aid_touch_area_mute

0x2a90,	// (0x0000db8c) aid_touch_area_slider_ParamLimits

0x2a90,	// (0x0000db8c) aid_touch_area_slider

0x2ad0,	// (0x0000dbcc) popup_slider_window_g4_ParamLimits

0x2ad0,	// (0x0000dbcc) popup_slider_window_g4

0x2af8,	// (0x0000dbf4) popup_slider_window_g5_ParamLimits

0x2af8,	// (0x0000dbf4) popup_slider_window_g5

0x2b2c,	// (0x0000dc28) popup_slider_window_g6_ParamLimits

0x2b2c,	// (0x0000dc28) popup_slider_window_g6

0xcdee,	// (0x00017eea) popup_slider_window_t2_ParamLimits

0xcdee,	// (0x00017eea) popup_slider_window_t2

0x0001,

0xfd1f,	// (0x0001ae1b) popup_slider_window_t_ParamLimits

0xfd1f,	// (0x0001ae1b) popup_slider_window_t

0x2b48,	// (0x0000dc44) slider_pane_ParamLimits

0x2b48,	// (0x0000dc44) slider_pane

0xda9d,	// (0x00018b99) slider_pane_g1_ParamLimits

0xda9d,	// (0x00018b99) slider_pane_g1

0xdab1,	// (0x00018bad) slider_pane_g2_ParamLimits

0xdab1,	// (0x00018bad) slider_pane_g2

0xdac7,	// (0x00018bc3) slider_pane_g3_ParamLimits

0xdac7,	// (0x00018bc3) slider_pane_g3

0x0003,

0xfe31,	// (0x0001af2d) slider_pane_g_ParamLimits

0xfe31,	// (0x0001af2d) slider_pane_g

0x148d,	// (0x0000c589) popup_tb_float_extension_window_ParamLimits

0x148d,	// (0x0000c589) popup_tb_float_extension_window

0xdaf3,	// (0x00018bef) aid_size_cell_tb_float_ext

0x5eec,	// (0x00010fe8) bg_popup_sub_window_cp28

0xdaff,	// (0x00018bfb) grid_tb_float_ext_pane

0xdb09,	// (0x00018c05) cell_tb_float_ext_pane_ParamLimits

0xdb09,	// (0x00018c05) cell_tb_float_ext_pane

0xdb23,	// (0x00018c1f) cell_tb_float_ext_pane_g1

0xdb2c,	// (0x00018c28) grid_highlight_pane_cp12

0xe984,	// (0x00019a80) cell_last_hwr_side_pane_ParamLimits

0xe984,	// (0x00019a80) cell_last_hwr_side_pane

0xb3ec,	// (0x000164e8) cell_last_hwr_side_pane_g1

0xdb35,	// (0x00018c31) cell_last_hwr_side_pane_g2

0x0001,

0xfe3a,	// (0x0001af36) cell_last_hwr_side_pane_g

0xed02,	// (0x00019dfe) vkb2_area_bottom_space_btn_pane_ParamLimits

0xed02,	// (0x00019dfe) vkb2_area_bottom_space_btn_pane

0x5465,	// (0x00010561) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd65a,	// (0x00018756) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x5d47,	// (0x00010e43) cell_vkb2_top_candi_pane_t1_ParamLimits

0x5d66,	// (0x00010e62) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x5d66,	// (0x00010e62) vkb2_area_bottom_space_btn_pane_g1

0x5da0,	// (0x00010e9c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x5da0,	// (0x00010e9c) vkb2_area_bottom_space_btn_pane_g2

0x5dd6,	// (0x00010ed2) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x5dd6,	// (0x00010ed2) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3f,	// (0x0001af3b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3f,	// (0x0001af3b) vkb2_area_bottom_space_btn_pane_g

0x52c3,	// (0x000103bf) cel_fep_hwr_func_pane_ParamLimits

0x52c3,	// (0x000103bf) cel_fep_hwr_func_pane

0xe959,	// (0x00019a55) cell_hwr_side_button_pane_ParamLimits

0xe959,	// (0x00019a55) cell_hwr_side_button_pane

0xd044,	// (0x00018140) aid_area_touch_clock_ParamLimits

0x6283,	// (0x0001137f) bg_uniindi_top_pane_ParamLimits

0xd056,	// (0x00018152) uniindi_top_pane_g1_ParamLimits

0xd06c,	// (0x00018168) uniindi_top_pane_g2_ParamLimits

0xd078,	// (0x00018174) uniindi_top_pane_g3_ParamLimits

0xd089,	// (0x00018185) uniindi_top_pane_g4_ParamLimits

0xfd57,	// (0x0001ae53) uniindi_top_pane_g_ParamLimits

0xd096,	// (0x00018192) uniindi_top_pane_t1_ParamLimits

0x6283,	// (0x0001137f) bg_vkb2_func_pane_cp01_ParamLimits

0x6283,	// (0x0001137f) bg_vkb2_func_pane_cp01

0xee0d,	// (0x00019f09) cel_fep_hwr_func_pane_g1_ParamLimits

0xee0d,	// (0x00019f09) cel_fep_hwr_func_pane_g1

0x6283,	// (0x0001137f) bg_vkb2_func_pane_cp02_ParamLimits

0x6283,	// (0x0001137f) bg_vkb2_func_pane_cp02

0xee0d,	// (0x00019f09) cell_hwr_side_button_pane_g1_ParamLimits

0xee0d,	// (0x00019f09) cell_hwr_side_button_pane_g1

0x88ba,	// (0x000139b6) status_pane_g4_ParamLimits

0x88ba,	// (0x000139b6) status_pane_g4

0x88d4,	// (0x000139d0) status_pane_t1

0xb125,	// (0x00016221) form2_midp_gauge_slider_cont_pane

0xb12d,	// (0x00016229) form2_midp_gauge_slider_pane_t1_ParamLimits

0x2206,	// (0x0000d302) form2_midp_gauge_slider_pane_t2_ParamLimits

0x2218,	// (0x0000d314) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb17,	// (0x0001ac13) form2_midp_gauge_slider_pane_t_ParamLimits

0xb163,	// (0x0001625f) form2_midp_slider_pane_ParamLimits

0x5720,	// (0x0001081c) aid_size_cell_func_vkb2_ParamLimits

0x5720,	// (0x0001081c) aid_size_cell_func_vkb2

0xdadf,	// (0x00018bdb) slider_pane_g4_ParamLimits

0xdadf,	// (0x00018bdb) slider_pane_g4

0xed63,	// (0x00019e5f) form2_midp_gauge_slider_pane_t2_cp01

0xed71,	// (0x00019e6d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xed71,	// (0x00019e6d) form2_midp_gauge_slider_pane_t3_cp01

0x5e4b,	// (0x00010f47) form2_midp_slider_pane_cp01

0x5eec,	// (0x00010fe8) navi_smil_pane

0xee3d,	// (0x00019f39) navi_smil_pane_g1

0xee45,	// (0x00019f41) navi_smil_pane_t1

0xee1b,	// (0x00019f17) form2_midp_slider_pane_g1

0xee24,	// (0x00019f20) form2_midp_slider_pane_g2

0xee2c,	// (0x00019f28) form2_midp_slider_pane_g3

0xee1b,	// (0x00019f17) form2_midp_slider_pane_g4

0x384b,	// (0x0000e947) form2_midp_slider_pane_g5

0x0004,

0xfe48,	// (0x0001af44) form2_midp_slider_pane_g

0x5e10,	// (0x00010f0c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x5e10,	// (0x00010f0c) vkb2_area_bottom_space_btn_pane_g4

0x1669,	// (0x0000c765) lc0_navi_pane_ParamLimits

0x1669,	// (0x0000c765) lc0_navi_pane

0x16d3,	// (0x0000c7cf) lc0_stat_indi_pane_ParamLimits

0x16d3,	// (0x0000c7cf) lc0_stat_indi_pane

0x16e8,	// (0x0000c7e4) ls0_title_pane_ParamLimits

0x16e8,	// (0x0000c7e4) ls0_title_pane

0x6dc7,	// (0x00011ec3) bg_popup_sub_pane_cp14_ParamLimits

0xd02b,	// (0x00018127) list_uniindi_pane_ParamLimits

0xd037,	// (0x00018133) uniindi_top_pane_ParamLimits

0xd0d3,	// (0x000181cf) list_single_uniindi_pane_g1_ParamLimits

0xd0e6,	// (0x000181e2) list_single_uniindi_pane_t1_ParamLimits

0xed8e,	// (0x00019e8a) lc0_stat_clock_pane_ParamLimits

0xed8e,	// (0x00019e8a) lc0_stat_clock_pane

0x386e,	// (0x0000e96a) lc0_stat_indi_pane_g1_ParamLimits

0x386e,	// (0x0000e96a) lc0_stat_indi_pane_g1

0x3861,	// (0x0000e95d) lc0_stat_indi_pane_g2_ParamLimits

0x3861,	// (0x0000e95d) lc0_stat_indi_pane_g2

0x0001,

0xfe53,	// (0x0001af4f) lc0_stat_indi_pane_g_ParamLimits

0xfe53,	// (0x0001af4f) lc0_stat_indi_pane_g

0xed9b,	// (0x00019e97) lc0_uni_indicator_pane_ParamLimits

0xed9b,	// (0x00019e97) lc0_uni_indicator_pane

0xee53,	// (0x00019f4f) ls0_title_pane_g1_ParamLimits

0xee53,	// (0x00019f4f) ls0_title_pane_g1

0x3888,	// (0x0000e984) ls0_title_pane_t1_ParamLimits

0x3888,	// (0x0000e984) ls0_title_pane_t1

0xeda8,	// (0x00019ea4) lc0_uni_indicator_pane_g1_ParamLimits

0xeda8,	// (0x00019ea4) lc0_uni_indicator_pane_g1

0xee67,	// (0x00019f63) lc0_stat_clock_pane_t1

0x5eec,	// (0x00010fe8) main_ai5_pane

0xee75,	// (0x00019f71) ai5_sk_pane_ParamLimits

0xee75,	// (0x00019f71) ai5_sk_pane

0x38dd,	// (0x0000e9d9) cell_ai5_widget_pane_ParamLimits

0x38dd,	// (0x0000e9d9) cell_ai5_widget_pane

0xee82,	// (0x00019f7e) aid_size_cell_widget_grid

0xee94,	// (0x00019f90) bg_ai5_widget_pane_ParamLimits

0xee94,	// (0x00019f90) bg_ai5_widget_pane

0x3966,	// (0x0000ea62) cell_ai5_widget_pane_g2

0x3976,	// (0x0000ea72) cell_ai5_widget_pane_g3

0x398a,	// (0x0000ea86) cell_ai5_widget_pane_g4

0x3996,	// (0x0000ea92) cell_ai5_widget_pane_g5

0x39a2,	// (0x0000ea9e) cell_ai5_widget_pane_g6

0x39ae,	// (0x0000eaaa) cell_ai5_widget_pane_g7

0x39f6,	// (0x0000eaf2) cell_ai5_widget_pane_t1_ParamLimits

0x39f6,	// (0x0000eaf2) cell_ai5_widget_pane_t1

0x3a13,	// (0x0000eb0f) cell_ai5_widget_pane_t2_ParamLimits

0x3a13,	// (0x0000eb0f) cell_ai5_widget_pane_t2

0x3a2b,	// (0x0000eb27) cell_ai5_widget_pane_t3_ParamLimits

0x3a2b,	// (0x0000eb27) cell_ai5_widget_pane_t3

0x3a43,	// (0x0000eb3f) cell_ai5_widget_pane_t4_ParamLimits

0x3a43,	// (0x0000eb3f) cell_ai5_widget_pane_t4

0x3a5d,	// (0x0000eb59) cell_ai5_widget_pane_t5_ParamLimits

0x3a5d,	// (0x0000eb59) cell_ai5_widget_pane_t5

0xeea0,	// (0x00019f9c) cell_ai5_widget_pane_t6_ParamLimits

0xeea0,	// (0x00019f9c) cell_ai5_widget_pane_t6

0xeeb2,	// (0x00019fae) cell_ai5_widget_pane_t7_ParamLimits

0xeeb2,	// (0x00019fae) cell_ai5_widget_pane_t7

0x3a7c,	// (0x0000eb78) cell_ai5_widget_pane_t8_ParamLimits

0x3a7c,	// (0x0000eb78) cell_ai5_widget_pane_t8

0x0009,

0xfe6d,	// (0x0001af69) cell_ai5_widget_pane_t_ParamLimits

0xfe6d,	// (0x0001af69) cell_ai5_widget_pane_t

0x3ac4,	// (0x0000ebc0) grid_ai5_widget_pane

0x6dc7,	// (0x00011ec3) highlight_cell_ai5_widget_pane_ParamLimits

0x6dc7,	// (0x00011ec3) highlight_cell_ai5_widget_pane

0x3adc,	// (0x0000ebd8) ai5_sk_left_pane

0x3ae6,	// (0x0000ebe2) ai5_sk_middle_pane

0x3af0,	// (0x0000ebec) ai5_sk_right_pane

0xeecb,	// (0x00019fc7) bg_ai5_widget_pane_g1_ParamLimits

0xeecb,	// (0x00019fc7) bg_ai5_widget_pane_g1

0xeed7,	// (0x00019fd3) bg_ai5_widget_pane_g2_ParamLimits

0xeed7,	// (0x00019fd3) bg_ai5_widget_pane_g2

0xeee3,	// (0x00019fdf) bg_ai5_widget_pane_g3_ParamLimits

0xeee3,	// (0x00019fdf) bg_ai5_widget_pane_g3

0xeeef,	// (0x00019feb) bg_ai5_widget_pane_g4_ParamLimits

0xeeef,	// (0x00019feb) bg_ai5_widget_pane_g4

0xeefb,	// (0x00019ff7) bg_ai5_widget_pane_g5_ParamLimits

0xeefb,	// (0x00019ff7) bg_ai5_widget_pane_g5

0xef07,	// (0x0001a003) bg_ai5_widget_pane_g6_ParamLimits

0xef07,	// (0x0001a003) bg_ai5_widget_pane_g6

0xef13,	// (0x0001a00f) bg_ai5_widget_pane_g7_ParamLimits

0xef13,	// (0x0001a00f) bg_ai5_widget_pane_g7

0xef1f,	// (0x0001a01b) bg_ai5_widget_pane_g8_ParamLimits

0xef1f,	// (0x0001a01b) bg_ai5_widget_pane_g8

0xef2b,	// (0x0001a027) bg_ai5_widget_pane_g9_ParamLimits

0xef2b,	// (0x0001a027) bg_ai5_widget_pane_g9

0x0008,

0xfe82,	// (0x0001af7e) bg_ai5_widget_pane_g_ParamLimits

0xfe82,	// (0x0001af7e) bg_ai5_widget_pane_g

0xef37,	// (0x0001a033) cell_shortcut_ai5_widget_pane_ParamLimits

0xef37,	// (0x0001a033) cell_shortcut_ai5_widget_pane

0x60c3,	// (0x000111bf) bg_cell_shortcut_ai5_widget_pane

0xef49,	// (0x0001a045) cell_grid_ai5_widget_pane_g1

0xef52,	// (0x0001a04e) highlight_cell_shortcut_ai5_widget_pane

0x8a7b,	// (0x00013b77) ai5_sk_left_pane_g1

0xef5a,	// (0x0001a056) ai5_sk_left_pane_g2

0xef62,	// (0x0001a05e) ai5_sk_left_pane_g3

0xef6a,	// (0x0001a066) ai5_sk_left_pane_g4

0x0003,

0xfe95,	// (0x0001af91) ai5_sk_left_pane_g

0xef72,	// (0x0001a06e) ai5_sk_left_pane_t1

0x8a83,	// (0x00013b7f) ai5_sk_right_pane_g1

0xef80,	// (0x0001a07c) ai5_sk_right_pane_g2

0xef88,	// (0x0001a084) ai5_sk_right_pane_g3

0xef90,	// (0x0001a08c) ai5_sk_right_pane_g4

0x0003,

0xfe9e,	// (0x0001af9a) ai5_sk_right_pane_g

0xef98,	// (0x0001a094) ai5_sk_right_pane_t1

0x8a83,	// (0x00013b7f) ai5_sk_middle_pane_g1

0x8a7b,	// (0x00013b77) ai5_sk_middle_pane_g2

0x8a9b,	// (0x00013b97) ai5_sk_middle_pane_g3

0xef88,	// (0x0001a084) ai5_sk_middle_pane_g4

0xef62,	// (0x0001a05e) ai5_sk_middle_pane_g5

0xefa6,	// (0x0001a0a2) ai5_sk_middle_pane_g6

0x3b17,	// (0x0000ec13) ai5_sk_middle_pane_g7

0x0006,

0xfea7,	// (0x0001afa3) ai5_sk_middle_pane_g

0x1555,	// (0x0000c651) aid_touch_area_size_lc0_ParamLimits

0x1555,	// (0x0000c651) aid_touch_area_size_lc0

0x5494,	// (0x00010590) cell_hwr_candidate_pane_t1_ParamLimits

0x859c,	// (0x00013698) aid_touch_navi_pane

0x17da,	// (0x0000c8d6) status_dt_navi_pane_ParamLimits

0x17da,	// (0x0000c8d6) status_dt_navi_pane

0x17f2,	// (0x0000c8ee) status_dt_sta_pane_ParamLimits

0x17f2,	// (0x0000c8ee) status_dt_sta_pane

0x3b1f,	// (0x0000ec1b) dt_sta_controll_pane

0x3b2c,	// (0x0000ec28) dt_sta_indi_pane

0x3b39,	// (0x0000ec35) dt_sta_title_pane

0x6283,	// (0x0001137f) bg_dt_sta_indi_pane_ParamLimits

0x6283,	// (0x0001137f) bg_dt_sta_indi_pane

0xefae,	// (0x0001a0aa) dt_sta_battery_pane

0x3b4b,	// (0x0000ec47) dt_sta_indi_pane_g1

0x3b54,	// (0x0000ec50) dt_sta_indi_pane_g2

0x3b5d,	// (0x0000ec59) dt_sta_indi_pane_g3

0x0002,

0xfeb6,	// (0x0001afb2) dt_sta_indi_pane_g

0x3b66,	// (0x0000ec62) dt_sta_signal_pane

0x6dc7,	// (0x00011ec3) bg_dt_sta_title_pane_ParamLimits

0x6dc7,	// (0x00011ec3) bg_dt_sta_title_pane

0x994b,	// (0x00014a47) dt_sta_title_pane_g1

0x3b6f,	// (0x0000ec6b) dt_sta_title_pane_t1_ParamLimits

0x3b6f,	// (0x0000ec6b) dt_sta_title_pane_t1

0x5eec,	// (0x00010fe8) bg_dt_sta_control_pane

0x3b84,	// (0x0000ec80) dt_sta_controll_pane_g1

0x3b8d,	// (0x0000ec89) bg_dt_sta_title_pane_g1

0x3b96,	// (0x0000ec92) bg_dt_sta_title_pane_g2

0x3b9f,	// (0x0000ec9b) bg_dt_sta_title_pane_g3

0x0002,

0xfebd,	// (0x0001afb9) bg_dt_sta_title_pane_g

0xb3ec,	// (0x000164e8) bg_dt_sta_indi_pane_g1

0xefb6,	// (0x0001a0b2) dt_sta_signal_pane_g1

0xefbe,	// (0x0001a0ba) dt_sta_signal_pane_g2

0x0001,

0xfec4,	// (0x0001afc0) dt_sta_signal_pane_g

0xefc6,	// (0x0001a0c2) dt_sta_battery_pane_g1

0xefcf,	// (0x0001a0cb) dt_sta_battery_pane_t1

0xb3ec,	// (0x000164e8) bg_dt_sta_control_pane_g1

0x768c,	// (0x00012788) fep_china_uni_eep_pane

0x7694,	// (0x00012790) fep_china_uni_entry_pane_ParamLimits

0x76a4,	// (0x000127a0) popup_fep_china_uni_window_g1_ParamLimits

0x76b4,	// (0x000127b0) popup_fep_china_uni_window_g2_ParamLimits

0x76b4,	// (0x000127b0) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0001a854) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0001a854) popup_fep_china_uni_window_g

0xefde,	// (0x0001a0da) fep_china_uni_eep_pane_g1

0xefe6,	// (0x0001a0e2) fep_china_uni_eep_pane_t1

0xee34,	// (0x00019f30) aid_touch_area_size_smil_player

0x86e8,	// (0x000137e4) lc0_clock_pane

0x88c8,	// (0x000139c4) status_pane_g5_ParamLimits

0x88c8,	// (0x000139c4) status_pane_g5

0x1033,	// (0x0000c12f) popup_keymap_window

0x8886,	// (0x00013982) status_icon_pane

0x3976,	// (0x0000ea72) cell_ai5_widget_pane_g3_ParamLimits

0x398a,	// (0x0000ea86) cell_ai5_widget_pane_g4_ParamLimits

0x3996,	// (0x0000ea92) cell_ai5_widget_pane_g5_ParamLimits

0x39ba,	// (0x0000eab6) cell_ai5_widget_pane_g8_ParamLimits

0x39ba,	// (0x0000eab6) cell_ai5_widget_pane_g8

0x39ce,	// (0x0000eaca) cell_ai5_widget_pane_g9_ParamLimits

0x39ce,	// (0x0000eaca) cell_ai5_widget_pane_g9

0x39e2,	// (0x0000eade) cell_ai5_widget_pane_g10_ParamLimits

0x39e2,	// (0x0000eade) cell_ai5_widget_pane_g10

0xeff5,	// (0x0001a0f1) status_icon_pane_g1

0x5eec,	// (0x00010fe8) bg_popup_sub_pane_cp13

0xeffd,	// (0x0001a0f9) popup_keymap_window_t1

0x0d5d,	// (0x0000be59) control_pane_g6_ParamLimits

0x0d5d,	// (0x0000be59) control_pane_g6

0x0d50,	// (0x0000be4c) control_pane_g7_ParamLimits

0x0d50,	// (0x0000be4c) control_pane_g7

0x0d43,	// (0x0000be3f) control_pane_g8_ParamLimits

0x0d43,	// (0x0000be3f) control_pane_g8

0x3b1f,	// (0x0000ec1b) dt_sta_controll_pane_ParamLimits

0x3b2c,	// (0x0000ec28) dt_sta_indi_pane_ParamLimits

0x3b39,	// (0x0000ec35) dt_sta_title_pane_ParamLimits

0x679e,	// (0x0001189a) aid_size_touch_scroll_bar_cale

0x452e,	// (0x0000f62a) popup_discreet_window_ParamLimits

0x452e,	// (0x0000f62a) popup_discreet_window

0xe5e8,	// (0x000196e4) popup_sk_window

0x9177,	// (0x00014273) bg_popup_sub_pane_cp28_ParamLimits

0x9177,	// (0x00014273) bg_popup_sub_pane_cp28

0xf00b,	// (0x0001a107) popup_discreet_window_g1_ParamLimits

0xf00b,	// (0x0001a107) popup_discreet_window_g1

0xf02b,	// (0x0001a127) popup_discreet_window_t1_ParamLimits

0xf02b,	// (0x0001a127) popup_discreet_window_t1

0xf049,	// (0x0001a145) popup_discreet_window_t2_ParamLimits

0xf049,	// (0x0001a145) popup_discreet_window_t2

0x0002,

0xfec9,	// (0x0001afc5) popup_discreet_window_t_ParamLimits

0xfec9,	// (0x0001afc5) popup_discreet_window_t

0x5e82,	// (0x00010f7e) popup_sk_window_g1

0x5e8c,	// (0x00010f88) popup_sk_window_g2

0x0001,

0xfed0,	// (0x0001afcc) popup_sk_window_g

0xf09b,	// (0x0001a197) popup_sk_window_t1

0xf0a9,	// (0x0001a1a5) popup_sk_window_t1_copy1

0x3966,	// (0x0000ea62) cell_ai5_widget_pane_g2_ParamLimits

0x3a8e,	// (0x0000eb8a) cell_ai5_widget_pane_t9_ParamLimits

0x3a8e,	// (0x0000eb8a) cell_ai5_widget_pane_t9

0x5eec,	// (0x00010fe8) main_fep_fshwr2_pane

0x3ba8,	// (0x0000eca4) aid_fshwr2_btn_pane

0x3bb0,	// (0x0000ecac) aid_fshwr2_syb_pane

0x3bb8,	// (0x0000ecb4) aid_fshwr2_txt_pane

0x3bc0,	// (0x0000ecbc) fshwr2_func_candi_pane

0x3bca,	// (0x0000ecc6) fshwr2_hwr_syb_pane

0x3bd8,	// (0x0000ecd4) fshwr2_icf_pane

0x5eec,	// (0x00010fe8) fshwr2_icf_bg_pane

0x3be2,	// (0x0000ecde) fshwr2_icf_pane_t1_ParamLimits

0x3be2,	// (0x0000ecde) fshwr2_icf_pane_t1

0xb3ec,	// (0x000164e8) fshwr2_func_candi_pane_g1

0xf0cb,	// (0x0001a1c7) fshwr2_func_candi_row_pane_ParamLimits

0xf0cb,	// (0x0001a1c7) fshwr2_func_candi_row_pane

0x3bfa,	// (0x0000ecf6) cell_fshwr2_syb_pane_ParamLimits

0x3bfa,	// (0x0000ecf6) cell_fshwr2_syb_pane

0xb68c,	// (0x00016788) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb68c,	// (0x00016788) fshwr2_hwr_syb_pane_g1

0x5eec,	// (0x00010fe8) bg_popup_call_pane_cp01

0xf0dc,	// (0x0001a1d8) fshwr2_func_candi_cell_pane_ParamLimits

0xf0dc,	// (0x0001a1d8) fshwr2_func_candi_cell_pane

0xf10d,	// (0x0001a209) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf10d,	// (0x0001a209) fshwr2_func_candi_cell_bg_pane

0xf127,	// (0x0001a223) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf127,	// (0x0001a223) fshwr2_func_candi_cell_pane_g1

0xf14f,	// (0x0001a24b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf14f,	// (0x0001a24b) fshwr2_func_candi_cell_pane_t1

0x5eec,	// (0x00010fe8) bg_button_pane_cp08

0x7c11,	// (0x00012d0d) cell_fshwr2_syb_bg_pane

0x3c14,	// (0x0000ed10) cell_fshwr2_syb_bg_pane_g1

0x3c1c,	// (0x0000ed18) cell_fshwr2_syb_bg_pane_t1

0x6dc7,	// (0x00011ec3) main_tmo_pane

0x1cc8,	// (0x0000cdc4) uni_indicator_pane_g1_ParamLimits

0x1cdd,	// (0x0000cdd9) uni_indicator_pane_g2_ParamLimits

0x1cf2,	// (0x0000cdee) uni_indicator_pane_g3_ParamLimits

0x9ccd,	// (0x00014dc9) uni_indicator_pane_g4_ParamLimits

0x9ccd,	// (0x00014dc9) uni_indicator_pane_g4

0x9ce1,	// (0x00014ddd) uni_indicator_pane_g5_ParamLimits

0x9ce1,	// (0x00014ddd) uni_indicator_pane_g5

0x9cf5,	// (0x00014df1) uni_indicator_pane_g6_ParamLimits

0x9cf5,	// (0x00014df1) uni_indicator_pane_g6

0xf950,	// (0x0001aa4c) uni_indicator_pane_g_ParamLimits

0x29e0,	// (0x0000dadc) popup_tmo_note_window_ParamLimits

0x29e0,	// (0x0000dadc) popup_tmo_note_window

0x5eec,	// (0x00010fe8) fshwr2_bg_pane

0xf140,	// (0x0001a23c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf140,	// (0x0001a23c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed5,	// (0x0001afd1) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed5,	// (0x0001afd1) fshwr2_func_candi_cell_pane_g

0xb3ec,	// (0x000164e8) bg_popup_window_pane_cp01

0xf162,	// (0x0001a25e) bg_popup_window_pane_g1_cp01

0xf16b,	// (0x0001a267) bg_popup_window_pane_cp22_ParamLimits

0xf16b,	// (0x0001a267) bg_popup_window_pane_cp22

0xf179,	// (0x0001a275) listscroll_tmo_link_pane_ParamLimits

0xf179,	// (0x0001a275) listscroll_tmo_link_pane

0xf1b9,	// (0x0001a2b5) popup_tmo_note_window_g1_ParamLimits

0xf1b9,	// (0x0001a2b5) popup_tmo_note_window_g1

0xf1c6,	// (0x0001a2c2) tmo_note_info_pane_ParamLimits

0xf1c6,	// (0x0001a2c2) tmo_note_info_pane

0x3c2b,	// (0x0000ed27) list_tmo_note_info_pane_g1_ParamLimits

0x3c2b,	// (0x0000ed27) list_tmo_note_info_pane_g1

0xf1e0,	// (0x0001a2dc) list_tmo_note_info_pane_g2_ParamLimits

0xf1e0,	// (0x0001a2dc) list_tmo_note_info_pane_g2

0x0001,

0xfeda,	// (0x0001afd6) list_tmo_note_info_pane_g_ParamLimits

0xfeda,	// (0x0001afd6) list_tmo_note_info_pane_g

0xf1fc,	// (0x0001a2f8) list_tmo_note_info_text_pane_ParamLimits

0xf1fc,	// (0x0001a2f8) list_tmo_note_info_text_pane

0xf23e,	// (0x0001a33a) list_tmo_link_pane

0xf24b,	// (0x0001a347) scroll_pane_cp20

0xf258,	// (0x0001a354) list_single_tmo_link_pane_ParamLimits

0xf258,	// (0x0001a354) list_single_tmo_link_pane

0xf268,	// (0x0001a364) list_single_tmo_link_pane_t1

0xf276,	// (0x0001a372) list_tmo_note_info_text_pane_t1_ParamLimits

0xf276,	// (0x0001a372) list_tmo_note_info_text_pane_t1

0x0972,	// (0x0000ba6e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x0972,	// (0x0000ba6e) aid_size_touch_scroll_bar_cp01

0x0891,	// (0x0000b98d) aid_size_touch_slider_marker

0xe5d8,	// (0x000196d4) popup_settings_window_ParamLimits

0xe5d8,	// (0x000196d4) popup_settings_window

0x7fc3,	// (0x000130bf) popup_candi_list_indi_window

0x859c,	// (0x00013698) aid_touch_navi_pane_ParamLimits

0x565a,	// (0x00010756) rs_clock_indi_pane

0x5663,	// (0x0001075f) sctrl_sk_bottom_pane_ParamLimits

0x5674,	// (0x00010770) sctrl_sk_top_pane_ParamLimits

0x577a,	// (0x00010876) popup_fep_tooltip_window

0xee82,	// (0x00019f7e) aid_size_cell_widget_grid_ParamLimits

0x395a,	// (0x0000ea56) cell_ai5_widget_pane_g1_ParamLimits

0x395a,	// (0x0000ea56) cell_ai5_widget_pane_g1

0x39a2,	// (0x0000ea9e) cell_ai5_widget_pane_g6_ParamLimits

0x39ae,	// (0x0000eaaa) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe58,	// (0x0001af54) cell_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x0001af54) cell_ai5_widget_pane_g

0x3ab2,	// (0x0000ebae) cell_ai5_widget_pane_t10_ParamLimits

0x3ab2,	// (0x0000ebae) cell_ai5_widget_pane_t10

0x3ac4,	// (0x0000ebc0) grid_ai5_widget_pane_ParamLimits

0x3afa,	// (0x0000ebf6) cell_contacts_ai5_widget_pane_ParamLimits

0x3afa,	// (0x0000ebf6) cell_contacts_ai5_widget_pane

0xf05e,	// (0x0001a15a) popup_discreet_window_t3_ParamLimits

0xf05e,	// (0x0001a15a) popup_discreet_window_t3

0xf0b7,	// (0x0001a1b3) popup_fshwr2_char_preview_window_ParamLimits

0xf0b7,	// (0x0001a1b3) popup_fshwr2_char_preview_window

0x3c42,	// (0x0000ed3e) tmo_note_info_pane_t1

0x3c57,	// (0x0000ed53) tmo_note_info_pane_t2

0x3c6e,	// (0x0000ed6a) tmo_note_info_pane_t3

0xf21a,	// (0x0001a316) tmo_note_info_pane_t4

0xf22c,	// (0x0001a328) tmo_note_info_pane_t5

0x0004,

0xfedf,	// (0x0001afdb) tmo_note_info_pane_t

0xf23e,	// (0x0001a33a) list_tmo_link_pane_ParamLimits

0xf24b,	// (0x0001a347) scroll_pane_cp20_ParamLimits

0x5eec,	// (0x00010fe8) bg_popup_fep_char_preview_window_cp01

0xf28f,	// (0x0001a38b) popup_fshwr2_char_preview_window_t1

0xf29d,	// (0x0001a399) popup_candi_list_indi_window_g1

0xf2a6,	// (0x0001a3a2) bg_cell_contacts_ai5_widget_pane

0x3c83,	// (0x0000ed7f) cell_contacts_ai5_widget_pane_g1

0x3c97,	// (0x0000ed93) cell_contacts_ai5_widget_pane_g2

0x3ca6,	// (0x0000eda2) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeea,	// (0x0001afe6) cell_contacts_ai5_widget_pane_g

0x3cb9,	// (0x0000edb5) cell_contacts_ai5_widget_pane_t1

0x6dc7,	// (0x00011ec3) highlight_cell_shortcut_ai5_widget_pane_cp01

0x3d33,	// (0x0000ee2f) settings_container_pane

0x7c11,	// (0x00012d0d) listscroll_set_pane_copy1

0xa8fd,	// (0x000159f9) scroll_pane_cp121_copy1

0xf2b2,	// (0x0001a3ae) set_content_pane_copy1

0x3d3f,	// (0x0000ee3b) aid_height_set_list_copy1_ParamLimits

0x3d3f,	// (0x0000ee3b) aid_height_set_list_copy1

0x9f15,	// (0x00015011) aid_size_parent_copy1_ParamLimits

0x9f15,	// (0x00015011) aid_size_parent_copy1

0x3d4b,	// (0x0000ee47) button_value_adjust_pane_cp6_copy1_ParamLimits

0x3d4b,	// (0x0000ee47) button_value_adjust_pane_cp6_copy1

0x7f9b,	// (0x00013097) list_highlight_pane_cp2_copy1_ParamLimits

0x7f9b,	// (0x00013097) list_highlight_pane_cp2_copy1

0x3d5f,	// (0x0000ee5b) list_set_pane_copy1_ParamLimits

0x3d5f,	// (0x0000ee5b) list_set_pane_copy1

0x3cce,	// (0x0000edca) main_pane_set_t1_copy1_ParamLimits

0x3cce,	// (0x0000edca) main_pane_set_t1_copy1

0x3d08,	// (0x0000ee04) main_pane_set_t2_copy1_ParamLimits

0x3d08,	// (0x0000ee04) main_pane_set_t2_copy1

0x3e0c,	// (0x0000ef08) main_pane_set_t3_copy1

0x3e1a,	// (0x0000ef16) main_pane_set_t4_copy1

0x3d27,	// (0x0000ee23) set_content_pane_g1_copy1_ParamLimits

0x3d27,	// (0x0000ee23) set_content_pane_g1_copy1

0x3e28,	// (0x0000ef24) setting_code_pane_copy1

0xf2ba,	// (0x0001a3b6) setting_slider_graphic_pane_copy1

0xf2ba,	// (0x0001a3b6) setting_slider_pane_copy1

0xf2c4,	// (0x0001a3c0) setting_text_pane_copy1

0xf2ce,	// (0x0001a3ca) setting_volume_pane_copy1

0x3e32,	// (0x0000ef2e) settings_code_pane_cp2_copy1

0x3e3a,	// (0x0000ef36) settings_code_pane_cp_copy1_ParamLimits

0x3e3a,	// (0x0000ef36) settings_code_pane_cp_copy1

0x3e4e,	// (0x0000ef4a) volume_set_pane_copy1

0x3e56,	// (0x0000ef52) volume_set_pane_g10_copy1

0x3e5e,	// (0x0000ef5a) volume_set_pane_g1_copy1

0x3e66,	// (0x0000ef62) volume_set_pane_g2_copy1

0x3e6e,	// (0x0000ef6a) volume_set_pane_g3_copy1

0x3e76,	// (0x0000ef72) volume_set_pane_g4_copy1

0x3e7e,	// (0x0000ef7a) volume_set_pane_g5_copy1

0x3e86,	// (0x0000ef82) volume_set_pane_g6_copy1

0x3e8e,	// (0x0000ef8a) volume_set_pane_g7_copy1

0x3e96,	// (0x0000ef92) volume_set_pane_g8_copy1

0x3e9e,	// (0x0000ef9a) volume_set_pane_g9_copy1

0x5fe0,	// (0x000110dc) bg_set_opt_pane_cp_copy1_ParamLimits

0x5fe0,	// (0x000110dc) bg_set_opt_pane_cp_copy1

0xf2d7,	// (0x0001a3d3) setting_slider_pane_t1_copy1_ParamLimits

0xf2d7,	// (0x0001a3d3) setting_slider_pane_t1_copy1

0x3ea6,	// (0x0000efa2) setting_slider_pane_t2_copy1_ParamLimits

0x3ea6,	// (0x0000efa2) setting_slider_pane_t2_copy1

0x3ec0,	// (0x0000efbc) setting_slider_pane_t3_copy1_ParamLimits

0x3ec0,	// (0x0000efbc) setting_slider_pane_t3_copy1

0x3ed8,	// (0x0000efd4) slider_set_pane_copy1_ParamLimits

0x3ed8,	// (0x0000efd4) slider_set_pane_copy1

0x6eff,	// (0x00011ffb) set_opt_bg_pane_g1_copy2

0x6f07,	// (0x00012003) set_opt_bg_pane_g2_copy2

0xf2f5,	// (0x0001a3f1) set_opt_bg_pane_g3_copy2

0x6f17,	// (0x00012013) set_opt_bg_pane_g4_copy2

0x6f1f,	// (0x0001201b) set_opt_bg_pane_g5_copy2

0x6f27,	// (0x00012023) set_opt_bg_pane_g6_copy2

0x3eee,	// (0x0000efea) set_opt_bg_pane_g7_copy2

0xf2ff,	// (0x0001a3fb) set_opt_bg_pane_g8_copy2

0xf309,	// (0x0001a405) set_opt_bg_pane_g9_copy2

0x5e96,	// (0x00010f92) aid_size_touch_slider_mark_copy1_ParamLimits

0x5e96,	// (0x00010f92) aid_size_touch_slider_mark_copy1

0xf313,	// (0x0001a40f) slider_set_pane_g1_copy1

0x5eaa,	// (0x00010fa6) slider_set_pane_g2_copy1

0x508e,	// (0x0001018a) slider_set_pane_g3_copy1_ParamLimits

0x508e,	// (0x0001018a) slider_set_pane_g3_copy1

0x50a2,	// (0x0001019e) slider_set_pane_g4_copy1_ParamLimits

0x50a2,	// (0x0001019e) slider_set_pane_g4_copy1

0x50ba,	// (0x000101b6) slider_set_pane_g5_copy1_ParamLimits

0x50ba,	// (0x000101b6) slider_set_pane_g5_copy1

0x508e,	// (0x0001018a) slider_set_pane_g6_copy1_ParamLimits

0x508e,	// (0x0001018a) slider_set_pane_g6_copy1

0xedcf,	// (0x00019ecb) slider_set_pane_g7_copy1_ParamLimits

0xedcf,	// (0x00019ecb) slider_set_pane_g7_copy1

0x5f00,	// (0x00010ffc) bg_set_opt_pane_cp2_copy1

0xf31c,	// (0x0001a418) setting_slider_graphic_pane_g1_copy1

0x3f0c,	// (0x0000f008) setting_slider_graphic_pane_t1_copy1

0x3f1c,	// (0x0000f018) setting_slider_graphic_pane_t2_copy1

0x3f2c,	// (0x0000f028) slider_set_pane_cp_copy1

0xf32d,	// (0x0001a429) input_focus_pane_cp1_copy1

0xf336,	// (0x0001a432) list_set_text_pane_copy1

0xf33e,	// (0x0001a43a) setting_text_pane_g1_copy1

0x6039,	// (0x00011135) set_text_pane_t1_copy1

0xf32d,	// (0x0001a429) input_focus_pane_cp2_copy1

0xf33e,	// (0x0001a43a) setting_code_pane_g1_copy1

0x3f34,	// (0x0000f030) setting_code_pane_t1_copy1

0x0c06,	// (0x0000bd02) list_set_graphic_pane_copy1

0x5f00,	// (0x00010ffc) bg_set_opt_pane_cp4_copy1

0x0c18,	// (0x0000bd14) list_set_graphic_pane_g1_copy1_ParamLimits

0x0c18,	// (0x0000bd14) list_set_graphic_pane_g1_copy1

0x3f42,	// (0x0000f03e) list_set_graphic_pane_g2_copy1

0x0c30,	// (0x0000bd2c) list_set_graphic_pane_t1_copy1_ParamLimits

0x0c30,	// (0x0000bd2c) list_set_graphic_pane_t1_copy1

0xb3ec,	// (0x000164e8) rs_clock_indi_pane_g1

0xf347,	// (0x0001a443) rs_clock_indi_pane_t1

0xefae,	// (0x0001a0aa) rs_indi_pane

0xf355,	// (0x0001a451) rs_indi_pane_g1

0xf35e,	// (0x0001a45a) rs_indi_pane_g2

0xf367,	// (0x0001a463) rs_indi_pane_g3

0x0002,

0xfef1,	// (0x0001afed) rs_indi_pane_g

0x7c11,	// (0x00012d0d) bg_popup_preview_window_pane_cp03

0xf370,	// (0x0001a46c) popup_fep_tooltip_window_t1

0xc271,	// (0x0001736d) popup_note2_window_g2_ParamLimits

0xc271,	// (0x0001736d) popup_note2_window_g2

0x0001,

0xfc8f,	// (0x0001ad8b) popup_note2_window_g_ParamLimits

0xfc8f,	// (0x0001ad8b) popup_note2_window_g

0xc85b,	// (0x00017957) bg_popup_sub_pane_cp11_ParamLimits

0xc868,	// (0x00017964) cell_ai3_links_pane_g1_ParamLimits

0xc87f,	// (0x0001797b) cell_ai3_links_pane_t1

0x6039,	// (0x00011135) set_text_pane_t1_copy1_ParamLimits

0x7b22,	// (0x00012c1e) cell_graphic_popup_pane_cp2_ParamLimits

0x7b22,	// (0x00012c1e) cell_graphic_popup_pane_cp2

0xf37e,	// (0x0001a47a) cell_graphic_popup_pane_g1_cp2

0x65b1,	// (0x000116ad) cell_graphic_popup_pane_g2_cp2

0xf386,	// (0x0001a482) cell_graphic_popup_pane_g3_cp2

0xf38e,	// (0x0001a48a) cell_graphic_popup_pane_t2_cp2

0x65c2,	// (0x000116be) grid_highlight_pane_cp3_cp2

0x72ee,	// (0x000123ea) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x6dc7,	// (0x00011ec3) main_tmo_pane_ParamLimits

0x29d4,	// (0x0000dad0) popup_tmo_big_image_note_window

0x394a,	// (0x0000ea46) cell_ai5_widget_list_pane

0x3952,	// (0x0000ea4e) cell_ai5_widget_lrg_icon_pane

0x3c42,	// (0x0000ed3e) tmo_note_info_pane_t1_ParamLimits

0x3c57,	// (0x0000ed53) tmo_note_info_pane_t2_ParamLimits

0x3c6e,	// (0x0000ed6a) tmo_note_info_pane_t3_ParamLimits

0xf21a,	// (0x0001a316) tmo_note_info_pane_t4_ParamLimits

0xf22c,	// (0x0001a328) tmo_note_info_pane_t5_ParamLimits

0xfedf,	// (0x0001afdb) tmo_note_info_pane_t_ParamLimits

0x3d33,	// (0x0000ee2f) settings_container_pane_ParamLimits

0xf325,	// (0x0001a421) indicator_popup_pane_cp5

0xf325,	// (0x0001a421) indicator_popup_pane_cp6

0x0c06,	// (0x0000bd02) list_set_graphic_pane_copy1_ParamLimits

0x5eec,	// (0x00010fe8) bg_popup_window_pane_cp23

0xf39c,	// (0x0001a498) popup_tmo_big_image_note_window_g1

0xf3a6,	// (0x0001a4a2) popup_tmo_big_image_note_window_t1

0xf3b6,	// (0x0001a4b2) popup_tmo_big_image_note_window_t2

0xf3c6,	// (0x0001a4c2) popup_tmo_big_image_note_window_t3

0x0002,

0xfef8,	// (0x0001aff4) popup_tmo_big_image_note_window_t

0x3f4a,	// (0x0000f046) cell_ai5_widget_lrg_icon_pane_g1

0x3f52,	// (0x0000f04e) cell_ai5_widget_lrg_icon_pane_t1

0x3f60,	// (0x0000f05c) cell_ai5_widget_list_row_pane_ParamLimits

0x3f60,	// (0x0000f05c) cell_ai5_widget_list_row_pane

0x3f79,	// (0x0000f075) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3f79,	// (0x0000f075) cell_ai5_widget_list_row_pane_g1

0x3f86,	// (0x0000f082) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3f86,	// (0x0000f082) cell_ai5_widget_list_row_pane_t1

0x3f9e,	// (0x0000f09a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3f9e,	// (0x0000f09a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeff,	// (0x0001affb) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeff,	// (0x0001affb) cell_ai5_widget_list_row_pane_t

0x4455,	// (0x0000f551) main_fep_vtchi_ss_pane

0xf3d6,	// (0x0001a4d2) popup_fep_char_pre_window

0xf3de,	// (0x0001a4da) popup_fep_ituss_window

0xf3e9,	// (0x0001a4e5) popup_fep_vkbss_window

0xf3f2,	// (0x0001a4ee) grid_vkbss_keypad_pane_ParamLimits

0xf3f2,	// (0x0001a4ee) grid_vkbss_keypad_pane

0xf402,	// (0x0001a4fe) ituss_keypad_pane

0xf40a,	// (0x0001a506) aid_vkbss_key_offset_ParamLimits

0xf40a,	// (0x0001a506) aid_vkbss_key_offset

0xf419,	// (0x0001a515) cell_vkbss_key_pane_ParamLimits

0xf419,	// (0x0001a515) cell_vkbss_key_pane

0xf42f,	// (0x0001a52b) bg_cell_vkbss_key_g1_ParamLimits

0xf42f,	// (0x0001a52b) bg_cell_vkbss_key_g1

0xf43b,	// (0x0001a537) cell_vkbss_key_3p_pane_ParamLimits

0xf43b,	// (0x0001a537) cell_vkbss_key_3p_pane

0xf455,	// (0x0001a551) cell_vkbss_key_g1_ParamLimits

0xf455,	// (0x0001a551) cell_vkbss_key_g1

0xf46f,	// (0x0001a56b) cell_vkbss_key_t1_ParamLimits

0xf46f,	// (0x0001a56b) cell_vkbss_key_t1

0xf49a,	// (0x0001a596) cell_ituss_key_pane_ParamLimits

0xf49a,	// (0x0001a596) cell_ituss_key_pane

0xf4a9,	// (0x0001a5a5) bg_cell_ituss_key_g1_ParamLimits

0xf4a9,	// (0x0001a5a5) bg_cell_ituss_key_g1

0xf4b5,	// (0x0001a5b1) cell_ituss_key_pane_g1_ParamLimits

0xf4b5,	// (0x0001a5b1) cell_ituss_key_pane_g1

0xf4c1,	// (0x0001a5bd) cell_ituss_key_pane_g2_ParamLimits

0xf4c1,	// (0x0001a5bd) cell_ituss_key_pane_g2

0x0001,

0xff04,	// (0x0001b000) cell_ituss_key_pane_g_ParamLimits

0xff04,	// (0x0001b000) cell_ituss_key_pane_g

0xf4d4,	// (0x0001a5d0) cell_ituss_key_t1_ParamLimits

0xf4d4,	// (0x0001a5d0) cell_ituss_key_t1

0xf4f2,	// (0x0001a5ee) cell_ituss_key_t2_ParamLimits

0xf4f2,	// (0x0001a5ee) cell_ituss_key_t2

0xf511,	// (0x0001a60d) cell_ituss_key_t3_ParamLimits

0xf511,	// (0x0001a60d) cell_ituss_key_t3

0xf530,	// (0x0001a62c) cell_ituss_key_t4_ParamLimits

0xf530,	// (0x0001a62c) cell_ituss_key_t4

0x0003,

0xff09,	// (0x0001b005) cell_ituss_key_t_ParamLimits

0xff09,	// (0x0001b005) cell_ituss_key_t

0xf54f,	// (0x0001a64b) cell_vkbss_key_3p_pane_g1

0xf557,	// (0x0001a653) cell_vkbss_key_3p_pane_g2

0xf55f,	// (0x0001a65b) cell_vkbss_key_3p_pane_g3

0x0002,

0xff12,	// (0x0001b00e) cell_vkbss_key_3p_pane_g

0x5eec,	// (0x00010fe8) bg_popup_fep_char_preview_window_cp02

0xf567,	// (0x0001a663) popup_fep_char_pre_window_t1

0x3940,	// (0x0000ea3c) main_ai5_sk_pane

0xf2a6,	// (0x0001a3a2) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x3c83,	// (0x0000ed7f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x3c97,	// (0x0000ed93) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x3ca6,	// (0x0000eda2) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeea,	// (0x0001afe6) cell_contacts_ai5_widget_pane_g_ParamLimits

0x3cb9,	// (0x0000edb5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x6dc7,	// (0x00011ec3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x3fb0,	// (0x0000f0ac) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
