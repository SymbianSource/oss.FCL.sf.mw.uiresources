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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000f4c7 };

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
0xc891,	// (0x0001bd58) Screen

0xc89d,	// (0x0001bd64) application_window_ParamLimits

0xc89d,	// (0x0001bd64) application_window

0x262f,	// (0x00011af6) screen_g1

0xb817,	// (0x0001acde) area_bottom_pane_ParamLimits

0xb817,	// (0x0001acde) area_bottom_pane

0x020b,	// (0x0000f6d2) area_top_pane_ParamLimits

0x020b,	// (0x0000f6d2) area_top_pane

0x02a9,	// (0x0000f770) main_pane_ParamLimits

0x02a9,	// (0x0000f770) main_pane

0x2639,	// (0x00011b00) misc_graphics

0xd5d1,	// (0x0001ca98) battery_pane_ParamLimits

0xd5d1,	// (0x0001ca98) battery_pane

0x55af,	// (0x00014a76) bg_status_flat_pane_g8

0x55b7,	// (0x00014a7e) bg_status_flat_pane_g9

0x4884,	// (0x00013d4b) context_pane_ParamLimits

0x4884,	// (0x00013d4b) context_pane

0xd73c,	// (0x0001cc03) navi_pane_ParamLimits

0xd73c,	// (0x0001cc03) navi_pane

0xd7ba,	// (0x0001cc81) signal_pane_ParamLimits

0xd7ba,	// (0x0001cc81) signal_pane

0x0008,

0xf86f,	// (0x0001ed36) bg_status_flat_pane_g

0xd84a,	// (0x0001cd11) status_pane_g1_ParamLimits

0xd84a,	// (0x0001cd11) status_pane_g1

0xd860,	// (0x0001cd27) status_pane_g2_ParamLimits

0xd860,	// (0x0001cd27) status_pane_g2

0x4aab,	// (0x00013f72) status_pane_g3_ParamLimits

0x4aab,	// (0x00013f72) status_pane_g3

0x0004,

0xf79b,	// (0x0001ec62) status_pane_g_ParamLimits

0xf79b,	// (0x0001ec62) status_pane_g

0xd86c,	// (0x0001cd33) title_pane_ParamLimits

0xd86c,	// (0x0001cd33) title_pane

0xd8cf,	// (0x0001cd96) uni_indicator_pane_ParamLimits

0xd8cf,	// (0x0001cd96) uni_indicator_pane

0x46e2,	// (0x00013ba9) bg_list_pane_ParamLimits

0x46e2,	// (0x00013ba9) bg_list_pane

0xd51c,	// (0x0001c9e3) find_pane

0x4d86,	// (0x0001424d) listscroll_app_pane_ParamLimits

0x4d86,	// (0x0001424d) listscroll_app_pane

0x4716,	// (0x00013bdd) listscroll_form_pane

0xbb79,	// (0x0001b040) listscroll_gen_pane_ParamLimits

0xbb79,	// (0x0001b040) listscroll_gen_pane

0x0b9a,	// (0x00010061) listscroll_set_pane

0x6159,	// (0x00015620) main_idle_act_pane

0x43de,	// (0x000138a5) main_idle_trad_pane

0x43de,	// (0x000138a5) main_list_empty_pane

0x470a,	// (0x00013bd1) main_midp_pane

0x4730,	// (0x00013bf7) main_pane_g1_ParamLimits

0x4730,	// (0x00013bf7) main_pane_g1

0xbb8d,	// (0x0001b054) popup_ai_message_window_ParamLimits

0xbb8d,	// (0x0001b054) popup_ai_message_window

0xbc1e,	// (0x0001b0e5) popup_fep_china_uni_window_ParamLimits

0xbc1e,	// (0x0001b0e5) popup_fep_china_uni_window

0x0cb2,	// (0x00010179) popup_fep_japan_candidate_window_ParamLimits

0x0cb2,	// (0x00010179) popup_fep_japan_candidate_window

0x0cd2,	// (0x00010199) popup_fep_japan_predictive_window_ParamLimits

0x0cd2,	// (0x00010199) popup_fep_japan_predictive_window

0xbc7a,	// (0x0001b141) popup_find_window

0xbc97,	// (0x0001b15e) popup_grid_graphic_window_ParamLimits

0xbc97,	// (0x0001b15e) popup_grid_graphic_window

0x0d39,	// (0x00010200) popup_large_graphic_colour_window

0xbd35,	// (0x0001b1fc) popup_menu_window_ParamLimits

0xbd35,	// (0x0001b1fc) popup_menu_window

0xbf07,	// (0x0001b3ce) popup_note_image_window

0xbecd,	// (0x0001b394) popup_note_wait_window_ParamLimits

0xbecd,	// (0x0001b394) popup_note_wait_window

0xbf1f,	// (0x0001b3e6) popup_note_window_ParamLimits

0xbf1f,	// (0x0001b3e6) popup_note_window

0xbfc5,	// (0x0001b48c) popup_query_code_window_ParamLimits

0xbfc5,	// (0x0001b48c) popup_query_code_window

0x0f81,	// (0x00010448) popup_query_data_code_window_ParamLimits

0x0f81,	// (0x00010448) popup_query_data_code_window

0xbfff,	// (0x0001b4c6) popup_query_data_window_ParamLimits

0xbfff,	// (0x0001b4c6) popup_query_data_window

0xc081,	// (0x0001b548) popup_query_sat_info_window_ParamLimits

0xc081,	// (0x0001b548) popup_query_sat_info_window

0xc118,	// (0x0001b5df) popup_snote_single_graphic_window_ParamLimits

0xc118,	// (0x0001b5df) popup_snote_single_graphic_window

0xc118,	// (0x0001b5df) popup_snote_single_text_window_ParamLimits

0xc118,	// (0x0001b5df) popup_snote_single_text_window

0x1008,	// (0x000104cf) popup_sub_window_general

0x1138,	// (0x000105ff) popup_window_general_ParamLimits

0x1138,	// (0x000105ff) popup_window_general

0x4746,	// (0x00013c0d) power_save_pane

0xb9fe,	// (0x0001aec5) control_pane_g1_ParamLimits

0xb9fe,	// (0x0001aec5) control_pane_g1

0xba27,	// (0x0001aeee) control_pane_g2_ParamLimits

0xba27,	// (0x0001aeee) control_pane_g2

0x46a5,	// (0x00013b6c) control_pane_g3_ParamLimits

0x46a5,	// (0x00013b6c) control_pane_g3

0x0007,

0xf783,	// (0x0001ec4a) control_pane_g_ParamLimits

0xf783,	// (0x0001ec4a) control_pane_g

0xba68,	// (0x0001af2f) control_pane_t1_ParamLimits

0xba68,	// (0x0001af2f) control_pane_t1

0xbace,	// (0x0001af95) control_pane_t2_ParamLimits

0xbace,	// (0x0001af95) control_pane_t2

0x0002,

0xf794,	// (0x0001ec5b) control_pane_t_ParamLimits

0xf794,	// (0x0001ec5b) control_pane_t

0xd44e,	// (0x0001c915) navi_navi_volume_pane_cp1

0xd456,	// (0x0001c91d) status_small_icon_pane

0x45da,	// (0x00013aa1) status_small_pane_g1_ParamLimits

0x45da,	// (0x00013aa1) status_small_pane_g1

0xd45e,	// (0x0001c925) status_small_pane_g2_ParamLimits

0xd45e,	// (0x0001c925) status_small_pane_g2

0xd46a,	// (0x0001c931) status_small_pane_g3_ParamLimits

0xd46a,	// (0x0001c931) status_small_pane_g3

0xd476,	// (0x0001c93d) status_small_pane_g4_ParamLimits

0xd476,	// (0x0001c93d) status_small_pane_g4

0xd482,	// (0x0001c949) status_small_pane_g5_ParamLimits

0xd482,	// (0x0001c949) status_small_pane_g5

0xd490,	// (0x0001c957) status_small_pane_g6_ParamLimits

0xd490,	// (0x0001c957) status_small_pane_g6

0x0007,

0xf772,	// (0x0001ec39) status_small_pane_g_ParamLimits

0xf772,	// (0x0001ec39) status_small_pane_g

0xd4bf,	// (0x0001c986) status_small_pane_t1

0xd4e1,	// (0x0001c9a8) status_small_wait_pane_ParamLimits

0xd4e1,	// (0x0001c9a8) status_small_wait_pane

0xd288,	// (0x0001c74f) aid_levels_signal_ParamLimits

0xd288,	// (0x0001c74f) aid_levels_signal

0xd2a0,	// (0x0001c767) signal_pane_g1_ParamLimits

0xd2a0,	// (0x0001c767) signal_pane_g1

0xd2bb,	// (0x0001c782) signal_pane_g2_ParamLimits

0xd2bb,	// (0x0001c782) signal_pane_g2

0x0003,

0xf703,	// (0x0001ebca) signal_pane_g_ParamLimits

0xf703,	// (0x0001ebca) signal_pane_g

0x3e23,	// (0x000132ea) context_pane_g1

0xc8ad,	// (0x0001bd74) title_pane_g1

0xc8e4,	// (0x0001bdab) title_pane_t1

0x26e1,	// (0x00011ba8) title_pane_t2

0x2707,	// (0x00011bce) title_pane_t3

0x0002,

0xf557,	// (0x0001ea1e) title_pane_t

0xd8f7,	// (0x0001cdbe) aid_levels_battery_ParamLimits

0xd8f7,	// (0x0001cdbe) aid_levels_battery

0xd913,	// (0x0001cdda) battery_pane_g1_ParamLimits

0xd913,	// (0x0001cdda) battery_pane_g1

0xd930,	// (0x0001cdf7) battery_pane_g2_ParamLimits

0xd930,	// (0x0001cdf7) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001ec6d) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001ec6d) battery_pane_g

0xdb07,	// (0x0001cfce) uni_indicator_pane_g1

0xdb1c,	// (0x0001cfe3) uni_indicator_pane_g2

0xdb32,	// (0x0001cff9) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x0001edde) uni_indicator_pane_g

0x4250,	// (0x00013717) navi_icon_pane_ParamLimits

0x4250,	// (0x00013717) navi_icon_pane

0x418e,	// (0x00013655) navi_midp_pane

0x426c,	// (0x00013733) navi_navi_pane

0x4276,	// (0x0001373d) navi_text_pane_ParamLimits

0x4276,	// (0x0001373d) navi_text_pane

0x262f,	// (0x00011af6) status_small_wait_pane_g1

0x2b76,	// (0x0001203d) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0001edd9) status_small_wait_pane_g

0x5c16,	// (0x000150dd) navi_navi_icon_text_pane

0x5c1e,	// (0x000150e5) navi_navi_pane_g1_ParamLimits

0x5c1e,	// (0x000150e5) navi_navi_pane_g1

0x5c30,	// (0x000150f7) navi_navi_pane_g2_ParamLimits

0x5c30,	// (0x000150f7) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0001eda7) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0001eda7) navi_navi_pane_g

0x5c42,	// (0x00015109) navi_navi_tabs_pane

0x5c4b,	// (0x00015112) navi_navi_text_pane

0x5c16,	// (0x000150dd) navi_navi_volume_pane

0x5bf2,	// (0x000150b9) navi_text_pane_t1

0x5be6,	// (0x000150ad) navi_icon_pane_g1

0x5b39,	// (0x00015000) navi_navi_text_pane_t1

0x1450,	// (0x00010917) navi_navi_volume_pane_g1

0x1458,	// (0x0001091f) volume_small_pane

0x5a9f,	// (0x00014f66) navi_navi_icon_text_pane_g1

0x5aa7,	// (0x00014f6e) navi_navi_icon_text_pane_t1

0x426c,	// (0x00013733) navi_tabs_2_long_pane

0x426c,	// (0x00013733) navi_tabs_2_pane

0x426c,	// (0x00013733) navi_tabs_3_long_pane

0x426c,	// (0x00013733) navi_tabs_3_pane

0x426c,	// (0x00013733) navi_tabs_4_pane

0x1430,	// (0x000108f7) tabs_2_active_pane_ParamLimits

0x1430,	// (0x000108f7) tabs_2_active_pane

0x1440,	// (0x00010907) tabs_2_passive_pane_ParamLimits

0x1440,	// (0x00010907) tabs_2_passive_pane

0x13fe,	// (0x000108c5) tabs_3_active_pane_ParamLimits

0x13fe,	// (0x000108c5) tabs_3_active_pane

0x140e,	// (0x000108d5) tabs_3_passive_pane_ParamLimits

0x140e,	// (0x000108d5) tabs_3_passive_pane

0x141f,	// (0x000108e6) tabs_3_passive_pane_cp_ParamLimits

0x141f,	// (0x000108e6) tabs_3_passive_pane_cp

0x13ba,	// (0x00010881) tabs_4_active_pane_ParamLimits

0x13ba,	// (0x00010881) tabs_4_active_pane

0x13cb,	// (0x00010892) tabs_4_passive_pane_ParamLimits

0x13cb,	// (0x00010892) tabs_4_passive_pane

0x13dc,	// (0x000108a3) tabs_4_passive_pane_cp_ParamLimits

0x13dc,	// (0x000108a3) tabs_4_passive_pane_cp

0x13ed,	// (0x000108b4) tabs_4_passive_pane_cp2_ParamLimits

0x13ed,	// (0x000108b4) tabs_4_passive_pane_cp2

0x1396,	// (0x0001085d) tabs_2_long_active_pane_ParamLimits

0x1396,	// (0x0001085d) tabs_2_long_active_pane

0x13a8,	// (0x0001086f) tabs_2_long_passive_pane_ParamLimits

0x13a8,	// (0x0001086f) tabs_2_long_passive_pane

0x1357,	// (0x0001081e) tabs_3_long_active_pane_ParamLimits

0x1357,	// (0x0001081e) tabs_3_long_active_pane

0x136a,	// (0x00010831) tabs_3_long_passive_pane_ParamLimits

0x136a,	// (0x00010831) tabs_3_long_passive_pane

0x1383,	// (0x0001084a) tabs_3_long_passive_pane_cp_ParamLimits

0x1383,	// (0x0001084a) tabs_3_long_passive_pane_cp

0x12fd,	// (0x000107c4) volume_small_pane_g1

0x1306,	// (0x000107cd) volume_small_pane_g2

0x130f,	// (0x000107d6) volume_small_pane_g3

0x1318,	// (0x000107df) volume_small_pane_g4

0x1321,	// (0x000107e8) volume_small_pane_g5

0x132a,	// (0x000107f1) volume_small_pane_g6

0x1333,	// (0x000107fa) volume_small_pane_g7

0x133c,	// (0x00010803) volume_small_pane_g8

0x1345,	// (0x0001080c) volume_small_pane_g9

0x134e,	// (0x00010815) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x0001ed73) volume_small_pane_g

0x29ae,	// (0x00011e75) bg_active_tab_pane_cp2_ParamLimits

0x29ae,	// (0x00011e75) bg_active_tab_pane_cp2

0x2727,	// (0x00011bee) tabs_3_active_pane_g1

0xc970,	// (0x0001be37) tabs_3_active_pane_t1

0x29ae,	// (0x00011e75) bg_passive_tab_pane_cp2_ParamLimits

0x29ae,	// (0x00011e75) bg_passive_tab_pane_cp2

0x2727,	// (0x00011bee) tabs_3_passive_pane_g1

0xc970,	// (0x0001be37) tabs_3_passive_pane_t1

0x29ae,	// (0x00011e75) bg_active_tab_pane_cp3_ParamLimits

0x29ae,	// (0x00011e75) bg_active_tab_pane_cp3

0x2741,	// (0x00011c08) tabs_4_active_pane_g1

0xc982,	// (0x0001be49) tabs_4_active_pane_t1

0x29ae,	// (0x00011e75) bg_passive_tab_pane_cp3_ParamLimits

0x29ae,	// (0x00011e75) bg_passive_tab_pane_cp3

0x2741,	// (0x00011c08) tabs_4_1_passive_pane_g1

0xc982,	// (0x0001be49) tabs_4_1_passive_pane_t1

0x470a,	// (0x00013bd1) list_highlight_pane_cp2

0xdbca,	// (0x0001d091) list_set_pane_ParamLimits

0xdbca,	// (0x0001d091) list_set_pane

0xdc64,	// (0x0001d12b) main_pane_set_t1_ParamLimits

0xdc64,	// (0x0001d12b) main_pane_set_t1

0xdc84,	// (0x0001d14b) main_pane_set_t2_ParamLimits

0xdc84,	// (0x0001d14b) main_pane_set_t2

0xdc98,	// (0x0001d15f) main_pane_set_t3_ParamLimits

0xdc98,	// (0x0001d15f) main_pane_set_t3

0xdcaa,	// (0x0001d171) main_pane_set_t4_ParamLimits

0xdcaa,	// (0x0001d171) main_pane_set_t4

0x0003,

0xf97c,	// (0x0001ee43) main_pane_set_t_ParamLimits

0xf97c,	// (0x0001ee43) main_pane_set_t

0xdcbc,	// (0x0001d183) setting_code_pane

0xdcc6,	// (0x0001d18d) setting_slider_graphic_pane

0xdcc6,	// (0x0001d18d) setting_slider_pane

0xdcc6,	// (0x0001d18d) setting_text_pane

0xdcc6,	// (0x0001d18d) setting_volume_pane

0x04f8,	// (0x0000f9bf) volume_set_pane

0x2719,	// (0x00011be0) bg_set_opt_pane_cp

0x0500,	// (0x0000f9c7) setting_slider_pane_t1

0x0519,	// (0x0000f9e0) setting_slider_pane_t2

0x0533,	// (0x0000f9fa) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001ea25) setting_slider_pane_t

0x054b,	// (0x0000fa12) slider_set_pane

0x2639,	// (0x00011b00) bg_set_opt_pane_cp2

0x275b,	// (0x00011c22) setting_slider_graphic_pane_g1

0x0561,	// (0x0000fa28) setting_slider_graphic_pane_t1

0x0571,	// (0x0000fa38) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001ea2c) setting_slider_graphic_pane_t

0x0581,	// (0x0000fa48) slider_set_pane_cp

0x2639,	// (0x00011b00) input_focus_pane_cp1

0x6140,	// (0x00015607) list_set_text_pane

0x262f,	// (0x00011af6) setting_text_pane_g1

0x2639,	// (0x00011b00) input_focus_pane_cp2

0x262f,	// (0x00011af6) setting_code_pane_g1

0x2764,	// (0x00011c2b) setting_code_pane_t1

0x2772,	// (0x00011c39) set_text_pane_t1_ParamLimits

0x2772,	// (0x00011c39) set_text_pane_t1

0x3666,	// (0x00012b2d) set_opt_bg_pane_g1

0x366e,	// (0x00012b35) set_opt_bg_pane_g2

0x611a,	// (0x000155e1) set_opt_bg_pane_g3

0x367e,	// (0x00012b45) set_opt_bg_pane_g4

0x3686,	// (0x00012b4d) set_opt_bg_pane_g5

0x368e,	// (0x00012b55) set_opt_bg_pane_g6

0x6124,	// (0x000155eb) set_opt_bg_pane_g7

0x612c,	// (0x000155f3) set_opt_bg_pane_g8

0x6136,	// (0x000155fd) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x0001ee30) set_opt_bg_pane_g

0x610d,	// (0x000155d4) slider_set_pane_g1

0x14c5,	// (0x0001098c) slider_set_pane_g2

0x0006,

0xf95a,	// (0x0001ee21) slider_set_pane_g

0x1461,	// (0x00010928) volume_set_pane_g1

0x1469,	// (0x00010930) volume_set_pane_g2

0x1471,	// (0x00010938) volume_set_pane_g3

0x1479,	// (0x00010940) volume_set_pane_g4

0x1481,	// (0x00010948) volume_set_pane_g5

0x1489,	// (0x00010950) volume_set_pane_g6

0x1491,	// (0x00010958) volume_set_pane_g7

0x1499,	// (0x00010960) volume_set_pane_g8

0x14a1,	// (0x00010968) volume_set_pane_g9

0x14a9,	// (0x00010970) volume_set_pane_g10

0x0009,

0xf932,	// (0x0001edf9) volume_set_pane_g

0xc994,	// (0x0001be5b) indicator_pane_ParamLimits

0xc994,	// (0x0001be5b) indicator_pane

0xc9bc,	// (0x0001be83) main_idle_pane_g2_ParamLimits

0xc9bc,	// (0x0001be83) main_idle_pane_g2

0xc9f4,	// (0x0001bebb) main_pane_idle_g1_ParamLimits

0xc9f4,	// (0x0001bebb) main_pane_idle_g1

0x27cd,	// (0x00011c94) popup_clock_digital_analogue_window_ParamLimits

0x27cd,	// (0x00011c94) popup_clock_digital_analogue_window

0xca1b,	// (0x0001bee2) soft_indicator_pane_ParamLimits

0xca1b,	// (0x0001bee2) soft_indicator_pane

0xca35,	// (0x0001befc) wallpaper_pane_ParamLimits

0xca35,	// (0x0001befc) wallpaper_pane

0x262f,	// (0x00011af6) wallpaper_pane_g1

0xca47,	// (0x0001bf0e) indicator_pane_g1_ParamLimits

0xca47,	// (0x0001bf0e) indicator_pane_g1

0x660d,	// (0x00015ad4) navi_navi_icon_text_pane_srt_g1

0x281f,	// (0x00011ce6) soft_indicator_pane_t1

0x2839,	// (0x00011d00) aid_ps_area_pane

0xca5d,	// (0x0001bf24) aid_ps_clock_pane

0x2858,	// (0x00011d1f) aid_ps_indicator_pane

0x2864,	// (0x00011d2b) indicator_ps_pane_ParamLimits

0x2864,	// (0x00011d2b) indicator_ps_pane

0x2873,	// (0x00011d3a) power_save_pane_g1_ParamLimits

0x2873,	// (0x00011d3a) power_save_pane_g1

0x287f,	// (0x00011d46) power_save_pane_g2_ParamLimits

0x287f,	// (0x00011d46) power_save_pane_g2

0x00ff,	// (0x0000f5c6) aid_navinavi_width_pane

0x2839,	// (0x00011d00) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001ea31) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001ea31) power_save_pane_g

0x288d,	// (0x00011d54) power_save_pane_t1_ParamLimits

0x288d,	// (0x00011d54) power_save_pane_t1

0xca5d,	// (0x0001bf24) aid_ps_clock_pane_ParamLimits

0x2858,	// (0x00011d1f) aid_ps_indicator_pane_ParamLimits

0x289f,	// (0x00011d66) power_save_pane_t4_ParamLimits

0x289f,	// (0x00011d66) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001ea36) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001ea36) power_save_pane_t

0x28c9,	// (0x00011d90) power_save_t3_ParamLimits

0x28c9,	// (0x00011d90) power_save_t3

0x28b4,	// (0x00011d7b) power_save_t2_ParamLimits

0x28b4,	// (0x00011d7b) power_save_t2

0x28de,	// (0x00011da5) indicator_ps_pane_g1

0xca6b,	// (0x0001bf32) ai_gene_pane_ParamLimits

0xca6b,	// (0x0001bf32) ai_gene_pane

0xca82,	// (0x0001bf49) ai_links_pane_ParamLimits

0xca82,	// (0x0001bf49) ai_links_pane

0xca9a,	// (0x0001bf61) indicator_pane_cp1_ParamLimits

0xca9a,	// (0x0001bf61) indicator_pane_cp1

0xcaa9,	// (0x0001bf70) main_pane_idle_g1_cp_ParamLimits

0xcaa9,	// (0x0001bf70) main_pane_idle_g1_cp

0x2917,	// (0x00011dde) popup_ai_links_title_window

0xcac1,	// (0x0001bf88) soft_indicator_pane_cp1_ParamLimits

0xcac1,	// (0x0001bf88) soft_indicator_pane_cp1

0x5edf,	// (0x000153a6) ai_links_pane_g1

0x5ee8,	// (0x000153af) grid_ai_links_pane

0xdafe,	// (0x0001cfc5) ai_gene_pane_1

0x5ecd,	// (0x00015394) ai_gene_pane_2

0x5ed6,	// (0x0001539d) list_highlight_pane_cp4

0xdada,	// (0x0001cfa1) cell_ai_link_pane_ParamLimits

0xdada,	// (0x0001cfa1) cell_ai_link_pane

0x5e9e,	// (0x00015365) cell_ai_link_pane_g1

0x2b76,	// (0x0001203d) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x0001edd4) cell_ai_link_pane_g

0x2639,	// (0x00011b00) grid_highlight_cp2

0x2639,	// (0x00011b00) bg_popup_sub_pane_cp1

0x293a,	// (0x00011e01) popup_ai_links_title_window_t1

0x5dec,	// (0x000152b3) ai_gene_pane_1_g1_ParamLimits

0x5dec,	// (0x000152b3) ai_gene_pane_1_g1

0x5df8,	// (0x000152bf) ai_gene_pane_1_g2_ParamLimits

0x5df8,	// (0x000152bf) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0001edca) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0001edca) ai_gene_pane_1_g

0x5e05,	// (0x000152cc) ai_gene_pane_1_t1_ParamLimits

0x5e05,	// (0x000152cc) ai_gene_pane_1_t1

0x5e39,	// (0x00015300) grid_ai_soft_ind_pane

0x5dd7,	// (0x0001529e) ai_gene_pane_2_t1_ParamLimits

0x5dd7,	// (0x0001529e) ai_gene_pane_2_t1

0xcad5,	// (0x0001bf9c) main_pane_empty_t1_ParamLimits

0xcad5,	// (0x0001bf9c) main_pane_empty_t1

0xcaed,	// (0x0001bfb4) main_pane_empty_t2_ParamLimits

0xcaed,	// (0x0001bfb4) main_pane_empty_t2

0xcb02,	// (0x0001bfc9) main_pane_empty_t3_ParamLimits

0xcb02,	// (0x0001bfc9) main_pane_empty_t3

0xcb14,	// (0x0001bfdb) main_pane_empty_t4_ParamLimits

0xcb14,	// (0x0001bfdb) main_pane_empty_t4

0xcb26,	// (0x0001bfed) main_pane_empty_t5_ParamLimits

0xcb26,	// (0x0001bfed) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001ea3b) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001ea3b) main_pane_empty_t

0x3763,	// (0x00012c2a) bg_popup_window_pane_ParamLimits

0x3763,	// (0x00012c2a) bg_popup_window_pane

0x5b47,	// (0x0001500e) find_popup_pane_cp2_ParamLimits

0x5b47,	// (0x0001500e) find_popup_pane_cp2

0x5b53,	// (0x0001501a) heading_pane_ParamLimits

0x5b53,	// (0x0001501a) heading_pane

0x2639,	// (0x00011b00) bg_popup_sub_pane

0xda5b,	// (0x0001cf22) bg_popup_window_pane_g1_ParamLimits

0xda5b,	// (0x0001cf22) bg_popup_window_pane_g1

0xda6a,	// (0x0001cf31) bg_popup_window_pane_g2_ParamLimits

0xda6a,	// (0x0001cf31) bg_popup_window_pane_g2

0xda76,	// (0x0001cf3d) bg_popup_window_pane_g3_ParamLimits

0xda76,	// (0x0001cf3d) bg_popup_window_pane_g3

0xda82,	// (0x0001cf49) bg_popup_window_pane_g4_ParamLimits

0xda82,	// (0x0001cf49) bg_popup_window_pane_g4

0xda91,	// (0x0001cf58) bg_popup_window_pane_g5_ParamLimits

0xda91,	// (0x0001cf58) bg_popup_window_pane_g5

0xdaa1,	// (0x0001cf68) bg_popup_window_pane_g6_ParamLimits

0xdaa1,	// (0x0001cf68) bg_popup_window_pane_g6

0xdaad,	// (0x0001cf74) bg_popup_window_pane_g7_ParamLimits

0xdaad,	// (0x0001cf74) bg_popup_window_pane_g7

0xdabc,	// (0x0001cf83) bg_popup_window_pane_g8_ParamLimits

0xdabc,	// (0x0001cf83) bg_popup_window_pane_g8

0xdacb,	// (0x0001cf92) bg_popup_window_pane_g9_ParamLimits

0xdacb,	// (0x0001cf92) bg_popup_window_pane_g9

0x5b2d,	// (0x00014ff4) bg_popup_window_pane_g10_ParamLimits

0x5b2d,	// (0x00014ff4) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x0001ed92) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x0001ed92) bg_popup_window_pane_g

0x5a56,	// (0x00014f1d) bg_popup_heading_pane_ParamLimits

0x5a56,	// (0x00014f1d) bg_popup_heading_pane

0x154d,	// (0x00010a14) tabs_4_passive_pane_cp_srt_ParamLimits

0x154d,	// (0x00010a14) tabs_4_passive_pane_cp_srt

0x155f,	// (0x00010a26) tabs_4_passive_pane_srt_ParamLimits

0x5a6a,	// (0x00014f31) heading_pane_g2

0x155f,	// (0x00010a26) tabs_4_passive_pane_srt

0x4d86,	// (0x0001424d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4d86,	// (0x0001424d) bg_passive_tab_pane_cp3_srt

0x5a72,	// (0x00014f39) heading_pane_t1_ParamLimits

0x5a72,	// (0x00014f39) heading_pane_t1

0x5a89,	// (0x00014f50) heading_pane_t2_ParamLimits

0x5a89,	// (0x00014f50) heading_pane_t2

0x0001,

0xf8c6,	// (0x0001ed8d) heading_pane_t_ParamLimits

0xf8c6,	// (0x0001ed8d) heading_pane_t

0x5577,	// (0x00014a3e) bg_popup_heading_pane_g1

0x5626,	// (0x00014aed) bg_popup_heading_pane_g2

0x5630,	// (0x00014af7) bg_popup_heading_pane_g3

0x563a,	// (0x00014b01) bg_popup_heading_pane_g4

0x5644,	// (0x00014b0b) bg_popup_heading_pane_g5

0x564e,	// (0x00014b15) bg_popup_heading_pane_g6

0x5656,	// (0x00014b1d) bg_popup_heading_pane_g7

0x565e,	// (0x00014b25) bg_popup_heading_pane_g8

0x5668,	// (0x00014b2f) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0001ed49) bg_popup_heading_pane_g

0x4c64,	// (0x0001412b) bg_popup_sub_pane_g1

0x4c74,	// (0x0001413b) bg_popup_sub_pane_g2

0x4c6c,	// (0x00014133) bg_popup_sub_pane_g3

0x4c84,	// (0x0001414b) bg_popup_sub_pane_g4

0x4c7c,	// (0x00014143) bg_popup_sub_pane_g5

0x4c8c,	// (0x00014153) bg_popup_sub_pane_g6

0x4c94,	// (0x0001415b) bg_popup_sub_pane_g7

0x4ca4,	// (0x0001416b) bg_popup_sub_pane_g8

0x4c9c,	// (0x00014163) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x0001ed23) bg_popup_sub_pane_g

0x29ae,	// (0x00011e75) bg_popup_window_pane_cp5_ParamLimits

0x29ae,	// (0x00011e75) bg_popup_window_pane_cp5

0x29ca,	// (0x00011e91) popup_note_window_g1_ParamLimits

0x29ca,	// (0x00011e91) popup_note_window_g1

0x29d6,	// (0x00011e9d) popup_note_window_t1_ParamLimits

0x29d6,	// (0x00011e9d) popup_note_window_t1

0x29ec,	// (0x00011eb3) popup_note_window_t2_ParamLimits

0x29ec,	// (0x00011eb3) popup_note_window_t2

0x2a02,	// (0x00011ec9) popup_note_window_t3_ParamLimits

0x2a02,	// (0x00011ec9) popup_note_window_t3

0x2a18,	// (0x00011edf) popup_note_window_t4_ParamLimits

0x2a18,	// (0x00011edf) popup_note_window_t4

0x2a40,	// (0x00011f07) popup_note_window_t5_ParamLimits

0x2a40,	// (0x00011f07) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001ea46) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001ea46) popup_note_window_t

0x2a8a,	// (0x00011f51) bg_popup_window_pane_cp6_ParamLimits

0x2a8a,	// (0x00011f51) bg_popup_window_pane_cp6

0x54f3,	// (0x000149ba) popup_note_image_window_g1_ParamLimits

0x54f3,	// (0x000149ba) popup_note_image_window_g1

0x54ff,	// (0x000149c6) popup_note_image_window_g2_ParamLimits

0x54ff,	// (0x000149c6) popup_note_image_window_g2

0x0001,

0xf850,	// (0x0001ed17) popup_note_image_window_g_ParamLimits

0xf850,	// (0x0001ed17) popup_note_image_window_g

0x5518,	// (0x000149df) popup_note_image_window_t1_ParamLimits

0x5518,	// (0x000149df) popup_note_image_window_t1

0x5531,	// (0x000149f8) popup_note_image_window_t2_ParamLimits

0x5531,	// (0x000149f8) popup_note_image_window_t2

0x554a,	// (0x00014a11) popup_note_image_window_t3_ParamLimits

0x554a,	// (0x00014a11) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0001ed1c) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0001ed1c) popup_note_image_window_t

0x53b4,	// (0x0001487b) bg_popup_window_pane_cp7_ParamLimits

0x53b4,	// (0x0001487b) bg_popup_window_pane_cp7

0x53e4,	// (0x000148ab) popup_note_wait_window_g1_ParamLimits

0x53e4,	// (0x000148ab) popup_note_wait_window_g1

0x53f0,	// (0x000148b7) popup_note_wait_window_g2_ParamLimits

0x53f0,	// (0x000148b7) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x0001ed05) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x0001ed05) popup_note_wait_window_g

0x5408,	// (0x000148cf) popup_note_wait_window_t1_ParamLimits

0x5408,	// (0x000148cf) popup_note_wait_window_t1

0x542f,	// (0x000148f6) popup_note_wait_window_t2_ParamLimits

0x542f,	// (0x000148f6) popup_note_wait_window_t2

0x544c,	// (0x00014913) popup_note_wait_window_t3_ParamLimits

0x544c,	// (0x00014913) popup_note_wait_window_t3

0x545f,	// (0x00014926) popup_note_wait_window_t4_ParamLimits

0x545f,	// (0x00014926) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0001ed0c) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0001ed0c) popup_note_wait_window_t

0x5484,	// (0x0001494b) wait_bar_pane_ParamLimits

0x5484,	// (0x0001494b) wait_bar_pane

0x2639,	// (0x00011b00) wait_anim_pane

0x2639,	// (0x00011b00) wait_border_pane

0x262f,	// (0x00011af6) wait_anim_pane_g1

0x262f,	// (0x00011af6) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001ebc5) wait_anim_pane_g

0x5358,	// (0x0001481f) wait_border_pane_g1

0x5363,	// (0x0001482a) wait_border_pane_g2

0x536c,	// (0x00014833) wait_border_pane_g3

0x0002,

0xf837,	// (0x0001ecfe) wait_border_pane_g

0x51c3,	// (0x0001468a) bg_popup_window_pane_cp16_ParamLimits

0x51c3,	// (0x0001468a) bg_popup_window_pane_cp16

0x52c3,	// (0x0001478a) indicator_popup_pane_cp4_ParamLimits

0x52c3,	// (0x0001478a) indicator_popup_pane_cp4

0x52d7,	// (0x0001479e) popup_query_data_window_t1_ParamLimits

0x52d7,	// (0x0001479e) popup_query_data_window_t1

0x52e9,	// (0x000147b0) popup_query_data_window_t2_ParamLimits

0x52e9,	// (0x000147b0) popup_query_data_window_t2

0x5302,	// (0x000147c9) popup_query_data_window_t3_ParamLimits

0x5302,	// (0x000147c9) popup_query_data_window_t3

0x0002,

0xf830,	// (0x0001ecf7) popup_query_data_window_t_ParamLimits

0xf830,	// (0x0001ecf7) popup_query_data_window_t

0x531c,	// (0x000147e3) query_popup_data_pane_ParamLimits

0x531c,	// (0x000147e3) query_popup_data_pane

0x5330,	// (0x000147f7) query_popup_data_pane_cp1_ParamLimits

0x5330,	// (0x000147f7) query_popup_data_pane_cp1

0x51c3,	// (0x0001468a) bg_popup_window_pane_cp10_ParamLimits

0x51c3,	// (0x0001468a) bg_popup_window_pane_cp10

0x51f5,	// (0x000146bc) indicator_popup_pane_ParamLimits

0x51f5,	// (0x000146bc) indicator_popup_pane

0x5217,	// (0x000146de) popup_query_code_window_t1_ParamLimits

0x5217,	// (0x000146de) popup_query_code_window_t1

0x5231,	// (0x000146f8) popup_query_code_window_t2_ParamLimits

0x5231,	// (0x000146f8) popup_query_code_window_t2

0x527a,	// (0x00014741) popup_query_code_window_t3_ParamLimits

0x527a,	// (0x00014741) popup_query_code_window_t3

0x0002,

0xf829,	// (0x0001ecf0) popup_query_code_window_t_ParamLimits

0xf829,	// (0x0001ecf0) popup_query_code_window_t

0x52a9,	// (0x00014770) query_popup_pane_ParamLimits

0x52a9,	// (0x00014770) query_popup_pane

0x2a8a,	// (0x00011f51) bg_popup_window_pane_cp15_ParamLimits

0x2a8a,	// (0x00011f51) bg_popup_window_pane_cp15

0x2aa8,	// (0x00011f6f) indicator_popup_pane_cp1_ParamLimits

0x2aa8,	// (0x00011f6f) indicator_popup_pane_cp1

0x2abb,	// (0x00011f82) indicator_popup_pane_cp2_ParamLimits

0x2abb,	// (0x00011f82) indicator_popup_pane_cp2

0x2ace,	// (0x00011f95) popup_query_data_code_window_g1_ParamLimits

0x2ace,	// (0x00011f95) popup_query_data_code_window_g1

0x2ae1,	// (0x00011fa8) popup_query_data_code_window_t1_ParamLimits

0x2ae1,	// (0x00011fa8) popup_query_data_code_window_t1

0x2af3,	// (0x00011fba) popup_query_data_code_window_t2_ParamLimits

0x2af3,	// (0x00011fba) popup_query_data_code_window_t2

0x2b05,	// (0x00011fcc) popup_query_data_code_window_t3_ParamLimits

0x2b05,	// (0x00011fcc) popup_query_data_code_window_t3

0x2b1b,	// (0x00011fe2) popup_query_data_code_window_t4_ParamLimits

0x2b1b,	// (0x00011fe2) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001ea51) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001ea51) popup_query_data_code_window_t

0x120e,	// (0x000106d5) list_single_midp_graphic_pane_g3

0x2b33,	// (0x00011ffa) query_popup_data_pane_cp2_ParamLimits

0x2b46,	// (0x0001200d) query_popup_pane_cp2_ParamLimits

0x2b46,	// (0x0001200d) query_popup_pane_cp2

0x2639,	// (0x00011b00) bg_popup_window_pane_cp11

0x51af,	// (0x00014676) heading_pane_cp5

0x2c31,	// (0x000120f8) listscroll_popup_info_pane

0x2639,	// (0x00011b00) input_focus_pane_cp3

0x2b59,	// (0x00012020) query_popup_pane_t1

0x2b67,	// (0x0001202e) list_popup_info_pane_ParamLimits

0x2b67,	// (0x0001202e) list_popup_info_pane

0x2b76,	// (0x0001203d) listscroll_popup_info_pane_g1

0x2b7e,	// (0x00012045) scroll_pane_cp7

0x2b88,	// (0x0001204f) popup_info_list_pane_t1_ParamLimits

0x2b88,	// (0x0001204f) popup_info_list_pane_t1

0x2ba2,	// (0x00012069) popup_info_list_pane_t2_ParamLimits

0x2ba2,	// (0x00012069) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001ea5a) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001ea5a) popup_info_list_pane_t

0x2639,	// (0x00011b00) bg_popup_window_pane_cp12

0x6627,	// (0x00015aee) find_popup_pane

0x2719,	// (0x00011be0) bg_popup_window_pane_cp3

0x2bbc,	// (0x00012083) heading_pane_cp3

0x2bc8,	// (0x0001208f) listscroll_popup_graphic_pane

0x2639,	// (0x00011b00) bg_popup_window_pane_cp4

0xcb88,	// (0x0001c04f) heading_pane_cp4

0x2c31,	// (0x000120f8) listscroll_popup_colour_pane

0x2c39,	// (0x00012100) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2c39,	// (0x00012100) cell_large_graphic_colour_none_popup_pane

0xcb90,	// (0x0001c057) grid_large_graphic_colour_popup_pane_ParamLimits

0xcb90,	// (0x0001c057) grid_large_graphic_colour_popup_pane

0x2c79,	// (0x00012140) listscroll_popup_colour_pane_g1_ParamLimits

0x2c79,	// (0x00012140) listscroll_popup_colour_pane_g1

0x2c90,	// (0x00012157) listscroll_popup_colour_pane_g2_ParamLimits

0x2c90,	// (0x00012157) listscroll_popup_colour_pane_g2

0x2ca7,	// (0x0001216e) listscroll_popup_colour_pane_g3_ParamLimits

0x2ca7,	// (0x0001216e) listscroll_popup_colour_pane_g3

0xcbb4,	// (0x0001c07b) listscroll_popup_colour_pane_g4_ParamLimits

0xcbb4,	// (0x0001c07b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001ea5f) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001ea5f) listscroll_popup_colour_pane_g

0x2ccb,	// (0x00012192) scroll_pane_cp6_ParamLimits

0x2ccb,	// (0x00012192) scroll_pane_cp6

0xcbc4,	// (0x0001c08b) cell_large_graphic_colour_popup_pane_ParamLimits

0xcbc4,	// (0x0001c08b) cell_large_graphic_colour_popup_pane

0x2cfc,	// (0x000121c3) cell_large_graphic_colour_none_popup_pane_t1

0x2639,	// (0x00011b00) grid_highlight_pane_cp5

0x2d0b,	// (0x000121d2) cell_large_graphic_colour_popup_pane_g1

0x2d13,	// (0x000121da) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001ea68) cell_large_graphic_colour_popup_pane_g

0x2d1b,	// (0x000121e2) cell_large_graphic_colour_popup_pane_g2_copy1

0x2d24,	// (0x000121eb) grid_highlight_pane_cp4

0x2d2c,	// (0x000121f3) bg_popup_window_pane_cp8_ParamLimits

0x2d2c,	// (0x000121f3) bg_popup_window_pane_cp8

0x2d47,	// (0x0001220e) popup_snote_single_text_window_g1_ParamLimits

0x2d47,	// (0x0001220e) popup_snote_single_text_window_g1

0x2d59,	// (0x00012220) popup_snote_single_text_window_t1_ParamLimits

0x2d59,	// (0x00012220) popup_snote_single_text_window_t1

0x2d6c,	// (0x00012233) popup_snote_single_text_window_t2_ParamLimits

0x2d6c,	// (0x00012233) popup_snote_single_text_window_t2

0x2d7f,	// (0x00012246) popup_snote_single_text_window_t3_ParamLimits

0x2d7f,	// (0x00012246) popup_snote_single_text_window_t3

0x2db8,	// (0x0001227f) popup_snote_single_text_window_t4_ParamLimits

0x2db8,	// (0x0001227f) popup_snote_single_text_window_t4

0x2dec,	// (0x000122b3) popup_snote_single_text_window_t5_ParamLimits

0x2dec,	// (0x000122b3) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001ea6d) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001ea6d) popup_snote_single_text_window_t

0x2e1b,	// (0x000122e2) bg_popup_window_pane_cp9_ParamLimits

0x2e1b,	// (0x000122e2) bg_popup_window_pane_cp9

0x2d47,	// (0x0001220e) popup_snote_single_graphic_window_g1_ParamLimits

0x2d47,	// (0x0001220e) popup_snote_single_graphic_window_g1

0x2e29,	// (0x000122f0) popup_snote_single_graphic_window_g2_ParamLimits

0x2e29,	// (0x000122f0) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001ea78) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001ea78) popup_snote_single_graphic_window_g

0x2e35,	// (0x000122fc) popup_snote_single_graphic_window_t1_ParamLimits

0x2e35,	// (0x000122fc) popup_snote_single_graphic_window_t1

0x2e48,	// (0x0001230f) popup_snote_single_graphic_window_t2_ParamLimits

0x2e48,	// (0x0001230f) popup_snote_single_graphic_window_t2

0x2e5b,	// (0x00012322) popup_snote_single_graphic_window_t3_ParamLimits

0x2e5b,	// (0x00012322) popup_snote_single_graphic_window_t3

0x2e94,	// (0x0001235b) popup_snote_single_graphic_window_t4_ParamLimits

0x2e94,	// (0x0001235b) popup_snote_single_graphic_window_t4

0x2ec8,	// (0x0001238f) popup_snote_single_graphic_window_t5_ParamLimits

0x2ec8,	// (0x0001238f) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001ea7d) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001ea7d) popup_snote_single_graphic_window_t

0x6569,	// (0x00015a30) grid_graphic_popup_pane_ParamLimits

0x6569,	// (0x00015a30) grid_graphic_popup_pane

0x6593,	// (0x00015a5a) listscroll_popup_graphic_pane_g1_ParamLimits

0x6593,	// (0x00015a5a) listscroll_popup_graphic_pane_g1

0xde13,	// (0x0001d2da) listscroll_popup_graphic_pane_g2_ParamLimits

0xde13,	// (0x0001d2da) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0001ee6d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0001ee6d) listscroll_popup_graphic_pane_g

0x65bb,	// (0x00015a82) scroll_pane_cp5

0xddb8,	// (0x0001d27f) cell_graphic_popup_pane_ParamLimits

0xddb8,	// (0x0001d27f) cell_graphic_popup_pane

0x64e9,	// (0x000159b0) cell_graphic_popup_pane_g1

0x64f1,	// (0x000159b8) cell_graphic_popup_pane_g2

0x2d1b,	// (0x000121e2) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0001ee66) cell_graphic_popup_pane_g

0x64fa,	// (0x000159c1) cell_graphic_popup_pane_t2

0x2d24,	// (0x000121eb) grid_highlight_pane_cp3

0x2f09,	// (0x000123d0) list_gen_pane_ParamLimits

0x2f09,	// (0x000123d0) list_gen_pane

0x2f3b,	// (0x00012402) scroll_pane

0xdd6f,	// (0x0001d236) bg_list_pane_g1_ParamLimits

0xdd6f,	// (0x0001d236) bg_list_pane_g1

0x645e,	// (0x00015925) bg_list_pane_g2_ParamLimits

0x645e,	// (0x00015925) bg_list_pane_g2

0x6473,	// (0x0001593a) bg_list_pane_g3_ParamLimits

0x6473,	// (0x0001593a) bg_list_pane_g3

0x6487,	// (0x0001594e) bg_list_pane_g4_ParamLimits

0x6487,	// (0x0001594e) bg_list_pane_g4

0xdd8c,	// (0x0001d253) bg_list_pane_g5_ParamLimits

0xdd8c,	// (0x0001d253) bg_list_pane_g5

0x0004,

0xf994,	// (0x0001ee5b) bg_list_pane_g_ParamLimits

0xf994,	// (0x0001ee5b) bg_list_pane_g

0xdd15,	// (0x0001d1dc) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd15,	// (0x0001d1dc) list_double2_graphic_large_graphic_pane

0xdd15,	// (0x0001d1dc) list_double2_graphic_pane_ParamLimits

0xdd15,	// (0x0001d1dc) list_double2_graphic_pane

0xdd15,	// (0x0001d1dc) list_double2_large_graphic_pane_ParamLimits

0xdd15,	// (0x0001d1dc) list_double2_large_graphic_pane

0xdd15,	// (0x0001d1dc) list_double2_pane_ParamLimits

0xdd15,	// (0x0001d1dc) list_double2_pane

0xdd15,	// (0x0001d1dc) list_double_graphic_heading_pane_ParamLimits

0xdd15,	// (0x0001d1dc) list_double_graphic_heading_pane

0xdd15,	// (0x0001d1dc) list_double_graphic_pane_ParamLimits

0xdd15,	// (0x0001d1dc) list_double_graphic_pane

0xdd15,	// (0x0001d1dc) list_double_heading_pane_ParamLimits

0xdd15,	// (0x0001d1dc) list_double_heading_pane

0xdd15,	// (0x0001d1dc) list_double_large_graphic_pane_ParamLimits

0xdd15,	// (0x0001d1dc) list_double_large_graphic_pane

0xdd15,	// (0x0001d1dc) list_double_number_pane_ParamLimits

0xdd15,	// (0x0001d1dc) list_double_number_pane

0xdd15,	// (0x0001d1dc) list_double_pane_ParamLimits

0xdd15,	// (0x0001d1dc) list_double_pane

0xdd15,	// (0x0001d1dc) list_double_time_pane_ParamLimits

0xdd15,	// (0x0001d1dc) list_double_time_pane

0xdd15,	// (0x0001d1dc) list_setting_number_pane_ParamLimits

0xdd15,	// (0x0001d1dc) list_setting_number_pane

0xdd15,	// (0x0001d1dc) list_setting_pane_ParamLimits

0xdd15,	// (0x0001d1dc) list_setting_pane

0xdd27,	// (0x0001d1ee) list_single_2graphic_pane_ParamLimits

0xdd27,	// (0x0001d1ee) list_single_2graphic_pane

0xdd27,	// (0x0001d1ee) list_single_graphic_heading_pane_ParamLimits

0xdd27,	// (0x0001d1ee) list_single_graphic_heading_pane

0xdd27,	// (0x0001d1ee) list_single_graphic_pane_ParamLimits

0xdd27,	// (0x0001d1ee) list_single_graphic_pane

0xdd27,	// (0x0001d1ee) list_single_heading_pane_ParamLimits

0xdd27,	// (0x0001d1ee) list_single_heading_pane

0xdd27,	// (0x0001d1ee) list_single_large_graphic_pane_ParamLimits

0xdd27,	// (0x0001d1ee) list_single_large_graphic_pane

0xdd27,	// (0x0001d1ee) list_single_number_heading_pane_ParamLimits

0xdd27,	// (0x0001d1ee) list_single_number_heading_pane

0xdd27,	// (0x0001d1ee) list_single_number_pane_ParamLimits

0xdd27,	// (0x0001d1ee) list_single_number_pane

0xdd27,	// (0x0001d1ee) list_single_pane_ParamLimits

0xdd27,	// (0x0001d1ee) list_single_pane

0x2639,	// (0x00011b00) list_highlight_pane_cp1

0x4317,	// (0x000137de) list_single_pane_g1_ParamLimits

0x4317,	// (0x000137de) list_single_pane_g1

0x4be6,	// (0x000140ad) list_single_pane_g2_ParamLimits

0x4be6,	// (0x000140ad) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001ea8f) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001ea8f) list_single_pane_g

0x6c44,	// (0x0001610b) list_single_pane_t1_ParamLimits

0x6c44,	// (0x0001610b) list_single_pane_t1

0x4317,	// (0x000137de) list_single_number_pane_g1_ParamLimits

0x4317,	// (0x000137de) list_single_number_pane_g1

0x4be6,	// (0x000140ad) list_single_number_pane_g2_ParamLimits

0x4be6,	// (0x000140ad) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001ea8f) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001ea8f) list_single_number_pane_g

0x4bf2,	// (0x000140b9) list_single_number_pane_t1_ParamLimits

0x4bf2,	// (0x000140b9) list_single_number_pane_t1

0xdb66,	// (0x0001d02d) list_single_number_pane_t2_ParamLimits

0xdb66,	// (0x0001d02d) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0001ee1c) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0001ee1c) list_single_number_pane_t

0xcbed,	// (0x0001c0b4) list_single_graphic_pane_g1_ParamLimits

0xcbed,	// (0x0001c0b4) list_single_graphic_pane_g1

0x4317,	// (0x000137de) list_single_graphic_pane_g2_ParamLimits

0x4317,	// (0x000137de) list_single_graphic_pane_g2

0x4be6,	// (0x000140ad) list_single_graphic_pane_g3_ParamLimits

0x4be6,	// (0x000140ad) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001ea88) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001ea88) list_single_graphic_pane_g

0xcbf9,	// (0x0001c0c0) list_single_graphic_pane_t1_ParamLimits

0xcbf9,	// (0x0001c0c0) list_single_graphic_pane_t1

0x4317,	// (0x000137de) list_single_heading_pane_g1_ParamLimits

0x4317,	// (0x000137de) list_single_heading_pane_g1

0x4be6,	// (0x000140ad) list_single_heading_pane_g2_ParamLimits

0x4be6,	// (0x000140ad) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001ea8f) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001ea8f) list_single_heading_pane_g

0xcc0f,	// (0x0001c0d6) list_single_heading_pane_t1_ParamLimits

0xcc0f,	// (0x0001c0d6) list_single_heading_pane_t1

0xcc25,	// (0x0001c0ec) list_single_heading_pane_t2_ParamLimits

0xcc25,	// (0x0001c0ec) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001ea94) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001ea94) list_single_heading_pane_t

0x4317,	// (0x000137de) list_single_number_heading_pane_g1_ParamLimits

0x4317,	// (0x000137de) list_single_number_heading_pane_g1

0x4be6,	// (0x000140ad) list_single_number_heading_pane_g2_ParamLimits

0x4be6,	// (0x000140ad) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001ea8f) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001ea8f) list_single_number_heading_pane_g

0xcc0f,	// (0x0001c0d6) list_single_number_heading_pane_t1_ParamLimits

0xcc0f,	// (0x0001c0d6) list_single_number_heading_pane_t1

0x6bf8,	// (0x000160bf) list_single_number_heading_pane_t2_ParamLimits

0x6bf8,	// (0x000160bf) list_single_number_heading_pane_t2

0x6c0a,	// (0x000160d1) list_single_number_heading_pane_t3_ParamLimits

0x6c0a,	// (0x000160d1) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001ea99) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001ea99) list_single_number_heading_pane_t

0x4bda,	// (0x000140a1) list_single_graphic_heading_pane_g1_ParamLimits

0x4bda,	// (0x000140a1) list_single_graphic_heading_pane_g1

0xcc37,	// (0x0001c0fe) list_single_graphic_heading_pane_g4_ParamLimits

0xcc37,	// (0x0001c0fe) list_single_graphic_heading_pane_g4

0x4be6,	// (0x000140ad) list_single_graphic_heading_pane_g5_ParamLimits

0x4be6,	// (0x000140ad) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001eaa0) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001eaa0) list_single_graphic_heading_pane_g

0xcc0f,	// (0x0001c0d6) list_single_graphic_heading_pane_t1_ParamLimits

0xcc0f,	// (0x0001c0d6) list_single_graphic_heading_pane_t1

0xcc48,	// (0x0001c10f) list_single_graphic_heading_pane_t2_ParamLimits

0xcc48,	// (0x0001c10f) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001eaa7) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001eaa7) list_single_graphic_heading_pane_t

0x6c5a,	// (0x00016121) list_single_large_graphic_pane_g1_ParamLimits

0x6c5a,	// (0x00016121) list_single_large_graphic_pane_g1

0x4317,	// (0x000137de) list_single_large_graphic_pane_g2_ParamLimits

0x4317,	// (0x000137de) list_single_large_graphic_pane_g2

0x4be6,	// (0x000140ad) list_single_large_graphic_pane_g3_ParamLimits

0x4be6,	// (0x000140ad) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001eaac) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001eaac) list_single_large_graphic_pane_g

0x5363,	// (0x0001482a) wait_border_pane_g2_copy1

0xcc5a,	// (0x0001c121) list_single_large_graphic_pane_g4_cp2

0x6c66,	// (0x0001612d) list_single_large_graphic_pane_t1_ParamLimits

0x6c66,	// (0x0001612d) list_single_large_graphic_pane_t1

0x56ec,	// (0x00014bb3) list_double_pane_g1_ParamLimits

0x56ec,	// (0x00014bb3) list_double_pane_g1

0xcc62,	// (0x0001c129) list_double_pane_g2_ParamLimits

0xcc62,	// (0x0001c129) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001eab3) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001eab3) list_double_pane_g

0x8518,	// (0x000179df) list_double_pane_t1_ParamLimits

0x8518,	// (0x000179df) list_double_pane_t1

0xcc6e,	// (0x0001c135) list_double_pane_t2_ParamLimits

0xcc6e,	// (0x0001c135) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001eab8) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001eab8) list_double_pane_t

0xcc80,	// (0x0001c147) list_double2_pane_g1_ParamLimits

0xcc80,	// (0x0001c147) list_double2_pane_g1

0xcc91,	// (0x0001c158) list_double2_pane_g2_ParamLimits

0xcc91,	// (0x0001c158) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001eabd) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001eabd) list_double2_pane_g

0xcc9d,	// (0x0001c164) list_double2_pane_t1_ParamLimits

0xcc9d,	// (0x0001c164) list_double2_pane_t1

0xccb3,	// (0x0001c17a) list_double2_pane_t2_ParamLimits

0xccb3,	// (0x0001c17a) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001eac2) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001eac2) list_double2_pane_t

0x56ec,	// (0x00014bb3) list_double_number_pane_g1_ParamLimits

0x56ec,	// (0x00014bb3) list_double_number_pane_g1

0xcc62,	// (0x0001c129) list_double_number_pane_g2_ParamLimits

0xcc62,	// (0x0001c129) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001eab3) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001eab3) list_double_number_pane_g

0xccc5,	// (0x0001c18c) list_double_number_pane_t1_ParamLimits

0xccc5,	// (0x0001c18c) list_double_number_pane_t1

0xccd7,	// (0x0001c19e) list_double_number_pane_t2_ParamLimits

0xccd7,	// (0x0001c19e) list_double_number_pane_t2

0xcced,	// (0x0001c1b4) list_double_number_pane_t3_ParamLimits

0xcced,	// (0x0001c1b4) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001eac7) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001eac7) list_double_number_pane_t

0xccff,	// (0x0001c1c6) list_double_graphic_pane_g1_ParamLimits

0xccff,	// (0x0001c1c6) list_double_graphic_pane_g1

0xcd0b,	// (0x0001c1d2) list_double_graphic_pane_g2_ParamLimits

0xcd0b,	// (0x0001c1d2) list_double_graphic_pane_g2

0xcd1a,	// (0x0001c1e1) list_double_graphic_pane_g3_ParamLimits

0xcd1a,	// (0x0001c1e1) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001eace) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001eace) list_double_graphic_pane_g

0xcd32,	// (0x0001c1f9) list_double_graphic_pane_t1_ParamLimits

0xcd32,	// (0x0001c1f9) list_double_graphic_pane_t1

0xcd48,	// (0x0001c20f) list_double_graphic_pane_t2_ParamLimits

0xcd48,	// (0x0001c20f) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001ead7) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001ead7) list_double_graphic_pane_t

0xcd5a,	// (0x0001c221) list_double2_graphic_pane_g1_ParamLimits

0xcd5a,	// (0x0001c221) list_double2_graphic_pane_g1

0x4202,	// (0x000136c9) list_double2_graphic_pane_g2_ParamLimits

0x4202,	// (0x000136c9) list_double2_graphic_pane_g2

0xcc91,	// (0x0001c158) list_double2_graphic_pane_g3_ParamLimits

0xcc91,	// (0x0001c158) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001eadc) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001eadc) list_double2_graphic_pane_g

0xcd66,	// (0x0001c22d) list_double2_graphic_pane_t1_ParamLimits

0xcd66,	// (0x0001c22d) list_double2_graphic_pane_t1

0xcd7c,	// (0x0001c243) list_double2_graphic_pane_t2_ParamLimits

0xcd7c,	// (0x0001c243) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001eae3) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001eae3) list_double2_graphic_pane_t

0xcd8e,	// (0x0001c255) list_double_large_graphic_pane_g1_ParamLimits

0xcd8e,	// (0x0001c255) list_double_large_graphic_pane_g1

0xcdad,	// (0x0001c274) list_double_large_graphic_pane_g2_ParamLimits

0xcdad,	// (0x0001c274) list_double_large_graphic_pane_g2

0xcc62,	// (0x0001c129) list_double_large_graphic_pane_g3_ParamLimits

0xcc62,	// (0x0001c129) list_double_large_graphic_pane_g3

0xcdbe,	// (0x0001c285) list_double_large_graphic_pane_g4_ParamLimits

0xcdbe,	// (0x0001c285) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001eae8) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001eae8) list_double_large_graphic_pane_g

0xcdd0,	// (0x0001c297) list_double_large_graphic_pane_t1_ParamLimits

0xcdd0,	// (0x0001c297) list_double_large_graphic_pane_t1

0xcde9,	// (0x0001c2b0) list_double_large_graphic_pane_t2_ParamLimits

0xcde9,	// (0x0001c2b0) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001eaf3) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001eaf3) list_double_large_graphic_pane_t

0xcdfb,	// (0x0001c2c2) list_double2_large_graphic_pane_g1_ParamLimits

0xcdfb,	// (0x0001c2c2) list_double2_large_graphic_pane_g1

0xcc80,	// (0x0001c147) list_double2_large_graphic_pane_g2_ParamLimits

0xcc80,	// (0x0001c147) list_double2_large_graphic_pane_g2

0xcc91,	// (0x0001c158) list_double2_large_graphic_pane_g3_ParamLimits

0xcc91,	// (0x0001c158) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001eaf8) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001eaf8) list_double2_large_graphic_pane_g

0xce07,	// (0x0001c2ce) list_double2_large_graphic_pane_t1_ParamLimits

0xce07,	// (0x0001c2ce) list_double2_large_graphic_pane_t1

0xce1d,	// (0x0001c2e4) list_double2_large_graphic_pane_t2_ParamLimits

0xce1d,	// (0x0001c2e4) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001eaff) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001eaff) list_double2_large_graphic_pane_t

0xce2f,	// (0x0001c2f6) list_double_heading_pane_g1_ParamLimits

0xce2f,	// (0x0001c2f6) list_double_heading_pane_g1

0xce40,	// (0x0001c307) list_double_heading_pane_g2_ParamLimits

0xce40,	// (0x0001c307) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001eb04) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001eb04) list_double_heading_pane_g

0xce4c,	// (0x0001c313) list_double_heading_pane_t1_ParamLimits

0xce4c,	// (0x0001c313) list_double_heading_pane_t1

0xce62,	// (0x0001c329) list_double_heading_pane_t2_ParamLimits

0xce62,	// (0x0001c329) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001eb09) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001eb09) list_double_heading_pane_t

0x3125,	// (0x000125ec) list_double_graphic_heading_pane_g1_ParamLimits

0x3125,	// (0x000125ec) list_double_graphic_heading_pane_g1

0xce2f,	// (0x0001c2f6) list_double_graphic_heading_pane_g2_ParamLimits

0xce2f,	// (0x0001c2f6) list_double_graphic_heading_pane_g2

0xce40,	// (0x0001c307) list_double_graphic_heading_pane_g3_ParamLimits

0xce40,	// (0x0001c307) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001eb0e) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001eb0e) list_double_graphic_heading_pane_g

0xce74,	// (0x0001c33b) list_double_graphic_heading_pane_t1_ParamLimits

0xce74,	// (0x0001c33b) list_double_graphic_heading_pane_t1

0xce8a,	// (0x0001c351) list_double_graphic_heading_pane_t2_ParamLimits

0xce8a,	// (0x0001c351) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001eb15) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001eb15) list_double_graphic_heading_pane_t

0xcdad,	// (0x0001c274) list_double_time_pane_g1_ParamLimits

0xcdad,	// (0x0001c274) list_double_time_pane_g1

0xcc62,	// (0x0001c129) list_double_time_pane_g2_ParamLimits

0xcc62,	// (0x0001c129) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001eb1a) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001eb1a) list_double_time_pane_g

0xce9c,	// (0x0001c363) list_double_time_pane_t1_ParamLimits

0xce9c,	// (0x0001c363) list_double_time_pane_t1

0xceb2,	// (0x0001c379) list_double_time_pane_t2_ParamLimits

0xceb2,	// (0x0001c379) list_double_time_pane_t2

0xcec4,	// (0x0001c38b) list_double_time_pane_t3_ParamLimits

0xcec4,	// (0x0001c38b) list_double_time_pane_t3

0xced6,	// (0x0001c39d) list_double_time_pane_t4_ParamLimits

0xced6,	// (0x0001c39d) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001eb1f) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001eb1f) list_double_time_pane_t

0x4202,	// (0x000136c9) list_setting_pane_g1_ParamLimits

0x4202,	// (0x000136c9) list_setting_pane_g1

0xcc91,	// (0x0001c158) list_setting_pane_g2_ParamLimits

0xcc91,	// (0x0001c158) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001eb28) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001eb28) list_setting_pane_g

0xcee8,	// (0x0001c3af) list_setting_pane_t1_ParamLimits

0xcee8,	// (0x0001c3af) list_setting_pane_t1

0xceff,	// (0x0001c3c6) list_setting_pane_t2_ParamLimits

0xceff,	// (0x0001c3c6) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001eb2d) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001eb2d) list_setting_pane_t

0xcf3e,	// (0x0001c405) set_value_pane_cp_ParamLimits

0xcf3e,	// (0x0001c405) set_value_pane_cp

0x4202,	// (0x000136c9) list_setting_number_pane_g1_ParamLimits

0x4202,	// (0x000136c9) list_setting_number_pane_g1

0xcc91,	// (0x0001c158) list_setting_number_pane_g2_ParamLimits

0xcc91,	// (0x0001c158) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001eb28) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001eb28) list_setting_number_pane_g

0xcf4a,	// (0x0001c411) list_setting_number_pane_t1_ParamLimits

0xcf4a,	// (0x0001c411) list_setting_number_pane_t1

0xcf5e,	// (0x0001c425) list_setting_number_pane_t2_ParamLimits

0xcf5e,	// (0x0001c425) list_setting_number_pane_t2

0xcf75,	// (0x0001c43c) list_setting_number_pane_t3_ParamLimits

0xcf75,	// (0x0001c43c) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001eb34) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001eb34) list_setting_number_pane_t

0xcf3e,	// (0x0001c405) set_value_pane_ParamLimits

0xcf3e,	// (0x0001c405) set_value_pane

0x340a,	// (0x000128d1) bg_set_opt_pane_ParamLimits

0x340a,	// (0x000128d1) bg_set_opt_pane

0x342b,	// (0x000128f2) set_value_pane_t1

0x3439,	// (0x00012900) slider_set_pane_cp3

0x3442,	// (0x00012909) volume_small_pane_cp

0x344b,	// (0x00012912) list_form_gen_pane

0x3454,	// (0x0001291b) scroll_pane_cp8

0xcfb8,	// (0x0001c47f) form_field_data_pane_ParamLimits

0xcfb8,	// (0x0001c47f) form_field_data_pane

0xcfcf,	// (0x0001c496) form_field_data_wide_pane_ParamLimits

0xcfcf,	// (0x0001c496) form_field_data_wide_pane

0xcfef,	// (0x0001c4b6) form_field_popup_pane_ParamLimits

0xcfef,	// (0x0001c4b6) form_field_popup_pane

0xd007,	// (0x0001c4ce) form_field_popup_wide_pane_ParamLimits

0xd007,	// (0x0001c4ce) form_field_popup_wide_pane

0x34ef,	// (0x000129b6) form_field_slider_pane_ParamLimits

0x34ef,	// (0x000129b6) form_field_slider_pane

0x3502,	// (0x000129c9) form_field_slider_wide_pane_ParamLimits

0x3502,	// (0x000129c9) form_field_slider_wide_pane

0x3515,	// (0x000129dc) data_form_pane

0xd028,	// (0x0001c4ef) form_field_data_pane_t1

0x3543,	// (0x00012a0a) input_focus_pane

0x3551,	// (0x00012a18) data_form_wide_pane

0x357d,	// (0x00012a44) form_field_data_wide_pane_t1

0x2d39,	// (0x00012200) input_focus_pane_cp6

0xd042,	// (0x0001c509) form_field_popup_pane_t1

0x3543,	// (0x00012a0a) input_focus_pane_cp7

0x35b4,	// (0x00012a7b) list_form_pane

0x35c8,	// (0x00012a8f) form_field_popup_wide_pane_t1

0x3543,	// (0x00012a0a) input_focus_pane_cp8

0x35da,	// (0x00012aa1) list_form_wide_pane

0xd064,	// (0x0001c52b) form_field_slider_pane_t1_ParamLimits

0xd064,	// (0x0001c52b) form_field_slider_pane_t1

0xd07c,	// (0x0001c543) form_field_slider_pane_t2_ParamLimits

0xd07c,	// (0x0001c543) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001eb44) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001eb44) form_field_slider_pane_t

0x29ae,	// (0x00011e75) input_focus_pane_cp9_ParamLimits

0x29ae,	// (0x00011e75) input_focus_pane_cp9

0xd091,	// (0x0001c558) slider_cont_pane_ParamLimits

0xd091,	// (0x0001c558) slider_cont_pane

0x3626,	// (0x00012aed) form_field_slider_wide_pane_t1_ParamLimits

0x3626,	// (0x00012aed) form_field_slider_wide_pane_t1

0x3638,	// (0x00012aff) form_field_slider_wide_pane_t2_ParamLimits

0x3638,	// (0x00012aff) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001eb49) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001eb49) form_field_slider_wide_pane_t

0x29ae,	// (0x00011e75) input_focus_pane_cp10_ParamLimits

0x29ae,	// (0x00011e75) input_focus_pane_cp10

0xd0a5,	// (0x0001c56c) slider_cont_pane_cp1_ParamLimits

0xd0a5,	// (0x0001c56c) slider_cont_pane_cp1

0xd0b9,	// (0x0001c580) slider_form_pane_cp

0x3666,	// (0x00012b2d) input_focus_pane_g1

0x366e,	// (0x00012b35) input_focus_pane_g2

0x3676,	// (0x00012b3d) input_focus_pane_g3

0x367e,	// (0x00012b45) input_focus_pane_g4

0x3686,	// (0x00012b4d) input_focus_pane_g5

0x368e,	// (0x00012b55) input_focus_pane_g6

0x3696,	// (0x00012b5d) input_focus_pane_g7

0x369e,	// (0x00012b65) input_focus_pane_g8

0x36a6,	// (0x00012b6d) input_focus_pane_g9

0x262f,	// (0x00011af6) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001eb4e) input_focus_pane_g

0x536c,	// (0x00014833) wait_border_pane_g3_copy1

0xd0c1,	// (0x0001c588) data_form_pane_t1

0x262f,	// (0x00011af6) wait_anim_pane_g1_copy1

0xdcf9,	// (0x0001d1c0) data_form_wide_pane_t1

0xd0db,	// (0x0001c5a2) list_form_graphic_pane_cp_ParamLimits

0xd0db,	// (0x0001c5a2) list_form_graphic_pane_cp

0x62b5,	// (0x0001577c) slider_form_pane_g1

0x62be,	// (0x00015785) slider_form_pane_g2

0x0006,

0xf985,	// (0x0001ee4c) slider_form_pane_g

0xd0db,	// (0x0001c5a2) list_form_graphic_pane_ParamLimits

0xd0db,	// (0x0001c5a2) list_form_graphic_pane

0x36fe,	// (0x00012bc5) list_form_graphic_pane_g1

0x3706,	// (0x00012bcd) list_form_graphic_pane_t1_ParamLimits

0x3706,	// (0x00012bcd) list_form_graphic_pane_t1

0x2719,	// (0x00011be0) list_highlight_pane_cp5_ParamLimits

0x2719,	// (0x00011be0) list_highlight_pane_cp5

0xd0ed,	// (0x0001c5b4) find_pane_g1

0x3724,	// (0x00012beb) input_find_pane

0xd0f6,	// (0x0001c5bd) input_find_pane_g1_ParamLimits

0xd0f6,	// (0x0001c5bd) input_find_pane_g1

0xd102,	// (0x0001c5c9) input_find_pane_t1_ParamLimits

0xd102,	// (0x0001c5c9) input_find_pane_t1

0xd117,	// (0x0001c5de) input_find_pane_t2_ParamLimits

0xd117,	// (0x0001c5de) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001eb63) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001eb63) input_find_pane_t

0x3763,	// (0x00012c2a) input_focus_pane_cp5_ParamLimits

0x3763,	// (0x00012c2a) input_focus_pane_cp5

0x377d,	// (0x00012c44) bg_popup_window_pane_cp2_ParamLimits

0x377d,	// (0x00012c44) bg_popup_window_pane_cp2

0x378a,	// (0x00012c51) listscroll_menu_pane_ParamLimits

0x378a,	// (0x00012c51) listscroll_menu_pane

0xd138,	// (0x0001c5ff) popup_submenu_window_ParamLimits

0xd138,	// (0x0001c5ff) popup_submenu_window

0x37c2,	// (0x00012c89) find_popup_pane_g1

0x37ca,	// (0x00012c91) input_popup_find_pane_cp

0x3763,	// (0x00012c2a) input_focus_pane_cp4_ParamLimits

0x3763,	// (0x00012c2a) input_focus_pane_cp4

0x37e0,	// (0x00012ca7) input_popup_find_pane_t1_ParamLimits

0x37e0,	// (0x00012ca7) input_popup_find_pane_t1

0x2639,	// (0x00011b00) bg_popup_sub_pane_cp

0x380e,	// (0x00012cd5) listscroll_popup_sub_pane

0x3816,	// (0x00012cdd) list_submenu_pane_ParamLimits

0x3816,	// (0x00012cdd) list_submenu_pane

0x3827,	// (0x00012cee) scroll_pane_cp4

0x382f,	// (0x00012cf6) list_single_popup_submenu_pane_ParamLimits

0x382f,	// (0x00012cf6) list_single_popup_submenu_pane

0x3843,	// (0x00012d0a) list_single_popup_submenu_pane_g1

0x384b,	// (0x00012d12) list_single_popup_submenu_pane_t1_ParamLimits

0x384b,	// (0x00012d12) list_single_popup_submenu_pane_t1

0x29ae,	// (0x00011e75) bg_active_tab_pane_cp1_ParamLimits

0x29ae,	// (0x00011e75) bg_active_tab_pane_cp1

0x3860,	// (0x00012d27) tabs_2_active_pane_g1

0xd172,	// (0x0001c639) tabs_2_active_pane_t1

0x29ae,	// (0x00011e75) bg_passive_tab_pane_cp1_ParamLimits

0x29ae,	// (0x00011e75) bg_passive_tab_pane_cp1

0x3860,	// (0x00012d27) tabs_2_passive_pane_g1

0xd172,	// (0x0001c639) tabs_2_passive_pane_t1

0x2719,	// (0x00011be0) bg_active_tab_pane_cp4

0xd184,	// (0x0001c64b) tabs_2_long_active_pane_t1

0x470a,	// (0x00013bd1) bg_passive_tab_pane_cp4

0x1216,	// (0x000106dd) list_single_midp_graphic_pane_g4_ParamLimits

0x2719,	// (0x00011be0) bg_active_tab_pane_cp5

0xd197,	// (0x0001c65e) tabs_3_long_active_pane_t1

0x470a,	// (0x00013bd1) bg_passive_tab_pane_cp5

0x1216,	// (0x000106dd) list_single_midp_graphic_pane_g4

0x2719,	// (0x00011be0) bg_popup_window_pane_cp13_ParamLimits

0x2719,	// (0x00011be0) bg_popup_window_pane_cp13

0x38c2,	// (0x00012d89) listscroll_popup_fast_pane_ParamLimits

0x38c2,	// (0x00012d89) listscroll_popup_fast_pane

0x38d1,	// (0x00012d98) grid_popup_fast_pane_ParamLimits

0x38d1,	// (0x00012d98) grid_popup_fast_pane

0x38e3,	// (0x00012daa) scroll_pane_cp9_ParamLimits

0x38e3,	// (0x00012daa) scroll_pane_cp9

0x81e7,	// (0x000176ae) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x81e7,	// (0x000176ae) list_single_graphic_hl_pane_t1_cp2

0x3907,	// (0x00012dce) input_focus_pane_cp20_ParamLimits

0x3907,	// (0x00012dce) input_focus_pane_cp20

0x3915,	// (0x00012ddc) query_popup_data_pane_t1_ParamLimits

0x3915,	// (0x00012ddc) query_popup_data_pane_t1

0x3928,	// (0x00012def) query_popup_data_pane_t2_ParamLimits

0x3928,	// (0x00012def) query_popup_data_pane_t2

0x396e,	// (0x00012e35) query_popup_data_pane_t3_ParamLimits

0x396e,	// (0x00012e35) query_popup_data_pane_t3

0x39af,	// (0x00012e76) query_popup_data_pane_t4_ParamLimits

0x39af,	// (0x00012e76) query_popup_data_pane_t4

0x39eb,	// (0x00012eb2) query_popup_data_pane_t5_ParamLimits

0x39eb,	// (0x00012eb2) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001eb68) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001eb68) query_popup_data_pane_t

0x3666,	// (0x00012b2d) bg_set_opt_pane_g1

0x366e,	// (0x00012b35) bg_set_opt_pane_g2

0x3676,	// (0x00012b3d) bg_set_opt_pane_g3

0x367e,	// (0x00012b45) bg_set_opt_pane_g4

0x3686,	// (0x00012b4d) bg_set_opt_pane_g5

0x368e,	// (0x00012b55) bg_set_opt_pane_g6

0x3696,	// (0x00012b5d) bg_set_opt_pane_g7

0x369e,	// (0x00012b65) bg_set_opt_pane_g8

0x36a6,	// (0x00012b6d) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001eb73) bg_set_opt_pane_g

0x0826,	// (0x0000fced) control_top_pane_stacon_ParamLimits

0x0826,	// (0x0000fced) control_top_pane_stacon

0x0879,	// (0x0000fd40) signal_pane_stacon_ParamLimits

0x0879,	// (0x0000fd40) signal_pane_stacon

0x406c,	// (0x00013533) stacon_top_pane_g1_ParamLimits

0x406c,	// (0x00013533) stacon_top_pane_g1

0x089e,	// (0x0000fd65) title_pane_stacon_ParamLimits

0x089e,	// (0x0000fd65) title_pane_stacon

0x08c8,	// (0x0000fd8f) uni_indicator_pane_stacon_ParamLimits

0x08c8,	// (0x0000fd8f) uni_indicator_pane_stacon

0x08dd,	// (0x0000fda4) battery_pane_stacon_ParamLimits

0x08dd,	// (0x0000fda4) battery_pane_stacon

0x0921,	// (0x0000fde8) control_bottom_pane_stacon_ParamLimits

0x0921,	// (0x0000fde8) control_bottom_pane_stacon

0x0944,	// (0x0000fe0b) navi_pane_stacon_ParamLimits

0x0944,	// (0x0000fe0b) navi_pane_stacon

0x408e,	// (0x00013555) stacon_bottom_pane_g1_ParamLimits

0x408e,	// (0x00013555) stacon_bottom_pane_g1

0x0589,	// (0x0000fa50) aid_levels_signal_lsc_ParamLimits

0x0589,	// (0x0000fa50) aid_levels_signal_lsc

0x059f,	// (0x0000fa66) signal_pane_stacon_g1_ParamLimits

0x059f,	// (0x0000fa66) signal_pane_stacon_g1

0x05b3,	// (0x0000fa7a) signal_pane_stacon_g2_ParamLimits

0x05b3,	// (0x0000fa7a) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001eb86) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001eb86) signal_pane_stacon_g

0x05e8,	// (0x0000faaf) title_pane_stacon_t1_ParamLimits

0x05e8,	// (0x0000faaf) title_pane_stacon_t1

0x3a2f,	// (0x00012ef6) uni_indicator_pane_stacon_g1

0x3a39,	// (0x00012f00) uni_indicator_pane_stacon_g2

0x3a43,	// (0x00012f0a) uni_indicator_pane_stacon_g3

0x3a4d,	// (0x00012f14) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001eb92) uni_indicator_pane_stacon_g

0x060d,	// (0x0000fad4) control_top_pane_stacon_g1

0x0615,	// (0x0000fadc) control_top_pane_stacon_t1_ParamLimits

0x0615,	// (0x0000fadc) control_top_pane_stacon_t1

0x064c,	// (0x0000fb13) aid_levels_battery_lsc_ParamLimits

0x064c,	// (0x0000fb13) aid_levels_battery_lsc

0x0663,	// (0x0000fb2a) battery_pane_stacon_g1_ParamLimits

0x0663,	// (0x0000fb2a) battery_pane_stacon_g1

0x0676,	// (0x0000fb3d) battery_pane_stacon_g2_ParamLimits

0x0676,	// (0x0000fb3d) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001eb9b) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001eb9b) battery_pane_stacon_g

0x06b4,	// (0x0000fb7b) navi_icon_pane_stacon

0x06c8,	// (0x0000fb8f) navi_navi_pane_stacon

0x06b4,	// (0x0000fb7b) navi_text_pane_stacon

0x060d,	// (0x0000fad4) control_bottom_pane_stacon_g1

0x06dc,	// (0x0000fba3) control_bottom_pane_stacon_t1_ParamLimits

0x06dc,	// (0x0000fba3) control_bottom_pane_stacon_t1

0xd1a9,	// (0x0001c670) grid_app_pane_ParamLimits

0xd1a9,	// (0x0001c670) grid_app_pane

0xd1e1,	// (0x0001c6a8) scroll_pane_cp15_ParamLimits

0xd1e1,	// (0x0001c6a8) scroll_pane_cp15

0xd1f6,	// (0x0001c6bd) cell_app_pane_ParamLimits

0xd1f6,	// (0x0001c6bd) cell_app_pane

0xd23b,	// (0x0001c702) cell_app_pane_g1_ParamLimits

0xd23b,	// (0x0001c702) cell_app_pane_g1

0x3af2,	// (0x00012fb9) cell_app_pane_g2_ParamLimits

0x3af2,	// (0x00012fb9) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001eba0) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001eba0) cell_app_pane_g

0xd25f,	// (0x0001c726) cell_app_pane_t1_ParamLimits

0xd25f,	// (0x0001c726) cell_app_pane_t1

0x3b15,	// (0x00012fdc) grid_highlight_pane_ParamLimits

0x3b15,	// (0x00012fdc) grid_highlight_pane

0x3666,	// (0x00012b2d) cell_highlight_pane_g1

0x366e,	// (0x00012b35) cell_highlight_pane_g2

0x3676,	// (0x00012b3d) cell_highlight_pane_g3

0x367e,	// (0x00012b45) cell_highlight_pane_g4

0x3686,	// (0x00012b4d) cell_highlight_pane_g5

0x368e,	// (0x00012b55) cell_highlight_pane_g6

0x3696,	// (0x00012b5d) cell_highlight_pane_g7

0x369e,	// (0x00012b65) cell_highlight_pane_g8

0x36a6,	// (0x00012b6d) cell_highlight_pane_g9

0x262f,	// (0x00011af6) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001eb4e) cell_highlight_pane_g

0x3b26,	// (0x00012fed) bg_scroll_pane

0x0726,	// (0x0000fbed) scroll_handle_pane

0x3b6d,	// (0x00013034) scroll_bg_pane_g1

0x3b82,	// (0x00013049) scroll_bg_pane_g2

0x3b9a,	// (0x00013061) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001eba5) scroll_bg_pane_g

0x3baf,	// (0x00013076) scroll_handle_focus_pane_ParamLimits

0x3baf,	// (0x00013076) scroll_handle_focus_pane

0x3b6d,	// (0x00013034) scroll_handle_pane_g1

0x3bbc,	// (0x00013083) scroll_handle_pane_g2

0x3b9a,	// (0x00013061) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001ebac) scroll_handle_pane_g

0x3763,	// (0x00012c2a) bg_popup_sub_pane_cp21_ParamLimits

0x3763,	// (0x00012c2a) bg_popup_sub_pane_cp21

0x3bd0,	// (0x00013097) popup_fep_japan_predictive_window_t1_ParamLimits

0x3bd0,	// (0x00013097) popup_fep_japan_predictive_window_t1

0x3bea,	// (0x000130b1) popup_fep_japan_predictive_window_t2_ParamLimits

0x3bea,	// (0x000130b1) popup_fep_japan_predictive_window_t2

0x3c1d,	// (0x000130e4) popup_fep_japan_predictive_window_t3_ParamLimits

0x3c1d,	// (0x000130e4) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001ebb3) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001ebb3) popup_fep_japan_predictive_window_t

0x2639,	// (0x00011b00) bg_popup_sub_pane_cp23

0x3c54,	// (0x0001311b) listscroll_japin_cand_pane

0x3c5c,	// (0x00013123) popup_fep_japan_candidate_window_t1

0x3c6a,	// (0x00013131) candidate_pane_ParamLimits

0x3c6a,	// (0x00013131) candidate_pane

0x3c7c,	// (0x00013143) scroll_pane_cp30

0x3c84,	// (0x0001314b) list_single_popup_jap_candidate_pane_ParamLimits

0x3c84,	// (0x0001314b) list_single_popup_jap_candidate_pane

0x2639,	// (0x00011b00) list_highlight_pane_cp30

0x3c99,	// (0x00013160) list_single_popup_jap_candidate_pane_t1

0x3ca8,	// (0x0001316f) level_1_signal

0x3cba,	// (0x00013181) level_2_signal

0x3ccd,	// (0x00013194) level_3_signal

0x3ce0,	// (0x000131a7) level_4_signal

0x3cf3,	// (0x000131ba) level_5_signal

0x3d06,	// (0x000131cd) level_6_signal

0x3d19,	// (0x000131e0) level_7_signal

0x3ca8,	// (0x0001316f) level_1_battery

0x3cba,	// (0x00013181) level_2_battery

0x3ccd,	// (0x00013194) level_3_battery

0x3ce0,	// (0x000131a7) level_4_battery

0x3cf3,	// (0x000131ba) level_5_battery

0x3d06,	// (0x000131cd) level_6_battery

0x3d19,	// (0x000131e0) level_7_battery

0x3d44,	// (0x0001320b) list_menu_pane_ParamLimits

0x3d44,	// (0x0001320b) list_menu_pane

0x3d5a,	// (0x00013221) scroll_pane_cp25_ParamLimits

0x3d5a,	// (0x00013221) scroll_pane_cp25

0x3d73,	// (0x0001323a) list_double2_graphic_pane_cp2_ParamLimits

0x3d73,	// (0x0001323a) list_double2_graphic_pane_cp2

0x3d73,	// (0x0001323a) list_double2_large_graphic_pane_cp2_ParamLimits

0x3d73,	// (0x0001323a) list_double2_large_graphic_pane_cp2

0x3d73,	// (0x0001323a) list_double2_pane_cp2_ParamLimits

0x3d73,	// (0x0001323a) list_double2_pane_cp2

0x3d73,	// (0x0001323a) list_double_graphic_pane_cp2_ParamLimits

0x3d73,	// (0x0001323a) list_double_graphic_pane_cp2

0x3d73,	// (0x0001323a) list_double_large_graphic_pane_cp2_ParamLimits

0x3d73,	// (0x0001323a) list_double_large_graphic_pane_cp2

0x3d73,	// (0x0001323a) list_double_number_pane_cp2_ParamLimits

0x3d73,	// (0x0001323a) list_double_number_pane_cp2

0x3d73,	// (0x0001323a) list_double_pane_cp2_ParamLimits

0x3d73,	// (0x0001323a) list_double_pane_cp2

0xd276,	// (0x0001c73d) list_single_2graphic_pane_cp2_ParamLimits

0xd276,	// (0x0001c73d) list_single_2graphic_pane_cp2

0xd276,	// (0x0001c73d) list_single_graphic_heading_pane_cp2_ParamLimits

0xd276,	// (0x0001c73d) list_single_graphic_heading_pane_cp2

0xd276,	// (0x0001c73d) list_single_graphic_pane_cp2_ParamLimits

0xd276,	// (0x0001c73d) list_single_graphic_pane_cp2

0xd276,	// (0x0001c73d) list_single_heading_pane_cp2_ParamLimits

0xd276,	// (0x0001c73d) list_single_heading_pane_cp2

0x3db0,	// (0x00013277) list_single_large_graphic_pane_cp2_ParamLimits

0x3db0,	// (0x00013277) list_single_large_graphic_pane_cp2

0xd276,	// (0x0001c73d) list_single_number_heading_pane_cp2_ParamLimits

0xd276,	// (0x0001c73d) list_single_number_heading_pane_cp2

0xd276,	// (0x0001c73d) list_single_number_pane_cp2_ParamLimits

0xd276,	// (0x0001c73d) list_single_number_pane_cp2

0xd276,	// (0x0001c73d) list_single_pane_cp2_ParamLimits

0xd276,	// (0x0001c73d) list_single_pane_cp2

0x3e2c,	// (0x000132f3) bg_popup_sub_pane_cp22

0x07d8,	// (0x0000fc9f) popup_side_volume_key_window_g1

0x0802,	// (0x0000fcc9) popup_side_volume_key_window_t1

0x081e,	// (0x0000fce5) volume_small_pane_cp1

0x29ae,	// (0x00011e75) bg_popup_sub_pane_cp24_ParamLimits

0x29ae,	// (0x00011e75) bg_popup_sub_pane_cp24

0x3e42,	// (0x00013309) fep_china_uni_candidate_pane_ParamLimits

0x3e42,	// (0x00013309) fep_china_uni_candidate_pane

0x3e56,	// (0x0001331d) fep_china_uni_entry_pane

0x3e66,	// (0x0001332d) popup_fep_china_uni_window_g1

0x3e82,	// (0x00013349) fep_china_uni_entry_pane_g1

0x3e8a,	// (0x00013351) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001ebe4) fep_china_uni_entry_pane_g

0x3e92,	// (0x00013359) fep_entry_item_pane

0x3e9c,	// (0x00013363) fep_candidate_item_pane

0x3ea4,	// (0x0001336b) fep_china_uni_candidate_pane_g1

0x3eac,	// (0x00013373) fep_china_uni_candidate_pane_g2

0x3eb4,	// (0x0001337b) fep_china_uni_candidate_pane_g3

0x3ebc,	// (0x00013383) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001ebe9) fep_china_uni_candidate_pane_g

0x262f,	// (0x00011af6) fep_entry_item_pane_g1

0x3ec4,	// (0x0001338b) fep_entry_item_pane_t1_ParamLimits

0x3ec4,	// (0x0001338b) fep_entry_item_pane_t1

0x3eda,	// (0x000133a1) fep_candidate_item_pane_t1_ParamLimits

0x3eda,	// (0x000133a1) fep_candidate_item_pane_t1

0x3eef,	// (0x000133b6) fep_candidate_item_pane_t2_ParamLimits

0x3eef,	// (0x000133b6) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001ebf2) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001ebf2) fep_candidate_item_pane_t

0x2719,	// (0x00011be0) list_highlight_pane_cp31_ParamLimits

0x2719,	// (0x00011be0) list_highlight_pane_cp31

0x3f01,	// (0x000133c8) level_1_signal_lsc

0x3f0a,	// (0x000133d1) level_2_signal_lsc

0x3f13,	// (0x000133da) level_3_signal_lsc

0x3f1c,	// (0x000133e3) level_4_signal_lsc

0x3f25,	// (0x000133ec) level_5_signal_lsc

0x3f2e,	// (0x000133f5) level_6_signal_lsc

0x3f37,	// (0x000133fe) level_7_signal_lsc

0x3f37,	// (0x000133fe) level_1_battery_lsc

0x3f40,	// (0x00013407) level_2_battery_lsc

0x3f49,	// (0x00013410) level_3_battery_lsc

0x3f52,	// (0x00013419) level_4_battery_lsc

0x3f5b,	// (0x00013422) level_5_battery_lsc

0x3f64,	// (0x0001342b) level_6_battery_lsc

0x3f01,	// (0x000133c8) level_7_battery_lsc

0x3f6d,	// (0x00013434) scroll_handle_focus_pane_g1

0x3f76,	// (0x0001343d) scroll_handle_focus_pane_g2

0x3f7f,	// (0x00013446) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001ebf7) scroll_handle_focus_pane_g

0xd303,	// (0x0001c7ca) list_single_2graphic_pane_g1_ParamLimits

0xd303,	// (0x0001c7ca) list_single_2graphic_pane_g1

0xcc37,	// (0x0001c0fe) list_single_2graphic_pane_g2_ParamLimits

0xcc37,	// (0x0001c0fe) list_single_2graphic_pane_g2

0x4be6,	// (0x000140ad) list_single_2graphic_pane_g3_ParamLimits

0x4be6,	// (0x000140ad) list_single_2graphic_pane_g3

0xd30f,	// (0x0001c7d6) list_single_2graphic_pane_g4_ParamLimits

0xd30f,	// (0x0001c7d6) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001ebfe) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001ebfe) list_single_2graphic_pane_g

0xd320,	// (0x0001c7e7) list_single_2graphic_pane_t1_ParamLimits

0xd320,	// (0x0001c7e7) list_single_2graphic_pane_t1

0xd34e,	// (0x0001c815) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd34e,	// (0x0001c815) list_double2_graphic_large_graphic_pane_g1

0xcc80,	// (0x0001c147) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcc80,	// (0x0001c147) list_double2_graphic_large_graphic_pane_g2

0xcc91,	// (0x0001c158) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xcc91,	// (0x0001c158) list_double2_graphic_large_graphic_pane_g3

0xd360,	// (0x0001c827) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd360,	// (0x0001c827) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001ec07) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001ec07) list_double2_graphic_large_graphic_pane_g

0xd36c,	// (0x0001c833) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd36c,	// (0x0001c833) list_double2_graphic_large_graphic_pane_t1

0xd382,	// (0x0001c849) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd382,	// (0x0001c849) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001ec10) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001ec10) list_double2_graphic_large_graphic_pane_t

0x4156,	// (0x0001361d) popup_fast_swap_window_ParamLimits

0x4156,	// (0x0001361d) popup_fast_swap_window

0x4172,	// (0x00013639) popup_side_volume_key_window

0x418e,	// (0x00013655) stacon_top_pane

0x4198,	// (0x0001365f) status_pane_ParamLimits

0x4198,	// (0x0001365f) status_pane

0xd394,	// (0x0001c85b) status_small_pane

0x2639,	// (0x00011b00) control_pane

0x2639,	// (0x00011b00) stacon_bottom_pane

0x3454,	// (0x0001291b) scroll_pane_cp121

0x344b,	// (0x00012912) set_content_pane

0x4017,	// (0x000134de) bg_active_tab_pane_g1_cp1

0x4020,	// (0x000134e7) bg_active_tab_pane_g2_cp1

0x4029,	// (0x000134f0) bg_active_tab_pane_g3_cp1

0x4017,	// (0x000134de) bg_passive_tab_pane_g1_cp1

0x4020,	// (0x000134e7) bg_passive_tab_pane_g2_cp1

0x4029,	// (0x000134f0) bg_passive_tab_pane_g3_cp1

0x4032,	// (0x000134f9) bg_active_tab_pane_g1_cp2

0x4020,	// (0x000134e7) bg_active_tab_pane_g2_cp2

0x403b,	// (0x00013502) bg_active_tab_pane_g3_cp2

0x4032,	// (0x000134f9) bg_passive_tab_pane_g1_cp2

0x4020,	// (0x000134e7) bg_passive_tab_pane_g2_cp2

0x403b,	// (0x00013502) bg_passive_tab_pane_g3_cp2

0x4044,	// (0x0001350b) bg_active_tab_pane_g1_cp3

0x4020,	// (0x000134e7) bg_active_tab_pane_g2_cp3

0x404d,	// (0x00013514) bg_active_tab_pane_g3_cp3

0x4044,	// (0x0001350b) bg_passive_tab_pane_g1_cp3

0x4020,	// (0x000134e7) bg_passive_tab_pane_g2_cp3

0x404d,	// (0x00013514) bg_passive_tab_pane_g3_cp3

0x4056,	// (0x0001351d) bg_active_tab_pane_g1_cp4

0x4020,	// (0x000134e7) bg_active_tab_pane_g2_cp4

0x4061,	// (0x00013528) bg_active_tab_pane_g3_cp4

0x4056,	// (0x0001351d) bg_passive_tab_pane_g1_cp4

0x4020,	// (0x000134e7) bg_passive_tab_pane_g2_cp4

0x4061,	// (0x00013528) bg_passive_tab_pane_g3_cp4

0x40aa,	// (0x00013571) bg_active_tab_pane_g1_cp5

0x4020,	// (0x000134e7) bg_active_tab_pane_g2_cp5

0x40b3,	// (0x0001357a) bg_active_tab_pane_g3_cp5

0x40aa,	// (0x00013571) bg_passive_tab_pane_g1_cp5

0x4020,	// (0x000134e7) bg_passive_tab_pane_g2_cp5

0x40b3,	// (0x0001357a) bg_passive_tab_pane_g3_cp5

0x69cd,	// (0x00015e94) list_set_graphic_pane_ParamLimits

0x69cd,	// (0x00015e94) list_set_graphic_pane

0x2639,	// (0x00011b00) bg_set_opt_pane_cp4

0x40d9,	// (0x000135a0) list_set_graphic_pane_g1_ParamLimits

0x40d9,	// (0x000135a0) list_set_graphic_pane_g1

0x40e5,	// (0x000135ac) list_set_graphic_pane_g2_ParamLimits

0x40e5,	// (0x000135ac) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001ec15) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001ec15) list_set_graphic_pane_g

0x0009,

0xfac3,	// (0x0001ef8a) volume_small_pane_cp_g

0x4109,	// (0x000135d0) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4109,	// (0x000135d0) list_double2_large_graphic_pane_g1_cp2

0x4115,	// (0x000135dc) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4115,	// (0x000135dc) list_double2_large_graphic_pane_g2_cp2

0x4126,	// (0x000135ed) list_double2_large_graphic_pane_g3_cp2

0x412e,	// (0x000135f5) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x412e,	// (0x000135f5) list_double2_large_graphic_pane_t1_cp2

0x4144,	// (0x0001360b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4144,	// (0x0001360b) list_double2_large_graphic_pane_t2_cp2

0x5e4b,	// (0x00015312) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5e4b,	// (0x00015312) list_double_large_graphic_pane_g1_cp2

0x5e5c,	// (0x00015323) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5e5c,	// (0x00015323) list_double_large_graphic_pane_g2_cp2

0x42bf,	// (0x00013786) list_double_large_graphic_pane_g3_cp2

0x5e6d,	// (0x00015334) list_double_large_graphic_pane_g4_cp

0x5e75,	// (0x0001533c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5e75,	// (0x0001533c) list_double_large_graphic_pane_t1_cp2

0x5e8c,	// (0x00015353) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5e8c,	// (0x00015353) list_double_large_graphic_pane_t2_cp2

0x41b1,	// (0x00013678) list_double2_graphic_pane_g1_cp2_ParamLimits

0x41b1,	// (0x00013678) list_double2_graphic_pane_g1_cp2

0x41bf,	// (0x00013686) list_double2_graphic_pane_g2_cp2_ParamLimits

0x41bf,	// (0x00013686) list_double2_graphic_pane_g2_cp2

0x41d0,	// (0x00013697) list_double2_graphic_pane_g3_cp2

0x41da,	// (0x000136a1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x41da,	// (0x000136a1) list_double2_graphic_pane_t1_cp2

0x41f0,	// (0x000136b7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x41f0,	// (0x000136b7) list_double2_graphic_pane_t2_cp2

0x4202,	// (0x000136c9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4202,	// (0x000136c9) list_single_number_heading_pane_g1_cp2

0x420e,	// (0x000136d5) list_single_number_heading_pane_g2_cp2

0x4216,	// (0x000136dd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4216,	// (0x000136dd) list_single_number_heading_pane_t1_cp2

0x422c,	// (0x000136f3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x422c,	// (0x000136f3) list_single_number_heading_pane_t2_cp2

0x423e,	// (0x00013705) list_single_number_heading_pane_t3_cp2_ParamLimits

0x423e,	// (0x00013705) list_single_number_heading_pane_t3_cp2

0x4202,	// (0x000136c9) list_single_heading_pane_g1_cp2_ParamLimits

0x4202,	// (0x000136c9) list_single_heading_pane_g1_cp2

0x420e,	// (0x000136d5) list_single_heading_pane_g2_cp2

0x4216,	// (0x000136dd) list_single_heading_pane_t1_cp2_ParamLimits

0x4216,	// (0x000136dd) list_single_heading_pane_t1_cp2

0x5c53,	// (0x0001511a) list_single_heading_pane_t2_cp2_ParamLimits

0x5c53,	// (0x0001511a) list_single_heading_pane_t2_cp2

0x5b9b,	// (0x00015062) list_double_graphic_pane_g1_cp2_ParamLimits

0x5b9b,	// (0x00015062) list_double_graphic_pane_g1_cp2

0x5ba7,	// (0x0001506e) list_double_graphic_pane_g2_cp2_ParamLimits

0x5ba7,	// (0x0001506e) list_double_graphic_pane_g2_cp2

0x5bb6,	// (0x0001507d) list_double_graphic_pane_g3_cp2

0x5bbe,	// (0x00015085) list_double_graphic_pane_t1_cp2_ParamLimits

0x5bbe,	// (0x00015085) list_double_graphic_pane_t1_cp2

0x5bd4,	// (0x0001509b) list_double_graphic_pane_t2_cp2_ParamLimits

0x5bd4,	// (0x0001509b) list_double_graphic_pane_t2_cp2

0x42b3,	// (0x0001377a) list_double_number_pane_g1_cp2_ParamLimits

0x42b3,	// (0x0001377a) list_double_number_pane_g1_cp2

0x42bf,	// (0x00013786) list_double_number_pane_g2_cp2

0x5b5f,	// (0x00015026) list_double_number_pane_t1_cp2_ParamLimits

0x5b5f,	// (0x00015026) list_double_number_pane_t1_cp2

0x5b73,	// (0x0001503a) list_double_number_pane_t2_cp2_ParamLimits

0x5b73,	// (0x0001503a) list_double_number_pane_t2_cp2

0x5b89,	// (0x00015050) list_double_number_pane_t3_cp2_ParamLimits

0x5b89,	// (0x00015050) list_double_number_pane_t3_cp2

0x5a48,	// (0x00014f0f) list_single_graphic_pane_g1_cp2_ParamLimits

0x5a48,	// (0x00014f0f) list_single_graphic_pane_g1_cp2

0x4317,	// (0x000137de) list_single_graphic_pane_g2_cp2_ParamLimits

0x4317,	// (0x000137de) list_single_graphic_pane_g2_cp2

0x4323,	// (0x000137ea) list_single_graphic_pane_g3_cp2

0x5a1e,	// (0x00014ee5) list_single_graphic_pane_t1_cp2_ParamLimits

0x5a1e,	// (0x00014ee5) list_single_graphic_pane_t1_cp2

0x4317,	// (0x000137de) list_single_number_pane_g1_cp2_ParamLimits

0x4317,	// (0x000137de) list_single_number_pane_g1_cp2

0x4323,	// (0x000137ea) list_single_number_pane_g2_cp2

0x5a1e,	// (0x00014ee5) list_single_number_pane_t1_cp2_ParamLimits

0x5a1e,	// (0x00014ee5) list_single_number_pane_t1_cp2

0x5a34,	// (0x00014efb) list_single_number_pane_t2_cp2_ParamLimits

0x5a34,	// (0x00014efb) list_single_number_pane_t2_cp2

0x4115,	// (0x000135dc) list_double2_pane_g1_cp2_ParamLimits

0x4115,	// (0x000135dc) list_double2_pane_g1_cp2

0x4126,	// (0x000135ed) list_double2_pane_g2_cp2

0x428b,	// (0x00013752) list_double2_pane_t1_cp2_ParamLimits

0x428b,	// (0x00013752) list_double2_pane_t1_cp2

0x42a1,	// (0x00013768) list_double2_pane_t2_cp2_ParamLimits

0x42a1,	// (0x00013768) list_double2_pane_t2_cp2

0x42b3,	// (0x0001377a) list_double_pane_g1_cp2_ParamLimits

0x42b3,	// (0x0001377a) list_double_pane_g1_cp2

0x42bf,	// (0x00013786) list_double_pane_g2_cp2

0x42c7,	// (0x0001378e) list_double_pane_t1_cp2_ParamLimits

0x42c7,	// (0x0001378e) list_double_pane_t1_cp2

0x42dd,	// (0x000137a4) list_double_pane_t2_cp2_ParamLimits

0x42dd,	// (0x000137a4) list_double_pane_t2_cp2

0x4307,	// (0x000137ce) list_single_pane_cp2_g3

0x4317,	// (0x000137de) list_single_pane_g1_cp2_ParamLimits

0x4317,	// (0x000137de) list_single_pane_g1_cp2

0x4323,	// (0x000137ea) list_single_pane_g2_cp2

0x432b,	// (0x000137f2) list_single_pane_t1_cp2_ParamLimits

0x432b,	// (0x000137f2) list_single_pane_t1_cp2

0x4343,	// (0x0001380a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4343,	// (0x0001380a) list_single_large_graphic_pane_g1_cp2

0x434f,	// (0x00013816) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x434f,	// (0x00013816) list_single_large_graphic_pane_g2_cp2

0x435b,	// (0x00013822) list_single_large_graphic_pane_g3_cp2

0x4363,	// (0x0001382a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4363,	// (0x0001382a) list_single_large_graphic_pane_g4_cp1

0x437d,	// (0x00013844) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x437d,	// (0x00013844) list_single_large_graphic_pane_t1_cp2

0x59ea,	// (0x00014eb1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x59ea,	// (0x00014eb1) list_single_graphic_heading_pane_g1_cp2

0x59b7,	// (0x00014e7e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x59b7,	// (0x00014e7e) list_single_graphic_heading_pane_g4_cp2

0x4323,	// (0x000137ea) list_single_graphic_heading_pane_g5_cp2

0x59f6,	// (0x00014ebd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x59f6,	// (0x00014ebd) list_single_graphic_heading_pane_t1_cp2

0x5a0c,	// (0x00014ed3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5a0c,	// (0x00014ed3) list_single_graphic_heading_pane_t2_cp2

0x59ab,	// (0x00014e72) list_single_2graphic_pane_g1_cp2_ParamLimits

0x59ab,	// (0x00014e72) list_single_2graphic_pane_g1_cp2

0x59b7,	// (0x00014e7e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x59b7,	// (0x00014e7e) list_single_2graphic_pane_g2_cp2

0x4323,	// (0x000137ea) list_single_2graphic_pane_g3_cp2

0x59c8,	// (0x00014e8f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x59c8,	// (0x00014e8f) list_single_2graphic_pane_g4_cp2

0x59d4,	// (0x00014e9b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x59d4,	// (0x00014e9b) list_single_2graphic_pane_t1_cp2

0x262f,	// (0x00011af6) list_highlight_pane_g10_cp1

0x5577,	// (0x00014a3e) list_highlight_pane_g1_cp1

0x557f,	// (0x00014a46) list_highlight_pane_g2_cp1

0x5587,	// (0x00014a4e) list_highlight_pane_g3_cp1

0x558f,	// (0x00014a56) list_highlight_pane_g4_cp1

0x5597,	// (0x00014a5e) list_highlight_pane_g5_cp1

0x559f,	// (0x00014a66) list_highlight_pane_g6_cp1

0x55a7,	// (0x00014a6e) list_highlight_pane_g7_cp1

0x55af,	// (0x00014a76) list_highlight_pane_g8_cp1

0x55b7,	// (0x00014a7e) list_highlight_pane_g9_cp1

0xda12,	// (0x0001ced9) form_field_slider_pane_t3

0xda20,	// (0x0001cee7) form_field_slider_pane_t4

0x54b3,	// (0x0001497a) slider_form_pane_ParamLimits

0x54b3,	// (0x0001497a) slider_form_pane

0x2639,	// (0x00011b00) control_abbreviations

0x2639,	// (0x00011b00) control_conventions

0x2639,	// (0x00011b00) control_definitions

0x2639,	// (0x00011b00) format_table_attribute

0x5c9d,	// (0x00015164) bg_popup_preview_window_pane_g9

0x2639,	// (0x00011b00) format_table_data2

0x2639,	// (0x00011b00) format_table_data3

0x2639,	// (0x00011b00) format_table_data_example

0x0008,

0x2639,	// (0x00011b00) intro_purpose

0xf8e5,	// (0x0001edac) bg_popup_preview_window_pane_g

0x2639,	// (0x00011b00) texts_category

0x2639,	// (0x00011b00) texts_graphics

0x4393,	// (0x0001385a) text_digital

0x43a2,	// (0x00013869) text_primary

0x43b1,	// (0x00013878) text_primary_small

0x43c0,	// (0x00013887) text_secondary

0x43cf,	// (0x00013896) text_title

0x64bd,	// (0x00015984) bg_passive_tab_pane_g1_cp3_srt

0x4020,	// (0x000134e7) bg_passive_tab_pane_g2_cp3_srt

0x64c6,	// (0x0001598d) bg_passive_tab_pane_g3_cp3_srt

0x29ae,	// (0x00011e75) bg_active_tab_pane_cp3_srt_ParamLimits

0x29ae,	// (0x00011e75) bg_active_tab_pane_cp3_srt

0x64cf,	// (0x00015996) tabs_4_active_pane_srt_g1

0xdda2,	// (0x0001d269) tabs_4_active_pane_srt_t1_ParamLimits

0xdda2,	// (0x0001d269) tabs_4_active_pane_srt_t1

0x64bd,	// (0x00015984) bg_active_tab_pane_g1_cp3_copy1

0x4020,	// (0x000134e7) bg_active_tab_pane_g2_cp3_copy1

0x64c6,	// (0x0001598d) bg_active_tab_pane_g3_cp3_copy1

0x2719,	// (0x00011be0) tabs_2_long_active_pane_srt_ParamLimits

0x2719,	// (0x00011be0) tabs_2_long_active_pane_srt

0x2719,	// (0x00011be0) tabs_2_long_passive_pane_srt_ParamLimits

0x2719,	// (0x00011be0) tabs_2_long_passive_pane_srt

0x470a,	// (0x00013bd1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x470a,	// (0x00013bd1) bg_passive_tab_pane_cp4_srt

0x60e8,	// (0x000155af) bg_passive_tab_pane_g1_cp4_srt

0x4020,	// (0x000134e7) bg_passive_tab_pane_g2_cp4_srt

0x60f1,	// (0x000155b8) bg_passive_tab_pane_g3_cp4_srt

0x2719,	// (0x00011be0) bg_active_tab_pane_cp4_srt_ParamLimits

0x2719,	// (0x00011be0) bg_active_tab_pane_cp4_srt

0xdb8e,	// (0x0001d055) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdb8e,	// (0x0001d055) tabs_2_long_active_pane_srt_t1

0x60e8,	// (0x000155af) bg_active_tab_pane_g1_cp4_srt

0x4020,	// (0x000134e7) bg_active_tab_pane_g2_cp4_srt

0x60f1,	// (0x000155b8) bg_active_tab_pane_g3_cp4_srt

0x29ae,	// (0x00011e75) tabs_3_long_active_pane_srt_ParamLimits

0x29ae,	// (0x00011e75) tabs_3_long_active_pane_srt

0x29ae,	// (0x00011e75) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x29ae,	// (0x00011e75) tabs_3_long_passive_pane_cp_srt

0x29ae,	// (0x00011e75) tabs_3_long_passive_pane_srt_ParamLimits

0x29ae,	// (0x00011e75) tabs_3_long_passive_pane_srt

0x470a,	// (0x00013bd1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x470a,	// (0x00013bd1) bg_passive_tab_pane_cp5_srt

0x40aa,	// (0x00013571) bg_passive_tab_pane_g1_cp5_srt

0x4020,	// (0x000134e7) bg_passive_tab_pane_g2_cp5_srt

0x40b3,	// (0x0001357a) bg_passive_tab_pane_g3_cp5_srt

0x2719,	// (0x00011be0) bg_active_tab_pane_cp5_srt_ParamLimits

0x2719,	// (0x00011be0) bg_active_tab_pane_cp5_srt

0xdb78,	// (0x0001d03f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdb78,	// (0x0001d03f) tabs_3_long_active_pane_srt_t1

0x40aa,	// (0x00013571) bg_active_tab_pane_g1_cp5_srt

0x4020,	// (0x000134e7) bg_active_tab_pane_g2_cp5_srt

0x40b3,	// (0x0001357a) bg_active_tab_pane_g3_cp5_srt

0x60c8,	// (0x0001558f) navi_text_pane_srt_t1

0x60c0,	// (0x00015587) navi_icon_pane_srt_g1

0x45a4,	// (0x00013a6b) midp_editing_number_pane_srt

0x43de,	// (0x000138a5) midp_ticker_pane_srt

0x45ac,	// (0x00013a73) midp_ticker_pane_srt_g1

0x45b4,	// (0x00013a7b) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001ec34) midp_ticker_pane_srt_g

0x45bc,	// (0x00013a83) midp_ticker_pane_srt_t1

0x60b1,	// (0x00015578) midp_editing_number_pane_t1_copy1

0xd39f,	// (0x0001c866) listscroll_midp_pane

0xd39f,	// (0x0001c866) midp_form_pane

0x4456,	// (0x0001391d) midp_info_popup_window_ParamLimits

0x4456,	// (0x0001391d) midp_info_popup_window

0x3763,	// (0x00012c2a) bg_popup_sub_pane_cp50_ParamLimits

0x3763,	// (0x00012c2a) bg_popup_sub_pane_cp50

0x51a3,	// (0x0001466a) listscroll_midp_info_pane_ParamLimits

0x51a3,	// (0x0001466a) listscroll_midp_info_pane

0x5183,	// (0x0001464a) listscroll_form_midp_pane_ParamLimits

0x5183,	// (0x0001464a) listscroll_form_midp_pane

0x518f,	// (0x00014656) scroll_bar_cp050

0x5183,	// (0x0001464a) list_midp_pane

0x7258,	// (0x0001671f) signal_pane_g2_cp

0x509d,	// (0x00014564) listscroll_midp_info_pane_t1_ParamLimits

0x509d,	// (0x00014564) listscroll_midp_info_pane_t1

0x50b5,	// (0x0001457c) listscroll_midp_info_pane_t2_ParamLimits

0x50b5,	// (0x0001457c) listscroll_midp_info_pane_t2

0x50f3,	// (0x000145ba) listscroll_midp_info_pane_t3_ParamLimits

0x50f3,	// (0x000145ba) listscroll_midp_info_pane_t3

0x512d,	// (0x000145f4) listscroll_midp_info_pane_t4_ParamLimits

0x512d,	// (0x000145f4) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0001ece7) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0001ece7) listscroll_midp_info_pane_t

0x3827,	// (0x00012cee) scroll_pane_cp21

0x503b,	// (0x00014502) form_midp_field_choice_group_pane

0x5044,	// (0x0001450b) form_midp_field_text_pane

0x5083,	// (0x0001454a) form_midp_field_time_pane

0x508b,	// (0x00014552) form_midp_gauge_slider_pane

0x5094,	// (0x0001455b) form_midp_gauge_wait_pane

0x2639,	// (0x00011b00) form_midp_image_pane

0xd9fc,	// (0x0001cec3) list_single_midp_pane_ParamLimits

0xd9fc,	// (0x0001cec3) list_single_midp_pane

0xd9db,	// (0x0001cea2) form_midp_field_text_pane_t1

0x4d86,	// (0x0001424d) input_focus_pane_cp050

0x4ffc,	// (0x000144c3) list_midp_form_text_pane

0x4f94,	// (0x0001445b) form_midp_field_choice_group_pane_t1

0x4fa2,	// (0x00014469) input_focus_pane_cp051

0x4fb6,	// (0x0001447d) list_midp_choice_pane

0x2639,	// (0x00011b00) status_idle_pane

0x4f78,	// (0x0001443f) form_midp_field_time_pane_t1

0x262f,	// (0x00011af6) wait_anim_pane_g2_copy1

0x4f86,	// (0x0001444d) form_midp_field_time_pane_t2

0x0001,

0x4504,	// (0x000139cb) aid_navinavi_width_2_pane

0xf81b,	// (0x0001ece2) form_midp_field_time_pane_t

0x2639,	// (0x00011b00) input_focus_pane_cp052

0x2639,	// (0x00011b00) bg_input_focus_pane_cp040

0x4f38,	// (0x000143ff) form_midp_gauge_slider_pane_t1

0x4f46,	// (0x0001440d) form_midp_gauge_slider_pane_t2

0xd9bf,	// (0x0001ce86) form_midp_gauge_slider_pane_t3

0xd9cd,	// (0x0001ce94) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0001ecd9) form_midp_gauge_slider_pane_t

0x4f70,	// (0x00014437) form_midp_slider_pane

0x2719,	// (0x00011be0) bg_input_focus_pane_cp041_ParamLimits

0x2719,	// (0x00011be0) bg_input_focus_pane_cp041

0x4f05,	// (0x000143cc) form_midp_gauge_wait_pane_t1_ParamLimits

0x4f05,	// (0x000143cc) form_midp_gauge_wait_pane_t1

0x4f17,	// (0x000143de) form_midp_gauge_wait_pane_t2_ParamLimits

0x4f17,	// (0x000143de) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x0001ecd4) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x0001ecd4) form_midp_gauge_wait_pane_t

0x4f29,	// (0x000143f0) form_midp_wait_pane_ParamLimits

0x4f29,	// (0x000143f0) form_midp_wait_pane

0x4ecf,	// (0x00014396) form_midp_image_pane_g1

0x4ed8,	// (0x0001439f) form_midp_image_pane_t1

0x4ee7,	// (0x000143ae) form_midp_image_pane_t2

0x4ef6,	// (0x000143bd) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0001eccd) form_midp_image_pane_t

0x4eb7,	// (0x0001437e) list_single_midp_pane_g1

0x4ec0,	// (0x00014387) list_single_midp_pane_t1

0xd9ab,	// (0x0001ce72) list_midp_form_item_pane_ParamLimits

0xd9ab,	// (0x0001ce72) list_midp_form_item_pane

0x44ac,	// (0x00013973) list_midp_form_item_pane_t1

0x44bb,	// (0x00013982) midp_ticker_pane_g1

0x44c7,	// (0x0001398e) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001ec1a) midp_ticker_pane_g

0x44d3,	// (0x0001399a) midp_ticker_pane_t1

0x6335,	// (0x000157fc) midp_editing_number_pane_t1

0x6313,	// (0x000157da) midp_editing_number_pane

0x6322,	// (0x000157e9) midp_ticker_pane

0x6079,	// (0x00015540) ai_message_heading_pane

0x2639,	// (0x00011b00) bg_popup_window_pane_cp14

0x6081,	// (0x00015548) listscroll_ai_message_pane

0x6003,	// (0x000154ca) ai_message_heading_pane_g1_ParamLimits

0x6003,	// (0x000154ca) ai_message_heading_pane_g1

0x600f,	// (0x000154d6) ai_message_heading_pane_g2_ParamLimits

0x600f,	// (0x000154d6) ai_message_heading_pane_g2

0x601b,	// (0x000154e2) ai_message_heading_pane_g3_ParamLimits

0x601b,	// (0x000154e2) ai_message_heading_pane_g3

0x6027,	// (0x000154ee) ai_message_heading_pane_g4_ParamLimits

0x6027,	// (0x000154ee) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x0001ee0e) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x0001ee0e) ai_message_heading_pane_g

0x6033,	// (0x000154fa) ai_message_heading_pane_t1_ParamLimits

0x6033,	// (0x000154fa) ai_message_heading_pane_t1

0x604d,	// (0x00015514) ai_message_heading_pane_t2_ParamLimits

0x604d,	// (0x00015514) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0001ee17) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0001ee17) ai_message_heading_pane_t

0x605f,	// (0x00015526) bg_popup_heading_pane_cp1_ParamLimits

0x605f,	// (0x00015526) bg_popup_heading_pane_cp1

0x5ff1,	// (0x000154b8) list_ai_message_pane_ParamLimits

0x5ff1,	// (0x000154b8) list_ai_message_pane

0x3827,	// (0x00012cee) scroll_pane_cp10

0x5f8d,	// (0x00015454) list_ai_message_pane_g1

0x5f95,	// (0x0001545c) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0001edeb) list_ai_message_pane_g

0x5f9d,	// (0x00015464) list_ai_message_pane_t1_ParamLimits

0x5f9d,	// (0x00015464) list_ai_message_pane_t1

0x5fb2,	// (0x00015479) list_ai_message_pane_t2_ParamLimits

0x5fb2,	// (0x00015479) list_ai_message_pane_t2

0x5fc7,	// (0x0001548e) list_ai_message_pane_t3_ParamLimits

0x5fc7,	// (0x0001548e) list_ai_message_pane_t3

0x5fdc,	// (0x000154a3) list_ai_message_pane_t4_ParamLimits

0x5fdc,	// (0x000154a3) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x0001edf0) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x0001edf0) list_ai_message_pane_t

0xdb45,	// (0x0001d00c) cell_ai_soft_ind_pane_ParamLimits

0xdb45,	// (0x0001d00c) cell_ai_soft_ind_pane

0x44e5,	// (0x000139ac) cell_ai_soft_ind_pane_g1_ParamLimits

0x44e5,	// (0x000139ac) cell_ai_soft_ind_pane_g1

0x2639,	// (0x00011b00) grid_highlight_cp1

0x44f2,	// (0x000139b9) text_secondary_cp56_ParamLimits

0x44f2,	// (0x000139b9) text_secondary_cp56

0x5f4d,	// (0x00015414) example_general_pane_ParamLimits

0x5f4d,	// (0x00015414) example_general_pane

0x5f59,	// (0x00015420) example_parent_pane_g1_ParamLimits

0x5f59,	// (0x00015420) example_parent_pane_g1

0x5f65,	// (0x0001542c) example_parent_pane_t1_ParamLimits

0x5f65,	// (0x0001542c) example_parent_pane_t1

0xbf51,	// (0x0001b418) popup_preview_text_window_ParamLimits

0xbf51,	// (0x0001b418) popup_preview_text_window

0x430f,	// (0x000137d6) list_single_pane_cp2_g4

0x2a8a,	// (0x00011f51) bg_popup_preview_window_pane_ParamLimits

0x2a8a,	// (0x00011f51) bg_popup_preview_window_pane

0x5ca5,	// (0x0001516c) popup_preview_text_window_t1_ParamLimits

0x5ca5,	// (0x0001516c) popup_preview_text_window_t1

0x5cc3,	// (0x0001518a) popup_preview_text_window_t2_ParamLimits

0x5cc3,	// (0x0001518a) popup_preview_text_window_t2

0x5d0c,	// (0x000151d3) popup_preview_text_window_t3_ParamLimits

0x5d0c,	// (0x000151d3) popup_preview_text_window_t3

0x5d51,	// (0x00015218) popup_preview_text_window_t4_ParamLimits

0x5d51,	// (0x00015218) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x0001edbf) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x0001edbf) popup_preview_text_window_t

0x5dcf,	// (0x00015296) scroll_pane_cp11

0x4c64,	// (0x0001412b) bg_popup_preview_window_pane_g1

0x5c65,	// (0x0001512c) bg_popup_preview_window_pane_g2

0x5c6d,	// (0x00015134) bg_popup_preview_window_pane_g3

0x5c75,	// (0x0001513c) bg_popup_preview_window_pane_g4

0x5c7d,	// (0x00015144) bg_popup_preview_window_pane_g5

0x5c85,	// (0x0001514c) bg_popup_preview_window_pane_g6

0x5c8d,	// (0x00015154) bg_popup_preview_window_pane_g7

0x5c95,	// (0x0001515c) bg_popup_preview_window_pane_g8

0x010b,	// (0x0000f5d2) aid_popup_width_pane

0xbecd,	// (0x0001b394) popup_midp_note_alarm_window_ParamLimits

0xbecd,	// (0x0001b394) popup_midp_note_alarm_window

0x3515,	// (0x000129dc) data_form_pane_ParamLimits

0xd01e,	// (0x0001c4e5) form_field_data_pane_g1

0xd028,	// (0x0001c4ef) form_field_data_pane_t1_ParamLimits

0x3543,	// (0x00012a0a) input_focus_pane_ParamLimits

0x3551,	// (0x00012a18) data_form_wide_pane_ParamLimits

0x355d,	// (0x00012a24) form_field_data_wide_pane_g1

0x357d,	// (0x00012a44) form_field_data_wide_pane_t1_ParamLimits

0x2d39,	// (0x00012200) input_focus_pane_cp6_ParamLimits

0xd164,	// (0x0001c62b) input_popup_find_pane_g1_ParamLimits

0xd164,	// (0x0001c62b) input_popup_find_pane_g1

0x0687,	// (0x0000fb4e) aid_navi_side_left_pane

0x069c,	// (0x0000fb63) aid_navi_side_right_pane

0x5672,	// (0x00014b39) bg_popup_window_pane_cp30_ParamLimits

0x5672,	// (0x00014b39) bg_popup_window_pane_cp30

0x56f8,	// (0x00014bbf) popup_midp_note_alarm_window_g1_ParamLimits

0x56f8,	// (0x00014bbf) popup_midp_note_alarm_window_g1

0x5728,	// (0x00014bef) popup_midp_note_alarm_window_t1_ParamLimits

0x5728,	// (0x00014bef) popup_midp_note_alarm_window_t1

0x57c9,	// (0x00014c90) popup_midp_note_alarm_window_t2_ParamLimits

0x57c9,	// (0x00014c90) popup_midp_note_alarm_window_t2

0x5877,	// (0x00014d3e) popup_midp_note_alarm_window_t3_ParamLimits

0x5877,	// (0x00014d3e) popup_midp_note_alarm_window_t3

0x58a9,	// (0x00014d70) popup_midp_note_alarm_window_t4_ParamLimits

0x58a9,	// (0x00014d70) popup_midp_note_alarm_window_t4

0x58cf,	// (0x00014d96) popup_midp_note_alarm_window_t5_ParamLimits

0x58cf,	// (0x00014d96) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0001ed5c) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0001ed5c) popup_midp_note_alarm_window_t

0x597b,	// (0x00014e42) wait_bar_pane_cp1_ParamLimits

0x597b,	// (0x00014e42) wait_bar_pane_cp1

0x2639,	// (0x00011b00) wait_anim_pane_copy1

0x2639,	// (0x00011b00) wait_border_pane_copy1

0x5358,	// (0x0001481f) wait_border_pane_g1_copy1

0x3594,	// (0x00012a5b) form_field_popup_pane_g1

0xd042,	// (0x0001c509) form_field_popup_pane_t1_ParamLimits

0x3543,	// (0x00012a0a) input_focus_pane_cp7_ParamLimits

0x35b4,	// (0x00012a7b) list_form_pane_ParamLimits

0x35c0,	// (0x00012a87) form_field_popup_wide_pane_g1

0x35c8,	// (0x00012a8f) form_field_popup_wide_pane_t1_ParamLimits

0x3543,	// (0x00012a0a) input_focus_pane_cp8_ParamLimits

0x35da,	// (0x00012aa1) list_form_wide_pane_ParamLimits

0xddfb,	// (0x0001d2c2) aid_size_cell_graphic_pane

0xd0c1,	// (0x0001c588) data_form_pane_t1_ParamLimits

0xdcf9,	// (0x0001d1c0) data_form_wide_pane_t1_ParamLimits

0xd630,	// (0x0001caf7) bg_status_flat_pane

0xc8e4,	// (0x0001bdab) title_pane_t1_ParamLimits

0x26e1,	// (0x00011ba8) title_pane_t2_ParamLimits

0x2707,	// (0x00011bce) title_pane_t3_ParamLimits

0xf557,	// (0x0001ea1e) title_pane_t_ParamLimits

0x3ca8,	// (0x0001316f) level_1_signal_ParamLimits

0x3cba,	// (0x00013181) level_2_signal_ParamLimits

0x3ccd,	// (0x00013194) level_3_signal_ParamLimits

0x3ce0,	// (0x000131a7) level_4_signal_ParamLimits

0x3cf3,	// (0x000131ba) level_5_signal_ParamLimits

0x3d06,	// (0x000131cd) level_6_signal_ParamLimits

0x3d19,	// (0x000131e0) level_7_signal_ParamLimits

0x3ca8,	// (0x0001316f) level_1_battery_ParamLimits

0x3cba,	// (0x00013181) level_2_battery_ParamLimits

0x3ccd,	// (0x00013194) level_3_battery_ParamLimits

0x3ce0,	// (0x000131a7) level_4_battery_ParamLimits

0x3cf3,	// (0x000131ba) level_5_battery_ParamLimits

0x3d06,	// (0x000131cd) level_6_battery_ParamLimits

0x3d19,	// (0x000131e0) level_7_battery_ParamLimits

0x5577,	// (0x00014a3e) bg_status_flat_pane_g1

0x557f,	// (0x00014a46) bg_status_flat_pane_g2

0x5587,	// (0x00014a4e) bg_status_flat_pane_g3

0x558f,	// (0x00014a56) bg_status_flat_pane_g4

0x5597,	// (0x00014a5e) bg_status_flat_pane_g5

0x559f,	// (0x00014a66) bg_status_flat_pane_g6

0x55a7,	// (0x00014a6e) bg_status_flat_pane_g7

0xc970,	// (0x0001be37) tabs_3_active_pane_t1_ParamLimits

0xc970,	// (0x0001be37) tabs_3_passive_pane_t1_ParamLimits

0xc982,	// (0x0001be49) tabs_4_active_pane_t1_ParamLimits

0xc982,	// (0x0001be49) tabs_4_1_passive_pane_t1_ParamLimits

0xd172,	// (0x0001c639) tabs_2_active_pane_t1_ParamLimits

0xd172,	// (0x0001c639) tabs_2_passive_pane_t1_ParamLimits

0x2719,	// (0x00011be0) bg_active_tab_pane_cp4_ParamLimits

0xd184,	// (0x0001c64b) tabs_2_long_active_pane_t1_ParamLimits

0x470a,	// (0x00013bd1) bg_passive_tab_pane_cp4_ParamLimits

0x124a,	// (0x00010711) list_single_midp_graphic_pane_t1_ParamLimits

0x2719,	// (0x00011be0) bg_active_tab_pane_cp5_ParamLimits

0xd197,	// (0x0001c65e) tabs_3_long_active_pane_t1_ParamLimits

0x470a,	// (0x00013bd1) bg_passive_tab_pane_cp5_ParamLimits

0x124a,	// (0x00010711) list_single_midp_graphic_pane_t1

0xd630,	// (0x0001caf7) bg_status_flat_pane_ParamLimits

0x48c6,	// (0x00013d8d) indicator_pane_cp2_ParamLimits

0x48c6,	// (0x00013d8d) indicator_pane_cp2

0xd7ae,	// (0x0001cc75) navi_pane_srt_ParamLimits

0xd7ae,	// (0x0001cc75) navi_pane_srt

0x4a15,	// (0x00013edc) popup_clock_digital_analogue_window_cp1

0x2810,	// (0x00011cd7) indicator_pane_t1

0x43de,	// (0x000138a5) copy_highlight_pane

0x43de,	// (0x000138a5) cursor_graphics_pane

0x43de,	// (0x000138a5) graphic_within_text_pane

0x43de,	// (0x000138a5) link_highlight_pane

0x5d92,	// (0x00015259) popup_preview_text_window_t5_ParamLimits

0x5d92,	// (0x00015259) popup_preview_text_window_t5

0x450c,	// (0x000139d3) cursor_digital_pane

0x450c,	// (0x000139d3) cursor_primary_pane

0x451d,	// (0x000139e4) cursor_primary_small_pane

0x4525,	// (0x000139ec) cursor_secondary_pane

0x452d,	// (0x000139f4) cursor_title_pane

0x450c,	// (0x000139d3) link_highlight_digital_pane

0x4514,	// (0x000139db) link_highlight_primary_pane

0x451d,	// (0x000139e4) link_highlight_primary_small_pane

0x4525,	// (0x000139ec) link_highlight_secondary_pane

0x452d,	// (0x000139f4) link_highlight_title_pane

0x450c,	// (0x000139d3) copy_highlight_digital_pane

0x450c,	// (0x000139d3) copy_highlight_primary_pane

0x451d,	// (0x000139e4) copy_highlight_primary_small_pane

0x4525,	// (0x000139ec) copy_highlight_secondary_pane

0x452d,	// (0x000139f4) copy_highlight_title_pane

0x4525,	// (0x000139ec) graphic_text_digital_pane

0x5615,	// (0x00014adc) graphic_text_primary_pane

0x561e,	// (0x00014ae5) graphic_text_primary_small_pane

0x451d,	// (0x000139e4) graphic_text_secondary_pane

0x450c,	// (0x000139d3) graphic_text_title_pane

0xd444,	// (0x0001c90b) cursor_primary_pane_g1

0x5607,	// (0x00014ace) cursor_text_primary_t1

0xda42,	// (0x0001cf09) cursor_primary_small_pane_g1

0x55f9,	// (0x00014ac0) cursor_text_primary_small_t1

0xda38,	// (0x0001ceff) cursor_primary_small_pane_g1_copy1

0x55e1,	// (0x00014aa8) cursor_text_primary_small_t1_copy1

0x55bf,	// (0x00014a86) cursor_text_title_t1

0xda2e,	// (0x0001cef5) cursor_title_pane_g1

0xd444,	// (0x0001c90b) cursor_digital_pane_g1

0x453f,	// (0x00013a06) cursor_text_digital_t1

0x4564,	// (0x00013a2b) link_highlight_primary_pane_g1

0x5568,	// (0x00014a2f) link_highlight_primary_pane_t1

0x454d,	// (0x00013a14) link_highlight_primary_small_pane_g1

0x4555,	// (0x00013a1c) link_highlight_primary_small_pane_t1

0x4564,	// (0x00013a2b) link_highlight_secondary_pane_g1

0x456c,	// (0x00013a33) link_highlight_secondary_pane_t1

0x54dc,	// (0x000149a3) link_highlight_title_pane_g1

0x54e4,	// (0x000149ab) link_highlight_title_pane_t1

0x54c5,	// (0x0001498c) link_highlight_digital_pane_g1

0x54cd,	// (0x00014994) link_highlight_digital_pane_t1

0x539d,	// (0x00014864) copy_highlight_primary_pane_g1

0x53a5,	// (0x0001486c) copy_highlight_primary_pane_t1

0x5377,	// (0x0001483e) copy_highlight_primary_small_pane_g1

0x538e,	// (0x00014855) copy_highlight_primary_small_pane_t1

0x457b,	// (0x00013a42) copy_highlight_secondary_pane_g1

0x4583,	// (0x00013a4a) copy_highlight_secondary_pane_t1

0x5377,	// (0x0001483e) copy_highlight_title_pane_g1

0x537f,	// (0x00014846) copy_highlight_title_pane_t1

0x539d,	// (0x00014864) copy_highlight_digital_pane_g1

0x671f,	// (0x00015be6) copy_highlight_digital_pane_t1

0x6673,	// (0x00015b3a) graphic_text_primary_pane_g1

0x6703,	// (0x00015bca) graphic_text_primary_pane_t1

0x6711,	// (0x00015bd8) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0001ee8b) graphic_text_primary_pane_t

0x66df,	// (0x00015ba6) graphic_text_primary_small_pane_g1

0x66e7,	// (0x00015bae) graphic_text_primary_small_pane_t1

0x66f5,	// (0x00015bbc) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0001ee86) graphic_text_primary_small_pane_t

0x66bb,	// (0x00015b82) graphic_text_secondary_pane_g1

0x66c3,	// (0x00015b8a) graphic_text_secondary_pane_t1

0x66d1,	// (0x00015b98) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x0001ee81) graphic_text_secondary_pane_t

0x6697,	// (0x00015b5e) graphic_text_title_pane_g1

0x669f,	// (0x00015b66) graphic_text_title_pane_t1

0x66ad,	// (0x00015b74) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0001ee7c) graphic_text_title_pane_t

0x6673,	// (0x00015b3a) graphic_text_digital_pane_g1

0x667b,	// (0x00015b42) graphic_text_digital_pane_t1

0x6689,	// (0x00015b50) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0001ee77) graphic_text_digital_pane_t

0x2719,	// (0x00011be0) navi_icon_pane_srt_ParamLimits

0x2719,	// (0x00011be0) navi_icon_pane_srt

0x2639,	// (0x00011b00) navi_midp_pane_srt

0x2639,	// (0x00011b00) navi_navi_pane_srt

0x2719,	// (0x00011be0) navi_text_pane_srt_ParamLimits

0x2719,	// (0x00011be0) navi_text_pane_srt

0x663e,	// (0x00015b05) navi_navi_icon_text_pane_srt

0x6646,	// (0x00015b0d) navi_navi_pane_srt_g1_ParamLimits

0x6646,	// (0x00015b0d) navi_navi_pane_srt_g1

0x6658,	// (0x00015b1f) navi_navi_pane_srt_g2_ParamLimits

0x6658,	// (0x00015b1f) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x0001ee72) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x0001ee72) navi_navi_pane_srt_g

0x666a,	// (0x00015b31) navi_navi_tabs_pane_srt

0x663e,	// (0x00015b05) navi_navi_text_pane_srt

0x663e,	// (0x00015b05) navi_navi_volume_pane_srt

0x662f,	// (0x00015af6) navi_navi_text_pane_srt_t1

0x15c4,	// (0x00010a8b) navi_navi_volume_pane_srt_g1

0x15cc,	// (0x00010a93) volume_small_pane_srt_ParamLimits

0x15cc,	// (0x00010a93) volume_small_pane_srt

0x0967,	// (0x0000fe2e) volume_small_pane_srt_g1_ParamLimits

0x0967,	// (0x0000fe2e) volume_small_pane_srt_g1

0x0977,	// (0x0000fe3e) volume_small_pane_srt_g2_ParamLimits

0x0977,	// (0x0000fe3e) volume_small_pane_srt_g2

0x0988,	// (0x0000fe4f) volume_small_pane_srt_g3_ParamLimits

0x0988,	// (0x0000fe4f) volume_small_pane_srt_g3

0x0999,	// (0x0000fe60) volume_small_pane_srt_g4_ParamLimits

0x0999,	// (0x0000fe60) volume_small_pane_srt_g4

0x09aa,	// (0x0000fe71) volume_small_pane_srt_g5_ParamLimits

0x09aa,	// (0x0000fe71) volume_small_pane_srt_g5

0x09bb,	// (0x0000fe82) volume_small_pane_srt_g6_ParamLimits

0x09bb,	// (0x0000fe82) volume_small_pane_srt_g6

0x09cc,	// (0x0000fe93) volume_small_pane_srt_g7_ParamLimits

0x09cc,	// (0x0000fe93) volume_small_pane_srt_g7

0x09dd,	// (0x0000fea4) volume_small_pane_srt_g8_ParamLimits

0x09dd,	// (0x0000fea4) volume_small_pane_srt_g8

0x09ee,	// (0x0000feb5) volume_small_pane_srt_g9_ParamLimits

0x09ee,	// (0x0000feb5) volume_small_pane_srt_g9

0x09ff,	// (0x0000fec6) volume_small_pane_srt_g10_ParamLimits

0x09ff,	// (0x0000fec6) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001ec1f) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001ec1f) volume_small_pane_srt_g

0x2b33,	// (0x00011ffa) query_popup_data_pane_cp2

0x6615,	// (0x00015adc) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6615,	// (0x00015adc) navi_navi_icon_text_pane_srt_t1

0x5615,	// (0x00014adc) navi_tabs_2_long_pane_srt

0x5615,	// (0x00014adc) navi_tabs_2_pane_srt

0x5615,	// (0x00014adc) navi_tabs_3_long_pane_srt

0x5615,	// (0x00014adc) navi_tabs_3_pane_srt

0x5615,	// (0x00014adc) navi_tabs_4_pane_srt

0x15a4,	// (0x00010a6b) tabs_2_active_pane_srt_ParamLimits

0x15a4,	// (0x00010a6b) tabs_2_active_pane_srt

0x15b4,	// (0x00010a7b) tabs_2_passive_pane_srt_ParamLimits

0x15b4,	// (0x00010a7b) tabs_2_passive_pane_srt

0x4d86,	// (0x0001424d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4d86,	// (0x0001424d) bg_passive_tab_pane_cp1_srt

0x65e1,	// (0x00015aa8) bg_passive_tab_pane_g1_cp1_srt

0x4020,	// (0x000134e7) bg_passive_tab_pane_g2_cp1_srt

0x65ea,	// (0x00015ab1) bg_passive_tab_pane_g3_cp1_srt

0x29ae,	// (0x00011e75) bg_active_tab_pane_cp1_srt_ParamLimits

0x29ae,	// (0x00011e75) bg_active_tab_pane_cp1_srt

0x65f3,	// (0x00015aba) tabs_2_active_pane_srt_g1

0xde3d,	// (0x0001d304) tabs_2_active_pane_srt_t1_ParamLimits

0xde3d,	// (0x0001d304) tabs_2_active_pane_srt_t1

0x65e1,	// (0x00015aa8) bg_active_tab_pane_g1_cp1_srt

0x4020,	// (0x000134e7) bg_active_tab_pane_g2_cp1_srt

0x65ea,	// (0x00015ab1) bg_active_tab_pane_g3_cp1_srt

0x1571,	// (0x00010a38) tabs_3_active_pane_srt_ParamLimits

0x1571,	// (0x00010a38) tabs_3_active_pane_srt

0x1582,	// (0x00010a49) tabs_3_passive_pane_cp_srt_ParamLimits

0x1582,	// (0x00010a49) tabs_3_passive_pane_cp_srt

0x1593,	// (0x00010a5a) tabs_3_passive_pane_srt_ParamLimits

0x1593,	// (0x00010a5a) tabs_3_passive_pane_srt

0x4d86,	// (0x0001424d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4d86,	// (0x0001424d) bg_passive_tab_pane_cp2_srt

0x4592,	// (0x00013a59) bg_passive_tab_pane_g1_cp2_srt

0x4020,	// (0x000134e7) bg_passive_tab_pane_g2_cp2_srt

0x459b,	// (0x00013a62) bg_passive_tab_pane_g3_cp2_srt

0x29ae,	// (0x00011e75) bg_active_tab_pane_cp2_srt_ParamLimits

0x29ae,	// (0x00011e75) bg_active_tab_pane_cp2_srt

0x65c7,	// (0x00015a8e) tabs_3_active_pane_srt_g1

0xde27,	// (0x0001d2ee) tabs_3_active_pane_srt_t1_ParamLimits

0xde27,	// (0x0001d2ee) tabs_3_active_pane_srt_t1

0x4592,	// (0x00013a59) bg_active_tab_pane_g1_cp2_srt

0x4020,	// (0x000134e7) bg_active_tab_pane_g2_cp2_srt

0x459b,	// (0x00013a62) bg_active_tab_pane_g3_cp2_srt

0x1529,	// (0x000109f0) tabs_4_active_pane_srt_ParamLimits

0x1529,	// (0x000109f0) tabs_4_active_pane_srt

0x153b,	// (0x00010a02) tabs_4_passive_pane_cp2_srt_ParamLimits

0x153b,	// (0x00010a02) tabs_4_passive_pane_cp2_srt

0x0b6e,	// (0x00010035) aid_size_cell_toolbar

0x6159,	// (0x00015620) main_idle_act_pane_ParamLimits

0x0d39,	// (0x00010200) popup_large_graphic_colour_window_ParamLimits

0xc1dd,	// (0x0001b6a4) popup_toolbar_window_ParamLimits

0xc1dd,	// (0x0001b6a4) popup_toolbar_window

0x635f,	// (0x00015826) list_single_graphic_2heading_pane_ParamLimits

0x635f,	// (0x00015826) list_single_graphic_2heading_pane

0x3a57,	// (0x00012f1e) aid_size_cell_apps_grid_lsc_pane

0x3a69,	// (0x00012f30) aid_size_cell_apps_grid_prt_pane

0x470a,	// (0x00013bd1) bg_wml_button_pane_cp1_ParamLimits

0x470a,	// (0x00013bd1) bg_wml_button_pane_cp1

0xd9db,	// (0x0001cea2) form_midp_field_text_pane_t1_ParamLimits

0x4d86,	// (0x0001424d) input_focus_pane_cp050_ParamLimits

0x4ffc,	// (0x000144c3) list_midp_form_text_pane_ParamLimits

0x4fa2,	// (0x00014469) input_focus_pane_cp051_ParamLimits

0x4fb6,	// (0x0001447d) list_midp_choice_pane_ParamLimits

0xd979,	// (0x0001ce40) list_single_2graphic_pane_cp3_ParamLimits

0xd979,	// (0x0001ce40) list_single_2graphic_pane_cp3

0xd98c,	// (0x0001ce53) list_single_midp_graphic_pane_ParamLimits

0xd98c,	// (0x0001ce53) list_single_midp_graphic_pane

0x114d,	// (0x00010614) list_single_graphic_2heading_pane_g1_ParamLimits

0x114d,	// (0x00010614) list_single_graphic_2heading_pane_g1

0x1159,	// (0x00010620) list_single_graphic_2heading_pane_g4_ParamLimits

0x1159,	// (0x00010620) list_single_graphic_2heading_pane_g4

0x1165,	// (0x0001062c) list_single_graphic_2heading_pane_g5_ParamLimits

0x1165,	// (0x0001062c) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001ec72) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001ec72) list_single_graphic_2heading_pane_g

0x1171,	// (0x00010638) list_single_graphic_2heading_pane_t1_ParamLimits

0x1171,	// (0x00010638) list_single_graphic_2heading_pane_t1

0x1185,	// (0x0001064c) list_single_graphic_2heading_pane_t2_ParamLimits

0x1185,	// (0x0001064c) list_single_graphic_2heading_pane_t2

0x11a1,	// (0x00010668) list_single_graphic_2heading_pane_t3_ParamLimits

0x11a1,	// (0x00010668) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001ec79) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001ec79) list_single_graphic_2heading_pane_t

0x4b74,	// (0x0001403b) bg_popup_sub_pane_cp2

0x4b9e,	// (0x00014065) grid_toobar_pane

0x11b9,	// (0x00010680) cell_toolbar_pane_ParamLimits

0x11b9,	// (0x00010680) cell_toolbar_pane

0x4c08,	// (0x000140cf) cell_toolbar_pane_g1_ParamLimits

0x4c08,	// (0x000140cf) cell_toolbar_pane_g1

0x4c1c,	// (0x000140e3) cell_toolbar_pane_g2_ParamLimits

0x4c1c,	// (0x000140e3) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001ec87) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001ec87) cell_toolbar_pane_g

0x4c3e,	// (0x00014105) grid_highlight_pane_cp2_ParamLimits

0x4c3e,	// (0x00014105) grid_highlight_pane_cp2

0x4c58,	// (0x0001411f) toolbar_button_pane

0x4c64,	// (0x0001412b) toolbar_button_pane_g1

0x4c6c,	// (0x00014133) toolbar_button_pane_g2

0x4c74,	// (0x0001413b) toolbar_button_pane_g3

0x4c7c,	// (0x00014143) toolbar_button_pane_g4

0x4c84,	// (0x0001414b) toolbar_button_pane_g5

0x4c8c,	// (0x00014153) toolbar_button_pane_g6

0x4c94,	// (0x0001415b) toolbar_button_pane_g7

0x4c9c,	// (0x00014163) toolbar_button_pane_g8

0x4ca4,	// (0x0001416b) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001ec8c) toolbar_button_pane_g

0x11f1,	// (0x000106b8) list_single_2graphic_pane_g1_cp3_ParamLimits

0x11f1,	// (0x000106b8) list_single_2graphic_pane_g1_cp3

0xc235,	// (0x0001b6fc) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc235,	// (0x0001b6fc) list_single_2graphic_pane_g2_cp3

0x120e,	// (0x000106d5) list_single_2graphic_pane_g3_cp3

0x1216,	// (0x000106dd) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1216,	// (0x000106dd) list_single_2graphic_pane_g4_cp3

0x1222,	// (0x000106e9) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1222,	// (0x000106e9) list_single_2graphic_pane_t1_cp3

0x123e,	// (0x00010705) list_single_midp_graphic_pane_g2_ParamLimits

0x123e,	// (0x00010705) list_single_midp_graphic_pane_g2

0x0b76,	// (0x0001003d) aid_zoom_text_primary

0x0b7e,	// (0x00010045) aid_zoom_text_secondary

0xd49c,	// (0x0001c963) status_small_pane_g7_ParamLimits

0xd49c,	// (0x0001c963) status_small_pane_g7

0xd4bf,	// (0x0001c986) status_small_pane_t1_ParamLimits

0xc8c0,	// (0x0001bd87) title_pane_g2

0x0003,

0xf54e,	// (0x0001ea15) title_pane_g

0xcb38,	// (0x0001bfff) aid_size_cell_colour_1_pane_ParamLimits

0xcb38,	// (0x0001bfff) aid_size_cell_colour_1_pane

0xcb4c,	// (0x0001c013) aid_size_cell_colour_2_pane_ParamLimits

0xcb4c,	// (0x0001c013) aid_size_cell_colour_2_pane

0xcb60,	// (0x0001c027) aid_size_cell_colour_3_pane_ParamLimits

0xcb60,	// (0x0001c027) aid_size_cell_colour_3_pane

0xcb74,	// (0x0001c03b) aid_size_cell_colour_4_pane_ParamLimits

0xcb74,	// (0x0001c03b) aid_size_cell_colour_4_pane

0x05c4,	// (0x0000fa8b) title_pane_stacon_g1_ParamLimits

0x05c4,	// (0x0000fa8b) title_pane_stacon_g1

0x53fc,	// (0x000148c3) popup_note_wait_window_g3_ParamLimits

0x53fc,	// (0x000148c3) popup_note_wait_window_g3

0x5472,	// (0x00014939) popup_note_wait_window_t5_ParamLimits

0x5472,	// (0x00014939) popup_note_wait_window_t5

0x2639,	// (0x00011b00) main_feb_china_hwr_fs_writing_pane

0xbbe5,	// (0x0001b0ac) popup_feb_china_hwr_fs_window_ParamLimits

0xbbe5,	// (0x0001b0ac) popup_feb_china_hwr_fs_window

0xc246,	// (0x0001b70d) aid_size_cell_hwr_fs_ParamLimits

0xc246,	// (0x0001b70d) aid_size_cell_hwr_fs

0x4d86,	// (0x0001424d) bg_popup_sub_pane_cp3_ParamLimits

0x4d86,	// (0x0001424d) bg_popup_sub_pane_cp3

0xc25b,	// (0x0001b722) grid_hwr_fs_pane_ParamLimits

0xc25b,	// (0x0001b722) grid_hwr_fs_pane

0x128d,	// (0x00010754) linegrid_hwr_fs_pane_ParamLimits

0x128d,	// (0x00010754) linegrid_hwr_fs_pane

0xc273,	// (0x0001b73a) cell_hwr_fs_pane_ParamLimits

0xc273,	// (0x0001b73a) cell_hwr_fs_pane

0x4d92,	// (0x00014259) linegrid_hwr_fs_pane_g1_ParamLimits

0x4d92,	// (0x00014259) linegrid_hwr_fs_pane_g1

0xd94d,	// (0x0001ce14) linegrid_hwr_fs_pane_g2_ParamLimits

0xd94d,	// (0x0001ce14) linegrid_hwr_fs_pane_g2

0x4db0,	// (0x00014277) linegrid_hwr_fs_pane_g3_ParamLimits

0x4db0,	// (0x00014277) linegrid_hwr_fs_pane_g3

0x12bf,	// (0x00010786) linegrid_hwr_fs_pane_g4_ParamLimits

0x12bf,	// (0x00010786) linegrid_hwr_fs_pane_g4

0x12d9,	// (0x000107a0) linegrid_hwr_fs_pane_g5_ParamLimits

0x12d9,	// (0x000107a0) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x0001ecb2) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x0001ecb2) linegrid_hwr_fs_pane_g

0x4dbc,	// (0x00014283) cell_hwr_fs_pane_g1_ParamLimits

0x4dbc,	// (0x00014283) cell_hwr_fs_pane_g1

0x4aab,	// (0x00013f72) cell_hwr_fs_pane_g2_ParamLimits

0x4aab,	// (0x00013f72) cell_hwr_fs_pane_g2

0xd95f,	// (0x0001ce26) cell_hwr_fs_pane_g3_ParamLimits

0xd95f,	// (0x0001ce26) cell_hwr_fs_pane_g3

0xd96c,	// (0x0001ce33) cell_hwr_fs_pane_g4_ParamLimits

0xd96c,	// (0x0001ce33) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0001ecbd) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001ecbd) cell_hwr_fs_pane_g

0xc299,	// (0x0001b760) cell_hwr_fs_pane_t1

0x2639,	// (0x00011b00) grid_highlight_pane_cp6

0x2639,	// (0x00011b00) main_idle_act2_pane

0x380e,	// (0x00012cd5) aid_inside_area_popup_secondary

0xda4c,	// (0x0001cf13) aid_inside_area_window_primary_ParamLimits

0xda4c,	// (0x0001cf13) aid_inside_area_window_primary

0x672e,	// (0x00015bf5) ai2_news_ticker_pane

0x6736,	// (0x00015bfd) aid_size_cell_ai1_link_ParamLimits

0x6736,	// (0x00015bfd) aid_size_cell_ai1_link

0xde53,	// (0x0001d31a) popup_ai2_data_window_ParamLimits

0xde53,	// (0x0001d31a) popup_ai2_data_window

0x6766,	// (0x00015c2d) popup_ai2_link_window_ParamLimits

0x6766,	// (0x00015c2d) popup_ai2_link_window

0x4d86,	// (0x0001424d) bg_popup_sub_pane_cp4_ParamLimits

0x4d86,	// (0x0001424d) bg_popup_sub_pane_cp4

0x677a,	// (0x00015c41) grid_ai2_link_pane_ParamLimits

0x677a,	// (0x00015c41) grid_ai2_link_pane

0x6791,	// (0x00015c58) popup_ai2_link_window_g1_ParamLimits

0x6791,	// (0x00015c58) popup_ai2_link_window_g1

0x679d,	// (0x00015c64) popup_ai2_link_window_g2_ParamLimits

0x679d,	// (0x00015c64) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x0001ee90) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x0001ee90) popup_ai2_link_window_g

0x67ac,	// (0x00015c73) ai2_mp_button_pane

0x67b4,	// (0x00015c7b) ai2_mp_volume_pane

0x4fa2,	// (0x00014469) bg_popup_sub_pane_cp5_ParamLimits

0x4fa2,	// (0x00014469) bg_popup_sub_pane_cp5

0x67bc,	// (0x00015c83) heading_ai2_gene_pane_ParamLimits

0x67bc,	// (0x00015c83) heading_ai2_gene_pane

0x67c8,	// (0x00015c8f) list_ai2_gene_pane_ParamLimits

0x67c8,	// (0x00015c8f) list_ai2_gene_pane

0x6810,	// (0x00015cd7) cell_ai2_link_pane_ParamLimits

0x6810,	// (0x00015cd7) cell_ai2_link_pane

0x6826,	// (0x00015ced) cell_ai2_link_pane_g1

0x2639,	// (0x00011b00) grid_highlight_pane_cp7

0x15e1,	// (0x00010aa8) ai2_mp_volume_pane_g1

0x68f6,	// (0x00015dbd) ai2_mp_volume_pane_g2

0xde7d,	// (0x0001d344) list_ai2_gene_pane_t1

0x68fe,	// (0x00015dc5) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0001eea9) ai2_mp_volume_pane_g

0x15e9,	// (0x00010ab0) volume_small_pane_cp3

0x6906,	// (0x00015dcd) aid_size_cell_ai2_button

0x690e,	// (0x00015dd5) grid_ai2_button_pane

0x6917,	// (0x00015dde) cell_ai2_button_pane_ParamLimits

0x6917,	// (0x00015dde) cell_ai2_button_pane

0x262f,	// (0x00011af6) cell_ai2_button_pane_g1

0x2639,	// (0x00011b00) grid_highlight_pane_cp8

0x68b6,	// (0x00015d7d) ai2_gene_pane_t1_ParamLimits

0x68b6,	// (0x00015d7d) ai2_gene_pane_t1

0xbb6f,	// (0x0001b036) aid_height_parent_landscape

0xdba5,	// (0x0001d06c) aid_height_set_list

0x6159,	// (0x00015620) aid_size_parent

0xddfb,	// (0x0001d2c2) aid_size_cell_graphic_pane_ParamLimits

0x67d8,	// (0x00015c9f) popup_ai2_data_window_g1_ParamLimits

0x67d8,	// (0x00015c9f) popup_ai2_data_window_g1

0x67e4,	// (0x00015cab) ai2_news_ticker_pane_g1

0x67ec,	// (0x00015cb3) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x0001ee95) ai2_news_ticker_pane_g

0x67f4,	// (0x00015cbb) ai2_news_ticker_pane_t1

0x6802,	// (0x00015cc9) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0001ee9a) ai2_news_ticker_pane_t

0x682f,	// (0x00015cf6) heading_ai2_gene_pane_g1

0x6837,	// (0x00015cfe) heading_ai2_gene_pane_t1_ParamLimits

0x6837,	// (0x00015cfe) heading_ai2_gene_pane_t1

0x684c,	// (0x00015d13) list_highlight_pane_cp6

0xde67,	// (0x0001d32e) ai2_gene_pane_ParamLimits

0xde67,	// (0x0001d32e) ai2_gene_pane

0xde8b,	// (0x0001d352) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x0001ee9f) list_ai2_gene_pane_t

0x6887,	// (0x00015d4e) list_highlight_pane_cp8_ParamLimits

0x6887,	// (0x00015d4e) list_highlight_pane_cp8

0x6898,	// (0x00015d5f) ai2_gene_pane_g1_ParamLimits

0x6898,	// (0x00015d5f) ai2_gene_pane_g1

0x68aa,	// (0x00015d71) ai2_gene_pane_g2_ParamLimits

0x68aa,	// (0x00015d71) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x0001eea4) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x0001eea4) ai2_gene_pane_g

0x2f5e,	// (0x00012425) scroll_pane_cp12

0xbb2c,	// (0x0001aff3) control_pane_t3_ParamLimits

0xbb2c,	// (0x0001aff3) control_pane_t3

0xd4b0,	// (0x0001c977) status_small_pane_g8_ParamLimits

0xd4b0,	// (0x0001c977) status_small_pane_g8

0xbc7a,	// (0x0001b141) popup_find_window_ParamLimits

0xbf07,	// (0x0001b3ce) popup_note_image_window_ParamLimits

0x4bda,	// (0x000140a1) list_double2_graphic_pane_vc_g1_ParamLimits

0x4bda,	// (0x000140a1) list_double2_graphic_pane_vc_g1

0x4317,	// (0x000137de) list_double2_graphic_pane_vc_g2_ParamLimits

0x4317,	// (0x000137de) list_double2_graphic_pane_vc_g2

0x4be6,	// (0x000140ad) list_double2_graphic_pane_vc_g3_ParamLimits

0x4be6,	// (0x000140ad) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001ec80) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001ec80) list_double2_graphic_pane_vc_g

0x4bf2,	// (0x000140b9) list_double2_graphic_pane_vc_t1_ParamLimits

0x4bf2,	// (0x000140b9) list_double2_graphic_pane_vc_t1

0x4317,	// (0x000137de) list_single_heading_pane_vc_g1_ParamLimits

0x4317,	// (0x000137de) list_single_heading_pane_vc_g1

0x4be6,	// (0x000140ad) list_single_heading_pane_vc_g2_ParamLimits

0x4be6,	// (0x000140ad) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ea8f) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ea8f) list_single_heading_pane_vc_g

0x4cac,	// (0x00014173) list_single_heading_pane_vc_t1_ParamLimits

0x4cac,	// (0x00014173) list_single_heading_pane_vc_t1

0x4cc2,	// (0x00014189) list_single_heading_pane_vc_t2_ParamLimits

0x4cc2,	// (0x00014189) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x0001eca1) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x0001eca1) list_single_heading_pane_vc_t

0x4cd4,	// (0x0001419b) list_setting_number_pane_vc_g1_ParamLimits

0x4cd4,	// (0x0001419b) list_setting_number_pane_vc_g1

0x4ce0,	// (0x000141a7) list_setting_number_pane_vc_g2_ParamLimits

0x4ce0,	// (0x000141a7) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0001eca6) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0001eca6) list_setting_number_pane_vc_g

0x4cec,	// (0x000141b3) list_setting_number_pane_vc_t1_ParamLimits

0x4cec,	// (0x000141b3) list_setting_number_pane_vc_t1

0x4d00,	// (0x000141c7) list_setting_number_pane_vc_t2_ParamLimits

0x4d00,	// (0x000141c7) list_setting_number_pane_vc_t2

0x4d1c,	// (0x000141e3) list_setting_number_pane_vc_t3_ParamLimits

0x4d1c,	// (0x000141e3) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0001ecab) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0001ecab) list_setting_number_pane_vc_t

0x4d4a,	// (0x00014211) set_value_pane_vc_ParamLimits

0x4d4a,	// (0x00014211) set_value_pane_vc

0x635f,	// (0x00015826) list_double2_graphic_pane_vc_ParamLimits

0x635f,	// (0x00015826) list_double2_graphic_pane_vc

0x635f,	// (0x00015826) list_double2_large_graphic_pane_vc_ParamLimits

0x635f,	// (0x00015826) list_double2_large_graphic_pane_vc

0x635f,	// (0x00015826) list_double2_pane_vc_ParamLimits

0x635f,	// (0x00015826) list_double2_pane_vc

0x635f,	// (0x00015826) list_double_graphic_heading_pane_vc_ParamLimits

0x635f,	// (0x00015826) list_double_graphic_heading_pane_vc

0x635f,	// (0x00015826) list_double_graphic_pane_vc_ParamLimits

0x635f,	// (0x00015826) list_double_graphic_pane_vc

0x635f,	// (0x00015826) list_double_heading_pane_vc_ParamLimits

0x635f,	// (0x00015826) list_double_heading_pane_vc

0x6371,	// (0x00015838) list_double_large_graphic_pane_vc_ParamLimits

0x6371,	// (0x00015838) list_double_large_graphic_pane_vc

0x635f,	// (0x00015826) list_double_number_pane_vc_ParamLimits

0x635f,	// (0x00015826) list_double_number_pane_vc

0x635f,	// (0x00015826) list_double_pane_vc_ParamLimits

0x635f,	// (0x00015826) list_double_pane_vc

0x635f,	// (0x00015826) list_double_time_pane_vc_ParamLimits

0x635f,	// (0x00015826) list_double_time_pane_vc

0x635f,	// (0x00015826) list_setting_number_pane_vc_ParamLimits

0x635f,	// (0x00015826) list_setting_number_pane_vc

0x635f,	// (0x00015826) list_setting_pane_vc_ParamLimits

0x635f,	// (0x00015826) list_setting_pane_vc

0x635f,	// (0x00015826) list_single_graphic_heading_pane_vc_ParamLimits

0x635f,	// (0x00015826) list_single_graphic_heading_pane_vc

0x635f,	// (0x00015826) list_single_heading_pane_vc_ParamLimits

0x635f,	// (0x00015826) list_single_heading_pane_vc

0x635f,	// (0x00015826) list_single_number_heading_pane_vc_ParamLimits

0x635f,	// (0x00015826) list_single_number_heading_pane_vc

0x4bda,	// (0x000140a1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4bda,	// (0x000140a1) list_double_graphic_heading_pane_vc_g1

0x694b,	// (0x00015e12) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x694b,	// (0x00015e12) list_double_graphic_heading_pane_vc_g2

0x6957,	// (0x00015e1e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6957,	// (0x00015e1e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x0001eeb0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x0001eeb0) list_double_graphic_heading_pane_vc_g

0x6963,	// (0x00015e2a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6963,	// (0x00015e2a) list_double_graphic_heading_pane_vc_t1

0x697f,	// (0x00015e46) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x697f,	// (0x00015e46) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0001eeb7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0001eeb7) list_double_graphic_heading_pane_vc_t

0x4cd4,	// (0x0001419b) list_setting_pane_vc_g1_ParamLimits

0x4cd4,	// (0x0001419b) list_setting_pane_vc_g1

0x4ce0,	// (0x000141a7) list_setting_pane_vc_g2_ParamLimits

0x4ce0,	// (0x000141a7) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0001eca6) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0001eca6) list_setting_pane_vc_g

0x6baa,	// (0x00016071) list_setting_pane_vc_t1_ParamLimits

0x6baa,	// (0x00016071) list_setting_pane_vc_t1

0x6bc6,	// (0x0001608d) list_setting_pane_vc_t2_ParamLimits

0x6bc6,	// (0x0001608d) list_setting_pane_vc_t2

0x0001,

0xfa1e,	// (0x0001eee5) list_setting_pane_vc_t_ParamLimits

0xfa1e,	// (0x0001eee5) list_setting_pane_vc_t

0x4d4a,	// (0x00014211) set_value_pane_cp_vc_ParamLimits

0x4d4a,	// (0x00014211) set_value_pane_cp_vc

0x4317,	// (0x000137de) list_single_number_heading_pane_vc_g1_ParamLimits

0x4317,	// (0x000137de) list_single_number_heading_pane_vc_g1

0x4be6,	// (0x000140ad) list_single_number_heading_pane_vc_g2_ParamLimits

0x4be6,	// (0x000140ad) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ea8f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ea8f) list_single_number_heading_pane_vc_g

0x6be2,	// (0x000160a9) list_single_number_heading_pane_vc_t1_ParamLimits

0x6be2,	// (0x000160a9) list_single_number_heading_pane_vc_t1

0x6bf8,	// (0x000160bf) list_single_number_heading_pane_vc_t2_ParamLimits

0x6bf8,	// (0x000160bf) list_single_number_heading_pane_vc_t2

0x6c0a,	// (0x000160d1) list_single_number_heading_pane_vc_t3_ParamLimits

0x6c0a,	// (0x000160d1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa23,	// (0x0001eeea) list_single_number_heading_pane_vc_t_ParamLimits

0xfa23,	// (0x0001eeea) list_single_number_heading_pane_vc_t

0x4bda,	// (0x000140a1) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4bda,	// (0x000140a1) list_single_graphic_heading_pane_vc_g1

0x4317,	// (0x000137de) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4317,	// (0x000137de) list_single_graphic_heading_pane_vc_g4

0x4be6,	// (0x000140ad) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4be6,	// (0x000140ad) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001ec80) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001ec80) list_single_graphic_heading_pane_vc_g

0x6c1c,	// (0x000160e3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6c1c,	// (0x000160e3) list_single_graphic_heading_pane_vc_t1

0x6c32,	// (0x000160f9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6c32,	// (0x000160f9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2a,	// (0x0001eef1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2a,	// (0x0001eef1) list_single_graphic_heading_pane_vc_t

0x4317,	// (0x000137de) list_double2_pane_vc_g1_ParamLimits

0x4317,	// (0x000137de) list_double2_pane_vc_g1

0x4be6,	// (0x000140ad) list_double2_pane_vc_g2_ParamLimits

0x4be6,	// (0x000140ad) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ea8f) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ea8f) list_double2_pane_vc_g

0x6c44,	// (0x0001610b) list_double2_pane_vc_t1_ParamLimits

0x6c44,	// (0x0001610b) list_double2_pane_vc_t1

0x6c5a,	// (0x00016121) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6c5a,	// (0x00016121) list_double2_large_graphic_pane_vc_g1

0x4317,	// (0x000137de) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4317,	// (0x000137de) list_double2_large_graphic_pane_vc_g2

0x4be6,	// (0x000140ad) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4be6,	// (0x000140ad) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0001eaac) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0001eaac) list_double2_large_graphic_pane_vc_g

0x6c66,	// (0x0001612d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6c66,	// (0x0001612d) list_double2_large_graphic_pane_vc_t1

0x6c7c,	// (0x00016143) list_double_time_pane_vc_g1_ParamLimits

0x6c7c,	// (0x00016143) list_double_time_pane_vc_g1

0x6c88,	// (0x0001614f) list_double_time_pane_vc_g2_ParamLimits

0x6c88,	// (0x0001614f) list_double_time_pane_vc_g2

0x0001,

0xfa2f,	// (0x0001eef6) list_double_time_pane_vc_g_ParamLimits

0xfa2f,	// (0x0001eef6) list_double_time_pane_vc_g

0x6c94,	// (0x0001615b) list_double_time_pane_vc_t1_ParamLimits

0x6c94,	// (0x0001615b) list_double_time_pane_vc_t1

0x6cb8,	// (0x0001617f) list_double_time_pane_vc_t2_ParamLimits

0x6cb8,	// (0x0001617f) list_double_time_pane_vc_t2

0x6ce7,	// (0x000161ae) list_double_time_pane_vc_t3_ParamLimits

0x6ce7,	// (0x000161ae) list_double_time_pane_vc_t3

0x6cf9,	// (0x000161c0) list_double_time_pane_vc_t4_ParamLimits

0x6cf9,	// (0x000161c0) list_double_time_pane_vc_t4

0x0003,

0xfa34,	// (0x0001eefb) list_double_time_pane_vc_t_ParamLimits

0xfa34,	// (0x0001eefb) list_double_time_pane_vc_t

0x4317,	// (0x000137de) list_double_pane_vc_g1_ParamLimits

0x4317,	// (0x000137de) list_double_pane_vc_g1

0x4be6,	// (0x000140ad) list_double_pane_vc_g2_ParamLimits

0x4be6,	// (0x000140ad) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ea8f) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ea8f) list_double_pane_vc_g

0x6d0d,	// (0x000161d4) list_double_pane_vc_t1_ParamLimits

0x6d0d,	// (0x000161d4) list_double_pane_vc_t1

0x6d21,	// (0x000161e8) list_double_pane_vc_t2_ParamLimits

0x6d21,	// (0x000161e8) list_double_pane_vc_t2

0x0001,

0xfa3d,	// (0x0001ef04) list_double_pane_vc_t_ParamLimits

0xfa3d,	// (0x0001ef04) list_double_pane_vc_t

0x4317,	// (0x000137de) list_double_number_pane_vc_g1_ParamLimits

0x4317,	// (0x000137de) list_double_number_pane_vc_g1

0x4be6,	// (0x000140ad) list_double_number_pane_vc_g2_ParamLimits

0x4be6,	// (0x000140ad) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001ea8f) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001ea8f) list_double_number_pane_vc_g

0x6d39,	// (0x00016200) list_double_number_pane_vc_t1_ParamLimits

0x6d39,	// (0x00016200) list_double_number_pane_vc_t1

0x6d4b,	// (0x00016212) list_double_number_pane_vc_t2_ParamLimits

0x6d4b,	// (0x00016212) list_double_number_pane_vc_t2

0x6d5f,	// (0x00016226) list_double_number_pane_vc_t3_ParamLimits

0x6d5f,	// (0x00016226) list_double_number_pane_vc_t3

0x0002,

0xfa42,	// (0x0001ef09) list_double_number_pane_vc_t_ParamLimits

0xfa42,	// (0x0001ef09) list_double_number_pane_vc_t

0x6d77,	// (0x0001623e) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6d77,	// (0x0001623e) list_double_large_graphic_pane_vc_g1

0x6d99,	// (0x00016260) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6d99,	// (0x00016260) list_double_large_graphic_pane_vc_g2

0x6dad,	// (0x00016274) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6dad,	// (0x00016274) list_double_large_graphic_pane_vc_g3

0x6dbc,	// (0x00016283) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6dbc,	// (0x00016283) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa49,	// (0x0001ef10) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa49,	// (0x0001ef10) list_double_large_graphic_pane_vc_g

0x6dc8,	// (0x0001628f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6dc8,	// (0x0001628f) list_double_large_graphic_pane_vc_t1

0x6de4,	// (0x000162ab) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6de4,	// (0x000162ab) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa52,	// (0x0001ef19) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa52,	// (0x0001ef19) list_double_large_graphic_pane_vc_t

0x694b,	// (0x00015e12) list_double_heading_pane_vc_g1_ParamLimits

0x694b,	// (0x00015e12) list_double_heading_pane_vc_g1

0x6957,	// (0x00015e1e) list_double_heading_pane_vc_g2_ParamLimits

0x6957,	// (0x00015e1e) list_double_heading_pane_vc_g2

0x0001,

0xfa57,	// (0x0001ef1e) list_double_heading_pane_vc_g_ParamLimits

0xfa57,	// (0x0001ef1e) list_double_heading_pane_vc_g

0x6e06,	// (0x000162cd) list_double_heading_pane_vc_t1_ParamLimits

0x6e06,	// (0x000162cd) list_double_heading_pane_vc_t1

0x6e1a,	// (0x000162e1) list_double_heading_pane_vc_t2_ParamLimits

0x6e1a,	// (0x000162e1) list_double_heading_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001ef23) list_double_heading_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001ef23) list_double_heading_pane_vc_t

0x6e32,	// (0x000162f9) list_double_graphic_pane_vc_g1_ParamLimits

0x6e32,	// (0x000162f9) list_double_graphic_pane_vc_g1

0x6e3e,	// (0x00016305) list_double_graphic_pane_vc_g2_ParamLimits

0x6e3e,	// (0x00016305) list_double_graphic_pane_vc_g2

0x4317,	// (0x000137de) list_double_graphic_pane_vc_g3_ParamLimits

0x4317,	// (0x000137de) list_double_graphic_pane_vc_g3

0x0003,

0xfa61,	// (0x0001ef28) list_double_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x0001ef28) list_double_graphic_pane_vc_g

0x6e5b,	// (0x00016322) list_double_graphic_pane_vc_t1_ParamLimits

0x6e5b,	// (0x00016322) list_double_graphic_pane_vc_t1

0x6e85,	// (0x0001634c) list_double_graphic_pane_vc_t2_ParamLimits

0x6e85,	// (0x0001634c) list_double_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x0001ef31) list_double_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001ef31) list_double_graphic_pane_vc_t

0x0117,	// (0x0000f5de) aid_size_cell_fastswap

0xb7ef,	// (0x0001acb6) aid_size_cell_touch_ParamLimits

0xb7ef,	// (0x0001acb6) aid_size_cell_touch

0x0384,	// (0x0000f84b) popup_fast_swap_wide_window_ParamLimits

0x0384,	// (0x0000f84b) popup_fast_swap_wide_window

0xb99f,	// (0x0001ae66) touch_pane_ParamLimits

0xb99f,	// (0x0001ae66) touch_pane

0x345d,	// (0x00012924) button_value_adjust_pane_cp2

0x3465,	// (0x0001292c) button_value_adjust_pane_cp4

0x3487,	// (0x0001294e) form_field_data_pane_cp2

0xcfe5,	// (0x0001c4ac) form_field_data_wide_pane_cp2

0x3b26,	// (0x00012fed) bg_scroll_pane_ParamLimits

0x0726,	// (0x0000fbed) scroll_handle_pane_ParamLimits

0x073a,	// (0x0000fc01) scroll_sc2_down_pane_ParamLimits

0x073a,	// (0x0000fc01) scroll_sc2_down_pane

0x3b57,	// (0x0001301e) scroll_sc2_up_pane_ParamLimits

0x3b57,	// (0x0001301e) scroll_sc2_up_pane

0xdfab,	// (0x0001d472) grid_wheel_folder_pane_g1_ParamLimits

0xdfab,	// (0x0001d472) grid_wheel_folder_pane_g1

0x08ff,	// (0x0000fdc6) clock_nsta_pane_cp2_ParamLimits

0x08ff,	// (0x0000fdc6) clock_nsta_pane_cp2

0xd39f,	// (0x0001c866) listscroll_midp_pane_ParamLimits

0xd3ab,	// (0x0001c872) midp_canvas_pane

0x46da,	// (0x00013ba1) nsta_clock_indic_pane

0x4716,	// (0x00013bdd) listscroll_form_pane_vc

0x471e,	// (0x00013be5) listscroll_set_pane_vc_ParamLimits

0x471e,	// (0x00013be5) listscroll_set_pane_vc

0xd658,	// (0x0001cb1f) clock_nsta_pane

0xd682,	// (0x0001cb49) indicator_nsta_pane

0x4b74,	// (0x0001403b) bg_popup_sub_pane_cp2_ParamLimits

0x4b88,	// (0x0001404f) find_pane_cp2_ParamLimits

0x4b88,	// (0x0001404f) find_pane_cp2

0x4b9e,	// (0x00014065) grid_toobar_pane_ParamLimits

0x4d5a,	// (0x00014221) list_form_gen_pane_vc_ParamLimits

0x4d5a,	// (0x00014221) list_form_gen_pane_vc

0x4d70,	// (0x00014237) scroll_pane_cp8_vc_ParamLimits

0x4d70,	// (0x00014237) scroll_pane_cp8_vc

0x4dec,	// (0x000142b3) data_form_wide_pane_vc_ParamLimits

0x4dec,	// (0x000142b3) data_form_wide_pane_vc

0x4df8,	// (0x000142bf) form_field_data_wide_pane_vc_g1

0x4e00,	// (0x000142c7) form_field_data_wide_pane_vc_t1_ParamLimits

0x4e00,	// (0x000142c7) form_field_data_wide_pane_vc_t1

0x3543,	// (0x00012a0a) input_focus_pane_cp6_vc_ParamLimits

0x3543,	// (0x00012a0a) input_focus_pane_cp6_vc

0x5183,	// (0x0001464a) list_midp_pane_ParamLimits

0x65bb,	// (0x00015a82) scroll_pane_cp16_ParamLimits

0x65bb,	// (0x00015a82) scroll_pane_cp16

0x51d1,	// (0x00014698) button_value_adjust_pane_ParamLimits

0x51d1,	// (0x00014698) button_value_adjust_pane

0xdbb6,	// (0x0001d07d) button_value_adjust_pane_cp6_ParamLimits

0xdbb6,	// (0x0001d07d) button_value_adjust_pane_cp6

0xdcd0,	// (0x0001d197) settings_code_pane_cp_ParamLimits

0xdcd0,	// (0x0001d197) settings_code_pane_cp

0x262f,	// (0x00011af6) cell_touch_pane_g1

0x262f,	// (0x00011af6) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001ebc5) cell_touch_pane_g

0xde99,	// (0x0001d360) cell_touch_pane_cp_ParamLimits

0xde99,	// (0x0001d360) cell_touch_pane_cp

0xdeb5,	// (0x0001d37c) cell_touch_pane_ParamLimits

0xdeb5,	// (0x0001d37c) cell_touch_pane

0x262f,	// (0x00011af6) scroll_sc2_down_pane_g1

0x262f,	// (0x00011af6) scroll_sc2_up_pane_g1

0x2639,	// (0x00011b00) bg_set_opt_pane_cp4_vc

0x699d,	// (0x00015e64) list_set_graphic_pane_vc_g1_ParamLimits

0x699d,	// (0x00015e64) list_set_graphic_pane_vc_g1

0x69a9,	// (0x00015e70) list_set_graphic_pane_vc_g2_ParamLimits

0x69a9,	// (0x00015e70) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0001eebc) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0001eebc) list_set_graphic_pane_vc_g

0x69b5,	// (0x00015e7c) text_primary_small_cp13_vc_ParamLimits

0x69b5,	// (0x00015e7c) text_primary_small_cp13_vc

0x69cd,	// (0x00015e94) list_set_graphic_pane_vc_ParamLimits

0x69cd,	// (0x00015e94) list_set_graphic_pane_vc

0x2639,	// (0x00011b00) input_focus_pane_cp2_vc

0x262f,	// (0x00011af6) setting_code_pane_vc_g1

0x2764,	// (0x00011c2b) setting_code_pane_vc_t1

0x69df,	// (0x00015ea6) set_text_pane_vc_t1_ParamLimits

0x69df,	// (0x00015ea6) set_text_pane_vc_t1

0x2639,	// (0x00011b00) input_focus_pane_cp1_vc

0x69fb,	// (0x00015ec2) list_set_text_pane_vc

0x262f,	// (0x00011af6) setting_text_pane_vc_g1

0x2639,	// (0x00011b00) bg_set_opt_pane_cp2_vc

0x275b,	// (0x00011c22) setting_slider_graphic_pane_vc_g1

0x6a05,	// (0x00015ecc) setting_slider_graphic_pane_vc_t1

0x6a15,	// (0x00015edc) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x0001eec1) setting_slider_graphic_pane_vc_t

0x6a25,	// (0x00015eec) slider_set_pane_cp_vc

0x6a2d,	// (0x00015ef4) slider_set_pane_vc_g1

0x6a36,	// (0x00015efd) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0001eec6) slider_set_pane_vc_g

0x3666,	// (0x00012b2d) set_opt_bg_pane_g1_copy1

0x366e,	// (0x00012b35) set_opt_bg_pane_g2_copy1

0x6a62,	// (0x00015f29) set_opt_bg_pane_g3_copy1

0x367e,	// (0x00012b45) set_opt_bg_pane_g4_copy1

0x3686,	// (0x00012b4d) set_opt_bg_pane_g5_copy1

0x368e,	// (0x00012b55) set_opt_bg_pane_g6_copy1

0x6a6c,	// (0x00015f33) set_opt_bg_pane_g7_copy1

0x6a74,	// (0x00015f3b) set_opt_bg_pane_g8_copy1

0x6a7e,	// (0x00015f45) set_opt_bg_pane_g9_copy1

0x2639,	// (0x00011b00) bg_set_opt_pane_cp_vc

0x6a88,	// (0x00015f4f) setting_slider_pane_vc_t1

0x6a97,	// (0x00015f5e) setting_slider_pane_vc_t2

0x6aa7,	// (0x00015f6e) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001eed5) setting_slider_pane_vc_t

0x6ab7,	// (0x00015f7e) slider_set_pane_vc

0x12fd,	// (0x000107c4) volume_set_pane_vc_g1

0x1306,	// (0x000107cd) volume_set_pane_vc_g2

0x130f,	// (0x000107d6) volume_set_pane_vc_g3

0x1318,	// (0x000107df) volume_set_pane_vc_g4

0x1321,	// (0x000107e8) volume_set_pane_vc_g5

0x132a,	// (0x000107f1) volume_set_pane_vc_g6

0x1333,	// (0x000107fa) volume_set_pane_vc_g7

0x133c,	// (0x00010803) volume_set_pane_vc_g8

0x1345,	// (0x0001080c) volume_set_pane_vc_g9

0x134e,	// (0x00010815) volume_set_pane_vc_g10

0x0009,

0xf8ac,	// (0x0001ed73) volume_set_pane_vc_g

0x6abf,	// (0x00015f86) volume_set_pane_vc

0x6ac7,	// (0x00015f8e) button_value_adjust_pane_cp1_vc

0x6ad1,	// (0x00015f98) list_highlight_pane_cp2_vc

0x6ada,	// (0x00015fa1) list_set_pane_vc_ParamLimits

0x6ada,	// (0x00015fa1) list_set_pane_vc

0x6b38,	// (0x00015fff) main_pane_set_vc_t1_ParamLimits

0x6b38,	// (0x00015fff) main_pane_set_vc_t1

0x6b4d,	// (0x00016014) main_pane_set_vc_t2_ParamLimits

0x6b4d,	// (0x00016014) main_pane_set_vc_t2

0x6b5f,	// (0x00016026) main_pane_set_vc_t3_ParamLimits

0x6b5f,	// (0x00016026) main_pane_set_vc_t3

0x6b73,	// (0x0001603a) main_pane_set_vc_t4_ParamLimits

0x6b73,	// (0x0001603a) main_pane_set_vc_t4

0x0003,

0xfa15,	// (0x0001eedc) main_pane_set_vc_t_ParamLimits

0xfa15,	// (0x0001eedc) main_pane_set_vc_t

0x6b87,	// (0x0001604e) setting_code_pane_vc_ParamLimits

0x6b87,	// (0x0001604e) setting_code_pane_vc

0x6b98,	// (0x0001605f) setting_slider_graphic_pane_vc

0x6b98,	// (0x0001605f) setting_slider_pane_vc

0x6b98,	// (0x0001605f) setting_text_pane_vc

0x6b98,	// (0x0001605f) setting_volume_pane_vc

0x6ba2,	// (0x00016069) scroll_pane_cp121_vc

0x344b,	// (0x00012912) set_content_pane_vc

0x6eaf,	// (0x00016376) button_value_adjust_pane_g1

0x6eb8,	// (0x0001637f) button_value_adjust_pane_g2

0x0001,

0xfa6f,	// (0x0001ef36) button_value_adjust_pane_g

0x6ec1,	// (0x00016388) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6ec1,	// (0x00016388) form_field_slider_wide_pane_vc_t1

0x6ed5,	// (0x0001639c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6ed5,	// (0x0001639c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa74,	// (0x0001ef3b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa74,	// (0x0001ef3b) form_field_slider_wide_pane_vc_t

0x29ae,	// (0x00011e75) input_focus_pane_cp10_vc_ParamLimits

0x29ae,	// (0x00011e75) input_focus_pane_cp10_vc

0x6f03,	// (0x000163ca) slider_cont_pane_cp1_vc_ParamLimits

0x6f03,	// (0x000163ca) slider_cont_pane_cp1_vc

0x6f15,	// (0x000163dc) slider_form_pane_g1_cp2

0x6a36,	// (0x00015efd) slider_form_pane_g2_cp2

0x6f42,	// (0x00016409) form_field_slider_pane_vc_t3

0x6f50,	// (0x00016417) form_field_slider_pane_vc_t4

0x6f5e,	// (0x00016425) slider_form_pane_vc_ParamLimits

0x6f5e,	// (0x00016425) slider_form_pane_vc

0x6f6b,	// (0x00016432) form_field_slider_pane_vc_t1_ParamLimits

0x6f6b,	// (0x00016432) form_field_slider_pane_vc_t1

0x6ed5,	// (0x0001639c) form_field_slider_pane_vc_t2_ParamLimits

0x6ed5,	// (0x0001639c) form_field_slider_pane_vc_t2

0x0001,

0xfa86,	// (0x0001ef4d) form_field_slider_pane_vc_t_ParamLimits

0xfa86,	// (0x0001ef4d) form_field_slider_pane_vc_t

0x29ae,	// (0x00011e75) input_focus_pane_cp9_vc_ParamLimits

0x29ae,	// (0x00011e75) input_focus_pane_cp9_vc

0x6f87,	// (0x0001644e) slider_cont_pane_vc_ParamLimits

0x6f87,	// (0x0001644e) slider_cont_pane_vc

0x6f9b,	// (0x00016462) list_form_graphic_pane_cp_vc_ParamLimits

0x6f9b,	// (0x00016462) list_form_graphic_pane_cp_vc

0x4df8,	// (0x000142bf) form_field_popup_wide_pane_vc_g1

0x6fb0,	// (0x00016477) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6fb0,	// (0x00016477) form_field_popup_wide_pane_vc_t1

0x3543,	// (0x00012a0a) input_focus_pane_cp8_vc_ParamLimits

0x3543,	// (0x00012a0a) input_focus_pane_cp8_vc

0x6ff5,	// (0x000164bc) list_form_wide_pane_vc_ParamLimits

0x6ff5,	// (0x000164bc) list_form_wide_pane_vc

0x7001,	// (0x000164c8) list_form_graphic_pane_vc_g1

0x7009,	// (0x000164d0) list_form_graphic_pane_vc_t1_ParamLimits

0x7009,	// (0x000164d0) list_form_graphic_pane_vc_t1

0x2719,	// (0x00011be0) list_highlight_pane_cp5_vc_ParamLimits

0x2719,	// (0x00011be0) list_highlight_pane_cp5_vc

0x7025,	// (0x000164ec) list_form_graphic_pane_vc_ParamLimits

0x7025,	// (0x000164ec) list_form_graphic_pane_vc

0x4df8,	// (0x000142bf) form_field_popup_pane_vc_g1

0x703b,	// (0x00016502) form_field_popup_pane_vc_t1_ParamLimits

0x703b,	// (0x00016502) form_field_popup_pane_vc_t1

0x3543,	// (0x00012a0a) input_focus_pane_cp7_vc_ParamLimits

0x3543,	// (0x00012a0a) input_focus_pane_cp7_vc

0x7052,	// (0x00016519) list_form_pane_vc_ParamLimits

0x7052,	// (0x00016519) list_form_pane_vc

0x705e,	// (0x00016525) data_form_pane_vc_t1_ParamLimits

0x705e,	// (0x00016525) data_form_pane_vc_t1

0x3666,	// (0x00012b2d) input_focus_pane_vc_g1

0x366e,	// (0x00012b35) input_focus_pane_vc_g2

0x3676,	// (0x00012b3d) input_focus_pane_vc_g3

0x367e,	// (0x00012b45) input_focus_pane_vc_g4

0x3686,	// (0x00012b4d) input_focus_pane_vc_g5

0x368e,	// (0x00012b55) input_focus_pane_vc_g6

0x3696,	// (0x00012b5d) input_focus_pane_vc_g7

0x369e,	// (0x00012b65) input_focus_pane_vc_g8

0x36a6,	// (0x00012b6d) input_focus_pane_vc_g9

0x262f,	// (0x00011af6) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001eb4e) input_focus_pane_vc_g

0x4dec,	// (0x000142b3) data_form_pane_vc_ParamLimits

0x4dec,	// (0x000142b3) data_form_pane_vc

0x4df8,	// (0x000142bf) form_field_data_pane_vc_g1

0x7079,	// (0x00016540) form_field_data_pane_vc_t1_ParamLimits

0x7079,	// (0x00016540) form_field_data_pane_vc_t1

0x3543,	// (0x00012a0a) input_focus_pane_vc_ParamLimits

0x3543,	// (0x00012a0a) input_focus_pane_vc

0x7093,	// (0x0001655a) button_value_adjust_pane_cp3_vc

0x709b,	// (0x00016562) button_value_adjust_pane_cp5_vc

0x70a3,	// (0x0001656a) form_field_data_pane_vc_ParamLimits

0x70a3,	// (0x0001656a) form_field_data_pane_vc

0x70ba,	// (0x00016581) form_field_data_pane_vc_cp2

0x70c2,	// (0x00016589) form_field_data_wide_pane_vc_ParamLimits

0x70c2,	// (0x00016589) form_field_data_wide_pane_vc

0x70d8,	// (0x0001659f) form_field_data_wide_pane_vc_cp2

0x70e0,	// (0x000165a7) form_field_popup_pane_vc_ParamLimits

0x70e0,	// (0x000165a7) form_field_popup_pane_vc

0x70f7,	// (0x000165be) form_field_popup_wide_pane_vc_ParamLimits

0x70f7,	// (0x000165be) form_field_popup_wide_pane_vc

0x710d,	// (0x000165d4) form_field_slider_pane_vc_ParamLimits

0x710d,	// (0x000165d4) form_field_slider_pane_vc

0x7120,	// (0x000165e7) form_field_slider_wide_pane_vc_ParamLimits

0x7120,	// (0x000165e7) form_field_slider_wide_pane_vc

0xded3,	// (0x0001d39a) grid_touch_1_pane_ParamLimits

0xded3,	// (0x0001d39a) grid_touch_1_pane

0xdee7,	// (0x0001d3ae) grid_touch_2_pane_ParamLimits

0xdee7,	// (0x0001d3ae) grid_touch_2_pane

0x71ee,	// (0x000166b5) touch_pane_g1_ParamLimits

0x71ee,	// (0x000166b5) touch_pane_g1

0x7157,	// (0x0001661e) cell_app_pane_cp_wide_ParamLimits

0x7157,	// (0x0001661e) cell_app_pane_cp_wide

0x7168,	// (0x0001662f) grid_popup_fast_wide_pane_ParamLimits

0x7168,	// (0x0001662f) grid_popup_fast_wide_pane

0x717c,	// (0x00016643) scroll_pane_cp19_ParamLimits

0x717c,	// (0x00016643) scroll_pane_cp19

0x2639,	// (0x00011b00) bg_popup_window_pane_cp20

0x7190,	// (0x00016657) listscroll_popup_fast_wide_pane

0x387a,	// (0x00012d41) grid_indicator_nsta_pane

0x7198,	// (0x0001665f) clock_nsta_pane_g1

0x71a1,	// (0x00016668) clock_nsta_pane_t1

0xdf11,	// (0x0001d3d8) cell_indicator_nsta_pane_ParamLimits

0xdf11,	// (0x0001d3d8) cell_indicator_nsta_pane

0x71ee,	// (0x000166b5) cell_indicator_nsta_pane_g1

0xdf28,	// (0x0001d3ef) cell_indicator_nsta_pane_g2

0x0001,

0xfa97,	// (0x0001ef5e) cell_indicator_nsta_pane_g

0x7209,	// (0x000166d0) clock_nsta_pane_cp

0x7212,	// (0x000166d9) indicator_nsta_pane_cp

0x721a,	// (0x000166e1) nsta_clock_indic_pane_g1

0x27fc,	// (0x00011cc3) grid_indicator_pane

0x3c4c,	// (0x00013113) scroll_pane_cp29

0x084e,	// (0x0000fd15) indicator_nsta_pane_cp2_ParamLimits

0x084e,	// (0x0000fd15) indicator_nsta_pane_cp2

0x2719,	// (0x00011be0) main_apps_wheel_pane

0x5044,	// (0x0001450b) form_midp_field_text_pane_ParamLimits

0x518f,	// (0x00014656) scroll_bar_cp050_ParamLimits

0x726a,	// (0x00016731) cell_indicator_pane_ParamLimits

0x726a,	// (0x00016731) cell_indicator_pane

0x7281,	// (0x00016748) cell_indicator_pane_g1

0xdf35,	// (0x0001d3fc) grid_wheel_folder_pane_ParamLimits

0xdf35,	// (0x0001d3fc) grid_wheel_folder_pane

0xdf43,	// (0x0001d40a) list_wheel_apps_pane_ParamLimits

0xdf43,	// (0x0001d40a) list_wheel_apps_pane

0xdf51,	// (0x0001d418) main_apps_wheel_pane_g1_ParamLimits

0xdf51,	// (0x0001d418) main_apps_wheel_pane_g1

0xdf5d,	// (0x0001d424) main_apps_wheel_pane_g2_ParamLimits

0xdf5d,	// (0x0001d424) main_apps_wheel_pane_g2

0x0001,

0xfab3,	// (0x0001ef7a) main_apps_wheel_pane_g_ParamLimits

0xfab3,	// (0x0001ef7a) main_apps_wheel_pane_g

0xdf6b,	// (0x0001d432) main_apps_wheel_pane_t1_ParamLimits

0xdf6b,	// (0x0001d432) main_apps_wheel_pane_t1

0xdf7f,	// (0x0001d446) list_wheel_apps_pane_g1

0xdf87,	// (0x0001d44e) list_wheel_apps_pane_g2

0xdf8f,	// (0x0001d456) list_wheel_apps_pane_g3

0xdf97,	// (0x0001d45e) list_wheel_apps_pane_g4

0xdfa1,	// (0x0001d468) list_wheel_apps_pane_g5

0x0004,

0xfab8,	// (0x0001ef7f) list_wheel_apps_pane_g

0x425e,	// (0x00013725) navi_icon_text_pane

0xd54c,	// (0x0001ca13) aid_fill_nsta

0x7346,	// (0x0001680d) navi_icon_text_pane_g1

0x7352,	// (0x00016819) navi_icon_text_pane_t1

0x40f1,	// (0x000135b8) list_set_graphic_pane_t1_ParamLimits

0x40f1,	// (0x000135b8) list_set_graphic_pane_t1

0x58fe,	// (0x00014dc5) popup_midp_note_alarm_window_t6_ParamLimits

0x58fe,	// (0x00014dc5) popup_midp_note_alarm_window_t6

0x5910,	// (0x00014dd7) popup_midp_note_alarm_window_t7_ParamLimits

0x5910,	// (0x00014dd7) popup_midp_note_alarm_window_t7

0x5922,	// (0x00014de9) popup_midp_note_alarm_window_t8_ParamLimits

0x5922,	// (0x00014de9) popup_midp_note_alarm_window_t8

0x5934,	// (0x00014dfb) popup_midp_note_alarm_window_t9_ParamLimits

0x5934,	// (0x00014dfb) popup_midp_note_alarm_window_t9

0x5946,	// (0x00014e0d) popup_midp_note_alarm_window_t10_ParamLimits

0x5946,	// (0x00014e0d) popup_midp_note_alarm_window_t10

0x5958,	// (0x00014e1f) popup_midp_note_alarm_window_t11_ParamLimits

0x5958,	// (0x00014e1f) popup_midp_note_alarm_window_t11

0x596a,	// (0x00014e31) scroll_pane_cp17_ParamLimits

0x596a,	// (0x00014e31) scroll_pane_cp17

0x12fd,	// (0x000107c4) volume_small_pane_cp_g1

0x15f2,	// (0x00010ab9) volume_small_pane_cp_g2

0x15fb,	// (0x00010ac2) volume_small_pane_cp_g3

0x1604,	// (0x00010acb) volume_small_pane_cp_g4

0x160d,	// (0x00010ad4) volume_small_pane_cp_g5

0x1616,	// (0x00010add) volume_small_pane_cp_g6

0x161f,	// (0x00010ae6) volume_small_pane_cp_g7

0x1628,	// (0x00010aef) volume_small_pane_cp_g8

0x1631,	// (0x00010af8) volume_small_pane_cp_g9

0x163a,	// (0x00010b01) volume_small_pane_cp_g10

0x44bb,	// (0x00013982) midp_ticker_pane_g1_ParamLimits

0x44c7,	// (0x0001398e) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001ec1a) midp_ticker_pane_g_ParamLimits

0x44d3,	// (0x0001399a) midp_ticker_pane_t1_ParamLimits

0xd570,	// (0x0001ca37) aid_fill_nsta_2

0x517b,	// (0x00014642) list_form2_midp_pane

0x6313,	// (0x000157da) midp_editing_number_pane_ParamLimits

0x6322,	// (0x000157e9) midp_ticker_pane_ParamLimits

0x7364,	// (0x0001682b) form2_midp_field_pane

0x7388,	// (0x0001684f) scroll_pane_cp51

0x73a8,	// (0x0001686f) form2_midp_button_pane_ParamLimits

0x73a8,	// (0x0001686f) form2_midp_button_pane

0x73ba,	// (0x00016881) form2_midp_content_pane_ParamLimits

0x73ba,	// (0x00016881) form2_midp_content_pane

0x73d4,	// (0x0001689b) form2_midp_field_choice_group_pane

0x73dc,	// (0x000168a3) form2_midp_field_pane_g1

0x73e4,	// (0x000168ab) form2_midp_field_pane_g2

0x73ec,	// (0x000168b3) form2_midp_field_pane_g3

0x73f4,	// (0x000168bb) form2_midp_field_pane_g4

0x0003,

0xfadd,	// (0x0001efa4) form2_midp_field_pane_g

0x73fc,	// (0x000168c3) form2_midp_gauge_slider_pane

0x7404,	// (0x000168cb) form2_midp_gauge_wait_pane

0x740c,	// (0x000168d3) form2_midp_image_pane_ParamLimits

0x740c,	// (0x000168d3) form2_midp_image_pane

0x7427,	// (0x000168ee) form2_midp_label_pane_ParamLimits

0x7427,	// (0x000168ee) form2_midp_label_pane

0xdfd4,	// (0x0001d49b) form2_midp_label_pane_cp_ParamLimits

0xdfd4,	// (0x0001d49b) form2_midp_label_pane_cp

0x7461,	// (0x00016928) form2_midp_string_pane_ParamLimits

0x7461,	// (0x00016928) form2_midp_string_pane

0xdff3,	// (0x0001d4ba) form2_midp_text_pane_ParamLimits

0xdff3,	// (0x0001d4ba) form2_midp_text_pane

0x7490,	// (0x00016957) form2_midp_time_pane

0x74a0,	// (0x00016967) input_focus_pane_cp51_ParamLimits

0x74a0,	// (0x00016967) input_focus_pane_cp51

0x74b8,	// (0x0001697f) form2_midp_label_pane_t1_ParamLimits

0x74b8,	// (0x0001697f) form2_midp_label_pane_t1

0xe00c,	// (0x0001d4d3) form2_mdip_text_pane_t1_ParamLimits

0xe00c,	// (0x0001d4d3) form2_mdip_text_pane_t1

0x7518,	// (0x000169df) form2_midp_time_pane_t1

0x7533,	// (0x000169fa) form2_midp_gauge_slider_pane_t1

0xe027,	// (0x0001d4ee) form2_midp_gauge_slider_pane_t2

0xe039,	// (0x0001d500) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae6,	// (0x0001efad) form2_midp_gauge_slider_pane_t

0x7569,	// (0x00016a30) form2_midp_slider_pane

0x7575,	// (0x00016a3c) form2_midp_gauge_wait_pane_t1

0x7583,	// (0x00016a4a) form2_midp_wait_pane_ParamLimits

0x7583,	// (0x00016a4a) form2_midp_wait_pane

0xe04b,	// (0x0001d512) list_single_2graphic_pane_cp4_ParamLimits

0xe04b,	// (0x0001d512) list_single_2graphic_pane_cp4

0xd98c,	// (0x0001ce53) list_single_midp_graphic_pane_cp_ParamLimits

0xd98c,	// (0x0001ce53) list_single_midp_graphic_pane_cp

0x2639,	// (0x00011b00) list_highlight_pane_cp20

0x75d2,	// (0x00016a99) list_single_2graphic_pane_g1_cp4

0x75da,	// (0x00016aa1) list_single_2graphic_pane_g2_cp4

0x75e2,	// (0x00016aa9) list_single_2graphic_pane_t1_cp4

0x2719,	// (0x00011be0) list_highlight_pane_cp21

0x75f1,	// (0x00016ab8) list_single_midp_graphic_pane_g4_cp

0x7600,	// (0x00016ac7) list_single_midp_graphic_pane_t1_cp

0xe05f,	// (0x0001d526) form2_mdip_string_pane_t1_ParamLimits

0xe05f,	// (0x0001d526) form2_mdip_string_pane_t1

0x2639,	// (0x00011b00) bg_wml_button_pane_cp2

0x262f,	// (0x00011af6) form2_midp_image_pane_g1

0x3201,	// (0x000126c8) list_double_large_graphic_pane_g5_ParamLimits

0x3201,	// (0x000126c8) list_double_large_graphic_pane_g5

0xd39f,	// (0x0001c866) midp_form_pane_ParamLimits

0x2719,	// (0x00011be0) main_apps_wheel_pane_ParamLimits

0xbf85,	// (0x0001b44c) popup_preview_window_ParamLimits

0xbf85,	// (0x0001b44c) popup_preview_window

0x10f8,	// (0x000105bf) popup_touch_info_window_ParamLimits

0x10f8,	// (0x000105bf) popup_touch_info_window

0x1116,	// (0x000105dd) popup_touch_menu_window_ParamLimits

0x1116,	// (0x000105dd) popup_touch_menu_window

0x2625,	// (0x00011aec) bg_popup_sub_pane_cp6

0x770e,	// (0x00016bd5) list_touch_menu_pane

0x7716,	// (0x00016bdd) list_single_touch_menu_pane_ParamLimits

0x7716,	// (0x00016bdd) list_single_touch_menu_pane

0x772c,	// (0x00016bf3) list_single_touch_menu_pane_t1

0x2719,	// (0x00011be0) bg_popup_sub_pane_cp7_ParamLimits

0x2719,	// (0x00011be0) bg_popup_sub_pane_cp7

0x773a,	// (0x00016c01) heading_sub_pane

0x7742,	// (0x00016c09) list_touch_info_pane_ParamLimits

0x7742,	// (0x00016c09) list_touch_info_pane

0x7751,	// (0x00016c18) list_single_touch_info_pane_ParamLimits

0x7751,	// (0x00016c18) list_single_touch_info_pane

0x7763,	// (0x00016c2a) list_single_touch_info_pane_t1

0x7771,	// (0x00016c38) list_single_touch_info_pane_t2

0x0001,

0xfaf4,	// (0x0001efbb) list_single_touch_info_pane_t

0x43de,	// (0x000138a5) bg_popup_heading_pane_cp

0x777f,	// (0x00016c46) heading_sub_pane_t1

0x4d86,	// (0x0001424d) bg_popup_preview_window_pane_cp_ParamLimits

0x4d86,	// (0x0001424d) bg_popup_preview_window_pane_cp

0x773a,	// (0x00016c01) heading_preview_pane

0x7742,	// (0x00016c09) list_preview_pane_ParamLimits

0x7742,	// (0x00016c09) list_preview_pane

0x778d,	// (0x00016c54) popup_preview_window_g1

0x7751,	// (0x00016c18) list_single_preview_pane_ParamLimits

0x7751,	// (0x00016c18) list_single_preview_pane

0x7795,	// (0x00016c5c) list_single_preview_pane_g1

0x779d,	// (0x00016c64) list_single_preview_pane_t1

0x7763,	// (0x00016c2a) list_single_preview_pane_t2

0x0001,

0xfaf9,	// (0x0001efc0) list_single_preview_pane_t

0x77ab,	// (0x00016c72) bg_popup_heading_pane_cp2_ParamLimits

0x77ab,	// (0x00016c72) bg_popup_heading_pane_cp2

0x77c1,	// (0x00016c88) heading_preview_pane_g1

0x77c9,	// (0x00016c90) heading_preview_pane_t1_ParamLimits

0x77c9,	// (0x00016c90) heading_preview_pane_t1

0x281f,	// (0x00011ce6) soft_indicator_pane_t1_ParamLimits

0x2f3b,	// (0x00012402) scroll_pane_ParamLimits

0x3b45,	// (0x0001300c) scroll_sc2_left_pane

0x3b4e,	// (0x00013015) scroll_sc2_right_pane

0x3b6d,	// (0x00013034) scroll_bg_pane_g1_ParamLimits

0x3b82,	// (0x00013049) scroll_bg_pane_g2_ParamLimits

0x3b9a,	// (0x00013061) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001eba5) scroll_bg_pane_g_ParamLimits

0x3b6d,	// (0x00013034) scroll_handle_pane_g1_ParamLimits

0x3bbc,	// (0x00013083) scroll_handle_pane_g2_ParamLimits

0x3b9a,	// (0x00013061) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001ebac) scroll_handle_pane_g_ParamLimits

0x0bbe,	// (0x00010085) popup_choice_list_window_ParamLimits

0x0bbe,	// (0x00010085) popup_choice_list_window

0x4b80,	// (0x00014047) choice_list_pane

0x4c30,	// (0x000140f7) cell_toolbar_pane_t1

0x4c58,	// (0x0001411f) toolbar_button_pane_ParamLimits

0x5e24,	// (0x000152eb) ai_gene_pane_1_t2_ParamLimits

0x5e24,	// (0x000152eb) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x0001edcf) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x0001edcf) ai_gene_pane_1_t

0x77e6,	// (0x00016cad) scroll_sc2_left_pane_g1

0x77e6,	// (0x00016cad) scroll_sc2_right_pane_g1

0x470a,	// (0x00013bd1) bg_popup_sub_pane_cp10

0x77f0,	// (0x00016cb7) list_choice_list_pane

0x7809,	// (0x00016cd0) list_single_choice_list_pane_ParamLimits

0x7809,	// (0x00016cd0) list_single_choice_list_pane

0x781c,	// (0x00016ce3) list_single_choice_list_pane_g1

0x384b,	// (0x00012d12) list_single_choice_list_pane_t1_ParamLimits

0x384b,	// (0x00012d12) list_single_choice_list_pane_t1

0x7824,	// (0x00016ceb) choice_list_pane_g1

0x782c,	// (0x00016cf3) choice_list_pane_t1

0x2625,	// (0x00011aec) input_focus_pane_cp11

0x3a22,	// (0x00012ee9) title_pane_stacon_g2_ParamLimits

0x3a22,	// (0x00012ee9) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001eb8b) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001eb8b) title_pane_stacon_g

0x43de,	// (0x000138a5) cursor_press_pane

0xbc32,	// (0x0001b0f9) popup_fep_hwr_window_ParamLimits

0xbc32,	// (0x0001b0f9) popup_fep_hwr_window

0x0ce4,	// (0x000101ab) popup_fep_vkb_window_ParamLimits

0x0ce4,	// (0x000101ab) popup_fep_vkb_window

0x783a,	// (0x00016d01) cursor_press_pane_g1

0x0002,

0xfb22,	// (0x0001efe9) fep_vkb_side_pane_g_ParamLimits

0x167c,	// (0x00010b43) fep_hwr_candidate_pane_ParamLimits

0x167c,	// (0x00010b43) fep_hwr_candidate_pane

0x16a6,	// (0x00010b6d) fep_hwr_side_pane_ParamLimits

0x16a6,	// (0x00010b6d) fep_hwr_side_pane

0x16c6,	// (0x00010b8d) fep_hwr_top_pane_ParamLimits

0x16c6,	// (0x00010b8d) fep_hwr_top_pane

0x16de,	// (0x00010ba5) fep_hwr_write_pane_ParamLimits

0x16de,	// (0x00010ba5) fep_hwr_write_pane

0xfb22,	// (0x0001efe9) fep_vkb_side_pane_g

0x7842,	// (0x00016d09) fep_hwr_top_pane_g1

0x7854,	// (0x00016d1b) fep_hwr_top_pane_g2

0x1718,	// (0x00010bdf) fep_hwr_top_pane_g3

0x0002,

0xfafe,	// (0x0001efc5) fep_hwr_top_pane_g

0x172d,	// (0x00010bf4) fep_hwr_top_text_pane

0x3d3c,	// (0x00013203) fep_hwr_top_text_pane_g1

0x788a,	// (0x00016d51) fep_hwr_top_text_pane_t1

0x1823,	// (0x00010cea) fep_hwr_candidate_pane_g1

0x7add,	// (0x00016fa4) fep_vkb_keypad_pane_g3_ParamLimits

0x7add,	// (0x00016fa4) fep_vkb_keypad_pane_g3

0x7b05,	// (0x00016fcc) fep_vkb_keypad_pane_g4_ParamLimits

0x7b05,	// (0x00016fcc) fep_vkb_keypad_pane_g4

0x7b74,	// (0x0001703b) fep_vkb_bottom_pane_g2_ParamLimits

0x7b74,	// (0x0001703b) fep_vkb_bottom_pane_g2

0x0001,

0xfb29,	// (0x0001eff0) fep_vkb_bottom_pane_g_ParamLimits

0xfb29,	// (0x0001eff0) fep_vkb_bottom_pane_g

0x77e6,	// (0x00016cad) cell_vkb_side_pane_g2

0x0001,

0xfb33,	// (0x0001effa) cell_vkb_side_pane_g

0x7bff,	// (0x000170c6) cell_vkb_side_pane_t1

0x7c0d,	// (0x000170d4) cell_vkb_side_pane_t1_copy1

0x77e6,	// (0x00016cad) bg_fep_vkb_candidate_pane_g2

0x7d39,	// (0x00017200) cell_vkb_candidate_pane_ParamLimits

0x7898,	// (0x00016d5f) aid_size_cell_vkb_ParamLimits

0x7898,	// (0x00016d5f) aid_size_cell_vkb

0x7d39,	// (0x00017200) cell_vkb_candidate_pane

0x184a,	// (0x00010d11) bg_popup_fep_shadow_pane_g1

0xe0e1,	// (0x0001d5a8) fep_vkb_bottom_pane_ParamLimits

0xe0e1,	// (0x0001d5a8) fep_vkb_bottom_pane

0x795c,	// (0x00016e23) fep_vkb_candidate_pane_ParamLimits

0x795c,	// (0x00016e23) fep_vkb_candidate_pane

0xe106,	// (0x0001d5cd) fep_vkb_keypad_pane_ParamLimits

0xe106,	// (0x0001d5cd) fep_vkb_keypad_pane

0xe142,	// (0x0001d609) fep_vkb_side_pane_ParamLimits

0xe142,	// (0x0001d609) fep_vkb_side_pane

0xe17e,	// (0x0001d645) fep_vkb_top_pane_ParamLimits

0xe17e,	// (0x0001d645) fep_vkb_top_pane

0x7a36,	// (0x00016efd) fep_vkb_top_pane_g1_ParamLimits

0x7a36,	// (0x00016efd) fep_vkb_top_pane_g1

0x7a45,	// (0x00016f0c) fep_vkb_top_pane_g2_ParamLimits

0x7a45,	// (0x00016f0c) fep_vkb_top_pane_g2

0x7a54,	// (0x00016f1b) fep_vkb_top_pane_g3_ParamLimits

0x7a54,	// (0x00016f1b) fep_vkb_top_pane_g3

0x0003,

0xfb19,	// (0x0001efe0) fep_vkb_top_pane_g_ParamLimits

0xfb19,	// (0x0001efe0) fep_vkb_top_pane_g

0x7a72,	// (0x00016f39) fep_vkb_top_text_pane_ParamLimits

0x7a72,	// (0x00016f39) fep_vkb_top_text_pane

0xe1ba,	// (0x0001d681) fep_vkb_side_pane_g1_ParamLimits

0xe1ba,	// (0x0001d681) fep_vkb_side_pane_g1

0x7acc,	// (0x00016f93) grid_vkb_side_pane_ParamLimits

0x7acc,	// (0x00016f93) grid_vkb_side_pane

0x1852,	// (0x00010d19) bg_popup_fep_shadow_pane_g2

0x185b,	// (0x00010d22) bg_popup_fep_shadow_pane_g3

0x1863,	// (0x00010d2a) bg_popup_fep_shadow_pane_g4

0x186c,	// (0x00010d33) bg_popup_fep_shadow_pane_g5

0x1876,	// (0x00010d3d) bg_popup_fep_shadow_pane_g6

0x187e,	// (0x00010d45) bg_popup_fep_shadow_pane_g7

0x367e,	// (0x00012b45) bg_popup_fep_shadow_pane_g8

0x7b23,	// (0x00016fea) grid_vkb_keypad_number_pane_ParamLimits

0x7b23,	// (0x00016fea) grid_vkb_keypad_number_pane

0x7b33,	// (0x00016ffa) grid_vkb_keypad_pane_ParamLimits

0x7b33,	// (0x00016ffa) grid_vkb_keypad_pane

0x7b59,	// (0x00017020) fep_vkb_bottom_pane_g1_ParamLimits

0x7b59,	// (0x00017020) fep_vkb_bottom_pane_g1

0x7b82,	// (0x00017049) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7b82,	// (0x00017049) grid_vkb_keypad_bottom_left_pane

0x7b97,	// (0x0001705e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7b97,	// (0x0001705e) grid_vkb_keypad_bottom_right_pane

0x7bac,	// (0x00017073) fep_vkb_top_text_pane_g1

0xe201,	// (0x0001d6c8) fep_vkb_top_text_pane_t1

0xe213,	// (0x0001d6da) cell_vkb_side_pane_ParamLimits

0xe213,	// (0x0001d6da) cell_vkb_side_pane

0x77e6,	// (0x00016cad) cell_vkb_side_pane_g1

0x7c1b,	// (0x000170e2) cell_vkb_keypad_pane_ParamLimits

0x7c1b,	// (0x000170e2) cell_vkb_keypad_pane

0x7c90,	// (0x00017157) cell_vkb_keypad_pane_g1

0x0008,

0xfb46,	// (0x0001f00d) bg_popup_fep_shadow_pane_g

0x1890,	// (0x00010d57) cell_hwr_side_pane_g1

0x1890,	// (0x00010d57) cell_hwr_side_pane_g2

0x7c9a,	// (0x00017161) cell_vkb_keypad_pane_t1

0xe229,	// (0x0001d6f0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe229,	// (0x0001d6f0) cell_vkb_keypad_bottom_left_pane

0xe23e,	// (0x0001d705) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe23e,	// (0x0001d705) cell_vkb_keypad_bottom_right_pane

0x77e6,	// (0x00016cad) cell_vkb_keypad_bottom_left_pane_g1

0x77e6,	// (0x00016cad) cell_vkb_keypad_bottom_right_pane_g1

0x7cfe,	// (0x000171c5) cell_vkb_keypad_number_pane_ParamLimits

0x7cfe,	// (0x000171c5) cell_vkb_keypad_number_pane

0x7d1d,	// (0x000171e4) cell_vkb_keypad_number_pane_g1

0x7d27,	// (0x000171ee) cell_vkb_keypad_number_pane_g2

0x7d30,	// (0x000171f7) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb38,	// (0x0001efff) cell_vkb_keypad_number_pane_g

0x7c9a,	// (0x00017161) cell_vkb_keypad_number_pane_t1

0x7d54,	// (0x0001721b) fep_vkb_candidate_pane_g1

0x0001,

0xfb59,	// (0x0001f020) cell_hwr_side_pane_g

0x7d6d,	// (0x00017234) cell_hwr_side_pane_t1

0x189a,	// (0x00010d61) cell_hwr_side_pane_t1_copy1

0x18a8,	// (0x00010d6f) cell_hwr_candidate_pane_g1

0x18d7,	// (0x00010d9e) cell_hwr_candidate_pane_t1

0x77e6,	// (0x00016cad) cell_vkb_candidate_pane_g2

0x7db1,	// (0x00017278) cell_vkb_candidate_pane_t1

0x1643,	// (0x00010b0a) bg_popup_fep_shadow_pane_ParamLimits

0x1643,	// (0x00010b0a) bg_popup_fep_shadow_pane

0x16f8,	// (0x00010bbf) bg_fep_hwr_top_pane_g4

0x7866,	// (0x00016d2d) bg_hwr_side_pane_g1_ParamLimits

0x7866,	// (0x00016d2d) bg_hwr_side_pane_g1

0xc2bf,	// (0x0001b786) cell_hwr_side_pane_ParamLimits

0xc2bf,	// (0x0001b786) cell_hwr_side_pane

0x17a4,	// (0x00010c6b) fep_hwr_write_pane_g1_ParamLimits

0x17a4,	// (0x00010c6b) fep_hwr_write_pane_g1

0x17b1,	// (0x00010c78) fep_hwr_write_pane_g2_ParamLimits

0x17b1,	// (0x00010c78) fep_hwr_write_pane_g2

0x17be,	// (0x00010c85) fep_hwr_write_pane_g3_ParamLimits

0x17be,	// (0x00010c85) fep_hwr_write_pane_g3

0xc2df,	// (0x0001b7a6) fep_hwr_write_pane_g4_ParamLimits

0xc2df,	// (0x0001b7a6) fep_hwr_write_pane_g4

0x0005,

0xfb05,	// (0x0001efcc) fep_hwr_write_pane_g_ParamLimits

0xfb05,	// (0x0001efcc) fep_hwr_write_pane_g

0x16f8,	// (0x00010bbf) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x16f8,	// (0x00010bbf) bg_fep_hwr_candidate_pane_g2

0x17e1,	// (0x00010ca8) cell_hwr_candidate_pane_ParamLimits

0x17e1,	// (0x00010ca8) cell_hwr_candidate_pane

0x1823,	// (0x00010cea) fep_hwr_candidate_pane_g1_ParamLimits

0x78c6,	// (0x00016d8d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x78c6,	// (0x00016d8d) bg_popup_fep_shadow_pane_cp2

0x7a64,	// (0x00016f2b) fep_vkb_top_pane_g4_ParamLimits

0x7a64,	// (0x00016f2b) fep_vkb_top_pane_g4

0x7aaa,	// (0x00016f71) fep_vkb_side_pane_g2_ParamLimits

0x7aaa,	// (0x00016f71) fep_vkb_side_pane_g2

0xcf13,	// (0x0001c3da) list_setting_pane_t4_ParamLimits

0xcf13,	// (0x0001c3da) list_setting_pane_t4

0xcf8d,	// (0x0001c454) list_setting_number_pane_t5_ParamLimits

0xcf8d,	// (0x0001c454) list_setting_number_pane_t5

0x3d73,	// (0x0001323a) list_double_heading_pane_cp2_ParamLimits

0x3d73,	// (0x0001323a) list_double_heading_pane_cp2

0x318c,	// (0x00012653) list_double_heading_pane_g1_cp2_ParamLimits

0x318c,	// (0x00012653) list_double_heading_pane_g1_cp2

0x3569,	// (0x00012a30) list_double_heading_pane_g2_cp2_ParamLimits

0x3569,	// (0x00012a30) list_double_heading_pane_g2_cp2

0x7dbf,	// (0x00017286) list_double_heading_pane_t1_cp2_ParamLimits

0x7dbf,	// (0x00017286) list_double_heading_pane_t1_cp2

0x7dd5,	// (0x0001729c) list_double_heading_pane_t2_cp2_ParamLimits

0x7dd5,	// (0x0001729c) list_double_heading_pane_t2_cp2

0x260d,	// (0x00011ad4) aid_value_unit2

0x03de,	// (0x0000f8a5) popup_preview_fixed_window

0x29bc,	// (0x00011e83) bg_popup_preview_window_pane_cp02

0x7de7,	// (0x000172ae) list_preview_fixed_pane

0x7e2d,	// (0x000172f4) list_empty_pane_fp_ParamLimits

0x7e2d,	// (0x000172f4) list_empty_pane_fp

0x7e2d,	// (0x000172f4) list_single_cale_day_pane_fp_ParamLimits

0x7e2d,	// (0x000172f4) list_single_cale_day_pane_fp

0x7e2d,	// (0x000172f4) list_single_graphic_heading_pane_fp_ParamLimits

0x7e2d,	// (0x000172f4) list_single_graphic_heading_pane_fp

0x7e2d,	// (0x000172f4) list_single_graphic_pane_fp_ParamLimits

0x7e2d,	// (0x000172f4) list_single_graphic_pane_fp

0x7e2d,	// (0x000172f4) list_single_heading_pane_fp_ParamLimits

0x7e2d,	// (0x000172f4) list_single_heading_pane_fp

0x7e2d,	// (0x000172f4) list_single_pane_fp_ParamLimits

0x7e2d,	// (0x000172f4) list_single_pane_fp

0x7e42,	// (0x00017309) list_single_pane_fp_g1_ParamLimits

0x7e42,	// (0x00017309) list_single_pane_fp_g1

0x318c,	// (0x00012653) list_single_pane_fp_g2_ParamLimits

0x318c,	// (0x00012653) list_single_pane_fp_g2

0x3569,	// (0x00012a30) list_single_pane_fp_g3_ParamLimits

0x3569,	// (0x00012a30) list_single_pane_fp_g3

0x7e4e,	// (0x00017315) list_single_pane_fp_g4_ParamLimits

0x7e4e,	// (0x00017315) list_single_pane_fp_g4

0x0003,

0xfb6c,	// (0x0001f033) list_single_pane_fp_g_ParamLimits

0xfb6c,	// (0x0001f033) list_single_pane_fp_g

0x7e5a,	// (0x00017321) list_single_pane_fp_t1_ParamLimits

0x7e5a,	// (0x00017321) list_single_pane_fp_t1

0x7e71,	// (0x00017338) list_single_graphic_pane_fp_g1_ParamLimits

0x7e71,	// (0x00017338) list_single_graphic_pane_fp_g1

0x7e42,	// (0x00017309) list_single_graphic_pane_fp_g2_ParamLimits

0x7e42,	// (0x00017309) list_single_graphic_pane_fp_g2

0x318c,	// (0x00012653) list_single_graphic_pane_fp_g3_ParamLimits

0x318c,	// (0x00012653) list_single_graphic_pane_fp_g3

0x3569,	// (0x00012a30) list_single_graphic_pane_fp_g4_ParamLimits

0x3569,	// (0x00012a30) list_single_graphic_pane_fp_g4

0x7e4e,	// (0x00017315) list_single_graphic_pane_fp_g5_ParamLimits

0x7e4e,	// (0x00017315) list_single_graphic_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f03c) list_single_graphic_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f03c) list_single_graphic_pane_fp_g

0x7e7d,	// (0x00017344) list_single_graphic_pane_fp_t1_ParamLimits

0x7e7d,	// (0x00017344) list_single_graphic_pane_fp_t1

0x7e71,	// (0x00017338) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7e71,	// (0x00017338) list_single_graphic_heading_pane_fp_g1

0x7e42,	// (0x00017309) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7e42,	// (0x00017309) list_single_graphic_heading_pane_fp_g2

0x318c,	// (0x00012653) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x318c,	// (0x00012653) list_single_graphic_heading_pane_fp_g3

0x3569,	// (0x00012a30) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3569,	// (0x00012a30) list_single_graphic_heading_pane_fp_g4

0x7e4e,	// (0x00017315) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7e4e,	// (0x00017315) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f03c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f03c) list_single_graphic_heading_pane_fp_g

0x7e93,	// (0x0001735a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7e93,	// (0x0001735a) list_single_graphic_heading_pane_fp_t1

0x7ea9,	// (0x00017370) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7ea9,	// (0x00017370) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb80,	// (0x0001f047) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb80,	// (0x0001f047) list_single_graphic_heading_pane_fp_t

0x7ebb,	// (0x00017382) list_single_cale_day_pane_fp_g1_ParamLimits

0x7ebb,	// (0x00017382) list_single_cale_day_pane_fp_g1

0x7ef3,	// (0x000173ba) list_single_cale_day_pane_fp_g2_ParamLimits

0x7ef3,	// (0x000173ba) list_single_cale_day_pane_fp_g2

0x7eff,	// (0x000173c6) list_single_cale_day_pane_fp_g3_ParamLimits

0x7eff,	// (0x000173c6) list_single_cale_day_pane_fp_g3

0x7f27,	// (0x000173ee) list_single_cale_day_pane_fp_g4_ParamLimits

0x7f27,	// (0x000173ee) list_single_cale_day_pane_fp_g4

0x7f4b,	// (0x00017412) list_single_cale_day_pane_fp_g5_ParamLimits

0x7f4b,	// (0x00017412) list_single_cale_day_pane_fp_g5

0x0004,

0xfb85,	// (0x0001f04c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb85,	// (0x0001f04c) list_single_cale_day_pane_fp_g

0x7f6f,	// (0x00017436) list_single_cale_day_pane_fp_t1_ParamLimits

0x7f6f,	// (0x00017436) list_single_cale_day_pane_fp_t1

0x7f95,	// (0x0001745c) list_single_cale_day_pane_fp_t2_ParamLimits

0x7f95,	// (0x0001745c) list_single_cale_day_pane_fp_t2

0x7fae,	// (0x00017475) list_single_cale_day_pane_fp_t3_ParamLimits

0x7fae,	// (0x00017475) list_single_cale_day_pane_fp_t3

0x0002,

0xfb90,	// (0x0001f057) list_single_cale_day_pane_fp_t_ParamLimits

0xfb90,	// (0x0001f057) list_single_cale_day_pane_fp_t

0x7e42,	// (0x00017309) list_empty_pane_fp_g1_ParamLimits

0x7e42,	// (0x00017309) list_empty_pane_fp_g1

0x7fc7,	// (0x0001748e) list_empty_pane_fp_t1

0x7fd5,	// (0x0001749c) list_empty_pane_fp_t2

0x0001,

0xfb97,	// (0x0001f05e) list_empty_pane_fp_t

0x7e42,	// (0x00017309) list_single_heading_pane_fp_g1_ParamLimits

0x7e42,	// (0x00017309) list_single_heading_pane_fp_g1

0x318c,	// (0x00012653) list_single_heading_pane_fp_g2_ParamLimits

0x318c,	// (0x00012653) list_single_heading_pane_fp_g2

0x3569,	// (0x00012a30) list_single_heading_pane_fp_g3_ParamLimits

0x3569,	// (0x00012a30) list_single_heading_pane_fp_g3

0x0002,

0xfb9c,	// (0x0001f063) list_single_heading_pane_fp_g_ParamLimits

0xfb9c,	// (0x0001f063) list_single_heading_pane_fp_g

0x7fe3,	// (0x000174aa) list_single_heading_pane_fp_t1_ParamLimits

0x7fe3,	// (0x000174aa) list_single_heading_pane_fp_t1

0x7ff5,	// (0x000174bc) list_single_heading_pane_fp_t2_ParamLimits

0x7ff5,	// (0x000174bc) list_single_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x0001f06a) list_single_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x0001f06a) list_single_heading_pane_fp_t

0x38b9,	// (0x00012d80) aid_size_cell_fast

0x292c,	// (0x00011df3) soft_indicator_pane_cp1_t1

0x38f6,	// (0x00012dbd) cell_app_pane_cp2_ParamLimits

0x38f6,	// (0x00012dbd) cell_app_pane_cp2

0x1665,	// (0x00010b2c) fep_hwr_candidate_drop_down_list_pane

0x183d,	// (0x00010d04) fep_hwr_candidate_pane_g3_ParamLimits

0x183d,	// (0x00010d04) fep_hwr_candidate_pane_g3

0xef6f,	// (0x0001e436) fep_hwr_candidate_pane_g4_ParamLimits

0xef6f,	// (0x0001e436) fep_hwr_candidate_pane_g4

0x0002,

0xfb12,	// (0x0001efd9) fep_hwr_candidate_pane_g_ParamLimits

0xfb12,	// (0x0001efd9) fep_hwr_candidate_pane_g

0x794b,	// (0x00016e12) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x794b,	// (0x00016e12) fep_vkb_candidate_drop_down_list_pane

0x7d5c,	// (0x00017223) fep_vkb_candidate_pane_g3

0x7d64,	// (0x0001722b) fep_vkb_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0001f006) fep_vkb_candidate_pane_g

0x18a8,	// (0x00010d6f) cell_hwr_candidate_pane_g1_ParamLimits

0x18b6,	// (0x00010d7d) cell_hwr_candidate_pane_g3_ParamLimits

0x18b6,	// (0x00010d7d) cell_hwr_candidate_pane_g3

0x9a44,	// (0x00018f0b) cell_hwr_candidate_pane_g4_ParamLimits

0x9a44,	// (0x00018f0b) cell_hwr_candidate_pane_g4

0x0002,

0xfb5e,	// (0x0001f025) cell_hwr_candidate_pane_g_ParamLimits

0xfb5e,	// (0x0001f025) cell_hwr_candidate_pane_g

0x7d7b,	// (0x00017242) cell_vkb_candidate_pane_g3_ParamLimits

0x7d7b,	// (0x00017242) cell_vkb_candidate_pane_g3

0x7d96,	// (0x0001725d) cell_vkb_candidate_pane_g4_ParamLimits

0x7d96,	// (0x0001725d) cell_vkb_candidate_pane_g4

0x800b,	// (0x000174d2) cell_app_pane_cp2_g1_ParamLimits

0x800b,	// (0x000174d2) cell_app_pane_cp2_g1

0x8029,	// (0x000174f0) cell_app_pane_cp2_g2_ParamLimits

0x8029,	// (0x000174f0) cell_app_pane_cp2_g2

0x0001,

0xfba8,	// (0x0001f06f) cell_app_pane_cp2_g_ParamLimits

0xfba8,	// (0x0001f06f) cell_app_pane_cp2_g

0x8035,	// (0x000174fc) cell_app_pane_cp2_t1_ParamLimits

0x8035,	// (0x000174fc) cell_app_pane_cp2_t1

0x3543,	// (0x00012a0a) grid_highlight_pane_cp1_ParamLimits

0x3543,	// (0x00012a0a) grid_highlight_pane_cp1

0x18f5,	// (0x00010dbc) cell_hwr_candidate_pane_cp1_ParamLimits

0x18f5,	// (0x00010dbc) cell_hwr_candidate_pane_cp1

0x18a8,	// (0x00010d6f) fep_hwr_candidate_drop_down_list_pane_g1

0x1914,	// (0x00010ddb) fep_hwr_candidate_drop_down_list_pane_g2

0x1921,	// (0x00010de8) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbad,	// (0x0001f074) fep_hwr_candidate_drop_down_list_pane_g

0x192e,	// (0x00010df5) fep_hwr_candidate_drop_down_list_scroll_pane

0x1937,	// (0x00010dfe) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1937,	// (0x00010dfe) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1944,	// (0x00010e0b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1944,	// (0x00010e0b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1951,	// (0x00010e18) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1951,	// (0x00010e18) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x195e,	// (0x00010e25) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x195e,	// (0x00010e25) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1979,	// (0x00010e40) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1979,	// (0x00010e40) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1994,	// (0x00010e5b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1994,	// (0x00010e5b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x19af,	// (0x00010e76) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x19af,	// (0x00010e76) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x19ca,	// (0x00010e91) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x19ca,	// (0x00010e91) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb4,	// (0x0001f07b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb4,	// (0x0001f07b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8047,	// (0x0001750e) cell_vkb_candidate_pane_cp1_ParamLimits

0x8047,	// (0x0001750e) cell_vkb_candidate_pane_cp1

0x7a64,	// (0x00016f2b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7a64,	// (0x00016f2b) fep_vkb_candidate_drop_down_list_pane_g1

0x8067,	// (0x0001752e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8067,	// (0x0001752e) fep_vkb_candidate_drop_down_list_pane_g2

0x8074,	// (0x0001753b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8074,	// (0x0001753b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc5,	// (0x0001f08c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc5,	// (0x0001f08c) fep_vkb_candidate_drop_down_list_pane_g

0x8081,	// (0x00017548) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8081,	// (0x00017548) fep_vkb_candidate_drop_down_list_scroll_pane

0x808e,	// (0x00017555) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x808e,	// (0x00017555) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x809b,	// (0x00017562) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x809b,	// (0x00017562) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x80a7,	// (0x0001756e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x80a7,	// (0x0001756e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x80b3,	// (0x0001757a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x80b3,	// (0x0001757a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x80d4,	// (0x0001759b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x80d4,	// (0x0001759b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x80f5,	// (0x000175bc) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x80f5,	// (0x000175bc) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8116,	// (0x000175dd) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8116,	// (0x000175dd) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8137,	// (0x000175fe) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8137,	// (0x000175fe) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcc,	// (0x0001f093) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcc,	// (0x0001f093) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc8ad,	// (0x0001bd74) title_pane_g1_ParamLimits

0xc8c0,	// (0x0001bd87) title_pane_g2_ParamLimits

0xf54e,	// (0x0001ea15) title_pane_g_ParamLimits

0x3d2c,	// (0x000131f3) aid_call2_pane

0x3d34,	// (0x000131fb) aid_call_pane

0x3d3c,	// (0x00013203) popup_clock_analogue_window_g1

0x3d3c,	// (0x00013203) popup_clock_analogue_window_g2

0x074f,	// (0x0000fc16) popup_clock_analogue_window_g3

0x0758,	// (0x0000fc1f) popup_clock_analogue_window_g4

0x262f,	// (0x00011af6) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001ebba) popup_clock_analogue_window_g

0x0760,	// (0x0000fc27) popup_clock_analogue_window_t1

0x076e,	// (0x0000fc35) clock_digital_number_pane_ParamLimits

0x076e,	// (0x0000fc35) clock_digital_number_pane

0x077a,	// (0x0000fc41) clock_digital_number_pane_cp02_ParamLimits

0x077a,	// (0x0000fc41) clock_digital_number_pane_cp02

0x0786,	// (0x0000fc4d) clock_digital_number_pane_cp03_ParamLimits

0x0786,	// (0x0000fc4d) clock_digital_number_pane_cp03

0x0792,	// (0x0000fc59) clock_digital_number_pane_cp04_ParamLimits

0x0792,	// (0x0000fc59) clock_digital_number_pane_cp04

0x079e,	// (0x0000fc65) clock_digital_separator_pane_ParamLimits

0x079e,	// (0x0000fc65) clock_digital_separator_pane

0x07aa,	// (0x0000fc71) popup_clock_digital_window_t1_ParamLimits

0x07aa,	// (0x0000fc71) popup_clock_digital_window_t1

0x262f,	// (0x00011af6) clock_digital_number_pane_g1

0x262f,	// (0x00011af6) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001ebc5) clock_digital_number_pane_g

0x262f,	// (0x00011af6) clock_digital_separator_pane_g1

0x262f,	// (0x00011af6) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001ebc5) clock_digital_separator_pane_g

0xd54c,	// (0x0001ca13) aid_fill_nsta_ParamLimits

0xd682,	// (0x0001cb49) indicator_nsta_pane_ParamLimits

0x4a0d,	// (0x00013ed4) popup_clock_analogue_window

0x4a0d,	// (0x00013ed4) popup_clock_digital_window

0x387a,	// (0x00012d41) grid_indicator_nsta_pane_ParamLimits

0x71af,	// (0x00016676) clock_nsta_pane_t2

0x0001,

0xfa92,	// (0x0001ef59) clock_nsta_pane_t

0x0713,	// (0x0000fbda) aid_size_max_handle

0xb9f5,	// (0x0001aebc) aid_size_min_handle

0x43de,	// (0x000138a5) editor_scroll_pane

0x8152,	// (0x00017619) ex_editor_pane

0x3827,	// (0x00012cee) scroll_pane_cp13

0x2f67,	// (0x0001242e) scroll_pane_cp14

0x3d6b,	// (0x00013232) scroll_pane_cp36

0xd276,	// (0x0001c73d) list_single_graphic_hl_pane_cp2_ParamLimits

0xd276,	// (0x0001c73d) list_single_graphic_hl_pane_cp2

0xdd4d,	// (0x0001d214) list_single_graphic_hl_pane_ParamLimits

0xdd4d,	// (0x0001d214) list_single_graphic_hl_pane

0x815a,	// (0x00017621) aid_size_min_hl_cp1

0x8163,	// (0x0001762a) list_highlight_pane_cp34_ParamLimits

0x8163,	// (0x0001762a) list_highlight_pane_cp34

0x8174,	// (0x0001763b) list_single_graphic_hl_pane_g1_ParamLimits

0x8174,	// (0x0001763b) list_single_graphic_hl_pane_g1

0xe259,	// (0x0001d720) list_single_graphic_hl_pane_g2_ParamLimits

0xe259,	// (0x0001d720) list_single_graphic_hl_pane_g2

0xe259,	// (0x0001d720) list_single_graphic_hl_pane_g3_ParamLimits

0xe259,	// (0x0001d720) list_single_graphic_hl_pane_g3

0x434f,	// (0x00013816) list_single_graphic_hl_pane_g4_ParamLimits

0x434f,	// (0x00013816) list_single_graphic_hl_pane_g4

0xe265,	// (0x0001d72c) list_single_graphic_hl_pane_g5_ParamLimits

0xe265,	// (0x0001d72c) list_single_graphic_hl_pane_g5

0x0004,

0xfbdd,	// (0x0001f0a4) list_single_graphic_hl_pane_g_ParamLimits

0xfbdd,	// (0x0001f0a4) list_single_graphic_hl_pane_g

0xe279,	// (0x0001d740) list_single_graphic_hl_pane_t1_ParamLimits

0xe279,	// (0x0001d740) list_single_graphic_hl_pane_t1

0x81b7,	// (0x0001767e) aid_size_min_hl_cp2

0x81c0,	// (0x00017687) list_highlight_pane_cp34_cp2_ParamLimits

0x81c0,	// (0x00017687) list_highlight_pane_cp34_cp2

0x8174,	// (0x0001763b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8174,	// (0x0001763b) list_single_graphic_hl_pane_g1_cp2

0x81cd,	// (0x00017694) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x81cd,	// (0x00017694) list_single_graphic_hl_pane_g2_cp2

0x81d9,	// (0x000176a0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x81d9,	// (0x000176a0) list_single_graphic_hl_pane_g3_cp2

0x694b,	// (0x00015e12) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x694b,	// (0x00015e12) list_single_graphic_hl_pane_g4_cp2

0x818d,	// (0x00017654) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x818d,	// (0x00017654) list_single_graphic_hl_pane_g5_cp2

0xba50,	// (0x0001af17) control_pane_g4_ParamLimits

0xba50,	// (0x0001af17) control_pane_g4

0x470a,	// (0x00013bd1) bg_popup_sub_pane_cp10_ParamLimits

0x77f0,	// (0x00016cb7) list_choice_list_pane_ParamLimits

0x77ff,	// (0x00016cc6) scroll_pane_cp23

0x29bc,	// (0x00011e83) bg_popup_preview_window_pane_cp02_ParamLimits

0x7de7,	// (0x000172ae) list_preview_fixed_pane_ParamLimits

0x7dfd,	// (0x000172c4) list_preview_fixed_pane_cp_ParamLimits

0x7dfd,	// (0x000172c4) list_preview_fixed_pane_cp

0x7e09,	// (0x000172d0) popup_preview_fixed_window_g1_ParamLimits

0x7e09,	// (0x000172d0) popup_preview_fixed_window_g1

0x7e15,	// (0x000172dc) popup_preview_fixed_window_g2_ParamLimits

0x7e15,	// (0x000172dc) popup_preview_fixed_window_g2

0x0002,

0xfb65,	// (0x0001f02c) popup_preview_fixed_window_g_ParamLimits

0xfb65,	// (0x0001f02c) popup_preview_fixed_window_g

0x0687,	// (0x0000fb4e) aid_navi_side_left_pane_ParamLimits

0x069c,	// (0x0000fb63) aid_navi_side_right_pane_ParamLimits

0x06b4,	// (0x0000fb7b) navi_icon_pane_stacon_ParamLimits

0x06c8,	// (0x0000fb8f) navi_navi_pane_stacon_ParamLimits

0x06b4,	// (0x0000fb7b) navi_text_pane_stacon_ParamLimits

0x029f,	// (0x0000f766) main_text_info_pane

0x81fd,	// (0x000176c4) listscroll_text_info_pane

0x8205,	// (0x000176cc) list_text_info_pane_ParamLimits

0x8205,	// (0x000176cc) list_text_info_pane

0x8214,	// (0x000176db) scroll_pane_cp24_ParamLimits

0x8214,	// (0x000176db) scroll_pane_cp24

0xe28f,	// (0x0001d756) list_text_info_pane_t1_ParamLimits

0xe28f,	// (0x0001d756) list_text_info_pane_t1

0xbba5,	// (0x0001b06c) popup_fast_swap2_window_ParamLimits

0xbba5,	// (0x0001b06c) popup_fast_swap2_window

0x8263,	// (0x0001772a) aid_size_cell_fast2

0x2625,	// (0x00011aec) bg_popup_window_pane_cp17

0x51af,	// (0x00014676) heading_pane_cp2

0x2c31,	// (0x000120f8) listscroll_fast2_pane

0x826d,	// (0x00017734) grid_fast2_pane

0x8277,	// (0x0001773e) listscroll_fast2_pane_g1

0x827f,	// (0x00017746) listscroll_fast2_pane_g2

0x0001,

0xfbe8,	// (0x0001f0af) listscroll_fast2_pane_g

0x3827,	// (0x00012cee) scroll_pane_cp26

0x8289,	// (0x00017750) cell_fast2_pane_ParamLimits

0x8289,	// (0x00017750) cell_fast2_pane

0x829e,	// (0x00017765) cell_fast2_pane_g1

0x82a7,	// (0x0001776e) cell_fast2_pane_g2

0x82b0,	// (0x00017777) cell_fast2_pane_g3

0x0002,

0xfbed,	// (0x0001f0b4) cell_fast2_pane_g

0x2d24,	// (0x000121eb) grid_highlight_pane_cp9

0x0ba2,	// (0x00010069) main_eswt_pane_ParamLimits

0x0ba2,	// (0x00010069) main_eswt_pane

0x8229,	// (0x000176f0) list_single_text_info_pane

0x82b8,	// (0x0001777f) eswt_ctrl_button_pane

0x82b8,	// (0x0001777f) eswt_ctrl_canvas_pane

0x82c0,	// (0x00017787) eswt_ctrl_combo_pane

0x82b8,	// (0x0001777f) eswt_ctrl_default_pane

0x82b8,	// (0x0001777f) eswt_ctrl_label_pane

0x82c8,	// (0x0001778f) eswt_ctrl_wait_pane

0x82d0,	// (0x00017797) eswt_shell_pane

0x2625,	// (0x00011aec) listscroll_eswt_app_pane

0x82f0,	// (0x000177b7) popup_eswt_tasktip_window_ParamLimits

0x82f0,	// (0x000177b7) popup_eswt_tasktip_window

0x4d86,	// (0x0001424d) bg_popup_window_pane_cp18

0x8301,	// (0x000177c8) eswt_control_pane_g1_ParamLimits

0x8301,	// (0x000177c8) eswt_control_pane_g1

0x830e,	// (0x000177d5) eswt_control_pane_g2_ParamLimits

0x830e,	// (0x000177d5) eswt_control_pane_g2

0x831b,	// (0x000177e2) eswt_control_pane_g3_ParamLimits

0x831b,	// (0x000177e2) eswt_control_pane_g3

0x8328,	// (0x000177ef) eswt_control_pane_g4_ParamLimits

0x8328,	// (0x000177ef) eswt_control_pane_g4

0x0003,

0xfbf4,	// (0x0001f0bb) eswt_control_pane_g_ParamLimits

0xfbf4,	// (0x0001f0bb) eswt_control_pane_g

0x3543,	// (0x00012a0a) bg_button_pane_ParamLimits

0x3543,	// (0x00012a0a) bg_button_pane

0x2d39,	// (0x00012200) common_borders_pane_copy2_ParamLimits

0x2d39,	// (0x00012200) common_borders_pane_copy2

0x8335,	// (0x000177fc) control_button_pane_g1_ParamLimits

0x8335,	// (0x000177fc) control_button_pane_g1

0x8341,	// (0x00017808) control_button_pane_g2_ParamLimits

0x8341,	// (0x00017808) control_button_pane_g2

0x834d,	// (0x00017814) control_button_pane_g3_ParamLimits

0x834d,	// (0x00017814) control_button_pane_g3

0x0002,

0xfbfd,	// (0x0001f0c4) control_button_pane_g_ParamLimits

0xfbfd,	// (0x0001f0c4) control_button_pane_g

0x8361,	// (0x00017828) control_button_pane_t1

0x836f,	// (0x00017836) control_button_pane_t2

0x0001,

0xfc04,	// (0x0001f0cb) control_button_pane_t

0x4c64,	// (0x0001412b) bg_button_pane_g1

0x4c74,	// (0x0001413b) bg_button_pane_g2

0x4c6c,	// (0x00014133) bg_button_pane_g3

0x4c84,	// (0x0001414b) bg_button_pane_g4

0x4c7c,	// (0x00014143) bg_button_pane_g5

0x4c8c,	// (0x00014153) bg_button_pane_g6

0x4c94,	// (0x0001415b) bg_button_pane_g7

0x4ca4,	// (0x0001416b) bg_button_pane_g8

0x4c9c,	// (0x00014163) bg_button_pane_g9

0x0008,

0xf85c,	// (0x0001ed23) bg_button_pane_g

0x77ab,	// (0x00016c72) common_borders_pane_ParamLimits

0x77ab,	// (0x00016c72) common_borders_pane

0x8301,	// (0x000177c8) eswt_control_pane_g1_copy1_ParamLimits

0x8301,	// (0x000177c8) eswt_control_pane_g1_copy1

0x830e,	// (0x000177d5) eswt_control_pane_g2_copy1_ParamLimits

0x830e,	// (0x000177d5) eswt_control_pane_g2_copy1

0x831b,	// (0x000177e2) eswt_control_pane_g3_copy1_ParamLimits

0x831b,	// (0x000177e2) eswt_control_pane_g3_copy1

0x8328,	// (0x000177ef) eswt_control_pane_g4_copy1_ParamLimits

0x8328,	// (0x000177ef) eswt_control_pane_g4_copy1

0x77e6,	// (0x00016cad) bg_eswt_ctrl_canvas_pane_g1

0x77ab,	// (0x00016c72) common_borders_pane_cp2_ParamLimits

0x77ab,	// (0x00016c72) common_borders_pane_cp2

0x77ab,	// (0x00016c72) common_borders_pane_cp3_ParamLimits

0x77ab,	// (0x00016c72) common_borders_pane_cp3

0x837d,	// (0x00017844) separator_horizontal_pane

0x8385,	// (0x0001784c) separator_vertical_pane

0x8301,	// (0x000177c8) eswt_control_pane_g1_copy2_ParamLimits

0x8301,	// (0x000177c8) eswt_control_pane_g1_copy2

0x830e,	// (0x000177d5) eswt_control_pane_g2_copy2_ParamLimits

0x830e,	// (0x000177d5) eswt_control_pane_g2_copy2

0x831b,	// (0x000177e2) eswt_control_pane_g3_copy2_ParamLimits

0x831b,	// (0x000177e2) eswt_control_pane_g3_copy2

0x8328,	// (0x000177ef) eswt_control_pane_g4_copy2_ParamLimits

0x8328,	// (0x000177ef) eswt_control_pane_g4_copy2

0x2625,	// (0x00011aec) common_borders_pane_cp4

0x838e,	// (0x00017855) separator_horizontal_pane_g1

0x8397,	// (0x0001785e) separator_horizontal_pane_g2

0x83a0,	// (0x00017867) separator_horizontal_pane_g3

0x0002,

0xfc09,	// (0x0001f0d0) separator_horizontal_pane_g

0x8301,	// (0x000177c8) eswt_control_pane_g1_copy3_ParamLimits

0x8301,	// (0x000177c8) eswt_control_pane_g1_copy3

0x830e,	// (0x000177d5) eswt_control_pane_g2_copy3_ParamLimits

0x830e,	// (0x000177d5) eswt_control_pane_g2_copy3

0x831b,	// (0x000177e2) eswt_control_pane_g3_copy3_ParamLimits

0x831b,	// (0x000177e2) eswt_control_pane_g3_copy3

0x8328,	// (0x000177ef) eswt_control_pane_g4_copy3_ParamLimits

0x8328,	// (0x000177ef) eswt_control_pane_g4_copy3

0x2625,	// (0x00011aec) common_borders_pane_cp5

0x83a9,	// (0x00017870) separator_vertical_pane_g1

0x83b2,	// (0x00017879) separator_vertical_pane_g2

0x83bb,	// (0x00017882) separator_vertical_pane_g3

0x0002,

0xfc10,	// (0x0001f0d7) separator_vertical_pane_g

0x8301,	// (0x000177c8) eswt_control_pane_g1_copy4_ParamLimits

0x8301,	// (0x000177c8) eswt_control_pane_g1_copy4

0x830e,	// (0x000177d5) eswt_control_pane_g2_copy4_ParamLimits

0x830e,	// (0x000177d5) eswt_control_pane_g2_copy4

0x831b,	// (0x000177e2) eswt_control_pane_g3_copy4_ParamLimits

0x831b,	// (0x000177e2) eswt_control_pane_g3_copy4

0x8328,	// (0x000177ef) eswt_control_pane_g4_copy4_ParamLimits

0x8328,	// (0x000177ef) eswt_control_pane_g4_copy4

0xe2aa,	// (0x0001d771) eswt_ctrl_combo_button_pane

0xe2b2,	// (0x0001d779) eswt_ctrl_input_pane

0xe2ba,	// (0x0001d781) popup_choice_list_window_cp70

0xe2c2,	// (0x0001d789) eswt_ctrl_input_pane_t1

0x2625,	// (0x00011aec) input_focus_pane_cp70

0x77ab,	// (0x00016c72) bg_button_pane_cp70_ParamLimits

0x77ab,	// (0x00016c72) bg_button_pane_cp70

0xe2d0,	// (0x0001d797) eswt_ctrl_combo_button_pane_g1

0x83f2,	// (0x000178b9) wait_bar_pane_cp70

0x4d86,	// (0x0001424d) bg_popup_window_pane_cp70_ParamLimits

0x4d86,	// (0x0001424d) bg_popup_window_pane_cp70

0x83fa,	// (0x000178c1) popup_eswt_tasktip_window_t1

0x8410,	// (0x000178d7) wait_bar_pane_cp71_ParamLimits

0x8410,	// (0x000178d7) wait_bar_pane_cp71

0x841c,	// (0x000178e3) grid_eswt_app_pane

0x3b45,	// (0x0001300c) scroll_pane_cp70

0xe2d8,	// (0x0001d79f) cell_eswt_app_pane_ParamLimits

0xe2d8,	// (0x0001d79f) cell_eswt_app_pane

0xe302,	// (0x0001d7c9) cell_eswt_app_pane_g1_ParamLimits

0xe302,	// (0x0001d7c9) cell_eswt_app_pane_g1

0xe331,	// (0x0001d7f8) cell_eswt_app_pane_g2_ParamLimits

0xe331,	// (0x0001d7f8) cell_eswt_app_pane_g2

0x0001,

0xfc17,	// (0x0001f0de) cell_eswt_app_pane_g_ParamLimits

0xfc17,	// (0x0001f0de) cell_eswt_app_pane_g

0xe35a,	// (0x0001d821) cell_eswt_app_pane_t1_ParamLimits

0xe35a,	// (0x0001d821) cell_eswt_app_pane_t1

0x84df,	// (0x000179a6) grid_highlight_pane_cp70_ParamLimits

0x84df,	// (0x000179a6) grid_highlight_pane_cp70

0x42b3,	// (0x0001377a) set_content_pane_g1

0xd4d9,	// (0x0001c9a0) status_small_volume_pane

0x19e5,	// (0x00010eac) status_small_volume_pane_g1

0x19ed,	// (0x00010eb4) volume_small2_pane

0x19f6,	// (0x00010ebd) volume_small2_pane_g1

0x19ff,	// (0x00010ec6) volume_small2_pane_g2

0x1a08,	// (0x00010ecf) volume_small2_pane_g3

0x1a11,	// (0x00010ed8) volume_small2_pane_g4

0x1a1a,	// (0x00010ee1) volume_small2_pane_g5

0x1a23,	// (0x00010eea) volume_small2_pane_g6

0x1a2c,	// (0x00010ef3) volume_small2_pane_g7

0x1a35,	// (0x00010efc) volume_small2_pane_g8

0x1a3e,	// (0x00010f05) volume_small2_pane_g9

0x1a47,	// (0x00010f0e) volume_small2_pane_g10

0x0009,

0xfc1c,	// (0x0001f0e3) volume_small2_pane_g

0x7bac,	// (0x00017073) fep_vkb_top_text_pane_g1_ParamLimits

0xe201,	// (0x0001d6c8) fep_vkb_top_text_pane_t1_ParamLimits

0x7e21,	// (0x000172e8) popup_preview_fixed_window_g3_ParamLimits

0x7e21,	// (0x000172e8) popup_preview_fixed_window_g3

0xc1c8,	// (0x0001b68f) popup_toolbar_trans_pane

0xdba5,	// (0x0001d06c) aid_height_set_list_ParamLimits

0x6159,	// (0x00015620) aid_size_parent_ParamLimits

0x470a,	// (0x00013bd1) list_highlight_pane_cp2_ParamLimits

0x42b3,	// (0x0001377a) set_content_pane_g1_ParamLimits

0xdd5e,	// (0x0001d225) list_single_image_pane_ParamLimits

0xdd5e,	// (0x0001d225) list_single_image_pane

0xe38c,	// (0x0001d853) aid_size_cell_image_ParamLimits

0xe38c,	// (0x0001d853) aid_size_cell_image

0xe399,	// (0x0001d860) grid_single_image_pane_ParamLimits

0xe399,	// (0x0001d860) grid_single_image_pane

0x56ec,	// (0x00014bb3) list_single_image_pane_g1_ParamLimits

0x56ec,	// (0x00014bb3) list_single_image_pane_g1

0x8504,	// (0x000179cb) list_single_image_pane_g2_ParamLimits

0x8504,	// (0x000179cb) list_single_image_pane_g2

0x0001,

0xfc31,	// (0x0001f0f8) list_single_image_pane_g_ParamLimits

0xfc31,	// (0x0001f0f8) list_single_image_pane_g

0x8518,	// (0x000179df) list_single_image_pane_t1_ParamLimits

0x8518,	// (0x000179df) list_single_image_pane_t1

0xe3a7,	// (0x0001d86e) cell_image_list_pane_ParamLimits

0xe3a7,	// (0x0001d86e) cell_image_list_pane

0xe3bd,	// (0x0001d884) cell_image_list_pane_g1

0xe3c6,	// (0x0001d88d) cell_image_list_pane_g2

0x0001,

0xfc36,	// (0x0001f0fd) cell_image_list_pane_g

0x8554,	// (0x00017a1b) aid_size_cell_tb_trans_pane

0x3543,	// (0x00012a0a) bg_tb_trans_pane

0x8566,	// (0x00017a2d) grid_tb_trans_pane

0x4c64,	// (0x0001412b) bg_tb_trans_pane_g1

0x4c74,	// (0x0001413b) bg_tb_trans_pane_g2

0x4c6c,	// (0x00014133) bg_tb_trans_pane_g3

0x4c84,	// (0x0001414b) bg_tb_trans_pane_g4

0x4c7c,	// (0x00014143) bg_tb_trans_pane_g5

0x4ca4,	// (0x0001416b) bg_tb_trans_pane_g6

0x4c9c,	// (0x00014163) bg_tb_trans_pane_g7

0x4c8c,	// (0x00014153) bg_tb_trans_pane_g8

0x4c94,	// (0x0001415b) bg_tb_trans_pane_g9

0x0008,

0xfc3b,	// (0x0001f102) bg_tb_trans_pane_g

0x857a,	// (0x00017a41) cell_toolbar_trans_pane_ParamLimits

0x857a,	// (0x00017a41) cell_toolbar_trans_pane

0x77e6,	// (0x00016cad) cell_toolbar_trans_pane_g1

0xdfb8,	// (0x0001d47f) list_form2_midp_pane_t1

0xdfc6,	// (0x0001d48d) list_form2_midp_pane_t2

0x0001,

0xfad8,	// (0x0001ef9f) list_form2_midp_pane_t

0x7388,	// (0x0001684f) scroll_pane_cp51_ParamLimits

0x7593,	// (0x00016a5a) form2_midp_wait_pane_g1

0x759c,	// (0x00016a63) form2_midp_wait_pane_g2

0x75a5,	// (0x00016a6c) form2_midp_wait_pane_g3

0x0002,

0xfaed,	// (0x0001efb4) form2_midp_wait_pane_g

0x2719,	// (0x00011be0) list_highlight_pane_cp21_ParamLimits

0x75f1,	// (0x00016ab8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7600,	// (0x00016ac7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x635f,	// (0x00015826) list_single_2graphic_im_pane_ParamLimits

0x635f,	// (0x00015826) list_single_2graphic_im_pane

0xe3cf,	// (0x0001d896) list_single_2graphic_im_pane_g1_ParamLimits

0xe3cf,	// (0x0001d896) list_single_2graphic_im_pane_g1

0xe3e0,	// (0x0001d8a7) list_single_2graphic_im_pane_g2_ParamLimits

0xe3e0,	// (0x0001d8a7) list_single_2graphic_im_pane_g2

0xe3ec,	// (0x0001d8b3) list_single_2graphic_im_pane_g3_ParamLimits

0xe3ec,	// (0x0001d8b3) list_single_2graphic_im_pane_g3

0x0003,

0xfc4e,	// (0x0001f115) list_single_2graphic_im_pane_g_ParamLimits

0xfc4e,	// (0x0001f115) list_single_2graphic_im_pane_g

0xe400,	// (0x0001d8c7) list_single_2graphic_im_pane_t1_ParamLimits

0xe400,	// (0x0001d8c7) list_single_2graphic_im_pane_t1

0x7e2d,	// (0x000172f4) list_single_graphic_2heading_pane_fp_ParamLimits

0x7e2d,	// (0x000172f4) list_single_graphic_2heading_pane_fp

0x7e71,	// (0x00017338) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7e71,	// (0x00017338) list_single_graphic_2heading_pane_fp_g1

0x7e42,	// (0x00017309) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7e42,	// (0x00017309) list_single_graphic_2heading_pane_fp_g2

0x318c,	// (0x00012653) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x318c,	// (0x00012653) list_single_graphic_2heading_pane_fp_g3

0x3569,	// (0x00012a30) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3569,	// (0x00012a30) list_single_graphic_2heading_pane_fp_g4

0x7e4e,	// (0x00017315) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7e4e,	// (0x00017315) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb75,	// (0x0001f03c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0001f03c) list_single_graphic_2heading_pane_fp_g

0x860e,	// (0x00017ad5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x860e,	// (0x00017ad5) list_single_graphic_2heading_pane_fp_t1

0x7ea9,	// (0x00017370) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7ea9,	// (0x00017370) list_single_graphic_2heading_pane_fp_t2

0x8624,	// (0x00017aeb) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8624,	// (0x00017aeb) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc57,	// (0x0001f11e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc57,	// (0x0001f11e) list_single_graphic_2heading_pane_fp_t

0x7872,	// (0x00016d39) fep_hwr_write_pane_g5_ParamLimits

0x7872,	// (0x00016d39) fep_hwr_write_pane_g5

0x787e,	// (0x00016d45) fep_hwr_write_pane_g6_ParamLimits

0x787e,	// (0x00016d45) fep_hwr_write_pane_g6

0x82d0,	// (0x00017797) eswt_shell_pane_ParamLimits

0x4d86,	// (0x0001424d) bg_popup_window_pane_cp18_ParamLimits

0x6079,	// (0x00015540) heading_pane_cp70

0x83fa,	// (0x000178c1) popup_eswt_tasktip_window_t1_ParamLimits

0xd5a7,	// (0x0001ca6e) aid_touch_tab_arrow_left

0xd5bd,	// (0x0001ca84) aid_touch_tab_arrow_right

0xc8d8,	// (0x0001bd9f) title_pane_g3_ParamLimits

0xc8d8,	// (0x0001bd9f) title_pane_g3

0x3422,	// (0x000128e9) set_value_pane_g1

0xc1c8,	// (0x0001b68f) popup_toolbar_trans_pane_ParamLimits

0x8554,	// (0x00017a1b) aid_size_cell_tb_trans_pane_ParamLimits

0x3543,	// (0x00012a0a) bg_tb_trans_pane_ParamLimits

0x8566,	// (0x00017a2d) grid_tb_trans_pane_ParamLimits

0x29bc,	// (0x00011e83) cont_note_pane_ParamLimits

0x29bc,	// (0x00011e83) cont_note_pane

0x2d39,	// (0x00012200) cont_snote2_single_text_pane_ParamLimits

0x2d39,	// (0x00012200) cont_snote2_single_text_pane

0x2d39,	// (0x00012200) cont_snote2_single_graphic_pane_ParamLimits

0x2d39,	// (0x00012200) cont_snote2_single_graphic_pane

0x53d6,	// (0x0001489d) cont_note_wait_pane_ParamLimits

0x53d6,	// (0x0001489d) cont_note_wait_pane

0x53d6,	// (0x0001489d) cont_note_image_pane_ParamLimits

0x53d6,	// (0x0001489d) cont_note_image_pane

0x863a,	// (0x00017b01) popup_note2_window_g1_ParamLimits

0x863a,	// (0x00017b01) popup_note2_window_g1

0x866b,	// (0x00017b32) popup_note2_window_t1_ParamLimits

0x866b,	// (0x00017b32) popup_note2_window_t1

0x86b0,	// (0x00017b77) popup_note2_window_t2_ParamLimits

0x86b0,	// (0x00017b77) popup_note2_window_t2

0x86f5,	// (0x00017bbc) popup_note2_window_t3_ParamLimits

0x86f5,	// (0x00017bbc) popup_note2_window_t3

0x873a,	// (0x00017c01) popup_note2_window_t4_ParamLimits

0x873a,	// (0x00017c01) popup_note2_window_t4

0x2a40,	// (0x00011f07) popup_note2_window_t5_ParamLimits

0x2a40,	// (0x00011f07) popup_note2_window_t5

0x0004,

0xfc63,	// (0x0001f12a) popup_note2_window_t_ParamLimits

0xfc63,	// (0x0001f12a) popup_note2_window_t

0x8769,	// (0x00017c30) popup_note2_image_window_g1_ParamLimits

0x8769,	// (0x00017c30) popup_note2_image_window_g1

0x8775,	// (0x00017c3c) popup_note2_image_window_g2_ParamLimits

0x8775,	// (0x00017c3c) popup_note2_image_window_g2

0x0001,

0xfc6e,	// (0x0001f135) popup_note2_image_window_g_ParamLimits

0xfc6e,	// (0x0001f135) popup_note2_image_window_g

0x8787,	// (0x00017c4e) popup_note2_image_window_t1_ParamLimits

0x8787,	// (0x00017c4e) popup_note2_image_window_t1

0x879f,	// (0x00017c66) popup_note2_image_window_t2_ParamLimits

0x879f,	// (0x00017c66) popup_note2_image_window_t2

0x87b7,	// (0x00017c7e) popup_note2_image_window_t3_ParamLimits

0x87b7,	// (0x00017c7e) popup_note2_image_window_t3

0x0002,

0xfc73,	// (0x0001f13a) popup_note2_image_window_t_ParamLimits

0xfc73,	// (0x0001f13a) popup_note2_image_window_t

0x53e4,	// (0x000148ab) popup_note2_wait_window_g1_ParamLimits

0x53e4,	// (0x000148ab) popup_note2_wait_window_g1

0x87d3,	// (0x00017c9a) popup_note2_wait_window_g2_ParamLimits

0x87d3,	// (0x00017c9a) popup_note2_wait_window_g2

0x53fc,	// (0x000148c3) popup_note2_wait_window_g3_ParamLimits

0x53fc,	// (0x000148c3) popup_note2_wait_window_g3

0x0002,

0xfc7a,	// (0x0001f141) popup_note2_wait_window_g_ParamLimits

0xfc7a,	// (0x0001f141) popup_note2_wait_window_g

0x87df,	// (0x00017ca6) popup_note2_wait_window_t1_ParamLimits

0x87df,	// (0x00017ca6) popup_note2_wait_window_t1

0x87fd,	// (0x00017cc4) popup_note2_wait_window_t2_ParamLimits

0x87fd,	// (0x00017cc4) popup_note2_wait_window_t2

0x881b,	// (0x00017ce2) popup_note2_wait_window_t3_ParamLimits

0x881b,	// (0x00017ce2) popup_note2_wait_window_t3

0x882d,	// (0x00017cf4) popup_note2_wait_window_t4_ParamLimits

0x882d,	// (0x00017cf4) popup_note2_wait_window_t4

0x0003,

0xfc81,	// (0x0001f148) popup_note2_wait_window_t_ParamLimits

0xfc81,	// (0x0001f148) popup_note2_wait_window_t

0x883f,	// (0x00017d06) wait_bar2_pane_ParamLimits

0x883f,	// (0x00017d06) wait_bar2_pane

0x8857,	// (0x00017d1e) popup_snote2_single_text_window_g1_ParamLimits

0x8857,	// (0x00017d1e) popup_snote2_single_text_window_g1

0x887f,	// (0x00017d46) popup_snote2_single_text_window_t1_ParamLimits

0x887f,	// (0x00017d46) popup_snote2_single_text_window_t1

0x88cb,	// (0x00017d92) popup_snote2_single_text_window_t2_ParamLimits

0x88cb,	// (0x00017d92) popup_snote2_single_text_window_t2

0x8917,	// (0x00017dde) popup_snote2_single_text_window_t3_ParamLimits

0x8917,	// (0x00017dde) popup_snote2_single_text_window_t3

0x8958,	// (0x00017e1f) popup_snote2_single_text_window_t4_ParamLimits

0x8958,	// (0x00017e1f) popup_snote2_single_text_window_t4

0x898e,	// (0x00017e55) popup_snote2_single_text_window_t5_ParamLimits

0x898e,	// (0x00017e55) popup_snote2_single_text_window_t5

0x0004,

0xfc8a,	// (0x0001f151) popup_snote2_single_text_window_t_ParamLimits

0xfc8a,	// (0x0001f151) popup_snote2_single_text_window_t

0x89b9,	// (0x00017e80) popup_snote2_single_graphic_window_g1_ParamLimits

0x89b9,	// (0x00017e80) popup_snote2_single_graphic_window_g1

0x89e1,	// (0x00017ea8) popup_snote2_single_graphic_window_g2_ParamLimits

0x89e1,	// (0x00017ea8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc95,	// (0x0001f15c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc95,	// (0x0001f15c) popup_snote2_single_graphic_window_g

0x8a09,	// (0x00017ed0) popup_snote2_single_graphic_window_t1_ParamLimits

0x8a09,	// (0x00017ed0) popup_snote2_single_graphic_window_t1

0x8a55,	// (0x00017f1c) popup_snote2_single_graphic_window_t2_ParamLimits

0x8a55,	// (0x00017f1c) popup_snote2_single_graphic_window_t2

0x8917,	// (0x00017dde) popup_snote2_single_graphic_window_t3_ParamLimits

0x8917,	// (0x00017dde) popup_snote2_single_graphic_window_t3

0x8958,	// (0x00017e1f) popup_snote2_single_graphic_window_t4_ParamLimits

0x8958,	// (0x00017e1f) popup_snote2_single_graphic_window_t4

0x898e,	// (0x00017e55) popup_snote2_single_graphic_window_t5_ParamLimits

0x898e,	// (0x00017e55) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9a,	// (0x0001f161) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9a,	// (0x0001f161) popup_snote2_single_graphic_window_t

0x7249,	// (0x00016710) clock_nsta_pane_cp2_t1

0x7249,	// (0x00016710) clock_nsta_pane_cp2_t2

0x0001,

0xfaae,	// (0x0001ef75) clock_nsta_pane_cp2_t

0x355d,	// (0x00012a24) form_field_data_wide_pane_g1_ParamLimits

0x318c,	// (0x00012653) form_field_data_wide_pane_g2_ParamLimits

0x318c,	// (0x00012653) form_field_data_wide_pane_g2

0x3569,	// (0x00012a30) form_field_data_wide_pane_g3_ParamLimits

0x3569,	// (0x00012a30) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001eb3d) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001eb3d) form_field_data_wide_pane_g

0xdefb,	// (0x0001d3c2) grid_touch_3_pane_ParamLimits

0xdefb,	// (0x0001d3c2) grid_touch_3_pane

0xe431,	// (0x0001d8f8) cell_touch_3_pane_ParamLimits

0xe431,	// (0x0001d8f8) cell_touch_3_pane

0x77e6,	// (0x00016cad) cell_touch_3_pane_g1

0x77e6,	// (0x00016cad) cell_touch_3_pane_g2

0x0001,

0xfb33,	// (0x0001effa) cell_touch_3_pane_g

0x2a98,	// (0x00011f5f) cont_query_data_pane

0x2aa0,	// (0x00011f67) cont_query_data_pane_cp1

0x8acf,	// (0x00017f96) button_value_adjust_pane_cp7

0x8ad7,	// (0x00017f9e) query_popup_pane_cp3

0x3e2c,	// (0x000132f3) bg_popup_sub_pane_cp22_ParamLimits

0x07c9,	// (0x0000fc90) navi_navi_volume_pane_cp2

0x07e4,	// (0x0000fcab) popup_side_volume_key_window_g2

0x07f3,	// (0x0000fcba) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001ebd3) popup_side_volume_key_window_g

0x0810,	// (0x0000fcd7) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001ebda) popup_side_volume_key_window_t

0x4172,	// (0x00013639) popup_side_volume_key_window_ParamLimits

0xcd26,	// (0x0001c1ed) list_double_graphic_pane_g4_ParamLimits

0xcd26,	// (0x0001c1ed) list_double_graphic_pane_g4

0xdd3a,	// (0x0001d201) list_single_2heading_msg_pane_ParamLimits

0xdd3a,	// (0x0001d201) list_single_2heading_msg_pane

0xe479,	// (0x0001d940) list_single_2heading_msg_pane_g1_ParamLimits

0xe479,	// (0x0001d940) list_single_2heading_msg_pane_g1

0xe485,	// (0x0001d94c) list_single_2heading_msg_pane_g2_ParamLimits

0xe485,	// (0x0001d94c) list_single_2heading_msg_pane_g2

0xe498,	// (0x0001d95f) list_single_2heading_msg_pane_g3_ParamLimits

0xe498,	// (0x0001d95f) list_single_2heading_msg_pane_g3

0xe4a4,	// (0x0001d96b) list_single_2heading_msg_pane_g4_ParamLimits

0xe4a4,	// (0x0001d96b) list_single_2heading_msg_pane_g4

0x0003,

0xfca5,	// (0x0001f16c) list_single_2heading_msg_pane_g_ParamLimits

0xfca5,	// (0x0001f16c) list_single_2heading_msg_pane_g

0xe4bc,	// (0x0001d983) list_single_2heading_msg_pane_t1_ParamLimits

0xe4bc,	// (0x0001d983) list_single_2heading_msg_pane_t1

0xe4e4,	// (0x0001d9ab) list_single_2heading_msg_pane_t2_ParamLimits

0xe4e4,	// (0x0001d9ab) list_single_2heading_msg_pane_t2

0xe54f,	// (0x0001da16) list_single_2heading_msg_pane_t3_ParamLimits

0xe54f,	// (0x0001da16) list_single_2heading_msg_pane_t3

0x8bba,	// (0x00018081) list_single_2heading_msg_pane_t4_ParamLimits

0x8bba,	// (0x00018081) list_single_2heading_msg_pane_t4

0x0003,

0xfcae,	// (0x0001f175) list_single_2heading_msg_pane_t_ParamLimits

0xfcae,	// (0x0001f175) list_single_2heading_msg_pane_t

0x266d,	// (0x00011b34) title_pane_g4_ParamLimits

0x266d,	// (0x00011b34) title_pane_g4

0x05d8,	// (0x0000fa9f) title_pane_stacon_g3_ParamLimits

0x05d8,	// (0x0000fa9f) title_pane_stacon_g3

0x85d1,	// (0x00017a98) list_single_2graphic_im_pane_g4_ParamLimits

0x85d1,	// (0x00017a98) list_single_2graphic_im_pane_g4

0x5e41,	// (0x00015308) popup_side_volume_key_window_cp

0x6742,	// (0x00015c09) main_idle_act2_pane_t1

0x11e9,	// (0x000106b0) toolbar_button_pane_g10

0xcbe3,	// (0x0001c0aa) popup_toolbar_window_cp1

0x723a,	// (0x00016701) clock_nsta_pane_cp_t1

0x723a,	// (0x00016701) clock_nsta_pane_cp_t2

0x0001,

0xfaa9,	// (0x0001ef70) clock_nsta_pane_cp_t

0x07c9,	// (0x0000fc90) navi_navi_volume_pane_cp2_ParamLimits

0x07d8,	// (0x0000fc9f) popup_side_volume_key_window_g1_ParamLimits

0x07e4,	// (0x0000fcab) popup_side_volume_key_window_g2_ParamLimits

0x07f3,	// (0x0000fcba) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001ebd3) popup_side_volume_key_window_g_ParamLimits

0x1651,	// (0x00010b18) fep_hwr_aid_pane

0x16f8,	// (0x00010bbf) bg_fep_hwr_top_pane_g4_ParamLimits

0x7842,	// (0x00016d09) fep_hwr_top_pane_g1_ParamLimits

0x7854,	// (0x00016d1b) fep_hwr_top_pane_g2_ParamLimits

0x1718,	// (0x00010bdf) fep_hwr_top_pane_g3_ParamLimits

0xfafe,	// (0x0001efc5) fep_hwr_top_pane_g_ParamLimits

0x172d,	// (0x00010bf4) fep_hwr_top_text_pane_ParamLimits

0x5c04,	// (0x000150cb) aid_touch_tab_arrow_arrow_2

0x5c0d,	// (0x000150d4) aid_touch_tab_arrow_left_2

0x1665,	// (0x00010b2c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x169c,	// (0x00010b63) fep_hwr_prediction_pane

0x79b4,	// (0x00016e7b) fep_vkb_prediction_pane

0xe1e1,	// (0x0001d6a8) fep_vkb_side_pane_g3_ParamLimits

0xe1e1,	// (0x0001d6a8) fep_vkb_side_pane_g3

0x18a8,	// (0x00010d6f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1914,	// (0x00010ddb) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1921,	// (0x00010de8) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbad,	// (0x0001f074) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1a50,	// (0x00010f17) fep_hwr_prediction_pane_g1

0x1a5a,	// (0x00010f21) fep_hwr_prediction_pane_g2

0x1a62,	// (0x00010f29) fep_hwr_prediction_pane_g3

0x1a6a,	// (0x00010f31) fep_hwr_prediction_pane_g4

0x0003,

0xfcb7,	// (0x0001f17e) fep_hwr_prediction_pane_g

0x8bdf,	// (0x000180a6) fep_vkb_prediction_pane_g1

0x8be9,	// (0x000180b0) fep_vkb_prediction_pane_g2

0x8bf1,	// (0x000180b8) fep_vkb_prediction_pane_g3

0x8bf9,	// (0x000180c0) fep_vkb_prediction_pane_g4

0x0003,

0xfcc0,	// (0x0001f187) fep_vkb_prediction_pane_g

0x14d1,	// (0x00010998) slider_set_pane_g3

0x14e5,	// (0x000109ac) slider_set_pane_g4

0x14fd,	// (0x000109c4) slider_set_pane_g5

0x14d1,	// (0x00010998) slider_set_pane_g6

0x1513,	// (0x000109da) slider_set_pane_g7

0x62be,	// (0x00015785) slider_form_pane_g3

0x62c7,	// (0x0001578e) slider_form_pane_g4

0x62cf,	// (0x00015796) slider_form_pane_g5

0x62be,	// (0x00015785) slider_form_pane_g6

0xdcf0,	// (0x0001d1b7) slider_form_pane_g7

0x6a3e,	// (0x00015f05) slider_set_pane_vc_g3

0x6a47,	// (0x00015f0e) slider_set_pane_vc_g4

0x6a50,	// (0x00015f17) slider_set_pane_vc_g5

0x6a3e,	// (0x00015f05) slider_set_pane_vc_g6

0x6a59,	// (0x00015f20) slider_set_pane_vc_g7

0x6f1e,	// (0x000163e5) slider_form_pane_vc_g1

0x6f27,	// (0x000163ee) slider_form_pane_vc_g2

0x6f30,	// (0x000163f7) slider_form_pane_vc_g3

0x6f1e,	// (0x000163e5) slider_form_pane_vc_g4

0x6f39,	// (0x00016400) slider_form_pane_vc_g5

0x0004,

0xfa7b,	// (0x0001ef42) slider_form_pane_vc_g

0x029f,	// (0x0000f766) main_idle_act3_pane

0x8c01,	// (0x000180c8) ai3_links_pane

0xe5bd,	// (0x0001da84) popup_ai3_data_window_ParamLimits

0xe5bd,	// (0x0001da84) popup_ai3_data_window

0x2625,	// (0x00011aec) grid_ai3_links_pane

0xe5d7,	// (0x0001da9e) cell_ai3_links_pane_ParamLimits

0xe5d7,	// (0x0001da9e) cell_ai3_links_pane

0x8c3c,	// (0x00018103) bg_popup_sub_pane_cp11

0x8c49,	// (0x00018110) cell_ai3_links_pane_g1

0x2625,	// (0x00011aec) bg_popup_sub_pane_cp12

0x8c6e,	// (0x00018135) heading_ai3_data_pane

0x8c76,	// (0x0001813d) list_ai3_gene_pane

0x8c82,	// (0x00018149) popup_ai3_data_window_g1

0x8c8a,	// (0x00018151) heading_ai3_data_pane_g1

0x8c92,	// (0x00018159) heading_ai3_data_pane_t1

0x8ca0,	// (0x00018167) list_double_ai3_gene_pane_ParamLimits

0x8ca0,	// (0x00018167) list_double_ai3_gene_pane

0x8cad,	// (0x00018174) list_single_ai3_gene_pane_ParamLimits

0x8cad,	// (0x00018174) list_single_ai3_gene_pane

0x77ab,	// (0x00016c72) list_highlight_pane_cp7_ParamLimits

0x77ab,	// (0x00016c72) list_highlight_pane_cp7

0x8cba,	// (0x00018181) list_single_a13_gene_pane_t1_ParamLimits

0x8cba,	// (0x00018181) list_single_a13_gene_pane_t1

0x8cd1,	// (0x00018198) list_single_ai3_gene_pane_g1

0x8cda,	// (0x000181a1) list_single_ai3_gene_pane_g2

0x0001,

0xfcc9,	// (0x0001f190) list_single_ai3_gene_pane_g

0x8ce2,	// (0x000181a9) list_double_ai3_gene_pane_g1_ParamLimits

0x8ce2,	// (0x000181a9) list_double_ai3_gene_pane_g1

0x8cee,	// (0x000181b5) list_double_ai3_gene_pane_t1_ParamLimits

0x8cee,	// (0x000181b5) list_double_ai3_gene_pane_t1

0x8d0a,	// (0x000181d1) list_double_ai3_gene_pane_t2_ParamLimits

0x8d0a,	// (0x000181d1) list_double_ai3_gene_pane_t2

0x8d20,	// (0x000181e7) list_double_ai3_gene_pane_t3_ParamLimits

0x8d20,	// (0x000181e7) list_double_ai3_gene_pane_t3

0x0002,

0xfcce,	// (0x0001f195) list_double_ai3_gene_pane_t_ParamLimits

0xfcce,	// (0x0001f195) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8ae8,	// (0x00017faf) aid_size_min_col_2

0xe463,	// (0x0001d92a) aid_size_min_msg_ParamLimits

0xe463,	// (0x0001d92a) aid_size_min_msg

0xe1f5,	// (0x0001d6bc) fep_vkb_top_text_pane_g2_ParamLimits

0xe1f5,	// (0x0001d6bc) fep_vkb_top_text_pane_g2

0x0001,

0xfb2e,	// (0x0001eff5) fep_vkb_top_text_pane_g_ParamLimits

0xfb2e,	// (0x0001eff5) fep_vkb_top_text_pane_g

0x029f,	// (0x0000f766) main_hc_apps_shell_pane

0x8d3d,	// (0x00018204) grid_hc_apps_pane_ParamLimits

0x8d3d,	// (0x00018204) grid_hc_apps_pane

0x8d4c,	// (0x00018213) list_hc_apps_pane

0x8d54,	// (0x0001821b) scroll_pane_cp37_ParamLimits

0x8d54,	// (0x0001821b) scroll_pane_cp37

0xe5f1,	// (0x0001dab8) cell_hc_apps_pane_ParamLimits

0xe5f1,	// (0x0001dab8) cell_hc_apps_pane

0xe6af,	// (0x0001db76) cell_hc_apps_pane_g1_ParamLimits

0xe6af,	// (0x0001db76) cell_hc_apps_pane_g1

0x8e3f,	// (0x00018306) cell_hc_apps_pane_g2_ParamLimits

0x8e3f,	// (0x00018306) cell_hc_apps_pane_g2

0x8e5b,	// (0x00018322) cell_hc_apps_pane_g3_ParamLimits

0x8e5b,	// (0x00018322) cell_hc_apps_pane_g3

0x0002,

0xfcd5,	// (0x0001f19c) cell_hc_apps_pane_g_ParamLimits

0xfcd5,	// (0x0001f19c) cell_hc_apps_pane_g

0xe6dc,	// (0x0001dba3) cell_hc_apps_pane_t1_ParamLimits

0xe6dc,	// (0x0001dba3) cell_hc_apps_pane_t1

0x29bc,	// (0x00011e83) grid_highlight_pane_cp10_ParamLimits

0x29bc,	// (0x00011e83) grid_highlight_pane_cp10

0xe71a,	// (0x0001dbe1) list_single_hc_apps_pane_ParamLimits

0xe71a,	// (0x0001dbe1) list_single_hc_apps_pane

0xe747,	// (0x0001dc0e) list_single_hc_apps_pane_g1

0xe760,	// (0x0001dc27) list_single_hc_apps_pane_g2

0x0001,

0xfcdc,	// (0x0001f1a3) list_single_hc_apps_pane_g

0xe779,	// (0x0001dc40) list_single_hc_apps_pane_g2_copy1

0x8f67,	// (0x0001842e) list_single_hc_apps_pane_t1

0x2719,	// (0x00011be0) bg_set_opt_pane_cp_ParamLimits

0x0500,	// (0x0000f9c7) setting_slider_pane_t1_ParamLimits

0x0519,	// (0x0000f9e0) setting_slider_pane_t2_ParamLimits

0x0533,	// (0x0000f9fa) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001ea25) setting_slider_pane_t_ParamLimits

0x054b,	// (0x0000fa12) slider_set_pane_ParamLimits

0x0a72,	// (0x0000ff39) control_pane_g5_ParamLimits

0x0a72,	// (0x0000ff39) control_pane_g5

0x610d,	// (0x000155d4) slider_set_pane_g1_ParamLimits

0x14c5,	// (0x0001098c) slider_set_pane_g2_ParamLimits

0x14d1,	// (0x00010998) slider_set_pane_g3_ParamLimits

0x14e5,	// (0x000109ac) slider_set_pane_g4_ParamLimits

0x14fd,	// (0x000109c4) slider_set_pane_g5_ParamLimits

0x14d1,	// (0x00010998) slider_set_pane_g6_ParamLimits

0x1513,	// (0x000109da) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x0001ee21) slider_set_pane_g_ParamLimits

0x425e,	// (0x00013725) navi_icon_text_pane_ParamLimits

0xd570,	// (0x0001ca37) aid_fill_nsta_2_ParamLimits

0xd5a7,	// (0x0001ca6e) aid_touch_tab_arrow_left_ParamLimits

0xd5bd,	// (0x0001ca84) aid_touch_tab_arrow_right_ParamLimits

0xd658,	// (0x0001cb1f) clock_nsta_pane_ParamLimits

0x5be6,	// (0x000150ad) navi_icon_pane_g1_ParamLimits

0x5bf2,	// (0x000150b9) navi_text_pane_t1_ParamLimits

0x7346,	// (0x0001680d) navi_icon_text_pane_g1_ParamLimits

0x7352,	// (0x00016819) navi_icon_text_pane_t1_ParamLimits

0xe747,	// (0x0001dc0e) list_single_hc_apps_pane_g1_ParamLimits

0xe760,	// (0x0001dc27) list_single_hc_apps_pane_g2_ParamLimits

0xfcdc,	// (0x0001f1a3) list_single_hc_apps_pane_g_ParamLimits

0xe779,	// (0x0001dc40) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8f67,	// (0x0001842e) list_single_hc_apps_pane_t1_ParamLimits

0xb925,	// (0x0001adec) popup_toolbar2_fixed_window_ParamLimits

0xb925,	// (0x0001adec) popup_toolbar2_fixed_window

0xc1be,	// (0x0001b685) popup_toolbar2_float_window

0x2625,	// (0x00011aec) bg_popup_sub_pane_cp27

0x8f95,	// (0x0001845c) grid_toolbar2_float_pane

0x2625,	// (0x00011aec) bg_popup_sub_pane_cp26

0x8f95,	// (0x0001845c) grid_toolbar2_fixed_pane

0xe795,	// (0x0001dc5c) cell_toolbar2_fixed_pane_ParamLimits

0xe795,	// (0x0001dc5c) cell_toolbar2_fixed_pane

0xe7af,	// (0x0001dc76) cell_toolbar2_fixed_pane_g1

0x8fb6,	// (0x0001847d) toolbar2_fixed_button_pane

0x4c64,	// (0x0001412b) toolbar2_fixed_button_pane_g1

0x4c74,	// (0x0001413b) toolbar2_fixed_button_pane_g2

0x4c6c,	// (0x00014133) toolbar2_fixed_button_pane_g3

0x4c84,	// (0x0001414b) toolbar2_fixed_button_pane_g4

0x4c7c,	// (0x00014143) toolbar2_fixed_button_pane_g5

0x4c8c,	// (0x00014153) toolbar2_fixed_button_pane_g6

0x4c94,	// (0x0001415b) toolbar2_fixed_button_pane_g7

0x4ca4,	// (0x0001416b) toolbar2_fixed_button_pane_g8

0x4c9c,	// (0x00014163) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x0001ed23) toolbar2_fixed_button_pane_g

0x8fbe,	// (0x00018485) cell_toolbar2_float_pane_ParamLimits

0x8fbe,	// (0x00018485) cell_toolbar2_float_pane

0x8fcf,	// (0x00018496) cell_toolbar2_float_pane_g1

0x8fb6,	// (0x0001847d) toolbar2_fixed_button_pane_cp

0xe0cf,	// (0x0001d596) fep_vkb_accented_list_pane_ParamLimits

0xe0cf,	// (0x0001d596) fep_vkb_accented_list_pane

0x1888,	// (0x00010d4f) bg_popup_fep_shadow_pane_g9

0x43de,	// (0x000138a5) bg_popup_fep_shadow_pane_cp3

0x380e,	// (0x00012cd5) list_accented_list_pane

0x8fd8,	// (0x0001849f) list_single_accented_list_pane_ParamLimits

0x8fd8,	// (0x0001849f) list_single_accented_list_pane

0x43de,	// (0x000138a5) list_highlight_pane_cp10

0x8fe9,	// (0x000184b0) list_single_accented_list_pane_t1

0xc0e8,	// (0x0001b5af) popup_slider_window_ParamLimits

0xc0e8,	// (0x0001b5af) popup_slider_window

0x8adf,	// (0x00017fa6) aid_indentation_list_msg

0xe8a6,	// (0x0001dd6d) bg_popup_window_pane_cp19

0x9115,	// (0x000185dc) popup_slider_window_g1

0x9131,	// (0x000185f8) popup_slider_window_g2

0x914d,	// (0x00018614) popup_slider_window_g3

0x0005,

0xfce1,	// (0x0001f1a8) popup_slider_window_g

0x91b3,	// (0x0001867a) popup_slider_window_t1

0x9227,	// (0x000186ee) small_volume_slider_vertical_pane

0x77e6,	// (0x00016cad) small_volume_slider_vertical_pane_g1

0x77e6,	// (0x00016cad) small_volume_slider_vertical_pane_g2

0x9243,	// (0x0001870a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf3,	// (0x0001f1ba) small_volume_slider_vertical_pane_g

0xb893,	// (0x0001ad5a) area_side_right_pane_ParamLimits

0xb893,	// (0x0001ad5a) area_side_right_pane

0xc2f4,	// (0x0001b7bb) aid_size_side_button_ParamLimits

0xc2f4,	// (0x0001b7bb) aid_size_side_button

0xc30d,	// (0x0001b7d4) grid_sctrl_middle_pane_ParamLimits

0xc30d,	// (0x0001b7d4) grid_sctrl_middle_pane

0x1aa5,	// (0x00010f6c) sctrl_sk_bottom_pane

0x1ab6,	// (0x00010f7d) sctrl_sk_top_pane

0x1ac8,	// (0x00010f8f) aid_touch_sctrl_top

0x1ad5,	// (0x00010f9c) bg_sctrl_sk_pane_ParamLimits

0x1ad5,	// (0x00010f9c) bg_sctrl_sk_pane

0x1ae3,	// (0x00010faa) sctrl_sk_top_pane_g1

0x1af0,	// (0x00010fb7) sctrl_sk_top_pane_t1

0x1ac8,	// (0x00010f8f) aid_touch_sctrl_bottom

0x1ad5,	// (0x00010f9c) bg_sctrl_sk_pane_cp_ParamLimits

0x1ad5,	// (0x00010f9c) bg_sctrl_sk_pane_cp

0x1b0b,	// (0x00010fd2) sctrl_sk_bottom_pane_g1

0x1af0,	// (0x00010fb7) sctrl_sk_bottom_pane_t1

0xc327,	// (0x0001b7ee) cell_sctrl_middle_pane_ParamLimits

0xc327,	// (0x0001b7ee) cell_sctrl_middle_pane

0xc338,	// (0x0001b7ff) aid_touch_sctrl_middle_ParamLimits

0xc338,	// (0x0001b7ff) aid_touch_sctrl_middle

0xc345,	// (0x0001b80c) bg_sctrl_middle_pane_ParamLimits

0xc345,	// (0x0001b80c) bg_sctrl_middle_pane

0x2178,	// (0x0001163f) cell_sctrl_middle_pane_g1_ParamLimits

0x2178,	// (0x0001163f) cell_sctrl_middle_pane_g1

0xc353,	// (0x0001b81a) cell_sctrl_middle_pane_g2_ParamLimits

0xc353,	// (0x0001b81a) cell_sctrl_middle_pane_g2

0x0001,

0xfcff,	// (0x0001f1c6) cell_sctrl_middle_pane_g_ParamLimits

0xfcff,	// (0x0001f1c6) cell_sctrl_middle_pane_g

0x4c64,	// (0x0001412b) bg_sctrl_middle_pane_g1

0x4c6c,	// (0x00014133) bg_sctrl_middle_pane_g2

0x4c74,	// (0x0001413b) bg_sctrl_middle_pane_g3

0x4c7c,	// (0x00014143) bg_sctrl_middle_pane_g4

0x4c84,	// (0x0001414b) bg_sctrl_middle_pane_g5

0x4c8c,	// (0x00014153) bg_sctrl_middle_pane_g6

0x4c94,	// (0x0001415b) bg_sctrl_middle_pane_g7

0x4c9c,	// (0x00014163) bg_sctrl_middle_pane_g8

0x0007,

0xfd04,	// (0x0001f1cb) bg_sctrl_middle_pane_g

0x4ca4,	// (0x0001416b) bg_sctrl_middle_pane_g8_copy1

0x4c64,	// (0x0001412b) bg_sctrl_sk_pane_g1

0x4c74,	// (0x0001413b) bg_sctrl_sk_pane_g2

0x4c6c,	// (0x00014133) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x0001ed23) bg_sctrl_sk_pane_g

0x2ef7,	// (0x000123be) aid_size_touch_scroll_bar

0x4c84,	// (0x0001414b) bg_sctrl_sk_pane_g4

0x4c7c,	// (0x00014143) bg_sctrl_sk_pane_g5

0x4c8c,	// (0x00014153) bg_sctrl_sk_pane_g6

0x4c94,	// (0x0001415b) bg_sctrl_sk_pane_g7

0x4ca4,	// (0x0001416b) bg_sctrl_sk_pane_g8

0x4c9c,	// (0x00014163) bg_sctrl_sk_pane_g9

0x0c3a,	// (0x00010101) popup_fep_china_hwr2_fs_candidate_window

0xbc02,	// (0x0001b0c9) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbc02,	// (0x0001b0c9) popup_fep_china_hwr2_fs_control_window

0x18a8,	// (0x00010d6f) sctrl_sk_top_pane_g2

0x0001,

0xfcfa,	// (0x0001f1c1) sctrl_sk_top_pane_g

0xe95e,	// (0x0001de25) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe95e,	// (0x0001de25) aid_fep_china_hwr2_fs_cell

0xe972,	// (0x0001de39) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe972,	// (0x0001de39) bg_popup_fep_shadow_pane_cp4

0xe989,	// (0x0001de50) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe989,	// (0x0001de50) bg_popup_fep_shadow_pane_cp5

0xe99b,	// (0x0001de62) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe99b,	// (0x0001de62) popup_fep_china_hwr2_fs_control_bar_grid

0xe9af,	// (0x0001de76) popup_fep_china_hwr2_fs_control_funtion_grid

0x929f,	// (0x00018766) aid_fep_china_hwr2_fs_candi_cell

0x2625,	// (0x00011aec) bg_popup_fep_shadow_pane_cp6

0x92a9,	// (0x00018770) popup_fep_china_hwr2_fs_candidate_grid

0xe9b7,	// (0x0001de7e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe9b7,	// (0x0001de7e) cell_fep_china_hwr2_fs_funtion_grid

0x77e6,	// (0x00016cad) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x92cb,	// (0x00018792) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x92cb,	// (0x00018792) cell_fep_china_hwr2_fs_funtion_grid_g1

0x92d9,	// (0x000187a0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x92d9,	// (0x000187a0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd15,	// (0x0001f1dc) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd15,	// (0x0001f1dc) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9cf,	// (0x0001de96) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9cf,	// (0x0001de96) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe9e4,	// (0x0001deab) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe9e4,	// (0x0001deab) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1a,	// (0x0001f1e1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1a,	// (0x0001f1e1) cell_fep_china_hwr2_fs_funtion_grid_t

0x9320,	// (0x000187e7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9328,	// (0x000187ef) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9330,	// (0x000187f7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1f,	// (0x0001f1e6) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9338,	// (0x000187ff) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9338,	// (0x000187ff) cell_fep_china_hwr2_fs_candidate_grid

0x9351,	// (0x00018818) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9359,	// (0x00018820) popup_fep_china_hwr2_fs_candidate_grid_g21

0x77e6,	// (0x00016cad) cell_fep_china_hwr2_fs_candidate_grid_g1

0x77e6,	// (0x00016cad) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb33,	// (0x0001effa) cell_fep_china_hwr2_fs_candidate_grid_g

0x9361,	// (0x00018828) cell_fep_china_hwr2_fs_candidate_grid_t1

0x482c,	// (0x00013cf3) clock_nsta_pane_cp_24_ParamLimits

0x482c,	// (0x00013cf3) clock_nsta_pane_cp_24

0x48aa,	// (0x00013d71) indicator_nsta_pane_cp_24_ParamLimits

0x48aa,	// (0x00013d71) indicator_nsta_pane_cp_24

0x5a62,	// (0x00014f29) heading_pane_g1

0x0001,

0xf8c1,	// (0x0001ed88) heading_pane_g

0x658b,	// (0x00015a52) grid_sct_catagory_button_pane

0x65bb,	// (0x00015a82) scroll_pane_cp5_ParamLimits

0x7394,	// (0x0001685b) button_value_adjust_pane_cp5_ParamLimits

0x7394,	// (0x0001685b) button_value_adjust_pane_cp5

0x7490,	// (0x00016957) form2_midp_time_pane_ParamLimits

0x936f,	// (0x00018836) cell_sct_catagory_button_pane_ParamLimits

0x936f,	// (0x00018836) cell_sct_catagory_button_pane

0x77ab,	// (0x00016c72) bg_button_pane_cp01_ParamLimits

0x77ab,	// (0x00016c72) bg_button_pane_cp01

0x77e6,	// (0x00016cad) cell_sct_catagory_button_pane_g1

0xc161,	// (0x0001b628) popup_tb_extension_window

0xea00,	// (0x0001dec7) aid_size_cell_ext_ParamLimits

0xea00,	// (0x0001dec7) aid_size_cell_ext

0x2d39,	// (0x00012200) bg_tb_trans_pane_cp1_ParamLimits

0x2d39,	// (0x00012200) bg_tb_trans_pane_cp1

0xea26,	// (0x0001deed) grid_tb_ext_pane_ParamLimits

0xea26,	// (0x0001deed) grid_tb_ext_pane

0xea61,	// (0x0001df28) cell_tb_ext_pane_ParamLimits

0xea61,	// (0x0001df28) cell_tb_ext_pane

0xea89,	// (0x0001df50) cell_tb_ext_pane_g1_ParamLimits

0xea89,	// (0x0001df50) cell_tb_ext_pane_g1

0x9403,	// (0x000188ca) cell_tb_ext_pane_t1

0x29bc,	// (0x00011e83) list_highlight_pane_cp11_ParamLimits

0x29bc,	// (0x00011e83) list_highlight_pane_cp11

0xb93a,	// (0x0001ae01) popup_uni_indicator_window_ParamLimits

0xb93a,	// (0x0001ae01) popup_uni_indicator_window

0x3543,	// (0x00012a0a) bg_popup_sub_pane_cp14

0x941e,	// (0x000188e5) list_uniindi_pane

0x942a,	// (0x000188f1) uniindi_top_pane

0x29bc,	// (0x00011e83) bg_uniindi_top_pane

0x9449,	// (0x00018910) uniindi_top_pane_g1

0x945f,	// (0x00018926) uniindi_top_pane_g2

0x0003,

0xfd26,	// (0x0001f1ed) uniindi_top_pane_g

0x9489,	// (0x00018950) uniindi_top_pane_t1

0x94b3,	// (0x0001897a) list_single_uniindi_pane_ParamLimits

0x94b3,	// (0x0001897a) list_single_uniindi_pane

0x77e6,	// (0x00016cad) bg_uniindi_top_pane_g1

0x94c6,	// (0x0001898d) list_single_uniindi_pane_g1

0x94d9,	// (0x000189a0) list_single_uniindi_pane_t1

0x029f,	// (0x0000f766) control_bg_pane

0x94fe,	// (0x000189c5) bg_sctrl_sk_pane_cp1

0x9507,	// (0x000189ce) bg_sctrl_sk_pane_cp2

0x9510,	// (0x000189d7) control_bg_pane_g1

0x9519,	// (0x000189e0) control_bg_pane_g2

0x0001,

0xfd2f,	// (0x0001f1f6) control_bg_pane_g

0x71ee,	// (0x000166b5) cell_indicator_nsta_pane_g1_ParamLimits

0xdf28,	// (0x0001d3ef) cell_indicator_nsta_pane_g2_ParamLimits

0xfa97,	// (0x0001ef5e) cell_indicator_nsta_pane_g_ParamLimits

0x7518,	// (0x000169df) form2_midp_time_pane_t1_ParamLimits

0x1643,	// (0x00010b0a) main_idle_act4_pane_ParamLimits

0x1643,	// (0x00010b0a) main_idle_act4_pane

0xc161,	// (0x0001b628) popup_tb_extension_window_ParamLimits

0xea48,	// (0x0001df0f) tb_ext_find_pane_ParamLimits

0xea48,	// (0x0001df0f) tb_ext_find_pane

0x9522,	// (0x000189e9) ai_gene_pane_1_cp1

0x4525,	// (0x000139ec) ai_gene_pane_2_cp1

0x952a,	// (0x000189f1) list_single_idle_plugin_calendar_pane

0x9533,	// (0x000189fa) list_single_idle_plugin_notification_pane

0x953c,	// (0x00018a03) list_single_idle_plugin_player_pane

0xeaa6,	// (0x0001df6d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeaa6,	// (0x0001df6d) list_single_idle_plugin_shortcut_pane

0xeace,	// (0x0001df95) main_idle_act4_pane_t1

0xeae4,	// (0x0001dfab) main_idle_act4_pane_t2

0x0001,

0xfd34,	// (0x0001f1fb) main_idle_act4_pane_t

0xeafa,	// (0x0001dfc1) middle_sk_idle_act4_pane_ParamLimits

0xeafa,	// (0x0001dfc1) middle_sk_idle_act4_pane

0xeb16,	// (0x0001dfdd) popup_clock_digital_analogue_window_cp2

0xeb3e,	// (0x0001e005) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb3e,	// (0x0001e005) shortcut_wheel_idle_act4_pane

0x77e6,	// (0x00016cad) shortcut_wheel_idle_act4_pane_g1

0x77e6,	// (0x00016cad) shortcut_wheel_idle_act4_pane_g2

0x77e6,	// (0x00016cad) shortcut_wheel_idle_act4_pane_g3

0x77e6,	// (0x00016cad) shortcut_wheel_idle_act4_pane_g4

0x77e6,	// (0x00016cad) shortcut_wheel_idle_act4_pane_g5

0x95cf,	// (0x00018a96) shortcut_wheel_idle_act4_pane_g6

0x95d7,	// (0x00018a9e) shortcut_wheel_idle_act4_pane_g7

0x95df,	// (0x00018aa6) shortcut_wheel_idle_act4_pane_g8

0x95e7,	// (0x00018aae) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd39,	// (0x0001f200) shortcut_wheel_idle_act4_pane_g

0xd524,	// (0x0001c9eb) middle_sk_idle_act4_pane_g1_ParamLimits

0xd524,	// (0x0001c9eb) middle_sk_idle_act4_pane_g1

0xebbb,	// (0x0001e082) middle_sk_idle_act4_pane_g2_ParamLimits

0xebbb,	// (0x0001e082) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5c,	// (0x0001f223) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5c,	// (0x0001f223) middle_sk_idle_act4_pane_g

0xebd3,	// (0x0001e09a) middle_sk_idle_act4_pane_t1_ParamLimits

0xebd3,	// (0x0001e09a) middle_sk_idle_act4_pane_t1

0xec02,	// (0x0001e0c9) grid_ai_shortcut_pane_ParamLimits

0xec02,	// (0x0001e0c9) grid_ai_shortcut_pane

0xec1f,	// (0x0001e0e6) list_highlight_pane_cp16_ParamLimits

0xec1f,	// (0x0001e0e6) list_highlight_pane_cp16

0xec2c,	// (0x0001e0f3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec2c,	// (0x0001e0f3) list_single_idle_plugin_shortcut_pane_g1

0xec38,	// (0x0001e0ff) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec38,	// (0x0001e0ff) list_single_idle_plugin_shortcut_pane_g2

0xec54,	// (0x0001e11b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec54,	// (0x0001e11b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd61,	// (0x0001f228) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd61,	// (0x0001f228) list_single_idle_plugin_shortcut_pane_g

0xec69,	// (0x0001e130) cell_ai_shortcut_pane_ParamLimits

0xec69,	// (0x0001e130) cell_ai_shortcut_pane

0xec7f,	// (0x0001e146) cell_ai_shortcut_pane_g1_ParamLimits

0xec7f,	// (0x0001e146) cell_ai_shortcut_pane_g1

0x9522,	// (0x000189e9) ai_gene_pane_1_cp2

0x9717,	// (0x00018bde) ai_gene_pane_2_cp2

0x971f,	// (0x00018be6) list_highlight_pane_cp15

0x9728,	// (0x00018bef) list_single_idle_plugin_calendar_pane_g1

0x971f,	// (0x00018be6) list_highlight_pane_cp17

0x9730,	// (0x00018bf7) list_single_idle_plugin_calendar_pane_g1_copy1

0x9738,	// (0x00018bff) list_single_idle_plugin_player_pane_g1

0x67e4,	// (0x00015cab) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd68,	// (0x0001f22f) list_single_idle_plugin_player_pane_g

0x9740,	// (0x00018c07) list_single_idle_plugin_player_pane_t1

0x974e,	// (0x00018c15) list_single_idle_plugin_player_pane_t2

0x975c,	// (0x00018c23) list_single_idle_plugin_player_pane_t3

0x976a,	// (0x00018c31) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6d,	// (0x0001f234) list_single_idle_plugin_player_pane_t

0x9778,	// (0x00018c3f) wait_bar_pane_cp15

0x9780,	// (0x00018c47) grid_ai_notification_pane

0x67e4,	// (0x00015cab) list_single_idle_plugin_notification_pane_g1

0xeca1,	// (0x0001e168) cell_ai_notification_pane_ParamLimits

0xeca1,	// (0x0001e168) cell_ai_notification_pane

0x9796,	// (0x00018c5d) cell_ai_notification_pane_g1

0x979e,	// (0x00018c65) cell_ai_notification_pane_t1

0xecae,	// (0x0001e175) tb_ext_find_button_pane

0xecb6,	// (0x0001e17d) tb_ext_find_pane_g1

0xecbe,	// (0x0001e185) tb_ext_find_pane_t1

0x3d3c,	// (0x00013203) tb_ext_find_button_pane_g1

0x97ca,	// (0x00018c91) tb_ext_find_button_pane_g2

0x0001,

0xfd76,	// (0x0001f23d) tb_ext_find_button_pane_g

0xeace,	// (0x0001df95) main_idle_act4_pane_t1_ParamLimits

0xeae4,	// (0x0001dfab) main_idle_act4_pane_t2_ParamLimits

0xfd34,	// (0x0001f1fb) main_idle_act4_pane_t_ParamLimits

0xeb16,	// (0x0001dfdd) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb2e,	// (0x0001dff5) sat_plugin_idle_act4_pane_ParamLimits

0xeb2e,	// (0x0001dff5) sat_plugin_idle_act4_pane

0xeccc,	// (0x0001e193) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeccc,	// (0x0001e193) sat_plugin_idle_act4_pane_t1

0xece4,	// (0x0001e1ab) sat_plugin_idle_act4_pane_t2_ParamLimits

0xece4,	// (0x0001e1ab) sat_plugin_idle_act4_pane_t2

0xecfc,	// (0x0001e1c3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xecfc,	// (0x0001e1c3) sat_plugin_idle_act4_pane_t3

0xed14,	// (0x0001e1db) sat_plugin_idle_act4_pane_t4_ParamLimits

0xed14,	// (0x0001e1db) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7b,	// (0x0001f242) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7b,	// (0x0001f242) sat_plugin_idle_act4_pane_t

0x0364,	// (0x0000f82b) popup_battery_window_ParamLimits

0x0364,	// (0x0000f82b) popup_battery_window

0x29bc,	// (0x00011e83) bg_popup_sub_pane_cp25_ParamLimits

0x29bc,	// (0x00011e83) bg_popup_sub_pane_cp25

0x981f,	// (0x00018ce6) popup_battery_window_g1_ParamLimits

0x981f,	// (0x00018ce6) popup_battery_window_g1

0x982b,	// (0x00018cf2) popup_battery_window_t1_ParamLimits

0x982b,	// (0x00018cf2) popup_battery_window_t1

0x983d,	// (0x00018d04) popup_battery_window_t2_ParamLimits

0x983d,	// (0x00018d04) popup_battery_window_t2

0x0001,

0xfd84,	// (0x0001f24b) popup_battery_window_t_ParamLimits

0xfd84,	// (0x0001f24b) popup_battery_window_t

0xd3ab,	// (0x0001c872) midp_canvas_pane_ParamLimits

0xd408,	// (0x0001c8cf) midp_keypad_pane_ParamLimits

0xd408,	// (0x0001c8cf) midp_keypad_pane

0x470a,	// (0x00013bd1) main_midp_pane_ParamLimits

0x7258,	// (0x0001671f) signal_pane_g2_cp_ParamLimits

0xed2c,	// (0x0001e1f3) aid_size_cell_midp_keypad_ParamLimits

0xed2c,	// (0x0001e1f3) aid_size_cell_midp_keypad

0xed4a,	// (0x0001e211) midp_keyp_game_grid_pane_ParamLimits

0xed4a,	// (0x0001e211) midp_keyp_game_grid_pane

0xed71,	// (0x0001e238) midp_keyp_rocker_pane_ParamLimits

0xed71,	// (0x0001e238) midp_keyp_rocker_pane

0xedc2,	// (0x0001e289) midp_keyp_sk_left_pane_ParamLimits

0xedc2,	// (0x0001e289) midp_keyp_sk_left_pane

0xee16,	// (0x0001e2dd) midp_keyp_sk_right_pane_ParamLimits

0xee16,	// (0x0001e2dd) midp_keyp_sk_right_pane

0x2625,	// (0x00011aec) bg_button_pane_cp03

0xee6a,	// (0x0001e331) midp_keyp_sk_left_pane_g1

0x2625,	// (0x00011aec) bg_button_pane_cp04

0xee6a,	// (0x0001e331) midp_keyp_sk_right_pane_g1

0x77e6,	// (0x00016cad) midp_keyp_rocker_pane_g1

0xee73,	// (0x0001e33a) keyp_game_cell_pane_ParamLimits

0xee73,	// (0x0001e33a) keyp_game_cell_pane

0x2625,	// (0x00011aec) bg_button_pane_cp02

0xee97,	// (0x0001e35e) keyp_game_cell_pane_g1

0xb8d5,	// (0x0001ad9c) popup_fep_vkb2_window_ParamLimits

0xb8d5,	// (0x0001ad9c) popup_fep_vkb2_window

0xc35f,	// (0x0001b826) aid_size_cell_vkb2_ParamLimits

0xc35f,	// (0x0001b826) aid_size_cell_vkb2

0xc395,	// (0x0001b85c) popup_fep_vkb2_window_g1_ParamLimits

0xc395,	// (0x0001b85c) popup_fep_vkb2_window_g1

0xc3e5,	// (0x0001b8ac) vkb2_area_bottom_pane_ParamLimits

0xc3e5,	// (0x0001b8ac) vkb2_area_bottom_pane

0xc439,	// (0x0001b900) vkb2_area_keypad_pane_ParamLimits

0xc439,	// (0x0001b900) vkb2_area_keypad_pane

0xc481,	// (0x0001b948) vkb2_area_top_pane_ParamLimits

0xc481,	// (0x0001b948) vkb2_area_top_pane

0xc507,	// (0x0001b9ce) vkb2_top_entry_pane_ParamLimits

0xc507,	// (0x0001b9ce) vkb2_top_entry_pane

0xc534,	// (0x0001b9fb) vkb2_top_grid_left_pane_ParamLimits

0xc534,	// (0x0001b9fb) vkb2_top_grid_left_pane

0xc554,	// (0x0001ba1b) vkb2_top_grid_right_pane_ParamLimits

0xc554,	// (0x0001ba1b) vkb2_top_grid_right_pane

0x1d77,	// (0x0001123e) vkb2_cell_keypad_pane_ParamLimits

0x1d77,	// (0x0001123e) vkb2_cell_keypad_pane

0xc59a,	// (0x0001ba61) vkb2_area_bottom_grid_pane_ParamLimits

0xc59a,	// (0x0001ba61) vkb2_area_bottom_grid_pane

0xc5c4,	// (0x0001ba8b) vkb2_area_bottom_pane_g1_ParamLimits

0xc5c4,	// (0x0001ba8b) vkb2_area_bottom_pane_g1

0xc5ea,	// (0x0001bab1) vkb2_area_bottom_pane_g2_ParamLimits

0xc5ea,	// (0x0001bab1) vkb2_area_bottom_pane_g2

0xc61b,	// (0x0001bae2) vkb2_area_bottom_pane_g3_ParamLimits

0xc61b,	// (0x0001bae2) vkb2_area_bottom_pane_g3

0x0002,

0xfd89,	// (0x0001f250) vkb2_area_bottom_pane_g_ParamLimits

0xfd89,	// (0x0001f250) vkb2_area_bottom_pane_g

0x1f21,	// (0x000113e8) vkb2_top_cell_left_pane_ParamLimits

0x1f21,	// (0x000113e8) vkb2_top_cell_left_pane

0xeea0,	// (0x0001e367) vkb2_top_entry_pane_g1_ParamLimits

0xeea0,	// (0x0001e367) vkb2_top_entry_pane_g1

0xeeae,	// (0x0001e375) vkb2_top_entry_pane_t1_ParamLimits

0xeeae,	// (0x0001e375) vkb2_top_entry_pane_t1

0x99ee,	// (0x00018eb5) vkb2_top_entry_pane_t2_ParamLimits

0x99ee,	// (0x00018eb5) vkb2_top_entry_pane_t2

0x9a20,	// (0x00018ee7) vkb2_top_entry_pane_t3_ParamLimits

0x9a20,	// (0x00018ee7) vkb2_top_entry_pane_t3

0x0002,

0xfd90,	// (0x0001f257) vkb2_top_entry_pane_t_ParamLimits

0xfd90,	// (0x0001f257) vkb2_top_entry_pane_t

0xc685,	// (0x0001bb4c) vkb2_top_grid_right_pane_g1_ParamLimits

0xc685,	// (0x0001bb4c) vkb2_top_grid_right_pane_g1

0x1f84,	// (0x0001144b) vkb2_top_grid_right_pane_g2_ParamLimits

0x1f84,	// (0x0001144b) vkb2_top_grid_right_pane_g2

0x1f9c,	// (0x00011463) vkb2_top_grid_right_pane_g3_ParamLimits

0x1f9c,	// (0x00011463) vkb2_top_grid_right_pane_g3

0xc69b,	// (0x0001bb62) vkb2_top_grid_right_pane_g4_ParamLimits

0xc69b,	// (0x0001bb62) vkb2_top_grid_right_pane_g4

0x0003,

0xfd97,	// (0x0001f25e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd97,	// (0x0001f25e) vkb2_top_grid_right_pane_g

0x1fca,	// (0x00011491) vkb2_top_cell_left_pane_g1

0x1fe1,	// (0x000114a8) vkb2_cell_keypad_pane_g1_ParamLimits

0x1fe1,	// (0x000114a8) vkb2_cell_keypad_pane_g1

0x9a65,	// (0x00018f2c) vkb2_cell_keypad_pane_t1_ParamLimits

0x9a65,	// (0x00018f2c) vkb2_cell_keypad_pane_t1

0x1fef,	// (0x000114b6) vkb2_cell_bottom_grid_pane_ParamLimits

0x1fef,	// (0x000114b6) vkb2_cell_bottom_grid_pane

0x2028,	// (0x000114ef) vkb2_cell_bottom_grid_pane_g1

0xeb5f,	// (0x0001e026) aid_call2_pane_cp02

0xeb67,	// (0x0001e02e) aid_call_pane_cp02

0xeb6f,	// (0x0001e036) clock_digital_number_pane_cp10

0xeb77,	// (0x0001e03e) clock_digital_number_pane_cp11

0xeb7f,	// (0x0001e046) clock_digital_number_pane_cp12

0xeb87,	// (0x0001e04e) clock_digital_number_pane_cp13

0xeb8f,	// (0x0001e056) clock_digital_separator_pane_cp10

0x3d3c,	// (0x00013203) popup_clock_digital_analogue_window_cp2_g1

0x3d3c,	// (0x00013203) popup_clock_digital_analogue_window_cp2_g2

0xeb97,	// (0x0001e05e) popup_clock_digital_analogue_window_cp2_g3

0x3d3c,	// (0x00013203) popup_clock_digital_analogue_window_cp2_g4

0xeb97,	// (0x0001e05e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4c,	// (0x0001f213) popup_clock_digital_analogue_window_cp2_g

0xeb9f,	// (0x0001e066) popup_clock_digital_analogue_window_cp2_t1

0xebad,	// (0x0001e074) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd57,	// (0x0001f21e) popup_clock_digital_analogue_window_cp2_t

0x77e6,	// (0x00016cad) clock_digital_number_pane_cp10_g1

0x77e6,	// (0x00016cad) clock_digital_number_pane_cp10_g2

0x0001,

0xfb33,	// (0x0001effa) clock_digital_number_pane_cp10_g

0x77e6,	// (0x00016cad) clock_digital_separator_pane_cp10_g1

0x77e6,	// (0x00016cad) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb33,	// (0x0001effa) clock_digital_separator_pane_cp10_g

0x946b,	// (0x00018932) uniindi_top_pane_g3

0x947c,	// (0x00018943) uniindi_top_pane_g4

0x1e02,	// (0x000112c9) vkb2_row_keypad_pane_ParamLimits

0x1e02,	// (0x000112c9) vkb2_row_keypad_pane

0x2044,	// (0x0001150b) vkb2_cell_t_keypad_pane_ParamLimits

0x2044,	// (0x0001150b) vkb2_cell_t_keypad_pane

0x2054,	// (0x0001151b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2054,	// (0x0001151b) vkb2_cell_t_keypad_pane_cp08

0x2067,	// (0x0001152e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2067,	// (0x0001152e) vkb2_cell_t_keypad_pane_cp09

0x207b,	// (0x00011542) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x207b,	// (0x00011542) vkb2_cell_t_keypad_pane_cp01

0x208c,	// (0x00011553) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x208c,	// (0x00011553) vkb2_cell_t_keypad_pane_cp02

0x209d,	// (0x00011564) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x209d,	// (0x00011564) vkb2_cell_t_keypad_pane_cp03

0x20ae,	// (0x00011575) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x20ae,	// (0x00011575) vkb2_cell_t_keypad_pane_cp04

0x20bf,	// (0x00011586) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x20bf,	// (0x00011586) vkb2_cell_t_keypad_pane_cp05

0x20d0,	// (0x00011597) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x20d0,	// (0x00011597) vkb2_cell_t_keypad_pane_cp06

0x20e1,	// (0x000115a8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x20e1,	// (0x000115a8) vkb2_cell_t_keypad_pane_cp07

0x20f2,	// (0x000115b9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x20f2,	// (0x000115b9) vkb2_cell_t_keypad_pane_cp10

0x18a8,	// (0x00010d6f) vkb2_cell_t_keypad_pane_g1

0x9a7c,	// (0x00018f43) vkb2_cell_t_keypad_pane_t1

0x029f,	// (0x0000f766) popup_grid_graphic2_window

0xeee7,	// (0x0001e3ae) aid_size_cell_graphic2_ParamLimits

0xeee7,	// (0x0001e3ae) aid_size_cell_graphic2

0xef25,	// (0x0001e3ec) bg_popup_window_pane_cp21_ParamLimits

0xef25,	// (0x0001e3ec) bg_popup_window_pane_cp21

0xef33,	// (0x0001e3fa) graphic2_pages_pane_ParamLimits

0xef33,	// (0x0001e3fa) graphic2_pages_pane

0xef96,	// (0x0001e45d) grid_graphic2_control_pane_ParamLimits

0xef96,	// (0x0001e45d) grid_graphic2_control_pane

0xefde,	// (0x0001e4a5) grid_graphic2_pane_ParamLimits

0xefde,	// (0x0001e4a5) grid_graphic2_pane

0xf065,	// (0x0001e52c) cell_graphic2_pane

0x029f,	// (0x0000f766) main_comp_mode_pane

0x8c76,	// (0x0001813d) list_ai3_gene_pane_ParamLimits

0xe8a6,	// (0x0001dd6d) bg_popup_window_pane_cp19_ParamLimits

0x90b9,	// (0x00018580) bg_touch_area_indi_pane_ParamLimits

0x90b9,	// (0x00018580) bg_touch_area_indi_pane

0x90cf,	// (0x00018596) bg_touch_area_indi_pane_cp01_ParamLimits

0x90cf,	// (0x00018596) bg_touch_area_indi_pane_cp01

0x90e5,	// (0x000185ac) bg_touch_area_indi_pane_cp02_ParamLimits

0x90e5,	// (0x000185ac) bg_touch_area_indi_pane_cp02

0x90fb,	// (0x000185c2) bg_touch_area_indi_pane_cp03_ParamLimits

0x90fb,	// (0x000185c2) bg_touch_area_indi_pane_cp03

0x9115,	// (0x000185dc) popup_slider_window_g1_ParamLimits

0x9131,	// (0x000185f8) popup_slider_window_g2_ParamLimits

0x914d,	// (0x00018614) popup_slider_window_g3_ParamLimits

0xfce1,	// (0x0001f1a8) popup_slider_window_g_ParamLimits

0x91b3,	// (0x0001867a) popup_slider_window_t1_ParamLimits

0x9227,	// (0x000186ee) small_volume_slider_vertical_pane_ParamLimits

0xf065,	// (0x0001e52c) cell_graphic2_pane_ParamLimits

0xf0c0,	// (0x0001e587) bg_button_pane_cp10_ParamLimits

0xf0c0,	// (0x0001e587) bg_button_pane_cp10

0xf0d3,	// (0x0001e59a) bg_button_pane_cp11_ParamLimits

0xf0d3,	// (0x0001e59a) bg_button_pane_cp11

0xf0e6,	// (0x0001e5ad) graphic2_pages_pane_g1_ParamLimits

0xf0e6,	// (0x0001e5ad) graphic2_pages_pane_g1

0xf101,	// (0x0001e5c8) graphic2_pages_pane_g2_ParamLimits

0xf101,	// (0x0001e5c8) graphic2_pages_pane_g2

0x0001,

0xfda5,	// (0x0001f26c) graphic2_pages_pane_g_ParamLimits

0xfda5,	// (0x0001f26c) graphic2_pages_pane_g

0xf119,	// (0x0001e5e0) graphic2_pages_pane_t1_ParamLimits

0xf119,	// (0x0001e5e0) graphic2_pages_pane_t1

0xf131,	// (0x0001e5f8) cell_graphic2_control_pane_ParamLimits

0xf131,	// (0x0001e5f8) cell_graphic2_control_pane

0xf163,	// (0x0001e62a) cell_graphic2_pane_g1_ParamLimits

0xf163,	// (0x0001e62a) cell_graphic2_pane_g1

0xd532,	// (0x0001c9f9) cell_graphic2_pane_g2_ParamLimits

0xd532,	// (0x0001c9f9) cell_graphic2_pane_g2

0xef6f,	// (0x0001e436) cell_graphic2_pane_g3_ParamLimits

0xef6f,	// (0x0001e436) cell_graphic2_pane_g3

0xd53f,	// (0x0001ca06) cell_graphic2_pane_g4_ParamLimits

0xd53f,	// (0x0001ca06) cell_graphic2_pane_g4

0xf170,	// (0x0001e637) cell_graphic2_pane_g5_ParamLimits

0xf170,	// (0x0001e637) cell_graphic2_pane_g5

0x0004,

0xfdaa,	// (0x0001f271) cell_graphic2_pane_g_ParamLimits

0xfdaa,	// (0x0001f271) cell_graphic2_pane_g

0xf190,	// (0x0001e657) cell_graphic2_pane_t1_ParamLimits

0xf190,	// (0x0001e657) cell_graphic2_pane_t1

0x5a56,	// (0x00014f1d) grid_highlight_pane_cp11_ParamLimits

0x5a56,	// (0x00014f1d) grid_highlight_pane_cp11

0x29bc,	// (0x00011e83) bg_button_pane_cp05

0xf1d9,	// (0x0001e6a0) cell_graphic2_control_pane_g1

0x77e6,	// (0x00016cad) bg_touch_area_indi_pane_g1

0x9d58,	// (0x0001921f) aid_cmod_rocker_key_size

0x9d62,	// (0x00019229) aid_cmode_itu_key_size

0x9d6c,	// (0x00019233) main_cmode_video_pane

0x9d76,	// (0x0001923d) main_comp_mode_itu_pane

0x9d82,	// (0x00019249) main_comp_mode_rocker_pane

0x9d8e,	// (0x00019255) cell_cmode_rocker_pane_ParamLimits

0x9d8e,	// (0x00019255) cell_cmode_rocker_pane

0x9da0,	// (0x00019267) cell_cmode_itu_pane_ParamLimits

0x9da0,	// (0x00019267) cell_cmode_itu_pane

0x3543,	// (0x00012a0a) bg_button_pane_cp06_ParamLimits

0x3543,	// (0x00012a0a) bg_button_pane_cp06

0x7a64,	// (0x00016f2b) cell_cmode_rocker_pane_g1_ParamLimits

0x7a64,	// (0x00016f2b) cell_cmode_rocker_pane_g1

0x92cb,	// (0x00018792) cell_cmode_rocker_pane_g2_ParamLimits

0x92cb,	// (0x00018792) cell_cmode_rocker_pane_g2

0x0001,

0xfdba,	// (0x0001f281) cell_cmode_rocker_pane_g_ParamLimits

0xfdba,	// (0x0001f281) cell_cmode_rocker_pane_g

0x2625,	// (0x00011aec) bg_button_pane_cp07

0x9db5,	// (0x0001927c) cell_cmode_itu_pane_g1

0x9dbe,	// (0x00019285) cell_cmode_itu_pane_t1

0x9dcc,	// (0x00019293) cell_cmode_itu_pane_t2

0x0001,

0xfdbf,	// (0x0001f286) cell_cmode_itu_pane_t

0x94ee,	// (0x000189b5) aid_touch_ctrl_left

0x94f6,	// (0x000189bd) aid_touch_ctrl_right

0x2625,	// (0x00011aec) compa_mode_pane

0xf1fd,	// (0x0001e6c4) aid_cmod_rocker_key_size_cp

0xf207,	// (0x0001e6ce) aid_cmode_itu_key_size_cp

0x9dee,	// (0x000192b5) compa_mode_pane_g1

0x9df6,	// (0x000192bd) compa_mode_pane_g2

0x9dfe,	// (0x000192c5) compa_mode_pane_g3

0x0002,

0xfdc4,	// (0x0001f28b) compa_mode_pane_g

0xf211,	// (0x0001e6d8) main_comp_mode_itu_pane_cp

0xf219,	// (0x0001e6e0) main_comp_mode_rocker_pane_cp

0xf221,	// (0x0001e6e8) cell_cmode_itu_pane_cp_ParamLimits

0xf221,	// (0x0001e6e8) cell_cmode_itu_pane_cp

0xf236,	// (0x0001e6fd) cell_cmode_rocker_pane_cp_ParamLimits

0xf236,	// (0x0001e6fd) cell_cmode_rocker_pane_cp

0x3543,	// (0x00012a0a) bg_button_pane_cp06_cp_ParamLimits

0x3543,	// (0x00012a0a) bg_button_pane_cp06_cp

0x7a64,	// (0x00016f2b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7a64,	// (0x00016f2b) cell_cmode_rocker_pane_g1_cp

0x77e6,	// (0x00016cad) cell_cmode_rocker_pane_g2_cp

0x2625,	// (0x00011aec) bg_button_pane_cp07_cp

0xf248,	// (0x0001e70f) cell_cmode_itu_pane_g1_cp

0xf251,	// (0x0001e718) cell_cmode_itu_pane_t1_cp

0xf251,	// (0x0001e718) cell_cmode_itu_pane_t2_cp

0xdce6,	// (0x0001d1ad) settings_code_pane_cp2

0x2719,	// (0x00011be0) bg_popup_window_pane_cp3_ParamLimits

0x2bbc,	// (0x00012083) heading_pane_cp3_ParamLimits

0x2bc8,	// (0x0001208f) listscroll_popup_graphic_pane_ParamLimits

0x1651,	// (0x00010b18) fep_hwr_aid_pane_ParamLimits

0x1ac8,	// (0x00010f8f) aid_touch_sctrl_top_ParamLimits

0x1ae3,	// (0x00010faa) sctrl_sk_top_pane_g1_ParamLimits

0x18a8,	// (0x00010d6f) sctrl_sk_top_pane_g2_ParamLimits

0xfcfa,	// (0x0001f1c1) sctrl_sk_top_pane_g_ParamLimits

0x1af0,	// (0x00010fb7) sctrl_sk_top_pane_t1_ParamLimits

0x1ac8,	// (0x00010f8f) aid_touch_sctrl_bottom_ParamLimits

0x1af0,	// (0x00010fb7) sctrl_sk_bottom_pane_t1_ParamLimits

0x9437,	// (0x000188fe) aid_area_touch_clock

0xc4c9,	// (0x0001b990) aid_vkb2_area_top_pane_cell_ParamLimits

0xc4c9,	// (0x0001b990) aid_vkb2_area_top_pane_cell

0xc574,	// (0x0001ba3b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc574,	// (0x0001ba3b) aid_vkb2_area_bottom_pane_cell

0x99a6,	// (0x00018e6d) popup_char_count_window

0x9e4b,	// (0x00019312) popup_char_count_window_g1

0x9e54,	// (0x0001931b) popup_char_count_window_g2

0x9e5d,	// (0x00019324) popup_char_count_window_g3

0x0002,

0xfdcb,	// (0x0001f292) popup_char_count_window_g

0x9e66,	// (0x0001932d) popup_char_count_window_t1

0x1b9f,	// (0x00011066) popup_fep_char_preview_window_ParamLimits

0x1b9f,	// (0x00011066) popup_fep_char_preview_window

0xc4e9,	// (0x0001b9b0) vkb2_top_candi_pane_ParamLimits

0xc4e9,	// (0x0001b9b0) vkb2_top_candi_pane

0xf25f,	// (0x0001e726) cell_vkb2_top_candi_pane_ParamLimits

0xf25f,	// (0x0001e726) cell_vkb2_top_candi_pane

0x2107,	// (0x000115ce) bg_popup_fep_char_preview_window_ParamLimits

0x2107,	// (0x000115ce) bg_popup_fep_char_preview_window

0x2115,	// (0x000115dc) popup_fep_char_preview_window_t1_ParamLimits

0x2115,	// (0x000115dc) popup_fep_char_preview_window_t1

0x9ec1,	// (0x00019388) bg_popup_fep_char_preview_window_g1

0x9ec9,	// (0x00019390) bg_popup_fep_char_preview_window_g2

0x9ed1,	// (0x00019398) bg_popup_fep_char_preview_window_g3

0x9ed9,	// (0x000193a0) bg_popup_fep_char_preview_window_g4

0x9ee1,	// (0x000193a8) bg_popup_fep_char_preview_window_g5

0x214f,	// (0x00011616) bg_popup_fep_char_preview_window_g6

0x9ee9,	// (0x000193b0) bg_popup_fep_char_preview_window_g7

0x9ef1,	// (0x000193b8) bg_popup_fep_char_preview_window_g8

0x9ef9,	// (0x000193c0) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd2,	// (0x0001f299) bg_popup_fep_char_preview_window_g

0x18a8,	// (0x00010d6f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x18a8,	// (0x00010d6f) cell_vkb2_top_candi_pane_g1

0x18b6,	// (0x00010d7d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x18b6,	// (0x00010d7d) cell_vkb2_top_candi_pane_g2

0x9a44,	// (0x00018f0b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9a44,	// (0x00018f0b) cell_vkb2_top_candi_pane_g3

0x2157,	// (0x0001161e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2157,	// (0x0001161e) cell_vkb2_top_candi_pane_g4

0x80d4,	// (0x0001759b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x80d4,	// (0x0001759b) cell_vkb2_top_candi_pane_g5

0x2178,	// (0x0001163f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2178,	// (0x0001163f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde5,	// (0x0001f2ac) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde5,	// (0x0001f2ac) cell_vkb2_top_candi_pane_g

0x2186,	// (0x0001164d) cell_vkb2_top_candi_pane_t1

0x14b1,	// (0x00010978) aid_size_touch_slider_mark_ParamLimits

0x14b1,	// (0x00010978) aid_size_touch_slider_mark

0xef7c,	// (0x0001e443) grid_graphic2_catg_pane_ParamLimits

0xef7c,	// (0x0001e443) grid_graphic2_catg_pane

0xf038,	// (0x0001e4ff) popup_grid_graphic2_window_t1_ParamLimits

0xf038,	// (0x0001e4ff) popup_grid_graphic2_window_t1

0xf04e,	// (0x0001e515) popup_grid_graphic2_window_t2_ParamLimits

0xf04e,	// (0x0001e515) popup_grid_graphic2_window_t2

0x0001,

0xfda0,	// (0x0001f267) popup_grid_graphic2_window_t_ParamLimits

0xfda0,	// (0x0001f267) popup_grid_graphic2_window_t

0x29bc,	// (0x00011e83) bg_button_pane_cp05_ParamLimits

0xf1d9,	// (0x0001e6a0) cell_graphic2_control_pane_g1_ParamLimits

0xf2c5,	// (0x0001e78c) cell_graphic2_catg_pane_ParamLimits

0xf2c5,	// (0x0001e78c) cell_graphic2_catg_pane

0x2625,	// (0x00011aec) bg_button_pane_cp12

0xf2d7,	// (0x0001e79e) cell_graphic2_catg_pane_g1

0x9403,	// (0x000188ca) cell_tb_ext_pane_t1_ParamLimits

0x1f41,	// (0x00011408) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1f41,	// (0x00011408) vkb2_top_cell_right_narrow_pane

0x1f59,	// (0x00011420) vkb2_top_cell_right_wide_pane_ParamLimits

0x1f59,	// (0x00011420) vkb2_top_cell_right_wide_pane

0x1643,	// (0x00010b0a) bg_vkb2_func_pane_ParamLimits

0x1643,	// (0x00010b0a) bg_vkb2_func_pane

0x1fca,	// (0x00011491) vkb2_top_cell_left_pane_g1_ParamLimits

0x1643,	// (0x00010b0a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1643,	// (0x00010b0a) bg_vkb2_fuc_pane_cp03

0x2028,	// (0x000114ef) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4c6c,	// (0x00014133) bg_vkb2_func_pane_g1

0x4c74,	// (0x0001413b) bg_vkb2_func_pane_g2

0x4c84,	// (0x0001414b) bg_vkb2_func_pane_g3

0x4c7c,	// (0x00014143) bg_vkb2_func_pane_g4

0x4c8c,	// (0x00014153) bg_vkb2_func_pane_g5

0x4c94,	// (0x0001415b) bg_vkb2_func_pane_g6

0x4c9c,	// (0x00014163) bg_vkb2_func_pane_g7

0x4ca4,	// (0x0001416b) bg_vkb2_func_pane_g8

0x4c64,	// (0x0001412b) bg_vkb2_func_pane_g9

0x0008,

0xfdf2,	// (0x0001f2b9) bg_vkb2_func_pane_g

0x1643,	// (0x00010b0a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1643,	// (0x00010b0a) bg_vkb2_fuc_pane_cp01

0x1fca,	// (0x00011491) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1fca,	// (0x00011491) vkb2_top_cell_right_wide_pane_g1

0x1643,	// (0x00010b0a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1643,	// (0x00010b0a) bg_vkb2_fuc_pane_cp02

0x2028,	// (0x000114ef) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2028,	// (0x000114ef) vkb2_top_cell_right_narrow_pane_g1

0xe7e8,	// (0x0001dcaf) aid_touch_area_decrease_ParamLimits

0xe7e8,	// (0x0001dcaf) aid_touch_area_decrease

0xe822,	// (0x0001dce9) aid_touch_area_increase_ParamLimits

0xe822,	// (0x0001dce9) aid_touch_area_increase

0xe84a,	// (0x0001dd11) aid_touch_area_mute_ParamLimits

0xe84a,	// (0x0001dd11) aid_touch_area_mute

0xe872,	// (0x0001dd39) aid_touch_area_slider_ParamLimits

0xe872,	// (0x0001dd39) aid_touch_area_slider

0xe8b2,	// (0x0001dd79) popup_slider_window_g4_ParamLimits

0xe8b2,	// (0x0001dd79) popup_slider_window_g4

0xe8da,	// (0x0001dda1) popup_slider_window_g5_ParamLimits

0xe8da,	// (0x0001dda1) popup_slider_window_g5

0xe90e,	// (0x0001ddd5) popup_slider_window_g6_ParamLimits

0xe90e,	// (0x0001ddd5) popup_slider_window_g6

0x91e1,	// (0x000186a8) popup_slider_window_t2_ParamLimits

0x91e1,	// (0x000186a8) popup_slider_window_t2

0x0001,

0xfcee,	// (0x0001f1b5) popup_slider_window_t_ParamLimits

0xfcee,	// (0x0001f1b5) popup_slider_window_t

0xe92a,	// (0x0001ddf1) slider_pane_ParamLimits

0xe92a,	// (0x0001ddf1) slider_pane

0x9f1c,	// (0x000193e3) slider_pane_g1_ParamLimits

0x9f1c,	// (0x000193e3) slider_pane_g1

0x9f30,	// (0x000193f7) slider_pane_g2_ParamLimits

0x9f30,	// (0x000193f7) slider_pane_g2

0x9f46,	// (0x0001940d) slider_pane_g3_ParamLimits

0x9f46,	// (0x0001940d) slider_pane_g3

0x0003,

0xfe05,	// (0x0001f2cc) slider_pane_g_ParamLimits

0xfe05,	// (0x0001f2cc) slider_pane_g

0xc1a9,	// (0x0001b670) popup_tb_float_extension_window_ParamLimits

0xc1a9,	// (0x0001b670) popup_tb_float_extension_window

0x9f72,	// (0x00019439) aid_size_cell_tb_float_ext

0x2625,	// (0x00011aec) bg_popup_sub_window_cp28

0x9f7e,	// (0x00019445) grid_tb_float_ext_pane

0x9f88,	// (0x0001944f) cell_tb_float_ext_pane_ParamLimits

0x9f88,	// (0x0001944f) cell_tb_float_ext_pane

0x9fa2,	// (0x00019469) cell_tb_float_ext_pane_g1

0x9fab,	// (0x00019472) grid_highlight_pane_cp12

0xc2d2,	// (0x0001b799) cell_last_hwr_side_pane_ParamLimits

0xc2d2,	// (0x0001b799) cell_last_hwr_side_pane

0x77e6,	// (0x00016cad) cell_last_hwr_side_pane_g1

0x9fb4,	// (0x0001947b) cell_last_hwr_side_pane_g2

0x0001,

0xfe0e,	// (0x0001f2d5) cell_last_hwr_side_pane_g

0xc650,	// (0x0001bb17) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc650,	// (0x0001bb17) vkb2_area_bottom_space_btn_pane

0x18a8,	// (0x00010d6f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9a7c,	// (0x00018f43) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2186,	// (0x0001164d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x21a5,	// (0x0001166c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x21a5,	// (0x0001166c) vkb2_area_bottom_space_btn_pane_g1

0x21df,	// (0x000116a6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x21df,	// (0x000116a6) vkb2_area_bottom_space_btn_pane_g2

0x2215,	// (0x000116dc) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2215,	// (0x000116dc) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe13,	// (0x0001f2da) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe13,	// (0x0001f2da) vkb2_area_bottom_space_btn_pane_g

0x1706,	// (0x00010bcd) cel_fep_hwr_func_pane_ParamLimits

0x1706,	// (0x00010bcd) cel_fep_hwr_func_pane

0xc2a7,	// (0x0001b76e) cell_hwr_side_button_pane_ParamLimits

0xc2a7,	// (0x0001b76e) cell_hwr_side_button_pane

0x9437,	// (0x000188fe) aid_area_touch_clock_ParamLimits

0x29bc,	// (0x00011e83) bg_uniindi_top_pane_ParamLimits

0x9449,	// (0x00018910) uniindi_top_pane_g1_ParamLimits

0x945f,	// (0x00018926) uniindi_top_pane_g2_ParamLimits

0x946b,	// (0x00018932) uniindi_top_pane_g3_ParamLimits

0x947c,	// (0x00018943) uniindi_top_pane_g4_ParamLimits

0xfd26,	// (0x0001f1ed) uniindi_top_pane_g_ParamLimits

0x9489,	// (0x00018950) uniindi_top_pane_t1_ParamLimits

0x29bc,	// (0x00011e83) bg_vkb2_func_pane_cp01_ParamLimits

0x29bc,	// (0x00011e83) bg_vkb2_func_pane_cp01

0x9fbd,	// (0x00019484) cel_fep_hwr_func_pane_g1_ParamLimits

0x9fbd,	// (0x00019484) cel_fep_hwr_func_pane_g1

0x29bc,	// (0x00011e83) bg_vkb2_func_pane_cp02_ParamLimits

0x29bc,	// (0x00011e83) bg_vkb2_func_pane_cp02

0x9fbd,	// (0x00019484) cell_hwr_side_button_pane_g1_ParamLimits

0x9fbd,	// (0x00019484) cell_hwr_side_button_pane_g1

0x4ab7,	// (0x00013f7e) status_pane_g4_ParamLimits

0x4ab7,	// (0x00013f7e) status_pane_g4

0x4ad1,	// (0x00013f98) status_pane_t1

0x752b,	// (0x000169f2) form2_midp_gauge_slider_cont_pane

0x7533,	// (0x000169fa) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe027,	// (0x0001d4ee) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe039,	// (0x0001d500) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae6,	// (0x0001efad) form2_midp_gauge_slider_pane_t_ParamLimits

0x7569,	// (0x00016a30) form2_midp_slider_pane_ParamLimits

0x1b5f,	// (0x00011026) aid_size_cell_func_vkb2_ParamLimits

0x1b5f,	// (0x00011026) aid_size_cell_func_vkb2

0x9f5e,	// (0x00019425) slider_pane_g4_ParamLimits

0x9f5e,	// (0x00019425) slider_pane_g4

0xc6b1,	// (0x0001bb78) form2_midp_gauge_slider_pane_t2_cp01

0xc6bf,	// (0x0001bb86) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc6bf,	// (0x0001bb86) form2_midp_gauge_slider_pane_t3_cp01

0x228a,	// (0x00011751) form2_midp_slider_pane_cp01

0x2625,	// (0x00011aec) navi_smil_pane

0x9ff6,	// (0x000194bd) navi_smil_pane_g1

0x9ffe,	// (0x000194c5) navi_smil_pane_t1

0x9fcb,	// (0x00019492) form2_midp_slider_pane_g1

0x9fd4,	// (0x0001949b) form2_midp_slider_pane_g2

0x9fdc,	// (0x000194a3) form2_midp_slider_pane_g3

0x9fcb,	// (0x00019492) form2_midp_slider_pane_g4

0xf2e0,	// (0x0001e7a7) form2_midp_slider_pane_g5

0x0004,

0xfe1c,	// (0x0001f2e3) form2_midp_slider_pane_g

0x224f,	// (0x00011716) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x224f,	// (0x00011716) vkb2_area_bottom_space_btn_pane_g4

0xd6a3,	// (0x0001cb6a) lc0_navi_pane_ParamLimits

0xd6a3,	// (0x0001cb6a) lc0_navi_pane

0xd70d,	// (0x0001cbd4) lc0_stat_indi_pane_ParamLimits

0xd70d,	// (0x0001cbd4) lc0_stat_indi_pane

0xd722,	// (0x0001cbe9) ls0_title_pane_ParamLimits

0xd722,	// (0x0001cbe9) ls0_title_pane

0x3543,	// (0x00012a0a) bg_popup_sub_pane_cp14_ParamLimits

0x941e,	// (0x000188e5) list_uniindi_pane_ParamLimits

0x942a,	// (0x000188f1) uniindi_top_pane_ParamLimits

0x94c6,	// (0x0001898d) list_single_uniindi_pane_g1_ParamLimits

0x94d9,	// (0x000189a0) list_single_uniindi_pane_t1_ParamLimits

0xc6dc,	// (0x0001bba3) lc0_stat_clock_pane_ParamLimits

0xc6dc,	// (0x0001bba3) lc0_stat_clock_pane

0xf2eb,	// (0x0001e7b2) lc0_stat_indi_pane_g1_ParamLimits

0xf2eb,	// (0x0001e7b2) lc0_stat_indi_pane_g1

0xf2f8,	// (0x0001e7bf) lc0_stat_indi_pane_g2_ParamLimits

0xf2f8,	// (0x0001e7bf) lc0_stat_indi_pane_g2

0x0001,

0xfe27,	// (0x0001f2ee) lc0_stat_indi_pane_g_ParamLimits

0xfe27,	// (0x0001f2ee) lc0_stat_indi_pane_g

0xc6e9,	// (0x0001bbb0) lc0_uni_indicator_pane_ParamLimits

0xc6e9,	// (0x0001bbb0) lc0_uni_indicator_pane

0xf305,	// (0x0001e7cc) ls0_title_pane_g1_ParamLimits

0xf305,	// (0x0001e7cc) ls0_title_pane_g1

0xf319,	// (0x0001e7e0) ls0_title_pane_t1_ParamLimits

0xf319,	// (0x0001e7e0) ls0_title_pane_t1

0xc6f6,	// (0x0001bbbd) lc0_uni_indicator_pane_g1_ParamLimits

0xc6f6,	// (0x0001bbbd) lc0_uni_indicator_pane_g1

0xa070,	// (0x00019537) lc0_stat_clock_pane_t1

0x029f,	// (0x0000f766) main_ai5_pane

0xa07e,	// (0x00019545) ai5_sk_pane_ParamLimits

0xa07e,	// (0x00019545) ai5_sk_pane

0xf347,	// (0x0001e80e) cell_ai5_widget_pane_ParamLimits

0xf347,	// (0x0001e80e) cell_ai5_widget_pane

0xa146,	// (0x0001960d) aid_size_cell_widget_grid

0xa15c,	// (0x00019623) bg_ai5_widget_pane_ParamLimits

0xa15c,	// (0x00019623) bg_ai5_widget_pane

0xa1d4,	// (0x0001969b) cell_ai5_widget_pane_g2

0xa1e8,	// (0x000196af) cell_ai5_widget_pane_g3

0xa202,	// (0x000196c9) cell_ai5_widget_pane_g4

0xa212,	// (0x000196d9) cell_ai5_widget_pane_g5

0xa222,	// (0x000196e9) cell_ai5_widget_pane_g6

0xa22e,	// (0x000196f5) cell_ai5_widget_pane_g7

0xa276,	// (0x0001973d) cell_ai5_widget_pane_t1_ParamLimits

0xa276,	// (0x0001973d) cell_ai5_widget_pane_t1

0xa293,	// (0x0001975a) cell_ai5_widget_pane_t2_ParamLimits

0xa293,	// (0x0001975a) cell_ai5_widget_pane_t2

0xa2ab,	// (0x00019772) cell_ai5_widget_pane_t3_ParamLimits

0xa2ab,	// (0x00019772) cell_ai5_widget_pane_t3

0xa2c3,	// (0x0001978a) cell_ai5_widget_pane_t4_ParamLimits

0xa2c3,	// (0x0001978a) cell_ai5_widget_pane_t4

0xa2e9,	// (0x000197b0) cell_ai5_widget_pane_t5_ParamLimits

0xa2e9,	// (0x000197b0) cell_ai5_widget_pane_t5

0xa309,	// (0x000197d0) cell_ai5_widget_pane_t6_ParamLimits

0xa309,	// (0x000197d0) cell_ai5_widget_pane_t6

0xa31b,	// (0x000197e2) cell_ai5_widget_pane_t7_ParamLimits

0xa31b,	// (0x000197e2) cell_ai5_widget_pane_t7

0xa334,	// (0x000197fb) cell_ai5_widget_pane_t8_ParamLimits

0xa334,	// (0x000197fb) cell_ai5_widget_pane_t8

0x0009,

0xfe41,	// (0x0001f308) cell_ai5_widget_pane_t_ParamLimits

0xfe41,	// (0x0001f308) cell_ai5_widget_pane_t

0xa393,	// (0x0001985a) grid_ai5_widget_pane

0x3543,	// (0x00012a0a) highlight_cell_ai5_widget_pane_ParamLimits

0x3543,	// (0x00012a0a) highlight_cell_ai5_widget_pane

0xf3ad,	// (0x0001e874) ai5_sk_left_pane

0xf3b7,	// (0x0001e87e) ai5_sk_middle_pane

0xf3c1,	// (0x0001e888) ai5_sk_right_pane

0xa3c8,	// (0x0001988f) bg_ai5_widget_pane_g1_ParamLimits

0xa3c8,	// (0x0001988f) bg_ai5_widget_pane_g1

0xa3d4,	// (0x0001989b) bg_ai5_widget_pane_g2_ParamLimits

0xa3d4,	// (0x0001989b) bg_ai5_widget_pane_g2

0xa3e0,	// (0x000198a7) bg_ai5_widget_pane_g3_ParamLimits

0xa3e0,	// (0x000198a7) bg_ai5_widget_pane_g3

0xa3ec,	// (0x000198b3) bg_ai5_widget_pane_g4_ParamLimits

0xa3ec,	// (0x000198b3) bg_ai5_widget_pane_g4

0xa3f8,	// (0x000198bf) bg_ai5_widget_pane_g5_ParamLimits

0xa3f8,	// (0x000198bf) bg_ai5_widget_pane_g5

0xa404,	// (0x000198cb) bg_ai5_widget_pane_g6_ParamLimits

0xa404,	// (0x000198cb) bg_ai5_widget_pane_g6

0xa410,	// (0x000198d7) bg_ai5_widget_pane_g7_ParamLimits

0xa410,	// (0x000198d7) bg_ai5_widget_pane_g7

0xa41c,	// (0x000198e3) bg_ai5_widget_pane_g8_ParamLimits

0xa41c,	// (0x000198e3) bg_ai5_widget_pane_g8

0xa428,	// (0x000198ef) bg_ai5_widget_pane_g9_ParamLimits

0xa428,	// (0x000198ef) bg_ai5_widget_pane_g9

0x0008,

0xfe56,	// (0x0001f31d) bg_ai5_widget_pane_g_ParamLimits

0xfe56,	// (0x0001f31d) bg_ai5_widget_pane_g

0xa45a,	// (0x00019921) cell_shortcut_ai5_widget_pane_ParamLimits

0xa45a,	// (0x00019921) cell_shortcut_ai5_widget_pane

0x43de,	// (0x000138a5) bg_cell_shortcut_ai5_widget_pane

0xa46b,	// (0x00019932) cell_grid_ai5_widget_pane_g1

0x43de,	// (0x000138a5) highlight_cell_shortcut_ai5_widget_pane

0x4c6c,	// (0x00014133) ai5_sk_left_pane_g1

0xa474,	// (0x0001993b) ai5_sk_left_pane_g2

0xa47c,	// (0x00019943) ai5_sk_left_pane_g3

0xa484,	// (0x0001994b) ai5_sk_left_pane_g4

0x0003,

0xfe69,	// (0x0001f330) ai5_sk_left_pane_g

0xa48c,	// (0x00019953) ai5_sk_left_pane_t1

0x4c74,	// (0x0001413b) ai5_sk_right_pane_g1

0xa49a,	// (0x00019961) ai5_sk_right_pane_g2

0xa4a2,	// (0x00019969) ai5_sk_right_pane_g3

0xa4aa,	// (0x00019971) ai5_sk_right_pane_g4

0x0003,

0xfe72,	// (0x0001f339) ai5_sk_right_pane_g

0xa4b2,	// (0x00019979) ai5_sk_right_pane_t1

0x4c74,	// (0x0001413b) ai5_sk_middle_pane_g1

0x4c6c,	// (0x00014133) ai5_sk_middle_pane_g2

0x4c8c,	// (0x00014153) ai5_sk_middle_pane_g3

0xa4a2,	// (0x00019969) ai5_sk_middle_pane_g4

0xa47c,	// (0x00019943) ai5_sk_middle_pane_g5

0xa4c0,	// (0x00019987) ai5_sk_middle_pane_g6

0xf3cb,	// (0x0001e892) ai5_sk_middle_pane_g7

0x0006,

0xfe7b,	// (0x0001f342) ai5_sk_middle_pane_g

0xd58f,	// (0x0001ca56) aid_touch_area_size_lc0_ParamLimits

0xd58f,	// (0x0001ca56) aid_touch_area_size_lc0

0x18d7,	// (0x00010d9e) cell_hwr_candidate_pane_t1_ParamLimits

0x478e,	// (0x00013c55) aid_touch_navi_pane

0xd81b,	// (0x0001cce2) status_dt_navi_pane_ParamLimits

0xd81b,	// (0x0001cce2) status_dt_navi_pane

0xd833,	// (0x0001ccfa) status_dt_sta_pane_ParamLimits

0xd833,	// (0x0001ccfa) status_dt_sta_pane

0xf3d3,	// (0x0001e89a) dt_sta_controll_pane

0xf3e0,	// (0x0001e8a7) dt_sta_indi_pane

0xf3ed,	// (0x0001e8b4) dt_sta_title_pane

0x29bc,	// (0x00011e83) bg_dt_sta_indi_pane_ParamLimits

0x29bc,	// (0x00011e83) bg_dt_sta_indi_pane

0xf3ff,	// (0x0001e8c6) dt_sta_battery_pane

0xf407,	// (0x0001e8ce) dt_sta_indi_pane_g1

0xa512,	// (0x000199d9) dt_sta_indi_pane_g2

0xa51b,	// (0x000199e2) dt_sta_indi_pane_g3

0x0002,

0xfe8a,	// (0x0001f351) dt_sta_indi_pane_g

0xa524,	// (0x000199eb) dt_sta_signal_pane

0x3543,	// (0x00012a0a) bg_dt_sta_title_pane_ParamLimits

0x3543,	// (0x00012a0a) bg_dt_sta_title_pane

0xa52d,	// (0x000199f4) dt_sta_title_pane_g1

0xa535,	// (0x000199fc) dt_sta_title_pane_t1_ParamLimits

0xa535,	// (0x000199fc) dt_sta_title_pane_t1

0x2625,	// (0x00011aec) bg_dt_sta_control_pane

0xf410,	// (0x0001e8d7) dt_sta_controll_pane_g1

0xa553,	// (0x00019a1a) bg_dt_sta_title_pane_g1

0xa55c,	// (0x00019a23) bg_dt_sta_title_pane_g2

0xa565,	// (0x00019a2c) bg_dt_sta_title_pane_g3

0x0002,

0xfe91,	// (0x0001f358) bg_dt_sta_title_pane_g

0x77e6,	// (0x00016cad) bg_dt_sta_indi_pane_g1

0xa56e,	// (0x00019a35) dt_sta_signal_pane_g1

0xa576,	// (0x00019a3d) dt_sta_signal_pane_g2

0x0001,

0xfe98,	// (0x0001f35f) dt_sta_signal_pane_g

0xa57e,	// (0x00019a45) dt_sta_battery_pane_g1

0xa587,	// (0x00019a4e) dt_sta_battery_pane_t1

0x77e6,	// (0x00016cad) bg_dt_sta_control_pane_g1

0x3e4e,	// (0x00013315) fep_china_uni_eep_pane

0x3e56,	// (0x0001331d) fep_china_uni_entry_pane_ParamLimits

0x3e66,	// (0x0001332d) popup_fep_china_uni_window_g1_ParamLimits

0x3e76,	// (0x0001333d) popup_fep_china_uni_window_g2_ParamLimits

0x3e76,	// (0x0001333d) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001ebdf) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001ebdf) popup_fep_china_uni_window_g

0xa596,	// (0x00019a5d) fep_china_uni_eep_pane_g1

0xa59e,	// (0x00019a65) fep_china_uni_eep_pane_t1

0x9fed,	// (0x000194b4) aid_touch_area_size_smil_player

0x48de,	// (0x00013da5) lc0_clock_pane

0x4ac5,	// (0x00013f8c) status_pane_g5_ParamLimits

0x4ac5,	// (0x00013f8c) status_pane_g5

0xbd2b,	// (0x0001b1f2) popup_keymap_window

0x4a83,	// (0x00013f4a) status_icon_pane

0xa1e8,	// (0x000196af) cell_ai5_widget_pane_g3_ParamLimits

0xa202,	// (0x000196c9) cell_ai5_widget_pane_g4_ParamLimits

0xa212,	// (0x000196d9) cell_ai5_widget_pane_g5_ParamLimits

0xa23a,	// (0x00019701) cell_ai5_widget_pane_g8_ParamLimits

0xa23a,	// (0x00019701) cell_ai5_widget_pane_g8

0xa24e,	// (0x00019715) cell_ai5_widget_pane_g9_ParamLimits

0xa24e,	// (0x00019715) cell_ai5_widget_pane_g9

0xa262,	// (0x00019729) cell_ai5_widget_pane_g10_ParamLimits

0xa262,	// (0x00019729) cell_ai5_widget_pane_g10

0xa5ad,	// (0x00019a74) status_icon_pane_g1

0x2625,	// (0x00011aec) bg_popup_sub_pane_cp13

0xa5b5,	// (0x00019a7c) popup_keymap_window_t1

0xd4f5,	// (0x0001c9bc) control_pane_g6_ParamLimits

0xd4f5,	// (0x0001c9bc) control_pane_g6

0xd502,	// (0x0001c9c9) control_pane_g7_ParamLimits

0xd502,	// (0x0001c9c9) control_pane_g7

0xd50f,	// (0x0001c9d6) control_pane_g8_ParamLimits

0xd50f,	// (0x0001c9d6) control_pane_g8

0xf3d3,	// (0x0001e89a) dt_sta_controll_pane_ParamLimits

0xf3e0,	// (0x0001e8a7) dt_sta_indi_pane_ParamLimits

0xf3ed,	// (0x0001e8b4) dt_sta_title_pane_ParamLimits

0x2f00,	// (0x000123c7) aid_size_touch_scroll_bar_cale

0x0378,	// (0x0000f83f) popup_discreet_window_ParamLimits

0x0378,	// (0x0000f83f) popup_discreet_window

0xb91b,	// (0x0001ade2) popup_sk_window

0x53d6,	// (0x0001489d) bg_popup_sub_pane_cp28_ParamLimits

0x53d6,	// (0x0001489d) bg_popup_sub_pane_cp28

0xa5c3,	// (0x00019a8a) popup_discreet_window_g1_ParamLimits

0xa5c3,	// (0x00019a8a) popup_discreet_window_g1

0xa5e3,	// (0x00019aaa) popup_discreet_window_t1_ParamLimits

0xa5e3,	// (0x00019aaa) popup_discreet_window_t1

0xa601,	// (0x00019ac8) popup_discreet_window_t2_ParamLimits

0xa601,	// (0x00019ac8) popup_discreet_window_t2

0x0002,

0xfe9d,	// (0x0001f364) popup_discreet_window_t_ParamLimits

0xfe9d,	// (0x0001f364) popup_discreet_window_t

0x22c1,	// (0x00011788) popup_sk_window_g1

0x22cb,	// (0x00011792) popup_sk_window_g2

0x0001,

0xfea4,	// (0x0001f36b) popup_sk_window_g

0x22d3,	// (0x0001179a) popup_sk_window_t1

0x22e1,	// (0x000117a8) popup_sk_window_t1_copy1

0xa1d4,	// (0x0001969b) cell_ai5_widget_pane_g2_ParamLimits

0xa346,	// (0x0001980d) cell_ai5_widget_pane_t9_ParamLimits

0xa346,	// (0x0001980d) cell_ai5_widget_pane_t9

0x2625,	// (0x00011aec) main_fep_fshwr2_pane

0xc71d,	// (0x0001bbe4) aid_fshwr2_btn_pane

0xc72e,	// (0x0001bbf5) aid_fshwr2_syb_pane

0xc73f,	// (0x0001bc06) aid_fshwr2_txt_pane

0xc74b,	// (0x0001bc12) fshwr2_func_candi_pane

0xc76a,	// (0x0001bc31) fshwr2_hwr_syb_pane

0xc785,	// (0x0001bc4c) fshwr2_icf_pane

0x029f,	// (0x0000f766) fshwr2_icf_bg_pane

0x2361,	// (0x00011828) fshwr2_icf_pane_t1_ParamLimits

0x2361,	// (0x00011828) fshwr2_icf_pane_t1

0x3d3c,	// (0x00013203) fshwr2_func_candi_pane_g1

0xf419,	// (0x0001e8e0) fshwr2_func_candi_row_pane_ParamLimits

0xf419,	// (0x0001e8e0) fshwr2_func_candi_row_pane

0xc7b1,	// (0x0001bc78) cell_fshwr2_syb_pane_ParamLimits

0xc7b1,	// (0x0001bc78) cell_fshwr2_syb_pane

0x18a8,	// (0x00010d6f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x18a8,	// (0x00010d6f) fshwr2_hwr_syb_pane_g1

0x029f,	// (0x0000f766) bg_popup_call_pane_cp01

0xc7c7,	// (0x0001bc8e) fshwr2_func_candi_cell_pane_ParamLimits

0xc7c7,	// (0x0001bc8e) fshwr2_func_candi_cell_pane

0xf43c,	// (0x0001e903) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf43c,	// (0x0001e903) fshwr2_func_candi_cell_bg_pane

0xc812,	// (0x0001bcd9) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc812,	// (0x0001bcd9) fshwr2_func_candi_cell_pane_g1

0xc849,	// (0x0001bd10) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc849,	// (0x0001bd10) fshwr2_func_candi_cell_pane_t1

0x029f,	// (0x0000f766) bg_button_pane_cp08

0xa66f,	// (0x00019b36) cell_fshwr2_syb_bg_pane

0xc864,	// (0x0001bd2b) cell_fshwr2_syb_bg_pane_g1

0xc86c,	// (0x0001bd33) cell_fshwr2_syb_bg_pane_t1

0x3543,	// (0x00012a0a) main_tmo_pane

0xdb07,	// (0x0001cfce) uni_indicator_pane_g1_ParamLimits

0xdb1c,	// (0x0001cfe3) uni_indicator_pane_g2_ParamLimits

0xdb32,	// (0x0001cff9) uni_indicator_pane_g3_ParamLimits

0x5f25,	// (0x000153ec) uni_indicator_pane_g4_ParamLimits

0x5f25,	// (0x000153ec) uni_indicator_pane_g4

0x5f39,	// (0x00015400) uni_indicator_pane_g5_ParamLimits

0x5f39,	// (0x00015400) uni_indicator_pane_g5

0x5f39,	// (0x00015400) uni_indicator_pane_g6_ParamLimits

0x5f39,	// (0x00015400) uni_indicator_pane_g6

0xf917,	// (0x0001edde) uni_indicator_pane_g_ParamLimits

0xe7c4,	// (0x0001dc8b) popup_tmo_note_window_ParamLimits

0xe7c4,	// (0x0001dc8b) popup_tmo_note_window

0x1b41,	// (0x00011008) fshwr2_bg_pane

0xc83a,	// (0x0001bd01) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc83a,	// (0x0001bd01) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea9,	// (0x0001f370) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea9,	// (0x0001f370) fshwr2_func_candi_cell_pane_g

0x1890,	// (0x00010d57) bg_popup_window_pane_cp01

0x242c,	// (0x000118f3) bg_popup_window_pane_g1_cp01

0xa677,	// (0x00019b3e) bg_popup_window_pane_cp22_ParamLimits

0xa677,	// (0x00019b3e) bg_popup_window_pane_cp22

0xa685,	// (0x00019b4c) listscroll_tmo_link_pane_ParamLimits

0xa685,	// (0x00019b4c) listscroll_tmo_link_pane

0xa6c5,	// (0x00019b8c) popup_tmo_note_window_g1_ParamLimits

0xa6c5,	// (0x00019b8c) popup_tmo_note_window_g1

0xa6d2,	// (0x00019b99) tmo_note_info_pane_ParamLimits

0xa6d2,	// (0x00019b99) tmo_note_info_pane

0xf448,	// (0x0001e90f) list_tmo_note_info_pane_g1_ParamLimits

0xf448,	// (0x0001e90f) list_tmo_note_info_pane_g1

0xa703,	// (0x00019bca) list_tmo_note_info_pane_g2_ParamLimits

0xa703,	// (0x00019bca) list_tmo_note_info_pane_g2

0x0001,

0xfeae,	// (0x0001f375) list_tmo_note_info_pane_g_ParamLimits

0xfeae,	// (0x0001f375) list_tmo_note_info_pane_g

0xa71f,	// (0x00019be6) list_tmo_note_info_text_pane_ParamLimits

0xa71f,	// (0x00019be6) list_tmo_note_info_text_pane

0xa7a0,	// (0x00019c67) list_tmo_link_pane

0xa7ad,	// (0x00019c74) scroll_pane_cp20

0xa7ba,	// (0x00019c81) list_single_tmo_link_pane_ParamLimits

0xa7ba,	// (0x00019c81) list_single_tmo_link_pane

0xa7ca,	// (0x00019c91) list_single_tmo_link_pane_t1

0xa7d8,	// (0x00019c9f) list_tmo_note_info_text_pane_t1_ParamLimits

0xa7d8,	// (0x00019c9f) list_tmo_note_info_text_pane_t1

0xd12c,	// (0x0001c5f3) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd12c,	// (0x0001c5f3) aid_size_touch_scroll_bar_cp01

0xd05c,	// (0x0001c523) aid_size_touch_slider_marker

0xb90b,	// (0x0001add2) popup_settings_window_ParamLimits

0xb90b,	// (0x0001add2) popup_settings_window

0x473e,	// (0x00013c05) popup_candi_list_indi_window

0x478e,	// (0x00013c55) aid_touch_navi_pane_ParamLimits

0x1a9c,	// (0x00010f63) rs_clock_indi_pane

0x1aa5,	// (0x00010f6c) sctrl_sk_bottom_pane_ParamLimits

0x1ab6,	// (0x00010f7d) sctrl_sk_top_pane_ParamLimits

0x1bb9,	// (0x00011080) popup_fep_tooltip_window

0xa146,	// (0x0001960d) aid_size_cell_widget_grid_ParamLimits

0xa1bf,	// (0x00019686) cell_ai5_widget_pane_g1_ParamLimits

0xa1bf,	// (0x00019686) cell_ai5_widget_pane_g1

0xa222,	// (0x000196e9) cell_ai5_widget_pane_g6_ParamLimits

0xa22e,	// (0x000196f5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2c,	// (0x0001f2f3) cell_ai5_widget_pane_g_ParamLimits

0xfe2c,	// (0x0001f2f3) cell_ai5_widget_pane_g

0xa375,	// (0x0001983c) cell_ai5_widget_pane_t10_ParamLimits

0xa375,	// (0x0001983c) cell_ai5_widget_pane_t10

0xa393,	// (0x0001985a) grid_ai5_widget_pane_ParamLimits

0xa434,	// (0x000198fb) cell_contacts_ai5_widget_pane_ParamLimits

0xa434,	// (0x000198fb) cell_contacts_ai5_widget_pane

0xa616,	// (0x00019add) popup_discreet_window_t3_ParamLimits

0xa616,	// (0x00019add) popup_discreet_window_t3

0xc79d,	// (0x0001bc64) popup_fshwr2_char_preview_window_ParamLimits

0xc79d,	// (0x0001bc64) popup_fshwr2_char_preview_window

0xf45f,	// (0x0001e926) tmo_note_info_pane_t1

0xf474,	// (0x0001e93b) tmo_note_info_pane_t2

0xf48b,	// (0x0001e952) tmo_note_info_pane_t3

0xa77c,	// (0x00019c43) tmo_note_info_pane_t4

0xa78e,	// (0x00019c55) tmo_note_info_pane_t5

0x0004,

0xfeb3,	// (0x0001f37a) tmo_note_info_pane_t

0xa7a0,	// (0x00019c67) list_tmo_link_pane_ParamLimits

0xa7ad,	// (0x00019c74) scroll_pane_cp20_ParamLimits

0x029f,	// (0x0000f766) bg_popup_fep_char_preview_window_cp01

0xa7f1,	// (0x00019cb8) popup_fshwr2_char_preview_window_t1

0xa7ff,	// (0x00019cc6) popup_candi_list_indi_window_g1

0xa808,	// (0x00019ccf) bg_cell_contacts_ai5_widget_pane

0xa814,	// (0x00019cdb) cell_contacts_ai5_widget_pane_g1

0x8029,	// (0x000174f0) cell_contacts_ai5_widget_pane_g2

0xa829,	// (0x00019cf0) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebe,	// (0x0001f385) cell_contacts_ai5_widget_pane_g

0xa835,	// (0x00019cfc) cell_contacts_ai5_widget_pane_t1

0x3543,	// (0x00012a0a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa8ac,	// (0x00019d73) settings_container_pane

0x43de,	// (0x000138a5) listscroll_set_pane_copy1

0x6ba2,	// (0x00016069) scroll_pane_cp121_copy1

0x517b,	// (0x00014642) set_content_pane_copy1

0xa8b8,	// (0x00019d7f) aid_height_set_list_copy1_ParamLimits

0xa8b8,	// (0x00019d7f) aid_height_set_list_copy1

0x6159,	// (0x00015620) aid_size_parent_copy1_ParamLimits

0x6159,	// (0x00015620) aid_size_parent_copy1

0xa8c4,	// (0x00019d8b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa8c4,	// (0x00019d8b) button_value_adjust_pane_cp6_copy1

0x470a,	// (0x00013bd1) list_highlight_pane_cp2_copy1_ParamLimits

0x470a,	// (0x00013bd1) list_highlight_pane_cp2_copy1

0xa8d8,	// (0x00019d9f) list_set_pane_copy1_ParamLimits

0xa8d8,	// (0x00019d9f) list_set_pane_copy1

0xa847,	// (0x00019d0e) main_pane_set_t1_copy1_ParamLimits

0xa847,	// (0x00019d0e) main_pane_set_t1_copy1

0xa881,	// (0x00019d48) main_pane_set_t2_copy1_ParamLimits

0xa881,	// (0x00019d48) main_pane_set_t2_copy1

0xa985,	// (0x00019e4c) main_pane_set_t3_copy1

0xa993,	// (0x00019e5a) main_pane_set_t4_copy1

0xa8a0,	// (0x00019d67) set_content_pane_g1_copy1_ParamLimits

0xa8a0,	// (0x00019d67) set_content_pane_g1_copy1

0xa9a1,	// (0x00019e68) setting_code_pane_copy1

0xa9a9,	// (0x00019e70) setting_slider_graphic_pane_copy1

0xa9a9,	// (0x00019e70) setting_slider_pane_copy1

0xa9a9,	// (0x00019e70) setting_text_pane_copy1

0xa9a9,	// (0x00019e70) setting_volume_pane_copy1

0xa9a1,	// (0x00019e68) settings_code_pane_cp2_copy1

0xa9b1,	// (0x00019e78) settings_code_pane_cp_copy1_ParamLimits

0xa9b1,	// (0x00019e78) settings_code_pane_cp_copy1

0x2435,	// (0x000118fc) volume_set_pane_copy1

0xa9c5,	// (0x00019e8c) volume_set_pane_g10_copy1

0xa9cd,	// (0x00019e94) volume_set_pane_g1_copy1

0xa9d5,	// (0x00019e9c) volume_set_pane_g2_copy1

0xa9dd,	// (0x00019ea4) volume_set_pane_g3_copy1

0xa9e5,	// (0x00019eac) volume_set_pane_g4_copy1

0xa9ed,	// (0x00019eb4) volume_set_pane_g5_copy1

0xa9f5,	// (0x00019ebc) volume_set_pane_g6_copy1

0xa9fd,	// (0x00019ec4) volume_set_pane_g7_copy1

0xaa05,	// (0x00019ecc) volume_set_pane_g8_copy1

0xaa0d,	// (0x00019ed4) volume_set_pane_g9_copy1

0x2719,	// (0x00011be0) bg_set_opt_pane_cp_copy1_ParamLimits

0x2719,	// (0x00011be0) bg_set_opt_pane_cp_copy1

0x243d,	// (0x00011904) setting_slider_pane_t1_copy1_ParamLimits

0x243d,	// (0x00011904) setting_slider_pane_t1_copy1

0x245b,	// (0x00011922) setting_slider_pane_t2_copy1_ParamLimits

0x245b,	// (0x00011922) setting_slider_pane_t2_copy1

0x2475,	// (0x0001193c) setting_slider_pane_t3_copy1_ParamLimits

0x2475,	// (0x0001193c) setting_slider_pane_t3_copy1

0x248d,	// (0x00011954) slider_set_pane_copy1_ParamLimits

0x248d,	// (0x00011954) slider_set_pane_copy1

0x3666,	// (0x00012b2d) set_opt_bg_pane_g1_copy2

0x366e,	// (0x00012b35) set_opt_bg_pane_g2_copy2

0xaa15,	// (0x00019edc) set_opt_bg_pane_g3_copy2

0x367e,	// (0x00012b45) set_opt_bg_pane_g4_copy2

0x3686,	// (0x00012b4d) set_opt_bg_pane_g5_copy2

0x368e,	// (0x00012b55) set_opt_bg_pane_g6_copy2

0xaa1f,	// (0x00019ee6) set_opt_bg_pane_g7_copy2

0xaa27,	// (0x00019eee) set_opt_bg_pane_g8_copy2

0xaa31,	// (0x00019ef8) set_opt_bg_pane_g9_copy2

0x24a3,	// (0x0001196a) aid_size_touch_slider_mark_copy1_ParamLimits

0x24a3,	// (0x0001196a) aid_size_touch_slider_mark_copy1

0xaa3b,	// (0x00019f02) slider_set_pane_g1_copy1

0x24b7,	// (0x0001197e) slider_set_pane_g2_copy1

0x14d1,	// (0x00010998) slider_set_pane_g3_copy1_ParamLimits

0x14d1,	// (0x00010998) slider_set_pane_g3_copy1

0x14e5,	// (0x000109ac) slider_set_pane_g4_copy1_ParamLimits

0x14e5,	// (0x000109ac) slider_set_pane_g4_copy1

0x14fd,	// (0x000109c4) slider_set_pane_g5_copy1_ParamLimits

0x14fd,	// (0x000109c4) slider_set_pane_g5_copy1

0x14d1,	// (0x00010998) slider_set_pane_g6_copy1_ParamLimits

0x14d1,	// (0x00010998) slider_set_pane_g6_copy1

0x24bf,	// (0x00011986) slider_set_pane_g7_copy1_ParamLimits

0x24bf,	// (0x00011986) slider_set_pane_g7_copy1

0x2639,	// (0x00011b00) bg_set_opt_pane_cp2_copy1

0xaa44,	// (0x00019f0b) setting_slider_graphic_pane_g1_copy1

0xaa4d,	// (0x00019f14) setting_slider_graphic_pane_t1_copy1

0xaa5d,	// (0x00019f24) setting_slider_graphic_pane_t2_copy1

0xaa6d,	// (0x00019f34) slider_set_pane_cp_copy1

0xaa7d,	// (0x00019f44) input_focus_pane_cp1_copy1

0xaa86,	// (0x00019f4d) list_set_text_pane_copy1

0xaa8e,	// (0x00019f55) setting_text_pane_g1_copy1

0x2772,	// (0x00011c39) set_text_pane_t1_copy1

0xaa7d,	// (0x00019f44) input_focus_pane_cp2_copy1

0xaa8e,	// (0x00019f55) setting_code_pane_g1_copy1

0xaa97,	// (0x00019f5e) setting_code_pane_t1_copy1

0xaaa5,	// (0x00019f6c) list_set_graphic_pane_copy1

0x2639,	// (0x00011b00) bg_set_opt_pane_cp4_copy1

0x40d9,	// (0x000135a0) list_set_graphic_pane_g1_copy1_ParamLimits

0x40d9,	// (0x000135a0) list_set_graphic_pane_g1_copy1

0xaab8,	// (0x00019f7f) list_set_graphic_pane_g2_copy1

0x40f1,	// (0x000135b8) list_set_graphic_pane_t1_copy1_ParamLimits

0x40f1,	// (0x000135b8) list_set_graphic_pane_t1_copy1

0x77e6,	// (0x00016cad) rs_clock_indi_pane_g1

0xaac0,	// (0x00019f87) rs_clock_indi_pane_t1

0xaace,	// (0x00019f95) rs_indi_pane

0xaad6,	// (0x00019f9d) rs_indi_pane_g1

0xaadf,	// (0x00019fa6) rs_indi_pane_g2

0xaae8,	// (0x00019faf) rs_indi_pane_g3

0x0002,

0xfec5,	// (0x0001f38c) rs_indi_pane_g

0x43de,	// (0x000138a5) bg_popup_preview_window_pane_cp03

0xaaf1,	// (0x00019fb8) popup_fep_tooltip_window_t1

0x865e,	// (0x00017b25) popup_note2_window_g2_ParamLimits

0x865e,	// (0x00017b25) popup_note2_window_g2

0x0001,

0xfc5e,	// (0x0001f125) popup_note2_window_g_ParamLimits

0xfc5e,	// (0x0001f125) popup_note2_window_g

0x8c3c,	// (0x00018103) bg_popup_sub_pane_cp11_ParamLimits

0x8c49,	// (0x00018110) cell_ai3_links_pane_g1_ParamLimits

0x8c60,	// (0x00018127) cell_ai3_links_pane_t1

0x2772,	// (0x00011c39) set_text_pane_t1_copy1_ParamLimits

0x42ef,	// (0x000137b6) cell_graphic_popup_pane_cp2_ParamLimits

0x42ef,	// (0x000137b6) cell_graphic_popup_pane_cp2

0xaaff,	// (0x00019fc6) cell_graphic_popup_pane_g1_cp2

0x2d13,	// (0x000121da) cell_graphic_popup_pane_g2_cp2

0xab07,	// (0x00019fce) cell_graphic_popup_pane_g3_cp2

0xab0f,	// (0x00019fd6) cell_graphic_popup_pane_t2_cp2

0x2d24,	// (0x000121eb) grid_highlight_pane_cp3_cp2

0x3a57,	// (0x00012f1e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3543,	// (0x00012a0a) main_tmo_pane_ParamLimits

0xe7b8,	// (0x0001dc7f) popup_tmo_big_image_note_window

0xa1ae,	// (0x00019675) cell_ai5_widget_list_pane

0xa1b6,	// (0x0001967d) cell_ai5_widget_lrg_icon_pane

0xf45f,	// (0x0001e926) tmo_note_info_pane_t1_ParamLimits

0xf474,	// (0x0001e93b) tmo_note_info_pane_t2_ParamLimits

0xf48b,	// (0x0001e952) tmo_note_info_pane_t3_ParamLimits

0xa77c,	// (0x00019c43) tmo_note_info_pane_t4_ParamLimits

0xa78e,	// (0x00019c55) tmo_note_info_pane_t5_ParamLimits

0xfeb3,	// (0x0001f37a) tmo_note_info_pane_t_ParamLimits

0xa8ac,	// (0x00019d73) settings_container_pane_ParamLimits

0xaa75,	// (0x00019f3c) indicator_popup_pane_cp5

0xaa75,	// (0x00019f3c) indicator_popup_pane_cp6

0xaaa5,	// (0x00019f6c) list_set_graphic_pane_copy1_ParamLimits

0x2625,	// (0x00011aec) bg_popup_window_pane_cp23

0xab1d,	// (0x00019fe4) popup_tmo_big_image_note_window_g1

0xab27,	// (0x00019fee) popup_tmo_big_image_note_window_t1

0xab37,	// (0x00019ffe) popup_tmo_big_image_note_window_t2

0xab47,	// (0x0001a00e) popup_tmo_big_image_note_window_t3

0x0002,

0xfecc,	// (0x0001f393) popup_tmo_big_image_note_window_t

0x77e6,	// (0x00016cad) cell_ai5_widget_lrg_icon_pane_g1

0xab57,	// (0x0001a01e) cell_ai5_widget_lrg_icon_pane_t1

0xab65,	// (0x0001a02c) cell_ai5_widget_list_row_pane_ParamLimits

0xab65,	// (0x0001a02c) cell_ai5_widget_list_row_pane

0xab7c,	// (0x0001a043) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xab7c,	// (0x0001a043) cell_ai5_widget_list_row_pane_g1

0xab89,	// (0x0001a050) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xab89,	// (0x0001a050) cell_ai5_widget_list_row_pane_t1

0xabba,	// (0x0001a081) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xabba,	// (0x0001a081) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed3,	// (0x0001f39a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed3,	// (0x0001f39a) cell_ai5_widget_list_row_pane_t

0x029f,	// (0x0000f766) main_fep_vtchi_ss_pane

0xac02,	// (0x0001a0c9) popup_fep_char_pre_window

0xac0a,	// (0x0001a0d1) popup_fep_ituss_window

0xf4a0,	// (0x0001e967) popup_fep_vkbss_window

0xf4ad,	// (0x0001e974) grid_vkbss_keypad_pane_ParamLimits

0xf4ad,	// (0x0001e974) grid_vkbss_keypad_pane

0xac65,	// (0x0001a12c) ituss_keypad_pane

0x24e1,	// (0x000119a8) aid_vkbss_key_offset_ParamLimits

0x24e1,	// (0x000119a8) aid_vkbss_key_offset

0xc87b,	// (0x0001bd42) cell_vkbss_key_pane_ParamLimits

0xc87b,	// (0x0001bd42) cell_vkbss_key_pane

0xac74,	// (0x0001a13b) bg_cell_vkbss_key_g1_ParamLimits

0xac74,	// (0x0001a13b) bg_cell_vkbss_key_g1

0xf4bd,	// (0x0001e984) cell_vkbss_key_3p_pane_ParamLimits

0xf4bd,	// (0x0001e984) cell_vkbss_key_3p_pane

0xf4d7,	// (0x0001e99e) cell_vkbss_key_g1_ParamLimits

0xf4d7,	// (0x0001e99e) cell_vkbss_key_g1

0xf4f1,	// (0x0001e9b8) cell_vkbss_key_t1_ParamLimits

0xf4f1,	// (0x0001e9b8) cell_vkbss_key_t1

0x2503,	// (0x000119ca) cell_ituss_key_pane_ParamLimits

0x2503,	// (0x000119ca) cell_ituss_key_pane

0xacd3,	// (0x0001a19a) bg_cell_ituss_key_g1_ParamLimits

0xacd3,	// (0x0001a19a) bg_cell_ituss_key_g1

0xacdf,	// (0x0001a1a6) cell_ituss_key_pane_g1_ParamLimits

0xacdf,	// (0x0001a1a6) cell_ituss_key_pane_g1

0x2514,	// (0x000119db) cell_ituss_key_pane_g2_ParamLimits

0x2514,	// (0x000119db) cell_ituss_key_pane_g2

0x0002,

0xfeda,	// (0x0001f3a1) cell_ituss_key_pane_g_ParamLimits

0xfeda,	// (0x0001f3a1) cell_ituss_key_pane_g

0x2540,	// (0x00011a07) cell_ituss_key_t1_ParamLimits

0x2540,	// (0x00011a07) cell_ituss_key_t1

0x257a,	// (0x00011a41) cell_ituss_key_t2_ParamLimits

0x257a,	// (0x00011a41) cell_ituss_key_t2

0x25ab,	// (0x00011a72) cell_ituss_key_t3_ParamLimits

0x25ab,	// (0x00011a72) cell_ituss_key_t3

0x257a,	// (0x00011a41) cell_ituss_key_t4_ParamLimits

0x257a,	// (0x00011a41) cell_ituss_key_t4

0x0004,

0xfee1,	// (0x0001f3a8) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0001f3a8) cell_ituss_key_t

0xad0b,	// (0x0001a1d2) cell_vkbss_key_3p_pane_g1

0xad13,	// (0x0001a1da) cell_vkbss_key_3p_pane_g2

0xad1b,	// (0x0001a1e2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0001f3b3) cell_vkbss_key_3p_pane_g

0x43de,	// (0x000138a5) bg_popup_fep_char_preview_window_cp02

0xad23,	// (0x0001a1ea) popup_fep_char_pre_window_t1

0xf3a3,	// (0x0001e86a) main_ai5_sk_pane

0xa808,	// (0x00019ccf) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa814,	// (0x00019cdb) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8029,	// (0x000174f0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa829,	// (0x00019cf0) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebe,	// (0x0001f385) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa835,	// (0x00019cfc) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3543,	// (0x00012a0a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf51c,	// (0x0001e9e3) main_ai5_sk_pane_g1

0x520f,	// (0x000146d6) popup_query_code_window_g1

0xac20,	// (0x0001a0e7) popup_fep_vkb_icf_pane

0xac3f,	// (0x0001a106) popup_fep_vtchi_icf_pane

0xad3a,	// (0x0001a201) bg_icf_pane

0xad46,	// (0x0001a20d) list_vkb_icf_pane

0xad55,	// (0x0001a21c) bg_icf_pane_cp01

0xad68,	// (0x0001a22f) vtchi_icf_list_pane

0xad78,	// (0x0001a23f) list_vkb_icf_pane_t1_ParamLimits

0xad78,	// (0x0001a23f) list_vkb_icf_pane_t1

0xad8e,	// (0x0001a255) vtchi_icf_list_pane_t1_ParamLimits

0xad8e,	// (0x0001a255) vtchi_icf_list_pane_t1

0xac0a,	// (0x0001a0d1) popup_fep_ituss_window_ParamLimits

0xac3f,	// (0x0001a106) popup_fep_vtchi_icf_pane_ParamLimits

0xac65,	// (0x0001a12c) ituss_keypad_pane_ParamLimits

0x24d5,	// (0x0001199c) ituss_sks_pane

0xad3a,	// (0x0001a201) bg_icf_pane_ParamLimits

0xabe2,	// (0x0001a0a9) icf_edit_indi_pane_ParamLimits

0xabe2,	// (0x0001a0a9) icf_edit_indi_pane

0xad46,	// (0x0001a20d) list_vkb_icf_pane_ParamLimits

0xad55,	// (0x0001a21c) bg_icf_pane_cp01_ParamLimits

0xabf5,	// (0x0001a0bc) icf_edit_indi_pane_cp01_ParamLimits

0xabf5,	// (0x0001a0bc) icf_edit_indi_pane_cp01

0xad70,	// (0x0001a237) vtchi_query_pane

0x9fbd,	// (0x00019484) icf_edit_indi_pane_g1_ParamLimits

0x9fbd,	// (0x00019484) icf_edit_indi_pane_g1

0xf525,	// (0x0001e9ec) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0001e9ec) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0001f3cb) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0001f3cb) icf_edit_indi_pane_g

0xf537,	// (0x0001e9fe) icf_edit_indi_pane_t1

0xada8,	// (0x0001a26f) bg_input_focus_pane_cp042

0x2ef7,	// (0x000123be) vtchi_button_pane

0xadb1,	// (0x0001a278) vtchi_query_pane_t1

0xadbf,	// (0x0001a286) vtchi_query_pane_t2

0xadcd,	// (0x0001a294) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0001f3ba) vtchi_query_pane_t

0x029f,	// (0x0000f766) bg_button_pane_cp13

0xaddb,	// (0x0001a2a2) vtchi_button_pane_g1

0x25ee,	// (0x00011ab5) ituss_sks_pane_g1

0x25f9,	// (0x00011ac0) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0001f3c1) ituss_sks_pane_g

0xade3,	// (0x0001a2aa) ituss_sks_pane_t1

0xadf1,	// (0x0001a2b8) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0001f3c6) ituss_sks_pane_t

0x7222,	// (0x000166e9) indicator_nsta_pane_cp_g1

0x722a,	// (0x000166f1) indicator_nsta_pane_cp_g2

0x7232,	// (0x000166f9) indicator_nsta_pane_cp_g3

0x7222,	// (0x000166e9) indicator_nsta_pane_cp_g4

0x722a,	// (0x000166f1) indicator_nsta_pane_cp_g5

0x7232,	// (0x000166f9) indicator_nsta_pane_cp_g6

0x0005,

0xfa9c,	// (0x0001ef63) indicator_nsta_pane_cp_g

0xf1bb,	// (0x0001e682) cell_graphic2_pane_t2_ParamLimits

0xf1bb,	// (0x0001e682) cell_graphic2_pane_t2

0x0001,

0xfdb5,	// (0x0001f27c) cell_graphic2_pane_t_ParamLimits

0xfdb5,	// (0x0001f27c) cell_graphic2_pane_t

0xf1ef,	// (0x0001e6b6) cell_graphic2_control_pane_t1

0xd2d7,	// (0x0001c79e) signal_pane_g3_ParamLimits

0xd2d7,	// (0x0001c79e) signal_pane_g3

0xd2eb,	// (0x0001c7b2) signal_pane_g4_ParamLimits

0xd2eb,	// (0x0001c7b2) signal_pane_g4

0xabcc,	// (0x0001a093) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xabcc,	// (0x0001a093) cell_ai5_widget_list_row_pane_t3

0xacf9,	// (0x0001a1c0) cell_ituss_key_pane_t1_ParamLimits

0xacf9,	// (0x0001a1c0) cell_ituss_key_pane_t1

0x4e17,	// (0x000142de) form_field_data_wide_pane_vc_t2_ParamLimits

0x4e17,	// (0x000142de) form_field_data_wide_pane_vc_t2

0x4e2b,	// (0x000142f2) form_field_data_wide_pane_vc_t3_ParamLimits

0x4e2b,	// (0x000142f2) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0001ecc6) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0001ecc6) form_field_data_wide_pane_vc_t

0x6ee9,	// (0x000163b0) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6ee9,	// (0x000163b0) form_field_slider_wide_pane_vc_t3

0x6fc7,	// (0x0001648e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6fc7,	// (0x0001648e) form_field_popup_wide_pane_vc_t2

0x6fde,	// (0x000164a5) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6fde,	// (0x000164a5) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8b,	// (0x0001ef52) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8b,	// (0x0001ef52) form_field_popup_wide_pane_vc_t

0xc71d,	// (0x0001bbe4) aid_fshwr2_btn_pane_ParamLimits

0xc72e,	// (0x0001bbf5) aid_fshwr2_syb_pane_ParamLimits

0xc73f,	// (0x0001bc06) aid_fshwr2_txt_pane_ParamLimits

0x1b41,	// (0x00011008) fshwr2_bg_pane_ParamLimits

0xc74b,	// (0x0001bc12) fshwr2_func_candi_pane_ParamLimits

0xc76a,	// (0x0001bc31) fshwr2_hwr_syb_pane_ParamLimits

0xc785,	// (0x0001bc4c) fshwr2_icf_pane_ParamLimits

0x6e4f,	// (0x00016316) list_double_graphic_pane_vc_g4_ParamLimits

0x6e4f,	// (0x00016316) list_double_graphic_pane_vc_g4

0x2534,	// (0x000119fb) cell_ituss_key_pane_g3_ParamLimits

0x2534,	// (0x000119fb) cell_ituss_key_pane_g3

0x25dc,	// (0x00011aa3) cell_ituss_key_t5_ParamLimits

0x25dc,	// (0x00011aa3) cell_ituss_key_t5

0xf4a0,	// (0x0001e967) popup_fep_vkbss_window_ParamLimits

0xa13d,	// (0x00019604) aid_cell_ai5_quarter

0xf537,	// (0x0001e9fe) icf_edit_indi_pane_t1_ParamLimits

0x2a64,	// (0x00011f2b) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x2a64,	// (0x00011f2b) aid_tch_indicator_popup_pane_cp2

0x2a77,	// (0x00011f3e) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x2a77,	// (0x00011f3e) aid_tch_query_popup_data_pane_cp2

0x51b7,	// (0x0001467e) aid_tch_query_popup_pane_ParamLimits

0x51b7,	// (0x0001467e) aid_tch_query_popup_pane

0x51b7,	// (0x0001467e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x51b7,	// (0x0001467e) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
